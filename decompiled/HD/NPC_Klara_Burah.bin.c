task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xb5 PushI
	if(var_38_int == 0) goto Label_446; // 0xb6 JumpB
	func_3698(); // 0xb8 NEW_2
	var_40_int = 26042; // 0xba PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xbb Eq
	if(var_41_bool == 0) goto Label_194; // 0xbc JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xbd PushV
	var_42_object = var_1_object; // 0xbe MovT
	var_43_object = var_0_object; // 0xbf MovT
	func_3913(); // 0xc0 NEW_2
	
Label_194:
	var_46_int = 26045; // 0xc2 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0xc3 Eq
	if(var_47_bool == 0) goto Label_202; // 0xc4 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xc5 PushV
	var_48_object = var_1_object; // 0xc6 MovT
	var_49_object = var_0_object; // 0xc7 MovT
	func_3919(); // 0xc8 NEW_2
	
Label_202:
	var_89_int = 44014; // 0xca PushI
	var_90_bool = var_37_cvector == var_89_int; // 0xcb Eq
	if(var_90_bool == 0) goto Label_210; // 0xcc JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xcd PushV
	var_91_object = var_1_object; // 0xce MovT
	var_92_object = var_0_object; // 0xcf MovT
	func_3919(); // 0xd0 NEW_2
	
Label_210:
	var_93_int = 44013; // 0xd2 PushI
	var_94_bool = var_37_cvector == var_93_int; // 0xd3 Eq
	if(var_94_bool == 0) goto Label_218; // 0xd4 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xd5 PushV
	var_95_object = var_1_object; // 0xd6 MovT
	var_96_object = var_0_object; // 0xd7 MovT
	func_3919(); // 0xd8 NEW_2
	
