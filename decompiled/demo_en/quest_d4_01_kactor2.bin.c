task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 10; // 0x24 PushI
	var_13_bool = var_11_bool == var_12_int; // 0x25 Eq
	if(var_13_bool == 0) goto Label_48; // 0x26 JumpB
	var_14_int = 0; // 0x27 PushV
	func_1170(var_14_int); // 0x28 NEW_2
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
	func_1481(); // 0xa8 NEW_2
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
	func_1481(); // 0x14f NEW_2
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
	func_1481(); // 0x1b9 NEW_2
	return 0; // 0x1bb Return
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	var_13_int = 1; // 0x2d3 PushI
	if(var_13_int == 0) goto Label_978; // 0x2d4 JumpB
	func_1379(); // 0x2d6 NEW_2
	var_15_int = 10685; // 0x2d8 PushI
	var_16_bool = var_12_int == var_15_int; // 0x2d9 Eq
	if(var_16_bool == 0) goto Label_741; // 0x2da JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0x2db PushV
	var_17_object = var_1_object; // 0x2dc MovT
	var_18_object = var_0_bool; // 0x2dd MovT
	func_1489(var_18_object); // 0x2de NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x2e0 PushV
	var_49_object = var_1_object; // 0x2e1 MovT
	var_50_object = var_0_bool; // 0x2e2 MovT
	func_1483(); // 0x2e3 NEW_2
	
Label_741:
	var_53_int = 10687; // 0x2e5 PushI
	var_54_bool = var_12_int == var_53_int; // 0x2e6 Eq
	if(var_54_bool == 0) goto Label_754; // 0x2e7 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x2e8 PushV
	var_55_object = var_1_object; // 0x2e9 MovT
	var_56_object = var_0_bool; // 0x2ea MovT
	func_1509(); // 0x2eb NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0x2ed PushV
	var_59_object = var_1_object; // 0x2ee MovT
	var_60_object = var_0_bool; // 0x2ef MovT
	func_1526(); // 0x2f0 NEW_2
	
Label_754:
	var_62_int = 10688; // 0x2f2 PushI
	var_63_bool = var_12_int == var_62_int; // 0x2f3 Eq
	if(var_63_bool == 0) goto Label_767; // 0x2f4 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x2f5 PushV
	var_64_object = var_1_object; // 0x2f6 MovT
	var_65_object = var_0_bool; // 0x2f7 MovT
	func_1509(); // 0x2f8 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x2fa PushV
	var_66_object = var_1_object; // 0x2fb MovT
	var_67_object = var_0_bool; // 0x2fc MovT
	func_1531(); // 0x2fd NEW_2
	
Label_767:
	var_69_int = 10698; // 0x2ff PushI
	var_70_bool = var_12_int == var_69_int; // 0x300 Eq
	if(var_70_bool == 0) goto Label_780; // 0x301 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0x302 PushV
	var_71_object = var_1_object; // 0x303 MovT
	var_72_object = var_0_bool; // 0x304 MovT
	func_1515(var_72_object); // 0x305 NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x307 PushV
	var_77_object = var_1_object; // 0x308 MovT
	var_78_object = var_0_bool; // 0x309 MovT
	func_1483(); // 0x30a NEW_2
	
Label_780:
	var_79_int = 10680; // 0x30c PushI
	var_80_bool = var_11_int == var_79_int; // 0x30d Eq
	if(var_80_bool == 0) goto Label_838; // 0x30e JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x30f PushV
	var_82_object = var_1_object; // 0x310 MovT
	func_1536(var_82_object); // 0x311 NEW_2
	if(var_81_bool == 0) goto Label_808; // 0x313 JumpB
	var_89_string = ""; // 0x314 PushV
	var_89_string = "Neutral"; // 0x315 MovS
	func_700(var_12_int, var_89_string); // 0x316 NEW_2
	var_106_int = 509701; // 0x318 PushI
	SetMessage(var_106_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_107_int = 509702; // 0x31d PushI
	var_108_int = 10682; // 0x31e PushI
	var_109_int = 10681; // 0x31f PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x320 TObjFunc
	var_110_int = 509711; // 0x322 PushI
	var_111_int = 10682; // 0x323 PushI
	var_112_int = 10691; // 0x324 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_113_string = ""; // 0x328 PushV
	var_113_string = "Neutral"; // 0x329 MovS
	func_700(var_12_int, var_113_string); // 0x32a NEW_2
	var_114_int = 509712; // 0x32c PushI
	SetMessage(var_114_int); // 0x32d TObjFunc
	ClearReplies(); // 0x32f TObjFunc
	var_115_int = 509713; // 0x331 PushI
	var_116_int = 10695; // 0x332 PushI
	var_117_int = 10694; // 0x333 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x334 TObjFunc
	var_118_int = 509720; // 0x336 PushI
	var_119_int = 10702; // 0x337 PushI
	var_120_int = 10701; // 0x338 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x339 TObjFunc
	var_121_int = 509723; // 0x33b PushI
	var_122_int = 10695; // 0x33c PushI
	var_123_int = 10705; // 0x33d PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x33e TObjFunc
	var_124_int = 509724; // 0x340 PushI
	var_125_int = -1; // 0x341 PushI
	var_126_int = 10707; // 0x342 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x343 TObjFunc
	return 0; // 0x345 Return
	
Label_838:
	var_127_int = 10702; // 0x346 PushI
	var_128_bool = var_11_int == var_127_int; // 0x347 Eq
	if(var_128_bool == 0) goto Label_856; // 0x348 JumpB
	var_129_string = ""; // 0x349 PushV
	var_129_string = "Neutral"; // 0x34a MovS
	func_700(var_12_int, var_129_string); // 0x34b NEW_2
	var_130_int = 509721; // 0x34d PushI
	SetMessage(var_130_int); // 0x34e TObjFunc
	ClearReplies(); // 0x350 TObjFunc
	var_131_int = 509722; // 0x352 PushI
	var_132_int = 10697; // 0x353 PushI
	var_133_int = 10703; // 0x354 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x355 TObjFunc
	return 0; // 0x357 Return
	
Label_856:
	var_134_int = 10695; // 0x358 PushI
	var_135_bool = var_11_int == var_134_int; // 0x359 Eq
	if(var_135_bool == 0) goto Label_879; // 0x35a JumpB
	var_136_string = ""; // 0x35b PushV
	var_136_string = "Neutral"; // 0x35c MovS
	func_700(var_12_int, var_136_string); // 0x35d NEW_2
	var_137_int = 509714; // 0x35f PushI
	SetMessage(var_137_int); // 0x360 TObjFunc
	ClearReplies(); // 0x362 TObjFunc
	var_138_int = 509715; // 0x364 PushI
	var_139_int = 10697; // 0x365 PushI
	var_140_int = 10696; // 0x366 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x367 TObjFunc
	var_141_int = 509719; // 0x369 PushI
	var_142_int = -1; // 0x36a PushI
	var_143_int = 10700; // 0x36b PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x36c TObjFunc
	return 0; // 0x36e Return
	
Label_879:
	var_144_int = 10697; // 0x36f PushI
	var_145_bool = var_11_int == var_144_int; // 0x370 Eq
	if(var_145_bool == 0) goto Label_902; // 0x371 JumpB
	var_146_string = ""; // 0x372 PushV
	var_146_string = "Neutral"; // 0x373 MovS
	func_700(var_12_int, var_146_string); // 0x374 NEW_2
	var_147_int = 509716; // 0x376 PushI
	SetMessage(var_147_int); // 0x377 TObjFunc
	ClearReplies(); // 0x379 TObjFunc
	var_148_int = 509717; // 0x37b PushI
	var_149_int = -1; // 0x37c PushI
	var_150_int = 10698; // 0x37d PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x37e TObjFunc
	var_151_int = 509718; // 0x380 PushI
	var_152_int = -1; // 0x381 PushI
	var_153_int = 10699; // 0x382 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x383 TObjFunc
	return 0; // 0x385 Return
	
Label_902:
	var_154_int = 10682; // 0x386 PushI
	var_155_bool = var_11_int == var_154_int; // 0x387 Eq
	if(var_155_bool == 0) goto Label_925; // 0x388 JumpB
	var_156_string = ""; // 0x389 PushV
	var_156_string = "Neutral"; // 0x38a MovS
	func_700(var_12_int, var_156_string); // 0x38b NEW_2
	var_157_int = 509703; // 0x38d PushI
	SetMessage(var_157_int); // 0x38e TObjFunc
	ClearReplies(); // 0x390 TObjFunc
	var_158_int = 509704; // 0x392 PushI
	var_159_int = 10684; // 0x393 PushI
	var_160_int = 10683; // 0x394 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x395 TObjFunc
	var_161_int = 509710; // 0x397 PushI
	var_162_int = 10684; // 0x398 PushI
	var_163_int = 10689; // 0x399 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x39a TObjFunc
	return 0; // 0x39c Return
	
Label_925:
	var_164_int = 10684; // 0x39d PushI
	var_165_bool = var_11_int == var_164_int; // 0x39e Eq
	if(var_165_bool == 0) goto Label_943; // 0x39f JumpB
	var_166_string = ""; // 0x3a0 PushV
	var_166_string = "Neutral"; // 0x3a1 MovS
	func_700(var_12_int, var_166_string); // 0x3a2 NEW_2
	var_167_int = 509705; // 0x3a4 PushI
	SetMessage(var_167_int); // 0x3a5 TObjFunc
	ClearReplies(); // 0x3a7 TObjFunc
	var_168_int = 509706; // 0x3a9 PushI
	var_169_int = 10686; // 0x3aa PushI
	var_170_int = 10685; // 0x3ab PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x3ac TObjFunc
	return 0; // 0x3ae Return
	
Label_943:
	var_171_int = 10686; // 0x3af PushI
	var_172_bool = var_11_int == var_171_int; // 0x3b0 Eq
	if(var_172_bool == 0) goto Label_966; // 0x3b1 JumpB
	var_173_string = ""; // 0x3b2 PushV
	var_173_string = "Neutral"; // 0x3b3 MovS
	func_700(var_12_int, var_173_string); // 0x3b4 NEW_2
	var_174_int = 509707; // 0x3b6 PushI
	SetMessage(var_174_int); // 0x3b7 TObjFunc
	ClearReplies(); // 0x3b9 TObjFunc
	var_175_int = 509708; // 0x3bb PushI
	var_176_int = -1; // 0x3bc PushI
	var_177_int = 10687; // 0x3bd PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x3be TObjFunc
	var_178_int = 509709; // 0x3c0 PushI
	var_179_int = -1; // 0x3c1 PushI
	var_180_int = 10688; // 0x3c2 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x3c3 TObjFunc
	return 0; // 0x3c5 Return
	
Label_966:
	var_3_object = 1; // 0x3c6 TMovB
	var_181_bool = 0; // 0x3c7 PushV
	func_1573(var_181_bool); // 0x3c8 NEW_2
	if(var_181_bool == 0) goto Label_974; // 0x3ca JumpB
	lshStopAnimation(); // 0x3cb Func
	goto Label_976; // 0x3cd Jump
	
Label_976:
	return 0; // 0x3d0 Return
	
Label_974:
	StopAnimation(); // 0x3ce Func
	
Label_978:
	return 0; // 0x3d2 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0; // 0x3ea PushV
	func_1138(); // 0x3ec NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x3ee PushV
	var_15_object = var_11_object; // 0x3ef Mov
	func_979(var_13_int, var_14_int, var_15_object); // 0x3f0 NEW_2
	var_13_int = var_14_int; // 0x3f1 Mov
	var_166_int = 0; // 0x3f3 PushI
	var_167_bool = var_13_int == var_166_int; // 0x3f4 Eq
	if(var_167_bool == 0) goto Label_1043; // 0x3f5 JumpB
	var_168_bool = 0; var_169_string = ""; var_170_string = ""; // 0x3f6 PushV
	var_169_string = "quest_d4_01"; // 0x3f7 MovS
	var_170_string = "key2_done"; // 0x3f8 MovS
	func_1445(var_168_bool, var_169_string, var_170_string); // 0x3f9 NEW_2
	var_174_object = Obj(); // 0x3fb PushV
	var_174_object = var_11_object; // 0x3fc Mov
	TaskCall(0); // 0x3fd TaskCall
	func_0(var_174_object); // 0x3fe NEW_2
	TaskReturn(); // 0x3ff TaskReturn
	var_277_object = Obj(); // 0x401 PushV
	var_277_object = var_11_object; // 0x402 Mov
	TaskCall(1); // 0x403 TaskCall
	func_182(var_277_object); // 0x404 NEW_2
	TaskReturn(); // 0x405 TaskReturn
	var_333_object = Obj(); // 0x407 PushV
	var_333_object = var_11_object; // 0x408 Mov
	TaskCall(7); // 0x409 TaskCall
	func_1151(var_333_object); // 0x40a NEW_2
	TaskReturn(); // 0x40b TaskReturn
	TaskCall(2); // 0x40e TaskCall
	func_349(); // 0x40f NEW_2
	TaskReturn(); // 0x410 TaskReturn
	goto Label_1056; // 0x412 Jump
	
Label_1056:
	return 2; // 0x420 Return
	
Label_1043:
	var_426_int = 1; // 0x413 PushI
	var_427_bool = var_13_int == var_426_int; // 0x414 Eq
	if(var_427_bool == 0) goto Label_1056; // 0x415 JumpB
	var_428_bool = 0; var_429_string = ""; var_430_string = ""; // 0x416 PushV
	var_429_string = "quest_d4_01"; // 0x417 MovS
	var_430_string = "key2_done"; // 0x418 MovS
	func_1445(var_428_bool, var_429_string, var_430_string); // 0x419 NEW_2
	TaskCall(2); // 0x41c TaskCall
	func_349(); // 0x41d NEW_2
	TaskReturn(); // 0x41e TaskReturn
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0; // 0x5ca Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0]; // 0x3dc PushGE
	var_12_int = 0; // 0x3dd PushV
	func_1170(var_12_int); // 0x3de NEW_2
	var_11_int = var_12_int; // 0x3df Mov
	GlobalVars[0] = var_11_int; // 0x3e1 PopGE
	
Label_994:
	var_20_int = 3; // 0x3e2 PushI
	Sleep(var_20_int); // 0x3e3 Func
	func_1057(); // 0x3e6 NEW_2
	goto Label_994; // 0x3e8 Jump
}


