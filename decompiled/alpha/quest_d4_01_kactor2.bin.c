task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 10; // 0x24 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x25 Eq
	if(var_13_bool == 0) goto Label_48; // 0x26 JumpB
	var_14_int = 0; // 0x27 PushV
	func_1179(var_14_int); // 0x28 Call
	var_22_int = GlobalVars[0]; // 0x2a PushGE
	var_23_bool = var_14_int != var_22_int; // 0x2b Neq
	if(var_23_bool == 0) goto Label_48; // 0x2c JumpB
	func_155(var_11_bool); // 0x2e Call
	
Label_48:
	return 0; // 0x30 Return
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x98 Func
	return 0; // 0x9a Return
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_155(var_11_bool); // 0xa4 Call
	var_13_object = Obj(); // 0xa6 PushV
	var_13_object = var_11_bool; // 0xa7 Mov
	func_1434(); // 0xa8 Call
	return 0; // 0xaa Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 0; // 0x12d PushI
	var_13_bool = var_11_bool != var_12_int; // 0x12e Neq
	if(var_13_bool == 0) goto Label_305; // 0x12f JumpB
	return 0; // 0x130 Return
	
Label_305:
	var_14_bool = 0; var_15_object = Obj(); // 0x131 PushV
	var_15_object = var_1_object; // 0x132 MovT
	func_338(var_14_bool, var_15_object); // 0x133 Call
	var_50_bool = var_14_bool == 0; // 0x135 Not
	if(var_50_bool == 0) goto Label_312; // 0x136 JumpB
	var_0_bool = 1; // 0x137 TMovB
	
Label_312:
	var_51_int = 0; // 0x138 PushI
	KillTimer(var_51_int); // 0x139 Func
	Stop(); // 0x13b Func
	return 0; // 0x13d Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x13f Func
	return 0; // 0x141 Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_322(var_11_bool); // 0x14b Call
	var_13_object = Obj(); // 0x14d PushV
	var_13_object = var_11_bool; // 0x14e Mov
	func_1434(); // 0x14f Call
	return 0; // 0x151 Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x19f Func
	return 0; // 0x1a1 Return
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	Stop(); // 0x1a2 Func
	return 0; // 0x1a4 Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_421(var_10_string, var_11_bool); // 0x1ae Call
	var_12_object = Obj(); // 0x1b0 PushV
	var_12_object = var_11_bool; // 0x1b1 Mov
	func_1434(); // 0x1b2 Call
	return 0; // 0x1b4 Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	var_13_int = 1; // 0x2c2 PushI
	if(var_13_int == 0) goto Label_1004; // 0x2c3 JumpB
	func_1350(); // 0x2c5 Call
	var_15_int = 10685; // 0x2c7 PushI
	var_16_bool = var_12_int == var_15_int; // 0x2c8 Eq
	if(var_16_bool == 0) goto Label_724; // 0x2c9 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0x2ca PushV
	var_17_object = var_1_object; // 0x2cb MovT
	var_18_object = var_0_bool; // 0x2cc MovT
	func_1442(var_18_object); // 0x2cd Call
	var_36_object = Obj(); var_37_object = Obj(); // 0x2cf PushV
	var_36_object = var_1_object; // 0x2d0 MovT
	var_37_object = var_0_bool; // 0x2d1 MovT
	func_1436(); // 0x2d2 Call
	
Label_724:
	var_40_int = 10687; // 0x2d4 PushI
	var_41_bool = var_12_int == var_40_int; // 0x2d5 Eq
	if(var_41_bool == 0) goto Label_737; // 0x2d6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x2d7 PushV
	var_42_object = var_1_object; // 0x2d8 MovT
	var_43_object = var_0_bool; // 0x2d9 MovT
	func_1453(); // 0x2da Call
	var_46_object = Obj(); var_47_object = Obj(); // 0x2dc PushV
	var_46_object = var_1_object; // 0x2dd MovT
	var_47_object = var_0_bool; // 0x2de MovT
	func_1470(); // 0x2df Call
	
Label_737:
	var_49_int = 10688; // 0x2e1 PushI
	var_50_bool = var_12_int == var_49_int; // 0x2e2 Eq
	if(var_50_bool == 0) goto Label_750; // 0x2e3 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x2e4 PushV
	var_51_object = var_1_object; // 0x2e5 MovT
	var_52_object = var_0_bool; // 0x2e6 MovT
	func_1453(); // 0x2e7 Call
	var_53_object = Obj(); var_54_object = Obj(); // 0x2e9 PushV
	var_53_object = var_1_object; // 0x2ea MovT
	var_54_object = var_0_bool; // 0x2eb MovT
	func_1475(); // 0x2ec Call
	
Label_750:
	var_56_int = 10698; // 0x2ee PushI
	var_57_bool = var_12_int == var_56_int; // 0x2ef Eq
	if(var_57_bool == 0) goto Label_763; // 0x2f0 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x2f1 PushV
	var_58_object = var_1_object; // 0x2f2 MovT
	var_59_object = var_0_bool; // 0x2f3 MovT
	func_1459(var_59_object); // 0x2f4 Call
	var_64_object = Obj(); var_65_object = Obj(); // 0x2f6 PushV
	var_64_object = var_1_object; // 0x2f7 MovT
	var_65_object = var_0_bool; // 0x2f8 MovT
	func_1436(); // 0x2f9 Call
	
Label_763:
	var_66_int = 10680; // 0x2fb PushI
	var_67_bool = var_11_int == var_66_int; // 0x2fc Eq
	if(var_67_bool == 0) goto Label_846; // 0x2fd JumpB
	var_68_bool = 0; var_69_object = Obj(); // 0x2fe PushV
	var_69_object = var_1_object; // 0x2ff MovT
	func_1490(var_69_object); // 0x300 Call
	if(var_68_bool == 0) goto Label_791; // 0x302 JumpB
	var_76_string = ""; // 0x303 PushV
	var_76_string = "Neutral"; // 0x304 MovS
	func_689(var_12_int, var_76_string); // 0x305 Call
	var_91_int = 9701; // 0x307 PushI
	SetMessage(var_91_int); // 0x308 TObjFunc
	ClearReplies(); // 0x30a TObjFunc
	var_92_int = 9702; // 0x30c PushI
	var_93_int = 10682; // 0x30d PushI
	var_94_int = 10681; // 0x30e PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x30f TObjFunc
	var_95_int = 9711; // 0x311 PushI
	var_96_int = 10682; // 0x312 PushI
	var_97_int = 10691; // 0x313 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x314 TObjFunc
	return 0; // 0x316 Return
	
