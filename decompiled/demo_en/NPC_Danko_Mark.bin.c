task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xac PushI
	if(var_43_int == 0) goto Label_500; // 0xad JumpB
	func_3351(); // 0xaf NEW_2
	var_45_int = 34848; // 0xb1 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xb2 Eq
	if(var_46_bool == 0) goto Label_185; // 0xb3 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xb4 PushV
	var_47_object = var_1_object; // 0xb5 MovT
	var_48_object = var_0_object; // 0xb6 MovT
	func_3503(); // 0xb7 NEW_2
	
Label_185:
	var_78_int = 37812; // 0xb9 PushI
	var_79_bool = var_42_cvector == var_78_int; // 0xba Eq
	if(var_79_bool == 0) goto Label_193; // 0xbb JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xbc PushV
	var_80_object = var_1_object; // 0xbd MovT
	var_81_object = var_0_object; // 0xbe MovT
	func_3503(); // 0xbf NEW_2
	
Label_193:
	var_82_int = 37815; // 0xc1 PushI
	var_83_bool = var_42_cvector == var_82_int; // 0xc2 Eq
	if(var_83_bool == 0) goto Label_201; // 0xc3 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0xc4 PushV
	var_84_object = var_1_object; // 0xc5 MovT
	var_85_object = var_0_object; // 0xc6 MovT
	func_3503(); // 0xc7 NEW_2
	
Label_201:
	var_86_int = 37814; // 0xc9 PushI
	var_87_bool = var_42_cvector == var_86_int; // 0xca Eq
	if(var_87_bool == 0) goto Label_209; // 0xcb JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0xcc PushV
	var_88_object = var_1_object; // 0xcd MovT
	var_89_object = var_0_object; // 0xce MovT
	func_3503(); // 0xcf NEW_2
	
Label_209:
	var_90_int = 37797; // 0xd1 PushI
	var_91_bool = var_42_cvector == var_90_int; // 0xd2 Eq
	if(var_91_bool == 0) goto Label_217; // 0xd3 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0xd4 PushV
	var_92_object = var_1_object; // 0xd5 MovT
	var_93_object = var_0_object; // 0xd6 MovT
	func_3503(); // 0xd7 NEW_2
	
Label_217:
	var_94_int = 34845; // 0xd9 PushI
	var_95_bool = var_41_bool == var_94_int; // 0xda Eq
	if(var_95_bool == 0) goto Label_250; // 0xdb JumpB
	var_96_string = ""; // 0xdc PushV
	var_96_string = "Declaim"; // 0xdd MovS
	func_149(var_42_cvector, var_96_string); // 0xde NEW_2
	var_113_int = 533341; // 0xe0 PushI
	SetMessage(var_113_int); // 0xe1 TObjFunc
	ClearReplies(); // 0xe3 TObjFunc
	var_114_bool = 0; var_115_object = Obj(); // 0xe5 PushV
	var_115_object = var_1_object; // 0xe6 MovT
	func_3641(var_115_object); // 0xe7 NEW_2
	if(var_114_bool == 0) goto Label_239; // 0xe9 JumpB
	var_122_int = 533342; // 0xea PushI
	var_123_int = 34847; // 0xeb PushI
	var_124_int = 34846; // 0xec PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xed TObjFunc
	
Label_239:
	var_125_int = 533345; // 0xef PushI
	var_126_int = -1; // 0xf0 PushI
	var_127_int = 34849; // 0xf1 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xf2 TObjFunc
	var_128_int = 536042; // 0xf4 PushI
	var_129_int = -1; // 0xf5 PushI
	var_130_int = 37783; // 0xf6 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xf7 TObjFunc
	return 0; // 0xf9 Return
	
