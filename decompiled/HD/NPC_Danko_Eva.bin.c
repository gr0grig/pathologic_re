task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xc9 PushI
	if(var_33_int == 0) goto Label_405; // 0xca JumpB
	func_4706(); // 0xcc NEW_2
	var_35_int = 4274; // 0xce PushI
	var_36_bool = var_31_bool == var_35_int; // 0xcf Eq
	if(var_36_bool == 0) goto Label_268; // 0xd0 JumpB
	var_37_bool = 0; // 0xd1 PushV
	var_37_bool = 0; // 0xd2 MovB
	var_38_bool = 0; var_39_object = Obj(); // 0xd3 PushV
	var_39_object = var_1_object; // 0xd4 MovT
	func_5556(var_39_object); // 0xd5 NEW_2
	if(var_38_bool == 0) goto Label_222; // 0xd7 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xd8 PushV
	var_47_object = var_1_object; // 0xd9 MovT
	func_5568(var_47_object); // 0xda NEW_2
	if(var_46_bool == 0) goto Label_222; // 0xdc JumpB
	var_37_bool = 1; // 0xdd MovB
	
Label_222:
	if(var_37_bool == 0) goto Label_248; // 0xde JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xdf PushV
	var_52_object = var_1_object; // 0xe0 MovT
	var_53_object = var_0_object; // 0xe1 MovT
	func_5154(); // 0xe2 NEW_2
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
	func_4858(var_144_bool); // 0x18b NEW_2
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
	var_33_int = 1; // 0x318 PushI
	if(var_33_int == 0) goto Label_2122; // 0x319 JumpB
	func_4706(); // 0x31b NEW_2
	var_35_int = 4900; // 0x31d PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x31e Eq
	if(var_36_bool == 0) goto Label_815; // 0x31f JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x320 PushV
	var_37_object = var_1_object; // 0x321 MovT
	var_38_object = var_0_object; // 0x322 MovT
	func_5079(); // 0x323 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x325 PushV
	var_49_object = var_1_object; // 0x326 MovT
	var_50_object = var_0_object; // 0x327 MovT
	func_5086(); // 0x328 NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x32a PushV
	var_77_object = var_1_object; // 0x32b MovT
	var_78_object = var_0_object; // 0x32c MovT
	func_4979(); // 0x32d NEW_2
	
Label_815:
	var_103_int = 4915; // 0x32f PushI
	var_104_bool = var_32_cvector == var_103_int; // 0x330 Eq
	if(var_104_bool == 0) goto Label_833; // 0x331 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x332 PushV
	var_105_object = var_1_object; // 0x333 MovT
	var_106_object = var_0_object; // 0x334 MovT
	func_5079(); // 0x335 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x337 PushV
	var_107_object = var_1_object; // 0x338 MovT
	var_108_object = var_0_object; // 0x339 MovT
	func_5086(); // 0x33a NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x33c PushV
	var_109_object = var_1_object; // 0x33d MovT
	var_110_object = var_0_object; // 0x33e MovT
	func_4979(); // 0x33f NEW_2
	
Label_833:
	var_111_int = 33775; // 0x341 PushI
	var_112_bool = var_32_cvector == var_111_int; // 0x342 Eq
	if(var_112_bool == 0) goto Label_846; // 0x343 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x344 PushV
	var_113_object = var_1_object; // 0x345 MovT
	var_114_object = var_0_object; // 0x346 MovT
	func_4866(); // 0x347 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x349 PushV
	var_164_object = var_1_object; // 0x34a MovT
	var_165_object = var_0_object; // 0x34b MovT
	func_5126(); // 0x34c NEW_2
	
Label_846:
	var_171_int = 33778; // 0x34e PushI
	var_172_bool = var_32_cvector == var_171_int; // 0x34f Eq
	if(var_172_bool == 0) goto Label_859; // 0x350 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x351 PushV
	var_173_object = var_1_object; // 0x352 MovT
	var_174_object = var_0_object; // 0x353 MovT
	func_4866(); // 0x354 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x356 PushV
	var_175_object = var_1_object; // 0x357 MovT
	var_176_object = var_0_object; // 0x358 MovT
	func_5126(); // 0x359 NEW_2
	
Label_859:
	var_177_int = 36804; // 0x35b PushI
	var_178_bool = var_32_cvector == var_177_int; // 0x35c Eq
	if(var_178_bool == 0) goto Label_867; // 0x35d JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0x35e PushV
	var_179_object = var_1_object; // 0x35f MovT
	var_180_object = var_0_object; // 0x360 MovT
	func_5001(); // 0x361 NEW_2
	
Label_867:
	var_183_int = 36763; // 0x363 PushI
	var_184_bool = var_32_cvector == var_183_int; // 0x364 Eq
	if(var_184_bool == 0) goto Label_875; // 0x365 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x366 PushV
	var_185_object = var_1_object; // 0x367 MovT
	var_186_object = var_0_object; // 0x368 MovT
	func_4995(); // 0x369 NEW_2
	
Label_875:
	var_189_int = 33344; // 0x36b PushI
	var_190_bool = var_32_cvector == var_189_int; // 0x36c Eq
	if(var_190_bool == 0) goto Label_883; // 0x36d JumpB
	var_191_object = Obj(); var_192_object = Obj(); // 0x36e PushV
	var_191_object = var_1_object; // 0x36f MovT
	var_192_object = var_0_object; // 0x370 MovT
	func_5148(); // 0x371 NEW_2
	
Label_883:
	var_195_int = 33346; // 0x373 PushI
	var_196_bool = var_32_cvector == var_195_int; // 0x374 Eq
	if(var_196_bool == 0) goto Label_896; // 0x375 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x376 PushV
	var_197_object = var_1_object; // 0x377 MovT
	var_198_object = var_0_object; // 0x378 MovT
	func_4913(); // 0x379 NEW_2
	var_207_object = Obj(); var_208_object = Obj(); // 0x37b PushV
	var_207_object = var_1_object; // 0x37c MovT
	var_208_object = var_0_object; // 0x37d MovT
	func_4929(); // 0x37e NEW_2
	
Label_896:
	var_214_int = 33899; // 0x380 PushI
	var_215_bool = var_32_cvector == var_214_int; // 0x381 Eq
	if(var_215_bool == 0) goto Label_904; // 0x382 JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x383 PushV
	var_216_object = var_1_object; // 0x384 MovT
	var_217_object = var_0_object; // 0x385 MovT
	func_4945(); // 0x386 NEW_2
	
Label_904:
	var_220_int = 33901; // 0x388 PushI
	var_221_bool = var_32_cvector == var_220_int; // 0x389 Eq
	if(var_221_bool == 0) goto Label_927; // 0x38a JumpB
	var_222_object = Obj(); var_223_object = Obj(); // 0x38b PushV
	var_222_object = var_1_object; // 0x38c MovT
	var_223_object = var_0_object; // 0x38d MovT
	func_4951(var_223_object); // 0x38e NEW_2
	var_246_object = Obj(); var_247_object = Obj(); // 0x390 PushV
	var_246_object = var_1_object; // 0x391 MovT
	var_247_object = var_0_object; // 0x392 MovT
	func_4902(var_247_object); // 0x393 NEW_2
	var_252_object = Obj(); var_253_object = Obj(); // 0x395 PushV
	var_252_object = var_1_object; // 0x396 MovT
	var_253_object = var_0_object; // 0x397 MovT
	func_4962(var_253_object); // 0x398 NEW_2
	var_258_object = Obj(); var_259_object = Obj(); // 0x39a PushV
	var_258_object = var_1_object; // 0x39b MovT
	var_259_object = var_0_object; // 0x39c MovT
	func_4896(); // 0x39d NEW_2
	
Label_927:
	var_262_int = 35136; // 0x39f PushI
	var_263_bool = var_32_cvector == var_262_int; // 0x3a0 Eq
	if(var_263_bool == 0) goto Label_935; // 0x3a1 JumpB
	var_264_object = Obj(); var_265_object = Obj(); // 0x3a2 PushV
	var_264_object = var_1_object; // 0x3a3 MovT
	var_265_object = var_0_object; // 0x3a4 MovT
	func_5007(); // 0x3a5 NEW_2
	
Label_935:
	var_268_int = 4899; // 0x3a7 PushI
	var_269_bool = var_31_bool == var_268_int; // 0x3a8 Eq
	if(var_269_bool == 0) goto Label_1182; // 0x3a9 JumpB
	var_270_bool = 0; // 0x3aa PushV
	var_270_bool = 0; // 0x3ab MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x3ac PushV
	var_272_object = var_1_object; // 0x3ad MovT
	func_5220(var_272_object); // 0x3ae NEW_2
	if(var_271_bool == 0) goto Label_951; // 0x3b0 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x3b1 PushV
	var_280_object = var_1_object; // 0x3b2 MovT
	func_5244(var_280_object); // 0x3b3 NEW_2
	if(var_279_bool == 0) goto Label_951; // 0x3b5 JumpB
	var_270_bool = 1; // 0x3b6 MovB
	
