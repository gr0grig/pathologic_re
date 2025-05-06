task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_bool = 0; // 0x1b PushV
	func_2473(var_33_bool); // 0x1c NEW_2
	if(var_33_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0xd4 PushI
	if(var_34_int == 0) goto Label_350; // 0xd5 JumpB
	func_2398(); // 0xd7 NEW_2
	var_36_int = 26731; // 0xd9 PushI
	var_37_bool = var_33_cvector == var_36_int; // 0xda Eq
	if(var_37_bool == 0) goto Label_225; // 0xdb JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0xdc PushV
	var_38_object = var_1_object; // 0xdd MovT
	var_39_object = var_0_bool; // 0xde MovT
	func_2493(); // 0xdf NEW_2
	
Label_225:
	var_41_int = 26734; // 0xe1 PushI
	var_42_bool = var_33_cvector == var_41_int; // 0xe2 Eq
	if(var_42_bool == 0) goto Label_238; // 0xe3 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xe4 PushV
	var_43_object = var_1_object; // 0xe5 MovT
	var_44_object = var_0_bool; // 0xe6 MovT
	func_2475(); // 0xe7 NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xe9 PushV
	var_70_object = var_1_object; // 0xea MovT
	var_71_object = var_0_bool; // 0xeb MovT
	func_2493(); // 0xec NEW_2
	
Label_238:
	var_72_int = 26735; // 0xee PushI
	var_73_bool = var_33_cvector == var_72_int; // 0xef Eq
	if(var_73_bool == 0) goto Label_246; // 0xf0 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xf1 PushV
	var_74_object = var_1_object; // 0xf2 MovT
	var_75_object = var_0_bool; // 0xf3 MovT
	func_2475(); // 0xf4 NEW_2
	
Label_246:
	var_76_int = 26730; // 0xf6 PushI
	var_77_bool = var_32_bool == var_76_int; // 0xf7 Eq
	if(var_77_bool == 0) goto Label_279; // 0xf8 JumpB
	var_78_string = ""; // 0xf9 PushV
	var_78_string = "Neutral"; // 0xfa MovS
	func_189(var_33_cvector, var_78_string); // 0xfb NEW_2
	var_95_int = 525362; // 0xfd PushI
	SetMessage(var_95_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_96_int = 525363; // 0x102 PushI
	var_97_int = -1; // 0x103 PushI
	var_98_int = 26731; // 0x104 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x105 TObjFunc
	var_99_bool = 0; var_100_object = Obj(); // 0x107 PushV
	var_100_object = var_1_object; // 0x108 MovT
	func_2498(var_100_object); // 0x109 NEW_2
	if(var_99_bool == 0) goto Label_273; // 0x10b JumpB
	var_107_int = 525364; // 0x10c PushI
	var_108_int = 26733; // 0x10d PushI
	var_109_int = 26732; // 0x10e PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x10f TObjFunc
	
Label_273:
	var_110_int = 525368; // 0x111 PushI
	var_111_int = -1; // 0x112 PushI
	var_112_int = 26736; // 0x113 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x114 TObjFunc
	return 0; // 0x116 Return
	
Label_279:
	var_113_int = 26733; // 0x117 PushI
	var_114_bool = var_32_bool == var_113_int; // 0x118 Eq
	if(var_114_bool == 0) goto Label_297; // 0x119 JumpB
	var_115_string = ""; // 0x11a PushV
	var_115_string = "Smile"; // 0x11b MovS
	func_189(var_33_cvector, var_115_string); // 0x11c NEW_2
	var_116_int = 525365; // 0x11e PushI
	SetMessage(var_116_int); // 0x11f TObjFunc
	ClearReplies(); // 0x121 TObjFunc
	var_117_int = 529141; // 0x123 PushI
	var_118_int = 30588; // 0x124 PushI
	var_119_int = 30587; // 0x125 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_120_int = 30588; // 0x129 PushI
	var_121_bool = var_32_bool == var_120_int; // 0x12a Eq
	if(var_121_bool == 0) goto Label_315; // 0x12b JumpB
	var_122_string = ""; // 0x12c PushV
	var_122_string = "Smile"; // 0x12d MovS
	func_189(var_33_cvector, var_122_string); // 0x12e NEW_2
	var_123_int = 529142; // 0x130 PushI
	SetMessage(var_123_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_124_int = 529143; // 0x135 PushI
	var_125_int = 30590; // 0x136 PushI
	var_126_int = 30589; // 0x137 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_127_int = 30590; // 0x13b PushI
	var_128_bool = var_32_bool == var_127_int; // 0x13c Eq
	if(var_128_bool == 0) goto Label_338; // 0x13d JumpB
	var_129_string = ""; // 0x13e PushV
	var_129_string = "Untrust"; // 0x13f MovS
	func_189(var_33_cvector, var_129_string); // 0x140 NEW_2
	var_130_int = 529144; // 0x142 PushI
	SetMessage(var_130_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_131_int = 525366; // 0x147 PushI
	var_132_int = -1; // 0x148 PushI
	var_133_int = 26734; // 0x149 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x14a TObjFunc
	var_134_int = 525367; // 0x14c PushI
	var_135_int = -1; // 0x14d PushI
	var_136_int = 26735; // 0x14e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_3_object = 1; // 0x152 TMovB
	var_137_bool = 0; // 0x153 PushV
	func_2473(var_137_bool); // 0x154 NEW_2
	if(var_137_bool == 0) goto Label_346; // 0x156 JumpB
	lshStopAnimation(); // 0x157 Func
	goto Label_348; // 0x159 Jump
	
Label_348:
	return 0; // 0x15c Return
	
Label_346:
	StopAnimation(); // 0x15a Func
	
Label_350:
	return 0; // 0x15e Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x201 PushI
	if(var_34_int == 0) goto Label_576; // 0x202 JumpB
	func_2398(); // 0x204 NEW_2
	var_36_int = 26818; // 0x206 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x207 Eq
	if(var_37_bool == 0) goto Label_541; // 0x208 JumpB
	var_38_string = ""; // 0x209 PushV
	var_38_string = "Neutral"; // 0x20a MovS
	func_490(var_33_cvector, var_38_string); // 0x20b NEW_2
	var_55_int = 525462; // 0x20d PushI
	SetMessage(var_55_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_56_int = 529295; // 0x212 PushI
	var_57_int = 30750; // 0x213 PushI
	var_58_int = 30749; // 0x214 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x215 TObjFunc
	var_59_int = 525463; // 0x217 PushI
	var_60_int = -1; // 0x218 PushI
	var_61_int = 26819; // 0x219 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_62_int = 30750; // 0x21d PushI
	var_63_bool = var_32_bool == var_62_int; // 0x21e Eq
	if(var_63_bool == 0) goto Label_564; // 0x21f JumpB
	var_64_string = ""; // 0x220 PushV
	var_64_string = "Neutral"; // 0x221 MovS
	func_490(var_33_cvector, var_64_string); // 0x222 NEW_2
	var_65_int = 529296; // 0x224 PushI
	SetMessage(var_65_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_66_int = 529297; // 0x229 PushI
	var_67_int = -1; // 0x22a PushI
	var_68_int = 30751; // 0x22b PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x22c TObjFunc
	var_69_int = 529298; // 0x22e PushI
	var_70_int = -1; // 0x22f PushI
	var_71_int = 30752; // 0x230 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x231 TObjFunc
	return 0; // 0x233 Return
	
Label_564:
	var_3_object = 1; // 0x234 TMovB
	var_72_bool = 0; // 0x235 PushV
	func_2473(var_72_bool); // 0x236 NEW_2
	if(var_72_bool == 0) goto Label_572; // 0x238 JumpB
	lshStopAnimation(); // 0x239 Func
	goto Label_574; // 0x23b Jump
	
Label_574:
	return 0; // 0x23e Return
	
Label_572:
	StopAnimation(); // 0x23c Func
	
Label_576:
	return 0; // 0x240 Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x2f2 PushI
	if(var_34_int == 0) goto Label_1067; // 0x2f3 JumpB
	func_2398(); // 0x2f5 NEW_2
	var_36_int = 27214; // 0x2f7 PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x2f8 Eq
	if(var_37_bool == 0) goto Label_767; // 0x2f9 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x2fa PushV
	var_38_object = var_1_object; // 0x2fb MovT
	var_39_object = var_0_bool; // 0x2fc MovT
	func_2484(); // 0x2fd NEW_2
	
Label_767:
	var_65_int = 43013; // 0x2ff PushI
	var_66_bool = var_33_cvector == var_65_int; // 0x300 Eq
	if(var_66_bool == 0) goto Label_775; // 0x301 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x302 PushV
	var_67_object = var_1_object; // 0x303 MovT
	var_68_object = var_0_bool; // 0x304 MovT
	func_2484(); // 0x305 NEW_2
	
Label_775:
	var_69_int = 43010; // 0x307 PushI
	var_70_bool = var_33_cvector == var_69_int; // 0x308 Eq
	if(var_70_bool == 0) goto Label_783; // 0x309 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0x30a PushV
	var_71_object = var_1_object; // 0x30b MovT
	var_72_object = var_0_bool; // 0x30c MovT
	func_2484(); // 0x30d NEW_2
	
Label_783:
	var_73_int = 43005; // 0x30f PushI
	var_74_bool = var_33_cvector == var_73_int; // 0x310 Eq
	if(var_74_bool == 0) goto Label_791; // 0x311 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x312 PushV
	var_75_object = var_1_object; // 0x313 MovT
	var_76_object = var_0_bool; // 0x314 MovT
	func_2484(); // 0x315 NEW_2
	
Label_791:
	var_77_int = 43002; // 0x317 PushI
	var_78_bool = var_33_cvector == var_77_int; // 0x318 Eq
	if(var_78_bool == 0) goto Label_799; // 0x319 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x31a PushV
	var_79_object = var_1_object; // 0x31b MovT
	var_80_object = var_0_bool; // 0x31c MovT
	func_2484(); // 0x31d NEW_2
	
Label_799:
	var_81_int = 43000; // 0x31f PushI
	var_82_bool = var_33_cvector == var_81_int; // 0x320 Eq
	if(var_82_bool == 0) goto Label_807; // 0x321 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x322 PushV
	var_83_object = var_1_object; // 0x323 MovT
	var_84_object = var_0_bool; // 0x324 MovT
	func_2484(); // 0x325 NEW_2
	
Label_807:
	var_85_int = 31148; // 0x327 PushI
	var_86_bool = var_33_cvector == var_85_int; // 0x328 Eq
	if(var_86_bool == 0) goto Label_815; // 0x329 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x32a PushV
	var_87_object = var_1_object; // 0x32b MovT
	var_88_object = var_0_bool; // 0x32c MovT
	func_2493(); // 0x32d NEW_2
	
Label_815:
	var_90_int = 27211; // 0x32f PushI
	var_91_bool = var_32_bool == var_90_int; // 0x330 Eq
	if(var_91_bool == 0) goto Label_853; // 0x331 JumpB
	var_92_string = ""; // 0x332 PushV
	var_92_string = "Grin"; // 0x333 MovS
	func_731(var_33_cvector, var_92_string); // 0x334 NEW_2
	var_109_int = 525919; // 0x336 PushI
	SetMessage(var_109_int); // 0x337 TObjFunc
	ClearReplies(); // 0x339 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x33b PushV
	var_111_object = var_1_object; // 0x33c MovT
	func_2510(var_111_object); // 0x33d NEW_2
	if(var_110_bool == 0) goto Label_837; // 0x33f JumpB
	var_118_int = 525920; // 0x340 PushI
	var_119_int = 42995; // 0x341 PushI
	var_120_int = 27212; // 0x342 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x343 TObjFunc
	
Label_837:
	var_121_int = 529685; // 0x345 PushI
	var_122_int = -1; // 0x346 PushI
	var_123_int = 31148; // 0x347 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x348 TObjFunc
	var_124_int = 525923; // 0x34a PushI
	var_125_int = -1; // 0x34b PushI
	var_126_int = 27215; // 0x34c PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x34d TObjFunc
	var_127_int = 529057; // 0x34f PushI
	var_128_int = -1; // 0x350 PushI
	var_129_int = 30499; // 0x351 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x352 TObjFunc
	return 0; // 0x354 Return
	
Label_853:
	var_130_int = 42995; // 0x355 PushI
	var_131_bool = var_32_bool == var_130_int; // 0x356 Eq
	if(var_131_bool == 0) goto Label_876; // 0x357 JumpB
	var_132_string = ""; // 0x358 PushV
	var_132_string = "Untrust"; // 0x359 MovS
	func_731(var_33_cvector, var_132_string); // 0x35a NEW_2
	var_133_int = 540917; // 0x35c PushI
	SetMessage(var_133_int); // 0x35d TObjFunc
	ClearReplies(); // 0x35f TObjFunc
	var_134_int = 540918; // 0x361 PushI
	var_135_int = 27213; // 0x362 PushI
	var_136_int = 42996; // 0x363 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x364 TObjFunc
	var_137_int = 540919; // 0x366 PushI
	var_138_int = 42998; // 0x367 PushI
	var_139_int = 42997; // 0x368 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x369 TObjFunc
	return 0; // 0x36b Return
	
Label_876:
	var_140_int = 42998; // 0x36c PushI
	var_141_bool = var_32_bool == var_140_int; // 0x36d Eq
	if(var_141_bool == 0) goto Label_899; // 0x36e JumpB
	var_142_string = ""; // 0x36f PushV
	var_142_string = "Smile"; // 0x370 MovS
	func_731(var_33_cvector, var_142_string); // 0x371 NEW_2
	var_143_int = 540920; // 0x373 PushI
	SetMessage(var_143_int); // 0x374 TObjFunc
	ClearReplies(); // 0x376 TObjFunc
	var_144_int = 540921; // 0x378 PushI
	var_145_int = 30501; // 0x379 PushI
	var_146_int = 42999; // 0x37a PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x37b TObjFunc
	var_147_int = 540922; // 0x37d PushI
	var_148_int = -1; // 0x37e PushI
	var_149_int = 43000; // 0x37f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x380 TObjFunc
	return 0; // 0x382 Return
	
Label_899:
	var_150_int = 27213; // 0x383 PushI
	var_151_bool = var_32_bool == var_150_int; // 0x384 Eq
	if(var_151_bool == 0) goto Label_922; // 0x385 JumpB
	var_152_string = ""; // 0x386 PushV
	var_152_string = "Neutral"; // 0x387 MovS
	func_731(var_33_cvector, var_152_string); // 0x388 NEW_2
	var_153_int = 525921; // 0x38a PushI
	SetMessage(var_153_int); // 0x38b TObjFunc
	ClearReplies(); // 0x38d TObjFunc
	var_154_int = 529058; // 0x38f PushI
	var_155_int = 30501; // 0x390 PushI
	var_156_int = 30500; // 0x391 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x392 TObjFunc
	var_157_int = 529062; // 0x394 PushI
	var_158_int = 30503; // 0x395 PushI
	var_159_int = 30504; // 0x396 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x397 TObjFunc
	return 0; // 0x399 Return
	
Label_922:
	var_160_int = 30501; // 0x39a PushI
	var_161_bool = var_32_bool == var_160_int; // 0x39b Eq
	if(var_161_bool == 0) goto Label_945; // 0x39c JumpB
	var_162_string = ""; // 0x39d PushV
	var_162_string = "Smile"; // 0x39e MovS
	func_731(var_33_cvector, var_162_string); // 0x39f NEW_2
	var_163_int = 529059; // 0x3a1 PushI
	SetMessage(var_163_int); // 0x3a2 TObjFunc
	ClearReplies(); // 0x3a4 TObjFunc
	var_164_int = 529060; // 0x3a6 PushI
	var_165_int = 30503; // 0x3a7 PushI
	var_166_int = 30502; // 0x3a8 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x3a9 TObjFunc
	var_167_int = 540923; // 0x3ab PushI
	var_168_int = -1; // 0x3ac PushI
	var_169_int = 43002; // 0x3ad PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_170_int = 30503; // 0x3b1 PushI
	var_171_bool = var_32_bool == var_170_int; // 0x3b2 Eq
	if(var_171_bool == 0) goto Label_963; // 0x3b3 JumpB
	var_172_string = ""; // 0x3b4 PushV
	var_172_string = "Untrust"; // 0x3b5 MovS
	func_731(var_33_cvector, var_172_string); // 0x3b6 NEW_2
	var_173_int = 529061; // 0x3b8 PushI
	SetMessage(var_173_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_174_int = 540924; // 0x3bd PushI
	var_175_int = 43004; // 0x3be PushI
	var_176_int = 43003; // 0x3bf PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_177_int = 43004; // 0x3c3 PushI
	var_178_bool = var_32_bool == var_177_int; // 0x3c4 Eq
	if(var_178_bool == 0) goto Label_986; // 0x3c5 JumpB
	var_179_string = ""; // 0x3c6 PushV
	var_179_string = "Untrust"; // 0x3c7 MovS
	func_731(var_33_cvector, var_179_string); // 0x3c8 NEW_2
	var_180_int = 540925; // 0x3ca PushI
	SetMessage(var_180_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_181_int = 529063; // 0x3cf PushI
	var_182_int = 30507; // 0x3d0 PushI
	var_183_int = 30506; // 0x3d1 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x3d2 TObjFunc
	var_184_int = 540926; // 0x3d4 PushI
	var_185_int = -1; // 0x3d5 PushI
	var_186_int = 43005; // 0x3d6 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x3d7 TObjFunc
	return 0; // 0x3d9 Return
	
Label_986:
	var_187_int = 30507; // 0x3da PushI
	var_188_bool = var_32_bool == var_187_int; // 0x3db Eq
	if(var_188_bool == 0) goto Label_1009; // 0x3dc JumpB
	var_189_string = ""; // 0x3dd PushV
	var_189_string = "Smile"; // 0x3de MovS
	func_731(var_33_cvector, var_189_string); // 0x3df NEW_2
	var_190_int = 529064; // 0x3e1 PushI
	SetMessage(var_190_int); // 0x3e2 TObjFunc
	ClearReplies(); // 0x3e4 TObjFunc
	var_191_int = 540927; // 0x3e6 PushI
	var_192_int = 43007; // 0x3e7 PushI
	var_193_int = 43006; // 0x3e8 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x3e9 TObjFunc
	var_194_int = 540931; // 0x3eb PushI
	var_195_int = -1; // 0x3ec PushI
	var_196_int = 43010; // 0x3ed PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x3ee TObjFunc
	return 0; // 0x3f0 Return
	
Label_1009:
	var_197_int = 43007; // 0x3f1 PushI
	var_198_bool = var_32_bool == var_197_int; // 0x3f2 Eq
	if(var_198_bool == 0) goto Label_1032; // 0x3f3 JumpB
	var_199_string = ""; // 0x3f4 PushV
	var_199_string = "Untrust"; // 0x3f5 MovS
	func_731(var_33_cvector, var_199_string); // 0x3f6 NEW_2
	var_200_int = 540928; // 0x3f8 PushI
	SetMessage(var_200_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_201_int = 540929; // 0x3fd PushI
	var_202_int = 43009; // 0x3fe PushI
	var_203_int = 43008; // 0x3ff PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x400 TObjFunc
	var_204_int = 540932; // 0x402 PushI
	var_205_int = 43009; // 0x403 PushI
	var_206_int = 43011; // 0x404 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x405 TObjFunc
	return 0; // 0x407 Return
	
Label_1032:
	var_207_int = 43009; // 0x408 PushI
	var_208_bool = var_32_bool == var_207_int; // 0x409 Eq
	if(var_208_bool == 0) goto Label_1055; // 0x40a JumpB
	var_209_string = ""; // 0x40b PushV
	var_209_string = "Neutral"; // 0x40c MovS
	func_731(var_33_cvector, var_209_string); // 0x40d NEW_2
	var_210_int = 540930; // 0x40f PushI
	SetMessage(var_210_int); // 0x410 TObjFunc
	ClearReplies(); // 0x412 TObjFunc
	var_211_int = 525922; // 0x414 PushI
	var_212_int = -1; // 0x415 PushI
	var_213_int = 27214; // 0x416 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x417 TObjFunc
	var_214_int = 540933; // 0x419 PushI
	var_215_int = -1; // 0x41a PushI
	var_216_int = 43013; // 0x41b PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_3_object = 1; // 0x41f TMovB
	var_217_bool = 0; // 0x420 PushV
	func_2473(var_217_bool); // 0x421 NEW_2
	if(var_217_bool == 0) goto Label_1063; // 0x423 JumpB
	lshStopAnimation(); // 0x424 Func
	goto Label_1065; // 0x426 Jump
	
Label_1065:
	return 0; // 0x429 Return
	
Label_1063:
	StopAnimation(); // 0x427 Func
	
Label_1067:
	return 0; // 0x42b Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x4d3 PushI
	if(var_34_int == 0) goto Label_1326; // 0x4d4 JumpB
	func_2398(); // 0x4d6 NEW_2
	var_36_int = 36906; // 0x4d8 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x4d9 Eq
	if(var_37_bool == 0) goto Label_1268; // 0x4da JumpB
	var_38_string = ""; // 0x4db PushV
	var_38_string = "Neutral"; // 0x4dc MovS
	func_1212(var_33_cvector, var_38_string); // 0x4dd NEW_2
	var_55_int = 535231; // 0x4df PushI
	SetMessage(var_55_int); // 0x4e0 TObjFunc
	ClearReplies(); // 0x4e2 TObjFunc
	var_56_int = 535232; // 0x4e4 PushI
	var_57_int = 36953; // 0x4e5 PushI
	var_58_int = 36907; // 0x4e6 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x4e7 TObjFunc
	var_59_int = 535233; // 0x4e9 PushI
	var_60_int = -1; // 0x4ea PushI
	var_61_int = 36908; // 0x4eb PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x4ec TObjFunc
	var_62_int = 535280; // 0x4ee PushI
	var_63_int = -1; // 0x4ef PushI
	var_64_int = 36956; // 0x4f0 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x4f1 TObjFunc
	return 0; // 0x4f3 Return
	
Label_1268:
	var_65_int = 36953; // 0x4f4 PushI
	var_66_bool = var_32_bool == var_65_int; // 0x4f5 Eq
	if(var_66_bool == 0) goto Label_1291; // 0x4f6 JumpB
	var_67_string = ""; // 0x4f7 PushV
	var_67_string = "Neutral"; // 0x4f8 MovS
	func_1212(var_33_cvector, var_67_string); // 0x4f9 NEW_2
	var_68_int = 535277; // 0x4fb PushI
	SetMessage(var_68_int); // 0x4fc TObjFunc
	ClearReplies(); // 0x4fe TObjFunc
	var_69_int = 535278; // 0x500 PushI
	var_70_int = 36957; // 0x501 PushI
	var_71_int = 36954; // 0x502 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x503 TObjFunc
	var_72_int = 535279; // 0x505 PushI
	var_73_int = 36957; // 0x506 PushI
	var_74_int = 36955; // 0x507 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x508 TObjFunc
	return 0; // 0x50a Return
	
Label_1291:
	var_75_int = 36957; // 0x50b PushI
	var_76_bool = var_32_bool == var_75_int; // 0x50c Eq
	if(var_76_bool == 0) goto Label_1314; // 0x50d JumpB
	var_77_string = ""; // 0x50e PushV
	var_77_string = "Neutral"; // 0x50f MovS
	func_1212(var_33_cvector, var_77_string); // 0x510 NEW_2
	var_78_int = 535281; // 0x512 PushI
	SetMessage(var_78_int); // 0x513 TObjFunc
	ClearReplies(); // 0x515 TObjFunc
	var_79_int = 535282; // 0x517 PushI
	var_80_int = -1; // 0x518 PushI
	var_81_int = 36958; // 0x519 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x51a TObjFunc
	var_82_int = 535283; // 0x51c PushI
	var_83_int = -1; // 0x51d PushI
	var_84_int = 36959; // 0x51e PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x51f TObjFunc
	return 0; // 0x521 Return
	
Label_1314:
	var_3_object = 1; // 0x522 TMovB
	var_85_bool = 0; // 0x523 PushV
	func_2473(var_85_bool); // 0x524 NEW_2
	if(var_85_bool == 0) goto Label_1322; // 0x526 JumpB
	lshStopAnimation(); // 0x527 Func
	goto Label_1324; // 0x529 Jump
	
Label_1324:
	return 0; // 0x52c Return
	
Label_1322:
	StopAnimation(); // 0x52a Func
	
Label_1326:
	return 0; // 0x52e Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	var_34_int = 1; // 0x5d1 PushI
	if(var_34_int == 0) goto Label_1529; // 0x5d2 JumpB
	func_2398(); // 0x5d4 NEW_2
	var_36_int = 42554; // 0x5d6 PushI
	var_37_bool = var_32_bool == var_36_int; // 0x5d7 Eq
	if(var_37_bool == 0) goto Label_1517; // 0x5d8 JumpB
	var_38_string = ""; // 0x5d9 PushV
	var_38_string = "Neutral"; // 0x5da MovS
	func_1466(var_33_cvector, var_38_string); // 0x5db NEW_2
	var_55_int = 540545; // 0x5dd PushI
	SetMessage(var_55_int); // 0x5de TObjFunc
	ClearReplies(); // 0x5e0 TObjFunc
	var_56_int = 540546; // 0x5e2 PushI
	var_57_int = -1; // 0x5e3 PushI
	var_58_int = 42555; // 0x5e4 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x5e5 TObjFunc
	var_59_int = 540798; // 0x5e7 PushI
	var_60_int = -1; // 0x5e8 PushI
	var_61_int = 42847; // 0x5e9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x5ea TObjFunc
	return 0; // 0x5ec Return
	
Label_1517:
	var_3_object = 1; // 0x5ed TMovB
	var_62_bool = 0; // 0x5ee PushV
	func_2473(var_62_bool); // 0x5ef NEW_2
	if(var_62_bool == 0) goto Label_1525; // 0x5f1 JumpB
	lshStopAnimation(); // 0x5f2 Func
	goto Label_1527; // 0x5f4 Jump
	
Label_1527:
	return 0; // 0x5f7 Return
	
Label_1525:
	StopAnimation(); // 0x5f5 Func
	
Label_1529:
	return 0; // 0x5f9 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_cvector)
{
	var_34_int = 1; // 0x6a1 PushI
	if(var_34_int == 0) goto Label_1781; // 0x6a2 JumpB
	func_2398(); // 0x6a4 NEW_2
	var_36_int = 44406; // 0x6a6 PushI
	var_37_bool = var_33_cvector == var_36_int; // 0x6a7 Eq
	if(var_37_bool == 0) goto Label_1710; // 0x6a8 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x6a9 PushV
	var_38_object = var_1_object; // 0x6aa MovT
	var_39_object = var_0_bool; // 0x6ab MovT
	func_2493(); // 0x6ac NEW_2
	
Label_1710:
	var_41_int = 44407; // 0x6ae PushI
	var_42_bool = var_33_cvector == var_41_int; // 0x6af Eq
	if(var_42_bool == 0) goto Label_1718; // 0x6b0 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x6b1 PushV
	var_43_object = var_1_object; // 0x6b2 MovT
	var_44_object = var_0_bool; // 0x6b3 MovT
	func_2493(); // 0x6b4 NEW_2
	
Label_1718:
	var_45_int = 44401; // 0x6b6 PushI
	var_46_bool = var_32_int == var_45_int; // 0x6b7 Eq
	if(var_46_bool == 0) goto Label_1746; // 0x6b8 JumpB
	var_47_string = ""; // 0x6b9 PushV
	var_47_string = "Neutral"; // 0x6ba MovS
	func_1674(var_33_cvector, var_47_string); // 0x6bb NEW_2
	var_64_int = 542099; // 0x6bd PushI
	SetMessage(var_64_int); // 0x6be TObjFunc
	ClearReplies(); // 0x6c0 TObjFunc
	var_65_int = 542100; // 0x6c2 PushI
	var_66_int = 44405; // 0x6c3 PushI
	var_67_int = 44402; // 0x6c4 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x6c5 TObjFunc
	var_68_int = 542101; // 0x6c7 PushI
	var_69_int = -1; // 0x6c8 PushI
	var_70_int = 44403; // 0x6c9 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x6ca TObjFunc
	var_71_int = 542102; // 0x6cc PushI
	var_72_int = -1; // 0x6cd PushI
	var_73_int = 44404; // 0x6ce PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x6cf TObjFunc
	return 0; // 0x6d1 Return
	
Label_1746:
	var_74_int = 44405; // 0x6d2 PushI
	var_75_bool = var_32_int == var_74_int; // 0x6d3 Eq
	if(var_75_bool == 0) goto Label_1769; // 0x6d4 JumpB
	var_76_string = ""; // 0x6d5 PushV
	var_76_string = "Neutral"; // 0x6d6 MovS
	func_1674(var_33_cvector, var_76_string); // 0x6d7 NEW_2
	var_77_int = 542103; // 0x6d9 PushI
	SetMessage(var_77_int); // 0x6da TObjFunc
	ClearReplies(); // 0x6dc TObjFunc
	var_78_int = 542104; // 0x6de PushI
	var_79_int = -1; // 0x6df PushI
	var_80_int = 44406; // 0x6e0 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x6e1 TObjFunc
	var_81_int = 542105; // 0x6e3 PushI
	var_82_int = -1; // 0x6e4 PushI
	var_83_int = 44407; // 0x6e5 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x6e6 TObjFunc
	return 0; // 0x6e8 Return
	
Label_1769:
	var_3_object = 1; // 0x6e9 TMovB
	var_84_bool = 0; // 0x6ea PushV
	func_2473(var_84_bool); // 0x6eb NEW_2
	if(var_84_bool == 0) goto Label_1777; // 0x6ed JumpB
	lshStopAnimation(); // 0x6ee Func
	goto Label_1779; // 0x6f0 Jump
	
Label_1779:
	return 0; // 0x6f3 Return
	
Label_1777:
	StopAnimation(); // 0x6f1 Func
	
Label_1781:
	return 0; // 0x6f5 Return
}


task_13_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_int)
{
	var_33_int = 10; // 0x740 PushI
	var_34_bool = var_32_int == var_33_int; // 0x741 Eq
	if(var_34_bool == 0) goto Label_1892; // 0x742 JumpB
	func_1851(); // 0x744 NEW_2
	var_36_bool = 0; // 0x746 PushV
	var_36_bool = 0; // 0x747 MovB
	var_37_bool = 0; // 0x748 PushV
	func_2065(var_37_bool); // 0x749 NEW_2
	if(var_37_bool == 0) goto Label_1873; // 0x74b JumpB
	var_40_bool = 0; // 0x74c PushV
	func_1820(var_40_bool); // 0x74d NEW_2
	if(var_40_bool == 0) goto Label_1873; // 0x74f JumpB
	var_36_bool = 1; // 0x750 MovB
	
Label_1873:
	if(var_36_bool == 0) goto Label_1886; // 0x751 JumpB
	var_57_bool = 0; // 0x752 PushV
	func_1800(var_57_bool); // 0x753 NEW_2
	if(var_57_bool == 0) goto Label_1885; // 0x755 JumpB
	var_76_bool = 0; var_77_object = Obj(); // 0x756 PushV
	var_78_object = Obj(); // 0x757 PushV
	func_2405(var_78_object); // 0x758 NEW_2
	var_77_object = var_78_object; // 0x759 Mov
	func_2213(var_77_object); // 0x75b NEW_2
	
Label_1885:
	goto Label_1892; // 0x75d Jump
	
Label_1892:
	return 0; // 0x764 Return
	
Label_1886:
	func_1815(var_32_int); // 0x75f NEW_2
	func_1842(); // 0x762 NEW_2
}


task_13_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2033(); // 0x766 NEW_2
	func_1851(); // 0x769 NEW_2
	lshStopSpeech(); // 0x76b Func
	lshStopAnimation(); // 0x76d Func
	StopAsync(); // 0x76f Func
	Hold(); // 0x771 Func
	return 0; // 0x773 Return
}


task_13_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	StopGroup0(); // 0x774 Func
	func_1851(); // 0x777 NEW_2
	var_33_string = ""; // 0x779 PushV
	var_33_string = "Neutral"; // 0x77a MovS
	func_2352(var_33_string); // 0x77b NEW_2
	func_1842(); // 0x77e NEW_2
	return 0; // 0x780 Return
}


task_13_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_bool)
{
	var_33_bool = var_32_bool; // 0x782 Push
	if(var_33_bool == 0) goto Label_1928; // 0x783 JumpB
	func_1842(); // 0x785 NEW_2
	goto Label_1932; // 0x787 Jump
	
Label_1932:
	return 0; // 0x78c Return
	
Label_1928:
	var_39_string = ""; // 0x788 PushV
	var_39_string = "Neutral"; // 0x789 MovS
	func_2352(var_39_string); // 0x78a NEW_2
}


task_13_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x78d PushV
	IsOverrideActive(var_34_bool); // 0x78e Func
	var_35_bool = var_34_bool == 0; // 0x790 Not
	if(var_35_bool == 0) goto Label_1961; // 0x791 JumpB
	EventDisable(0); // 0x792 EventDisable
	func_2033(); // 0x794 NEW_2
	var_36_bool = 0; var_37_object = Obj(); // 0x796 PushV
	var_37_object = var_32_object; // 0x797 Mov
	func_2056(var_37_object); // 0x798 NEW_2
	EventEnable(0); // 0x79a EventEnable
	var_50_object = Obj(); // 0x79b PushV
	var_50_object = var_32_object; // 0x79c Mov
	func_2650(var_32_object, var_33_bool, var_34_bool, var_50_object); // 0x79d NEW_2
	var_712_string = ""; // 0x79f PushV
	var_712_string = "Neutral"; // 0x7a0 MovS
	func_2352(var_712_string); // 0x7a1 NEW_2
	func_1851(); // 0x7a4 NEW_2
	func_1842(); // 0x7a7 NEW_2
	
Label_1961:
	return 2; // 0x7a9 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_1786(var_31_cvector); // 0x6f7 NEW_2
	return 0; // 0x6f9 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_424_bool = 0; // 0x4 PushV
	func_2473(var_424_bool); // 0x5 NEW_2
	if(var_424_bool == 0) goto Label_15; // 0x7 JumpB
	var_425_string = ""; // 0x8 PushV
	var_425_string = "Neutral"; // 0x9 MovS
	func_2352(var_425_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_426_bool = var_0_bool; // 0x15 PushT
	if(var_426_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_427_string = "all"; // 0x11 PushS
	var_428_string = "idle"; // 0x12 PushS
	PlayAnimation(var_427_string, var_428_string); // 0x13 Func
}


func_2561(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0xa01 PushV
	var_56_object = Obj(); // 0xa02 PushV
	func_2548(var_56_object); // 0xa03 NEW_2
	var_53_object = var_56_object; // 0xa04 Mov
	Find(var_49_int, var_54_object); // 0xa06 ObjFunc
	var_61_bool = var_54_object == 0; // 0xa08 Not
	if(var_61_bool == 0) goto Label_2576; // 0xa09 JumpB
	var_62_string = "Can't find diary parent with id: "; // 0xa0a PushS
	var_63_int = var_62_string + var_49_int; // 0xa0b Add
	Trace(var_63_int); // 0xa0c Func
	var_47_bool = 0; // 0xa0e MovB
	return 6; // 0xa0f Return
	
Label_2576:
	AddChild(var_48_object); // 0xa10 ObjFunc
	var_64_int = 7; // 0xa12 PushI
	SendWorldWndMessage(var_64_int); // 0xa13 Func
	GetCategory(var_55_int); // 0xa15 ObjFunc
	SetDiarySection(var_55_int); // 0xa17 Func
	var_47_bool = 0; // 0xa19 MovB
	return 6; // 0xa1a Return
}


func_2056(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x808 PushV
	GetPosition(var_39_cvector); // 0x809 ObjFunc
	var_40_bool = 0; var_41_cvector = CVector(0,0,0); // 0x80b PushV
	var_41_cvector = var_39_cvector; // 0x80c Mov
	func_2046(var_40_bool, var_41_cvector); // 0x80d NEW_2
	var_36_bool = var_40_bool; // 0x80e Mov
	return 2; // 0x810 Return
}


func_1800(var_57_bool)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x708 PushV
	var_60_string = "player"; // 0x709 PushS
	FindActor(var_59_object, var_60_string); // 0x70a Func
	var_61_bool = var_59_object == 0; // 0x70c Not
	if(var_61_bool == 0) goto Label_1808; // 0x70d JumpB
	var_57_bool = 0; // 0x70e MovB
	return 2; // 0x70f Return
	
Label_1808:
	var_62_bool = 0; var_63_object = Obj(); // 0x710 PushV
	var_63_object = var_59_object; // 0x711 Mov
	func_2056(var_63_object); // 0x712 NEW_2
	var_57_bool = var_62_bool; // 0x713 Mov
	return 2; // 0x715 Return
}


func_2065(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x811 PushV
	IsLoaded(var_34_bool); // 0x812 Func
	var_32_bool = var_34_bool; // 0x814 Mov
	return 2; // 0x815 Return
}


func_1530(var_0_bool, var_529_int, var_530_object)
{
	var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0; var_536_object = Obj(); var_537_bool = 0; var_538_int = 0; var_539_bool = 0; // 0x5fa PushV
	var_0_bool = var_530_object; // 0x5fb TMov
	var_540_bool = 0; var_541_object = Obj(); var_542_float = 0; // 0x5fc PushV
	var_541_object = var_530_object; // 0x5fd Mov
	var_542_float = 70.0; // 0x5fe MovF
	func_2070(var_541_object, var_542_float); // 0x5ff NEW_2
	var_543_bool = var_540_bool == 0; // 0x601 Not
	if(var_543_bool == 0) goto Label_1541; // 0x602 JumpB
	var_529_int = -2; // 0x603 MovI
	return 8; // 0x604 Return
	
Label_1541:
	CreateDialog(var_536_object); // 0x605 Func
	var_544_int = 0; // 0x607 PushV
	func_2467(var_544_int); // 0x608 NEW_2
	SetNPCName(var_544_int); // 0x60a ObjFunc
	var_545_int = 0; // 0x60c PushV
	func_2465(var_545_int); // 0x60d NEW_2
	SetNPCDescription(var_545_int); // 0x60f ObjFunc
	var_546_string = ""; // 0x611 PushV
	func_2469(var_546_string); // 0x612 NEW_2
	SetPhoto(var_546_string); // 0x614 ObjFunc
	var_547_string = ""; // 0x616 PushV
	func_2471(var_547_string); // 0x617 NEW_2
	SetPhoto2(var_547_string); // 0x619 ObjFunc
	var_548_int = 0; // 0x61b PushV
	func_2633(var_548_int); // 0x61c NEW_2
	SetPlayerName(var_548_int); // 0x61e ObjFunc
	var_538_int = -1; // 0x620 MovI
	IsOverrideActive(var_537_bool); // 0x621 Func
	var_549_bool = var_537_bool; // 0x623 Push
	if(var_549_bool == 0) goto Label_1575; // 0x624 JumpB
	var_529_int = -2; // 0x625 MovI
	return 8; // 0x626 Return
	
Label_1575:
	DoDialog(var_536_object); // 0x627 Func
	var_550_bool = 0; var_551_object = Obj(); // 0x629 PushV
	var_552_object = Obj(); // 0x62a PushV
	func_2405(var_552_object); // 0x62b NEW_2
	var_551_object = var_552_object; // 0x62c Mov
	func_2155(var_550_bool, var_551_object); // 0x62e NEW_2
	var_553_object = Obj(); var_554_object = Obj(); // 0x630 PushV
	var_553_object = var_530_object; // 0x631 Mov
	var_554_object = var_536_object; // 0x632 Mov
	TaskCall(12); // 0x633 TaskCall
	func_1611(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object); // 0x634 NEW_2
	TaskReturn(); // 0x635 TaskReturn
	IsDialogEnd(var_539_bool); // 0x637 ObjFunc
	
Label_1593:
	var_586_bool = var_539_bool == 0; // 0x639 Not
	if(var_586_bool == 0) goto Label_1600; // 0x63a JumpB
	sync(); // 0x63b Func
	IsDialogEnd(var_539_bool); // 0x63d ObjFunc
	goto Label_1593; // 0x63f Jump
	
Label_1600:
	var_587_object = Obj(); // 0x640 PushV
	var_587_object = var_530_object; // 0x641 Mov
	func_2138(); // 0x642 NEW_2
	StopDialog(var_536_object); // 0x644 Func
	GetReturnValue(var_538_int); // 0x646 ObjFunc
	var_529_int = var_538_int; // 0x648 Mov
	return 8; // 0x649 Return
}


func_2070(var_109_bool, var_111_float)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_bool = 0; var_120_bool = 0; var_121_float = 0; var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_bool = 0; var_129_bool = 0; // 0x816 PushV
	GetPosition(var_122_cvector); // 0x817 ObjFunc
	GetEyesHeight(var_121_float); // 0x819 ObjFunc
	var_130_float = GetByIndex(var_122_cvector, 1); // 0x81b PushE
	var_130_float = var_130_float + var_121_float; // 0x81c Add2
	SetByIndex(var_122_cvector, 1) = var_130_float; // 0x81d PopE
	GetPosition(var_123_cvector); // 0x81e Func
	GetEyesHeight(var_121_float); // 0x820 Func
	var_131_float = GetByIndex(var_123_cvector, 1); // 0x822 PushE
	var_131_float = var_131_float + var_121_float; // 0x823 Add2
	SetByIndex(var_123_cvector, 1) = var_131_float; // 0x824 PopE
	var_124_cvector = var_122_cvector - var_123_cvector; // 0x825 Sub2
	var_132_float = GetByIndex(var_124_cvector, 1); // 0x826 PushE
	var_132_float = 0; // 0x827 MovI
	SetByIndex(var_124_cvector, 1) = var_132_float; // 0x828 PopE
	var_133_int = var_124_cvector | var_124_cvector; // 0x829 Or
	var_134_float = sqrt(var_133_int); // 0x82a Sqrt
	var_124_cvector = var_124_cvector / var_124_cvector; // 0x82b Div2
	var_125_cvector = -var_124_cvector; // 0x82c Neg2
	var_135_float = var_124_cvector * var_111_float; // 0x82d Mult
	var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); // 0x82e PushV
	var_138_cvector = CVector(0.0, 1.0, 0.0); // 0x82f PushVec
	var_137_cvector = var_125_cvector ^ var_138_cvector; // 0x830 Xor2
	func_2411(var_136_cvector, var_137_cvector); // 0x831 NEW_2
	var_144_int = 25; // 0x833 PushI
	var_145_float = var_136_cvector * var_144_int; // 0x834 Mult
	var_146_int = var_135_float + var_145_float; // 0x835 Add
	var_147_cvector = CVector(0.0, 10.0, 0.0); // 0x836 PushVec
	var_126_cvector = var_146_int - var_147_cvector; // 0x837 Sub2
	var_127_cvector = var_123_cvector + var_126_cvector; // 0x838 Add2
	IsOverrideActive(var_128_bool); // 0x839 Func
	var_148_bool = var_128_bool; // 0x83b Push
	if(var_148_bool == 0) goto Label_2111; // 0x83c JumpB
	var_109_bool = 0; // 0x83d MovB
	return 18; // 0x83e Return
	
Label_2111:
	StopWorld(); // 0x83f Func
	CameraTransit(var_127_cvector, var_125_cvector); // 0x841 Func
	var_149_float = GetByIndex(var_126_cvector, 0); // 0x843 PushE
	var_150_float = GetByIndex(var_126_cvector, 2); // 0x844 PushE
	Rotate(var_149_float, var_150_float); // 0x845 Func
	var_151_bool = 0; // 0x847 PushV
	func_2473(var_151_bool); // 0x848 NEW_2
	if(var_151_bool == 0) goto Label_2124; // 0x84a JumpB
	goto Label_2132; // 0x84b Jump
	
Label_2132:
	CameraWaitForPlayFinish(); // 0x854 Func
	ResumeWorld(); // 0x856 Func
	var_109_bool = 1; // 0x858 MovB
	return 18; // 0x859 Return
	
Label_2124:
	var_152_string = "head"; // 0x84c PushS
	HasAnimationTrack(var_129_bool, var_152_string); // 0x84d Func
	var_153_bool = var_129_bool; // 0x84f Push
	if(var_153_bool == 0) goto Label_2132; // 0x850 JumpB
	var_154_string = "head"; // 0x851 PushS
	LookAsyncCamera(var_154_string); // 0x852 Func
}


func_1815(var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0); // 0x717 PushE
	var_110_float = GetByIndex(var_0_bool, 2); // 0x718 PushE
	RotateAsync(var_109_float, var_110_float); // 0x719 Func
	return 0; // 0x71b Return
}


func_1820(var_40_bool)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0; // 0x71c PushV
	var_45_string = "player"; // 0x71d PushS
	FindActor(var_43_object, var_45_string); // 0x71e Func
	var_46_bool = var_43_object == 0; // 0x720 Not
	if(var_46_bool == 0) goto Label_1828; // 0x721 JumpB
	var_40_bool = 0; // 0x722 MovB
	return 4; // 0x723 Return
	
Label_1828:
	var_47_float = 0; var_48_object = Obj(); // 0x724 PushV
	var_48_object = var_43_object; // 0x725 Mov
	func_2038(var_48_object); // 0x726 NEW_2
	var_55_float = 90000.0; // 0x728 PushF
	var_56_bool = var_47_float > var_55_float; // 0x729 GT
	if(var_56_bool == 0) goto Label_1837; // 0x72a JumpB
	var_40_bool = 0; // 0x72b MovB
	return 4; // 0x72c Return
	
Label_1837:
	CanSee(var_44_bool, var_43_object); // 0x72d Func
	var_40_bool = var_44_bool; // 0x72f Mov
	return 4; // 0x730 Return
}


func_2589()
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; var_72_int = 0; var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_bool = 0; // 0xa1d PushV
	var_77_int = 0; // 0xa1e PushI
	ClearSubContainer(var_77_int); // 0xa1f Func
	var_78_int = 8; // 0xa21 PushI
	irand(var_72_int, var_78_int); // 0xa22 Func
	var_79_int = 2; // 0xa24 PushI
	var_72_int = var_72_int + var_79_int; // 0xa25 Add2
	var_73_int = 0; // 0xa26 MovI
	
Label_2599:
	var_80_bool = var_73_int < var_72_int; // 0xa27 LT
	if(var_80_bool == 0) goto Label_2632; // 0xa28 JumpB
	CreateInvItem(var_74_object); // 0xa29 Func
	var_81_string = "grass_combination"; // 0xa2b PushS
	SetItemName(var_81_string); // 0xa2c ObjFunc
	var_82_int = 50; // 0xa2e PushI
	irand(var_75_int, var_82_int); // 0xa2f Func
	var_83_int = 30; // 0xa31 PushI
	var_75_int = var_75_int + var_83_int; // 0xa32 Add2
	var_84_string = "im_inc"; // 0xa33 PushS
	var_85_float = 100.0; // 0xa34 PushF
	var_86_float = var_75_int / var_85_float; // 0xa35 Div
	SetProperty(var_84_string, var_86_float); // 0xa36 ObjFunc
	var_87_int = 40; // 0xa38 PushI
	irand(var_75_int, var_87_int); // 0xa39 Func
	var_88_string = "hl_inc"; // 0xa3b PushS
	var_89_float = 100.0; // 0xa3c PushF
	var_90_float = var_75_int / var_89_float; // 0xa3d Div
	var_91_int = -var_90_float; // 0xa3e Neg
	SetProperty(var_88_string, var_91_int); // 0xa3f ObjFunc
	var_92_int = 0; // 0xa41 PushI
	AddItem(var_76_bool, var_74_object, var_92_int); // 0xa42 Func
	var_74_object = 0; // 0xa44 SetNull
	var_93_int = 1; // 0xa45 PushI
	var_73_int = var_73_int + var_93_int; // 0xa46 Add2
	goto Label_2599; // 0xa47 Jump
	
Label_2632:
	return 14; // 0xa48 Return
}


