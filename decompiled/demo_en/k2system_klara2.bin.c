task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector, var_18_bool)
{
	var_19_int = 1; // 0xa2 PushI
	if(var_19_int == 0) goto Label_271; // 0xa3 JumpB
	func_1557(); // 0xa5 NEW_2
	var_21_int = 40394; // 0xa7 PushI
	var_22_bool = var_17_cvector == var_21_int; // 0xa8 Eq
	if(var_22_bool == 0) goto Label_190; // 0xa9 JumpB
	var_23_string = ""; // 0xaa PushV
	var_23_string = "Neutral"; // 0xab MovS
	func_139(var_18_bool, var_23_string); // 0xac NEW_2
	var_40_int = 538516; // 0xae PushI
	SetMessage(var_40_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_41_int = 538517; // 0xb3 PushI
	var_42_int = 40400; // 0xb4 PushI
	var_43_int = 40395; // 0xb5 PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0xb6 TObjFunc
	var_44_int = 538518; // 0xb8 PushI
	var_45_int = 40397; // 0xb9 PushI
	var_46_int = 40396; // 0xba PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_47_int = 40397; // 0xbe PushI
	var_48_bool = var_17_cvector == var_47_int; // 0xbf Eq
	if(var_48_bool == 0) goto Label_213; // 0xc0 JumpB
	var_49_string = ""; // 0xc1 PushV
	var_49_string = "Neutral"; // 0xc2 MovS
	func_139(var_18_bool, var_49_string); // 0xc3 NEW_2
	var_50_int = 538519; // 0xc5 PushI
	SetMessage(var_50_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_51_int = 538520; // 0xca PushI
	var_52_int = 40404; // 0xcb PushI
	var_53_int = 40398; // 0xcc PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0xcd TObjFunc
	var_54_int = 538521; // 0xcf PushI
	var_55_int = 40404; // 0xd0 PushI
	var_56_int = 40399; // 0xd1 PushI
	AddReply(var_54_int, var_55_int, var_56_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_57_int = 40400; // 0xd5 PushI
	var_58_bool = var_17_cvector == var_57_int; // 0xd6 Eq
	if(var_58_bool == 0) goto Label_236; // 0xd7 JumpB
	var_59_string = ""; // 0xd8 PushV
	var_59_string = "Neutral"; // 0xd9 MovS
	func_139(var_18_bool, var_59_string); // 0xda NEW_2
	var_60_int = 538522; // 0xdc PushI
	SetMessage(var_60_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_61_int = 538523; // 0xe1 PushI
	var_62_int = 40404; // 0xe2 PushI
	var_63_int = 40401; // 0xe3 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xe4 TObjFunc
	var_64_int = 538524; // 0xe6 PushI
	var_65_int = 40397; // 0xe7 PushI
	var_66_int = 40402; // 0xe8 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_67_int = 40404; // 0xec PushI
	var_68_bool = var_17_cvector == var_67_int; // 0xed Eq
	if(var_68_bool == 0) goto Label_259; // 0xee JumpB
	var_69_string = ""; // 0xef PushV
	var_69_string = "Neutral"; // 0xf0 MovS
	func_139(var_18_bool, var_69_string); // 0xf1 NEW_2
	var_70_int = 538525; // 0xf3 PushI
	SetMessage(var_70_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_71_int = 538526; // 0xf8 PushI
	var_72_int = -1; // 0xf9 PushI
	var_73_int = 40407; // 0xfa PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xfb TObjFunc
	var_74_int = 538527; // 0xfd PushI
	var_75_int = -1; // 0xfe PushI
	var_76_int = 40408; // 0xff PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_3_string = 1; // 0x103 TMovB
	var_77_bool = 0; // 0x104 PushV
	func_1633(var_77_bool); // 0x105 NEW_2
	if(var_77_bool == 0) goto Label_267; // 0x107 JumpB
	lshStopAnimation(); // 0x108 Func
	goto Label_269; // 0x10a Jump
	
Label_269:
	return 0; // 0x10d Return
	
Label_267:
	StopAnimation(); // 0x10b Func
	
Label_271:
	return 0; // 0x10f Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector, var_18_bool)
{
	var_19_int = 1; // 0x1b5 PushI
	if(var_19_int == 0) goto Label_688; // 0x1b6 JumpB
	func_1557(); // 0x1b8 NEW_2
	var_21_int = 40419; // 0x1ba PushI
	var_22_bool = var_18_bool == var_21_int; // 0x1bb Eq
	if(var_22_bool == 0) goto Label_450; // 0x1bc JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x1bd PushV
	var_23_object = var_1_object; // 0x1be MovT
	var_24_object = var_0_object; // 0x1bf MovT
	func_1641(); // 0x1c0 NEW_2
	
Label_450:
	var_33_int = 40477; // 0x1c2 PushI
	var_34_bool = var_18_bool == var_33_int; // 0x1c3 Eq
	if(var_34_bool == 0) goto Label_463; // 0x1c4 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x1c5 PushV
	var_35_object = var_1_object; // 0x1c6 MovT
	var_36_object = var_0_object; // 0x1c7 MovT
	func_1647(); // 0x1c8 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0x1ca PushV
	var_43_object = var_1_object; // 0x1cb MovT
	var_44_object = var_0_object; // 0x1cc MovT
	func_1654(); // 0x1cd NEW_2
	
Label_463:
	var_48_int = 40478; // 0x1cf PushI
	var_49_bool = var_18_bool == var_48_int; // 0x1d0 Eq
	if(var_49_bool == 0) goto Label_476; // 0x1d1 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x1d2 PushV
	var_50_object = var_1_object; // 0x1d3 MovT
	var_51_object = var_0_object; // 0x1d4 MovT
	func_1647(); // 0x1d5 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1d7 PushV
	var_52_object = var_1_object; // 0x1d8 MovT
	var_53_object = var_0_object; // 0x1d9 MovT
	func_1654(); // 0x1da NEW_2
	
Label_476:
	var_54_int = 40479; // 0x1dc PushI
	var_55_bool = var_18_bool == var_54_int; // 0x1dd Eq
	if(var_55_bool == 0) goto Label_494; // 0x1de JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x1df PushV
	var_56_object = var_1_object; // 0x1e0 MovT
	var_57_object = var_0_object; // 0x1e1 MovT
	func_1654(); // 0x1e2 NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x1e4 PushV
	var_58_object = var_1_object; // 0x1e5 MovT
	var_59_object = var_0_object; // 0x1e6 MovT
	func_1661(); // 0x1e7 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x1e9 PushV
	var_63_object = var_1_object; // 0x1ea MovT
	var_64_object = var_0_object; // 0x1eb MovT
	func_1668(); // 0x1ec NEW_2
	
Label_494:
	var_74_int = 40476; // 0x1ee PushI
	var_75_bool = var_18_bool == var_74_int; // 0x1ef Eq
	if(var_75_bool == 0) goto Label_507; // 0x1f0 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x1f1 PushV
	var_76_object = var_1_object; // 0x1f2 MovT
	var_77_object = var_0_object; // 0x1f3 MovT
	func_1647(); // 0x1f4 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0x1f6 PushV
	var_78_object = var_1_object; // 0x1f7 MovT
	var_79_object = var_0_object; // 0x1f8 MovT
	func_1654(); // 0x1f9 NEW_2
	
Label_507:
	var_80_int = 40410; // 0x1fb PushI
	var_81_bool = var_17_cvector == var_80_int; // 0x1fc Eq
	if(var_81_bool == 0) goto Label_540; // 0x1fd JumpB
	var_82_string = ""; // 0x1fe PushV
	var_82_string = "Neutral"; // 0x1ff MovS
	func_414(var_18_bool, var_82_string); // 0x200 NEW_2
	var_99_int = 538529; // 0x202 PushI
	SetMessage(var_99_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_100_bool = 0; var_101_object = Obj(); // 0x207 PushV
	var_101_object = var_1_object; // 0x208 MovT
	func_1683(var_100_bool, var_101_object); // 0x209 NEW_2
	if(var_100_bool == 0) goto Label_529; // 0x20b JumpB
	var_115_int = 538538; // 0x20c PushI
	var_116_int = 40420; // 0x20d PushI
	var_117_int = 40419; // 0x20e PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x20f TObjFunc
	
Label_529:
	var_118_int = 538535; // 0x211 PushI
	var_119_int = -1; // 0x212 PushI
	var_120_int = 40416; // 0x213 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x214 TObjFunc
	var_121_int = 538536; // 0x216 PushI
	var_122_int = -1; // 0x217 PushI
	var_123_int = 40417; // 0x218 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_124_int = 40420; // 0x21c PushI
	var_125_bool = var_17_cvector == var_124_int; // 0x21d Eq
	if(var_125_bool == 0) goto Label_568; // 0x21e JumpB
	var_126_string = ""; // 0x21f PushV
	var_126_string = "Neutral"; // 0x220 MovS
	func_414(var_18_bool, var_126_string); // 0x221 NEW_2
	var_127_int = 538539; // 0x223 PushI
	SetMessage(var_127_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_128_int = 538540; // 0x228 PushI
	var_129_int = 40426; // 0x229 PushI
	var_130_int = 40421; // 0x22a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x22b TObjFunc
	var_131_int = 538541; // 0x22d PushI
	var_132_int = 40424; // 0x22e PushI
	var_133_int = 40422; // 0x22f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x230 TObjFunc
	var_134_int = 538542; // 0x232 PushI
	var_135_int = 40425; // 0x233 PushI
	var_136_int = 40423; // 0x234 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_137_int = 40425; // 0x238 PushI
	var_138_bool = var_17_cvector == var_137_int; // 0x239 Eq
	if(var_138_bool == 0) goto Label_591; // 0x23a JumpB
	var_139_string = ""; // 0x23b PushV
	var_139_string = "Neutral"; // 0x23c MovS
	func_414(var_18_bool, var_139_string); // 0x23d NEW_2
	var_140_int = 538544; // 0x23f PushI
	SetMessage(var_140_int); // 0x240 TObjFunc
	ClearReplies(); // 0x242 TObjFunc
	var_141_int = 538587; // 0x244 PushI
	var_142_int = 40474; // 0x245 PushI
	var_143_int = 40473; // 0x246 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x247 TObjFunc
	var_144_int = 538589; // 0x249 PushI
	var_145_int = -1; // 0x24a PushI
	var_146_int = 40476; // 0x24b PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x24c TObjFunc
	return 0; // 0x24e Return
	
Label_591:
	var_147_int = 40424; // 0x24f PushI
	var_148_bool = var_17_cvector == var_147_int; // 0x250 Eq
	if(var_148_bool == 0) goto Label_630; // 0x251 JumpB
	var_149_string = ""; // 0x252 PushV
	var_149_string = "Neutral"; // 0x253 MovS
	func_414(var_18_bool, var_149_string); // 0x254 NEW_2
	var_150_int = 538543; // 0x256 PushI
	SetMessage(var_150_int); // 0x257 TObjFunc
	ClearReplies(); // 0x259 TObjFunc
	var_151_bool = 0; // 0x25b PushV
	var_151_bool = 0; // 0x25c MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x25d PushV
	var_153_object = var_1_object; // 0x25e MovT
	func_1693(var_152_bool, var_153_object); // 0x25f NEW_2
	var_163_bool = var_152_bool == 0; // 0x261 Not
	if(var_163_bool == 0) goto Label_618; // 0x262 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x263 PushV
	var_165_object = var_1_object; // 0x264 MovT
	func_1703(var_164_bool, var_165_object); // 0x265 NEW_2
	var_170_bool = var_164_bool == 0; // 0x267 Not
	if(var_170_bool == 0) goto Label_618; // 0x268 JumpB
	var_151_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_151_bool == 0) goto Label_624; // 0x26a JumpB
	var_171_int = 538592; // 0x26b PushI
	var_172_int = -1; // 0x26c PushI
	var_173_int = 40479; // 0x26d PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x26e TObjFunc
	
Label_624:
	var_174_int = 538593; // 0x270 PushI
	var_175_int = 40425; // 0x271 PushI
	var_176_int = 40480; // 0x272 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x273 TObjFunc
	return 0; // 0x275 Return
	
Label_630:
	var_177_int = 40426; // 0x276 PushI
	var_178_bool = var_17_cvector == var_177_int; // 0x277 Eq
	if(var_178_bool == 0) goto Label_653; // 0x278 JumpB
	var_179_string = ""; // 0x279 PushV
	var_179_string = "Neutral"; // 0x27a MovS
	func_414(var_18_bool, var_179_string); // 0x27b NEW_2
	var_180_int = 538545; // 0x27d PushI
	SetMessage(var_180_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_181_int = 538585; // 0x282 PushI
	var_182_int = 40424; // 0x283 PushI
	var_183_int = 40470; // 0x284 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x285 TObjFunc
	var_184_int = 538586; // 0x287 PushI
	var_185_int = 40474; // 0x288 PushI
	var_186_int = 40471; // 0x289 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x28a TObjFunc
	return 0; // 0x28c Return
	
Label_653:
	var_187_int = 40474; // 0x28d PushI
	var_188_bool = var_17_cvector == var_187_int; // 0x28e Eq
	if(var_188_bool == 0) goto Label_676; // 0x28f JumpB
	var_189_string = ""; // 0x290 PushV
	var_189_string = "Neutral"; // 0x291 MovS
	func_414(var_18_bool, var_189_string); // 0x292 NEW_2
	var_190_int = 538588; // 0x294 PushI
	SetMessage(var_190_int); // 0x295 TObjFunc
	ClearReplies(); // 0x297 TObjFunc
	var_191_int = 538590; // 0x299 PushI
	var_192_int = -1; // 0x29a PushI
	var_193_int = 40477; // 0x29b PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x29c TObjFunc
	var_194_int = 538591; // 0x29e PushI
	var_195_int = -1; // 0x29f PushI
	var_196_int = 40478; // 0x2a0 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x2a1 TObjFunc
	return 0; // 0x2a3 Return
	
Label_676:
	var_3_string = 1; // 0x2a4 TMovB
	var_197_bool = 0; // 0x2a5 PushV
	func_1633(var_197_bool); // 0x2a6 NEW_2
	if(var_197_bool == 0) goto Label_684; // 0x2a8 JumpB
	lshStopAnimation(); // 0x2a9 Func
	goto Label_686; // 0x2ab Jump
	
Label_686:
	return 0; // 0x2ae Return
	
Label_684:
	StopAnimation(); // 0x2ac Func
	
Label_688:
	return 0; // 0x2b0 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector, var_18_bool)
{
	var_19_int = 1; // 0x356 PushI
	if(var_19_int == 0) goto Label_958; // 0x357 JumpB
	func_1557(); // 0x359 NEW_2
	var_21_int = 40461; // 0x35b PushI
	var_22_bool = var_18_bool == var_21_int; // 0x35c Eq
	if(var_22_bool == 0) goto Label_867; // 0x35d JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x35e PushV
	var_23_object = var_1_object; // 0x35f MovT
	var_24_object = var_0_object; // 0x360 MovT
	func_1635(); // 0x361 NEW_2
	
Label_867:
	var_33_int = 40460; // 0x363 PushI
	var_34_bool = var_17_cvector == var_33_int; // 0x364 Eq
	if(var_34_bool == 0) goto Label_900; // 0x365 JumpB
	var_35_string = ""; // 0x366 PushV
	var_35_string = "Neutral"; // 0x367 MovS
	func_831(var_18_bool, var_35_string); // 0x368 NEW_2
	var_52_int = 538575; // 0x36a PushI
	SetMessage(var_52_int); // 0x36b TObjFunc
	ClearReplies(); // 0x36d TObjFunc
	var_53_bool = 0; var_54_object = Obj(); // 0x36f PushV
	var_54_object = var_1_object; // 0x370 MovT
	func_1673(var_53_bool, var_54_object); // 0x371 NEW_2
	if(var_53_bool == 0) goto Label_889; // 0x373 JumpB
	var_68_int = 538576; // 0x374 PushI
	var_69_int = 40462; // 0x375 PushI
	var_70_int = 40461; // 0x376 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x377 TObjFunc
	
Label_889:
	var_71_int = 538581; // 0x379 PushI
	var_72_int = -1; // 0x37a PushI
	var_73_int = 40466; // 0x37b PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x37c TObjFunc
	var_74_int = 538582; // 0x37e PushI
	var_75_int = -1; // 0x37f PushI
	var_76_int = 40467; // 0x380 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x381 TObjFunc
	return 0; // 0x383 Return
	
Label_900:
	var_77_int = 40462; // 0x384 PushI
	var_78_bool = var_17_cvector == var_77_int; // 0x385 Eq
	if(var_78_bool == 0) goto Label_923; // 0x386 JumpB
	var_79_string = ""; // 0x387 PushV
	var_79_string = "Neutral"; // 0x388 MovS
	func_831(var_18_bool, var_79_string); // 0x389 NEW_2
	var_80_int = 538577; // 0x38b PushI
	SetMessage(var_80_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_81_int = 538578; // 0x390 PushI
	var_82_int = 40464; // 0x391 PushI
	var_83_int = 40463; // 0x392 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x393 TObjFunc
	var_84_int = 538583; // 0x395 PushI
	var_85_int = -1; // 0x396 PushI
	var_86_int = 40468; // 0x397 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x398 TObjFunc
	return 0; // 0x39a Return
	
Label_923:
	var_87_int = 40464; // 0x39b PushI
	var_88_bool = var_17_cvector == var_87_int; // 0x39c Eq
	if(var_88_bool == 0) goto Label_946; // 0x39d JumpB
	var_89_string = ""; // 0x39e PushV
	var_89_string = "Neutral"; // 0x39f MovS
	func_831(var_18_bool, var_89_string); // 0x3a0 NEW_2
	var_90_int = 538579; // 0x3a2 PushI
	SetMessage(var_90_int); // 0x3a3 TObjFunc
	ClearReplies(); // 0x3a5 TObjFunc
	var_91_int = 538580; // 0x3a7 PushI
	var_92_int = -1; // 0x3a8 PushI
	var_93_int = 40465; // 0x3a9 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x3aa TObjFunc
	var_94_int = 538584; // 0x3ac PushI
	var_95_int = -1; // 0x3ad PushI
	var_96_int = 40469; // 0x3ae PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x3af TObjFunc
	return 0; // 0x3b1 Return
	
Label_946:
	var_3_string = 1; // 0x3b2 TMovB
	var_97_bool = 0; // 0x3b3 PushV
	func_1633(var_97_bool); // 0x3b4 NEW_2
	if(var_97_bool == 0) goto Label_954; // 0x3b6 JumpB
	lshStopAnimation(); // 0x3b7 Func
	goto Label_956; // 0x3b9 Jump
	
Label_956:
	return 0; // 0x3bc Return
	
Label_954:
	StopAnimation(); // 0x3ba Func
	
Label_958:
	return 0; // 0x3be Return
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_string)
{
	var_18_bool = 0; var_19_bool = 0; // 0x3c7 PushV
	var_20_string = "cleanup"; // 0x3c8 PushS
	var_21_bool = var_17_string == var_20_string; // 0x3c9 Eq
	if(var_21_bool == 0) goto Label_982; // 0x3ca JumpB
	var_1_object = 1; // 0x3cb TMovB
	IsLoaded(var_19_bool); // 0x3cc Func
	var_22_bool = var_19_bool == 0; // 0x3ce Not
	if(var_22_bool == 0) goto Label_981; // 0x3cf JumpB
	var_23_object = Obj(); // 0x3d0 PushV
	func_1564(var_23_object); // 0x3d1 NEW_2
	RemoveActor(var_23_object); // 0x3d3 Func
	
Label_981:
	goto Label_986; // 0x3d5 Jump
	
Label_986:
	return 2; // 0x3da Return
	
Label_982:
	var_26_string = "restore"; // 0x3d6 PushS
	var_27_bool = var_17_string == var_26_string; // 0x3d7 Eq
	if(var_27_bool == 0) goto Label_986; // 0x3d8 JumpB
	var_1_object = 0; // 0x3d9 TMovB
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_object = var_1_object; // 0x3db PushT
	if(var_17_object == 0) goto Label_996; // 0x3dc JumpB
	var_18_object = Obj(); // 0x3dd PushV
	func_1564(var_18_object); // 0x3de NEW_2
	RemoveActor(var_18_object); // 0x3e0 Func
	Hold(); // 0x3e2 Func
	
Label_996:
	func_1111(); // 0x3e5 NEW_2
	return 0; // 0x3e7 Return
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	func_1126(); // 0x3e9 NEW_2
	return 0; // 0x3eb Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_int)
{
	var_18_int = 10; // 0x432 PushI
	var_19_bool = var_17_int == var_18_int; // 0x433 Eq
	if(var_19_bool == 0) goto Label_1110; // 0x434 JumpB
	func_1069(); // 0x436 NEW_2
	var_21_bool = 0; // 0x438 PushV
	var_21_bool = 0; // 0x439 MovB
	var_22_bool = 0; // 0x43a PushV
	func_1283(var_22_bool); // 0x43b NEW_2
	if(var_22_bool == 0) goto Label_1091; // 0x43d JumpB
	var_25_bool = 0; // 0x43e PushV
	func_1038(var_25_bool); // 0x43f NEW_2
	if(var_25_bool == 0) goto Label_1091; // 0x441 JumpB
	var_21_bool = 1; // 0x442 MovB
	
Label_1091:
	if(var_21_bool == 0) goto Label_1104; // 0x443 JumpB
	var_42_bool = 0; // 0x444 PushV
	func_1018(var_42_bool); // 0x445 NEW_2
	if(var_42_bool == 0) goto Label_1103; // 0x447 JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0x448 PushV
	var_63_object = Obj(); // 0x449 PushV
	func_1564(var_63_object); // 0x44a NEW_2
	var_62_object = var_63_object; // 0x44b Mov
	func_1431(var_62_object); // 0x44d NEW_2
	
Label_1103:
	goto Label_1110; // 0x44f Jump
	
Label_1110:
	return 0; // 0x456 Return
	
Label_1104:
	func_1033(var_17_int); // 0x451 NEW_2
	func_1060(); // 0x454 NEW_2
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_bool)
{
	var_18_bool = var_17_bool; // 0x474 Push
	if(var_18_bool == 0) goto Label_1146; // 0x475 JumpB
	func_1060(); // 0x477 NEW_2
	goto Label_1150; // 0x479 Jump
	
Label_1150:
	return 0; // 0x47e Return
	
Label_1146:
	var_24_string = ""; // 0x47a PushV
	var_24_string = "Neutral"; // 0x47b MovS
	func_1511(var_24_string); // 0x47c NEW_2
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x47f PushV
	IsOverrideActive(var_19_bool); // 0x480 Func
	var_20_bool = var_19_bool == 0; // 0x482 Not
	if(var_20_bool == 0) goto Label_1179; // 0x483 JumpB
	EventDisable(0); // 0x484 EventDisable
	func_1251(); // 0x486 NEW_2
	var_21_bool = 0; var_22_object = Obj(); // 0x488 PushV
	var_22_object = var_17_object; // 0x489 Mov
	func_1274(var_22_object); // 0x48a NEW_2
	EventEnable(0); // 0x48c EventEnable
	var_35_object = Obj(); // 0x48d PushV
	var_35_object = var_17_object; // 0x48e Mov
	func_1802(var_35_object); // 0x48f NEW_2
	var_403_string = ""; // 0x491 PushV
	var_403_string = "Neutral"; // 0x492 MovS
	func_1511(var_403_string); // 0x493 NEW_2
	func_1069(); // 0x496 NEW_2
	func_1060(); // 0x499 NEW_2
	
Label_1179:
	return 2; // 0x49b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	func_963(); // 0x3c0 NEW_2
	return 0; // 0x3c2 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_1288(var_54_object, var_55_float); // 0x5 NEW_2
	var_99_bool = var_53_bool == 0; // 0x7 Not
	if(var_99_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_100_int = 0; // 0xd PushV
	func_1627(var_100_int); // 0xe NEW_2
	SetNPCName(var_100_int); // 0x10 ObjFunc
	var_101_int = 0; // 0x12 PushV
	func_1625(var_101_int); // 0x13 NEW_2
	SetNPCDescription(var_101_int); // 0x15 ObjFunc
	var_102_string = ""; // 0x17 PushV
	func_1629(var_102_string); // 0x18 NEW_2
	SetPhoto(var_102_string); // 0x1a ObjFunc
	var_103_string = ""; // 0x1c PushV
	func_1631(var_103_string); // 0x1d NEW_2
	SetPhoto2(var_103_string); // 0x1f ObjFunc
	var_104_int = 0; // 0x21 PushV
	func_1741(var_104_int); // 0x22 NEW_2
	SetPlayerName(var_104_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_112_bool = var_50_bool; // 0x29 Push
	if(var_112_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_113_bool = 0; var_114_object = Obj(); // 0x2f PushV
	var_115_object = Obj(); // 0x30 PushV
	func_1564(var_115_object); // 0x31 NEW_2
	var_114_object = var_115_object; // 0x32 Mov
	func_1373(var_113_bool, var_114_object); // 0x34 NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x36 PushV
	var_208_object = var_43_object; // 0x37 Mov
	var_209_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_52_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_43_object; // 0x47 Mov
	func_1356(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1018(var_42_bool)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x3fa PushV
	var_45_string = "player"; // 0x3fb PushS
	FindActor(var_44_object, var_45_string); // 0x3fc Func
	var_46_bool = var_44_object == 0; // 0x3fe Not
	if(var_46_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_42_bool = 0; // 0x400 MovB
	return 2; // 0x401 Return
	
Label_1026:
	var_47_bool = 0; var_48_object = Obj(); // 0x402 PushV
	var_48_object = var_44_object; // 0x403 Mov
	func_1274(var_48_object); // 0x404 NEW_2
	var_42_bool = var_47_bool; // 0x405 Mov
	return 2; // 0x407 Return
}


func_1283(var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; // 0x503 PushV
	IsLoaded(var_19_bool); // 0x504 Func
	var_17_bool = var_19_bool; // 0x506 Mov
	return 2; // 0x507 Return
}


func_1797()
{
	var_65_int = 0; // 0x705 PushV
	var_65_int = 1; // 0x706 MovI
	func_1787(var_65_int); // 0x707 NEW_2
	return 0; // 0x709 Return
}


func_1542(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x606 PushV
	var_151_bool = 0; // 0x607 PushV
	func_1633(var_151_bool); // 0x608 NEW_2
	if(var_151_bool == 0) goto Label_1555; // 0x60a JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x60b Func
	var_152_bool = var_150_bool; // 0x60d Push
	if(var_152_bool == 0) goto Label_1555; // 0x60e JumpB
	lshPlaySpeech(var_148_string); // 0x60f Func
	var_147_bool = 1; // 0x611 MovB
	return 2; // 0x612 Return
	
Label_1555:
	var_147_bool = 0; // 0x613 MovB
	return 2; // 0x614 Return
}


func_1288(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x508 PushV
	GetPosition(var_66_cvector); // 0x509 ObjFunc
	GetEyesHeight(var_65_float); // 0x50b ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x50d PushE
	var_74_float = var_74_float + var_65_float; // 0x50e Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x50f PopE
	GetPosition(var_67_cvector); // 0x510 Func
	GetEyesHeight(var_65_float); // 0x512 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x514 PushE
	var_75_float = var_75_float + var_65_float; // 0x515 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x516 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x517 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x518 PushE
	var_76_float = 0; // 0x519 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x51a PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x51b Or
	var_78_float = sqrt(var_77_int); // 0x51c Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x51d Div2
	var_69_cvector = -var_68_cvector; // 0x51e Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x51f Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x520 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x521 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x522 Xor2
	func_1570(var_80_cvector, var_81_cvector); // 0x523 NEW_2
	var_88_int = 25; // 0x525 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x526 Mult
	var_90_int = var_79_float + var_89_float; // 0x527 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x528 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x529 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x52a Add2
	IsOverrideActive(var_72_bool); // 0x52b Func
	var_92_bool = var_72_bool; // 0x52d Push
	if(var_92_bool == 0) goto Label_1329; // 0x52e JumpB
	var_53_bool = 0; // 0x52f MovB
	return 18; // 0x530 Return
	
Label_1329:
	StopWorld(); // 0x531 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x533 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x535 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x536 PushE
	Rotate(var_93_float, var_94_float); // 0x537 Func
	var_95_bool = 0; // 0x539 PushV
	func_1633(var_95_bool); // 0x53a NEW_2
	if(var_95_bool == 0) goto Label_1342; // 0x53c JumpB
	goto Label_1350; // 0x53d Jump
	
Label_1350:
	CameraWaitForPlayFinish(); // 0x546 Func
	ResumeWorld(); // 0x548 Func
	var_53_bool = 1; // 0x54a MovB
	return 18; // 0x54b Return
	
Label_1342:
	var_96_string = "head"; // 0x53e PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x53f Func
	var_97_bool = var_73_bool; // 0x541 Push
	if(var_97_bool == 0) goto Label_1350; // 0x542 JumpB
	var_98_string = "head"; // 0x543 PushS
	LookAsyncCamera(var_98_string); // 0x544 Func
}


func_1033(var_0_object)
{
	var_94_float = GetByIndex(var_0_object, 0); // 0x409 PushE
	var_95_float = GetByIndex(var_0_object, 2); // 0x40a PushE
	RotateAsync(var_94_float, var_95_float); // 0x40b Func
	return 0; // 0x40d Return
}


func_1802(var_35_object)
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x70a PushV
	var_40_string = "mt_klara2"; // 0x70b PushS
	GetVariable(var_40_string, var_38_int); // 0x70c Func
	var_41_bool = var_38_int == 0; // 0x70e Not
	if(var_41_bool == 0) goto Label_1818; // 0x70f JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x710 PushV
	var_43_object = var_35_object; // 0x711 Mov
	TaskCall(0); // 0x712 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x713 NEW_2
	TaskReturn(); // 0x714 TaskReturn
	var_265_string = "mt_klara2"; // 0x716 PushS
	var_266_int = 1; // 0x717 PushI
	SetVariable(var_265_string, var_266_int); // 0x718 Func
	
Label_1818:
	var_267_string = "day"; // 0x71a PushS
	GetProperty(var_267_string, var_39_int); // 0x71b Func
	var_268_int = 0; // 0x71d PushV
	func_1592(var_268_int); // 0x71e NEW_2
	var_269_bool = var_39_int == var_268_int; // 0x720 Eq
	if(var_269_bool == 0) goto Label_1833; // 0x721 JumpB
	var_270_int = 0; var_271_object = Obj(); // 0x722 PushV
	var_271_object = var_35_object; // 0x723 Mov
	TaskCall(2); // 0x724 TaskCall
	func_272(var_272_object, var_270_int, var_271_object); // 0x725 NEW_2
	TaskReturn(); // 0x726 TaskReturn
	goto Label_1839; // 0x728 Jump
	
Label_1839:
	return 4; // 0x72f Return
	
Label_1833:
	var_341_int = 0; var_342_object = Obj(); // 0x729 PushV
	var_342_object = var_35_object; // 0x72a Mov
	TaskCall(4); // 0x72b TaskCall
	func_689(var_343_object, var_341_int, var_342_object); // 0x72c NEW_2
	TaskReturn(); // 0x72d TaskReturn
}


func_1038(var_25_bool)
{
	var_26_object = Obj(); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; // 0x40e PushV
	var_30_string = "player"; // 0x40f PushS
	FindActor(var_28_object, var_30_string); // 0x410 Func
	var_31_bool = var_28_object == 0; // 0x412 Not
	if(var_31_bool == 0) goto Label_1046; // 0x413 JumpB
	var_25_bool = 0; // 0x414 MovB
	return 4; // 0x415 Return
	
Label_1046:
	var_32_float = 0; var_33_object = Obj(); // 0x416 PushV
	var_33_object = var_28_object; // 0x417 Mov
	func_1256(var_33_object); // 0x418 NEW_2
	var_40_float = 90000.0; // 0x41a PushF
	var_41_bool = var_32_float > var_40_float; // 0x41b GT
	if(var_41_bool == 0) goto Label_1055; // 0x41c JumpB
	var_25_bool = 0; // 0x41d MovB
	return 4; // 0x41e Return
	
Label_1055:
	CanSee(var_29_bool, var_28_object); // 0x41f Func
	var_25_bool = var_29_bool; // 0x421 Mov
	return 4; // 0x422 Return
}


func_272(var_0_object, var_270_int, var_271_object)
{
	var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; var_276_bool = 0; var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; // 0x110 PushV
	var_0_object = var_271_object; // 0x111 TMov
	var_281_bool = 0; var_282_object = Obj(); var_283_float = 0; // 0x112 PushV
	var_282_object = var_271_object; // 0x113 Mov
	var_283_float = 70.0; // 0x114 MovF
	func_1288(var_282_object, var_283_float); // 0x115 NEW_2
	var_284_bool = var_281_bool == 0; // 0x117 Not
	if(var_284_bool == 0) goto Label_283; // 0x118 JumpB
	var_270_int = -2; // 0x119 MovI
	return 8; // 0x11a Return
	
Label_283:
	CreateDialog(var_277_object); // 0x11b Func
	var_285_int = 0; // 0x11d PushV
	func_1627(var_285_int); // 0x11e NEW_2
	SetNPCName(var_285_int); // 0x120 ObjFunc
	var_286_int = 0; // 0x122 PushV
	func_1625(var_286_int); // 0x123 NEW_2
	SetNPCDescription(var_286_int); // 0x125 ObjFunc
	var_287_string = ""; // 0x127 PushV
	func_1629(var_287_string); // 0x128 NEW_2
	SetPhoto(var_287_string); // 0x12a ObjFunc
	var_288_string = ""; // 0x12c PushV
	func_1631(var_288_string); // 0x12d NEW_2
	SetPhoto2(var_288_string); // 0x12f ObjFunc
	var_289_int = 0; // 0x131 PushV
	func_1741(var_289_int); // 0x132 NEW_2
	SetPlayerName(var_289_int); // 0x134 ObjFunc
	var_279_int = -1; // 0x136 MovI
	IsOverrideActive(var_278_bool); // 0x137 Func
	var_290_bool = var_278_bool; // 0x139 Push
	if(var_290_bool == 0) goto Label_317; // 0x13a JumpB
	var_270_int = -2; // 0x13b MovI
	return 8; // 0x13c Return
	
Label_317:
	DoDialog(var_277_object); // 0x13d Func
	var_291_object = Obj(); var_292_object = Obj(); // 0x13f PushV
	var_291_object = var_271_object; // 0x140 Mov
	var_292_object = var_277_object; // 0x141 Mov
	TaskCall(3); // 0x142 TaskCall
	func_346(var_293_object, var_294_object, var_295_string, var_296_bool, var_291_object, var_292_object); // 0x143 NEW_2
	TaskReturn(); // 0x144 TaskReturn
	IsDialogEnd(var_280_bool); // 0x146 ObjFunc
	
Label_328:
	var_339_bool = var_280_bool == 0; // 0x148 Not
	if(var_339_bool == 0) goto Label_335; // 0x149 JumpB
	sync(); // 0x14a Func
	IsDialogEnd(var_280_bool); // 0x14c ObjFunc
	goto Label_328; // 0x14e Jump
	
Label_335:
	var_340_object = Obj(); // 0x14f PushV
	var_340_object = var_271_object; // 0x150 Mov
	func_1356(); // 0x151 NEW_2
	StopDialog(var_277_object); // 0x153 Func
	GetReturnValue(var_279_int); // 0x155 ObjFunc
	var_270_int = var_279_int; // 0x157 Mov
	return 8; // 0x158 Return
}


func_1557()
{
	var_20_bool = 0; // 0x615 PushV
	func_1633(var_20_bool); // 0x616 NEW_2
	if(var_20_bool == 0) goto Label_1563; // 0x618 JumpB
	lshStopSpeech(); // 0x619 Func
	
Label_1563:
	return 0; // 0x61b Return
}


func_1564(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x61c PushV
	self(var_117_object); // 0x61d Func
	var_115_object = var_117_object; // 0x61f Mov
	return 2; // 0x620 Return
}


func_1570(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x622 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x623 Or
	var_84_float = sqrt(var_85_int); // 0x624 Sqrt2
	var_86_float = 0.0; // 0x625 PushF
	var_87_bool = var_84_float < var_86_float; // 0x626 LT
	if(var_87_bool == 0) goto Label_1578; // 0x627 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x628 MovV
	return 2; // 0x629 Return
	
Label_1578:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x62a Div2
	return 2; // 0x62b Return
}


func_1060()
{
	var_405_float = 0; var_406_float = 0; // 0x424 PushV
	var_407_int = 8; // 0x425 PushI
	var_408_int = 16; // 0x426 PushI
	rand(var_406_float, var_407_int, var_408_int); // 0x427 Func
	var_409_int = 10; // 0x429 PushI
	SetTimer(var_409_int, var_406_float); // 0x42a Func
	return 2; // 0x42c Return
}


func_1580(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x62c PushV
	FindActor(var_41_object, var_38_string); // 0x62d Func
	var_42_bool = var_41_object == 0; // 0x62f NullEq
	if(var_42_bool == 0) goto Label_1587; // 0x630 JumpB
	var_37_bool = 0; // 0x631 MovB
	return 2; // 0x632 Return
	
Label_1587:
	Trigger(var_41_object, var_39_string); // 0x633 Func
	var_37_bool = 1; // 0x635 MovB
	return 2; // 0x636 Return
}


func_1069()
{
	var_404_int = 10; // 0x42d PushI
	KillTimer(var_404_int); // 0x42e Func
	return 0; // 0x430 Return
}


func_1592(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x638 PushV
	GetGameTime(var_170_float); // 0x639 Func
	var_171_int = 1; // 0x63b PushI
	var_172_int = 0; // 0x63c PushV
	var_173_int = 24; // 0x63d PushI
	var_172_int = var_170_float / var_170_float; // 0x63e Div2
	var_168_int = var_171_int + var_172_int; // 0x63f Add2
	return 2; // 0x640 Return
}


func_831(var_2_object, var_369_string)
{
	var_370_bool = 0; // 0x340 PushV
	func_1633(var_370_bool); // 0x341 NEW_2
	var_371_bool = var_370_bool == 0; // 0x343 Not
	if(var_371_bool == 0) goto Label_838; // 0x344 JumpB
	return 0; // 0x345 Return
	
Label_838:
	var_372_bool = var_369_string == var_2_object; // 0x346 Eq
	if(var_372_bool == 0) goto Label_841; // 0x347 JumpB
	return 0; // 0x348 Return
	
Label_841:
	var_373_string = ""; var_374_bool = 0; // 0x349 PushV
	var_373_string = var_369_string; // 0x34a Mov
	var_375_string = ""; // 0x34b PushS
	var_376_bool = var_369_string == var_375_string; // 0x34c Eq
	if(var_376_bool == 0) goto Label_848; // 0x34d JumpB
	var_374_bool = 0; // 0x34e MovB
	goto Label_849; // 0x34f Jump
	
Label_849:
	func_1527(var_373_string, var_374_bool); // 0x351 NEW_2
	var_2_object = var_369_string; // 0x353 TMov
	return 0; // 0x354 Return
	
Label_848:
	var_374_bool = 1; // 0x350 MovB
}


func_1601(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x641 PushV
	var_44_string = "idle"; // 0x642 MovS
	var_45_int = var_42_int; // 0x643 Push
	if(var_45_int == 0) goto Label_1606; // 0x644 JumpB
	var_44_string = var_44_string + var_42_int; // 0x645 Add2
	
Label_1606:
	var_41_string = var_44_string; // 0x646 Mov
	return 2; // 0x647 Return
}


func_1608(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x648 PushV
	var_38_int = 0; // 0x649 MovI
	
Label_1610:
	var_40_string = "all"; // 0x64a PushS
	var_41_string = ""; var_42_int = 0; // 0x64b PushV
	var_42_int = var_38_int; // 0x64c Mov
	func_1601(var_41_string, var_42_int); // 0x64d NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x64f Func
	var_46_bool = var_39_bool == 0; // 0x651 Not
	if(var_46_bool == 0) goto Label_1620; // 0x652 JumpB
	goto Label_1623; // 0x653 Jump
	
Label_1623:
	var_35_int = var_38_int; // 0x657 Mov
	return 4; // 0x658 Return
	
Label_1620:
	var_47_int = 1; // 0x654 PushI
	var_38_int = var_38_int + var_47_int; // 0x655 Add2
	goto Label_1610; // 0x656 Jump
}


func_1356()
{
	var_259_bool = 0; var_260_bool = 0; // 0x54c PushV
	CameraSwitchToNormal(); // 0x54d Func
	var_261_bool = 0; // 0x54f PushV
	func_1633(var_261_bool); // 0x550 NEW_2
	if(var_261_bool == 0) goto Label_1364; // 0x552 JumpB
	goto Label_1372; // 0x553 Jump
	
Label_1372:
	return 2; // 0x55c Return
	
Label_1364:
	var_262_string = "head"; // 0x554 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x555 Func
	var_263_bool = var_260_bool; // 0x557 Push
	if(var_263_bool == 0) goto Label_1372; // 0x558 JumpB
	var_264_string = "head"; // 0x559 PushS
	UnlookAsync(var_264_string); // 0x55a Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x52 TMov
	var_1_object = var_208_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_214_int = 1; // 0x55 PushI
	if(var_214_int == 0) goto Label_109; // 0x56 JumpB
	var_215_string = ""; // 0x57 PushV
	var_215_string = "Neutral"; // 0x58 MovS
	func_139(var_209_object, var_215_string); // 0x59 NEW_2
	var_232_int = 538516; // 0x5b PushI
	SetMessage(var_232_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_233_int = 538517; // 0x60 PushI
	var_234_int = 40400; // 0x61 PushI
	var_235_int = 40395; // 0x62 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x63 TObjFunc
	var_236_int = 538518; // 0x65 PushI
	var_237_int = 40397; // 0x66 PushI
	var_238_int = 40396; // 0x67 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_239_bool = 0; // 0x6d PushV
	func_1633(var_239_bool); // 0x6e NEW_2
	if(var_239_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_240_string = var_3_string; // 0x73 PushT
	if(var_240_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_241_string = ""; // 0x76 PushV
	var_241_string = var_2_object; // 0x77 MovT
	func_1511(var_241_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_252_string = "all"; // 0x7c PushS
	var_253_string = "idle"; // 0x7d PushS
	PlayAnimation(var_252_string, var_253_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_254_string = var_3_string; // 0x82 PushT
	if(var_254_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_255_string = "all"; // 0x85 PushS
	var_256_string = "idle"; // 0x86 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1111()
{
	func_1251(); // 0x458 NEW_2
	func_1069(); // 0x45b NEW_2
	lshStopSpeech(); // 0x45d Func
	lshStopAnimation(); // 0x45f Func
	StopAsync(); // 0x461 Func
	Hold(); // 0x463 Func
	return 0; // 0x465 Return
}


func_1625(var_101_int)
{
	var_101_int = 515540; // 0x659 MovI
	return 0; // 0x65a Return
}


func_346(var_0_object, var_1_object, var_2_object, var_3_string, var_291_object, var_292_object)
{
	var_0_object = var_292_object; // 0x15b TMov
	var_1_object = var_291_object; // 0x15c TMov
	var_3_string = 0; // 0x15d TMovB
	var_297_int = 1; // 0x15e PushI
	if(var_297_int == 0) goto Label_384; // 0x15f JumpB
	var_298_string = ""; // 0x160 PushV
	var_298_string = "Neutral"; // 0x161 MovS
	func_414(var_292_object, var_298_string); // 0x162 NEW_2
	var_306_int = 538529; // 0x164 PushI
	SetMessage(var_306_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_307_bool = 0; var_308_object = Obj(); // 0x169 PushV
	var_308_object = var_1_object; // 0x16a MovT
	func_1683(var_307_bool, var_308_object); // 0x16b NEW_2
	if(var_307_bool == 0) goto Label_371; // 0x16d JumpB
	var_322_int = 538538; // 0x16e PushI
	var_323_int = 40420; // 0x16f PushI
	var_324_int = 40419; // 0x170 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x171 TObjFunc
	
Label_371:
	var_325_int = 538535; // 0x173 PushI
	var_326_int = -1; // 0x174 PushI
	var_327_int = 40416; // 0x175 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x176 TObjFunc
	var_328_int = 538536; // 0x178 PushI
	var_329_int = -1; // 0x179 PushI
	var_330_int = 40417; // 0x17a PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x17b TObjFunc
	goto Label_384; // 0x17d Jump
	
Label_384:
	var_331_bool = 0; // 0x180 PushV
	func_1633(var_331_bool); // 0x181 NEW_2
	if(var_331_bool == 0) goto Label_399; // 0x183 JumpB
	
Label_388:
	lshWaitForAnimEnd(); // 0x184 Func
	var_332_string = var_3_string; // 0x186 PushT
	if(var_332_string == 0) goto Label_393; // 0x187 JumpB
	goto Label_398; // 0x188 Jump
	
Label_398:
	goto Label_413; // 0x18e Jump
	
Label_413:
	return 0; // 0x19d Return
	
Label_393:
	var_333_string = ""; // 0x189 PushV
	var_333_string = var_2_object; // 0x18a MovT
	func_1511(var_333_string); // 0x18b NEW_2
	goto Label_388; // 0x18d Jump
	
Label_399:
	var_334_string = "all"; // 0x18f PushS
	var_335_string = "idle"; // 0x190 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x191 Func
	
Label_403:
	WaitForAnimEnd(); // 0x193 Func
	var_336_string = var_3_string; // 0x195 PushT
	if(var_336_string == 0) goto Label_408; // 0x196 JumpB
	goto Label_413; // 0x197 Jump
	
Label_408:
	var_337_string = "all"; // 0x198 PushS
	var_338_string = "idle"; // 0x199 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x19a Func
	goto Label_403; // 0x19c Jump
}


func_1627(var_100_int)
{
	var_100_int = 502865; // 0x65b MovI
	return 0; // 0x65c Return
}


func_1373(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x55d PushV
	var_122_string = "voice_common"; // 0x55e PushS
	GetVariable(var_122_string, var_120_int); // 0x55f Func
	var_123_int = var_120_int; // 0x561 Push
	if(var_123_int == 0) goto Label_1411; // 0x562 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x563 PushV
	var_125_object = var_114_object; // 0x564 Mov
	func_1431(var_125_object); // 0x565 NEW_2
	var_154_bool = var_124_bool == 0; // 0x567 Not
	if(var_154_bool == 0) goto Label_1393; // 0x568 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x569 PushV
	var_156_object = var_114_object; // 0x56a Mov
	func_1468(var_156_object); // 0x56b NEW_2
	var_190_bool = var_155_bool == 0; // 0x56d Not
	if(var_190_bool == 0) goto Label_1393; // 0x56e JumpB
	var_113_bool = 0; // 0x56f MovB
	return 4; // 0x570 Return
	
Label_1393:
	var_191_int = 2; // 0x571 PushI
	irand(var_121_int, var_191_int); // 0x572 Func
	var_192_int = var_121_int; // 0x574 Push
	if(var_192_int == 0) goto Label_1406; // 0x575 JumpB
	var_193_string = "voice_common"; // 0x576 PushS
	var_194_int = 1; // 0x577 PushI
	var_195_int = var_120_int + var_194_int; // 0x578 Add
	var_196_int = 3; // 0x579 PushI
	var_197_int = var_195_int / var_196_int; // 0x57a Mod
	SetVariable(var_193_string, var_197_int); // 0x57b Func
	goto Label_1410; // 0x57d Jump
	
Label_1410:
	goto Label_1429; // 0x582 Jump
	
Label_1429:
	var_113_bool = 1; // 0x595 MovB
	return 4; // 0x596 Return
	
Label_1406:
	var_198_string = "voice_common"; // 0x57e PushS
	var_199_int = 0; // 0x57f PushI
	SetVariable(var_198_string, var_199_int); // 0x580 Func
	
Label_1411:
	var_200_bool = 0; var_201_object = Obj(); // 0x583 PushV
	var_201_object = var_114_object; // 0x584 Mov
	func_1468(var_201_object); // 0x585 NEW_2
	var_202_bool = var_200_bool == 0; // 0x587 Not
	if(var_202_bool == 0) goto Label_1425; // 0x588 JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x589 PushV
	var_204_object = var_114_object; // 0x58a Mov
	func_1431(var_204_object); // 0x58b NEW_2
	var_205_bool = var_203_bool == 0; // 0x58d Not
	if(var_205_bool == 0) goto Label_1425; // 0x58e JumpB
	var_113_bool = 0; // 0x58f MovB
	return 4; // 0x590 Return
	
Label_1425:
	var_206_string = "voice_common"; // 0x591 PushS
	var_207_int = 1; // 0x592 PushI
	SetVariable(var_206_string, var_207_int); // 0x593 Func
}


func_1629(var_102_string)
{
	var_102_string = "ui/NPC_Klara.png"; // 0x65d MovS
	return 0; // 0x65e Return
}


func_1631(var_103_string)
{
	var_103_string = "ui/NPC_Klara_b.png"; // 0x65f MovS
	return 0; // 0x660 Return
}


func_1633(var_95_bool)
{
	var_95_bool = 1; // 0x661 MovB
	return 0; // 0x662 Return
}


func_1635()
{
	var_25_string = ""; // 0x664 PushV
	var_25_string = "Late1"; // 0x665 MovS
	func_1758(var_25_string); // 0x666 NEW_2
	return 0; // 0x668 Return
}


func_1126()
{
	StopGroup0(); // 0x466 Func
	func_1069(); // 0x469 NEW_2
	var_18_string = ""; // 0x46b PushV
	var_18_string = "Neutral"; // 0x46c MovS
	func_1511(var_18_string); // 0x46d NEW_2
	func_1060(); // 0x470 NEW_2
	return 0; // 0x472 Return
}


func_1641()
{
	var_25_string = ""; // 0x66a PushV
	var_25_string = "1"; // 0x66b MovS
	func_1758(var_25_string); // 0x66c NEW_2
	return 0; // 0x66e Return
}


func_1647()
{
	var_37_bool = 0; var_38_string = ""; var_39_string = ""; // 0x670 PushV
	var_38_string = "klara2_positioner"; // 0x671 MovS
	var_39_string = "remove_klara"; // 0x672 MovS
	func_1580(var_37_bool, var_38_string, var_39_string); // 0x673 NEW_2
	return 0; // 0x675 Return
}


func_1654()
{
	var_45_bool = 0; var_46_string = ""; var_47_string = ""; // 0x677 PushV
	var_46_string = "klara2_svita_positioner"; // 0x678 MovS
	var_47_string = "place_svita"; // 0x679 MovS
	func_1580(var_45_bool, var_46_string, var_47_string); // 0x67a NEW_2
	return 0; // 0x67c Return
}


func_1661()
{
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x67e PushV
	var_61_string = "klara2_positioner"; // 0x67f MovS
	var_62_string = "klara_stay"; // 0x680 MovS
	func_1580(var_60_bool, var_61_string, var_62_string); // 0x681 NEW_2
	return 0; // 0x683 Return
}


func_1668()
{
	func_1797(); // 0x686 NEW_2
	return 0; // 0x688 Return
}


func_1673(var_378_bool, var_379_object)
{
	var_380_bool = 0; var_381_object = Obj(); // 0x68a PushV
	var_381_object = var_379_object; // 0x68b Mov
	func_1713(var_381_object); // 0x68c NEW_2
	if(var_380_bool == 0) goto Label_1681; // 0x68e JumpB
	var_378_bool = 1; // 0x68f MovB
	return 0; // 0x690 Return
	
Label_1681:
	var_378_bool = 0; // 0x691 MovB
	return 0; // 0x692 Return
}


func_139(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x8c PushV
	func_1633(var_216_bool); // 0x8d NEW_2
	var_217_bool = var_216_bool == 0; // 0x8f Not
	if(var_217_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_218_bool = var_215_string == var_2_object; // 0x92 Eq
	if(var_218_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_219_string = ""; var_220_bool = 0; // 0x95 PushV
	var_219_string = var_215_string; // 0x96 Mov
	var_221_string = ""; // 0x97 PushS
	var_222_bool = var_215_string == var_221_string; // 0x98 Eq
	if(var_222_bool == 0) goto Label_156; // 0x99 JumpB
	var_220_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1527(var_219_string, var_220_bool); // 0x9d NEW_2
	var_2_object = var_215_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_220_bool = 1; // 0x9c MovB
}


func_1683(var_307_bool, var_308_object)
{
	var_309_bool = 0; var_310_object = Obj(); // 0x694 PushV
	var_310_object = var_308_object; // 0x695 Mov
	func_1720(var_310_object); // 0x696 NEW_2
	if(var_309_bool == 0) goto Label_1691; // 0x698 JumpB
	var_307_bool = 1; // 0x699 MovB
	return 0; // 0x69a Return
	
Label_1691:
	var_307_bool = 0; // 0x69b MovB
	return 0; // 0x69c Return
}


func_1431(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x597 PushV
	var_131_string = "c"; // 0x598 MovS
	var_132_int = 0; // 0x599 MovI
	
Label_1434:
	var_136_int = 1; // 0x59a PushI
	if(var_136_int == 0) goto Label_1447; // 0x59b JumpB
	var_137_int = 1; // 0x59c PushI
	var_138_int = var_132_int + var_137_int; // 0x59d Add
	var_139_int = var_131_string + var_138_int; // 0x59e Add
	HasProperty(var_139_int, var_133_bool); // 0x59f ObjFunc
	var_140_bool = var_133_bool == 0; // 0x5a1 Not
	if(var_140_bool == 0) goto Label_1444; // 0x5a2 JumpB
	goto Label_1447; // 0x5a3 Jump
	
Label_1447:
	var_141_bool = var_132_int == 0; // 0x5a7 Not
	if(var_141_bool == 0) goto Label_1451; // 0x5a8 JumpB
	var_124_bool = 0; // 0x5a9 MovB
	return 10; // 0x5aa Return
	
Label_1451:
	var_134_int = 0; // 0x5ab MovI
	var_142_int = 1; // 0x5ac PushI
	var_143_bool = var_132_int > var_142_int; // 0x5ad GT
	if(var_143_bool == 0) goto Label_1457; // 0x5ae JumpB
	irand(var_134_int, var_132_int); // 0x5af Func
	
Label_1457:
	var_144_int = 1; // 0x5b1 PushI
	var_145_int = var_134_int + var_144_int; // 0x5b2 Add
	var_146_int = var_131_string + var_145_int; // 0x5b3 Add
	GetProperty(var_146_int, var_135_string); // 0x5b4 ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x5b6 PushV
	var_148_string = var_135_string; // 0x5b7 Mov
	func_1542(var_147_bool, var_148_string); // 0x5b8 NEW_2
	var_124_bool = var_147_bool; // 0x5b9 Mov
	return 10; // 0x5bb Return
	
Label_1444:
	var_153_int = 1; // 0x5a4 PushI
	var_132_int = var_132_int + var_153_int; // 0x5a5 Add2
	goto Label_1434; // 0x5a6 Jump
}


func_1180()
{
	var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; // 0x49c PushV
	WaitForAnimEnd(); // 0x49d Func
	var_33_bool = 0; // 0x49f PushV
	func_1283(var_33_bool); // 0x4a0 NEW_2
	var_34_bool = var_33_bool == 0; // 0x4a2 Not
	if(var_34_bool == 0) goto Label_1189; // 0x4a3 JumpB
	return 12; // 0x4a4 Return
	
Label_1189:
	var_35_int = 0; // 0x4a5 PushV
	func_1608(var_35_int); // 0x4a6 NEW_2
	var_27_int = var_35_int; // 0x4a7 Mov
	var_28_int = 0; // 0x4a9 MovI
	
Label_1194:
	var_48_bool = 0; // 0x4aa PushV
	var_48_bool = 0; // 0x4ab MovB
	var_49_int = 5; // 0x4ac PushI
	var_50_bool = var_28_int < var_49_int; // 0x4ad LT
	if(var_50_bool == 0) goto Label_1204; // 0x4ae JumpB
	var_51_bool = 0; // 0x4af PushV
	func_1283(var_51_bool); // 0x4b0 NEW_2
	if(var_51_bool == 0) goto Label_1204; // 0x4b2 JumpB
	var_48_bool = 1; // 0x4b3 MovB
	
Label_1204:
	if(var_48_bool == 0) goto Label_1246; // 0x4b4 JumpB
	var_52_bool = var_27_int == 0; // 0x4b5 Not
	if(var_52_bool == 0) goto Label_1214; // 0x4b6 JumpB
	var_53_int = 3; // 0x4b7 PushI
	Sleep(var_53_int, var_29_bool); // 0x4b8 Func
	var_54_bool = var_29_bool == 0; // 0x4ba Not
	if(var_54_bool == 0) goto Label_1213; // 0x4bb JumpB
	goto Label_1246; // 0x4bc Jump
	
Label_1246:
	ResetAAS(); // 0x4de Func
	return 12; // 0x4e0 Return
	
Label_1213:
	goto Label_1235; // 0x4bd Jump
	
Label_1235:
	var_55_bool = 0; // 0x4d3 PushV
	func_1249(var_55_bool); // 0x4d4 NEW_2
	var_56_bool = var_55_bool == 0; // 0x4d6 Not
	if(var_56_bool == 0) goto Label_1241; // 0x4d7 JumpB
	goto Label_1246; // 0x4d8 Jump
	
Label_1241:
	ResetAAS(); // 0x4d9 Func
	var_57_int = 1; // 0x4db PushI
	var_28_int = var_28_int + var_57_int; // 0x4dc Add2
	goto Label_1194; // 0x4dd Jump
	
Label_1214:
	irand(var_30_int, var_27_int); // 0x4be Func
	var_58_int = 5; // 0x4c0 PushI
	irand(var_31_int, var_58_int); // 0x4c1 Func
	var_59_int = 0; // 0x4c3 PushI
	var_60_bool = var_31_int != var_59_int; // 0x4c4 Neq
	if(var_60_bool == 0) goto Label_1223; // 0x4c5 JumpB
	var_30_int = 0; // 0x4c6 MovI
	
Label_1223:
	var_61_string = "all"; // 0x4c7 PushS
	var_62_string = ""; var_63_int = 0; // 0x4c8 PushV
	var_63_int = var_30_int; // 0x4c9 Mov
	func_1601(var_62_string, var_63_int); // 0x4ca NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x4cc Func
	WaitForAnimEnd(var_32_bool); // 0x4ce Func
	var_64_bool = var_32_bool == 0; // 0x4d0 Not
	if(var_64_bool == 0) goto Label_1235; // 0x4d1 JumpB
	goto Label_1246; // 0x4d2 Jump
}


func_1693(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_object = Obj(); // 0x69e PushV
	var_155_object = var_153_object; // 0x69f Mov
	func_1727(var_155_object); // 0x6a0 NEW_2
	if(var_154_bool == 0) goto Label_1701; // 0x6a2 JumpB
	var_152_bool = 1; // 0x6a3 MovB
	return 0; // 0x6a4 Return
	
Label_1701:
	var_152_bool = 0; // 0x6a5 MovB
	return 0; // 0x6a6 Return
}


func_414(var_2_object, var_298_string)
{
	var_299_bool = 0; // 0x19f PushV
	func_1633(var_299_bool); // 0x1a0 NEW_2
	var_300_bool = var_299_bool == 0; // 0x1a2 Not
	if(var_300_bool == 0) goto Label_421; // 0x1a3 JumpB
	return 0; // 0x1a4 Return
	
Label_421:
	var_301_bool = var_298_string == var_2_object; // 0x1a5 Eq
	if(var_301_bool == 0) goto Label_424; // 0x1a6 JumpB
	return 0; // 0x1a7 Return
	
Label_424:
	var_302_string = ""; var_303_bool = 0; // 0x1a8 PushV
	var_302_string = var_298_string; // 0x1a9 Mov
	var_304_string = ""; // 0x1aa PushS
	var_305_bool = var_298_string == var_304_string; // 0x1ab Eq
	if(var_305_bool == 0) goto Label_431; // 0x1ac JumpB
	var_303_bool = 0; // 0x1ad MovB
	goto Label_432; // 0x1ae Jump
	
Label_432:
	func_1527(var_302_string, var_303_bool); // 0x1b0 NEW_2
	var_2_object = var_298_string; // 0x1b2 TMov
	return 0; // 0x1b3 Return
	
Label_431:
	var_303_bool = 1; // 0x1af MovB
}


func_1703(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0x6a8 PushV
	var_167_object = var_165_object; // 0x6a9 Mov
	func_1734(var_167_object); // 0x6aa NEW_2
	if(var_166_bool == 0) goto Label_1711; // 0x6ac JumpB
	var_164_bool = 1; // 0x6ad MovB
	return 0; // 0x6ae Return
	
Label_1711:
	var_164_bool = 0; // 0x6af MovB
	return 0; // 0x6b0 Return
}


func_1713(var_380_bool)
{
	var_382_bool = 0; var_383_string = ""; // 0x6b2 PushV
	var_383_string = "Late1"; // 0x6b3 MovS
	func_1769(var_382_bool, var_383_string); // 0x6b4 NEW_2
	var_380_bool = var_382_bool; // 0x6b5 Mov
	return 0; // 0x6b7 Return
}


func_689(var_0_object, var_341_int, var_342_object)
{
	var_344_object = Obj(); var_345_bool = 0; var_346_int = 0; var_347_bool = 0; var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; // 0x2b1 PushV
	var_0_object = var_342_object; // 0x2b2 TMov
	var_352_bool = 0; var_353_object = Obj(); var_354_float = 0; // 0x2b3 PushV
	var_353_object = var_342_object; // 0x2b4 Mov
	var_354_float = 70.0; // 0x2b5 MovF
	func_1288(var_353_object, var_354_float); // 0x2b6 NEW_2
	var_355_bool = var_352_bool == 0; // 0x2b8 Not
	if(var_355_bool == 0) goto Label_700; // 0x2b9 JumpB
	var_341_int = -2; // 0x2ba MovI
	return 8; // 0x2bb Return
	
Label_700:
	CreateDialog(var_348_object); // 0x2bc Func
	var_356_int = 0; // 0x2be PushV
	func_1627(var_356_int); // 0x2bf NEW_2
	SetNPCName(var_356_int); // 0x2c1 ObjFunc
	var_357_int = 0; // 0x2c3 PushV
	func_1625(var_357_int); // 0x2c4 NEW_2
	SetNPCDescription(var_357_int); // 0x2c6 ObjFunc
	var_358_string = ""; // 0x2c8 PushV
	func_1629(var_358_string); // 0x2c9 NEW_2
	SetPhoto(var_358_string); // 0x2cb ObjFunc
	var_359_string = ""; // 0x2cd PushV
	func_1631(var_359_string); // 0x2ce NEW_2
	SetPhoto2(var_359_string); // 0x2d0 ObjFunc
	var_360_int = 0; // 0x2d2 PushV
	func_1741(var_360_int); // 0x2d3 NEW_2
	SetPlayerName(var_360_int); // 0x2d5 ObjFunc
	var_350_int = -1; // 0x2d7 MovI
	IsOverrideActive(var_349_bool); // 0x2d8 Func
	var_361_bool = var_349_bool; // 0x2da Push
	if(var_361_bool == 0) goto Label_734; // 0x2db JumpB
	var_341_int = -2; // 0x2dc MovI
	return 8; // 0x2dd Return
	
Label_734:
	DoDialog(var_348_object); // 0x2de Func
	var_362_object = Obj(); var_363_object = Obj(); // 0x2e0 PushV
	var_362_object = var_342_object; // 0x2e1 Mov
	var_363_object = var_348_object; // 0x2e2 Mov
	TaskCall(5); // 0x2e3 TaskCall
	func_763(var_364_object, var_365_object, var_366_string, var_367_bool, var_362_object, var_363_object); // 0x2e4 NEW_2
	TaskReturn(); // 0x2e5 TaskReturn
	IsDialogEnd(var_351_bool); // 0x2e7 ObjFunc
	
Label_745:
	var_401_bool = var_351_bool == 0; // 0x2e9 Not
	if(var_401_bool == 0) goto Label_752; // 0x2ea JumpB
	sync(); // 0x2eb Func
	IsDialogEnd(var_351_bool); // 0x2ed ObjFunc
	goto Label_745; // 0x2ef Jump
	
Label_752:
	var_402_object = Obj(); // 0x2f0 PushV
	var_402_object = var_342_object; // 0x2f1 Mov
	func_1356(); // 0x2f2 NEW_2
	StopDialog(var_348_object); // 0x2f4 Func
	GetReturnValue(var_350_int); // 0x2f6 ObjFunc
	var_341_int = var_350_int; // 0x2f8 Mov
	return 8; // 0x2f9 Return
}


func_1720(var_309_bool)
{
	var_311_bool = 0; var_312_string = ""; // 0x6b9 PushV
	var_312_string = "1"; // 0x6ba MovS
	func_1769(var_311_bool, var_312_string); // 0x6bb NEW_2
	var_309_bool = var_311_bool; // 0x6bc Mov
	return 0; // 0x6be Return
}


func_1468(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x5bc PushV
	var_167_string = "d"; // 0x5bd PushS
	var_168_int = 0; // 0x5be PushV
	func_1592(var_168_int); // 0x5bf NEW_2
	var_174_int = var_167_string + var_168_int; // 0x5c1 Add
	var_175_string = "m"; // 0x5c2 PushS
	var_162_string = var_174_int + var_175_string; // 0x5c3 Add2
	var_163_int = 0; // 0x5c4 MovI
	
Label_1477:
	var_176_int = 1; // 0x5c5 PushI
	if(var_176_int == 0) goto Label_1490; // 0x5c6 JumpB
	var_177_int = 1; // 0x5c7 PushI
	var_178_int = var_163_int + var_177_int; // 0x5c8 Add
	var_179_int = var_162_string + var_178_int; // 0x5c9 Add
	HasProperty(var_179_int, var_164_bool); // 0x5ca ObjFunc
	var_180_bool = var_164_bool == 0; // 0x5cc Not
	if(var_180_bool == 0) goto Label_1487; // 0x5cd JumpB
	goto Label_1490; // 0x5ce Jump
	
Label_1490:
	var_181_bool = var_163_int == 0; // 0x5d2 Not
	if(var_181_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_155_bool = 0; // 0x5d4 MovB
	return 10; // 0x5d5 Return
	
Label_1494:
	var_165_int = 0; // 0x5d6 MovI
	var_182_int = 1; // 0x5d7 PushI
	var_183_bool = var_163_int > var_182_int; // 0x5d8 GT
	if(var_183_bool == 0) goto Label_1500; // 0x5d9 JumpB
	irand(var_165_int, var_163_int); // 0x5da Func
	
Label_1500:
	var_184_int = 1; // 0x5dc PushI
	var_185_int = var_165_int + var_184_int; // 0x5dd Add
	var_186_int = var_162_string + var_185_int; // 0x5de Add
	GetProperty(var_186_int, var_166_string); // 0x5df ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x5e1 PushV
	var_188_string = var_166_string; // 0x5e2 Mov
	func_1542(var_187_bool, var_188_string); // 0x5e3 NEW_2
	var_155_bool = var_187_bool; // 0x5e4 Mov
	return 10; // 0x5e6 Return
	
Label_1487:
	var_189_int = 1; // 0x5cf PushI
	var_163_int = var_163_int + var_189_int; // 0x5d0 Add2
	goto Label_1477; // 0x5d1 Jump
}


func_1727(var_154_bool)
{
	var_156_int = 0; // 0x6c0 PushV
	func_1592(var_156_int); // 0x6c1 NEW_2
	var_162_int = 6; // 0x6c3 PushI
	var_154_bool = var_156_int == var_162_int; // 0x6c4 Eq2
	return 0; // 0x6c5 Return
}


func_963()
{
	func_1004(var_16_bool); // 0x3c4 NEW_2
	return 0; // 0x3c6 Return
}


func_1734(var_166_bool)
{
	var_168_int = 0; // 0x6c7 PushV
	func_1592(var_168_int); // 0x6c8 NEW_2
	var_169_int = 7; // 0x6ca PushI
	var_166_bool = var_168_int == var_169_int; // 0x6cb Eq2
	return 0; // 0x6cc Return
}


func_1741(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x6cd PushV
	var_107_string = "branch"; // 0x6ce PushS
	GetVariable(var_107_string, var_106_int); // 0x6cf Func
	var_108_int = 0; // 0x6d1 PushI
	var_109_bool = var_106_int == var_108_int; // 0x6d2 Eq
	if(var_109_bool == 0) goto Label_1751; // 0x6d3 JumpB
	var_104_int = 1; // 0x6d4 MovI
	return 2; // 0x6d5 Return
	
Label_1751:
	var_110_int = 1; // 0x6d7 PushI
	var_111_bool = var_106_int == var_110_int; // 0x6d8 Eq
	if(var_111_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_104_int = 2; // 0x6da MovI
	return 2; // 0x6db Return
	
Label_1756:
	var_104_int = 3; // 0x6dc MovI
	return 2; // 0x6dd Return
}


func_1758(var_25_string)
{
	var_26_int = 0; var_27_int = 0; // 0x6de PushV
	var_28_string = "day"; // 0x6df PushS
	GetProperty(var_28_string, var_27_int); // 0x6e0 Func
	var_29_string = "K2S_Klara2"; // 0x6e2 PushS
	var_30_int = var_29_string + var_25_string; // 0x6e3 Add
	var_31_int = var_30_int + var_27_int; // 0x6e4 Add
	var_32_int = 1; // 0x6e5 PushI
	SetVariable(var_31_int, var_32_int); // 0x6e6 Func
	return 2; // 0x6e8 Return
}


func_1249(var_55_bool)
{
	var_55_bool = 1; // 0x4e1 MovB
	return 0; // 0x4e2 Return
}


func_1251()
{
	StopAnimation(); // 0x4e3 Func
	StopGroup0(); // 0x4e5 Func
	return 0; // 0x4e7 Return
}


func_1511(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x5e7 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x5e8 Func
	var_248_bool = var_245_bool; // 0x5ea Push
	if(var_248_bool == 0) goto Label_1522; // 0x5eb JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x5ec Func
	var_249_bool = 0; // 0x5ee PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x5ef Func
	goto Label_1526; // 0x5f1 Jump
	
Label_1526:
	return 6; // 0x5f6 Return
	
Label_1522:
	var_250_string = "Can't find lsh animation : "; // 0x5f2 PushS
	var_251_int = var_250_string + var_241_string; // 0x5f3 Add
	Trace(var_251_int); // 0x5f4 Func
}


func_1256(var_32_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x4e8 PushV
	GetPosition(var_37_cvector); // 0x4e9 Func
	GetPosition(var_38_cvector); // 0x4eb ObjFunc
	var_39_cvector = var_38_cvector - var_37_cvector; // 0x4ed Sub2
	var_32_float = var_39_cvector | var_39_cvector; // 0x4ee Or2
	return 6; // 0x4ef Return
}


func_1769(var_311_bool, var_312_string)
{
	var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_int = 0; // 0x6e9 PushV
	var_317_string = "day"; // 0x6ea PushS
	GetProperty(var_317_string, var_315_int); // 0x6eb Func
	var_318_string = "K2S_Klara2"; // 0x6ed PushS
	var_319_int = var_318_string + var_312_string; // 0x6ee Add
	var_320_int = var_319_int + var_315_int; // 0x6ef Add
	GetVariable(var_320_int, var_316_int); // 0x6f0 Func
	var_321_int = 0; // 0x6f2 PushI
	var_311_bool = var_316_int == var_321_int; // 0x6f3 Eq2
	return 4; // 0x6f4 Return
}


func_1004(var_0_object)
{
	var_17_bool = 0; // 0x3ec PushV
	func_1283(var_17_bool); // 0x3ed NEW_2
	var_20_bool = var_17_bool == 0; // 0x3ef Not
	if(var_20_bool == 0) goto Label_1011; // 0x3f0 JumpB
	Hold(); // 0x3f1 Func
	
Label_1011:
	GetDirection(var_0_object); // 0x3f3 Func
	
Label_1013:
	func_1180(); // 0x3f6 NEW_2
	goto Label_1013; // 0x3f8 Jump
}


func_1264(var_25_bool, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; // 0x4f0 PushV
	GetPosition(var_30_cvector); // 0x4f1 Func
	var_31_cvector = var_26_cvector - var_30_cvector; // 0x4f3 Sub2
	var_33_float = GetByIndex(var_31_cvector, 0); // 0x4f4 PushE
	var_34_float = GetByIndex(var_31_cvector, 2); // 0x4f5 PushE
	Rotate(var_33_float, var_34_float, var_32_bool); // 0x4f6 Func
	var_25_bool = var_32_bool; // 0x4f8 Mov
	return 6; // 0x4f9 Return
}


func_1781(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x6f5 PushV
	var_71_string = "k2system_klara_day"; // 0x6f6 PushS
	GetVariable(var_71_string, var_70_int); // 0x6f7 Func
	var_68_int = var_70_int; // 0x6f9 Mov
	return 2; // 0x6fa Return
}


func_1527(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x5f7 PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x5f8 Func
	var_229_bool = var_226_bool; // 0x5fa Push
	if(var_229_bool == 0) goto Label_1537; // 0x5fb JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x5fc Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x5fe Func
	goto Label_1541; // 0x600 Jump
	
Label_1541:
	return 6; // 0x605 Return
	
Label_1537:
	var_230_string = "Can't find lsh animation : "; // 0x601 PushS
	var_231_int = var_230_string + var_219_string; // 0x602 Add
	Trace(var_231_int); // 0x603 Func
}


func_1274(var_21_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x4fa PushV
	GetPosition(var_24_cvector); // 0x4fb ObjFunc
	var_25_bool = 0; var_26_cvector = CVector(0,0,0); // 0x4fd PushV
	var_26_cvector = var_24_cvector; // 0x4fe Mov
	func_1264(var_25_bool, var_26_cvector); // 0x4ff NEW_2
	var_21_bool = var_25_bool; // 0x500 Mov
	return 2; // 0x502 Return
}


func_1787(var_65_int)
{
	var_66_int = 0; var_67_int = 0; // 0x6fb PushV
	var_68_int = 0; // 0x6fc PushV
	func_1781(var_68_int); // 0x6fd NEW_2
	var_67_int = var_68_int; // 0x6fe Mov
	var_72_string = "k2system_klara_state"; // 0x700 PushS
	var_73_int = var_72_string + var_67_int; // 0x701 Add
	SetVariable(var_73_int, var_65_int); // 0x702 Func
	return 2; // 0x704 Return
}


func_763(var_0_object, var_1_object, var_2_object, var_3_string, var_362_object, var_363_object)
{
	var_0_object = var_363_object; // 0x2fc TMov
	var_1_object = var_362_object; // 0x2fd TMov
	var_3_string = 0; // 0x2fe TMovB
	var_368_int = 1; // 0x2ff PushI
	if(var_368_int == 0) goto Label_801; // 0x300 JumpB
	var_369_string = ""; // 0x301 PushV
	var_369_string = "Neutral"; // 0x302 MovS
	func_831(var_363_object, var_369_string); // 0x303 NEW_2
	var_377_int = 538575; // 0x305 PushI
	SetMessage(var_377_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_378_bool = 0; var_379_object = Obj(); // 0x30a PushV
	var_379_object = var_1_object; // 0x30b MovT
	func_1673(var_378_bool, var_379_object); // 0x30c NEW_2
	if(var_378_bool == 0) goto Label_788; // 0x30e JumpB
	var_384_int = 538576; // 0x30f PushI
	var_385_int = 40462; // 0x310 PushI
	var_386_int = 40461; // 0x311 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x312 TObjFunc
	
Label_788:
	var_387_int = 538581; // 0x314 PushI
	var_388_int = -1; // 0x315 PushI
	var_389_int = 40466; // 0x316 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x317 TObjFunc
	var_390_int = 538582; // 0x319 PushI
	var_391_int = -1; // 0x31a PushI
	var_392_int = 40467; // 0x31b PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x31c TObjFunc
	goto Label_801; // 0x31e Jump
	
Label_801:
	var_393_bool = 0; // 0x321 PushV
	func_1633(var_393_bool); // 0x322 NEW_2
	if(var_393_bool == 0) goto Label_816; // 0x324 JumpB
	
Label_805:
	lshWaitForAnimEnd(); // 0x325 Func
	var_394_string = var_3_string; // 0x327 PushT
	if(var_394_string == 0) goto Label_810; // 0x328 JumpB
	goto Label_815; // 0x329 Jump
	
Label_815:
	goto Label_830; // 0x32f Jump
	
Label_830:
	return 0; // 0x33e Return
	
Label_810:
	var_395_string = ""; // 0x32a PushV
	var_395_string = var_2_object; // 0x32b MovT
	func_1511(var_395_string); // 0x32c NEW_2
	goto Label_805; // 0x32e Jump
	
Label_816:
	var_396_string = "all"; // 0x330 PushS
	var_397_string = "idle"; // 0x331 PushS
	PlayAnimation(var_396_string, var_397_string); // 0x332 Func
	
Label_820:
	WaitForAnimEnd(); // 0x334 Func
	var_398_string = var_3_string; // 0x336 PushT
	if(var_398_string == 0) goto Label_825; // 0x337 JumpB
	goto Label_830; // 0x338 Jump
	
Label_825:
	var_399_string = "all"; // 0x339 PushS
	var_400_string = "idle"; // 0x33a PushS
	PlayAnimation(var_399_string, var_400_string); // 0x33b Func
	goto Label_820; // 0x33d Jump
}