Label_951:
	if(var_270_bool == 0) goto Label_977; // 0x3b7 JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0x3b8 PushV
	var_285_object = var_1_object; // 0x3b9 MovT
	var_286_object = var_0_object; // 0x3ba MovT
	func_5142(); // 0x3bb NEW_2
	var_289_string = ""; // 0x3bd PushV
	var_289_string = "Fear"; // 0x3be MovS
	func_769(var_32_cvector, var_289_string); // 0x3bf NEW_2
	var_306_int = 504496; // 0x3c1 PushI
	SetMessage(var_306_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_307_int = 504521; // 0x3c6 PushI
	var_308_int = 22246; // 0x3c7 PushI
	var_309_int = 4928; // 0x3c8 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x3c9 TObjFunc
	var_310_int = 521059; // 0x3cb PushI
	var_311_int = 22246; // 0x3cc PushI
	var_312_int = 22250; // 0x3cd PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x3ce TObjFunc
	return 0; // 0x3d0 Return
	
Label_977:
	var_313_bool = 0; // 0x3d1 PushV
	var_313_bool = 1; // 0x3d2 MovB
	var_314_bool = 0; // 0x3d3 PushV
	var_314_bool = 0; // 0x3d4 MovB
	var_315_bool = 0; // 0x3d5 PushV
	var_315_bool = 0; // 0x3d6 MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x3d7 PushV
	var_317_object = var_1_object; // 0x3d8 MovT
	func_5604(var_317_object); // 0x3d9 NEW_2
	if(var_316_bool == 0) goto Label_994; // 0x3db JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0x3dc PushV
	var_323_object = var_1_object; // 0x3dd MovT
	func_5328(var_323_object); // 0x3de NEW_2
	if(var_322_bool == 0) goto Label_994; // 0x3e0 JumpB
	var_315_bool = 1; // 0x3e1 MovB
	
Label_994:
	if(var_315_bool == 0) goto Label_1001; // 0x3e2 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x3e3 PushV
	var_329_object = var_1_object; // 0x3e4 MovT
	func_5244(var_329_object); // 0x3e5 NEW_2
	if(var_328_bool == 0) goto Label_1001; // 0x3e7 JumpB
	var_314_bool = 1; // 0x3e8 MovB
	
Label_1001:
	if(var_314_bool == 0) goto Label_1026; // 0x3e9 JumpB
	var_330_bool = 0; // 0x3ea PushV
	var_330_bool = 0; // 0x3eb MovB
	var_331_bool = 0; // 0x3ec PushV
	var_331_bool = 0; // 0x3ed MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x3ee PushV
	var_333_object = var_1_object; // 0x3ef MovT
	func_5604(var_333_object); // 0x3f0 NEW_2
	if(var_332_bool == 0) goto Label_1017; // 0x3f2 JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0x3f3 PushV
	var_335_object = var_1_object; // 0x3f4 MovT
	func_5292(var_335_object); // 0x3f5 NEW_2
	if(var_334_bool == 0) goto Label_1017; // 0x3f7 JumpB
	var_331_bool = 1; // 0x3f8 MovB
	
Label_1017:
	if(var_331_bool == 0) goto Label_1024; // 0x3f9 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x3fa PushV
	var_341_object = var_1_object; // 0x3fb MovT
	func_5244(var_341_object); // 0x3fc NEW_2
	if(var_340_bool == 0) goto Label_1024; // 0x3fe JumpB
	var_330_bool = 1; // 0x3ff MovB
	
Label_1024:
	if(var_330_bool == 0) goto Label_1026; // 0x400 JumpB
	var_313_bool = 0; // 0x401 MovB
	
Label_1026:
	if(var_313_bool == 0) goto Label_1052; // 0x402 JumpB
	var_342_object = Obj(); var_343_object = Obj(); // 0x403 PushV
	var_342_object = var_1_object; // 0x404 MovT
	var_343_object = var_0_object; // 0x405 MovT
	func_4860(); // 0x406 NEW_2
	var_346_string = ""; // 0x408 PushV
	var_346_string = "Neutral"; // 0x409 MovS
	func_769(var_32_cvector, var_346_string); // 0x40a NEW_2
	var_347_int = 532343; // 0x40c PushI
	SetMessage(var_347_int); // 0x40d TObjFunc
	ClearReplies(); // 0x40f TObjFunc
	var_348_int = 533604; // 0x411 PushI
	var_349_int = 35125; // 0x412 PushI
	var_350_int = 35124; // 0x413 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x414 TObjFunc
	var_351_int = 533608; // 0x416 PushI
	var_352_int = 35129; // 0x417 PushI
	var_353_int = 35128; // 0x418 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x419 TObjFunc
	return 0; // 0x41b Return
	
Label_1052:
	var_354_string = ""; // 0x41c PushV
	var_354_string = "Neutral"; // 0x41d MovS
	func_769(var_32_cvector, var_354_string); // 0x41e NEW_2
	var_355_int = 521052; // 0x420 PushI
	SetMessage(var_355_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_356_bool = 0; // 0x425 PushV
	var_356_bool = 0; // 0x426 MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x427 PushV
	var_358_object = var_1_object; // 0x428 MovT
	func_5484(var_358_object); // 0x429 NEW_2
	if(var_357_bool == 0) goto Label_1074; // 0x42b JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x42c PushV
	var_364_object = var_1_object; // 0x42d MovT
	func_5352(var_364_object); // 0x42e NEW_2
	if(var_363_bool == 0) goto Label_1074; // 0x430 JumpB
	var_356_bool = 1; // 0x431 MovB
	
Label_1074:
	if(var_356_bool == 0) goto Label_1080; // 0x432 JumpB
	var_369_int = 535143; // 0x433 PushI
	var_370_int = 36805; // 0x434 PushI
	var_371_int = 36804; // 0x435 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x436 TObjFunc
	
Label_1080:
	var_372_bool = 0; var_373_object = Obj(); // 0x438 PushV
	var_373_object = var_1_object; // 0x439 MovT
	func_5340(var_373_object); // 0x43a NEW_2
	if(var_372_bool == 0) goto Label_1090; // 0x43c JumpB
	var_378_int = 535107; // 0x43d PushI
	var_379_int = 36764; // 0x43e PushI
	var_380_int = 36763; // 0x43f PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x440 TObjFunc
	
Label_1090:
	var_381_bool = 0; // 0x442 PushV
	var_381_bool = 0; // 0x443 MovB
	var_382_bool = 0; // 0x444 PushV
	var_382_bool = 0; // 0x445 MovB
	var_383_bool = 0; var_384_object = Obj(); // 0x446 PushV
	var_384_object = var_1_object; // 0x447 MovT
	func_5304(var_384_object); // 0x448 NEW_2
	if(var_383_bool == 0) goto Label_1105; // 0x44a JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0x44b PushV
	var_390_object = var_1_object; // 0x44c MovT
	func_5388(var_390_object); // 0x44d NEW_2
	if(var_389_bool == 0) goto Label_1105; // 0x44f JumpB
	var_382_bool = 1; // 0x450 MovB
	
Label_1105:
	if(var_382_bool == 0) goto Label_1112; // 0x451 JumpB
	var_395_bool = 0; var_396_object = Obj(); // 0x452 PushV
	var_396_object = var_1_object; // 0x453 MovT
	func_5256(var_396_object); // 0x454 NEW_2
	if(var_395_bool == 0) goto Label_1112; // 0x456 JumpB
	var_381_bool = 1; // 0x457 MovB
	
Label_1112:
	if(var_381_bool == 0) goto Label_1118; // 0x458 JumpB
	var_401_int = 531940; // 0x459 PushI
	var_402_int = 33345; // 0x45a PushI
	var_403_int = 33344; // 0x45b PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x45c TObjFunc
	
Label_1118:
	var_404_bool = 0; // 0x45e PushV
	var_404_bool = 0; // 0x45f MovB
	var_405_bool = 0; // 0x460 PushV
	var_405_bool = 0; // 0x461 MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x462 PushV
	var_407_object = var_1_object; // 0x463 MovT
	func_5268(var_407_object); // 0x464 NEW_2
	if(var_406_bool == 0) goto Label_1133; // 0x466 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x467 PushV
	var_413_object = var_1_object; // 0x468 MovT
	func_5316(var_413_object); // 0x469 NEW_2
	if(var_412_bool == 0) goto Label_1133; // 0x46b JumpB
	var_405_bool = 1; // 0x46c MovB
	
Label_1133:
	if(var_405_bool == 0) goto Label_1140; // 0x46d JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x46e PushV
	var_419_object = var_1_object; // 0x46f MovT
	func_5256(var_419_object); // 0x470 NEW_2
	if(var_418_bool == 0) goto Label_1140; // 0x472 JumpB
	var_404_bool = 1; // 0x473 MovB
	
Label_1140:
	if(var_404_bool == 0) goto Label_1146; // 0x474 JumpB
	var_420_int = 532458; // 0x475 PushI
	var_421_int = 33900; // 0x476 PushI
	var_422_int = 33899; // 0x477 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x478 TObjFunc
	
Label_1146:
	var_423_bool = 0; // 0x47a PushV
	var_423_bool = 0; // 0x47b MovB
	var_424_bool = 0; var_425_object = Obj(); // 0x47c PushV
	var_425_object = var_1_object; // 0x47d MovT
	func_5364(var_425_object); // 0x47e NEW_2
	if(var_424_bool == 0) goto Label_1159; // 0x480 JumpB
	var_430_bool = 0; var_431_object = Obj(); // 0x481 PushV
	var_431_object = var_1_object; // 0x482 MovT
	func_5280(var_431_object); // 0x483 NEW_2
	if(var_430_bool == 0) goto Label_1159; // 0x485 JumpB
	var_423_bool = 1; // 0x486 MovB
	
Label_1159:
	if(var_423_bool == 0) goto Label_1165; // 0x487 JumpB
	var_436_int = 533614; // 0x488 PushI
	var_437_int = 35137; // 0x489 PushI
	var_438_int = 35136; // 0x48a PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x48b TObjFunc
	
Label_1165:
	var_439_bool = 0; var_440_object = Obj(); // 0x48d PushV
	var_440_object = var_1_object; // 0x48e MovT
	func_5232(var_440_object); // 0x48f NEW_2
	var_445_bool = var_439_bool == 0; // 0x491 Not
	if(var_445_bool == 0) goto Label_1176; // 0x492 JumpB
	var_446_int = 521053; // 0x493 PushI
	var_447_int = -1; // 0x494 PushI
	var_448_int = 22244; // 0x495 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x496 TObjFunc
	
Label_1176:
	var_449_int = 521054; // 0x498 PushI
	var_450_int = -1; // 0x499 PushI
	var_451_int = 22245; // 0x49a PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x49b TObjFunc
	return 0; // 0x49d Return
	
Label_1182:
	var_452_int = 35137; // 0x49e PushI
	var_453_bool = var_31_bool == var_452_int; // 0x49f Eq
	if(var_453_bool == 0) goto Label_1205; // 0x4a0 JumpB
	var_454_string = ""; // 0x4a1 PushV
	var_454_string = "Modesty"; // 0x4a2 MovS
	func_769(var_32_cvector, var_454_string); // 0x4a3 NEW_2
	var_455_int = 533615; // 0x4a5 PushI
	SetMessage(var_455_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_456_int = 533616; // 0x4aa PushI
	var_457_int = 35140; // 0x4ab PushI
	var_458_int = 35138; // 0x4ac PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x4ad TObjFunc
	var_459_int = 533617; // 0x4af PushI
	var_460_int = -1; // 0x4b0 PushI
	var_461_int = 35139; // 0x4b1 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x4b2 TObjFunc
	return 0; // 0x4b4 Return
	
Label_1205:
	var_462_int = 35140; // 0x4b5 PushI
	var_463_bool = var_31_bool == var_462_int; // 0x4b6 Eq
	if(var_463_bool == 0) goto Label_1223; // 0x4b7 JumpB
	var_464_string = ""; // 0x4b8 PushV
	var_464_string = "Modesty"; // 0x4b9 MovS
	func_769(var_32_cvector, var_464_string); // 0x4ba NEW_2
	var_465_int = 533618; // 0x4bc PushI
	SetMessage(var_465_int); // 0x4bd TObjFunc
	ClearReplies(); // 0x4bf TObjFunc
	var_466_int = 533619; // 0x4c1 PushI
	var_467_int = 35142; // 0x4c2 PushI
	var_468_int = 35141; // 0x4c3 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4c4 TObjFunc
	return 0; // 0x4c6 Return
	
Label_1223:
	var_469_int = 35142; // 0x4c7 PushI
	var_470_bool = var_31_bool == var_469_int; // 0x4c8 Eq
	if(var_470_bool == 0) goto Label_1246; // 0x4c9 JumpB
	var_471_string = ""; // 0x4ca PushV
	var_471_string = "Modesty"; // 0x4cb MovS
	func_769(var_32_cvector, var_471_string); // 0x4cc NEW_2
	var_472_int = 533620; // 0x4ce PushI
	SetMessage(var_472_int); // 0x4cf TObjFunc
	ClearReplies(); // 0x4d1 TObjFunc
	var_473_int = 533621; // 0x4d3 PushI
	var_474_int = 35144; // 0x4d4 PushI
	var_475_int = 35143; // 0x4d5 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x4d6 TObjFunc
	var_476_int = 533624; // 0x4d8 PushI
	var_477_int = 35147; // 0x4d9 PushI
	var_478_int = 35146; // 0x4da PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x4db TObjFunc
	return 0; // 0x4dd Return
	
Label_1246:
	var_479_int = 35147; // 0x4de PushI
	var_480_bool = var_31_bool == var_479_int; // 0x4df Eq
	if(var_480_bool == 0) goto Label_1269; // 0x4e0 JumpB
	var_481_string = ""; // 0x4e1 PushV
	var_481_string = "Love"; // 0x4e2 MovS
	func_769(var_32_cvector, var_481_string); // 0x4e3 NEW_2
	var_482_int = 533625; // 0x4e5 PushI
	SetMessage(var_482_int); // 0x4e6 TObjFunc
	ClearReplies(); // 0x4e8 TObjFunc
	var_483_int = 533626; // 0x4ea PushI
	var_484_int = 35150; // 0x4eb PushI
	var_485_int = 35148; // 0x4ec PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x4ed TObjFunc
	var_486_int = 533627; // 0x4ef PushI
	var_487_int = -1; // 0x4f0 PushI
	var_488_int = 35149; // 0x4f1 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x4f2 TObjFunc
	return 0; // 0x4f4 Return
	
Label_1269:
	var_489_int = 35144; // 0x4f5 PushI
	var_490_bool = var_31_bool == var_489_int; // 0x4f6 Eq
	if(var_490_bool == 0) goto Label_1292; // 0x4f7 JumpB
	var_491_string = ""; // 0x4f8 PushV
	var_491_string = "Love"; // 0x4f9 MovS
	func_769(var_32_cvector, var_491_string); // 0x4fa NEW_2
	var_492_int = 533622; // 0x4fc PushI
	SetMessage(var_492_int); // 0x4fd TObjFunc
	ClearReplies(); // 0x4ff TObjFunc
	var_493_int = 533623; // 0x501 PushI
	var_494_int = 35150; // 0x502 PushI
	var_495_int = 35145; // 0x503 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x504 TObjFunc
	var_496_int = 533637; // 0x506 PushI
	var_497_int = -1; // 0x507 PushI
	var_498_int = 35161; // 0x508 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x509 TObjFunc
	return 0; // 0x50b Return
	
Label_1292:
	var_499_int = 35150; // 0x50c PushI
	var_500_bool = var_31_bool == var_499_int; // 0x50d Eq
	if(var_500_bool == 0) goto Label_1315; // 0x50e JumpB
	var_501_string = ""; // 0x50f PushV
	var_501_string = "Love"; // 0x510 MovS
	func_769(var_32_cvector, var_501_string); // 0x511 NEW_2
	var_502_int = 533628; // 0x513 PushI
	SetMessage(var_502_int); // 0x514 TObjFunc
	ClearReplies(); // 0x516 TObjFunc
	var_503_int = 533629; // 0x518 PushI
	var_504_int = 35154; // 0x519 PushI
	var_505_int = 35152; // 0x51a PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x51b TObjFunc
	var_506_int = 533630; // 0x51d PushI
	var_507_int = 35157; // 0x51e PushI
	var_508_int = 35153; // 0x51f PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x520 TObjFunc
	return 0; // 0x522 Return
	
Label_1315:
	var_509_int = 35154; // 0x523 PushI
	var_510_bool = var_31_bool == var_509_int; // 0x524 Eq
	if(var_510_bool == 0) goto Label_1338; // 0x525 JumpB
	var_511_string = ""; // 0x526 PushV
	var_511_string = "Love"; // 0x527 MovS
	func_769(var_32_cvector, var_511_string); // 0x528 NEW_2
	var_512_int = 533631; // 0x52a PushI
	SetMessage(var_512_int); // 0x52b TObjFunc
	ClearReplies(); // 0x52d TObjFunc
	var_513_int = 533632; // 0x52f PushI
	var_514_int = 35157; // 0x530 PushI
	var_515_int = 35155; // 0x531 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x532 TObjFunc
	var_516_int = 533633; // 0x534 PushI
	var_517_int = -1; // 0x535 PushI
	var_518_int = 35156; // 0x536 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x537 TObjFunc
	return 0; // 0x539 Return
	
Label_1338:
	var_519_int = 35157; // 0x53a PushI
	var_520_bool = var_31_bool == var_519_int; // 0x53b Eq
	if(var_520_bool == 0) goto Label_1361; // 0x53c JumpB
	var_521_string = ""; // 0x53d PushV
	var_521_string = "Neutral"; // 0x53e MovS
	func_769(var_32_cvector, var_521_string); // 0x53f NEW_2
	var_522_int = 533634; // 0x541 PushI
	SetMessage(var_522_int); // 0x542 TObjFunc
	ClearReplies(); // 0x544 TObjFunc
	var_523_int = 533635; // 0x546 PushI
	var_524_int = -1; // 0x547 PushI
	var_525_int = 35158; // 0x548 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x549 TObjFunc
	var_526_int = 533636; // 0x54b PushI
	var_527_int = -1; // 0x54c PushI
	var_528_int = 35159; // 0x54d PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x54e TObjFunc
	return 0; // 0x550 Return
	
Label_1361:
	var_529_int = 33900; // 0x551 PushI
	var_530_bool = var_31_bool == var_529_int; // 0x552 Eq
	if(var_530_bool == 0) goto Label_1379; // 0x553 JumpB
	var_531_string = ""; // 0x554 PushV
	var_531_string = "Neutral"; // 0x555 MovS
	func_769(var_32_cvector, var_531_string); // 0x556 NEW_2
	var_532_int = 532459; // 0x558 PushI
	SetMessage(var_532_int); // 0x559 TObjFunc
	ClearReplies(); // 0x55b TObjFunc
	var_533_int = 532460; // 0x55d PushI
	var_534_int = -1; // 0x55e PushI
	var_535_int = 33901; // 0x55f PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x560 TObjFunc
	return 0; // 0x562 Return
	
Label_1379:
	var_536_int = 33345; // 0x563 PushI
	var_537_bool = var_31_bool == var_536_int; // 0x564 Eq
	if(var_537_bool == 0) goto Label_1397; // 0x565 JumpB
	var_538_string = ""; // 0x566 PushV
	var_538_string = "Modesty"; // 0x567 MovS
	func_769(var_32_cvector, var_538_string); // 0x568 NEW_2
	var_539_int = 531941; // 0x56a PushI
	SetMessage(var_539_int); // 0x56b TObjFunc
	ClearReplies(); // 0x56d TObjFunc
	var_540_int = 531942; // 0x56f PushI
	var_541_int = -1; // 0x570 PushI
	var_542_int = 33346; // 0x571 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_543_int = 36764; // 0x575 PushI
	var_544_bool = var_31_bool == var_543_int; // 0x576 Eq
	if(var_544_bool == 0) goto Label_1425; // 0x577 JumpB
	var_545_string = ""; // 0x578 PushV
	var_545_string = "Love"; // 0x579 MovS
	func_769(var_32_cvector, var_545_string); // 0x57a NEW_2
	var_546_int = 535108; // 0x57c PushI
	SetMessage(var_546_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_547_int = 535109; // 0x581 PushI
	var_548_int = 36766; // 0x582 PushI
	var_549_int = 36765; // 0x583 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x584 TObjFunc
	var_550_int = 535120; // 0x586 PushI
	var_551_int = 36766; // 0x587 PushI
	var_552_int = 36776; // 0x588 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x589 TObjFunc
	var_553_int = 535124; // 0x58b PushI
	var_554_int = 36768; // 0x58c PushI
	var_555_int = 36782; // 0x58d PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x58e TObjFunc
	return 0; // 0x590 Return
	
Label_1425:
	var_556_int = 36766; // 0x591 PushI
	var_557_bool = var_31_bool == var_556_int; // 0x592 Eq
	if(var_557_bool == 0) goto Label_1448; // 0x593 JumpB
	var_558_string = ""; // 0x594 PushV
	var_558_string = "Love"; // 0x595 MovS
	func_769(var_32_cvector, var_558_string); // 0x596 NEW_2
	var_559_int = 535110; // 0x598 PushI
	SetMessage(var_559_int); // 0x599 TObjFunc
	ClearReplies(); // 0x59b TObjFunc
	var_560_int = 535111; // 0x59d PushI
	var_561_int = 36768; // 0x59e PushI
	var_562_int = 36767; // 0x59f PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x5a0 TObjFunc
	var_563_int = 535122; // 0x5a2 PushI
	var_564_int = 36774; // 0x5a3 PushI
	var_565_int = 36778; // 0x5a4 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_566_int = 36774; // 0x5a8 PushI
	var_567_bool = var_31_bool == var_566_int; // 0x5a9 Eq
	if(var_567_bool == 0) goto Label_1471; // 0x5aa JumpB
	var_568_string = ""; // 0x5ab PushV
	var_568_string = "Love"; // 0x5ac MovS
	func_769(var_32_cvector, var_568_string); // 0x5ad NEW_2
	var_569_int = 535118; // 0x5af PushI
	SetMessage(var_569_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_570_int = 535119; // 0x5b4 PushI
	var_571_int = 36768; // 0x5b5 PushI
	var_572_int = 36775; // 0x5b6 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x5b7 TObjFunc
	var_573_int = 535123; // 0x5b9 PushI
	var_574_int = -1; // 0x5ba PushI
	var_575_int = 36780; // 0x5bb PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x5bc TObjFunc
	return 0; // 0x5be Return
	
Label_1471:
	var_576_int = 36768; // 0x5bf PushI
	var_577_bool = var_31_bool == var_576_int; // 0x5c0 Eq
	if(var_577_bool == 0) goto Label_1489; // 0x5c1 JumpB
	var_578_string = ""; // 0x5c2 PushV
	var_578_string = "Love"; // 0x5c3 MovS
	func_769(var_32_cvector, var_578_string); // 0x5c4 NEW_2
	var_579_int = 535112; // 0x5c6 PushI
	SetMessage(var_579_int); // 0x5c7 TObjFunc
	ClearReplies(); // 0x5c9 TObjFunc
	var_580_int = 535113; // 0x5cb PushI
	var_581_int = 36770; // 0x5cc PushI
	var_582_int = 36769; // 0x5cd PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x5ce TObjFunc
	return 0; // 0x5d0 Return
	
Label_1489:
	var_583_int = 36770; // 0x5d1 PushI
	var_584_bool = var_31_bool == var_583_int; // 0x5d2 Eq
	if(var_584_bool == 0) goto Label_1507; // 0x5d3 JumpB
	var_585_string = ""; // 0x5d4 PushV
	var_585_string = "Modesty"; // 0x5d5 MovS
	func_769(var_32_cvector, var_585_string); // 0x5d6 NEW_2
	var_586_int = 535114; // 0x5d8 PushI
	SetMessage(var_586_int); // 0x5d9 TObjFunc
	ClearReplies(); // 0x5db TObjFunc
	var_587_int = 535115; // 0x5dd PushI
	var_588_int = 36772; // 0x5de PushI
	var_589_int = 36771; // 0x5df PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x5e0 TObjFunc
	return 0; // 0x5e2 Return
	
Label_1507:
	var_590_int = 36772; // 0x5e3 PushI
	var_591_bool = var_31_bool == var_590_int; // 0x5e4 Eq
	if(var_591_bool == 0) goto Label_1530; // 0x5e5 JumpB
	var_592_string = ""; // 0x5e6 PushV
	var_592_string = "Modesty"; // 0x5e7 MovS
	func_769(var_32_cvector, var_592_string); // 0x5e8 NEW_2
	var_593_int = 535116; // 0x5ea PushI
	SetMessage(var_593_int); // 0x5eb TObjFunc
	ClearReplies(); // 0x5ed TObjFunc
	var_594_int = 535117; // 0x5ef PushI
	var_595_int = -1; // 0x5f0 PushI
	var_596_int = 36773; // 0x5f1 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x5f2 TObjFunc
	var_597_int = 535121; // 0x5f4 PushI
	var_598_int = -1; // 0x5f5 PushI
	var_599_int = 36777; // 0x5f6 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x5f7 TObjFunc
	return 0; // 0x5f9 Return
	
Label_1530:
	var_600_int = 36805; // 0x5fa PushI
	var_601_bool = var_31_bool == var_600_int; // 0x5fb Eq
	if(var_601_bool == 0) goto Label_1548; // 0x5fc JumpB
	var_602_string = ""; // 0x5fd PushV
	var_602_string = "Love"; // 0x5fe MovS
	func_769(var_32_cvector, var_602_string); // 0x5ff NEW_2
	var_603_int = 535144; // 0x601 PushI
	SetMessage(var_603_int); // 0x602 TObjFunc
	ClearReplies(); // 0x604 TObjFunc
	var_604_int = 535145; // 0x606 PushI
	var_605_int = 36807; // 0x607 PushI
	var_606_int = 36806; // 0x608 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x609 TObjFunc
	return 0; // 0x60b Return
	
Label_1548:
	var_607_int = 36807; // 0x60c PushI
	var_608_bool = var_31_bool == var_607_int; // 0x60d Eq
	if(var_608_bool == 0) goto Label_1571; // 0x60e JumpB
	var_609_string = ""; // 0x60f PushV
	var_609_string = "Love"; // 0x610 MovS
	func_769(var_32_cvector, var_609_string); // 0x611 NEW_2
	var_610_int = 535146; // 0x613 PushI
	SetMessage(var_610_int); // 0x614 TObjFunc
	ClearReplies(); // 0x616 TObjFunc
	var_611_int = 535147; // 0x618 PushI
	var_612_int = 36809; // 0x619 PushI
	var_613_int = 36808; // 0x61a PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x61b TObjFunc
	var_614_int = 535152; // 0x61d PushI
	var_615_int = 36814; // 0x61e PushI
	var_616_int = 36813; // 0x61f PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x620 TObjFunc
	return 0; // 0x622 Return
	
Label_1571:
	var_617_int = 36814; // 0x623 PushI
	var_618_bool = var_31_bool == var_617_int; // 0x624 Eq
	if(var_618_bool == 0) goto Label_1594; // 0x625 JumpB
	var_619_string = ""; // 0x626 PushV
	var_619_string = "Sexy"; // 0x627 MovS
	func_769(var_32_cvector, var_619_string); // 0x628 NEW_2
	var_620_int = 535153; // 0x62a PushI
	SetMessage(var_620_int); // 0x62b TObjFunc
	ClearReplies(); // 0x62d TObjFunc
	var_621_int = 535154; // 0x62f PushI
	var_622_int = 36816; // 0x630 PushI
	var_623_int = 36815; // 0x631 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x632 TObjFunc
	var_624_int = 535156; // 0x634 PushI
	var_625_int = 36816; // 0x635 PushI
	var_626_int = 36817; // 0x636 PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x637 TObjFunc
	return 0; // 0x639 Return
	
Label_1594:
	var_627_int = 36816; // 0x63a PushI
	var_628_bool = var_31_bool == var_627_int; // 0x63b Eq
	if(var_628_bool == 0) goto Label_1612; // 0x63c JumpB
	var_629_string = ""; // 0x63d PushV
	var_629_string = "Sexy"; // 0x63e MovS
	func_769(var_32_cvector, var_629_string); // 0x63f NEW_2
	var_630_int = 535155; // 0x641 PushI
	SetMessage(var_630_int); // 0x642 TObjFunc
	ClearReplies(); // 0x644 TObjFunc
	var_631_int = 535157; // 0x646 PushI
	var_632_int = 36811; // 0x647 PushI
	var_633_int = 36819; // 0x648 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x649 TObjFunc
	return 0; // 0x64b Return
	
Label_1612:
	var_634_int = 36809; // 0x64c PushI
	var_635_bool = var_31_bool == var_634_int; // 0x64d Eq
	if(var_635_bool == 0) goto Label_1630; // 0x64e JumpB
	var_636_string = ""; // 0x64f PushV
	var_636_string = "Neutral"; // 0x650 MovS
	func_769(var_32_cvector, var_636_string); // 0x651 NEW_2
	var_637_int = 535148; // 0x653 PushI
	SetMessage(var_637_int); // 0x654 TObjFunc
	ClearReplies(); // 0x656 TObjFunc
	var_638_int = 535149; // 0x658 PushI
	var_639_int = 36811; // 0x659 PushI
	var_640_int = 36810; // 0x65a PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x65b TObjFunc
	return 0; // 0x65d Return
	
Label_1630:
	var_641_int = 36811; // 0x65e PushI
	var_642_bool = var_31_bool == var_641_int; // 0x65f Eq
	if(var_642_bool == 0) goto Label_1653; // 0x660 JumpB
	var_643_string = ""; // 0x661 PushV
	var_643_string = "Neutral"; // 0x662 MovS
	func_769(var_32_cvector, var_643_string); // 0x663 NEW_2
	var_644_int = 535150; // 0x665 PushI
	SetMessage(var_644_int); // 0x666 TObjFunc
	ClearReplies(); // 0x668 TObjFunc
	var_645_int = 535151; // 0x66a PushI
	var_646_int = 36821; // 0x66b PushI
	var_647_int = 36812; // 0x66c PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x66d TObjFunc
	var_648_int = 535166; // 0x66f PushI
	var_649_int = 36831; // 0x670 PushI
	var_650_int = 36830; // 0x671 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x672 TObjFunc
	return 0; // 0x674 Return
	
Label_1653:
	var_651_int = 36831; // 0x675 PushI
	var_652_bool = var_31_bool == var_651_int; // 0x676 Eq
	if(var_652_bool == 0) goto Label_1667; // 0x677 JumpB
	var_653_int = 535167; // 0x678 PushI
	SetMessage(var_653_int); // 0x679 TObjFunc
	ClearReplies(); // 0x67b TObjFunc
	var_654_int = 535168; // 0x67d PushI
	var_655_int = 36823; // 0x67e PushI
	var_656_int = 36832; // 0x67f PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x680 TObjFunc
	return 0; // 0x682 Return
	
Label_1667:
	var_657_int = 36821; // 0x683 PushI
	var_658_bool = var_31_bool == var_657_int; // 0x684 Eq
	if(var_658_bool == 0) goto Label_1690; // 0x685 JumpB
	var_659_string = ""; // 0x686 PushV
	var_659_string = "Modesty"; // 0x687 MovS
	func_769(var_32_cvector, var_659_string); // 0x688 NEW_2
	var_660_int = 535158; // 0x68a PushI
	SetMessage(var_660_int); // 0x68b TObjFunc
	ClearReplies(); // 0x68d TObjFunc
	var_661_int = 535159; // 0x68f PushI
	var_662_int = 36823; // 0x690 PushI
	var_663_int = 36822; // 0x691 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x692 TObjFunc
	var_664_int = 535165; // 0x694 PushI
	var_665_int = -1; // 0x695 PushI
	var_666_int = 36828; // 0x696 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x697 TObjFunc
	return 0; // 0x699 Return
	
Label_1690:
	var_667_int = 36823; // 0x69a PushI
	var_668_bool = var_31_bool == var_667_int; // 0x69b Eq
	if(var_668_bool == 0) goto Label_1708; // 0x69c JumpB
	var_669_string = ""; // 0x69d PushV
	var_669_string = "Modesty"; // 0x69e MovS
	func_769(var_32_cvector, var_669_string); // 0x69f NEW_2
	var_670_int = 535160; // 0x6a1 PushI
	SetMessage(var_670_int); // 0x6a2 TObjFunc
	ClearReplies(); // 0x6a4 TObjFunc
	var_671_int = 535161; // 0x6a6 PushI
	var_672_int = 36825; // 0x6a7 PushI
	var_673_int = 36824; // 0x6a8 PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0x6a9 TObjFunc
	return 0; // 0x6ab Return
	
Label_1708:
	var_674_int = 36825; // 0x6ac PushI
	var_675_bool = var_31_bool == var_674_int; // 0x6ad Eq
	if(var_675_bool == 0) goto Label_1731; // 0x6ae JumpB
	var_676_string = ""; // 0x6af PushV
	var_676_string = "Modesty"; // 0x6b0 MovS
	func_769(var_32_cvector, var_676_string); // 0x6b1 NEW_2
	var_677_int = 535162; // 0x6b3 PushI
	SetMessage(var_677_int); // 0x6b4 TObjFunc
	ClearReplies(); // 0x6b6 TObjFunc
	var_678_int = 535163; // 0x6b8 PushI
	var_679_int = -1; // 0x6b9 PushI
	var_680_int = 36826; // 0x6ba PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x6bb TObjFunc
	var_681_int = 535164; // 0x6bd PushI
	var_682_int = -1; // 0x6be PushI
	var_683_int = 36827; // 0x6bf PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x6c0 TObjFunc
	return 0; // 0x6c2 Return
	
Label_1731:
	var_684_int = 35129; // 0x6c3 PushI
	var_685_bool = var_31_bool == var_684_int; // 0x6c4 Eq
	if(var_685_bool == 0) goto Label_1749; // 0x6c5 JumpB
	var_686_string = ""; // 0x6c6 PushV
	var_686_string = "Neutral"; // 0x6c7 MovS
	func_769(var_32_cvector, var_686_string); // 0x6c8 NEW_2
	var_687_int = 533609; // 0x6ca PushI
	SetMessage(var_687_int); // 0x6cb TObjFunc
	ClearReplies(); // 0x6cd TObjFunc
	var_688_int = 533610; // 0x6cf PushI
	var_689_int = 35125; // 0x6d0 PushI
	var_690_int = 35130; // 0x6d1 PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x6d2 TObjFunc
	return 0; // 0x6d4 Return
	
Label_1749:
	var_691_int = 35125; // 0x6d5 PushI
	var_692_bool = var_31_bool == var_691_int; // 0x6d6 Eq
	if(var_692_bool == 0) goto Label_1772; // 0x6d7 JumpB
	var_693_string = ""; // 0x6d8 PushV
	var_693_string = "Neutral"; // 0x6d9 MovS
	func_769(var_32_cvector, var_693_string); // 0x6da NEW_2
	var_694_int = 533605; // 0x6dc PushI
	SetMessage(var_694_int); // 0x6dd TObjFunc
	ClearReplies(); // 0x6df TObjFunc
	var_695_int = 533606; // 0x6e1 PushI
	var_696_int = 35127; // 0x6e2 PushI
	var_697_int = 35126; // 0x6e3 PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x6e4 TObjFunc
	var_698_int = 533611; // 0x6e6 PushI
	var_699_int = 35133; // 0x6e7 PushI
	var_700_int = 35132; // 0x6e8 PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x6e9 TObjFunc
	return 0; // 0x6eb Return
	
Label_1772:
	var_701_int = 35133; // 0x6ec PushI
	var_702_bool = var_31_bool == var_701_int; // 0x6ed Eq
	if(var_702_bool == 0) goto Label_1790; // 0x6ee JumpB
	var_703_string = ""; // 0x6ef PushV
	var_703_string = "Modesty"; // 0x6f0 MovS
	func_769(var_32_cvector, var_703_string); // 0x6f1 NEW_2
	var_704_int = 533612; // 0x6f3 PushI
	SetMessage(var_704_int); // 0x6f4 TObjFunc
	ClearReplies(); // 0x6f6 TObjFunc
	var_705_int = 533613; // 0x6f8 PushI
	var_706_int = 35127; // 0x6f9 PushI
	var_707_int = 35134; // 0x6fa PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x6fb TObjFunc
	return 0; // 0x6fd Return
	
Label_1790:
	var_708_int = 35127; // 0x6fe PushI
	var_709_bool = var_31_bool == var_708_int; // 0x6ff Eq
	if(var_709_bool == 0) goto Label_1808; // 0x700 JumpB
	var_710_string = ""; // 0x701 PushV
	var_710_string = "Modesty"; // 0x702 MovS
	func_769(var_32_cvector, var_710_string); // 0x703 NEW_2
	var_711_int = 533607; // 0x705 PushI
	SetMessage(var_711_int); // 0x706 TObjFunc
	ClearReplies(); // 0x708 TObjFunc
	var_712_int = 532344; // 0x70a PushI
	var_713_int = 33774; // 0x70b PushI
	var_714_int = 33773; // 0x70c PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0x70d TObjFunc
	return 0; // 0x70f Return
	
Label_1808:
	var_715_int = 33774; // 0x710 PushI
	var_716_bool = var_31_bool == var_715_int; // 0x711 Eq
	if(var_716_bool == 0) goto Label_1831; // 0x712 JumpB
	var_717_string = ""; // 0x713 PushV
	var_717_string = "Modesty"; // 0x714 MovS
	func_769(var_32_cvector, var_717_string); // 0x715 NEW_2
	var_718_int = 532345; // 0x717 PushI
	SetMessage(var_718_int); // 0x718 TObjFunc
	ClearReplies(); // 0x71a TObjFunc
	var_719_int = 532346; // 0x71c PushI
	var_720_int = -1; // 0x71d PushI
	var_721_int = 33775; // 0x71e PushI
	AddReply(var_719_int, var_720_int, var_721_int); // 0x71f TObjFunc
	var_722_int = 532347; // 0x721 PushI
	var_723_int = 33777; // 0x722 PushI
	var_724_int = 33776; // 0x723 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x724 TObjFunc
	return 0; // 0x726 Return
	
Label_1831:
	var_725_int = 33777; // 0x727 PushI
	var_726_bool = var_31_bool == var_725_int; // 0x728 Eq
	if(var_726_bool == 0) goto Label_1854; // 0x729 JumpB
	var_727_string = ""; // 0x72a PushV
	var_727_string = "Fear"; // 0x72b MovS
	func_769(var_32_cvector, var_727_string); // 0x72c NEW_2
	var_728_int = 532348; // 0x72e PushI
	SetMessage(var_728_int); // 0x72f TObjFunc
	ClearReplies(); // 0x731 TObjFunc
	var_729_int = 532349; // 0x733 PushI
	var_730_int = -1; // 0x734 PushI
	var_731_int = 33778; // 0x735 PushI
	AddReply(var_729_int, var_730_int, var_731_int); // 0x736 TObjFunc
	var_732_int = 532350; // 0x738 PushI
	var_733_int = -1; // 0x739 PushI
	var_734_int = 33779; // 0x73a PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x73b TObjFunc
	return 0; // 0x73d Return
	
Label_1854:
	var_735_int = 22246; // 0x73e PushI
	var_736_bool = var_31_bool == var_735_int; // 0x73f Eq
	if(var_736_bool == 0) goto Label_1877; // 0x740 JumpB
	var_737_string = ""; // 0x741 PushV
	var_737_string = "Fear"; // 0x742 MovS
	func_769(var_32_cvector, var_737_string); // 0x743 NEW_2
	var_738_int = 521055; // 0x745 PushI
	SetMessage(var_738_int); // 0x746 TObjFunc
	ClearReplies(); // 0x748 TObjFunc
	var_739_int = 521056; // 0x74a PushI
	var_740_int = 22248; // 0x74b PushI
	var_741_int = 22247; // 0x74c PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x74d TObjFunc
	var_742_int = 521060; // 0x74f PushI
	var_743_int = 22253; // 0x750 PushI
	var_744_int = 22251; // 0x751 PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x752 TObjFunc
	return 0; // 0x754 Return
	
Label_1877:
	var_745_int = 22253; // 0x755 PushI
	var_746_bool = var_31_bool == var_745_int; // 0x756 Eq
	if(var_746_bool == 0) goto Label_1895; // 0x757 JumpB
	var_747_string = ""; // 0x758 PushV
	var_747_string = "Love"; // 0x759 MovS
	func_769(var_32_cvector, var_747_string); // 0x75a NEW_2
	var_748_int = 521061; // 0x75c PushI
	SetMessage(var_748_int); // 0x75d TObjFunc
	ClearReplies(); // 0x75f TObjFunc
	var_749_int = 521062; // 0x761 PushI
	var_750_int = 4905; // 0x762 PushI
	var_751_int = 22254; // 0x763 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0x764 TObjFunc
	return 0; // 0x766 Return
	
Label_1895:
	var_752_int = 22248; // 0x767 PushI
	var_753_bool = var_31_bool == var_752_int; // 0x768 Eq
	if(var_753_bool == 0) goto Label_1918; // 0x769 JumpB
	var_754_string = ""; // 0x76a PushV
	var_754_string = "Love"; // 0x76b MovS
	func_769(var_32_cvector, var_754_string); // 0x76c NEW_2
	var_755_int = 521057; // 0x76e PushI
	SetMessage(var_755_int); // 0x76f TObjFunc
	ClearReplies(); // 0x771 TObjFunc
	var_756_int = 521058; // 0x773 PushI
	var_757_int = 4905; // 0x774 PushI
	var_758_int = 22249; // 0x775 PushI
	AddReply(var_756_int, var_757_int, var_758_int); // 0x776 TObjFunc
	var_759_int = 504517; // 0x778 PushI
	var_760_int = 4923; // 0x779 PushI
	var_761_int = 4922; // 0x77a PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0x77b TObjFunc
	return 0; // 0x77d Return
	
Label_1918:
	var_762_int = 4905; // 0x77e PushI
	var_763_bool = var_31_bool == var_762_int; // 0x77f Eq
	if(var_763_bool == 0) goto Label_1941; // 0x780 JumpB
	var_764_string = ""; // 0x781 PushV
	var_764_string = "Sexy"; // 0x782 MovS
	func_769(var_32_cvector, var_764_string); // 0x783 NEW_2
	var_765_int = 504502; // 0x785 PushI
	SetMessage(var_765_int); // 0x786 TObjFunc
	ClearReplies(); // 0x788 TObjFunc
	var_766_int = 504516; // 0x78a PushI
	var_767_int = 4907; // 0x78b PushI
	var_768_int = 4920; // 0x78c PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0x78d TObjFunc
	var_769_int = 504515; // 0x78f PushI
	var_770_int = 4923; // 0x790 PushI
	var_771_int = 4918; // 0x791 PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0x792 TObjFunc
	return 0; // 0x794 Return
	
Label_1941:
	var_772_int = 4923; // 0x795 PushI
	var_773_bool = var_31_bool == var_772_int; // 0x796 Eq
	if(var_773_bool == 0) goto Label_1964; // 0x797 JumpB
	var_774_string = ""; // 0x798 PushV
	var_774_string = "Sexy"; // 0x799 MovS
	func_769(var_32_cvector, var_774_string); // 0x79a NEW_2
	var_775_int = 504518; // 0x79c PushI
	SetMessage(var_775_int); // 0x79d TObjFunc
	ClearReplies(); // 0x79f TObjFunc
	var_776_int = 504519; // 0x7a1 PushI
	var_777_int = 4909; // 0x7a2 PushI
	var_778_int = 4924; // 0x7a3 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x7a4 TObjFunc
	var_779_int = 533368; // 0x7a6 PushI
	var_780_int = 4907; // 0x7a7 PushI
	var_781_int = 34866; // 0x7a8 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0x7a9 TObjFunc
	return 0; // 0x7ab Return
	
Label_1964:
	var_782_int = 4907; // 0x7ac PushI
	var_783_bool = var_31_bool == var_782_int; // 0x7ad Eq
	if(var_783_bool == 0) goto Label_1982; // 0x7ae JumpB
	var_784_string = ""; // 0x7af PushV
	var_784_string = "Sexy"; // 0x7b0 MovS
	func_769(var_32_cvector, var_784_string); // 0x7b1 NEW_2
	var_785_int = 504504; // 0x7b3 PushI
	SetMessage(var_785_int); // 0x7b4 TObjFunc
	ClearReplies(); // 0x7b6 TObjFunc
	var_786_int = 504505; // 0x7b8 PushI
	var_787_int = 4909; // 0x7b9 PushI
	var_788_int = 4908; // 0x7ba PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x7bb TObjFunc
	return 0; // 0x7bd Return
	
Label_1982:
	var_789_int = 4909; // 0x7be PushI
	var_790_bool = var_31_bool == var_789_int; // 0x7bf Eq
	if(var_790_bool == 0) goto Label_2005; // 0x7c0 JumpB
	var_791_string = ""; // 0x7c1 PushV
	var_791_string = "Modesty"; // 0x7c2 MovS
	func_769(var_32_cvector, var_791_string); // 0x7c3 NEW_2
	var_792_int = 504506; // 0x7c5 PushI
	SetMessage(var_792_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_793_int = 504507; // 0x7ca PushI
	var_794_int = 4911; // 0x7cb PushI
	var_795_int = 4910; // 0x7cc PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x7cd TObjFunc
	var_796_int = 504514; // 0x7cf PushI
	var_797_int = 4911; // 0x7d0 PushI
	var_798_int = 4917; // 0x7d1 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x7d2 TObjFunc
	return 0; // 0x7d4 Return
	
Label_2005:
	var_799_int = 4911; // 0x7d5 PushI
	var_800_bool = var_31_bool == var_799_int; // 0x7d6 Eq
	if(var_800_bool == 0) goto Label_2028; // 0x7d7 JumpB
	var_801_string = ""; // 0x7d8 PushV
	var_801_string = "Modesty"; // 0x7d9 MovS
	func_769(var_32_cvector, var_801_string); // 0x7da NEW_2
	var_802_int = 504508; // 0x7dc PushI
	SetMessage(var_802_int); // 0x7dd TObjFunc
	ClearReplies(); // 0x7df TObjFunc
	var_803_int = 504509; // 0x7e1 PushI
	var_804_int = 22257; // 0x7e2 PushI
	var_805_int = 4912; // 0x7e3 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0x7e4 TObjFunc
	var_806_int = 504513; // 0x7e6 PushI
	var_807_int = 22257; // 0x7e7 PushI
	var_808_int = 4916; // 0x7e8 PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0x7e9 TObjFunc
	return 0; // 0x7eb Return
	
Label_2028:
	var_809_int = 22257; // 0x7ec PushI
	var_810_bool = var_31_bool == var_809_int; // 0x7ed Eq
	if(var_810_bool == 0) goto Label_2051; // 0x7ee JumpB
	var_811_string = ""; // 0x7ef PushV
	var_811_string = "Sexy"; // 0x7f0 MovS
	func_769(var_32_cvector, var_811_string); // 0x7f1 NEW_2
	var_812_int = 521063; // 0x7f3 PushI
	SetMessage(var_812_int); // 0x7f4 TObjFunc
	ClearReplies(); // 0x7f6 TObjFunc
	var_813_int = 521064; // 0x7f8 PushI
	var_814_int = 22259; // 0x7f9 PushI
	var_815_int = 22258; // 0x7fa PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0x7fb TObjFunc
	var_816_int = 521069; // 0x7fd PushI
	var_817_int = 4913; // 0x7fe PushI
	var_818_int = 22264; // 0x7ff PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0x800 TObjFunc
	return 0; // 0x802 Return
	
Label_2051:
	var_819_int = 22259; // 0x803 PushI
	var_820_bool = var_31_bool == var_819_int; // 0x804 Eq
	if(var_820_bool == 0) goto Label_2069; // 0x805 JumpB
	var_821_string = ""; // 0x806 PushV
	var_821_string = "Sexy"; // 0x807 MovS
	func_769(var_32_cvector, var_821_string); // 0x808 NEW_2
	var_822_int = 521065; // 0x80a PushI
	SetMessage(var_822_int); // 0x80b TObjFunc
	ClearReplies(); // 0x80d TObjFunc
	var_823_int = 521066; // 0x80f PushI
	var_824_int = 22262; // 0x810 PushI
	var_825_int = 22260; // 0x811 PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x812 TObjFunc
	return 0; // 0x814 Return
	
Label_2069:
	var_826_int = 22262; // 0x815 PushI
	var_827_bool = var_31_bool == var_826_int; // 0x816 Eq
	if(var_827_bool == 0) goto Label_2087; // 0x817 JumpB
	var_828_string = ""; // 0x818 PushV
	var_828_string = "Sexy"; // 0x819 MovS
	func_769(var_32_cvector, var_828_string); // 0x81a NEW_2
	var_829_int = 521067; // 0x81c PushI
	SetMessage(var_829_int); // 0x81d TObjFunc
	ClearReplies(); // 0x81f TObjFunc
	var_830_int = 521068; // 0x821 PushI
	var_831_int = 4913; // 0x822 PushI
	var_832_int = 22263; // 0x823 PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0x824 TObjFunc
	return 0; // 0x826 Return
	
Label_2087:
	var_833_int = 4913; // 0x827 PushI
	var_834_bool = var_31_bool == var_833_int; // 0x828 Eq
	if(var_834_bool == 0) goto Label_2110; // 0x829 JumpB
	var_835_string = ""; // 0x82a PushV
	var_835_string = "Sexy"; // 0x82b MovS
	func_769(var_32_cvector, var_835_string); // 0x82c NEW_2
	var_836_int = 504510; // 0x82e PushI
	SetMessage(var_836_int); // 0x82f TObjFunc
	ClearReplies(); // 0x831 TObjFunc
	var_837_int = 504497; // 0x833 PushI
	var_838_int = -1; // 0x834 PushI
	var_839_int = 4900; // 0x835 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0x836 TObjFunc
	var_840_int = 504512; // 0x838 PushI
	var_841_int = -1; // 0x839 PushI
	var_842_int = 4915; // 0x83a PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0x83b TObjFunc
	return 0; // 0x83d Return
	
Label_2110:
	var_3_string = 1; // 0x83e TMovB
	var_843_bool = 0; // 0x83f PushV
	func_4858(var_843_bool); // 0x840 NEW_2
	if(var_843_bool == 0) goto Label_2118; // 0x842 JumpB
	lshStopAnimation(); // 0x843 Func
	goto Label_2120; // 0x845 Jump
	
Label_2120:
	return 0; // 0x848 Return
	
Label_2118:
	StopAnimation(); // 0x846 Func
	
Label_2122:
	return 0; // 0x84a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x94e PushI
	if(var_33_int == 0) goto Label_2997; // 0x94f JumpB
	func_4706(); // 0x951 NEW_2
	var_35_int = 8026; // 0x953 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x954 Eq
	if(var_36_bool == 0) goto Label_2400; // 0x955 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x956 PushV
	var_37_object = var_1_object; // 0x957 MovT
	var_38_object = var_0_object; // 0x958 MovT
	func_5049(); // 0x959 NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0x95b PushV
	var_96_object = var_1_object; // 0x95c MovT
	var_97_object = var_0_object; // 0x95d MovT
	func_5160(); // 0x95e NEW_2
	
Label_2400:
	var_122_int = 8027; // 0x960 PushI
	var_123_bool = var_32_cvector == var_122_int; // 0x961 Eq
	if(var_123_bool == 0) goto Label_2413; // 0x962 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x963 PushV
	var_124_object = var_1_object; // 0x964 MovT
	var_125_object = var_0_object; // 0x965 MovT
	func_5049(); // 0x966 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0x968 PushV
	var_126_object = var_1_object; // 0x969 MovT
	var_127_object = var_0_object; // 0x96a MovT
	func_5160(); // 0x96b NEW_2
	
Label_2413:
	var_128_int = 8037; // 0x96d PushI
	var_129_bool = var_32_cvector == var_128_int; // 0x96e Eq
	if(var_129_bool == 0) goto Label_2431; // 0x96f JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x970 PushV
	var_130_object = var_1_object; // 0x971 MovT
	var_131_object = var_0_object; // 0x972 MovT
	func_5031(); // 0x973 NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x975 PushV
	var_134_object = var_1_object; // 0x976 MovT
	var_135_object = var_0_object; // 0x977 MovT
	func_5176(); // 0x978 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x97a PushV
	var_144_object = var_1_object; // 0x97b MovT
	var_145_object = var_0_object; // 0x97c MovT
	func_5192(); // 0x97d NEW_2
	
Label_2431:
	var_151_int = 8033; // 0x97f PushI
	var_152_bool = var_32_cvector == var_151_int; // 0x980 Eq
	if(var_152_bool == 0) goto Label_2439; // 0x981 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x982 PushV
	var_153_object = var_1_object; // 0x983 MovT
	var_154_object = var_0_object; // 0x984 MovT
	func_5031(); // 0x985 NEW_2
	
Label_2439:
	var_155_int = 8042; // 0x987 PushI
	var_156_bool = var_32_cvector == var_155_int; // 0x988 Eq
	if(var_156_bool == 0) goto Label_2447; // 0x989 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x98a PushV
	var_157_object = var_1_object; // 0x98b MovT
	var_158_object = var_0_object; // 0x98c MovT
	func_5037(); // 0x98d NEW_2
	
Label_2447:
	var_161_int = 8045; // 0x98f PushI
	var_162_bool = var_32_cvector == var_161_int; // 0x990 Eq
	if(var_162_bool == 0) goto Label_2455; // 0x991 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x992 PushV
	var_163_object = var_1_object; // 0x993 MovT
	var_164_object = var_0_object; // 0x994 MovT
	func_5043(); // 0x995 NEW_2
	
Label_2455:
	var_167_int = 8046; // 0x997 PushI
	var_168_bool = var_32_cvector == var_167_int; // 0x998 Eq
	if(var_168_bool == 0) goto Label_2463; // 0x999 JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x99a PushV
	var_169_object = var_1_object; // 0x99b MovT
	var_170_object = var_0_object; // 0x99c MovT
	func_5043(); // 0x99d NEW_2
	
Label_2463:
	var_171_int = 12591; // 0x99f PushI
	var_172_bool = var_32_cvector == var_171_int; // 0x9a0 Eq
	if(var_172_bool == 0) goto Label_2476; // 0x9a1 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x9a2 PushV
	var_173_object = var_1_object; // 0x9a3 MovT
	var_174_object = var_0_object; // 0x9a4 MovT
	func_5049(); // 0x9a5 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x9a7 PushV
	var_175_object = var_1_object; // 0x9a8 MovT
	var_176_object = var_0_object; // 0x9a9 MovT
	func_5160(); // 0x9aa NEW_2
	
Label_2476:
	var_177_int = 7559; // 0x9ac PushI
	var_178_bool = var_31_bool == var_177_int; // 0x9ad Eq
	if(var_178_bool == 0) goto Label_2596; // 0x9ae JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x9af PushV
	var_180_object = var_1_object; // 0x9b0 MovT
	func_5400(var_180_object); // 0x9b1 NEW_2
	if(var_179_bool == 0) goto Label_2514; // 0x9b3 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x9b4 PushV
	var_187_object = var_1_object; // 0x9b5 MovT
	var_188_object = var_0_object; // 0x9b6 MovT
	func_5025(); // 0x9b7 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x9b9 PushV
	var_191_object = var_1_object; // 0x9ba MovT
	var_192_object = var_0_object; // 0x9bb MovT
	func_4973(); // 0x9bc NEW_2
	var_195_string = ""; // 0x9be PushV
	var_195_string = "Fear"; // 0x9bf MovS
	func_2359(var_32_cvector, var_195_string); // 0x9c0 NEW_2
	var_212_int = 506853; // 0x9c2 PushI
	SetMessage(var_212_int); // 0x9c3 TObjFunc
	ClearReplies(); // 0x9c5 TObjFunc
	var_213_int = 506854; // 0x9c7 PushI
	var_214_int = 7890; // 0x9c8 PushI
	var_215_int = 7560; // 0x9c9 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x9ca TObjFunc
	var_216_int = 507262; // 0x9cc PushI
	var_217_int = 7890; // 0x9cd PushI
	var_218_int = 8004; // 0x9ce PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x9cf TObjFunc
	return 0; // 0x9d1 Return
	
Label_2514:
	var_219_string = ""; // 0x9d2 PushV
	var_219_string = "Neutral"; // 0x9d3 MovS
	func_2359(var_32_cvector, var_219_string); // 0x9d4 NEW_2
	var_220_int = 506855; // 0x9d6 PushI
	SetMessage(var_220_int); // 0x9d7 TObjFunc
	ClearReplies(); // 0x9d9 TObjFunc
	var_221_bool = 0; // 0x9db PushV
	var_221_bool = 0; // 0x9dc MovB
	var_222_bool = 0; var_223_object = Obj(); // 0x9dd PushV
	var_223_object = var_1_object; // 0x9de MovT
	func_5412(var_223_object); // 0x9df NEW_2
	if(var_222_bool == 0) goto Label_2536; // 0x9e1 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x9e2 PushV
	var_229_object = var_1_object; // 0x9e3 MovT
	func_5460(var_229_object); // 0x9e4 NEW_2
	if(var_228_bool == 0) goto Label_2536; // 0x9e6 JumpB
	var_221_bool = 1; // 0x9e7 MovB
	
Label_2536:
	if(var_221_bool == 0) goto Label_2542; // 0x9e8 JumpB
	var_234_int = 506856; // 0x9e9 PushI
	var_235_int = 7563; // 0x9ea PushI
	var_236_int = 7562; // 0x9eb PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x9ec TObjFunc
	
Label_2542:
	var_237_bool = 0; // 0x9ee PushV
	var_237_bool = 0; // 0x9ef MovB
	var_238_bool = 0; var_239_object = Obj(); // 0x9f0 PushV
	var_239_object = var_1_object; // 0x9f1 MovT
	func_5424(var_239_object); // 0x9f2 NEW_2
	if(var_238_bool == 0) goto Label_2555; // 0x9f4 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x9f5 PushV
	var_245_object = var_1_object; // 0x9f6 MovT
	func_5472(var_245_object); // 0x9f7 NEW_2
	if(var_244_bool == 0) goto Label_2555; // 0x9f9 JumpB
	var_237_bool = 1; // 0x9fa MovB
	
Label_2555:
	if(var_237_bool == 0) goto Label_2561; // 0x9fb JumpB
	var_250_int = 506859; // 0x9fc PushI
	var_251_int = 7566; // 0x9fd PushI
	var_252_int = 7565; // 0x9fe PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x9ff TObjFunc
	
Label_2561:
	var_253_bool = 0; // 0xa01 PushV
	var_253_bool = 0; // 0xa02 MovB
	var_254_bool = 0; var_255_object = Obj(); // 0xa03 PushV
	var_255_object = var_1_object; // 0xa04 MovT
	func_5436(var_255_object); // 0xa05 NEW_2
	if(var_254_bool == 0) goto Label_2574; // 0xa07 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0xa08 PushV
	var_261_object = var_1_object; // 0xa09 MovT
	func_5448(var_261_object); // 0xa0a NEW_2
	if(var_260_bool == 0) goto Label_2574; // 0xa0c JumpB
	var_253_bool = 1; // 0xa0d MovB
	
Label_2574:
	if(var_253_bool == 0) goto Label_2580; // 0xa0e JumpB
	var_266_int = 506861; // 0xa0f PushI
	var_267_int = 7568; // 0xa10 PushI
	var_268_int = 7567; // 0xa11 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa12 TObjFunc
	
Label_2580:
	var_269_bool = 0; var_270_object = Obj(); // 0xa14 PushV
	var_270_object = var_1_object; // 0xa15 MovT
	func_5496(var_270_object); // 0xa16 NEW_2
	if(var_269_bool == 0) goto Label_2590; // 0xa18 JumpB
	var_275_int = 511392; // 0xa19 PushI
	var_276_int = 12590; // 0xa1a PushI
	var_277_int = 12589; // 0xa1b PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xa1c TObjFunc
	
Label_2590:
	var_278_int = 507528; // 0xa1e PushI
	var_279_int = -1; // 0xa1f PushI
	var_280_int = 8310; // 0xa20 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xa21 TObjFunc
	return 0; // 0xa23 Return
	
Label_2596:
	var_281_int = 12590; // 0xa24 PushI
	var_282_bool = var_31_bool == var_281_int; // 0xa25 Eq
	if(var_282_bool == 0) goto Label_2614; // 0xa26 JumpB
	var_283_string = ""; // 0xa27 PushV
	var_283_string = "Neutral"; // 0xa28 MovS
	func_2359(var_32_cvector, var_283_string); // 0xa29 NEW_2
	var_284_int = 511393; // 0xa2b PushI
	SetMessage(var_284_int); // 0xa2c TObjFunc
	ClearReplies(); // 0xa2e TObjFunc
	var_285_int = 511394; // 0xa30 PushI
	var_286_int = -1; // 0xa31 PushI
	var_287_int = 12591; // 0xa32 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xa33 TObjFunc
	return 0; // 0xa35 Return
	
Label_2614:
	var_288_int = 7568; // 0xa36 PushI
	var_289_bool = var_31_bool == var_288_int; // 0xa37 Eq
	if(var_289_bool == 0) goto Label_2632; // 0xa38 JumpB
	var_290_string = ""; // 0xa39 PushV
	var_290_string = "Neutral"; // 0xa3a MovS
	func_2359(var_32_cvector, var_290_string); // 0xa3b NEW_2
	var_291_int = 506862; // 0xa3d PushI
	SetMessage(var_291_int); // 0xa3e TObjFunc
	ClearReplies(); // 0xa40 TObjFunc
	var_292_int = 507296; // 0xa42 PushI
	var_293_int = 8044; // 0xa43 PushI
	var_294_int = 8043; // 0xa44 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xa45 TObjFunc
	return 0; // 0xa47 Return
	
Label_2632:
	var_295_int = 8044; // 0xa48 PushI
	var_296_bool = var_31_bool == var_295_int; // 0xa49 Eq
	if(var_296_bool == 0) goto Label_2655; // 0xa4a JumpB
	var_297_string = ""; // 0xa4b PushV
	var_297_string = "Neutral"; // 0xa4c MovS
	func_2359(var_32_cvector, var_297_string); // 0xa4d NEW_2
	var_298_int = 507297; // 0xa4f PushI
	SetMessage(var_298_int); // 0xa50 TObjFunc
	ClearReplies(); // 0xa52 TObjFunc
	var_299_int = 507298; // 0xa54 PushI
	var_300_int = -1; // 0xa55 PushI
	var_301_int = 8045; // 0xa56 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xa57 TObjFunc
	var_302_int = 507299; // 0xa59 PushI
	var_303_int = -1; // 0xa5a PushI
	var_304_int = 8046; // 0xa5b PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xa5c TObjFunc
	return 0; // 0xa5e Return
	
Label_2655:
	var_305_int = 7566; // 0xa5f PushI
	var_306_bool = var_31_bool == var_305_int; // 0xa60 Eq
	if(var_306_bool == 0) goto Label_2678; // 0xa61 JumpB
	var_307_object = Obj(); var_308_object = Obj(); // 0xa62 PushV
	var_307_object = var_1_object; // 0xa63 MovT
	var_308_object = var_0_object; // 0xa64 MovT
	func_5019(); // 0xa65 NEW_2
	var_311_string = ""; // 0xa67 PushV
	var_311_string = "Neutral"; // 0xa68 MovS
	func_2359(var_32_cvector, var_311_string); // 0xa69 NEW_2
	var_312_int = 506860; // 0xa6b PushI
	SetMessage(var_312_int); // 0xa6c TObjFunc
	ClearReplies(); // 0xa6e TObjFunc
	var_313_int = 507295; // 0xa70 PushI
	var_314_int = -1; // 0xa71 PushI
	var_315_int = 8042; // 0xa72 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xa73 TObjFunc
	return 0; // 0xa75 Return
	
Label_2678:
	var_316_int = 7563; // 0xa76 PushI
	var_317_bool = var_31_bool == var_316_int; // 0xa77 Eq
	if(var_317_bool == 0) goto Label_2701; // 0xa78 JumpB
	var_318_string = ""; // 0xa79 PushV
	var_318_string = "Modesty"; // 0xa7a MovS
	func_2359(var_32_cvector, var_318_string); // 0xa7b NEW_2
	var_319_int = 506857; // 0xa7d PushI
	SetMessage(var_319_int); // 0xa7e TObjFunc
	ClearReplies(); // 0xa80 TObjFunc
	var_320_int = 506858; // 0xa82 PushI
	var_321_int = 8034; // 0xa83 PushI
	var_322_int = 7564; // 0xa84 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xa85 TObjFunc
	var_323_int = 507287; // 0xa87 PushI
	var_324_int = -1; // 0xa88 PushI
	var_325_int = 8033; // 0xa89 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xa8a TObjFunc
	return 0; // 0xa8c Return
	
Label_2701:
	var_326_int = 8034; // 0xa8d PushI
	var_327_bool = var_31_bool == var_326_int; // 0xa8e Eq
	if(var_327_bool == 0) goto Label_2724; // 0xa8f JumpB
	var_328_string = ""; // 0xa90 PushV
	var_328_string = "Modesty"; // 0xa91 MovS
	func_2359(var_32_cvector, var_328_string); // 0xa92 NEW_2
	var_329_int = 507288; // 0xa94 PushI
	SetMessage(var_329_int); // 0xa95 TObjFunc
	ClearReplies(); // 0xa97 TObjFunc
	var_330_int = 507289; // 0xa99 PushI
	var_331_int = 8036; // 0xa9a PushI
	var_332_int = 8035; // 0xa9b PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xa9c TObjFunc
	var_333_int = 507292; // 0xa9e PushI
	var_334_int = 8039; // 0xa9f PushI
	var_335_int = 8038; // 0xaa0 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xaa1 TObjFunc
	return 0; // 0xaa3 Return
	
Label_2724:
	var_336_int = 8039; // 0xaa4 PushI
	var_337_bool = var_31_bool == var_336_int; // 0xaa5 Eq
	if(var_337_bool == 0) goto Label_2742; // 0xaa6 JumpB
	var_338_string = ""; // 0xaa7 PushV
	var_338_string = "Modesty"; // 0xaa8 MovS
	func_2359(var_32_cvector, var_338_string); // 0xaa9 NEW_2
	var_339_int = 507293; // 0xaab PushI
	SetMessage(var_339_int); // 0xaac TObjFunc
	ClearReplies(); // 0xaae TObjFunc
	var_340_int = 507294; // 0xab0 PushI
	var_341_int = 8036; // 0xab1 PushI
	var_342_int = 8040; // 0xab2 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xab3 TObjFunc
	return 0; // 0xab5 Return
	
Label_2742:
	var_343_int = 8036; // 0xab6 PushI
	var_344_bool = var_31_bool == var_343_int; // 0xab7 Eq
	if(var_344_bool == 0) goto Label_2760; // 0xab8 JumpB
	var_345_string = ""; // 0xab9 PushV
	var_345_string = "Modesty"; // 0xaba MovS
	func_2359(var_32_cvector, var_345_string); // 0xabb NEW_2
	var_346_int = 507290; // 0xabd PushI
	SetMessage(var_346_int); // 0xabe TObjFunc
	ClearReplies(); // 0xac0 TObjFunc
	var_347_int = 507291; // 0xac2 PushI
	var_348_int = -1; // 0xac3 PushI
	var_349_int = 8037; // 0xac4 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xac5 TObjFunc
	return 0; // 0xac7 Return
	
Label_2760:
	var_350_int = 7890; // 0xac8 PushI
	var_351_bool = var_31_bool == var_350_int; // 0xac9 Eq
	if(var_351_bool == 0) goto Label_2788; // 0xaca JumpB
	var_352_string = ""; // 0xacb PushV
	var_352_string = "Fear"; // 0xacc MovS
	func_2359(var_32_cvector, var_352_string); // 0xacd NEW_2
	var_353_int = 507162; // 0xacf PushI
	SetMessage(var_353_int); // 0xad0 TObjFunc
	ClearReplies(); // 0xad2 TObjFunc
	var_354_int = 507264; // 0xad4 PushI
	var_355_int = 8010; // 0xad5 PushI
	var_356_int = 8007; // 0xad6 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xad7 TObjFunc
	var_357_int = 507265; // 0xad9 PushI
	var_358_int = 8010; // 0xada PushI
	var_359_int = 8008; // 0xadb PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xadc TObjFunc
	var_360_int = 507266; // 0xade PushI
	var_361_int = -1; // 0xadf PushI
	var_362_int = 8009; // 0xae0 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xae1 TObjFunc
	return 0; // 0xae3 Return
	
Label_2788:
	var_363_int = 8010; // 0xae4 PushI
	var_364_bool = var_31_bool == var_363_int; // 0xae5 Eq
	if(var_364_bool == 0) goto Label_2811; // 0xae6 JumpB
	var_365_string = ""; // 0xae7 PushV
	var_365_string = "Fear"; // 0xae8 MovS
	func_2359(var_32_cvector, var_365_string); // 0xae9 NEW_2
	var_366_int = 507267; // 0xaeb PushI
	SetMessage(var_366_int); // 0xaec TObjFunc
	ClearReplies(); // 0xaee TObjFunc
	var_367_int = 507268; // 0xaf0 PushI
	var_368_int = 8015; // 0xaf1 PushI
	var_369_int = 8012; // 0xaf2 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xaf3 TObjFunc
	var_370_int = 507269; // 0xaf5 PushI
	var_371_int = 8014; // 0xaf6 PushI
	var_372_int = 8013; // 0xaf7 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0xaf8 TObjFunc
	return 0; // 0xafa Return
	
Label_2811:
	var_373_int = 8014; // 0xafb PushI
	var_374_bool = var_31_bool == var_373_int; // 0xafc Eq
	if(var_374_bool == 0) goto Label_2839; // 0xafd JumpB
	var_375_string = ""; // 0xafe PushV
	var_375_string = "Love"; // 0xaff MovS
	func_2359(var_32_cvector, var_375_string); // 0xb00 NEW_2
	var_376_int = 507270; // 0xb02 PushI
	SetMessage(var_376_int); // 0xb03 TObjFunc
	ClearReplies(); // 0xb05 TObjFunc
	var_377_int = 507272; // 0xb07 PushI
	var_378_int = 8019; // 0xb08 PushI
	var_379_int = 8016; // 0xb09 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xb0a TObjFunc
	var_380_int = 507273; // 0xb0c PushI
	var_381_int = 8015; // 0xb0d PushI
	var_382_int = 8017; // 0xb0e PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xb0f TObjFunc
	var_383_int = 507274; // 0xb11 PushI
	var_384_int = -1; // 0xb12 PushI
	var_385_int = 8018; // 0xb13 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xb14 TObjFunc
	return 0; // 0xb16 Return
	
Label_2839:
	var_386_int = 8019; // 0xb17 PushI
	var_387_bool = var_31_bool == var_386_int; // 0xb18 Eq
	if(var_387_bool == 0) goto Label_2857; // 0xb19 JumpB
	var_388_string = ""; // 0xb1a PushV
	var_388_string = "Sexy"; // 0xb1b MovS
	func_2359(var_32_cvector, var_388_string); // 0xb1c NEW_2
	var_389_int = 507275; // 0xb1e PushI
	SetMessage(var_389_int); // 0xb1f TObjFunc
	ClearReplies(); // 0xb21 TObjFunc
	var_390_int = 507276; // 0xb23 PushI
	var_391_int = 8015; // 0xb24 PushI
	var_392_int = 8020; // 0xb25 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xb26 TObjFunc
	return 0; // 0xb28 Return
	
Label_2857:
	var_393_int = 8015; // 0xb29 PushI
	var_394_bool = var_31_bool == var_393_int; // 0xb2a Eq
	if(var_394_bool == 0) goto Label_2880; // 0xb2b JumpB
	var_395_object = Obj(); var_396_object = Obj(); // 0xb2c PushV
	var_395_object = var_1_object; // 0xb2d MovT
	var_396_object = var_0_object; // 0xb2e MovT
	func_5120(); // 0xb2f NEW_2
	var_399_string = ""; // 0xb31 PushV
	var_399_string = "Neutral"; // 0xb32 MovS
	func_2359(var_32_cvector, var_399_string); // 0xb33 NEW_2
	var_400_int = 507271; // 0xb35 PushI
	SetMessage(var_400_int); // 0xb36 TObjFunc
	ClearReplies(); // 0xb38 TObjFunc
	var_401_int = 533818; // 0xb3a PushI
	var_402_int = 35366; // 0xb3b PushI
	var_403_int = 35365; // 0xb3c PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xb3d TObjFunc
	return 0; // 0xb3f Return
	
Label_2880:
	var_404_int = 35366; // 0xb40 PushI
	var_405_bool = var_31_bool == var_404_int; // 0xb41 Eq
	if(var_405_bool == 0) goto Label_2903; // 0xb42 JumpB
	var_406_string = ""; // 0xb43 PushV
	var_406_string = "Neutral"; // 0xb44 MovS
	func_2359(var_32_cvector, var_406_string); // 0xb45 NEW_2
	var_407_int = 533819; // 0xb47 PushI
	SetMessage(var_407_int); // 0xb48 TObjFunc
	ClearReplies(); // 0xb4a TObjFunc
	var_408_int = 507277; // 0xb4c PushI
	var_409_int = 8023; // 0xb4d PushI
	var_410_int = 8022; // 0xb4e PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xb4f TObjFunc
	var_411_int = 507284; // 0xb51 PushI
	var_412_int = 8030; // 0xb52 PushI
	var_413_int = 8029; // 0xb53 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xb54 TObjFunc
	return 0; // 0xb56 Return
	
Label_2903:
	var_414_int = 8030; // 0xb57 PushI
	var_415_bool = var_31_bool == var_414_int; // 0xb58 Eq
	if(var_415_bool == 0) goto Label_2921; // 0xb59 JumpB
	var_416_string = ""; // 0xb5a PushV
	var_416_string = "Love"; // 0xb5b MovS
	func_2359(var_32_cvector, var_416_string); // 0xb5c NEW_2
	var_417_int = 507285; // 0xb5e PushI
	SetMessage(var_417_int); // 0xb5f TObjFunc
	ClearReplies(); // 0xb61 TObjFunc
	var_418_int = 507286; // 0xb63 PushI
	var_419_int = 8025; // 0xb64 PushI
	var_420_int = 8031; // 0xb65 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xb66 TObjFunc
	return 0; // 0xb68 Return
	
Label_2921:
	var_421_int = 8023; // 0xb69 PushI
	var_422_bool = var_31_bool == var_421_int; // 0xb6a Eq
	if(var_422_bool == 0) goto Label_2939; // 0xb6b JumpB
	var_423_string = ""; // 0xb6c PushV
	var_423_string = "Love"; // 0xb6d MovS
	func_2359(var_32_cvector, var_423_string); // 0xb6e NEW_2
	var_424_int = 507278; // 0xb70 PushI
	SetMessage(var_424_int); // 0xb71 TObjFunc
	ClearReplies(); // 0xb73 TObjFunc
	var_425_int = 507279; // 0xb75 PushI
	var_426_int = 8025; // 0xb76 PushI
	var_427_int = 8024; // 0xb77 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xb78 TObjFunc
	return 0; // 0xb7a Return
	
Label_2939:
	var_428_int = 8025; // 0xb7b PushI
	var_429_bool = var_31_bool == var_428_int; // 0xb7c Eq
	if(var_429_bool == 0) goto Label_2957; // 0xb7d JumpB
	var_430_string = ""; // 0xb7e PushV
	var_430_string = "Love"; // 0xb7f MovS
	func_2359(var_32_cvector, var_430_string); // 0xb80 NEW_2
	var_431_int = 507280; // 0xb82 PushI
	SetMessage(var_431_int); // 0xb83 TObjFunc
	ClearReplies(); // 0xb85 TObjFunc
	var_432_int = 533820; // 0xb87 PushI
	var_433_int = 35368; // 0xb88 PushI
	var_434_int = 35367; // 0xb89 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xb8a TObjFunc
	return 0; // 0xb8c Return
	
Label_2957:
	var_435_int = 35368; // 0xb8d PushI
	var_436_bool = var_31_bool == var_435_int; // 0xb8e Eq
	if(var_436_bool == 0) goto Label_2985; // 0xb8f JumpB
	var_437_string = ""; // 0xb90 PushV
	var_437_string = "Love"; // 0xb91 MovS
	func_2359(var_32_cvector, var_437_string); // 0xb92 NEW_2
	var_438_int = 533821; // 0xb94 PushI
	SetMessage(var_438_int); // 0xb95 TObjFunc
	ClearReplies(); // 0xb97 TObjFunc
	var_439_int = 507281; // 0xb99 PushI
	var_440_int = -1; // 0xb9a PushI
	var_441_int = 8026; // 0xb9b PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xb9c TObjFunc
	var_442_int = 507282; // 0xb9e PushI
	var_443_int = -1; // 0xb9f PushI
	var_444_int = 8027; // 0xba0 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xba1 TObjFunc
	var_445_int = 507283; // 0xba3 PushI
	var_446_int = -1; // 0xba4 PushI
	var_447_int = 8028; // 0xba5 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xba6 TObjFunc
	return 0; // 0xba8 Return
	
Label_2985:
	var_3_string = 1; // 0xba9 TMovB
	var_448_bool = 0; // 0xbaa PushV
	func_4858(var_448_bool); // 0xbab NEW_2
	if(var_448_bool == 0) goto Label_2993; // 0xbad JumpB
	lshStopAnimation(); // 0xbae Func
	goto Label_2995; // 0xbb0 Jump
	
Label_2995:
	return 0; // 0xbb3 Return
	
Label_2993:
	StopAnimation(); // 0xbb1 Func
	
Label_2997:
	return 0; // 0xbb5 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xc5d PushI
	if(var_33_int == 0) goto Label_3338; // 0xc5e JumpB
	func_4706(); // 0xc60 NEW_2
	var_35_int = 10840; // 0xc62 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xc63 Eq
	if(var_36_bool == 0) goto Label_3178; // 0xc64 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xc65 PushV
	var_37_object = var_1_object; // 0xc66 MovT
	var_38_object = var_0_object; // 0xc67 MovT
	func_5208(); // 0xc68 NEW_2
	
Label_3178:
	var_41_int = 10839; // 0xc6a PushI
	var_42_bool = var_31_bool == var_41_int; // 0xc6b Eq
	if(var_42_bool == 0) goto Label_3206; // 0xc6c JumpB
	var_43_string = ""; // 0xc6d PushV
	var_43_string = "Neutral"; // 0xc6e MovS
	func_3142(var_32_cvector, var_43_string); // 0xc6f NEW_2
	var_60_int = 509840; // 0xc71 PushI
	SetMessage(var_60_int); // 0xc72 TObjFunc
	ClearReplies(); // 0xc74 TObjFunc
	var_61_bool = 0; var_62_object = Obj(); // 0xc76 PushV
	var_62_object = var_1_object; // 0xc77 MovT
	func_5580(var_62_object); // 0xc78 NEW_2
	if(var_61_bool == 0) goto Label_3200; // 0xc7a JumpB
	var_69_int = 509841; // 0xc7b PushI
	var_70_int = 10821; // 0xc7c PushI
	var_71_int = 10840; // 0xc7d PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xc7e TObjFunc
	
Label_3200:
	var_72_int = 511259; // 0xc80 PushI
	var_73_int = -1; // 0xc81 PushI
	var_74_int = 12449; // 0xc82 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xc83 TObjFunc
	return 0; // 0xc85 Return
	
Label_3206:
	var_75_int = 10821; // 0xc86 PushI
	var_76_bool = var_31_bool == var_75_int; // 0xc87 Eq
	if(var_76_bool == 0) goto Label_3234; // 0xc88 JumpB
	var_77_string = ""; // 0xc89 PushV
	var_77_string = "Sexy"; // 0xc8a MovS
	func_3142(var_32_cvector, var_77_string); // 0xc8b NEW_2
	var_78_int = 509824; // 0xc8d PushI
	SetMessage(var_78_int); // 0xc8e TObjFunc
	ClearReplies(); // 0xc90 TObjFunc
	var_79_int = 509825; // 0xc92 PushI
	var_80_int = 10823; // 0xc93 PushI
	var_81_int = 10822; // 0xc94 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xc95 TObjFunc
	var_82_int = 509829; // 0xc97 PushI
	var_83_int = 10828; // 0xc98 PushI
	var_84_int = 10827; // 0xc99 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xc9a TObjFunc
	var_85_int = 509836; // 0xc9c PushI
	var_86_int = 10835; // 0xc9d PushI
	var_87_int = 10834; // 0xc9e PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xc9f TObjFunc
	return 0; // 0xca1 Return
	
Label_3234:
	var_88_int = 10835; // 0xca2 PushI
	var_89_bool = var_31_bool == var_88_int; // 0xca3 Eq
	if(var_89_bool == 0) goto Label_3257; // 0xca4 JumpB
	var_90_string = ""; // 0xca5 PushV
	var_90_string = "Sexy"; // 0xca6 MovS
	func_3142(var_32_cvector, var_90_string); // 0xca7 NEW_2
	var_91_int = 509837; // 0xca9 PushI
	SetMessage(var_91_int); // 0xcaa TObjFunc
	ClearReplies(); // 0xcac TObjFunc
	var_92_int = 509839; // 0xcae PushI
	var_93_int = 10828; // 0xcaf PushI
	var_94_int = 10837; // 0xcb0 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xcb1 TObjFunc
	var_95_int = 509838; // 0xcb3 PushI
	var_96_int = -1; // 0xcb4 PushI
	var_97_int = 10836; // 0xcb5 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xcb6 TObjFunc
	return 0; // 0xcb8 Return
	
Label_3257:
	var_98_int = 10828; // 0xcb9 PushI
	var_99_bool = var_31_bool == var_98_int; // 0xcba Eq
	if(var_99_bool == 0) goto Label_3280; // 0xcbb JumpB
	var_100_string = ""; // 0xcbc PushV
	var_100_string = "Sexy"; // 0xcbd MovS
	func_3142(var_32_cvector, var_100_string); // 0xcbe NEW_2
	var_101_int = 509830; // 0xcc0 PushI
	SetMessage(var_101_int); // 0xcc1 TObjFunc
	ClearReplies(); // 0xcc3 TObjFunc
	var_102_int = 509831; // 0xcc5 PushI
	var_103_int = -1; // 0xcc6 PushI
	var_104_int = 10829; // 0xcc7 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xcc8 TObjFunc
	var_105_int = 509832; // 0xcca PushI
	var_106_int = 10831; // 0xccb PushI
	var_107_int = 10830; // 0xccc PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xccd TObjFunc
	return 0; // 0xccf Return
	
Label_3280:
	var_108_int = 10831; // 0xcd0 PushI
	var_109_bool = var_31_bool == var_108_int; // 0xcd1 Eq
	if(var_109_bool == 0) goto Label_3303; // 0xcd2 JumpB
	var_110_string = ""; // 0xcd3 PushV
	var_110_string = "Sexy"; // 0xcd4 MovS
	func_3142(var_32_cvector, var_110_string); // 0xcd5 NEW_2
	var_111_int = 509833; // 0xcd7 PushI
	SetMessage(var_111_int); // 0xcd8 TObjFunc
	ClearReplies(); // 0xcda TObjFunc
	var_112_int = 509834; // 0xcdc PushI
	var_113_int = -1; // 0xcdd PushI
	var_114_int = 10832; // 0xcde PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xcdf TObjFunc
	var_115_int = 509835; // 0xce1 PushI
	var_116_int = -1; // 0xce2 PushI
	var_117_int = 10833; // 0xce3 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xce4 TObjFunc
	return 0; // 0xce6 Return
	
Label_3303:
	var_118_int = 10823; // 0xce7 PushI
	var_119_bool = var_31_bool == var_118_int; // 0xce8 Eq
	if(var_119_bool == 0) goto Label_3326; // 0xce9 JumpB
	var_120_string = ""; // 0xcea PushV
	var_120_string = "Sexy"; // 0xceb MovS
	func_3142(var_32_cvector, var_120_string); // 0xcec NEW_2
	var_121_int = 509826; // 0xcee PushI
	SetMessage(var_121_int); // 0xcef TObjFunc
	ClearReplies(); // 0xcf1 TObjFunc
	var_122_int = 509827; // 0xcf3 PushI
	var_123_int = 10828; // 0xcf4 PushI
	var_124_int = 10824; // 0xcf5 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xcf6 TObjFunc
	var_125_int = 509828; // 0xcf8 PushI
	var_126_int = -1; // 0xcf9 PushI
	var_127_int = 10826; // 0xcfa PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xcfb TObjFunc
	return 0; // 0xcfd Return
	
Label_3326:
	var_3_string = 1; // 0xcfe TMovB
	var_128_bool = 0; // 0xcff PushV
	func_4858(var_128_bool); // 0xd00 NEW_2
	if(var_128_bool == 0) goto Label_3334; // 0xd02 JumpB
	lshStopAnimation(); // 0xd03 Func
	goto Label_3336; // 0xd05 Jump
	
Label_3336:
	return 0; // 0xd08 Return
	
Label_3334:
	StopAnimation(); // 0xd06 Func
	
Label_3338:
	return 0; // 0xd0a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xde9 PushI
	if(var_33_int == 0) goto Label_3943; // 0xdea JumpB
	func_4706(); // 0xdec NEW_2
	var_35_int = 12447; // 0xdee PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xdef Eq
	if(var_36_bool == 0) goto Label_3574; // 0xdf0 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xdf1 PushV
	var_37_object = var_1_object; // 0xdf2 MovT
	var_38_object = var_0_object; // 0xdf3 MovT
	func_5214(); // 0xdf4 NEW_2
	
Label_3574:
	var_41_int = 36784; // 0xdf6 PushI
	var_42_bool = var_32_cvector == var_41_int; // 0xdf7 Eq
	if(var_42_bool == 0) goto Label_3582; // 0xdf8 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0xdf9 PushV
	var_43_object = var_1_object; // 0xdfa MovT
	var_44_object = var_0_object; // 0xdfb MovT
	func_5013(); // 0xdfc NEW_2
	
Label_3582:
	var_47_int = 12445; // 0xdfe PushI
	var_48_bool = var_31_bool == var_47_int; // 0xdff Eq
	if(var_48_bool == 0) goto Label_3665; // 0xe00 JumpB
	var_49_string = ""; // 0xe01 PushV
	var_49_string = "Neutral"; // 0xe02 MovS
	func_3538(var_32_cvector, var_49_string); // 0xe03 NEW_2
	var_66_int = 511255; // 0xe05 PushI
	SetMessage(var_66_int); // 0xe06 TObjFunc
	ClearReplies(); // 0xe08 TObjFunc
	var_67_bool = 0; // 0xe0a PushV
	var_67_bool = 1; // 0xe0b MovB
	var_68_bool = 0; // 0xe0c PushV
	var_68_bool = 1; // 0xe0d MovB
	var_69_bool = 0; // 0xe0e PushV
	var_69_bool = 0; // 0xe0f MovB
	var_70_bool = 0; var_71_object = Obj(); // 0xe10 PushV
	var_71_object = var_1_object; // 0xe11 MovT
	func_5592(var_71_object); // 0xe12 NEW_2
	if(var_70_bool == 0) goto Label_3611; // 0xe14 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xe15 PushV
	var_79_object = var_1_object; // 0xe16 MovT
	func_5520(var_79_object); // 0xe17 NEW_2
	if(var_78_bool == 0) goto Label_3611; // 0xe19 JumpB
	var_69_bool = 1; // 0xe1a MovB
	
Label_3611:
	if(var_69_bool == 0) goto Label_3627; // 0xe1b JumpB
	var_84_bool = 0; // 0xe1c PushV
	var_84_bool = 0; // 0xe1d MovB
	var_85_bool = 0; var_86_object = Obj(); // 0xe1e PushV
	var_86_object = var_1_object; // 0xe1f MovT
	func_5544(var_86_object); // 0xe20 NEW_2
	if(var_85_bool == 0) goto Label_3625; // 0xe22 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xe23 PushV
	var_92_object = var_1_object; // 0xe24 MovT
	func_5592(var_92_object); // 0xe25 NEW_2
	if(var_91_bool == 0) goto Label_3625; // 0xe27 JumpB
	var_84_bool = 1; // 0xe28 MovB
	
Label_3625:
	if(var_84_bool == 0) goto Label_3627; // 0xe29 JumpB
	var_68_bool = 0; // 0xe2a MovB
	
Label_3627:
	if(var_68_bool == 0) goto Label_3643; // 0xe2b JumpB
	var_93_bool = 0; // 0xe2c PushV
	var_93_bool = 0; // 0xe2d MovB
	var_94_bool = 0; var_95_object = Obj(); // 0xe2e PushV
	var_95_object = var_1_object; // 0xe2f MovT
	func_5532(var_95_object); // 0xe30 NEW_2
	if(var_94_bool == 0) goto Label_3641; // 0xe32 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0xe33 PushV
	var_101_object = var_1_object; // 0xe34 MovT
	func_5592(var_101_object); // 0xe35 NEW_2
	if(var_100_bool == 0) goto Label_3641; // 0xe37 JumpB
	var_93_bool = 1; // 0xe38 MovB
	
Label_3641:
	if(var_93_bool == 0) goto Label_3643; // 0xe39 JumpB
	var_67_bool = 0; // 0xe3a MovB
	
Label_3643:
	if(var_67_bool == 0) goto Label_3649; // 0xe3b JumpB
	var_102_int = 511257; // 0xe3c PushI
	var_103_int = 12448; // 0xe3d PushI
	var_104_int = 12447; // 0xe3e PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xe3f TObjFunc
	
Label_3649:
	var_105_bool = 0; var_106_object = Obj(); // 0xe41 PushV
	var_106_object = var_1_object; // 0xe42 MovT
	func_5376(var_106_object); // 0xe43 NEW_2
	if(var_105_bool == 0) goto Label_3659; // 0xe45 JumpB
	var_111_int = 535125; // 0xe46 PushI
	var_112_int = 36785; // 0xe47 PushI
	var_113_int = 36784; // 0xe48 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xe49 TObjFunc
	
Label_3659:
	var_114_int = 511256; // 0xe4b PushI
	var_115_int = -1; // 0xe4c PushI
	var_116_int = 12446; // 0xe4d PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xe4e TObjFunc
	return 0; // 0xe50 Return
	
Label_3665:
	var_117_int = 36785; // 0xe51 PushI
	var_118_bool = var_31_bool == var_117_int; // 0xe52 Eq
	if(var_118_bool == 0) goto Label_3688; // 0xe53 JumpB
	var_119_string = ""; // 0xe54 PushV
	var_119_string = "Modesty"; // 0xe55 MovS
	func_3538(var_32_cvector, var_119_string); // 0xe56 NEW_2
	var_120_int = 535126; // 0xe58 PushI
	SetMessage(var_120_int); // 0xe59 TObjFunc
	ClearReplies(); // 0xe5b TObjFunc
	var_121_int = 535127; // 0xe5d PushI
	var_122_int = 36787; // 0xe5e PushI
	var_123_int = 36786; // 0xe5f PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xe60 TObjFunc
	var_124_int = 535134; // 0xe62 PushI
	var_125_int = 36787; // 0xe63 PushI
	var_126_int = 36793; // 0xe64 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xe65 TObjFunc
	return 0; // 0xe67 Return
	
Label_3688:
	var_127_int = 36787; // 0xe68 PushI
	var_128_bool = var_31_bool == var_127_int; // 0xe69 Eq
	if(var_128_bool == 0) goto Label_3711; // 0xe6a JumpB
	var_129_string = ""; // 0xe6b PushV
	var_129_string = "Modesty"; // 0xe6c MovS
	func_3538(var_32_cvector, var_129_string); // 0xe6d NEW_2
	var_130_int = 535128; // 0xe6f PushI
	SetMessage(var_130_int); // 0xe70 TObjFunc
	ClearReplies(); // 0xe72 TObjFunc
	var_131_int = 535129; // 0xe74 PushI
	var_132_int = 36789; // 0xe75 PushI
	var_133_int = 36788; // 0xe76 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xe77 TObjFunc
	var_134_int = 535137; // 0xe79 PushI
	var_135_int = 36798; // 0xe7a PushI
	var_136_int = 36797; // 0xe7b PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xe7c TObjFunc
	return 0; // 0xe7e Return
	
Label_3711:
	var_137_int = 36798; // 0xe7f PushI
	var_138_bool = var_31_bool == var_137_int; // 0xe80 Eq
	if(var_138_bool == 0) goto Label_3734; // 0xe81 JumpB
	var_139_string = ""; // 0xe82 PushV
	var_139_string = "Modesty"; // 0xe83 MovS
	func_3538(var_32_cvector, var_139_string); // 0xe84 NEW_2
	var_140_int = 535138; // 0xe86 PushI
	SetMessage(var_140_int); // 0xe87 TObjFunc
	ClearReplies(); // 0xe89 TObjFunc
	var_141_int = 535139; // 0xe8b PushI
	var_142_int = -1; // 0xe8c PushI
	var_143_int = 36799; // 0xe8d PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xe8e TObjFunc
	var_144_int = 535140; // 0xe90 PushI
	var_145_int = 36789; // 0xe91 PushI
	var_146_int = 36800; // 0xe92 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xe93 TObjFunc
	return 0; // 0xe95 Return
	
Label_3734:
	var_147_int = 36789; // 0xe96 PushI
	var_148_bool = var_31_bool == var_147_int; // 0xe97 Eq
	if(var_148_bool == 0) goto Label_3762; // 0xe98 JumpB
	var_149_string = ""; // 0xe99 PushV
	var_149_string = "Modesty"; // 0xe9a MovS
	func_3538(var_32_cvector, var_149_string); // 0xe9b NEW_2
	var_150_int = 535130; // 0xe9d PushI
	SetMessage(var_150_int); // 0xe9e TObjFunc
	ClearReplies(); // 0xea0 TObjFunc
	var_151_int = 535131; // 0xea2 PushI
	var_152_int = 36791; // 0xea3 PushI
	var_153_int = 36790; // 0xea4 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xea5 TObjFunc
	var_154_bool = 0; var_155_object = Obj(); // 0xea7 PushV
	var_155_object = var_1_object; // 0xea8 MovT
	func_5508(var_155_object); // 0xea9 NEW_2
	if(var_154_bool == 0) goto Label_3761; // 0xeab JumpB
	var_160_int = 535135; // 0xeac PushI
	var_161_int = -1; // 0xead PushI
	var_162_int = 36795; // 0xeae PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xeaf TObjFunc
	
Label_3761:
	return 0; // 0xeb1 Return
	
Label_3762:
	var_163_int = 36791; // 0xeb2 PushI
	var_164_bool = var_31_bool == var_163_int; // 0xeb3 Eq
	if(var_164_bool == 0) goto Label_3785; // 0xeb4 JumpB
	var_165_string = ""; // 0xeb5 PushV
	var_165_string = "Modesty"; // 0xeb6 MovS
	func_3538(var_32_cvector, var_165_string); // 0xeb7 NEW_2
	var_166_int = 535132; // 0xeb9 PushI
	SetMessage(var_166_int); // 0xeba TObjFunc
	ClearReplies(); // 0xebc TObjFunc
	var_167_int = 535133; // 0xebe PushI
	var_168_int = -1; // 0xebf PushI
	var_169_int = 36792; // 0xec0 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xec1 TObjFunc
	var_170_int = 535136; // 0xec3 PushI
	var_171_int = -1; // 0xec4 PushI
	var_172_int = 36796; // 0xec5 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xec6 TObjFunc
	return 0; // 0xec8 Return
	
Label_3785:
	var_173_int = 12448; // 0xec9 PushI
	var_174_bool = var_31_bool == var_173_int; // 0xeca Eq
	if(var_174_bool == 0) goto Label_3808; // 0xecb JumpB
	var_175_string = ""; // 0xecc PushV
	var_175_string = "Neutral"; // 0xecd MovS
	func_3538(var_32_cvector, var_175_string); // 0xece NEW_2
	var_176_int = 511258; // 0xed0 PushI
	SetMessage(var_176_int); // 0xed1 TObjFunc
	ClearReplies(); // 0xed3 TObjFunc
	var_177_int = 511267; // 0xed5 PushI
	var_178_int = 12458; // 0xed6 PushI
	var_179_int = 12457; // 0xed7 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xed8 TObjFunc
	var_180_int = 511260; // 0xeda PushI
	var_181_int = 12451; // 0xedb PushI
	var_182_int = 12450; // 0xedc PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xedd TObjFunc
	return 0; // 0xedf Return
	
Label_3808:
	var_183_int = 12451; // 0xee0 PushI
	var_184_bool = var_31_bool == var_183_int; // 0xee1 Eq
	if(var_184_bool == 0) goto Label_3826; // 0xee2 JumpB
	var_185_string = ""; // 0xee3 PushV
	var_185_string = "Love"; // 0xee4 MovS
	func_3538(var_32_cvector, var_185_string); // 0xee5 NEW_2
	var_186_int = 511261; // 0xee7 PushI
	SetMessage(var_186_int); // 0xee8 TObjFunc
	ClearReplies(); // 0xeea TObjFunc
	var_187_int = 511262; // 0xeec PushI
	var_188_int = 12453; // 0xeed PushI
	var_189_int = 12452; // 0xeee PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xeef TObjFunc
	return 0; // 0xef1 Return
	
Label_3826:
	var_190_int = 12453; // 0xef2 PushI
	var_191_bool = var_31_bool == var_190_int; // 0xef3 Eq
	if(var_191_bool == 0) goto Label_3844; // 0xef4 JumpB
	var_192_string = ""; // 0xef5 PushV
	var_192_string = "Love"; // 0xef6 MovS
	func_3538(var_32_cvector, var_192_string); // 0xef7 NEW_2
	var_193_int = 511263; // 0xef9 PushI
	SetMessage(var_193_int); // 0xefa TObjFunc
	ClearReplies(); // 0xefc TObjFunc
	var_194_int = 511264; // 0xefe PushI
	var_195_int = 12455; // 0xeff PushI
	var_196_int = 12454; // 0xf00 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xf01 TObjFunc
	return 0; // 0xf03 Return
	
Label_3844:
	var_197_int = 12455; // 0xf04 PushI
	var_198_bool = var_31_bool == var_197_int; // 0xf05 Eq
	if(var_198_bool == 0) goto Label_3862; // 0xf06 JumpB
	var_199_string = ""; // 0xf07 PushV
	var_199_string = "Love"; // 0xf08 MovS
	func_3538(var_32_cvector, var_199_string); // 0xf09 NEW_2
	var_200_int = 511265; // 0xf0b PushI
	SetMessage(var_200_int); // 0xf0c TObjFunc
	ClearReplies(); // 0xf0e TObjFunc
	var_201_int = 511266; // 0xf10 PushI
	var_202_int = 12458; // 0xf11 PushI
	var_203_int = 12456; // 0xf12 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xf13 TObjFunc
	return 0; // 0xf15 Return
	
Label_3862:
	var_204_int = 12458; // 0xf16 PushI
	var_205_bool = var_31_bool == var_204_int; // 0xf17 Eq
	if(var_205_bool == 0) goto Label_3885; // 0xf18 JumpB
	var_206_string = ""; // 0xf19 PushV
	var_206_string = "Neutral"; // 0xf1a MovS
	func_3538(var_32_cvector, var_206_string); // 0xf1b NEW_2
	var_207_int = 511268; // 0xf1d PushI
	SetMessage(var_207_int); // 0xf1e TObjFunc
	ClearReplies(); // 0xf20 TObjFunc
	var_208_int = 511269; // 0xf22 PushI
	var_209_int = 12463; // 0xf23 PushI
	var_210_int = 12459; // 0xf24 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xf25 TObjFunc
	var_211_int = 511270; // 0xf27 PushI
	var_212_int = 12461; // 0xf28 PushI
	var_213_int = 12460; // 0xf29 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xf2a TObjFunc
	return 0; // 0xf2c Return
	
Label_3885:
	var_214_int = 12461; // 0xf2d PushI
	var_215_bool = var_31_bool == var_214_int; // 0xf2e Eq
	if(var_215_bool == 0) goto Label_3908; // 0xf2f JumpB
	var_216_string = ""; // 0xf30 PushV
	var_216_string = "Love"; // 0xf31 MovS
	func_3538(var_32_cvector, var_216_string); // 0xf32 NEW_2
	var_217_int = 511271; // 0xf34 PushI
	SetMessage(var_217_int); // 0xf35 TObjFunc
	ClearReplies(); // 0xf37 TObjFunc
	var_218_int = 511273; // 0xf39 PushI
	var_219_int = 12463; // 0xf3a PushI
	var_220_int = 12464; // 0xf3b PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xf3c TObjFunc
	var_221_int = 511274; // 0xf3e PushI
	var_222_int = -1; // 0xf3f PushI
	var_223_int = 12465; // 0xf40 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_224_int = 12463; // 0xf44 PushI
	var_225_bool = var_31_bool == var_224_int; // 0xf45 Eq
	if(var_225_bool == 0) goto Label_3931; // 0xf46 JumpB
	var_226_string = ""; // 0xf47 PushV
	var_226_string = "Love"; // 0xf48 MovS
	func_3538(var_32_cvector, var_226_string); // 0xf49 NEW_2
	var_227_int = 511272; // 0xf4b PushI
	SetMessage(var_227_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_228_int = 511275; // 0xf50 PushI
	var_229_int = -1; // 0xf51 PushI
	var_230_int = 12467; // 0xf52 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xf53 TObjFunc
	var_231_int = 511276; // 0xf55 PushI
	var_232_int = -1; // 0xf56 PushI
	var_233_int = 12468; // 0xf57 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xf58 TObjFunc
	return 0; // 0xf5a Return
	
Label_3931:
	var_3_string = 1; // 0xf5b TMovB
	var_234_bool = 0; // 0xf5c PushV
	func_4858(var_234_bool); // 0xf5d NEW_2
	if(var_234_bool == 0) goto Label_3939; // 0xf5f JumpB
	lshStopAnimation(); // 0xf60 Func
	goto Label_3941; // 0xf62 Jump
	
Label_3941:
	return 0; // 0xf65 Return
	
Label_3939:
	StopAnimation(); // 0xf63 Func
	
Label_3943:
	return 0; // 0xf67 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x100a PushI
	if(var_33_int == 0) goto Label_4146; // 0x100b JumpB
	func_4706(); // 0x100d NEW_2
	var_35_int = 42557; // 0x100f PushI
	var_36_bool = var_31_int == var_35_int; // 0x1010 Eq
	if(var_36_bool == 0) goto Label_4134; // 0x1011 JumpB
	var_37_string = ""; // 0x1012 PushV
	var_37_string = "Neutral"; // 0x1013 MovS
	func_4083(var_32_cvector, var_37_string); // 0x1014 NEW_2
	var_54_int = 540548; // 0x1016 PushI
	SetMessage(var_54_int); // 0x1017 TObjFunc
	ClearReplies(); // 0x1019 TObjFunc
	var_55_int = 540549; // 0x101b PushI
	var_56_int = -1; // 0x101c PushI
	var_57_int = 42558; // 0x101d PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x101e TObjFunc
	var_58_int = 540797; // 0x1020 PushI
	var_59_int = -1; // 0x1021 PushI
	var_60_int = 42846; // 0x1022 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x1023 TObjFunc
	return 0; // 0x1025 Return
	
Label_4134:
	var_3_string = 1; // 0x1026 TMovB
	var_61_bool = 0; // 0x1027 PushV
	func_4858(var_61_bool); // 0x1028 NEW_2
	if(var_61_bool == 0) goto Label_4142; // 0x102a JumpB
	lshStopAnimation(); // 0x102b Func
	goto Label_4144; // 0x102d Jump
	
Label_4144:
	return 0; // 0x1030 Return
	
Label_4142:
	StopAnimation(); // 0x102e Func
	
Label_4146:
	return 0; // 0x1032 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x107d PushI
	var_33_bool = var_31_int == var_32_int; // 0x107e Eq
	if(var_33_bool == 0) goto Label_4257; // 0x107f JumpB
	func_4216(); // 0x1081 NEW_2
	var_35_bool = 0; // 0x1083 PushV
	var_35_bool = 0; // 0x1084 MovB
	var_36_bool = 0; // 0x1085 PushV
	func_4430(var_36_bool); // 0x1086 NEW_2
	if(var_36_bool == 0) goto Label_4238; // 0x1088 JumpB
	var_39_bool = 0; // 0x1089 PushV
	func_4185(var_39_bool); // 0x108a NEW_2
	if(var_39_bool == 0) goto Label_4238; // 0x108c JumpB
	var_35_bool = 1; // 0x108d MovB
	
Label_4238:
	if(var_35_bool == 0) goto Label_4251; // 0x108e JumpB
	var_56_bool = 0; // 0x108f PushV
	func_4165(var_56_bool); // 0x1090 NEW_2
	if(var_56_bool == 0) goto Label_4250; // 0x1092 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x1093 PushV
	var_77_object = Obj(); // 0x1094 PushV
	func_4713(var_77_object); // 0x1095 NEW_2
	var_76_object = var_77_object; // 0x1096 Mov
	func_4580(var_76_object); // 0x1098 NEW_2
	
Label_4250:
	goto Label_4257; // 0x109a Jump
	
Label_4257:
	return 0; // 0x10a1 Return
	
Label_4251:
	func_4180(var_31_int); // 0x109c NEW_2
	func_4207(); // 0x109f NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_4398(); // 0x10a3 NEW_2
	func_4216(); // 0x10a6 NEW_2
	lshStopSpeech(); // 0x10a8 Func
	lshStopAnimation(); // 0x10aa Func
	StopAsync(); // 0x10ac Func
	Hold(); // 0x10ae Func
	return 0; // 0x10b0 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x10b1 Func
	func_4216(); // 0x10b4 NEW_2
	var_32_string = ""; // 0x10b6 PushV
	var_32_string = "Neutral"; // 0x10b7 MovS
	func_4660(var_32_string); // 0x10b8 NEW_2
	func_4207(); // 0x10bb NEW_2
	return 0; // 0x10bd Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x10bf Push
	if(var_32_bool == 0) goto Label_4293; // 0x10c0 JumpB
	func_4207(); // 0x10c2 NEW_2
	goto Label_4297; // 0x10c4 Jump
	
Label_4297:
	return 0; // 0x10c9 Return
	
Label_4293:
	var_38_string = ""; // 0x10c5 PushV
	var_38_string = "Neutral"; // 0x10c6 MovS
	func_4660(var_38_string); // 0x10c7 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x10ca PushV
	IsOverrideActive(var_33_bool); // 0x10cb Func
	var_34_bool = var_33_bool == 0; // 0x10cd Not
	if(var_34_bool == 0) goto Label_4326; // 0x10ce JumpB
	EventDisable(0); // 0x10cf EventDisable
	func_4398(); // 0x10d1 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x10d3 PushV
	var_36_object = var_31_object; // 0x10d4 Mov
	func_4421(var_36_object); // 0x10d5 NEW_2
	EventEnable(0); // 0x10d7 EventEnable
	var_49_object = Obj(); // 0x10d8 PushV
	var_49_object = var_31_object; // 0x10d9 Mov
	func_5776(var_49_object); // 0x10da NEW_2
	var_873_string = ""; // 0x10dc PushV
	var_873_string = "Neutral"; // 0x10dd MovS
	func_4660(var_873_string); // 0x10de NEW_2
	func_4216(); // 0x10e1 NEW_2
	func_4207(); // 0x10e4 NEW_2
	
Label_4326:
	return 2; // 0x10e6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_4151(var_30_cvector); // 0x1034 NEW_2
	return 0; // 0x1036 Return
}


func_5120()
{
	var_397_string = "KnowStation"; // 0x1401 PushS
	var_398_int = 1; // 0x1402 PushI
	SetVariable(var_397_string, var_398_int); // 0x1403 Func
	return 0; // 0x1405 Return
}


func_0(var_0_object, var_736_int, var_737_object)
{
	var_739_object = Obj(); var_740_bool = 0; var_741_int = 0; var_742_bool = 0; var_743_object = Obj(); var_744_bool = 0; var_745_int = 0; var_746_bool = 0; // 0x0 PushV
	var_0_object = var_737_object; // 0x1 TMov
	var_747_bool = 0; var_748_object = Obj(); var_749_float = 0; // 0x2 PushV
	var_748_object = var_737_object; // 0x3 Mov
	var_749_float = 70.0; // 0x4 MovF
	func_4435(var_748_object, var_749_float); // 0x5 NEW_2
	var_750_bool = var_747_bool == 0; // 0x7 Not
	if(var_750_bool == 0) goto Label_11; // 0x8 JumpB
	var_736_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_743_object); // 0xb Func
	var_751_int = 0; // 0xd PushV
	func_4852(var_751_int); // 0xe NEW_2
	SetNPCName(var_751_int); // 0x10 ObjFunc
	var_752_int = 0; // 0x12 PushV
	func_4850(var_752_int); // 0x13 NEW_2
	SetNPCDescription(var_752_int); // 0x15 ObjFunc
	var_753_string = ""; // 0x17 PushV
	func_4854(var_753_string); // 0x18 NEW_2
	SetPhoto(var_753_string); // 0x1a ObjFunc
	var_754_string = ""; // 0x1c PushV
	func_4856(var_754_string); // 0x1d NEW_2
	SetPhoto2(var_754_string); // 0x1f ObjFunc
	var_755_int = 0; // 0x21 PushV
	func_5759(var_755_int); // 0x22 NEW_2
	SetPlayerName(var_755_int); // 0x24 ObjFunc
	var_745_int = -1; // 0x26 MovI
	IsOverrideActive(var_744_bool); // 0x27 Func
	var_756_bool = var_744_bool; // 0x29 Push
	if(var_756_bool == 0) goto Label_45; // 0x2a JumpB
	var_736_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_743_object); // 0x2d Func
	var_757_bool = 0; var_758_object = Obj(); // 0x2f PushV
	var_759_object = Obj(); // 0x30 PushV
	func_4713(var_759_object); // 0x31 NEW_2
	var_758_object = var_759_object; // 0x32 Mov
	func_4522(var_757_bool, var_758_object); // 0x34 NEW_2
	var_760_object = Obj(); var_761_object = Obj(); // 0x36 PushV
	var_760_object = var_737_object; // 0x37 Mov
	var_761_object = var_743_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_762_object, var_763_object, var_764_string, var_765_bool, var_760_object, var_761_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_746_bool); // 0x3d ObjFunc
	
Label_63:
	var_815_bool = var_746_bool == 0; // 0x3f Not
	if(var_815_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_746_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_816_object = Obj(); // 0x46 PushV
	var_816_object = var_737_object; // 0x47 Mov
	func_4504(); // 0x48 NEW_2
	StopDialog(var_743_object); // 0x4a Func
	GetReturnValue(var_745_int); // 0x4c ObjFunc
	var_736_int = var_745_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_5126()
{
	var_166_object = Obj(); var_167_string = ""; var_168_float = 0; // 0x1407 PushV
	var_169_object = Obj(); // 0x1408 PushV
	func_5709(var_169_object); // 0x1409 NEW_2
	var_166_object = var_169_object; // 0x140a Mov
	var_167_string = "pt_map_ospina"; // 0x140c MovS
	var_168_float = 2; // 0x140d MovI
	func_5726(var_166_object, var_167_string, var_168_float); // 0x140e NEW_2
	var_170_object = Obj(); // 0x1410 PushV
	func_5709(var_170_object); // 0x1411 NEW_2
	ShowMap(var_170_object); // 0x1413 ObjFunc
	return 0; // 0x1415 Return
}


func_3079(var_0_object, var_1_object, var_2_object, var_3_string, var_596_object, var_597_object)
{
	var_0_object = var_597_object; // 0xc08 TMov
	var_1_object = var_596_object; // 0xc09 TMov
	var_3_string = 0; // 0xc0a TMovB
	var_602_int = 1; // 0xc0b PushI
	if(var_602_int == 0) goto Label_3112; // 0xc0c JumpB
	var_603_string = ""; // 0xc0d PushV
	var_603_string = "Neutral"; // 0xc0e MovS
	func_3142(var_597_object, var_603_string); // 0xc0f NEW_2
	var_611_int = 509840; // 0xc11 PushI
	SetMessage(var_611_int); // 0xc12 TObjFunc
	ClearReplies(); // 0xc14 TObjFunc
	var_612_bool = 0; var_613_object = Obj(); // 0xc16 PushV
	var_613_object = var_1_object; // 0xc17 MovT
	func_5580(var_613_object); // 0xc18 NEW_2
	if(var_612_bool == 0) goto Label_3104; // 0xc1a JumpB
	var_618_int = 509841; // 0xc1b PushI
	var_619_int = 10821; // 0xc1c PushI
	var_620_int = 10840; // 0xc1d PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0xc1e TObjFunc
	
Label_3104:
	var_621_int = 511259; // 0xc20 PushI
	var_622_int = -1; // 0xc21 PushI
	var_623_int = 12449; // 0xc22 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0xc23 TObjFunc
	goto Label_3112; // 0xc25 Jump
	
Label_3112:
	var_624_bool = 0; // 0xc28 PushV
	func_4858(var_624_bool); // 0xc29 NEW_2
	if(var_624_bool == 0) goto Label_3127; // 0xc2b JumpB
	
Label_3116:
	lshWaitForAnimEnd(); // 0xc2c Func
	var_625_string = var_3_string; // 0xc2e PushT
	if(var_625_string == 0) goto Label_3121; // 0xc2f JumpB
	goto Label_3126; // 0xc30 Jump
	
Label_3126:
	goto Label_3141; // 0xc36 Jump
	
Label_3141:
	return 0; // 0xc45 Return
	
Label_3121:
	var_626_string = ""; // 0xc31 PushV
	var_626_string = var_2_object; // 0xc32 MovT
	func_4660(var_626_string); // 0xc33 NEW_2
	goto Label_3116; // 0xc35 Jump
	
Label_3127:
	var_627_string = "all"; // 0xc37 PushS
	var_628_string = "idle"; // 0xc38 PushS
	PlayAnimation(var_627_string, var_628_string); // 0xc39 Func
	
Label_3131:
	WaitForAnimEnd(); // 0xc3b Func
	var_629_string = var_3_string; // 0xc3d PushT
	if(var_629_string == 0) goto Label_3136; // 0xc3e JumpB
	goto Label_3141; // 0xc3f Jump
	
Label_3136:
	var_630_string = "all"; // 0xc40 PushS
	var_631_string = "idle"; // 0xc41 PushS
	PlayAnimation(var_630_string, var_631_string); // 0xc42 Func
	goto Label_3131; // 0xc44 Jump
}


func_4617(var_172_bool)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; // 0x1209 PushV
	var_184_string = "d"; // 0x120a PushS
	var_185_int = 0; // 0x120b PushV
	func_4811(var_185_int); // 0x120c NEW_2
	var_186_int = var_184_string + var_185_int; // 0x120e Add
	var_187_string = "m"; // 0x120f PushS
	var_179_string = var_186_int + var_187_string; // 0x1210 Add2
	var_180_int = 0; // 0x1211 MovI
	
Label_4626:
	var_188_int = 1; // 0x1212 PushI
	if(var_188_int == 0) goto Label_4639; // 0x1213 JumpB
	var_189_int = 1; // 0x1214 PushI
	var_190_int = var_180_int + var_189_int; // 0x1215 Add
	var_191_int = var_179_string + var_190_int; // 0x1216 Add
	HasProperty(var_191_int, var_181_bool); // 0x1217 ObjFunc
	var_192_bool = var_181_bool == 0; // 0x1219 Not
	if(var_192_bool == 0) goto Label_4636; // 0x121a JumpB
	goto Label_4639; // 0x121b Jump
	
Label_4639:
	var_193_bool = var_180_int == 0; // 0x121f Not
	if(var_193_bool == 0) goto Label_4643; // 0x1220 JumpB
	var_172_bool = 0; // 0x1221 MovB
	return 10; // 0x1222 Return
	
Label_4643:
	var_182_int = 0; // 0x1223 MovI
	var_194_int = 1; // 0x1224 PushI
	var_195_bool = var_180_int > var_194_int; // 0x1225 GT
	if(var_195_bool == 0) goto Label_4649; // 0x1226 JumpB
	irand(var_182_int, var_180_int); // 0x1227 Func
	
Label_4649:
	var_196_int = 1; // 0x1229 PushI
	var_197_int = var_182_int + var_196_int; // 0x122a Add
	var_198_int = var_179_string + var_197_int; // 0x122b Add
	GetProperty(var_198_int, var_183_string); // 0x122c ObjFunc
	var_199_bool = 0; var_200_string = ""; // 0x122e PushV
	var_200_string = var_183_string; // 0x122f Mov
	func_4691(var_199_bool, var_200_string); // 0x1230 NEW_2
	var_172_bool = var_199_bool; // 0x1231 Mov
	return 10; // 0x1233 Return
	
Label_4636:
	var_201_int = 1; // 0x121c PushI
	var_180_int = var_180_int + var_201_int; // 0x121d Add2
	goto Label_4626; // 0x121e Jump
}


func_5642()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x160a PushV
	var_59_int = 11; // 0x160b PushI
	var_60_int = 2; // 0x160c PushI
	var_61_int = 503095; // 0x160d PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x160e Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x1610 PushV
	var_63_object = var_58_object; // 0x1611 Mov
	var_64_int = -1; // 0x1612 MovI
	func_5681(var_62_bool, var_63_object, var_64_int); // 0x1613 NEW_2
	return 2; // 0x1615 Return
}


func_5142()
{
	var_244_string = "ood1EvaIntro1"; // 0x1417 PushS
	var_245_int = 1; // 0x1418 PushI
	SetVariable(var_244_string, var_245_int); // 0x1419 Func
	return 0; // 0x141b Return
}


func_5655()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x1617 PushV
	var_82_int = 57; // 0x1618 PushI
	var_83_int = 2; // 0x1619 PushI
	var_84_int = 512139; // 0x161a PushI
	CreateDiaryEntry(var_81_object, var_82_int, var_83_int, var_84_int); // 0x161b Func
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; // 0x161d PushV
	var_86_object = var_81_object; // 0x161e Mov
	var_87_int = 11; // 0x161f MovI
	func_5681(var_85_bool, var_86_object, var_87_int); // 0x1620 NEW_2
	return 2; // 0x1622 Return
}


func_5148()
{
	var_193_string = "ood1EvaIntro2"; // 0x141d PushS
	var_194_int = 1; // 0x141e PushI
	SetVariable(var_193_string, var_194_int); // 0x141f Func
	return 0; // 0x1421 Return
}


func_5154()
{
	var_782_string = "ood6Eva1"; // 0x1423 PushS
	var_783_int = 1; // 0x1424 PushI
	SetVariable(var_782_string, var_783_int); // 0x1425 Func
	return 0; // 0x1427 Return
}


func_5668(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1624 PushV
	GetDiaryRoot(var_73_object); // 0x1625 Func
	var_74_bool = var_73_object == 0; // 0x1627 Not
	if(var_74_bool == 0) goto Label_5678; // 0x1628 JumpB
	var_75_string = "Can't retrieve diary root"; // 0x1629 PushS
	Trace(var_75_string); // 0x162a Func
	var_71_object = 0; // 0x162c MovB
	return 2; // 0x162d Return
	
Label_5678:
	var_71_object = var_73_object; // 0x162e Mov
	return 2; // 0x162f Return
}


func_5160()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x1429 PushV
	var_101_object = Obj(); // 0x142a PushV
	func_5709(var_101_object); // 0x142b NEW_2
	var_98_object = var_101_object; // 0x142c Mov
	var_99_string = "pt_map_andrei"; // 0x142e MovS
	var_100_float = 2; // 0x142f MovI
	func_5726(var_98_object, var_99_string, var_100_float); // 0x1430 NEW_2
	var_121_object = Obj(); // 0x1432 PushV
	func_5709(var_121_object); // 0x1433 NEW_2
	ShowMap(var_121_object); // 0x1435 ObjFunc
	return 0; // 0x1437 Return
}


func_5681(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0x1631 PushV
	var_71_object = Obj(); // 0x1632 PushV
	func_5668(var_71_object); // 0x1633 NEW_2
	var_68_object = var_71_object; // 0x1634 Mov
	Find(var_64_int, var_69_object); // 0x1636 ObjFunc
	var_76_bool = var_69_object == 0; // 0x1638 Not
	if(var_76_bool == 0) goto Label_5696; // 0x1639 JumpB
	var_77_string = "Can't find diary parent with id: "; // 0x163a PushS
	var_78_int = var_77_string + var_64_int; // 0x163b Add
	Trace(var_78_int); // 0x163c Func
	var_62_bool = 0; // 0x163e MovB
	return 6; // 0x163f Return
	
Label_5696:
	AddChild(var_63_object); // 0x1640 ObjFunc
	var_79_int = 7; // 0x1642 PushI
	SendWorldWndMessage(var_79_int); // 0x1643 Func
	GetCategory(var_70_int); // 0x1645 ObjFunc
	SetDiarySection(var_70_int); // 0x1647 Func
	var_62_bool = 0; // 0x1649 MovB
	return 6; // 0x164a Return
}


func_4660(var_272_string)
{
	var_273_bool = 0; var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_float = 0; var_278_float = 0; // 0x1234 PushV
	lshHasAnimation(var_276_bool, var_272_string); // 0x1235 Func
	var_279_bool = var_276_bool; // 0x1237 Push
	if(var_279_bool == 0) goto Label_4671; // 0x1238 JumpB
	lshGetAnimTimes(var_272_string, var_277_float, var_278_float); // 0x1239 Func
	var_280_bool = 0; // 0x123b PushB
	lshPlayAnimation(var_277_float, var_278_float, var_280_bool); // 0x123c Func
	goto Label_4675; // 0x123e Jump
	
Label_4675:
	return 6; // 0x1243 Return
	
Label_4671:
	var_281_string = "Can't find lsh animation : "; // 0x123f PushS
	var_282_int = var_281_string + var_272_string; // 0x1240 Add
	Trace(var_282_int); // 0x1241 Func
}


func_4151(var_0_object)
{
	var_31_bool = 0; // 0x1037 PushV
	func_4430(var_31_bool); // 0x1038 NEW_2
	var_34_bool = var_31_bool == 0; // 0x103a Not
	if(var_34_bool == 0) goto Label_4158; // 0x103b JumpB
	Hold(); // 0x103c Func
	
Label_4158:
	GetDirection(var_0_object); // 0x103e Func
	
Label_4160:
	func_4327(); // 0x1041 NEW_2
	goto Label_4160; // 0x1043 Jump
}


func_5176()
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x1438 PushV
	var_138_object = Obj(); // 0x1439 PushV
	func_5709(var_138_object); // 0x143a NEW_2
	var_137_object = var_138_object; // 0x143b Mov
	var_139_string = "d2q02EvaGotoMaria"; // 0x143d PushS
	var_140_string = "pt_map_maria"; // 0x143e PushS
	var_141_int = 0; // 0x143f PushI
	var_142_int = 515274; // 0x1440 PushI
	var_143_float = 0; // 0x1441 PushV
	func_4806(var_143_float); // 0x1442 NEW_2
	AddMark(var_139_string, var_140_string, var_141_int, var_142_int, var_143_float); // 0x1444 ObjFunc
	return 2; // 0x1446 Return
}