func_40(var_0_bool, var_322_int, var_323_object)
{
	var_325_object = Obj(); var_326_bool = 0; var_327_int = 0; var_328_bool = 0; var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; // 0x28 PushV
	var_0_bool = var_323_object; // 0x29 TMov
	var_333_bool = 0; var_334_object = Obj(); var_335_float = 0; // 0x2a PushV
	var_334_object = var_323_object; // 0x2b Mov
	var_335_float = 70.0; // 0x2c MovF
	func_2070(var_334_object, var_335_float); // 0x2d NEW_2
	var_336_bool = var_333_bool == 0; // 0x2f Not
	if(var_336_bool == 0) goto Label_51; // 0x30 JumpB
	var_322_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_329_object); // 0x33 Func
	var_337_int = 0; // 0x35 PushV
	func_2467(var_337_int); // 0x36 NEW_2
	SetNPCName(var_337_int); // 0x38 ObjFunc
	var_338_int = 0; // 0x3a PushV
	func_2465(var_338_int); // 0x3b NEW_2
	SetNPCDescription(var_338_int); // 0x3d ObjFunc
	var_339_string = ""; // 0x3f PushV
	func_2469(var_339_string); // 0x40 NEW_2
	SetPhoto(var_339_string); // 0x42 ObjFunc
	var_340_string = ""; // 0x44 PushV
	func_2471(var_340_string); // 0x45 NEW_2
	SetPhoto2(var_340_string); // 0x47 ObjFunc
	var_341_int = 0; // 0x49 PushV
	func_2633(var_341_int); // 0x4a NEW_2
	SetPlayerName(var_341_int); // 0x4c ObjFunc
	var_331_int = -1; // 0x4e MovI
	IsOverrideActive(var_330_bool); // 0x4f Func
	var_342_bool = var_330_bool; // 0x51 Push
	if(var_342_bool == 0) goto Label_85; // 0x52 JumpB
	var_322_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_329_object); // 0x55 Func
	var_343_bool = 0; var_344_object = Obj(); // 0x57 PushV
	var_345_object = Obj(); // 0x58 PushV
	func_2405(var_345_object); // 0x59 NEW_2
	var_344_object = var_345_object; // 0x5a Mov
	func_2155(var_343_bool, var_344_object); // 0x5c NEW_2
	var_346_object = Obj(); var_347_object = Obj(); // 0x5e PushV
	var_346_object = var_323_object; // 0x5f Mov
	var_347_object = var_329_object; // 0x60 Mov
	TaskCall(2); // 0x61 TaskCall
	func_121(var_348_object, var_349_object, var_350_string, var_351_bool, var_346_object, var_347_object); // 0x62 NEW_2
	TaskReturn(); // 0x63 TaskReturn
	IsDialogEnd(var_332_bool); // 0x65 ObjFunc
	
