task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 10; // 0x24 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x25 Eq
	if(var_13_bool == 0) goto Label_48; // 0x26 JumpB
	var_14_int = 0; // 0x27 PushV
	func_1270(var_14_int); // 0x28 NEW_2
	var_22_int = GlobalVars[0]; // 0x2a PushGE
	var_23_bool = var_14_int != var_22_int; // 0x2b Neq
	if(var_23_bool == 0) goto Label_48; // 0x2c JumpB
	func_155(var_11_bool); // 0x2e NEW_2
	
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
	func_155(var_11_bool); // 0xa4 NEW_2
	var_13_object = Obj(); // 0xa6 PushV
	var_13_object = var_11_bool; // 0xa7 Mov
	func_1581(); // 0xa8 NEW_2
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
	func_338(var_14_bool, var_15_object); // 0x133 NEW_2
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
	func_322(var_11_bool); // 0x14b NEW_2
	var_13_object = Obj(); // 0x14d PushV
	var_13_object = var_11_bool; // 0x14e Mov
	func_1581(); // 0x14f NEW_2
	return 0; // 0x151 Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool); // 0x1a6 Func
	return 0; // 0x1a8 Return
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	Stop(); // 0x1a9 Func
	return 0; // 0x1ab Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_428(var_10_string, var_11_bool); // 0x1b5 NEW_2
	var_12_object = Obj(); // 0x1b7 PushV
	var_12_object = var_11_bool; // 0x1b8 Mov
	func_1581(); // 0x1b9 NEW_2
	return 0; // 0x1bb Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	var_13_int = 1; // 0x2c9 PushI
	if(var_13_int == 0) goto Label_1078; // 0x2ca JumpB
	func_1479(); // 0x2cc NEW_2
	var_15_int = 10646; // 0x2ce PushI
	var_16_bool = var_12_int == var_15_int; // 0x2cf Eq
	if(var_16_bool == 0) goto Label_731; // 0x2d0 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0x2d1 PushV
	var_17_object = var_1_object; // 0x2d2 MovT
	var_18_object = var_0_bool; // 0x2d3 MovT
	func_1595(var_18_object); // 0x2d4 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x2d6 PushV
	var_49_object = var_1_object; // 0x2d7 MovT
	var_50_object = var_0_bool; // 0x2d8 MovT
	func_1583(); // 0x2d9 NEW_2
	
Label_731:
	var_53_int = 10650; // 0x2db PushI
	var_54_bool = var_12_int == var_53_int; // 0x2dc Eq
	if(var_54_bool == 0) goto Label_744; // 0x2dd JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x2de PushV
	var_55_object = var_1_object; // 0x2df MovT
	var_56_object = var_0_bool; // 0x2e0 MovT
	func_1595(var_56_object); // 0x2e1 NEW_2
	var_57_object = Obj(); var_58_object = Obj(); // 0x2e3 PushV
	var_57_object = var_1_object; // 0x2e4 MovT
	var_58_object = var_0_bool; // 0x2e5 MovT
	func_1583(); // 0x2e6 NEW_2
	
Label_744:
	var_59_int = 10648; // 0x2e8 PushI
	var_60_bool = var_12_int == var_59_int; // 0x2e9 Eq
	if(var_60_bool == 0) goto Label_757; // 0x2ea JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x2eb PushV
	var_61_object = var_1_object; // 0x2ec MovT
	var_62_object = var_0_bool; // 0x2ed MovT
	func_1589(); // 0x2ee NEW_2
	var_65_object = Obj(); var_66_object = Obj(); // 0x2f0 PushV
	var_65_object = var_1_object; // 0x2f1 MovT
	var_66_object = var_0_bool; // 0x2f2 MovT
	func_1626(); // 0x2f3 NEW_2
	
Label_757:
	var_68_int = 10649; // 0x2f5 PushI
	var_69_bool = var_12_int == var_68_int; // 0x2f6 Eq
	if(var_69_bool == 0) goto Label_770; // 0x2f7 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x2f8 PushV
	var_70_object = var_1_object; // 0x2f9 MovT
	var_71_object = var_0_bool; // 0x2fa MovT
	func_1589(); // 0x2fb NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x2fd PushV
	var_72_object = var_1_object; // 0x2fe MovT
	var_73_object = var_0_bool; // 0x2ff MovT
	func_1631(); // 0x300 NEW_2
	
Label_770:
	var_75_int = 10669; // 0x302 PushI
	var_76_bool = var_12_int == var_75_int; // 0x303 Eq
	if(var_76_bool == 0) goto Label_783; // 0x304 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x305 PushV
	var_77_object = var_1_object; // 0x306 MovT
	var_78_object = var_0_bool; // 0x307 MovT
	func_1615(var_78_object); // 0x308 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0x30a PushV
	var_83_object = var_1_object; // 0x30b MovT
	var_84_object = var_0_bool; // 0x30c MovT
	func_1583(); // 0x30d NEW_2
	
