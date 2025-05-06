task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0xb4 PushI
	if(var_30_int == 0) goto Label_271; // 0xb5 JumpB
	func_1999(); // 0xb7 NEW_2
	var_32_int = 36906; // 0xb9 PushI
	var_33_bool = var_28_cvector == var_32_int; // 0xba Eq
	if(var_33_bool == 0) goto Label_213; // 0xbb JumpB
	var_34_string = ""; // 0xbc PushV
	var_34_string = "Neutral"; // 0xbd MovS
	func_157(var_29_cvector, var_34_string); // 0xbe NEW_2
	var_51_int = 535231; // 0xc0 PushI
	SetMessage(var_51_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_52_int = 535232; // 0xc5 PushI
	var_53_int = 36953; // 0xc6 PushI
	var_54_int = 36907; // 0xc7 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xc8 TObjFunc
	var_55_int = 535233; // 0xca PushI
	var_56_int = -1; // 0xcb PushI
	var_57_int = 36908; // 0xcc PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xcd TObjFunc
	var_58_int = 535280; // 0xcf PushI
	var_59_int = -1; // 0xd0 PushI
	var_60_int = 36956; // 0xd1 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_61_int = 36953; // 0xd5 PushI
	var_62_bool = var_28_cvector == var_61_int; // 0xd6 Eq
	if(var_62_bool == 0) goto Label_236; // 0xd7 JumpB
	var_63_string = ""; // 0xd8 PushV
	var_63_string = "Neutral"; // 0xd9 MovS
	func_157(var_29_cvector, var_63_string); // 0xda NEW_2
	var_64_int = 535277; // 0xdc PushI
	SetMessage(var_64_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_65_int = 535278; // 0xe1 PushI
	var_66_int = 36957; // 0xe2 PushI
	var_67_int = 36954; // 0xe3 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xe4 TObjFunc
	var_68_int = 535279; // 0xe6 PushI
	var_69_int = 36957; // 0xe7 PushI
	var_70_int = 36955; // 0xe8 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_71_int = 36957; // 0xec PushI
	var_72_bool = var_28_cvector == var_71_int; // 0xed Eq
	if(var_72_bool == 0) goto Label_259; // 0xee JumpB
	var_73_string = ""; // 0xef PushV
	var_73_string = "Neutral"; // 0xf0 MovS
	func_157(var_29_cvector, var_73_string); // 0xf1 NEW_2
	var_74_int = 535281; // 0xf3 PushI
	SetMessage(var_74_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_75_int = 535282; // 0xf8 PushI
	var_76_int = -1; // 0xf9 PushI
	var_77_int = 36958; // 0xfa PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xfb TObjFunc
	var_78_int = 535283; // 0xfd PushI
	var_79_int = -1; // 0xfe PushI
	var_80_int = 36959; // 0xff PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_3_string = 1; // 0x103 TMovB
	var_81_bool = 0; // 0x104 PushV
	func_2084(var_81_bool); // 0x105 NEW_2
	if(var_81_bool == 0) goto Label_267; // 0x107 JumpB
	lshStopAnimation(); // 0x108 Func
	goto Label_269; // 0x10a Jump
	
Label_269:
	return 0; // 0x10d Return
	
Label_267:
	StopAnimation(); // 0x10b Func
	
Label_271:
	return 0; // 0x10f Return
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x1b2 PushI
	if(var_30_int == 0) goto Label_520; // 0x1b3 JumpB
	func_1999(); // 0x1b5 NEW_2
	var_32_int = 19184; // 0x1b7 PushI
	var_33_bool = var_28_cvector == var_32_int; // 0x1b8 Eq
	if(var_33_bool == 0) goto Label_462; // 0x1b9 JumpB
	var_34_string = ""; // 0x1ba PushV
	var_34_string = "Neutral"; // 0x1bb MovS
	func_411(var_29_cvector, var_34_string); // 0x1bc NEW_2
	var_51_int = 518051; // 0x1be PushI
	SetMessage(var_51_int); // 0x1bf TObjFunc
	ClearReplies(); // 0x1c1 TObjFunc
	var_52_int = 518052; // 0x1c3 PushI
	var_53_int = 29827; // 0x1c4 PushI
	var_54_int = 19185; // 0x1c5 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x1c6 TObjFunc
	var_55_int = 528440; // 0x1c8 PushI
	var_56_int = -1; // 0x1c9 PushI
	var_57_int = 29826; // 0x1ca PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_58_int = 29827; // 0x1ce PushI
	var_59_bool = var_28_cvector == var_58_int; // 0x1cf Eq
	if(var_59_bool == 0) goto Label_485; // 0x1d0 JumpB
	var_60_string = ""; // 0x1d1 PushV
	var_60_string = "Neutral"; // 0x1d2 MovS
	func_411(var_29_cvector, var_60_string); // 0x1d3 NEW_2
	var_61_int = 528441; // 0x1d5 PushI
	SetMessage(var_61_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_62_int = 528442; // 0x1da PushI
	var_63_int = 29830; // 0x1db PushI
	var_64_int = 29828; // 0x1dc PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x1dd TObjFunc
	var_65_int = 528443; // 0x1df PushI
	var_66_int = -1; // 0x1e0 PushI
	var_67_int = 29829; // 0x1e1 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_68_int = 29830; // 0x1e5 PushI
	var_69_bool = var_28_cvector == var_68_int; // 0x1e6 Eq
	if(var_69_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_70_string = ""; // 0x1e8 PushV
	var_70_string = "Neutral"; // 0x1e9 MovS
	func_411(var_29_cvector, var_70_string); // 0x1ea NEW_2
	var_71_int = 528444; // 0x1ec PushI
	SetMessage(var_71_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_72_int = 528445; // 0x1f1 PushI
	var_73_int = -1; // 0x1f2 PushI
	var_74_int = 29831; // 0x1f3 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x1f4 TObjFunc
	var_75_int = 528446; // 0x1f6 PushI
	var_76_int = -1; // 0x1f7 PushI
	var_77_int = 29832; // 0x1f8 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_3_string = 1; // 0x1fc TMovB
	var_78_bool = 0; // 0x1fd PushV
	func_2084(var_78_bool); // 0x1fe NEW_2
	if(var_78_bool == 0) goto Label_516; // 0x200 JumpB
	lshStopAnimation(); // 0x201 Func
	goto Label_518; // 0x203 Jump
	
Label_518:
	return 0; // 0x206 Return
	
Label_516:
	StopAnimation(); // 0x204 Func
	
Label_520:
	return 0; // 0x208 Return
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x2bf PushI
	if(var_30_int == 0) goto Label_979; // 0x2c0 JumpB
	func_1999(); // 0x2c2 NEW_2
	var_32_int = 22234; // 0x2c4 PushI
	var_33_bool = var_29_cvector == var_32_int; // 0x2c5 Eq
	if(var_33_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x2c7 PushV
	var_34_object = var_1_object; // 0x2c8 MovT
	var_35_object = var_0_object; // 0x2c9 MovT
	func_2086(); // 0x2ca NEW_2
	
Label_716:
	var_83_int = 22233; // 0x2cc PushI
	var_84_bool = var_28_cvector == var_83_int; // 0x2cd Eq
	if(var_84_bool == 0) goto Label_759; // 0x2ce JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x2cf PushV
	var_86_object = var_1_object; // 0x2d0 MovT
	func_2179(var_86_object); // 0x2d1 NEW_2
	if(var_85_bool == 0) goto Label_744; // 0x2d3 JumpB
	var_93_string = ""; // 0x2d4 PushV
	var_93_string = "Anger"; // 0x2d5 MovS
	func_680(var_29_cvector, var_93_string); // 0x2d6 NEW_2
	var_110_int = 521037; // 0x2d8 PushI
	SetMessage(var_110_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_111_int = 528490; // 0x2dd PushI
	var_112_int = 29880; // 0x2de PushI
	var_113_int = 29879; // 0x2df PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x2e0 TObjFunc
	var_114_int = 528510; // 0x2e2 PushI
	var_115_int = 29882; // 0x2e3 PushI
	var_116_int = 29899; // 0x2e4 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_117_string = ""; // 0x2e8 PushV
	var_117_string = "Neutral"; // 0x2e9 MovS
	func_680(var_29_cvector, var_117_string); // 0x2ea NEW_2
	var_118_int = 521039; // 0x2ec PushI
	SetMessage(var_118_int); // 0x2ed TObjFunc
	ClearReplies(); // 0x2ef TObjFunc
	var_119_int = 521040; // 0x2f1 PushI
	var_120_int = -1; // 0x2f2 PushI
	var_121_int = 22236; // 0x2f3 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x2f4 TObjFunc
	return 0; // 0x2f6 Return
	
Label_759:
	var_122_int = 29880; // 0x2f7 PushI
	var_123_bool = var_28_cvector == var_122_int; // 0x2f8 Eq
	if(var_123_bool == 0) goto Label_777; // 0x2f9 JumpB
	var_124_string = ""; // 0x2fa PushV
	var_124_string = "Anger"; // 0x2fb MovS
	func_680(var_29_cvector, var_124_string); // 0x2fc NEW_2
	var_125_int = 528491; // 0x2fe PushI
	SetMessage(var_125_int); // 0x2ff TObjFunc
	ClearReplies(); // 0x301 TObjFunc
	var_126_int = 528492; // 0x303 PushI
	var_127_int = 29882; // 0x304 PushI
	var_128_int = 29881; // 0x305 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x306 TObjFunc
	return 0; // 0x308 Return
	
Label_777:
	var_129_int = 29882; // 0x309 PushI
	var_130_bool = var_28_cvector == var_129_int; // 0x30a Eq
	if(var_130_bool == 0) goto Label_800; // 0x30b JumpB
	var_131_string = ""; // 0x30c PushV
	var_131_string = "Confusion"; // 0x30d MovS
	func_680(var_29_cvector, var_131_string); // 0x30e NEW_2
	var_132_int = 528493; // 0x310 PushI
	SetMessage(var_132_int); // 0x311 TObjFunc
	ClearReplies(); // 0x313 TObjFunc
	var_133_int = 528494; // 0x315 PushI
	var_134_int = 29884; // 0x316 PushI
	var_135_int = 29883; // 0x317 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x318 TObjFunc
	var_136_int = 528511; // 0x31a PushI
	var_137_int = 29902; // 0x31b PushI
	var_138_int = 29901; // 0x31c PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x31d TObjFunc
	return 0; // 0x31f Return
	
Label_800:
	var_139_int = 29902; // 0x320 PushI
	var_140_bool = var_28_cvector == var_139_int; // 0x321 Eq
	if(var_140_bool == 0) goto Label_818; // 0x322 JumpB
	var_141_string = ""; // 0x323 PushV
	var_141_string = "Fear"; // 0x324 MovS
	func_680(var_29_cvector, var_141_string); // 0x325 NEW_2
	var_142_int = 528512; // 0x327 PushI
	SetMessage(var_142_int); // 0x328 TObjFunc
	ClearReplies(); // 0x32a TObjFunc
	var_143_int = 528513; // 0x32c PushI
	var_144_int = 29904; // 0x32d PushI
	var_145_int = 29903; // 0x32e PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x32f TObjFunc
	return 0; // 0x331 Return
	
Label_818:
	var_146_int = 29904; // 0x332 PushI
	var_147_bool = var_28_cvector == var_146_int; // 0x333 Eq
	if(var_147_bool == 0) goto Label_836; // 0x334 JumpB
	var_148_string = ""; // 0x335 PushV
	var_148_string = "Fear"; // 0x336 MovS
	func_680(var_29_cvector, var_148_string); // 0x337 NEW_2
	var_149_int = 528514; // 0x339 PushI
	SetMessage(var_149_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_150_int = 528515; // 0x33e PushI
	var_151_int = 29886; // 0x33f PushI
	var_152_int = 29905; // 0x340 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x341 TObjFunc
	return 0; // 0x343 Return
	
Label_836:
	var_153_int = 29884; // 0x344 PushI
	var_154_bool = var_28_cvector == var_153_int; // 0x345 Eq
	if(var_154_bool == 0) goto Label_854; // 0x346 JumpB
	var_155_string = ""; // 0x347 PushV
	var_155_string = "Confusion"; // 0x348 MovS
	func_680(var_29_cvector, var_155_string); // 0x349 NEW_2
	var_156_int = 528495; // 0x34b PushI
	SetMessage(var_156_int); // 0x34c TObjFunc
	ClearReplies(); // 0x34e TObjFunc
	var_157_int = 528496; // 0x350 PushI
	var_158_int = 29886; // 0x351 PushI
	var_159_int = 29885; // 0x352 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x353 TObjFunc
	return 0; // 0x355 Return
	
Label_854:
	var_160_int = 29886; // 0x356 PushI
	var_161_bool = var_28_cvector == var_160_int; // 0x357 Eq
	if(var_161_bool == 0) goto Label_872; // 0x358 JumpB
	var_162_string = ""; // 0x359 PushV
	var_162_string = "Fear"; // 0x35a MovS
	func_680(var_29_cvector, var_162_string); // 0x35b NEW_2
	var_163_int = 528497; // 0x35d PushI
	SetMessage(var_163_int); // 0x35e TObjFunc
	ClearReplies(); // 0x360 TObjFunc
	var_164_int = 528498; // 0x362 PushI
	var_165_int = 29888; // 0x363 PushI
	var_166_int = 29887; // 0x364 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_167_int = 29888; // 0x368 PushI
	var_168_bool = var_28_cvector == var_167_int; // 0x369 Eq
	if(var_168_bool == 0) goto Label_890; // 0x36a JumpB
	var_169_string = ""; // 0x36b PushV
	var_169_string = "Fear"; // 0x36c MovS
	func_680(var_29_cvector, var_169_string); // 0x36d NEW_2
	var_170_int = 528499; // 0x36f PushI
	SetMessage(var_170_int); // 0x370 TObjFunc
	ClearReplies(); // 0x372 TObjFunc
	var_171_int = 528500; // 0x374 PushI
	var_172_int = 29890; // 0x375 PushI
	var_173_int = 29889; // 0x376 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x377 TObjFunc
	return 0; // 0x379 Return
	
Label_890:
	var_174_int = 29890; // 0x37a PushI
	var_175_bool = var_28_cvector == var_174_int; // 0x37b Eq
	if(var_175_bool == 0) goto Label_913; // 0x37c JumpB
	var_176_string = ""; // 0x37d PushV
	var_176_string = "Neutral"; // 0x37e MovS
	func_680(var_29_cvector, var_176_string); // 0x37f NEW_2
	var_177_int = 528501; // 0x381 PushI
	SetMessage(var_177_int); // 0x382 TObjFunc
	ClearReplies(); // 0x384 TObjFunc
	var_178_int = 528504; // 0x386 PushI
	var_179_int = 29894; // 0x387 PushI
	var_180_int = 29893; // 0x388 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x389 TObjFunc
	var_181_int = 528517; // 0x38b PushI
	var_182_int = 29896; // 0x38c PushI
	var_183_int = 29908; // 0x38d PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x38e TObjFunc
	return 0; // 0x390 Return
	
Label_913:
	var_184_int = 29894; // 0x391 PushI
	var_185_bool = var_28_cvector == var_184_int; // 0x392 Eq
	if(var_185_bool == 0) goto Label_931; // 0x393 JumpB
	var_186_string = ""; // 0x394 PushV
	var_186_string = "Neutral"; // 0x395 MovS
	func_680(var_29_cvector, var_186_string); // 0x396 NEW_2
	var_187_int = 528505; // 0x398 PushI
	SetMessage(var_187_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_188_int = 528506; // 0x39d PushI
	var_189_int = 29896; // 0x39e PushI
	var_190_int = 29895; // 0x39f PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x3a0 TObjFunc
	return 0; // 0x3a2 Return
	
Label_931:
	var_191_int = 29896; // 0x3a3 PushI
	var_192_bool = var_28_cvector == var_191_int; // 0x3a4 Eq
	if(var_192_bool == 0) goto Label_949; // 0x3a5 JumpB
	var_193_string = ""; // 0x3a6 PushV
	var_193_string = "Surprise"; // 0x3a7 MovS
	func_680(var_29_cvector, var_193_string); // 0x3a8 NEW_2
	var_194_int = 528507; // 0x3aa PushI
	SetMessage(var_194_int); // 0x3ab TObjFunc
	ClearReplies(); // 0x3ad TObjFunc
	var_195_int = 528508; // 0x3af PushI
	var_196_int = 29898; // 0x3b0 PushI
	var_197_int = 29897; // 0x3b1 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x3b2 TObjFunc
	return 0; // 0x3b4 Return
	
Label_949:
	var_198_int = 29898; // 0x3b5 PushI
	var_199_bool = var_28_cvector == var_198_int; // 0x3b6 Eq
	if(var_199_bool == 0) goto Label_967; // 0x3b7 JumpB
	var_200_string = ""; // 0x3b8 PushV
	var_200_string = "Surprise"; // 0x3b9 MovS
	func_680(var_29_cvector, var_200_string); // 0x3ba NEW_2
	var_201_int = 528509; // 0x3bc PushI
	SetMessage(var_201_int); // 0x3bd TObjFunc
	ClearReplies(); // 0x3bf TObjFunc
	var_202_int = 521038; // 0x3c1 PushI
	var_203_int = -1; // 0x3c2 PushI
	var_204_int = 22234; // 0x3c3 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_3_string = 1; // 0x3c7 TMovB
	var_205_bool = 0; // 0x3c8 PushV
	func_2084(var_205_bool); // 0x3c9 NEW_2
	if(var_205_bool == 0) goto Label_975; // 0x3cb JumpB
	lshStopAnimation(); // 0x3cc Func
	goto Label_977; // 0x3ce Jump
	
Label_977:
	return 0; // 0x3d1 Return
	
Label_975:
	StopAnimation(); // 0x3cf Func
	
Label_979:
	return 0; // 0x3d3 Return
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x499 PushI
	if(var_30_int == 0) goto Label_1411; // 0x49a JumpB
	func_1999(); // 0x49c NEW_2
	var_32_int = 22516; // 0x49e PushI
	var_33_bool = var_29_cvector == var_32_int; // 0x49f Eq
	if(var_33_bool == 0) goto Label_1200; // 0x4a0 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x4a1 PushV
	var_34_object = var_1_object; // 0x4a2 MovT
	var_35_object = var_0_object; // 0x4a3 MovT
	func_2120(); // 0x4a4 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x4a6 PushV
	var_52_object = var_1_object; // 0x4a7 MovT
	var_53_object = var_0_object; // 0x4a8 MovT
	func_2149(); // 0x4a9 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x4ab PushV
	var_56_object = var_1_object; // 0x4ac MovT
	var_57_object = var_0_object; // 0x4ad MovT
	func_2136(); // 0x4ae NEW_2
	
Label_1200:
	var_68_int = 29846; // 0x4b0 PushI
	var_69_bool = var_29_cvector == var_68_int; // 0x4b1 Eq
	if(var_69_bool == 0) goto Label_1218; // 0x4b2 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x4b3 PushV
	var_70_object = var_1_object; // 0x4b4 MovT
	var_71_object = var_0_object; // 0x4b5 MovT
	func_2120(); // 0x4b6 NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x4b8 PushV
	var_72_object = var_1_object; // 0x4b9 MovT
	var_73_object = var_0_object; // 0x4ba MovT
	func_2149(); // 0x4bb NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0x4bd PushV
	var_74_object = var_1_object; // 0x4be MovT
	var_75_object = var_0_object; // 0x4bf MovT
	func_2136(); // 0x4c0 NEW_2
	
Label_1218:
	var_76_int = 22515; // 0x4c2 PushI
	var_77_bool = var_29_cvector == var_76_int; // 0x4c3 Eq
	if(var_77_bool == 0) goto Label_1236; // 0x4c4 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x4c5 PushV
	var_78_object = var_1_object; // 0x4c6 MovT
	var_79_object = var_0_object; // 0x4c7 MovT
	func_2120(); // 0x4c8 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x4ca PushV
	var_80_object = var_1_object; // 0x4cb MovT
	var_81_object = var_0_object; // 0x4cc MovT
	func_2149(); // 0x4cd NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0x4cf PushV
	var_82_object = var_1_object; // 0x4d0 MovT
	var_83_object = var_0_object; // 0x4d1 MovT
	func_2136(); // 0x4d2 NEW_2
	
Label_1236:
	var_84_int = 22514; // 0x4d4 PushI
	var_85_bool = var_28_cvector == var_84_int; // 0x4d5 Eq
	if(var_85_bool == 0) goto Label_1294; // 0x4d6 JumpB
	var_86_bool = 0; // 0x4d7 PushV
	var_86_bool = 0; // 0x4d8 MovB
	var_87_bool = 0; var_88_object = Obj(); // 0x4d9 PushV
	var_88_object = var_1_object; // 0x4da MovT
	func_2155(var_88_object); // 0x4db NEW_2
	var_95_bool = var_87_bool == 0; // 0x4dd Not
	if(var_95_bool == 0) goto Label_1253; // 0x4de JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x4df PushV
	var_97_object = var_1_object; // 0x4e0 MovT
	func_2167(var_97_object); // 0x4e1 NEW_2
	if(var_96_bool == 0) goto Label_1253; // 0x4e3 JumpB
	var_86_bool = 1; // 0x4e4 MovB
	
Label_1253:
	if(var_86_bool == 0) goto Label_1279; // 0x4e5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x4e6 PushV
	var_102_object = var_1_object; // 0x4e7 MovT
	var_103_object = var_0_object; // 0x4e8 MovT
	func_2114(); // 0x4e9 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x4eb PushV
	var_106_object = var_1_object; // 0x4ec MovT
	var_107_object = var_0_object; // 0x4ed MovT
	func_2143(); // 0x4ee NEW_2
	var_110_string = ""; // 0x4f0 PushV
	var_110_string = "Neutral"; // 0x4f1 MovS
	func_1154(var_29_cvector, var_110_string); // 0x4f2 NEW_2
	var_127_int = 521320; // 0x4f4 PushI
	SetMessage(var_127_int); // 0x4f5 TObjFunc
	ClearReplies(); // 0x4f7 TObjFunc
	var_128_int = 528448; // 0x4f9 PushI
	var_129_int = 29835; // 0x4fa PushI
	var_130_int = 29834; // 0x4fb PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x4fc TObjFunc
	return 0; // 0x4fe Return
	
Label_1279:
	var_131_string = ""; // 0x4ff PushV
	var_131_string = "Neutral"; // 0x500 MovS
	func_1154(var_29_cvector, var_131_string); // 0x501 NEW_2
	var_132_int = 521323; // 0x503 PushI
	SetMessage(var_132_int); // 0x504 TObjFunc
	ClearReplies(); // 0x506 TObjFunc
	var_133_int = 521324; // 0x508 PushI
	var_134_int = -1; // 0x509 PushI
	var_135_int = 22518; // 0x50a PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x50b TObjFunc
	return 0; // 0x50d Return
	
Label_1294:
	var_136_int = 29835; // 0x50e PushI
	var_137_bool = var_28_cvector == var_136_int; // 0x50f Eq
	if(var_137_bool == 0) goto Label_1312; // 0x510 JumpB
	var_138_string = ""; // 0x511 PushV
	var_138_string = "Neutral"; // 0x512 MovS
	func_1154(var_29_cvector, var_138_string); // 0x513 NEW_2
	var_139_int = 528449; // 0x515 PushI
	SetMessage(var_139_int); // 0x516 TObjFunc
	ClearReplies(); // 0x518 TObjFunc
	var_140_int = 528450; // 0x51a PushI
	var_141_int = 29837; // 0x51b PushI
	var_142_int = 29836; // 0x51c PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x51d TObjFunc
	return 0; // 0x51f Return
	
Label_1312:
	var_143_int = 29837; // 0x520 PushI
	var_144_bool = var_28_cvector == var_143_int; // 0x521 Eq
	if(var_144_bool == 0) goto Label_1335; // 0x522 JumpB
	var_145_string = ""; // 0x523 PushV
	var_145_string = "Neutral"; // 0x524 MovS
	func_1154(var_29_cvector, var_145_string); // 0x525 NEW_2
	var_146_int = 528451; // 0x527 PushI
	SetMessage(var_146_int); // 0x528 TObjFunc
	ClearReplies(); // 0x52a TObjFunc
	var_147_int = 528452; // 0x52c PushI
	var_148_int = 29840; // 0x52d PushI
	var_149_int = 29838; // 0x52e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x52f TObjFunc
	var_150_int = 528453; // 0x531 PushI
	var_151_int = 29840; // 0x532 PushI
	var_152_int = 29839; // 0x533 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x534 TObjFunc
	return 0; // 0x536 Return
	
Label_1335:
	var_153_int = 29840; // 0x537 PushI
	var_154_bool = var_28_cvector == var_153_int; // 0x538 Eq
	if(var_154_bool == 0) goto Label_1358; // 0x539 JumpB
	var_155_string = ""; // 0x53a PushV
	var_155_string = "Neutral"; // 0x53b MovS
	func_1154(var_29_cvector, var_155_string); // 0x53c NEW_2
	var_156_int = 528454; // 0x53e PushI
	SetMessage(var_156_int); // 0x53f TObjFunc
	ClearReplies(); // 0x541 TObjFunc
	var_157_int = 528455; // 0x543 PushI
	var_158_int = 29842; // 0x544 PushI
	var_159_int = 29841; // 0x545 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x546 TObjFunc
	var_160_int = 521321; // 0x548 PushI
	var_161_int = -1; // 0x549 PushI
	var_162_int = 22515; // 0x54a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x54b TObjFunc
	return 0; // 0x54d Return
	
Label_1358:
	var_163_int = 29842; // 0x54e PushI
	var_164_bool = var_28_cvector == var_163_int; // 0x54f Eq
	if(var_164_bool == 0) goto Label_1376; // 0x550 JumpB
	var_165_string = ""; // 0x551 PushV
	var_165_string = "Neutral"; // 0x552 MovS
	func_1154(var_29_cvector, var_165_string); // 0x553 NEW_2
	var_166_int = 528456; // 0x555 PushI
	SetMessage(var_166_int); // 0x556 TObjFunc
	ClearReplies(); // 0x558 TObjFunc
	var_167_int = 528457; // 0x55a PushI
	var_168_int = 29845; // 0x55b PushI
	var_169_int = 29844; // 0x55c PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x55d TObjFunc
	return 0; // 0x55f Return
	
Label_1376:
	var_170_int = 29845; // 0x560 PushI
	var_171_bool = var_28_cvector == var_170_int; // 0x561 Eq
	if(var_171_bool == 0) goto Label_1399; // 0x562 JumpB
	var_172_string = ""; // 0x563 PushV
	var_172_string = "Neutral"; // 0x564 MovS
	func_1154(var_29_cvector, var_172_string); // 0x565 NEW_2
	var_173_int = 528458; // 0x567 PushI
	SetMessage(var_173_int); // 0x568 TObjFunc
	ClearReplies(); // 0x56a TObjFunc
	var_174_int = 521322; // 0x56c PushI
	var_175_int = -1; // 0x56d PushI
	var_176_int = 22516; // 0x56e PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x56f TObjFunc
	var_177_int = 528459; // 0x571 PushI
	var_178_int = -1; // 0x572 PushI
	var_179_int = 29846; // 0x573 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x574 TObjFunc
	return 0; // 0x576 Return
	
Label_1399:
	var_3_string = 1; // 0x577 TMovB
	var_180_bool = 0; // 0x578 PushV
	func_2084(var_180_bool); // 0x579 NEW_2
	if(var_180_bool == 0) goto Label_1407; // 0x57b JumpB
	lshStopAnimation(); // 0x57c Func
	goto Label_1409; // 0x57e Jump
	
Label_1409:
	return 0; // 0x581 Return
	
Label_1407:
	StopAnimation(); // 0x57f Func
	
Label_1411:
	return 0; // 0x583 Return
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x626 PushI
	if(var_30_int == 0) goto Label_1614; // 0x627 JumpB
	func_1999(); // 0x629 NEW_2
	var_32_int = 42563; // 0x62b PushI
	var_33_bool = var_28_cvector == var_32_int; // 0x62c Eq
	if(var_33_bool == 0) goto Label_1602; // 0x62d JumpB
	var_34_string = ""; // 0x62e PushV
	var_34_string = "Neutral"; // 0x62f MovS
	func_1551(var_29_cvector, var_34_string); // 0x630 NEW_2
	var_51_int = 540554; // 0x632 PushI
	SetMessage(var_51_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_52_int = 540555; // 0x637 PushI
	var_53_int = -1; // 0x638 PushI
	var_54_int = 42564; // 0x639 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x63a TObjFunc
	var_55_int = 540794; // 0x63c PushI
	var_56_int = -1; // 0x63d PushI
	var_57_int = 42843; // 0x63e PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x63f TObjFunc
	return 0; // 0x641 Return
	
Label_1602:
	var_3_string = 1; // 0x642 TMovB
	var_58_bool = 0; // 0x643 PushV
	func_2084(var_58_bool); // 0x644 NEW_2
	if(var_58_bool == 0) goto Label_1610; // 0x646 JumpB
	lshStopAnimation(); // 0x647 Func
	goto Label_1612; // 0x649 Jump
	
Label_1612:
	return 0; // 0x64c Return
	
Label_1610:
	StopAnimation(); // 0x64a Func
	
Label_1614:
	return 0; // 0x64e Return
}


task_11_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_string)
{
	var_29_string = "icot_viktor_NPC_Trigger"; // 0x657 PushS
	var_30_bool = var_28_string == var_29_string; // 0x658 Eq
	if(var_30_bool == 0) goto Label_1629; // 0x659 JumpB
	func_1669(var_28_string); // 0x65b NEW_2
	
Label_1629:
	return 0; // 0x65d Return
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	TaskCall(0); // 0x690 TaskCall
	func_0(); // 0x691 NEW_2
	TaskReturn(); // 0x692 TaskReturn
	func_1658(var_25_bool, var_26_cvector, var_27_cvector); // 0x695 NEW_2
	return 0; // 0x697 Return
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x698 PushV
	var_31_object = var_0_object; // 0x699 PushT
	if(var_31_object == 0) goto Label_1705; // 0x69a JumpB
	IsOverrideActive(var_30_bool); // 0x69b Func
	var_32_bool = var_30_bool == 0; // 0x69d Not
	if(var_32_bool == 0) goto Label_1705; // 0x69e JumpB
	EventDisable(0); // 0x69f EventDisable
	var_33_bool = 0; var_34_object = Obj(); // 0x6a0 PushV
	var_34_object = var_28_object; // 0x6a1 Mov
	func_1716(var_34_object); // 0x6a2 NEW_2
	EventEnable(0); // 0x6a4 EventEnable
	var_47_object = Obj(); // 0x6a5 PushV
	var_47_object = var_28_object; // 0x6a6 Mov
	func_2279(var_47_object); // 0x6a7 NEW_2
	
Label_1705:
	return 2; // 0x6a9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	var_28_bool = GlobalVars[1]; // 0x64f PushGE
	var_28_bool = 1; // 0x650 MovB
	GlobalVars[1] = var_28_bool; // 0x651 PopGE
	func_1630(var_25_bool, var_26_cvector, var_27_cvector); // 0x653 NEW_2
	return 0; // 0x655 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_33_bool = 0; // 0x2 PushV
	func_1725(var_33_bool); // 0x3 NEW_2
	var_34_bool = var_33_bool == 0; // 0x5 Not
	if(var_34_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1154(var_2_object, var_332_string)
{
	var_333_bool = 0; // 0x483 PushV
	func_2084(var_333_bool); // 0x484 NEW_2
	var_334_bool = var_333_bool == 0; // 0x486 Not
	if(var_334_bool == 0) goto Label_1161; // 0x487 JumpB
	return 0; // 0x488 Return
	
Label_1161:
	var_335_bool = var_332_string == var_2_object; // 0x489 Eq
	if(var_335_bool == 0) goto Label_1164; // 0x48a JumpB
	return 0; // 0x48b Return
	
Label_1164:
	var_336_string = ""; var_337_bool = 0; // 0x48c PushV
	var_336_string = var_332_string; // 0x48d Mov
	var_338_string = ""; // 0x48e PushS
	var_339_bool = var_332_string == var_338_string; // 0x48f Eq
	if(var_339_bool == 0) goto Label_1171; // 0x490 JumpB
	var_337_bool = 0; // 0x491 MovB
	goto Label_1172; // 0x492 Jump
	
Label_1172:
	func_1969(var_336_string, var_337_bool); // 0x494 NEW_2
	var_2_object = var_332_string; // 0x496 TMov
	return 0; // 0x497 Return
	
Label_1171:
	var_337_bool = 1; // 0x493 MovB
}


func_2179(var_392_bool)
{
	var_394_int = 0; var_395_string = ""; // 0x884 PushV
	var_395_string = "b7q01"; // 0x885 MovS
	func_2022(var_394_int, var_395_string); // 0x886 NEW_2
	var_396_int = 5; // 0x888 PushI
	var_397_bool = var_394_int == var_396_int; // 0x889 Eq
	if(var_397_bool == 0) goto Label_2189; // 0x88a JumpB
	var_392_bool = 1; // 0x88b MovB
	return 0; // 0x88c Return
	
Label_2189:
	var_392_bool = 0; // 0x88d MovB
	return 0; // 0x88e Return
}


func_1412(var_0_object, var_493_int, var_494_object)
{
	var_496_object = Obj(); var_497_bool = 0; var_498_int = 0; var_499_bool = 0; var_500_object = Obj(); var_501_bool = 0; var_502_int = 0; var_503_bool = 0; // 0x584 PushV
	var_0_object = var_494_object; // 0x585 TMov
	var_504_bool = 0; var_505_object = Obj(); var_506_float = 0; // 0x586 PushV
	var_505_object = var_494_object; // 0x587 Mov
	var_506_float = 70.0; // 0x588 MovF
	func_1730(var_505_object, var_506_float); // 0x589 NEW_2
	var_507_bool = var_504_bool == 0; // 0x58b Not
	if(var_507_bool == 0) goto Label_1423; // 0x58c JumpB
	var_493_int = -2; // 0x58d MovI
	return 8; // 0x58e Return
	
Label_1423:
	CreateDialog(var_500_object); // 0x58f Func
	var_508_int = 0; // 0x591 PushV
	func_2078(var_508_int); // 0x592 NEW_2
	SetNPCName(var_508_int); // 0x594 ObjFunc
	var_509_int = 0; // 0x596 PushV
	func_2076(var_509_int); // 0x597 NEW_2
	SetNPCDescription(var_509_int); // 0x599 ObjFunc
	var_510_string = ""; // 0x59b PushV
	func_2080(var_510_string); // 0x59c NEW_2
	SetPhoto(var_510_string); // 0x59e ObjFunc
	var_511_string = ""; // 0x5a0 PushV
	func_2082(var_511_string); // 0x5a1 NEW_2
	SetPhoto2(var_511_string); // 0x5a3 ObjFunc
	var_512_int = 0; // 0x5a5 PushV
	func_2262(var_512_int); // 0x5a6 NEW_2
	SetPlayerName(var_512_int); // 0x5a8 ObjFunc
	var_502_int = -1; // 0x5aa MovI
	IsOverrideActive(var_501_bool); // 0x5ab Func
	var_513_bool = var_501_bool; // 0x5ad Push
	if(var_513_bool == 0) goto Label_1457; // 0x5ae JumpB
	var_493_int = -2; // 0x5af MovI
	return 8; // 0x5b0 Return
	
Label_1457:
	DoDialog(var_500_object); // 0x5b1 Func
	var_514_bool = 0; var_515_object = Obj(); // 0x5b3 PushV
	var_516_object = Obj(); // 0x5b4 PushV
	func_2006(var_516_object); // 0x5b5 NEW_2
	var_515_object = var_516_object; // 0x5b6 Mov
	func_1815(var_514_bool, var_515_object); // 0x5b8 NEW_2
	var_517_object = Obj(); var_518_object = Obj(); // 0x5ba PushV
	var_517_object = var_494_object; // 0x5bb Mov
	var_518_object = var_500_object; // 0x5bc Mov
	TaskCall(10); // 0x5bd TaskCall
	func_1493(var_519_object, var_520_object, var_521_string, var_522_bool, var_517_object, var_518_object); // 0x5be NEW_2
	TaskReturn(); // 0x5bf TaskReturn
	IsDialogEnd(var_503_bool); // 0x5c1 ObjFunc
	
Label_1475:
	var_547_bool = var_503_bool == 0; // 0x5c3 Not
	if(var_547_bool == 0) goto Label_1482; // 0x5c4 JumpB
	sync(); // 0x5c5 Func
	IsDialogEnd(var_503_bool); // 0x5c7 ObjFunc
	goto Label_1475; // 0x5c9 Jump
	
Label_1482:
	var_548_object = Obj(); // 0x5ca PushV
	var_548_object = var_494_object; // 0x5cb Mov
	func_1798(); // 0x5cc NEW_2
	StopDialog(var_500_object); // 0x5ce Func
	GetReturnValue(var_502_int); // 0x5d0 ObjFunc
	var_493_int = var_502_int; // 0x5d2 Mov
	return 8; // 0x5d3 Return
}


func_1669(var_0_object)
{
	var_31_bool = var_0_object == 0; // 0x685 Not
	if(var_31_bool == 0) goto Label_1678; // 0x686 JumpB
	var_0_object = 1; // 0x687 TMovB
	var_32_string = "all"; // 0x688 PushS
	var_33_string = "stand"; // 0x689 PushS
	PlayAnimation(var_32_string, var_33_string); // 0x68a Func
	WaitForAnimEnd(); // 0x68c Func
	
Label_1678:
	return 0; // 0x68e Return
}


func_1798()
{
	var_267_bool = 0; var_268_bool = 0; // 0x706 PushV
	CameraSwitchToNormal(); // 0x707 Func
	var_269_bool = 0; // 0x709 PushV
	func_2084(var_269_bool); // 0x70a NEW_2
	if(var_269_bool == 0) goto Label_1806; // 0x70c JumpB
	goto Label_1814; // 0x70d Jump
	
Label_1814:
	return 2; // 0x716 Return
	
Label_1806:
	var_270_string = "head"; // 0x70e PushS
	HasAnimationTrack(var_268_bool, var_270_string); // 0x70f Func
	var_271_bool = var_268_bool; // 0x711 Push
	if(var_271_bool == 0) goto Label_1814; // 0x712 JumpB
	var_272_string = "head"; // 0x713 PushS
	UnlookAsync(var_272_string); // 0x714 Func
}


func_2056(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x808 PushV
	GetGameTime(var_51_float); // 0x809 Func
	var_49_float = var_51_float; // 0x80b Mov
	return 2; // 0x80c Return
}


func_521(var_0_object, var_361_int, var_362_object)
{
	var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; // 0x209 PushV
	var_0_object = var_362_object; // 0x20a TMov
	var_372_bool = 0; var_373_object = Obj(); var_374_float = 0; // 0x20b PushV
	var_373_object = var_362_object; // 0x20c Mov
	var_374_float = 70.0; // 0x20d MovF
	func_1730(var_373_object, var_374_float); // 0x20e NEW_2
	var_375_bool = var_372_bool == 0; // 0x210 Not
	if(var_375_bool == 0) goto Label_532; // 0x211 JumpB
	var_361_int = -2; // 0x212 MovI
	return 8; // 0x213 Return
	
Label_532:
	CreateDialog(var_368_object); // 0x214 Func
	var_376_int = 0; // 0x216 PushV
	func_2078(var_376_int); // 0x217 NEW_2
	SetNPCName(var_376_int); // 0x219 ObjFunc
	var_377_int = 0; // 0x21b PushV
	func_2076(var_377_int); // 0x21c NEW_2
	SetNPCDescription(var_377_int); // 0x21e ObjFunc
	var_378_string = ""; // 0x220 PushV
	func_2080(var_378_string); // 0x221 NEW_2
	SetPhoto(var_378_string); // 0x223 ObjFunc
	var_379_string = ""; // 0x225 PushV
	func_2082(var_379_string); // 0x226 NEW_2
	SetPhoto2(var_379_string); // 0x228 ObjFunc
	var_380_int = 0; // 0x22a PushV
	func_2262(var_380_int); // 0x22b NEW_2
	SetPlayerName(var_380_int); // 0x22d ObjFunc
	var_370_int = -1; // 0x22f MovI
	IsOverrideActive(var_369_bool); // 0x230 Func
	var_381_bool = var_369_bool; // 0x232 Push
	if(var_381_bool == 0) goto Label_566; // 0x233 JumpB
	var_361_int = -2; // 0x234 MovI
	return 8; // 0x235 Return
	
Label_566:
	DoDialog(var_368_object); // 0x236 Func
	var_382_bool = 0; var_383_object = Obj(); // 0x238 PushV
	var_384_object = Obj(); // 0x239 PushV
	func_2006(var_384_object); // 0x23a NEW_2
	var_383_object = var_384_object; // 0x23b Mov
	func_1815(var_382_bool, var_383_object); // 0x23d NEW_2
	var_385_object = Obj(); var_386_object = Obj(); // 0x23f PushV
	var_385_object = var_362_object; // 0x240 Mov
	var_386_object = var_368_object; // 0x241 Mov
	TaskCall(6); // 0x242 TaskCall
	func_602(var_387_object, var_388_object, var_389_string, var_390_bool, var_385_object, var_386_object); // 0x243 NEW_2
	TaskReturn(); // 0x244 TaskReturn
	IsDialogEnd(var_371_bool); // 0x246 ObjFunc
	
Label_584:
	var_426_bool = var_371_bool == 0; // 0x248 Not
	if(var_426_bool == 0) goto Label_591; // 0x249 JumpB
	sync(); // 0x24a Func
	IsDialogEnd(var_371_bool); // 0x24c ObjFunc
	goto Label_584; // 0x24e Jump
	
Label_591:
	var_427_object = Obj(); // 0x24f PushV
	var_427_object = var_362_object; // 0x250 Mov
	func_1798(); // 0x251 NEW_2
	StopDialog(var_368_object); // 0x253 Func
	GetReturnValue(var_370_int); // 0x255 ObjFunc
	var_361_int = var_370_int; // 0x257 Mov
	return 8; // 0x258 Return
}


func_2061(var_176_int)
{
	var_177_float = 0; var_178_float = 0; // 0x80d PushV
	GetGameTime(var_178_float); // 0x80e Func
	var_179_int = 1; // 0x810 PushI
	var_180_int = 0; // 0x811 PushV
	var_181_int = 24; // 0x812 PushI
	var_180_int = var_178_float / var_178_float; // 0x813 Div2
	var_176_int = var_179_int + var_180_int; // 0x814 Add2
	return 2; // 0x815 Return
}


func_13(var_0_object, var_433_int, var_434_object)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0; var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; // 0xd PushV
	var_0_object = var_434_object; // 0xe TMov
	var_444_bool = 0; var_445_object = Obj(); var_446_float = 0; // 0xf PushV
	var_445_object = var_434_object; // 0x10 Mov
	var_446_float = 70.0; // 0x11 MovF
	func_1730(var_445_object, var_446_float); // 0x12 NEW_2
	var_447_bool = var_444_bool == 0; // 0x14 Not
	if(var_447_bool == 0) goto Label_24; // 0x15 JumpB
	var_433_int = -2; // 0x16 MovI
	return 8; // 0x17 Return
	
Label_24:
	CreateDialog(var_440_object); // 0x18 Func
	var_448_int = 0; // 0x1a PushV
	func_2078(var_448_int); // 0x1b NEW_2
	SetNPCName(var_448_int); // 0x1d ObjFunc
	var_449_int = 0; // 0x1f PushV
	func_2076(var_449_int); // 0x20 NEW_2
	SetNPCDescription(var_449_int); // 0x22 ObjFunc
	var_450_string = ""; // 0x24 PushV
	func_2080(var_450_string); // 0x25 NEW_2
	SetPhoto(var_450_string); // 0x27 ObjFunc
	var_451_string = ""; // 0x29 PushV
	func_2082(var_451_string); // 0x2a NEW_2
	SetPhoto2(var_451_string); // 0x2c ObjFunc
	var_452_int = 0; // 0x2e PushV
	func_2262(var_452_int); // 0x2f NEW_2
	SetPlayerName(var_452_int); // 0x31 ObjFunc
	var_442_int = -1; // 0x33 MovI
	IsOverrideActive(var_441_bool); // 0x34 Func
	var_453_bool = var_441_bool; // 0x36 Push
	if(var_453_bool == 0) goto Label_58; // 0x37 JumpB
	var_433_int = -2; // 0x38 MovI
	return 8; // 0x39 Return
	
Label_58:
	DoDialog(var_440_object); // 0x3a Func
	var_454_bool = 0; var_455_object = Obj(); // 0x3c PushV
	var_456_object = Obj(); // 0x3d PushV
	func_2006(var_456_object); // 0x3e NEW_2
	var_455_object = var_456_object; // 0x3f Mov
	func_1815(var_454_bool, var_455_object); // 0x41 NEW_2
	var_457_object = Obj(); var_458_object = Obj(); // 0x43 PushV
	var_457_object = var_434_object; // 0x44 Mov
	var_458_object = var_440_object; // 0x45 Mov
	TaskCall(2); // 0x46 TaskCall
	func_94(var_459_object, var_460_object, var_461_string, var_462_bool, var_457_object, var_458_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	IsDialogEnd(var_443_bool); // 0x4a ObjFunc
	
Label_76:
	var_490_bool = var_443_bool == 0; // 0x4c Not
	if(var_490_bool == 0) goto Label_83; // 0x4d JumpB
	sync(); // 0x4e Func
	IsDialogEnd(var_443_bool); // 0x50 ObjFunc
	goto Label_76; // 0x52 Jump
	
Label_83:
	var_491_object = Obj(); // 0x53 PushV
	var_491_object = var_434_object; // 0x54 Mov
	func_1798(); // 0x55 NEW_2
	StopDialog(var_440_object); // 0x57 Func
	GetReturnValue(var_442_int); // 0x59 ObjFunc
	var_433_int = var_442_int; // 0x5b Mov
	return 8; // 0x5c Return
}


func_1551(var_2_object, var_524_string)
{
	var_525_bool = 0; // 0x610 PushV
	func_2084(var_525_bool); // 0x611 NEW_2
	var_526_bool = var_525_bool == 0; // 0x613 Not
	if(var_526_bool == 0) goto Label_1558; // 0x614 JumpB
	return 0; // 0x615 Return
	
Label_1558:
	var_527_bool = var_524_string == var_2_object; // 0x616 Eq
	if(var_527_bool == 0) goto Label_1561; // 0x617 JumpB
	return 0; // 0x618 Return
	
Label_1561:
	var_528_string = ""; var_529_bool = 0; // 0x619 PushV
	var_528_string = var_524_string; // 0x61a Mov
	var_530_string = ""; // 0x61b PushS
	var_531_bool = var_524_string == var_530_string; // 0x61c Eq
	if(var_531_bool == 0) goto Label_1568; // 0x61d JumpB
	var_529_bool = 0; // 0x61e MovB
	goto Label_1569; // 0x61f Jump
	
Label_1569:
	func_1969(var_528_string, var_529_bool); // 0x621 NEW_2
	var_2_object = var_524_string; // 0x623 TMov
	return 0; // 0x624 Return
	
Label_1568:
	var_529_bool = 1; // 0x620 MovB
}


func_2191()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x88f PushV
	var_56_int = 262; // 0x890 PushI
	var_57_int = 1; // 0x891 PushI
	var_58_int = 521035; // 0x892 PushI
	CreateDiaryEntry(var_55_object, var_56_int, var_57_int, var_58_int); // 0x893 Func
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; // 0x895 PushV
	var_60_object = var_55_object; // 0x896 Mov
	var_61_int = 253; // 0x897 MovI
	func_2217(var_59_bool, var_60_object, var_61_int); // 0x898 NEW_2
	return 2; // 0x89a Return
}


func_272(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x110 PushV
	var_0_object = var_51_object; // 0x111 TMov
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0; // 0x112 PushV
	var_62_object = var_51_object; // 0x113 Mov
	var_63_float = 70.0; // 0x114 MovF
	func_1730(var_62_object, var_63_float); // 0x115 NEW_2
	var_107_bool = var_61_bool == 0; // 0x117 Not
	if(var_107_bool == 0) goto Label_283; // 0x118 JumpB
	var_50_int = -2; // 0x119 MovI
	return 8; // 0x11a Return
	
Label_283:
	CreateDialog(var_57_object); // 0x11b Func
	var_108_int = 0; // 0x11d PushV
	func_2078(var_108_int); // 0x11e NEW_2
	SetNPCName(var_108_int); // 0x120 ObjFunc
	var_109_int = 0; // 0x122 PushV
	func_2076(var_109_int); // 0x123 NEW_2
	SetNPCDescription(var_109_int); // 0x125 ObjFunc
	var_110_string = ""; // 0x127 PushV
	func_2080(var_110_string); // 0x128 NEW_2
	SetPhoto(var_110_string); // 0x12a ObjFunc
	var_111_string = ""; // 0x12c PushV
	func_2082(var_111_string); // 0x12d NEW_2
	SetPhoto2(var_111_string); // 0x12f ObjFunc
	var_112_int = 0; // 0x131 PushV
	func_2262(var_112_int); // 0x132 NEW_2
	SetPlayerName(var_112_int); // 0x134 ObjFunc
	var_59_int = -1; // 0x136 MovI
	IsOverrideActive(var_58_bool); // 0x137 Func
	var_120_bool = var_58_bool; // 0x139 Push
	if(var_120_bool == 0) goto Label_317; // 0x13a JumpB
	var_50_int = -2; // 0x13b MovI
	return 8; // 0x13c Return
	
Label_317:
	DoDialog(var_57_object); // 0x13d Func
	var_121_bool = 0; var_122_object = Obj(); // 0x13f PushV
	var_123_object = Obj(); // 0x140 PushV
	func_2006(var_123_object); // 0x141 NEW_2
	var_122_object = var_123_object; // 0x142 Mov
	func_1815(var_121_bool, var_122_object); // 0x144 NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x146 PushV
	var_216_object = var_51_object; // 0x147 Mov
	var_217_object = var_57_object; // 0x148 Mov
	TaskCall(4); // 0x149 TaskCall
	func_353(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object); // 0x14a NEW_2
	TaskReturn(); // 0x14b TaskReturn
	IsDialogEnd(var_60_bool); // 0x14d ObjFunc
	
Label_335:
	var_265_bool = var_60_bool == 0; // 0x14f Not
	if(var_265_bool == 0) goto Label_342; // 0x150 JumpB
	sync(); // 0x151 Func
	IsDialogEnd(var_60_bool); // 0x153 ObjFunc
	goto Label_335; // 0x155 Jump
	
Label_342:
	var_266_object = Obj(); // 0x156 PushV
	var_266_object = var_51_object; // 0x157 Mov
	func_1798(); // 0x158 NEW_2
	StopDialog(var_57_object); // 0x15a Func
	GetReturnValue(var_59_int); // 0x15c ObjFunc
	var_50_int = var_59_int; // 0x15e Mov
	return 8; // 0x15f Return
}


func_2070(var_274_bool, var_275_int)
{
	var_276_int = 0; // 0x817 PushV
	func_2061(var_276_int); // 0x818 NEW_2
	var_274_bool = var_276_int == var_275_int; // 0x81a Eq2
	return 0; // 0x81b Return
}


func_1815(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; // 0x717 PushV
	var_130_string = "voice_common"; // 0x718 PushS
	GetVariable(var_130_string, var_128_int); // 0x719 Func
	var_131_int = var_128_int; // 0x71b Push
	if(var_131_int == 0) goto Label_1853; // 0x71c JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x71d PushV
	var_133_object = var_122_object; // 0x71e Mov
	func_1873(var_133_object); // 0x71f NEW_2
	var_162_bool = var_132_bool == 0; // 0x721 Not
	if(var_162_bool == 0) goto Label_1835; // 0x722 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x723 PushV
	var_164_object = var_122_object; // 0x724 Mov
	func_1910(var_164_object); // 0x725 NEW_2
	var_198_bool = var_163_bool == 0; // 0x727 Not
	if(var_198_bool == 0) goto Label_1835; // 0x728 JumpB
	var_121_bool = 0; // 0x729 MovB
	return 4; // 0x72a Return
	
Label_1835:
	var_199_int = 2; // 0x72b PushI
	irand(var_129_int, var_199_int); // 0x72c Func
	var_200_int = var_129_int; // 0x72e Push
	if(var_200_int == 0) goto Label_1848; // 0x72f JumpB
	var_201_string = "voice_common"; // 0x730 PushS
	var_202_int = 1; // 0x731 PushI
	var_203_int = var_128_int + var_202_int; // 0x732 Add
	var_204_int = 3; // 0x733 PushI
	var_205_int = var_203_int / var_204_int; // 0x734 Mod
	SetVariable(var_201_string, var_205_int); // 0x735 Func
	goto Label_1852; // 0x737 Jump
	
Label_1852:
	goto Label_1871; // 0x73c Jump
	
Label_1871:
	var_121_bool = 1; // 0x74f MovB
	return 4; // 0x750 Return
	
Label_1848:
	var_206_string = "voice_common"; // 0x738 PushS
	var_207_int = 0; // 0x739 PushI
	SetVariable(var_206_string, var_207_int); // 0x73a Func
	
Label_1853:
	var_208_bool = 0; var_209_object = Obj(); // 0x73d PushV
	var_209_object = var_122_object; // 0x73e Mov
	func_1910(var_209_object); // 0x73f NEW_2
	var_210_bool = var_208_bool == 0; // 0x741 Not
	if(var_210_bool == 0) goto Label_1867; // 0x742 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x743 PushV
	var_212_object = var_122_object; // 0x744 Mov
	func_1873(var_212_object); // 0x745 NEW_2
	var_213_bool = var_211_bool == 0; // 0x747 Not
	if(var_213_bool == 0) goto Label_1867; // 0x748 JumpB
	var_121_bool = 0; // 0x749 MovB
	return 4; // 0x74a Return
	
Label_1867:
	var_214_string = "voice_common"; // 0x74b PushS
	var_215_int = 1; // 0x74c PushI
	SetVariable(var_214_string, var_215_int); // 0x74d Func
}


func_411(var_2_object, var_223_string)
{
	var_224_bool = 0; // 0x19c PushV
	func_2084(var_224_bool); // 0x19d NEW_2
	var_225_bool = var_224_bool == 0; // 0x19f Not
	if(var_225_bool == 0) goto Label_418; // 0x1a0 JumpB
	return 0; // 0x1a1 Return
	
Label_418:
	var_226_bool = var_223_string == var_2_object; // 0x1a2 Eq
	if(var_226_bool == 0) goto Label_421; // 0x1a3 JumpB
	return 0; // 0x1a4 Return
	
Label_421:
	var_227_string = ""; var_228_bool = 0; // 0x1a5 PushV
	var_227_string = var_223_string; // 0x1a6 Mov
	var_229_string = ""; // 0x1a7 PushS
	var_230_bool = var_223_string == var_229_string; // 0x1a8 Eq
	if(var_230_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_228_bool = 0; // 0x1aa MovB
	goto Label_429; // 0x1ab Jump
	
Label_429:
	func_1969(var_227_string, var_228_bool); // 0x1ad NEW_2
	var_2_object = var_223_string; // 0x1af TMov
	return 0; // 0x1b0 Return
	
Label_428:
	var_228_bool = 1; // 0x1ac MovB
}


func_2076(var_109_int)
{
	var_109_int = 515554; // 0x81c MovI
	return 0; // 0x81d Return
}


func_157(var_2_object, var_464_string)
{
	var_465_bool = 0; // 0x9e PushV
	func_2084(var_465_bool); // 0x9f NEW_2
	var_466_bool = var_465_bool == 0; // 0xa1 Not
	if(var_466_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_467_bool = var_464_string == var_2_object; // 0xa4 Eq
	if(var_467_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_468_string = ""; var_469_bool = 0; // 0xa7 PushV
	var_468_string = var_464_string; // 0xa8 Mov
	var_470_string = ""; // 0xa9 PushS
	var_471_bool = var_464_string == var_470_string; // 0xaa Eq
	if(var_471_bool == 0) goto Label_174; // 0xab JumpB
	var_469_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_1969(var_468_string, var_469_bool); // 0xaf NEW_2
	var_2_object = var_464_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_469_bool = 1; // 0xae MovB
}


func_2078(var_108_int)
{
	var_108_int = 502879; // 0x81e MovI
	return 0; // 0x81f Return
}


func_2204(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x89c PushV
	GetDiaryRoot(var_70_object); // 0x89d Func
	var_71_bool = var_70_object == 0; // 0x89f Not
	if(var_71_bool == 0) goto Label_2214; // 0x8a0 JumpB
	var_72_string = "Can't retrieve diary root"; // 0x8a1 PushS
	Trace(var_72_string); // 0x8a2 Func
	var_68_object = 0; // 0x8a4 MovB
	return 2; // 0x8a5 Return
	
Label_2214:
	var_68_object = var_70_object; // 0x8a6 Mov
	return 2; // 0x8a7 Return
}


func_2080(var_110_string)
{
	var_110_string = "ui/NPC_Viktor.png"; // 0x820 MovS
	return 0; // 0x821 Return
}


func_1953(var_38_string)
{
	var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_bool = 0; var_43_float = 0; var_44_float = 0; // 0x7a1 PushV
	lshHasAnimation(var_42_bool, var_38_string); // 0x7a2 Func
	var_45_bool = var_42_bool; // 0x7a4 Push
	if(var_45_bool == 0) goto Label_1964; // 0x7a5 JumpB
	lshGetAnimTimes(var_38_string, var_43_float, var_44_float); // 0x7a6 Func
	var_46_bool = 0; // 0x7a8 PushB
	lshPlayAnimation(var_43_float, var_44_float, var_46_bool); // 0x7a9 Func
	goto Label_1968; // 0x7ab Jump
	
Label_1968:
	return 6; // 0x7b0 Return
	
Label_1964:
	var_47_string = "Can't find lsh animation : "; // 0x7ac PushS
	var_48_int = var_47_string + var_38_string; // 0x7ad Add
	Trace(var_48_int); // 0x7ae Func
}


func_2082(var_111_string)
{
	var_111_string = "ui/NPC_Viktor_b.png"; // 0x822 MovS
	return 0; // 0x823 Return
}


func_2084(var_103_bool)
{
	var_103_bool = 1; // 0x824 MovB
	return 0; // 0x825 Return
}


func_1061(var_0_object, var_1_object, var_2_object, var_3_string, var_301_object, var_302_object)
{
	var_0_object = var_302_object; // 0x426 TMov
	var_1_object = var_301_object; // 0x427 TMov
	var_3_string = 0; // 0x428 TMovB
	var_307_int = 1; // 0x429 PushI
	if(var_307_int == 0) goto Label_1124; // 0x42a JumpB
	var_308_bool = 0; // 0x42b PushV
	var_308_bool = 0; // 0x42c MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x42d PushV
	var_310_object = var_1_object; // 0x42e MovT
	func_2155(var_310_object); // 0x42f NEW_2
	var_317_bool = var_309_bool == 0; // 0x431 Not
	if(var_317_bool == 0) goto Label_1081; // 0x432 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x433 PushV
	var_319_object = var_1_object; // 0x434 MovT
	func_2167(var_319_object); // 0x435 NEW_2
	if(var_318_bool == 0) goto Label_1081; // 0x437 JumpB
	var_308_bool = 1; // 0x438 MovB
	
Label_1081:
	if(var_308_bool == 0) goto Label_1107; // 0x439 JumpB
	var_324_object = Obj(); var_325_object = Obj(); // 0x43a PushV
	var_324_object = var_1_object; // 0x43b MovT
	var_325_object = var_0_object; // 0x43c MovT
	func_2114(); // 0x43d NEW_2
	var_328_object = Obj(); var_329_object = Obj(); // 0x43f PushV
	var_328_object = var_1_object; // 0x440 MovT
	var_329_object = var_0_object; // 0x441 MovT
	func_2143(); // 0x442 NEW_2
	var_332_string = ""; // 0x444 PushV
	var_332_string = "Neutral"; // 0x445 MovS
	func_1154(var_302_object, var_332_string); // 0x446 NEW_2
	var_340_int = 521320; // 0x448 PushI
	SetMessage(var_340_int); // 0x449 TObjFunc
	ClearReplies(); // 0x44b TObjFunc
	var_341_int = 528448; // 0x44d PushI
	var_342_int = 29835; // 0x44e PushI
	var_343_int = 29834; // 0x44f PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x450 TObjFunc
	goto Label_1124; // 0x452 Jump
	
Label_1124:
	var_344_bool = 0; // 0x464 PushV
	func_2084(var_344_bool); // 0x465 NEW_2
	if(var_344_bool == 0) goto Label_1139; // 0x467 JumpB
	
Label_1128:
	lshWaitForAnimEnd(); // 0x468 Func
	var_345_string = var_3_string; // 0x46a PushT
	if(var_345_string == 0) goto Label_1133; // 0x46b JumpB
	goto Label_1138; // 0x46c Jump
	
Label_1138:
	goto Label_1153; // 0x472 Jump
	
Label_1153:
	return 0; // 0x481 Return
	
Label_1133:
	var_346_string = ""; // 0x46d PushV
	var_346_string = var_2_object; // 0x46e MovT
	func_1953(var_346_string); // 0x46f NEW_2
	goto Label_1128; // 0x471 Jump
	
Label_1139:
	var_347_string = "all"; // 0x473 PushS
	var_348_string = "idle"; // 0x474 PushS
	PlayAnimation(var_347_string, var_348_string); // 0x475 Func
	
Label_1143:
	WaitForAnimEnd(); // 0x477 Func
	var_349_string = var_3_string; // 0x479 PushT
	if(var_349_string == 0) goto Label_1148; // 0x47a JumpB
	goto Label_1153; // 0x47b Jump
	
Label_1148:
	var_350_string = "all"; // 0x47c PushS
	var_351_string = "idle"; // 0x47d PushS
	PlayAnimation(var_350_string, var_351_string); // 0x47e Func
	goto Label_1143; // 0x480 Jump
	
Label_1107:
	var_352_string = ""; // 0x453 PushV
	var_352_string = "Neutral"; // 0x454 MovS
	func_1154(var_302_object, var_352_string); // 0x455 NEW_2
	var_353_int = 521323; // 0x457 PushI
	SetMessage(var_353_int); // 0x458 TObjFunc
	ClearReplies(); // 0x45a TObjFunc
	var_354_int = 521324; // 0x45c PushI
	var_355_int = -1; // 0x45d PushI
	var_356_int = 22518; // 0x45e PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x45f TObjFunc
	goto Label_1124; // 0x461 Jump
}


func_2086()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x826 PushV
	var_38_string = "b7q01"; // 0x827 PushS
	var_39_int = 6; // 0x828 PushI
	SetVariable(var_38_string, var_39_int); // 0x829 Func
	var_40_object = Obj(); // 0x82b PushV
	func_2245(var_40_object); // 0x82c NEW_2
	var_37_object = var_40_object; // 0x82d Mov
	var_47_string = "b7q01DankoGotoSobor"; // 0x82f PushS
	var_48_string = "pt_map_aglaja"; // 0x830 PushS
	var_49_int = 1; // 0x831 PushI
	var_50_int = 521021; // 0x832 PushI
	var_51_float = 0; // 0x833 PushV
	func_2056(var_51_float); // 0x834 NEW_2
	AddMark(var_47_string, var_48_string, var_49_int, var_50_int, var_51_float); // 0x836 ObjFunc
	func_2191(); // 0x839 NEW_2
	var_77_bool = 0; var_78_string = ""; var_79_string = ""; // 0x83b PushV
	var_78_string = "quest_b7_01"; // 0x83c MovS
	var_79_string = "place_aglaja"; // 0x83d MovS
	func_2044(var_77_bool, var_78_string, var_79_string); // 0x83e NEW_2
	return 2; // 0x840 Return
}


func_680(var_2_object, var_398_string)
{
	var_399_bool = 0; // 0x2a9 PushV
	func_2084(var_399_bool); // 0x2aa NEW_2
	var_400_bool = var_399_bool == 0; // 0x2ac Not
	if(var_400_bool == 0) goto Label_687; // 0x2ad JumpB
	return 0; // 0x2ae Return
	
Label_687:
	var_401_bool = var_398_string == var_2_object; // 0x2af Eq
	if(var_401_bool == 0) goto Label_690; // 0x2b0 JumpB
	return 0; // 0x2b1 Return
	
Label_690:
	var_402_string = ""; var_403_bool = 0; // 0x2b2 PushV
	var_402_string = var_398_string; // 0x2b3 Mov
	var_404_string = ""; // 0x2b4 PushS
	var_405_bool = var_398_string == var_404_string; // 0x2b5 Eq
	if(var_405_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_403_bool = 0; // 0x2b7 MovB
	goto Label_698; // 0x2b8 Jump
	
Label_698:
	func_1969(var_402_string, var_403_bool); // 0x2ba NEW_2
	var_2_object = var_398_string; // 0x2bc TMov
	return 0; // 0x2bd Return
	
Label_697:
	var_403_bool = 1; // 0x2b9 MovB
}


func_2217(var_59_bool, var_60_object, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; // 0x8a9 PushV
	var_68_object = Obj(); // 0x8aa PushV
	func_2204(var_68_object); // 0x8ab NEW_2
	var_65_object = var_68_object; // 0x8ac Mov
	Find(var_61_int, var_66_object); // 0x8ae ObjFunc
	var_73_bool = var_66_object == 0; // 0x8b0 Not
	if(var_73_bool == 0) goto Label_2232; // 0x8b1 JumpB
	var_74_string = "Can't find diary parent with id: "; // 0x8b2 PushS
	var_75_int = var_74_string + var_61_int; // 0x8b3 Add
	Trace(var_75_int); // 0x8b4 Func
	var_59_bool = 0; // 0x8b6 MovB
	return 6; // 0x8b7 Return
	
Label_2232:
	AddChild(var_60_object); // 0x8b8 ObjFunc
	var_76_int = 7; // 0x8ba PushI
	SendWorldWndMessage(var_76_int); // 0x8bb Func
	GetCategory(var_67_int); // 0x8bd ObjFunc
	SetDiarySection(var_67_int); // 0x8bf Func
	var_59_bool = 0; // 0x8c1 MovB
	return 6; // 0x8c2 Return
}


func_1706(var_37_bool, var_38_cvector)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; // 0x6aa PushV
	GetPosition(var_42_cvector); // 0x6ab Func
	var_43_cvector = var_38_cvector - var_42_cvector; // 0x6ad Sub2
	var_45_float = GetByIndex(var_43_cvector, 0); // 0x6ae PushE
	var_46_float = GetByIndex(var_43_cvector, 2); // 0x6af PushE
	Rotate(var_45_float, var_46_float, var_44_bool); // 0x6b0 Func
	var_37_bool = var_44_bool; // 0x6b2 Mov
	return 6; // 0x6b3 Return
}


func_1969(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x7b1 PushV
	lshHasAnimation(var_234_bool, var_227_string); // 0x7b2 Func
	var_237_bool = var_234_bool; // 0x7b4 Push
	if(var_237_bool == 0) goto Label_1979; // 0x7b5 JumpB
	lshGetAnimTimes(var_227_string, var_235_float, var_236_float); // 0x7b6 Func
	lshPlayAnimation(var_235_float, var_236_float, var_228_bool); // 0x7b8 Func
	goto Label_1983; // 0x7ba Jump
	
Label_1983:
	return 6; // 0x7bf Return
	
Label_1979:
	var_238_string = "Can't find lsh animation : "; // 0x7bb PushS
	var_239_int = var_238_string + var_227_string; // 0x7bc Add
	Trace(var_239_int); // 0x7bd Func
}


func_1716(var_33_bool)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x6b4 PushV
	GetPosition(var_36_cvector); // 0x6b5 ObjFunc
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); // 0x6b7 PushV
	var_38_cvector = var_36_cvector; // 0x6b8 Mov
	func_1706(var_37_bool, var_38_cvector); // 0x6b9 NEW_2
	var_33_bool = var_37_bool; // 0x6ba Mov
	return 2; // 0x6bc Return
}


func_1725(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x6bd PushV
	IsLoaded(var_31_bool); // 0x6be Func
	var_29_bool = var_31_bool; // 0x6c0 Mov
	return 2; // 0x6c1 Return
}


func_1984(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0; // 0x7c0 PushV
	var_159_bool = 0; // 0x7c1 PushV
	func_2084(var_159_bool); // 0x7c2 NEW_2
	if(var_159_bool == 0) goto Label_1997; // 0x7c4 JumpB
	lshHasSpeech(var_158_bool, var_156_string); // 0x7c5 Func
	var_160_bool = var_158_bool; // 0x7c7 Push
	if(var_160_bool == 0) goto Label_1997; // 0x7c8 JumpB
	lshPlaySpeech(var_156_string); // 0x7c9 Func
	var_155_bool = 1; // 0x7cb MovB
	return 2; // 0x7cc Return
	
Label_1997:
	var_155_bool = 0; // 0x7cd MovB
	return 2; // 0x7ce Return
}


func_1730(var_61_bool, var_63_float)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; // 0x6c2 PushV
	GetPosition(var_74_cvector); // 0x6c3 ObjFunc
	GetEyesHeight(var_73_float); // 0x6c5 ObjFunc
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x6c7 PushE
	var_82_float = var_82_float + var_73_float; // 0x6c8 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x6c9 PopE
	GetPosition(var_75_cvector); // 0x6ca Func
	GetEyesHeight(var_73_float); // 0x6cc Func
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x6ce PushE
	var_83_float = var_83_float + var_73_float; // 0x6cf Add2
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x6d0 PopE
	var_76_cvector = var_74_cvector - var_75_cvector; // 0x6d1 Sub2
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x6d2 PushE
	var_84_float = 0; // 0x6d3 MovI
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x6d4 PopE
	var_85_int = var_76_cvector | var_76_cvector; // 0x6d5 Or
	var_86_float = sqrt(var_85_int); // 0x6d6 Sqrt
	var_76_cvector = var_76_cvector / var_76_cvector; // 0x6d7 Div2
	var_77_cvector = -var_76_cvector; // 0x6d8 Neg2
	var_87_float = var_76_cvector * var_63_float; // 0x6d9 Mult
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x6da PushV
	var_90_cvector = CVector(0.0, 1.0, 0.0); // 0x6db PushVec
	var_89_cvector = var_77_cvector ^ var_90_cvector; // 0x6dc Xor2
	func_2012(var_88_cvector, var_89_cvector); // 0x6dd NEW_2
	var_96_int = 25; // 0x6df PushI
	var_97_float = var_88_cvector * var_96_int; // 0x6e0 Mult
	var_98_int = var_87_float + var_97_float; // 0x6e1 Add
	var_99_cvector = CVector(0.0, 10.0, 0.0); // 0x6e2 PushVec
	var_78_cvector = var_98_int - var_99_cvector; // 0x6e3 Sub2
	var_79_cvector = var_75_cvector + var_78_cvector; // 0x6e4 Add2
	IsOverrideActive(var_80_bool); // 0x6e5 Func
	var_100_bool = var_80_bool; // 0x6e7 Push
	if(var_100_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_61_bool = 0; // 0x6e9 MovB
	return 18; // 0x6ea Return
	
Label_1771:
	StopWorld(); // 0x6eb Func
	CameraTransit(var_79_cvector, var_77_cvector); // 0x6ed Func
	var_101_float = GetByIndex(var_78_cvector, 0); // 0x6ef PushE
	var_102_float = GetByIndex(var_78_cvector, 2); // 0x6f0 PushE
	Rotate(var_101_float, var_102_float); // 0x6f1 Func
	var_103_bool = 0; // 0x6f3 PushV
	func_2084(var_103_bool); // 0x6f4 NEW_2
	if(var_103_bool == 0) goto Label_1784; // 0x6f6 JumpB
	goto Label_1792; // 0x6f7 Jump
	
Label_1792:
	CameraWaitForPlayFinish(); // 0x700 Func
	ResumeWorld(); // 0x702 Func
	var_61_bool = 1; // 0x704 MovB
	return 18; // 0x705 Return
	
Label_1784:
	var_104_string = "head"; // 0x6f8 PushS
	HasAnimationTrack(var_81_bool, var_104_string); // 0x6f9 Func
	var_105_bool = var_81_bool; // 0x6fb Push
	if(var_105_bool == 0) goto Label_1792; // 0x6fc JumpB
	var_106_string = "head"; // 0x6fd PushS
	LookAsyncCamera(var_106_string); // 0x6fe Func
}


func_2114()
{
	var_326_string = "oob6Viktor1"; // 0x843 PushS
	var_327_int = 1; // 0x844 PushI
	SetVariable(var_326_string, var_327_int); // 0x845 Func
	return 0; // 0x847 Return
}


func_2245(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0x8c5 PushV
	GetMainOutdoorScene(var_41_object); // 0x8c6 Func
	var_43_bool = var_41_object == 0; // 0x8c8 NullEq
	if(var_43_bool == 0) goto Label_2256; // 0x8c9 JumpB
	var_44_string = "Can't find main outdoor scene"; // 0x8ca PushS
	Trace(var_44_string); // 0x8cb Func
	var_42_object = 0; // 0x8cd SetNull
	var_38_object = var_42_object; // 0x8ce Mov
	return 4; // 0x8cf Return
	
Label_2256:
	GetMap(var_42_object); // 0x8d0 ObjFunc
	var_38_object = var_42_object; // 0x8d2 Mov
	return 4; // 0x8d3 Return
}


func_2120()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x848 PushV
	var_38_object = Obj(); // 0x849 PushV
	func_2245(var_38_object); // 0x84a NEW_2
	var_37_object = var_38_object; // 0x84b Mov
	var_45_string = "b6q03ViktorGotoMaria"; // 0x84d PushS
	var_46_string = "pt_map_maria"; // 0x84e PushS
	var_47_int = 3; // 0x84f PushI
	var_48_int = 521341; // 0x850 PushI
	var_49_float = 0; // 0x851 PushV
	func_2056(var_49_float); // 0x852 NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0x854 ObjFunc
	return 2; // 0x856 Return
}


func_1999()
{
	var_31_bool = 0; // 0x7cf PushV
	func_2084(var_31_bool); // 0x7d0 NEW_2
	if(var_31_bool == 0) goto Label_2005; // 0x7d2 JumpB
	lshStopSpeech(); // 0x7d3 Func
	
Label_2005:
	return 0; // 0x7d5 Return
}


func_1873(var_132_bool)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; // 0x751 PushV
	var_139_string = "c"; // 0x752 MovS
	var_140_int = 0; // 0x753 MovI
	
Label_1876:
	var_144_int = 1; // 0x754 PushI
	if(var_144_int == 0) goto Label_1889; // 0x755 JumpB
	var_145_int = 1; // 0x756 PushI
	var_146_int = var_140_int + var_145_int; // 0x757 Add
	var_147_int = var_139_string + var_146_int; // 0x758 Add
	HasProperty(var_147_int, var_141_bool); // 0x759 ObjFunc
	var_148_bool = var_141_bool == 0; // 0x75b Not
	if(var_148_bool == 0) goto Label_1886; // 0x75c JumpB
	goto Label_1889; // 0x75d Jump
	
Label_1889:
	var_149_bool = var_140_int == 0; // 0x761 Not
	if(var_149_bool == 0) goto Label_1893; // 0x762 JumpB
	var_132_bool = 0; // 0x763 MovB
	return 10; // 0x764 Return
	
Label_1893:
	var_142_int = 0; // 0x765 MovI
	var_150_int = 1; // 0x766 PushI
	var_151_bool = var_140_int > var_150_int; // 0x767 GT
	if(var_151_bool == 0) goto Label_1899; // 0x768 JumpB
	irand(var_142_int, var_140_int); // 0x769 Func
	
Label_1899:
	var_152_int = 1; // 0x76b PushI
	var_153_int = var_142_int + var_152_int; // 0x76c Add
	var_154_int = var_139_string + var_153_int; // 0x76d Add
	GetProperty(var_154_int, var_143_string); // 0x76e ObjFunc
	var_155_bool = 0; var_156_string = ""; // 0x770 PushV
	var_156_string = var_143_string; // 0x771 Mov
	func_1984(var_155_bool, var_156_string); // 0x772 NEW_2
	var_132_bool = var_155_bool; // 0x773 Mov
	return 10; // 0x775 Return
	
Label_1886:
	var_161_int = 1; // 0x75e PushI
	var_140_int = var_140_int + var_161_int; // 0x75f Add2
	goto Label_1876; // 0x760 Jump
}


func_980(var_0_object, var_277_int, var_278_object)
{
	var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0; var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; // 0x3d4 PushV
	var_0_object = var_278_object; // 0x3d5 TMov
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; // 0x3d6 PushV
	var_289_object = var_278_object; // 0x3d7 Mov
	var_290_float = 70.0; // 0x3d8 MovF
	func_1730(var_289_object, var_290_float); // 0x3d9 NEW_2
	var_291_bool = var_288_bool == 0; // 0x3db Not
	if(var_291_bool == 0) goto Label_991; // 0x3dc JumpB
	var_277_int = -2; // 0x3dd MovI
	return 8; // 0x3de Return
	
Label_991:
	CreateDialog(var_284_object); // 0x3df Func
	var_292_int = 0; // 0x3e1 PushV
	func_2078(var_292_int); // 0x3e2 NEW_2
	SetNPCName(var_292_int); // 0x3e4 ObjFunc
	var_293_int = 0; // 0x3e6 PushV
	func_2076(var_293_int); // 0x3e7 NEW_2
	SetNPCDescription(var_293_int); // 0x3e9 ObjFunc
	var_294_string = ""; // 0x3eb PushV
	func_2080(var_294_string); // 0x3ec NEW_2
	SetPhoto(var_294_string); // 0x3ee ObjFunc
	var_295_string = ""; // 0x3f0 PushV
	func_2082(var_295_string); // 0x3f1 NEW_2
	SetPhoto2(var_295_string); // 0x3f3 ObjFunc
	var_296_int = 0; // 0x3f5 PushV
	func_2262(var_296_int); // 0x3f6 NEW_2
	SetPlayerName(var_296_int); // 0x3f8 ObjFunc
	var_286_int = -1; // 0x3fa MovI
	IsOverrideActive(var_285_bool); // 0x3fb Func
	var_297_bool = var_285_bool; // 0x3fd Push
	if(var_297_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_277_int = -2; // 0x3ff MovI
	return 8; // 0x400 Return
	
Label_1025:
	DoDialog(var_284_object); // 0x401 Func
	var_298_bool = 0; var_299_object = Obj(); // 0x403 PushV
	var_300_object = Obj(); // 0x404 PushV
	func_2006(var_300_object); // 0x405 NEW_2
	var_299_object = var_300_object; // 0x406 Mov
	func_1815(var_298_bool, var_299_object); // 0x408 NEW_2
	var_301_object = Obj(); var_302_object = Obj(); // 0x40a PushV
	var_301_object = var_278_object; // 0x40b Mov
	var_302_object = var_284_object; // 0x40c Mov
	TaskCall(8); // 0x40d TaskCall
	func_1061(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object); // 0x40e NEW_2
	TaskReturn(); // 0x40f TaskReturn
	IsDialogEnd(var_287_bool); // 0x411 ObjFunc
	
Label_1043:
	var_357_bool = var_287_bool == 0; // 0x413 Not
	if(var_357_bool == 0) goto Label_1050; // 0x414 JumpB
	sync(); // 0x415 Func
	IsDialogEnd(var_287_bool); // 0x417 ObjFunc
	goto Label_1043; // 0x419 Jump
	
Label_1050:
	var_358_object = Obj(); // 0x41a PushV
	var_358_object = var_278_object; // 0x41b Mov
	func_1798(); // 0x41c NEW_2
	StopDialog(var_284_object); // 0x41e Func
	GetReturnValue(var_286_int); // 0x420 ObjFunc
	var_277_int = var_286_int; // 0x422 Mov
	return 8; // 0x423 Return
}


func_1493(var_0_object, var_1_object, var_2_object, var_3_string, var_517_object, var_518_object)
{
	var_0_object = var_518_object; // 0x5d6 TMov
	var_1_object = var_517_object; // 0x5d7 TMov
	var_3_string = 0; // 0x5d8 TMovB
	var_523_int = 1; // 0x5d9 PushI
	if(var_523_int == 0) goto Label_1521; // 0x5da JumpB
	var_524_string = ""; // 0x5db PushV
	var_524_string = "Neutral"; // 0x5dc MovS
	func_1551(var_518_object, var_524_string); // 0x5dd NEW_2
	var_532_int = 540554; // 0x5df PushI
	SetMessage(var_532_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_533_int = 540555; // 0x5e4 PushI
	var_534_int = -1; // 0x5e5 PushI
	var_535_int = 42564; // 0x5e6 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x5e7 TObjFunc
	var_536_int = 540794; // 0x5e9 PushI
	var_537_int = -1; // 0x5ea PushI
	var_538_int = 42843; // 0x5eb PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x5ec TObjFunc
	goto Label_1521; // 0x5ee Jump
	
Label_1521:
	var_539_bool = 0; // 0x5f1 PushV
	func_2084(var_539_bool); // 0x5f2 NEW_2
	if(var_539_bool == 0) goto Label_1536; // 0x5f4 JumpB
	
Label_1525:
	lshWaitForAnimEnd(); // 0x5f5 Func
	var_540_string = var_3_string; // 0x5f7 PushT
	if(var_540_string == 0) goto Label_1530; // 0x5f8 JumpB
	goto Label_1535; // 0x5f9 Jump
	
Label_1535:
	goto Label_1550; // 0x5ff Jump
	
Label_1550:
	return 0; // 0x60e Return
	
Label_1530:
	var_541_string = ""; // 0x5fa PushV
	var_541_string = var_2_object; // 0x5fb MovT
	func_1953(var_541_string); // 0x5fc NEW_2
	goto Label_1525; // 0x5fe Jump
	
Label_1536:
	var_542_string = "all"; // 0x600 PushS
	var_543_string = "idle"; // 0x601 PushS
	PlayAnimation(var_542_string, var_543_string); // 0x602 Func
	
Label_1540:
	WaitForAnimEnd(); // 0x604 Func
	var_544_string = var_3_string; // 0x606 PushT
	if(var_544_string == 0) goto Label_1545; // 0x607 JumpB
	goto Label_1550; // 0x608 Jump
	
Label_1545:
	var_545_string = "all"; // 0x609 PushS
	var_546_string = "idle"; // 0x60a PushS
	PlayAnimation(var_545_string, var_546_string); // 0x60b Func
	goto Label_1540; // 0x60d Jump
}


func_2262(var_112_int)
{
	var_113_int = 0; var_114_int = 0; // 0x8d6 PushV
	var_115_string = "branch"; // 0x8d7 PushS
	GetVariable(var_115_string, var_114_int); // 0x8d8 Func
	var_116_int = 0; // 0x8da PushI
	var_117_bool = var_114_int == var_116_int; // 0x8db Eq
	if(var_117_bool == 0) goto Label_2272; // 0x8dc JumpB
	var_112_int = 1; // 0x8dd MovI
	return 2; // 0x8de Return
	
Label_2272:
	var_118_int = 1; // 0x8e0 PushI
	var_119_bool = var_114_int == var_118_int; // 0x8e1 Eq
	if(var_119_bool == 0) goto Label_2277; // 0x8e2 JumpB
	var_112_int = 2; // 0x8e3 MovI
	return 2; // 0x8e4 Return
	
Label_2277:
	var_112_int = 3; // 0x8e5 MovI
	return 2; // 0x8e6 Return
}


func_2006(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x7d6 PushV
	self(var_125_object); // 0x7d7 Func
	var_123_object = var_125_object; // 0x7d9 Mov
	return 2; // 0x7da Return
}


func_2136()
{
	var_58_string = ""; var_59_bool = 0; // 0x859 PushV
	var_58_string = "cot_maria@door1"; // 0x85a MovS
	var_59_bool = 0; // 0x85b MovB
	func_2027(var_58_string, var_59_bool); // 0x85c NEW_2
	return 0; // 0x85e Return
}


func_602(var_0_object, var_1_object, var_2_object, var_3_string, var_385_object, var_386_object)
{
	var_0_object = var_386_object; // 0x25b TMov
	var_1_object = var_385_object; // 0x25c TMov
	var_3_string = 0; // 0x25d TMovB
	var_391_int = 1; // 0x25e PushI
	if(var_391_int == 0) goto Label_650; // 0x25f JumpB
	var_392_bool = 0; var_393_object = Obj(); // 0x260 PushV
	var_393_object = var_1_object; // 0x261 MovT
	func_2179(var_393_object); // 0x262 NEW_2
	if(var_392_bool == 0) goto Label_633; // 0x264 JumpB
	var_398_string = ""; // 0x265 PushV
	var_398_string = "Anger"; // 0x266 MovS
	func_680(var_386_object, var_398_string); // 0x267 NEW_2
	var_406_int = 521037; // 0x269 PushI
	SetMessage(var_406_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_407_int = 528490; // 0x26e PushI
	var_408_int = 29880; // 0x26f PushI
	var_409_int = 29879; // 0x270 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x271 TObjFunc
	var_410_int = 528510; // 0x273 PushI
	var_411_int = 29882; // 0x274 PushI
	var_412_int = 29899; // 0x275 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x276 TObjFunc
	goto Label_650; // 0x278 Jump
	
Label_650:
	var_413_bool = 0; // 0x28a PushV
	func_2084(var_413_bool); // 0x28b NEW_2
	if(var_413_bool == 0) goto Label_665; // 0x28d JumpB
	
Label_654:
	lshWaitForAnimEnd(); // 0x28e Func
	var_414_string = var_3_string; // 0x290 PushT
	if(var_414_string == 0) goto Label_659; // 0x291 JumpB
	goto Label_664; // 0x292 Jump
	
Label_664:
	goto Label_679; // 0x298 Jump
	
Label_679:
	return 0; // 0x2a7 Return
	
Label_659:
	var_415_string = ""; // 0x293 PushV
	var_415_string = var_2_object; // 0x294 MovT
	func_1953(var_415_string); // 0x295 NEW_2
	goto Label_654; // 0x297 Jump
	
Label_665:
	var_416_string = "all"; // 0x299 PushS
	var_417_string = "idle"; // 0x29a PushS
	PlayAnimation(var_416_string, var_417_string); // 0x29b Func
	
Label_669:
	WaitForAnimEnd(); // 0x29d Func
	var_418_string = var_3_string; // 0x29f PushT
	if(var_418_string == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_679; // 0x2a1 Jump
	
Label_674:
	var_419_string = "all"; // 0x2a2 PushS
	var_420_string = "idle"; // 0x2a3 PushS
	PlayAnimation(var_419_string, var_420_string); // 0x2a4 Func
	goto Label_669; // 0x2a6 Jump
	
Label_633:
	var_421_string = ""; // 0x279 PushV
	var_421_string = "Neutral"; // 0x27a MovS
	func_680(var_386_object, var_421_string); // 0x27b NEW_2
	var_422_int = 521039; // 0x27d PushI
	SetMessage(var_422_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_423_int = 521040; // 0x282 PushI
	var_424_int = -1; // 0x283 PushI
	var_425_int = 22236; // 0x284 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x285 TObjFunc
	goto Label_650; // 0x287 Jump
}


func_2012(var_88_cvector, var_89_cvector)
{
	var_91_float = 0; var_92_float = 0; // 0x7dc PushV
	var_93_int = var_89_cvector | var_89_cvector; // 0x7dd Or
	var_92_float = sqrt(var_93_int); // 0x7de Sqrt2
	var_94_float = 0.0; // 0x7df PushF
	var_95_bool = var_92_float < var_94_float; // 0x7e0 LT
	if(var_95_bool == 0) goto Label_2020; // 0x7e1 JumpB
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x7e2 MovV
	return 2; // 0x7e3 Return
	
Label_2020:
	var_88_cvector = var_89_cvector / var_89_cvector; // 0x7e4 Div2
	return 2; // 0x7e5 Return
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_457_object, var_458_object)
{
	var_0_object = var_458_object; // 0x5f TMov
	var_1_object = var_457_object; // 0x60 TMov
	var_3_string = 0; // 0x61 TMovB
	var_463_int = 1; // 0x62 PushI
	if(var_463_int == 0) goto Label_127; // 0x63 JumpB
	var_464_string = ""; // 0x64 PushV
	var_464_string = "Neutral"; // 0x65 MovS
	func_157(var_458_object, var_464_string); // 0x66 NEW_2
	var_472_int = 535231; // 0x68 PushI
	SetMessage(var_472_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_473_int = 535232; // 0x6d PushI
	var_474_int = 36953; // 0x6e PushI
	var_475_int = 36907; // 0x6f PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x70 TObjFunc
	var_476_int = 535233; // 0x72 PushI
	var_477_int = -1; // 0x73 PushI
	var_478_int = 36908; // 0x74 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x75 TObjFunc
	var_479_int = 535280; // 0x77 PushI
	var_480_int = -1; // 0x78 PushI
	var_481_int = 36956; // 0x79 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
	
Label_127:
	var_482_bool = 0; // 0x7f PushV
	func_2084(var_482_bool); // 0x80 NEW_2
	if(var_482_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_483_string = var_3_string; // 0x85 PushT
	if(var_483_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_484_string = ""; // 0x88 PushV
	var_484_string = var_2_object; // 0x89 MovT
	func_1953(var_484_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_485_string = "all"; // 0x8e PushS
	var_486_string = "idle"; // 0x8f PushS
	PlayAnimation(var_485_string, var_486_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_487_string = var_3_string; // 0x94 PushT
	if(var_487_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_488_string = "all"; // 0x97 PushS
	var_489_string = "idle"; // 0x98 PushS
	PlayAnimation(var_488_string, var_489_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
}


func_2143()
{
	var_330_string = "b6ViktorVisit"; // 0x860 PushS
	var_331_int = 1; // 0x861 PushI
	SetVariable(var_330_string, var_331_int); // 0x862 Func
	return 0; // 0x864 Return
}


func_1630(var_0_object, var_26_cvector, var_27_cvector)
{
	GetPosition(var_27_cvector); // 0x65e Func
	GetDirection(var_26_cvector); // 0x660 Func
	var_0_object = 0; // 0x662 TMovB
	var_29_bool = 0; // 0x663 PushV
	func_1725(var_29_bool); // 0x664 NEW_2
	var_32_bool = var_29_bool == 0; // 0x666 Not
	if(var_32_bool == 0) goto Label_1648; // 0x667 JumpB
	TaskCall(0); // 0x669 TaskCall
	func_0(); // 0x66a NEW_2
	TaskReturn(); // 0x66b TaskReturn
	func_1658(var_25_bool, var_26_cvector, var_27_cvector); // 0x66e NEW_2
	
Label_1648:
	var_38_string = ""; // 0x670 PushV
	var_38_string = "Neutral"; // 0x671 MovS
	func_1953(var_38_string); // 0x672 NEW_2
	lshWaitForAnimEnd(); // 0x674 Func
	goto Label_1648; // 0x676 Jump
}


func_353(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object; // 0x162 TMov
	var_1_object = var_216_object; // 0x163 TMov
	var_3_string = 0; // 0x164 TMovB
	var_222_int = 1; // 0x165 PushI
	if(var_222_int == 0) goto Label_381; // 0x166 JumpB
	var_223_string = ""; // 0x167 PushV
	var_223_string = "Neutral"; // 0x168 MovS
	func_411(var_217_object, var_223_string); // 0x169 NEW_2
	var_240_int = 518051; // 0x16b PushI
	SetMessage(var_240_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_241_int = 518052; // 0x170 PushI
	var_242_int = 29827; // 0x171 PushI
	var_243_int = 19185; // 0x172 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x173 TObjFunc
	var_244_int = 528440; // 0x175 PushI
	var_245_int = -1; // 0x176 PushI
	var_246_int = 29826; // 0x177 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x178 TObjFunc
	goto Label_381; // 0x17a Jump
	
Label_381:
	var_247_bool = 0; // 0x17d PushV
	func_2084(var_247_bool); // 0x17e NEW_2
	if(var_247_bool == 0) goto Label_396; // 0x180 JumpB
	
Label_385:
	lshWaitForAnimEnd(); // 0x181 Func
	var_248_string = var_3_string; // 0x183 PushT
	if(var_248_string == 0) goto Label_390; // 0x184 JumpB
	goto Label_395; // 0x185 Jump
	
Label_395:
	goto Label_410; // 0x18b Jump
	
Label_410:
	return 0; // 0x19a Return
	
Label_390:
	var_249_string = ""; // 0x186 PushV
	var_249_string = var_2_object; // 0x187 MovT
	func_1953(var_249_string); // 0x188 NEW_2
	goto Label_385; // 0x18a Jump
	
Label_396:
	var_260_string = "all"; // 0x18c PushS
	var_261_string = "idle"; // 0x18d PushS
	PlayAnimation(var_260_string, var_261_string); // 0x18e Func
	
Label_400:
	WaitForAnimEnd(); // 0x190 Func
	var_262_string = var_3_string; // 0x192 PushT
	if(var_262_string == 0) goto Label_405; // 0x193 JumpB
	goto Label_410; // 0x194 Jump
	
Label_405:
	var_263_string = "all"; // 0x195 PushS
	var_264_string = "idle"; // 0x196 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x197 Func
	goto Label_400; // 0x199 Jump
}


func_2149()
{
	var_54_string = "playsound"; // 0x866 PushS
	var_55_string = "mapmark"; // 0x867 PushS
	TriggerWorld(var_54_string, var_55_string); // 0x868 Func
	return 0; // 0x86a Return
}


func_2022(var_311_int, var_312_string)
{
	var_313_int = 0; var_314_int = 0; // 0x7e6 PushV
	GetVariable(var_312_string, var_314_int); // 0x7e7 Func
	var_311_int = var_314_int; // 0x7e9 Mov
	return 2; // 0x7ea Return
}


func_2279(var_47_object)
{
	var_48_bool = GlobalVars[1]; // 0x8e8 PushGE
	var_49_bool = var_48_bool == 0; // 0x8e9 Not
	if(var_49_bool == 0) goto Label_2292; // 0x8ea JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x8eb PushV
	var_51_object = var_47_object; // 0x8ec Mov
	TaskCall(3); // 0x8ed TaskCall
	func_272(var_52_object, var_50_int, var_51_object); // 0x8ee NEW_2
	TaskReturn(); // 0x8ef TaskReturn
	var_273_bool = GlobalVars[1]; // 0x8f1 PushGE
	var_273_bool = 1; // 0x8f2 MovB
	GlobalVars[1] = var_273_bool; // 0x8f3 PopGE
	
Label_2292:
	var_274_bool = 0; var_275_int = 0; // 0x8f4 PushV
	var_275_int = 6; // 0x8f5 MovI
	func_2070(var_274_bool, var_275_int); // 0x8f6 NEW_2
	if(var_274_bool == 0) goto Label_2304; // 0x8f8 JumpB
	var_277_int = 0; var_278_object = Obj(); // 0x8f9 PushV
	var_278_object = var_47_object; // 0x8fa Mov
	TaskCall(7); // 0x8fb TaskCall
	func_980(var_279_object, var_277_int, var_278_object); // 0x8fc NEW_2
	TaskReturn(); // 0x8fd TaskReturn
	return 0; // 0x8ff Return
	
Label_2304:
	var_359_bool = 0; var_360_int = 0; // 0x900 PushV
	var_360_int = 7; // 0x901 MovI
	func_2070(var_359_bool, var_360_int); // 0x902 NEW_2
	if(var_359_bool == 0) goto Label_2316; // 0x904 JumpB
	var_361_int = 0; var_362_object = Obj(); // 0x905 PushV
	var_362_object = var_47_object; // 0x906 Mov
	TaskCall(5); // 0x907 TaskCall
	func_521(var_363_object, var_361_int, var_362_object); // 0x908 NEW_2
	TaskReturn(); // 0x909 TaskReturn
	return 0; // 0x90b Return
	
Label_2316:
	var_428_bool = 0; // 0x90c PushV
	var_428_bool = 0; // 0x90d MovB
	var_429_bool = 0; var_430_int = 0; // 0x90e PushV
	var_430_int = 12; // 0x90f MovI
	func_2070(var_429_bool, var_430_int); // 0x910 NEW_2
	if(var_429_bool == 0) goto Label_2327; // 0x912 JumpB
	var_431_bool = GlobalVars[2]; // 0x913 PushGE
	var_432_bool = var_431_bool == 0; // 0x914 Not
	if(var_432_bool == 0) goto Label_2327; // 0x915 JumpB
	var_428_bool = 1; // 0x916 MovB
	
Label_2327:
	if(var_428_bool == 0) goto Label_2338; // 0x917 JumpB
	var_433_int = 0; var_434_object = Obj(); // 0x918 PushV
	var_434_object = var_47_object; // 0x919 Mov
	TaskCall(1); // 0x91a TaskCall
	func_13(var_435_object, var_433_int, var_434_object); // 0x91b NEW_2
	TaskReturn(); // 0x91c TaskReturn
	var_492_bool = GlobalVars[2]; // 0x91e PushGE
	var_492_bool = 1; // 0x91f MovB
	GlobalVars[2] = var_492_bool; // 0x920 PopGE
	return 0; // 0x921 Return
	
Label_2338:
	var_493_int = 0; var_494_object = Obj(); // 0x922 PushV
	var_494_object = var_47_object; // 0x923 Mov
	TaskCall(9); // 0x924 TaskCall
	func_1412(var_495_object, var_493_int, var_494_object); // 0x925 NEW_2
	TaskReturn(); // 0x926 TaskReturn
	return 0; // 0x928 Return
}


func_2155(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x86c PushV
	var_312_string = "b6q03NinaTalk"; // 0x86d MovS
	func_2022(var_311_int, var_312_string); // 0x86e NEW_2
	var_315_int = 0; // 0x870 PushI
	var_316_bool = var_311_int != var_315_int; // 0x871 Neq
	if(var_316_bool == 0) goto Label_2165; // 0x872 JumpB
	var_309_bool = 1; // 0x873 MovB
	return 0; // 0x874 Return
	
Label_2165:
	var_309_bool = 0; // 0x875 MovB
	return 0; // 0x876 Return
}


func_2027(var_58_string, var_59_bool)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x7eb PushV
	FindActor(var_61_object, var_58_string); // 0x7ec Func
	var_62_bool = var_61_object == 0; // 0x7ee Not
	if(var_62_bool == 0) goto Label_2039; // 0x7ef JumpB
	var_63_string = "Door "; // 0x7f0 PushS
	var_64_int = var_63_string + var_58_string; // 0x7f1 Add
	var_65_string = " not found"; // 0x7f2 PushS
	var_66_int = var_64_int + var_65_string; // 0x7f3 Add
	Trace(var_66_int); // 0x7f4 Func
	goto Label_2042; // 0x7f6 Jump
	
Label_2042:
	return 2; // 0x7fa Return
	
Label_2039:
	var_67_string = "locked"; // 0x7f7 PushS
	SetProperty(var_67_string, var_59_bool); // 0x7f8 ObjFunc
}


func_1910(var_163_bool)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; // 0x776 PushV
	var_175_string = "d"; // 0x777 PushS
	var_176_int = 0; // 0x778 PushV
	func_2061(var_176_int); // 0x779 NEW_2
	var_182_int = var_175_string + var_176_int; // 0x77b Add
	var_183_string = "m"; // 0x77c PushS
	var_170_string = var_182_int + var_183_string; // 0x77d Add2
	var_171_int = 0; // 0x77e MovI
	
Label_1919:
	var_184_int = 1; // 0x77f PushI
	if(var_184_int == 0) goto Label_1932; // 0x780 JumpB
	var_185_int = 1; // 0x781 PushI
	var_186_int = var_171_int + var_185_int; // 0x782 Add
	var_187_int = var_170_string + var_186_int; // 0x783 Add
	HasProperty(var_187_int, var_172_bool); // 0x784 ObjFunc
	var_188_bool = var_172_bool == 0; // 0x786 Not
	if(var_188_bool == 0) goto Label_1929; // 0x787 JumpB
	goto Label_1932; // 0x788 Jump
	
Label_1932:
	var_189_bool = var_171_int == 0; // 0x78c Not
	if(var_189_bool == 0) goto Label_1936; // 0x78d JumpB
	var_163_bool = 0; // 0x78e MovB
	return 10; // 0x78f Return
	
Label_1936:
	var_173_int = 0; // 0x790 MovI
	var_190_int = 1; // 0x791 PushI
	var_191_bool = var_171_int > var_190_int; // 0x792 GT
	if(var_191_bool == 0) goto Label_1942; // 0x793 JumpB
	irand(var_173_int, var_171_int); // 0x794 Func
	
Label_1942:
	var_192_int = 1; // 0x796 PushI
	var_193_int = var_173_int + var_192_int; // 0x797 Add
	var_194_int = var_170_string + var_193_int; // 0x798 Add
	GetProperty(var_194_int, var_174_string); // 0x799 ObjFunc
	var_195_bool = 0; var_196_string = ""; // 0x79b PushV
	var_196_string = var_174_string; // 0x79c Mov
	func_1984(var_195_bool, var_196_string); // 0x79d NEW_2
	var_163_bool = var_195_bool; // 0x79e Mov
	return 10; // 0x7a0 Return
	
Label_1929:
	var_197_int = 1; // 0x789 PushI
	var_171_int = var_171_int + var_197_int; // 0x78a Add2
	goto Label_1919; // 0x78b Jump
}


func_2167(var_318_bool)
{
	var_320_int = 0; var_321_string = ""; // 0x878 PushV
	var_321_string = "oob6Viktor1"; // 0x879 MovS
	func_2022(var_320_int, var_321_string); // 0x87a NEW_2
	var_322_int = 0; // 0x87c PushI
	var_323_bool = var_320_int == var_322_int; // 0x87d Eq
	if(var_323_bool == 0) goto Label_2177; // 0x87e JumpB
	var_318_bool = 1; // 0x87f MovB
	return 0; // 0x880 Return
	
Label_2177:
	var_318_bool = 0; // 0x881 MovB
	return 0; // 0x882 Return
}


func_1658(var_0_object, var_26_cvector, var_27_cvector)
{
	SetPosition(var_27_cvector); // 0x67a Func
	SetDirection(var_26_cvector); // 0x67c Func
	var_0_object = 0; // 0x67e TMovB
	var_35_string = "all"; // 0x67f PushS
	var_36_string = "stand"; // 0x680 PushS
	var_37_int = 0; // 0x681 PushI
	LockAnimation(var_35_string, var_36_string, var_37_int); // 0x682 Func
	return 0; // 0x684 Return
}


func_2044(var_77_bool, var_78_string, var_79_string)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x7fc PushV
	FindActor(var_81_object, var_78_string); // 0x7fd Func
	var_82_bool = var_81_object == 0; // 0x7ff NullEq
	if(var_82_bool == 0) goto Label_2051; // 0x800 JumpB
	var_77_bool = 0; // 0x801 MovB
	return 2; // 0x802 Return
	
Label_2051:
	Trigger(var_81_object, var_79_string); // 0x803 Func
	var_77_bool = 1; // 0x805 MovB
	return 2; // 0x806 Return
}


