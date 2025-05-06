task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xac PushI
	if(var_23_int == 0) goto Label_384; // 0xad JumpB
	func_1653(); // 0xaf NEW_2
	var_25_int = 30413; // 0xb1 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xb2 Eq
	if(var_26_bool == 0) goto Label_185; // 0xb3 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xb4 PushV
	var_27_object = var_1_object; // 0xb5 MovT
	var_28_object = var_0_object; // 0xb6 MovT
	func_1730(); // 0xb7 NEW_2
	
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
	func_1739(var_75_object); // 0xc7 NEW_2
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
	func_1728(var_153_bool); // 0x176 NEW_2
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
	func_1653(); // 0x226 NEW_2
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
	func_1728(var_71_bool); // 0x26f NEW_2
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
	func_1653(); // 0x324 NEW_2
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
	func_1728(var_74_bool); // 0x372 NEW_2
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
	func_1653(); // 0x422 NEW_2
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
	func_1728(var_51_bool); // 0x43d NEW_2
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
	func_1660(var_67_object); // 0x4aa NEW_2
	var_66_object = var_67_object; // 0x4ab Mov
	func_1527(var_66_object); // 0x4ad NEW_2
	
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
	func_1607(var_22_string); // 0x4cd NEW_2
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
	func_1607(var_28_string); // 0x4dc NEW_2
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
	func_1822(var_39_object); // 0x4ef NEW_2
	var_456_string = ""; // 0x4f1 PushV
	var_456_string = "Neutral"; // 0x4f2 MovS
	func_1607(var_456_string); // 0x4f3 NEW_2
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


func_0(var_0_object, var_272_int, var_273_object)
{
	var_275_object = Obj(); var_276_bool = 0; var_277_int = 0; var_278_bool = 0; var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; // 0x0 PushV
	var_0_object = var_273_object; // 0x1 TMov
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; // 0x2 PushV
	var_284_object = var_273_object; // 0x3 Mov
	var_285_float = 70.0; // 0x4 MovF
	func_1384(var_284_object, var_285_float); // 0x5 NEW_2
	var_286_bool = var_283_bool == 0; // 0x7 Not
	if(var_286_bool == 0) goto Label_11; // 0x8 JumpB
	var_272_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_279_object); // 0xb Func
	var_287_int = 0; // 0xd PushV
	func_1722(var_287_int); // 0xe NEW_2
	SetNPCName(var_287_int); // 0x10 ObjFunc
	var_288_int = 0; // 0x12 PushV
	func_1720(var_288_int); // 0x13 NEW_2
	SetNPCDescription(var_288_int); // 0x15 ObjFunc
	var_289_string = ""; // 0x17 PushV
	func_1724(var_289_string); // 0x18 NEW_2
	SetPhoto(var_289_string); // 0x1a ObjFunc
	var_290_string = ""; // 0x1c PushV
	func_1726(var_290_string); // 0x1d NEW_2
	SetPhoto2(var_290_string); // 0x1f ObjFunc
	var_291_int = 0; // 0x21 PushV
	func_1805(var_291_int); // 0x22 NEW_2
	SetPlayerName(var_291_int); // 0x24 ObjFunc
	var_281_int = -1; // 0x26 MovI
	IsOverrideActive(var_280_bool); // 0x27 Func
	var_292_bool = var_280_bool; // 0x29 Push
	if(var_292_bool == 0) goto Label_45; // 0x2a JumpB
	var_272_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_279_object); // 0x2d Func
	var_293_bool = 0; var_294_object = Obj(); // 0x2f PushV
	var_295_object = Obj(); // 0x30 PushV
	func_1660(var_295_object); // 0x31 NEW_2
	var_294_object = var_295_object; // 0x32 Mov
	func_1469(var_293_bool, var_294_object); // 0x34 NEW_2
	var_296_object = Obj(); var_297_object = Obj(); // 0x36 PushV
	var_296_object = var_273_object; // 0x37 Mov
	var_297_object = var_279_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_298_object, var_299_object, var_300_string, var_301_bool, var_296_object, var_297_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_282_bool); // 0x3d ObjFunc
	
Label_63:
	var_337_bool = var_282_bool == 0; // 0x3f Not
	if(var_337_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_282_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_338_object = Obj(); // 0x46 PushV
	var_338_object = var_273_object; // 0x47 Mov
	func_1452(); // 0x48 NEW_2
	StopDialog(var_279_object); // 0x4a Func
	GetReturnValue(var_281_int); // 0x4c ObjFunc
	var_272_int = var_281_int; // 0x4e Mov
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
	var_101_bool = var_55_bool == 0; // 0x188 Not
	if(var_101_bool == 0) goto Label_396; // 0x189 JumpB
	var_44_int = -2; // 0x18a MovI
	return 8; // 0x18b Return
	
Label_396:
	CreateDialog(var_51_object); // 0x18c Func
	var_102_int = 0; // 0x18e PushV
	func_1722(var_102_int); // 0x18f NEW_2
	SetNPCName(var_102_int); // 0x191 ObjFunc
	var_103_int = 0; // 0x193 PushV
	func_1720(var_103_int); // 0x194 NEW_2
	SetNPCDescription(var_103_int); // 0x196 ObjFunc
	var_104_string = ""; // 0x198 PushV
	func_1724(var_104_string); // 0x199 NEW_2
	SetPhoto(var_104_string); // 0x19b ObjFunc
	var_105_string = ""; // 0x19d PushV
	func_1726(var_105_string); // 0x19e NEW_2
	SetPhoto2(var_105_string); // 0x1a0 ObjFunc
	var_106_int = 0; // 0x1a2 PushV
	func_1805(var_106_int); // 0x1a3 NEW_2
	SetPlayerName(var_106_int); // 0x1a5 ObjFunc
	var_53_int = -1; // 0x1a7 MovI
	IsOverrideActive(var_52_bool); // 0x1a8 Func
	var_114_bool = var_52_bool; // 0x1aa Push
	if(var_114_bool == 0) goto Label_430; // 0x1ab JumpB
	var_44_int = -2; // 0x1ac MovI
	return 8; // 0x1ad Return
	
Label_430:
	DoDialog(var_51_object); // 0x1ae Func
	var_115_bool = 0; var_116_object = Obj(); // 0x1b0 PushV
	var_117_object = Obj(); // 0x1b1 PushV
	func_1660(var_117_object); // 0x1b2 NEW_2
	var_116_object = var_117_object; // 0x1b3 Mov
	func_1469(var_115_bool, var_116_object); // 0x1b5 NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x1b7 PushV
	var_210_object = var_45_object; // 0x1b8 Mov
	var_211_object = var_51_object; // 0x1b9 Mov
	TaskCall(3); // 0x1ba TaskCall
	func_466(var_212_object, var_213_object, var_214_string, var_215_bool, var_210_object, var_211_object); // 0x1bb NEW_2
	TaskReturn(); // 0x1bc TaskReturn
	IsDialogEnd(var_54_bool); // 0x1be ObjFunc
	
Label_448:
	var_259_bool = var_54_bool == 0; // 0x1c0 Not
	if(var_259_bool == 0) goto Label_455; // 0x1c1 JumpB
	sync(); // 0x1c2 Func
	IsDialogEnd(var_54_bool); // 0x1c4 ObjFunc
	goto Label_448; // 0x1c6 Jump
	
Label_455:
	var_260_object = Obj(); // 0x1c7 PushV
	var_260_object = var_45_object; // 0x1c8 Mov
	func_1452(); // 0x1c9 NEW_2
	StopDialog(var_51_object); // 0x1cb Func
	GetReturnValue(var_53_int); // 0x1cd ObjFunc
	var_44_int = var_53_int; // 0x1cf Mov
	return 8; // 0x1d0 Return
}