func_4676(var_250_string, var_251_bool)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0x1244 PushV
	lshHasAnimation(var_257_bool, var_250_string); // 0x1245 Func
	var_260_bool = var_257_bool; // 0x1247 Push
	if(var_260_bool == 0) goto Label_4686; // 0x1248 JumpB
	lshGetAnimTimes(var_250_string, var_258_float, var_259_float); // 0x1249 Func
	lshPlayAnimation(var_258_float, var_259_float, var_251_bool); // 0x124b Func
	goto Label_4690; // 0x124d Jump
	
Label_4690:
	return 6; // 0x1252 Return
	
Label_4686:
	var_261_string = "Can't find lsh animation : "; // 0x124e PushS
	var_262_int = var_261_string + var_250_string; // 0x124f Add
	Trace(var_262_int); // 0x1250 Func
}


func_4165(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x1045 PushV
	var_59_string = "player"; // 0x1046 PushS
	FindActor(var_58_object, var_59_string); // 0x1047 Func
	var_60_bool = var_58_object == 0; // 0x1049 Not
	if(var_60_bool == 0) goto Label_4173; // 0x104a JumpB
	var_56_bool = 0; // 0x104b MovB
	return 2; // 0x104c Return
	
Label_4173:
	var_61_bool = 0; var_62_object = Obj(); // 0x104d PushV
	var_62_object = var_58_object; // 0x104e Mov
	func_4421(var_62_object); // 0x104f NEW_2
	var_56_bool = var_61_bool; // 0x1050 Mov
	return 2; // 0x1052 Return
}


