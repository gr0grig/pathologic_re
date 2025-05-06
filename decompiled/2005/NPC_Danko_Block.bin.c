task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xac PushI
	if(var_28_int == 0) goto Label_407; // 0xad JumpB
	func_3395(); // 0xaf NEW_2
	var_30_int = 35743; // 0xb1 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xb2 Eq
	if(var_31_bool == 0) goto Label_185; // 0xb3 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xb4 PushV
	var_32_object = var_1_object; // 0xb5 MovT
	var_33_object = var_0_object; // 0xb6 MovT
	func_3568(); // 0xb7 NEW_2
	
Label_185:
	var_66_int = 38363; // 0xb9 PushI
	var_67_bool = var_27_cvector == var_66_int; // 0xba Eq
	if(var_67_bool == 0) goto Label_193; // 0xbb JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xbc PushV
	var_68_object = var_1_object; // 0xbd MovT
	var_69_object = var_0_object; // 0xbe MovT
	func_3568(); // 0xbf NEW_2
	
Label_193:
	var_70_int = 35739; // 0xc1 PushI
	var_71_bool = var_26_bool == var_70_int; // 0xc2 Eq
	if(var_71_bool == 0) goto Label_226; // 0xc3 JumpB
	var_72_string = ""; // 0xc4 PushV
	var_72_string = "Neutral"; // 0xc5 MovS
	func_149(var_27_cvector, var_72_string); // 0xc6 NEW_2
	var_89_int = 534152; // 0xc8 PushI
	SetMessage(var_89_int); // 0xc9 TObjFunc
	ClearReplies(); // 0xcb TObjFunc
	var_90_bool = 0; var_91_object = Obj(); // 0xcd PushV
	var_91_object = var_1_object; // 0xce MovT
	func_3709(var_91_object); // 0xcf NEW_2
	if(var_90_bool == 0) goto Label_215; // 0xd1 JumpB
	var_98_int = 534153; // 0xd2 PushI
	var_99_int = 38340; // 0xd3 PushI
	var_100_int = 35740; // 0xd4 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xd5 TObjFunc
	