func_1536(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x601 PushV
	var_97_string = "ood4WastedMale1"; // 0x602 MovS
	func_1396(var_96_int, var_97_string); // 0x603 NEW_2
	var_100_int = 0; // 0x605 PushI
	var_101_bool = var_96_int == var_100_int; // 0x606 Eq
	if(var_101_bool == 0) goto Label_1546; // 0x607 JumpB
	var_94_bool = 1; // 0x608 MovB
	return 0; // 0x609 Return
	
Label_1546:
	var_94_bool = 0; // 0x60a MovB
	return 0; // 0x60b Return
}


func_0(var_174_object)
{
	var_177_int = 10; // 0x1 PushI
	var_178_int = 1; // 0x2 PushI
	SetTimer(var_177_int, var_178_int); // 0x3 Func
	
Label_5:
	var_179_bool = 0; var_180_object = Obj(); var_181_float = 0; var_182_float = 0; var_183_bool = 0; var_184_bool = 0; // 0x5 PushV
	var_180_object = var_174_object; // 0x6 Mov
	var_181_float = 250; // 0x7 MovI
	var_182_float = 3000; // 0x8 MovI
	var_183_bool = 1; // 0x9 MovB
	var_184_bool = 1; // 0xa MovB
	func_49(var_176_object, var_174_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool); // 0xb NEW_2
	var_262_int = 0; // 0xd PushV
	func_1170(var_262_int); // 0xe NEW_2
	var_270_int = GlobalVars[0]; // 0x10 PushGE
	var_271_bool = var_262_int != var_270_int; // 0x11 Neq
	if(var_271_bool == 0) goto Label_20; // 0x12 JumpB
	goto Label_31; // 0x13 Jump
	
Label_31:
	var_272_int = 10; // 0x1f PushI
	KillTimer(var_272_int); // 0x20 Func
	return 0; // 0x22 Return
	
Label_20:
	var_273_int = 1; // 0x14 PushI
	Sleep(var_273_int); // 0x15 Func
	var_274_int = 0; // 0x17 PushV
	func_1170(var_274_int); // 0x18 NEW_2
	var_275_int = GlobalVars[0]; // 0x1a PushGE
	var_276_bool = var_274_int != var_275_int; // 0x1b Neq
	if(var_276_bool == 0) goto Label_30; // 0x1c JumpB
	goto Label_31; // 0x1d Jump
	
Label_30:
	goto Label_5; // 0x1e Jump
}


func_1413(var_28_object, var_29_int)
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; // 0x585 PushV
	GetItemID(var_33_int); // 0x586 ObjFunc
	var_36_string = "Category"; // 0x588 PushS
	GetInvItemProperty(var_34_int, var_33_int, var_36_string); // 0x589 Func
	AddItem(var_35_bool, var_28_object, var_34_int, var_29_int); // 0x58b ObjFunc
	var_37_bool = var_35_bool == 0; // 0x58d Not
	if(var_37_bool == 0) goto Label_1426; // 0x58e JumpB
	DropItems(var_28_object, var_29_int); // 0x58f ObjFunc
	goto Label_1431; // 0x591 Jump
	
Label_1431:
	return 6; // 0x597 Return
	
Label_1426:
	var_38_int = 0; var_39_int = 0; // 0x592 PushV
	var_38_int = var_33_int; // 0x593 Mov
	var_39_int = var_29_int; // 0x594 Mov
	func_1401(var_38_int, var_39_int); // 0x595 NEW_2
}