Label_250:
	var_131_int = 34847; // 0xfa PushI
	var_132_bool = var_41_bool == var_131_int; // 0xfb Eq
	if(var_132_bool == 0) goto Label_273; // 0xfc JumpB
	var_133_string = ""; // 0xfd PushV
	var_133_string = "Declaim"; // 0xfe MovS
	func_149(var_42_cvector, var_133_string); // 0xff NEW_2
	var_134_int = 533343; // 0x101 PushI
	SetMessage(var_134_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_135_int = 536043; // 0x106 PushI
	var_136_int = 37790; // 0x107 PushI
	var_137_int = 37784; // 0x108 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x109 TObjFunc
	var_138_int = 536053; // 0x10b PushI
	var_139_int = 37795; // 0x10c PushI
	var_140_int = 37794; // 0x10d PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x10e TObjFunc
	return 0; // 0x110 Return
	
Label_273:
	var_141_int = 37795; // 0x111 PushI
	var_142_bool = var_41_bool == var_141_int; // 0x112 Eq
	if(var_142_bool == 0) goto Label_296; // 0x113 JumpB
	var_143_string = ""; // 0x114 PushV
	var_143_string = "Shyness"; // 0x115 MovS
	func_149(var_42_cvector, var_143_string); // 0x116 NEW_2
	var_144_int = 536054; // 0x118 PushI
	SetMessage(var_144_int); // 0x119 TObjFunc
	ClearReplies(); // 0x11b TObjFunc
	var_145_int = 536055; // 0x11d PushI
	var_146_int = 37789; // 0x11e PushI
	var_147_int = 37796; // 0x11f PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x120 TObjFunc
	var_148_int = 536056; // 0x122 PushI
	var_149_int = -1; // 0x123 PushI
	var_150_int = 37797; // 0x124 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_151_int = 37790; // 0x128 PushI
	var_152_bool = var_41_bool == var_151_int; // 0x129 Eq
	if(var_152_bool == 0) goto Label_314; // 0x12a JumpB
	var_153_string = ""; // 0x12b PushV
	var_153_string = "Declaim"; // 0x12c MovS
	func_149(var_42_cvector, var_153_string); // 0x12d NEW_2
	var_154_int = 536049; // 0x12f PushI
	SetMessage(var_154_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_155_int = 536050; // 0x134 PushI
	var_156_int = 37792; // 0x135 PushI
	var_157_int = 37791; // 0x136 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_158_int = 37792; // 0x13a PushI
	var_159_bool = var_41_bool == var_158_int; // 0x13b Eq
	if(var_159_bool == 0) goto Label_332; // 0x13c JumpB
	var_160_string = ""; // 0x13d PushV
	var_160_string = "Declaim"; // 0x13e MovS
	func_149(var_42_cvector, var_160_string); // 0x13f NEW_2
	var_161_int = 536051; // 0x141 PushI
	SetMessage(var_161_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_162_int = 536052; // 0x146 PushI
	var_163_int = 37785; // 0x147 PushI
	var_164_int = 37793; // 0x148 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_165_int = 37785; // 0x14c PushI
	var_166_bool = var_41_bool == var_165_int; // 0x14d Eq
	if(var_166_bool == 0) goto Label_355; // 0x14e JumpB
	var_167_string = ""; // 0x14f PushV
	var_167_string = "Rage"; // 0x150 MovS
	func_149(var_42_cvector, var_167_string); // 0x151 NEW_2
	var_168_int = 536044; // 0x153 PushI
	SetMessage(var_168_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_169_int = 536045; // 0x158 PushI
	var_170_int = 37787; // 0x159 PushI
	var_171_int = 37786; // 0x15a PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x15b TObjFunc
	var_172_int = 536057; // 0x15d PushI
	var_173_int = 37799; // 0x15e PushI
	var_174_int = 37798; // 0x15f PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_175_int = 37799; // 0x163 PushI
	var_176_bool = var_41_bool == var_175_int; // 0x164 Eq
	if(var_176_bool == 0) goto Label_378; // 0x165 JumpB
	var_177_string = ""; // 0x166 PushV
	var_177_string = "Shyness"; // 0x167 MovS
	func_149(var_42_cvector, var_177_string); // 0x168 NEW_2
	var_178_int = 536058; // 0x16a PushI
	SetMessage(var_178_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_179_int = 536059; // 0x16f PushI
	var_180_int = 37803; // 0x170 PushI
	var_181_int = 37800; // 0x171 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x172 TObjFunc
	var_182_int = 536063; // 0x174 PushI
	var_183_int = 37807; // 0x175 PushI
	var_184_int = 37806; // 0x176 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_185_int = 37807; // 0x17a PushI
	var_186_bool = var_41_bool == var_185_int; // 0x17b Eq
	if(var_186_bool == 0) goto Label_396; // 0x17c JumpB
	var_187_string = ""; // 0x17d PushV
	var_187_string = "Shyness"; // 0x17e MovS
	func_149(var_42_cvector, var_187_string); // 0x17f NEW_2
	var_188_int = 536064; // 0x181 PushI
	SetMessage(var_188_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_189_int = 536065; // 0x186 PushI
	var_190_int = 37809; // 0x187 PushI
	var_191_int = 37808; // 0x188 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_192_int = 37809; // 0x18c PushI
	var_193_bool = var_41_bool == var_192_int; // 0x18d Eq
	if(var_193_bool == 0) goto Label_419; // 0x18e JumpB
	var_194_string = ""; // 0x18f PushV
	var_194_string = "Shyness"; // 0x190 MovS
	func_149(var_42_cvector, var_194_string); // 0x191 NEW_2
	var_195_int = 536066; // 0x193 PushI
	SetMessage(var_195_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_196_int = 536067; // 0x198 PushI
	var_197_int = 37803; // 0x199 PushI
	var_198_int = 37811; // 0x19a PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x19b TObjFunc
	var_199_int = 536069; // 0x19d PushI
	var_200_int = -1; // 0x19e PushI
	var_201_int = 37814; // 0x19f PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_202_int = 37787; // 0x1a3 PushI
	var_203_bool = var_41_bool == var_202_int; // 0x1a4 Eq
	if(var_203_bool == 0) goto Label_442; // 0x1a5 JumpB
	var_204_string = ""; // 0x1a6 PushV
	var_204_string = "Rage"; // 0x1a7 MovS
	func_149(var_42_cvector, var_204_string); // 0x1a8 NEW_2
	var_205_int = 536046; // 0x1aa PushI
	SetMessage(var_205_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_206_int = 536047; // 0x1af PushI
	var_207_int = 37803; // 0x1b0 PushI
	var_208_int = 37788; // 0x1b1 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1b2 TObjFunc
	var_209_int = 536060; // 0x1b4 PushI
	var_210_int = 37803; // 0x1b5 PushI
	var_211_int = 37802; // 0x1b6 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_212_int = 37803; // 0x1ba PushI
	var_213_bool = var_41_bool == var_212_int; // 0x1bb Eq
	if(var_213_bool == 0) goto Label_465; // 0x1bc JumpB
	var_214_string = ""; // 0x1bd PushV
	var_214_string = "Shyness"; // 0x1be MovS
	func_149(var_42_cvector, var_214_string); // 0x1bf NEW_2
	var_215_int = 536061; // 0x1c1 PushI
	SetMessage(var_215_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_216_int = 536062; // 0x1c6 PushI
	var_217_int = 37789; // 0x1c7 PushI
	var_218_int = 37804; // 0x1c8 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1c9 TObjFunc
	var_219_int = 536070; // 0x1cb PushI
	var_220_int = -1; // 0x1cc PushI
	var_221_int = 37815; // 0x1cd PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_222_int = 37789; // 0x1d1 PushI
	var_223_bool = var_41_bool == var_222_int; // 0x1d2 Eq
	if(var_223_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_224_string = ""; // 0x1d4 PushV
	var_224_string = "Shyness"; // 0x1d5 MovS
	func_149(var_42_cvector, var_224_string); // 0x1d6 NEW_2
	var_225_int = 536048; // 0x1d8 PushI
	SetMessage(var_225_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_226_int = 533344; // 0x1dd PushI
	var_227_int = -1; // 0x1de PushI
	var_228_int = 34848; // 0x1df PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1e0 TObjFunc
	var_229_int = 536068; // 0x1e2 PushI
	var_230_int = -1; // 0x1e3 PushI
	var_231_int = 37812; // 0x1e4 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_3_string = 1; // 0x1e8 TMovB
	var_232_bool = 0; // 0x1e9 PushV
	func_3485(var_232_bool); // 0x1ea NEW_2
	if(var_232_bool == 0) goto Label_496; // 0x1ec JumpB
	lshStopAnimation(); // 0x1ed Func
	goto Label_498; // 0x1ef Jump
	
Label_498:
	return 0; // 0x1f2 Return
	
Label_496:
	StopAnimation(); // 0x1f0 Func
	
Label_500:
	return 0; // 0x1f4 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x2bf PushI
	if(var_43_int == 0) goto Label_1107; // 0x2c0 JumpB
	func_3351(); // 0x2c2 NEW_2
	var_45_int = 35715; // 0x2c4 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x2c5 Eq
	if(var_46_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x2c7 PushV
	var_47_object = var_1_object; // 0x2c8 MovT
	var_48_object = var_0_object; // 0x2c9 MovT
	func_3525(); // 0x2ca NEW_2
	
Label_716:
	var_90_int = 35737; // 0x2cc PushI
	var_91_bool = var_42_cvector == var_90_int; // 0x2cd Eq
	if(var_91_bool == 0) goto Label_729; // 0x2ce JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x2cf PushV
	var_92_object = var_1_object; // 0x2d0 MovT
	var_93_object = var_0_object; // 0x2d1 MovT
	func_3541(); // 0x2d2 NEW_2
	var_120_object = Obj(); var_121_object = Obj(); // 0x2d4 PushV
	var_120_object = var_1_object; // 0x2d5 MovT
	var_121_object = var_0_object; // 0x2d6 MovT
	func_3487(); // 0x2d7 NEW_2
	
Label_729:
	var_146_int = 38334; // 0x2d9 PushI
	var_147_bool = var_42_cvector == var_146_int; // 0x2da Eq
	if(var_147_bool == 0) goto Label_737; // 0x2db JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x2dc PushV
	var_148_object = var_1_object; // 0x2dd MovT
	var_149_object = var_0_object; // 0x2de MovT
	func_3570(); // 0x2df NEW_2
	
Label_737:
	var_164_int = 38333; // 0x2e1 PushI
	var_165_bool = var_42_cvector == var_164_int; // 0x2e2 Eq
	if(var_165_bool == 0) goto Label_745; // 0x2e3 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x2e4 PushV
	var_166_object = var_1_object; // 0x2e5 MovT
	var_167_object = var_0_object; // 0x2e6 MovT
	func_3570(); // 0x2e7 NEW_2
	
Label_745:
	var_168_int = 35714; // 0x2e9 PushI
	var_169_bool = var_41_bool == var_168_int; // 0x2ea Eq
	if(var_169_bool == 0) goto Label_808; // 0x2eb JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x2ec PushV
	var_171_object = var_1_object; // 0x2ed MovT
	func_3653(var_171_object); // 0x2ee NEW_2
	if(var_170_bool == 0) goto Label_783; // 0x2f0 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x2f1 PushV
	var_178_object = var_1_object; // 0x2f2 MovT
	var_179_object = var_0_object; // 0x2f3 MovT
	func_3513(); // 0x2f4 NEW_2
	var_182_object = Obj(); var_183_object = Obj(); // 0x2f6 PushV
	var_182_object = var_1_object; // 0x2f7 MovT
	var_183_object = var_0_object; // 0x2f8 MovT
	func_3519(); // 0x2f9 NEW_2
	var_186_string = ""; // 0x2fb PushV
	var_186_string = "Rage"; // 0x2fc MovS
	func_680(var_42_cvector, var_186_string); // 0x2fd NEW_2
	var_203_int = 534127; // 0x2ff PushI
	SetMessage(var_203_int); // 0x300 TObjFunc
	ClearReplies(); // 0x302 TObjFunc
	var_204_int = 536495; // 0x304 PushI
	var_205_int = 38296; // 0x305 PushI
	var_206_int = 38295; // 0x306 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x307 TObjFunc
	var_207_int = 536508; // 0x309 PushI
	var_208_int = 38310; // 0x30a PushI
	var_209_int = 38309; // 0x30b PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x30c TObjFunc
	return 0; // 0x30e Return
	
Label_783:
	var_210_string = ""; // 0x30f PushV
	var_210_string = "Neutral"; // 0x310 MovS
	func_680(var_42_cvector, var_210_string); // 0x311 NEW_2
	var_211_int = 534129; // 0x313 PushI
	SetMessage(var_211_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_212_bool = 0; var_213_object = Obj(); // 0x318 PushV
	var_213_object = var_1_object; // 0x319 MovT
	func_3665(var_213_object); // 0x31a NEW_2
	if(var_212_bool == 0) goto Label_802; // 0x31c JumpB
	var_218_int = 534146; // 0x31d PushI
	var_219_int = 38315; // 0x31e PushI
	var_220_int = 35733; // 0x31f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x320 TObjFunc
	
Label_802:
	var_221_int = 534130; // 0x322 PushI
	var_222_int = -1; // 0x323 PushI
	var_223_int = 35717; // 0x324 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_224_int = 38315; // 0x328 PushI
	var_225_bool = var_41_bool == var_224_int; // 0x329 Eq
	if(var_225_bool == 0) goto Label_831; // 0x32a JumpB
	var_226_string = ""; // 0x32b PushV
	var_226_string = "Neutral"; // 0x32c MovS
	func_680(var_42_cvector, var_226_string); // 0x32d NEW_2
	var_227_int = 536512; // 0x32f PushI
	SetMessage(var_227_int); // 0x330 TObjFunc
	ClearReplies(); // 0x332 TObjFunc
	var_228_int = 536513; // 0x334 PushI
	var_229_int = 38317; // 0x335 PushI
	var_230_int = 38316; // 0x336 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x337 TObjFunc
	var_231_int = 536516; // 0x339 PushI
	var_232_int = 38317; // 0x33a PushI
	var_233_int = 38319; // 0x33b PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_234_int = 38317; // 0x33f PushI
	var_235_bool = var_41_bool == var_234_int; // 0x340 Eq
	if(var_235_bool == 0) goto Label_854; // 0x341 JumpB
	var_236_string = ""; // 0x342 PushV
	var_236_string = "Shyness"; // 0x343 MovS
	func_680(var_42_cvector, var_236_string); // 0x344 NEW_2
	var_237_int = 536514; // 0x346 PushI
	SetMessage(var_237_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_238_int = 536515; // 0x34b PushI
	var_239_int = 35734; // 0x34c PushI
	var_240_int = 38318; // 0x34d PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x34e TObjFunc
	var_241_int = 536517; // 0x350 PushI
	var_242_int = 35734; // 0x351 PushI
	var_243_int = 38321; // 0x352 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x353 TObjFunc
	return 0; // 0x355 Return
	
Label_854:
	var_244_int = 35734; // 0x356 PushI
	var_245_bool = var_41_bool == var_244_int; // 0x357 Eq
	if(var_245_bool == 0) goto Label_882; // 0x358 JumpB
	var_246_string = ""; // 0x359 PushV
	var_246_string = "Shyness"; // 0x35a MovS
	func_680(var_42_cvector, var_246_string); // 0x35b NEW_2
	var_247_int = 534147; // 0x35d PushI
	SetMessage(var_247_int); // 0x35e TObjFunc
	ClearReplies(); // 0x360 TObjFunc
	var_248_int = 536518; // 0x362 PushI
	var_249_int = 38324; // 0x363 PushI
	var_250_int = 38323; // 0x364 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x365 TObjFunc
	var_251_int = 536524; // 0x367 PushI
	var_252_int = 38330; // 0x368 PushI
	var_253_int = 38329; // 0x369 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x36a TObjFunc
	var_254_int = 536522; // 0x36c PushI
	var_255_int = 38328; // 0x36d PushI
	var_256_int = 38327; // 0x36e PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_257_int = 38328; // 0x372 PushI
	var_258_bool = var_41_bool == var_257_int; // 0x373 Eq
	if(var_258_bool == 0) goto Label_900; // 0x374 JumpB
	var_259_string = ""; // 0x375 PushV
	var_259_string = "Gasp"; // 0x376 MovS
	func_680(var_42_cvector, var_259_string); // 0x377 NEW_2
	var_260_int = 536523; // 0x379 PushI
	SetMessage(var_260_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_261_int = 536526; // 0x37e PushI
	var_262_int = 38330; // 0x37f PushI
	var_263_int = 38331; // 0x380 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x381 TObjFunc
	return 0; // 0x383 Return
	
Label_900:
	var_264_int = 38330; // 0x384 PushI
	var_265_bool = var_41_bool == var_264_int; // 0x385 Eq
	if(var_265_bool == 0) goto Label_918; // 0x386 JumpB
	var_266_string = ""; // 0x387 PushV
	var_266_string = "Gasp"; // 0x388 MovS
	func_680(var_42_cvector, var_266_string); // 0x389 NEW_2
	var_267_int = 536525; // 0x38b PushI
	SetMessage(var_267_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_268_int = 536529; // 0x390 PushI
	var_269_int = 38324; // 0x391 PushI
	var_270_int = 38335; // 0x392 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_271_int = 38324; // 0x396 PushI
	var_272_bool = var_41_bool == var_271_int; // 0x397 Eq
	if(var_272_bool == 0) goto Label_941; // 0x398 JumpB
	var_273_string = ""; // 0x399 PushV
	var_273_string = "Shyness"; // 0x39a MovS
	func_680(var_42_cvector, var_273_string); // 0x39b NEW_2
	var_274_int = 536519; // 0x39d PushI
	SetMessage(var_274_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_275_int = 536520; // 0x3a2 PushI
	var_276_int = 38326; // 0x3a3 PushI
	var_277_int = 38325; // 0x3a4 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x3a5 TObjFunc
	var_278_int = 536527; // 0x3a7 PushI
	var_279_int = -1; // 0x3a8 PushI
	var_280_int = 38333; // 0x3a9 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x3aa TObjFunc
	return 0; // 0x3ac Return
	
Label_941:
	var_281_int = 38326; // 0x3ad PushI
	var_282_bool = var_41_bool == var_281_int; // 0x3ae Eq
	if(var_282_bool == 0) goto Label_964; // 0x3af JumpB
	var_283_string = ""; // 0x3b0 PushV
	var_283_string = "Gasp"; // 0x3b1 MovS
	func_680(var_42_cvector, var_283_string); // 0x3b2 NEW_2
	var_284_int = 536521; // 0x3b4 PushI
	SetMessage(var_284_int); // 0x3b5 TObjFunc
	ClearReplies(); // 0x3b7 TObjFunc
	var_285_int = 534148; // 0x3b9 PushI
	var_286_int = 35736; // 0x3ba PushI
	var_287_int = 35735; // 0x3bb PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3bc TObjFunc
	var_288_int = 536528; // 0x3be PushI
	var_289_int = -1; // 0x3bf PushI
	var_290_int = 38334; // 0x3c0 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3c1 TObjFunc
	return 0; // 0x3c3 Return
	
Label_964:
	var_291_int = 35736; // 0x3c4 PushI
	var_292_bool = var_41_bool == var_291_int; // 0x3c5 Eq
	if(var_292_bool == 0) goto Label_982; // 0x3c6 JumpB
	var_293_string = ""; // 0x3c7 PushV
	var_293_string = "Gasp"; // 0x3c8 MovS
	func_680(var_42_cvector, var_293_string); // 0x3c9 NEW_2
	var_294_int = 534149; // 0x3cb PushI
	SetMessage(var_294_int); // 0x3cc TObjFunc
	ClearReplies(); // 0x3ce TObjFunc
	var_295_int = 534150; // 0x3d0 PushI
	var_296_int = -1; // 0x3d1 PushI
	var_297_int = 35737; // 0x3d2 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3d3 TObjFunc
	return 0; // 0x3d5 Return
	
Label_982:
	var_298_int = 38310; // 0x3d6 PushI
	var_299_bool = var_41_bool == var_298_int; // 0x3d7 Eq
	if(var_299_bool == 0) goto Label_1000; // 0x3d8 JumpB
	var_300_string = ""; // 0x3d9 PushV
	var_300_string = "Rage"; // 0x3da MovS
	func_680(var_42_cvector, var_300_string); // 0x3db NEW_2
	var_301_int = 536509; // 0x3dd PushI
	SetMessage(var_301_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_302_int = 536510; // 0x3e2 PushI
	var_303_int = 38298; // 0x3e3 PushI
	var_304_int = 38311; // 0x3e4 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x3e5 TObjFunc
	return 0; // 0x3e7 Return
	
Label_1000:
	var_305_int = 38296; // 0x3e8 PushI
	var_306_bool = var_41_bool == var_305_int; // 0x3e9 Eq
	if(var_306_bool == 0) goto Label_1018; // 0x3ea JumpB
	var_307_string = ""; // 0x3eb PushV
	var_307_string = "Rage"; // 0x3ec MovS
	func_680(var_42_cvector, var_307_string); // 0x3ed NEW_2
	var_308_int = 536496; // 0x3ef PushI
	SetMessage(var_308_int); // 0x3f0 TObjFunc
	ClearReplies(); // 0x3f2 TObjFunc
	var_309_int = 536497; // 0x3f4 PushI
	var_310_int = 38298; // 0x3f5 PushI
	var_311_int = 38297; // 0x3f6 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x3f7 TObjFunc
	return 0; // 0x3f9 Return
	
Label_1018:
	var_312_int = 38298; // 0x3fa PushI
	var_313_bool = var_41_bool == var_312_int; // 0x3fb Eq
	if(var_313_bool == 0) goto Label_1036; // 0x3fc JumpB
	var_314_string = ""; // 0x3fd PushV
	var_314_string = "Declaim"; // 0x3fe MovS
	func_680(var_42_cvector, var_314_string); // 0x3ff NEW_2
	var_315_int = 536498; // 0x401 PushI
	SetMessage(var_315_int); // 0x402 TObjFunc
	ClearReplies(); // 0x404 TObjFunc
	var_316_int = 536499; // 0x406 PushI
	var_317_int = 38300; // 0x407 PushI
	var_318_int = 38299; // 0x408 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x409 TObjFunc
	return 0; // 0x40b Return
	
Label_1036:
	var_319_int = 38300; // 0x40c PushI
	var_320_bool = var_41_bool == var_319_int; // 0x40d Eq
	if(var_320_bool == 0) goto Label_1059; // 0x40e JumpB
	var_321_string = ""; // 0x40f PushV
	var_321_string = "Declaim"; // 0x410 MovS
	func_680(var_42_cvector, var_321_string); // 0x411 NEW_2
	var_322_int = 536500; // 0x413 PushI
	SetMessage(var_322_int); // 0x414 TObjFunc
	ClearReplies(); // 0x416 TObjFunc
	var_323_int = 536501; // 0x418 PushI
	var_324_int = 38302; // 0x419 PushI
	var_325_int = 38301; // 0x41a PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x41b TObjFunc
	var_326_int = 536511; // 0x41d PushI
	var_327_int = 38304; // 0x41e PushI
	var_328_int = 38313; // 0x41f PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x420 TObjFunc
	return 0; // 0x422 Return
	
Label_1059:
	var_329_int = 38302; // 0x423 PushI
	var_330_bool = var_41_bool == var_329_int; // 0x424 Eq
	if(var_330_bool == 0) goto Label_1077; // 0x425 JumpB
	var_331_string = ""; // 0x426 PushV
	var_331_string = "Rage"; // 0x427 MovS
	func_680(var_42_cvector, var_331_string); // 0x428 NEW_2
	var_332_int = 536502; // 0x42a PushI
	SetMessage(var_332_int); // 0x42b TObjFunc
	ClearReplies(); // 0x42d TObjFunc
	var_333_int = 536503; // 0x42f PushI
	var_334_int = 38304; // 0x430 PushI
	var_335_int = 38303; // 0x431 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x432 TObjFunc
	return 0; // 0x434 Return
	
Label_1077:
	var_336_int = 38304; // 0x435 PushI
	var_337_bool = var_41_bool == var_336_int; // 0x436 Eq
	if(var_337_bool == 0) goto Label_1095; // 0x437 JumpB
	var_338_string = ""; // 0x438 PushV
	var_338_string = "Rage"; // 0x439 MovS
	func_680(var_42_cvector, var_338_string); // 0x43a NEW_2
	var_339_int = 536504; // 0x43c PushI
	SetMessage(var_339_int); // 0x43d TObjFunc
	ClearReplies(); // 0x43f TObjFunc
	var_340_int = 534128; // 0x441 PushI
	var_341_int = -1; // 0x442 PushI
	var_342_int = 35715; // 0x443 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x444 TObjFunc
	return 0; // 0x446 Return
	
Label_1095:
	var_3_string = 1; // 0x447 TMovB
	var_343_bool = 0; // 0x448 PushV
	func_3485(var_343_bool); // 0x449 NEW_2
	if(var_343_bool == 0) goto Label_1103; // 0x44b JumpB
	lshStopAnimation(); // 0x44c Func
	goto Label_1105; // 0x44e Jump
	
Label_1105:
	return 0; // 0x451 Return
	
Label_1103:
	StopAnimation(); // 0x44f Func
	
Label_1107:
	return 0; // 0x453 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x4fb PushI
	if(var_43_int == 0) goto Label_1407; // 0x4fc JumpB
	func_3351(); // 0x4fe NEW_2
	var_45_int = 37366; // 0x500 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x501 Eq
	if(var_46_bool == 0) goto Label_1308; // 0x502 JumpB
	var_47_string = ""; // 0x503 PushV
	var_47_string = "Declaim"; // 0x504 MovS
	func_1252(var_42_cvector, var_47_string); // 0x505 NEW_2
	var_64_int = 535680; // 0x507 PushI
	SetMessage(var_64_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_65_int = 535681; // 0x50c PushI
	var_66_int = 42137; // 0x50d PushI
	var_67_int = 37367; // 0x50e PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x50f TObjFunc
	var_68_int = 540004; // 0x511 PushI
	var_69_int = -1; // 0x512 PushI
	var_70_int = 41975; // 0x513 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x514 TObjFunc
	var_71_int = 540218; // 0x516 PushI
	var_72_int = -1; // 0x517 PushI
	var_73_int = 42198; // 0x518 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x519 TObjFunc
	return 0; // 0x51b Return
	
Label_1308:
	var_74_int = 42137; // 0x51c PushI
	var_75_bool = var_41_bool == var_74_int; // 0x51d Eq
	if(var_75_bool == 0) goto Label_1331; // 0x51e JumpB
	var_76_string = ""; // 0x51f PushV
	var_76_string = "Declaim"; // 0x520 MovS
	func_1252(var_42_cvector, var_76_string); // 0x521 NEW_2
	var_77_int = 540162; // 0x523 PushI
	SetMessage(var_77_int); // 0x524 TObjFunc
	ClearReplies(); // 0x526 TObjFunc
	var_78_int = 540163; // 0x528 PushI
	var_79_int = 42140; // 0x529 PushI
	var_80_int = 42138; // 0x52a PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x52b TObjFunc
	var_81_int = 540164; // 0x52d PushI
	var_82_int = 42140; // 0x52e PushI
	var_83_int = 42139; // 0x52f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x530 TObjFunc
	return 0; // 0x532 Return
	
Label_1331:
	var_84_int = 42140; // 0x533 PushI
	var_85_bool = var_41_bool == var_84_int; // 0x534 Eq
	if(var_85_bool == 0) goto Label_1354; // 0x535 JumpB
	var_86_string = ""; // 0x536 PushV
	var_86_string = "Declaim"; // 0x537 MovS
	func_1252(var_42_cvector, var_86_string); // 0x538 NEW_2
	var_87_int = 540165; // 0x53a PushI
	SetMessage(var_87_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_88_int = 540166; // 0x53f PushI
	var_89_int = 42144; // 0x540 PushI
	var_90_int = 42142; // 0x541 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x542 TObjFunc
	var_91_int = 540167; // 0x544 PushI
	var_92_int = 42144; // 0x545 PushI
	var_93_int = 42143; // 0x546 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x547 TObjFunc
	return 0; // 0x549 Return
	
Label_1354:
	var_94_int = 42144; // 0x54a PushI
	var_95_bool = var_41_bool == var_94_int; // 0x54b Eq
	if(var_95_bool == 0) goto Label_1372; // 0x54c JumpB
	var_96_string = ""; // 0x54d PushV
	var_96_string = "Rage"; // 0x54e MovS
	func_1252(var_42_cvector, var_96_string); // 0x54f NEW_2
	var_97_int = 540168; // 0x551 PushI
	SetMessage(var_97_int); // 0x552 TObjFunc
	ClearReplies(); // 0x554 TObjFunc
	var_98_int = 540169; // 0x556 PushI
	var_99_int = 42147; // 0x557 PushI
	var_100_int = 42146; // 0x558 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x559 TObjFunc
	return 0; // 0x55b Return
	
Label_1372:
	var_101_int = 42147; // 0x55c PushI
	var_102_bool = var_41_bool == var_101_int; // 0x55d Eq
	if(var_102_bool == 0) goto Label_1395; // 0x55e JumpB
	var_103_string = ""; // 0x55f PushV
	var_103_string = "Rage"; // 0x560 MovS
	func_1252(var_42_cvector, var_103_string); // 0x561 NEW_2
	var_104_int = 540170; // 0x563 PushI
	SetMessage(var_104_int); // 0x564 TObjFunc
	ClearReplies(); // 0x566 TObjFunc
	var_105_int = 540171; // 0x568 PushI
	var_106_int = -1; // 0x569 PushI
	var_107_int = 42148; // 0x56a PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x56b TObjFunc
	var_108_int = 540172; // 0x56d PushI
	var_109_int = -1; // 0x56e PushI
	var_110_int = 42149; // 0x56f PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x570 TObjFunc
	return 0; // 0x572 Return
	
Label_1395:
	var_3_string = 1; // 0x573 TMovB
	var_111_bool = 0; // 0x574 PushV
	func_3485(var_111_bool); // 0x575 NEW_2
	if(var_111_bool == 0) goto Label_1403; // 0x577 JumpB
	lshStopAnimation(); // 0x578 Func
	goto Label_1405; // 0x57a Jump
	
Label_1405:
	return 0; // 0x57d Return
	
Label_1403:
	StopAnimation(); // 0x57b Func
	
Label_1407:
	return 0; // 0x57f Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x627 PushI
	if(var_43_int == 0) goto Label_1712; // 0x628 JumpB
	func_3351(); // 0x62a NEW_2
	var_45_int = 492; // 0x62c PushI
	var_46_bool = var_41_bool == var_45_int; // 0x62d Eq
	if(var_46_bool == 0) goto Label_1608; // 0x62e JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x62f PushV
	var_47_object = var_1_object; // 0x630 MovT
	var_48_object = var_0_object; // 0x631 MovT
	func_3635(); // 0x632 NEW_2
	var_51_string = ""; // 0x634 PushV
	var_51_string = "Declaim"; // 0x635 MovS
	func_1552(var_42_cvector, var_51_string); // 0x636 NEW_2
	var_68_int = 500424; // 0x638 PushI
	SetMessage(var_68_int); // 0x639 TObjFunc
	ClearReplies(); // 0x63b TObjFunc
	var_69_int = 500425; // 0x63d PushI
	var_70_int = 494; // 0x63e PushI
	var_71_int = 493; // 0x63f PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x640 TObjFunc
	var_72_int = 500429; // 0x642 PushI
	var_73_int = 498; // 0x643 PushI
	var_74_int = 497; // 0x644 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x645 TObjFunc
	return 0; // 0x647 Return
	
Label_1608:
	var_75_int = 498; // 0x648 PushI
	var_76_bool = var_41_bool == var_75_int; // 0x649 Eq
	if(var_76_bool == 0) goto Label_1631; // 0x64a JumpB
	var_77_string = ""; // 0x64b PushV
	var_77_string = "Shyness"; // 0x64c MovS
	func_1552(var_42_cvector, var_77_string); // 0x64d NEW_2
	var_78_int = 500430; // 0x64f PushI
	SetMessage(var_78_int); // 0x650 TObjFunc
	ClearReplies(); // 0x652 TObjFunc
	var_79_int = 500431; // 0x654 PushI
	var_80_int = 501; // 0x655 PushI
	var_81_int = 499; // 0x656 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x657 TObjFunc
	var_82_int = 500432; // 0x659 PushI
	var_83_int = 494; // 0x65a PushI
	var_84_int = 500; // 0x65b PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x65c TObjFunc
	return 0; // 0x65e Return
	
Label_1631:
	var_85_int = 501; // 0x65f PushI
	var_86_bool = var_41_bool == var_85_int; // 0x660 Eq
	if(var_86_bool == 0) goto Label_1654; // 0x661 JumpB
	var_87_string = ""; // 0x662 PushV
	var_87_string = "Shyness"; // 0x663 MovS
	func_1552(var_42_cvector, var_87_string); // 0x664 NEW_2
	var_88_int = 500433; // 0x666 PushI
	SetMessage(var_88_int); // 0x667 TObjFunc
	ClearReplies(); // 0x669 TObjFunc
	var_89_int = 500435; // 0x66b PushI
	var_90_int = -1; // 0x66c PushI
	var_91_int = 503; // 0x66d PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x66e TObjFunc
	var_92_int = 500434; // 0x670 PushI
	var_93_int = -1; // 0x671 PushI
	var_94_int = 502; // 0x672 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x673 TObjFunc
	return 0; // 0x675 Return
	
Label_1654:
	var_95_int = 494; // 0x676 PushI
	var_96_bool = var_41_bool == var_95_int; // 0x677 Eq
	if(var_96_bool == 0) goto Label_1677; // 0x678 JumpB
	var_97_string = ""; // 0x679 PushV
	var_97_string = "Declaim"; // 0x67a MovS
	func_1552(var_42_cvector, var_97_string); // 0x67b NEW_2
	var_98_int = 500426; // 0x67d PushI
	SetMessage(var_98_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_99_int = 500427; // 0x682 PushI
	var_100_int = 504; // 0x683 PushI
	var_101_int = 495; // 0x684 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x685 TObjFunc
	var_102_int = 500438; // 0x687 PushI
	var_103_int = -1; // 0x688 PushI
	var_104_int = 506; // 0x689 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x68a TObjFunc
	return 0; // 0x68c Return
	
Label_1677:
	var_105_int = 504; // 0x68d PushI
	var_106_bool = var_41_bool == var_105_int; // 0x68e Eq
	if(var_106_bool == 0) goto Label_1700; // 0x68f JumpB
	var_107_string = ""; // 0x690 PushV
	var_107_string = "Declaim"; // 0x691 MovS
	func_1552(var_42_cvector, var_107_string); // 0x692 NEW_2
	var_108_int = 500436; // 0x694 PushI
	SetMessage(var_108_int); // 0x695 TObjFunc
	ClearReplies(); // 0x697 TObjFunc
	var_109_int = 500437; // 0x699 PushI
	var_110_int = 501; // 0x69a PushI
	var_111_int = 505; // 0x69b PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x69c TObjFunc
	var_112_int = 500439; // 0x69e PushI
	var_113_int = -1; // 0x69f PushI
	var_114_int = 508; // 0x6a0 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x6a1 TObjFunc
	return 0; // 0x6a3 Return
	
Label_1700:
	var_3_string = 1; // 0x6a4 TMovB
	var_115_bool = 0; // 0x6a5 PushV
	func_3485(var_115_bool); // 0x6a6 NEW_2
	if(var_115_bool == 0) goto Label_1708; // 0x6a8 JumpB
	lshStopAnimation(); // 0x6a9 Func
	goto Label_1710; // 0x6ab Jump
	
Label_1710:
	return 0; // 0x6ae Return
	
Label_1708:
	StopAnimation(); // 0x6ac Func
	
Label_1712:
	return 0; // 0x6b0 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x758 PushI
	if(var_43_int == 0) goto Label_1997; // 0x759 JumpB
	func_3351(); // 0x75b NEW_2
	var_45_int = 10432; // 0x75d PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x75e Eq
	if(var_46_bool == 0) goto Label_1893; // 0x75f JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x760 PushV
	var_47_object = var_1_object; // 0x761 MovT
	var_48_object = var_0_object; // 0x762 MovT
	func_3564(); // 0x763 NEW_2
	
Label_1893:
	var_51_int = 10431; // 0x765 PushI
	var_52_bool = var_41_bool == var_51_int; // 0x766 Eq
	if(var_52_bool == 0) goto Label_1921; // 0x767 JumpB
	var_53_string = ""; // 0x768 PushV
	var_53_string = "Rage"; // 0x769 MovS
	func_1857(var_42_cvector, var_53_string); // 0x76a NEW_2
	var_70_int = 509489; // 0x76c PushI
	SetMessage(var_70_int); // 0x76d TObjFunc
	ClearReplies(); // 0x76f TObjFunc
	var_71_bool = 0; var_72_object = Obj(); // 0x771 PushV
	var_72_object = var_1_object; // 0x772 MovT
	func_3677(var_72_object); // 0x773 NEW_2
	if(var_71_bool == 0) goto Label_1915; // 0x775 JumpB
	var_79_int = 509490; // 0x776 PushI
	var_80_int = 10433; // 0x777 PushI
	var_81_int = 10432; // 0x778 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x779 TObjFunc
	
Label_1915:
	var_82_int = 509499; // 0x77b PushI
	var_83_int = -1; // 0x77c PushI
	var_84_int = 10441; // 0x77d PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x77e TObjFunc
	return 0; // 0x780 Return
	
Label_1921:
	var_85_int = 10433; // 0x781 PushI
	var_86_bool = var_41_bool == var_85_int; // 0x782 Eq
	if(var_86_bool == 0) goto Label_1944; // 0x783 JumpB
	var_87_string = ""; // 0x784 PushV
	var_87_string = "Rage"; // 0x785 MovS
	func_1857(var_42_cvector, var_87_string); // 0x786 NEW_2
	var_88_int = 509491; // 0x788 PushI
	SetMessage(var_88_int); // 0x789 TObjFunc
	ClearReplies(); // 0x78b TObjFunc
	var_89_int = 509492; // 0x78d PushI
	var_90_int = 10435; // 0x78e PushI
	var_91_int = 10434; // 0x78f PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x790 TObjFunc
	var_92_int = 509496; // 0x792 PushI
	var_93_int = 10439; // 0x793 PushI
	var_94_int = 10438; // 0x794 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x795 TObjFunc
	return 0; // 0x797 Return
	
Label_1944:
	var_95_int = 10439; // 0x798 PushI
	var_96_bool = var_41_bool == var_95_int; // 0x799 Eq
	if(var_96_bool == 0) goto Label_1962; // 0x79a JumpB
	var_97_string = ""; // 0x79b PushV
	var_97_string = "Rage"; // 0x79c MovS
	func_1857(var_42_cvector, var_97_string); // 0x79d NEW_2
	var_98_int = 509497; // 0x79f PushI
	SetMessage(var_98_int); // 0x7a0 TObjFunc
	ClearReplies(); // 0x7a2 TObjFunc
	var_99_int = 509498; // 0x7a4 PushI
	var_100_int = -1; // 0x7a5 PushI
	var_101_int = 10440; // 0x7a6 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x7a7 TObjFunc
	return 0; // 0x7a9 Return
	
Label_1962:
	var_102_int = 10435; // 0x7aa PushI
	var_103_bool = var_41_bool == var_102_int; // 0x7ab Eq
	if(var_103_bool == 0) goto Label_1985; // 0x7ac JumpB
	var_104_string = ""; // 0x7ad PushV
	var_104_string = "Rage"; // 0x7ae MovS
	func_1857(var_42_cvector, var_104_string); // 0x7af NEW_2
	var_105_int = 509493; // 0x7b1 PushI
	SetMessage(var_105_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_106_int = 509494; // 0x7b6 PushI
	var_107_int = -1; // 0x7b7 PushI
	var_108_int = 10436; // 0x7b8 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x7b9 TObjFunc
	var_109_int = 509495; // 0x7bb PushI
	var_110_int = -1; // 0x7bc PushI
	var_111_int = 10437; // 0x7bd PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x7be TObjFunc
	return 0; // 0x7c0 Return
	
Label_1985:
	var_3_string = 1; // 0x7c1 TMovB
	var_112_bool = 0; // 0x7c2 PushV
	func_3485(var_112_bool); // 0x7c3 NEW_2
	if(var_112_bool == 0) goto Label_1993; // 0x7c5 JumpB
	lshStopAnimation(); // 0x7c6 Func
	goto Label_1995; // 0x7c8 Jump
	
Label_1995:
	return 0; // 0x7cb Return
	
Label_1993:
	StopAnimation(); // 0x7c9 Func
	
Label_1997:
	return 0; // 0x7cd Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x86b PushI
	if(var_43_int == 0) goto Label_2190; // 0x86c JumpB
	func_3351(); // 0x86e NEW_2
	var_45_int = 12066; // 0x870 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x871 Eq
	if(var_46_bool == 0) goto Label_2178; // 0x872 JumpB
	var_47_string = ""; // 0x873 PushV
	var_47_string = "Neutral"; // 0x874 MovS
	func_2132(var_42_cvector, var_47_string); // 0x875 NEW_2
	var_64_int = 510917; // 0x877 PushI
	SetMessage(var_64_int); // 0x878 TObjFunc
	ClearReplies(); // 0x87a TObjFunc
	var_65_int = 510918; // 0x87c PushI
	var_66_int = -1; // 0x87d PushI
	var_67_int = 12067; // 0x87e PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x87f TObjFunc
	return 0; // 0x881 Return
	
Label_2178:
	var_3_string = 1; // 0x882 TMovB
	var_68_bool = 0; // 0x883 PushV
	func_3485(var_68_bool); // 0x884 NEW_2
	if(var_68_bool == 0) goto Label_2186; // 0x886 JumpB
	lshStopAnimation(); // 0x887 Func
	goto Label_2188; // 0x889 Jump
	
Label_2188:
	return 0; // 0x88c Return
	
Label_2186:
	StopAnimation(); // 0x88a Func
	
Label_2190:
	return 0; // 0x88e Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x951 PushI
	if(var_43_int == 0) goto Label_2583; // 0x952 JumpB
	func_3351(); // 0x954 NEW_2
	var_45_int = 14570; // 0x956 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x957 Eq
	if(var_46_bool == 0) goto Label_2398; // 0x958 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x959 PushV
	var_47_object = var_1_object; // 0x95a MovT
	var_48_object = var_0_object; // 0x95b MovT
	func_3591(); // 0x95c NEW_2
	
Label_2398:
	var_117_int = 44071; // 0x95e PushI
	var_118_bool = var_42_cvector == var_117_int; // 0x95f Eq
	if(var_118_bool == 0) goto Label_2411; // 0x960 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x961 PushV
	var_119_object = var_1_object; // 0x962 MovT
	var_120_object = var_0_object; // 0x963 MovT
	func_3591(); // 0x964 NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x966 PushV
	var_121_object = var_1_object; // 0x967 MovT
	var_122_object = var_0_object; // 0x968 MovT
	func_3580(var_122_object); // 0x969 NEW_2
	
Label_2411:
	var_145_int = 14547; // 0x96b PushI
	var_146_bool = var_41_bool == var_145_int; // 0x96c Eq
	if(var_146_bool == 0) goto Label_2466; // 0x96d JumpB
	var_147_string = ""; // 0x96e PushV
	var_147_string = "Neutral"; // 0x96f MovS
	func_2362(var_42_cvector, var_147_string); // 0x970 NEW_2
	var_164_int = 513312; // 0x972 PushI
	SetMessage(var_164_int); // 0x973 TObjFunc
	ClearReplies(); // 0x975 TObjFunc
	var_165_bool = 0; // 0x977 PushV
	var_165_bool = 1; // 0x978 MovB
	var_166_bool = 0; // 0x979 PushV
	var_166_bool = 0; // 0x97a MovB
	var_167_bool = 0; var_168_object = Obj(); // 0x97b PushV
	var_168_object = var_1_object; // 0x97c MovT
	func_3713(var_168_object); // 0x97d NEW_2
	if(var_167_bool == 0) goto Label_2438; // 0x97f JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x980 PushV
	var_176_object = var_1_object; // 0x981 MovT
	func_3701(var_176_object); // 0x982 NEW_2
	if(var_175_bool == 0) goto Label_2438; // 0x984 JumpB
	var_166_bool = 1; // 0x985 MovB
	
Label_2438:
	if(var_166_bool == 0) goto Label_2454; // 0x986 JumpB
	var_181_bool = 0; // 0x987 PushV
	var_181_bool = 0; // 0x988 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x989 PushV
	var_183_object = var_1_object; // 0x98a MovT
	func_3713(var_183_object); // 0x98b NEW_2
	if(var_182_bool == 0) goto Label_2452; // 0x98d JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x98e PushV
	var_185_object = var_1_object; // 0x98f MovT
	func_3689(var_185_object); // 0x990 NEW_2
	if(var_184_bool == 0) goto Label_2452; // 0x992 JumpB
	var_181_bool = 1; // 0x993 MovB
	
Label_2452:
	if(var_181_bool == 0) goto Label_2454; // 0x994 JumpB
	var_165_bool = 0; // 0x995 MovB
	
Label_2454:
	if(var_165_bool == 0) goto Label_2460; // 0x996 JumpB
	var_190_int = 513314; // 0x997 PushI
	var_191_int = 14550; // 0x998 PushI
	var_192_int = 14549; // 0x999 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x99a TObjFunc
	
Label_2460:
	var_193_int = 513313; // 0x99c PushI
	var_194_int = -1; // 0x99d PushI
	var_195_int = 14548; // 0x99e PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x99f TObjFunc
	return 0; // 0x9a1 Return
	
Label_2466:
	var_196_int = 14550; // 0x9a2 PushI
	var_197_bool = var_41_bool == var_196_int; // 0x9a3 Eq
	if(var_197_bool == 0) goto Label_2489; // 0x9a4 JumpB
	var_198_string = ""; // 0x9a5 PushV
	var_198_string = "Gasp"; // 0x9a6 MovS
	func_2362(var_42_cvector, var_198_string); // 0x9a7 NEW_2
	var_199_int = 513315; // 0x9a9 PushI
	SetMessage(var_199_int); // 0x9aa TObjFunc
	ClearReplies(); // 0x9ac TObjFunc
	var_200_int = 513317; // 0x9ae PushI
	var_201_int = 14553; // 0x9af PushI
	var_202_int = 14552; // 0x9b0 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x9b1 TObjFunc
	var_203_int = 513316; // 0x9b3 PushI
	var_204_int = 14555; // 0x9b4 PushI
	var_205_int = 14551; // 0x9b5 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x9b6 TObjFunc
	return 0; // 0x9b8 Return
	
Label_2489:
	var_206_int = 14553; // 0x9b9 PushI
	var_207_bool = var_41_bool == var_206_int; // 0x9ba Eq
	if(var_207_bool == 0) goto Label_2512; // 0x9bb JumpB
	var_208_string = ""; // 0x9bc PushV
	var_208_string = "Gasp"; // 0x9bd MovS
	func_2362(var_42_cvector, var_208_string); // 0x9be NEW_2
	var_209_int = 513318; // 0x9c0 PushI
	SetMessage(var_209_int); // 0x9c1 TObjFunc
	ClearReplies(); // 0x9c3 TObjFunc
	var_210_int = 513319; // 0x9c5 PushI
	var_211_int = 14555; // 0x9c6 PushI
	var_212_int = 14554; // 0x9c7 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x9c8 TObjFunc
	var_213_int = 541849; // 0x9ca PushI
	var_214_int = 14555; // 0x9cb PushI
	var_215_int = 44069; // 0x9cc PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x9cd TObjFunc
	return 0; // 0x9cf Return
	
Label_2512:
	var_216_int = 14555; // 0x9d0 PushI
	var_217_bool = var_41_bool == var_216_int; // 0x9d1 Eq
	if(var_217_bool == 0) goto Label_2530; // 0x9d2 JumpB
	var_218_string = ""; // 0x9d3 PushV
	var_218_string = "Rage"; // 0x9d4 MovS
	func_2362(var_42_cvector, var_218_string); // 0x9d5 NEW_2
	var_219_int = 513320; // 0x9d7 PushI
	SetMessage(var_219_int); // 0x9d8 TObjFunc
	ClearReplies(); // 0x9da TObjFunc
	var_220_int = 513335; // 0x9dc PushI
	var_221_int = 14567; // 0x9dd PushI
	var_222_int = 14566; // 0x9de PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x9df TObjFunc
	return 0; // 0x9e1 Return
	
Label_2530:
	var_223_int = 14567; // 0x9e2 PushI
	var_224_bool = var_41_bool == var_223_int; // 0x9e3 Eq
	if(var_224_bool == 0) goto Label_2548; // 0x9e4 JumpB
	var_225_string = ""; // 0x9e5 PushV
	var_225_string = "Rage"; // 0x9e6 MovS
	func_2362(var_42_cvector, var_225_string); // 0x9e7 NEW_2
	var_226_int = 513336; // 0x9e9 PushI
	SetMessage(var_226_int); // 0x9ea TObjFunc
	ClearReplies(); // 0x9ec TObjFunc
	var_227_int = 513337; // 0x9ee PushI
	var_228_int = 14569; // 0x9ef PushI
	var_229_int = 14568; // 0x9f0 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x9f1 TObjFunc
	return 0; // 0x9f3 Return
	
Label_2548:
	var_230_int = 14569; // 0x9f4 PushI
	var_231_bool = var_41_bool == var_230_int; // 0x9f5 Eq
	if(var_231_bool == 0) goto Label_2571; // 0x9f6 JumpB
	var_232_string = ""; // 0x9f7 PushV
	var_232_string = "Rage"; // 0x9f8 MovS
	func_2362(var_42_cvector, var_232_string); // 0x9f9 NEW_2
	var_233_int = 513338; // 0x9fb PushI
	SetMessage(var_233_int); // 0x9fc TObjFunc
	ClearReplies(); // 0x9fe TObjFunc
	var_234_int = 513339; // 0xa00 PushI
	var_235_int = -1; // 0xa01 PushI
	var_236_int = 14570; // 0xa02 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0xa03 TObjFunc
	var_237_int = 541850; // 0xa05 PushI
	var_238_int = -1; // 0xa06 PushI
	var_239_int = 44071; // 0xa07 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xa08 TObjFunc
	return 0; // 0xa0a Return
	
Label_2571:
	var_3_string = 1; // 0xa0b TMovB
	var_240_bool = 0; // 0xa0c PushV
	func_3485(var_240_bool); // 0xa0d NEW_2
	if(var_240_bool == 0) goto Label_2579; // 0xa0f JumpB
	lshStopAnimation(); // 0xa10 Func
	goto Label_2581; // 0xa12 Jump
	
Label_2581:
	return 0; // 0xa15 Return
	
Label_2579:
	StopAnimation(); // 0xa13 Func
	
Label_2583:
	return 0; // 0xa17 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	var_43_int = 1; // 0xaba PushI
	if(var_43_int == 0) goto Label_2786; // 0xabb JumpB
	func_3351(); // 0xabd NEW_2
	var_45_int = 42551; // 0xabf PushI
	var_46_bool = var_41_int == var_45_int; // 0xac0 Eq
	if(var_46_bool == 0) goto Label_2774; // 0xac1 JumpB
	var_47_string = ""; // 0xac2 PushV
	var_47_string = "Neutral"; // 0xac3 MovS
	func_2723(var_42_cvector, var_47_string); // 0xac4 NEW_2
	var_64_int = 540542; // 0xac6 PushI
	SetMessage(var_64_int); // 0xac7 TObjFunc
	ClearReplies(); // 0xac9 TObjFunc
	var_65_int = 540543; // 0xacb PushI
	var_66_int = -1; // 0xacc PushI
	var_67_int = 42552; // 0xacd PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xace TObjFunc
	var_68_int = 540796; // 0xad0 PushI
	var_69_int = -1; // 0xad1 PushI
	var_70_int = 42845; // 0xad2 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xad3 TObjFunc
	return 0; // 0xad5 Return
	
Label_2774:
	var_3_string = 1; // 0xad6 TMovB
	var_71_bool = 0; // 0xad7 PushV
	func_3485(var_71_bool); // 0xad8 NEW_2
	if(var_71_bool == 0) goto Label_2782; // 0xada JumpB
	lshStopAnimation(); // 0xadb Func
	goto Label_2784; // 0xadd Jump
	
Label_2784:
	return 0; // 0xae0 Return
	
Label_2782:
	StopAnimation(); // 0xade Func
	
Label_2786:
	return 0; // 0xae2 Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_42_int = 10; // 0xb2d PushI
	var_43_bool = var_41_int == var_42_int; // 0xb2e Eq
	if(var_43_bool == 0) goto Label_2897; // 0xb2f JumpB
	func_2856(); // 0xb31 NEW_2
	var_45_bool = 0; // 0xb33 PushV
	var_45_bool = 0; // 0xb34 MovB
	var_46_bool = 0; // 0xb35 PushV
	func_3077(var_46_bool); // 0xb36 NEW_2
	if(var_46_bool == 0) goto Label_2878; // 0xb38 JumpB
	var_49_bool = 0; // 0xb39 PushV
	func_2825(var_49_bool); // 0xb3a NEW_2
	if(var_49_bool == 0) goto Label_2878; // 0xb3c JumpB
	var_45_bool = 1; // 0xb3d MovB
	
Label_2878:
	if(var_45_bool == 0) goto Label_2891; // 0xb3e JumpB
	var_66_bool = 0; // 0xb3f PushV
	func_2805(var_66_bool); // 0xb40 NEW_2
	if(var_66_bool == 0) goto Label_2890; // 0xb42 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0xb43 PushV
	var_87_object = Obj(); // 0xb44 PushV
	func_3358(var_87_object); // 0xb45 NEW_2
	var_86_object = var_87_object; // 0xb46 Mov
	func_3225(var_86_object); // 0xb48 NEW_2
	
Label_2890:
	goto Label_2897; // 0xb4a Jump
	
Label_2897:
	return 0; // 0xb51 Return
	
Label_2891:
	func_2820(var_41_int); // 0xb4c NEW_2
	func_2847(); // 0xb4f NEW_2
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3038(); // 0xb53 NEW_2
	func_2856(); // 0xb56 NEW_2
	lshStopSpeech(); // 0xb58 Func
	lshStopAnimation(); // 0xb5a Func
	StopAsync(); // 0xb5c Func
	Hold(); // 0xb5e Func
	return 0; // 0xb60 Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0(); // 0xb61 Func
	func_2856(); // 0xb64 NEW_2
	var_42_string = ""; // 0xb66 PushV
	var_42_string = "Neutral"; // 0xb67 MovS
	func_3305(var_42_string); // 0xb68 NEW_2
	func_2847(); // 0xb6b NEW_2
	return 0; // 0xb6d Return
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool; // 0xb6f Push
	if(var_42_bool == 0) goto Label_2933; // 0xb70 JumpB
	func_2847(); // 0xb72 NEW_2
	goto Label_2937; // 0xb74 Jump
	
Label_2937:
	return 0; // 0xb79 Return
	
Label_2933:
	var_48_string = ""; // 0xb75 PushV
	var_48_string = "Neutral"; // 0xb76 MovS
	func_3305(var_48_string); // 0xb77 NEW_2
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0; // 0xb7a PushV
	IsOverrideActive(var_43_bool); // 0xb7b Func
	var_44_bool = var_43_bool == 0; // 0xb7d Not
	if(var_44_bool == 0) goto Label_2966; // 0xb7e JumpB
	EventDisable(0); // 0xb7f EventDisable
	func_3038(); // 0xb81 NEW_2
	var_45_bool = 0; var_46_object = Obj(); // 0xb83 PushV
	var_46_object = var_41_object; // 0xb84 Mov
	func_3068(var_46_object); // 0xb85 NEW_2
	EventEnable(0); // 0xb87 EventEnable
	var_59_object = Obj(); // 0xb88 PushV
	var_59_object = var_41_object; // 0xb89 Mov
	func_3924(var_59_object); // 0xb8a NEW_2
	var_768_string = ""; // 0xb8c PushV
	var_768_string = "Neutral"; // 0xb8d MovS
	func_3305(var_768_string); // 0xb8e NEW_2
	func_2856(); // 0xb91 NEW_2
	func_2847(); // 0xb94 NEW_2
	
Label_2966:
	return 2; // 0xb96 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_2791(var_40_cvector); // 0xae4 NEW_2
	return 0; // 0xae6 Return
}


func_0(var_0_object, var_500_int, var_501_object)
{
	var_503_object = Obj(); var_504_bool = 0; var_505_int = 0; var_506_bool = 0; var_507_object = Obj(); var_508_bool = 0; var_509_int = 0; var_510_bool = 0; // 0x0 PushV
	var_0_object = var_501_object; // 0x1 TMov
	var_511_bool = 0; var_512_object = Obj(); var_513_float = 0; // 0x2 PushV
	var_512_object = var_501_object; // 0x3 Mov
	var_513_float = 70.0; // 0x4 MovF
	func_3082(var_512_object, var_513_float); // 0x5 NEW_2
	var_514_bool = var_511_bool == 0; // 0x7 Not
	if(var_514_bool == 0) goto Label_11; // 0x8 JumpB
	var_500_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_507_object); // 0xb Func
	var_515_int = 0; // 0xd PushV
	func_3479(var_515_int); // 0xe NEW_2
	SetNPCName(var_515_int); // 0x10 ObjFunc
	var_516_int = 0; // 0x12 PushV
	func_3477(var_516_int); // 0x13 NEW_2
	SetNPCDescription(var_516_int); // 0x15 ObjFunc
	var_517_string = ""; // 0x17 PushV
	func_3481(var_517_string); // 0x18 NEW_2
	SetPhoto(var_517_string); // 0x1a ObjFunc
	var_518_string = ""; // 0x1c PushV
	func_3483(var_518_string); // 0x1d NEW_2
	SetPhoto2(var_518_string); // 0x1f ObjFunc
	var_519_int = 0; // 0x21 PushV
	func_3907(var_519_int); // 0x22 NEW_2
	SetPlayerName(var_519_int); // 0x24 ObjFunc
	var_509_int = -1; // 0x26 MovI
	IsOverrideActive(var_508_bool); // 0x27 Func
	var_520_bool = var_508_bool; // 0x29 Push
	if(var_520_bool == 0) goto Label_45; // 0x2a JumpB
	var_500_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_507_object); // 0x2d Func
	var_521_bool = 0; var_522_object = Obj(); // 0x2f PushV
	var_523_object = Obj(); // 0x30 PushV
	func_3358(var_523_object); // 0x31 NEW_2
	var_522_object = var_523_object; // 0x32 Mov
	func_3167(var_521_bool, var_522_object); // 0x34 NEW_2
	var_524_object = Obj(); var_525_object = Obj(); // 0x36 PushV
	var_524_object = var_501_object; // 0x37 Mov
	var_525_object = var_507_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_526_object, var_527_object, var_528_string, var_529_bool, var_524_object, var_525_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_510_bool); // 0x3d ObjFunc
	
Label_63:
	var_563_bool = var_510_bool == 0; // 0x3f Not
	if(var_563_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_510_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_564_object = Obj(); // 0x46 PushV
	var_564_object = var_501_object; // 0x47 Mov
	func_3150(); // 0x48 NEW_2
	StopDialog(var_507_object); // 0x4a Func
	GetReturnValue(var_509_int); // 0x4c ObjFunc
	var_500_int = var_509_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1794(var_0_object, var_1_object, var_2_object, var_3_string, var_322_object, var_323_object)
{
	var_0_object = var_323_object; // 0x703 TMov
	var_1_object = var_322_object; // 0x704 TMov
	var_3_string = 0; // 0x705 TMovB
	var_328_int = 1; // 0x706 PushI
	if(var_328_int == 0) goto Label_1827; // 0x707 JumpB
	var_329_string = ""; // 0x708 PushV
	var_329_string = "Rage"; // 0x709 MovS
	func_1857(var_323_object, var_329_string); // 0x70a NEW_2
	var_337_int = 509489; // 0x70c PushI
	SetMessage(var_337_int); // 0x70d TObjFunc
	ClearReplies(); // 0x70f TObjFunc
	var_338_bool = 0; var_339_object = Obj(); // 0x711 PushV
	var_339_object = var_1_object; // 0x712 MovT
	func_3677(var_339_object); // 0x713 NEW_2
	if(var_338_bool == 0) goto Label_1819; // 0x715 JumpB
	var_346_int = 509490; // 0x716 PushI
	var_347_int = 10433; // 0x717 PushI
	var_348_int = 10432; // 0x718 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x719 TObjFunc
	
Label_1819:
	var_349_int = 509499; // 0x71b PushI
	var_350_int = -1; // 0x71c PushI
	var_351_int = 10441; // 0x71d PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x71e TObjFunc
	goto Label_1827; // 0x720 Jump
	
Label_1827:
	var_352_bool = 0; // 0x723 PushV
	func_3485(var_352_bool); // 0x724 NEW_2
	if(var_352_bool == 0) goto Label_1842; // 0x726 JumpB
	
Label_1831:
	lshWaitForAnimEnd(); // 0x727 Func
	var_353_string = var_3_string; // 0x729 PushT
	if(var_353_string == 0) goto Label_1836; // 0x72a JumpB
	goto Label_1841; // 0x72b Jump
	
Label_1841:
	goto Label_1856; // 0x731 Jump
	
Label_1856:
	return 0; // 0x740 Return
	
Label_1836:
	var_354_string = ""; // 0x72c PushV
	var_354_string = var_2_object; // 0x72d MovT
	func_3305(var_354_string); // 0x72e NEW_2
	goto Label_1831; // 0x730 Jump
	
Label_1842:
	var_355_string = "all"; // 0x732 PushS
	var_356_string = "idle"; // 0x733 PushS
	PlayAnimation(var_355_string, var_356_string); // 0x734 Func
	
Label_1846:
	WaitForAnimEnd(); // 0x736 Func
	var_357_string = var_3_string; // 0x738 PushT
	if(var_357_string == 0) goto Label_1851; // 0x739 JumpB
	goto Label_1856; // 0x73a Jump
	
Label_1851:
	var_358_string = "all"; // 0x73b PushS
	var_359_string = "idle"; // 0x73c PushS
	PlayAnimation(var_358_string, var_359_string); // 0x73d Func
	goto Label_1846; // 0x73f Jump
}


func_2820(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0); // 0xb04 PushE
	var_119_float = GetByIndex(var_0_object, 2); // 0xb05 PushE
	RotateAsync(var_118_float, var_119_float); // 0xb06 Func
	return 0; // 0xb08 Return
}


func_3077(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0xc05 PushV
	IsLoaded(var_43_bool); // 0xc06 Func
	var_41_bool = var_43_bool; // 0xc08 Mov
	return 2; // 0xc09 Return
}


func_3591()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xe07 PushV
	var_51_string = "d7q02"; // 0xe08 PushS
	var_52_int = 1; // 0xe09 PushI
	SetVariable(var_51_string, var_52_int); // 0xe0a Func
	var_53_object = Obj(); // 0xe0c PushV
	func_3857(var_53_object); // 0xe0d NEW_2
	var_50_object = var_53_object; // 0xe0e Mov
	var_60_string = "d7q02MarkGotoCemetery"; // 0xe10 PushS
	var_61_string = "pt_d7q02_corpse"; // 0xe11 PushS
	var_62_int = 0; // 0xe12 PushI
	var_63_int = 515427; // 0xe13 PushI
	var_64_float = 0; // 0xe14 PushV
	func_3433(var_64_float); // 0xe15 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0xe17 ObjFunc
	var_67_string = "d7q02MarkGotoAlexandr"; // 0xe19 PushS
	var_68_string = "pt_map_alexandr"; // 0xe1a PushS
	var_69_int = 0; // 0xe1b PushI
	var_70_int = 515428; // 0xe1c PushI
	var_71_float = 0; // 0xe1d PushV
	func_3433(var_71_float); // 0xe1e NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0xe20 ObjFunc
	func_3777(); // 0xe23 NEW_2
	func_3790(); // 0xe26 NEW_2
	var_103_object = Obj(); var_104_string = ""; // 0xe28 PushV
	var_104_string = "quest_d7_02"; // 0xe29 MovS
	func_3379(var_103_object, var_104_string); // 0xe2a NEW_2
	var_111_bool = 0; var_112_string = ""; var_113_string = ""; // 0xe2c PushV
	var_112_string = "quest_d7_02"; // 0xe2d MovS
	var_113_string = "place_corpse"; // 0xe2e MovS
	func_3421(var_111_bool, var_112_string, var_113_string); // 0xe2f NEW_2
	return 2; // 0xe31 Return
}


func_3336(var_169_bool, var_170_string)
{
	var_171_bool = 0; var_172_bool = 0; // 0xd08 PushV
	var_173_bool = 0; // 0xd09 PushV
	func_3485(var_173_bool); // 0xd0a NEW_2
	if(var_173_bool == 0) goto Label_3349; // 0xd0c JumpB
	lshHasSpeech(var_172_bool, var_170_string); // 0xd0d Func
	var_174_bool = var_172_bool; // 0xd0f Push
	if(var_174_bool == 0) goto Label_3349; // 0xd10 JumpB
	lshPlaySpeech(var_170_string); // 0xd11 Func
	var_169_bool = 1; // 0xd13 MovB
	return 2; // 0xd14 Return
	
Label_3349:
	var_169_bool = 0; // 0xd15 MovB
	return 2; // 0xd16 Return
}


func_2825(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0xb09 PushV
	var_54_string = "player"; // 0xb0a PushS
	FindActor(var_52_object, var_54_string); // 0xb0b Func
	var_55_bool = var_52_object == 0; // 0xb0d Not
	if(var_55_bool == 0) goto Label_2833; // 0xb0e JumpB
	var_49_bool = 0; // 0xb0f MovB
	return 4; // 0xb10 Return
	
Label_2833:
	var_56_float = 0; var_57_object = Obj(); // 0xb11 PushV
	var_57_object = var_52_object; // 0xb12 Mov
	func_3043(var_57_object); // 0xb13 NEW_2
	var_64_float = 90000.0; // 0xb15 PushF
	var_65_bool = var_56_float > var_64_float; // 0xb16 GT
	if(var_65_bool == 0) goto Label_2842; // 0xb17 JumpB
	var_49_bool = 0; // 0xb18 MovB
	return 4; // 0xb19 Return
	
Label_2842:
	CanSee(var_53_bool, var_52_object); // 0xb1a Func
	var_49_bool = var_53_bool; // 0xb1c Mov
	return 4; // 0xb1d Return
}


func_3082(var_75_bool, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; // 0xc0a PushV
	GetPosition(var_88_cvector); // 0xc0b ObjFunc
	GetEyesHeight(var_87_float); // 0xc0d ObjFunc
	var_96_float = GetByIndex(var_88_cvector, 1); // 0xc0f PushE
	var_96_float = var_96_float + var_87_float; // 0xc10 Add2
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0xc11 PopE
	GetPosition(var_89_cvector); // 0xc12 Func
	GetEyesHeight(var_87_float); // 0xc14 Func
	var_97_float = GetByIndex(var_89_cvector, 1); // 0xc16 PushE
	var_97_float = var_97_float + var_87_float; // 0xc17 Add2
	SetByIndex(var_89_cvector, 1) = var_97_float; // 0xc18 PopE
	var_90_cvector = var_88_cvector - var_89_cvector; // 0xc19 Sub2
	var_98_float = GetByIndex(var_90_cvector, 1); // 0xc1a PushE
	var_98_float = 0; // 0xc1b MovI
	SetByIndex(var_90_cvector, 1) = var_98_float; // 0xc1c PopE
	var_99_int = var_90_cvector | var_90_cvector; // 0xc1d Or
	var_100_float = sqrt(var_99_int); // 0xc1e Sqrt
	var_90_cvector = var_90_cvector / var_90_cvector; // 0xc1f Div2
	var_91_cvector = -var_90_cvector; // 0xc20 Neg2
	var_101_float = var_90_cvector * var_77_float; // 0xc21 Mult
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0xc22 PushV
	var_104_cvector = CVector(0.0, 1.0, 0.0); // 0xc23 PushVec
	var_103_cvector = var_91_cvector ^ var_104_cvector; // 0xc24 Xor2
	func_3364(var_102_cvector, var_103_cvector); // 0xc25 NEW_2
	var_110_int = 25; // 0xc27 PushI
	var_111_float = var_102_cvector * var_110_int; // 0xc28 Mult
	var_112_int = var_101_float + var_111_float; // 0xc29 Add
	var_113_cvector = CVector(0.0, 10.0, 0.0); // 0xc2a PushVec
	var_92_cvector = var_112_int - var_113_cvector; // 0xc2b Sub2
	var_93_cvector = var_89_cvector + var_92_cvector; // 0xc2c Add2
	IsOverrideActive(var_94_bool); // 0xc2d Func
	var_114_bool = var_94_bool; // 0xc2f Push
	if(var_114_bool == 0) goto Label_3123; // 0xc30 JumpB
	var_75_bool = 0; // 0xc31 MovB
	return 18; // 0xc32 Return
	
Label_3123:
	StopWorld(); // 0xc33 Func
	CameraTransit(var_93_cvector, var_91_cvector); // 0xc35 Func
	var_115_float = GetByIndex(var_92_cvector, 0); // 0xc37 PushE
	var_116_float = GetByIndex(var_92_cvector, 2); // 0xc38 PushE
	Rotate(var_115_float, var_116_float); // 0xc39 Func
	var_117_bool = 0; // 0xc3b PushV
	func_3485(var_117_bool); // 0xc3c NEW_2
	if(var_117_bool == 0) goto Label_3136; // 0xc3e JumpB
	goto Label_3144; // 0xc3f Jump
	
Label_3144:
	CameraWaitForPlayFinish(); // 0xc48 Func
	ResumeWorld(); // 0xc4a Func
	var_75_bool = 1; // 0xc4c MovB
	return 18; // 0xc4d Return
	
Label_3136:
	var_118_string = "head"; // 0xc40 PushS
	HasAnimationTrack(var_95_bool, var_118_string); // 0xc41 Func
	var_119_bool = var_95_bool; // 0xc43 Push
	if(var_119_bool == 0) goto Label_3144; // 0xc44 JumpB
	var_120_string = "head"; // 0xc45 PushS
	LookAsyncCamera(var_120_string); // 0xc46 Func
}


func_1552(var_2_object, var_241_string)
{
	var_242_bool = 0; // 0x611 PushV
	func_3485(var_242_bool); // 0x612 NEW_2
	var_243_bool = var_242_bool == 0; // 0x614 Not
	if(var_243_bool == 0) goto Label_1559; // 0x615 JumpB
	return 0; // 0x616 Return
	
Label_1559:
	var_244_bool = var_241_string == var_2_object; // 0x617 Eq
	if(var_244_bool == 0) goto Label_1562; // 0x618 JumpB
	return 0; // 0x619 Return
	
Label_1562:
	var_245_string = ""; var_246_bool = 0; // 0x61a PushV
	var_245_string = var_241_string; // 0x61b Mov
	var_247_string = ""; // 0x61c PushS
	var_248_bool = var_241_string == var_247_string; // 0x61d Eq
	if(var_248_bool == 0) goto Label_1569; // 0x61e JumpB
	var_246_bool = 0; // 0x61f MovB
	goto Label_1570; // 0x620 Jump
	
Label_1570:
	func_3321(var_245_string, var_246_bool); // 0x622 NEW_2
	var_2_object = var_241_string; // 0x624 TMov
	return 0; // 0x625 Return
	
Label_1569:
	var_246_bool = 1; // 0x621 MovB
}


func_3857(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); // 0xf11 PushV
	GetMainOutdoorScene(var_56_object); // 0xf12 Func
	var_58_bool = var_56_object == 0; // 0xf14 NullEq
	if(var_58_bool == 0) goto Label_3868; // 0xf15 JumpB
	var_59_string = "Can't find main outdoor scene"; // 0xf16 PushS
	Trace(var_59_string); // 0xf17 Func
	var_57_object = 0; // 0xf19 SetNull
	var_53_object = var_57_object; // 0xf1a Mov
	return 4; // 0xf1b Return
	
Label_3868:
	GetMap(var_57_object); // 0xf1c ObjFunc
	var_53_object = var_57_object; // 0xf1e Mov
	return 4; // 0xf1f Return
}


func_3351()
{
	var_44_bool = 0; // 0xd17 PushV
	func_3485(var_44_bool); // 0xd18 NEW_2
	if(var_44_bool == 0) goto Label_3357; // 0xd1a JumpB
	lshStopSpeech(); // 0xd1b Func
	
Label_3357:
	return 0; // 0xd1d Return
}


func_2584(var_0_object, var_712_int, var_713_object)
{
	var_715_object = Obj(); var_716_bool = 0; var_717_int = 0; var_718_bool = 0; var_719_object = Obj(); var_720_bool = 0; var_721_int = 0; var_722_bool = 0; // 0xa18 PushV
	var_0_object = var_713_object; // 0xa19 TMov
	var_723_bool = 0; var_724_object = Obj(); var_725_float = 0; // 0xa1a PushV
	var_724_object = var_713_object; // 0xa1b Mov
	var_725_float = 70.0; // 0xa1c MovF
	func_3082(var_724_object, var_725_float); // 0xa1d NEW_2
	var_726_bool = var_723_bool == 0; // 0xa1f Not
	if(var_726_bool == 0) goto Label_2595; // 0xa20 JumpB
	var_712_int = -2; // 0xa21 MovI
	return 8; // 0xa22 Return
	
Label_2595:
	CreateDialog(var_719_object); // 0xa23 Func
	var_727_int = 0; // 0xa25 PushV
	func_3479(var_727_int); // 0xa26 NEW_2
	SetNPCName(var_727_int); // 0xa28 ObjFunc
	var_728_int = 0; // 0xa2a PushV
	func_3477(var_728_int); // 0xa2b NEW_2
	SetNPCDescription(var_728_int); // 0xa2d ObjFunc
	var_729_string = ""; // 0xa2f PushV
	func_3481(var_729_string); // 0xa30 NEW_2
	SetPhoto(var_729_string); // 0xa32 ObjFunc
	var_730_string = ""; // 0xa34 PushV
	func_3483(var_730_string); // 0xa35 NEW_2
	SetPhoto2(var_730_string); // 0xa37 ObjFunc
	var_731_int = 0; // 0xa39 PushV
	func_3907(var_731_int); // 0xa3a NEW_2
	SetPlayerName(var_731_int); // 0xa3c ObjFunc
	var_721_int = -1; // 0xa3e MovI
	IsOverrideActive(var_720_bool); // 0xa3f Func
	var_732_bool = var_720_bool; // 0xa41 Push
	if(var_732_bool == 0) goto Label_2629; // 0xa42 JumpB
	var_712_int = -2; // 0xa43 MovI
	return 8; // 0xa44 Return
	
Label_2629:
	DoDialog(var_719_object); // 0xa45 Func
	var_733_bool = 0; var_734_object = Obj(); // 0xa47 PushV
	var_735_object = Obj(); // 0xa48 PushV
	func_3358(var_735_object); // 0xa49 NEW_2
	var_734_object = var_735_object; // 0xa4a Mov
	func_3167(var_733_bool, var_734_object); // 0xa4c NEW_2
	var_736_object = Obj(); var_737_object = Obj(); // 0xa4e PushV
	var_736_object = var_713_object; // 0xa4f Mov
	var_737_object = var_719_object; // 0xa50 Mov
	TaskCall(15); // 0xa51 TaskCall
	func_2665(var_738_object, var_739_object, var_740_string, var_741_bool, var_736_object, var_737_object); // 0xa52 NEW_2
	TaskReturn(); // 0xa53 TaskReturn
	IsDialogEnd(var_722_bool); // 0xa55 ObjFunc
	
Label_2647:
	var_766_bool = var_722_bool == 0; // 0xa57 Not
	if(var_766_bool == 0) goto Label_2654; // 0xa58 JumpB
	sync(); // 0xa59 Func
	IsDialogEnd(var_722_bool); // 0xa5b ObjFunc
	goto Label_2647; // 0xa5d Jump
	
Label_2654:
	var_767_object = Obj(); // 0xa5e PushV
	var_767_object = var_713_object; // 0xa5f Mov
	func_3150(); // 0xa60 NEW_2
	StopDialog(var_719_object); // 0xa62 Func
	GetReturnValue(var_721_int); // 0xa64 ObjFunc
	var_712_int = var_721_int; // 0xa66 Mov
	return 8; // 0xa67 Return
}


func_3358(var_137_object)
{
	var_138_object = Obj(); var_139_object = Obj(); // 0xd1e PushV
	self(var_139_object); // 0xd1f Func
	var_137_object = var_139_object; // 0xd21 Mov
	return 2; // 0xd22 Return
}


func_2079(var_0_object, var_1_object, var_2_object, var_3_string, var_388_object, var_389_object)
{
	var_0_object = var_389_object; // 0x820 TMov
	var_1_object = var_388_object; // 0x821 TMov
	var_3_string = 0; // 0x822 TMovB
	var_394_int = 1; // 0x823 PushI
	if(var_394_int == 0) goto Label_2102; // 0x824 JumpB
	var_395_string = ""; // 0x825 PushV
	var_395_string = "Neutral"; // 0x826 MovS
	func_2132(var_389_object, var_395_string); // 0x827 NEW_2
	var_403_int = 510917; // 0x829 PushI
	SetMessage(var_403_int); // 0x82a TObjFunc
	ClearReplies(); // 0x82c TObjFunc
	var_404_int = 510918; // 0x82e PushI
	var_405_int = -1; // 0x82f PushI
	var_406_int = 12067; // 0x830 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x831 TObjFunc
	goto Label_2102; // 0x833 Jump
	
Label_2102:
	var_407_bool = 0; // 0x836 PushV
	func_3485(var_407_bool); // 0x837 NEW_2
	if(var_407_bool == 0) goto Label_2117; // 0x839 JumpB
	
Label_2106:
	lshWaitForAnimEnd(); // 0x83a Func
	var_408_string = var_3_string; // 0x83c PushT
	if(var_408_string == 0) goto Label_2111; // 0x83d JumpB
	goto Label_2116; // 0x83e Jump
	
Label_2116:
	goto Label_2131; // 0x844 Jump
	
Label_2131:
	return 0; // 0x853 Return
	
Label_2111:
	var_409_string = ""; // 0x83f PushV
	var_409_string = var_2_object; // 0x840 MovT
	func_3305(var_409_string); // 0x841 NEW_2
	goto Label_2106; // 0x843 Jump
	
Label_2117:
	var_410_string = "all"; // 0x845 PushS
	var_411_string = "idle"; // 0x846 PushS
	PlayAnimation(var_410_string, var_411_string); // 0x847 Func
	
Label_2121:
	WaitForAnimEnd(); // 0x849 Func
	var_412_string = var_3_string; // 0x84b PushT
	if(var_412_string == 0) goto Label_2126; // 0x84c JumpB
	goto Label_2131; // 0x84d Jump
	
Label_2126:
	var_413_string = "all"; // 0x84e PushS
	var_414_string = "idle"; // 0x84f PushS
	PlayAnimation(var_413_string, var_414_string); // 0x850 Func
	goto Label_2121; // 0x852 Jump
}


func_2847()
{
	var_770_float = 0; var_771_float = 0; // 0xb1f PushV
	var_772_int = 8; // 0xb20 PushI
	var_773_int = 16; // 0xb21 PushI
	rand(var_771_float, var_772_int, var_773_int); // 0xb22 Func
	var_774_int = 10; // 0xb24 PushI
	SetTimer(var_774_int, var_771_float); // 0xb25 Func
	return 2; // 0xb27 Return
}


func_3874(var_122_object, var_123_string, var_124_float)
{
	var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_object = Obj(); var_133_bool = 0; // 0xf22 PushV
	GetMainOutdoorScene(var_132_object); // 0xf23 Func
	var_134_bool = var_132_object == 0; // 0xf25 NullEq
	if(var_134_bool == 0) goto Label_3883; // 0xf26 JumpB
	var_135_string = "Can't find main outdoor scene"; // 0xf27 PushS
	Trace(var_135_string); // 0xf28 Func
	return 8; // 0xf2a Return
	
Label_3883:
	GetLocator(var_123_string, var_133_bool, var_130_cvector, var_131_cvector); // 0xf2b ObjFunc
	var_136_bool = var_133_bool == 0; // 0xf2d Not
	if(var_136_bool == 0) goto Label_3893; // 0xf2e JumpB
	var_137_string = "Warning: outdoor scene locator "; // 0xf2f PushS
	var_138_int = var_137_string + var_123_string; // 0xf30 Add
	var_139_string = " doesnt exist"; // 0xf31 PushS
	var_140_int = var_138_int + var_139_string; // 0xf32 Add
	Trace(var_140_int); // 0xf33 Func
	
Label_3893:
	GetMap(var_122_object); // 0xf35 ObjFunc
	var_141_bool = var_122_object == 0; // 0xf37 NullEq
	if(var_141_bool == 0) goto Label_3901; // 0xf38 JumpB
	var_142_string = "Can't find map"; // 0xf39 PushS
	Trace(var_142_string); // 0xf3a Func
	return 8; // 0xf3c Return
	
Label_3901:
	var_143_float = GetByIndex(var_130_cvector, 0); // 0xf3d PushE
	var_144_float = GetByIndex(var_130_cvector, 2); // 0xf3e PushE
	SetMapParams(var_143_float, var_144_float, var_124_float); // 0xf3f ObjFunc
	return 8; // 0xf41 Return
}


func_3364(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0; // 0xd24 PushV
	var_107_int = var_103_cvector | var_103_cvector; // 0xd25 Or
	var_106_float = sqrt(var_107_int); // 0xd26 Sqrt2
	var_108_float = 0.0; // 0xd27 PushF
	var_109_bool = var_106_float < var_108_float; // 0xd28 LT
	if(var_109_bool == 0) goto Label_3372; // 0xd29 JumpB
	var_102_cvector = CVector(0.0, 0.0, 0.0); // 0xd2a MovV
	return 2; // 0xd2b Return
	
Label_3372:
	var_102_cvector = var_103_cvector / var_103_cvector; // 0xd2c Div2
	return 2; // 0xd2d Return
}


func_2856()
{
	var_769_int = 10; // 0xb28 PushI
	KillTimer(var_769_int); // 0xb29 Func
	return 0; // 0xb2b Return
}


func_3374(var_340_int, var_341_string)
{
	var_342_int = 0; var_343_int = 0; // 0xd2e PushV
	GetVariable(var_341_string, var_343_int); // 0xd2f Func
	var_340_int = var_343_int; // 0xd31 Mov
	return 2; // 0xd32 Return
}


func_3635()
{
	var_239_string = "KnowMark"; // 0xe34 PushS
	var_240_int = 1; // 0xe35 PushI
	SetVariable(var_239_string, var_240_int); // 0xe36 Func
	return 0; // 0xe38 Return
}


func_3379(var_103_object, var_104_string)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); // 0xd33 PushV
	GetMainOutdoorScene(var_107_object); // 0xd34 Func
	var_109_string = ".bin"; // 0xd36 PushS
	var_110_int = var_104_string + var_109_string; // 0xd37 Add
	AddBlankActor(var_108_object, var_107_object, var_104_string, var_110_int); // 0xd38 Func
	var_103_object = var_108_object; // 0xd3a Mov
	return 4; // 0xd3b Return
}


func_3641(var_540_bool)
{
	var_542_int = 0; var_543_string = ""; // 0xe3a PushV
	var_543_string = "d8q04"; // 0xe3b MovS
	func_3374(var_542_int, var_543_string); // 0xe3c NEW_2
	var_544_int = 3; // 0xe3e PushI
	var_545_bool = var_542_int == var_544_int; // 0xe3f Eq
	if(var_545_bool == 0) goto Label_3651; // 0xe40 JumpB
	var_540_bool = 1; // 0xe41 MovB
	return 0; // 0xe42 Return
	
Label_3651:
	var_540_bool = 0; // 0xe43 MovB
	return 0; // 0xe44 Return
}


func_2362(var_2_object, var_450_string)
{
	var_451_bool = 0; // 0x93b PushV
	func_3485(var_451_bool); // 0x93c NEW_2
	var_452_bool = var_451_bool == 0; // 0x93e Not
	if(var_452_bool == 0) goto Label_2369; // 0x93f JumpB
	return 0; // 0x940 Return
	
Label_2369:
	var_453_bool = var_450_string == var_2_object; // 0x941 Eq
	if(var_453_bool == 0) goto Label_2372; // 0x942 JumpB
	return 0; // 0x943 Return
	
Label_2372:
	var_454_string = ""; var_455_bool = 0; // 0x944 PushV
	var_454_string = var_450_string; // 0x945 Mov
	var_456_string = ""; // 0x946 PushS
	var_457_bool = var_450_string == var_456_string; // 0x947 Eq
	if(var_457_bool == 0) goto Label_2379; // 0x948 JumpB
	var_455_bool = 0; // 0x949 MovB
	goto Label_2380; // 0x94a Jump
	
Label_2380:
	func_3321(var_454_string, var_455_bool); // 0x94c NEW_2
	var_2_object = var_450_string; // 0x94e TMov
	return 0; // 0x94f Return
	
Label_2379:
	var_455_bool = 1; // 0x94b MovB
}


func_3390(var_140_int, var_141_int)
{
	var_142_object = Obj(); var_143_object = Obj(); // 0xd3e PushV
	CreateIntVector(var_143_object); // 0xd3f Func
	add(var_140_int); // 0xd41 ObjFunc
	add(var_141_int); // 0xd43 ObjFunc
	var_144_int = 3; // 0xd45 PushI
	SendWorldWndMessage(var_144_int, var_143_object); // 0xd46 Func
	return 2; // 0xd48 Return
}


func_1857(var_2_object, var_329_string)
{
	var_330_bool = 0; // 0x742 PushV
	func_3485(var_330_bool); // 0x743 NEW_2
	var_331_bool = var_330_bool == 0; // 0x745 Not
	if(var_331_bool == 0) goto Label_1864; // 0x746 JumpB
	return 0; // 0x747 Return
	
Label_1864:
	var_332_bool = var_329_string == var_2_object; // 0x748 Eq
	if(var_332_bool == 0) goto Label_1867; // 0x749 JumpB
	return 0; // 0x74a Return
	
Label_1867:
	var_333_string = ""; var_334_bool = 0; // 0x74b PushV
	var_333_string = var_329_string; // 0x74c Mov
	var_335_string = ""; // 0x74d PushS
	var_336_bool = var_329_string == var_335_string; // 0x74e Eq
	if(var_336_bool == 0) goto Label_1874; // 0x74f JumpB
	var_334_bool = 0; // 0x750 MovB
	goto Label_1875; // 0x751 Jump
	
Label_1875:
	func_3321(var_333_string, var_334_bool); // 0x753 NEW_2
	var_2_object = var_329_string; // 0x755 TMov
	return 0; // 0x756 Return
	
Label_1874:
	var_334_bool = 1; // 0x752 MovB
}


func_3907(var_126_int)
{
	var_127_int = 0; var_128_int = 0; // 0xf43 PushV
	var_129_string = "branch"; // 0xf44 PushS
	GetVariable(var_129_string, var_128_int); // 0xf45 Func
	var_130_int = 0; // 0xf47 PushI
	var_131_bool = var_128_int == var_130_int; // 0xf48 Eq
	if(var_131_bool == 0) goto Label_3917; // 0xf49 JumpB
	var_126_int = 1; // 0xf4a MovI
	return 2; // 0xf4b Return
	
Label_3917:
	var_132_int = 1; // 0xf4d PushI
	var_133_bool = var_128_int == var_132_int; // 0xf4e Eq
	if(var_133_bool == 0) goto Label_3922; // 0xf4f JumpB
	var_126_int = 2; // 0xf50 MovI
	return 2; // 0xf51 Return
	
Label_3922:
	var_126_int = 3; // 0xf52 MovI
	return 2; // 0xf53 Return
}


func_3653(var_598_bool)
{
	var_600_int = 0; var_601_string = ""; // 0xe46 PushV
	var_601_string = "ood10Mark1"; // 0xe47 MovS
	func_3374(var_600_int, var_601_string); // 0xe48 NEW_2
	var_602_int = 0; // 0xe4a PushI
	var_603_bool = var_600_int == var_602_int; // 0xe4b Eq
	if(var_603_bool == 0) goto Label_3663; // 0xe4c JumpB
	var_598_bool = 1; // 0xe4d MovB
	return 0; // 0xe4e Return
	
Label_3663:
	var_598_bool = 0; // 0xe4f MovB
	return 0; // 0xe50 Return
}


func_582(var_0_object, var_1_object, var_2_object, var_3_string, var_591_object, var_592_object)
{
	var_0_object = var_592_object; // 0x247 TMov
	var_1_object = var_591_object; // 0x248 TMov
	var_3_string = 0; // 0x249 TMovB
	var_597_int = 1; // 0x24a PushI
	if(var_597_int == 0) goto Label_650; // 0x24b JumpB
	var_598_bool = 0; var_599_object = Obj(); // 0x24c PushV
	var_599_object = var_1_object; // 0x24d MovT
	func_3653(var_599_object); // 0x24e NEW_2
	if(var_598_bool == 0) goto Label_623; // 0x250 JumpB
	var_604_object = Obj(); var_605_object = Obj(); // 0x251 PushV
	var_604_object = var_1_object; // 0x252 MovT
	var_605_object = var_0_object; // 0x253 MovT
	func_3513(); // 0x254 NEW_2
	var_608_object = Obj(); var_609_object = Obj(); // 0x256 PushV
	var_608_object = var_1_object; // 0x257 MovT
	var_609_object = var_0_object; // 0x258 MovT
	func_3519(); // 0x259 NEW_2
	var_612_string = ""; // 0x25b PushV
	var_612_string = "Rage"; // 0x25c MovS
	func_680(var_592_object, var_612_string); // 0x25d NEW_2
	var_620_int = 534127; // 0x25f PushI
	SetMessage(var_620_int); // 0x260 TObjFunc
	ClearReplies(); // 0x262 TObjFunc
	var_621_int = 536495; // 0x264 PushI
	var_622_int = 38296; // 0x265 PushI
	var_623_int = 38295; // 0x266 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x267 TObjFunc
	var_624_int = 536508; // 0x269 PushI
	var_625_int = 38310; // 0x26a PushI
	var_626_int = 38309; // 0x26b PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x26c TObjFunc
	goto Label_650; // 0x26e Jump
	
Label_650:
	var_627_bool = 0; // 0x28a PushV
	func_3485(var_627_bool); // 0x28b NEW_2
	if(var_627_bool == 0) goto Label_665; // 0x28d JumpB
	
Label_654:
	lshWaitForAnimEnd(); // 0x28e Func
	var_628_string = var_3_string; // 0x290 PushT
	if(var_628_string == 0) goto Label_659; // 0x291 JumpB
	goto Label_664; // 0x292 Jump
	
Label_664:
	goto Label_679; // 0x298 Jump
	
Label_679:
	return 0; // 0x2a7 Return
	
Label_659:
	var_629_string = ""; // 0x293 PushV
	var_629_string = var_2_object; // 0x294 MovT
	func_3305(var_629_string); // 0x295 NEW_2
	goto Label_654; // 0x297 Jump
	
Label_665:
	var_630_string = "all"; // 0x299 PushS
	var_631_string = "idle"; // 0x29a PushS
	PlayAnimation(var_630_string, var_631_string); // 0x29b Func
	
Label_669:
	WaitForAnimEnd(); // 0x29d Func
	var_632_string = var_3_string; // 0x29f PushT
	if(var_632_string == 0) goto Label_674; // 0x2a0 JumpB
	goto Label_679; // 0x2a1 Jump
	
Label_674:
	var_633_string = "all"; // 0x2a2 PushS
	var_634_string = "idle"; // 0x2a3 PushS
	PlayAnimation(var_633_string, var_634_string); // 0x2a4 Func
	goto Label_669; // 0x2a6 Jump
	
Label_623:
	var_635_string = ""; // 0x26f PushV
	var_635_string = "Neutral"; // 0x270 MovS
	func_680(var_592_object, var_635_string); // 0x271 NEW_2
	var_636_int = 534129; // 0x273 PushI
	SetMessage(var_636_int); // 0x274 TObjFunc
	ClearReplies(); // 0x276 TObjFunc
	var_637_bool = 0; var_638_object = Obj(); // 0x278 PushV
	var_638_object = var_1_object; // 0x279 MovT
	func_3665(var_638_object); // 0x27a NEW_2
	if(var_637_bool == 0) goto Label_642; // 0x27c JumpB
	var_643_int = 534146; // 0x27d PushI
	var_644_int = 38315; // 0x27e PushI
	var_645_int = 35733; // 0x27f PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x280 TObjFunc
	
Label_642:
	var_646_int = 534130; // 0x282 PushI
	var_647_int = -1; // 0x283 PushI
	var_648_int = 35717; // 0x284 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x285 TObjFunc
	goto Label_650; // 0x287 Jump
}


func_3402(var_126_object, var_127_int)
{
	var_129_int = 0; var_130_int = 0; // 0xd4a PushV
	var_131_object = Obj(); var_132_string = ""; var_133_int = 0; // 0xd4b PushV
	var_131_object = var_126_object; // 0xd4c Mov
	var_132_string = "money"; // 0xd4d MovS
	var_133_int = var_127_int; // 0xd4e Mov
	func_3051(var_132_string, var_133_int); // 0xd4f NEW_2
	var_137_int = 0; // 0xd51 PushI
	var_138_bool = var_127_int > var_137_int; // 0xd52 GT
	if(var_138_bool == 0) goto Label_3420; // 0xd53 JumpB
	var_139_string = "Money"; // 0xd54 PushS
	GetInvItemByName(var_130_int, var_139_string); // 0xd55 Func
	var_140_int = 0; var_141_int = 0; // 0xd57 PushV
	var_140_int = var_130_int; // 0xd58 Mov
	var_141_int = var_127_int; // 0xd59 Mov
	func_3390(var_140_int, var_141_int); // 0xd5a NEW_2
	
Label_3420:
	return 2; // 0xd5c Return
}


func_3150()
{
	var_285_bool = 0; var_286_bool = 0; // 0xc4e PushV
	CameraSwitchToNormal(); // 0xc4f Func
	var_287_bool = 0; // 0xc51 PushV
	func_3485(var_287_bool); // 0xc52 NEW_2
	if(var_287_bool == 0) goto Label_3158; // 0xc54 JumpB
	goto Label_3166; // 0xc55 Jump
	
Label_3166:
	return 2; // 0xc5e Return
	
Label_3158:
	var_288_string = "head"; // 0xc56 PushS
	HasAnimationTrack(var_286_bool, var_288_string); // 0xc57 Func
	var_289_bool = var_286_bool; // 0xc59 Push
	if(var_289_bool == 0) goto Label_3166; // 0xc5a JumpB
	var_290_string = "head"; // 0xc5b PushS
	UnlookAsync(var_290_string); // 0xc5c Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_524_object, var_525_object)
{
	var_0_object = var_525_object; // 0x52 TMov
	var_1_object = var_524_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_530_int = 1; // 0x55 PushI
	if(var_530_int == 0) goto Label_119; // 0x56 JumpB
	var_531_string = ""; // 0x57 PushV
	var_531_string = "Declaim"; // 0x58 MovS
	func_149(var_525_object, var_531_string); // 0x59 NEW_2
	var_539_int = 533341; // 0x5b PushI
	SetMessage(var_539_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_540_bool = 0; var_541_object = Obj(); // 0x60 PushV
	var_541_object = var_1_object; // 0x61 MovT
	func_3641(var_541_object); // 0x62 NEW_2
	if(var_540_bool == 0) goto Label_106; // 0x64 JumpB
	var_546_int = 533342; // 0x65 PushI
	var_547_int = 34847; // 0x66 PushI
	var_548_int = 34846; // 0x67 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x68 TObjFunc
	
Label_106:
	var_549_int = 533345; // 0x6a PushI
	var_550_int = -1; // 0x6b PushI
	var_551_int = 34849; // 0x6c PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x6d TObjFunc
	var_552_int = 536042; // 0x6f PushI
	var_553_int = -1; // 0x70 PushI
	var_554_int = 37783; // 0x71 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_555_bool = 0; // 0x77 PushV
	func_3485(var_555_bool); // 0x78 NEW_2
	if(var_555_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_556_string = var_3_string; // 0x7d PushT
	if(var_556_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_557_string = ""; // 0x80 PushV
	var_557_string = var_2_object; // 0x81 MovT
	func_3305(var_557_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_558_string = "all"; // 0x86 PushS
	var_559_string = "idle"; // 0x87 PushS
	PlayAnimation(var_558_string, var_559_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_560_string = var_3_string; // 0x8c PushT
	if(var_560_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_561_string = "all"; // 0x8f PushS
	var_562_string = "idle"; // 0x90 PushS
	PlayAnimation(var_561_string, var_562_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_3665(var_637_bool)
{
	var_639_int = 0; var_640_string = ""; // 0xe52 PushV
	var_640_string = "d10q03"; // 0xe53 MovS
	func_3374(var_639_int, var_640_string); // 0xe54 NEW_2
	var_641_int = 2; // 0xe56 PushI
	var_642_bool = var_639_int == var_641_int; // 0xe57 Eq
	if(var_642_bool == 0) goto Label_3675; // 0xe58 JumpB
	var_637_bool = 1; // 0xe59 MovB
	return 0; // 0xe5a Return
	
Label_3675:
	var_637_bool = 0; // 0xe5b MovB
	return 0; // 0xe5c Return
}


func_2132(var_2_object, var_395_string)
{
	var_396_bool = 0; // 0x855 PushV
	func_3485(var_396_bool); // 0x856 NEW_2
	var_397_bool = var_396_bool == 0; // 0x858 Not
	if(var_397_bool == 0) goto Label_2139; // 0x859 JumpB
	return 0; // 0x85a Return
	
Label_2139:
	var_398_bool = var_395_string == var_2_object; // 0x85b Eq
	if(var_398_bool == 0) goto Label_2142; // 0x85c JumpB
	return 0; // 0x85d Return
	
Label_2142:
	var_399_string = ""; var_400_bool = 0; // 0x85e PushV
	var_399_string = var_395_string; // 0x85f Mov
	var_401_string = ""; // 0x860 PushS
	var_402_bool = var_395_string == var_401_string; // 0x861 Eq
	if(var_402_bool == 0) goto Label_2149; // 0x862 JumpB
	var_400_bool = 0; // 0x863 MovB
	goto Label_2150; // 0x864 Jump
	
Label_2150:
	func_3321(var_399_string, var_400_bool); // 0x866 NEW_2
	var_2_object = var_395_string; // 0x868 TMov
	return 0; // 0x869 Return
	
Label_2149:
	var_400_bool = 1; // 0x865 MovB
}


func_1108(var_0_object, var_653_int, var_654_object)
{
	var_656_object = Obj(); var_657_bool = 0; var_658_int = 0; var_659_bool = 0; var_660_object = Obj(); var_661_bool = 0; var_662_int = 0; var_663_bool = 0; // 0x454 PushV
	var_0_object = var_654_object; // 0x455 TMov
	var_664_bool = 0; var_665_object = Obj(); var_666_float = 0; // 0x456 PushV
	var_665_object = var_654_object; // 0x457 Mov
	var_666_float = 70.0; // 0x458 MovF
	func_3082(var_665_object, var_666_float); // 0x459 NEW_2
	var_667_bool = var_664_bool == 0; // 0x45b Not
	if(var_667_bool == 0) goto Label_1119; // 0x45c JumpB
	var_653_int = -2; // 0x45d MovI
	return 8; // 0x45e Return
	
Label_1119:
	CreateDialog(var_660_object); // 0x45f Func
	var_668_int = 0; // 0x461 PushV
	func_3479(var_668_int); // 0x462 NEW_2
	SetNPCName(var_668_int); // 0x464 ObjFunc
	var_669_int = 0; // 0x466 PushV
	func_3477(var_669_int); // 0x467 NEW_2
	SetNPCDescription(var_669_int); // 0x469 ObjFunc
	var_670_string = ""; // 0x46b PushV
	func_3481(var_670_string); // 0x46c NEW_2
	SetPhoto(var_670_string); // 0x46e ObjFunc
	var_671_string = ""; // 0x470 PushV
	func_3483(var_671_string); // 0x471 NEW_2
	SetPhoto2(var_671_string); // 0x473 ObjFunc
	var_672_int = 0; // 0x475 PushV
	func_3907(var_672_int); // 0x476 NEW_2
	SetPlayerName(var_672_int); // 0x478 ObjFunc
	var_662_int = -1; // 0x47a MovI
	IsOverrideActive(var_661_bool); // 0x47b Func
	var_673_bool = var_661_bool; // 0x47d Push
	if(var_673_bool == 0) goto Label_1153; // 0x47e JumpB
	var_653_int = -2; // 0x47f MovI
	return 8; // 0x480 Return
	
Label_1153:
	DoDialog(var_660_object); // 0x481 Func
	var_674_bool = 0; var_675_object = Obj(); // 0x483 PushV
	var_676_object = Obj(); // 0x484 PushV
	func_3358(var_676_object); // 0x485 NEW_2
	var_675_object = var_676_object; // 0x486 Mov
	func_3167(var_674_bool, var_675_object); // 0x488 NEW_2
	var_677_object = Obj(); var_678_object = Obj(); // 0x48a PushV
	var_677_object = var_654_object; // 0x48b Mov
	var_678_object = var_660_object; // 0x48c Mov
	TaskCall(5); // 0x48d TaskCall
	func_1189(var_679_object, var_680_object, var_681_string, var_682_bool, var_677_object, var_678_object); // 0x48e NEW_2
	TaskReturn(); // 0x48f TaskReturn
	IsDialogEnd(var_663_bool); // 0x491 ObjFunc
	
Label_1171:
	var_710_bool = var_663_bool == 0; // 0x493 Not
	if(var_710_bool == 0) goto Label_1178; // 0x494 JumpB
	sync(); // 0x495 Func
	IsDialogEnd(var_663_bool); // 0x497 ObjFunc
	goto Label_1171; // 0x499 Jump
	
Label_1178:
	var_711_object = Obj(); // 0x49a PushV
	var_711_object = var_654_object; // 0x49b Mov
	func_3150(); // 0x49c NEW_2
	StopDialog(var_660_object); // 0x49e Func
	GetReturnValue(var_662_int); // 0x4a0 ObjFunc
	var_653_int = var_662_int; // 0x4a2 Mov
	return 8; // 0x4a3 Return
}


func_3924(var_59_object)
{
	var_60_int = 0; var_61_int = 0; // 0xf54 PushV
	var_62_string = "mt_mark"; // 0xf55 PushS
	GetVariable(var_62_string, var_61_int); // 0xf56 Func
	var_63_bool = var_61_int == 0; // 0xf58 Not
	if(var_63_bool == 0) goto Label_3940; // 0xf59 JumpB
	var_64_int = 0; var_65_object = Obj(); // 0xf5a PushV
	var_65_object = var_59_object; // 0xf5b Mov
	TaskCall(6); // 0xf5c TaskCall
	func_1408(var_66_object, var_64_int, var_65_object); // 0xf5d NEW_2
	TaskReturn(); // 0xf5e TaskReturn
	var_291_string = "mt_mark"; // 0xf60 PushS
	var_292_int = 1; // 0xf61 PushI
	SetVariable(var_291_string, var_292_int); // 0xf62 Func
	
Label_3940:
	var_293_bool = 0; var_294_int = 0; // 0xf64 PushV
	var_294_int = 1; // 0xf65 MovI
	func_3447(var_293_bool, var_294_int); // 0xf66 NEW_2
	if(var_293_bool == 0) goto Label_3946; // 0xf68 JumpB
	return 2; // 0xf69 Return
	
Label_3946:
	var_296_bool = 0; var_297_int = 0; // 0xf6a PushV
	var_297_int = 2; // 0xf6b MovI
	func_3447(var_296_bool, var_297_int); // 0xf6c NEW_2
	if(var_296_bool == 0) goto Label_3958; // 0xf6e JumpB
	var_298_int = 0; var_299_object = Obj(); // 0xf6f PushV
	var_299_object = var_59_object; // 0xf70 Mov
	TaskCall(8); // 0xf71 TaskCall
	func_1713(var_300_object, var_298_int, var_299_object); // 0xf72 NEW_2
	TaskReturn(); // 0xf73 TaskReturn
	return 2; // 0xf75 Return
	
Label_3958:
	var_362_bool = 0; var_363_int = 0; // 0xf76 PushV
	var_363_int = 4; // 0xf77 MovI
	func_3447(var_362_bool, var_363_int); // 0xf78 NEW_2
	if(var_362_bool == 0) goto Label_3970; // 0xf7a JumpB
	var_364_int = 0; var_365_object = Obj(); // 0xf7b PushV
	var_365_object = var_59_object; // 0xf7c Mov
	TaskCall(10); // 0xf7d TaskCall
	func_1998(var_366_object, var_364_int, var_365_object); // 0xf7e NEW_2
	TaskReturn(); // 0xf7f TaskReturn
	return 2; // 0xf81 Return
	
Label_3970:
	var_417_bool = 0; var_418_int = 0; // 0xf82 PushV
	var_418_int = 7; // 0xf83 MovI
	func_3447(var_417_bool, var_418_int); // 0xf84 NEW_2
	if(var_417_bool == 0) goto Label_3982; // 0xf86 JumpB
	var_419_int = 0; var_420_object = Obj(); // 0xf87 PushV
	var_420_object = var_59_object; // 0xf88 Mov
	TaskCall(12); // 0xf89 TaskCall
	func_2191(var_421_object, var_419_int, var_420_object); // 0xf8a NEW_2
	TaskReturn(); // 0xf8b TaskReturn
	return 2; // 0xf8d Return
	
Label_3982:
	var_498_bool = 0; var_499_int = 0; // 0xf8e PushV
	var_499_int = 8; // 0xf8f MovI
	func_3447(var_498_bool, var_499_int); // 0xf90 NEW_2
	if(var_498_bool == 0) goto Label_3994; // 0xf92 JumpB
	var_500_int = 0; var_501_object = Obj(); // 0xf93 PushV
	var_501_object = var_59_object; // 0xf94 Mov
	TaskCall(0); // 0xf95 TaskCall
	func_0(var_502_object, var_500_int, var_501_object); // 0xf96 NEW_2
	TaskReturn(); // 0xf97 TaskReturn
	return 2; // 0xf99 Return
	
Label_3994:
	var_565_bool = 0; var_566_int = 0; // 0xf9a PushV
	var_566_int = 10; // 0xf9b MovI
	func_3447(var_565_bool, var_566_int); // 0xf9c NEW_2
	if(var_565_bool == 0) goto Label_4006; // 0xf9e JumpB
	var_567_int = 0; var_568_object = Obj(); // 0xf9f PushV
	var_568_object = var_59_object; // 0xfa0 Mov
	TaskCall(2); // 0xfa1 TaskCall
	func_501(var_569_object, var_567_int, var_568_object); // 0xfa2 NEW_2
	TaskReturn(); // 0xfa3 TaskReturn
	return 2; // 0xfa5 Return
	
Label_4006:
	var_651_bool = 0; var_652_int = 0; // 0xfa6 PushV
	var_652_int = 12; // 0xfa7 MovI
	func_3447(var_651_bool, var_652_int); // 0xfa8 NEW_2
	if(var_651_bool == 0) goto Label_4018; // 0xfaa JumpB
	var_653_int = 0; var_654_object = Obj(); // 0xfab PushV
	var_654_object = var_59_object; // 0xfac Mov
	TaskCall(4); // 0xfad TaskCall
	func_1108(var_655_object, var_653_int, var_654_object); // 0xfae NEW_2
	TaskReturn(); // 0xfaf TaskReturn
	return 2; // 0xfb1 Return
	
Label_4018:
	var_712_int = 0; var_713_object = Obj(); // 0xfb2 PushV
	var_713_object = var_59_object; // 0xfb3 Mov
	TaskCall(14); // 0xfb4 TaskCall
	func_2584(var_714_object, var_712_int, var_713_object); // 0xfb5 NEW_2
	TaskReturn(); // 0xfb6 TaskReturn
	return 2; // 0xfb8 Return
}


func_3580(var_121_object)
{
	var_123_int = 0; var_124_int = 0; // 0xdfc PushV
	var_125_int = 15; // 0xdfd PushI
	irand(var_124_int, var_125_int); // 0xdfe Func
	var_126_object = Obj(); var_127_int = 0; // 0xe00 PushV
	var_126_object = var_121_object; // 0xe01 Mov
	var_128_int = 5; // 0xe02 PushI
	var_127_int = var_124_int + var_128_int; // 0xe03 Add2
	func_3402(var_126_object, var_127_int); // 0xe04 NEW_2
	return 2; // 0xe06 Return
}


func_3677(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0xe5e PushV
	var_341_string = "ood2Mark1"; // 0xe5f MovS
	func_3374(var_340_int, var_341_string); // 0xe60 NEW_2
	var_344_int = 0; // 0xe62 PushI
	var_345_bool = var_340_int == var_344_int; // 0xe63 Eq
	if(var_345_bool == 0) goto Label_3687; // 0xe64 JumpB
	var_338_bool = 1; // 0xe65 MovB
	return 0; // 0xe66 Return
	
Label_3687:
	var_338_bool = 0; // 0xe67 MovB
	return 0; // 0xe68 Return
}


func_3421(var_111_bool, var_112_string, var_113_string)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0xd5d PushV
	FindActor(var_115_object, var_112_string); // 0xd5e Func
	var_116_bool = var_115_object == 0; // 0xd60 NullEq
	if(var_116_bool == 0) goto Label_3428; // 0xd61 JumpB
	var_111_bool = 0; // 0xd62 MovB
	return 2; // 0xd63 Return
	
Label_3428:
	Trigger(var_115_object, var_113_string); // 0xd64 Func
	var_111_bool = 1; // 0xd66 MovB
	return 2; // 0xd67 Return
}


func_3167(var_135_bool, var_136_object)
{
	var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0xc5f PushV
	var_144_string = "voice_common"; // 0xc60 PushS
	GetVariable(var_144_string, var_142_int); // 0xc61 Func
	var_145_int = var_142_int; // 0xc63 Push
	if(var_145_int == 0) goto Label_3205; // 0xc64 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0xc65 PushV
	var_147_object = var_136_object; // 0xc66 Mov
	func_3225(var_147_object); // 0xc67 NEW_2
	var_176_bool = var_146_bool == 0; // 0xc69 Not
	if(var_176_bool == 0) goto Label_3187; // 0xc6a JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0xc6b PushV
	var_178_object = var_136_object; // 0xc6c Mov
	func_3262(var_178_object); // 0xc6d NEW_2
	var_212_bool = var_177_bool == 0; // 0xc6f Not
	if(var_212_bool == 0) goto Label_3187; // 0xc70 JumpB
	var_135_bool = 0; // 0xc71 MovB
	return 4; // 0xc72 Return
	
Label_3187:
	var_213_int = 2; // 0xc73 PushI
	irand(var_143_int, var_213_int); // 0xc74 Func
	var_214_int = var_143_int; // 0xc76 Push
	if(var_214_int == 0) goto Label_3200; // 0xc77 JumpB
	var_215_string = "voice_common"; // 0xc78 PushS
	var_216_int = 1; // 0xc79 PushI
	var_217_int = var_142_int + var_216_int; // 0xc7a Add
	var_218_int = 3; // 0xc7b PushI
	var_219_int = var_217_int / var_218_int; // 0xc7c Mod
	SetVariable(var_215_string, var_219_int); // 0xc7d Func
	goto Label_3204; // 0xc7f Jump
	
Label_3204:
	goto Label_3223; // 0xc84 Jump
	
Label_3223:
	var_135_bool = 1; // 0xc97 MovB
	return 4; // 0xc98 Return
	
Label_3200:
	var_220_string = "voice_common"; // 0xc80 PushS
	var_221_int = 0; // 0xc81 PushI
	SetVariable(var_220_string, var_221_int); // 0xc82 Func
	
Label_3205:
	var_222_bool = 0; var_223_object = Obj(); // 0xc85 PushV
	var_223_object = var_136_object; // 0xc86 Mov
	func_3262(var_223_object); // 0xc87 NEW_2
	var_224_bool = var_222_bool == 0; // 0xc89 Not
	if(var_224_bool == 0) goto Label_3219; // 0xc8a JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0xc8b PushV
	var_226_object = var_136_object; // 0xc8c Mov
	func_3225(var_226_object); // 0xc8d NEW_2
	var_227_bool = var_225_bool == 0; // 0xc8f Not
	if(var_227_bool == 0) goto Label_3219; // 0xc90 JumpB
	var_135_bool = 0; // 0xc91 MovB
	return 4; // 0xc92 Return
	
Label_3219:
	var_228_string = "voice_common"; // 0xc93 PushS
	var_229_int = 1; // 0xc94 PushI
	SetVariable(var_228_string, var_229_int); // 0xc95 Func
}


func_3689(var_476_bool)
{
	var_478_int = 0; var_479_string = ""; // 0xe6a PushV
	var_479_string = "d7BurahLetter"; // 0xe6b MovS
	func_3374(var_478_int, var_479_string); // 0xe6c NEW_2
	var_480_int = 0; // 0xe6e PushI
	var_481_bool = var_478_int != var_480_int; // 0xe6f Neq
	if(var_481_bool == 0) goto Label_3699; // 0xe70 JumpB
	var_476_bool = 1; // 0xe71 MovB
	return 0; // 0xe72 Return
	
Label_3699:
	var_476_bool = 0; // 0xe73 MovB
	return 0; // 0xe74 Return
}


func_2665(var_0_object, var_1_object, var_2_object, var_3_string, var_736_object, var_737_object)
{
	var_0_object = var_737_object; // 0xa6a TMov
	var_1_object = var_736_object; // 0xa6b TMov
	var_3_string = 0; // 0xa6c TMovB
	var_742_int = 1; // 0xa6d PushI
	if(var_742_int == 0) goto Label_2693; // 0xa6e JumpB
	var_743_string = ""; // 0xa6f PushV
	var_743_string = "Neutral"; // 0xa70 MovS
	func_2723(var_737_object, var_743_string); // 0xa71 NEW_2
	var_751_int = 540542; // 0xa73 PushI
	SetMessage(var_751_int); // 0xa74 TObjFunc
	ClearReplies(); // 0xa76 TObjFunc
	var_752_int = 540543; // 0xa78 PushI
	var_753_int = -1; // 0xa79 PushI
	var_754_int = 42552; // 0xa7a PushI
	AddReply(var_752_int, var_753_int, var_754_int); // 0xa7b TObjFunc
	var_755_int = 540796; // 0xa7d PushI
	var_756_int = -1; // 0xa7e PushI
	var_757_int = 42845; // 0xa7f PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0xa80 TObjFunc
	goto Label_2693; // 0xa82 Jump
	
Label_2693:
	var_758_bool = 0; // 0xa85 PushV
	func_3485(var_758_bool); // 0xa86 NEW_2
	if(var_758_bool == 0) goto Label_2708; // 0xa88 JumpB
	
Label_2697:
	lshWaitForAnimEnd(); // 0xa89 Func
	var_759_string = var_3_string; // 0xa8b PushT
	if(var_759_string == 0) goto Label_2702; // 0xa8c JumpB
	goto Label_2707; // 0xa8d Jump
	
Label_2707:
	goto Label_2722; // 0xa93 Jump
	
Label_2722:
	return 0; // 0xaa2 Return
	
Label_2702:
	var_760_string = ""; // 0xa8e PushV
	var_760_string = var_2_object; // 0xa8f MovT
	func_3305(var_760_string); // 0xa90 NEW_2
	goto Label_2697; // 0xa92 Jump
	
Label_2708:
	var_761_string = "all"; // 0xa94 PushS
	var_762_string = "idle"; // 0xa95 PushS
	PlayAnimation(var_761_string, var_762_string); // 0xa96 Func
	
Label_2712:
	WaitForAnimEnd(); // 0xa98 Func
	var_763_string = var_3_string; // 0xa9a PushT
	if(var_763_string == 0) goto Label_2717; // 0xa9b JumpB
	goto Label_2722; // 0xa9c Jump
	
Label_2717:
	var_764_string = "all"; // 0xa9d PushS
	var_765_string = "idle"; // 0xa9e PushS
	PlayAnimation(var_764_string, var_765_string); // 0xa9f Func
	goto Label_2712; // 0xaa1 Jump
}


func_3433(var_64_float)
{
	var_65_float = 0; var_66_float = 0; // 0xd69 PushV
	GetGameTime(var_66_float); // 0xd6a Func
	var_64_float = var_66_float; // 0xd6c Mov
	return 2; // 0xd6d Return
}


func_3438(var_190_int)
{
	var_191_float = 0; var_192_float = 0; // 0xd6e PushV
	GetGameTime(var_192_float); // 0xd6f Func
	var_193_int = 1; // 0xd71 PushI
	var_194_int = 0; // 0xd72 PushV
	var_195_int = 24; // 0xd73 PushI
	var_194_int = var_192_float / var_192_float; // 0xd74 Div2
	var_190_int = var_193_int + var_194_int; // 0xd75 Add2
	return 2; // 0xd76 Return
}


func_3701(var_467_bool)
{
	var_469_int = 0; var_470_string = ""; // 0xe76 PushV
	var_470_string = "d7q01"; // 0xe77 MovS
	func_3374(var_469_int, var_470_string); // 0xe78 NEW_2
	var_471_int = 2; // 0xe7a PushI
	var_472_bool = var_469_int == var_471_int; // 0xe7b Eq
	if(var_472_bool == 0) goto Label_3711; // 0xe7c JumpB
	var_467_bool = 1; // 0xe7d MovB
	return 0; // 0xe7e Return
	
Label_3711:
	var_467_bool = 0; // 0xe7f MovB
	return 0; // 0xe80 Return
}


func_3447(var_293_bool, var_294_int)
{
	var_295_int = 0; // 0xd78 PushV
	func_3438(var_295_int); // 0xd79 NEW_2
	var_293_bool = var_295_int == var_294_int; // 0xd7b Eq2
	return 0; // 0xd7c Return
}


func_3453(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = ""; // 0xd7d PushV
	var_68_string = "idle"; // 0xd7e MovS
	var_69_int = var_66_int; // 0xd7f Push
	if(var_69_int == 0) goto Label_3458; // 0xd80 JumpB
	var_68_string = var_68_string + var_66_int; // 0xd81 Add2
	
Label_3458:
	var_65_string = var_68_string; // 0xd82 Mov
	return 2; // 0xd83 Return
}


func_1408(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x580 PushV
	var_0_object = var_65_object; // 0x581 TMov
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; // 0x582 PushV
	var_76_object = var_65_object; // 0x583 Mov
	var_77_float = 70.0; // 0x584 MovF
	func_3082(var_76_object, var_77_float); // 0x585 NEW_2
	var_121_bool = var_75_bool == 0; // 0x587 Not
	if(var_121_bool == 0) goto Label_1419; // 0x588 JumpB
	var_64_int = -2; // 0x589 MovI
	return 8; // 0x58a Return
	
Label_1419:
	CreateDialog(var_71_object); // 0x58b Func
	var_122_int = 0; // 0x58d PushV
	func_3479(var_122_int); // 0x58e NEW_2
	SetNPCName(var_122_int); // 0x590 ObjFunc
	var_123_int = 0; // 0x592 PushV
	func_3477(var_123_int); // 0x593 NEW_2
	SetNPCDescription(var_123_int); // 0x595 ObjFunc
	var_124_string = ""; // 0x597 PushV
	func_3481(var_124_string); // 0x598 NEW_2
	SetPhoto(var_124_string); // 0x59a ObjFunc
	var_125_string = ""; // 0x59c PushV
	func_3483(var_125_string); // 0x59d NEW_2
	SetPhoto2(var_125_string); // 0x59f ObjFunc
	var_126_int = 0; // 0x5a1 PushV
	func_3907(var_126_int); // 0x5a2 NEW_2
	SetPlayerName(var_126_int); // 0x5a4 ObjFunc
	var_73_int = -1; // 0x5a6 MovI
	IsOverrideActive(var_72_bool); // 0x5a7 Func
	var_134_bool = var_72_bool; // 0x5a9 Push
	if(var_134_bool == 0) goto Label_1453; // 0x5aa JumpB
	var_64_int = -2; // 0x5ab MovI
	return 8; // 0x5ac Return
	
Label_1453:
	DoDialog(var_71_object); // 0x5ad Func
	var_135_bool = 0; var_136_object = Obj(); // 0x5af PushV
	var_137_object = Obj(); // 0x5b0 PushV
	func_3358(var_137_object); // 0x5b1 NEW_2
	var_136_object = var_137_object; // 0x5b2 Mov
	func_3167(var_135_bool, var_136_object); // 0x5b4 NEW_2
	var_230_object = Obj(); var_231_object = Obj(); // 0x5b6 PushV
	var_230_object = var_65_object; // 0x5b7 Mov
	var_231_object = var_71_object; // 0x5b8 Mov
	TaskCall(7); // 0x5b9 TaskCall
	func_1489(var_232_object, var_233_object, var_234_string, var_235_bool, var_230_object, var_231_object); // 0x5ba NEW_2
	TaskReturn(); // 0x5bb TaskReturn
	IsDialogEnd(var_74_bool); // 0x5bd ObjFunc
	
Label_1471:
	var_283_bool = var_74_bool == 0; // 0x5bf Not
	if(var_283_bool == 0) goto Label_1478; // 0x5c0 JumpB
	sync(); // 0x5c1 Func
	IsDialogEnd(var_74_bool); // 0x5c3 ObjFunc
	goto Label_1471; // 0x5c5 Jump
	
Label_1478:
	var_284_object = Obj(); // 0x5c6 PushV
	var_284_object = var_65_object; // 0x5c7 Mov
	func_3150(); // 0x5c8 NEW_2
	StopDialog(var_71_object); // 0x5ca Func
	GetReturnValue(var_73_int); // 0x5cc ObjFunc
	var_64_int = var_73_int; // 0x5ce Mov
	return 8; // 0x5cf Return
}


func_3713(var_461_bool)
{
	var_463_int = 0; var_464_string = ""; // 0xe82 PushV
	var_464_string = "d7q02"; // 0xe83 MovS
	func_3374(var_463_int, var_464_string); // 0xe84 NEW_2
	var_465_int = 0; // 0xe86 PushI
	var_466_bool = var_463_int == var_465_int; // 0xe87 Eq
	if(var_466_bool == 0) goto Label_3723; // 0xe88 JumpB
	var_461_bool = 1; // 0xe89 MovB
	return 0; // 0xe8a Return
	
Label_3723:
	var_461_bool = 0; // 0xe8b MovB
	return 0; // 0xe8c Return
}


func_3460(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0xd84 PushV
	var_62_int = 0; // 0xd85 MovI
	
Label_3462:
	var_64_string = "all"; // 0xd86 PushS
	var_65_string = ""; var_66_int = 0; // 0xd87 PushV
	var_66_int = var_62_int; // 0xd88 Mov
	func_3453(var_65_string, var_66_int); // 0xd89 NEW_2
	HasAnimation(var_63_bool, var_64_string, var_65_string); // 0xd8b Func
	var_70_bool = var_63_bool == 0; // 0xd8d Not
	if(var_70_bool == 0) goto Label_3472; // 0xd8e JumpB
	goto Label_3475; // 0xd8f Jump
	
Label_3475:
	var_59_int = var_62_int; // 0xd93 Mov
	return 4; // 0xd94 Return
	
Label_3472:
	var_71_int = 1; // 0xd90 PushI
	var_62_int = var_62_int + var_71_int; // 0xd91 Add2
	goto Label_3462; // 0xd92 Jump
}


func_3725()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0xe8d PushV
	var_53_int = 672; // 0xe8e PushI
	var_54_int = 2; // 0xe8f PushI
	var_55_int = 534157; // 0xe90 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0xe91 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0xe93 PushV
	var_57_object = var_52_object; // 0xe94 Mov
	var_58_int = -1; // 0xe95 MovI
	func_3829(var_56_bool, var_57_object, var_58_int); // 0xe96 NEW_2
	return 2; // 0xe98 Return
}


func_2191(var_0_object, var_419_int, var_420_object)
{
	var_422_object = Obj(); var_423_bool = 0; var_424_int = 0; var_425_bool = 0; var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0; // 0x88f PushV
	var_0_object = var_420_object; // 0x890 TMov
	var_430_bool = 0; var_431_object = Obj(); var_432_float = 0; // 0x891 PushV
	var_431_object = var_420_object; // 0x892 Mov
	var_432_float = 70.0; // 0x893 MovF
	func_3082(var_431_object, var_432_float); // 0x894 NEW_2
	var_433_bool = var_430_bool == 0; // 0x896 Not
	if(var_433_bool == 0) goto Label_2202; // 0x897 JumpB
	var_419_int = -2; // 0x898 MovI
	return 8; // 0x899 Return
	
Label_2202:
	CreateDialog(var_426_object); // 0x89a Func
	var_434_int = 0; // 0x89c PushV
	func_3479(var_434_int); // 0x89d NEW_2
	SetNPCName(var_434_int); // 0x89f ObjFunc
	var_435_int = 0; // 0x8a1 PushV
	func_3477(var_435_int); // 0x8a2 NEW_2
	SetNPCDescription(var_435_int); // 0x8a4 ObjFunc
	var_436_string = ""; // 0x8a6 PushV
	func_3481(var_436_string); // 0x8a7 NEW_2
	SetPhoto(var_436_string); // 0x8a9 ObjFunc
	var_437_string = ""; // 0x8ab PushV
	func_3483(var_437_string); // 0x8ac NEW_2
	SetPhoto2(var_437_string); // 0x8ae ObjFunc
	var_438_int = 0; // 0x8b0 PushV
	func_3907(var_438_int); // 0x8b1 NEW_2
	SetPlayerName(var_438_int); // 0x8b3 ObjFunc
	var_428_int = -1; // 0x8b5 MovI
	IsOverrideActive(var_427_bool); // 0x8b6 Func
	var_439_bool = var_427_bool; // 0x8b8 Push
	if(var_439_bool == 0) goto Label_2236; // 0x8b9 JumpB
	var_419_int = -2; // 0x8ba MovI
	return 8; // 0x8bb Return
	
Label_2236:
	DoDialog(var_426_object); // 0x8bc Func
	var_440_bool = 0; var_441_object = Obj(); // 0x8be PushV
	var_442_object = Obj(); // 0x8bf PushV
	func_3358(var_442_object); // 0x8c0 NEW_2
	var_441_object = var_442_object; // 0x8c1 Mov
	func_3167(var_440_bool, var_441_object); // 0x8c3 NEW_2
	var_443_object = Obj(); var_444_object = Obj(); // 0x8c5 PushV
	var_443_object = var_420_object; // 0x8c6 Mov
	var_444_object = var_426_object; // 0x8c7 Mov
	TaskCall(13); // 0x8c8 TaskCall
	func_2272(var_445_object, var_446_object, var_447_string, var_448_bool, var_443_object, var_444_object); // 0x8c9 NEW_2
	TaskReturn(); // 0x8ca TaskReturn
	IsDialogEnd(var_429_bool); // 0x8cc ObjFunc
	
Label_2254:
	var_496_bool = var_429_bool == 0; // 0x8ce Not
	if(var_496_bool == 0) goto Label_2261; // 0x8cf JumpB
	sync(); // 0x8d0 Func
	IsDialogEnd(var_429_bool); // 0x8d2 ObjFunc
	goto Label_2254; // 0x8d4 Jump
	
Label_2261:
	var_497_object = Obj(); // 0x8d5 PushV
	var_497_object = var_420_object; // 0x8d6 Mov
	func_3150(); // 0x8d7 NEW_2
	StopDialog(var_426_object); // 0x8d9 Func
	GetReturnValue(var_428_int); // 0x8db ObjFunc
	var_419_int = var_428_int; // 0x8dd Mov
	return 8; // 0x8de Return
}


func_149(var_2_object, var_531_string)
{
	var_532_bool = 0; // 0x96 PushV
	func_3485(var_532_bool); // 0x97 NEW_2
	var_533_bool = var_532_bool == 0; // 0x99 Not
	if(var_533_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_534_bool = var_531_string == var_2_object; // 0x9c Eq
	if(var_534_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_535_string = ""; var_536_bool = 0; // 0x9f PushV
	var_535_string = var_531_string; // 0xa0 Mov
	var_537_string = ""; // 0xa1 PushS
	var_538_bool = var_531_string == var_537_string; // 0xa2 Eq
	if(var_538_bool == 0) goto Label_166; // 0xa3 JumpB
	var_536_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_3321(var_535_string, var_536_bool); // 0xa7 NEW_2
	var_2_object = var_531_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_536_bool = 1; // 0xa6 MovB
}


func_3477(var_123_int)
{
	var_123_int = 515544; // 0xd95 MovI
	return 0; // 0xd96 Return
}


func_3479(var_122_int)
{
	var_122_int = 502869; // 0xd97 MovI
	return 0; // 0xd98 Return
}


func_2967()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; // 0xb97 PushV
	WaitForAnimEnd(); // 0xb98 Func
	var_57_bool = 0; // 0xb9a PushV
	func_3077(var_57_bool); // 0xb9b NEW_2
	var_58_bool = var_57_bool == 0; // 0xb9d Not
	if(var_58_bool == 0) goto Label_2976; // 0xb9e JumpB
	return 12; // 0xb9f Return
	
Label_2976:
	var_59_int = 0; // 0xba0 PushV
	func_3460(var_59_int); // 0xba1 NEW_2
	var_51_int = var_59_int; // 0xba2 Mov
	var_52_int = 0; // 0xba4 MovI
	
Label_2981:
	var_72_bool = 0; // 0xba5 PushV
	var_72_bool = 0; // 0xba6 MovB
	var_73_int = 5; // 0xba7 PushI
	var_74_bool = var_52_int < var_73_int; // 0xba8 LT
	if(var_74_bool == 0) goto Label_2991; // 0xba9 JumpB
	var_75_bool = 0; // 0xbaa PushV
	func_3077(var_75_bool); // 0xbab NEW_2
	if(var_75_bool == 0) goto Label_2991; // 0xbad JumpB
	var_72_bool = 1; // 0xbae MovB
	
Label_2991:
	if(var_72_bool == 0) goto Label_3033; // 0xbaf JumpB
	var_76_bool = var_51_int == 0; // 0xbb0 Not
	if(var_76_bool == 0) goto Label_3001; // 0xbb1 JumpB
	var_77_int = 3; // 0xbb2 PushI
	Sleep(var_77_int, var_53_bool); // 0xbb3 Func
	var_78_bool = var_53_bool == 0; // 0xbb5 Not
	if(var_78_bool == 0) goto Label_3000; // 0xbb6 JumpB
	goto Label_3033; // 0xbb7 Jump
	
Label_3033:
	ResetAAS(); // 0xbd9 Func
	return 12; // 0xbdb Return
	
Label_3000:
	goto Label_3022; // 0xbb8 Jump
	
Label_3022:
	var_79_bool = 0; // 0xbce PushV
	func_3036(var_79_bool); // 0xbcf NEW_2
	var_80_bool = var_79_bool == 0; // 0xbd1 Not
	if(var_80_bool == 0) goto Label_3028; // 0xbd2 JumpB
	goto Label_3033; // 0xbd3 Jump
	
Label_3028:
	ResetAAS(); // 0xbd4 Func
	var_81_int = 1; // 0xbd6 PushI
	var_52_int = var_52_int + var_81_int; // 0xbd7 Add2
	goto Label_2981; // 0xbd8 Jump
	
Label_3001:
	irand(var_54_int, var_51_int); // 0xbb9 Func
	var_82_int = 5; // 0xbbb PushI
	irand(var_55_int, var_82_int); // 0xbbc Func
	var_83_int = 0; // 0xbbe PushI
	var_84_bool = var_55_int != var_83_int; // 0xbbf Neq
	if(var_84_bool == 0) goto Label_3010; // 0xbc0 JumpB
	var_54_int = 0; // 0xbc1 MovI
	
Label_3010:
	var_85_string = "all"; // 0xbc2 PushS
	var_86_string = ""; var_87_int = 0; // 0xbc3 PushV
	var_87_int = var_54_int; // 0xbc4 Mov
	func_3453(var_86_string, var_87_int); // 0xbc5 NEW_2
	PlayAnimation(var_85_string, var_86_string); // 0xbc7 Func
	WaitForAnimEnd(var_56_bool); // 0xbc9 Func
	var_88_bool = var_56_bool == 0; // 0xbcb Not
	if(var_88_bool == 0) goto Label_3022; // 0xbcc JumpB
	goto Label_3033; // 0xbcd Jump
}


func_3225(var_146_bool)
{
	var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; var_153_string = ""; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_string = ""; // 0xc99 PushV
	var_153_string = "c"; // 0xc9a MovS
	var_154_int = 0; // 0xc9b MovI
	
Label_3228:
	var_158_int = 1; // 0xc9c PushI
	if(var_158_int == 0) goto Label_3241; // 0xc9d JumpB
	var_159_int = 1; // 0xc9e PushI
	var_160_int = var_154_int + var_159_int; // 0xc9f Add
	var_161_int = var_153_string + var_160_int; // 0xca0 Add
	HasProperty(var_161_int, var_155_bool); // 0xca1 ObjFunc
	var_162_bool = var_155_bool == 0; // 0xca3 Not
	if(var_162_bool == 0) goto Label_3238; // 0xca4 JumpB
	goto Label_3241; // 0xca5 Jump
	
Label_3241:
	var_163_bool = var_154_int == 0; // 0xca9 Not
	if(var_163_bool == 0) goto Label_3245; // 0xcaa JumpB
	var_146_bool = 0; // 0xcab MovB
	return 10; // 0xcac Return
	
Label_3245:
	var_156_int = 0; // 0xcad MovI
	var_164_int = 1; // 0xcae PushI
	var_165_bool = var_154_int > var_164_int; // 0xcaf GT
	if(var_165_bool == 0) goto Label_3251; // 0xcb0 JumpB
	irand(var_156_int, var_154_int); // 0xcb1 Func
	
Label_3251:
	var_166_int = 1; // 0xcb3 PushI
	var_167_int = var_156_int + var_166_int; // 0xcb4 Add
	var_168_int = var_153_string + var_167_int; // 0xcb5 Add
	GetProperty(var_168_int, var_157_string); // 0xcb6 ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0xcb8 PushV
	var_170_string = var_157_string; // 0xcb9 Mov
	func_3336(var_169_bool, var_170_string); // 0xcba NEW_2
	var_146_bool = var_169_bool; // 0xcbb Mov
	return 10; // 0xcbd Return
	
Label_3238:
	var_175_int = 1; // 0xca6 PushI
	var_154_int = var_154_int + var_175_int; // 0xca7 Add2
	goto Label_3228; // 0xca8 Jump
}


func_3738()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0xe9a PushV
	var_152_int = 763; // 0xe9b PushI
	var_153_int = 2; // 0xe9c PushI
	var_154_int = 540030; // 0xe9d PushI
	CreateDiaryEntry(var_151_object, var_152_int, var_153_int, var_154_int); // 0xe9e Func
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0; // 0xea0 PushV
	var_156_object = var_151_object; // 0xea1 Mov
	var_157_int = 672; // 0xea2 MovI
	func_3829(var_155_bool, var_156_object, var_157_int); // 0xea3 NEW_2
	return 2; // 0xea5 Return
}


func_3481(var_124_string)
{
	var_124_string = "ui/NPC_Mark.png"; // 0xd99 MovS
	return 0; // 0xd9a Return
}


func_3483(var_125_string)
{
	var_125_string = "ui/NPC_Mark_b.png"; // 0xd9b MovS
	return 0; // 0xd9c Return
}


func_3485(var_117_bool)
{
	var_117_bool = 1; // 0xd9d MovB
	return 0; // 0xd9e Return
}


func_3487()
{
	var_122_object = Obj(); var_123_string = ""; var_124_float = 0; // 0xda0 PushV
	var_125_object = Obj(); // 0xda1 PushV
	func_3857(var_125_object); // 0xda2 NEW_2
	var_122_object = var_125_object; // 0xda3 Mov
	var_123_string = "pt_map_uprava_admin"; // 0xda5 MovS
	var_124_float = 2; // 0xda6 MovI
	func_3874(var_122_object, var_123_string, var_124_float); // 0xda7 NEW_2
	var_145_object = Obj(); // 0xda9 PushV
	func_3857(var_145_object); // 0xdaa NEW_2
	ShowMap(var_145_object); // 0xdac ObjFunc
	return 0; // 0xdae Return
}


func_2723(var_2_object, var_743_string)
{
	var_744_bool = 0; // 0xaa4 PushV
	func_3485(var_744_bool); // 0xaa5 NEW_2
	var_745_bool = var_744_bool == 0; // 0xaa7 Not
	if(var_745_bool == 0) goto Label_2730; // 0xaa8 JumpB
	return 0; // 0xaa9 Return
	
Label_2730:
	var_746_bool = var_743_string == var_2_object; // 0xaaa Eq
	if(var_746_bool == 0) goto Label_2733; // 0xaab JumpB
	return 0; // 0xaac Return
	
Label_2733:
	var_747_string = ""; var_748_bool = 0; // 0xaad PushV
	var_747_string = var_743_string; // 0xaae Mov
	var_749_string = ""; // 0xaaf PushS
	var_750_bool = var_743_string == var_749_string; // 0xab0 Eq
	if(var_750_bool == 0) goto Label_2740; // 0xab1 JumpB
	var_748_bool = 0; // 0xab2 MovB
	goto Label_2741; // 0xab3 Jump
	
Label_2741:
	func_3321(var_747_string, var_748_bool); // 0xab5 NEW_2
	var_2_object = var_743_string; // 0xab7 TMov
	return 0; // 0xab8 Return
	
Label_2740:
	var_748_bool = 1; // 0xab4 MovB
}


func_1189(var_0_object, var_1_object, var_2_object, var_3_string, var_677_object, var_678_object)
{
	var_0_object = var_678_object; // 0x4a6 TMov
	var_1_object = var_677_object; // 0x4a7 TMov
	var_3_string = 0; // 0x4a8 TMovB
	var_683_int = 1; // 0x4a9 PushI
	if(var_683_int == 0) goto Label_1222; // 0x4aa JumpB
	var_684_string = ""; // 0x4ab PushV
	var_684_string = "Declaim"; // 0x4ac MovS
	func_1252(var_678_object, var_684_string); // 0x4ad NEW_2
	var_692_int = 535680; // 0x4af PushI
	SetMessage(var_692_int); // 0x4b0 TObjFunc
	ClearReplies(); // 0x4b2 TObjFunc
	var_693_int = 535681; // 0x4b4 PushI
	var_694_int = 42137; // 0x4b5 PushI
	var_695_int = 37367; // 0x4b6 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x4b7 TObjFunc
	var_696_int = 540004; // 0x4b9 PushI
	var_697_int = -1; // 0x4ba PushI
	var_698_int = 41975; // 0x4bb PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x4bc TObjFunc
	var_699_int = 540218; // 0x4be PushI
	var_700_int = -1; // 0x4bf PushI
	var_701_int = 42198; // 0x4c0 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x4c1 TObjFunc
	goto Label_1222; // 0x4c3 Jump
	
Label_1222:
	var_702_bool = 0; // 0x4c6 PushV
	func_3485(var_702_bool); // 0x4c7 NEW_2
	if(var_702_bool == 0) goto Label_1237; // 0x4c9 JumpB
	
Label_1226:
	lshWaitForAnimEnd(); // 0x4ca Func
	var_703_string = var_3_string; // 0x4cc PushT
	if(var_703_string == 0) goto Label_1231; // 0x4cd JumpB
	goto Label_1236; // 0x4ce Jump
	
Label_1236:
	goto Label_1251; // 0x4d4 Jump
	
Label_1251:
	return 0; // 0x4e3 Return
	
Label_1231:
	var_704_string = ""; // 0x4cf PushV
	var_704_string = var_2_object; // 0x4d0 MovT
	func_3305(var_704_string); // 0x4d1 NEW_2
	goto Label_1226; // 0x4d3 Jump
	
Label_1237:
	var_705_string = "all"; // 0x4d5 PushS
	var_706_string = "idle"; // 0x4d6 PushS
	PlayAnimation(var_705_string, var_706_string); // 0x4d7 Func
	
Label_1241:
	WaitForAnimEnd(); // 0x4d9 Func
	var_707_string = var_3_string; // 0x4db PushT
	if(var_707_string == 0) goto Label_1246; // 0x4dc JumpB
	goto Label_1251; // 0x4dd Jump
	
Label_1246:
	var_708_string = "all"; // 0x4de PushS
	var_709_string = "idle"; // 0x4df PushS
	PlayAnimation(var_708_string, var_709_string); // 0x4e0 Func
	goto Label_1241; // 0x4e2 Jump
}


func_3751()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0xea7 PushV
	var_114_int = 675; // 0xea8 PushI
	var_115_int = 2; // 0xea9 PushI
	var_116_int = 534160; // 0xeaa PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0xeab Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0xead PushV
	var_118_object = var_113_object; // 0xeae Mov
	var_119_int = 672; // 0xeaf MovI
	func_3829(var_117_bool, var_118_object, var_119_int); // 0xeb0 NEW_2
	return 2; // 0xeb2 Return
}


func_680(var_2_object, var_612_string)
{
	var_613_bool = 0; // 0x2a9 PushV
	func_3485(var_613_bool); // 0x2aa NEW_2
	var_614_bool = var_613_bool == 0; // 0x2ac Not
	if(var_614_bool == 0) goto Label_687; // 0x2ad JumpB
	return 0; // 0x2ae Return
	
Label_687:
	var_615_bool = var_612_string == var_2_object; // 0x2af Eq
	if(var_615_bool == 0) goto Label_690; // 0x2b0 JumpB
	return 0; // 0x2b1 Return
	
Label_690:
	var_616_string = ""; var_617_bool = 0; // 0x2b2 PushV
	var_616_string = var_612_string; // 0x2b3 Mov
	var_618_string = ""; // 0x2b4 PushS
	var_619_bool = var_612_string == var_618_string; // 0x2b5 Eq
	if(var_619_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_617_bool = 0; // 0x2b7 MovB
	goto Label_698; // 0x2b8 Jump
	
Label_698:
	func_3321(var_616_string, var_617_bool); // 0x2ba NEW_2
	var_2_object = var_612_string; // 0x2bc TMov
	return 0; // 0x2bd Return
	
Label_697:
	var_617_bool = 1; // 0x2b9 MovB
}


func_3503()
{
	func_3803(); // 0xdb1 NEW_2
	var_72_bool = 0; var_73_string = ""; var_74_string = ""; // 0xdb3 PushV
	var_73_string = "quest_d8_04"; // 0xdb4 MovS
	var_74_string = "completed"; // 0xdb5 MovS
	func_3421(var_72_bool, var_73_string, var_74_string); // 0xdb6 NEW_2
	return 0; // 0xdb8 Return
}


func_1713(var_0_object, var_298_int, var_299_object)
{
	var_301_object = Obj(); var_302_bool = 0; var_303_int = 0; var_304_bool = 0; var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; // 0x6b1 PushV
	var_0_object = var_299_object; // 0x6b2 TMov
	var_309_bool = 0; var_310_object = Obj(); var_311_float = 0; // 0x6b3 PushV
	var_310_object = var_299_object; // 0x6b4 Mov
	var_311_float = 70.0; // 0x6b5 MovF
	func_3082(var_310_object, var_311_float); // 0x6b6 NEW_2
	var_312_bool = var_309_bool == 0; // 0x6b8 Not
	if(var_312_bool == 0) goto Label_1724; // 0x6b9 JumpB
	var_298_int = -2; // 0x6ba MovI
	return 8; // 0x6bb Return
	
Label_1724:
	CreateDialog(var_305_object); // 0x6bc Func
	var_313_int = 0; // 0x6be PushV
	func_3479(var_313_int); // 0x6bf NEW_2
	SetNPCName(var_313_int); // 0x6c1 ObjFunc
	var_314_int = 0; // 0x6c3 PushV
	func_3477(var_314_int); // 0x6c4 NEW_2
	SetNPCDescription(var_314_int); // 0x6c6 ObjFunc
	var_315_string = ""; // 0x6c8 PushV
	func_3481(var_315_string); // 0x6c9 NEW_2
	SetPhoto(var_315_string); // 0x6cb ObjFunc
	var_316_string = ""; // 0x6cd PushV
	func_3483(var_316_string); // 0x6ce NEW_2
	SetPhoto2(var_316_string); // 0x6d0 ObjFunc
	var_317_int = 0; // 0x6d2 PushV
	func_3907(var_317_int); // 0x6d3 NEW_2
	SetPlayerName(var_317_int); // 0x6d5 ObjFunc
	var_307_int = -1; // 0x6d7 MovI
	IsOverrideActive(var_306_bool); // 0x6d8 Func
	var_318_bool = var_306_bool; // 0x6da Push
	if(var_318_bool == 0) goto Label_1758; // 0x6db JumpB
	var_298_int = -2; // 0x6dc MovI
	return 8; // 0x6dd Return
	
Label_1758:
	DoDialog(var_305_object); // 0x6de Func
	var_319_bool = 0; var_320_object = Obj(); // 0x6e0 PushV
	var_321_object = Obj(); // 0x6e1 PushV
	func_3358(var_321_object); // 0x6e2 NEW_2
	var_320_object = var_321_object; // 0x6e3 Mov
	func_3167(var_319_bool, var_320_object); // 0x6e5 NEW_2
	var_322_object = Obj(); var_323_object = Obj(); // 0x6e7 PushV
	var_322_object = var_299_object; // 0x6e8 Mov
	var_323_object = var_305_object; // 0x6e9 Mov
	TaskCall(9); // 0x6ea TaskCall
	func_1794(var_324_object, var_325_object, var_326_string, var_327_bool, var_322_object, var_323_object); // 0x6eb NEW_2
	TaskReturn(); // 0x6ec TaskReturn
	IsDialogEnd(var_308_bool); // 0x6ee ObjFunc
	
Label_1776:
	var_360_bool = var_308_bool == 0; // 0x6f0 Not
	if(var_360_bool == 0) goto Label_1783; // 0x6f1 JumpB
	sync(); // 0x6f2 Func
	IsDialogEnd(var_308_bool); // 0x6f4 ObjFunc
	goto Label_1776; // 0x6f6 Jump
	
Label_1783:
	var_361_object = Obj(); // 0x6f7 PushV
	var_361_object = var_299_object; // 0x6f8 Mov
	func_3150(); // 0x6f9 NEW_2
	StopDialog(var_305_object); // 0x6fb Func
	GetReturnValue(var_307_int); // 0x6fd ObjFunc
	var_298_int = var_307_int; // 0x6ff Mov
	return 8; // 0x700 Return
}


func_3764()
{
	var_74_object = Obj(); var_75_object = Obj(); // 0xeb4 PushV
	var_76_int = 673; // 0xeb5 PushI
	var_77_int = 2; // 0xeb6 PushI
	var_78_int = 534158; // 0xeb7 PushI
	CreateDiaryEntry(var_75_object, var_76_int, var_77_int, var_78_int); // 0xeb8 Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0xeba PushV
	var_80_object = var_75_object; // 0xebb Mov
	var_81_int = 672; // 0xebc MovI
	func_3829(var_79_bool, var_80_object, var_81_int); // 0xebd NEW_2
	return 2; // 0xebf Return
}


func_3513()
{
	var_606_string = "ood10Mark1"; // 0xdba PushS
	var_607_int = 1; // 0xdbb PushI
	SetVariable(var_606_string, var_607_int); // 0xdbc Func
	return 0; // 0xdbe Return
}


func_3262(var_177_bool)
{
	var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; var_184_string = ""; var_185_int = 0; var_186_bool = 0; var_187_int = 0; var_188_string = ""; // 0xcbe PushV
	var_189_string = "d"; // 0xcbf PushS
	var_190_int = 0; // 0xcc0 PushV
	func_3438(var_190_int); // 0xcc1 NEW_2
	var_196_int = var_189_string + var_190_int; // 0xcc3 Add
	var_197_string = "m"; // 0xcc4 PushS
	var_184_string = var_196_int + var_197_string; // 0xcc5 Add2
	var_185_int = 0; // 0xcc6 MovI
	
Label_3271:
	var_198_int = 1; // 0xcc7 PushI
	if(var_198_int == 0) goto Label_3284; // 0xcc8 JumpB
	var_199_int = 1; // 0xcc9 PushI
	var_200_int = var_185_int + var_199_int; // 0xcca Add
	var_201_int = var_184_string + var_200_int; // 0xccb Add
	HasProperty(var_201_int, var_186_bool); // 0xccc ObjFunc
	var_202_bool = var_186_bool == 0; // 0xcce Not
	if(var_202_bool == 0) goto Label_3281; // 0xccf JumpB
	goto Label_3284; // 0xcd0 Jump
	
Label_3284:
	var_203_bool = var_185_int == 0; // 0xcd4 Not
	if(var_203_bool == 0) goto Label_3288; // 0xcd5 JumpB
	var_177_bool = 0; // 0xcd6 MovB
	return 10; // 0xcd7 Return
	
Label_3288:
	var_187_int = 0; // 0xcd8 MovI
	var_204_int = 1; // 0xcd9 PushI
	var_205_bool = var_185_int > var_204_int; // 0xcda GT
	if(var_205_bool == 0) goto Label_3294; // 0xcdb JumpB
	irand(var_187_int, var_185_int); // 0xcdc Func
	
Label_3294:
	var_206_int = 1; // 0xcde PushI
	var_207_int = var_187_int + var_206_int; // 0xcdf Add
	var_208_int = var_184_string + var_207_int; // 0xce0 Add
	GetProperty(var_208_int, var_188_string); // 0xce1 ObjFunc
	var_209_bool = 0; var_210_string = ""; // 0xce3 PushV
	var_210_string = var_188_string; // 0xce4 Mov
	func_3336(var_209_bool, var_210_string); // 0xce5 NEW_2
	var_177_bool = var_209_bool; // 0xce6 Mov
	return 10; // 0xce8 Return
	
Label_3281:
	var_211_int = 1; // 0xcd1 PushI
	var_185_int = var_185_int + var_211_int; // 0xcd2 Add2
	goto Label_3271; // 0xcd3 Jump
}


func_3519()
{
	var_610_string = "d10MarkVisit"; // 0xdc0 PushS
	var_611_int = 1; // 0xdc1 PushI
	SetVariable(var_610_string, var_611_int); // 0xdc2 Func
	return 0; // 0xdc4 Return
}


func_3777()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xec1 PushV
	var_74_int = 170; // 0xec2 PushI
	var_75_int = 2; // 0xec3 PushI
	var_76_int = 515422; // 0xec4 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0xec5 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0xec7 PushV
	var_78_object = var_73_object; // 0xec8 Mov
	var_79_int = -1; // 0xec9 MovI
	func_3829(var_77_bool, var_78_object, var_79_int); // 0xeca NEW_2
	return 2; // 0xecc Return
}


func_3525()
{
	var_49_string = "d10q03"; // 0xdc6 PushS
	var_50_int = 1; // 0xdc7 PushI
	SetVariable(var_49_string, var_50_int); // 0xdc8 Func
	func_3725(); // 0xdcb NEW_2
	func_3764(); // 0xdce NEW_2
	var_82_object = Obj(); var_83_string = ""; // 0xdd0 PushV
	var_83_string = "quest_d10_03"; // 0xdd1 MovS
	func_3379(var_82_object, var_83_string); // 0xdd2 NEW_2
	return 0; // 0xdd4 Return
}


func_3790()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0xece PushV
	var_97_int = 171; // 0xecf PushI
	var_98_int = 2; // 0xed0 PushI
	var_99_int = 515423; // 0xed1 PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0xed2 Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0xed4 PushV
	var_101_object = var_96_object; // 0xed5 Mov
	var_102_int = 170; // 0xed6 MovI
	func_3829(var_100_bool, var_101_object, var_102_int); // 0xed7 NEW_2
	return 2; // 0xed9 Return
}


func_1998(var_0_object, var_364_int, var_365_object)
{
	var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0; var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0; // 0x7ce PushV
	var_0_object = var_365_object; // 0x7cf TMov
	var_375_bool = 0; var_376_object = Obj(); var_377_float = 0; // 0x7d0 PushV
	var_376_object = var_365_object; // 0x7d1 Mov
	var_377_float = 70.0; // 0x7d2 MovF
	func_3082(var_376_object, var_377_float); // 0x7d3 NEW_2
	var_378_bool = var_375_bool == 0; // 0x7d5 Not
	if(var_378_bool == 0) goto Label_2009; // 0x7d6 JumpB
	var_364_int = -2; // 0x7d7 MovI
	return 8; // 0x7d8 Return
	
Label_2009:
	CreateDialog(var_371_object); // 0x7d9 Func
	var_379_int = 0; // 0x7db PushV
	func_3479(var_379_int); // 0x7dc NEW_2
	SetNPCName(var_379_int); // 0x7de ObjFunc
	var_380_int = 0; // 0x7e0 PushV
	func_3477(var_380_int); // 0x7e1 NEW_2
	SetNPCDescription(var_380_int); // 0x7e3 ObjFunc
	var_381_string = ""; // 0x7e5 PushV
	func_3481(var_381_string); // 0x7e6 NEW_2
	SetPhoto(var_381_string); // 0x7e8 ObjFunc
	var_382_string = ""; // 0x7ea PushV
	func_3483(var_382_string); // 0x7eb NEW_2
	SetPhoto2(var_382_string); // 0x7ed ObjFunc
	var_383_int = 0; // 0x7ef PushV
	func_3907(var_383_int); // 0x7f0 NEW_2
	SetPlayerName(var_383_int); // 0x7f2 ObjFunc
	var_373_int = -1; // 0x7f4 MovI
	IsOverrideActive(var_372_bool); // 0x7f5 Func
	var_384_bool = var_372_bool; // 0x7f7 Push
	if(var_384_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_364_int = -2; // 0x7f9 MovI
	return 8; // 0x7fa Return
	
Label_2043:
	DoDialog(var_371_object); // 0x7fb Func
	var_385_bool = 0; var_386_object = Obj(); // 0x7fd PushV
	var_387_object = Obj(); // 0x7fe PushV
	func_3358(var_387_object); // 0x7ff NEW_2
	var_386_object = var_387_object; // 0x800 Mov
	func_3167(var_385_bool, var_386_object); // 0x802 NEW_2
	var_388_object = Obj(); var_389_object = Obj(); // 0x804 PushV
	var_388_object = var_365_object; // 0x805 Mov
	var_389_object = var_371_object; // 0x806 Mov
	TaskCall(11); // 0x807 TaskCall
	func_2079(var_390_object, var_391_object, var_392_string, var_393_bool, var_388_object, var_389_object); // 0x808 NEW_2
	TaskReturn(); // 0x809 TaskReturn
	IsDialogEnd(var_374_bool); // 0x80b ObjFunc
	
Label_2061:
	var_415_bool = var_374_bool == 0; // 0x80d Not
	if(var_415_bool == 0) goto Label_2068; // 0x80e JumpB
	sync(); // 0x80f Func
	IsDialogEnd(var_374_bool); // 0x811 ObjFunc
	goto Label_2061; // 0x813 Jump
	
Label_2068:
	var_416_object = Obj(); // 0x814 PushV
	var_416_object = var_365_object; // 0x815 Mov
	func_3150(); // 0x816 NEW_2
	StopDialog(var_371_object); // 0x818 Func
	GetReturnValue(var_373_int); // 0x81a ObjFunc
	var_364_int = var_373_int; // 0x81c Mov
	return 8; // 0x81d Return
}


func_1489(var_0_object, var_1_object, var_2_object, var_3_string, var_230_object, var_231_object)
{
	var_0_object = var_231_object; // 0x5d2 TMov
	var_1_object = var_230_object; // 0x5d3 TMov
	var_3_string = 0; // 0x5d4 TMovB
	var_236_int = 1; // 0x5d5 PushI
	if(var_236_int == 0) goto Label_1522; // 0x5d6 JumpB
	var_237_object = Obj(); var_238_object = Obj(); // 0x5d7 PushV
	var_237_object = var_1_object; // 0x5d8 MovT
	var_238_object = var_0_object; // 0x5d9 MovT
	func_3635(); // 0x5da NEW_2
	var_241_string = ""; // 0x5dc PushV
	var_241_string = "Declaim"; // 0x5dd MovS
	func_1552(var_231_object, var_241_string); // 0x5de NEW_2
	var_258_int = 500424; // 0x5e0 PushI
	SetMessage(var_258_int); // 0x5e1 TObjFunc
	ClearReplies(); // 0x5e3 TObjFunc
	var_259_int = 500425; // 0x5e5 PushI
	var_260_int = 494; // 0x5e6 PushI
	var_261_int = 493; // 0x5e7 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x5e8 TObjFunc
	var_262_int = 500429; // 0x5ea PushI
	var_263_int = 498; // 0x5eb PushI
	var_264_int = 497; // 0x5ec PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x5ed TObjFunc
	goto Label_1522; // 0x5ef Jump
	
Label_1522:
	var_265_bool = 0; // 0x5f2 PushV
	func_3485(var_265_bool); // 0x5f3 NEW_2
	if(var_265_bool == 0) goto Label_1537; // 0x5f5 JumpB
	
Label_1526:
	lshWaitForAnimEnd(); // 0x5f6 Func
	var_266_string = var_3_string; // 0x5f8 PushT
	if(var_266_string == 0) goto Label_1531; // 0x5f9 JumpB
	goto Label_1536; // 0x5fa Jump
	
Label_1536:
	goto Label_1551; // 0x600 Jump
	
Label_1551:
	return 0; // 0x60f Return
	
Label_1531:
	var_267_string = ""; // 0x5fb PushV
	var_267_string = var_2_object; // 0x5fc MovT
	func_3305(var_267_string); // 0x5fd NEW_2
	goto Label_1526; // 0x5ff Jump
	
Label_1537:
	var_278_string = "all"; // 0x601 PushS
	var_279_string = "idle"; // 0x602 PushS
	PlayAnimation(var_278_string, var_279_string); // 0x603 Func
	
Label_1541:
	WaitForAnimEnd(); // 0x605 Func
	var_280_string = var_3_string; // 0x607 PushT
	if(var_280_string == 0) goto Label_1546; // 0x608 JumpB
	goto Label_1551; // 0x609 Jump
	
Label_1546:
	var_281_string = "all"; // 0x60a PushS
	var_282_string = "idle"; // 0x60b PushS
	PlayAnimation(var_281_string, var_282_string); // 0x60c Func
	goto Label_1541; // 0x60e Jump
}


func_3541()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0xdd5 PushV
	var_96_string = "d10q03"; // 0xdd6 PushS
	var_97_int = 3; // 0xdd7 PushI
	SetVariable(var_96_string, var_97_int); // 0xdd8 Func
	var_98_object = Obj(); // 0xdda PushV
	func_3857(var_98_object); // 0xddb NEW_2
	var_95_object = var_98_object; // 0xddc Mov
	var_105_string = "d10q03MarkGotoBlock"; // 0xdde PushS
	var_106_string = "pt_map_uprava_admin"; // 0xddf PushS
	var_107_int = 0; // 0xde0 PushI
	var_108_int = 515301; // 0xde1 PushI
	var_109_float = 0; // 0xde2 PushV
	func_3433(var_109_float); // 0xde3 NEW_2
	AddMark(var_105_string, var_106_string, var_107_int, var_108_int, var_109_float); // 0xde5 ObjFunc
	func_3751(); // 0xde8 NEW_2
	return 2; // 0xdea Return
}


func_3803()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xedb PushV
	var_51_int = 653; // 0xedc PushI
	var_52_int = 2; // 0xedd PushI
	var_53_int = 533366; // 0xede PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0xedf Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0xee1 PushV
	var_55_object = var_50_object; // 0xee2 Mov
	var_56_int = 649; // 0xee3 MovI
	func_3829(var_54_bool, var_55_object, var_56_int); // 0xee4 NEW_2
	return 2; // 0xee6 Return
}


func_3036(var_79_bool)
{
	var_79_bool = 1; // 0xbdc MovB
	return 0; // 0xbdd Return
}


func_3038()
{
	StopAnimation(); // 0xbde Func
	StopGroup0(); // 0xbe0 Func
	return 0; // 0xbe2 Return
}


func_2272(var_0_object, var_1_object, var_2_object, var_3_string, var_443_object, var_444_object)
{
	var_0_object = var_444_object; // 0x8e1 TMov
	var_1_object = var_443_object; // 0x8e2 TMov
	var_3_string = 0; // 0x8e3 TMovB
	var_449_int = 1; // 0x8e4 PushI
	if(var_449_int == 0) goto Label_2332; // 0x8e5 JumpB
	var_450_string = ""; // 0x8e6 PushV
	var_450_string = "Neutral"; // 0x8e7 MovS
	func_2362(var_444_object, var_450_string); // 0x8e8 NEW_2
	var_458_int = 513312; // 0x8ea PushI
	SetMessage(var_458_int); // 0x8eb TObjFunc
	ClearReplies(); // 0x8ed TObjFunc
	var_459_bool = 0; // 0x8ef PushV
	var_459_bool = 1; // 0x8f0 MovB
	var_460_bool = 0; // 0x8f1 PushV
	var_460_bool = 0; // 0x8f2 MovB
	var_461_bool = 0; var_462_object = Obj(); // 0x8f3 PushV
	var_462_object = var_1_object; // 0x8f4 MovT
	func_3713(var_462_object); // 0x8f5 NEW_2
	if(var_461_bool == 0) goto Label_2302; // 0x8f7 JumpB
	var_467_bool = 0; var_468_object = Obj(); // 0x8f8 PushV
	var_468_object = var_1_object; // 0x8f9 MovT
	func_3701(var_468_object); // 0x8fa NEW_2
	if(var_467_bool == 0) goto Label_2302; // 0x8fc JumpB
	var_460_bool = 1; // 0x8fd MovB
	
Label_2302:
	if(var_460_bool == 0) goto Label_2318; // 0x8fe JumpB
	var_473_bool = 0; // 0x8ff PushV
	var_473_bool = 0; // 0x900 MovB
	var_474_bool = 0; var_475_object = Obj(); // 0x901 PushV
	var_475_object = var_1_object; // 0x902 MovT
	func_3713(var_475_object); // 0x903 NEW_2
	if(var_474_bool == 0) goto Label_2316; // 0x905 JumpB
	var_476_bool = 0; var_477_object = Obj(); // 0x906 PushV
	var_477_object = var_1_object; // 0x907 MovT
	func_3689(var_477_object); // 0x908 NEW_2
	if(var_476_bool == 0) goto Label_2316; // 0x90a JumpB
	var_473_bool = 1; // 0x90b MovB
	
Label_2316:
	if(var_473_bool == 0) goto Label_2318; // 0x90c JumpB
	var_459_bool = 0; // 0x90d MovB
	
Label_2318:
	if(var_459_bool == 0) goto Label_2324; // 0x90e JumpB
	var_482_int = 513314; // 0x90f PushI
	var_483_int = 14550; // 0x910 PushI
	var_484_int = 14549; // 0x911 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x912 TObjFunc
	
Label_2324:
	var_485_int = 513313; // 0x914 PushI
	var_486_int = -1; // 0x915 PushI
	var_487_int = 14548; // 0x916 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x917 TObjFunc
	goto Label_2332; // 0x919 Jump
	
Label_2332:
	var_488_bool = 0; // 0x91c PushV
	func_3485(var_488_bool); // 0x91d NEW_2
	if(var_488_bool == 0) goto Label_2347; // 0x91f JumpB
	
Label_2336:
	lshWaitForAnimEnd(); // 0x920 Func
	var_489_string = var_3_string; // 0x922 PushT
	if(var_489_string == 0) goto Label_2341; // 0x923 JumpB
	goto Label_2346; // 0x924 Jump
	
Label_2346:
	goto Label_2361; // 0x92a Jump
	
Label_2361:
	return 0; // 0x939 Return
	
Label_2341:
	var_490_string = ""; // 0x925 PushV
	var_490_string = var_2_object; // 0x926 MovT
	func_3305(var_490_string); // 0x927 NEW_2
	goto Label_2336; // 0x929 Jump
	
Label_2347:
	var_491_string = "all"; // 0x92b PushS
	var_492_string = "idle"; // 0x92c PushS
	PlayAnimation(var_491_string, var_492_string); // 0x92d Func
	
Label_2351:
	WaitForAnimEnd(); // 0x92f Func
	var_493_string = var_3_string; // 0x931 PushT
	if(var_493_string == 0) goto Label_2356; // 0x932 JumpB
	goto Label_2361; // 0x933 Jump
	
Label_2356:
	var_494_string = "all"; // 0x934 PushS
	var_495_string = "idle"; // 0x935 PushS
	PlayAnimation(var_494_string, var_495_string); // 0x936 Func
	goto Label_2351; // 0x938 Jump
}


func_3043(var_56_float)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xbe3 PushV
	GetPosition(var_61_cvector); // 0xbe4 Func
	GetPosition(var_62_cvector); // 0xbe6 ObjFunc
	var_63_cvector = var_62_cvector - var_61_cvector; // 0xbe8 Sub2
	var_56_float = var_63_cvector | var_63_cvector; // 0xbe9 Or2
	return 6; // 0xbea Return
}


func_1252(var_2_object, var_684_string)
{
	var_685_bool = 0; // 0x4e5 PushV
	func_3485(var_685_bool); // 0x4e6 NEW_2
	var_686_bool = var_685_bool == 0; // 0x4e8 Not
	if(var_686_bool == 0) goto Label_1259; // 0x4e9 JumpB
	return 0; // 0x4ea Return
	
Label_1259:
	var_687_bool = var_684_string == var_2_object; // 0x4eb Eq
	if(var_687_bool == 0) goto Label_1262; // 0x4ec JumpB
	return 0; // 0x4ed Return
	
Label_1262:
	var_688_string = ""; var_689_bool = 0; // 0x4ee PushV
	var_688_string = var_684_string; // 0x4ef Mov
	var_690_string = ""; // 0x4f0 PushS
	var_691_bool = var_684_string == var_690_string; // 0x4f1 Eq
	if(var_691_bool == 0) goto Label_1269; // 0x4f2 JumpB
	var_689_bool = 0; // 0x4f3 MovB
	goto Label_1270; // 0x4f4 Jump
	
Label_1270:
	func_3321(var_688_string, var_689_bool); // 0x4f6 NEW_2
	var_2_object = var_684_string; // 0x4f8 TMov
	return 0; // 0x4f9 Return
	
Label_1269:
	var_689_bool = 1; // 0x4f5 MovB
}


func_2791(var_0_object)
{
	var_41_bool = 0; // 0xae7 PushV
	func_3077(var_41_bool); // 0xae8 NEW_2
	var_44_bool = var_41_bool == 0; // 0xaea Not
	if(var_44_bool == 0) goto Label_2798; // 0xaeb JumpB
	Hold(); // 0xaec Func
	
Label_2798:
	GetDirection(var_0_object); // 0xaee Func
	
Label_2800:
	func_2967(); // 0xaf1 NEW_2
	goto Label_2800; // 0xaf3 Jump
}


func_3816(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0xee8 PushV
	GetDiaryRoot(var_88_object); // 0xee9 Func
	var_89_bool = var_88_object == 0; // 0xeeb Not
	if(var_89_bool == 0) goto Label_3826; // 0xeec JumpB
	var_90_string = "Can't retrieve diary root"; // 0xeed PushS
	Trace(var_90_string); // 0xeee Func
	var_86_object = 0; // 0xef0 MovB
	return 2; // 0xef1 Return
	
Label_3826:
	var_86_object = var_88_object; // 0xef2 Mov
	return 2; // 0xef3 Return
}


func_3305(var_267_string)
{
	var_268_bool = 0; var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_float = 0; var_273_float = 0; // 0xce9 PushV
	lshHasAnimation(var_271_bool, var_267_string); // 0xcea Func
	var_274_bool = var_271_bool; // 0xcec Push
	if(var_274_bool == 0) goto Label_3316; // 0xced JumpB
	lshGetAnimTimes(var_267_string, var_272_float, var_273_float); // 0xcee Func
	var_275_bool = 0; // 0xcf0 PushB
	lshPlayAnimation(var_272_float, var_273_float, var_275_bool); // 0xcf1 Func
	goto Label_3320; // 0xcf3 Jump
	
Label_3320:
	return 6; // 0xcf8 Return
	
Label_3316:
	var_276_string = "Can't find lsh animation : "; // 0xcf4 PushS
	var_277_int = var_276_string + var_267_string; // 0xcf5 Add
	Trace(var_277_int); // 0xcf6 Func
}


func_3051(var_132_string, var_133_int)
{
	var_134_int = 0; var_135_int = 0; // 0xbeb PushV
	GetProperty(var_132_string, var_135_int); // 0xbec ObjFunc
	var_136_int = var_135_int + var_133_int; // 0xbee Add
	SetProperty(var_132_string, var_136_int); // 0xbef ObjFunc
	return 2; // 0xbf1 Return
}


func_3564()
{
	var_49_string = "ood2Mark1"; // 0xded PushS
	var_50_int = 1; // 0xdee PushI
	SetVariable(var_49_string, var_50_int); // 0xdef Func
	return 0; // 0xdf1 Return
}


func_3570()
{
	func_3738(); // 0xdf4 NEW_2
	var_158_bool = 0; var_159_string = ""; var_160_string = ""; // 0xdf6 PushV
	var_159_string = "quest_d10_03"; // 0xdf7 MovS
	var_160_string = "fail"; // 0xdf8 MovS
	func_3421(var_158_bool, var_159_string, var_160_string); // 0xdf9 NEW_2
	return 0; // 0xdfb Return
}


func_3058(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; // 0xbf2 PushV
	GetPosition(var_54_cvector); // 0xbf3 Func
	var_55_cvector = var_50_cvector - var_54_cvector; // 0xbf5 Sub2
	var_57_float = GetByIndex(var_55_cvector, 0); // 0xbf6 PushE
	var_58_float = GetByIndex(var_55_cvector, 2); // 0xbf7 PushE
	Rotate(var_57_float, var_58_float, var_56_bool); // 0xbf8 Func
	var_49_bool = var_56_bool; // 0xbfa Mov
	return 6; // 0xbfb Return
}


func_2805(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xaf5 PushV
	var_69_string = "player"; // 0xaf6 PushS
	FindActor(var_68_object, var_69_string); // 0xaf7 Func
	var_70_bool = var_68_object == 0; // 0xaf9 Not
	if(var_70_bool == 0) goto Label_2813; // 0xafa JumpB
	var_66_bool = 0; // 0xafb MovB
	return 2; // 0xafc Return
	
Label_2813:
	var_71_bool = 0; var_72_object = Obj(); // 0xafd PushV
	var_72_object = var_68_object; // 0xafe Mov
	func_3068(var_72_object); // 0xaff NEW_2
	var_66_bool = var_71_bool; // 0xb00 Mov
	return 2; // 0xb02 Return
}


func_3829(var_77_bool, var_78_object, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; var_83_object = Obj(); var_84_object = Obj(); var_85_int = 0; // 0xef5 PushV
	var_86_object = Obj(); // 0xef6 PushV
	func_3816(var_86_object); // 0xef7 NEW_2
	var_83_object = var_86_object; // 0xef8 Mov
	Find(var_79_int, var_84_object); // 0xefa ObjFunc
	var_91_bool = var_84_object == 0; // 0xefc Not
	if(var_91_bool == 0) goto Label_3844; // 0xefd JumpB
	var_92_string = "Can't find diary parent with id: "; // 0xefe PushS
	var_93_int = var_92_string + var_79_int; // 0xeff Add
	Trace(var_93_int); // 0xf00 Func
	var_77_bool = 0; // 0xf02 MovB
	return 6; // 0xf03 Return
	
Label_3844:
	AddChild(var_78_object); // 0xf04 ObjFunc
	var_94_int = 7; // 0xf06 PushI
	SendWorldWndMessage(var_94_int); // 0xf07 Func
	GetCategory(var_85_int); // 0xf09 ObjFunc
	SetDiarySection(var_85_int); // 0xf0b Func
	var_77_bool = 0; // 0xf0d MovB
	return 6; // 0xf0e Return
}


func_501(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; // 0x1f5 PushV
	var_0_object = var_568_object; // 0x1f6 TMov
	var_578_bool = 0; var_579_object = Obj(); var_580_float = 0; // 0x1f7 PushV
	var_579_object = var_568_object; // 0x1f8 Mov
	var_580_float = 70.0; // 0x1f9 MovF
	func_3082(var_579_object, var_580_float); // 0x1fa NEW_2
	var_581_bool = var_578_bool == 0; // 0x1fc Not
	if(var_581_bool == 0) goto Label_512; // 0x1fd JumpB
	var_567_int = -2; // 0x1fe MovI
	return 8; // 0x1ff Return
	
Label_512:
	CreateDialog(var_574_object); // 0x200 Func
	var_582_int = 0; // 0x202 PushV
	func_3479(var_582_int); // 0x203 NEW_2
	SetNPCName(var_582_int); // 0x205 ObjFunc
	var_583_int = 0; // 0x207 PushV
	func_3477(var_583_int); // 0x208 NEW_2
	SetNPCDescription(var_583_int); // 0x20a ObjFunc
	var_584_string = ""; // 0x20c PushV
	func_3481(var_584_string); // 0x20d NEW_2
	SetPhoto(var_584_string); // 0x20f ObjFunc
	var_585_string = ""; // 0x211 PushV
	func_3483(var_585_string); // 0x212 NEW_2
	SetPhoto2(var_585_string); // 0x214 ObjFunc
	var_586_int = 0; // 0x216 PushV
	func_3907(var_586_int); // 0x217 NEW_2
	SetPlayerName(var_586_int); // 0x219 ObjFunc
	var_576_int = -1; // 0x21b MovI
	IsOverrideActive(var_575_bool); // 0x21c Func
	var_587_bool = var_575_bool; // 0x21e Push
	if(var_587_bool == 0) goto Label_546; // 0x21f JumpB
	var_567_int = -2; // 0x220 MovI
	return 8; // 0x221 Return
	
Label_546:
	DoDialog(var_574_object); // 0x222 Func
	var_588_bool = 0; var_589_object = Obj(); // 0x224 PushV
	var_590_object = Obj(); // 0x225 PushV
	func_3358(var_590_object); // 0x226 NEW_2
	var_589_object = var_590_object; // 0x227 Mov
	func_3167(var_588_bool, var_589_object); // 0x229 NEW_2
	var_591_object = Obj(); var_592_object = Obj(); // 0x22b PushV
	var_591_object = var_568_object; // 0x22c Mov
	var_592_object = var_574_object; // 0x22d Mov
	TaskCall(3); // 0x22e TaskCall
	func_582(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object); // 0x22f NEW_2
	TaskReturn(); // 0x230 TaskReturn
	IsDialogEnd(var_577_bool); // 0x232 ObjFunc
	
Label_564:
	var_649_bool = var_577_bool == 0; // 0x234 Not
	if(var_649_bool == 0) goto Label_571; // 0x235 JumpB
	sync(); // 0x236 Func
	IsDialogEnd(var_577_bool); // 0x238 ObjFunc
	goto Label_564; // 0x23a Jump
	
Label_571:
	var_650_object = Obj(); // 0x23b PushV
	var_650_object = var_568_object; // 0x23c Mov
	func_3150(); // 0x23d NEW_2
	StopDialog(var_574_object); // 0x23f Func
	GetReturnValue(var_576_int); // 0x241 ObjFunc
	var_567_int = var_576_int; // 0x243 Mov
	return 8; // 0x244 Return
}


func_3321(var_245_string, var_246_bool)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0xcf9 PushV
	lshHasAnimation(var_252_bool, var_245_string); // 0xcfa Func
	var_255_bool = var_252_bool; // 0xcfc Push
	if(var_255_bool == 0) goto Label_3331; // 0xcfd JumpB
	lshGetAnimTimes(var_245_string, var_253_float, var_254_float); // 0xcfe Func
	lshPlayAnimation(var_253_float, var_254_float, var_246_bool); // 0xd00 Func
	goto Label_3335; // 0xd02 Jump
	
Label_3335:
	return 6; // 0xd07 Return
	
Label_3331:
	var_256_string = "Can't find lsh animation : "; // 0xd03 PushS
	var_257_int = var_256_string + var_245_string; // 0xd04 Add
	Trace(var_257_int); // 0xd05 Func
}


func_3068(var_45_bool)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xbfc PushV
	GetPosition(var_48_cvector); // 0xbfd ObjFunc
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0xbff PushV
	var_50_cvector = var_48_cvector; // 0xc00 Mov
	func_3058(var_49_bool, var_50_cvector); // 0xc01 NEW_2
	var_45_bool = var_49_bool; // 0xc02 Mov
	return 2; // 0xc04 Return
}