Label_103:
	var_387_bool = var_332_bool == 0; // 0x67 Not
	if(var_387_bool == 0) goto Label_110; // 0x68 JumpB
	sync(); // 0x69 Func
	IsDialogEnd(var_332_bool); // 0x6b ObjFunc
	goto Label_103; // 0x6d Jump
	
Label_110:
	var_388_object = Obj(); // 0x6e PushV
	var_388_object = var_323_object; // 0x6f Mov
	func_2138(); // 0x70 NEW_2
	StopDialog(var_329_object); // 0x72 Func
	GetReturnValue(var_331_int); // 0x74 ObjFunc
	var_322_int = var_331_int; // 0x76 Mov
	return 8; // 0x77 Return
}


func_2348()
{
	CameraSwitchToNormal(); // 0x92d Func
	return 0; // 0x92f Return
}


func_1068(var_0_bool, var_597_int, var_598_object)
{
	var_600_object = Obj(); var_601_bool = 0; var_602_int = 0; var_603_bool = 0; var_604_object = Obj(); var_605_bool = 0; var_606_int = 0; var_607_bool = 0; // 0x42c PushV
	var_0_bool = var_598_object; // 0x42d TMov
	var_608_bool = 0; var_609_object = Obj(); var_610_float = 0; // 0x42e PushV
	var_609_object = var_598_object; // 0x42f Mov
	var_610_float = 70.0; // 0x430 MovF
	func_2070(var_609_object, var_610_float); // 0x431 NEW_2
	var_611_bool = var_608_bool == 0; // 0x433 Not
	if(var_611_bool == 0) goto Label_1079; // 0x434 JumpB
	var_597_int = -2; // 0x435 MovI
	return 8; // 0x436 Return
	
Label_1079:
	CreateDialog(var_604_object); // 0x437 Func
	var_612_int = 0; // 0x439 PushV
	func_2467(var_612_int); // 0x43a NEW_2
	SetNPCName(var_612_int); // 0x43c ObjFunc
	var_613_int = 0; // 0x43e PushV
	func_2465(var_613_int); // 0x43f NEW_2
	SetNPCDescription(var_613_int); // 0x441 ObjFunc
	var_614_string = ""; // 0x443 PushV
	func_2469(var_614_string); // 0x444 NEW_2
	SetPhoto(var_614_string); // 0x446 ObjFunc
	var_615_string = ""; // 0x448 PushV
	func_2471(var_615_string); // 0x449 NEW_2
	SetPhoto2(var_615_string); // 0x44b ObjFunc
	var_616_int = 0; // 0x44d PushV
	func_2633(var_616_int); // 0x44e NEW_2
	SetPlayerName(var_616_int); // 0x450 ObjFunc
	var_606_int = -1; // 0x452 MovI
	IsOverrideActive(var_605_bool); // 0x453 Func
	var_617_bool = var_605_bool; // 0x455 Push
	if(var_617_bool == 0) goto Label_1113; // 0x456 JumpB
	var_597_int = -2; // 0x457 MovI
	return 8; // 0x458 Return
	
Label_1113:
	DoDialog(var_604_object); // 0x459 Func
	var_618_bool = 0; var_619_object = Obj(); // 0x45b PushV
	var_620_object = Obj(); // 0x45c PushV
	func_2405(var_620_object); // 0x45d NEW_2
	var_619_object = var_620_object; // 0x45e Mov
	func_2155(var_618_bool, var_619_object); // 0x460 NEW_2
	var_621_object = Obj(); var_622_object = Obj(); // 0x462 PushV
	var_621_object = var_598_object; // 0x463 Mov
	var_622_object = var_604_object; // 0x464 Mov
	TaskCall(8); // 0x465 TaskCall
	func_1149(var_623_object, var_624_object, var_625_string, var_626_bool, var_621_object, var_622_object); // 0x466 NEW_2
	TaskReturn(); // 0x467 TaskReturn
	IsDialogEnd(var_607_bool); // 0x469 ObjFunc
	
Label_1131:
	var_654_bool = var_607_bool == 0; // 0x46b Not
	if(var_654_bool == 0) goto Label_1138; // 0x46c JumpB
	sync(); // 0x46d Func
	IsDialogEnd(var_607_bool); // 0x46f ObjFunc
	goto Label_1131; // 0x471 Jump
	
Label_1138:
	var_655_object = Obj(); // 0x472 PushV
	var_655_object = var_598_object; // 0x473 Mov
	func_2138(); // 0x474 NEW_2
	StopDialog(var_604_object); // 0x476 Func
	GetReturnValue(var_606_int); // 0x478 ObjFunc
	var_597_int = var_606_int; // 0x47a Mov
	return 8; // 0x47b Return
}