func_1666(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0; // 0x682 PushV
	var_87_int = var_83_cvector | var_83_cvector; // 0x683 Or
	var_86_float = sqrt(var_87_int); // 0x684 Sqrt2
	var_88_float = 0.0; // 0x685 PushF
	var_89_bool = var_86_float < var_88_float; // 0x686 LT
	if(var_89_bool == 0) goto Label_1674; // 0x687 JumpB
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x688 MovV
	return 2; // 0x689 Return
	
Label_1674:
	var_82_cvector = var_83_cvector / var_83_cvector; // 0x68a Div2
	return 2; // 0x68b Return
}


func_1156()
{
	var_458_float = 0; var_459_float = 0; // 0x484 PushV
	var_460_int = 8; // 0x485 PushI
	var_461_int = 16; // 0x486 PushI
	rand(var_459_float, var_460_int, var_461_int); // 0x487 Func
	var_462_int = 10; // 0x489 PushI
	SetTimer(var_462_int, var_459_float); // 0x48a Func
	return 2; // 0x48c Return
}


func_1032(var_2_object, var_431_string)
{
	var_432_bool = 0; // 0x409 PushV
	func_1728(var_432_bool); // 0x40a NEW_2
	var_433_bool = var_432_bool == 0; // 0x40c Not
	if(var_433_bool == 0) goto Label_1039; // 0x40d JumpB
	return 0; // 0x40e Return
	
Label_1039:
	var_434_bool = var_431_string == var_2_object; // 0x40f Eq
	if(var_434_bool == 0) goto Label_1042; // 0x410 JumpB
	return 0; // 0x411 Return
	
Label_1042:
	var_435_string = ""; var_436_bool = 0; // 0x412 PushV
	var_435_string = var_431_string; // 0x413 Mov
	var_437_string = ""; // 0x414 PushS
	var_438_bool = var_431_string == var_437_string; // 0x415 Eq
	if(var_438_bool == 0) goto Label_1049; // 0x416 JumpB
	var_436_bool = 0; // 0x417 MovB
	goto Label_1050; // 0x418 Jump
	
Label_1050:
	func_1623(var_435_string, var_436_bool); // 0x41a NEW_2
	var_2_object = var_431_string; // 0x41c TMov
	return 0; // 0x41d Return
	
Label_1049:
	var_436_bool = 1; // 0x419 MovB
}


func_778(var_2_object, var_372_string)
{
	var_373_bool = 0; // 0x30b PushV
	func_1728(var_373_bool); // 0x30c NEW_2
	var_374_bool = var_373_bool == 0; // 0x30e Not
	if(var_374_bool == 0) goto Label_785; // 0x30f JumpB
	return 0; // 0x310 Return
	
Label_785:
	var_375_bool = var_372_string == var_2_object; // 0x311 Eq
	if(var_375_bool == 0) goto Label_788; // 0x312 JumpB
	return 0; // 0x313 Return
	
Label_788:
	var_376_string = ""; var_377_bool = 0; // 0x314 PushV
	var_376_string = var_372_string; // 0x315 Mov
	var_378_string = ""; // 0x316 PushS
	var_379_bool = var_372_string == var_378_string; // 0x317 Eq
	if(var_379_bool == 0) goto Label_795; // 0x318 JumpB
	var_377_bool = 0; // 0x319 MovB
	goto Label_796; // 0x31a Jump
	
Label_796:
	func_1623(var_376_string, var_377_bool); // 0x31c NEW_2
	var_2_object = var_372_string; // 0x31e TMov
	return 0; // 0x31f Return
	
Label_795:
	var_377_bool = 1; // 0x31b MovB
}


func_524(var_2_object, var_217_string)
{
	var_218_bool = 0; // 0x20d PushV
	func_1728(var_218_bool); // 0x20e NEW_2
	var_219_bool = var_218_bool == 0; // 0x210 Not
	if(var_219_bool == 0) goto Label_531; // 0x211 JumpB
	return 0; // 0x212 Return
	
Label_531:
	var_220_bool = var_217_string == var_2_object; // 0x213 Eq
	if(var_220_bool == 0) goto Label_534; // 0x214 JumpB
	return 0; // 0x215 Return
	
Label_534:
	var_221_string = ""; var_222_bool = 0; // 0x216 PushV
	var_221_string = var_217_string; // 0x217 Mov
	var_223_string = ""; // 0x218 PushS
	var_224_bool = var_217_string == var_223_string; // 0x219 Eq
	if(var_224_bool == 0) goto Label_541; // 0x21a JumpB
	var_222_bool = 0; // 0x21b MovB
	goto Label_542; // 0x21c Jump
	
Label_542:
	func_1623(var_221_string, var_222_bool); // 0x21e NEW_2
	var_2_object = var_217_string; // 0x220 TMov
	return 0; // 0x221 Return
	
Label_541:
	var_222_bool = 1; // 0x21d MovB
}


func_1805(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x70d PushV
	var_109_string = "branch"; // 0x70e PushS
	GetVariable(var_109_string, var_108_int); // 0x70f Func
	var_110_int = 0; // 0x711 PushI
	var_111_bool = var_108_int == var_110_int; // 0x712 Eq
	if(var_111_bool == 0) goto Label_1815; // 0x713 JumpB
	var_106_int = 1; // 0x714 MovI
	return 2; // 0x715 Return
	
Label_1815:
	var_112_int = 1; // 0x717 PushI
	var_113_bool = var_108_int == var_112_int; // 0x718 Eq
	if(var_113_bool == 0) goto Label_1820; // 0x719 JumpB
	var_106_int = 2; // 0x71a MovI
	return 2; // 0x71b Return
	
Label_1820:
	var_106_int = 3; // 0x71c MovI
	return 2; // 0x71d Return
}


func_1165()
{
	var_457_int = 10; // 0x48d PushI
	KillTimer(var_457_int); // 0x48e Func
	return 0; // 0x490 Return
}


func_1676(var_314_int, var_315_string)
{
	var_316_int = 0; var_317_int = 0; // 0x68c PushV
	GetVariable(var_315_string, var_317_int); // 0x68d Func
	var_314_int = var_317_int; // 0x68f Mov
	return 2; // 0x690 Return
}