func_3142(var_2_object, var_603_string)
{
	var_604_bool = 0; // 0xc47 PushV
	func_4858(var_604_bool); // 0xc48 NEW_2
	var_605_bool = var_604_bool == 0; // 0xc4a Not
	if(var_605_bool == 0) goto Label_3149; // 0xc4b JumpB
	return 0; // 0xc4c Return
	
Label_3149:
	var_606_bool = var_603_string == var_2_object; // 0xc4d Eq
	if(var_606_bool == 0) goto Label_3152; // 0xc4e JumpB
	return 0; // 0xc4f Return
	
Label_3152:
	var_607_string = ""; var_608_bool = 0; // 0xc50 PushV
	var_607_string = var_603_string; // 0xc51 Mov
	var_609_string = ""; // 0xc52 PushS
	var_610_bool = var_603_string == var_609_string; // 0xc53 Eq
	if(var_610_bool == 0) goto Label_3159; // 0xc54 JumpB
	var_608_bool = 0; // 0xc55 MovB
	goto Label_3160; // 0xc56 Jump
	
Label_3160:
	func_4676(var_607_string, var_608_bool); // 0xc58 NEW_2
	var_2_object = var_603_string; // 0xc5a TMov
	return 0; // 0xc5b Return
	
Label_3159:
	var_608_bool = 1; // 0xc57 MovB
}


