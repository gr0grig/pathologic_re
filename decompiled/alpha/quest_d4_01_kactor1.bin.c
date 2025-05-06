task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 10; // 0x24 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x25 Eq
	if(var_13_bool == 0) goto Label_48; // 0x26 JumpB
	var_14_int = 0; // 0x27 PushV
	func_1170(var_14_int); // 0x28 Call
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
	func_1425(); // 0xa8 Call
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
	func_1425(); // 0x14f Call
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
	func_1425(); // 0x1b2 Call
	return 0; // 0x1b4 Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	var_13_int = 1; // 0x29f PushI
	if(var_13_int == 0) goto Label_995; // 0x2a0 JumpB
	func_1341(); // 0x2a2 Call
	var_15_int = 10646; // 0x2a4 PushI
	var_16_bool = var_12_int == var_15_int; // 0x2a5 Eq
	if(var_16_bool == 0) goto Label_689; // 0x2a6 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0x2a7 PushV
	var_17_object = var_1_object; // 0x2a8 MovT
	var_18_object = var_0_bool; // 0x2a9 MovT
	func_1439(var_18_object); // 0x2aa Call
	var_36_object = Obj(); var_37_object = Obj(); // 0x2ac PushV
	var_36_object = var_1_object; // 0x2ad MovT
	var_37_object = var_0_bool; // 0x2ae MovT
	func_1427(); // 0x2af Call
	
Label_689:
	var_40_int = 10648; // 0x2b1 PushI
	var_41_bool = var_12_int == var_40_int; // 0x2b2 Eq
	if(var_41_bool == 0) goto Label_702; // 0x2b3 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x2b4 PushV
	var_42_object = var_1_object; // 0x2b5 MovT
	var_43_object = var_0_bool; // 0x2b6 MovT
	func_1433(); // 0x2b7 Call
	var_46_object = Obj(); var_47_object = Obj(); // 0x2b9 PushV
	var_46_object = var_1_object; // 0x2ba MovT
	var_47_object = var_0_bool; // 0x2bb MovT
	func_1461(); // 0x2bc Call
	
Label_702:
	var_49_int = 10649; // 0x2be PushI
	var_50_bool = var_12_int == var_49_int; // 0x2bf Eq
	if(var_50_bool == 0) goto Label_715; // 0x2c0 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x2c1 PushV
	var_51_object = var_1_object; // 0x2c2 MovT
	var_52_object = var_0_bool; // 0x2c3 MovT
	func_1433(); // 0x2c4 Call
	var_53_object = Obj(); var_54_object = Obj(); // 0x2c6 PushV
	var_53_object = var_1_object; // 0x2c7 MovT
	var_54_object = var_0_bool; // 0x2c8 MovT
	func_1466(); // 0x2c9 Call
	
Label_715:
	var_56_int = 10669; // 0x2cb PushI
	var_57_bool = var_12_int == var_56_int; // 0x2cc Eq
	if(var_57_bool == 0) goto Label_728; // 0x2cd JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x2ce PushV
	var_58_object = var_1_object; // 0x2cf MovT
	var_59_object = var_0_bool; // 0x2d0 MovT
	func_1450(var_59_object); // 0x2d1 Call
	var_64_object = Obj(); var_65_object = Obj(); // 0x2d3 PushV
	var_64_object = var_1_object; // 0x2d4 MovT
	var_65_object = var_0_bool; // 0x2d5 MovT
	func_1427(); // 0x2d6 Call
	
Label_728:
	var_66_int = 10641; // 0x2d8 PushI
	var_67_bool = var_11_int == var_66_int; // 0x2d9 Eq
	if(var_67_bool == 0) goto Label_776; // 0x2da JumpB
	var_68_bool = 0; var_69_object = Obj(); // 0x2db PushV
	var_69_object = var_1_object; // 0x2dc MovT
	func_1471(var_69_object); // 0x2dd Call
	if(var_68_bool == 0) goto Label_756; // 0x2df JumpB
	var_76_string = ""; // 0x2e0 PushV
	var_76_string = "Neutral"; // 0x2e1 MovS
	func_654(var_12_int, var_76_string); // 0x2e2 Call
	var_91_int = 9667; // 0x2e4 PushI
	SetMessage(var_91_int); // 0x2e5 TObjFunc
	ClearReplies(); // 0x2e7 TObjFunc
	var_92_int = 9668; // 0x2e9 PushI
	var_93_int = 10643; // 0x2ea PushI
	var_94_int = 10642; // 0x2eb PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x2ec TObjFunc
	var_95_int = 9677; // 0x2ee PushI
	var_96_int = 10653; // 0x2ef PushI
	var_97_int = 10652; // 0x2f0 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x2f1 TObjFunc
	return 0; // 0x2f3 Return
	
Label_756:
	var_98_string = ""; // 0x2f4 PushV
	var_98_string = "Neutral"; // 0x2f5 MovS
	func_654(var_12_int, var_98_string); // 0x2f6 Call
	var_99_int = 9681; // 0x2f8 PushI
	SetMessage(var_99_int); // 0x2f9 TObjFunc
	ClearReplies(); // 0x2fb TObjFunc
	var_100_int = 9682; // 0x2fd PushI
	var_101_int = 10660; // 0x2fe PushI
	var_102_int = 10659; // 0x2ff PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x300 TObjFunc
	var_103_int = 9699; // 0x302 PushI
	var_104_int = -1; // 0x303 PushI
	var_105_int = 10678; // 0x304 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x305 TObjFunc
	return 0; // 0x307 Return
	
Label_776:
	var_106_int = 10660; // 0x308 PushI
	var_107_bool = var_11_int == var_106_int; // 0x309 Eq
	if(var_107_bool == 0) goto Label_804; // 0x30a JumpB
	var_108_string = ""; // 0x30b PushV
	var_108_string = "Neutral"; // 0x30c MovS
	func_654(var_12_int, var_108_string); // 0x30d Call
	var_109_int = 9683; // 0x30f PushI
	SetMessage(var_109_int); // 0x310 TObjFunc
	ClearReplies(); // 0x312 TObjFunc
	var_110_int = 9684; // 0x314 PushI
	var_111_int = 10662; // 0x315 PushI
	var_112_int = 10661; // 0x316 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x317 TObjFunc
	var_113_int = 9694; // 0x319 PushI
	var_114_int = 10672; // 0x31a PushI
	var_115_int = 10671; // 0x31b PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x31c TObjFunc
	var_116_int = 9698; // 0x31e PushI
	var_117_int = 10662; // 0x31f PushI
	var_118_int = 10676; // 0x320 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x321 TObjFunc
	return 0; // 0x323 Return
	
Label_804:
	var_119_int = 10672; // 0x324 PushI
	var_120_bool = var_11_int == var_119_int; // 0x325 Eq
	if(var_120_bool == 0) goto Label_827; // 0x326 JumpB
	var_121_string = ""; // 0x327 PushV
	var_121_string = "Neutral"; // 0x328 MovS
	func_654(var_12_int, var_121_string); // 0x329 Call
	var_122_int = 9695; // 0x32b PushI
	SetMessage(var_122_int); // 0x32c TObjFunc
	ClearReplies(); // 0x32e TObjFunc
	var_123_int = 9696; // 0x330 PushI
	var_124_int = 10665; // 0x331 PushI
	var_125_int = 10673; // 0x332 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x333 TObjFunc
	var_126_int = 9697; // 0x335 PushI
	var_127_int = -1; // 0x336 PushI
	var_128_int = 10675; // 0x337 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x338 TObjFunc
	return 0; // 0x33a Return
	
Label_827:
	var_129_int = 10662; // 0x33b PushI
	var_130_bool = var_11_int == var_129_int; // 0x33c Eq
	if(var_130_bool == 0) goto Label_850; // 0x33d JumpB
	var_131_string = ""; // 0x33e PushV
	var_131_string = "Neutral"; // 0x33f MovS
	func_654(var_12_int, var_131_string); // 0x340 Call
	var_132_int = 9685; // 0x342 PushI
	SetMessage(var_132_int); // 0x343 TObjFunc
	ClearReplies(); // 0x345 TObjFunc
	var_133_int = 9686; // 0x347 PushI
	var_134_int = -1; // 0x348 PushI
	var_135_int = 10663; // 0x349 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x34a TObjFunc
	var_136_int = 9687; // 0x34c PushI
	var_137_int = 10665; // 0x34d PushI
	var_138_int = 10664; // 0x34e PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x34f TObjFunc
	return 0; // 0x351 Return
	
