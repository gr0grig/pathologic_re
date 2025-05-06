task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xac PushI
	if(var_23_int == 0) goto Label_384; // 0xad JumpB
	func_1655(); // 0xaf NEW_2
	var_25_int = 30413; // 0xb1 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xb2 Eq
	if(var_26_bool == 0) goto Label_185; // 0xb3 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xb4 PushV
	var_27_object = var_1_object; // 0xb5 MovT
	var_28_object = var_0_object; // 0xb6 MovT
	func_1732(); // 0xb7 NEW_2
	
Label_185:
	var_54_int = 27787; // 0xb9 PushI
	var_55_bool = var_21_bool == var_54_int; // 0xba Eq
	if(var_55_bool == 0) goto Label_218; // 0xbb JumpB
	var_56_string = ""; // 0xbc PushV
	var_56_string = "Neutral"; // 0xbd MovS
	func_149(var_22_cvector, var_56_string); // 0xbe NEW_2
	var_73_int = 526521; // 0xc0 PushI
	SetMessage(var_73_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_74_bool = 0; var_75_object = Obj(); // 0xc5 PushV
	var_75_object = var_1_object; // 0xc6 MovT
	func_1741(var_75_object); // 0xc7 NEW_2
	if(var_74_bool == 0) goto Label_207; // 0xc9 JumpB
	var_82_int = 526522; // 0xca PushI
	var_83_int = 27789; // 0xcb PushI
	var_84_int = 27788; // 0xcc PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xcd TObjFunc
	
Label_207:
	var_85_int = 526525; // 0xcf PushI
	var_86_int = -1; // 0xd0 PushI
	var_87_int = 27791; // 0xd1 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xd2 TObjFunc
	var_88_int = 541603; // 0xd4 PushI
	var_89_int = -1; // 0xd5 PushI
	var_90_int = 43771; // 0xd6 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_91_int = 27789; // 0xda PushI
	var_92_bool = var_21_bool == var_91_int; // 0xdb Eq
	if(var_92_bool == 0) goto Label_241; // 0xdc JumpB
	var_93_string = ""; // 0xdd PushV
	var_93_string = "Doubt"; // 0xde MovS
	func_149(var_22_cvector, var_93_string); // 0xdf NEW_2
	var_94_int = 526523; // 0xe1 PushI
	SetMessage(var_94_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_95_int = 526524; // 0xe6 PushI
	var_96_int = 30396; // 0xe7 PushI
	var_97_int = 27790; // 0xe8 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xe9 TObjFunc
	var_98_int = 528967; // 0xeb PushI
	var_99_int = 30396; // 0xec PushI
	var_100_int = 30402; // 0xed PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_101_int = 30396; // 0xf1 PushI
	var_102_bool = var_21_bool == var_101_int; // 0xf2 Eq
	if(var_102_bool == 0) goto Label_259; // 0xf3 JumpB
	var_103_string = ""; // 0xf4 PushV
	var_103_string = "Doubt"; // 0xf5 MovS
	func_149(var_22_cvector, var_103_string); // 0xf6 NEW_2
	var_104_int = 528961; // 0xf8 PushI
	SetMessage(var_104_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_105_int = 528962; // 0xfd PushI
	var_106_int = 30398; // 0xfe PushI
	var_107_int = 30397; // 0xff PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_108_int = 30398; // 0x103 PushI
	var_109_bool = var_21_bool == var_108_int; // 0x104 Eq
	if(var_109_bool == 0) goto Label_277; // 0x105 JumpB
	var_110_string = ""; // 0x106 PushV
	var_110_string = "Neutral"; // 0x107 MovS
	func_149(var_22_cvector, var_110_string); // 0x108 NEW_2
	var_111_int = 528963; // 0x10a PushI
	SetMessage(var_111_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_112_int = 528964; // 0x10f PushI
	var_113_int = 30400; // 0x110 PushI
	var_114_int = 30399; // 0x111 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x112 TObjFunc
	return 0; // 0x114 Return
	
Label_277:
	var_115_int = 30400; // 0x115 PushI
	var_116_bool = var_21_bool == var_115_int; // 0x116 Eq
	if(var_116_bool == 0) goto Label_295; // 0x117 JumpB
	var_117_string = ""; // 0x118 PushV
	var_117_string = "Grin"; // 0x119 MovS
	func_149(var_22_cvector, var_117_string); // 0x11a NEW_2
	var_118_int = 528965; // 0x11c PushI
	SetMessage(var_118_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_119_int = 528968; // 0x121 PushI
	var_120_int = 30405; // 0x122 PushI
	var_121_int = 30404; // 0x123 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_122_int = 30405; // 0x127 PushI
	var_123_bool = var_21_bool == var_122_int; // 0x128 Eq
	if(var_123_bool == 0) goto Label_313; // 0x129 JumpB
	var_124_string = ""; // 0x12a PushV
	var_124_string = "Doubt"; // 0x12b MovS
	func_149(var_22_cvector, var_124_string); // 0x12c NEW_2
	var_125_int = 528969; // 0x12e PushI
	SetMessage(var_125_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_126_int = 528970; // 0x133 PushI
	var_127_int = 30407; // 0x134 PushI
	var_128_int = 30406; // 0x135 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_129_int = 30407; // 0x139 PushI
	var_130_bool = var_21_bool == var_129_int; // 0x13a Eq
	if(var_130_bool == 0) goto Label_336; // 0x13b JumpB
	var_131_string = ""; // 0x13c PushV
	var_131_string = "Questioning"; // 0x13d MovS
	func_149(var_22_cvector, var_131_string); // 0x13e NEW_2
	var_132_int = 528971; // 0x140 PushI
	SetMessage(var_132_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_133_int = 528966; // 0x145 PushI
	var_134_int = 30411; // 0x146 PushI
	var_135_int = 30401; // 0x147 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x148 TObjFunc
	var_136_int = 528972; // 0x14a PushI
	var_137_int = 30409; // 0x14b PushI
	var_138_int = 30408; // 0x14c PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_139_int = 30409; // 0x150 PushI
	var_140_bool = var_21_bool == var_139_int; // 0x151 Eq
	if(var_140_bool == 0) goto Label_354; // 0x152 JumpB
	var_141_string = ""; // 0x153 PushV
	var_141_string = "Neutral"; // 0x154 MovS
	func_149(var_22_cvector, var_141_string); // 0x155 NEW_2
	var_142_int = 528973; // 0x157 PushI
	SetMessage(var_142_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_143_int = 528974; // 0x15c PushI
	var_144_int = 30411; // 0x15d PushI
	var_145_int = 30410; // 0x15e PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_146_int = 30411; // 0x162 PushI
	var_147_bool = var_21_bool == var_146_int; // 0x163 Eq
	if(var_147_bool == 0) goto Label_372; // 0x164 JumpB
	var_148_string = ""; // 0x165 PushV
	var_148_string = "Neutral"; // 0x166 MovS
	func_149(var_22_cvector, var_148_string); // 0x167 NEW_2
	var_149_int = 528975; // 0x169 PushI
	SetMessage(var_149_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_150_int = 528976; // 0x16e PushI
	var_151_int = -1; // 0x16f PushI
	var_152_int = 30413; // 0x170 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_3_string = 1; // 0x174 TMovB
	var_153_bool = 0; // 0x175 PushV
	func_1730(var_153_bool); // 0x176 NEW_2
	if(var_153_bool == 0) goto Label_380; // 0x178 JumpB
	lshStopAnimation(); // 0x179 Func
	goto Label_382; // 0x17b Jump
	
Label_382:
	return 0; // 0x17e Return
	
Label_380:
	StopAnimation(); // 0x17c Func
	
Label_384:
	return 0; // 0x180 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x223 PushI
	if(var_23_int == 0) goto Label_633; // 0x224 JumpB
	func_1655(); // 0x226 NEW_2
	var_25_int = 31138; // 0x228 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x229 Eq
	if(var_26_bool == 0) goto Label_575; // 0x22a JumpB
	var_27_string = ""; // 0x22b PushV
	var_27_string = "Neutral"; // 0x22c MovS
	func_524(var_22_cvector, var_27_string); // 0x22d NEW_2
	var_44_int = 529675; // 0x22f PushI
	SetMessage(var_44_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_45_int = 529676; // 0x234 PushI
	var_46_int = 43773; // 0x235 PushI
	var_47_int = 31139; // 0x236 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x237 TObjFunc
	var_48_int = 541604; // 0x239 PushI
	var_49_int = 43774; // 0x23a PushI
	var_50_int = 43772; // 0x23b PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x23c TObjFunc
	return 0; // 0x23e Return
	
Label_575:
	var_51_int = 43774; // 0x23f PushI
	var_52_bool = var_21_bool == var_51_int; // 0x240 Eq
	if(var_52_bool == 0) goto Label_598; // 0x241 JumpB
	var_53_string = ""; // 0x242 PushV
	var_53_string = "Neutral"; // 0x243 MovS
	func_524(var_22_cvector, var_53_string); // 0x244 NEW_2
	var_54_int = 541606; // 0x246 PushI
	SetMessage(var_54_int); // 0x247 TObjFunc
	ClearReplies(); // 0x249 TObjFunc
	var_55_int = 541607; // 0x24b PushI
	var_56_int = 43773; // 0x24c PushI
	var_57_int = 43775; // 0x24d PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x24e TObjFunc
	var_58_int = 541608; // 0x250 PushI
	var_59_int = 43773; // 0x251 PushI
	var_60_int = 43776; // 0x252 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x253 TObjFunc
	return 0; // 0x255 Return
	
Label_598:
	var_61_int = 43773; // 0x256 PushI
	var_62_bool = var_21_bool == var_61_int; // 0x257 Eq
	if(var_62_bool == 0) goto Label_621; // 0x258 JumpB
	var_63_string = ""; // 0x259 PushV
	var_63_string = "Neutral"; // 0x25a MovS
	func_524(var_22_cvector, var_63_string); // 0x25b NEW_2
	var_64_int = 541605; // 0x25d PushI
	SetMessage(var_64_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_65_int = 541609; // 0x262 PushI
	var_66_int = -1; // 0x263 PushI
	var_67_int = 43778; // 0x264 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x265 TObjFunc
	var_68_int = 541610; // 0x267 PushI
	var_69_int = -1; // 0x268 PushI
	var_70_int = 43781; // 0x269 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_3_string = 1; // 0x26d TMovB
	var_71_bool = 0; // 0x26e PushV
	func_1730(var_71_bool); // 0x26f NEW_2
	if(var_71_bool == 0) goto Label_629; // 0x271 JumpB
	lshStopAnimation(); // 0x272 Func
	goto Label_631; // 0x274 Jump
	
Label_631:
	return 0; // 0x277 Return
	
Label_629:
	StopAnimation(); // 0x275 Func
	
Label_633:
	return 0; // 0x279 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x321 PushI
	if(var_23_int == 0) goto Label_892; // 0x322 JumpB
	func_1655(); // 0x324 NEW_2
	var_25_int = 36960; // 0x326 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x327 Eq
	if(var_26_bool == 0) goto Label_834; // 0x328 JumpB
	var_27_string = ""; // 0x329 PushV
	var_27_string = "Neutral"; // 0x32a MovS
	func_778(var_22_cvector, var_27_string); // 0x32b NEW_2
	var_44_int = 535284; // 0x32d PushI
	SetMessage(var_44_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_45_int = 535285; // 0x332 PushI
	var_46_int = 36962; // 0x333 PushI
	var_47_int = 36961; // 0x334 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x335 TObjFunc
	var_48_int = 535292; // 0x337 PushI
	var_49_int = -1; // 0x338 PushI
	var_50_int = 36968; // 0x339 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x33a TObjFunc
	var_51_int = 535293; // 0x33c PushI
	var_52_int = -1; // 0x33d PushI
	var_53_int = 36969; // 0x33e PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x33f TObjFunc
	return 0; // 0x341 Return
	
Label_834:
	var_54_int = 36962; // 0x342 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x343 Eq
	if(var_55_bool == 0) goto Label_857; // 0x344 JumpB
	var_56_string = ""; // 0x345 PushV
	var_56_string = "Neutral"; // 0x346 MovS
	func_778(var_22_cvector, var_56_string); // 0x347 NEW_2
	var_57_int = 535286; // 0x349 PushI
	SetMessage(var_57_int); // 0x34a TObjFunc
	ClearReplies(); // 0x34c TObjFunc
	var_58_int = 535287; // 0x34e PushI
	var_59_int = 36964; // 0x34f PushI
	var_60_int = 36963; // 0x350 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x351 TObjFunc
	var_61_int = 535291; // 0x353 PushI
	var_62_int = -1; // 0x354 PushI
	var_63_int = 36967; // 0x355 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x356 TObjFunc
	return 0; // 0x358 Return
	
Label_857:
	var_64_int = 36964; // 0x359 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x35a Eq
	if(var_65_bool == 0) goto Label_880; // 0x35b JumpB
	var_66_string = ""; // 0x35c PushV
	var_66_string = "Neutral"; // 0x35d MovS
	func_778(var_22_cvector, var_66_string); // 0x35e NEW_2
	var_67_int = 535288; // 0x360 PushI
	SetMessage(var_67_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_68_int = 535289; // 0x365 PushI
	var_69_int = -1; // 0x366 PushI
	var_70_int = 36965; // 0x367 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x368 TObjFunc
	var_71_int = 535290; // 0x36a PushI
	var_72_int = -1; // 0x36b PushI
	var_73_int = 36966; // 0x36c PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x36d TObjFunc
	return 0; // 0x36f Return
	
Label_880:
	var_3_string = 1; // 0x370 TMovB
	var_74_bool = 0; // 0x371 PushV
	func_1730(var_74_bool); // 0x372 NEW_2
	if(var_74_bool == 0) goto Label_888; // 0x374 JumpB
	lshStopAnimation(); // 0x375 Func
	goto Label_890; // 0x377 Jump
	
Label_890:
	return 0; // 0x37a Return
	
Label_888:
	StopAnimation(); // 0x378 Func
	
Label_892:
	return 0; // 0x37c Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x41f PushI
	if(var_23_int == 0) goto Label_1095; // 0x420 JumpB
	func_1655(); // 0x422 NEW_2
	var_25_int = 42554; // 0x424 PushI
	var_26_bool = var_21_int == var_25_int; // 0x425 Eq
	if(var_26_bool == 0) goto Label_1083; // 0x426 JumpB
	var_27_string = ""; // 0x427 PushV
	var_27_string = "Neutral"; // 0x428 MovS
	func_1032(var_22_cvector, var_27_string); // 0x429 NEW_2
	var_44_int = 540545; // 0x42b PushI
	SetMessage(var_44_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_45_int = 540546; // 0x430 PushI
	var_46_int = -1; // 0x431 PushI
	var_47_int = 42555; // 0x432 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x433 TObjFunc
	var_48_int = 540798; // 0x435 PushI
	var_49_int = -1; // 0x436 PushI
	var_50_int = 42847; // 0x437 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x438 TObjFunc
	return 0; // 0x43a Return
	
Label_1083:
	var_3_string = 1; // 0x43b TMovB
	var_51_bool = 0; // 0x43c PushV
	func_1730(var_51_bool); // 0x43d NEW_2
	if(var_51_bool == 0) goto Label_1091; // 0x43f JumpB
	lshStopAnimation(); // 0x440 Func
	goto Label_1093; // 0x442 Jump
	
Label_1093:
	return 0; // 0x445 Return
	
Label_1091:
	StopAnimation(); // 0x443 Func
	
Label_1095:
	return 0; // 0x447 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x492 PushI
	var_23_bool = var_21_int == var_22_int; // 0x493 Eq
	if(var_23_bool == 0) goto Label_1206; // 0x494 JumpB
	func_1165(); // 0x496 NEW_2
	var_25_bool = 0; // 0x498 PushV
	var_25_bool = 0; // 0x499 MovB
	var_26_bool = 0; // 0x49a PushV
	func_1379(var_26_bool); // 0x49b NEW_2
	if(var_26_bool == 0) goto Label_1187; // 0x49d JumpB
	var_29_bool = 0; // 0x49e PushV
	func_1134(var_29_bool); // 0x49f NEW_2
	if(var_29_bool == 0) goto Label_1187; // 0x4a1 JumpB
	var_25_bool = 1; // 0x4a2 MovB
	
Label_1187:
	if(var_25_bool == 0) goto Label_1200; // 0x4a3 JumpB
	var_46_bool = 0; // 0x4a4 PushV
	func_1114(var_46_bool); // 0x4a5 NEW_2
	if(var_46_bool == 0) goto Label_1199; // 0x4a7 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x4a8 PushV
	var_67_object = Obj(); // 0x4a9 PushV
	func_1662(var_67_object); // 0x4aa NEW_2
	var_66_object = var_67_object; // 0x4ab Mov
	func_1529(var_66_object); // 0x4ad NEW_2
	
Label_1199:
	goto Label_1206; // 0x4af Jump
	
Label_1206:
	return 0; // 0x4b6 Return
	
Label_1200:
	func_1129(var_21_int); // 0x4b1 NEW_2
	func_1156(); // 0x4b4 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1347(); // 0x4b8 NEW_2
	func_1165(); // 0x4bb NEW_2
	lshStopSpeech(); // 0x4bd Func
	lshStopAnimation(); // 0x4bf Func
	StopAsync(); // 0x4c1 Func
	Hold(); // 0x4c3 Func
	return 0; // 0x4c5 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x4c6 Func
	func_1165(); // 0x4c9 NEW_2
	var_22_string = ""; // 0x4cb PushV
	var_22_string = "Neutral"; // 0x4cc MovS
	func_1609(var_22_string); // 0x4cd NEW_2
	func_1156(); // 0x4d0 NEW_2
	return 0; // 0x4d2 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x4d4 Push
	if(var_22_bool == 0) goto Label_1242; // 0x4d5 JumpB
	func_1156(); // 0x4d7 NEW_2
	goto Label_1246; // 0x4d9 Jump
	
Label_1246:
	return 0; // 0x4de Return
	
Label_1242:
	var_28_string = ""; // 0x4da PushV
	var_28_string = "Neutral"; // 0x4db MovS
	func_1609(var_28_string); // 0x4dc NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x4df PushV
	IsOverrideActive(var_23_bool); // 0x4e0 Func
	var_24_bool = var_23_bool == 0; // 0x4e2 Not
	if(var_24_bool == 0) goto Label_1275; // 0x4e3 JumpB
	EventDisable(0); // 0x4e4 EventDisable
	func_1347(); // 0x4e6 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x4e8 PushV
	var_26_object = var_21_object; // 0x4e9 Mov
	func_1370(var_26_object); // 0x4ea NEW_2
	EventEnable(0); // 0x4ec EventEnable
	var_39_object = Obj(); // 0x4ed PushV
	var_39_object = var_21_object; // 0x4ee Mov
	func_1824(var_39_object); // 0x4ef NEW_2
	var_458_string = ""; // 0x4f1 PushV
	var_458_string = "Neutral"; // 0x4f2 MovS
	func_1609(var_458_string); // 0x4f3 NEW_2
	func_1165(); // 0x4f6 NEW_2
	func_1156(); // 0x4f9 NEW_2
	
Label_1275:
	return 2; // 0x4fb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1100(var_20_cvector); // 0x449 NEW_2
	return 0; // 0x44b Return
}


func_0(var_0_object, var_274_int, var_275_object)
{
	var_277_object = Obj(); var_278_bool = 0; var_279_int = 0; var_280_bool = 0; var_281_object = Obj(); var_282_bool = 0; var_283_int = 0; var_284_bool = 0; // 0x0 PushV
	var_0_object = var_275_object; // 0x1 TMov
	var_285_bool = 0; var_286_object = Obj(); var_287_float = 0; // 0x2 PushV
	var_286_object = var_275_object; // 0x3 Mov
	var_287_float = 70.0; // 0x4 MovF
	func_1384(var_286_object, var_287_float); // 0x5 NEW_2
	var_288_bool = var_285_bool == 0; // 0x7 Not
	if(var_288_bool == 0) goto Label_11; // 0x8 JumpB
	var_274_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_281_object); // 0xb Func
	var_289_int = 0; // 0xd PushV
	func_1724(var_289_int); // 0xe NEW_2
	SetNPCName(var_289_int); // 0x10 ObjFunc
	var_290_int = 0; // 0x12 PushV
	func_1722(var_290_int); // 0x13 NEW_2
	SetNPCDescription(var_290_int); // 0x15 ObjFunc
	var_291_string = ""; // 0x17 PushV
	func_1726(var_291_string); // 0x18 NEW_2
	SetPhoto(var_291_string); // 0x1a ObjFunc
	var_292_string = ""; // 0x1c PushV
	func_1728(var_292_string); // 0x1d NEW_2
	SetPhoto2(var_292_string); // 0x1f ObjFunc
	var_293_int = 0; // 0x21 PushV
	func_1807(var_293_int); // 0x22 NEW_2
	SetPlayerName(var_293_int); // 0x24 ObjFunc
	var_283_int = -1; // 0x26 MovI
	IsOverrideActive(var_282_bool); // 0x27 Func
	var_294_bool = var_282_bool; // 0x29 Push
	if(var_294_bool == 0) goto Label_45; // 0x2a JumpB
	var_274_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_281_object); // 0x2d Func
	var_295_bool = 0; var_296_object = Obj(); // 0x2f PushV
	var_297_object = Obj(); // 0x30 PushV
	func_1662(var_297_object); // 0x31 NEW_2
	var_296_object = var_297_object; // 0x32 Mov
	func_1471(var_295_bool, var_296_object); // 0x34 NEW_2
	var_298_object = Obj(); var_299_object = Obj(); // 0x36 PushV
	var_298_object = var_275_object; // 0x37 Mov
	var_299_object = var_281_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_300_object, var_301_object, var_302_string, var_303_bool, var_298_object, var_299_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_284_bool); // 0x3d ObjFunc
	
Label_63:
	var_339_bool = var_284_bool == 0; // 0x3f Not
	if(var_339_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_284_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_340_object = Obj(); // 0x46 PushV
	var_340_object = var_275_object; // 0x47 Mov
	func_1453(); // 0x48 NEW_2
	StopDialog(var_281_object); // 0x4a Func
	GetReturnValue(var_283_int); // 0x4c ObjFunc
	var_274_int = var_283_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_385(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x181 PushV
	var_0_object = var_45_object; // 0x182 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x183 PushV
	var_56_object = var_45_object; // 0x184 Mov
	var_57_float = 70.0; // 0x185 MovF
	func_1384(var_56_object, var_57_float); // 0x186 NEW_2
	var_102_bool = var_55_bool == 0; // 0x188 Not
	if(var_102_bool == 0) goto Label_396; // 0x189 JumpB
	var_44_int = -2; // 0x18a MovI
	return 8; // 0x18b Return
	
Label_396:
	CreateDialog(var_51_object); // 0x18c Func
	var_103_int = 0; // 0x18e PushV
	func_1724(var_103_int); // 0x18f NEW_2
	SetNPCName(var_103_int); // 0x191 ObjFunc
	var_104_int = 0; // 0x193 PushV
	func_1722(var_104_int); // 0x194 NEW_2
	SetNPCDescription(var_104_int); // 0x196 ObjFunc
	var_105_string = ""; // 0x198 PushV
	func_1726(var_105_string); // 0x199 NEW_2
	SetPhoto(var_105_string); // 0x19b ObjFunc
	var_106_string = ""; // 0x19d PushV
	func_1728(var_106_string); // 0x19e NEW_2
	SetPhoto2(var_106_string); // 0x1a0 ObjFunc
	var_107_int = 0; // 0x1a2 PushV
	func_1807(var_107_int); // 0x1a3 NEW_2
	SetPlayerName(var_107_int); // 0x1a5 ObjFunc
	var_53_int = -1; // 0x1a7 MovI
	IsOverrideActive(var_52_bool); // 0x1a8 Func
	var_115_bool = var_52_bool; // 0x1aa Push
	if(var_115_bool == 0) goto Label_430; // 0x1ab JumpB
	var_44_int = -2; // 0x1ac MovI
	return 8; // 0x1ad Return
	
Label_430:
	DoDialog(var_51_object); // 0x1ae Func
	var_116_bool = 0; var_117_object = Obj(); // 0x1b0 PushV
	var_118_object = Obj(); // 0x1b1 PushV
	func_1662(var_118_object); // 0x1b2 NEW_2
	var_117_object = var_118_object; // 0x1b3 Mov
	func_1471(var_116_bool, var_117_object); // 0x1b5 NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x1b7 PushV
	var_211_object = var_45_object; // 0x1b8 Mov
	var_212_object = var_51_object; // 0x1b9 Mov
	TaskCall(3); // 0x1ba TaskCall
	func_466(var_213_object, var_214_object, var_215_string, var_216_bool, var_211_object, var_212_object); // 0x1bb NEW_2
	TaskReturn(); // 0x1bc TaskReturn
	IsDialogEnd(var_54_bool); // 0x1be ObjFunc
	
Label_448:
	var_260_bool = var_54_bool == 0; // 0x1c0 Not
	if(var_260_bool == 0) goto Label_455; // 0x1c1 JumpB
	sync(); // 0x1c2 Func
	IsDialogEnd(var_54_bool); // 0x1c4 ObjFunc
	goto Label_448; // 0x1c6 Jump
	
Label_455:
	var_261_object = Obj(); // 0x1c7 PushV
	var_261_object = var_45_object; // 0x1c8 Mov
	func_1453(); // 0x1c9 NEW_2
	StopDialog(var_51_object); // 0x1cb Func
	GetReturnValue(var_53_int); // 0x1cd ObjFunc
	var_44_int = var_53_int; // 0x1cf Mov
	return 8; // 0x1d0 Return
}


func_1156()
{
	var_460_float = 0; var_461_float = 0; // 0x484 PushV
	var_462_int = 8; // 0x485 PushI
	var_463_int = 16; // 0x486 PushI
	rand(var_461_float, var_462_int, var_463_int); // 0x487 Func
	var_464_int = 10; // 0x489 PushI
	SetTimer(var_464_int, var_461_float); // 0x48a Func
	return 2; // 0x48c Return
}


func_1668(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0; // 0x684 PushV
	var_87_int = var_83_cvector | var_83_cvector; // 0x685 Or
	var_86_float = sqrt(var_87_int); // 0x686 Sqrt2
	var_88_float = 0.0; // 0x687 PushF
	var_89_bool = var_86_float < var_88_float; // 0x688 LT
	if(var_89_bool == 0) goto Label_1676; // 0x689 JumpB
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x68a MovV
	return 2; // 0x68b Return
	
Label_1676:
	var_82_cvector = var_83_cvector / var_83_cvector; // 0x68c Div2
	return 2; // 0x68d Return
}


func_1032(var_2_object, var_433_string)
{
	var_434_bool = 0; // 0x409 PushV
	func_1730(var_434_bool); // 0x40a NEW_2
	var_435_bool = var_434_bool == 0; // 0x40c Not
	if(var_435_bool == 0) goto Label_1039; // 0x40d JumpB
	return 0; // 0x40e Return
	
Label_1039:
	var_436_bool = var_433_string == var_2_object; // 0x40f Eq
	if(var_436_bool == 0) goto Label_1042; // 0x410 JumpB
	return 0; // 0x411 Return
	
Label_1042:
	var_437_string = ""; var_438_bool = 0; // 0x412 PushV
	var_437_string = var_433_string; // 0x413 Mov
	var_439_string = ""; // 0x414 PushS
	var_440_bool = var_433_string == var_439_string; // 0x415 Eq
	if(var_440_bool == 0) goto Label_1049; // 0x416 JumpB
	var_438_bool = 0; // 0x417 MovB
	goto Label_1050; // 0x418 Jump
	
Label_1050:
	func_1625(var_437_string, var_438_bool); // 0x41a NEW_2
	var_2_object = var_433_string; // 0x41c TMov
	return 0; // 0x41d Return
	
Label_1049:
	var_438_bool = 1; // 0x419 MovB
}


func_778(var_2_object, var_374_string)
{
	var_375_bool = 0; // 0x30b PushV
	func_1730(var_375_bool); // 0x30c NEW_2
	var_376_bool = var_375_bool == 0; // 0x30e Not
	if(var_376_bool == 0) goto Label_785; // 0x30f JumpB
	return 0; // 0x310 Return
	
Label_785:
	var_377_bool = var_374_string == var_2_object; // 0x311 Eq
	if(var_377_bool == 0) goto Label_788; // 0x312 JumpB
	return 0; // 0x313 Return
	
Label_788:
	var_378_string = ""; var_379_bool = 0; // 0x314 PushV
	var_378_string = var_374_string; // 0x315 Mov
	var_380_string = ""; // 0x316 PushS
	var_381_bool = var_374_string == var_380_string; // 0x317 Eq
	if(var_381_bool == 0) goto Label_795; // 0x318 JumpB
	var_379_bool = 0; // 0x319 MovB
	goto Label_796; // 0x31a Jump
	
Label_796:
	func_1625(var_378_string, var_379_bool); // 0x31c NEW_2
	var_2_object = var_374_string; // 0x31e TMov
	return 0; // 0x31f Return
	
Label_795:
	var_379_bool = 1; // 0x31b MovB
}


func_524(var_2_object, var_218_string)
{
	var_219_bool = 0; // 0x20d PushV
	func_1730(var_219_bool); // 0x20e NEW_2
	var_220_bool = var_219_bool == 0; // 0x210 Not
	if(var_220_bool == 0) goto Label_531; // 0x211 JumpB
	return 0; // 0x212 Return
	
Label_531:
	var_221_bool = var_218_string == var_2_object; // 0x213 Eq
	if(var_221_bool == 0) goto Label_534; // 0x214 JumpB
	return 0; // 0x215 Return
	
Label_534:
	var_222_string = ""; var_223_bool = 0; // 0x216 PushV
	var_222_string = var_218_string; // 0x217 Mov
	var_224_string = ""; // 0x218 PushS
	var_225_bool = var_218_string == var_224_string; // 0x219 Eq
	if(var_225_bool == 0) goto Label_541; // 0x21a JumpB
	var_223_bool = 0; // 0x21b MovB
	goto Label_542; // 0x21c Jump
	
Label_542:
	func_1625(var_222_string, var_223_bool); // 0x21e NEW_2
	var_2_object = var_218_string; // 0x220 TMov
	return 0; // 0x221 Return
	
Label_541:
	var_223_bool = 1; // 0x21d MovB
}


func_1165()
{
	var_459_int = 10; // 0x48d PushI
	KillTimer(var_459_int); // 0x48e Func
	return 0; // 0x490 Return
}


func_1678(var_316_int, var_317_string)
{
	var_318_int = 0; var_319_int = 0; // 0x68e PushV
	GetVariable(var_317_string, var_319_int); // 0x68f Func
	var_316_int = var_319_int; // 0x691 Mov
	return 2; // 0x692 Return
}


func_1807(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0x70f PushV
	var_110_string = "branch"; // 0x710 PushS
	GetVariable(var_110_string, var_109_int); // 0x711 Func
	var_111_int = 0; // 0x713 PushI
	var_112_bool = var_109_int == var_111_int; // 0x714 Eq
	if(var_112_bool == 0) goto Label_1817; // 0x715 JumpB
	var_107_int = 1; // 0x716 MovI
	return 2; // 0x717 Return
	
Label_1817:
	var_113_int = 1; // 0x719 PushI
	var_114_bool = var_109_int == var_113_int; // 0x71a Eq
	if(var_114_bool == 0) goto Label_1822; // 0x71b JumpB
	var_107_int = 2; // 0x71c MovI
	return 2; // 0x71d Return
	
Label_1822:
	var_107_int = 3; // 0x71e MovI
	return 2; // 0x71f Return
}


func_1683(var_171_int)
{
	var_172_float = 0; var_173_float = 0; // 0x693 PushV
	GetGameTime(var_173_float); // 0x694 Func
	var_174_int = 1; // 0x696 PushI
	var_175_int = 0; // 0x697 PushV
	var_176_int = 24; // 0x698 PushI
	var_175_int = var_173_float / var_173_float; // 0x699 Div2
	var_171_int = var_174_int + var_175_int; // 0x69a Add2
	return 2; // 0x69b Return
}


func_149(var_2_object, var_305_string)
{
	var_306_bool = 0; // 0x96 PushV
	func_1730(var_306_bool); // 0x97 NEW_2
	var_307_bool = var_306_bool == 0; // 0x99 Not
	if(var_307_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_308_bool = var_305_string == var_2_object; // 0x9c Eq
	if(var_308_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_309_string = ""; var_310_bool = 0; // 0x9f PushV
	var_309_string = var_305_string; // 0xa0 Mov
	var_311_string = ""; // 0xa1 PushS
	var_312_bool = var_305_string == var_311_string; // 0xa2 Eq
	if(var_312_bool == 0) goto Label_166; // 0xa3 JumpB
	var_310_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_1625(var_309_string, var_310_bool); // 0xa7 NEW_2
	var_2_object = var_305_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_310_bool = 1; // 0xa6 MovB
}


func_1692(var_271_bool, var_272_int)
{
	var_273_int = 0; // 0x69d PushV
	func_1683(var_273_int); // 0x69e NEW_2
	var_271_bool = var_273_int == var_272_int; // 0x6a0 Eq2
	return 0; // 0x6a1 Return
}


func_1566(var_158_bool)
{
	var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = ""; var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; // 0x61e PushV
	var_170_string = "d"; // 0x61f PushS
	var_171_int = 0; // 0x620 PushV
	func_1683(var_171_int); // 0x621 NEW_2
	var_177_int = var_170_string + var_171_int; // 0x623 Add
	var_178_string = "m"; // 0x624 PushS
	var_165_string = var_177_int + var_178_string; // 0x625 Add2
	var_166_int = 0; // 0x626 MovI
	
Label_1575:
	var_179_int = 1; // 0x627 PushI
	if(var_179_int == 0) goto Label_1588; // 0x628 JumpB
	var_180_int = 1; // 0x629 PushI
	var_181_int = var_166_int + var_180_int; // 0x62a Add
	var_182_int = var_165_string + var_181_int; // 0x62b Add
	HasProperty(var_182_int, var_167_bool); // 0x62c ObjFunc
	var_183_bool = var_167_bool == 0; // 0x62e Not
	if(var_183_bool == 0) goto Label_1585; // 0x62f JumpB
	goto Label_1588; // 0x630 Jump
	
Label_1588:
	var_184_bool = var_166_int == 0; // 0x634 Not
	if(var_184_bool == 0) goto Label_1592; // 0x635 JumpB
	var_158_bool = 0; // 0x636 MovB
	return 10; // 0x637 Return
	
Label_1592:
	var_168_int = 0; // 0x638 MovI
	var_185_int = 1; // 0x639 PushI
	var_186_bool = var_166_int > var_185_int; // 0x63a GT
	if(var_186_bool == 0) goto Label_1598; // 0x63b JumpB
	irand(var_168_int, var_166_int); // 0x63c Func
	
Label_1598:
	var_187_int = 1; // 0x63e PushI
	var_188_int = var_168_int + var_187_int; // 0x63f Add
	var_189_int = var_165_string + var_188_int; // 0x640 Add
	GetProperty(var_189_int, var_169_string); // 0x641 ObjFunc
	var_190_bool = 0; var_191_string = ""; // 0x643 PushV
	var_191_string = var_169_string; // 0x644 Mov
	func_1640(var_190_bool, var_191_string); // 0x645 NEW_2
	var_158_bool = var_190_bool; // 0x646 Mov
	return 10; // 0x648 Return
	
Label_1585:
	var_192_int = 1; // 0x631 PushI
	var_166_int = var_166_int + var_192_int; // 0x632 Add2
	goto Label_1575; // 0x633 Jump
}


func_1824(var_39_object)
{
	var_40_int = 0; var_41_int = 0; // 0x720 PushV
	var_42_string = "mt_han"; // 0x721 PushS
	GetVariable(var_42_string, var_41_int); // 0x722 Func
	var_43_bool = var_41_int == 0; // 0x724 Not
	if(var_43_bool == 0) goto Label_1840; // 0x725 JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x726 PushV
	var_45_object = var_39_object; // 0x727 Mov
	TaskCall(2); // 0x728 TaskCall
	func_385(var_46_object, var_44_int, var_45_object); // 0x729 NEW_2
	TaskReturn(); // 0x72a TaskReturn
	var_269_string = "mt_han"; // 0x72c PushS
	var_270_int = 1; // 0x72d PushI
	SetVariable(var_269_string, var_270_int); // 0x72e Func
	
Label_1840:
	var_271_bool = 0; var_272_int = 0; // 0x730 PushV
	var_272_int = 9; // 0x731 MovI
	func_1692(var_271_bool, var_272_int); // 0x732 NEW_2
	if(var_271_bool == 0) goto Label_1852; // 0x734 JumpB
	var_274_int = 0; var_275_object = Obj(); // 0x735 PushV
	var_275_object = var_39_object; // 0x736 Mov
	TaskCall(0); // 0x737 TaskCall
	func_0(var_276_object, var_274_int, var_275_object); // 0x738 NEW_2
	TaskReturn(); // 0x739 TaskReturn
	return 2; // 0x73b Return
	
Label_1852:
	var_341_bool = 0; var_342_int = 0; // 0x73c PushV
	var_342_int = 12; // 0x73d MovI
	func_1692(var_341_bool, var_342_int); // 0x73e NEW_2
	if(var_341_bool == 0) goto Label_1864; // 0x740 JumpB
	var_343_int = 0; var_344_object = Obj(); // 0x741 PushV
	var_344_object = var_39_object; // 0x742 Mov
	TaskCall(4); // 0x743 TaskCall
	func_634(var_345_object, var_343_int, var_344_object); // 0x744 NEW_2
	TaskReturn(); // 0x745 TaskReturn
	return 2; // 0x747 Return
	
Label_1864:
	var_402_int = 0; var_403_object = Obj(); // 0x748 PushV
	var_403_object = var_39_object; // 0x749 Mov
	TaskCall(6); // 0x74a TaskCall
	func_893(var_404_object, var_402_int, var_403_object); // 0x74b NEW_2
	TaskReturn(); // 0x74c TaskReturn
	return 2; // 0x74e Return
}


func_1698(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x6a2 PushV
	var_48_string = "idle"; // 0x6a3 MovS
	var_49_int = var_46_int; // 0x6a4 Push
	if(var_49_int == 0) goto Label_1703; // 0x6a5 JumpB
	var_48_string = var_48_string + var_46_int; // 0x6a6 Add2
	
Label_1703:
	var_45_string = var_48_string; // 0x6a7 Mov
	return 2; // 0x6a8 Return
}


func_1705(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x6a9 PushV
	var_42_int = 0; // 0x6aa MovI
	
Label_1707:
	var_44_string = "all"; // 0x6ab PushS
	var_45_string = ""; var_46_int = 0; // 0x6ac PushV
	var_46_int = var_42_int; // 0x6ad Mov
	func_1698(var_45_string, var_46_int); // 0x6ae NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x6b0 Func
	var_50_bool = var_43_bool == 0; // 0x6b2 Not
	if(var_50_bool == 0) goto Label_1717; // 0x6b3 JumpB
	goto Label_1720; // 0x6b4 Jump
	
Label_1720:
	var_39_int = var_42_int; // 0x6b8 Mov
	return 4; // 0x6b9 Return
	
Label_1717:
	var_51_int = 1; // 0x6b5 PushI
	var_42_int = var_42_int + var_51_int; // 0x6b6 Add2
	goto Label_1707; // 0x6b7 Jump
}


func_1453()
{
	var_262_bool = 0; var_263_bool = 0; // 0x5ad PushV
	var_264_bool = 1; // 0x5ae PushB
	CameraSwitchToNormal(var_264_bool); // 0x5af Func
	var_265_bool = 0; // 0x5b1 PushV
	func_1730(var_265_bool); // 0x5b2 NEW_2
	if(var_265_bool == 0) goto Label_1462; // 0x5b4 JumpB
	goto Label_1470; // 0x5b5 Jump
	
Label_1470:
	return 2; // 0x5be Return
	
Label_1462:
	var_266_string = "head"; // 0x5b6 PushS
	HasAnimationTrack(var_263_bool, var_266_string); // 0x5b7 Func
	var_267_bool = var_263_bool; // 0x5b9 Push
	if(var_267_bool == 0) goto Label_1470; // 0x5ba JumpB
	var_268_string = "head"; // 0x5bb PushS
	UnlookAsync(var_268_string); // 0x5bc Func
}


func_1722(var_104_int)
{
	var_104_int = 515536; // 0x6ba MovI
	return 0; // 0x6bb Return
}


func_1724(var_103_int)
{
	var_103_int = 502861; // 0x6bc MovI
	return 0; // 0x6bd Return
}


func_1726(var_105_string)
{
	var_105_string = "ui/NPC_Han.png"; // 0x6be MovS
	return 0; // 0x6bf Return
}


func_1471(var_116_bool, var_117_object)
{
	var_121_int = 0; var_122_int = 0; var_123_int = 0; var_124_int = 0; // 0x5bf PushV
	var_125_string = "voice_common"; // 0x5c0 PushS
	GetVariable(var_125_string, var_123_int); // 0x5c1 Func
	var_126_int = var_123_int; // 0x5c3 Push
	if(var_126_int == 0) goto Label_1509; // 0x5c4 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x5c5 PushV
	var_128_object = var_117_object; // 0x5c6 Mov
	func_1529(var_128_object); // 0x5c7 NEW_2
	var_157_bool = var_127_bool == 0; // 0x5c9 Not
	if(var_157_bool == 0) goto Label_1491; // 0x5ca JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x5cb PushV
	var_159_object = var_117_object; // 0x5cc Mov
	func_1566(var_159_object); // 0x5cd NEW_2
	var_193_bool = var_158_bool == 0; // 0x5cf Not
	if(var_193_bool == 0) goto Label_1491; // 0x5d0 JumpB
	var_116_bool = 0; // 0x5d1 MovB
	return 4; // 0x5d2 Return
	
Label_1491:
	var_194_int = 2; // 0x5d3 PushI
	irand(var_124_int, var_194_int); // 0x5d4 Func
	var_195_int = var_124_int; // 0x5d6 Push
	if(var_195_int == 0) goto Label_1504; // 0x5d7 JumpB
	var_196_string = "voice_common"; // 0x5d8 PushS
	var_197_int = 1; // 0x5d9 PushI
	var_198_int = var_123_int + var_197_int; // 0x5da Add
	var_199_int = 3; // 0x5db PushI
	var_200_int = var_198_int / var_199_int; // 0x5dc Mod
	SetVariable(var_196_string, var_200_int); // 0x5dd Func
	goto Label_1508; // 0x5df Jump
	
Label_1508:
	goto Label_1527; // 0x5e4 Jump
	
Label_1527:
	var_116_bool = 1; // 0x5f7 MovB
	return 4; // 0x5f8 Return
	
Label_1504:
	var_201_string = "voice_common"; // 0x5e0 PushS
	var_202_int = 0; // 0x5e1 PushI
	SetVariable(var_201_string, var_202_int); // 0x5e2 Func
	
Label_1509:
	var_203_bool = 0; var_204_object = Obj(); // 0x5e5 PushV
	var_204_object = var_117_object; // 0x5e6 Mov
	func_1566(var_204_object); // 0x5e7 NEW_2
	var_205_bool = var_203_bool == 0; // 0x5e9 Not
	if(var_205_bool == 0) goto Label_1523; // 0x5ea JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x5eb PushV
	var_207_object = var_117_object; // 0x5ec Mov
	func_1529(var_207_object); // 0x5ed NEW_2
	var_208_bool = var_206_bool == 0; // 0x5ef Not
	if(var_208_bool == 0) goto Label_1523; // 0x5f0 JumpB
	var_116_bool = 0; // 0x5f1 MovB
	return 4; // 0x5f2 Return
	
Label_1523:
	var_209_string = "voice_common"; // 0x5f3 PushS
	var_210_int = 1; // 0x5f4 PushI
	SetVariable(var_209_string, var_210_int); // 0x5f5 Func
}


func_1728(var_106_string)
{
	var_106_string = "ui/NPC_Han_b.png"; // 0x6c0 MovS
	return 0; // 0x6c1 Return
}


func_1345(var_59_bool)
{
	var_59_bool = 1; // 0x541 MovB
	return 0; // 0x542 Return
}


func_1730(var_98_bool)
{
	var_98_bool = 1; // 0x6c2 MovB
	return 0; // 0x6c3 Return
}


func_1347()
{
	StopAnimation(); // 0x543 Func
	StopGroup0(); // 0x545 Func
	return 0; // 0x547 Return
}


func_1732()
{
	var_29_string = "k9q01"; // 0x6c5 PushS
	var_30_int = 6; // 0x6c6 PushI
	SetVariable(var_29_string, var_30_int); // 0x6c7 Func
	func_1753(); // 0x6ca NEW_2
	return 0; // 0x6cc Return
}


func_1352(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x548 PushV
	GetPosition(var_41_cvector); // 0x549 Func
	GetPosition(var_42_cvector); // 0x54b ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x54d Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x54e Or2
	return 6; // 0x54f Return
}


func_1609(var_244_string)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0; // 0x649 PushV
	lshHasAnimation(var_248_bool, var_244_string); // 0x64a Func
	var_251_bool = var_248_bool; // 0x64c Push
	if(var_251_bool == 0) goto Label_1620; // 0x64d JumpB
	lshGetAnimTimes(var_244_string, var_249_float, var_250_float); // 0x64e Func
	var_252_bool = 0; // 0x650 PushB
	lshPlayAnimation(var_249_float, var_250_float, var_252_bool); // 0x651 Func
	goto Label_1624; // 0x653 Jump
	
Label_1624:
	return 6; // 0x658 Return
	
Label_1620:
	var_253_string = "Can't find lsh animation : "; // 0x654 PushS
	var_254_int = var_253_string + var_244_string; // 0x655 Add
	Trace(var_254_int); // 0x656 Func
}


func_715(var_0_object, var_1_object, var_2_object, var_3_string, var_367_object, var_368_object)
{
	var_0_object = var_368_object; // 0x2cc TMov
	var_1_object = var_367_object; // 0x2cd TMov
	var_3_string = 0; // 0x2ce TMovB
	var_373_int = 1; // 0x2cf PushI
	if(var_373_int == 0) goto Label_748; // 0x2d0 JumpB
	var_374_string = ""; // 0x2d1 PushV
	var_374_string = "Neutral"; // 0x2d2 MovS
	func_778(var_368_object, var_374_string); // 0x2d3 NEW_2
	var_382_int = 535284; // 0x2d5 PushI
	SetMessage(var_382_int); // 0x2d6 TObjFunc
	ClearReplies(); // 0x2d8 TObjFunc
	var_383_int = 535285; // 0x2da PushI
	var_384_int = 36962; // 0x2db PushI
	var_385_int = 36961; // 0x2dc PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x2dd TObjFunc
	var_386_int = 535292; // 0x2df PushI
	var_387_int = -1; // 0x2e0 PushI
	var_388_int = 36968; // 0x2e1 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x2e2 TObjFunc
	var_389_int = 535293; // 0x2e4 PushI
	var_390_int = -1; // 0x2e5 PushI
	var_391_int = 36969; // 0x2e6 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x2e7 TObjFunc
	goto Label_748; // 0x2e9 Jump
	
Label_748:
	var_392_bool = 0; // 0x2ec PushV
	func_1730(var_392_bool); // 0x2ed NEW_2
	if(var_392_bool == 0) goto Label_763; // 0x2ef JumpB
	
Label_752:
	lshWaitForAnimEnd(); // 0x2f0 Func
	var_393_string = var_3_string; // 0x2f2 PushT
	if(var_393_string == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_762; // 0x2f4 Jump
	
Label_762:
	goto Label_777; // 0x2fa Jump
	
Label_777:
	return 0; // 0x309 Return
	
Label_757:
	var_394_string = ""; // 0x2f5 PushV
	var_394_string = var_2_object; // 0x2f6 MovT
	func_1609(var_394_string); // 0x2f7 NEW_2
	goto Label_752; // 0x2f9 Jump
	
Label_763:
	var_395_string = "all"; // 0x2fb PushS
	var_396_string = "idle"; // 0x2fc PushS
	PlayAnimation(var_395_string, var_396_string); // 0x2fd Func
	
Label_767:
	WaitForAnimEnd(); // 0x2ff Func
	var_397_string = var_3_string; // 0x301 PushT
	if(var_397_string == 0) goto Label_772; // 0x302 JumpB
	goto Label_777; // 0x303 Jump
	
Label_772:
	var_398_string = "all"; // 0x304 PushS
	var_399_string = "idle"; // 0x305 PushS
	PlayAnimation(var_398_string, var_399_string); // 0x306 Func
	goto Label_767; // 0x308 Jump
}


func_1100(var_0_object)
{
	var_21_bool = 0; // 0x44c PushV
	func_1379(var_21_bool); // 0x44d NEW_2
	var_24_bool = var_21_bool == 0; // 0x44f Not
	if(var_24_bool == 0) goto Label_1107; // 0x450 JumpB
	Hold(); // 0x451 Func
	
Label_1107:
	GetDirection(var_0_object); // 0x453 Func
	
Label_1109:
	func_1276(); // 0x456 NEW_2
	goto Label_1109; // 0x458 Jump
}


func_1741(var_314_bool)
{
	var_316_int = 0; var_317_string = ""; // 0x6ce PushV
	var_317_string = "k9q01"; // 0x6cf MovS
	func_1678(var_316_int, var_317_string); // 0x6d0 NEW_2
	var_320_int = 5; // 0x6d2 PushI
	var_321_bool = var_316_int == var_320_int; // 0x6d3 Eq
	if(var_321_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_314_bool = 1; // 0x6d5 MovB
	return 0; // 0x6d6 Return
	
Label_1751:
	var_314_bool = 0; // 0x6d7 MovB
	return 0; // 0x6d8 Return
}


func_974(var_0_object, var_1_object, var_2_object, var_3_string, var_426_object, var_427_object)
{
	var_0_object = var_427_object; // 0x3cf TMov
	var_1_object = var_426_object; // 0x3d0 TMov
	var_3_string = 0; // 0x3d1 TMovB
	var_432_int = 1; // 0x3d2 PushI
	if(var_432_int == 0) goto Label_1002; // 0x3d3 JumpB
	var_433_string = ""; // 0x3d4 PushV
	var_433_string = "Neutral"; // 0x3d5 MovS
	func_1032(var_427_object, var_433_string); // 0x3d6 NEW_2
	var_441_int = 540545; // 0x3d8 PushI
	SetMessage(var_441_int); // 0x3d9 TObjFunc
	ClearReplies(); // 0x3db TObjFunc
	var_442_int = 540546; // 0x3dd PushI
	var_443_int = -1; // 0x3de PushI
	var_444_int = 42555; // 0x3df PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x3e0 TObjFunc
	var_445_int = 540798; // 0x3e2 PushI
	var_446_int = -1; // 0x3e3 PushI
	var_447_int = 42847; // 0x3e4 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x3e5 TObjFunc
	goto Label_1002; // 0x3e7 Jump
	
Label_1002:
	var_448_bool = 0; // 0x3ea PushV
	func_1730(var_448_bool); // 0x3eb NEW_2
	if(var_448_bool == 0) goto Label_1017; // 0x3ed JumpB
	
Label_1006:
	lshWaitForAnimEnd(); // 0x3ee Func
	var_449_string = var_3_string; // 0x3f0 PushT
	if(var_449_string == 0) goto Label_1011; // 0x3f1 JumpB
	goto Label_1016; // 0x3f2 Jump
	
Label_1016:
	goto Label_1031; // 0x3f8 Jump
	
Label_1031:
	return 0; // 0x407 Return
	
Label_1011:
	var_450_string = ""; // 0x3f3 PushV
	var_450_string = var_2_object; // 0x3f4 MovT
	func_1609(var_450_string); // 0x3f5 NEW_2
	goto Label_1006; // 0x3f7 Jump
	
Label_1017:
	var_451_string = "all"; // 0x3f9 PushS
	var_452_string = "idle"; // 0x3fa PushS
	PlayAnimation(var_451_string, var_452_string); // 0x3fb Func
	
Label_1021:
	WaitForAnimEnd(); // 0x3fd Func
	var_453_string = var_3_string; // 0x3ff PushT
	if(var_453_string == 0) goto Label_1026; // 0x400 JumpB
	goto Label_1031; // 0x401 Jump
	
Label_1026:
	var_454_string = "all"; // 0x402 PushS
	var_455_string = "idle"; // 0x403 PushS
	PlayAnimation(var_454_string, var_455_string); // 0x404 Func
	goto Label_1021; // 0x406 Jump
}


func_1360(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x550 PushV
	GetPosition(var_34_cvector); // 0x551 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x553 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x554 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x555 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x556 Func
	var_29_bool = var_36_bool; // 0x558 Mov
	return 6; // 0x559 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_298_object, var_299_object)
{
	var_0_object = var_299_object; // 0x52 TMov
	var_1_object = var_298_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_304_int = 1; // 0x55 PushI
	if(var_304_int == 0) goto Label_119; // 0x56 JumpB
	var_305_string = ""; // 0x57 PushV
	var_305_string = "Neutral"; // 0x58 MovS
	func_149(var_299_object, var_305_string); // 0x59 NEW_2
	var_313_int = 526521; // 0x5b PushI
	SetMessage(var_313_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x60 PushV
	var_315_object = var_1_object; // 0x61 MovT
	func_1741(var_315_object); // 0x62 NEW_2
	if(var_314_bool == 0) goto Label_106; // 0x64 JumpB
	var_322_int = 526522; // 0x65 PushI
	var_323_int = 27789; // 0x66 PushI
	var_324_int = 27788; // 0x67 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x68 TObjFunc
	
Label_106:
	var_325_int = 526525; // 0x6a PushI
	var_326_int = -1; // 0x6b PushI
	var_327_int = 27791; // 0x6c PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x6d TObjFunc
	var_328_int = 541603; // 0x6f PushI
	var_329_int = -1; // 0x70 PushI
	var_330_int = 43771; // 0x71 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_331_bool = 0; // 0x77 PushV
	func_1730(var_331_bool); // 0x78 NEW_2
	if(var_331_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_332_string = var_3_string; // 0x7d PushT
	if(var_332_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_333_string = ""; // 0x80 PushV
	var_333_string = var_2_object; // 0x81 MovT
	func_1609(var_333_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_334_string = "all"; // 0x86 PushS
	var_335_string = "idle"; // 0x87 PushS
	PlayAnimation(var_334_string, var_335_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_336_string = var_3_string; // 0x8c PushT
	if(var_336_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_337_string = "all"; // 0x8f PushS
	var_338_string = "idle"; // 0x90 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_466(var_0_object, var_1_object, var_2_object, var_3_string, var_211_object, var_212_object)
{
	var_0_object = var_212_object; // 0x1d3 TMov
	var_1_object = var_211_object; // 0x1d4 TMov
	var_3_string = 0; // 0x1d5 TMovB
	var_217_int = 1; // 0x1d6 PushI
	if(var_217_int == 0) goto Label_494; // 0x1d7 JumpB
	var_218_string = ""; // 0x1d8 PushV
	var_218_string = "Neutral"; // 0x1d9 MovS
	func_524(var_212_object, var_218_string); // 0x1da NEW_2
	var_235_int = 529675; // 0x1dc PushI
	SetMessage(var_235_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_236_int = 529676; // 0x1e1 PushI
	var_237_int = 43773; // 0x1e2 PushI
	var_238_int = 31139; // 0x1e3 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1e4 TObjFunc
	var_239_int = 541604; // 0x1e6 PushI
	var_240_int = 43774; // 0x1e7 PushI
	var_241_int = 43772; // 0x1e8 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1e9 TObjFunc
	goto Label_494; // 0x1eb Jump
	
Label_494:
	var_242_bool = 0; // 0x1ee PushV
	func_1730(var_242_bool); // 0x1ef NEW_2
	if(var_242_bool == 0) goto Label_509; // 0x1f1 JumpB
	
Label_498:
	lshWaitForAnimEnd(); // 0x1f2 Func
	var_243_string = var_3_string; // 0x1f4 PushT
	if(var_243_string == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_508; // 0x1f6 Jump
	
Label_508:
	goto Label_523; // 0x1fc Jump
	
Label_523:
	return 0; // 0x20b Return
	
Label_503:
	var_244_string = ""; // 0x1f7 PushV
	var_244_string = var_2_object; // 0x1f8 MovT
	func_1609(var_244_string); // 0x1f9 NEW_2
	goto Label_498; // 0x1fb Jump
	
Label_509:
	var_255_string = "all"; // 0x1fd PushS
	var_256_string = "idle"; // 0x1fe PushS
	PlayAnimation(var_255_string, var_256_string); // 0x1ff Func
	
Label_513:
	WaitForAnimEnd(); // 0x201 Func
	var_257_string = var_3_string; // 0x203 PushT
	if(var_257_string == 0) goto Label_518; // 0x204 JumpB
	goto Label_523; // 0x205 Jump
	
Label_518:
	var_258_string = "all"; // 0x206 PushS
	var_259_string = "idle"; // 0x207 PushS
	PlayAnimation(var_258_string, var_259_string); // 0x208 Func
	goto Label_513; // 0x20a Jump
}


func_1625(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x659 PushV
	lshHasAnimation(var_229_bool, var_222_string); // 0x65a Func
	var_232_bool = var_229_bool; // 0x65c Push
	if(var_232_bool == 0) goto Label_1635; // 0x65d JumpB
	lshGetAnimTimes(var_222_string, var_230_float, var_231_float); // 0x65e Func
	lshPlayAnimation(var_230_float, var_231_float, var_223_bool); // 0x660 Func
	goto Label_1639; // 0x662 Jump
	
Label_1639:
	return 6; // 0x667 Return
	
Label_1635:
	var_233_string = "Can't find lsh animation : "; // 0x663 PushS
	var_234_int = var_233_string + var_222_string; // 0x664 Add
	Trace(var_234_int); // 0x665 Func
}


func_1370(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x55a PushV
	GetPosition(var_28_cvector); // 0x55b ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x55d PushV
	var_30_cvector = var_28_cvector; // 0x55e Mov
	func_1360(var_29_bool, var_30_cvector); // 0x55f NEW_2
	var_25_bool = var_29_bool; // 0x560 Mov
	return 2; // 0x562 Return
}


func_1114(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x45a PushV
	var_49_string = "player"; // 0x45b PushS
	FindActor(var_48_object, var_49_string); // 0x45c Func
	var_50_bool = var_48_object == 0; // 0x45e Not
	if(var_50_bool == 0) goto Label_1122; // 0x45f JumpB
	var_46_bool = 0; // 0x460 MovB
	return 2; // 0x461 Return
	
Label_1122:
	var_51_bool = 0; var_52_object = Obj(); // 0x462 PushV
	var_52_object = var_48_object; // 0x463 Mov
	func_1370(var_52_object); // 0x464 NEW_2
	var_46_bool = var_51_bool; // 0x465 Mov
	return 2; // 0x467 Return
}


func_1753()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x6d9 PushV
	var_33_int = 523; // 0x6da PushI
	var_34_int = 1; // 0x6db PushI
	var_35_int = 529815; // 0x6dc PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x6dd Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x6df PushV
	var_37_object = var_32_object; // 0x6e0 Mov
	var_38_int = 517; // 0x6e1 MovI
	func_1779(var_36_bool, var_37_object, var_38_int); // 0x6e2 NEW_2
	return 2; // 0x6e4 Return
}


func_1379(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x563 PushV
	IsLoaded(var_23_bool); // 0x564 Func
	var_21_bool = var_23_bool; // 0x566 Mov
	return 2; // 0x567 Return
}


func_1766(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x6e6 PushV
	GetDiaryRoot(var_47_object); // 0x6e7 Func
	var_48_bool = var_47_object == 0; // 0x6e9 Not
	if(var_48_bool == 0) goto Label_1776; // 0x6ea JumpB
	var_49_string = "Can't retrieve diary root"; // 0x6eb PushS
	Trace(var_49_string); // 0x6ec Func
	var_45_object = 0; // 0x6ee MovB
	return 2; // 0x6ef Return
	
Label_1776:
	var_45_object = var_47_object; // 0x6f0 Mov
	return 2; // 0x6f1 Return
}


func_1384(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x568 PushV
	GetPosition(var_68_cvector); // 0x569 ObjFunc
	GetEyesHeight(var_67_float); // 0x56b ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x56d PushE
	var_76_float = var_76_float + var_67_float; // 0x56e Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x56f PopE
	GetPosition(var_69_cvector); // 0x570 Func
	GetEyesHeight(var_67_float); // 0x572 Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x574 PushE
	var_77_float = var_77_float + var_67_float; // 0x575 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x576 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x577 Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x578 PushE
	var_78_float = 0; // 0x579 MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x57a PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x57b Or
	var_80_float = sqrt(var_79_int); // 0x57c Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x57d Div2
	var_71_cvector = -var_70_cvector; // 0x57e Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x57f Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x580 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x581 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x582 Xor2
	func_1668(var_82_cvector, var_83_cvector); // 0x583 NEW_2
	var_90_int = 25; // 0x585 PushI
	var_91_float = var_82_cvector * var_90_int; // 0x586 Mult
	var_92_int = var_81_float + var_91_float; // 0x587 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x588 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x589 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x58a Add2
	IsOverrideActive(var_74_bool); // 0x58b Func
	var_94_bool = var_74_bool; // 0x58d Push
	if(var_94_bool == 0) goto Label_1425; // 0x58e JumpB
	var_55_bool = 0; // 0x58f MovB
	return 18; // 0x590 Return
	
Label_1425:
	StopWorld(); // 0x591 Func
	var_95_bool = 1; // 0x593 PushB
	CameraTransit(var_73_cvector, var_71_cvector, var_95_bool); // 0x594 Func
	var_96_float = GetByIndex(var_72_cvector, 0); // 0x596 PushE
	var_97_float = GetByIndex(var_72_cvector, 2); // 0x597 PushE
	Rotate(var_96_float, var_97_float); // 0x598 Func
	var_98_bool = 0; // 0x59a PushV
	func_1730(var_98_bool); // 0x59b NEW_2
	if(var_98_bool == 0) goto Label_1439; // 0x59d JumpB
	goto Label_1447; // 0x59e Jump
	
Label_1447:
	CameraWaitForPlayFinish(); // 0x5a7 Func
	ResumeWorld(); // 0x5a9 Func
	var_55_bool = 1; // 0x5ab MovB
	return 18; // 0x5ac Return
	
Label_1439:
	var_99_string = "head"; // 0x59f PushS
	HasAnimationTrack(var_75_bool, var_99_string); // 0x5a0 Func
	var_100_bool = var_75_bool; // 0x5a2 Push
	if(var_100_bool == 0) goto Label_1447; // 0x5a3 JumpB
	var_101_string = "head"; // 0x5a4 PushS
	LookAsyncCamera(var_101_string); // 0x5a5 Func
}


func_1129(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x469 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x46a PushE
	RotateAsync(var_98_float, var_99_float); // 0x46b Func
	return 0; // 0x46d Return
}


func_1640(var_150_bool, var_151_string)
{
	var_152_bool = 0; var_153_bool = 0; // 0x668 PushV
	var_154_bool = 0; // 0x669 PushV
	func_1730(var_154_bool); // 0x66a NEW_2
	if(var_154_bool == 0) goto Label_1653; // 0x66c JumpB
	lshHasSpeech(var_153_bool, var_151_string); // 0x66d Func
	var_155_bool = var_153_bool; // 0x66f Push
	if(var_155_bool == 0) goto Label_1653; // 0x670 JumpB
	lshPlaySpeech(var_151_string); // 0x671 Func
	var_150_bool = 1; // 0x673 MovB
	return 2; // 0x674 Return
	
Label_1653:
	var_150_bool = 0; // 0x675 MovB
	return 2; // 0x676 Return
}


func_1134(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x46e PushV
	var_34_string = "player"; // 0x46f PushS
	FindActor(var_32_object, var_34_string); // 0x470 Func
	var_35_bool = var_32_object == 0; // 0x472 Not
	if(var_35_bool == 0) goto Label_1142; // 0x473 JumpB
	var_29_bool = 0; // 0x474 MovB
	return 4; // 0x475 Return
	
Label_1142:
	var_36_float = 0; var_37_object = Obj(); // 0x476 PushV
	var_37_object = var_32_object; // 0x477 Mov
	func_1352(var_37_object); // 0x478 NEW_2
	var_44_float = 90000.0; // 0x47a PushF
	var_45_bool = var_36_float > var_44_float; // 0x47b GT
	if(var_45_bool == 0) goto Label_1151; // 0x47c JumpB
	var_29_bool = 0; // 0x47d MovB
	return 4; // 0x47e Return
	
Label_1151:
	CanSee(var_33_bool, var_32_object); // 0x47f Func
	var_29_bool = var_33_bool; // 0x481 Mov
	return 4; // 0x482 Return
}


func_1779(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x6f3 PushV
	var_45_object = Obj(); // 0x6f4 PushV
	func_1766(var_45_object); // 0x6f5 NEW_2
	var_42_object = var_45_object; // 0x6f6 Mov
	Find(var_38_int, var_43_object); // 0x6f8 ObjFunc
	var_50_bool = var_43_object == 0; // 0x6fa Not
	if(var_50_bool == 0) goto Label_1794; // 0x6fb JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x6fc PushS
	var_52_int = var_51_string + var_38_int; // 0x6fd Add
	Trace(var_52_int); // 0x6fe Func
	var_36_bool = 0; // 0x700 MovB
	return 6; // 0x701 Return
	
Label_1794:
	AddChild(var_37_object); // 0x702 ObjFunc
	var_53_int = 7; // 0x704 PushI
	SendWorldWndMessage(var_53_int); // 0x705 Func
	GetCategory(var_44_int); // 0x707 ObjFunc
	SetDiarySection(var_44_int); // 0x709 Func
	var_36_bool = 0; // 0x70b MovB
	return 6; // 0x70c Return
}


func_1655()
{
	var_24_bool = 0; // 0x677 PushV
	func_1730(var_24_bool); // 0x678 NEW_2
	if(var_24_bool == 0) goto Label_1661; // 0x67a JumpB
	lshStopSpeech(); // 0x67b Func
	
Label_1661:
	return 0; // 0x67d Return
}


func_1529(var_127_bool)
{
	var_129_string = ""; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_string = ""; var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; // 0x5f9 PushV
	var_134_string = "c"; // 0x5fa MovS
	var_135_int = 0; // 0x5fb MovI
	
Label_1532:
	var_139_int = 1; // 0x5fc PushI
	if(var_139_int == 0) goto Label_1545; // 0x5fd JumpB
	var_140_int = 1; // 0x5fe PushI
	var_141_int = var_135_int + var_140_int; // 0x5ff Add
	var_142_int = var_134_string + var_141_int; // 0x600 Add
	HasProperty(var_142_int, var_136_bool); // 0x601 ObjFunc
	var_143_bool = var_136_bool == 0; // 0x603 Not
	if(var_143_bool == 0) goto Label_1542; // 0x604 JumpB
	goto Label_1545; // 0x605 Jump
	
Label_1545:
	var_144_bool = var_135_int == 0; // 0x609 Not
	if(var_144_bool == 0) goto Label_1549; // 0x60a JumpB
	var_127_bool = 0; // 0x60b MovB
	return 10; // 0x60c Return
	
Label_1549:
	var_137_int = 0; // 0x60d MovI
	var_145_int = 1; // 0x60e PushI
	var_146_bool = var_135_int > var_145_int; // 0x60f GT
	if(var_146_bool == 0) goto Label_1555; // 0x610 JumpB
	irand(var_137_int, var_135_int); // 0x611 Func
	
Label_1555:
	var_147_int = 1; // 0x613 PushI
	var_148_int = var_137_int + var_147_int; // 0x614 Add
	var_149_int = var_134_string + var_148_int; // 0x615 Add
	GetProperty(var_149_int, var_138_string); // 0x616 ObjFunc
	var_150_bool = 0; var_151_string = ""; // 0x618 PushV
	var_151_string = var_138_string; // 0x619 Mov
	func_1640(var_150_bool, var_151_string); // 0x61a NEW_2
	var_127_bool = var_150_bool; // 0x61b Mov
	return 10; // 0x61d Return
	
Label_1542:
	var_156_int = 1; // 0x606 PushI
	var_135_int = var_135_int + var_156_int; // 0x607 Add2
	goto Label_1532; // 0x608 Jump
}


func_634(var_0_object, var_343_int, var_344_object)
{
	var_346_object = Obj(); var_347_bool = 0; var_348_int = 0; var_349_bool = 0; var_350_object = Obj(); var_351_bool = 0; var_352_int = 0; var_353_bool = 0; // 0x27a PushV
	var_0_object = var_344_object; // 0x27b TMov
	var_354_bool = 0; var_355_object = Obj(); var_356_float = 0; // 0x27c PushV
	var_355_object = var_344_object; // 0x27d Mov
	var_356_float = 70.0; // 0x27e MovF
	func_1384(var_355_object, var_356_float); // 0x27f NEW_2
	var_357_bool = var_354_bool == 0; // 0x281 Not
	if(var_357_bool == 0) goto Label_645; // 0x282 JumpB
	var_343_int = -2; // 0x283 MovI
	return 8; // 0x284 Return
	
Label_645:
	CreateDialog(var_350_object); // 0x285 Func
	var_358_int = 0; // 0x287 PushV
	func_1724(var_358_int); // 0x288 NEW_2
	SetNPCName(var_358_int); // 0x28a ObjFunc
	var_359_int = 0; // 0x28c PushV
	func_1722(var_359_int); // 0x28d NEW_2
	SetNPCDescription(var_359_int); // 0x28f ObjFunc
	var_360_string = ""; // 0x291 PushV
	func_1726(var_360_string); // 0x292 NEW_2
	SetPhoto(var_360_string); // 0x294 ObjFunc
	var_361_string = ""; // 0x296 PushV
	func_1728(var_361_string); // 0x297 NEW_2
	SetPhoto2(var_361_string); // 0x299 ObjFunc
	var_362_int = 0; // 0x29b PushV
	func_1807(var_362_int); // 0x29c NEW_2
	SetPlayerName(var_362_int); // 0x29e ObjFunc
	var_352_int = -1; // 0x2a0 MovI
	IsOverrideActive(var_351_bool); // 0x2a1 Func
	var_363_bool = var_351_bool; // 0x2a3 Push
	if(var_363_bool == 0) goto Label_679; // 0x2a4 JumpB
	var_343_int = -2; // 0x2a5 MovI
	return 8; // 0x2a6 Return
	
Label_679:
	DoDialog(var_350_object); // 0x2a7 Func
	var_364_bool = 0; var_365_object = Obj(); // 0x2a9 PushV
	var_366_object = Obj(); // 0x2aa PushV
	func_1662(var_366_object); // 0x2ab NEW_2
	var_365_object = var_366_object; // 0x2ac Mov
	func_1471(var_364_bool, var_365_object); // 0x2ae NEW_2
	var_367_object = Obj(); var_368_object = Obj(); // 0x2b0 PushV
	var_367_object = var_344_object; // 0x2b1 Mov
	var_368_object = var_350_object; // 0x2b2 Mov
	TaskCall(5); // 0x2b3 TaskCall
	func_715(var_369_object, var_370_object, var_371_string, var_372_bool, var_367_object, var_368_object); // 0x2b4 NEW_2
	TaskReturn(); // 0x2b5 TaskReturn
	IsDialogEnd(var_353_bool); // 0x2b7 ObjFunc
	
Label_697:
	var_400_bool = var_353_bool == 0; // 0x2b9 Not
	if(var_400_bool == 0) goto Label_704; // 0x2ba JumpB
	sync(); // 0x2bb Func
	IsDialogEnd(var_353_bool); // 0x2bd ObjFunc
	goto Label_697; // 0x2bf Jump
	
Label_704:
	var_401_object = Obj(); // 0x2c0 PushV
	var_401_object = var_344_object; // 0x2c1 Mov
	func_1453(); // 0x2c2 NEW_2
	StopDialog(var_350_object); // 0x2c4 Func
	GetReturnValue(var_352_int); // 0x2c6 ObjFunc
	var_343_int = var_352_int; // 0x2c8 Mov
	return 8; // 0x2c9 Return
}


func_1276()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x4fc PushV
	WaitForAnimEnd(); // 0x4fd Func
	var_37_bool = 0; // 0x4ff PushV
	func_1379(var_37_bool); // 0x500 NEW_2
	var_38_bool = var_37_bool == 0; // 0x502 Not
	if(var_38_bool == 0) goto Label_1285; // 0x503 JumpB
	return 12; // 0x504 Return
	
Label_1285:
	var_39_int = 0; // 0x505 PushV
	func_1705(var_39_int); // 0x506 NEW_2
	var_31_int = var_39_int; // 0x507 Mov
	var_32_int = 0; // 0x509 MovI
	
Label_1290:
	var_52_bool = 0; // 0x50a PushV
	var_52_bool = 0; // 0x50b MovB
	var_53_int = 5; // 0x50c PushI
	var_54_bool = var_32_int < var_53_int; // 0x50d LT
	if(var_54_bool == 0) goto Label_1300; // 0x50e JumpB
	var_55_bool = 0; // 0x50f PushV
	func_1379(var_55_bool); // 0x510 NEW_2
	if(var_55_bool == 0) goto Label_1300; // 0x512 JumpB
	var_52_bool = 1; // 0x513 MovB
	
Label_1300:
	if(var_52_bool == 0) goto Label_1342; // 0x514 JumpB
	var_56_bool = var_31_int == 0; // 0x515 Not
	if(var_56_bool == 0) goto Label_1310; // 0x516 JumpB
	var_57_int = 3; // 0x517 PushI
	Sleep(var_57_int, var_33_bool); // 0x518 Func
	var_58_bool = var_33_bool == 0; // 0x51a Not
	if(var_58_bool == 0) goto Label_1309; // 0x51b JumpB
	goto Label_1342; // 0x51c Jump
	
Label_1342:
	ResetAAS(); // 0x53e Func
	return 12; // 0x540 Return
	
Label_1309:
	goto Label_1331; // 0x51d Jump
	
Label_1331:
	var_59_bool = 0; // 0x533 PushV
	func_1345(var_59_bool); // 0x534 NEW_2
	var_60_bool = var_59_bool == 0; // 0x536 Not
	if(var_60_bool == 0) goto Label_1337; // 0x537 JumpB
	goto Label_1342; // 0x538 Jump
	
Label_1337:
	ResetAAS(); // 0x539 Func
	var_61_int = 1; // 0x53b PushI
	var_32_int = var_32_int + var_61_int; // 0x53c Add2
	goto Label_1290; // 0x53d Jump
	
Label_1310:
	irand(var_34_int, var_31_int); // 0x51e Func
	var_62_int = 5; // 0x520 PushI
	irand(var_35_int, var_62_int); // 0x521 Func
	var_63_int = 0; // 0x523 PushI
	var_64_bool = var_35_int != var_63_int; // 0x524 Neq
	if(var_64_bool == 0) goto Label_1319; // 0x525 JumpB
	var_34_int = 0; // 0x526 MovI
	
Label_1319:
	var_65_string = "all"; // 0x527 PushS
	var_66_string = ""; var_67_int = 0; // 0x528 PushV
	var_67_int = var_34_int; // 0x529 Mov
	func_1698(var_66_string, var_67_int); // 0x52a NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x52c Func
	WaitForAnimEnd(var_36_bool); // 0x52e Func
	var_68_bool = var_36_bool == 0; // 0x530 Not
	if(var_68_bool == 0) goto Label_1331; // 0x531 JumpB
	goto Label_1342; // 0x532 Jump
}


func_893(var_0_object, var_402_int, var_403_object)
{
	var_405_object = Obj(); var_406_bool = 0; var_407_int = 0; var_408_bool = 0; var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0; // 0x37d PushV
	var_0_object = var_403_object; // 0x37e TMov
	var_413_bool = 0; var_414_object = Obj(); var_415_float = 0; // 0x37f PushV
	var_414_object = var_403_object; // 0x380 Mov
	var_415_float = 70.0; // 0x381 MovF
	func_1384(var_414_object, var_415_float); // 0x382 NEW_2
	var_416_bool = var_413_bool == 0; // 0x384 Not
	if(var_416_bool == 0) goto Label_904; // 0x385 JumpB
	var_402_int = -2; // 0x386 MovI
	return 8; // 0x387 Return
	
Label_904:
	CreateDialog(var_409_object); // 0x388 Func
	var_417_int = 0; // 0x38a PushV
	func_1724(var_417_int); // 0x38b NEW_2
	SetNPCName(var_417_int); // 0x38d ObjFunc
	var_418_int = 0; // 0x38f PushV
	func_1722(var_418_int); // 0x390 NEW_2
	SetNPCDescription(var_418_int); // 0x392 ObjFunc
	var_419_string = ""; // 0x394 PushV
	func_1726(var_419_string); // 0x395 NEW_2
	SetPhoto(var_419_string); // 0x397 ObjFunc
	var_420_string = ""; // 0x399 PushV
	func_1728(var_420_string); // 0x39a NEW_2
	SetPhoto2(var_420_string); // 0x39c ObjFunc
	var_421_int = 0; // 0x39e PushV
	func_1807(var_421_int); // 0x39f NEW_2
	SetPlayerName(var_421_int); // 0x3a1 ObjFunc
	var_411_int = -1; // 0x3a3 MovI
	IsOverrideActive(var_410_bool); // 0x3a4 Func
	var_422_bool = var_410_bool; // 0x3a6 Push
	if(var_422_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_402_int = -2; // 0x3a8 MovI
	return 8; // 0x3a9 Return
	
Label_938:
	DoDialog(var_409_object); // 0x3aa Func
	var_423_bool = 0; var_424_object = Obj(); // 0x3ac PushV
	var_425_object = Obj(); // 0x3ad PushV
	func_1662(var_425_object); // 0x3ae NEW_2
	var_424_object = var_425_object; // 0x3af Mov
	func_1471(var_423_bool, var_424_object); // 0x3b1 NEW_2
	var_426_object = Obj(); var_427_object = Obj(); // 0x3b3 PushV
	var_426_object = var_403_object; // 0x3b4 Mov
	var_427_object = var_409_object; // 0x3b5 Mov
	TaskCall(7); // 0x3b6 TaskCall
	func_974(var_428_object, var_429_object, var_430_string, var_431_bool, var_426_object, var_427_object); // 0x3b7 NEW_2
	TaskReturn(); // 0x3b8 TaskReturn
	IsDialogEnd(var_412_bool); // 0x3ba ObjFunc
	
Label_956:
	var_456_bool = var_412_bool == 0; // 0x3bc Not
	if(var_456_bool == 0) goto Label_963; // 0x3bd JumpB
	sync(); // 0x3be Func
	IsDialogEnd(var_412_bool); // 0x3c0 ObjFunc
	goto Label_956; // 0x3c2 Jump
	
Label_963:
	var_457_object = Obj(); // 0x3c3 PushV
	var_457_object = var_403_object; // 0x3c4 Mov
	func_1453(); // 0x3c5 NEW_2
	StopDialog(var_409_object); // 0x3c7 Func
	GetReturnValue(var_411_int); // 0x3c9 ObjFunc
	var_402_int = var_411_int; // 0x3cb Mov
	return 8; // 0x3cc Return
}


func_1662(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x67e PushV
	self(var_120_object); // 0x67f Func
	var_118_object = var_120_object; // 0x681 Mov
	return 2; // 0x682 Return
}