func_1327(var_0_bool, var_656_int, var_657_object)
{
	var_659_object = Obj(); var_660_bool = 0; var_661_int = 0; var_662_bool = 0; var_663_object = Obj(); var_664_bool = 0; var_665_int = 0; var_666_bool = 0; // 0x52f PushV
	var_0_bool = var_657_object; // 0x530 TMov
	var_667_bool = 0; var_668_object = Obj(); var_669_float = 0; // 0x531 PushV
	var_668_object = var_657_object; // 0x532 Mov
	var_669_float = 70.0; // 0x533 MovF
	func_2070(var_668_object, var_669_float); // 0x534 NEW_2
	var_670_bool = var_667_bool == 0; // 0x536 Not
	if(var_670_bool == 0) goto Label_1338; // 0x537 JumpB
	var_656_int = -2; // 0x538 MovI
	return 8; // 0x539 Return
	
Label_1338:
	CreateDialog(var_663_object); // 0x53a Func
	var_671_int = 0; // 0x53c PushV
	func_2467(var_671_int); // 0x53d NEW_2
	SetNPCName(var_671_int); // 0x53f ObjFunc
	var_672_int = 0; // 0x541 PushV
	func_2465(var_672_int); // 0x542 NEW_2
	SetNPCDescription(var_672_int); // 0x544 ObjFunc
	var_673_string = ""; // 0x546 PushV
	func_2469(var_673_string); // 0x547 NEW_2
	SetPhoto(var_673_string); // 0x549 ObjFunc
	var_674_string = ""; // 0x54b PushV
	func_2471(var_674_string); // 0x54c NEW_2
	SetPhoto2(var_674_string); // 0x54e ObjFunc
	var_675_int = 0; // 0x550 PushV
	func_2633(var_675_int); // 0x551 NEW_2
	SetPlayerName(var_675_int); // 0x553 ObjFunc
	var_665_int = -1; // 0x555 MovI
	IsOverrideActive(var_664_bool); // 0x556 Func
	var_676_bool = var_664_bool; // 0x558 Push
	if(var_676_bool == 0) goto Label_1372; // 0x559 JumpB
	var_656_int = -2; // 0x55a MovI
	return 8; // 0x55b Return
	
Label_1372:
	DoDialog(var_663_object); // 0x55c Func
	var_677_bool = 0; var_678_object = Obj(); // 0x55e PushV
	var_679_object = Obj(); // 0x55f PushV
	func_2405(var_679_object); // 0x560 NEW_2
	var_678_object = var_679_object; // 0x561 Mov
	func_2155(var_677_bool, var_678_object); // 0x563 NEW_2
	var_680_object = Obj(); var_681_object = Obj(); // 0x565 PushV
	var_680_object = var_657_object; // 0x566 Mov
	var_681_object = var_663_object; // 0x567 Mov
	TaskCall(10); // 0x568 TaskCall
	func_1408(var_682_object, var_683_object, var_684_string, var_685_bool, var_680_object, var_681_object); // 0x569 NEW_2
	TaskReturn(); // 0x56a TaskReturn
	IsDialogEnd(var_666_bool); // 0x56c ObjFunc
	
Label_1390:
	var_710_bool = var_666_bool == 0; // 0x56e Not
	if(var_710_bool == 0) goto Label_1397; // 0x56f JumpB
	sync(); // 0x570 Func
	IsDialogEnd(var_666_bool); // 0x572 ObjFunc
	goto Label_1390; // 0x574 Jump
	
Label_1397:
	var_711_object = Obj(); // 0x575 PushV
	var_711_object = var_657_object; // 0x576 Mov
	func_2138(); // 0x577 NEW_2
	StopDialog(var_663_object); // 0x579 Func
	GetReturnValue(var_665_int); // 0x57b ObjFunc
	var_656_int = var_665_int; // 0x57d Mov
	return 8; // 0x57e Return
}


func_2352(var_292_string)
{
	var_293_bool = 0; var_294_float = 0; var_295_float = 0; var_296_bool = 0; var_297_float = 0; var_298_float = 0; // 0x930 PushV
	lshHasAnimation(var_296_bool, var_292_string); // 0x931 Func
	var_299_bool = var_296_bool; // 0x933 Push
	if(var_299_bool == 0) goto Label_2363; // 0x934 JumpB
	lshGetAnimTimes(var_292_string, var_297_float, var_298_float); // 0x935 Func
	var_300_bool = 0; // 0x937 PushB
	lshPlayAnimation(var_297_float, var_298_float, var_300_bool); // 0x938 Func
	goto Label_2367; // 0x93a Jump
	
Label_2367:
	return 6; // 0x93f Return
	
Label_2363:
	var_301_string = "Can't find lsh animation : "; // 0x93b PushS
	var_302_int = var_301_string + var_292_string; // 0x93c Add
	Trace(var_302_int); // 0x93d Func
}


func_1842()
{
	var_714_float = 0; var_715_float = 0; // 0x732 PushV
	var_716_int = 8; // 0x733 PushI
	var_717_int = 16; // 0x734 PushI
	rand(var_715_float, var_716_int, var_717_int); // 0x735 Func
	var_718_int = 10; // 0x737 PushI
	SetTimer(var_718_int, var_715_float); // 0x738 Func
	return 2; // 0x73a Return
}


func_1851()
{
	var_713_int = 10; // 0x73b PushI
	KillTimer(var_713_int); // 0x73c Func
	return 0; // 0x73e Return
}


func_2368(var_270_string, var_271_bool)
{
	var_274_bool = 0; var_275_float = 0; var_276_float = 0; var_277_bool = 0; var_278_float = 0; var_279_float = 0; // 0x940 PushV
	lshHasAnimation(var_277_bool, var_270_string); // 0x941 Func
	var_280_bool = var_277_bool; // 0x943 Push
	if(var_280_bool == 0) goto Label_2378; // 0x944 JumpB
	lshGetAnimTimes(var_270_string, var_278_float, var_279_float); // 0x945 Func
	lshPlayAnimation(var_278_float, var_279_float, var_271_bool); // 0x947 Func
	goto Label_2382; // 0x949 Jump
	
Label_2382:
	return 6; // 0x94e Return
	
Label_2378:
	var_281_string = "Can't find lsh animation : "; // 0x94a PushS
	var_282_int = var_281_string + var_270_string; // 0x94b Add
	Trace(var_282_int); // 0x94c Func
}


func_577(var_0_bool, var_433_int, var_434_object)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0; var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; // 0x241 PushV
	var_0_bool = var_434_object; // 0x242 TMov
	var_444_bool = 0; var_445_object = Obj(); var_446_float = 0; // 0x243 PushV
	var_445_object = var_434_object; // 0x244 Mov
	var_446_float = 70.0; // 0x245 MovF
	func_2070(var_445_object, var_446_float); // 0x246 NEW_2
	var_447_bool = var_444_bool == 0; // 0x248 Not
	if(var_447_bool == 0) goto Label_588; // 0x249 JumpB
	var_433_int = -2; // 0x24a MovI
	return 8; // 0x24b Return
	
Label_588:
	CreateDialog(var_440_object); // 0x24c Func
	var_448_int = 0; // 0x24e PushV
	func_2467(var_448_int); // 0x24f NEW_2
	SetNPCName(var_448_int); // 0x251 ObjFunc
	var_449_int = 0; // 0x253 PushV
	func_2465(var_449_int); // 0x254 NEW_2
	SetNPCDescription(var_449_int); // 0x256 ObjFunc
	var_450_string = ""; // 0x258 PushV
	func_2469(var_450_string); // 0x259 NEW_2
	SetPhoto(var_450_string); // 0x25b ObjFunc
	var_451_string = ""; // 0x25d PushV
	func_2471(var_451_string); // 0x25e NEW_2
	SetPhoto2(var_451_string); // 0x260 ObjFunc
	var_452_int = 0; // 0x262 PushV
	func_2633(var_452_int); // 0x263 NEW_2
	SetPlayerName(var_452_int); // 0x265 ObjFunc
	var_442_int = -1; // 0x267 MovI
	IsOverrideActive(var_441_bool); // 0x268 Func
	var_453_bool = var_441_bool; // 0x26a Push
	if(var_453_bool == 0) goto Label_622; // 0x26b JumpB
	var_433_int = -2; // 0x26c MovI
	return 8; // 0x26d Return
	
Label_622:
	DoDialog(var_440_object); // 0x26e Func
	var_454_bool = 0; var_455_object = Obj(); // 0x270 PushV
	var_456_object = Obj(); // 0x271 PushV
	func_2405(var_456_object); // 0x272 NEW_2
	var_455_object = var_456_object; // 0x273 Mov
	func_2155(var_454_bool, var_455_object); // 0x275 NEW_2
	var_457_object = Obj(); var_458_object = Obj(); // 0x277 PushV
	var_457_object = var_434_object; // 0x278 Mov
	var_458_object = var_440_object; // 0x279 Mov
	TaskCall(6); // 0x27a TaskCall
	func_658(var_459_object, var_460_object, var_461_string, var_462_bool, var_457_object, var_458_object); // 0x27b NEW_2
	TaskReturn(); // 0x27c TaskReturn
	IsDialogEnd(var_443_bool); // 0x27e ObjFunc
	
Label_640:
	var_499_bool = var_443_bool == 0; // 0x280 Not
	if(var_499_bool == 0) goto Label_647; // 0x281 JumpB
	sync(); // 0x282 Func
	IsDialogEnd(var_443_bool); // 0x284 ObjFunc
	goto Label_640; // 0x286 Jump
	
Label_647:
	var_500_object = Obj(); // 0x287 PushV
	var_500_object = var_434_object; // 0x288 Mov
	func_2138(); // 0x289 NEW_2
	StopDialog(var_440_object); // 0x28b Func
	GetReturnValue(var_442_int); // 0x28d ObjFunc
	var_433_int = var_442_int; // 0x28f Mov
	return 8; // 0x290 Return
}


func_2633(var_160_int)
{
	var_161_int = 0; var_162_int = 0; // 0xa49 PushV
	var_163_string = "branch"; // 0xa4a PushS
	GetVariable(var_163_string, var_162_int); // 0xa4b Func
	var_164_int = 0; // 0xa4d PushI
	var_165_bool = var_162_int == var_164_int; // 0xa4e Eq
	if(var_165_bool == 0) goto Label_2643; // 0xa4f JumpB
	var_160_int = 1; // 0xa50 MovI
	return 2; // 0xa51 Return
	
Label_2643:
	var_166_int = 1; // 0xa53 PushI
	var_167_bool = var_162_int == var_166_int; // 0xa54 Eq
	if(var_167_bool == 0) goto Label_2648; // 0xa55 JumpB
	var_160_int = 2; // 0xa56 MovI
	return 2; // 0xa57 Return
	
Label_2648:
	var_160_int = 3; // 0xa58 MovI
	return 2; // 0xa59 Return
}