func_5192()
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0; // 0x1449 PushV
	var_149_object = Obj(); // 0x144a PushV
	func_5709(var_149_object); // 0x144b NEW_2
	var_146_object = var_149_object; // 0x144c Mov
	var_147_string = "pt_map_maria"; // 0x144e MovS
	var_148_float = 2; // 0x144f MovI
	func_5726(var_146_object, var_147_string, var_148_float); // 0x1450 NEW_2
	var_150_object = Obj(); // 0x1452 PushV
	func_5709(var_150_object); // 0x1453 NEW_2
	ShowMap(var_150_object); // 0x1455 ObjFunc
	return 0; // 0x1457 Return
}


func_2123(var_0_object, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; // 0x84b PushV
	var_0_object = var_439_object; // 0x84c TMov
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0; // 0x84d PushV
	var_450_object = var_439_object; // 0x84e Mov
	var_451_float = 70.0; // 0x84f MovF
	func_4435(var_450_object, var_451_float); // 0x850 NEW_2
	var_452_bool = var_449_bool == 0; // 0x852 Not
	if(var_452_bool == 0) goto Label_2134; // 0x853 JumpB
	var_438_int = -2; // 0x854 MovI
	return 8; // 0x855 Return
	
Label_2134:
	CreateDialog(var_445_object); // 0x856 Func
	var_453_int = 0; // 0x858 PushV
	func_4852(var_453_int); // 0x859 NEW_2
	SetNPCName(var_453_int); // 0x85b ObjFunc
	var_454_int = 0; // 0x85d PushV
	func_4850(var_454_int); // 0x85e NEW_2
	SetNPCDescription(var_454_int); // 0x860 ObjFunc
	var_455_string = ""; // 0x862 PushV
	func_4854(var_455_string); // 0x863 NEW_2
	SetPhoto(var_455_string); // 0x865 ObjFunc
	var_456_string = ""; // 0x867 PushV
	func_4856(var_456_string); // 0x868 NEW_2
	SetPhoto2(var_456_string); // 0x86a ObjFunc
	var_457_int = 0; // 0x86c PushV
	func_5759(var_457_int); // 0x86d NEW_2
	SetPlayerName(var_457_int); // 0x86f ObjFunc
	var_447_int = -1; // 0x871 MovI
	IsOverrideActive(var_446_bool); // 0x872 Func
	var_458_bool = var_446_bool; // 0x874 Push
	if(var_458_bool == 0) goto Label_2168; // 0x875 JumpB
	var_438_int = -2; // 0x876 MovI
	return 8; // 0x877 Return
	
Label_2168:
	DoDialog(var_445_object); // 0x878 Func
	var_459_bool = 0; var_460_object = Obj(); // 0x87a PushV
	var_461_object = Obj(); // 0x87b PushV
	func_4713(var_461_object); // 0x87c NEW_2
	var_460_object = var_461_object; // 0x87d Mov
	func_4522(var_459_bool, var_460_object); // 0x87f NEW_2
	var_462_object = Obj(); var_463_object = Obj(); // 0x881 PushV
	var_462_object = var_439_object; // 0x882 Mov
	var_463_object = var_445_object; // 0x883 Mov
	TaskCall(5); // 0x884 TaskCall
	func_2204(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object); // 0x885 NEW_2
	TaskReturn(); // 0x886 TaskReturn
	IsDialogEnd(var_448_bool); // 0x888 ObjFunc
	
Label_2186:
	var_568_bool = var_448_bool == 0; // 0x88a Not
	if(var_568_bool == 0) goto Label_2193; // 0x88b JumpB
	sync(); // 0x88c Func
	IsDialogEnd(var_448_bool); // 0x88e ObjFunc
	goto Label_2186; // 0x890 Jump
	
Label_2193:
	var_569_object = Obj(); // 0x891 PushV
	var_569_object = var_439_object; // 0x892 Mov
	func_4504(); // 0x893 NEW_2
	StopDialog(var_445_object); // 0x895 Func
	GetReturnValue(var_447_int); // 0x897 ObjFunc
	var_438_int = var_447_int; // 0x899 Mov
	return 8; // 0x89a Return
}


