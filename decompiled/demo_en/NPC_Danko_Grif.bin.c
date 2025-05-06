task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xc2 PushI
	if(var_69_int == 0) goto Label_424; // 0xc3 JumpB
	func_5183(); // 0xc5 NEW_2
	var_71_int = 35389; // 0xc7 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xc8 Eq
	if(var_72_bool == 0) goto Label_207; // 0xc9 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xca PushV
	var_73_object = var_1_object; // 0xcb MovT
	var_74_object = var_0_bool; // 0xcc MovT
	func_5404(); // 0xcd NEW_2
	
Label_207:
	var_77_int = 35393; // 0xcf PushI
	var_78_bool = var_68_cvector == var_77_int; // 0xd0 Eq
	if(var_78_bool == 0) goto Label_215; // 0xd1 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xd2 PushV
	var_79_object = var_1_object; // 0xd3 MovT
	var_80_object = var_0_bool; // 0xd4 MovT
	func_5509(); // 0xd5 NEW_2
	
Label_215:
	var_82_int = 35388; // 0xd7 PushI
	var_83_bool = var_67_bool == var_82_int; // 0xd8 Eq
	if(var_83_bool == 0) goto Label_248; // 0xd9 JumpB
	var_84_string = ""; // 0xda PushV
	var_84_string = "Neutral"; // 0xdb MovS
	func_171(var_68_cvector, var_84_string); // 0xdc NEW_2
	var_101_int = 533838; // 0xde PushI
	SetMessage(var_101_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_102_bool = 0; var_103_object = Obj(); // 0xe3 PushV
	var_103_object = var_1_object; // 0xe4 MovT
	func_5542(var_103_object); // 0xe5 NEW_2
	if(var_102_bool == 0) goto Label_237; // 0xe7 JumpB
	var_110_int = 533839; // 0xe8 PushI
	var_111_int = 35390; // 0xe9 PushI
	var_112_int = 35389; // 0xea PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xeb TObjFunc
	
Label_237:
	var_113_int = 533843; // 0xed PushI
	var_114_int = -1; // 0xee PushI
	var_115_int = 35393; // 0xef PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0xf0 TObjFunc
	var_116_int = 533844; // 0xf2 PushI
	var_117_int = -1; // 0xf3 PushI
	var_118_int = 35394; // 0xf4 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_119_int = 35529; // 0xf8 PushI
	var_120_bool = var_67_bool == var_119_int; // 0xf9 Eq
	if(var_120_bool == 0) goto Label_251; // 0xfa JumpB
	
Label_251:
	var_121_int = 35531; // 0xfb PushI
	var_122_bool = var_67_bool == var_121_int; // 0xfc Eq
	if(var_122_bool == 0) goto Label_274; // 0xfd JumpB
	var_123_string = ""; // 0xfe PushV
	var_123_string = "Smile"; // 0xff MovS
	func_171(var_68_cvector, var_123_string); // 0x100 NEW_2
	var_124_int = 533963; // 0x102 PushI
	SetMessage(var_124_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_125_int = 533964; // 0x107 PushI
	var_126_int = 35533; // 0x108 PushI
	var_127_int = 35532; // 0x109 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x10a TObjFunc
	var_128_int = 533971; // 0x10c PushI
	var_129_int = 35533; // 0x10d PushI
	var_130_int = 35540; // 0x10e PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_131_int = 35533; // 0x112 PushI
	var_132_bool = var_67_bool == var_131_int; // 0x113 Eq
	if(var_132_bool == 0) goto Label_302; // 0x114 JumpB
	var_133_string = ""; // 0x115 PushV
	var_133_string = "Smile"; // 0x116 MovS
	func_171(var_68_cvector, var_133_string); // 0x117 NEW_2
	var_134_int = 533965; // 0x119 PushI
	SetMessage(var_134_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_135_int = 533966; // 0x11e PushI
	var_136_int = 35535; // 0x11f PushI
	var_137_int = 35534; // 0x120 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x121 TObjFunc
	var_138_int = 533970; // 0x123 PushI
	var_139_int = 35535; // 0x124 PushI
	var_140_int = 35538; // 0x125 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x126 TObjFunc
	var_141_int = 533973; // 0x128 PushI
	var_142_int = 35545; // 0x129 PushI
	var_143_int = 35544; // 0x12a PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_144_int = 35545; // 0x12e PushI
	var_145_bool = var_67_bool == var_144_int; // 0x12f Eq
	if(var_145_bool == 0) goto Label_320; // 0x130 JumpB
	var_146_string = ""; // 0x131 PushV
	var_146_string = "Sly"; // 0x132 MovS
	func_171(var_68_cvector, var_146_string); // 0x133 NEW_2
	var_147_int = 533974; // 0x135 PushI
	SetMessage(var_147_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_148_int = 533975; // 0x13a PushI
	var_149_int = 35547; // 0x13b PushI
	var_150_int = 35546; // 0x13c PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_151_int = 35547; // 0x140 PushI
	var_152_bool = var_67_bool == var_151_int; // 0x141 Eq
	if(var_152_bool == 0) goto Label_343; // 0x142 JumpB
	var_153_string = ""; // 0x143 PushV
	var_153_string = "Neutral"; // 0x144 MovS
	func_171(var_68_cvector, var_153_string); // 0x145 NEW_2
	var_154_int = 533976; // 0x147 PushI
	SetMessage(var_154_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_155_int = 533977; // 0x14c PushI
	var_156_int = -1; // 0x14d PushI
	var_157_int = 35548; // 0x14e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x14f TObjFunc
	var_158_int = 533978; // 0x151 PushI
	var_159_int = -1; // 0x152 PushI
	var_160_int = 35549; // 0x153 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_161_int = 35535; // 0x157 PushI
	var_162_bool = var_67_bool == var_161_int; // 0x158 Eq
	if(var_162_bool == 0) goto Label_366; // 0x159 JumpB
	var_163_string = ""; // 0x15a PushV
	var_163_string = "Sly"; // 0x15b MovS
	func_171(var_68_cvector, var_163_string); // 0x15c NEW_2
	var_164_int = 533967; // 0x15e PushI
	SetMessage(var_164_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_165_int = 533968; // 0x163 PushI
	var_166_int = -1; // 0x164 PushI
	var_167_int = 35536; // 0x165 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x166 TObjFunc
	var_168_int = 533969; // 0x168 PushI
	var_169_int = -1; // 0x169 PushI
	var_170_int = 35537; // 0x16a PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_171_int = 35390; // 0x16e PushI
	var_172_bool = var_67_bool == var_171_int; // 0x16f Eq
	if(var_172_bool == 0) goto Label_389; // 0x170 JumpB
	var_173_string = ""; // 0x171 PushV
	var_173_string = "Fear"; // 0x172 MovS
	func_171(var_68_cvector, var_173_string); // 0x173 NEW_2
	var_174_int = 533840; // 0x175 PushI
	SetMessage(var_174_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_175_int = 533842; // 0x17a PushI
	var_176_int = 35395; // 0x17b PushI
	var_177_int = 35392; // 0x17c PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x17d TObjFunc
	var_178_int = 533841; // 0x17f PushI
	var_179_int = -1; // 0x180 PushI
	var_180_int = 35391; // 0x181 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_181_int = 35395; // 0x185 PushI
	var_182_bool = var_67_bool == var_181_int; // 0x186 Eq
	if(var_182_bool == 0) goto Label_412; // 0x187 JumpB
	var_183_string = ""; // 0x188 PushV
	var_183_string = "Neutral"; // 0x189 MovS
	func_171(var_68_cvector, var_183_string); // 0x18a NEW_2
	var_184_int = 533845; // 0x18c PushI
	SetMessage(var_184_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_185_int = 533846; // 0x191 PushI
	var_186_int = -1; // 0x192 PushI
	var_187_int = 35396; // 0x193 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x194 TObjFunc
	var_188_int = 533847; // 0x196 PushI
	var_189_int = -1; // 0x197 PushI
	var_190_int = 35397; // 0x198 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_3_object = 1; // 0x19c TMovB
	var_191_bool = 0; // 0x19d PushV
	func_5359(var_191_bool); // 0x19e NEW_2
	if(var_191_bool == 0) goto Label_420; // 0x1a0 JumpB
	lshStopAnimation(); // 0x1a1 Func
	goto Label_422; // 0x1a3 Jump
	
Label_422:
	return 0; // 0x1a6 Return
	
Label_420:
	StopAnimation(); // 0x1a4 Func
	
Label_424:
	return 0; // 0x1a8 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x250 PushI
	if(var_69_int == 0) goto Label_683; // 0x251 JumpB
	func_5183(); // 0x253 NEW_2
	var_71_int = 36971; // 0x255 PushI
	var_72_bool = var_67_bool == var_71_int; // 0x256 Eq
	if(var_72_bool == 0) goto Label_625; // 0x257 JumpB
	var_73_string = ""; // 0x258 PushV
	var_73_string = "Neutral"; // 0x259 MovS
	func_569(var_68_cvector, var_73_string); // 0x25a NEW_2
	var_90_int = 535294; // 0x25c PushI
	SetMessage(var_90_int); // 0x25d TObjFunc
	ClearReplies(); // 0x25f TObjFunc
	var_91_int = 535295; // 0x261 PushI
	var_92_int = 36973; // 0x262 PushI
	var_93_int = 36972; // 0x263 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x264 TObjFunc
	var_94_int = 535302; // 0x266 PushI
	var_95_int = -1; // 0x267 PushI
	var_96_int = 36980; // 0x268 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x269 TObjFunc
	var_97_int = 535303; // 0x26b PushI
	var_98_int = -1; // 0x26c PushI
	var_99_int = 36981; // 0x26d PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x26e TObjFunc
	return 0; // 0x270 Return
	
Label_625:
	var_100_int = 36973; // 0x271 PushI
	var_101_bool = var_67_bool == var_100_int; // 0x272 Eq
	if(var_101_bool == 0) goto Label_648; // 0x273 JumpB
	var_102_string = ""; // 0x274 PushV
	var_102_string = "Neutral"; // 0x275 MovS
	func_569(var_68_cvector, var_102_string); // 0x276 NEW_2
	var_103_int = 535296; // 0x278 PushI
	SetMessage(var_103_int); // 0x279 TObjFunc
	ClearReplies(); // 0x27b TObjFunc
	var_104_int = 535297; // 0x27d PushI
	var_105_int = 36975; // 0x27e PushI
	var_106_int = 36974; // 0x27f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x280 TObjFunc
	var_107_int = 535301; // 0x282 PushI
	var_108_int = 36975; // 0x283 PushI
	var_109_int = 36978; // 0x284 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x285 TObjFunc
	return 0; // 0x287 Return
	
Label_648:
	var_110_int = 36975; // 0x288 PushI
	var_111_bool = var_67_bool == var_110_int; // 0x289 Eq
	if(var_111_bool == 0) goto Label_671; // 0x28a JumpB
	var_112_string = ""; // 0x28b PushV
	var_112_string = "Neutral"; // 0x28c MovS
	func_569(var_68_cvector, var_112_string); // 0x28d NEW_2
	var_113_int = 535298; // 0x28f PushI
	SetMessage(var_113_int); // 0x290 TObjFunc
	ClearReplies(); // 0x292 TObjFunc
	var_114_int = 535299; // 0x294 PushI
	var_115_int = -1; // 0x295 PushI
	var_116_int = 36976; // 0x296 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x297 TObjFunc
	var_117_int = 535300; // 0x299 PushI
	var_118_int = -1; // 0x29a PushI
	var_119_int = 36977; // 0x29b PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x29c TObjFunc
	return 0; // 0x29e Return
	
Label_671:
	var_3_object = 1; // 0x29f TMovB
	var_120_bool = 0; // 0x2a0 PushV
	func_5359(var_120_bool); // 0x2a1 NEW_2
	if(var_120_bool == 0) goto Label_679; // 0x2a3 JumpB
	lshStopAnimation(); // 0x2a4 Func
	goto Label_681; // 0x2a6 Jump
	
Label_681:
	return 0; // 0x2a9 Return
	
Label_679:
	StopAnimation(); // 0x2a7 Func
	
Label_683:
	return 0; // 0x2ab Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x358 PushI
	if(var_69_int == 0) goto Label_998; // 0x359 JumpB
	func_5183(); // 0x35b NEW_2
	var_71_int = 444; // 0x35d PushI
	var_72_bool = var_67_bool == var_71_int; // 0x35e Eq
	if(var_72_bool == 0) goto Label_894; // 0x35f JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x360 PushV
	var_73_object = var_1_object; // 0x361 MovT
	var_74_object = var_0_bool; // 0x362 MovT
	func_5514(); // 0x363 NEW_2
	var_77_string = ""; // 0x365 PushV
	var_77_string = "Neutral"; // 0x366 MovS
	func_833(var_68_cvector, var_77_string); // 0x367 NEW_2
	var_94_int = 500383; // 0x369 PushI
	SetMessage(var_94_int); // 0x36a TObjFunc
	ClearReplies(); // 0x36c TObjFunc
	var_95_int = 500384; // 0x36e PushI
	var_96_int = 448; // 0x36f PushI
	var_97_int = 445; // 0x370 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x371 TObjFunc
	var_98_int = 500385; // 0x373 PushI
	var_99_int = 449; // 0x374 PushI
	var_100_int = 446; // 0x375 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x376 TObjFunc
	var_101_int = 500386; // 0x378 PushI
	var_102_int = 450; // 0x379 PushI
	var_103_int = 447; // 0x37a PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x37b TObjFunc
	return 0; // 0x37d Return
	
Label_894:
	var_104_int = 450; // 0x37e PushI
	var_105_bool = var_67_bool == var_104_int; // 0x37f Eq
	if(var_105_bool == 0) goto Label_917; // 0x380 JumpB
	var_106_string = ""; // 0x381 PushV
	var_106_string = "Neutral"; // 0x382 MovS
	func_833(var_68_cvector, var_106_string); // 0x383 NEW_2
	var_107_int = 500389; // 0x385 PushI
	SetMessage(var_107_int); // 0x386 TObjFunc
	ClearReplies(); // 0x388 TObjFunc
	var_108_int = 500395; // 0x38a PushI
	var_109_int = 454; // 0x38b PushI
	var_110_int = 459; // 0x38c PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x38d TObjFunc
	var_111_int = 500396; // 0x38f PushI
	var_112_int = 454; // 0x390 PushI
	var_113_int = 460; // 0x391 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x392 TObjFunc
	return 0; // 0x394 Return
	
Label_917:
	var_114_int = 449; // 0x395 PushI
	var_115_bool = var_67_bool == var_114_int; // 0x396 Eq
	if(var_115_bool == 0) goto Label_940; // 0x397 JumpB
	var_116_string = ""; // 0x398 PushV
	var_116_string = "Neutral"; // 0x399 MovS
	func_833(var_68_cvector, var_116_string); // 0x39a NEW_2
	var_117_int = 500388; // 0x39c PushI
	SetMessage(var_117_int); // 0x39d TObjFunc
	ClearReplies(); // 0x39f TObjFunc
	var_118_int = 500394; // 0x3a1 PushI
	var_119_int = 454; // 0x3a2 PushI
	var_120_int = 456; // 0x3a3 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x3a4 TObjFunc
	var_121_int = 500392; // 0x3a6 PushI
	var_122_int = 454; // 0x3a7 PushI
	var_123_int = 453; // 0x3a8 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_124_int = 448; // 0x3ac PushI
	var_125_bool = var_67_bool == var_124_int; // 0x3ad Eq
	if(var_125_bool == 0) goto Label_963; // 0x3ae JumpB
	var_126_string = ""; // 0x3af PushV
	var_126_string = "Neutral"; // 0x3b0 MovS
	func_833(var_68_cvector, var_126_string); // 0x3b1 NEW_2
	var_127_int = 500387; // 0x3b3 PushI
	SetMessage(var_127_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_128_int = 500390; // 0x3b8 PushI
	var_129_int = 454; // 0x3b9 PushI
	var_130_int = 451; // 0x3ba PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x3bb TObjFunc
	var_131_int = 500391; // 0x3bd PushI
	var_132_int = 454; // 0x3be PushI
	var_133_int = 452; // 0x3bf PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_134_int = 454; // 0x3c3 PushI
	var_135_bool = var_67_bool == var_134_int; // 0x3c4 Eq
	if(var_135_bool == 0) goto Label_986; // 0x3c5 JumpB
	var_136_string = ""; // 0x3c6 PushV
	var_136_string = "Neutral"; // 0x3c7 MovS
	func_833(var_68_cvector, var_136_string); // 0x3c8 NEW_2
	var_137_int = 500393; // 0x3ca PushI
	SetMessage(var_137_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_138_int = 500397; // 0x3cf PushI
	var_139_int = -1; // 0x3d0 PushI
	var_140_int = 463; // 0x3d1 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x3d2 TObjFunc
	var_141_int = 500398; // 0x3d4 PushI
	var_142_int = -1; // 0x3d5 PushI
	var_143_int = 464; // 0x3d6 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x3d7 TObjFunc
	return 0; // 0x3d9 Return
	
Label_986:
	var_3_object = 1; // 0x3da TMovB
	var_144_bool = 0; // 0x3db PushV
	func_5359(var_144_bool); // 0x3dc NEW_2
	if(var_144_bool == 0) goto Label_994; // 0x3de JumpB
	lshStopAnimation(); // 0x3df Func
	goto Label_996; // 0x3e1 Jump
	
Label_996:
	return 0; // 0x3e4 Return
	
Label_994:
	StopAnimation(); // 0x3e2 Func
	
Label_998:
	return 0; // 0x3e6 Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x4a1 PushI
	if(var_69_int == 0) goto Label_1496; // 0x4a2 JumpB
	func_5183(); // 0x4a4 NEW_2
	var_71_int = 7671; // 0x4a6 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x4a7 Eq
	if(var_72_bool == 0) goto Label_1218; // 0x4a8 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x4a9 PushV
	var_73_object = var_1_object; // 0x4aa MovT
	var_74_object = var_0_bool; // 0x4ab MovT
	func_5410(); // 0x4ac NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x4ae PushV
	var_77_object = var_1_object; // 0x4af MovT
	var_78_object = var_0_bool; // 0x4b0 MovT
	func_5416(); // 0x4b1 NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0x4b3 PushV
	var_104_object = var_1_object; // 0x4b4 MovT
	var_105_object = var_0_bool; // 0x4b5 MovT
	func_5377(); // 0x4b6 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x4b8 PushV
	var_108_object = var_1_object; // 0x4b9 MovT
	var_109_object = var_0_bool; // 0x4ba MovT
	func_5383(var_109_object); // 0x4bb NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x4bd PushV
	var_132_object = var_1_object; // 0x4be MovT
	var_133_object = var_0_bool; // 0x4bf MovT
	func_5425(var_133_object); // 0x4c0 NEW_2
	
Label_1218:
	var_143_int = 37903; // 0x4c2 PushI
	var_144_bool = var_68_cvector == var_143_int; // 0x4c3 Eq
	if(var_144_bool == 0) goto Label_1226; // 0x4c4 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x4c5 PushV
	var_145_object = var_1_object; // 0x4c6 MovT
	var_146_object = var_0_bool; // 0x4c7 MovT
	func_5509(); // 0x4c8 NEW_2
	
Label_1226:
	var_148_int = 7666; // 0x4ca PushI
	var_149_bool = var_67_bool == var_148_int; // 0x4cb Eq
	if(var_149_bool == 0) goto Label_1273; // 0x4cc JumpB
	var_150_string = ""; // 0x4cd PushV
	var_150_string = "Neutral"; // 0x4ce MovS
	func_1162(var_68_cvector, var_150_string); // 0x4cf NEW_2
	var_167_int = 506959; // 0x4d1 PushI
	SetMessage(var_167_int); // 0x4d2 TObjFunc
	ClearReplies(); // 0x4d4 TObjFunc
	var_168_bool = 0; // 0x4d6 PushV
	var_168_bool = 0; // 0x4d7 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x4d8 PushV
	var_170_object = var_1_object; // 0x4d9 MovT
	func_5554(var_170_object); // 0x4da NEW_2
	if(var_169_bool == 0) goto Label_1251; // 0x4dc JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x4dd PushV
	var_178_object = var_1_object; // 0x4de MovT
	func_5566(var_178_object); // 0x4df NEW_2
	if(var_177_bool == 0) goto Label_1251; // 0x4e1 JumpB
	var_168_bool = 1; // 0x4e2 MovB
	
Label_1251:
	if(var_168_bool == 0) goto Label_1257; // 0x4e3 JumpB
	var_183_int = 507328; // 0x4e4 PushI
	var_184_int = 8080; // 0x4e5 PushI
	var_185_int = 8079; // 0x4e6 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x4e7 TObjFunc
	
Label_1257:
	var_186_int = 536144; // 0x4e9 PushI
	var_187_int = -1; // 0x4ea PushI
	var_188_int = 37903; // 0x4eb PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x4ec TObjFunc
	var_189_int = 507530; // 0x4ee PushI
	var_190_int = -1; // 0x4ef PushI
	var_191_int = 8312; // 0x4f0 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x4f1 TObjFunc
	var_192_int = 533848; // 0x4f3 PushI
	var_193_int = -1; // 0x4f4 PushI
	var_194_int = 35398; // 0x4f5 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x4f6 TObjFunc
	return 0; // 0x4f8 Return
	
Label_1273:
	var_195_int = 8049; // 0x4f9 PushI
	var_196_bool = var_67_bool == var_195_int; // 0x4fa Eq
	if(var_196_bool == 0) goto Label_1276; // 0x4fb JumpB
	
Label_1276:
	var_197_int = 8051; // 0x4fc PushI
	var_198_bool = var_67_bool == var_197_int; // 0x4fd Eq
	if(var_198_bool == 0) goto Label_1299; // 0x4fe JumpB
	var_199_string = ""; // 0x4ff PushV
	var_199_string = "Smile"; // 0x500 MovS
	func_1162(var_68_cvector, var_199_string); // 0x501 NEW_2
	var_200_int = 507302; // 0x503 PushI
	SetMessage(var_200_int); // 0x504 TObjFunc
	ClearReplies(); // 0x506 TObjFunc
	var_201_int = 507303; // 0x508 PushI
	var_202_int = 8053; // 0x509 PushI
	var_203_int = 8052; // 0x50a PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x50b TObjFunc
	var_204_int = 507307; // 0x50d PushI
	var_205_int = 8057; // 0x50e PushI
	var_206_int = 8056; // 0x50f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x510 TObjFunc
	return 0; // 0x512 Return
	
Label_1299:
	var_207_int = 8057; // 0x513 PushI
	var_208_bool = var_67_bool == var_207_int; // 0x514 Eq
	if(var_208_bool == 0) goto Label_1317; // 0x515 JumpB
	var_209_string = ""; // 0x516 PushV
	var_209_string = "Smile"; // 0x517 MovS
	func_1162(var_68_cvector, var_209_string); // 0x518 NEW_2
	var_210_int = 507308; // 0x51a PushI
	SetMessage(var_210_int); // 0x51b TObjFunc
	ClearReplies(); // 0x51d TObjFunc
	var_211_int = 507309; // 0x51f PushI
	var_212_int = 8059; // 0x520 PushI
	var_213_int = 8058; // 0x521 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x522 TObjFunc
	return 0; // 0x524 Return
	
Label_1317:
	var_214_int = 8059; // 0x525 PushI
	var_215_bool = var_67_bool == var_214_int; // 0x526 Eq
	if(var_215_bool == 0) goto Label_1340; // 0x527 JumpB
	var_216_string = ""; // 0x528 PushV
	var_216_string = "Neutral"; // 0x529 MovS
	func_1162(var_68_cvector, var_216_string); // 0x52a NEW_2
	var_217_int = 507310; // 0x52c PushI
	SetMessage(var_217_int); // 0x52d TObjFunc
	ClearReplies(); // 0x52f TObjFunc
	var_218_int = 507311; // 0x531 PushI
	var_219_int = -1; // 0x532 PushI
	var_220_int = 8060; // 0x533 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x534 TObjFunc
	var_221_int = 507312; // 0x536 PushI
	var_222_int = -1; // 0x537 PushI
	var_223_int = 8061; // 0x538 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x539 TObjFunc
	return 0; // 0x53b Return
	
Label_1340:
	var_224_int = 8053; // 0x53c PushI
	var_225_bool = var_67_bool == var_224_int; // 0x53d Eq
	if(var_225_bool == 0) goto Label_1363; // 0x53e JumpB
	var_226_string = ""; // 0x53f PushV
	var_226_string = "Anger"; // 0x540 MovS
	func_1162(var_68_cvector, var_226_string); // 0x541 NEW_2
	var_227_int = 507304; // 0x543 PushI
	SetMessage(var_227_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_228_int = 507305; // 0x548 PushI
	var_229_int = -1; // 0x549 PushI
	var_230_int = 8054; // 0x54a PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x54b TObjFunc
	var_231_int = 507306; // 0x54d PushI
	var_232_int = -1; // 0x54e PushI
	var_233_int = 8055; // 0x54f PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x550 TObjFunc
	return 0; // 0x552 Return
	
Label_1363:
	var_234_int = 8070; // 0x553 PushI
	var_235_bool = var_67_bool == var_234_int; // 0x554 Eq
	if(var_235_bool == 0) goto Label_1366; // 0x555 JumpB
	
Label_1366:
	var_236_int = 7673; // 0x556 PushI
	var_237_bool = var_67_bool == var_236_int; // 0x557 Eq
	if(var_237_bool == 0) goto Label_1389; // 0x558 JumpB
	var_238_string = ""; // 0x559 PushV
	var_238_string = "Neutral"; // 0x55a MovS
	func_1162(var_68_cvector, var_238_string); // 0x55b NEW_2
	var_239_int = 506966; // 0x55d PushI
	SetMessage(var_239_int); // 0x55e TObjFunc
	ClearReplies(); // 0x560 TObjFunc
	var_240_int = 506967; // 0x562 PushI
	var_241_int = 8088; // 0x563 PushI
	var_242_int = 7674; // 0x564 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x565 TObjFunc
	var_243_int = 507343; // 0x567 PushI
	var_244_int = 8088; // 0x568 PushI
	var_245_int = 8095; // 0x569 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x56a TObjFunc
	return 0; // 0x56c Return
	
Label_1389:
	var_246_int = 8088; // 0x56d PushI
	var_247_bool = var_67_bool == var_246_int; // 0x56e Eq
	if(var_247_bool == 0) goto Label_1407; // 0x56f JumpB
	var_248_string = ""; // 0x570 PushV
	var_248_string = "Neutral"; // 0x571 MovS
	func_1162(var_68_cvector, var_248_string); // 0x572 NEW_2
	var_249_int = 507336; // 0x574 PushI
	SetMessage(var_249_int); // 0x575 TObjFunc
	ClearReplies(); // 0x577 TObjFunc
	var_250_int = 507337; // 0x579 PushI
	var_251_int = 8090; // 0x57a PushI
	var_252_int = 8089; // 0x57b PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x57c TObjFunc
	return 0; // 0x57e Return
	
Label_1407:
	var_253_int = 8090; // 0x57f PushI
	var_254_bool = var_67_bool == var_253_int; // 0x580 Eq
	if(var_254_bool == 0) goto Label_1430; // 0x581 JumpB
	var_255_string = ""; // 0x582 PushV
	var_255_string = "Neutral"; // 0x583 MovS
	func_1162(var_68_cvector, var_255_string); // 0x584 NEW_2
	var_256_int = 507338; // 0x586 PushI
	SetMessage(var_256_int); // 0x587 TObjFunc
	ClearReplies(); // 0x589 TObjFunc
	var_257_int = 507342; // 0x58b PushI
	var_258_int = -1; // 0x58c PushI
	var_259_int = 8094; // 0x58d PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x58e TObjFunc
	var_260_int = 507341; // 0x590 PushI
	var_261_int = -1; // 0x591 PushI
	var_262_int = 8093; // 0x592 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x593 TObjFunc
	return 0; // 0x595 Return
	
Label_1430:
	var_263_int = 8080; // 0x596 PushI
	var_264_bool = var_67_bool == var_263_int; // 0x597 Eq
	if(var_264_bool == 0) goto Label_1448; // 0x598 JumpB
	var_265_string = ""; // 0x599 PushV
	var_265_string = "Sly"; // 0x59a MovS
	func_1162(var_68_cvector, var_265_string); // 0x59b NEW_2
	var_266_int = 507329; // 0x59d PushI
	SetMessage(var_266_int); // 0x59e TObjFunc
	ClearReplies(); // 0x5a0 TObjFunc
	var_267_int = 507330; // 0x5a2 PushI
	var_268_int = 8082; // 0x5a3 PushI
	var_269_int = 8081; // 0x5a4 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_270_int = 8082; // 0x5a8 PushI
	var_271_bool = var_67_bool == var_270_int; // 0x5a9 Eq
	if(var_271_bool == 0) goto Label_1466; // 0x5aa JumpB
	var_272_string = ""; // 0x5ab PushV
	var_272_string = "Sly"; // 0x5ac MovS
	func_1162(var_68_cvector, var_272_string); // 0x5ad NEW_2
	var_273_int = 507331; // 0x5af PushI
	SetMessage(var_273_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_274_int = 507332; // 0x5b4 PushI
	var_275_int = 7670; // 0x5b5 PushI
	var_276_int = 8083; // 0x5b6 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_277_int = 7670; // 0x5ba PushI
	var_278_bool = var_67_bool == var_277_int; // 0x5bb Eq
	if(var_278_bool == 0) goto Label_1484; // 0x5bc JumpB
	var_279_string = ""; // 0x5bd PushV
	var_279_string = "Smile"; // 0x5be MovS
	func_1162(var_68_cvector, var_279_string); // 0x5bf NEW_2
	var_280_int = 506963; // 0x5c1 PushI
	SetMessage(var_280_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_281_int = 506964; // 0x5c6 PushI
	var_282_int = -1; // 0x5c7 PushI
	var_283_int = 7671; // 0x5c8 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_3_object = 1; // 0x5cc TMovB
	var_284_bool = 0; // 0x5cd PushV
	func_5359(var_284_bool); // 0x5ce NEW_2
	if(var_284_bool == 0) goto Label_1492; // 0x5d0 JumpB
	lshStopAnimation(); // 0x5d1 Func
	goto Label_1494; // 0x5d3 Jump
	
Label_1494:
	return 0; // 0x5d6 Return
	
Label_1492:
	StopAnimation(); // 0x5d4 Func
	
Label_1496:
	return 0; // 0x5d8 Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x6b0 PushI
	if(var_69_int == 0) goto Label_2216; // 0x6b1 JumpB
	func_5183(); // 0x6b3 NEW_2
	var_71_int = 12126; // 0x6b5 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x6b6 Eq
	if(var_72_bool == 0) goto Label_1730; // 0x6b7 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x6b8 PushV
	var_73_object = var_1_object; // 0x6b9 MovT
	var_74_object = var_0_bool; // 0x6ba MovT
	func_5446(); // 0x6bb NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x6bd PushV
	var_77_object = var_1_object; // 0x6be MovT
	var_78_object = var_0_bool; // 0x6bf MovT
	func_5452(); // 0x6c0 NEW_2
	
Label_1730:
	var_125_int = 12127; // 0x6c2 PushI
	var_126_bool = var_68_cvector == var_125_int; // 0x6c3 Eq
	if(var_126_bool == 0) goto Label_1743; // 0x6c4 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x6c5 PushV
	var_127_object = var_1_object; // 0x6c6 MovT
	var_128_object = var_0_bool; // 0x6c7 MovT
	func_5446(); // 0x6c8 NEW_2
	var_129_object = Obj(); var_130_object = Obj(); // 0x6ca PushV
	var_129_object = var_1_object; // 0x6cb MovT
	var_130_object = var_0_bool; // 0x6cc MovT
	func_5452(); // 0x6cd NEW_2
	
Label_1743:
	var_131_int = 12118; // 0x6cf PushI
	var_132_bool = var_68_cvector == var_131_int; // 0x6d0 Eq
	if(var_132_bool == 0) goto Label_1756; // 0x6d1 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x6d2 PushV
	var_133_object = var_1_object; // 0x6d3 MovT
	var_134_object = var_0_bool; // 0x6d4 MovT
	func_5446(); // 0x6d5 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x6d7 PushV
	var_135_object = var_1_object; // 0x6d8 MovT
	var_136_object = var_0_bool; // 0x6d9 MovT
	func_5452(); // 0x6da NEW_2
	
Label_1756:
	var_137_int = 12137; // 0x6dc PushI
	var_138_bool = var_68_cvector == var_137_int; // 0x6dd Eq
	if(var_138_bool == 0) goto Label_1774; // 0x6de JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x6df PushV
	var_139_object = var_1_object; // 0x6e0 MovT
	var_140_object = var_0_bool; // 0x6e1 MovT
	func_5484(); // 0x6e2 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x6e4 PushV
	var_143_object = var_1_object; // 0x6e5 MovT
	var_144_object = var_0_bool; // 0x6e6 MovT
	func_5361(var_144_object); // 0x6e7 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x6e9 PushV
	var_164_object = var_1_object; // 0x6ea MovT
	var_165_object = var_0_bool; // 0x6eb MovT
	func_5371(); // 0x6ec NEW_2
	
Label_1774:
	var_168_int = 12138; // 0x6ee PushI
	var_169_bool = var_68_cvector == var_168_int; // 0x6ef Eq
	if(var_169_bool == 0) goto Label_1792; // 0x6f0 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x6f1 PushV
	var_170_object = var_1_object; // 0x6f2 MovT
	var_171_object = var_0_bool; // 0x6f3 MovT
	func_5484(); // 0x6f4 NEW_2
	var_172_object = Obj(); var_173_object = Obj(); // 0x6f6 PushV
	var_172_object = var_1_object; // 0x6f7 MovT
	var_173_object = var_0_bool; // 0x6f8 MovT
	func_5361(var_173_object); // 0x6f9 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x6fb PushV
	var_174_object = var_1_object; // 0x6fc MovT
	var_175_object = var_0_bool; // 0x6fd MovT
	func_5371(); // 0x6fe NEW_2
	
Label_1792:
	var_176_int = 15333; // 0x700 PushI
	var_177_bool = var_68_cvector == var_176_int; // 0x701 Eq
	if(var_177_bool == 0) goto Label_1800; // 0x702 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x703 PushV
	var_178_object = var_1_object; // 0x704 MovT
	var_179_object = var_0_bool; // 0x705 MovT
	func_5509(); // 0x706 NEW_2
	
Label_1800:
	var_181_int = 12111; // 0x708 PushI
	var_182_bool = var_67_bool == var_181_int; // 0x709 Eq
	if(var_182_bool == 0) goto Label_1876; // 0x70a JumpB
	var_183_bool = 0; // 0x70b PushV
	var_183_bool = 0; // 0x70c MovB
	var_184_bool = 0; var_185_object = Obj(); // 0x70d PushV
	var_185_object = var_1_object; // 0x70e MovT
	func_5578(var_185_object); // 0x70f NEW_2
	if(var_184_bool == 0) goto Label_1816; // 0x711 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x712 PushV
	var_193_object = var_1_object; // 0x713 MovT
	func_5590(var_193_object); // 0x714 NEW_2
	if(var_192_bool == 0) goto Label_1816; // 0x716 JumpB
	var_183_bool = 1; // 0x717 MovB
	
Label_1816:
	if(var_183_bool == 0) goto Label_1837; // 0x718 JumpB
	var_198_string = ""; // 0x719 PushV
	var_198_string = "Smile"; // 0x71a MovS
	func_1689(var_68_cvector, var_198_string); // 0x71b NEW_2
	var_215_int = 510952; // 0x71d PushI
	SetMessage(var_215_int); // 0x71e TObjFunc
	ClearReplies(); // 0x720 TObjFunc
	var_216_int = 510953; // 0x722 PushI
	var_217_int = 12113; // 0x723 PushI
	var_218_int = 12112; // 0x724 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x725 TObjFunc
	var_219_int = 510960; // 0x727 PushI
	var_220_int = 12113; // 0x728 PushI
	var_221_int = 12119; // 0x729 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x72a TObjFunc
	return 0; // 0x72c Return
	
Label_1837:
	var_222_string = ""; // 0x72d PushV
	var_222_string = "Neutral"; // 0x72e MovS
	func_1689(var_68_cvector, var_222_string); // 0x72f NEW_2
	var_223_int = 509615; // 0x731 PushI
	SetMessage(var_223_int); // 0x732 TObjFunc
	ClearReplies(); // 0x734 TObjFunc
	var_224_bool = 0; // 0x736 PushV
	var_224_bool = 0; // 0x737 MovB
	var_225_bool = 0; var_226_object = Obj(); // 0x738 PushV
	var_226_object = var_1_object; // 0x739 MovT
	func_5602(var_226_object); // 0x73a NEW_2
	if(var_225_bool == 0) goto Label_1859; // 0x73c JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x73d PushV
	var_232_object = var_1_object; // 0x73e MovT
	func_5614(var_232_object); // 0x73f NEW_2
	if(var_231_bool == 0) goto Label_1859; // 0x741 JumpB
	var_224_bool = 1; // 0x742 MovB
	
Label_1859:
	if(var_224_bool == 0) goto Label_1865; // 0x743 JumpB
	var_237_int = 510970; // 0x744 PushI
	var_238_int = 12133; // 0x745 PushI
	var_239_int = 12132; // 0x746 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x747 TObjFunc
	
Label_1865:
	var_240_int = 514119; // 0x749 PushI
	var_241_int = -1; // 0x74a PushI
	var_242_int = 15333; // 0x74b PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x74c TObjFunc
	var_243_int = 509616; // 0x74e PushI
	var_244_int = -1; // 0x74f PushI
	var_245_int = 10580; // 0x750 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x751 TObjFunc
	return 0; // 0x753 Return
	
Label_1876:
	var_246_int = 10581; // 0x754 PushI
	var_247_bool = var_67_bool == var_246_int; // 0x755 Eq
	if(var_247_bool == 0) goto Label_1879; // 0x756 JumpB
	
Label_1879:
	var_248_int = 10604; // 0x757 PushI
	var_249_bool = var_67_bool == var_248_int; // 0x758 Eq
	if(var_249_bool == 0) goto Label_1897; // 0x759 JumpB
	var_250_string = ""; // 0x75a PushV
	var_250_string = "Neutral"; // 0x75b MovS
	func_1689(var_68_cvector, var_250_string); // 0x75c NEW_2
	var_251_int = 509637; // 0x75e PushI
	SetMessage(var_251_int); // 0x75f TObjFunc
	ClearReplies(); // 0x761 TObjFunc
	var_252_int = 509638; // 0x763 PushI
	var_253_int = -1; // 0x764 PushI
	var_254_int = 10605; // 0x765 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x766 TObjFunc
	return 0; // 0x768 Return
	
Label_1897:
	var_255_int = 12108; // 0x769 PushI
	var_256_bool = var_67_bool == var_255_int; // 0x76a Eq
	if(var_256_bool == 0) goto Label_1900; // 0x76b JumpB
	
Label_1900:
	var_257_int = 12110; // 0x76c PushI
	var_258_bool = var_67_bool == var_257_int; // 0x76d Eq
	if(var_258_bool == 0) goto Label_1928; // 0x76e JumpB
	var_259_string = ""; // 0x76f PushV
	var_259_string = "Neutral"; // 0x770 MovS
	func_1689(var_68_cvector, var_259_string); // 0x771 NEW_2
	var_260_int = 510951; // 0x773 PushI
	SetMessage(var_260_int); // 0x774 TObjFunc
	ClearReplies(); // 0x776 TObjFunc
	var_261_int = 509618; // 0x778 PushI
	var_262_int = 10583; // 0x779 PushI
	var_263_int = 10582; // 0x77a PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x77b TObjFunc
	var_264_int = 510967; // 0x77d PushI
	var_265_int = -1; // 0x77e PushI
	var_266_int = 12128; // 0x77f PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x780 TObjFunc
	var_267_int = 510972; // 0x782 PushI
	var_268_int = -1; // 0x783 PushI
	var_269_int = 12134; // 0x784 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x785 TObjFunc
	return 0; // 0x787 Return
	
Label_1928:
	var_270_int = 10583; // 0x788 PushI
	var_271_bool = var_67_bool == var_270_int; // 0x789 Eq
	if(var_271_bool == 0) goto Label_1951; // 0x78a JumpB
	var_272_string = ""; // 0x78b PushV
	var_272_string = "Sly"; // 0x78c MovS
	func_1689(var_68_cvector, var_272_string); // 0x78d NEW_2
	var_273_int = 509619; // 0x78f PushI
	SetMessage(var_273_int); // 0x790 TObjFunc
	ClearReplies(); // 0x792 TObjFunc
	var_274_int = 509620; // 0x794 PushI
	var_275_int = 10585; // 0x795 PushI
	var_276_int = 10584; // 0x796 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x797 TObjFunc
	var_277_int = 509635; // 0x799 PushI
	var_278_int = 10585; // 0x79a PushI
	var_279_int = 10601; // 0x79b PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x79c TObjFunc
	return 0; // 0x79e Return
	
Label_1951:
	var_280_int = 10585; // 0x79f PushI
	var_281_bool = var_67_bool == var_280_int; // 0x7a0 Eq
	if(var_281_bool == 0) goto Label_1979; // 0x7a1 JumpB
	var_282_string = ""; // 0x7a2 PushV
	var_282_string = "Sly"; // 0x7a3 MovS
	func_1689(var_68_cvector, var_282_string); // 0x7a4 NEW_2
	var_283_int = 509621; // 0x7a6 PushI
	SetMessage(var_283_int); // 0x7a7 TObjFunc
	ClearReplies(); // 0x7a9 TObjFunc
	var_284_int = 509623; // 0x7ab PushI
	var_285_int = 10588; // 0x7ac PushI
	var_286_int = 10587; // 0x7ad PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x7ae TObjFunc
	var_287_int = 509634; // 0x7b0 PushI
	var_288_int = 10595; // 0x7b1 PushI
	var_289_int = 10599; // 0x7b2 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x7b3 TObjFunc
	var_290_int = 509622; // 0x7b5 PushI
	var_291_int = -1; // 0x7b6 PushI
	var_292_int = 10586; // 0x7b7 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x7b8 TObjFunc
	return 0; // 0x7ba Return
	
Label_1979:
	var_293_int = 10588; // 0x7bb PushI
	var_294_bool = var_67_bool == var_293_int; // 0x7bc Eq
	if(var_294_bool == 0) goto Label_2007; // 0x7bd JumpB
	var_295_string = ""; // 0x7be PushV
	var_295_string = "Neutral"; // 0x7bf MovS
	func_1689(var_68_cvector, var_295_string); // 0x7c0 NEW_2
	var_296_int = 509624; // 0x7c2 PushI
	SetMessage(var_296_int); // 0x7c3 TObjFunc
	ClearReplies(); // 0x7c5 TObjFunc
	var_297_int = 509625; // 0x7c7 PushI
	var_298_int = -1; // 0x7c8 PushI
	var_299_int = 10589; // 0x7c9 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x7ca TObjFunc
	var_300_int = 509626; // 0x7cc PushI
	var_301_int = 10591; // 0x7cd PushI
	var_302_int = 10590; // 0x7ce PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x7cf TObjFunc
	var_303_int = 509630; // 0x7d1 PushI
	var_304_int = 10595; // 0x7d2 PushI
	var_305_int = 10594; // 0x7d3 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x7d4 TObjFunc
	return 0; // 0x7d6 Return
	
Label_2007:
	var_306_int = 10595; // 0x7d7 PushI
	var_307_bool = var_67_bool == var_306_int; // 0x7d8 Eq
	if(var_307_bool == 0) goto Label_2030; // 0x7d9 JumpB
	var_308_string = ""; // 0x7da PushV
	var_308_string = "Neutral"; // 0x7db MovS
	func_1689(var_68_cvector, var_308_string); // 0x7dc NEW_2
	var_309_int = 509631; // 0x7de PushI
	SetMessage(var_309_int); // 0x7df TObjFunc
	ClearReplies(); // 0x7e1 TObjFunc
	var_310_int = 509632; // 0x7e3 PushI
	var_311_int = -1; // 0x7e4 PushI
	var_312_int = 10596; // 0x7e5 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x7e6 TObjFunc
	var_313_int = 509633; // 0x7e8 PushI
	var_314_int = 10591; // 0x7e9 PushI
	var_315_int = 10597; // 0x7ea PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x7eb TObjFunc
	return 0; // 0x7ed Return
	
Label_2030:
	var_316_int = 10591; // 0x7ee PushI
	var_317_bool = var_67_bool == var_316_int; // 0x7ef Eq
	if(var_317_bool == 0) goto Label_2053; // 0x7f0 JumpB
	var_318_string = ""; // 0x7f1 PushV
	var_318_string = "Neutral"; // 0x7f2 MovS
	func_1689(var_68_cvector, var_318_string); // 0x7f3 NEW_2
	var_319_int = 509627; // 0x7f5 PushI
	SetMessage(var_319_int); // 0x7f6 TObjFunc
	ClearReplies(); // 0x7f8 TObjFunc
	var_320_int = 509628; // 0x7fa PushI
	var_321_int = -1; // 0x7fb PushI
	var_322_int = 10592; // 0x7fc PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x7fd TObjFunc
	var_323_int = 509629; // 0x7ff PushI
	var_324_int = -1; // 0x800 PushI
	var_325_int = 10593; // 0x801 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x802 TObjFunc
	return 0; // 0x804 Return
	
Label_2053:
	var_326_int = 12133; // 0x805 PushI
	var_327_bool = var_67_bool == var_326_int; // 0x806 Eq
	if(var_327_bool == 0) goto Label_2076; // 0x807 JumpB
	var_328_string = ""; // 0x808 PushV
	var_328_string = "Smile"; // 0x809 MovS
	func_1689(var_68_cvector, var_328_string); // 0x80a NEW_2
	var_329_int = 510971; // 0x80c PushI
	SetMessage(var_329_int); // 0x80d TObjFunc
	ClearReplies(); // 0x80f TObjFunc
	var_330_int = 510973; // 0x811 PushI
	var_331_int = 12136; // 0x812 PushI
	var_332_int = 12135; // 0x813 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x814 TObjFunc
	var_333_int = 533046; // 0x816 PushI
	var_334_int = 12136; // 0x817 PushI
	var_335_int = 34556; // 0x818 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x819 TObjFunc
	return 0; // 0x81b Return
	
Label_2076:
	var_336_int = 12136; // 0x81c PushI
	var_337_bool = var_67_bool == var_336_int; // 0x81d Eq
	if(var_337_bool == 0) goto Label_2099; // 0x81e JumpB
	var_338_string = ""; // 0x81f PushV
	var_338_string = "Neutral"; // 0x820 MovS
	func_1689(var_68_cvector, var_338_string); // 0x821 NEW_2
	var_339_int = 510974; // 0x823 PushI
	SetMessage(var_339_int); // 0x824 TObjFunc
	ClearReplies(); // 0x826 TObjFunc
	var_340_int = 510975; // 0x828 PushI
	var_341_int = -1; // 0x829 PushI
	var_342_int = 12137; // 0x82a PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x82b TObjFunc
	var_343_int = 510976; // 0x82d PushI
	var_344_int = -1; // 0x82e PushI
	var_345_int = 12138; // 0x82f PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x830 TObjFunc
	return 0; // 0x832 Return
	
Label_2099:
	var_346_int = 12113; // 0x833 PushI
	var_347_bool = var_67_bool == var_346_int; // 0x834 Eq
	if(var_347_bool == 0) goto Label_2122; // 0x835 JumpB
	var_348_string = ""; // 0x836 PushV
	var_348_string = "Smile"; // 0x837 MovS
	func_1689(var_68_cvector, var_348_string); // 0x838 NEW_2
	var_349_int = 510954; // 0x83a PushI
	SetMessage(var_349_int); // 0x83b TObjFunc
	ClearReplies(); // 0x83d TObjFunc
	var_350_int = 510955; // 0x83f PushI
	var_351_int = 12115; // 0x840 PushI
	var_352_int = 12114; // 0x841 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x842 TObjFunc
	var_353_int = 510961; // 0x844 PushI
	var_354_int = 34554; // 0x845 PushI
	var_355_int = 12121; // 0x846 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x847 TObjFunc
	return 0; // 0x849 Return
	
Label_2122:
	var_356_int = 34554; // 0x84a PushI
	var_357_bool = var_67_bool == var_356_int; // 0x84b Eq
	if(var_357_bool == 0) goto Label_2140; // 0x84c JumpB
	var_358_string = ""; // 0x84d PushV
	var_358_string = "Anger"; // 0x84e MovS
	func_1689(var_68_cvector, var_358_string); // 0x84f NEW_2
	var_359_int = 533044; // 0x851 PushI
	SetMessage(var_359_int); // 0x852 TObjFunc
	ClearReplies(); // 0x854 TObjFunc
	var_360_int = 533045; // 0x856 PushI
	var_361_int = 12117; // 0x857 PushI
	var_362_int = 34555; // 0x858 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x859 TObjFunc
	return 0; // 0x85b Return
	
Label_2140:
	var_363_int = 12115; // 0x85c PushI
	var_364_bool = var_67_bool == var_363_int; // 0x85d Eq
	if(var_364_bool == 0) goto Label_2158; // 0x85e JumpB
	var_365_string = ""; // 0x85f PushV
	var_365_string = "Anger"; // 0x860 MovS
	func_1689(var_68_cvector, var_365_string); // 0x861 NEW_2
	var_366_int = 510956; // 0x863 PushI
	SetMessage(var_366_int); // 0x864 TObjFunc
	ClearReplies(); // 0x866 TObjFunc
	var_367_int = 510957; // 0x868 PushI
	var_368_int = 12117; // 0x869 PushI
	var_369_int = 12116; // 0x86a PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x86b TObjFunc
	return 0; // 0x86d Return
	
Label_2158:
	var_370_int = 12117; // 0x86e PushI
	var_371_bool = var_67_bool == var_370_int; // 0x86f Eq
	if(var_371_bool == 0) goto Label_2181; // 0x870 JumpB
	var_372_string = ""; // 0x871 PushV
	var_372_string = "Smile"; // 0x872 MovS
	func_1689(var_68_cvector, var_372_string); // 0x873 NEW_2
	var_373_int = 510958; // 0x875 PushI
	SetMessage(var_373_int); // 0x876 TObjFunc
	ClearReplies(); // 0x878 TObjFunc
	var_374_int = 510963; // 0x87a PushI
	var_375_int = 12125; // 0x87b PushI
	var_376_int = 12124; // 0x87c PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x87d TObjFunc
	var_377_int = 510959; // 0x87f PushI
	var_378_int = -1; // 0x880 PushI
	var_379_int = 12118; // 0x881 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x882 TObjFunc
	return 0; // 0x884 Return
	
Label_2181:
	var_380_int = 12125; // 0x885 PushI
	var_381_bool = var_67_bool == var_380_int; // 0x886 Eq
	if(var_381_bool == 0) goto Label_2204; // 0x887 JumpB
	var_382_string = ""; // 0x888 PushV
	var_382_string = "Neutral"; // 0x889 MovS
	func_1689(var_68_cvector, var_382_string); // 0x88a NEW_2
	var_383_int = 510964; // 0x88c PushI
	SetMessage(var_383_int); // 0x88d TObjFunc
	ClearReplies(); // 0x88f TObjFunc
	var_384_int = 510965; // 0x891 PushI
	var_385_int = -1; // 0x892 PushI
	var_386_int = 12126; // 0x893 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x894 TObjFunc
	var_387_int = 510966; // 0x896 PushI
	var_388_int = -1; // 0x897 PushI
	var_389_int = 12127; // 0x898 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x899 TObjFunc
	return 0; // 0x89b Return
	
Label_2204:
	var_3_object = 1; // 0x89c TMovB
	var_390_bool = 0; // 0x89d PushV
	func_5359(var_390_bool); // 0x89e NEW_2
	if(var_390_bool == 0) goto Label_2212; // 0x8a0 JumpB
	lshStopAnimation(); // 0x8a1 Func
	goto Label_2214; // 0x8a3 Jump
	
Label_2214:
	return 0; // 0x8a6 Return
	
Label_2212:
	StopAnimation(); // 0x8a4 Func
	
Label_2216:
	return 0; // 0x8a8 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x94b PushI
	if(var_69_int == 0) goto Label_2471; // 0x94c JumpB
	func_5183(); // 0x94e NEW_2
	var_71_int = 15331; // 0x950 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x951 Eq
	if(var_72_bool == 0) goto Label_2392; // 0x952 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x953 PushV
	var_73_object = var_1_object; // 0x954 MovT
	var_74_object = var_0_bool; // 0x955 MovT
	func_5509(); // 0x956 NEW_2
	
Label_2392:
	var_76_int = 10842; // 0x958 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x959 Eq
	if(var_77_bool == 0) goto Label_2415; // 0x95a JumpB
	var_78_string = ""; // 0x95b PushV
	var_78_string = "Neutral"; // 0x95c MovS
	func_2356(var_68_cvector, var_78_string); // 0x95d NEW_2
	var_95_int = 509843; // 0x95f PushI
	SetMessage(var_95_int); // 0x960 TObjFunc
	ClearReplies(); // 0x962 TObjFunc
	var_96_int = 514117; // 0x964 PushI
	var_97_int = -1; // 0x965 PushI
	var_98_int = 15331; // 0x966 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x967 TObjFunc
	var_99_int = 514118; // 0x969 PushI
	var_100_int = -1; // 0x96a PushI
	var_101_int = 15332; // 0x96b PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x96c TObjFunc
	return 0; // 0x96e Return
	
Label_2415:
	var_102_int = 10848; // 0x96f PushI
	var_103_bool = var_67_bool == var_102_int; // 0x970 Eq
	if(var_103_bool == 0) goto Label_2418; // 0x971 JumpB
	
Label_2418:
	var_104_int = 10850; // 0x972 PushI
	var_105_bool = var_67_bool == var_104_int; // 0x973 Eq
	if(var_105_bool == 0) goto Label_2436; // 0x974 JumpB
	var_106_string = ""; // 0x975 PushV
	var_106_string = "Neutral"; // 0x976 MovS
	func_2356(var_68_cvector, var_106_string); // 0x977 NEW_2
	var_107_int = 509851; // 0x979 PushI
	SetMessage(var_107_int); // 0x97a TObjFunc
	ClearReplies(); // 0x97c TObjFunc
	var_108_int = 509852; // 0x97e PushI
	var_109_int = 10852; // 0x97f PushI
	var_110_int = 10851; // 0x980 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x981 TObjFunc
	return 0; // 0x983 Return
	
Label_2436:
	var_111_int = 10852; // 0x984 PushI
	var_112_bool = var_67_bool == var_111_int; // 0x985 Eq
	if(var_112_bool == 0) goto Label_2459; // 0x986 JumpB
	var_113_string = ""; // 0x987 PushV
	var_113_string = "Smile"; // 0x988 MovS
	func_2356(var_68_cvector, var_113_string); // 0x989 NEW_2
	var_114_int = 509853; // 0x98b PushI
	SetMessage(var_114_int); // 0x98c TObjFunc
	ClearReplies(); // 0x98e TObjFunc
	var_115_int = 509854; // 0x990 PushI
	var_116_int = -1; // 0x991 PushI
	var_117_int = 10853; // 0x992 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x993 TObjFunc
	var_118_int = 509855; // 0x995 PushI
	var_119_int = -1; // 0x996 PushI
	var_120_int = 10854; // 0x997 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x998 TObjFunc
	return 0; // 0x99a Return
	
Label_2459:
	var_3_object = 1; // 0x99b TMovB
	var_121_bool = 0; // 0x99c PushV
	func_5359(var_121_bool); // 0x99d NEW_2
	if(var_121_bool == 0) goto Label_2467; // 0x99f JumpB
	lshStopAnimation(); // 0x9a0 Func
	goto Label_2469; // 0x9a2 Jump
	
Label_2469:
	return 0; // 0x9a5 Return
	
Label_2467:
	StopAnimation(); // 0x9a3 Func
	
Label_2471:
	return 0; // 0x9a7 Return
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xaab PushI
	if(var_69_int == 0) goto Label_3277; // 0xaac JumpB
	func_5183(); // 0xaae NEW_2
	var_71_int = 12909; // 0xab0 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xab1 Eq
	if(var_72_bool == 0) goto Label_2744; // 0xab2 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xab3 PushV
	var_73_object = var_1_object; // 0xab4 MovT
	var_74_object = var_0_bool; // 0xab5 MovT
	func_5490(); // 0xab6 NEW_2
	
Label_2744:
	var_77_int = 12936; // 0xab8 PushI
	var_78_bool = var_68_cvector == var_77_int; // 0xab9 Eq
	if(var_78_bool == 0) goto Label_2752; // 0xaba JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xabb PushV
	var_79_object = var_1_object; // 0xabc MovT
	var_80_object = var_0_bool; // 0xabd MovT
	func_5520(); // 0xabe NEW_2
	
Label_2752:
	var_97_int = 12939; // 0xac0 PushI
	var_98_bool = var_68_cvector == var_97_int; // 0xac1 Eq
	if(var_98_bool == 0) goto Label_2760; // 0xac2 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0xac3 PushV
	var_99_object = var_1_object; // 0xac4 MovT
	var_100_object = var_0_bool; // 0xac5 MovT
	func_5520(); // 0xac6 NEW_2
	
Label_2760:
	var_101_int = 16829; // 0xac8 PushI
	var_102_bool = var_68_cvector == var_101_int; // 0xac9 Eq
	if(var_102_bool == 0) goto Label_2768; // 0xaca JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0xacb PushV
	var_103_object = var_1_object; // 0xacc MovT
	var_104_object = var_0_bool; // 0xacd MovT
	func_5520(); // 0xace NEW_2
	
Label_2768:
	var_105_int = 12925; // 0xad0 PushI
	var_106_bool = var_68_cvector == var_105_int; // 0xad1 Eq
	if(var_106_bool == 0) goto Label_2776; // 0xad2 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0xad3 PushV
	var_107_object = var_1_object; // 0xad4 MovT
	var_108_object = var_0_bool; // 0xad5 MovT
	func_5520(); // 0xad6 NEW_2
	
Label_2776:
	var_109_int = 12944; // 0xad8 PushI
	var_110_bool = var_68_cvector == var_109_int; // 0xad9 Eq
	if(var_110_bool == 0) goto Label_2789; // 0xada JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xadb PushV
	var_111_object = var_1_object; // 0xadc MovT
	var_112_object = var_0_bool; // 0xadd MovT
	func_5496(); // 0xade NEW_2
	var_140_object = Obj(); var_141_object = Obj(); // 0xae0 PushV
	var_140_object = var_1_object; // 0xae1 MovT
	var_141_object = var_0_bool; // 0xae2 MovT
	func_5394(var_141_object); // 0xae3 NEW_2
	
Label_2789:
	var_161_int = 15334; // 0xae5 PushI
	var_162_bool = var_68_cvector == var_161_int; // 0xae6 Eq
	if(var_162_bool == 0) goto Label_2797; // 0xae7 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xae8 PushV
	var_163_object = var_1_object; // 0xae9 MovT
	var_164_object = var_0_bool; // 0xaea MovT
	func_5509(); // 0xaeb NEW_2
	
Label_2797:
	var_166_int = 12926; // 0xaed PushI
	var_167_bool = var_67_bool == var_166_int; // 0xaee Eq
	if(var_167_bool == 0) goto Label_2917; // 0xaef JumpB
	var_168_bool = 0; // 0xaf0 PushV
	var_168_bool = 0; // 0xaf1 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0xaf2 PushV
	var_170_object = var_1_object; // 0xaf3 MovT
	func_5672(var_170_object); // 0xaf4 NEW_2
	if(var_169_bool == 0) goto Label_2813; // 0xaf6 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0xaf7 PushV
	var_178_object = var_1_object; // 0xaf8 MovT
	func_5684(var_178_object); // 0xaf9 NEW_2
	if(var_177_bool == 0) goto Label_2813; // 0xafb JumpB
	var_168_bool = 1; // 0xafc MovB
	
Label_2813:
	if(var_168_bool == 0) goto Label_2839; // 0xafd JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0xafe PushV
	var_183_object = var_1_object; // 0xaff MovT
	var_184_object = var_0_bool; // 0xb00 MovT
	func_5536(); // 0xb01 NEW_2
	var_187_string = ""; // 0xb03 PushV
	var_187_string = "Sly"; // 0xb04 MovS
	func_2708(var_68_cvector, var_187_string); // 0xb05 NEW_2
	var_204_int = 511720; // 0xb07 PushI
	SetMessage(var_204_int); // 0xb08 TObjFunc
	ClearReplies(); // 0xb0a TObjFunc
	var_205_int = 511721; // 0xb0c PushI
	var_206_int = 12928; // 0xb0d PushI
	var_207_int = 12927; // 0xb0e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xb0f TObjFunc
	var_208_int = 515755; // 0xb11 PushI
	var_209_int = 12928; // 0xb12 PushI
	var_210_int = 16821; // 0xb13 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xb14 TObjFunc
	return 0; // 0xb16 Return
	
Label_2839:
	var_211_string = ""; // 0xb17 PushV
	var_211_string = "Neutral"; // 0xb18 MovS
	func_2708(var_68_cvector, var_211_string); // 0xb19 NEW_2
	var_212_int = 511704; // 0xb1b PushI
	SetMessage(var_212_int); // 0xb1c TObjFunc
	ClearReplies(); // 0xb1e TObjFunc
	var_213_bool = 0; // 0xb20 PushV
	var_213_bool = 0; // 0xb21 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0xb22 PushV
	var_215_object = var_1_object; // 0xb23 MovT
	func_5626(var_215_object); // 0xb24 NEW_2
	if(var_214_bool == 0) goto Label_2861; // 0xb26 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xb27 PushV
	var_221_object = var_1_object; // 0xb28 MovT
	func_5638(var_221_object); // 0xb29 NEW_2
	if(var_220_bool == 0) goto Label_2861; // 0xb2b JumpB
	var_213_bool = 1; // 0xb2c MovB
	
Label_2861:
	if(var_213_bool == 0) goto Label_2867; // 0xb2d JumpB
	var_226_int = 511705; // 0xb2e PushI
	var_227_int = 12910; // 0xb2f PushI
	var_228_int = 12909; // 0xb30 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xb31 TObjFunc
	
Label_2867:
	var_229_bool = 0; // 0xb33 PushV
	var_229_bool = 0; // 0xb34 MovB
	var_230_bool = 0; // 0xb35 PushV
	var_230_bool = 0; // 0xb36 MovB
	var_231_bool = 0; // 0xb37 PushV
	var_231_bool = 0; // 0xb38 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0xb39 PushV
	var_233_object = var_1_object; // 0xb3a MovT
	func_5626(var_233_object); // 0xb3b NEW_2
	if(var_232_bool == 0) goto Label_2885; // 0xb3d JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0xb3e PushV
	var_235_object = var_1_object; // 0xb3f MovT
	func_5660(var_235_object); // 0xb40 NEW_2
	var_240_bool = var_234_bool == 0; // 0xb42 Not
	if(var_240_bool == 0) goto Label_2885; // 0xb43 JumpB
	var_231_bool = 1; // 0xb44 MovB
	
Label_2885:
	if(var_231_bool == 0) goto Label_2893; // 0xb45 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xb46 PushV
	var_242_object = var_1_object; // 0xb47 MovT
	func_5638(var_242_object); // 0xb48 NEW_2
	var_243_bool = var_241_bool == 0; // 0xb4a Not
	if(var_243_bool == 0) goto Label_2893; // 0xb4b JumpB
	var_230_bool = 1; // 0xb4c MovB
	
Label_2893:
	if(var_230_bool == 0) goto Label_2900; // 0xb4d JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0xb4e PushV
	var_245_object = var_1_object; // 0xb4f MovT
	func_5650(var_244_bool, var_245_object); // 0xb50 NEW_2
	if(var_244_bool == 0) goto Label_2900; // 0xb52 JumpB
	var_229_bool = 1; // 0xb53 MovB
	
Label_2900:
	if(var_229_bool == 0) goto Label_2906; // 0xb54 JumpB
	var_253_int = 511734; // 0xb55 PushI
	var_254_int = 16834; // 0xb56 PushI
	var_255_int = 12940; // 0xb57 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xb58 TObjFunc
	
Label_2906:
	var_256_int = 514120; // 0xb5a PushI
	var_257_int = -1; // 0xb5b PushI
	var_258_int = 15334; // 0xb5c PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xb5d TObjFunc
	var_259_int = 511739; // 0xb5f PushI
	var_260_int = -1; // 0xb60 PushI
	var_261_int = 12945; // 0xb61 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xb62 TObjFunc
	return 0; // 0xb64 Return
	
Label_2917:
	var_262_int = 16834; // 0xb65 PushI
	var_263_bool = var_67_bool == var_262_int; // 0xb66 Eq
	if(var_263_bool == 0) goto Label_2935; // 0xb67 JumpB
	var_264_string = ""; // 0xb68 PushV
	var_264_string = "Neutral"; // 0xb69 MovS
	func_2708(var_68_cvector, var_264_string); // 0xb6a NEW_2
	var_265_int = 515765; // 0xb6c PushI
	SetMessage(var_265_int); // 0xb6d TObjFunc
	ClearReplies(); // 0xb6f TObjFunc
	var_266_int = 515766; // 0xb71 PushI
	var_267_int = 16836; // 0xb72 PushI
	var_268_int = 16835; // 0xb73 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xb74 TObjFunc
	return 0; // 0xb76 Return
	
Label_2935:
	var_269_int = 16836; // 0xb77 PushI
	var_270_bool = var_67_bool == var_269_int; // 0xb78 Eq
	if(var_270_bool == 0) goto Label_2953; // 0xb79 JumpB
	var_271_string = ""; // 0xb7a PushV
	var_271_string = "Anger"; // 0xb7b MovS
	func_2708(var_68_cvector, var_271_string); // 0xb7c NEW_2
	var_272_int = 515767; // 0xb7e PushI
	SetMessage(var_272_int); // 0xb7f TObjFunc
	ClearReplies(); // 0xb81 TObjFunc
	var_273_int = 515768; // 0xb83 PushI
	var_274_int = 12941; // 0xb84 PushI
	var_275_int = 16837; // 0xb85 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xb86 TObjFunc
	return 0; // 0xb88 Return
	
Label_2953:
	var_276_int = 12941; // 0xb89 PushI
	var_277_bool = var_67_bool == var_276_int; // 0xb8a Eq
	if(var_277_bool == 0) goto Label_2971; // 0xb8b JumpB
	var_278_string = ""; // 0xb8c PushV
	var_278_string = "Anger"; // 0xb8d MovS
	func_2708(var_68_cvector, var_278_string); // 0xb8e NEW_2
	var_279_int = 511735; // 0xb90 PushI
	SetMessage(var_279_int); // 0xb91 TObjFunc
	ClearReplies(); // 0xb93 TObjFunc
	var_280_int = 511736; // 0xb95 PushI
	var_281_int = 12943; // 0xb96 PushI
	var_282_int = 12942; // 0xb97 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xb98 TObjFunc
	return 0; // 0xb9a Return
	
Label_2971:
	var_283_int = 12943; // 0xb9b PushI
	var_284_bool = var_67_bool == var_283_int; // 0xb9c Eq
	if(var_284_bool == 0) goto Label_2989; // 0xb9d JumpB
	var_285_string = ""; // 0xb9e PushV
	var_285_string = "Neutral"; // 0xb9f MovS
	func_2708(var_68_cvector, var_285_string); // 0xba0 NEW_2
	var_286_int = 511737; // 0xba2 PushI
	SetMessage(var_286_int); // 0xba3 TObjFunc
	ClearReplies(); // 0xba5 TObjFunc
	var_287_int = 511738; // 0xba7 PushI
	var_288_int = -1; // 0xba8 PushI
	var_289_int = 12944; // 0xba9 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xbaa TObjFunc
	return 0; // 0xbac Return
	
Label_2989:
	var_290_int = 12910; // 0xbad PushI
	var_291_bool = var_67_bool == var_290_int; // 0xbae Eq
	if(var_291_bool == 0) goto Label_3012; // 0xbaf JumpB
	var_292_string = ""; // 0xbb0 PushV
	var_292_string = "Neutral"; // 0xbb1 MovS
	func_2708(var_68_cvector, var_292_string); // 0xbb2 NEW_2
	var_293_int = 511706; // 0xbb4 PushI
	SetMessage(var_293_int); // 0xbb5 TObjFunc
	ClearReplies(); // 0xbb7 TObjFunc
	var_294_int = 511707; // 0xbb9 PushI
	var_295_int = 12913; // 0xbba PushI
	var_296_int = 12911; // 0xbbb PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xbbc TObjFunc
	var_297_int = 511708; // 0xbbe PushI
	var_298_int = 12913; // 0xbbf PushI
	var_299_int = 12912; // 0xbc0 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xbc1 TObjFunc
	return 0; // 0xbc3 Return
	
Label_3012:
	var_300_int = 12913; // 0xbc4 PushI
	var_301_bool = var_67_bool == var_300_int; // 0xbc5 Eq
	if(var_301_bool == 0) goto Label_3035; // 0xbc6 JumpB
	var_302_string = ""; // 0xbc7 PushV
	var_302_string = "Smile"; // 0xbc8 MovS
	func_2708(var_68_cvector, var_302_string); // 0xbc9 NEW_2
	var_303_int = 511709; // 0xbcb PushI
	SetMessage(var_303_int); // 0xbcc TObjFunc
	ClearReplies(); // 0xbce TObjFunc
	var_304_int = 511710; // 0xbd0 PushI
	var_305_int = 12916; // 0xbd1 PushI
	var_306_int = 12915; // 0xbd2 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xbd3 TObjFunc
	var_307_int = 511713; // 0xbd5 PushI
	var_308_int = 12919; // 0xbd6 PushI
	var_309_int = 12918; // 0xbd7 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xbd8 TObjFunc
	return 0; // 0xbda Return
	
Label_3035:
	var_310_int = 12919; // 0xbdb PushI
	var_311_bool = var_67_bool == var_310_int; // 0xbdc Eq
	if(var_311_bool == 0) goto Label_3053; // 0xbdd JumpB
	var_312_string = ""; // 0xbde PushV
	var_312_string = "Neutral"; // 0xbdf MovS
	func_2708(var_68_cvector, var_312_string); // 0xbe0 NEW_2
	var_313_int = 511714; // 0xbe2 PushI
	SetMessage(var_313_int); // 0xbe3 TObjFunc
	ClearReplies(); // 0xbe5 TObjFunc
	var_314_int = 511715; // 0xbe7 PushI
	var_315_int = 12916; // 0xbe8 PushI
	var_316_int = 12920; // 0xbe9 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xbea TObjFunc
	return 0; // 0xbec Return
	
Label_3053:
	var_317_int = 12916; // 0xbed PushI
	var_318_bool = var_67_bool == var_317_int; // 0xbee Eq
	if(var_318_bool == 0) goto Label_3076; // 0xbef JumpB
	var_319_string = ""; // 0xbf0 PushV
	var_319_string = "Neutral"; // 0xbf1 MovS
	func_2708(var_68_cvector, var_319_string); // 0xbf2 NEW_2
	var_320_int = 511711; // 0xbf4 PushI
	SetMessage(var_320_int); // 0xbf5 TObjFunc
	ClearReplies(); // 0xbf7 TObjFunc
	var_321_int = 511712; // 0xbf9 PushI
	var_322_int = 12935; // 0xbfa PushI
	var_323_int = 12917; // 0xbfb PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xbfc TObjFunc
	var_324_int = 511728; // 0xbfe PushI
	var_325_int = 12922; // 0xbff PushI
	var_326_int = 12934; // 0xc00 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xc01 TObjFunc
	return 0; // 0xc03 Return
	
Label_3076:
	var_327_int = 12922; // 0xc04 PushI
	var_328_bool = var_67_bool == var_327_int; // 0xc05 Eq
	if(var_328_bool == 0) goto Label_3094; // 0xc06 JumpB
	var_329_string = ""; // 0xc07 PushV
	var_329_string = "Anger"; // 0xc08 MovS
	func_2708(var_68_cvector, var_329_string); // 0xc09 NEW_2
	var_330_int = 511716; // 0xc0b PushI
	SetMessage(var_330_int); // 0xc0c TObjFunc
	ClearReplies(); // 0xc0e TObjFunc
	var_331_int = 511717; // 0xc10 PushI
	var_332_int = 12924; // 0xc11 PushI
	var_333_int = 12923; // 0xc12 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xc13 TObjFunc
	return 0; // 0xc15 Return
	
Label_3094:
	var_334_int = 12924; // 0xc16 PushI
	var_335_bool = var_67_bool == var_334_int; // 0xc17 Eq
	if(var_335_bool == 0) goto Label_3122; // 0xc18 JumpB
	var_336_string = ""; // 0xc19 PushV
	var_336_string = "Neutral"; // 0xc1a MovS
	func_2708(var_68_cvector, var_336_string); // 0xc1b NEW_2
	var_337_int = 511718; // 0xc1d PushI
	SetMessage(var_337_int); // 0xc1e TObjFunc
	ClearReplies(); // 0xc20 TObjFunc
	var_338_bool = 0; var_339_object = Obj(); // 0xc22 PushV
	var_339_object = var_1_object; // 0xc23 MovT
	func_5650(var_338_bool, var_339_object); // 0xc24 NEW_2
	if(var_338_bool == 0) goto Label_3116; // 0xc26 JumpB
	var_340_int = 515760; // 0xc27 PushI
	var_341_int = 16834; // 0xc28 PushI
	var_342_int = 16829; // 0xc29 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xc2a TObjFunc
	
Label_3116:
	var_343_int = 511719; // 0xc2c PushI
	var_344_int = -1; // 0xc2d PushI
	var_345_int = 12925; // 0xc2e PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xc2f TObjFunc
	return 0; // 0xc31 Return
	
Label_3122:
	var_346_int = 12935; // 0xc32 PushI
	var_347_bool = var_67_bool == var_346_int; // 0xc33 Eq
	if(var_347_bool == 0) goto Label_3155; // 0xc34 JumpB
	var_348_string = ""; // 0xc35 PushV
	var_348_string = "Anger"; // 0xc36 MovS
	func_2708(var_68_cvector, var_348_string); // 0xc37 NEW_2
	var_349_int = 511729; // 0xc39 PushI
	SetMessage(var_349_int); // 0xc3a TObjFunc
	ClearReplies(); // 0xc3c TObjFunc
	var_350_int = 511730; // 0xc3e PushI
	var_351_int = -1; // 0xc3f PushI
	var_352_int = 12936; // 0xc40 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xc41 TObjFunc
	var_353_int = 511731; // 0xc43 PushI
	var_354_int = 12938; // 0xc44 PushI
	var_355_int = 12937; // 0xc45 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xc46 TObjFunc
	var_356_bool = 0; var_357_object = Obj(); // 0xc48 PushV
	var_357_object = var_1_object; // 0xc49 MovT
	func_5650(var_356_bool, var_357_object); // 0xc4a NEW_2
	if(var_356_bool == 0) goto Label_3154; // 0xc4c JumpB
	var_358_int = 512485; // 0xc4d PushI
	var_359_int = 16834; // 0xc4e PushI
	var_360_int = 13653; // 0xc4f PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xc50 TObjFunc
	
Label_3154:
	return 0; // 0xc52 Return
	
Label_3155:
	var_361_int = 12938; // 0xc53 PushI
	var_362_bool = var_67_bool == var_361_int; // 0xc54 Eq
	if(var_362_bool == 0) goto Label_3173; // 0xc55 JumpB
	var_363_string = ""; // 0xc56 PushV
	var_363_string = "Neutral"; // 0xc57 MovS
	func_2708(var_68_cvector, var_363_string); // 0xc58 NEW_2
	var_364_int = 511732; // 0xc5a PushI
	SetMessage(var_364_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_365_int = 511733; // 0xc5f PushI
	var_366_int = -1; // 0xc60 PushI
	var_367_int = 12939; // 0xc61 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xc62 TObjFunc
	return 0; // 0xc64 Return
	
Label_3173:
	var_368_int = 12928; // 0xc65 PushI
	var_369_bool = var_67_bool == var_368_int; // 0xc66 Eq
	if(var_369_bool == 0) goto Label_3196; // 0xc67 JumpB
	var_370_string = ""; // 0xc68 PushV
	var_370_string = "Sly"; // 0xc69 MovS
	func_2708(var_68_cvector, var_370_string); // 0xc6a NEW_2
	var_371_int = 511722; // 0xc6c PushI
	SetMessage(var_371_int); // 0xc6d TObjFunc
	ClearReplies(); // 0xc6f TObjFunc
	var_372_int = 511723; // 0xc71 PushI
	var_373_int = 12930; // 0xc72 PushI
	var_374_int = 12929; // 0xc73 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xc74 TObjFunc
	var_375_int = 515761; // 0xc76 PushI
	var_376_int = -1; // 0xc77 PushI
	var_377_int = 16830; // 0xc78 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xc79 TObjFunc
	return 0; // 0xc7b Return
	
Label_3196:
	var_378_int = 12930; // 0xc7c PushI
	var_379_bool = var_67_bool == var_378_int; // 0xc7d Eq
	if(var_379_bool == 0) goto Label_3219; // 0xc7e JumpB
	var_380_string = ""; // 0xc7f PushV
	var_380_string = "Neutral"; // 0xc80 MovS
	func_2708(var_68_cvector, var_380_string); // 0xc81 NEW_2
	var_381_int = 511724; // 0xc83 PushI
	SetMessage(var_381_int); // 0xc84 TObjFunc
	ClearReplies(); // 0xc86 TObjFunc
	var_382_int = 511726; // 0xc88 PushI
	var_383_int = 12933; // 0xc89 PushI
	var_384_int = 12932; // 0xc8a PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xc8b TObjFunc
	var_385_int = 511725; // 0xc8d PushI
	var_386_int = -1; // 0xc8e PushI
	var_387_int = 12931; // 0xc8f PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0xc90 TObjFunc
	return 0; // 0xc92 Return
	
Label_3219:
	var_388_int = 12933; // 0xc93 PushI
	var_389_bool = var_67_bool == var_388_int; // 0xc94 Eq
	if(var_389_bool == 0) goto Label_3242; // 0xc95 JumpB
	var_390_string = ""; // 0xc96 PushV
	var_390_string = "Neutral"; // 0xc97 MovS
	func_2708(var_68_cvector, var_390_string); // 0xc98 NEW_2
	var_391_int = 511727; // 0xc9a PushI
	SetMessage(var_391_int); // 0xc9b TObjFunc
	ClearReplies(); // 0xc9d TObjFunc
	var_392_int = 515757; // 0xc9f PushI
	var_393_int = 16826; // 0xca0 PushI
	var_394_int = 16825; // 0xca1 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xca2 TObjFunc
	var_395_int = 515763; // 0xca4 PushI
	var_396_int = -1; // 0xca5 PushI
	var_397_int = 16832; // 0xca6 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xca7 TObjFunc
	return 0; // 0xca9 Return
	
Label_3242:
	var_398_int = 16826; // 0xcaa PushI
	var_399_bool = var_67_bool == var_398_int; // 0xcab Eq
	if(var_399_bool == 0) goto Label_3265; // 0xcac JumpB
	var_400_string = ""; // 0xcad PushV
	var_400_string = "Sly"; // 0xcae MovS
	func_2708(var_68_cvector, var_400_string); // 0xcaf NEW_2
	var_401_int = 515758; // 0xcb1 PushI
	SetMessage(var_401_int); // 0xcb2 TObjFunc
	ClearReplies(); // 0xcb4 TObjFunc
	var_402_int = 515764; // 0xcb6 PushI
	var_403_int = -1; // 0xcb7 PushI
	var_404_int = 16833; // 0xcb8 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xcb9 TObjFunc
	var_405_int = 515762; // 0xcbb PushI
	var_406_int = -1; // 0xcbc PushI
	var_407_int = 16831; // 0xcbd PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xcbe TObjFunc
	return 0; // 0xcc0 Return
	
Label_3265:
	var_3_object = 1; // 0xcc1 TMovB
	var_408_bool = 0; // 0xcc2 PushV
	func_5359(var_408_bool); // 0xcc3 NEW_2
	if(var_408_bool == 0) goto Label_3273; // 0xcc5 JumpB
	lshStopAnimation(); // 0xcc6 Func
	goto Label_3275; // 0xcc8 Jump
	
Label_3275:
	return 0; // 0xccb Return
	
Label_3273:
	StopAnimation(); // 0xcc9 Func
	
Label_3277:
	return 0; // 0xccd Return
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xd70 PushI
	if(var_69_int == 0) goto Label_3488; // 0xd71 JumpB
	func_5183(); // 0xd73 NEW_2
	var_71_int = 15337; // 0xd75 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xd76 Eq
	if(var_72_bool == 0) goto Label_3453; // 0xd77 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xd78 PushV
	var_73_object = var_1_object; // 0xd79 MovT
	var_74_object = var_0_bool; // 0xd7a MovT
	func_5509(); // 0xd7b NEW_2
	
Label_3453:
	var_76_int = 15336; // 0xd7d PushI
	var_77_bool = var_67_bool == var_76_int; // 0xd7e Eq
	if(var_77_bool == 0) goto Label_3476; // 0xd7f JumpB
	var_78_string = ""; // 0xd80 PushV
	var_78_string = "Fear"; // 0xd81 MovS
	func_3417(var_68_cvector, var_78_string); // 0xd82 NEW_2
	var_95_int = 514122; // 0xd84 PushI
	SetMessage(var_95_int); // 0xd85 TObjFunc
	ClearReplies(); // 0xd87 TObjFunc
	var_96_int = 514123; // 0xd89 PushI
	var_97_int = -1; // 0xd8a PushI
	var_98_int = 15337; // 0xd8b PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xd8c TObjFunc
	var_99_int = 514124; // 0xd8e PushI
	var_100_int = -1; // 0xd8f PushI
	var_101_int = 15338; // 0xd90 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xd91 TObjFunc
	return 0; // 0xd93 Return
	
Label_3476:
	var_3_object = 1; // 0xd94 TMovB
	var_102_bool = 0; // 0xd95 PushV
	func_5359(var_102_bool); // 0xd96 NEW_2
	if(var_102_bool == 0) goto Label_3484; // 0xd98 JumpB
	lshStopAnimation(); // 0xd99 Func
	goto Label_3486; // 0xd9b Jump
	
Label_3486:
	return 0; // 0xd9e Return
	
Label_3484:
	StopAnimation(); // 0xd9c Func
	
Label_3488:
	return 0; // 0xda0 Return
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xe43 PushI
	if(var_69_int == 0) goto Label_3699; // 0xe44 JumpB
	func_5183(); // 0xe46 NEW_2
	var_71_int = 15341; // 0xe48 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xe49 Eq
	if(var_72_bool == 0) goto Label_3664; // 0xe4a JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xe4b PushV
	var_73_object = var_1_object; // 0xe4c MovT
	var_74_object = var_0_bool; // 0xe4d MovT
	func_5509(); // 0xe4e NEW_2
	
Label_3664:
	var_76_int = 15340; // 0xe50 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xe51 Eq
	if(var_77_bool == 0) goto Label_3687; // 0xe52 JumpB
	var_78_string = ""; // 0xe53 PushV
	var_78_string = "Smile"; // 0xe54 MovS
	func_3628(var_68_cvector, var_78_string); // 0xe55 NEW_2
	var_95_int = 514126; // 0xe57 PushI
	SetMessage(var_95_int); // 0xe58 TObjFunc
	ClearReplies(); // 0xe5a TObjFunc
	var_96_int = 514127; // 0xe5c PushI
	var_97_int = -1; // 0xe5d PushI
	var_98_int = 15341; // 0xe5e PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xe5f TObjFunc
	var_99_int = 514128; // 0xe61 PushI
	var_100_int = -1; // 0xe62 PushI
	var_101_int = 15342; // 0xe63 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xe64 TObjFunc
	return 0; // 0xe66 Return
	
Label_3687:
	var_3_object = 1; // 0xe67 TMovB
	var_102_bool = 0; // 0xe68 PushV
	func_5359(var_102_bool); // 0xe69 NEW_2
	if(var_102_bool == 0) goto Label_3695; // 0xe6b JumpB
	lshStopAnimation(); // 0xe6c Func
	goto Label_3697; // 0xe6e Jump
	
Label_3697:
	return 0; // 0xe71 Return
	
Label_3695:
	StopAnimation(); // 0xe6f Func
	
Label_3699:
	return 0; // 0xe73 Return
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xf16 PushI
	if(var_69_int == 0) goto Label_3910; // 0xf17 JumpB
	func_5183(); // 0xf19 NEW_2
	var_71_int = 40647; // 0xf1b PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xf1c Eq
	if(var_72_bool == 0) goto Label_3875; // 0xf1d JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xf1e PushV
	var_73_object = var_1_object; // 0xf1f MovT
	var_74_object = var_0_bool; // 0xf20 MovT
	func_5509(); // 0xf21 NEW_2
	
Label_3875:
	var_76_int = 40646; // 0xf23 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xf24 Eq
	if(var_77_bool == 0) goto Label_3898; // 0xf25 JumpB
	var_78_string = ""; // 0xf26 PushV
	var_78_string = "Sly"; // 0xf27 MovS
	func_3839(var_68_cvector, var_78_string); // 0xf28 NEW_2
	var_95_int = 538735; // 0xf2a PushI
	SetMessage(var_95_int); // 0xf2b TObjFunc
	ClearReplies(); // 0xf2d TObjFunc
	var_96_int = 538736; // 0xf2f PushI
	var_97_int = -1; // 0xf30 PushI
	var_98_int = 40647; // 0xf31 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf32 TObjFunc
	var_99_int = 538754; // 0xf34 PushI
	var_100_int = -1; // 0xf35 PushI
	var_101_int = 40666; // 0xf36 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xf37 TObjFunc
	return 0; // 0xf39 Return
	
Label_3898:
	var_3_object = 1; // 0xf3a TMovB
	var_102_bool = 0; // 0xf3b PushV
	func_5359(var_102_bool); // 0xf3c NEW_2
	if(var_102_bool == 0) goto Label_3906; // 0xf3e JumpB
	lshStopAnimation(); // 0xf3f Func
	goto Label_3908; // 0xf41 Jump
	
Label_3908:
	return 0; // 0xf44 Return
	
Label_3906:
	StopAnimation(); // 0xf42 Func
	
Label_3910:
	return 0; // 0xf46 Return
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xfe9 PushI
	if(var_69_int == 0) goto Label_4121; // 0xfea JumpB
	func_5183(); // 0xfec NEW_2
	var_71_int = 15349; // 0xfee PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xfef Eq
	if(var_72_bool == 0) goto Label_4086; // 0xff0 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xff1 PushV
	var_73_object = var_1_object; // 0xff2 MovT
	var_74_object = var_0_bool; // 0xff3 MovT
	func_5509(); // 0xff4 NEW_2
	
Label_4086:
	var_76_int = 15348; // 0xff6 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xff7 Eq
	if(var_77_bool == 0) goto Label_4109; // 0xff8 JumpB
	var_78_string = ""; // 0xff9 PushV
	var_78_string = "Anger"; // 0xffa MovS
	func_4050(var_68_cvector, var_78_string); // 0xffb NEW_2
	var_95_int = 514134; // 0xffd PushI
	SetMessage(var_95_int); // 0xffe TObjFunc
	ClearReplies(); // 0x1000 TObjFunc
	var_96_int = 514135; // 0x1002 PushI
	var_97_int = -1; // 0x1003 PushI
	var_98_int = 15349; // 0x1004 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1005 TObjFunc
	var_99_int = 514136; // 0x1007 PushI
	var_100_int = -1; // 0x1008 PushI
	var_101_int = 15350; // 0x1009 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x100a TObjFunc
	return 0; // 0x100c Return
	
Label_4109:
	var_3_object = 1; // 0x100d TMovB
	var_102_bool = 0; // 0x100e PushV
	func_5359(var_102_bool); // 0x100f NEW_2
	if(var_102_bool == 0) goto Label_4117; // 0x1011 JumpB
	lshStopAnimation(); // 0x1012 Func
	goto Label_4119; // 0x1014 Jump
	
Label_4119:
	return 0; // 0x1017 Return
	
Label_4117:
	StopAnimation(); // 0x1015 Func
	
Label_4121:
	return 0; // 0x1019 Return
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x10bc PushI
	if(var_69_int == 0) goto Label_4332; // 0x10bd JumpB
	func_5183(); // 0x10bf NEW_2
	var_71_int = 15353; // 0x10c1 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x10c2 Eq
	if(var_72_bool == 0) goto Label_4297; // 0x10c3 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x10c4 PushV
	var_73_object = var_1_object; // 0x10c5 MovT
	var_74_object = var_0_bool; // 0x10c6 MovT
	func_5509(); // 0x10c7 NEW_2
	
Label_4297:
	var_76_int = 44045; // 0x10c9 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x10ca Eq
	if(var_77_bool == 0) goto Label_4320; // 0x10cb JumpB
	var_78_string = ""; // 0x10cc PushV
	var_78_string = "Sly"; // 0x10cd MovS
	func_4261(var_68_cvector, var_78_string); // 0x10ce NEW_2
	var_95_int = 541830; // 0x10d0 PushI
	SetMessage(var_95_int); // 0x10d1 TObjFunc
	ClearReplies(); // 0x10d3 TObjFunc
	var_96_int = 514139; // 0x10d5 PushI
	var_97_int = -1; // 0x10d6 PushI
	var_98_int = 15353; // 0x10d7 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x10d8 TObjFunc
	var_99_int = 541833; // 0x10da PushI
	var_100_int = -1; // 0x10db PushI
	var_101_int = 44048; // 0x10dc PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x10dd TObjFunc
	return 0; // 0x10df Return
	
Label_4320:
	var_3_object = 1; // 0x10e0 TMovB
	var_102_bool = 0; // 0x10e1 PushV
	func_5359(var_102_bool); // 0x10e2 NEW_2
	if(var_102_bool == 0) goto Label_4328; // 0x10e4 JumpB
	lshStopAnimation(); // 0x10e5 Func
	goto Label_4330; // 0x10e7 Jump
	
Label_4330:
	return 0; // 0x10ea Return
	
Label_4328:
	StopAnimation(); // 0x10e8 Func
	
Label_4332:
	return 0; // 0x10ec Return
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	var_69_int = 1; // 0x1194 PushI
	if(var_69_int == 0) goto Label_4553; // 0x1195 JumpB
	func_5183(); // 0x1197 NEW_2
	var_71_int = 15401; // 0x1199 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x119a Eq
	if(var_72_bool == 0) goto Label_4513; // 0x119b JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x119c PushV
	var_73_object = var_1_object; // 0x119d MovT
	var_74_object = var_0_bool; // 0x119e MovT
	func_5509(); // 0x119f NEW_2
	
Label_4513:
	var_76_int = 15400; // 0x11a1 PushI
	var_77_bool = var_67_int == var_76_int; // 0x11a2 Eq
	if(var_77_bool == 0) goto Label_4541; // 0x11a3 JumpB
	var_78_string = ""; // 0x11a4 PushV
	var_78_string = "Fear"; // 0x11a5 MovS
	func_4477(var_68_cvector, var_78_string); // 0x11a6 NEW_2
	var_95_int = 514186; // 0x11a8 PushI
	SetMessage(var_95_int); // 0x11a9 TObjFunc
	ClearReplies(); // 0x11ab TObjFunc
	var_96_int = 514187; // 0x11ad PushI
	var_97_int = -1; // 0x11ae PushI
	var_98_int = 15401; // 0x11af PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x11b0 TObjFunc
	var_99_int = 514188; // 0x11b2 PushI
	var_100_int = -1; // 0x11b3 PushI
	var_101_int = 15402; // 0x11b4 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x11b5 TObjFunc
	var_102_int = 539631; // 0x11b7 PushI
	var_103_int = -1; // 0x11b8 PushI
	var_104_int = 41577; // 0x11b9 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x11ba TObjFunc
	return 0; // 0x11bc Return
	
Label_4541:
	var_3_object = 1; // 0x11bd TMovB
	var_105_bool = 0; // 0x11be PushV
	func_5359(var_105_bool); // 0x11bf NEW_2
	if(var_105_bool == 0) goto Label_4549; // 0x11c1 JumpB
	lshStopAnimation(); // 0x11c2 Func
	goto Label_4551; // 0x11c4 Jump
	
Label_4551:
	return 0; // 0x11c7 Return
	
Label_4549:
	StopAnimation(); // 0x11c5 Func
	
Label_4553:
	return 0; // 0x11c9 Return
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_68_int = 10; // 0x121a PushI
	var_69_bool = var_67_int == var_68_int; // 0x121b Eq
	if(var_69_bool == 0) goto Label_4670; // 0x121c JumpB
	func_4629(); // 0x121e NEW_2
	var_71_bool = 0; // 0x1220 PushV
	var_71_bool = 0; // 0x1221 MovB
	var_72_bool = 0; // 0x1222 PushV
	func_4850(var_72_bool); // 0x1223 NEW_2
	if(var_72_bool == 0) goto Label_4651; // 0x1225 JumpB
	var_75_bool = 0; // 0x1226 PushV
	func_4598(var_75_bool); // 0x1227 NEW_2
	if(var_75_bool == 0) goto Label_4651; // 0x1229 JumpB
	var_71_bool = 1; // 0x122a MovB
	
Label_4651:
	if(var_71_bool == 0) goto Label_4664; // 0x122b JumpB
	var_92_bool = 0; // 0x122c PushV
	func_4578(var_92_bool); // 0x122d NEW_2
	if(var_92_bool == 0) goto Label_4663; // 0x122f JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x1230 PushV
	var_113_object = Obj(); // 0x1231 PushV
	func_5218(var_113_object); // 0x1232 NEW_2
	var_112_object = var_113_object; // 0x1233 Mov
	func_4998(var_112_object); // 0x1235 NEW_2
	
Label_4663:
	goto Label_4670; // 0x1237 Jump
	
Label_4670:
	return 0; // 0x123e Return
	
Label_4664:
	func_4593(var_67_int); // 0x1239 NEW_2
	func_4620(); // 0x123c NEW_2
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_4811(); // 0x1240 NEW_2
	func_4629(); // 0x1243 NEW_2
	lshStopSpeech(); // 0x1245 Func
	lshStopAnimation(); // 0x1247 Func
	StopAsync(); // 0x1249 Func
	Hold(); // 0x124b Func
	return 0; // 0x124d Return
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0(); // 0x124e Func
	func_4629(); // 0x1251 NEW_2
	var_68_string = ""; // 0x1253 PushV
	var_68_string = "Neutral"; // 0x1254 MovS
	func_5137(var_68_string); // 0x1255 NEW_2
	func_4620(); // 0x1258 NEW_2
	return 0; // 0x125a Return
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool; // 0x125c Push
	if(var_68_bool == 0) goto Label_4706; // 0x125d JumpB
	func_4620(); // 0x125f NEW_2
	goto Label_4710; // 0x1261 Jump
	
Label_4710:
	return 0; // 0x1266 Return
	
Label_4706:
	var_74_string = ""; // 0x1262 PushV
	var_74_string = "Neutral"; // 0x1263 MovS
	func_5137(var_74_string); // 0x1264 NEW_2
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x1267 PushV
	IsOverrideActive(var_69_bool); // 0x1268 Func
	var_70_bool = var_69_bool == 0; // 0x126a Not
	if(var_70_bool == 0) goto Label_4739; // 0x126b JumpB
	EventDisable(0); // 0x126c EventDisable
	func_4811(); // 0x126e NEW_2
	var_71_bool = 0; var_72_object = Obj(); // 0x1270 PushV
	var_72_object = var_67_object; // 0x1271 Mov
	func_4841(var_72_object); // 0x1272 NEW_2
	EventEnable(0); // 0x1274 EventEnable
	var_85_object = Obj(); // 0x1275 PushV
	var_85_object = var_67_object; // 0x1276 Mov
	func_6020(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object); // 0x1277 NEW_2
	var_1349_string = ""; // 0x1279 PushV
	var_1349_string = "Neutral"; // 0x127a MovS
	func_5137(var_1349_string); // 0x127b NEW_2
	func_4629(); // 0x127e NEW_2
	func_4620(); // 0x1281 NEW_2
	
Label_4739:
	return 2; // 0x1283 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1]; // 0x11ca PushGE
	var_67_bool = 0; // 0x11cb MovB
	GlobalVars[1] = var_67_bool; // 0x11cc PopGE
	var_68_int = GlobalVars[2]; // 0x11cd PushGE
	var_68_int = -1; // 0x11ce MovI
	GlobalVars[2] = var_68_int; // 0x11cf PopGE
	func_4564(var_66_cvector); // 0x11d1 NEW_2
	return 0; // 0x11d3 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_548_string = ""; // 0x4 PushV
	var_548_string = "Neutral"; // 0x5 MovS
	func_5137(var_548_string); // 0x6 NEW_2
	lshWaitForAnimEnd(); // 0x8 Func
	var_549_bool = var_0_bool; // 0xa PushT
	if(var_549_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_5638(var_873_bool)
{
	var_875_int = 0; var_876_string = ""; // 0x1607 PushV
	var_876_string = "ood5Grif1"; // 0x1608 MovS
	func_5239(var_875_int, var_876_string); // 0x1609 NEW_2
	var_877_int = 0; // 0x160b PushI
	var_878_bool = var_875_int == var_877_int; // 0x160c Eq
	if(var_878_bool == 0) goto Label_5648; // 0x160d JumpB
	var_873_bool = 1; // 0x160e MovB
	return 0; // 0x160f Return
	
Label_5648:
	var_873_bool = 0; // 0x1610 MovB
	return 0; // 0x1611 Return
}


func_4620()
{
	var_1351_float = 0; var_1352_float = 0; // 0x120c PushV
	var_1353_int = 8; // 0x120d PushI
	var_1354_int = 16; // 0x120e PushI
	rand(var_1352_float, var_1353_int, var_1354_int); // 0x120f Func
	var_1355_int = 10; // 0x1211 PushI
	SetTimer(var_1355_int, var_1352_float); // 0x1212 Func
	return 2; // 0x1214 Return
}


func_5133()
{
	CameraSwitchToNormal(); // 0x140e Func
	return 0; // 0x1410 Return
}


func_5137(var_416_string)
{
	var_417_bool = 0; var_418_float = 0; var_419_float = 0; var_420_bool = 0; var_421_float = 0; var_422_float = 0; // 0x1411 PushV
	lshHasAnimation(var_420_bool, var_416_string); // 0x1412 Func
	var_423_bool = var_420_bool; // 0x1414 Push
	if(var_423_bool == 0) goto Label_5148; // 0x1415 JumpB
	lshGetAnimTimes(var_416_string, var_421_float, var_422_float); // 0x1416 Func
	var_424_bool = 0; // 0x1418 PushB
	lshPlayAnimation(var_421_float, var_422_float, var_424_bool); // 0x1419 Func
	goto Label_5152; // 0x141b Jump
	
Label_5152:
	return 6; // 0x1420 Return
	
Label_5148:
	var_425_string = "Can't find lsh animation : "; // 0x141c PushS
	var_426_int = var_425_string + var_416_string; // 0x141d Add
	Trace(var_426_int); // 0x141e Func
}


func_5650(var_897_bool, var_898_object)
{
	var_899_bool = 0; var_900_object = Obj(); // 0x1613 PushV
	var_900_object = var_898_object; // 0x1614 Mov
	func_5696(var_900_object); // 0x1615 NEW_2
	if(var_899_bool == 0) goto Label_5658; // 0x1617 JumpB
	var_897_bool = 1; // 0x1618 MovB
	return 0; // 0x1619 Return
	
Label_5658:
	var_897_bool = 0; // 0x161a MovB
	return 0; // 0x161b Return
}


func_4629()
{
	var_1350_int = 10; // 0x1215 PushI
	KillTimer(var_1350_int); // 0x1216 Func
	return 0; // 0x1218 Return
}


func_22(var_0_bool, var_445_int, var_446_object)
{
	var_448_object = Obj(); var_449_bool = 0; var_450_int = 0; var_451_bool = 0; var_452_object = Obj(); var_453_bool = 0; var_454_int = 0; var_455_bool = 0; // 0x16 PushV
	var_0_bool = var_446_object; // 0x17 TMov
	var_456_bool = 0; var_457_object = Obj(); var_458_float = 0; // 0x18 PushV
	var_457_object = var_446_object; // 0x19 Mov
	var_458_float = 70.0; // 0x1a MovF
	func_4855(var_457_object, var_458_float); // 0x1b NEW_2
	var_459_bool = var_456_bool == 0; // 0x1d Not
	if(var_459_bool == 0) goto Label_33; // 0x1e JumpB
	var_445_int = -2; // 0x1f MovI
	return 8; // 0x20 Return
	
Label_33:
	CreateDialog(var_452_object); // 0x21 Func
	var_460_int = 0; // 0x23 PushV
	func_5353(var_460_int); // 0x24 NEW_2
	SetNPCName(var_460_int); // 0x26 ObjFunc
	var_461_int = 0; // 0x28 PushV
	func_5351(var_461_int); // 0x29 NEW_2
	SetNPCDescription(var_461_int); // 0x2b ObjFunc
	var_462_string = ""; // 0x2d PushV
	func_5355(var_462_string); // 0x2e NEW_2
	SetPhoto(var_462_string); // 0x30 ObjFunc
	var_463_string = ""; // 0x32 PushV
	func_5357(var_463_string); // 0x33 NEW_2
	SetPhoto2(var_463_string); // 0x35 ObjFunc
	var_464_int = 0; // 0x37 PushV
	func_5978(var_464_int); // 0x38 NEW_2
	SetPlayerName(var_464_int); // 0x3a ObjFunc
	var_454_int = -1; // 0x3c MovI
	IsOverrideActive(var_453_bool); // 0x3d Func
	var_465_bool = var_453_bool; // 0x3f Push
	if(var_465_bool == 0) goto Label_67; // 0x40 JumpB
	var_445_int = -2; // 0x41 MovI
	return 8; // 0x42 Return
	
Label_67:
	DoDialog(var_452_object); // 0x43 Func
	var_466_bool = 0; var_467_object = Obj(); // 0x45 PushV
	var_468_object = Obj(); // 0x46 PushV
	func_5218(var_468_object); // 0x47 NEW_2
	var_467_object = var_468_object; // 0x48 Mov
	func_4940(var_466_bool, var_467_object); // 0x4a NEW_2
	var_469_object = Obj(); var_470_object = Obj(); // 0x4c PushV
	var_469_object = var_446_object; // 0x4d Mov
	var_470_object = var_452_object; // 0x4e Mov
	TaskCall(2); // 0x4f TaskCall
	func_103(var_471_object, var_472_object, var_473_string, var_474_bool, var_469_object, var_470_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	IsDialogEnd(var_455_bool); // 0x53 ObjFunc
	
Label_85:
	var_510_bool = var_455_bool == 0; // 0x55 Not
	if(var_510_bool == 0) goto Label_92; // 0x56 JumpB
	sync(); // 0x57 Func
	IsDialogEnd(var_455_bool); // 0x59 ObjFunc
	goto Label_85; // 0x5b Jump
	
Label_92:
	var_511_object = Obj(); // 0x5c PushV
	var_511_object = var_446_object; // 0x5d Mov
	func_4923(); // 0x5e NEW_2
	StopDialog(var_452_object); // 0x60 Func
	GetReturnValue(var_454_int); // 0x62 ObjFunc
	var_445_int = var_454_int; // 0x64 Mov
	return 8; // 0x65 Return
}


func_4122(var_0_bool, var_1105_int, var_1106_object)
{
	var_1108_object = Obj(); var_1109_bool = 0; var_1110_int = 0; var_1111_bool = 0; var_1112_object = Obj(); var_1113_bool = 0; var_1114_int = 0; var_1115_bool = 0; // 0x101a PushV
	var_0_bool = var_1106_object; // 0x101b TMov
	var_1116_bool = 0; var_1117_object = Obj(); var_1118_float = 0; // 0x101c PushV
	var_1117_object = var_1106_object; // 0x101d Mov
	var_1118_float = 70.0; // 0x101e MovF
	func_4855(var_1117_object, var_1118_float); // 0x101f NEW_2
	var_1119_bool = var_1116_bool == 0; // 0x1021 Not
	if(var_1119_bool == 0) goto Label_4133; // 0x1022 JumpB
	var_1105_int = -2; // 0x1023 MovI
	return 8; // 0x1024 Return
	
Label_4133:
	CreateDialog(var_1112_object); // 0x1025 Func
	var_1120_int = 0; // 0x1027 PushV
	func_5353(var_1120_int); // 0x1028 NEW_2
	SetNPCName(var_1120_int); // 0x102a ObjFunc
	var_1121_int = 0; // 0x102c PushV
	func_5351(var_1121_int); // 0x102d NEW_2
	SetNPCDescription(var_1121_int); // 0x102f ObjFunc
	var_1122_string = ""; // 0x1031 PushV
	func_5355(var_1122_string); // 0x1032 NEW_2
	SetPhoto(var_1122_string); // 0x1034 ObjFunc
	var_1123_string = ""; // 0x1036 PushV
	func_5357(var_1123_string); // 0x1037 NEW_2
	SetPhoto2(var_1123_string); // 0x1039 ObjFunc
	var_1124_int = 0; // 0x103b PushV
	func_5978(var_1124_int); // 0x103c NEW_2
	SetPlayerName(var_1124_int); // 0x103e ObjFunc
	var_1114_int = -1; // 0x1040 MovI
	IsOverrideActive(var_1113_bool); // 0x1041 Func
	var_1125_bool = var_1113_bool; // 0x1043 Push
	if(var_1125_bool == 0) goto Label_4167; // 0x1044 JumpB
	var_1105_int = -2; // 0x1045 MovI
	return 8; // 0x1046 Return
	
Label_4167:
	DoDialog(var_1112_object); // 0x1047 Func
	var_1126_bool = 0; var_1127_object = Obj(); // 0x1049 PushV
	var_1128_object = Obj(); // 0x104a PushV
	func_5218(var_1128_object); // 0x104b NEW_2
	var_1127_object = var_1128_object; // 0x104c Mov
	func_4940(var_1126_bool, var_1127_object); // 0x104e NEW_2
	var_1129_object = Obj(); var_1130_object = Obj(); // 0x1050 PushV
	var_1129_object = var_1106_object; // 0x1051 Mov
	var_1130_object = var_1112_object; // 0x1052 Mov
	TaskCall(24); // 0x1053 TaskCall
	func_4203(var_1131_object, var_1132_object, var_1133_string, var_1134_bool, var_1129_object, var_1130_object); // 0x1054 NEW_2
	TaskReturn(); // 0x1055 TaskReturn
	IsDialogEnd(var_1115_bool); // 0x1057 ObjFunc
	
Label_4185:
	var_1159_bool = var_1115_bool == 0; // 0x1059 Not
	if(var_1159_bool == 0) goto Label_4192; // 0x105a JumpB
	sync(); // 0x105b Func
	IsDialogEnd(var_1115_bool); // 0x105d ObjFunc
	goto Label_4185; // 0x105f Jump
	
Label_4192:
	var_1160_object = Obj(); // 0x1060 PushV
	var_1160_object = var_1106_object; // 0x1061 Mov
	func_4923(); // 0x1062 NEW_2
	StopDialog(var_1112_object); // 0x1064 Func
	GetReturnValue(var_1114_int); // 0x1066 ObjFunc
	var_1105_int = var_1114_int; // 0x1068 Mov
	return 8; // 0x1069 Return
}


func_5660(var_887_bool)
{
	var_889_int = 0; var_890_string = ""; // 0x161d PushV
	var_890_string = "d5q01ThiefsWillHelp"; // 0x161e MovS
	func_5239(var_889_int, var_890_string); // 0x161f NEW_2
	var_891_int = 1; // 0x1621 PushI
	var_892_bool = var_889_int == var_891_int; // 0x1622 Eq
	if(var_892_bool == 0) goto Label_5670; // 0x1623 JumpB
	var_887_bool = 1; // 0x1624 MovB
	return 0; // 0x1625 Return
	
Label_5670:
	var_887_bool = 0; // 0x1626 MovB
	return 0; // 0x1627 Return
}


func_5153(var_391_string, var_392_bool)
{
	var_395_bool = 0; var_396_float = 0; var_397_float = 0; var_398_bool = 0; var_399_float = 0; var_400_float = 0; // 0x1421 PushV
	lshHasAnimation(var_398_bool, var_391_string); // 0x1422 Func
	var_401_bool = var_398_bool; // 0x1424 Push
	if(var_401_bool == 0) goto Label_5163; // 0x1425 JumpB
	lshGetAnimTimes(var_391_string, var_399_float, var_400_float); // 0x1426 Func
	lshPlayAnimation(var_399_float, var_400_float, var_392_bool); // 0x1428 Func
	goto Label_5167; // 0x142a Jump
	
Label_5167:
	return 6; // 0x142f Return
	
Label_5163:
	var_402_string = "Can't find lsh animation : "; // 0x142b PushS
	var_403_int = var_402_string + var_391_string; // 0x142c Add
	Trace(var_403_int); // 0x142d Func
}


func_5672(var_825_bool)
{
	var_827_int = 0; var_828_string = ""; // 0x1629 PushV
	var_828_string = "d5q02"; // 0x162a MovS
	func_5239(var_827_int, var_828_string); // 0x162b NEW_2
	var_829_int = 0; // 0x162d PushI
	var_830_bool = var_827_int == var_829_int; // 0x162e Eq
	if(var_830_bool == 0) goto Label_5682; // 0x162f JumpB
	var_825_bool = 1; // 0x1630 MovB
	return 0; // 0x1631 Return
	
Label_5682:
	var_825_bool = 0; // 0x1632 MovB
	return 0; // 0x1633 Return
}


func_1578(var_0_bool, var_1_object, var_2_object, var_3_object, var_719_object, var_720_object)
{
	var_0_bool = var_720_object; // 0x62b TMov
	var_1_object = var_719_object; // 0x62c TMov
	var_3_object = 0; // 0x62d TMovB
	var_725_int = 1; // 0x62e PushI
	if(var_725_int == 0) goto Label_1659; // 0x62f JumpB
	var_726_bool = 0; // 0x630 PushV
	var_726_bool = 0; // 0x631 MovB
	var_727_bool = 0; var_728_object = Obj(); // 0x632 PushV
	var_728_object = var_1_object; // 0x633 MovT
	func_5578(var_728_object); // 0x634 NEW_2
	if(var_727_bool == 0) goto Label_1597; // 0x636 JumpB
	var_733_bool = 0; var_734_object = Obj(); // 0x637 PushV
	var_734_object = var_1_object; // 0x638 MovT
	func_5590(var_734_object); // 0x639 NEW_2
	if(var_733_bool == 0) goto Label_1597; // 0x63b JumpB
	var_726_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_726_bool == 0) goto Label_1618; // 0x63d JumpB
	var_739_string = ""; // 0x63e PushV
	var_739_string = "Smile"; // 0x63f MovS
	func_1689(var_720_object, var_739_string); // 0x640 NEW_2
	var_747_int = 510952; // 0x642 PushI
	SetMessage(var_747_int); // 0x643 TObjFunc
	ClearReplies(); // 0x645 TObjFunc
	var_748_int = 510953; // 0x647 PushI
	var_749_int = 12113; // 0x648 PushI
	var_750_int = 12112; // 0x649 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x64a TObjFunc
	var_751_int = 510960; // 0x64c PushI
	var_752_int = 12113; // 0x64d PushI
	var_753_int = 12119; // 0x64e PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x64f TObjFunc
	goto Label_1659; // 0x651 Jump
	
Label_1659:
	var_754_bool = 0; // 0x67b PushV
	func_5359(var_754_bool); // 0x67c NEW_2
	if(var_754_bool == 0) goto Label_1674; // 0x67e JumpB
	
Label_1663:
	lshWaitForAnimEnd(); // 0x67f Func
	var_755_object = var_3_object; // 0x681 PushT
	if(var_755_object == 0) goto Label_1668; // 0x682 JumpB
	goto Label_1673; // 0x683 Jump
	
Label_1673:
	goto Label_1688; // 0x689 Jump
	
Label_1688:
	return 0; // 0x698 Return
	
Label_1668:
	var_756_string = ""; // 0x684 PushV
	var_756_string = var_2_object; // 0x685 MovT
	func_5137(var_756_string); // 0x686 NEW_2
	goto Label_1663; // 0x688 Jump
	
Label_1674:
	var_757_string = "all"; // 0x68a PushS
	var_758_string = "idle"; // 0x68b PushS
	PlayAnimation(var_757_string, var_758_string); // 0x68c Func
	
Label_1678:
	WaitForAnimEnd(); // 0x68e Func
	var_759_object = var_3_object; // 0x690 PushT
	if(var_759_object == 0) goto Label_1683; // 0x691 JumpB
	goto Label_1688; // 0x692 Jump
	
Label_1683:
	var_760_string = "all"; // 0x693 PushS
	var_761_string = "idle"; // 0x694 PushS
	PlayAnimation(var_760_string, var_761_string); // 0x695 Func
	goto Label_1678; // 0x697 Jump
	
Label_1618:
	var_762_string = ""; // 0x652 PushV
	var_762_string = "Neutral"; // 0x653 MovS
	func_1689(var_720_object, var_762_string); // 0x654 NEW_2
	var_763_int = 509615; // 0x656 PushI
	SetMessage(var_763_int); // 0x657 TObjFunc
	ClearReplies(); // 0x659 TObjFunc
	var_764_bool = 0; // 0x65b PushV
	var_764_bool = 0; // 0x65c MovB
	var_765_bool = 0; var_766_object = Obj(); // 0x65d PushV
	var_766_object = var_1_object; // 0x65e MovT
	func_5602(var_766_object); // 0x65f NEW_2
	if(var_765_bool == 0) goto Label_1640; // 0x661 JumpB
	var_771_bool = 0; var_772_object = Obj(); // 0x662 PushV
	var_772_object = var_1_object; // 0x663 MovT
	func_5614(var_772_object); // 0x664 NEW_2
	if(var_771_bool == 0) goto Label_1640; // 0x666 JumpB
	var_764_bool = 1; // 0x667 MovB
	
Label_1640:
	if(var_764_bool == 0) goto Label_1646; // 0x668 JumpB
	var_777_int = 510970; // 0x669 PushI
	var_778_int = 12133; // 0x66a PushI
	var_779_int = 12132; // 0x66b PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x66c TObjFunc
	
Label_1646:
	var_780_int = 514119; // 0x66e PushI
	var_781_int = -1; // 0x66f PushI
	var_782_int = 15333; // 0x670 PushI
	AddReply(var_780_int, var_781_int, var_782_int); // 0x671 TObjFunc
	var_783_int = 509616; // 0x673 PushI
	var_784_int = -1; // 0x674 PushI
	var_785_int = 10580; // 0x675 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0x676 TObjFunc
	goto Label_1659; // 0x678 Jump
}


func_3628(var_2_object, var_1014_string)
{
	var_1015_bool = 0; // 0xe2d PushV
	func_5359(var_1015_bool); // 0xe2e NEW_2
	var_1016_bool = var_1015_bool == 0; // 0xe30 Not
	if(var_1016_bool == 0) goto Label_3635; // 0xe31 JumpB
	return 0; // 0xe32 Return
	
Label_3635:
	var_1017_bool = var_1014_string == var_2_object; // 0xe33 Eq
	if(var_1017_bool == 0) goto Label_3638; // 0xe34 JumpB
	return 0; // 0xe35 Return
	
Label_3638:
	var_1018_string = ""; var_1019_bool = 0; // 0xe36 PushV
	var_1018_string = var_1014_string; // 0xe37 Mov
	var_1020_string = ""; // 0xe38 PushS
	var_1021_bool = var_1014_string == var_1020_string; // 0xe39 Eq
	if(var_1021_bool == 0) goto Label_3645; // 0xe3a JumpB
	var_1019_bool = 0; // 0xe3b MovB
	goto Label_3646; // 0xe3c Jump
	
Label_3646:
	func_5153(var_1018_string, var_1019_bool); // 0xe3e NEW_2
	var_2_object = var_1014_string; // 0xe40 TMov
	return 0; // 0xe41 Return
	
Label_3645:
	var_1019_bool = 1; // 0xe3d MovB
}


func_5168(var_320_bool, var_321_string)
{
	var_322_bool = 0; var_323_bool = 0; // 0x1430 PushV
	var_324_bool = 0; // 0x1431 PushV
	func_5359(var_324_bool); // 0x1432 NEW_2
	if(var_324_bool == 0) goto Label_5181; // 0x1434 JumpB
	lshHasSpeech(var_323_bool, var_321_string); // 0x1435 Func
	var_325_bool = var_323_bool; // 0x1437 Push
	if(var_325_bool == 0) goto Label_5181; // 0x1438 JumpB
	lshPlaySpeech(var_321_string); // 0x1439 Func
	var_320_bool = 1; // 0x143b MovB
	return 2; // 0x143c Return
	
Label_5181:
	var_320_bool = 0; // 0x143d MovB
	return 2; // 0x143e Return
}


func_5684(var_831_bool)
{
	var_833_int = 0; var_834_string = ""; // 0x1635 PushV
	var_834_string = "ood5Grif2"; // 0x1636 MovS
	func_5239(var_833_int, var_834_string); // 0x1637 NEW_2
	var_835_int = 0; // 0x1639 PushI
	var_836_bool = var_833_int == var_835_int; // 0x163a Eq
	if(var_836_bool == 0) goto Label_5694; // 0x163b JumpB
	var_831_bool = 1; // 0x163c MovB
	return 0; // 0x163d Return
	
Label_5694:
	var_831_bool = 0; // 0x163e MovB
	return 0; // 0x163f Return
}


func_1080(var_0_bool, var_1_object, var_2_object, var_3_object, var_578_object, var_579_object)
{
	var_0_bool = var_579_object; // 0x439 TMov
	var_1_object = var_578_object; // 0x43a TMov
	var_3_object = 0; // 0x43b TMovB
	var_584_int = 1; // 0x43c PushI
	if(var_584_int == 0) goto Label_1132; // 0x43d JumpB
	var_585_string = ""; // 0x43e PushV
	var_585_string = "Neutral"; // 0x43f MovS
	func_1162(var_579_object, var_585_string); // 0x440 NEW_2
	var_593_int = 506959; // 0x442 PushI
	SetMessage(var_593_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_594_bool = 0; // 0x447 PushV
	var_594_bool = 0; // 0x448 MovB
	var_595_bool = 0; var_596_object = Obj(); // 0x449 PushV
	var_596_object = var_1_object; // 0x44a MovT
	func_5554(var_596_object); // 0x44b NEW_2
	if(var_595_bool == 0) goto Label_1108; // 0x44d JumpB
	var_601_bool = 0; var_602_object = Obj(); // 0x44e PushV
	var_602_object = var_1_object; // 0x44f MovT
	func_5566(var_602_object); // 0x450 NEW_2
	if(var_601_bool == 0) goto Label_1108; // 0x452 JumpB
	var_594_bool = 1; // 0x453 MovB
	
Label_1108:
	if(var_594_bool == 0) goto Label_1114; // 0x454 JumpB
	var_607_int = 507328; // 0x455 PushI
	var_608_int = 8080; // 0x456 PushI
	var_609_int = 8079; // 0x457 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x458 TObjFunc
	
Label_1114:
	var_610_int = 536144; // 0x45a PushI
	var_611_int = -1; // 0x45b PushI
	var_612_int = 37903; // 0x45c PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x45d TObjFunc
	var_613_int = 507530; // 0x45f PushI
	var_614_int = -1; // 0x460 PushI
	var_615_int = 8312; // 0x461 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x462 TObjFunc
	var_616_int = 533848; // 0x464 PushI
	var_617_int = -1; // 0x465 PushI
	var_618_int = 35398; // 0x466 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x467 TObjFunc
	goto Label_1132; // 0x469 Jump
	
Label_1132:
	var_619_bool = 0; // 0x46c PushV
	func_5359(var_619_bool); // 0x46d NEW_2
	if(var_619_bool == 0) goto Label_1147; // 0x46f JumpB
	
Label_1136:
	lshWaitForAnimEnd(); // 0x470 Func
	var_620_object = var_3_object; // 0x472 PushT
	if(var_620_object == 0) goto Label_1141; // 0x473 JumpB
	goto Label_1146; // 0x474 Jump
	
Label_1146:
	goto Label_1161; // 0x47a Jump
	
Label_1161:
	return 0; // 0x489 Return
	
Label_1141:
	var_621_string = ""; // 0x475 PushV
	var_621_string = var_2_object; // 0x476 MovT
	func_5137(var_621_string); // 0x477 NEW_2
	goto Label_1136; // 0x479 Jump
	
Label_1147:
	var_622_string = "all"; // 0x47b PushS
	var_623_string = "idle"; // 0x47c PushS
	PlayAnimation(var_622_string, var_623_string); // 0x47d Func
	
Label_1151:
	WaitForAnimEnd(); // 0x47f Func
	var_624_object = var_3_object; // 0x481 PushT
	if(var_624_object == 0) goto Label_1156; // 0x482 JumpB
	goto Label_1161; // 0x483 Jump
	
Label_1156:
	var_625_string = "all"; // 0x484 PushS
	var_626_string = "idle"; // 0x485 PushS
	PlayAnimation(var_625_string, var_626_string); // 0x486 Func
	goto Label_1151; // 0x488 Jump
}


func_569(var_2_object, var_1321_string)
{
	var_1322_bool = 0; // 0x23a PushV
	func_5359(var_1322_bool); // 0x23b NEW_2
	var_1323_bool = var_1322_bool == 0; // 0x23d Not
	if(var_1323_bool == 0) goto Label_576; // 0x23e JumpB
	return 0; // 0x23f Return
	
Label_576:
	var_1324_bool = var_1321_string == var_2_object; // 0x240 Eq
	if(var_1324_bool == 0) goto Label_579; // 0x241 JumpB
	return 0; // 0x242 Return
	
Label_579:
	var_1325_string = ""; var_1326_bool = 0; // 0x243 PushV
	var_1325_string = var_1321_string; // 0x244 Mov
	var_1327_string = ""; // 0x245 PushS
	var_1328_bool = var_1321_string == var_1327_string; // 0x246 Eq
	if(var_1328_bool == 0) goto Label_586; // 0x247 JumpB
	var_1326_bool = 0; // 0x248 MovB
	goto Label_587; // 0x249 Jump
	
Label_587:
	func_5153(var_1325_string, var_1326_bool); // 0x24b NEW_2
	var_2_object = var_1321_string; // 0x24d TMov
	return 0; // 0x24e Return
	
Label_586:
	var_1326_bool = 1; // 0x24a MovB
}


func_5183()
{
	var_70_bool = 0; // 0x143f PushV
	func_5359(var_70_bool); // 0x1440 NEW_2
	if(var_70_bool == 0) goto Label_5189; // 0x1442 JumpB
	lshStopSpeech(); // 0x1443 Func
	
Label_5189:
	return 0; // 0x1445 Return
}


func_5696(var_899_bool)
{
	var_901_float = 0; var_902_float = 0; // 0x1640 PushV
	var_903_string = "money"; // 0x1641 PushS
	GetProperty(var_903_string, var_902_float); // 0x1642 ObjFunc
	var_904_int = 10000; // 0x1644 PushI
	var_905_bool = var_902_float >= var_904_int; // 0x1645 GE
	if(var_905_bool == 0) goto Label_5705; // 0x1646 JumpB
	var_899_bool = 1; // 0x1647 MovB
	return 2; // 0x1648 Return
	
Label_5705:
	var_899_bool = 0; // 0x1649 MovB
	return 2; // 0x164a Return
}


func_5190(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0; // 0x1446 PushV
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x1447 PushV
	var_134_int = var_129_int; // 0x1448 Mov
	var_135_int = var_130_int; // 0x1449 Mov
	func_5234(var_133_bool, var_134_int, var_135_int); // 0x144a NEW_2
	if(var_133_bool == 0) goto Label_5200; // 0x144c JumpB
	var_138_int = 0; // 0x144d PushI
	AddItem(var_132_bool, var_128_string, var_138_int); // 0x144e Func
	
Label_5200:
	return 2; // 0x1450 Return
}


func_5707()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x164b PushV
	var_83_int = 132; // 0x164c PushI
	var_84_int = 2; // 0x164d PushI
	var_85_int = 515269; // 0x164e PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x164f Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x1651 PushV
	var_87_object = var_82_object; // 0x1652 Mov
	var_88_int = 11; // 0x1653 MovI
	func_5759(var_86_bool, var_87_object, var_88_int); // 0x1654 NEW_2
	return 2; // 0x1656 Return
}


func_5201(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x1451 PushV
	var_148_bool = 0; var_149_int = 0; var_150_int = 0; // 0x1452 PushV
	var_149_int = var_140_int; // 0x1453 Mov
	var_150_int = var_141_int; // 0x1454 Mov
	func_5234(var_148_bool, var_149_int, var_150_int); // 0x1455 NEW_2
	if(var_148_bool == 0) goto Label_5217; // 0x1457 JumpB
	var_151_int = var_143_int - var_142_int; // 0x1458 Sub
	var_152_int = 1; // 0x1459 PushI
	var_153_int = var_151_int + var_152_int; // 0x145a Add
	irand(var_146_int, var_153_int); // 0x145b Func
	var_154_int = 0; // 0x145d PushI
	var_155_int = var_146_int + var_142_int; // 0x145e Add
	AddItem(var_147_bool, var_139_string, var_154_int, var_155_int); // 0x145f Func
	
Label_5217:
	return 4; // 0x1461 Return
}


func_5720()
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x1658 PushV
	var_104_int = 97; // 0x1659 PushI
	var_105_int = 2; // 0x165a PushI
	var_106_int = 512179; // 0x165b PushI
	CreateDiaryEntry(var_103_object, var_104_int, var_105_int, var_106_int); // 0x165c Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0x165e PushV
	var_108_object = var_103_object; // 0x165f Mov
	var_109_int = 22; // 0x1660 MovI
	func_5759(var_107_bool, var_108_object, var_109_int); // 0x1661 NEW_2
	return 2; // 0x1663 Return
}


func_5218(var_288_object)
{
	var_289_object = Obj(); var_290_object = Obj(); // 0x1462 PushV
	self(var_290_object); // 0x1463 Func
	var_288_object = var_290_object; // 0x1465 Mov
	return 2; // 0x1466 Return
}


func_5733()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x1665 PushV
	var_119_int = 145; // 0x1666 PushI
	var_120_int = 1; // 0x1667 PushI
	var_121_int = 515345; // 0x1668 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x1669 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x166b PushV
	var_123_object = var_118_object; // 0x166c Mov
	var_124_int = 139; // 0x166d MovI
	func_5759(var_122_bool, var_123_object, var_124_int); // 0x166e NEW_2
	return 2; // 0x1670 Return
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_469_object, var_470_object)
{
	var_0_bool = var_470_object; // 0x68 TMov
	var_1_object = var_469_object; // 0x69 TMov
	var_3_object = 0; // 0x6a TMovB
	var_475_int = 1; // 0x6b PushI
	if(var_475_int == 0) goto Label_141; // 0x6c JumpB
	var_476_string = ""; // 0x6d PushV
	var_476_string = "Neutral"; // 0x6e MovS
	func_171(var_470_object, var_476_string); // 0x6f NEW_2
	var_484_int = 533838; // 0x71 PushI
	SetMessage(var_484_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_485_bool = 0; var_486_object = Obj(); // 0x76 PushV
	var_486_object = var_1_object; // 0x77 MovT
	func_5542(var_486_object); // 0x78 NEW_2
	if(var_485_bool == 0) goto Label_128; // 0x7a JumpB
	var_493_int = 533839; // 0x7b PushI
	var_494_int = 35390; // 0x7c PushI
	var_495_int = 35389; // 0x7d PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x7e TObjFunc
	
Label_128:
	var_496_int = 533843; // 0x80 PushI
	var_497_int = -1; // 0x81 PushI
	var_498_int = 35393; // 0x82 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x83 TObjFunc
	var_499_int = 533844; // 0x85 PushI
	var_500_int = -1; // 0x86 PushI
	var_501_int = 35394; // 0x87 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
	
Label_141:
	var_502_bool = 0; // 0x8d PushV
	func_5359(var_502_bool); // 0x8e NEW_2
	if(var_502_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_503_object = var_3_object; // 0x93 PushT
	if(var_503_object == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_504_string = ""; // 0x96 PushV
	var_504_string = var_2_object; // 0x97 MovT
	func_5137(var_504_string); // 0x98 NEW_2
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_505_string = "all"; // 0x9c PushS
	var_506_string = "idle"; // 0x9d PushS
	PlayAnimation(var_505_string, var_506_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_507_object = var_3_object; // 0xa2 PushT
	if(var_507_object == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_508_string = "all"; // 0xa5 PushS
	var_509_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_508_string, var_509_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
}


func_5224(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0; // 0x1468 PushV
	var_258_int = var_254_cvector | var_254_cvector; // 0x1469 Or
	var_257_float = sqrt(var_258_int); // 0x146a Sqrt2
	var_259_float = 0.0; // 0x146b PushF
	var_260_bool = var_257_float < var_259_float; // 0x146c LT
	if(var_260_bool == 0) goto Label_5232; // 0x146d JumpB
	var_253_cvector = CVector(0.0, 0.0, 0.0); // 0x146e MovV
	return 2; // 0x146f Return
	
Label_5232:
	var_253_cvector = var_254_cvector / var_254_cvector; // 0x1470 Div2
	return 2; // 0x1471 Return
}


func_4203(var_0_bool, var_1_object, var_2_object, var_3_object, var_1129_object, var_1130_object)
{
	var_0_bool = var_1130_object; // 0x106c TMov
	var_1_object = var_1129_object; // 0x106d TMov
	var_3_object = 0; // 0x106e TMovB
	var_1135_int = 1; // 0x106f PushI
	if(var_1135_int == 0) goto Label_4231; // 0x1070 JumpB
	var_1136_string = ""; // 0x1071 PushV
	var_1136_string = "Sly"; // 0x1072 MovS
	func_4261(var_1130_object, var_1136_string); // 0x1073 NEW_2
	var_1144_int = 541830; // 0x1075 PushI
	SetMessage(var_1144_int); // 0x1076 TObjFunc
	ClearReplies(); // 0x1078 TObjFunc
	var_1145_int = 514139; // 0x107a PushI
	var_1146_int = -1; // 0x107b PushI
	var_1147_int = 15353; // 0x107c PushI
	AddReply(var_1145_int, var_1146_int, var_1147_int); // 0x107d TObjFunc
	var_1148_int = 541833; // 0x107f PushI
	var_1149_int = -1; // 0x1080 PushI
	var_1150_int = 44048; // 0x1081 PushI
	AddReply(var_1148_int, var_1149_int, var_1150_int); // 0x1082 TObjFunc
	goto Label_4231; // 0x1084 Jump
	
Label_4231:
	var_1151_bool = 0; // 0x1087 PushV
	func_5359(var_1151_bool); // 0x1088 NEW_2
	if(var_1151_bool == 0) goto Label_4246; // 0x108a JumpB
	
Label_4235:
	lshWaitForAnimEnd(); // 0x108b Func
	var_1152_object = var_3_object; // 0x108d PushT
	if(var_1152_object == 0) goto Label_4240; // 0x108e JumpB
	goto Label_4245; // 0x108f Jump
	
Label_4245:
	goto Label_4260; // 0x1095 Jump
	
Label_4260:
	return 0; // 0x10a4 Return
	
Label_4240:
	var_1153_string = ""; // 0x1090 PushV
	var_1153_string = var_2_object; // 0x1091 MovT
	func_5137(var_1153_string); // 0x1092 NEW_2
	goto Label_4235; // 0x1094 Jump
	
Label_4246:
	var_1154_string = "all"; // 0x1096 PushS
	var_1155_string = "idle"; // 0x1097 PushS
	PlayAnimation(var_1154_string, var_1155_string); // 0x1098 Func
	
Label_4250:
	WaitForAnimEnd(); // 0x109a Func
	var_1156_object = var_3_object; // 0x109c PushT
	if(var_1156_object == 0) goto Label_4255; // 0x109d JumpB
	goto Label_4260; // 0x109e Jump
	
Label_4255:
	var_1157_string = "all"; // 0x109f PushS
	var_1158_string = "idle"; // 0x10a0 PushS
	PlayAnimation(var_1157_string, var_1158_string); // 0x10a1 Func
	goto Label_4250; // 0x10a3 Jump
}


func_5234(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x1472 PushV
	irand(var_137_int, var_135_int); // 0x1473 Func
	var_133_bool = var_137_int < var_134_int; // 0x1475 LT2
	return 2; // 0x1476 Return
}


func_5746(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x1672 PushV
	GetDiaryRoot(var_133_object); // 0x1673 Func
	var_134_bool = var_133_object == 0; // 0x1675 Not
	if(var_134_bool == 0) goto Label_5756; // 0x1676 JumpB
	var_135_string = "Can't retrieve diary root"; // 0x1677 PushS
	Trace(var_135_string); // 0x1678 Func
	var_131_object = 0; // 0x167a MovB
	return 2; // 0x167b Return
	
Label_5756:
	var_131_object = var_133_object; // 0x167c Mov
	return 2; // 0x167d Return
}


func_3700(var_0_bool, var_1044_int, var_1045_object)
{
	var_1047_object = Obj(); var_1048_bool = 0; var_1049_int = 0; var_1050_bool = 0; var_1051_object = Obj(); var_1052_bool = 0; var_1053_int = 0; var_1054_bool = 0; // 0xe74 PushV
	var_0_bool = var_1045_object; // 0xe75 TMov
	var_1055_bool = 0; var_1056_object = Obj(); var_1057_float = 0; // 0xe76 PushV
	var_1056_object = var_1045_object; // 0xe77 Mov
	var_1057_float = 70.0; // 0xe78 MovF
	func_4855(var_1056_object, var_1057_float); // 0xe79 NEW_2
	var_1058_bool = var_1055_bool == 0; // 0xe7b Not
	if(var_1058_bool == 0) goto Label_3711; // 0xe7c JumpB
	var_1044_int = -2; // 0xe7d MovI
	return 8; // 0xe7e Return
	
Label_3711:
	CreateDialog(var_1051_object); // 0xe7f Func
	var_1059_int = 0; // 0xe81 PushV
	func_5353(var_1059_int); // 0xe82 NEW_2
	SetNPCName(var_1059_int); // 0xe84 ObjFunc
	var_1060_int = 0; // 0xe86 PushV
	func_5351(var_1060_int); // 0xe87 NEW_2
	SetNPCDescription(var_1060_int); // 0xe89 ObjFunc
	var_1061_string = ""; // 0xe8b PushV
	func_5355(var_1061_string); // 0xe8c NEW_2
	SetPhoto(var_1061_string); // 0xe8e ObjFunc
	var_1062_string = ""; // 0xe90 PushV
	func_5357(var_1062_string); // 0xe91 NEW_2
	SetPhoto2(var_1062_string); // 0xe93 ObjFunc
	var_1063_int = 0; // 0xe95 PushV
	func_5978(var_1063_int); // 0xe96 NEW_2
	SetPlayerName(var_1063_int); // 0xe98 ObjFunc
	var_1053_int = -1; // 0xe9a MovI
	IsOverrideActive(var_1052_bool); // 0xe9b Func
	var_1064_bool = var_1052_bool; // 0xe9d Push
	if(var_1064_bool == 0) goto Label_3745; // 0xe9e JumpB
	var_1044_int = -2; // 0xe9f MovI
	return 8; // 0xea0 Return
	
Label_3745:
	DoDialog(var_1051_object); // 0xea1 Func
	var_1065_bool = 0; var_1066_object = Obj(); // 0xea3 PushV
	var_1067_object = Obj(); // 0xea4 PushV
	func_5218(var_1067_object); // 0xea5 NEW_2
	var_1066_object = var_1067_object; // 0xea6 Mov
	func_4940(var_1065_bool, var_1066_object); // 0xea8 NEW_2
	var_1068_object = Obj(); var_1069_object = Obj(); // 0xeaa PushV
	var_1068_object = var_1045_object; // 0xeab Mov
	var_1069_object = var_1051_object; // 0xeac Mov
	TaskCall(20); // 0xead TaskCall
	func_3781(var_1070_object, var_1071_object, var_1072_string, var_1073_bool, var_1068_object, var_1069_object); // 0xeae NEW_2
	TaskReturn(); // 0xeaf TaskReturn
	IsDialogEnd(var_1054_bool); // 0xeb1 ObjFunc
	
Label_3763:
	var_1098_bool = var_1054_bool == 0; // 0xeb3 Not
	if(var_1098_bool == 0) goto Label_3770; // 0xeb4 JumpB
	sync(); // 0xeb5 Func
	IsDialogEnd(var_1054_bool); // 0xeb7 ObjFunc
	goto Label_3763; // 0xeb9 Jump
	
Label_3770:
	var_1099_object = Obj(); // 0xeba PushV
	var_1099_object = var_1045_object; // 0xebb Mov
	func_4923(); // 0xebc NEW_2
	StopDialog(var_1051_object); // 0xebe Func
	GetReturnValue(var_1053_int); // 0xec0 ObjFunc
	var_1044_int = var_1053_int; // 0xec2 Mov
	return 8; // 0xec3 Return
}


func_5239(var_487_int, var_488_string)
{
	var_489_int = 0; var_490_int = 0; // 0x1477 PushV
	GetVariable(var_488_string, var_490_int); // 0x1478 Func
	var_487_int = var_490_int; // 0x147a Mov
	return 2; // 0x147b Return
}


func_5244(var_156_int, var_157_int)
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x147c PushV
	CreateIntVector(var_159_object); // 0x147d Func
	add(var_156_int); // 0x147f ObjFunc
	add(var_157_int); // 0x1481 ObjFunc
	var_160_int = 3; // 0x1483 PushI
	SendWorldWndMessage(var_160_int, var_159_object); // 0x1484 Func
	return 2; // 0x1486 Return
}


func_5759(var_122_bool, var_123_object, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0; // 0x167f PushV
	var_131_object = Obj(); // 0x1680 PushV
	func_5746(var_131_object); // 0x1681 NEW_2
	var_128_object = var_131_object; // 0x1682 Mov
	Find(var_124_int, var_129_object); // 0x1684 ObjFunc
	var_136_bool = var_129_object == 0; // 0x1686 Not
	if(var_136_bool == 0) goto Label_5774; // 0x1687 JumpB
	var_137_string = "Can't find diary parent with id: "; // 0x1688 PushS
	var_138_int = var_137_string + var_124_int; // 0x1689 Add
	Trace(var_138_int); // 0x168a Func
	var_122_bool = 0; // 0x168c MovB
	return 6; // 0x168d Return
	
Label_5774:
	AddChild(var_123_object); // 0x168e ObjFunc
	var_139_int = 7; // 0x1690 PushI
	SendWorldWndMessage(var_139_int); // 0x1691 Func
	GetCategory(var_130_int); // 0x1693 ObjFunc
	SetDiarySection(var_130_int); // 0x1695 Func
	var_122_bool = 0; // 0x1697 MovB
	return 6; // 0x1698 Return
}


func_4740()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x1284 PushV
	WaitForAnimEnd(); // 0x1285 Func
	var_85_bool = 0; // 0x1287 PushV
	func_4850(var_85_bool); // 0x1288 NEW_2
	var_86_bool = var_85_bool == 0; // 0x128a Not
	if(var_86_bool == 0) goto Label_4749; // 0x128b JumpB
	return 12; // 0x128c Return
	
Label_4749:
	var_87_int = 0; // 0x128d PushV
	func_5334(var_87_int); // 0x128e NEW_2
	var_79_int = var_87_int; // 0x128f Mov
	var_80_int = 0; // 0x1291 MovI
	
Label_4754:
	var_100_bool = 0; // 0x1292 PushV
	var_100_bool = 0; // 0x1293 MovB
	var_101_int = 5; // 0x1294 PushI
	var_102_bool = var_80_int < var_101_int; // 0x1295 LT
	if(var_102_bool == 0) goto Label_4764; // 0x1296 JumpB
	var_103_bool = 0; // 0x1297 PushV
	func_4850(var_103_bool); // 0x1298 NEW_2
	if(var_103_bool == 0) goto Label_4764; // 0x129a JumpB
	var_100_bool = 1; // 0x129b MovB
	
Label_4764:
	if(var_100_bool == 0) goto Label_4806; // 0x129c JumpB
	var_104_bool = var_79_int == 0; // 0x129d Not
	if(var_104_bool == 0) goto Label_4774; // 0x129e JumpB
	var_105_int = 3; // 0x129f PushI
	Sleep(var_105_int, var_81_bool); // 0x12a0 Func
	var_106_bool = var_81_bool == 0; // 0x12a2 Not
	if(var_106_bool == 0) goto Label_4773; // 0x12a3 JumpB
	goto Label_4806; // 0x12a4 Jump
	
Label_4806:
	ResetAAS(); // 0x12c6 Func
	return 12; // 0x12c8 Return
	
Label_4773:
	goto Label_4795; // 0x12a5 Jump
	
Label_4795:
	var_107_bool = 0; // 0x12bb PushV
	func_4809(var_107_bool); // 0x12bc NEW_2
	var_108_bool = var_107_bool == 0; // 0x12be Not
	if(var_108_bool == 0) goto Label_4801; // 0x12bf JumpB
	goto Label_4806; // 0x12c0 Jump
	
Label_4801:
	ResetAAS(); // 0x12c1 Func
	var_109_int = 1; // 0x12c3 PushI
	var_80_int = var_80_int + var_109_int; // 0x12c4 Add2
	goto Label_4754; // 0x12c5 Jump
	
Label_4774:
	irand(var_82_int, var_79_int); // 0x12a6 Func
	var_110_int = 5; // 0x12a8 PushI
	irand(var_83_int, var_110_int); // 0x12a9 Func
	var_111_int = 0; // 0x12ab PushI
	var_112_bool = var_83_int != var_111_int; // 0x12ac Neq
	if(var_112_bool == 0) goto Label_4783; // 0x12ad JumpB
	var_82_int = 0; // 0x12ae MovI
	
Label_4783:
	var_113_string = "all"; // 0x12af PushS
	var_114_string = ""; var_115_int = 0; // 0x12b0 PushV
	var_115_int = var_82_int; // 0x12b1 Mov
	func_5327(var_114_string, var_115_int); // 0x12b2 NEW_2
	PlayAnimation(var_113_string, var_114_string); // 0x12b4 Func
	WaitForAnimEnd(var_84_bool); // 0x12b6 Func
	var_116_bool = var_84_bool == 0; // 0x12b8 Not
	if(var_116_bool == 0) goto Label_4795; // 0x12b9 JumpB
	goto Label_4806; // 0x12ba Jump
}


func_5256(var_143_object, var_144_int)
{
	var_145_int = 0; var_146_int = 0; // 0x1488 PushV
	var_147_object = Obj(); var_148_string = ""; var_149_int = 0; // 0x1489 PushV
	var_147_object = var_143_object; // 0x148a Mov
	var_148_string = "money"; // 0x148b MovS
	var_149_int = var_144_int; // 0x148c Mov
	func_4824(var_148_string, var_149_int); // 0x148d NEW_2
	var_153_int = 0; // 0x148f PushI
	var_154_bool = var_144_int > var_153_int; // 0x1490 GT
	if(var_154_bool == 0) goto Label_5274; // 0x1491 JumpB
	var_155_string = "Money"; // 0x1492 PushS
	GetInvItemByName(var_146_int, var_155_string); // 0x1493 Func
	var_156_int = 0; var_157_int = 0; // 0x1495 PushV
	var_156_int = var_146_int; // 0x1496 Mov
	var_157_int = var_144_int; // 0x1497 Mov
	func_5244(var_156_int, var_157_int); // 0x1498 NEW_2
	
Label_5274:
	return 2; // 0x149a Return
}


func_1162(var_2_object, var_585_string)
{
	var_586_bool = 0; // 0x48b PushV
	func_5359(var_586_bool); // 0x48c NEW_2
	var_587_bool = var_586_bool == 0; // 0x48e Not
	if(var_587_bool == 0) goto Label_1169; // 0x48f JumpB
	return 0; // 0x490 Return
	
Label_1169:
	var_588_bool = var_585_string == var_2_object; // 0x491 Eq
	if(var_588_bool == 0) goto Label_1172; // 0x492 JumpB
	return 0; // 0x493 Return
	
Label_1172:
	var_589_string = ""; var_590_bool = 0; // 0x494 PushV
	var_589_string = var_585_string; // 0x495 Mov
	var_591_string = ""; // 0x496 PushS
	var_592_bool = var_585_string == var_591_string; // 0x497 Eq
	if(var_592_bool == 0) goto Label_1179; // 0x498 JumpB
	var_590_bool = 0; // 0x499 MovB
	goto Label_1180; // 0x49a Jump
	
Label_1180:
	func_5153(var_589_string, var_590_bool); // 0x49c NEW_2
	var_2_object = var_585_string; // 0x49e TMov
	return 0; // 0x49f Return
	
Label_1179:
	var_590_bool = 1; // 0x49b MovB
}


func_5626(var_867_bool)
{
	var_869_int = 0; var_870_string = ""; // 0x15fb PushV
	var_870_string = "d5q01"; // 0x15fc MovS
	func_5239(var_869_int, var_870_string); // 0x15fd NEW_2
	var_871_int = 6; // 0x15ff PushI
	var_872_bool = var_869_int == var_871_int; // 0x1600 Eq
	if(var_872_bool == 0) goto Label_5636; // 0x1601 JumpB
	var_867_bool = 1; // 0x1602 MovB
	return 0; // 0x1603 Return
	
Label_5636:
	var_867_bool = 0; // 0x1604 MovB
	return 0; // 0x1605 Return
}


func_2708(var_2_object, var_841_string)
{
	var_842_bool = 0; // 0xa95 PushV
	func_5359(var_842_bool); // 0xa96 NEW_2
	var_843_bool = var_842_bool == 0; // 0xa98 Not
	if(var_843_bool == 0) goto Label_2715; // 0xa99 JumpB
	return 0; // 0xa9a Return
	
Label_2715:
	var_844_bool = var_841_string == var_2_object; // 0xa9b Eq
	if(var_844_bool == 0) goto Label_2718; // 0xa9c JumpB
	return 0; // 0xa9d Return
	
Label_2718:
	var_845_string = ""; var_846_bool = 0; // 0xa9e PushV
	var_845_string = var_841_string; // 0xa9f Mov
	var_847_string = ""; // 0xaa0 PushS
	var_848_bool = var_841_string == var_847_string; // 0xaa1 Eq
	if(var_848_bool == 0) goto Label_2725; // 0xaa2 JumpB
	var_846_bool = 0; // 0xaa3 MovB
	goto Label_2726; // 0xaa4 Jump
	
Label_2726:
	func_5153(var_845_string, var_846_bool); // 0xaa6 NEW_2
	var_2_object = var_841_string; // 0xaa8 TMov
	return 0; // 0xaa9 Return
	
Label_2725:
	var_846_bool = 1; // 0xaa5 MovB
}


func_1689(var_2_object, var_739_string)
{
	var_740_bool = 0; // 0x69a PushV
	func_5359(var_740_bool); // 0x69b NEW_2
	var_741_bool = var_740_bool == 0; // 0x69d Not
	if(var_741_bool == 0) goto Label_1696; // 0x69e JumpB
	return 0; // 0x69f Return
	
Label_1696:
	var_742_bool = var_739_string == var_2_object; // 0x6a0 Eq
	if(var_742_bool == 0) goto Label_1699; // 0x6a1 JumpB
	return 0; // 0x6a2 Return
	
Label_1699:
	var_743_string = ""; var_744_bool = 0; // 0x6a3 PushV
	var_743_string = var_739_string; // 0x6a4 Mov
	var_745_string = ""; // 0x6a5 PushS
	var_746_bool = var_739_string == var_745_string; // 0x6a6 Eq
	if(var_746_bool == 0) goto Label_1706; // 0x6a7 JumpB
	var_744_bool = 0; // 0x6a8 MovB
	goto Label_1707; // 0x6a9 Jump
	
Label_1707:
	func_5153(var_743_string, var_744_bool); // 0x6ab NEW_2
	var_2_object = var_739_string; // 0x6ad TMov
	return 0; // 0x6ae Return
	
Label_1706:
	var_744_bool = 1; // 0x6aa MovB
}


func_5275(var_117_object, var_118_int)
{
	var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0; // 0x149b PushV
	GetItemID(var_122_int); // 0x149c ObjFunc
	var_125_string = "Category"; // 0x149e PushS
	GetInvItemProperty(var_123_int, var_122_int, var_125_string); // 0x149f Func
	AddItem(var_124_bool, var_117_object, var_123_int, var_118_int); // 0x14a1 ObjFunc
	var_126_bool = var_124_bool == 0; // 0x14a3 Not
	if(var_126_bool == 0) goto Label_5288; // 0x14a4 JumpB
	DropItems(var_117_object, var_118_int); // 0x14a5 ObjFunc
	goto Label_5293; // 0x14a7 Jump
	
Label_5293:
	return 6; // 0x14ad Return
	
Label_5288:
	var_127_int = 0; var_128_int = 0; // 0x14a8 PushV
	var_127_int = var_122_int; // 0x14a9 Mov
	var_128_int = var_118_int; // 0x14aa Mov
	func_5244(var_127_int, var_128_int); // 0x14ab NEW_2
}


func_5787(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); // 0x169b PushV
	GetMainOutdoorScene(var_86_object); // 0x169c Func
	var_88_bool = var_86_object == 0; // 0x169e NullEq
	if(var_88_bool == 0) goto Label_5798; // 0x169f JumpB
	var_89_string = "Can't find main outdoor scene"; // 0x16a0 PushS
	Trace(var_89_string); // 0x16a1 Func
	var_87_object = 0; // 0x16a3 SetNull
	var_83_object = var_87_object; // 0x16a4 Mov
	return 4; // 0x16a5 Return
	
Label_5798:
	GetMap(var_87_object); // 0x16a6 ObjFunc
	var_83_object = var_87_object; // 0x16a8 Mov
	return 4; // 0x16a9 Return
}


func_4261(var_2_object, var_1136_string)
{
	var_1137_bool = 0; // 0x10a6 PushV
	func_5359(var_1137_bool); // 0x10a7 NEW_2
	var_1138_bool = var_1137_bool == 0; // 0x10a9 Not
	if(var_1138_bool == 0) goto Label_4268; // 0x10aa JumpB
	return 0; // 0x10ab Return
	
Label_4268:
	var_1139_bool = var_1136_string == var_2_object; // 0x10ac Eq
	if(var_1139_bool == 0) goto Label_4271; // 0x10ad JumpB
	return 0; // 0x10ae Return
	
Label_4271:
	var_1140_string = ""; var_1141_bool = 0; // 0x10af PushV
	var_1140_string = var_1136_string; // 0x10b0 Mov
	var_1142_string = ""; // 0x10b1 PushS
	var_1143_bool = var_1136_string == var_1142_string; // 0x10b2 Eq
	if(var_1143_bool == 0) goto Label_4278; // 0x10b3 JumpB
	var_1141_bool = 0; // 0x10b4 MovB
	goto Label_4279; // 0x10b5 Jump
	
Label_4279:
	func_5153(var_1140_string, var_1141_bool); // 0x10b7 NEW_2
	var_2_object = var_1136_string; // 0x10b9 TMov
	return 0; // 0x10ba Return
	
Label_4278:
	var_1141_bool = 1; // 0x10b6 MovB
}


func_2217(var_0_bool, var_634_int, var_635_object)
{
	var_637_object = Obj(); var_638_bool = 0; var_639_int = 0; var_640_bool = 0; var_641_object = Obj(); var_642_bool = 0; var_643_int = 0; var_644_bool = 0; // 0x8a9 PushV
	var_0_bool = var_635_object; // 0x8aa TMov
	var_645_bool = 0; var_646_object = Obj(); var_647_float = 0; // 0x8ab PushV
	var_646_object = var_635_object; // 0x8ac Mov
	var_647_float = 70.0; // 0x8ad MovF
	func_4855(var_646_object, var_647_float); // 0x8ae NEW_2
	var_648_bool = var_645_bool == 0; // 0x8b0 Not
	if(var_648_bool == 0) goto Label_2228; // 0x8b1 JumpB
	var_634_int = -2; // 0x8b2 MovI
	return 8; // 0x8b3 Return
	
Label_2228:
	CreateDialog(var_641_object); // 0x8b4 Func
	var_649_int = 0; // 0x8b6 PushV
	func_5353(var_649_int); // 0x8b7 NEW_2
	SetNPCName(var_649_int); // 0x8b9 ObjFunc
	var_650_int = 0; // 0x8bb PushV
	func_5351(var_650_int); // 0x8bc NEW_2
	SetNPCDescription(var_650_int); // 0x8be ObjFunc
	var_651_string = ""; // 0x8c0 PushV
	func_5355(var_651_string); // 0x8c1 NEW_2
	SetPhoto(var_651_string); // 0x8c3 ObjFunc
	var_652_string = ""; // 0x8c5 PushV
	func_5357(var_652_string); // 0x8c6 NEW_2
	SetPhoto2(var_652_string); // 0x8c8 ObjFunc
	var_653_int = 0; // 0x8ca PushV
	func_5978(var_653_int); // 0x8cb NEW_2
	SetPlayerName(var_653_int); // 0x8cd ObjFunc
	var_643_int = -1; // 0x8cf MovI
	IsOverrideActive(var_642_bool); // 0x8d0 Func
	var_654_bool = var_642_bool; // 0x8d2 Push
	if(var_654_bool == 0) goto Label_2262; // 0x8d3 JumpB
	var_634_int = -2; // 0x8d4 MovI
	return 8; // 0x8d5 Return
	
Label_2262:
	DoDialog(var_641_object); // 0x8d6 Func
	var_655_bool = 0; var_656_object = Obj(); // 0x8d8 PushV
	var_657_object = Obj(); // 0x8d9 PushV
	func_5218(var_657_object); // 0x8da NEW_2
	var_656_object = var_657_object; // 0x8db Mov
	func_4940(var_655_bool, var_656_object); // 0x8dd NEW_2
	var_658_object = Obj(); var_659_object = Obj(); // 0x8df PushV
	var_658_object = var_635_object; // 0x8e0 Mov
	var_659_object = var_641_object; // 0x8e1 Mov
	TaskCall(12); // 0x8e2 TaskCall
	func_2298(var_660_object, var_661_object, var_662_string, var_663_bool, var_658_object, var_659_object); // 0x8e3 NEW_2
	TaskReturn(); // 0x8e4 TaskReturn
	IsDialogEnd(var_644_bool); // 0x8e6 ObjFunc
	
Label_2280:
	var_688_bool = var_644_bool == 0; // 0x8e8 Not
	if(var_688_bool == 0) goto Label_2287; // 0x8e9 JumpB
	sync(); // 0x8ea Func
	IsDialogEnd(var_644_bool); // 0x8ec ObjFunc
	goto Label_2280; // 0x8ee Jump
	
Label_2287:
	var_689_object = Obj(); // 0x8ef PushV
	var_689_object = var_635_object; // 0x8f0 Mov
	func_4923(); // 0x8f1 NEW_2
	StopDialog(var_641_object); // 0x8f3 Func
	GetReturnValue(var_643_int); // 0x8f5 ObjFunc
	var_634_int = var_643_int; // 0x8f7 Mov
	return 8; // 0x8f8 Return
}


func_171(var_2_object, var_476_string)
{
	var_477_bool = 0; // 0xac PushV
	func_5359(var_477_bool); // 0xad NEW_2
	var_478_bool = var_477_bool == 0; // 0xaf Not
	if(var_478_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_479_bool = var_476_string == var_2_object; // 0xb2 Eq
	if(var_479_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_480_string = ""; var_481_bool = 0; // 0xb5 PushV
	var_480_string = var_476_string; // 0xb6 Mov
	var_482_string = ""; // 0xb7 PushS
	var_483_bool = var_476_string == var_482_string; // 0xb8 Eq
	if(var_483_bool == 0) goto Label_188; // 0xb9 JumpB
	var_481_bool = 0; // 0xba MovB
	goto Label_189; // 0xbb Jump
	
Label_189:
	func_5153(var_480_string, var_481_bool); // 0xbd NEW_2
	var_2_object = var_476_string; // 0xbf TMov
	return 0; // 0xc0 Return
	
Label_188:
	var_481_bool = 1; // 0xbc MovB
}


func_5804()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x16ac PushV
	var_102_int = 0; // 0x16ad PushI
	ClearSubContainer(var_102_int); // 0x16ae Func
	var_103_int = 0; // 0x16b0 PushV
	func_5312(var_103_int); // 0x16b1 NEW_2
	var_100_int = var_103_int; // 0x16b2 Mov
	var_104_int = 0; var_105_string = ""; // 0x16b4 PushV
	var_105_string = "Rifle"; // 0x16b5 MovS
	func_5973(var_104_int, var_105_string); // 0x16b6 NEW_2
	var_108_int = 0; // 0x16b8 PushI
	var_109_int = 1; // 0x16b9 PushI
	AddItem(var_98_bool, var_104_int, var_108_int, var_109_int); // 0x16ba Func
	var_110_int = 0; var_111_string = ""; // 0x16bc PushV
	var_111_string = "Revolver"; // 0x16bd MovS
	func_5973(var_110_int, var_111_string); // 0x16be NEW_2
	var_112_int = 0; // 0x16c0 PushI
	var_113_int = 1; // 0x16c1 PushI
	AddItem(var_98_bool, var_110_int, var_112_int, var_113_int); // 0x16c2 Func
	var_114_int = 0; var_115_string = ""; // 0x16c4 PushV
	var_115_string = "Knife"; // 0x16c5 MovS
	func_5973(var_114_int, var_115_string); // 0x16c6 NEW_2
	var_116_int = 0; // 0x16c8 PushI
	var_117_int = 1; // 0x16c9 PushI
	AddItem(var_98_bool, var_114_int, var_116_int, var_117_int); // 0x16ca Func
	var_118_int = 10; // 0x16cc PushI
	var_119_bool = var_100_int != var_118_int; // 0x16cd Neq
	if(var_119_bool == 0) goto Label_5848; // 0x16ce JumpB
	var_120_int = 0; var_121_string = ""; // 0x16cf PushV
	var_121_string = "tvirin"; // 0x16d0 MovS
	func_5973(var_120_int, var_121_string); // 0x16d1 NEW_2
	var_122_int = 0; // 0x16d3 PushI
	var_123_int = 1; // 0x16d4 PushI
	AddItem(var_98_bool, var_120_int, var_122_int, var_123_int); // 0x16d5 Func
	goto Label_5856; // 0x16d7 Jump
	
Label_5856:
	var_124_int = 0; var_125_string = ""; // 0x16e0 PushV
	var_125_string = "lockpick"; // 0x16e1 MovS
	func_5973(var_124_int, var_125_string); // 0x16e2 NEW_2
	var_126_int = 0; // 0x16e4 PushI
	var_127_int = 3; // 0x16e5 PushI
	AddItem(var_98_bool, var_124_int, var_126_int, var_127_int); // 0x16e6 Func
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x16e8 PushV
	var_128_string = "Scalpel"; // 0x16e9 MovS
	var_129_int = 1; // 0x16ea MovI
	var_130_int = 2; // 0x16eb MovI
	func_5190(var_128_string, var_129_int, var_130_int); // 0x16ec NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x16ee PushV
	var_139_string = "revolver_ammo"; // 0x16ef MovS
	var_140_int = 1; // 0x16f0 MovI
	var_141_int = 1; // 0x16f1 MovI
	var_142_int = 5; // 0x16f2 MovI
	var_143_int = 10; // 0x16f3 MovI
	func_5201(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int); // 0x16f4 NEW_2
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x16f6 PushV
	var_156_string = "rifle_ammo"; // 0x16f7 MovS
	var_157_int = 1; // 0x16f8 MovI
	var_158_int = 1; // 0x16f9 MovI
	var_159_int = 5; // 0x16fa MovI
	var_160_int = 20; // 0x16fb MovI
	func_5201(var_156_string, var_157_int, var_158_int, var_159_int, var_160_int); // 0x16fc NEW_2
	var_161_int = 100; // 0x16fe PushI
	irand(var_99_int, var_161_int); // 0x16ff Func
	var_162_int = 0; // 0x1701 PushI
	var_163_bool = var_99_int != var_162_int; // 0x1702 Neq
	if(var_163_bool == 0) goto Label_5899; // 0x1703 JumpB
	var_164_int = 0; var_165_string = ""; // 0x1704 PushV
	var_165_string = "kerosene"; // 0x1705 MovS
	func_5973(var_164_int, var_165_string); // 0x1706 NEW_2
	var_166_int = 0; // 0x1708 PushI
	AddItem(var_98_bool, var_164_int, var_166_int, var_99_int); // 0x1709 Func
	
Label_5899:
	var_167_int = 3; // 0x170b PushI
	var_168_bool = var_100_int >= var_167_int; // 0x170c GE
	if(var_168_bool == 0) goto Label_5918; // 0x170d JumpB
	var_169_int = 0; var_170_string = ""; // 0x170e PushV
	var_170_string = "halfboot_repel"; // 0x170f MovS
	func_5973(var_169_int, var_170_string); // 0x1710 NEW_2
	var_171_int = 0; // 0x1712 PushI
	var_172_int = 1; // 0x1713 PushI
	AddItem(var_98_bool, var_169_int, var_171_int, var_172_int); // 0x1714 Func
	var_173_int = 0; var_174_string = ""; // 0x1716 PushV
	var_174_string = "boot_repel"; // 0x1717 MovS
	func_5973(var_173_int, var_174_string); // 0x1718 NEW_2
	var_175_int = 0; // 0x171a PushI
	var_176_int = 1; // 0x171b PushI
	AddItem(var_98_bool, var_173_int, var_175_int, var_176_int); // 0x171c Func
	
Label_5918:
	var_177_int = 9; // 0x171e PushI
	var_178_bool = var_100_int >= var_177_int; // 0x171f GE
	if(var_178_bool == 0) goto Label_5945; // 0x1720 JumpB
	var_179_int = 0; var_180_string = ""; // 0x1721 PushV
	var_180_string = "boot_army"; // 0x1722 MovS
	func_5973(var_179_int, var_180_string); // 0x1723 NEW_2
	var_181_int = 0; // 0x1725 PushI
	var_182_int = 1; // 0x1726 PushI
	AddItem(var_98_bool, var_179_int, var_181_int, var_182_int); // 0x1727 Func
	var_183_int = 0; var_184_string = ""; // 0x1729 PushV
	var_184_string = "balahon"; // 0x172a MovS
	func_5973(var_183_int, var_184_string); // 0x172b NEW_2
	var_185_int = 0; // 0x172d PushI
	var_186_int = 1; // 0x172e PushI
	AddItem(var_98_bool, var_183_int, var_185_int, var_186_int); // 0x172f Func
	var_187_int = 0; var_188_string = ""; // 0x1731 PushV
	var_188_string = "glove_army"; // 0x1732 MovS
	func_5973(var_187_int, var_188_string); // 0x1733 NEW_2
	var_189_int = 0; // 0x1735 PushI
	var_190_int = 1; // 0x1736 PushI
	AddItem(var_98_bool, var_187_int, var_189_int, var_190_int); // 0x1737 Func
	
Label_5945:
	var_191_int = 0; // 0x1739 PushV
	func_5995(var_191_int); // 0x173a NEW_2
	var_101_int = var_191_int; // 0x173b Mov
	var_195_int = 0; // 0x173d PushI
	var_196_bool = var_101_int == var_195_int; // 0x173e Eq
	if(var_196_bool == 0) goto Label_5961; // 0x173f JumpB
	var_197_int = 0; var_198_string = ""; // 0x1740 PushV
	var_198_string = "Gun_danko"; // 0x1741 MovS
	func_5973(var_197_int, var_198_string); // 0x1742 NEW_2
	var_199_int = 0; // 0x1744 PushI
	var_200_int = 1; // 0x1745 PushI
	AddItem(var_98_bool, var_197_int, var_199_int, var_200_int); // 0x1746 Func
	goto Label_5972; // 0x1748 Jump
	
Label_5972:
	return 8; // 0x1754 Return
	
Label_5961:
	var_201_int = 2; // 0x1749 PushI
	var_202_bool = var_101_int == var_201_int; // 0x174a Eq
	if(var_202_bool == 0) goto Label_5972; // 0x174b JumpB
	var_203_int = 0; var_204_string = ""; // 0x174c PushV
	var_204_string = "Gun"; // 0x174d MovS
	func_5973(var_203_int, var_204_string); // 0x174e NEW_2
	var_205_int = 0; // 0x1750 PushI
	var_206_int = 1; // 0x1751 PushI
	AddItem(var_98_bool, var_203_int, var_205_int, var_206_int); // 0x1752 Func
	
Label_5848:
	var_207_int = 0; var_208_string = ""; // 0x16d8 PushV
	var_208_string = "tvirin"; // 0x16d9 MovS
	func_5973(var_207_int, var_208_string); // 0x16da NEW_2
	var_209_int = 0; // 0x16dc PushI
	var_210_int = 4; // 0x16dd PushI
	AddItem(var_98_bool, var_207_int, var_209_int, var_210_int); // 0x16de Func
}


func_684(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0; // 0x2ac PushV
	var_0_bool = var_216_object; // 0x2ad TMov
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0x2ae PushV
	var_227_object = var_216_object; // 0x2af Mov
	var_228_float = 70.0; // 0x2b0 MovF
	func_4855(var_227_object, var_228_float); // 0x2b1 NEW_2
	var_272_bool = var_226_bool == 0; // 0x2b3 Not
	if(var_272_bool == 0) goto Label_695; // 0x2b4 JumpB
	var_215_int = -2; // 0x2b5 MovI
	return 8; // 0x2b6 Return
	
Label_695:
	CreateDialog(var_222_object); // 0x2b7 Func
	var_273_int = 0; // 0x2b9 PushV
	func_5353(var_273_int); // 0x2ba NEW_2
	SetNPCName(var_273_int); // 0x2bc ObjFunc
	var_274_int = 0; // 0x2be PushV
	func_5351(var_274_int); // 0x2bf NEW_2
	SetNPCDescription(var_274_int); // 0x2c1 ObjFunc
	var_275_string = ""; // 0x2c3 PushV
	func_5355(var_275_string); // 0x2c4 NEW_2
	SetPhoto(var_275_string); // 0x2c6 ObjFunc
	var_276_string = ""; // 0x2c8 PushV
	func_5357(var_276_string); // 0x2c9 NEW_2
	SetPhoto2(var_276_string); // 0x2cb ObjFunc
	var_277_int = 0; // 0x2cd PushV
	func_5978(var_277_int); // 0x2ce NEW_2
	SetPlayerName(var_277_int); // 0x2d0 ObjFunc
	var_224_int = -1; // 0x2d2 MovI
	IsOverrideActive(var_223_bool); // 0x2d3 Func
	var_285_bool = var_223_bool; // 0x2d5 Push
	if(var_285_bool == 0) goto Label_729; // 0x2d6 JumpB
	var_215_int = -2; // 0x2d7 MovI
	return 8; // 0x2d8 Return
	
Label_729:
	DoDialog(var_222_object); // 0x2d9 Func
	var_286_bool = 0; var_287_object = Obj(); // 0x2db PushV
	var_288_object = Obj(); // 0x2dc PushV
	func_5218(var_288_object); // 0x2dd NEW_2
	var_287_object = var_288_object; // 0x2de Mov
	func_4940(var_286_bool, var_287_object); // 0x2e0 NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x2e2 PushV
	var_376_object = var_216_object; // 0x2e3 Mov
	var_377_object = var_222_object; // 0x2e4 Mov
	TaskCall(6); // 0x2e5 TaskCall
	func_765(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x2e6 NEW_2
	TaskReturn(); // 0x2e7 TaskReturn
	IsDialogEnd(var_225_bool); // 0x2e9 ObjFunc
	
Label_747:
	var_432_bool = var_225_bool == 0; // 0x2eb Not
	if(var_432_bool == 0) goto Label_754; // 0x2ec JumpB
	sync(); // 0x2ed Func
	IsDialogEnd(var_225_bool); // 0x2ef ObjFunc
	goto Label_747; // 0x2f1 Jump
	
Label_754:
	var_433_object = Obj(); // 0x2f2 PushV
	var_433_object = var_216_object; // 0x2f3 Mov
	func_4923(); // 0x2f4 NEW_2
	StopDialog(var_222_object); // 0x2f6 Func
	GetReturnValue(var_224_int); // 0x2f8 ObjFunc
	var_215_int = var_224_int; // 0x2fa Mov
	return 8; // 0x2fb Return
}


func_5294(var_111_object, var_112_string, var_113_int)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x14ae PushV
	CreateInvItem(var_115_object); // 0x14af Func
	SetItemName(var_112_string); // 0x14b1 ObjFunc
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0; // 0x14b3 PushV
	var_116_object = var_111_object; // 0x14b4 Mov
	var_117_object = var_115_object; // 0x14b5 Mov
	var_118_int = var_113_int; // 0x14b6 Mov
	func_5275(var_117_object, var_118_int); // 0x14b7 NEW_2
	return 2; // 0x14b9 Return
}


func_5307(var_94_float)
{
	var_95_float = 0; var_96_float = 0; // 0x14bb PushV
	GetGameTime(var_96_float); // 0x14bc Func
	var_94_float = var_96_float; // 0x14be Mov
	return 2; // 0x14bf Return
}


func_5312(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0x14c0 PushV
	GetGameTime(var_89_float); // 0x14c1 Func
	var_90_int = 1; // 0x14c3 PushI
	var_91_int = 0; // 0x14c4 PushV
	var_92_int = 24; // 0x14c5 PushI
	var_91_int = var_89_float / var_89_float; // 0x14c6 Div2
	var_87_int = var_90_int + var_91_int; // 0x14c7 Add2
	return 2; // 0x14c8 Return
}


func_3781(var_0_bool, var_1_object, var_2_object, var_3_object, var_1068_object, var_1069_object)
{
	var_0_bool = var_1069_object; // 0xec6 TMov
	var_1_object = var_1068_object; // 0xec7 TMov
	var_3_object = 0; // 0xec8 TMovB
	var_1074_int = 1; // 0xec9 PushI
	if(var_1074_int == 0) goto Label_3809; // 0xeca JumpB
	var_1075_string = ""; // 0xecb PushV
	var_1075_string = "Sly"; // 0xecc MovS
	func_3839(var_1069_object, var_1075_string); // 0xecd NEW_2
	var_1083_int = 538735; // 0xecf PushI
	SetMessage(var_1083_int); // 0xed0 TObjFunc
	ClearReplies(); // 0xed2 TObjFunc
	var_1084_int = 538736; // 0xed4 PushI
	var_1085_int = -1; // 0xed5 PushI
	var_1086_int = 40647; // 0xed6 PushI
	AddReply(var_1084_int, var_1085_int, var_1086_int); // 0xed7 TObjFunc
	var_1087_int = 538754; // 0xed9 PushI
	var_1088_int = -1; // 0xeda PushI
	var_1089_int = 40666; // 0xedb PushI
	AddReply(var_1087_int, var_1088_int, var_1089_int); // 0xedc TObjFunc
	goto Label_3809; // 0xede Jump
	
Label_3809:
	var_1090_bool = 0; // 0xee1 PushV
	func_5359(var_1090_bool); // 0xee2 NEW_2
	if(var_1090_bool == 0) goto Label_3824; // 0xee4 JumpB
	
Label_3813:
	lshWaitForAnimEnd(); // 0xee5 Func
	var_1091_object = var_3_object; // 0xee7 PushT
	if(var_1091_object == 0) goto Label_3818; // 0xee8 JumpB
	goto Label_3823; // 0xee9 Jump
	
Label_3823:
	goto Label_3838; // 0xeef Jump
	
Label_3838:
	return 0; // 0xefe Return
	
Label_3818:
	var_1092_string = ""; // 0xeea PushV
	var_1092_string = var_2_object; // 0xeeb MovT
	func_5137(var_1092_string); // 0xeec NEW_2
	goto Label_3813; // 0xeee Jump
	
Label_3824:
	var_1093_string = "all"; // 0xef0 PushS
	var_1094_string = "idle"; // 0xef1 PushS
	PlayAnimation(var_1093_string, var_1094_string); // 0xef2 Func
	
Label_3828:
	WaitForAnimEnd(); // 0xef4 Func
	var_1095_object = var_3_object; // 0xef6 PushT
	if(var_1095_object == 0) goto Label_3833; // 0xef7 JumpB
	goto Label_3838; // 0xef8 Jump
	
Label_3833:
	var_1096_string = "all"; // 0xef9 PushS
	var_1097_string = "idle"; // 0xefa PushS
	PlayAnimation(var_1096_string, var_1097_string); // 0xefb Func
	goto Label_3828; // 0xefd Jump
}


func_4809(var_107_bool)
{
	var_107_bool = 1; // 0x12c9 MovB
	return 0; // 0x12ca Return
}


func_5321(var_441_bool, var_442_int)
{
	var_443_int = 0; // 0x14ca PushV
	func_5312(var_443_int); // 0x14cb NEW_2
	var_441_bool = var_443_int == var_442_int; // 0x14cd Eq2
	return 0; // 0x14ce Return
}


func_4811()
{
	StopAnimation(); // 0x12cb Func
	StopGroup0(); // 0x12cd Func
	return 0; // 0x12cf Return
}


func_3278(var_0_bool, var_922_int, var_923_object)
{
	var_925_object = Obj(); var_926_bool = 0; var_927_int = 0; var_928_bool = 0; var_929_object = Obj(); var_930_bool = 0; var_931_int = 0; var_932_bool = 0; // 0xcce PushV
	var_0_bool = var_923_object; // 0xccf TMov
	var_933_bool = 0; var_934_object = Obj(); var_935_float = 0; // 0xcd0 PushV
	var_934_object = var_923_object; // 0xcd1 Mov
	var_935_float = 70.0; // 0xcd2 MovF
	func_4855(var_934_object, var_935_float); // 0xcd3 NEW_2
	var_936_bool = var_933_bool == 0; // 0xcd5 Not
	if(var_936_bool == 0) goto Label_3289; // 0xcd6 JumpB
	var_922_int = -2; // 0xcd7 MovI
	return 8; // 0xcd8 Return
	
Label_3289:
	CreateDialog(var_929_object); // 0xcd9 Func
	var_937_int = 0; // 0xcdb PushV
	func_5353(var_937_int); // 0xcdc NEW_2
	SetNPCName(var_937_int); // 0xcde ObjFunc
	var_938_int = 0; // 0xce0 PushV
	func_5351(var_938_int); // 0xce1 NEW_2
	SetNPCDescription(var_938_int); // 0xce3 ObjFunc
	var_939_string = ""; // 0xce5 PushV
	func_5355(var_939_string); // 0xce6 NEW_2
	SetPhoto(var_939_string); // 0xce8 ObjFunc
	var_940_string = ""; // 0xcea PushV
	func_5357(var_940_string); // 0xceb NEW_2
	SetPhoto2(var_940_string); // 0xced ObjFunc
	var_941_int = 0; // 0xcef PushV
	func_5978(var_941_int); // 0xcf0 NEW_2
	SetPlayerName(var_941_int); // 0xcf2 ObjFunc
	var_931_int = -1; // 0xcf4 MovI
	IsOverrideActive(var_930_bool); // 0xcf5 Func
	var_942_bool = var_930_bool; // 0xcf7 Push
	if(var_942_bool == 0) goto Label_3323; // 0xcf8 JumpB
	var_922_int = -2; // 0xcf9 MovI
	return 8; // 0xcfa Return
	
Label_3323:
	DoDialog(var_929_object); // 0xcfb Func
	var_943_bool = 0; var_944_object = Obj(); // 0xcfd PushV
	var_945_object = Obj(); // 0xcfe PushV
	func_5218(var_945_object); // 0xcff NEW_2
	var_944_object = var_945_object; // 0xd00 Mov
	func_4940(var_943_bool, var_944_object); // 0xd02 NEW_2
	var_946_object = Obj(); var_947_object = Obj(); // 0xd04 PushV
	var_946_object = var_923_object; // 0xd05 Mov
	var_947_object = var_929_object; // 0xd06 Mov
	TaskCall(16); // 0xd07 TaskCall
	func_3359(var_948_object, var_949_object, var_950_string, var_951_bool, var_946_object, var_947_object); // 0xd08 NEW_2
	TaskReturn(); // 0xd09 TaskReturn
	IsDialogEnd(var_932_bool); // 0xd0b ObjFunc
	
Label_3341:
	var_976_bool = var_932_bool == 0; // 0xd0d Not
	if(var_976_bool == 0) goto Label_3348; // 0xd0e JumpB
	sync(); // 0xd0f Func
	IsDialogEnd(var_932_bool); // 0xd11 ObjFunc
	goto Label_3341; // 0xd13 Jump
	
Label_3348:
	var_977_object = Obj(); // 0xd14 PushV
	var_977_object = var_923_object; // 0xd15 Mov
	func_4923(); // 0xd16 NEW_2
	StopDialog(var_929_object); // 0xd18 Func
	GetReturnValue(var_931_int); // 0xd1a ObjFunc
	var_922_int = var_931_int; // 0xd1c Mov
	return 8; // 0xd1d Return
}


func_5327(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x14cf PushV
	var_96_string = "idle"; // 0x14d0 MovS
	var_97_int = var_94_int; // 0x14d1 Push
	if(var_97_int == 0) goto Label_5332; // 0x14d2 JumpB
	var_96_string = var_96_string + var_94_int; // 0x14d3 Add2
	
Label_5332:
	var_93_string = var_96_string; // 0x14d4 Mov
	return 2; // 0x14d5 Return
}


func_4816(var_82_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x12d0 PushV
	GetPosition(var_87_cvector); // 0x12d1 Func
	GetPosition(var_88_cvector); // 0x12d3 ObjFunc
	var_89_cvector = var_88_cvector - var_87_cvector; // 0x12d5 Sub2
	var_82_float = var_89_cvector | var_89_cvector; // 0x12d6 Or2
	return 6; // 0x12d7 Return
}


func_5334(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x14d6 PushV
	var_90_int = 0; // 0x14d7 MovI
	
Label_5336:
	var_92_string = "all"; // 0x14d8 PushS
	var_93_string = ""; var_94_int = 0; // 0x14d9 PushV
	var_94_int = var_90_int; // 0x14da Mov
	func_5327(var_93_string, var_94_int); // 0x14db NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x14dd Func
	var_98_bool = var_91_bool == 0; // 0x14df Not
	if(var_98_bool == 0) goto Label_5346; // 0x14e0 JumpB
	goto Label_5349; // 0x14e1 Jump
	
Label_5349:
	var_87_int = var_90_int; // 0x14e5 Mov
	return 4; // 0x14e6 Return
	
Label_5346:
	var_99_int = 1; // 0x14e2 PushI
	var_90_int = var_90_int + var_99_int; // 0x14e3 Add2
	goto Label_5336; // 0x14e4 Jump
}


func_4824(var_148_string, var_149_int)
{
	var_150_int = 0; var_151_int = 0; // 0x12d8 PushV
	GetProperty(var_148_string, var_151_int); // 0x12d9 ObjFunc
	var_152_int = var_151_int + var_149_int; // 0x12db Add
	SetProperty(var_148_string, var_152_int); // 0x12dc ObjFunc
	return 2; // 0x12de Return
}


func_4831(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; // 0x12df PushV
	GetPosition(var_80_cvector); // 0x12e0 Func
	var_81_cvector = var_76_cvector - var_80_cvector; // 0x12e2 Sub2
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x12e3 PushE
	var_84_float = GetByIndex(var_81_cvector, 2); // 0x12e4 PushE
	Rotate(var_83_float, var_84_float, var_82_bool); // 0x12e5 Func
	var_75_bool = var_82_bool; // 0x12e7 Mov
	return 6; // 0x12e8 Return
}


func_5351(var_274_int)
{
	var_274_int = 515535; // 0x14e7 MovI
	return 0; // 0x14e8 Return
}


func_5353(var_273_int)
{
	var_273_int = 502860; // 0x14e9 MovI
	return 0; // 0x14ea Return
}


func_4841(var_71_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x12e9 PushV
	GetPosition(var_74_cvector); // 0x12ea ObjFunc
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); // 0x12ec PushV
	var_76_cvector = var_74_cvector; // 0x12ed Mov
	func_4831(var_75_bool, var_76_cvector); // 0x12ee NEW_2
	var_71_bool = var_75_bool; // 0x12ef Mov
	return 2; // 0x12f1 Return
}


func_5355(var_275_string)
{
	var_275_string = "ui/NPC_Grif.png"; // 0x14eb MovS
	return 0; // 0x14ec Return
}


func_5357(var_276_string)
{
	var_276_string = "ui/NPC_Grif_b.png"; // 0x14ed MovS
	return 0; // 0x14ee Return
}


func_4333(var_0_bool, var_1227_int, var_1228_object)
{
	var_1230_object = Obj(); var_1231_bool = 0; var_1232_int = 0; var_1233_bool = 0; var_1234_object = Obj(); var_1235_bool = 0; var_1236_int = 0; var_1237_bool = 0; // 0x10ed PushV
	var_0_bool = var_1228_object; // 0x10ee TMov
	var_1238_bool = 0; var_1239_object = Obj(); var_1240_float = 0; // 0x10ef PushV
	var_1239_object = var_1228_object; // 0x10f0 Mov
	var_1240_float = 70.0; // 0x10f1 MovF
	func_4855(var_1239_object, var_1240_float); // 0x10f2 NEW_2
	var_1241_bool = var_1238_bool == 0; // 0x10f4 Not
	if(var_1241_bool == 0) goto Label_4344; // 0x10f5 JumpB
	var_1227_int = -2; // 0x10f6 MovI
	return 8; // 0x10f7 Return
	
Label_4344:
	CreateDialog(var_1234_object); // 0x10f8 Func
	var_1242_int = 0; // 0x10fa PushV
	func_5353(var_1242_int); // 0x10fb NEW_2
	SetNPCName(var_1242_int); // 0x10fd ObjFunc
	var_1243_int = 0; // 0x10ff PushV
	func_5351(var_1243_int); // 0x1100 NEW_2
	SetNPCDescription(var_1243_int); // 0x1102 ObjFunc
	var_1244_string = ""; // 0x1104 PushV
	func_5355(var_1244_string); // 0x1105 NEW_2
	SetPhoto(var_1244_string); // 0x1107 ObjFunc
	var_1245_string = ""; // 0x1109 PushV
	func_5357(var_1245_string); // 0x110a NEW_2
	SetPhoto2(var_1245_string); // 0x110c ObjFunc
	var_1246_int = 0; // 0x110e PushV
	func_5978(var_1246_int); // 0x110f NEW_2
	SetPlayerName(var_1246_int); // 0x1111 ObjFunc
	var_1236_int = -1; // 0x1113 MovI
	IsOverrideActive(var_1235_bool); // 0x1114 Func
	var_1247_bool = var_1235_bool; // 0x1116 Push
	if(var_1247_bool == 0) goto Label_4378; // 0x1117 JumpB
	var_1227_int = -2; // 0x1118 MovI
	return 8; // 0x1119 Return
	
Label_4378:
	DoDialog(var_1234_object); // 0x111a Func
	var_1248_bool = 0; var_1249_object = Obj(); // 0x111c PushV
	var_1250_object = Obj(); // 0x111d PushV
	func_5218(var_1250_object); // 0x111e NEW_2
	var_1249_object = var_1250_object; // 0x111f Mov
	func_4940(var_1248_bool, var_1249_object); // 0x1121 NEW_2
	var_1251_object = Obj(); var_1252_object = Obj(); // 0x1123 PushV
	var_1251_object = var_1228_object; // 0x1124 Mov
	var_1252_object = var_1234_object; // 0x1125 Mov
	TaskCall(26); // 0x1126 TaskCall
	func_4414(var_1253_object, var_1254_object, var_1255_string, var_1256_bool, var_1251_object, var_1252_object); // 0x1127 NEW_2
	TaskReturn(); // 0x1128 TaskReturn
	IsDialogEnd(var_1237_bool); // 0x112a ObjFunc
	
Label_4396:
	var_1284_bool = var_1237_bool == 0; // 0x112c Not
	if(var_1284_bool == 0) goto Label_4403; // 0x112d JumpB
	sync(); // 0x112e Func
	IsDialogEnd(var_1237_bool); // 0x1130 ObjFunc
	goto Label_4396; // 0x1132 Jump
	
Label_4403:
	var_1285_object = Obj(); // 0x1133 PushV
	var_1285_object = var_1228_object; // 0x1134 Mov
	func_4923(); // 0x1135 NEW_2
	StopDialog(var_1234_object); // 0x1137 Func
	GetReturnValue(var_1236_int); // 0x1139 ObjFunc
	var_1227_int = var_1236_int; // 0x113b Mov
	return 8; // 0x113c Return
}


func_5359(var_268_bool)
{
	var_268_bool = 1; // 0x14ef MovB
	return 0; // 0x14f0 Return
}


func_5361(var_143_object)
{
	var_145_string = "money10000 is given"; // 0x14f2 PushS
	Trace(var_145_string); // 0x14f3 Func
	var_146_object = Obj(); var_147_int = 0; // 0x14f5 PushV
	var_146_object = var_143_object; // 0x14f6 Mov
	var_147_int = 10000; // 0x14f7 MovI
	func_5256(var_146_object, var_147_int); // 0x14f8 NEW_2
	return 0; // 0x14fa Return
}


func_4850(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0x12f2 PushV
	IsLoaded(var_71_bool); // 0x12f3 Func
	var_69_bool = var_71_bool; // 0x12f5 Mov
	return 2; // 0x12f6 Return
}


func_4855(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; // 0x12f7 PushV
	GetPosition(var_239_cvector); // 0x12f8 ObjFunc
	GetEyesHeight(var_238_float); // 0x12fa ObjFunc
	var_247_float = GetByIndex(var_239_cvector, 1); // 0x12fc PushE
	var_247_float = var_247_float + var_238_float; // 0x12fd Add2
	SetByIndex(var_239_cvector, 1) = var_247_float; // 0x12fe PopE
	GetPosition(var_240_cvector); // 0x12ff Func
	GetEyesHeight(var_238_float); // 0x1301 Func
	var_248_float = GetByIndex(var_240_cvector, 1); // 0x1303 PushE
	var_248_float = var_248_float + var_238_float; // 0x1304 Add2
	SetByIndex(var_240_cvector, 1) = var_248_float; // 0x1305 PopE
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x1306 Sub2
	var_249_float = GetByIndex(var_241_cvector, 1); // 0x1307 PushE
	var_249_float = 0; // 0x1308 MovI
	SetByIndex(var_241_cvector, 1) = var_249_float; // 0x1309 PopE
	var_250_int = var_241_cvector | var_241_cvector; // 0x130a Or
	var_251_float = sqrt(var_250_int); // 0x130b Sqrt
	var_241_cvector = var_241_cvector / var_241_cvector; // 0x130c Div2
	var_242_cvector = -var_241_cvector; // 0x130d Neg2
	var_252_float = var_241_cvector * var_228_float; // 0x130e Mult
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); // 0x130f PushV
	var_255_cvector = CVector(0.0, 1.0, 0.0); // 0x1310 PushVec
	var_254_cvector = var_242_cvector ^ var_255_cvector; // 0x1311 Xor2
	func_5224(var_253_cvector, var_254_cvector); // 0x1312 NEW_2
	var_261_int = 25; // 0x1314 PushI
	var_262_float = var_253_cvector * var_261_int; // 0x1315 Mult
	var_263_int = var_252_float + var_262_float; // 0x1316 Add
	var_264_cvector = CVector(0.0, 10.0, 0.0); // 0x1317 PushVec
	var_243_cvector = var_263_int - var_264_cvector; // 0x1318 Sub2
	var_244_cvector = var_240_cvector + var_243_cvector; // 0x1319 Add2
	IsOverrideActive(var_245_bool); // 0x131a Func
	var_265_bool = var_245_bool; // 0x131c Push
	if(var_265_bool == 0) goto Label_4896; // 0x131d JumpB
	var_226_bool = 0; // 0x131e MovB
	return 18; // 0x131f Return
	
Label_4896:
	StopWorld(); // 0x1320 Func
	CameraTransit(var_244_cvector, var_242_cvector); // 0x1322 Func
	var_266_float = GetByIndex(var_243_cvector, 0); // 0x1324 PushE
	var_267_float = GetByIndex(var_243_cvector, 2); // 0x1325 PushE
	Rotate(var_266_float, var_267_float); // 0x1326 Func
	var_268_bool = 0; // 0x1328 PushV
	func_5359(var_268_bool); // 0x1329 NEW_2
	if(var_268_bool == 0) goto Label_4909; // 0x132b JumpB
	goto Label_4917; // 0x132c Jump
	
Label_4917:
	CameraWaitForPlayFinish(); // 0x1335 Func
	ResumeWorld(); // 0x1337 Func
	var_226_bool = 1; // 0x1339 MovB
	return 18; // 0x133a Return
	
Label_4909:
	var_269_string = "head"; // 0x132d PushS
	HasAnimationTrack(var_246_bool, var_269_string); // 0x132e Func
	var_270_bool = var_246_bool; // 0x1330 Push
	if(var_270_bool == 0) goto Label_4917; // 0x1331 JumpB
	var_271_string = "head"; // 0x1332 PushS
	LookAsyncCamera(var_271_string); // 0x1333 Func
}


func_2298(var_0_bool, var_1_object, var_2_object, var_3_object, var_658_object, var_659_object)
{
	var_0_bool = var_659_object; // 0x8fb TMov
	var_1_object = var_658_object; // 0x8fc TMov
	var_3_object = 0; // 0x8fd TMovB
	var_664_int = 1; // 0x8fe PushI
	if(var_664_int == 0) goto Label_2326; // 0x8ff JumpB
	var_665_string = ""; // 0x900 PushV
	var_665_string = "Neutral"; // 0x901 MovS
	func_2356(var_659_object, var_665_string); // 0x902 NEW_2
	var_673_int = 509843; // 0x904 PushI
	SetMessage(var_673_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_674_int = 514117; // 0x909 PushI
	var_675_int = -1; // 0x90a PushI
	var_676_int = 15331; // 0x90b PushI
	AddReply(var_674_int, var_675_int, var_676_int); // 0x90c TObjFunc
	var_677_int = 514118; // 0x90e PushI
	var_678_int = -1; // 0x90f PushI
	var_679_int = 15332; // 0x910 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0x911 TObjFunc
	goto Label_2326; // 0x913 Jump
	
Label_2326:
	var_680_bool = 0; // 0x916 PushV
	func_5359(var_680_bool); // 0x917 NEW_2
	if(var_680_bool == 0) goto Label_2341; // 0x919 JumpB
	
Label_2330:
	lshWaitForAnimEnd(); // 0x91a Func
	var_681_object = var_3_object; // 0x91c PushT
	if(var_681_object == 0) goto Label_2335; // 0x91d JumpB
	goto Label_2340; // 0x91e Jump
	
Label_2340:
	goto Label_2355; // 0x924 Jump
	
Label_2355:
	return 0; // 0x933 Return
	
Label_2335:
	var_682_string = ""; // 0x91f PushV
	var_682_string = var_2_object; // 0x920 MovT
	func_5137(var_682_string); // 0x921 NEW_2
	goto Label_2330; // 0x923 Jump
	
Label_2341:
	var_683_string = "all"; // 0x925 PushS
	var_684_string = "idle"; // 0x926 PushS
	PlayAnimation(var_683_string, var_684_string); // 0x927 Func
	
Label_2345:
	WaitForAnimEnd(); // 0x929 Func
	var_685_object = var_3_object; // 0x92b PushT
	if(var_685_object == 0) goto Label_2350; // 0x92c JumpB
	goto Label_2355; // 0x92d Jump
	
Label_2350:
	var_686_string = "all"; // 0x92e PushS
	var_687_string = "idle"; // 0x92f PushS
	PlayAnimation(var_686_string, var_687_string); // 0x930 Func
	goto Label_2345; // 0x932 Jump
}


func_5371()
{
	var_166_string = "playsound"; // 0x14fc PushS
	var_167_string = "givemoney"; // 0x14fd PushS
	TriggerWorld(var_166_string, var_167_string); // 0x14fe Func
	return 0; // 0x1500 Return
}


func_765(var_0_bool, var_1_object, var_2_object, var_3_object, var_376_object, var_377_object)
{
	var_0_bool = var_377_object; // 0x2fe TMov
	var_1_object = var_376_object; // 0x2ff TMov
	var_3_object = 0; // 0x300 TMovB
	var_382_int = 1; // 0x301 PushI
	if(var_382_int == 0) goto Label_803; // 0x302 JumpB
	var_383_object = Obj(); var_384_object = Obj(); // 0x303 PushV
	var_383_object = var_1_object; // 0x304 MovT
	var_384_object = var_0_bool; // 0x305 MovT
	func_5514(); // 0x306 NEW_2
	var_387_string = ""; // 0x308 PushV
	var_387_string = "Neutral"; // 0x309 MovS
	func_833(var_377_object, var_387_string); // 0x30a NEW_2
	var_404_int = 500383; // 0x30c PushI
	SetMessage(var_404_int); // 0x30d TObjFunc
	ClearReplies(); // 0x30f TObjFunc
	var_405_int = 500384; // 0x311 PushI
	var_406_int = 448; // 0x312 PushI
	var_407_int = 445; // 0x313 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x314 TObjFunc
	var_408_int = 500385; // 0x316 PushI
	var_409_int = 449; // 0x317 PushI
	var_410_int = 446; // 0x318 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x319 TObjFunc
	var_411_int = 500386; // 0x31b PushI
	var_412_int = 450; // 0x31c PushI
	var_413_int = 447; // 0x31d PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x31e TObjFunc
	goto Label_803; // 0x320 Jump
	
Label_803:
	var_414_bool = 0; // 0x323 PushV
	func_5359(var_414_bool); // 0x324 NEW_2
	if(var_414_bool == 0) goto Label_818; // 0x326 JumpB
	
Label_807:
	lshWaitForAnimEnd(); // 0x327 Func
	var_415_object = var_3_object; // 0x329 PushT
	if(var_415_object == 0) goto Label_812; // 0x32a JumpB
	goto Label_817; // 0x32b Jump
	
Label_817:
	goto Label_832; // 0x331 Jump
	
Label_832:
	return 0; // 0x340 Return
	
Label_812:
	var_416_string = ""; // 0x32c PushV
	var_416_string = var_2_object; // 0x32d MovT
	func_5137(var_416_string); // 0x32e NEW_2
	goto Label_807; // 0x330 Jump
	
Label_818:
	var_427_string = "all"; // 0x332 PushS
	var_428_string = "idle"; // 0x333 PushS
	PlayAnimation(var_427_string, var_428_string); // 0x334 Func
	
Label_822:
	WaitForAnimEnd(); // 0x336 Func
	var_429_object = var_3_object; // 0x338 PushT
	if(var_429_object == 0) goto Label_827; // 0x339 JumpB
	goto Label_832; // 0x33a Jump
	
Label_827:
	var_430_string = "all"; // 0x33b PushS
	var_431_string = "idle"; // 0x33c PushS
	PlayAnimation(var_430_string, var_431_string); // 0x33d Func
	goto Label_822; // 0x33f Jump
}


func_3839(var_2_object, var_1075_string)
{
	var_1076_bool = 0; // 0xf00 PushV
	func_5359(var_1076_bool); // 0xf01 NEW_2
	var_1077_bool = var_1076_bool == 0; // 0xf03 Not
	if(var_1077_bool == 0) goto Label_3846; // 0xf04 JumpB
	return 0; // 0xf05 Return
	
Label_3846:
	var_1078_bool = var_1075_string == var_2_object; // 0xf06 Eq
	if(var_1078_bool == 0) goto Label_3849; // 0xf07 JumpB
	return 0; // 0xf08 Return
	
Label_3849:
	var_1079_string = ""; var_1080_bool = 0; // 0xf09 PushV
	var_1079_string = var_1075_string; // 0xf0a Mov
	var_1081_string = ""; // 0xf0b PushS
	var_1082_bool = var_1075_string == var_1081_string; // 0xf0c Eq
	if(var_1082_bool == 0) goto Label_3856; // 0xf0d JumpB
	var_1080_bool = 0; // 0xf0e MovB
	goto Label_3857; // 0xf0f Jump
	
Label_3857:
	func_5153(var_1079_string, var_1080_bool); // 0xf11 NEW_2
	var_2_object = var_1075_string; // 0xf13 TMov
	return 0; // 0xf14 Return
	
Label_3856:
	var_1080_bool = 1; // 0xf10 MovB
}


func_5377()
{
	var_106_string = "playsound"; // 0x1502 PushS
	var_107_string = "giveitem"; // 0x1503 PushS
	TriggerWorld(var_106_string, var_107_string); // 0x1504 Func
	return 0; // 0x1506 Return
}


func_5383(var_108_object)
{
	var_110_string = "revolver ammo15 is given"; // 0x1508 PushS
	Trace(var_110_string); // 0x1509 Func
	var_111_object = Obj(); var_112_string = ""; var_113_int = 0; // 0x150b PushV
	var_111_object = var_108_object; // 0x150c Mov
	var_112_string = "revolver_ammo"; // 0x150d MovS
	var_113_int = 15; // 0x150e MovI
	func_5294(var_111_object, var_112_string, var_113_int); // 0x150f NEW_2
	return 0; // 0x1511 Return
}


func_5394(var_140_object)
{
	var_142_string = "money 10000 removed"; // 0x1513 PushS
	Trace(var_142_string); // 0x1514 Func
	var_143_object = Obj(); var_144_int = 0; // 0x1516 PushV
	var_143_object = var_140_object; // 0x1517 Mov
	var_144_int = -10000; // 0x1518 MovI
	func_5256(var_143_object, var_144_int); // 0x1519 NEW_2
	return 0; // 0x151b Return
}


func_5404()
{
	var_75_string = "ood1Grif1"; // 0x151d PushS
	var_76_int = 1; // 0x151e PushI
	SetVariable(var_75_string, var_76_int); // 0x151f Func
	return 0; // 0x1521 Return
}


func_3359(var_0_bool, var_1_object, var_2_object, var_3_object, var_946_object, var_947_object)
{
	var_0_bool = var_947_object; // 0xd20 TMov
	var_1_object = var_946_object; // 0xd21 TMov
	var_3_object = 0; // 0xd22 TMovB
	var_952_int = 1; // 0xd23 PushI
	if(var_952_int == 0) goto Label_3387; // 0xd24 JumpB
	var_953_string = ""; // 0xd25 PushV
	var_953_string = "Fear"; // 0xd26 MovS
	func_3417(var_947_object, var_953_string); // 0xd27 NEW_2
	var_961_int = 514122; // 0xd29 PushI
	SetMessage(var_961_int); // 0xd2a TObjFunc
	ClearReplies(); // 0xd2c TObjFunc
	var_962_int = 514123; // 0xd2e PushI
	var_963_int = -1; // 0xd2f PushI
	var_964_int = 15337; // 0xd30 PushI
	AddReply(var_962_int, var_963_int, var_964_int); // 0xd31 TObjFunc
	var_965_int = 514124; // 0xd33 PushI
	var_966_int = -1; // 0xd34 PushI
	var_967_int = 15338; // 0xd35 PushI
	AddReply(var_965_int, var_966_int, var_967_int); // 0xd36 TObjFunc
	goto Label_3387; // 0xd38 Jump
	
Label_3387:
	var_968_bool = 0; // 0xd3b PushV
	func_5359(var_968_bool); // 0xd3c NEW_2
	if(var_968_bool == 0) goto Label_3402; // 0xd3e JumpB
	
Label_3391:
	lshWaitForAnimEnd(); // 0xd3f Func
	var_969_object = var_3_object; // 0xd41 PushT
	if(var_969_object == 0) goto Label_3396; // 0xd42 JumpB
	goto Label_3401; // 0xd43 Jump
	
Label_3401:
	goto Label_3416; // 0xd49 Jump
	
Label_3416:
	return 0; // 0xd58 Return
	
Label_3396:
	var_970_string = ""; // 0xd44 PushV
	var_970_string = var_2_object; // 0xd45 MovT
	func_5137(var_970_string); // 0xd46 NEW_2
	goto Label_3391; // 0xd48 Jump
	
Label_3402:
	var_971_string = "all"; // 0xd4a PushS
	var_972_string = "idle"; // 0xd4b PushS
	PlayAnimation(var_971_string, var_972_string); // 0xd4c Func
	
Label_3406:
	WaitForAnimEnd(); // 0xd4e Func
	var_973_object = var_3_object; // 0xd50 PushT
	if(var_973_object == 0) goto Label_3411; // 0xd51 JumpB
	goto Label_3416; // 0xd52 Jump
	
Label_3411:
	var_974_string = "all"; // 0xd53 PushS
	var_975_string = "idle"; // 0xd54 PushS
	PlayAnimation(var_974_string, var_975_string); // 0xd55 Func
	goto Label_3406; // 0xd57 Jump
}


func_5410()
{
	var_75_string = "ood2Grif2"; // 0x1523 PushS
	var_76_int = 1; // 0x1524 PushI
	SetVariable(var_75_string, var_76_int); // 0x1525 Func
	return 0; // 0x1527 Return
}


func_5416()
{
	var_79_string = "d2q02"; // 0x1529 PushS
	var_80_int = 7; // 0x152a PushI
	SetVariable(var_79_string, var_80_int); // 0x152b Func
	func_5707(); // 0x152e NEW_2
	return 0; // 0x1530 Return
}


func_5425(var_132_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x1531 PushV
	var_136_string = "Revolver is given"; // 0x1532 PushS
	Trace(var_136_string); // 0x1533 Func
	CreateInvItem(var_135_object); // 0x1535 Func
	var_137_string = "Revolver"; // 0x1537 PushS
	SetItemName(var_137_string); // 0x1538 ObjFunc
	var_138_string = "durability"; // 0x153a PushS
	var_139_int = 30; // 0x153b PushI
	SetProperty(var_138_string, var_139_int); // 0x153c ObjFunc
	var_140_object = Obj(); var_141_object = Obj(); var_142_int = 0; // 0x153e PushV
	var_140_object = var_132_object; // 0x153f Mov
	var_141_object = var_135_object; // 0x1540 Mov
	var_142_int = 1; // 0x1541 MovI
	func_5275(var_141_object, var_142_int); // 0x1542 NEW_2
	return 2; // 0x1544 Return
}


func_2356(var_2_object, var_665_string)
{
	var_666_bool = 0; // 0x935 PushV
	func_5359(var_666_bool); // 0x936 NEW_2
	var_667_bool = var_666_bool == 0; // 0x938 Not
	if(var_667_bool == 0) goto Label_2363; // 0x939 JumpB
	return 0; // 0x93a Return
	
Label_2363:
	var_668_bool = var_665_string == var_2_object; // 0x93b Eq
	if(var_668_bool == 0) goto Label_2366; // 0x93c JumpB
	return 0; // 0x93d Return
	
Label_2366:
	var_669_string = ""; var_670_bool = 0; // 0x93e PushV
	var_669_string = var_665_string; // 0x93f Mov
	var_671_string = ""; // 0x940 PushS
	var_672_bool = var_665_string == var_671_string; // 0x941 Eq
	if(var_672_bool == 0) goto Label_2373; // 0x942 JumpB
	var_670_bool = 0; // 0x943 MovB
	goto Label_2374; // 0x944 Jump
	
Label_2374:
	func_5153(var_669_string, var_670_bool); // 0x946 NEW_2
	var_2_object = var_665_string; // 0x948 TMov
	return 0; // 0x949 Return
	
Label_2373:
	var_670_bool = 1; // 0x945 MovB
}


func_4923()
{
	var_434_bool = 0; var_435_bool = 0; // 0x133b PushV
	CameraSwitchToNormal(); // 0x133c Func
	var_436_bool = 0; // 0x133e PushV
	func_5359(var_436_bool); // 0x133f NEW_2
	if(var_436_bool == 0) goto Label_4931; // 0x1341 JumpB
	goto Label_4939; // 0x1342 Jump
	
Label_4939:
	return 2; // 0x134b Return
	
Label_4931:
	var_437_string = "head"; // 0x1343 PushS
	HasAnimationTrack(var_435_bool, var_437_string); // 0x1344 Func
	var_438_bool = var_435_bool; // 0x1346 Push
	if(var_438_bool == 0) goto Label_4939; // 0x1347 JumpB
	var_439_string = "head"; // 0x1348 PushS
	UnlookAsync(var_439_string); // 0x1349 Func
}


func_4414(var_0_bool, var_1_object, var_2_object, var_3_object, var_1251_object, var_1252_object)
{
	var_0_bool = var_1252_object; // 0x113f TMov
	var_1_object = var_1251_object; // 0x1140 TMov
	var_3_object = 0; // 0x1141 TMovB
	var_1257_int = 1; // 0x1142 PushI
	if(var_1257_int == 0) goto Label_4447; // 0x1143 JumpB
	var_1258_string = ""; // 0x1144 PushV
	var_1258_string = "Fear"; // 0x1145 MovS
	func_4477(var_1252_object, var_1258_string); // 0x1146 NEW_2
	var_1266_int = 514186; // 0x1148 PushI
	SetMessage(var_1266_int); // 0x1149 TObjFunc
	ClearReplies(); // 0x114b TObjFunc
	var_1267_int = 514187; // 0x114d PushI
	var_1268_int = -1; // 0x114e PushI
	var_1269_int = 15401; // 0x114f PushI
	AddReply(var_1267_int, var_1268_int, var_1269_int); // 0x1150 TObjFunc
	var_1270_int = 514188; // 0x1152 PushI
	var_1271_int = -1; // 0x1153 PushI
	var_1272_int = 15402; // 0x1154 PushI
	AddReply(var_1270_int, var_1271_int, var_1272_int); // 0x1155 TObjFunc
	var_1273_int = 539631; // 0x1157 PushI
	var_1274_int = -1; // 0x1158 PushI
	var_1275_int = 41577; // 0x1159 PushI
	AddReply(var_1273_int, var_1274_int, var_1275_int); // 0x115a TObjFunc
	goto Label_4447; // 0x115c Jump
	
Label_4447:
	var_1276_bool = 0; // 0x115f PushV
	func_5359(var_1276_bool); // 0x1160 NEW_2
	if(var_1276_bool == 0) goto Label_4462; // 0x1162 JumpB
	
Label_4451:
	lshWaitForAnimEnd(); // 0x1163 Func
	var_1277_object = var_3_object; // 0x1165 PushT
	if(var_1277_object == 0) goto Label_4456; // 0x1166 JumpB
	goto Label_4461; // 0x1167 Jump
	
Label_4461:
	goto Label_4476; // 0x116d Jump
	
Label_4476:
	return 0; // 0x117c Return
	
Label_4456:
	var_1278_string = ""; // 0x1168 PushV
	var_1278_string = var_2_object; // 0x1169 MovT
	func_5137(var_1278_string); // 0x116a NEW_2
	goto Label_4451; // 0x116c Jump
	
Label_4462:
	var_1279_string = "all"; // 0x116e PushS
	var_1280_string = "idle"; // 0x116f PushS
	PlayAnimation(var_1279_string, var_1280_string); // 0x1170 Func
	
Label_4466:
	WaitForAnimEnd(); // 0x1172 Func
	var_1281_object = var_3_object; // 0x1174 PushT
	if(var_1281_object == 0) goto Label_4471; // 0x1175 JumpB
	goto Label_4476; // 0x1176 Jump
	
Label_4471:
	var_1282_string = "all"; // 0x1177 PushS
	var_1283_string = "idle"; // 0x1178 PushS
	PlayAnimation(var_1282_string, var_1283_string); // 0x1179 Func
	goto Label_4466; // 0x117b Jump
}


func_833(var_2_object, var_387_string)
{
	var_388_bool = 0; // 0x342 PushV
	func_5359(var_388_bool); // 0x343 NEW_2
	var_389_bool = var_388_bool == 0; // 0x345 Not
	if(var_389_bool == 0) goto Label_840; // 0x346 JumpB
	return 0; // 0x347 Return
	
Label_840:
	var_390_bool = var_387_string == var_2_object; // 0x348 Eq
	if(var_390_bool == 0) goto Label_843; // 0x349 JumpB
	return 0; // 0x34a Return
	
Label_843:
	var_391_string = ""; var_392_bool = 0; // 0x34b PushV
	var_391_string = var_387_string; // 0x34c Mov
	var_393_string = ""; // 0x34d PushS
	var_394_bool = var_387_string == var_393_string; // 0x34e Eq
	if(var_394_bool == 0) goto Label_850; // 0x34f JumpB
	var_392_bool = 0; // 0x350 MovB
	goto Label_851; // 0x351 Jump
	
Label_851:
	func_5153(var_391_string, var_392_bool); // 0x353 NEW_2
	var_2_object = var_387_string; // 0x355 TMov
	return 0; // 0x356 Return
	
Label_850:
	var_392_bool = 1; // 0x352 MovB
}


func_5446()
{
	var_75_string = "ood4Grif1"; // 0x1547 PushS
	var_76_int = 1; // 0x1548 PushI
	SetVariable(var_75_string, var_76_int); // 0x1549 Func
	return 0; // 0x154b Return
}


func_3911(var_0_bool, var_1166_int, var_1167_object)
{
	var_1169_object = Obj(); var_1170_bool = 0; var_1171_int = 0; var_1172_bool = 0; var_1173_object = Obj(); var_1174_bool = 0; var_1175_int = 0; var_1176_bool = 0; // 0xf47 PushV
	var_0_bool = var_1167_object; // 0xf48 TMov
	var_1177_bool = 0; var_1178_object = Obj(); var_1179_float = 0; // 0xf49 PushV
	var_1178_object = var_1167_object; // 0xf4a Mov
	var_1179_float = 70.0; // 0xf4b MovF
	func_4855(var_1178_object, var_1179_float); // 0xf4c NEW_2
	var_1180_bool = var_1177_bool == 0; // 0xf4e Not
	if(var_1180_bool == 0) goto Label_3922; // 0xf4f JumpB
	var_1166_int = -2; // 0xf50 MovI
	return 8; // 0xf51 Return
	
Label_3922:
	CreateDialog(var_1173_object); // 0xf52 Func
	var_1181_int = 0; // 0xf54 PushV
	func_5353(var_1181_int); // 0xf55 NEW_2
	SetNPCName(var_1181_int); // 0xf57 ObjFunc
	var_1182_int = 0; // 0xf59 PushV
	func_5351(var_1182_int); // 0xf5a NEW_2
	SetNPCDescription(var_1182_int); // 0xf5c ObjFunc
	var_1183_string = ""; // 0xf5e PushV
	func_5355(var_1183_string); // 0xf5f NEW_2
	SetPhoto(var_1183_string); // 0xf61 ObjFunc
	var_1184_string = ""; // 0xf63 PushV
	func_5357(var_1184_string); // 0xf64 NEW_2
	SetPhoto2(var_1184_string); // 0xf66 ObjFunc
	var_1185_int = 0; // 0xf68 PushV
	func_5978(var_1185_int); // 0xf69 NEW_2
	SetPlayerName(var_1185_int); // 0xf6b ObjFunc
	var_1175_int = -1; // 0xf6d MovI
	IsOverrideActive(var_1174_bool); // 0xf6e Func
	var_1186_bool = var_1174_bool; // 0xf70 Push
	if(var_1186_bool == 0) goto Label_3956; // 0xf71 JumpB
	var_1166_int = -2; // 0xf72 MovI
	return 8; // 0xf73 Return
	
Label_3956:
	DoDialog(var_1173_object); // 0xf74 Func
	var_1187_bool = 0; var_1188_object = Obj(); // 0xf76 PushV
	var_1189_object = Obj(); // 0xf77 PushV
	func_5218(var_1189_object); // 0xf78 NEW_2
	var_1188_object = var_1189_object; // 0xf79 Mov
	func_4940(var_1187_bool, var_1188_object); // 0xf7b NEW_2
	var_1190_object = Obj(); var_1191_object = Obj(); // 0xf7d PushV
	var_1190_object = var_1167_object; // 0xf7e Mov
	var_1191_object = var_1173_object; // 0xf7f Mov
	TaskCall(22); // 0xf80 TaskCall
	func_3992(var_1192_object, var_1193_object, var_1194_string, var_1195_bool, var_1190_object, var_1191_object); // 0xf81 NEW_2
	TaskReturn(); // 0xf82 TaskReturn
	IsDialogEnd(var_1176_bool); // 0xf84 ObjFunc
	
Label_3974:
	var_1220_bool = var_1176_bool == 0; // 0xf86 Not
	if(var_1220_bool == 0) goto Label_3981; // 0xf87 JumpB
	sync(); // 0xf88 Func
	IsDialogEnd(var_1176_bool); // 0xf8a ObjFunc
	goto Label_3974; // 0xf8c Jump
	
Label_3981:
	var_1221_object = Obj(); // 0xf8d PushV
	var_1221_object = var_1167_object; // 0xf8e Mov
	func_4923(); // 0xf8f NEW_2
	StopDialog(var_1173_object); // 0xf91 Func
	GetReturnValue(var_1175_int); // 0xf93 ObjFunc
	var_1166_int = var_1175_int; // 0xf95 Mov
	return 8; // 0xf96 Return
}


func_4940(var_286_bool, var_287_object)
{
	var_291_int = 0; var_292_int = 0; var_293_int = 0; var_294_int = 0; // 0x134c PushV
	var_295_string = "voice_common"; // 0x134d PushS
	GetVariable(var_295_string, var_293_int); // 0x134e Func
	var_296_int = var_293_int; // 0x1350 Push
	if(var_296_int == 0) goto Label_4978; // 0x1351 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x1352 PushV
	var_298_object = var_287_object; // 0x1353 Mov
	func_4998(var_298_object); // 0x1354 NEW_2
	var_327_bool = var_297_bool == 0; // 0x1356 Not
	if(var_327_bool == 0) goto Label_4960; // 0x1357 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x1358 PushV
	var_329_object = var_287_object; // 0x1359 Mov
	func_5035(var_329_object); // 0x135a NEW_2
	var_358_bool = var_328_bool == 0; // 0x135c Not
	if(var_358_bool == 0) goto Label_4960; // 0x135d JumpB
	var_286_bool = 0; // 0x135e MovB
	return 4; // 0x135f Return
	
Label_4960:
	var_359_int = 2; // 0x1360 PushI
	irand(var_294_int, var_359_int); // 0x1361 Func
	var_360_int = var_294_int; // 0x1363 Push
	if(var_360_int == 0) goto Label_4973; // 0x1364 JumpB
	var_361_string = "voice_common"; // 0x1365 PushS
	var_362_int = 1; // 0x1366 PushI
	var_363_int = var_293_int + var_362_int; // 0x1367 Add
	var_364_int = 3; // 0x1368 PushI
	var_365_int = var_363_int / var_364_int; // 0x1369 Mod
	SetVariable(var_361_string, var_365_int); // 0x136a Func
	goto Label_4977; // 0x136c Jump
	
Label_4977:
	goto Label_4996; // 0x1371 Jump
	
Label_4996:
	var_286_bool = 1; // 0x1384 MovB
	return 4; // 0x1385 Return
	
Label_4973:
	var_366_string = "voice_common"; // 0x136d PushS
	var_367_int = 0; // 0x136e PushI
	SetVariable(var_366_string, var_367_int); // 0x136f Func
	
Label_4978:
	var_368_bool = 0; var_369_object = Obj(); // 0x1372 PushV
	var_369_object = var_287_object; // 0x1373 Mov
	func_5035(var_369_object); // 0x1374 NEW_2
	var_370_bool = var_368_bool == 0; // 0x1376 Not
	if(var_370_bool == 0) goto Label_4992; // 0x1377 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x1378 PushV
	var_372_object = var_287_object; // 0x1379 Mov
	func_4998(var_372_object); // 0x137a NEW_2
	var_373_bool = var_371_bool == 0; // 0x137c Not
	if(var_373_bool == 0) goto Label_4992; // 0x137d JumpB
	var_286_bool = 0; // 0x137e MovB
	return 4; // 0x137f Return
	
Label_4992:
	var_374_string = "voice_common"; // 0x1380 PushS
	var_375_int = 1; // 0x1381 PushI
	SetVariable(var_374_string, var_375_int); // 0x1382 Func
}


func_5452()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x154c PushV
	var_81_string = "d4q03"; // 0x154d PushS
	var_82_int = 2; // 0x154e PushI
	SetVariable(var_81_string, var_82_int); // 0x154f Func
	var_83_object = Obj(); // 0x1551 PushV
	func_5787(var_83_object); // 0x1552 NEW_2
	var_80_object = var_83_object; // 0x1553 Mov
	var_90_string = "d4q03GrifGotoAlexandr"; // 0x1555 PushS
	var_91_string = "pt_map_alexandr"; // 0x1556 PushS
	var_92_int = 0; // 0x1557 PushI
	var_93_int = 515331; // 0x1558 PushI
	var_94_float = 0; // 0x1559 PushV
	func_5307(var_94_float); // 0x155a NEW_2
	AddMark(var_90_string, var_91_string, var_92_int, var_93_int, var_94_float); // 0x155c ObjFunc
	var_97_string = "d4q03GrifGotoAlexandrSelf"; // 0x155e PushS
	var_98_string = "pt_map_grif"; // 0x155f PushS
	var_99_int = 0; // 0x1560 PushI
	var_100_int = 515332; // 0x1561 PushI
	var_101_float = 0; // 0x1562 PushV
	func_5307(var_101_float); // 0x1563 NEW_2
	AddMark(var_97_string, var_98_string, var_99_int, var_100_int, var_101_float); // 0x1565 ObjFunc
	func_5720(); // 0x1568 NEW_2
	return 2; // 0x156a Return
}


func_5973(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0; // 0x1755 PushV
	GetInvItemByName(var_107_int, var_105_string); // 0x1756 Func
	var_104_int = var_107_int; // 0x1758 Mov
	return 2; // 0x1759 Return
}


func_3417(var_2_object, var_953_string)
{
	var_954_bool = 0; // 0xd5a PushV
	func_5359(var_954_bool); // 0xd5b NEW_2
	var_955_bool = var_954_bool == 0; // 0xd5d Not
	if(var_955_bool == 0) goto Label_3424; // 0xd5e JumpB
	return 0; // 0xd5f Return
	
Label_3424:
	var_956_bool = var_953_string == var_2_object; // 0xd60 Eq
	if(var_956_bool == 0) goto Label_3427; // 0xd61 JumpB
	return 0; // 0xd62 Return
	
Label_3427:
	var_957_string = ""; var_958_bool = 0; // 0xd63 PushV
	var_957_string = var_953_string; // 0xd64 Mov
	var_959_string = ""; // 0xd65 PushS
	var_960_bool = var_953_string == var_959_string; // 0xd66 Eq
	if(var_960_bool == 0) goto Label_3434; // 0xd67 JumpB
	var_958_bool = 0; // 0xd68 MovB
	goto Label_3435; // 0xd69 Jump
	
Label_3435:
	func_5153(var_957_string, var_958_bool); // 0xd6b NEW_2
	var_2_object = var_953_string; // 0xd6d TMov
	return 0; // 0xd6e Return
	
Label_3434:
	var_958_bool = 1; // 0xd6a MovB
}


func_5978(var_277_int)
{
	var_278_int = 0; var_279_int = 0; // 0x175a PushV
	var_280_string = "branch"; // 0x175b PushS
	GetVariable(var_280_string, var_279_int); // 0x175c Func
	var_281_int = 0; // 0x175e PushI
	var_282_bool = var_279_int == var_281_int; // 0x175f Eq
	if(var_282_bool == 0) goto Label_5988; // 0x1760 JumpB
	var_277_int = 1; // 0x1761 MovI
	return 2; // 0x1762 Return
	
Label_5988:
	var_283_int = 1; // 0x1764 PushI
	var_284_bool = var_279_int == var_283_int; // 0x1765 Eq
	if(var_284_bool == 0) goto Label_5993; // 0x1766 JumpB
	var_277_int = 2; // 0x1767 MovI
	return 2; // 0x1768 Return
	
Label_5993:
	var_277_int = 3; // 0x1769 MovI
	return 2; // 0x176a Return
}


func_5995(var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x176b PushV
	var_194_string = "branch"; // 0x176c PushS
	GetVariable(var_194_string, var_193_int); // 0x176d Func
	var_191_int = var_193_int; // 0x176f Mov
	return 2; // 0x1770 Return
}


func_5484()
{
	var_141_string = "ood4Grif2"; // 0x156d PushS
	var_142_int = 1; // 0x156e PushI
	SetVariable(var_141_string, var_142_int); // 0x156f Func
	return 0; // 0x1571 Return
}


func_6001(var_513_object)
{
	var_514_bool = 0; var_515_object = Obj(); // 0x1772 PushV
	var_515_object = var_513_object; // 0x1773 Mov
	func_5078(var_514_bool, var_515_object); // 0x1774 NEW_2
	var_545_bool = var_514_bool == 0; // 0x1776 Not
	if(var_545_bool == 0) goto Label_6009; // 0x1777 JumpB
	return 0; // 0x1778 Return
	
Label_6009:
	var_546_object = Obj(); // 0x1779 PushV
	var_546_object = var_513_object; // 0x177a Mov
	TaskCall(0); // 0x177b TaskCall
	func_0(var_546_object); // 0x177c NEW_2
	TaskReturn(); // 0x177d TaskReturn
	var_550_object = Obj(); // 0x177f PushV
	var_550_object = var_513_object; // 0x1780 Mov
	func_5133(); // 0x1781 NEW_2
	return 0; // 0x1783 Return
}


func_5490()
{
	var_75_string = "ood5Grif1"; // 0x1573 PushS
	var_76_int = 1; // 0x1574 PushI
	SetVariable(var_75_string, var_76_int); // 0x1575 Func
	return 0; // 0x1577 Return
}


func_5496()
{
	var_113_string = "d5q01ThiefsWillHelp"; // 0x1579 PushS
	var_114_int = 1; // 0x157a PushI
	SetVariable(var_113_string, var_114_int); // 0x157b Func
	var_115_string = "d5q01PlayCutscene"; // 0x157d PushS
	var_116_int = 1; // 0x157e PushI
	SetVariable(var_115_string, var_116_int); // 0x157f Func
	func_5733(); // 0x1582 NEW_2
	return 0; // 0x1584 Return
}


func_4477(var_2_object, var_1258_string)
{
	var_1259_bool = 0; // 0x117e PushV
	func_5359(var_1259_bool); // 0x117f NEW_2
	var_1260_bool = var_1259_bool == 0; // 0x1181 Not
	if(var_1260_bool == 0) goto Label_4484; // 0x1182 JumpB
	return 0; // 0x1183 Return
	
Label_4484:
	var_1261_bool = var_1258_string == var_2_object; // 0x1184 Eq
	if(var_1261_bool == 0) goto Label_4487; // 0x1185 JumpB
	return 0; // 0x1186 Return
	
Label_4487:
	var_1262_string = ""; var_1263_bool = 0; // 0x1187 PushV
	var_1262_string = var_1258_string; // 0x1188 Mov
	var_1264_string = ""; // 0x1189 PushS
	var_1265_bool = var_1258_string == var_1264_string; // 0x118a Eq
	if(var_1265_bool == 0) goto Label_4494; // 0x118b JumpB
	var_1263_bool = 0; // 0x118c MovB
	goto Label_4495; // 0x118d Jump
	
Label_4495:
	func_5153(var_1262_string, var_1263_bool); // 0x118f NEW_2
	var_2_object = var_1258_string; // 0x1191 TMov
	return 0; // 0x1192 Return
	
Label_4494:
	var_1263_bool = 1; // 0x118e MovB
}


func_6020(var_85_object, var_447_object, var_556_object, var_636_object, var_697_object, var_795_object, var_924_object, var_985_object, var_1046_object, var_1107_object, var_1168_object, var_1229_object)
{
	var_86_int = GlobalVars[2]; // 0x1785 PushGE
	var_87_int = 0; // 0x1786 PushV
	func_5312(var_87_int); // 0x1787 NEW_2
	var_93_bool = var_86_int != var_87_int; // 0x1789 Neq
	if(var_93_bool == 0) goto Label_6036; // 0x178a JumpB
	func_5804(); // 0x178c NEW_2
	var_211_int = GlobalVars[2]; // 0x178e PushGE
	var_212_int = 0; // 0x178f PushV
	func_5312(var_212_int); // 0x1790 NEW_2
	var_211_int = var_212_int; // 0x1791 Mov
	GlobalVars[2] = var_211_int; // 0x1793 PopGE
	
Label_6036:
	var_213_bool = GlobalVars[1]; // 0x1794 PushGE
	var_214_bool = var_213_bool == 0; // 0x1795 Not
	if(var_214_bool == 0) goto Label_6048; // 0x1796 JumpB
	var_215_int = 0; var_216_object = Obj(); // 0x1797 PushV
	var_216_object = var_85_object; // 0x1798 Mov
	TaskCall(5); // 0x1799 TaskCall
	func_684(var_217_object, var_215_int, var_216_object); // 0x179a NEW_2
	TaskReturn(); // 0x179b TaskReturn
	var_440_bool = GlobalVars[1]; // 0x179d PushGE
	var_440_bool = 1; // 0x179e MovB
	GlobalVars[1] = var_440_bool; // 0x179f PopGE
	
Label_6048:
	var_441_bool = 0; var_442_int = 0; // 0x17a0 PushV
	var_442_int = 1; // 0x17a1 MovI
	func_5321(var_441_bool, var_442_int); // 0x17a2 NEW_2
	if(var_441_bool == 0) goto Label_6067; // 0x17a4 JumpB
	var_444_int = 1000; // 0x17a5 PushI
	var_445_int = 0; var_446_object = Obj(); // 0x17a6 PushV
	var_446_object = var_85_object; // 0x17a7 Mov
	TaskCall(1); // 0x17a8 TaskCall
	func_22(var_447_object, var_445_int, var_446_object); // 0x17a9 NEW_2
	TaskReturn(); // 0x17aa TaskReturn
	var_512_bool = var_444_int == var_447_object; // 0x17ac Eq
	if(var_512_bool == 0) goto Label_6066; // 0x17ad JumpB
	var_513_object = Obj(); // 0x17ae PushV
	var_513_object = var_85_object; // 0x17af Mov
	func_6001(var_513_object); // 0x17b0 NEW_2
	
Label_6066:
	return 0; // 0x17b2 Return
	
Label_6067:
	var_551_bool = 0; var_552_int = 0; // 0x17b3 PushV
	var_552_int = 2; // 0x17b4 MovI
	func_5321(var_551_bool, var_552_int); // 0x17b5 NEW_2
	if(var_551_bool == 0) goto Label_6086; // 0x17b7 JumpB
	var_553_int = 1000; // 0x17b8 PushI
	var_554_int = 0; var_555_object = Obj(); // 0x17b9 PushV
	var_555_object = var_85_object; // 0x17ba Mov
	TaskCall(7); // 0x17bb TaskCall
	func_999(var_556_object, var_554_int, var_555_object); // 0x17bc NEW_2
	TaskReturn(); // 0x17bd TaskReturn
	var_629_bool = var_553_int == var_556_object; // 0x17bf Eq
	if(var_629_bool == 0) goto Label_6085; // 0x17c0 JumpB
	var_630_object = Obj(); // 0x17c1 PushV
	var_630_object = var_85_object; // 0x17c2 Mov
	func_6001(var_630_object); // 0x17c3 NEW_2
	
Label_6085:
	return 0; // 0x17c5 Return
	
Label_6086:
	var_631_bool = 0; var_632_int = 0; // 0x17c6 PushV
	var_632_int = 3; // 0x17c7 MovI
	func_5321(var_631_bool, var_632_int); // 0x17c8 NEW_2
	if(var_631_bool == 0) goto Label_6105; // 0x17ca JumpB
	var_633_int = 1000; // 0x17cb PushI
	var_634_int = 0; var_635_object = Obj(); // 0x17cc PushV
	var_635_object = var_85_object; // 0x17cd Mov
	TaskCall(11); // 0x17ce TaskCall
	func_2217(var_636_object, var_634_int, var_635_object); // 0x17cf NEW_2
	TaskReturn(); // 0x17d0 TaskReturn
	var_690_bool = var_633_int == var_636_object; // 0x17d2 Eq
	if(var_690_bool == 0) goto Label_6104; // 0x17d3 JumpB
	var_691_object = Obj(); // 0x17d4 PushV
	var_691_object = var_85_object; // 0x17d5 Mov
	func_6001(var_691_object); // 0x17d6 NEW_2
	
Label_6104:
	return 0; // 0x17d8 Return
	
Label_6105:
	var_692_bool = 0; var_693_int = 0; // 0x17d9 PushV
	var_693_int = 4; // 0x17da MovI
	func_5321(var_692_bool, var_693_int); // 0x17db NEW_2
	if(var_692_bool == 0) goto Label_6124; // 0x17dd JumpB
	var_694_int = 1000; // 0x17de PushI
	var_695_int = 0; var_696_object = Obj(); // 0x17df PushV
	var_696_object = var_85_object; // 0x17e0 Mov
	TaskCall(9); // 0x17e1 TaskCall
	func_1497(var_697_object, var_695_int, var_696_object); // 0x17e2 NEW_2
	TaskReturn(); // 0x17e3 TaskReturn
	var_788_bool = var_694_int == var_697_object; // 0x17e5 Eq
	if(var_788_bool == 0) goto Label_6123; // 0x17e6 JumpB
	var_789_object = Obj(); // 0x17e7 PushV
	var_789_object = var_85_object; // 0x17e8 Mov
	func_6001(var_789_object); // 0x17e9 NEW_2
	
Label_6123:
	return 0; // 0x17eb Return
	
Label_6124:
	var_790_bool = 0; var_791_int = 0; // 0x17ec PushV
	var_791_int = 5; // 0x17ed MovI
	func_5321(var_790_bool, var_791_int); // 0x17ee NEW_2
	if(var_790_bool == 0) goto Label_6143; // 0x17f0 JumpB
	var_792_int = 1000; // 0x17f1 PushI
	var_793_int = 0; var_794_object = Obj(); // 0x17f2 PushV
	var_794_object = var_85_object; // 0x17f3 Mov
	TaskCall(13); // 0x17f4 TaskCall
	func_2472(var_795_object, var_793_int, var_794_object); // 0x17f5 NEW_2
	TaskReturn(); // 0x17f6 TaskReturn
	var_917_bool = var_792_int == var_795_object; // 0x17f8 Eq
	if(var_917_bool == 0) goto Label_6142; // 0x17f9 JumpB
	var_918_object = Obj(); // 0x17fa PushV
	var_918_object = var_85_object; // 0x17fb Mov
	func_6001(var_918_object); // 0x17fc NEW_2
	
Label_6142:
	return 0; // 0x17fe Return
	
Label_6143:
	var_919_bool = 0; var_920_int = 0; // 0x17ff PushV
	var_920_int = 6; // 0x1800 MovI
	func_5321(var_919_bool, var_920_int); // 0x1801 NEW_2
	if(var_919_bool == 0) goto Label_6162; // 0x1803 JumpB
	var_921_int = 1000; // 0x1804 PushI
	var_922_int = 0; var_923_object = Obj(); // 0x1805 PushV
	var_923_object = var_85_object; // 0x1806 Mov
	TaskCall(15); // 0x1807 TaskCall
	func_3278(var_924_object, var_922_int, var_923_object); // 0x1808 NEW_2
	TaskReturn(); // 0x1809 TaskReturn
	var_978_bool = var_921_int == var_924_object; // 0x180b Eq
	if(var_978_bool == 0) goto Label_6161; // 0x180c JumpB
	var_979_object = Obj(); // 0x180d PushV
	var_979_object = var_85_object; // 0x180e Mov
	func_6001(var_979_object); // 0x180f NEW_2
	
Label_6161:
	return 0; // 0x1811 Return
	
Label_6162:
	var_980_bool = 0; var_981_int = 0; // 0x1812 PushV
	var_981_int = 7; // 0x1813 MovI
	func_5321(var_980_bool, var_981_int); // 0x1814 NEW_2
	if(var_980_bool == 0) goto Label_6181; // 0x1816 JumpB
	var_982_int = 1000; // 0x1817 PushI
	var_983_int = 0; var_984_object = Obj(); // 0x1818 PushV
	var_984_object = var_85_object; // 0x1819 Mov
	TaskCall(17); // 0x181a TaskCall
	func_3489(var_985_object, var_983_int, var_984_object); // 0x181b NEW_2
	TaskReturn(); // 0x181c TaskReturn
	var_1039_bool = var_982_int == var_985_object; // 0x181e Eq
	if(var_1039_bool == 0) goto Label_6180; // 0x181f JumpB
	var_1040_object = Obj(); // 0x1820 PushV
	var_1040_object = var_85_object; // 0x1821 Mov
	func_6001(var_1040_object); // 0x1822 NEW_2
	
Label_6180:
	return 0; // 0x1824 Return
	
Label_6181:
	var_1041_bool = 0; var_1042_int = 0; // 0x1825 PushV
	var_1042_int = 8; // 0x1826 MovI
	func_5321(var_1041_bool, var_1042_int); // 0x1827 NEW_2
	if(var_1041_bool == 0) goto Label_6200; // 0x1829 JumpB
	var_1043_int = 1000; // 0x182a PushI
	var_1044_int = 0; var_1045_object = Obj(); // 0x182b PushV
	var_1045_object = var_85_object; // 0x182c Mov
	TaskCall(19); // 0x182d TaskCall
	func_3700(var_1046_object, var_1044_int, var_1045_object); // 0x182e NEW_2
	TaskReturn(); // 0x182f TaskReturn
	var_1100_bool = var_1043_int == var_1046_object; // 0x1831 Eq
	if(var_1100_bool == 0) goto Label_6199; // 0x1832 JumpB
	var_1101_object = Obj(); // 0x1833 PushV
	var_1101_object = var_85_object; // 0x1834 Mov
	func_6001(var_1101_object); // 0x1835 NEW_2
	
Label_6199:
	return 0; // 0x1837 Return
	
Label_6200:
	var_1102_bool = 0; var_1103_int = 0; // 0x1838 PushV
	var_1103_int = 9; // 0x1839 MovI
	func_5321(var_1102_bool, var_1103_int); // 0x183a NEW_2
	if(var_1102_bool == 0) goto Label_6219; // 0x183c JumpB
	var_1104_int = 1000; // 0x183d PushI
	var_1105_int = 0; var_1106_object = Obj(); // 0x183e PushV
	var_1106_object = var_85_object; // 0x183f Mov
	TaskCall(23); // 0x1840 TaskCall
	func_4122(var_1107_object, var_1105_int, var_1106_object); // 0x1841 NEW_2
	TaskReturn(); // 0x1842 TaskReturn
	var_1161_bool = var_1104_int == var_1107_object; // 0x1844 Eq
	if(var_1161_bool == 0) goto Label_6218; // 0x1845 JumpB
	var_1162_object = Obj(); // 0x1846 PushV
	var_1162_object = var_85_object; // 0x1847 Mov
	func_6001(var_1162_object); // 0x1848 NEW_2
	
Label_6218:
	return 0; // 0x184a Return
	
Label_6219:
	var_1163_bool = 0; var_1164_int = 0; // 0x184b PushV
	var_1164_int = 10; // 0x184c MovI
	func_5321(var_1163_bool, var_1164_int); // 0x184d NEW_2
	if(var_1163_bool == 0) goto Label_6238; // 0x184f JumpB
	var_1165_int = 1000; // 0x1850 PushI
	var_1166_int = 0; var_1167_object = Obj(); // 0x1851 PushV
	var_1167_object = var_85_object; // 0x1852 Mov
	TaskCall(21); // 0x1853 TaskCall
	func_3911(var_1168_object, var_1166_int, var_1167_object); // 0x1854 NEW_2
	TaskReturn(); // 0x1855 TaskReturn
	var_1222_bool = var_1165_int == var_1168_object; // 0x1857 Eq
	if(var_1222_bool == 0) goto Label_6237; // 0x1858 JumpB
	var_1223_object = Obj(); // 0x1859 PushV
	var_1223_object = var_85_object; // 0x185a Mov
	func_6001(var_1223_object); // 0x185b NEW_2
	
Label_6237:
	return 0; // 0x185d Return
	
Label_6238:
	var_1224_bool = 0; var_1225_int = 0; // 0x185e PushV
	var_1225_int = 11; // 0x185f MovI
	func_5321(var_1224_bool, var_1225_int); // 0x1860 NEW_2
	if(var_1224_bool == 0) goto Label_6257; // 0x1862 JumpB
	var_1226_int = 1000; // 0x1863 PushI
	var_1227_int = 0; var_1228_object = Obj(); // 0x1864 PushV
	var_1228_object = var_85_object; // 0x1865 Mov
	TaskCall(25); // 0x1866 TaskCall
	func_4333(var_1229_object, var_1227_int, var_1228_object); // 0x1867 NEW_2
	TaskReturn(); // 0x1868 TaskReturn
	var_1286_bool = var_1226_int == var_1229_object; // 0x186a Eq
	if(var_1286_bool == 0) goto Label_6256; // 0x186b JumpB
	var_1287_object = Obj(); // 0x186c PushV
	var_1287_object = var_85_object; // 0x186d Mov
	func_6001(var_1287_object); // 0x186e NEW_2
	
Label_6256:
	return 0; // 0x1870 Return
	
Label_6257:
	var_1288_bool = 0; var_1289_int = 0; // 0x1871 PushV
	var_1289_int = 12; // 0x1872 MovI
	func_5321(var_1288_bool, var_1289_int); // 0x1873 NEW_2
	if(var_1288_bool == 0) goto Label_6269; // 0x1875 JumpB
	var_1290_int = 0; var_1291_object = Obj(); // 0x1876 PushV
	var_1291_object = var_85_object; // 0x1877 Mov
	TaskCall(3); // 0x1878 TaskCall
	func_425(var_1292_object, var_1290_int, var_1291_object); // 0x1879 NEW_2
	TaskReturn(); // 0x187a TaskReturn
	return 0; // 0x187c Return
	
Label_6269:
	return 0; // 0x187d Return
}


func_5509()
{
	var_75_int = 1000; // 0x1586 PushI
	SetReturnValue(var_75_int); // 0x1587 ObjFunc
	return 0; // 0x1589 Return
}


func_4998(var_297_bool)
{
	var_299_string = ""; var_300_int = 0; var_301_bool = 0; var_302_int = 0; var_303_string = ""; var_304_string = ""; var_305_int = 0; var_306_bool = 0; var_307_int = 0; var_308_string = ""; // 0x1386 PushV
	var_304_string = "c"; // 0x1387 MovS
	var_305_int = 0; // 0x1388 MovI
	
Label_5001:
	var_309_int = 1; // 0x1389 PushI
	if(var_309_int == 0) goto Label_5014; // 0x138a JumpB
	var_310_int = 1; // 0x138b PushI
	var_311_int = var_305_int + var_310_int; // 0x138c Add
	var_312_int = var_304_string + var_311_int; // 0x138d Add
	HasProperty(var_312_int, var_306_bool); // 0x138e ObjFunc
	var_313_bool = var_306_bool == 0; // 0x1390 Not
	if(var_313_bool == 0) goto Label_5011; // 0x1391 JumpB
	goto Label_5014; // 0x1392 Jump
	
Label_5014:
	var_314_bool = var_305_int == 0; // 0x1396 Not
	if(var_314_bool == 0) goto Label_5018; // 0x1397 JumpB
	var_297_bool = 0; // 0x1398 MovB
	return 10; // 0x1399 Return
	
Label_5018:
	var_307_int = 0; // 0x139a MovI
	var_315_int = 1; // 0x139b PushI
	var_316_bool = var_305_int > var_315_int; // 0x139c GT
	if(var_316_bool == 0) goto Label_5024; // 0x139d JumpB
	irand(var_307_int, var_305_int); // 0x139e Func
	
Label_5024:
	var_317_int = 1; // 0x13a0 PushI
	var_318_int = var_307_int + var_317_int; // 0x13a1 Add
	var_319_int = var_304_string + var_318_int; // 0x13a2 Add
	GetProperty(var_319_int, var_308_string); // 0x13a3 ObjFunc
	var_320_bool = 0; var_321_string = ""; // 0x13a5 PushV
	var_321_string = var_308_string; // 0x13a6 Mov
	func_5168(var_320_bool, var_321_string); // 0x13a7 NEW_2
	var_297_bool = var_320_bool; // 0x13a8 Mov
	return 10; // 0x13aa Return
	
Label_5011:
	var_326_int = 1; // 0x1393 PushI
	var_305_int = var_305_int + var_326_int; // 0x1394 Add2
	goto Label_5001; // 0x1395 Jump
}


func_5514()
{
	var_385_string = "KnowGrif"; // 0x158b PushS
	var_386_int = 1; // 0x158c PushI
	SetVariable(var_385_string, var_386_int); // 0x158d Func
	return 0; // 0x158f Return
}


func_5520()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1590 PushV
	var_83_object = Obj(); // 0x1591 PushV
	func_5787(var_83_object); // 0x1592 NEW_2
	var_82_object = var_83_object; // 0x1593 Mov
	var_90_string = "d5q01GrifWantsMoney"; // 0x1595 PushS
	var_91_string = "pt_map_grif"; // 0x1596 PushS
	var_92_int = 1; // 0x1597 PushI
	var_93_int = 515350; // 0x1598 PushI
	var_94_float = 0; // 0x1599 PushV
	func_5307(var_94_float); // 0x159a NEW_2
	AddMark(var_90_string, var_91_string, var_92_int, var_93_int, var_94_float); // 0x159c ObjFunc
	return 2; // 0x159e Return
}


func_3992(var_0_bool, var_1_object, var_2_object, var_3_object, var_1190_object, var_1191_object)
{
	var_0_bool = var_1191_object; // 0xf99 TMov
	var_1_object = var_1190_object; // 0xf9a TMov
	var_3_object = 0; // 0xf9b TMovB
	var_1196_int = 1; // 0xf9c PushI
	if(var_1196_int == 0) goto Label_4020; // 0xf9d JumpB
	var_1197_string = ""; // 0xf9e PushV
	var_1197_string = "Anger"; // 0xf9f MovS
	func_4050(var_1191_object, var_1197_string); // 0xfa0 NEW_2
	var_1205_int = 514134; // 0xfa2 PushI
	SetMessage(var_1205_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_1206_int = 514135; // 0xfa7 PushI
	var_1207_int = -1; // 0xfa8 PushI
	var_1208_int = 15349; // 0xfa9 PushI
	AddReply(var_1206_int, var_1207_int, var_1208_int); // 0xfaa TObjFunc
	var_1209_int = 514136; // 0xfac PushI
	var_1210_int = -1; // 0xfad PushI
	var_1211_int = 15350; // 0xfae PushI
	AddReply(var_1209_int, var_1210_int, var_1211_int); // 0xfaf TObjFunc
	goto Label_4020; // 0xfb1 Jump
	
Label_4020:
	var_1212_bool = 0; // 0xfb4 PushV
	func_5359(var_1212_bool); // 0xfb5 NEW_2
	if(var_1212_bool == 0) goto Label_4035; // 0xfb7 JumpB
	
Label_4024:
	lshWaitForAnimEnd(); // 0xfb8 Func
	var_1213_object = var_3_object; // 0xfba PushT
	if(var_1213_object == 0) goto Label_4029; // 0xfbb JumpB
	goto Label_4034; // 0xfbc Jump
	
Label_4034:
	goto Label_4049; // 0xfc2 Jump
	
Label_4049:
	return 0; // 0xfd1 Return
	
Label_4029:
	var_1214_string = ""; // 0xfbd PushV
	var_1214_string = var_2_object; // 0xfbe MovT
	func_5137(var_1214_string); // 0xfbf NEW_2
	goto Label_4024; // 0xfc1 Jump
	
Label_4035:
	var_1215_string = "all"; // 0xfc3 PushS
	var_1216_string = "idle"; // 0xfc4 PushS
	PlayAnimation(var_1215_string, var_1216_string); // 0xfc5 Func
	
Label_4039:
	WaitForAnimEnd(); // 0xfc7 Func
	var_1217_object = var_3_object; // 0xfc9 PushT
	if(var_1217_object == 0) goto Label_4044; // 0xfca JumpB
	goto Label_4049; // 0xfcb Jump
	
Label_4044:
	var_1218_string = "all"; // 0xfcc PushS
	var_1219_string = "idle"; // 0xfcd PushS
	PlayAnimation(var_1218_string, var_1219_string); // 0xfce Func
	goto Label_4039; // 0xfd0 Jump
}


func_5536()
{
	var_839_string = "ood5Grif2"; // 0x15a1 PushS
	var_840_int = 1; // 0x15a2 PushI
	SetVariable(var_839_string, var_840_int); // 0x15a3 Func
	return 0; // 0x15a5 Return
}


func_3489(var_0_bool, var_983_int, var_984_object)
{
	var_986_object = Obj(); var_987_bool = 0; var_988_int = 0; var_989_bool = 0; var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0; // 0xda1 PushV
	var_0_bool = var_984_object; // 0xda2 TMov
	var_994_bool = 0; var_995_object = Obj(); var_996_float = 0; // 0xda3 PushV
	var_995_object = var_984_object; // 0xda4 Mov
	var_996_float = 70.0; // 0xda5 MovF
	func_4855(var_995_object, var_996_float); // 0xda6 NEW_2
	var_997_bool = var_994_bool == 0; // 0xda8 Not
	if(var_997_bool == 0) goto Label_3500; // 0xda9 JumpB
	var_983_int = -2; // 0xdaa MovI
	return 8; // 0xdab Return
	
Label_3500:
	CreateDialog(var_990_object); // 0xdac Func
	var_998_int = 0; // 0xdae PushV
	func_5353(var_998_int); // 0xdaf NEW_2
	SetNPCName(var_998_int); // 0xdb1 ObjFunc
	var_999_int = 0; // 0xdb3 PushV
	func_5351(var_999_int); // 0xdb4 NEW_2
	SetNPCDescription(var_999_int); // 0xdb6 ObjFunc
	var_1000_string = ""; // 0xdb8 PushV
	func_5355(var_1000_string); // 0xdb9 NEW_2
	SetPhoto(var_1000_string); // 0xdbb ObjFunc
	var_1001_string = ""; // 0xdbd PushV
	func_5357(var_1001_string); // 0xdbe NEW_2
	SetPhoto2(var_1001_string); // 0xdc0 ObjFunc
	var_1002_int = 0; // 0xdc2 PushV
	func_5978(var_1002_int); // 0xdc3 NEW_2
	SetPlayerName(var_1002_int); // 0xdc5 ObjFunc
	var_992_int = -1; // 0xdc7 MovI
	IsOverrideActive(var_991_bool); // 0xdc8 Func
	var_1003_bool = var_991_bool; // 0xdca Push
	if(var_1003_bool == 0) goto Label_3534; // 0xdcb JumpB
	var_983_int = -2; // 0xdcc MovI
	return 8; // 0xdcd Return
	
Label_3534:
	DoDialog(var_990_object); // 0xdce Func
	var_1004_bool = 0; var_1005_object = Obj(); // 0xdd0 PushV
	var_1006_object = Obj(); // 0xdd1 PushV
	func_5218(var_1006_object); // 0xdd2 NEW_2
	var_1005_object = var_1006_object; // 0xdd3 Mov
	func_4940(var_1004_bool, var_1005_object); // 0xdd5 NEW_2
	var_1007_object = Obj(); var_1008_object = Obj(); // 0xdd7 PushV
	var_1007_object = var_984_object; // 0xdd8 Mov
	var_1008_object = var_990_object; // 0xdd9 Mov
	TaskCall(18); // 0xdda TaskCall
	func_3570(var_1009_object, var_1010_object, var_1011_string, var_1012_bool, var_1007_object, var_1008_object); // 0xddb NEW_2
	TaskReturn(); // 0xddc TaskReturn
	IsDialogEnd(var_993_bool); // 0xdde ObjFunc
	
Label_3552:
	var_1037_bool = var_993_bool == 0; // 0xde0 Not
	if(var_1037_bool == 0) goto Label_3559; // 0xde1 JumpB
	sync(); // 0xde2 Func
	IsDialogEnd(var_993_bool); // 0xde4 ObjFunc
	goto Label_3552; // 0xde6 Jump
	
Label_3559:
	var_1038_object = Obj(); // 0xde7 PushV
	var_1038_object = var_984_object; // 0xde8 Mov
	func_4923(); // 0xde9 NEW_2
	StopDialog(var_990_object); // 0xdeb Func
	GetReturnValue(var_992_int); // 0xded ObjFunc
	var_983_int = var_992_int; // 0xdef Mov
	return 8; // 0xdf0 Return
}


func_5542(var_485_bool)
{
	var_487_int = 0; var_488_string = ""; // 0x15a7 PushV
	var_488_string = "ood1Grif1"; // 0x15a8 MovS
	func_5239(var_487_int, var_488_string); // 0x15a9 NEW_2
	var_491_int = 0; // 0x15ab PushI
	var_492_bool = var_487_int == var_491_int; // 0x15ac Eq
	if(var_492_bool == 0) goto Label_5552; // 0x15ad JumpB
	var_485_bool = 1; // 0x15ae MovB
	return 0; // 0x15af Return
	
Label_5552:
	var_485_bool = 0; // 0x15b0 MovB
	return 0; // 0x15b1 Return
}


func_2472(var_0_bool, var_793_int, var_794_object)
{
	var_796_object = Obj(); var_797_bool = 0; var_798_int = 0; var_799_bool = 0; var_800_object = Obj(); var_801_bool = 0; var_802_int = 0; var_803_bool = 0; // 0x9a8 PushV
	var_0_bool = var_794_object; // 0x9a9 TMov
	var_804_bool = 0; var_805_object = Obj(); var_806_float = 0; // 0x9aa PushV
	var_805_object = var_794_object; // 0x9ab Mov
	var_806_float = 70.0; // 0x9ac MovF
	func_4855(var_805_object, var_806_float); // 0x9ad NEW_2
	var_807_bool = var_804_bool == 0; // 0x9af Not
	if(var_807_bool == 0) goto Label_2483; // 0x9b0 JumpB
	var_793_int = -2; // 0x9b1 MovI
	return 8; // 0x9b2 Return
	
Label_2483:
	CreateDialog(var_800_object); // 0x9b3 Func
	var_808_int = 0; // 0x9b5 PushV
	func_5353(var_808_int); // 0x9b6 NEW_2
	SetNPCName(var_808_int); // 0x9b8 ObjFunc
	var_809_int = 0; // 0x9ba PushV
	func_5351(var_809_int); // 0x9bb NEW_2
	SetNPCDescription(var_809_int); // 0x9bd ObjFunc
	var_810_string = ""; // 0x9bf PushV
	func_5355(var_810_string); // 0x9c0 NEW_2
	SetPhoto(var_810_string); // 0x9c2 ObjFunc
	var_811_string = ""; // 0x9c4 PushV
	func_5357(var_811_string); // 0x9c5 NEW_2
	SetPhoto2(var_811_string); // 0x9c7 ObjFunc
	var_812_int = 0; // 0x9c9 PushV
	func_5978(var_812_int); // 0x9ca NEW_2
	SetPlayerName(var_812_int); // 0x9cc ObjFunc
	var_802_int = -1; // 0x9ce MovI
	IsOverrideActive(var_801_bool); // 0x9cf Func
	var_813_bool = var_801_bool; // 0x9d1 Push
	if(var_813_bool == 0) goto Label_2517; // 0x9d2 JumpB
	var_793_int = -2; // 0x9d3 MovI
	return 8; // 0x9d4 Return
	
Label_2517:
	DoDialog(var_800_object); // 0x9d5 Func
	var_814_bool = 0; var_815_object = Obj(); // 0x9d7 PushV
	var_816_object = Obj(); // 0x9d8 PushV
	func_5218(var_816_object); // 0x9d9 NEW_2
	var_815_object = var_816_object; // 0x9da Mov
	func_4940(var_814_bool, var_815_object); // 0x9dc NEW_2
	var_817_object = Obj(); var_818_object = Obj(); // 0x9de PushV
	var_817_object = var_794_object; // 0x9df Mov
	var_818_object = var_800_object; // 0x9e0 Mov
	TaskCall(14); // 0x9e1 TaskCall
	func_2553(var_819_object, var_820_object, var_821_string, var_822_bool, var_817_object, var_818_object); // 0x9e2 NEW_2
	TaskReturn(); // 0x9e3 TaskReturn
	IsDialogEnd(var_803_bool); // 0x9e5 ObjFunc
	
Label_2535:
	var_915_bool = var_803_bool == 0; // 0x9e7 Not
	if(var_915_bool == 0) goto Label_2542; // 0x9e8 JumpB
	sync(); // 0x9e9 Func
	IsDialogEnd(var_803_bool); // 0x9eb ObjFunc
	goto Label_2535; // 0x9ed Jump
	
Label_2542:
	var_916_object = Obj(); // 0x9ee PushV
	var_916_object = var_794_object; // 0x9ef Mov
	func_4923(); // 0x9f0 NEW_2
	StopDialog(var_800_object); // 0x9f2 Func
	GetReturnValue(var_802_int); // 0x9f4 ObjFunc
	var_793_int = var_802_int; // 0x9f6 Mov
	return 8; // 0x9f7 Return
}


func_425(var_0_bool, var_1290_int, var_1291_object)
{
	var_1293_object = Obj(); var_1294_bool = 0; var_1295_int = 0; var_1296_bool = 0; var_1297_object = Obj(); var_1298_bool = 0; var_1299_int = 0; var_1300_bool = 0; // 0x1a9 PushV
	var_0_bool = var_1291_object; // 0x1aa TMov
	var_1301_bool = 0; var_1302_object = Obj(); var_1303_float = 0; // 0x1ab PushV
	var_1302_object = var_1291_object; // 0x1ac Mov
	var_1303_float = 70.0; // 0x1ad MovF
	func_4855(var_1302_object, var_1303_float); // 0x1ae NEW_2
	var_1304_bool = var_1301_bool == 0; // 0x1b0 Not
	if(var_1304_bool == 0) goto Label_436; // 0x1b1 JumpB
	var_1290_int = -2; // 0x1b2 MovI
	return 8; // 0x1b3 Return
	
Label_436:
	CreateDialog(var_1297_object); // 0x1b4 Func
	var_1305_int = 0; // 0x1b6 PushV
	func_5353(var_1305_int); // 0x1b7 NEW_2
	SetNPCName(var_1305_int); // 0x1b9 ObjFunc
	var_1306_int = 0; // 0x1bb PushV
	func_5351(var_1306_int); // 0x1bc NEW_2
	SetNPCDescription(var_1306_int); // 0x1be ObjFunc
	var_1307_string = ""; // 0x1c0 PushV
	func_5355(var_1307_string); // 0x1c1 NEW_2
	SetPhoto(var_1307_string); // 0x1c3 ObjFunc
	var_1308_string = ""; // 0x1c5 PushV
	func_5357(var_1308_string); // 0x1c6 NEW_2
	SetPhoto2(var_1308_string); // 0x1c8 ObjFunc
	var_1309_int = 0; // 0x1ca PushV
	func_5978(var_1309_int); // 0x1cb NEW_2
	SetPlayerName(var_1309_int); // 0x1cd ObjFunc
	var_1299_int = -1; // 0x1cf MovI
	IsOverrideActive(var_1298_bool); // 0x1d0 Func
	var_1310_bool = var_1298_bool; // 0x1d2 Push
	if(var_1310_bool == 0) goto Label_470; // 0x1d3 JumpB
	var_1290_int = -2; // 0x1d4 MovI
	return 8; // 0x1d5 Return
	
Label_470:
	DoDialog(var_1297_object); // 0x1d6 Func
	var_1311_bool = 0; var_1312_object = Obj(); // 0x1d8 PushV
	var_1313_object = Obj(); // 0x1d9 PushV
	func_5218(var_1313_object); // 0x1da NEW_2
	var_1312_object = var_1313_object; // 0x1db Mov
	func_4940(var_1311_bool, var_1312_object); // 0x1dd NEW_2
	var_1314_object = Obj(); var_1315_object = Obj(); // 0x1df PushV
	var_1314_object = var_1291_object; // 0x1e0 Mov
	var_1315_object = var_1297_object; // 0x1e1 Mov
	TaskCall(4); // 0x1e2 TaskCall
	func_506(var_1316_object, var_1317_object, var_1318_string, var_1319_bool, var_1314_object, var_1315_object); // 0x1e3 NEW_2
	TaskReturn(); // 0x1e4 TaskReturn
	IsDialogEnd(var_1300_bool); // 0x1e6 ObjFunc
	
Label_488:
	var_1347_bool = var_1300_bool == 0; // 0x1e8 Not
	if(var_1347_bool == 0) goto Label_495; // 0x1e9 JumpB
	sync(); // 0x1ea Func
	IsDialogEnd(var_1300_bool); // 0x1ec ObjFunc
	goto Label_488; // 0x1ee Jump
	
Label_495:
	var_1348_object = Obj(); // 0x1ef PushV
	var_1348_object = var_1291_object; // 0x1f0 Mov
	func_4923(); // 0x1f1 NEW_2
	StopDialog(var_1297_object); // 0x1f3 Func
	GetReturnValue(var_1299_int); // 0x1f5 ObjFunc
	var_1290_int = var_1299_int; // 0x1f7 Mov
	return 8; // 0x1f8 Return
}


func_5035(var_328_bool)
{
	var_330_string = ""; var_331_int = 0; var_332_bool = 0; var_333_int = 0; var_334_string = ""; var_335_string = ""; var_336_int = 0; var_337_bool = 0; var_338_int = 0; var_339_string = ""; // 0x13ab PushV
	var_340_string = "d"; // 0x13ac PushS
	var_341_int = 0; // 0x13ad PushV
	func_5312(var_341_int); // 0x13ae NEW_2
	var_342_int = var_340_string + var_341_int; // 0x13b0 Add
	var_343_string = "m"; // 0x13b1 PushS
	var_335_string = var_342_int + var_343_string; // 0x13b2 Add2
	var_336_int = 0; // 0x13b3 MovI
	
Label_5044:
	var_344_int = 1; // 0x13b4 PushI
	if(var_344_int == 0) goto Label_5057; // 0x13b5 JumpB
	var_345_int = 1; // 0x13b6 PushI
	var_346_int = var_336_int + var_345_int; // 0x13b7 Add
	var_347_int = var_335_string + var_346_int; // 0x13b8 Add
	HasProperty(var_347_int, var_337_bool); // 0x13b9 ObjFunc
	var_348_bool = var_337_bool == 0; // 0x13bb Not
	if(var_348_bool == 0) goto Label_5054; // 0x13bc JumpB
	goto Label_5057; // 0x13bd Jump
	
Label_5057:
	var_349_bool = var_336_int == 0; // 0x13c1 Not
	if(var_349_bool == 0) goto Label_5061; // 0x13c2 JumpB
	var_328_bool = 0; // 0x13c3 MovB
	return 10; // 0x13c4 Return
	
Label_5061:
	var_338_int = 0; // 0x13c5 MovI
	var_350_int = 1; // 0x13c6 PushI
	var_351_bool = var_336_int > var_350_int; // 0x13c7 GT
	if(var_351_bool == 0) goto Label_5067; // 0x13c8 JumpB
	irand(var_338_int, var_336_int); // 0x13c9 Func
	
Label_5067:
	var_352_int = 1; // 0x13cb PushI
	var_353_int = var_338_int + var_352_int; // 0x13cc Add
	var_354_int = var_335_string + var_353_int; // 0x13cd Add
	GetProperty(var_354_int, var_339_string); // 0x13ce ObjFunc
	var_355_bool = 0; var_356_string = ""; // 0x13d0 PushV
	var_356_string = var_339_string; // 0x13d1 Mov
	func_5168(var_355_bool, var_356_string); // 0x13d2 NEW_2
	var_328_bool = var_355_bool; // 0x13d3 Mov
	return 10; // 0x13d5 Return
	
Label_5054:
	var_357_int = 1; // 0x13be PushI
	var_336_int = var_336_int + var_357_int; // 0x13bf Add2
	goto Label_5044; // 0x13c0 Jump
}


func_5554(var_595_bool)
{
	var_597_int = 0; var_598_string = ""; // 0x15b3 PushV
	var_598_string = "ood2Grif2"; // 0x15b4 MovS
	func_5239(var_597_int, var_598_string); // 0x15b5 NEW_2
	var_599_int = 0; // 0x15b7 PushI
	var_600_bool = var_597_int == var_599_int; // 0x15b8 Eq
	if(var_600_bool == 0) goto Label_5564; // 0x15b9 JumpB
	var_595_bool = 1; // 0x15ba MovB
	return 0; // 0x15bb Return
	
Label_5564:
	var_595_bool = 0; // 0x15bc MovB
	return 0; // 0x15bd Return
}


func_5566(var_601_bool)
{
	var_603_int = 0; var_604_string = ""; // 0x15bf PushV
	var_604_string = "d2q02"; // 0x15c0 MovS
	func_5239(var_603_int, var_604_string); // 0x15c1 NEW_2
	var_605_int = 6; // 0x15c3 PushI
	var_606_bool = var_603_int == var_605_int; // 0x15c4 Eq
	if(var_606_bool == 0) goto Label_5576; // 0x15c5 JumpB
	var_601_bool = 1; // 0x15c6 MovB
	return 0; // 0x15c7 Return
	
Label_5576:
	var_601_bool = 0; // 0x15c8 MovB
	return 0; // 0x15c9 Return
}


func_5578(var_727_bool)
{
	var_729_int = 0; var_730_string = ""; // 0x15cb PushV
	var_730_string = "d4q03"; // 0x15cc MovS
	func_5239(var_729_int, var_730_string); // 0x15cd NEW_2
	var_731_int = 1; // 0x15cf PushI
	var_732_bool = var_729_int == var_731_int; // 0x15d0 Eq
	if(var_732_bool == 0) goto Label_5588; // 0x15d1 JumpB
	var_727_bool = 1; // 0x15d2 MovB
	return 0; // 0x15d3 Return
	
Label_5588:
	var_727_bool = 0; // 0x15d4 MovB
	return 0; // 0x15d5 Return
}


func_4050(var_2_object, var_1197_string)
{
	var_1198_bool = 0; // 0xfd3 PushV
	func_5359(var_1198_bool); // 0xfd4 NEW_2
	var_1199_bool = var_1198_bool == 0; // 0xfd6 Not
	if(var_1199_bool == 0) goto Label_4057; // 0xfd7 JumpB
	return 0; // 0xfd8 Return
	
Label_4057:
	var_1200_bool = var_1197_string == var_2_object; // 0xfd9 Eq
	if(var_1200_bool == 0) goto Label_4060; // 0xfda JumpB
	return 0; // 0xfdb Return
	
Label_4060:
	var_1201_string = ""; var_1202_bool = 0; // 0xfdc PushV
	var_1201_string = var_1197_string; // 0xfdd Mov
	var_1203_string = ""; // 0xfde PushS
	var_1204_bool = var_1197_string == var_1203_string; // 0xfdf Eq
	if(var_1204_bool == 0) goto Label_4067; // 0xfe0 JumpB
	var_1202_bool = 0; // 0xfe1 MovB
	goto Label_4068; // 0xfe2 Jump
	
Label_4068:
	func_5153(var_1201_string, var_1202_bool); // 0xfe4 NEW_2
	var_2_object = var_1197_string; // 0xfe6 TMov
	return 0; // 0xfe7 Return
	
Label_4067:
	var_1202_bool = 1; // 0xfe3 MovB
}


func_4564(var_0_bool)
{
	var_69_bool = 0; // 0x11d4 PushV
	func_4850(var_69_bool); // 0x11d5 NEW_2
	var_72_bool = var_69_bool == 0; // 0x11d7 Not
	if(var_72_bool == 0) goto Label_4571; // 0x11d8 JumpB
	Hold(); // 0x11d9 Func
	
Label_4571:
	GetDirection(var_0_bool); // 0x11db Func
	
Label_4573:
	func_4740(); // 0x11de NEW_2
	goto Label_4573; // 0x11e0 Jump
}


func_5590(var_733_bool)
{
	var_735_int = 0; var_736_string = ""; // 0x15d7 PushV
	var_736_string = "ood4Grif1"; // 0x15d8 MovS
	func_5239(var_735_int, var_736_string); // 0x15d9 NEW_2
	var_737_int = 0; // 0x15db PushI
	var_738_bool = var_735_int == var_737_int; // 0x15dc Eq
	if(var_738_bool == 0) goto Label_5600; // 0x15dd JumpB
	var_733_bool = 1; // 0x15de MovB
	return 0; // 0x15df Return
	
Label_5600:
	var_733_bool = 0; // 0x15e0 MovB
	return 0; // 0x15e1 Return
}


func_5078(var_514_bool, var_515_object)
{
	var_516_bool = 0; var_517_object = Obj(); var_518_float = 0; // 0x13d7 PushV
	var_517_object = var_515_object; // 0x13d8 Mov
	var_518_float = 70; // 0x13d9 MovI
	func_5086(var_517_object, var_518_float); // 0x13da NEW_2
	var_514_bool = var_516_bool; // 0x13db Mov
	return 0; // 0x13dd Return
}


func_1497(var_0_bool, var_695_int, var_696_object)
{
	var_698_object = Obj(); var_699_bool = 0; var_700_int = 0; var_701_bool = 0; var_702_object = Obj(); var_703_bool = 0; var_704_int = 0; var_705_bool = 0; // 0x5d9 PushV
	var_0_bool = var_696_object; // 0x5da TMov
	var_706_bool = 0; var_707_object = Obj(); var_708_float = 0; // 0x5db PushV
	var_707_object = var_696_object; // 0x5dc Mov
	var_708_float = 70.0; // 0x5dd MovF
	func_4855(var_707_object, var_708_float); // 0x5de NEW_2
	var_709_bool = var_706_bool == 0; // 0x5e0 Not
	if(var_709_bool == 0) goto Label_1508; // 0x5e1 JumpB
	var_695_int = -2; // 0x5e2 MovI
	return 8; // 0x5e3 Return
	
Label_1508:
	CreateDialog(var_702_object); // 0x5e4 Func
	var_710_int = 0; // 0x5e6 PushV
	func_5353(var_710_int); // 0x5e7 NEW_2
	SetNPCName(var_710_int); // 0x5e9 ObjFunc
	var_711_int = 0; // 0x5eb PushV
	func_5351(var_711_int); // 0x5ec NEW_2
	SetNPCDescription(var_711_int); // 0x5ee ObjFunc
	var_712_string = ""; // 0x5f0 PushV
	func_5355(var_712_string); // 0x5f1 NEW_2
	SetPhoto(var_712_string); // 0x5f3 ObjFunc
	var_713_string = ""; // 0x5f5 PushV
	func_5357(var_713_string); // 0x5f6 NEW_2
	SetPhoto2(var_713_string); // 0x5f8 ObjFunc
	var_714_int = 0; // 0x5fa PushV
	func_5978(var_714_int); // 0x5fb NEW_2
	SetPlayerName(var_714_int); // 0x5fd ObjFunc
	var_704_int = -1; // 0x5ff MovI
	IsOverrideActive(var_703_bool); // 0x600 Func
	var_715_bool = var_703_bool; // 0x602 Push
	if(var_715_bool == 0) goto Label_1542; // 0x603 JumpB
	var_695_int = -2; // 0x604 MovI
	return 8; // 0x605 Return
	
Label_1542:
	DoDialog(var_702_object); // 0x606 Func
	var_716_bool = 0; var_717_object = Obj(); // 0x608 PushV
	var_718_object = Obj(); // 0x609 PushV
	func_5218(var_718_object); // 0x60a NEW_2
	var_717_object = var_718_object; // 0x60b Mov
	func_4940(var_716_bool, var_717_object); // 0x60d NEW_2
	var_719_object = Obj(); var_720_object = Obj(); // 0x60f PushV
	var_719_object = var_696_object; // 0x610 Mov
	var_720_object = var_702_object; // 0x611 Mov
	TaskCall(10); // 0x612 TaskCall
	func_1578(var_721_object, var_722_object, var_723_string, var_724_bool, var_719_object, var_720_object); // 0x613 NEW_2
	TaskReturn(); // 0x614 TaskReturn
	IsDialogEnd(var_705_bool); // 0x616 ObjFunc
	
Label_1560:
	var_786_bool = var_705_bool == 0; // 0x618 Not
	if(var_786_bool == 0) goto Label_1567; // 0x619 JumpB
	sync(); // 0x61a Func
	IsDialogEnd(var_705_bool); // 0x61c ObjFunc
	goto Label_1560; // 0x61e Jump
	
Label_1567:
	var_787_object = Obj(); // 0x61f PushV
	var_787_object = var_696_object; // 0x620 Mov
	func_4923(); // 0x621 NEW_2
	StopDialog(var_702_object); // 0x623 Func
	GetReturnValue(var_704_int); // 0x625 ObjFunc
	var_695_int = var_704_int; // 0x627 Mov
	return 8; // 0x628 Return
}


func_5086(var_516_bool, var_518_float)
{
	var_519_float = 0; var_520_cvector = CVector(0,0,0); var_521_cvector = CVector(0,0,0); var_522_cvector = CVector(0,0,0); var_523_cvector = CVector(0,0,0); var_524_cvector = CVector(0,0,0); var_525_cvector = CVector(0,0,0); var_526_bool = 0; var_527_float = 0; var_528_cvector = CVector(0,0,0); var_529_cvector = CVector(0,0,0); var_530_cvector = CVector(0,0,0); var_531_cvector = CVector(0,0,0); var_532_cvector = CVector(0,0,0); var_533_cvector = CVector(0,0,0); var_534_bool = 0; // 0x13de PushV
	GetPosition(var_528_cvector); // 0x13df ObjFunc
	GetEyesHeight(var_527_float); // 0x13e1 ObjFunc
	var_535_float = GetByIndex(var_528_cvector, 1); // 0x13e3 PushE
	var_535_float = var_535_float + var_527_float; // 0x13e4 Add2
	SetByIndex(var_528_cvector, 1) = var_535_float; // 0x13e5 PopE
	GetPosition(var_529_cvector); // 0x13e6 Func
	GetEyesHeight(var_527_float); // 0x13e8 Func
	var_536_float = GetByIndex(var_529_cvector, 1); // 0x13ea PushE
	var_536_float = var_536_float + var_527_float; // 0x13eb Add2
	SetByIndex(var_529_cvector, 1) = var_536_float; // 0x13ec PopE
	var_530_cvector = var_528_cvector - var_529_cvector; // 0x13ed Sub2
	var_537_float = GetByIndex(var_530_cvector, 1); // 0x13ee PushE
	var_537_float = 0; // 0x13ef MovI
	SetByIndex(var_530_cvector, 1) = var_537_float; // 0x13f0 PopE
	var_538_int = var_530_cvector | var_530_cvector; // 0x13f1 Or
	var_539_float = sqrt(var_538_int); // 0x13f2 Sqrt
	var_530_cvector = var_530_cvector / var_530_cvector; // 0x13f3 Div2
	var_531_cvector = -var_530_cvector; // 0x13f4 Neg2
	var_540_float = var_530_cvector * var_518_float; // 0x13f5 Mult
	var_541_cvector = CVector(0.0, 10.0, 0.0); // 0x13f6 PushVec
	var_532_cvector = var_540_float - var_541_cvector; // 0x13f7 Sub2
	var_533_cvector = var_529_cvector + var_532_cvector; // 0x13f8 Add2
	IsOverrideActive(var_534_bool); // 0x13f9 Func
	var_542_bool = var_534_bool; // 0x13fb Push
	if(var_542_bool == 0) goto Label_5119; // 0x13fc JumpB
	var_516_bool = 0; // 0x13fd MovB
	return 16; // 0x13fe Return
	
Label_5119:
	StopWorld(); // 0x13ff Func
	CameraTransit(var_533_cvector, var_531_cvector); // 0x1401 Func
	var_543_float = GetByIndex(var_532_cvector, 0); // 0x1403 PushE
	var_544_float = GetByIndex(var_532_cvector, 2); // 0x1404 PushE
	Rotate(var_543_float, var_544_float); // 0x1405 Func
	CameraWaitForPlayFinish(); // 0x1407 Func
	ResumeWorld(); // 0x1409 Func
	var_516_bool = 1; // 0x140b MovB
	return 16; // 0x140c Return
}


func_5602(var_765_bool)
{
	var_767_int = 0; var_768_string = ""; // 0x15e3 PushV
	var_768_string = "ood4Grif2"; // 0x15e4 MovS
	func_5239(var_767_int, var_768_string); // 0x15e5 NEW_2
	var_769_int = 0; // 0x15e7 PushI
	var_770_bool = var_767_int == var_769_int; // 0x15e8 Eq
	if(var_770_bool == 0) goto Label_5612; // 0x15e9 JumpB
	var_765_bool = 1; // 0x15ea MovB
	return 0; // 0x15eb Return
	
Label_5612:
	var_765_bool = 0; // 0x15ec MovB
	return 0; // 0x15ed Return
}


func_4578(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x11e2 PushV
	var_95_string = "player"; // 0x11e3 PushS
	FindActor(var_94_object, var_95_string); // 0x11e4 Func
	var_96_bool = var_94_object == 0; // 0x11e6 Not
	if(var_96_bool == 0) goto Label_4586; // 0x11e7 JumpB
	var_92_bool = 0; // 0x11e8 MovB
	return 2; // 0x11e9 Return
	
Label_4586:
	var_97_bool = 0; var_98_object = Obj(); // 0x11ea PushV
	var_98_object = var_94_object; // 0x11eb Mov
	func_4841(var_98_object); // 0x11ec NEW_2
	var_92_bool = var_97_bool; // 0x11ed Mov
	return 2; // 0x11ef Return
}


func_999(var_0_bool, var_554_int, var_555_object)
{
	var_557_object = Obj(); var_558_bool = 0; var_559_int = 0; var_560_bool = 0; var_561_object = Obj(); var_562_bool = 0; var_563_int = 0; var_564_bool = 0; // 0x3e7 PushV
	var_0_bool = var_555_object; // 0x3e8 TMov
	var_565_bool = 0; var_566_object = Obj(); var_567_float = 0; // 0x3e9 PushV
	var_566_object = var_555_object; // 0x3ea Mov
	var_567_float = 70.0; // 0x3eb MovF
	func_4855(var_566_object, var_567_float); // 0x3ec NEW_2
	var_568_bool = var_565_bool == 0; // 0x3ee Not
	if(var_568_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_554_int = -2; // 0x3f0 MovI
	return 8; // 0x3f1 Return
	
Label_1010:
	CreateDialog(var_561_object); // 0x3f2 Func
	var_569_int = 0; // 0x3f4 PushV
	func_5353(var_569_int); // 0x3f5 NEW_2
	SetNPCName(var_569_int); // 0x3f7 ObjFunc
	var_570_int = 0; // 0x3f9 PushV
	func_5351(var_570_int); // 0x3fa NEW_2
	SetNPCDescription(var_570_int); // 0x3fc ObjFunc
	var_571_string = ""; // 0x3fe PushV
	func_5355(var_571_string); // 0x3ff NEW_2
	SetPhoto(var_571_string); // 0x401 ObjFunc
	var_572_string = ""; // 0x403 PushV
	func_5357(var_572_string); // 0x404 NEW_2
	SetPhoto2(var_572_string); // 0x406 ObjFunc
	var_573_int = 0; // 0x408 PushV
	func_5978(var_573_int); // 0x409 NEW_2
	SetPlayerName(var_573_int); // 0x40b ObjFunc
	var_563_int = -1; // 0x40d MovI
	IsOverrideActive(var_562_bool); // 0x40e Func
	var_574_bool = var_562_bool; // 0x410 Push
	if(var_574_bool == 0) goto Label_1044; // 0x411 JumpB
	var_554_int = -2; // 0x412 MovI
	return 8; // 0x413 Return
	
Label_1044:
	DoDialog(var_561_object); // 0x414 Func
	var_575_bool = 0; var_576_object = Obj(); // 0x416 PushV
	var_577_object = Obj(); // 0x417 PushV
	func_5218(var_577_object); // 0x418 NEW_2
	var_576_object = var_577_object; // 0x419 Mov
	func_4940(var_575_bool, var_576_object); // 0x41b NEW_2
	var_578_object = Obj(); var_579_object = Obj(); // 0x41d PushV
	var_578_object = var_555_object; // 0x41e Mov
	var_579_object = var_561_object; // 0x41f Mov
	TaskCall(8); // 0x420 TaskCall
	func_1080(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object); // 0x421 NEW_2
	TaskReturn(); // 0x422 TaskReturn
	IsDialogEnd(var_564_bool); // 0x424 ObjFunc
	
Label_1062:
	var_627_bool = var_564_bool == 0; // 0x426 Not
	if(var_627_bool == 0) goto Label_1069; // 0x427 JumpB
	sync(); // 0x428 Func
	IsDialogEnd(var_564_bool); // 0x42a ObjFunc
	goto Label_1062; // 0x42c Jump
	
Label_1069:
	var_628_object = Obj(); // 0x42d PushV
	var_628_object = var_555_object; // 0x42e Mov
	func_4923(); // 0x42f NEW_2
	StopDialog(var_561_object); // 0x431 Func
	GetReturnValue(var_563_int); // 0x433 ObjFunc
	var_554_int = var_563_int; // 0x435 Mov
	return 8; // 0x436 Return
}


func_5614(var_771_bool)
{
	var_773_int = 0; var_774_string = ""; // 0x15ef PushV
	var_774_string = "d4q03_alldead"; // 0x15f0 MovS
	func_5239(var_773_int, var_774_string); // 0x15f1 NEW_2
	var_775_int = 1; // 0x15f3 PushI
	var_776_bool = var_773_int == var_775_int; // 0x15f4 Eq
	if(var_776_bool == 0) goto Label_5624; // 0x15f5 JumpB
	var_771_bool = 1; // 0x15f6 MovB
	return 0; // 0x15f7 Return
	
Label_5624:
	var_771_bool = 0; // 0x15f8 MovB
	return 0; // 0x15f9 Return
}


func_4593(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0); // 0x11f1 PushE
	var_145_float = GetByIndex(var_0_bool, 2); // 0x11f2 PushE
	RotateAsync(var_144_float, var_145_float); // 0x11f3 Func
	return 0; // 0x11f5 Return
}


func_3570(var_0_bool, var_1_object, var_2_object, var_3_object, var_1007_object, var_1008_object)
{
	var_0_bool = var_1008_object; // 0xdf3 TMov
	var_1_object = var_1007_object; // 0xdf4 TMov
	var_3_object = 0; // 0xdf5 TMovB
	var_1013_int = 1; // 0xdf6 PushI
	if(var_1013_int == 0) goto Label_3598; // 0xdf7 JumpB
	var_1014_string = ""; // 0xdf8 PushV
	var_1014_string = "Smile"; // 0xdf9 MovS
	func_3628(var_1008_object, var_1014_string); // 0xdfa NEW_2
	var_1022_int = 514126; // 0xdfc PushI
	SetMessage(var_1022_int); // 0xdfd TObjFunc
	ClearReplies(); // 0xdff TObjFunc
	var_1023_int = 514127; // 0xe01 PushI
	var_1024_int = -1; // 0xe02 PushI
	var_1025_int = 15341; // 0xe03 PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0xe04 TObjFunc
	var_1026_int = 514128; // 0xe06 PushI
	var_1027_int = -1; // 0xe07 PushI
	var_1028_int = 15342; // 0xe08 PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0xe09 TObjFunc
	goto Label_3598; // 0xe0b Jump
	
Label_3598:
	var_1029_bool = 0; // 0xe0e PushV
	func_5359(var_1029_bool); // 0xe0f NEW_2
	if(var_1029_bool == 0) goto Label_3613; // 0xe11 JumpB
	
Label_3602:
	lshWaitForAnimEnd(); // 0xe12 Func
	var_1030_object = var_3_object; // 0xe14 PushT
	if(var_1030_object == 0) goto Label_3607; // 0xe15 JumpB
	goto Label_3612; // 0xe16 Jump
	
Label_3612:
	goto Label_3627; // 0xe1c Jump
	
Label_3627:
	return 0; // 0xe2b Return
	
Label_3607:
	var_1031_string = ""; // 0xe17 PushV
	var_1031_string = var_2_object; // 0xe18 MovT
	func_5137(var_1031_string); // 0xe19 NEW_2
	goto Label_3602; // 0xe1b Jump
	
Label_3613:
	var_1032_string = "all"; // 0xe1d PushS
	var_1033_string = "idle"; // 0xe1e PushS
	PlayAnimation(var_1032_string, var_1033_string); // 0xe1f Func
	
Label_3617:
	WaitForAnimEnd(); // 0xe21 Func
	var_1034_object = var_3_object; // 0xe23 PushT
	if(var_1034_object == 0) goto Label_3622; // 0xe24 JumpB
	goto Label_3627; // 0xe25 Jump
	
Label_3622:
	var_1035_string = "all"; // 0xe26 PushS
	var_1036_string = "idle"; // 0xe27 PushS
	PlayAnimation(var_1035_string, var_1036_string); // 0xe28 Func
	goto Label_3617; // 0xe2a Jump
}


func_4598(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0; // 0x11f6 PushV
	var_80_string = "player"; // 0x11f7 PushS
	FindActor(var_78_object, var_80_string); // 0x11f8 Func
	var_81_bool = var_78_object == 0; // 0x11fa Not
	if(var_81_bool == 0) goto Label_4606; // 0x11fb JumpB
	var_75_bool = 0; // 0x11fc MovB
	return 4; // 0x11fd Return
	
Label_4606:
	var_82_float = 0; var_83_object = Obj(); // 0x11fe PushV
	var_83_object = var_78_object; // 0x11ff Mov
	func_4816(var_83_object); // 0x1200 NEW_2
	var_90_float = 90000.0; // 0x1202 PushF
	var_91_bool = var_82_float > var_90_float; // 0x1203 GT
	if(var_91_bool == 0) goto Label_4615; // 0x1204 JumpB
	var_75_bool = 0; // 0x1205 MovB
	return 4; // 0x1206 Return
	
Label_4615:
	CanSee(var_79_bool, var_78_object); // 0x1207 Func
	var_75_bool = var_79_bool; // 0x1209 Mov
	return 4; // 0x120a Return
}


func_2553(var_0_bool, var_1_object, var_2_object, var_3_object, var_817_object, var_818_object)
{
	var_0_bool = var_818_object; // 0x9fa TMov
	var_1_object = var_817_object; // 0x9fb TMov
	var_3_object = 0; // 0x9fc TMovB
	var_823_int = 1; // 0x9fd PushI
	if(var_823_int == 0) goto Label_2678; // 0x9fe JumpB
	var_824_bool = 0; // 0x9ff PushV
	var_824_bool = 0; // 0xa00 MovB
	var_825_bool = 0; var_826_object = Obj(); // 0xa01 PushV
	var_826_object = var_1_object; // 0xa02 MovT
	func_5672(var_826_object); // 0xa03 NEW_2
	if(var_825_bool == 0) goto Label_2572; // 0xa05 JumpB
	var_831_bool = 0; var_832_object = Obj(); // 0xa06 PushV
	var_832_object = var_1_object; // 0xa07 MovT
	func_5684(var_832_object); // 0xa08 NEW_2
	if(var_831_bool == 0) goto Label_2572; // 0xa0a JumpB
	var_824_bool = 1; // 0xa0b MovB
	
Label_2572:
	if(var_824_bool == 0) goto Label_2598; // 0xa0c JumpB
	var_837_object = Obj(); var_838_object = Obj(); // 0xa0d PushV
	var_837_object = var_1_object; // 0xa0e MovT
	var_838_object = var_0_bool; // 0xa0f MovT
	func_5536(); // 0xa10 NEW_2
	var_841_string = ""; // 0xa12 PushV
	var_841_string = "Sly"; // 0xa13 MovS
	func_2708(var_818_object, var_841_string); // 0xa14 NEW_2
	var_849_int = 511720; // 0xa16 PushI
	SetMessage(var_849_int); // 0xa17 TObjFunc
	ClearReplies(); // 0xa19 TObjFunc
	var_850_int = 511721; // 0xa1b PushI
	var_851_int = 12928; // 0xa1c PushI
	var_852_int = 12927; // 0xa1d PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0xa1e TObjFunc
	var_853_int = 515755; // 0xa20 PushI
	var_854_int = 12928; // 0xa21 PushI
	var_855_int = 16821; // 0xa22 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0xa23 TObjFunc
	goto Label_2678; // 0xa25 Jump
	
Label_2678:
	var_856_bool = 0; // 0xa76 PushV
	func_5359(var_856_bool); // 0xa77 NEW_2
	if(var_856_bool == 0) goto Label_2693; // 0xa79 JumpB
	
Label_2682:
	lshWaitForAnimEnd(); // 0xa7a Func
	var_857_object = var_3_object; // 0xa7c PushT
	if(var_857_object == 0) goto Label_2687; // 0xa7d JumpB
	goto Label_2692; // 0xa7e Jump
	
Label_2692:
	goto Label_2707; // 0xa84 Jump
	
Label_2707:
	return 0; // 0xa93 Return
	
Label_2687:
	var_858_string = ""; // 0xa7f PushV
	var_858_string = var_2_object; // 0xa80 MovT
	func_5137(var_858_string); // 0xa81 NEW_2
	goto Label_2682; // 0xa83 Jump
	
Label_2693:
	var_859_string = "all"; // 0xa85 PushS
	var_860_string = "idle"; // 0xa86 PushS
	PlayAnimation(var_859_string, var_860_string); // 0xa87 Func
	
Label_2697:
	WaitForAnimEnd(); // 0xa89 Func
	var_861_object = var_3_object; // 0xa8b PushT
	if(var_861_object == 0) goto Label_2702; // 0xa8c JumpB
	goto Label_2707; // 0xa8d Jump
	
Label_2702:
	var_862_string = "all"; // 0xa8e PushS
	var_863_string = "idle"; // 0xa8f PushS
	PlayAnimation(var_862_string, var_863_string); // 0xa90 Func
	goto Label_2697; // 0xa92 Jump
	
Label_2598:
	var_864_string = ""; // 0xa26 PushV
	var_864_string = "Neutral"; // 0xa27 MovS
	func_2708(var_818_object, var_864_string); // 0xa28 NEW_2
	var_865_int = 511704; // 0xa2a PushI
	SetMessage(var_865_int); // 0xa2b TObjFunc
	ClearReplies(); // 0xa2d TObjFunc
	var_866_bool = 0; // 0xa2f PushV
	var_866_bool = 0; // 0xa30 MovB
	var_867_bool = 0; var_868_object = Obj(); // 0xa31 PushV
	var_868_object = var_1_object; // 0xa32 MovT
	func_5626(var_868_object); // 0xa33 NEW_2
	if(var_867_bool == 0) goto Label_2620; // 0xa35 JumpB
	var_873_bool = 0; var_874_object = Obj(); // 0xa36 PushV
	var_874_object = var_1_object; // 0xa37 MovT
	func_5638(var_874_object); // 0xa38 NEW_2
	if(var_873_bool == 0) goto Label_2620; // 0xa3a JumpB
	var_866_bool = 1; // 0xa3b MovB
	
Label_2620:
	if(var_866_bool == 0) goto Label_2626; // 0xa3c JumpB
	var_879_int = 511705; // 0xa3d PushI
	var_880_int = 12910; // 0xa3e PushI
	var_881_int = 12909; // 0xa3f PushI
	AddReply(var_879_int, var_880_int, var_881_int); // 0xa40 TObjFunc
	
Label_2626:
	var_882_bool = 0; // 0xa42 PushV
	var_882_bool = 0; // 0xa43 MovB
	var_883_bool = 0; // 0xa44 PushV
	var_883_bool = 0; // 0xa45 MovB
	var_884_bool = 0; // 0xa46 PushV
	var_884_bool = 0; // 0xa47 MovB
	var_885_bool = 0; var_886_object = Obj(); // 0xa48 PushV
	var_886_object = var_1_object; // 0xa49 MovT
	func_5626(var_886_object); // 0xa4a NEW_2
	if(var_885_bool == 0) goto Label_2644; // 0xa4c JumpB
	var_887_bool = 0; var_888_object = Obj(); // 0xa4d PushV
	var_888_object = var_1_object; // 0xa4e MovT
	func_5660(var_888_object); // 0xa4f NEW_2
	var_893_bool = var_887_bool == 0; // 0xa51 Not
	if(var_893_bool == 0) goto Label_2644; // 0xa52 JumpB
	var_884_bool = 1; // 0xa53 MovB
	
Label_2644:
	if(var_884_bool == 0) goto Label_2652; // 0xa54 JumpB
	var_894_bool = 0; var_895_object = Obj(); // 0xa55 PushV
	var_895_object = var_1_object; // 0xa56 MovT
	func_5638(var_895_object); // 0xa57 NEW_2
	var_896_bool = var_894_bool == 0; // 0xa59 Not
	if(var_896_bool == 0) goto Label_2652; // 0xa5a JumpB
	var_883_bool = 1; // 0xa5b MovB
	
Label_2652:
	if(var_883_bool == 0) goto Label_2659; // 0xa5c JumpB
	var_897_bool = 0; var_898_object = Obj(); // 0xa5d PushV
	var_898_object = var_1_object; // 0xa5e MovT
	func_5650(var_897_bool, var_898_object); // 0xa5f NEW_2
	if(var_897_bool == 0) goto Label_2659; // 0xa61 JumpB
	var_882_bool = 1; // 0xa62 MovB
	
Label_2659:
	if(var_882_bool == 0) goto Label_2665; // 0xa63 JumpB
	var_906_int = 511734; // 0xa64 PushI
	var_907_int = 16834; // 0xa65 PushI
	var_908_int = 12940; // 0xa66 PushI
	AddReply(var_906_int, var_907_int, var_908_int); // 0xa67 TObjFunc
	
Label_2665:
	var_909_int = 514120; // 0xa69 PushI
	var_910_int = -1; // 0xa6a PushI
	var_911_int = 15334; // 0xa6b PushI
	AddReply(var_909_int, var_910_int, var_911_int); // 0xa6c TObjFunc
	var_912_int = 511739; // 0xa6e PushI
	var_913_int = -1; // 0xa6f PushI
	var_914_int = 12945; // 0xa70 PushI
	AddReply(var_912_int, var_913_int, var_914_int); // 0xa71 TObjFunc
	goto Label_2678; // 0xa73 Jump
}


func_506(var_0_bool, var_1_object, var_2_object, var_3_object, var_1314_object, var_1315_object)
{
	var_0_bool = var_1315_object; // 0x1fb TMov
	var_1_object = var_1314_object; // 0x1fc TMov
	var_3_object = 0; // 0x1fd TMovB
	var_1320_int = 1; // 0x1fe PushI
	if(var_1320_int == 0) goto Label_539; // 0x1ff JumpB
	var_1321_string = ""; // 0x200 PushV
	var_1321_string = "Neutral"; // 0x201 MovS
	func_569(var_1315_object, var_1321_string); // 0x202 NEW_2
	var_1329_int = 535294; // 0x204 PushI
	SetMessage(var_1329_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_1330_int = 535295; // 0x209 PushI
	var_1331_int = 36973; // 0x20a PushI
	var_1332_int = 36972; // 0x20b PushI
	AddReply(var_1330_int, var_1331_int, var_1332_int); // 0x20c TObjFunc
	var_1333_int = 535302; // 0x20e PushI
	var_1334_int = -1; // 0x20f PushI
	var_1335_int = 36980; // 0x210 PushI
	AddReply(var_1333_int, var_1334_int, var_1335_int); // 0x211 TObjFunc
	var_1336_int = 535303; // 0x213 PushI
	var_1337_int = -1; // 0x214 PushI
	var_1338_int = 36981; // 0x215 PushI
	AddReply(var_1336_int, var_1337_int, var_1338_int); // 0x216 TObjFunc
	goto Label_539; // 0x218 Jump
	
Label_539:
	var_1339_bool = 0; // 0x21b PushV
	func_5359(var_1339_bool); // 0x21c NEW_2
	if(var_1339_bool == 0) goto Label_554; // 0x21e JumpB
	
Label_543:
	lshWaitForAnimEnd(); // 0x21f Func
	var_1340_object = var_3_object; // 0x221 PushT
	if(var_1340_object == 0) goto Label_548; // 0x222 JumpB
	goto Label_553; // 0x223 Jump
	
Label_553:
	goto Label_568; // 0x229 Jump
	
Label_568:
	return 0; // 0x238 Return
	
Label_548:
	var_1341_string = ""; // 0x224 PushV
	var_1341_string = var_2_object; // 0x225 MovT
	func_5137(var_1341_string); // 0x226 NEW_2
	goto Label_543; // 0x228 Jump
	
Label_554:
	var_1342_string = "all"; // 0x22a PushS
	var_1343_string = "idle"; // 0x22b PushS
	PlayAnimation(var_1342_string, var_1343_string); // 0x22c Func
	
Label_558:
	WaitForAnimEnd(); // 0x22e Func
	var_1344_object = var_3_object; // 0x230 PushT
	if(var_1344_object == 0) goto Label_563; // 0x231 JumpB
	goto Label_568; // 0x232 Jump
	
Label_563:
	var_1345_string = "all"; // 0x233 PushS
	var_1346_string = "idle"; // 0x234 PushS
	PlayAnimation(var_1345_string, var_1346_string); // 0x235 Func
	goto Label_558; // 0x237 Jump
}