Label_215:
	var_101_int = 534154; // 0xd7 PushI
	var_102_int = -1; // 0xd8 PushI
	var_103_int = 35741; // 0xd9 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xda TObjFunc
	var_104_int = 536532; // 0xdc PushI
	var_105_int = -1; // 0xdd PushI
	var_106_int = 38339; // 0xde PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_107_int = 38340; // 0xe2 PushI
	var_108_bool = var_26_bool == var_107_int; // 0xe3 Eq
	if(var_108_bool == 0) goto Label_249; // 0xe4 JumpB
	var_109_string = ""; // 0xe5 PushV
	var_109_string = "Neutral"; // 0xe6 MovS
	func_149(var_27_cvector, var_109_string); // 0xe7 NEW_2
	var_110_int = 536533; // 0xe9 PushI
	SetMessage(var_110_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_111_int = 536534; // 0xee PushI
	var_112_int = 38342; // 0xef PushI
	var_113_int = 38341; // 0xf0 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xf1 TObjFunc
	var_114_int = 536539; // 0xf3 PushI
	var_115_int = 38347; // 0xf4 PushI
	var_116_int = 38346; // 0xf5 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_117_int = 38347; // 0xf9 PushI
	var_118_bool = var_26_bool == var_117_int; // 0xfa Eq
	if(var_118_bool == 0) goto Label_272; // 0xfb JumpB
	var_119_string = ""; // 0xfc PushV
	var_119_string = "Doubt"; // 0xfd MovS
	func_149(var_27_cvector, var_119_string); // 0xfe NEW_2
	var_120_int = 536540; // 0x100 PushI
	SetMessage(var_120_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_121_int = 536541; // 0x105 PushI
	var_122_int = 38351; // 0x106 PushI
	var_123_int = 38348; // 0x107 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x108 TObjFunc
	var_124_int = 536542; // 0x10a PushI
	var_125_int = -1; // 0x10b PushI
	var_126_int = 38349; // 0x10c PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_127_int = 38342; // 0x110 PushI
	var_128_bool = var_26_bool == var_127_int; // 0x111 Eq
	if(var_128_bool == 0) goto Label_295; // 0x112 JumpB
	var_129_string = ""; // 0x113 PushV
	var_129_string = "Neutral"; // 0x114 MovS
	func_149(var_27_cvector, var_129_string); // 0x115 NEW_2
	var_130_int = 536535; // 0x117 PushI
	SetMessage(var_130_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_131_int = 536536; // 0x11c PushI
	var_132_int = 38344; // 0x11d PushI
	var_133_int = 38343; // 0x11e PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x11f TObjFunc
	var_134_int = 536543; // 0x121 PushI
	var_135_int = 38351; // 0x122 PushI
	var_136_int = 38350; // 0x123 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x124 TObjFunc
	return 0; // 0x126 Return
	
Label_295:
	var_137_int = 38344; // 0x127 PushI
	var_138_bool = var_26_bool == var_137_int; // 0x128 Eq
	if(var_138_bool == 0) goto Label_313; // 0x129 JumpB
	var_139_string = ""; // 0x12a PushV
	var_139_string = "Neutral"; // 0x12b MovS
	func_149(var_27_cvector, var_139_string); // 0x12c NEW_2
	var_140_int = 536537; // 0x12e PushI
	SetMessage(var_140_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_141_int = 536538; // 0x133 PushI
	var_142_int = 38351; // 0x134 PushI
	var_143_int = 38345; // 0x135 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_144_int = 38351; // 0x139 PushI
	var_145_bool = var_26_bool == var_144_int; // 0x13a Eq
	if(var_145_bool == 0) goto Label_336; // 0x13b JumpB
	var_146_string = ""; // 0x13c PushV
	var_146_string = "Neutral"; // 0x13d MovS
	func_149(var_27_cvector, var_146_string); // 0x13e NEW_2
	var_147_int = 536544; // 0x140 PushI
	SetMessage(var_147_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_148_int = 536545; // 0x145 PushI
	var_149_int = 38359; // 0x146 PushI
	var_150_int = 38352; // 0x147 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x148 TObjFunc
	var_151_int = 536546; // 0x14a PushI
	var_152_int = 38358; // 0x14b PushI
	var_153_int = 38355; // 0x14c PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_154_int = 38358; // 0x150 PushI
	var_155_bool = var_26_bool == var_154_int; // 0x151 Eq
	if(var_155_bool == 0) goto Label_354; // 0x152 JumpB
	var_156_string = ""; // 0x153 PushV
	var_156_string = "Neutral"; // 0x154 MovS
	func_149(var_27_cvector, var_156_string); // 0x155 NEW_2
	var_157_int = 536548; // 0x157 PushI
	SetMessage(var_157_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_158_int = 536550; // 0x15c PushI
	var_159_int = 35742; // 0x15d PushI
	var_160_int = 38360; // 0x15e PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_161_int = 38359; // 0x162 PushI
	var_162_bool = var_26_bool == var_161_int; // 0x163 Eq
	if(var_162_bool == 0) goto Label_372; // 0x164 JumpB
	var_163_string = ""; // 0x165 PushV
	var_163_string = "Neutral"; // 0x166 MovS
	func_149(var_27_cvector, var_163_string); // 0x167 NEW_2
	var_164_int = 536549; // 0x169 PushI
	SetMessage(var_164_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_165_int = 536551; // 0x16e PushI
	var_166_int = 35742; // 0x16f PushI
	var_167_int = 38361; // 0x170 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_168_int = 35742; // 0x174 PushI
	var_169_bool = var_26_bool == var_168_int; // 0x175 Eq
	if(var_169_bool == 0) goto Label_395; // 0x176 JumpB
	var_170_string = ""; // 0x177 PushV
	var_170_string = "Doubt"; // 0x178 MovS
	func_149(var_27_cvector, var_170_string); // 0x179 NEW_2
	var_171_int = 534155; // 0x17b PushI
	SetMessage(var_171_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_172_int = 534156; // 0x180 PushI
	var_173_int = -1; // 0x181 PushI
	var_174_int = 35743; // 0x182 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x183 TObjFunc
	var_175_int = 536552; // 0x185 PushI
	var_176_int = -1; // 0x186 PushI
	var_177_int = 38363; // 0x187 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_3_string = 1; // 0x18b TMovB
	var_178_bool = 0; // 0x18c PushV
	func_3534(var_178_bool); // 0x18d NEW_2
	if(var_178_bool == 0) goto Label_403; // 0x18f JumpB
	lshStopAnimation(); // 0x190 Func
	goto Label_405; // 0x192 Jump
	
Label_405:
	return 0; // 0x195 Return
	
Label_403:
	StopAnimation(); // 0x193 Func
	
Label_407:
	return 0; // 0x197 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x271 PushI
	if(var_28_int == 0) goto Label_881; // 0x272 JumpB
	func_3395(); // 0x274 NEW_2
	var_30_int = 37192; // 0x276 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x277 Eq
	if(var_31_bool == 0) goto Label_708; // 0x278 JumpB
	var_32_bool = 0; // 0x279 PushV
	var_32_bool = 0; // 0x27a MovB
	var_33_bool = 0; var_34_object = Obj(); // 0x27b PushV
	var_34_object = var_1_object; // 0x27c MovT
	func_3721(var_34_object); // 0x27d NEW_2
	if(var_33_bool == 0) goto Label_647; // 0x27f JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0x280 PushV
	var_42_object = var_1_object; // 0x281 MovT
	func_3663(var_41_bool, var_42_object); // 0x282 NEW_2
	var_52_bool = var_41_bool == 0; // 0x284 Not
	if(var_52_bool == 0) goto Label_647; // 0x285 JumpB
	var_32_bool = 1; // 0x286 MovB
	
Label_647:
	if(var_32_bool == 0) goto Label_668; // 0x287 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x288 PushV
	var_53_object = var_1_object; // 0x289 MovT
	var_54_object = var_0_object; // 0x28a MovT
	func_3583(); // 0x28b NEW_2
	var_57_string = ""; // 0x28d PushV
	var_57_string = "Neutral"; // 0x28e MovS
	func_602(var_27_cvector, var_57_string); // 0x28f NEW_2
	var_74_int = 535510; // 0x291 PushI
	SetMessage(var_74_int); // 0x292 TObjFunc
	ClearReplies(); // 0x294 TObjFunc
	var_75_int = 535511; // 0x296 PushI
	var_76_int = 37194; // 0x297 PushI
	var_77_int = 37193; // 0x298 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x299 TObjFunc
	return 0; // 0x29b Return
	
Label_668:
	var_78_bool = 0; var_79_object = Obj(); // 0x29c PushV
	var_79_object = var_1_object; // 0x29d MovT
	func_3663(var_78_bool, var_79_object); // 0x29e NEW_2
	if(var_78_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_80_string = ""; // 0x2a1 PushV
	var_80_string = "Neutral"; // 0x2a2 MovS
	func_602(var_27_cvector, var_80_string); // 0x2a3 NEW_2
	var_81_int = 535528; // 0x2a5 PushI
	SetMessage(var_81_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_82_int = 535529; // 0x2aa PushI
	var_83_int = -1; // 0x2ab PushI
	var_84_int = 37212; // 0x2ac PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x2ad TObjFunc
	var_85_int = 535530; // 0x2af PushI
	var_86_int = -1; // 0x2b0 PushI
	var_87_int = 37213; // 0x2b1 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_88_string = ""; // 0x2b5 PushV
	var_88_string = "Neutral"; // 0x2b6 MovS
	func_602(var_27_cvector, var_88_string); // 0x2b7 NEW_2
	var_89_int = 535531; // 0x2b9 PushI
	SetMessage(var_89_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_90_int = 535539; // 0x2be PushI
	var_91_int = -1; // 0x2bf PushI
	var_92_int = 37222; // 0x2c0 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_93_int = 37194; // 0x2c4 PushI
	var_94_bool = var_26_bool == var_93_int; // 0x2c5 Eq
	if(var_94_bool == 0) goto Label_731; // 0x2c6 JumpB
	var_95_string = ""; // 0x2c7 PushV
	var_95_string = "Neutral"; // 0x2c8 MovS
	func_602(var_27_cvector, var_95_string); // 0x2c9 NEW_2
	var_96_int = 535512; // 0x2cb PushI
	SetMessage(var_96_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_97_int = 535513; // 0x2d0 PushI
	var_98_int = 37196; // 0x2d1 PushI
	var_99_int = 37195; // 0x2d2 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x2d3 TObjFunc
	var_100_int = 535525; // 0x2d5 PushI
	var_101_int = 37208; // 0x2d6 PushI
	var_102_int = 37207; // 0x2d7 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x2d8 TObjFunc
	return 0; // 0x2da Return
	
Label_731:
	var_103_int = 37208; // 0x2db PushI
	var_104_bool = var_26_bool == var_103_int; // 0x2dc Eq
	if(var_104_bool == 0) goto Label_754; // 0x2dd JumpB
	var_105_string = ""; // 0x2de PushV
	var_105_string = "Neutral"; // 0x2df MovS
	func_602(var_27_cvector, var_105_string); // 0x2e0 NEW_2
	var_106_int = 535526; // 0x2e2 PushI
	SetMessage(var_106_int); // 0x2e3 TObjFunc
	ClearReplies(); // 0x2e5 TObjFunc
	var_107_int = 535527; // 0x2e7 PushI
	var_108_int = 37196; // 0x2e8 PushI
	var_109_int = 37209; // 0x2e9 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x2ea TObjFunc
	var_110_int = 539998; // 0x2ec PushI
	var_111_int = 41968; // 0x2ed PushI
	var_112_int = 41967; // 0x2ee PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x2ef TObjFunc
	return 0; // 0x2f1 Return
	
Label_754:
	var_113_int = 41968; // 0x2f2 PushI
	var_114_bool = var_26_bool == var_113_int; // 0x2f3 Eq
	if(var_114_bool == 0) goto Label_777; // 0x2f4 JumpB
	var_115_string = ""; // 0x2f5 PushV
	var_115_string = "Doubt"; // 0x2f6 MovS
	func_602(var_27_cvector, var_115_string); // 0x2f7 NEW_2
	var_116_int = 539999; // 0x2f9 PushI
	SetMessage(var_116_int); // 0x2fa TObjFunc
	ClearReplies(); // 0x2fc TObjFunc
	var_117_int = 540000; // 0x2fe PushI
	var_118_int = 37196; // 0x2ff PushI
	var_119_int = 41969; // 0x300 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x301 TObjFunc
	var_120_int = 540001; // 0x303 PushI
	var_121_int = 37196; // 0x304 PushI
	var_122_int = 41970; // 0x305 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x306 TObjFunc
	return 0; // 0x308 Return
	
Label_777:
	var_123_int = 37196; // 0x309 PushI
	var_124_bool = var_26_bool == var_123_int; // 0x30a Eq
	if(var_124_bool == 0) goto Label_800; // 0x30b JumpB
	var_125_string = ""; // 0x30c PushV
	var_125_string = "Neutral"; // 0x30d MovS
	func_602(var_27_cvector, var_125_string); // 0x30e NEW_2
	var_126_int = 535514; // 0x310 PushI
	SetMessage(var_126_int); // 0x311 TObjFunc
	ClearReplies(); // 0x313 TObjFunc
	var_127_int = 535515; // 0x315 PushI
	var_128_int = 37198; // 0x316 PushI
	var_129_int = 37197; // 0x317 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x318 TObjFunc
	var_130_int = 535524; // 0x31a PushI
	var_131_int = -1; // 0x31b PushI
	var_132_int = 37206; // 0x31c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x31d TObjFunc
	return 0; // 0x31f Return
	
Label_800:
	var_133_int = 37198; // 0x320 PushI
	var_134_bool = var_26_bool == var_133_int; // 0x321 Eq
	if(var_134_bool == 0) goto Label_823; // 0x322 JumpB
	var_135_string = ""; // 0x323 PushV
	var_135_string = "Neutral"; // 0x324 MovS
	func_602(var_27_cvector, var_135_string); // 0x325 NEW_2
	var_136_int = 535516; // 0x327 PushI
	SetMessage(var_136_int); // 0x328 TObjFunc
	ClearReplies(); // 0x32a TObjFunc
	var_137_int = 535517; // 0x32c PushI
	var_138_int = 37200; // 0x32d PushI
	var_139_int = 37199; // 0x32e PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x32f TObjFunc
	var_140_int = 535523; // 0x331 PushI
	var_141_int = -1; // 0x332 PushI
	var_142_int = 37205; // 0x333 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x334 TObjFunc
	return 0; // 0x336 Return
	
Label_823:
	var_143_int = 37200; // 0x337 PushI
	var_144_bool = var_26_bool == var_143_int; // 0x338 Eq
	if(var_144_bool == 0) goto Label_846; // 0x339 JumpB
	var_145_string = ""; // 0x33a PushV
	var_145_string = "Neutral"; // 0x33b MovS
	func_602(var_27_cvector, var_145_string); // 0x33c NEW_2
	var_146_int = 535518; // 0x33e PushI
	SetMessage(var_146_int); // 0x33f TObjFunc
	ClearReplies(); // 0x341 TObjFunc
	var_147_int = 535519; // 0x343 PushI
	var_148_int = 37202; // 0x344 PushI
	var_149_int = 37201; // 0x345 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x346 TObjFunc
	var_150_int = 542998; // 0x348 PushI
	var_151_int = -1; // 0x349 PushI
	var_152_int = 45446; // 0x34a PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x34b TObjFunc
	return 0; // 0x34d Return
	
Label_846:
	var_153_int = 37202; // 0x34e PushI
	var_154_bool = var_26_bool == var_153_int; // 0x34f Eq
	if(var_154_bool == 0) goto Label_869; // 0x350 JumpB
	var_155_string = ""; // 0x351 PushV
	var_155_string = "Neutral"; // 0x352 MovS
	func_602(var_27_cvector, var_155_string); // 0x353 NEW_2
	var_156_int = 535520; // 0x355 PushI
	SetMessage(var_156_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_157_int = 535521; // 0x35a PushI
	var_158_int = -1; // 0x35b PushI
	var_159_int = 37203; // 0x35c PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x35d TObjFunc
	var_160_int = 535522; // 0x35f PushI
	var_161_int = -1; // 0x360 PushI
	var_162_int = 37204; // 0x361 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x362 TObjFunc
	return 0; // 0x364 Return
	
Label_869:
	var_3_string = 1; // 0x365 TMovB
	var_163_bool = 0; // 0x366 PushV
	func_3534(var_163_bool); // 0x367 NEW_2
	if(var_163_bool == 0) goto Label_877; // 0x369 JumpB
	lshStopAnimation(); // 0x36a Func
	goto Label_879; // 0x36c Jump
	
Label_879:
	return 0; // 0x36f Return
	
Label_877:
	StopAnimation(); // 0x36d Func
	
Label_881:
	return 0; // 0x371 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x44e PushI
	if(var_28_int == 0) goto Label_1865; // 0x44f JumpB
	func_3395(); // 0x451 NEW_2
	var_30_int = 15110; // 0x453 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x454 Eq
	if(var_31_bool == 0) goto Label_1115; // 0x455 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x456 PushV
	var_32_object = var_1_object; // 0x457 MovT
	var_33_object = var_0_object; // 0x458 MovT
	func_3542(); // 0x459 NEW_2
	
Label_1115:
	var_36_int = 15137; // 0x45b PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x45c Eq
	if(var_37_bool == 0) goto Label_1123; // 0x45d JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x45e PushV
	var_38_object = var_1_object; // 0x45f MovT
	var_39_object = var_0_object; // 0x460 MovT
	func_3601(); // 0x461 NEW_2
	
Label_1123:
	var_42_int = 15149; // 0x463 PushI
	var_43_bool = var_27_cvector == var_42_int; // 0x464 Eq
	if(var_43_bool == 0) goto Label_1141; // 0x465 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x466 PushV
	var_44_object = var_1_object; // 0x467 MovT
	var_45_object = var_0_object; // 0x468 MovT
	func_3607(var_45_object); // 0x469 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x46b PushV
	var_68_object = var_1_object; // 0x46c MovT
	var_69_object = var_0_object; // 0x46d MovT
	func_3536(); // 0x46e NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x470 PushV
	var_72_object = var_1_object; // 0x471 MovT
	var_73_object = var_0_object; // 0x472 MovT
	func_3646(var_73_object); // 0x473 NEW_2
	
Label_1141:
	var_83_int = 15150; // 0x475 PushI
	var_84_bool = var_27_cvector == var_83_int; // 0x476 Eq
	if(var_84_bool == 0) goto Label_1159; // 0x477 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x478 PushV
	var_85_object = var_1_object; // 0x479 MovT
	var_86_object = var_0_object; // 0x47a MovT
	func_3607(var_86_object); // 0x47b NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x47d PushV
	var_87_object = var_1_object; // 0x47e MovT
	var_88_object = var_0_object; // 0x47f MovT
	func_3536(); // 0x480 NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0x482 PushV
	var_89_object = var_1_object; // 0x483 MovT
	var_90_object = var_0_object; // 0x484 MovT
	func_3646(var_90_object); // 0x485 NEW_2
	
Label_1159:
	var_91_int = 15155; // 0x487 PushI
	var_92_bool = var_27_cvector == var_91_int; // 0x488 Eq
	if(var_92_bool == 0) goto Label_1167; // 0x489 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x48a PushV
	var_93_object = var_1_object; // 0x48b MovT
	var_94_object = var_0_object; // 0x48c MovT
	func_3657(); // 0x48d NEW_2
	
Label_1167:
	var_97_int = 35071; // 0x48f PushI
	var_98_bool = var_27_cvector == var_97_int; // 0x490 Eq
	if(var_98_bool == 0) goto Label_1180; // 0x491 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x492 PushV
	var_99_object = var_1_object; // 0x493 MovT
	var_100_object = var_0_object; // 0x494 MovT
	func_3548(); // 0x495 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x497 PushV
	var_132_object = var_1_object; // 0x498 MovT
	var_133_object = var_0_object; // 0x499 MovT
	func_3562(); // 0x49a NEW_2
	
Label_1180:
	var_136_int = 15109; // 0x49c PushI
	var_137_bool = var_26_bool == var_136_int; // 0x49d Eq
	if(var_137_bool == 0) goto Label_1261; // 0x49e JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x49f PushV
	var_138_object = var_1_object; // 0x4a0 MovT
	var_139_object = var_0_object; // 0x4a1 MovT
	func_3595(); // 0x4a2 NEW_2
	var_142_string = ""; // 0x4a4 PushV
	var_142_string = "Neutral"; // 0x4a5 MovS
	func_1079(var_27_cvector, var_142_string); // 0x4a6 NEW_2
	var_159_int = 513882; // 0x4a8 PushI
	SetMessage(var_159_int); // 0x4a9 TObjFunc
	ClearReplies(); // 0x4ab TObjFunc
	var_160_bool = 0; // 0x4ad PushV
	var_160_bool = 0; // 0x4ae MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x4af PushV
	var_162_object = var_1_object; // 0x4b0 MovT
	func_3673(var_162_object); // 0x4b1 NEW_2
	if(var_161_bool == 0) goto Label_1210; // 0x4b3 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x4b4 PushV
	var_170_object = var_1_object; // 0x4b5 MovT
	func_3685(var_170_object); // 0x4b6 NEW_2
	if(var_169_bool == 0) goto Label_1210; // 0x4b8 JumpB
	var_160_bool = 1; // 0x4b9 MovB
	
Label_1210:
	if(var_160_bool == 0) goto Label_1216; // 0x4ba JumpB
	var_175_int = 513883; // 0x4bb PushI
	var_176_int = 15111; // 0x4bc PushI
	var_177_int = 15110; // 0x4bd PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x4be TObjFunc
	
Label_1216:
	var_178_bool = 0; // 0x4c0 PushV
	var_178_bool = 0; // 0x4c1 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x4c2 PushV
	var_180_object = var_1_object; // 0x4c3 MovT
	func_3733(var_180_object); // 0x4c4 NEW_2
	if(var_179_bool == 0) goto Label_1229; // 0x4c6 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x4c7 PushV
	var_186_object = var_1_object; // 0x4c8 MovT
	func_3745(var_186_object); // 0x4c9 NEW_2
	if(var_185_bool == 0) goto Label_1229; // 0x4cb JumpB
	var_178_bool = 1; // 0x4cc MovB
	
Label_1229:
	if(var_178_bool == 0) goto Label_1235; // 0x4cd JumpB
	var_191_int = 513906; // 0x4ce PushI
	var_192_int = 15138; // 0x4cf PushI
	var_193_int = 15137; // 0x4d0 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x4d1 TObjFunc
	
Label_1235:
	var_194_bool = 0; var_195_object = Obj(); // 0x4d3 PushV
	var_195_object = var_1_object; // 0x4d4 MovT
	func_3829(var_195_object); // 0x4d5 NEW_2
	if(var_194_bool == 0) goto Label_1245; // 0x4d7 JumpB
	var_200_int = 513924; // 0x4d8 PushI
	var_201_int = 15156; // 0x4d9 PushI
	var_202_int = 15155; // 0x4da PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x4db TObjFunc
	
Label_1245:
	var_203_bool = 0; var_204_object = Obj(); // 0x4dd PushV
	var_204_object = var_1_object; // 0x4de MovT
	func_3697(var_204_object); // 0x4df NEW_2
	if(var_203_bool == 0) goto Label_1255; // 0x4e1 JumpB
	var_209_int = 533537; // 0x4e2 PushI
	var_210_int = 35070; // 0x4e3 PushI
	var_211_int = 35069; // 0x4e4 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x4e5 TObjFunc
	
Label_1255:
	var_212_int = 513947; // 0x4e7 PushI
	var_213_int = -1; // 0x4e8 PushI
	var_214_int = 15182; // 0x4e9 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x4ea TObjFunc
	return 0; // 0x4ec Return
	
Label_1261:
	var_215_int = 35070; // 0x4ed PushI
	var_216_bool = var_26_bool == var_215_int; // 0x4ee Eq
	if(var_216_bool == 0) goto Label_1284; // 0x4ef JumpB
	var_217_string = ""; // 0x4f0 PushV
	var_217_string = "Neutral"; // 0x4f1 MovS
	func_1079(var_27_cvector, var_217_string); // 0x4f2 NEW_2
	var_218_int = 533538; // 0x4f4 PushI
	SetMessage(var_218_int); // 0x4f5 TObjFunc
	ClearReplies(); // 0x4f7 TObjFunc
	var_219_int = 536553; // 0x4f9 PushI
	var_220_int = 38366; // 0x4fa PushI
	var_221_int = 38365; // 0x4fb PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x4fc TObjFunc
	var_222_int = 536557; // 0x4fe PushI
	var_223_int = -1; // 0x4ff PushI
	var_224_int = 38369; // 0x500 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x501 TObjFunc
	return 0; // 0x503 Return
	
Label_1284:
	var_225_int = 38366; // 0x504 PushI
	var_226_bool = var_26_bool == var_225_int; // 0x505 Eq
	if(var_226_bool == 0) goto Label_1307; // 0x506 JumpB
	var_227_string = ""; // 0x507 PushV
	var_227_string = "Neutral"; // 0x508 MovS
	func_1079(var_27_cvector, var_227_string); // 0x509 NEW_2
	var_228_int = 536554; // 0x50b PushI
	SetMessage(var_228_int); // 0x50c TObjFunc
	ClearReplies(); // 0x50e TObjFunc
	var_229_int = 536555; // 0x510 PushI
	var_230_int = 38368; // 0x511 PushI
	var_231_int = 38367; // 0x512 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x513 TObjFunc
	var_232_int = 536558; // 0x515 PushI
	var_233_int = 38368; // 0x516 PushI
	var_234_int = 38370; // 0x517 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_235_int = 38368; // 0x51b PushI
	var_236_bool = var_26_bool == var_235_int; // 0x51c Eq
	if(var_236_bool == 0) goto Label_1325; // 0x51d JumpB
	var_237_string = ""; // 0x51e PushV
	var_237_string = "Neutral"; // 0x51f MovS
	func_1079(var_27_cvector, var_237_string); // 0x520 NEW_2
	var_238_int = 536556; // 0x522 PushI
	SetMessage(var_238_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_239_int = 536559; // 0x527 PushI
	var_240_int = 38372; // 0x528 PushI
	var_241_int = 38371; // 0x529 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x52a TObjFunc
	return 0; // 0x52c Return
	
Label_1325:
	var_242_int = 38372; // 0x52d PushI
	var_243_bool = var_26_bool == var_242_int; // 0x52e Eq
	if(var_243_bool == 0) goto Label_1343; // 0x52f JumpB
	var_244_string = ""; // 0x530 PushV
	var_244_string = "Neutral"; // 0x531 MovS
	func_1079(var_27_cvector, var_244_string); // 0x532 NEW_2
	var_245_int = 536560; // 0x534 PushI
	SetMessage(var_245_int); // 0x535 TObjFunc
	ClearReplies(); // 0x537 TObjFunc
	var_246_int = 533539; // 0x539 PushI
	var_247_int = -1; // 0x53a PushI
	var_248_int = 35071; // 0x53b PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x53c TObjFunc
	return 0; // 0x53e Return
	
Label_1343:
	var_249_int = 15156; // 0x53f PushI
	var_250_bool = var_26_bool == var_249_int; // 0x540 Eq
	if(var_250_bool == 0) goto Label_1366; // 0x541 JumpB
	var_251_string = ""; // 0x542 PushV
	var_251_string = "Neutral"; // 0x543 MovS
	func_1079(var_27_cvector, var_251_string); // 0x544 NEW_2
	var_252_int = 513925; // 0x546 PushI
	SetMessage(var_252_int); // 0x547 TObjFunc
	ClearReplies(); // 0x549 TObjFunc
	var_253_int = 513926; // 0x54b PushI
	var_254_int = 15158; // 0x54c PushI
	var_255_int = 15157; // 0x54d PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x54e TObjFunc
	var_256_int = 513946; // 0x550 PushI
	var_257_int = 15158; // 0x551 PushI
	var_258_int = 15180; // 0x552 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x553 TObjFunc
	return 0; // 0x555 Return
	
Label_1366:
	var_259_int = 15158; // 0x556 PushI
	var_260_bool = var_26_bool == var_259_int; // 0x557 Eq
	if(var_260_bool == 0) goto Label_1389; // 0x558 JumpB
	var_261_string = ""; // 0x559 PushV
	var_261_string = "Untrust"; // 0x55a MovS
	func_1079(var_27_cvector, var_261_string); // 0x55b NEW_2
	var_262_int = 513927; // 0x55d PushI
	SetMessage(var_262_int); // 0x55e TObjFunc
	ClearReplies(); // 0x560 TObjFunc
	var_263_int = 513928; // 0x562 PushI
	var_264_int = 15160; // 0x563 PushI
	var_265_int = 15159; // 0x564 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x565 TObjFunc
	var_266_int = 513945; // 0x567 PushI
	var_267_int = 15160; // 0x568 PushI
	var_268_int = 15178; // 0x569 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x56a TObjFunc
	return 0; // 0x56c Return
	
Label_1389:
	var_269_int = 15160; // 0x56d PushI
	var_270_bool = var_26_bool == var_269_int; // 0x56e Eq
	if(var_270_bool == 0) goto Label_1412; // 0x56f JumpB
	var_271_string = ""; // 0x570 PushV
	var_271_string = "Untrust"; // 0x571 MovS
	func_1079(var_27_cvector, var_271_string); // 0x572 NEW_2
	var_272_int = 513929; // 0x574 PushI
	SetMessage(var_272_int); // 0x575 TObjFunc
	ClearReplies(); // 0x577 TObjFunc
	var_273_int = 513930; // 0x579 PushI
	var_274_int = 15162; // 0x57a PushI
	var_275_int = 15161; // 0x57b PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x57c TObjFunc
	var_276_int = 513944; // 0x57e PushI
	var_277_int = 15162; // 0x57f PushI
	var_278_int = 15176; // 0x580 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x581 TObjFunc
	return 0; // 0x583 Return
	
Label_1412:
	var_279_int = 15162; // 0x584 PushI
	var_280_bool = var_26_bool == var_279_int; // 0x585 Eq
	if(var_280_bool == 0) goto Label_1435; // 0x586 JumpB
	var_281_string = ""; // 0x587 PushV
	var_281_string = "Neutral"; // 0x588 MovS
	func_1079(var_27_cvector, var_281_string); // 0x589 NEW_2
	var_282_int = 513931; // 0x58b PushI
	SetMessage(var_282_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_283_int = 513932; // 0x590 PushI
	var_284_int = 15164; // 0x591 PushI
	var_285_int = 15163; // 0x592 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x593 TObjFunc
	var_286_int = 513941; // 0x595 PushI
	var_287_int = 15173; // 0x596 PushI
	var_288_int = 15172; // 0x597 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x598 TObjFunc
	return 0; // 0x59a Return
	
Label_1435:
	var_289_int = 15173; // 0x59b PushI
	var_290_bool = var_26_bool == var_289_int; // 0x59c Eq
	if(var_290_bool == 0) goto Label_1453; // 0x59d JumpB
	var_291_string = ""; // 0x59e PushV
	var_291_string = "Neutral"; // 0x59f MovS
	func_1079(var_27_cvector, var_291_string); // 0x5a0 NEW_2
	var_292_int = 513942; // 0x5a2 PushI
	SetMessage(var_292_int); // 0x5a3 TObjFunc
	ClearReplies(); // 0x5a5 TObjFunc
	var_293_int = 513943; // 0x5a7 PushI
	var_294_int = 15166; // 0x5a8 PushI
	var_295_int = 15174; // 0x5a9 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x5aa TObjFunc
	return 0; // 0x5ac Return
	
Label_1453:
	var_296_int = 15164; // 0x5ad PushI
	var_297_bool = var_26_bool == var_296_int; // 0x5ae Eq
	if(var_297_bool == 0) goto Label_1471; // 0x5af JumpB
	var_298_string = ""; // 0x5b0 PushV
	var_298_string = "Neutral"; // 0x5b1 MovS
	func_1079(var_27_cvector, var_298_string); // 0x5b2 NEW_2
	var_299_int = 513933; // 0x5b4 PushI
	SetMessage(var_299_int); // 0x5b5 TObjFunc
	ClearReplies(); // 0x5b7 TObjFunc
	var_300_int = 513934; // 0x5b9 PushI
	var_301_int = 15166; // 0x5ba PushI
	var_302_int = 15165; // 0x5bb PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x5bc TObjFunc
	return 0; // 0x5be Return
	
Label_1471:
	var_303_int = 15166; // 0x5bf PushI
	var_304_bool = var_26_bool == var_303_int; // 0x5c0 Eq
	if(var_304_bool == 0) goto Label_1489; // 0x5c1 JumpB
	var_305_string = ""; // 0x5c2 PushV
	var_305_string = "Untrust"; // 0x5c3 MovS
	func_1079(var_27_cvector, var_305_string); // 0x5c4 NEW_2
	var_306_int = 513935; // 0x5c6 PushI
	SetMessage(var_306_int); // 0x5c7 TObjFunc
	ClearReplies(); // 0x5c9 TObjFunc
	var_307_int = 513936; // 0x5cb PushI
	var_308_int = 15168; // 0x5cc PushI
	var_309_int = 15167; // 0x5cd PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x5ce TObjFunc
	return 0; // 0x5d0 Return
	
Label_1489:
	var_310_int = 15168; // 0x5d1 PushI
	var_311_bool = var_26_bool == var_310_int; // 0x5d2 Eq
	if(var_311_bool == 0) goto Label_1507; // 0x5d3 JumpB
	var_312_string = ""; // 0x5d4 PushV
	var_312_string = "Neutral"; // 0x5d5 MovS
	func_1079(var_27_cvector, var_312_string); // 0x5d6 NEW_2
	var_313_int = 513937; // 0x5d8 PushI
	SetMessage(var_313_int); // 0x5d9 TObjFunc
	ClearReplies(); // 0x5db TObjFunc
	var_314_int = 513938; // 0x5dd PushI
	var_315_int = 15170; // 0x5de PushI
	var_316_int = 15169; // 0x5df PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x5e0 TObjFunc
	return 0; // 0x5e2 Return
	
Label_1507:
	var_317_int = 15170; // 0x5e3 PushI
	var_318_bool = var_26_bool == var_317_int; // 0x5e4 Eq
	if(var_318_bool == 0) goto Label_1525; // 0x5e5 JumpB
	var_319_string = ""; // 0x5e6 PushV
	var_319_string = "Neutral"; // 0x5e7 MovS
	func_1079(var_27_cvector, var_319_string); // 0x5e8 NEW_2
	var_320_int = 513939; // 0x5ea PushI
	SetMessage(var_320_int); // 0x5eb TObjFunc
	ClearReplies(); // 0x5ed TObjFunc
	var_321_int = 513940; // 0x5ef PushI
	var_322_int = -1; // 0x5f0 PushI
	var_323_int = 15171; // 0x5f1 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_324_int = 15138; // 0x5f5 PushI
	var_325_bool = var_26_bool == var_324_int; // 0x5f6 Eq
	if(var_325_bool == 0) goto Label_1543; // 0x5f7 JumpB
	var_326_string = ""; // 0x5f8 PushV
	var_326_string = "Untrust"; // 0x5f9 MovS
	func_1079(var_27_cvector, var_326_string); // 0x5fa NEW_2
	var_327_int = 513907; // 0x5fc PushI
	SetMessage(var_327_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_328_int = 513908; // 0x601 PushI
	var_329_int = 15140; // 0x602 PushI
	var_330_int = 15139; // 0x603 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x604 TObjFunc
	return 0; // 0x606 Return
	
Label_1543:
	var_331_int = 15140; // 0x607 PushI
	var_332_bool = var_26_bool == var_331_int; // 0x608 Eq
	if(var_332_bool == 0) goto Label_1561; // 0x609 JumpB
	var_333_string = ""; // 0x60a PushV
	var_333_string = "Untrust"; // 0x60b MovS
	func_1079(var_27_cvector, var_333_string); // 0x60c NEW_2
	var_334_int = 513909; // 0x60e PushI
	SetMessage(var_334_int); // 0x60f TObjFunc
	ClearReplies(); // 0x611 TObjFunc
	var_335_int = 513910; // 0x613 PushI
	var_336_int = 15142; // 0x614 PushI
	var_337_int = 15141; // 0x615 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x616 TObjFunc
	return 0; // 0x618 Return
	
Label_1561:
	var_338_int = 15142; // 0x619 PushI
	var_339_bool = var_26_bool == var_338_int; // 0x61a Eq
	if(var_339_bool == 0) goto Label_1584; // 0x61b JumpB
	var_340_string = ""; // 0x61c PushV
	var_340_string = "Neutral"; // 0x61d MovS
	func_1079(var_27_cvector, var_340_string); // 0x61e NEW_2
	var_341_int = 513911; // 0x620 PushI
	SetMessage(var_341_int); // 0x621 TObjFunc
	ClearReplies(); // 0x623 TObjFunc
	var_342_int = 513912; // 0x625 PushI
	var_343_int = 15144; // 0x626 PushI
	var_344_int = 15143; // 0x627 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x628 TObjFunc
	var_345_int = 513920; // 0x62a PushI
	var_346_int = 15152; // 0x62b PushI
	var_347_int = 15151; // 0x62c PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x62d TObjFunc
	return 0; // 0x62f Return
	
Label_1584:
	var_348_int = 15152; // 0x630 PushI
	var_349_bool = var_26_bool == var_348_int; // 0x631 Eq
	if(var_349_bool == 0) goto Label_1602; // 0x632 JumpB
	var_350_string = ""; // 0x633 PushV
	var_350_string = "Neutral"; // 0x634 MovS
	func_1079(var_27_cvector, var_350_string); // 0x635 NEW_2
	var_351_int = 513921; // 0x637 PushI
	SetMessage(var_351_int); // 0x638 TObjFunc
	ClearReplies(); // 0x63a TObjFunc
	var_352_int = 513922; // 0x63c PushI
	var_353_int = 15154; // 0x63d PushI
	var_354_int = 15153; // 0x63e PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x63f TObjFunc
	return 0; // 0x641 Return
	
Label_1602:
	var_355_int = 15154; // 0x642 PushI
	var_356_bool = var_26_bool == var_355_int; // 0x643 Eq
	if(var_356_bool == 0) goto Label_1620; // 0x644 JumpB
	var_357_string = ""; // 0x645 PushV
	var_357_string = "Neutral"; // 0x646 MovS
	func_1079(var_27_cvector, var_357_string); // 0x647 NEW_2
	var_358_int = 513923; // 0x649 PushI
	SetMessage(var_358_int); // 0x64a TObjFunc
	ClearReplies(); // 0x64c TObjFunc
	var_359_int = 514067; // 0x64e PushI
	var_360_int = -1; // 0x64f PushI
	var_361_int = 15304; // 0x650 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x651 TObjFunc
	return 0; // 0x653 Return
	
Label_1620:
	var_362_int = 15144; // 0x654 PushI
	var_363_bool = var_26_bool == var_362_int; // 0x655 Eq
	if(var_363_bool == 0) goto Label_1643; // 0x656 JumpB
	var_364_string = ""; // 0x657 PushV
	var_364_string = "Neutral"; // 0x658 MovS
	func_1079(var_27_cvector, var_364_string); // 0x659 NEW_2
	var_365_int = 513913; // 0x65b PushI
	SetMessage(var_365_int); // 0x65c TObjFunc
	ClearReplies(); // 0x65e TObjFunc
	var_366_int = 513914; // 0x660 PushI
	var_367_int = 15146; // 0x661 PushI
	var_368_int = 15145; // 0x662 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x663 TObjFunc
	var_369_int = 513919; // 0x665 PushI
	var_370_int = -1; // 0x666 PushI
	var_371_int = 15150; // 0x667 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x668 TObjFunc
	return 0; // 0x66a Return
	
Label_1643:
	var_372_int = 15146; // 0x66b PushI
	var_373_bool = var_26_bool == var_372_int; // 0x66c Eq
	if(var_373_bool == 0) goto Label_1661; // 0x66d JumpB
	var_374_string = ""; // 0x66e PushV
	var_374_string = "Neutral"; // 0x66f MovS
	func_1079(var_27_cvector, var_374_string); // 0x670 NEW_2
	var_375_int = 513915; // 0x672 PushI
	SetMessage(var_375_int); // 0x673 TObjFunc
	ClearReplies(); // 0x675 TObjFunc
	var_376_int = 513916; // 0x677 PushI
	var_377_int = 15148; // 0x678 PushI
	var_378_int = 15147; // 0x679 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x67a TObjFunc
	return 0; // 0x67c Return
	
Label_1661:
	var_379_int = 15148; // 0x67d PushI
	var_380_bool = var_26_bool == var_379_int; // 0x67e Eq
	if(var_380_bool == 0) goto Label_1679; // 0x67f JumpB
	var_381_string = ""; // 0x680 PushV
	var_381_string = "Neutral"; // 0x681 MovS
	func_1079(var_27_cvector, var_381_string); // 0x682 NEW_2
	var_382_int = 513917; // 0x684 PushI
	SetMessage(var_382_int); // 0x685 TObjFunc
	ClearReplies(); // 0x687 TObjFunc
	var_383_int = 513918; // 0x689 PushI
	var_384_int = -1; // 0x68a PushI
	var_385_int = 15149; // 0x68b PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x68c TObjFunc
	return 0; // 0x68e Return
	
Label_1679:
	var_386_int = 15111; // 0x68f PushI
	var_387_bool = var_26_bool == var_386_int; // 0x690 Eq
	if(var_387_bool == 0) goto Label_1702; // 0x691 JumpB
	var_388_string = ""; // 0x692 PushV
	var_388_string = "Neutral"; // 0x693 MovS
	func_1079(var_27_cvector, var_388_string); // 0x694 NEW_2
	var_389_int = 513884; // 0x696 PushI
	SetMessage(var_389_int); // 0x697 TObjFunc
	ClearReplies(); // 0x699 TObjFunc
	var_390_int = 513885; // 0x69b PushI
	var_391_int = 15113; // 0x69c PushI
	var_392_int = 15112; // 0x69d PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x69e TObjFunc
	var_393_int = 513905; // 0x6a0 PushI
	var_394_int = 15113; // 0x6a1 PushI
	var_395_int = 15135; // 0x6a2 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x6a3 TObjFunc
	return 0; // 0x6a5 Return
	
Label_1702:
	var_396_int = 15113; // 0x6a6 PushI
	var_397_bool = var_26_bool == var_396_int; // 0x6a7 Eq
	if(var_397_bool == 0) goto Label_1725; // 0x6a8 JumpB
	var_398_string = ""; // 0x6a9 PushV
	var_398_string = "Neutral"; // 0x6aa MovS
	func_1079(var_27_cvector, var_398_string); // 0x6ab NEW_2
	var_399_int = 513886; // 0x6ad PushI
	SetMessage(var_399_int); // 0x6ae TObjFunc
	ClearReplies(); // 0x6b0 TObjFunc
	var_400_int = 513887; // 0x6b2 PushI
	var_401_int = 15115; // 0x6b3 PushI
	var_402_int = 15114; // 0x6b4 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x6b5 TObjFunc
	var_403_int = 513899; // 0x6b7 PushI
	var_404_int = 15128; // 0x6b8 PushI
	var_405_int = 15127; // 0x6b9 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x6ba TObjFunc
	return 0; // 0x6bc Return
	
Label_1725:
	var_406_int = 15128; // 0x6bd PushI
	var_407_bool = var_26_bool == var_406_int; // 0x6be Eq
	if(var_407_bool == 0) goto Label_1748; // 0x6bf JumpB
	var_408_string = ""; // 0x6c0 PushV
	var_408_string = "Doubt"; // 0x6c1 MovS
	func_1079(var_27_cvector, var_408_string); // 0x6c2 NEW_2
	var_409_int = 513900; // 0x6c4 PushI
	SetMessage(var_409_int); // 0x6c5 TObjFunc
	ClearReplies(); // 0x6c7 TObjFunc
	var_410_int = 513901; // 0x6c9 PushI
	var_411_int = 15130; // 0x6ca PushI
	var_412_int = 15129; // 0x6cb PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x6cc TObjFunc
	var_413_int = 513904; // 0x6ce PushI
	var_414_int = 15115; // 0x6cf PushI
	var_415_int = 15133; // 0x6d0 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x6d1 TObjFunc
	return 0; // 0x6d3 Return
	
Label_1748:
	var_416_int = 15130; // 0x6d4 PushI
	var_417_bool = var_26_bool == var_416_int; // 0x6d5 Eq
	if(var_417_bool == 0) goto Label_1766; // 0x6d6 JumpB
	var_418_string = ""; // 0x6d7 PushV
	var_418_string = "Neutral"; // 0x6d8 MovS
	func_1079(var_27_cvector, var_418_string); // 0x6d9 NEW_2
	var_419_int = 513902; // 0x6db PushI
	SetMessage(var_419_int); // 0x6dc TObjFunc
	ClearReplies(); // 0x6de TObjFunc
	var_420_int = 513903; // 0x6e0 PushI
	var_421_int = 15121; // 0x6e1 PushI
	var_422_int = 15131; // 0x6e2 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x6e3 TObjFunc
	return 0; // 0x6e5 Return
	
Label_1766:
	var_423_int = 15115; // 0x6e6 PushI
	var_424_bool = var_26_bool == var_423_int; // 0x6e7 Eq
	if(var_424_bool == 0) goto Label_1789; // 0x6e8 JumpB
	var_425_string = ""; // 0x6e9 PushV
	var_425_string = "Neutral"; // 0x6ea MovS
	func_1079(var_27_cvector, var_425_string); // 0x6eb NEW_2
	var_426_int = 513888; // 0x6ed PushI
	SetMessage(var_426_int); // 0x6ee TObjFunc
	ClearReplies(); // 0x6f0 TObjFunc
	var_427_int = 513889; // 0x6f2 PushI
	var_428_int = 15117; // 0x6f3 PushI
	var_429_int = 15116; // 0x6f4 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x6f5 TObjFunc
	var_430_int = 513898; // 0x6f7 PushI
	var_431_int = 15117; // 0x6f8 PushI
	var_432_int = 15125; // 0x6f9 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x6fa TObjFunc
	return 0; // 0x6fc Return
	
Label_1789:
	var_433_int = 15117; // 0x6fd PushI
	var_434_bool = var_26_bool == var_433_int; // 0x6fe Eq
	if(var_434_bool == 0) goto Label_1812; // 0x6ff JumpB
	var_435_string = ""; // 0x700 PushV
	var_435_string = "Neutral"; // 0x701 MovS
	func_1079(var_27_cvector, var_435_string); // 0x702 NEW_2
	var_436_int = 513890; // 0x704 PushI
	SetMessage(var_436_int); // 0x705 TObjFunc
	ClearReplies(); // 0x707 TObjFunc
	var_437_int = 513891; // 0x709 PushI
	var_438_int = 15119; // 0x70a PushI
	var_439_int = 15118; // 0x70b PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x70c TObjFunc
	var_440_int = 513897; // 0x70e PushI
	var_441_int = 15121; // 0x70f PushI
	var_442_int = 15124; // 0x710 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x711 TObjFunc
	return 0; // 0x713 Return
	
Label_1812:
	var_443_int = 15119; // 0x714 PushI
	var_444_bool = var_26_bool == var_443_int; // 0x715 Eq
	if(var_444_bool == 0) goto Label_1830; // 0x716 JumpB
	var_445_string = ""; // 0x717 PushV
	var_445_string = "Neutral"; // 0x718 MovS
	func_1079(var_27_cvector, var_445_string); // 0x719 NEW_2
	var_446_int = 513892; // 0x71b PushI
	SetMessage(var_446_int); // 0x71c TObjFunc
	ClearReplies(); // 0x71e TObjFunc
	var_447_int = 513893; // 0x720 PushI
	var_448_int = 15121; // 0x721 PushI
	var_449_int = 15120; // 0x722 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x723 TObjFunc
	return 0; // 0x725 Return
	
Label_1830:
	var_450_int = 15121; // 0x726 PushI
	var_451_bool = var_26_bool == var_450_int; // 0x727 Eq
	if(var_451_bool == 0) goto Label_1853; // 0x728 JumpB
	var_452_string = ""; // 0x729 PushV
	var_452_string = "Neutral"; // 0x72a MovS
	func_1079(var_27_cvector, var_452_string); // 0x72b NEW_2
	var_453_int = 513894; // 0x72d PushI
	SetMessage(var_453_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_454_int = 513895; // 0x732 PushI
	var_455_int = -1; // 0x733 PushI
	var_456_int = 15122; // 0x734 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x735 TObjFunc
	var_457_int = 513896; // 0x737 PushI
	var_458_int = -1; // 0x738 PushI
	var_459_int = 15123; // 0x739 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x73a TObjFunc
	return 0; // 0x73c Return
	
Label_1853:
	var_3_string = 1; // 0x73d TMovB
	var_460_bool = 0; // 0x73e PushV
	func_3534(var_460_bool); // 0x73f NEW_2
	if(var_460_bool == 0) goto Label_1861; // 0x741 JumpB
	lshStopAnimation(); // 0x742 Func
	goto Label_1863; // 0x744 Jump
	
Label_1863:
	return 0; // 0x747 Return
	
Label_1861:
	StopAnimation(); // 0x745 Func
	
Label_1865:
	return 0; // 0x749 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x820 PushI
	if(var_28_int == 0) goto Label_2634; // 0x821 JumpB
	func_3395(); // 0x823 NEW_2
	var_30_int = 15501; // 0x825 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x826 Eq
	if(var_31_bool == 0) goto Label_2093; // 0x827 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x828 PushV
	var_32_object = var_1_object; // 0x829 MovT
	var_33_object = var_0_object; // 0x82a MovT
	func_3628(); // 0x82b NEW_2
	
Label_2093:
	var_36_int = 15528; // 0x82d PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x82e Eq
	if(var_37_bool == 0) goto Label_2106; // 0x82f JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x830 PushV
	var_38_object = var_1_object; // 0x831 MovT
	var_39_object = var_0_object; // 0x832 MovT
	func_3634(); // 0x833 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x835 PushV
	var_42_object = var_1_object; // 0x836 MovT
	var_43_object = var_0_object; // 0x837 MovT
	func_3589(); // 0x838 NEW_2
	
Label_2106:
	var_46_int = 15539; // 0x83a PushI
	var_47_bool = var_27_cvector == var_46_int; // 0x83b Eq
	if(var_47_bool == 0) goto Label_2114; // 0x83c JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x83d PushV
	var_48_object = var_1_object; // 0x83e MovT
	var_49_object = var_0_object; // 0x83f MovT
	func_3640(); // 0x840 NEW_2
	
Label_2114:
	var_52_int = 15500; // 0x842 PushI
	var_53_bool = var_26_bool == var_52_int; // 0x843 Eq
	if(var_53_bool == 0) goto Label_2189; // 0x844 JumpB
	var_54_string = ""; // 0x845 PushV
	var_54_string = "Neutral"; // 0x846 MovS
	func_2057(var_27_cvector, var_54_string); // 0x847 NEW_2
	var_71_int = 514280; // 0x849 PushI
	SetMessage(var_71_int); // 0x84a TObjFunc
	ClearReplies(); // 0x84c TObjFunc
	var_72_bool = 0; // 0x84e PushV
	var_72_bool = 0; // 0x84f MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x850 PushV
	var_74_object = var_1_object; // 0x851 MovT
	func_3769(var_74_object); // 0x852 NEW_2
	if(var_73_bool == 0) goto Label_2139; // 0x854 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x855 PushV
	var_82_object = var_1_object; // 0x856 MovT
	func_3781(var_82_object); // 0x857 NEW_2
	if(var_81_bool == 0) goto Label_2139; // 0x859 JumpB
	var_72_bool = 1; // 0x85a MovB
	
Label_2139:
	if(var_72_bool == 0) goto Label_2145; // 0x85b JumpB
	var_87_int = 514281; // 0x85c PushI
	var_88_int = 15502; // 0x85d PushI
	var_89_int = 15501; // 0x85e PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x85f TObjFunc
	
Label_2145:
	var_90_bool = 0; // 0x861 PushV
	var_90_bool = 0; // 0x862 MovB
	var_91_bool = 0; var_92_object = Obj(); // 0x863 PushV
	var_92_object = var_1_object; // 0x864 MovT
	func_3793(var_92_object); // 0x865 NEW_2
	if(var_91_bool == 0) goto Label_2158; // 0x867 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x868 PushV
	var_98_object = var_1_object; // 0x869 MovT
	func_3805(var_98_object); // 0x86a NEW_2
	if(var_97_bool == 0) goto Label_2158; // 0x86c JumpB
	var_90_bool = 1; // 0x86d MovB
	
Label_2158:
	if(var_90_bool == 0) goto Label_2164; // 0x86e JumpB
	var_103_int = 514306; // 0x86f PushI
	var_104_int = 15529; // 0x870 PushI
	var_105_int = 15528; // 0x871 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x872 TObjFunc
	
Label_2164:
	var_106_bool = 0; // 0x874 PushV
	var_106_bool = 0; // 0x875 MovB
	var_107_bool = 0; var_108_object = Obj(); // 0x876 PushV
	var_108_object = var_1_object; // 0x877 MovT
	func_3757(var_108_object); // 0x878 NEW_2
	if(var_107_bool == 0) goto Label_2177; // 0x87a JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x87b PushV
	var_114_object = var_1_object; // 0x87c MovT
	func_3817(var_114_object); // 0x87d NEW_2
	if(var_113_bool == 0) goto Label_2177; // 0x87f JumpB
	var_106_bool = 1; // 0x880 MovB
	
Label_2177:
	if(var_106_bool == 0) goto Label_2183; // 0x881 JumpB
	var_119_int = 514317; // 0x882 PushI
	var_120_int = 15540; // 0x883 PushI
	var_121_int = 15539; // 0x884 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x885 TObjFunc
	
Label_2183:
	var_122_int = 514324; // 0x887 PushI
	var_123_int = -1; // 0x888 PushI
	var_124_int = 15546; // 0x889 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x88a TObjFunc
	return 0; // 0x88c Return
	
Label_2189:
	var_125_int = 15540; // 0x88d PushI
	var_126_bool = var_26_bool == var_125_int; // 0x88e Eq
	if(var_126_bool == 0) goto Label_2212; // 0x88f JumpB
	var_127_string = ""; // 0x890 PushV
	var_127_string = "Neutral"; // 0x891 MovS
	func_2057(var_27_cvector, var_127_string); // 0x892 NEW_2
	var_128_int = 514318; // 0x894 PushI
	SetMessage(var_128_int); // 0x895 TObjFunc
	ClearReplies(); // 0x897 TObjFunc
	var_129_int = 514319; // 0x899 PushI
	var_130_int = 15542; // 0x89a PushI
	var_131_int = 15541; // 0x89b PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x89c TObjFunc
	var_132_int = 539610; // 0x89e PushI
	var_133_int = 41557; // 0x89f PushI
	var_134_int = 41556; // 0x8a0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8a1 TObjFunc
	return 0; // 0x8a3 Return
	
Label_2212:
	var_135_int = 41557; // 0x8a4 PushI
	var_136_bool = var_26_bool == var_135_int; // 0x8a5 Eq
	if(var_136_bool == 0) goto Label_2230; // 0x8a6 JumpB
	var_137_string = ""; // 0x8a7 PushV
	var_137_string = "Neutral"; // 0x8a8 MovS
	func_2057(var_27_cvector, var_137_string); // 0x8a9 NEW_2
	var_138_int = 539611; // 0x8ab PushI
	SetMessage(var_138_int); // 0x8ac TObjFunc
	ClearReplies(); // 0x8ae TObjFunc
	var_139_int = 539729; // 0x8b0 PushI
	var_140_int = 15542; // 0x8b1 PushI
	var_141_int = 41692; // 0x8b2 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_142_int = 15542; // 0x8b6 PushI
	var_143_bool = var_26_bool == var_142_int; // 0x8b7 Eq
	if(var_143_bool == 0) goto Label_2248; // 0x8b8 JumpB
	var_144_string = ""; // 0x8b9 PushV
	var_144_string = "Doubt"; // 0x8ba MovS
	func_2057(var_27_cvector, var_144_string); // 0x8bb NEW_2
	var_145_int = 514320; // 0x8bd PushI
	SetMessage(var_145_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_146_int = 514321; // 0x8c2 PushI
	var_147_int = 15544; // 0x8c3 PushI
	var_148_int = 15543; // 0x8c4 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x8c5 TObjFunc
	return 0; // 0x8c7 Return
	
Label_2248:
	var_149_int = 15544; // 0x8c8 PushI
	var_150_bool = var_26_bool == var_149_int; // 0x8c9 Eq
	if(var_150_bool == 0) goto Label_2271; // 0x8ca JumpB
	var_151_string = ""; // 0x8cb PushV
	var_151_string = "Doubt"; // 0x8cc MovS
	func_2057(var_27_cvector, var_151_string); // 0x8cd NEW_2
	var_152_int = 514322; // 0x8cf PushI
	SetMessage(var_152_int); // 0x8d0 TObjFunc
	ClearReplies(); // 0x8d2 TObjFunc
	var_153_int = 514323; // 0x8d4 PushI
	var_154_int = 41695; // 0x8d5 PushI
	var_155_int = 15545; // 0x8d6 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x8d7 TObjFunc
	var_156_int = 539730; // 0x8d9 PushI
	var_157_int = -1; // 0x8da PushI
	var_158_int = 41694; // 0x8db PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x8dc TObjFunc
	return 0; // 0x8de Return
	
Label_2271:
	var_159_int = 41695; // 0x8df PushI
	var_160_bool = var_26_bool == var_159_int; // 0x8e0 Eq
	if(var_160_bool == 0) goto Label_2294; // 0x8e1 JumpB
	var_161_string = ""; // 0x8e2 PushV
	var_161_string = "Neutral"; // 0x8e3 MovS
	func_2057(var_27_cvector, var_161_string); // 0x8e4 NEW_2
	var_162_int = 539731; // 0x8e6 PushI
	SetMessage(var_162_int); // 0x8e7 TObjFunc
	ClearReplies(); // 0x8e9 TObjFunc
	var_163_int = 539732; // 0x8eb PushI
	var_164_int = -1; // 0x8ec PushI
	var_165_int = 41696; // 0x8ed PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x8ee TObjFunc
	var_166_int = 539733; // 0x8f0 PushI
	var_167_int = -1; // 0x8f1 PushI
	var_168_int = 41697; // 0x8f2 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x8f3 TObjFunc
	return 0; // 0x8f5 Return
	
Label_2294:
	var_169_int = 15529; // 0x8f6 PushI
	var_170_bool = var_26_bool == var_169_int; // 0x8f7 Eq
	if(var_170_bool == 0) goto Label_2312; // 0x8f8 JumpB
	var_171_string = ""; // 0x8f9 PushV
	var_171_string = "Neutral"; // 0x8fa MovS
	func_2057(var_27_cvector, var_171_string); // 0x8fb NEW_2
	var_172_int = 514307; // 0x8fd PushI
	SetMessage(var_172_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_173_int = 514308; // 0x902 PushI
	var_174_int = 15531; // 0x903 PushI
	var_175_int = 15530; // 0x904 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x905 TObjFunc
	return 0; // 0x907 Return
	
Label_2312:
	var_176_int = 15531; // 0x908 PushI
	var_177_bool = var_26_bool == var_176_int; // 0x909 Eq
	if(var_177_bool == 0) goto Label_2330; // 0x90a JumpB
	var_178_string = ""; // 0x90b PushV
	var_178_string = "Agression"; // 0x90c MovS
	func_2057(var_27_cvector, var_178_string); // 0x90d NEW_2
	var_179_int = 514309; // 0x90f PushI
	SetMessage(var_179_int); // 0x910 TObjFunc
	ClearReplies(); // 0x912 TObjFunc
	var_180_int = 514310; // 0x914 PushI
	var_181_int = 15533; // 0x915 PushI
	var_182_int = 15532; // 0x916 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x917 TObjFunc
	return 0; // 0x919 Return
	
Label_2330:
	var_183_int = 15533; // 0x91a PushI
	var_184_bool = var_26_bool == var_183_int; // 0x91b Eq
	if(var_184_bool == 0) goto Label_2353; // 0x91c JumpB
	var_185_string = ""; // 0x91d PushV
	var_185_string = "Agression"; // 0x91e MovS
	func_2057(var_27_cvector, var_185_string); // 0x91f NEW_2
	var_186_int = 514311; // 0x921 PushI
	SetMessage(var_186_int); // 0x922 TObjFunc
	ClearReplies(); // 0x924 TObjFunc
	var_187_int = 514312; // 0x926 PushI
	var_188_int = 15535; // 0x927 PushI
	var_189_int = 15534; // 0x928 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x929 TObjFunc
	var_190_int = 539728; // 0x92b PushI
	var_191_int = -1; // 0x92c PushI
	var_192_int = 41691; // 0x92d PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x92e TObjFunc
	return 0; // 0x930 Return
	
Label_2353:
	var_193_int = 15535; // 0x931 PushI
	var_194_bool = var_26_bool == var_193_int; // 0x932 Eq
	if(var_194_bool == 0) goto Label_2371; // 0x933 JumpB
	var_195_string = ""; // 0x934 PushV
	var_195_string = "Agression"; // 0x935 MovS
	func_2057(var_27_cvector, var_195_string); // 0x936 NEW_2
	var_196_int = 514313; // 0x938 PushI
	SetMessage(var_196_int); // 0x939 TObjFunc
	ClearReplies(); // 0x93b TObjFunc
	var_197_int = 514314; // 0x93d PushI
	var_198_int = 15537; // 0x93e PushI
	var_199_int = 15536; // 0x93f PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x940 TObjFunc
	return 0; // 0x942 Return
	
Label_2371:
	var_200_int = 15537; // 0x943 PushI
	var_201_bool = var_26_bool == var_200_int; // 0x944 Eq
	if(var_201_bool == 0) goto Label_2394; // 0x945 JumpB
	var_202_string = ""; // 0x946 PushV
	var_202_string = "Agression"; // 0x947 MovS
	func_2057(var_27_cvector, var_202_string); // 0x948 NEW_2
	var_203_int = 514315; // 0x94a PushI
	SetMessage(var_203_int); // 0x94b TObjFunc
	ClearReplies(); // 0x94d TObjFunc
	var_204_int = 514316; // 0x94f PushI
	var_205_int = -1; // 0x950 PushI
	var_206_int = 15538; // 0x951 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x952 TObjFunc
	var_207_int = 539727; // 0x954 PushI
	var_208_int = -1; // 0x955 PushI
	var_209_int = 41690; // 0x956 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x957 TObjFunc
	return 0; // 0x959 Return
	
Label_2394:
	var_210_int = 15502; // 0x95a PushI
	var_211_bool = var_26_bool == var_210_int; // 0x95b Eq
	if(var_211_bool == 0) goto Label_2417; // 0x95c JumpB
	var_212_string = ""; // 0x95d PushV
	var_212_string = "Untrust"; // 0x95e MovS
	func_2057(var_27_cvector, var_212_string); // 0x95f NEW_2
	var_213_int = 514282; // 0x961 PushI
	SetMessage(var_213_int); // 0x962 TObjFunc
	ClearReplies(); // 0x964 TObjFunc
	var_214_int = 514283; // 0x966 PushI
	var_215_int = 15504; // 0x967 PushI
	var_216_int = 15503; // 0x968 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x969 TObjFunc
	var_217_int = 539903; // 0x96b PushI
	var_218_int = 41864; // 0x96c PushI
	var_219_int = 41863; // 0x96d PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x96e TObjFunc
	return 0; // 0x970 Return
	
Label_2417:
	var_220_int = 41864; // 0x971 PushI
	var_221_bool = var_26_bool == var_220_int; // 0x972 Eq
	if(var_221_bool == 0) goto Label_2435; // 0x973 JumpB
	var_222_string = ""; // 0x974 PushV
	var_222_string = "Neutral"; // 0x975 MovS
	func_2057(var_27_cvector, var_222_string); // 0x976 NEW_2
	var_223_int = 539904; // 0x978 PushI
	SetMessage(var_223_int); // 0x979 TObjFunc
	ClearReplies(); // 0x97b TObjFunc
	var_224_int = 539905; // 0x97d PushI
	var_225_int = 15504; // 0x97e PushI
	var_226_int = 41865; // 0x97f PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x980 TObjFunc
	return 0; // 0x982 Return
	
Label_2435:
	var_227_int = 15504; // 0x983 PushI
	var_228_bool = var_26_bool == var_227_int; // 0x984 Eq
	if(var_228_bool == 0) goto Label_2458; // 0x985 JumpB
	var_229_string = ""; // 0x986 PushV
	var_229_string = "Untrust"; // 0x987 MovS
	func_2057(var_27_cvector, var_229_string); // 0x988 NEW_2
	var_230_int = 514284; // 0x98a PushI
	SetMessage(var_230_int); // 0x98b TObjFunc
	ClearReplies(); // 0x98d TObjFunc
	var_231_int = 514285; // 0x98f PushI
	var_232_int = 15506; // 0x990 PushI
	var_233_int = 15505; // 0x991 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x992 TObjFunc
	var_234_int = 514290; // 0x994 PushI
	var_235_int = 15511; // 0x995 PushI
	var_236_int = 15510; // 0x996 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x997 TObjFunc
	return 0; // 0x999 Return
	
Label_2458:
	var_237_int = 15511; // 0x99a PushI
	var_238_bool = var_26_bool == var_237_int; // 0x99b Eq
	if(var_238_bool == 0) goto Label_2481; // 0x99c JumpB
	var_239_string = ""; // 0x99d PushV
	var_239_string = "Neutral"; // 0x99e MovS
	func_2057(var_27_cvector, var_239_string); // 0x99f NEW_2
	var_240_int = 514291; // 0x9a1 PushI
	SetMessage(var_240_int); // 0x9a2 TObjFunc
	ClearReplies(); // 0x9a4 TObjFunc
	var_241_int = 514292; // 0x9a6 PushI
	var_242_int = 15513; // 0x9a7 PushI
	var_243_int = 15512; // 0x9a8 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x9a9 TObjFunc
	var_244_int = 514299; // 0x9ab PushI
	var_245_int = 15520; // 0x9ac PushI
	var_246_int = 15519; // 0x9ad PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x9ae TObjFunc
	return 0; // 0x9b0 Return
	
Label_2481:
	var_247_int = 15520; // 0x9b1 PushI
	var_248_bool = var_26_bool == var_247_int; // 0x9b2 Eq
	if(var_248_bool == 0) goto Label_2504; // 0x9b3 JumpB
	var_249_string = ""; // 0x9b4 PushV
	var_249_string = "Untrust"; // 0x9b5 MovS
	func_2057(var_27_cvector, var_249_string); // 0x9b6 NEW_2
	var_250_int = 514300; // 0x9b8 PushI
	SetMessage(var_250_int); // 0x9b9 TObjFunc
	ClearReplies(); // 0x9bb TObjFunc
	var_251_int = 514301; // 0x9bd PushI
	var_252_int = 15513; // 0x9be PushI
	var_253_int = 15521; // 0x9bf PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x9c0 TObjFunc
	var_254_int = 514302; // 0x9c2 PushI
	var_255_int = 15524; // 0x9c3 PushI
	var_256_int = 15523; // 0x9c4 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x9c5 TObjFunc
	return 0; // 0x9c7 Return
	
Label_2504:
	var_257_int = 15524; // 0x9c8 PushI
	var_258_bool = var_26_bool == var_257_int; // 0x9c9 Eq
	if(var_258_bool == 0) goto Label_2527; // 0x9ca JumpB
	var_259_string = ""; // 0x9cb PushV
	var_259_string = "Neutral"; // 0x9cc MovS
	func_2057(var_27_cvector, var_259_string); // 0x9cd NEW_2
	var_260_int = 514303; // 0x9cf PushI
	SetMessage(var_260_int); // 0x9d0 TObjFunc
	ClearReplies(); // 0x9d2 TObjFunc
	var_261_int = 514304; // 0x9d4 PushI
	var_262_int = 15513; // 0x9d5 PushI
	var_263_int = 15525; // 0x9d6 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x9d7 TObjFunc
	var_264_int = 514305; // 0x9d9 PushI
	var_265_int = -1; // 0x9da PushI
	var_266_int = 15527; // 0x9db PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x9dc TObjFunc
	return 0; // 0x9de Return
	
Label_2527:
	var_267_int = 15513; // 0x9df PushI
	var_268_bool = var_26_bool == var_267_int; // 0x9e0 Eq
	if(var_268_bool == 0) goto Label_2545; // 0x9e1 JumpB
	var_269_string = ""; // 0x9e2 PushV
	var_269_string = "Untrust"; // 0x9e3 MovS
	func_2057(var_27_cvector, var_269_string); // 0x9e4 NEW_2
	var_270_int = 514293; // 0x9e6 PushI
	SetMessage(var_270_int); // 0x9e7 TObjFunc
	ClearReplies(); // 0x9e9 TObjFunc
	var_271_int = 514294; // 0x9eb PushI
	var_272_int = 15515; // 0x9ec PushI
	var_273_int = 15514; // 0x9ed PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x9ee TObjFunc
	return 0; // 0x9f0 Return
	
Label_2545:
	var_274_int = 15515; // 0x9f1 PushI
	var_275_bool = var_26_bool == var_274_int; // 0x9f2 Eq
	if(var_275_bool == 0) goto Label_2563; // 0x9f3 JumpB
	var_276_string = ""; // 0x9f4 PushV
	var_276_string = "Neutral"; // 0x9f5 MovS
	func_2057(var_27_cvector, var_276_string); // 0x9f6 NEW_2
	var_277_int = 514295; // 0x9f8 PushI
	SetMessage(var_277_int); // 0x9f9 TObjFunc
	ClearReplies(); // 0x9fb TObjFunc
	var_278_int = 514296; // 0x9fd PushI
	var_279_int = 15517; // 0x9fe PushI
	var_280_int = 15516; // 0x9ff PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xa00 TObjFunc
	return 0; // 0xa02 Return
	
Label_2563:
	var_281_int = 15517; // 0xa03 PushI
	var_282_bool = var_26_bool == var_281_int; // 0xa04 Eq
	if(var_282_bool == 0) goto Label_2581; // 0xa05 JumpB
	var_283_string = ""; // 0xa06 PushV
	var_283_string = "Neutral"; // 0xa07 MovS
	func_2057(var_27_cvector, var_283_string); // 0xa08 NEW_2
	var_284_int = 514297; // 0xa0a PushI
	SetMessage(var_284_int); // 0xa0b TObjFunc
	ClearReplies(); // 0xa0d TObjFunc
	var_285_int = 514298; // 0xa0f PushI
	var_286_int = -1; // 0xa10 PushI
	var_287_int = 15518; // 0xa11 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xa12 TObjFunc
	return 0; // 0xa14 Return
	
Label_2581:
	var_288_int = 15506; // 0xa15 PushI
	var_289_bool = var_26_bool == var_288_int; // 0xa16 Eq
	if(var_289_bool == 0) goto Label_2599; // 0xa17 JumpB
	var_290_string = ""; // 0xa18 PushV
	var_290_string = "Neutral"; // 0xa19 MovS
	func_2057(var_27_cvector, var_290_string); // 0xa1a NEW_2
	var_291_int = 514286; // 0xa1c PushI
	SetMessage(var_291_int); // 0xa1d TObjFunc
	ClearReplies(); // 0xa1f TObjFunc
	var_292_int = 514287; // 0xa21 PushI
	var_293_int = 15508; // 0xa22 PushI
	var_294_int = 15507; // 0xa23 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xa24 TObjFunc
	return 0; // 0xa26 Return
	
Label_2599:
	var_295_int = 15508; // 0xa27 PushI
	var_296_bool = var_26_bool == var_295_int; // 0xa28 Eq
	if(var_296_bool == 0) goto Label_2622; // 0xa29 JumpB
	var_297_string = ""; // 0xa2a PushV
	var_297_string = "Neutral"; // 0xa2b MovS
	func_2057(var_27_cvector, var_297_string); // 0xa2c NEW_2
	var_298_int = 514288; // 0xa2e PushI
	SetMessage(var_298_int); // 0xa2f TObjFunc
	ClearReplies(); // 0xa31 TObjFunc
	var_299_int = 514289; // 0xa33 PushI
	var_300_int = -1; // 0xa34 PushI
	var_301_int = 15509; // 0xa35 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xa36 TObjFunc
	var_302_int = 539734; // 0xa38 PushI
	var_303_int = -1; // 0xa39 PushI
	var_304_int = 41698; // 0xa3a PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xa3b TObjFunc
	return 0; // 0xa3d Return
	
Label_2622:
	var_3_string = 1; // 0xa3e TMovB
	var_305_bool = 0; // 0xa3f PushV
	func_3534(var_305_bool); // 0xa40 NEW_2
	if(var_305_bool == 0) goto Label_2630; // 0xa42 JumpB
	lshStopAnimation(); // 0xa43 Func
	goto Label_2632; // 0xa45 Jump
	
Label_2632:
	return 0; // 0xa48 Return
	
Label_2630:
	StopAnimation(); // 0xa46 Func
	
Label_2634:
	return 0; // 0xa4a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0xaed PushI
	if(var_28_int == 0) goto Label_2837; // 0xaee JumpB
	func_3395(); // 0xaf0 NEW_2
	var_30_int = 42551; // 0xaf2 PushI
	var_31_bool = var_26_int == var_30_int; // 0xaf3 Eq
	if(var_31_bool == 0) goto Label_2825; // 0xaf4 JumpB
	var_32_string = ""; // 0xaf5 PushV
	var_32_string = "Neutral"; // 0xaf6 MovS
	func_2774(var_27_cvector, var_32_string); // 0xaf7 NEW_2
	var_49_int = 540542; // 0xaf9 PushI
	SetMessage(var_49_int); // 0xafa TObjFunc
	ClearReplies(); // 0xafc TObjFunc
	var_50_int = 540543; // 0xafe PushI
	var_51_int = -1; // 0xaff PushI
	var_52_int = 42552; // 0xb00 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb01 TObjFunc
	var_53_int = 540796; // 0xb03 PushI
	var_54_int = -1; // 0xb04 PushI
	var_55_int = 42845; // 0xb05 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xb06 TObjFunc
	return 0; // 0xb08 Return
	
Label_2825:
	var_3_string = 1; // 0xb09 TMovB
	var_56_bool = 0; // 0xb0a PushV
	func_3534(var_56_bool); // 0xb0b NEW_2
	if(var_56_bool == 0) goto Label_2833; // 0xb0d JumpB
	lshStopAnimation(); // 0xb0e Func
	goto Label_2835; // 0xb10 Jump
	
Label_2835:
	return 0; // 0xb13 Return
	
Label_2833:
	StopAnimation(); // 0xb11 Func
	
Label_2837:
	return 0; // 0xb15 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0xb60 PushI
	var_28_bool = var_26_int == var_27_int; // 0xb61 Eq
	if(var_28_bool == 0) goto Label_2948; // 0xb62 JumpB
	func_2907(); // 0xb64 NEW_2
	var_30_bool = 0; // 0xb66 PushV
	var_30_bool = 0; // 0xb67 MovB
	var_31_bool = 0; // 0xb68 PushV
	func_3121(var_31_bool); // 0xb69 NEW_2
	if(var_31_bool == 0) goto Label_2929; // 0xb6b JumpB
	var_34_bool = 0; // 0xb6c PushV
	func_2876(var_34_bool); // 0xb6d NEW_2
	if(var_34_bool == 0) goto Label_2929; // 0xb6f JumpB
	var_30_bool = 1; // 0xb70 MovB
	
Label_2929:
	if(var_30_bool == 0) goto Label_2942; // 0xb71 JumpB
	var_51_bool = 0; // 0xb72 PushV
	func_2856(var_51_bool); // 0xb73 NEW_2
	if(var_51_bool == 0) goto Label_2941; // 0xb75 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0xb76 PushV
	var_72_object = Obj(); // 0xb77 PushV
	func_3402(var_72_object); // 0xb78 NEW_2
	var_71_object = var_72_object; // 0xb79 Mov
	func_3269(var_71_object); // 0xb7b NEW_2
	
Label_2941:
	goto Label_2948; // 0xb7d Jump
	
Label_2948:
	return 0; // 0xb84 Return
	
Label_2942:
	func_2871(var_26_int); // 0xb7f NEW_2
	func_2898(); // 0xb82 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_3089(); // 0xb86 NEW_2
	func_2907(); // 0xb89 NEW_2
	lshStopSpeech(); // 0xb8b Func
	lshStopAnimation(); // 0xb8d Func
	StopAsync(); // 0xb8f Func
	Hold(); // 0xb91 Func
	return 0; // 0xb93 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0xb94 Func
	func_2907(); // 0xb97 NEW_2
	var_27_string = ""; // 0xb99 PushV
	var_27_string = "Neutral"; // 0xb9a MovS
	func_3349(var_27_string); // 0xb9b NEW_2
	func_2898(); // 0xb9e NEW_2
	return 0; // 0xba0 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0xba2 Push
	if(var_27_bool == 0) goto Label_2984; // 0xba3 JumpB
	func_2898(); // 0xba5 NEW_2
	goto Label_2988; // 0xba7 Jump
	
Label_2988:
	return 0; // 0xbac Return
	
Label_2984:
	var_33_string = ""; // 0xba8 PushV
	var_33_string = "Neutral"; // 0xba9 MovS
	func_3349(var_33_string); // 0xbaa NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0xbad PushV
	IsOverrideActive(var_28_bool); // 0xbae Func
	var_29_bool = var_28_bool == 0; // 0xbb0 Not
	if(var_29_bool == 0) goto Label_3017; // 0xbb1 JumpB
	EventDisable(0); // 0xbb2 EventDisable
	func_3089(); // 0xbb4 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0xbb6 PushV
	var_31_object = var_26_object; // 0xbb7 Mov
	func_3112(var_31_object); // 0xbb8 NEW_2
	EventEnable(0); // 0xbba EventEnable
	var_44_object = Obj(); // 0xbbb PushV
	var_44_object = var_26_object; // 0xbbc Mov
	func_3936(var_44_object); // 0xbbd NEW_2
	var_643_string = ""; // 0xbbf PushV
	var_643_string = "Neutral"; // 0xbc0 MovS
	func_3349(var_643_string); // 0xbc1 NEW_2
	func_2907(); // 0xbc4 NEW_2
	func_2898(); // 0xbc7 NEW_2
	
Label_3017:
	return 2; // 0xbc9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2842(var_25_cvector); // 0xb17 NEW_2
	return 0; // 0xb19 Return
}


func_0(var_0_object, var_326_int, var_327_object)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; var_333_object = Obj(); var_334_bool = 0; var_335_int = 0; var_336_bool = 0; // 0x0 PushV
	var_0_object = var_327_object; // 0x1 TMov
	var_337_bool = 0; var_338_object = Obj(); var_339_float = 0; // 0x2 PushV
	var_338_object = var_327_object; // 0x3 Mov
	var_339_float = 70.0; // 0x4 MovF
	func_3126(var_338_object, var_339_float); // 0x5 NEW_2
	var_340_bool = var_337_bool == 0; // 0x7 Not
	if(var_340_bool == 0) goto Label_11; // 0x8 JumpB
	var_326_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_333_object); // 0xb Func
	var_341_int = 0; // 0xd PushV
	func_3528(var_341_int); // 0xe NEW_2
	SetNPCName(var_341_int); // 0x10 ObjFunc
	var_342_int = 0; // 0x12 PushV
	func_3526(var_342_int); // 0x13 NEW_2
	SetNPCDescription(var_342_int); // 0x15 ObjFunc
	var_343_string = ""; // 0x17 PushV
	func_3530(var_343_string); // 0x18 NEW_2
	SetPhoto(var_343_string); // 0x1a ObjFunc
	var_344_string = ""; // 0x1c PushV
	func_3532(var_344_string); // 0x1d NEW_2
	SetPhoto2(var_344_string); // 0x1f ObjFunc
	var_345_int = 0; // 0x21 PushV
	func_3919(var_345_int); // 0x22 NEW_2
	SetPlayerName(var_345_int); // 0x24 ObjFunc
	var_335_int = -1; // 0x26 MovI
	IsOverrideActive(var_334_bool); // 0x27 Func
	var_346_bool = var_334_bool; // 0x29 Push
	if(var_346_bool == 0) goto Label_45; // 0x2a JumpB
	var_326_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_333_object); // 0x2d Func
	var_347_bool = 0; var_348_object = Obj(); // 0x2f PushV
	var_349_object = Obj(); // 0x30 PushV
	func_3402(var_349_object); // 0x31 NEW_2
	var_348_object = var_349_object; // 0x32 Mov
	func_3211(var_347_bool, var_348_object); // 0x34 NEW_2
	var_350_object = Obj(); var_351_object = Obj(); // 0x36 PushV
	var_350_object = var_327_object; // 0x37 Mov
	var_351_object = var_333_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_336_bool); // 0x3d ObjFunc
	
Label_63:
	var_389_bool = var_336_bool == 0; // 0x3f Not
	if(var_389_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_336_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_390_object = Obj(); // 0x46 PushV
	var_390_object = var_327_object; // 0x47 Mov
	func_3194(); // 0x48 NEW_2
	StopDialog(var_333_object); // 0x4a Func
	GetReturnValue(var_335_int); // 0x4c ObjFunc
	var_326_int = var_335_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3841(var_536_bool)
{
	var_538_int = 0; // 0xf02 PushV
	func_3488(var_538_int); // 0xf03 NEW_2
	var_543_int = 19; // 0xf05 PushI
	var_544_bool = var_538_int >= var_543_int; // 0xf06 GE
	if(var_544_bool == 0) goto Label_3850; // 0xf07 JumpB
	var_536_bool = 1; // 0xf08 MovB
	return 0; // 0xf09 Return
	
Label_3850:
	var_536_bool = 0; // 0xf0a MovB
	return 0; // 0xf0b Return
}


func_3589()
{
	var_44_string = "d11RotaTalk"; // 0xe06 PushS
	var_45_int = 1; // 0xe07 PushI
	SetVariable(var_44_string, var_45_int); // 0xe08 Func
	return 0; // 0xe0a Return
}


func_2057(var_2_object, var_424_string)
{
	var_425_bool = 0; // 0x80a PushV
	func_3534(var_425_bool); // 0x80b NEW_2
	var_426_bool = var_425_bool == 0; // 0x80d Not
	if(var_426_bool == 0) goto Label_2064; // 0x80e JumpB
	return 0; // 0x80f Return
	
Label_2064:
	var_427_bool = var_424_string == var_2_object; // 0x810 Eq
	if(var_427_bool == 0) goto Label_2067; // 0x811 JumpB
	return 0; // 0x812 Return
	
Label_2067:
	var_428_string = ""; var_429_bool = 0; // 0x813 PushV
	var_428_string = var_424_string; // 0x814 Mov
	var_430_string = ""; // 0x815 PushS
	var_431_bool = var_424_string == var_430_string; // 0x816 Eq
	if(var_431_bool == 0) goto Label_2074; // 0x817 JumpB
	var_429_bool = 0; // 0x818 MovB
	goto Label_2075; // 0x819 Jump
	
Label_2075:
	func_3365(var_428_string, var_429_bool); // 0x81b NEW_2
	var_2_object = var_424_string; // 0x81d TMov
	return 0; // 0x81e Return
	
Label_2074:
	var_429_bool = 1; // 0x81a MovB
}


func_3595()
{
	var_223_string = "d9TalkToPolkovodec"; // 0xe0c PushS
	var_224_int = 1; // 0xe0d PushI
	SetVariable(var_223_string, var_224_int); // 0xe0e Func
	return 0; // 0xe10 Return
}


func_3852()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xf0c PushV
	var_36_int = 676; // 0xf0d PushI
	var_37_int = 2; // 0xf0e PushI
	var_38_int = 534161; // 0xf0f PushI
	CreateDiaryEntry(var_35_object, var_36_int, var_37_int, var_38_int); // 0xf10 Func
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0; // 0xf12 PushV
	var_40_object = var_35_object; // 0xf13 Mov
	var_41_int = 672; // 0xf14 MovI
	func_3891(var_39_bool, var_40_object, var_41_int); // 0xf15 NEW_2
	return 2; // 0xf17 Return
}


func_3087(var_64_bool)
{
	var_64_bool = 1; // 0xc0f MovB
	return 0; // 0xc10 Return
}


func_3601()
{
	var_40_string = "ood9Block1"; // 0xe12 PushS
	var_41_int = 1; // 0xe13 PushI
	SetVariable(var_40_string, var_41_int); // 0xe14 Func
	return 0; // 0xe16 Return
}


func_3089()
{
	StopAnimation(); // 0xc11 Func
	StopGroup0(); // 0xc13 Func
	return 0; // 0xc15 Return
}


func_3349(var_300_string)
{
	var_301_bool = 0; var_302_float = 0; var_303_float = 0; var_304_bool = 0; var_305_float = 0; var_306_float = 0; // 0xd15 PushV
	lshHasAnimation(var_304_bool, var_300_string); // 0xd16 Func
	var_307_bool = var_304_bool; // 0xd18 Push
	if(var_307_bool == 0) goto Label_3360; // 0xd19 JumpB
	lshGetAnimTimes(var_300_string, var_305_float, var_306_float); // 0xd1a Func
	var_308_bool = 0; // 0xd1c PushB
	lshPlayAnimation(var_305_float, var_306_float, var_308_bool); // 0xd1d Func
	goto Label_3364; // 0xd1f Jump
	
Label_3364:
	return 6; // 0xd24 Return
	
Label_3360:
	var_309_string = "Can't find lsh animation : "; // 0xd20 PushS
	var_310_int = var_309_string + var_300_string; // 0xd21 Add
	Trace(var_310_int); // 0xd22 Func
}


func_3094(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xc16 PushV
	GetPosition(var_46_cvector); // 0xc17 Func
	GetPosition(var_47_cvector); // 0xc19 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0xc1b Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0xc1c Or2
	return 6; // 0xc1d Return
}


func_3607(var_44_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xe17 PushV
	var_48_string = "Rifle is given"; // 0xe18 PushS
	Trace(var_48_string); // 0xe19 Func
	CreateInvItem(var_47_object); // 0xe1b Func
	var_49_string = "Rifle"; // 0xe1d PushS
	SetItemName(var_49_string); // 0xe1e ObjFunc
	var_50_string = "durability"; // 0xe20 PushS
	var_51_int = 100; // 0xe21 PushI
	SetProperty(var_50_string, var_51_int); // 0xe22 ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0xe24 PushV
	var_52_object = var_44_object; // 0xe25 Mov
	var_53_object = var_47_object; // 0xe26 Mov
	var_54_int = 1; // 0xe27 MovI
	func_3435(var_53_object, var_54_int); // 0xe28 NEW_2
	return 2; // 0xe2a Return
}


func_3865()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0xf19 PushV
	var_105_int = 657; // 0xf1a PushI
	var_106_int = 2; // 0xf1b PushI
	var_107_int = 533575; // 0xf1c PushI
	CreateDiaryEntry(var_104_object, var_105_int, var_106_int, var_107_int); // 0xf1d Func
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; // 0xf1f PushV
	var_109_object = var_104_object; // 0xf20 Mov
	var_110_int = 655; // 0xf21 MovI
	func_3891(var_108_bool, var_109_object, var_110_int); // 0xf22 NEW_2
	return 2; // 0xf24 Return
}


func_2842(var_0_object)
{
	var_26_bool = 0; // 0xb1a PushV
	func_3121(var_26_bool); // 0xb1b NEW_2
	var_29_bool = var_26_bool == 0; // 0xb1d Not
	if(var_29_bool == 0) goto Label_2849; // 0xb1e JumpB
	Hold(); // 0xb1f Func
	
Label_2849:
	GetDirection(var_0_object); // 0xb21 Func
	
Label_2851:
	func_3018(); // 0xb24 NEW_2
	goto Label_2851; // 0xb26 Jump
}


func_3102(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0xc1e PushV
	GetPosition(var_39_cvector); // 0xc1f Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0xc21 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0xc22 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0xc23 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0xc24 Func
	var_34_bool = var_41_bool; // 0xc26 Mov
	return 6; // 0xc27 Return
}


func_3365(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0; // 0xd25 PushV
	lshHasAnimation(var_236_bool, var_229_string); // 0xd26 Func
	var_239_bool = var_236_bool; // 0xd28 Push
	if(var_239_bool == 0) goto Label_3375; // 0xd29 JumpB
	lshGetAnimTimes(var_229_string, var_237_float, var_238_float); // 0xd2a Func
	lshPlayAnimation(var_237_float, var_238_float, var_230_bool); // 0xd2c Func
	goto Label_3379; // 0xd2e Jump
	
Label_3379:
	return 6; // 0xd33 Return
	
Label_3375:
	var_240_string = "Can't find lsh animation : "; // 0xd2f PushS
	var_241_int = var_240_string + var_229_string; // 0xd30 Add
	Trace(var_241_int); // 0xd31 Func
}


func_3878(var_117_object)
{
	var_118_object = Obj(); var_119_object = Obj(); // 0xf26 PushV
	GetDiaryRoot(var_119_object); // 0xf27 Func
	var_120_bool = var_119_object == 0; // 0xf29 Not
	if(var_120_bool == 0) goto Label_3888; // 0xf2a JumpB
	var_121_string = "Can't retrieve diary root"; // 0xf2b PushS
	Trace(var_121_string); // 0xf2c Func
	var_117_object = 0; // 0xf2e MovB
	return 2; // 0xf2f Return
	
Label_3888:
	var_117_object = var_119_object; // 0xf30 Mov
	return 2; // 0xf31 Return
}


func_3112(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0xc28 PushV
	GetPosition(var_33_cvector); // 0xc29 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0xc2b PushV
	var_35_cvector = var_33_cvector; // 0xc2c Mov
	func_3102(var_34_bool, var_35_cvector); // 0xc2d NEW_2
	var_30_bool = var_34_bool; // 0xc2e Mov
	return 2; // 0xc30 Return
}


func_2856(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xb28 PushV
	var_54_string = "player"; // 0xb29 PushS
	FindActor(var_53_object, var_54_string); // 0xb2a Func
	var_55_bool = var_53_object == 0; // 0xb2c Not
	if(var_55_bool == 0) goto Label_2864; // 0xb2d JumpB
	var_51_bool = 0; // 0xb2e MovB
	return 2; // 0xb2f Return
	
Label_2864:
	var_56_bool = 0; var_57_object = Obj(); // 0xb30 PushV
	var_57_object = var_53_object; // 0xb31 Mov
	func_3112(var_57_object); // 0xb32 NEW_2
	var_51_bool = var_56_bool; // 0xb33 Mov
	return 2; // 0xb35 Return
}


func_3628()
{
	var_34_string = "ood11Block1"; // 0xe2d PushS
	var_35_int = 1; // 0xe2e PushI
	SetVariable(var_34_string, var_35_int); // 0xe2f Func
	return 0; // 0xe31 Return
}


func_3121(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0xc31 PushV
	IsLoaded(var_28_bool); // 0xc32 Func
	var_26_bool = var_28_bool; // 0xc34 Mov
	return 2; // 0xc35 Return
}


func_3634()
{
	var_40_string = "ood11Block2"; // 0xe33 PushS
	var_41_int = 1; // 0xe34 PushI
	SetVariable(var_40_string, var_41_int); // 0xe35 Func
	return 0; // 0xe37 Return
}


func_3891(var_108_bool, var_109_object, var_110_int)
{
	var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0; var_114_object = Obj(); var_115_object = Obj(); var_116_int = 0; // 0xf33 PushV
	var_117_object = Obj(); // 0xf34 PushV
	func_3878(var_117_object); // 0xf35 NEW_2
	var_114_object = var_117_object; // 0xf36 Mov
	Find(var_110_int, var_115_object); // 0xf38 ObjFunc
	var_122_bool = var_115_object == 0; // 0xf3a Not
	if(var_122_bool == 0) goto Label_3906; // 0xf3b JumpB
	var_123_string = "Can't find diary parent with id: "; // 0xf3c PushS
	var_124_int = var_123_string + var_110_int; // 0xf3d Add
	Trace(var_124_int); // 0xf3e Func
	var_108_bool = 0; // 0xf40 MovB
	return 6; // 0xf41 Return
	
Label_3906:
	AddChild(var_109_object); // 0xf42 ObjFunc
	var_125_int = 7; // 0xf44 PushI
	SendWorldWndMessage(var_125_int); // 0xf45 Func
	GetCategory(var_116_int); // 0xf47 ObjFunc
	SetDiarySection(var_116_int); // 0xf49 Func
	var_108_bool = 0; // 0xf4b MovB
	return 6; // 0xf4c Return
}


func_3380(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0; // 0xd34 PushV
	var_162_bool = 0; // 0xd35 PushV
	func_3534(var_162_bool); // 0xd36 NEW_2
	if(var_162_bool == 0) goto Label_3393; // 0xd38 JumpB
	lshHasSpeech(var_161_bool, var_159_string); // 0xd39 Func
	var_163_bool = var_161_bool; // 0xd3b Push
	if(var_163_bool == 0) goto Label_3393; // 0xd3c JumpB
	lshPlaySpeech(var_159_string); // 0xd3d Func
	var_158_bool = 1; // 0xd3f MovB
	return 2; // 0xd40 Return
	
Label_3393:
	var_158_bool = 0; // 0xd41 MovB
	return 2; // 0xd42 Return
}


func_3126(var_64_bool, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; // 0xc36 PushV
	GetPosition(var_77_cvector); // 0xc37 ObjFunc
	GetEyesHeight(var_76_float); // 0xc39 ObjFunc
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xc3b PushE
	var_85_float = var_85_float + var_76_float; // 0xc3c Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xc3d PopE
	GetPosition(var_78_cvector); // 0xc3e Func
	GetEyesHeight(var_76_float); // 0xc40 Func
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xc42 PushE
	var_86_float = var_86_float + var_76_float; // 0xc43 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xc44 PopE
	var_79_cvector = var_77_cvector - var_78_cvector; // 0xc45 Sub2
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xc46 PushE
	var_87_float = 0; // 0xc47 MovI
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xc48 PopE
	var_88_int = var_79_cvector | var_79_cvector; // 0xc49 Or
	var_89_float = sqrt(var_88_int); // 0xc4a Sqrt
	var_79_cvector = var_79_cvector / var_79_cvector; // 0xc4b Div2
	var_80_cvector = -var_79_cvector; // 0xc4c Neg2
	var_90_float = var_79_cvector * var_66_float; // 0xc4d Mult
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0xc4e PushV
	var_93_cvector = CVector(0.0, 1.0, 0.0); // 0xc4f PushVec
	var_92_cvector = var_80_cvector ^ var_93_cvector; // 0xc50 Xor2
	func_3408(var_91_cvector, var_92_cvector); // 0xc51 NEW_2
	var_99_int = 25; // 0xc53 PushI
	var_100_float = var_91_cvector * var_99_int; // 0xc54 Mult
	var_101_int = var_90_float + var_100_float; // 0xc55 Add
	var_102_cvector = CVector(0.0, 10.0, 0.0); // 0xc56 PushVec
	var_81_cvector = var_101_int - var_102_cvector; // 0xc57 Sub2
	var_82_cvector = var_78_cvector + var_81_cvector; // 0xc58 Add2
	IsOverrideActive(var_83_bool); // 0xc59 Func
	var_103_bool = var_83_bool; // 0xc5b Push
	if(var_103_bool == 0) goto Label_3167; // 0xc5c JumpB
	var_64_bool = 0; // 0xc5d MovB
	return 18; // 0xc5e Return
	
Label_3167:
	StopWorld(); // 0xc5f Func
	CameraTransit(var_82_cvector, var_80_cvector); // 0xc61 Func
	var_104_float = GetByIndex(var_81_cvector, 0); // 0xc63 PushE
	var_105_float = GetByIndex(var_81_cvector, 2); // 0xc64 PushE
	Rotate(var_104_float, var_105_float); // 0xc65 Func
	var_106_bool = 0; // 0xc67 PushV
	func_3534(var_106_bool); // 0xc68 NEW_2
	if(var_106_bool == 0) goto Label_3180; // 0xc6a JumpB
	goto Label_3188; // 0xc6b Jump
	
Label_3188:
	CameraWaitForPlayFinish(); // 0xc74 Func
	ResumeWorld(); // 0xc76 Func
	var_64_bool = 1; // 0xc78 MovB
	return 18; // 0xc79 Return
	
Label_3180:
	var_107_string = "head"; // 0xc6c PushS
	HasAnimationTrack(var_84_bool, var_107_string); // 0xc6d Func
	var_108_bool = var_84_bool; // 0xc6f Push
	if(var_108_bool == 0) goto Label_3188; // 0xc70 JumpB
	var_109_string = "head"; // 0xc71 PushS
	LookAsyncCamera(var_109_string); // 0xc72 Func
}


func_1079(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x438 PushV
	func_3534(var_226_bool); // 0x439 NEW_2
	var_227_bool = var_226_bool == 0; // 0x43b Not
	if(var_227_bool == 0) goto Label_1086; // 0x43c JumpB
	return 0; // 0x43d Return
	
Label_1086:
	var_228_bool = var_225_string == var_2_object; // 0x43e Eq
	if(var_228_bool == 0) goto Label_1089; // 0x43f JumpB
	return 0; // 0x440 Return
	
Label_1089:
	var_229_string = ""; var_230_bool = 0; // 0x441 PushV
	var_229_string = var_225_string; // 0x442 Mov
	var_231_string = ""; // 0x443 PushS
	var_232_bool = var_225_string == var_231_string; // 0x444 Eq
	if(var_232_bool == 0) goto Label_1096; // 0x445 JumpB
	var_230_bool = 0; // 0x446 MovB
	goto Label_1097; // 0x447 Jump
	
Label_1097:
	func_3365(var_229_string, var_230_bool); // 0x449 NEW_2
	var_2_object = var_225_string; // 0x44b TMov
	return 0; // 0x44c Return
	
Label_1096:
	var_230_bool = 1; // 0x448 MovB
}


func_3640()
{
	var_50_string = "ood11Block3"; // 0xe39 PushS
	var_51_int = 1; // 0xe3a PushI
	SetVariable(var_50_string, var_51_int); // 0xe3b Func
	return 0; // 0xe3d Return
}


func_2871(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0xb37 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0xb38 PushE
	RotateAsync(var_103_float, var_104_float); // 0xb39 Func
	return 0; // 0xb3b Return
}


func_2876(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0xb3c PushV
	var_39_string = "player"; // 0xb3d PushS
	FindActor(var_37_object, var_39_string); // 0xb3e Func
	var_40_bool = var_37_object == 0; // 0xb40 Not
	if(var_40_bool == 0) goto Label_2884; // 0xb41 JumpB
	var_34_bool = 0; // 0xb42 MovB
	return 4; // 0xb43 Return
	
Label_2884:
	var_41_float = 0; var_42_object = Obj(); // 0xb44 PushV
	var_42_object = var_37_object; // 0xb45 Mov
	func_3094(var_42_object); // 0xb46 NEW_2
	var_49_float = 90000.0; // 0xb48 PushF
	var_50_bool = var_41_float > var_49_float; // 0xb49 GT
	if(var_50_bool == 0) goto Label_2893; // 0xb4a JumpB
	var_34_bool = 0; // 0xb4b MovB
	return 4; // 0xb4c Return
	
Label_2893:
	CanSee(var_38_bool, var_37_object); // 0xb4d Func
	var_34_bool = var_38_bool; // 0xb4f Mov
	return 4; // 0xb50 Return
}


func_3646(var_72_object)
{
	var_74_string = "rifle ammo10 is given"; // 0xe3f PushS
	Trace(var_74_string); // 0xe40 Func
	var_75_object = Obj(); var_76_string = ""; var_77_int = 0; // 0xe42 PushV
	var_75_object = var_72_object; // 0xe43 Mov
	var_76_string = "rifle_ammo"; // 0xe44 MovS
	var_77_int = 10; // 0xe45 MovI
	func_3454(var_75_object, var_76_string, var_77_int); // 0xe46 NEW_2
	return 0; // 0xe48 Return
}


func_3395()
{
	var_29_bool = 0; // 0xd43 PushV
	func_3534(var_29_bool); // 0xd44 NEW_2
	if(var_29_bool == 0) goto Label_3401; // 0xd46 JumpB
	lshStopSpeech(); // 0xd47 Func
	
Label_3401:
	return 0; // 0xd49 Return
}


func_3657()
{
	var_95_string = "ood9Block2"; // 0xe4a PushS
	var_96_int = 1; // 0xe4b PushI
	SetVariable(var_95_string, var_96_int); // 0xe4c Func
	return 0; // 0xe4e Return
}


func_3402(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0xd4a PushV
	self(var_128_object); // 0xd4b Func
	var_126_object = var_128_object; // 0xd4d Mov
	return 2; // 0xd4e Return
}


func_2635(var_0_object, var_587_int, var_588_object)
{
	var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; // 0xa4b PushV
	var_0_object = var_588_object; // 0xa4c TMov
	var_598_bool = 0; var_599_object = Obj(); var_600_float = 0; // 0xa4d PushV
	var_599_object = var_588_object; // 0xa4e Mov
	var_600_float = 70.0; // 0xa4f MovF
	func_3126(var_599_object, var_600_float); // 0xa50 NEW_2
	var_601_bool = var_598_bool == 0; // 0xa52 Not
	if(var_601_bool == 0) goto Label_2646; // 0xa53 JumpB
	var_587_int = -2; // 0xa54 MovI
	return 8; // 0xa55 Return
	
Label_2646:
	CreateDialog(var_594_object); // 0xa56 Func
	var_602_int = 0; // 0xa58 PushV
	func_3528(var_602_int); // 0xa59 NEW_2
	SetNPCName(var_602_int); // 0xa5b ObjFunc
	var_603_int = 0; // 0xa5d PushV
	func_3526(var_603_int); // 0xa5e NEW_2
	SetNPCDescription(var_603_int); // 0xa60 ObjFunc
	var_604_string = ""; // 0xa62 PushV
	func_3530(var_604_string); // 0xa63 NEW_2
	SetPhoto(var_604_string); // 0xa65 ObjFunc
	var_605_string = ""; // 0xa67 PushV
	func_3532(var_605_string); // 0xa68 NEW_2
	SetPhoto2(var_605_string); // 0xa6a ObjFunc
	var_606_int = 0; // 0xa6c PushV
	func_3919(var_606_int); // 0xa6d NEW_2
	SetPlayerName(var_606_int); // 0xa6f ObjFunc
	var_596_int = -1; // 0xa71 MovI
	IsOverrideActive(var_595_bool); // 0xa72 Func
	var_607_bool = var_595_bool; // 0xa74 Push
	if(var_607_bool == 0) goto Label_2680; // 0xa75 JumpB
	var_587_int = -2; // 0xa76 MovI
	return 8; // 0xa77 Return
	
Label_2680:
	DoDialog(var_594_object); // 0xa78 Func
	var_608_bool = 0; var_609_object = Obj(); // 0xa7a PushV
	var_610_object = Obj(); // 0xa7b PushV
	func_3402(var_610_object); // 0xa7c NEW_2
	var_609_object = var_610_object; // 0xa7d Mov
	func_3211(var_608_bool, var_609_object); // 0xa7f NEW_2
	var_611_object = Obj(); var_612_object = Obj(); // 0xa81 PushV
	var_611_object = var_588_object; // 0xa82 Mov
	var_612_object = var_594_object; // 0xa83 Mov
	TaskCall(9); // 0xa84 TaskCall
	func_2716(var_613_object, var_614_object, var_615_string, var_616_bool, var_611_object, var_612_object); // 0xa85 NEW_2
	TaskReturn(); // 0xa86 TaskReturn
	IsDialogEnd(var_597_bool); // 0xa88 ObjFunc
	
Label_2698:
	var_641_bool = var_597_bool == 0; // 0xa8a Not
	if(var_641_bool == 0) goto Label_2705; // 0xa8b JumpB
	sync(); // 0xa8c Func
	IsDialogEnd(var_597_bool); // 0xa8e ObjFunc
	goto Label_2698; // 0xa90 Jump
	
Label_2705:
	var_642_object = Obj(); // 0xa91 PushV
	var_642_object = var_588_object; // 0xa92 Mov
	func_3194(); // 0xa93 NEW_2
	StopDialog(var_594_object); // 0xa95 Func
	GetReturnValue(var_596_int); // 0xa97 ObjFunc
	var_587_int = var_596_int; // 0xa99 Mov
	return 8; // 0xa9a Return
}


func_1866(var_0_object, var_393_int, var_394_object)
{
	var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0; var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0; // 0x74a PushV
	var_0_object = var_394_object; // 0x74b TMov
	var_404_bool = 0; var_405_object = Obj(); var_406_float = 0; // 0x74c PushV
	var_405_object = var_394_object; // 0x74d Mov
	var_406_float = 70.0; // 0x74e MovF
	func_3126(var_405_object, var_406_float); // 0x74f NEW_2
	var_407_bool = var_404_bool == 0; // 0x751 Not
	if(var_407_bool == 0) goto Label_1877; // 0x752 JumpB
	var_393_int = -2; // 0x753 MovI
	return 8; // 0x754 Return
	
Label_1877:
	CreateDialog(var_400_object); // 0x755 Func
	var_408_int = 0; // 0x757 PushV
	func_3528(var_408_int); // 0x758 NEW_2
	SetNPCName(var_408_int); // 0x75a ObjFunc
	var_409_int = 0; // 0x75c PushV
	func_3526(var_409_int); // 0x75d NEW_2
	SetNPCDescription(var_409_int); // 0x75f ObjFunc
	var_410_string = ""; // 0x761 PushV
	func_3530(var_410_string); // 0x762 NEW_2
	SetPhoto(var_410_string); // 0x764 ObjFunc
	var_411_string = ""; // 0x766 PushV
	func_3532(var_411_string); // 0x767 NEW_2
	SetPhoto2(var_411_string); // 0x769 ObjFunc
	var_412_int = 0; // 0x76b PushV
	func_3919(var_412_int); // 0x76c NEW_2
	SetPlayerName(var_412_int); // 0x76e ObjFunc
	var_402_int = -1; // 0x770 MovI
	IsOverrideActive(var_401_bool); // 0x771 Func
	var_413_bool = var_401_bool; // 0x773 Push
	if(var_413_bool == 0) goto Label_1911; // 0x774 JumpB
	var_393_int = -2; // 0x775 MovI
	return 8; // 0x776 Return
	
Label_1911:
	DoDialog(var_400_object); // 0x777 Func
	var_414_bool = 0; var_415_object = Obj(); // 0x779 PushV
	var_416_object = Obj(); // 0x77a PushV
	func_3402(var_416_object); // 0x77b NEW_2
	var_415_object = var_416_object; // 0x77c Mov
	func_3211(var_414_bool, var_415_object); // 0x77e NEW_2
	var_417_object = Obj(); var_418_object = Obj(); // 0x780 PushV
	var_417_object = var_394_object; // 0x781 Mov
	var_418_object = var_400_object; // 0x782 Mov
	TaskCall(7); // 0x783 TaskCall
	func_1947(var_419_object, var_420_object, var_421_string, var_422_bool, var_417_object, var_418_object); // 0x784 NEW_2
	TaskReturn(); // 0x785 TaskReturn
	IsDialogEnd(var_403_bool); // 0x787 ObjFunc
	
Label_1929:
	var_492_bool = var_403_bool == 0; // 0x789 Not
	if(var_492_bool == 0) goto Label_1936; // 0x78a JumpB
	sync(); // 0x78b Func
	IsDialogEnd(var_403_bool); // 0x78d ObjFunc
	goto Label_1929; // 0x78f Jump
	
Label_1936:
	var_493_object = Obj(); // 0x790 PushV
	var_493_object = var_394_object; // 0x791 Mov
	func_3194(); // 0x792 NEW_2
	StopDialog(var_400_object); // 0x794 Func
	GetReturnValue(var_402_int); // 0x796 ObjFunc
	var_393_int = var_402_int; // 0x798 Mov
	return 8; // 0x799 Return
}


func_3663(var_534_bool, var_535_object)
{
	var_536_bool = 0; var_537_object = Obj(); // 0xe50 PushV
	var_537_object = var_535_object; // 0xe51 Mov
	func_3841(var_537_object); // 0xe52 NEW_2
	if(var_536_bool == 0) goto Label_3671; // 0xe54 JumpB
	var_534_bool = 1; // 0xe55 MovB
	return 0; // 0xe56 Return
	
Label_3671:
	var_534_bool = 0; // 0xe57 MovB
	return 0; // 0xe58 Return
}


func_3919(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xf4f PushV
	var_118_string = "branch"; // 0xf50 PushS
	GetVariable(var_118_string, var_117_int); // 0xf51 Func
	var_119_int = 0; // 0xf53 PushI
	var_120_bool = var_117_int == var_119_int; // 0xf54 Eq
	if(var_120_bool == 0) goto Label_3929; // 0xf55 JumpB
	var_115_int = 1; // 0xf56 MovI
	return 2; // 0xf57 Return
	
Label_3929:
	var_121_int = 1; // 0xf59 PushI
	var_122_bool = var_117_int == var_121_int; // 0xf5a Eq
	if(var_122_bool == 0) goto Label_3934; // 0xf5b JumpB
	var_115_int = 2; // 0xf5c MovI
	return 2; // 0xf5d Return
	
Label_3934:
	var_115_int = 3; // 0xf5e MovI
	return 2; // 0xf5f Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_350_object, var_351_object)
{
	var_0_object = var_351_object; // 0x52 TMov
	var_1_object = var_350_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_356_int = 1; // 0x55 PushI
	if(var_356_int == 0) goto Label_119; // 0x56 JumpB
	var_357_string = ""; // 0x57 PushV
	var_357_string = "Neutral"; // 0x58 MovS
	func_149(var_351_object, var_357_string); // 0x59 NEW_2
	var_365_int = 534152; // 0x5b PushI
	SetMessage(var_365_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_366_bool = 0; var_367_object = Obj(); // 0x60 PushV
	var_367_object = var_1_object; // 0x61 MovT
	func_3709(var_367_object); // 0x62 NEW_2
	if(var_366_bool == 0) goto Label_106; // 0x64 JumpB
	var_372_int = 534153; // 0x65 PushI
	var_373_int = 38340; // 0x66 PushI
	var_374_int = 35740; // 0x67 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x68 TObjFunc
	
Label_106:
	var_375_int = 534154; // 0x6a PushI
	var_376_int = -1; // 0x6b PushI
	var_377_int = 35741; // 0x6c PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x6d TObjFunc
	var_378_int = 536532; // 0x6f PushI
	var_379_int = -1; // 0x70 PushI
	var_380_int = 38339; // 0x71 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_381_bool = 0; // 0x77 PushV
	func_3534(var_381_bool); // 0x78 NEW_2
	if(var_381_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_382_string = var_3_string; // 0x7d PushT
	if(var_382_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_383_string = ""; // 0x80 PushV
	var_383_string = var_2_object; // 0x81 MovT
	func_3349(var_383_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_384_string = "all"; // 0x86 PushS
	var_385_string = "idle"; // 0x87 PushS
	PlayAnimation(var_384_string, var_385_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_386_string = var_3_string; // 0x8c PushT
	if(var_386_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_387_string = "all"; // 0x8f PushS
	var_388_string = "idle"; // 0x90 PushS
	PlayAnimation(var_387_string, var_388_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_3408(var_91_cvector, var_92_cvector)
{
	var_94_float = 0; var_95_float = 0; // 0xd50 PushV
	var_96_int = var_92_cvector | var_92_cvector; // 0xd51 Or
	var_95_float = sqrt(var_96_int); // 0xd52 Sqrt2
	var_97_float = 0.0; // 0xd53 PushF
	var_98_bool = var_95_float < var_97_float; // 0xd54 LT
	if(var_98_bool == 0) goto Label_3416; // 0xd55 JumpB
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0xd56 MovV
	return 2; // 0xd57 Return
	
Label_3416:
	var_91_cvector = var_92_cvector / var_92_cvector; // 0xd58 Div2
	return 2; // 0xd59 Return
}


func_2898()
{
	var_645_float = 0; var_646_float = 0; // 0xb52 PushV
	var_647_int = 8; // 0xb53 PushI
	var_648_int = 16; // 0xb54 PushI
	rand(var_646_float, var_647_int, var_648_int); // 0xb55 Func
	var_649_int = 10; // 0xb57 PushI
	SetTimer(var_649_int, var_646_float); // 0xb58 Func
	return 2; // 0xb5a Return
}


func_3673(var_244_bool)
{
	var_246_int = 0; var_247_string = ""; // 0xe5a PushV
	var_247_string = "d8q01"; // 0xe5b MovS
	func_3418(var_246_int, var_247_string); // 0xe5c NEW_2
	var_250_int = 1000; // 0xe5e PushI
	var_251_bool = var_246_int == var_250_int; // 0xe5f Eq
	if(var_251_bool == 0) goto Label_3683; // 0xe60 JumpB
	var_244_bool = 1; // 0xe61 MovB
	return 0; // 0xe62 Return
	
Label_3683:
	var_244_bool = 0; // 0xe63 MovB
	return 0; // 0xe64 Return
}


func_602(var_2_object, var_550_string)
{
	var_551_bool = 0; // 0x25b PushV
	func_3534(var_551_bool); // 0x25c NEW_2
	var_552_bool = var_551_bool == 0; // 0x25e Not
	if(var_552_bool == 0) goto Label_609; // 0x25f JumpB
	return 0; // 0x260 Return
	
Label_609:
	var_553_bool = var_550_string == var_2_object; // 0x261 Eq
	if(var_553_bool == 0) goto Label_612; // 0x262 JumpB
	return 0; // 0x263 Return
	
Label_612:
	var_554_string = ""; var_555_bool = 0; // 0x264 PushV
	var_554_string = var_550_string; // 0x265 Mov
	var_556_string = ""; // 0x266 PushS
	var_557_bool = var_550_string == var_556_string; // 0x267 Eq
	if(var_557_bool == 0) goto Label_619; // 0x268 JumpB
	var_555_bool = 0; // 0x269 MovB
	goto Label_620; // 0x26a Jump
	
Label_620:
	func_3365(var_554_string, var_555_bool); // 0x26c NEW_2
	var_2_object = var_550_string; // 0x26e TMov
	return 0; // 0x26f Return
	
Label_619:
	var_555_bool = 1; // 0x26b MovB
}


func_3418(var_246_int, var_247_string)
{
	var_248_int = 0; var_249_int = 0; // 0xd5a PushV
	GetVariable(var_247_string, var_249_int); // 0xd5b Func
	var_246_int = var_249_int; // 0xd5d Mov
	return 2; // 0xd5e Return
}


func_2907()
{
	var_644_int = 10; // 0xb5b PushI
	KillTimer(var_644_int); // 0xb5c Func
	return 0; // 0xb5e Return
}


func_3423(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xd5f PushV
	CreateIntVector(var_66_object); // 0xd60 Func
	add(var_63_int); // 0xd62 ObjFunc
	add(var_64_int); // 0xd64 ObjFunc
	var_67_int = 3; // 0xd66 PushI
	SendWorldWndMessage(var_67_int, var_66_object); // 0xd67 Func
	return 2; // 0xd69 Return
}


func_3936(var_44_object)
{
	var_45_bool = 0; var_46_int = 0; // 0xf61 PushV
	var_46_int = 9; // 0xf62 MovI
	func_3496(var_45_bool, var_46_int); // 0xf63 NEW_2
	if(var_45_bool == 0) goto Label_3949; // 0xf65 JumpB
	var_53_int = 0; var_54_object = Obj(); // 0xf66 PushV
	var_54_object = var_44_object; // 0xf67 Mov
	TaskCall(4); // 0xf68 TaskCall
	func_882(var_55_object, var_53_int, var_54_object); // 0xf69 NEW_2
	TaskReturn(); // 0xf6a TaskReturn
	return 0; // 0xf6c Return
	
Label_3949:
	var_324_bool = 0; var_325_int = 0; // 0xf6d PushV
	var_325_int = 10; // 0xf6e MovI
	func_3496(var_324_bool, var_325_int); // 0xf6f NEW_2
	if(var_324_bool == 0) goto Label_3961; // 0xf71 JumpB
	var_326_int = 0; var_327_object = Obj(); // 0xf72 PushV
	var_327_object = var_44_object; // 0xf73 Mov
	TaskCall(0); // 0xf74 TaskCall
	func_0(var_328_object, var_326_int, var_327_object); // 0xf75 NEW_2
	TaskReturn(); // 0xf76 TaskReturn
	return 0; // 0xf78 Return
	
Label_3961:
	var_391_bool = 0; var_392_int = 0; // 0xf79 PushV
	var_392_int = 11; // 0xf7a MovI
	func_3496(var_391_bool, var_392_int); // 0xf7b NEW_2
	if(var_391_bool == 0) goto Label_3973; // 0xf7d JumpB
	var_393_int = 0; var_394_object = Obj(); // 0xf7e PushV
	var_394_object = var_44_object; // 0xf7f Mov
	TaskCall(6); // 0xf80 TaskCall
	func_1866(var_395_object, var_393_int, var_394_object); // 0xf81 NEW_2
	TaskReturn(); // 0xf82 TaskReturn
	return 0; // 0xf84 Return
	
Label_3973:
	var_494_bool = 0; var_495_int = 0; // 0xf85 PushV
	var_495_int = 12; // 0xf86 MovI
	func_3496(var_494_bool, var_495_int); // 0xf87 NEW_2
	if(var_494_bool == 0) goto Label_3985; // 0xf89 JumpB
	var_496_int = 0; var_497_object = Obj(); // 0xf8a PushV
	var_497_object = var_44_object; // 0xf8b Mov
	TaskCall(2); // 0xf8c TaskCall
	func_408(var_498_object, var_496_int, var_497_object); // 0xf8d NEW_2
	TaskReturn(); // 0xf8e TaskReturn
	return 0; // 0xf90 Return
	
Label_3985:
	var_587_int = 0; var_588_object = Obj(); // 0xf91 PushV
	var_588_object = var_44_object; // 0xf92 Mov
	TaskCall(8); // 0xf93 TaskCall
	func_2635(var_589_object, var_587_int, var_588_object); // 0xf94 NEW_2
	TaskReturn(); // 0xf95 TaskReturn
	return 0; // 0xf97 Return
}


func_3685(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0xe66 PushV
	var_255_string = "ood9Block3"; // 0xe67 MovS
	func_3418(var_254_int, var_255_string); // 0xe68 NEW_2
	var_256_int = 0; // 0xe6a PushI
	var_257_bool = var_254_int == var_256_int; // 0xe6b Eq
	if(var_257_bool == 0) goto Label_3695; // 0xe6c JumpB
	var_252_bool = 1; // 0xe6d MovB
	return 0; // 0xe6e Return
	
Label_3695:
	var_252_bool = 0; // 0xe6f MovB
	return 0; // 0xe70 Return
}


func_3435(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0xd6b PushV
	GetItemID(var_58_int); // 0xd6c ObjFunc
	var_61_string = "Category"; // 0xd6e PushS
	GetInvItemProperty(var_59_int, var_58_int, var_61_string); // 0xd6f Func
	AddItem(var_60_bool, var_53_object, var_59_int, var_54_int); // 0xd71 ObjFunc
	var_62_bool = var_60_bool == 0; // 0xd73 Not
	if(var_62_bool == 0) goto Label_3448; // 0xd74 JumpB
	DropItems(var_53_object, var_54_int); // 0xd75 ObjFunc
	goto Label_3453; // 0xd77 Jump
	
Label_3453:
	return 6; // 0xd7d Return
	
Label_3448:
	var_63_int = 0; var_64_int = 0; // 0xd78 PushV
	var_63_int = var_58_int; // 0xd79 Mov
	var_64_int = var_54_int; // 0xd7a Mov
	func_3423(var_63_int, var_64_int); // 0xd7b NEW_2
}


func_3697(var_286_bool)
{
	var_288_int = 0; var_289_string = ""; // 0xe72 PushV
	var_289_string = "d9q02"; // 0xe73 MovS
	func_3418(var_288_int, var_289_string); // 0xe74 NEW_2
	var_290_int = 1; // 0xe76 PushI
	var_291_bool = var_288_int == var_290_int; // 0xe77 Eq
	if(var_291_bool == 0) goto Label_3707; // 0xe78 JumpB
	var_286_bool = 1; // 0xe79 MovB
	return 0; // 0xe7a Return
	
Label_3707:
	var_286_bool = 0; // 0xe7b MovB
	return 0; // 0xe7c Return
}


func_882(var_0_object, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x372 PushV
	var_0_object = var_54_object; // 0x373 TMov
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x374 PushV
	var_65_object = var_54_object; // 0x375 Mov
	var_66_float = 70.0; // 0x376 MovF
	func_3126(var_65_object, var_66_float); // 0x377 NEW_2
	var_110_bool = var_64_bool == 0; // 0x379 Not
	if(var_110_bool == 0) goto Label_893; // 0x37a JumpB
	var_53_int = -2; // 0x37b MovI
	return 8; // 0x37c Return
	
Label_893:
	CreateDialog(var_60_object); // 0x37d Func
	var_111_int = 0; // 0x37f PushV
	func_3528(var_111_int); // 0x380 NEW_2
	SetNPCName(var_111_int); // 0x382 ObjFunc
	var_112_int = 0; // 0x384 PushV
	func_3526(var_112_int); // 0x385 NEW_2
	SetNPCDescription(var_112_int); // 0x387 ObjFunc
	var_113_string = ""; // 0x389 PushV
	func_3530(var_113_string); // 0x38a NEW_2
	SetPhoto(var_113_string); // 0x38c ObjFunc
	var_114_string = ""; // 0x38e PushV
	func_3532(var_114_string); // 0x38f NEW_2
	SetPhoto2(var_114_string); // 0x391 ObjFunc
	var_115_int = 0; // 0x393 PushV
	func_3919(var_115_int); // 0x394 NEW_2
	SetPlayerName(var_115_int); // 0x396 ObjFunc
	var_62_int = -1; // 0x398 MovI
	IsOverrideActive(var_61_bool); // 0x399 Func
	var_123_bool = var_61_bool; // 0x39b Push
	if(var_123_bool == 0) goto Label_927; // 0x39c JumpB
	var_53_int = -2; // 0x39d MovI
	return 8; // 0x39e Return
	
Label_927:
	DoDialog(var_60_object); // 0x39f Func
	var_124_bool = 0; var_125_object = Obj(); // 0x3a1 PushV
	var_126_object = Obj(); // 0x3a2 PushV
	func_3402(var_126_object); // 0x3a3 NEW_2
	var_125_object = var_126_object; // 0x3a4 Mov
	func_3211(var_124_bool, var_125_object); // 0x3a6 NEW_2
	var_214_object = Obj(); var_215_object = Obj(); // 0x3a8 PushV
	var_214_object = var_54_object; // 0x3a9 Mov
	var_215_object = var_60_object; // 0x3aa Mov
	TaskCall(5); // 0x3ab TaskCall
	func_963(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object); // 0x3ac NEW_2
	TaskReturn(); // 0x3ad TaskReturn
	IsDialogEnd(var_63_bool); // 0x3af ObjFunc
	
Label_945:
	var_316_bool = var_63_bool == 0; // 0x3b1 Not
	if(var_316_bool == 0) goto Label_952; // 0x3b2 JumpB
	sync(); // 0x3b3 Func
	IsDialogEnd(var_63_bool); // 0x3b5 ObjFunc
	goto Label_945; // 0x3b7 Jump
	
Label_952:
	var_317_object = Obj(); // 0x3b8 PushV
	var_317_object = var_54_object; // 0x3b9 Mov
	func_3194(); // 0x3ba NEW_2
	StopDialog(var_60_object); // 0x3bc Func
	GetReturnValue(var_62_int); // 0x3be ObjFunc
	var_53_int = var_62_int; // 0x3c0 Mov
	return 8; // 0x3c1 Return
}


func_3194()
{
	var_318_bool = 0; var_319_bool = 0; // 0xc7a PushV
	CameraSwitchToNormal(); // 0xc7b Func
	var_320_bool = 0; // 0xc7d PushV
	func_3534(var_320_bool); // 0xc7e NEW_2
	if(var_320_bool == 0) goto Label_3202; // 0xc80 JumpB
	goto Label_3210; // 0xc81 Jump
	
Label_3210:
	return 2; // 0xc8a Return
	
Label_3202:
	var_321_string = "head"; // 0xc82 PushS
	HasAnimationTrack(var_319_bool, var_321_string); // 0xc83 Func
	var_322_bool = var_319_bool; // 0xc85 Push
	if(var_322_bool == 0) goto Label_3210; // 0xc86 JumpB
	var_323_string = "head"; // 0xc87 PushS
	UnlookAsync(var_323_string); // 0xc88 Func
}


func_3709(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0xe7e PushV
	var_369_string = "d10q03"; // 0xe7f MovS
	func_3418(var_368_int, var_369_string); // 0xe80 NEW_2
	var_370_int = 3; // 0xe82 PushI
	var_371_bool = var_368_int == var_370_int; // 0xe83 Eq
	if(var_371_bool == 0) goto Label_3719; // 0xe84 JumpB
	var_366_bool = 1; // 0xe85 MovB
	return 0; // 0xe86 Return
	
Label_3719:
	var_366_bool = 0; // 0xe87 MovB
	return 0; // 0xe88 Return
}


func_3454(var_75_object, var_76_string, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0xd7e PushV
	CreateInvItem(var_79_object); // 0xd7f Func
	SetItemName(var_76_string); // 0xd81 ObjFunc
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; // 0xd83 PushV
	var_80_object = var_75_object; // 0xd84 Mov
	var_81_object = var_79_object; // 0xd85 Mov
	var_82_int = var_77_int; // 0xd86 Mov
	func_3435(var_81_object, var_82_int); // 0xd87 NEW_2
	return 2; // 0xd89 Return
}


func_3721(var_528_bool)
{
	var_530_int = 0; var_531_string = ""; // 0xe8a PushV
	var_531_string = "ood12Block1"; // 0xe8b MovS
	func_3418(var_530_int, var_531_string); // 0xe8c NEW_2
	var_532_int = 0; // 0xe8e PushI
	var_533_bool = var_530_int == var_532_int; // 0xe8f Eq
	if(var_533_bool == 0) goto Label_3731; // 0xe90 JumpB
	var_528_bool = 1; // 0xe91 MovB
	return 0; // 0xe92 Return
	
Label_3731:
	var_528_bool = 0; // 0xe93 MovB
	return 0; // 0xe94 Return
}


func_3211(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0xc8b PushV
	var_133_string = "voice_common"; // 0xc8c PushS
	GetVariable(var_133_string, var_131_int); // 0xc8d Func
	var_134_int = var_131_int; // 0xc8f Push
	if(var_134_int == 0) goto Label_3249; // 0xc90 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0xc91 PushV
	var_136_object = var_125_object; // 0xc92 Mov
	func_3269(var_136_object); // 0xc93 NEW_2
	var_165_bool = var_135_bool == 0; // 0xc95 Not
	if(var_165_bool == 0) goto Label_3231; // 0xc96 JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0xc97 PushV
	var_167_object = var_125_object; // 0xc98 Mov
	func_3306(var_167_object); // 0xc99 NEW_2
	var_196_bool = var_166_bool == 0; // 0xc9b Not
	if(var_196_bool == 0) goto Label_3231; // 0xc9c JumpB
	var_124_bool = 0; // 0xc9d MovB
	return 4; // 0xc9e Return
	
Label_3231:
	var_197_int = 2; // 0xc9f PushI
	irand(var_132_int, var_197_int); // 0xca0 Func
	var_198_int = var_132_int; // 0xca2 Push
	if(var_198_int == 0) goto Label_3244; // 0xca3 JumpB
	var_199_string = "voice_common"; // 0xca4 PushS
	var_200_int = 1; // 0xca5 PushI
	var_201_int = var_131_int + var_200_int; // 0xca6 Add
	var_202_int = 3; // 0xca7 PushI
	var_203_int = var_201_int / var_202_int; // 0xca8 Mod
	SetVariable(var_199_string, var_203_int); // 0xca9 Func
	goto Label_3248; // 0xcab Jump
	
Label_3248:
	goto Label_3267; // 0xcb0 Jump
	
Label_3267:
	var_124_bool = 1; // 0xcc3 MovB
	return 4; // 0xcc4 Return
	
Label_3244:
	var_204_string = "voice_common"; // 0xcac PushS
	var_205_int = 0; // 0xcad PushI
	SetVariable(var_204_string, var_205_int); // 0xcae Func
	
Label_3249:
	var_206_bool = 0; var_207_object = Obj(); // 0xcb1 PushV
	var_207_object = var_125_object; // 0xcb2 Mov
	func_3306(var_207_object); // 0xcb3 NEW_2
	var_208_bool = var_206_bool == 0; // 0xcb5 Not
	if(var_208_bool == 0) goto Label_3263; // 0xcb6 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0xcb7 PushV
	var_210_object = var_125_object; // 0xcb8 Mov
	func_3269(var_210_object); // 0xcb9 NEW_2
	var_211_bool = var_209_bool == 0; // 0xcbb Not
	if(var_211_bool == 0) goto Label_3263; // 0xcbc JumpB
	var_124_bool = 0; // 0xcbd MovB
	return 4; // 0xcbe Return
	
Label_3263:
	var_212_string = "voice_common"; // 0xcbf PushS
	var_213_int = 1; // 0xcc0 PushI
	SetVariable(var_212_string, var_213_int); // 0xcc1 Func
}


func_3467(var_126_bool, var_127_string, var_128_string)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xd8b PushV
	FindActor(var_130_object, var_127_string); // 0xd8c Func
	var_131_bool = var_130_object == 0; // 0xd8e NullEq
	if(var_131_bool == 0) goto Label_3474; // 0xd8f JumpB
	var_126_bool = 0; // 0xd90 MovB
	return 2; // 0xd91 Return
	
Label_3474:
	Trigger(var_130_object, var_128_string); // 0xd92 Func
	var_126_bool = 1; // 0xd94 MovB
	return 2; // 0xd95 Return
}


func_149(var_2_object, var_357_string)
{
	var_358_bool = 0; // 0x96 PushV
	func_3534(var_358_bool); // 0x97 NEW_2
	var_359_bool = var_358_bool == 0; // 0x99 Not
	if(var_359_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_360_bool = var_357_string == var_2_object; // 0x9c Eq
	if(var_360_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_361_string = ""; var_362_bool = 0; // 0x9f PushV
	var_361_string = var_357_string; // 0xa0 Mov
	var_363_string = ""; // 0xa1 PushS
	var_364_bool = var_357_string == var_363_string; // 0xa2 Eq
	if(var_364_bool == 0) goto Label_166; // 0xa3 JumpB
	var_362_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_3365(var_361_string, var_362_bool); // 0xa7 NEW_2
	var_2_object = var_357_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_362_bool = 1; // 0xa6 MovB
}


func_3733(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0xe96 PushV
	var_265_string = "d9q01"; // 0xe97 MovS
	func_3418(var_264_int, var_265_string); // 0xe98 NEW_2
	var_266_int = 2; // 0xe9a PushI
	var_267_bool = var_264_int == var_266_int; // 0xe9b Eq
	if(var_267_bool == 0) goto Label_3743; // 0xe9c JumpB
	var_262_bool = 1; // 0xe9d MovB
	return 0; // 0xe9e Return
	
Label_3743:
	var_262_bool = 0; // 0xe9f MovB
	return 0; // 0xea0 Return
}


func_3479(var_47_int)
{
	var_48_float = 0; var_49_float = 0; // 0xd97 PushV
	GetGameTime(var_49_float); // 0xd98 Func
	var_50_int = 1; // 0xd9a PushI
	var_51_int = 0; // 0xd9b PushV
	var_52_int = 24; // 0xd9c PushI
	var_51_int = var_49_float / var_49_float; // 0xd9d Div2
	var_47_int = var_50_int + var_51_int; // 0xd9e Add2
	return 2; // 0xd9f Return
}


func_408(var_0_object, var_496_int, var_497_object)
{
	var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; var_503_object = Obj(); var_504_bool = 0; var_505_int = 0; var_506_bool = 0; // 0x198 PushV
	var_0_object = var_497_object; // 0x199 TMov
	var_507_bool = 0; var_508_object = Obj(); var_509_float = 0; // 0x19a PushV
	var_508_object = var_497_object; // 0x19b Mov
	var_509_float = 70.0; // 0x19c MovF
	func_3126(var_508_object, var_509_float); // 0x19d NEW_2
	var_510_bool = var_507_bool == 0; // 0x19f Not
	if(var_510_bool == 0) goto Label_419; // 0x1a0 JumpB
	var_496_int = -2; // 0x1a1 MovI
	return 8; // 0x1a2 Return
	
Label_419:
	CreateDialog(var_503_object); // 0x1a3 Func
	var_511_int = 0; // 0x1a5 PushV
	func_3528(var_511_int); // 0x1a6 NEW_2
	SetNPCName(var_511_int); // 0x1a8 ObjFunc
	var_512_int = 0; // 0x1aa PushV
	func_3526(var_512_int); // 0x1ab NEW_2
	SetNPCDescription(var_512_int); // 0x1ad ObjFunc
	var_513_string = ""; // 0x1af PushV
	func_3530(var_513_string); // 0x1b0 NEW_2
	SetPhoto(var_513_string); // 0x1b2 ObjFunc
	var_514_string = ""; // 0x1b4 PushV
	func_3532(var_514_string); // 0x1b5 NEW_2
	SetPhoto2(var_514_string); // 0x1b7 ObjFunc
	var_515_int = 0; // 0x1b9 PushV
	func_3919(var_515_int); // 0x1ba NEW_2
	SetPlayerName(var_515_int); // 0x1bc ObjFunc
	var_505_int = -1; // 0x1be MovI
	IsOverrideActive(var_504_bool); // 0x1bf Func
	var_516_bool = var_504_bool; // 0x1c1 Push
	if(var_516_bool == 0) goto Label_453; // 0x1c2 JumpB
	var_496_int = -2; // 0x1c3 MovI
	return 8; // 0x1c4 Return
	
Label_453:
	DoDialog(var_503_object); // 0x1c5 Func
	var_517_bool = 0; var_518_object = Obj(); // 0x1c7 PushV
	var_519_object = Obj(); // 0x1c8 PushV
	func_3402(var_519_object); // 0x1c9 NEW_2
	var_518_object = var_519_object; // 0x1ca Mov
	func_3211(var_517_bool, var_518_object); // 0x1cc NEW_2
	var_520_object = Obj(); var_521_object = Obj(); // 0x1ce PushV
	var_520_object = var_497_object; // 0x1cf Mov
	var_521_object = var_503_object; // 0x1d0 Mov
	TaskCall(3); // 0x1d1 TaskCall
	func_489(var_522_object, var_523_object, var_524_string, var_525_bool, var_520_object, var_521_object); // 0x1d2 NEW_2
	TaskReturn(); // 0x1d3 TaskReturn
	IsDialogEnd(var_506_bool); // 0x1d5 ObjFunc
	
Label_471:
	var_585_bool = var_506_bool == 0; // 0x1d7 Not
	if(var_585_bool == 0) goto Label_478; // 0x1d8 JumpB
	sync(); // 0x1d9 Func
	IsDialogEnd(var_506_bool); // 0x1db ObjFunc
	goto Label_471; // 0x1dd Jump
	
Label_478:
	var_586_object = Obj(); // 0x1de PushV
	var_586_object = var_497_object; // 0x1df Mov
	func_3194(); // 0x1e0 NEW_2
	StopDialog(var_503_object); // 0x1e2 Func
	GetReturnValue(var_505_int); // 0x1e4 ObjFunc
	var_496_int = var_505_int; // 0x1e6 Mov
	return 8; // 0x1e7 Return
}


func_1947(var_0_object, var_1_object, var_2_object, var_3_string, var_417_object, var_418_object)
{
	var_0_object = var_418_object; // 0x79c TMov
	var_1_object = var_417_object; // 0x79d TMov
	var_3_string = 0; // 0x79e TMovB
	var_423_int = 1; // 0x79f PushI
	if(var_423_int == 0) goto Label_2027; // 0x7a0 JumpB
	var_424_string = ""; // 0x7a1 PushV
	var_424_string = "Neutral"; // 0x7a2 MovS
	func_2057(var_418_object, var_424_string); // 0x7a3 NEW_2
	var_432_int = 514280; // 0x7a5 PushI
	SetMessage(var_432_int); // 0x7a6 TObjFunc
	ClearReplies(); // 0x7a8 TObjFunc
	var_433_bool = 0; // 0x7aa PushV
	var_433_bool = 0; // 0x7ab MovB
	var_434_bool = 0; var_435_object = Obj(); // 0x7ac PushV
	var_435_object = var_1_object; // 0x7ad MovT
	func_3769(var_435_object); // 0x7ae NEW_2
	if(var_434_bool == 0) goto Label_1975; // 0x7b0 JumpB
	var_440_bool = 0; var_441_object = Obj(); // 0x7b1 PushV
	var_441_object = var_1_object; // 0x7b2 MovT
	func_3781(var_441_object); // 0x7b3 NEW_2
	if(var_440_bool == 0) goto Label_1975; // 0x7b5 JumpB
	var_433_bool = 1; // 0x7b6 MovB
	
Label_1975:
	if(var_433_bool == 0) goto Label_1981; // 0x7b7 JumpB
	var_446_int = 514281; // 0x7b8 PushI
	var_447_int = 15502; // 0x7b9 PushI
	var_448_int = 15501; // 0x7ba PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x7bb TObjFunc
	
Label_1981:
	var_449_bool = 0; // 0x7bd PushV
	var_449_bool = 0; // 0x7be MovB
	var_450_bool = 0; var_451_object = Obj(); // 0x7bf PushV
	var_451_object = var_1_object; // 0x7c0 MovT
	func_3793(var_451_object); // 0x7c1 NEW_2
	if(var_450_bool == 0) goto Label_1994; // 0x7c3 JumpB
	var_456_bool = 0; var_457_object = Obj(); // 0x7c4 PushV
	var_457_object = var_1_object; // 0x7c5 MovT
	func_3805(var_457_object); // 0x7c6 NEW_2
	if(var_456_bool == 0) goto Label_1994; // 0x7c8 JumpB
	var_449_bool = 1; // 0x7c9 MovB
	
Label_1994:
	if(var_449_bool == 0) goto Label_2000; // 0x7ca JumpB
	var_462_int = 514306; // 0x7cb PushI
	var_463_int = 15529; // 0x7cc PushI
	var_464_int = 15528; // 0x7cd PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x7ce TObjFunc
	
Label_2000:
	var_465_bool = 0; // 0x7d0 PushV
	var_465_bool = 0; // 0x7d1 MovB
	var_466_bool = 0; var_467_object = Obj(); // 0x7d2 PushV
	var_467_object = var_1_object; // 0x7d3 MovT
	func_3757(var_467_object); // 0x7d4 NEW_2
	if(var_466_bool == 0) goto Label_2013; // 0x7d6 JumpB
	var_472_bool = 0; var_473_object = Obj(); // 0x7d7 PushV
	var_473_object = var_1_object; // 0x7d8 MovT
	func_3817(var_473_object); // 0x7d9 NEW_2
	if(var_472_bool == 0) goto Label_2013; // 0x7db JumpB
	var_465_bool = 1; // 0x7dc MovB
	
Label_2013:
	if(var_465_bool == 0) goto Label_2019; // 0x7dd JumpB
	var_478_int = 514317; // 0x7de PushI
	var_479_int = 15540; // 0x7df PushI
	var_480_int = 15539; // 0x7e0 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x7e1 TObjFunc
	
Label_2019:
	var_481_int = 514324; // 0x7e3 PushI
	var_482_int = -1; // 0x7e4 PushI
	var_483_int = 15546; // 0x7e5 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x7e6 TObjFunc
	goto Label_2027; // 0x7e8 Jump
	
Label_2027:
	var_484_bool = 0; // 0x7eb PushV
	func_3534(var_484_bool); // 0x7ec NEW_2
	if(var_484_bool == 0) goto Label_2042; // 0x7ee JumpB
	
Label_2031:
	lshWaitForAnimEnd(); // 0x7ef Func
	var_485_string = var_3_string; // 0x7f1 PushT
	if(var_485_string == 0) goto Label_2036; // 0x7f2 JumpB
	goto Label_2041; // 0x7f3 Jump
	
Label_2041:
	goto Label_2056; // 0x7f9 Jump
	
Label_2056:
	return 0; // 0x808 Return
	
Label_2036:
	var_486_string = ""; // 0x7f4 PushV
	var_486_string = var_2_object; // 0x7f5 MovT
	func_3349(var_486_string); // 0x7f6 NEW_2
	goto Label_2031; // 0x7f8 Jump
	
Label_2042:
	var_487_string = "all"; // 0x7fa PushS
	var_488_string = "idle"; // 0x7fb PushS
	PlayAnimation(var_487_string, var_488_string); // 0x7fc Func
	
Label_2046:
	WaitForAnimEnd(); // 0x7fe Func
	var_489_string = var_3_string; // 0x800 PushT
	if(var_489_string == 0) goto Label_2051; // 0x801 JumpB
	goto Label_2056; // 0x802 Jump
	
Label_2051:
	var_490_string = "all"; // 0x803 PushS
	var_491_string = "idle"; // 0x804 PushS
	PlayAnimation(var_490_string, var_491_string); // 0x805 Func
	goto Label_2046; // 0x807 Jump
}


func_2716(var_0_object, var_1_object, var_2_object, var_3_string, var_611_object, var_612_object)
{
	var_0_object = var_612_object; // 0xa9d TMov
	var_1_object = var_611_object; // 0xa9e TMov
	var_3_string = 0; // 0xa9f TMovB
	var_617_int = 1; // 0xaa0 PushI
	if(var_617_int == 0) goto Label_2744; // 0xaa1 JumpB
	var_618_string = ""; // 0xaa2 PushV
	var_618_string = "Neutral"; // 0xaa3 MovS
	func_2774(var_612_object, var_618_string); // 0xaa4 NEW_2
	var_626_int = 540542; // 0xaa6 PushI
	SetMessage(var_626_int); // 0xaa7 TObjFunc
	ClearReplies(); // 0xaa9 TObjFunc
	var_627_int = 540543; // 0xaab PushI
	var_628_int = -1; // 0xaac PushI
	var_629_int = 42552; // 0xaad PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0xaae TObjFunc
	var_630_int = 540796; // 0xab0 PushI
	var_631_int = -1; // 0xab1 PushI
	var_632_int = 42845; // 0xab2 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xab3 TObjFunc
	goto Label_2744; // 0xab5 Jump
	
Label_2744:
	var_633_bool = 0; // 0xab8 PushV
	func_3534(var_633_bool); // 0xab9 NEW_2
	if(var_633_bool == 0) goto Label_2759; // 0xabb JumpB
	
Label_2748:
	lshWaitForAnimEnd(); // 0xabc Func
	var_634_string = var_3_string; // 0xabe PushT
	if(var_634_string == 0) goto Label_2753; // 0xabf JumpB
	goto Label_2758; // 0xac0 Jump
	
Label_2758:
	goto Label_2773; // 0xac6 Jump
	
Label_2773:
	return 0; // 0xad5 Return
	
Label_2753:
	var_635_string = ""; // 0xac1 PushV
	var_635_string = var_2_object; // 0xac2 MovT
	func_3349(var_635_string); // 0xac3 NEW_2
	goto Label_2748; // 0xac5 Jump
	
Label_2759:
	var_636_string = "all"; // 0xac7 PushS
	var_637_string = "idle"; // 0xac8 PushS
	PlayAnimation(var_636_string, var_637_string); // 0xac9 Func
	
Label_2763:
	WaitForAnimEnd(); // 0xacb Func
	var_638_string = var_3_string; // 0xacd PushT
	if(var_638_string == 0) goto Label_2768; // 0xace JumpB
	goto Label_2773; // 0xacf Jump
	
Label_2768:
	var_639_string = "all"; // 0xad0 PushS
	var_640_string = "idle"; // 0xad1 PushS
	PlayAnimation(var_639_string, var_640_string); // 0xad2 Func
	goto Label_2763; // 0xad4 Jump
}


func_3488(var_538_int)
{
	var_539_float = 0; var_540_float = 0; // 0xda0 PushV
	GetGameTime(var_540_float); // 0xda1 Func
	var_541_int = 0; // 0xda3 PushV
	var_541_int = var_540_float; // 0xda4 Mov
	var_542_int = 24; // 0xda5 PushI
	var_538_int = var_541_int % var_542_int; // 0xda6 Mod2
	return 2; // 0xda7 Return
}


func_3745(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0xea2 PushV
	var_271_string = "ood9Block1"; // 0xea3 MovS
	func_3418(var_270_int, var_271_string); // 0xea4 NEW_2
	var_272_int = 0; // 0xea6 PushI
	var_273_bool = var_270_int == var_272_int; // 0xea7 Eq
	if(var_273_bool == 0) goto Label_3755; // 0xea8 JumpB
	var_268_bool = 1; // 0xea9 MovB
	return 0; // 0xeaa Return
	
Label_3755:
	var_268_bool = 0; // 0xeab MovB
	return 0; // 0xeac Return
}


func_3496(var_45_bool, var_46_int)
{
	var_47_int = 0; // 0xda9 PushV
	func_3479(var_47_int); // 0xdaa NEW_2
	var_45_bool = var_47_int == var_46_int; // 0xdac Eq2
	return 0; // 0xdad Return
}


func_3757(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0xeae PushV
	var_469_string = "d11q02"; // 0xeaf MovS
	func_3418(var_468_int, var_469_string); // 0xeb0 NEW_2
	var_470_int = 1; // 0xeb2 PushI
	var_471_bool = var_468_int == var_470_int; // 0xeb3 Eq
	if(var_471_bool == 0) goto Label_3767; // 0xeb4 JumpB
	var_466_bool = 1; // 0xeb5 MovB
	return 0; // 0xeb6 Return
	
Label_3767:
	var_466_bool = 0; // 0xeb7 MovB
	return 0; // 0xeb8 Return
}


func_3502(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0xdae PushV
	var_53_string = "idle"; // 0xdaf MovS
	var_54_int = var_51_int; // 0xdb0 Push
	if(var_54_int == 0) goto Label_3507; // 0xdb1 JumpB
	var_53_string = var_53_string + var_51_int; // 0xdb2 Add2
	
Label_3507:
	var_50_string = var_53_string; // 0xdb3 Mov
	return 2; // 0xdb4 Return
}


func_3509(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0xdb5 PushV
	var_47_int = 0; // 0xdb6 MovI
	
Label_3511:
	var_49_string = "all"; // 0xdb7 PushS
	var_50_string = ""; var_51_int = 0; // 0xdb8 PushV
	var_51_int = var_47_int; // 0xdb9 Mov
	func_3502(var_50_string, var_51_int); // 0xdba NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0xdbc Func
	var_55_bool = var_48_bool == 0; // 0xdbe Not
	if(var_55_bool == 0) goto Label_3521; // 0xdbf JumpB
	goto Label_3524; // 0xdc0 Jump
	
Label_3524:
	var_44_int = var_47_int; // 0xdc4 Mov
	return 4; // 0xdc5 Return
	
Label_3521:
	var_56_int = 1; // 0xdc1 PushI
	var_47_int = var_47_int + var_56_int; // 0xdc2 Add2
	goto Label_3511; // 0xdc3 Jump
}


func_3769(var_434_bool)
{
	var_436_int = 0; var_437_string = ""; // 0xeba PushV
	var_437_string = "d11q01"; // 0xebb MovS
	func_3418(var_436_int, var_437_string); // 0xebc NEW_2
	var_438_int = 2; // 0xebe PushI
	var_439_bool = var_436_int == var_438_int; // 0xebf Eq
	if(var_439_bool == 0) goto Label_3779; // 0xec0 JumpB
	var_434_bool = 1; // 0xec1 MovB
	return 0; // 0xec2 Return
	
Label_3779:
	var_434_bool = 0; // 0xec3 MovB
	return 0; // 0xec4 Return
}


func_963(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object; // 0x3c4 TMov
	var_1_object = var_214_object; // 0x3c5 TMov
	var_3_string = 0; // 0x3c6 TMovB
	var_220_int = 1; // 0x3c7 PushI
	if(var_220_int == 0) goto Label_1049; // 0x3c8 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0x3c9 PushV
	var_221_object = var_1_object; // 0x3ca MovT
	var_222_object = var_0_object; // 0x3cb MovT
	func_3595(); // 0x3cc NEW_2
	var_225_string = ""; // 0x3ce PushV
	var_225_string = "Neutral"; // 0x3cf MovS
	func_1079(var_215_object, var_225_string); // 0x3d0 NEW_2
	var_242_int = 513882; // 0x3d2 PushI
	SetMessage(var_242_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_243_bool = 0; // 0x3d7 PushV
	var_243_bool = 0; // 0x3d8 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x3d9 PushV
	var_245_object = var_1_object; // 0x3da MovT
	func_3673(var_245_object); // 0x3db NEW_2
	if(var_244_bool == 0) goto Label_996; // 0x3dd JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x3de PushV
	var_253_object = var_1_object; // 0x3df MovT
	func_3685(var_253_object); // 0x3e0 NEW_2
	if(var_252_bool == 0) goto Label_996; // 0x3e2 JumpB
	var_243_bool = 1; // 0x3e3 MovB
	
Label_996:
	if(var_243_bool == 0) goto Label_1002; // 0x3e4 JumpB
	var_258_int = 513883; // 0x3e5 PushI
	var_259_int = 15111; // 0x3e6 PushI
	var_260_int = 15110; // 0x3e7 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x3e8 TObjFunc
	
Label_1002:
	var_261_bool = 0; // 0x3ea PushV
	var_261_bool = 0; // 0x3eb MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x3ec PushV
	var_263_object = var_1_object; // 0x3ed MovT
	func_3733(var_263_object); // 0x3ee NEW_2
	if(var_262_bool == 0) goto Label_1015; // 0x3f0 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x3f1 PushV
	var_269_object = var_1_object; // 0x3f2 MovT
	func_3745(var_269_object); // 0x3f3 NEW_2
	if(var_268_bool == 0) goto Label_1015; // 0x3f5 JumpB
	var_261_bool = 1; // 0x3f6 MovB
	
Label_1015:
	if(var_261_bool == 0) goto Label_1021; // 0x3f7 JumpB
	var_274_int = 513906; // 0x3f8 PushI
	var_275_int = 15138; // 0x3f9 PushI
	var_276_int = 15137; // 0x3fa PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x3fb TObjFunc
	
Label_1021:
	var_277_bool = 0; var_278_object = Obj(); // 0x3fd PushV
	var_278_object = var_1_object; // 0x3fe MovT
	func_3829(var_278_object); // 0x3ff NEW_2
	if(var_277_bool == 0) goto Label_1031; // 0x401 JumpB
	var_283_int = 513924; // 0x402 PushI
	var_284_int = 15156; // 0x403 PushI
	var_285_int = 15155; // 0x404 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x405 TObjFunc
	
Label_1031:
	var_286_bool = 0; var_287_object = Obj(); // 0x407 PushV
	var_287_object = var_1_object; // 0x408 MovT
	func_3697(var_287_object); // 0x409 NEW_2
	if(var_286_bool == 0) goto Label_1041; // 0x40b JumpB
	var_292_int = 533537; // 0x40c PushI
	var_293_int = 35070; // 0x40d PushI
	var_294_int = 35069; // 0x40e PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x40f TObjFunc
	
Label_1041:
	var_295_int = 513947; // 0x411 PushI
	var_296_int = -1; // 0x412 PushI
	var_297_int = 15182; // 0x413 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x414 TObjFunc
	goto Label_1049; // 0x416 Jump
	
Label_1049:
	var_298_bool = 0; // 0x419 PushV
	func_3534(var_298_bool); // 0x41a NEW_2
	if(var_298_bool == 0) goto Label_1064; // 0x41c JumpB
	
Label_1053:
	lshWaitForAnimEnd(); // 0x41d Func
	var_299_string = var_3_string; // 0x41f PushT
	if(var_299_string == 0) goto Label_1058; // 0x420 JumpB
	goto Label_1063; // 0x421 Jump
	
Label_1063:
	goto Label_1078; // 0x427 Jump
	
Label_1078:
	return 0; // 0x436 Return
	
Label_1058:
	var_300_string = ""; // 0x422 PushV
	var_300_string = var_2_object; // 0x423 MovT
	func_3349(var_300_string); // 0x424 NEW_2
	goto Label_1053; // 0x426 Jump
	
Label_1064:
	var_311_string = "all"; // 0x428 PushS
	var_312_string = "idle"; // 0x429 PushS
	PlayAnimation(var_311_string, var_312_string); // 0x42a Func
	
Label_1068:
	WaitForAnimEnd(); // 0x42c Func
	var_313_string = var_3_string; // 0x42e PushT
	if(var_313_string == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1078; // 0x430 Jump
	
Label_1073:
	var_314_string = "all"; // 0x431 PushS
	var_315_string = "idle"; // 0x432 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x433 Func
	goto Label_1068; // 0x435 Jump
}


func_3781(var_440_bool)
{
	var_442_int = 0; var_443_string = ""; // 0xec6 PushV
	var_443_string = "ood11Block1"; // 0xec7 MovS
	func_3418(var_442_int, var_443_string); // 0xec8 NEW_2
	var_444_int = 0; // 0xeca PushI
	var_445_bool = var_442_int == var_444_int; // 0xecb Eq
	if(var_445_bool == 0) goto Label_3791; // 0xecc JumpB
	var_440_bool = 1; // 0xecd MovB
	return 0; // 0xece Return
	
Label_3791:
	var_440_bool = 0; // 0xecf MovB
	return 0; // 0xed0 Return
}


func_3269(var_135_bool)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; // 0xcc5 PushV
	var_142_string = "c"; // 0xcc6 MovS
	var_143_int = 0; // 0xcc7 MovI
	
Label_3272:
	var_147_int = 1; // 0xcc8 PushI
	if(var_147_int == 0) goto Label_3285; // 0xcc9 JumpB
	var_148_int = 1; // 0xcca PushI
	var_149_int = var_143_int + var_148_int; // 0xccb Add
	var_150_int = var_142_string + var_149_int; // 0xccc Add
	HasProperty(var_150_int, var_144_bool); // 0xccd ObjFunc
	var_151_bool = var_144_bool == 0; // 0xccf Not
	if(var_151_bool == 0) goto Label_3282; // 0xcd0 JumpB
	goto Label_3285; // 0xcd1 Jump
	
Label_3285:
	var_152_bool = var_143_int == 0; // 0xcd5 Not
	if(var_152_bool == 0) goto Label_3289; // 0xcd6 JumpB
	var_135_bool = 0; // 0xcd7 MovB
	return 10; // 0xcd8 Return
	
Label_3289:
	var_145_int = 0; // 0xcd9 MovI
	var_153_int = 1; // 0xcda PushI
	var_154_bool = var_143_int > var_153_int; // 0xcdb GT
	if(var_154_bool == 0) goto Label_3295; // 0xcdc JumpB
	irand(var_145_int, var_143_int); // 0xcdd Func
	
Label_3295:
	var_155_int = 1; // 0xcdf PushI
	var_156_int = var_145_int + var_155_int; // 0xce0 Add
	var_157_int = var_142_string + var_156_int; // 0xce1 Add
	GetProperty(var_157_int, var_146_string); // 0xce2 ObjFunc
	var_158_bool = 0; var_159_string = ""; // 0xce4 PushV
	var_159_string = var_146_string; // 0xce5 Mov
	func_3380(var_158_bool, var_159_string); // 0xce6 NEW_2
	var_135_bool = var_158_bool; // 0xce7 Mov
	return 10; // 0xce9 Return
	
Label_3282:
	var_164_int = 1; // 0xcd2 PushI
	var_143_int = var_143_int + var_164_int; // 0xcd3 Add2
	goto Label_3272; // 0xcd4 Jump
}


func_3526(var_112_int)
{
	var_112_int = 515532; // 0xdc6 MovI
	return 0; // 0xdc7 Return
}


func_3528(var_111_int)
{
	var_111_int = 514840; // 0xdc8 MovI
	return 0; // 0xdc9 Return
}


func_3530(var_113_string)
{
	var_113_string = "ui/NPC_Block.png"; // 0xdca MovS
	return 0; // 0xdcb Return
}


func_3018()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0xbca PushV
	WaitForAnimEnd(); // 0xbcb Func
	var_42_bool = 0; // 0xbcd PushV
	func_3121(var_42_bool); // 0xbce NEW_2
	var_43_bool = var_42_bool == 0; // 0xbd0 Not
	if(var_43_bool == 0) goto Label_3027; // 0xbd1 JumpB
	return 12; // 0xbd2 Return
	
Label_3027:
	var_44_int = 0; // 0xbd3 PushV
	func_3509(var_44_int); // 0xbd4 NEW_2
	var_36_int = var_44_int; // 0xbd5 Mov
	var_37_int = 0; // 0xbd7 MovI
	
Label_3032:
	var_57_bool = 0; // 0xbd8 PushV
	var_57_bool = 0; // 0xbd9 MovB
	var_58_int = 5; // 0xbda PushI
	var_59_bool = var_37_int < var_58_int; // 0xbdb LT
	if(var_59_bool == 0) goto Label_3042; // 0xbdc JumpB
	var_60_bool = 0; // 0xbdd PushV
	func_3121(var_60_bool); // 0xbde NEW_2
	if(var_60_bool == 0) goto Label_3042; // 0xbe0 JumpB
	var_57_bool = 1; // 0xbe1 MovB
	
Label_3042:
	if(var_57_bool == 0) goto Label_3084; // 0xbe2 JumpB
	var_61_bool = var_36_int == 0; // 0xbe3 Not
	if(var_61_bool == 0) goto Label_3052; // 0xbe4 JumpB
	var_62_int = 3; // 0xbe5 PushI
	Sleep(var_62_int, var_38_bool); // 0xbe6 Func
	var_63_bool = var_38_bool == 0; // 0xbe8 Not
	if(var_63_bool == 0) goto Label_3051; // 0xbe9 JumpB
	goto Label_3084; // 0xbea Jump
	
Label_3084:
	ResetAAS(); // 0xc0c Func
	return 12; // 0xc0e Return
	
Label_3051:
	goto Label_3073; // 0xbeb Jump
	
Label_3073:
	var_64_bool = 0; // 0xc01 PushV
	func_3087(var_64_bool); // 0xc02 NEW_2
	var_65_bool = var_64_bool == 0; // 0xc04 Not
	if(var_65_bool == 0) goto Label_3079; // 0xc05 JumpB
	goto Label_3084; // 0xc06 Jump
	
Label_3079:
	ResetAAS(); // 0xc07 Func
	var_66_int = 1; // 0xc09 PushI
	var_37_int = var_37_int + var_66_int; // 0xc0a Add2
	goto Label_3032; // 0xc0b Jump
	
Label_3052:
	irand(var_39_int, var_36_int); // 0xbec Func
	var_67_int = 5; // 0xbee PushI
	irand(var_40_int, var_67_int); // 0xbef Func
	var_68_int = 0; // 0xbf1 PushI
	var_69_bool = var_40_int != var_68_int; // 0xbf2 Neq
	if(var_69_bool == 0) goto Label_3061; // 0xbf3 JumpB
	var_39_int = 0; // 0xbf4 MovI
	
Label_3061:
	var_70_string = "all"; // 0xbf5 PushS
	var_71_string = ""; var_72_int = 0; // 0xbf6 PushV
	var_72_int = var_39_int; // 0xbf7 Mov
	func_3502(var_71_string, var_72_int); // 0xbf8 NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0xbfa Func
	WaitForAnimEnd(var_41_bool); // 0xbfc Func
	var_73_bool = var_41_bool == 0; // 0xbfe Not
	if(var_73_bool == 0) goto Label_3073; // 0xbff JumpB
	goto Label_3084; // 0xc00 Jump
}


func_3532(var_114_string)
{
	var_114_string = "ui/NPC_Block_b.png"; // 0xdcc MovS
	return 0; // 0xdcd Return
}


func_3534(var_106_bool)
{
	var_106_bool = 1; // 0xdce MovB
	return 0; // 0xdcf Return
}


func_3536()
{
	var_70_string = "playsound"; // 0xdd1 PushS
	var_71_string = "giveitem"; // 0xdd2 PushS
	TriggerWorld(var_70_string, var_71_string); // 0xdd3 Func
	return 0; // 0xdd5 Return
}


func_3793(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0xed2 PushV
	var_453_string = "d11q01"; // 0xed3 MovS
	func_3418(var_452_int, var_453_string); // 0xed4 NEW_2
	var_454_int = 3; // 0xed6 PushI
	var_455_bool = var_452_int >= var_454_int; // 0xed7 GE
	if(var_455_bool == 0) goto Label_3803; // 0xed8 JumpB
	var_450_bool = 1; // 0xed9 MovB
	return 0; // 0xeda Return
	
Label_3803:
	var_450_bool = 0; // 0xedb MovB
	return 0; // 0xedc Return
}


func_2774(var_2_object, var_618_string)
{
	var_619_bool = 0; // 0xad7 PushV
	func_3534(var_619_bool); // 0xad8 NEW_2
	var_620_bool = var_619_bool == 0; // 0xada Not
	if(var_620_bool == 0) goto Label_2781; // 0xadb JumpB
	return 0; // 0xadc Return
	
Label_2781:
	var_621_bool = var_618_string == var_2_object; // 0xadd Eq
	if(var_621_bool == 0) goto Label_2784; // 0xade JumpB
	return 0; // 0xadf Return
	
Label_2784:
	var_622_string = ""; var_623_bool = 0; // 0xae0 PushV
	var_622_string = var_618_string; // 0xae1 Mov
	var_624_string = ""; // 0xae2 PushS
	var_625_bool = var_618_string == var_624_string; // 0xae3 Eq
	if(var_625_bool == 0) goto Label_2791; // 0xae4 JumpB
	var_623_bool = 0; // 0xae5 MovB
	goto Label_2792; // 0xae6 Jump
	
Label_2792:
	func_3365(var_622_string, var_623_bool); // 0xae8 NEW_2
	var_2_object = var_618_string; // 0xaea TMov
	return 0; // 0xaeb Return
	
Label_2791:
	var_623_bool = 1; // 0xae7 MovB
}


func_3542()
{
	var_34_string = "ood9Block3"; // 0xdd7 PushS
	var_35_int = 1; // 0xdd8 PushI
	SetVariable(var_34_string, var_35_int); // 0xdd9 Func
	return 0; // 0xddb Return
}


func_3548()
{
	var_101_string = "d9q02"; // 0xddd PushS
	var_102_int = 2; // 0xdde PushI
	SetVariable(var_101_string, var_102_int); // 0xddf Func
	func_3865(); // 0xde2 NEW_2
	var_126_bool = 0; var_127_string = ""; var_128_string = ""; // 0xde4 PushV
	var_127_string = "quest_d9_02"; // 0xde5 MovS
	var_128_string = "init_soldiers"; // 0xde6 MovS
	func_3467(var_126_bool, var_127_string, var_128_string); // 0xde7 NEW_2
	return 0; // 0xde9 Return
}


func_3805(var_456_bool)
{
	var_458_int = 0; var_459_string = ""; // 0xede PushV
	var_459_string = "ood11Block2"; // 0xedf MovS
	func_3418(var_458_int, var_459_string); // 0xee0 NEW_2
	var_460_int = 0; // 0xee2 PushI
	var_461_bool = var_458_int == var_460_int; // 0xee3 Eq
	if(var_461_bool == 0) goto Label_3815; // 0xee4 JumpB
	var_456_bool = 1; // 0xee5 MovB
	return 0; // 0xee6 Return
	
Label_3815:
	var_456_bool = 0; // 0xee7 MovB
	return 0; // 0xee8 Return
}


func_3817(var_472_bool)
{
	var_474_int = 0; var_475_string = ""; // 0xeea PushV
	var_475_string = "ood11Block3"; // 0xeeb MovS
	func_3418(var_474_int, var_475_string); // 0xeec NEW_2
	var_476_int = 0; // 0xeee PushI
	var_477_bool = var_474_int == var_476_int; // 0xeef Eq
	if(var_477_bool == 0) goto Label_3827; // 0xef0 JumpB
	var_472_bool = 1; // 0xef1 MovB
	return 0; // 0xef2 Return
	
Label_3827:
	var_472_bool = 0; // 0xef3 MovB
	return 0; // 0xef4 Return
}


func_3306(var_166_bool)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; // 0xcea PushV
	var_178_string = "d"; // 0xceb PushS
	var_179_int = 0; // 0xcec PushV
	func_3479(var_179_int); // 0xced NEW_2
	var_180_int = var_178_string + var_179_int; // 0xcef Add
	var_181_string = "m"; // 0xcf0 PushS
	var_173_string = var_180_int + var_181_string; // 0xcf1 Add2
	var_174_int = 0; // 0xcf2 MovI
	
Label_3315:
	var_182_int = 1; // 0xcf3 PushI
	if(var_182_int == 0) goto Label_3328; // 0xcf4 JumpB
	var_183_int = 1; // 0xcf5 PushI
	var_184_int = var_174_int + var_183_int; // 0xcf6 Add
	var_185_int = var_173_string + var_184_int; // 0xcf7 Add
	HasProperty(var_185_int, var_175_bool); // 0xcf8 ObjFunc
	var_186_bool = var_175_bool == 0; // 0xcfa Not
	if(var_186_bool == 0) goto Label_3325; // 0xcfb JumpB
	goto Label_3328; // 0xcfc Jump
	
Label_3328:
	var_187_bool = var_174_int == 0; // 0xd00 Not
	if(var_187_bool == 0) goto Label_3332; // 0xd01 JumpB
	var_166_bool = 0; // 0xd02 MovB
	return 10; // 0xd03 Return
	
Label_3332:
	var_176_int = 0; // 0xd04 MovI
	var_188_int = 1; // 0xd05 PushI
	var_189_bool = var_174_int > var_188_int; // 0xd06 GT
	if(var_189_bool == 0) goto Label_3338; // 0xd07 JumpB
	irand(var_176_int, var_174_int); // 0xd08 Func
	
Label_3338:
	var_190_int = 1; // 0xd0a PushI
	var_191_int = var_176_int + var_190_int; // 0xd0b Add
	var_192_int = var_173_string + var_191_int; // 0xd0c Add
	GetProperty(var_192_int, var_177_string); // 0xd0d ObjFunc
	var_193_bool = 0; var_194_string = ""; // 0xd0f PushV
	var_194_string = var_177_string; // 0xd10 Mov
	func_3380(var_193_bool, var_194_string); // 0xd11 NEW_2
	var_166_bool = var_193_bool; // 0xd12 Mov
	return 10; // 0xd14 Return
	
Label_3325:
	var_195_int = 1; // 0xcfd PushI
	var_174_int = var_174_int + var_195_int; // 0xcfe Add2
	goto Label_3315; // 0xcff Jump
}


func_489(var_0_object, var_1_object, var_2_object, var_3_string, var_520_object, var_521_object)
{
	var_0_object = var_521_object; // 0x1ea TMov
	var_1_object = var_520_object; // 0x1eb TMov
	var_3_string = 0; // 0x1ec TMovB
	var_526_int = 1; // 0x1ed PushI
	if(var_526_int == 0) goto Label_572; // 0x1ee JumpB
	var_527_bool = 0; // 0x1ef PushV
	var_527_bool = 0; // 0x1f0 MovB
	var_528_bool = 0; var_529_object = Obj(); // 0x1f1 PushV
	var_529_object = var_1_object; // 0x1f2 MovT
	func_3721(var_529_object); // 0x1f3 NEW_2
	if(var_528_bool == 0) goto Label_509; // 0x1f5 JumpB
	var_534_bool = 0; var_535_object = Obj(); // 0x1f6 PushV
	var_535_object = var_1_object; // 0x1f7 MovT
	func_3663(var_534_bool, var_535_object); // 0x1f8 NEW_2
	var_545_bool = var_534_bool == 0; // 0x1fa Not
	if(var_545_bool == 0) goto Label_509; // 0x1fb JumpB
	var_527_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_527_bool == 0) goto Label_530; // 0x1fd JumpB
	var_546_object = Obj(); var_547_object = Obj(); // 0x1fe PushV
	var_546_object = var_1_object; // 0x1ff MovT
	var_547_object = var_0_object; // 0x200 MovT
	func_3583(); // 0x201 NEW_2
	var_550_string = ""; // 0x203 PushV
	var_550_string = "Neutral"; // 0x204 MovS
	func_602(var_521_object, var_550_string); // 0x205 NEW_2
	var_558_int = 535510; // 0x207 PushI
	SetMessage(var_558_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_559_int = 535511; // 0x20c PushI
	var_560_int = 37194; // 0x20d PushI
	var_561_int = 37193; // 0x20e PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x20f TObjFunc
	goto Label_572; // 0x211 Jump
	
Label_572:
	var_562_bool = 0; // 0x23c PushV
	func_3534(var_562_bool); // 0x23d NEW_2
	if(var_562_bool == 0) goto Label_587; // 0x23f JumpB
	
Label_576:
	lshWaitForAnimEnd(); // 0x240 Func
	var_563_string = var_3_string; // 0x242 PushT
	if(var_563_string == 0) goto Label_581; // 0x243 JumpB
	goto Label_586; // 0x244 Jump
	
Label_586:
	goto Label_601; // 0x24a Jump
	
Label_601:
	return 0; // 0x259 Return
	
Label_581:
	var_564_string = ""; // 0x245 PushV
	var_564_string = var_2_object; // 0x246 MovT
	func_3349(var_564_string); // 0x247 NEW_2
	goto Label_576; // 0x249 Jump
	
Label_587:
	var_565_string = "all"; // 0x24b PushS
	var_566_string = "idle"; // 0x24c PushS
	PlayAnimation(var_565_string, var_566_string); // 0x24d Func
	
Label_591:
	WaitForAnimEnd(); // 0x24f Func
	var_567_string = var_3_string; // 0x251 PushT
	if(var_567_string == 0) goto Label_596; // 0x252 JumpB
	goto Label_601; // 0x253 Jump
	
Label_596:
	var_568_string = "all"; // 0x254 PushS
	var_569_string = "idle"; // 0x255 PushS
	PlayAnimation(var_568_string, var_569_string); // 0x256 Func
	goto Label_591; // 0x258 Jump
	
Label_530:
	var_570_bool = 0; var_571_object = Obj(); // 0x212 PushV
	var_571_object = var_1_object; // 0x213 MovT
	func_3663(var_570_bool, var_571_object); // 0x214 NEW_2
	if(var_570_bool == 0) goto Label_555; // 0x216 JumpB
	var_572_string = ""; // 0x217 PushV
	var_572_string = "Neutral"; // 0x218 MovS
	func_602(var_521_object, var_572_string); // 0x219 NEW_2
	var_573_int = 535528; // 0x21b PushI
	SetMessage(var_573_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_574_int = 535529; // 0x220 PushI
	var_575_int = -1; // 0x221 PushI
	var_576_int = 37212; // 0x222 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x223 TObjFunc
	var_577_int = 535530; // 0x225 PushI
	var_578_int = -1; // 0x226 PushI
	var_579_int = 37213; // 0x227 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x228 TObjFunc
	goto Label_572; // 0x22a Jump
	
Label_555:
	var_580_string = ""; // 0x22b PushV
	var_580_string = "Neutral"; // 0x22c MovS
	func_602(var_521_object, var_580_string); // 0x22d NEW_2
	var_581_int = 535531; // 0x22f PushI
	SetMessage(var_581_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_582_int = 535539; // 0x234 PushI
	var_583_int = -1; // 0x235 PushI
	var_584_int = 37222; // 0x236 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x237 TObjFunc
	goto Label_572; // 0x239 Jump
}


func_3562()
{
	var_134_string = "d9LaraIsSaved"; // 0xdeb PushS
	var_135_int = 1; // 0xdec PushI
	SetVariable(var_134_string, var_135_int); // 0xded Func
	return 0; // 0xdef Return
}


func_3568()
{
	func_3852(); // 0xdf2 NEW_2
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; // 0xdf4 PushV
	var_58_string = "quest_d10_03"; // 0xdf5 MovS
	var_59_string = "place_sanitars"; // 0xdf6 MovS
	func_3467(var_57_bool, var_58_string, var_59_string); // 0xdf7 NEW_2
	var_63_bool = 0; var_64_string = ""; var_65_string = ""; // 0xdf9 PushV
	var_64_string = "quest_d10_03"; // 0xdfa MovS
	var_65_string = "completed"; // 0xdfb MovS
	func_3467(var_63_bool, var_64_string, var_65_string); // 0xdfc NEW_2
	return 0; // 0xdfe Return
}


func_3829(var_277_bool)
{
	var_279_int = 0; var_280_string = ""; // 0xef6 PushV
	var_280_string = "ood9Block2"; // 0xef7 MovS
	func_3418(var_279_int, var_280_string); // 0xef8 NEW_2
	var_281_int = 0; // 0xefa PushI
	var_282_bool = var_279_int == var_281_int; // 0xefb Eq
	if(var_282_bool == 0) goto Label_3839; // 0xefc JumpB
	var_277_bool = 1; // 0xefd MovB
	return 0; // 0xefe Return
	
Label_3839:
	var_277_bool = 0; // 0xeff MovB
	return 0; // 0xf00 Return
}


func_3583()
{
	var_548_string = "ood12Block1"; // 0xe00 PushS
	var_549_int = 1; // 0xe01 PushI
	SetVariable(var_548_string, var_549_int); // 0xe02 Func
	return 0; // 0xe04 Return
}