func_1611(var_0_bool, var_1_object, var_2_object, var_3_object, var_553_object, var_554_object)
{
	var_0_bool = var_554_object; // 0x64c TMov
	var_1_object = var_553_object; // 0x64d TMov
	var_3_object = 0; // 0x64e TMovB
	var_559_int = 1; // 0x64f PushI
	if(var_559_int == 0) goto Label_1644; // 0x650 JumpB
	var_560_string = ""; // 0x651 PushV
	var_560_string = "Neutral"; // 0x652 MovS
	func_1674(var_554_object, var_560_string); // 0x653 NEW_2
	var_568_int = 542099; // 0x655 PushI
	SetMessage(var_568_int); // 0x656 TObjFunc
	ClearReplies(); // 0x658 TObjFunc
	var_569_int = 542100; // 0x65a PushI
	var_570_int = 44405; // 0x65b PushI
	var_571_int = 44402; // 0x65c PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x65d TObjFunc
	var_572_int = 542101; // 0x65f PushI
	var_573_int = -1; // 0x660 PushI
	var_574_int = 44403; // 0x661 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x662 TObjFunc
	var_575_int = 542102; // 0x664 PushI
	var_576_int = -1; // 0x665 PushI
	var_577_int = 44404; // 0x666 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x667 TObjFunc
	goto Label_1644; // 0x669 Jump
	
Label_1644:
	var_578_bool = 0; // 0x66c PushV
	func_2473(var_578_bool); // 0x66d NEW_2
	if(var_578_bool == 0) goto Label_1659; // 0x66f JumpB
	
Label_1648:
	lshWaitForAnimEnd(); // 0x670 Func
	var_579_object = var_3_object; // 0x672 PushT
	if(var_579_object == 0) goto Label_1653; // 0x673 JumpB
	goto Label_1658; // 0x674 Jump
	
Label_1658:
	goto Label_1673; // 0x67a Jump
	
Label_1673:
	return 0; // 0x689 Return
	
Label_1653:
	var_580_string = ""; // 0x675 PushV
	var_580_string = var_2_object; // 0x676 MovT
	func_2352(var_580_string); // 0x677 NEW_2
	goto Label_1648; // 0x679 Jump
	
Label_1659:
	var_581_string = "all"; // 0x67b PushS
	var_582_string = "idle"; // 0x67c PushS
	PlayAnimation(var_581_string, var_582_string); // 0x67d Func
	
Label_1663:
	WaitForAnimEnd(); // 0x67f Func
	var_583_object = var_3_object; // 0x681 PushT
	if(var_583_object == 0) goto Label_1668; // 0x682 JumpB
	goto Label_1673; // 0x683 Jump
	
Label_1668:
	var_584_string = "all"; // 0x684 PushS
	var_585_string = "idle"; // 0x685 PushS
	PlayAnimation(var_584_string, var_585_string); // 0x686 Func
	goto Label_1663; // 0x688 Jump
}


func_2383(var_203_bool, var_204_string)
{
	var_205_bool = 0; var_206_bool = 0; // 0x94f PushV
	var_207_bool = 0; // 0x950 PushV
	func_2473(var_207_bool); // 0x951 NEW_2
	if(var_207_bool == 0) goto Label_2396; // 0x953 JumpB
	lshHasSpeech(var_206_bool, var_204_string); // 0x954 Func
	var_208_bool = var_206_bool; // 0x956 Push
	if(var_208_bool == 0) goto Label_2396; // 0x957 JumpB
	lshPlaySpeech(var_204_string); // 0x958 Func
	var_203_bool = 1; // 0x95a MovB
	return 2; // 0x95b Return
	
Label_2396:
	var_203_bool = 0; // 0x95c MovB
	return 2; // 0x95d Return
}


func_2138()
{
	var_310_bool = 0; var_311_bool = 0; // 0x85a PushV
	CameraSwitchToNormal(); // 0x85b Func
	var_312_bool = 0; // 0x85d PushV
	func_2473(var_312_bool); // 0x85e NEW_2
	if(var_312_bool == 0) goto Label_2146; // 0x860 JumpB
	goto Label_2154; // 0x861 Jump
	
Label_2154:
	return 2; // 0x86a Return
	
Label_2146:
	var_313_string = "head"; // 0x862 PushS
	HasAnimationTrack(var_311_bool, var_313_string); // 0x863 Func
	var_314_bool = var_311_bool; // 0x865 Push
	if(var_314_bool == 0) goto Label_2154; // 0x866 JumpB
	var_315_string = "head"; // 0x867 PushS
	UnlookAsync(var_315_string); // 0x868 Func
}


func_2650(var_50_object, var_324_object, var_435_object, var_531_object)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0xa5a PushV
	var_55_string = "tr_andrei"; // 0xa5b PushS
	GetVariable(var_55_string, var_53_int); // 0xa5c Func
	var_56_int = 0; // 0xa5e PushV
	func_2426(var_56_int); // 0xa5f NEW_2
	var_62_bool = var_53_int != var_56_int; // 0xa61 Neq
	if(var_62_bool == 0) goto Label_2668; // 0xa62 JumpB
	func_2589(); // 0xa64 NEW_2
	var_94_string = "tr_andrei"; // 0xa66 PushS
	var_95_int = 0; // 0xa67 PushV
	func_2426(var_95_int); // 0xa68 NEW_2
	SetVariable(var_94_string, var_95_int); // 0xa6a Func
	
Label_2668:
	var_96_string = "mt_andrei"; // 0xa6c PushS
	GetVariable(var_96_string, var_54_int); // 0xa6d Func
	var_97_bool = var_54_int == 0; // 0xa6f Not
	if(var_97_bool == 0) goto Label_2683; // 0xa70 JumpB
	var_98_int = 0; var_99_object = Obj(); // 0xa71 PushV
	var_99_object = var_50_object; // 0xa72 Mov
	TaskCall(3); // 0xa73 TaskCall
	func_351(var_100_object, var_98_int, var_99_object); // 0xa74 NEW_2
	TaskReturn(); // 0xa75 TaskReturn
	var_316_string = "mt_andrei"; // 0xa77 PushS
	var_317_int = 1; // 0xa78 PushI
	SetVariable(var_316_string, var_317_int); // 0xa79 Func
	
Label_2683:
	var_318_bool = 0; var_319_int = 0; // 0xa7b PushV
	var_319_int = 2; // 0xa7c MovI
	func_2435(var_318_bool, var_319_int); // 0xa7d NEW_2
	if(var_318_bool == 0) goto Label_2715; // 0xa7f JumpB
	var_321_int = 1000; // 0xa80 PushI
	var_322_int = 0; var_323_object = Obj(); // 0xa81 PushV
	var_323_object = var_50_object; // 0xa82 Mov
	TaskCall(1); // 0xa83 TaskCall
	func_40(var_324_object, var_322_int, var_323_object); // 0xa84 NEW_2
	TaskReturn(); // 0xa85 TaskReturn
	var_389_bool = var_321_int == var_324_object; // 0xa87 Eq
	if(var_389_bool == 0) goto Label_2714; // 0xa88 JumpB
	var_390_bool = 0; var_391_object = Obj(); // 0xa89 PushV
	var_391_object = var_50_object; // 0xa8a Mov
	func_2293(var_390_bool, var_391_object); // 0xa8b NEW_2
	var_421_bool = var_390_bool == 0; // 0xa8d Not
	if(var_421_bool == 0) goto Label_2704; // 0xa8e JumpB
	return 4; // 0xa8f Return
	
Label_2704:
	var_422_object = Obj(); // 0xa90 PushV
	var_422_object = var_50_object; // 0xa91 Mov
	TaskCall(0); // 0xa92 TaskCall
	func_0(var_422_object); // 0xa93 NEW_2
	TaskReturn(); // 0xa94 TaskReturn
	var_429_object = Obj(); // 0xa96 PushV
	var_429_object = var_50_object; // 0xa97 Mov
	func_2348(); // 0xa98 NEW_2
	
Label_2714:
	return 4; // 0xa9a Return
	
Label_2715:
	var_430_bool = 0; var_431_int = 0; // 0xa9b PushV
	var_431_int = 5; // 0xa9c MovI
	func_2435(var_430_bool, var_431_int); // 0xa9d NEW_2
	if(var_430_bool == 0) goto Label_2747; // 0xa9f JumpB
	var_432_int = 1000; // 0xaa0 PushI
	var_433_int = 0; var_434_object = Obj(); // 0xaa1 PushV
	var_434_object = var_50_object; // 0xaa2 Mov
	TaskCall(5); // 0xaa3 TaskCall
	func_577(var_435_object, var_433_int, var_434_object); // 0xaa4 NEW_2
	TaskReturn(); // 0xaa5 TaskReturn
	var_501_bool = var_432_int == var_435_object; // 0xaa7 Eq
	if(var_501_bool == 0) goto Label_2746; // 0xaa8 JumpB
	var_502_bool = 0; var_503_object = Obj(); // 0xaa9 PushV
	var_503_object = var_50_object; // 0xaaa Mov
	func_2293(var_502_bool, var_503_object); // 0xaab NEW_2
	var_504_bool = var_502_bool == 0; // 0xaad Not
	if(var_504_bool == 0) goto Label_2736; // 0xaae JumpB
	return 4; // 0xaaf Return
	
Label_2736:
	var_505_object = Obj(); // 0xab0 PushV
	var_505_object = var_50_object; // 0xab1 Mov
	TaskCall(0); // 0xab2 TaskCall
	func_0(var_505_object); // 0xab3 NEW_2
	TaskReturn(); // 0xab4 TaskReturn
	var_507_object = Obj(); // 0xab6 PushV
	var_507_object = var_50_object; // 0xab7 Mov
	func_2348(); // 0xab8 NEW_2
	
Label_2746:
	return 4; // 0xaba Return
	
Label_2747:
	var_508_bool = 0; // 0xabb PushV
	var_508_bool = 1; // 0xabc MovB
	var_509_bool = 0; // 0xabd PushV
	var_509_bool = 1; // 0xabe MovB
	var_510_bool = 0; // 0xabf PushV
	var_510_bool = 1; // 0xac0 MovB
	var_511_bool = 0; // 0xac1 PushV
	var_511_bool = 1; // 0xac2 MovB
	var_512_bool = 0; // 0xac3 PushV
	var_512_bool = 1; // 0xac4 MovB
	var_513_bool = 0; // 0xac5 PushV
	var_513_bool = 1; // 0xac6 MovB
	var_514_bool = 0; var_515_int = 0; // 0xac7 PushV
	var_515_int = 3; // 0xac8 MovI
	func_2435(var_514_bool, var_515_int); // 0xac9 NEW_2
	if(var_514_bool == 0) goto Label_2770; // 0xacb JumpB
	var_516_bool = 0; var_517_int = 0; // 0xacc PushV
	var_517_int = 4; // 0xacd MovI
	func_2435(var_516_bool, var_517_int); // 0xace NEW_2
	if(var_516_bool == 0) goto Label_2770; // 0xad0 JumpB
	var_513_bool = 0; // 0xad1 MovB
	
Label_2770:
	if(var_513_bool == 0) goto Label_2777; // 0xad2 JumpB
	var_518_bool = 0; var_519_int = 0; // 0xad3 PushV
	var_519_int = 6; // 0xad4 MovI
	func_2435(var_518_bool, var_519_int); // 0xad5 NEW_2
	if(var_518_bool == 0) goto Label_2777; // 0xad7 JumpB
	var_512_bool = 0; // 0xad8 MovB
	
Label_2777:
	if(var_512_bool == 0) goto Label_2784; // 0xad9 JumpB
	var_520_bool = 0; var_521_int = 0; // 0xada PushV
	var_521_int = 7; // 0xadb MovI
	func_2435(var_520_bool, var_521_int); // 0xadc NEW_2
	if(var_520_bool == 0) goto Label_2784; // 0xade JumpB
	var_511_bool = 0; // 0xadf MovB
	
Label_2784:
	if(var_511_bool == 0) goto Label_2791; // 0xae0 JumpB
	var_522_bool = 0; var_523_int = 0; // 0xae1 PushV
	var_523_int = 8; // 0xae2 MovI
	func_2435(var_522_bool, var_523_int); // 0xae3 NEW_2
	if(var_522_bool == 0) goto Label_2791; // 0xae5 JumpB
	var_510_bool = 0; // 0xae6 MovB
	
Label_2791:
	if(var_510_bool == 0) goto Label_2798; // 0xae7 JumpB
	var_524_bool = 0; var_525_int = 0; // 0xae8 PushV
	var_525_int = 9; // 0xae9 MovI
	func_2435(var_524_bool, var_525_int); // 0xaea NEW_2
	if(var_524_bool == 0) goto Label_2798; // 0xaec JumpB
	var_509_bool = 0; // 0xaed MovB
	
Label_2798:
	if(var_509_bool == 0) goto Label_2805; // 0xaee JumpB
	var_526_bool = 0; var_527_int = 0; // 0xaef PushV
	var_527_int = 10; // 0xaf0 MovI
	func_2435(var_526_bool, var_527_int); // 0xaf1 NEW_2
	if(var_526_bool == 0) goto Label_2805; // 0xaf3 JumpB
	var_508_bool = 0; // 0xaf4 MovB
	
Label_2805:
	if(var_508_bool == 0) goto Label_2833; // 0xaf5 JumpB
	var_528_int = 1000; // 0xaf6 PushI
	var_529_int = 0; var_530_object = Obj(); // 0xaf7 PushV
	var_530_object = var_50_object; // 0xaf8 Mov
	TaskCall(11); // 0xaf9 TaskCall
	func_1530(var_531_object, var_529_int, var_530_object); // 0xafa NEW_2
	TaskReturn(); // 0xafb TaskReturn
	var_588_bool = var_528_int == var_531_object; // 0xafd Eq
	if(var_588_bool == 0) goto Label_2832; // 0xafe JumpB
	var_589_bool = 0; var_590_object = Obj(); // 0xaff PushV
	var_590_object = var_50_object; // 0xb00 Mov
	func_2293(var_589_bool, var_590_object); // 0xb01 NEW_2
	var_591_bool = var_589_bool == 0; // 0xb03 Not
	if(var_591_bool == 0) goto Label_2822; // 0xb04 JumpB
	return 4; // 0xb05 Return
	
Label_2822:
	var_592_object = Obj(); // 0xb06 PushV
	var_592_object = var_50_object; // 0xb07 Mov
	TaskCall(0); // 0xb08 TaskCall
	func_0(var_592_object); // 0xb09 NEW_2
	TaskReturn(); // 0xb0a TaskReturn
	var_594_object = Obj(); // 0xb0c PushV
	var_594_object = var_50_object; // 0xb0d Mov
	func_2348(); // 0xb0e NEW_2
	
Label_2832:
	return 4; // 0xb10 Return
	
Label_2833:
	var_595_bool = 0; var_596_int = 0; // 0xb11 PushV
	var_596_int = 12; // 0xb12 MovI
	func_2435(var_595_bool, var_596_int); // 0xb13 NEW_2
	if(var_595_bool == 0) goto Label_2845; // 0xb15 JumpB
	var_597_int = 0; var_598_object = Obj(); // 0xb16 PushV
	var_598_object = var_50_object; // 0xb17 Mov
	TaskCall(7); // 0xb18 TaskCall
	func_1068(var_599_object, var_597_int, var_598_object); // 0xb19 NEW_2
	TaskReturn(); // 0xb1a TaskReturn
	return 4; // 0xb1c Return
	
Label_2845:
	var_656_int = 0; var_657_object = Obj(); // 0xb1d PushV
	var_657_object = var_50_object; // 0xb1e Mov
	TaskCall(9); // 0xb1f TaskCall
	func_1327(var_658_object, var_656_int, var_657_object); // 0xb20 NEW_2
	TaskReturn(); // 0xb21 TaskReturn
	return 4; // 0xb23 Return
}


func_2398()
{
	var_35_bool = 0; // 0x95e PushV
	func_2473(var_35_bool); // 0x95f NEW_2
	if(var_35_bool == 0) goto Label_2404; // 0x961 JumpB
	lshStopSpeech(); // 0x962 Func
	
Label_2404:
	return 0; // 0x964 Return
}