Label_218:
	var_97_int = 26041; // 0xda PushI
	var_98_bool = var_36_bool == var_97_int; // 0xdb Eq
	if(var_98_bool == 0) goto Label_260; // 0xdc JumpB
	var_99_string = ""; // 0xdd PushV
	var_99_string = "Neutral"; // 0xde MovS
	func_158(var_37_cvector, var_99_string); // 0xdf NEW_2
	var_116_int = 524702; // 0xe1 PushI
	SetMessage(var_116_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_117_bool = 0; // 0xe6 PushV
	var_117_bool = 0; // 0xe7 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0xe8 PushV
	var_119_object = var_1_object; // 0xe9 MovT
	func_4146(var_119_object); // 0xea NEW_2
	if(var_118_bool == 0) goto Label_243; // 0xec JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0xed PushV
	var_127_object = var_1_object; // 0xee MovT
	func_4158(var_127_object); // 0xef NEW_2
	if(var_126_bool == 0) goto Label_243; // 0xf1 JumpB
	var_117_bool = 1; // 0xf2 MovB
	
Label_243:
	if(var_117_bool == 0) goto Label_249; // 0xf3 JumpB
	var_132_int = 524703; // 0xf4 PushI
	var_133_int = 28087; // 0xf5 PushI
	var_134_int = 26042; // 0xf6 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xf7 TObjFunc
	
Label_249:
	var_135_int = 524704; // 0xf9 PushI
	var_136_int = -1; // 0xfa PushI
	var_137_int = 26043; // 0xfb PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xfc TObjFunc
	var_138_int = 541803; // 0xfe PushI
	var_139_int = -1; // 0xff PushI
	var_140_int = 44015; // 0x100 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_141_int = 28087; // 0x104 PushI
	var_142_bool = var_36_bool == var_141_int; // 0x105 Eq
	if(var_142_bool == 0) goto Label_283; // 0x106 JumpB
	var_143_string = ""; // 0x107 PushV
	var_143_string = "Doubt"; // 0x108 MovS
	func_158(var_37_cvector, var_143_string); // 0x109 NEW_2
	var_144_int = 526807; // 0x10b PushI
	SetMessage(var_144_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_145_int = 526808; // 0x110 PushI
	var_146_int = 28089; // 0x111 PushI
	var_147_int = 28088; // 0x112 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x113 TObjFunc
	var_148_int = 541797; // 0x115 PushI
	var_149_int = 28092; // 0x116 PushI
	var_150_int = 44007; // 0x117 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_151_int = 28089; // 0x11b PushI
	var_152_bool = var_36_bool == var_151_int; // 0x11c Eq
	if(var_152_bool == 0) goto Label_306; // 0x11d JumpB
	var_153_string = ""; // 0x11e PushV
	var_153_string = "Doubt"; // 0x11f MovS
	func_158(var_37_cvector, var_153_string); // 0x120 NEW_2
	var_154_int = 526809; // 0x122 PushI
	SetMessage(var_154_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_155_int = 526810; // 0x127 PushI
	var_156_int = 26044; // 0x128 PushI
	var_157_int = 28090; // 0x129 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x12a TObjFunc
	var_158_int = 526811; // 0x12c PushI
	var_159_int = 28092; // 0x12d PushI
	var_160_int = 28091; // 0x12e PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_161_int = 28092; // 0x132 PushI
	var_162_bool = var_36_bool == var_161_int; // 0x133 Eq
	if(var_162_bool == 0) goto Label_329; // 0x134 JumpB
	var_163_string = ""; // 0x135 PushV
	var_163_string = "Agression"; // 0x136 MovS
	func_158(var_37_cvector, var_163_string); // 0x137 NEW_2
	var_164_int = 526812; // 0x139 PushI
	SetMessage(var_164_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_165_int = 526813; // 0x13e PushI
	var_166_int = 28095; // 0x13f PushI
	var_167_int = 28093; // 0x140 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x141 TObjFunc
	var_168_int = 526814; // 0x143 PushI
	var_169_int = 28095; // 0x144 PushI
	var_170_int = 28094; // 0x145 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_171_int = 28095; // 0x149 PushI
	var_172_bool = var_36_bool == var_171_int; // 0x14a Eq
	if(var_172_bool == 0) goto Label_347; // 0x14b JumpB
	var_173_string = ""; // 0x14c PushV
	var_173_string = "Agression"; // 0x14d MovS
	func_158(var_37_cvector, var_173_string); // 0x14e NEW_2
	var_174_int = 526815; // 0x150 PushI
	SetMessage(var_174_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_175_int = 526816; // 0x155 PushI
	var_176_int = 26044; // 0x156 PushI
	var_177_int = 28097; // 0x157 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_178_int = 26044; // 0x15b PushI
	var_179_bool = var_36_bool == var_178_int; // 0x15c Eq
	if(var_179_bool == 0) goto Label_365; // 0x15d JumpB
	var_180_string = ""; // 0x15e PushV
	var_180_string = "Doubt"; // 0x15f MovS
	func_158(var_37_cvector, var_180_string); // 0x160 NEW_2
	var_181_int = 524705; // 0x162 PushI
	SetMessage(var_181_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_182_int = 541798; // 0x167 PushI
	var_183_int = 44010; // 0x168 PushI
	var_184_int = 44009; // 0x169 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_185_int = 44010; // 0x16d PushI
	var_186_bool = var_36_bool == var_185_int; // 0x16e Eq
	if(var_186_bool == 0) goto Label_388; // 0x16f JumpB
	var_187_string = ""; // 0x170 PushV
	var_187_string = "Agression"; // 0x171 MovS
	func_158(var_37_cvector, var_187_string); // 0x172 NEW_2
	var_188_int = 541799; // 0x174 PushI
	SetMessage(var_188_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_189_int = 526817; // 0x179 PushI
	var_190_int = 28100; // 0x17a PushI
	var_191_int = 28099; // 0x17b PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x17c TObjFunc
	var_192_int = 541800; // 0x17e PushI
	var_193_int = 28102; // 0x17f PushI
	var_194_int = 44011; // 0x180 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_195_int = 28100; // 0x184 PushI
	var_196_bool = var_36_bool == var_195_int; // 0x185 Eq
	if(var_196_bool == 0) goto Label_411; // 0x186 JumpB
	var_197_string = ""; // 0x187 PushV
	var_197_string = "Neutral"; // 0x188 MovS
	func_158(var_37_cvector, var_197_string); // 0x189 NEW_2
	var_198_int = 526818; // 0x18b PushI
	SetMessage(var_198_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_199_int = 526819; // 0x190 PushI
	var_200_int = 28102; // 0x191 PushI
	var_201_int = 28101; // 0x192 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x193 TObjFunc
	var_202_int = 541801; // 0x195 PushI
	var_203_int = -1; // 0x196 PushI
	var_204_int = 44013; // 0x197 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x198 TObjFunc
	return 0; // 0x19a Return
	
Label_411:
	var_205_int = 28102; // 0x19b PushI
	var_206_bool = var_36_bool == var_205_int; // 0x19c Eq
	if(var_206_bool == 0) goto Label_434; // 0x19d JumpB
	var_207_string = ""; // 0x19e PushV
	var_207_string = "Agression"; // 0x19f MovS
	func_158(var_37_cvector, var_207_string); // 0x1a0 NEW_2
	var_208_int = 526820; // 0x1a2 PushI
	SetMessage(var_208_int); // 0x1a3 TObjFunc
	ClearReplies(); // 0x1a5 TObjFunc
	var_209_int = 524706; // 0x1a7 PushI
	var_210_int = -1; // 0x1a8 PushI
	var_211_int = 26045; // 0x1a9 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1aa TObjFunc
	var_212_int = 541802; // 0x1ac PushI
	var_213_int = -1; // 0x1ad PushI
	var_214_int = 44014; // 0x1ae PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_3_string = 1; // 0x1b2 TMovB
	var_215_bool = 0; // 0x1b3 PushV
	func_3888(var_215_bool); // 0x1b4 NEW_2
	if(var_215_bool == 0) goto Label_442; // 0x1b6 JumpB
	lshStopAnimation(); // 0x1b7 Func
	goto Label_444; // 0x1b9 Jump
	
Label_444:
	return 0; // 0x1bc Return
	
Label_442:
	StopAnimation(); // 0x1ba Func
	
Label_446:
	return 0; // 0x1be Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x266 PushI
	if(var_38_int == 0) goto Label_749; // 0x267 JumpB
	func_3698(); // 0x269 NEW_2
	var_40_int = 26628; // 0x26b PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x26c Eq
	if(var_41_bool == 0) goto Label_627; // 0x26d JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x26e PushV
	var_42_object = var_1_object; // 0x26f MovT
	var_43_object = var_0_object; // 0x270 MovT
	func_3938(); // 0x271 NEW_2
	
Label_627:
	var_69_int = 26625; // 0x273 PushI
	var_70_bool = var_36_bool == var_69_int; // 0x274 Eq
	if(var_70_bool == 0) goto Label_655; // 0x275 JumpB
	var_71_string = ""; // 0x276 PushV
	var_71_string = "Neutral"; // 0x277 MovS
	func_591(var_37_cvector, var_71_string); // 0x278 NEW_2
	var_88_int = 525257; // 0x27a PushI
	SetMessage(var_88_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_89_bool = 0; var_90_object = Obj(); // 0x27f PushV
	var_90_object = var_1_object; // 0x280 MovT
	func_4182(var_90_object); // 0x281 NEW_2
	if(var_89_bool == 0) goto Label_649; // 0x283 JumpB
	var_97_int = 525258; // 0x284 PushI
	var_98_int = 30607; // 0x285 PushI
	var_99_int = 26626; // 0x286 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x287 TObjFunc
	
Label_649:
	var_100_int = 525261; // 0x289 PushI
	var_101_int = -1; // 0x28a PushI
	var_102_int = 26629; // 0x28b PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x28c TObjFunc
	return 0; // 0x28e Return
	
Label_655:
	var_103_int = 30607; // 0x28f PushI
	var_104_bool = var_36_bool == var_103_int; // 0x290 Eq
	if(var_104_bool == 0) goto Label_678; // 0x291 JumpB
	var_105_string = ""; // 0x292 PushV
	var_105_string = "Doubt"; // 0x293 MovS
	func_591(var_37_cvector, var_105_string); // 0x294 NEW_2
	var_106_int = 529158; // 0x296 PushI
	SetMessage(var_106_int); // 0x297 TObjFunc
	ClearReplies(); // 0x299 TObjFunc
	var_107_int = 529159; // 0x29b PushI
	var_108_int = 30609; // 0x29c PushI
	var_109_int = 30608; // 0x29d PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x29e TObjFunc
	var_110_int = 529161; // 0x2a0 PushI
	var_111_int = 30611; // 0x2a1 PushI
	var_112_int = 30610; // 0x2a2 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_113_int = 30611; // 0x2a6 PushI
	var_114_bool = var_36_bool == var_113_int; // 0x2a7 Eq
	if(var_114_bool == 0) goto Label_696; // 0x2a8 JumpB
	var_115_string = ""; // 0x2a9 PushV
	var_115_string = "Sorrow"; // 0x2aa MovS
	func_591(var_37_cvector, var_115_string); // 0x2ab NEW_2
	var_116_int = 529162; // 0x2ad PushI
	SetMessage(var_116_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_117_int = 529163; // 0x2b2 PushI
	var_118_int = 26627; // 0x2b3 PushI
	var_119_int = 30612; // 0x2b4 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_120_int = 30609; // 0x2b8 PushI
	var_121_bool = var_36_bool == var_120_int; // 0x2b9 Eq
	if(var_121_bool == 0) goto Label_714; // 0x2ba JumpB
	var_122_string = ""; // 0x2bb PushV
	var_122_string = "Smile"; // 0x2bc MovS
	func_591(var_37_cvector, var_122_string); // 0x2bd NEW_2
	var_123_int = 529160; // 0x2bf PushI
	SetMessage(var_123_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_124_int = 529164; // 0x2c4 PushI
	var_125_int = 26627; // 0x2c5 PushI
	var_126_int = 30613; // 0x2c6 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x2c7 TObjFunc
	return 0; // 0x2c9 Return
	
Label_714:
	var_127_int = 26627; // 0x2ca PushI
	var_128_bool = var_36_bool == var_127_int; // 0x2cb Eq
	if(var_128_bool == 0) goto Label_737; // 0x2cc JumpB
	var_129_string = ""; // 0x2cd PushV
	var_129_string = "Neutral"; // 0x2ce MovS
	func_591(var_37_cvector, var_129_string); // 0x2cf NEW_2
	var_130_int = 525259; // 0x2d1 PushI
	SetMessage(var_130_int); // 0x2d2 TObjFunc
	ClearReplies(); // 0x2d4 TObjFunc
	var_131_int = 525260; // 0x2d6 PushI
	var_132_int = -1; // 0x2d7 PushI
	var_133_int = 26628; // 0x2d8 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x2d9 TObjFunc
	var_134_int = 529166; // 0x2db PushI
	var_135_int = -1; // 0x2dc PushI
	var_136_int = 30616; // 0x2dd PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x2de TObjFunc
	return 0; // 0x2e0 Return
	
Label_737:
	var_3_string = 1; // 0x2e1 TMovB
	var_137_bool = 0; // 0x2e2 PushV
	func_3888(var_137_bool); // 0x2e3 NEW_2
	if(var_137_bool == 0) goto Label_745; // 0x2e5 JumpB
	lshStopAnimation(); // 0x2e6 Func
	goto Label_747; // 0x2e8 Jump
	
Label_747:
	return 0; // 0x2eb Return
	
Label_745:
	StopAnimation(); // 0x2e9 Func
	
Label_749:
	return 0; // 0x2ed Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x390 PushI
	if(var_38_int == 0) goto Label_988; // 0x391 JumpB
	func_3698(); // 0x393 NEW_2
	var_40_int = 26827; // 0x395 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x396 Eq
	if(var_41_bool == 0) goto Label_940; // 0x397 JumpB
	var_42_string = ""; // 0x398 PushV
	var_42_string = "Neutral"; // 0x399 MovS
	func_889(var_37_cvector, var_42_string); // 0x39a NEW_2
	var_59_int = 525471; // 0x39c PushI
	SetMessage(var_59_int); // 0x39d TObjFunc
	ClearReplies(); // 0x39f TObjFunc
	var_60_int = 525472; // 0x3a1 PushI
	var_61_int = 27550; // 0x3a2 PushI
	var_62_int = 26828; // 0x3a3 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x3a4 TObjFunc
	var_63_int = 526276; // 0x3a6 PushI
	var_64_int = 28085; // 0x3a7 PushI
	var_65_int = 27552; // 0x3a8 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_66_int = 28085; // 0x3ac PushI
	var_67_bool = var_36_bool == var_66_int; // 0x3ad Eq
	if(var_67_bool == 0) goto Label_958; // 0x3ae JumpB
	var_68_string = ""; // 0x3af PushV
	var_68_string = "Neutral"; // 0x3b0 MovS
	func_889(var_37_cvector, var_68_string); // 0x3b1 NEW_2
	var_69_int = 526805; // 0x3b3 PushI
	SetMessage(var_69_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_70_int = 526806; // 0x3b8 PushI
	var_71_int = -1; // 0x3b9 PushI
	var_72_int = 28086; // 0x3ba PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x3bb TObjFunc
	return 0; // 0x3bd Return
	
Label_958:
	var_73_int = 27550; // 0x3be PushI
	var_74_bool = var_36_bool == var_73_int; // 0x3bf Eq
	if(var_74_bool == 0) goto Label_976; // 0x3c0 JumpB
	var_75_string = ""; // 0x3c1 PushV
	var_75_string = "Neutral"; // 0x3c2 MovS
	func_889(var_37_cvector, var_75_string); // 0x3c3 NEW_2
	var_76_int = 526274; // 0x3c5 PushI
	SetMessage(var_76_int); // 0x3c6 TObjFunc
	ClearReplies(); // 0x3c8 TObjFunc
	var_77_int = 526275; // 0x3ca PushI
	var_78_int = -1; // 0x3cb PushI
	var_79_int = 27551; // 0x3cc PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x3cd TObjFunc
	return 0; // 0x3cf Return
	
Label_976:
	var_3_string = 1; // 0x3d0 TMovB
	var_80_bool = 0; // 0x3d1 PushV
	func_3888(var_80_bool); // 0x3d2 NEW_2
	if(var_80_bool == 0) goto Label_984; // 0x3d4 JumpB
	lshStopAnimation(); // 0x3d5 Func
	goto Label_986; // 0x3d7 Jump
	
Label_986:
	return 0; // 0x3da Return
	
Label_984:
	StopAnimation(); // 0x3d8 Func
	
Label_988:
	return 0; // 0x3dc Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x4d7 PushI
	if(var_38_int == 0) goto Label_1833; // 0x4d8 JumpB
	func_3698(); // 0x4da NEW_2
	var_40_int = 27656; // 0x4dc PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x4dd Eq
	if(var_41_bool == 0) goto Label_1267; // 0x4de JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x4df PushV
	var_42_object = var_1_object; // 0x4e0 MovT
	var_43_object = var_0_object; // 0x4e1 MovT
	func_3998(); // 0x4e2 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x4e4 PushV
	var_105_object = var_1_object; // 0x4e5 MovT
	var_106_object = var_0_object; // 0x4e6 MovT
	func_4081(); // 0x4e7 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x4e9 PushV
	var_109_object = var_1_object; // 0x4ea MovT
	var_110_object = var_0_object; // 0x4eb MovT
	func_4035(var_110_object); // 0x4ec NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x4ee PushV
	var_133_object = var_1_object; // 0x4ef MovT
	var_134_object = var_0_object; // 0x4f0 MovT
	func_3890(); // 0x4f1 NEW_2
	
Label_1267:
	var_159_int = 27454; // 0x4f3 PushI
	var_160_bool = var_37_cvector == var_159_int; // 0x4f4 Eq
	if(var_160_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x4f6 PushV
	var_161_object = var_1_object; // 0x4f7 MovT
	var_162_object = var_0_object; // 0x4f8 MovT
	func_3979(); // 0x4f9 NEW_2
	
Label_1275:
	var_165_int = 27456; // 0x4fb PushI
	var_166_bool = var_37_cvector == var_165_int; // 0x4fc Eq
	if(var_166_bool == 0) goto Label_1283; // 0x4fd JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x4fe PushV
	var_167_object = var_1_object; // 0x4ff MovT
	var_168_object = var_0_object; // 0x500 MovT
	func_3947(); // 0x501 NEW_2
	
Label_1283:
	var_188_int = 27460; // 0x503 PushI
	var_189_bool = var_37_cvector == var_188_int; // 0x504 Eq
	if(var_189_bool == 0) goto Label_1291; // 0x505 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x506 PushV
	var_190_object = var_1_object; // 0x507 MovT
	var_191_object = var_0_object; // 0x508 MovT
	func_3985(); // 0x509 NEW_2
	
Label_1291:
	var_206_int = 27660; // 0x50b PushI
	var_207_bool = var_37_cvector == var_206_int; // 0x50c Eq
	if(var_207_bool == 0) goto Label_1314; // 0x50d JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x50e PushV
	var_208_object = var_1_object; // 0x50f MovT
	var_209_object = var_0_object; // 0x510 MovT
	func_3998(); // 0x511 NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x513 PushV
	var_210_object = var_1_object; // 0x514 MovT
	var_211_object = var_0_object; // 0x515 MovT
	func_4035(var_211_object); // 0x516 NEW_2
	var_212_object = Obj(); var_213_object = Obj(); // 0x518 PushV
	var_212_object = var_1_object; // 0x519 MovT
	var_213_object = var_0_object; // 0x51a MovT
	func_4081(); // 0x51b NEW_2
	var_214_object = Obj(); var_215_object = Obj(); // 0x51d PushV
	var_214_object = var_1_object; // 0x51e MovT
	var_215_object = var_0_object; // 0x51f MovT
	func_3890(); // 0x520 NEW_2
	
Label_1314:
	var_216_int = 27669; // 0x522 PushI
	var_217_bool = var_37_cvector == var_216_int; // 0x523 Eq
	if(var_217_bool == 0) goto Label_1332; // 0x524 JumpB
	var_218_object = Obj(); var_219_object = Obj(); // 0x525 PushV
	var_218_object = var_1_object; // 0x526 MovT
	var_219_object = var_0_object; // 0x527 MovT
	func_4046(); // 0x528 NEW_2
	var_231_object = Obj(); var_232_object = Obj(); // 0x52a PushV
	var_231_object = var_1_object; // 0x52b MovT
	var_232_object = var_0_object; // 0x52c MovT
	func_4056(var_232_object); // 0x52d NEW_2
	var_249_object = Obj(); var_250_object = Obj(); // 0x52f PushV
	var_249_object = var_1_object; // 0x530 MovT
	var_250_object = var_0_object; // 0x531 MovT
	func_4075(); // 0x532 NEW_2
	
Label_1332:
	var_253_int = 44880; // 0x534 PushI
	var_254_bool = var_37_cvector == var_253_int; // 0x535 Eq
	if(var_254_bool == 0) goto Label_1340; // 0x536 JumpB
	var_255_object = Obj(); var_256_object = Obj(); // 0x537 PushV
	var_255_object = var_1_object; // 0x538 MovT
	var_256_object = var_0_object; // 0x539 MovT
	func_4046(); // 0x53a NEW_2
	
Label_1340:
	var_257_int = 27653; // 0x53c PushI
	var_258_bool = var_36_bool == var_257_int; // 0x53d Eq
	if(var_258_bool == 0) goto Label_1451; // 0x53e JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x53f PushV
	var_260_object = var_1_object; // 0x540 MovT
	func_4241(var_260_object); // 0x541 NEW_2
	if(var_259_bool == 0) goto Label_1373; // 0x543 JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0x544 PushV
	var_265_object = var_1_object; // 0x545 MovT
	var_266_object = var_0_object; // 0x546 MovT
	func_4029(); // 0x547 NEW_2
	var_269_string = ""; // 0x549 PushV
	var_269_string = "Neutral"; // 0x54a MovS
	func_1216(var_37_cvector, var_269_string); // 0x54b NEW_2
	var_286_int = 526373; // 0x54d PushI
	SetMessage(var_286_int); // 0x54e TObjFunc
	ClearReplies(); // 0x550 TObjFunc
	var_287_int = 526374; // 0x552 PushI
	var_288_int = 27655; // 0x553 PushI
	var_289_int = 27654; // 0x554 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x555 TObjFunc
	var_290_int = 528676; // 0x557 PushI
	var_291_int = 27655; // 0x558 PushI
	var_292_int = 30089; // 0x559 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x55a TObjFunc
	return 0; // 0x55c Return
	
Label_1373:
	var_293_string = ""; // 0x55d PushV
	var_293_string = "Neutral"; // 0x55e MovS
	func_1216(var_37_cvector, var_293_string); // 0x55f NEW_2
	var_294_int = 526173; // 0x561 PushI
	SetMessage(var_294_int); // 0x562 TObjFunc
	ClearReplies(); // 0x564 TObjFunc
	var_295_bool = 0; // 0x566 PushV
	var_295_bool = 0; // 0x567 MovB
	var_296_bool = 0; var_297_object = Obj(); // 0x568 PushV
	var_297_object = var_1_object; // 0x569 MovT
	func_4205(var_297_object); // 0x56a NEW_2
	if(var_296_bool == 0) goto Label_1395; // 0x56c JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x56d PushV
	var_303_object = var_1_object; // 0x56e MovT
	func_4217(var_303_object); // 0x56f NEW_2
	if(var_302_bool == 0) goto Label_1395; // 0x571 JumpB
	var_295_bool = 1; // 0x572 MovB
	
Label_1395:
	if(var_295_bool == 0) goto Label_1401; // 0x573 JumpB
	var_308_int = 526174; // 0x574 PushI
	var_309_int = 27455; // 0x575 PushI
	var_310_int = 27454; // 0x576 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x577 TObjFunc
	
Label_1401:
	var_311_bool = 0; // 0x579 PushV
	var_311_bool = 0; // 0x57a MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x57b PushV
	var_313_object = var_1_object; // 0x57c MovT
	func_4205(var_313_object); // 0x57d NEW_2
	if(var_312_bool == 0) goto Label_1414; // 0x57f JumpB
	var_314_bool = 0; var_315_object = Obj(); // 0x580 PushV
	var_315_object = var_1_object; // 0x581 MovT
	func_4194(var_314_bool, var_315_object); // 0x582 NEW_2
	if(var_314_bool == 0) goto Label_1414; // 0x584 JumpB
	var_311_bool = 1; // 0x585 MovB
	
Label_1414:
	if(var_311_bool == 0) goto Label_1420; // 0x586 JumpB
	var_323_int = 526178; // 0x587 PushI
	var_324_int = 27459; // 0x588 PushI
	var_325_int = 27458; // 0x589 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x58a TObjFunc
	
Label_1420:
	var_326_bool = 0; var_327_object = Obj(); // 0x58c PushV
	var_327_object = var_1_object; // 0x58d MovT
	func_4229(var_327_object); // 0x58e NEW_2
	if(var_326_bool == 0) goto Label_1430; // 0x590 JumpB
	var_332_int = 526378; // 0x591 PushI
	var_333_int = 27659; // 0x592 PushI
	var_334_int = 27658; // 0x593 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x594 TObjFunc
	
Label_1430:
	var_335_bool = 0; var_336_object = Obj(); // 0x596 PushV
	var_336_object = var_1_object; // 0x597 MovT
	func_4253(var_336_object); // 0x598 NEW_2
	if(var_335_bool == 0) goto Label_1440; // 0x59a JumpB
	var_341_int = 526387; // 0x59b PushI
	var_342_int = 44876; // 0x59c PushI
	var_343_int = 27667; // 0x59d PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x59e TObjFunc
	
Label_1440:
	var_344_int = 526181; // 0x5a0 PushI
	var_345_int = -1; // 0x5a1 PushI
	var_346_int = 27461; // 0x5a2 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x5a3 TObjFunc
	var_347_int = 528675; // 0x5a5 PushI
	var_348_int = -1; // 0x5a6 PushI
	var_349_int = 30088; // 0x5a7 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x5a8 TObjFunc
	return 0; // 0x5aa Return
	
Label_1451:
	var_350_int = 44876; // 0x5ab PushI
	var_351_bool = var_36_bool == var_350_int; // 0x5ac Eq
	if(var_351_bool == 0) goto Label_1474; // 0x5ad JumpB
	var_352_string = ""; // 0x5ae PushV
	var_352_string = "Sorrow"; // 0x5af MovS
	func_1216(var_37_cvector, var_352_string); // 0x5b0 NEW_2
	var_353_int = 542490; // 0x5b2 PushI
	SetMessage(var_353_int); // 0x5b3 TObjFunc
	ClearReplies(); // 0x5b5 TObjFunc
	var_354_int = 542491; // 0x5b7 PushI
	var_355_int = 27668; // 0x5b8 PushI
	var_356_int = 44877; // 0x5b9 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x5ba TObjFunc
	var_357_int = 542492; // 0x5bc PushI
	var_358_int = 27668; // 0x5bd PushI
	var_359_int = 44878; // 0x5be PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x5bf TObjFunc
	return 0; // 0x5c1 Return
	
Label_1474:
	var_360_int = 27668; // 0x5c2 PushI
	var_361_bool = var_36_bool == var_360_int; // 0x5c3 Eq
	if(var_361_bool == 0) goto Label_1497; // 0x5c4 JumpB
	var_362_string = ""; // 0x5c5 PushV
	var_362_string = "Smile"; // 0x5c6 MovS
	func_1216(var_37_cvector, var_362_string); // 0x5c7 NEW_2
	var_363_int = 526388; // 0x5c9 PushI
	SetMessage(var_363_int); // 0x5ca TObjFunc
	ClearReplies(); // 0x5cc TObjFunc
	var_364_int = 526389; // 0x5ce PushI
	var_365_int = -1; // 0x5cf PushI
	var_366_int = 27669; // 0x5d0 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x5d1 TObjFunc
	var_367_int = 542493; // 0x5d3 PushI
	var_368_int = -1; // 0x5d4 PushI
	var_369_int = 44880; // 0x5d5 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x5d6 TObjFunc
	return 0; // 0x5d8 Return
	
Label_1497:
	var_370_int = 27659; // 0x5d9 PushI
	var_371_bool = var_36_bool == var_370_int; // 0x5da Eq
	if(var_371_bool == 0) goto Label_1515; // 0x5db JumpB
	var_372_string = ""; // 0x5dc PushV
	var_372_string = "Neutral"; // 0x5dd MovS
	func_1216(var_37_cvector, var_372_string); // 0x5de NEW_2
	var_373_int = 526379; // 0x5e0 PushI
	SetMessage(var_373_int); // 0x5e1 TObjFunc
	ClearReplies(); // 0x5e3 TObjFunc
	var_374_int = 526380; // 0x5e5 PushI
	var_375_int = -1; // 0x5e6 PushI
	var_376_int = 27660; // 0x5e7 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x5e8 TObjFunc
	return 0; // 0x5ea Return
	
Label_1515:
	var_377_int = 27459; // 0x5eb PushI
	var_378_bool = var_36_bool == var_377_int; // 0x5ec Eq
	if(var_378_bool == 0) goto Label_1533; // 0x5ed JumpB
	var_379_string = ""; // 0x5ee PushV
	var_379_string = "Neutral"; // 0x5ef MovS
	func_1216(var_37_cvector, var_379_string); // 0x5f0 NEW_2
	var_380_int = 526179; // 0x5f2 PushI
	SetMessage(var_380_int); // 0x5f3 TObjFunc
	ClearReplies(); // 0x5f5 TObjFunc
	var_381_int = 528687; // 0x5f7 PushI
	var_382_int = 30103; // 0x5f8 PushI
	var_383_int = 30102; // 0x5f9 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x5fa TObjFunc
	return 0; // 0x5fc Return
	
Label_1533:
	var_384_int = 30103; // 0x5fd PushI
	var_385_bool = var_36_bool == var_384_int; // 0x5fe Eq
	if(var_385_bool == 0) goto Label_1551; // 0x5ff JumpB
	var_386_string = ""; // 0x600 PushV
	var_386_string = "Doubt"; // 0x601 MovS
	func_1216(var_37_cvector, var_386_string); // 0x602 NEW_2
	var_387_int = 528688; // 0x604 PushI
	SetMessage(var_387_int); // 0x605 TObjFunc
	ClearReplies(); // 0x607 TObjFunc
	var_388_int = 528689; // 0x609 PushI
	var_389_int = 30105; // 0x60a PushI
	var_390_int = 30104; // 0x60b PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x60c TObjFunc
	return 0; // 0x60e Return
	
Label_1551:
	var_391_int = 30105; // 0x60f PushI
	var_392_bool = var_36_bool == var_391_int; // 0x610 Eq
	if(var_392_bool == 0) goto Label_1574; // 0x611 JumpB
	var_393_string = ""; // 0x612 PushV
	var_393_string = "Sorrow"; // 0x613 MovS
	func_1216(var_37_cvector, var_393_string); // 0x614 NEW_2
	var_394_int = 528690; // 0x616 PushI
	SetMessage(var_394_int); // 0x617 TObjFunc
	ClearReplies(); // 0x619 TObjFunc
	var_395_int = 528691; // 0x61b PushI
	var_396_int = 30107; // 0x61c PushI
	var_397_int = 30106; // 0x61d PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x61e TObjFunc
	var_398_int = 528697; // 0x620 PushI
	var_399_int = 30113; // 0x621 PushI
	var_400_int = 30112; // 0x622 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x623 TObjFunc
	return 0; // 0x625 Return
	
Label_1574:
	var_401_int = 30113; // 0x626 PushI
	var_402_bool = var_36_bool == var_401_int; // 0x627 Eq
	if(var_402_bool == 0) goto Label_1592; // 0x628 JumpB
	var_403_string = ""; // 0x629 PushV
	var_403_string = "Neutral"; // 0x62a MovS
	func_1216(var_37_cvector, var_403_string); // 0x62b NEW_2
	var_404_int = 528698; // 0x62d PushI
	SetMessage(var_404_int); // 0x62e TObjFunc
	ClearReplies(); // 0x630 TObjFunc
	var_405_int = 528699; // 0x632 PushI
	var_406_int = 30107; // 0x633 PushI
	var_407_int = 30114; // 0x634 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x635 TObjFunc
	return 0; // 0x637 Return
	
Label_1592:
	var_408_int = 30107; // 0x638 PushI
	var_409_bool = var_36_bool == var_408_int; // 0x639 Eq
	if(var_409_bool == 0) goto Label_1610; // 0x63a JumpB
	var_410_string = ""; // 0x63b PushV
	var_410_string = "Neutral"; // 0x63c MovS
	func_1216(var_37_cvector, var_410_string); // 0x63d NEW_2
	var_411_int = 528692; // 0x63f PushI
	SetMessage(var_411_int); // 0x640 TObjFunc
	ClearReplies(); // 0x642 TObjFunc
	var_412_int = 528693; // 0x644 PushI
	var_413_int = 30109; // 0x645 PushI
	var_414_int = 30108; // 0x646 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_415_int = 30109; // 0x64a PushI
	var_416_bool = var_36_bool == var_415_int; // 0x64b Eq
	if(var_416_bool == 0) goto Label_1633; // 0x64c JumpB
	var_417_string = ""; // 0x64d PushV
	var_417_string = "Doubt"; // 0x64e MovS
	func_1216(var_37_cvector, var_417_string); // 0x64f NEW_2
	var_418_int = 528694; // 0x651 PushI
	SetMessage(var_418_int); // 0x652 TObjFunc
	ClearReplies(); // 0x654 TObjFunc
	var_419_int = 528702; // 0x656 PushI
	var_420_int = 30118; // 0x657 PushI
	var_421_int = 30117; // 0x658 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x659 TObjFunc
	var_422_int = 528700; // 0x65b PushI
	var_423_int = 30116; // 0x65c PushI
	var_424_int = 30115; // 0x65d PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x65e TObjFunc
	return 0; // 0x660 Return
	
Label_1633:
	var_425_int = 30116; // 0x661 PushI
	var_426_bool = var_36_bool == var_425_int; // 0x662 Eq
	if(var_426_bool == 0) goto Label_1651; // 0x663 JumpB
	var_427_string = ""; // 0x664 PushV
	var_427_string = "Neutral"; // 0x665 MovS
	func_1216(var_37_cvector, var_427_string); // 0x666 NEW_2
	var_428_int = 528701; // 0x668 PushI
	SetMessage(var_428_int); // 0x669 TObjFunc
	ClearReplies(); // 0x66b TObjFunc
	var_429_int = 528704; // 0x66d PushI
	var_430_int = 30118; // 0x66e PushI
	var_431_int = 30119; // 0x66f PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_432_int = 30118; // 0x673 PushI
	var_433_bool = var_36_bool == var_432_int; // 0x674 Eq
	if(var_433_bool == 0) goto Label_1669; // 0x675 JumpB
	var_434_string = ""; // 0x676 PushV
	var_434_string = "Doubt"; // 0x677 MovS
	func_1216(var_37_cvector, var_434_string); // 0x678 NEW_2
	var_435_int = 528703; // 0x67a PushI
	SetMessage(var_435_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_436_int = 528695; // 0x67f PushI
	var_437_int = 30111; // 0x680 PushI
	var_438_int = 30110; // 0x681 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x682 TObjFunc
	return 0; // 0x684 Return
	
Label_1669:
	var_439_int = 30111; // 0x685 PushI
	var_440_bool = var_36_bool == var_439_int; // 0x686 Eq
	if(var_440_bool == 0) goto Label_1687; // 0x687 JumpB
	var_441_string = ""; // 0x688 PushV
	var_441_string = "Doubt"; // 0x689 MovS
	func_1216(var_37_cvector, var_441_string); // 0x68a NEW_2
	var_442_int = 528696; // 0x68c PushI
	SetMessage(var_442_int); // 0x68d TObjFunc
	ClearReplies(); // 0x68f TObjFunc
	var_443_int = 526180; // 0x691 PushI
	var_444_int = -1; // 0x692 PushI
	var_445_int = 27460; // 0x693 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x694 TObjFunc
	return 0; // 0x696 Return
	
Label_1687:
	var_446_int = 27455; // 0x697 PushI
	var_447_bool = var_36_bool == var_446_int; // 0x698 Eq
	if(var_447_bool == 0) goto Label_1705; // 0x699 JumpB
	var_448_string = ""; // 0x69a PushV
	var_448_string = "Sorrow"; // 0x69b MovS
	func_1216(var_37_cvector, var_448_string); // 0x69c NEW_2
	var_449_int = 526175; // 0x69e PushI
	SetMessage(var_449_int); // 0x69f TObjFunc
	ClearReplies(); // 0x6a1 TObjFunc
	var_450_int = 528685; // 0x6a3 PushI
	var_451_int = 30101; // 0x6a4 PushI
	var_452_int = 30100; // 0x6a5 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x6a6 TObjFunc
	return 0; // 0x6a8 Return
	
Label_1705:
	var_453_int = 30101; // 0x6a9 PushI
	var_454_bool = var_36_bool == var_453_int; // 0x6aa Eq
	if(var_454_bool == 0) goto Label_1739; // 0x6ab JumpB
	var_455_string = ""; // 0x6ac PushV
	var_455_string = "Sorrow"; // 0x6ad MovS
	func_1216(var_37_cvector, var_455_string); // 0x6ae NEW_2
	var_456_int = 528686; // 0x6b0 PushI
	SetMessage(var_456_int); // 0x6b1 TObjFunc
	ClearReplies(); // 0x6b3 TObjFunc
	var_457_bool = 0; var_458_object = Obj(); // 0x6b5 PushV
	var_458_object = var_1_object; // 0x6b6 MovT
	func_4194(var_457_bool, var_458_object); // 0x6b7 NEW_2
	var_459_bool = var_457_bool == 0; // 0x6b9 Not
	if(var_459_bool == 0) goto Label_1728; // 0x6ba JumpB
	var_460_int = 526176; // 0x6bb PushI
	var_461_int = -1; // 0x6bc PushI
	var_462_int = 27456; // 0x6bd PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x6be TObjFunc
	
Label_1728:
	var_463_bool = 0; var_464_object = Obj(); // 0x6c0 PushV
	var_464_object = var_1_object; // 0x6c1 MovT
	func_4194(var_463_bool, var_464_object); // 0x6c2 NEW_2
	if(var_463_bool == 0) goto Label_1738; // 0x6c4 JumpB
	var_465_int = 526177; // 0x6c5 PushI
	var_466_int = 27459; // 0x6c6 PushI
	var_467_int = 27457; // 0x6c7 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x6c8 TObjFunc
	
Label_1738:
	return 0; // 0x6ca Return
	
Label_1739:
	var_468_int = 27655; // 0x6cb PushI
	var_469_bool = var_36_bool == var_468_int; // 0x6cc Eq
	if(var_469_bool == 0) goto Label_1757; // 0x6cd JumpB
	var_470_string = ""; // 0x6ce PushV
	var_470_string = "Neutral"; // 0x6cf MovS
	func_1216(var_37_cvector, var_470_string); // 0x6d0 NEW_2
	var_471_int = 526375; // 0x6d2 PushI
	SetMessage(var_471_int); // 0x6d3 TObjFunc
	ClearReplies(); // 0x6d5 TObjFunc
	var_472_int = 528677; // 0x6d7 PushI
	var_473_int = 30092; // 0x6d8 PushI
	var_474_int = 30091; // 0x6d9 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x6da TObjFunc
	return 0; // 0x6dc Return
	
Label_1757:
	var_475_int = 30092; // 0x6dd PushI
	var_476_bool = var_36_bool == var_475_int; // 0x6de Eq
	if(var_476_bool == 0) goto Label_1780; // 0x6df JumpB
	var_477_string = ""; // 0x6e0 PushV
	var_477_string = "Doubt"; // 0x6e1 MovS
	func_1216(var_37_cvector, var_477_string); // 0x6e2 NEW_2
	var_478_int = 528678; // 0x6e4 PushI
	SetMessage(var_478_int); // 0x6e5 TObjFunc
	ClearReplies(); // 0x6e7 TObjFunc
	var_479_int = 528679; // 0x6e9 PushI
	var_480_int = 30094; // 0x6ea PushI
	var_481_int = 30093; // 0x6eb PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x6ec TObjFunc
	var_482_int = 528681; // 0x6ee PushI
	var_483_int = 30094; // 0x6ef PushI
	var_484_int = 30095; // 0x6f0 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_485_int = 30094; // 0x6f4 PushI
	var_486_bool = var_36_bool == var_485_int; // 0x6f5 Eq
	if(var_486_bool == 0) goto Label_1798; // 0x6f6 JumpB
	var_487_string = ""; // 0x6f7 PushV
	var_487_string = "Doubt"; // 0x6f8 MovS
	func_1216(var_37_cvector, var_487_string); // 0x6f9 NEW_2
	var_488_int = 528680; // 0x6fb PushI
	SetMessage(var_488_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_489_int = 528682; // 0x700 PushI
	var_490_int = 30098; // 0x701 PushI
	var_491_int = 30097; // 0x702 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_492_int = 30098; // 0x706 PushI
	var_493_bool = var_36_bool == var_492_int; // 0x707 Eq
	if(var_493_bool == 0) goto Label_1821; // 0x708 JumpB
	var_494_string = ""; // 0x709 PushV
	var_494_string = "Neutral"; // 0x70a MovS
	func_1216(var_37_cvector, var_494_string); // 0x70b NEW_2
	var_495_int = 528683; // 0x70d PushI
	SetMessage(var_495_int); // 0x70e TObjFunc
	ClearReplies(); // 0x710 TObjFunc
	var_496_int = 526376; // 0x712 PushI
	var_497_int = -1; // 0x713 PushI
	var_498_int = 27656; // 0x714 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x715 TObjFunc
	var_499_int = 526377; // 0x717 PushI
	var_500_int = -1; // 0x718 PushI
	var_501_int = 27657; // 0x719 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x71a TObjFunc
	return 0; // 0x71c Return
	
Label_1821:
	var_3_string = 1; // 0x71d TMovB
	var_502_bool = 0; // 0x71e PushV
	func_3888(var_502_bool); // 0x71f NEW_2
	if(var_502_bool == 0) goto Label_1829; // 0x721 JumpB
	lshStopAnimation(); // 0x722 Func
	goto Label_1831; // 0x724 Jump
	
Label_1831:
	return 0; // 0x727 Return
	
Label_1829:
	StopAnimation(); // 0x725 Func
	
Label_1833:
	return 0; // 0x729 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x7d6 PushI
	if(var_38_int == 0) goto Label_2210; // 0x7d7 JumpB
	func_3698(); // 0x7d9 NEW_2
	var_40_int = 28885; // 0x7db PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x7dc Eq
	if(var_41_bool == 0) goto Label_2024; // 0x7dd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x7de PushV
	var_42_object = var_1_object; // 0x7df MovT
	var_43_object = var_0_object; // 0x7e0 MovT
	func_4066(); // 0x7e1 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0x7e3 PushV
	var_69_object = var_1_object; // 0x7e4 MovT
	var_70_object = var_0_object; // 0x7e5 MovT
	func_3906(); // 0x7e6 NEW_2
	
Label_2024:
	var_81_int = 28512; // 0x7e8 PushI
	var_82_bool = var_36_bool == var_81_int; // 0x7e9 Eq
	if(var_82_bool == 0) goto Label_2057; // 0x7ea JumpB
	var_83_string = ""; // 0x7eb PushV
	var_83_string = "Neutral"; // 0x7ec MovS
	func_1983(var_37_cvector, var_83_string); // 0x7ed NEW_2
	var_100_int = 527204; // 0x7ef PushI
	SetMessage(var_100_int); // 0x7f0 TObjFunc
	ClearReplies(); // 0x7f2 TObjFunc
	var_101_bool = 0; var_102_object = Obj(); // 0x7f4 PushV
	var_102_object = var_1_object; // 0x7f5 MovT
	func_4265(var_102_object); // 0x7f6 NEW_2
	if(var_101_bool == 0) goto Label_2046; // 0x7f8 JumpB
	var_109_int = 527205; // 0x7f9 PushI
	var_110_int = 28514; // 0x7fa PushI
	var_111_int = 28513; // 0x7fb PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x7fc TObjFunc
	
Label_2046:
	var_112_int = 527210; // 0x7fe PushI
	var_113_int = -1; // 0x7ff PushI
	var_114_int = 28518; // 0x800 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x801 TObjFunc
	var_115_int = 527533; // 0x803 PushI
	var_116_int = -1; // 0x804 PushI
	var_117_int = 28871; // 0x805 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x806 TObjFunc
	return 0; // 0x808 Return
	
Label_2057:
	var_118_int = 28514; // 0x809 PushI
	var_119_bool = var_36_bool == var_118_int; // 0x80a Eq
	if(var_119_bool == 0) goto Label_2075; // 0x80b JumpB
	var_120_string = ""; // 0x80c PushV
	var_120_string = "Sorrow"; // 0x80d MovS
	func_1983(var_37_cvector, var_120_string); // 0x80e NEW_2
	var_121_int = 527206; // 0x810 PushI
	SetMessage(var_121_int); // 0x811 TObjFunc
	ClearReplies(); // 0x813 TObjFunc
	var_122_int = 527207; // 0x815 PushI
	var_123_int = 28516; // 0x816 PushI
	var_124_int = 28515; // 0x817 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x818 TObjFunc
	return 0; // 0x81a Return
	
Label_2075:
	var_125_int = 28516; // 0x81b PushI
	var_126_bool = var_36_bool == var_125_int; // 0x81c Eq
	if(var_126_bool == 0) goto Label_2098; // 0x81d JumpB
	var_127_string = ""; // 0x81e PushV
	var_127_string = "Doubt"; // 0x81f MovS
	func_1983(var_37_cvector, var_127_string); // 0x820 NEW_2
	var_128_int = 527208; // 0x822 PushI
	SetMessage(var_128_int); // 0x823 TObjFunc
	ClearReplies(); // 0x825 TObjFunc
	var_129_int = 527534; // 0x827 PushI
	var_130_int = 28874; // 0x828 PushI
	var_131_int = 28872; // 0x829 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x82a TObjFunc
	var_132_int = 527535; // 0x82c PushI
	var_133_int = 28874; // 0x82d PushI
	var_134_int = 28873; // 0x82e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x82f TObjFunc
	return 0; // 0x831 Return
	
Label_2098:
	var_135_int = 28874; // 0x832 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x833 Eq
	if(var_136_bool == 0) goto Label_2121; // 0x834 JumpB
	var_137_string = ""; // 0x835 PushV
	var_137_string = "Doubt"; // 0x836 MovS
	func_1983(var_37_cvector, var_137_string); // 0x837 NEW_2
	var_138_int = 527536; // 0x839 PushI
	SetMessage(var_138_int); // 0x83a TObjFunc
	ClearReplies(); // 0x83c TObjFunc
	var_139_int = 527537; // 0x83e PushI
	var_140_int = 28876; // 0x83f PushI
	var_141_int = 28875; // 0x840 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x841 TObjFunc
	var_142_int = 527539; // 0x843 PushI
	var_143_int = 28876; // 0x844 PushI
	var_144_int = 28878; // 0x845 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x846 TObjFunc
	return 0; // 0x848 Return
	
Label_2121:
	var_145_int = 28876; // 0x849 PushI
	var_146_bool = var_36_bool == var_145_int; // 0x84a Eq
	if(var_146_bool == 0) goto Label_2139; // 0x84b JumpB
	var_147_string = ""; // 0x84c PushV
	var_147_string = "Doubt"; // 0x84d MovS
	func_1983(var_37_cvector, var_147_string); // 0x84e NEW_2
	var_148_int = 527538; // 0x850 PushI
	SetMessage(var_148_int); // 0x851 TObjFunc
	ClearReplies(); // 0x853 TObjFunc
	var_149_int = 527540; // 0x855 PushI
	var_150_int = 28881; // 0x856 PushI
	var_151_int = 28880; // 0x857 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x858 TObjFunc
	return 0; // 0x85a Return
	
Label_2139:
	var_152_int = 28881; // 0x85b PushI
	var_153_bool = var_36_bool == var_152_int; // 0x85c Eq
	if(var_153_bool == 0) goto Label_2157; // 0x85d JumpB
	var_154_string = ""; // 0x85e PushV
	var_154_string = "Sorrow"; // 0x85f MovS
	func_1983(var_37_cvector, var_154_string); // 0x860 NEW_2
	var_155_int = 527541; // 0x862 PushI
	SetMessage(var_155_int); // 0x863 TObjFunc
	ClearReplies(); // 0x865 TObjFunc
	var_156_int = 527542; // 0x867 PushI
	var_157_int = 28883; // 0x868 PushI
	var_158_int = 28882; // 0x869 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x86a TObjFunc
	return 0; // 0x86c Return
	
Label_2157:
	var_159_int = 28883; // 0x86d PushI
	var_160_bool = var_36_bool == var_159_int; // 0x86e Eq
	if(var_160_bool == 0) goto Label_2180; // 0x86f JumpB
	var_161_string = ""; // 0x870 PushV
	var_161_string = "Sorrow"; // 0x871 MovS
	func_1983(var_37_cvector, var_161_string); // 0x872 NEW_2
	var_162_int = 527543; // 0x874 PushI
	SetMessage(var_162_int); // 0x875 TObjFunc
	ClearReplies(); // 0x877 TObjFunc
	var_163_int = 527209; // 0x879 PushI
	var_164_int = 28884; // 0x87a PushI
	var_165_int = 28517; // 0x87b PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x87c TObjFunc
	var_166_int = 527546; // 0x87e PushI
	var_167_int = 28884; // 0x87f PushI
	var_168_int = 28886; // 0x880 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x881 TObjFunc
	return 0; // 0x883 Return
	
Label_2180:
	var_169_int = 28884; // 0x884 PushI
	var_170_bool = var_36_bool == var_169_int; // 0x885 Eq
	if(var_170_bool == 0) goto Label_2198; // 0x886 JumpB
	var_171_string = ""; // 0x887 PushV
	var_171_string = "Smile"; // 0x888 MovS
	func_1983(var_37_cvector, var_171_string); // 0x889 NEW_2
	var_172_int = 527544; // 0x88b PushI
	SetMessage(var_172_int); // 0x88c TObjFunc
	ClearReplies(); // 0x88e TObjFunc
	var_173_int = 527545; // 0x890 PushI
	var_174_int = -1; // 0x891 PushI
	var_175_int = 28885; // 0x892 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x893 TObjFunc
	return 0; // 0x895 Return
	
Label_2198:
	var_3_string = 1; // 0x896 TMovB
	var_176_bool = 0; // 0x897 PushV
	func_3888(var_176_bool); // 0x898 NEW_2
	if(var_176_bool == 0) goto Label_2206; // 0x89a JumpB
	lshStopAnimation(); // 0x89b Func
	goto Label_2208; // 0x89d Jump
	
Label_2208:
	return 0; // 0x8a0 Return
	
Label_2206:
	StopAnimation(); // 0x89e Func
	
Label_2210:
	return 0; // 0x8a2 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x990 PushI
	if(var_38_int == 0) goto Label_2928; // 0x991 JumpB
	func_3698(); // 0x993 NEW_2
	var_40_int = 41268; // 0x995 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x996 Eq
	if(var_41_bool == 0) goto Label_2461; // 0x997 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x998 PushV
	var_42_object = var_1_object; // 0x999 MovT
	var_43_object = var_0_object; // 0x99a MovT
	func_4102(); // 0x99b NEW_2
	
Label_2461:
	var_75_int = 41271; // 0x99d PushI
	var_76_bool = var_37_cvector == var_75_int; // 0x99e Eq
	if(var_76_bool == 0) goto Label_2469; // 0x99f JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x9a0 PushV
	var_77_object = var_1_object; // 0x9a1 MovT
	var_78_object = var_0_object; // 0x9a2 MovT
	func_4093(); // 0x9a3 NEW_2
	
Label_2469:
	var_89_int = 41278; // 0x9a5 PushI
	var_90_bool = var_37_cvector == var_89_int; // 0x9a6 Eq
	if(var_90_bool == 0) goto Label_2477; // 0x9a7 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x9a8 PushV
	var_91_object = var_1_object; // 0x9a9 MovT
	var_92_object = var_0_object; // 0x9aa MovT
	func_4093(); // 0x9ab NEW_2
	
Label_2477:
	var_93_int = 41261; // 0x9ad PushI
	var_94_bool = var_36_bool == var_93_int; // 0x9ae Eq
	if(var_94_bool == 0) goto Label_2575; // 0x9af JumpB
	var_95_bool = 0; // 0x9b0 PushV
	var_95_bool = 0; // 0x9b1 MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x9b2 PushV
	var_97_object = var_1_object; // 0x9b3 MovT
	func_4301(var_97_object); // 0x9b4 NEW_2
	if(var_96_bool == 0) goto Label_2494; // 0x9b6 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x9b7 PushV
	var_103_object = var_1_object; // 0x9b8 MovT
	func_4134(var_103_object); // 0x9b9 NEW_2
	var_108_bool = var_102_bool == 0; // 0x9bb Not
	if(var_108_bool == 0) goto Label_2494; // 0x9bc JumpB
	var_95_bool = 1; // 0x9bd MovB
	
Label_2494:
	if(var_95_bool == 0) goto Label_2525; // 0x9be JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x9bf PushV
	var_109_object = var_1_object; // 0x9c0 MovT
	var_110_object = var_0_object; // 0x9c1 MovT
	func_4087(); // 0x9c2 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x9c4 PushV
	var_113_object = var_1_object; // 0x9c5 MovT
	var_114_object = var_0_object; // 0x9c6 MovT
	func_4118(); // 0x9c7 NEW_2
	var_117_string = ""; // 0x9c9 PushV
	var_117_string = "Neutral"; // 0x9ca MovS
	func_2425(var_37_cvector, var_117_string); // 0x9cb NEW_2
	var_134_int = 539318; // 0x9cd PushI
	SetMessage(var_134_int); // 0x9ce TObjFunc
	ClearReplies(); // 0x9d0 TObjFunc
	var_135_int = 541446; // 0x9d2 PushI
	var_136_int = 45384; // 0x9d3 PushI
	var_137_int = 43602; // 0x9d4 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x9d5 TObjFunc
	var_138_int = 542944; // 0x9d7 PushI
	var_139_int = 45384; // 0x9d8 PushI
	var_140_int = 45383; // 0x9d9 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x9da TObjFunc
	return 0; // 0x9dc Return
	
Label_2525:
	var_141_object = Obj(); var_142_object = Obj(); // 0x9dd PushV
	var_141_object = var_1_object; // 0x9de MovT
	var_142_object = var_0_object; // 0x9df MovT
	func_4118(); // 0x9e0 NEW_2
	var_143_string = ""; // 0x9e2 PushV
	var_143_string = "Neutral"; // 0x9e3 MovS
	func_2425(var_37_cvector, var_143_string); // 0x9e4 NEW_2
	var_144_int = 539331; // 0x9e6 PushI
	SetMessage(var_144_int); // 0x9e7 TObjFunc
	ClearReplies(); // 0x9e9 TObjFunc
	var_145_bool = 0; // 0x9eb PushV
	var_145_bool = 0; // 0x9ec MovB
	var_146_bool = 0; // 0x9ed PushV
	var_146_bool = 0; // 0x9ee MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x9ef PushV
	var_148_object = var_1_object; // 0x9f0 MovT
	func_4124(var_147_bool, var_148_object); // 0x9f1 NEW_2
	if(var_147_bool == 0) goto Label_2555; // 0x9f3 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x9f4 PushV
	var_197_object = var_1_object; // 0x9f5 MovT
	func_4289(var_197_object); // 0x9f6 NEW_2
	var_202_bool = var_196_bool == 0; // 0x9f8 Not
	if(var_202_bool == 0) goto Label_2555; // 0x9f9 JumpB
	var_146_bool = 1; // 0x9fa MovB
	
Label_2555:
	if(var_146_bool == 0) goto Label_2563; // 0x9fb JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x9fc PushV
	var_204_object = var_1_object; // 0x9fd MovT
	func_4134(var_204_object); // 0x9fe NEW_2
	var_205_bool = var_203_bool == 0; // 0xa00 Not
	if(var_205_bool == 0) goto Label_2563; // 0xa01 JumpB
	var_145_bool = 1; // 0xa02 MovB
	
Label_2563:
	if(var_145_bool == 0) goto Label_2569; // 0xa03 JumpB
	var_206_int = 539332; // 0xa04 PushI
	var_207_int = 41277; // 0xa05 PushI
	var_208_int = 41276; // 0xa06 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xa07 TObjFunc
	
Label_2569:
	var_209_int = 539335; // 0xa09 PushI
	var_210_int = -1; // 0xa0a PushI
	var_211_int = 41279; // 0xa0b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xa0c TObjFunc
	return 0; // 0xa0e Return
	
Label_2575:
	var_212_int = 41277; // 0xa0f PushI
	var_213_bool = var_36_bool == var_212_int; // 0xa10 Eq
	if(var_213_bool == 0) goto Label_2593; // 0xa11 JumpB
	var_214_string = ""; // 0xa12 PushV
	var_214_string = "Doubt"; // 0xa13 MovS
	func_2425(var_37_cvector, var_214_string); // 0xa14 NEW_2
	var_215_int = 539333; // 0xa16 PushI
	SetMessage(var_215_int); // 0xa17 TObjFunc
	ClearReplies(); // 0xa19 TObjFunc
	var_216_int = 539334; // 0xa1b PushI
	var_217_int = -1; // 0xa1c PushI
	var_218_int = 41278; // 0xa1d PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xa1e TObjFunc
	return 0; // 0xa20 Return
	
Label_2593:
	var_219_int = 45384; // 0xa21 PushI
	var_220_bool = var_36_bool == var_219_int; // 0xa22 Eq
	if(var_220_bool == 0) goto Label_2611; // 0xa23 JumpB
	var_221_string = ""; // 0xa24 PushV
	var_221_string = "Sorrow"; // 0xa25 MovS
	func_2425(var_37_cvector, var_221_string); // 0xa26 NEW_2
	var_222_int = 542945; // 0xa28 PushI
	SetMessage(var_222_int); // 0xa29 TObjFunc
	ClearReplies(); // 0xa2b TObjFunc
	var_223_int = 542946; // 0xa2d PushI
	var_224_int = 45386; // 0xa2e PushI
	var_225_int = 45385; // 0xa2f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xa30 TObjFunc
	return 0; // 0xa32 Return
	
Label_2611:
	var_226_int = 45386; // 0xa33 PushI
	var_227_bool = var_36_bool == var_226_int; // 0xa34 Eq
	if(var_227_bool == 0) goto Label_2649; // 0xa35 JumpB
	var_228_string = ""; // 0xa36 PushV
	var_228_string = "Smile"; // 0xa37 MovS
	func_2425(var_37_cvector, var_228_string); // 0xa38 NEW_2
	var_229_int = 542947; // 0xa3a PushI
	SetMessage(var_229_int); // 0xa3b TObjFunc
	ClearReplies(); // 0xa3d TObjFunc
	var_230_bool = 0; var_231_object = Obj(); // 0xa3f PushV
	var_231_object = var_1_object; // 0xa40 MovT
	func_4170(var_231_object); // 0xa41 NEW_2
	if(var_230_bool == 0) goto Label_2633; // 0xa43 JumpB
	var_236_int = 542955; // 0xa44 PushI
	var_237_int = 45398; // 0xa45 PushI
	var_238_int = 45395; // 0xa46 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xa47 TObjFunc
	
Label_2633:
	var_239_bool = 0; var_240_object = Obj(); // 0xa49 PushV
	var_240_object = var_1_object; // 0xa4a MovT
	func_4277(var_240_object); // 0xa4b NEW_2
	if(var_239_bool == 0) goto Label_2643; // 0xa4d JumpB
	var_245_int = 542957; // 0xa4e PushI
	var_246_int = 45396; // 0xa4f PushI
	var_247_int = 45397; // 0xa50 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xa51 TObjFunc
	
Label_2643:
	var_248_int = 542951; // 0xa53 PushI
	var_249_int = 45402; // 0xa54 PushI
	var_250_int = 45391; // 0xa55 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xa56 TObjFunc
	return 0; // 0xa58 Return
	
Label_2649:
	var_251_int = 45402; // 0xa59 PushI
	var_252_bool = var_36_bool == var_251_int; // 0xa5a Eq
	if(var_252_bool == 0) goto Label_2672; // 0xa5b JumpB
	var_253_string = ""; // 0xa5c PushV
	var_253_string = "Neutral"; // 0xa5d MovS
	func_2425(var_37_cvector, var_253_string); // 0xa5e NEW_2
	var_254_int = 542961; // 0xa60 PushI
	SetMessage(var_254_int); // 0xa61 TObjFunc
	ClearReplies(); // 0xa63 TObjFunc
	var_255_int = 542962; // 0xa65 PushI
	var_256_int = 43611; // 0xa66 PushI
	var_257_int = 45403; // 0xa67 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xa68 TObjFunc
	var_258_int = 542963; // 0xa6a PushI
	var_259_int = -1; // 0xa6b PushI
	var_260_int = 45404; // 0xa6c PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xa6d TObjFunc
	return 0; // 0xa6f Return
	
Label_2672:
	var_261_int = 45396; // 0xa70 PushI
	var_262_bool = var_36_bool == var_261_int; // 0xa71 Eq
	if(var_262_bool == 0) goto Label_2690; // 0xa72 JumpB
	var_263_string = ""; // 0xa73 PushV
	var_263_string = "Doubt"; // 0xa74 MovS
	func_2425(var_37_cvector, var_263_string); // 0xa75 NEW_2
	var_264_int = 542956; // 0xa77 PushI
	SetMessage(var_264_int); // 0xa78 TObjFunc
	ClearReplies(); // 0xa7a TObjFunc
	var_265_int = 542960; // 0xa7c PushI
	var_266_int = 45392; // 0xa7d PushI
	var_267_int = 45401; // 0xa7e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xa7f TObjFunc
	return 0; // 0xa81 Return
	
Label_2690:
	var_268_int = 45392; // 0xa82 PushI
	var_269_bool = var_36_bool == var_268_int; // 0xa83 Eq
	if(var_269_bool == 0) goto Label_2708; // 0xa84 JumpB
	var_270_string = ""; // 0xa85 PushV
	var_270_string = "Doubt"; // 0xa86 MovS
	func_2425(var_37_cvector, var_270_string); // 0xa87 NEW_2
	var_271_int = 542952; // 0xa89 PushI
	SetMessage(var_271_int); // 0xa8a TObjFunc
	ClearReplies(); // 0xa8c TObjFunc
	var_272_int = 542953; // 0xa8e PushI
	var_273_int = 45394; // 0xa8f PushI
	var_274_int = 45393; // 0xa90 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xa91 TObjFunc
	return 0; // 0xa93 Return
	
Label_2708:
	var_275_int = 45394; // 0xa94 PushI
	var_276_bool = var_36_bool == var_275_int; // 0xa95 Eq
	if(var_276_bool == 0) goto Label_2731; // 0xa96 JumpB
	var_277_string = ""; // 0xa97 PushV
	var_277_string = "Sorrow"; // 0xa98 MovS
	func_2425(var_37_cvector, var_277_string); // 0xa99 NEW_2
	var_278_int = 542954; // 0xa9b PushI
	SetMessage(var_278_int); // 0xa9c TObjFunc
	ClearReplies(); // 0xa9e TObjFunc
	var_279_int = 542948; // 0xaa0 PushI
	var_280_int = 45388; // 0xaa1 PushI
	var_281_int = 45387; // 0xaa2 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xaa3 TObjFunc
	var_282_int = 542964; // 0xaa5 PushI
	var_283_int = 45406; // 0xaa6 PushI
	var_284_int = 45405; // 0xaa7 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xaa8 TObjFunc
	return 0; // 0xaaa Return
	
Label_2731:
	var_285_int = 45388; // 0xaab PushI
	var_286_bool = var_36_bool == var_285_int; // 0xaac Eq
	if(var_286_bool == 0) goto Label_2749; // 0xaad JumpB
	var_287_string = ""; // 0xaae PushV
	var_287_string = "Sorrow"; // 0xaaf MovS
	func_2425(var_37_cvector, var_287_string); // 0xab0 NEW_2
	var_288_int = 542949; // 0xab2 PushI
	SetMessage(var_288_int); // 0xab3 TObjFunc
	ClearReplies(); // 0xab5 TObjFunc
	var_289_int = 542950; // 0xab7 PushI
	var_290_int = 45406; // 0xab8 PushI
	var_291_int = 45389; // 0xab9 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xaba TObjFunc
	return 0; // 0xabc Return
	
Label_2749:
	var_292_int = 45406; // 0xabd PushI
	var_293_bool = var_36_bool == var_292_int; // 0xabe Eq
	if(var_293_bool == 0) goto Label_2772; // 0xabf JumpB
	var_294_string = ""; // 0xac0 PushV
	var_294_string = "Smile"; // 0xac1 MovS
	func_2425(var_37_cvector, var_294_string); // 0xac2 NEW_2
	var_295_int = 542965; // 0xac4 PushI
	SetMessage(var_295_int); // 0xac5 TObjFunc
	ClearReplies(); // 0xac7 TObjFunc
	var_296_int = 542966; // 0xac9 PushI
	var_297_int = 43611; // 0xaca PushI
	var_298_int = 45407; // 0xacb PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xacc TObjFunc
	var_299_int = 542967; // 0xace PushI
	var_300_int = 45410; // 0xacf PushI
	var_301_int = 45408; // 0xad0 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xad1 TObjFunc
	return 0; // 0xad3 Return
	
Label_2772:
	var_302_int = 45410; // 0xad4 PushI
	var_303_bool = var_36_bool == var_302_int; // 0xad5 Eq
	if(var_303_bool == 0) goto Label_2790; // 0xad6 JumpB
	var_304_string = ""; // 0xad7 PushV
	var_304_string = "Neutral"; // 0xad8 MovS
	func_2425(var_37_cvector, var_304_string); // 0xad9 NEW_2
	var_305_int = 542968; // 0xadb PushI
	SetMessage(var_305_int); // 0xadc TObjFunc
	ClearReplies(); // 0xade TObjFunc
	var_306_int = 542969; // 0xae0 PushI
	var_307_int = 45412; // 0xae1 PushI
	var_308_int = 45411; // 0xae2 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xae3 TObjFunc
	return 0; // 0xae5 Return
	
Label_2790:
	var_309_int = 45412; // 0xae6 PushI
	var_310_bool = var_36_bool == var_309_int; // 0xae7 Eq
	if(var_310_bool == 0) goto Label_2808; // 0xae8 JumpB
	var_311_string = ""; // 0xae9 PushV
	var_311_string = "Sorrow"; // 0xaea MovS
	func_2425(var_37_cvector, var_311_string); // 0xaeb NEW_2
	var_312_int = 542970; // 0xaed PushI
	SetMessage(var_312_int); // 0xaee TObjFunc
	ClearReplies(); // 0xaf0 TObjFunc
	var_313_int = 542971; // 0xaf2 PushI
	var_314_int = 43611; // 0xaf3 PushI
	var_315_int = 45413; // 0xaf4 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xaf5 TObjFunc
	return 0; // 0xaf7 Return
	
Label_2808:
	var_316_int = 43611; // 0xaf8 PushI
	var_317_bool = var_36_bool == var_316_int; // 0xaf9 Eq
	if(var_317_bool == 0) goto Label_2826; // 0xafa JumpB
	var_318_string = ""; // 0xafb PushV
	var_318_string = "Neutral"; // 0xafc MovS
	func_2425(var_37_cvector, var_318_string); // 0xafd NEW_2
	var_319_int = 541455; // 0xaff PushI
	SetMessage(var_319_int); // 0xb00 TObjFunc
	ClearReplies(); // 0xb02 TObjFunc
	var_320_int = 541456; // 0xb04 PushI
	var_321_int = 41267; // 0xb05 PushI
	var_322_int = 43612; // 0xb06 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xb07 TObjFunc
	return 0; // 0xb09 Return
	
Label_2826:
	var_323_int = 41267; // 0xb0a PushI
	var_324_bool = var_36_bool == var_323_int; // 0xb0b Eq
	if(var_324_bool == 0) goto Label_2880; // 0xb0c JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0xb0d PushV
	var_326_object = var_1_object; // 0xb0e MovT
	func_4124(var_325_bool, var_326_object); // 0xb0f NEW_2
	var_327_bool = var_325_bool == 0; // 0xb11 Not
	if(var_327_bool == 0) goto Label_2855; // 0xb12 JumpB
	var_328_string = ""; // 0xb13 PushV
	var_328_string = "Neutral"; // 0xb14 MovS
	func_2425(var_37_cvector, var_328_string); // 0xb15 NEW_2
	var_329_int = 539324; // 0xb17 PushI
	SetMessage(var_329_int); // 0xb18 TObjFunc
	ClearReplies(); // 0xb1a TObjFunc
	var_330_int = 541458; // 0xb1c PushI
	var_331_int = 43615; // 0xb1d PushI
	var_332_int = 43614; // 0xb1e PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xb1f TObjFunc
	var_333_int = 541461; // 0xb21 PushI
	var_334_int = -1; // 0xb22 PushI
	var_335_int = 43617; // 0xb23 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xb24 TObjFunc
	return 0; // 0xb26 Return
	
Label_2855:
	var_336_bool = 0; var_337_object = Obj(); // 0xb27 PushV
	var_337_object = var_1_object; // 0xb28 MovT
	func_4124(var_336_bool, var_337_object); // 0xb29 NEW_2
	if(var_336_bool == 0) goto Label_2880; // 0xb2b JumpB
	var_338_string = ""; // 0xb2c PushV
	var_338_string = "Neutral"; // 0xb2d MovS
	func_2425(var_37_cvector, var_338_string); // 0xb2e NEW_2
	var_339_int = 539327; // 0xb30 PushI
	SetMessage(var_339_int); // 0xb31 TObjFunc
	ClearReplies(); // 0xb33 TObjFunc
	var_340_int = 539328; // 0xb35 PushI
	var_341_int = -1; // 0xb36 PushI
	var_342_int = 41271; // 0xb37 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xb38 TObjFunc
	var_343_int = 539329; // 0xb3a PushI
	var_344_int = -1; // 0xb3b PushI
	var_345_int = 41272; // 0xb3c PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xb3d TObjFunc
	return 0; // 0xb3f Return
	
Label_2880:
	var_346_int = 43615; // 0xb40 PushI
	var_347_bool = var_36_bool == var_346_int; // 0xb41 Eq
	if(var_347_bool == 0) goto Label_2898; // 0xb42 JumpB
	var_348_string = ""; // 0xb43 PushV
	var_348_string = "Neutral"; // 0xb44 MovS
	func_2425(var_37_cvector, var_348_string); // 0xb45 NEW_2
	var_349_int = 541459; // 0xb47 PushI
	SetMessage(var_349_int); // 0xb48 TObjFunc
	ClearReplies(); // 0xb4a TObjFunc
	var_350_int = 539325; // 0xb4c PushI
	var_351_int = -1; // 0xb4d PushI
	var_352_int = 41268; // 0xb4e PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xb4f TObjFunc
	return 0; // 0xb51 Return
	
Label_2898:
	var_353_int = 45398; // 0xb52 PushI
	var_354_bool = var_36_bool == var_353_int; // 0xb53 Eq
	if(var_354_bool == 0) goto Label_2916; // 0xb54 JumpB
	var_355_string = ""; // 0xb55 PushV
	var_355_string = "Smile"; // 0xb56 MovS
	func_2425(var_37_cvector, var_355_string); // 0xb57 NEW_2
	var_356_int = 542958; // 0xb59 PushI
	SetMessage(var_356_int); // 0xb5a TObjFunc
	ClearReplies(); // 0xb5c TObjFunc
	var_357_int = 542959; // 0xb5e PushI
	var_358_int = 45396; // 0xb5f PushI
	var_359_int = 45399; // 0xb60 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xb61 TObjFunc
	return 0; // 0xb63 Return
	
Label_2916:
	var_3_string = 1; // 0xb64 TMovB
	var_360_bool = 0; // 0xb65 PushV
	func_3888(var_360_bool); // 0xb66 NEW_2
	if(var_360_bool == 0) goto Label_2924; // 0xb68 JumpB
	lshStopAnimation(); // 0xb69 Func
	goto Label_2926; // 0xb6b Jump
	
Label_2926:
	return 0; // 0xb6e Return
	
Label_2924:
	StopAnimation(); // 0xb6c Func
	
Label_2928:
	return 0; // 0xb70 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0xc13 PushI
	if(var_38_int == 0) goto Label_3131; // 0xc14 JumpB
	func_3698(); // 0xc16 NEW_2
	var_40_int = 42554; // 0xc18 PushI
	var_41_bool = var_36_int == var_40_int; // 0xc19 Eq
	if(var_41_bool == 0) goto Label_3119; // 0xc1a JumpB
	var_42_string = ""; // 0xc1b PushV
	var_42_string = "Neutral"; // 0xc1c MovS
	func_3068(var_37_cvector, var_42_string); // 0xc1d NEW_2
	var_59_int = 540545; // 0xc1f PushI
	SetMessage(var_59_int); // 0xc20 TObjFunc
	ClearReplies(); // 0xc22 TObjFunc
	var_60_int = 540546; // 0xc24 PushI
	var_61_int = -1; // 0xc25 PushI
	var_62_int = 42555; // 0xc26 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xc27 TObjFunc
	var_63_int = 540798; // 0xc29 PushI
	var_64_int = -1; // 0xc2a PushI
	var_65_int = 42847; // 0xc2b PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xc2c TObjFunc
	return 0; // 0xc2e Return
	
Label_3119:
	var_3_string = 1; // 0xc2f TMovB
	var_66_bool = 0; // 0xc30 PushV
	func_3888(var_66_bool); // 0xc31 NEW_2
	if(var_66_bool == 0) goto Label_3127; // 0xc33 JumpB
	lshStopAnimation(); // 0xc34 Func
	goto Label_3129; // 0xc36 Jump
	
Label_3129:
	return 0; // 0xc39 Return
	
Label_3127:
	StopAnimation(); // 0xc37 Func
	
Label_3131:
	return 0; // 0xc3b Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0xc86 PushI
	var_38_bool = var_36_int == var_37_int; // 0xc87 Eq
	if(var_38_bool == 0) goto Label_3242; // 0xc88 JumpB
	func_3201(); // 0xc8a NEW_2
	var_40_bool = 0; // 0xc8c PushV
	var_40_bool = 0; // 0xc8d MovB
	var_41_bool = 0; // 0xc8e PushV
	func_3422(var_41_bool); // 0xc8f NEW_2
	if(var_41_bool == 0) goto Label_3223; // 0xc91 JumpB
	var_44_bool = 0; // 0xc92 PushV
	func_3170(var_44_bool); // 0xc93 NEW_2
	if(var_44_bool == 0) goto Label_3223; // 0xc95 JumpB
	var_40_bool = 1; // 0xc96 MovB
	
Label_3223:
	if(var_40_bool == 0) goto Label_3236; // 0xc97 JumpB
	var_61_bool = 0; // 0xc98 PushV
	func_3150(var_61_bool); // 0xc99 NEW_2
	if(var_61_bool == 0) goto Label_3235; // 0xc9b JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xc9c PushV
	var_82_object = Obj(); // 0xc9d PushV
	func_3705(var_82_object); // 0xc9e NEW_2
	var_81_object = var_82_object; // 0xc9f Mov
	func_3572(var_81_object); // 0xca1 NEW_2
	
Label_3235:
	goto Label_3242; // 0xca3 Jump
	
Label_3242:
	return 0; // 0xcaa Return
	
Label_3236:
	func_3165(var_36_int); // 0xca5 NEW_2
	func_3192(); // 0xca8 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3383(); // 0xcac NEW_2
	func_3201(); // 0xcaf NEW_2
	lshStopSpeech(); // 0xcb1 Func
	lshStopAnimation(); // 0xcb3 Func
	StopAsync(); // 0xcb5 Func
	Hold(); // 0xcb7 Func
	return 0; // 0xcb9 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xcba Func
	func_3201(); // 0xcbd NEW_2
	var_37_string = ""; // 0xcbf PushV
	var_37_string = "Neutral"; // 0xcc0 MovS
	func_3652(var_37_string); // 0xcc1 NEW_2
	func_3192(); // 0xcc4 NEW_2
	return 0; // 0xcc6 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xcc8 Push
	if(var_37_bool == 0) goto Label_3278; // 0xcc9 JumpB
	func_3192(); // 0xccb NEW_2
	goto Label_3282; // 0xccd Jump
	
Label_3282:
	return 0; // 0xcd2 Return
	
Label_3278:
	var_43_string = ""; // 0xcce PushV
	var_43_string = "Neutral"; // 0xccf MovS
	func_3652(var_43_string); // 0xcd0 NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xcd3 PushV
	IsOverrideActive(var_38_bool); // 0xcd4 Func
	var_39_bool = var_38_bool == 0; // 0xcd6 Not
	if(var_39_bool == 0) goto Label_3311; // 0xcd7 JumpB
	EventDisable(0); // 0xcd8 EventDisable
	func_3383(); // 0xcda NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xcdc PushV
	var_41_object = var_36_object; // 0xcdd Mov
	func_3413(var_41_object); // 0xcde NEW_2
	EventEnable(0); // 0xce0 EventEnable
	var_54_object = Obj(); // 0xce1 PushV
	var_54_object = var_36_object; // 0xce2 Mov
	func_4635(var_54_object); // 0xce3 NEW_2
	var_826_string = ""; // 0xce5 PushV
	var_826_string = "Neutral"; // 0xce6 MovS
	func_3652(var_826_string); // 0xce7 NEW_2
	func_3201(); // 0xcea NEW_2
	func_3192(); // 0xced NEW_2
	
Label_3311:
	return 2; // 0xcef Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3136(var_35_cvector); // 0xc3d NEW_2
	return 0; // 0xc3f Return
}


func_0(var_0_object, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; // 0x0 PushV
	var_0_object = var_290_object; // 0x1 TMov
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0; // 0x2 PushV
	var_301_object = var_290_object; // 0x3 Mov
	var_302_float = 70.0; // 0x4 MovF
	func_3427(var_301_object, var_302_float); // 0x5 NEW_2
	var_303_bool = var_300_bool == 0; // 0x7 Not
	if(var_303_bool == 0) goto Label_11; // 0x8 JumpB
	var_289_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_296_object); // 0xb Func
	var_304_int = 0; // 0xd PushV
	func_3882(var_304_int); // 0xe NEW_2
	SetNPCName(var_304_int); // 0x10 ObjFunc
	var_305_int = 0; // 0x12 PushV
	func_3880(var_305_int); // 0x13 NEW_2
	SetNPCDescription(var_305_int); // 0x15 ObjFunc
	var_306_string = ""; // 0x17 PushV
	func_3884(var_306_string); // 0x18 NEW_2
	SetPhoto(var_306_string); // 0x1a ObjFunc
	var_307_string = ""; // 0x1c PushV
	func_3886(var_307_string); // 0x1d NEW_2
	SetPhoto2(var_307_string); // 0x1f ObjFunc
	var_308_int = 0; // 0x21 PushV
	func_4527(var_308_int); // 0x22 NEW_2
	SetPlayerName(var_308_int); // 0x24 ObjFunc
	var_298_int = -1; // 0x26 MovI
	IsOverrideActive(var_297_bool); // 0x27 Func
	var_309_bool = var_297_bool; // 0x29 Push
	if(var_309_bool == 0) goto Label_45; // 0x2a JumpB
	var_289_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_296_object); // 0x2d Func
	var_310_bool = 0; var_311_object = Obj(); // 0x2f PushV
	var_312_object = Obj(); // 0x30 PushV
	func_3705(var_312_object); // 0x31 NEW_2
	var_311_object = var_312_object; // 0x32 Mov
	func_3514(var_310_bool, var_311_object); // 0x34 NEW_2
	var_313_object = Obj(); var_314_object = Obj(); // 0x36 PushV
	var_313_object = var_290_object; // 0x37 Mov
	var_314_object = var_296_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_299_bool); // 0x3d ObjFunc
	
Label_63:
	var_361_bool = var_299_bool == 0; // 0x3f Not
	if(var_361_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_299_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_362_object = Obj(); // 0x46 PushV
	var_362_object = var_290_object; // 0x47 Mov
	func_3496(); // 0x48 NEW_2
	StopDialog(var_296_object); // 0x4a Func
	GetReturnValue(var_298_int); // 0x4c ObjFunc
	var_289_int = var_298_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3841(var_186_int)
{
	var_187_float = 0; var_188_float = 0; // 0xf01 PushV
	GetGameTime(var_188_float); // 0xf02 Func
	var_189_int = 1; // 0xf04 PushI
	var_190_int = 0; // 0xf05 PushV
	var_191_int = 24; // 0xf06 PushI
	var_190_int = var_188_float / var_188_float; // 0xf07 Div2
	var_186_int = var_189_int + var_190_int; // 0xf08 Add2
	return 2; // 0xf09 Return
}


func_4102()
{
	var_44_int = 0; var_45_string = ""; // 0x1007 PushV
	var_45_string = "k12q01_Burah"; // 0x1008 MovS
	func_3721(var_44_int, var_45_string); // 0x1009 NEW_2
	var_48_int = 0; // 0x100b PushI
	var_49_bool = var_44_int == var_48_int; // 0x100c Eq
	if(var_49_bool == 0) goto Label_4117; // 0x100d JumpB
	var_50_string = "k12q01_Burah"; // 0x100e PushS
	var_51_int = 1; // 0x100f PushI
	SetVariable(var_50_string, var_51_int); // 0x1010 Func
	func_4345(); // 0x1013 NEW_2
	
Label_4117:
	return 0; // 0x1015 Return
}


func_4358()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1106 PushV
	var_68_int = 777; // 0x1107 PushI
	var_69_int = 1; // 0x1108 PushI
	var_70_int = 541531; // 0x1109 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x110a Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x110c PushV
	var_72_object = var_67_object; // 0x110d Mov
	var_73_int = 318; // 0x110e MovI
	func_4449(var_71_bool, var_72_object, var_73_int); // 0x110f NEW_2
	return 2; // 0x1111 Return
}


func_3850(var_286_bool, var_287_int)
{
	var_288_int = 0; // 0xf0b PushV
	func_3841(var_288_int); // 0xf0c NEW_2
	var_286_bool = var_288_int == var_287_int; // 0xf0e Eq2
	return 0; // 0xf0f Return
}


func_528(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object; // 0x211 TMov
	var_1_object = var_389_object; // 0x212 TMov
	var_3_string = 0; // 0x213 TMovB
	var_395_int = 1; // 0x214 PushI
	if(var_395_int == 0) goto Label_561; // 0x215 JumpB
	var_396_string = ""; // 0x216 PushV
	var_396_string = "Neutral"; // 0x217 MovS
	func_591(var_390_object, var_396_string); // 0x218 NEW_2
	var_404_int = 525257; // 0x21a PushI
	SetMessage(var_404_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_405_bool = 0; var_406_object = Obj(); // 0x21f PushV
	var_406_object = var_1_object; // 0x220 MovT
	func_4182(var_406_object); // 0x221 NEW_2
	if(var_405_bool == 0) goto Label_553; // 0x223 JumpB
	var_411_int = 525258; // 0x224 PushI
	var_412_int = 30607; // 0x225 PushI
	var_413_int = 26626; // 0x226 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x227 TObjFunc
	
Label_553:
	var_414_int = 525261; // 0x229 PushI
	var_415_int = -1; // 0x22a PushI
	var_416_int = 26629; // 0x22b PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x22c TObjFunc
	goto Label_561; // 0x22e Jump
	
Label_561:
	var_417_bool = 0; // 0x231 PushV
	func_3888(var_417_bool); // 0x232 NEW_2
	if(var_417_bool == 0) goto Label_576; // 0x234 JumpB
	
Label_565:
	lshWaitForAnimEnd(); // 0x235 Func
	var_418_string = var_3_string; // 0x237 PushT
	if(var_418_string == 0) goto Label_570; // 0x238 JumpB
	goto Label_575; // 0x239 Jump
	
Label_575:
	goto Label_590; // 0x23f Jump
	
Label_590:
	return 0; // 0x24e Return
	
Label_570:
	var_419_string = ""; // 0x23a PushV
	var_419_string = var_2_object; // 0x23b MovT
	func_3652(var_419_string); // 0x23c NEW_2
	goto Label_565; // 0x23e Jump
	
Label_576:
	var_420_string = "all"; // 0x240 PushS
	var_421_string = "idle"; // 0x241 PushS
	PlayAnimation(var_420_string, var_421_string); // 0x242 Func
	
Label_580:
	WaitForAnimEnd(); // 0x244 Func
	var_422_string = var_3_string; // 0x246 PushT
	if(var_422_string == 0) goto Label_585; // 0x247 JumpB
	goto Label_590; // 0x248 Jump
	
Label_585:
	var_423_string = "all"; // 0x249 PushS
	var_424_string = "idle"; // 0x24a PushS
	PlayAnimation(var_423_string, var_424_string); // 0x24b Func
	goto Label_580; // 0x24d Jump
}


func_3856(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xf10 PushV
	var_63_string = "idle"; // 0xf11 MovS
	var_64_int = var_61_int; // 0xf12 Push
	if(var_64_int == 0) goto Label_3861; // 0xf13 JumpB
	var_63_string = var_63_string + var_61_int; // 0xf14 Add2
	
Label_3861:
	var_60_string = var_63_string; // 0xf15 Mov
	return 2; // 0xf16 Return
}


func_4371()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x1113 PushV
	var_48_int = 466; // 0x1114 PushI
	var_49_int = 1; // 0x1115 PushI
	var_50_int = 527782; // 0x1116 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x1117 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x1119 PushV
	var_52_object = var_47_object; // 0x111a Mov
	var_53_int = 461; // 0x111b MovI
	func_4449(var_51_bool, var_52_object, var_53_int); // 0x111c NEW_2
	return 2; // 0x111e Return
}


func_4118()
{
	var_672_string = "k12BurahVisit"; // 0x1017 PushS
	var_673_int = 1; // 0x1018 PushI
	SetVariable(var_672_string, var_673_int); // 0x1019 Func
	return 0; // 0x101b Return
}


func_3863(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xf17 PushV
	var_57_int = 0; // 0xf18 MovI
	
Label_3865:
	var_59_string = "all"; // 0xf19 PushS
	var_60_string = ""; var_61_int = 0; // 0xf1a PushV
	var_61_int = var_57_int; // 0xf1b Mov
	func_3856(var_60_string, var_61_int); // 0xf1c NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xf1e Func
	var_65_bool = var_58_bool == 0; // 0xf20 Not
	if(var_65_bool == 0) goto Label_3875; // 0xf21 JumpB
	goto Label_3878; // 0xf22 Jump
	
Label_3878:
	var_54_int = var_57_int; // 0xf26 Mov
	return 4; // 0xf27 Return
	
Label_3875:
	var_66_int = 1; // 0xf23 PushI
	var_57_int = var_57_int + var_66_int; // 0xf24 Add2
	goto Label_3865; // 0xf25 Jump
}


func_3609(var_173_bool)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; // 0xe19 PushV
	var_185_string = "d"; // 0xe1a PushS
	var_186_int = 0; // 0xe1b PushV
	func_3841(var_186_int); // 0xe1c NEW_2
	var_192_int = var_185_string + var_186_int; // 0xe1e Add
	var_193_string = "m"; // 0xe1f PushS
	var_180_string = var_192_int + var_193_string; // 0xe20 Add2
	var_181_int = 0; // 0xe21 MovI
	
Label_3618:
	var_194_int = 1; // 0xe22 PushI
	if(var_194_int == 0) goto Label_3631; // 0xe23 JumpB
	var_195_int = 1; // 0xe24 PushI
	var_196_int = var_181_int + var_195_int; // 0xe25 Add
	var_197_int = var_180_string + var_196_int; // 0xe26 Add
	HasProperty(var_197_int, var_182_bool); // 0xe27 ObjFunc
	var_198_bool = var_182_bool == 0; // 0xe29 Not
	if(var_198_bool == 0) goto Label_3628; // 0xe2a JumpB
	goto Label_3631; // 0xe2b Jump
	
Label_3631:
	var_199_bool = var_181_int == 0; // 0xe2f Not
	if(var_199_bool == 0) goto Label_3635; // 0xe30 JumpB
	var_173_bool = 0; // 0xe31 MovB
	return 10; // 0xe32 Return
	
Label_3635:
	var_183_int = 0; // 0xe33 MovI
	var_200_int = 1; // 0xe34 PushI
	var_201_bool = var_181_int > var_200_int; // 0xe35 GT
	if(var_201_bool == 0) goto Label_3641; // 0xe36 JumpB
	irand(var_183_int, var_181_int); // 0xe37 Func
	
Label_3641:
	var_202_int = 1; // 0xe39 PushI
	var_203_int = var_183_int + var_202_int; // 0xe3a Add
	var_204_int = var_180_string + var_203_int; // 0xe3b Add
	GetProperty(var_204_int, var_184_string); // 0xe3c ObjFunc
	var_205_bool = 0; var_206_string = ""; // 0xe3e PushV
	var_206_string = var_184_string; // 0xe3f Mov
	func_3683(var_205_bool, var_206_string); // 0xe40 NEW_2
	var_173_bool = var_205_bool; // 0xe41 Mov
	return 10; // 0xe43 Return
	
Label_3628:
	var_207_int = 1; // 0xe2c PushI
	var_181_int = var_181_int + var_207_int; // 0xe2d Add2
	goto Label_3618; // 0xe2e Jump
}


func_4635(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0x121b PushV
	var_57_string = "mt_burah"; // 0x121c PushS
	GetVariable(var_57_string, var_56_int); // 0x121d Func
	var_58_bool = var_56_int == 0; // 0x121f Not
	if(var_58_bool == 0) goto Label_4651; // 0x1220 JumpB
	var_59_int = 0; var_60_object = Obj(); // 0x1221 PushV
	var_60_object = var_54_object; // 0x1222 Mov
	TaskCall(4); // 0x1223 TaskCall
	func_750(var_61_object, var_59_int, var_60_object); // 0x1224 NEW_2
	TaskReturn(); // 0x1225 TaskReturn
	var_284_string = "mt_burah"; // 0x1227 PushS
	var_285_int = 1; // 0x1228 PushI
	SetVariable(var_284_string, var_285_int); // 0x1229 Func
	
Label_4651:
	var_286_bool = 0; var_287_int = 0; // 0x122b PushV
	var_287_int = 1; // 0x122c MovI
	func_3850(var_286_bool, var_287_int); // 0x122d NEW_2
	if(var_286_bool == 0) goto Label_4663; // 0x122f JumpB
	var_289_int = 0; var_290_object = Obj(); // 0x1230 PushV
	var_290_object = var_54_object; // 0x1231 Mov
	TaskCall(0); // 0x1232 TaskCall
	func_0(var_291_object, var_289_int, var_290_object); // 0x1233 NEW_2
	TaskReturn(); // 0x1234 TaskReturn
	return 2; // 0x1236 Return
	
Label_4663:
	var_363_bool = 0; var_364_int = 0; // 0x1237 PushV
	var_364_int = 2; // 0x1238 MovI
	func_3850(var_363_bool, var_364_int); // 0x1239 NEW_2
	if(var_363_bool == 0) goto Label_4675; // 0x123b JumpB
	var_365_int = 0; var_366_object = Obj(); // 0x123c PushV
	var_366_object = var_54_object; // 0x123d Mov
	TaskCall(2); // 0x123e TaskCall
	func_447(var_367_object, var_365_int, var_366_object); // 0x123f NEW_2
	TaskReturn(); // 0x1240 TaskReturn
	return 2; // 0x1242 Return
	
Label_4675:
	var_427_bool = 0; var_428_int = 0; // 0x1243 PushV
	var_428_int = 7; // 0x1244 MovI
	func_3850(var_427_bool, var_428_int); // 0x1245 NEW_2
	if(var_427_bool == 0) goto Label_4687; // 0x1247 JumpB
	var_429_int = 0; var_430_object = Obj(); // 0x1248 PushV
	var_430_object = var_54_object; // 0x1249 Mov
	TaskCall(6); // 0x124a TaskCall
	func_989(var_431_object, var_429_int, var_430_object); // 0x124b NEW_2
	TaskReturn(); // 0x124c TaskReturn
	return 2; // 0x124e Return
	
Label_4687:
	var_552_bool = 0; var_553_int = 0; // 0x124f PushV
	var_553_int = 11; // 0x1250 MovI
	func_3850(var_552_bool, var_553_int); // 0x1251 NEW_2
	if(var_552_bool == 0) goto Label_4699; // 0x1253 JumpB
	var_554_int = 0; var_555_object = Obj(); // 0x1254 PushV
	var_555_object = var_54_object; // 0x1255 Mov
	TaskCall(8); // 0x1256 TaskCall
	func_1834(var_556_object, var_554_int, var_555_object); // 0x1257 NEW_2
	TaskReturn(); // 0x1258 TaskReturn
	return 2; // 0x125a Return
	
Label_4699:
	var_619_bool = 0; var_620_int = 0; // 0x125b PushV
	var_620_int = 12; // 0x125c MovI
	func_3850(var_619_bool, var_620_int); // 0x125d NEW_2
	if(var_619_bool == 0) goto Label_4711; // 0x125f JumpB
	var_621_int = 0; var_622_object = Obj(); // 0x1260 PushV
	var_622_object = var_54_object; // 0x1261 Mov
	TaskCall(10); // 0x1262 TaskCall
	func_2211(var_623_object, var_621_int, var_622_object); // 0x1263 NEW_2
	TaskReturn(); // 0x1264 TaskReturn
	return 2; // 0x1266 Return
	
Label_4711:
	var_770_int = 0; var_771_object = Obj(); // 0x1267 PushV
	var_771_object = var_54_object; // 0x1268 Mov
	TaskCall(12); // 0x1269 TaskCall
	func_2929(var_772_object, var_770_int, var_771_object); // 0x126a NEW_2
	TaskReturn(); // 0x126b TaskReturn
	return 2; // 0x126d Return
}


func_4124(var_703_bool, var_704_object)
{
	var_705_bool = 0; var_706_object = Obj(); // 0x101d PushV
	var_706_object = var_704_object; // 0x101e Mov
	func_4313(var_706_object); // 0x101f NEW_2
	if(var_705_bool == 0) goto Label_4132; // 0x1021 JumpB
	var_703_bool = 1; // 0x1022 MovB
	return 0; // 0x1023 Return
	
Label_4132:
	var_703_bool = 0; // 0x1024 MovB
	return 0; // 0x1025 Return
}


func_4384()
{
	var_196_object = Obj(); var_197_object = Obj(); // 0x1120 PushV
	var_198_int = 422; // 0x1121 PushI
	var_199_int = 1; // 0x1122 PushI
	var_200_int = 526221; // 0x1123 PushI
	CreateDiaryEntry(var_197_object, var_198_int, var_199_int, var_200_int); // 0x1124 Func
	var_201_bool = 0; var_202_object = Obj(); var_203_int = 0; // 0x1126 PushV
	var_202_object = var_197_object; // 0x1127 Mov
	var_203_int = 416; // 0x1128 MovI
	func_4449(var_201_bool, var_202_object, var_203_int); // 0x1129 NEW_2
	return 2; // 0x112b Return
}


func_4134(var_659_bool)
{
	var_661_int = 0; var_662_string = ""; // 0x1027 PushV
	var_662_string = "game_final"; // 0x1028 MovS
	func_3721(var_661_int, var_662_string); // 0x1029 NEW_2
	var_663_int = 0; // 0x102b PushI
	var_664_bool = var_661_int != var_663_int; // 0x102c Neq
	if(var_664_bool == 0) goto Label_4144; // 0x102d JumpB
	var_659_bool = 1; // 0x102e MovB
	return 0; // 0x102f Return
	
Label_4144:
	var_659_bool = 0; // 0x1030 MovB
	return 0; // 0x1031 Return
}


func_3880(var_119_int)
{
	var_119_int = 515592; // 0xf28 MovI
	return 0; // 0xf29 Return
}


func_3882(var_118_int)
{
	var_118_int = 511961; // 0xf2a MovI
	return 0; // 0xf2b Return
}


func_1834(var_0_object, var_554_int, var_555_object)
{
	var_557_object = Obj(); var_558_bool = 0; var_559_int = 0; var_560_bool = 0; var_561_object = Obj(); var_562_bool = 0; var_563_int = 0; var_564_bool = 0; // 0x72a PushV
	var_0_object = var_555_object; // 0x72b TMov
	var_565_bool = 0; var_566_object = Obj(); var_567_float = 0; // 0x72c PushV
	var_566_object = var_555_object; // 0x72d Mov
	var_567_float = 70.0; // 0x72e MovF
	func_3427(var_566_object, var_567_float); // 0x72f NEW_2
	var_568_bool = var_565_bool == 0; // 0x731 Not
	if(var_568_bool == 0) goto Label_1845; // 0x732 JumpB
	var_554_int = -2; // 0x733 MovI
	return 8; // 0x734 Return
	
Label_1845:
	CreateDialog(var_561_object); // 0x735 Func
	var_569_int = 0; // 0x737 PushV
	func_3882(var_569_int); // 0x738 NEW_2
	SetNPCName(var_569_int); // 0x73a ObjFunc
	var_570_int = 0; // 0x73c PushV
	func_3880(var_570_int); // 0x73d NEW_2
	SetNPCDescription(var_570_int); // 0x73f ObjFunc
	var_571_string = ""; // 0x741 PushV
	func_3884(var_571_string); // 0x742 NEW_2
	SetPhoto(var_571_string); // 0x744 ObjFunc
	var_572_string = ""; // 0x746 PushV
	func_3886(var_572_string); // 0x747 NEW_2
	SetPhoto2(var_572_string); // 0x749 ObjFunc
	var_573_int = 0; // 0x74b PushV
	func_4527(var_573_int); // 0x74c NEW_2
	SetPlayerName(var_573_int); // 0x74e ObjFunc
	var_563_int = -1; // 0x750 MovI
	IsOverrideActive(var_562_bool); // 0x751 Func
	var_574_bool = var_562_bool; // 0x753 Push
	if(var_574_bool == 0) goto Label_1879; // 0x754 JumpB
	var_554_int = -2; // 0x755 MovI
	return 8; // 0x756 Return
	
Label_1879:
	DoDialog(var_561_object); // 0x757 Func
	var_575_bool = 0; var_576_object = Obj(); // 0x759 PushV
	var_577_object = Obj(); // 0x75a PushV
	func_3705(var_577_object); // 0x75b NEW_2
	var_576_object = var_577_object; // 0x75c Mov
	func_3514(var_575_bool, var_576_object); // 0x75e NEW_2
	var_578_object = Obj(); var_579_object = Obj(); // 0x760 PushV
	var_578_object = var_555_object; // 0x761 Mov
	var_579_object = var_561_object; // 0x762 Mov
	TaskCall(9); // 0x763 TaskCall
	func_1915(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object); // 0x764 NEW_2
	TaskReturn(); // 0x765 TaskReturn
	IsDialogEnd(var_564_bool); // 0x767 ObjFunc
	
Label_1897:
	var_617_bool = var_564_bool == 0; // 0x769 Not
	if(var_617_bool == 0) goto Label_1904; // 0x76a JumpB
	sync(); // 0x76b Func
	IsDialogEnd(var_564_bool); // 0x76d ObjFunc
	goto Label_1897; // 0x76f Jump
	
Label_1904:
	var_618_object = Obj(); // 0x770 PushV
	var_618_object = var_555_object; // 0x771 Mov
	func_3496(); // 0x772 NEW_2
	StopDialog(var_561_object); // 0x774 Func
	GetReturnValue(var_563_int); // 0x776 ObjFunc
	var_554_int = var_563_int; // 0x778 Mov
	return 8; // 0x779 Return
}


func_3884(var_120_string)
{
	var_120_string = "ui/NPC_Burah.png"; // 0xf2c MovS
	return 0; // 0xf2d Return
}


func_4397()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x112d PushV
	var_62_int = 434; // 0x112e PushI
	var_63_int = 2; // 0x112f PushI
	var_64_int = 526390; // 0x1130 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x1131 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x1133 PushV
	var_66_object = var_61_object; // 0x1134 Mov
	var_67_int = -1; // 0x1135 MovI
	func_4449(var_65_bool, var_66_object, var_67_int); // 0x1136 NEW_2
	return 2; // 0x1138 Return
}


func_1070(var_0_object, var_1_object, var_2_object, var_3_string, var_453_object, var_454_object)
{
	var_0_object = var_454_object; // 0x42f TMov
	var_1_object = var_453_object; // 0x430 TMov
	var_3_string = 0; // 0x431 TMovB
	var_459_int = 1; // 0x432 PushI
	if(var_459_int == 0) goto Label_1186; // 0x433 JumpB
	var_460_bool = 0; var_461_object = Obj(); // 0x434 PushV
	var_461_object = var_1_object; // 0x435 MovT
	func_4241(var_461_object); // 0x436 NEW_2
	if(var_460_bool == 0) goto Label_1106; // 0x438 JumpB
	var_466_object = Obj(); var_467_object = Obj(); // 0x439 PushV
	var_466_object = var_1_object; // 0x43a MovT
	var_467_object = var_0_object; // 0x43b MovT
	func_4029(); // 0x43c NEW_2
	var_470_string = ""; // 0x43e PushV
	var_470_string = "Neutral"; // 0x43f MovS
	func_1216(var_454_object, var_470_string); // 0x440 NEW_2
	var_478_int = 526373; // 0x442 PushI
	SetMessage(var_478_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_479_int = 526374; // 0x447 PushI
	var_480_int = 27655; // 0x448 PushI
	var_481_int = 27654; // 0x449 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x44a TObjFunc
	var_482_int = 528676; // 0x44c PushI
	var_483_int = 27655; // 0x44d PushI
	var_484_int = 30089; // 0x44e PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x44f TObjFunc
	goto Label_1186; // 0x451 Jump
	
Label_1186:
	var_485_bool = 0; // 0x4a2 PushV
	func_3888(var_485_bool); // 0x4a3 NEW_2
	if(var_485_bool == 0) goto Label_1201; // 0x4a5 JumpB
	
Label_1190:
	lshWaitForAnimEnd(); // 0x4a6 Func
	var_486_string = var_3_string; // 0x4a8 PushT
	if(var_486_string == 0) goto Label_1195; // 0x4a9 JumpB
	goto Label_1200; // 0x4aa Jump
	
Label_1200:
	goto Label_1215; // 0x4b0 Jump
	
Label_1215:
	return 0; // 0x4bf Return
	
Label_1195:
	var_487_string = ""; // 0x4ab PushV
	var_487_string = var_2_object; // 0x4ac MovT
	func_3652(var_487_string); // 0x4ad NEW_2
	goto Label_1190; // 0x4af Jump
	
Label_1201:
	var_488_string = "all"; // 0x4b1 PushS
	var_489_string = "idle"; // 0x4b2 PushS
	PlayAnimation(var_488_string, var_489_string); // 0x4b3 Func
	
Label_1205:
	WaitForAnimEnd(); // 0x4b5 Func
	var_490_string = var_3_string; // 0x4b7 PushT
	if(var_490_string == 0) goto Label_1210; // 0x4b8 JumpB
	goto Label_1215; // 0x4b9 Jump
	
Label_1210:
	var_491_string = "all"; // 0x4ba PushS
	var_492_string = "idle"; // 0x4bb PushS
	PlayAnimation(var_491_string, var_492_string); // 0x4bc Func
	goto Label_1205; // 0x4be Jump
	
Label_1106:
	var_493_string = ""; // 0x452 PushV
	var_493_string = "Neutral"; // 0x453 MovS
	func_1216(var_454_object, var_493_string); // 0x454 NEW_2
	var_494_int = 526173; // 0x456 PushI
	SetMessage(var_494_int); // 0x457 TObjFunc
	ClearReplies(); // 0x459 TObjFunc
	var_495_bool = 0; // 0x45b PushV
	var_495_bool = 0; // 0x45c MovB
	var_496_bool = 0; var_497_object = Obj(); // 0x45d PushV
	var_497_object = var_1_object; // 0x45e MovT
	func_4205(var_497_object); // 0x45f NEW_2
	if(var_496_bool == 0) goto Label_1128; // 0x461 JumpB
	var_502_bool = 0; var_503_object = Obj(); // 0x462 PushV
	var_503_object = var_1_object; // 0x463 MovT
	func_4217(var_503_object); // 0x464 NEW_2
	if(var_502_bool == 0) goto Label_1128; // 0x466 JumpB
	var_495_bool = 1; // 0x467 MovB
	
Label_1128:
	if(var_495_bool == 0) goto Label_1134; // 0x468 JumpB
	var_508_int = 526174; // 0x469 PushI
	var_509_int = 27455; // 0x46a PushI
	var_510_int = 27454; // 0x46b PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x46c TObjFunc
	
Label_1134:
	var_511_bool = 0; // 0x46e PushV
	var_511_bool = 0; // 0x46f MovB
	var_512_bool = 0; var_513_object = Obj(); // 0x470 PushV
	var_513_object = var_1_object; // 0x471 MovT
	func_4205(var_513_object); // 0x472 NEW_2
	if(var_512_bool == 0) goto Label_1147; // 0x474 JumpB
	var_514_bool = 0; var_515_object = Obj(); // 0x475 PushV
	var_515_object = var_1_object; // 0x476 MovT
	func_4194(var_514_bool, var_515_object); // 0x477 NEW_2
	if(var_514_bool == 0) goto Label_1147; // 0x479 JumpB
	var_511_bool = 1; // 0x47a MovB
	
Label_1147:
	if(var_511_bool == 0) goto Label_1153; // 0x47b JumpB
	var_523_int = 526178; // 0x47c PushI
	var_524_int = 27459; // 0x47d PushI
	var_525_int = 27458; // 0x47e PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x47f TObjFunc
	
Label_1153:
	var_526_bool = 0; var_527_object = Obj(); // 0x481 PushV
	var_527_object = var_1_object; // 0x482 MovT
	func_4229(var_527_object); // 0x483 NEW_2
	if(var_526_bool == 0) goto Label_1163; // 0x485 JumpB
	var_532_int = 526378; // 0x486 PushI
	var_533_int = 27659; // 0x487 PushI
	var_534_int = 27658; // 0x488 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x489 TObjFunc
	
Label_1163:
	var_535_bool = 0; var_536_object = Obj(); // 0x48b PushV
	var_536_object = var_1_object; // 0x48c MovT
	func_4253(var_536_object); // 0x48d NEW_2
	if(var_535_bool == 0) goto Label_1173; // 0x48f JumpB
	var_541_int = 526387; // 0x490 PushI
	var_542_int = 44876; // 0x491 PushI
	var_543_int = 27667; // 0x492 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x493 TObjFunc
	
Label_1173:
	var_544_int = 526181; // 0x495 PushI
	var_545_int = -1; // 0x496 PushI
	var_546_int = 27461; // 0x497 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x498 TObjFunc
	var_547_int = 528675; // 0x49a PushI
	var_548_int = -1; // 0x49b PushI
	var_549_int = 30088; // 0x49c PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x49d TObjFunc
	goto Label_1186; // 0x49f Jump
}


func_3886(var_121_string)
{
	var_121_string = "ui/NPC_Burah_b.png"; // 0xf2e MovS
	return 0; // 0xf2f Return
}


func_3888(var_113_bool)
{
	var_113_bool = 1; // 0xf30 MovB
	return 0; // 0xf31 Return
}


func_4146(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0x1033 PushV
	var_333_string = "k1q01LaskaGotoBurah"; // 0x1034 MovS
	func_3721(var_332_int, var_333_string); // 0x1035 NEW_2
	var_336_int = 0; // 0x1037 PushI
	var_337_bool = var_332_int != var_336_int; // 0x1038 Neq
	if(var_337_bool == 0) goto Label_4156; // 0x1039 JumpB
	var_330_bool = 1; // 0x103a MovB
	return 0; // 0x103b Return
	
Label_4156:
	var_330_bool = 0; // 0x103c MovB
	return 0; // 0x103d Return
}


func_3890()
{
	var_135_object = Obj(); var_136_string = ""; var_137_float = 0; // 0xf33 PushV
	var_138_object = Obj(); // 0xf34 PushV
	func_4477(var_138_object); // 0xf35 NEW_2
	var_135_object = var_138_object; // 0xf36 Mov
	var_136_string = "pt_map_burah_home"; // 0xf38 MovS
	var_137_float = 2; // 0xf39 MovI
	func_4494(var_135_object, var_136_string, var_137_float); // 0xf3a NEW_2
	var_158_object = Obj(); // 0xf3c PushV
	func_4477(var_158_object); // 0xf3d NEW_2
	ShowMap(var_158_object); // 0xf3f ObjFunc
	return 0; // 0xf41 Return
}


func_3381(var_74_bool)
{
	var_74_bool = 1; // 0xd35 MovB
	return 0; // 0xd36 Return
}


func_3383()
{
	StopAnimation(); // 0xd37 Func
	StopGroup0(); // 0xd39 Func
	return 0; // 0xd3b Return
}


func_4410()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x113a PushV
	var_85_int = 435; // 0x113b PushI
	var_86_int = 2; // 0x113c PushI
	var_87_int = 526391; // 0x113d PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x113e Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x1140 PushV
	var_89_object = var_84_object; // 0x1141 Mov
	var_90_int = 434; // 0x1142 MovI
	func_4449(var_88_bool, var_89_object, var_90_int); // 0x1143 NEW_2
	return 2; // 0x1145 Return
}


func_3388(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xd3c PushV
	GetPosition(var_56_cvector); // 0xd3d Func
	GetPosition(var_57_cvector); // 0xd3f ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xd41 Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xd42 Or2
	return 6; // 0xd43 Return
}


func_4158(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0x103f PushV
	var_341_string = "ook1Burah1"; // 0x1040 MovS
	func_3721(var_340_int, var_341_string); // 0x1041 NEW_2
	var_342_int = 0; // 0x1043 PushI
	var_343_bool = var_340_int == var_342_int; // 0x1044 Eq
	if(var_343_bool == 0) goto Label_4168; // 0x1045 JumpB
	var_338_bool = 1; // 0x1046 MovB
	return 0; // 0x1047 Return
	
Label_4168:
	var_338_bool = 0; // 0x1048 MovB
	return 0; // 0x1049 Return
}


func_831(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object; // 0x340 TMov
	var_1_object = var_226_object; // 0x341 TMov
	var_3_string = 0; // 0x342 TMovB
	var_232_int = 1; // 0x343 PushI
	if(var_232_int == 0) goto Label_859; // 0x344 JumpB
	var_233_string = ""; // 0x345 PushV
	var_233_string = "Neutral"; // 0x346 MovS
	func_889(var_227_object, var_233_string); // 0x347 NEW_2
	var_250_int = 525471; // 0x349 PushI
	SetMessage(var_250_int); // 0x34a TObjFunc
	ClearReplies(); // 0x34c TObjFunc
	var_251_int = 525472; // 0x34e PushI
	var_252_int = 27550; // 0x34f PushI
	var_253_int = 26828; // 0x350 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x351 TObjFunc
	var_254_int = 526276; // 0x353 PushI
	var_255_int = 28085; // 0x354 PushI
	var_256_int = 27552; // 0x355 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x356 TObjFunc
	goto Label_859; // 0x358 Jump
	
Label_859:
	var_257_bool = 0; // 0x35b PushV
	func_3888(var_257_bool); // 0x35c NEW_2
	if(var_257_bool == 0) goto Label_874; // 0x35e JumpB
	
Label_863:
	lshWaitForAnimEnd(); // 0x35f Func
	var_258_string = var_3_string; // 0x361 PushT
	if(var_258_string == 0) goto Label_868; // 0x362 JumpB
	goto Label_873; // 0x363 Jump
	
Label_873:
	goto Label_888; // 0x369 Jump
	
Label_888:
	return 0; // 0x378 Return
	
Label_868:
	var_259_string = ""; // 0x364 PushV
	var_259_string = var_2_object; // 0x365 MovT
	func_3652(var_259_string); // 0x366 NEW_2
	goto Label_863; // 0x368 Jump
	
Label_874:
	var_270_string = "all"; // 0x36a PushS
	var_271_string = "idle"; // 0x36b PushS
	PlayAnimation(var_270_string, var_271_string); // 0x36c Func
	
Label_878:
	WaitForAnimEnd(); // 0x36e Func
	var_272_string = var_3_string; // 0x370 PushT
	if(var_272_string == 0) goto Label_883; // 0x371 JumpB
	goto Label_888; // 0x372 Jump
	
Label_883:
	var_273_string = "all"; // 0x373 PushS
	var_274_string = "idle"; // 0x374 PushS
	PlayAnimation(var_273_string, var_274_string); // 0x375 Func
	goto Label_878; // 0x377 Jump
}


func_3136(var_0_object)
{
	var_36_bool = 0; // 0xc40 PushV
	func_3422(var_36_bool); // 0xc41 NEW_2
	var_39_bool = var_36_bool == 0; // 0xc43 Not
	if(var_39_bool == 0) goto Label_3143; // 0xc44 JumpB
	Hold(); // 0xc45 Func
	
Label_3143:
	GetDirection(var_0_object); // 0xc47 Func
	
Label_3145:
	func_3312(); // 0xc4a NEW_2
	goto Label_3145; // 0xc4c Jump
}


func_3906()
{
	var_71_string = ""; var_72_bool = 0; // 0xf43 PushV
	var_71_string = "boiny@door1"; // 0xf44 MovS
	var_72_bool = 0; // 0xf45 MovB
	func_3737(var_71_string, var_72_bool); // 0xf46 NEW_2
	return 0; // 0xf48 Return
}


func_3652(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0; // 0xe44 PushV
	lshHasAnimation(var_263_bool, var_259_string); // 0xe45 Func
	var_266_bool = var_263_bool; // 0xe47 Push
	if(var_266_bool == 0) goto Label_3663; // 0xe48 JumpB
	lshGetAnimTimes(var_259_string, var_264_float, var_265_float); // 0xe49 Func
	var_267_bool = 0; // 0xe4b PushB
	lshPlayAnimation(var_264_float, var_265_float, var_267_bool); // 0xe4c Func
	goto Label_3667; // 0xe4e Jump
	
Label_3667:
	return 6; // 0xe53 Return
	
Label_3663:
	var_268_string = "Can't find lsh animation : "; // 0xe4f PushS
	var_269_int = var_268_string + var_259_string; // 0xe50 Add
	Trace(var_269_int); // 0xe51 Func
}


func_3396(var_239_string, var_240_int)
{
	var_241_int = 0; var_242_int = 0; // 0xd44 PushV
	GetProperty(var_239_string, var_242_int); // 0xd45 ObjFunc
	var_243_int = var_242_int + var_240_int; // 0xd47 Add
	SetProperty(var_239_string, var_243_int); // 0xd48 ObjFunc
	return 2; // 0xd4a Return
}


func_4423()
{
	var_220_object = Obj(); var_221_object = Obj(); // 0x1147 PushV
	var_222_int = 437; // 0x1148 PushI
	var_223_int = 2; // 0x1149 PushI
	var_224_int = 526393; // 0x114a PushI
	CreateDiaryEntry(var_221_object, var_222_int, var_223_int, var_224_int); // 0x114b Func
	var_225_bool = 0; var_226_object = Obj(); var_227_int = 0; // 0x114d PushV
	var_226_object = var_221_object; // 0x114e Mov
	var_227_int = 434; // 0x114f MovI
	func_4449(var_225_bool, var_226_object, var_227_int); // 0x1150 NEW_2
	return 2; // 0x1152 Return
}


func_3913()
{
	var_44_string = "ook1Burah1"; // 0xf4a PushS
	var_45_int = 1; // 0xf4b PushI
	SetVariable(var_44_string, var_45_int); // 0xf4c Func
	return 0; // 0xf4e Return
}


func_4170(var_230_bool)
{
	var_232_int = 0; var_233_string = ""; // 0x104b PushV
	var_233_string = "k12DankoVisit"; // 0x104c MovS
	func_3721(var_232_int, var_233_string); // 0x104d NEW_2
	var_234_int = 0; // 0x104f PushI
	var_235_bool = var_232_int != var_234_int; // 0x1050 Neq
	if(var_235_bool == 0) goto Label_4180; // 0x1051 JumpB
	var_230_bool = 1; // 0x1052 MovB
	return 0; // 0x1053 Return
	
Label_4180:
	var_230_bool = 0; // 0x1054 MovB
	return 0; // 0x1055 Return
}


func_3403(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xd4b PushV
	GetPosition(var_49_cvector); // 0xd4c Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xd4e Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xd4f PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xd50 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xd51 Func
	var_44_bool = var_51_bool; // 0xd53 Mov
	return 6; // 0xd54 Return
}


func_3068(var_2_object, var_801_string)
{
	var_802_bool = 0; // 0xbfd PushV
	func_3888(var_802_bool); // 0xbfe NEW_2
	var_803_bool = var_802_bool == 0; // 0xc00 Not
	if(var_803_bool == 0) goto Label_3075; // 0xc01 JumpB
	return 0; // 0xc02 Return
	
Label_3075:
	var_804_bool = var_801_string == var_2_object; // 0xc03 Eq
	if(var_804_bool == 0) goto Label_3078; // 0xc04 JumpB
	return 0; // 0xc05 Return
	
Label_3078:
	var_805_string = ""; var_806_bool = 0; // 0xc06 PushV
	var_805_string = var_801_string; // 0xc07 Mov
	var_807_string = ""; // 0xc08 PushS
	var_808_bool = var_801_string == var_807_string; // 0xc09 Eq
	if(var_808_bool == 0) goto Label_3085; // 0xc0a JumpB
	var_806_bool = 0; // 0xc0b MovB
	goto Label_3086; // 0xc0c Jump
	
Label_3086:
	func_3668(var_805_string, var_806_bool); // 0xc0e NEW_2
	var_2_object = var_801_string; // 0xc10 TMov
	return 0; // 0xc11 Return
	
Label_3085:
	var_806_bool = 1; // 0xc0d MovB
}


func_3150(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xc4e PushV
	var_64_string = "player"; // 0xc4f PushS
	FindActor(var_63_object, var_64_string); // 0xc50 Func
	var_65_bool = var_63_object == 0; // 0xc52 Not
	if(var_65_bool == 0) goto Label_3158; // 0xc53 JumpB
	var_61_bool = 0; // 0xc54 MovB
	return 2; // 0xc55 Return
	
Label_3158:
	var_66_bool = 0; var_67_object = Obj(); // 0xc56 PushV
	var_67_object = var_63_object; // 0xc57 Mov
	func_3413(var_67_object); // 0xc58 NEW_2
	var_61_bool = var_66_bool; // 0xc59 Mov
	return 2; // 0xc5b Return
}


func_591(var_2_object, var_396_string)
{
	var_397_bool = 0; // 0x250 PushV
	func_3888(var_397_bool); // 0x251 NEW_2
	var_398_bool = var_397_bool == 0; // 0x253 Not
	if(var_398_bool == 0) goto Label_598; // 0x254 JumpB
	return 0; // 0x255 Return
	
Label_598:
	var_399_bool = var_396_string == var_2_object; // 0x256 Eq
	if(var_399_bool == 0) goto Label_601; // 0x257 JumpB
	return 0; // 0x258 Return
	
Label_601:
	var_400_string = ""; var_401_bool = 0; // 0x259 PushV
	var_400_string = var_396_string; // 0x25a Mov
	var_402_string = ""; // 0x25b PushS
	var_403_bool = var_396_string == var_402_string; // 0x25c Eq
	if(var_403_bool == 0) goto Label_608; // 0x25d JumpB
	var_401_bool = 0; // 0x25e MovB
	goto Label_609; // 0x25f Jump
	
Label_609:
	func_3668(var_400_string, var_401_bool); // 0x261 NEW_2
	var_2_object = var_396_string; // 0x263 TMov
	return 0; // 0x264 Return
	
Label_608:
	var_401_bool = 1; // 0x260 MovB
}


func_3919()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xf4f PushV
	var_52_object = Obj(); // 0xf50 PushV
	func_4477(var_52_object); // 0xf51 NEW_2
	var_51_object = var_52_object; // 0xf52 Mov
	var_59_string = "k1q01BurahGotoAnna"; // 0xf54 PushS
	var_60_string = "pt_map_anna"; // 0xf55 PushS
	var_61_int = 1; // 0xf56 PushI
	var_62_int = 524732; // 0xf57 PushI
	var_63_float = 0; // 0xf58 PushV
	func_3836(var_63_float); // 0xf59 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0xf5b ObjFunc
	func_4358(); // 0xf5e NEW_2
	return 2; // 0xf60 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_313_object, var_314_object)
{
	var_0_object = var_314_object; // 0x52 TMov
	var_1_object = var_313_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_319_int = 1; // 0x55 PushI
	if(var_319_int == 0) goto Label_128; // 0x56 JumpB
	var_320_string = ""; // 0x57 PushV
	var_320_string = "Neutral"; // 0x58 MovS
	func_158(var_314_object, var_320_string); // 0x59 NEW_2
	var_328_int = 524702; // 0x5b PushI
	SetMessage(var_328_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_329_bool = 0; // 0x60 PushV
	var_329_bool = 0; // 0x61 MovB
	var_330_bool = 0; var_331_object = Obj(); // 0x62 PushV
	var_331_object = var_1_object; // 0x63 MovT
	func_4146(var_331_object); // 0x64 NEW_2
	if(var_330_bool == 0) goto Label_109; // 0x66 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x67 PushV
	var_339_object = var_1_object; // 0x68 MovT
	func_4158(var_339_object); // 0x69 NEW_2
	if(var_338_bool == 0) goto Label_109; // 0x6b JumpB
	var_329_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_329_bool == 0) goto Label_115; // 0x6d JumpB
	var_344_int = 524703; // 0x6e PushI
	var_345_int = 28087; // 0x6f PushI
	var_346_int = 26042; // 0x70 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x71 TObjFunc
	
Label_115:
	var_347_int = 524704; // 0x73 PushI
	var_348_int = -1; // 0x74 PushI
	var_349_int = 26043; // 0x75 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x76 TObjFunc
	var_350_int = 541803; // 0x78 PushI
	var_351_int = -1; // 0x79 PushI
	var_352_int = 44015; // 0x7a PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x7b TObjFunc
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_353_bool = 0; // 0x80 PushV
	func_3888(var_353_bool); // 0x81 NEW_2
	if(var_353_bool == 0) goto Label_143; // 0x83 JumpB
	
Label_132:
	lshWaitForAnimEnd(); // 0x84 Func
	var_354_string = var_3_string; // 0x86 PushT
	if(var_354_string == 0) goto Label_137; // 0x87 JumpB
	goto Label_142; // 0x88 Jump
	
Label_142:
	goto Label_157; // 0x8e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_137:
	var_355_string = ""; // 0x89 PushV
	var_355_string = var_2_object; // 0x8a MovT
	func_3652(var_355_string); // 0x8b NEW_2
	goto Label_132; // 0x8d Jump
	
Label_143:
	var_356_string = "all"; // 0x8f PushS
	var_357_string = "idle"; // 0x90 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x91 Func
	
Label_147:
	WaitForAnimEnd(); // 0x93 Func
	var_358_string = var_3_string; // 0x95 PushT
	if(var_358_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_152:
	var_359_string = "all"; // 0x98 PushS
	var_360_string = "idle"; // 0x99 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_3668(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0xe54 PushV
	lshHasAnimation(var_244_bool, var_237_string); // 0xe55 Func
	var_247_bool = var_244_bool; // 0xe57 Push
	if(var_247_bool == 0) goto Label_3678; // 0xe58 JumpB
	lshGetAnimTimes(var_237_string, var_245_float, var_246_float); // 0xe59 Func
	lshPlayAnimation(var_245_float, var_246_float, var_238_bool); // 0xe5b Func
	goto Label_3682; // 0xe5d Jump
	
Label_3682:
	return 6; // 0xe62 Return
	
Label_3678:
	var_248_string = "Can't find lsh animation : "; // 0xe5e PushS
	var_249_int = var_248_string + var_237_string; // 0xe5f Add
	Trace(var_249_int); // 0xe60 Func
}


func_4436(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x1154 PushV
	GetDiaryRoot(var_68_object); // 0x1155 Func
	var_69_bool = var_68_object == 0; // 0x1157 Not
	if(var_69_bool == 0) goto Label_4446; // 0x1158 JumpB
	var_70_string = "Can't retrieve diary root"; // 0x1159 PushS
	Trace(var_70_string); // 0x115a Func
	var_66_object = 0; // 0x115c MovB
	return 2; // 0x115d Return
	
Label_4446:
	var_66_object = var_68_object; // 0x115e Mov
	return 2; // 0x115f Return
}


func_4182(var_405_bool)
{
	var_407_int = 0; var_408_string = ""; // 0x1057 PushV
	var_408_string = "k2q01"; // 0x1058 MovS
	func_3721(var_407_int, var_408_string); // 0x1059 NEW_2
	var_409_int = 4; // 0x105b PushI
	var_410_bool = var_407_int == var_409_int; // 0x105c Eq
	if(var_410_bool == 0) goto Label_4192; // 0x105d JumpB
	var_405_bool = 1; // 0x105e MovB
	return 0; // 0x105f Return
	
Label_4192:
	var_405_bool = 0; // 0x1060 MovB
	return 0; // 0x1061 Return
}


func_3413(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xd55 PushV
	GetPosition(var_43_cvector); // 0xd56 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xd58 PushV
	var_45_cvector = var_43_cvector; // 0xd59 Mov
	func_3403(var_44_bool, var_45_cvector); // 0xd5a NEW_2
	var_40_bool = var_44_bool; // 0xd5b Mov
	return 2; // 0xd5d Return
}


func_3165(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0xc5d PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0xc5e PushE
	RotateAsync(var_113_float, var_114_float); // 0xc5f Func
	return 0; // 0xc61 Return
}


func_3422(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xd5e PushV
	IsLoaded(var_38_bool); // 0xd5f Func
	var_36_bool = var_38_bool; // 0xd61 Mov
	return 2; // 0xd62 Return
}


func_4449(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x1161 PushV
	var_66_object = Obj(); // 0x1162 PushV
	func_4436(var_66_object); // 0x1163 NEW_2
	var_63_object = var_66_object; // 0x1164 Mov
	Find(var_59_int, var_64_object); // 0x1166 ObjFunc
	var_71_bool = var_64_object == 0; // 0x1168 Not
	if(var_71_bool == 0) goto Label_4464; // 0x1169 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0x116a PushS
	var_73_int = var_72_string + var_59_int; // 0x116b Add
	Trace(var_73_int); // 0x116c Func
	var_57_bool = 0; // 0x116e MovB
	return 6; // 0x116f Return
	
Label_4464:
	AddChild(var_58_object); // 0x1170 ObjFunc
	var_74_int = 7; // 0x1172 PushI
	SendWorldWndMessage(var_74_int); // 0x1173 Func
	GetCategory(var_65_int); // 0x1175 ObjFunc
	SetDiarySection(var_65_int); // 0x1177 Func
	var_57_bool = 0; // 0x1179 MovB
	return 6; // 0x117a Return
}


func_4194(var_514_bool, var_515_object)
{
	var_516_bool = 0; var_517_object = Obj(); var_518_string = ""; // 0x1063 PushV
	var_517_object = var_515_object; // 0x1064 Mov
	var_518_string = "bird_balahon"; // 0x1065 MovS
	func_3817(var_517_object, var_518_string); // 0x1066 NEW_2
	if(var_516_bool == 0) goto Label_4203; // 0x1068 JumpB
	var_514_bool = 1; // 0x1069 MovB
	return 0; // 0x106a Return
	
Label_4203:
	var_514_bool = 0; // 0x106b MovB
	return 0; // 0x106c Return
}


func_3170(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0xc62 PushV
	var_49_string = "player"; // 0xc63 PushS
	FindActor(var_47_object, var_49_string); // 0xc64 Func
	var_50_bool = var_47_object == 0; // 0xc66 Not
	if(var_50_bool == 0) goto Label_3178; // 0xc67 JumpB
	var_44_bool = 0; // 0xc68 MovB
	return 4; // 0xc69 Return
	
Label_3178:
	var_51_float = 0; var_52_object = Obj(); // 0xc6a PushV
	var_52_object = var_47_object; // 0xc6b Mov
	func_3388(var_52_object); // 0xc6c NEW_2
	var_59_float = 90000.0; // 0xc6e PushF
	var_60_bool = var_51_float > var_59_float; // 0xc6f GT
	if(var_60_bool == 0) goto Label_3187; // 0xc70 JumpB
	var_44_bool = 0; // 0xc71 MovB
	return 4; // 0xc72 Return
	
Label_3187:
	CanSee(var_48_bool, var_47_object); // 0xc73 Func
	var_44_bool = var_48_bool; // 0xc75 Mov
	return 4; // 0xc76 Return
}


func_3683(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0; // 0xe63 PushV
	var_169_bool = 0; // 0xe64 PushV
	func_3888(var_169_bool); // 0xe65 NEW_2
	if(var_169_bool == 0) goto Label_3696; // 0xe67 JumpB
	lshHasSpeech(var_168_bool, var_166_string); // 0xe68 Func
	var_170_bool = var_168_bool; // 0xe6a Push
	if(var_170_bool == 0) goto Label_3696; // 0xe6b JumpB
	lshPlaySpeech(var_166_string); // 0xe6c Func
	var_165_bool = 1; // 0xe6e MovB
	return 2; // 0xe6f Return
	
Label_3696:
	var_165_bool = 0; // 0xe70 MovB
	return 2; // 0xe71 Return
}


func_3938()
{
	var_44_string = "k2q01"; // 0xf63 PushS
	var_45_int = 5; // 0xf64 PushI
	SetVariable(var_44_string, var_45_int); // 0xf65 Func
	func_4371(); // 0xf68 NEW_2
	return 0; // 0xf6a Return
}


func_3427(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xd63 PushV
	GetPosition(var_83_cvector); // 0xd64 ObjFunc
	GetEyesHeight(var_82_float); // 0xd66 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xd68 PushE
	var_91_float = var_91_float + var_82_float; // 0xd69 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xd6a PopE
	GetPosition(var_84_cvector); // 0xd6b Func
	GetEyesHeight(var_82_float); // 0xd6d Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xd6f PushE
	var_92_float = var_92_float + var_82_float; // 0xd70 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xd71 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xd72 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xd73 PushE
	var_93_float = 0; // 0xd74 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xd75 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xd76 Or
	var_95_float = sqrt(var_94_int); // 0xd77 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xd78 Div2
	var_86_cvector = -var_85_cvector; // 0xd79 Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xd7a Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xd7b PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xd7c PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xd7d Xor2
	func_3711(var_97_cvector, var_98_cvector); // 0xd7e NEW_2
	var_105_int = 25; // 0xd80 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xd81 Mult
	var_107_int = var_96_float + var_106_float; // 0xd82 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xd83 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xd84 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xd85 Add2
	IsOverrideActive(var_89_bool); // 0xd86 Func
	var_109_bool = var_89_bool; // 0xd88 Push
	if(var_109_bool == 0) goto Label_3468; // 0xd89 JumpB
	var_70_bool = 0; // 0xd8a MovB
	return 18; // 0xd8b Return
	
Label_3468:
	StopWorld(); // 0xd8c Func
	var_110_bool = 1; // 0xd8e PushB
	CameraTransit(var_88_cvector, var_86_cvector, var_110_bool); // 0xd8f Func
	var_111_float = GetByIndex(var_87_cvector, 0); // 0xd91 PushE
	var_112_float = GetByIndex(var_87_cvector, 2); // 0xd92 PushE
	Rotate(var_111_float, var_112_float); // 0xd93 Func
	var_113_bool = 0; // 0xd95 PushV
	func_3888(var_113_bool); // 0xd96 NEW_2
	if(var_113_bool == 0) goto Label_3482; // 0xd98 JumpB
	goto Label_3490; // 0xd99 Jump
	
Label_3490:
	CameraWaitForPlayFinish(); // 0xda2 Func
	ResumeWorld(); // 0xda4 Func
	var_70_bool = 1; // 0xda6 MovB
	return 18; // 0xda7 Return
	
Label_3482:
	var_114_string = "head"; // 0xd9a PushS
	HasAnimationTrack(var_90_bool, var_114_string); // 0xd9b Func
	var_115_bool = var_90_bool; // 0xd9d Push
	if(var_115_bool == 0) goto Label_3490; // 0xd9e JumpB
	var_116_string = "head"; // 0xd9f PushS
	LookAsyncCamera(var_116_string); // 0xda0 Func
}


func_3947()
{
	var_169_object = Obj(); var_170_object = Obj(); // 0xf6b PushV
	var_171_int = 0; var_172_string = ""; // 0xf6c PushV
	var_172_string = "k7q01CorpseMark"; // 0xf6d MovS
	func_3721(var_171_int, var_172_string); // 0xf6e NEW_2
	var_175_int = 0; // 0xf70 PushI
	var_176_bool = var_171_int == var_175_int; // 0xf71 Eq
	if(var_176_bool == 0) goto Label_3978; // 0xf72 JumpB
	var_177_string = "k7q01CorpseMark"; // 0xf73 PushS
	var_178_int = 1; // 0xf74 PushI
	SetVariable(var_177_string, var_178_int); // 0xf75 Func
	var_179_object = Obj(); // 0xf77 PushV
	func_4477(var_179_object); // 0xf78 NEW_2
	var_170_object = var_179_object; // 0xf79 Mov
	var_180_string = "k7q01BirdmaskGotoCorpse"; // 0xf7b PushS
	var_181_string = "pt_d7q02_corpse"; // 0xf7c PushS
	var_182_int = 3; // 0xf7d PushI
	var_183_int = 526214; // 0xf7e PushI
	var_184_float = 0; // 0xf7f PushV
	func_3836(var_184_float); // 0xf80 NEW_2
	AddMark(var_180_string, var_181_string, var_182_int, var_183_int, var_184_float); // 0xf82 ObjFunc
	var_185_bool = 0; var_186_string = ""; var_187_string = ""; // 0xf84 PushV
	var_186_string = "quest_k7_01"; // 0xf85 MovS
	var_187_string = "place_corpse"; // 0xf86 MovS
	func_3824(var_185_bool, var_186_string, var_187_string); // 0xf87 NEW_2
	var_170_object = 0; // 0xf89 SetNull
	
Label_3978:
	return 2; // 0xf8a Return
}


func_4205(var_496_bool)
{
	var_498_int = 0; var_499_string = ""; // 0x106e PushV
	var_499_string = "k7q01"; // 0x106f MovS
	func_3721(var_498_int, var_499_string); // 0x1070 NEW_2
	var_500_int = 3; // 0x1072 PushI
	var_501_bool = var_498_int == var_500_int; // 0x1073 Eq
	if(var_501_bool == 0) goto Label_4215; // 0x1074 JumpB
	var_496_bool = 1; // 0x1075 MovB
	return 0; // 0x1076 Return
	
Label_4215:
	var_496_bool = 0; // 0x1077 MovB
	return 0; // 0x1078 Return
}


func_2929(var_0_object, var_770_int, var_771_object)
{
	var_773_object = Obj(); var_774_bool = 0; var_775_int = 0; var_776_bool = 0; var_777_object = Obj(); var_778_bool = 0; var_779_int = 0; var_780_bool = 0; // 0xb71 PushV
	var_0_object = var_771_object; // 0xb72 TMov
	var_781_bool = 0; var_782_object = Obj(); var_783_float = 0; // 0xb73 PushV
	var_782_object = var_771_object; // 0xb74 Mov
	var_783_float = 70.0; // 0xb75 MovF
	func_3427(var_782_object, var_783_float); // 0xb76 NEW_2
	var_784_bool = var_781_bool == 0; // 0xb78 Not
	if(var_784_bool == 0) goto Label_2940; // 0xb79 JumpB
	var_770_int = -2; // 0xb7a MovI
	return 8; // 0xb7b Return
	
Label_2940:
	CreateDialog(var_777_object); // 0xb7c Func
	var_785_int = 0; // 0xb7e PushV
	func_3882(var_785_int); // 0xb7f NEW_2
	SetNPCName(var_785_int); // 0xb81 ObjFunc
	var_786_int = 0; // 0xb83 PushV
	func_3880(var_786_int); // 0xb84 NEW_2
	SetNPCDescription(var_786_int); // 0xb86 ObjFunc
	var_787_string = ""; // 0xb88 PushV
	func_3884(var_787_string); // 0xb89 NEW_2
	SetPhoto(var_787_string); // 0xb8b ObjFunc
	var_788_string = ""; // 0xb8d PushV
	func_3886(var_788_string); // 0xb8e NEW_2
	SetPhoto2(var_788_string); // 0xb90 ObjFunc
	var_789_int = 0; // 0xb92 PushV
	func_4527(var_789_int); // 0xb93 NEW_2
	SetPlayerName(var_789_int); // 0xb95 ObjFunc
	var_779_int = -1; // 0xb97 MovI
	IsOverrideActive(var_778_bool); // 0xb98 Func
	var_790_bool = var_778_bool; // 0xb9a Push
	if(var_790_bool == 0) goto Label_2974; // 0xb9b JumpB
	var_770_int = -2; // 0xb9c MovI
	return 8; // 0xb9d Return
	
Label_2974:
	DoDialog(var_777_object); // 0xb9e Func
	var_791_bool = 0; var_792_object = Obj(); // 0xba0 PushV
	var_793_object = Obj(); // 0xba1 PushV
	func_3705(var_793_object); // 0xba2 NEW_2
	var_792_object = var_793_object; // 0xba3 Mov
	func_3514(var_791_bool, var_792_object); // 0xba5 NEW_2
	var_794_object = Obj(); var_795_object = Obj(); // 0xba7 PushV
	var_794_object = var_771_object; // 0xba8 Mov
	var_795_object = var_777_object; // 0xba9 Mov
	TaskCall(13); // 0xbaa TaskCall
	func_3010(var_796_object, var_797_object, var_798_string, var_799_bool, var_794_object, var_795_object); // 0xbab NEW_2
	TaskReturn(); // 0xbac TaskReturn
	IsDialogEnd(var_780_bool); // 0xbae ObjFunc
	
Label_2992:
	var_824_bool = var_780_bool == 0; // 0xbb0 Not
	if(var_824_bool == 0) goto Label_2999; // 0xbb1 JumpB
	sync(); // 0xbb2 Func
	IsDialogEnd(var_780_bool); // 0xbb4 ObjFunc
	goto Label_2992; // 0xbb6 Jump
	
Label_2999:
	var_825_object = Obj(); // 0xbb7 PushV
	var_825_object = var_771_object; // 0xbb8 Mov
	func_3496(); // 0xbb9 NEW_2
	StopDialog(var_777_object); // 0xbbb Func
	GetReturnValue(var_779_int); // 0xbbd ObjFunc
	var_770_int = var_779_int; // 0xbbf Mov
	return 8; // 0xbc0 Return
}


func_3698()
{
	var_39_bool = 0; // 0xe72 PushV
	func_3888(var_39_bool); // 0xe73 NEW_2
	if(var_39_bool == 0) goto Label_3704; // 0xe75 JumpB
	lshStopSpeech(); // 0xe76 Func
	
Label_3704:
	return 0; // 0xe78 Return
}


func_3192()
{
	var_828_float = 0; var_829_float = 0; // 0xc78 PushV
	var_830_int = 8; // 0xc79 PushI
	var_831_int = 16; // 0xc7a PushI
	rand(var_829_float, var_830_int, var_831_int); // 0xc7b Func
	var_832_int = 10; // 0xc7d PushI
	SetTimer(var_832_int, var_829_float); // 0xc7e Func
	return 2; // 0xc80 Return
}


func_3705(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0xe79 PushV
	self(var_135_object); // 0xe7a Func
	var_133_object = var_135_object; // 0xe7c Mov
	return 2; // 0xe7d Return
}


func_4217(var_502_bool)
{
	var_504_int = 0; var_505_string = ""; // 0x107a PushV
	var_505_string = "ook7Burah1"; // 0x107b MovS
	func_3721(var_504_int, var_505_string); // 0x107c NEW_2
	var_506_int = 0; // 0x107e PushI
	var_507_bool = var_504_int == var_506_int; // 0x107f Eq
	if(var_507_bool == 0) goto Label_4227; // 0x1080 JumpB
	var_502_bool = 1; // 0x1081 MovB
	return 0; // 0x1082 Return
	
Label_4227:
	var_502_bool = 0; // 0x1083 MovB
	return 0; // 0x1084 Return
}


func_2425(var_2_object, var_674_string)
{
	var_675_bool = 0; // 0x97a PushV
	func_3888(var_675_bool); // 0x97b NEW_2
	var_676_bool = var_675_bool == 0; // 0x97d Not
	if(var_676_bool == 0) goto Label_2432; // 0x97e JumpB
	return 0; // 0x97f Return
	
Label_2432:
	var_677_bool = var_674_string == var_2_object; // 0x980 Eq
	if(var_677_bool == 0) goto Label_2435; // 0x981 JumpB
	return 0; // 0x982 Return
	
Label_2435:
	var_678_string = ""; var_679_bool = 0; // 0x983 PushV
	var_678_string = var_674_string; // 0x984 Mov
	var_680_string = ""; // 0x985 PushS
	var_681_bool = var_674_string == var_680_string; // 0x986 Eq
	if(var_681_bool == 0) goto Label_2442; // 0x987 JumpB
	var_679_bool = 0; // 0x988 MovB
	goto Label_2443; // 0x989 Jump
	
Label_2443:
	func_3668(var_678_string, var_679_bool); // 0x98b NEW_2
	var_2_object = var_674_string; // 0x98d TMov
	return 0; // 0x98e Return
	
Label_2442:
	var_679_bool = 1; // 0x98a MovB
}


func_889(var_2_object, var_233_string)
{
	var_234_bool = 0; // 0x37a PushV
	func_3888(var_234_bool); // 0x37b NEW_2
	var_235_bool = var_234_bool == 0; // 0x37d Not
	if(var_235_bool == 0) goto Label_896; // 0x37e JumpB
	return 0; // 0x37f Return
	
Label_896:
	var_236_bool = var_233_string == var_2_object; // 0x380 Eq
	if(var_236_bool == 0) goto Label_899; // 0x381 JumpB
	return 0; // 0x382 Return
	
Label_899:
	var_237_string = ""; var_238_bool = 0; // 0x383 PushV
	var_237_string = var_233_string; // 0x384 Mov
	var_239_string = ""; // 0x385 PushS
	var_240_bool = var_233_string == var_239_string; // 0x386 Eq
	if(var_240_bool == 0) goto Label_906; // 0x387 JumpB
	var_238_bool = 0; // 0x388 MovB
	goto Label_907; // 0x389 Jump
	
Label_907:
	func_3668(var_237_string, var_238_bool); // 0x38b NEW_2
	var_2_object = var_233_string; // 0x38d TMov
	return 0; // 0x38e Return
	
Label_906:
	var_238_bool = 1; // 0x38a MovB
}


func_1915(var_0_object, var_1_object, var_2_object, var_3_string, var_578_object, var_579_object)
{
	var_0_object = var_579_object; // 0x77c TMov
	var_1_object = var_578_object; // 0x77d TMov
	var_3_string = 0; // 0x77e TMovB
	var_584_int = 1; // 0x77f PushI
	if(var_584_int == 0) goto Label_1953; // 0x780 JumpB
	var_585_string = ""; // 0x781 PushV
	var_585_string = "Neutral"; // 0x782 MovS
	func_1983(var_579_object, var_585_string); // 0x783 NEW_2
	var_593_int = 527204; // 0x785 PushI
	SetMessage(var_593_int); // 0x786 TObjFunc
	ClearReplies(); // 0x788 TObjFunc
	var_594_bool = 0; var_595_object = Obj(); // 0x78a PushV
	var_595_object = var_1_object; // 0x78b MovT
	func_4265(var_595_object); // 0x78c NEW_2
	if(var_594_bool == 0) goto Label_1940; // 0x78e JumpB
	var_600_int = 527205; // 0x78f PushI
	var_601_int = 28514; // 0x790 PushI
	var_602_int = 28513; // 0x791 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x792 TObjFunc
	
Label_1940:
	var_603_int = 527210; // 0x794 PushI
	var_604_int = -1; // 0x795 PushI
	var_605_int = 28518; // 0x796 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x797 TObjFunc
	var_606_int = 527533; // 0x799 PushI
	var_607_int = -1; // 0x79a PushI
	var_608_int = 28871; // 0x79b PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x79c TObjFunc
	goto Label_1953; // 0x79e Jump
	
Label_1953:
	var_609_bool = 0; // 0x7a1 PushV
	func_3888(var_609_bool); // 0x7a2 NEW_2
	if(var_609_bool == 0) goto Label_1968; // 0x7a4 JumpB
	
Label_1957:
	lshWaitForAnimEnd(); // 0x7a5 Func
	var_610_string = var_3_string; // 0x7a7 PushT
	if(var_610_string == 0) goto Label_1962; // 0x7a8 JumpB
	goto Label_1967; // 0x7a9 Jump
	
Label_1967:
	goto Label_1982; // 0x7af Jump
	
Label_1982:
	return 0; // 0x7be Return
	
Label_1962:
	var_611_string = ""; // 0x7aa PushV
	var_611_string = var_2_object; // 0x7ab MovT
	func_3652(var_611_string); // 0x7ac NEW_2
	goto Label_1957; // 0x7ae Jump
	
Label_1968:
	var_612_string = "all"; // 0x7b0 PushS
	var_613_string = "idle"; // 0x7b1 PushS
	PlayAnimation(var_612_string, var_613_string); // 0x7b2 Func
	
Label_1972:
	WaitForAnimEnd(); // 0x7b4 Func
	var_614_string = var_3_string; // 0x7b6 PushT
	if(var_614_string == 0) goto Label_1977; // 0x7b7 JumpB
	goto Label_1982; // 0x7b8 Jump
	
Label_1977:
	var_615_string = "all"; // 0x7b9 PushS
	var_616_string = "idle"; // 0x7ba PushS
	PlayAnimation(var_615_string, var_616_string); // 0x7bb Func
	goto Label_1972; // 0x7bd Jump
}


func_4477(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); // 0x117d PushV
	GetMainOutdoorScene(var_49_object); // 0x117e Func
	var_51_bool = var_49_object == 0; // 0x1180 NullEq
	if(var_51_bool == 0) goto Label_4488; // 0x1181 JumpB
	var_52_string = "Can't find main outdoor scene"; // 0x1182 PushS
	Trace(var_52_string); // 0x1183 Func
	var_50_object = 0; // 0x1185 SetNull
	var_46_object = var_50_object; // 0x1186 Mov
	return 4; // 0x1187 Return
	
Label_4488:
	GetMap(var_50_object); // 0x1188 ObjFunc
	var_46_object = var_50_object; // 0x118a Mov
	return 4; // 0x118b Return
}


func_3711(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xe7f PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xe80 Or
	var_101_float = sqrt(var_102_int); // 0xe81 Sqrt2
	var_103_float = 0.0; // 0xe82 PushF
	var_104_bool = var_101_float < var_103_float; // 0xe83 LT
	if(var_104_bool == 0) goto Label_3719; // 0xe84 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xe85 MovV
	return 2; // 0xe86 Return
	
Label_3719:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xe87 Div2
	return 2; // 0xe88 Return
}


func_3201()
{
	var_827_int = 10; // 0xc81 PushI
	KillTimer(var_827_int); // 0xc82 Func
	return 0; // 0xc84 Return
}


func_4229(var_526_bool)
{
	var_528_int = 0; var_529_string = ""; // 0x1086 PushV
	var_529_string = "k7q03"; // 0x1087 MovS
	func_3721(var_528_int, var_529_string); // 0x1088 NEW_2
	var_530_int = 0; // 0x108a PushI
	var_531_bool = var_528_int == var_530_int; // 0x108b Eq
	if(var_531_bool == 0) goto Label_4239; // 0x108c JumpB
	var_526_bool = 1; // 0x108d MovB
	return 0; // 0x108e Return
	
Label_4239:
	var_526_bool = 0; // 0x108f MovB
	return 0; // 0x1090 Return
}


func_3721(var_332_int, var_333_string)
{
	var_334_int = 0; var_335_int = 0; // 0xe89 PushV
	GetVariable(var_333_string, var_335_int); // 0xe8a Func
	var_332_int = var_335_int; // 0xe8c Mov
	return 2; // 0xe8d Return
}


func_3979()
{
	var_163_string = "ook7Burah1"; // 0xf8c PushS
	var_164_int = 1; // 0xf8d PushI
	SetVariable(var_163_string, var_164_int); // 0xf8e Func
	return 0; // 0xf90 Return
}


func_3726(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0xe8e PushV
	GetMainOutdoorScene(var_95_object); // 0xe8f Func
	var_97_string = ".bin"; // 0xe91 PushS
	var_98_int = var_92_string + var_97_string; // 0xe92 Add
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int); // 0xe93 Func
	var_91_object = var_96_object; // 0xe95 Mov
	return 4; // 0xe96 Return
}


func_4494(var_135_object, var_136_string, var_137_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0; // 0x118e PushV
	GetMainOutdoorScene(var_145_object); // 0x118f Func
	var_147_bool = var_145_object == 0; // 0x1191 NullEq
	if(var_147_bool == 0) goto Label_4503; // 0x1192 JumpB
	var_148_string = "Can't find main outdoor scene"; // 0x1193 PushS
	Trace(var_148_string); // 0x1194 Func
	return 8; // 0x1196 Return
	
Label_4503:
	GetLocator(var_136_string, var_146_bool, var_143_cvector, var_144_cvector); // 0x1197 ObjFunc
	var_149_bool = var_146_bool == 0; // 0x1199 Not
	if(var_149_bool == 0) goto Label_4513; // 0x119a JumpB
	var_150_string = "Warning: outdoor scene locator "; // 0x119b PushS
	var_151_int = var_150_string + var_136_string; // 0x119c Add
	var_152_string = " doesnt exist"; // 0x119d PushS
	var_153_int = var_151_int + var_152_string; // 0x119e Add
	Trace(var_153_int); // 0x119f Func
	
Label_4513:
	GetMap(var_135_object); // 0x11a1 ObjFunc
	var_154_bool = var_135_object == 0; // 0x11a3 NullEq
	if(var_154_bool == 0) goto Label_4521; // 0x11a4 JumpB
	var_155_string = "Can't find map"; // 0x11a5 PushS
	Trace(var_155_string); // 0x11a6 Func
	return 8; // 0x11a8 Return
	
Label_4521:
	var_156_float = GetByIndex(var_143_cvector, 0); // 0x11a9 PushE
	var_157_float = GetByIndex(var_143_cvector, 2); // 0x11aa PushE
	SetMapParams(var_156_float, var_157_float, var_137_float); // 0x11ab ObjFunc
	return 8; // 0x11ad Return
}


func_4241(var_460_bool)
{
	var_462_int = 0; var_463_string = ""; // 0x1092 PushV
	var_463_string = "ook7Burah2"; // 0x1093 MovS
	func_3721(var_462_int, var_463_string); // 0x1094 NEW_2
	var_464_int = 0; // 0x1096 PushI
	var_465_bool = var_462_int == var_464_int; // 0x1097 Eq
	if(var_465_bool == 0) goto Label_4251; // 0x1098 JumpB
	var_460_bool = 1; // 0x1099 MovB
	return 0; // 0x109a Return
	
Label_4251:
	var_460_bool = 0; // 0x109b MovB
	return 0; // 0x109c Return
}


func_3985()
{
	var_192_int = 0; var_193_int = 0; // 0xf91 PushV
	var_194_string = "k7q01"; // 0xf92 PushS
	var_195_int = 4; // 0xf93 PushI
	SetVariable(var_194_string, var_195_int); // 0xf94 Func
	func_4384(); // 0xf97 NEW_2
	var_204_string = "bird_balahon"; // 0xf99 PushS
	var_205_int = 1; // 0xf9a PushI
	RemoveItemByType(var_193_int, var_204_string, var_205_int); // 0xf9b ObjFunc
	return 2; // 0xf9d Return
}


func_3737(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0xe99 PushV
	FindActor(var_74_object, var_71_string); // 0xe9a Func
	var_75_bool = var_74_object == 0; // 0xe9c Not
	if(var_75_bool == 0) goto Label_3749; // 0xe9d JumpB
	var_76_string = "Door "; // 0xe9e PushS
	var_77_int = var_76_string + var_71_string; // 0xe9f Add
	var_78_string = " not found"; // 0xea0 PushS
	var_79_int = var_77_int + var_78_string; // 0xea1 Add
	Trace(var_79_int); // 0xea2 Func
	goto Label_3752; // 0xea4 Jump
	
Label_3752:
	return 2; // 0xea8 Return
	
Label_3749:
	var_80_string = "locked"; // 0xea5 PushS
	SetProperty(var_80_string, var_72_bool); // 0xea6 ObjFunc
}


func_4253(var_535_bool)
{
	var_537_int = 0; var_538_string = ""; // 0x109e PushV
	var_538_string = "k7q03"; // 0x109f MovS
	func_3721(var_537_int, var_538_string); // 0x10a0 NEW_2
	var_539_int = 2; // 0x10a2 PushI
	var_540_bool = var_537_int == var_539_int; // 0x10a3 Eq
	if(var_540_bool == 0) goto Label_4263; // 0x10a4 JumpB
	var_535_bool = 1; // 0x10a5 MovB
	return 0; // 0x10a6 Return
	
Label_4263:
	var_535_bool = 0; // 0x10a7 MovB
	return 0; // 0x10a8 Return
}


func_158(var_2_object, var_320_string)
{
	var_321_bool = 0; // 0x9f PushV
	func_3888(var_321_bool); // 0xa0 NEW_2
	var_322_bool = var_321_bool == 0; // 0xa2 Not
	if(var_322_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_323_bool = var_320_string == var_2_object; // 0xa5 Eq
	if(var_323_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_324_string = ""; var_325_bool = 0; // 0xa8 PushV
	var_324_string = var_320_string; // 0xa9 Mov
	var_326_string = ""; // 0xaa PushS
	var_327_bool = var_320_string == var_326_string; // 0xab Eq
	if(var_327_bool == 0) goto Label_175; // 0xac JumpB
	var_325_bool = 0; // 0xad MovB
	goto Label_176; // 0xae Jump
	
Label_176:
	func_3668(var_324_string, var_325_bool); // 0xb0 NEW_2
	var_2_object = var_320_string; // 0xb2 TMov
	return 0; // 0xb3 Return
	
Label_175:
	var_325_bool = 1; // 0xaf MovB
}


func_3998()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xf9e PushV
	var_46_object = Obj(); // 0xf9f PushV
	func_4477(var_46_object); // 0xfa0 NEW_2
	var_45_object = var_46_object; // 0xfa1 Mov
	var_53_string = "k7q03BurahGotoFather"; // 0xfa3 PushS
	var_54_string = "pt_map_burah_home"; // 0xfa4 PushS
	var_55_int = 0; // 0xfa5 PushI
	var_56_int = 526394; // 0xfa6 PushI
	var_57_float = 0; // 0xfa7 PushV
	func_3836(var_57_float); // 0xfa8 NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xfaa ObjFunc
	func_4397(); // 0xfad NEW_2
	func_4410(); // 0xfb0 NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xfb2 PushV
	var_92_string = "quest_k7_03"; // 0xfb3 MovS
	func_3726(var_91_object, var_92_string); // 0xfb4 NEW_2
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; // 0xfb6 PushV
	var_100_string = "quest_k7_03"; // 0xfb7 MovS
	var_101_string = "place_family"; // 0xfb8 MovS
	func_3824(var_99_bool, var_100_string, var_101_string); // 0xfb9 NEW_2
	return 2; // 0xfbb Return
}


func_2211(var_0_object, var_621_int, var_622_object)
{
	var_624_object = Obj(); var_625_bool = 0; var_626_int = 0; var_627_bool = 0; var_628_object = Obj(); var_629_bool = 0; var_630_int = 0; var_631_bool = 0; // 0x8a3 PushV
	var_0_object = var_622_object; // 0x8a4 TMov
	var_632_bool = 0; var_633_object = Obj(); var_634_float = 0; // 0x8a5 PushV
	var_633_object = var_622_object; // 0x8a6 Mov
	var_634_float = 70.0; // 0x8a7 MovF
	func_3427(var_633_object, var_634_float); // 0x8a8 NEW_2
	var_635_bool = var_632_bool == 0; // 0x8aa Not
	if(var_635_bool == 0) goto Label_2222; // 0x8ab JumpB
	var_621_int = -2; // 0x8ac MovI
	return 8; // 0x8ad Return
	
Label_2222:
	CreateDialog(var_628_object); // 0x8ae Func
	var_636_int = 0; // 0x8b0 PushV
	func_3882(var_636_int); // 0x8b1 NEW_2
	SetNPCName(var_636_int); // 0x8b3 ObjFunc
	var_637_int = 0; // 0x8b5 PushV
	func_3880(var_637_int); // 0x8b6 NEW_2
	SetNPCDescription(var_637_int); // 0x8b8 ObjFunc
	var_638_string = ""; // 0x8ba PushV
	func_3884(var_638_string); // 0x8bb NEW_2
	SetPhoto(var_638_string); // 0x8bd ObjFunc
	var_639_string = ""; // 0x8bf PushV
	func_3886(var_639_string); // 0x8c0 NEW_2
	SetPhoto2(var_639_string); // 0x8c2 ObjFunc
	var_640_int = 0; // 0x8c4 PushV
	func_4527(var_640_int); // 0x8c5 NEW_2
	SetPlayerName(var_640_int); // 0x8c7 ObjFunc
	var_630_int = -1; // 0x8c9 MovI
	IsOverrideActive(var_629_bool); // 0x8ca Func
	var_641_bool = var_629_bool; // 0x8cc Push
	if(var_641_bool == 0) goto Label_2256; // 0x8cd JumpB
	var_621_int = -2; // 0x8ce MovI
	return 8; // 0x8cf Return
	
Label_2256:
	DoDialog(var_628_object); // 0x8d0 Func
	var_642_bool = 0; var_643_object = Obj(); // 0x8d2 PushV
	var_644_object = Obj(); // 0x8d3 PushV
	func_3705(var_644_object); // 0x8d4 NEW_2
	var_643_object = var_644_object; // 0x8d5 Mov
	func_3514(var_642_bool, var_643_object); // 0x8d7 NEW_2
	var_645_object = Obj(); var_646_object = Obj(); // 0x8d9 PushV
	var_645_object = var_622_object; // 0x8da Mov
	var_646_object = var_628_object; // 0x8db Mov
	TaskCall(11); // 0x8dc TaskCall
	func_2292(var_647_object, var_648_object, var_649_string, var_650_bool, var_645_object, var_646_object); // 0x8dd NEW_2
	TaskReturn(); // 0x8de TaskReturn
	IsDialogEnd(var_631_bool); // 0x8e0 ObjFunc
	
Label_2274:
	var_768_bool = var_631_bool == 0; // 0x8e2 Not
	if(var_768_bool == 0) goto Label_2281; // 0x8e3 JumpB
	sync(); // 0x8e4 Func
	IsDialogEnd(var_631_bool); // 0x8e6 ObjFunc
	goto Label_2274; // 0x8e8 Jump
	
Label_2281:
	var_769_object = Obj(); // 0x8e9 PushV
	var_769_object = var_622_object; // 0x8ea Mov
	func_3496(); // 0x8eb NEW_2
	StopDialog(var_628_object); // 0x8ed Func
	GetReturnValue(var_630_int); // 0x8ef ObjFunc
	var_621_int = var_630_int; // 0x8f1 Mov
	return 8; // 0x8f2 Return
}


func_3496()
{
	var_277_bool = 0; var_278_bool = 0; // 0xda8 PushV
	var_279_bool = 1; // 0xda9 PushB
	CameraSwitchToNormal(var_279_bool); // 0xdaa Func
	var_280_bool = 0; // 0xdac PushV
	func_3888(var_280_bool); // 0xdad NEW_2
	if(var_280_bool == 0) goto Label_3505; // 0xdaf JumpB
	goto Label_3513; // 0xdb0 Jump
	
Label_3513:
	return 2; // 0xdb9 Return
	
Label_3505:
	var_281_string = "head"; // 0xdb1 PushS
	HasAnimationTrack(var_278_bool, var_281_string); // 0xdb2 Func
	var_282_bool = var_278_bool; // 0xdb4 Push
	if(var_282_bool == 0) goto Label_3513; // 0xdb5 JumpB
	var_283_string = "head"; // 0xdb6 PushS
	UnlookAsync(var_283_string); // 0xdb7 Func
}


func_4265(var_594_bool)
{
	var_596_int = 0; var_597_string = ""; // 0x10aa PushV
	var_597_string = "k11q01"; // 0x10ab MovS
	func_3721(var_596_int, var_597_string); // 0x10ac NEW_2
	var_598_int = 4; // 0x10ae PushI
	var_599_bool = var_596_int == var_598_int; // 0x10af Eq
	if(var_599_bool == 0) goto Label_4275; // 0x10b0 JumpB
	var_594_bool = 1; // 0x10b1 MovB
	return 0; // 0x10b2 Return
	
Label_4275:
	var_594_bool = 0; // 0x10b3 MovB
	return 0; // 0x10b4 Return
}


func_3754(var_128_int, var_129_int)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0xeaa PushV
	CreateIntVector(var_131_object); // 0xeab Func
	add(var_128_int); // 0xead ObjFunc
	add(var_129_int); // 0xeaf ObjFunc
	var_132_int = 3; // 0xeb1 PushI
	SendWorldWndMessage(var_132_int, var_131_object); // 0xeb2 Func
	return 2; // 0xeb4 Return
}


func_4527(var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0x11af PushV
	var_125_string = "branch"; // 0x11b0 PushS
	GetVariable(var_125_string, var_124_int); // 0x11b1 Func
	var_126_int = 0; // 0x11b3 PushI
	var_127_bool = var_124_int == var_126_int; // 0x11b4 Eq
	if(var_127_bool == 0) goto Label_4537; // 0x11b5 JumpB
	var_122_int = 1; // 0x11b6 MovI
	return 2; // 0x11b7 Return
	
Label_4537:
	var_128_int = 1; // 0x11b9 PushI
	var_129_bool = var_124_int == var_128_int; // 0x11ba Eq
	if(var_129_bool == 0) goto Label_4542; // 0x11bb JumpB
	var_122_int = 2; // 0x11bc MovI
	return 2; // 0x11bd Return
	
Label_4542:
	var_122_int = 3; // 0x11be MovI
	return 2; // 0x11bf Return
}


func_4277(var_239_bool)
{
	var_241_int = 0; var_242_string = ""; // 0x10b6 PushV
	var_242_string = "k12q01ChildsAreVisited"; // 0x10b7 MovS
	func_3721(var_241_int, var_242_string); // 0x10b8 NEW_2
	var_243_int = 0; // 0x10ba PushI
	var_244_bool = var_241_int != var_243_int; // 0x10bb Neq
	if(var_244_bool == 0) goto Label_4287; // 0x10bc JumpB
	var_239_bool = 1; // 0x10bd MovB
	return 0; // 0x10be Return
	
Label_4287:
	var_239_bool = 0; // 0x10bf MovB
	return 0; // 0x10c0 Return
}


func_3766(var_234_object, var_235_int)
{
	var_236_int = 0; var_237_int = 0; // 0xeb6 PushV
	var_238_object = Obj(); var_239_string = ""; var_240_int = 0; // 0xeb7 PushV
	var_238_object = var_234_object; // 0xeb8 Mov
	var_239_string = "money"; // 0xeb9 MovS
	var_240_int = var_235_int; // 0xeba Mov
	func_3396(var_239_string, var_240_int); // 0xebb NEW_2
	var_244_int = 0; // 0xebd PushI
	var_245_bool = var_235_int > var_244_int; // 0xebe GT
	if(var_245_bool == 0) goto Label_3784; // 0xebf JumpB
	var_246_string = "Money"; // 0xec0 PushS
	GetInvItemByName(var_237_int, var_246_string); // 0xec1 Func
	var_247_int = 0; var_248_int = 0; // 0xec3 PushV
	var_247_int = var_237_int; // 0xec4 Mov
	var_248_int = var_235_int; // 0xec5 Mov
	func_3754(var_247_int, var_248_int); // 0xec6 NEW_2
	
Label_3784:
	return 2; // 0xec8 Return
}


func_3514(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; // 0xdba PushV
	var_140_string = "voice_common"; // 0xdbb PushS
	GetVariable(var_140_string, var_138_int); // 0xdbc Func
	var_141_int = var_138_int; // 0xdbe Push
	if(var_141_int == 0) goto Label_3552; // 0xdbf JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0xdc0 PushV
	var_143_object = var_132_object; // 0xdc1 Mov
	func_3572(var_143_object); // 0xdc2 NEW_2
	var_172_bool = var_142_bool == 0; // 0xdc4 Not
	if(var_172_bool == 0) goto Label_3534; // 0xdc5 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xdc6 PushV
	var_174_object = var_132_object; // 0xdc7 Mov
	func_3609(var_174_object); // 0xdc8 NEW_2
	var_208_bool = var_173_bool == 0; // 0xdca Not
	if(var_208_bool == 0) goto Label_3534; // 0xdcb JumpB
	var_131_bool = 0; // 0xdcc MovB
	return 4; // 0xdcd Return
	
Label_3534:
	var_209_int = 2; // 0xdce PushI
	irand(var_139_int, var_209_int); // 0xdcf Func
	var_210_int = var_139_int; // 0xdd1 Push
	if(var_210_int == 0) goto Label_3547; // 0xdd2 JumpB
	var_211_string = "voice_common"; // 0xdd3 PushS
	var_212_int = 1; // 0xdd4 PushI
	var_213_int = var_138_int + var_212_int; // 0xdd5 Add
	var_214_int = 3; // 0xdd6 PushI
	var_215_int = var_213_int / var_214_int; // 0xdd7 Mod
	SetVariable(var_211_string, var_215_int); // 0xdd8 Func
	goto Label_3551; // 0xdda Jump
	
Label_3551:
	goto Label_3570; // 0xddf Jump
	
Label_3570:
	var_131_bool = 1; // 0xdf2 MovB
	return 4; // 0xdf3 Return
	
Label_3547:
	var_216_string = "voice_common"; // 0xddb PushS
	var_217_int = 0; // 0xddc PushI
	SetVariable(var_216_string, var_217_int); // 0xddd Func
	
Label_3552:
	var_218_bool = 0; var_219_object = Obj(); // 0xde0 PushV
	var_219_object = var_132_object; // 0xde1 Mov
	func_3609(var_219_object); // 0xde2 NEW_2
	var_220_bool = var_218_bool == 0; // 0xde4 Not
	if(var_220_bool == 0) goto Label_3566; // 0xde5 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xde6 PushV
	var_222_object = var_132_object; // 0xde7 Mov
	func_3572(var_222_object); // 0xde8 NEW_2
	var_223_bool = var_221_bool == 0; // 0xdea Not
	if(var_223_bool == 0) goto Label_3566; // 0xdeb JumpB
	var_131_bool = 0; // 0xdec MovB
	return 4; // 0xded Return
	
Label_3566:
	var_224_string = "voice_common"; // 0xdee PushS
	var_225_int = 1; // 0xdef PushI
	SetVariable(var_224_string, var_225_int); // 0xdf0 Func
}


func_4029()
{
	var_468_string = "ook7Burah2"; // 0xfbe PushS
	var_469_int = 1; // 0xfbf PushI
	SetVariable(var_468_string, var_469_int); // 0xfc0 Func
	return 0; // 0xfc2 Return
}


func_1983(var_2_object, var_585_string)
{
	var_586_bool = 0; // 0x7c0 PushV
	func_3888(var_586_bool); // 0x7c1 NEW_2
	var_587_bool = var_586_bool == 0; // 0x7c3 Not
	if(var_587_bool == 0) goto Label_1990; // 0x7c4 JumpB
	return 0; // 0x7c5 Return
	
Label_1990:
	var_588_bool = var_585_string == var_2_object; // 0x7c6 Eq
	if(var_588_bool == 0) goto Label_1993; // 0x7c7 JumpB
	return 0; // 0x7c8 Return
	
Label_1993:
	var_589_string = ""; var_590_bool = 0; // 0x7c9 PushV
	var_589_string = var_585_string; // 0x7ca Mov
	var_591_string = ""; // 0x7cb PushS
	var_592_bool = var_585_string == var_591_string; // 0x7cc Eq
	if(var_592_bool == 0) goto Label_2000; // 0x7cd JumpB
	var_590_bool = 0; // 0x7ce MovB
	goto Label_2001; // 0x7cf Jump
	
Label_2001:
	func_3668(var_589_string, var_590_bool); // 0x7d1 NEW_2
	var_2_object = var_585_string; // 0x7d3 TMov
	return 0; // 0x7d4 Return
	
Label_2000:
	var_590_bool = 1; // 0x7d0 MovB
}


func_1216(var_2_object, var_470_string)
{
	var_471_bool = 0; // 0x4c1 PushV
	func_3888(var_471_bool); // 0x4c2 NEW_2
	var_472_bool = var_471_bool == 0; // 0x4c4 Not
	if(var_472_bool == 0) goto Label_1223; // 0x4c5 JumpB
	return 0; // 0x4c6 Return
	
Label_1223:
	var_473_bool = var_470_string == var_2_object; // 0x4c7 Eq
	if(var_473_bool == 0) goto Label_1226; // 0x4c8 JumpB
	return 0; // 0x4c9 Return
	
Label_1226:
	var_474_string = ""; var_475_bool = 0; // 0x4ca PushV
	var_474_string = var_470_string; // 0x4cb Mov
	var_476_string = ""; // 0x4cc PushS
	var_477_bool = var_470_string == var_476_string; // 0x4cd Eq
	if(var_477_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_475_bool = 0; // 0x4cf MovB
	goto Label_1234; // 0x4d0 Jump
	
Label_1234:
	func_3668(var_474_string, var_475_bool); // 0x4d2 NEW_2
	var_2_object = var_470_string; // 0x4d4 TMov
	return 0; // 0x4d5 Return
	
Label_1233:
	var_475_bool = 1; // 0x4d1 MovB
}


func_4289(var_752_bool)
{
	var_754_int = 0; var_755_string = ""; // 0x10c2 PushV
	var_755_string = "k12q01BurahInSobor"; // 0x10c3 MovS
	func_3721(var_754_int, var_755_string); // 0x10c4 NEW_2
	var_756_int = 0; // 0x10c6 PushI
	var_757_bool = var_754_int != var_756_int; // 0x10c7 Neq
	if(var_757_bool == 0) goto Label_4299; // 0x10c8 JumpB
	var_752_bool = 1; // 0x10c9 MovB
	return 0; // 0x10ca Return
	
Label_4299:
	var_752_bool = 0; // 0x10cb MovB
	return 0; // 0x10cc Return
}


func_4544(var_717_bool, var_718_int)
{
	var_719_int = 18; // 0x11c1 PushI
	add(var_719_int); // 0x11c2 ObjFunc
	var_720_int = 24; // 0x11c4 PushI
	add(var_720_int); // 0x11c5 ObjFunc
	var_721_int = 20; // 0x11c7 PushI
	add(var_721_int); // 0x11c8 ObjFunc
	var_722_int = 14; // 0x11ca PushI
	add(var_722_int); // 0x11cb ObjFunc
	var_723_bool = 0; // 0x11cd PushB
	var_724_bool = var_717_bool == var_723_bool; // 0x11ce Eq
	if(var_724_bool == 0) goto Label_4570; // 0x11cf JumpB
	var_725_int = 10; // 0x11d0 PushI
	add(var_725_int); // 0x11d1 ObjFunc
	var_726_int = 17; // 0x11d3 PushI
	add(var_726_int); // 0x11d4 ObjFunc
	var_727_int = 8; // 0x11d6 PushI
	add(var_727_int); // 0x11d7 ObjFunc
	goto Label_4576; // 0x11d9 Jump
	
Label_4576:
	return 0; // 0x11e0 Return
	
Label_4570:
	var_728_int = 1; // 0x11da PushI
	var_729_bool = var_718_int != var_728_int; // 0x11db Neq
	if(var_729_bool == 0) goto Label_4576; // 0x11dc JumpB
	var_730_int = 10; // 0x11dd PushI
	add(var_730_int); // 0x11de ObjFunc
}


func_447(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; // 0x1bf PushV
	var_0_object = var_366_object; // 0x1c0 TMov
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0; // 0x1c1 PushV
	var_377_object = var_366_object; // 0x1c2 Mov
	var_378_float = 70.0; // 0x1c3 MovF
	func_3427(var_377_object, var_378_float); // 0x1c4 NEW_2
	var_379_bool = var_376_bool == 0; // 0x1c6 Not
	if(var_379_bool == 0) goto Label_458; // 0x1c7 JumpB
	var_365_int = -2; // 0x1c8 MovI
	return 8; // 0x1c9 Return
	
Label_458:
	CreateDialog(var_372_object); // 0x1ca Func
	var_380_int = 0; // 0x1cc PushV
	func_3882(var_380_int); // 0x1cd NEW_2
	SetNPCName(var_380_int); // 0x1cf ObjFunc
	var_381_int = 0; // 0x1d1 PushV
	func_3880(var_381_int); // 0x1d2 NEW_2
	SetNPCDescription(var_381_int); // 0x1d4 ObjFunc
	var_382_string = ""; // 0x1d6 PushV
	func_3884(var_382_string); // 0x1d7 NEW_2
	SetPhoto(var_382_string); // 0x1d9 ObjFunc
	var_383_string = ""; // 0x1db PushV
	func_3886(var_383_string); // 0x1dc NEW_2
	SetPhoto2(var_383_string); // 0x1de ObjFunc
	var_384_int = 0; // 0x1e0 PushV
	func_4527(var_384_int); // 0x1e1 NEW_2
	SetPlayerName(var_384_int); // 0x1e3 ObjFunc
	var_374_int = -1; // 0x1e5 MovI
	IsOverrideActive(var_373_bool); // 0x1e6 Func
	var_385_bool = var_373_bool; // 0x1e8 Push
	if(var_385_bool == 0) goto Label_492; // 0x1e9 JumpB
	var_365_int = -2; // 0x1ea MovI
	return 8; // 0x1eb Return
	
Label_492:
	DoDialog(var_372_object); // 0x1ec Func
	var_386_bool = 0; var_387_object = Obj(); // 0x1ee PushV
	var_388_object = Obj(); // 0x1ef PushV
	func_3705(var_388_object); // 0x1f0 NEW_2
	var_387_object = var_388_object; // 0x1f1 Mov
	func_3514(var_386_bool, var_387_object); // 0x1f3 NEW_2
	var_389_object = Obj(); var_390_object = Obj(); // 0x1f5 PushV
	var_389_object = var_366_object; // 0x1f6 Mov
	var_390_object = var_372_object; // 0x1f7 Mov
	TaskCall(3); // 0x1f8 TaskCall
	func_528(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object); // 0x1f9 NEW_2
	TaskReturn(); // 0x1fa TaskReturn
	IsDialogEnd(var_375_bool); // 0x1fc ObjFunc
	
Label_510:
	var_425_bool = var_375_bool == 0; // 0x1fe Not
	if(var_425_bool == 0) goto Label_517; // 0x1ff JumpB
	sync(); // 0x200 Func
	IsDialogEnd(var_375_bool); // 0x202 ObjFunc
	goto Label_510; // 0x204 Jump
	
Label_517:
	var_426_object = Obj(); // 0x205 PushV
	var_426_object = var_366_object; // 0x206 Mov
	func_3496(); // 0x207 NEW_2
	StopDialog(var_372_object); // 0x209 Func
	GetReturnValue(var_374_int); // 0x20b ObjFunc
	var_365_int = var_374_int; // 0x20d Mov
	return 8; // 0x20e Return
}


func_3010(var_0_object, var_1_object, var_2_object, var_3_string, var_794_object, var_795_object)
{
	var_0_object = var_795_object; // 0xbc3 TMov
	var_1_object = var_794_object; // 0xbc4 TMov
	var_3_string = 0; // 0xbc5 TMovB
	var_800_int = 1; // 0xbc6 PushI
	if(var_800_int == 0) goto Label_3038; // 0xbc7 JumpB
	var_801_string = ""; // 0xbc8 PushV
	var_801_string = "Neutral"; // 0xbc9 MovS
	func_3068(var_795_object, var_801_string); // 0xbca NEW_2
	var_809_int = 540545; // 0xbcc PushI
	SetMessage(var_809_int); // 0xbcd TObjFunc
	ClearReplies(); // 0xbcf TObjFunc
	var_810_int = 540546; // 0xbd1 PushI
	var_811_int = -1; // 0xbd2 PushI
	var_812_int = 42555; // 0xbd3 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0xbd4 TObjFunc
	var_813_int = 540798; // 0xbd6 PushI
	var_814_int = -1; // 0xbd7 PushI
	var_815_int = 42847; // 0xbd8 PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0xbd9 TObjFunc
	goto Label_3038; // 0xbdb Jump
	
Label_3038:
	var_816_bool = 0; // 0xbde PushV
	func_3888(var_816_bool); // 0xbdf NEW_2
	if(var_816_bool == 0) goto Label_3053; // 0xbe1 JumpB
	
Label_3042:
	lshWaitForAnimEnd(); // 0xbe2 Func
	var_817_string = var_3_string; // 0xbe4 PushT
	if(var_817_string == 0) goto Label_3047; // 0xbe5 JumpB
	goto Label_3052; // 0xbe6 Jump
	
Label_3052:
	goto Label_3067; // 0xbec Jump
	
Label_3067:
	return 0; // 0xbfb Return
	
Label_3047:
	var_818_string = ""; // 0xbe7 PushV
	var_818_string = var_2_object; // 0xbe8 MovT
	func_3652(var_818_string); // 0xbe9 NEW_2
	goto Label_3042; // 0xbeb Jump
	
Label_3053:
	var_819_string = "all"; // 0xbed PushS
	var_820_string = "idle"; // 0xbee PushS
	PlayAnimation(var_819_string, var_820_string); // 0xbef Func
	
Label_3057:
	WaitForAnimEnd(); // 0xbf1 Func
	var_821_string = var_3_string; // 0xbf3 PushT
	if(var_821_string == 0) goto Label_3062; // 0xbf4 JumpB
	goto Label_3067; // 0xbf5 Jump
	
Label_3062:
	var_822_string = "all"; // 0xbf6 PushS
	var_823_string = "idle"; // 0xbf7 PushS
	PlayAnimation(var_822_string, var_823_string); // 0xbf8 Func
	goto Label_3057; // 0xbfa Jump
}


func_4035(var_109_object)
{
	var_111_string = "tvirin 5 is given"; // 0xfc4 PushS
	Trace(var_111_string); // 0xfc5 Func
	var_112_object = Obj(); var_113_string = ""; var_114_int = 0; // 0xfc7 PushV
	var_112_object = var_109_object; // 0xfc8 Mov
	var_113_string = "tvirin"; // 0xfc9 MovS
	var_114_int = 5; // 0xfca MovI
	func_3804(var_112_object, var_113_string, var_114_int); // 0xfcb NEW_2
	return 0; // 0xfcd Return
}


func_3785(var_118_object, var_119_int)
{
	var_120_int = 0; var_121_int = 0; var_122_bool = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; // 0xec9 PushV
	GetItemID(var_123_int); // 0xeca ObjFunc
	var_126_string = "Category"; // 0xecc PushS
	GetInvItemProperty(var_124_int, var_123_int, var_126_string); // 0xecd Func
	AddItem(var_125_bool, var_118_object, var_124_int, var_119_int); // 0xecf ObjFunc
	var_127_bool = var_125_bool == 0; // 0xed1 Not
	if(var_127_bool == 0) goto Label_3798; // 0xed2 JumpB
	DropItems(var_118_object, var_119_int); // 0xed3 ObjFunc
	goto Label_3803; // 0xed5 Jump
	
Label_3803:
	return 6; // 0xedb Return
	
Label_3798:
	var_128_int = 0; var_129_int = 0; // 0xed6 PushV
	var_128_int = var_123_int; // 0xed7 Mov
	var_129_int = var_119_int; // 0xed8 Mov
	func_3754(var_128_int, var_129_int); // 0xed9 NEW_2
}


func_4301(var_653_bool)
{
	var_655_int = 0; var_656_string = ""; // 0x10ce PushV
	var_656_string = "ook12BurahFactory1"; // 0x10cf MovS
	func_3721(var_655_int, var_656_string); // 0x10d0 NEW_2
	var_657_int = 0; // 0x10d2 PushI
	var_658_bool = var_655_int == var_657_int; // 0x10d3 Eq
	if(var_658_bool == 0) goto Label_4311; // 0x10d4 JumpB
	var_653_bool = 1; // 0x10d5 MovB
	return 0; // 0x10d6 Return
	
Label_4311:
	var_653_bool = 0; // 0x10d7 MovB
	return 0; // 0x10d8 Return
}


func_4046()
{
	func_4423(); // 0xfd0 NEW_2
	var_228_bool = 0; var_229_string = ""; var_230_string = ""; // 0xfd2 PushV
	var_229_string = "quest_k7_03"; // 0xfd3 MovS
	var_230_string = "completed"; // 0xfd4 MovS
	func_3824(var_228_bool, var_229_string, var_230_string); // 0xfd5 NEW_2
	return 0; // 0xfd7 Return
}


func_4056(var_231_object)
{
	var_233_string = "money2000 is given"; // 0xfd9 PushS
	Trace(var_233_string); // 0xfda Func
	var_234_object = Obj(); var_235_int = 0; // 0xfdc PushV
	var_234_object = var_231_object; // 0xfdd Mov
	var_235_int = 2000; // 0xfde MovI
	func_3766(var_234_object, var_235_int); // 0xfdf NEW_2
	return 0; // 0xfe1 Return
}


func_4313(var_705_bool)
{
	var_707_bool = 0; // 0x10da PushV
	func_4597(var_707_bool); // 0x10db NEW_2
	var_705_bool = var_707_bool; // 0x10dc Mov
	return 0; // 0x10de Return
}


func_3804(var_112_object, var_113_string, var_114_int)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0xedc PushV
	CreateInvItem(var_116_object); // 0xedd Func
	SetItemName(var_113_string); // 0xedf ObjFunc
	var_117_object = Obj(); var_118_object = Obj(); var_119_int = 0; // 0xee1 PushV
	var_117_object = var_112_object; // 0xee2 Mov
	var_118_object = var_116_object; // 0xee3 Mov
	var_119_int = var_114_int; // 0xee4 Mov
	func_3785(var_118_object, var_119_int); // 0xee5 NEW_2
	return 2; // 0xee7 Return
}


func_989(var_0_object, var_429_int, var_430_object)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_int = 0; var_435_bool = 0; var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0; // 0x3dd PushV
	var_0_object = var_430_object; // 0x3de TMov
	var_440_bool = 0; var_441_object = Obj(); var_442_float = 0; // 0x3df PushV
	var_441_object = var_430_object; // 0x3e0 Mov
	var_442_float = 70.0; // 0x3e1 MovF
	func_3427(var_441_object, var_442_float); // 0x3e2 NEW_2
	var_443_bool = var_440_bool == 0; // 0x3e4 Not
	if(var_443_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_429_int = -2; // 0x3e6 MovI
	return 8; // 0x3e7 Return
	
Label_1000:
	CreateDialog(var_436_object); // 0x3e8 Func
	var_444_int = 0; // 0x3ea PushV
	func_3882(var_444_int); // 0x3eb NEW_2
	SetNPCName(var_444_int); // 0x3ed ObjFunc
	var_445_int = 0; // 0x3ef PushV
	func_3880(var_445_int); // 0x3f0 NEW_2
	SetNPCDescription(var_445_int); // 0x3f2 ObjFunc
	var_446_string = ""; // 0x3f4 PushV
	func_3884(var_446_string); // 0x3f5 NEW_2
	SetPhoto(var_446_string); // 0x3f7 ObjFunc
	var_447_string = ""; // 0x3f9 PushV
	func_3886(var_447_string); // 0x3fa NEW_2
	SetPhoto2(var_447_string); // 0x3fc ObjFunc
	var_448_int = 0; // 0x3fe PushV
	func_4527(var_448_int); // 0x3ff NEW_2
	SetPlayerName(var_448_int); // 0x401 ObjFunc
	var_438_int = -1; // 0x403 MovI
	IsOverrideActive(var_437_bool); // 0x404 Func
	var_449_bool = var_437_bool; // 0x406 Push
	if(var_449_bool == 0) goto Label_1034; // 0x407 JumpB
	var_429_int = -2; // 0x408 MovI
	return 8; // 0x409 Return
	
Label_1034:
	DoDialog(var_436_object); // 0x40a Func
	var_450_bool = 0; var_451_object = Obj(); // 0x40c PushV
	var_452_object = Obj(); // 0x40d PushV
	func_3705(var_452_object); // 0x40e NEW_2
	var_451_object = var_452_object; // 0x40f Mov
	func_3514(var_450_bool, var_451_object); // 0x411 NEW_2
	var_453_object = Obj(); var_454_object = Obj(); // 0x413 PushV
	var_453_object = var_430_object; // 0x414 Mov
	var_454_object = var_436_object; // 0x415 Mov
	TaskCall(7); // 0x416 TaskCall
	func_1070(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object); // 0x417 NEW_2
	TaskReturn(); // 0x418 TaskReturn
	IsDialogEnd(var_439_bool); // 0x41a ObjFunc
	
Label_1052:
	var_550_bool = var_439_bool == 0; // 0x41c Not
	if(var_550_bool == 0) goto Label_1059; // 0x41d JumpB
	sync(); // 0x41e Func
	IsDialogEnd(var_439_bool); // 0x420 ObjFunc
	goto Label_1052; // 0x422 Jump
	
Label_1059:
	var_551_object = Obj(); // 0x423 PushV
	var_551_object = var_430_object; // 0x424 Mov
	func_3496(); // 0x425 NEW_2
	StopDialog(var_436_object); // 0x427 Func
	GetReturnValue(var_438_int); // 0x429 ObjFunc
	var_429_int = var_438_int; // 0x42b Mov
	return 8; // 0x42c Return
}


func_4319()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x10df PushV
	var_48_int = 488; // 0x10e0 PushI
	var_49_int = 1; // 0x10e1 PushI
	var_50_int = 528055; // 0x10e2 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x10e3 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x10e5 PushV
	var_52_object = var_47_object; // 0x10e6 Mov
	var_53_int = 480; // 0x10e7 MovI
	func_4449(var_51_bool, var_52_object, var_53_int); // 0x10e8 NEW_2
	return 2; // 0x10ea Return
}


func_4577(var_742_bool, var_743_int)
{
	var_744_int = 0; var_745_int = 0; // 0x11e1 PushV
	var_746_string = "vol_"; // 0x11e2 PushS
	var_747_int = var_746_string + var_743_int; // 0x11e3 Add
	GetVariable(var_747_int, var_745_int); // 0x11e4 Func
	var_748_int = 4; // 0x11e6 PushI
	var_749_int = var_745_int & var_748_int; // 0x11e7 And
	var_750_int = 0; // 0x11e8 PushI
	var_742_bool = var_749_int != var_750_int; // 0x11e9 Neq2
	return 2; // 0x11ea Return
}


func_4066()
{
	var_44_string = "k11q01"; // 0xfe3 PushS
	var_45_int = 5; // 0xfe4 PushI
	SetVariable(var_44_string, var_45_int); // 0xfe5 Func
	func_4319(); // 0xfe8 NEW_2
	return 0; // 0xfea Return
}


func_3817(var_516_bool, var_518_string)
{
	var_519_int = 0; var_520_bool = 0; var_521_int = 0; var_522_bool = 0; // 0xee9 PushV
	GetInvItemByName(var_521_int, var_518_string); // 0xeea Func
	HasItem(var_521_int, var_522_bool); // 0xeec ObjFunc
	var_516_bool = var_522_bool; // 0xeee Mov
	return 4; // 0xeef Return
}


func_4075()
{
	var_251_string = "playsound"; // 0xfec PushS
	var_252_string = "givemoney"; // 0xfed PushS
	TriggerWorld(var_251_string, var_252_string); // 0xfee Func
	return 0; // 0xff0 Return
}


func_4332()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x10ec PushV
	var_83_int = 731; // 0x10ed PushI
	var_84_int = 1; // 0x10ee PushI
	var_85_int = 539361; // 0x10ef PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x10f0 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x10f2 PushV
	var_87_object = var_82_object; // 0x10f3 Mov
	var_88_int = 729; // 0x10f4 MovI
	func_4449(var_86_bool, var_87_object, var_88_int); // 0x10f5 NEW_2
	return 2; // 0x10f7 Return
}


func_4587(var_733_bool, var_734_int)
{
	var_735_int = 0; var_736_int = 0; // 0x11eb PushV
	var_737_string = "vol_"; // 0x11ec PushS
	var_738_int = var_737_string + var_734_int; // 0x11ed Add
	GetVariable(var_738_int, var_736_int); // 0x11ee Func
	var_739_int = 16; // 0x11f0 PushI
	var_740_int = var_736_int & var_739_int; // 0x11f1 And
	var_741_int = 0; // 0x11f2 PushI
	var_733_bool = var_740_int != var_741_int; // 0x11f3 Neq2
	return 2; // 0x11f4 Return
}


func_750(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x2ee PushV
	var_0_object = var_60_object; // 0x2ef TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x2f0 PushV
	var_71_object = var_60_object; // 0x2f1 Mov
	var_72_float = 70.0; // 0x2f2 MovF
	func_3427(var_71_object, var_72_float); // 0x2f3 NEW_2
	var_117_bool = var_70_bool == 0; // 0x2f5 Not
	if(var_117_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_59_int = -2; // 0x2f7 MovI
	return 8; // 0x2f8 Return
	
Label_761:
	CreateDialog(var_66_object); // 0x2f9 Func
	var_118_int = 0; // 0x2fb PushV
	func_3882(var_118_int); // 0x2fc NEW_2
	SetNPCName(var_118_int); // 0x2fe ObjFunc
	var_119_int = 0; // 0x300 PushV
	func_3880(var_119_int); // 0x301 NEW_2
	SetNPCDescription(var_119_int); // 0x303 ObjFunc
	var_120_string = ""; // 0x305 PushV
	func_3884(var_120_string); // 0x306 NEW_2
	SetPhoto(var_120_string); // 0x308 ObjFunc
	var_121_string = ""; // 0x30a PushV
	func_3886(var_121_string); // 0x30b NEW_2
	SetPhoto2(var_121_string); // 0x30d ObjFunc
	var_122_int = 0; // 0x30f PushV
	func_4527(var_122_int); // 0x310 NEW_2
	SetPlayerName(var_122_int); // 0x312 ObjFunc
	var_68_int = -1; // 0x314 MovI
	IsOverrideActive(var_67_bool); // 0x315 Func
	var_130_bool = var_67_bool; // 0x317 Push
	if(var_130_bool == 0) goto Label_795; // 0x318 JumpB
	var_59_int = -2; // 0x319 MovI
	return 8; // 0x31a Return
	
Label_795:
	DoDialog(var_66_object); // 0x31b Func
	var_131_bool = 0; var_132_object = Obj(); // 0x31d PushV
	var_133_object = Obj(); // 0x31e PushV
	func_3705(var_133_object); // 0x31f NEW_2
	var_132_object = var_133_object; // 0x320 Mov
	func_3514(var_131_bool, var_132_object); // 0x322 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x324 PushV
	var_226_object = var_60_object; // 0x325 Mov
	var_227_object = var_66_object; // 0x326 Mov
	TaskCall(5); // 0x327 TaskCall
	func_831(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object); // 0x328 NEW_2
	TaskReturn(); // 0x329 TaskReturn
	IsDialogEnd(var_69_bool); // 0x32b ObjFunc
	
Label_813:
	var_275_bool = var_69_bool == 0; // 0x32d Not
	if(var_275_bool == 0) goto Label_820; // 0x32e JumpB
	sync(); // 0x32f Func
	IsDialogEnd(var_69_bool); // 0x331 ObjFunc
	goto Label_813; // 0x333 Jump
	
Label_820:
	var_276_object = Obj(); // 0x334 PushV
	var_276_object = var_60_object; // 0x335 Mov
	func_3496(); // 0x336 NEW_2
	StopDialog(var_66_object); // 0x338 Func
	GetReturnValue(var_68_int); // 0x33a ObjFunc
	var_59_int = var_68_int; // 0x33c Mov
	return 8; // 0x33d Return
}


func_3312()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xcf0 PushV
	WaitForAnimEnd(); // 0xcf1 Func
	var_52_bool = 0; // 0xcf3 PushV
	func_3422(var_52_bool); // 0xcf4 NEW_2
	var_53_bool = var_52_bool == 0; // 0xcf6 Not
	if(var_53_bool == 0) goto Label_3321; // 0xcf7 JumpB
	return 12; // 0xcf8 Return
	
Label_3321:
	var_54_int = 0; // 0xcf9 PushV
	func_3863(var_54_int); // 0xcfa NEW_2
	var_46_int = var_54_int; // 0xcfb Mov
	var_47_int = 0; // 0xcfd MovI
	
Label_3326:
	var_67_bool = 0; // 0xcfe PushV
	var_67_bool = 0; // 0xcff MovB
	var_68_int = 5; // 0xd00 PushI
	var_69_bool = var_47_int < var_68_int; // 0xd01 LT
	if(var_69_bool == 0) goto Label_3336; // 0xd02 JumpB
	var_70_bool = 0; // 0xd03 PushV
	func_3422(var_70_bool); // 0xd04 NEW_2
	if(var_70_bool == 0) goto Label_3336; // 0xd06 JumpB
	var_67_bool = 1; // 0xd07 MovB
	
Label_3336:
	if(var_67_bool == 0) goto Label_3378; // 0xd08 JumpB
	var_71_bool = var_46_int == 0; // 0xd09 Not
	if(var_71_bool == 0) goto Label_3346; // 0xd0a JumpB
	var_72_int = 3; // 0xd0b PushI
	Sleep(var_72_int, var_48_bool); // 0xd0c Func
	var_73_bool = var_48_bool == 0; // 0xd0e Not
	if(var_73_bool == 0) goto Label_3345; // 0xd0f JumpB
	goto Label_3378; // 0xd10 Jump
	
Label_3378:
	ResetAAS(); // 0xd32 Func
	return 12; // 0xd34 Return
	
Label_3345:
	goto Label_3367; // 0xd11 Jump
	
Label_3367:
	var_74_bool = 0; // 0xd27 PushV
	func_3381(var_74_bool); // 0xd28 NEW_2
	var_75_bool = var_74_bool == 0; // 0xd2a Not
	if(var_75_bool == 0) goto Label_3373; // 0xd2b JumpB
	goto Label_3378; // 0xd2c Jump
	
Label_3373:
	ResetAAS(); // 0xd2d Func
	var_76_int = 1; // 0xd2f PushI
	var_47_int = var_47_int + var_76_int; // 0xd30 Add2
	goto Label_3326; // 0xd31 Jump
	
Label_3346:
	irand(var_49_int, var_46_int); // 0xd12 Func
	var_77_int = 5; // 0xd14 PushI
	irand(var_50_int, var_77_int); // 0xd15 Func
	var_78_int = 0; // 0xd17 PushI
	var_79_bool = var_50_int != var_78_int; // 0xd18 Neq
	if(var_79_bool == 0) goto Label_3355; // 0xd19 JumpB
	var_49_int = 0; // 0xd1a MovI
	
Label_3355:
	var_80_string = "all"; // 0xd1b PushS
	var_81_string = ""; var_82_int = 0; // 0xd1c PushV
	var_82_int = var_49_int; // 0xd1d Mov
	func_3856(var_81_string, var_82_int); // 0xd1e NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xd20 Func
	WaitForAnimEnd(var_51_bool); // 0xd22 Func
	var_83_bool = var_51_bool == 0; // 0xd24 Not
	if(var_83_bool == 0) goto Label_3367; // 0xd25 JumpB
	goto Label_3378; // 0xd26 Jump
}


func_3824(var_99_bool, var_100_string, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0xef0 PushV
	FindActor(var_103_object, var_100_string); // 0xef1 Func
	var_104_bool = var_103_object == 0; // 0xef3 NullEq
	if(var_104_bool == 0) goto Label_3831; // 0xef4 JumpB
	var_99_bool = 0; // 0xef5 MovB
	return 2; // 0xef6 Return
	
Label_3831:
	Trigger(var_103_object, var_101_string); // 0xef7 Func
	var_99_bool = 1; // 0xef9 MovB
	return 2; // 0xefa Return
}


func_4081()
{
	var_107_string = "playsound"; // 0xff2 PushS
	var_108_string = "giveitem"; // 0xff3 PushS
	TriggerWorld(var_107_string, var_108_string); // 0xff4 Func
	return 0; // 0xff6 Return
}


func_2292(var_0_object, var_1_object, var_2_object, var_3_string, var_645_object, var_646_object)
{
	var_0_object = var_646_object; // 0x8f5 TMov
	var_1_object = var_645_object; // 0x8f6 TMov
	var_3_string = 0; // 0x8f7 TMovB
	var_651_int = 1; // 0x8f8 PushI
	if(var_651_int == 0) goto Label_2395; // 0x8f9 JumpB
	var_652_bool = 0; // 0x8fa PushV
	var_652_bool = 0; // 0x8fb MovB
	var_653_bool = 0; var_654_object = Obj(); // 0x8fc PushV
	var_654_object = var_1_object; // 0x8fd MovT
	func_4301(var_654_object); // 0x8fe NEW_2
	if(var_653_bool == 0) goto Label_2312; // 0x900 JumpB
	var_659_bool = 0; var_660_object = Obj(); // 0x901 PushV
	var_660_object = var_1_object; // 0x902 MovT
	func_4134(var_660_object); // 0x903 NEW_2
	var_665_bool = var_659_bool == 0; // 0x905 Not
	if(var_665_bool == 0) goto Label_2312; // 0x906 JumpB
	var_652_bool = 1; // 0x907 MovB
	
Label_2312:
	if(var_652_bool == 0) goto Label_2343; // 0x908 JumpB
	var_666_object = Obj(); var_667_object = Obj(); // 0x909 PushV
	var_666_object = var_1_object; // 0x90a MovT
	var_667_object = var_0_object; // 0x90b MovT
	func_4087(); // 0x90c NEW_2
	var_670_object = Obj(); var_671_object = Obj(); // 0x90e PushV
	var_670_object = var_1_object; // 0x90f MovT
	var_671_object = var_0_object; // 0x910 MovT
	func_4118(); // 0x911 NEW_2
	var_674_string = ""; // 0x913 PushV
	var_674_string = "Neutral"; // 0x914 MovS
	func_2425(var_646_object, var_674_string); // 0x915 NEW_2
	var_682_int = 539318; // 0x917 PushI
	SetMessage(var_682_int); // 0x918 TObjFunc
	ClearReplies(); // 0x91a TObjFunc
	var_683_int = 541446; // 0x91c PushI
	var_684_int = 45384; // 0x91d PushI
	var_685_int = 43602; // 0x91e PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x91f TObjFunc
	var_686_int = 542944; // 0x921 PushI
	var_687_int = 45384; // 0x922 PushI
	var_688_int = 45383; // 0x923 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x924 TObjFunc
	goto Label_2395; // 0x926 Jump
	
Label_2395:
	var_689_bool = 0; // 0x95b PushV
	func_3888(var_689_bool); // 0x95c NEW_2
	if(var_689_bool == 0) goto Label_2410; // 0x95e JumpB
	
Label_2399:
	lshWaitForAnimEnd(); // 0x95f Func
	var_690_string = var_3_string; // 0x961 PushT
	if(var_690_string == 0) goto Label_2404; // 0x962 JumpB
	goto Label_2409; // 0x963 Jump
	
Label_2409:
	goto Label_2424; // 0x969 Jump
	
Label_2424:
	return 0; // 0x978 Return
	
Label_2404:
	var_691_string = ""; // 0x964 PushV
	var_691_string = var_2_object; // 0x965 MovT
	func_3652(var_691_string); // 0x966 NEW_2
	goto Label_2399; // 0x968 Jump
	
Label_2410:
	var_692_string = "all"; // 0x96a PushS
	var_693_string = "idle"; // 0x96b PushS
	PlayAnimation(var_692_string, var_693_string); // 0x96c Func
	
Label_2414:
	WaitForAnimEnd(); // 0x96e Func
	var_694_string = var_3_string; // 0x970 PushT
	if(var_694_string == 0) goto Label_2419; // 0x971 JumpB
	goto Label_2424; // 0x972 Jump
	
Label_2419:
	var_695_string = "all"; // 0x973 PushS
	var_696_string = "idle"; // 0x974 PushS
	PlayAnimation(var_695_string, var_696_string); // 0x975 Func
	goto Label_2414; // 0x977 Jump
	
Label_2343:
	var_697_object = Obj(); var_698_object = Obj(); // 0x927 PushV
	var_697_object = var_1_object; // 0x928 MovT
	var_698_object = var_0_object; // 0x929 MovT
	func_4118(); // 0x92a NEW_2
	var_699_string = ""; // 0x92c PushV
	var_699_string = "Neutral"; // 0x92d MovS
	func_2425(var_646_object, var_699_string); // 0x92e NEW_2
	var_700_int = 539331; // 0x930 PushI
	SetMessage(var_700_int); // 0x931 TObjFunc
	ClearReplies(); // 0x933 TObjFunc
	var_701_bool = 0; // 0x935 PushV
	var_701_bool = 0; // 0x936 MovB
	var_702_bool = 0; // 0x937 PushV
	var_702_bool = 0; // 0x938 MovB
	var_703_bool = 0; var_704_object = Obj(); // 0x939 PushV
	var_704_object = var_1_object; // 0x93a MovT
	func_4124(var_703_bool, var_704_object); // 0x93b NEW_2
	if(var_703_bool == 0) goto Label_2373; // 0x93d JumpB
	var_752_bool = 0; var_753_object = Obj(); // 0x93e PushV
	var_753_object = var_1_object; // 0x93f MovT
	func_4289(var_753_object); // 0x940 NEW_2
	var_758_bool = var_752_bool == 0; // 0x942 Not
	if(var_758_bool == 0) goto Label_2373; // 0x943 JumpB
	var_702_bool = 1; // 0x944 MovB
	
Label_2373:
	if(var_702_bool == 0) goto Label_2381; // 0x945 JumpB
	var_759_bool = 0; var_760_object = Obj(); // 0x946 PushV
	var_760_object = var_1_object; // 0x947 MovT
	func_4134(var_760_object); // 0x948 NEW_2
	var_761_bool = var_759_bool == 0; // 0x94a Not
	if(var_761_bool == 0) goto Label_2381; // 0x94b JumpB
	var_701_bool = 1; // 0x94c MovB
	
Label_2381:
	if(var_701_bool == 0) goto Label_2387; // 0x94d JumpB
	var_762_int = 539332; // 0x94e PushI
	var_763_int = 41277; // 0x94f PushI
	var_764_int = 41276; // 0x950 PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x951 TObjFunc
	
Label_2387:
	var_765_int = 539335; // 0x953 PushI
	var_766_int = -1; // 0x954 PushI
	var_767_int = 41279; // 0x955 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0x956 TObjFunc
	goto Label_2395; // 0x958 Jump
}


func_3572(var_142_bool)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; // 0xdf4 PushV
	var_149_string = "c"; // 0xdf5 MovS
	var_150_int = 0; // 0xdf6 MovI
	
Label_3575:
	var_154_int = 1; // 0xdf7 PushI
	if(var_154_int == 0) goto Label_3588; // 0xdf8 JumpB
	var_155_int = 1; // 0xdf9 PushI
	var_156_int = var_150_int + var_155_int; // 0xdfa Add
	var_157_int = var_149_string + var_156_int; // 0xdfb Add
	HasProperty(var_157_int, var_151_bool); // 0xdfc ObjFunc
	var_158_bool = var_151_bool == 0; // 0xdfe Not
	if(var_158_bool == 0) goto Label_3585; // 0xdff JumpB
	goto Label_3588; // 0xe00 Jump
	
Label_3588:
	var_159_bool = var_150_int == 0; // 0xe04 Not
	if(var_159_bool == 0) goto Label_3592; // 0xe05 JumpB
	var_142_bool = 0; // 0xe06 MovB
	return 10; // 0xe07 Return
	
Label_3592:
	var_152_int = 0; // 0xe08 MovI
	var_160_int = 1; // 0xe09 PushI
	var_161_bool = var_150_int > var_160_int; // 0xe0a GT
	if(var_161_bool == 0) goto Label_3598; // 0xe0b JumpB
	irand(var_152_int, var_150_int); // 0xe0c Func
	
Label_3598:
	var_162_int = 1; // 0xe0e PushI
	var_163_int = var_152_int + var_162_int; // 0xe0f Add
	var_164_int = var_149_string + var_163_int; // 0xe10 Add
	GetProperty(var_164_int, var_153_string); // 0xe11 ObjFunc
	var_165_bool = 0; var_166_string = ""; // 0xe13 PushV
	var_166_string = var_153_string; // 0xe14 Mov
	func_3683(var_165_bool, var_166_string); // 0xe15 NEW_2
	var_142_bool = var_165_bool; // 0xe16 Mov
	return 10; // 0xe18 Return
	
Label_3585:
	var_171_int = 1; // 0xe01 PushI
	var_150_int = var_150_int + var_171_int; // 0xe02 Add2
	goto Label_3575; // 0xe03 Jump
}


func_4597(var_707_bool)
{
	var_708_object = Obj(); var_709_int = 0; var_710_int = 0; var_711_int = 0; var_712_object = Obj(); var_713_int = 0; var_714_int = 0; var_715_int = 0; // 0x11f5 PushV
	CreateIntVector(var_712_object); // 0x11f6 Func
	var_716_object = Obj(); var_717_bool = 0; var_718_int = 0; // 0x11f8 PushV
	var_716_object = var_712_object; // 0x11f9 Mov
	var_717_bool = 0; // 0x11fa MovB
	var_718_int = -1; // 0x11fb MovI
	func_4544(var_717_bool, var_718_int); // 0x11fc NEW_2
	size(var_713_int); // 0x11fe ObjFunc
	var_714_int = 0; // 0x1200 MovI
	
Label_4609:
	var_731_bool = var_714_int < var_713_int; // 0x1201 LT
	if(var_731_bool == 0) goto Label_4632; // 0x1202 JumpB
	get(var_715_int, var_714_int); // 0x1203 ObjFunc
	var_732_bool = 0; // 0x1205 PushV
	var_732_bool = 1; // 0x1206 MovB
	var_733_bool = 0; var_734_int = 0; // 0x1207 PushV
	var_734_int = var_715_int; // 0x1208 Mov
	func_4587(var_733_bool, var_734_int); // 0x1209 NEW_2
	if(var_733_bool == 0) goto Label_4626; // 0x120b JumpB
	var_742_bool = 0; var_743_int = 0; // 0x120c PushV
	var_743_int = var_715_int; // 0x120d Mov
	func_4577(var_742_bool, var_743_int); // 0x120e NEW_2
	if(var_742_bool == 0) goto Label_4626; // 0x1210 JumpB
	var_732_bool = 0; // 0x1211 MovB
	
Label_4626:
	if(var_732_bool == 0) goto Label_4629; // 0x1212 JumpB
	var_707_bool = 0; // 0x1213 MovB
	return 8; // 0x1214 Return
	
Label_4629:
	var_751_int = 1; // 0x1215 PushI
	var_714_int = var_714_int + var_751_int; // 0x1216 Add2
	goto Label_4609; // 0x1217 Jump
	
Label_4632:
	var_707_bool = 1; // 0x1218 MovB
	return 8; // 0x1219 Return
}


func_4087()
{
	var_668_string = "ook12BurahFactory1"; // 0xff8 PushS
	var_669_int = 1; // 0xff9 PushI
	SetVariable(var_668_string, var_669_int); // 0xffa Func
	return 0; // 0xffc Return
}


func_4345()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x10f9 PushV
	var_54_int = 738; // 0x10fa PushI
	var_55_int = 1; // 0x10fb PushI
	var_56_int = 539368; // 0x10fc PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0x10fd Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x10ff PushV
	var_58_object = var_53_object; // 0x1100 Mov
	var_59_int = 729; // 0x1101 MovI
	func_4449(var_57_bool, var_58_object, var_59_int); // 0x1102 NEW_2
	return 2; // 0x1104 Return
}


func_3836(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0xefc PushV
	GetGameTime(var_59_float); // 0xefd Func
	var_57_float = var_59_float; // 0xeff Mov
	return 2; // 0xf00 Return
}


func_4093()
{
	var_79_string = "k12q01BurahInSobor"; // 0xffe PushS
	var_80_int = 1; // 0xfff PushI
	SetVariable(var_79_string, var_80_int); // 0x1000 Func
	func_4332(); // 0x1003 NEW_2
	return 0; // 0x1005 Return
}