func_1548(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x60c PushV
	var_81_string = "branch"; // 0x60d PushS
	GetVariable(var_81_string, var_80_int); // 0x60e Func
	var_82_int = 0; // 0x610 PushI
	var_83_bool = var_80_int == var_82_int; // 0x611 Eq
	if(var_83_bool == 0) goto Label_1558; // 0x612 JumpB
	var_78_int = 1; // 0x613 MovI
	return 2; // 0x614 Return
	
Label_1558:
	var_84_int = 1; // 0x616 PushI
	var_85_bool = var_80_int == var_84_int; // 0x617 Eq
	if(var_85_bool == 0) goto Label_1563; // 0x618 JumpB
	var_78_int = 2; // 0x619 MovI
	return 2; // 0x61a Return
	
Label_1563:
	var_78_int = 3; // 0x61b MovI
	return 2; // 0x61c Return
}


func_1165(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x48d PushV
	GetPosition(var_19_cvector); // 0x48e Func
	var_17_cvector = var_19_cvector; // 0x490 Mov
	return 2; // 0x491 Return
}


func_1170(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0; // 0x492 PushV
	GetScene(var_15_object); // 0x493 Func
	var_17_cvector = CVector(0,0,0); // 0x495 PushV
	func_1165(var_17_cvector); // 0x496 NEW_2
	GetRegionByPt(var_16_int, var_17_cvector); // 0x498 ObjFunc
	var_12_int = var_16_int; // 0x49a Mov
	return 4; // 0x49b Return
}


func_531(var_413_bool)
{
	var_413_bool = 1; // 0x213 MovB
	return 0; // 0x214 Return
}


func_533(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x215 PushV
	var_0_bool = var_17_object; // 0x216 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x217 PushV
	var_28_object = var_17_object; // 0x218 Mov
	var_29_float = 70.0; // 0x219 MovF
	func_1263(var_28_object, var_29_float); // 0x21a NEW_2
	var_73_bool = var_27_bool == 0; // 0x21c Not
	if(var_73_bool == 0) goto Label_544; // 0x21d JumpB
	var_16_int = -2; // 0x21e MovI
	return 8; // 0x21f Return
	
Label_544:
	CreateDialog(var_23_object); // 0x220 Func
	var_74_int = 0; // 0x222 PushV
	func_1567(var_74_int); // 0x223 NEW_2
	SetNPCName(var_74_int); // 0x225 ObjFunc
	var_75_int = 0; // 0x227 PushV
	func_1565(var_75_int); // 0x228 NEW_2
	SetNPCDescription(var_75_int); // 0x22a ObjFunc
	var_76_string = ""; // 0x22c PushV
	func_1569(var_76_string); // 0x22d NEW_2
	SetPhoto(var_76_string); // 0x22f ObjFunc
	var_77_string = ""; // 0x231 PushV
	func_1571(var_77_string); // 0x232 NEW_2
	SetPhoto2(var_77_string); // 0x234 ObjFunc
	var_78_int = 0; // 0x236 PushV
	func_1548(var_78_int); // 0x237 NEW_2
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
	var_158_bool = var_26_bool == 0; // 0x24d Not
	if(var_158_bool == 0) goto Label_596; // 0x24e JumpB
	sync(); // 0x24f Func
	IsDialogEnd(var_26_bool); // 0x251 ObjFunc
	goto Label_589; // 0x253 Jump
	
Label_596:
	var_159_object = Obj(); // 0x254 PushV
	var_159_object = var_17_object; // 0x255 Mov
	func_1331(); // 0x256 NEW_2
	StopDialog(var_23_object); // 0x258 Func
	GetReturnValue(var_25_int); // 0x25a ObjFunc
	var_16_int = var_25_int; // 0x25c Mov
	return 8; // 0x25d Return
}


func_1432(var_22_object, var_23_string, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x598 PushV
	CreateInvItem(var_26_object); // 0x599 Func
	SetItemName(var_23_string); // 0x59b ObjFunc
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x59d PushV
	var_27_object = var_22_object; // 0x59e Mov
	var_28_object = var_26_object; // 0x59f Mov
	var_29_int = var_24_int; // 0x5a0 Mov
	func_1413(var_28_object, var_29_int); // 0x5a1 NEW_2
	return 2; // 0x5a3 Return
}


func_155(var_0_bool)
{
	var_0_bool = 1; // 0x9b TMovB
	var_12_int = 0; // 0x9c PushI
	KillTimer(var_12_int); // 0x9d Func
	Stop(); // 0x9f Func
	return 0; // 0xa1 Return
}


func_1181(var_225_bool, var_226_object, var_227_string)
{
	var_228_bool = 0; var_229_bool = 0; // 0x49d PushV
	var_230_string = "HasProperty"; // 0x49e PushS
	var_231_int = 2; // 0x49f PushI
	var_232_bool = IsFuncExist(var_226_object, var_230_string, var_231_int); // 0x4a0 FuncExist
	var_233_bool = var_232_bool == 0; // 0x4a1 Not
	if(var_233_bool == 0) goto Label_1189; // 0x4a2 JumpB
	var_225_bool = 0; // 0x4a3 MovB
	return 2; // 0x4a4 Return
	
Label_1189:
	HasProperty(var_227_string, var_229_bool); // 0x4a5 ObjFunc
	var_225_bool = var_229_bool; // 0x4a7 Mov
	return 2; // 0x4a8 Return
}


func_1565(var_75_int)
{
	var_75_int = 515556; // 0x61d MovI
	return 0; // 0x61e Return
}


func_1567(var_74_int)
{
	var_74_int = 503341; // 0x61f MovI
	return 0; // 0x620 Return
}


func_416(var_358_float)
{
	var_359_float = 0; var_360_float = 0; // 0x1a0 PushV
	GetCameraFarDistance(var_360_float); // 0x1a1 Func
	var_358_float = var_360_float; // 0x1a3 Mov
	return 2; // 0x1a4 Return
}


func_1569(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png"; // 0x621 MovS
	return 0; // 0x622 Return
}


func_1057()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0; // 0x421 PushV
	WaitForAnimEnd(); // 0x422 Func
	var_35_bool = 0; // 0x424 PushV
	func_1258(var_35_bool); // 0x425 NEW_2
	var_38_bool = var_35_bool == 0; // 0x427 Not
	if(var_38_bool == 0) goto Label_1066; // 0x428 JumpB
	return 14; // 0x429 Return
	
Label_1066:
	var_39_int = 0; // 0x42a PushV
	func_1464(var_39_int); // 0x42b NEW_2
	var_28_int = var_39_int; // 0x42c Mov
	var_29_int = 0; // 0x42e MovI
	
Label_1071:
	var_52_bool = 0; // 0x42f PushV
	var_52_bool = 0; // 0x430 MovB
	var_53_int = 5; // 0x431 PushI
	var_54_bool = var_29_int < var_53_int; // 0x432 LT
	if(var_54_bool == 0) goto Label_1081; // 0x433 JumpB
	var_55_bool = 0; // 0x434 PushV
	func_1258(var_55_bool); // 0x435 NEW_2
	if(var_55_bool == 0) goto Label_1081; // 0x437 JumpB
	var_52_bool = 1; // 0x438 MovB
	
Label_1081:
	if(var_52_bool == 0) goto Label_1133; // 0x439 JumpB
	var_56_int = 3; // 0x43a PushI
	irand(var_30_int, var_56_int); // 0x43b Func
	var_57_int = 0; // 0x43d PushI
	var_58_bool = var_30_int == var_57_int; // 0x43e Eq
	if(var_58_bool == 0) goto Label_1105; // 0x43f JumpB
	var_59_int = var_28_int; // 0x440 Push
	if(var_59_int == 0) goto Label_1104; // 0x441 JumpB
	irand(var_31_int, var_28_int); // 0x442 Func
	var_60_string = "all"; // 0x444 PushS
	var_61_string = ""; var_62_int = 0; // 0x445 PushV
	var_62_int = var_31_int; // 0x446 Mov
	func_1457(var_61_string, var_62_int); // 0x447 NEW_2
	PlayAnimation(var_60_string, var_61_string); // 0x449 Func
	WaitForAnimEnd(var_32_bool); // 0x44b Func
	var_63_bool = var_32_bool == 0; // 0x44d Not
	if(var_63_bool == 0) goto Label_1104; // 0x44e JumpB
	goto Label_1133; // 0x44f Jump
	
Label_1133:
	ResetAAS(); // 0x46d Func
	return 14; // 0x46f Return
	
Label_1104:
	goto Label_1122; // 0x450 Jump
	
Label_1122:
	var_64_bool = 0; // 0x462 PushV
	func_1136(var_64_bool); // 0x463 NEW_2
	var_65_bool = var_64_bool == 0; // 0x465 Not
	if(var_65_bool == 0) goto Label_1128; // 0x466 JumpB
	goto Label_1133; // 0x467 Jump
	
