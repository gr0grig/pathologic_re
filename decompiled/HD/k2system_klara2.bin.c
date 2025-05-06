task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector, var_18_bool)
{
	var_19_int = 1; // 0xa2 PushI
	if(var_19_int == 0) goto Label_271; // 0xa3 JumpB
	func_1559(); // 0xa5 NEW_2
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
	func_1635(var_77_bool); // 0x105 NEW_2
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
	func_1559(); // 0x1b8 NEW_2
	var_21_int = 40419; // 0x1ba PushI
	var_22_bool = var_18_bool == var_21_int; // 0x1bb Eq
	if(var_22_bool == 0) goto Label_450; // 0x1bc JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x1bd PushV
	var_23_object = var_1_object; // 0x1be MovT
	var_24_object = var_0_object; // 0x1bf MovT
	func_1643(); // 0x1c0 NEW_2
	
Label_450:
	var_33_int = 40477; // 0x1c2 PushI
	var_34_bool = var_18_bool == var_33_int; // 0x1c3 Eq
	if(var_34_bool == 0) goto Label_463; // 0x1c4 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0x1c5 PushV
	var_35_object = var_1_object; // 0x1c6 MovT
	var_36_object = var_0_object; // 0x1c7 MovT
	func_1649(); // 0x1c8 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0x1ca PushV
	var_43_object = var_1_object; // 0x1cb MovT
	var_44_object = var_0_object; // 0x1cc MovT
	func_1656(); // 0x1cd NEW_2
	
Label_463:
	var_48_int = 40478; // 0x1cf PushI
	var_49_bool = var_18_bool == var_48_int; // 0x1d0 Eq
	if(var_49_bool == 0) goto Label_476; // 0x1d1 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x1d2 PushV
	var_50_object = var_1_object; // 0x1d3 MovT
	var_51_object = var_0_object; // 0x1d4 MovT
	func_1649(); // 0x1d5 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1d7 PushV
	var_52_object = var_1_object; // 0x1d8 MovT
	var_53_object = var_0_object; // 0x1d9 MovT
	func_1656(); // 0x1da NEW_2
	
Label_476:
	var_54_int = 40479; // 0x1dc PushI
	var_55_bool = var_18_bool == var_54_int; // 0x1dd Eq
	if(var_55_bool == 0) goto Label_494; // 0x1de JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x1df PushV
	var_56_object = var_1_object; // 0x1e0 MovT
	var_57_object = var_0_object; // 0x1e1 MovT
	func_1656(); // 0x1e2 NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x1e4 PushV
	var_58_object = var_1_object; // 0x1e5 MovT
	var_59_object = var_0_object; // 0x1e6 MovT
	func_1663(); // 0x1e7 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x1e9 PushV
	var_63_object = var_1_object; // 0x1ea MovT
	var_64_object = var_0_object; // 0x1eb MovT
	func_1670(); // 0x1ec NEW_2
	
Label_494:
	var_74_int = 40476; // 0x1ee PushI
	var_75_bool = var_18_bool == var_74_int; // 0x1ef Eq
	if(var_75_bool == 0) goto Label_507; // 0x1f0 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x1f1 PushV
	var_76_object = var_1_object; // 0x1f2 MovT
	var_77_object = var_0_object; // 0x1f3 MovT
	func_1649(); // 0x1f4 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0x1f6 PushV
	var_78_object = var_1_object; // 0x1f7 MovT
	var_79_object = var_0_object; // 0x1f8 MovT
	func_1656(); // 0x1f9 NEW_2
	
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
	func_1685(var_100_bool, var_101_object); // 0x209 NEW_2
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
	func_1695(var_152_bool, var_153_object); // 0x25f NEW_2
	var_163_bool = var_152_bool == 0; // 0x261 Not
	if(var_163_bool == 0) goto Label_618; // 0x262 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x263 PushV
	var_165_object = var_1_object; // 0x264 MovT
	func_1705(var_164_bool, var_165_object); // 0x265 NEW_2
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
	func_1635(var_197_bool); // 0x2a6 NEW_2
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
	func_1559(); // 0x359 NEW_2
	var_21_int = 40461; // 0x35b PushI
	var_22_bool = var_18_bool == var_21_int; // 0x35c Eq
	if(var_22_bool == 0) goto Label_867; // 0x35d JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x35e PushV
	var_23_object = var_1_object; // 0x35f MovT
	var_24_object = var_0_object; // 0x360 MovT
	func_1637(); // 0x361 NEW_2
	
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
	func_1675(var_53_bool, var_54_object); // 0x371 NEW_2
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
	func_1635(var_97_bool); // 0x3b4 NEW_2
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
	func_1566(var_23_object); // 0x3d1 NEW_2
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
	func_1566(var_18_object); // 0x3de NEW_2
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
	func_1566(var_63_object); // 0x44a NEW_2
	var_62_object = var_63_object; // 0x44b Mov
	func_1433(var_62_object); // 0x44d NEW_2
	
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
	func_1513(var_24_string); // 0x47c NEW_2
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
	func_1804(var_35_object); // 0x48f NEW_2
	var_406_string = ""; // 0x491 PushV
	var_406_string = "Neutral"; // 0x492 MovS
	func_1513(var_406_string); // 0x493 NEW_2
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
	var_100_bool = var_53_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_1629(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_1627(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_1631(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_1633(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_1743(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_113_bool = var_50_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_114_bool = 0; var_115_object = Obj(); // 0x2f PushV
	var_116_object = Obj(); // 0x30 PushV
	func_1566(var_116_object); // 0x31 NEW_2
	var_115_object = var_116_object; // 0x32 Mov
	func_1375(var_114_bool, var_115_object); // 0x34 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x36 PushV
	var_209_object = var_43_object; // 0x37 Mov
	var_210_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_52_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_43_object; // 0x47 Mov
	func_1357(); // 0x48 NEW_2
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


func_1799()
{
	var_65_int = 0; // 0x707 PushV
	var_65_int = 1; // 0x708 MovI
	func_1789(var_65_int); // 0x709 NEW_2
	return 0; // 0x70b Return
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
	func_1572(var_80_cvector, var_81_cvector); // 0x523 NEW_2
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
	var_93_bool = 1; // 0x533 PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x534 Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x536 PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x537 PushE
	Rotate(var_94_float, var_95_float); // 0x538 Func
	var_96_bool = 0; // 0x53a PushV
	func_1635(var_96_bool); // 0x53b NEW_2
	if(var_96_bool == 0) goto Label_1343; // 0x53d JumpB
	goto Label_1351; // 0x53e Jump
	
Label_1351:
	CameraWaitForPlayFinish(); // 0x547 Func
	ResumeWorld(); // 0x549 Func
	var_53_bool = 1; // 0x54b MovB
	return 18; // 0x54c Return
	
Label_1343:
	var_97_string = "head"; // 0x53f PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x540 Func
	var_98_bool = var_73_bool; // 0x542 Push
	if(var_98_bool == 0) goto Label_1351; // 0x543 JumpB
	var_99_string = "head"; // 0x544 PushS
	LookAsyncCamera(var_99_string); // 0x545 Func
}


func_1033(var_0_object)
{
	var_94_float = GetByIndex(var_0_object, 0); // 0x409 PushE
	var_95_float = GetByIndex(var_0_object, 2); // 0x40a PushE
	RotateAsync(var_94_float, var_95_float); // 0x40b Func
	return 0; // 0x40d Return
}


func_1544(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x608 PushV
	var_152_bool = 0; // 0x609 PushV
	func_1635(var_152_bool); // 0x60a NEW_2
	if(var_152_bool == 0) goto Label_1557; // 0x60c JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x60d Func
	var_153_bool = var_151_bool; // 0x60f Push
	if(var_153_bool == 0) goto Label_1557; // 0x610 JumpB
	lshPlaySpeech(var_149_string); // 0x611 Func
	var_148_bool = 1; // 0x613 MovB
	return 2; // 0x614 Return
	
Label_1557:
	var_148_bool = 0; // 0x615 MovB
	return 2; // 0x616 Return
}


func_1804(var_35_object)
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; // 0x70c PushV
	var_40_string = "mt_klara2"; // 0x70d PushS
	GetVariable(var_40_string, var_38_int); // 0x70e Func
	var_41_bool = var_38_int == 0; // 0x710 Not
	if(var_41_bool == 0) goto Label_1823; // 0x711 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x712 PushV
	var_43_object = var_35_object; // 0x713 Mov
	TaskCall(0); // 0x714 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x715 NEW_2
	TaskReturn(); // 0x716 TaskReturn
	var_267_string = "mt_klara2"; // 0x718 PushS
	var_268_int = 1; // 0x719 PushI
	SetVariable(var_267_string, var_268_int); // 0x71a Func
	var_269_string = "ACHIEVEMENT_SOMETHING"; // 0x71c PushS
	UnlockAchievement(var_269_string); // 0x71d Func
	
Label_1823:
	var_270_string = "day"; // 0x71f PushS
	GetProperty(var_270_string, var_39_int); // 0x720 Func
	var_271_int = 0; // 0x722 PushV
	func_1594(var_271_int); // 0x723 NEW_2
	var_272_bool = var_39_int == var_271_int; // 0x725 Eq
	if(var_272_bool == 0) goto Label_1838; // 0x726 JumpB
	var_273_int = 0; var_274_object = Obj(); // 0x727 PushV
	var_274_object = var_35_object; // 0x728 Mov
	TaskCall(2); // 0x729 TaskCall
	func_272(var_275_object, var_273_int, var_274_object); // 0x72a NEW_2
	TaskReturn(); // 0x72b TaskReturn
	goto Label_1844; // 0x72d Jump
	
Label_1844:
	return 4; // 0x734 Return
	
Label_1838:
	var_344_int = 0; var_345_object = Obj(); // 0x72e PushV
	var_345_object = var_35_object; // 0x72f Mov
	TaskCall(4); // 0x730 TaskCall
	func_689(var_346_object, var_344_int, var_345_object); // 0x731 NEW_2
	TaskReturn(); // 0x732 TaskReturn
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


func_272(var_0_object, var_273_int, var_274_object)
{
	var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0; // 0x110 PushV
	var_0_object = var_274_object; // 0x111 TMov
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; // 0x112 PushV
	var_285_object = var_274_object; // 0x113 Mov
	var_286_float = 70.0; // 0x114 MovF
	func_1288(var_285_object, var_286_float); // 0x115 NEW_2
	var_287_bool = var_284_bool == 0; // 0x117 Not
	if(var_287_bool == 0) goto Label_283; // 0x118 JumpB
	var_273_int = -2; // 0x119 MovI
	return 8; // 0x11a Return
	
Label_283:
	CreateDialog(var_280_object); // 0x11b Func
	var_288_int = 0; // 0x11d PushV
	func_1629(var_288_int); // 0x11e NEW_2
	SetNPCName(var_288_int); // 0x120 ObjFunc
	var_289_int = 0; // 0x122 PushV
	func_1627(var_289_int); // 0x123 NEW_2
	SetNPCDescription(var_289_int); // 0x125 ObjFunc
	var_290_string = ""; // 0x127 PushV
	func_1631(var_290_string); // 0x128 NEW_2
	SetPhoto(var_290_string); // 0x12a ObjFunc
	var_291_string = ""; // 0x12c PushV
	func_1633(var_291_string); // 0x12d NEW_2
	SetPhoto2(var_291_string); // 0x12f ObjFunc
	var_292_int = 0; // 0x131 PushV
	func_1743(var_292_int); // 0x132 NEW_2
	SetPlayerName(var_292_int); // 0x134 ObjFunc
	var_282_int = -1; // 0x136 MovI
	IsOverrideActive(var_281_bool); // 0x137 Func
	var_293_bool = var_281_bool; // 0x139 Push
	if(var_293_bool == 0) goto Label_317; // 0x13a JumpB
	var_273_int = -2; // 0x13b MovI
	return 8; // 0x13c Return
	
Label_317:
	DoDialog(var_280_object); // 0x13d Func
	var_294_object = Obj(); var_295_object = Obj(); // 0x13f PushV
	var_294_object = var_274_object; // 0x140 Mov
	var_295_object = var_280_object; // 0x141 Mov
	TaskCall(3); // 0x142 TaskCall
	func_346(var_296_object, var_297_object, var_298_string, var_299_bool, var_294_object, var_295_object); // 0x143 NEW_2
	TaskReturn(); // 0x144 TaskReturn
	IsDialogEnd(var_283_bool); // 0x146 ObjFunc
	
Label_328:
	var_342_bool = var_283_bool == 0; // 0x148 Not
	if(var_342_bool == 0) goto Label_335; // 0x149 JumpB
	sync(); // 0x14a Func
	IsDialogEnd(var_283_bool); // 0x14c ObjFunc
	goto Label_328; // 0x14e Jump
	
Label_335:
	var_343_object = Obj(); // 0x14f PushV
	var_343_object = var_274_object; // 0x150 Mov
	func_1357(); // 0x151 NEW_2
	StopDialog(var_280_object); // 0x153 Func
	GetReturnValue(var_282_int); // 0x155 ObjFunc
	var_273_int = var_282_int; // 0x157 Mov
	return 8; // 0x158 Return
}


func_1559()
{
	var_20_bool = 0; // 0x617 PushV
	func_1635(var_20_bool); // 0x618 NEW_2
	if(var_20_bool == 0) goto Label_1565; // 0x61a JumpB
	lshStopSpeech(); // 0x61b Func
	
Label_1565:
	return 0; // 0x61d Return
}


func_1566(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x61e PushV
	self(var_118_object); // 0x61f Func
	var_116_object = var_118_object; // 0x621 Mov
	return 2; // 0x622 Return
}


func_1060()
{
	var_408_float = 0; var_409_float = 0; // 0x424 PushV
	var_410_int = 8; // 0x425 PushI
	var_411_int = 16; // 0x426 PushI
	rand(var_409_float, var_410_int, var_411_int); // 0x427 Func
	var_412_int = 10; // 0x429 PushI
	SetTimer(var_412_int, var_409_float); // 0x42a Func
	return 2; // 0x42c Return
}


func_1572(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x624 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x625 Or
	var_84_float = sqrt(var_85_int); // 0x626 Sqrt2
	var_86_float = 0.0; // 0x627 PushF
	var_87_bool = var_84_float < var_86_float; // 0x628 LT
	if(var_87_bool == 0) goto Label_1580; // 0x629 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x62a MovV
	return 2; // 0x62b Return
	
Label_1580:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x62c Div2
	return 2; // 0x62d Return
}


func_1069()
{
	var_407_int = 10; // 0x42d PushI
	KillTimer(var_407_int); // 0x42e Func
	return 0; // 0x430 Return
}


func_1582(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x62e PushV
	FindActor(var_41_object, var_38_string); // 0x62f Func
	var_42_bool = var_41_object == 0; // 0x631 NullEq
	if(var_42_bool == 0) goto Label_1589; // 0x632 JumpB
	var_37_bool = 0; // 0x633 MovB
	return 2; // 0x634 Return
	
Label_1589:
	Trigger(var_41_object, var_39_string); // 0x635 Func
	var_37_bool = 1; // 0x637 MovB
	return 2; // 0x638 Return
}


func_1594(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x63a PushV
	GetGameTime(var_171_float); // 0x63b Func
	var_172_int = 1; // 0x63d PushI
	var_173_int = 0; // 0x63e PushV
	var_174_int = 24; // 0x63f PushI
	var_173_int = var_171_float / var_171_float; // 0x640 Div2
	var_169_int = var_172_int + var_173_int; // 0x641 Add2
	return 2; // 0x642 Return
}


func_831(var_2_object, var_372_string)
{
	var_373_bool = 0; // 0x340 PushV
	func_1635(var_373_bool); // 0x341 NEW_2
	var_374_bool = var_373_bool == 0; // 0x343 Not
	if(var_374_bool == 0) goto Label_838; // 0x344 JumpB
	return 0; // 0x345 Return
	
Label_838:
	var_375_bool = var_372_string == var_2_object; // 0x346 Eq
	if(var_375_bool == 0) goto Label_841; // 0x347 JumpB
	return 0; // 0x348 Return
	
Label_841:
	var_376_string = ""; var_377_bool = 0; // 0x349 PushV
	var_376_string = var_372_string; // 0x34a Mov
	var_378_string = ""; // 0x34b PushS
	var_379_bool = var_372_string == var_378_string; // 0x34c Eq
	if(var_379_bool == 0) goto Label_848; // 0x34d JumpB
	var_377_bool = 0; // 0x34e MovB
	goto Label_849; // 0x34f Jump
	
Label_849:
	func_1529(var_376_string, var_377_bool); // 0x351 NEW_2
	var_2_object = var_372_string; // 0x353 TMov
	return 0; // 0x354 Return
	
Label_848:
	var_377_bool = 1; // 0x350 MovB
}


func_1603(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x643 PushV
	var_44_string = "idle"; // 0x644 MovS
	var_45_int = var_42_int; // 0x645 Push
	if(var_45_int == 0) goto Label_1608; // 0x646 JumpB
	var_44_string = var_44_string + var_42_int; // 0x647 Add2
	
Label_1608:
	var_41_string = var_44_string; // 0x648 Mov
	return 2; // 0x649 Return
}


func_1610(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x64a PushV
	var_38_int = 0; // 0x64b MovI
	
Label_1612:
	var_40_string = "all"; // 0x64c PushS
	var_41_string = ""; var_42_int = 0; // 0x64d PushV
	var_42_int = var_38_int; // 0x64e Mov
	func_1603(var_41_string, var_42_int); // 0x64f NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x651 Func
	var_46_bool = var_39_bool == 0; // 0x653 Not
	if(var_46_bool == 0) goto Label_1622; // 0x654 JumpB
	goto Label_1625; // 0x655 Jump
	
Label_1625:
	var_35_int = var_38_int; // 0x659 Mov
	return 4; // 0x65a Return
	
Label_1622:
	var_47_int = 1; // 0x656 PushI
	var_38_int = var_38_int + var_47_int; // 0x657 Add2
	goto Label_1612; // 0x658 Jump
}


func_1357()
{
	var_260_bool = 0; var_261_bool = 0; // 0x54d PushV
	var_262_bool = 1; // 0x54e PushB
	CameraSwitchToNormal(var_262_bool); // 0x54f Func
	var_263_bool = 0; // 0x551 PushV
	func_1635(var_263_bool); // 0x552 NEW_2
	if(var_263_bool == 0) goto Label_1366; // 0x554 JumpB
	goto Label_1374; // 0x555 Jump
	
Label_1374:
	return 2; // 0x55e Return
	
Label_1366:
	var_264_string = "head"; // 0x556 PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x557 Func
	var_265_bool = var_261_bool; // 0x559 Push
	if(var_265_bool == 0) goto Label_1374; // 0x55a JumpB
	var_266_string = "head"; // 0x55b PushS
	UnlookAsync(var_266_string); // 0x55c Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object; // 0x52 TMov
	var_1_object = var_209_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_215_int = 1; // 0x55 PushI
	if(var_215_int == 0) goto Label_109; // 0x56 JumpB
	var_216_string = ""; // 0x57 PushV
	var_216_string = "Neutral"; // 0x58 MovS
	func_139(var_210_object, var_216_string); // 0x59 NEW_2
	var_233_int = 538516; // 0x5b PushI
	SetMessage(var_233_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_234_int = 538517; // 0x60 PushI
	var_235_int = 40400; // 0x61 PushI
	var_236_int = 40395; // 0x62 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x63 TObjFunc
	var_237_int = 538518; // 0x65 PushI
	var_238_int = 40397; // 0x66 PushI
	var_239_int = 40396; // 0x67 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_240_bool = 0; // 0x6d PushV
	func_1635(var_240_bool); // 0x6e NEW_2
	if(var_240_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_241_string = var_3_string; // 0x73 PushT
	if(var_241_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_242_string = ""; // 0x76 PushV
	var_242_string = var_2_object; // 0x77 MovT
	func_1513(var_242_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_253_string = "all"; // 0x7c PushS
	var_254_string = "idle"; // 0x7d PushS
	PlayAnimation(var_253_string, var_254_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_255_string = var_3_string; // 0x82 PushT
	if(var_255_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_256_string = "all"; // 0x85 PushS
	var_257_string = "idle"; // 0x86 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x87 Func
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


func_346(var_0_object, var_1_object, var_2_object, var_3_string, var_294_object, var_295_object)
{
	var_0_object = var_295_object; // 0x15b TMov
	var_1_object = var_294_object; // 0x15c TMov
	var_3_string = 0; // 0x15d TMovB
	var_300_int = 1; // 0x15e PushI
	if(var_300_int == 0) goto Label_384; // 0x15f JumpB
	var_301_string = ""; // 0x160 PushV
	var_301_string = "Neutral"; // 0x161 MovS
	func_414(var_295_object, var_301_string); // 0x162 NEW_2
	var_309_int = 538529; // 0x164 PushI
	SetMessage(var_309_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_310_bool = 0; var_311_object = Obj(); // 0x169 PushV
	var_311_object = var_1_object; // 0x16a MovT
	func_1685(var_310_bool, var_311_object); // 0x16b NEW_2
	if(var_310_bool == 0) goto Label_371; // 0x16d JumpB
	var_325_int = 538538; // 0x16e PushI
	var_326_int = 40420; // 0x16f PushI
	var_327_int = 40419; // 0x170 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x171 TObjFunc
	
Label_371:
	var_328_int = 538535; // 0x173 PushI
	var_329_int = -1; // 0x174 PushI
	var_330_int = 40416; // 0x175 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x176 TObjFunc
	var_331_int = 538536; // 0x178 PushI
	var_332_int = -1; // 0x179 PushI
	var_333_int = 40417; // 0x17a PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x17b TObjFunc
	goto Label_384; // 0x17d Jump
	
Label_384:
	var_334_bool = 0; // 0x180 PushV
	func_1635(var_334_bool); // 0x181 NEW_2
	if(var_334_bool == 0) goto Label_399; // 0x183 JumpB
	
Label_388:
	lshWaitForAnimEnd(); // 0x184 Func
	var_335_string = var_3_string; // 0x186 PushT
	if(var_335_string == 0) goto Label_393; // 0x187 JumpB
	goto Label_398; // 0x188 Jump
	
Label_398:
	goto Label_413; // 0x18e Jump
	
Label_413:
	return 0; // 0x19d Return
	
Label_393:
	var_336_string = ""; // 0x189 PushV
	var_336_string = var_2_object; // 0x18a MovT
	func_1513(var_336_string); // 0x18b NEW_2
	goto Label_388; // 0x18d Jump
	
Label_399:
	var_337_string = "all"; // 0x18f PushS
	var_338_string = "idle"; // 0x190 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x191 Func
	
Label_403:
	WaitForAnimEnd(); // 0x193 Func
	var_339_string = var_3_string; // 0x195 PushT
	if(var_339_string == 0) goto Label_408; // 0x196 JumpB
	goto Label_413; // 0x197 Jump
	
Label_408:
	var_340_string = "all"; // 0x198 PushS
	var_341_string = "idle"; // 0x199 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x19a Func
	goto Label_403; // 0x19c Jump
}


func_1627(var_102_int)
{
	var_102_int = 515540; // 0x65b MovI
	return 0; // 0x65c Return
}


func_1629(var_101_int)
{
	var_101_int = 502865; // 0x65d MovI
	return 0; // 0x65e Return
}


func_1375(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x55f PushV
	var_123_string = "voice_common"; // 0x560 PushS
	GetVariable(var_123_string, var_121_int); // 0x561 Func
	var_124_int = var_121_int; // 0x563 Push
	if(var_124_int == 0) goto Label_1413; // 0x564 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x565 PushV
	var_126_object = var_115_object; // 0x566 Mov
	func_1433(var_126_object); // 0x567 NEW_2
	var_155_bool = var_125_bool == 0; // 0x569 Not
	if(var_155_bool == 0) goto Label_1395; // 0x56a JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x56b PushV
	var_157_object = var_115_object; // 0x56c Mov
	func_1470(var_157_object); // 0x56d NEW_2
	var_191_bool = var_156_bool == 0; // 0x56f Not
	if(var_191_bool == 0) goto Label_1395; // 0x570 JumpB
	var_114_bool = 0; // 0x571 MovB
	return 4; // 0x572 Return
	
Label_1395:
	var_192_int = 2; // 0x573 PushI
	irand(var_122_int, var_192_int); // 0x574 Func
	var_193_int = var_122_int; // 0x576 Push
	if(var_193_int == 0) goto Label_1408; // 0x577 JumpB
	var_194_string = "voice_common"; // 0x578 PushS
	var_195_int = 1; // 0x579 PushI
	var_196_int = var_121_int + var_195_int; // 0x57a Add
	var_197_int = 3; // 0x57b PushI
	var_198_int = var_196_int / var_197_int; // 0x57c Mod
	SetVariable(var_194_string, var_198_int); // 0x57d Func
	goto Label_1412; // 0x57f Jump
	
Label_1412:
	goto Label_1431; // 0x584 Jump
	
Label_1431:
	var_114_bool = 1; // 0x597 MovB
	return 4; // 0x598 Return
	
Label_1408:
	var_199_string = "voice_common"; // 0x580 PushS
	var_200_int = 0; // 0x581 PushI
	SetVariable(var_199_string, var_200_int); // 0x582 Func
	
Label_1413:
	var_201_bool = 0; var_202_object = Obj(); // 0x585 PushV
	var_202_object = var_115_object; // 0x586 Mov
	func_1470(var_202_object); // 0x587 NEW_2
	var_203_bool = var_201_bool == 0; // 0x589 Not
	if(var_203_bool == 0) goto Label_1427; // 0x58a JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x58b PushV
	var_205_object = var_115_object; // 0x58c Mov
	func_1433(var_205_object); // 0x58d NEW_2
	var_206_bool = var_204_bool == 0; // 0x58f Not
	if(var_206_bool == 0) goto Label_1427; // 0x590 JumpB
	var_114_bool = 0; // 0x591 MovB
	return 4; // 0x592 Return
	
Label_1427:
	var_207_string = "voice_common"; // 0x593 PushS
	var_208_int = 1; // 0x594 PushI
	SetVariable(var_207_string, var_208_int); // 0x595 Func
}


func_1631(var_103_string)
{
	var_103_string = "ui/NPC_Klara.png"; // 0x65f MovS
	return 0; // 0x660 Return
}


func_1633(var_104_string)
{
	var_104_string = "ui/NPC_Klara_b.png"; // 0x661 MovS
	return 0; // 0x662 Return
}


func_1635(var_96_bool)
{
	var_96_bool = 1; // 0x663 MovB
	return 0; // 0x664 Return
}


func_1637()
{
	var_25_string = ""; // 0x666 PushV
	var_25_string = "Late1"; // 0x667 MovS
	func_1760(var_25_string); // 0x668 NEW_2
	return 0; // 0x66a Return
}


func_1126()
{
	StopGroup0(); // 0x466 Func
	func_1069(); // 0x469 NEW_2
	var_18_string = ""; // 0x46b PushV
	var_18_string = "Neutral"; // 0x46c MovS
	func_1513(var_18_string); // 0x46d NEW_2
	func_1060(); // 0x470 NEW_2
	return 0; // 0x472 Return
}


func_1643()
{
	var_25_string = ""; // 0x66c PushV
	var_25_string = "1"; // 0x66d MovS
	func_1760(var_25_string); // 0x66e NEW_2
	return 0; // 0x670 Return
}


func_1649()
{
	var_37_bool = 0; var_38_string = ""; var_39_string = ""; // 0x672 PushV
	var_38_string = "klara2_positioner"; // 0x673 MovS
	var_39_string = "remove_klara"; // 0x674 MovS
	func_1582(var_37_bool, var_38_string, var_39_string); // 0x675 NEW_2
	return 0; // 0x677 Return
}


func_1656()
{
	var_45_bool = 0; var_46_string = ""; var_47_string = ""; // 0x679 PushV
	var_46_string = "klara2_svita_positioner"; // 0x67a MovS
	var_47_string = "place_svita"; // 0x67b MovS
	func_1582(var_45_bool, var_46_string, var_47_string); // 0x67c NEW_2
	return 0; // 0x67e Return
}


func_1663()
{
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x680 PushV
	var_61_string = "klara2_positioner"; // 0x681 MovS
	var_62_string = "klara_stay"; // 0x682 MovS
	func_1582(var_60_bool, var_61_string, var_62_string); // 0x683 NEW_2
	return 0; // 0x685 Return
}


func_1670()
{
	func_1799(); // 0x688 NEW_2
	return 0; // 0x68a Return
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x8c PushV
	func_1635(var_217_bool); // 0x8d NEW_2
	var_218_bool = var_217_bool == 0; // 0x8f Not
	if(var_218_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_219_bool = var_216_string == var_2_object; // 0x92 Eq
	if(var_219_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_220_string = ""; var_221_bool = 0; // 0x95 PushV
	var_220_string = var_216_string; // 0x96 Mov
	var_222_string = ""; // 0x97 PushS
	var_223_bool = var_216_string == var_222_string; // 0x98 Eq
	if(var_223_bool == 0) goto Label_156; // 0x99 JumpB
	var_221_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1529(var_220_string, var_221_bool); // 0x9d NEW_2
	var_2_object = var_216_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_221_bool = 1; // 0x9c MovB
}


func_1675(var_381_bool, var_382_object)
{
	var_383_bool = 0; var_384_object = Obj(); // 0x68c PushV
	var_384_object = var_382_object; // 0x68d Mov
	func_1715(var_384_object); // 0x68e NEW_2
	if(var_383_bool == 0) goto Label_1683; // 0x690 JumpB
	var_381_bool = 1; // 0x691 MovB
	return 0; // 0x692 Return
	
Label_1683:
	var_381_bool = 0; // 0x693 MovB
	return 0; // 0x694 Return
}


func_1685(var_310_bool, var_311_object)
{
	var_312_bool = 0; var_313_object = Obj(); // 0x696 PushV
	var_313_object = var_311_object; // 0x697 Mov
	func_1722(var_313_object); // 0x698 NEW_2
	if(var_312_bool == 0) goto Label_1693; // 0x69a JumpB
	var_310_bool = 1; // 0x69b MovB
	return 0; // 0x69c Return
	
Label_1693:
	var_310_bool = 0; // 0x69d MovB
	return 0; // 0x69e Return
}


func_1433(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x599 PushV
	var_132_string = "c"; // 0x59a MovS
	var_133_int = 0; // 0x59b MovI
	
Label_1436:
	var_137_int = 1; // 0x59c PushI
	if(var_137_int == 0) goto Label_1449; // 0x59d JumpB
	var_138_int = 1; // 0x59e PushI
	var_139_int = var_133_int + var_138_int; // 0x59f Add
	var_140_int = var_132_string + var_139_int; // 0x5a0 Add
	HasProperty(var_140_int, var_134_bool); // 0x5a1 ObjFunc
	var_141_bool = var_134_bool == 0; // 0x5a3 Not
	if(var_141_bool == 0) goto Label_1446; // 0x5a4 JumpB
	goto Label_1449; // 0x5a5 Jump
	
Label_1449:
	var_142_bool = var_133_int == 0; // 0x5a9 Not
	if(var_142_bool == 0) goto Label_1453; // 0x5aa JumpB
	var_125_bool = 0; // 0x5ab MovB
	return 10; // 0x5ac Return
	
Label_1453:
	var_135_int = 0; // 0x5ad MovI
	var_143_int = 1; // 0x5ae PushI
	var_144_bool = var_133_int > var_143_int; // 0x5af GT
	if(var_144_bool == 0) goto Label_1459; // 0x5b0 JumpB
	irand(var_135_int, var_133_int); // 0x5b1 Func
	
Label_1459:
	var_145_int = 1; // 0x5b3 PushI
	var_146_int = var_135_int + var_145_int; // 0x5b4 Add
	var_147_int = var_132_string + var_146_int; // 0x5b5 Add
	GetProperty(var_147_int, var_136_string); // 0x5b6 ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x5b8 PushV
	var_149_string = var_136_string; // 0x5b9 Mov
	func_1544(var_148_bool, var_149_string); // 0x5ba NEW_2
	var_125_bool = var_148_bool; // 0x5bb Mov
	return 10; // 0x5bd Return
	
Label_1446:
	var_154_int = 1; // 0x5a6 PushI
	var_133_int = var_133_int + var_154_int; // 0x5a7 Add2
	goto Label_1436; // 0x5a8 Jump
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
	func_1610(var_35_int); // 0x4a6 NEW_2
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
	func_1603(var_62_string, var_63_int); // 0x4ca NEW_2
	PlayAnimation(var_61_string, var_62_string); // 0x4cc Func
	WaitForAnimEnd(var_32_bool); // 0x4ce Func
	var_64_bool = var_32_bool == 0; // 0x4d0 Not
	if(var_64_bool == 0) goto Label_1235; // 0x4d1 JumpB
	goto Label_1246; // 0x4d2 Jump
}


func_414(var_2_object, var_301_string)
{
	var_302_bool = 0; // 0x19f PushV
	func_1635(var_302_bool); // 0x1a0 NEW_2
	var_303_bool = var_302_bool == 0; // 0x1a2 Not
	if(var_303_bool == 0) goto Label_421; // 0x1a3 JumpB
	return 0; // 0x1a4 Return
	
Label_421:
	var_304_bool = var_301_string == var_2_object; // 0x1a5 Eq
	if(var_304_bool == 0) goto Label_424; // 0x1a6 JumpB
	return 0; // 0x1a7 Return
	
Label_424:
	var_305_string = ""; var_306_bool = 0; // 0x1a8 PushV
	var_305_string = var_301_string; // 0x1a9 Mov
	var_307_string = ""; // 0x1aa PushS
	var_308_bool = var_301_string == var_307_string; // 0x1ab Eq
	if(var_308_bool == 0) goto Label_431; // 0x1ac JumpB
	var_306_bool = 0; // 0x1ad MovB
	goto Label_432; // 0x1ae Jump
	
Label_432:
	func_1529(var_305_string, var_306_bool); // 0x1b0 NEW_2
	var_2_object = var_301_string; // 0x1b2 TMov
	return 0; // 0x1b3 Return
	
Label_431:
	var_306_bool = 1; // 0x1af MovB
}


func_1695(var_152_bool, var_153_object)
{
	var_154_bool = 0; var_155_object = Obj(); // 0x6a0 PushV
	var_155_object = var_153_object; // 0x6a1 Mov
	func_1729(var_155_object); // 0x6a2 NEW_2
	if(var_154_bool == 0) goto Label_1703; // 0x6a4 JumpB
	var_152_bool = 1; // 0x6a5 MovB
	return 0; // 0x6a6 Return
	
Label_1703:
	var_152_bool = 0; // 0x6a7 MovB
	return 0; // 0x6a8 Return
}


func_1705(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0x6aa PushV
	var_167_object = var_165_object; // 0x6ab Mov
	func_1736(var_167_object); // 0x6ac NEW_2
	if(var_166_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_164_bool = 1; // 0x6af MovB
	return 0; // 0x6b0 Return
	
Label_1713:
	var_164_bool = 0; // 0x6b1 MovB
	return 0; // 0x6b2 Return
}


func_689(var_0_object, var_344_int, var_345_object)
{
	var_347_object = Obj(); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0; // 0x2b1 PushV
	var_0_object = var_345_object; // 0x2b2 TMov
	var_355_bool = 0; var_356_object = Obj(); var_357_float = 0; // 0x2b3 PushV
	var_356_object = var_345_object; // 0x2b4 Mov
	var_357_float = 70.0; // 0x2b5 MovF
	func_1288(var_356_object, var_357_float); // 0x2b6 NEW_2
	var_358_bool = var_355_bool == 0; // 0x2b8 Not
	if(var_358_bool == 0) goto Label_700; // 0x2b9 JumpB
	var_344_int = -2; // 0x2ba MovI
	return 8; // 0x2bb Return
	
Label_700:
	CreateDialog(var_351_object); // 0x2bc Func
	var_359_int = 0; // 0x2be PushV
	func_1629(var_359_int); // 0x2bf NEW_2
	SetNPCName(var_359_int); // 0x2c1 ObjFunc
	var_360_int = 0; // 0x2c3 PushV
	func_1627(var_360_int); // 0x2c4 NEW_2
	SetNPCDescription(var_360_int); // 0x2c6 ObjFunc
	var_361_string = ""; // 0x2c8 PushV
	func_1631(var_361_string); // 0x2c9 NEW_2
	SetPhoto(var_361_string); // 0x2cb ObjFunc
	var_362_string = ""; // 0x2cd PushV
	func_1633(var_362_string); // 0x2ce NEW_2
	SetPhoto2(var_362_string); // 0x2d0 ObjFunc
	var_363_int = 0; // 0x2d2 PushV
	func_1743(var_363_int); // 0x2d3 NEW_2
	SetPlayerName(var_363_int); // 0x2d5 ObjFunc
	var_353_int = -1; // 0x2d7 MovI
	IsOverrideActive(var_352_bool); // 0x2d8 Func
	var_364_bool = var_352_bool; // 0x2da Push
	if(var_364_bool == 0) goto Label_734; // 0x2db JumpB
	var_344_int = -2; // 0x2dc MovI
	return 8; // 0x2dd Return
	
Label_734:
	DoDialog(var_351_object); // 0x2de Func
	var_365_object = Obj(); var_366_object = Obj(); // 0x2e0 PushV
	var_365_object = var_345_object; // 0x2e1 Mov
	var_366_object = var_351_object; // 0x2e2 Mov
	TaskCall(5); // 0x2e3 TaskCall
	func_763(var_367_object, var_368_object, var_369_string, var_370_bool, var_365_object, var_366_object); // 0x2e4 NEW_2
	TaskReturn(); // 0x2e5 TaskReturn
	IsDialogEnd(var_354_bool); // 0x2e7 ObjFunc
	
Label_745:
	var_404_bool = var_354_bool == 0; // 0x2e9 Not
	if(var_404_bool == 0) goto Label_752; // 0x2ea JumpB
	sync(); // 0x2eb Func
	IsDialogEnd(var_354_bool); // 0x2ed ObjFunc
	goto Label_745; // 0x2ef Jump
	
Label_752:
	var_405_object = Obj(); // 0x2f0 PushV
	var_405_object = var_345_object; // 0x2f1 Mov
	func_1357(); // 0x2f2 NEW_2
	StopDialog(var_351_object); // 0x2f4 Func
	GetReturnValue(var_353_int); // 0x2f6 ObjFunc
	var_344_int = var_353_int; // 0x2f8 Mov
	return 8; // 0x2f9 Return
}


func_1715(var_383_bool)
{
	var_385_bool = 0; var_386_string = ""; // 0x6b4 PushV
	var_386_string = "Late1"; // 0x6b5 MovS
	func_1771(var_385_bool, var_386_string); // 0x6b6 NEW_2
	var_383_bool = var_385_bool; // 0x6b7 Mov
	return 0; // 0x6b9 Return
}


func_1722(var_312_bool)
{
	var_314_bool = 0; var_315_string = ""; // 0x6bb PushV
	var_315_string = "1"; // 0x6bc MovS
	func_1771(var_314_bool, var_315_string); // 0x6bd NEW_2
	var_312_bool = var_314_bool; // 0x6be Mov
	return 0; // 0x6c0 Return
}


func_1470(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x5be PushV
	var_168_string = "d"; // 0x5bf PushS
	var_169_int = 0; // 0x5c0 PushV
	func_1594(var_169_int); // 0x5c1 NEW_2
	var_175_int = var_168_string + var_169_int; // 0x5c3 Add
	var_176_string = "m"; // 0x5c4 PushS
	var_163_string = var_175_int + var_176_string; // 0x5c5 Add2
	var_164_int = 0; // 0x5c6 MovI
	
Label_1479:
	var_177_int = 1; // 0x5c7 PushI
	if(var_177_int == 0) goto Label_1492; // 0x5c8 JumpB
	var_178_int = 1; // 0x5c9 PushI
	var_179_int = var_164_int + var_178_int; // 0x5ca Add
	var_180_int = var_163_string + var_179_int; // 0x5cb Add
	HasProperty(var_180_int, var_165_bool); // 0x5cc ObjFunc
	var_181_bool = var_165_bool == 0; // 0x5ce Not
	if(var_181_bool == 0) goto Label_1489; // 0x5cf JumpB
	goto Label_1492; // 0x5d0 Jump
	
Label_1492:
	var_182_bool = var_164_int == 0; // 0x5d4 Not
	if(var_182_bool == 0) goto Label_1496; // 0x5d5 JumpB
	var_156_bool = 0; // 0x5d6 MovB
	return 10; // 0x5d7 Return
	
Label_1496:
	var_166_int = 0; // 0x5d8 MovI
	var_183_int = 1; // 0x5d9 PushI
	var_184_bool = var_164_int > var_183_int; // 0x5da GT
	if(var_184_bool == 0) goto Label_1502; // 0x5db JumpB
	irand(var_166_int, var_164_int); // 0x5dc Func
	
Label_1502:
	var_185_int = 1; // 0x5de PushI
	var_186_int = var_166_int + var_185_int; // 0x5df Add
	var_187_int = var_163_string + var_186_int; // 0x5e0 Add
	GetProperty(var_187_int, var_167_string); // 0x5e1 ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x5e3 PushV
	var_189_string = var_167_string; // 0x5e4 Mov
	func_1544(var_188_bool, var_189_string); // 0x5e5 NEW_2
	var_156_bool = var_188_bool; // 0x5e6 Mov
	return 10; // 0x5e8 Return
	
Label_1489:
	var_190_int = 1; // 0x5d1 PushI
	var_164_int = var_164_int + var_190_int; // 0x5d2 Add2
	goto Label_1479; // 0x5d3 Jump
}


func_1729(var_154_bool)
{
	var_156_int = 0; // 0x6c2 PushV
	func_1594(var_156_int); // 0x6c3 NEW_2
	var_162_int = 6; // 0x6c5 PushI
	var_154_bool = var_156_int == var_162_int; // 0x6c6 Eq2
	return 0; // 0x6c7 Return
}


func_963()
{
	func_1004(var_16_bool); // 0x3c4 NEW_2
	return 0; // 0x3c6 Return
}


func_1736(var_166_bool)
{
	var_168_int = 0; // 0x6c9 PushV
	func_1594(var_168_int); // 0x6ca NEW_2
	var_169_int = 7; // 0x6cc PushI
	var_166_bool = var_168_int == var_169_int; // 0x6cd Eq2
	return 0; // 0x6ce Return
}


func_1743(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x6cf PushV
	var_108_string = "branch"; // 0x6d0 PushS
	GetVariable(var_108_string, var_107_int); // 0x6d1 Func
	var_109_int = 0; // 0x6d3 PushI
	var_110_bool = var_107_int == var_109_int; // 0x6d4 Eq
	if(var_110_bool == 0) goto Label_1753; // 0x6d5 JumpB
	var_105_int = 1; // 0x6d6 MovI
	return 2; // 0x6d7 Return
	
Label_1753:
	var_111_int = 1; // 0x6d9 PushI
	var_112_bool = var_107_int == var_111_int; // 0x6da Eq
	if(var_112_bool == 0) goto Label_1758; // 0x6db JumpB
	var_105_int = 2; // 0x6dc MovI
	return 2; // 0x6dd Return
	
Label_1758:
	var_105_int = 3; // 0x6de MovI
	return 2; // 0x6df Return
}


func_1760(var_25_string)
{
	var_26_int = 0; var_27_int = 0; // 0x6e0 PushV
	var_28_string = "day"; // 0x6e1 PushS
	GetProperty(var_28_string, var_27_int); // 0x6e2 Func
	var_29_string = "K2S_Klara2"; // 0x6e4 PushS
	var_30_int = var_29_string + var_25_string; // 0x6e5 Add
	var_31_int = var_30_int + var_27_int; // 0x6e6 Add
	var_32_int = 1; // 0x6e7 PushI
	SetVariable(var_31_int, var_32_int); // 0x6e8 Func
	return 2; // 0x6ea Return
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


func_1256(var_32_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x4e8 PushV
	GetPosition(var_37_cvector); // 0x4e9 Func
	GetPosition(var_38_cvector); // 0x4eb ObjFunc
	var_39_cvector = var_38_cvector - var_37_cvector; // 0x4ed Sub2
	var_32_float = var_39_cvector | var_39_cvector; // 0x4ee Or2
	return 6; // 0x4ef Return
}


func_1513(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x5e9 PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x5ea Func
	var_249_bool = var_246_bool; // 0x5ec Push
	if(var_249_bool == 0) goto Label_1524; // 0x5ed JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x5ee Func
	var_250_bool = 0; // 0x5f0 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x5f1 Func
	goto Label_1528; // 0x5f3 Jump
	
Label_1528:
	return 6; // 0x5f8 Return
	
Label_1524:
	var_251_string = "Can't find lsh animation : "; // 0x5f4 PushS
	var_252_int = var_251_string + var_242_string; // 0x5f5 Add
	Trace(var_252_int); // 0x5f6 Func
}


func_1771(var_314_bool, var_315_string)
{
	var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; // 0x6eb PushV
	var_320_string = "day"; // 0x6ec PushS
	GetProperty(var_320_string, var_318_int); // 0x6ed Func
	var_321_string = "K2S_Klara2"; // 0x6ef PushS
	var_322_int = var_321_string + var_315_string; // 0x6f0 Add
	var_323_int = var_322_int + var_318_int; // 0x6f1 Add
	GetVariable(var_323_int, var_319_int); // 0x6f2 Func
	var_324_int = 0; // 0x6f4 PushI
	var_314_bool = var_319_int == var_324_int; // 0x6f5 Eq2
	return 4; // 0x6f6 Return
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


func_1783(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x6f7 PushV
	var_71_string = "k2system_klara_day"; // 0x6f8 PushS
	GetVariable(var_71_string, var_70_int); // 0x6f9 Func
	var_68_int = var_70_int; // 0x6fb Mov
	return 2; // 0x6fc Return
}


func_1529(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x5f9 PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x5fa Func
	var_230_bool = var_227_bool; // 0x5fc Push
	if(var_230_bool == 0) goto Label_1539; // 0x5fd JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x5fe Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x600 Func
	goto Label_1543; // 0x602 Jump
	
Label_1543:
	return 6; // 0x607 Return
	
Label_1539:
	var_231_string = "Can't find lsh animation : "; // 0x603 PushS
	var_232_int = var_231_string + var_220_string; // 0x604 Add
	Trace(var_232_int); // 0x605 Func
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


func_763(var_0_object, var_1_object, var_2_object, var_3_string, var_365_object, var_366_object)
{
	var_0_object = var_366_object; // 0x2fc TMov
	var_1_object = var_365_object; // 0x2fd TMov
	var_3_string = 0; // 0x2fe TMovB
	var_371_int = 1; // 0x2ff PushI
	if(var_371_int == 0) goto Label_801; // 0x300 JumpB
	var_372_string = ""; // 0x301 PushV
	var_372_string = "Neutral"; // 0x302 MovS
	func_831(var_366_object, var_372_string); // 0x303 NEW_2
	var_380_int = 538575; // 0x305 PushI
	SetMessage(var_380_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_381_bool = 0; var_382_object = Obj(); // 0x30a PushV
	var_382_object = var_1_object; // 0x30b MovT
	func_1675(var_381_bool, var_382_object); // 0x30c NEW_2
	if(var_381_bool == 0) goto Label_788; // 0x30e JumpB
	var_387_int = 538576; // 0x30f PushI
	var_388_int = 40462; // 0x310 PushI
	var_389_int = 40461; // 0x311 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x312 TObjFunc
	
Label_788:
	var_390_int = 538581; // 0x314 PushI
	var_391_int = -1; // 0x315 PushI
	var_392_int = 40466; // 0x316 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x317 TObjFunc
	var_393_int = 538582; // 0x319 PushI
	var_394_int = -1; // 0x31a PushI
	var_395_int = 40467; // 0x31b PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x31c TObjFunc
	goto Label_801; // 0x31e Jump
	
Label_801:
	var_396_bool = 0; // 0x321 PushV
	func_1635(var_396_bool); // 0x322 NEW_2
	if(var_396_bool == 0) goto Label_816; // 0x324 JumpB
	
Label_805:
	lshWaitForAnimEnd(); // 0x325 Func
	var_397_string = var_3_string; // 0x327 PushT
	if(var_397_string == 0) goto Label_810; // 0x328 JumpB
	goto Label_815; // 0x329 Jump
	
Label_815:
	goto Label_830; // 0x32f Jump
	
Label_830:
	return 0; // 0x33e Return
	
Label_810:
	var_398_string = ""; // 0x32a PushV
	var_398_string = var_2_object; // 0x32b MovT
	func_1513(var_398_string); // 0x32c NEW_2
	goto Label_805; // 0x32e Jump
	
Label_816:
	var_399_string = "all"; // 0x330 PushS
	var_400_string = "idle"; // 0x331 PushS
	PlayAnimation(var_399_string, var_400_string); // 0x332 Func
	
Label_820:
	WaitForAnimEnd(); // 0x334 Func
	var_401_string = var_3_string; // 0x336 PushT
	if(var_401_string == 0) goto Label_825; // 0x337 JumpB
	goto Label_830; // 0x338 Jump
	
Label_825:
	var_402_string = "all"; // 0x339 PushS
	var_403_string = "idle"; // 0x33a PushS
	PlayAnimation(var_402_string, var_403_string); // 0x33b Func
	goto Label_820; // 0x33d Jump
}


func_1789(var_65_int)
{
	var_66_int = 0; var_67_int = 0; // 0x6fd PushV
	var_68_int = 0; // 0x6fe PushV
	func_1783(var_68_int); // 0x6ff NEW_2
	var_67_int = var_68_int; // 0x700 Mov
	var_72_string = "k2system_klara_state"; // 0x702 PushS
	var_73_int = var_72_string + var_67_int; // 0x703 Add
	SetVariable(var_73_int, var_65_int); // 0x704 Func
	return 2; // 0x706 Return
}


