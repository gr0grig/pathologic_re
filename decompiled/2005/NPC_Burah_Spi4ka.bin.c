task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa7 PushI
	if(var_28_int == 0) goto Label_279; // 0xa8 JumpB
	func_2127(); // 0xaa NEW_2
	var_30_int = 31849; // 0xac PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xad Eq
	if(var_31_bool == 0) goto Label_180; // 0xae JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xaf PushV
	var_32_object = var_1_object; // 0xb0 MovT
	var_33_object = var_0_object; // 0xb1 MovT
	func_2256(); // 0xb2 NEW_2
	
Label_180:
	var_59_int = 31845; // 0xb4 PushI
	var_60_bool = var_26_bool == var_59_int; // 0xb5 Eq
	if(var_60_bool == 0) goto Label_208; // 0xb6 JumpB
	var_61_string = ""; // 0xb7 PushV
	var_61_string = "Serious"; // 0xb8 MovS
	func_144(var_27_cvector, var_61_string); // 0xb9 NEW_2
	var_78_int = 530479; // 0xbb PushI
	SetMessage(var_78_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_79_bool = 0; var_80_object = Obj(); // 0xc0 PushV
	var_80_object = var_1_object; // 0xc1 MovT
	func_2277(var_80_object); // 0xc2 NEW_2
	if(var_79_bool == 0) goto Label_202; // 0xc4 JumpB
	var_87_int = 530480; // 0xc5 PushI
	var_88_int = 32848; // 0xc6 PushI
	var_89_int = 31846; // 0xc7 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xc8 TObjFunc
	
Label_202:
	var_90_int = 530481; // 0xca PushI
	var_91_int = -1; // 0xcb PushI
	var_92_int = 31847; // 0xcc PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xcd TObjFunc
	return 0; // 0xcf Return
	
Label_208:
	var_93_int = 32848; // 0xd0 PushI
	var_94_bool = var_26_bool == var_93_int; // 0xd1 Eq
	if(var_94_bool == 0) goto Label_231; // 0xd2 JumpB
	var_95_string = ""; // 0xd3 PushV
	var_95_string = "Azart"; // 0xd4 MovS
	func_144(var_27_cvector, var_95_string); // 0xd5 NEW_2
	var_96_int = 531491; // 0xd7 PushI
	SetMessage(var_96_int); // 0xd8 TObjFunc
	ClearReplies(); // 0xda TObjFunc
	var_97_int = 531493; // 0xdc PushI
	var_98_int = 31848; // 0xdd PushI
	var_99_int = 32850; // 0xde PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xdf TObjFunc
	var_100_int = 531492; // 0xe1 PushI
	var_101_int = 31848; // 0xe2 PushI
	var_102_int = 32849; // 0xe3 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_103_int = 31848; // 0xe7 PushI
	var_104_bool = var_26_bool == var_103_int; // 0xe8 Eq
	if(var_104_bool == 0) goto Label_249; // 0xe9 JumpB
	var_105_string = ""; // 0xea PushV
	var_105_string = "Azart"; // 0xeb MovS
	func_144(var_27_cvector, var_105_string); // 0xec NEW_2
	var_106_int = 530482; // 0xee PushI
	SetMessage(var_106_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_107_int = 531494; // 0xf3 PushI
	var_108_int = 32853; // 0xf4 PushI
	var_109_int = 32852; // 0xf5 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_110_int = 32853; // 0xf9 PushI
	var_111_bool = var_26_bool == var_110_int; // 0xfa Eq
	if(var_111_bool == 0) goto Label_267; // 0xfb JumpB
	var_112_string = ""; // 0xfc PushV
	var_112_string = "Azart"; // 0xfd MovS
	func_144(var_27_cvector, var_112_string); // 0xfe NEW_2
	var_113_int = 531495; // 0x100 PushI
	SetMessage(var_113_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_114_int = 530483; // 0x105 PushI
	var_115_int = -1; // 0x106 PushI
	var_116_int = 31849; // 0x107 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_3_string = 1; // 0x10b TMovB
	var_117_bool = 0; // 0x10c PushV
	func_2225(var_117_bool); // 0x10d NEW_2
	if(var_117_bool == 0) goto Label_275; // 0x10f JumpB
	lshStopAnimation(); // 0x110 Func
	goto Label_277; // 0x112 Jump
	
Label_277:
	return 0; // 0x115 Return
	
Label_275:
	StopAnimation(); // 0x113 Func
	
Label_279:
	return 0; // 0x117 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1c4 PushI
	if(var_28_int == 0) goto Label_602; // 0x1c5 JumpB
	func_2127(); // 0x1c7 NEW_2
	var_30_int = 36924; // 0x1c9 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1ca Eq
	if(var_31_bool == 0) goto Label_465; // 0x1cb JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1cc PushV
	var_32_object = var_1_object; // 0x1cd MovT
	var_33_object = var_0_object; // 0x1ce MovT
	func_2271(); // 0x1cf NEW_2
	
Label_465:
	var_36_int = 36923; // 0x1d1 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x1d2 Eq
	if(var_37_bool == 0) goto Label_498; // 0x1d3 JumpB
	var_38_string = ""; // 0x1d4 PushV
	var_38_string = "Secret"; // 0x1d5 MovS
	func_429(var_27_cvector, var_38_string); // 0x1d6 NEW_2
	var_55_int = 535248; // 0x1d8 PushI
	SetMessage(var_55_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0x1dd PushV
	var_57_object = var_1_object; // 0x1de MovT
	func_2289(var_57_object); // 0x1df NEW_2
	if(var_56_bool == 0) goto Label_487; // 0x1e1 JumpB
	var_64_int = 535249; // 0x1e2 PushI
	var_65_int = 37070; // 0x1e3 PushI
	var_66_int = 36924; // 0x1e4 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x1e5 TObjFunc
	
Label_487:
	var_67_int = 535387; // 0x1e7 PushI
	var_68_int = -1; // 0x1e8 PushI
	var_69_int = 37072; // 0x1e9 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x1ea TObjFunc
	var_70_int = 535388; // 0x1ec PushI
	var_71_int = -1; // 0x1ed PushI
	var_72_int = 37073; // 0x1ee PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_73_int = 37070; // 0x1f2 PushI
	var_74_bool = var_26_bool == var_73_int; // 0x1f3 Eq
	if(var_74_bool == 0) goto Label_516; // 0x1f4 JumpB
	var_75_string = ""; // 0x1f5 PushV
	var_75_string = "Serious"; // 0x1f6 MovS
	func_429(var_27_cvector, var_75_string); // 0x1f7 NEW_2
	var_76_int = 535385; // 0x1f9 PushI
	SetMessage(var_76_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_77_int = 535386; // 0x1fe PushI
	var_78_int = 37074; // 0x1ff PushI
	var_79_int = 37071; // 0x200 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_80_int = 37074; // 0x204 PushI
	var_81_bool = var_26_bool == var_80_int; // 0x205 Eq
	if(var_81_bool == 0) goto Label_539; // 0x206 JumpB
	var_82_string = ""; // 0x207 PushV
	var_82_string = "Serious"; // 0x208 MovS
	func_429(var_27_cvector, var_82_string); // 0x209 NEW_2
	var_83_int = 535389; // 0x20b PushI
	SetMessage(var_83_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_84_int = 535390; // 0x210 PushI
	var_85_int = 37076; // 0x211 PushI
	var_86_int = 37075; // 0x212 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x213 TObjFunc
	var_87_int = 535393; // 0x215 PushI
	var_88_int = -1; // 0x216 PushI
	var_89_int = 37078; // 0x217 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x218 TObjFunc
	return 0; // 0x21a Return
	
Label_539:
	var_90_int = 37076; // 0x21b PushI
	var_91_bool = var_26_bool == var_90_int; // 0x21c Eq
	if(var_91_bool == 0) goto Label_567; // 0x21d JumpB
	var_92_string = ""; // 0x21e PushV
	var_92_string = "Azart"; // 0x21f MovS
	func_429(var_27_cvector, var_92_string); // 0x220 NEW_2
	var_93_int = 535391; // 0x222 PushI
	SetMessage(var_93_int); // 0x223 TObjFunc
	ClearReplies(); // 0x225 TObjFunc
	var_94_int = 535392; // 0x227 PushI
	var_95_int = 37079; // 0x228 PushI
	var_96_int = 37077; // 0x229 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x22a TObjFunc
	var_97_int = 535396; // 0x22c PushI
	var_98_int = -1; // 0x22d PushI
	var_99_int = 37081; // 0x22e PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x22f TObjFunc
	var_100_int = 535397; // 0x231 PushI
	var_101_int = -1; // 0x232 PushI
	var_102_int = 37082; // 0x233 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x234 TObjFunc
	return 0; // 0x236 Return
	
Label_567:
	var_103_int = 37079; // 0x237 PushI
	var_104_bool = var_26_bool == var_103_int; // 0x238 Eq
	if(var_104_bool == 0) goto Label_590; // 0x239 JumpB
	var_105_string = ""; // 0x23a PushV
	var_105_string = "Serious"; // 0x23b MovS
	func_429(var_27_cvector, var_105_string); // 0x23c NEW_2
	var_106_int = 535394; // 0x23e PushI
	SetMessage(var_106_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_107_int = 535395; // 0x243 PushI
	var_108_int = -1; // 0x244 PushI
	var_109_int = 37080; // 0x245 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x246 TObjFunc
	var_110_int = 535398; // 0x248 PushI
	var_111_int = -1; // 0x249 PushI
	var_112_int = 37083; // 0x24a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x24b TObjFunc
	return 0; // 0x24d Return
	
Label_590:
	var_3_string = 1; // 0x24e TMovB
	var_113_bool = 0; // 0x24f PushV
	func_2225(var_113_bool); // 0x250 NEW_2
	if(var_113_bool == 0) goto Label_598; // 0x252 JumpB
	lshStopAnimation(); // 0x253 Func
	goto Label_600; // 0x255 Jump
	
Label_600:
	return 0; // 0x258 Return
	
Label_598:
	StopAnimation(); // 0x256 Func
	
Label_602:
	return 0; // 0x25a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x333 PushI
	if(var_28_int == 0) goto Label_1127; // 0x334 JumpB
	func_2127(); // 0x336 NEW_2
	var_30_int = 19687; // 0x338 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x339 Eq
	if(var_31_bool == 0) goto Label_832; // 0x33a JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x33b PushV
	var_32_object = var_1_object; // 0x33c MovT
	var_33_object = var_0_object; // 0x33d MovT
	func_2227(); // 0x33e NEW_2
	
Label_832:
	var_79_int = 19689; // 0x340 PushI
	var_80_bool = var_27_cvector == var_79_int; // 0x341 Eq
	if(var_80_bool == 0) goto Label_840; // 0x342 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x343 PushV
	var_81_object = var_1_object; // 0x344 MovT
	var_82_object = var_0_object; // 0x345 MovT
	func_2227(); // 0x346 NEW_2
	
Label_840:
	var_83_int = 19693; // 0x348 PushI
	var_84_bool = var_27_cvector == var_83_int; // 0x349 Eq
	if(var_84_bool == 0) goto Label_848; // 0x34a JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x34b PushV
	var_85_object = var_1_object; // 0x34c MovT
	var_86_object = var_0_object; // 0x34d MovT
	func_2250(); // 0x34e NEW_2
	
Label_848:
	var_89_int = 19678; // 0x350 PushI
	var_90_bool = var_26_bool == var_89_int; // 0x351 Eq
	if(var_90_bool == 0) goto Label_925; // 0x352 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x353 PushV
	var_92_object = var_1_object; // 0x354 MovT
	func_2301(var_92_object); // 0x355 NEW_2
	if(var_91_bool == 0) goto Label_881; // 0x357 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x358 PushV
	var_99_object = var_1_object; // 0x359 MovT
	var_100_object = var_0_object; // 0x35a MovT
	func_2244(); // 0x35b NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x35d PushV
	var_103_object = var_1_object; // 0x35e MovT
	var_104_object = var_0_object; // 0x35f MovT
	func_2265(); // 0x360 NEW_2
	var_107_string = ""; // 0x362 PushV
	var_107_string = "Azart"; // 0x363 MovS
	func_796(var_27_cvector, var_107_string); // 0x364 NEW_2
	var_124_int = 518568; // 0x366 PushI
	SetMessage(var_124_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_125_int = 518572; // 0x36b PushI
	var_126_int = 20064; // 0x36c PushI
	var_127_int = 19682; // 0x36d PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x36e TObjFunc
	return 0; // 0x370 Return
	
Label_881:
	var_128_string = ""; // 0x371 PushV
	var_128_string = "Secret"; // 0x372 MovS
	func_796(var_27_cvector, var_128_string); // 0x373 NEW_2
	var_129_int = 518573; // 0x375 PushI
	SetMessage(var_129_int); // 0x376 TObjFunc
	ClearReplies(); // 0x378 TObjFunc
	var_130_bool = 0; var_131_object = Obj(); // 0x37a PushV
	var_131_object = var_1_object; // 0x37b MovT
	func_2313(var_131_object); // 0x37c NEW_2
	if(var_130_bool == 0) goto Label_900; // 0x37e JumpB
	var_136_int = 518574; // 0x37f PushI
	var_137_int = 19688; // 0x380 PushI
	var_138_int = 19684; // 0x381 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x382 TObjFunc
	
Label_900:
	var_139_bool = 0; // 0x384 PushV
	var_139_bool = 0; // 0x385 MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x386 PushV
	var_141_object = var_1_object; // 0x387 MovT
	func_2325(var_141_object); // 0x388 NEW_2
	if(var_140_bool == 0) goto Label_913; // 0x38a JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x38b PushV
	var_147_object = var_1_object; // 0x38c MovT
	func_2337(var_147_object); // 0x38d NEW_2
	if(var_146_bool == 0) goto Label_913; // 0x38f JumpB
	var_139_bool = 1; // 0x390 MovB
	
Label_913:
	if(var_139_bool == 0) goto Label_919; // 0x391 JumpB
	var_152_int = 518586; // 0x392 PushI
	var_153_int = 19694; // 0x393 PushI
	var_154_int = 19693; // 0x394 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x395 TObjFunc
	
Label_919:
	var_155_int = 518575; // 0x397 PushI
	var_156_int = -1; // 0x398 PushI
	var_157_int = 19685; // 0x399 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x39a TObjFunc
	return 0; // 0x39c Return
	
Label_925:
	var_158_int = 19694; // 0x39d PushI
	var_159_bool = var_26_bool == var_158_int; // 0x39e Eq
	if(var_159_bool == 0) goto Label_948; // 0x39f JumpB
	var_160_string = ""; // 0x3a0 PushV
	var_160_string = "Secret"; // 0x3a1 MovS
	func_796(var_27_cvector, var_160_string); // 0x3a2 NEW_2
	var_161_int = 518587; // 0x3a4 PushI
	SetMessage(var_161_int); // 0x3a5 TObjFunc
	ClearReplies(); // 0x3a7 TObjFunc
	var_162_int = 518588; // 0x3a9 PushI
	var_163_int = 20052; // 0x3aa PushI
	var_164_int = 19695; // 0x3ab PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x3ac TObjFunc
	var_165_int = 518942; // 0x3ae PushI
	var_166_int = 20054; // 0x3af PushI
	var_167_int = 20053; // 0x3b0 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x3b1 TObjFunc
	return 0; // 0x3b3 Return
	
Label_948:
	var_168_int = 20054; // 0x3b4 PushI
	var_169_bool = var_26_bool == var_168_int; // 0x3b5 Eq
	if(var_169_bool == 0) goto Label_971; // 0x3b6 JumpB
	var_170_string = ""; // 0x3b7 PushV
	var_170_string = "Serious"; // 0x3b8 MovS
	func_796(var_27_cvector, var_170_string); // 0x3b9 NEW_2
	var_171_int = 518943; // 0x3bb PushI
	SetMessage(var_171_int); // 0x3bc TObjFunc
	ClearReplies(); // 0x3be TObjFunc
	var_172_int = 518944; // 0x3c0 PushI
	var_173_int = 20057; // 0x3c1 PushI
	var_174_int = 20055; // 0x3c2 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x3c3 TObjFunc
	var_175_int = 518945; // 0x3c5 PushI
	var_176_int = -1; // 0x3c6 PushI
	var_177_int = 20056; // 0x3c7 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_178_int = 20057; // 0x3cb PushI
	var_179_bool = var_26_bool == var_178_int; // 0x3cc Eq
	if(var_179_bool == 0) goto Label_994; // 0x3cd JumpB
	var_180_string = ""; // 0x3ce PushV
	var_180_string = "Serious"; // 0x3cf MovS
	func_796(var_27_cvector, var_180_string); // 0x3d0 NEW_2
	var_181_int = 518946; // 0x3d2 PushI
	SetMessage(var_181_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_182_int = 518947; // 0x3d7 PushI
	var_183_int = -1; // 0x3d8 PushI
	var_184_int = 20058; // 0x3d9 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x3da TObjFunc
	var_185_int = 518948; // 0x3dc PushI
	var_186_int = -1; // 0x3dd PushI
	var_187_int = 20059; // 0x3de PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x3df TObjFunc
	return 0; // 0x3e1 Return
	
Label_994:
	var_188_int = 20052; // 0x3e2 PushI
	var_189_bool = var_26_bool == var_188_int; // 0x3e3 Eq
	if(var_189_bool == 0) goto Label_1012; // 0x3e4 JumpB
	var_190_string = ""; // 0x3e5 PushV
	var_190_string = "Secret"; // 0x3e6 MovS
	func_796(var_27_cvector, var_190_string); // 0x3e7 NEW_2
	var_191_int = 518941; // 0x3e9 PushI
	SetMessage(var_191_int); // 0x3ea TObjFunc
	ClearReplies(); // 0x3ec TObjFunc
	var_192_int = 518949; // 0x3ee PushI
	var_193_int = -1; // 0x3ef PushI
	var_194_int = 20060; // 0x3f0 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x3f1 TObjFunc
	return 0; // 0x3f3 Return
	
Label_1012:
	var_195_int = 19688; // 0x3f4 PushI
	var_196_bool = var_26_bool == var_195_int; // 0x3f5 Eq
	if(var_196_bool == 0) goto Label_1030; // 0x3f6 JumpB
	var_197_string = ""; // 0x3f7 PushV
	var_197_string = "Serious"; // 0x3f8 MovS
	func_796(var_27_cvector, var_197_string); // 0x3f9 NEW_2
	var_198_int = 518581; // 0x3fb PushI
	SetMessage(var_198_int); // 0x3fc TObjFunc
	ClearReplies(); // 0x3fe TObjFunc
	var_199_int = 518582; // 0x400 PushI
	var_200_int = -1; // 0x401 PushI
	var_201_int = 19689; // 0x402 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x403 TObjFunc
	return 0; // 0x405 Return
	
Label_1030:
	var_202_int = 20062; // 0x406 PushI
	var_203_bool = var_26_bool == var_202_int; // 0x407 Eq
	if(var_203_bool == 0) goto Label_1033; // 0x408 JumpB
	
Label_1033:
	var_204_int = 20064; // 0x409 PushI
	var_205_bool = var_26_bool == var_204_int; // 0x40a Eq
	if(var_205_bool == 0) goto Label_1051; // 0x40b JumpB
	var_206_string = ""; // 0x40c PushV
	var_206_string = "Secret"; // 0x40d MovS
	func_796(var_27_cvector, var_206_string); // 0x40e NEW_2
	var_207_int = 518953; // 0x410 PushI
	SetMessage(var_207_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_208_int = 518954; // 0x415 PushI
	var_209_int = 20066; // 0x416 PushI
	var_210_int = 20065; // 0x417 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_211_int = 20066; // 0x41b PushI
	var_212_bool = var_26_bool == var_211_int; // 0x41c Eq
	if(var_212_bool == 0) goto Label_1074; // 0x41d JumpB
	var_213_string = ""; // 0x41e PushV
	var_213_string = "Azart"; // 0x41f MovS
	func_796(var_27_cvector, var_213_string); // 0x420 NEW_2
	var_214_int = 518955; // 0x422 PushI
	SetMessage(var_214_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_215_int = 518956; // 0x427 PushI
	var_216_int = 20069; // 0x428 PushI
	var_217_int = 20067; // 0x429 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x42a TObjFunc
	var_218_int = 518957; // 0x42c PushI
	var_219_int = -1; // 0x42d PushI
	var_220_int = 20068; // 0x42e PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_221_int = 20069; // 0x432 PushI
	var_222_bool = var_26_bool == var_221_int; // 0x433 Eq
	if(var_222_bool == 0) goto Label_1097; // 0x434 JumpB
	var_223_string = ""; // 0x435 PushV
	var_223_string = "Secret"; // 0x436 MovS
	func_796(var_27_cvector, var_223_string); // 0x437 NEW_2
	var_224_int = 518958; // 0x439 PushI
	SetMessage(var_224_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_225_int = 518959; // 0x43e PushI
	var_226_int = 19686; // 0x43f PushI
	var_227_int = 20071; // 0x440 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x441 TObjFunc
	var_228_int = 518960; // 0x443 PushI
	var_229_int = -1; // 0x444 PushI
	var_230_int = 20072; // 0x445 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_231_int = 19686; // 0x449 PushI
	var_232_bool = var_26_bool == var_231_int; // 0x44a Eq
	if(var_232_bool == 0) goto Label_1115; // 0x44b JumpB
	var_233_string = ""; // 0x44c PushV
	var_233_string = "Secret"; // 0x44d MovS
	func_796(var_27_cvector, var_233_string); // 0x44e NEW_2
	var_234_int = 518579; // 0x450 PushI
	SetMessage(var_234_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_235_int = 518580; // 0x455 PushI
	var_236_int = -1; // 0x456 PushI
	var_237_int = 19687; // 0x457 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_3_string = 1; // 0x45b TMovB
	var_238_bool = 0; // 0x45c PushV
	func_2225(var_238_bool); // 0x45d NEW_2
	if(var_238_bool == 0) goto Label_1123; // 0x45f JumpB
	lshStopAnimation(); // 0x460 Func
	goto Label_1125; // 0x462 Jump
	
Label_1125:
	return 0; // 0x465 Return
	
Label_1123:
	StopAnimation(); // 0x463 Func
	
Label_1127:
	return 0; // 0x467 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x50a PushI
	if(var_28_int == 0) goto Label_1366; // 0x50b JumpB
	func_2127(); // 0x50d NEW_2
	var_30_int = 22020; // 0x50f PushI
	var_31_bool = var_26_bool == var_30_int; // 0x510 Eq
	if(var_31_bool == 0) goto Label_1318; // 0x511 JumpB
	var_32_string = ""; // 0x512 PushV
	var_32_string = "Neutral"; // 0x513 MovS
	func_1267(var_27_cvector, var_32_string); // 0x514 NEW_2
	var_49_int = 520803; // 0x516 PushI
	SetMessage(var_49_int); // 0x517 TObjFunc
	ClearReplies(); // 0x519 TObjFunc
	var_50_int = 520804; // 0x51b PushI
	var_51_int = 29221; // 0x51c PushI
	var_52_int = 22021; // 0x51d PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x51e TObjFunc
	var_53_int = 527876; // 0x520 PushI
	var_54_int = 29224; // 0x521 PushI
	var_55_int = 29223; // 0x522 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x523 TObjFunc
	return 0; // 0x525 Return
	
Label_1318:
	var_56_int = 29224; // 0x526 PushI
	var_57_bool = var_26_bool == var_56_int; // 0x527 Eq
	if(var_57_bool == 0) goto Label_1336; // 0x528 JumpB
	var_58_string = ""; // 0x529 PushV
	var_58_string = "Neutral"; // 0x52a MovS
	func_1267(var_27_cvector, var_58_string); // 0x52b NEW_2
	var_59_int = 527877; // 0x52d PushI
	SetMessage(var_59_int); // 0x52e TObjFunc
	ClearReplies(); // 0x530 TObjFunc
	var_60_int = 527878; // 0x532 PushI
	var_61_int = -1; // 0x533 PushI
	var_62_int = 29225; // 0x534 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x535 TObjFunc
	return 0; // 0x537 Return
	
Label_1336:
	var_63_int = 29221; // 0x538 PushI
	var_64_bool = var_26_bool == var_63_int; // 0x539 Eq
	if(var_64_bool == 0) goto Label_1354; // 0x53a JumpB
	var_65_string = ""; // 0x53b PushV
	var_65_string = "Neutral"; // 0x53c MovS
	func_1267(var_27_cvector, var_65_string); // 0x53d NEW_2
	var_66_int = 527874; // 0x53f PushI
	SetMessage(var_66_int); // 0x540 TObjFunc
	ClearReplies(); // 0x542 TObjFunc
	var_67_int = 527875; // 0x544 PushI
	var_68_int = -1; // 0x545 PushI
	var_69_int = 29222; // 0x546 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x547 TObjFunc
	return 0; // 0x549 Return
	
Label_1354:
	var_3_string = 1; // 0x54a TMovB
	var_70_bool = 0; // 0x54b PushV
	func_2225(var_70_bool); // 0x54c NEW_2
	if(var_70_bool == 0) goto Label_1362; // 0x54e JumpB
	lshStopAnimation(); // 0x54f Func
	goto Label_1364; // 0x551 Jump
	
Label_1364:
	return 0; // 0x554 Return
	
Label_1362:
	StopAnimation(); // 0x552 Func
	
Label_1366:
	return 0; // 0x556 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x5f9 PushI
	if(var_28_int == 0) goto Label_1569; // 0x5fa JumpB
	func_2127(); // 0x5fc NEW_2
	var_30_int = 42563; // 0x5fe PushI
	var_31_bool = var_26_int == var_30_int; // 0x5ff Eq
	if(var_31_bool == 0) goto Label_1557; // 0x600 JumpB
	var_32_string = ""; // 0x601 PushV
	var_32_string = "Neutral"; // 0x602 MovS
	func_1506(var_27_cvector, var_32_string); // 0x603 NEW_2
	var_49_int = 540554; // 0x605 PushI
	SetMessage(var_49_int); // 0x606 TObjFunc
	ClearReplies(); // 0x608 TObjFunc
	var_50_int = 540555; // 0x60a PushI
	var_51_int = -1; // 0x60b PushI
	var_52_int = 42564; // 0x60c PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x60d TObjFunc
	var_53_int = 540794; // 0x60f PushI
	var_54_int = -1; // 0x610 PushI
	var_55_int = 42843; // 0x611 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x612 TObjFunc
	return 0; // 0x614 Return
	
Label_1557:
	var_3_string = 1; // 0x615 TMovB
	var_56_bool = 0; // 0x616 PushV
	func_2225(var_56_bool); // 0x617 NEW_2
	if(var_56_bool == 0) goto Label_1565; // 0x619 JumpB
	lshStopAnimation(); // 0x61a Func
	goto Label_1567; // 0x61c Jump
	
Label_1567:
	return 0; // 0x61f Return
	
Label_1565:
	StopAnimation(); // 0x61d Func
	
Label_1569:
	return 0; // 0x621 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x66c PushI
	var_28_bool = var_26_int == var_27_int; // 0x66d Eq
	if(var_28_bool == 0) goto Label_1680; // 0x66e JumpB
	func_1639(); // 0x670 NEW_2
	var_30_bool = 0; // 0x672 PushV
	var_30_bool = 0; // 0x673 MovB
	var_31_bool = 0; // 0x674 PushV
	func_1853(var_31_bool); // 0x675 NEW_2
	if(var_31_bool == 0) goto Label_1661; // 0x677 JumpB
	var_34_bool = 0; // 0x678 PushV
	func_1608(var_34_bool); // 0x679 NEW_2
	if(var_34_bool == 0) goto Label_1661; // 0x67b JumpB
	var_30_bool = 1; // 0x67c MovB
	
Label_1661:
	if(var_30_bool == 0) goto Label_1674; // 0x67d JumpB
	var_51_bool = 0; // 0x67e PushV
	func_1588(var_51_bool); // 0x67f NEW_2
	if(var_51_bool == 0) goto Label_1673; // 0x681 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x682 PushV
	var_72_object = Obj(); // 0x683 PushV
	func_2134(var_72_object); // 0x684 NEW_2
	var_71_object = var_72_object; // 0x685 Mov
	func_2001(var_71_object); // 0x687 NEW_2
	
Label_1673:
	goto Label_1680; // 0x689 Jump
	
Label_1680:
	return 0; // 0x690 Return
	
Label_1674:
	func_1603(var_26_int); // 0x68b NEW_2
	func_1630(); // 0x68e NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1821(); // 0x692 NEW_2
	func_1639(); // 0x695 NEW_2
	lshStopSpeech(); // 0x697 Func
	lshStopAnimation(); // 0x699 Func
	StopAsync(); // 0x69b Func
	Hold(); // 0x69d Func
	return 0; // 0x69f Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x6a0 Func
	func_1639(); // 0x6a3 NEW_2
	var_27_string = ""; // 0x6a5 PushV
	var_27_string = "Neutral"; // 0x6a6 MovS
	func_2081(var_27_string); // 0x6a7 NEW_2
	func_1630(); // 0x6aa NEW_2
	return 0; // 0x6ac Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6ae Push
	if(var_27_bool == 0) goto Label_1716; // 0x6af JumpB
	func_1630(); // 0x6b1 NEW_2
	goto Label_1720; // 0x6b3 Jump
	
Label_1720:
	return 0; // 0x6b8 Return
	
Label_1716:
	var_33_string = ""; // 0x6b4 PushV
	var_33_string = "Neutral"; // 0x6b5 MovS
	func_2081(var_33_string); // 0x6b6 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x6b9 PushV
	IsOverrideActive(var_28_bool); // 0x6ba Func
	var_29_bool = var_28_bool == 0; // 0x6bc Not
	if(var_29_bool == 0) goto Label_1749; // 0x6bd JumpB
	EventDisable(0); // 0x6be EventDisable
	func_1821(); // 0x6c0 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x6c2 PushV
	var_31_object = var_26_object; // 0x6c3 Mov
	func_1844(var_31_object); // 0x6c4 NEW_2
	EventEnable(0); // 0x6c6 EventEnable
	var_44_object = Obj(); // 0x6c7 PushV
	var_44_object = var_26_object; // 0x6c8 Mov
	func_2463(var_44_object); // 0x6c9 NEW_2
	var_564_string = ""; // 0x6cb PushV
	var_564_string = "Neutral"; // 0x6cc MovS
	func_2081(var_564_string); // 0x6cd NEW_2
	func_1639(); // 0x6d0 NEW_2
	func_1630(); // 0x6d3 NEW_2
	
Label_1749:
	return 2; // 0x6d5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1574(var_25_cvector); // 0x623 NEW_2
	return 0; // 0x625 Return
}


func_0(var_0_object, var_379_int, var_380_object)
{
	var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; var_386_object = Obj(); var_387_bool = 0; var_388_int = 0; var_389_bool = 0; // 0x0 PushV
	var_0_object = var_380_object; // 0x1 TMov
	var_390_bool = 0; var_391_object = Obj(); var_392_float = 0; // 0x2 PushV
	var_391_object = var_380_object; // 0x3 Mov
	var_392_float = 70.0; // 0x4 MovF
	func_1858(var_391_object, var_392_float); // 0x5 NEW_2
	var_393_bool = var_390_bool == 0; // 0x7 Not
	if(var_393_bool == 0) goto Label_11; // 0x8 JumpB
	var_379_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_386_object); // 0xb Func
	var_394_int = 0; // 0xd PushV
	func_2219(var_394_int); // 0xe NEW_2
	SetNPCName(var_394_int); // 0x10 ObjFunc
	var_395_int = 0; // 0x12 PushV
	func_2217(var_395_int); // 0x13 NEW_2
	SetNPCDescription(var_395_int); // 0x15 ObjFunc
	var_396_string = ""; // 0x17 PushV
	func_2221(var_396_string); // 0x18 NEW_2
	SetPhoto(var_396_string); // 0x1a ObjFunc
	var_397_string = ""; // 0x1c PushV
	func_2223(var_397_string); // 0x1d NEW_2
	SetPhoto2(var_397_string); // 0x1f ObjFunc
	var_398_int = 0; // 0x21 PushV
	func_2429(var_398_int); // 0x22 NEW_2
	SetPlayerName(var_398_int); // 0x24 ObjFunc
	var_388_int = -1; // 0x26 MovI
	IsOverrideActive(var_387_bool); // 0x27 Func
	var_399_bool = var_387_bool; // 0x29 Push
	if(var_399_bool == 0) goto Label_45; // 0x2a JumpB
	var_379_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_386_object); // 0x2d Func
	var_400_bool = 0; var_401_object = Obj(); // 0x2f PushV
	var_402_object = Obj(); // 0x30 PushV
	func_2134(var_402_object); // 0x31 NEW_2
	var_401_object = var_402_object; // 0x32 Mov
	func_1943(var_400_bool, var_401_object); // 0x34 NEW_2
	var_403_object = Obj(); var_404_object = Obj(); // 0x36 PushV
	var_403_object = var_380_object; // 0x37 Mov
	var_404_object = var_386_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_405_object, var_406_object, var_407_string, var_408_bool, var_403_object, var_404_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_389_bool); // 0x3d ObjFunc
	
Label_63:
	var_439_bool = var_389_bool == 0; // 0x3f Not
	if(var_439_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_389_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_440_object = Obj(); // 0x46 PushV
	var_440_object = var_380_object; // 0x47 Mov
	func_1926(); // 0x48 NEW_2
	StopDialog(var_386_object); // 0x4a Func
	GetReturnValue(var_388_int); // 0x4c ObjFunc
	var_379_int = var_388_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2313(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x90a PushV
	var_350_string = "b4q02"; // 0x90b MovS
	func_2150(var_349_int, var_350_string); // 0x90c NEW_2
	var_351_int = 0; // 0x90e PushI
	var_352_bool = var_349_int == var_351_int; // 0x90f Eq
	if(var_352_bool == 0) goto Label_2323; // 0x910 JumpB
	var_347_bool = 1; // 0x911 MovB
	return 0; // 0x912 Return
	
Label_2323:
	var_347_bool = 0; // 0x913 MovB
	return 0; // 0x914 Return
}


func_2325(var_357_bool)
{
	var_359_int = 0; var_360_string = ""; // 0x916 PushV
	var_360_string = "oob4Spi4ka2"; // 0x917 MovS
	func_2150(var_359_int, var_360_string); // 0x918 NEW_2
	var_361_int = 0; // 0x91a PushI
	var_362_bool = var_359_int == var_361_int; // 0x91b Eq
	if(var_362_bool == 0) goto Label_2335; // 0x91c JumpB
	var_357_bool = 1; // 0x91d MovB
	return 0; // 0x91e Return
	
Label_2335:
	var_357_bool = 0; // 0x91f MovB
	return 0; // 0x920 Return
}


func_280(var_0_object, var_443_int, var_444_object)
{
	var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; var_449_bool = 0; var_450_object = Obj(); var_451_bool = 0; var_452_int = 0; var_453_bool = 0; // 0x118 PushV
	var_0_object = var_444_object; // 0x119 TMov
	var_454_bool = 0; var_455_object = Obj(); var_456_float = 0; // 0x11a PushV
	var_455_object = var_444_object; // 0x11b Mov
	var_456_float = 70.0; // 0x11c MovF
	func_1858(var_455_object, var_456_float); // 0x11d NEW_2
	var_457_bool = var_454_bool == 0; // 0x11f Not
	if(var_457_bool == 0) goto Label_291; // 0x120 JumpB
	var_443_int = -2; // 0x121 MovI
	return 8; // 0x122 Return
	
Label_291:
	CreateDialog(var_450_object); // 0x123 Func
	var_458_int = 0; // 0x125 PushV
	func_2219(var_458_int); // 0x126 NEW_2
	SetNPCName(var_458_int); // 0x128 ObjFunc
	var_459_int = 0; // 0x12a PushV
	func_2217(var_459_int); // 0x12b NEW_2
	SetNPCDescription(var_459_int); // 0x12d ObjFunc
	var_460_string = ""; // 0x12f PushV
	func_2221(var_460_string); // 0x130 NEW_2
	SetPhoto(var_460_string); // 0x132 ObjFunc
	var_461_string = ""; // 0x134 PushV
	func_2223(var_461_string); // 0x135 NEW_2
	SetPhoto2(var_461_string); // 0x137 ObjFunc
	var_462_int = 0; // 0x139 PushV
	func_2429(var_462_int); // 0x13a NEW_2
	SetPlayerName(var_462_int); // 0x13c ObjFunc
	var_452_int = -1; // 0x13e MovI
	IsOverrideActive(var_451_bool); // 0x13f Func
	var_463_bool = var_451_bool; // 0x141 Push
	if(var_463_bool == 0) goto Label_325; // 0x142 JumpB
	var_443_int = -2; // 0x143 MovI
	return 8; // 0x144 Return
	
Label_325:
	DoDialog(var_450_object); // 0x145 Func
	var_464_bool = 0; var_465_object = Obj(); // 0x147 PushV
	var_466_object = Obj(); // 0x148 PushV
	func_2134(var_466_object); // 0x149 NEW_2
	var_465_object = var_466_object; // 0x14a Mov
	func_1943(var_464_bool, var_465_object); // 0x14c NEW_2
	var_467_object = Obj(); var_468_object = Obj(); // 0x14e PushV
	var_467_object = var_444_object; // 0x14f Mov
	var_468_object = var_450_object; // 0x150 Mov
	TaskCall(3); // 0x151 TaskCall
	func_361(var_469_object, var_470_object, var_471_string, var_472_bool, var_467_object, var_468_object); // 0x152 NEW_2
	TaskReturn(); // 0x153 TaskReturn
	IsDialogEnd(var_453_bool); // 0x155 ObjFunc
	
Label_343:
	var_506_bool = var_453_bool == 0; // 0x157 Not
	if(var_506_bool == 0) goto Label_350; // 0x158 JumpB
	sync(); // 0x159 Func
	IsDialogEnd(var_453_bool); // 0x15b ObjFunc
	goto Label_343; // 0x15d Jump
	
Label_350:
	var_507_object = Obj(); // 0x15e PushV
	var_507_object = var_444_object; // 0x15f Mov
	func_1926(); // 0x160 NEW_2
	StopDialog(var_450_object); // 0x162 Func
	GetReturnValue(var_452_int); // 0x164 ObjFunc
	var_443_int = var_452_int; // 0x166 Mov
	return 8; // 0x167 Return
}


func_1819(var_64_bool)
{
	var_64_bool = 1; // 0x71b MovB
	return 0; // 0x71c Return
}


func_796(var_2_object, var_325_string)
{
	var_326_bool = 0; // 0x31d PushV
	func_2225(var_326_bool); // 0x31e NEW_2
	var_327_bool = var_326_bool == 0; // 0x320 Not
	if(var_327_bool == 0) goto Label_803; // 0x321 JumpB
	return 0; // 0x322 Return
	
Label_803:
	var_328_bool = var_325_string == var_2_object; // 0x323 Eq
	if(var_328_bool == 0) goto Label_806; // 0x324 JumpB
	return 0; // 0x325 Return
	
Label_806:
	var_329_string = ""; var_330_bool = 0; // 0x326 PushV
	var_329_string = var_325_string; // 0x327 Mov
	var_331_string = ""; // 0x328 PushS
	var_332_bool = var_325_string == var_331_string; // 0x329 Eq
	if(var_332_bool == 0) goto Label_813; // 0x32a JumpB
	var_330_bool = 0; // 0x32b MovB
	goto Label_814; // 0x32c Jump
	
Label_814:
	func_2097(var_329_string, var_330_bool); // 0x32e NEW_2
	var_2_object = var_325_string; // 0x330 TMov
	return 0; // 0x331 Return
	
Label_813:
	var_330_bool = 1; // 0x32d MovB
}


func_1821()
{
	StopAnimation(); // 0x71d Func
	StopGroup0(); // 0x71f Func
	return 0; // 0x721 Return
}


func_2081(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0; // 0x821 PushV
	lshHasAnimation(var_253_bool, var_249_string); // 0x822 Func
	var_256_bool = var_253_bool; // 0x824 Push
	if(var_256_bool == 0) goto Label_2092; // 0x825 JumpB
	lshGetAnimTimes(var_249_string, var_254_float, var_255_float); // 0x826 Func
	var_257_bool = 0; // 0x828 PushB
	lshPlayAnimation(var_254_float, var_255_float, var_257_bool); // 0x829 Func
	goto Label_2096; // 0x82b Jump
	
Label_2096:
	return 6; // 0x830 Return
	
Label_2092:
	var_258_string = "Can't find lsh animation : "; // 0x82c PushS
	var_259_int = var_258_string + var_249_string; // 0x82d Add
	Trace(var_259_int); // 0x82e Func
}


func_2337(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x922 PushV
	var_366_string = "b4q02"; // 0x923 MovS
	func_2150(var_365_int, var_366_string); // 0x924 NEW_2
	var_367_int = 1000; // 0x926 PushI
	var_368_bool = var_365_int == var_367_int; // 0x927 Eq
	if(var_368_bool == 0) goto Label_2347; // 0x928 JumpB
	var_363_bool = 1; // 0x929 MovB
	return 0; // 0x92a Return
	
Label_2347:
	var_363_bool = 0; // 0x92b MovB
	return 0; // 0x92c Return
}


func_1826(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x722 PushV
	GetPosition(var_46_cvector); // 0x723 Func
	GetPosition(var_47_cvector); // 0x725 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x727 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x728 Or2
	return 6; // 0x729 Return
}


func_1574(var_0_object)
{
	var_26_bool = 0; // 0x626 PushV
	func_1853(var_26_bool); // 0x627 NEW_2
	var_29_bool = var_26_bool == 0; // 0x629 Not
	if(var_29_bool == 0) goto Label_1581; // 0x62a JumpB
	Hold(); // 0x62b Func
	
Label_1581:
	GetDirection(var_0_object); // 0x62d Func
	
Label_1583:
	func_1750(); // 0x630 NEW_2
	goto Label_1583; // 0x632 Jump
}


func_1834(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x72a PushV
	GetPosition(var_39_cvector); // 0x72b Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x72d Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x72e PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x72f PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x730 Func
	var_34_bool = var_41_bool; // 0x732 Mov
	return 6; // 0x733 Return
}


func_2349()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x92d PushV
	var_38_int = 557; // 0x92e PushI
	var_39_int = 2; // 0x92f PushI
	var_40_int = 530536; // 0x930 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x931 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x933 PushV
	var_42_object = var_37_object; // 0x934 Mov
	var_43_int = 548; // 0x935 MovI
	func_2401(var_41_bool, var_42_object, var_43_int); // 0x936 NEW_2
	return 2; // 0x938 Return
}


func_2097(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x831 PushV
	lshHasAnimation(var_234_bool, var_227_string); // 0x832 Func
	var_237_bool = var_234_bool; // 0x834 Push
	if(var_237_bool == 0) goto Label_2107; // 0x835 JumpB
	lshGetAnimTimes(var_227_string, var_235_float, var_236_float); // 0x836 Func
	lshPlayAnimation(var_235_float, var_236_float, var_228_bool); // 0x838 Func
	goto Label_2111; // 0x83a Jump
	
Label_2111:
	return 6; // 0x83f Return
	
Label_2107:
	var_238_string = "Can't find lsh animation : "; // 0x83b PushS
	var_239_int = var_238_string + var_227_string; // 0x83c Add
	Trace(var_239_int); // 0x83d Func
}


func_1844(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x734 PushV
	GetPosition(var_33_cvector); // 0x735 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x737 PushV
	var_35_cvector = var_33_cvector; // 0x738 Mov
	func_1834(var_34_bool, var_35_cvector); // 0x739 NEW_2
	var_30_bool = var_34_bool; // 0x73a Mov
	return 2; // 0x73c Return
}


func_1588(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x634 PushV
	var_54_string = "player"; // 0x635 PushS
	FindActor(var_53_object, var_54_string); // 0x636 Func
	var_55_bool = var_53_object == 0; // 0x638 Not
	if(var_55_bool == 0) goto Label_1596; // 0x639 JumpB
	var_51_bool = 0; // 0x63a MovB
	return 2; // 0x63b Return
	
Label_1596:
	var_56_bool = 0; var_57_object = Obj(); // 0x63c PushV
	var_57_object = var_53_object; // 0x63d Mov
	func_1844(var_57_object); // 0x63e NEW_2
	var_51_bool = var_56_bool; // 0x63f Mov
	return 2; // 0x641 Return
}


func_2362()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x93a PushV
	var_36_int = 213; // 0x93b PushI
	var_37_int = 2; // 0x93c PushI
	var_38_int = 518576; // 0x93d PushI
	CreateDiaryEntry(var_35_object, var_36_int, var_37_int, var_38_int); // 0x93e Func
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0; // 0x940 PushV
	var_40_object = var_35_object; // 0x941 Mov
	var_41_int = -1; // 0x942 MovI
	func_2401(var_39_bool, var_40_object, var_41_int); // 0x943 NEW_2
	return 2; // 0x945 Return
}


func_1853(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x73d PushV
	IsLoaded(var_28_bool); // 0x73e Func
	var_26_bool = var_28_bool; // 0x740 Mov
	return 2; // 0x741 Return
}


func_2112(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0; // 0x840 PushV
	var_159_bool = 0; // 0x841 PushV
	func_2225(var_159_bool); // 0x842 NEW_2
	if(var_159_bool == 0) goto Label_2125; // 0x844 JumpB
	lshHasSpeech(var_158_bool, var_156_string); // 0x845 Func
	var_160_bool = var_158_bool; // 0x847 Push
	if(var_160_bool == 0) goto Label_2125; // 0x848 JumpB
	lshPlaySpeech(var_156_string); // 0x849 Func
	var_155_bool = 1; // 0x84b MovB
	return 2; // 0x84c Return
	
Label_2125:
	var_155_bool = 0; // 0x84d MovB
	return 2; // 0x84e Return
}


func_1858(var_61_bool, var_63_float)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; // 0x742 PushV
	GetPosition(var_74_cvector); // 0x743 ObjFunc
	GetEyesHeight(var_73_float); // 0x745 ObjFunc
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x747 PushE
	var_82_float = var_82_float + var_73_float; // 0x748 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x749 PopE
	GetPosition(var_75_cvector); // 0x74a Func
	GetEyesHeight(var_73_float); // 0x74c Func
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x74e PushE
	var_83_float = var_83_float + var_73_float; // 0x74f Add2
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x750 PopE
	var_76_cvector = var_74_cvector - var_75_cvector; // 0x751 Sub2
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x752 PushE
	var_84_float = 0; // 0x753 MovI
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x754 PopE
	var_85_int = var_76_cvector | var_76_cvector; // 0x755 Or
	var_86_float = sqrt(var_85_int); // 0x756 Sqrt
	var_76_cvector = var_76_cvector / var_76_cvector; // 0x757 Div2
	var_77_cvector = -var_76_cvector; // 0x758 Neg2
	var_87_float = var_76_cvector * var_63_float; // 0x759 Mult
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x75a PushV
	var_90_cvector = CVector(0.0, 1.0, 0.0); // 0x75b PushVec
	var_89_cvector = var_77_cvector ^ var_90_cvector; // 0x75c Xor2
	func_2140(var_88_cvector, var_89_cvector); // 0x75d NEW_2
	var_96_int = 25; // 0x75f PushI
	var_97_float = var_88_cvector * var_96_int; // 0x760 Mult
	var_98_int = var_87_float + var_97_float; // 0x761 Add
	var_99_cvector = CVector(0.0, 10.0, 0.0); // 0x762 PushVec
	var_78_cvector = var_98_int - var_99_cvector; // 0x763 Sub2
	var_79_cvector = var_75_cvector + var_78_cvector; // 0x764 Add2
	IsOverrideActive(var_80_bool); // 0x765 Func
	var_100_bool = var_80_bool; // 0x767 Push
	if(var_100_bool == 0) goto Label_1899; // 0x768 JumpB
	var_61_bool = 0; // 0x769 MovB
	return 18; // 0x76a Return
	
Label_1899:
	StopWorld(); // 0x76b Func
	CameraTransit(var_79_cvector, var_77_cvector); // 0x76d Func
	var_101_float = GetByIndex(var_78_cvector, 0); // 0x76f PushE
	var_102_float = GetByIndex(var_78_cvector, 2); // 0x770 PushE
	Rotate(var_101_float, var_102_float); // 0x771 Func
	var_103_bool = 0; // 0x773 PushV
	func_2225(var_103_bool); // 0x774 NEW_2
	if(var_103_bool == 0) goto Label_1912; // 0x776 JumpB
	goto Label_1920; // 0x777 Jump
	
Label_1920:
	CameraWaitForPlayFinish(); // 0x780 Func
	ResumeWorld(); // 0x782 Func
	var_61_bool = 1; // 0x784 MovB
	return 18; // 0x785 Return
	
Label_1912:
	var_104_string = "head"; // 0x778 PushS
	HasAnimationTrack(var_81_bool, var_104_string); // 0x779 Func
	var_105_bool = var_81_bool; // 0x77b Push
	if(var_105_bool == 0) goto Label_1920; // 0x77c JumpB
	var_106_string = "head"; // 0x77d PushS
	LookAsyncCamera(var_106_string); // 0x77e Func
}


func_1603(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x643 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x644 PushE
	RotateAsync(var_103_float, var_104_float); // 0x645 Func
	return 0; // 0x647 Return
}


func_2375()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x947 PushV
	var_59_int = 214; // 0x948 PushI
	var_60_int = 2; // 0x949 PushI
	var_61_int = 518577; // 0x94a PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x94b Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x94d PushV
	var_63_object = var_58_object; // 0x94e Mov
	var_64_int = 213; // 0x94f MovI
	func_2401(var_62_bool, var_63_object, var_64_int); // 0x950 NEW_2
	return 2; // 0x952 Return
}


func_1608(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x648 PushV
	var_39_string = "player"; // 0x649 PushS
	FindActor(var_37_object, var_39_string); // 0x64a Func
	var_40_bool = var_37_object == 0; // 0x64c Not
	if(var_40_bool == 0) goto Label_1616; // 0x64d JumpB
	var_34_bool = 0; // 0x64e MovB
	return 4; // 0x64f Return
	
Label_1616:
	var_41_float = 0; var_42_object = Obj(); // 0x650 PushV
	var_42_object = var_37_object; // 0x651 Mov
	func_1826(var_42_object); // 0x652 NEW_2
	var_49_float = 90000.0; // 0x654 PushF
	var_50_bool = var_41_float > var_49_float; // 0x655 GT
	if(var_50_bool == 0) goto Label_1625; // 0x656 JumpB
	var_34_bool = 0; // 0x657 MovB
	return 4; // 0x658 Return
	
Label_1625:
	CanSee(var_38_bool, var_37_object); // 0x659 Func
	var_34_bool = var_38_bool; // 0x65b Mov
	return 4; // 0x65c Return
}


func_2127()
{
	var_29_bool = 0; // 0x84f PushV
	func_2225(var_29_bool); // 0x850 NEW_2
	if(var_29_bool == 0) goto Label_2133; // 0x852 JumpB
	lshStopSpeech(); // 0x853 Func
	
Label_2133:
	return 0; // 0x855 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_403_object, var_404_object)
{
	var_0_object = var_404_object; // 0x52 TMov
	var_1_object = var_403_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_409_int = 1; // 0x55 PushI
	if(var_409_int == 0) goto Label_114; // 0x56 JumpB
	var_410_string = ""; // 0x57 PushV
	var_410_string = "Serious"; // 0x58 MovS
	func_144(var_404_object, var_410_string); // 0x59 NEW_2
	var_418_int = 530479; // 0x5b PushI
	SetMessage(var_418_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_419_bool = 0; var_420_object = Obj(); // 0x60 PushV
	var_420_object = var_1_object; // 0x61 MovT
	func_2277(var_420_object); // 0x62 NEW_2
	if(var_419_bool == 0) goto Label_106; // 0x64 JumpB
	var_425_int = 530480; // 0x65 PushI
	var_426_int = 32848; // 0x66 PushI
	var_427_int = 31846; // 0x67 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x68 TObjFunc
	
Label_106:
	var_428_int = 530481; // 0x6a PushI
	var_429_int = -1; // 0x6b PushI
	var_430_int = 31847; // 0x6c PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_431_bool = 0; // 0x72 PushV
	func_2225(var_431_bool); // 0x73 NEW_2
	if(var_431_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_432_string = var_3_string; // 0x78 PushT
	if(var_432_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_433_string = ""; // 0x7b PushV
	var_433_string = var_2_object; // 0x7c MovT
	func_2081(var_433_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_434_string = "all"; // 0x81 PushS
	var_435_string = "idle"; // 0x82 PushS
	PlayAnimation(var_434_string, var_435_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_436_string = var_3_string; // 0x87 PushT
	if(var_436_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_437_string = "all"; // 0x8a PushS
	var_438_string = "idle"; // 0x8b PushS
	PlayAnimation(var_437_string, var_438_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_2388(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x954 PushV
	GetDiaryRoot(var_50_object); // 0x955 Func
	var_51_bool = var_50_object == 0; // 0x957 Not
	if(var_51_bool == 0) goto Label_2398; // 0x958 JumpB
	var_52_string = "Can't retrieve diary root"; // 0x959 PushS
	Trace(var_52_string); // 0x95a Func
	var_48_object = 0; // 0x95c MovB
	return 2; // 0x95d Return
	
Label_2398:
	var_48_object = var_50_object; // 0x95e Mov
	return 2; // 0x95f Return
}


func_2134(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x856 PushV
	self(var_125_object); // 0x857 Func
	var_123_object = var_125_object; // 0x859 Mov
	return 2; // 0x85a Return
}


func_1367(var_0_object, var_508_int, var_509_object)
{
	var_511_object = Obj(); var_512_bool = 0; var_513_int = 0; var_514_bool = 0; var_515_object = Obj(); var_516_bool = 0; var_517_int = 0; var_518_bool = 0; // 0x557 PushV
	var_0_object = var_509_object; // 0x558 TMov
	var_519_bool = 0; var_520_object = Obj(); var_521_float = 0; // 0x559 PushV
	var_520_object = var_509_object; // 0x55a Mov
	var_521_float = 70.0; // 0x55b MovF
	func_1858(var_520_object, var_521_float); // 0x55c NEW_2
	var_522_bool = var_519_bool == 0; // 0x55e Not
	if(var_522_bool == 0) goto Label_1378; // 0x55f JumpB
	var_508_int = -2; // 0x560 MovI
	return 8; // 0x561 Return
	
Label_1378:
	CreateDialog(var_515_object); // 0x562 Func
	var_523_int = 0; // 0x564 PushV
	func_2219(var_523_int); // 0x565 NEW_2
	SetNPCName(var_523_int); // 0x567 ObjFunc
	var_524_int = 0; // 0x569 PushV
	func_2217(var_524_int); // 0x56a NEW_2
	SetNPCDescription(var_524_int); // 0x56c ObjFunc
	var_525_string = ""; // 0x56e PushV
	func_2221(var_525_string); // 0x56f NEW_2
	SetPhoto(var_525_string); // 0x571 ObjFunc
	var_526_string = ""; // 0x573 PushV
	func_2223(var_526_string); // 0x574 NEW_2
	SetPhoto2(var_526_string); // 0x576 ObjFunc
	var_527_int = 0; // 0x578 PushV
	func_2429(var_527_int); // 0x579 NEW_2
	SetPlayerName(var_527_int); // 0x57b ObjFunc
	var_517_int = -1; // 0x57d MovI
	IsOverrideActive(var_516_bool); // 0x57e Func
	var_528_bool = var_516_bool; // 0x580 Push
	if(var_528_bool == 0) goto Label_1412; // 0x581 JumpB
	var_508_int = -2; // 0x582 MovI
	return 8; // 0x583 Return
	
Label_1412:
	DoDialog(var_515_object); // 0x584 Func
	var_529_bool = 0; var_530_object = Obj(); // 0x586 PushV
	var_531_object = Obj(); // 0x587 PushV
	func_2134(var_531_object); // 0x588 NEW_2
	var_530_object = var_531_object; // 0x589 Mov
	func_1943(var_529_bool, var_530_object); // 0x58b NEW_2
	var_532_object = Obj(); var_533_object = Obj(); // 0x58d PushV
	var_532_object = var_509_object; // 0x58e Mov
	var_533_object = var_515_object; // 0x58f Mov
	TaskCall(9); // 0x590 TaskCall
	func_1448(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object); // 0x591 NEW_2
	TaskReturn(); // 0x592 TaskReturn
	IsDialogEnd(var_518_bool); // 0x594 ObjFunc
	
Label_1430:
	var_562_bool = var_518_bool == 0; // 0x596 Not
	if(var_562_bool == 0) goto Label_1437; // 0x597 JumpB
	sync(); // 0x598 Func
	IsDialogEnd(var_518_bool); // 0x59a ObjFunc
	goto Label_1430; // 0x59c Jump
	
Label_1437:
	var_563_object = Obj(); // 0x59d PushV
	var_563_object = var_509_object; // 0x59e Mov
	func_1926(); // 0x59f NEW_2
	StopDialog(var_515_object); // 0x5a1 Func
	GetReturnValue(var_517_int); // 0x5a3 ObjFunc
	var_508_int = var_517_int; // 0x5a5 Mov
	return 8; // 0x5a6 Return
}


func_603(var_0_object, var_278_int, var_279_object)
{
	var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0; var_285_object = Obj(); var_286_bool = 0; var_287_int = 0; var_288_bool = 0; // 0x25b PushV
	var_0_object = var_279_object; // 0x25c TMov
	var_289_bool = 0; var_290_object = Obj(); var_291_float = 0; // 0x25d PushV
	var_290_object = var_279_object; // 0x25e Mov
	var_291_float = 70.0; // 0x25f MovF
	func_1858(var_290_object, var_291_float); // 0x260 NEW_2
	var_292_bool = var_289_bool == 0; // 0x262 Not
	if(var_292_bool == 0) goto Label_614; // 0x263 JumpB
	var_278_int = -2; // 0x264 MovI
	return 8; // 0x265 Return
	
Label_614:
	CreateDialog(var_285_object); // 0x266 Func
	var_293_int = 0; // 0x268 PushV
	func_2219(var_293_int); // 0x269 NEW_2
	SetNPCName(var_293_int); // 0x26b ObjFunc
	var_294_int = 0; // 0x26d PushV
	func_2217(var_294_int); // 0x26e NEW_2
	SetNPCDescription(var_294_int); // 0x270 ObjFunc
	var_295_string = ""; // 0x272 PushV
	func_2221(var_295_string); // 0x273 NEW_2
	SetPhoto(var_295_string); // 0x275 ObjFunc
	var_296_string = ""; // 0x277 PushV
	func_2223(var_296_string); // 0x278 NEW_2
	SetPhoto2(var_296_string); // 0x27a ObjFunc
	var_297_int = 0; // 0x27c PushV
	func_2429(var_297_int); // 0x27d NEW_2
	SetPlayerName(var_297_int); // 0x27f ObjFunc
	var_287_int = -1; // 0x281 MovI
	IsOverrideActive(var_286_bool); // 0x282 Func
	var_298_bool = var_286_bool; // 0x284 Push
	if(var_298_bool == 0) goto Label_648; // 0x285 JumpB
	var_278_int = -2; // 0x286 MovI
	return 8; // 0x287 Return
	
Label_648:
	DoDialog(var_285_object); // 0x288 Func
	var_299_bool = 0; var_300_object = Obj(); // 0x28a PushV
	var_301_object = Obj(); // 0x28b PushV
	func_2134(var_301_object); // 0x28c NEW_2
	var_300_object = var_301_object; // 0x28d Mov
	func_1943(var_299_bool, var_300_object); // 0x28f NEW_2
	var_302_object = Obj(); var_303_object = Obj(); // 0x291 PushV
	var_302_object = var_279_object; // 0x292 Mov
	var_303_object = var_285_object; // 0x293 Mov
	TaskCall(5); // 0x294 TaskCall
	func_684(var_304_object, var_305_object, var_306_string, var_307_bool, var_302_object, var_303_object); // 0x295 NEW_2
	TaskReturn(); // 0x296 TaskReturn
	IsDialogEnd(var_288_bool); // 0x298 ObjFunc
	
Label_666:
	var_375_bool = var_288_bool == 0; // 0x29a Not
	if(var_375_bool == 0) goto Label_673; // 0x29b JumpB
	sync(); // 0x29c Func
	IsDialogEnd(var_288_bool); // 0x29e ObjFunc
	goto Label_666; // 0x2a0 Jump
	
Label_673:
	var_376_object = Obj(); // 0x2a1 PushV
	var_376_object = var_279_object; // 0x2a2 Mov
	func_1926(); // 0x2a3 NEW_2
	StopDialog(var_285_object); // 0x2a5 Func
	GetReturnValue(var_287_int); // 0x2a7 ObjFunc
	var_278_int = var_287_int; // 0x2a9 Mov
	return 8; // 0x2aa Return
}


func_2140(var_88_cvector, var_89_cvector)
{
	var_91_float = 0; var_92_float = 0; // 0x85c PushV
	var_93_int = var_89_cvector | var_89_cvector; // 0x85d Or
	var_92_float = sqrt(var_93_int); // 0x85e Sqrt2
	var_94_float = 0.0; // 0x85f PushF
	var_95_bool = var_92_float < var_94_float; // 0x860 LT
	if(var_95_bool == 0) goto Label_2148; // 0x861 JumpB
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x862 MovV
	return 2; // 0x863 Return
	
Label_2148:
	var_88_cvector = var_89_cvector / var_89_cvector; // 0x864 Div2
	return 2; // 0x865 Return
}


func_1630()
{
	var_566_float = 0; var_567_float = 0; // 0x65e PushV
	var_568_int = 8; // 0x65f PushI
	var_569_int = 16; // 0x660 PushI
	rand(var_567_float, var_568_int, var_569_int); // 0x661 Func
	var_570_int = 10; // 0x663 PushI
	SetTimer(var_570_int, var_567_float); // 0x664 Func
	return 2; // 0x666 Return
}


func_2401(var_39_bool, var_40_object, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; // 0x961 PushV
	var_48_object = Obj(); // 0x962 PushV
	func_2388(var_48_object); // 0x963 NEW_2
	var_45_object = var_48_object; // 0x964 Mov
	Find(var_41_int, var_46_object); // 0x966 ObjFunc
	var_53_bool = var_46_object == 0; // 0x968 Not
	if(var_53_bool == 0) goto Label_2416; // 0x969 JumpB
	var_54_string = "Can't find diary parent with id: "; // 0x96a PushS
	var_55_int = var_54_string + var_41_int; // 0x96b Add
	Trace(var_55_int); // 0x96c Func
	var_39_bool = 0; // 0x96e MovB
	return 6; // 0x96f Return
	
Label_2416:
	AddChild(var_40_object); // 0x970 ObjFunc
	var_56_int = 7; // 0x972 PushI
	SendWorldWndMessage(var_56_int); // 0x973 Func
	GetCategory(var_47_int); // 0x975 ObjFunc
	SetDiarySection(var_47_int); // 0x977 Func
	var_39_bool = 0; // 0x979 MovB
	return 6; // 0x97a Return
}


func_2150(var_311_int, var_312_string)
{
	var_313_int = 0; var_314_int = 0; // 0x866 PushV
	GetVariable(var_312_string, var_314_int); // 0x867 Func
	var_311_int = var_314_int; // 0x869 Mov
	return 2; // 0x86a Return
}


func_1639()
{
	var_565_int = 10; // 0x667 PushI
	KillTimer(var_565_int); // 0x668 Func
	return 0; // 0x66a Return
}


func_1128(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x468 PushV
	var_0_object = var_51_object; // 0x469 TMov
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0; // 0x46a PushV
	var_62_object = var_51_object; // 0x46b Mov
	var_63_float = 70.0; // 0x46c MovF
	func_1858(var_62_object, var_63_float); // 0x46d NEW_2
	var_107_bool = var_61_bool == 0; // 0x46f Not
	if(var_107_bool == 0) goto Label_1139; // 0x470 JumpB
	var_50_int = -2; // 0x471 MovI
	return 8; // 0x472 Return
	
Label_1139:
	CreateDialog(var_57_object); // 0x473 Func
	var_108_int = 0; // 0x475 PushV
	func_2219(var_108_int); // 0x476 NEW_2
	SetNPCName(var_108_int); // 0x478 ObjFunc
	var_109_int = 0; // 0x47a PushV
	func_2217(var_109_int); // 0x47b NEW_2
	SetNPCDescription(var_109_int); // 0x47d ObjFunc
	var_110_string = ""; // 0x47f PushV
	func_2221(var_110_string); // 0x480 NEW_2
	SetPhoto(var_110_string); // 0x482 ObjFunc
	var_111_string = ""; // 0x484 PushV
	func_2223(var_111_string); // 0x485 NEW_2
	SetPhoto2(var_111_string); // 0x487 ObjFunc
	var_112_int = 0; // 0x489 PushV
	func_2429(var_112_int); // 0x48a NEW_2
	SetPlayerName(var_112_int); // 0x48c ObjFunc
	var_59_int = -1; // 0x48e MovI
	IsOverrideActive(var_58_bool); // 0x48f Func
	var_120_bool = var_58_bool; // 0x491 Push
	if(var_120_bool == 0) goto Label_1173; // 0x492 JumpB
	var_50_int = -2; // 0x493 MovI
	return 8; // 0x494 Return
	
Label_1173:
	DoDialog(var_57_object); // 0x495 Func
	var_121_bool = 0; var_122_object = Obj(); // 0x497 PushV
	var_123_object = Obj(); // 0x498 PushV
	func_2134(var_123_object); // 0x499 NEW_2
	var_122_object = var_123_object; // 0x49a Mov
	func_1943(var_121_bool, var_122_object); // 0x49c NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x49e PushV
	var_216_object = var_51_object; // 0x49f Mov
	var_217_object = var_57_object; // 0x4a0 Mov
	TaskCall(7); // 0x4a1 TaskCall
	func_1209(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object); // 0x4a2 NEW_2
	TaskReturn(); // 0x4a3 TaskReturn
	IsDialogEnd(var_60_bool); // 0x4a5 ObjFunc
	
Label_1191:
	var_265_bool = var_60_bool == 0; // 0x4a7 Not
	if(var_265_bool == 0) goto Label_1198; // 0x4a8 JumpB
	sync(); // 0x4a9 Func
	IsDialogEnd(var_60_bool); // 0x4ab ObjFunc
	goto Label_1191; // 0x4ad Jump
	
Label_1198:
	var_266_object = Obj(); // 0x4ae PushV
	var_266_object = var_51_object; // 0x4af Mov
	func_1926(); // 0x4b0 NEW_2
	StopDialog(var_57_object); // 0x4b2 Func
	GetReturnValue(var_59_int); // 0x4b4 ObjFunc
	var_50_int = var_59_int; // 0x4b6 Mov
	return 8; // 0x4b7 Return
}


func_361(var_0_object, var_1_object, var_2_object, var_3_string, var_467_object, var_468_object)
{
	var_0_object = var_468_object; // 0x16a TMov
	var_1_object = var_467_object; // 0x16b TMov
	var_3_string = 0; // 0x16c TMovB
	var_473_int = 1; // 0x16d PushI
	if(var_473_int == 0) goto Label_399; // 0x16e JumpB
	var_474_string = ""; // 0x16f PushV
	var_474_string = "Secret"; // 0x170 MovS
	func_429(var_468_object, var_474_string); // 0x171 NEW_2
	var_482_int = 535248; // 0x173 PushI
	SetMessage(var_482_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_483_bool = 0; var_484_object = Obj(); // 0x178 PushV
	var_484_object = var_1_object; // 0x179 MovT
	func_2289(var_484_object); // 0x17a NEW_2
	if(var_483_bool == 0) goto Label_386; // 0x17c JumpB
	var_489_int = 535249; // 0x17d PushI
	var_490_int = 37070; // 0x17e PushI
	var_491_int = 36924; // 0x17f PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x180 TObjFunc
	
Label_386:
	var_492_int = 535387; // 0x182 PushI
	var_493_int = -1; // 0x183 PushI
	var_494_int = 37072; // 0x184 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x185 TObjFunc
	var_495_int = 535388; // 0x187 PushI
	var_496_int = -1; // 0x188 PushI
	var_497_int = 37073; // 0x189 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x18a TObjFunc
	goto Label_399; // 0x18c Jump
	
Label_399:
	var_498_bool = 0; // 0x18f PushV
	func_2225(var_498_bool); // 0x190 NEW_2
	if(var_498_bool == 0) goto Label_414; // 0x192 JumpB
	
Label_403:
	lshWaitForAnimEnd(); // 0x193 Func
	var_499_string = var_3_string; // 0x195 PushT
	if(var_499_string == 0) goto Label_408; // 0x196 JumpB
	goto Label_413; // 0x197 Jump
	
Label_413:
	goto Label_428; // 0x19d Jump
	
Label_428:
	return 0; // 0x1ac Return
	
Label_408:
	var_500_string = ""; // 0x198 PushV
	var_500_string = var_2_object; // 0x199 MovT
	func_2081(var_500_string); // 0x19a NEW_2
	goto Label_403; // 0x19c Jump
	
Label_414:
	var_501_string = "all"; // 0x19e PushS
	var_502_string = "idle"; // 0x19f PushS
	PlayAnimation(var_501_string, var_502_string); // 0x1a0 Func
	
Label_418:
	WaitForAnimEnd(); // 0x1a2 Func
	var_503_string = var_3_string; // 0x1a4 PushT
	if(var_503_string == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_428; // 0x1a6 Jump
	
Label_423:
	var_504_string = "all"; // 0x1a7 PushS
	var_505_string = "idle"; // 0x1a8 PushS
	PlayAnimation(var_504_string, var_505_string); // 0x1a9 Func
	goto Label_418; // 0x1ab Jump
}


func_2155(var_65_object, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x86b PushV
	GetMainOutdoorScene(var_69_object); // 0x86c Func
	var_71_string = ".bin"; // 0x86e PushS
	var_72_int = var_66_string + var_71_string; // 0x86f Add
	AddBlankActor(var_70_object, var_69_object, var_66_string, var_72_int); // 0x870 Func
	var_65_object = var_70_object; // 0x872 Mov
	return 4; // 0x873 Return
}


func_2166(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x876 PushV
	FindActor(var_77_object, var_74_string); // 0x877 Func
	var_78_bool = var_77_object == 0; // 0x879 NullEq
	if(var_78_bool == 0) goto Label_2173; // 0x87a JumpB
	var_73_bool = 0; // 0x87b MovB
	return 2; // 0x87c Return
	
Label_2173:
	Trigger(var_77_object, var_75_string); // 0x87d Func
	var_73_bool = 1; // 0x87f MovB
	return 2; // 0x880 Return
}


func_2429(var_112_int)
{
	var_113_int = 0; var_114_int = 0; // 0x97d PushV
	var_115_string = "branch"; // 0x97e PushS
	GetVariable(var_115_string, var_114_int); // 0x97f Func
	var_116_int = 0; // 0x981 PushI
	var_117_bool = var_114_int == var_116_int; // 0x982 Eq
	if(var_117_bool == 0) goto Label_2439; // 0x983 JumpB
	var_112_int = 1; // 0x984 MovI
	return 2; // 0x985 Return
	
Label_2439:
	var_118_int = 1; // 0x987 PushI
	var_119_bool = var_114_int == var_118_int; // 0x988 Eq
	if(var_119_bool == 0) goto Label_2444; // 0x989 JumpB
	var_112_int = 2; // 0x98a MovI
	return 2; // 0x98b Return
	
Label_2444:
	var_112_int = 3; // 0x98c MovI
	return 2; // 0x98d Return
}


func_2178(var_176_int)
{
	var_177_float = 0; var_178_float = 0; // 0x882 PushV
	GetGameTime(var_178_float); // 0x883 Func
	var_179_int = 1; // 0x885 PushI
	var_180_int = 0; // 0x886 PushV
	var_181_int = 24; // 0x887 PushI
	var_180_int = var_178_float / var_178_float; // 0x888 Div2
	var_176_int = var_179_int + var_180_int; // 0x889 Add2
	return 2; // 0x88a Return
}


func_1926()
{
	var_267_bool = 0; var_268_bool = 0; // 0x786 PushV
	CameraSwitchToNormal(); // 0x787 Func
	var_269_bool = 0; // 0x789 PushV
	func_2225(var_269_bool); // 0x78a NEW_2
	if(var_269_bool == 0) goto Label_1934; // 0x78c JumpB
	goto Label_1942; // 0x78d Jump
	
Label_1942:
	return 2; // 0x796 Return
	
Label_1934:
	var_270_string = "head"; // 0x78e PushS
	HasAnimationTrack(var_268_bool, var_270_string); // 0x78f Func
	var_271_bool = var_268_bool; // 0x791 Push
	if(var_271_bool == 0) goto Label_1942; // 0x792 JumpB
	var_272_string = "head"; // 0x793 PushS
	UnlookAsync(var_272_string); // 0x794 Func
}


func_2187(var_275_bool, var_276_int)
{
	var_277_int = 0; // 0x88c PushV
	func_2178(var_277_int); // 0x88d NEW_2
	var_275_bool = var_277_int == var_276_int; // 0x88f Eq2
	return 0; // 0x890 Return
}


func_2446(var_45_object)
{
	var_46_int = 0; var_47_int = 0; // 0x98e PushV
	var_48_string = "mt_spi4ka"; // 0x98f PushS
	GetVariable(var_48_string, var_47_int); // 0x990 Func
	var_49_bool = var_47_int == 0; // 0x992 Not
	if(var_49_bool == 0) goto Label_2462; // 0x993 JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x994 PushV
	var_51_object = var_45_object; // 0x995 Mov
	TaskCall(6); // 0x996 TaskCall
	func_1128(var_52_object, var_50_int, var_51_object); // 0x997 NEW_2
	TaskReturn(); // 0x998 TaskReturn
	var_273_string = "mt_spi4ka"; // 0x99a PushS
	var_274_int = 1; // 0x99b PushI
	SetVariable(var_273_string, var_274_int); // 0x99c Func
	
Label_2462:
	return 2; // 0x99e Return
}


func_144(var_2_object, var_410_string)
{
	var_411_bool = 0; // 0x91 PushV
	func_2225(var_411_bool); // 0x92 NEW_2
	var_412_bool = var_411_bool == 0; // 0x94 Not
	if(var_412_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_413_bool = var_410_string == var_2_object; // 0x97 Eq
	if(var_413_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_414_string = ""; var_415_bool = 0; // 0x9a PushV
	var_414_string = var_410_string; // 0x9b Mov
	var_416_string = ""; // 0x9c PushS
	var_417_bool = var_410_string == var_416_string; // 0x9d Eq
	if(var_417_bool == 0) goto Label_161; // 0x9e JumpB
	var_415_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2097(var_414_string, var_415_bool); // 0xa2 NEW_2
	var_2_object = var_410_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_415_bool = 1; // 0xa1 MovB
}


func_2193(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x891 PushV
	var_53_string = "idle"; // 0x892 MovS
	var_54_int = var_51_int; // 0x893 Push
	if(var_54_int == 0) goto Label_2198; // 0x894 JumpB
	var_53_string = var_53_string + var_51_int; // 0x895 Add2
	
Label_2198:
	var_50_string = var_53_string; // 0x896 Mov
	return 2; // 0x897 Return
}


func_1943(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; // 0x797 PushV
	var_130_string = "voice_common"; // 0x798 PushS
	GetVariable(var_130_string, var_128_int); // 0x799 Func
	var_131_int = var_128_int; // 0x79b Push
	if(var_131_int == 0) goto Label_1981; // 0x79c JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x79d PushV
	var_133_object = var_122_object; // 0x79e Mov
	func_2001(var_133_object); // 0x79f NEW_2
	var_162_bool = var_132_bool == 0; // 0x7a1 Not
	if(var_162_bool == 0) goto Label_1963; // 0x7a2 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x7a3 PushV
	var_164_object = var_122_object; // 0x7a4 Mov
	func_2038(var_164_object); // 0x7a5 NEW_2
	var_198_bool = var_163_bool == 0; // 0x7a7 Not
	if(var_198_bool == 0) goto Label_1963; // 0x7a8 JumpB
	var_121_bool = 0; // 0x7a9 MovB
	return 4; // 0x7aa Return
	
Label_1963:
	var_199_int = 2; // 0x7ab PushI
	irand(var_129_int, var_199_int); // 0x7ac Func
	var_200_int = var_129_int; // 0x7ae Push
	if(var_200_int == 0) goto Label_1976; // 0x7af JumpB
	var_201_string = "voice_common"; // 0x7b0 PushS
	var_202_int = 1; // 0x7b1 PushI
	var_203_int = var_128_int + var_202_int; // 0x7b2 Add
	var_204_int = 3; // 0x7b3 PushI
	var_205_int = var_203_int / var_204_int; // 0x7b4 Mod
	SetVariable(var_201_string, var_205_int); // 0x7b5 Func
	goto Label_1980; // 0x7b7 Jump
	
Label_1980:
	goto Label_1999; // 0x7bc Jump
	
Label_1999:
	var_121_bool = 1; // 0x7cf MovB
	return 4; // 0x7d0 Return
	
Label_1976:
	var_206_string = "voice_common"; // 0x7b8 PushS
	var_207_int = 0; // 0x7b9 PushI
	SetVariable(var_206_string, var_207_int); // 0x7ba Func
	
Label_1981:
	var_208_bool = 0; var_209_object = Obj(); // 0x7bd PushV
	var_209_object = var_122_object; // 0x7be Mov
	func_2038(var_209_object); // 0x7bf NEW_2
	var_210_bool = var_208_bool == 0; // 0x7c1 Not
	if(var_210_bool == 0) goto Label_1995; // 0x7c2 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x7c3 PushV
	var_212_object = var_122_object; // 0x7c4 Mov
	func_2001(var_212_object); // 0x7c5 NEW_2
	var_213_bool = var_211_bool == 0; // 0x7c7 Not
	if(var_213_bool == 0) goto Label_1995; // 0x7c8 JumpB
	var_121_bool = 0; // 0x7c9 MovB
	return 4; // 0x7ca Return
	
Label_1995:
	var_214_string = "voice_common"; // 0x7cb PushS
	var_215_int = 1; // 0x7cc PushI
	SetVariable(var_214_string, var_215_int); // 0x7cd Func
}


func_2200(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x898 PushV
	var_47_int = 0; // 0x899 MovI
	
Label_2202:
	var_49_string = "all"; // 0x89a PushS
	var_50_string = ""; var_51_int = 0; // 0x89b PushV
	var_51_int = var_47_int; // 0x89c Mov
	func_2193(var_50_string, var_51_int); // 0x89d NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x89f Func
	var_55_bool = var_48_bool == 0; // 0x8a1 Not
	if(var_55_bool == 0) goto Label_2212; // 0x8a2 JumpB
	goto Label_2215; // 0x8a3 Jump
	
Label_2215:
	var_44_int = var_47_int; // 0x8a7 Mov
	return 4; // 0x8a8 Return
	
Label_2212:
	var_56_int = 1; // 0x8a4 PushI
	var_47_int = var_47_int + var_56_int; // 0x8a5 Add2
	goto Label_2202; // 0x8a6 Jump
}


func_2463(var_44_object)
{
	var_45_object = Obj(); // 0x9a0 PushV
	var_45_object = var_44_object; // 0x9a1 Mov
	func_2446(var_45_object); // 0x9a2 NEW_2
	var_275_bool = 0; var_276_int = 0; // 0x9a4 PushV
	var_276_int = 4; // 0x9a5 MovI
	func_2187(var_275_bool, var_276_int); // 0x9a6 NEW_2
	if(var_275_bool == 0) goto Label_2480; // 0x9a8 JumpB
	var_278_int = 0; var_279_object = Obj(); // 0x9a9 PushV
	var_279_object = var_44_object; // 0x9aa Mov
	TaskCall(4); // 0x9ab TaskCall
	func_603(var_280_object, var_278_int, var_279_object); // 0x9ac NEW_2
	TaskReturn(); // 0x9ad TaskReturn
	return 0; // 0x9af Return
	
Label_2480:
	var_377_bool = 0; var_378_int = 0; // 0x9b0 PushV
	var_378_int = 10; // 0x9b1 MovI
	func_2187(var_377_bool, var_378_int); // 0x9b2 NEW_2
	if(var_377_bool == 0) goto Label_2492; // 0x9b4 JumpB
	var_379_int = 0; var_380_object = Obj(); // 0x9b5 PushV
	var_380_object = var_44_object; // 0x9b6 Mov
	TaskCall(0); // 0x9b7 TaskCall
	func_0(var_381_object, var_379_int, var_380_object); // 0x9b8 NEW_2
	TaskReturn(); // 0x9b9 TaskReturn
	return 0; // 0x9bb Return
	
Label_2492:
	var_441_bool = 0; var_442_int = 0; // 0x9bc PushV
	var_442_int = 12; // 0x9bd MovI
	func_2187(var_441_bool, var_442_int); // 0x9be NEW_2
	if(var_441_bool == 0) goto Label_2504; // 0x9c0 JumpB
	var_443_int = 0; var_444_object = Obj(); // 0x9c1 PushV
	var_444_object = var_44_object; // 0x9c2 Mov
	TaskCall(2); // 0x9c3 TaskCall
	func_280(var_445_object, var_443_int, var_444_object); // 0x9c4 NEW_2
	TaskReturn(); // 0x9c5 TaskReturn
	return 0; // 0x9c7 Return
	
Label_2504:
	var_508_int = 0; var_509_object = Obj(); // 0x9c8 PushV
	var_509_object = var_44_object; // 0x9c9 Mov
	TaskCall(8); // 0x9ca TaskCall
	func_1367(var_510_object, var_508_int, var_509_object); // 0x9cb NEW_2
	TaskReturn(); // 0x9cc TaskReturn
	return 0; // 0x9ce Return
}


func_1448(var_0_object, var_1_object, var_2_object, var_3_string, var_532_object, var_533_object)
{
	var_0_object = var_533_object; // 0x5a9 TMov
	var_1_object = var_532_object; // 0x5aa TMov
	var_3_string = 0; // 0x5ab TMovB
	var_538_int = 1; // 0x5ac PushI
	if(var_538_int == 0) goto Label_1476; // 0x5ad JumpB
	var_539_string = ""; // 0x5ae PushV
	var_539_string = "Neutral"; // 0x5af MovS
	func_1506(var_533_object, var_539_string); // 0x5b0 NEW_2
	var_547_int = 540554; // 0x5b2 PushI
	SetMessage(var_547_int); // 0x5b3 TObjFunc
	ClearReplies(); // 0x5b5 TObjFunc
	var_548_int = 540555; // 0x5b7 PushI
	var_549_int = -1; // 0x5b8 PushI
	var_550_int = 42564; // 0x5b9 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x5ba TObjFunc
	var_551_int = 540794; // 0x5bc PushI
	var_552_int = -1; // 0x5bd PushI
	var_553_int = 42843; // 0x5be PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x5bf TObjFunc
	goto Label_1476; // 0x5c1 Jump
	
Label_1476:
	var_554_bool = 0; // 0x5c4 PushV
	func_2225(var_554_bool); // 0x5c5 NEW_2
	if(var_554_bool == 0) goto Label_1491; // 0x5c7 JumpB
	
Label_1480:
	lshWaitForAnimEnd(); // 0x5c8 Func
	var_555_string = var_3_string; // 0x5ca PushT
	if(var_555_string == 0) goto Label_1485; // 0x5cb JumpB
	goto Label_1490; // 0x5cc Jump
	
Label_1490:
	goto Label_1505; // 0x5d2 Jump
	
Label_1505:
	return 0; // 0x5e1 Return
	
Label_1485:
	var_556_string = ""; // 0x5cd PushV
	var_556_string = var_2_object; // 0x5ce MovT
	func_2081(var_556_string); // 0x5cf NEW_2
	goto Label_1480; // 0x5d1 Jump
	
Label_1491:
	var_557_string = "all"; // 0x5d3 PushS
	var_558_string = "idle"; // 0x5d4 PushS
	PlayAnimation(var_557_string, var_558_string); // 0x5d5 Func
	
Label_1495:
	WaitForAnimEnd(); // 0x5d7 Func
	var_559_string = var_3_string; // 0x5d9 PushT
	if(var_559_string == 0) goto Label_1500; // 0x5da JumpB
	goto Label_1505; // 0x5db Jump
	
Label_1500:
	var_560_string = "all"; // 0x5dc PushS
	var_561_string = "idle"; // 0x5dd PushS
	PlayAnimation(var_560_string, var_561_string); // 0x5de Func
	goto Label_1495; // 0x5e0 Jump
}


func_2217(var_109_int)
{
	var_109_int = 515552; // 0x8a9 MovI
	return 0; // 0x8aa Return
}


func_2219(var_108_int)
{
	var_108_int = 502877; // 0x8ab MovI
	return 0; // 0x8ac Return
}


func_684(var_0_object, var_1_object, var_2_object, var_3_string, var_302_object, var_303_object)
{
	var_0_object = var_303_object; // 0x2ad TMov
	var_1_object = var_302_object; // 0x2ae TMov
	var_3_string = 0; // 0x2af TMovB
	var_308_int = 1; // 0x2b0 PushI
	if(var_308_int == 0) goto Label_766; // 0x2b1 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x2b2 PushV
	var_310_object = var_1_object; // 0x2b3 MovT
	func_2301(var_310_object); // 0x2b4 NEW_2
	if(var_309_bool == 0) goto Label_720; // 0x2b6 JumpB
	var_317_object = Obj(); var_318_object = Obj(); // 0x2b7 PushV
	var_317_object = var_1_object; // 0x2b8 MovT
	var_318_object = var_0_object; // 0x2b9 MovT
	func_2244(); // 0x2ba NEW_2
	var_321_object = Obj(); var_322_object = Obj(); // 0x2bc PushV
	var_321_object = var_1_object; // 0x2bd MovT
	var_322_object = var_0_object; // 0x2be MovT
	func_2265(); // 0x2bf NEW_2
	var_325_string = ""; // 0x2c1 PushV
	var_325_string = "Azart"; // 0x2c2 MovS
	func_796(var_303_object, var_325_string); // 0x2c3 NEW_2
	var_333_int = 518568; // 0x2c5 PushI
	SetMessage(var_333_int); // 0x2c6 TObjFunc
	ClearReplies(); // 0x2c8 TObjFunc
	var_334_int = 518572; // 0x2ca PushI
	var_335_int = 20064; // 0x2cb PushI
	var_336_int = 19682; // 0x2cc PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x2cd TObjFunc
	goto Label_766; // 0x2cf Jump
	
Label_766:
	var_337_bool = 0; // 0x2fe PushV
	func_2225(var_337_bool); // 0x2ff NEW_2
	if(var_337_bool == 0) goto Label_781; // 0x301 JumpB
	
Label_770:
	lshWaitForAnimEnd(); // 0x302 Func
	var_338_string = var_3_string; // 0x304 PushT
	if(var_338_string == 0) goto Label_775; // 0x305 JumpB
	goto Label_780; // 0x306 Jump
	
Label_780:
	goto Label_795; // 0x30c Jump
	
Label_795:
	return 0; // 0x31b Return
	
Label_775:
	var_339_string = ""; // 0x307 PushV
	var_339_string = var_2_object; // 0x308 MovT
	func_2081(var_339_string); // 0x309 NEW_2
	goto Label_770; // 0x30b Jump
	
Label_781:
	var_340_string = "all"; // 0x30d PushS
	var_341_string = "idle"; // 0x30e PushS
	PlayAnimation(var_340_string, var_341_string); // 0x30f Func
	
Label_785:
	WaitForAnimEnd(); // 0x311 Func
	var_342_string = var_3_string; // 0x313 PushT
	if(var_342_string == 0) goto Label_790; // 0x314 JumpB
	goto Label_795; // 0x315 Jump
	
Label_790:
	var_343_string = "all"; // 0x316 PushS
	var_344_string = "idle"; // 0x317 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x318 Func
	goto Label_785; // 0x31a Jump
	
Label_720:
	var_345_string = ""; // 0x2d0 PushV
	var_345_string = "Secret"; // 0x2d1 MovS
	func_796(var_303_object, var_345_string); // 0x2d2 NEW_2
	var_346_int = 518573; // 0x2d4 PushI
	SetMessage(var_346_int); // 0x2d5 TObjFunc
	ClearReplies(); // 0x2d7 TObjFunc
	var_347_bool = 0; var_348_object = Obj(); // 0x2d9 PushV
	var_348_object = var_1_object; // 0x2da MovT
	func_2313(var_348_object); // 0x2db NEW_2
	if(var_347_bool == 0) goto Label_739; // 0x2dd JumpB
	var_353_int = 518574; // 0x2de PushI
	var_354_int = 19688; // 0x2df PushI
	var_355_int = 19684; // 0x2e0 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x2e1 TObjFunc
	
Label_739:
	var_356_bool = 0; // 0x2e3 PushV
	var_356_bool = 0; // 0x2e4 MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x2e5 PushV
	var_358_object = var_1_object; // 0x2e6 MovT
	func_2325(var_358_object); // 0x2e7 NEW_2
	if(var_357_bool == 0) goto Label_752; // 0x2e9 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x2ea PushV
	var_364_object = var_1_object; // 0x2eb MovT
	func_2337(var_364_object); // 0x2ec NEW_2
	if(var_363_bool == 0) goto Label_752; // 0x2ee JumpB
	var_356_bool = 1; // 0x2ef MovB
	
Label_752:
	if(var_356_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_369_int = 518586; // 0x2f1 PushI
	var_370_int = 19694; // 0x2f2 PushI
	var_371_int = 19693; // 0x2f3 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x2f4 TObjFunc
	
Label_758:
	var_372_int = 518575; // 0x2f6 PushI
	var_373_int = -1; // 0x2f7 PushI
	var_374_int = 19685; // 0x2f8 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x2f9 TObjFunc
	goto Label_766; // 0x2fb Jump
}


func_2221(var_110_string)
{
	var_110_string = "ui/NPC_Spi4ka.png"; // 0x8ad MovS
	return 0; // 0x8ae Return
}


func_429(var_2_object, var_474_string)
{
	var_475_bool = 0; // 0x1ae PushV
	func_2225(var_475_bool); // 0x1af NEW_2
	var_476_bool = var_475_bool == 0; // 0x1b1 Not
	if(var_476_bool == 0) goto Label_436; // 0x1b2 JumpB
	return 0; // 0x1b3 Return
	
Label_436:
	var_477_bool = var_474_string == var_2_object; // 0x1b4 Eq
	if(var_477_bool == 0) goto Label_439; // 0x1b5 JumpB
	return 0; // 0x1b6 Return
	
Label_439:
	var_478_string = ""; var_479_bool = 0; // 0x1b7 PushV
	var_478_string = var_474_string; // 0x1b8 Mov
	var_480_string = ""; // 0x1b9 PushS
	var_481_bool = var_474_string == var_480_string; // 0x1ba Eq
	if(var_481_bool == 0) goto Label_446; // 0x1bb JumpB
	var_479_bool = 0; // 0x1bc MovB
	goto Label_447; // 0x1bd Jump
	
Label_447:
	func_2097(var_478_string, var_479_bool); // 0x1bf NEW_2
	var_2_object = var_474_string; // 0x1c1 TMov
	return 0; // 0x1c2 Return
	
Label_446:
	var_479_bool = 1; // 0x1be MovB
}


func_2223(var_111_string)
{
	var_111_string = "ui/NPC_Spi4ka_b.png"; // 0x8af MovS
	return 0; // 0x8b0 Return
}


func_2225(var_103_bool)
{
	var_103_bool = 1; // 0x8b1 MovB
	return 0; // 0x8b2 Return
}


func_2227()
{
	func_2362(); // 0x8b5 NEW_2
	func_2375(); // 0x8b8 NEW_2
	var_65_object = Obj(); var_66_string = ""; // 0x8ba PushV
	var_66_string = "quest_b4_02"; // 0x8bb MovS
	func_2155(var_65_object, var_66_string); // 0x8bc NEW_2
	var_73_bool = 0; var_74_string = ""; var_75_string = ""; // 0x8be PushV
	var_74_string = "quest_b4_02"; // 0x8bf MovS
	var_75_string = "place_boy"; // 0x8c0 MovS
	func_2166(var_73_bool, var_74_string, var_75_string); // 0x8c1 NEW_2
	return 0; // 0x8c3 Return
}


func_1209(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object; // 0x4ba TMov
	var_1_object = var_216_object; // 0x4bb TMov
	var_3_string = 0; // 0x4bc TMovB
	var_222_int = 1; // 0x4bd PushI
	if(var_222_int == 0) goto Label_1237; // 0x4be JumpB
	var_223_string = ""; // 0x4bf PushV
	var_223_string = "Neutral"; // 0x4c0 MovS
	func_1267(var_217_object, var_223_string); // 0x4c1 NEW_2
	var_240_int = 520803; // 0x4c3 PushI
	SetMessage(var_240_int); // 0x4c4 TObjFunc
	ClearReplies(); // 0x4c6 TObjFunc
	var_241_int = 520804; // 0x4c8 PushI
	var_242_int = 29221; // 0x4c9 PushI
	var_243_int = 22021; // 0x4ca PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x4cb TObjFunc
	var_244_int = 527876; // 0x4cd PushI
	var_245_int = 29224; // 0x4ce PushI
	var_246_int = 29223; // 0x4cf PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x4d0 TObjFunc
	goto Label_1237; // 0x4d2 Jump
	
Label_1237:
	var_247_bool = 0; // 0x4d5 PushV
	func_2225(var_247_bool); // 0x4d6 NEW_2
	if(var_247_bool == 0) goto Label_1252; // 0x4d8 JumpB
	
Label_1241:
	lshWaitForAnimEnd(); // 0x4d9 Func
	var_248_string = var_3_string; // 0x4db PushT
	if(var_248_string == 0) goto Label_1246; // 0x4dc JumpB
	goto Label_1251; // 0x4dd Jump
	
Label_1251:
	goto Label_1266; // 0x4e3 Jump
	
Label_1266:
	return 0; // 0x4f2 Return
	
Label_1246:
	var_249_string = ""; // 0x4de PushV
	var_249_string = var_2_object; // 0x4df MovT
	func_2081(var_249_string); // 0x4e0 NEW_2
	goto Label_1241; // 0x4e2 Jump
	
Label_1252:
	var_260_string = "all"; // 0x4e4 PushS
	var_261_string = "idle"; // 0x4e5 PushS
	PlayAnimation(var_260_string, var_261_string); // 0x4e6 Func
	
Label_1256:
	WaitForAnimEnd(); // 0x4e8 Func
	var_262_string = var_3_string; // 0x4ea PushT
	if(var_262_string == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1266; // 0x4ec Jump
	
Label_1261:
	var_263_string = "all"; // 0x4ed PushS
	var_264_string = "idle"; // 0x4ee PushS
	PlayAnimation(var_263_string, var_264_string); // 0x4ef Func
	goto Label_1256; // 0x4f1 Jump
}


func_2244()
{
	var_319_string = "oob4Spi4ka1"; // 0x8c5 PushS
	var_320_int = 1; // 0x8c6 PushI
	SetVariable(var_319_string, var_320_int); // 0x8c7 Func
	return 0; // 0x8c9 Return
}


func_2250()
{
	var_87_string = "oob4Spi4ka2"; // 0x8cb PushS
	var_88_int = 1; // 0x8cc PushI
	SetVariable(var_87_string, var_88_int); // 0x8cd Func
	return 0; // 0x8cf Return
}


func_2256()
{
	var_34_string = "b10q04Spi4kaTalk"; // 0x8d1 PushS
	var_35_int = 9; // 0x8d2 PushI
	SetVariable(var_34_string, var_35_int); // 0x8d3 Func
	func_2349(); // 0x8d6 NEW_2
	return 0; // 0x8d8 Return
}


func_2001(var_132_bool)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; // 0x7d1 PushV
	var_139_string = "c"; // 0x7d2 MovS
	var_140_int = 0; // 0x7d3 MovI
	
Label_2004:
	var_144_int = 1; // 0x7d4 PushI
	if(var_144_int == 0) goto Label_2017; // 0x7d5 JumpB
	var_145_int = 1; // 0x7d6 PushI
	var_146_int = var_140_int + var_145_int; // 0x7d7 Add
	var_147_int = var_139_string + var_146_int; // 0x7d8 Add
	HasProperty(var_147_int, var_141_bool); // 0x7d9 ObjFunc
	var_148_bool = var_141_bool == 0; // 0x7db Not
	if(var_148_bool == 0) goto Label_2014; // 0x7dc JumpB
	goto Label_2017; // 0x7dd Jump
	
Label_2017:
	var_149_bool = var_140_int == 0; // 0x7e1 Not
	if(var_149_bool == 0) goto Label_2021; // 0x7e2 JumpB
	var_132_bool = 0; // 0x7e3 MovB
	return 10; // 0x7e4 Return
	
Label_2021:
	var_142_int = 0; // 0x7e5 MovI
	var_150_int = 1; // 0x7e6 PushI
	var_151_bool = var_140_int > var_150_int; // 0x7e7 GT
	if(var_151_bool == 0) goto Label_2027; // 0x7e8 JumpB
	irand(var_142_int, var_140_int); // 0x7e9 Func
	
Label_2027:
	var_152_int = 1; // 0x7eb PushI
	var_153_int = var_142_int + var_152_int; // 0x7ec Add
	var_154_int = var_139_string + var_153_int; // 0x7ed Add
	GetProperty(var_154_int, var_143_string); // 0x7ee ObjFunc
	var_155_bool = 0; var_156_string = ""; // 0x7f0 PushV
	var_156_string = var_143_string; // 0x7f1 Mov
	func_2112(var_155_bool, var_156_string); // 0x7f2 NEW_2
	var_132_bool = var_155_bool; // 0x7f3 Mov
	return 10; // 0x7f5 Return
	
Label_2014:
	var_161_int = 1; // 0x7de PushI
	var_140_int = var_140_int + var_161_int; // 0x7df Add2
	goto Label_2004; // 0x7e0 Jump
}


func_1750()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x6d6 PushV
	WaitForAnimEnd(); // 0x6d7 Func
	var_42_bool = 0; // 0x6d9 PushV
	func_1853(var_42_bool); // 0x6da NEW_2
	var_43_bool = var_42_bool == 0; // 0x6dc Not
	if(var_43_bool == 0) goto Label_1759; // 0x6dd JumpB
	return 12; // 0x6de Return
	
Label_1759:
	var_44_int = 0; // 0x6df PushV
	func_2200(var_44_int); // 0x6e0 NEW_2
	var_36_int = var_44_int; // 0x6e1 Mov
	var_37_int = 0; // 0x6e3 MovI
	
Label_1764:
	var_57_bool = 0; // 0x6e4 PushV
	var_57_bool = 0; // 0x6e5 MovB
	var_58_int = 5; // 0x6e6 PushI
	var_59_bool = var_37_int < var_58_int; // 0x6e7 LT
	if(var_59_bool == 0) goto Label_1774; // 0x6e8 JumpB
	var_60_bool = 0; // 0x6e9 PushV
	func_1853(var_60_bool); // 0x6ea NEW_2
	if(var_60_bool == 0) goto Label_1774; // 0x6ec JumpB
	var_57_bool = 1; // 0x6ed MovB
	
Label_1774:
	if(var_57_bool == 0) goto Label_1816; // 0x6ee JumpB
	var_61_bool = var_36_int == 0; // 0x6ef Not
	if(var_61_bool == 0) goto Label_1784; // 0x6f0 JumpB
	var_62_int = 3; // 0x6f1 PushI
	Sleep(var_62_int, var_38_bool); // 0x6f2 Func
	var_63_bool = var_38_bool == 0; // 0x6f4 Not
	if(var_63_bool == 0) goto Label_1783; // 0x6f5 JumpB
	goto Label_1816; // 0x6f6 Jump
	
Label_1816:
	ResetAAS(); // 0x718 Func
	return 12; // 0x71a Return
	
Label_1783:
	goto Label_1805; // 0x6f7 Jump
	
Label_1805:
	var_64_bool = 0; // 0x70d PushV
	func_1819(var_64_bool); // 0x70e NEW_2
	var_65_bool = var_64_bool == 0; // 0x710 Not
	if(var_65_bool == 0) goto Label_1811; // 0x711 JumpB
	goto Label_1816; // 0x712 Jump
	
Label_1811:
	ResetAAS(); // 0x713 Func
	var_66_int = 1; // 0x715 PushI
	var_37_int = var_37_int + var_66_int; // 0x716 Add2
	goto Label_1764; // 0x717 Jump
	
Label_1784:
	irand(var_39_int, var_36_int); // 0x6f8 Func
	var_67_int = 5; // 0x6fa PushI
	irand(var_40_int, var_67_int); // 0x6fb Func
	var_68_int = 0; // 0x6fd PushI
	var_69_bool = var_40_int != var_68_int; // 0x6fe Neq
	if(var_69_bool == 0) goto Label_1793; // 0x6ff JumpB
	var_39_int = 0; // 0x700 MovI
	
Label_1793:
	var_70_string = "all"; // 0x701 PushS
	var_71_string = ""; var_72_int = 0; // 0x702 PushV
	var_72_int = var_39_int; // 0x703 Mov
	func_2193(var_71_string, var_72_int); // 0x704 NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x706 Func
	WaitForAnimEnd(var_41_bool); // 0x708 Func
	var_73_bool = var_41_bool == 0; // 0x70a Not
	if(var_73_bool == 0) goto Label_1805; // 0x70b JumpB
	goto Label_1816; // 0x70c Jump
}


func_2265()
{
	var_323_string = "b4Spi4kaVisit"; // 0x8da PushS
	var_324_int = 1; // 0x8db PushI
	SetVariable(var_323_string, var_324_int); // 0x8dc Func
	return 0; // 0x8de Return
}


func_2271()
{
	var_34_string = "oob12Spi4ka1"; // 0x8e0 PushS
	var_35_int = 1; // 0x8e1 PushI
	SetVariable(var_34_string, var_35_int); // 0x8e2 Func
	return 0; // 0x8e4 Return
}


func_1506(var_2_object, var_539_string)
{
	var_540_bool = 0; // 0x5e3 PushV
	func_2225(var_540_bool); // 0x5e4 NEW_2
	var_541_bool = var_540_bool == 0; // 0x5e6 Not
	if(var_541_bool == 0) goto Label_1513; // 0x5e7 JumpB
	return 0; // 0x5e8 Return
	
Label_1513:
	var_542_bool = var_539_string == var_2_object; // 0x5e9 Eq
	if(var_542_bool == 0) goto Label_1516; // 0x5ea JumpB
	return 0; // 0x5eb Return
	
Label_1516:
	var_543_string = ""; var_544_bool = 0; // 0x5ec PushV
	var_543_string = var_539_string; // 0x5ed Mov
	var_545_string = ""; // 0x5ee PushS
	var_546_bool = var_539_string == var_545_string; // 0x5ef Eq
	if(var_546_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_544_bool = 0; // 0x5f1 MovB
	goto Label_1524; // 0x5f2 Jump
	
Label_1524:
	func_2097(var_543_string, var_544_bool); // 0x5f4 NEW_2
	var_2_object = var_539_string; // 0x5f6 TMov
	return 0; // 0x5f7 Return
	
Label_1523:
	var_544_bool = 1; // 0x5f3 MovB
}


func_2277(var_419_bool)
{
	var_421_int = 0; var_422_string = ""; // 0x8e6 PushV
	var_422_string = "b10q04Spi4kaTalk"; // 0x8e7 MovS
	func_2150(var_421_int, var_422_string); // 0x8e8 NEW_2
	var_423_int = 1; // 0x8ea PushI
	var_424_bool = var_421_int == var_423_int; // 0x8eb Eq
	if(var_424_bool == 0) goto Label_2287; // 0x8ec JumpB
	var_419_bool = 1; // 0x8ed MovB
	return 0; // 0x8ee Return
	
Label_2287:
	var_419_bool = 0; // 0x8ef MovB
	return 0; // 0x8f0 Return
}


func_2289(var_483_bool)
{
	var_485_int = 0; var_486_string = ""; // 0x8f2 PushV
	var_486_string = "oob12Spi4ka1"; // 0x8f3 MovS
	func_2150(var_485_int, var_486_string); // 0x8f4 NEW_2
	var_487_int = 0; // 0x8f6 PushI
	var_488_bool = var_485_int == var_487_int; // 0x8f7 Eq
	if(var_488_bool == 0) goto Label_2299; // 0x8f8 JumpB
	var_483_bool = 1; // 0x8f9 MovB
	return 0; // 0x8fa Return
	
Label_2299:
	var_483_bool = 0; // 0x8fb MovB
	return 0; // 0x8fc Return
}


func_1267(var_2_object, var_223_string)
{
	var_224_bool = 0; // 0x4f4 PushV
	func_2225(var_224_bool); // 0x4f5 NEW_2
	var_225_bool = var_224_bool == 0; // 0x4f7 Not
	if(var_225_bool == 0) goto Label_1274; // 0x4f8 JumpB
	return 0; // 0x4f9 Return
	
Label_1274:
	var_226_bool = var_223_string == var_2_object; // 0x4fa Eq
	if(var_226_bool == 0) goto Label_1277; // 0x4fb JumpB
	return 0; // 0x4fc Return
	
Label_1277:
	var_227_string = ""; var_228_bool = 0; // 0x4fd PushV
	var_227_string = var_223_string; // 0x4fe Mov
	var_229_string = ""; // 0x4ff PushS
	var_230_bool = var_223_string == var_229_string; // 0x500 Eq
	if(var_230_bool == 0) goto Label_1284; // 0x501 JumpB
	var_228_bool = 0; // 0x502 MovB
	goto Label_1285; // 0x503 Jump
	
Label_1285:
	func_2097(var_227_string, var_228_bool); // 0x505 NEW_2
	var_2_object = var_223_string; // 0x507 TMov
	return 0; // 0x508 Return
	
Label_1284:
	var_228_bool = 1; // 0x504 MovB
}


func_2038(var_163_bool)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; // 0x7f6 PushV
	var_175_string = "d"; // 0x7f7 PushS
	var_176_int = 0; // 0x7f8 PushV
	func_2178(var_176_int); // 0x7f9 NEW_2
	var_182_int = var_175_string + var_176_int; // 0x7fb Add
	var_183_string = "m"; // 0x7fc PushS
	var_170_string = var_182_int + var_183_string; // 0x7fd Add2
	var_171_int = 0; // 0x7fe MovI
	
Label_2047:
	var_184_int = 1; // 0x7ff PushI
	if(var_184_int == 0) goto Label_2060; // 0x800 JumpB
	var_185_int = 1; // 0x801 PushI
	var_186_int = var_171_int + var_185_int; // 0x802 Add
	var_187_int = var_170_string + var_186_int; // 0x803 Add
	HasProperty(var_187_int, var_172_bool); // 0x804 ObjFunc
	var_188_bool = var_172_bool == 0; // 0x806 Not
	if(var_188_bool == 0) goto Label_2057; // 0x807 JumpB
	goto Label_2060; // 0x808 Jump
	
Label_2060:
	var_189_bool = var_171_int == 0; // 0x80c Not
	if(var_189_bool == 0) goto Label_2064; // 0x80d JumpB
	var_163_bool = 0; // 0x80e MovB
	return 10; // 0x80f Return
	
Label_2064:
	var_173_int = 0; // 0x810 MovI
	var_190_int = 1; // 0x811 PushI
	var_191_bool = var_171_int > var_190_int; // 0x812 GT
	if(var_191_bool == 0) goto Label_2070; // 0x813 JumpB
	irand(var_173_int, var_171_int); // 0x814 Func
	
Label_2070:
	var_192_int = 1; // 0x816 PushI
	var_193_int = var_173_int + var_192_int; // 0x817 Add
	var_194_int = var_170_string + var_193_int; // 0x818 Add
	GetProperty(var_194_int, var_174_string); // 0x819 ObjFunc
	var_195_bool = 0; var_196_string = ""; // 0x81b PushV
	var_196_string = var_174_string; // 0x81c Mov
	func_2112(var_195_bool, var_196_string); // 0x81d NEW_2
	var_163_bool = var_195_bool; // 0x81e Mov
	return 10; // 0x820 Return
	
Label_2057:
	var_197_int = 1; // 0x809 PushI
	var_171_int = var_171_int + var_197_int; // 0x80a Add2
	goto Label_2047; // 0x80b Jump
}


func_2301(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x8fe PushV
	var_312_string = "oob4Spi4ka1"; // 0x8ff MovS
	func_2150(var_311_int, var_312_string); // 0x900 NEW_2
	var_315_int = 0; // 0x902 PushI
	var_316_bool = var_311_int == var_315_int; // 0x903 Eq
	if(var_316_bool == 0) goto Label_2311; // 0x904 JumpB
	var_309_bool = 1; // 0x905 MovB
	return 0; // 0x906 Return
	
Label_2311:
	var_309_bool = 0; // 0x907 MovB
	return 0; // 0x908 Return
}