func_351(var_0_bool, var_98_int, var_99_object)
{
	var_101_object = Obj(); var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_object = Obj(); var_106_bool = 0; var_107_int = 0; var_108_bool = 0; // 0x15f PushV
	var_0_bool = var_99_object; // 0x160 TMov
	var_109_bool = 0; var_110_object = Obj(); var_111_float = 0; // 0x161 PushV
	var_110_object = var_99_object; // 0x162 Mov
	var_111_float = 70.0; // 0x163 MovF
	func_2070(var_110_object, var_111_float); // 0x164 NEW_2
	var_155_bool = var_109_bool == 0; // 0x166 Not
	if(var_155_bool == 0) goto Label_362; // 0x167 JumpB
	var_98_int = -2; // 0x168 MovI
	return 8; // 0x169 Return
	
Label_362:
	CreateDialog(var_105_object); // 0x16a Func
	var_156_int = 0; // 0x16c PushV
	func_2467(var_156_int); // 0x16d NEW_2
	SetNPCName(var_156_int); // 0x16f ObjFunc
	var_157_int = 0; // 0x171 PushV
	func_2465(var_157_int); // 0x172 NEW_2
	SetNPCDescription(var_157_int); // 0x174 ObjFunc
	var_158_string = ""; // 0x176 PushV
	func_2469(var_158_string); // 0x177 NEW_2
	SetPhoto(var_158_string); // 0x179 ObjFunc
	var_159_string = ""; // 0x17b PushV
	func_2471(var_159_string); // 0x17c NEW_2
	SetPhoto2(var_159_string); // 0x17e ObjFunc
	var_160_int = 0; // 0x180 PushV
	func_2633(var_160_int); // 0x181 NEW_2
	SetPlayerName(var_160_int); // 0x183 ObjFunc
	var_107_int = -1; // 0x185 MovI
	IsOverrideActive(var_106_bool); // 0x186 Func
	var_168_bool = var_106_bool; // 0x188 Push
	if(var_168_bool == 0) goto Label_396; // 0x189 JumpB
	var_98_int = -2; // 0x18a MovI
	return 8; // 0x18b Return
	
Label_396:
	DoDialog(var_105_object); // 0x18c Func
	var_169_bool = 0; var_170_object = Obj(); // 0x18e PushV
	var_171_object = Obj(); // 0x18f PushV
	func_2405(var_171_object); // 0x190 NEW_2
	var_170_object = var_171_object; // 0x191 Mov
	func_2155(var_169_bool, var_170_object); // 0x193 NEW_2
	var_259_object = Obj(); var_260_object = Obj(); // 0x195 PushV
	var_259_object = var_99_object; // 0x196 Mov
	var_260_object = var_105_object; // 0x197 Mov
	TaskCall(4); // 0x198 TaskCall
	func_432(var_261_object, var_262_object, var_263_string, var_264_bool, var_259_object, var_260_object); // 0x199 NEW_2
	TaskReturn(); // 0x19a TaskReturn
	IsDialogEnd(var_108_bool); // 0x19c ObjFunc
	
Label_414:
	var_308_bool = var_108_bool == 0; // 0x19e Not
	if(var_308_bool == 0) goto Label_421; // 0x19f JumpB
	sync(); // 0x1a0 Func
	IsDialogEnd(var_108_bool); // 0x1a2 ObjFunc
	goto Label_414; // 0x1a4 Jump
	
Label_421:
	var_309_object = Obj(); // 0x1a5 PushV
	var_309_object = var_99_object; // 0x1a6 Mov
	func_2138(); // 0x1a7 NEW_2
	StopDialog(var_105_object); // 0x1a9 Func
	GetReturnValue(var_107_int); // 0x1ab ObjFunc
	var_98_int = var_107_int; // 0x1ad Mov
	return 8; // 0x1ae Return
}


func_2405(var_171_object)
{
	var_172_object = Obj(); var_173_object = Obj(); // 0x965 PushV
	self(var_173_object); // 0x966 Func
	var_171_object = var_173_object; // 0x968 Mov
	return 2; // 0x969 Return
}


func_2155(var_169_bool, var_170_object)
{
	var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_int = 0; // 0x86b PushV
	var_178_string = "voice_common"; // 0x86c PushS
	GetVariable(var_178_string, var_176_int); // 0x86d Func
	var_179_int = var_176_int; // 0x86f Push
	if(var_179_int == 0) goto Label_2193; // 0x870 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x871 PushV
	var_181_object = var_170_object; // 0x872 Mov
	func_2213(var_181_object); // 0x873 NEW_2
	var_210_bool = var_180_bool == 0; // 0x875 Not
	if(var_210_bool == 0) goto Label_2175; // 0x876 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x877 PushV
	var_212_object = var_170_object; // 0x878 Mov
	func_2250(var_212_object); // 0x879 NEW_2
	var_241_bool = var_211_bool == 0; // 0x87b Not
	if(var_241_bool == 0) goto Label_2175; // 0x87c JumpB
	var_169_bool = 0; // 0x87d MovB
	return 4; // 0x87e Return
	
Label_2175:
	var_242_int = 2; // 0x87f PushI
	irand(var_177_int, var_242_int); // 0x880 Func
	var_243_int = var_177_int; // 0x882 Push
	if(var_243_int == 0) goto Label_2188; // 0x883 JumpB
	var_244_string = "voice_common"; // 0x884 PushS
	var_245_int = 1; // 0x885 PushI
	var_246_int = var_176_int + var_245_int; // 0x886 Add
	var_247_int = 3; // 0x887 PushI
	var_248_int = var_246_int / var_247_int; // 0x888 Mod
	SetVariable(var_244_string, var_248_int); // 0x889 Func
	goto Label_2192; // 0x88b Jump
	
Label_2192:
	goto Label_2211; // 0x890 Jump
	
Label_2211:
	var_169_bool = 1; // 0x8a3 MovB
	return 4; // 0x8a4 Return
	
Label_2188:
	var_249_string = "voice_common"; // 0x88c PushS
	var_250_int = 0; // 0x88d PushI
	SetVariable(var_249_string, var_250_int); // 0x88e Func
	
Label_2193:
	var_251_bool = 0; var_252_object = Obj(); // 0x891 PushV
	var_252_object = var_170_object; // 0x892 Mov
	func_2250(var_252_object); // 0x893 NEW_2
	var_253_bool = var_251_bool == 0; // 0x895 Not
	if(var_253_bool == 0) goto Label_2207; // 0x896 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x897 PushV
	var_255_object = var_170_object; // 0x898 Mov
	func_2213(var_255_object); // 0x899 NEW_2
	var_256_bool = var_254_bool == 0; // 0x89b Not
	if(var_256_bool == 0) goto Label_2207; // 0x89c JumpB
	var_169_bool = 0; // 0x89d MovB
	return 4; // 0x89e Return
	
Label_2207:
	var_257_string = "voice_common"; // 0x89f PushS
	var_258_int = 1; // 0x8a0 PushI
	SetVariable(var_257_string, var_258_int); // 0x8a1 Func
}


func_2411(var_136_cvector, var_137_cvector)
{
	var_139_float = 0; var_140_float = 0; // 0x96b PushV
	var_141_int = var_137_cvector | var_137_cvector; // 0x96c Or
	var_140_float = sqrt(var_141_int); // 0x96d Sqrt2
	var_142_float = 0.0; // 0x96e PushF
	var_143_bool = var_140_float < var_142_float; // 0x96f LT
	if(var_143_bool == 0) goto Label_2419; // 0x970 JumpB
	var_136_cvector = CVector(0.0, 0.0, 0.0); // 0x971 MovV
	return 2; // 0x972 Return
	
Label_2419:
	var_136_cvector = var_137_cvector / var_137_cvector; // 0x973 Div2
	return 2; // 0x974 Return
}


func_2421(var_367_int, var_368_string)
{
	var_369_int = 0; var_370_int = 0; // 0x975 PushV
	GetVariable(var_368_string, var_370_int); // 0x976 Func
	var_367_int = var_370_int; // 0x978 Mov
	return 2; // 0x979 Return
}