Label_1128:
	ResetAAS(); // 0x468 Func
	var_66_int = 1; // 0x46a PushI
	var_29_int = var_29_int + var_66_int; // 0x46b Add2
	goto Label_1071; // 0x46c Jump
	
Label_1105:
	var_67_int = 1; // 0x451 PushI
	var_68_bool = var_30_int == var_67_int; // 0x452 Eq
	if(var_68_bool == 0) goto Label_1119; // 0x453 JumpB
	var_69_int = 4; // 0x454 PushI
	rand(var_33_float, var_69_int); // 0x455 Func
	var_70_int = 1; // 0x457 PushI
	var_71_int = var_33_float + var_70_int; // 0x458 Add
	Sleep(var_71_int, var_34_bool); // 0x459 Func
	var_72_bool = var_34_bool == 0; // 0x45b Not
	if(var_72_bool == 0) goto Label_1118; // 0x45c JumpB
	goto Label_1133; // 0x45d Jump
	
Label_1118:
	goto Label_1122; // 0x45e Jump
	
Label_1119:
	var_73_int = var_29_int; // 0x45f Push
	if(var_73_int == 0) goto Label_1122; // 0x460 JumpB
	goto Label_1133; // 0x461 Jump
}


func_1571(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png"; // 0x623 MovS
	return 0; // 0x624 Return
}


func_1573(var_69_bool)
{
	var_69_bool = 0; // 0x625 MovB
	return 0; // 0x626 Return
}


func_1445(var_168_bool, var_169_string, var_170_string)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x5a5 PushV
	FindActor(var_172_object, var_169_string); // 0x5a6 Func
	var_173_bool = var_172_object == 0; // 0x5a8 NullEq
	if(var_173_bool == 0) goto Label_1452; // 0x5a9 JumpB
	var_168_bool = 0; // 0x5aa MovB
	return 2; // 0x5ab Return
	
Label_1452:
	Trigger(var_172_object, var_170_string); // 0x5ac Func
	var_168_bool = 1; // 0x5ae MovB
	return 2; // 0x5af Return
}


func_1193(var_218_bool)
{
	var_220_bool = 0; var_221_bool = 0; // 0x4a9 PushV
	IsDead(var_221_bool); // 0x4aa ObjFunc
	var_218_bool = var_221_bool; // 0x4ac Mov
	return 2; // 0x4ad Return
}