func_5709(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0x164d PushV
	GetMainOutdoorScene(var_46_object); // 0x164e Func
	var_48_bool = var_46_object == 0; // 0x1650 NullEq
	if(var_48_bool == 0) goto Label_5720; // 0x1651 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0x1652 PushS
	Trace(var_49_string); // 0x1653 Func
	var_47_object = 0; // 0x1655 SetNull
	var_43_object = var_47_object; // 0x1656 Mov
	return 4; // 0x1657 Return
	
Label_5720:
	GetMap(var_47_object); // 0x1658 ObjFunc
	var_43_object = var_47_object; // 0x165a Mov
	return 4; // 0x165b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_760_object, var_761_object)
{
	var_0_object = var_761_object; // 0x52 TMov
	var_1_object = var_760_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_766_int = 1; // 0x55 PushI
	if(var_766_int == 0) goto Label_148; // 0x56 JumpB
	var_767_bool = 0; // 0x57 PushV
	var_767_bool = 0; // 0x58 MovB
	var_768_bool = 0; var_769_object = Obj(); // 0x59 PushV
	var_769_object = var_1_object; // 0x5a MovT
	func_5556(var_769_object); // 0x5b NEW_2
	if(var_768_bool == 0) goto Label_100; // 0x5d JumpB
	var_774_bool = 0; var_775_object = Obj(); // 0x5e PushV
	var_775_object = var_1_object; // 0x5f MovT
	func_5568(var_775_object); // 0x60 NEW_2
	if(var_774_bool == 0) goto Label_100; // 0x62 JumpB
	var_767_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_767_bool == 0) goto Label_126; // 0x64 JumpB
	var_780_object = Obj(); var_781_object = Obj(); // 0x65 PushV
	var_780_object = var_1_object; // 0x66 MovT
	var_781_object = var_0_object; // 0x67 MovT
	func_5154(); // 0x68 NEW_2
	var_784_string = ""; // 0x6a PushV
	var_784_string = "Neutral"; // 0x6b MovS
	func_178(var_761_object, var_784_string); // 0x6c NEW_2
	var_792_int = 503926; // 0x6e PushI
	SetMessage(var_792_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_793_int = 503927; // 0x73 PushI
	var_794_int = 4276; // 0x74 PushI
	var_795_int = 4275; // 0x75 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x76 TObjFunc
	var_796_int = 503929; // 0x78 PushI
	var_797_int = 4278; // 0x79 PushI
	var_798_int = 4277; // 0x7a PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_148:
	var_799_bool = 0; // 0x94 PushV
	func_4858(var_799_bool); // 0x95 NEW_2
	if(var_799_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_800_string = var_3_string; // 0x9a PushT
	if(var_800_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_801_string = ""; // 0x9d PushV
	var_801_string = var_2_object; // 0x9e MovT
	func_4660(var_801_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_802_string = "all"; // 0xa3 PushS
	var_803_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_802_string, var_803_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_804_string = var_3_string; // 0xa9 PushT
	if(var_804_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_805_string = "all"; // 0xac PushS
	var_806_string = "idle"; // 0xad PushS
	PlayAnimation(var_805_string, var_806_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_126:
	var_807_string = ""; // 0x7e PushV
	var_807_string = "Sexy"; // 0x7f MovS
	func_178(var_761_object, var_807_string); // 0x80 NEW_2
	var_808_int = 513718; // 0x82 PushI
	SetMessage(var_808_int); // 0x83 TObjFunc
	ClearReplies(); // 0x85 TObjFunc
	var_809_int = 513719; // 0x87 PushI
	var_810_int = -1; // 0x88 PushI
	var_811_int = 14985; // 0x89 PushI
	AddReply(var_809_int, var_810_int, var_811_int); // 0x8a TObjFunc
	var_812_int = 536133; // 0x8c PushI
	var_813_int = -1; // 0x8d PushI
	var_814_int = 37892; // 0x8e PushI
	AddReply(var_812_int, var_813_int, var_814_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
}


func_4691(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0; // 0x1253 PushV
	var_168_bool = 0; // 0x1254 PushV
	func_4858(var_168_bool); // 0x1255 NEW_2
	if(var_168_bool == 0) goto Label_4704; // 0x1257 JumpB
	lshHasSpeech(var_167_bool, var_165_string); // 0x1258 Func
	var_169_bool = var_167_bool; // 0x125a Push
	if(var_169_bool == 0) goto Label_4704; // 0x125b JumpB
	lshPlaySpeech(var_165_string); // 0x125c Func
	var_164_bool = 1; // 0x125e MovB
	return 2; // 0x125f Return
	
Label_4704:
	var_164_bool = 0; // 0x1260 MovB
	return 2; // 0x1261 Return
}


func_4180(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x1054 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x1055 PushE
	RotateAsync(var_108_float, var_109_float); // 0x1056 Func
	return 0; // 0x1058 Return
}


func_5208()
{
	var_39_string = "ood3Eva1"; // 0x1459 PushS
	var_40_int = 1; // 0x145a PushI
	SetVariable(var_39_string, var_40_int); // 0x145b Func
	return 0; // 0x145d Return
}


func_4185(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x1059 PushV
	var_44_string = "player"; // 0x105a PushS
	FindActor(var_42_object, var_44_string); // 0x105b Func
	var_45_bool = var_42_object == 0; // 0x105d Not
	if(var_45_bool == 0) goto Label_4193; // 0x105e JumpB
	var_39_bool = 0; // 0x105f MovB
	return 4; // 0x1060 Return
	
Label_4193:
	var_46_float = 0; var_47_object = Obj(); // 0x1061 PushV
	var_47_object = var_42_object; // 0x1062 Mov
	func_4403(var_47_object); // 0x1063 NEW_2
	var_54_float = 90000.0; // 0x1065 PushF
	var_55_bool = var_46_float > var_54_float; // 0x1066 GT
	if(var_55_bool == 0) goto Label_4202; // 0x1067 JumpB
	var_39_bool = 0; // 0x1068 MovB
	return 4; // 0x1069 Return
	
Label_4202:
	CanSee(var_43_bool, var_42_object); // 0x106a Func
	var_39_bool = var_43_bool; // 0x106c Mov
	return 4; // 0x106d Return
}


func_5214()
{
	var_39_string = "ood4Eva1"; // 0x145f PushS
	var_40_int = 1; // 0x1460 PushI
	SetVariable(var_39_string, var_40_int); // 0x1461 Func
	return 0; // 0x1463 Return
}


func_5726(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x165e PushV
	GetMainOutdoorScene(var_108_object); // 0x165f Func
	var_110_bool = var_108_object == 0; // 0x1661 NullEq
	if(var_110_bool == 0) goto Label_5735; // 0x1662 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1663 PushS
	Trace(var_111_string); // 0x1664 Func
	return 8; // 0x1666 Return
	
Label_5735:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x1667 ObjFunc
	var_112_bool = var_109_bool == 0; // 0x1669 Not
	if(var_112_bool == 0) goto Label_5745; // 0x166a JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x166b PushS
	var_114_int = var_113_string + var_99_string; // 0x166c Add
	var_115_string = " doesnt exist"; // 0x166d PushS
	var_116_int = var_114_int + var_115_string; // 0x166e Add
	Trace(var_116_int); // 0x166f Func
	
Label_5745:
	GetMap(var_98_object); // 0x1671 ObjFunc
	var_117_bool = var_98_object == 0; // 0x1673 NullEq
	if(var_117_bool == 0) goto Label_5753; // 0x1674 JumpB
	var_118_string = "Can't find map"; // 0x1675 PushS
	Trace(var_118_string); // 0x1676 Func
	return 8; // 0x1678 Return
	
Label_5753:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x1679 PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x167a PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x167b ObjFunc
	return 8; // 0x167d Return
}


func_4706()
{
	var_34_bool = 0; // 0x1262 PushV
	func_4858(var_34_bool); // 0x1263 NEW_2
	if(var_34_bool == 0) goto Label_4712; // 0x1265 JumpB
	lshStopSpeech(); // 0x1266 Func
	
Label_4712:
	return 0; // 0x1268 Return
}


func_5220(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x1465 PushV
	var_231_string = "ood1EvaIntro1"; // 0x1466 MovS
	func_4729(var_230_int, var_231_string); // 0x1467 NEW_2
	var_234_int = 0; // 0x1469 PushI
	var_235_bool = var_230_int == var_234_int; // 0x146a Eq
	if(var_235_bool == 0) goto Label_5230; // 0x146b JumpB
	var_228_bool = 1; // 0x146c MovB
	return 0; // 0x146d Return
	
Label_5230:
	var_228_bool = 0; // 0x146e MovB
	return 0; // 0x146f Return
}


func_4713(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x1269 PushV
	self(var_134_object); // 0x126a Func
	var_132_object = var_134_object; // 0x126c Mov
	return 2; // 0x126d Return
}


func_4207()
{
	var_875_float = 0; var_876_float = 0; // 0x106f PushV
	var_877_int = 8; // 0x1070 PushI
	var_878_int = 16; // 0x1071 PushI
	rand(var_876_float, var_877_int, var_878_int); // 0x1072 Func
	var_879_int = 10; // 0x1074 PushI
	SetTimer(var_879_int, var_876_float); // 0x1075 Func
	return 2; // 0x1077 Return
}


func_5232(var_414_bool)
{
	var_416_int = 0; var_417_string = ""; // 0x1471 PushV
	var_417_string = "d1q01FirstGeorgVisit"; // 0x1472 MovS
	func_4729(var_416_int, var_417_string); // 0x1473 NEW_2
	var_418_int = 1; // 0x1475 PushI
	var_419_bool = var_416_int == var_418_int; // 0x1476 Eq
	if(var_419_bool == 0) goto Label_5242; // 0x1477 JumpB
	var_414_bool = 1; // 0x1478 MovB
	return 0; // 0x1479 Return
	
Label_5242:
	var_414_bool = 0; // 0x147a MovB
	return 0; // 0x147b Return
}


func_4719(var_96_cvector, var_97_cvector)
{
	var_99_float = 0; var_100_float = 0; // 0x126f PushV
	var_101_int = var_97_cvector | var_97_cvector; // 0x1270 Or
	var_100_float = sqrt(var_101_int); // 0x1271 Sqrt2
	var_102_float = 0.0; // 0x1272 PushF
	var_103_bool = var_100_float < var_102_float; // 0x1273 LT
	if(var_103_bool == 0) goto Label_4727; // 0x1274 JumpB
	var_96_cvector = CVector(0.0, 0.0, 0.0); // 0x1275 MovV
	return 2; // 0x1276 Return
	
Label_4727:
	var_96_cvector = var_97_cvector / var_97_cvector; // 0x1277 Div2
	return 2; // 0x1278 Return
}


func_4216()
{
	var_874_int = 10; // 0x1078 PushI
	KillTimer(var_874_int); // 0x1079 Func
	return 0; // 0x107b Return
}


func_4729(var_230_int, var_231_string)
{
	var_232_int = 0; var_233_int = 0; // 0x1279 PushV
	GetVariable(var_231_string, var_233_int); // 0x127a Func
	var_230_int = var_233_int; // 0x127c Mov
	return 2; // 0x127d Return
}


func_5244(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x147d PushV
	var_239_string = "d1q03"; // 0x147e MovS
	func_4729(var_238_int, var_239_string); // 0x147f NEW_2
	var_240_int = 0; // 0x1481 PushI
	var_241_bool = var_238_int == var_240_int; // 0x1482 Eq
	if(var_241_bool == 0) goto Label_5254; // 0x1483 JumpB
	var_236_bool = 1; // 0x1484 MovB
	return 0; // 0x1485 Return
	
Label_5254:
	var_236_bool = 0; // 0x1486 MovB
	return 0; // 0x1487 Return
}


func_4734(var_88_object, var_89_string)
{
	var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj(); // 0x127e PushV
	GetMainOutdoorScene(var_92_object); // 0x127f Func
	var_94_string = ".bin"; // 0x1281 PushS
	var_95_int = var_89_string + var_94_string; // 0x1282 Add
	AddBlankActor(var_93_object, var_92_object, var_89_string, var_95_int); // 0x1283 Func
	var_88_object = var_93_object; // 0x1285 Mov
	return 4; // 0x1286 Return
}


func_5759(var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0x167f PushV
	var_124_string = "branch"; // 0x1680 PushS
	GetVariable(var_124_string, var_123_int); // 0x1681 Func
	var_125_int = 0; // 0x1683 PushI
	var_126_bool = var_123_int == var_125_int; // 0x1684 Eq
	if(var_126_bool == 0) goto Label_5769; // 0x1685 JumpB
	var_121_int = 1; // 0x1686 MovI
	return 2; // 0x1687 Return
	
Label_5769:
	var_127_int = 1; // 0x1689 PushI
	var_128_bool = var_123_int == var_127_int; // 0x168a Eq
	if(var_128_bool == 0) goto Label_5774; // 0x168b JumpB
	var_121_int = 2; // 0x168c MovI
	return 2; // 0x168d Return
	
Label_5774:
	var_121_int = 3; // 0x168e MovI
	return 2; // 0x168f Return
}


func_5256(var_370_bool)
{
	var_372_int = 0; var_373_string = ""; // 0x1489 PushV
	var_373_string = "d1q03"; // 0x148a MovS
	func_4729(var_372_int, var_373_string); // 0x148b NEW_2
	var_374_int = 1000; // 0x148d PushI
	var_375_bool = var_372_int == var_374_int; // 0x148e Eq
	if(var_375_bool == 0) goto Label_5266; // 0x148f JumpB
	var_370_bool = 1; // 0x1490 MovB
	return 0; // 0x1491 Return
	
Label_5266:
	var_370_bool = 0; // 0x1492 MovB
	return 0; // 0x1493 Return
}


func_4745(var_39_string, var_40_bool)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x1289 PushV
	FindActor(var_42_object, var_39_string); // 0x128a Func
	var_43_bool = var_42_object == 0; // 0x128c Not
	if(var_43_bool == 0) goto Label_4757; // 0x128d JumpB
	var_44_string = "Door "; // 0x128e PushS
	var_45_int = var_44_string + var_39_string; // 0x128f Add
	var_46_string = " not found"; // 0x1290 PushS
	var_47_int = var_45_int + var_46_string; // 0x1291 Add
	Trace(var_47_int); // 0x1292 Func
	goto Label_4760; // 0x1294 Jump
	
Label_4760:
	return 2; // 0x1298 Return
	
Label_4757:
	var_48_string = "locked"; // 0x1295 PushS
	SetProperty(var_48_string, var_40_bool); // 0x1296 ObjFunc
}


func_5776(var_49_object)
{
	var_50_bool = 0; var_51_int = 0; // 0x1691 PushV
	var_51_int = 1; // 0x1692 MovI
	func_4820(var_50_bool, var_51_int); // 0x1693 NEW_2
	if(var_50_bool == 0) goto Label_5789; // 0x1695 JumpB
	var_58_int = 0; var_59_object = Obj(); // 0x1696 PushV
	var_59_object = var_49_object; // 0x1697 Mov
	TaskCall(2); // 0x1698 TaskCall
	func_406(var_60_object, var_58_int, var_59_object); // 0x1699 NEW_2
	TaskReturn(); // 0x169a TaskReturn
	return 0; // 0x169c Return
	
Label_5789:
	var_436_bool = 0; var_437_int = 0; // 0x169d PushV
	var_437_int = 2; // 0x169e MovI
	func_4820(var_436_bool, var_437_int); // 0x169f NEW_2
	if(var_436_bool == 0) goto Label_5801; // 0x16a1 JumpB
	var_438_int = 0; var_439_object = Obj(); // 0x16a2 PushV
	var_439_object = var_49_object; // 0x16a3 Mov
	TaskCall(4); // 0x16a4 TaskCall
	func_2123(var_440_object, var_438_int, var_439_object); // 0x16a5 NEW_2
	TaskReturn(); // 0x16a6 TaskReturn
	return 0; // 0x16a8 Return
	
Label_5801:
	var_570_bool = 0; var_571_int = 0; // 0x16a9 PushV
	var_571_int = 3; // 0x16aa MovI
	func_4820(var_570_bool, var_571_int); // 0x16ab NEW_2
	if(var_570_bool == 0) goto Label_5813; // 0x16ad JumpB
	var_572_int = 0; var_573_object = Obj(); // 0x16ae PushV
	var_573_object = var_49_object; // 0x16af Mov
	TaskCall(6); // 0x16b0 TaskCall
	func_2998(var_574_object, var_572_int, var_573_object); // 0x16b1 NEW_2
	TaskReturn(); // 0x16b2 TaskReturn
	return 0; // 0x16b4 Return
	
Label_5813:
	var_634_bool = 0; var_635_int = 0; // 0x16b5 PushV
	var_635_int = 4; // 0x16b6 MovI
	func_4820(var_634_bool, var_635_int); // 0x16b7 NEW_2
	if(var_634_bool == 0) goto Label_5825; // 0x16b9 JumpB
	var_636_int = 0; var_637_object = Obj(); // 0x16ba PushV
	var_637_object = var_49_object; // 0x16bb Mov
	TaskCall(8); // 0x16bc TaskCall
	func_3339(var_638_object, var_636_int, var_637_object); // 0x16bd NEW_2
	TaskReturn(); // 0x16be TaskReturn
	return 0; // 0x16c0 Return
	
Label_5825:
	var_734_bool = 0; var_735_int = 0; // 0x16c1 PushV
	var_735_int = 6; // 0x16c2 MovI
	func_4820(var_734_bool, var_735_int); // 0x16c3 NEW_2
	if(var_734_bool == 0) goto Label_5837; // 0x16c5 JumpB
	var_736_int = 0; var_737_object = Obj(); // 0x16c6 PushV
	var_737_object = var_49_object; // 0x16c7 Mov
	TaskCall(0); // 0x16c8 TaskCall
	func_0(var_738_object, var_736_int, var_737_object); // 0x16c9 NEW_2
	TaskReturn(); // 0x16ca TaskReturn
	return 0; // 0x16cc Return
	
Label_5837:
	var_817_int = 0; var_818_object = Obj(); // 0x16cd PushV
	var_818_object = var_49_object; // 0x16ce Mov
	TaskCall(10); // 0x16cf TaskCall
	func_3944(var_819_object, var_817_int, var_818_object); // 0x16d0 NEW_2
	TaskReturn(); // 0x16d1 TaskReturn
	return 0; // 0x16d3 Return
}


func_5268(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0x1495 PushV
	var_384_string = "d1q03IsKapella"; // 0x1496 MovS
	func_4729(var_383_int, var_384_string); // 0x1497 NEW_2
	var_385_int = 1; // 0x1499 PushI
	var_386_bool = var_383_int == var_385_int; // 0x149a Eq
	if(var_386_bool == 0) goto Label_5278; // 0x149b JumpB
	var_381_bool = 1; // 0x149c MovB
	return 0; // 0x149d Return
	
Label_5278:
	var_381_bool = 0; // 0x149e MovB
	return 0; // 0x149f Return
}


func_4762(var_241_int, var_242_int)
{
	var_243_object = Obj(); var_244_object = Obj(); // 0x129a PushV
	CreateIntVector(var_244_object); // 0x129b Func
	add(var_241_int); // 0x129d ObjFunc
	add(var_242_int); // 0x129f ObjFunc
	var_245_int = 3; // 0x12a1 PushI
	SendWorldWndMessage(var_245_int, var_244_object); // 0x12a2 Func
	return 2; // 0x12a4 Return
}


func_2204(var_0_object, var_1_object, var_2_object, var_3_string, var_462_object, var_463_object)
{
	var_0_object = var_463_object; // 0x89d TMov
	var_1_object = var_462_object; // 0x89e TMov
	var_3_string = 0; // 0x89f TMovB
	var_468_int = 1; // 0x8a0 PushI
	if(var_468_int == 0) goto Label_2329; // 0x8a1 JumpB
	var_469_bool = 0; var_470_object = Obj(); // 0x8a2 PushV
	var_470_object = var_1_object; // 0x8a3 MovT
	func_5400(var_470_object); // 0x8a4 NEW_2
	if(var_469_bool == 0) goto Label_2245; // 0x8a6 JumpB
	var_475_object = Obj(); var_476_object = Obj(); // 0x8a7 PushV
	var_475_object = var_1_object; // 0x8a8 MovT
	var_476_object = var_0_object; // 0x8a9 MovT
	func_5025(); // 0x8aa NEW_2
	var_479_object = Obj(); var_480_object = Obj(); // 0x8ac PushV
	var_479_object = var_1_object; // 0x8ad MovT
	var_480_object = var_0_object; // 0x8ae MovT
	func_4973(); // 0x8af NEW_2
	var_483_string = ""; // 0x8b1 PushV
	var_483_string = "Fear"; // 0x8b2 MovS
	func_2359(var_463_object, var_483_string); // 0x8b3 NEW_2
	var_491_int = 506853; // 0x8b5 PushI
	SetMessage(var_491_int); // 0x8b6 TObjFunc
	ClearReplies(); // 0x8b8 TObjFunc
	var_492_int = 506854; // 0x8ba PushI
	var_493_int = 7890; // 0x8bb PushI
	var_494_int = 7560; // 0x8bc PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x8bd TObjFunc
	var_495_int = 507262; // 0x8bf PushI
	var_496_int = 7890; // 0x8c0 PushI
	var_497_int = 8004; // 0x8c1 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x8c2 TObjFunc
	goto Label_2329; // 0x8c4 Jump
	
Label_2329:
	var_498_bool = 0; // 0x919 PushV
	func_4858(var_498_bool); // 0x91a NEW_2
	if(var_498_bool == 0) goto Label_2344; // 0x91c JumpB
	
Label_2333:
	lshWaitForAnimEnd(); // 0x91d Func
	var_499_string = var_3_string; // 0x91f PushT
	if(var_499_string == 0) goto Label_2338; // 0x920 JumpB
	goto Label_2343; // 0x921 Jump
	
Label_2343:
	goto Label_2358; // 0x927 Jump
	
Label_2358:
	return 0; // 0x936 Return
	
Label_2338:
	var_500_string = ""; // 0x922 PushV
	var_500_string = var_2_object; // 0x923 MovT
	func_4660(var_500_string); // 0x924 NEW_2
	goto Label_2333; // 0x926 Jump
	
Label_2344:
	var_501_string = "all"; // 0x928 PushS
	var_502_string = "idle"; // 0x929 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x92a Func
	
Label_2348:
	WaitForAnimEnd(); // 0x92c Func
	var_503_string = var_3_string; // 0x92e PushT
	if(var_503_string == 0) goto Label_2353; // 0x92f JumpB
	goto Label_2358; // 0x930 Jump
	
Label_2353:
	var_504_string = "all"; // 0x931 PushS
	var_505_string = "idle"; // 0x932 PushS
	PlayAnimation(var_504_string, var_505_string); // 0x933 Func
	goto Label_2348; // 0x935 Jump
	
Label_2245:
	var_506_string = ""; // 0x8c5 PushV
	var_506_string = "Neutral"; // 0x8c6 MovS
	func_2359(var_463_object, var_506_string); // 0x8c7 NEW_2
	var_507_int = 506855; // 0x8c9 PushI
	SetMessage(var_507_int); // 0x8ca TObjFunc
	ClearReplies(); // 0x8cc TObjFunc
	var_508_bool = 0; // 0x8ce PushV
	var_508_bool = 0; // 0x8cf MovB
	var_509_bool = 0; var_510_object = Obj(); // 0x8d0 PushV
	var_510_object = var_1_object; // 0x8d1 MovT
	func_5412(var_510_object); // 0x8d2 NEW_2
	if(var_509_bool == 0) goto Label_2267; // 0x8d4 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x8d5 PushV
	var_516_object = var_1_object; // 0x8d6 MovT
	func_5460(var_516_object); // 0x8d7 NEW_2
	if(var_515_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_508_bool = 1; // 0x8da MovB
	
Label_2267:
	if(var_508_bool == 0) goto Label_2273; // 0x8db JumpB
	var_521_int = 506856; // 0x8dc PushI
	var_522_int = 7563; // 0x8dd PushI
	var_523_int = 7562; // 0x8de PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x8df TObjFunc
	
Label_2273:
	var_524_bool = 0; // 0x8e1 PushV
	var_524_bool = 0; // 0x8e2 MovB
	var_525_bool = 0; var_526_object = Obj(); // 0x8e3 PushV
	var_526_object = var_1_object; // 0x8e4 MovT
	func_5424(var_526_object); // 0x8e5 NEW_2
	if(var_525_bool == 0) goto Label_2286; // 0x8e7 JumpB
	var_531_bool = 0; var_532_object = Obj(); // 0x8e8 PushV
	var_532_object = var_1_object; // 0x8e9 MovT
	func_5472(var_532_object); // 0x8ea NEW_2
	if(var_531_bool == 0) goto Label_2286; // 0x8ec JumpB
	var_524_bool = 1; // 0x8ed MovB
	
Label_2286:
	if(var_524_bool == 0) goto Label_2292; // 0x8ee JumpB
	var_537_int = 506859; // 0x8ef PushI
	var_538_int = 7566; // 0x8f0 PushI
	var_539_int = 7565; // 0x8f1 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x8f2 TObjFunc
	
Label_2292:
	var_540_bool = 0; // 0x8f4 PushV
	var_540_bool = 0; // 0x8f5 MovB
	var_541_bool = 0; var_542_object = Obj(); // 0x8f6 PushV
	var_542_object = var_1_object; // 0x8f7 MovT
	func_5436(var_542_object); // 0x8f8 NEW_2
	if(var_541_bool == 0) goto Label_2305; // 0x8fa JumpB
	var_547_bool = 0; var_548_object = Obj(); // 0x8fb PushV
	var_548_object = var_1_object; // 0x8fc MovT
	func_5448(var_548_object); // 0x8fd NEW_2
	if(var_547_bool == 0) goto Label_2305; // 0x8ff JumpB
	var_540_bool = 1; // 0x900 MovB
	
Label_2305:
	if(var_540_bool == 0) goto Label_2311; // 0x901 JumpB
	var_553_int = 506861; // 0x902 PushI
	var_554_int = 7568; // 0x903 PushI
	var_555_int = 7567; // 0x904 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x905 TObjFunc
	
Label_2311:
	var_556_bool = 0; var_557_object = Obj(); // 0x907 PushV
	var_557_object = var_1_object; // 0x908 MovT
	func_5496(var_557_object); // 0x909 NEW_2
	if(var_556_bool == 0) goto Label_2321; // 0x90b JumpB
	var_562_int = 511392; // 0x90c PushI
	var_563_int = 12590; // 0x90d PushI
	var_564_int = 12589; // 0x90e PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x90f TObjFunc
	
Label_2321:
	var_565_int = 507528; // 0x911 PushI
	var_566_int = -1; // 0x912 PushI
	var_567_int = 8310; // 0x913 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x914 TObjFunc
	goto Label_2329; // 0x916 Jump
}


func_5280(var_405_bool)
{
	var_407_int = 0; var_408_string = ""; // 0x14a1 PushV
	var_408_string = "d1q04"; // 0x14a2 MovS
	func_4729(var_407_int, var_408_string); // 0x14a3 NEW_2
	var_409_int = 1; // 0x14a5 PushI
	var_410_bool = var_407_int == var_409_int; // 0x14a6 Eq
	if(var_410_bool == 0) goto Label_5290; // 0x14a7 JumpB
	var_405_bool = 1; // 0x14a8 MovB
	return 0; // 0x14a9 Return
	
Label_5290:
	var_405_bool = 0; // 0x14aa MovB
	return 0; // 0x14ab Return
}


func_4774(var_231_object, var_232_int)
{
	var_233_int = 0; var_234_int = 0; var_235_bool = 0; var_236_int = 0; var_237_int = 0; var_238_bool = 0; // 0x12a6 PushV
	GetItemID(var_236_int); // 0x12a7 ObjFunc
	var_239_string = "Category"; // 0x12a9 PushS
	GetInvItemProperty(var_237_int, var_236_int, var_239_string); // 0x12aa Func
	AddItem(var_238_bool, var_231_object, var_237_int, var_232_int); // 0x12ac ObjFunc
	var_240_bool = var_238_bool == 0; // 0x12ae Not
	if(var_240_bool == 0) goto Label_4787; // 0x12af JumpB
	DropItems(var_231_object, var_232_int); // 0x12b0 ObjFunc
	goto Label_4792; // 0x12b2 Jump
	
Label_4792:
	return 6; // 0x12b8 Return
	
Label_4787:
	var_241_int = 0; var_242_int = 0; // 0x12b3 PushV
	var_241_int = var_236_int; // 0x12b4 Mov
	var_242_int = var_232_int; // 0x12b5 Mov
	func_4762(var_241_int, var_242_int); // 0x12b6 NEW_2
}


func_5292(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x14ad PushV
	var_312_string = "d1q01"; // 0x14ae MovS
	func_4729(var_311_int, var_312_string); // 0x14af NEW_2
	var_313_int = 5; // 0x14b1 PushI
	var_314_bool = var_311_int == var_313_int; // 0x14b2 Eq
	if(var_314_bool == 0) goto Label_5302; // 0x14b3 JumpB
	var_309_bool = 1; // 0x14b4 MovB
	return 0; // 0x14b5 Return
	
Label_5302:
	var_309_bool = 0; // 0x14b6 MovB
	return 0; // 0x14b7 Return
}


func_178(var_2_object, var_784_string)
{
	var_785_bool = 0; // 0xb3 PushV
	func_4858(var_785_bool); // 0xb4 NEW_2
	var_786_bool = var_785_bool == 0; // 0xb6 Not
	if(var_786_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_787_bool = var_784_string == var_2_object; // 0xb9 Eq
	if(var_787_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_788_string = ""; var_789_bool = 0; // 0xbc PushV
	var_788_string = var_784_string; // 0xbd Mov
	var_790_string = ""; // 0xbe PushS
	var_791_bool = var_784_string == var_790_string; // 0xbf Eq
	if(var_791_bool == 0) goto Label_195; // 0xc0 JumpB
	var_789_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_4676(var_788_string, var_789_bool); // 0xc4 NEW_2
	var_2_object = var_784_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_789_bool = 1; // 0xc3 MovB
}


func_5304(var_358_bool)
{
	var_360_int = 0; var_361_string = ""; // 0x14b9 PushV
	var_361_string = "d1q01"; // 0x14ba MovS
	func_4729(var_360_int, var_361_string); // 0x14bb NEW_2
	var_362_int = 6; // 0x14bd PushI
	var_363_bool = var_360_int == var_362_int; // 0x14be Eq
	if(var_363_bool == 0) goto Label_5314; // 0x14bf JumpB
	var_358_bool = 1; // 0x14c0 MovB
	return 0; // 0x14c1 Return
	
Label_5314:
	var_358_bool = 0; // 0x14c2 MovB
	return 0; // 0x14c3 Return
}


func_4793(var_225_object, var_226_string, var_227_int)
{
	var_228_object = Obj(); var_229_object = Obj(); // 0x12b9 PushV
	CreateInvItem(var_229_object); // 0x12ba Func
	SetItemName(var_226_string); // 0x12bc ObjFunc
	var_230_object = Obj(); var_231_object = Obj(); var_232_int = 0; // 0x12be PushV
	var_230_object = var_225_object; // 0x12bf Mov
	var_231_object = var_229_object; // 0x12c0 Mov
	var_232_int = var_227_int; // 0x12c1 Mov
	func_4774(var_231_object, var_232_int); // 0x12c2 NEW_2
	return 2; // 0x12c4 Return
}


func_5316(var_387_bool)
{
	var_389_int = 0; var_390_string = ""; // 0x14c5 PushV
	var_390_string = "ood1Eva4"; // 0x14c6 MovS
	func_4729(var_389_int, var_390_string); // 0x14c7 NEW_2
	var_391_int = 0; // 0x14c9 PushI
	var_392_bool = var_389_int == var_391_int; // 0x14ca Eq
	if(var_392_bool == 0) goto Label_5326; // 0x14cb JumpB
	var_387_bool = 1; // 0x14cc MovB
	return 0; // 0x14cd Return
	
Label_5326:
	var_387_bool = 0; // 0x14ce MovB
	return 0; // 0x14cf Return
}


func_4806(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0x12c6 PushV
	GetGameTime(var_56_float); // 0x12c7 Func
	var_54_float = var_56_float; // 0x12c9 Mov
	return 2; // 0x12ca Return
}


func_4811(var_52_int)
{
	var_53_float = 0; var_54_float = 0; // 0x12cb PushV
	GetGameTime(var_54_float); // 0x12cc Func
	var_55_int = 1; // 0x12ce PushI
	var_56_int = 0; // 0x12cf PushV
	var_57_int = 24; // 0x12d0 PushI
	var_56_int = var_54_float / var_54_float; // 0x12d1 Div2
	var_52_int = var_55_int + var_56_int; // 0x12d2 Add2
	return 2; // 0x12d3 Return
}


func_5328(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x14d1 PushV
	var_300_string = "d1q01"; // 0x14d2 MovS
	func_4729(var_299_int, var_300_string); // 0x14d3 NEW_2
	var_301_int = 6; // 0x14d5 PushI
	var_302_bool = var_299_int >= var_301_int; // 0x14d6 GE
	if(var_302_bool == 0) goto Label_5338; // 0x14d7 JumpB
	var_297_bool = 1; // 0x14d8 MovB
	return 0; // 0x14d9 Return
	
Label_5338:
	var_297_bool = 0; // 0x14da MovB
	return 0; // 0x14db Return
}


func_4820(var_50_bool, var_51_int)
{
	var_52_int = 0; // 0x12d5 PushV
	func_4811(var_52_int); // 0x12d6 NEW_2
	var_50_bool = var_52_int == var_51_int; // 0x12d8 Eq2
	return 0; // 0x12d9 Return
}


func_4826(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0x12da PushV
	var_58_string = "idle"; // 0x12db MovS
	var_59_int = var_56_int; // 0x12dc Push
	if(var_59_int == 0) goto Label_4831; // 0x12dd JumpB
	var_58_string = var_58_string + var_56_int; // 0x12de Add2
	
Label_4831:
	var_55_string = var_58_string; // 0x12df Mov
	return 2; // 0x12e0 Return
}


func_5340(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x14dd PushV
	var_350_string = "ood1Eva5"; // 0x14de MovS
	func_4729(var_349_int, var_350_string); // 0x14df NEW_2
	var_351_int = 0; // 0x14e1 PushI
	var_352_bool = var_349_int == var_351_int; // 0x14e2 Eq
	if(var_352_bool == 0) goto Label_5350; // 0x14e3 JumpB
	var_347_bool = 1; // 0x14e4 MovB
	return 0; // 0x14e5 Return
	
Label_5350:
	var_347_bool = 0; // 0x14e6 MovB
	return 0; // 0x14e7 Return
}


func_4833(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x12e1 PushV
	var_52_int = 0; // 0x12e2 MovI
	
Label_4835:
	var_54_string = "all"; // 0x12e3 PushS
	var_55_string = ""; var_56_int = 0; // 0x12e4 PushV
	var_56_int = var_52_int; // 0x12e5 Mov
	func_4826(var_55_string, var_56_int); // 0x12e6 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0x12e8 Func
	var_60_bool = var_53_bool == 0; // 0x12ea Not
	if(var_60_bool == 0) goto Label_4845; // 0x12eb JumpB
	goto Label_4848; // 0x12ec Jump
	
Label_4848:
	var_49_int = var_52_int; // 0x12f0 Mov
	return 4; // 0x12f1 Return
	
Label_4845:
	var_61_int = 1; // 0x12ed PushI
	var_52_int = var_52_int + var_61_int; // 0x12ee Add2
	goto Label_4835; // 0x12ef Jump
}


func_4327()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0x10e7 PushV
	WaitForAnimEnd(); // 0x10e8 Func
	var_47_bool = 0; // 0x10ea PushV
	func_4430(var_47_bool); // 0x10eb NEW_2
	var_48_bool = var_47_bool == 0; // 0x10ed Not
	if(var_48_bool == 0) goto Label_4336; // 0x10ee JumpB
	return 12; // 0x10ef Return
	
Label_4336:
	var_49_int = 0; // 0x10f0 PushV
	func_4833(var_49_int); // 0x10f1 NEW_2
	var_41_int = var_49_int; // 0x10f2 Mov
	var_42_int = 0; // 0x10f4 MovI
	
Label_4341:
	var_62_bool = 0; // 0x10f5 PushV
	var_62_bool = 0; // 0x10f6 MovB
	var_63_int = 5; // 0x10f7 PushI
	var_64_bool = var_42_int < var_63_int; // 0x10f8 LT
	if(var_64_bool == 0) goto Label_4351; // 0x10f9 JumpB
	var_65_bool = 0; // 0x10fa PushV
	func_4430(var_65_bool); // 0x10fb NEW_2
	if(var_65_bool == 0) goto Label_4351; // 0x10fd JumpB
	var_62_bool = 1; // 0x10fe MovB
	
Label_4351:
	if(var_62_bool == 0) goto Label_4393; // 0x10ff JumpB
	var_66_bool = var_41_int == 0; // 0x1100 Not
	if(var_66_bool == 0) goto Label_4361; // 0x1101 JumpB
	var_67_int = 3; // 0x1102 PushI
	Sleep(var_67_int, var_43_bool); // 0x1103 Func
	var_68_bool = var_43_bool == 0; // 0x1105 Not
	if(var_68_bool == 0) goto Label_4360; // 0x1106 JumpB
	goto Label_4393; // 0x1107 Jump
	
Label_4393:
	ResetAAS(); // 0x1129 Func
	return 12; // 0x112b Return
	
Label_4360:
	goto Label_4382; // 0x1108 Jump
	
Label_4382:
	var_69_bool = 0; // 0x111e PushV
	func_4396(var_69_bool); // 0x111f NEW_2
	var_70_bool = var_69_bool == 0; // 0x1121 Not
	if(var_70_bool == 0) goto Label_4388; // 0x1122 JumpB
	goto Label_4393; // 0x1123 Jump
	
Label_4388:
	ResetAAS(); // 0x1124 Func
	var_71_int = 1; // 0x1126 PushI
	var_42_int = var_42_int + var_71_int; // 0x1127 Add2
	goto Label_4341; // 0x1128 Jump
	
Label_4361:
	irand(var_44_int, var_41_int); // 0x1109 Func
	var_72_int = 5; // 0x110b PushI
	irand(var_45_int, var_72_int); // 0x110c Func
	var_73_int = 0; // 0x110e PushI
	var_74_bool = var_45_int != var_73_int; // 0x110f Neq
	if(var_74_bool == 0) goto Label_4370; // 0x1110 JumpB
	var_44_int = 0; // 0x1111 MovI
	
Label_4370:
	var_75_string = "all"; // 0x1112 PushS
	var_76_string = ""; var_77_int = 0; // 0x1113 PushV
	var_77_int = var_44_int; // 0x1114 Mov
	func_4826(var_76_string, var_77_int); // 0x1115 NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x1117 Func
	WaitForAnimEnd(var_46_bool); // 0x1119 Func
	var_78_bool = var_46_bool == 0; // 0x111b Not
	if(var_78_bool == 0) goto Label_4382; // 0x111c JumpB
	goto Label_4393; // 0x111d Jump
}


func_5352(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x14e9 PushV
	var_341_string = "ood1Eva6"; // 0x14ea MovS
	func_4729(var_340_int, var_341_string); // 0x14eb NEW_2
	var_342_int = 0; // 0x14ed PushI
	var_343_bool = var_340_int == var_342_int; // 0x14ee Eq
	if(var_343_bool == 0) goto Label_5362; // 0x14ef JumpB
	var_338_bool = 1; // 0x14f0 MovB
	return 0; // 0x14f1 Return
	
Label_5362:
	var_338_bool = 0; // 0x14f2 MovB
	return 0; // 0x14f3 Return
}


func_4850(var_118_int)
{
	var_118_int = 515533; // 0x12f2 MovI
	return 0; // 0x12f3 Return
}


func_4852(var_117_int)
{
	var_117_int = 502858; // 0x12f4 MovI
	return 0; // 0x12f5 Return
}


func_5364(var_399_bool)
{
	var_401_int = 0; var_402_string = ""; // 0x14f5 PushV
	var_402_string = "ood1Eva7"; // 0x14f6 MovS
	func_4729(var_401_int, var_402_string); // 0x14f7 NEW_2
	var_403_int = 0; // 0x14f9 PushI
	var_404_bool = var_401_int == var_403_int; // 0x14fa Eq
	if(var_404_bool == 0) goto Label_5374; // 0x14fb JumpB
	var_399_bool = 1; // 0x14fc MovB
	return 0; // 0x14fd Return
	
Label_5374:
	var_399_bool = 0; // 0x14fe MovB
	return 0; // 0x14ff Return
}


func_4854(var_119_string)
{
	var_119_string = "ui/NPC_Eva.png"; // 0x12f6 MovS
	return 0; // 0x12f7 Return
}


func_4856(var_120_string)
{
	var_120_string = "ui/NPC_Eva_b.png"; // 0x12f8 MovS
	return 0; // 0x12f9 Return
}


func_4858(var_112_bool)
{
	var_112_bool = 1; // 0x12fa MovB
	return 0; // 0x12fb Return
}


func_4860()
{
	var_319_string = "ood1EvaIntro3"; // 0x12fd PushS
	var_320_int = 1; // 0x12fe PushI
	SetVariable(var_319_string, var_320_int); // 0x12ff Func
	return 0; // 0x1301 Return
}


func_5376(var_712_bool)
{
	var_714_int = 0; var_715_string = ""; // 0x1501 PushV
	var_715_string = "ood4Eva2"; // 0x1502 MovS
	func_4729(var_714_int, var_715_string); // 0x1503 NEW_2
	var_716_int = 0; // 0x1505 PushI
	var_717_bool = var_714_int == var_716_int; // 0x1506 Eq
	if(var_717_bool == 0) goto Label_5386; // 0x1507 JumpB
	var_712_bool = 1; // 0x1508 MovB
	return 0; // 0x1509 Return
	
Label_5386:
	var_712_bool = 0; // 0x150a MovB
	return 0; // 0x150b Return
}


func_769(var_2_object, var_246_string)
{
	var_247_bool = 0; // 0x302 PushV
	func_4858(var_247_bool); // 0x303 NEW_2
	var_248_bool = var_247_bool == 0; // 0x305 Not
	if(var_248_bool == 0) goto Label_776; // 0x306 JumpB
	return 0; // 0x307 Return
	
Label_776:
	var_249_bool = var_246_string == var_2_object; // 0x308 Eq
	if(var_249_bool == 0) goto Label_779; // 0x309 JumpB
	return 0; // 0x30a Return
	
Label_779:
	var_250_string = ""; var_251_bool = 0; // 0x30b PushV
	var_250_string = var_246_string; // 0x30c Mov
	var_252_string = ""; // 0x30d PushS
	var_253_bool = var_246_string == var_252_string; // 0x30e Eq
	if(var_253_bool == 0) goto Label_786; // 0x30f JumpB
	var_251_bool = 0; // 0x310 MovB
	goto Label_787; // 0x311 Jump
	
Label_787:
	func_4676(var_250_string, var_251_bool); // 0x313 NEW_2
	var_2_object = var_246_string; // 0x315 TMov
	return 0; // 0x316 Return
	
Label_786:
	var_251_bool = 1; // 0x312 MovB
}


func_4866()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x1302 PushV
	var_117_string = "d1q03IsKapella"; // 0x1303 PushS
	var_118_int = 1; // 0x1304 PushI
	SetVariable(var_117_string, var_118_int); // 0x1305 Func
	var_119_object = Obj(); // 0x1307 PushV
	func_5709(var_119_object); // 0x1308 NEW_2
	var_116_object = var_119_object; // 0x1309 Mov
	var_120_string = "d1q03KapellaGotoOspina"; // 0x130b PushS
	var_121_string = "pt_map_ospina"; // 0x130c PushS
	var_122_int = 0; // 0x130d PushI
	var_123_int = 508641; // 0x130e PushI
	var_124_float = 0; // 0x130f PushV
	func_4806(var_124_float); // 0x1310 NEW_2
	AddMark(var_120_string, var_121_string, var_122_int, var_123_int, var_124_float); // 0x1312 ObjFunc
	func_5616(); // 0x1315 NEW_2
	func_5629(); // 0x1318 NEW_2
	var_156_object = Obj(); var_157_string = ""; // 0x131a PushV
	var_157_string = "quest_d1_03"; // 0x131b MovS
	func_4734(var_156_object, var_157_string); // 0x131c NEW_2
	return 2; // 0x131e Return
}


func_3339(var_0_object, var_636_int, var_637_object)
{
	var_639_object = Obj(); var_640_bool = 0; var_641_int = 0; var_642_bool = 0; var_643_object = Obj(); var_644_bool = 0; var_645_int = 0; var_646_bool = 0; // 0xd0b PushV
	var_0_object = var_637_object; // 0xd0c TMov
	var_647_bool = 0; var_648_object = Obj(); var_649_float = 0; // 0xd0d PushV
	var_648_object = var_637_object; // 0xd0e Mov
	var_649_float = 70.0; // 0xd0f MovF
	func_4435(var_648_object, var_649_float); // 0xd10 NEW_2
	var_650_bool = var_647_bool == 0; // 0xd12 Not
	if(var_650_bool == 0) goto Label_3350; // 0xd13 JumpB
	var_636_int = -2; // 0xd14 MovI
	return 8; // 0xd15 Return
	
Label_3350:
	CreateDialog(var_643_object); // 0xd16 Func
	var_651_int = 0; // 0xd18 PushV
	func_4852(var_651_int); // 0xd19 NEW_2
	SetNPCName(var_651_int); // 0xd1b ObjFunc
	var_652_int = 0; // 0xd1d PushV
	func_4850(var_652_int); // 0xd1e NEW_2
	SetNPCDescription(var_652_int); // 0xd20 ObjFunc
	var_653_string = ""; // 0xd22 PushV
	func_4854(var_653_string); // 0xd23 NEW_2
	SetPhoto(var_653_string); // 0xd25 ObjFunc
	var_654_string = ""; // 0xd27 PushV
	func_4856(var_654_string); // 0xd28 NEW_2
	SetPhoto2(var_654_string); // 0xd2a ObjFunc
	var_655_int = 0; // 0xd2c PushV
	func_5759(var_655_int); // 0xd2d NEW_2
	SetPlayerName(var_655_int); // 0xd2f ObjFunc
	var_645_int = -1; // 0xd31 MovI
	IsOverrideActive(var_644_bool); // 0xd32 Func
	var_656_bool = var_644_bool; // 0xd34 Push
	if(var_656_bool == 0) goto Label_3384; // 0xd35 JumpB
	var_636_int = -2; // 0xd36 MovI
	return 8; // 0xd37 Return
	
Label_3384:
	DoDialog(var_643_object); // 0xd38 Func
	var_657_bool = 0; var_658_object = Obj(); // 0xd3a PushV
	var_659_object = Obj(); // 0xd3b PushV
	func_4713(var_659_object); // 0xd3c NEW_2
	var_658_object = var_659_object; // 0xd3d Mov
	func_4522(var_657_bool, var_658_object); // 0xd3f NEW_2
	var_660_object = Obj(); var_661_object = Obj(); // 0xd41 PushV
	var_660_object = var_637_object; // 0xd42 Mov
	var_661_object = var_643_object; // 0xd43 Mov
	TaskCall(9); // 0xd44 TaskCall
	func_3420(var_662_object, var_663_object, var_664_string, var_665_bool, var_660_object, var_661_object); // 0xd45 NEW_2
	TaskReturn(); // 0xd46 TaskReturn
	IsDialogEnd(var_646_bool); // 0xd48 ObjFunc
	
Label_3402:
	var_732_bool = var_646_bool == 0; // 0xd4a Not
	if(var_732_bool == 0) goto Label_3409; // 0xd4b JumpB
	sync(); // 0xd4c Func
	IsDialogEnd(var_646_bool); // 0xd4e ObjFunc
	goto Label_3402; // 0xd50 Jump
	
Label_3409:
	var_733_object = Obj(); // 0xd51 PushV
	var_733_object = var_637_object; // 0xd52 Mov
	func_4504(); // 0xd53 NEW_2
	StopDialog(var_643_object); // 0xd55 Func
	GetReturnValue(var_645_int); // 0xd57 ObjFunc
	var_636_int = var_645_int; // 0xd59 Mov
	return 8; // 0xd5a Return
}


func_5388(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0x150d PushV
	var_367_string = "ood1EvaIntro2"; // 0x150e MovS
	func_4729(var_366_int, var_367_string); // 0x150f NEW_2
	var_368_int = 0; // 0x1511 PushI
	var_369_bool = var_366_int == var_368_int; // 0x1512 Eq
	if(var_369_bool == 0) goto Label_5398; // 0x1513 JumpB
	var_364_bool = 1; // 0x1514 MovB
	return 0; // 0x1515 Return
	
Label_5398:
	var_364_bool = 0; // 0x1516 MovB
	return 0; // 0x1517 Return
}


func_5400(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0x1519 PushV
	var_472_string = "ood2Eva1"; // 0x151a MovS
	func_4729(var_471_int, var_472_string); // 0x151b NEW_2
	var_473_int = 0; // 0x151d PushI
	var_474_bool = var_471_int == var_473_int; // 0x151e Eq
	if(var_474_bool == 0) goto Label_5410; // 0x151f JumpB
	var_469_bool = 1; // 0x1520 MovB
	return 0; // 0x1521 Return
	
Label_5410:
	var_469_bool = 0; // 0x1522 MovB
	return 0; // 0x1523 Return
}


func_4896()
{
	var_260_string = "playsound"; // 0x1321 PushS
	var_261_string = "giveitem"; // 0x1322 PushS
	TriggerWorld(var_260_string, var_261_string); // 0x1323 Func
	return 0; // 0x1325 Return
}


func_5412(var_509_bool)
{
	var_511_int = 0; var_512_string = ""; // 0x1525 PushV
	var_512_string = "ood2Eva2"; // 0x1526 MovS
	func_4729(var_511_int, var_512_string); // 0x1527 NEW_2
	var_513_int = 0; // 0x1529 PushI
	var_514_bool = var_511_int == var_513_int; // 0x152a Eq
	if(var_514_bool == 0) goto Label_5422; // 0x152b JumpB
	var_509_bool = 1; // 0x152c MovB
	return 0; // 0x152d Return
	
Label_5422:
	var_509_bool = 0; // 0x152e MovB
	return 0; // 0x152f Return
}


func_4902(var_246_object)
{
	var_248_string = "gold_ring is given"; // 0x1327 PushS
	Trace(var_248_string); // 0x1328 Func
	var_249_object = Obj(); var_250_string = ""; var_251_int = 0; // 0x132a PushV
	var_249_object = var_246_object; // 0x132b Mov
	var_250_string = "gold_ring"; // 0x132c MovS
	var_251_int = 1; // 0x132d MovI
	func_4793(var_249_object, var_250_string, var_251_int); // 0x132e NEW_2
	return 0; // 0x1330 Return
}


func_4396(var_69_bool)
{
	var_69_bool = 1; // 0x112c MovB
	return 0; // 0x112d Return
}


func_4398()
{
	StopAnimation(); // 0x112e Func
	StopGroup0(); // 0x1130 Func
	return 0; // 0x1132 Return
}


func_5424(var_525_bool)
{
	var_527_int = 0; var_528_string = ""; // 0x1531 PushV
	var_528_string = "ood2Eva3"; // 0x1532 MovS
	func_4729(var_527_int, var_528_string); // 0x1533 NEW_2
	var_529_int = 0; // 0x1535 PushI
	var_530_bool = var_527_int == var_529_int; // 0x1536 Eq
	if(var_530_bool == 0) goto Label_5434; // 0x1537 JumpB
	var_525_bool = 1; // 0x1538 MovB
	return 0; // 0x1539 Return
	
Label_5434:
	var_525_bool = 0; // 0x153a MovB
	return 0; // 0x153b Return
}


func_4913()
{
	var_199_object = Obj(); var_200_object = Obj(); // 0x1331 PushV
	var_201_object = Obj(); // 0x1332 PushV
	func_5709(var_201_object); // 0x1333 NEW_2
	var_200_object = var_201_object; // 0x1334 Mov
	var_202_string = "d1q01EvaMapMarkMladVlad"; // 0x1336 PushS
	var_203_string = "pt_map_mladvlad"; // 0x1337 PushS
	var_204_int = 3; // 0x1338 PushI
	var_205_int = 518108; // 0x1339 PushI
	var_206_float = 0; // 0x133a PushV
	func_4806(var_206_float); // 0x133b NEW_2
	AddMark(var_202_string, var_203_string, var_204_int, var_205_int, var_206_float); // 0x133d ObjFunc
	return 2; // 0x133f Return
}


func_4403(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1133 PushV
	GetPosition(var_51_cvector); // 0x1134 Func
	GetPosition(var_52_cvector); // 0x1136 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x1138 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x1139 Or2
	return 6; // 0x113a Return
}


func_2359(var_2_object, var_483_string)
{
	var_484_bool = 0; // 0x938 PushV
	func_4858(var_484_bool); // 0x939 NEW_2
	var_485_bool = var_484_bool == 0; // 0x93b Not
	if(var_485_bool == 0) goto Label_2366; // 0x93c JumpB
	return 0; // 0x93d Return
	
Label_2366:
	var_486_bool = var_483_string == var_2_object; // 0x93e Eq
	if(var_486_bool == 0) goto Label_2369; // 0x93f JumpB
	return 0; // 0x940 Return
	
Label_2369:
	var_487_string = ""; var_488_bool = 0; // 0x941 PushV
	var_487_string = var_483_string; // 0x942 Mov
	var_489_string = ""; // 0x943 PushS
	var_490_bool = var_483_string == var_489_string; // 0x944 Eq
	if(var_490_bool == 0) goto Label_2376; // 0x945 JumpB
	var_488_bool = 0; // 0x946 MovB
	goto Label_2377; // 0x947 Jump
	
Label_2377:
	func_4676(var_487_string, var_488_bool); // 0x949 NEW_2
	var_2_object = var_483_string; // 0x94b TMov
	return 0; // 0x94c Return
	
Label_2376:
	var_488_bool = 1; // 0x948 MovB
}


func_4411(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x113b PushV
	GetPosition(var_44_cvector); // 0x113c Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x113e Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x113f PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x1140 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x1141 Func
	var_39_bool = var_46_bool; // 0x1143 Mov
	return 6; // 0x1144 Return
}


func_5436(var_541_bool)
{
	var_543_int = 0; var_544_string = ""; // 0x153d PushV
	var_544_string = "ood2Eva4"; // 0x153e MovS
	func_4729(var_543_int, var_544_string); // 0x153f NEW_2
	var_545_int = 0; // 0x1541 PushI
	var_546_bool = var_543_int == var_545_int; // 0x1542 Eq
	if(var_546_bool == 0) goto Label_5446; // 0x1543 JumpB
	var_541_bool = 1; // 0x1544 MovB
	return 0; // 0x1545 Return
	
Label_5446:
	var_541_bool = 0; // 0x1546 MovB
	return 0; // 0x1547 Return
}


func_4929()
{
	var_209_object = Obj(); var_210_string = ""; var_211_float = 0; // 0x1342 PushV
	var_212_object = Obj(); // 0x1343 PushV
	func_5709(var_212_object); // 0x1344 NEW_2
	var_209_object = var_212_object; // 0x1345 Mov
	var_210_string = "pt_map_station"; // 0x1347 MovS
	var_211_float = 2; // 0x1348 MovI
	func_5726(var_209_object, var_210_string, var_211_float); // 0x1349 NEW_2
	var_213_object = Obj(); // 0x134b PushV
	func_5709(var_213_object); // 0x134c NEW_2
	ShowMap(var_213_object); // 0x134e ObjFunc
	return 0; // 0x1350 Return
}


func_4421(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x1145 PushV
	GetPosition(var_38_cvector); // 0x1146 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x1148 PushV
	var_40_cvector = var_38_cvector; // 0x1149 Mov
	func_4411(var_39_bool, var_40_cvector); // 0x114a NEW_2
	var_35_bool = var_39_bool; // 0x114b Mov
	return 2; // 0x114d Return
}


func_5448(var_547_bool)
{
	var_549_int = 0; var_550_string = ""; // 0x1549 PushV
	var_550_string = "d2q02"; // 0x154a MovS
	func_4729(var_549_int, var_550_string); // 0x154b NEW_2
	var_551_int = 1000; // 0x154d PushI
	var_552_bool = var_549_int == var_551_int; // 0x154e Eq
	if(var_552_bool == 0) goto Label_5458; // 0x154f JumpB
	var_547_bool = 1; // 0x1550 MovB
	return 0; // 0x1551 Return
	
Label_5458:
	var_547_bool = 0; // 0x1552 MovB
	return 0; // 0x1553 Return
}


func_4430(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x114e PushV
	IsLoaded(var_33_bool); // 0x114f Func
	var_31_bool = var_33_bool; // 0x1151 Mov
	return 2; // 0x1152 Return
}


func_4945()
{
	var_218_string = "ood1Eva4"; // 0x1352 PushS
	var_219_int = 1; // 0x1353 PushI
	SetVariable(var_218_string, var_219_int); // 0x1354 Func
	return 0; // 0x1356 Return
}


func_4435(var_69_bool, var_71_float)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; // 0x1153 PushV
	GetPosition(var_82_cvector); // 0x1154 ObjFunc
	GetEyesHeight(var_81_float); // 0x1156 ObjFunc
	var_90_float = GetByIndex(var_82_cvector, 1); // 0x1158 PushE
	var_90_float = var_90_float + var_81_float; // 0x1159 Add2
	SetByIndex(var_82_cvector, 1) = var_90_float; // 0x115a PopE
	GetPosition(var_83_cvector); // 0x115b Func
	GetEyesHeight(var_81_float); // 0x115d Func
	var_91_float = GetByIndex(var_83_cvector, 1); // 0x115f PushE
	var_91_float = var_91_float + var_81_float; // 0x1160 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0x1161 PopE
	var_84_cvector = var_82_cvector - var_83_cvector; // 0x1162 Sub2
	var_92_float = GetByIndex(var_84_cvector, 1); // 0x1163 PushE
	var_92_float = 0; // 0x1164 MovI
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0x1165 PopE
	var_93_int = var_84_cvector | var_84_cvector; // 0x1166 Or
	var_94_float = sqrt(var_93_int); // 0x1167 Sqrt
	var_84_cvector = var_84_cvector / var_84_cvector; // 0x1168 Div2
	var_85_cvector = -var_84_cvector; // 0x1169 Neg2
	var_95_float = var_84_cvector * var_71_float; // 0x116a Mult
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0x116b PushV
	var_98_cvector = CVector(0.0, 1.0, 0.0); // 0x116c PushVec
	var_97_cvector = var_85_cvector ^ var_98_cvector; // 0x116d Xor2
	func_4719(var_96_cvector, var_97_cvector); // 0x116e NEW_2
	var_104_int = 25; // 0x1170 PushI
	var_105_float = var_96_cvector * var_104_int; // 0x1171 Mult
	var_106_int = var_95_float + var_105_float; // 0x1172 Add
	var_107_cvector = CVector(0.0, 10.0, 0.0); // 0x1173 PushVec
	var_86_cvector = var_106_int - var_107_cvector; // 0x1174 Sub2
	var_87_cvector = var_83_cvector + var_86_cvector; // 0x1175 Add2
	IsOverrideActive(var_88_bool); // 0x1176 Func
	var_108_bool = var_88_bool; // 0x1178 Push
	if(var_108_bool == 0) goto Label_4476; // 0x1179 JumpB
	var_69_bool = 0; // 0x117a MovB
	return 18; // 0x117b Return
	
Label_4476:
	StopWorld(); // 0x117c Func
	var_109_bool = 1; // 0x117e PushB
	CameraTransit(var_87_cvector, var_85_cvector, var_109_bool); // 0x117f Func
	var_110_float = GetByIndex(var_86_cvector, 0); // 0x1181 PushE
	var_111_float = GetByIndex(var_86_cvector, 2); // 0x1182 PushE
	Rotate(var_110_float, var_111_float); // 0x1183 Func
	var_112_bool = 0; // 0x1185 PushV
	func_4858(var_112_bool); // 0x1186 NEW_2
	if(var_112_bool == 0) goto Label_4490; // 0x1188 JumpB
	goto Label_4498; // 0x1189 Jump
	
Label_4498:
	CameraWaitForPlayFinish(); // 0x1192 Func
	ResumeWorld(); // 0x1194 Func
	var_69_bool = 1; // 0x1196 MovB
	return 18; // 0x1197 Return
	
Label_4490:
	var_113_string = "head"; // 0x118a PushS
	HasAnimationTrack(var_89_bool, var_113_string); // 0x118b Func
	var_114_bool = var_89_bool; // 0x118d Push
	if(var_114_bool == 0) goto Label_4498; // 0x118e JumpB
	var_115_string = "head"; // 0x118f PushS
	LookAsyncCamera(var_115_string); // 0x1190 Func
}


func_5460(var_515_bool)
{
	var_517_int = 0; var_518_string = ""; // 0x1555 PushV
	var_518_string = "d2q02"; // 0x1556 MovS
	func_4729(var_517_int, var_518_string); // 0x1557 NEW_2
	var_519_int = 3; // 0x1559 PushI
	var_520_bool = var_517_int == var_519_int; // 0x155a Eq
	if(var_520_bool == 0) goto Label_5470; // 0x155b JumpB
	var_515_bool = 1; // 0x155c MovB
	return 0; // 0x155d Return
	
Label_5470:
	var_515_bool = 0; // 0x155e MovB
	return 0; // 0x155f Return
}


func_4951(var_222_object)
{
	var_224_string = "bracelet is given"; // 0x1358 PushS
	Trace(var_224_string); // 0x1359 Func
	var_225_object = Obj(); var_226_string = ""; var_227_int = 0; // 0x135b PushV
	var_225_object = var_222_object; // 0x135c Mov
	var_226_string = "bracelet"; // 0x135d MovS
	var_227_int = 1; // 0x135e MovI
	func_4793(var_225_object, var_226_string, var_227_int); // 0x135f NEW_2
	return 0; // 0x1361 Return
}


func_3420(var_0_object, var_1_object, var_2_object, var_3_string, var_660_object, var_661_object)
{
	var_0_object = var_661_object; // 0xd5d TMov
	var_1_object = var_660_object; // 0xd5e TMov
	var_3_string = 0; // 0xd5f TMovB
	var_666_int = 1; // 0xd60 PushI
	if(var_666_int == 0) goto Label_3508; // 0xd61 JumpB
	var_667_string = ""; // 0xd62 PushV
	var_667_string = "Neutral"; // 0xd63 MovS
	func_3538(var_661_object, var_667_string); // 0xd64 NEW_2
	var_675_int = 511255; // 0xd66 PushI
	SetMessage(var_675_int); // 0xd67 TObjFunc
	ClearReplies(); // 0xd69 TObjFunc
	var_676_bool = 0; // 0xd6b PushV
	var_676_bool = 1; // 0xd6c MovB
	var_677_bool = 0; // 0xd6d PushV
	var_677_bool = 1; // 0xd6e MovB
	var_678_bool = 0; // 0xd6f PushV
	var_678_bool = 0; // 0xd70 MovB
	var_679_bool = 0; var_680_object = Obj(); // 0xd71 PushV
	var_680_object = var_1_object; // 0xd72 MovT
	func_5592(var_680_object); // 0xd73 NEW_2
	if(var_679_bool == 0) goto Label_3452; // 0xd75 JumpB
	var_685_bool = 0; var_686_object = Obj(); // 0xd76 PushV
	var_686_object = var_1_object; // 0xd77 MovT
	func_5520(var_686_object); // 0xd78 NEW_2
	if(var_685_bool == 0) goto Label_3452; // 0xd7a JumpB
	var_678_bool = 1; // 0xd7b MovB
	
Label_3452:
	if(var_678_bool == 0) goto Label_3468; // 0xd7c JumpB
	var_691_bool = 0; // 0xd7d PushV
	var_691_bool = 0; // 0xd7e MovB
	var_692_bool = 0; var_693_object = Obj(); // 0xd7f PushV
	var_693_object = var_1_object; // 0xd80 MovT
	func_5544(var_693_object); // 0xd81 NEW_2
	if(var_692_bool == 0) goto Label_3466; // 0xd83 JumpB
	var_698_bool = 0; var_699_object = Obj(); // 0xd84 PushV
	var_699_object = var_1_object; // 0xd85 MovT
	func_5592(var_699_object); // 0xd86 NEW_2
	if(var_698_bool == 0) goto Label_3466; // 0xd88 JumpB
	var_691_bool = 1; // 0xd89 MovB
	
Label_3466:
	if(var_691_bool == 0) goto Label_3468; // 0xd8a JumpB
	var_677_bool = 0; // 0xd8b MovB
	
Label_3468:
	if(var_677_bool == 0) goto Label_3484; // 0xd8c JumpB
	var_700_bool = 0; // 0xd8d PushV
	var_700_bool = 0; // 0xd8e MovB
	var_701_bool = 0; var_702_object = Obj(); // 0xd8f PushV
	var_702_object = var_1_object; // 0xd90 MovT
	func_5532(var_702_object); // 0xd91 NEW_2
	if(var_701_bool == 0) goto Label_3482; // 0xd93 JumpB
	var_707_bool = 0; var_708_object = Obj(); // 0xd94 PushV
	var_708_object = var_1_object; // 0xd95 MovT
	func_5592(var_708_object); // 0xd96 NEW_2
	if(var_707_bool == 0) goto Label_3482; // 0xd98 JumpB
	var_700_bool = 1; // 0xd99 MovB
	
Label_3482:
	if(var_700_bool == 0) goto Label_3484; // 0xd9a JumpB
	var_676_bool = 0; // 0xd9b MovB
	
Label_3484:
	if(var_676_bool == 0) goto Label_3490; // 0xd9c JumpB
	var_709_int = 511257; // 0xd9d PushI
	var_710_int = 12448; // 0xd9e PushI
	var_711_int = 12447; // 0xd9f PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0xda0 TObjFunc
	
Label_3490:
	var_712_bool = 0; var_713_object = Obj(); // 0xda2 PushV
	var_713_object = var_1_object; // 0xda3 MovT
	func_5376(var_713_object); // 0xda4 NEW_2
	if(var_712_bool == 0) goto Label_3500; // 0xda6 JumpB
	var_718_int = 535125; // 0xda7 PushI
	var_719_int = 36785; // 0xda8 PushI
	var_720_int = 36784; // 0xda9 PushI
	AddReply(var_718_int, var_719_int, var_720_int); // 0xdaa TObjFunc
	
Label_3500:
	var_721_int = 511256; // 0xdac PushI
	var_722_int = -1; // 0xdad PushI
	var_723_int = 12446; // 0xdae PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0xdaf TObjFunc
	goto Label_3508; // 0xdb1 Jump
	
Label_3508:
	var_724_bool = 0; // 0xdb4 PushV
	func_4858(var_724_bool); // 0xdb5 NEW_2
	if(var_724_bool == 0) goto Label_3523; // 0xdb7 JumpB
	
Label_3512:
	lshWaitForAnimEnd(); // 0xdb8 Func
	var_725_string = var_3_string; // 0xdba PushT
	if(var_725_string == 0) goto Label_3517; // 0xdbb JumpB
	goto Label_3522; // 0xdbc Jump
	
Label_3522:
	goto Label_3537; // 0xdc2 Jump
	
Label_3537:
	return 0; // 0xdd1 Return
	
Label_3517:
	var_726_string = ""; // 0xdbd PushV
	var_726_string = var_2_object; // 0xdbe MovT
	func_4660(var_726_string); // 0xdbf NEW_2
	goto Label_3512; // 0xdc1 Jump
	
Label_3523:
	var_727_string = "all"; // 0xdc3 PushS
	var_728_string = "idle"; // 0xdc4 PushS
	PlayAnimation(var_727_string, var_728_string); // 0xdc5 Func
	
Label_3527:
	WaitForAnimEnd(); // 0xdc7 Func
	var_729_string = var_3_string; // 0xdc9 PushT
	if(var_729_string == 0) goto Label_3532; // 0xdca JumpB
	goto Label_3537; // 0xdcb Jump
	
Label_3532:
	var_730_string = "all"; // 0xdcc PushS
	var_731_string = "idle"; // 0xdcd PushS
	PlayAnimation(var_730_string, var_731_string); // 0xdce Func
	goto Label_3527; // 0xdd0 Jump
}


func_5472(var_531_bool)
{
	var_533_int = 0; var_534_string = ""; // 0x1561 PushV
	var_534_string = "d2q02"; // 0x1562 MovS
	func_4729(var_533_int, var_534_string); // 0x1563 NEW_2
	var_535_int = 5; // 0x1565 PushI
	var_536_bool = var_533_int == var_535_int; // 0x1566 Eq
	if(var_536_bool == 0) goto Label_5482; // 0x1567 JumpB
	var_531_bool = 1; // 0x1568 MovB
	return 0; // 0x1569 Return
	
Label_5482:
	var_531_bool = 0; // 0x156a MovB
	return 0; // 0x156b Return
}


func_4962(var_252_object)
{
	var_254_string = "ear_ring is given"; // 0x1363 PushS
	Trace(var_254_string); // 0x1364 Func
	var_255_object = Obj(); var_256_string = ""; var_257_int = 0; // 0x1366 PushV
	var_255_object = var_252_object; // 0x1367 Mov
	var_256_string = "ear_ring"; // 0x1368 MovS
	var_257_int = 1; // 0x1369 MovI
	func_4793(var_255_object, var_256_string, var_257_int); // 0x136a NEW_2
	return 0; // 0x136c Return
}


func_3944(var_0_object, var_817_int, var_818_object)
{
	var_820_object = Obj(); var_821_bool = 0; var_822_int = 0; var_823_bool = 0; var_824_object = Obj(); var_825_bool = 0; var_826_int = 0; var_827_bool = 0; // 0xf68 PushV
	var_0_object = var_818_object; // 0xf69 TMov
	var_828_bool = 0; var_829_object = Obj(); var_830_float = 0; // 0xf6a PushV
	var_829_object = var_818_object; // 0xf6b Mov
	var_830_float = 70.0; // 0xf6c MovF
	func_4435(var_829_object, var_830_float); // 0xf6d NEW_2
	var_831_bool = var_828_bool == 0; // 0xf6f Not
	if(var_831_bool == 0) goto Label_3955; // 0xf70 JumpB
	var_817_int = -2; // 0xf71 MovI
	return 8; // 0xf72 Return
	
Label_3955:
	CreateDialog(var_824_object); // 0xf73 Func
	var_832_int = 0; // 0xf75 PushV
	func_4852(var_832_int); // 0xf76 NEW_2
	SetNPCName(var_832_int); // 0xf78 ObjFunc
	var_833_int = 0; // 0xf7a PushV
	func_4850(var_833_int); // 0xf7b NEW_2
	SetNPCDescription(var_833_int); // 0xf7d ObjFunc
	var_834_string = ""; // 0xf7f PushV
	func_4854(var_834_string); // 0xf80 NEW_2
	SetPhoto(var_834_string); // 0xf82 ObjFunc
	var_835_string = ""; // 0xf84 PushV
	func_4856(var_835_string); // 0xf85 NEW_2
	SetPhoto2(var_835_string); // 0xf87 ObjFunc
	var_836_int = 0; // 0xf89 PushV
	func_5759(var_836_int); // 0xf8a NEW_2
	SetPlayerName(var_836_int); // 0xf8c ObjFunc
	var_826_int = -1; // 0xf8e MovI
	IsOverrideActive(var_825_bool); // 0xf8f Func
	var_837_bool = var_825_bool; // 0xf91 Push
	if(var_837_bool == 0) goto Label_3989; // 0xf92 JumpB
	var_817_int = -2; // 0xf93 MovI
	return 8; // 0xf94 Return
	
Label_3989:
	DoDialog(var_824_object); // 0xf95 Func
	var_838_bool = 0; var_839_object = Obj(); // 0xf97 PushV
	var_840_object = Obj(); // 0xf98 PushV
	func_4713(var_840_object); // 0xf99 NEW_2
	var_839_object = var_840_object; // 0xf9a Mov
	func_4522(var_838_bool, var_839_object); // 0xf9c NEW_2
	var_841_object = Obj(); var_842_object = Obj(); // 0xf9e PushV
	var_841_object = var_818_object; // 0xf9f Mov
	var_842_object = var_824_object; // 0xfa0 Mov
	TaskCall(11); // 0xfa1 TaskCall
	func_4025(var_843_object, var_844_object, var_845_string, var_846_bool, var_841_object, var_842_object); // 0xfa2 NEW_2
	TaskReturn(); // 0xfa3 TaskReturn
	IsDialogEnd(var_827_bool); // 0xfa5 ObjFunc
	
Label_4007:
	var_871_bool = var_827_bool == 0; // 0xfa7 Not
	if(var_871_bool == 0) goto Label_4014; // 0xfa8 JumpB
	sync(); // 0xfa9 Func
	IsDialogEnd(var_827_bool); // 0xfab ObjFunc
	goto Label_4007; // 0xfad Jump
	
Label_4014:
	var_872_object = Obj(); // 0xfae PushV
	var_872_object = var_818_object; // 0xfaf Mov
	func_4504(); // 0xfb0 NEW_2
	StopDialog(var_824_object); // 0xfb2 Func
	GetReturnValue(var_826_int); // 0xfb4 ObjFunc
	var_817_int = var_826_int; // 0xfb6 Mov
	return 8; // 0xfb7 Return
}


func_5484(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0x156d PushV
	var_335_string = "d1q01"; // 0x156e MovS
	func_4729(var_334_int, var_335_string); // 0x156f NEW_2
	var_336_int = 1; // 0x1571 PushI
	var_337_bool = var_334_int == var_336_int; // 0x1572 Eq
	if(var_337_bool == 0) goto Label_5494; // 0x1573 JumpB
	var_332_bool = 1; // 0x1574 MovB
	return 0; // 0x1575 Return
	
Label_5494:
	var_332_bool = 0; // 0x1576 MovB
	return 0; // 0x1577 Return
}


func_4973()
{
	var_481_string = "d2EvaVisit"; // 0x136e PushS
	var_482_int = 1; // 0x136f PushI
	SetVariable(var_481_string, var_482_int); // 0x1370 Func
	return 0; // 0x1372 Return
}


func_4979()
{
	var_79_object = Obj(); var_80_string = ""; var_81_float = 0; // 0x1374 PushV
	var_82_object = Obj(); // 0x1375 PushV
	func_5709(var_82_object); // 0x1376 NEW_2
	var_79_object = var_82_object; // 0x1377 Mov
	var_80_string = "pt_map_georg"; // 0x1379 MovS
	var_81_float = 2; // 0x137a MovI
	func_5726(var_79_object, var_80_string, var_81_float); // 0x137b NEW_2
	var_102_object = Obj(); // 0x137d PushV
	func_5709(var_102_object); // 0x137e NEW_2
	ShowMap(var_102_object); // 0x1380 ObjFunc
	return 0; // 0x1382 Return
}


func_5496(var_556_bool)
{
	var_558_int = 0; var_559_string = ""; // 0x1579 PushV
	var_559_string = "d2q02"; // 0x157a MovS
	func_4729(var_558_int, var_559_string); // 0x157b NEW_2
	var_560_int = 0; // 0x157d PushI
	var_561_bool = var_558_int == var_560_int; // 0x157e Eq
	if(var_561_bool == 0) goto Label_5506; // 0x157f JumpB
	var_556_bool = 1; // 0x1580 MovB
	return 0; // 0x1581 Return
	
Label_5506:
	var_556_bool = 0; // 0x1582 MovB
	return 0; // 0x1583 Return
}


func_4995()
{
	var_187_string = "ood1Eva5"; // 0x1384 PushS
	var_188_int = 1; // 0x1385 PushI
	SetVariable(var_187_string, var_188_int); // 0x1386 Func
	return 0; // 0x1388 Return
}


func_5508(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x1585 PushV
	var_157_string = "d4q01"; // 0x1586 MovS
	func_4729(var_156_int, var_157_string); // 0x1587 NEW_2
	var_158_int = 1; // 0x1589 PushI
	var_159_bool = var_156_int == var_158_int; // 0x158a Eq
	if(var_159_bool == 0) goto Label_5518; // 0x158b JumpB
	var_154_bool = 1; // 0x158c MovB
	return 0; // 0x158d Return
	
Label_5518:
	var_154_bool = 0; // 0x158e MovB
	return 0; // 0x158f Return
}


func_5001()
{
	var_181_string = "ood1Eva6"; // 0x138a PushS
	var_182_int = 1; // 0x138b PushI
	SetVariable(var_181_string, var_182_int); // 0x138c Func
	return 0; // 0x138e Return
}


func_5007()
{
	var_266_string = "ood1Eva7"; // 0x1390 PushS
	var_267_int = 1; // 0x1391 PushI
	SetVariable(var_266_string, var_267_int); // 0x1392 Func
	return 0; // 0x1394 Return
}


func_5520(var_685_bool)
{
	var_687_int = 0; var_688_string = ""; // 0x1591 PushV
	var_688_string = "d4q02"; // 0x1592 MovS
	func_4729(var_687_int, var_688_string); // 0x1593 NEW_2
	var_689_int = 1; // 0x1595 PushI
	var_690_bool = var_687_int == var_689_int; // 0x1596 Eq
	if(var_690_bool == 0) goto Label_5530; // 0x1597 JumpB
	var_685_bool = 1; // 0x1598 MovB
	return 0; // 0x1599 Return
	
Label_5530:
	var_685_bool = 0; // 0x159a MovB
	return 0; // 0x159b Return
}


func_5013()
{
	var_45_string = "ood4Eva2"; // 0x1396 PushS
	var_46_int = 1; // 0x1397 PushI
	SetVariable(var_45_string, var_46_int); // 0x1398 Func
	return 0; // 0x139a Return
}


func_406(var_0_object, var_58_int, var_59_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; // 0x196 PushV
	var_0_object = var_59_object; // 0x197 TMov
	var_69_bool = 0; var_70_object = Obj(); var_71_float = 0; // 0x198 PushV
	var_70_object = var_59_object; // 0x199 Mov
	var_71_float = 70.0; // 0x19a MovF
	func_4435(var_70_object, var_71_float); // 0x19b NEW_2
	var_116_bool = var_69_bool == 0; // 0x19d Not
	if(var_116_bool == 0) goto Label_417; // 0x19e JumpB
	var_58_int = -2; // 0x19f MovI
	return 8; // 0x1a0 Return
	
Label_417:
	CreateDialog(var_65_object); // 0x1a1 Func
	var_117_int = 0; // 0x1a3 PushV
	func_4852(var_117_int); // 0x1a4 NEW_2
	SetNPCName(var_117_int); // 0x1a6 ObjFunc
	var_118_int = 0; // 0x1a8 PushV
	func_4850(var_118_int); // 0x1a9 NEW_2
	SetNPCDescription(var_118_int); // 0x1ab ObjFunc
	var_119_string = ""; // 0x1ad PushV
	func_4854(var_119_string); // 0x1ae NEW_2
	SetPhoto(var_119_string); // 0x1b0 ObjFunc
	var_120_string = ""; // 0x1b2 PushV
	func_4856(var_120_string); // 0x1b3 NEW_2
	SetPhoto2(var_120_string); // 0x1b5 ObjFunc
	var_121_int = 0; // 0x1b7 PushV
	func_5759(var_121_int); // 0x1b8 NEW_2
	SetPlayerName(var_121_int); // 0x1ba ObjFunc
	var_67_int = -1; // 0x1bc MovI
	IsOverrideActive(var_66_bool); // 0x1bd Func
	var_129_bool = var_66_bool; // 0x1bf Push
	if(var_129_bool == 0) goto Label_451; // 0x1c0 JumpB
	var_58_int = -2; // 0x1c1 MovI
	return 8; // 0x1c2 Return
	
Label_451:
	DoDialog(var_65_object); // 0x1c3 Func
	var_130_bool = 0; var_131_object = Obj(); // 0x1c5 PushV
	var_132_object = Obj(); // 0x1c6 PushV
	func_4713(var_132_object); // 0x1c7 NEW_2
	var_131_object = var_132_object; // 0x1c8 Mov
	func_4522(var_130_bool, var_131_object); // 0x1ca NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x1cc PushV
	var_220_object = var_59_object; // 0x1cd Mov
	var_221_object = var_65_object; // 0x1ce Mov
	TaskCall(3); // 0x1cf TaskCall
	func_487(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object); // 0x1d0 NEW_2
	TaskReturn(); // 0x1d1 TaskReturn
	IsDialogEnd(var_68_bool); // 0x1d3 ObjFunc
	
Label_469:
	var_427_bool = var_68_bool == 0; // 0x1d5 Not
	if(var_427_bool == 0) goto Label_476; // 0x1d6 JumpB
	sync(); // 0x1d7 Func
	IsDialogEnd(var_68_bool); // 0x1d9 ObjFunc
	goto Label_469; // 0x1db Jump
	
Label_476:
	var_428_object = Obj(); // 0x1dc PushV
	var_428_object = var_59_object; // 0x1dd Mov
	func_4504(); // 0x1de NEW_2
	StopDialog(var_65_object); // 0x1e0 Func
	GetReturnValue(var_67_int); // 0x1e2 ObjFunc
	var_58_int = var_67_int; // 0x1e4 Mov
	return 8; // 0x1e5 Return
}


func_4504()
{
	var_429_bool = 0; var_430_bool = 0; // 0x1198 PushV
	var_431_bool = 1; // 0x1199 PushB
	CameraSwitchToNormal(var_431_bool); // 0x119a Func
	var_432_bool = 0; // 0x119c PushV
	func_4858(var_432_bool); // 0x119d NEW_2
	if(var_432_bool == 0) goto Label_4513; // 0x119f JumpB
	goto Label_4521; // 0x11a0 Jump
	
Label_4521:
	return 2; // 0x11a9 Return
	
Label_4513:
	var_433_string = "head"; // 0x11a1 PushS
	HasAnimationTrack(var_430_bool, var_433_string); // 0x11a2 Func
	var_434_bool = var_430_bool; // 0x11a4 Push
	if(var_434_bool == 0) goto Label_4521; // 0x11a5 JumpB
	var_435_string = "head"; // 0x11a6 PushS
	UnlookAsync(var_435_string); // 0x11a7 Func
}


func_5019()
{
	var_309_string = "KnowUzly"; // 0x139c PushS
	var_310_int = 1; // 0x139d PushI
	SetVariable(var_309_string, var_310_int); // 0x139e Func
	return 0; // 0x13a0 Return
}


func_5532(var_701_bool)
{
	var_703_int = 0; var_704_string = ""; // 0x159d PushV
	var_704_string = "d4q02LaraGivesMedcine"; // 0x159e MovS
	func_4729(var_703_int, var_704_string); // 0x159f NEW_2
	var_705_int = 1; // 0x15a1 PushI
	var_706_bool = var_703_int == var_705_int; // 0x15a2 Eq
	if(var_706_bool == 0) goto Label_5542; // 0x15a3 JumpB
	var_701_bool = 1; // 0x15a4 MovB
	return 0; // 0x15a5 Return
	
Label_5542:
	var_701_bool = 0; // 0x15a6 MovB
	return 0; // 0x15a7 Return
}


func_5025()
{
	var_477_string = "ood2Eva1"; // 0x13a2 PushS
	var_478_int = 1; // 0x13a3 PushI
	SetVariable(var_477_string, var_478_int); // 0x13a4 Func
	return 0; // 0x13a6 Return
}


func_5031()
{
	var_132_string = "ood2Eva2"; // 0x13a8 PushS
	var_133_int = 1; // 0x13a9 PushI
	SetVariable(var_132_string, var_133_int); // 0x13aa Func
	return 0; // 0x13ac Return
}


func_5544(var_692_bool)
{
	var_694_int = 0; var_695_string = ""; // 0x15a9 PushV
	var_695_string = "d4q02JuliaGivesMedcine"; // 0x15aa MovS
	func_4729(var_694_int, var_695_string); // 0x15ab NEW_2
	var_696_int = 1; // 0x15ad PushI
	var_697_bool = var_694_int == var_696_int; // 0x15ae Eq
	if(var_697_bool == 0) goto Label_5554; // 0x15af JumpB
	var_692_bool = 1; // 0x15b0 MovB
	return 0; // 0x15b1 Return
	
Label_5554:
	var_692_bool = 0; // 0x15b2 MovB
	return 0; // 0x15b3 Return
}


func_4522(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0; // 0x11aa PushV
	var_139_string = "voice_common"; // 0x11ab PushS
	GetVariable(var_139_string, var_137_int); // 0x11ac Func
	var_140_int = var_137_int; // 0x11ae Push
	if(var_140_int == 0) goto Label_4560; // 0x11af JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x11b0 PushV
	var_142_object = var_131_object; // 0x11b1 Mov
	func_4580(var_142_object); // 0x11b2 NEW_2
	var_171_bool = var_141_bool == 0; // 0x11b4 Not
	if(var_171_bool == 0) goto Label_4542; // 0x11b5 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x11b6 PushV
	var_173_object = var_131_object; // 0x11b7 Mov
	func_4617(var_173_object); // 0x11b8 NEW_2
	var_202_bool = var_172_bool == 0; // 0x11ba Not
	if(var_202_bool == 0) goto Label_4542; // 0x11bb JumpB
	var_130_bool = 0; // 0x11bc MovB
	return 4; // 0x11bd Return
	
Label_4542:
	var_203_int = 2; // 0x11be PushI
	irand(var_138_int, var_203_int); // 0x11bf Func
	var_204_int = var_138_int; // 0x11c1 Push
	if(var_204_int == 0) goto Label_4555; // 0x11c2 JumpB
	var_205_string = "voice_common"; // 0x11c3 PushS
	var_206_int = 1; // 0x11c4 PushI
	var_207_int = var_137_int + var_206_int; // 0x11c5 Add
	var_208_int = 3; // 0x11c6 PushI
	var_209_int = var_207_int / var_208_int; // 0x11c7 Mod
	SetVariable(var_205_string, var_209_int); // 0x11c8 Func
	goto Label_4559; // 0x11ca Jump
	
Label_4559:
	goto Label_4578; // 0x11cf Jump
	
Label_4578:
	var_130_bool = 1; // 0x11e2 MovB
	return 4; // 0x11e3 Return
	
Label_4555:
	var_210_string = "voice_common"; // 0x11cb PushS
	var_211_int = 0; // 0x11cc PushI
	SetVariable(var_210_string, var_211_int); // 0x11cd Func
	
Label_4560:
	var_212_bool = 0; var_213_object = Obj(); // 0x11d0 PushV
	var_213_object = var_131_object; // 0x11d1 Mov
	func_4617(var_213_object); // 0x11d2 NEW_2
	var_214_bool = var_212_bool == 0; // 0x11d4 Not
	if(var_214_bool == 0) goto Label_4574; // 0x11d5 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x11d6 PushV
	var_216_object = var_131_object; // 0x11d7 Mov
	func_4580(var_216_object); // 0x11d8 NEW_2
	var_217_bool = var_215_bool == 0; // 0x11da Not
	if(var_217_bool == 0) goto Label_4574; // 0x11db JumpB
	var_130_bool = 0; // 0x11dc MovB
	return 4; // 0x11dd Return
	
Label_4574:
	var_218_string = "voice_common"; // 0x11de PushS
	var_219_int = 1; // 0x11df PushI
	SetVariable(var_218_string, var_219_int); // 0x11e0 Func
}


func_5037()
{
	var_159_string = "ood2Eva3"; // 0x13ae PushS
	var_160_int = 1; // 0x13af PushI
	SetVariable(var_159_string, var_160_int); // 0x13b0 Func
	return 0; // 0x13b2 Return
}


func_5043()
{
	var_165_string = "ood2Eva4"; // 0x13b4 PushS
	var_166_int = 1; // 0x13b5 PushI
	SetVariable(var_165_string, var_166_int); // 0x13b6 Func
	return 0; // 0x13b8 Return
}


func_5556(var_768_bool)
{
	var_770_int = 0; var_771_string = ""; // 0x15b5 PushV
	var_771_string = "d6q01"; // 0x15b6 MovS
	func_4729(var_770_int, var_771_string); // 0x15b7 NEW_2
	var_772_int = 1; // 0x15b9 PushI
	var_773_bool = var_770_int == var_772_int; // 0x15ba Eq
	if(var_773_bool == 0) goto Label_5566; // 0x15bb JumpB
	var_768_bool = 1; // 0x15bc MovB
	return 0; // 0x15bd Return
	
Label_5566:
	var_768_bool = 0; // 0x15be MovB
	return 0; // 0x15bf Return
}


func_2998(var_0_object, var_572_int, var_573_object)
{
	var_575_object = Obj(); var_576_bool = 0; var_577_int = 0; var_578_bool = 0; var_579_object = Obj(); var_580_bool = 0; var_581_int = 0; var_582_bool = 0; // 0xbb6 PushV
	var_0_object = var_573_object; // 0xbb7 TMov
	var_583_bool = 0; var_584_object = Obj(); var_585_float = 0; // 0xbb8 PushV
	var_584_object = var_573_object; // 0xbb9 Mov
	var_585_float = 70.0; // 0xbba MovF
	func_4435(var_584_object, var_585_float); // 0xbbb NEW_2
	var_586_bool = var_583_bool == 0; // 0xbbd Not
	if(var_586_bool == 0) goto Label_3009; // 0xbbe JumpB
	var_572_int = -2; // 0xbbf MovI
	return 8; // 0xbc0 Return
	
Label_3009:
	CreateDialog(var_579_object); // 0xbc1 Func
	var_587_int = 0; // 0xbc3 PushV
	func_4852(var_587_int); // 0xbc4 NEW_2
	SetNPCName(var_587_int); // 0xbc6 ObjFunc
	var_588_int = 0; // 0xbc8 PushV
	func_4850(var_588_int); // 0xbc9 NEW_2
	SetNPCDescription(var_588_int); // 0xbcb ObjFunc
	var_589_string = ""; // 0xbcd PushV
	func_4854(var_589_string); // 0xbce NEW_2
	SetPhoto(var_589_string); // 0xbd0 ObjFunc
	var_590_string = ""; // 0xbd2 PushV
	func_4856(var_590_string); // 0xbd3 NEW_2
	SetPhoto2(var_590_string); // 0xbd5 ObjFunc
	var_591_int = 0; // 0xbd7 PushV
	func_5759(var_591_int); // 0xbd8 NEW_2
	SetPlayerName(var_591_int); // 0xbda ObjFunc
	var_581_int = -1; // 0xbdc MovI
	IsOverrideActive(var_580_bool); // 0xbdd Func
	var_592_bool = var_580_bool; // 0xbdf Push
	if(var_592_bool == 0) goto Label_3043; // 0xbe0 JumpB
	var_572_int = -2; // 0xbe1 MovI
	return 8; // 0xbe2 Return
	
Label_3043:
	DoDialog(var_579_object); // 0xbe3 Func
	var_593_bool = 0; var_594_object = Obj(); // 0xbe5 PushV
	var_595_object = Obj(); // 0xbe6 PushV
	func_4713(var_595_object); // 0xbe7 NEW_2
	var_594_object = var_595_object; // 0xbe8 Mov
	func_4522(var_593_bool, var_594_object); // 0xbea NEW_2
	var_596_object = Obj(); var_597_object = Obj(); // 0xbec PushV
	var_596_object = var_573_object; // 0xbed Mov
	var_597_object = var_579_object; // 0xbee Mov
	TaskCall(7); // 0xbef TaskCall
	func_3079(var_598_object, var_599_object, var_600_string, var_601_bool, var_596_object, var_597_object); // 0xbf0 NEW_2
	TaskReturn(); // 0xbf1 TaskReturn
	IsDialogEnd(var_582_bool); // 0xbf3 ObjFunc
	
Label_3061:
	var_632_bool = var_582_bool == 0; // 0xbf5 Not
	if(var_632_bool == 0) goto Label_3068; // 0xbf6 JumpB
	sync(); // 0xbf7 Func
	IsDialogEnd(var_582_bool); // 0xbf9 ObjFunc
	goto Label_3061; // 0xbfb Jump
	
Label_3068:
	var_633_object = Obj(); // 0xbfc PushV
	var_633_object = var_573_object; // 0xbfd Mov
	func_4504(); // 0xbfe NEW_2
	StopDialog(var_579_object); // 0xc00 Func
	GetReturnValue(var_581_int); // 0xc02 ObjFunc
	var_572_int = var_581_int; // 0xc04 Mov
	return 8; // 0xc05 Return
}


func_5049()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x13b9 PushV
	var_41_string = "d2q02"; // 0x13ba PushS
	var_42_int = 1; // 0x13bb PushI
	SetVariable(var_41_string, var_42_int); // 0x13bc Func
	var_43_object = Obj(); // 0x13be PushV
	func_5709(var_43_object); // 0x13bf NEW_2
	var_40_object = var_43_object; // 0x13c0 Mov
	var_50_string = "d2q02EvaGotoAndrei"; // 0x13c2 PushS
	var_51_string = "pt_map_andrei"; // 0x13c3 PushS
	var_52_int = 0; // 0x13c4 PushI
	var_53_int = 515272; // 0x13c5 PushI
	var_54_float = 0; // 0x13c6 PushV
	func_4806(var_54_float); // 0x13c7 NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0x13c9 ObjFunc
	func_5642(); // 0x13cc NEW_2
	func_5655(); // 0x13cf NEW_2
	var_88_object = Obj(); var_89_string = ""; // 0x13d1 PushV
	var_89_string = "quest_d2_02"; // 0x13d2 MovS
	func_4734(var_88_object, var_89_string); // 0x13d3 NEW_2
	return 2; // 0x13d5 Return
}


func_4025(var_0_object, var_1_object, var_2_object, var_3_string, var_841_object, var_842_object)
{
	var_0_object = var_842_object; // 0xfba TMov
	var_1_object = var_841_object; // 0xfbb TMov
	var_3_string = 0; // 0xfbc TMovB
	var_847_int = 1; // 0xfbd PushI
	if(var_847_int == 0) goto Label_4053; // 0xfbe JumpB
	var_848_string = ""; // 0xfbf PushV
	var_848_string = "Neutral"; // 0xfc0 MovS
	func_4083(var_842_object, var_848_string); // 0xfc1 NEW_2
	var_856_int = 540548; // 0xfc3 PushI
	SetMessage(var_856_int); // 0xfc4 TObjFunc
	ClearReplies(); // 0xfc6 TObjFunc
	var_857_int = 540549; // 0xfc8 PushI
	var_858_int = -1; // 0xfc9 PushI
	var_859_int = 42558; // 0xfca PushI
	AddReply(var_857_int, var_858_int, var_859_int); // 0xfcb TObjFunc
	var_860_int = 540797; // 0xfcd PushI
	var_861_int = -1; // 0xfce PushI
	var_862_int = 42846; // 0xfcf PushI
	AddReply(var_860_int, var_861_int, var_862_int); // 0xfd0 TObjFunc
	goto Label_4053; // 0xfd2 Jump
	
Label_4053:
	var_863_bool = 0; // 0xfd5 PushV
	func_4858(var_863_bool); // 0xfd6 NEW_2
	if(var_863_bool == 0) goto Label_4068; // 0xfd8 JumpB
	
Label_4057:
	lshWaitForAnimEnd(); // 0xfd9 Func
	var_864_string = var_3_string; // 0xfdb PushT
	if(var_864_string == 0) goto Label_4062; // 0xfdc JumpB
	goto Label_4067; // 0xfdd Jump
	
Label_4067:
	goto Label_4082; // 0xfe3 Jump
	
Label_4082:
	return 0; // 0xff2 Return
	
Label_4062:
	var_865_string = ""; // 0xfde PushV
	var_865_string = var_2_object; // 0xfdf MovT
	func_4660(var_865_string); // 0xfe0 NEW_2
	goto Label_4057; // 0xfe2 Jump
	
Label_4068:
	var_866_string = "all"; // 0xfe4 PushS
	var_867_string = "idle"; // 0xfe5 PushS
	PlayAnimation(var_866_string, var_867_string); // 0xfe6 Func
	
Label_4072:
	WaitForAnimEnd(); // 0xfe8 Func
	var_868_string = var_3_string; // 0xfea PushT
	if(var_868_string == 0) goto Label_4077; // 0xfeb JumpB
	goto Label_4082; // 0xfec Jump
	
Label_4077:
	var_869_string = "all"; // 0xfed PushS
	var_870_string = "idle"; // 0xfee PushS
	PlayAnimation(var_869_string, var_870_string); // 0xfef Func
	goto Label_4072; // 0xff1 Jump
}


func_5568(var_774_bool)
{
	var_776_int = 0; var_777_string = ""; // 0x15c1 PushV
	var_777_string = "ood6Eva1"; // 0x15c2 MovS
	func_4729(var_776_int, var_777_string); // 0x15c3 NEW_2
	var_778_int = 0; // 0x15c5 PushI
	var_779_bool = var_776_int == var_778_int; // 0x15c6 Eq
	if(var_779_bool == 0) goto Label_5578; // 0x15c7 JumpB
	var_774_bool = 1; // 0x15c8 MovB
	return 0; // 0x15c9 Return
	
Label_5578:
	var_774_bool = 0; // 0x15ca MovB
	return 0; // 0x15cb Return
}


func_5580(var_612_bool)
{
	var_614_int = 0; var_615_string = ""; // 0x15cd PushV
	var_615_string = "ood3Eva1"; // 0x15ce MovS
	func_4729(var_614_int, var_615_string); // 0x15cf NEW_2
	var_616_int = 0; // 0x15d1 PushI
	var_617_bool = var_614_int == var_616_int; // 0x15d2 Eq
	if(var_617_bool == 0) goto Label_5590; // 0x15d3 JumpB
	var_612_bool = 1; // 0x15d4 MovB
	return 0; // 0x15d5 Return
	
Label_5590:
	var_612_bool = 0; // 0x15d6 MovB
	return 0; // 0x15d7 Return
}


func_3538(var_2_object, var_667_string)
{
	var_668_bool = 0; // 0xdd3 PushV
	func_4858(var_668_bool); // 0xdd4 NEW_2
	var_669_bool = var_668_bool == 0; // 0xdd6 Not
	if(var_669_bool == 0) goto Label_3545; // 0xdd7 JumpB
	return 0; // 0xdd8 Return
	
Label_3545:
	var_670_bool = var_667_string == var_2_object; // 0xdd9 Eq
	if(var_670_bool == 0) goto Label_3548; // 0xdda JumpB
	return 0; // 0xddb Return
	
Label_3548:
	var_671_string = ""; var_672_bool = 0; // 0xddc PushV
	var_671_string = var_667_string; // 0xddd Mov
	var_673_string = ""; // 0xdde PushS
	var_674_bool = var_667_string == var_673_string; // 0xddf Eq
	if(var_674_bool == 0) goto Label_3555; // 0xde0 JumpB
	var_672_bool = 0; // 0xde1 MovB
	goto Label_3556; // 0xde2 Jump
	
Label_3556:
	func_4676(var_671_string, var_672_bool); // 0xde4 NEW_2
	var_2_object = var_667_string; // 0xde6 TMov
	return 0; // 0xde7 Return
	
Label_3555:
	var_672_bool = 1; // 0xde3 MovB
}


func_5079()
{
	var_39_string = ""; var_40_bool = 0; // 0x13d8 PushV
	var_39_string = "icot_eva@door1"; // 0x13d9 MovS
	var_40_bool = 0; // 0x13da MovB
	func_4745(var_39_string, var_40_bool); // 0x13db NEW_2
	return 0; // 0x13dd Return
}


func_5592(var_679_bool)
{
	var_681_int = 0; var_682_string = ""; // 0x15d9 PushV
	var_682_string = "ood4Eva1"; // 0x15da MovS
	func_4729(var_681_int, var_682_string); // 0x15db NEW_2
	var_683_int = 0; // 0x15dd PushI
	var_684_bool = var_681_int == var_683_int; // 0x15de Eq
	if(var_684_bool == 0) goto Label_5602; // 0x15df JumpB
	var_679_bool = 1; // 0x15e0 MovB
	return 0; // 0x15e1 Return
	
Label_5602:
	var_679_bool = 0; // 0x15e2 MovB
	return 0; // 0x15e3 Return
}


func_5086()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x13de PushV
	var_53_object = Obj(); // 0x13df PushV
	func_5709(var_53_object); // 0x13e0 NEW_2
	var_52_object = var_53_object; // 0x13e1 Mov
	var_60_string = "d1q01EvaGotoSimon"; // 0x13e3 PushS
	var_61_string = "pt_map_georg"; // 0x13e4 PushS
	var_62_int = 1; // 0x13e5 PushI
	var_63_int = 507778; // 0x13e6 PushI
	var_64_float = 0; // 0x13e7 PushV
	func_4806(var_64_float); // 0x13e8 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x13ea ObjFunc
	var_67_string = "d1EvaGotoMaria"; // 0x13ec PushS
	var_68_string = "pt_map_maria"; // 0x13ed PushS
	var_69_int = 3; // 0x13ee PushI
	var_70_int = 508628; // 0x13ef PushI
	var_71_float = 0; // 0x13f0 PushV
	func_4806(var_71_float); // 0x13f1 NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x13f3 ObjFunc
	var_72_string = "d1EvaInfo"; // 0x13f5 PushS
	var_73_string = "pt_map_eva"; // 0x13f6 PushS
	var_74_int = 3; // 0x13f7 PushI
	var_75_int = 508630; // 0x13f8 PushI
	var_76_float = 0; // 0x13f9 PushV
	func_4806(var_76_float); // 0x13fa NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x13fc ObjFunc
	return 2; // 0x13fe Return
}


func_5604(var_291_bool)
{
	var_293_int = 0; var_294_string = ""; // 0x15e5 PushV
	var_294_string = "ood1EvaIntro3"; // 0x15e6 MovS
	func_4729(var_293_int, var_294_string); // 0x15e7 NEW_2
	var_295_int = 0; // 0x15e9 PushI
	var_296_bool = var_293_int == var_295_int; // 0x15ea Eq
	if(var_296_bool == 0) goto Label_5614; // 0x15eb JumpB
	var_291_bool = 1; // 0x15ec MovB
	return 0; // 0x15ed Return
	
Label_5614:
	var_291_bool = 0; // 0x15ee MovB
	return 0; // 0x15ef Return
}


func_4580(var_141_bool)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; // 0x11e4 PushV
	var_148_string = "c"; // 0x11e5 MovS
	var_149_int = 0; // 0x11e6 MovI
	
Label_4583:
	var_153_int = 1; // 0x11e7 PushI
	if(var_153_int == 0) goto Label_4596; // 0x11e8 JumpB
	var_154_int = 1; // 0x11e9 PushI
	var_155_int = var_149_int + var_154_int; // 0x11ea Add
	var_156_int = var_148_string + var_155_int; // 0x11eb Add
	HasProperty(var_156_int, var_150_bool); // 0x11ec ObjFunc
	var_157_bool = var_150_bool == 0; // 0x11ee Not
	if(var_157_bool == 0) goto Label_4593; // 0x11ef JumpB
	goto Label_4596; // 0x11f0 Jump
	
Label_4596:
	var_158_bool = var_149_int == 0; // 0x11f4 Not
	if(var_158_bool == 0) goto Label_4600; // 0x11f5 JumpB
	var_141_bool = 0; // 0x11f6 MovB
	return 10; // 0x11f7 Return
	
Label_4600:
	var_151_int = 0; // 0x11f8 MovI
	var_159_int = 1; // 0x11f9 PushI
	var_160_bool = var_149_int > var_159_int; // 0x11fa GT
	if(var_160_bool == 0) goto Label_4606; // 0x11fb JumpB
	irand(var_151_int, var_149_int); // 0x11fc Func
	
Label_4606:
	var_161_int = 1; // 0x11fe PushI
	var_162_int = var_151_int + var_161_int; // 0x11ff Add
	var_163_int = var_148_string + var_162_int; // 0x1200 Add
	GetProperty(var_163_int, var_152_string); // 0x1201 ObjFunc
	var_164_bool = 0; var_165_string = ""; // 0x1203 PushV
	var_165_string = var_152_string; // 0x1204 Mov
	func_4691(var_164_bool, var_165_string); // 0x1205 NEW_2
	var_141_bool = var_164_bool; // 0x1206 Mov
	return 10; // 0x1208 Return
	
Label_4593:
	var_170_int = 1; // 0x11f1 PushI
	var_149_int = var_149_int + var_170_int; // 0x11f2 Add2
	goto Label_4583; // 0x11f3 Jump
}


func_487(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object; // 0x1e8 TMov
	var_1_object = var_220_object; // 0x1e9 TMov
	var_3_string = 0; // 0x1ea TMovB
	var_226_int = 1; // 0x1eb PushI
	if(var_226_int == 0) goto Label_739; // 0x1ec JumpB
	var_227_bool = 0; // 0x1ed PushV
	var_227_bool = 0; // 0x1ee MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x1ef PushV
	var_229_object = var_1_object; // 0x1f0 MovT
	func_5220(var_229_object); // 0x1f1 NEW_2
	if(var_228_bool == 0) goto Label_506; // 0x1f3 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x1f4 PushV
	var_237_object = var_1_object; // 0x1f5 MovT
	func_5244(var_237_object); // 0x1f6 NEW_2
	if(var_236_bool == 0) goto Label_506; // 0x1f8 JumpB
	var_227_bool = 1; // 0x1f9 MovB
	
Label_506:
	if(var_227_bool == 0) goto Label_532; // 0x1fa JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0x1fb PushV
	var_242_object = var_1_object; // 0x1fc MovT
	var_243_object = var_0_object; // 0x1fd MovT
	func_5142(); // 0x1fe NEW_2
	var_246_string = ""; // 0x200 PushV
	var_246_string = "Fear"; // 0x201 MovS
	func_769(var_221_object, var_246_string); // 0x202 NEW_2
	var_263_int = 504496; // 0x204 PushI
	SetMessage(var_263_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_264_int = 504521; // 0x209 PushI
	var_265_int = 22246; // 0x20a PushI
	var_266_int = 4928; // 0x20b PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x20c TObjFunc
	var_267_int = 521059; // 0x20e PushI
	var_268_int = 22246; // 0x20f PushI
	var_269_int = 22250; // 0x210 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x211 TObjFunc
	goto Label_739; // 0x213 Jump
	
Label_739:
	var_270_bool = 0; // 0x2e3 PushV
	func_4858(var_270_bool); // 0x2e4 NEW_2
	if(var_270_bool == 0) goto Label_754; // 0x2e6 JumpB
	
Label_743:
	lshWaitForAnimEnd(); // 0x2e7 Func
	var_271_string = var_3_string; // 0x2e9 PushT
	if(var_271_string == 0) goto Label_748; // 0x2ea JumpB
	goto Label_753; // 0x2eb Jump
	
Label_753:
	goto Label_768; // 0x2f1 Jump
	
Label_768:
	return 0; // 0x300 Return
	
Label_748:
	var_272_string = ""; // 0x2ec PushV
	var_272_string = var_2_object; // 0x2ed MovT
	func_4660(var_272_string); // 0x2ee NEW_2
	goto Label_743; // 0x2f0 Jump
	
Label_754:
	var_283_string = "all"; // 0x2f2 PushS
	var_284_string = "idle"; // 0x2f3 PushS
	PlayAnimation(var_283_string, var_284_string); // 0x2f4 Func
	
Label_758:
	WaitForAnimEnd(); // 0x2f6 Func
	var_285_string = var_3_string; // 0x2f8 PushT
	if(var_285_string == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_768; // 0x2fa Jump
	
Label_763:
	var_286_string = "all"; // 0x2fb PushS
	var_287_string = "idle"; // 0x2fc PushS
	PlayAnimation(var_286_string, var_287_string); // 0x2fd Func
	goto Label_758; // 0x2ff Jump
	
Label_532:
	var_288_bool = 0; // 0x214 PushV
	var_288_bool = 1; // 0x215 MovB
	var_289_bool = 0; // 0x216 PushV
	var_289_bool = 0; // 0x217 MovB
	var_290_bool = 0; // 0x218 PushV
	var_290_bool = 0; // 0x219 MovB
	var_291_bool = 0; var_292_object = Obj(); // 0x21a PushV
	var_292_object = var_1_object; // 0x21b MovT
	func_5604(var_292_object); // 0x21c NEW_2
	if(var_291_bool == 0) goto Label_549; // 0x21e JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x21f PushV
	var_298_object = var_1_object; // 0x220 MovT
	func_5328(var_298_object); // 0x221 NEW_2
	if(var_297_bool == 0) goto Label_549; // 0x223 JumpB
	var_290_bool = 1; // 0x224 MovB
	
Label_549:
	if(var_290_bool == 0) goto Label_556; // 0x225 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x226 PushV
	var_304_object = var_1_object; // 0x227 MovT
	func_5244(var_304_object); // 0x228 NEW_2
	if(var_303_bool == 0) goto Label_556; // 0x22a JumpB
	var_289_bool = 1; // 0x22b MovB
	
Label_556:
	if(var_289_bool == 0) goto Label_581; // 0x22c JumpB
	var_305_bool = 0; // 0x22d PushV
	var_305_bool = 0; // 0x22e MovB
	var_306_bool = 0; // 0x22f PushV
	var_306_bool = 0; // 0x230 MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x231 PushV
	var_308_object = var_1_object; // 0x232 MovT
	func_5604(var_308_object); // 0x233 NEW_2
	if(var_307_bool == 0) goto Label_572; // 0x235 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x236 PushV
	var_310_object = var_1_object; // 0x237 MovT
	func_5292(var_310_object); // 0x238 NEW_2
	if(var_309_bool == 0) goto Label_572; // 0x23a JumpB
	var_306_bool = 1; // 0x23b MovB
	
Label_572:
	if(var_306_bool == 0) goto Label_579; // 0x23c JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x23d PushV
	var_316_object = var_1_object; // 0x23e MovT
	func_5244(var_316_object); // 0x23f NEW_2
	if(var_315_bool == 0) goto Label_579; // 0x241 JumpB
	var_305_bool = 1; // 0x242 MovB
	
Label_579:
	if(var_305_bool == 0) goto Label_581; // 0x243 JumpB
	var_288_bool = 0; // 0x244 MovB
	
Label_581:
	if(var_288_bool == 0) goto Label_607; // 0x245 JumpB
	var_317_object = Obj(); var_318_object = Obj(); // 0x246 PushV
	var_317_object = var_1_object; // 0x247 MovT
	var_318_object = var_0_object; // 0x248 MovT
	func_4860(); // 0x249 NEW_2
	var_321_string = ""; // 0x24b PushV
	var_321_string = "Neutral"; // 0x24c MovS
	func_769(var_221_object, var_321_string); // 0x24d NEW_2
	var_322_int = 532343; // 0x24f PushI
	SetMessage(var_322_int); // 0x250 TObjFunc
	ClearReplies(); // 0x252 TObjFunc
	var_323_int = 533604; // 0x254 PushI
	var_324_int = 35125; // 0x255 PushI
	var_325_int = 35124; // 0x256 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x257 TObjFunc
	var_326_int = 533608; // 0x259 PushI
	var_327_int = 35129; // 0x25a PushI
	var_328_int = 35128; // 0x25b PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x25c TObjFunc
	goto Label_739; // 0x25e Jump
	
Label_607:
	var_329_string = ""; // 0x25f PushV
	var_329_string = "Neutral"; // 0x260 MovS
	func_769(var_221_object, var_329_string); // 0x261 NEW_2
	var_330_int = 521052; // 0x263 PushI
	SetMessage(var_330_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_331_bool = 0; // 0x268 PushV
	var_331_bool = 0; // 0x269 MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x26a PushV
	var_333_object = var_1_object; // 0x26b MovT
	func_5484(var_333_object); // 0x26c NEW_2
	if(var_332_bool == 0) goto Label_629; // 0x26e JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x26f PushV
	var_339_object = var_1_object; // 0x270 MovT
	func_5352(var_339_object); // 0x271 NEW_2
	if(var_338_bool == 0) goto Label_629; // 0x273 JumpB
	var_331_bool = 1; // 0x274 MovB
	
Label_629:
	if(var_331_bool == 0) goto Label_635; // 0x275 JumpB
	var_344_int = 535143; // 0x276 PushI
	var_345_int = 36805; // 0x277 PushI
	var_346_int = 36804; // 0x278 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x279 TObjFunc
	
Label_635:
	var_347_bool = 0; var_348_object = Obj(); // 0x27b PushV
	var_348_object = var_1_object; // 0x27c MovT
	func_5340(var_348_object); // 0x27d NEW_2
	if(var_347_bool == 0) goto Label_645; // 0x27f JumpB
	var_353_int = 535107; // 0x280 PushI
	var_354_int = 36764; // 0x281 PushI
	var_355_int = 36763; // 0x282 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x283 TObjFunc
	
Label_645:
	var_356_bool = 0; // 0x285 PushV
	var_356_bool = 0; // 0x286 MovB
	var_357_bool = 0; // 0x287 PushV
	var_357_bool = 0; // 0x288 MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x289 PushV
	var_359_object = var_1_object; // 0x28a MovT
	func_5304(var_359_object); // 0x28b NEW_2
	if(var_358_bool == 0) goto Label_660; // 0x28d JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x28e PushV
	var_365_object = var_1_object; // 0x28f MovT
	func_5388(var_365_object); // 0x290 NEW_2
	if(var_364_bool == 0) goto Label_660; // 0x292 JumpB
	var_357_bool = 1; // 0x293 MovB
	
Label_660:
	if(var_357_bool == 0) goto Label_667; // 0x294 JumpB
	var_370_bool = 0; var_371_object = Obj(); // 0x295 PushV
	var_371_object = var_1_object; // 0x296 MovT
	func_5256(var_371_object); // 0x297 NEW_2
	if(var_370_bool == 0) goto Label_667; // 0x299 JumpB
	var_356_bool = 1; // 0x29a MovB
	
Label_667:
	if(var_356_bool == 0) goto Label_673; // 0x29b JumpB
	var_376_int = 531940; // 0x29c PushI
	var_377_int = 33345; // 0x29d PushI
	var_378_int = 33344; // 0x29e PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x29f TObjFunc
	
Label_673:
	var_379_bool = 0; // 0x2a1 PushV
	var_379_bool = 0; // 0x2a2 MovB
	var_380_bool = 0; // 0x2a3 PushV
	var_380_bool = 0; // 0x2a4 MovB
	var_381_bool = 0; var_382_object = Obj(); // 0x2a5 PushV
	var_382_object = var_1_object; // 0x2a6 MovT
	func_5268(var_382_object); // 0x2a7 NEW_2
	if(var_381_bool == 0) goto Label_688; // 0x2a9 JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x2aa PushV
	var_388_object = var_1_object; // 0x2ab MovT
	func_5316(var_388_object); // 0x2ac NEW_2
	if(var_387_bool == 0) goto Label_688; // 0x2ae JumpB
	var_380_bool = 1; // 0x2af MovB
	
Label_688:
	if(var_380_bool == 0) goto Label_695; // 0x2b0 JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0x2b1 PushV
	var_394_object = var_1_object; // 0x2b2 MovT
	func_5256(var_394_object); // 0x2b3 NEW_2
	if(var_393_bool == 0) goto Label_695; // 0x2b5 JumpB
	var_379_bool = 1; // 0x2b6 MovB
	
Label_695:
	if(var_379_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_395_int = 532458; // 0x2b8 PushI
	var_396_int = 33900; // 0x2b9 PushI
	var_397_int = 33899; // 0x2ba PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x2bb TObjFunc
	
Label_701:
	var_398_bool = 0; // 0x2bd PushV
	var_398_bool = 0; // 0x2be MovB
	var_399_bool = 0; var_400_object = Obj(); // 0x2bf PushV
	var_400_object = var_1_object; // 0x2c0 MovT
	func_5364(var_400_object); // 0x2c1 NEW_2
	if(var_399_bool == 0) goto Label_714; // 0x2c3 JumpB
	var_405_bool = 0; var_406_object = Obj(); // 0x2c4 PushV
	var_406_object = var_1_object; // 0x2c5 MovT
	func_5280(var_406_object); // 0x2c6 NEW_2
	if(var_405_bool == 0) goto Label_714; // 0x2c8 JumpB
	var_398_bool = 1; // 0x2c9 MovB
	
Label_714:
	if(var_398_bool == 0) goto Label_720; // 0x2ca JumpB
	var_411_int = 533614; // 0x2cb PushI
	var_412_int = 35137; // 0x2cc PushI
	var_413_int = 35136; // 0x2cd PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x2ce TObjFunc
	
Label_720:
	var_414_bool = 0; var_415_object = Obj(); // 0x2d0 PushV
	var_415_object = var_1_object; // 0x2d1 MovT
	func_5232(var_415_object); // 0x2d2 NEW_2
	var_420_bool = var_414_bool == 0; // 0x2d4 Not
	if(var_420_bool == 0) goto Label_731; // 0x2d5 JumpB
	var_421_int = 521053; // 0x2d6 PushI
	var_422_int = -1; // 0x2d7 PushI
	var_423_int = 22244; // 0x2d8 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x2d9 TObjFunc
	
Label_731:
	var_424_int = 521054; // 0x2db PushI
	var_425_int = -1; // 0x2dc PushI
	var_426_int = 22245; // 0x2dd PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x2de TObjFunc
	goto Label_739; // 0x2e0 Jump
}


func_5616()
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x15f0 PushV
	var_127_int = 37; // 0x15f1 PushI
	var_128_int = 2; // 0x15f2 PushI
	var_129_int = 512119; // 0x15f3 PushI
	CreateDiaryEntry(var_126_object, var_127_int, var_128_int, var_129_int); // 0x15f4 Func
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0; // 0x15f6 PushV
	var_131_object = var_126_object; // 0x15f7 Mov
	var_132_int = -1; // 0x15f8 MovI
	func_5681(var_130_bool, var_131_object, var_132_int); // 0x15f9 NEW_2
	return 2; // 0x15fb Return
}


func_4083(var_2_object, var_848_string)
{
	var_849_bool = 0; // 0xff4 PushV
	func_4858(var_849_bool); // 0xff5 NEW_2
	var_850_bool = var_849_bool == 0; // 0xff7 Not
	if(var_850_bool == 0) goto Label_4090; // 0xff8 JumpB
	return 0; // 0xff9 Return
	
Label_4090:
	var_851_bool = var_848_string == var_2_object; // 0xffa Eq
	if(var_851_bool == 0) goto Label_4093; // 0xffb JumpB
	return 0; // 0xffc Return
	
Label_4093:
	var_852_string = ""; var_853_bool = 0; // 0xffd PushV
	var_852_string = var_848_string; // 0xffe Mov
	var_854_string = ""; // 0xfff PushS
	var_855_bool = var_848_string == var_854_string; // 0x1000 Eq
	if(var_855_bool == 0) goto Label_4100; // 0x1001 JumpB
	var_853_bool = 0; // 0x1002 MovB
	goto Label_4101; // 0x1003 Jump
	
Label_4101:
	func_4676(var_852_string, var_853_bool); // 0x1005 NEW_2
	var_2_object = var_848_string; // 0x1007 TMov
	return 0; // 0x1008 Return
	
Label_4100:
	var_853_bool = 1; // 0x1004 MovB
}


func_5629()
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x15fd PushV
	var_150_int = 680; // 0x15fe PushI
	var_151_int = 2; // 0x15ff PushI
	var_152_int = 534422; // 0x1600 PushI
	CreateDiaryEntry(var_149_object, var_150_int, var_151_int, var_152_int); // 0x1601 Func
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; // 0x1603 PushV
	var_154_object = var_149_object; // 0x1604 Mov
	var_155_int = 37; // 0x1605 MovI
	func_5681(var_153_bool, var_154_object, var_155_int); // 0x1606 NEW_2
	return 2; // 0x1608 Return
}