func_1681(var_170_int)
{
	var_171_float = 0; var_172_float = 0; // 0x691 PushV
	GetGameTime(var_172_float); // 0x692 Func
	var_173_int = 1; // 0x694 PushI
	var_174_int = 0; // 0x695 PushV
	var_175_int = 24; // 0x696 PushI
	var_174_int = var_172_float / var_172_float; // 0x697 Div2
	var_170_int = var_173_int + var_174_int; // 0x698 Add2
	return 2; // 0x699 Return
}


func_149(var_2_object, var_303_string)
{
	var_304_bool = 0; // 0x96 PushV
	func_1728(var_304_bool); // 0x97 NEW_2
	var_305_bool = var_304_bool == 0; // 0x99 Not
	if(var_305_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_306_bool = var_303_string == var_2_object; // 0x9c Eq
	if(var_306_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_307_string = ""; var_308_bool = 0; // 0x9f PushV
	var_307_string = var_303_string; // 0xa0 Mov
	var_309_string = ""; // 0xa1 PushS
	var_310_bool = var_303_string == var_309_string; // 0xa2 Eq
	if(var_310_bool == 0) goto Label_166; // 0xa3 JumpB
	var_308_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_1623(var_307_string, var_308_bool); // 0xa7 NEW_2
	var_2_object = var_303_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_308_bool = 1; // 0xa6 MovB
}


func_1690(var_269_bool, var_270_int)
{
	var_271_int = 0; // 0x69b PushV
	func_1681(var_271_int); // 0x69c NEW_2
	var_269_bool = var_271_int == var_270_int; // 0x69e Eq2
	return 0; // 0x69f Return
}


func_1564(var_157_bool)
{
	var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = ""; var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = ""; // 0x61c PushV
	var_169_string = "d"; // 0x61d PushS
	var_170_int = 0; // 0x61e PushV
	func_1681(var_170_int); // 0x61f NEW_2
	var_176_int = var_169_string + var_170_int; // 0x621 Add
	var_177_string = "m"; // 0x622 PushS
	var_164_string = var_176_int + var_177_string; // 0x623 Add2
	var_165_int = 0; // 0x624 MovI
	
Label_1573:
	var_178_int = 1; // 0x625 PushI
	if(var_178_int == 0) goto Label_1586; // 0x626 JumpB
	var_179_int = 1; // 0x627 PushI
	var_180_int = var_165_int + var_179_int; // 0x628 Add
	var_181_int = var_164_string + var_180_int; // 0x629 Add
	HasProperty(var_181_int, var_166_bool); // 0x62a ObjFunc
	var_182_bool = var_166_bool == 0; // 0x62c Not
	if(var_182_bool == 0) goto Label_1583; // 0x62d JumpB
	goto Label_1586; // 0x62e Jump
	
Label_1586:
	var_183_bool = var_165_int == 0; // 0x632 Not
	if(var_183_bool == 0) goto Label_1590; // 0x633 JumpB
	var_157_bool = 0; // 0x634 MovB
	return 10; // 0x635 Return
	
Label_1590:
	var_167_int = 0; // 0x636 MovI
	var_184_int = 1; // 0x637 PushI
	var_185_bool = var_165_int > var_184_int; // 0x638 GT
	if(var_185_bool == 0) goto Label_1596; // 0x639 JumpB
	irand(var_167_int, var_165_int); // 0x63a Func
	
Label_1596:
	var_186_int = 1; // 0x63c PushI
	var_187_int = var_167_int + var_186_int; // 0x63d Add
	var_188_int = var_164_string + var_187_int; // 0x63e Add
	GetProperty(var_188_int, var_168_string); // 0x63f ObjFunc
	var_189_bool = 0; var_190_string = ""; // 0x641 PushV
	var_190_string = var_168_string; // 0x642 Mov
	func_1638(var_189_bool, var_190_string); // 0x643 NEW_2
	var_157_bool = var_189_bool; // 0x644 Mov
	return 10; // 0x646 Return
	
Label_1583:
	var_191_int = 1; // 0x62f PushI
	var_165_int = var_165_int + var_191_int; // 0x630 Add2
	goto Label_1573; // 0x631 Jump
}


func_1822(var_39_object)
{
	var_40_int = 0; var_41_int = 0; // 0x71e PushV
	var_42_string = "mt_han"; // 0x71f PushS
	GetVariable(var_42_string, var_41_int); // 0x720 Func
	var_43_bool = var_41_int == 0; // 0x722 Not
	if(var_43_bool == 0) goto Label_1838; // 0x723 JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x724 PushV
	var_45_object = var_39_object; // 0x725 Mov
	TaskCall(2); // 0x726 TaskCall
	func_385(var_46_object, var_44_int, var_45_object); // 0x727 NEW_2
	TaskReturn(); // 0x728 TaskReturn
	var_267_string = "mt_han"; // 0x72a PushS
	var_268_int = 1; // 0x72b PushI
	SetVariable(var_267_string, var_268_int); // 0x72c Func
	
Label_1838:
	var_269_bool = 0; var_270_int = 0; // 0x72e PushV
	var_270_int = 9; // 0x72f MovI
	func_1690(var_269_bool, var_270_int); // 0x730 NEW_2
	if(var_269_bool == 0) goto Label_1850; // 0x732 JumpB
	var_272_int = 0; var_273_object = Obj(); // 0x733 PushV
	var_273_object = var_39_object; // 0x734 Mov
	TaskCall(0); // 0x735 TaskCall
	func_0(var_274_object, var_272_int, var_273_object); // 0x736 NEW_2
	TaskReturn(); // 0x737 TaskReturn
	return 2; // 0x739 Return
	
Label_1850:
	var_339_bool = 0; var_340_int = 0; // 0x73a PushV
	var_340_int = 12; // 0x73b MovI
	func_1690(var_339_bool, var_340_int); // 0x73c NEW_2
	if(var_339_bool == 0) goto Label_1862; // 0x73e JumpB
	var_341_int = 0; var_342_object = Obj(); // 0x73f PushV
	var_342_object = var_39_object; // 0x740 Mov
	TaskCall(4); // 0x741 TaskCall
	func_634(var_343_object, var_341_int, var_342_object); // 0x742 NEW_2
	TaskReturn(); // 0x743 TaskReturn
	return 2; // 0x745 Return
	
Label_1862:
	var_400_int = 0; var_401_object = Obj(); // 0x746 PushV
	var_401_object = var_39_object; // 0x747 Mov
	TaskCall(6); // 0x748 TaskCall
	func_893(var_402_object, var_400_int, var_401_object); // 0x749 NEW_2
	TaskReturn(); // 0x74a TaskReturn
	return 2; // 0x74c Return
}


func_1696(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x6a0 PushV
	var_48_string = "idle"; // 0x6a1 MovS
	var_49_int = var_46_int; // 0x6a2 Push
	if(var_49_int == 0) goto Label_1701; // 0x6a3 JumpB
	var_48_string = var_48_string + var_46_int; // 0x6a4 Add2
	
Label_1701:
	var_45_string = var_48_string; // 0x6a5 Mov
	return 2; // 0x6a6 Return
}


func_1660(var_117_object)
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x67c PushV
	self(var_119_object); // 0x67d Func
	var_117_object = var_119_object; // 0x67f Mov
	return 2; // 0x680 Return
}


func_1703(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x6a7 PushV
	var_42_int = 0; // 0x6a8 MovI
	
Label_1705:
	var_44_string = "all"; // 0x6a9 PushS
	var_45_string = ""; var_46_int = 0; // 0x6aa PushV
	var_46_int = var_42_int; // 0x6ab Mov
	func_1696(var_45_string, var_46_int); // 0x6ac NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x6ae Func
	var_50_bool = var_43_bool == 0; // 0x6b0 Not
	if(var_50_bool == 0) goto Label_1715; // 0x6b1 JumpB
	goto Label_1718; // 0x6b2 Jump
	
Label_1718:
	var_39_int = var_42_int; // 0x6b6 Mov
	return 4; // 0x6b7 Return
	
Label_1715:
	var_51_int = 1; // 0x6b3 PushI
	var_42_int = var_42_int + var_51_int; // 0x6b4 Add2
	goto Label_1705; // 0x6b5 Jump
}


func_1452()
{
	var_261_bool = 0; var_262_bool = 0; // 0x5ac PushV
	CameraSwitchToNormal(); // 0x5ad Func
	var_263_bool = 0; // 0x5af PushV
	func_1728(var_263_bool); // 0x5b0 NEW_2
	if(var_263_bool == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1468; // 0x5b3 Jump
	
Label_1468:
	return 2; // 0x5bc Return
	
Label_1460:
	var_264_string = "head"; // 0x5b4 PushS
	HasAnimationTrack(var_262_bool, var_264_string); // 0x5b5 Func
	var_265_bool = var_262_bool; // 0x5b7 Push
	if(var_265_bool == 0) goto Label_1468; // 0x5b8 JumpB
	var_266_string = "head"; // 0x5b9 PushS
	UnlookAsync(var_266_string); // 0x5ba Func
}


func_1720(var_103_int)
{
	var_103_int = 515536; // 0x6b8 MovI
	return 0; // 0x6b9 Return
}


func_1722(var_102_int)
{
	var_102_int = 502861; // 0x6ba MovI
	return 0; // 0x6bb Return
}


func_1724(var_104_string)
{
	var_104_string = "ui/NPC_Han.png"; // 0x6bc MovS
	return 0; // 0x6bd Return
}


func_1469(var_115_bool, var_116_object)
{
	var_120_int = 0; var_121_int = 0; var_122_int = 0; var_123_int = 0; // 0x5bd PushV
	var_124_string = "voice_common"; // 0x5be PushS
	GetVariable(var_124_string, var_122_int); // 0x5bf Func
	var_125_int = var_122_int; // 0x5c1 Push
	if(var_125_int == 0) goto Label_1507; // 0x5c2 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x5c3 PushV
	var_127_object = var_116_object; // 0x5c4 Mov
	func_1527(var_127_object); // 0x5c5 NEW_2
	var_156_bool = var_126_bool == 0; // 0x5c7 Not
	if(var_156_bool == 0) goto Label_1489; // 0x5c8 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x5c9 PushV
	var_158_object = var_116_object; // 0x5ca Mov
	func_1564(var_158_object); // 0x5cb NEW_2
	var_192_bool = var_157_bool == 0; // 0x5cd Not
	if(var_192_bool == 0) goto Label_1489; // 0x5ce JumpB
	var_115_bool = 0; // 0x5cf MovB
	return 4; // 0x5d0 Return
	
Label_1489:
	var_193_int = 2; // 0x5d1 PushI
	irand(var_123_int, var_193_int); // 0x5d2 Func
	var_194_int = var_123_int; // 0x5d4 Push
	if(var_194_int == 0) goto Label_1502; // 0x5d5 JumpB
	var_195_string = "voice_common"; // 0x5d6 PushS
	var_196_int = 1; // 0x5d7 PushI
	var_197_int = var_122_int + var_196_int; // 0x5d8 Add
	var_198_int = 3; // 0x5d9 PushI
	var_199_int = var_197_int / var_198_int; // 0x5da Mod
	SetVariable(var_195_string, var_199_int); // 0x5db Func
	goto Label_1506; // 0x5dd Jump
	
Label_1506:
	goto Label_1525; // 0x5e2 Jump
	
Label_1525:
	var_115_bool = 1; // 0x5f5 MovB
	return 4; // 0x5f6 Return
	
Label_1502:
	var_200_string = "voice_common"; // 0x5de PushS
	var_201_int = 0; // 0x5df PushI
	SetVariable(var_200_string, var_201_int); // 0x5e0 Func
	
Label_1507:
	var_202_bool = 0; var_203_object = Obj(); // 0x5e3 PushV
	var_203_object = var_116_object; // 0x5e4 Mov
	func_1564(var_203_object); // 0x5e5 NEW_2
	var_204_bool = var_202_bool == 0; // 0x5e7 Not
	if(var_204_bool == 0) goto Label_1521; // 0x5e8 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x5e9 PushV
	var_206_object = var_116_object; // 0x5ea Mov
	func_1527(var_206_object); // 0x5eb NEW_2
	var_207_bool = var_205_bool == 0; // 0x5ed Not
	if(var_207_bool == 0) goto Label_1521; // 0x5ee JumpB
	var_115_bool = 0; // 0x5ef MovB
	return 4; // 0x5f0 Return
	
Label_1521:
	var_208_string = "voice_common"; // 0x5f1 PushS
	var_209_int = 1; // 0x5f2 PushI
	SetVariable(var_208_string, var_209_int); // 0x5f3 Func
}


func_1726(var_105_string)
{
	var_105_string = "ui/NPC_Han_b.png"; // 0x6be MovS
	return 0; // 0x6bf Return
}


func_1728(var_97_bool)
{
	var_97_bool = 1; // 0x6c0 MovB
	return 0; // 0x6c1 Return
}


func_1345(var_59_bool)
{
	var_59_bool = 1; // 0x541 MovB
	return 0; // 0x542 Return
}


func_1730()
{
	var_29_string = "k9q01"; // 0x6c3 PushS
	var_30_int = 6; // 0x6c4 PushI
	SetVariable(var_29_string, var_30_int); // 0x6c5 Func
	func_1751(); // 0x6c8 NEW_2
	return 0; // 0x6ca Return
}


func_1347()
{
	StopAnimation(); // 0x543 Func
	StopGroup0(); // 0x545 Func
	return 0; // 0x547 Return
}


func_1607(var_243_string)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0; // 0x647 PushV
	lshHasAnimation(var_247_bool, var_243_string); // 0x648 Func
	var_250_bool = var_247_bool; // 0x64a Push
	if(var_250_bool == 0) goto Label_1618; // 0x64b JumpB
	lshGetAnimTimes(var_243_string, var_248_float, var_249_float); // 0x64c Func
	var_251_bool = 0; // 0x64e PushB
	lshPlayAnimation(var_248_float, var_249_float, var_251_bool); // 0x64f Func
	goto Label_1622; // 0x651 Jump
	
Label_1622:
	return 6; // 0x656 Return
	
Label_1618:
	var_252_string = "Can't find lsh animation : "; // 0x652 PushS
	var_253_int = var_252_string + var_243_string; // 0x653 Add
	Trace(var_253_int); // 0x654 Func
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


func_1739(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x6cc PushV
	var_315_string = "k9q01"; // 0x6cd MovS
	func_1676(var_314_int, var_315_string); // 0x6ce NEW_2
	var_318_int = 5; // 0x6d0 PushI
	var_319_bool = var_314_int == var_318_int; // 0x6d1 Eq
	if(var_319_bool == 0) goto Label_1749; // 0x6d2 JumpB
	var_312_bool = 1; // 0x6d3 MovB
	return 0; // 0x6d4 Return
	
Label_1749:
	var_312_bool = 0; // 0x6d5 MovB
	return 0; // 0x6d6 Return
}


func_715(var_0_object, var_1_object, var_2_object, var_3_string, var_365_object, var_366_object)
{
	var_0_object = var_366_object; // 0x2cc TMov
	var_1_object = var_365_object; // 0x2cd TMov
	var_3_string = 0; // 0x2ce TMovB
	var_371_int = 1; // 0x2cf PushI
	if(var_371_int == 0) goto Label_748; // 0x2d0 JumpB
	var_372_string = ""; // 0x2d1 PushV
	var_372_string = "Neutral"; // 0x2d2 MovS
	func_778(var_366_object, var_372_string); // 0x2d3 NEW_2
	var_380_int = 535284; // 0x2d5 PushI
	SetMessage(var_380_int); // 0x2d6 TObjFunc
	ClearReplies(); // 0x2d8 TObjFunc
	var_381_int = 535285; // 0x2da PushI
	var_382_int = 36962; // 0x2db PushI
	var_383_int = 36961; // 0x2dc PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x2dd TObjFunc
	var_384_int = 535292; // 0x2df PushI
	var_385_int = -1; // 0x2e0 PushI
	var_386_int = 36968; // 0x2e1 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x2e2 TObjFunc
	var_387_int = 535293; // 0x2e4 PushI
	var_388_int = -1; // 0x2e5 PushI
	var_389_int = 36969; // 0x2e6 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x2e7 TObjFunc
	goto Label_748; // 0x2e9 Jump
	
Label_748:
	var_390_bool = 0; // 0x2ec PushV
	func_1728(var_390_bool); // 0x2ed NEW_2
	if(var_390_bool == 0) goto Label_763; // 0x2ef JumpB
	
Label_752:
	lshWaitForAnimEnd(); // 0x2f0 Func
	var_391_string = var_3_string; // 0x2f2 PushT
	if(var_391_string == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_762; // 0x2f4 Jump
	
Label_762:
	goto Label_777; // 0x2fa Jump
	
Label_777:
	return 0; // 0x309 Return
	
Label_757:
	var_392_string = ""; // 0x2f5 PushV
	var_392_string = var_2_object; // 0x2f6 MovT
	func_1607(var_392_string); // 0x2f7 NEW_2
	goto Label_752; // 0x2f9 Jump
	
Label_763:
	var_393_string = "all"; // 0x2fb PushS
	var_394_string = "idle"; // 0x2fc PushS
	PlayAnimation(var_393_string, var_394_string); // 0x2fd Func
	
Label_767:
	WaitForAnimEnd(); // 0x2ff Func
	var_395_string = var_3_string; // 0x301 PushT
	if(var_395_string == 0) goto Label_772; // 0x302 JumpB
	goto Label_777; // 0x303 Jump
	
Label_772:
	var_396_string = "all"; // 0x304 PushS
	var_397_string = "idle"; // 0x305 PushS
	PlayAnimation(var_396_string, var_397_string); // 0x306 Func
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


func_974(var_0_object, var_1_object, var_2_object, var_3_string, var_424_object, var_425_object)
{
	var_0_object = var_425_object; // 0x3cf TMov
	var_1_object = var_424_object; // 0x3d0 TMov
	var_3_string = 0; // 0x3d1 TMovB
	var_430_int = 1; // 0x3d2 PushI
	if(var_430_int == 0) goto Label_1002; // 0x3d3 JumpB
	var_431_string = ""; // 0x3d4 PushV
	var_431_string = "Neutral"; // 0x3d5 MovS
	func_1032(var_425_object, var_431_string); // 0x3d6 NEW_2
	var_439_int = 540545; // 0x3d8 PushI
	SetMessage(var_439_int); // 0x3d9 TObjFunc
	ClearReplies(); // 0x3db TObjFunc
	var_440_int = 540546; // 0x3dd PushI
	var_441_int = -1; // 0x3de PushI
	var_442_int = 42555; // 0x3df PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x3e0 TObjFunc
	var_443_int = 540798; // 0x3e2 PushI
	var_444_int = -1; // 0x3e3 PushI
	var_445_int = 42847; // 0x3e4 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x3e5 TObjFunc
	goto Label_1002; // 0x3e7 Jump
	
Label_1002:
	var_446_bool = 0; // 0x3ea PushV
	func_1728(var_446_bool); // 0x3eb NEW_2
	if(var_446_bool == 0) goto Label_1017; // 0x3ed JumpB
	
Label_1006:
	lshWaitForAnimEnd(); // 0x3ee Func
	var_447_string = var_3_string; // 0x3f0 PushT
	if(var_447_string == 0) goto Label_1011; // 0x3f1 JumpB
	goto Label_1016; // 0x3f2 Jump
	
Label_1016:
	goto Label_1031; // 0x3f8 Jump
	
Label_1031:
	return 0; // 0x407 Return
	
Label_1011:
	var_448_string = ""; // 0x3f3 PushV
	var_448_string = var_2_object; // 0x3f4 MovT
	func_1607(var_448_string); // 0x3f5 NEW_2
	goto Label_1006; // 0x3f7 Jump
	
Label_1017:
	var_449_string = "all"; // 0x3f9 PushS
	var_450_string = "idle"; // 0x3fa PushS
	PlayAnimation(var_449_string, var_450_string); // 0x3fb Func
	
Label_1021:
	WaitForAnimEnd(); // 0x3fd Func
	var_451_string = var_3_string; // 0x3ff PushT
	if(var_451_string == 0) goto Label_1026; // 0x400 JumpB
	goto Label_1031; // 0x401 Jump
	
Label_1026:
	var_452_string = "all"; // 0x402 PushS
	var_453_string = "idle"; // 0x403 PushS
	PlayAnimation(var_452_string, var_453_string); // 0x404 Func
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_296_object, var_297_object)
{
	var_0_object = var_297_object; // 0x52 TMov
	var_1_object = var_296_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_302_int = 1; // 0x55 PushI
	if(var_302_int == 0) goto Label_119; // 0x56 JumpB
	var_303_string = ""; // 0x57 PushV
	var_303_string = "Neutral"; // 0x58 MovS
	func_149(var_297_object, var_303_string); // 0x59 NEW_2
	var_311_int = 526521; // 0x5b PushI
	SetMessage(var_311_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_312_bool = 0; var_313_object = Obj(); // 0x60 PushV
	var_313_object = var_1_object; // 0x61 MovT
	func_1739(var_313_object); // 0x62 NEW_2
	if(var_312_bool == 0) goto Label_106; // 0x64 JumpB
	var_320_int = 526522; // 0x65 PushI
	var_321_int = 27789; // 0x66 PushI
	var_322_int = 27788; // 0x67 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x68 TObjFunc
	
Label_106:
	var_323_int = 526525; // 0x6a PushI
	var_324_int = -1; // 0x6b PushI
	var_325_int = 27791; // 0x6c PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x6d TObjFunc
	var_326_int = 541603; // 0x6f PushI
	var_327_int = -1; // 0x70 PushI
	var_328_int = 43771; // 0x71 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_329_bool = 0; // 0x77 PushV
	func_1728(var_329_bool); // 0x78 NEW_2
	if(var_329_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_330_string = var_3_string; // 0x7d PushT
	if(var_330_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_331_string = ""; // 0x80 PushV
	var_331_string = var_2_object; // 0x81 MovT
	func_1607(var_331_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_332_string = "all"; // 0x86 PushS
	var_333_string = "idle"; // 0x87 PushS
	PlayAnimation(var_332_string, var_333_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_334_string = var_3_string; // 0x8c PushT
	if(var_334_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_335_string = "all"; // 0x8f PushS
	var_336_string = "idle"; // 0x90 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_466(var_0_object, var_1_object, var_2_object, var_3_string, var_210_object, var_211_object)
{
	var_0_object = var_211_object; // 0x1d3 TMov
	var_1_object = var_210_object; // 0x1d4 TMov
	var_3_string = 0; // 0x1d5 TMovB
	var_216_int = 1; // 0x1d6 PushI
	if(var_216_int == 0) goto Label_494; // 0x1d7 JumpB
	var_217_string = ""; // 0x1d8 PushV
	var_217_string = "Neutral"; // 0x1d9 MovS
	func_524(var_211_object, var_217_string); // 0x1da NEW_2
	var_234_int = 529675; // 0x1dc PushI
	SetMessage(var_234_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_235_int = 529676; // 0x1e1 PushI
	var_236_int = 43773; // 0x1e2 PushI
	var_237_int = 31139; // 0x1e3 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1e4 TObjFunc
	var_238_int = 541604; // 0x1e6 PushI
	var_239_int = 43774; // 0x1e7 PushI
	var_240_int = 43772; // 0x1e8 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1e9 TObjFunc
	goto Label_494; // 0x1eb Jump
	
Label_494:
	var_241_bool = 0; // 0x1ee PushV
	func_1728(var_241_bool); // 0x1ef NEW_2
	if(var_241_bool == 0) goto Label_509; // 0x1f1 JumpB
	
Label_498:
	lshWaitForAnimEnd(); // 0x1f2 Func
	var_242_string = var_3_string; // 0x1f4 PushT
	if(var_242_string == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_508; // 0x1f6 Jump
	
Label_508:
	goto Label_523; // 0x1fc Jump
	
Label_523:
	return 0; // 0x20b Return
	
Label_503:
	var_243_string = ""; // 0x1f7 PushV
	var_243_string = var_2_object; // 0x1f8 MovT
	func_1607(var_243_string); // 0x1f9 NEW_2
	goto Label_498; // 0x1fb Jump
	
Label_509:
	var_254_string = "all"; // 0x1fd PushS
	var_255_string = "idle"; // 0x1fe PushS
	PlayAnimation(var_254_string, var_255_string); // 0x1ff Func
	
Label_513:
	WaitForAnimEnd(); // 0x201 Func
	var_256_string = var_3_string; // 0x203 PushT
	if(var_256_string == 0) goto Label_518; // 0x204 JumpB
	goto Label_523; // 0x205 Jump
	
Label_518:
	var_257_string = "all"; // 0x206 PushS
	var_258_string = "idle"; // 0x207 PushS
	PlayAnimation(var_257_string, var_258_string); // 0x208 Func
	goto Label_513; // 0x20a Jump
}


func_1623(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x657 PushV
	lshHasAnimation(var_228_bool, var_221_string); // 0x658 Func
	var_231_bool = var_228_bool; // 0x65a Push
	if(var_231_bool == 0) goto Label_1633; // 0x65b JumpB
	lshGetAnimTimes(var_221_string, var_229_float, var_230_float); // 0x65c Func
	lshPlayAnimation(var_229_float, var_230_float, var_222_bool); // 0x65e Func
	goto Label_1637; // 0x660 Jump
	
Label_1637:
	return 6; // 0x665 Return
	
Label_1633:
	var_232_string = "Can't find lsh animation : "; // 0x661 PushS
	var_233_int = var_232_string + var_221_string; // 0x662 Add
	Trace(var_233_int); // 0x663 Func
}


func_1751()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x6d7 PushV
	var_33_int = 523; // 0x6d8 PushI
	var_34_int = 1; // 0x6d9 PushI
	var_35_int = 529815; // 0x6da PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x6db Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x6dd PushV
	var_37_object = var_32_object; // 0x6de Mov
	var_38_int = 517; // 0x6df MovI
	func_1777(var_36_bool, var_37_object, var_38_int); // 0x6e0 NEW_2
	return 2; // 0x6e2 Return
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


func_1379(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x563 PushV
	IsLoaded(var_23_bool); // 0x564 Func
	var_21_bool = var_23_bool; // 0x566 Mov
	return 2; // 0x567 Return
}


func_1764(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x6e4 PushV
	GetDiaryRoot(var_47_object); // 0x6e5 Func
	var_48_bool = var_47_object == 0; // 0x6e7 Not
	if(var_48_bool == 0) goto Label_1774; // 0x6e8 JumpB
	var_49_string = "Can't retrieve diary root"; // 0x6e9 PushS
	Trace(var_49_string); // 0x6ea Func
	var_45_object = 0; // 0x6ec MovB
	return 2; // 0x6ed Return
	
Label_1774:
	var_45_object = var_47_object; // 0x6ee Mov
	return 2; // 0x6ef Return
}


func_1638(var_149_bool, var_150_string)
{
	var_151_bool = 0; var_152_bool = 0; // 0x666 PushV
	var_153_bool = 0; // 0x667 PushV
	func_1728(var_153_bool); // 0x668 NEW_2
	if(var_153_bool == 0) goto Label_1651; // 0x66a JumpB
	lshHasSpeech(var_152_bool, var_150_string); // 0x66b Func
	var_154_bool = var_152_bool; // 0x66d Push
	if(var_154_bool == 0) goto Label_1651; // 0x66e JumpB
	lshPlaySpeech(var_150_string); // 0x66f Func
	var_149_bool = 1; // 0x671 MovB
	return 2; // 0x672 Return
	
Label_1651:
	var_149_bool = 0; // 0x673 MovB
	return 2; // 0x674 Return
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
	func_1666(var_82_cvector, var_83_cvector); // 0x583 NEW_2
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
	CameraTransit(var_73_cvector, var_71_cvector); // 0x593 Func
	var_95_float = GetByIndex(var_72_cvector, 0); // 0x595 PushE
	var_96_float = GetByIndex(var_72_cvector, 2); // 0x596 PushE
	Rotate(var_95_float, var_96_float); // 0x597 Func
	var_97_bool = 0; // 0x599 PushV
	func_1728(var_97_bool); // 0x59a NEW_2
	if(var_97_bool == 0) goto Label_1438; // 0x59c JumpB
	goto Label_1446; // 0x59d Jump
	
Label_1446:
	CameraWaitForPlayFinish(); // 0x5a6 Func
	ResumeWorld(); // 0x5a8 Func
	var_55_bool = 1; // 0x5aa MovB
	return 18; // 0x5ab Return
	
Label_1438:
	var_98_string = "head"; // 0x59e PushS
	HasAnimationTrack(var_75_bool, var_98_string); // 0x59f Func
	var_99_bool = var_75_bool; // 0x5a1 Push
	if(var_99_bool == 0) goto Label_1446; // 0x5a2 JumpB
	var_100_string = "head"; // 0x5a3 PushS
	LookAsyncCamera(var_100_string); // 0x5a4 Func
}


func_1129(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x469 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x46a PushE
	RotateAsync(var_98_float, var_99_float); // 0x46b Func
	return 0; // 0x46d Return
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


func_1777(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x6f1 PushV
	var_45_object = Obj(); // 0x6f2 PushV
	func_1764(var_45_object); // 0x6f3 NEW_2
	var_42_object = var_45_object; // 0x6f4 Mov
	Find(var_38_int, var_43_object); // 0x6f6 ObjFunc
	var_50_bool = var_43_object == 0; // 0x6f8 Not
	if(var_50_bool == 0) goto Label_1792; // 0x6f9 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x6fa PushS
	var_52_int = var_51_string + var_38_int; // 0x6fb Add
	Trace(var_52_int); // 0x6fc Func
	var_36_bool = 0; // 0x6fe MovB
	return 6; // 0x6ff Return
	
Label_1792:
	AddChild(var_37_object); // 0x700 ObjFunc
	var_53_int = 7; // 0x702 PushI
	SendWorldWndMessage(var_53_int); // 0x703 Func
	GetCategory(var_44_int); // 0x705 ObjFunc
	SetDiarySection(var_44_int); // 0x707 Func
	var_36_bool = 0; // 0x709 MovB
	return 6; // 0x70a Return
}


func_1653()
{
	var_24_bool = 0; // 0x675 PushV
	func_1728(var_24_bool); // 0x676 NEW_2
	if(var_24_bool == 0) goto Label_1659; // 0x678 JumpB
	lshStopSpeech(); // 0x679 Func
	
Label_1659:
	return 0; // 0x67b Return
}


func_1527(var_126_bool)
{
	var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; // 0x5f7 PushV
	var_133_string = "c"; // 0x5f8 MovS
	var_134_int = 0; // 0x5f9 MovI
	
Label_1530:
	var_138_int = 1; // 0x5fa PushI
	if(var_138_int == 0) goto Label_1543; // 0x5fb JumpB
	var_139_int = 1; // 0x5fc PushI
	var_140_int = var_134_int + var_139_int; // 0x5fd Add
	var_141_int = var_133_string + var_140_int; // 0x5fe Add
	HasProperty(var_141_int, var_135_bool); // 0x5ff ObjFunc
	var_142_bool = var_135_bool == 0; // 0x601 Not
	if(var_142_bool == 0) goto Label_1540; // 0x602 JumpB
	goto Label_1543; // 0x603 Jump
	
Label_1543:
	var_143_bool = var_134_int == 0; // 0x607 Not
	if(var_143_bool == 0) goto Label_1547; // 0x608 JumpB
	var_126_bool = 0; // 0x609 MovB
	return 10; // 0x60a Return
	
Label_1547:
	var_136_int = 0; // 0x60b MovI
	var_144_int = 1; // 0x60c PushI
	var_145_bool = var_134_int > var_144_int; // 0x60d GT
	if(var_145_bool == 0) goto Label_1553; // 0x60e JumpB
	irand(var_136_int, var_134_int); // 0x60f Func
	
Label_1553:
	var_146_int = 1; // 0x611 PushI
	var_147_int = var_136_int + var_146_int; // 0x612 Add
	var_148_int = var_133_string + var_147_int; // 0x613 Add
	GetProperty(var_148_int, var_137_string); // 0x614 ObjFunc
	var_149_bool = 0; var_150_string = ""; // 0x616 PushV
	var_150_string = var_137_string; // 0x617 Mov
	func_1638(var_149_bool, var_150_string); // 0x618 NEW_2
	var_126_bool = var_149_bool; // 0x619 Mov
	return 10; // 0x61b Return
	
Label_1540:
	var_155_int = 1; // 0x604 PushI
	var_134_int = var_134_int + var_155_int; // 0x605 Add2
	goto Label_1530; // 0x606 Jump
}


func_634(var_0_object, var_341_int, var_342_object)
{
	var_344_object = Obj(); var_345_bool = 0; var_346_int = 0; var_347_bool = 0; var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; // 0x27a PushV
	var_0_object = var_342_object; // 0x27b TMov
	var_352_bool = 0; var_353_object = Obj(); var_354_float = 0; // 0x27c PushV
	var_353_object = var_342_object; // 0x27d Mov
	var_354_float = 70.0; // 0x27e MovF
	func_1384(var_353_object, var_354_float); // 0x27f NEW_2
	var_355_bool = var_352_bool == 0; // 0x281 Not
	if(var_355_bool == 0) goto Label_645; // 0x282 JumpB
	var_341_int = -2; // 0x283 MovI
	return 8; // 0x284 Return
	
Label_645:
	CreateDialog(var_348_object); // 0x285 Func
	var_356_int = 0; // 0x287 PushV
	func_1722(var_356_int); // 0x288 NEW_2
	SetNPCName(var_356_int); // 0x28a ObjFunc
	var_357_int = 0; // 0x28c PushV
	func_1720(var_357_int); // 0x28d NEW_2
	SetNPCDescription(var_357_int); // 0x28f ObjFunc
	var_358_string = ""; // 0x291 PushV
	func_1724(var_358_string); // 0x292 NEW_2
	SetPhoto(var_358_string); // 0x294 ObjFunc
	var_359_string = ""; // 0x296 PushV
	func_1726(var_359_string); // 0x297 NEW_2
	SetPhoto2(var_359_string); // 0x299 ObjFunc
	var_360_int = 0; // 0x29b PushV
	func_1805(var_360_int); // 0x29c NEW_2
	SetPlayerName(var_360_int); // 0x29e ObjFunc
	var_350_int = -1; // 0x2a0 MovI
	IsOverrideActive(var_349_bool); // 0x2a1 Func
	var_361_bool = var_349_bool; // 0x2a3 Push
	if(var_361_bool == 0) goto Label_679; // 0x2a4 JumpB
	var_341_int = -2; // 0x2a5 MovI
	return 8; // 0x2a6 Return
	
Label_679:
	DoDialog(var_348_object); // 0x2a7 Func
	var_362_bool = 0; var_363_object = Obj(); // 0x2a9 PushV
	var_364_object = Obj(); // 0x2aa PushV
	func_1660(var_364_object); // 0x2ab NEW_2
	var_363_object = var_364_object; // 0x2ac Mov
	func_1469(var_362_bool, var_363_object); // 0x2ae NEW_2
	var_365_object = Obj(); var_366_object = Obj(); // 0x2b0 PushV
	var_365_object = var_342_object; // 0x2b1 Mov
	var_366_object = var_348_object; // 0x2b2 Mov
	TaskCall(5); // 0x2b3 TaskCall
	func_715(var_367_object, var_368_object, var_369_string, var_370_bool, var_365_object, var_366_object); // 0x2b4 NEW_2
	TaskReturn(); // 0x2b5 TaskReturn
	IsDialogEnd(var_351_bool); // 0x2b7 ObjFunc
	
Label_697:
	var_398_bool = var_351_bool == 0; // 0x2b9 Not
	if(var_398_bool == 0) goto Label_704; // 0x2ba JumpB
	sync(); // 0x2bb Func
	IsDialogEnd(var_351_bool); // 0x2bd ObjFunc
	goto Label_697; // 0x2bf Jump
	
Label_704:
	var_399_object = Obj(); // 0x2c0 PushV
	var_399_object = var_342_object; // 0x2c1 Mov
	func_1452(); // 0x2c2 NEW_2
	StopDialog(var_348_object); // 0x2c4 Func
	GetReturnValue(var_350_int); // 0x2c6 ObjFunc
	var_341_int = var_350_int; // 0x2c8 Mov
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
	func_1703(var_39_int); // 0x506 NEW_2
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
	func_1696(var_66_string, var_67_int); // 0x52a NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x52c Func
	WaitForAnimEnd(var_36_bool); // 0x52e Func
	var_68_bool = var_36_bool == 0; // 0x530 Not
	if(var_68_bool == 0) goto Label_1331; // 0x531 JumpB
	goto Label_1342; // 0x532 Jump
}


func_893(var_0_object, var_400_int, var_401_object)
{
	var_403_object = Obj(); var_404_bool = 0; var_405_int = 0; var_406_bool = 0; var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; // 0x37d PushV
	var_0_object = var_401_object; // 0x37e TMov
	var_411_bool = 0; var_412_object = Obj(); var_413_float = 0; // 0x37f PushV
	var_412_object = var_401_object; // 0x380 Mov
	var_413_float = 70.0; // 0x381 MovF
	func_1384(var_412_object, var_413_float); // 0x382 NEW_2
	var_414_bool = var_411_bool == 0; // 0x384 Not
	if(var_414_bool == 0) goto Label_904; // 0x385 JumpB
	var_400_int = -2; // 0x386 MovI
	return 8; // 0x387 Return
	
Label_904:
	CreateDialog(var_407_object); // 0x388 Func
	var_415_int = 0; // 0x38a PushV
	func_1722(var_415_int); // 0x38b NEW_2
	SetNPCName(var_415_int); // 0x38d ObjFunc
	var_416_int = 0; // 0x38f PushV
	func_1720(var_416_int); // 0x390 NEW_2
	SetNPCDescription(var_416_int); // 0x392 ObjFunc
	var_417_string = ""; // 0x394 PushV
	func_1724(var_417_string); // 0x395 NEW_2
	SetPhoto(var_417_string); // 0x397 ObjFunc
	var_418_string = ""; // 0x399 PushV
	func_1726(var_418_string); // 0x39a NEW_2
	SetPhoto2(var_418_string); // 0x39c ObjFunc
	var_419_int = 0; // 0x39e PushV
	func_1805(var_419_int); // 0x39f NEW_2
	SetPlayerName(var_419_int); // 0x3a1 ObjFunc
	var_409_int = -1; // 0x3a3 MovI
	IsOverrideActive(var_408_bool); // 0x3a4 Func
	var_420_bool = var_408_bool; // 0x3a6 Push
	if(var_420_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_400_int = -2; // 0x3a8 MovI
	return 8; // 0x3a9 Return
	
Label_938:
	DoDialog(var_407_object); // 0x3aa Func
	var_421_bool = 0; var_422_object = Obj(); // 0x3ac PushV
	var_423_object = Obj(); // 0x3ad PushV
	func_1660(var_423_object); // 0x3ae NEW_2
	var_422_object = var_423_object; // 0x3af Mov
	func_1469(var_421_bool, var_422_object); // 0x3b1 NEW_2
	var_424_object = Obj(); var_425_object = Obj(); // 0x3b3 PushV
	var_424_object = var_401_object; // 0x3b4 Mov
	var_425_object = var_407_object; // 0x3b5 Mov
	TaskCall(7); // 0x3b6 TaskCall
	func_974(var_426_object, var_427_object, var_428_string, var_429_bool, var_424_object, var_425_object); // 0x3b7 NEW_2
	TaskReturn(); // 0x3b8 TaskReturn
	IsDialogEnd(var_410_bool); // 0x3ba ObjFunc
	
Label_956:
	var_454_bool = var_410_bool == 0; // 0x3bc Not
	if(var_454_bool == 0) goto Label_963; // 0x3bd JumpB
	sync(); // 0x3be Func
	IsDialogEnd(var_410_bool); // 0x3c0 ObjFunc
	goto Label_956; // 0x3c2 Jump
	
Label_963:
	var_455_object = Obj(); // 0x3c3 PushV
	var_455_object = var_401_object; // 0x3c4 Mov
	func_1452(); // 0x3c5 NEW_2
	StopDialog(var_407_object); // 0x3c7 Func
	GetReturnValue(var_409_int); // 0x3c9 ObjFunc
	var_400_int = var_409_int; // 0x3cb Mov
	return 8; // 0x3cc Return
}