Label_850:
	var_139_int = 10665; // 0x352 PushI
	var_140_bool = var_11_int == var_139_int; // 0x353 Eq
	if(var_140_bool == 0) goto Label_873; // 0x354 JumpB
	var_141_string = ""; // 0x355 PushV
	var_141_string = "Neutral"; // 0x356 MovS
	func_654(var_12_int, var_141_string); // 0x357 Call
	var_142_int = 9688; // 0x359 PushI
	SetMessage(var_142_int); // 0x35a TObjFunc
	ClearReplies(); // 0x35c TObjFunc
	var_143_int = 9689; // 0x35e PushI
	var_144_int = -1; // 0x35f PushI
	var_145_int = 10666; // 0x360 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x361 TObjFunc
	var_146_int = 9690; // 0x363 PushI
	var_147_int = 10668; // 0x364 PushI
	var_148_int = 10667; // 0x365 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x366 TObjFunc
	return 0; // 0x368 Return
	
Label_873:
	var_149_int = 10668; // 0x369 PushI
	var_150_bool = var_11_int == var_149_int; // 0x36a Eq
	if(var_150_bool == 0) goto Label_896; // 0x36b JumpB
	var_151_string = ""; // 0x36c PushV
	var_151_string = "Neutral"; // 0x36d MovS
	func_654(var_12_int, var_151_string); // 0x36e Call
	var_152_int = 9691; // 0x370 PushI
	SetMessage(var_152_int); // 0x371 TObjFunc
	ClearReplies(); // 0x373 TObjFunc
	var_153_int = 9692; // 0x375 PushI
	var_154_int = -1; // 0x376 PushI
	var_155_int = 10669; // 0x377 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x378 TObjFunc
	var_156_int = 9693; // 0x37a PushI
	var_157_int = -1; // 0x37b PushI
	var_158_int = 10670; // 0x37c PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x37d TObjFunc
	return 0; // 0x37f Return
	