func_171(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj(); // 0xac PushV
	var_204_object = var_202_object; // 0xad Mov
	func_1234(var_203_bool, var_204_object); // 0xae NEW_2
	var_201_bool = var_203_bool; // 0xaf Mov
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


func_1198(var_207_bool, var_208_object)
{
	var_209_object = Obj(); var_210_object = Obj(); var_211_object = Obj(); var_212_object = Obj(); // 0x4ae PushV
	var_213_bool = var_208_object == 0; // 0x4af NullEq
	if(var_213_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_207_bool = 0; // 0x4b1 MovB
	return 4; // 0x4b2 Return
	
Label_1203:
	var_214_bool = 0; // 0x4b3 PushV
	var_214_bool = 0; // 0x4b4 MovB
	var_215_string = "IsDead"; // 0x4b5 PushS
	var_216_int = 1; // 0x4b6 PushI
	var_217_bool = IsFuncExist(var_208_object, var_215_string, var_216_int); // 0x4b7 FuncExist
	if(var_217_bool == 0) goto Label_1215; // 0x4b8 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x4b9 PushV
	var_219_object = var_208_object; // 0x4ba Mov
	func_1193(var_219_object); // 0x4bb NEW_2
	if(var_218_bool == 0) goto Label_1215; // 0x4bd JumpB
	var_214_bool = 1; // 0x4be MovB
	
Label_1215:
	if(var_214_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_207_bool = 0; // 0x4c0 MovB
	return 4; // 0x4c1 Return
	
Label_1218:
	GetScene(var_211_object); // 0x4c2 Func
	var_222_bool = var_211_object == 0; // 0x4c4 NullEq
	if(var_222_bool == 0) goto Label_1224; // 0x4c5 JumpB
	var_207_bool = 0; // 0x4c6 MovB
	return 4; // 0x4c7 Return
	
Label_1224:
	GetScene(var_212_object); // 0x4c8 ObjFunc
	var_223_bool = var_211_object != var_212_object; // 0x4ca Neq
	if(var_223_bool == 0) goto Label_1230; // 0x4cb JumpB
	var_207_bool = 0; // 0x4cc MovB
	return 4; // 0x4cd Return
	
Label_1230:
	var_207_bool = 1; // 0x4ce MovB
	return 4; // 0x4cf Return
}


func_49(var_0_bool, var_1_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool)
{
	var_185_bool = 0; var_186_bool = 0; var_187_object = Obj(); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_bool = 0; var_194_bool = 0; var_195_object = Obj(); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_object = Obj(); // 0x31 PushV
	var_0_bool = 0; // 0x32 TMovB
	var_1_object = var_180_object; // 0x33 TMov
	var_194_bool = var_184_bool; // 0x34 Mov
	
Label_53:
	var_201_bool = 0; var_202_object = Obj(); // 0x35 PushV
	var_202_object = var_180_object; // 0x36 Mov
	func_171(var_201_bool, var_202_object); // 0x37 NEW_2
	var_237_bool = var_201_bool == 0; // 0x39 Not
	if(var_237_bool == 0) goto Label_61; // 0x3a JumpB
	var_179_bool = 0; // 0x3b MovB
	return 16; // 0x3c Return
	
Label_61:
	GetPosition(var_196_cvector); // 0x3d ObjFunc
	GetPosition(var_197_cvector); // 0x3f Func
	var_198_cvector = var_196_cvector - var_197_cvector; // 0x41 Sub2
	var_199_float = var_198_cvector | var_198_cvector; // 0x42 Or2
	var_238_bool = 0; // 0x43 PushV
	var_238_bool = 0; // 0x44 MovB
	var_239_int = 0; // 0x45 PushI
	var_240_bool = var_182_float > var_239_int; // 0x46 GT
	if(var_240_bool == 0) goto Label_76; // 0x47 JumpB
	var_241_float = var_182_float * var_182_float; // 0x48 Mult
	var_242_bool = var_199_float > var_241_float; // 0x49 GT
	if(var_242_bool == 0) goto Label_76; // 0x4a JumpB
	var_238_bool = 1; // 0x4b MovB
	
Label_76:
	if(var_238_bool == 0) goto Label_81; // 0x4c JumpB
	Stop(); // 0x4d Func
	var_179_bool = 0; // 0x4f MovB
	return 16; // 0x50 Return
	
Label_81:
	var_243_float = var_181_float * var_181_float; // 0x51 Mult
	var_244_bool = var_199_float > var_243_float; // 0x52 GT
	if(var_244_bool == 0) goto Label_143; // 0x53 JumpB
	GetPFPosition(var_196_cvector); // 0x54 ObjFunc
	FindPathTo(var_200_object, var_196_cvector); // 0x56 Func
	var_245_bool = var_200_object != 0; // 0x58 NullNeq
	if(var_245_bool == 0) goto Label_92; // 0x59 JumpB
	var_195_object = var_200_object; // 0x5a Mov
	var_200_object = 0; // 0x5b SetNull
	
Label_92:
	var_246_bool = var_195_object != 0; // 0x5c NullNeq
	if(var_246_bool == 0) goto Label_125; // 0x5d JumpB
	var_247_bool = var_194_bool; // 0x5e Push
	if(var_247_bool == 0) goto Label_102; // 0x5f JumpB
	var_194_bool = 0; // 0x60 MovB
	RotatePath(var_195_object, var_193_bool); // 0x61 Func
	var_248_bool = var_193_bool == 0; // 0x63 Not
	if(var_248_bool == 0) goto Label_102; // 0x64 JumpB
	goto Label_149; // 0x65 Jump
	
Label_149:
	var_179_bool = !var_0_bool; // 0x95 Not2
	return 16; // 0x96 Return
	
Label_102:
	var_249_int = 0; // 0x66 PushI
	var_250_float = 0.3; // 0x67 PushF
	SetTimer(var_249_int, var_250_float); // 0x68 Func
	var_251_string = ""; // 0x6a PushV
	func_178(var_251_string); // 0x6b NEW_2
	var_252_string = ""; // 0x6d PushV
	func_180(var_252_string); // 0x6e NEW_2
	FollowPath(var_195_object, var_183_bool, var_193_bool, var_251_string, var_252_string); // 0x70 Func
	var_253_bool = var_193_bool == 0; // 0x72 Not
	if(var_253_bool == 0) goto Label_123; // 0x73 JumpB
	var_254_bool = var_0_bool; // 0x74 PushT
	if(var_254_bool == 0) goto Label_121; // 0x75 JumpB
	var_195_object = 0; // 0x76 SetNull
	goto Label_149; // 0x77 Jump
	
Label_121:
	goto Label_148; // 0x79 Jump
	
Label_148:
	goto Label_53; // 0x94 Jump
	
Label_123:
	var_195_object = 0; // 0x7b SetNull
	goto Label_141; // 0x7c Jump
	
Label_141:
	var_200_object = 0; // 0x8d SetNull
	goto Label_147; // 0x8e Jump
	
Label_147:
	var_195_object = 0; // 0x93 SetNull
	
Label_125:
	var_255_int = 0; // 0x7d PushI
	KillTimer(var_255_int); // 0x7e Func
	var_256_float = 0.5; // 0x80 PushF
	Sleep(var_256_float, var_193_bool); // 0x81 Func
	var_257_bool = var_193_bool == 0; // 0x83 Not
	if(var_257_bool == 0) goto Label_137; // 0x84 JumpB
	var_258_bool = var_0_bool; // 0x85 PushT
	if(var_258_bool == 0) goto Label_137; // 0x86 JumpB
	var_195_object = 0; // 0x87 SetNull
	goto Label_149; // 0x88 Jump
	
Label_137:
	var_259_int = 0; // 0x89 PushI
	var_260_float = 0.3; // 0x8a PushF
	SetTimer(var_259_int, var_260_float); // 0x8b Func
	
Label_143:
	var_261_int = 0; // 0x8f PushI
	KillTimer(var_261_int); // 0x90 Func
	goto Label_149; // 0x92 Jump
}


func_178(var_251_string)
{
	var_251_string = "walk"; // 0xb2 MovS
	return 0; // 0xb3 Return
}


func_1457(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x5b1 PushV
	var_48_string = "idle"; // 0x5b2 MovS
	var_49_int = var_46_int; // 0x5b3 Push
	if(var_49_int == 0) goto Label_1462; // 0x5b4 JumpB
	var_48_string = var_48_string + var_46_int; // 0x5b5 Add2
	
Label_1462:
	var_45_string = var_48_string; // 0x5b6 Mov
	return 2; // 0x5b7 Return
}


func_180(var_252_string)
{
	var_252_string = "run"; // 0xb4 MovS
	return 0; // 0xb5 Return
}


func_1331()
{
	var_160_bool = 0; var_161_bool = 0; // 0x533 PushV
	CameraSwitchToNormal(); // 0x534 Func
	var_162_bool = 0; // 0x536 PushV
	func_1573(var_162_bool); // 0x537 NEW_2
	if(var_162_bool == 0) goto Label_1339; // 0x539 JumpB
	goto Label_1347; // 0x53a Jump
	
Label_1347:
	return 2; // 0x543 Return
	
Label_1339:
	var_163_string = "head"; // 0x53b PushS
	HasAnimationTrack(var_161_bool, var_163_string); // 0x53c Func
	var_164_bool = var_161_bool; // 0x53e Push
	if(var_164_bool == 0) goto Label_1347; // 0x53f JumpB
	var_165_string = "head"; // 0x540 PushS
	UnlookAsync(var_165_string); // 0x541 Func
}


func_182(var_277_object)
{
	
Label_183:
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_bool = 0; // 0xb7 PushV
	var_281_object = var_277_object; // 0xb8 Mov
	var_282_float = 250; // 0xb9 MovI
	var_283_float = 3000; // 0xba MovI
	var_284_bool = 1; // 0xbb MovB
	var_285_bool = 1; // 0xbc MovB
	func_198(var_279_object, var_277_object, var_280_bool, var_281_object, var_282_float, var_283_float, var_284_bool, var_285_bool); // 0xbd NEW_2
	var_331_bool = var_280_bool == 0; // 0xbf Not
	if(var_331_bool == 0) goto Label_197; // 0xc0 JumpB
	var_332_int = 1; // 0xc1 PushI
	Sleep(var_332_int); // 0xc2 Func
	goto Label_183; // 0xc4 Jump
	
Label_197:
	return 0; // 0xc5 Return
}


func_1464(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x5b8 PushV
	var_42_int = 0; // 0x5b9 MovI
	
Label_1466:
	var_44_string = "all"; // 0x5ba PushS
	var_45_string = ""; var_46_int = 0; // 0x5bb PushV
	var_46_int = var_42_int; // 0x5bc Mov
	func_1457(var_45_string, var_46_int); // 0x5bd NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x5bf Func
	var_50_bool = var_43_bool == 0; // 0x5c1 Not
	if(var_50_bool == 0) goto Label_1476; // 0x5c2 JumpB
	goto Label_1479; // 0x5c3 Jump
	
Label_1479:
	var_39_int = var_42_int; // 0x5c7 Mov
	return 4; // 0x5c8 Return
	
Label_1476:
	var_51_int = 1; // 0x5c4 PushI
	var_42_int = var_42_int + var_51_int; // 0x5c5 Add2
	goto Label_1466; // 0x5c6 Jump
}


func_444(var_368_bool)
{
	var_368_bool = 0; // 0x1bc MovB
	return 0; // 0x1bd Return
}


func_700(var_2_bool, var_102_string)
{
	var_103_bool = 0; // 0x2bd PushV
	func_1573(var_103_bool); // 0x2be NEW_2
	var_104_bool = var_103_bool == 0; // 0x2c0 Not
	if(var_104_bool == 0) goto Label_707; // 0x2c1 JumpB
	return 0; // 0x2c2 Return
	
Label_707:
	var_105_bool = var_102_string == var_2_bool; // 0x2c3 Eq
	if(var_105_bool == 0) goto Label_710; // 0x2c4 JumpB
	return 0; // 0x2c5 Return
	
Label_710:
	var_106_string = ""; var_107_bool = 0; // 0x2c6 PushV
	var_106_string = var_102_string; // 0x2c7 Mov
	var_108_string = ""; // 0x2c8 PushS
	var_109_bool = var_102_string == var_108_string; // 0x2c9 Eq
	if(var_109_bool == 0) goto Label_717; // 0x2ca JumpB
	var_107_bool = 0; // 0x2cb MovB
	goto Label_718; // 0x2cc Jump
	
Label_718:
	func_1364(var_106_string, var_107_bool); // 0x2ce NEW_2
	var_2_bool = var_102_string; // 0x2d0 TMov
	return 0; // 0x2d1 Return
	
Label_717:
	var_107_bool = 1; // 0x2cd MovB
}


func_446(var_362_object, var_363_cvector)
{
	var_364_object = Obj(); var_365_object = Obj(); // 0x1be PushV
	FindShiftedPathTo(var_365_object, var_363_cvector); // 0x1bf Func
	var_362_object = var_365_object; // 0x1c1 Mov
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
	var_370_int = 0; var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_bool = 0; var_375_float = 0; var_376_bool = 0; var_377_int = 0; var_378_int = 0; var_379_int = 0; var_380_int = 0; var_381_bool = 0; var_382_float = 0; var_383_bool = 0; // 0x1c4 PushV
	WaitForAnimEnd(); // 0x1c5 Func
	var_384_bool = 0; // 0x1c7 PushV
	func_1258(var_384_bool); // 0x1c8 NEW_2
	var_387_bool = var_384_bool == 0; // 0x1ca Not
	if(var_387_bool == 0) goto Label_461; // 0x1cb JumpB
	return 14; // 0x1cc Return
	
Label_461:
	var_388_int = 0; // 0x1cd PushV
	func_1464(var_388_int); // 0x1ce NEW_2
	var_377_int = var_388_int; // 0x1cf Mov
	var_378_int = 0; // 0x1d1 MovI
	
Label_466:
	var_401_bool = 0; // 0x1d2 PushV
	var_401_bool = 0; // 0x1d3 MovB
	var_402_int = 5; // 0x1d4 PushI
	var_403_bool = var_378_int < var_402_int; // 0x1d5 LT
	if(var_403_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_404_bool = 0; // 0x1d7 PushV
	func_1258(var_404_bool); // 0x1d8 NEW_2
	if(var_404_bool == 0) goto Label_476; // 0x1da JumpB
	var_401_bool = 1; // 0x1db MovB
	
Label_476:
	if(var_401_bool == 0) goto Label_528; // 0x1dc JumpB
	var_405_int = 3; // 0x1dd PushI
	irand(var_379_int, var_405_int); // 0x1de Func
	var_406_int = 0; // 0x1e0 PushI
	var_407_bool = var_379_int == var_406_int; // 0x1e1 Eq
	if(var_407_bool == 0) goto Label_500; // 0x1e2 JumpB
	var_408_int = var_377_int; // 0x1e3 Push
	if(var_408_int == 0) goto Label_499; // 0x1e4 JumpB
	irand(var_380_int, var_377_int); // 0x1e5 Func
	var_409_string = "all"; // 0x1e7 PushS
	var_410_string = ""; var_411_int = 0; // 0x1e8 PushV
	var_411_int = var_380_int; // 0x1e9 Mov
	func_1457(var_410_string, var_411_int); // 0x1ea NEW_2
	PlayAnimation(var_409_string, var_410_string); // 0x1ec Func
	WaitForAnimEnd(var_381_bool); // 0x1ee Func
	var_412_bool = var_381_bool == 0; // 0x1f0 Not
	if(var_412_bool == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_528; // 0x1f2 Jump
	
Label_528:
	ResetAAS(); // 0x210 Func
	return 14; // 0x212 Return
	
Label_499:
	goto Label_517; // 0x1f3 Jump
	
Label_517:
	var_413_bool = 0; // 0x205 PushV
	func_531(var_413_bool); // 0x206 NEW_2
	var_414_bool = var_413_bool == 0; // 0x208 Not
	if(var_414_bool == 0) goto Label_523; // 0x209 JumpB
	goto Label_528; // 0x20a Jump
	
Label_523:
	ResetAAS(); // 0x20b Func
	var_415_int = 1; // 0x20d PushI
	var_378_int = var_378_int + var_415_int; // 0x20e Add2
	goto Label_466; // 0x20f Jump
	
Label_500:
	var_416_int = 1; // 0x1f4 PushI
	var_417_bool = var_379_int == var_416_int; // 0x1f5 Eq
	if(var_417_bool == 0) goto Label_514; // 0x1f6 JumpB
	var_418_int = 4; // 0x1f7 PushI
	rand(var_382_float, var_418_int); // 0x1f8 Func
	var_419_int = 1; // 0x1fa PushI
	var_420_int = var_382_float + var_419_int; // 0x1fb Add
	Sleep(var_420_int, var_383_bool); // 0x1fc Func
	var_421_bool = var_383_bool == 0; // 0x1fe Not
	if(var_421_bool == 0) goto Label_513; // 0x1ff JumpB
	goto Label_528; // 0x200 Jump
	
Label_513:
	goto Label_517; // 0x201 Jump
	
Label_514:
	var_422_int = var_378_int; // 0x202 Push
	if(var_422_int == 0) goto Label_517; // 0x203 JumpB
	goto Label_528; // 0x204 Jump
}


func_1348(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x544 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x545 Func
	var_135_bool = var_132_bool; // 0x547 Push
	if(var_135_bool == 0) goto Label_1359; // 0x548 JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x549 Func
	var_136_bool = 0; // 0x54b PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x54c Func
	goto Label_1363; // 0x54e Jump
	
Label_1363:
	return 6; // 0x553 Return
	
Label_1359:
	var_137_string = "Can't find lsh animation : "; // 0x54f PushS
	var_138_int = var_137_string + var_128_string; // 0x550 Add
	Trace(var_138_int); // 0x551 Func
}


func_198(var_0_bool, var_1_object, var_280_bool, var_281_object, var_282_float, var_283_float, var_284_bool, var_285_bool)
{
	var_286_bool = 0; var_287_bool = 0; var_288_object = Obj(); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_object = Obj(); var_294_bool = 0; var_295_bool = 0; var_296_object = Obj(); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_object = Obj(); // 0xc6 PushV
	var_0_bool = 0; // 0xc7 TMovB
	var_1_object = var_281_object; // 0xc8 TMov
	var_295_bool = var_285_bool; // 0xc9 Mov
	
Label_202:
	var_302_bool = 0; var_303_object = Obj(); // 0xca PushV
	var_303_object = var_281_object; // 0xcb Mov
	func_338(var_302_bool, var_303_object); // 0xcc NEW_2
	var_306_bool = var_302_bool == 0; // 0xce Not
	if(var_306_bool == 0) goto Label_210; // 0xcf JumpB
	var_280_bool = 0; // 0xd0 MovB
	return 16; // 0xd1 Return
	
Label_210:
	GetPosition(var_297_cvector); // 0xd2 ObjFunc
	GetPosition(var_298_cvector); // 0xd4 Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0xd6 Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0xd7 Or2
	var_307_bool = 0; // 0xd8 PushV
	var_307_bool = 0; // 0xd9 MovB
	var_308_int = 0; // 0xda PushI
	var_309_bool = var_283_float > var_308_int; // 0xdb GT
	if(var_309_bool == 0) goto Label_225; // 0xdc JumpB
	var_310_float = var_283_float * var_283_float; // 0xdd Mult
	var_311_bool = var_300_float > var_310_float; // 0xde GT
	if(var_311_bool == 0) goto Label_225; // 0xdf JumpB
	var_307_bool = 1; // 0xe0 MovB
	
Label_225:
	if(var_307_bool == 0) goto Label_230; // 0xe1 JumpB
	Stop(); // 0xe2 Func
	var_280_bool = 0; // 0xe4 MovB
	return 16; // 0xe5 Return
	
Label_230:
	var_312_float = var_282_float * var_282_float; // 0xe6 Mult
	var_313_bool = var_300_float > var_312_float; // 0xe7 GT
	if(var_313_bool == 0) goto Label_292; // 0xe8 JumpB
	GetPFPosition(var_297_cvector); // 0xe9 ObjFunc
	FindPathTo(var_301_object, var_297_cvector); // 0xeb Func
	var_314_bool = var_301_object != 0; // 0xed NullNeq
	if(var_314_bool == 0) goto Label_241; // 0xee JumpB
	var_296_object = var_301_object; // 0xef Mov
	var_301_object = 0; // 0xf0 SetNull
	
Label_241:
	var_315_bool = var_296_object != 0; // 0xf1 NullNeq
	if(var_315_bool == 0) goto Label_274; // 0xf2 JumpB
	var_316_bool = var_295_bool; // 0xf3 Push
	if(var_316_bool == 0) goto Label_251; // 0xf4 JumpB
	var_295_bool = 0; // 0xf5 MovB
	RotatePath(var_296_object, var_294_bool); // 0xf6 Func
	var_317_bool = var_294_bool == 0; // 0xf8 Not
	if(var_317_bool == 0) goto Label_251; // 0xf9 JumpB
	goto Label_298; // 0xfa Jump
	
Label_298:
	var_280_bool = !var_0_bool; // 0x12a Not2
	return 16; // 0x12b Return
	
Label_251:
	var_318_int = 0; // 0xfb PushI
	var_319_float = 0.3; // 0xfc PushF
	SetTimer(var_318_int, var_319_float); // 0xfd Func
	var_320_string = ""; // 0xff PushV
	func_345(var_320_string); // 0x100 NEW_2
	var_321_string = ""; // 0x102 PushV
	func_347(var_321_string); // 0x103 NEW_2
	FollowPath(var_296_object, var_284_bool, var_294_bool, var_320_string, var_321_string); // 0x105 Func
	var_322_bool = var_294_bool == 0; // 0x107 Not
	if(var_322_bool == 0) goto Label_272; // 0x108 JumpB
	var_323_bool = var_0_bool; // 0x109 PushT
	if(var_323_bool == 0) goto Label_270; // 0x10a JumpB
	var_296_object = 0; // 0x10b SetNull
	goto Label_298; // 0x10c Jump
	
Label_270:
	goto Label_297; // 0x10e Jump
	
Label_297:
	goto Label_202; // 0x129 Jump
	
Label_272:
	var_296_object = 0; // 0x110 SetNull
	goto Label_290; // 0x111 Jump
	
Label_290:
	var_301_object = 0; // 0x122 SetNull
	goto Label_296; // 0x123 Jump
	
Label_296:
	var_296_object = 0; // 0x128 SetNull
	
Label_274:
	var_324_int = 0; // 0x112 PushI
	KillTimer(var_324_int); // 0x113 Func
	var_325_float = 0.5; // 0x115 PushF
	Sleep(var_325_float, var_294_bool); // 0x116 Func
	var_326_bool = var_294_bool == 0; // 0x118 Not
	if(var_326_bool == 0) goto Label_286; // 0x119 JumpB
	var_327_bool = var_0_bool; // 0x11a PushT
	if(var_327_bool == 0) goto Label_286; // 0x11b JumpB
	var_296_object = 0; // 0x11c SetNull
	goto Label_298; // 0x11d Jump
	
Label_286:
	var_328_int = 0; // 0x11e PushI
	var_329_float = 0.3; // 0x11f PushF
	SetTimer(var_328_int, var_329_float); // 0x120 Func
	
Label_292:
	var_330_int = 0; // 0x124 PushI
	KillTimer(var_330_int); // 0x125 Func
	goto Label_298; // 0x127 Jump
}


func_1483()
{
	var_51_string = "playsound"; // 0x5cc PushS
	var_52_string = "giveitem"; // 0x5cd PushS
	TriggerWorld(var_51_string, var_52_string); // 0x5ce Func
	return 0; // 0x5d0 Return
}


func_1489(var_17_object)
{
	var_19_string = "d4q01KeyWasted"; // 0x5d2 PushS
	var_20_int = 1; // 0x5d3 PushI
	SetVariable(var_19_string, var_20_int); // 0x5d4 Func
	var_21_string = "soborkey is given"; // 0x5d6 PushS
	Trace(var_21_string); // 0x5d7 Func
	var_22_object = Obj(); var_23_string = ""; var_24_int = 0; // 0x5d9 PushV
	var_22_object = var_17_object; // 0x5da Mov
	var_23_string = "d4q01_sobor_key"; // 0x5db MovS
	var_24_int = 1; // 0x5dc MovI
	func_1432(var_22_object, var_23_string, var_24_int); // 0x5dd NEW_2
	var_43_bool = 0; var_44_string = ""; var_45_string = ""; // 0x5df PushV
	var_44_string = "quest_d4_01"; // 0x5e0 MovS
	var_45_string = "init_sobor"; // 0x5e1 MovS
	func_1445(var_43_bool, var_44_string, var_45_string); // 0x5e2 NEW_2
	return 0; // 0x5e4 Return
}


func_1234(var_203_bool, var_204_object)
{
	var_205_int = 0; var_206_int = 0; // 0x4d2 PushV
	var_207_bool = 0; var_208_object = Obj(); // 0x4d3 PushV
	var_208_object = var_204_object; // 0x4d4 Mov
	func_1198(var_207_bool, var_208_object); // 0x4d5 NEW_2
	var_224_bool = var_207_bool == 0; // 0x4d7 Not
	if(var_224_bool == 0) goto Label_1243; // 0x4d8 JumpB
	var_203_bool = 0; // 0x4d9 MovB
	return 2; // 0x4da Return
	
Label_1243:
	var_225_bool = 0; var_226_object = Obj(); var_227_string = ""; // 0x4db PushV
	var_226_object = var_204_object; // 0x4dc Mov
	var_227_string = "noaccess"; // 0x4dd MovS
	func_1181(var_225_bool, var_226_object, var_227_string); // 0x4de NEW_2
	var_234_bool = var_225_bool == 0; // 0x4e0 Not
	if(var_234_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_203_bool = 1; // 0x4e2 MovB
	return 2; // 0x4e3 Return
	
Label_1252:
	var_235_string = "noaccess"; // 0x4e4 PushS
	GetProperty(var_235_string, var_206_int); // 0x4e5 ObjFunc
	var_236_int = 0; // 0x4e7 PushI
	var_203_bool = var_206_int == var_236_int; // 0x4e8 Eq2
	return 2; // 0x4e9 Return
}


func_338(var_302_bool, var_303_object)
{
	var_304_bool = 0; var_305_object = Obj(); // 0x153 PushV
	var_305_object = var_303_object; // 0x154 Mov
	func_1234(var_304_bool, var_305_object); // 0x155 NEW_2
	var_302_bool = var_304_bool; // 0x156 Mov
	return 0; // 0x158 Return
}


func_1364(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x554 PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x555 Func
	var_116_bool = var_113_bool; // 0x557 Push
	if(var_116_bool == 0) goto Label_1374; // 0x558 JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x559 Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x55b Func
	goto Label_1378; // 0x55d Jump
	
Label_1378:
	return 6; // 0x562 Return
	
Label_1374:
	var_117_string = "Can't find lsh animation : "; // 0x55e PushS
	var_118_int = var_117_string + var_106_string; // 0x55f Add
	Trace(var_118_int); // 0x560 Func
}


func_979(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj(); // 0x3d4 PushV
	var_17_object = var_15_object; // 0x3d5 Mov
	TaskCall(4); // 0x3d6 TaskCall
	func_533(var_18_object, var_16_int, var_17_object); // 0x3d7 NEW_2
	TaskReturn(); // 0x3d8 TaskReturn
	var_14_int = var_18_object; // 0x3d9 Mov
	return 0; // 0x3db Return
}


func_345(var_320_string)
{
	var_320_string = "walk"; // 0x159 MovS
	return 0; // 0x15a Return
}


func_347(var_321_string)
{
	var_321_string = "run"; // 0x15b MovS
	return 0; // 0x15c Return
}


func_349()
{
	
Label_349:
	func_357(var_341_bool, var_342_bool); // 0x15e NEW_2
	var_425_int = 1; // 0x160 PushI
	Sleep(var_425_int); // 0x161 Func
	goto Label_349; // 0x163 Jump
}


func_607(var_0_bool, var_1_object, var_2_bool, var_3_object, var_87_object, var_88_object)
{
	var_0_bool = var_88_object; // 0x260 TMov
	var_1_object = var_87_object; // 0x261 TMov
	var_3_object = 0; // 0x262 TMovB
	var_93_int = 1; // 0x263 PushI
	if(var_93_int == 0) goto Label_670; // 0x264 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x265 PushV
	var_95_object = var_1_object; // 0x266 MovT
	func_1536(var_95_object); // 0x267 NEW_2
	if(var_94_bool == 0) goto Label_638; // 0x269 JumpB
	var_102_string = ""; // 0x26a PushV
	var_102_string = "Neutral"; // 0x26b MovS
	func_700(var_88_object, var_102_string); // 0x26c NEW_2
	var_119_int = 509701; // 0x26e PushI
	SetMessage(var_119_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_120_int = 509702; // 0x273 PushI
	var_121_int = 10682; // 0x274 PushI
	var_122_int = 10681; // 0x275 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x276 TObjFunc
	var_123_int = 509711; // 0x278 PushI
	var_124_int = 10682; // 0x279 PushI
	var_125_int = 10691; // 0x27a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x27b TObjFunc
	goto Label_670; // 0x27d Jump
	
Label_670:
	var_126_bool = 0; // 0x29e PushV
	func_1573(var_126_bool); // 0x29f NEW_2
	if(var_126_bool == 0) goto Label_685; // 0x2a1 JumpB
	
Label_674:
	lshWaitForAnimEnd(); // 0x2a2 Func
	var_127_object = var_3_object; // 0x2a4 PushT
	if(var_127_object == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_684; // 0x2a6 Jump
	
Label_684:
	goto Label_699; // 0x2ac Jump
	
Label_699:
	return 0; // 0x2bb Return
	
Label_679:
	var_128_string = ""; // 0x2a7 PushV
	var_128_string = var_2_bool; // 0x2a8 MovT
	func_1348(var_128_string); // 0x2a9 NEW_2
	goto Label_674; // 0x2ab Jump
	
Label_685:
	var_139_string = "all"; // 0x2ad PushS
	var_140_string = "idle"; // 0x2ae PushS
	PlayAnimation(var_139_string, var_140_string); // 0x2af Func
	
Label_689:
	WaitForAnimEnd(); // 0x2b1 Func
	var_141_object = var_3_object; // 0x2b3 PushT
	if(var_141_object == 0) goto Label_694; // 0x2b4 JumpB
	goto Label_699; // 0x2b5 Jump
	
Label_694:
	var_142_string = "all"; // 0x2b6 PushS
	var_143_string = "idle"; // 0x2b7 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x2b8 Func
	goto Label_689; // 0x2ba Jump
	
Label_638:
	var_144_string = ""; // 0x27e PushV
	var_144_string = "Neutral"; // 0x27f MovS
	func_700(var_88_object, var_144_string); // 0x280 NEW_2
	var_145_int = 509712; // 0x282 PushI
	SetMessage(var_145_int); // 0x283 TObjFunc
	ClearReplies(); // 0x285 TObjFunc
	var_146_int = 509713; // 0x287 PushI
	var_147_int = 10695; // 0x288 PushI
	var_148_int = 10694; // 0x289 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x28a TObjFunc
	var_149_int = 509720; // 0x28c PushI
	var_150_int = 10702; // 0x28d PushI
	var_151_int = 10701; // 0x28e PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x28f TObjFunc
	var_152_int = 509723; // 0x291 PushI
	var_153_int = 10695; // 0x292 PushI
	var_154_int = 10705; // 0x293 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x294 TObjFunc
	var_155_int = 509724; // 0x296 PushI
	var_156_int = -1; // 0x297 PushI
	var_157_int = 10707; // 0x298 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x299 TObjFunc
	goto Label_670; // 0x29b Jump
}


func_1379()
{
	var_14_bool = 0; // 0x563 PushV
	func_1573(var_14_bool); // 0x564 NEW_2
	if(var_14_bool == 0) goto Label_1385; // 0x566 JumpB
	lshStopSpeech(); // 0x567 Func
	
Label_1385:
	return 0; // 0x569 Return
}


func_357(var_0_bool, var_1_object)
{
	var_343_float = 0; var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_bool = 0; var_347_object = Obj(); var_348_bool = 0; var_349_float = 0; var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); var_352_bool = 0; var_353_object = Obj(); var_354_bool = 0; // 0x165 PushV
	var_0_bool = 0; // 0x166 TMovB
	var_1_object = 0; // 0x167 TMovB
	var_355_float = 0.5; // 0x168 PushF
	rand(var_349_float, var_355_float); // 0x169 Func
	Sleep(var_349_float); // 0x16b Func
	
Label_365:
	var_356_bool = var_0_bool == 0; // 0x16d Not
	if(var_356_bool == 0) goto Label_415; // 0x16e JumpB
	var_357_bool = var_1_object == 0; // 0x16f Not
	if(var_357_bool == 0) goto Label_384; // 0x170 JumpB
	
Label_369:
	GetPosition(var_351_cvector); // 0x171 Func
	var_358_float = 0; // 0x173 PushV
	func_416(var_358_float); // 0x174 NEW_2
	GetRandomPFPointInCircle(var_350_cvector, var_351_cvector, var_358_float, var_352_bool); // 0x176 Func
	var_361_bool = var_352_bool; // 0x178 Push
	if(var_361_bool == 0) goto Label_379; // 0x179 JumpB
	goto Label_383; // 0x17a Jump
	
Label_383:
	goto Label_385; // 0x17f Jump
	
Label_385:
	var_362_object = Obj(); var_363_cvector = CVector(0,0,0); // 0x181 PushV
	var_363_cvector = var_350_cvector; // 0x182 Mov
	func_446(var_362_object, var_363_cvector); // 0x183 NEW_2
	var_353_object = var_362_object; // 0x184 Mov
	var_366_bool = var_353_object != 0; // 0x186 NullNeq
	if(var_366_bool == 0) goto Label_410; // 0x187 JumpB
	RotatePath(var_353_object, var_354_bool); // 0x188 Func
	var_367_bool = var_354_bool; // 0x18a Push
	if(var_367_bool == 0) goto Label_409; // 0x18b JumpB
	var_368_bool = 0; // 0x18c PushV
	func_444(var_368_bool); // 0x18d NEW_2
	FollowPath(var_353_object, var_368_bool, var_354_bool); // 0x18f Func
	var_353_object = 0; // 0x191 SetNull
	var_369_bool = var_354_bool; // 0x192 Push
	if(var_369_bool == 0) goto Label_409; // 0x193 JumpB
	TaskCall(3); // 0x195 TaskCall
	func_452(); // 0x196 NEW_2
	TaskReturn(); // 0x197 TaskReturn
	
Label_409:
	goto Label_413; // 0x199 Jump
	
Label_413:
	var_353_object = 0; // 0x19d SetNull
	goto Label_365; // 0x19e Jump
	
Label_410:
	var_423_int = 1; // 0x19a PushI
	Sleep(var_423_int); // 0x19b Func
	
Label_379:
	var_424_int = 1; // 0x17b PushI
	Sleep(var_424_int); // 0x17c Func
	goto Label_369; // 0x17e Jump
	
Label_384:
	var_1_object = 0; // 0x180 TMovB
	
Label_415:
	return 12; // 0x19f Return
}


func_1509()
{
	var_57_string = "ood4WastedMale1"; // 0x5e6 PushS
	var_58_int = 1; // 0x5e7 PushI
	SetVariable(var_57_string, var_58_int); // 0x5e8 Func
	return 0; // 0x5ea Return
}


func_1258(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0; // 0x4ea PushV
	IsLoaded(var_37_bool); // 0x4eb Func
	var_35_bool = var_37_bool; // 0x4ed Mov
	return 2; // 0x4ee Return
}


func_1515(var_71_object)
{
	var_73_string = "tvirin is given"; // 0x5ec PushS
	Trace(var_73_string); // 0x5ed Func
	var_74_object = Obj(); var_75_string = ""; var_76_int = 0; // 0x5ef PushV
	var_74_object = var_71_object; // 0x5f0 Mov
	var_75_string = "tvirin"; // 0x5f1 MovS
	var_76_int = 1; // 0x5f2 MovI
	func_1432(var_74_object, var_75_string, var_76_int); // 0x5f3 NEW_2
	return 0; // 0x5f5 Return
}


func_1386(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x56a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x56b Or
	var_58_float = sqrt(var_59_int); // 0x56c Sqrt2
	var_60_float = 0.0; // 0x56d PushF
	var_61_bool = var_58_float < var_60_float; // 0x56e LT
	if(var_61_bool == 0) goto Label_1394; // 0x56f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x570 MovV
	return 2; // 0x571 Return
	
Label_1394:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x572 Div2
	return 2; // 0x573 Return
}


func_1263(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x4ef PushV
	GetPosition(var_40_cvector); // 0x4f0 ObjFunc
	GetEyesHeight(var_39_float); // 0x4f2 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x4f4 PushE
	var_48_float = var_48_float + var_39_float; // 0x4f5 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x4f6 PopE
	GetPosition(var_41_cvector); // 0x4f7 Func
	GetEyesHeight(var_39_float); // 0x4f9 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x4fb PushE
	var_49_float = var_49_float + var_39_float; // 0x4fc Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x4fd PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x4fe Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x4ff PushE
	var_50_float = 0; // 0x500 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x501 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x502 Or
	var_52_float = sqrt(var_51_int); // 0x503 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x504 Div2
	var_43_cvector = -var_42_cvector; // 0x505 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x506 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x507 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x508 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x509 Xor2
	func_1386(var_54_cvector, var_55_cvector); // 0x50a NEW_2
	var_62_int = 25; // 0x50c PushI
	var_63_float = var_54_cvector * var_62_int; // 0x50d Mult
	var_64_int = var_53_float + var_63_float; // 0x50e Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x50f PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x510 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x511 Add2
	IsOverrideActive(var_46_bool); // 0x512 Func
	var_66_bool = var_46_bool; // 0x514 Push
	if(var_66_bool == 0) goto Label_1304; // 0x515 JumpB
	var_27_bool = 0; // 0x516 MovB
	return 18; // 0x517 Return
	
Label_1304:
	StopWorld(); // 0x518 Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x51a Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x51c PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x51d PushE
	Rotate(var_67_float, var_68_float); // 0x51e Func
	var_69_bool = 0; // 0x520 PushV
	func_1573(var_69_bool); // 0x521 NEW_2
	if(var_69_bool == 0) goto Label_1317; // 0x523 JumpB
	goto Label_1325; // 0x524 Jump
	
Label_1325:
	CameraWaitForPlayFinish(); // 0x52d Func
	ResumeWorld(); // 0x52f Func
	var_27_bool = 1; // 0x531 MovB
	return 18; // 0x532 Return
	
Label_1317:
	var_70_string = "head"; // 0x525 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x526 Func
	var_71_bool = var_47_bool; // 0x528 Push
	if(var_71_bool == 0) goto Label_1325; // 0x529 JumpB
	var_72_string = "head"; // 0x52a PushS
	LookAsyncCamera(var_72_string); // 0x52b Func
}


func_1136(var_64_bool)
{
	var_64_bool = 1; // 0x470 MovB
	return 0; // 0x471 Return
}


func_1138()
{
	StopAnimation(); // 0x472 Func
	StopGroup0(); // 0x474 Func
	return 0; // 0x476 Return
}


func_1396(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x574 PushV
	GetVariable(var_97_string, var_99_int); // 0x575 Func
	var_96_int = var_99_int; // 0x577 Mov
	return 2; // 0x578 Return
}


func_1526()
{
	var_61_int = 0; // 0x5f7 PushI
	SetReturnValue(var_61_int); // 0x5f8 ObjFunc
	return 0; // 0x5fa Return
}


func_1143(var_337_object)
{
	var_338_int = 0; var_339_object = Obj(); // 0x478 PushV
	var_339_object = var_337_object; // 0x479 Mov
	TaskCall(4); // 0x47a TaskCall
	func_533(var_340_object, var_338_int, var_339_object); // 0x47b NEW_2
	TaskReturn(); // 0x47c TaskReturn
	return 0; // 0x47e Return
}


func_1401(var_38_int, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x579 PushV
	CreateIntVector(var_41_object); // 0x57a Func
	add(var_38_int); // 0x57c ObjFunc
	add(var_39_int); // 0x57e ObjFunc
	var_42_int = 3; // 0x580 PushI
	SendWorldWndMessage(var_42_int, var_41_object); // 0x581 Func
	return 2; // 0x583 Return
}


func_1531()
{
	var_68_int = 1; // 0x5fc PushI
	SetReturnValue(var_68_int); // 0x5fd ObjFunc
	return 0; // 0x5ff Return
}


func_1151(var_333_object)
{
	var_334_bool = 0; var_335_bool = 0; // 0x47f PushV
	
Label_1152:
	IsOverrideActive(var_335_bool); // 0x480 Func
	var_336_bool = var_335_bool == 0; // 0x482 Not
	if(var_336_bool == 0) goto Label_1157; // 0x483 JumpB
	goto Label_1158; // 0x484 Jump
	
Label_1158:
	var_337_object = Obj(); // 0x486 PushV
	var_337_object = var_333_object; // 0x487 Mov
	func_1143(var_337_object); // 0x488 NEW_2
	Hold(); // 0x48a Func
	return 2; // 0x48c Return
	
Label_1157:
	goto Label_1152; // 0x485 Jump
}