Label_783:
	var_85_int = 10641; // 0x30f PushI
	var_86_bool = var_11_int == var_85_int; // 0x310 Eq
	if(var_86_bool == 0) goto Label_831; // 0x311 JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x312 PushV
	var_88_object = var_1_object; // 0x313 MovT
	func_1636(var_88_object); // 0x314 NEW_2
	if(var_87_bool == 0) goto Label_811; // 0x316 JumpB
	var_95_string = ""; // 0x317 PushV
	var_95_string = "Neutral"; // 0x318 MovS
	func_690(var_12_int, var_95_string); // 0x319 NEW_2
	var_112_int = 509667; // 0x31b PushI
	SetMessage(var_112_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_113_int = 509668; // 0x320 PushI
	var_114_int = 10643; // 0x321 PushI
	var_115_int = 10642; // 0x322 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x323 TObjFunc
	var_116_int = 509677; // 0x325 PushI
	var_117_int = 10653; // 0x326 PushI
	var_118_int = 10652; // 0x327 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x328 TObjFunc
	return 0; // 0x32a Return
	
Label_811:
	var_119_string = ""; // 0x32b PushV
	var_119_string = "Neutral"; // 0x32c MovS
	func_690(var_12_int, var_119_string); // 0x32d NEW_2
	var_120_int = 509681; // 0x32f PushI
	SetMessage(var_120_int); // 0x330 TObjFunc
	ClearReplies(); // 0x332 TObjFunc
	var_121_int = 509682; // 0x334 PushI
	var_122_int = 10660; // 0x335 PushI
	var_123_int = 10659; // 0x336 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x337 TObjFunc
	var_124_int = 509699; // 0x339 PushI
	var_125_int = -1; // 0x33a PushI
	var_126_int = 10678; // 0x33b PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_127_int = 10660; // 0x33f PushI
	var_128_bool = var_11_int == var_127_int; // 0x340 Eq
	if(var_128_bool == 0) goto Label_859; // 0x341 JumpB
	var_129_string = ""; // 0x342 PushV
	var_129_string = "Neutral"; // 0x343 MovS
	func_690(var_12_int, var_129_string); // 0x344 NEW_2
	var_130_int = 509683; // 0x346 PushI
	SetMessage(var_130_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_131_int = 509684; // 0x34b PushI
	var_132_int = 10662; // 0x34c PushI
	var_133_int = 10661; // 0x34d PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x34e TObjFunc
	var_134_int = 509694; // 0x350 PushI
	var_135_int = 10672; // 0x351 PushI
	var_136_int = 10671; // 0x352 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x353 TObjFunc
	var_137_int = 509698; // 0x355 PushI
	var_138_int = 10662; // 0x356 PushI
	var_139_int = 10676; // 0x357 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x358 TObjFunc
	return 0; // 0x35a Return
	
Label_859:
	var_140_int = 10672; // 0x35b PushI
	var_141_bool = var_11_int == var_140_int; // 0x35c Eq
	if(var_141_bool == 0) goto Label_882; // 0x35d JumpB
	var_142_string = ""; // 0x35e PushV
	var_142_string = "Neutral"; // 0x35f MovS
	func_690(var_12_int, var_142_string); // 0x360 NEW_2
	var_143_int = 509695; // 0x362 PushI
	SetMessage(var_143_int); // 0x363 TObjFunc
	ClearReplies(); // 0x365 TObjFunc
	var_144_int = 509696; // 0x367 PushI
	var_145_int = 10665; // 0x368 PushI
	var_146_int = 10673; // 0x369 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x36a TObjFunc
	var_147_int = 509697; // 0x36c PushI
	var_148_int = -1; // 0x36d PushI
	var_149_int = 10675; // 0x36e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_150_int = 10662; // 0x372 PushI
	var_151_bool = var_11_int == var_150_int; // 0x373 Eq
	if(var_151_bool == 0) goto Label_905; // 0x374 JumpB
	var_152_string = ""; // 0x375 PushV
	var_152_string = "Neutral"; // 0x376 MovS
	func_690(var_12_int, var_152_string); // 0x377 NEW_2
	var_153_int = 509685; // 0x379 PushI
	SetMessage(var_153_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_154_int = 509687; // 0x37e PushI
	var_155_int = 10665; // 0x37f PushI
	var_156_int = 10664; // 0x380 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x381 TObjFunc
	var_157_int = 509686; // 0x383 PushI
	var_158_int = -1; // 0x384 PushI
	var_159_int = 10663; // 0x385 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_160_int = 10665; // 0x389 PushI
	var_161_bool = var_11_int == var_160_int; // 0x38a Eq
	if(var_161_bool == 0) goto Label_928; // 0x38b JumpB
	var_162_string = ""; // 0x38c PushV
	var_162_string = "Neutral"; // 0x38d MovS
	func_690(var_12_int, var_162_string); // 0x38e NEW_2
	var_163_int = 509688; // 0x390 PushI
	SetMessage(var_163_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_164_int = 509689; // 0x395 PushI
	var_165_int = -1; // 0x396 PushI
	var_166_int = 10666; // 0x397 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x398 TObjFunc
	var_167_int = 509690; // 0x39a PushI
	var_168_int = 10668; // 0x39b PushI
	var_169_int = 10667; // 0x39c PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x39d TObjFunc
	return 0; // 0x39f Return
	
Label_928:
	var_170_int = 10668; // 0x3a0 PushI
	var_171_bool = var_11_int == var_170_int; // 0x3a1 Eq
	if(var_171_bool == 0) goto Label_956; // 0x3a2 JumpB
	var_172_string = ""; // 0x3a3 PushV
	var_172_string = "Neutral"; // 0x3a4 MovS
	func_690(var_12_int, var_172_string); // 0x3a5 NEW_2
	var_173_int = 509691; // 0x3a7 PushI
	SetMessage(var_173_int); // 0x3a8 TObjFunc
	ClearReplies(); // 0x3aa TObjFunc
	var_174_int = 509692; // 0x3ac PushI
	var_175_int = -1; // 0x3ad PushI
	var_176_int = 10669; // 0x3ae PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x3af TObjFunc
	var_177_int = 509693; // 0x3b1 PushI
	var_178_int = -1; // 0x3b2 PushI
	var_179_int = 10670; // 0x3b3 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x3b4 TObjFunc
	var_180_int = 538762; // 0x3b6 PushI
	var_181_int = -1; // 0x3b7 PushI
	var_182_int = 40678; // 0x3b8 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x3b9 TObjFunc
	return 0; // 0x3bb Return
	
Label_956:
	var_183_int = 10653; // 0x3bc PushI
	var_184_bool = var_11_int == var_183_int; // 0x3bd Eq
	if(var_184_bool == 0) goto Label_979; // 0x3be JumpB
	var_185_string = ""; // 0x3bf PushV
	var_185_string = "Neutral"; // 0x3c0 MovS
	func_690(var_12_int, var_185_string); // 0x3c1 NEW_2
	var_186_int = 509678; // 0x3c3 PushI
	SetMessage(var_186_int); // 0x3c4 TObjFunc
	ClearReplies(); // 0x3c6 TObjFunc
	var_187_int = 509679; // 0x3c8 PushI
	var_188_int = 10643; // 0x3c9 PushI
	var_189_int = 10654; // 0x3ca PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x3cb TObjFunc
	var_190_int = 509680; // 0x3cd PushI
	var_191_int = 10643; // 0x3ce PushI
	var_192_int = 10656; // 0x3cf PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x3d0 TObjFunc
	return 0; // 0x3d2 Return
	
Label_979:
	var_193_int = 10643; // 0x3d3 PushI
	var_194_bool = var_11_int == var_193_int; // 0x3d4 Eq
	if(var_194_bool == 0) goto Label_997; // 0x3d5 JumpB
	var_195_string = ""; // 0x3d6 PushV
	var_195_string = "Neutral"; // 0x3d7 MovS
	func_690(var_12_int, var_195_string); // 0x3d8 NEW_2
	var_196_int = 509669; // 0x3da PushI
	SetMessage(var_196_int); // 0x3db TObjFunc
	ClearReplies(); // 0x3dd TObjFunc
	var_197_int = 509670; // 0x3df PushI
	var_198_int = 10645; // 0x3e0 PushI
	var_199_int = 10644; // 0x3e1 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_200_int = 10645; // 0x3e5 PushI
	var_201_bool = var_11_int == var_200_int; // 0x3e6 Eq
	if(var_201_bool == 0) goto Label_1020; // 0x3e7 JumpB
	var_202_string = ""; // 0x3e8 PushV
	var_202_string = "Neutral"; // 0x3e9 MovS
	func_690(var_12_int, var_202_string); // 0x3ea NEW_2
	var_203_int = 509671; // 0x3ec PushI
	SetMessage(var_203_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_204_int = 509672; // 0x3f1 PushI
	var_205_int = 43766; // 0x3f2 PushI
	var_206_int = 10646; // 0x3f3 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x3f4 TObjFunc
	var_207_int = 509676; // 0x3f6 PushI
	var_208_int = 10647; // 0x3f7 PushI
	var_209_int = 10650; // 0x3f8 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x3f9 TObjFunc
	return 0; // 0x3fb Return
	
Label_1020:
	var_210_int = 10647; // 0x3fc PushI
	var_211_bool = var_11_int == var_210_int; // 0x3fd Eq
	if(var_211_bool == 0) goto Label_1043; // 0x3fe JumpB
	var_212_string = ""; // 0x3ff PushV
	var_212_string = "Neutral"; // 0x400 MovS
	func_690(var_12_int, var_212_string); // 0x401 NEW_2
	var_213_int = 509673; // 0x403 PushI
	SetMessage(var_213_int); // 0x404 TObjFunc
	ClearReplies(); // 0x406 TObjFunc
	var_214_int = 541600; // 0x408 PushI
	var_215_int = 43766; // 0x409 PushI
	var_216_int = 43765; // 0x40a PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x40b TObjFunc
	var_217_int = 541602; // 0x40d PushI
	var_218_int = 43766; // 0x40e PushI
	var_219_int = 43767; // 0x40f PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x410 TObjFunc
	return 0; // 0x412 Return
	
Label_1043:
	var_220_int = 43766; // 0x413 PushI
	var_221_bool = var_11_int == var_220_int; // 0x414 Eq
	if(var_221_bool == 0) goto Label_1066; // 0x415 JumpB
	var_222_string = ""; // 0x416 PushV
	var_222_string = "Neutral"; // 0x417 MovS
	func_690(var_12_int, var_222_string); // 0x418 NEW_2
	var_223_int = 541601; // 0x41a PushI
	SetMessage(var_223_int); // 0x41b TObjFunc
	ClearReplies(); // 0x41d TObjFunc
	var_224_int = 509674; // 0x41f PushI
	var_225_int = -1; // 0x420 PushI
	var_226_int = 10648; // 0x421 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x422 TObjFunc
	var_227_int = 509675; // 0x424 PushI
	var_228_int = -1; // 0x425 PushI
	var_229_int = 10649; // 0x426 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x427 TObjFunc
	return 0; // 0x429 Return
	
Label_1066:
	var_3_object = 1; // 0x42a TMovB
	var_230_bool = 0; // 0x42b PushV
	func_1673(var_230_bool); // 0x42c NEW_2
	if(var_230_bool == 0) goto Label_1074; // 0x42e JumpB
	lshStopAnimation(); // 0x42f Func
	goto Label_1076; // 0x431 Jump
	
Label_1076:
	return 0; // 0x434 Return
	
Label_1074:
	StopAnimation(); // 0x432 Func
	
Label_1078:
	return 0; // 0x436 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x44e PushV
	func_1238(); // 0x450 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x452 PushV
	var_15_object = var_11_object; // 0x453 Mov
	func_1079(var_13_int, var_14_int, var_15_object); // 0x454 NEW_2
	var_13_int = var_14_int; // 0x455 Mov
	var_160_int = 0; // 0x457 PushI
	var_161_bool = var_13_int == var_160_int; // 0x458 Eq
	if(var_161_bool == 0) goto Label_1143; // 0x459 JumpB
	var_162_bool = 0; var_163_string = ""; var_164_string = ""; // 0x45a PushV
	var_163_string = "quest_d4_01"; // 0x45b MovS
	var_164_string = "key1_done"; // 0x45c MovS
	func_1545(var_162_bool, var_163_string, var_164_string); // 0x45d NEW_2
	var_168_object = Obj(); // 0x45f PushV
	var_168_object = var_11_object; // 0x460 Mov
	TaskCall(0); // 0x461 TaskCall
	func_0(var_168_object); // 0x462 NEW_2
	TaskReturn(); // 0x463 TaskReturn
	var_271_object = Obj(); // 0x465 PushV
	var_271_object = var_11_object; // 0x466 Mov
	TaskCall(1); // 0x467 TaskCall
	func_182(var_271_object); // 0x468 NEW_2
	TaskReturn(); // 0x469 TaskReturn
	var_327_object = Obj(); // 0x46b PushV
	var_327_object = var_11_object; // 0x46c Mov
	TaskCall(7); // 0x46d TaskCall
	func_1251(var_327_object); // 0x46e NEW_2
	TaskReturn(); // 0x46f TaskReturn
	TaskCall(2); // 0x472 TaskCall
	func_349(); // 0x473 NEW_2
	TaskReturn(); // 0x474 TaskReturn
	goto Label_1156; // 0x476 Jump
	
Label_1156:
	return 2; // 0x484 Return
	
Label_1143:
	var_420_int = 1; // 0x477 PushI
	var_421_bool = var_13_int == var_420_int; // 0x478 Eq
	if(var_421_bool == 0) goto Label_1156; // 0x479 JumpB
	var_422_bool = 0; var_423_string = ""; var_424_string = ""; // 0x47a PushV
	var_423_string = "quest_d4_01"; // 0x47b MovS
	var_424_string = "key1_done"; // 0x47c MovS
	func_1545(var_422_bool, var_423_string, var_424_string); // 0x47d NEW_2
	TaskCall(2); // 0x480 TaskCall
	func_349(); // 0x481 NEW_2
	TaskReturn(); // 0x482 TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0; // 0x62e Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0]; // 0x440 PushGE
	var_12_int = 0; // 0x441 PushV
	func_1270(var_12_int); // 0x442 NEW_2
	var_11_int = var_12_int; // 0x443 Mov
	GlobalVars[0] = var_11_int; // 0x445 PopGE
	
Label_1094:
	var_20_int = 3; // 0x446 PushI
	Sleep(var_20_int); // 0x447 Func
	func_1157(); // 0x44a NEW_2
	goto Label_1094; // 0x44c Jump
}


func_0(var_168_object)
{
	var_171_int = 10; // 0x1 PushI
	var_172_int = 1; // 0x2 PushI
	SetTimer(var_171_int, var_172_int); // 0x3 Func
	
Label_5:
	var_173_bool = 0; var_174_object = Obj(); var_175_float = 0; var_176_float = 0; var_177_bool = 0; var_178_bool = 0; // 0x5 PushV
	var_174_object = var_168_object; // 0x6 Mov
	var_175_float = 250; // 0x7 MovI
	var_176_float = 3000; // 0x8 MovI
	var_177_bool = 1; // 0x9 MovB
	var_178_bool = 1; // 0xa MovB
	func_49(var_170_object, var_168_object, var_173_bool, var_174_object, var_175_float, var_176_float, var_177_bool, var_178_bool); // 0xb NEW_2
	var_256_int = 0; // 0xd PushV
	func_1270(var_256_int); // 0xe NEW_2
	var_264_int = GlobalVars[0]; // 0x10 PushGE
	var_265_bool = var_256_int != var_264_int; // 0x11 Neq
	if(var_265_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_31; // 0x13 Jump
	
Label_31:
	var_266_int = 10; // 0x1f PushI
	KillTimer(var_266_int); // 0x20 Func
	return 0; // 0x22 Return
	
Label_20:
	var_267_int = 1; // 0x14 PushI
	Sleep(var_267_int); // 0x15 Func
	var_268_int = 0; // 0x17 PushV
	func_1270(var_268_int); // 0x18 NEW_2
	var_269_int = GlobalVars[0]; // 0x1a PushGE
	var_270_bool = var_268_int != var_269_int; // 0x1b Neq
	if(var_270_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_31; // 0x1d Jump
	
Label_30:
	goto Label_5; // 0x1e Jump
}


func_1665(var_75_int)
{
	var_75_int = 515569; // 0x681 MovI
	return 0; // 0x682 Return
}


func_1281(var_219_bool, var_220_object, var_221_string)
{
	var_222_bool = 0; var_223_bool = 0; // 0x501 PushV
	var_224_string = "HasProperty"; // 0x502 PushS
	var_225_int = 2; // 0x503 PushI
	var_226_bool = IsFuncExist(var_220_object, var_224_string, var_225_int); // 0x504 FuncExist
	var_227_bool = var_226_bool == 0; // 0x505 Not
	if(var_227_bool == 0) goto Label_1289; // 0x506 JumpB
	var_219_bool = 0; // 0x507 MovB
	return 2; // 0x508 Return
	
Label_1289:
	HasProperty(var_221_string, var_223_bool); // 0x509 ObjFunc
	var_219_bool = var_223_bool; // 0x50b Mov
	return 2; // 0x50c Return
}


func_1667(var_74_int)
{
	var_74_int = 503354; // 0x683 MovI
	return 0; // 0x684 Return
}


func_1669(var_76_string)
{
	var_76_string = "ui/NPC_wmask.png"; // 0x685 MovS
	return 0; // 0x686 Return
}


func_1157()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x485 PushV
	WaitForAnimEnd(); // 0x486 Func
	var_35_bool = 0; // 0x488 PushV
	func_1358(var_35_bool); // 0x489 NEW_2
	var_38_bool = var_35_bool == 0; // 0x48b Not
	if(var_38_bool == 0) goto Label_1166; // 0x48c JumpB
	return 14; // 0x48d Return
	
Label_1166:
	var_39_int = 0; // 0x48e PushV
	func_1564(var_39_int); // 0x48f NEW_2
	var_28_int = var_39_int; // 0x490 Mov
	var_29_int = 0; // 0x492 MovI
	
Label_1171:
	var_52_bool = 0; // 0x493 PushV
	var_52_bool = 0; // 0x494 MovB
	var_53_int = 5; // 0x495 PushI
	var_54_bool = var_29_int < var_53_int; // 0x496 LT
	if(var_54_bool == 0) goto Label_1181; // 0x497 JumpB
	var_55_bool = 0; // 0x498 PushV
	func_1358(var_55_bool); // 0x499 NEW_2
	if(var_55_bool == 0) goto Label_1181; // 0x49b JumpB
	var_52_bool = 1; // 0x49c MovB
	
Label_1181:
	if(var_52_bool == 0) goto Label_1233; // 0x49d JumpB
	var_56_int = 3; // 0x49e PushI
	irand(var_30_int, var_56_int); // 0x49f Func
	var_57_int = 0; // 0x4a1 PushI
	var_58_bool = var_30_int == var_57_int; // 0x4a2 Eq
	if(var_58_bool == 0) goto Label_1205; // 0x4a3 JumpB
	var_59_int = var_28_int; // 0x4a4 Push
	if(var_59_int == 0) goto Label_1204; // 0x4a5 JumpB
	irand(var_31_int, var_28_int); // 0x4a6 Func
	var_60_string = "all"; // 0x4a8 PushS
	var_61_string = ""; var_62_int = 0; // 0x4a9 PushV
	var_62_int = var_31_int; // 0x4aa Mov
	func_1557(var_61_string, var_62_int); // 0x4ab NEW_2
	PlayAnimation(var_60_string, var_61_string); // 0x4ad Func
	WaitForAnimEnd(var_32_bool); // 0x4af Func
	var_63_bool = var_32_bool == 0; // 0x4b1 Not
	if(var_63_bool == 0) goto Label_1204; // 0x4b2 JumpB
	goto Label_1233; // 0x4b3 Jump
	
Label_1233:
	ResetAAS(); // 0x4d1 Func
	return 14; // 0x4d3 Return
	
Label_1204:
	goto Label_1222; // 0x4b4 Jump
	
Label_1222:
	var_64_bool = 0; // 0x4c6 PushV
	func_1236(var_64_bool); // 0x4c7 NEW_2
	var_65_bool = var_64_bool == 0; // 0x4c9 Not
	if(var_65_bool == 0) goto Label_1228; // 0x4ca JumpB
	goto Label_1233; // 0x4cb Jump
	
Label_1228:
	ResetAAS(); // 0x4cc Func
	var_66_int = 1; // 0x4ce PushI
	var_29_int = var_29_int + var_66_int; // 0x4cf Add2
	goto Label_1171; // 0x4d0 Jump
	
Label_1205:
	var_67_int = 1; // 0x4b5 PushI
	var_68_bool = var_30_int == var_67_int; // 0x4b6 Eq
	if(var_68_bool == 0) goto Label_1219; // 0x4b7 JumpB
	var_69_int = 4; // 0x4b8 PushI
	rand(var_33_float, var_69_int); // 0x4b9 Func
	var_70_int = 1; // 0x4bb PushI
	var_71_int = var_33_float + var_70_int; // 0x4bc Add
	Sleep(var_71_int, var_34_bool); // 0x4bd Func
	var_72_bool = var_34_bool == 0; // 0x4bf Not
	if(var_72_bool == 0) goto Label_1218; // 0x4c0 JumpB
	goto Label_1233; // 0x4c1 Jump
	
Label_1218:
	goto Label_1222; // 0x4c2 Jump
	
Label_1219:
	var_73_int = var_29_int; // 0x4c3 Push
	if(var_73_int == 0) goto Label_1222; // 0x4c4 JumpB
	goto Label_1233; // 0x4c5 Jump
}


func_1671(var_77_string)
{
	var_77_string = "ui/NPC_wmask_b.png"; // 0x687 MovS
	return 0; // 0x688 Return
}


func_1673(var_69_bool)
{
	var_69_bool = 0; // 0x689 MovB
	return 0; // 0x68a Return
}


func_1545(var_162_bool, var_163_string, var_164_string)
{
	var_165_object = Obj(); var_166_object = Obj(); // 0x609 PushV
	FindActor(var_166_object, var_163_string); // 0x60a Func
	var_167_bool = var_166_object == 0; // 0x60c NullEq
	if(var_167_bool == 0) goto Label_1552; // 0x60d JumpB
	var_162_bool = 0; // 0x60e MovB
	return 2; // 0x60f Return
	
Label_1552:
	Trigger(var_166_object, var_164_string); // 0x610 Func
	var_162_bool = 1; // 0x612 MovB
	return 2; // 0x613 Return
}


func_1293(var_212_bool)
{
	var_214_bool = 0; var_215_bool = 0; // 0x50d PushV
	IsDead(var_215_bool); // 0x50e ObjFunc
	var_212_bool = var_215_bool; // 0x510 Mov
	return 2; // 0x511 Return
}


func_1298(var_201_bool, var_202_object)
{
	var_203_object = Obj(); var_204_object = Obj(); var_205_object = Obj(); var_206_object = Obj(); // 0x512 PushV
	var_207_bool = var_202_object == 0; // 0x513 NullEq
	if(var_207_bool == 0) goto Label_1303; // 0x514 JumpB
	var_201_bool = 0; // 0x515 MovB
	return 4; // 0x516 Return
	
Label_1303:
	var_208_bool = 0; // 0x517 PushV
	var_208_bool = 0; // 0x518 MovB
	var_209_string = "IsDead"; // 0x519 PushS
	var_210_int = 1; // 0x51a PushI
	var_211_bool = IsFuncExist(var_202_object, var_209_string, var_210_int); // 0x51b FuncExist
	if(var_211_bool == 0) goto Label_1315; // 0x51c JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x51d PushV
	var_213_object = var_202_object; // 0x51e Mov
	func_1293(var_213_object); // 0x51f NEW_2
	if(var_212_bool == 0) goto Label_1315; // 0x521 JumpB
	var_208_bool = 1; // 0x522 MovB
	
Label_1315:
	if(var_208_bool == 0) goto Label_1318; // 0x523 JumpB
	var_201_bool = 0; // 0x524 MovB
	return 4; // 0x525 Return
	
Label_1318:
	GetScene(var_205_object); // 0x526 Func
	var_216_bool = var_205_object == 0; // 0x528 NullEq
	if(var_216_bool == 0) goto Label_1324; // 0x529 JumpB
	var_201_bool = 0; // 0x52a MovB
	return 4; // 0x52b Return
	
Label_1324:
	GetScene(var_206_object); // 0x52c ObjFunc
	var_217_bool = var_205_object != var_206_object; // 0x52e Neq
	if(var_217_bool == 0) goto Label_1330; // 0x52f JumpB
	var_201_bool = 0; // 0x530 MovB
	return 4; // 0x531 Return
	
Label_1330:
	var_201_bool = 1; // 0x532 MovB
	return 4; // 0x533 Return
}


func_531(var_407_bool)
{
	var_407_bool = 1; // 0x213 MovB
	return 0; // 0x214 Return
}


func_1557(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x615 PushV
	var_48_string = "idle"; // 0x616 MovS
	var_49_int = var_46_int; // 0x617 Push
	if(var_49_int == 0) goto Label_1562; // 0x618 JumpB
	var_48_string = var_48_string + var_46_int; // 0x619 Add2
	
Label_1562:
	var_45_string = var_48_string; // 0x61a Mov
	return 2; // 0x61b Return
}


func_533(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x215 PushV
	var_0_bool = var_17_object; // 0x216 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x217 PushV
	var_28_object = var_17_object; // 0x218 Mov
	var_29_float = 70.0; // 0x219 MovF
	func_1363(var_28_object, var_29_float); // 0x21a NEW_2
	var_73_bool = var_27_bool == 0; // 0x21c Not
	if(var_73_bool == 0) goto Label_544; // 0x21d JumpB
	var_16_int = -2; // 0x21e MovI
	return 8; // 0x21f Return
	
Label_544:
	CreateDialog(var_23_object); // 0x220 Func
	var_74_int = 0; // 0x222 PushV
	func_1667(var_74_int); // 0x223 NEW_2
	SetNPCName(var_74_int); // 0x225 ObjFunc
	var_75_int = 0; // 0x227 PushV
	func_1665(var_75_int); // 0x228 NEW_2
	SetNPCDescription(var_75_int); // 0x22a ObjFunc
	var_76_string = ""; // 0x22c PushV
	func_1669(var_76_string); // 0x22d NEW_2
	SetPhoto(var_76_string); // 0x22f ObjFunc
	var_77_string = ""; // 0x231 PushV
	func_1671(var_77_string); // 0x232 NEW_2
	SetPhoto2(var_77_string); // 0x234 ObjFunc
	var_78_int = 0; // 0x236 PushV
	func_1648(var_78_int); // 0x237 NEW_2
	SetPlayerName(var_78_int); // 0x239 ObjFunc
	var_25_int = -1; // 0x23b MovI
	IsOverrideActive(var_24_bool); // 0x23c Func
	var_86_bool = var_24_bool; // 0x23e Push
	if(var_86_bool == 0) goto Label_578; // 0x23f JumpB
	var_16_int = -2; // 0x240 MovI
	return 8; // 0x241 Return
	
Label_578:
	DoDialog(var_23_object); // 0x242 Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x244 PushV
	var_87_object = var_17_object; // 0x245 Mov
	var_88_object = var_23_object; // 0x246 Mov
	TaskCall(5); // 0x247 TaskCall
	func_607(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x248 NEW_2
	TaskReturn(); // 0x249 TaskReturn
	IsDialogEnd(var_26_bool); // 0x24b ObjFunc
	
Label_589:
	var_152_bool = var_26_bool == 0; // 0x24d Not
	if(var_152_bool == 0) goto Label_596; // 0x24e JumpB
	sync(); // 0x24f Func
	IsDialogEnd(var_26_bool); // 0x251 ObjFunc
	goto Label_589; // 0x253 Jump
	
Label_596:
	var_153_object = Obj(); // 0x254 PushV
	var_153_object = var_17_object; // 0x255 Mov
	func_1431(); // 0x256 NEW_2
	StopDialog(var_23_object); // 0x258 Func
	GetReturnValue(var_25_int); // 0x25a ObjFunc
	var_16_int = var_25_int; // 0x25c Mov
	return 8; // 0x25d Return
}


func_1431()
{
	var_154_bool = 0; var_155_bool = 0; // 0x597 PushV
	CameraSwitchToNormal(); // 0x598 Func
	var_156_bool = 0; // 0x59a PushV
	func_1673(var_156_bool); // 0x59b NEW_2
	if(var_156_bool == 0) goto Label_1439; // 0x59d JumpB
	goto Label_1447; // 0x59e Jump
	
Label_1447:
	return 2; // 0x5a7 Return
	
Label_1439:
	var_157_string = "head"; // 0x59f PushS
	HasAnimationTrack(var_155_bool, var_157_string); // 0x5a0 Func
	var_158_bool = var_155_bool; // 0x5a2 Push
	if(var_158_bool == 0) goto Label_1447; // 0x5a3 JumpB
	var_159_string = "head"; // 0x5a4 PushS
	UnlookAsync(var_159_string); // 0x5a5 Func
}


func_155(var_0_bool)
{
	var_0_bool = 1; // 0x9b TMovB
	var_12_int = 0; // 0x9c PushI
	KillTimer(var_12_int); // 0x9d Func
	Stop(); // 0x9f Func
	return 0; // 0xa1 Return
}


func_1564(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x61c PushV
	var_42_int = 0; // 0x61d MovI
	
Label_1566:
	var_44_string = "all"; // 0x61e PushS
	var_45_string = ""; var_46_int = 0; // 0x61f PushV
	var_46_int = var_42_int; // 0x620 Mov
	func_1557(var_45_string, var_46_int); // 0x621 NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x623 Func
	var_50_bool = var_43_bool == 0; // 0x625 Not
	if(var_50_bool == 0) goto Label_1576; // 0x626 JumpB
	goto Label_1579; // 0x627 Jump
	
Label_1579:
	var_39_int = var_42_int; // 0x62b Mov
	return 4; // 0x62c Return
	
Label_1576:
	var_51_int = 1; // 0x628 PushI
	var_42_int = var_42_int + var_51_int; // 0x629 Add2
	goto Label_1566; // 0x62a Jump
}


func_416(var_352_float)
{
	var_353_float = 0; var_354_float = 0; // 0x1a0 PushV
	GetCameraFarDistance(var_354_float); // 0x1a1 Func
	var_352_float = var_354_float; // 0x1a3 Mov
	return 2; // 0x1a4 Return
}


func_1448(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x5a8 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x5a9 Func
	var_135_bool = var_132_bool; // 0x5ab Push
	if(var_135_bool == 0) goto Label_1459; // 0x5ac JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x5ad Func
	var_136_bool = 0; // 0x5af PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x5b0 Func
	goto Label_1463; // 0x5b2 Jump
	
Label_1463:
	return 6; // 0x5b7 Return
	
Label_1459:
	var_137_string = "Can't find lsh animation : "; // 0x5b3 PushS
	var_138_int = var_137_string + var_128_string; // 0x5b4 Add
	Trace(var_138_int); // 0x5b5 Func
}


func_171(var_195_bool, var_196_object)
{
	var_197_bool = 0; var_198_object = Obj(); // 0xac PushV
	var_198_object = var_196_object; // 0xad Mov
	func_1334(var_197_bool, var_198_object); // 0xae NEW_2
	var_195_bool = var_197_bool; // 0xaf Mov
	return 0; // 0xb1 Return
}


func_428(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x1ac TMovB
	var_1_object = 0; // 0x1ad TMovB
	Stop(); // 0x1ae Func
	StopGroup0(); // 0x1b0 Func
	return 0; // 0x1b2 Return
}


func_1583()
{
	var_51_string = "playsound"; // 0x630 PushS
	var_52_string = "giveitem"; // 0x631 PushS
	TriggerWorld(var_51_string, var_52_string); // 0x632 Func
	return 0; // 0x634 Return
}


func_49(var_0_bool, var_1_object, var_173_bool, var_174_object, var_175_float, var_176_float, var_177_bool, var_178_bool)
{
	var_179_bool = 0; var_180_bool = 0; var_181_object = Obj(); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_float = 0; var_186_object = Obj(); var_187_bool = 0; var_188_bool = 0; var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); // 0x31 PushV
	var_0_bool = 0; // 0x32 TMovB
	var_1_object = var_174_object; // 0x33 TMov
	var_188_bool = var_178_bool; // 0x34 Mov
	
Label_53:
	var_195_bool = 0; var_196_object = Obj(); // 0x35 PushV
	var_196_object = var_174_object; // 0x36 Mov
	func_171(var_195_bool, var_196_object); // 0x37 NEW_2
	var_231_bool = var_195_bool == 0; // 0x39 Not
	if(var_231_bool == 0) goto Label_61; // 0x3a JumpB
	var_173_bool = 0; // 0x3b MovB
	return 16; // 0x3c Return
	
Label_61:
	GetPosition(var_190_cvector); // 0x3d ObjFunc
	GetPosition(var_191_cvector); // 0x3f Func
	var_192_cvector = var_190_cvector - var_191_cvector; // 0x41 Sub2
	var_193_float = var_192_cvector | var_192_cvector; // 0x42 Or2
	var_232_bool = 0; // 0x43 PushV
	var_232_bool = 0; // 0x44 MovB
	var_233_int = 0; // 0x45 PushI
	var_234_bool = var_176_float > var_233_int; // 0x46 GT
	if(var_234_bool == 0) goto Label_76; // 0x47 JumpB
	var_235_float = var_176_float * var_176_float; // 0x48 Mult
	var_236_bool = var_193_float > var_235_float; // 0x49 GT
	if(var_236_bool == 0) goto Label_76; // 0x4a JumpB
	var_232_bool = 1; // 0x4b MovB
	
Label_76:
	if(var_232_bool == 0) goto Label_81; // 0x4c JumpB
	Stop(); // 0x4d Func
	var_173_bool = 0; // 0x4f MovB
	return 16; // 0x50 Return
	
Label_81:
	var_237_float = var_175_float * var_175_float; // 0x51 Mult
	var_238_bool = var_193_float > var_237_float; // 0x52 GT
	if(var_238_bool == 0) goto Label_143; // 0x53 JumpB
	GetPFPosition(var_190_cvector); // 0x54 ObjFunc
	FindPathTo(var_194_object, var_190_cvector); // 0x56 Func
	var_239_bool = var_194_object != 0; // 0x58 NullNeq
	if(var_239_bool == 0) goto Label_92; // 0x59 JumpB
	var_189_object = var_194_object; // 0x5a Mov
	var_194_object = 0; // 0x5b SetNull
	
Label_92:
	var_240_bool = var_189_object != 0; // 0x5c NullNeq
	if(var_240_bool == 0) goto Label_125; // 0x5d JumpB
	var_241_bool = var_188_bool; // 0x5e Push
	if(var_241_bool == 0) goto Label_102; // 0x5f JumpB
	var_188_bool = 0; // 0x60 MovB
	RotatePath(var_189_object, var_187_bool); // 0x61 Func
	var_242_bool = var_187_bool == 0; // 0x63 Not
	if(var_242_bool == 0) goto Label_102; // 0x64 JumpB
	goto Label_149; // 0x65 Jump
	
Label_149:
	var_173_bool = !var_0_bool; // 0x95 Not2
	return 16; // 0x96 Return
	
Label_102:
	var_243_int = 0; // 0x66 PushI
	var_244_float = 0.3; // 0x67 PushF
	SetTimer(var_243_int, var_244_float); // 0x68 Func
	var_245_string = ""; // 0x6a PushV
	func_178(var_245_string); // 0x6b NEW_2
	var_246_string = ""; // 0x6d PushV
	func_180(var_246_string); // 0x6e NEW_2
	FollowPath(var_189_object, var_177_bool, var_187_bool, var_245_string, var_246_string); // 0x70 Func
	var_247_bool = var_187_bool == 0; // 0x72 Not
	if(var_247_bool == 0) goto Label_123; // 0x73 JumpB
	var_248_bool = var_0_bool; // 0x74 PushT
	if(var_248_bool == 0) goto Label_121; // 0x75 JumpB
	var_189_object = 0; // 0x76 SetNull
	goto Label_149; // 0x77 Jump
	
Label_121:
	goto Label_148; // 0x79 Jump
	
Label_148:
	goto Label_53; // 0x94 Jump
	
Label_123:
	var_189_object = 0; // 0x7b SetNull
	goto Label_141; // 0x7c Jump
	
Label_141:
	var_194_object = 0; // 0x8d SetNull
	goto Label_147; // 0x8e Jump
	
Label_147:
	var_189_object = 0; // 0x93 SetNull
	
Label_125:
	var_249_int = 0; // 0x7d PushI
	KillTimer(var_249_int); // 0x7e Func
	var_250_float = 0.5; // 0x80 PushF
	Sleep(var_250_float, var_187_bool); // 0x81 Func
	var_251_bool = var_187_bool == 0; // 0x83 Not
	if(var_251_bool == 0) goto Label_137; // 0x84 JumpB
	var_252_bool = var_0_bool; // 0x85 PushT
	if(var_252_bool == 0) goto Label_137; // 0x86 JumpB
	var_189_object = 0; // 0x87 SetNull
	goto Label_149; // 0x88 Jump
	
Label_137:
	var_253_int = 0; // 0x89 PushI
	var_254_float = 0.3; // 0x8a PushF
	SetTimer(var_253_int, var_254_float); // 0x8b Func
	
Label_143:
	var_255_int = 0; // 0x8f PushI
	KillTimer(var_255_int); // 0x90 Func
	goto Label_149; // 0x92 Jump
}


func_178(var_245_string)
{
	var_245_string = "walk"; // 0xb2 MovS
	return 0; // 0xb3 Return
}


func_690(var_2_bool, var_102_string)
{
	var_103_bool = 0; // 0x2b3 PushV
	func_1673(var_103_bool); // 0x2b4 NEW_2
	var_104_bool = var_103_bool == 0; // 0x2b6 Not
	if(var_104_bool == 0) goto Label_697; // 0x2b7 JumpB
	return 0; // 0x2b8 Return
	
Label_697:
	var_105_bool = var_102_string == var_2_bool; // 0x2b9 Eq
	if(var_105_bool == 0) goto Label_700; // 0x2ba JumpB
	return 0; // 0x2bb Return
	
Label_700:
	var_106_string = ""; var_107_bool = 0; // 0x2bc PushV
	var_106_string = var_102_string; // 0x2bd Mov
	var_108_string = ""; // 0x2be PushS
	var_109_bool = var_102_string == var_108_string; // 0x2bf Eq
	if(var_109_bool == 0) goto Label_707; // 0x2c0 JumpB
	var_107_bool = 0; // 0x2c1 MovB
	goto Label_708; // 0x2c2 Jump
	
Label_708:
	func_1464(var_106_string, var_107_bool); // 0x2c4 NEW_2
	var_2_bool = var_102_string; // 0x2c6 TMov
	return 0; // 0x2c7 Return
	
Label_707:
	var_107_bool = 1; // 0x2c3 MovB
}


func_180(var_246_string)
{
	var_246_string = "run"; // 0xb4 MovS
	return 0; // 0xb5 Return
}


func_1589()
{
	var_63_string = "ood4WhiteMask1"; // 0x636 PushS
	var_64_int = 1; // 0x637 PushI
	SetVariable(var_63_string, var_64_int); // 0x638 Func
	return 0; // 0x63a Return
}


func_1334(var_197_bool, var_198_object)
{
	var_199_int = 0; var_200_int = 0; // 0x536 PushV
	var_201_bool = 0; var_202_object = Obj(); // 0x537 PushV
	var_202_object = var_198_object; // 0x538 Mov
	func_1298(var_201_bool, var_202_object); // 0x539 NEW_2
	var_218_bool = var_201_bool == 0; // 0x53b Not
	if(var_218_bool == 0) goto Label_1343; // 0x53c JumpB
	var_197_bool = 0; // 0x53d MovB
	return 2; // 0x53e Return
	
Label_1343:
	var_219_bool = 0; var_220_object = Obj(); var_221_string = ""; // 0x53f PushV
	var_220_object = var_198_object; // 0x540 Mov
	var_221_string = "noaccess"; // 0x541 MovS
	func_1281(var_219_bool, var_220_object, var_221_string); // 0x542 NEW_2
	var_228_bool = var_219_bool == 0; // 0x544 Not
	if(var_228_bool == 0) goto Label_1352; // 0x545 JumpB
	var_197_bool = 1; // 0x546 MovB
	return 2; // 0x547 Return
	
Label_1352:
	var_229_string = "noaccess"; // 0x548 PushS
	GetProperty(var_229_string, var_200_int); // 0x549 ObjFunc
	var_230_int = 0; // 0x54b PushI
	var_197_bool = var_200_int == var_230_int; // 0x54c Eq2
	return 2; // 0x54d Return
}


func_1079(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0x438 PushV
	var_17_object = var_15_object; // 0x439 Mov
	TaskCall(4); // 0x43a TaskCall
	func_533(var_18_object, var_16_int, var_17_object); // 0x43b NEW_2
	TaskReturn(); // 0x43c TaskReturn
	var_14_int = var_18_object; // 0x43d Mov
	return 0; // 0x43f Return
}


func_1464(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x5b8 PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x5b9 Func
	var_116_bool = var_113_bool; // 0x5bb Push
	if(var_116_bool == 0) goto Label_1474; // 0x5bc JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x5bd Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x5bf Func
	goto Label_1478; // 0x5c1 Jump
	
Label_1478:
	return 6; // 0x5c6 Return
	
Label_1474:
	var_117_string = "Can't find lsh animation : "; // 0x5c2 PushS
	var_118_int = var_117_string + var_106_string; // 0x5c3 Add
	Trace(var_118_int); // 0x5c4 Func
}


func_182(var_271_object)
{
	
Label_183:
	var_274_bool = 0; var_275_object = Obj(); var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_bool = 0; // 0xb7 PushV
	var_275_object = var_271_object; // 0xb8 Mov
	var_276_float = 250; // 0xb9 MovI
	var_277_float = 3000; // 0xba MovI
	var_278_bool = 1; // 0xbb MovB
	var_279_bool = 1; // 0xbc MovB
	func_198(var_273_object, var_271_object, var_274_bool, var_275_object, var_276_float, var_277_float, var_278_bool, var_279_bool); // 0xbd NEW_2
	var_325_bool = var_274_bool == 0; // 0xbf Not
	if(var_325_bool == 0) goto Label_197; // 0xc0 JumpB
	var_326_int = 1; // 0xc1 PushI
	Sleep(var_326_int); // 0xc2 Func
	goto Label_183; // 0xc4 Jump
	
Label_197:
	return 0; // 0xc5 Return
}


func_1595(var_17_object)
{
	var_19_string = "d4q01KeyWhite"; // 0x63c PushS
	var_20_int = 1; // 0x63d PushI
	SetVariable(var_19_string, var_20_int); // 0x63e Func
	var_21_string = "theaterkey is given"; // 0x640 PushS
	Trace(var_21_string); // 0x641 Func
	var_22_object = Obj(); var_23_string = ""; var_24_int = 0; // 0x643 PushV
	var_22_object = var_17_object; // 0x644 Mov
	var_23_string = "d4q01_theater_key"; // 0x645 MovS
	var_24_int = 1; // 0x646 MovI
	func_1532(var_22_object, var_23_string, var_24_int); // 0x647 NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x649 PushV
	var_44_string = "quest_d4_01"; // 0x64a MovS
	var_45_string = "init_theater"; // 0x64b MovS
	func_1545(var_43_bool, var_44_string, var_45_string); // 0x64c NEW_2
	return 0; // 0x64e Return
}


func_444(var_362_bool)
{
	var_362_bool = 0; // 0x1bc MovB
	return 0; // 0x1bd Return
}


func_446(var_356_object, var_357_cvector)
{
	var_358_object = Obj(); var_359_object = Obj(); // 0x1be PushV
	FindShiftedPathTo(var_359_object, var_357_cvector); // 0x1bf Func
	var_356_object = var_359_object; // 0x1c1 Mov
	return 2; // 0x1c2 Return
}


func_322(var_0_bool)
{
	var_0_bool = 1; // 0x142 TMovB
	var_12_int = 0; // 0x143 PushI
	KillTimer(var_12_int); // 0x144 Func
	Stop(); // 0x146 Func
	return 0; // 0x148 Return
}


func_452()
{
	var_364_int = 0; var_365_int = 0; var_366_int = 0; var_367_int = 0; var_368_bool = 0; var_369_float = 0; var_370_bool = 0; var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_int = 0; var_375_bool = 0; var_376_float = 0; var_377_bool = 0; // 0x1c4 PushV
	WaitForAnimEnd(); // 0x1c5 Func
	var_378_bool = 0; // 0x1c7 PushV
	func_1358(var_378_bool); // 0x1c8 NEW_2
	var_381_bool = var_378_bool == 0; // 0x1ca Not
	if(var_381_bool == 0) goto Label_461; // 0x1cb JumpB
	return 14; // 0x1cc Return
	
Label_461:
	var_382_int = 0; // 0x1cd PushV
	func_1564(var_382_int); // 0x1ce NEW_2
	var_371_int = var_382_int; // 0x1cf Mov
	var_372_int = 0; // 0x1d1 MovI
	
Label_466:
	var_395_bool = 0; // 0x1d2 PushV
	var_395_bool = 0; // 0x1d3 MovB
	var_396_int = 5; // 0x1d4 PushI
	var_397_bool = var_372_int < var_396_int; // 0x1d5 LT
	if(var_397_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_398_bool = 0; // 0x1d7 PushV
	func_1358(var_398_bool); // 0x1d8 NEW_2
	if(var_398_bool == 0) goto Label_476; // 0x1da JumpB
	var_395_bool = 1; // 0x1db MovB
	
Label_476:
	if(var_395_bool == 0) goto Label_528; // 0x1dc JumpB
	var_399_int = 3; // 0x1dd PushI
	irand(var_373_int, var_399_int); // 0x1de Func
	var_400_int = 0; // 0x1e0 PushI
	var_401_bool = var_373_int == var_400_int; // 0x1e1 Eq
	if(var_401_bool == 0) goto Label_500; // 0x1e2 JumpB
	var_402_int = var_371_int; // 0x1e3 Push
	if(var_402_int == 0) goto Label_499; // 0x1e4 JumpB
	irand(var_374_int, var_371_int); // 0x1e5 Func
	var_403_string = "all"; // 0x1e7 PushS
	var_404_string = ""; var_405_int = 0; // 0x1e8 PushV
	var_405_int = var_374_int; // 0x1e9 Mov
	func_1557(var_404_string, var_405_int); // 0x1ea NEW_2
	PlayAnimation(var_403_string, var_404_string); // 0x1ec Func
	WaitForAnimEnd(var_375_bool); // 0x1ee Func
	var_406_bool = var_375_bool == 0; // 0x1f0 Not
	if(var_406_bool == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_528; // 0x1f2 Jump
	
Label_528:
	ResetAAS(); // 0x210 Func
	return 14; // 0x212 Return
	
Label_499:
	goto Label_517; // 0x1f3 Jump
	
Label_517:
	var_407_bool = 0; // 0x205 PushV
	func_531(var_407_bool); // 0x206 NEW_2
	var_408_bool = var_407_bool == 0; // 0x208 Not
	if(var_408_bool == 0) goto Label_523; // 0x209 JumpB
	goto Label_528; // 0x20a Jump
	
Label_523:
	ResetAAS(); // 0x20b Func
	var_409_int = 1; // 0x20d PushI
	var_372_int = var_372_int + var_409_int; // 0x20e Add2
	goto Label_466; // 0x20f Jump
	
Label_500:
	var_410_int = 1; // 0x1f4 PushI
	var_411_bool = var_373_int == var_410_int; // 0x1f5 Eq
	if(var_411_bool == 0) goto Label_514; // 0x1f6 JumpB
	var_412_int = 4; // 0x1f7 PushI
	rand(var_376_float, var_412_int); // 0x1f8 Func
	var_413_int = 1; // 0x1fa PushI
	var_414_int = var_376_float + var_413_int; // 0x1fb Add
	Sleep(var_414_int, var_377_bool); // 0x1fc Func
	var_415_bool = var_377_bool == 0; // 0x1fe Not
	if(var_415_bool == 0) goto Label_513; // 0x1ff JumpB
	goto Label_528; // 0x200 Jump
	
Label_513:
	goto Label_517; // 0x201 Jump
	
Label_514:
	var_416_int = var_372_int; // 0x202 Push
	if(var_416_int == 0) goto Label_517; // 0x203 JumpB
	goto Label_528; // 0x204 Jump
}


func_198(var_0_bool, var_1_object, var_274_bool, var_275_object, var_276_float, var_277_float, var_278_bool, var_279_bool)
{
	var_280_bool = 0; var_281_bool = 0; var_282_object = Obj(); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_float = 0; var_287_object = Obj(); var_288_bool = 0; var_289_bool = 0; var_290_object = Obj(); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_float = 0; var_295_object = Obj(); // 0xc6 PushV
	var_0_bool = 0; // 0xc7 TMovB
	var_1_object = var_275_object; // 0xc8 TMov
	var_289_bool = var_279_bool; // 0xc9 Mov
	
Label_202:
	var_296_bool = 0; var_297_object = Obj(); // 0xca PushV
	var_297_object = var_275_object; // 0xcb Mov
	func_338(var_296_bool, var_297_object); // 0xcc NEW_2
	var_300_bool = var_296_bool == 0; // 0xce Not
	if(var_300_bool == 0) goto Label_210; // 0xcf JumpB
	var_274_bool = 0; // 0xd0 MovB
	return 16; // 0xd1 Return
	
Label_210:
	GetPosition(var_291_cvector); // 0xd2 ObjFunc
	GetPosition(var_292_cvector); // 0xd4 Func
	var_293_cvector = var_291_cvector - var_292_cvector; // 0xd6 Sub2
	var_294_float = var_293_cvector | var_293_cvector; // 0xd7 Or2
	var_301_bool = 0; // 0xd8 PushV
	var_301_bool = 0; // 0xd9 MovB
	var_302_int = 0; // 0xda PushI
	var_303_bool = var_277_float > var_302_int; // 0xdb GT
	if(var_303_bool == 0) goto Label_225; // 0xdc JumpB
	var_304_float = var_277_float * var_277_float; // 0xdd Mult
	var_305_bool = var_294_float > var_304_float; // 0xde GT
	if(var_305_bool == 0) goto Label_225; // 0xdf JumpB
	var_301_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_301_bool == 0) goto Label_230; // 0xe1 JumpB
	Stop(); // 0xe2 Func
	var_274_bool = 0; // 0xe4 MovB
	return 16; // 0xe5 Return
	
Label_230:
	var_306_float = var_276_float * var_276_float; // 0xe6 Mult
	var_307_bool = var_294_float > var_306_float; // 0xe7 GT
	if(var_307_bool == 0) goto Label_292; // 0xe8 JumpB
	GetPFPosition(var_291_cvector); // 0xe9 ObjFunc
	FindPathTo(var_295_object, var_291_cvector); // 0xeb Func
	var_308_bool = var_295_object != 0; // 0xed NullNeq
	if(var_308_bool == 0) goto Label_241; // 0xee JumpB
	var_290_object = var_295_object; // 0xef Mov
	var_295_object = 0; // 0xf0 SetNull
	
Label_241:
	var_309_bool = var_290_object != 0; // 0xf1 NullNeq
	if(var_309_bool == 0) goto Label_274; // 0xf2 JumpB
	var_310_bool = var_289_bool; // 0xf3 Push
	if(var_310_bool == 0) goto Label_251; // 0xf4 JumpB
	var_289_bool = 0; // 0xf5 MovB
	RotatePath(var_290_object, var_288_bool); // 0xf6 Func
	var_311_bool = var_288_bool == 0; // 0xf8 Not
	if(var_311_bool == 0) goto Label_251; // 0xf9 JumpB
	goto Label_298; // 0xfa Jump
	
Label_298:
	var_274_bool = !var_0_bool; // 0x12a Not2
	return 16; // 0x12b Return
	
Label_251:
	var_312_int = 0; // 0xfb PushI
	var_313_float = 0.3; // 0xfc PushF
	SetTimer(var_312_int, var_313_float); // 0xfd Func
	var_314_string = ""; // 0xff PushV
	func_345(var_314_string); // 0x100 NEW_2
	var_315_string = ""; // 0x102 PushV
	func_347(var_315_string); // 0x103 NEW_2
	FollowPath(var_290_object, var_278_bool, var_288_bool, var_314_string, var_315_string); // 0x105 Func
	var_316_bool = var_288_bool == 0; // 0x107 Not
	if(var_316_bool == 0) goto Label_272; // 0x108 JumpB
	var_317_bool = var_0_bool; // 0x109 PushT
	if(var_317_bool == 0) goto Label_270; // 0x10a JumpB
	var_290_object = 0; // 0x10b SetNull
	goto Label_298; // 0x10c Jump
	
Label_270:
	goto Label_297; // 0x10e Jump
	
Label_297:
	goto Label_202; // 0x129 Jump
	
Label_272:
	var_290_object = 0; // 0x110 SetNull
	goto Label_290; // 0x111 Jump
	
Label_290:
	var_295_object = 0; // 0x122 SetNull
	goto Label_296; // 0x123 Jump
	
Label_296:
	var_290_object = 0; // 0x128 SetNull
	
Label_274:
	var_318_int = 0; // 0x112 PushI
	KillTimer(var_318_int); // 0x113 Func
	var_319_float = 0.5; // 0x115 PushF
	Sleep(var_319_float, var_288_bool); // 0x116 Func
	var_320_bool = var_288_bool == 0; // 0x118 Not
	if(var_320_bool == 0) goto Label_286; // 0x119 JumpB
	var_321_bool = var_0_bool; // 0x11a PushT
	if(var_321_bool == 0) goto Label_286; // 0x11b JumpB
	var_290_object = 0; // 0x11c SetNull
	goto Label_298; // 0x11d Jump
	
Label_286:
	var_322_int = 0; // 0x11e PushI
	var_323_float = 0.3; // 0x11f PushF
	SetTimer(var_322_int, var_323_float); // 0x120 Func
	
Label_292:
	var_324_int = 0; // 0x124 PushI
	KillTimer(var_324_int); // 0x125 Func
	goto Label_298; // 0x127 Jump
}


func_1479()
{
	var_14_bool = 0; // 0x5c7 PushV
	func_1673(var_14_bool); // 0x5c8 NEW_2
	if(var_14_bool == 0) goto Label_1485; // 0x5ca JumpB
	lshStopSpeech(); // 0x5cb Func
	
Label_1485:
	return 0; // 0x5cd Return
}


func_1358(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x54e PushV
	IsLoaded(var_37_bool); // 0x54f Func
	var_35_bool = var_37_bool; // 0x551 Mov
	return 2; // 0x552 Return
}


func_1615(var_77_object)
{
	var_79_string = "tvirin is given"; // 0x650 PushS
	Trace(var_79_string); // 0x651 Func
	var_80_object = Obj(); var_81_string = ""; var_82_int = 0; // 0x653 PushV
	var_80_object = var_77_object; // 0x654 Mov
	var_81_string = "tvirin"; // 0x655 MovS
	var_82_int = 1; // 0x656 MovI
	func_1532(var_80_object, var_81_string, var_82_int); // 0x657 NEW_2
	return 0; // 0x659 Return
}


func_1486(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x5ce PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x5cf Or
	var_58_float = sqrt(var_59_int); // 0x5d0 Sqrt2
	var_60_float = 0.0; // 0x5d1 PushF
	var_61_bool = var_58_float < var_60_float; // 0x5d2 LT
	if(var_61_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x5d4 MovV
	return 2; // 0x5d5 Return
	
Label_1494:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x5d6 Div2
	return 2; // 0x5d7 Return
}


func_338(var_296_bool, var_297_object)
{
	var_298_bool = 0; var_299_object = Obj(); // 0x153 PushV
	var_299_object = var_297_object; // 0x154 Mov
	func_1334(var_298_bool, var_299_object); // 0x155 NEW_2
	var_296_bool = var_298_bool; // 0x156 Mov
	return 0; // 0x158 Return
}


func_1363(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x553 PushV
	GetPosition(var_40_cvector); // 0x554 ObjFunc
	GetEyesHeight(var_39_float); // 0x556 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x558 PushE
	var_48_float = var_48_float + var_39_float; // 0x559 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x55a PopE
	GetPosition(var_41_cvector); // 0x55b Func
	GetEyesHeight(var_39_float); // 0x55d Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x55f PushE
	var_49_float = var_49_float + var_39_float; // 0x560 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x561 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x562 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x563 PushE
	var_50_float = 0; // 0x564 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x565 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x566 Or
	var_52_float = sqrt(var_51_int); // 0x567 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x568 Div2
	var_43_cvector = -var_42_cvector; // 0x569 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x56a Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x56b PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x56c PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x56d Xor2
	func_1486(var_54_cvector, var_55_cvector); // 0x56e NEW_2
	var_62_int = 25; // 0x570 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x571 Mult
	var_64_int = var_53_float + var_63_float; // 0x572 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x573 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x574 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x575 Add2
	IsOverrideActive(var_46_bool); // 0x576 Func
	var_66_bool = var_46_bool; // 0x578 Push
	if(var_66_bool == 0) goto Label_1404; // 0x579 JumpB
	var_27_bool = 0; // 0x57a MovB
	return 18; // 0x57b Return
	
Label_1404:
	StopWorld(); // 0x57c Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x57e Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x580 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x581 PushE
	Rotate(var_67_float, var_68_float); // 0x582 Func
	var_69_bool = 0; // 0x584 PushV
	func_1673(var_69_bool); // 0x585 NEW_2
	if(var_69_bool == 0) goto Label_1417; // 0x587 JumpB
	goto Label_1425; // 0x588 Jump
	
Label_1425:
	CameraWaitForPlayFinish(); // 0x591 Func
	ResumeWorld(); // 0x593 Func
	var_27_bool = 1; // 0x595 MovB
	return 18; // 0x596 Return
	
Label_1417:
	var_70_string = "head"; // 0x589 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x58a Func
	var_71_bool = var_47_bool; // 0x58c Push
	if(var_71_bool == 0) goto Label_1425; // 0x58d JumpB
	var_72_string = "head"; // 0x58e PushS
	LookAsyncCamera(var_72_string); // 0x58f Func
}


func_1236(var_64_bool)
{
	var_64_bool = 1; // 0x4d4 MovB
	return 0; // 0x4d5 Return
}


func_1238()
{
	StopAnimation(); // 0x4d6 Func
	StopGroup0(); // 0x4d8 Func
	return 0; // 0x4da Return
}


func_1496(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x5d8 PushV
	GetVariable(var_97_string, var_99_int); // 0x5d9 Func
	var_96_int = var_99_int; // 0x5db Mov
	return 2; // 0x5dc Return
}


func_345(var_314_string)
{
	var_314_string = "walk"; // 0x159 MovS
	return 0; // 0x15a Return
}


func_1626()
{
	var_67_int = 0; // 0x65b PushI
	SetReturnValue(var_67_int); // 0x65c ObjFunc
	return 0; // 0x65e Return
}


func_347(var_315_string)
{
	var_315_string = "run"; // 0x15b MovS
	return 0; // 0x15c Return
}


func_1243(var_331_object)
{
	var_332_int = 0; var_333_object = Obj(); // 0x4dc PushV
	var_333_object = var_331_object; // 0x4dd Mov
	TaskCall(4); // 0x4de TaskCall
	func_533(var_334_object, var_332_int, var_333_object); // 0x4df NEW_2
	TaskReturn(); // 0x4e0 TaskReturn
	return 0; // 0x4e2 Return
}


func_349()
{
	
Label_349:
	func_357(var_335_bool, var_336_bool); // 0x15e NEW_2
	var_419_int = 1; // 0x160 PushI
	Sleep(var_419_int); // 0x161 Func
	goto Label_349; // 0x163 Jump
}


func_1501(var_38_int, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x5dd PushV
	CreateIntVector(var_41_object); // 0x5de Func
	add(var_38_int); // 0x5e0 ObjFunc
	add(var_39_int); // 0x5e2 ObjFunc
	var_42_int = 3; // 0x5e4 PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0x5e5 Func
	return 2; // 0x5e7 Return
}


func_607(var_0_bool, var_1_object, var_2_bool, var_3_object, var_87_object, var_88_object)
{
	var_0_bool = var_88_object; // 0x260 TMov
	var_1_object = var_87_object; // 0x261 TMov
	var_3_object = 0; // 0x262 TMovB
	var_93_int = 1; // 0x263 PushI
	if(var_93_int == 0) goto Label_660; // 0x264 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x265 PushV
	var_95_object = var_1_object; // 0x266 MovT
	func_1636(var_95_object); // 0x267 NEW_2
	if(var_94_bool == 0) goto Label_638; // 0x269 JumpB
	var_102_string = ""; // 0x26a PushV
	var_102_string = "Neutral"; // 0x26b MovS
	func_690(var_88_object, var_102_string); // 0x26c NEW_2
	var_119_int = 509667; // 0x26e PushI
	SetMessage(var_119_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_120_int = 509668; // 0x273 PushI
	var_121_int = 10643; // 0x274 PushI
	var_122_int = 10642; // 0x275 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x276 TObjFunc
	var_123_int = 509677; // 0x278 PushI
	var_124_int = 10653; // 0x279 PushI
	var_125_int = 10652; // 0x27a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x27b TObjFunc
	goto Label_660; // 0x27d Jump
	
Label_660:
	var_126_bool = 0; // 0x294 PushV
	func_1673(var_126_bool); // 0x295 NEW_2
	if(var_126_bool == 0) goto Label_675; // 0x297 JumpB
	
Label_664:
	lshWaitForAnimEnd(); // 0x298 Func
	var_127_object = var_3_object; // 0x29a PushT
	if(var_127_object == 0) goto Label_669; // 0x29b JumpB
	goto Label_674; // 0x29c Jump
	
Label_674:
	goto Label_689; // 0x2a2 Jump
	
Label_689:
	return 0; // 0x2b1 Return
	
Label_669:
	var_128_string = ""; // 0x29d PushV
	var_128_string = var_2_bool; // 0x29e MovT
	func_1448(var_128_string); // 0x29f NEW_2
	goto Label_664; // 0x2a1 Jump
	
Label_675:
	var_139_string = "all"; // 0x2a3 PushS
	var_140_string = "idle"; // 0x2a4 PushS
	PlayAnimation(var_139_string, var_140_string); // 0x2a5 Func
	
Label_679:
	WaitForAnimEnd(); // 0x2a7 Func
	var_141_object = var_3_object; // 0x2a9 PushT
	if(var_141_object == 0) goto Label_684; // 0x2aa JumpB
	goto Label_689; // 0x2ab Jump
	
Label_684:
	var_142_string = "all"; // 0x2ac PushS
	var_143_string = "idle"; // 0x2ad PushS
	PlayAnimation(var_142_string, var_143_string); // 0x2ae Func
	goto Label_679; // 0x2b0 Jump
	
Label_638:
	var_144_string = ""; // 0x27e PushV
	var_144_string = "Neutral"; // 0x27f MovS
	func_690(var_88_object, var_144_string); // 0x280 NEW_2
	var_145_int = 509681; // 0x282 PushI
	SetMessage(var_145_int); // 0x283 TObjFunc
	ClearReplies(); // 0x285 TObjFunc
	var_146_int = 509682; // 0x287 PushI
	var_147_int = 10660; // 0x288 PushI
	var_148_int = 10659; // 0x289 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x28a TObjFunc
	var_149_int = 509699; // 0x28c PushI
	var_150_int = -1; // 0x28d PushI
	var_151_int = 10678; // 0x28e PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x28f TObjFunc
	goto Label_660; // 0x291 Jump
}


func_1631()
{
	var_74_int = 1; // 0x660 PushI
	SetReturnValue(var_74_int); // 0x661 ObjFunc
	return 0; // 0x663 Return
}


func_1251(var_327_object)
{
	var_328_bool = 0; var_329_bool = 0; // 0x4e3 PushV
	
Label_1252:
	IsOverrideActive(var_329_bool); // 0x4e4 Func
	var_330_bool = var_329_bool == 0; // 0x4e6 Not
	if(var_330_bool == 0) goto Label_1257; // 0x4e7 JumpB
	goto Label_1258; // 0x4e8 Jump
	
Label_1258:
	var_331_object = Obj(); // 0x4ea PushV
	var_331_object = var_327_object; // 0x4eb Mov
	func_1243(var_331_object); // 0x4ec NEW_2
	Hold(); // 0x4ee Func
	return 2; // 0x4f0 Return
	
Label_1257:
	goto Label_1252; // 0x4e9 Jump
}


func_1636(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x665 PushV
	var_97_string = "ood4WhiteMask1"; // 0x666 MovS
	func_1496(var_96_int, var_97_string); // 0x667 NEW_2
	var_100_int = 0; // 0x669 PushI
	var_101_bool = var_96_int == var_100_int; // 0x66a Eq
	if(var_101_bool == 0) goto Label_1646; // 0x66b JumpB
	var_94_bool = 1; // 0x66c MovB
	return 0; // 0x66d Return
	
Label_1646:
	var_94_bool = 0; // 0x66e MovB
	return 0; // 0x66f Return
}


func_357(var_0_bool, var_1_object)
{
	var_337_float = 0; var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_bool = 0; var_341_object = Obj(); var_342_bool = 0; var_343_float = 0; var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_bool = 0; var_347_object = Obj(); var_348_bool = 0; // 0x165 PushV
	var_0_bool = 0; // 0x166 TMovB
	var_1_object = 0; // 0x167 TMovB
	var_349_float = 0.5; // 0x168 PushF
	rand(var_343_float, var_349_float); // 0x169 Func
	Sleep(var_343_float); // 0x16b Func
	
Label_365:
	var_350_bool = var_0_bool == 0; // 0x16d Not
	if(var_350_bool == 0) goto Label_415; // 0x16e JumpB
	var_351_bool = var_1_object == 0; // 0x16f Not
	if(var_351_bool == 0) goto Label_384; // 0x170 JumpB
	
Label_369:
	GetPosition(var_345_cvector); // 0x171 Func
	var_352_float = 0; // 0x173 PushV
	func_416(var_352_float); // 0x174 NEW_2
	GetRandomPFPointInCircle(var_344_cvector, var_345_cvector, var_352_float, var_346_bool); // 0x176 Func
	var_355_bool = var_346_bool; // 0x178 Push
	if(var_355_bool == 0) goto Label_379; // 0x179 JumpB
	goto Label_383; // 0x17a Jump
	
Label_383:
	goto Label_385; // 0x17f Jump
	
Label_385:
	var_356_object = Obj(); var_357_cvector = CVector(0,0,0); // 0x181 PushV
	var_357_cvector = var_344_cvector; // 0x182 Mov
	func_446(var_356_object, var_357_cvector); // 0x183 NEW_2
	var_347_object = var_356_object; // 0x184 Mov
	var_360_bool = var_347_object != 0; // 0x186 NullNeq
	if(var_360_bool == 0) goto Label_410; // 0x187 JumpB
	RotatePath(var_347_object, var_348_bool); // 0x188 Func
	var_361_bool = var_348_bool; // 0x18a Push
	if(var_361_bool == 0) goto Label_409; // 0x18b JumpB
	var_362_bool = 0; // 0x18c PushV
	func_444(var_362_bool); // 0x18d NEW_2
	FollowPath(var_347_object, var_362_bool, var_348_bool); // 0x18f Func
	var_347_object = 0; // 0x191 SetNull
	var_363_bool = var_348_bool; // 0x192 Push
	if(var_363_bool == 0) goto Label_409; // 0x193 JumpB
	TaskCall(3); // 0x195 TaskCall
	func_452(); // 0x196 NEW_2
	TaskReturn(); // 0x197 TaskReturn
	
Label_409:
	goto Label_413; // 0x199 Jump
	
Label_413:
	var_347_object = 0; // 0x19d SetNull
	goto Label_365; // 0x19e Jump
	
Label_410:
	var_417_int = 1; // 0x19a PushI
	Sleep(var_417_int); // 0x19b Func
	
Label_379:
	var_418_int = 1; // 0x17b PushI
	Sleep(var_418_int); // 0x17c Func
	goto Label_369; // 0x17e Jump
	
Label_384:
	var_1_object = 0; // 0x180 TMovB
	
Label_415:
	return 12; // 0x19f Return
}


func_1513(var_28_object, var_29_int)
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; // 0x5e9 PushV
	GetItemID(var_33_int); // 0x5ea ObjFunc
	var_36_string = "Category"; // 0x5ec PushS
	GetInvItemProperty(var_34_int, var_33_int, var_36_string); // 0x5ed Func
	AddItem(var_35_bool, var_28_object, var_34_int, var_29_int); // 0x5ef ObjFunc
	var_37_bool = var_35_bool == 0; // 0x5f1 Not
	if(var_37_bool == 0) goto Label_1526; // 0x5f2 JumpB
	DropItems(var_28_object, var_29_int); // 0x5f3 ObjFunc
	goto Label_1531; // 0x5f5 Jump
	
Label_1531:
	return 6; // 0x5fb Return
	
Label_1526:
	var_38_int = 0; var_39_int = 0; // 0x5f6 PushV
	var_38_int = var_33_int; // 0x5f7 Mov
	var_39_int = var_29_int; // 0x5f8 Mov
	func_1501(var_38_int, var_39_int); // 0x5f9 NEW_2
}


func_1648(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x670 PushV
	var_81_string = "branch"; // 0x671 PushS
	GetVariable(var_81_string, var_80_int); // 0x672 Func
	var_82_int = 0; // 0x674 PushI
	var_83_bool = var_80_int == var_82_int; // 0x675 Eq
	if(var_83_bool == 0) goto Label_1658; // 0x676 JumpB
	var_78_int = 1; // 0x677 MovI
	return 2; // 0x678 Return
	
Label_1658:
	var_84_int = 1; // 0x67a PushI
	var_85_bool = var_80_int == var_84_int; // 0x67b Eq
	if(var_85_bool == 0) goto Label_1663; // 0x67c JumpB
	var_78_int = 2; // 0x67d MovI
	return 2; // 0x67e Return
	
Label_1663:
	var_78_int = 3; // 0x67f MovI
	return 2; // 0x680 Return
}


func_1265(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x4f1 PushV
	GetPosition(var_19_cvector); // 0x4f2 Func
	var_17_cvector = var_19_cvector; // 0x4f4 Mov
	return 2; // 0x4f5 Return
}


func_1270(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0; // 0x4f6 PushV
	GetScene(var_15_object); // 0x4f7 Func
	var_17_cvector = CVector(0,0,0); // 0x4f9 PushV
	func_1265(var_17_cvector); // 0x4fa NEW_2
	GetRegionByPt(var_16_int, var_17_cvector); // 0x4fc ObjFunc
	var_12_int = var_16_int; // 0x4fe Mov
	return 4; // 0x4ff Return
}


func_1532(var_22_object, var_23_string, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x5fc PushV
	CreateInvItem(var_26_object); // 0x5fd Func
	SetItemName(var_23_string); // 0x5ff ObjFunc
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x601 PushV
	var_27_object = var_22_object; // 0x602 Mov
	var_28_object = var_26_object; // 0x603 Mov
	var_29_int = var_24_int; // 0x604 Mov
	func_1513(var_28_object, var_29_int); // 0x605 NEW_2
	return 2; // 0x607 Return
}


