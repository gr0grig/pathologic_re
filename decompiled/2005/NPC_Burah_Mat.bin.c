task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xac PushI
	if(var_33_int == 0) goto Label_297; // 0xad JumpB
	func_3225(); // 0xaf NEW_2
	var_35_int = 36939; // 0xb1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xb2 Eq
	if(var_36_bool == 0) goto Label_185; // 0xb3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xb4 PushV
	var_37_object = var_1_object; // 0xb5 MovT
	var_38_object = var_0_object; // 0xb6 MovT
	func_3539(); // 0xb7 NEW_2
	
Label_185:
	var_41_int = 36938; // 0xb9 PushI
	var_42_bool = var_31_bool == var_41_int; // 0xba Eq
	if(var_42_bool == 0) goto Label_218; // 0xbb JumpB
	var_43_string = ""; // 0xbc PushV
	var_43_string = "Neutral"; // 0xbd MovS
	func_149(var_32_cvector, var_43_string); // 0xbe NEW_2
	var_60_int = 535263; // 0xc0 PushI
	SetMessage(var_60_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_61_bool = 0; var_62_object = Obj(); // 0xc5 PushV
	var_62_object = var_1_object; // 0xc6 MovT
	func_3689(var_62_object); // 0xc7 NEW_2
	if(var_61_bool == 0) goto Label_207; // 0xc9 JumpB
	var_69_int = 535264; // 0xca PushI
	var_70_int = 37039; // 0xcb PushI
	var_71_int = 36939; // 0xcc PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xcd TObjFunc
	
Label_207:
	var_72_int = 535339; // 0xcf PushI
	var_73_int = -1; // 0xd0 PushI
	var_74_int = 37021; // 0xd1 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xd2 TObjFunc
	var_75_int = 535354; // 0xd4 PushI
	var_76_int = -1; // 0xd5 PushI
	var_77_int = 37038; // 0xd6 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_78_int = 37039; // 0xda PushI
	var_79_bool = var_31_bool == var_78_int; // 0xdb Eq
	if(var_79_bool == 0) goto Label_236; // 0xdc JumpB
	var_80_string = ""; // 0xdd PushV
	var_80_string = "Rage"; // 0xde MovS
	func_149(var_32_cvector, var_80_string); // 0xdf NEW_2
	var_81_int = 535355; // 0xe1 PushI
	SetMessage(var_81_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_82_int = 535356; // 0xe6 PushI
	var_83_int = 37042; // 0xe7 PushI
	var_84_int = 37040; // 0xe8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_85_int = 37043; // 0xec PushI
	var_86_bool = var_31_bool == var_85_int; // 0xed Eq
	if(var_86_bool == 0) goto Label_239; // 0xee JumpB
	
Label_239:
	var_87_int = 37042; // 0xef PushI
	var_88_bool = var_31_bool == var_87_int; // 0xf0 Eq
	if(var_88_bool == 0) goto Label_262; // 0xf1 JumpB
	var_89_string = ""; // 0xf2 PushV
	var_89_string = "Rage"; // 0xf3 MovS
	func_149(var_32_cvector, var_89_string); // 0xf4 NEW_2
	var_90_int = 535358; // 0xf6 PushI
	SetMessage(var_90_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_91_int = 535362; // 0xfb PushI
	var_92_int = 37049; // 0xfc PushI
	var_93_int = 37047; // 0xfd PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xfe TObjFunc
	var_94_int = 535363; // 0x100 PushI
	var_95_int = -1; // 0x101 PushI
	var_96_int = 37048; // 0x102 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_97_int = 37049; // 0x106 PushI
	var_98_bool = var_31_bool == var_97_int; // 0x107 Eq
	if(var_98_bool == 0) goto Label_285; // 0x108 JumpB
	var_99_string = ""; // 0x109 PushV
	var_99_string = "Patronage"; // 0x10a MovS
	func_149(var_32_cvector, var_99_string); // 0x10b NEW_2
	var_100_int = 535364; // 0x10d PushI
	SetMessage(var_100_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_101_int = 535365; // 0x112 PushI
	var_102_int = -1; // 0x113 PushI
	var_103_int = 37050; // 0x114 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x115 TObjFunc
	var_104_int = 535366; // 0x117 PushI
	var_105_int = -1; // 0x118 PushI
	var_106_int = 37051; // 0x119 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_3_string = 1; // 0x11d TMovB
	var_107_bool = 0; // 0x11e PushV
	func_3328(var_107_bool); // 0x11f NEW_2
	if(var_107_bool == 0) goto Label_293; // 0x121 JumpB
	lshStopAnimation(); // 0x122 Func
	goto Label_295; // 0x124 Jump
	
Label_295:
	return 0; // 0x127 Return
	
Label_293:
	StopAnimation(); // 0x125 Func
	
Label_297:
	return 0; // 0x129 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1cc PushI
	if(var_33_int == 0) goto Label_605; // 0x1cd JumpB
	func_3225(); // 0x1cf NEW_2
	var_35_int = 19193; // 0x1d1 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x1d2 Eq
	if(var_36_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_37_string = ""; // 0x1d4 PushV
	var_37_string = "Neutral"; // 0x1d5 MovS
	func_437(var_32_cvector, var_37_string); // 0x1d6 NEW_2
	var_54_int = 518060; // 0x1d8 PushI
	SetMessage(var_54_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_55_int = 518061; // 0x1dd PushI
	var_56_int = 29781; // 0x1de PushI
	var_57_int = 19194; // 0x1df PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x1e0 TObjFunc
	var_58_int = 528400; // 0x1e2 PushI
	var_59_int = 29777; // 0x1e3 PushI
	var_60_int = 29776; // 0x1e4 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_61_int = 29777; // 0x1e8 PushI
	var_62_bool = var_31_bool == var_61_int; // 0x1e9 Eq
	if(var_62_bool == 0) goto Label_506; // 0x1ea JumpB
	var_63_string = ""; // 0x1eb PushV
	var_63_string = "Neutral"; // 0x1ec MovS
	func_437(var_32_cvector, var_63_string); // 0x1ed NEW_2
	var_64_int = 528401; // 0x1ef PushI
	SetMessage(var_64_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_65_int = 528402; // 0x1f4 PushI
	var_66_int = 29779; // 0x1f5 PushI
	var_67_int = 29778; // 0x1f6 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_68_int = 29779; // 0x1fa PushI
	var_69_bool = var_31_bool == var_68_int; // 0x1fb Eq
	if(var_69_bool == 0) goto Label_524; // 0x1fc JumpB
	var_70_string = ""; // 0x1fd PushV
	var_70_string = "Neutral"; // 0x1fe MovS
	func_437(var_32_cvector, var_70_string); // 0x1ff NEW_2
	var_71_int = 528403; // 0x201 PushI
	SetMessage(var_71_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_72_int = 528404; // 0x206 PushI
	var_73_int = 29781; // 0x207 PushI
	var_74_int = 29780; // 0x208 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_75_int = 29781; // 0x20c PushI
	var_76_bool = var_31_bool == var_75_int; // 0x20d Eq
	if(var_76_bool == 0) goto Label_547; // 0x20e JumpB
	var_77_string = ""; // 0x20f PushV
	var_77_string = "Neutral"; // 0x210 MovS
	func_437(var_32_cvector, var_77_string); // 0x211 NEW_2
	var_78_int = 528405; // 0x213 PushI
	SetMessage(var_78_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_79_int = 528406; // 0x218 PushI
	var_80_int = 29784; // 0x219 PushI
	var_81_int = 29782; // 0x21a PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x21b TObjFunc
	var_82_int = 528407; // 0x21d PushI
	var_83_int = 29786; // 0x21e PushI
	var_84_int = 29783; // 0x21f PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_85_int = 29786; // 0x223 PushI
	var_86_bool = var_31_bool == var_85_int; // 0x224 Eq
	if(var_86_bool == 0) goto Label_570; // 0x225 JumpB
	var_87_string = ""; // 0x226 PushV
	var_87_string = "Neutral"; // 0x227 MovS
	func_437(var_32_cvector, var_87_string); // 0x228 NEW_2
	var_88_int = 528409; // 0x22a PushI
	SetMessage(var_88_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_89_int = 528410; // 0x22f PushI
	var_90_int = 29784; // 0x230 PushI
	var_91_int = 29787; // 0x231 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x232 TObjFunc
	var_92_int = 528411; // 0x234 PushI
	var_93_int = 29784; // 0x235 PushI
	var_94_int = 29788; // 0x236 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_95_int = 29784; // 0x23a PushI
	var_96_bool = var_31_bool == var_95_int; // 0x23b Eq
	if(var_96_bool == 0) goto Label_593; // 0x23c JumpB
	var_97_string = ""; // 0x23d PushV
	var_97_string = "Neutral"; // 0x23e MovS
	func_437(var_32_cvector, var_97_string); // 0x23f NEW_2
	var_98_int = 528408; // 0x241 PushI
	SetMessage(var_98_int); // 0x242 TObjFunc
	ClearReplies(); // 0x244 TObjFunc
	var_99_int = 528412; // 0x246 PushI
	var_100_int = -1; // 0x247 PushI
	var_101_int = 29791; // 0x248 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x249 TObjFunc
	var_102_int = 528413; // 0x24b PushI
	var_103_int = -1; // 0x24c PushI
	var_104_int = 29792; // 0x24d PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x24e TObjFunc
	return 0; // 0x250 Return
	
Label_593:
	var_3_string = 1; // 0x251 TMovB
	var_105_bool = 0; // 0x252 PushV
	func_3328(var_105_bool); // 0x253 NEW_2
	if(var_105_bool == 0) goto Label_601; // 0x255 JumpB
	lshStopAnimation(); // 0x256 Func
	goto Label_603; // 0x258 Jump
	
Label_603:
	return 0; // 0x25b Return
	
Label_601:
	StopAnimation(); // 0x259 Func
	
Label_605:
	return 0; // 0x25d Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x323 PushI
	if(var_33_int == 0) goto Label_1097; // 0x324 JumpB
	func_3225(); // 0x326 NEW_2
	var_35_int = 22198; // 0x328 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x329 Eq
	if(var_36_bool == 0) goto Label_821; // 0x32a JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x32b PushV
	var_37_object = var_1_object; // 0x32c MovT
	var_38_object = var_0_object; // 0x32d MovT
	func_3330(); // 0x32e NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x330 PushV
	var_86_object = var_1_object; // 0x331 MovT
	var_87_object = var_0_object; // 0x332 MovT
	func_3358(); // 0x333 NEW_2
	
Label_821:
	var_112_int = 22409; // 0x335 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x336 Eq
	if(var_113_bool == 0) goto Label_829; // 0x337 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x338 PushV
	var_114_object = var_1_object; // 0x339 MovT
	var_115_object = var_0_object; // 0x33a MovT
	func_3374(); // 0x33b NEW_2
	
Label_829:
	var_145_int = 22412; // 0x33d PushI
	var_146_bool = var_32_cvector == var_145_int; // 0x33e Eq
	if(var_146_bool == 0) goto Label_837; // 0x33f JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x340 PushV
	var_147_object = var_1_object; // 0x341 MovT
	var_148_object = var_0_object; // 0x342 MovT
	func_3395(); // 0x343 NEW_2
	
Label_837:
	var_160_int = 22197; // 0x345 PushI
	var_161_bool = var_31_bool == var_160_int; // 0x346 Eq
	if(var_161_bool == 0) goto Label_895; // 0x347 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x348 PushV
	var_163_object = var_1_object; // 0x349 MovT
	func_3701(var_163_object); // 0x34a NEW_2
	if(var_162_bool == 0) goto Label_860; // 0x34c JumpB
	var_170_string = ""; // 0x34d PushV
	var_170_string = "Rage"; // 0x34e MovS
	func_780(var_32_cvector, var_170_string); // 0x34f NEW_2
	var_187_int = 520984; // 0x351 PushI
	SetMessage(var_187_int); // 0x352 TObjFunc
	ClearReplies(); // 0x354 TObjFunc
	var_188_int = 528518; // 0x356 PushI
	var_189_int = 29911; // 0x357 PushI
	var_190_int = 29910; // 0x358 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x359 TObjFunc
	return 0; // 0x35b Return
	
Label_860:
	var_191_string = ""; // 0x35c PushV
	var_191_string = "Neutral"; // 0x35d MovS
	func_780(var_32_cvector, var_191_string); // 0x35e NEW_2
	var_192_int = 520986; // 0x360 PushI
	SetMessage(var_192_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x365 PushV
	var_194_object = var_1_object; // 0x366 MovT
	func_3545(var_194_object); // 0x367 NEW_2
	if(var_193_bool == 0) goto Label_879; // 0x369 JumpB
	var_199_int = 521209; // 0x36a PushI
	var_200_int = 29920; // 0x36b PushI
	var_201_int = 22405; // 0x36c PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x36d TObjFunc
	
Label_879:
	var_202_bool = 0; var_203_object = Obj(); // 0x36f PushV
	var_203_object = var_1_object; // 0x370 MovT
	func_3557(var_203_object); // 0x371 NEW_2
	if(var_202_bool == 0) goto Label_889; // 0x373 JumpB
	var_208_int = 521216; // 0x374 PushI
	var_209_int = 22411; // 0x375 PushI
	var_210_int = 22410; // 0x376 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x377 TObjFunc
	
Label_889:
	var_211_int = 520987; // 0x379 PushI
	var_212_int = -1; // 0x37a PushI
	var_213_int = 22200; // 0x37b PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x37c TObjFunc
	return 0; // 0x37e Return
	
Label_895:
	var_214_int = 22411; // 0x37f PushI
	var_215_bool = var_31_bool == var_214_int; // 0x380 Eq
	if(var_215_bool == 0) goto Label_913; // 0x381 JumpB
	var_216_string = ""; // 0x382 PushV
	var_216_string = "Rage"; // 0x383 MovS
	func_780(var_32_cvector, var_216_string); // 0x384 NEW_2
	var_217_int = 521217; // 0x386 PushI
	SetMessage(var_217_int); // 0x387 TObjFunc
	ClearReplies(); // 0x389 TObjFunc
	var_218_int = 521218; // 0x38b PushI
	var_219_int = -1; // 0x38c PushI
	var_220_int = 22412; // 0x38d PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x38e TObjFunc
	return 0; // 0x390 Return
	
Label_913:
	var_221_int = 29920; // 0x391 PushI
	var_222_bool = var_31_bool == var_221_int; // 0x392 Eq
	if(var_222_bool == 0) goto Label_931; // 0x393 JumpB
	var_223_string = ""; // 0x394 PushV
	var_223_string = "Rage"; // 0x395 MovS
	func_780(var_32_cvector, var_223_string); // 0x396 NEW_2
	var_224_int = 528528; // 0x398 PushI
	SetMessage(var_224_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_225_int = 528529; // 0x39d PushI
	var_226_int = 29922; // 0x39e PushI
	var_227_int = 29921; // 0x39f PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x3a0 TObjFunc
	return 0; // 0x3a2 Return
	
Label_931:
	var_228_int = 29922; // 0x3a3 PushI
	var_229_bool = var_31_bool == var_228_int; // 0x3a4 Eq
	if(var_229_bool == 0) goto Label_954; // 0x3a5 JumpB
	var_230_string = ""; // 0x3a6 PushV
	var_230_string = "Discontent"; // 0x3a7 MovS
	func_780(var_32_cvector, var_230_string); // 0x3a8 NEW_2
	var_231_int = 528530; // 0x3aa PushI
	SetMessage(var_231_int); // 0x3ab TObjFunc
	ClearReplies(); // 0x3ad TObjFunc
	var_232_int = 528548; // 0x3af PushI
	var_233_int = 29942; // 0x3b0 PushI
	var_234_int = 29940; // 0x3b1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x3b2 TObjFunc
	var_235_int = 528531; // 0x3b4 PushI
	var_236_int = 29924; // 0x3b5 PushI
	var_237_int = 29923; // 0x3b6 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_238_int = 29924; // 0x3ba PushI
	var_239_bool = var_31_bool == var_238_int; // 0x3bb Eq
	if(var_239_bool == 0) goto Label_972; // 0x3bc JumpB
	var_240_string = ""; // 0x3bd PushV
	var_240_string = "Discontent"; // 0x3be MovS
	func_780(var_32_cvector, var_240_string); // 0x3bf NEW_2
	var_241_int = 528532; // 0x3c1 PushI
	SetMessage(var_241_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_242_int = 528533; // 0x3c6 PushI
	var_243_int = 22406; // 0x3c7 PushI
	var_244_int = 29925; // 0x3c8 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x3c9 TObjFunc
	return 0; // 0x3cb Return
	
Label_972:
	var_245_int = 22406; // 0x3cc PushI
	var_246_bool = var_31_bool == var_245_int; // 0x3cd Eq
	if(var_246_bool == 0) goto Label_990; // 0x3ce JumpB
	var_247_string = ""; // 0x3cf PushV
	var_247_string = "Discontent"; // 0x3d0 MovS
	func_780(var_32_cvector, var_247_string); // 0x3d1 NEW_2
	var_248_int = 521210; // 0x3d3 PushI
	SetMessage(var_248_int); // 0x3d4 TObjFunc
	ClearReplies(); // 0x3d6 TObjFunc
	var_249_int = 528549; // 0x3d8 PushI
	var_250_int = 29942; // 0x3d9 PushI
	var_251_int = 29941; // 0x3da PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_252_int = 29942; // 0x3de PushI
	var_253_bool = var_31_bool == var_252_int; // 0x3df Eq
	if(var_253_bool == 0) goto Label_1013; // 0x3e0 JumpB
	var_254_string = ""; // 0x3e1 PushV
	var_254_string = "Discontent"; // 0x3e2 MovS
	func_780(var_32_cvector, var_254_string); // 0x3e3 NEW_2
	var_255_int = 528550; // 0x3e5 PushI
	SetMessage(var_255_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_256_int = 521211; // 0x3ea PushI
	var_257_int = 22408; // 0x3eb PushI
	var_258_int = 22407; // 0x3ec PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x3ed TObjFunc
	var_259_int = 528524; // 0x3ef PushI
	var_260_int = 22408; // 0x3f0 PushI
	var_261_int = 29916; // 0x3f1 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x3f2 TObjFunc
	return 0; // 0x3f4 Return
	
Label_1013:
	var_262_int = 22408; // 0x3f5 PushI
	var_263_bool = var_31_bool == var_262_int; // 0x3f6 Eq
	if(var_263_bool == 0) goto Label_1031; // 0x3f7 JumpB
	var_264_string = ""; // 0x3f8 PushV
	var_264_string = "Discontent"; // 0x3f9 MovS
	func_780(var_32_cvector, var_264_string); // 0x3fa NEW_2
	var_265_int = 521212; // 0x3fc PushI
	SetMessage(var_265_int); // 0x3fd TObjFunc
	ClearReplies(); // 0x3ff TObjFunc
	var_266_int = 521213; // 0x401 PushI
	var_267_int = -1; // 0x402 PushI
	var_268_int = 22409; // 0x403 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x404 TObjFunc
	return 0; // 0x406 Return
	
Label_1031:
	var_269_int = 29911; // 0x407 PushI
	var_270_bool = var_31_bool == var_269_int; // 0x408 Eq
	if(var_270_bool == 0) goto Label_1049; // 0x409 JumpB
	var_271_string = ""; // 0x40a PushV
	var_271_string = "Rage"; // 0x40b MovS
	func_780(var_32_cvector, var_271_string); // 0x40c NEW_2
	var_272_int = 528519; // 0x40e PushI
	SetMessage(var_272_int); // 0x40f TObjFunc
	ClearReplies(); // 0x411 TObjFunc
	var_273_int = 528520; // 0x413 PushI
	var_274_int = 29913; // 0x414 PushI
	var_275_int = 29912; // 0x415 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_276_int = 29913; // 0x419 PushI
	var_277_bool = var_31_bool == var_276_int; // 0x41a Eq
	if(var_277_bool == 0) goto Label_1067; // 0x41b JumpB
	var_278_string = ""; // 0x41c PushV
	var_278_string = "Rage"; // 0x41d MovS
	func_780(var_32_cvector, var_278_string); // 0x41e NEW_2
	var_279_int = 528521; // 0x420 PushI
	SetMessage(var_279_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_280_int = 528522; // 0x425 PushI
	var_281_int = 29915; // 0x426 PushI
	var_282_int = 29914; // 0x427 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_283_int = 29915; // 0x42b PushI
	var_284_bool = var_31_bool == var_283_int; // 0x42c Eq
	if(var_284_bool == 0) goto Label_1085; // 0x42d JumpB
	var_285_string = ""; // 0x42e PushV
	var_285_string = "Rage"; // 0x42f MovS
	func_780(var_32_cvector, var_285_string); // 0x430 NEW_2
	var_286_int = 528523; // 0x432 PushI
	SetMessage(var_286_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_287_int = 520985; // 0x437 PushI
	var_288_int = -1; // 0x438 PushI
	var_289_int = 22198; // 0x439 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x43a TObjFunc
	return 0; // 0x43c Return
	
Label_1085:
	var_3_string = 1; // 0x43d TMovB
	var_290_bool = 0; // 0x43e PushV
	func_3328(var_290_bool); // 0x43f NEW_2
	if(var_290_bool == 0) goto Label_1093; // 0x441 JumpB
	lshStopAnimation(); // 0x442 Func
	goto Label_1095; // 0x444 Jump
	
Label_1095:
	return 0; // 0x447 Return
	
Label_1093:
	StopAnimation(); // 0x445 Func
	
Label_1097:
	return 0; // 0x449 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x505 PushI
	if(var_33_int == 0) goto Label_1828; // 0x506 JumpB
	func_3225(); // 0x508 NEW_2
	var_35_int = 22564; // 0x50a PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x50b Eq
	if(var_36_bool == 0) goto Label_1298; // 0x50c JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x50d PushV
	var_37_object = var_1_object; // 0x50e MovT
	var_38_object = var_0_object; // 0x50f MovT
	func_3405(); // 0x510 NEW_2
	
Label_1298:
	var_70_int = 32575; // 0x512 PushI
	var_71_bool = var_32_cvector == var_70_int; // 0x513 Eq
	if(var_71_bool == 0) goto Label_1306; // 0x514 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x515 PushV
	var_72_object = var_1_object; // 0x516 MovT
	var_73_object = var_0_object; // 0x517 MovT
	func_3529(); // 0x518 NEW_2
	
Label_1306:
	var_85_int = 22594; // 0x51a PushI
	var_86_bool = var_32_cvector == var_85_int; // 0x51b Eq
	if(var_86_bool == 0) goto Label_1314; // 0x51c JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x51d PushV
	var_87_object = var_1_object; // 0x51e MovT
	var_88_object = var_0_object; // 0x51f MovT
	func_3419(); // 0x520 NEW_2
	
Label_1314:
	var_105_int = 22682; // 0x522 PushI
	var_106_bool = var_32_cvector == var_105_int; // 0x523 Eq
	if(var_106_bool == 0) goto Label_1322; // 0x524 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x525 PushV
	var_107_object = var_1_object; // 0x526 MovT
	var_108_object = var_0_object; // 0x527 MovT
	func_3438(); // 0x528 NEW_2
	
Label_1322:
	var_121_int = 22683; // 0x52a PushI
	var_122_bool = var_32_cvector == var_121_int; // 0x52b Eq
	if(var_122_bool == 0) goto Label_1330; // 0x52c JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x52d PushV
	var_123_object = var_1_object; // 0x52e MovT
	var_124_object = var_0_object; // 0x52f MovT
	func_3451(); // 0x530 NEW_2
	
Label_1330:
	var_137_int = 22560; // 0x532 PushI
	var_138_bool = var_31_bool == var_137_int; // 0x533 Eq
	if(var_138_bool == 0) goto Label_1378; // 0x534 JumpB
	var_139_string = ""; // 0x535 PushV
	var_139_string = "Neutral"; // 0x536 MovS
	func_1262(var_32_cvector, var_139_string); // 0x537 NEW_2
	var_156_int = 521382; // 0x539 PushI
	SetMessage(var_156_int); // 0x53a TObjFunc
	ClearReplies(); // 0x53c TObjFunc
	var_157_bool = 0; var_158_object = Obj(); // 0x53e PushV
	var_158_object = var_1_object; // 0x53f MovT
	func_3569(var_158_object); // 0x540 NEW_2
	if(var_157_bool == 0) goto Label_1352; // 0x542 JumpB
	var_165_int = 521383; // 0x543 PushI
	var_166_int = 25136; // 0x544 PushI
	var_167_int = 22561; // 0x545 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x546 TObjFunc
	
Label_1352:
	var_168_bool = 0; var_169_object = Obj(); // 0x548 PushV
	var_169_object = var_1_object; // 0x549 MovT
	func_3581(var_169_object); // 0x54a NEW_2
	if(var_168_bool == 0) goto Label_1362; // 0x54c JumpB
	var_174_int = 521412; // 0x54d PushI
	var_175_int = 22591; // 0x54e PushI
	var_176_int = 22590; // 0x54f PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x550 TObjFunc
	
Label_1362:
	var_177_bool = 0; var_178_object = Obj(); // 0x552 PushV
	var_178_object = var_1_object; // 0x553 MovT
	func_3605(var_178_object); // 0x554 NEW_2
	if(var_177_bool == 0) goto Label_1372; // 0x556 JumpB
	var_183_int = 521519; // 0x557 PushI
	var_184_int = 25119; // 0x558 PushI
	var_185_int = 22680; // 0x559 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x55a TObjFunc
	
Label_1372:
	var_186_int = 521384; // 0x55c PushI
	var_187_int = -1; // 0x55d PushI
	var_188_int = 22562; // 0x55e PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x55f TObjFunc
	return 0; // 0x561 Return
	
Label_1378:
	var_189_int = 25119; // 0x562 PushI
	var_190_bool = var_31_bool == var_189_int; // 0x563 Eq
	if(var_190_bool == 0) goto Label_1401; // 0x564 JumpB
	var_191_string = ""; // 0x565 PushV
	var_191_string = "Rage"; // 0x566 MovS
	func_1262(var_32_cvector, var_191_string); // 0x567 NEW_2
	var_192_int = 523846; // 0x569 PushI
	SetMessage(var_192_int); // 0x56a TObjFunc
	ClearReplies(); // 0x56c TObjFunc
	var_193_int = 523851; // 0x56e PushI
	var_194_int = 25125; // 0x56f PushI
	var_195_int = 25124; // 0x570 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x571 TObjFunc
	var_196_int = 523847; // 0x573 PushI
	var_197_int = 25121; // 0x574 PushI
	var_198_int = 25120; // 0x575 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x576 TObjFunc
	return 0; // 0x578 Return
	
Label_1401:
	var_199_int = 25121; // 0x579 PushI
	var_200_bool = var_31_bool == var_199_int; // 0x57a Eq
	if(var_200_bool == 0) goto Label_1419; // 0x57b JumpB
	var_201_string = ""; // 0x57c PushV
	var_201_string = "Neutral"; // 0x57d MovS
	func_1262(var_32_cvector, var_201_string); // 0x57e NEW_2
	var_202_int = 523848; // 0x580 PushI
	SetMessage(var_202_int); // 0x581 TObjFunc
	ClearReplies(); // 0x583 TObjFunc
	var_203_int = 523855; // 0x585 PushI
	var_204_int = 25123; // 0x586 PushI
	var_205_int = 25128; // 0x587 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x588 TObjFunc
	return 0; // 0x58a Return
	
Label_1419:
	var_206_int = 25125; // 0x58b PushI
	var_207_bool = var_31_bool == var_206_int; // 0x58c Eq
	if(var_207_bool == 0) goto Label_1437; // 0x58d JumpB
	var_208_string = ""; // 0x58e PushV
	var_208_string = "Rage"; // 0x58f MovS
	func_1262(var_32_cvector, var_208_string); // 0x590 NEW_2
	var_209_int = 523852; // 0x592 PushI
	SetMessage(var_209_int); // 0x593 TObjFunc
	ClearReplies(); // 0x595 TObjFunc
	var_210_int = 523853; // 0x597 PushI
	var_211_int = 25127; // 0x598 PushI
	var_212_int = 25126; // 0x599 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x59a TObjFunc
	return 0; // 0x59c Return
	
Label_1437:
	var_213_int = 25127; // 0x59d PushI
	var_214_bool = var_31_bool == var_213_int; // 0x59e Eq
	if(var_214_bool == 0) goto Label_1455; // 0x59f JumpB
	var_215_string = ""; // 0x5a0 PushV
	var_215_string = "Rage"; // 0x5a1 MovS
	func_1262(var_32_cvector, var_215_string); // 0x5a2 NEW_2
	var_216_int = 523854; // 0x5a4 PushI
	SetMessage(var_216_int); // 0x5a5 TObjFunc
	ClearReplies(); // 0x5a7 TObjFunc
	var_217_int = 523849; // 0x5a9 PushI
	var_218_int = 25123; // 0x5aa PushI
	var_219_int = 25122; // 0x5ab PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x5ac TObjFunc
	return 0; // 0x5ae Return
	
Label_1455:
	var_220_int = 25123; // 0x5af PushI
	var_221_bool = var_31_bool == var_220_int; // 0x5b0 Eq
	if(var_221_bool == 0) goto Label_1473; // 0x5b1 JumpB
	var_222_string = ""; // 0x5b2 PushV
	var_222_string = "Neutral"; // 0x5b3 MovS
	func_1262(var_32_cvector, var_222_string); // 0x5b4 NEW_2
	var_223_int = 523850; // 0x5b6 PushI
	SetMessage(var_223_int); // 0x5b7 TObjFunc
	ClearReplies(); // 0x5b9 TObjFunc
	var_224_int = 523856; // 0x5bb PushI
	var_225_int = 22681; // 0x5bc PushI
	var_226_int = 25130; // 0x5bd PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_227_int = 22681; // 0x5c1 PushI
	var_228_bool = var_31_bool == var_227_int; // 0x5c2 Eq
	if(var_228_bool == 0) goto Label_1501; // 0x5c3 JumpB
	var_229_string = ""; // 0x5c4 PushV
	var_229_string = "Neutral"; // 0x5c5 MovS
	func_1262(var_32_cvector, var_229_string); // 0x5c6 NEW_2
	var_230_int = 521520; // 0x5c8 PushI
	SetMessage(var_230_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_231_int = 521521; // 0x5cd PushI
	var_232_int = 25132; // 0x5ce PushI
	var_233_int = 22682; // 0x5cf PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x5d0 TObjFunc
	var_234_int = 521522; // 0x5d2 PushI
	var_235_int = 25134; // 0x5d3 PushI
	var_236_int = 22683; // 0x5d4 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x5d5 TObjFunc
	var_237_int = 523857; // 0x5d7 PushI
	var_238_int = -1; // 0x5d8 PushI
	var_239_int = 25131; // 0x5d9 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x5da TObjFunc
	return 0; // 0x5dc Return
	
Label_1501:
	var_240_int = 25134; // 0x5dd PushI
	var_241_bool = var_31_bool == var_240_int; // 0x5de Eq
	if(var_241_bool == 0) goto Label_1519; // 0x5df JumpB
	var_242_string = ""; // 0x5e0 PushV
	var_242_string = "Neutral"; // 0x5e1 MovS
	func_1262(var_32_cvector, var_242_string); // 0x5e2 NEW_2
	var_243_int = 523860; // 0x5e4 PushI
	SetMessage(var_243_int); // 0x5e5 TObjFunc
	ClearReplies(); // 0x5e7 TObjFunc
	var_244_int = 523861; // 0x5e9 PushI
	var_245_int = -1; // 0x5ea PushI
	var_246_int = 25135; // 0x5eb PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_247_int = 25132; // 0x5ef PushI
	var_248_bool = var_31_bool == var_247_int; // 0x5f0 Eq
	if(var_248_bool == 0) goto Label_1537; // 0x5f1 JumpB
	var_249_string = ""; // 0x5f2 PushV
	var_249_string = "Neutral"; // 0x5f3 MovS
	func_1262(var_32_cvector, var_249_string); // 0x5f4 NEW_2
	var_250_int = 523858; // 0x5f6 PushI
	SetMessage(var_250_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_251_int = 523859; // 0x5fb PushI
	var_252_int = -1; // 0x5fc PushI
	var_253_int = 25133; // 0x5fd PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x5fe TObjFunc
	return 0; // 0x600 Return
	
Label_1537:
	var_254_int = 22591; // 0x601 PushI
	var_255_bool = var_31_bool == var_254_int; // 0x602 Eq
	if(var_255_bool == 0) goto Label_1555; // 0x603 JumpB
	var_256_string = ""; // 0x604 PushV
	var_256_string = "Neutral"; // 0x605 MovS
	func_1262(var_32_cvector, var_256_string); // 0x606 NEW_2
	var_257_int = 521413; // 0x608 PushI
	SetMessage(var_257_int); // 0x609 TObjFunc
	ClearReplies(); // 0x60b TObjFunc
	var_258_int = 523877; // 0x60d PushI
	var_259_int = 25154; // 0x60e PushI
	var_260_int = 25153; // 0x60f PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x610 TObjFunc
	return 0; // 0x612 Return
	
Label_1555:
	var_261_int = 25154; // 0x613 PushI
	var_262_bool = var_31_bool == var_261_int; // 0x614 Eq
	if(var_262_bool == 0) goto Label_1583; // 0x615 JumpB
	var_263_string = ""; // 0x616 PushV
	var_263_string = "Neutral"; // 0x617 MovS
	func_1262(var_32_cvector, var_263_string); // 0x618 NEW_2
	var_264_int = 523878; // 0x61a PushI
	SetMessage(var_264_int); // 0x61b TObjFunc
	ClearReplies(); // 0x61d TObjFunc
	var_265_int = 523879; // 0x61f PushI
	var_266_int = 25162; // 0x620 PushI
	var_267_int = 25155; // 0x621 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x622 TObjFunc
	var_268_int = 523880; // 0x624 PushI
	var_269_int = 25162; // 0x625 PushI
	var_270_int = 25156; // 0x626 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x627 TObjFunc
	var_271_int = 523881; // 0x629 PushI
	var_272_int = 25158; // 0x62a PushI
	var_273_int = 25157; // 0x62b PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x62c TObjFunc
	return 0; // 0x62e Return
	
Label_1583:
	var_274_int = 25158; // 0x62f PushI
	var_275_bool = var_31_bool == var_274_int; // 0x630 Eq
	if(var_275_bool == 0) goto Label_1611; // 0x631 JumpB
	var_276_string = ""; // 0x632 PushV
	var_276_string = "Untrust"; // 0x633 MovS
	func_1262(var_32_cvector, var_276_string); // 0x634 NEW_2
	var_277_int = 523882; // 0x636 PushI
	SetMessage(var_277_int); // 0x637 TObjFunc
	ClearReplies(); // 0x639 TObjFunc
	var_278_int = 523884; // 0x63b PushI
	var_279_int = 25162; // 0x63c PushI
	var_280_int = 25160; // 0x63d PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x63e TObjFunc
	var_281_int = 523883; // 0x640 PushI
	var_282_int = 25163; // 0x641 PushI
	var_283_int = 25159; // 0x642 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x643 TObjFunc
	var_284_int = 523885; // 0x645 PushI
	var_285_int = 25162; // 0x646 PushI
	var_286_int = 25161; // 0x647 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x648 TObjFunc
	return 0; // 0x64a Return
	
Label_1611:
	var_287_int = 25163; // 0x64b PushI
	var_288_bool = var_31_bool == var_287_int; // 0x64c Eq
	if(var_288_bool == 0) goto Label_1629; // 0x64d JumpB
	var_289_string = ""; // 0x64e PushV
	var_289_string = "Discontent"; // 0x64f MovS
	func_1262(var_32_cvector, var_289_string); // 0x650 NEW_2
	var_290_int = 523887; // 0x652 PushI
	SetMessage(var_290_int); // 0x653 TObjFunc
	ClearReplies(); // 0x655 TObjFunc
	var_291_int = 521414; // 0x657 PushI
	var_292_int = 22593; // 0x658 PushI
	var_293_int = 22592; // 0x659 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x65a TObjFunc
	return 0; // 0x65c Return
	
Label_1629:
	var_294_int = 22593; // 0x65d PushI
	var_295_bool = var_31_bool == var_294_int; // 0x65e Eq
	if(var_295_bool == 0) goto Label_1657; // 0x65f JumpB
	var_296_string = ""; // 0x660 PushV
	var_296_string = "Rage"; // 0x661 MovS
	func_1262(var_32_cvector, var_296_string); // 0x662 NEW_2
	var_297_int = 521415; // 0x664 PushI
	SetMessage(var_297_int); // 0x665 TObjFunc
	ClearReplies(); // 0x667 TObjFunc
	var_298_int = 521416; // 0x669 PushI
	var_299_int = -1; // 0x66a PushI
	var_300_int = 22594; // 0x66b PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x66c TObjFunc
	var_301_bool = 0; var_302_object = Obj(); // 0x66e PushV
	var_302_object = var_1_object; // 0x66f MovT
	func_3593(var_302_object); // 0x670 NEW_2
	if(var_301_bool == 0) goto Label_1656; // 0x672 JumpB
	var_307_int = 541573; // 0x673 PushI
	var_308_int = -1; // 0x674 PushI
	var_309_int = 43744; // 0x675 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x676 TObjFunc
	
Label_1656:
	return 0; // 0x678 Return
	
Label_1657:
	var_310_int = 25162; // 0x679 PushI
	var_311_bool = var_31_bool == var_310_int; // 0x67a Eq
	if(var_311_bool == 0) goto Label_1675; // 0x67b JumpB
	var_312_string = ""; // 0x67c PushV
	var_312_string = "Discontent"; // 0x67d MovS
	func_1262(var_32_cvector, var_312_string); // 0x67e NEW_2
	var_313_int = 523886; // 0x680 PushI
	SetMessage(var_313_int); // 0x681 TObjFunc
	ClearReplies(); // 0x683 TObjFunc
	var_314_int = 531259; // 0x685 PushI
	var_315_int = -1; // 0x686 PushI
	var_316_int = 32575; // 0x687 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x688 TObjFunc
	return 0; // 0x68a Return
	
Label_1675:
	var_317_int = 25136; // 0x68b PushI
	var_318_bool = var_31_bool == var_317_int; // 0x68c Eq
	if(var_318_bool == 0) goto Label_1693; // 0x68d JumpB
	var_319_string = ""; // 0x68e PushV
	var_319_string = "Patronage"; // 0x68f MovS
	func_1262(var_32_cvector, var_319_string); // 0x690 NEW_2
	var_320_int = 523862; // 0x692 PushI
	SetMessage(var_320_int); // 0x693 TObjFunc
	ClearReplies(); // 0x695 TObjFunc
	var_321_int = 523863; // 0x697 PushI
	var_322_int = 25138; // 0x698 PushI
	var_323_int = 25137; // 0x699 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x69a TObjFunc
	return 0; // 0x69c Return
	
Label_1693:
	var_324_int = 25138; // 0x69d PushI
	var_325_bool = var_31_bool == var_324_int; // 0x69e Eq
	if(var_325_bool == 0) goto Label_1716; // 0x69f JumpB
	var_326_string = ""; // 0x6a0 PushV
	var_326_string = "Untrust"; // 0x6a1 MovS
	func_1262(var_32_cvector, var_326_string); // 0x6a2 NEW_2
	var_327_int = 523864; // 0x6a4 PushI
	SetMessage(var_327_int); // 0x6a5 TObjFunc
	ClearReplies(); // 0x6a7 TObjFunc
	var_328_int = 523865; // 0x6a9 PushI
	var_329_int = 22563; // 0x6aa PushI
	var_330_int = 25139; // 0x6ab PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x6ac TObjFunc
	var_331_int = 523876; // 0x6ae PushI
	var_332_int = 22563; // 0x6af PushI
	var_333_int = 25151; // 0x6b0 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x6b1 TObjFunc
	return 0; // 0x6b3 Return
	
Label_1716:
	var_334_int = 22563; // 0x6b4 PushI
	var_335_bool = var_31_bool == var_334_int; // 0x6b5 Eq
	if(var_335_bool == 0) goto Label_1734; // 0x6b6 JumpB
	var_336_string = ""; // 0x6b7 PushV
	var_336_string = "Untrust"; // 0x6b8 MovS
	func_1262(var_32_cvector, var_336_string); // 0x6b9 NEW_2
	var_337_int = 521385; // 0x6bb PushI
	SetMessage(var_337_int); // 0x6bc TObjFunc
	ClearReplies(); // 0x6be TObjFunc
	var_338_int = 523866; // 0x6c0 PushI
	var_339_int = 25141; // 0x6c1 PushI
	var_340_int = 25140; // 0x6c2 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_341_int = 25141; // 0x6c6 PushI
	var_342_bool = var_31_bool == var_341_int; // 0x6c7 Eq
	if(var_342_bool == 0) goto Label_1752; // 0x6c8 JumpB
	var_343_string = ""; // 0x6c9 PushV
	var_343_string = "Untrust"; // 0x6ca MovS
	func_1262(var_32_cvector, var_343_string); // 0x6cb NEW_2
	var_344_int = 523867; // 0x6cd PushI
	SetMessage(var_344_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_345_int = 523868; // 0x6d2 PushI
	var_346_int = 25143; // 0x6d3 PushI
	var_347_int = 25142; // 0x6d4 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x6d5 TObjFunc
	return 0; // 0x6d7 Return
	
Label_1752:
	var_348_int = 25143; // 0x6d8 PushI
	var_349_bool = var_31_bool == var_348_int; // 0x6d9 Eq
	if(var_349_bool == 0) goto Label_1775; // 0x6da JumpB
	var_350_string = ""; // 0x6db PushV
	var_350_string = "Neutral"; // 0x6dc MovS
	func_1262(var_32_cvector, var_350_string); // 0x6dd NEW_2
	var_351_int = 523869; // 0x6df PushI
	SetMessage(var_351_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_352_int = 523870; // 0x6e4 PushI
	var_353_int = 25148; // 0x6e5 PushI
	var_354_int = 25144; // 0x6e6 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x6e7 TObjFunc
	var_355_int = 523871; // 0x6e9 PushI
	var_356_int = 25146; // 0x6ea PushI
	var_357_int = 25145; // 0x6eb PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x6ec TObjFunc
	return 0; // 0x6ee Return
	
Label_1775:
	var_358_int = 25146; // 0x6ef PushI
	var_359_bool = var_31_bool == var_358_int; // 0x6f0 Eq
	if(var_359_bool == 0) goto Label_1793; // 0x6f1 JumpB
	var_360_string = ""; // 0x6f2 PushV
	var_360_string = "Neutral"; // 0x6f3 MovS
	func_1262(var_32_cvector, var_360_string); // 0x6f4 NEW_2
	var_361_int = 523872; // 0x6f6 PushI
	SetMessage(var_361_int); // 0x6f7 TObjFunc
	ClearReplies(); // 0x6f9 TObjFunc
	var_362_int = 523873; // 0x6fb PushI
	var_363_int = 25148; // 0x6fc PushI
	var_364_int = 25147; // 0x6fd PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x6fe TObjFunc
	return 0; // 0x700 Return
	
Label_1793:
	var_365_int = 25148; // 0x701 PushI
	var_366_bool = var_31_bool == var_365_int; // 0x702 Eq
	if(var_366_bool == 0) goto Label_1816; // 0x703 JumpB
	var_367_string = ""; // 0x704 PushV
	var_367_string = "Neutral"; // 0x705 MovS
	func_1262(var_32_cvector, var_367_string); // 0x706 NEW_2
	var_368_int = 523874; // 0x708 PushI
	SetMessage(var_368_int); // 0x709 TObjFunc
	ClearReplies(); // 0x70b TObjFunc
	var_369_int = 521386; // 0x70d PushI
	var_370_int = -1; // 0x70e PushI
	var_371_int = 22564; // 0x70f PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x710 TObjFunc
	var_372_int = 523875; // 0x712 PushI
	var_373_int = -1; // 0x713 PushI
	var_374_int = 25150; // 0x714 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x715 TObjFunc
	return 0; // 0x717 Return
	
Label_1816:
	var_3_string = 1; // 0x718 TMovB
	var_375_bool = 0; // 0x719 PushV
	func_3328(var_375_bool); // 0x71a NEW_2
	if(var_375_bool == 0) goto Label_1824; // 0x71c JumpB
	lshStopAnimation(); // 0x71d Func
	goto Label_1826; // 0x71f Jump
	
Label_1826:
	return 0; // 0x722 Return
	
Label_1824:
	StopAnimation(); // 0x720 Func
	
Label_1828:
	return 0; // 0x724 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x813 PushI
	if(var_33_int == 0) goto Label_2464; // 0x814 JumpB
	func_3225(); // 0x816 NEW_2
	var_35_int = 23126; // 0x818 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x819 Eq
	if(var_36_bool == 0) goto Label_2080; // 0x81a JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x81b PushV
	var_37_object = var_1_object; // 0x81c MovT
	var_38_object = var_0_object; // 0x81d MovT
	func_3464(); // 0x81e NEW_2
	
Label_2080:
	var_41_int = 31745; // 0x820 PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x821 Eq
	if(var_42_bool == 0) goto Label_2088; // 0x822 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x823 PushV
	var_43_object = var_1_object; // 0x824 MovT
	var_44_object = var_0_object; // 0x825 MovT
	func_3470(); // 0x826 NEW_2
	
Label_2088:
	var_47_int = 32812; // 0x828 PushI
	var_48_bool = var_32_cvector == var_47_int; // 0x829 Eq
	if(var_48_bool == 0) goto Label_2101; // 0x82a JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0x82b PushV
	var_49_object = var_1_object; // 0x82c MovT
	var_50_object = var_0_object; // 0x82d MovT
	func_3476(); // 0x82e NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x830 PushV
	var_106_object = var_1_object; // 0x831 MovT
	var_107_object = var_0_object; // 0x832 MovT
	func_3507(); // 0x833 NEW_2
	
Label_2101:
	var_132_int = 31750; // 0x835 PushI
	var_133_bool = var_32_cvector == var_132_int; // 0x836 Eq
	if(var_133_bool == 0) goto Label_2114; // 0x837 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x838 PushV
	var_134_object = var_1_object; // 0x839 MovT
	var_135_object = var_0_object; // 0x83a MovT
	func_3476(); // 0x83b NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x83d PushV
	var_136_object = var_1_object; // 0x83e MovT
	var_137_object = var_0_object; // 0x83f MovT
	func_3507(); // 0x840 NEW_2
	
Label_2114:
	var_138_int = 23125; // 0x842 PushI
	var_139_bool = var_31_bool == var_138_int; // 0x843 Eq
	if(var_139_bool == 0) goto Label_2213; // 0x844 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0x845 PushV
	var_140_object = var_1_object; // 0x846 MovT
	var_141_object = var_0_object; // 0x847 MovT
	func_3523(); // 0x848 NEW_2
	var_144_string = ""; // 0x84a PushV
	var_144_string = "Neutral"; // 0x84b MovS
	func_2044(var_32_cvector, var_144_string); // 0x84c NEW_2
	var_161_int = 521951; // 0x84e PushI
	SetMessage(var_161_int); // 0x84f TObjFunc
	ClearReplies(); // 0x851 TObjFunc
	var_162_bool = 0; // 0x853 PushV
	var_162_bool = 1; // 0x854 MovB
	var_163_bool = 0; // 0x855 PushV
	var_163_bool = 0; // 0x856 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x857 PushV
	var_165_object = var_1_object; // 0x858 MovT
	func_3617(var_165_object); // 0x859 NEW_2
	if(var_164_bool == 0) goto Label_2146; // 0x85b JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x85c PushV
	var_173_object = var_1_object; // 0x85d MovT
	func_3641(var_173_object); // 0x85e NEW_2
	if(var_172_bool == 0) goto Label_2146; // 0x860 JumpB
	var_163_bool = 1; // 0x861 MovB
	
Label_2146:
	if(var_163_bool == 0) goto Label_2162; // 0x862 JumpB
	var_178_bool = 0; // 0x863 PushV
	var_178_bool = 0; // 0x864 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x865 PushV
	var_180_object = var_1_object; // 0x866 MovT
	func_3629(var_180_object); // 0x867 NEW_2
	if(var_179_bool == 0) goto Label_2160; // 0x869 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x86a PushV
	var_186_object = var_1_object; // 0x86b MovT
	func_3641(var_186_object); // 0x86c NEW_2
	if(var_185_bool == 0) goto Label_2160; // 0x86e JumpB
	var_178_bool = 1; // 0x86f MovB
	
Label_2160:
	if(var_178_bool == 0) goto Label_2162; // 0x870 JumpB
	var_162_bool = 0; // 0x871 MovB
	
Label_2162:
	if(var_162_bool == 0) goto Label_2168; // 0x872 JumpB
	var_187_int = 521952; // 0x873 PushI
	var_188_int = 23688; // 0x874 PushI
	var_189_int = 23126; // 0x875 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x876 TObjFunc
	
Label_2168:
	var_190_bool = 0; // 0x878 PushV
	var_190_bool = 0; // 0x879 MovB
	var_191_bool = 0; var_192_object = Obj(); // 0x87a PushV
	var_192_object = var_1_object; // 0x87b MovT
	func_3653(var_192_object); // 0x87c NEW_2
	var_197_bool = var_191_bool == 0; // 0x87e Not
	if(var_197_bool == 0) goto Label_2182; // 0x87f JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x880 PushV
	var_199_object = var_1_object; // 0x881 MovT
	func_3665(var_199_object); // 0x882 NEW_2
	if(var_198_bool == 0) goto Label_2182; // 0x884 JumpB
	var_190_bool = 1; // 0x885 MovB
	
Label_2182:
	if(var_190_bool == 0) goto Label_2188; // 0x886 JumpB
	var_204_int = 530373; // 0x887 PushI
	var_205_int = 31746; // 0x888 PushI
	var_206_int = 31745; // 0x889 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x88a TObjFunc
	
Label_2188:
	var_207_bool = 0; // 0x88c PushV
	var_207_bool = 0; // 0x88d MovB
	var_208_bool = 0; var_209_object = Obj(); // 0x88e PushV
	var_209_object = var_1_object; // 0x88f MovT
	func_3653(var_209_object); // 0x890 NEW_2
	if(var_208_bool == 0) goto Label_2201; // 0x892 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x893 PushV
	var_211_object = var_1_object; // 0x894 MovT
	func_3677(var_211_object); // 0x895 NEW_2
	if(var_210_bool == 0) goto Label_2201; // 0x897 JumpB
	var_207_bool = 1; // 0x898 MovB
	
Label_2201:
	if(var_207_bool == 0) goto Label_2207; // 0x899 JumpB
	var_216_int = 530376; // 0x89a PushI
	var_217_int = 31749; // 0x89b PushI
	var_218_int = 31748; // 0x89c PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x89d TObjFunc
	
Label_2207:
	var_219_int = 521955; // 0x89f PushI
	var_220_int = -1; // 0x8a0 PushI
	var_221_int = 23129; // 0x8a1 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x8a2 TObjFunc
	return 0; // 0x8a4 Return
	
Label_2213:
	var_222_int = 31749; // 0x8a5 PushI
	var_223_bool = var_31_bool == var_222_int; // 0x8a6 Eq
	if(var_223_bool == 0) goto Label_2236; // 0x8a7 JumpB
	var_224_string = ""; // 0x8a8 PushV
	var_224_string = "Untrust"; // 0x8a9 MovS
	func_2044(var_32_cvector, var_224_string); // 0x8aa NEW_2
	var_225_int = 530377; // 0x8ac PushI
	SetMessage(var_225_int); // 0x8ad TObjFunc
	ClearReplies(); // 0x8af TObjFunc
	var_226_int = 531437; // 0x8b1 PushI
	var_227_int = 32785; // 0x8b2 PushI
	var_228_int = 32783; // 0x8b3 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x8b4 TObjFunc
	var_229_int = 531438; // 0x8b6 PushI
	var_230_int = -1; // 0x8b7 PushI
	var_231_int = 32784; // 0x8b8 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x8b9 TObjFunc
	return 0; // 0x8bb Return
	
Label_2236:
	var_232_int = 32785; // 0x8bc PushI
	var_233_bool = var_31_bool == var_232_int; // 0x8bd Eq
	if(var_233_bool == 0) goto Label_2259; // 0x8be JumpB
	var_234_string = ""; // 0x8bf PushV
	var_234_string = "Untrust"; // 0x8c0 MovS
	func_2044(var_32_cvector, var_234_string); // 0x8c1 NEW_2
	var_235_int = 531439; // 0x8c3 PushI
	SetMessage(var_235_int); // 0x8c4 TObjFunc
	ClearReplies(); // 0x8c6 TObjFunc
	var_236_int = 531460; // 0x8c8 PushI
	var_237_int = 32811; // 0x8c9 PushI
	var_238_int = 32810; // 0x8ca PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x8cb TObjFunc
	var_239_int = 530378; // 0x8cd PushI
	var_240_int = -1; // 0x8ce PushI
	var_241_int = 31750; // 0x8cf PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x8d0 TObjFunc
	return 0; // 0x8d2 Return
	
Label_2259:
	var_242_int = 32811; // 0x8d3 PushI
	var_243_bool = var_31_bool == var_242_int; // 0x8d4 Eq
	if(var_243_bool == 0) goto Label_2277; // 0x8d5 JumpB
	var_244_string = ""; // 0x8d6 PushV
	var_244_string = "Untrust"; // 0x8d7 MovS
	func_2044(var_32_cvector, var_244_string); // 0x8d8 NEW_2
	var_245_int = 531461; // 0x8da PushI
	SetMessage(var_245_int); // 0x8db TObjFunc
	ClearReplies(); // 0x8dd TObjFunc
	var_246_int = 531462; // 0x8df PushI
	var_247_int = -1; // 0x8e0 PushI
	var_248_int = 32812; // 0x8e1 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x8e2 TObjFunc
	return 0; // 0x8e4 Return
	
Label_2277:
	var_249_int = 31746; // 0x8e5 PushI
	var_250_bool = var_31_bool == var_249_int; // 0x8e6 Eq
	if(var_250_bool == 0) goto Label_2295; // 0x8e7 JumpB
	var_251_string = ""; // 0x8e8 PushV
	var_251_string = "Neutral"; // 0x8e9 MovS
	func_2044(var_32_cvector, var_251_string); // 0x8ea NEW_2
	var_252_int = 530374; // 0x8ec PushI
	SetMessage(var_252_int); // 0x8ed TObjFunc
	ClearReplies(); // 0x8ef TObjFunc
	var_253_int = 530375; // 0x8f1 PushI
	var_254_int = -1; // 0x8f2 PushI
	var_255_int = 31747; // 0x8f3 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x8f4 TObjFunc
	return 0; // 0x8f6 Return
	
Label_2295:
	var_256_int = 23688; // 0x8f7 PushI
	var_257_bool = var_31_bool == var_256_int; // 0x8f8 Eq
	if(var_257_bool == 0) goto Label_2318; // 0x8f9 JumpB
	var_258_string = ""; // 0x8fa PushV
	var_258_string = "Patronage"; // 0x8fb MovS
	func_2044(var_32_cvector, var_258_string); // 0x8fc NEW_2
	var_259_int = 522512; // 0x8fe PushI
	SetMessage(var_259_int); // 0x8ff TObjFunc
	ClearReplies(); // 0x901 TObjFunc
	var_260_int = 522513; // 0x903 PushI
	var_261_int = 23690; // 0x904 PushI
	var_262_int = 23689; // 0x905 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x906 TObjFunc
	var_263_int = 522525; // 0x908 PushI
	var_264_int = 23702; // 0x909 PushI
	var_265_int = 23701; // 0x90a PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x90b TObjFunc
	return 0; // 0x90d Return
	
Label_2318:
	var_266_int = 23702; // 0x90e PushI
	var_267_bool = var_31_bool == var_266_int; // 0x90f Eq
	if(var_267_bool == 0) goto Label_2336; // 0x910 JumpB
	var_268_string = ""; // 0x911 PushV
	var_268_string = "Neutral"; // 0x912 MovS
	func_2044(var_32_cvector, var_268_string); // 0x913 NEW_2
	var_269_int = 522526; // 0x915 PushI
	SetMessage(var_269_int); // 0x916 TObjFunc
	ClearReplies(); // 0x918 TObjFunc
	var_270_int = 522527; // 0x91a PushI
	var_271_int = 23692; // 0x91b PushI
	var_272_int = 23703; // 0x91c PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x91d TObjFunc
	return 0; // 0x91f Return
	
Label_2336:
	var_273_int = 23690; // 0x920 PushI
	var_274_bool = var_31_bool == var_273_int; // 0x921 Eq
	if(var_274_bool == 0) goto Label_2354; // 0x922 JumpB
	var_275_string = ""; // 0x923 PushV
	var_275_string = "Patronage"; // 0x924 MovS
	func_2044(var_32_cvector, var_275_string); // 0x925 NEW_2
	var_276_int = 522514; // 0x927 PushI
	SetMessage(var_276_int); // 0x928 TObjFunc
	ClearReplies(); // 0x92a TObjFunc
	var_277_int = 522515; // 0x92c PushI
	var_278_int = 23692; // 0x92d PushI
	var_279_int = 23691; // 0x92e PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x92f TObjFunc
	return 0; // 0x931 Return
	
Label_2354:
	var_280_int = 23692; // 0x932 PushI
	var_281_bool = var_31_bool == var_280_int; // 0x933 Eq
	if(var_281_bool == 0) goto Label_2372; // 0x934 JumpB
	var_282_string = ""; // 0x935 PushV
	var_282_string = "Rage"; // 0x936 MovS
	func_2044(var_32_cvector, var_282_string); // 0x937 NEW_2
	var_283_int = 522516; // 0x939 PushI
	SetMessage(var_283_int); // 0x93a TObjFunc
	ClearReplies(); // 0x93c TObjFunc
	var_284_int = 522517; // 0x93e PushI
	var_285_int = 23694; // 0x93f PushI
	var_286_int = 23693; // 0x940 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x941 TObjFunc
	return 0; // 0x943 Return
	
Label_2372:
	var_287_int = 23706; // 0x944 PushI
	var_288_bool = var_31_bool == var_287_int; // 0x945 Eq
	if(var_288_bool == 0) goto Label_2375; // 0x946 JumpB
	
Label_2375:
	var_289_int = 23709; // 0x947 PushI
	var_290_bool = var_31_bool == var_289_int; // 0x948 Eq
	if(var_290_bool == 0) goto Label_2393; // 0x949 JumpB
	var_291_string = ""; // 0x94a PushV
	var_291_string = "Neutral"; // 0x94b MovS
	func_2044(var_32_cvector, var_291_string); // 0x94c NEW_2
	var_292_int = 522531; // 0x94e PushI
	SetMessage(var_292_int); // 0x94f TObjFunc
	ClearReplies(); // 0x951 TObjFunc
	var_293_int = 522532; // 0x953 PushI
	var_294_int = 23694; // 0x954 PushI
	var_295_int = 23710; // 0x955 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x956 TObjFunc
	return 0; // 0x958 Return
	
Label_2393:
	var_296_int = 23694; // 0x959 PushI
	var_297_bool = var_31_bool == var_296_int; // 0x95a Eq
	if(var_297_bool == 0) goto Label_2411; // 0x95b JumpB
	var_298_string = ""; // 0x95c PushV
	var_298_string = "Rage"; // 0x95d MovS
	func_2044(var_32_cvector, var_298_string); // 0x95e NEW_2
	var_299_int = 522518; // 0x960 PushI
	SetMessage(var_299_int); // 0x961 TObjFunc
	ClearReplies(); // 0x963 TObjFunc
	var_300_int = 522519; // 0x965 PushI
	var_301_int = 23696; // 0x966 PushI
	var_302_int = 23695; // 0x967 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x968 TObjFunc
	return 0; // 0x96a Return
	
Label_2411:
	var_303_int = 23696; // 0x96b PushI
	var_304_bool = var_31_bool == var_303_int; // 0x96c Eq
	if(var_304_bool == 0) goto Label_2434; // 0x96d JumpB
	var_305_string = ""; // 0x96e PushV
	var_305_string = "Neutral"; // 0x96f MovS
	func_2044(var_32_cvector, var_305_string); // 0x970 NEW_2
	var_306_int = 522520; // 0x972 PushI
	SetMessage(var_306_int); // 0x973 TObjFunc
	ClearReplies(); // 0x975 TObjFunc
	var_307_int = 522521; // 0x977 PushI
	var_308_int = -1; // 0x978 PushI
	var_309_int = 23697; // 0x979 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x97a TObjFunc
	var_310_int = 522522; // 0x97c PushI
	var_311_int = 23699; // 0x97d PushI
	var_312_int = 23698; // 0x97e PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x97f TObjFunc
	return 0; // 0x981 Return
	
Label_2434:
	var_313_int = 23699; // 0x982 PushI
	var_314_bool = var_31_bool == var_313_int; // 0x983 Eq
	if(var_314_bool == 0) goto Label_2452; // 0x984 JumpB
	var_315_string = ""; // 0x985 PushV
	var_315_string = "Neutral"; // 0x986 MovS
	func_2044(var_32_cvector, var_315_string); // 0x987 NEW_2
	var_316_int = 522523; // 0x989 PushI
	SetMessage(var_316_int); // 0x98a TObjFunc
	ClearReplies(); // 0x98c TObjFunc
	var_317_int = 522524; // 0x98e PushI
	var_318_int = -1; // 0x98f PushI
	var_319_int = 23700; // 0x990 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x991 TObjFunc
	return 0; // 0x993 Return
	
Label_2452:
	var_3_string = 1; // 0x994 TMovB
	var_320_bool = 0; // 0x995 PushV
	func_3328(var_320_bool); // 0x996 NEW_2
	if(var_320_bool == 0) goto Label_2460; // 0x998 JumpB
	lshStopAnimation(); // 0x999 Func
	goto Label_2462; // 0x99b Jump
	
Label_2462:
	return 0; // 0x99e Return
	
Label_2460:
	StopAnimation(); // 0x99c Func
	
Label_2464:
	return 0; // 0x9a0 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0xa43 PushI
	if(var_33_int == 0) goto Label_2667; // 0xa44 JumpB
	func_3225(); // 0xa46 NEW_2
	var_35_int = 42560; // 0xa48 PushI
	var_36_bool = var_31_int == var_35_int; // 0xa49 Eq
	if(var_36_bool == 0) goto Label_2655; // 0xa4a JumpB
	var_37_string = ""; // 0xa4b PushV
	var_37_string = "Neutral"; // 0xa4c MovS
	func_2604(var_32_cvector, var_37_string); // 0xa4d NEW_2
	var_54_int = 540551; // 0xa4f PushI
	SetMessage(var_54_int); // 0xa50 TObjFunc
	ClearReplies(); // 0xa52 TObjFunc
	var_55_int = 540552; // 0xa54 PushI
	var_56_int = -1; // 0xa55 PushI
	var_57_int = 42561; // 0xa56 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xa57 TObjFunc
	var_58_int = 540795; // 0xa59 PushI
	var_59_int = -1; // 0xa5a PushI
	var_60_int = 42844; // 0xa5b PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xa5c TObjFunc
	return 0; // 0xa5e Return
	
Label_2655:
	var_3_string = 1; // 0xa5f TMovB
	var_61_bool = 0; // 0xa60 PushV
	func_3328(var_61_bool); // 0xa61 NEW_2
	if(var_61_bool == 0) goto Label_2663; // 0xa63 JumpB
	lshStopAnimation(); // 0xa64 Func
	goto Label_2665; // 0xa66 Jump
	
Label_2665:
	return 0; // 0xa69 Return
	
Label_2663:
	StopAnimation(); // 0xa67 Func
	
Label_2667:
	return 0; // 0xa6b Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0xab6 PushI
	var_33_bool = var_31_int == var_32_int; // 0xab7 Eq
	if(var_33_bool == 0) goto Label_2778; // 0xab8 JumpB
	func_2737(); // 0xaba NEW_2
	var_35_bool = 0; // 0xabc PushV
	var_35_bool = 0; // 0xabd MovB
	var_36_bool = 0; // 0xabe PushV
	func_2951(var_36_bool); // 0xabf NEW_2
	if(var_36_bool == 0) goto Label_2759; // 0xac1 JumpB
	var_39_bool = 0; // 0xac2 PushV
	func_2706(var_39_bool); // 0xac3 NEW_2
	if(var_39_bool == 0) goto Label_2759; // 0xac5 JumpB
	var_35_bool = 1; // 0xac6 MovB
	
Label_2759:
	if(var_35_bool == 0) goto Label_2772; // 0xac7 JumpB
	var_56_bool = 0; // 0xac8 PushV
	func_2686(var_56_bool); // 0xac9 NEW_2
	if(var_56_bool == 0) goto Label_2771; // 0xacb JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xacc PushV
	var_77_object = Obj(); // 0xacd PushV
	func_3232(var_77_object); // 0xace NEW_2
	var_76_object = var_77_object; // 0xacf Mov
	func_3099(var_76_object); // 0xad1 NEW_2
	
Label_2771:
	goto Label_2778; // 0xad3 Jump
	
Label_2778:
	return 0; // 0xada Return
	
Label_2772:
	func_2701(var_31_int); // 0xad5 NEW_2
	func_2728(); // 0xad8 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2919(); // 0xadc NEW_2
	func_2737(); // 0xadf NEW_2
	lshStopSpeech(); // 0xae1 Func
	lshStopAnimation(); // 0xae3 Func
	StopAsync(); // 0xae5 Func
	Hold(); // 0xae7 Func
	return 0; // 0xae9 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0xaea Func
	func_2737(); // 0xaed NEW_2
	var_32_string = ""; // 0xaef PushV
	var_32_string = "Neutral"; // 0xaf0 MovS
	func_3179(var_32_string); // 0xaf1 NEW_2
	func_2728(); // 0xaf4 NEW_2
	return 0; // 0xaf6 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0xaf8 Push
	if(var_32_bool == 0) goto Label_2814; // 0xaf9 JumpB
	func_2728(); // 0xafb NEW_2
	goto Label_2818; // 0xafd Jump
	
Label_2818:
	return 0; // 0xb02 Return
	
Label_2814:
	var_38_string = ""; // 0xafe PushV
	var_38_string = "Neutral"; // 0xaff MovS
	func_3179(var_38_string); // 0xb00 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0xb03 PushV
	IsOverrideActive(var_33_bool); // 0xb04 Func
	var_34_bool = var_33_bool == 0; // 0xb06 Not
	if(var_34_bool == 0) goto Label_2847; // 0xb07 JumpB
	EventDisable(0); // 0xb08 EventDisable
	func_2919(); // 0xb0a NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0xb0c PushV
	var_36_object = var_31_object; // 0xb0d Mov
	func_2942(var_36_object); // 0xb0e NEW_2
	EventEnable(0); // 0xb10 EventEnable
	var_49_object = Obj(); // 0xb11 PushV
	var_49_object = var_31_object; // 0xb12 Mov
	func_3964(var_49_object); // 0xb13 NEW_2
	var_685_string = ""; // 0xb15 PushV
	var_685_string = "Neutral"; // 0xb16 MovS
	func_3179(var_685_string); // 0xb17 NEW_2
	func_2737(); // 0xb1a NEW_2
	func_2728(); // 0xb1d NEW_2
	
Label_2847:
	return 2; // 0xb1f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2672(var_30_cvector); // 0xa6d NEW_2
	return 0; // 0xa6f Return
}


func_0(var_0_object, var_564_int, var_565_object)
{
	var_567_object = Obj(); var_568_bool = 0; var_569_int = 0; var_570_bool = 0; var_571_object = Obj(); var_572_bool = 0; var_573_int = 0; var_574_bool = 0; // 0x0 PushV
	var_0_object = var_565_object; // 0x1 TMov
	var_575_bool = 0; var_576_object = Obj(); var_577_float = 0; // 0x2 PushV
	var_576_object = var_565_object; // 0x3 Mov
	var_577_float = 70.0; // 0x4 MovF
	func_2956(var_576_object, var_577_float); // 0x5 NEW_2
	var_578_bool = var_575_bool == 0; // 0x7 Not
	if(var_578_bool == 0) goto Label_11; // 0x8 JumpB
	var_564_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_571_object); // 0xb Func
	var_579_int = 0; // 0xd PushV
	func_3322(var_579_int); // 0xe NEW_2
	SetNPCName(var_579_int); // 0x10 ObjFunc
	var_580_int = 0; // 0x12 PushV
	func_3320(var_580_int); // 0x13 NEW_2
	SetNPCDescription(var_580_int); // 0x15 ObjFunc
	var_581_string = ""; // 0x17 PushV
	func_3324(var_581_string); // 0x18 NEW_2
	SetPhoto(var_581_string); // 0x1a ObjFunc
	var_582_string = ""; // 0x1c PushV
	func_3326(var_582_string); // 0x1d NEW_2
	SetPhoto2(var_582_string); // 0x1f ObjFunc
	var_583_int = 0; // 0x21 PushV
	func_3947(var_583_int); // 0x22 NEW_2
	SetPlayerName(var_583_int); // 0x24 ObjFunc
	var_573_int = -1; // 0x26 MovI
	IsOverrideActive(var_572_bool); // 0x27 Func
	var_584_bool = var_572_bool; // 0x29 Push
	if(var_584_bool == 0) goto Label_45; // 0x2a JumpB
	var_564_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_571_object); // 0x2d Func
	var_585_bool = 0; var_586_object = Obj(); // 0x2f PushV
	var_587_object = Obj(); // 0x30 PushV
	func_3232(var_587_object); // 0x31 NEW_2
	var_586_object = var_587_object; // 0x32 Mov
	func_3041(var_585_bool, var_586_object); // 0x34 NEW_2
	var_588_object = Obj(); var_589_object = Obj(); // 0x36 PushV
	var_588_object = var_565_object; // 0x37 Mov
	var_589_object = var_571_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_590_object, var_591_object, var_592_string, var_593_bool, var_588_object, var_589_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_574_bool); // 0x3d ObjFunc
	
Label_63:
	var_627_bool = var_574_bool == 0; // 0x3f Not
	if(var_627_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_574_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_628_object = Obj(); // 0x46 PushV
	var_628_object = var_565_object; // 0x47 Mov
	func_3024(); // 0x48 NEW_2
	StopDialog(var_571_object); // 0x4a Func
	GetReturnValue(var_573_int); // 0x4c ObjFunc
	var_564_int = var_573_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3328(var_107_bool)
{
	var_107_bool = 1; // 0xd00 MovB
	return 0; // 0xd01 Return
}


func_3330()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xd02 PushV
	var_41_string = "b7q01"; // 0xd03 PushS
	var_42_int = 3; // 0xd04 PushI
	SetVariable(var_41_string, var_42_int); // 0xd05 Func
	var_43_object = Obj(); // 0xd07 PushV
	func_3897(var_43_object); // 0xd08 NEW_2
	var_40_object = var_43_object; // 0xd09 Mov
	var_50_string = "b7q01MatGotoPrison"; // 0xd0b PushS
	var_51_string = "pt_map_uprava_prison"; // 0xd0c PushS
	var_52_int = 1; // 0xd0d PushI
	var_53_int = 521024; // 0xd0e PushI
	var_54_float = 0; // 0xd0f PushV
	func_3276(var_54_float); // 0xd10 NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xd12 ObjFunc
	func_3739(); // 0xd15 NEW_2
	var_80_bool = 0; var_81_string = ""; var_82_string = ""; // 0xd17 PushV
	var_81_string = "quest_b7_01"; // 0xd18 MovS
	var_82_string = "init_prison"; // 0xd19 MovS
	func_3264(var_80_bool, var_81_string, var_82_string); // 0xd1a NEW_2
	return 2; // 0xd1c Return
}


func_3843()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xf03 PushV
	var_131_int = 579; // 0xf04 PushI
	var_132_int = 2; // 0xf05 PushI
	var_133_int = 530659; // 0xf06 PushI
	CreateDiaryEntry(var_130_object, var_131_int, var_132_int, var_133_int); // 0xf07 Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0xf09 PushV
	var_135_object = var_130_object; // 0xf0a Mov
	var_136_int = 575; // 0xf0b MovI
	func_3869(var_134_bool, var_135_object, var_136_int); // 0xf0c NEW_2
	return 2; // 0xf0e Return
}


func_3593(var_301_bool)
{
	var_303_int = 0; var_304_string = ""; // 0xe0a PushV
	var_304_string = "b8q01"; // 0xe0b MovS
	func_3248(var_303_int, var_304_string); // 0xe0c NEW_2
	var_305_int = 4; // 0xe0e PushI
	var_306_bool = var_303_int == var_305_int; // 0xe0f Eq
	if(var_306_bool == 0) goto Label_3603; // 0xe10 JumpB
	var_301_bool = 1; // 0xe11 MovB
	return 0; // 0xe12 Return
	
Label_3603:
	var_301_bool = 0; // 0xe13 MovB
	return 0; // 0xe14 Return
}


func_780(var_2_object, var_321_string)
{
	var_322_bool = 0; // 0x30d PushV
	func_3328(var_322_bool); // 0x30e NEW_2
	var_323_bool = var_322_bool == 0; // 0x310 Not
	if(var_323_bool == 0) goto Label_787; // 0x311 JumpB
	return 0; // 0x312 Return
	
Label_787:
	var_324_bool = var_321_string == var_2_object; // 0x313 Eq
	if(var_324_bool == 0) goto Label_790; // 0x314 JumpB
	return 0; // 0x315 Return
	
Label_790:
	var_325_string = ""; var_326_bool = 0; // 0x316 PushV
	var_325_string = var_321_string; // 0x317 Mov
	var_327_string = ""; // 0x318 PushS
	var_328_bool = var_321_string == var_327_string; // 0x319 Eq
	if(var_328_bool == 0) goto Label_797; // 0x31a JumpB
	var_326_bool = 0; // 0x31b MovB
	goto Label_798; // 0x31c Jump
	
Label_798:
	func_3195(var_325_string, var_326_bool); // 0x31e NEW_2
	var_2_object = var_321_string; // 0x320 TMov
	return 0; // 0x321 Return
	
Label_797:
	var_326_bool = 1; // 0x31d MovB
}


func_3856(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0xf10 PushV
	GetDiaryRoot(var_85_object); // 0xf11 Func
	var_86_bool = var_85_object == 0; // 0xf13 Not
	if(var_86_bool == 0) goto Label_3866; // 0xf14 JumpB
	var_87_string = "Can't retrieve diary root"; // 0xf15 PushS
	Trace(var_87_string); // 0xf16 Func
	var_83_object = 0; // 0xf18 MovB
	return 2; // 0xf19 Return
	
Label_3866:
	var_83_object = var_85_object; // 0xf1a Mov
	return 2; // 0xf1b Return
}


func_3605(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0xe16 PushV
	var_429_string = "b8q03"; // 0xe17 MovS
	func_3248(var_428_int, var_429_string); // 0xe18 NEW_2
	var_430_int = 2; // 0xe1a PushI
	var_431_bool = var_428_int == var_430_int; // 0xe1b Eq
	if(var_431_bool == 0) goto Label_3615; // 0xe1c JumpB
	var_426_bool = 1; // 0xe1d MovB
	return 0; // 0xe1e Return
	
Label_3615:
	var_426_bool = 0; // 0xe1f MovB
	return 0; // 0xe20 Return
}


func_3099(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0xc1b PushV
	var_143_string = "c"; // 0xc1c MovS
	var_144_int = 0; // 0xc1d MovI
	
Label_3102:
	var_148_int = 1; // 0xc1e PushI
	if(var_148_int == 0) goto Label_3115; // 0xc1f JumpB
	var_149_int = 1; // 0xc20 PushI
	var_150_int = var_144_int + var_149_int; // 0xc21 Add
	var_151_int = var_143_string + var_150_int; // 0xc22 Add
	HasProperty(var_151_int, var_145_bool); // 0xc23 ObjFunc
	var_152_bool = var_145_bool == 0; // 0xc25 Not
	if(var_152_bool == 0) goto Label_3112; // 0xc26 JumpB
	goto Label_3115; // 0xc27 Jump
	
Label_3115:
	var_153_bool = var_144_int == 0; // 0xc2b Not
	if(var_153_bool == 0) goto Label_3119; // 0xc2c JumpB
	var_136_bool = 0; // 0xc2d MovB
	return 10; // 0xc2e Return
	
Label_3119:
	var_146_int = 0; // 0xc2f MovI
	var_154_int = 1; // 0xc30 PushI
	var_155_bool = var_144_int > var_154_int; // 0xc31 GT
	if(var_155_bool == 0) goto Label_3125; // 0xc32 JumpB
	irand(var_146_int, var_144_int); // 0xc33 Func
	
Label_3125:
	var_156_int = 1; // 0xc35 PushI
	var_157_int = var_146_int + var_156_int; // 0xc36 Add
	var_158_int = var_143_string + var_157_int; // 0xc37 Add
	GetProperty(var_158_int, var_147_string); // 0xc38 ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xc3a PushV
	var_160_string = var_147_string; // 0xc3b Mov
	func_3210(var_159_bool, var_160_string); // 0xc3c NEW_2
	var_136_bool = var_159_bool; // 0xc3d Mov
	return 10; // 0xc3f Return
	
Label_3112:
	var_165_int = 1; // 0xc28 PushI
	var_144_int = var_144_int + var_165_int; // 0xc29 Add2
	goto Label_3102; // 0xc2a Jump
}


func_3869(var_74_bool, var_75_object, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0; var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; // 0xf1d PushV
	var_83_object = Obj(); // 0xf1e PushV
	func_3856(var_83_object); // 0xf1f NEW_2
	var_80_object = var_83_object; // 0xf20 Mov
	Find(var_76_int, var_81_object); // 0xf22 ObjFunc
	var_88_bool = var_81_object == 0; // 0xf24 Not
	if(var_88_bool == 0) goto Label_3884; // 0xf25 JumpB
	var_89_string = "Can't find diary parent with id: "; // 0xf26 PushS
	var_90_int = var_89_string + var_76_int; // 0xf27 Add
	Trace(var_90_int); // 0xf28 Func
	var_74_bool = 0; // 0xf2a MovB
	return 6; // 0xf2b Return
	
Label_3884:
	AddChild(var_75_object); // 0xf2c ObjFunc
	var_91_int = 7; // 0xf2e PushI
	SendWorldWndMessage(var_91_int); // 0xf2f Func
	GetCategory(var_82_int); // 0xf31 ObjFunc
	SetDiarySection(var_82_int); // 0xf33 Func
	var_74_bool = 0; // 0xf35 MovB
	return 6; // 0xf36 Return
}


func_3358()
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0; // 0xd1f PushV
	var_91_object = Obj(); // 0xd20 PushV
	func_3897(var_91_object); // 0xd21 NEW_2
	var_88_object = var_91_object; // 0xd22 Mov
	var_89_string = "pt_map_uprava_prison"; // 0xd24 MovS
	var_90_float = 2; // 0xd25 MovI
	func_3914(var_88_object, var_89_string, var_90_float); // 0xd26 NEW_2
	var_111_object = Obj(); // 0xd28 PushV
	func_3897(var_111_object); // 0xd29 NEW_2
	ShowMap(var_111_object); // 0xd2b ObjFunc
	return 0; // 0xd2d Return
}


func_2848()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0xb20 PushV
	WaitForAnimEnd(); // 0xb21 Func
	var_47_bool = 0; // 0xb23 PushV
	func_2951(var_47_bool); // 0xb24 NEW_2
	var_48_bool = var_47_bool == 0; // 0xb26 Not
	if(var_48_bool == 0) goto Label_2857; // 0xb27 JumpB
	return 12; // 0xb28 Return
	
Label_2857:
	var_49_int = 0; // 0xb29 PushV
	func_3303(var_49_int); // 0xb2a NEW_2
	var_41_int = var_49_int; // 0xb2b Mov
	var_42_int = 0; // 0xb2d MovI
	
Label_2862:
	var_62_bool = 0; // 0xb2e PushV
	var_62_bool = 0; // 0xb2f MovB
	var_63_int = 5; // 0xb30 PushI
	var_64_bool = var_42_int < var_63_int; // 0xb31 LT
	if(var_64_bool == 0) goto Label_2872; // 0xb32 JumpB
	var_65_bool = 0; // 0xb33 PushV
	func_2951(var_65_bool); // 0xb34 NEW_2
	if(var_65_bool == 0) goto Label_2872; // 0xb36 JumpB
	var_62_bool = 1; // 0xb37 MovB
	
Label_2872:
	if(var_62_bool == 0) goto Label_2914; // 0xb38 JumpB
	var_66_bool = var_41_int == 0; // 0xb39 Not
	if(var_66_bool == 0) goto Label_2882; // 0xb3a JumpB
	var_67_int = 3; // 0xb3b PushI
	Sleep(var_67_int, var_43_bool); // 0xb3c Func
	var_68_bool = var_43_bool == 0; // 0xb3e Not
	if(var_68_bool == 0) goto Label_2881; // 0xb3f JumpB
	goto Label_2914; // 0xb40 Jump
	
Label_2914:
	ResetAAS(); // 0xb62 Func
	return 12; // 0xb64 Return
	
Label_2881:
	goto Label_2903; // 0xb41 Jump
	
Label_2903:
	var_69_bool = 0; // 0xb57 PushV
	func_2917(var_69_bool); // 0xb58 NEW_2
	var_70_bool = var_69_bool == 0; // 0xb5a Not
	if(var_70_bool == 0) goto Label_2909; // 0xb5b JumpB
	goto Label_2914; // 0xb5c Jump
	
Label_2909:
	ResetAAS(); // 0xb5d Func
	var_71_int = 1; // 0xb5f PushI
	var_42_int = var_42_int + var_71_int; // 0xb60 Add2
	goto Label_2862; // 0xb61 Jump
	
Label_2882:
	irand(var_44_int, var_41_int); // 0xb42 Func
	var_72_int = 5; // 0xb44 PushI
	irand(var_45_int, var_72_int); // 0xb45 Func
	var_73_int = 0; // 0xb47 PushI
	var_74_bool = var_45_int != var_73_int; // 0xb48 Neq
	if(var_74_bool == 0) goto Label_2891; // 0xb49 JumpB
	var_44_int = 0; // 0xb4a MovI
	
Label_2891:
	var_75_string = "all"; // 0xb4b PushS
	var_76_string = ""; var_77_int = 0; // 0xb4c PushV
	var_77_int = var_44_int; // 0xb4d Mov
	func_3296(var_76_string, var_77_int); // 0xb4e NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0xb50 Func
	WaitForAnimEnd(var_46_bool); // 0xb52 Func
	var_78_bool = var_46_bool == 0; // 0xb54 Not
	if(var_78_bool == 0) goto Label_2903; // 0xb55 JumpB
	goto Label_2914; // 0xb56 Jump
}


func_3617(var_496_bool)
{
	var_498_int = 0; var_499_string = ""; // 0xe22 PushV
	var_499_string = "b10q01"; // 0xe23 MovS
	func_3248(var_498_int, var_499_string); // 0xe24 NEW_2
	var_500_int = 4; // 0xe26 PushI
	var_501_bool = var_498_int == var_500_int; // 0xe27 Eq
	if(var_501_bool == 0) goto Label_3627; // 0xe28 JumpB
	var_496_bool = 1; // 0xe29 MovB
	return 0; // 0xe2a Return
	
Label_3627:
	var_496_bool = 0; // 0xe2b MovB
	return 0; // 0xe2c Return
}


func_1829(var_0_object, var_450_int, var_451_object)
{
	var_453_object = Obj(); var_454_bool = 0; var_455_int = 0; var_456_bool = 0; var_457_object = Obj(); var_458_bool = 0; var_459_int = 0; var_460_bool = 0; // 0x725 PushV
	var_0_object = var_451_object; // 0x726 TMov
	var_461_bool = 0; var_462_object = Obj(); var_463_float = 0; // 0x727 PushV
	var_462_object = var_451_object; // 0x728 Mov
	var_463_float = 70.0; // 0x729 MovF
	func_2956(var_462_object, var_463_float); // 0x72a NEW_2
	var_464_bool = var_461_bool == 0; // 0x72c Not
	if(var_464_bool == 0) goto Label_1840; // 0x72d JumpB
	var_450_int = -2; // 0x72e MovI
	return 8; // 0x72f Return
	
Label_1840:
	CreateDialog(var_457_object); // 0x730 Func
	var_465_int = 0; // 0x732 PushV
	func_3322(var_465_int); // 0x733 NEW_2
	SetNPCName(var_465_int); // 0x735 ObjFunc
	var_466_int = 0; // 0x737 PushV
	func_3320(var_466_int); // 0x738 NEW_2
	SetNPCDescription(var_466_int); // 0x73a ObjFunc
	var_467_string = ""; // 0x73c PushV
	func_3324(var_467_string); // 0x73d NEW_2
	SetPhoto(var_467_string); // 0x73f ObjFunc
	var_468_string = ""; // 0x741 PushV
	func_3326(var_468_string); // 0x742 NEW_2
	SetPhoto2(var_468_string); // 0x744 ObjFunc
	var_469_int = 0; // 0x746 PushV
	func_3947(var_469_int); // 0x747 NEW_2
	SetPlayerName(var_469_int); // 0x749 ObjFunc
	var_459_int = -1; // 0x74b MovI
	IsOverrideActive(var_458_bool); // 0x74c Func
	var_470_bool = var_458_bool; // 0x74e Push
	if(var_470_bool == 0) goto Label_1874; // 0x74f JumpB
	var_450_int = -2; // 0x750 MovI
	return 8; // 0x751 Return
	
Label_1874:
	DoDialog(var_457_object); // 0x752 Func
	var_471_bool = 0; var_472_object = Obj(); // 0x754 PushV
	var_473_object = Obj(); // 0x755 PushV
	func_3232(var_473_object); // 0x756 NEW_2
	var_472_object = var_473_object; // 0x757 Mov
	func_3041(var_471_bool, var_472_object); // 0x759 NEW_2
	var_474_object = Obj(); var_475_object = Obj(); // 0x75b PushV
	var_474_object = var_451_object; // 0x75c Mov
	var_475_object = var_457_object; // 0x75d Mov
	TaskCall(9); // 0x75e TaskCall
	func_1910(var_476_object, var_477_object, var_478_string, var_479_bool, var_474_object, var_475_object); // 0x75f NEW_2
	TaskReturn(); // 0x760 TaskReturn
	IsDialogEnd(var_460_bool); // 0x762 ObjFunc
	
Label_1892:
	var_560_bool = var_460_bool == 0; // 0x764 Not
	if(var_560_bool == 0) goto Label_1899; // 0x765 JumpB
	sync(); // 0x766 Func
	IsDialogEnd(var_460_bool); // 0x768 ObjFunc
	goto Label_1892; // 0x76a Jump
	
Label_1899:
	var_561_object = Obj(); // 0x76b PushV
	var_561_object = var_451_object; // 0x76c Mov
	func_3024(); // 0x76d NEW_2
	StopDialog(var_457_object); // 0x76f Func
	GetReturnValue(var_459_int); // 0x771 ObjFunc
	var_450_int = var_459_int; // 0x773 Mov
	return 8; // 0x774 Return
}


func_298(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x12a PushV
	var_0_object = var_55_object; // 0x12b TMov
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0; // 0x12c PushV
	var_66_object = var_55_object; // 0x12d Mov
	var_67_float = 70.0; // 0x12e MovF
	func_2956(var_66_object, var_67_float); // 0x12f NEW_2
	var_111_bool = var_65_bool == 0; // 0x131 Not
	if(var_111_bool == 0) goto Label_309; // 0x132 JumpB
	var_54_int = -2; // 0x133 MovI
	return 8; // 0x134 Return
	
Label_309:
	CreateDialog(var_61_object); // 0x135 Func
	var_112_int = 0; // 0x137 PushV
	func_3322(var_112_int); // 0x138 NEW_2
	SetNPCName(var_112_int); // 0x13a ObjFunc
	var_113_int = 0; // 0x13c PushV
	func_3320(var_113_int); // 0x13d NEW_2
	SetNPCDescription(var_113_int); // 0x13f ObjFunc
	var_114_string = ""; // 0x141 PushV
	func_3324(var_114_string); // 0x142 NEW_2
	SetPhoto(var_114_string); // 0x144 ObjFunc
	var_115_string = ""; // 0x146 PushV
	func_3326(var_115_string); // 0x147 NEW_2
	SetPhoto2(var_115_string); // 0x149 ObjFunc
	var_116_int = 0; // 0x14b PushV
	func_3947(var_116_int); // 0x14c NEW_2
	SetPlayerName(var_116_int); // 0x14e ObjFunc
	var_63_int = -1; // 0x150 MovI
	IsOverrideActive(var_62_bool); // 0x151 Func
	var_124_bool = var_62_bool; // 0x153 Push
	if(var_124_bool == 0) goto Label_343; // 0x154 JumpB
	var_54_int = -2; // 0x155 MovI
	return 8; // 0x156 Return
	
Label_343:
	DoDialog(var_61_object); // 0x157 Func
	var_125_bool = 0; var_126_object = Obj(); // 0x159 PushV
	var_127_object = Obj(); // 0x15a PushV
	func_3232(var_127_object); // 0x15b NEW_2
	var_126_object = var_127_object; // 0x15c Mov
	func_3041(var_125_bool, var_126_object); // 0x15e NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x160 PushV
	var_220_object = var_55_object; // 0x161 Mov
	var_221_object = var_61_object; // 0x162 Mov
	TaskCall(3); // 0x163 TaskCall
	func_379(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object); // 0x164 NEW_2
	TaskReturn(); // 0x165 TaskReturn
	IsDialogEnd(var_64_bool); // 0x167 ObjFunc
	
Label_361:
	var_269_bool = var_64_bool == 0; // 0x169 Not
	if(var_269_bool == 0) goto Label_368; // 0x16a JumpB
	sync(); // 0x16b Func
	IsDialogEnd(var_64_bool); // 0x16d ObjFunc
	goto Label_361; // 0x16f Jump
	
Label_368:
	var_270_object = Obj(); // 0x170 PushV
	var_270_object = var_55_object; // 0x171 Mov
	func_3024(); // 0x172 NEW_2
	StopDialog(var_61_object); // 0x174 Func
	GetReturnValue(var_63_int); // 0x176 ObjFunc
	var_54_int = var_63_int; // 0x178 Mov
	return 8; // 0x179 Return
}


func_2604(var_2_object, var_660_string)
{
	var_661_bool = 0; // 0xa2d PushV
	func_3328(var_661_bool); // 0xa2e NEW_2
	var_662_bool = var_661_bool == 0; // 0xa30 Not
	if(var_662_bool == 0) goto Label_2611; // 0xa31 JumpB
	return 0; // 0xa32 Return
	
Label_2611:
	var_663_bool = var_660_string == var_2_object; // 0xa33 Eq
	if(var_663_bool == 0) goto Label_2614; // 0xa34 JumpB
	return 0; // 0xa35 Return
	
Label_2614:
	var_664_string = ""; var_665_bool = 0; // 0xa36 PushV
	var_664_string = var_660_string; // 0xa37 Mov
	var_666_string = ""; // 0xa38 PushS
	var_667_bool = var_660_string == var_666_string; // 0xa39 Eq
	if(var_667_bool == 0) goto Label_2621; // 0xa3a JumpB
	var_665_bool = 0; // 0xa3b MovB
	goto Label_2622; // 0xa3c Jump
	
Label_2622:
	func_3195(var_664_string, var_665_bool); // 0xa3e NEW_2
	var_2_object = var_660_string; // 0xa40 TMov
	return 0; // 0xa41 Return
	
Label_2621:
	var_665_bool = 1; // 0xa3d MovB
}


func_3629(var_509_bool)
{
	var_511_int = 0; var_512_string = ""; // 0xe2e PushV
	var_512_string = "b10q01"; // 0xe2f MovS
	func_3248(var_511_int, var_512_string); // 0xe30 NEW_2
	var_513_int = 1000; // 0xe32 PushI
	var_514_bool = var_511_int == var_513_int; // 0xe33 Eq
	if(var_514_bool == 0) goto Label_3639; // 0xe34 JumpB
	var_509_bool = 1; // 0xe35 MovB
	return 0; // 0xe36 Return
	
Label_3639:
	var_509_bool = 0; // 0xe37 MovB
	return 0; // 0xe38 Return
}


func_3374()
{
	var_116_string = "b7q02"; // 0xd2f PushS
	var_117_int = 1; // 0xd30 PushI
	SetVariable(var_116_string, var_117_int); // 0xd31 Func
	func_3752(); // 0xd34 NEW_2
	func_3778(); // 0xd37 NEW_2
	var_134_object = Obj(); var_135_string = ""; // 0xd39 PushV
	var_135_string = "quest_b7_02"; // 0xd3a MovS
	func_3253(var_134_object, var_135_string); // 0xd3b NEW_2
	var_142_bool = 0; var_143_string = ""; var_144_string = ""; // 0xd3d PushV
	var_143_string = "quest_b7_02"; // 0xd3e MovS
	var_144_string = "init_termitnik2"; // 0xd3f MovS
	func_3264(var_142_bool, var_143_string, var_144_string); // 0xd40 NEW_2
	return 0; // 0xd42 Return
}


func_2044(var_2_object, var_485_string)
{
	var_486_bool = 0; // 0x7fd PushV
	func_3328(var_486_bool); // 0x7fe NEW_2
	var_487_bool = var_486_bool == 0; // 0x800 Not
	if(var_487_bool == 0) goto Label_2051; // 0x801 JumpB
	return 0; // 0x802 Return
	
Label_2051:
	var_488_bool = var_485_string == var_2_object; // 0x803 Eq
	if(var_488_bool == 0) goto Label_2054; // 0x804 JumpB
	return 0; // 0x805 Return
	
Label_2054:
	var_489_string = ""; var_490_bool = 0; // 0x806 PushV
	var_489_string = var_485_string; // 0x807 Mov
	var_491_string = ""; // 0x808 PushS
	var_492_bool = var_485_string == var_491_string; // 0x809 Eq
	if(var_492_bool == 0) goto Label_2061; // 0x80a JumpB
	var_490_bool = 0; // 0x80b MovB
	goto Label_2062; // 0x80c Jump
	
Label_2062:
	func_3195(var_489_string, var_490_bool); // 0x80e NEW_2
	var_2_object = var_485_string; // 0x810 TMov
	return 0; // 0x811 Return
	
Label_2061:
	var_490_bool = 1; // 0x80d MovB
}


func_3641(var_502_bool)
{
	var_504_int = 0; var_505_string = ""; // 0xe3a PushV
	var_505_string = "oob10Mat1"; // 0xe3b MovS
	func_3248(var_504_int, var_505_string); // 0xe3c NEW_2
	var_506_int = 0; // 0xe3e PushI
	var_507_bool = var_504_int == var_506_int; // 0xe3f Eq
	if(var_507_bool == 0) goto Label_3651; // 0xe40 JumpB
	var_502_bool = 1; // 0xe41 MovB
	return 0; // 0xe42 Return
	
Label_3651:
	var_502_bool = 0; // 0xe43 MovB
	return 0; // 0xe44 Return
}


func_3897(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0xf39 PushV
	GetMainOutdoorScene(var_58_object); // 0xf3a Func
	var_60_bool = var_58_object == 0; // 0xf3c NullEq
	if(var_60_bool == 0) goto Label_3908; // 0xf3d JumpB
	var_61_string = "Can't find main outdoor scene"; // 0xf3e PushS
	Trace(var_61_string); // 0xf3f Func
	var_59_object = 0; // 0xf41 SetNull
	var_55_object = var_59_object; // 0xf42 Mov
	return 4; // 0xf43 Return
	
Label_3908:
	GetMap(var_59_object); // 0xf44 ObjFunc
	var_55_object = var_59_object; // 0xf46 Mov
	return 4; // 0xf47 Return
}


func_3136(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xc40 PushV
	var_179_string = "d"; // 0xc41 PushS
	var_180_int = 0; // 0xc42 PushV
	func_3281(var_180_int); // 0xc43 NEW_2
	var_186_int = var_179_string + var_180_int; // 0xc45 Add
	var_187_string = "m"; // 0xc46 PushS
	var_174_string = var_186_int + var_187_string; // 0xc47 Add2
	var_175_int = 0; // 0xc48 MovI
	
Label_3145:
	var_188_int = 1; // 0xc49 PushI
	if(var_188_int == 0) goto Label_3158; // 0xc4a JumpB
	var_189_int = 1; // 0xc4b PushI
	var_190_int = var_175_int + var_189_int; // 0xc4c Add
	var_191_int = var_174_string + var_190_int; // 0xc4d Add
	HasProperty(var_191_int, var_176_bool); // 0xc4e ObjFunc
	var_192_bool = var_176_bool == 0; // 0xc50 Not
	if(var_192_bool == 0) goto Label_3155; // 0xc51 JumpB
	goto Label_3158; // 0xc52 Jump
	
Label_3158:
	var_193_bool = var_175_int == 0; // 0xc56 Not
	if(var_193_bool == 0) goto Label_3162; // 0xc57 JumpB
	var_167_bool = 0; // 0xc58 MovB
	return 10; // 0xc59 Return
	
Label_3162:
	var_177_int = 0; // 0xc5a MovI
	var_194_int = 1; // 0xc5b PushI
	var_195_bool = var_175_int > var_194_int; // 0xc5c GT
	if(var_195_bool == 0) goto Label_3168; // 0xc5d JumpB
	irand(var_177_int, var_175_int); // 0xc5e Func
	
Label_3168:
	var_196_int = 1; // 0xc60 PushI
	var_197_int = var_177_int + var_196_int; // 0xc61 Add
	var_198_int = var_174_string + var_197_int; // 0xc62 Add
	GetProperty(var_198_int, var_178_string); // 0xc63 ObjFunc
	var_199_bool = 0; var_200_string = ""; // 0xc65 PushV
	var_200_string = var_178_string; // 0xc66 Mov
	func_3210(var_199_bool, var_200_string); // 0xc67 NEW_2
	var_167_bool = var_199_bool; // 0xc68 Mov
	return 10; // 0xc6a Return
	
Label_3155:
	var_201_int = 1; // 0xc53 PushI
	var_175_int = var_175_int + var_201_int; // 0xc54 Add2
	goto Label_3145; // 0xc55 Jump
}


func_3395()
{
	func_3765(); // 0xd45 NEW_2
	var_157_bool = 0; var_158_string = ""; var_159_string = ""; // 0xd47 PushV
	var_158_string = "quest_b7_02"; // 0xd48 MovS
	var_159_string = "completed"; // 0xd49 MovS
	func_3264(var_157_bool, var_158_string, var_159_string); // 0xd4a NEW_2
	return 0; // 0xd4c Return
}


func_3653(var_521_bool)
{
	var_523_int = 0; var_524_string = ""; // 0xe46 PushV
	var_524_string = "b10q04PlennikTalk"; // 0xe47 MovS
	func_3248(var_523_int, var_524_string); // 0xe48 NEW_2
	var_525_int = 0; // 0xe4a PushI
	var_526_bool = var_523_int != var_525_int; // 0xe4b Neq
	if(var_526_bool == 0) goto Label_3663; // 0xe4c JumpB
	var_521_bool = 1; // 0xe4d MovB
	return 0; // 0xe4e Return
	
Label_3663:
	var_521_bool = 0; // 0xe4f MovB
	return 0; // 0xe50 Return
}


func_1098(var_0_object, var_368_int, var_369_object)
{
	var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0; var_375_object = Obj(); var_376_bool = 0; var_377_int = 0; var_378_bool = 0; // 0x44a PushV
	var_0_object = var_369_object; // 0x44b TMov
	var_379_bool = 0; var_380_object = Obj(); var_381_float = 0; // 0x44c PushV
	var_380_object = var_369_object; // 0x44d Mov
	var_381_float = 70.0; // 0x44e MovF
	func_2956(var_380_object, var_381_float); // 0x44f NEW_2
	var_382_bool = var_379_bool == 0; // 0x451 Not
	if(var_382_bool == 0) goto Label_1109; // 0x452 JumpB
	var_368_int = -2; // 0x453 MovI
	return 8; // 0x454 Return
	
Label_1109:
	CreateDialog(var_375_object); // 0x455 Func
	var_383_int = 0; // 0x457 PushV
	func_3322(var_383_int); // 0x458 NEW_2
	SetNPCName(var_383_int); // 0x45a ObjFunc
	var_384_int = 0; // 0x45c PushV
	func_3320(var_384_int); // 0x45d NEW_2
	SetNPCDescription(var_384_int); // 0x45f ObjFunc
	var_385_string = ""; // 0x461 PushV
	func_3324(var_385_string); // 0x462 NEW_2
	SetPhoto(var_385_string); // 0x464 ObjFunc
	var_386_string = ""; // 0x466 PushV
	func_3326(var_386_string); // 0x467 NEW_2
	SetPhoto2(var_386_string); // 0x469 ObjFunc
	var_387_int = 0; // 0x46b PushV
	func_3947(var_387_int); // 0x46c NEW_2
	SetPlayerName(var_387_int); // 0x46e ObjFunc
	var_377_int = -1; // 0x470 MovI
	IsOverrideActive(var_376_bool); // 0x471 Func
	var_388_bool = var_376_bool; // 0x473 Push
	if(var_388_bool == 0) goto Label_1143; // 0x474 JumpB
	var_368_int = -2; // 0x475 MovI
	return 8; // 0x476 Return
	
Label_1143:
	DoDialog(var_375_object); // 0x477 Func
	var_389_bool = 0; var_390_object = Obj(); // 0x479 PushV
	var_391_object = Obj(); // 0x47a PushV
	func_3232(var_391_object); // 0x47b NEW_2
	var_390_object = var_391_object; // 0x47c Mov
	func_3041(var_389_bool, var_390_object); // 0x47e NEW_2
	var_392_object = Obj(); var_393_object = Obj(); // 0x480 PushV
	var_392_object = var_369_object; // 0x481 Mov
	var_393_object = var_375_object; // 0x482 Mov
	TaskCall(7); // 0x483 TaskCall
	func_1179(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object); // 0x484 NEW_2
	TaskReturn(); // 0x485 TaskReturn
	IsDialogEnd(var_378_bool); // 0x487 ObjFunc
	
Label_1161:
	var_446_bool = var_378_bool == 0; // 0x489 Not
	if(var_446_bool == 0) goto Label_1168; // 0x48a JumpB
	sync(); // 0x48b Func
	IsDialogEnd(var_378_bool); // 0x48d ObjFunc
	goto Label_1161; // 0x48f Jump
	
Label_1168:
	var_447_object = Obj(); // 0x490 PushV
	var_447_object = var_369_object; // 0x491 Mov
	func_3024(); // 0x492 NEW_2
	StopDialog(var_375_object); // 0x494 Func
	GetReturnValue(var_377_int); // 0x496 ObjFunc
	var_368_int = var_377_int; // 0x498 Mov
	return 8; // 0x499 Return
}


func_3914(var_108_object, var_109_string, var_110_float)
{
	var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); var_115_bool = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_object = Obj(); var_119_bool = 0; // 0xf4a PushV
	GetMainOutdoorScene(var_118_object); // 0xf4b Func
	var_120_bool = var_118_object == 0; // 0xf4d NullEq
	if(var_120_bool == 0) goto Label_3923; // 0xf4e JumpB
	var_121_string = "Can't find main outdoor scene"; // 0xf4f PushS
	Trace(var_121_string); // 0xf50 Func
	return 8; // 0xf52 Return
	
Label_3923:
	GetLocator(var_109_string, var_119_bool, var_116_cvector, var_117_cvector); // 0xf53 ObjFunc
	var_122_bool = var_119_bool == 0; // 0xf55 Not
	if(var_122_bool == 0) goto Label_3933; // 0xf56 JumpB
	var_123_string = "Warning: outdoor scene locator "; // 0xf57 PushS
	var_124_int = var_123_string + var_109_string; // 0xf58 Add
	var_125_string = " doesnt exist"; // 0xf59 PushS
	var_126_int = var_124_int + var_125_string; // 0xf5a Add
	Trace(var_126_int); // 0xf5b Func
	
Label_3933:
	GetMap(var_108_object); // 0xf5d ObjFunc
	var_127_bool = var_108_object == 0; // 0xf5f NullEq
	if(var_127_bool == 0) goto Label_3941; // 0xf60 JumpB
	var_128_string = "Can't find map"; // 0xf61 PushS
	Trace(var_128_string); // 0xf62 Func
	return 8; // 0xf64 Return
	
Label_3941:
	var_129_float = GetByIndex(var_116_cvector, 0); // 0xf65 PushE
	var_130_float = GetByIndex(var_116_cvector, 2); // 0xf66 PushE
	SetMapParams(var_129_float, var_130_float, var_110_float); // 0xf67 ObjFunc
	return 8; // 0xf69 Return
}


func_3405()
{
	var_39_string = "b8q01"; // 0xd4e PushS
	var_40_int = 2; // 0xd4f PushI
	SetVariable(var_39_string, var_40_int); // 0xd50 Func
	func_3804(); // 0xd53 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0xd55 PushV
	var_65_string = "quest_b8_01"; // 0xd56 MovS
	var_66_string = "place_klara"; // 0xd57 MovS
	func_3264(var_64_bool, var_65_string, var_66_string); // 0xd58 NEW_2
	return 0; // 0xd5a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_588_object, var_589_object)
{
	var_0_object = var_589_object; // 0x52 TMov
	var_1_object = var_588_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_594_int = 1; // 0x55 PushI
	if(var_594_int == 0) goto Label_119; // 0x56 JumpB
	var_595_string = ""; // 0x57 PushV
	var_595_string = "Neutral"; // 0x58 MovS
	func_149(var_589_object, var_595_string); // 0x59 NEW_2
	var_603_int = 535263; // 0x5b PushI
	SetMessage(var_603_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_604_bool = 0; var_605_object = Obj(); // 0x60 PushV
	var_605_object = var_1_object; // 0x61 MovT
	func_3689(var_605_object); // 0x62 NEW_2
	if(var_604_bool == 0) goto Label_106; // 0x64 JumpB
	var_610_int = 535264; // 0x65 PushI
	var_611_int = 37039; // 0x66 PushI
	var_612_int = 36939; // 0x67 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x68 TObjFunc
	
Label_106:
	var_613_int = 535339; // 0x6a PushI
	var_614_int = -1; // 0x6b PushI
	var_615_int = 37021; // 0x6c PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x6d TObjFunc
	var_616_int = 535354; // 0x6f PushI
	var_617_int = -1; // 0x70 PushI
	var_618_int = 37038; // 0x71 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_619_bool = 0; // 0x77 PushV
	func_3328(var_619_bool); // 0x78 NEW_2
	if(var_619_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_620_string = var_3_string; // 0x7d PushT
	if(var_620_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_621_string = ""; // 0x80 PushV
	var_621_string = var_2_object; // 0x81 MovT
	func_3179(var_621_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_622_string = "all"; // 0x86 PushS
	var_623_string = "idle"; // 0x87 PushS
	PlayAnimation(var_622_string, var_623_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_624_string = var_3_string; // 0x8c PushT
	if(var_624_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_625_string = "all"; // 0x8f PushS
	var_626_string = "idle"; // 0x90 PushS
	PlayAnimation(var_625_string, var_626_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_3665(var_528_bool)
{
	var_530_int = 0; var_531_string = ""; // 0xe52 PushV
	var_531_string = "oob10Mat2"; // 0xe53 MovS
	func_3248(var_530_int, var_531_string); // 0xe54 NEW_2
	var_532_int = 0; // 0xe56 PushI
	var_533_bool = var_530_int == var_532_int; // 0xe57 Eq
	if(var_533_bool == 0) goto Label_3675; // 0xe58 JumpB
	var_528_bool = 1; // 0xe59 MovB
	return 0; // 0xe5a Return
	
Label_3675:
	var_528_bool = 0; // 0xe5b MovB
	return 0; // 0xe5c Return
}


func_3419()
{
	var_89_string = "b8q01"; // 0xd5c PushS
	var_90_int = 4; // 0xd5d PushI
	SetVariable(var_89_string, var_90_int); // 0xd5e Func
	func_3817(); // 0xd61 NEW_2
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; // 0xd63 PushV
	var_100_string = "quest_b8_01"; // 0xd64 MovS
	var_101_string = "remove_klara"; // 0xd65 MovS
	func_3264(var_99_bool, var_100_string, var_101_string); // 0xd66 NEW_2
	var_102_bool = 0; var_103_string = ""; var_104_string = ""; // 0xd68 PushV
	var_103_string = "quest_b8_01"; // 0xd69 MovS
	var_104_string = "unlock_boiny"; // 0xd6a MovS
	func_3264(var_102_bool, var_103_string, var_104_string); // 0xd6b NEW_2
	return 0; // 0xd6d Return
}


func_3677(var_540_bool)
{
	var_542_int = 0; var_543_string = ""; // 0xe5e PushV
	var_543_string = "b10q04"; // 0xe5f MovS
	func_3248(var_542_int, var_543_string); // 0xe60 NEW_2
	var_544_int = 0; // 0xe62 PushI
	var_545_bool = var_542_int == var_544_int; // 0xe63 Eq
	if(var_545_bool == 0) goto Label_3687; // 0xe64 JumpB
	var_540_bool = 1; // 0xe65 MovB
	return 0; // 0xe66 Return
	
Label_3687:
	var_540_bool = 0; // 0xe67 MovB
	return 0; // 0xe68 Return
}


func_606(var_0_object, var_282_int, var_283_object)
{
	var_285_object = Obj(); var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; // 0x25e PushV
	var_0_object = var_283_object; // 0x25f TMov
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; // 0x260 PushV
	var_294_object = var_283_object; // 0x261 Mov
	var_295_float = 70.0; // 0x262 MovF
	func_2956(var_294_object, var_295_float); // 0x263 NEW_2
	var_296_bool = var_293_bool == 0; // 0x265 Not
	if(var_296_bool == 0) goto Label_617; // 0x266 JumpB
	var_282_int = -2; // 0x267 MovI
	return 8; // 0x268 Return
	
Label_617:
	CreateDialog(var_289_object); // 0x269 Func
	var_297_int = 0; // 0x26b PushV
	func_3322(var_297_int); // 0x26c NEW_2
	SetNPCName(var_297_int); // 0x26e ObjFunc
	var_298_int = 0; // 0x270 PushV
	func_3320(var_298_int); // 0x271 NEW_2
	SetNPCDescription(var_298_int); // 0x273 ObjFunc
	var_299_string = ""; // 0x275 PushV
	func_3324(var_299_string); // 0x276 NEW_2
	SetPhoto(var_299_string); // 0x278 ObjFunc
	var_300_string = ""; // 0x27a PushV
	func_3326(var_300_string); // 0x27b NEW_2
	SetPhoto2(var_300_string); // 0x27d ObjFunc
	var_301_int = 0; // 0x27f PushV
	func_3947(var_301_int); // 0x280 NEW_2
	SetPlayerName(var_301_int); // 0x282 ObjFunc
	var_291_int = -1; // 0x284 MovI
	IsOverrideActive(var_290_bool); // 0x285 Func
	var_302_bool = var_290_bool; // 0x287 Push
	if(var_302_bool == 0) goto Label_651; // 0x288 JumpB
	var_282_int = -2; // 0x289 MovI
	return 8; // 0x28a Return
	
Label_651:
	DoDialog(var_289_object); // 0x28b Func
	var_303_bool = 0; var_304_object = Obj(); // 0x28d PushV
	var_305_object = Obj(); // 0x28e PushV
	func_3232(var_305_object); // 0x28f NEW_2
	var_304_object = var_305_object; // 0x290 Mov
	func_3041(var_303_bool, var_304_object); // 0x292 NEW_2
	var_306_object = Obj(); var_307_object = Obj(); // 0x294 PushV
	var_306_object = var_283_object; // 0x295 Mov
	var_307_object = var_289_object; // 0x296 Mov
	TaskCall(5); // 0x297 TaskCall
	func_687(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object); // 0x298 NEW_2
	TaskReturn(); // 0x299 TaskReturn
	IsDialogEnd(var_292_bool); // 0x29b ObjFunc
	
Label_669:
	var_364_bool = var_292_bool == 0; // 0x29d Not
	if(var_364_bool == 0) goto Label_676; // 0x29e JumpB
	sync(); // 0x29f Func
	IsDialogEnd(var_292_bool); // 0x2a1 ObjFunc
	goto Label_669; // 0x2a3 Jump
	
Label_676:
	var_365_object = Obj(); // 0x2a4 PushV
	var_365_object = var_283_object; // 0x2a5 Mov
	func_3024(); // 0x2a6 NEW_2
	StopDialog(var_289_object); // 0x2a8 Func
	GetReturnValue(var_291_int); // 0x2aa ObjFunc
	var_282_int = var_291_int; // 0x2ac Mov
	return 8; // 0x2ad Return
}


func_2917(var_69_bool)
{
	var_69_bool = 1; // 0xb65 MovB
	return 0; // 0xb66 Return
}


func_2919()
{
	StopAnimation(); // 0xb67 Func
	StopGroup0(); // 0xb69 Func
	return 0; // 0xb6b Return
}


func_3689(var_604_bool)
{
	var_606_int = 0; var_607_string = ""; // 0xe6a PushV
	var_607_string = "oob12Mat1"; // 0xe6b MovS
	func_3248(var_606_int, var_607_string); // 0xe6c NEW_2
	var_608_int = 0; // 0xe6e PushI
	var_609_bool = var_606_int == var_608_int; // 0xe6f Eq
	if(var_609_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_604_bool = 1; // 0xe71 MovB
	return 0; // 0xe72 Return
	
Label_3699:
	var_604_bool = 0; // 0xe73 MovB
	return 0; // 0xe74 Return
}


func_3179(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0xc6b PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0xc6c Func
	var_260_bool = var_257_bool; // 0xc6e Push
	if(var_260_bool == 0) goto Label_3190; // 0xc6f JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0xc70 Func
	var_261_bool = 0; // 0xc72 PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0xc73 Func
	goto Label_3194; // 0xc75 Jump
	
Label_3194:
	return 6; // 0xc7a Return
	
Label_3190:
	var_262_string = "Can't find lsh animation : "; // 0xc76 PushS
	var_263_int = var_262_string + var_253_string; // 0xc77 Add
	Trace(var_263_int); // 0xc78 Func
}


func_3947(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0xf6b PushV
	var_119_string = "branch"; // 0xf6c PushS
	GetVariable(var_119_string, var_118_int); // 0xf6d Func
	var_120_int = 0; // 0xf6f PushI
	var_121_bool = var_118_int == var_120_int; // 0xf70 Eq
	if(var_121_bool == 0) goto Label_3957; // 0xf71 JumpB
	var_116_int = 1; // 0xf72 MovI
	return 2; // 0xf73 Return
	
Label_3957:
	var_122_int = 1; // 0xf75 PushI
	var_123_bool = var_118_int == var_122_int; // 0xf76 Eq
	if(var_123_bool == 0) goto Label_3962; // 0xf77 JumpB
	var_116_int = 2; // 0xf78 MovI
	return 2; // 0xf79 Return
	
Label_3962:
	var_116_int = 3; // 0xf7a MovI
	return 2; // 0xf7b Return
}


func_2924(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xb6c PushV
	GetPosition(var_51_cvector); // 0xb6d Func
	GetPosition(var_52_cvector); // 0xb6f ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0xb71 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0xb72 Or2
	return 6; // 0xb73 Return
}


func_3438()
{
	var_109_string = "b8q03"; // 0xd6f PushS
	var_110_int = 3; // 0xd70 PushI
	SetVariable(var_109_string, var_110_int); // 0xd71 Func
	var_111_string = "b8q03MladVladIsVictim"; // 0xd73 PushS
	var_112_int = 0; // 0xd74 PushI
	SetVariable(var_111_string, var_112_int); // 0xd75 Func
	func_3830(); // 0xd78 NEW_2
	return 0; // 0xd7a Return
}


func_2672(var_0_object)
{
	var_31_bool = 0; // 0xa70 PushV
	func_2951(var_31_bool); // 0xa71 NEW_2
	var_34_bool = var_31_bool == 0; // 0xa73 Not
	if(var_34_bool == 0) goto Label_2679; // 0xa74 JumpB
	Hold(); // 0xa75 Func
	
Label_2679:
	GetDirection(var_0_object); // 0xa77 Func
	
Label_2681:
	func_2848(); // 0xa7a NEW_2
	goto Label_2681; // 0xa7c Jump
}


func_2932(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0xb74 PushV
	GetPosition(var_44_cvector); // 0xb75 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0xb77 Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0xb78 PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0xb79 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0xb7a Func
	var_39_bool = var_46_bool; // 0xb7c Mov
	return 6; // 0xb7d Return
}


func_3701(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0xe76 PushV
	var_316_string = "b7q01"; // 0xe77 MovS
	func_3248(var_315_int, var_316_string); // 0xe78 NEW_2
	var_319_int = 2; // 0xe7a PushI
	var_320_bool = var_315_int == var_319_int; // 0xe7b Eq
	if(var_320_bool == 0) goto Label_3711; // 0xe7c JumpB
	var_313_bool = 1; // 0xe7d MovB
	return 0; // 0xe7e Return
	
Label_3711:
	var_313_bool = 0; // 0xe7f MovB
	return 0; // 0xe80 Return
}


func_1910(var_0_object, var_1_object, var_2_object, var_3_string, var_474_object, var_475_object)
{
	var_0_object = var_475_object; // 0x777 TMov
	var_1_object = var_474_object; // 0x778 TMov
	var_3_string = 0; // 0x779 TMovB
	var_480_int = 1; // 0x77a PushI
	if(var_480_int == 0) goto Label_2014; // 0x77b JumpB
	var_481_object = Obj(); var_482_object = Obj(); // 0x77c PushV
	var_481_object = var_1_object; // 0x77d MovT
	var_482_object = var_0_object; // 0x77e MovT
	func_3523(); // 0x77f NEW_2
	var_485_string = ""; // 0x781 PushV
	var_485_string = "Neutral"; // 0x782 MovS
	func_2044(var_475_object, var_485_string); // 0x783 NEW_2
	var_493_int = 521951; // 0x785 PushI
	SetMessage(var_493_int); // 0x786 TObjFunc
	ClearReplies(); // 0x788 TObjFunc
	var_494_bool = 0; // 0x78a PushV
	var_494_bool = 1; // 0x78b MovB
	var_495_bool = 0; // 0x78c PushV
	var_495_bool = 0; // 0x78d MovB
	var_496_bool = 0; var_497_object = Obj(); // 0x78e PushV
	var_497_object = var_1_object; // 0x78f MovT
	func_3617(var_497_object); // 0x790 NEW_2
	if(var_496_bool == 0) goto Label_1945; // 0x792 JumpB
	var_502_bool = 0; var_503_object = Obj(); // 0x793 PushV
	var_503_object = var_1_object; // 0x794 MovT
	func_3641(var_503_object); // 0x795 NEW_2
	if(var_502_bool == 0) goto Label_1945; // 0x797 JumpB
	var_495_bool = 1; // 0x798 MovB
	
Label_1945:
	if(var_495_bool == 0) goto Label_1961; // 0x799 JumpB
	var_508_bool = 0; // 0x79a PushV
	var_508_bool = 0; // 0x79b MovB
	var_509_bool = 0; var_510_object = Obj(); // 0x79c PushV
	var_510_object = var_1_object; // 0x79d MovT
	func_3629(var_510_object); // 0x79e NEW_2
	if(var_509_bool == 0) goto Label_1959; // 0x7a0 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x7a1 PushV
	var_516_object = var_1_object; // 0x7a2 MovT
	func_3641(var_516_object); // 0x7a3 NEW_2
	if(var_515_bool == 0) goto Label_1959; // 0x7a5 JumpB
	var_508_bool = 1; // 0x7a6 MovB
	
Label_1959:
	if(var_508_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_494_bool = 0; // 0x7a8 MovB
	
Label_1961:
	if(var_494_bool == 0) goto Label_1967; // 0x7a9 JumpB
	var_517_int = 521952; // 0x7aa PushI
	var_518_int = 23688; // 0x7ab PushI
	var_519_int = 23126; // 0x7ac PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x7ad TObjFunc
	
Label_1967:
	var_520_bool = 0; // 0x7af PushV
	var_520_bool = 0; // 0x7b0 MovB
	var_521_bool = 0; var_522_object = Obj(); // 0x7b1 PushV
	var_522_object = var_1_object; // 0x7b2 MovT
	func_3653(var_522_object); // 0x7b3 NEW_2
	var_527_bool = var_521_bool == 0; // 0x7b5 Not
	if(var_527_bool == 0) goto Label_1981; // 0x7b6 JumpB
	var_528_bool = 0; var_529_object = Obj(); // 0x7b7 PushV
	var_529_object = var_1_object; // 0x7b8 MovT
	func_3665(var_529_object); // 0x7b9 NEW_2
	if(var_528_bool == 0) goto Label_1981; // 0x7bb JumpB
	var_520_bool = 1; // 0x7bc MovB
	
Label_1981:
	if(var_520_bool == 0) goto Label_1987; // 0x7bd JumpB
	var_534_int = 530373; // 0x7be PushI
	var_535_int = 31746; // 0x7bf PushI
	var_536_int = 31745; // 0x7c0 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x7c1 TObjFunc
	
Label_1987:
	var_537_bool = 0; // 0x7c3 PushV
	var_537_bool = 0; // 0x7c4 MovB
	var_538_bool = 0; var_539_object = Obj(); // 0x7c5 PushV
	var_539_object = var_1_object; // 0x7c6 MovT
	func_3653(var_539_object); // 0x7c7 NEW_2
	if(var_538_bool == 0) goto Label_2000; // 0x7c9 JumpB
	var_540_bool = 0; var_541_object = Obj(); // 0x7ca PushV
	var_541_object = var_1_object; // 0x7cb MovT
	func_3677(var_541_object); // 0x7cc NEW_2
	if(var_540_bool == 0) goto Label_2000; // 0x7ce JumpB
	var_537_bool = 1; // 0x7cf MovB
	
Label_2000:
	if(var_537_bool == 0) goto Label_2006; // 0x7d0 JumpB
	var_546_int = 530376; // 0x7d1 PushI
	var_547_int = 31749; // 0x7d2 PushI
	var_548_int = 31748; // 0x7d3 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x7d4 TObjFunc
	
Label_2006:
	var_549_int = 521955; // 0x7d6 PushI
	var_550_int = -1; // 0x7d7 PushI
	var_551_int = 23129; // 0x7d8 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x7d9 TObjFunc
	goto Label_2014; // 0x7db Jump
	
Label_2014:
	var_552_bool = 0; // 0x7de PushV
	func_3328(var_552_bool); // 0x7df NEW_2
	if(var_552_bool == 0) goto Label_2029; // 0x7e1 JumpB
	
Label_2018:
	lshWaitForAnimEnd(); // 0x7e2 Func
	var_553_string = var_3_string; // 0x7e4 PushT
	if(var_553_string == 0) goto Label_2023; // 0x7e5 JumpB
	goto Label_2028; // 0x7e6 Jump
	
Label_2028:
	goto Label_2043; // 0x7ec Jump
	
Label_2043:
	return 0; // 0x7fb Return
	
Label_2023:
	var_554_string = ""; // 0x7e7 PushV
	var_554_string = var_2_object; // 0x7e8 MovT
	func_3179(var_554_string); // 0x7e9 NEW_2
	goto Label_2018; // 0x7eb Jump
	
Label_2029:
	var_555_string = "all"; // 0x7ed PushS
	var_556_string = "idle"; // 0x7ee PushS
	PlayAnimation(var_555_string, var_556_string); // 0x7ef Func
	
Label_2033:
	WaitForAnimEnd(); // 0x7f1 Func
	var_557_string = var_3_string; // 0x7f3 PushT
	if(var_557_string == 0) goto Label_2038; // 0x7f4 JumpB
	goto Label_2043; // 0x7f5 Jump
	
Label_2038:
	var_558_string = "all"; // 0x7f6 PushS
	var_559_string = "idle"; // 0x7f7 PushS
	PlayAnimation(var_558_string, var_559_string); // 0x7f8 Func
	goto Label_2033; // 0x7fa Jump
}


func_3195(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0xc7b PushV
	lshHasAnimation(var_238_bool, var_231_string); // 0xc7c Func
	var_241_bool = var_238_bool; // 0xc7e Push
	if(var_241_bool == 0) goto Label_3205; // 0xc7f JumpB
	lshGetAnimTimes(var_231_string, var_239_float, var_240_float); // 0xc80 Func
	lshPlayAnimation(var_239_float, var_240_float, var_232_bool); // 0xc82 Func
	goto Label_3209; // 0xc84 Jump
	
Label_3209:
	return 6; // 0xc89 Return
	
Label_3205:
	var_242_string = "Can't find lsh animation : "; // 0xc85 PushS
	var_243_int = var_242_string + var_231_string; // 0xc86 Add
	Trace(var_243_int); // 0xc87 Func
}


func_3451()
{
	var_125_string = "b8q03"; // 0xd7c PushS
	var_126_int = 3; // 0xd7d PushI
	SetVariable(var_125_string, var_126_int); // 0xd7e Func
	var_127_string = "b8q03MladVladIsVictim"; // 0xd80 PushS
	var_128_int = 1; // 0xd81 PushI
	SetVariable(var_127_string, var_128_int); // 0xd82 Func
	func_3843(); // 0xd85 NEW_2
	return 0; // 0xd87 Return
}


func_3964(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0xf7c PushV
	var_52_string = "mt_mat"; // 0xf7d PushS
	GetVariable(var_52_string, var_51_int); // 0xf7e Func
	var_53_bool = var_51_int == 0; // 0xf80 Not
	if(var_53_bool == 0) goto Label_3980; // 0xf81 JumpB
	var_54_int = 0; var_55_object = Obj(); // 0xf82 PushV
	var_55_object = var_49_object; // 0xf83 Mov
	TaskCall(2); // 0xf84 TaskCall
	func_298(var_56_object, var_54_int, var_55_object); // 0xf85 NEW_2
	TaskReturn(); // 0xf86 TaskReturn
	var_277_string = "mt_mat"; // 0xf88 PushS
	var_278_int = 1; // 0xf89 PushI
	SetVariable(var_277_string, var_278_int); // 0xf8a Func
	
Label_3980:
	var_279_bool = 0; var_280_int = 0; // 0xf8c PushV
	var_280_int = 7; // 0xf8d MovI
	func_3290(var_279_bool, var_280_int); // 0xf8e NEW_2
	if(var_279_bool == 0) goto Label_3992; // 0xf90 JumpB
	var_282_int = 0; var_283_object = Obj(); // 0xf91 PushV
	var_283_object = var_49_object; // 0xf92 Mov
	TaskCall(4); // 0xf93 TaskCall
	func_606(var_284_object, var_282_int, var_283_object); // 0xf94 NEW_2
	TaskReturn(); // 0xf95 TaskReturn
	return 2; // 0xf97 Return
	
Label_3992:
	var_366_bool = 0; var_367_int = 0; // 0xf98 PushV
	var_367_int = 8; // 0xf99 MovI
	func_3290(var_366_bool, var_367_int); // 0xf9a NEW_2
	if(var_366_bool == 0) goto Label_4004; // 0xf9c JumpB
	var_368_int = 0; var_369_object = Obj(); // 0xf9d PushV
	var_369_object = var_49_object; // 0xf9e Mov
	TaskCall(6); // 0xf9f TaskCall
	func_1098(var_370_object, var_368_int, var_369_object); // 0xfa0 NEW_2
	TaskReturn(); // 0xfa1 TaskReturn
	return 2; // 0xfa3 Return
	
Label_4004:
	var_448_bool = 0; var_449_int = 0; // 0xfa4 PushV
	var_449_int = 10; // 0xfa5 MovI
	func_3290(var_448_bool, var_449_int); // 0xfa6 NEW_2
	if(var_448_bool == 0) goto Label_4016; // 0xfa8 JumpB
	var_450_int = 0; var_451_object = Obj(); // 0xfa9 PushV
	var_451_object = var_49_object; // 0xfaa Mov
	TaskCall(8); // 0xfab TaskCall
	func_1829(var_452_object, var_450_int, var_451_object); // 0xfac NEW_2
	TaskReturn(); // 0xfad TaskReturn
	return 2; // 0xfaf Return
	
Label_4016:
	var_562_bool = 0; var_563_int = 0; // 0xfb0 PushV
	var_563_int = 12; // 0xfb1 MovI
	func_3290(var_562_bool, var_563_int); // 0xfb2 NEW_2
	if(var_562_bool == 0) goto Label_4028; // 0xfb4 JumpB
	var_564_int = 0; var_565_object = Obj(); // 0xfb5 PushV
	var_565_object = var_49_object; // 0xfb6 Mov
	TaskCall(0); // 0xfb7 TaskCall
	func_0(var_566_object, var_564_int, var_565_object); // 0xfb8 NEW_2
	TaskReturn(); // 0xfb9 TaskReturn
	return 2; // 0xfbb Return
	
Label_4028:
	var_629_int = 0; var_630_object = Obj(); // 0xfbc PushV
	var_630_object = var_49_object; // 0xfbd Mov
	TaskCall(10); // 0xfbe TaskCall
	func_2465(var_631_object, var_629_int, var_630_object); // 0xfbf NEW_2
	TaskReturn(); // 0xfc0 TaskReturn
	return 2; // 0xfc2 Return
}


func_2686(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xa7e PushV
	var_59_string = "player"; // 0xa7f PushS
	FindActor(var_58_object, var_59_string); // 0xa80 Func
	var_60_bool = var_58_object == 0; // 0xa82 Not
	if(var_60_bool == 0) goto Label_2694; // 0xa83 JumpB
	var_56_bool = 0; // 0xa84 MovB
	return 2; // 0xa85 Return
	
Label_2694:
	var_61_bool = 0; var_62_object = Obj(); // 0xa86 PushV
	var_62_object = var_58_object; // 0xa87 Mov
	func_2942(var_62_object); // 0xa88 NEW_2
	var_56_bool = var_61_bool; // 0xa89 Mov
	return 2; // 0xa8b Return
}


func_379(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object; // 0x17c TMov
	var_1_object = var_220_object; // 0x17d TMov
	var_3_string = 0; // 0x17e TMovB
	var_226_int = 1; // 0x17f PushI
	if(var_226_int == 0) goto Label_407; // 0x180 JumpB
	var_227_string = ""; // 0x181 PushV
	var_227_string = "Neutral"; // 0x182 MovS
	func_437(var_221_object, var_227_string); // 0x183 NEW_2
	var_244_int = 518060; // 0x185 PushI
	SetMessage(var_244_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_245_int = 518061; // 0x18a PushI
	var_246_int = 29781; // 0x18b PushI
	var_247_int = 19194; // 0x18c PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x18d TObjFunc
	var_248_int = 528400; // 0x18f PushI
	var_249_int = 29777; // 0x190 PushI
	var_250_int = 29776; // 0x191 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x192 TObjFunc
	goto Label_407; // 0x194 Jump
	
Label_407:
	var_251_bool = 0; // 0x197 PushV
	func_3328(var_251_bool); // 0x198 NEW_2
	if(var_251_bool == 0) goto Label_422; // 0x19a JumpB
	
Label_411:
	lshWaitForAnimEnd(); // 0x19b Func
	var_252_string = var_3_string; // 0x19d PushT
	if(var_252_string == 0) goto Label_416; // 0x19e JumpB
	goto Label_421; // 0x19f Jump
	
Label_421:
	goto Label_436; // 0x1a5 Jump
	
Label_436:
	return 0; // 0x1b4 Return
	
Label_416:
	var_253_string = ""; // 0x1a0 PushV
	var_253_string = var_2_object; // 0x1a1 MovT
	func_3179(var_253_string); // 0x1a2 NEW_2
	goto Label_411; // 0x1a4 Jump
	
Label_422:
	var_264_string = "all"; // 0x1a6 PushS
	var_265_string = "idle"; // 0x1a7 PushS
	PlayAnimation(var_264_string, var_265_string); // 0x1a8 Func
	
Label_426:
	WaitForAnimEnd(); // 0x1aa Func
	var_266_string = var_3_string; // 0x1ac PushT
	if(var_266_string == 0) goto Label_431; // 0x1ad JumpB
	goto Label_436; // 0x1ae Jump
	
Label_431:
	var_267_string = "all"; // 0x1af PushS
	var_268_string = "idle"; // 0x1b0 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x1b1 Func
	goto Label_426; // 0x1b3 Jump
}


func_2942(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0xb7e PushV
	GetPosition(var_38_cvector); // 0xb7f ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0xb81 PushV
	var_40_cvector = var_38_cvector; // 0xb82 Mov
	func_2932(var_39_bool, var_40_cvector); // 0xb83 NEW_2
	var_35_bool = var_39_bool; // 0xb84 Mov
	return 2; // 0xb86 Return
}


func_3713()
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xe81 PushV
	var_71_int = 545; // 0xe82 PushI
	var_72_int = 2; // 0xe83 PushI
	var_73_int = 530436; // 0xe84 PushI
	CreateDiaryEntry(var_70_object, var_71_int, var_72_int, var_73_int); // 0xe85 Func
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0; // 0xe87 PushV
	var_75_object = var_70_object; // 0xe88 Mov
	var_76_int = -1; // 0xe89 MovI
	func_3869(var_74_bool, var_75_object, var_76_int); // 0xe8a NEW_2
	return 2; // 0xe8c Return
}


func_2951(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xb87 PushV
	IsLoaded(var_33_bool); // 0xb88 Func
	var_31_bool = var_33_bool; // 0xb8a Mov
	return 2; // 0xb8b Return
}


func_3464()
{
	var_39_string = "oob10Mat1"; // 0xd89 PushS
	var_40_int = 1; // 0xd8a PushI
	SetVariable(var_39_string, var_40_int); // 0xd8b Func
	return 0; // 0xd8d Return
}


func_3210(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xc8a PushV
	var_163_bool = 0; // 0xc8b PushV
	func_3328(var_163_bool); // 0xc8c NEW_2
	if(var_163_bool == 0) goto Label_3223; // 0xc8e JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xc8f Func
	var_164_bool = var_162_bool; // 0xc91 Push
	if(var_164_bool == 0) goto Label_3223; // 0xc92 JumpB
	lshPlaySpeech(var_160_string); // 0xc93 Func
	var_159_bool = 1; // 0xc95 MovB
	return 2; // 0xc96 Return
	
Label_3223:
	var_159_bool = 0; // 0xc97 MovB
	return 2; // 0xc98 Return
}


func_2956(var_65_bool, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; // 0xb8c PushV
	GetPosition(var_78_cvector); // 0xb8d ObjFunc
	GetEyesHeight(var_77_float); // 0xb8f ObjFunc
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xb91 PushE
	var_86_float = var_86_float + var_77_float; // 0xb92 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xb93 PopE
	GetPosition(var_79_cvector); // 0xb94 Func
	GetEyesHeight(var_77_float); // 0xb96 Func
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xb98 PushE
	var_87_float = var_87_float + var_77_float; // 0xb99 Add2
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xb9a PopE
	var_80_cvector = var_78_cvector - var_79_cvector; // 0xb9b Sub2
	var_88_float = GetByIndex(var_80_cvector, 1); // 0xb9c PushE
	var_88_float = 0; // 0xb9d MovI
	SetByIndex(var_80_cvector, 1) = var_88_float; // 0xb9e PopE
	var_89_int = var_80_cvector | var_80_cvector; // 0xb9f Or
	var_90_float = sqrt(var_89_int); // 0xba0 Sqrt
	var_80_cvector = var_80_cvector / var_80_cvector; // 0xba1 Div2
	var_81_cvector = -var_80_cvector; // 0xba2 Neg2
	var_91_float = var_80_cvector * var_67_float; // 0xba3 Mult
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0xba4 PushV
	var_94_cvector = CVector(0.0, 1.0, 0.0); // 0xba5 PushVec
	var_93_cvector = var_81_cvector ^ var_94_cvector; // 0xba6 Xor2
	func_3238(var_92_cvector, var_93_cvector); // 0xba7 NEW_2
	var_100_int = 25; // 0xba9 PushI
	var_101_float = var_92_cvector * var_100_int; // 0xbaa Mult
	var_102_int = var_91_float + var_101_float; // 0xbab Add
	var_103_cvector = CVector(0.0, 10.0, 0.0); // 0xbac PushVec
	var_82_cvector = var_102_int - var_103_cvector; // 0xbad Sub2
	var_83_cvector = var_79_cvector + var_82_cvector; // 0xbae Add2
	IsOverrideActive(var_84_bool); // 0xbaf Func
	var_104_bool = var_84_bool; // 0xbb1 Push
	if(var_104_bool == 0) goto Label_2997; // 0xbb2 JumpB
	var_65_bool = 0; // 0xbb3 MovB
	return 18; // 0xbb4 Return
	
Label_2997:
	StopWorld(); // 0xbb5 Func
	CameraTransit(var_83_cvector, var_81_cvector); // 0xbb7 Func
	var_105_float = GetByIndex(var_82_cvector, 0); // 0xbb9 PushE
	var_106_float = GetByIndex(var_82_cvector, 2); // 0xbba PushE
	Rotate(var_105_float, var_106_float); // 0xbbb Func
	var_107_bool = 0; // 0xbbd PushV
	func_3328(var_107_bool); // 0xbbe NEW_2
	if(var_107_bool == 0) goto Label_3010; // 0xbc0 JumpB
	goto Label_3018; // 0xbc1 Jump
	
Label_3018:
	CameraWaitForPlayFinish(); // 0xbca Func
	ResumeWorld(); // 0xbcc Func
	var_65_bool = 1; // 0xbce MovB
	return 18; // 0xbcf Return
	
Label_3010:
	var_108_string = "head"; // 0xbc2 PushS
	HasAnimationTrack(var_85_bool, var_108_string); // 0xbc3 Func
	var_109_bool = var_85_bool; // 0xbc5 Push
	if(var_109_bool == 0) goto Label_3018; // 0xbc6 JumpB
	var_110_string = "head"; // 0xbc7 PushS
	LookAsyncCamera(var_110_string); // 0xbc8 Func
}


func_2701(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0xa8d PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0xa8e PushE
	RotateAsync(var_108_float, var_109_float); // 0xa8f Func
	return 0; // 0xa91 Return
}


func_3726()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0xe8e PushV
	var_94_int = 546; // 0xe8f PushI
	var_95_int = 2; // 0xe90 PushI
	var_96_int = 530437; // 0xe91 PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0xe92 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0xe94 PushV
	var_98_object = var_93_object; // 0xe95 Mov
	var_99_int = 545; // 0xe96 MovI
	func_3869(var_97_bool, var_98_object, var_99_int); // 0xe97 NEW_2
	return 2; // 0xe99 Return
}


func_3470()
{
	var_45_string = "oob10Mat2"; // 0xd8f PushS
	var_46_int = 1; // 0xd90 PushI
	SetVariable(var_45_string, var_46_int); // 0xd91 Func
	return 0; // 0xd93 Return
}


func_2706(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0xa92 PushV
	var_44_string = "player"; // 0xa93 PushS
	FindActor(var_42_object, var_44_string); // 0xa94 Func
	var_45_bool = var_42_object == 0; // 0xa96 Not
	if(var_45_bool == 0) goto Label_2714; // 0xa97 JumpB
	var_39_bool = 0; // 0xa98 MovB
	return 4; // 0xa99 Return
	
Label_2714:
	var_46_float = 0; var_47_object = Obj(); // 0xa9a PushV
	var_47_object = var_42_object; // 0xa9b Mov
	func_2924(var_47_object); // 0xa9c NEW_2
	var_54_float = 90000.0; // 0xa9e PushF
	var_55_bool = var_46_float > var_54_float; // 0xa9f GT
	if(var_55_bool == 0) goto Label_2723; // 0xaa0 JumpB
	var_39_bool = 0; // 0xaa1 MovB
	return 4; // 0xaa2 Return
	
Label_2723:
	CanSee(var_43_bool, var_42_object); // 0xaa3 Func
	var_39_bool = var_43_bool; // 0xaa5 Mov
	return 4; // 0xaa6 Return
}


func_3476()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xd94 PushV
	var_53_string = "b10q04"; // 0xd95 PushS
	var_54_int = 1; // 0xd96 PushI
	SetVariable(var_53_string, var_54_int); // 0xd97 Func
	var_55_object = Obj(); // 0xd99 PushV
	func_3897(var_55_object); // 0xd9a NEW_2
	var_52_object = var_55_object; // 0xd9b Mov
	var_62_string = "b10q04MatGotoMorlok"; // 0xd9d PushS
	var_63_string = "pt_b10q04_morlok"; // 0xd9e PushS
	var_64_int = 0; // 0xd9f PushI
	var_65_int = 530534; // 0xda0 PushI
	var_66_float = 0; // 0xda1 PushV
	func_3276(var_66_float); // 0xda2 NEW_2
	AddMark(var_62_string, var_63_string, var_64_int, var_65_int, var_66_float); // 0xda4 ObjFunc
	func_3713(); // 0xda7 NEW_2
	func_3726(); // 0xdaa NEW_2
	var_100_bool = 0; var_101_string = ""; var_102_string = ""; // 0xdac PushV
	var_101_string = "quest_b10_04"; // 0xdad MovS
	var_102_string = "place_morloks"; // 0xdae MovS
	func_3264(var_100_bool, var_101_string, var_102_string); // 0xdaf NEW_2
	return 2; // 0xdb1 Return
}


func_149(var_2_object, var_595_string)
{
	var_596_bool = 0; // 0x96 PushV
	func_3328(var_596_bool); // 0x97 NEW_2
	var_597_bool = var_596_bool == 0; // 0x99 Not
	if(var_597_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_598_bool = var_595_string == var_2_object; // 0x9c Eq
	if(var_598_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_599_string = ""; var_600_bool = 0; // 0x9f PushV
	var_599_string = var_595_string; // 0xa0 Mov
	var_601_string = ""; // 0xa1 PushS
	var_602_bool = var_595_string == var_601_string; // 0xa2 Eq
	if(var_602_bool == 0) goto Label_166; // 0xa3 JumpB
	var_600_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_3195(var_599_string, var_600_bool); // 0xa7 NEW_2
	var_2_object = var_595_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_600_bool = 1; // 0xa6 MovB
}


func_3225()
{
	var_34_bool = 0; // 0xc99 PushV
	func_3328(var_34_bool); // 0xc9a NEW_2
	if(var_34_bool == 0) goto Label_3231; // 0xc9c JumpB
	lshStopSpeech(); // 0xc9d Func
	
Label_3231:
	return 0; // 0xc9f Return
}


func_1179(var_0_object, var_1_object, var_2_object, var_3_string, var_392_object, var_393_object)
{
	var_0_object = var_393_object; // 0x49c TMov
	var_1_object = var_392_object; // 0x49d TMov
	var_3_string = 0; // 0x49e TMovB
	var_398_int = 1; // 0x49f PushI
	if(var_398_int == 0) goto Label_1232; // 0x4a0 JumpB
	var_399_string = ""; // 0x4a1 PushV
	var_399_string = "Neutral"; // 0x4a2 MovS
	func_1262(var_393_object, var_399_string); // 0x4a3 NEW_2
	var_407_int = 521382; // 0x4a5 PushI
	SetMessage(var_407_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_408_bool = 0; var_409_object = Obj(); // 0x4aa PushV
	var_409_object = var_1_object; // 0x4ab MovT
	func_3569(var_409_object); // 0x4ac NEW_2
	if(var_408_bool == 0) goto Label_1204; // 0x4ae JumpB
	var_414_int = 521383; // 0x4af PushI
	var_415_int = 25136; // 0x4b0 PushI
	var_416_int = 22561; // 0x4b1 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x4b2 TObjFunc
	
Label_1204:
	var_417_bool = 0; var_418_object = Obj(); // 0x4b4 PushV
	var_418_object = var_1_object; // 0x4b5 MovT
	func_3581(var_418_object); // 0x4b6 NEW_2
	if(var_417_bool == 0) goto Label_1214; // 0x4b8 JumpB
	var_423_int = 521412; // 0x4b9 PushI
	var_424_int = 22591; // 0x4ba PushI
	var_425_int = 22590; // 0x4bb PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x4bc TObjFunc
	
Label_1214:
	var_426_bool = 0; var_427_object = Obj(); // 0x4be PushV
	var_427_object = var_1_object; // 0x4bf MovT
	func_3605(var_427_object); // 0x4c0 NEW_2
	if(var_426_bool == 0) goto Label_1224; // 0x4c2 JumpB
	var_432_int = 521519; // 0x4c3 PushI
	var_433_int = 25119; // 0x4c4 PushI
	var_434_int = 22680; // 0x4c5 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x4c6 TObjFunc
	
Label_1224:
	var_435_int = 521384; // 0x4c8 PushI
	var_436_int = -1; // 0x4c9 PushI
	var_437_int = 22562; // 0x4ca PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x4cb TObjFunc
	goto Label_1232; // 0x4cd Jump
	
Label_1232:
	var_438_bool = 0; // 0x4d0 PushV
	func_3328(var_438_bool); // 0x4d1 NEW_2
	if(var_438_bool == 0) goto Label_1247; // 0x4d3 JumpB
	
Label_1236:
	lshWaitForAnimEnd(); // 0x4d4 Func
	var_439_string = var_3_string; // 0x4d6 PushT
	if(var_439_string == 0) goto Label_1241; // 0x4d7 JumpB
	goto Label_1246; // 0x4d8 Jump
	
Label_1246:
	goto Label_1261; // 0x4de Jump
	
Label_1261:
	return 0; // 0x4ed Return
	
Label_1241:
	var_440_string = ""; // 0x4d9 PushV
	var_440_string = var_2_object; // 0x4da MovT
	func_3179(var_440_string); // 0x4db NEW_2
	goto Label_1236; // 0x4dd Jump
	
Label_1247:
	var_441_string = "all"; // 0x4df PushS
	var_442_string = "idle"; // 0x4e0 PushS
	PlayAnimation(var_441_string, var_442_string); // 0x4e1 Func
	
Label_1251:
	WaitForAnimEnd(); // 0x4e3 Func
	var_443_string = var_3_string; // 0x4e5 PushT
	if(var_443_string == 0) goto Label_1256; // 0x4e6 JumpB
	goto Label_1261; // 0x4e7 Jump
	
Label_1256:
	var_444_string = "all"; // 0x4e8 PushS
	var_445_string = "idle"; // 0x4e9 PushS
	PlayAnimation(var_444_string, var_445_string); // 0x4ea Func
	goto Label_1251; // 0x4ec Jump
}


func_3739()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xe9b PushV
	var_59_int = 256; // 0xe9c PushI
	var_60_int = 1; // 0xe9d PushI
	var_61_int = 521028; // 0xe9e PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xe9f Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xea1 PushV
	var_63_object = var_58_object; // 0xea2 Mov
	var_64_int = 253; // 0xea3 MovI
	func_3869(var_62_bool, var_63_object, var_64_int); // 0xea4 NEW_2
	return 2; // 0xea6 Return
}


func_3232(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xca0 PushV
	self(var_129_object); // 0xca1 Func
	var_127_object = var_129_object; // 0xca3 Mov
	return 2; // 0xca4 Return
}


func_2465(var_0_object, var_629_int, var_630_object)
{
	var_632_object = Obj(); var_633_bool = 0; var_634_int = 0; var_635_bool = 0; var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; // 0x9a1 PushV
	var_0_object = var_630_object; // 0x9a2 TMov
	var_640_bool = 0; var_641_object = Obj(); var_642_float = 0; // 0x9a3 PushV
	var_641_object = var_630_object; // 0x9a4 Mov
	var_642_float = 70.0; // 0x9a5 MovF
	func_2956(var_641_object, var_642_float); // 0x9a6 NEW_2
	var_643_bool = var_640_bool == 0; // 0x9a8 Not
	if(var_643_bool == 0) goto Label_2476; // 0x9a9 JumpB
	var_629_int = -2; // 0x9aa MovI
	return 8; // 0x9ab Return
	
Label_2476:
	CreateDialog(var_636_object); // 0x9ac Func
	var_644_int = 0; // 0x9ae PushV
	func_3322(var_644_int); // 0x9af NEW_2
	SetNPCName(var_644_int); // 0x9b1 ObjFunc
	var_645_int = 0; // 0x9b3 PushV
	func_3320(var_645_int); // 0x9b4 NEW_2
	SetNPCDescription(var_645_int); // 0x9b6 ObjFunc
	var_646_string = ""; // 0x9b8 PushV
	func_3324(var_646_string); // 0x9b9 NEW_2
	SetPhoto(var_646_string); // 0x9bb ObjFunc
	var_647_string = ""; // 0x9bd PushV
	func_3326(var_647_string); // 0x9be NEW_2
	SetPhoto2(var_647_string); // 0x9c0 ObjFunc
	var_648_int = 0; // 0x9c2 PushV
	func_3947(var_648_int); // 0x9c3 NEW_2
	SetPlayerName(var_648_int); // 0x9c5 ObjFunc
	var_638_int = -1; // 0x9c7 MovI
	IsOverrideActive(var_637_bool); // 0x9c8 Func
	var_649_bool = var_637_bool; // 0x9ca Push
	if(var_649_bool == 0) goto Label_2510; // 0x9cb JumpB
	var_629_int = -2; // 0x9cc MovI
	return 8; // 0x9cd Return
	
Label_2510:
	DoDialog(var_636_object); // 0x9ce Func
	var_650_bool = 0; var_651_object = Obj(); // 0x9d0 PushV
	var_652_object = Obj(); // 0x9d1 PushV
	func_3232(var_652_object); // 0x9d2 NEW_2
	var_651_object = var_652_object; // 0x9d3 Mov
	func_3041(var_650_bool, var_651_object); // 0x9d5 NEW_2
	var_653_object = Obj(); var_654_object = Obj(); // 0x9d7 PushV
	var_653_object = var_630_object; // 0x9d8 Mov
	var_654_object = var_636_object; // 0x9d9 Mov
	TaskCall(11); // 0x9da TaskCall
	func_2546(var_655_object, var_656_object, var_657_string, var_658_bool, var_653_object, var_654_object); // 0x9db NEW_2
	TaskReturn(); // 0x9dc TaskReturn
	IsDialogEnd(var_639_bool); // 0x9de ObjFunc
	
Label_2528:
	var_683_bool = var_639_bool == 0; // 0x9e0 Not
	if(var_683_bool == 0) goto Label_2535; // 0x9e1 JumpB
	sync(); // 0x9e2 Func
	IsDialogEnd(var_639_bool); // 0x9e4 ObjFunc
	goto Label_2528; // 0x9e6 Jump
	
Label_2535:
	var_684_object = Obj(); // 0x9e7 PushV
	var_684_object = var_630_object; // 0x9e8 Mov
	func_3024(); // 0x9e9 NEW_2
	StopDialog(var_636_object); // 0x9eb Func
	GetReturnValue(var_638_int); // 0x9ed ObjFunc
	var_629_int = var_638_int; // 0x9ef Mov
	return 8; // 0x9f0 Return
}


func_3238(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xca6 PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xca7 Or
	var_96_float = sqrt(var_97_int); // 0xca8 Sqrt2
	var_98_float = 0.0; // 0xca9 PushF
	var_99_bool = var_96_float < var_98_float; // 0xcaa LT
	if(var_99_bool == 0) goto Label_3246; // 0xcab JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xcac MovV
	return 2; // 0xcad Return
	
Label_3246:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xcae Div2
	return 2; // 0xcaf Return
}


func_2728()
{
	var_687_float = 0; var_688_float = 0; // 0xaa8 PushV
	var_689_int = 8; // 0xaa9 PushI
	var_690_int = 16; // 0xaaa PushI
	rand(var_688_float, var_689_int, var_690_int); // 0xaab Func
	var_691_int = 10; // 0xaad PushI
	SetTimer(var_691_int, var_688_float); // 0xaae Func
	return 2; // 0xab0 Return
}


func_3752()
{
	var_118_object = Obj(); var_119_object = Obj(); // 0xea8 PushV
	var_120_int = 270; // 0xea9 PushI
	var_121_int = 2; // 0xeaa PushI
	var_122_int = 521214; // 0xeab PushI
	CreateDiaryEntry(var_119_object, var_120_int, var_121_int, var_122_int); // 0xeac Func
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0; // 0xeae PushV
	var_124_object = var_119_object; // 0xeaf Mov
	var_125_int = -1; // 0xeb0 MovI
	func_3869(var_123_bool, var_124_object, var_125_int); // 0xeb1 NEW_2
	return 2; // 0xeb3 Return
}


func_687(var_0_object, var_1_object, var_2_object, var_3_string, var_306_object, var_307_object)
{
	var_0_object = var_307_object; // 0x2b0 TMov
	var_1_object = var_306_object; // 0x2b1 TMov
	var_3_string = 0; // 0x2b2 TMovB
	var_312_int = 1; // 0x2b3 PushI
	if(var_312_int == 0) goto Label_750; // 0x2b4 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x2b5 PushV
	var_314_object = var_1_object; // 0x2b6 MovT
	func_3701(var_314_object); // 0x2b7 NEW_2
	if(var_313_bool == 0) goto Label_713; // 0x2b9 JumpB
	var_321_string = ""; // 0x2ba PushV
	var_321_string = "Rage"; // 0x2bb MovS
	func_780(var_307_object, var_321_string); // 0x2bc NEW_2
	var_329_int = 520984; // 0x2be PushI
	SetMessage(var_329_int); // 0x2bf TObjFunc
	ClearReplies(); // 0x2c1 TObjFunc
	var_330_int = 528518; // 0x2c3 PushI
	var_331_int = 29911; // 0x2c4 PushI
	var_332_int = 29910; // 0x2c5 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x2c6 TObjFunc
	goto Label_750; // 0x2c8 Jump
	
Label_750:
	var_333_bool = 0; // 0x2ee PushV
	func_3328(var_333_bool); // 0x2ef NEW_2
	if(var_333_bool == 0) goto Label_765; // 0x2f1 JumpB
	
Label_754:
	lshWaitForAnimEnd(); // 0x2f2 Func
	var_334_string = var_3_string; // 0x2f4 PushT
	if(var_334_string == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_764; // 0x2f6 Jump
	
Label_764:
	goto Label_779; // 0x2fc Jump
	
Label_779:
	return 0; // 0x30b Return
	
Label_759:
	var_335_string = ""; // 0x2f7 PushV
	var_335_string = var_2_object; // 0x2f8 MovT
	func_3179(var_335_string); // 0x2f9 NEW_2
	goto Label_754; // 0x2fb Jump
	
Label_765:
	var_336_string = "all"; // 0x2fd PushS
	var_337_string = "idle"; // 0x2fe PushS
	PlayAnimation(var_336_string, var_337_string); // 0x2ff Func
	
Label_769:
	WaitForAnimEnd(); // 0x301 Func
	var_338_string = var_3_string; // 0x303 PushT
	if(var_338_string == 0) goto Label_774; // 0x304 JumpB
	goto Label_779; // 0x305 Jump
	
Label_774:
	var_339_string = "all"; // 0x306 PushS
	var_340_string = "idle"; // 0x307 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x308 Func
	goto Label_769; // 0x30a Jump
	
Label_713:
	var_341_string = ""; // 0x2c9 PushV
	var_341_string = "Neutral"; // 0x2ca MovS
	func_780(var_307_object, var_341_string); // 0x2cb NEW_2
	var_342_int = 520986; // 0x2cd PushI
	SetMessage(var_342_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_343_bool = 0; var_344_object = Obj(); // 0x2d2 PushV
	var_344_object = var_1_object; // 0x2d3 MovT
	func_3545(var_344_object); // 0x2d4 NEW_2
	if(var_343_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_349_int = 521209; // 0x2d7 PushI
	var_350_int = 29920; // 0x2d8 PushI
	var_351_int = 22405; // 0x2d9 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x2da TObjFunc
	
Label_732:
	var_352_bool = 0; var_353_object = Obj(); // 0x2dc PushV
	var_353_object = var_1_object; // 0x2dd MovT
	func_3557(var_353_object); // 0x2de NEW_2
	if(var_352_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_358_int = 521216; // 0x2e1 PushI
	var_359_int = 22411; // 0x2e2 PushI
	var_360_int = 22410; // 0x2e3 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x2e4 TObjFunc
	
Label_742:
	var_361_int = 520987; // 0x2e6 PushI
	var_362_int = -1; // 0x2e7 PushI
	var_363_int = 22200; // 0x2e8 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x2e9 TObjFunc
	goto Label_750; // 0x2eb Jump
}


func_3248(var_315_int, var_316_string)
{
	var_317_int = 0; var_318_int = 0; // 0xcb0 PushV
	GetVariable(var_316_string, var_318_int); // 0xcb1 Func
	var_315_int = var_318_int; // 0xcb3 Mov
	return 2; // 0xcb4 Return
}


func_2737()
{
	var_686_int = 10; // 0xab1 PushI
	KillTimer(var_686_int); // 0xab2 Func
	return 0; // 0xab4 Return
}


func_3507()
{
	var_108_object = Obj(); var_109_string = ""; var_110_float = 0; // 0xdb4 PushV
	var_111_object = Obj(); // 0xdb5 PushV
	func_3897(var_111_object); // 0xdb6 NEW_2
	var_108_object = var_111_object; // 0xdb7 Mov
	var_109_string = "pt_b10q04_morlok"; // 0xdb9 MovS
	var_110_float = 2; // 0xdba MovI
	func_3914(var_108_object, var_109_string, var_110_float); // 0xdbb NEW_2
	var_131_object = Obj(); // 0xdbd PushV
	func_3897(var_131_object); // 0xdbe NEW_2
	ShowMap(var_131_object); // 0xdc0 ObjFunc
	return 0; // 0xdc2 Return
}


func_3253(var_134_object, var_135_string)
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_object = Obj(); // 0xcb5 PushV
	GetMainOutdoorScene(var_138_object); // 0xcb6 Func
	var_140_string = ".bin"; // 0xcb8 PushS
	var_141_int = var_135_string + var_140_string; // 0xcb9 Add
	AddBlankActor(var_139_object, var_138_object, var_135_string, var_141_int); // 0xcba Func
	var_134_object = var_139_object; // 0xcbc Mov
	return 4; // 0xcbd Return
}


func_3765()
{
	var_149_object = Obj(); var_150_object = Obj(); // 0xeb5 PushV
	var_151_int = 273; // 0xeb6 PushI
	var_152_int = 2; // 0xeb7 PushI
	var_153_int = 521227; // 0xeb8 PushI
	CreateDiaryEntry(var_150_object, var_151_int, var_152_int, var_153_int); // 0xeb9 Func
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0; // 0xebb PushV
	var_155_object = var_150_object; // 0xebc Mov
	var_156_int = 270; // 0xebd MovI
	func_3869(var_154_bool, var_155_object, var_156_int); // 0xebe NEW_2
	return 2; // 0xec0 Return
}


func_437(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0x1b6 PushV
	func_3328(var_228_bool); // 0x1b7 NEW_2
	var_229_bool = var_228_bool == 0; // 0x1b9 Not
	if(var_229_bool == 0) goto Label_444; // 0x1ba JumpB
	return 0; // 0x1bb Return
	
Label_444:
	var_230_bool = var_227_string == var_2_object; // 0x1bc Eq
	if(var_230_bool == 0) goto Label_447; // 0x1bd JumpB
	return 0; // 0x1be Return
	
Label_447:
	var_231_string = ""; var_232_bool = 0; // 0x1bf PushV
	var_231_string = var_227_string; // 0x1c0 Mov
	var_233_string = ""; // 0x1c1 PushS
	var_234_bool = var_227_string == var_233_string; // 0x1c2 Eq
	if(var_234_bool == 0) goto Label_454; // 0x1c3 JumpB
	var_232_bool = 0; // 0x1c4 MovB
	goto Label_455; // 0x1c5 Jump
	
Label_455:
	func_3195(var_231_string, var_232_bool); // 0x1c7 NEW_2
	var_2_object = var_227_string; // 0x1c9 TMov
	return 0; // 0x1ca Return
	
Label_454:
	var_232_bool = 1; // 0x1c6 MovB
}


func_3264(var_100_bool, var_101_string, var_102_string)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0xcc0 PushV
	FindActor(var_104_object, var_101_string); // 0xcc1 Func
	var_105_bool = var_104_object == 0; // 0xcc3 NullEq
	if(var_105_bool == 0) goto Label_3271; // 0xcc4 JumpB
	var_100_bool = 0; // 0xcc5 MovB
	return 2; // 0xcc6 Return
	
Label_3271:
	Trigger(var_104_object, var_102_string); // 0xcc7 Func
	var_100_bool = 1; // 0xcc9 MovB
	return 2; // 0xcca Return
}


func_3778()
{
	var_126_object = Obj(); var_127_object = Obj(); // 0xec2 PushV
	var_128_int = 271; // 0xec3 PushI
	var_129_int = 2; // 0xec4 PushI
	var_130_int = 521215; // 0xec5 PushI
	CreateDiaryEntry(var_127_object, var_128_int, var_129_int, var_130_int); // 0xec6 Func
	var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; // 0xec8 PushV
	var_132_object = var_127_object; // 0xec9 Mov
	var_133_int = 270; // 0xeca MovI
	func_3869(var_131_bool, var_132_object, var_133_int); // 0xecb NEW_2
	return 2; // 0xecd Return
}


func_3523()
{
	var_483_string = "b10MatVisit"; // 0xdc4 PushS
	var_484_int = 1; // 0xdc5 PushI
	SetVariable(var_483_string, var_484_int); // 0xdc6 Func
	return 0; // 0xdc8 Return
}


func_3529()
{
	func_3791(); // 0xdcb NEW_2
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0xdcd PushV
	var_83_string = "quest_b8_01"; // 0xdce MovS
	var_84_string = "fail"; // 0xdcf MovS
	func_3264(var_82_bool, var_83_string, var_84_string); // 0xdd0 NEW_2
	return 0; // 0xdd2 Return
}


func_3276(var_66_float)
{
	var_67_float = 0; var_68_float = 0; // 0xccc PushV
	GetGameTime(var_68_float); // 0xccd Func
	var_66_float = var_68_float; // 0xccf Mov
	return 2; // 0xcd0 Return
}


func_3791()
{
	var_74_object = Obj(); var_75_object = Obj(); // 0xecf PushV
	var_76_int = 606; // 0xed0 PushI
	var_77_int = 1; // 0xed1 PushI
	var_78_int = 531260; // 0xed2 PushI
	CreateDiaryEntry(var_75_object, var_76_int, var_77_int, var_78_int); // 0xed3 Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0xed5 PushV
	var_80_object = var_75_object; // 0xed6 Mov
	var_81_int = 284; // 0xed7 MovI
	func_3869(var_79_bool, var_80_object, var_81_int); // 0xed8 NEW_2
	return 2; // 0xeda Return
}


func_3024()
{
	var_271_bool = 0; var_272_bool = 0; // 0xbd0 PushV
	CameraSwitchToNormal(); // 0xbd1 Func
	var_273_bool = 0; // 0xbd3 PushV
	func_3328(var_273_bool); // 0xbd4 NEW_2
	if(var_273_bool == 0) goto Label_3032; // 0xbd6 JumpB
	goto Label_3040; // 0xbd7 Jump
	
Label_3040:
	return 2; // 0xbe0 Return
	
Label_3032:
	var_274_string = "head"; // 0xbd8 PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0xbd9 Func
	var_275_bool = var_272_bool; // 0xbdb Push
	if(var_275_bool == 0) goto Label_3040; // 0xbdc JumpB
	var_276_string = "head"; // 0xbdd PushS
	UnlookAsync(var_276_string); // 0xbde Func
}


func_3281(var_180_int)
{
	var_181_float = 0; var_182_float = 0; // 0xcd1 PushV
	GetGameTime(var_182_float); // 0xcd2 Func
	var_183_int = 1; // 0xcd4 PushI
	var_184_int = 0; // 0xcd5 PushV
	var_185_int = 24; // 0xcd6 PushI
	var_184_int = var_182_float / var_182_float; // 0xcd7 Div2
	var_180_int = var_183_int + var_184_int; // 0xcd8 Add2
	return 2; // 0xcd9 Return
}


func_3539()
{
	var_39_string = "oob12Mat1"; // 0xdd4 PushS
	var_40_int = 1; // 0xdd5 PushI
	SetVariable(var_39_string, var_40_int); // 0xdd6 Func
	return 0; // 0xdd8 Return
}


func_3545(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0xdda PushV
	var_346_string = "b7q02"; // 0xddb MovS
	func_3248(var_345_int, var_346_string); // 0xddc NEW_2
	var_347_int = 0; // 0xdde PushI
	var_348_bool = var_345_int == var_347_int; // 0xddf Eq
	if(var_348_bool == 0) goto Label_3555; // 0xde0 JumpB
	var_343_bool = 1; // 0xde1 MovB
	return 0; // 0xde2 Return
	
Label_3555:
	var_343_bool = 0; // 0xde3 MovB
	return 0; // 0xde4 Return
}


func_3290(var_279_bool, var_280_int)
{
	var_281_int = 0; // 0xcdb PushV
	func_3281(var_281_int); // 0xcdc NEW_2
	var_279_bool = var_281_int == var_280_int; // 0xcde Eq2
	return 0; // 0xcdf Return
}


func_3804()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xedc PushV
	var_43_int = 286; // 0xedd PushI
	var_44_int = 1; // 0xede PushI
	var_45_int = 521457; // 0xedf PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xee0 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xee2 PushV
	var_47_object = var_42_object; // 0xee3 Mov
	var_48_int = 284; // 0xee4 MovI
	func_3869(var_46_bool, var_47_object, var_48_int); // 0xee5 NEW_2
	return 2; // 0xee7 Return
}


func_3296(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xce0 PushV
	var_58_string = "idle"; // 0xce1 MovS
	var_59_int = var_56_int; // 0xce2 Push
	if(var_59_int == 0) goto Label_3301; // 0xce3 JumpB
	var_58_string = var_58_string + var_56_int; // 0xce4 Add2
	
Label_3301:
	var_55_string = var_58_string; // 0xce5 Mov
	return 2; // 0xce6 Return
}


func_3041(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xbe1 PushV
	var_134_string = "voice_common"; // 0xbe2 PushS
	GetVariable(var_134_string, var_132_int); // 0xbe3 Func
	var_135_int = var_132_int; // 0xbe5 Push
	if(var_135_int == 0) goto Label_3079; // 0xbe6 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xbe7 PushV
	var_137_object = var_126_object; // 0xbe8 Mov
	func_3099(var_137_object); // 0xbe9 NEW_2
	var_166_bool = var_136_bool == 0; // 0xbeb Not
	if(var_166_bool == 0) goto Label_3061; // 0xbec JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xbed PushV
	var_168_object = var_126_object; // 0xbee Mov
	func_3136(var_168_object); // 0xbef NEW_2
	var_202_bool = var_167_bool == 0; // 0xbf1 Not
	if(var_202_bool == 0) goto Label_3061; // 0xbf2 JumpB
	var_125_bool = 0; // 0xbf3 MovB
	return 4; // 0xbf4 Return
	
Label_3061:
	var_203_int = 2; // 0xbf5 PushI
	irand(var_133_int, var_203_int); // 0xbf6 Func
	var_204_int = var_133_int; // 0xbf8 Push
	if(var_204_int == 0) goto Label_3074; // 0xbf9 JumpB
	var_205_string = "voice_common"; // 0xbfa PushS
	var_206_int = 1; // 0xbfb PushI
	var_207_int = var_132_int + var_206_int; // 0xbfc Add
	var_208_int = 3; // 0xbfd PushI
	var_209_int = var_207_int / var_208_int; // 0xbfe Mod
	SetVariable(var_205_string, var_209_int); // 0xbff Func
	goto Label_3078; // 0xc01 Jump
	
Label_3078:
	goto Label_3097; // 0xc06 Jump
	
Label_3097:
	var_125_bool = 1; // 0xc19 MovB
	return 4; // 0xc1a Return
	
Label_3074:
	var_210_string = "voice_common"; // 0xc02 PushS
	var_211_int = 0; // 0xc03 PushI
	SetVariable(var_210_string, var_211_int); // 0xc04 Func
	
Label_3079:
	var_212_bool = 0; var_213_object = Obj(); // 0xc07 PushV
	var_213_object = var_126_object; // 0xc08 Mov
	func_3136(var_213_object); // 0xc09 NEW_2
	var_214_bool = var_212_bool == 0; // 0xc0b Not
	if(var_214_bool == 0) goto Label_3093; // 0xc0c JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xc0d PushV
	var_216_object = var_126_object; // 0xc0e Mov
	func_3099(var_216_object); // 0xc0f NEW_2
	var_217_bool = var_215_bool == 0; // 0xc11 Not
	if(var_217_bool == 0) goto Label_3093; // 0xc12 JumpB
	var_125_bool = 0; // 0xc13 MovB
	return 4; // 0xc14 Return
	
Label_3093:
	var_218_string = "voice_common"; // 0xc15 PushS
	var_219_int = 1; // 0xc16 PushI
	SetVariable(var_218_string, var_219_int); // 0xc17 Func
}


func_3557(var_352_bool)
{
	var_354_int = 0; var_355_string = ""; // 0xde6 PushV
	var_355_string = "b7q02"; // 0xde7 MovS
	func_3248(var_354_int, var_355_string); // 0xde8 NEW_2
	var_356_int = 2; // 0xdea PushI
	var_357_bool = var_354_int == var_356_int; // 0xdeb Eq
	if(var_357_bool == 0) goto Label_3567; // 0xdec JumpB
	var_352_bool = 1; // 0xded MovB
	return 0; // 0xdee Return
	
Label_3567:
	var_352_bool = 0; // 0xdef MovB
	return 0; // 0xdf0 Return
}


func_3303(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xce7 PushV
	var_52_int = 0; // 0xce8 MovI
	
Label_3305:
	var_54_string = "all"; // 0xce9 PushS
	var_55_string = ""; var_56_int = 0; // 0xcea PushV
	var_56_int = var_52_int; // 0xceb Mov
	func_3296(var_55_string, var_56_int); // 0xcec NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xcee Func
	var_60_bool = var_53_bool == 0; // 0xcf0 Not
	if(var_60_bool == 0) goto Label_3315; // 0xcf1 JumpB
	goto Label_3318; // 0xcf2 Jump
	
Label_3318:
	var_49_int = var_52_int; // 0xcf6 Mov
	return 4; // 0xcf7 Return
	
Label_3315:
	var_61_int = 1; // 0xcf3 PushI
	var_52_int = var_52_int + var_61_int; // 0xcf4 Add2
	goto Label_3305; // 0xcf5 Jump
}


func_3817()
{
	var_91_object = Obj(); var_92_object = Obj(); // 0xee9 PushV
	var_93_int = 288; // 0xeea PushI
	var_94_int = 1; // 0xeeb PushI
	var_95_int = 521459; // 0xeec PushI
	CreateDiaryEntry(var_92_object, var_93_int, var_94_int, var_95_int); // 0xeed Func
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0; // 0xeef PushV
	var_97_object = var_92_object; // 0xef0 Mov
	var_98_int = 284; // 0xef1 MovI
	func_3869(var_96_bool, var_97_object, var_98_int); // 0xef2 NEW_2
	return 2; // 0xef4 Return
}


func_1262(var_2_object, var_399_string)
{
	var_400_bool = 0; // 0x4ef PushV
	func_3328(var_400_bool); // 0x4f0 NEW_2
	var_401_bool = var_400_bool == 0; // 0x4f2 Not
	if(var_401_bool == 0) goto Label_1269; // 0x4f3 JumpB
	return 0; // 0x4f4 Return
	
Label_1269:
	var_402_bool = var_399_string == var_2_object; // 0x4f5 Eq
	if(var_402_bool == 0) goto Label_1272; // 0x4f6 JumpB
	return 0; // 0x4f7 Return
	
Label_1272:
	var_403_string = ""; var_404_bool = 0; // 0x4f8 PushV
	var_403_string = var_399_string; // 0x4f9 Mov
	var_405_string = ""; // 0x4fa PushS
	var_406_bool = var_399_string == var_405_string; // 0x4fb Eq
	if(var_406_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_404_bool = 0; // 0x4fd MovB
	goto Label_1280; // 0x4fe Jump
	
Label_1280:
	func_3195(var_403_string, var_404_bool); // 0x500 NEW_2
	var_2_object = var_399_string; // 0x502 TMov
	return 0; // 0x503 Return
	
Label_1279:
	var_404_bool = 1; // 0x4ff MovB
}


func_3569(var_408_bool)
{
	var_410_int = 0; var_411_string = ""; // 0xdf2 PushV
	var_411_string = "b8q01"; // 0xdf3 MovS
	func_3248(var_410_int, var_411_string); // 0xdf4 NEW_2
	var_412_int = 1; // 0xdf6 PushI
	var_413_bool = var_410_int == var_412_int; // 0xdf7 Eq
	if(var_413_bool == 0) goto Label_3579; // 0xdf8 JumpB
	var_408_bool = 1; // 0xdf9 MovB
	return 0; // 0xdfa Return
	
Label_3579:
	var_408_bool = 0; // 0xdfb MovB
	return 0; // 0xdfc Return
}


func_2546(var_0_object, var_1_object, var_2_object, var_3_string, var_653_object, var_654_object)
{
	var_0_object = var_654_object; // 0x9f3 TMov
	var_1_object = var_653_object; // 0x9f4 TMov
	var_3_string = 0; // 0x9f5 TMovB
	var_659_int = 1; // 0x9f6 PushI
	if(var_659_int == 0) goto Label_2574; // 0x9f7 JumpB
	var_660_string = ""; // 0x9f8 PushV
	var_660_string = "Neutral"; // 0x9f9 MovS
	func_2604(var_654_object, var_660_string); // 0x9fa NEW_2
	var_668_int = 540551; // 0x9fc PushI
	SetMessage(var_668_int); // 0x9fd TObjFunc
	ClearReplies(); // 0x9ff TObjFunc
	var_669_int = 540552; // 0xa01 PushI
	var_670_int = -1; // 0xa02 PushI
	var_671_int = 42561; // 0xa03 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xa04 TObjFunc
	var_672_int = 540795; // 0xa06 PushI
	var_673_int = -1; // 0xa07 PushI
	var_674_int = 42844; // 0xa08 PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0xa09 TObjFunc
	goto Label_2574; // 0xa0b Jump
	
Label_2574:
	var_675_bool = 0; // 0xa0e PushV
	func_3328(var_675_bool); // 0xa0f NEW_2
	if(var_675_bool == 0) goto Label_2589; // 0xa11 JumpB
	
Label_2578:
	lshWaitForAnimEnd(); // 0xa12 Func
	var_676_string = var_3_string; // 0xa14 PushT
	if(var_676_string == 0) goto Label_2583; // 0xa15 JumpB
	goto Label_2588; // 0xa16 Jump
	
Label_2588:
	goto Label_2603; // 0xa1c Jump
	
Label_2603:
	return 0; // 0xa2b Return
	
Label_2583:
	var_677_string = ""; // 0xa17 PushV
	var_677_string = var_2_object; // 0xa18 MovT
	func_3179(var_677_string); // 0xa19 NEW_2
	goto Label_2578; // 0xa1b Jump
	
Label_2589:
	var_678_string = "all"; // 0xa1d PushS
	var_679_string = "idle"; // 0xa1e PushS
	PlayAnimation(var_678_string, var_679_string); // 0xa1f Func
	
Label_2593:
	WaitForAnimEnd(); // 0xa21 Func
	var_680_string = var_3_string; // 0xa23 PushT
	if(var_680_string == 0) goto Label_2598; // 0xa24 JumpB
	goto Label_2603; // 0xa25 Jump
	
Label_2598:
	var_681_string = "all"; // 0xa26 PushS
	var_682_string = "idle"; // 0xa27 PushS
	PlayAnimation(var_681_string, var_682_string); // 0xa28 Func
	goto Label_2593; // 0xa2a Jump
}


func_3830()
{
	var_113_object = Obj(); var_114_object = Obj(); // 0xef6 PushV
	var_115_int = 578; // 0xef7 PushI
	var_116_int = 2; // 0xef8 PushI
	var_117_int = 530658; // 0xef9 PushI
	CreateDiaryEntry(var_114_object, var_115_int, var_116_int, var_117_int); // 0xefa Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0xefc PushV
	var_119_object = var_114_object; // 0xefd Mov
	var_120_int = 575; // 0xefe MovI
	func_3869(var_118_bool, var_119_object, var_120_int); // 0xeff NEW_2
	return 2; // 0xf01 Return
}


func_3320(var_113_int)
{
	var_113_int = 515545; // 0xcf8 MovI
	return 0; // 0xcf9 Return
}


func_3322(var_112_int)
{
	var_112_int = 502870; // 0xcfa MovI
	return 0; // 0xcfb Return
}


func_3324(var_114_string)
{
	var_114_string = "ui/NPC_Mat.png"; // 0xcfc MovS
	return 0; // 0xcfd Return
}


func_3581(var_417_bool)
{
	var_419_int = 0; var_420_string = ""; // 0xdfe PushV
	var_420_string = "b8q01"; // 0xdff MovS
	func_3248(var_419_int, var_420_string); // 0xe00 NEW_2
	var_421_int = 3; // 0xe02 PushI
	var_422_bool = var_419_int == var_421_int; // 0xe03 Eq
	if(var_422_bool == 0) goto Label_3591; // 0xe04 JumpB
	var_417_bool = 1; // 0xe05 MovB
	return 0; // 0xe06 Return
	
Label_3591:
	var_417_bool = 0; // 0xe07 MovB
	return 0; // 0xe08 Return
}


func_3326(var_115_string)
{
	var_115_string = "ui/NPC_Mat_b.png"; // 0xcfe MovS
	return 0; // 0xcff Return
}