Label_791:
	var_98_string = ""; // 0x317 PushV
	var_98_string = "Neutral"; // 0x318 MovS
	func_689(var_12_int, var_98_string); // 0x319 Call
	var_99_int = 9712; // 0x31b PushI
	SetMessage(var_99_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_100_int = 9713; // 0x320 PushI
	var_101_int = 10695; // 0x321 PushI
	var_102_int = 10694; // 0x322 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x323 TObjFunc
	var_103_int = 9720; // 0x325 PushI
	var_104_int = 10702; // 0x326 PushI
	var_105_int = 10701; // 0x327 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x328 TObjFunc
	var_106_int = 9723; // 0x32a PushI
	var_107_int = 10695; // 0x32b PushI
	var_108_int = 10705; // 0x32c PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x32d TObjFunc
	var_109_int = 9724; // 0x32f PushI
	var_110_int = -1; // 0x330 PushI
	var_111_int = 10707; // 0x331 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x332 TObjFunc
	return 0; // 0x334 Return
	
Label_846:
	var_112_int = 12186; // 0x34e PushI
	var_113_bool = var_11_int == var_112_int; // 0x34f Eq
	if(var_113_bool == 0) goto Label_864; // 0x350 JumpB
	var_114_string = ""; // 0x351 PushV
	var_114_string = "Neutral"; // 0x352 MovS
	func_689(var_12_int, var_114_string); // 0x353 Call
	var_115_int = 11015; // 0x355 PushI
	SetMessage(var_115_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_116_int = 11016; // 0x35a PushI
	var_117_int = -1; // 0x35b PushI
	var_118_int = 12187; // 0x35c PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x35d TObjFunc
	return 0; // 0x35f Return
	
Label_864:
	var_119_int = 10702; // 0x360 PushI
	var_120_bool = var_11_int == var_119_int; // 0x361 Eq
	if(var_120_bool == 0) goto Label_882; // 0x362 JumpB
	var_121_string = ""; // 0x363 PushV
	var_121_string = "Neutral"; // 0x364 MovS
	func_689(var_12_int, var_121_string); // 0x365 Call
	var_122_int = 9721; // 0x367 PushI
	SetMessage(var_122_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_123_int = 9722; // 0x36c PushI
	var_124_int = 10697; // 0x36d PushI
	var_125_int = 10703; // 0x36e PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_126_int = 10695; // 0x372 PushI
	var_127_bool = var_11_int == var_126_int; // 0x373 Eq
	if(var_127_bool == 0) goto Label_905; // 0x374 JumpB
	var_128_string = ""; // 0x375 PushV
	var_128_string = "Neutral"; // 0x376 MovS
	func_689(var_12_int, var_128_string); // 0x377 Call
	var_129_int = 9714; // 0x379 PushI
	SetMessage(var_129_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_130_int = 9715; // 0x37e PushI
	var_131_int = 10697; // 0x37f PushI
	var_132_int = 10696; // 0x380 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x381 TObjFunc
	var_133_int = 9719; // 0x383 PushI
	var_134_int = -1; // 0x384 PushI
	var_135_int = 10700; // 0x385 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_136_int = 10697; // 0x389 PushI
	var_137_bool = var_11_int == var_136_int; // 0x38a Eq
	if(var_137_bool == 0) goto Label_928; // 0x38b JumpB
	var_138_string = ""; // 0x38c PushV
	var_138_string = "Neutral"; // 0x38d MovS
	func_689(var_12_int, var_138_string); // 0x38e Call
	var_139_int = 9716; // 0x390 PushI
	SetMessage(var_139_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_140_int = 9717; // 0x395 PushI
	var_141_int = -1; // 0x396 PushI
	var_142_int = 10698; // 0x397 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x398 TObjFunc
	var_143_int = 9718; // 0x39a PushI
	var_144_int = -1; // 0x39b PushI
	var_145_int = 10699; // 0x39c PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x39d TObjFunc
	return 0; // 0x39f Return
	
Label_928:
	var_146_int = 10682; // 0x3a0 PushI
	var_147_bool = var_11_int == var_146_int; // 0x3a1 Eq
	if(var_147_bool == 0) goto Label_951; // 0x3a2 JumpB
	var_148_string = ""; // 0x3a3 PushV
	var_148_string = "Neutral"; // 0x3a4 MovS
	func_689(var_12_int, var_148_string); // 0x3a5 Call
	var_149_int = 9703; // 0x3a7 PushI
	SetMessage(var_149_int); // 0x3a8 TObjFunc
	ClearReplies(); // 0x3aa TObjFunc
	var_150_int = 9704; // 0x3ac PushI
	var_151_int = 10684; // 0x3ad PushI
	var_152_int = 10683; // 0x3ae PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x3af TObjFunc
	var_153_int = 9710; // 0x3b1 PushI
	var_154_int = 10684; // 0x3b2 PushI
	var_155_int = 10689; // 0x3b3 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x3b4 TObjFunc
	return 0; // 0x3b6 Return
	
Label_951:
	var_156_int = 10684; // 0x3b7 PushI
	var_157_bool = var_11_int == var_156_int; // 0x3b8 Eq
	if(var_157_bool == 0) goto Label_969; // 0x3b9 JumpB
	var_158_string = ""; // 0x3ba PushV
	var_158_string = "Neutral"; // 0x3bb MovS
	func_689(var_12_int, var_158_string); // 0x3bc Call
	var_159_int = 9705; // 0x3be PushI
	SetMessage(var_159_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_160_int = 9706; // 0x3c3 PushI
	var_161_int = 10686; // 0x3c4 PushI
	var_162_int = 10685; // 0x3c5 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x3c6 TObjFunc
	return 0; // 0x3c8 Return
	
Label_969:
	var_163_int = 10686; // 0x3c9 PushI
	var_164_bool = var_11_int == var_163_int; // 0x3ca Eq
	if(var_164_bool == 0) goto Label_992; // 0x3cb JumpB
	var_165_string = ""; // 0x3cc PushV
	var_165_string = "Neutral"; // 0x3cd MovS
	func_689(var_12_int, var_165_string); // 0x3ce Call
	var_166_int = 9707; // 0x3d0 PushI
	SetMessage(var_166_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_167_int = 9708; // 0x3d5 PushI
	var_168_int = -1; // 0x3d6 PushI
	var_169_int = 10687; // 0x3d7 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x3d8 TObjFunc
	var_170_int = 9709; // 0x3da PushI
	var_171_int = -1; // 0x3db PushI
	var_172_int = 10688; // 0x3dc PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x3dd TObjFunc
	return 0; // 0x3df Return
	
Label_992:
	var_3_object = 1; // 0x3e0 TMovB
	var_173_bool = 0; // 0x3e1 PushV
	func_1526(var_173_bool); // 0x3e2 Call
	if(var_173_bool == 0) goto Label_1000; // 0x3e4 JumpB
	lshStopAnimation(); // 0x3e5 Func
	goto Label_1002; // 0x3e7 Jump
	
Label_1002:
	return 0; // 0x3ea Return
	
Label_1000:
	StopAnimation(); // 0x3e8 Func
	
Label_1004:
	return 0; // 0x3ec Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x404 PushV
	func_1147(); // 0x406 Call
	var_14_int = 0; var_15_object = Obj(); // 0x408 PushV
	var_15_object = var_11_object; // 0x409 Mov
	func_1005(var_13_int, var_14_int, var_15_object); // 0x40a Call
	var_13_int = var_14_int; // 0x40b Mov
	var_140_int = 0; // 0x40d PushI
	var_141_bool = var_13_int == var_140_int; // 0x40e Eq
	if(var_141_bool == 0) goto Label_1064; // 0x40f JumpB
	var_142_bool = 0; var_143_string = ""; var_144_string = ""; // 0x410 PushV
	var_143_string = "quest_d4_01"; // 0x411 MovS
	var_144_string = "key2_done"; // 0x412 MovS
	func_1398(var_142_bool, var_143_string, var_144_string); // 0x413 Call
	var_148_object = Obj(); // 0x415 PushV
	var_148_object = var_11_object; // 0x416 Mov
	TaskCall(0); // 0x417 TaskCall
	func_0(var_148_object); // 0x418 Call
	TaskReturn(); // 0x419 TaskReturn
	var_251_object = Obj(); // 0x41b PushV
	var_251_object = var_11_object; // 0x41c Mov
	TaskCall(1); // 0x41d TaskCall
	func_182(var_251_object); // 0x41e Call
	TaskReturn(); // 0x41f TaskReturn
	var_307_object = Obj(); // 0x421 PushV
	var_307_object = var_11_object; // 0x422 Mov
	TaskCall(7); // 0x423 TaskCall
	func_1160(var_307_object); // 0x424 Call
	TaskReturn(); // 0x425 TaskReturn
	goto Label_1077; // 0x427 Jump
	
Label_1077:
	return 2; // 0x435 Return
	
Label_1064:
	var_315_int = 1; // 0x428 PushI
	var_316_bool = var_13_int == var_315_int; // 0x429 Eq
	if(var_316_bool == 0) goto Label_1077; // 0x42a JumpB
	var_317_bool = 0; var_318_string = ""; var_319_string = ""; // 0x42b PushV
	var_318_string = "quest_d4_01"; // 0x42c MovS
	var_319_string = "key2_done"; // 0x42d MovS
	func_1398(var_317_bool, var_318_string, var_319_string); // 0x42e Call
	TaskCall(2); // 0x431 TaskCall
	func_349(); // 0x432 Call
	TaskReturn(); // 0x433 TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0; // 0x59b Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0]; // 0x3f6 PushGE
	var_12_int = 0; // 0x3f7 PushV
	func_1179(var_12_int); // 0x3f8 Call
	var_11_int = var_12_int; // 0x3f9 Mov
	GlobalVars[0] = var_11_int; // 0x3fb PopGE
	
Label_1020:
	var_20_int = 3; // 0x3fc PushI
	Sleep(var_20_int); // 0x3fd Func
	func_1078(); // 0x400 Call
	goto Label_1020; // 0x402 Jump
}


func_0(var_148_object)
{
	var_151_int = 10; // 0x1 PushI
	var_152_int = 1; // 0x2 PushI
	SetTimer(var_151_int, var_152_int); // 0x3 Func
	
Label_5:
	var_153_bool = 0; var_154_object = Obj(); var_155_float = 0; var_156_float = 0; var_157_bool = 0; var_158_bool = 0; // 0x5 PushV
	var_154_object = var_148_object; // 0x6 Mov
	var_155_float = 250; // 0x7 MovI
	var_156_float = 3000; // 0x8 MovI
	var_157_bool = 1; // 0x9 MovB
	var_158_bool = 1; // 0xa MovB
	func_49(var_150_object, var_148_object, var_153_bool, var_154_object, var_155_float, var_156_float, var_157_bool, var_158_bool); // 0xb Call
	var_236_int = 0; // 0xd PushV
	func_1179(var_236_int); // 0xe Call
	var_244_int = GlobalVars[0]; // 0x10 PushGE
	var_245_bool = var_236_int != var_244_int; // 0x11 Neq
	if(var_245_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_31; // 0x13 Jump
	
Label_31:
	var_246_int = 10; // 0x1f PushI
	KillTimer(var_246_int); // 0x20 Func
	return 0; // 0x22 Return
	
Label_20:
	var_247_int = 1; // 0x14 PushI
	Sleep(var_247_int); // 0x15 Func
	var_248_int = 0; // 0x17 PushV
	func_1179(var_248_int); // 0x18 Call
	var_249_int = GlobalVars[0]; // 0x1a PushGE
	var_250_bool = var_248_int != var_249_int; // 0x1b Neq
	if(var_250_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_31; // 0x1d Jump
	
Label_30:
	goto Label_5; // 0x1e Jump
}


func_1152(var_311_object)
{
	var_312_int = 0; var_313_object = Obj(); // 0x481 PushV
	var_313_object = var_311_object; // 0x482 Mov
	TaskCall(4); // 0x483 TaskCall
	func_508(var_314_object, var_312_int, var_313_object); // 0x484 Call
	TaskReturn(); // 0x485 TaskReturn
	return 0; // 0x487 Return
}


func_1410(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x582 PushV
	var_48_string = "idle"; // 0x583 MovS
	var_49_int = var_46_int; // 0x584 Push
	if(var_49_int == 0) goto Label_1415; // 0x585 JumpB
	var_48_string = var_48_string + var_46_int; // 0x586 Add2
	
Label_1415:
	var_45_string = var_48_string; // 0x587 Mov
	return 2; // 0x588 Return
}


func_1160(var_307_object)
{
	var_308_bool = 0; var_309_bool = 0; // 0x488 PushV
	
Label_1161:
	IsOverrideActive(var_309_bool); // 0x489 Func
	var_310_bool = var_309_bool == 0; // 0x48b Not
	if(var_310_bool == 0) goto Label_1166; // 0x48c JumpB
	goto Label_1167; // 0x48d Jump
	
Label_1167:
	var_311_object = Obj(); // 0x48f PushV
	var_311_object = var_307_object; // 0x490 Mov
	func_1152(var_311_object); // 0x491 Call
	Hold(); // 0x493 Func
	return 2; // 0x495 Return
	
Label_1166:
	goto Label_1161; // 0x48e Jump
}


func_1417(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x589 PushV
	var_42_int = 0; // 0x58a MovI
	
Label_1419:
	var_44_string = "all"; // 0x58b PushS
	var_45_string = ""; var_46_int = 0; // 0x58c PushV
	var_46_int = var_42_int; // 0x58d Mov
	func_1410(var_45_string, var_46_int); // 0x58e Call
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x590 Func
	var_50_bool = var_43_bool == 0; // 0x592 Not
	if(var_50_bool == 0) goto Label_1429; // 0x593 JumpB
	goto Label_1432; // 0x594 Jump
	
Label_1432:
	var_39_int = var_42_int; // 0x598 Mov
	return 4; // 0x599 Return
	
Label_1429:
	var_51_int = 1; // 0x595 PushI
	var_42_int = var_42_int + var_51_int; // 0x596 Add2
	goto Label_1419; // 0x597 Jump
}


func_1174(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x496 PushV
	GetPosition(var_19_cvector); // 0x497 Func
	var_17_cvector = var_19_cvector; // 0x499 Mov
	return 2; // 0x49a Return
}


func_1179(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0; // 0x49b PushV
	GetScene(var_15_object); // 0x49c Func
	var_17_cvector = CVector(0,0,0); // 0x49e PushV
	func_1174(var_17_cvector); // 0x49f Call
	GetRegionByPt(var_16_int, var_17_cvector); // 0x4a1 ObjFunc
	var_12_int = var_16_int; // 0x4a3 Mov
	return 4; // 0x4a4 Return
}


func_155(var_0_bool)
{
	var_0_bool = 1; // 0x9b TMovB
	var_12_int = 0; // 0x9c PushI
	KillTimer(var_12_int); // 0x9d Func
	Stop(); // 0x9f Func
	return 0; // 0xa1 Return
}


func_1436()
{
	var_38_string = "playsound"; // 0x59d PushS
	var_39_string = "giveitem"; // 0x59e PushS
	TriggerWorld(var_38_string, var_39_string); // 0x59f Func
	return 0; // 0x5a1 Return
}


func_1442(var_17_object)
{
	var_19_string = "soborkey is given"; // 0x5a3 PushS
	Trace(var_19_string); // 0x5a4 Func
	var_20_object = Obj(); var_21_string = ""; var_22_int = 0; // 0x5a6 PushV
	var_20_object = var_17_object; // 0x5a7 Mov
	var_21_string = "d4q01_sobor_key"; // 0x5a8 MovS
	var_22_int = 1; // 0x5a9 MovI
	func_1385(var_20_object, var_21_string, var_22_int); // 0x5aa Call
	return 0; // 0x5ac Return
}


func_421(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x1a5 TMovB
	var_1_object = 0; // 0x1a6 TMovB
	Stop(); // 0x1a7 Func
	StopGroup0(); // 0x1a9 Func
	return 0; // 0x1ab Return
}


func_1190(var_199_bool, var_200_object, var_201_string)
{
	var_202_bool = 0; var_203_bool = 0; // 0x4a6 PushV
	var_204_string = "HasProperty"; // 0x4a7 PushS
	var_205_int = 2; // 0x4a8 PushI
	var_206_bool = IsFuncExist(var_200_object, var_204_string, var_205_int); // 0x4a9 FuncExist
	var_207_bool = var_206_bool == 0; // 0x4aa Not
	if(var_207_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_199_bool = 0; // 0x4ac MovB
	return 2; // 0x4ad Return
	
Label_1198:
	HasProperty(var_201_string, var_203_bool); // 0x4ae ObjFunc
	var_199_bool = var_203_bool; // 0x4b0 Mov
	return 2; // 0x4b1 Return
}


func_171(var_175_bool, var_176_object)
{
	var_177_bool = 0; var_178_object = Obj(); // 0xac PushV
	var_178_object = var_176_object; // 0xad Mov
	func_1243(var_177_bool, var_178_object); // 0xae Call
	var_175_bool = var_177_bool; // 0xaf Mov
	return 0; // 0xb1 Return
}


func_1453()
{
	var_44_string = "ood4WastedMale1"; // 0x5ae PushS
	var_45_int = 1; // 0x5af PushI
	SetVariable(var_44_string, var_45_int); // 0x5b0 Func
	return 0; // 0x5b2 Return
}


func_1328()
{
	CameraSwitchToNormal(); // 0x531 Func
	return 0; // 0x533 Return
}


func_49(var_0_bool, var_1_object, var_153_bool, var_154_object, var_155_float, var_156_float, var_157_bool, var_158_bool)
{
	var_159_bool = 0; var_160_bool = 0; var_161_object = Obj(); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_float = 0; var_166_object = Obj(); var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); // 0x31 PushV
	var_0_bool = 0; // 0x32 TMovB
	var_1_object = var_154_object; // 0x33 TMov
	var_168_bool = var_158_bool; // 0x34 Mov
	
Label_53:
	var_175_bool = 0; var_176_object = Obj(); // 0x35 PushV
	var_176_object = var_154_object; // 0x36 Mov
	func_171(var_175_bool, var_176_object); // 0x37 Call
	var_211_bool = var_175_bool == 0; // 0x39 Not
	if(var_211_bool == 0) goto Label_61; // 0x3a JumpB
	var_153_bool = 0; // 0x3b MovB
	return 16; // 0x3c Return
	
Label_61:
	GetPosition(var_170_cvector); // 0x3d ObjFunc
	GetPosition(var_171_cvector); // 0x3f Func
	var_172_cvector = var_170_cvector - var_171_cvector; // 0x41 Sub2
	var_173_float = var_172_cvector | var_172_cvector; // 0x42 Or2
	var_212_bool = 0; // 0x43 PushV
	var_212_bool = 0; // 0x44 MovB
	var_213_int = 0; // 0x45 PushI
	var_214_bool = var_156_float > var_213_int; // 0x46 GT
	if(var_214_bool == 0) goto Label_76; // 0x47 JumpB
	var_215_float = var_156_float * var_156_float; // 0x48 Mult
	var_216_bool = var_173_float > var_215_float; // 0x49 GT
	if(var_216_bool == 0) goto Label_76; // 0x4a JumpB
	var_212_bool = 1; // 0x4b MovB
	
Label_76:
	if(var_212_bool == 0) goto Label_81; // 0x4c JumpB
	Stop(); // 0x4d Func
	var_153_bool = 0; // 0x4f MovB
	return 16; // 0x50 Return
	
Label_81:
	var_217_float = var_155_float * var_155_float; // 0x51 Mult
	var_218_bool = var_173_float > var_217_float; // 0x52 GT
	if(var_218_bool == 0) goto Label_143; // 0x53 JumpB
	GetPFPosition(var_170_cvector); // 0x54 ObjFunc
	FindPathTo(var_174_object, var_170_cvector); // 0x56 Func
	var_219_bool = var_174_object != 0; // 0x58 NullNeq
	if(var_219_bool == 0) goto Label_92; // 0x59 JumpB
	var_169_object = var_174_object; // 0x5a Mov
	var_174_object = 0; // 0x5b SetNull
	
Label_92:
	var_220_bool = var_169_object != 0; // 0x5c NullNeq
	if(var_220_bool == 0) goto Label_125; // 0x5d JumpB
	var_221_bool = var_168_bool; // 0x5e Push
	if(var_221_bool == 0) goto Label_102; // 0x5f JumpB
	var_168_bool = 0; // 0x60 MovB
	RotatePath(var_169_object, var_167_bool); // 0x61 Func
	var_222_bool = var_167_bool == 0; // 0x63 Not
	if(var_222_bool == 0) goto Label_102; // 0x64 JumpB
	goto Label_149; // 0x65 Jump
	
Label_149:
	var_153_bool = !var_0_bool; // 0x95 Not2
	return 16; // 0x96 Return
	
Label_102:
	var_223_int = 0; // 0x66 PushI
	var_224_float = 0.3; // 0x67 PushF
	SetTimer(var_223_int, var_224_float); // 0x68 Func
	var_225_string = ""; // 0x6a PushV
	func_178(var_225_string); // 0x6b Call
	var_226_string = ""; // 0x6d PushV
	func_180(var_226_string); // 0x6e Call
	FollowPath(var_169_object, var_157_bool, var_167_bool, var_225_string, var_226_string); // 0x70 Func
	var_227_bool = var_167_bool == 0; // 0x72 Not
	if(var_227_bool == 0) goto Label_123; // 0x73 JumpB
	var_228_bool = var_0_bool; // 0x74 PushT
	if(var_228_bool == 0) goto Label_121; // 0x75 JumpB
	var_169_object = 0; // 0x76 SetNull
	goto Label_149; // 0x77 Jump
	
Label_121:
	goto Label_148; // 0x79 Jump
	
Label_148:
	goto Label_53; // 0x94 Jump
	
Label_123:
	var_169_object = 0; // 0x7b SetNull
	goto Label_141; // 0x7c Jump
	
Label_141:
	var_174_object = 0; // 0x8d SetNull
	goto Label_147; // 0x8e Jump
	
Label_147:
	var_169_object = 0; // 0x93 SetNull
	
Label_125:
	var_229_int = 0; // 0x7d PushI
	KillTimer(var_229_int); // 0x7e Func
	var_230_float = 0.5; // 0x80 PushF
	Sleep(var_230_float, var_167_bool); // 0x81 Func
	var_231_bool = var_167_bool == 0; // 0x83 Not
	if(var_231_bool == 0) goto Label_137; // 0x84 JumpB
	var_232_bool = var_0_bool; // 0x85 PushT
	if(var_232_bool == 0) goto Label_137; // 0x86 JumpB
	var_169_object = 0; // 0x87 SetNull
	goto Label_149; // 0x88 Jump
	
Label_137:
	var_233_int = 0; // 0x89 PushI
	var_234_float = 0.3; // 0x8a PushF
	SetTimer(var_233_int, var_234_float); // 0x8b Func
	
Label_143:
	var_235_int = 0; // 0x8f PushI
	KillTimer(var_235_int); // 0x90 Func
	goto Label_149; // 0x92 Jump
}


func_1202(var_192_bool)
{
	var_194_bool = 0; var_195_bool = 0; // 0x4b2 PushV
	IsDead(var_195_bool); // 0x4b3 ObjFunc
	var_192_bool = var_195_bool; // 0x4b5 Mov
	return 2; // 0x4b6 Return
}


func_178(var_225_string)
{
	var_225_string = "walk"; // 0xb2 MovS
	return 0; // 0xb3 Return
}


func_689(var_2_bool, var_94_string)
{
	var_95_bool = 0; // 0x2b2 PushV
	func_1526(var_95_bool); // 0x2b3 Call
	var_96_bool = var_95_bool == 0; // 0x2b5 Not
	if(var_96_bool == 0) goto Label_696; // 0x2b6 JumpB
	return 0; // 0x2b7 Return
	
Label_696:
	var_97_bool = var_94_string == var_2_bool; // 0x2b8 Eq
	if(var_97_bool == 0) goto Label_699; // 0x2b9 JumpB
	return 0; // 0x2ba Return
	
Label_699:
	var_98_string = ""; // 0x2bb PushV
	var_98_string = var_94_string; // 0x2bc Mov
	func_1332(var_98_string); // 0x2bd Call
	var_2_bool = var_94_string; // 0x2bf TMov
	return 0; // 0x2c0 Return
}


func_180(var_226_string)
{
	var_226_string = "run"; // 0xb4 MovS
	return 0; // 0xb5 Return
}


func_437(var_343_bool)
{
	var_343_bool = 0; // 0x1b5 MovB
	return 0; // 0x1b6 Return
}


func_1332(var_98_string)
{
	var_99_float = 0; var_100_float = 0; var_101_float = 0; var_102_float = 0; // 0x534 PushV
	var_103_string = "playing "; // 0x535 PushS
	var_104_int = var_103_string + var_98_string; // 0x536 Add
	Trace(var_104_int); // 0x537 Func
	lshGetAnimTimes(var_98_string, var_101_float, var_102_float); // 0x539 Func
	lshPlayAnimation(var_101_float, var_102_float); // 0x53b Func
	var_105_string = "start: "; // 0x53d PushS
	var_106_int = var_105_string + var_101_float; // 0x53e Add
	Trace(var_106_int); // 0x53f Func
	var_107_string = "end: "; // 0x541 PushS
	var_108_int = var_107_string + var_102_float; // 0x542 Add
	Trace(var_108_int); // 0x543 Func
	return 4; // 0x545 Return
}


func_439()
{
	var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_bool = 0; var_350_float = 0; var_351_bool = 0; var_352_int = 0; var_353_int = 0; var_354_int = 0; var_355_int = 0; var_356_bool = 0; var_357_float = 0; var_358_bool = 0; // 0x1b7 PushV
	WaitForAnimEnd(); // 0x1b8 Func
	var_359_bool = 0; // 0x1ba PushV
	func_1267(var_359_bool); // 0x1bb Call
	var_362_bool = var_359_bool == 0; // 0x1bd Not
	if(var_362_bool == 0) goto Label_448; // 0x1be JumpB
	return 14; // 0x1bf Return
	
Label_448:
	var_363_int = 0; // 0x1c0 PushV
	func_1417(var_363_int); // 0x1c1 Call
	var_352_int = var_363_int; // 0x1c2 Mov
	var_353_int = 0; // 0x1c4 MovI
	
Label_453:
	var_376_bool = 0; // 0x1c5 PushV
	var_376_bool = 0; // 0x1c6 MovB
	var_377_int = 5; // 0x1c7 PushI
	var_378_bool = var_353_int < var_377_int; // 0x1c8 LT
	if(var_378_bool == 0) goto Label_463; // 0x1c9 JumpB
	var_379_bool = 0; // 0x1ca PushV
	func_1267(var_379_bool); // 0x1cb Call
	if(var_379_bool == 0) goto Label_463; // 0x1cd JumpB
	var_376_bool = 1; // 0x1ce MovB
	
Label_463:
	if(var_376_bool == 0) goto Label_507; // 0x1cf JumpB
	var_380_int = 3; // 0x1d0 PushI
	irand(var_354_int, var_380_int); // 0x1d1 Func
	var_381_int = 0; // 0x1d3 PushI
	var_382_bool = var_354_int == var_381_int; // 0x1d4 Eq
	if(var_382_bool == 0) goto Label_487; // 0x1d5 JumpB
	var_383_int = var_352_int; // 0x1d6 Push
	if(var_383_int == 0) goto Label_486; // 0x1d7 JumpB
	irand(var_355_int, var_352_int); // 0x1d8 Func
	var_384_string = "all"; // 0x1da PushS
	var_385_string = ""; var_386_int = 0; // 0x1db PushV
	var_386_int = var_355_int; // 0x1dc Mov
	func_1410(var_385_string, var_386_int); // 0x1dd Call
	PlayAnimation(var_384_string, var_385_string); // 0x1df Func
	WaitForAnimEnd(var_356_bool); // 0x1e1 Func
	var_387_bool = var_356_bool == 0; // 0x1e3 Not
	if(var_387_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_507; // 0x1e5 Jump
	
Label_507:
	return 14; // 0x1fb Return
	
Label_486:
	goto Label_504; // 0x1e6 Jump
	
Label_504:
	var_388_int = 1; // 0x1f8 PushI
	var_353_int = var_353_int + var_388_int; // 0x1f9 Add2
	goto Label_453; // 0x1fa Jump
	
Label_487:
	var_389_int = 1; // 0x1e7 PushI
	var_390_bool = var_354_int == var_389_int; // 0x1e8 Eq
	if(var_390_bool == 0) goto Label_501; // 0x1e9 JumpB
	var_391_int = 4; // 0x1ea PushI
	rand(var_357_float, var_391_int); // 0x1eb Func
	var_392_int = 1; // 0x1ed PushI
	var_393_int = var_357_float + var_392_int; // 0x1ee Add
	Sleep(var_393_int, var_358_bool); // 0x1ef Func
	var_394_bool = var_358_bool == 0; // 0x1f1 Not
	if(var_394_bool == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_507; // 0x1f3 Jump
	
Label_500:
	goto Label_504; // 0x1f4 Jump
	
Label_501:
	var_395_int = var_353_int; // 0x1f5 Push
	if(var_395_int == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_507; // 0x1f7 Jump
}


func_1459(var_58_object)
{
	var_60_string = "tvirin is given"; // 0x5b4 PushS
	Trace(var_60_string); // 0x5b5 Func
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; // 0x5b7 PushV
	var_61_object = var_58_object; // 0x5b8 Mov
	var_62_string = "tvirin"; // 0x5b9 MovS
	var_63_int = 1; // 0x5ba MovI
	func_1385(var_61_object, var_62_string, var_63_int); // 0x5bb Call
	return 0; // 0x5bd Return
}


func_1078()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x436 PushV
	WaitForAnimEnd(); // 0x437 Func
	var_35_bool = 0; // 0x439 PushV
	func_1267(var_35_bool); // 0x43a Call
	var_38_bool = var_35_bool == 0; // 0x43c Not
	if(var_38_bool == 0) goto Label_1087; // 0x43d JumpB
	return 14; // 0x43e Return
	
Label_1087:
	var_39_int = 0; // 0x43f PushV
	func_1417(var_39_int); // 0x440 Call
	var_28_int = var_39_int; // 0x441 Mov
	var_29_int = 0; // 0x443 MovI
	
Label_1092:
	var_52_bool = 0; // 0x444 PushV
	var_52_bool = 0; // 0x445 MovB
	var_53_int = 5; // 0x446 PushI
	var_54_bool = var_29_int < var_53_int; // 0x447 LT
	if(var_54_bool == 0) goto Label_1102; // 0x448 JumpB
	var_55_bool = 0; // 0x449 PushV
	func_1267(var_55_bool); // 0x44a Call
	if(var_55_bool == 0) goto Label_1102; // 0x44c JumpB
	var_52_bool = 1; // 0x44d MovB
	
Label_1102:
	if(var_52_bool == 0) goto Label_1146; // 0x44e JumpB
	var_56_int = 3; // 0x44f PushI
	irand(var_30_int, var_56_int); // 0x450 Func
	var_57_int = 0; // 0x452 PushI
	var_58_bool = var_30_int == var_57_int; // 0x453 Eq
	if(var_58_bool == 0) goto Label_1126; // 0x454 JumpB
	var_59_int = var_28_int; // 0x455 Push
	if(var_59_int == 0) goto Label_1125; // 0x456 JumpB
	irand(var_31_int, var_28_int); // 0x457 Func
	var_60_string = "all"; // 0x459 PushS
	var_61_string = ""; var_62_int = 0; // 0x45a PushV
	var_62_int = var_31_int; // 0x45b Mov
	func_1410(var_61_string, var_62_int); // 0x45c Call
	PlayAnimation(var_60_string, var_61_string); // 0x45e Func
	WaitForAnimEnd(var_32_bool); // 0x460 Func
	var_63_bool = var_32_bool == 0; // 0x462 Not
	if(var_63_bool == 0) goto Label_1125; // 0x463 JumpB
	goto Label_1146; // 0x464 Jump
	
Label_1146:
	return 14; // 0x47a Return
	
Label_1125:
	goto Label_1143; // 0x465 Jump
	
Label_1143:
	var_64_int = 1; // 0x477 PushI
	var_29_int = var_29_int + var_64_int; // 0x478 Add2
	goto Label_1092; // 0x479 Jump
	
Label_1126:
	var_65_int = 1; // 0x466 PushI
	var_66_bool = var_30_int == var_65_int; // 0x467 Eq
	if(var_66_bool == 0) goto Label_1140; // 0x468 JumpB
	var_67_int = 4; // 0x469 PushI
	rand(var_33_float, var_67_int); // 0x46a Func
	var_68_int = 1; // 0x46c PushI
	var_69_int = var_33_float + var_68_int; // 0x46d Add
	Sleep(var_69_int, var_34_bool); // 0x46e Func
	var_70_bool = var_34_bool == 0; // 0x470 Not
	if(var_70_bool == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1146; // 0x472 Jump
	
Label_1139:
	goto Label_1143; // 0x473 Jump
	
Label_1140:
	var_71_int = var_29_int; // 0x474 Push
	if(var_71_int == 0) goto Label_1143; // 0x475 JumpB
	goto Label_1146; // 0x476 Jump
}


func_182(var_251_object)
{
	
Label_183:
	var_254_bool = 0; var_255_object = Obj(); var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_bool = 0; // 0xb7 PushV
	var_255_object = var_251_object; // 0xb8 Mov
	var_256_float = 250; // 0xb9 MovI
	var_257_float = 3000; // 0xba MovI
	var_258_bool = 1; // 0xbb MovB
	var_259_bool = 1; // 0xbc MovB
	func_198(var_253_object, var_251_object, var_254_bool, var_255_object, var_256_float, var_257_float, var_258_bool, var_259_bool); // 0xbd Call
	var_305_bool = var_254_bool == 0; // 0xbf Not
	if(var_305_bool == 0) goto Label_197; // 0xc0 JumpB
	var_306_int = 1; // 0xc1 PushI
	Sleep(var_306_int); // 0xc2 Func
	goto Label_183; // 0xc4 Jump
	
Label_197:
	return 0; // 0xc5 Return
}


func_571(var_0_bool, var_1_object, var_2_bool, var_3_object, var_79_object, var_80_object)
{
	var_0_bool = var_80_object; // 0x23c TMov
	var_1_object = var_79_object; // 0x23d TMov
	var_3_object = 0; // 0x23e TMovB
	var_85_int = 1; // 0x23f PushI
	if(var_85_int == 0) goto Label_659; // 0x240 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x241 PushV
	var_87_object = var_1_object; // 0x242 MovT
	func_1490(var_87_object); // 0x243 Call
	if(var_86_bool == 0) goto Label_602; // 0x245 JumpB
	var_94_string = ""; // 0x246 PushV
	var_94_string = "Neutral"; // 0x247 MovS
	func_689(var_80_object, var_94_string); // 0x248 Call
	var_109_int = 9701; // 0x24a PushI
	SetMessage(var_109_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_110_int = 9702; // 0x24f PushI
	var_111_int = 10682; // 0x250 PushI
	var_112_int = 10681; // 0x251 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x252 TObjFunc
	var_113_int = 9711; // 0x254 PushI
	var_114_int = 10682; // 0x255 PushI
	var_115_int = 10691; // 0x256 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x257 TObjFunc
	goto Label_659; // 0x259 Jump
	
Label_659:
	var_116_bool = 0; // 0x293 PushV
	func_1526(var_116_bool); // 0x294 Call
	if(var_116_bool == 0) goto Label_674; // 0x296 JumpB
	
Label_663:
	lshWaitForAnimEnd(); // 0x297 Func
	var_117_object = var_3_object; // 0x299 PushT
	if(var_117_object == 0) goto Label_668; // 0x29a JumpB
	goto Label_673; // 0x29b Jump
	
Label_673:
	goto Label_688; // 0x2a1 Jump
	
Label_688:
	return 0; // 0x2b0 Return
	
Label_668:
	var_118_string = ""; // 0x29c PushV
	var_118_string = var_2_bool; // 0x29d MovT
	func_1332(var_118_string); // 0x29e Call
	goto Label_663; // 0x2a0 Jump
	
Label_674:
	var_119_string = "all"; // 0x2a2 PushS
	var_120_string = "idle"; // 0x2a3 PushS
	PlayAnimation(var_119_string, var_120_string); // 0x2a4 Func
	
Label_678:
	WaitForAnimEnd(); // 0x2a6 Func
	var_121_object = var_3_object; // 0x2a8 PushT
	if(var_121_object == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_688; // 0x2aa Jump
	
Label_683:
	var_122_string = "all"; // 0x2ab PushS
	var_123_string = "idle"; // 0x2ac PushS
	PlayAnimation(var_122_string, var_123_string); // 0x2ad Func
	goto Label_678; // 0x2af Jump
	
Label_602:
	var_124_string = ""; // 0x25a PushV
	var_124_string = "Neutral"; // 0x25b MovS
	func_689(var_80_object, var_124_string); // 0x25c Call
	var_125_int = 9712; // 0x25e PushI
	SetMessage(var_125_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_126_int = 9713; // 0x263 PushI
	var_127_int = 10695; // 0x264 PushI
	var_128_int = 10694; // 0x265 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x266 TObjFunc
	var_129_int = 9720; // 0x268 PushI
	var_130_int = 10702; // 0x269 PushI
	var_131_int = 10701; // 0x26a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x26b TObjFunc
	var_132_int = 9723; // 0x26d PushI
	var_133_int = 10695; // 0x26e PushI
	var_134_int = 10705; // 0x26f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x270 TObjFunc
	var_135_int = 9724; // 0x272 PushI
	var_136_int = -1; // 0x273 PushI
	var_137_int = 10707; // 0x274 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x275 TObjFunc
	goto Label_659; // 0x277 Jump
}


func_1207(var_181_bool, var_182_object)
{
	var_183_object = Obj(); var_184_object = Obj(); var_185_object = Obj(); var_186_object = Obj(); // 0x4b7 PushV
	var_187_bool = var_182_object == 0; // 0x4b8 NullEq
	if(var_187_bool == 0) goto Label_1212; // 0x4b9 JumpB
	var_181_bool = 0; // 0x4ba MovB
	return 4; // 0x4bb Return
	
Label_1212:
	var_188_bool = 0; // 0x4bc PushV
	var_188_bool = 0; // 0x4bd MovB
	var_189_string = "IsDead"; // 0x4be PushS
	var_190_int = 1; // 0x4bf PushI
	var_191_bool = IsFuncExist(var_182_object, var_189_string, var_190_int); // 0x4c0 FuncExist
	if(var_191_bool == 0) goto Label_1224; // 0x4c1 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x4c2 PushV
	var_193_object = var_182_object; // 0x4c3 Mov
	func_1202(var_193_object); // 0x4c4 Call
	if(var_192_bool == 0) goto Label_1224; // 0x4c6 JumpB
	var_188_bool = 1; // 0x4c7 MovB
	
Label_1224:
	if(var_188_bool == 0) goto Label_1227; // 0x4c8 JumpB
	var_181_bool = 0; // 0x4c9 MovB
	return 4; // 0x4ca Return
	
Label_1227:
	GetScene(var_185_object); // 0x4cb Func
	var_196_bool = var_185_object == 0; // 0x4cd NullEq
	if(var_196_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_181_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1233:
	GetScene(var_186_object); // 0x4d1 ObjFunc
	var_197_bool = var_185_object != var_186_object; // 0x4d3 Neq
	if(var_197_bool == 0) goto Label_1239; // 0x4d4 JumpB
	var_181_bool = 0; // 0x4d5 MovB
	return 4; // 0x4d6 Return
	
Label_1239:
	var_181_bool = 1; // 0x4d7 MovB
	return 4; // 0x4d8 Return
}


func_1470()
{
	var_48_int = 0; // 0x5bf PushI
	SetReturnValue(var_48_int); // 0x5c0 ObjFunc
	return 0; // 0x5c2 Return
}


func_322(var_0_bool)
{
	var_0_bool = 1; // 0x142 TMovB
	var_12_int = 0; // 0x143 PushI
	KillTimer(var_12_int); // 0x144 Func
	Stop(); // 0x146 Func
	return 0; // 0x148 Return
}


func_1475()
{
	var_55_int = 1; // 0x5c4 PushI
	SetReturnValue(var_55_int); // 0x5c5 ObjFunc
	return 0; // 0x5c7 Return
}


func_198(var_0_bool, var_1_object, var_254_bool, var_255_object, var_256_float, var_257_float, var_258_bool, var_259_bool)
{
	var_260_bool = 0; var_261_bool = 0; var_262_object = Obj(); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); var_266_float = 0; var_267_object = Obj(); var_268_bool = 0; var_269_bool = 0; var_270_object = Obj(); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_float = 0; var_275_object = Obj(); // 0xc6 PushV
	var_0_bool = 0; // 0xc7 TMovB
	var_1_object = var_255_object; // 0xc8 TMov
	var_269_bool = var_259_bool; // 0xc9 Mov
	
Label_202:
	var_276_bool = 0; var_277_object = Obj(); // 0xca PushV
	var_277_object = var_255_object; // 0xcb Mov
	func_338(var_276_bool, var_277_object); // 0xcc Call
	var_280_bool = var_276_bool == 0; // 0xce Not
	if(var_280_bool == 0) goto Label_210; // 0xcf JumpB
	var_254_bool = 0; // 0xd0 MovB
	return 16; // 0xd1 Return
	
Label_210:
	GetPosition(var_271_cvector); // 0xd2 ObjFunc
	GetPosition(var_272_cvector); // 0xd4 Func
	var_273_cvector = var_271_cvector - var_272_cvector; // 0xd6 Sub2
	var_274_float = var_273_cvector | var_273_cvector; // 0xd7 Or2
	var_281_bool = 0; // 0xd8 PushV
	var_281_bool = 0; // 0xd9 MovB
	var_282_int = 0; // 0xda PushI
	var_283_bool = var_257_float > var_282_int; // 0xdb GT
	if(var_283_bool == 0) goto Label_225; // 0xdc JumpB
	var_284_float = var_257_float * var_257_float; // 0xdd Mult
	var_285_bool = var_274_float > var_284_float; // 0xde GT
	if(var_285_bool == 0) goto Label_225; // 0xdf JumpB
	var_281_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_281_bool == 0) goto Label_230; // 0xe1 JumpB
	Stop(); // 0xe2 Func
	var_254_bool = 0; // 0xe4 MovB
	return 16; // 0xe5 Return
	
Label_230:
	var_286_float = var_256_float * var_256_float; // 0xe6 Mult
	var_287_bool = var_274_float > var_286_float; // 0xe7 GT
	if(var_287_bool == 0) goto Label_292; // 0xe8 JumpB
	GetPFPosition(var_271_cvector); // 0xe9 ObjFunc
	FindPathTo(var_275_object, var_271_cvector); // 0xeb Func
	var_288_bool = var_275_object != 0; // 0xed NullNeq
	if(var_288_bool == 0) goto Label_241; // 0xee JumpB
	var_270_object = var_275_object; // 0xef Mov
	var_275_object = 0; // 0xf0 SetNull
	
Label_241:
	var_289_bool = var_270_object != 0; // 0xf1 NullNeq
	if(var_289_bool == 0) goto Label_274; // 0xf2 JumpB
	var_290_bool = var_269_bool; // 0xf3 Push
	if(var_290_bool == 0) goto Label_251; // 0xf4 JumpB
	var_269_bool = 0; // 0xf5 MovB
	RotatePath(var_270_object, var_268_bool); // 0xf6 Func
	var_291_bool = var_268_bool == 0; // 0xf8 Not
	if(var_291_bool == 0) goto Label_251; // 0xf9 JumpB
	goto Label_298; // 0xfa Jump
	
Label_298:
	var_254_bool = !var_0_bool; // 0x12a Not2
	return 16; // 0x12b Return
	
Label_251:
	var_292_int = 0; // 0xfb PushI
	var_293_float = 0.3; // 0xfc PushF
	SetTimer(var_292_int, var_293_float); // 0xfd Func
	var_294_string = ""; // 0xff PushV
	func_345(var_294_string); // 0x100 Call
	var_295_string = ""; // 0x102 PushV
	func_347(var_295_string); // 0x103 Call
	FollowPath(var_270_object, var_258_bool, var_268_bool, var_294_string, var_295_string); // 0x105 Func
	var_296_bool = var_268_bool == 0; // 0x107 Not
	if(var_296_bool == 0) goto Label_272; // 0x108 JumpB
	var_297_bool = var_0_bool; // 0x109 PushT
	if(var_297_bool == 0) goto Label_270; // 0x10a JumpB
	var_270_object = 0; // 0x10b SetNull
	goto Label_298; // 0x10c Jump
	
Label_270:
	goto Label_297; // 0x10e Jump
	
Label_297:
	goto Label_202; // 0x129 Jump
	
Label_272:
	var_270_object = 0; // 0x110 SetNull
	goto Label_290; // 0x111 Jump
	
Label_290:
	var_275_object = 0; // 0x122 SetNull
	goto Label_296; // 0x123 Jump
	
Label_296:
	var_270_object = 0; // 0x128 SetNull
	
Label_274:
	var_298_int = 0; // 0x112 PushI
	KillTimer(var_298_int); // 0x113 Func
	var_299_float = 0.5; // 0x115 PushF
	Sleep(var_299_float, var_268_bool); // 0x116 Func
	var_300_bool = var_268_bool == 0; // 0x118 Not
	if(var_300_bool == 0) goto Label_286; // 0x119 JumpB
	var_301_bool = var_0_bool; // 0x11a PushT
	if(var_301_bool == 0) goto Label_286; // 0x11b JumpB
	var_270_object = 0; // 0x11c SetNull
	goto Label_298; // 0x11d Jump
	
Label_286:
	var_302_int = 0; // 0x11e PushI
	var_303_float = 0.3; // 0x11f PushF
	SetTimer(var_302_int, var_303_float); // 0x120 Func
	
Label_292:
	var_304_int = 0; // 0x124 PushI
	KillTimer(var_304_int); // 0x125 Func
	goto Label_298; // 0x127 Jump
}


func_1350()
{
	var_14_bool = 0; // 0x546 PushV
	func_1526(var_14_bool); // 0x547 Call
	if(var_14_bool == 0) goto Label_1356; // 0x549 JumpB
	lshStopSpeech(); // 0x54a Func
	
Label_1356:
	return 0; // 0x54c Return
}


func_1480()
{
0x5c8: PushEmpty() // 0x5c8 PushV
0x5c9: PushEmpty(bool, object) // 0x5c9 PushV
0x5ca: Stack[-1] = Stack[-3] // 0x5ca Mov
0x5cb: Call 0x5de // 0x5cb Call
}


func_1357(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x54d PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x54e Or
	var_56_float = sqrt(var_57_int); // 0x54f Sqrt2
	var_58_float = 0.0; // 0x550 PushF
	var_59_bool = var_56_float < var_58_float; // 0x551 LT
	if(var_59_bool == 0) goto Label_1365; // 0x552 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x553 MovV
	return 2; // 0x554 Return
	
Label_1365:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x555 Div2
	return 2; // 0x556 Return
}


func_338(var_276_bool, var_277_object)
{
	var_278_bool = 0; var_279_object = Obj(); // 0x153 PushV
	var_279_object = var_277_object; // 0x154 Mov
	func_1243(var_278_bool, var_279_object); // 0x155 Call
	var_276_bool = var_278_bool; // 0x156 Mov
	return 0; // 0x158 Return
}


func_1490(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x5d3 PushV
	var_89_string = "ood4WastedMale1"; // 0x5d4 MovS
	func_1367(var_88_int, var_89_string); // 0x5d5 Call
	var_92_int = 0; // 0x5d7 PushI
	var_93_bool = var_88_int == var_92_int; // 0x5d8 Eq
	if(var_93_bool == 0) goto Label_1500; // 0x5d9 JumpB
	var_86_bool = 1; // 0x5da MovB
	return 0; // 0x5db Return
	
Label_1500:
	var_86_bool = 0; // 0x5dc MovB
	return 0; // 0x5dd Return
}


func_1367(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x557 PushV
	GetVariable(var_89_string, var_91_int); // 0x558 Func
	var_88_int = var_91_int; // 0x55a Mov
	return 2; // 0x55b Return
}


func_345(var_294_string)
{
	var_294_string = "walk"; // 0x159 MovS
	return 0; // 0x15a Return
}


func_1243(var_177_bool, var_178_object)
{
	var_179_int = 0; var_180_int = 0; // 0x4db PushV
	var_181_bool = 0; var_182_object = Obj(); // 0x4dc PushV
	var_182_object = var_178_object; // 0x4dd Mov
	func_1207(var_181_bool, var_182_object); // 0x4de Call
	var_198_bool = var_181_bool == 0; // 0x4e0 Not
	if(var_198_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_177_bool = 0; // 0x4e2 MovB
	return 2; // 0x4e3 Return
	
Label_1252:
	var_199_bool = 0; var_200_object = Obj(); var_201_string = ""; // 0x4e4 PushV
	var_200_object = var_178_object; // 0x4e5 Mov
	var_201_string = "noaccess"; // 0x4e6 MovS
	func_1190(var_199_bool, var_200_object, var_201_string); // 0x4e7 Call
	var_208_bool = var_199_bool == 0; // 0x4e9 Not
	if(var_208_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_177_bool = 1; // 0x4eb MovB
	return 2; // 0x4ec Return
	
Label_1261:
	var_209_string = "noaccess"; // 0x4ed PushS
	GetProperty(var_209_string, var_180_int); // 0x4ee ObjFunc
	var_210_int = 0; // 0x4f0 PushI
	var_177_bool = var_180_int == var_210_int; // 0x4f1 Eq2
	return 2; // 0x4f2 Return
}


func_347(var_295_string)
{
	var_295_string = "run"; // 0x15b MovS
	return 0; // 0x15c Return
}


func_349()
{
	
Label_349:
	func_357(var_320_bool, var_321_bool); // 0x15e Call
	var_398_int = 1; // 0x160 PushI
	Sleep(var_398_int); // 0x161 Func
	goto Label_349; // 0x163 Jump
}


func_1372(var_26_object, var_27_int)
{
	var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; // 0x55c PushV
	GetItemID(var_31_int); // 0x55d ObjFunc
	var_34_string = "Category"; // 0x55f PushS
	GetInvItemProperty(var_32_int, var_31_int, var_34_string); // 0x560 Func
	AddItem(var_33_bool, var_26_object, var_32_int, var_27_int); // 0x562 ObjFunc
	var_35_bool = var_33_bool == 0; // 0x564 Not
	if(var_35_bool == 0) goto Label_1384; // 0x565 JumpB
	DropItems(var_26_object, var_27_int); // 0x566 ObjFunc
	
Label_1384:
	return 6; // 0x568 Return
}


func_1502()
{
0x5de: PushEmpty() // 0x5de PushV
0x5df: Stack[-2] = (bool) 0 // 0x5df MovB
0x5e0: Return(); Pop(0) // 0x5e0 Return
}


func_1505(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x5e1 PushV
	var_73_string = "player"; // 0x5e2 PushS
	GetVariable(var_73_string, var_72_int); // 0x5e3 Func
	var_74_int = 0; // 0x5e5 PushI
	var_75_bool = var_72_int == var_74_int; // 0x5e6 Eq
	if(var_75_bool == 0) goto Label_1515; // 0x5e7 JumpB
	var_70_int = 200001; // 0x5e8 MovI
	return 2; // 0x5e9 Return
	
Label_1515:
	var_76_int = 1; // 0x5eb PushI
	var_77_bool = var_72_int == var_76_int; // 0x5ec Eq
	if(var_77_bool == 0) goto Label_1520; // 0x5ed JumpB
	var_70_int = 200002; // 0x5ee MovI
	return 2; // 0x5ef Return
	
Label_1520:
	var_70_int = 200003; // 0x5f0 MovI
	return 2; // 0x5f1 Return
}


func_357(var_0_bool, var_1_object)
{
	var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_float = 0; var_326_bool = 0; var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_float = 0; var_333_bool = 0; var_334_object = Obj(); var_335_bool = 0; // 0x165 PushV
	var_0_bool = 0; // 0x166 TMovB
	var_1_object = 0; // 0x167 TMovB
	var_336_float = 0.5; // 0x168 PushF
	rand(var_329_float, var_336_float); // 0x169 Func
	Sleep(var_329_float); // 0x16b Func
	
Label_365:
	var_337_bool = var_0_bool == 0; // 0x16d Not
	if(var_337_bool == 0) goto Label_413; // 0x16e JumpB
	var_338_bool = var_1_object == 0; // 0x16f Not
	if(var_338_bool == 0) goto Label_385; // 0x170 JumpB
	
Label_369:
	GetPosition(var_331_cvector); // 0x171 Func
	GetCameraFarDistance(var_332_float); // 0x173 Func
	var_339_float = 2.5; // 0x175 PushF
	var_332_float = var_332_float * var_339_float; // 0x176 Mult2
	GetRandomPFPointInCircle(var_330_cvector, var_331_cvector, var_332_float, var_333_bool); // 0x177 Func
	var_340_bool = var_333_bool; // 0x179 Push
	if(var_340_bool == 0) goto Label_380; // 0x17a JumpB
	goto Label_384; // 0x17b Jump
	
Label_384:
	goto Label_386; // 0x180 Jump
	
Label_386:
	FindShiftedPathTo(var_334_object, var_330_cvector); // 0x182 Func
	var_341_bool = var_334_object != 0; // 0x184 NullNeq
	if(var_341_bool == 0) goto Label_408; // 0x185 JumpB
	RotatePath(var_334_object, var_335_bool); // 0x186 Func
	var_342_bool = var_335_bool; // 0x188 Push
	if(var_342_bool == 0) goto Label_407; // 0x189 JumpB
	var_343_bool = 0; // 0x18a PushV
	func_437(var_343_bool); // 0x18b Call
	FollowPath(var_334_object, var_343_bool, var_335_bool); // 0x18d Func
	var_334_object = 0; // 0x18f SetNull
	var_344_bool = var_335_bool; // 0x190 Push
	if(var_344_bool == 0) goto Label_407; // 0x191 JumpB
	TaskCall(3); // 0x193 TaskCall
	func_439(); // 0x194 Call
	TaskReturn(); // 0x195 TaskReturn
	
Label_407:
	goto Label_411; // 0x197 Jump
	
Label_411:
	var_334_object = 0; // 0x19b SetNull
	goto Label_365; // 0x19c Jump
	
Label_408:
	var_396_int = 1; // 0x198 PushI
	Sleep(var_396_int); // 0x199 Func
	
Label_380:
	var_397_int = 1; // 0x17c PushI
	Sleep(var_397_int); // 0x17d Func
	goto Label_369; // 0x17f Jump
	
Label_385:
	var_1_object = 0; // 0x181 TMovB
	
Label_413:
	return 14; // 0x19d Return
}


func_1385(var_20_object, var_21_string, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x569 PushV
	CreateInvItem(var_24_object); // 0x56a Func
	SetItemName(var_21_string); // 0x56c ObjFunc
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0x56e PushV
	var_25_object = var_20_object; // 0x56f Mov
	var_26_object = var_24_object; // 0x570 Mov
	var_27_int = var_22_int; // 0x571 Mov
	func_1372(var_26_object, var_27_int); // 0x572 Call
	return 2; // 0x574 Return
}


func_1005(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0x3ee PushV
	var_17_object = var_15_object; // 0x3ef Mov
	TaskCall(4); // 0x3f0 TaskCall
	func_508(var_18_object, var_16_int, var_17_object); // 0x3f1 Call
	TaskReturn(); // 0x3f2 TaskReturn
	var_14_int = var_18_object; // 0x3f3 Mov
	return 0; // 0x3f5 Return
}


func_1522(var_68_int)
{
	var_68_int = 3341; // 0x5f2 MovI
	return 0; // 0x5f3 Return
}


func_1267(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x4f3 PushV
	IsLoaded(var_37_bool); // 0x4f4 Func
	var_35_bool = var_37_bool; // 0x4f6 Mov
	return 2; // 0x4f7 Return
}


func_1524(var_69_string)
{
	var_69_string = "ui/NPC_None.png"; // 0x5f4 MovS
	return 0; // 0x5f5 Return
}


func_1526(var_95_bool)
{
	var_95_bool = 0; // 0x5f6 MovB
	return 0; // 0x5f7 Return
}


func_1398(var_142_bool, var_143_string, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj(); // 0x576 PushV
	FindActor(var_146_object, var_143_string); // 0x577 Func
	var_147_bool = var_146_object == 0; // 0x579 NullEq
	if(var_147_bool == 0) goto Label_1405; // 0x57a JumpB
	var_142_bool = 0; // 0x57b MovB
	return 2; // 0x57c Return
	
Label_1405:
	Trigger(var_146_object, var_144_string); // 0x57d Func
	var_142_bool = 1; // 0x57f MovB
	return 2; // 0x580 Return
}


func_1272(var_27_bool)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; // 0x4f8 PushV
	GetPosition(var_38_cvector); // 0x4f9 ObjFunc
	GetEyesHeight(var_37_float); // 0x4fb ObjFunc
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x4fd PushE
	var_45_float = var_45_float + var_37_float; // 0x4fe Add2
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x4ff PopE
	GetPosition(var_39_cvector); // 0x500 Func
	GetEyesHeight(var_37_float); // 0x502 Func
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x504 PushE
	var_46_float = var_46_float + var_37_float; // 0x505 Add2
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x506 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x507 Sub2
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x508 PushE
	var_47_float = 0; // 0x509 MovI
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x50a PopE
	var_48_int = var_40_cvector | var_40_cvector; // 0x50b Or
	var_49_float = sqrt(var_48_int); // 0x50c Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x50d Div2
	var_41_cvector = -var_40_cvector; // 0x50e Neg2
	var_50_int = 70; // 0x50f PushI
	var_51_float = var_40_cvector * var_50_int; // 0x510 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x511 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x512 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x513 Xor2
	func_1357(var_52_cvector, var_53_cvector); // 0x514 Call
	var_60_int = 25; // 0x516 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x517 Mult
	var_62_int = var_51_float + var_61_float; // 0x518 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x519 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x51a Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x51b Add2
	IsOverrideActive(var_44_bool); // 0x51c Func
	var_64_bool = var_44_bool; // 0x51e Push
	if(var_64_bool == 0) goto Label_1314; // 0x51f JumpB
	var_27_bool = 0; // 0x520 MovB
	return 16; // 0x521 Return
	
Label_1314:
	StopWorld(); // 0x522 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x524 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x526 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x527 PushE
	Rotate(var_65_float, var_66_float); // 0x528 Func
	CameraWaitForPlayFinish(); // 0x52a Func
	ResumeWorld(); // 0x52c Func
	var_27_bool = 1; // 0x52e MovB
	return 16; // 0x52f Return
}


func_1147()
{
	StopAnimation(); // 0x47b Func
	StopGroup0(); // 0x47d Func
	return 0; // 0x47f Return
}


func_508(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x1fc PushV
	var_0_bool = var_17_object; // 0x1fd TMov
	var_27_bool = 0; var_28_object = Obj(); // 0x1fe PushV
	var_28_object = var_17_object; // 0x1ff Mov
	func_1272(var_28_object); // 0x200 Call
	var_67_bool = var_27_bool == 0; // 0x202 Not
	if(var_67_bool == 0) goto Label_518; // 0x203 JumpB
	var_16_int = -2; // 0x204 MovI
	return 8; // 0x205 Return
	
Label_518:
	CreateDialog(var_23_object); // 0x206 Func
	var_68_int = 0; // 0x208 PushV
	func_1522(var_68_int); // 0x209 Call
	SetNPCName(var_68_int); // 0x20b ObjFunc
	var_69_string = ""; // 0x20d PushV
	func_1524(var_69_string); // 0x20e Call
	SetPhoto(var_69_string); // 0x210 ObjFunc
	var_70_int = 0; // 0x212 PushV
	func_1505(var_70_int); // 0x213 Call
	SetPlayerName(var_70_int); // 0x215 ObjFunc
	var_25_int = -1; // 0x217 MovI
	IsOverrideActive(var_24_bool); // 0x218 Func
	var_78_bool = var_24_bool; // 0x21a Push
	if(var_78_bool == 0) goto Label_542; // 0x21b JumpB
	var_16_int = -2; // 0x21c MovI
	return 8; // 0x21d Return
	
Label_542:
	DoDialog(var_23_object); // 0x21e Func
	var_79_object = Obj(); var_80_object = Obj(); // 0x220 PushV
	var_79_object = var_17_object; // 0x221 Mov
	var_80_object = var_23_object; // 0x222 Mov
	TaskCall(5); // 0x223 TaskCall
	func_571(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object); // 0x224 Call
	TaskReturn(); // 0x225 TaskReturn
	IsDialogEnd(var_26_bool); // 0x227 ObjFunc
	
Label_553:
	var_138_bool = var_26_bool == 0; // 0x229 Not
	if(var_138_bool == 0) goto Label_560; // 0x22a JumpB
	sync(); // 0x22b Func
	IsDialogEnd(var_26_bool); // 0x22d ObjFunc
	goto Label_553; // 0x22f Jump
	
Label_560:
	var_139_object = Obj(); // 0x230 PushV
	var_139_object = var_17_object; // 0x231 Mov
	func_1328(); // 0x232 Call
	StopDialog(var_23_object); // 0x234 Func
	GetReturnValue(var_25_int); // 0x236 ObjFunc
	var_16_int = var_25_int; // 0x238 Mov
	return 8; // 0x239 Return
}


