task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_238; // 0xa3 JumpB
	func_2833(); // 0xa5 NEW_2
	var_35_int = 19166; // 0xa7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xa8 Eq
	if(var_36_bool == 0) goto Label_190; // 0xa9 JumpB
	var_37_string = ""; // 0xaa PushV
	var_37_string = "Neutral"; // 0xab MovS
	func_139(var_32_cvector, var_37_string); // 0xac NEW_2
	var_54_int = 518033; // 0xae PushI
	SetMessage(var_54_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_55_int = 518034; // 0xb3 PushI
	var_56_int = 28430; // 0xb4 PushI
	var_57_int = 19167; // 0xb5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xb6 TObjFunc
	var_58_int = 527134; // 0xb8 PushI
	var_59_int = 28433; // 0xb9 PushI
	var_60_int = 28432; // 0xba PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_61_int = 28433; // 0xbe PushI
	var_62_bool = var_31_bool == var_61_int; // 0xbf Eq
	if(var_62_bool == 0) goto Label_208; // 0xc0 JumpB
	var_63_string = ""; // 0xc1 PushV
	var_63_string = "Neutral"; // 0xc2 MovS
	func_139(var_32_cvector, var_63_string); // 0xc3 NEW_2
	var_64_int = 527135; // 0xc5 PushI
	SetMessage(var_64_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_65_int = 527137; // 0xca PushI
	var_66_int = -1; // 0xcb PushI
	var_67_int = 28435; // 0xcc PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_68_int = 28430; // 0xd0 PushI
	var_69_bool = var_31_bool == var_68_int; // 0xd1 Eq
	if(var_69_bool == 0) goto Label_226; // 0xd2 JumpB
	var_70_string = ""; // 0xd3 PushV
	var_70_string = "Neutral"; // 0xd4 MovS
	func_139(var_32_cvector, var_70_string); // 0xd5 NEW_2
	var_71_int = 527132; // 0xd7 PushI
	SetMessage(var_71_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_72_int = 527133; // 0xdc PushI
	var_73_int = -1; // 0xdd PushI
	var_74_int = 28431; // 0xde PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_3_string = 1; // 0xe2 TMovB
	var_75_bool = 0; // 0xe3 PushV
	func_2976(var_75_bool); // 0xe4 NEW_2
	if(var_75_bool == 0) goto Label_234; // 0xe6 JumpB
	lshStopAnimation(); // 0xe7 Func
	goto Label_236; // 0xe9 Jump
	
Label_236:
	return 0; // 0xec Return
	
Label_234:
	StopAnimation(); // 0xea Func
	
Label_238:
	return 0; // 0xee Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1b8 PushI
	if(var_33_int == 0) goto Label_665; // 0x1b9 JumpB
	func_2833(); // 0x1bb NEW_2
	var_35_int = 22586; // 0x1bd PushI
	var_36_bool = var_31_bool == var_35_int; // 0x1be Eq
	if(var_36_bool == 0) goto Label_507; // 0x1bf JumpB
	var_37_bool = 0; // 0x1c0 PushV
	var_37_bool = 0; // 0x1c1 MovB
	var_38_bool = 0; var_39_object = Obj(); // 0x1c2 PushV
	var_39_object = var_1_object; // 0x1c3 MovT
	func_3106(var_39_object); // 0x1c4 NEW_2
	if(var_38_bool == 0) goto Label_461; // 0x1c6 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x1c7 PushV
	var_47_object = var_1_object; // 0x1c8 MovT
	func_3118(var_47_object); // 0x1c9 NEW_2
	if(var_46_bool == 0) goto Label_461; // 0x1cb JumpB
	var_37_bool = 1; // 0x1cc MovB
	
Label_461:
	if(var_37_bool == 0) goto Label_487; // 0x1cd JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x1ce PushV
	var_52_object = var_1_object; // 0x1cf MovT
	var_53_object = var_0_object; // 0x1d0 MovT
	func_2989(); // 0x1d1 NEW_2
	var_56_string = ""; // 0x1d3 PushV
	var_56_string = "Fear"; // 0x1d4 MovS
	func_417(var_32_cvector, var_56_string); // 0x1d5 NEW_2
	var_73_int = 521408; // 0x1d7 PushI
	SetMessage(var_73_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_74_int = 521409; // 0x1dc PushI
	var_75_int = 25093; // 0x1dd PushI
	var_76_int = 22587; // 0x1de PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x1df TObjFunc
	var_77_int = 523832; // 0x1e1 PushI
	var_78_int = -1; // 0x1e2 PushI
	var_79_int = 25104; // 0x1e3 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x1e4 TObjFunc
	return 0; // 0x1e6 Return
	
Label_487:
	var_80_string = ""; // 0x1e7 PushV
	var_80_string = "Fear"; // 0x1e8 MovS
	func_417(var_32_cvector, var_80_string); // 0x1e9 NEW_2
	var_81_int = 521410; // 0x1eb PushI
	SetMessage(var_81_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_82_int = 521411; // 0x1f0 PushI
	var_83_int = 25088; // 0x1f1 PushI
	var_84_int = 22589; // 0x1f2 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1f3 TObjFunc
	var_85_int = 523816; // 0x1f5 PushI
	var_86_int = -1; // 0x1f6 PushI
	var_87_int = 25087; // 0x1f7 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x1f8 TObjFunc
	return 0; // 0x1fa Return
	
Label_507:
	var_88_int = 25088; // 0x1fb PushI
	var_89_bool = var_31_bool == var_88_int; // 0x1fc Eq
	if(var_89_bool == 0) goto Label_525; // 0x1fd JumpB
	var_90_string = ""; // 0x1fe PushV
	var_90_string = "Dream"; // 0x1ff MovS
	func_417(var_32_cvector, var_90_string); // 0x200 NEW_2
	var_91_int = 523817; // 0x202 PushI
	SetMessage(var_91_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_92_int = 523818; // 0x207 PushI
	var_93_int = 25090; // 0x208 PushI
	var_94_int = 25089; // 0x209 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x20a TObjFunc
	return 0; // 0x20c Return
	
Label_525:
	var_95_int = 25090; // 0x20d PushI
	var_96_bool = var_31_bool == var_95_int; // 0x20e Eq
	if(var_96_bool == 0) goto Label_548; // 0x20f JumpB
	var_97_string = ""; // 0x210 PushV
	var_97_string = "Dream"; // 0x211 MovS
	func_417(var_32_cvector, var_97_string); // 0x212 NEW_2
	var_98_int = 523819; // 0x214 PushI
	SetMessage(var_98_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_99_int = 523820; // 0x219 PushI
	var_100_int = -1; // 0x21a PushI
	var_101_int = 25091; // 0x21b PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x21c TObjFunc
	var_102_int = 523821; // 0x21e PushI
	var_103_int = -1; // 0x21f PushI
	var_104_int = 25092; // 0x220 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x221 TObjFunc
	return 0; // 0x223 Return
	
Label_548:
	var_105_int = 25093; // 0x224 PushI
	var_106_bool = var_31_bool == var_105_int; // 0x225 Eq
	if(var_106_bool == 0) goto Label_571; // 0x226 JumpB
	var_107_string = ""; // 0x227 PushV
	var_107_string = "Fear"; // 0x228 MovS
	func_417(var_32_cvector, var_107_string); // 0x229 NEW_2
	var_108_int = 523822; // 0x22b PushI
	SetMessage(var_108_int); // 0x22c TObjFunc
	ClearReplies(); // 0x22e TObjFunc
	var_109_int = 523823; // 0x230 PushI
	var_110_int = 25095; // 0x231 PushI
	var_111_int = 25094; // 0x232 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x233 TObjFunc
	var_112_int = 523833; // 0x235 PushI
	var_113_int = 25106; // 0x236 PushI
	var_114_int = 25105; // 0x237 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_115_int = 25106; // 0x23b PushI
	var_116_bool = var_31_bool == var_115_int; // 0x23c Eq
	if(var_116_bool == 0) goto Label_589; // 0x23d JumpB
	var_117_string = ""; // 0x23e PushV
	var_117_string = "Suspicion"; // 0x23f MovS
	func_417(var_32_cvector, var_117_string); // 0x240 NEW_2
	var_118_int = 523834; // 0x242 PushI
	SetMessage(var_118_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_119_int = 523835; // 0x247 PushI
	var_120_int = 25097; // 0x248 PushI
	var_121_int = 25107; // 0x249 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x24a TObjFunc
	return 0; // 0x24c Return
	
Label_589:
	var_122_int = 25095; // 0x24d PushI
	var_123_bool = var_31_bool == var_122_int; // 0x24e Eq
	if(var_123_bool == 0) goto Label_612; // 0x24f JumpB
	var_124_string = ""; // 0x250 PushV
	var_124_string = "Suspicion"; // 0x251 MovS
	func_417(var_32_cvector, var_124_string); // 0x252 NEW_2
	var_125_int = 523824; // 0x254 PushI
	SetMessage(var_125_int); // 0x255 TObjFunc
	ClearReplies(); // 0x257 TObjFunc
	var_126_int = 523825; // 0x259 PushI
	var_127_int = 25097; // 0x25a PushI
	var_128_int = 25096; // 0x25b PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x25c TObjFunc
	var_129_int = 523827; // 0x25e PushI
	var_130_int = 25097; // 0x25f PushI
	var_131_int = 25098; // 0x260 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x261 TObjFunc
	return 0; // 0x263 Return
	
Label_612:
	var_132_int = 25097; // 0x264 PushI
	var_133_bool = var_31_bool == var_132_int; // 0x265 Eq
	if(var_133_bool == 0) goto Label_635; // 0x266 JumpB
	var_134_string = ""; // 0x267 PushV
	var_134_string = "Suspicion"; // 0x268 MovS
	func_417(var_32_cvector, var_134_string); // 0x269 NEW_2
	var_135_int = 523826; // 0x26b PushI
	SetMessage(var_135_int); // 0x26c TObjFunc
	ClearReplies(); // 0x26e TObjFunc
	var_136_int = 523828; // 0x270 PushI
	var_137_int = 25101; // 0x271 PushI
	var_138_int = 25100; // 0x272 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x273 TObjFunc
	var_139_int = 523836; // 0x275 PushI
	var_140_int = -1; // 0x276 PushI
	var_141_int = 25109; // 0x277 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x278 TObjFunc
	return 0; // 0x27a Return
	
Label_635:
	var_142_int = 25101; // 0x27b PushI
	var_143_bool = var_31_bool == var_142_int; // 0x27c Eq
	if(var_143_bool == 0) goto Label_653; // 0x27d JumpB
	var_144_string = ""; // 0x27e PushV
	var_144_string = "Fear"; // 0x27f MovS
	func_417(var_32_cvector, var_144_string); // 0x280 NEW_2
	var_145_int = 523829; // 0x282 PushI
	SetMessage(var_145_int); // 0x283 TObjFunc
	ClearReplies(); // 0x285 TObjFunc
	var_146_int = 523830; // 0x287 PushI
	var_147_int = -1; // 0x288 PushI
	var_148_int = 25102; // 0x289 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x28a TObjFunc
	return 0; // 0x28c Return
	
Label_653:
	var_3_string = 1; // 0x28d TMovB
	var_149_bool = 0; // 0x28e PushV
	func_2976(var_149_bool); // 0x28f NEW_2
	if(var_149_bool == 0) goto Label_661; // 0x291 JumpB
	lshStopAnimation(); // 0x292 Func
	goto Label_663; // 0x294 Jump
	
Label_663:
	return 0; // 0x297 Return
	
Label_661:
	StopAnimation(); // 0x295 Func
	
Label_665:
	return 0; // 0x299 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x34a PushI
	if(var_33_int == 0) goto Label_1030; // 0x34b JumpB
	func_2833(); // 0x34d NEW_2
	var_35_int = 28414; // 0x34f PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x350 Eq
	if(var_36_bool == 0) goto Label_855; // 0x351 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x352 PushV
	var_37_object = var_1_object; // 0x353 MovT
	var_38_object = var_0_object; // 0x354 MovT
	func_2995(); // 0x355 NEW_2
	
Label_855:
	var_41_int = 28413; // 0x357 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x358 Eq
	if(var_42_bool == 0) goto Label_892; // 0x359 JumpB
	var_43_string = ""; // 0x35a PushV
	var_43_string = "Autizm"; // 0x35b MovS
	func_819(var_32_cvector, var_43_string); // 0x35c NEW_2
	var_60_int = 527115; // 0x35e PushI
	SetMessage(var_60_int); // 0x35f TObjFunc
	ClearReplies(); // 0x361 TObjFunc
	var_61_bool = 0; // 0x363 PushV
	var_61_bool = 0; // 0x364 MovB
	var_62_bool = 0; var_63_object = Obj(); // 0x365 PushV
	var_63_object = var_1_object; // 0x366 MovT
	func_3130(var_63_object); // 0x367 NEW_2
	if(var_62_bool == 0) goto Label_880; // 0x369 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x36a PushV
	var_71_object = var_1_object; // 0x36b MovT
	func_3201(var_71_object); // 0x36c NEW_2
	if(var_70_bool == 0) goto Label_880; // 0x36e JumpB
	var_61_bool = 1; // 0x36f MovB
	
Label_880:
	if(var_61_bool == 0) goto Label_886; // 0x370 JumpB
	var_76_int = 527116; // 0x371 PushI
	var_77_int = 28416; // 0x372 PushI
	var_78_int = 28414; // 0x373 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x374 TObjFunc
	
Label_886:
	var_79_int = 527117; // 0x376 PushI
	var_80_int = -1; // 0x377 PushI
	var_81_int = 28415; // 0x378 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x379 TObjFunc
	return 0; // 0x37b Return
	
Label_892:
	var_82_int = 28416; // 0x37c PushI
	var_83_bool = var_31_bool == var_82_int; // 0x37d Eq
	if(var_83_bool == 0) goto Label_910; // 0x37e JumpB
	var_84_string = ""; // 0x37f PushV
	var_84_string = "Autizm"; // 0x380 MovS
	func_819(var_32_cvector, var_84_string); // 0x381 NEW_2
	var_85_int = 527118; // 0x383 PushI
	SetMessage(var_85_int); // 0x384 TObjFunc
	ClearReplies(); // 0x386 TObjFunc
	var_86_int = 527119; // 0x388 PushI
	var_87_int = 28418; // 0x389 PushI
	var_88_int = 28417; // 0x38a PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x38b TObjFunc
	return 0; // 0x38d Return
	
Label_910:
	var_89_int = 28418; // 0x38e PushI
	var_90_bool = var_31_bool == var_89_int; // 0x38f Eq
	if(var_90_bool == 0) goto Label_928; // 0x390 JumpB
	var_91_string = ""; // 0x391 PushV
	var_91_string = "Fear"; // 0x392 MovS
	func_819(var_32_cvector, var_91_string); // 0x393 NEW_2
	var_92_int = 527120; // 0x395 PushI
	SetMessage(var_92_int); // 0x396 TObjFunc
	ClearReplies(); // 0x398 TObjFunc
	var_93_int = 527121; // 0x39a PushI
	var_94_int = 28420; // 0x39b PushI
	var_95_int = 28419; // 0x39c PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x39d TObjFunc
	return 0; // 0x39f Return
	
Label_928:
	var_96_int = 28420; // 0x3a0 PushI
	var_97_bool = var_31_bool == var_96_int; // 0x3a1 Eq
	if(var_97_bool == 0) goto Label_946; // 0x3a2 JumpB
	var_98_string = ""; // 0x3a3 PushV
	var_98_string = "Fear"; // 0x3a4 MovS
	func_819(var_32_cvector, var_98_string); // 0x3a5 NEW_2
	var_99_int = 527122; // 0x3a7 PushI
	SetMessage(var_99_int); // 0x3a8 TObjFunc
	ClearReplies(); // 0x3aa TObjFunc
	var_100_int = 527123; // 0x3ac PushI
	var_101_int = 28422; // 0x3ad PushI
	var_102_int = 28421; // 0x3ae PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x3af TObjFunc
	return 0; // 0x3b1 Return
	
Label_946:
	var_103_int = 28422; // 0x3b2 PushI
	var_104_bool = var_31_bool == var_103_int; // 0x3b3 Eq
	if(var_104_bool == 0) goto Label_964; // 0x3b4 JumpB
	var_105_string = ""; // 0x3b5 PushV
	var_105_string = "Suspicion"; // 0x3b6 MovS
	func_819(var_32_cvector, var_105_string); // 0x3b7 NEW_2
	var_106_int = 527124; // 0x3b9 PushI
	SetMessage(var_106_int); // 0x3ba TObjFunc
	ClearReplies(); // 0x3bc TObjFunc
	var_107_int = 527125; // 0x3be PushI
	var_108_int = 28424; // 0x3bf PushI
	var_109_int = 28423; // 0x3c0 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x3c1 TObjFunc
	return 0; // 0x3c3 Return
	
Label_964:
	var_110_int = 28424; // 0x3c4 PushI
	var_111_bool = var_31_bool == var_110_int; // 0x3c5 Eq
	if(var_111_bool == 0) goto Label_982; // 0x3c6 JumpB
	var_112_string = ""; // 0x3c7 PushV
	var_112_string = "Neutral"; // 0x3c8 MovS
	func_819(var_32_cvector, var_112_string); // 0x3c9 NEW_2
	var_113_int = 527126; // 0x3cb PushI
	SetMessage(var_113_int); // 0x3cc TObjFunc
	ClearReplies(); // 0x3ce TObjFunc
	var_114_int = 527127; // 0x3d0 PushI
	var_115_int = 28426; // 0x3d1 PushI
	var_116_int = 28425; // 0x3d2 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x3d3 TObjFunc
	return 0; // 0x3d5 Return
	
Label_982:
	var_117_int = 28426; // 0x3d6 PushI
	var_118_bool = var_31_bool == var_117_int; // 0x3d7 Eq
	if(var_118_bool == 0) goto Label_1000; // 0x3d8 JumpB
	var_119_string = ""; // 0x3d9 PushV
	var_119_string = "Neutral"; // 0x3da MovS
	func_819(var_32_cvector, var_119_string); // 0x3db NEW_2
	var_120_int = 527128; // 0x3dd PushI
	SetMessage(var_120_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_121_int = 527129; // 0x3e2 PushI
	var_122_int = 28428; // 0x3e3 PushI
	var_123_int = 28427; // 0x3e4 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3e5 TObjFunc
	return 0; // 0x3e7 Return
	
Label_1000:
	var_124_int = 28428; // 0x3e8 PushI
	var_125_bool = var_31_bool == var_124_int; // 0x3e9 Eq
	if(var_125_bool == 0) goto Label_1018; // 0x3ea JumpB
	var_126_string = ""; // 0x3eb PushV
	var_126_string = "Neutral"; // 0x3ec MovS
	func_819(var_32_cvector, var_126_string); // 0x3ed NEW_2
	var_127_int = 527130; // 0x3ef PushI
	SetMessage(var_127_int); // 0x3f0 TObjFunc
	ClearReplies(); // 0x3f2 TObjFunc
	var_128_int = 527131; // 0x3f4 PushI
	var_129_int = -1; // 0x3f5 PushI
	var_130_int = 28429; // 0x3f6 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x3f7 TObjFunc
	return 0; // 0x3f9 Return
	
Label_1018:
	var_3_string = 1; // 0x3fa TMovB
	var_131_bool = 0; // 0x3fb PushV
	func_2976(var_131_bool); // 0x3fc NEW_2
	if(var_131_bool == 0) goto Label_1026; // 0x3fe JumpB
	lshStopAnimation(); // 0x3ff Func
	goto Label_1028; // 0x401 Jump
	
Label_1028:
	return 0; // 0x404 Return
	
Label_1026:
	StopAnimation(); // 0x402 Func
	
Label_1030:
	return 0; // 0x406 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x4df PushI
	if(var_33_int == 0) goto Label_1767; // 0x4e0 JumpB
	func_2833(); // 0x4e2 NEW_2
	var_35_int = 32479; // 0x4e4 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x4e5 Eq
	if(var_36_bool == 0) goto Label_1265; // 0x4e6 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x4e7 PushV
	var_37_object = var_1_object; // 0x4e8 MovT
	var_38_object = var_0_object; // 0x4e9 MovT
	func_3016(); // 0x4ea NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x4ec PushV
	var_86_object = var_1_object; // 0x4ed MovT
	var_87_object = var_0_object; // 0x4ee MovT
	func_3044(); // 0x4ef NEW_2
	
Label_1265:
	var_112_int = 32616; // 0x4f1 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x4f2 Eq
	if(var_113_bool == 0) goto Label_1273; // 0x4f3 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x4f4 PushV
	var_114_object = var_1_object; // 0x4f5 MovT
	var_115_object = var_0_object; // 0x4f6 MovT
	func_3084(); // 0x4f7 NEW_2
	
Label_1273:
	var_127_int = 31854; // 0x4f9 PushI
	var_128_bool = var_32_cvector == var_127_int; // 0x4fa Eq
	if(var_128_bool == 0) goto Label_1281; // 0x4fb JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x4fc PushV
	var_129_object = var_1_object; // 0x4fd MovT
	var_130_object = var_0_object; // 0x4fe MovT
	func_3001(); // 0x4ff NEW_2
	
Label_1281:
	var_141_int = 32486; // 0x501 PushI
	var_142_bool = var_32_cvector == var_141_int; // 0x502 Eq
	if(var_142_bool == 0) goto Label_1304; // 0x503 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x504 PushV
	var_143_object = var_1_object; // 0x505 MovT
	var_144_object = var_0_object; // 0x506 MovT
	func_2978(var_144_object); // 0x507 NEW_2
	var_167_object = Obj(); var_168_object = Obj(); // 0x509 PushV
	var_167_object = var_1_object; // 0x50a MovT
	var_168_object = var_0_object; // 0x50b MovT
	func_3010(); // 0x50c NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x50e PushV
	var_171_object = var_1_object; // 0x50f MovT
	var_172_object = var_0_object; // 0x510 MovT
	func_3094(); // 0x511 NEW_2
	var_177_object = Obj(); var_178_object = Obj(); // 0x513 PushV
	var_177_object = var_1_object; // 0x514 MovT
	var_178_object = var_0_object; // 0x515 MovT
	func_3060(); // 0x516 NEW_2
	
Label_1304:
	var_192_int = 32633; // 0x518 PushI
	var_193_bool = var_32_cvector == var_192_int; // 0x519 Eq
	if(var_193_bool == 0) goto Label_1327; // 0x51a JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0x51b PushV
	var_194_object = var_1_object; // 0x51c MovT
	var_195_object = var_0_object; // 0x51d MovT
	func_2978(var_195_object); // 0x51e NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0x520 PushV
	var_196_object = var_1_object; // 0x521 MovT
	var_197_object = var_0_object; // 0x522 MovT
	func_3010(); // 0x523 NEW_2
	var_198_object = Obj(); var_199_object = Obj(); // 0x525 PushV
	var_198_object = var_1_object; // 0x526 MovT
	var_199_object = var_0_object; // 0x527 MovT
	func_3094(); // 0x528 NEW_2
	var_200_object = Obj(); var_201_object = Obj(); // 0x52a PushV
	var_200_object = var_1_object; // 0x52b MovT
	var_201_object = var_0_object; // 0x52c MovT
	func_3060(); // 0x52d NEW_2
	
Label_1327:
	var_202_int = 32489; // 0x52f PushI
	var_203_bool = var_32_cvector == var_202_int; // 0x530 Eq
	if(var_203_bool == 0) goto Label_1335; // 0x531 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x532 PushV
	var_204_object = var_1_object; // 0x533 MovT
	var_205_object = var_0_object; // 0x534 MovT
	func_3074(); // 0x535 NEW_2
	
Label_1335:
	var_217_int = 32470; // 0x537 PushI
	var_218_bool = var_31_bool == var_217_int; // 0x538 Eq
	if(var_218_bool == 0) goto Label_1412; // 0x539 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x53a PushV
	var_220_object = var_1_object; // 0x53b MovT
	func_3154(var_220_object); // 0x53c NEW_2
	if(var_219_bool == 0) goto Label_1358; // 0x53e JumpB
	var_227_string = ""; // 0x53f PushV
	var_227_string = "Suspicion"; // 0x540 MovS
	func_1224(var_32_cvector, var_227_string); // 0x541 NEW_2
	var_244_int = 531162; // 0x543 PushI
	SetMessage(var_244_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_245_int = 531292; // 0x548 PushI
	var_246_int = 32610; // 0x549 PushI
	var_247_int = 32609; // 0x54a PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x54b TObjFunc
	return 0; // 0x54d Return
	
Label_1358:
	var_248_string = ""; // 0x54e PushV
	var_248_string = "Neutral"; // 0x54f MovS
	func_1224(var_32_cvector, var_248_string); // 0x550 NEW_2
	var_249_int = 530485; // 0x552 PushI
	SetMessage(var_249_int); // 0x553 TObjFunc
	ClearReplies(); // 0x555 TObjFunc
	var_250_bool = 0; var_251_object = Obj(); // 0x557 PushV
	var_251_object = var_1_object; // 0x558 MovT
	func_3142(var_251_object); // 0x559 NEW_2
	if(var_250_bool == 0) goto Label_1377; // 0x55b JumpB
	var_256_int = 530486; // 0x55c PushI
	var_257_int = 31853; // 0x55d PushI
	var_258_int = 31852; // 0x55e PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x55f TObjFunc
	
Label_1377:
	var_259_bool = 0; // 0x561 PushV
	var_259_bool = 0; // 0x562 MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x563 PushV
	var_261_object = var_1_object; // 0x564 MovT
	func_3166(var_261_object); // 0x565 NEW_2
	if(var_260_bool == 0) goto Label_1390; // 0x567 JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x568 PushV
	var_267_object = var_1_object; // 0x569 MovT
	func_3178(var_266_bool, var_267_object); // 0x56a NEW_2
	if(var_266_bool == 0) goto Label_1390; // 0x56c JumpB
	var_259_bool = 1; // 0x56d MovB
	
Label_1390:
	if(var_259_bool == 0) goto Label_1396; // 0x56e JumpB
	var_275_int = 531172; // 0x56f PushI
	var_276_int = 32623; // 0x570 PushI
	var_277_int = 32480; // 0x571 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x572 TObjFunc
	
Label_1396:
	var_278_bool = 0; var_279_object = Obj(); // 0x574 PushV
	var_279_object = var_1_object; // 0x575 MovT
	func_3189(var_279_object); // 0x576 NEW_2
	if(var_278_bool == 0) goto Label_1406; // 0x578 JumpB
	var_284_int = 531179; // 0x579 PushI
	var_285_int = 32617; // 0x57a PushI
	var_286_int = 32487; // 0x57b PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x57c TObjFunc
	
Label_1406:
	var_287_int = 530489; // 0x57e PushI
	var_288_int = -1; // 0x57f PushI
	var_289_int = 31855; // 0x580 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x581 TObjFunc
	return 0; // 0x583 Return
	
Label_1412:
	var_290_int = 32617; // 0x584 PushI
	var_291_bool = var_31_bool == var_290_int; // 0x585 Eq
	if(var_291_bool == 0) goto Label_1430; // 0x586 JumpB
	var_292_string = ""; // 0x587 PushV
	var_292_string = "Neutral"; // 0x588 MovS
	func_1224(var_32_cvector, var_292_string); // 0x589 NEW_2
	var_293_int = 531297; // 0x58b PushI
	SetMessage(var_293_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_294_int = 531298; // 0x590 PushI
	var_295_int = 32488; // 0x591 PushI
	var_296_int = 32618; // 0x592 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x593 TObjFunc
	return 0; // 0x595 Return
	
Label_1430:
	var_297_int = 32488; // 0x596 PushI
	var_298_bool = var_31_bool == var_297_int; // 0x597 Eq
	if(var_298_bool == 0) goto Label_1453; // 0x598 JumpB
	var_299_string = ""; // 0x599 PushV
	var_299_string = "Neutral"; // 0x59a MovS
	func_1224(var_32_cvector, var_299_string); // 0x59b NEW_2
	var_300_int = 531180; // 0x59d PushI
	SetMessage(var_300_int); // 0x59e TObjFunc
	ClearReplies(); // 0x5a0 TObjFunc
	var_301_int = 531299; // 0x5a2 PushI
	var_302_int = 32620; // 0x5a3 PushI
	var_303_int = 32619; // 0x5a4 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x5a5 TObjFunc
	var_304_int = 531301; // 0x5a7 PushI
	var_305_int = 32620; // 0x5a8 PushI
	var_306_int = 32621; // 0x5a9 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x5aa TObjFunc
	return 0; // 0x5ac Return
	
Label_1453:
	var_307_int = 32620; // 0x5ad PushI
	var_308_bool = var_31_bool == var_307_int; // 0x5ae Eq
	if(var_308_bool == 0) goto Label_1471; // 0x5af JumpB
	var_309_string = ""; // 0x5b0 PushV
	var_309_string = "Neutral"; // 0x5b1 MovS
	func_1224(var_32_cvector, var_309_string); // 0x5b2 NEW_2
	var_310_int = 531300; // 0x5b4 PushI
	SetMessage(var_310_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_311_int = 531181; // 0x5b9 PushI
	var_312_int = -1; // 0x5ba PushI
	var_313_int = 32489; // 0x5bb PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x5bc TObjFunc
	return 0; // 0x5be Return
	
Label_1471:
	var_314_int = 32623; // 0x5bf PushI
	var_315_bool = var_31_bool == var_314_int; // 0x5c0 Eq
	if(var_315_bool == 0) goto Label_1494; // 0x5c1 JumpB
	var_316_string = ""; // 0x5c2 PushV
	var_316_string = "Neutral"; // 0x5c3 MovS
	func_1224(var_32_cvector, var_316_string); // 0x5c4 NEW_2
	var_317_int = 531302; // 0x5c6 PushI
	SetMessage(var_317_int); // 0x5c7 TObjFunc
	ClearReplies(); // 0x5c9 TObjFunc
	var_318_int = 531303; // 0x5cb PushI
	var_319_int = 32481; // 0x5cc PushI
	var_320_int = 32624; // 0x5cd PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x5ce TObjFunc
	var_321_int = 531304; // 0x5d0 PushI
	var_322_int = 32481; // 0x5d1 PushI
	var_323_int = 32625; // 0x5d2 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x5d3 TObjFunc
	return 0; // 0x5d5 Return
	
Label_1494:
	var_324_int = 32481; // 0x5d6 PushI
	var_325_bool = var_31_bool == var_324_int; // 0x5d7 Eq
	if(var_325_bool == 0) goto Label_1517; // 0x5d8 JumpB
	var_326_string = ""; // 0x5d9 PushV
	var_326_string = "Neutral"; // 0x5da MovS
	func_1224(var_32_cvector, var_326_string); // 0x5db NEW_2
	var_327_int = 531173; // 0x5dd PushI
	SetMessage(var_327_int); // 0x5de TObjFunc
	ClearReplies(); // 0x5e0 TObjFunc
	var_328_int = 531174; // 0x5e2 PushI
	var_329_int = 32483; // 0x5e3 PushI
	var_330_int = 32482; // 0x5e4 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x5e5 TObjFunc
	var_331_int = 531305; // 0x5e7 PushI
	var_332_int = 32483; // 0x5e8 PushI
	var_333_int = 32627; // 0x5e9 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x5ea TObjFunc
	return 0; // 0x5ec Return
	
Label_1517:
	var_334_int = 32483; // 0x5ed PushI
	var_335_bool = var_31_bool == var_334_int; // 0x5ee Eq
	if(var_335_bool == 0) goto Label_1540; // 0x5ef JumpB
	var_336_string = ""; // 0x5f0 PushV
	var_336_string = "Neutral"; // 0x5f1 MovS
	func_1224(var_32_cvector, var_336_string); // 0x5f2 NEW_2
	var_337_int = 531175; // 0x5f4 PushI
	SetMessage(var_337_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_338_int = 531176; // 0x5f9 PushI
	var_339_int = 32485; // 0x5fa PushI
	var_340_int = 32484; // 0x5fb PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x5fc TObjFunc
	var_341_int = 531306; // 0x5fe PushI
	var_342_int = 32630; // 0x5ff PushI
	var_343_int = 32629; // 0x600 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x601 TObjFunc
	return 0; // 0x603 Return
	
Label_1540:
	var_344_int = 32630; // 0x604 PushI
	var_345_bool = var_31_bool == var_344_int; // 0x605 Eq
	if(var_345_bool == 0) goto Label_1558; // 0x606 JumpB
	var_346_string = ""; // 0x607 PushV
	var_346_string = "Neutral"; // 0x608 MovS
	func_1224(var_32_cvector, var_346_string); // 0x609 NEW_2
	var_347_int = 531307; // 0x60b PushI
	SetMessage(var_347_int); // 0x60c TObjFunc
	ClearReplies(); // 0x60e TObjFunc
	var_348_int = 531308; // 0x610 PushI
	var_349_int = 32485; // 0x611 PushI
	var_350_int = 32631; // 0x612 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x613 TObjFunc
	return 0; // 0x615 Return
	
Label_1558:
	var_351_int = 32485; // 0x616 PushI
	var_352_bool = var_31_bool == var_351_int; // 0x617 Eq
	if(var_352_bool == 0) goto Label_1581; // 0x618 JumpB
	var_353_string = ""; // 0x619 PushV
	var_353_string = "Neutral"; // 0x61a MovS
	func_1224(var_32_cvector, var_353_string); // 0x61b NEW_2
	var_354_int = 531177; // 0x61d PushI
	SetMessage(var_354_int); // 0x61e TObjFunc
	ClearReplies(); // 0x620 TObjFunc
	var_355_int = 531178; // 0x622 PushI
	var_356_int = -1; // 0x623 PushI
	var_357_int = 32486; // 0x624 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x625 TObjFunc
	var_358_int = 531309; // 0x627 PushI
	var_359_int = -1; // 0x628 PushI
	var_360_int = 32633; // 0x629 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_361_int = 31853; // 0x62d PushI
	var_362_bool = var_31_bool == var_361_int; // 0x62e Eq
	if(var_362_bool == 0) goto Label_1604; // 0x62f JumpB
	var_363_string = ""; // 0x630 PushV
	var_363_string = "Dream"; // 0x631 MovS
	func_1224(var_32_cvector, var_363_string); // 0x632 NEW_2
	var_364_int = 530487; // 0x634 PushI
	SetMessage(var_364_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_365_int = 531310; // 0x639 PushI
	var_366_int = 32635; // 0x63a PushI
	var_367_int = 32634; // 0x63b PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x63c TObjFunc
	var_368_int = 531314; // 0x63e PushI
	var_369_int = 32635; // 0x63f PushI
	var_370_int = 32638; // 0x640 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_371_int = 32635; // 0x644 PushI
	var_372_bool = var_31_bool == var_371_int; // 0x645 Eq
	if(var_372_bool == 0) goto Label_1627; // 0x646 JumpB
	var_373_string = ""; // 0x647 PushV
	var_373_string = "Dream"; // 0x648 MovS
	func_1224(var_32_cvector, var_373_string); // 0x649 NEW_2
	var_374_int = 531311; // 0x64b PushI
	SetMessage(var_374_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_375_int = 531312; // 0x650 PushI
	var_376_int = 32637; // 0x651 PushI
	var_377_int = 32636; // 0x652 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x653 TObjFunc
	var_378_int = 531315; // 0x655 PushI
	var_379_int = 32637; // 0x656 PushI
	var_380_int = 32639; // 0x657 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x658 TObjFunc
	return 0; // 0x65a Return
	
Label_1627:
	var_381_int = 32637; // 0x65b PushI
	var_382_bool = var_31_bool == var_381_int; // 0x65c Eq
	if(var_382_bool == 0) goto Label_1645; // 0x65d JumpB
	var_383_string = ""; // 0x65e PushV
	var_383_string = "Dream"; // 0x65f MovS
	func_1224(var_32_cvector, var_383_string); // 0x660 NEW_2
	var_384_int = 531313; // 0x662 PushI
	SetMessage(var_384_int); // 0x663 TObjFunc
	ClearReplies(); // 0x665 TObjFunc
	var_385_int = 530488; // 0x667 PushI
	var_386_int = -1; // 0x668 PushI
	var_387_int = 31854; // 0x669 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x66a TObjFunc
	return 0; // 0x66c Return
	
Label_1645:
	var_388_int = 32610; // 0x66d PushI
	var_389_bool = var_31_bool == var_388_int; // 0x66e Eq
	if(var_389_bool == 0) goto Label_1668; // 0x66f JumpB
	var_390_string = ""; // 0x670 PushV
	var_390_string = "Suspicion"; // 0x671 MovS
	func_1224(var_32_cvector, var_390_string); // 0x672 NEW_2
	var_391_int = 531293; // 0x674 PushI
	SetMessage(var_391_int); // 0x675 TObjFunc
	ClearReplies(); // 0x677 TObjFunc
	var_392_int = 531291; // 0x679 PushI
	var_393_int = 32473; // 0x67a PushI
	var_394_int = 32608; // 0x67b PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x67c TObjFunc
	var_395_int = 531163; // 0x67e PushI
	var_396_int = 32475; // 0x67f PushI
	var_397_int = 32471; // 0x680 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x681 TObjFunc
	return 0; // 0x683 Return
	
Label_1668:
	var_398_int = 32473; // 0x684 PushI
	var_399_bool = var_31_bool == var_398_int; // 0x685 Eq
	if(var_399_bool == 0) goto Label_1691; // 0x686 JumpB
	var_400_string = ""; // 0x687 PushV
	var_400_string = "Dream"; // 0x688 MovS
	func_1224(var_32_cvector, var_400_string); // 0x689 NEW_2
	var_401_int = 531165; // 0x68b PushI
	SetMessage(var_401_int); // 0x68c TObjFunc
	ClearReplies(); // 0x68e TObjFunc
	var_402_int = 531166; // 0x690 PushI
	var_403_int = 32475; // 0x691 PushI
	var_404_int = 32474; // 0x692 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x693 TObjFunc
	var_405_int = 531294; // 0x695 PushI
	var_406_int = 32476; // 0x696 PushI
	var_407_int = 32612; // 0x697 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x698 TObjFunc
	return 0; // 0x69a Return
	
Label_1691:
	var_408_int = 32475; // 0x69b PushI
	var_409_bool = var_31_bool == var_408_int; // 0x69c Eq
	if(var_409_bool == 0) goto Label_1714; // 0x69d JumpB
	var_410_string = ""; // 0x69e PushV
	var_410_string = "Dream"; // 0x69f MovS
	func_1224(var_32_cvector, var_410_string); // 0x6a0 NEW_2
	var_411_int = 531167; // 0x6a2 PushI
	SetMessage(var_411_int); // 0x6a3 TObjFunc
	ClearReplies(); // 0x6a5 TObjFunc
	var_412_int = 531164; // 0x6a7 PushI
	var_413_int = 32476; // 0x6a8 PushI
	var_414_int = 32472; // 0x6a9 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x6aa TObjFunc
	var_415_int = 531295; // 0x6ac PushI
	var_416_int = 32478; // 0x6ad PushI
	var_417_int = 32614; // 0x6ae PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x6af TObjFunc
	return 0; // 0x6b1 Return
	
Label_1714:
	var_418_int = 32476; // 0x6b2 PushI
	var_419_bool = var_31_bool == var_418_int; // 0x6b3 Eq
	if(var_419_bool == 0) goto Label_1732; // 0x6b4 JumpB
	var_420_string = ""; // 0x6b5 PushV
	var_420_string = "Dream"; // 0x6b6 MovS
	func_1224(var_32_cvector, var_420_string); // 0x6b7 NEW_2
	var_421_int = 531168; // 0x6b9 PushI
	SetMessage(var_421_int); // 0x6ba TObjFunc
	ClearReplies(); // 0x6bc TObjFunc
	var_422_int = 531169; // 0x6be PushI
	var_423_int = 32478; // 0x6bf PushI
	var_424_int = 32477; // 0x6c0 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x6c1 TObjFunc
	return 0; // 0x6c3 Return
	
Label_1732:
	var_425_int = 32478; // 0x6c4 PushI
	var_426_bool = var_31_bool == var_425_int; // 0x6c5 Eq
	if(var_426_bool == 0) goto Label_1755; // 0x6c6 JumpB
	var_427_string = ""; // 0x6c7 PushV
	var_427_string = "Suspicion"; // 0x6c8 MovS
	func_1224(var_32_cvector, var_427_string); // 0x6c9 NEW_2
	var_428_int = 531170; // 0x6cb PushI
	SetMessage(var_428_int); // 0x6cc TObjFunc
	ClearReplies(); // 0x6ce TObjFunc
	var_429_int = 531171; // 0x6d0 PushI
	var_430_int = -1; // 0x6d1 PushI
	var_431_int = 32479; // 0x6d2 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x6d3 TObjFunc
	var_432_int = 531296; // 0x6d5 PushI
	var_433_int = -1; // 0x6d6 PushI
	var_434_int = 32616; // 0x6d7 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x6d8 TObjFunc
	return 0; // 0x6da Return
	
Label_1755:
	var_3_string = 1; // 0x6db TMovB
	var_435_bool = 0; // 0x6dc PushV
	func_2976(var_435_bool); // 0x6dd NEW_2
	if(var_435_bool == 0) goto Label_1763; // 0x6df JumpB
	lshStopAnimation(); // 0x6e0 Func
	goto Label_1765; // 0x6e2 Jump
	
Label_1765:
	return 0; // 0x6e5 Return
	
Label_1763:
	StopAnimation(); // 0x6e3 Func
	
Label_1767:
	return 0; // 0x6e7 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x794 PushI
	if(var_33_int == 0) goto Label_2067; // 0x795 JumpB
	func_2833(); // 0x797 NEW_2
	var_35_int = 36919; // 0x799 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x79a Eq
	if(var_36_bool == 0) goto Label_1953; // 0x79b JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x79c PushV
	var_37_object = var_1_object; // 0x79d MovT
	var_38_object = var_0_object; // 0x79e MovT
	func_3100(); // 0x79f NEW_2
	
Label_1953:
	var_41_int = 36918; // 0x7a1 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x7a2 Eq
	if(var_42_bool == 0) goto Label_1986; // 0x7a3 JumpB
	var_43_string = ""; // 0x7a4 PushV
	var_43_string = "Autizm"; // 0x7a5 MovS
	func_1917(var_32_cvector, var_43_string); // 0x7a6 NEW_2
	var_60_int = 535243; // 0x7a8 PushI
	SetMessage(var_60_int); // 0x7a9 TObjFunc
	ClearReplies(); // 0x7ab TObjFunc
	var_61_bool = 0; var_62_object = Obj(); // 0x7ad PushV
	var_62_object = var_1_object; // 0x7ae MovT
	func_3213(var_62_object); // 0x7af NEW_2
	if(var_61_bool == 0) goto Label_1975; // 0x7b1 JumpB
	var_69_int = 535244; // 0x7b2 PushI
	var_70_int = 37054; // 0x7b3 PushI
	var_71_int = 36919; // 0x7b4 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x7b5 TObjFunc
	
Label_1975:
	var_72_int = 535367; // 0x7b7 PushI
	var_73_int = -1; // 0x7b8 PushI
	var_74_int = 37052; // 0x7b9 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x7ba TObjFunc
	var_75_int = 535368; // 0x7bc PushI
	var_76_int = -1; // 0x7bd PushI
	var_77_int = 37053; // 0x7be PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x7bf TObjFunc
	return 0; // 0x7c1 Return
	
Label_1986:
	var_78_int = 37054; // 0x7c2 PushI
	var_79_bool = var_31_bool == var_78_int; // 0x7c3 Eq
	if(var_79_bool == 0) goto Label_2009; // 0x7c4 JumpB
	var_80_string = ""; // 0x7c5 PushV
	var_80_string = "Autizm"; // 0x7c6 MovS
	func_1917(var_32_cvector, var_80_string); // 0x7c7 NEW_2
	var_81_int = 535369; // 0x7c9 PushI
	SetMessage(var_81_int); // 0x7ca TObjFunc
	ClearReplies(); // 0x7cc TObjFunc
	var_82_int = 535370; // 0x7ce PushI
	var_83_int = 37056; // 0x7cf PushI
	var_84_int = 37055; // 0x7d0 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x7d1 TObjFunc
	var_85_int = 535375; // 0x7d3 PushI
	var_86_int = -1; // 0x7d4 PushI
	var_87_int = 37060; // 0x7d5 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x7d6 TObjFunc
	return 0; // 0x7d8 Return
	
Label_2009:
	var_88_int = 37056; // 0x7d9 PushI
	var_89_bool = var_31_bool == var_88_int; // 0x7da Eq
	if(var_89_bool == 0) goto Label_2032; // 0x7db JumpB
	var_90_string = ""; // 0x7dc PushV
	var_90_string = "Autizm"; // 0x7dd MovS
	func_1917(var_32_cvector, var_90_string); // 0x7de NEW_2
	var_91_int = 535371; // 0x7e0 PushI
	SetMessage(var_91_int); // 0x7e1 TObjFunc
	ClearReplies(); // 0x7e3 TObjFunc
	var_92_int = 535372; // 0x7e5 PushI
	var_93_int = 37058; // 0x7e6 PushI
	var_94_int = 37057; // 0x7e7 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x7e8 TObjFunc
	var_95_int = 535376; // 0x7ea PushI
	var_96_int = -1; // 0x7eb PushI
	var_97_int = 37061; // 0x7ec PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x7ed TObjFunc
	return 0; // 0x7ef Return
	
Label_2032:
	var_98_int = 37058; // 0x7f0 PushI
	var_99_bool = var_31_bool == var_98_int; // 0x7f1 Eq
	if(var_99_bool == 0) goto Label_2055; // 0x7f2 JumpB
	var_100_string = ""; // 0x7f3 PushV
	var_100_string = "Dream"; // 0x7f4 MovS
	func_1917(var_32_cvector, var_100_string); // 0x7f5 NEW_2
	var_101_int = 535373; // 0x7f7 PushI
	SetMessage(var_101_int); // 0x7f8 TObjFunc
	ClearReplies(); // 0x7fa TObjFunc
	var_102_int = 535374; // 0x7fc PushI
	var_103_int = -1; // 0x7fd PushI
	var_104_int = 37059; // 0x7fe PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x7ff TObjFunc
	var_105_int = 535377; // 0x801 PushI
	var_106_int = -1; // 0x802 PushI
	var_107_int = 37062; // 0x803 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x804 TObjFunc
	return 0; // 0x806 Return
	
Label_2055:
	var_3_string = 1; // 0x807 TMovB
	var_108_bool = 0; // 0x808 PushV
	func_2976(var_108_bool); // 0x809 NEW_2
	if(var_108_bool == 0) goto Label_2063; // 0x80b JumpB
	lshStopAnimation(); // 0x80c Func
	goto Label_2065; // 0x80e Jump
	
Label_2065:
	return 0; // 0x811 Return
	
Label_2063:
	StopAnimation(); // 0x80f Func
	
Label_2067:
	return 0; // 0x813 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x8b6 PushI
	if(var_33_int == 0) goto Label_2270; // 0x8b7 JumpB
	func_2833(); // 0x8b9 NEW_2
	var_35_int = 42560; // 0x8bb PushI
	var_36_bool = var_31_int == var_35_int; // 0x8bc Eq
	if(var_36_bool == 0) goto Label_2258; // 0x8bd JumpB
	var_37_string = ""; // 0x8be PushV
	var_37_string = "Neutral"; // 0x8bf MovS
	func_2207(var_32_cvector, var_37_string); // 0x8c0 NEW_2
	var_54_int = 540551; // 0x8c2 PushI
	SetMessage(var_54_int); // 0x8c3 TObjFunc
	ClearReplies(); // 0x8c5 TObjFunc
	var_55_int = 540552; // 0x8c7 PushI
	var_56_int = -1; // 0x8c8 PushI
	var_57_int = 42561; // 0x8c9 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x8ca TObjFunc
	var_58_int = 540795; // 0x8cc PushI
	var_59_int = -1; // 0x8cd PushI
	var_60_int = 42844; // 0x8ce PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x8cf TObjFunc
	return 0; // 0x8d1 Return
	
Label_2258:
	var_3_string = 1; // 0x8d2 TMovB
	var_61_bool = 0; // 0x8d3 PushV
	func_2976(var_61_bool); // 0x8d4 NEW_2
	if(var_61_bool == 0) goto Label_2266; // 0x8d6 JumpB
	lshStopAnimation(); // 0x8d7 Func
	goto Label_2268; // 0x8d9 Jump
	
Label_2268:
	return 0; // 0x8dc Return
	
Label_2266:
	StopAnimation(); // 0x8da Func
	
Label_2270:
	return 0; // 0x8de Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x92c PushI
	var_33_bool = var_31_int == var_32_int; // 0x92d Eq
	if(var_33_bool == 0) goto Label_2384; // 0x92e JumpB
	func_2343(); // 0x930 NEW_2
	var_35_bool = 0; // 0x932 PushV
	var_35_bool = 0; // 0x933 MovB
	var_36_bool = 0; // 0x934 PushV
	func_2557(var_36_bool); // 0x935 NEW_2
	if(var_36_bool == 0) goto Label_2365; // 0x937 JumpB
	var_39_bool = 0; // 0x938 PushV
	func_2312(var_39_bool); // 0x939 NEW_2
	if(var_39_bool == 0) goto Label_2365; // 0x93b JumpB
	var_35_bool = 1; // 0x93c MovB
	
Label_2365:
	if(var_35_bool == 0) goto Label_2378; // 0x93d JumpB
	var_56_bool = 0; // 0x93e PushV
	func_2292(var_56_bool); // 0x93f NEW_2
	if(var_56_bool == 0) goto Label_2377; // 0x941 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x942 PushV
	var_77_object = Obj(); // 0x943 PushV
	func_2840(var_77_object); // 0x944 NEW_2
	var_76_object = var_77_object; // 0x945 Mov
	func_2707(var_76_object); // 0x947 NEW_2
	
Label_2377:
	goto Label_2384; // 0x949 Jump
	
Label_2384:
	return 0; // 0x950 Return
	
Label_2378:
	func_2307(var_31_int); // 0x94b NEW_2
	func_2334(); // 0x94e NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2525(); // 0x952 NEW_2
	func_2343(); // 0x955 NEW_2
	lshStopSpeech(); // 0x957 Func
	lshStopAnimation(); // 0x959 Func
	StopAsync(); // 0x95b Func
	Hold(); // 0x95d Func
	return 0; // 0x95f Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x960 Func
	func_2343(); // 0x963 NEW_2
	var_32_string = ""; // 0x965 PushV
	var_32_string = "Neutral"; // 0x966 MovS
	func_2787(var_32_string); // 0x967 NEW_2
	func_2334(); // 0x96a NEW_2
	return 0; // 0x96c Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x96e Push
	if(var_32_bool == 0) goto Label_2420; // 0x96f JumpB
	func_2334(); // 0x971 NEW_2
	goto Label_2424; // 0x973 Jump
	
Label_2424:
	return 0; // 0x978 Return
	
Label_2420:
	var_38_string = ""; // 0x974 PushV
	var_38_string = "Neutral"; // 0x975 MovS
	func_2787(var_38_string); // 0x976 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x979 PushV
	IsOverrideActive(var_33_bool); // 0x97a Func
	var_34_bool = var_33_bool == 0; // 0x97c Not
	if(var_34_bool == 0) goto Label_2453; // 0x97d JumpB
	EventDisable(0); // 0x97e EventDisable
	func_2525(); // 0x980 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x982 PushV
	var_36_object = var_31_object; // 0x983 Mov
	func_2548(var_36_object); // 0x984 NEW_2
	EventEnable(0); // 0x986 EventEnable
	var_49_object = Obj(); // 0x987 PushV
	var_49_object = var_31_object; // 0x988 Mov
	func_3398(var_49_object); // 0x989 NEW_2
	var_661_string = ""; // 0x98b PushV
	var_661_string = "Neutral"; // 0x98c MovS
	func_2787(var_661_string); // 0x98d NEW_2
	func_2343(); // 0x990 NEW_2
	func_2334(); // 0x993 NEW_2
	
Label_2453:
	return 2; // 0x995 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x8df PushGE
	var_31_bool = 0; // 0x8e0 MovB
	GlobalVars[1] = var_31_bool; // 0x8e1 PopGE
	func_2278(var_30_cvector); // 0x8e3 NEW_2
	return 0; // 0x8e5 Return
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x0 PushV
	var_0_object = var_53_object; // 0x1 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x2 PushV
	var_64_object = var_53_object; // 0x3 Mov
	var_65_float = 70.0; // 0x4 MovF
	func_2562(var_64_object, var_65_float); // 0x5 NEW_2
	var_110_bool = var_63_bool == 0; // 0x7 Not
	if(var_110_bool == 0) goto Label_11; // 0x8 JumpB
	var_52_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_59_object); // 0xb Func
	var_111_int = 0; // 0xd PushV
	func_2970(var_111_int); // 0xe NEW_2
	SetNPCName(var_111_int); // 0x10 ObjFunc
	var_112_int = 0; // 0x12 PushV
	func_2968(var_112_int); // 0x13 NEW_2
	SetNPCDescription(var_112_int); // 0x15 ObjFunc
	var_113_string = ""; // 0x17 PushV
	func_2972(var_113_string); // 0x18 NEW_2
	SetPhoto(var_113_string); // 0x1a ObjFunc
	var_114_string = ""; // 0x1c PushV
	func_2974(var_114_string); // 0x1d NEW_2
	SetPhoto2(var_114_string); // 0x1f ObjFunc
	var_115_int = 0; // 0x21 PushV
	func_3381(var_115_int); // 0x22 NEW_2
	SetPlayerName(var_115_int); // 0x24 ObjFunc
	var_61_int = -1; // 0x26 MovI
	IsOverrideActive(var_60_bool); // 0x27 Func
	var_123_bool = var_60_bool; // 0x29 Push
	if(var_123_bool == 0) goto Label_45; // 0x2a JumpB
	var_52_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_59_object); // 0x2d Func
	var_124_bool = 0; var_125_object = Obj(); // 0x2f PushV
	var_126_object = Obj(); // 0x30 PushV
	func_2840(var_126_object); // 0x31 NEW_2
	var_125_object = var_126_object; // 0x32 Mov
	func_2649(var_124_bool, var_125_object); // 0x34 NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x36 PushV
	var_219_object = var_53_object; // 0x37 Mov
	var_220_object = var_59_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_62_bool); // 0x3d ObjFunc
	
Label_63:
	var_268_bool = var_62_bool == 0; // 0x3f Not
	if(var_268_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_62_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_269_object = Obj(); // 0x46 PushV
	var_269_object = var_53_object; // 0x47 Mov
	func_2631(); // 0x48 NEW_2
	StopDialog(var_59_object); // 0x4a Func
	GetReturnValue(var_61_int); // 0x4c ObjFunc
	var_52_int = var_61_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2562(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0xa02 PushV
	GetPosition(var_76_cvector); // 0xa03 ObjFunc
	GetEyesHeight(var_75_float); // 0xa05 ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0xa07 PushE
	var_84_float = var_84_float + var_75_float; // 0xa08 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0xa09 PopE
	GetPosition(var_77_cvector); // 0xa0a Func
	GetEyesHeight(var_75_float); // 0xa0c Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xa0e PushE
	var_85_float = var_85_float + var_75_float; // 0xa0f Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xa10 PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0xa11 Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xa12 PushE
	var_86_float = 0; // 0xa13 MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xa14 PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0xa15 Or
	var_88_float = sqrt(var_87_int); // 0xa16 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0xa17 Div2
	var_79_cvector = -var_78_cvector; // 0xa18 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0xa19 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0xa1a PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0xa1b PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0xa1c Xor2
	func_2846(var_90_cvector, var_91_cvector); // 0xa1d NEW_2
	var_98_int = 25; // 0xa1f PushI
	var_99_float = var_90_cvector * var_98_int; // 0xa20 Mult
	var_100_int = var_89_float + var_99_float; // 0xa21 Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0xa22 PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0xa23 Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0xa24 Add2
	IsOverrideActive(var_82_bool); // 0xa25 Func
	var_102_bool = var_82_bool; // 0xa27 Push
	if(var_102_bool == 0) goto Label_2603; // 0xa28 JumpB
	var_63_bool = 0; // 0xa29 MovB
	return 18; // 0xa2a Return
	
Label_2603:
	StopWorld(); // 0xa2b Func
	var_103_bool = 1; // 0xa2d PushB
	CameraTransit(var_81_cvector, var_79_cvector, var_103_bool); // 0xa2e Func
	var_104_float = GetByIndex(var_80_cvector, 0); // 0xa30 PushE
	var_105_float = GetByIndex(var_80_cvector, 2); // 0xa31 PushE
	Rotate(var_104_float, var_105_float); // 0xa32 Func
	var_106_bool = 0; // 0xa34 PushV
	func_2976(var_106_bool); // 0xa35 NEW_2
	if(var_106_bool == 0) goto Label_2617; // 0xa37 JumpB
	goto Label_2625; // 0xa38 Jump
	
Label_2625:
	CameraWaitForPlayFinish(); // 0xa41 Func
	ResumeWorld(); // 0xa43 Func
	var_63_bool = 1; // 0xa45 MovB
	return 18; // 0xa46 Return
	
Label_2617:
	var_107_string = "head"; // 0xa39 PushS
	HasAnimationTrack(var_83_bool, var_107_string); // 0xa3a Func
	var_108_bool = var_83_bool; // 0xa3c Push
	if(var_108_bool == 0) goto Label_2625; // 0xa3d JumpB
	var_109_string = "head"; // 0xa3e PushS
	LookAsyncCamera(var_109_string); // 0xa3f Func
}


func_3074()
{
	func_3225(); // 0xc04 NEW_2
	var_214_bool = 0; var_215_string = ""; var_216_string = ""; // 0xc06 PushV
	var_215_string = "quest_b10_03"; // 0xc07 MovS
	var_216_string = "completed"; // 0xc08 MovS
	func_2912(var_214_bool, var_215_string, var_216_string); // 0xc09 NEW_2
	return 0; // 0xc0b Return
}


func_2818(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0; // 0xb02 PushV
	var_162_bool = 0; // 0xb03 PushV
	func_2976(var_162_bool); // 0xb04 NEW_2
	if(var_162_bool == 0) goto Label_2831; // 0xb06 JumpB
	lshHasSpeech(var_161_bool, var_159_string); // 0xb07 Func
	var_163_bool = var_161_bool; // 0xb09 Push
	if(var_163_bool == 0) goto Label_2831; // 0xb0a JumpB
	lshPlaySpeech(var_159_string); // 0xb0b Func
	var_158_bool = 1; // 0xb0d MovB
	return 2; // 0xb0e Return
	
Label_2831:
	var_158_bool = 0; // 0xb0f MovB
	return 2; // 0xb10 Return
}


func_2307(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x903 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x904 PushE
	RotateAsync(var_108_float, var_109_float); // 0x905 Func
	return 0; // 0x907 Return
}


func_3331(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0xd03 PushV
	GetMainOutdoorScene(var_46_object); // 0xd04 Func
	var_48_bool = var_46_object == 0; // 0xd06 NullEq
	if(var_48_bool == 0) goto Label_3342; // 0xd07 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0xd08 PushS
	Trace(var_49_string); // 0xd09 Func
	var_47_object = 0; // 0xd0b SetNull
	var_43_object = var_47_object; // 0xd0c Mov
	return 4; // 0xd0d Return
	
Label_3342:
	GetMap(var_47_object); // 0xd0e ObjFunc
	var_43_object = var_47_object; // 0xd10 Mov
	return 4; // 0xd11 Return
}


func_1031(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0; // 0x407 PushV
	var_0_object = var_438_object; // 0x408 TMov
	var_448_bool = 0; var_449_object = Obj(); var_450_float = 0; // 0x409 PushV
	var_449_object = var_438_object; // 0x40a Mov
	var_450_float = 70.0; // 0x40b MovF
	func_2562(var_449_object, var_450_float); // 0x40c NEW_2
	var_451_bool = var_448_bool == 0; // 0x40e Not
	if(var_451_bool == 0) goto Label_1042; // 0x40f JumpB
	var_437_int = -2; // 0x410 MovI
	return 8; // 0x411 Return
	
Label_1042:
	CreateDialog(var_444_object); // 0x412 Func
	var_452_int = 0; // 0x414 PushV
	func_2970(var_452_int); // 0x415 NEW_2
	SetNPCName(var_452_int); // 0x417 ObjFunc
	var_453_int = 0; // 0x419 PushV
	func_2968(var_453_int); // 0x41a NEW_2
	SetNPCDescription(var_453_int); // 0x41c ObjFunc
	var_454_string = ""; // 0x41e PushV
	func_2972(var_454_string); // 0x41f NEW_2
	SetPhoto(var_454_string); // 0x421 ObjFunc
	var_455_string = ""; // 0x423 PushV
	func_2974(var_455_string); // 0x424 NEW_2
	SetPhoto2(var_455_string); // 0x426 ObjFunc
	var_456_int = 0; // 0x428 PushV
	func_3381(var_456_int); // 0x429 NEW_2
	SetPlayerName(var_456_int); // 0x42b ObjFunc
	var_446_int = -1; // 0x42d MovI
	IsOverrideActive(var_445_bool); // 0x42e Func
	var_457_bool = var_445_bool; // 0x430 Push
	if(var_457_bool == 0) goto Label_1076; // 0x431 JumpB
	var_437_int = -2; // 0x432 MovI
	return 8; // 0x433 Return
	
Label_1076:
	DoDialog(var_444_object); // 0x434 Func
	var_458_bool = 0; var_459_object = Obj(); // 0x436 PushV
	var_460_object = Obj(); // 0x437 PushV
	func_2840(var_460_object); // 0x438 NEW_2
	var_459_object = var_460_object; // 0x439 Mov
	func_2649(var_458_bool, var_459_object); // 0x43b NEW_2
	var_461_object = Obj(); var_462_object = Obj(); // 0x43d PushV
	var_461_object = var_438_object; // 0x43e Mov
	var_462_object = var_444_object; // 0x43f Mov
	TaskCall(7); // 0x440 TaskCall
	func_1112(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object); // 0x441 NEW_2
	TaskReturn(); // 0x442 TaskReturn
	IsDialogEnd(var_447_bool); // 0x444 ObjFunc
	
Label_1094:
	var_536_bool = var_447_bool == 0; // 0x446 Not
	if(var_536_bool == 0) goto Label_1101; // 0x447 JumpB
	sync(); // 0x448 Func
	IsDialogEnd(var_447_bool); // 0x44a ObjFunc
	goto Label_1094; // 0x44c Jump
	
Label_1101:
	var_537_object = Obj(); // 0x44d PushV
	var_537_object = var_438_object; // 0x44e Mov
	func_2631(); // 0x44f NEW_2
	StopDialog(var_444_object); // 0x451 Func
	GetReturnValue(var_446_int); // 0x453 ObjFunc
	var_437_int = var_446_int; // 0x455 Mov
	return 8; // 0x456 Return
}


func_2312(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x908 PushV
	var_44_string = "player"; // 0x909 PushS
	FindActor(var_42_object, var_44_string); // 0x90a Func
	var_45_bool = var_42_object == 0; // 0x90c Not
	if(var_45_bool == 0) goto Label_2320; // 0x90d JumpB
	var_39_bool = 0; // 0x90e MovB
	return 4; // 0x90f Return
	
Label_2320:
	var_46_float = 0; var_47_object = Obj(); // 0x910 PushV
	var_47_object = var_42_object; // 0x911 Mov
	func_2530(var_47_object); // 0x912 NEW_2
	var_54_float = 90000.0; // 0x914 PushF
	var_55_bool = var_46_float > var_54_float; // 0x915 GT
	if(var_55_bool == 0) goto Label_2329; // 0x916 JumpB
	var_39_bool = 0; // 0x917 MovB
	return 4; // 0x918 Return
	
Label_2329:
	CanSee(var_43_bool, var_42_object); // 0x919 Func
	var_39_bool = var_43_bool; // 0x91b Mov
	return 4; // 0x91c Return
}


func_3084()
{
	func_3238(); // 0xc0e NEW_2
	var_124_bool = 0; var_125_string = ""; var_126_string = ""; // 0xc10 PushV
	var_125_string = "quest_b10_03"; // 0xc11 MovS
	var_126_string = "fail"; // 0xc12 MovS
	func_2912(var_124_bool, var_125_string, var_126_string); // 0xc13 NEW_2
	return 0; // 0xc15 Return
}


func_2833()
{
	var_34_bool = 0; // 0xb11 PushV
	func_2976(var_34_bool); // 0xb12 NEW_2
	if(var_34_bool == 0) goto Label_2839; // 0xb14 JumpB
	lshStopSpeech(); // 0xb15 Func
	
Label_2839:
	return 0; // 0xb17 Return
}


func_2068(var_0_object, var_605_int, var_606_object)
{
	var_608_object = Obj(); var_609_bool = 0; var_610_int = 0; var_611_bool = 0; var_612_object = Obj(); var_613_bool = 0; var_614_int = 0; var_615_bool = 0; // 0x814 PushV
	var_0_object = var_606_object; // 0x815 TMov
	var_616_bool = 0; var_617_object = Obj(); var_618_float = 0; // 0x816 PushV
	var_617_object = var_606_object; // 0x817 Mov
	var_618_float = 70.0; // 0x818 MovF
	func_2562(var_617_object, var_618_float); // 0x819 NEW_2
	var_619_bool = var_616_bool == 0; // 0x81b Not
	if(var_619_bool == 0) goto Label_2079; // 0x81c JumpB
	var_605_int = -2; // 0x81d MovI
	return 8; // 0x81e Return
	
Label_2079:
	CreateDialog(var_612_object); // 0x81f Func
	var_620_int = 0; // 0x821 PushV
	func_2970(var_620_int); // 0x822 NEW_2
	SetNPCName(var_620_int); // 0x824 ObjFunc
	var_621_int = 0; // 0x826 PushV
	func_2968(var_621_int); // 0x827 NEW_2
	SetNPCDescription(var_621_int); // 0x829 ObjFunc
	var_622_string = ""; // 0x82b PushV
	func_2972(var_622_string); // 0x82c NEW_2
	SetPhoto(var_622_string); // 0x82e ObjFunc
	var_623_string = ""; // 0x830 PushV
	func_2974(var_623_string); // 0x831 NEW_2
	SetPhoto2(var_623_string); // 0x833 ObjFunc
	var_624_int = 0; // 0x835 PushV
	func_3381(var_624_int); // 0x836 NEW_2
	SetPlayerName(var_624_int); // 0x838 ObjFunc
	var_614_int = -1; // 0x83a MovI
	IsOverrideActive(var_613_bool); // 0x83b Func
	var_625_bool = var_613_bool; // 0x83d Push
	if(var_625_bool == 0) goto Label_2113; // 0x83e JumpB
	var_605_int = -2; // 0x83f MovI
	return 8; // 0x840 Return
	
Label_2113:
	DoDialog(var_612_object); // 0x841 Func
	var_626_bool = 0; var_627_object = Obj(); // 0x843 PushV
	var_628_object = Obj(); // 0x844 PushV
	func_2840(var_628_object); // 0x845 NEW_2
	var_627_object = var_628_object; // 0x846 Mov
	func_2649(var_626_bool, var_627_object); // 0x848 NEW_2
	var_629_object = Obj(); var_630_object = Obj(); // 0x84a PushV
	var_629_object = var_606_object; // 0x84b Mov
	var_630_object = var_612_object; // 0x84c Mov
	TaskCall(11); // 0x84d TaskCall
	func_2149(var_631_object, var_632_object, var_633_string, var_634_bool, var_629_object, var_630_object); // 0x84e NEW_2
	TaskReturn(); // 0x84f TaskReturn
	IsDialogEnd(var_615_bool); // 0x851 ObjFunc
	
Label_2131:
	var_659_bool = var_615_bool == 0; // 0x853 Not
	if(var_659_bool == 0) goto Label_2138; // 0x854 JumpB
	sync(); // 0x855 Func
	IsDialogEnd(var_615_bool); // 0x857 ObjFunc
	goto Label_2131; // 0x859 Jump
	
Label_2138:
	var_660_object = Obj(); // 0x85a PushV
	var_660_object = var_606_object; // 0x85b Mov
	func_2631(); // 0x85c NEW_2
	StopDialog(var_612_object); // 0x85e Func
	GetReturnValue(var_614_int); // 0x860 ObjFunc
	var_605_int = var_614_int; // 0x862 Mov
	return 8; // 0x863 Return
}


func_3348(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; // 0xd14 PushV
	GetMainOutdoorScene(var_98_object); // 0xd15 Func
	var_100_bool = var_98_object == 0; // 0xd17 NullEq
	if(var_100_bool == 0) goto Label_3357; // 0xd18 JumpB
	var_101_string = "Can't find main outdoor scene"; // 0xd19 PushS
	Trace(var_101_string); // 0xd1a Func
	return 8; // 0xd1c Return
	
Label_3357:
	GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector); // 0xd1d ObjFunc
	var_102_bool = var_99_bool == 0; // 0xd1f Not
	if(var_102_bool == 0) goto Label_3367; // 0xd20 JumpB
	var_103_string = "Warning: outdoor scene locator "; // 0xd21 PushS
	var_104_int = var_103_string + var_89_string; // 0xd22 Add
	var_105_string = " doesnt exist"; // 0xd23 PushS
	var_106_int = var_104_int + var_105_string; // 0xd24 Add
	Trace(var_106_int); // 0xd25 Func
	
Label_3367:
	GetMap(var_88_object); // 0xd27 ObjFunc
	var_107_bool = var_88_object == 0; // 0xd29 NullEq
	if(var_107_bool == 0) goto Label_3375; // 0xd2a JumpB
	var_108_string = "Can't find map"; // 0xd2b PushS
	Trace(var_108_string); // 0xd2c Func
	return 8; // 0xd2e Return
	
Label_3375:
	var_109_float = GetByIndex(var_96_cvector, 0); // 0xd2f PushE
	var_110_float = GetByIndex(var_96_cvector, 2); // 0xd30 PushE
	SetMapParams(var_109_float, var_110_float, var_90_float); // 0xd31 ObjFunc
	return 8; // 0xd33 Return
}


func_3094()
{
	var_173_int = 0; var_174_int = 0; // 0xc16 PushV
	var_175_string = "b10q03_toy_burah"; // 0xc17 PushS
	var_176_int = 1; // 0xc18 PushI
	RemoveItemByType(var_174_int, var_175_string, var_176_int); // 0xc19 ObjFunc
	return 2; // 0xc1b Return
}


func_2840(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0xb18 PushV
	self(var_128_object); // 0xb19 Func
	var_126_object = var_128_object; // 0xb1b Mov
	return 2; // 0xb1c Return
}


func_3100()
{
	var_39_string = "oob12Mishka1"; // 0xc1d PushS
	var_40_int = 1; // 0xc1e PushI
	SetVariable(var_39_string, var_40_int); // 0xc1f Func
	return 0; // 0xc21 Return
}


func_2334()
{
	var_663_float = 0; var_664_float = 0; // 0x91e PushV
	var_665_int = 8; // 0x91f PushI
	var_666_int = 16; // 0x920 PushI
	rand(var_664_float, var_665_int, var_666_int); // 0x921 Func
	var_667_int = 10; // 0x923 PushI
	SetTimer(var_667_int, var_664_float); // 0x924 Func
	return 2; // 0x926 Return
}


func_2846(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0xb1e PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0xb1f Or
	var_94_float = sqrt(var_95_int); // 0xb20 Sqrt2
	var_96_float = 0.0; // 0xb21 PushF
	var_97_bool = var_94_float < var_96_float; // 0xb22 LT
	if(var_97_bool == 0) goto Label_2854; // 0xb23 JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0xb24 MovV
	return 2; // 0xb25 Return
	
Label_2854:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0xb26 Div2
	return 2; // 0xb27 Return
}


func_3106(var_386_bool)
{
	var_388_int = 0; var_389_string = ""; // 0xc23 PushV
	var_389_string = "b8q01"; // 0xc24 MovS
	func_2856(var_388_int, var_389_string); // 0xc25 NEW_2
	var_390_int = 2; // 0xc27 PushI
	var_391_bool = var_388_int == var_390_int; // 0xc28 Eq
	if(var_391_bool == 0) goto Label_3116; // 0xc29 JumpB
	var_386_bool = 1; // 0xc2a MovB
	return 0; // 0xc2b Return
	
Label_3116:
	var_386_bool = 0; // 0xc2c MovB
	return 0; // 0xc2d Return
}


func_2343()
{
	var_662_int = 10; // 0x927 PushI
	KillTimer(var_662_int); // 0x928 Func
	return 0; // 0x92a Return
}


func_2856(var_324_int, var_325_string)
{
	var_326_int = 0; var_327_int = 0; // 0xb28 PushV
	GetVariable(var_325_string, var_327_int); // 0xb29 Func
	var_324_int = var_327_int; // 0xb2b Mov
	return 2; // 0xb2c Return
}


func_2861(var_162_int, var_163_int)
{
	var_164_object = Obj(); var_165_object = Obj(); // 0xb2d PushV
	CreateIntVector(var_165_object); // 0xb2e Func
	add(var_162_int); // 0xb30 ObjFunc
	add(var_163_int); // 0xb32 ObjFunc
	var_166_int = 3; // 0xb34 PushI
	SendWorldWndMessage(var_166_int, var_165_object); // 0xb35 Func
	return 2; // 0xb37 Return
}


func_3118(var_392_bool)
{
	var_394_int = 0; var_395_string = ""; // 0xc2f PushV
	var_395_string = "oob8Mishka1"; // 0xc30 MovS
	func_2856(var_394_int, var_395_string); // 0xc31 NEW_2
	var_396_int = 0; // 0xc33 PushI
	var_397_bool = var_394_int == var_396_int; // 0xc34 Eq
	if(var_397_bool == 0) goto Label_3128; // 0xc35 JumpB
	var_392_bool = 1; // 0xc36 MovB
	return 0; // 0xc37 Return
	
Label_3128:
	var_392_bool = 0; // 0xc38 MovB
	return 0; // 0xc39 Return
}


func_819(var_2_object, var_312_string)
{
	var_313_bool = 0; // 0x334 PushV
	func_2976(var_313_bool); // 0x335 NEW_2
	var_314_bool = var_313_bool == 0; // 0x337 Not
	if(var_314_bool == 0) goto Label_826; // 0x338 JumpB
	return 0; // 0x339 Return
	
Label_826:
	var_315_bool = var_312_string == var_2_object; // 0x33a Eq
	if(var_315_bool == 0) goto Label_829; // 0x33b JumpB
	return 0; // 0x33c Return
	
Label_829:
	var_316_string = ""; var_317_bool = 0; // 0x33d PushV
	var_316_string = var_312_string; // 0x33e Mov
	var_318_string = ""; // 0x33f PushS
	var_319_bool = var_312_string == var_318_string; // 0x340 Eq
	if(var_319_bool == 0) goto Label_836; // 0x341 JumpB
	var_317_bool = 0; // 0x342 MovB
	goto Label_837; // 0x343 Jump
	
Label_837:
	func_2803(var_316_string, var_317_bool); // 0x345 NEW_2
	var_2_object = var_312_string; // 0x347 TMov
	return 0; // 0x348 Return
	
Label_836:
	var_317_bool = 1; // 0x344 MovB
}


func_3381(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xd35 PushV
	var_118_string = "branch"; // 0xd36 PushS
	GetVariable(var_118_string, var_117_int); // 0xd37 Func
	var_119_int = 0; // 0xd39 PushI
	var_120_bool = var_117_int == var_119_int; // 0xd3a Eq
	if(var_120_bool == 0) goto Label_3391; // 0xd3b JumpB
	var_115_int = 1; // 0xd3c MovI
	return 2; // 0xd3d Return
	
Label_3391:
	var_121_int = 1; // 0xd3f PushI
	var_122_bool = var_117_int == var_121_int; // 0xd40 Eq
	if(var_122_bool == 0) goto Label_3396; // 0xd41 JumpB
	var_115_int = 2; // 0xd42 MovI
	return 2; // 0xd43 Return
	
Label_3396:
	var_115_int = 3; // 0xd44 MovI
	return 2; // 0xd45 Return
}


func_1849(var_0_object, var_1_object, var_2_object, var_3_string, var_564_object, var_565_object)
{
	var_0_object = var_565_object; // 0x73a TMov
	var_1_object = var_564_object; // 0x73b TMov
	var_3_string = 0; // 0x73c TMovB
	var_570_int = 1; // 0x73d PushI
	if(var_570_int == 0) goto Label_1887; // 0x73e JumpB
	var_571_string = ""; // 0x73f PushV
	var_571_string = "Autizm"; // 0x740 MovS
	func_1917(var_565_object, var_571_string); // 0x741 NEW_2
	var_579_int = 535243; // 0x743 PushI
	SetMessage(var_579_int); // 0x744 TObjFunc
	ClearReplies(); // 0x746 TObjFunc
	var_580_bool = 0; var_581_object = Obj(); // 0x748 PushV
	var_581_object = var_1_object; // 0x749 MovT
	func_3213(var_581_object); // 0x74a NEW_2
	if(var_580_bool == 0) goto Label_1874; // 0x74c JumpB
	var_586_int = 535244; // 0x74d PushI
	var_587_int = 37054; // 0x74e PushI
	var_588_int = 36919; // 0x74f PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x750 TObjFunc
	
Label_1874:
	var_589_int = 535367; // 0x752 PushI
	var_590_int = -1; // 0x753 PushI
	var_591_int = 37052; // 0x754 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x755 TObjFunc
	var_592_int = 535368; // 0x757 PushI
	var_593_int = -1; // 0x758 PushI
	var_594_int = 37053; // 0x759 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x75a TObjFunc
	goto Label_1887; // 0x75c Jump
	
Label_1887:
	var_595_bool = 0; // 0x75f PushV
	func_2976(var_595_bool); // 0x760 NEW_2
	if(var_595_bool == 0) goto Label_1902; // 0x762 JumpB
	
Label_1891:
	lshWaitForAnimEnd(); // 0x763 Func
	var_596_string = var_3_string; // 0x765 PushT
	if(var_596_string == 0) goto Label_1896; // 0x766 JumpB
	goto Label_1901; // 0x767 Jump
	
Label_1901:
	goto Label_1916; // 0x76d Jump
	
Label_1916:
	return 0; // 0x77c Return
	
Label_1896:
	var_597_string = ""; // 0x768 PushV
	var_597_string = var_2_object; // 0x769 MovT
	func_2787(var_597_string); // 0x76a NEW_2
	goto Label_1891; // 0x76c Jump
	
Label_1902:
	var_598_string = "all"; // 0x76e PushS
	var_599_string = "idle"; // 0x76f PushS
	PlayAnimation(var_598_string, var_599_string); // 0x770 Func
	
Label_1906:
	WaitForAnimEnd(); // 0x772 Func
	var_600_string = var_3_string; // 0x774 PushT
	if(var_600_string == 0) goto Label_1911; // 0x775 JumpB
	goto Label_1916; // 0x776 Jump
	
Label_1911:
	var_601_string = "all"; // 0x777 PushS
	var_602_string = "idle"; // 0x778 PushS
	PlayAnimation(var_601_string, var_602_string); // 0x779 Func
	goto Label_1906; // 0x77b Jump
}


func_3130(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0xc3b PushV
	var_325_string = "oob1Mishka1"; // 0xc3c MovS
	func_2856(var_324_int, var_325_string); // 0xc3d NEW_2
	var_328_int = 0; // 0xc3f PushI
	var_329_bool = var_324_int == var_328_int; // 0xc40 Eq
	if(var_329_bool == 0) goto Label_3140; // 0xc41 JumpB
	var_322_bool = 1; // 0xc42 MovB
	return 0; // 0xc43 Return
	
Label_3140:
	var_322_bool = 0; // 0xc44 MovB
	return 0; // 0xc45 Return
}


func_2873(var_152_object, var_153_int)
{
	var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_int = 0; var_159_bool = 0; // 0xb39 PushV
	GetItemID(var_157_int); // 0xb3a ObjFunc
	var_160_string = "Category"; // 0xb3c PushS
	GetInvItemProperty(var_158_int, var_157_int, var_160_string); // 0xb3d Func
	AddItem(var_159_bool, var_152_object, var_158_int, var_153_int); // 0xb3f ObjFunc
	var_161_bool = var_159_bool == 0; // 0xb41 Not
	if(var_161_bool == 0) goto Label_2886; // 0xb42 JumpB
	DropItems(var_152_object, var_153_int); // 0xb43 ObjFunc
	goto Label_2891; // 0xb45 Jump
	
Label_2891:
	return 6; // 0xb4b Return
	
Label_2886:
	var_162_int = 0; var_163_int = 0; // 0xb46 PushV
	var_162_int = var_157_int; // 0xb47 Mov
	var_163_int = var_153_int; // 0xb48 Mov
	func_2861(var_162_int, var_163_int); // 0xb49 NEW_2
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_378_object, var_379_object)
{
	var_0_object = var_379_object; // 0x141 TMov
	var_1_object = var_378_object; // 0x142 TMov
	var_3_string = 0; // 0x143 TMovB
	var_384_int = 1; // 0x144 PushI
	if(var_384_int == 0) goto Label_387; // 0x145 JumpB
	var_385_bool = 0; // 0x146 PushV
	var_385_bool = 0; // 0x147 MovB
	var_386_bool = 0; var_387_object = Obj(); // 0x148 PushV
	var_387_object = var_1_object; // 0x149 MovT
	func_3106(var_387_object); // 0x14a NEW_2
	if(var_386_bool == 0) goto Label_339; // 0x14c JumpB
	var_392_bool = 0; var_393_object = Obj(); // 0x14d PushV
	var_393_object = var_1_object; // 0x14e MovT
	func_3118(var_393_object); // 0x14f NEW_2
	if(var_392_bool == 0) goto Label_339; // 0x151 JumpB
	var_385_bool = 1; // 0x152 MovB
	
Label_339:
	if(var_385_bool == 0) goto Label_365; // 0x153 JumpB
	var_398_object = Obj(); var_399_object = Obj(); // 0x154 PushV
	var_398_object = var_1_object; // 0x155 MovT
	var_399_object = var_0_object; // 0x156 MovT
	func_2989(); // 0x157 NEW_2
	var_402_string = ""; // 0x159 PushV
	var_402_string = "Fear"; // 0x15a MovS
	func_417(var_379_object, var_402_string); // 0x15b NEW_2
	var_410_int = 521408; // 0x15d PushI
	SetMessage(var_410_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_411_int = 521409; // 0x162 PushI
	var_412_int = 25093; // 0x163 PushI
	var_413_int = 22587; // 0x164 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x165 TObjFunc
	var_414_int = 523832; // 0x167 PushI
	var_415_int = -1; // 0x168 PushI
	var_416_int = 25104; // 0x169 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x16a TObjFunc
	goto Label_387; // 0x16c Jump
	
Label_387:
	var_417_bool = 0; // 0x183 PushV
	func_2976(var_417_bool); // 0x184 NEW_2
	if(var_417_bool == 0) goto Label_402; // 0x186 JumpB
	
Label_391:
	lshWaitForAnimEnd(); // 0x187 Func
	var_418_string = var_3_string; // 0x189 PushT
	if(var_418_string == 0) goto Label_396; // 0x18a JumpB
	goto Label_401; // 0x18b Jump
	
Label_401:
	goto Label_416; // 0x191 Jump
	
Label_416:
	return 0; // 0x1a0 Return
	
Label_396:
	var_419_string = ""; // 0x18c PushV
	var_419_string = var_2_object; // 0x18d MovT
	func_2787(var_419_string); // 0x18e NEW_2
	goto Label_391; // 0x190 Jump
	
Label_402:
	var_420_string = "all"; // 0x192 PushS
	var_421_string = "idle"; // 0x193 PushS
	PlayAnimation(var_420_string, var_421_string); // 0x194 Func
	
Label_406:
	WaitForAnimEnd(); // 0x196 Func
	var_422_string = var_3_string; // 0x198 PushT
	if(var_422_string == 0) goto Label_411; // 0x199 JumpB
	goto Label_416; // 0x19a Jump
	
Label_411:
	var_423_string = "all"; // 0x19b PushS
	var_424_string = "idle"; // 0x19c PushS
	PlayAnimation(var_423_string, var_424_string); // 0x19d Func
	goto Label_406; // 0x19f Jump
	
Label_365:
	var_425_string = ""; // 0x16d PushV
	var_425_string = "Fear"; // 0x16e MovS
	func_417(var_379_object, var_425_string); // 0x16f NEW_2
	var_426_int = 521410; // 0x171 PushI
	SetMessage(var_426_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_427_int = 521411; // 0x176 PushI
	var_428_int = 25088; // 0x177 PushI
	var_429_int = 22589; // 0x178 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x179 TObjFunc
	var_430_int = 523816; // 0x17b PushI
	var_431_int = -1; // 0x17c PushI
	var_432_int = 25087; // 0x17d PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x17e TObjFunc
	goto Label_387; // 0x180 Jump
}


func_3142(var_496_bool)
{
	var_498_int = 0; var_499_string = ""; // 0xc47 PushV
	var_499_string = "b10q04MishkaTalk"; // 0xc48 MovS
	func_2856(var_498_int, var_499_string); // 0xc49 NEW_2
	var_500_int = 1; // 0xc4b PushI
	var_501_bool = var_498_int == var_500_int; // 0xc4c Eq
	if(var_501_bool == 0) goto Label_3152; // 0xc4d JumpB
	var_496_bool = 1; // 0xc4e MovB
	return 0; // 0xc4f Return
	
Label_3152:
	var_496_bool = 0; // 0xc50 MovB
	return 0; // 0xc51 Return
}


func_2631()
{
	var_270_bool = 0; var_271_bool = 0; // 0xa47 PushV
	var_272_bool = 1; // 0xa48 PushB
	CameraSwitchToNormal(var_272_bool); // 0xa49 Func
	var_273_bool = 0; // 0xa4b PushV
	func_2976(var_273_bool); // 0xa4c NEW_2
	if(var_273_bool == 0) goto Label_2640; // 0xa4e JumpB
	goto Label_2648; // 0xa4f Jump
	
Label_2648:
	return 2; // 0xa58 Return
	
Label_2640:
	var_274_string = "head"; // 0xa50 PushS
	HasAnimationTrack(var_271_bool, var_274_string); // 0xa51 Func
	var_275_bool = var_271_bool; // 0xa53 Push
	if(var_275_bool == 0) goto Label_2648; // 0xa54 JumpB
	var_276_string = "head"; // 0xa55 PushS
	UnlookAsync(var_276_string); // 0xa56 Func
}


func_3398(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xd47 PushGE
	var_51_bool = var_50_bool == 0; // 0xd48 Not
	if(var_51_bool == 0) goto Label_3411; // 0xd49 JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xd4a PushV
	var_53_object = var_49_object; // 0xd4b Mov
	TaskCall(0); // 0xd4c TaskCall
	func_0(var_54_object, var_52_int, var_53_object); // 0xd4d NEW_2
	TaskReturn(); // 0xd4e TaskReturn
	var_277_bool = GlobalVars[1]; // 0xd50 PushGE
	var_277_bool = 1; // 0xd51 MovB
	GlobalVars[1] = var_277_bool; // 0xd52 PopGE
	
Label_3411:
	var_278_bool = 0; var_279_int = 0; // 0xd53 PushV
	var_279_int = 1; // 0xd54 MovI
	func_2938(var_278_bool, var_279_int); // 0xd55 NEW_2
	if(var_278_bool == 0) goto Label_3423; // 0xd57 JumpB
	var_281_int = 0; var_282_object = Obj(); // 0xd58 PushV
	var_282_object = var_49_object; // 0xd59 Mov
	TaskCall(4); // 0xd5a TaskCall
	func_666(var_283_object, var_281_int, var_282_object); // 0xd5b NEW_2
	TaskReturn(); // 0xd5c TaskReturn
	return 0; // 0xd5e Return
	
Label_3423:
	var_352_bool = 0; var_353_int = 0; // 0xd5f PushV
	var_353_int = 8; // 0xd60 MovI
	func_2938(var_352_bool, var_353_int); // 0xd61 NEW_2
	if(var_352_bool == 0) goto Label_3435; // 0xd63 JumpB
	var_354_int = 0; var_355_object = Obj(); // 0xd64 PushV
	var_355_object = var_49_object; // 0xd65 Mov
	TaskCall(2); // 0xd66 TaskCall
	func_239(var_356_object, var_354_int, var_355_object); // 0xd67 NEW_2
	TaskReturn(); // 0xd68 TaskReturn
	return 0; // 0xd6a Return
	
Label_3435:
	var_435_bool = 0; var_436_int = 0; // 0xd6b PushV
	var_436_int = 10; // 0xd6c MovI
	func_2938(var_435_bool, var_436_int); // 0xd6d NEW_2
	if(var_435_bool == 0) goto Label_3447; // 0xd6f JumpB
	var_437_int = 0; var_438_object = Obj(); // 0xd70 PushV
	var_438_object = var_49_object; // 0xd71 Mov
	TaskCall(6); // 0xd72 TaskCall
	func_1031(var_439_object, var_437_int, var_438_object); // 0xd73 NEW_2
	TaskReturn(); // 0xd74 TaskReturn
	return 0; // 0xd76 Return
	
Label_3447:
	var_538_bool = 0; var_539_int = 0; // 0xd77 PushV
	var_539_int = 12; // 0xd78 MovI
	func_2938(var_538_bool, var_539_int); // 0xd79 NEW_2
	if(var_538_bool == 0) goto Label_3459; // 0xd7b JumpB
	var_540_int = 0; var_541_object = Obj(); // 0xd7c PushV
	var_541_object = var_49_object; // 0xd7d Mov
	TaskCall(8); // 0xd7e TaskCall
	func_1768(var_542_object, var_540_int, var_541_object); // 0xd7f NEW_2
	TaskReturn(); // 0xd80 TaskReturn
	return 0; // 0xd82 Return
	
Label_3459:
	var_605_int = 0; var_606_object = Obj(); // 0xd83 PushV
	var_606_object = var_49_object; // 0xd84 Mov
	TaskCall(10); // 0xd85 TaskCall
	func_2068(var_607_object, var_605_int, var_606_object); // 0xd86 NEW_2
	TaskReturn(); // 0xd87 TaskReturn
	return 0; // 0xd89 Return
}


func_2892(var_146_object, var_147_string, var_148_int)
{
	var_149_object = Obj(); var_150_object = Obj(); // 0xb4c PushV
	CreateInvItem(var_150_object); // 0xb4d Func
	SetItemName(var_147_string); // 0xb4f ObjFunc
	var_151_object = Obj(); var_152_object = Obj(); var_153_int = 0; // 0xb51 PushV
	var_151_object = var_146_object; // 0xb52 Mov
	var_152_object = var_150_object; // 0xb53 Mov
	var_153_int = var_148_int; // 0xb54 Mov
	func_2873(var_152_object, var_153_int); // 0xb55 NEW_2
	return 2; // 0xb57 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x52 TMov
	var_1_object = var_219_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_225_int = 1; // 0x55 PushI
	if(var_225_int == 0) goto Label_109; // 0x56 JumpB
	var_226_string = ""; // 0x57 PushV
	var_226_string = "Neutral"; // 0x58 MovS
	func_139(var_220_object, var_226_string); // 0x59 NEW_2
	var_243_int = 518033; // 0x5b PushI
	SetMessage(var_243_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_244_int = 518034; // 0x60 PushI
	var_245_int = 28430; // 0x61 PushI
	var_246_int = 19167; // 0x62 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x63 TObjFunc
	var_247_int = 527134; // 0x65 PushI
	var_248_int = 28433; // 0x66 PushI
	var_249_int = 28432; // 0x67 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_250_bool = 0; // 0x6d PushV
	func_2976(var_250_bool); // 0x6e NEW_2
	if(var_250_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_251_string = var_3_string; // 0x73 PushT
	if(var_251_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_252_string = ""; // 0x76 PushV
	var_252_string = var_2_object; // 0x77 MovT
	func_2787(var_252_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_263_string = "all"; // 0x7c PushS
	var_264_string = "idle"; // 0x7d PushS
	PlayAnimation(var_263_string, var_264_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_265_string = var_3_string; // 0x82 PushT
	if(var_265_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_266_string = "all"; // 0x85 PushS
	var_267_string = "idle"; // 0x86 PushS
	PlayAnimation(var_266_string, var_267_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_3154(var_468_bool)
{
	var_470_int = 0; var_471_string = ""; // 0xc53 PushV
	var_471_string = "b10q03"; // 0xc54 MovS
	func_2856(var_470_int, var_471_string); // 0xc55 NEW_2
	var_472_int = 1; // 0xc57 PushI
	var_473_bool = var_470_int == var_472_int; // 0xc58 Eq
	if(var_473_bool == 0) goto Label_3164; // 0xc59 JumpB
	var_468_bool = 1; // 0xc5a MovB
	return 0; // 0xc5b Return
	
Label_3164:
	var_468_bool = 0; // 0xc5c MovB
	return 0; // 0xc5d Return
}


func_1112(var_0_object, var_1_object, var_2_object, var_3_string, var_461_object, var_462_object)
{
	var_0_object = var_462_object; // 0x459 TMov
	var_1_object = var_461_object; // 0x45a TMov
	var_3_string = 0; // 0x45b TMovB
	var_467_int = 1; // 0x45c PushI
	if(var_467_int == 0) goto Label_1194; // 0x45d JumpB
	var_468_bool = 0; var_469_object = Obj(); // 0x45e PushV
	var_469_object = var_1_object; // 0x45f MovT
	func_3154(var_469_object); // 0x460 NEW_2
	if(var_468_bool == 0) goto Label_1138; // 0x462 JumpB
	var_474_string = ""; // 0x463 PushV
	var_474_string = "Suspicion"; // 0x464 MovS
	func_1224(var_462_object, var_474_string); // 0x465 NEW_2
	var_482_int = 531162; // 0x467 PushI
	SetMessage(var_482_int); // 0x468 TObjFunc
	ClearReplies(); // 0x46a TObjFunc
	var_483_int = 531292; // 0x46c PushI
	var_484_int = 32610; // 0x46d PushI
	var_485_int = 32609; // 0x46e PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x46f TObjFunc
	goto Label_1194; // 0x471 Jump
	
Label_1194:
	var_486_bool = 0; // 0x4aa PushV
	func_2976(var_486_bool); // 0x4ab NEW_2
	if(var_486_bool == 0) goto Label_1209; // 0x4ad JumpB
	
Label_1198:
	lshWaitForAnimEnd(); // 0x4ae Func
	var_487_string = var_3_string; // 0x4b0 PushT
	if(var_487_string == 0) goto Label_1203; // 0x4b1 JumpB
	goto Label_1208; // 0x4b2 Jump
	
Label_1208:
	goto Label_1223; // 0x4b8 Jump
	
Label_1223:
	return 0; // 0x4c7 Return
	
Label_1203:
	var_488_string = ""; // 0x4b3 PushV
	var_488_string = var_2_object; // 0x4b4 MovT
	func_2787(var_488_string); // 0x4b5 NEW_2
	goto Label_1198; // 0x4b7 Jump
	
Label_1209:
	var_489_string = "all"; // 0x4b9 PushS
	var_490_string = "idle"; // 0x4ba PushS
	PlayAnimation(var_489_string, var_490_string); // 0x4bb Func
	
Label_1213:
	WaitForAnimEnd(); // 0x4bd Func
	var_491_string = var_3_string; // 0x4bf PushT
	if(var_491_string == 0) goto Label_1218; // 0x4c0 JumpB
	goto Label_1223; // 0x4c1 Jump
	
Label_1218:
	var_492_string = "all"; // 0x4c2 PushS
	var_493_string = "idle"; // 0x4c3 PushS
	PlayAnimation(var_492_string, var_493_string); // 0x4c4 Func
	goto Label_1213; // 0x4c6 Jump
	
Label_1138:
	var_494_string = ""; // 0x472 PushV
	var_494_string = "Neutral"; // 0x473 MovS
	func_1224(var_462_object, var_494_string); // 0x474 NEW_2
	var_495_int = 530485; // 0x476 PushI
	SetMessage(var_495_int); // 0x477 TObjFunc
	ClearReplies(); // 0x479 TObjFunc
	var_496_bool = 0; var_497_object = Obj(); // 0x47b PushV
	var_497_object = var_1_object; // 0x47c MovT
	func_3142(var_497_object); // 0x47d NEW_2
	if(var_496_bool == 0) goto Label_1157; // 0x47f JumpB
	var_502_int = 530486; // 0x480 PushI
	var_503_int = 31853; // 0x481 PushI
	var_504_int = 31852; // 0x482 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x483 TObjFunc
	
Label_1157:
	var_505_bool = 0; // 0x485 PushV
	var_505_bool = 0; // 0x486 MovB
	var_506_bool = 0; var_507_object = Obj(); // 0x487 PushV
	var_507_object = var_1_object; // 0x488 MovT
	func_3166(var_507_object); // 0x489 NEW_2
	if(var_506_bool == 0) goto Label_1170; // 0x48b JumpB
	var_512_bool = 0; var_513_object = Obj(); // 0x48c PushV
	var_513_object = var_1_object; // 0x48d MovT
	func_3178(var_512_bool, var_513_object); // 0x48e NEW_2
	if(var_512_bool == 0) goto Label_1170; // 0x490 JumpB
	var_505_bool = 1; // 0x491 MovB
	
Label_1170:
	if(var_505_bool == 0) goto Label_1176; // 0x492 JumpB
	var_521_int = 531172; // 0x493 PushI
	var_522_int = 32623; // 0x494 PushI
	var_523_int = 32480; // 0x495 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x496 TObjFunc
	
Label_1176:
	var_524_bool = 0; var_525_object = Obj(); // 0x498 PushV
	var_525_object = var_1_object; // 0x499 MovT
	func_3189(var_525_object); // 0x49a NEW_2
	if(var_524_bool == 0) goto Label_1186; // 0x49c JumpB
	var_530_int = 531179; // 0x49d PushI
	var_531_int = 32617; // 0x49e PushI
	var_532_int = 32487; // 0x49f PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x4a0 TObjFunc
	
Label_1186:
	var_533_int = 530489; // 0x4a2 PushI
	var_534_int = -1; // 0x4a3 PushI
	var_535_int = 31855; // 0x4a4 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x4a5 TObjFunc
	goto Label_1194; // 0x4a7 Jump
}


func_2649(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0xa59 PushV
	var_133_string = "voice_common"; // 0xa5a PushS
	GetVariable(var_133_string, var_131_int); // 0xa5b Func
	var_134_int = var_131_int; // 0xa5d Push
	if(var_134_int == 0) goto Label_2687; // 0xa5e JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0xa5f PushV
	var_136_object = var_125_object; // 0xa60 Mov
	func_2707(var_136_object); // 0xa61 NEW_2
	var_165_bool = var_135_bool == 0; // 0xa63 Not
	if(var_165_bool == 0) goto Label_2669; // 0xa64 JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0xa65 PushV
	var_167_object = var_125_object; // 0xa66 Mov
	func_2744(var_167_object); // 0xa67 NEW_2
	var_201_bool = var_166_bool == 0; // 0xa69 Not
	if(var_201_bool == 0) goto Label_2669; // 0xa6a JumpB
	var_124_bool = 0; // 0xa6b MovB
	return 4; // 0xa6c Return
	
Label_2669:
	var_202_int = 2; // 0xa6d PushI
	irand(var_132_int, var_202_int); // 0xa6e Func
	var_203_int = var_132_int; // 0xa70 Push
	if(var_203_int == 0) goto Label_2682; // 0xa71 JumpB
	var_204_string = "voice_common"; // 0xa72 PushS
	var_205_int = 1; // 0xa73 PushI
	var_206_int = var_131_int + var_205_int; // 0xa74 Add
	var_207_int = 3; // 0xa75 PushI
	var_208_int = var_206_int / var_207_int; // 0xa76 Mod
	SetVariable(var_204_string, var_208_int); // 0xa77 Func
	goto Label_2686; // 0xa79 Jump
	
Label_2686:
	goto Label_2705; // 0xa7e Jump
	
Label_2705:
	var_124_bool = 1; // 0xa91 MovB
	return 4; // 0xa92 Return
	
Label_2682:
	var_209_string = "voice_common"; // 0xa7a PushS
	var_210_int = 0; // 0xa7b PushI
	SetVariable(var_209_string, var_210_int); // 0xa7c Func
	
Label_2687:
	var_211_bool = 0; var_212_object = Obj(); // 0xa7f PushV
	var_212_object = var_125_object; // 0xa80 Mov
	func_2744(var_212_object); // 0xa81 NEW_2
	var_213_bool = var_211_bool == 0; // 0xa83 Not
	if(var_213_bool == 0) goto Label_2701; // 0xa84 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xa85 PushV
	var_215_object = var_125_object; // 0xa86 Mov
	func_2707(var_215_object); // 0xa87 NEW_2
	var_216_bool = var_214_bool == 0; // 0xa89 Not
	if(var_216_bool == 0) goto Label_2701; // 0xa8a JumpB
	var_124_bool = 0; // 0xa8b MovB
	return 4; // 0xa8c Return
	
Label_2701:
	var_217_string = "voice_common"; // 0xa8d PushS
	var_218_int = 1; // 0xa8e PushI
	SetVariable(var_217_string, var_218_int); // 0xa8f Func
}


func_2905(var_514_bool, var_516_string)
{
	var_517_int = 0; var_518_bool = 0; var_519_int = 0; var_520_bool = 0; // 0xb59 PushV
	GetInvItemByName(var_519_int, var_516_string); // 0xb5a Func
	HasItem(var_519_int, var_520_bool); // 0xb5c ObjFunc
	var_514_bool = var_520_bool; // 0xb5e Mov
	return 4; // 0xb5f Return
}


func_3166(var_506_bool)
{
	var_508_int = 0; var_509_string = ""; // 0xc5f PushV
	var_509_string = "b10q03"; // 0xc60 MovS
	func_2856(var_508_int, var_509_string); // 0xc61 NEW_2
	var_510_int = 2; // 0xc63 PushI
	var_511_bool = var_508_int == var_510_int; // 0xc64 Eq
	if(var_511_bool == 0) goto Label_3176; // 0xc65 JumpB
	var_506_bool = 1; // 0xc66 MovB
	return 0; // 0xc67 Return
	
Label_3176:
	var_506_bool = 0; // 0xc68 MovB
	return 0; // 0xc69 Return
}


func_2912(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xb60 PushV
	FindActor(var_84_object, var_81_string); // 0xb61 Func
	var_85_bool = var_84_object == 0; // 0xb63 NullEq
	if(var_85_bool == 0) goto Label_2919; // 0xb64 JumpB
	var_80_bool = 0; // 0xb65 MovB
	return 2; // 0xb66 Return
	
Label_2919:
	Trigger(var_84_object, var_82_string); // 0xb67 Func
	var_80_bool = 1; // 0xb69 MovB
	return 2; // 0xb6a Return
}


func_2149(var_0_object, var_1_object, var_2_object, var_3_string, var_629_object, var_630_object)
{
	var_0_object = var_630_object; // 0x866 TMov
	var_1_object = var_629_object; // 0x867 TMov
	var_3_string = 0; // 0x868 TMovB
	var_635_int = 1; // 0x869 PushI
	if(var_635_int == 0) goto Label_2177; // 0x86a JumpB
	var_636_string = ""; // 0x86b PushV
	var_636_string = "Neutral"; // 0x86c MovS
	func_2207(var_630_object, var_636_string); // 0x86d NEW_2
	var_644_int = 540551; // 0x86f PushI
	SetMessage(var_644_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_645_int = 540552; // 0x874 PushI
	var_646_int = -1; // 0x875 PushI
	var_647_int = 42561; // 0x876 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x877 TObjFunc
	var_648_int = 540795; // 0x879 PushI
	var_649_int = -1; // 0x87a PushI
	var_650_int = 42844; // 0x87b PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x87c TObjFunc
	goto Label_2177; // 0x87e Jump
	
Label_2177:
	var_651_bool = 0; // 0x881 PushV
	func_2976(var_651_bool); // 0x882 NEW_2
	if(var_651_bool == 0) goto Label_2192; // 0x884 JumpB
	
Label_2181:
	lshWaitForAnimEnd(); // 0x885 Func
	var_652_string = var_3_string; // 0x887 PushT
	if(var_652_string == 0) goto Label_2186; // 0x888 JumpB
	goto Label_2191; // 0x889 Jump
	
Label_2191:
	goto Label_2206; // 0x88f Jump
	
Label_2206:
	return 0; // 0x89e Return
	
Label_2186:
	var_653_string = ""; // 0x88a PushV
	var_653_string = var_2_object; // 0x88b MovT
	func_2787(var_653_string); // 0x88c NEW_2
	goto Label_2181; // 0x88e Jump
	
Label_2192:
	var_654_string = "all"; // 0x890 PushS
	var_655_string = "idle"; // 0x891 PushS
	PlayAnimation(var_654_string, var_655_string); // 0x892 Func
	
Label_2196:
	WaitForAnimEnd(); // 0x894 Func
	var_656_string = var_3_string; // 0x896 PushT
	if(var_656_string == 0) goto Label_2201; // 0x897 JumpB
	goto Label_2206; // 0x898 Jump
	
Label_2201:
	var_657_string = "all"; // 0x899 PushS
	var_658_string = "idle"; // 0x89a PushS
	PlayAnimation(var_657_string, var_658_string); // 0x89b Func
	goto Label_2196; // 0x89d Jump
}


func_3178(var_512_bool, var_513_object)
{
	var_514_bool = 0; var_515_object = Obj(); var_516_string = ""; // 0xc6b PushV
	var_515_object = var_513_object; // 0xc6c Mov
	var_516_string = "b10q03_toy_burah"; // 0xc6d MovS
	func_2905(var_515_object, var_516_string); // 0xc6e NEW_2
	if(var_514_bool == 0) goto Label_3187; // 0xc70 JumpB
	var_512_bool = 1; // 0xc71 MovB
	return 0; // 0xc72 Return
	
Label_3187:
	var_512_bool = 0; // 0xc73 MovB
	return 0; // 0xc74 Return
}


func_2924(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0xb6c PushV
	GetGameTime(var_56_float); // 0xb6d Func
	var_54_float = var_56_float; // 0xb6f Mov
	return 2; // 0xb70 Return
}


func_2929(var_179_int)
{
	var_180_float = 0; var_181_float = 0; // 0xb71 PushV
	GetGameTime(var_181_float); // 0xb72 Func
	var_182_int = 1; // 0xb74 PushI
	var_183_int = 0; // 0xb75 PushV
	var_184_int = 24; // 0xb76 PushI
	var_183_int = var_181_float / var_181_float; // 0xb77 Div2
	var_179_int = var_182_int + var_183_int; // 0xb78 Add2
	return 2; // 0xb79 Return
}


func_3189(var_524_bool)
{
	var_526_int = 0; var_527_string = ""; // 0xc76 PushV
	var_527_string = "b10q03"; // 0xc77 MovS
	func_2856(var_526_int, var_527_string); // 0xc78 NEW_2
	var_528_int = 4; // 0xc7a PushI
	var_529_bool = var_526_int == var_528_int; // 0xc7b Eq
	if(var_529_bool == 0) goto Label_3199; // 0xc7c JumpB
	var_524_bool = 1; // 0xc7d MovB
	return 0; // 0xc7e Return
	
Label_3199:
	var_524_bool = 0; // 0xc7f MovB
	return 0; // 0xc80 Return
}


func_2938(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0xb7b PushV
	func_2929(var_280_int); // 0xb7c NEW_2
	var_278_bool = var_280_int == var_279_int; // 0xb7e Eq2
	return 0; // 0xb7f Return
}


func_1917(var_2_object, var_571_string)
{
	var_572_bool = 0; // 0x77e PushV
	func_2976(var_572_bool); // 0x77f NEW_2
	var_573_bool = var_572_bool == 0; // 0x781 Not
	if(var_573_bool == 0) goto Label_1924; // 0x782 JumpB
	return 0; // 0x783 Return
	
Label_1924:
	var_574_bool = var_571_string == var_2_object; // 0x784 Eq
	if(var_574_bool == 0) goto Label_1927; // 0x785 JumpB
	return 0; // 0x786 Return
	
Label_1927:
	var_575_string = ""; var_576_bool = 0; // 0x787 PushV
	var_575_string = var_571_string; // 0x788 Mov
	var_577_string = ""; // 0x789 PushS
	var_578_bool = var_571_string == var_577_string; // 0x78a Eq
	if(var_578_bool == 0) goto Label_1934; // 0x78b JumpB
	var_576_bool = 0; // 0x78c MovB
	goto Label_1935; // 0x78d Jump
	
Label_1935:
	func_2803(var_575_string, var_576_bool); // 0x78f NEW_2
	var_2_object = var_571_string; // 0x791 TMov
	return 0; // 0x792 Return
	
Label_1934:
	var_576_bool = 1; // 0x78e MovB
}


func_2944(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xb80 PushV
	var_59_string = "idle"; // 0xb81 MovS
	var_60_int = var_57_int; // 0xb82 Push
	if(var_60_int == 0) goto Label_2949; // 0xb83 JumpB
	var_59_string = var_59_string + var_57_int; // 0xb84 Add2
	
Label_2949:
	var_56_string = var_59_string; // 0xb85 Mov
	return 2; // 0xb86 Return
}


func_3201(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0xc82 PushV
	var_333_string = "b1q05"; // 0xc83 MovS
	func_2856(var_332_int, var_333_string); // 0xc84 NEW_2
	var_334_int = 1000; // 0xc86 PushI
	var_335_bool = var_332_int == var_334_int; // 0xc87 Eq
	if(var_335_bool == 0) goto Label_3211; // 0xc88 JumpB
	var_330_bool = 1; // 0xc89 MovB
	return 0; // 0xc8a Return
	
Label_3211:
	var_330_bool = 0; // 0xc8b MovB
	return 0; // 0xc8c Return
}


func_2951(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xb87 PushV
	var_53_int = 0; // 0xb88 MovI
	
Label_2953:
	var_55_string = "all"; // 0xb89 PushS
	var_56_string = ""; var_57_int = 0; // 0xb8a PushV
	var_57_int = var_53_int; // 0xb8b Mov
	func_2944(var_56_string, var_57_int); // 0xb8c NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xb8e Func
	var_61_bool = var_54_bool == 0; // 0xb90 Not
	if(var_61_bool == 0) goto Label_2963; // 0xb91 JumpB
	goto Label_2966; // 0xb92 Jump
	
Label_2966:
	var_50_int = var_53_int; // 0xb96 Mov
	return 4; // 0xb97 Return
	
Label_2963:
	var_62_int = 1; // 0xb93 PushI
	var_53_int = var_53_int + var_62_int; // 0xb94 Add2
	goto Label_2953; // 0xb95 Jump
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0x8c PushV
	func_2976(var_227_bool); // 0x8d NEW_2
	var_228_bool = var_227_bool == 0; // 0x8f Not
	if(var_228_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_229_bool = var_226_string == var_2_object; // 0x92 Eq
	if(var_229_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_230_string = ""; var_231_bool = 0; // 0x95 PushV
	var_230_string = var_226_string; // 0x96 Mov
	var_232_string = ""; // 0x97 PushS
	var_233_bool = var_226_string == var_232_string; // 0x98 Eq
	if(var_233_bool == 0) goto Label_156; // 0x99 JumpB
	var_231_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2803(var_230_string, var_231_bool); // 0x9d NEW_2
	var_2_object = var_226_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_231_bool = 1; // 0x9c MovB
}


func_3213(var_580_bool)
{
	var_582_int = 0; var_583_string = ""; // 0xc8e PushV
	var_583_string = "oob12Mishka1"; // 0xc8f MovS
	func_2856(var_582_int, var_583_string); // 0xc90 NEW_2
	var_584_int = 0; // 0xc92 PushI
	var_585_bool = var_582_int == var_584_int; // 0xc93 Eq
	if(var_585_bool == 0) goto Label_3223; // 0xc94 JumpB
	var_580_bool = 1; // 0xc95 MovB
	return 0; // 0xc96 Return
	
Label_3223:
	var_580_bool = 0; // 0xc97 MovB
	return 0; // 0xc98 Return
}


func_2707(var_135_bool)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; // 0xa93 PushV
	var_142_string = "c"; // 0xa94 MovS
	var_143_int = 0; // 0xa95 MovI
	
Label_2710:
	var_147_int = 1; // 0xa96 PushI
	if(var_147_int == 0) goto Label_2723; // 0xa97 JumpB
	var_148_int = 1; // 0xa98 PushI
	var_149_int = var_143_int + var_148_int; // 0xa99 Add
	var_150_int = var_142_string + var_149_int; // 0xa9a Add
	HasProperty(var_150_int, var_144_bool); // 0xa9b ObjFunc
	var_151_bool = var_144_bool == 0; // 0xa9d Not
	if(var_151_bool == 0) goto Label_2720; // 0xa9e JumpB
	goto Label_2723; // 0xa9f Jump
	
Label_2723:
	var_152_bool = var_143_int == 0; // 0xaa3 Not
	if(var_152_bool == 0) goto Label_2727; // 0xaa4 JumpB
	var_135_bool = 0; // 0xaa5 MovB
	return 10; // 0xaa6 Return
	
Label_2727:
	var_145_int = 0; // 0xaa7 MovI
	var_153_int = 1; // 0xaa8 PushI
	var_154_bool = var_143_int > var_153_int; // 0xaa9 GT
	if(var_154_bool == 0) goto Label_2733; // 0xaaa JumpB
	irand(var_145_int, var_143_int); // 0xaab Func
	
Label_2733:
	var_155_int = 1; // 0xaad PushI
	var_156_int = var_145_int + var_155_int; // 0xaae Add
	var_157_int = var_142_string + var_156_int; // 0xaaf Add
	GetProperty(var_157_int, var_146_string); // 0xab0 ObjFunc
	var_158_bool = 0; var_159_string = ""; // 0xab2 PushV
	var_159_string = var_146_string; // 0xab3 Mov
	func_2818(var_158_bool, var_159_string); // 0xab4 NEW_2
	var_135_bool = var_158_bool; // 0xab5 Mov
	return 10; // 0xab7 Return
	
Label_2720:
	var_164_int = 1; // 0xaa0 PushI
	var_143_int = var_143_int + var_164_int; // 0xaa1 Add2
	goto Label_2710; // 0xaa2 Jump
}


func_2454()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x996 PushV
	WaitForAnimEnd(); // 0x997 Func
	var_48_bool = 0; // 0x999 PushV
	func_2557(var_48_bool); // 0x99a NEW_2
	var_49_bool = var_48_bool == 0; // 0x99c Not
	if(var_49_bool == 0) goto Label_2463; // 0x99d JumpB
	return 12; // 0x99e Return
	
Label_2463:
	var_50_int = 0; // 0x99f PushV
	func_2951(var_50_int); // 0x9a0 NEW_2
	var_42_int = var_50_int; // 0x9a1 Mov
	var_43_int = 0; // 0x9a3 MovI
	
Label_2468:
	var_63_bool = 0; // 0x9a4 PushV
	var_63_bool = 0; // 0x9a5 MovB
	var_64_int = 5; // 0x9a6 PushI
	var_65_bool = var_43_int < var_64_int; // 0x9a7 LT
	if(var_65_bool == 0) goto Label_2478; // 0x9a8 JumpB
	var_66_bool = 0; // 0x9a9 PushV
	func_2557(var_66_bool); // 0x9aa NEW_2
	if(var_66_bool == 0) goto Label_2478; // 0x9ac JumpB
	var_63_bool = 1; // 0x9ad MovB
	
Label_2478:
	if(var_63_bool == 0) goto Label_2520; // 0x9ae JumpB
	var_67_bool = var_42_int == 0; // 0x9af Not
	if(var_67_bool == 0) goto Label_2488; // 0x9b0 JumpB
	var_68_int = 3; // 0x9b1 PushI
	Sleep(var_68_int, var_44_bool); // 0x9b2 Func
	var_69_bool = var_44_bool == 0; // 0x9b4 Not
	if(var_69_bool == 0) goto Label_2487; // 0x9b5 JumpB
	goto Label_2520; // 0x9b6 Jump
	
Label_2520:
	ResetAAS(); // 0x9d8 Func
	return 12; // 0x9da Return
	
Label_2487:
	goto Label_2509; // 0x9b7 Jump
	
Label_2509:
	var_70_bool = 0; // 0x9cd PushV
	func_2523(var_70_bool); // 0x9ce NEW_2
	var_71_bool = var_70_bool == 0; // 0x9d0 Not
	if(var_71_bool == 0) goto Label_2515; // 0x9d1 JumpB
	goto Label_2520; // 0x9d2 Jump
	
Label_2515:
	ResetAAS(); // 0x9d3 Func
	var_72_int = 1; // 0x9d5 PushI
	var_43_int = var_43_int + var_72_int; // 0x9d6 Add2
	goto Label_2468; // 0x9d7 Jump
	
Label_2488:
	irand(var_45_int, var_42_int); // 0x9b8 Func
	var_73_int = 5; // 0x9ba PushI
	irand(var_46_int, var_73_int); // 0x9bb Func
	var_74_int = 0; // 0x9bd PushI
	var_75_bool = var_46_int != var_74_int; // 0x9be Neq
	if(var_75_bool == 0) goto Label_2497; // 0x9bf JumpB
	var_45_int = 0; // 0x9c0 MovI
	
Label_2497:
	var_76_string = "all"; // 0x9c1 PushS
	var_77_string = ""; var_78_int = 0; // 0x9c2 PushV
	var_78_int = var_45_int; // 0x9c3 Mov
	func_2944(var_77_string, var_78_int); // 0x9c4 NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x9c6 Func
	WaitForAnimEnd(var_47_bool); // 0x9c8 Func
	var_79_bool = var_47_bool == 0; // 0x9ca Not
	if(var_79_bool == 0) goto Label_2509; // 0x9cb JumpB
	goto Label_2520; // 0x9cc Jump
}


func_2968(var_112_int)
{
	var_112_int = 515546; // 0xb98 MovI
	return 0; // 0xb99 Return
}


func_3225()
{
	var_206_object = Obj(); var_207_object = Obj(); // 0xc99 PushV
	var_208_int = 605; // 0xc9a PushI
	var_209_int = 2; // 0xc9b PushI
	var_210_int = 531184; // 0xc9c PushI
	CreateDiaryEntry(var_207_object, var_208_int, var_209_int, var_210_int); // 0xc9d Func
	var_211_bool = 0; var_212_object = Obj(); var_213_int = 0; // 0xc9f PushV
	var_212_object = var_207_object; // 0xca0 Mov
	var_213_int = 594; // 0xca1 MovI
	func_3303(var_211_bool, var_212_object, var_213_int); // 0xca2 NEW_2
	return 2; // 0xca4 Return
}


func_666(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0x29a PushV
	var_0_object = var_282_object; // 0x29b TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0x29c PushV
	var_293_object = var_282_object; // 0x29d Mov
	var_294_float = 70.0; // 0x29e MovF
	func_2562(var_293_object, var_294_float); // 0x29f NEW_2
	var_295_bool = var_292_bool == 0; // 0x2a1 Not
	if(var_295_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_281_int = -2; // 0x2a3 MovI
	return 8; // 0x2a4 Return
	
Label_677:
	CreateDialog(var_288_object); // 0x2a5 Func
	var_296_int = 0; // 0x2a7 PushV
	func_2970(var_296_int); // 0x2a8 NEW_2
	SetNPCName(var_296_int); // 0x2aa ObjFunc
	var_297_int = 0; // 0x2ac PushV
	func_2968(var_297_int); // 0x2ad NEW_2
	SetNPCDescription(var_297_int); // 0x2af ObjFunc
	var_298_string = ""; // 0x2b1 PushV
	func_2972(var_298_string); // 0x2b2 NEW_2
	SetPhoto(var_298_string); // 0x2b4 ObjFunc
	var_299_string = ""; // 0x2b6 PushV
	func_2974(var_299_string); // 0x2b7 NEW_2
	SetPhoto2(var_299_string); // 0x2b9 ObjFunc
	var_300_int = 0; // 0x2bb PushV
	func_3381(var_300_int); // 0x2bc NEW_2
	SetPlayerName(var_300_int); // 0x2be ObjFunc
	var_290_int = -1; // 0x2c0 MovI
	IsOverrideActive(var_289_bool); // 0x2c1 Func
	var_301_bool = var_289_bool; // 0x2c3 Push
	if(var_301_bool == 0) goto Label_711; // 0x2c4 JumpB
	var_281_int = -2; // 0x2c5 MovI
	return 8; // 0x2c6 Return
	
Label_711:
	DoDialog(var_288_object); // 0x2c7 Func
	var_302_bool = 0; var_303_object = Obj(); // 0x2c9 PushV
	var_304_object = Obj(); // 0x2ca PushV
	func_2840(var_304_object); // 0x2cb NEW_2
	var_303_object = var_304_object; // 0x2cc Mov
	func_2649(var_302_bool, var_303_object); // 0x2ce NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x2d0 PushV
	var_305_object = var_282_object; // 0x2d1 Mov
	var_306_object = var_288_object; // 0x2d2 Mov
	TaskCall(5); // 0x2d3 TaskCall
	func_747(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x2d4 NEW_2
	TaskReturn(); // 0x2d5 TaskReturn
	IsDialogEnd(var_291_bool); // 0x2d7 ObjFunc
	
Label_729:
	var_350_bool = var_291_bool == 0; // 0x2d9 Not
	if(var_350_bool == 0) goto Label_736; // 0x2da JumpB
	sync(); // 0x2db Func
	IsDialogEnd(var_291_bool); // 0x2dd ObjFunc
	goto Label_729; // 0x2df Jump
	
Label_736:
	var_351_object = Obj(); // 0x2e0 PushV
	var_351_object = var_282_object; // 0x2e1 Mov
	func_2631(); // 0x2e2 NEW_2
	StopDialog(var_288_object); // 0x2e4 Func
	GetReturnValue(var_290_int); // 0x2e6 ObjFunc
	var_281_int = var_290_int; // 0x2e8 Mov
	return 8; // 0x2e9 Return
}


func_2970(var_111_int)
{
	var_111_int = 502871; // 0xb9a MovI
	return 0; // 0xb9b Return
}


func_2972(var_113_string)
{
	var_113_string = "ui/NPC_Mishka.png"; // 0xb9c MovS
	return 0; // 0xb9d Return
}


func_2974(var_114_string)
{
	var_114_string = "ui/NPC_Mishka_b.png"; // 0xb9e MovS
	return 0; // 0xb9f Return
}


func_2207(var_2_object, var_636_string)
{
	var_637_bool = 0; // 0x8a0 PushV
	func_2976(var_637_bool); // 0x8a1 NEW_2
	var_638_bool = var_637_bool == 0; // 0x8a3 Not
	if(var_638_bool == 0) goto Label_2214; // 0x8a4 JumpB
	return 0; // 0x8a5 Return
	
Label_2214:
	var_639_bool = var_636_string == var_2_object; // 0x8a6 Eq
	if(var_639_bool == 0) goto Label_2217; // 0x8a7 JumpB
	return 0; // 0x8a8 Return
	
Label_2217:
	var_640_string = ""; var_641_bool = 0; // 0x8a9 PushV
	var_640_string = var_636_string; // 0x8aa Mov
	var_642_string = ""; // 0x8ab PushS
	var_643_bool = var_636_string == var_642_string; // 0x8ac Eq
	if(var_643_bool == 0) goto Label_2224; // 0x8ad JumpB
	var_641_bool = 0; // 0x8ae MovB
	goto Label_2225; // 0x8af Jump
	
Label_2225:
	func_2803(var_640_string, var_641_bool); // 0x8b1 NEW_2
	var_2_object = var_636_string; // 0x8b3 TMov
	return 0; // 0x8b4 Return
	
Label_2224:
	var_641_bool = 1; // 0x8b0 MovB
}


func_2976(var_106_bool)
{
	var_106_bool = 1; // 0xba0 MovB
	return 0; // 0xba1 Return
}


func_417(var_2_object, var_402_string)
{
	var_403_bool = 0; // 0x1a2 PushV
	func_2976(var_403_bool); // 0x1a3 NEW_2
	var_404_bool = var_403_bool == 0; // 0x1a5 Not
	if(var_404_bool == 0) goto Label_424; // 0x1a6 JumpB
	return 0; // 0x1a7 Return
	
Label_424:
	var_405_bool = var_402_string == var_2_object; // 0x1a8 Eq
	if(var_405_bool == 0) goto Label_427; // 0x1a9 JumpB
	return 0; // 0x1aa Return
	
Label_427:
	var_406_string = ""; var_407_bool = 0; // 0x1ab PushV
	var_406_string = var_402_string; // 0x1ac Mov
	var_408_string = ""; // 0x1ad PushS
	var_409_bool = var_402_string == var_408_string; // 0x1ae Eq
	if(var_409_bool == 0) goto Label_434; // 0x1af JumpB
	var_407_bool = 0; // 0x1b0 MovB
	goto Label_435; // 0x1b1 Jump
	
Label_435:
	func_2803(var_406_string, var_407_bool); // 0x1b3 NEW_2
	var_2_object = var_402_string; // 0x1b5 TMov
	return 0; // 0x1b6 Return
	
Label_434:
	var_407_bool = 1; // 0x1b2 MovB
}


func_2978(var_143_object)
{
	var_145_string = "avroks blood is given"; // 0xba3 PushS
	Trace(var_145_string); // 0xba4 Func
	var_146_object = Obj(); var_147_string = ""; var_148_int = 0; // 0xba6 PushV
	var_146_object = var_143_object; // 0xba7 Mov
	var_147_string = "avroks_blood"; // 0xba8 MovS
	var_148_int = 1; // 0xba9 MovI
	func_2892(var_146_object, var_147_string, var_148_int); // 0xbaa NEW_2
	return 0; // 0xbac Return
}


func_3238()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0xca6 PushV
	var_118_int = 607; // 0xca7 PushI
	var_119_int = 2; // 0xca8 PushI
	var_120_int = 531500; // 0xca9 PushI
	CreateDiaryEntry(var_117_object, var_118_int, var_119_int, var_120_int); // 0xcaa Func
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0; // 0xcac PushV
	var_122_object = var_117_object; // 0xcad Mov
	var_123_int = 594; // 0xcae MovI
	func_3303(var_121_bool, var_122_object, var_123_int); // 0xcaf NEW_2
	return 2; // 0xcb1 Return
}


func_2989()
{
	var_400_string = "oob8Mishka1"; // 0xbae PushS
	var_401_int = 1; // 0xbaf PushI
	SetVariable(var_400_string, var_401_int); // 0xbb0 Func
	return 0; // 0xbb2 Return
}


func_3251()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xcb3 PushV
	var_59_int = 596; // 0xcb4 PushI
	var_60_int = 2; // 0xcb5 PushI
	var_61_int = 531147; // 0xcb6 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xcb7 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xcb9 PushV
	var_63_object = var_58_object; // 0xcba Mov
	var_64_int = 594; // 0xcbb MovI
	func_3303(var_62_bool, var_63_object, var_64_int); // 0xcbc NEW_2
	return 2; // 0xcbe Return
}


func_2995()
{
	var_39_string = "oob1Mishka1"; // 0xbb4 PushS
	var_40_int = 1; // 0xbb5 PushI
	SetVariable(var_39_string, var_40_int); // 0xbb6 Func
	return 0; // 0xbb8 Return
}


func_2744(var_166_bool)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; // 0xab8 PushV
	var_178_string = "d"; // 0xab9 PushS
	var_179_int = 0; // 0xaba PushV
	func_2929(var_179_int); // 0xabb NEW_2
	var_185_int = var_178_string + var_179_int; // 0xabd Add
	var_186_string = "m"; // 0xabe PushS
	var_173_string = var_185_int + var_186_string; // 0xabf Add2
	var_174_int = 0; // 0xac0 MovI
	
Label_2753:
	var_187_int = 1; // 0xac1 PushI
	if(var_187_int == 0) goto Label_2766; // 0xac2 JumpB
	var_188_int = 1; // 0xac3 PushI
	var_189_int = var_174_int + var_188_int; // 0xac4 Add
	var_190_int = var_173_string + var_189_int; // 0xac5 Add
	HasProperty(var_190_int, var_175_bool); // 0xac6 ObjFunc
	var_191_bool = var_175_bool == 0; // 0xac8 Not
	if(var_191_bool == 0) goto Label_2763; // 0xac9 JumpB
	goto Label_2766; // 0xaca Jump
	
Label_2766:
	var_192_bool = var_174_int == 0; // 0xace Not
	if(var_192_bool == 0) goto Label_2770; // 0xacf JumpB
	var_166_bool = 0; // 0xad0 MovB
	return 10; // 0xad1 Return
	
Label_2770:
	var_176_int = 0; // 0xad2 MovI
	var_193_int = 1; // 0xad3 PushI
	var_194_bool = var_174_int > var_193_int; // 0xad4 GT
	if(var_194_bool == 0) goto Label_2776; // 0xad5 JumpB
	irand(var_176_int, var_174_int); // 0xad6 Func
	
Label_2776:
	var_195_int = 1; // 0xad8 PushI
	var_196_int = var_176_int + var_195_int; // 0xad9 Add
	var_197_int = var_173_string + var_196_int; // 0xada Add
	GetProperty(var_197_int, var_177_string); // 0xadb ObjFunc
	var_198_bool = 0; var_199_string = ""; // 0xadd PushV
	var_199_string = var_177_string; // 0xade Mov
	func_2818(var_198_bool, var_199_string); // 0xadf NEW_2
	var_166_bool = var_198_bool; // 0xae0 Mov
	return 10; // 0xae2 Return
	
Label_2763:
	var_200_int = 1; // 0xacb PushI
	var_174_int = var_174_int + var_200_int; // 0xacc Add2
	goto Label_2753; // 0xacd Jump
}


func_3001()
{
	var_131_string = "b10q04MishkaTalk"; // 0xbba PushS
	var_132_int = 9; // 0xbbb PushI
	SetVariable(var_131_string, var_132_int); // 0xbbc Func
	func_3277(); // 0xbbf NEW_2
	return 0; // 0xbc1 Return
}


func_3264()
{
	var_181_object = Obj(); var_182_object = Obj(); // 0xcc0 PushV
	var_183_int = 603; // 0xcc1 PushI
	var_184_int = 2; // 0xcc2 PushI
	var_185_int = 531182; // 0xcc3 PushI
	CreateDiaryEntry(var_182_object, var_183_int, var_184_int, var_185_int); // 0xcc4 Func
	var_186_bool = 0; var_187_object = Obj(); var_188_int = 0; // 0xcc6 PushV
	var_187_object = var_182_object; // 0xcc7 Mov
	var_188_int = 594; // 0xcc8 MovI
	func_3303(var_186_bool, var_187_object, var_188_int); // 0xcc9 NEW_2
	return 2; // 0xccb Return
}


func_3010()
{
	var_169_string = "playsound"; // 0xbc3 PushS
	var_170_string = "giveitem"; // 0xbc4 PushS
	TriggerWorld(var_169_string, var_170_string); // 0xbc5 Func
	return 0; // 0xbc7 Return
}


func_1224(var_2_object, var_474_string)
{
	var_475_bool = 0; // 0x4c9 PushV
	func_2976(var_475_bool); // 0x4ca NEW_2
	var_476_bool = var_475_bool == 0; // 0x4cc Not
	if(var_476_bool == 0) goto Label_1231; // 0x4cd JumpB
	return 0; // 0x4ce Return
	
Label_1231:
	var_477_bool = var_474_string == var_2_object; // 0x4cf Eq
	if(var_477_bool == 0) goto Label_1234; // 0x4d0 JumpB
	return 0; // 0x4d1 Return
	
Label_1234:
	var_478_string = ""; var_479_bool = 0; // 0x4d2 PushV
	var_478_string = var_474_string; // 0x4d3 Mov
	var_480_string = ""; // 0x4d4 PushS
	var_481_bool = var_474_string == var_480_string; // 0x4d5 Eq
	if(var_481_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_479_bool = 0; // 0x4d7 MovB
	goto Label_1242; // 0x4d8 Jump
	
Label_1242:
	func_2803(var_478_string, var_479_bool); // 0x4da NEW_2
	var_2_object = var_474_string; // 0x4dc TMov
	return 0; // 0x4dd Return
	
Label_1241:
	var_479_bool = 1; // 0x4d9 MovB
}


func_3016()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xbc8 PushV
	var_41_string = "b10q03"; // 0xbc9 PushS
	var_42_int = 2; // 0xbca PushI
	SetVariable(var_41_string, var_42_int); // 0xbcb Func
	var_43_object = Obj(); // 0xbcd PushV
	func_3331(var_43_object); // 0xbce NEW_2
	var_40_object = var_43_object; // 0xbcf Mov
	var_50_string = "b10q03MishkaGotoDoll"; // 0xbd1 PushS
	var_51_string = "pt_b10q03_plant1"; // 0xbd2 PushS
	var_52_int = 0; // 0xbd3 PushI
	var_53_int = 531262; // 0xbd4 PushI
	var_54_float = 0; // 0xbd5 PushV
	func_2924(var_54_float); // 0xbd6 NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xbd8 ObjFunc
	func_3251(); // 0xbdb NEW_2
	var_80_bool = 0; var_81_string = ""; var_82_string = ""; // 0xbdd PushV
	var_81_string = "quest_b10_03"; // 0xbde MovS
	var_82_string = "place_doll"; // 0xbdf MovS
	func_2912(var_80_bool, var_81_string, var_82_string); // 0xbe0 NEW_2
	return 2; // 0xbe2 Return
}


func_3277()
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xccd PushV
	var_135_int = 558; // 0xcce PushI
	var_136_int = 2; // 0xccf PushI
	var_137_int = 530537; // 0xcd0 PushI
	CreateDiaryEntry(var_134_object, var_135_int, var_136_int, var_137_int); // 0xcd1 Func
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0; // 0xcd3 PushV
	var_139_object = var_134_object; // 0xcd4 Mov
	var_140_int = 549; // 0xcd5 MovI
	func_3303(var_138_bool, var_139_object, var_140_int); // 0xcd6 NEW_2
	return 2; // 0xcd8 Return
}


func_3290(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xcda PushV
	GetDiaryRoot(var_73_object); // 0xcdb Func
	var_74_bool = var_73_object == 0; // 0xcdd Not
	if(var_74_bool == 0) goto Label_3300; // 0xcde JumpB
	var_75_string = "Can't retrieve diary root"; // 0xcdf PushS
	Trace(var_75_string); // 0xce0 Func
	var_71_object = 0; // 0xce2 MovB
	return 2; // 0xce3 Return
	
Label_3300:
	var_71_object = var_73_object; // 0xce4 Mov
	return 2; // 0xce5 Return
}


func_2523(var_70_bool)
{
	var_70_bool = 1; // 0x9db MovB
	return 0; // 0x9dc Return
}


func_2525()
{
	StopAnimation(); // 0x9dd Func
	StopGroup0(); // 0x9df Func
	return 0; // 0x9e1 Return
}


func_2530(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x9e2 PushV
	GetPosition(var_51_cvector); // 0x9e3 Func
	GetPosition(var_52_cvector); // 0x9e5 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x9e7 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x9e8 Or2
	return 6; // 0x9e9 Return
}


func_2787(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0xae3 PushV
	lshHasAnimation(var_256_bool, var_252_string); // 0xae4 Func
	var_259_bool = var_256_bool; // 0xae6 Push
	if(var_259_bool == 0) goto Label_2798; // 0xae7 JumpB
	lshGetAnimTimes(var_252_string, var_257_float, var_258_float); // 0xae8 Func
	var_260_bool = 0; // 0xaea PushB
	lshPlayAnimation(var_257_float, var_258_float, var_260_bool); // 0xaeb Func
	goto Label_2802; // 0xaed Jump
	
Label_2802:
	return 6; // 0xaf2 Return
	
Label_2798:
	var_261_string = "Can't find lsh animation : "; // 0xaee PushS
	var_262_int = var_261_string + var_252_string; // 0xaef Add
	Trace(var_262_int); // 0xaf0 Func
}


func_3044()
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0; // 0xbe5 PushV
	var_91_object = Obj(); // 0xbe6 PushV
	func_3331(var_91_object); // 0xbe7 NEW_2
	var_88_object = var_91_object; // 0xbe8 Mov
	var_89_string = "pt_b10q03_plant1"; // 0xbea MovS
	var_90_float = 2; // 0xbeb MovI
	func_3348(var_88_object, var_89_string, var_90_float); // 0xbec NEW_2
	var_111_object = Obj(); // 0xbee PushV
	func_3331(var_111_object); // 0xbef NEW_2
	ShowMap(var_111_object); // 0xbf1 ObjFunc
	return 0; // 0xbf3 Return
}


func_2278(var_0_object)
{
	var_32_bool = 0; // 0x8e6 PushV
	func_2557(var_32_bool); // 0x8e7 NEW_2
	var_35_bool = var_32_bool == 0; // 0x8e9 Not
	if(var_35_bool == 0) goto Label_2285; // 0x8ea JumpB
	Hold(); // 0x8eb Func
	
Label_2285:
	GetDirection(var_0_object); // 0x8ed Func
	
Label_2287:
	func_2454(); // 0x8f0 NEW_2
	goto Label_2287; // 0x8f2 Jump
}


func_3303(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xce7 PushV
	var_71_object = Obj(); // 0xce8 PushV
	func_3290(var_71_object); // 0xce9 NEW_2
	var_68_object = var_71_object; // 0xcea Mov
	Find(var_64_int, var_69_object); // 0xcec ObjFunc
	var_76_bool = var_69_object == 0; // 0xcee Not
	if(var_76_bool == 0) goto Label_3318; // 0xcef JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xcf0 PushS
	var_78_int = var_77_string + var_64_int; // 0xcf1 Add
	Trace(var_78_int); // 0xcf2 Func
	var_62_bool = 0; // 0xcf4 MovB
	return 6; // 0xcf5 Return
	
Label_3318:
	AddChild(var_63_object); // 0xcf6 ObjFunc
	var_79_int = 7; // 0xcf8 PushI
	SendWorldWndMessage(var_79_int); // 0xcf9 Func
	GetCategory(var_70_int); // 0xcfb ObjFunc
	SetDiarySection(var_70_int); // 0xcfd Func
	var_62_bool = 0; // 0xcff MovB
	return 6; // 0xd00 Return
}


func_1768(var_0_object, var_540_int, var_541_object)
{
	var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0; var_547_object = Obj(); var_548_bool = 0; var_549_int = 0; var_550_bool = 0; // 0x6e8 PushV
	var_0_object = var_541_object; // 0x6e9 TMov
	var_551_bool = 0; var_552_object = Obj(); var_553_float = 0; // 0x6ea PushV
	var_552_object = var_541_object; // 0x6eb Mov
	var_553_float = 70.0; // 0x6ec MovF
	func_2562(var_552_object, var_553_float); // 0x6ed NEW_2
	var_554_bool = var_551_bool == 0; // 0x6ef Not
	if(var_554_bool == 0) goto Label_1779; // 0x6f0 JumpB
	var_540_int = -2; // 0x6f1 MovI
	return 8; // 0x6f2 Return
	
Label_1779:
	CreateDialog(var_547_object); // 0x6f3 Func
	var_555_int = 0; // 0x6f5 PushV
	func_2970(var_555_int); // 0x6f6 NEW_2
	SetNPCName(var_555_int); // 0x6f8 ObjFunc
	var_556_int = 0; // 0x6fa PushV
	func_2968(var_556_int); // 0x6fb NEW_2
	SetNPCDescription(var_556_int); // 0x6fd ObjFunc
	var_557_string = ""; // 0x6ff PushV
	func_2972(var_557_string); // 0x700 NEW_2
	SetPhoto(var_557_string); // 0x702 ObjFunc
	var_558_string = ""; // 0x704 PushV
	func_2974(var_558_string); // 0x705 NEW_2
	SetPhoto2(var_558_string); // 0x707 ObjFunc
	var_559_int = 0; // 0x709 PushV
	func_3381(var_559_int); // 0x70a NEW_2
	SetPlayerName(var_559_int); // 0x70c ObjFunc
	var_549_int = -1; // 0x70e MovI
	IsOverrideActive(var_548_bool); // 0x70f Func
	var_560_bool = var_548_bool; // 0x711 Push
	if(var_560_bool == 0) goto Label_1813; // 0x712 JumpB
	var_540_int = -2; // 0x713 MovI
	return 8; // 0x714 Return
	
Label_1813:
	DoDialog(var_547_object); // 0x715 Func
	var_561_bool = 0; var_562_object = Obj(); // 0x717 PushV
	var_563_object = Obj(); // 0x718 PushV
	func_2840(var_563_object); // 0x719 NEW_2
	var_562_object = var_563_object; // 0x71a Mov
	func_2649(var_561_bool, var_562_object); // 0x71c NEW_2
	var_564_object = Obj(); var_565_object = Obj(); // 0x71e PushV
	var_564_object = var_541_object; // 0x71f Mov
	var_565_object = var_547_object; // 0x720 Mov
	TaskCall(9); // 0x721 TaskCall
	func_1849(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object); // 0x722 NEW_2
	TaskReturn(); // 0x723 TaskReturn
	IsDialogEnd(var_550_bool); // 0x725 ObjFunc
	
Label_1831:
	var_603_bool = var_550_bool == 0; // 0x727 Not
	if(var_603_bool == 0) goto Label_1838; // 0x728 JumpB
	sync(); // 0x729 Func
	IsDialogEnd(var_550_bool); // 0x72b ObjFunc
	goto Label_1831; // 0x72d Jump
	
Label_1838:
	var_604_object = Obj(); // 0x72e PushV
	var_604_object = var_541_object; // 0x72f Mov
	func_2631(); // 0x730 NEW_2
	StopDialog(var_547_object); // 0x732 Func
	GetReturnValue(var_549_int); // 0x734 ObjFunc
	var_540_int = var_549_int; // 0x736 Mov
	return 8; // 0x737 Return
}


func_2538(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x9ea PushV
	GetPosition(var_44_cvector); // 0x9eb Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x9ed Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x9ee PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x9ef PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x9f0 Func
	var_39_bool = var_46_bool; // 0x9f2 Mov
	return 6; // 0x9f3 Return
}


func_747(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x2ec TMov
	var_1_object = var_305_object; // 0x2ed TMov
	var_3_string = 0; // 0x2ee TMovB
	var_311_int = 1; // 0x2ef PushI
	if(var_311_int == 0) goto Label_789; // 0x2f0 JumpB
	var_312_string = ""; // 0x2f1 PushV
	var_312_string = "Autizm"; // 0x2f2 MovS
	func_819(var_306_object, var_312_string); // 0x2f3 NEW_2
	var_320_int = 527115; // 0x2f5 PushI
	SetMessage(var_320_int); // 0x2f6 TObjFunc
	ClearReplies(); // 0x2f8 TObjFunc
	var_321_bool = 0; // 0x2fa PushV
	var_321_bool = 0; // 0x2fb MovB
	var_322_bool = 0; var_323_object = Obj(); // 0x2fc PushV
	var_323_object = var_1_object; // 0x2fd MovT
	func_3130(var_323_object); // 0x2fe NEW_2
	if(var_322_bool == 0) goto Label_775; // 0x300 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x301 PushV
	var_331_object = var_1_object; // 0x302 MovT
	func_3201(var_331_object); // 0x303 NEW_2
	if(var_330_bool == 0) goto Label_775; // 0x305 JumpB
	var_321_bool = 1; // 0x306 MovB
	
Label_775:
	if(var_321_bool == 0) goto Label_781; // 0x307 JumpB
	var_336_int = 527116; // 0x308 PushI
	var_337_int = 28416; // 0x309 PushI
	var_338_int = 28414; // 0x30a PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x30b TObjFunc
	
Label_781:
	var_339_int = 527117; // 0x30d PushI
	var_340_int = -1; // 0x30e PushI
	var_341_int = 28415; // 0x30f PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x310 TObjFunc
	goto Label_789; // 0x312 Jump
	
Label_789:
	var_342_bool = 0; // 0x315 PushV
	func_2976(var_342_bool); // 0x316 NEW_2
	if(var_342_bool == 0) goto Label_804; // 0x318 JumpB
	
Label_793:
	lshWaitForAnimEnd(); // 0x319 Func
	var_343_string = var_3_string; // 0x31b PushT
	if(var_343_string == 0) goto Label_798; // 0x31c JumpB
	goto Label_803; // 0x31d Jump
	
Label_803:
	goto Label_818; // 0x323 Jump
	
Label_818:
	return 0; // 0x332 Return
	
Label_798:
	var_344_string = ""; // 0x31e PushV
	var_344_string = var_2_object; // 0x31f MovT
	func_2787(var_344_string); // 0x320 NEW_2
	goto Label_793; // 0x322 Jump
	
Label_804:
	var_345_string = "all"; // 0x324 PushS
	var_346_string = "idle"; // 0x325 PushS
	PlayAnimation(var_345_string, var_346_string); // 0x326 Func
	
Label_808:
	WaitForAnimEnd(); // 0x328 Func
	var_347_string = var_3_string; // 0x32a PushT
	if(var_347_string == 0) goto Label_813; // 0x32b JumpB
	goto Label_818; // 0x32c Jump
	
Label_813:
	var_348_string = "all"; // 0x32d PushS
	var_349_string = "idle"; // 0x32e PushS
	PlayAnimation(var_348_string, var_349_string); // 0x32f Func
	goto Label_808; // 0x331 Jump
}


func_239(var_0_object, var_354_int, var_355_object)
{
	var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0; // 0xef PushV
	var_0_object = var_355_object; // 0xf0 TMov
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0; // 0xf1 PushV
	var_366_object = var_355_object; // 0xf2 Mov
	var_367_float = 70.0; // 0xf3 MovF
	func_2562(var_366_object, var_367_float); // 0xf4 NEW_2
	var_368_bool = var_365_bool == 0; // 0xf6 Not
	if(var_368_bool == 0) goto Label_250; // 0xf7 JumpB
	var_354_int = -2; // 0xf8 MovI
	return 8; // 0xf9 Return
	
Label_250:
	CreateDialog(var_361_object); // 0xfa Func
	var_369_int = 0; // 0xfc PushV
	func_2970(var_369_int); // 0xfd NEW_2
	SetNPCName(var_369_int); // 0xff ObjFunc
	var_370_int = 0; // 0x101 PushV
	func_2968(var_370_int); // 0x102 NEW_2
	SetNPCDescription(var_370_int); // 0x104 ObjFunc
	var_371_string = ""; // 0x106 PushV
	func_2972(var_371_string); // 0x107 NEW_2
	SetPhoto(var_371_string); // 0x109 ObjFunc
	var_372_string = ""; // 0x10b PushV
	func_2974(var_372_string); // 0x10c NEW_2
	SetPhoto2(var_372_string); // 0x10e ObjFunc
	var_373_int = 0; // 0x110 PushV
	func_3381(var_373_int); // 0x111 NEW_2
	SetPlayerName(var_373_int); // 0x113 ObjFunc
	var_363_int = -1; // 0x115 MovI
	IsOverrideActive(var_362_bool); // 0x116 Func
	var_374_bool = var_362_bool; // 0x118 Push
	if(var_374_bool == 0) goto Label_284; // 0x119 JumpB
	var_354_int = -2; // 0x11a MovI
	return 8; // 0x11b Return
	
Label_284:
	DoDialog(var_361_object); // 0x11c Func
	var_375_bool = 0; var_376_object = Obj(); // 0x11e PushV
	var_377_object = Obj(); // 0x11f PushV
	func_2840(var_377_object); // 0x120 NEW_2
	var_376_object = var_377_object; // 0x121 Mov
	func_2649(var_375_bool, var_376_object); // 0x123 NEW_2
	var_378_object = Obj(); var_379_object = Obj(); // 0x125 PushV
	var_378_object = var_355_object; // 0x126 Mov
	var_379_object = var_361_object; // 0x127 Mov
	TaskCall(3); // 0x128 TaskCall
	func_320(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object); // 0x129 NEW_2
	TaskReturn(); // 0x12a TaskReturn
	IsDialogEnd(var_364_bool); // 0x12c ObjFunc
	
Label_302:
	var_433_bool = var_364_bool == 0; // 0x12e Not
	if(var_433_bool == 0) goto Label_309; // 0x12f JumpB
	sync(); // 0x130 Func
	IsDialogEnd(var_364_bool); // 0x132 ObjFunc
	goto Label_302; // 0x134 Jump
	
Label_309:
	var_434_object = Obj(); // 0x135 PushV
	var_434_object = var_355_object; // 0x136 Mov
	func_2631(); // 0x137 NEW_2
	StopDialog(var_361_object); // 0x139 Func
	GetReturnValue(var_363_int); // 0x13b ObjFunc
	var_354_int = var_363_int; // 0x13d Mov
	return 8; // 0x13e Return
}


func_2803(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0xaf3 PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0xaf4 Func
	var_240_bool = var_237_bool; // 0xaf6 Push
	if(var_240_bool == 0) goto Label_2813; // 0xaf7 JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0xaf8 Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0xafa Func
	goto Label_2817; // 0xafc Jump
	
Label_2817:
	return 6; // 0xb01 Return
	
Label_2813:
	var_241_string = "Can't find lsh animation : "; // 0xafd PushS
	var_242_int = var_241_string + var_230_string; // 0xafe Add
	Trace(var_242_int); // 0xaff Func
}


func_2292(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x8f4 PushV
	var_59_string = "player"; // 0x8f5 PushS
	FindActor(var_58_object, var_59_string); // 0x8f6 Func
	var_60_bool = var_58_object == 0; // 0x8f8 Not
	if(var_60_bool == 0) goto Label_2300; // 0x8f9 JumpB
	var_56_bool = 0; // 0x8fa MovB
	return 2; // 0x8fb Return
	
Label_2300:
	var_61_bool = 0; var_62_object = Obj(); // 0x8fc PushV
	var_62_object = var_58_object; // 0x8fd Mov
	func_2548(var_62_object); // 0x8fe NEW_2
	var_56_bool = var_61_bool; // 0x8ff Mov
	return 2; // 0x901 Return
}


func_3060()
{
	var_179_string = "b10q03"; // 0xbf5 PushS
	var_180_int = 3; // 0xbf6 PushI
	SetVariable(var_179_string, var_180_int); // 0xbf7 Func
	func_3264(); // 0xbfa NEW_2
	var_189_bool = 0; var_190_string = ""; var_191_string = ""; // 0xbfc PushV
	var_190_string = "quest_b10_03"; // 0xbfd MovS
	var_191_string = "place_blood"; // 0xbfe MovS
	func_2912(var_189_bool, var_190_string, var_191_string); // 0xbff NEW_2
	return 0; // 0xc01 Return
}


func_2548(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x9f4 PushV
	GetPosition(var_38_cvector); // 0x9f5 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x9f7 PushV
	var_40_cvector = var_38_cvector; // 0x9f8 Mov
	func_2538(var_39_bool, var_40_cvector); // 0x9f9 NEW_2
	var_35_bool = var_39_bool; // 0x9fa Mov
	return 2; // 0x9fc Return
}


func_2557(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x9fd PushV
	IsLoaded(var_34_bool); // 0x9fe Func
	var_32_bool = var_34_bool; // 0xa00 Mov
	return 2; // 0xa01 Return
}