func_121(var_0_bool, var_1_object, var_2_object, var_3_object, var_346_object, var_347_object)
{
	var_0_bool = var_347_object; // 0x7a TMov
	var_1_object = var_346_object; // 0x7b TMov
	var_3_object = 0; // 0x7c TMovB
	var_352_int = 1; // 0x7d PushI
	if(var_352_int == 0) goto Label_159; // 0x7e JumpB
	var_353_string = ""; // 0x7f PushV
	var_353_string = "Neutral"; // 0x80 MovS
	func_189(var_347_object, var_353_string); // 0x81 NEW_2
	var_361_int = 525362; // 0x83 PushI
	SetMessage(var_361_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_362_int = 525363; // 0x88 PushI
	var_363_int = -1; // 0x89 PushI
	var_364_int = 26731; // 0x8a PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x8b TObjFunc
	var_365_bool = 0; var_366_object = Obj(); // 0x8d PushV
	var_366_object = var_1_object; // 0x8e MovT
	func_2498(var_366_object); // 0x8f NEW_2
	if(var_365_bool == 0) goto Label_151; // 0x91 JumpB
	var_373_int = 525364; // 0x92 PushI
	var_374_int = 26733; // 0x93 PushI
	var_375_int = 26732; // 0x94 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x95 TObjFunc
	
Label_151:
	var_376_int = 525368; // 0x97 PushI
	var_377_int = -1; // 0x98 PushI
	var_378_int = 26736; // 0x99 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x9a TObjFunc
	goto Label_159; // 0x9c Jump
	
Label_159:
	var_379_bool = 0; // 0x9f PushV
	func_2473(var_379_bool); // 0xa0 NEW_2
	if(var_379_bool == 0) goto Label_174; // 0xa2 JumpB
	
Label_163:
	lshWaitForAnimEnd(); // 0xa3 Func
	var_380_object = var_3_object; // 0xa5 PushT
	if(var_380_object == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_173:
	goto Label_188; // 0xad Jump
	
Label_188:
	return 0; // 0xbc Return
	
Label_168:
	var_381_string = ""; // 0xa8 PushV
	var_381_string = var_2_object; // 0xa9 MovT
	func_2352(var_381_string); // 0xaa NEW_2
	goto Label_163; // 0xac Jump
	
Label_174:
	var_382_string = "all"; // 0xae PushS
	var_383_string = "idle"; // 0xaf PushS
	PlayAnimation(var_382_string, var_383_string); // 0xb0 Func
	
Label_178:
	WaitForAnimEnd(); // 0xb2 Func
	var_384_object = var_3_object; // 0xb4 PushT
	if(var_384_object == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_183:
	var_385_string = "all"; // 0xb7 PushS
	var_386_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_385_string, var_386_string); // 0xb9 Func
	goto Label_178; // 0xbb Jump
}


func_2426(var_56_int)
{
	var_57_float = 0; var_58_float = 0; // 0x97a PushV
	GetGameTime(var_58_float); // 0x97b Func
	var_59_int = 1; // 0x97d PushI
	var_60_int = 0; // 0x97e PushV
	var_61_int = 24; // 0x97f PushI
	var_60_int = var_58_float / var_58_float; // 0x980 Div2
	var_56_int = var_59_int + var_60_int; // 0x981 Add2
	return 2; // 0x982 Return
}


func_1149(var_0_bool, var_1_object, var_2_object, var_3_object, var_621_object, var_622_object)
{
	var_0_bool = var_622_object; // 0x47e TMov
	var_1_object = var_621_object; // 0x47f TMov
	var_3_object = 0; // 0x480 TMovB
	var_627_int = 1; // 0x481 PushI
	if(var_627_int == 0) goto Label_1182; // 0x482 JumpB
	var_628_string = ""; // 0x483 PushV
	var_628_string = "Neutral"; // 0x484 MovS
	func_1212(var_622_object, var_628_string); // 0x485 NEW_2
	var_636_int = 535231; // 0x487 PushI
	SetMessage(var_636_int); // 0x488 TObjFunc
	ClearReplies(); // 0x48a TObjFunc
	var_637_int = 535232; // 0x48c PushI
	var_638_int = 36953; // 0x48d PushI
	var_639_int = 36907; // 0x48e PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x48f TObjFunc
	var_640_int = 535233; // 0x491 PushI
	var_641_int = -1; // 0x492 PushI
	var_642_int = 36908; // 0x493 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x494 TObjFunc
	var_643_int = 535280; // 0x496 PushI
	var_644_int = -1; // 0x497 PushI
	var_645_int = 36956; // 0x498 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x499 TObjFunc
	goto Label_1182; // 0x49b Jump
	
Label_1182:
	var_646_bool = 0; // 0x49e PushV
	func_2473(var_646_bool); // 0x49f NEW_2
	if(var_646_bool == 0) goto Label_1197; // 0x4a1 JumpB
	
Label_1186:
	lshWaitForAnimEnd(); // 0x4a2 Func
	var_647_object = var_3_object; // 0x4a4 PushT
	if(var_647_object == 0) goto Label_1191; // 0x4a5 JumpB
	goto Label_1196; // 0x4a6 Jump
	
Label_1196:
	goto Label_1211; // 0x4ac Jump
	
Label_1211:
	return 0; // 0x4bb Return
	
Label_1191:
	var_648_string = ""; // 0x4a7 PushV
	var_648_string = var_2_object; // 0x4a8 MovT
	func_2352(var_648_string); // 0x4a9 NEW_2
	goto Label_1186; // 0x4ab Jump
	
Label_1197:
	var_649_string = "all"; // 0x4ad PushS
	var_650_string = "idle"; // 0x4ae PushS
	PlayAnimation(var_649_string, var_650_string); // 0x4af Func
	
Label_1201:
	WaitForAnimEnd(); // 0x4b1 Func
	var_651_object = var_3_object; // 0x4b3 PushT
	if(var_651_object == 0) goto Label_1206; // 0x4b4 JumpB
	goto Label_1211; // 0x4b5 Jump
	
Label_1206:
	var_652_string = "all"; // 0x4b6 PushS
	var_653_string = "idle"; // 0x4b7 PushS
	PlayAnimation(var_652_string, var_653_string); // 0x4b8 Func
	goto Label_1201; // 0x4ba Jump
}


func_1408(var_0_bool, var_1_object, var_2_object, var_3_object, var_680_object, var_681_object)
{
	var_0_bool = var_681_object; // 0x581 TMov
	var_1_object = var_680_object; // 0x582 TMov
	var_3_object = 0; // 0x583 TMovB
	var_686_int = 1; // 0x584 PushI
	if(var_686_int == 0) goto Label_1436; // 0x585 JumpB
	var_687_string = ""; // 0x586 PushV
	var_687_string = "Neutral"; // 0x587 MovS
	func_1466(var_681_object, var_687_string); // 0x588 NEW_2
	var_695_int = 540545; // 0x58a PushI
	SetMessage(var_695_int); // 0x58b TObjFunc
	ClearReplies(); // 0x58d TObjFunc
	var_696_int = 540546; // 0x58f PushI
	var_697_int = -1; // 0x590 PushI
	var_698_int = 42555; // 0x591 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x592 TObjFunc
	var_699_int = 540798; // 0x594 PushI
	var_700_int = -1; // 0x595 PushI
	var_701_int = 42847; // 0x596 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x597 TObjFunc
	goto Label_1436; // 0x599 Jump
	
Label_1436:
	var_702_bool = 0; // 0x59c PushV
	func_2473(var_702_bool); // 0x59d NEW_2
	if(var_702_bool == 0) goto Label_1451; // 0x59f JumpB
	
Label_1440:
	lshWaitForAnimEnd(); // 0x5a0 Func
	var_703_object = var_3_object; // 0x5a2 PushT
	if(var_703_object == 0) goto Label_1445; // 0x5a3 JumpB
	goto Label_1450; // 0x5a4 Jump
	
Label_1450:
	goto Label_1465; // 0x5aa Jump
	
Label_1465:
	return 0; // 0x5b9 Return
	
Label_1445:
	var_704_string = ""; // 0x5a5 PushV
	var_704_string = var_2_object; // 0x5a6 MovT
	func_2352(var_704_string); // 0x5a7 NEW_2
	goto Label_1440; // 0x5a9 Jump
	
Label_1451:
	var_705_string = "all"; // 0x5ab PushS
	var_706_string = "idle"; // 0x5ac PushS
	PlayAnimation(var_705_string, var_706_string); // 0x5ad Func
	
Label_1455:
	WaitForAnimEnd(); // 0x5af Func
	var_707_object = var_3_object; // 0x5b1 PushT
	if(var_707_object == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1465; // 0x5b3 Jump
	
Label_1460:
	var_708_string = "all"; // 0x5b4 PushS
	var_709_string = "idle"; // 0x5b5 PushS
	PlayAnimation(var_708_string, var_709_string); // 0x5b6 Func
	goto Label_1455; // 0x5b8 Jump
}


func_2435(var_318_bool, var_319_int)
{
	var_320_int = 0; // 0x984 PushV
	func_2426(var_320_int); // 0x985 NEW_2
	var_318_bool = var_320_int == var_319_int; // 0x987 Eq2
	return 0; // 0x988 Return
}


func_2441(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0x989 PushV
	var_59_string = "idle"; // 0x98a MovS
	var_60_int = var_57_int; // 0x98b Push
	if(var_60_int == 0) goto Label_2446; // 0x98c JumpB
	var_59_string = var_59_string + var_57_int; // 0x98d Add2
	
Label_2446:
	var_56_string = var_59_string; // 0x98e Mov
	return 2; // 0x98f Return
}


func_1674(var_2_object, var_560_string)
{
	var_561_bool = 0; // 0x68b PushV
	func_2473(var_561_bool); // 0x68c NEW_2
	var_562_bool = var_561_bool == 0; // 0x68e Not
	if(var_562_bool == 0) goto Label_1681; // 0x68f JumpB
	return 0; // 0x690 Return
	
Label_1681:
	var_563_bool = var_560_string == var_2_object; // 0x691 Eq
	if(var_563_bool == 0) goto Label_1684; // 0x692 JumpB
	return 0; // 0x693 Return
	
Label_1684:
	var_564_string = ""; var_565_bool = 0; // 0x694 PushV
	var_564_string = var_560_string; // 0x695 Mov
	var_566_string = ""; // 0x696 PushS
	var_567_bool = var_560_string == var_566_string; // 0x697 Eq
	if(var_567_bool == 0) goto Label_1691; // 0x698 JumpB
	var_565_bool = 0; // 0x699 MovB
	goto Label_1692; // 0x69a Jump
	
Label_1692:
	func_2368(var_564_string, var_565_bool); // 0x69c NEW_2
	var_2_object = var_560_string; // 0x69e TMov
	return 0; // 0x69f Return
	
Label_1691:
	var_565_bool = 1; // 0x69b MovB
}


func_2448(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x990 PushV
	var_53_int = 0; // 0x991 MovI
	
Label_2450:
	var_55_string = "all"; // 0x992 PushS
	var_56_string = ""; var_57_int = 0; // 0x993 PushV
	var_57_int = var_53_int; // 0x994 Mov
	func_2441(var_56_string, var_57_int); // 0x995 NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0x997 Func
	var_61_bool = var_54_bool == 0; // 0x999 Not
	if(var_61_bool == 0) goto Label_2460; // 0x99a JumpB
	goto Label_2463; // 0x99b Jump
	
Label_2463:
	var_50_int = var_53_int; // 0x99f Mov
	return 4; // 0x9a0 Return
	
Label_2460:
	var_62_int = 1; // 0x99c PushI
	var_53_int = var_53_int + var_62_int; // 0x99d Add2
	goto Label_2450; // 0x99e Jump
}


func_658(var_0_bool, var_1_object, var_2_object, var_3_object, var_457_object, var_458_object)
{
	var_0_bool = var_458_object; // 0x293 TMov
	var_1_object = var_457_object; // 0x294 TMov
	var_3_object = 0; // 0x295 TMovB
	var_463_int = 1; // 0x296 PushI
	if(var_463_int == 0) goto Label_701; // 0x297 JumpB
	var_464_string = ""; // 0x298 PushV
	var_464_string = "Grin"; // 0x299 MovS
	func_731(var_458_object, var_464_string); // 0x29a NEW_2
	var_472_int = 525919; // 0x29c PushI
	SetMessage(var_472_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_473_bool = 0; var_474_object = Obj(); // 0x2a1 PushV
	var_474_object = var_1_object; // 0x2a2 MovT
	func_2510(var_474_object); // 0x2a3 NEW_2
	if(var_473_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_479_int = 525920; // 0x2a6 PushI
	var_480_int = 42995; // 0x2a7 PushI
	var_481_int = 27212; // 0x2a8 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x2a9 TObjFunc
	
Label_683:
	var_482_int = 529685; // 0x2ab PushI
	var_483_int = -1; // 0x2ac PushI
	var_484_int = 31148; // 0x2ad PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x2ae TObjFunc
	var_485_int = 525923; // 0x2b0 PushI
	var_486_int = -1; // 0x2b1 PushI
	var_487_int = 27215; // 0x2b2 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x2b3 TObjFunc
	var_488_int = 529057; // 0x2b5 PushI
	var_489_int = -1; // 0x2b6 PushI
	var_490_int = 30499; // 0x2b7 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x2b8 TObjFunc
	goto Label_701; // 0x2ba Jump
	
Label_701:
	var_491_bool = 0; // 0x2bd PushV
	func_2473(var_491_bool); // 0x2be NEW_2
	if(var_491_bool == 0) goto Label_716; // 0x2c0 JumpB
	
Label_705:
	lshWaitForAnimEnd(); // 0x2c1 Func
	var_492_object = var_3_object; // 0x2c3 PushT
	if(var_492_object == 0) goto Label_710; // 0x2c4 JumpB
	goto Label_715; // 0x2c5 Jump
	
Label_715:
	goto Label_730; // 0x2cb Jump
	
Label_730:
	return 0; // 0x2da Return
	
Label_710:
	var_493_string = ""; // 0x2c6 PushV
	var_493_string = var_2_object; // 0x2c7 MovT
	func_2352(var_493_string); // 0x2c8 NEW_2
	goto Label_705; // 0x2ca Jump
	
Label_716:
	var_494_string = "all"; // 0x2cc PushS
	var_495_string = "idle"; // 0x2cd PushS
	PlayAnimation(var_494_string, var_495_string); // 0x2ce Func
	
Label_720:
	WaitForAnimEnd(); // 0x2d0 Func
	var_496_object = var_3_object; // 0x2d2 PushT
	if(var_496_object == 0) goto Label_725; // 0x2d3 JumpB
	goto Label_730; // 0x2d4 Jump
	
Label_725:
	var_497_string = "all"; // 0x2d5 PushS
	var_498_string = "idle"; // 0x2d6 PushS
	PlayAnimation(var_497_string, var_498_string); // 0x2d7 Func
	goto Label_720; // 0x2d9 Jump
}


func_2465(var_157_int)
{
	var_157_int = 515529; // 0x9a1 MovI
	return 0; // 0x9a2 Return
}


func_2467(var_156_int)
{
	var_156_int = 502855; // 0x9a3 MovI
	return 0; // 0x9a4 Return
}


func_2469(var_158_string)
{
	var_158_string = "ui/NPC_Andrei.png"; // 0x9a5 MovS
	return 0; // 0x9a6 Return
}


func_2213(var_180_bool)
{
	var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = ""; var_187_string = ""; var_188_int = 0; var_189_bool = 0; var_190_int = 0; var_191_string = ""; // 0x8a5 PushV
	var_187_string = "c"; // 0x8a6 MovS
	var_188_int = 0; // 0x8a7 MovI
	
Label_2216:
	var_192_int = 1; // 0x8a8 PushI
	if(var_192_int == 0) goto Label_2229; // 0x8a9 JumpB
	var_193_int = 1; // 0x8aa PushI
	var_194_int = var_188_int + var_193_int; // 0x8ab Add
	var_195_int = var_187_string + var_194_int; // 0x8ac Add
	HasProperty(var_195_int, var_189_bool); // 0x8ad ObjFunc
	var_196_bool = var_189_bool == 0; // 0x8af Not
	if(var_196_bool == 0) goto Label_2226; // 0x8b0 JumpB
	goto Label_2229; // 0x8b1 Jump
	
Label_2229:
	var_197_bool = var_188_int == 0; // 0x8b5 Not
	if(var_197_bool == 0) goto Label_2233; // 0x8b6 JumpB
	var_180_bool = 0; // 0x8b7 MovB
	return 10; // 0x8b8 Return
	
Label_2233:
	var_190_int = 0; // 0x8b9 MovI
	var_198_int = 1; // 0x8ba PushI
	var_199_bool = var_188_int > var_198_int; // 0x8bb GT
	if(var_199_bool == 0) goto Label_2239; // 0x8bc JumpB
	irand(var_190_int, var_188_int); // 0x8bd Func
	
Label_2239:
	var_200_int = 1; // 0x8bf PushI
	var_201_int = var_190_int + var_200_int; // 0x8c0 Add
	var_202_int = var_187_string + var_201_int; // 0x8c1 Add
	GetProperty(var_202_int, var_191_string); // 0x8c2 ObjFunc
	var_203_bool = 0; var_204_string = ""; // 0x8c4 PushV
	var_204_string = var_191_string; // 0x8c5 Mov
	func_2383(var_203_bool, var_204_string); // 0x8c6 NEW_2
	var_180_bool = var_203_bool; // 0x8c7 Mov
	return 10; // 0x8c9 Return
	
Label_2226:
	var_209_int = 1; // 0x8b2 PushI
	var_188_int = var_188_int + var_209_int; // 0x8b3 Add2
	goto Label_2216; // 0x8b4 Jump
}


func_2471(var_159_string)
{
	var_159_string = "ui/NPC_Andrei_b.png"; // 0x9a7 MovS
	return 0; // 0x9a8 Return
}


func_2473(var_151_bool)
{
	var_151_bool = 1; // 0x9a9 MovB
	return 0; // 0x9aa Return
}


func_1962()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x7aa PushV
	WaitForAnimEnd(); // 0x7ab Func
	var_48_bool = 0; // 0x7ad PushV
	func_2065(var_48_bool); // 0x7ae NEW_2
	var_49_bool = var_48_bool == 0; // 0x7b0 Not
	if(var_49_bool == 0) goto Label_1971; // 0x7b1 JumpB
	return 12; // 0x7b2 Return
	
Label_1971:
	var_50_int = 0; // 0x7b3 PushV
	func_2448(var_50_int); // 0x7b4 NEW_2
	var_42_int = var_50_int; // 0x7b5 Mov
	var_43_int = 0; // 0x7b7 MovI
	
Label_1976:
	var_63_bool = 0; // 0x7b8 PushV
	var_63_bool = 0; // 0x7b9 MovB
	var_64_int = 5; // 0x7ba PushI
	var_65_bool = var_43_int < var_64_int; // 0x7bb LT
	if(var_65_bool == 0) goto Label_1986; // 0x7bc JumpB
	var_66_bool = 0; // 0x7bd PushV
	func_2065(var_66_bool); // 0x7be NEW_2
	if(var_66_bool == 0) goto Label_1986; // 0x7c0 JumpB
	var_63_bool = 1; // 0x7c1 MovB
	
Label_1986:
	if(var_63_bool == 0) goto Label_2028; // 0x7c2 JumpB
	var_67_bool = var_42_int == 0; // 0x7c3 Not
	if(var_67_bool == 0) goto Label_1996; // 0x7c4 JumpB
	var_68_int = 3; // 0x7c5 PushI
	Sleep(var_68_int, var_44_bool); // 0x7c6 Func
	var_69_bool = var_44_bool == 0; // 0x7c8 Not
	if(var_69_bool == 0) goto Label_1995; // 0x7c9 JumpB
	goto Label_2028; // 0x7ca Jump
	
Label_2028:
	ResetAAS(); // 0x7ec Func
	return 12; // 0x7ee Return
	
Label_1995:
	goto Label_2017; // 0x7cb Jump
	
Label_2017:
	var_70_bool = 0; // 0x7e1 PushV
	func_2031(var_70_bool); // 0x7e2 NEW_2
	var_71_bool = var_70_bool == 0; // 0x7e4 Not
	if(var_71_bool == 0) goto Label_2023; // 0x7e5 JumpB
	goto Label_2028; // 0x7e6 Jump
	
Label_2023:
	ResetAAS(); // 0x7e7 Func
	var_72_int = 1; // 0x7e9 PushI
	var_43_int = var_43_int + var_72_int; // 0x7ea Add2
	goto Label_1976; // 0x7eb Jump
	
Label_1996:
	irand(var_45_int, var_42_int); // 0x7cc Func
	var_73_int = 5; // 0x7ce PushI
	irand(var_46_int, var_73_int); // 0x7cf Func
	var_74_int = 0; // 0x7d1 PushI
	var_75_bool = var_46_int != var_74_int; // 0x7d2 Neq
	if(var_75_bool == 0) goto Label_2005; // 0x7d3 JumpB
	var_45_int = 0; // 0x7d4 MovI
	
Label_2005:
	var_76_string = "all"; // 0x7d5 PushS
	var_77_string = ""; var_78_int = 0; // 0x7d6 PushV
	var_78_int = var_45_int; // 0x7d7 Mov
	func_2441(var_77_string, var_78_int); // 0x7d8 NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x7da Func
	WaitForAnimEnd(var_47_bool); // 0x7dc Func
	var_79_bool = var_47_bool == 0; // 0x7de Not
	if(var_79_bool == 0) goto Label_2017; // 0x7df JumpB
	goto Label_2028; // 0x7e0 Jump
}


func_2475()
{
	var_45_string = "k2q04"; // 0x9ac PushS
	var_46_int = 3; // 0x9ad PushI
	SetVariable(var_45_string, var_46_int); // 0x9ae Func
	func_2522(); // 0x9b1 NEW_2
	return 0; // 0x9b3 Return
}


func_432(var_0_bool, var_1_object, var_2_object, var_3_object, var_259_object, var_260_object)
{
	var_0_bool = var_260_object; // 0x1b1 TMov
	var_1_object = var_259_object; // 0x1b2 TMov
	var_3_object = 0; // 0x1b3 TMovB
	var_265_int = 1; // 0x1b4 PushI
	if(var_265_int == 0) goto Label_460; // 0x1b5 JumpB
	var_266_string = ""; // 0x1b6 PushV
	var_266_string = "Neutral"; // 0x1b7 MovS
	func_490(var_260_object, var_266_string); // 0x1b8 NEW_2
	var_283_int = 525462; // 0x1ba PushI
	SetMessage(var_283_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_284_int = 529295; // 0x1bf PushI
	var_285_int = 30750; // 0x1c0 PushI
	var_286_int = 30749; // 0x1c1 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1c2 TObjFunc
	var_287_int = 525463; // 0x1c4 PushI
	var_288_int = -1; // 0x1c5 PushI
	var_289_int = 26819; // 0x1c6 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x1c7 TObjFunc
	goto Label_460; // 0x1c9 Jump
	
Label_460:
	var_290_bool = 0; // 0x1cc PushV
	func_2473(var_290_bool); // 0x1cd NEW_2
	if(var_290_bool == 0) goto Label_475; // 0x1cf JumpB
	
Label_464:
	lshWaitForAnimEnd(); // 0x1d0 Func
	var_291_object = var_3_object; // 0x1d2 PushT
	if(var_291_object == 0) goto Label_469; // 0x1d3 JumpB
	goto Label_474; // 0x1d4 Jump
	
Label_474:
	goto Label_489; // 0x1da Jump
	
Label_489:
	return 0; // 0x1e9 Return
	
Label_469:
	var_292_string = ""; // 0x1d5 PushV
	var_292_string = var_2_object; // 0x1d6 MovT
	func_2352(var_292_string); // 0x1d7 NEW_2
	goto Label_464; // 0x1d9 Jump
	
Label_475:
	var_303_string = "all"; // 0x1db PushS
	var_304_string = "idle"; // 0x1dc PushS
	PlayAnimation(var_303_string, var_304_string); // 0x1dd Func
	
Label_479:
	WaitForAnimEnd(); // 0x1df Func
	var_305_object = var_3_object; // 0x1e1 PushT
	if(var_305_object == 0) goto Label_484; // 0x1e2 JumpB
	goto Label_489; // 0x1e3 Jump
	
Label_484:
	var_306_string = "all"; // 0x1e4 PushS
	var_307_string = "idle"; // 0x1e5 PushS
	PlayAnimation(var_306_string, var_307_string); // 0x1e6 Func
	goto Label_479; // 0x1e8 Jump
}


func_2484()
{
	var_40_string = "k5q02"; // 0x9b5 PushS
	var_41_int = 5; // 0x9b6 PushI
	SetVariable(var_40_string, var_41_int); // 0x9b7 Func
	func_2535(); // 0x9ba NEW_2
	return 0; // 0x9bc Return
}


func_1466(var_2_object, var_687_string)
{
	var_688_bool = 0; // 0x5bb PushV
	func_2473(var_688_bool); // 0x5bc NEW_2
	var_689_bool = var_688_bool == 0; // 0x5be Not
	if(var_689_bool == 0) goto Label_1473; // 0x5bf JumpB
	return 0; // 0x5c0 Return
	
Label_1473:
	var_690_bool = var_687_string == var_2_object; // 0x5c1 Eq
	if(var_690_bool == 0) goto Label_1476; // 0x5c2 JumpB
	return 0; // 0x5c3 Return
	
Label_1476:
	var_691_string = ""; var_692_bool = 0; // 0x5c4 PushV
	var_691_string = var_687_string; // 0x5c5 Mov
	var_693_string = ""; // 0x5c6 PushS
	var_694_bool = var_687_string == var_693_string; // 0x5c7 Eq
	if(var_694_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_692_bool = 0; // 0x5c9 MovB
	goto Label_1484; // 0x5ca Jump
	
Label_1484:
	func_2368(var_691_string, var_692_bool); // 0x5cc NEW_2
	var_2_object = var_687_string; // 0x5ce TMov
	return 0; // 0x5cf Return
	
Label_1483:
	var_692_bool = 1; // 0x5cb MovB
}


func_1212(var_2_object, var_628_string)
{
	var_629_bool = 0; // 0x4bd PushV
	func_2473(var_629_bool); // 0x4be NEW_2
	var_630_bool = var_629_bool == 0; // 0x4c0 Not
	if(var_630_bool == 0) goto Label_1219; // 0x4c1 JumpB
	return 0; // 0x4c2 Return
	
Label_1219:
	var_631_bool = var_628_string == var_2_object; // 0x4c3 Eq
	if(var_631_bool == 0) goto Label_1222; // 0x4c4 JumpB
	return 0; // 0x4c5 Return
	
Label_1222:
	var_632_string = ""; var_633_bool = 0; // 0x4c6 PushV
	var_632_string = var_628_string; // 0x4c7 Mov
	var_634_string = ""; // 0x4c8 PushS
	var_635_bool = var_628_string == var_634_string; // 0x4c9 Eq
	if(var_635_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_633_bool = 0; // 0x4cb MovB
	goto Label_1230; // 0x4cc Jump
	
Label_1230:
	func_2368(var_632_string, var_633_bool); // 0x4ce NEW_2
	var_2_object = var_628_string; // 0x4d0 TMov
	return 0; // 0x4d1 Return
	
Label_1229:
	var_633_bool = 1; // 0x4cd MovB
}


func_189(var_2_object, var_353_string)
{
	var_354_bool = 0; // 0xbe PushV
	func_2473(var_354_bool); // 0xbf NEW_2
	var_355_bool = var_354_bool == 0; // 0xc1 Not
	if(var_355_bool == 0) goto Label_196; // 0xc2 JumpB
	return 0; // 0xc3 Return
	
Label_196:
	var_356_bool = var_353_string == var_2_object; // 0xc4 Eq
	if(var_356_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_357_string = ""; var_358_bool = 0; // 0xc7 PushV
	var_357_string = var_353_string; // 0xc8 Mov
	var_359_string = ""; // 0xc9 PushS
	var_360_bool = var_353_string == var_359_string; // 0xca Eq
	if(var_360_bool == 0) goto Label_206; // 0xcb JumpB
	var_358_bool = 0; // 0xcc MovB
	goto Label_207; // 0xcd Jump
	
Label_207:
	func_2368(var_357_string, var_358_bool); // 0xcf NEW_2
	var_2_object = var_353_string; // 0xd1 TMov
	return 0; // 0xd2 Return
	
Label_206:
	var_358_bool = 1; // 0xce MovB
}


func_2493()
{
	var_40_int = 1000; // 0x9be PushI
	SetReturnValue(var_40_int); // 0x9bf ObjFunc
	return 0; // 0x9c1 Return
}


func_2498(var_365_bool)
{
	var_367_int = 0; var_368_string = ""; // 0x9c3 PushV
	var_368_string = "k2q04"; // 0x9c4 MovS
	func_2421(var_367_int, var_368_string); // 0x9c5 NEW_2
	var_371_int = 2; // 0x9c7 PushI
	var_372_bool = var_367_int == var_371_int; // 0x9c8 Eq
	if(var_372_bool == 0) goto Label_2508; // 0x9c9 JumpB
	var_365_bool = 1; // 0x9ca MovB
	return 0; // 0x9cb Return
	
Label_2508:
	var_365_bool = 0; // 0x9cc MovB
	return 0; // 0x9cd Return
}


func_2250(var_211_bool)
{
	var_213_string = ""; var_214_int = 0; var_215_bool = 0; var_216_int = 0; var_217_string = ""; var_218_string = ""; var_219_int = 0; var_220_bool = 0; var_221_int = 0; var_222_string = ""; // 0x8ca PushV
	var_223_string = "d"; // 0x8cb PushS
	var_224_int = 0; // 0x8cc PushV
	func_2426(var_224_int); // 0x8cd NEW_2
	var_225_int = var_223_string + var_224_int; // 0x8cf Add
	var_226_string = "m"; // 0x8d0 PushS
	var_218_string = var_225_int + var_226_string; // 0x8d1 Add2
	var_219_int = 0; // 0x8d2 MovI
	
Label_2259:
	var_227_int = 1; // 0x8d3 PushI
	if(var_227_int == 0) goto Label_2272; // 0x8d4 JumpB
	var_228_int = 1; // 0x8d5 PushI
	var_229_int = var_219_int + var_228_int; // 0x8d6 Add
	var_230_int = var_218_string + var_229_int; // 0x8d7 Add
	HasProperty(var_230_int, var_220_bool); // 0x8d8 ObjFunc
	var_231_bool = var_220_bool == 0; // 0x8da Not
	if(var_231_bool == 0) goto Label_2269; // 0x8db JumpB
	goto Label_2272; // 0x8dc Jump
	
Label_2272:
	var_232_bool = var_219_int == 0; // 0x8e0 Not
	if(var_232_bool == 0) goto Label_2276; // 0x8e1 JumpB
	var_211_bool = 0; // 0x8e2 MovB
	return 10; // 0x8e3 Return
	
Label_2276:
	var_221_int = 0; // 0x8e4 MovI
	var_233_int = 1; // 0x8e5 PushI
	var_234_bool = var_219_int > var_233_int; // 0x8e6 GT
	if(var_234_bool == 0) goto Label_2282; // 0x8e7 JumpB
	irand(var_221_int, var_219_int); // 0x8e8 Func
	
Label_2282:
	var_235_int = 1; // 0x8ea PushI
	var_236_int = var_221_int + var_235_int; // 0x8eb Add
	var_237_int = var_218_string + var_236_int; // 0x8ec Add
	GetProperty(var_237_int, var_222_string); // 0x8ed ObjFunc
	var_238_bool = 0; var_239_string = ""; // 0x8ef PushV
	var_239_string = var_222_string; // 0x8f0 Mov
	func_2383(var_238_bool, var_239_string); // 0x8f1 NEW_2
	var_211_bool = var_238_bool; // 0x8f2 Mov
	return 10; // 0x8f4 Return
	
Label_2269:
	var_240_int = 1; // 0x8dd PushI
	var_219_int = var_219_int + var_240_int; // 0x8de Add2
	goto Label_2259; // 0x8df Jump
}


func_2510(var_473_bool)
{
	var_475_int = 0; var_476_string = ""; // 0x9cf PushV
	var_476_string = "k5q02"; // 0x9d0 MovS
	func_2421(var_475_int, var_476_string); // 0x9d1 NEW_2
	var_477_int = 4; // 0x9d3 PushI
	var_478_bool = var_475_int == var_477_int; // 0x9d4 Eq
	if(var_478_bool == 0) goto Label_2520; // 0x9d5 JumpB
	var_473_bool = 1; // 0x9d6 MovB
	return 0; // 0x9d7 Return
	
Label_2520:
	var_473_bool = 0; // 0x9d8 MovB
	return 0; // 0x9d9 Return
}


func_2522()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x9da PushV
	var_49_int = 512; // 0x9db PushI
	var_50_int = 2; // 0x9dc PushI
	var_51_int = 529711; // 0x9dd PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0x9de Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0x9e0 PushV
	var_53_object = var_48_object; // 0x9e1 Mov
	var_54_int = 507; // 0x9e2 MovI
	func_2561(var_52_bool, var_53_object, var_54_int); // 0x9e3 NEW_2
	return 2; // 0x9e5 Return
}


func_731(var_2_object, var_464_string)
{
	var_465_bool = 0; // 0x2dc PushV
	func_2473(var_465_bool); // 0x2dd NEW_2
	var_466_bool = var_465_bool == 0; // 0x2df Not
	if(var_466_bool == 0) goto Label_738; // 0x2e0 JumpB
	return 0; // 0x2e1 Return
	
Label_738:
	var_467_bool = var_464_string == var_2_object; // 0x2e2 Eq
	if(var_467_bool == 0) goto Label_741; // 0x2e3 JumpB
	return 0; // 0x2e4 Return
	
Label_741:
	var_468_string = ""; var_469_bool = 0; // 0x2e5 PushV
	var_468_string = var_464_string; // 0x2e6 Mov
	var_470_string = ""; // 0x2e7 PushS
	var_471_bool = var_464_string == var_470_string; // 0x2e8 Eq
	if(var_471_bool == 0) goto Label_748; // 0x2e9 JumpB
	var_469_bool = 0; // 0x2ea MovB
	goto Label_749; // 0x2eb Jump
	
Label_749:
	func_2368(var_468_string, var_469_bool); // 0x2ed NEW_2
	var_2_object = var_464_string; // 0x2ef TMov
	return 0; // 0x2f0 Return
	
Label_748:
	var_469_bool = 1; // 0x2ec MovB
}


func_2535()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x9e7 PushV
	var_44_int = 402; // 0x9e8 PushI
	var_45_int = 2; // 0x9e9 PushI
	var_46_int = 525940; // 0x9ea PushI
	CreateDiaryEntry(var_43_object, var_44_int, var_45_int, var_46_int); // 0x9eb Func
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0; // 0x9ed PushV
	var_48_object = var_43_object; // 0x9ee Mov
	var_49_int = 397; // 0x9ef MovI
	func_2561(var_47_bool, var_48_object, var_49_int); // 0x9f0 NEW_2
	return 2; // 0x9f2 Return
}


func_490(var_2_object, var_266_string)
{
	var_267_bool = 0; // 0x1eb PushV
	func_2473(var_267_bool); // 0x1ec NEW_2
	var_268_bool = var_267_bool == 0; // 0x1ee Not
	if(var_268_bool == 0) goto Label_497; // 0x1ef JumpB
	return 0; // 0x1f0 Return
	
Label_497:
	var_269_bool = var_266_string == var_2_object; // 0x1f1 Eq
	if(var_269_bool == 0) goto Label_500; // 0x1f2 JumpB
	return 0; // 0x1f3 Return
	
Label_500:
	var_270_string = ""; var_271_bool = 0; // 0x1f4 PushV
	var_270_string = var_266_string; // 0x1f5 Mov
	var_272_string = ""; // 0x1f6 PushS
	var_273_bool = var_266_string == var_272_string; // 0x1f7 Eq
	if(var_273_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_271_bool = 0; // 0x1f9 MovB
	goto Label_508; // 0x1fa Jump
	
Label_508:
	func_2368(var_270_string, var_271_bool); // 0x1fc NEW_2
	var_2_object = var_266_string; // 0x1fe TMov
	return 0; // 0x1ff Return
	
Label_507:
	var_271_bool = 1; // 0x1fb MovB
}


func_2031(var_70_bool)
{
	var_70_bool = 1; // 0x7ef MovB
	return 0; // 0x7f0 Return
}


func_2033()
{
	StopAnimation(); // 0x7f1 Func
	StopGroup0(); // 0x7f3 Func
	return 0; // 0x7f5 Return
}


func_2548(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x9f4 PushV
	GetDiaryRoot(var_58_object); // 0x9f5 Func
	var_59_bool = var_58_object == 0; // 0x9f7 Not
	if(var_59_bool == 0) goto Label_2558; // 0x9f8 JumpB
	var_60_string = "Can't retrieve diary root"; // 0x9f9 PushS
	Trace(var_60_string); // 0x9fa Func
	var_56_object = 0; // 0x9fc MovB
	return 2; // 0x9fd Return
	
Label_2558:
	var_56_object = var_58_object; // 0x9fe Mov
	return 2; // 0x9ff Return
}


func_2293(var_390_bool, var_391_object)
{
	var_392_bool = 0; var_393_object = Obj(); var_394_float = 0; // 0x8f6 PushV
	var_393_object = var_391_object; // 0x8f7 Mov
	var_394_float = 70; // 0x8f8 MovI
	func_2301(var_393_object, var_394_float); // 0x8f9 NEW_2
	var_390_bool = var_392_bool; // 0x8fa Mov
	return 0; // 0x8fc Return
}


func_2038(var_47_float)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x7f6 PushV
	GetPosition(var_52_cvector); // 0x7f7 Func
	GetPosition(var_53_cvector); // 0x7f9 ObjFunc
	var_54_cvector = var_53_cvector - var_52_cvector; // 0x7fb Sub2
	var_47_float = var_54_cvector | var_54_cvector; // 0x7fc Or2
	return 6; // 0x7fd Return
}


func_1786(var_0_bool)
{
	var_32_bool = 0; // 0x6fa PushV
	func_2065(var_32_bool); // 0x6fb NEW_2
	var_35_bool = var_32_bool == 0; // 0x6fd Not
	if(var_35_bool == 0) goto Label_1793; // 0x6fe JumpB
	Hold(); // 0x6ff Func
	
Label_1793:
	GetDirection(var_0_bool); // 0x701 Func
	
Label_1795:
	func_1962(); // 0x704 NEW_2
	goto Label_1795; // 0x706 Jump
}


func_2301(var_392_bool, var_394_float)
{
	var_395_float = 0; var_396_cvector = CVector(0,0,0); var_397_cvector = CVector(0,0,0); var_398_cvector = CVector(0,0,0); var_399_cvector = CVector(0,0,0); var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_bool = 0; var_403_float = 0; var_404_cvector = CVector(0,0,0); var_405_cvector = CVector(0,0,0); var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_bool = 0; // 0x8fd PushV
	GetPosition(var_404_cvector); // 0x8fe ObjFunc
	GetEyesHeight(var_403_float); // 0x900 ObjFunc
	var_411_float = GetByIndex(var_404_cvector, 1); // 0x902 PushE
	var_411_float = var_411_float + var_403_float; // 0x903 Add2
	SetByIndex(var_404_cvector, 1) = var_411_float; // 0x904 PopE
	GetPosition(var_405_cvector); // 0x905 Func
	GetEyesHeight(var_403_float); // 0x907 Func
	var_412_float = GetByIndex(var_405_cvector, 1); // 0x909 PushE
	var_412_float = var_412_float + var_403_float; // 0x90a Add2
	SetByIndex(var_405_cvector, 1) = var_412_float; // 0x90b PopE
	var_406_cvector = var_404_cvector - var_405_cvector; // 0x90c Sub2
	var_413_float = GetByIndex(var_406_cvector, 1); // 0x90d PushE
	var_413_float = 0; // 0x90e MovI
	SetByIndex(var_406_cvector, 1) = var_413_float; // 0x90f PopE
	var_414_int = var_406_cvector | var_406_cvector; // 0x910 Or
	var_415_float = sqrt(var_414_int); // 0x911 Sqrt
	var_406_cvector = var_406_cvector / var_406_cvector; // 0x912 Div2
	var_407_cvector = -var_406_cvector; // 0x913 Neg2
	var_416_float = var_406_cvector * var_394_float; // 0x914 Mult
	var_417_cvector = CVector(0.0, 10.0, 0.0); // 0x915 PushVec
	var_408_cvector = var_416_float - var_417_cvector; // 0x916 Sub2
	var_409_cvector = var_405_cvector + var_408_cvector; // 0x917 Add2
	IsOverrideActive(var_410_bool); // 0x918 Func
	var_418_bool = var_410_bool; // 0x91a Push
	if(var_418_bool == 0) goto Label_2334; // 0x91b JumpB
	var_392_bool = 0; // 0x91c MovB
	return 16; // 0x91d Return
	
Label_2334:
	StopWorld(); // 0x91e Func
	CameraTransit(var_409_cvector, var_407_cvector); // 0x920 Func
	var_419_float = GetByIndex(var_408_cvector, 0); // 0x922 PushE
	var_420_float = GetByIndex(var_408_cvector, 2); // 0x923 PushE
	Rotate(var_419_float, var_420_float); // 0x924 Func
	CameraWaitForPlayFinish(); // 0x926 Func
	ResumeWorld(); // 0x928 Func
	var_392_bool = 1; // 0x92a MovB
	return 16; // 0x92b Return
}


func_2046(var_40_bool, var_41_cvector)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; // 0x7fe PushV
	GetPosition(var_45_cvector); // 0x7ff Func
	var_46_cvector = var_41_cvector - var_45_cvector; // 0x801 Sub2
	var_48_float = GetByIndex(var_46_cvector, 0); // 0x802 PushE
	var_49_float = GetByIndex(var_46_cvector, 2); // 0x803 PushE
	Rotate(var_48_float, var_49_float, var_47_bool); // 0x804 Func
	var_40_bool = var_47_bool; // 0x806 Mov
	return 6; // 0x807 Return
}