Label_896:
	var_159_int = 10653; // 0x380 PushI
	var_160_bool = var_11_int == var_159_int; // 0x381 Eq
	if(var_160_bool == 0) goto Label_919; // 0x382 JumpB
	var_161_string = ""; // 0x383 PushV
	var_161_string = "Neutral"; // 0x384 MovS
	func_654(var_12_int, var_161_string); // 0x385 Call
	var_162_int = 9678; // 0x387 PushI
	SetMessage(var_162_int); // 0x388 TObjFunc
	ClearReplies(); // 0x38a TObjFunc
	var_163_int = 9679; // 0x38c PushI
	var_164_int = 10643; // 0x38d PushI
	var_165_int = 10654; // 0x38e PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x38f TObjFunc
	var_166_int = 9680; // 0x391 PushI
	var_167_int = 10643; // 0x392 PushI
	var_168_int = 10656; // 0x393 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_169_int = 10643; // 0x397 PushI
	var_170_bool = var_11_int == var_169_int; // 0x398 Eq
	if(var_170_bool == 0) goto Label_937; // 0x399 JumpB
	var_171_string = ""; // 0x39a PushV
	var_171_string = "Neutral"; // 0x39b MovS
	func_654(var_12_int, var_171_string); // 0x39c Call
	var_172_int = 9669; // 0x39e PushI
	SetMessage(var_172_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_173_int = 9670; // 0x3a3 PushI
	var_174_int = 10645; // 0x3a4 PushI
	var_175_int = 10644; // 0x3a5 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_176_int = 10645; // 0x3a9 PushI
	var_177_bool = var_11_int == var_176_int; // 0x3aa Eq
	if(var_177_bool == 0) goto Label_960; // 0x3ab JumpB
	var_178_string = ""; // 0x3ac PushV
	var_178_string = "Neutral"; // 0x3ad MovS
	func_654(var_12_int, var_178_string); // 0x3ae Call
	var_179_int = 9671; // 0x3b0 PushI
	SetMessage(var_179_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_180_int = 9672; // 0x3b5 PushI
	var_181_int = 10647; // 0x3b6 PushI
	var_182_int = 10646; // 0x3b7 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x3b8 TObjFunc
	var_183_int = 9676; // 0x3ba PushI
	var_184_int = 10647; // 0x3bb PushI
	var_185_int = 10650; // 0x3bc PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x3bd TObjFunc
	return 0; // 0x3bf Return
	
Label_960:
	var_186_int = 10647; // 0x3c0 PushI
	var_187_bool = var_11_int == var_186_int; // 0x3c1 Eq
	if(var_187_bool == 0) goto Label_983; // 0x3c2 JumpB
	var_188_string = ""; // 0x3c3 PushV
	var_188_string = "Neutral"; // 0x3c4 MovS
	func_654(var_12_int, var_188_string); // 0x3c5 Call
	var_189_int = 9673; // 0x3c7 PushI
	SetMessage(var_189_int); // 0x3c8 TObjFunc
	ClearReplies(); // 0x3ca TObjFunc
	var_190_int = 9674; // 0x3cc PushI
	var_191_int = -1; // 0x3cd PushI
	var_192_int = 10648; // 0x3ce PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x3cf TObjFunc
	var_193_int = 9675; // 0x3d1 PushI
	var_194_int = -1; // 0x3d2 PushI
	var_195_int = 10649; // 0x3d3 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_3_object = 1; // 0x3d7 TMovB
	var_196_bool = 0; // 0x3d8 PushV
	func_1504(var_196_bool); // 0x3d9 Call
	if(var_196_bool == 0) goto Label_991; // 0x3db JumpB
	lshStopAnimation(); // 0x3dc Func
	goto Label_993; // 0x3de Jump
	
Label_993:
	return 0; // 0x3e1 Return
	
Label_991:
	StopAnimation(); // 0x3df Func
	
Label_995:
	return 0; // 0x3e3 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x3fb PushV
	func_1138(); // 0x3fd Call
	var_14_int = 0; var_15_object = Obj(); // 0x3ff PushV
	var_15_object = var_11_object; // 0x400 Mov
	func_996(var_13_int, var_14_int, var_15_object); // 0x401 Call
	var_13_int = var_14_int; // 0x402 Mov
	var_134_int = 0; // 0x404 PushI
	var_135_bool = var_13_int == var_134_int; // 0x405 Eq
	if(var_135_bool == 0) goto Label_1055; // 0x406 JumpB
	var_136_bool = 0; var_137_string = ""; var_138_string = ""; // 0x407 PushV
	var_137_string = "quest_d4_01"; // 0x408 MovS
	var_138_string = "key1_done"; // 0x409 MovS
	func_1389(var_136_bool, var_137_string, var_138_string); // 0x40a Call
	var_142_object = Obj(); // 0x40c PushV
	var_142_object = var_11_object; // 0x40d Mov
	TaskCall(0); // 0x40e TaskCall
	func_0(var_142_object); // 0x40f Call
	TaskReturn(); // 0x410 TaskReturn
	var_245_object = Obj(); // 0x412 PushV
	var_245_object = var_11_object; // 0x413 Mov
	TaskCall(1); // 0x414 TaskCall
	func_182(var_245_object); // 0x415 Call
	TaskReturn(); // 0x416 TaskReturn
	var_301_object = Obj(); // 0x418 PushV
	var_301_object = var_11_object; // 0x419 Mov
	TaskCall(7); // 0x41a TaskCall
	func_1151(var_301_object); // 0x41b Call
	TaskReturn(); // 0x41c TaskReturn
	goto Label_1068; // 0x41e Jump
	
Label_1068:
	return 2; // 0x42c Return
	
Label_1055:
	var_309_int = 1; // 0x41f PushI
	var_310_bool = var_13_int == var_309_int; // 0x420 Eq
	if(var_310_bool == 0) goto Label_1068; // 0x421 JumpB
	var_311_bool = 0; var_312_string = ""; var_313_string = ""; // 0x422 PushV
	var_312_string = "quest_d4_01"; // 0x423 MovS
	var_313_string = "key1_done"; // 0x424 MovS
	func_1389(var_311_bool, var_312_string, var_313_string); // 0x425 Call
	TaskCall(2); // 0x428 TaskCall
	func_349(); // 0x429 Call
	TaskReturn(); // 0x42a TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0; // 0x592 Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0]; // 0x3ed PushGE
	var_12_int = 0; // 0x3ee PushV
	func_1170(var_12_int); // 0x3ef Call
	var_11_int = var_12_int; // 0x3f0 Mov
	GlobalVars[0] = var_11_int; // 0x3f2 PopGE
	
Label_1011:
	var_20_int = 3; // 0x3f3 PushI
	Sleep(var_20_int); // 0x3f4 Func
	func_1069(); // 0x3f7 Call
	goto Label_1011; // 0x3f9 Jump
}


func_1408(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x580 PushV
	var_42_int = 0; // 0x581 MovI
	
Label_1410:
	var_44_string = "all"; // 0x582 PushS
	var_45_string = ""; var_46_int = 0; // 0x583 PushV
	var_46_int = var_42_int; // 0x584 Mov
	func_1401(var_45_string, var_46_int); // 0x585 Call
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x587 Func
	var_50_bool = var_43_bool == 0; // 0x589 Not
	if(var_50_bool == 0) goto Label_1420; // 0x58a JumpB
	goto Label_1423; // 0x58b Jump
	
Label_1423:
	var_39_int = var_42_int; // 0x58f Mov
	return 4; // 0x590 Return
	
Label_1420:
	var_51_int = 1; // 0x58c PushI
	var_42_int = var_42_int + var_51_int; // 0x58d Add2
	goto Label_1410; // 0x58e Jump
}


func_0(var_142_object)
{
	var_145_int = 10; // 0x1 PushI
	var_146_int = 1; // 0x2 PushI
	SetTimer(var_145_int, var_146_int); // 0x3 Func
	
Label_5:
	var_147_bool = 0; var_148_object = Obj(); var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_bool = 0; // 0x5 PushV
	var_148_object = var_142_object; // 0x6 Mov
	var_149_float = 250; // 0x7 MovI
	var_150_float = 3000; // 0x8 MovI
	var_151_bool = 1; // 0x9 MovB
	var_152_bool = 1; // 0xa MovB
	func_49(var_144_object, var_142_object, var_147_bool, var_148_object, var_149_float, var_150_float, var_151_bool, var_152_bool); // 0xb Call
	var_230_int = 0; // 0xd PushV
	func_1170(var_230_int); // 0xe Call
	var_238_int = GlobalVars[0]; // 0x10 PushGE
	var_239_bool = var_230_int != var_238_int; // 0x11 Neq
	if(var_239_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_31; // 0x13 Jump
	
Label_31:
	var_240_int = 10; // 0x1f PushI
	KillTimer(var_240_int); // 0x20 Func
	return 0; // 0x22 Return
	
Label_20:
	var_241_int = 1; // 0x14 PushI
	Sleep(var_241_int); // 0x15 Func
	var_242_int = 0; // 0x17 PushV
	func_1170(var_242_int); // 0x18 Call
	var_243_int = GlobalVars[0]; // 0x1a PushGE
	var_244_bool = var_242_int != var_243_int; // 0x1b Neq
	if(var_244_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_31; // 0x1d Jump
	
Label_30:
	goto Label_5; // 0x1e Jump
}


func_1165(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x48d PushV
	GetPosition(var_19_cvector); // 0x48e Func
	var_17_cvector = var_19_cvector; // 0x490 Mov
	return 2; // 0x491 Return
}


func_654(var_2_bool, var_94_string)
{
	var_95_bool = 0; // 0x28f PushV
	func_1504(var_95_bool); // 0x290 Call
	var_96_bool = var_95_bool == 0; // 0x292 Not
	if(var_96_bool == 0) goto Label_661; // 0x293 JumpB
	return 0; // 0x294 Return
	
Label_661:
	var_97_bool = var_94_string == var_2_bool; // 0x295 Eq
	if(var_97_bool == 0) goto Label_664; // 0x296 JumpB
	return 0; // 0x297 Return
	
Label_664:
	var_98_string = ""; // 0x298 PushV
	var_98_string = var_94_string; // 0x299 Mov
	func_1323(var_98_string); // 0x29a Call
	var_2_bool = var_94_string; // 0x29c TMov
	return 0; // 0x29d Return
}


func_1170(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0; // 0x492 PushV
	GetScene(var_15_object); // 0x493 Func
	var_17_cvector = CVector(0,0,0); // 0x495 PushV
	func_1165(var_17_cvector); // 0x496 Call
	GetRegionByPt(var_16_int, var_17_cvector); // 0x498 ObjFunc
	var_12_int = var_16_int; // 0x49a Mov
	return 4; // 0x49b Return
}


func_1427()
{
	var_38_string = "playsound"; // 0x594 PushS
	var_39_string = "giveitem"; // 0x595 PushS
	TriggerWorld(var_38_string, var_39_string); // 0x596 Func
	return 0; // 0x598 Return
}


func_1433()
{
	var_44_string = "ood4WhiteMask1"; // 0x59a PushS
	var_45_int = 1; // 0x59b PushI
	SetVariable(var_44_string, var_45_int); // 0x59c Func
	return 0; // 0x59e Return
}


func_155(var_0_bool)
{
	var_0_bool = 1; // 0x9b TMovB
	var_12_int = 0; // 0x9c PushI
	KillTimer(var_12_int); // 0x9d Func
	Stop(); // 0x9f Func
	return 0; // 0xa1 Return
}


func_1181(var_193_bool, var_194_object, var_195_string)
{
	var_196_bool = 0; var_197_bool = 0; // 0x49d PushV
	var_198_string = "HasProperty"; // 0x49e PushS
	var_199_int = 2; // 0x49f PushI
	var_200_bool = IsFuncExist(var_194_object, var_198_string, var_199_int); // 0x4a0 FuncExist
	var_201_bool = var_200_bool == 0; // 0x4a1 Not
	if(var_201_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_193_bool = 0; // 0x4a3 MovB
	return 2; // 0x4a4 Return
	
Label_1189:
	HasProperty(var_195_string, var_197_bool); // 0x4a5 ObjFunc
	var_193_bool = var_197_bool; // 0x4a7 Mov
	return 2; // 0x4a8 Return
}


func_1439(var_17_object)
{
	var_19_string = "theaterkey is given"; // 0x5a0 PushS
	Trace(var_19_string); // 0x5a1 Func
	var_20_object = Obj(); var_21_string = ""; var_22_int = 0; // 0x5a3 PushV
	var_20_object = var_17_object; // 0x5a4 Mov
	var_21_string = "d4q01_theater_key"; // 0x5a5 MovS
	var_22_int = 1; // 0x5a6 MovI
	func_1376(var_20_object, var_21_string, var_22_int); // 0x5a7 Call
	return 0; // 0x5a9 Return
}


func_421(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x1a5 TMovB
	var_1_object = 0; // 0x1a6 TMovB
	Stop(); // 0x1a7 Func
	StopGroup0(); // 0x1a9 Func
	return 0; // 0x1ab Return
}


func_1319()
{
	CameraSwitchToNormal(); // 0x528 Func
	return 0; // 0x52a Return
}


func_1193(var_186_bool)
{
	var_188_bool = 0; var_189_bool = 0; // 0x4a9 PushV
	IsDead(var_189_bool); // 0x4aa ObjFunc
	var_186_bool = var_189_bool; // 0x4ac Mov
	return 2; // 0x4ad Return
}


func_1450(var_58_object)
{
	var_60_string = "tvirin is given"; // 0x5ab PushS
	Trace(var_60_string); // 0x5ac Func
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0; // 0x5ae PushV
	var_61_object = var_58_object; // 0x5af Mov
	var_62_string = "tvirin"; // 0x5b0 MovS
	var_63_int = 1; // 0x5b1 MovI
	func_1376(var_61_object, var_62_string, var_63_int); // 0x5b2 Call
	return 0; // 0x5b4 Return
}


func_171(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj(); // 0xac PushV
	var_172_object = var_170_object; // 0xad Mov
	func_1234(var_171_bool, var_172_object); // 0xae Call
	var_169_bool = var_171_bool; // 0xaf Mov
	return 0; // 0xb1 Return
}


func_1323(var_98_string)
{
	var_99_float = 0; var_100_float = 0; var_101_float = 0; var_102_float = 0; // 0x52b PushV
	var_103_string = "playing "; // 0x52c PushS
	var_104_int = var_103_string + var_98_string; // 0x52d Add
	Trace(var_104_int); // 0x52e Func
	lshGetAnimTimes(var_98_string, var_101_float, var_102_float); // 0x530 Func
	lshPlayAnimation(var_101_float, var_102_float); // 0x532 Func
	var_105_string = "start: "; // 0x534 PushS
	var_106_int = var_105_string + var_101_float; // 0x535 Add
	Trace(var_106_int); // 0x536 Func
	var_107_string = "end: "; // 0x538 PushS
	var_108_int = var_107_string + var_102_float; // 0x539 Add
	Trace(var_108_int); // 0x53a Func
	return 4; // 0x53c Return
}


func_1069()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x42d PushV
	WaitForAnimEnd(); // 0x42e Func
	var_35_bool = 0; // 0x430 PushV
	func_1258(var_35_bool); // 0x431 Call
	var_38_bool = var_35_bool == 0; // 0x433 Not
	if(var_38_bool == 0) goto Label_1078; // 0x434 JumpB
	return 14; // 0x435 Return
	
Label_1078:
	var_39_int = 0; // 0x436 PushV
	func_1408(var_39_int); // 0x437 Call
	var_28_int = var_39_int; // 0x438 Mov
	var_29_int = 0; // 0x43a MovI
	
Label_1083:
	var_52_bool = 0; // 0x43b PushV
	var_52_bool = 0; // 0x43c MovB
	var_53_int = 5; // 0x43d PushI
	var_54_bool = var_29_int < var_53_int; // 0x43e LT
	if(var_54_bool == 0) goto Label_1093; // 0x43f JumpB
	var_55_bool = 0; // 0x440 PushV
	func_1258(var_55_bool); // 0x441 Call
	if(var_55_bool == 0) goto Label_1093; // 0x443 JumpB
	var_52_bool = 1; // 0x444 MovB
	
Label_1093:
	if(var_52_bool == 0) goto Label_1137; // 0x445 JumpB
	var_56_int = 3; // 0x446 PushI
	irand(var_30_int, var_56_int); // 0x447 Func
	var_57_int = 0; // 0x449 PushI
	var_58_bool = var_30_int == var_57_int; // 0x44a Eq
	if(var_58_bool == 0) goto Label_1117; // 0x44b JumpB
	var_59_int = var_28_int; // 0x44c Push
	if(var_59_int == 0) goto Label_1116; // 0x44d JumpB
	irand(var_31_int, var_28_int); // 0x44e Func
	var_60_string = "all"; // 0x450 PushS
	var_61_string = ""; var_62_int = 0; // 0x451 PushV
	var_62_int = var_31_int; // 0x452 Mov
	func_1401(var_61_string, var_62_int); // 0x453 Call
	PlayAnimation(var_60_string, var_61_string); // 0x455 Func
	WaitForAnimEnd(var_32_bool); // 0x457 Func
	var_63_bool = var_32_bool == 0; // 0x459 Not
	if(var_63_bool == 0) goto Label_1116; // 0x45a JumpB
	goto Label_1137; // 0x45b Jump
	
Label_1137:
	return 14; // 0x471 Return
	
Label_1116:
	goto Label_1134; // 0x45c Jump
	
Label_1134:
	var_64_int = 1; // 0x46e PushI
	var_29_int = var_29_int + var_64_int; // 0x46f Add2
	goto Label_1083; // 0x470 Jump
	
Label_1117:
	var_65_int = 1; // 0x45d PushI
	var_66_bool = var_30_int == var_65_int; // 0x45e Eq
	if(var_66_bool == 0) goto Label_1131; // 0x45f JumpB
	var_67_int = 4; // 0x460 PushI
	rand(var_33_float, var_67_int); // 0x461 Func
	var_68_int = 1; // 0x463 PushI
	var_69_int = var_33_float + var_68_int; // 0x464 Add
	Sleep(var_69_int, var_34_bool); // 0x465 Func
	var_70_bool = var_34_bool == 0; // 0x467 Not
	if(var_70_bool == 0) goto Label_1130; // 0x468 JumpB
	goto Label_1137; // 0x469 Jump
	
Label_1130:
	goto Label_1134; // 0x46a Jump
	
Label_1131:
	var_71_int = var_29_int; // 0x46b Push
	if(var_71_int == 0) goto Label_1134; // 0x46c JumpB
	goto Label_1137; // 0x46d Jump
}


func_1198(var_175_bool, var_176_object)
{
	var_177_object = Obj(); var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj(); // 0x4ae PushV
	var_181_bool = var_176_object == 0; // 0x4af NullEq
	if(var_181_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_175_bool = 0; // 0x4b1 MovB
	return 4; // 0x4b2 Return
	
Label_1203:
	var_182_bool = 0; // 0x4b3 PushV
	var_182_bool = 0; // 0x4b4 MovB
	var_183_string = "IsDead"; // 0x4b5 PushS
	var_184_int = 1; // 0x4b6 PushI
	var_185_bool = IsFuncExist(var_176_object, var_183_string, var_184_int); // 0x4b7 FuncExist
	if(var_185_bool == 0) goto Label_1215; // 0x4b8 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x4b9 PushV
	var_187_object = var_176_object; // 0x4ba Mov
	func_1193(var_187_object); // 0x4bb Call
	if(var_186_bool == 0) goto Label_1215; // 0x4bd JumpB
	var_182_bool = 1; // 0x4be MovB
	
Label_1215:
	if(var_182_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_175_bool = 0; // 0x4c0 MovB
	return 4; // 0x4c1 Return
	
Label_1218:
	GetScene(var_179_object); // 0x4c2 Func
	var_190_bool = var_179_object == 0; // 0x4c4 NullEq
	if(var_190_bool == 0) goto Label_1224; // 0x4c5 JumpB
	var_175_bool = 0; // 0x4c6 MovB
	return 4; // 0x4c7 Return
	
Label_1224:
	GetScene(var_180_object); // 0x4c8 ObjFunc
	var_191_bool = var_179_object != var_180_object; // 0x4ca Neq
	if(var_191_bool == 0) goto Label_1230; // 0x4cb JumpB
	var_175_bool = 0; // 0x4cc MovB
	return 4; // 0x4cd Return
	
Label_1230:
	var_175_bool = 1; // 0x4ce MovB
	return 4; // 0x4cf Return
}


func_49(var_0_bool, var_1_object, var_147_bool, var_148_object, var_149_float, var_150_float, var_151_bool, var_152_bool)
{
	var_153_bool = 0; var_154_bool = 0; var_155_object = Obj(); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_float = 0; var_160_object = Obj(); var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj(); // 0x31 PushV
	var_0_bool = 0; // 0x32 TMovB
	var_1_object = var_148_object; // 0x33 TMov
	var_162_bool = var_152_bool; // 0x34 Mov
	
Label_53:
	var_169_bool = 0; var_170_object = Obj(); // 0x35 PushV
	var_170_object = var_148_object; // 0x36 Mov
	func_171(var_169_bool, var_170_object); // 0x37 Call
	var_205_bool = var_169_bool == 0; // 0x39 Not
	if(var_205_bool == 0) goto Label_61; // 0x3a JumpB
	var_147_bool = 0; // 0x3b MovB
	return 16; // 0x3c Return
	
Label_61:
	GetPosition(var_164_cvector); // 0x3d ObjFunc
	GetPosition(var_165_cvector); // 0x3f Func
	var_166_cvector = var_164_cvector - var_165_cvector; // 0x41 Sub2
	var_167_float = var_166_cvector | var_166_cvector; // 0x42 Or2
	var_206_bool = 0; // 0x43 PushV
	var_206_bool = 0; // 0x44 MovB
	var_207_int = 0; // 0x45 PushI
	var_208_bool = var_150_float > var_207_int; // 0x46 GT
	if(var_208_bool == 0) goto Label_76; // 0x47 JumpB
	var_209_float = var_150_float * var_150_float; // 0x48 Mult
	var_210_bool = var_167_float > var_209_float; // 0x49 GT
	if(var_210_bool == 0) goto Label_76; // 0x4a JumpB
	var_206_bool = 1; // 0x4b MovB
	
Label_76:
	if(var_206_bool == 0) goto Label_81; // 0x4c JumpB
	Stop(); // 0x4d Func
	var_147_bool = 0; // 0x4f MovB
	return 16; // 0x50 Return
	
Label_81:
	var_211_float = var_149_float * var_149_float; // 0x51 Mult
	var_212_bool = var_167_float > var_211_float; // 0x52 GT
	if(var_212_bool == 0) goto Label_143; // 0x53 JumpB
	GetPFPosition(var_164_cvector); // 0x54 ObjFunc
	FindPathTo(var_168_object, var_164_cvector); // 0x56 Func
	var_213_bool = var_168_object != 0; // 0x58 NullNeq
	if(var_213_bool == 0) goto Label_92; // 0x59 JumpB
	var_163_object = var_168_object; // 0x5a Mov
	var_168_object = 0; // 0x5b SetNull
	
Label_92:
	var_214_bool = var_163_object != 0; // 0x5c NullNeq
	if(var_214_bool == 0) goto Label_125; // 0x5d JumpB
	var_215_bool = var_162_bool; // 0x5e Push
	if(var_215_bool == 0) goto Label_102; // 0x5f JumpB
	var_162_bool = 0; // 0x60 MovB
	RotatePath(var_163_object, var_161_bool); // 0x61 Func
	var_216_bool = var_161_bool == 0; // 0x63 Not
	if(var_216_bool == 0) goto Label_102; // 0x64 JumpB
	goto Label_149; // 0x65 Jump
	
Label_149:
	var_147_bool = !var_0_bool; // 0x95 Not2
	return 16; // 0x96 Return
	
Label_102:
	var_217_int = 0; // 0x66 PushI
	var_218_float = 0.3; // 0x67 PushF
	SetTimer(var_217_int, var_218_float); // 0x68 Func
	var_219_string = ""; // 0x6a PushV
	func_178(var_219_string); // 0x6b Call
	var_220_string = ""; // 0x6d PushV
	func_180(var_220_string); // 0x6e Call
	FollowPath(var_163_object, var_151_bool, var_161_bool, var_219_string, var_220_string); // 0x70 Func
	var_221_bool = var_161_bool == 0; // 0x72 Not
	if(var_221_bool == 0) goto Label_123; // 0x73 JumpB
	var_222_bool = var_0_bool; // 0x74 PushT
	if(var_222_bool == 0) goto Label_121; // 0x75 JumpB
	var_163_object = 0; // 0x76 SetNull
	goto Label_149; // 0x77 Jump
	
Label_121:
	goto Label_148; // 0x79 Jump
	
Label_148:
	goto Label_53; // 0x94 Jump
	
Label_123:
	var_163_object = 0; // 0x7b SetNull
	goto Label_141; // 0x7c Jump
	
Label_141:
	var_168_object = 0; // 0x8d SetNull
	goto Label_147; // 0x8e Jump
	
Label_147:
	var_163_object = 0; // 0x93 SetNull
	
Label_125:
	var_223_int = 0; // 0x7d PushI
	KillTimer(var_223_int); // 0x7e Func
	var_224_float = 0.5; // 0x80 PushF
	Sleep(var_224_float, var_161_bool); // 0x81 Func
	var_225_bool = var_161_bool == 0; // 0x83 Not
	if(var_225_bool == 0) goto Label_137; // 0x84 JumpB
	var_226_bool = var_0_bool; // 0x85 PushT
	if(var_226_bool == 0) goto Label_137; // 0x86 JumpB
	var_163_object = 0; // 0x87 SetNull
	goto Label_149; // 0x88 Jump
	
Label_137:
	var_227_int = 0; // 0x89 PushI
	var_228_float = 0.3; // 0x8a PushF
	SetTimer(var_227_int, var_228_float); // 0x8b Func
	
Label_143:
	var_229_int = 0; // 0x8f PushI
	KillTimer(var_229_int); // 0x90 Func
	goto Label_149; // 0x92 Jump
}


func_178(var_219_string)
{
	var_219_string = "walk"; // 0xb2 MovS
	return 0; // 0xb3 Return
}


func_180(var_220_string)
{
	var_220_string = "run"; // 0xb4 MovS
	return 0; // 0xb5 Return
}


func_437(var_337_bool)
{
	var_337_bool = 0; // 0x1b5 MovB
	return 0; // 0x1b6 Return
}


func_1461()
{
	var_48_int = 0; // 0x5b6 PushI
	SetReturnValue(var_48_int); // 0x5b7 ObjFunc
	return 0; // 0x5b9 Return
}


func_439()
{
	var_339_int = 0; var_340_int = 0; var_341_int = 0; var_342_int = 0; var_343_bool = 0; var_344_float = 0; var_345_bool = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_int = 0; var_350_bool = 0; var_351_float = 0; var_352_bool = 0; // 0x1b7 PushV
	WaitForAnimEnd(); // 0x1b8 Func
	var_353_bool = 0; // 0x1ba PushV
	func_1258(var_353_bool); // 0x1bb Call
	var_356_bool = var_353_bool == 0; // 0x1bd Not
	if(var_356_bool == 0) goto Label_448; // 0x1be JumpB
	return 14; // 0x1bf Return
	
Label_448:
	var_357_int = 0; // 0x1c0 PushV
	func_1408(var_357_int); // 0x1c1 Call
	var_346_int = var_357_int; // 0x1c2 Mov
	var_347_int = 0; // 0x1c4 MovI
	
Label_453:
	var_370_bool = 0; // 0x1c5 PushV
	var_370_bool = 0; // 0x1c6 MovB
	var_371_int = 5; // 0x1c7 PushI
	var_372_bool = var_347_int < var_371_int; // 0x1c8 LT
	if(var_372_bool == 0) goto Label_463; // 0x1c9 JumpB
	var_373_bool = 0; // 0x1ca PushV
	func_1258(var_373_bool); // 0x1cb Call
	if(var_373_bool == 0) goto Label_463; // 0x1cd JumpB
	var_370_bool = 1; // 0x1ce MovB
	
Label_463:
	if(var_370_bool == 0) goto Label_507; // 0x1cf JumpB
	var_374_int = 3; // 0x1d0 PushI
	irand(var_348_int, var_374_int); // 0x1d1 Func
	var_375_int = 0; // 0x1d3 PushI
	var_376_bool = var_348_int == var_375_int; // 0x1d4 Eq
	if(var_376_bool == 0) goto Label_487; // 0x1d5 JumpB
	var_377_int = var_346_int; // 0x1d6 Push
	if(var_377_int == 0) goto Label_486; // 0x1d7 JumpB
	irand(var_349_int, var_346_int); // 0x1d8 Func
	var_378_string = "all"; // 0x1da PushS
	var_379_string = ""; var_380_int = 0; // 0x1db PushV
	var_380_int = var_349_int; // 0x1dc Mov
	func_1401(var_379_string, var_380_int); // 0x1dd Call
	PlayAnimation(var_378_string, var_379_string); // 0x1df Func
	WaitForAnimEnd(var_350_bool); // 0x1e1 Func
	var_381_bool = var_350_bool == 0; // 0x1e3 Not
	if(var_381_bool == 0) goto Label_486; // 0x1e4 JumpB
	goto Label_507; // 0x1e5 Jump
	
Label_507:
	return 14; // 0x1fb Return
	
Label_486:
	goto Label_504; // 0x1e6 Jump
	
Label_504:
	var_382_int = 1; // 0x1f8 PushI
	var_347_int = var_347_int + var_382_int; // 0x1f9 Add2
	goto Label_453; // 0x1fa Jump
	
Label_487:
	var_383_int = 1; // 0x1e7 PushI
	var_384_bool = var_348_int == var_383_int; // 0x1e8 Eq
	if(var_384_bool == 0) goto Label_501; // 0x1e9 JumpB
	var_385_int = 4; // 0x1ea PushI
	rand(var_351_float, var_385_int); // 0x1eb Func
	var_386_int = 1; // 0x1ed PushI
	var_387_int = var_351_float + var_386_int; // 0x1ee Add
	Sleep(var_387_int, var_352_bool); // 0x1ef Func
	var_388_bool = var_352_bool == 0; // 0x1f1 Not
	if(var_388_bool == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_507; // 0x1f3 Jump
	
Label_500:
	goto Label_504; // 0x1f4 Jump
	
Label_501:
	var_389_int = var_347_int; // 0x1f5 Push
	if(var_389_int == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_507; // 0x1f7 Jump
}


func_182(var_245_object)
{
	
Label_183:
	var_248_bool = 0; var_249_object = Obj(); var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_bool = 0; // 0xb7 PushV
	var_249_object = var_245_object; // 0xb8 Mov
	var_250_float = 250; // 0xb9 MovI
	var_251_float = 3000; // 0xba MovI
	var_252_bool = 1; // 0xbb MovB
	var_253_bool = 1; // 0xbc MovB
	func_198(var_247_object, var_245_object, var_248_bool, var_249_object, var_250_float, var_251_float, var_252_bool, var_253_bool); // 0xbd Call
	var_299_bool = var_248_bool == 0; // 0xbf Not
	if(var_299_bool == 0) goto Label_197; // 0xc0 JumpB
	var_300_int = 1; // 0xc1 PushI
	Sleep(var_300_int); // 0xc2 Func
	goto Label_183; // 0xc4 Jump
	
Label_197:
	return 0; // 0xc5 Return
}


func_1466()
{
	var_55_int = 1; // 0x5bb PushI
	SetReturnValue(var_55_int); // 0x5bc ObjFunc
	return 0; // 0x5be Return
}


func_571(var_0_bool, var_1_object, var_2_bool, var_3_object, var_79_object, var_80_object)
{
	var_0_bool = var_80_object; // 0x23c TMov
	var_1_object = var_79_object; // 0x23d TMov
	var_3_object = 0; // 0x23e TMovB
	var_85_int = 1; // 0x23f PushI
	if(var_85_int == 0) goto Label_624; // 0x240 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x241 PushV
	var_87_object = var_1_object; // 0x242 MovT
	func_1471(var_87_object); // 0x243 Call
	if(var_86_bool == 0) goto Label_602; // 0x245 JumpB
	var_94_string = ""; // 0x246 PushV
	var_94_string = "Neutral"; // 0x247 MovS
	func_654(var_80_object, var_94_string); // 0x248 Call
	var_109_int = 9667; // 0x24a PushI
	SetMessage(var_109_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_110_int = 9668; // 0x24f PushI
	var_111_int = 10643; // 0x250 PushI
	var_112_int = 10642; // 0x251 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x252 TObjFunc
	var_113_int = 9677; // 0x254 PushI
	var_114_int = 10653; // 0x255 PushI
	var_115_int = 10652; // 0x256 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x257 TObjFunc
	goto Label_624; // 0x259 Jump
	
Label_624:
	var_116_bool = 0; // 0x270 PushV
	func_1504(var_116_bool); // 0x271 Call
	if(var_116_bool == 0) goto Label_639; // 0x273 JumpB
	
Label_628:
	lshWaitForAnimEnd(); // 0x274 Func
	var_117_object = var_3_object; // 0x276 PushT
	if(var_117_object == 0) goto Label_633; // 0x277 JumpB
	goto Label_638; // 0x278 Jump
	
Label_638:
	goto Label_653; // 0x27e Jump
	
Label_653:
	return 0; // 0x28d Return
	
Label_633:
	var_118_string = ""; // 0x279 PushV
	var_118_string = var_2_bool; // 0x27a MovT
	func_1323(var_118_string); // 0x27b Call
	goto Label_628; // 0x27d Jump
	
Label_639:
	var_119_string = "all"; // 0x27f PushS
	var_120_string = "idle"; // 0x280 PushS
	PlayAnimation(var_119_string, var_120_string); // 0x281 Func
	
Label_643:
	WaitForAnimEnd(); // 0x283 Func
	var_121_object = var_3_object; // 0x285 PushT
	if(var_121_object == 0) goto Label_648; // 0x286 JumpB
	goto Label_653; // 0x287 Jump
	
Label_648:
	var_122_string = "all"; // 0x288 PushS
	var_123_string = "idle"; // 0x289 PushS
	PlayAnimation(var_122_string, var_123_string); // 0x28a Func
	goto Label_643; // 0x28c Jump
	
Label_602:
	var_124_string = ""; // 0x25a PushV
	var_124_string = "Neutral"; // 0x25b MovS
	func_654(var_80_object, var_124_string); // 0x25c Call
	var_125_int = 9681; // 0x25e PushI
	SetMessage(var_125_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_126_int = 9682; // 0x263 PushI
	var_127_int = 10660; // 0x264 PushI
	var_128_int = 10659; // 0x265 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x266 TObjFunc
	var_129_int = 9699; // 0x268 PushI
	var_130_int = -1; // 0x269 PushI
	var_131_int = 10678; // 0x26a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x26b TObjFunc
	goto Label_624; // 0x26d Jump
}


func_1341()
{
	var_14_bool = 0; // 0x53d PushV
	func_1504(var_14_bool); // 0x53e Call
	if(var_14_bool == 0) goto Label_1347; // 0x540 JumpB
	lshStopSpeech(); // 0x541 Func
	
Label_1347:
	return 0; // 0x543 Return
}


func_1471(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x5c0 PushV
	var_89_string = "ood4WhiteMask1"; // 0x5c1 MovS
	func_1358(var_88_int, var_89_string); // 0x5c2 Call
	var_92_int = 0; // 0x5c4 PushI
	var_93_bool = var_88_int == var_92_int; // 0x5c5 Eq
	if(var_93_bool == 0) goto Label_1481; // 0x5c6 JumpB
	var_86_bool = 1; // 0x5c7 MovB
	return 0; // 0x5c8 Return
	
Label_1481:
	var_86_bool = 0; // 0x5c9 MovB
	return 0; // 0x5ca Return
}


func_322(var_0_bool)
{
	var_0_bool = 1; // 0x142 TMovB
	var_12_int = 0; // 0x143 PushI
	KillTimer(var_12_int); // 0x144 Func
	Stop(); // 0x146 Func
	return 0; // 0x148 Return
}


func_1348(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x544 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x545 Or
	var_56_float = sqrt(var_57_int); // 0x546 Sqrt2
	var_58_float = 0.0; // 0x547 PushF
	var_59_bool = var_56_float < var_58_float; // 0x548 LT
	if(var_59_bool == 0) goto Label_1356; // 0x549 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x54a MovV
	return 2; // 0x54b Return
	
Label_1356:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x54c Div2
	return 2; // 0x54d Return
}


func_198(var_0_bool, var_1_object, var_248_bool, var_249_object, var_250_float, var_251_float, var_252_bool, var_253_bool)
{
	var_254_bool = 0; var_255_bool = 0; var_256_object = Obj(); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_float = 0; var_261_object = Obj(); var_262_bool = 0; var_263_bool = 0; var_264_object = Obj(); var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_float = 0; var_269_object = Obj(); // 0xc6 PushV
	var_0_bool = 0; // 0xc7 TMovB
	var_1_object = var_249_object; // 0xc8 TMov
	var_263_bool = var_253_bool; // 0xc9 Mov
	
Label_202:
	var_270_bool = 0; var_271_object = Obj(); // 0xca PushV
	var_271_object = var_249_object; // 0xcb Mov
	func_338(var_270_bool, var_271_object); // 0xcc Call
	var_274_bool = var_270_bool == 0; // 0xce Not
	if(var_274_bool == 0) goto Label_210; // 0xcf JumpB
	var_248_bool = 0; // 0xd0 MovB
	return 16; // 0xd1 Return
	
Label_210:
	GetPosition(var_265_cvector); // 0xd2 ObjFunc
	GetPosition(var_266_cvector); // 0xd4 Func
	var_267_cvector = var_265_cvector - var_266_cvector; // 0xd6 Sub2
	var_268_float = var_267_cvector | var_267_cvector; // 0xd7 Or2
	var_275_bool = 0; // 0xd8 PushV
	var_275_bool = 0; // 0xd9 MovB
	var_276_int = 0; // 0xda PushI
	var_277_bool = var_251_float > var_276_int; // 0xdb GT
	if(var_277_bool == 0) goto Label_225; // 0xdc JumpB
	var_278_float = var_251_float * var_251_float; // 0xdd Mult
	var_279_bool = var_268_float > var_278_float; // 0xde GT
	if(var_279_bool == 0) goto Label_225; // 0xdf JumpB
	var_275_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_275_bool == 0) goto Label_230; // 0xe1 JumpB
	Stop(); // 0xe2 Func
	var_248_bool = 0; // 0xe4 MovB
	return 16; // 0xe5 Return
	
Label_230:
	var_280_float = var_250_float * var_250_float; // 0xe6 Mult
	var_281_bool = var_268_float > var_280_float; // 0xe7 GT
	if(var_281_bool == 0) goto Label_292; // 0xe8 JumpB
	GetPFPosition(var_265_cvector); // 0xe9 ObjFunc
	FindPathTo(var_269_object, var_265_cvector); // 0xeb Func
	var_282_bool = var_269_object != 0; // 0xed NullNeq
	if(var_282_bool == 0) goto Label_241; // 0xee JumpB
	var_264_object = var_269_object; // 0xef Mov
	var_269_object = 0; // 0xf0 SetNull
	
Label_241:
	var_283_bool = var_264_object != 0; // 0xf1 NullNeq
	if(var_283_bool == 0) goto Label_274; // 0xf2 JumpB
	var_284_bool = var_263_bool; // 0xf3 Push
	if(var_284_bool == 0) goto Label_251; // 0xf4 JumpB
	var_263_bool = 0; // 0xf5 MovB
	RotatePath(var_264_object, var_262_bool); // 0xf6 Func
	var_285_bool = var_262_bool == 0; // 0xf8 Not
	if(var_285_bool == 0) goto Label_251; // 0xf9 JumpB
	goto Label_298; // 0xfa Jump
	
Label_298:
	var_248_bool = !var_0_bool; // 0x12a Not2
	return 16; // 0x12b Return
	
Label_251:
	var_286_int = 0; // 0xfb PushI
	var_287_float = 0.3; // 0xfc PushF
	SetTimer(var_286_int, var_287_float); // 0xfd Func
	var_288_string = ""; // 0xff PushV
	func_345(var_288_string); // 0x100 Call
	var_289_string = ""; // 0x102 PushV
	func_347(var_289_string); // 0x103 Call
	FollowPath(var_264_object, var_252_bool, var_262_bool, var_288_string, var_289_string); // 0x105 Func
	var_290_bool = var_262_bool == 0; // 0x107 Not
	if(var_290_bool == 0) goto Label_272; // 0x108 JumpB
	var_291_bool = var_0_bool; // 0x109 PushT
	if(var_291_bool == 0) goto Label_270; // 0x10a JumpB
	var_264_object = 0; // 0x10b SetNull
	goto Label_298; // 0x10c Jump
	
Label_270:
	goto Label_297; // 0x10e Jump
	
Label_297:
	goto Label_202; // 0x129 Jump
	
Label_272:
	var_264_object = 0; // 0x110 SetNull
	goto Label_290; // 0x111 Jump
	
Label_290:
	var_269_object = 0; // 0x122 SetNull
	goto Label_296; // 0x123 Jump
	
Label_296:
	var_264_object = 0; // 0x128 SetNull
	
Label_274:
	var_292_int = 0; // 0x112 PushI
	KillTimer(var_292_int); // 0x113 Func
	var_293_float = 0.5; // 0x115 PushF
	Sleep(var_293_float, var_262_bool); // 0x116 Func
	var_294_bool = var_262_bool == 0; // 0x118 Not
	if(var_294_bool == 0) goto Label_286; // 0x119 JumpB
	var_295_bool = var_0_bool; // 0x11a PushT
	if(var_295_bool == 0) goto Label_286; // 0x11b JumpB
	var_264_object = 0; // 0x11c SetNull
	goto Label_298; // 0x11d Jump
	
Label_286:
	var_296_int = 0; // 0x11e PushI
	var_297_float = 0.3; // 0x11f PushF
	SetTimer(var_296_int, var_297_float); // 0x120 Func
	
Label_292:
	var_298_int = 0; // 0x124 PushI
	KillTimer(var_298_int); // 0x125 Func
	goto Label_298; // 0x127 Jump
}


func_1483(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x5cb PushV
	var_73_string = "player"; // 0x5cc PushS
	GetVariable(var_73_string, var_72_int); // 0x5cd Func
	var_74_int = 0; // 0x5cf PushI
	var_75_bool = var_72_int == var_74_int; // 0x5d0 Eq
	if(var_75_bool == 0) goto Label_1493; // 0x5d1 JumpB
	var_70_int = 200001; // 0x5d2 MovI
	return 2; // 0x5d3 Return
	
Label_1493:
	var_76_int = 1; // 0x5d5 PushI
	var_77_bool = var_72_int == var_76_int; // 0x5d6 Eq
	if(var_77_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_70_int = 200002; // 0x5d8 MovI
	return 2; // 0x5d9 Return
	
Label_1498:
	var_70_int = 200003; // 0x5da MovI
	return 2; // 0x5db Return
}


func_1358(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x54e PushV
	GetVariable(var_89_string, var_91_int); // 0x54f Func
	var_88_int = var_91_int; // 0x551 Mov
	return 2; // 0x552 Return
}


func_1234(var_171_bool, var_172_object)
{
	var_173_int = 0; var_174_int = 0; // 0x4d2 PushV
	var_175_bool = 0; var_176_object = Obj(); // 0x4d3 PushV
	var_176_object = var_172_object; // 0x4d4 Mov
	func_1198(var_175_bool, var_176_object); // 0x4d5 Call
	var_192_bool = var_175_bool == 0; // 0x4d7 Not
	if(var_192_bool == 0) goto Label_1243; // 0x4d8 JumpB
	var_171_bool = 0; // 0x4d9 MovB
	return 2; // 0x4da Return
	
Label_1243:
	var_193_bool = 0; var_194_object = Obj(); var_195_string = ""; // 0x4db PushV
	var_194_object = var_172_object; // 0x4dc Mov
	var_195_string = "noaccess"; // 0x4dd MovS
	func_1181(var_193_bool, var_194_object, var_195_string); // 0x4de Call
	var_202_bool = var_193_bool == 0; // 0x4e0 Not
	if(var_202_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_171_bool = 1; // 0x4e2 MovB
	return 2; // 0x4e3 Return
	
Label_1252:
	var_203_string = "noaccess"; // 0x4e4 PushS
	GetProperty(var_203_string, var_174_int); // 0x4e5 ObjFunc
	var_204_int = 0; // 0x4e7 PushI
	var_171_bool = var_174_int == var_204_int; // 0x4e8 Eq2
	return 2; // 0x4e9 Return
}


func_338(var_270_bool, var_271_object)
{
	var_272_bool = 0; var_273_object = Obj(); // 0x153 PushV
	var_273_object = var_271_object; // 0x154 Mov
	func_1234(var_272_bool, var_273_object); // 0x155 Call
	var_270_bool = var_272_bool; // 0x156 Mov
	return 0; // 0x158 Return
}


func_1363(var_26_object, var_27_int)
{
	var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; // 0x553 PushV
	GetItemID(var_31_int); // 0x554 ObjFunc
	var_34_string = "Category"; // 0x556 PushS
	GetInvItemProperty(var_32_int, var_31_int, var_34_string); // 0x557 Func
	AddItem(var_33_bool, var_26_object, var_32_int, var_27_int); // 0x559 ObjFunc
	var_35_bool = var_33_bool == 0; // 0x55b Not
	if(var_35_bool == 0) goto Label_1375; // 0x55c JumpB
	DropItems(var_26_object, var_27_int); // 0x55d ObjFunc
	
Label_1375:
	return 6; // 0x55f Return
}


func_345(var_288_string)
{
	var_288_string = "walk"; // 0x159 MovS
	return 0; // 0x15a Return
}


func_347(var_289_string)
{
	var_289_string = "run"; // 0x15b MovS
	return 0; // 0x15c Return
}


func_1500(var_68_int)
{
	var_68_int = 3354; // 0x5dc MovI
	return 0; // 0x5dd Return
}


func_349()
{
	
Label_349:
	func_357(var_314_bool, var_315_bool); // 0x15e Call
	var_392_int = 1; // 0x160 PushI
	Sleep(var_392_int); // 0x161 Func
	goto Label_349; // 0x163 Jump
}


func_1502(var_69_string)
{
	var_69_string = "ui/NPC_Black.png"; // 0x5de MovS
	return 0; // 0x5df Return
}


func_1504(var_95_bool)
{
	var_95_bool = 0; // 0x5e0 MovB
	return 0; // 0x5e1 Return
}


func_1376(var_20_object, var_21_string, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x560 PushV
	CreateInvItem(var_24_object); // 0x561 Func
	SetItemName(var_21_string); // 0x563 ObjFunc
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; // 0x565 PushV
	var_25_object = var_20_object; // 0x566 Mov
	var_26_object = var_24_object; // 0x567 Mov
	var_27_int = var_22_int; // 0x568 Mov
	func_1363(var_26_object, var_27_int); // 0x569 Call
	return 2; // 0x56b Return
}


func_996(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0x3e5 PushV
	var_17_object = var_15_object; // 0x3e6 Mov
	TaskCall(4); // 0x3e7 TaskCall
	func_508(var_18_object, var_16_int, var_17_object); // 0x3e8 Call
	TaskReturn(); // 0x3e9 TaskReturn
	var_14_int = var_18_object; // 0x3ea Mov
	return 0; // 0x3ec Return
}


func_357(var_0_bool, var_1_object)
{
	var_316_float = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_bool = 0; var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_float = 0; var_327_bool = 0; var_328_object = Obj(); var_329_bool = 0; // 0x165 PushV
	var_0_bool = 0; // 0x166 TMovB
	var_1_object = 0; // 0x167 TMovB
	var_330_float = 0.5; // 0x168 PushF
	rand(var_323_float, var_330_float); // 0x169 Func
	Sleep(var_323_float); // 0x16b Func
	
Label_365:
	var_331_bool = var_0_bool == 0; // 0x16d Not
	if(var_331_bool == 0) goto Label_413; // 0x16e JumpB
	var_332_bool = var_1_object == 0; // 0x16f Not
	if(var_332_bool == 0) goto Label_385; // 0x170 JumpB
	
Label_369:
	GetPosition(var_325_cvector); // 0x171 Func
	GetCameraFarDistance(var_326_float); // 0x173 Func
	var_333_float = 2.5; // 0x175 PushF
	var_326_float = var_326_float * var_333_float; // 0x176 Mult2
	GetRandomPFPointInCircle(var_324_cvector, var_325_cvector, var_326_float, var_327_bool); // 0x177 Func
	var_334_bool = var_327_bool; // 0x179 Push
	if(var_334_bool == 0) goto Label_380; // 0x17a JumpB
	goto Label_384; // 0x17b Jump
	
Label_384:
	goto Label_386; // 0x180 Jump
	
Label_386:
	FindShiftedPathTo(var_328_object, var_324_cvector); // 0x182 Func
	var_335_bool = var_328_object != 0; // 0x184 NullNeq
	if(var_335_bool == 0) goto Label_408; // 0x185 JumpB
	RotatePath(var_328_object, var_329_bool); // 0x186 Func
	var_336_bool = var_329_bool; // 0x188 Push
	if(var_336_bool == 0) goto Label_407; // 0x189 JumpB
	var_337_bool = 0; // 0x18a PushV
	func_437(var_337_bool); // 0x18b Call
	FollowPath(var_328_object, var_337_bool, var_329_bool); // 0x18d Func
	var_328_object = 0; // 0x18f SetNull
	var_338_bool = var_329_bool; // 0x190 Push
	if(var_338_bool == 0) goto Label_407; // 0x191 JumpB
	TaskCall(3); // 0x193 TaskCall
	func_439(); // 0x194 Call
	TaskReturn(); // 0x195 TaskReturn
	
Label_407:
	goto Label_411; // 0x197 Jump
	
Label_411:
	var_328_object = 0; // 0x19b SetNull
	goto Label_365; // 0x19c Jump
	
Label_408:
	var_390_int = 1; // 0x198 PushI
	Sleep(var_390_int); // 0x199 Func
	
Label_380:
	var_391_int = 1; // 0x17c PushI
	Sleep(var_391_int); // 0x17d Func
	goto Label_369; // 0x17f Jump
	
Label_385:
	var_1_object = 0; // 0x181 TMovB
	
Label_413:
	return 14; // 0x19d Return
}


func_1258(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x4ea PushV
	IsLoaded(var_37_bool); // 0x4eb Func
	var_35_bool = var_37_bool; // 0x4ed Mov
	return 2; // 0x4ee Return
}


func_1389(var_136_bool, var_137_string, var_138_string)
{
	var_139_object = Obj(); var_140_object = Obj(); // 0x56d PushV
	FindActor(var_140_object, var_137_string); // 0x56e Func
	var_141_bool = var_140_object == 0; // 0x570 NullEq
	if(var_141_bool == 0) goto Label_1396; // 0x571 JumpB
	var_136_bool = 0; // 0x572 MovB
	return 2; // 0x573 Return
	
Label_1396:
	Trigger(var_140_object, var_138_string); // 0x574 Func
	var_136_bool = 1; // 0x576 MovB
	return 2; // 0x577 Return
}


func_1263(var_27_bool)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; // 0x4ef PushV
	GetPosition(var_38_cvector); // 0x4f0 ObjFunc
	GetEyesHeight(var_37_float); // 0x4f2 ObjFunc
	var_45_float = GetByIndex(var_38_cvector, 1); // 0x4f4 PushE
	var_45_float = var_45_float + var_37_float; // 0x4f5 Add2
	SetByIndex(var_38_cvector, 1) = var_45_float; // 0x4f6 PopE
	GetPosition(var_39_cvector); // 0x4f7 Func
	GetEyesHeight(var_37_float); // 0x4f9 Func
	var_46_float = GetByIndex(var_39_cvector, 1); // 0x4fb PushE
	var_46_float = var_46_float + var_37_float; // 0x4fc Add2
	SetByIndex(var_39_cvector, 1) = var_46_float; // 0x4fd PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x4fe Sub2
	var_47_float = GetByIndex(var_40_cvector, 1); // 0x4ff PushE
	var_47_float = 0; // 0x500 MovI
	SetByIndex(var_40_cvector, 1) = var_47_float; // 0x501 PopE
	var_48_int = var_40_cvector | var_40_cvector; // 0x502 Or
	var_49_float = sqrt(var_48_int); // 0x503 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x504 Div2
	var_41_cvector = -var_40_cvector; // 0x505 Neg2
	var_50_int = 70; // 0x506 PushI
	var_51_float = var_40_cvector * var_50_int; // 0x507 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x508 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x509 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x50a Xor2
	func_1348(var_52_cvector, var_53_cvector); // 0x50b Call
	var_60_int = 25; // 0x50d PushI
	var_61_float = var_52_cvector * var_60_int; // 0x50e Mult
	var_62_int = var_51_float + var_61_float; // 0x50f Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x510 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x511 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x512 Add2
	IsOverrideActive(var_44_bool); // 0x513 Func
	var_64_bool = var_44_bool; // 0x515 Push
	if(var_64_bool == 0) goto Label_1305; // 0x516 JumpB
	var_27_bool = 0; // 0x517 MovB
	return 16; // 0x518 Return
	
Label_1305:
	StopWorld(); // 0x519 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x51b Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x51d PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x51e PushE
	Rotate(var_65_float, var_66_float); // 0x51f Func
	CameraWaitForPlayFinish(); // 0x521 Func
	ResumeWorld(); // 0x523 Func
	var_27_bool = 1; // 0x525 MovB
	return 16; // 0x526 Return
}


func_1138()
{
	StopAnimation(); // 0x472 Func
	StopGroup0(); // 0x474 Func
	return 0; // 0x476 Return
}


func_1143(var_305_object)
{
	var_306_int = 0; var_307_object = Obj(); // 0x478 PushV
	var_307_object = var_305_object; // 0x479 Mov
	TaskCall(4); // 0x47a TaskCall
	func_508(var_308_object, var_306_int, var_307_object); // 0x47b Call
	TaskReturn(); // 0x47c TaskReturn
	return 0; // 0x47e Return
}


func_1401(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x579 PushV
	var_48_string = "idle"; // 0x57a MovS
	var_49_int = var_46_int; // 0x57b Push
	if(var_49_int == 0) goto Label_1406; // 0x57c JumpB
	var_48_string = var_48_string + var_46_int; // 0x57d Add2
	
Label_1406:
	var_45_string = var_48_string; // 0x57e Mov
	return 2; // 0x57f Return
}


func_508(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x1fc PushV
	var_0_bool = var_17_object; // 0x1fd TMov
	var_27_bool = 0; var_28_object = Obj(); // 0x1fe PushV
	var_28_object = var_17_object; // 0x1ff Mov
	func_1263(var_28_object); // 0x200 Call
	var_67_bool = var_27_bool == 0; // 0x202 Not
	if(var_67_bool == 0) goto Label_518; // 0x203 JumpB
	var_16_int = -2; // 0x204 MovI
	return 8; // 0x205 Return
	
Label_518:
	CreateDialog(var_23_object); // 0x206 Func
	var_68_int = 0; // 0x208 PushV
	func_1500(var_68_int); // 0x209 Call
	SetNPCName(var_68_int); // 0x20b ObjFunc
	var_69_string = ""; // 0x20d PushV
	func_1502(var_69_string); // 0x20e Call
	SetPhoto(var_69_string); // 0x210 ObjFunc
	var_70_int = 0; // 0x212 PushV
	func_1483(var_70_int); // 0x213 Call
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
	var_132_bool = var_26_bool == 0; // 0x229 Not
	if(var_132_bool == 0) goto Label_560; // 0x22a JumpB
	sync(); // 0x22b Func
	IsDialogEnd(var_26_bool); // 0x22d ObjFunc
	goto Label_553; // 0x22f Jump
	
Label_560:
	var_133_object = Obj(); // 0x230 PushV
	var_133_object = var_17_object; // 0x231 Mov
	func_1319(); // 0x232 Call
	StopDialog(var_23_object); // 0x234 Func
	GetReturnValue(var_25_int); // 0x236 ObjFunc
	var_16_int = var_25_int; // 0x238 Mov
	return 8; // 0x239 Return
}


func_1151(var_301_object)
{
	var_302_bool = 0; var_303_bool = 0; // 0x47f PushV
	
Label_1152:
	IsOverrideActive(var_303_bool); // 0x480 Func
	var_304_bool = var_303_bool == 0; // 0x482 Not
	if(var_304_bool == 0) goto Label_1157; // 0x483 JumpB
	goto Label_1158; // 0x484 Jump
	
Label_1158:
	var_305_object = Obj(); // 0x486 PushV
	var_305_object = var_301_object; // 0x487 Mov
	func_1143(var_305_object); // 0x488 Call
	Hold(); // 0x48a Func
	return 2; // 0x48c Return
	
Label_1157:
	goto Label_1152; // 0x485 Jump
}


