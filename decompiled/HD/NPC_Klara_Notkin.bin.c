task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xac PushI
	if(var_33_int == 0) goto Label_502; // 0xad JumpB
	func_2539(); // 0xaf NEW_2
	var_35_int = 26110; // 0xb1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xb2 Eq
	if(var_36_bool == 0) goto Label_185; // 0xb3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xb4 PushV
	var_37_object = var_1_object; // 0xb5 MovT
	var_38_object = var_0_object; // 0xb6 MovT
	func_2655(); // 0xb7 NEW_2
	
Label_185:
	var_64_int = 28176; // 0xb9 PushI
	var_65_bool = var_32_cvector == var_64_int; // 0xba Eq
	if(var_65_bool == 0) goto Label_203; // 0xbb JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0xbc PushV
	var_66_object = var_1_object; // 0xbd MovT
	var_67_object = var_0_object; // 0xbe MovT
	func_2655(); // 0xbf NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xc1 PushV
	var_68_object = var_1_object; // 0xc2 MovT
	var_69_object = var_0_object; // 0xc3 MovT
	func_2701(var_69_object); // 0xc4 NEW_2
	var_92_object = Obj(); var_93_object = Obj(); // 0xc6 PushV
	var_92_object = var_1_object; // 0xc7 MovT
	var_93_object = var_0_object; // 0xc8 MovT
	func_2695(); // 0xc9 NEW_2
	
Label_203:
	var_96_int = 40900; // 0xcb PushI
	var_97_bool = var_32_cvector == var_96_int; // 0xcc Eq
	if(var_97_bool == 0) goto Label_211; // 0xcd JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xce PushV
	var_98_object = var_1_object; // 0xcf MovT
	var_99_object = var_0_object; // 0xd0 MovT
	func_2655(); // 0xd1 NEW_2
	
Label_211:
	var_100_int = 40901; // 0xd3 PushI
	var_101_bool = var_32_cvector == var_100_int; // 0xd4 Eq
	if(var_101_bool == 0) goto Label_219; // 0xd5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xd6 PushV
	var_102_object = var_1_object; // 0xd7 MovT
	var_103_object = var_0_object; // 0xd8 MovT
	func_2655(); // 0xd9 NEW_2
	
Label_219:
	var_104_int = 40902; // 0xdb PushI
	var_105_bool = var_32_cvector == var_104_int; // 0xdc Eq
	if(var_105_bool == 0) goto Label_227; // 0xdd JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xde PushV
	var_106_object = var_1_object; // 0xdf MovT
	var_107_object = var_0_object; // 0xe0 MovT
	func_2655(); // 0xe1 NEW_2
	
Label_227:
	var_108_int = 26106; // 0xe3 PushI
	var_109_bool = var_31_bool == var_108_int; // 0xe4 Eq
	if(var_109_bool == 0) goto Label_260; // 0xe5 JumpB
	var_110_string = ""; // 0xe6 PushV
	var_110_string = "Neutral"; // 0xe7 MovS
	func_149(var_32_cvector, var_110_string); // 0xe8 NEW_2
	var_127_int = 524791; // 0xea PushI
	SetMessage(var_127_int); // 0xeb TObjFunc
	ClearReplies(); // 0xed TObjFunc
	var_128_bool = 0; var_129_object = Obj(); // 0xef PushV
	var_129_object = var_1_object; // 0xf0 MovT
	func_2740(var_129_object); // 0xf1 NEW_2
	if(var_128_bool == 0) goto Label_249; // 0xf3 JumpB
	var_136_int = 524792; // 0xf4 PushI
	var_137_int = 28167; // 0xf5 PushI
	var_138_int = 26107; // 0xf6 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0xf7 TObjFunc
	
Label_249:
	var_139_int = 524793; // 0xf9 PushI
	var_140_int = -1; // 0xfa PushI
	var_141_int = 26108; // 0xfb PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xfc TObjFunc
	var_142_int = 542093; // 0xfe PushI
	var_143_int = -1; // 0xff PushI
	var_144_int = 44393; // 0x100 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x101 TObjFunc
	return 0; // 0x103 Return
	
Label_260:
	var_145_int = 28167; // 0x104 PushI
	var_146_bool = var_31_bool == var_145_int; // 0x105 Eq
	if(var_146_bool == 0) goto Label_283; // 0x106 JumpB
	var_147_string = ""; // 0x107 PushV
	var_147_string = "Distrust"; // 0x108 MovS
	func_149(var_32_cvector, var_147_string); // 0x109 NEW_2
	var_148_int = 526880; // 0x10b PushI
	SetMessage(var_148_int); // 0x10c TObjFunc
	ClearReplies(); // 0x10e TObjFunc
	var_149_int = 526881; // 0x110 PushI
	var_150_int = 28169; // 0x111 PushI
	var_151_int = 28168; // 0x112 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x113 TObjFunc
	var_152_int = 542094; // 0x115 PushI
	var_153_int = 28169; // 0x116 PushI
	var_154_int = 44394; // 0x117 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_155_int = 28169; // 0x11b PushI
	var_156_bool = var_31_bool == var_155_int; // 0x11c Eq
	if(var_156_bool == 0) goto Label_306; // 0x11d JumpB
	var_157_string = ""; // 0x11e PushV
	var_157_string = "Distrust"; // 0x11f MovS
	func_149(var_32_cvector, var_157_string); // 0x120 NEW_2
	var_158_int = 526882; // 0x122 PushI
	SetMessage(var_158_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_159_int = 538926; // 0x127 PushI
	var_160_int = 40882; // 0x128 PushI
	var_161_int = 40881; // 0x129 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x12a TObjFunc
	var_162_int = 538934; // 0x12c PushI
	var_163_int = 40882; // 0x12d PushI
	var_164_int = 40891; // 0x12e PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_165_int = 40882; // 0x132 PushI
	var_166_bool = var_31_bool == var_165_int; // 0x133 Eq
	if(var_166_bool == 0) goto Label_334; // 0x134 JumpB
	var_167_string = ""; // 0x135 PushV
	var_167_string = "Smile"; // 0x136 MovS
	func_149(var_32_cvector, var_167_string); // 0x137 NEW_2
	var_168_int = 538927; // 0x139 PushI
	SetMessage(var_168_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_169_int = 526883; // 0x13e PushI
	var_170_int = 26109; // 0x13f PushI
	var_171_int = 28170; // 0x140 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x141 TObjFunc
	var_172_bool = 0; var_173_object = Obj(); // 0x143 PushV
	var_173_object = var_1_object; // 0x144 MovT
	func_2728(var_173_object); // 0x145 NEW_2
	if(var_172_bool == 0) goto Label_333; // 0x147 JumpB
	var_178_int = 538928; // 0x148 PushI
	var_179_int = 40884; // 0x149 PushI
	var_180_int = 40883; // 0x14a PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x14b TObjFunc
	
Label_333:
	return 0; // 0x14d Return
	
Label_334:
	var_181_int = 40884; // 0x14e PushI
	var_182_bool = var_31_bool == var_181_int; // 0x14f Eq
	if(var_182_bool == 0) goto Label_357; // 0x150 JumpB
	var_183_string = ""; // 0x151 PushV
	var_183_string = "Think"; // 0x152 MovS
	func_149(var_32_cvector, var_183_string); // 0x153 NEW_2
	var_184_int = 538929; // 0x155 PushI
	SetMessage(var_184_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_185_int = 538930; // 0x15a PushI
	var_186_int = 40886; // 0x15b PushI
	var_187_int = 40885; // 0x15c PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x15d TObjFunc
	var_188_int = 538932; // 0x15f PushI
	var_189_int = 40886; // 0x160 PushI
	var_190_int = 40887; // 0x161 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_191_int = 40886; // 0x165 PushI
	var_192_bool = var_31_bool == var_191_int; // 0x166 Eq
	if(var_192_bool == 0) goto Label_380; // 0x167 JumpB
	var_193_string = ""; // 0x168 PushV
	var_193_string = "Think"; // 0x169 MovS
	func_149(var_32_cvector, var_193_string); // 0x16a NEW_2
	var_194_int = 538931; // 0x16c PushI
	SetMessage(var_194_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_195_int = 538935; // 0x171 PushI
	var_196_int = 40897; // 0x172 PushI
	var_197_int = 40893; // 0x173 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x174 TObjFunc
	var_198_int = 538937; // 0x176 PushI
	var_199_int = 40897; // 0x177 PushI
	var_200_int = 40895; // 0x178 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_201_int = 40897; // 0x17c PushI
	var_202_bool = var_31_bool == var_201_int; // 0x17d Eq
	if(var_202_bool == 0) goto Label_408; // 0x17e JumpB
	var_203_string = ""; // 0x17f PushV
	var_203_string = "Triumph"; // 0x180 MovS
	func_149(var_32_cvector, var_203_string); // 0x181 NEW_2
	var_204_int = 538939; // 0x183 PushI
	SetMessage(var_204_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_205_int = 538940; // 0x188 PushI
	var_206_int = -1; // 0x189 PushI
	var_207_int = 40900; // 0x18a PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x18b TObjFunc
	var_208_int = 538941; // 0x18d PushI
	var_209_int = -1; // 0x18e PushI
	var_210_int = 40901; // 0x18f PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x190 TObjFunc
	var_211_int = 538942; // 0x192 PushI
	var_212_int = -1; // 0x193 PushI
	var_213_int = 40902; // 0x194 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_214_int = 26109; // 0x198 PushI
	var_215_bool = var_31_bool == var_214_int; // 0x199 Eq
	if(var_215_bool == 0) goto Label_431; // 0x19a JumpB
	var_216_string = ""; // 0x19b PushV
	var_216_string = "Distrust"; // 0x19c MovS
	func_149(var_32_cvector, var_216_string); // 0x19d NEW_2
	var_217_int = 524794; // 0x19f PushI
	SetMessage(var_217_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_218_int = 526890; // 0x1a4 PushI
	var_219_int = 28178; // 0x1a5 PushI
	var_220_int = 28177; // 0x1a6 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1a7 TObjFunc
	var_221_int = 526885; // 0x1a9 PushI
	var_222_int = 28173; // 0x1aa PushI
	var_223_int = 28172; // 0x1ab PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_224_int = 28173; // 0x1af PushI
	var_225_bool = var_31_bool == var_224_int; // 0x1b0 Eq
	if(var_225_bool == 0) goto Label_454; // 0x1b1 JumpB
	var_226_string = ""; // 0x1b2 PushV
	var_226_string = "Smile"; // 0x1b3 MovS
	func_149(var_32_cvector, var_226_string); // 0x1b4 NEW_2
	var_227_int = 526886; // 0x1b6 PushI
	SetMessage(var_227_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_228_int = 524795; // 0x1bb PushI
	var_229_int = -1; // 0x1bc PushI
	var_230_int = 26110; // 0x1bd PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1be TObjFunc
	var_231_int = 526887; // 0x1c0 PushI
	var_232_int = 28175; // 0x1c1 PushI
	var_233_int = 28174; // 0x1c2 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1c3 TObjFunc
	return 0; // 0x1c5 Return
	
Label_454:
	var_234_int = 28175; // 0x1c6 PushI
	var_235_bool = var_31_bool == var_234_int; // 0x1c7 Eq
	if(var_235_bool == 0) goto Label_472; // 0x1c8 JumpB
	var_236_string = ""; // 0x1c9 PushV
	var_236_string = "Smile"; // 0x1ca MovS
	func_149(var_32_cvector, var_236_string); // 0x1cb NEW_2
	var_237_int = 526888; // 0x1cd PushI
	SetMessage(var_237_int); // 0x1ce TObjFunc
	ClearReplies(); // 0x1d0 TObjFunc
	var_238_int = 526889; // 0x1d2 PushI
	var_239_int = -1; // 0x1d3 PushI
	var_240_int = 28176; // 0x1d4 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_241_int = 28178; // 0x1d8 PushI
	var_242_bool = var_31_bool == var_241_int; // 0x1d9 Eq
	if(var_242_bool == 0) goto Label_490; // 0x1da JumpB
	var_243_string = ""; // 0x1db PushV
	var_243_string = "Distrust"; // 0x1dc MovS
	func_149(var_32_cvector, var_243_string); // 0x1dd NEW_2
	var_244_int = 526891; // 0x1df PushI
	SetMessage(var_244_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_245_int = 538936; // 0x1e4 PushI
	var_246_int = 40886; // 0x1e5 PushI
	var_247_int = 40894; // 0x1e6 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_3_string = 1; // 0x1ea TMovB
	var_248_bool = 0; // 0x1eb PushV
	func_2918(var_248_bool); // 0x1ec NEW_2
	if(var_248_bool == 0) goto Label_498; // 0x1ee JumpB
	lshStopAnimation(); // 0x1ef Func
	goto Label_500; // 0x1f1 Jump
	
Label_500:
	return 0; // 0x1f4 Return
	
Label_498:
	StopAnimation(); // 0x1f2 Func
	
Label_502:
	return 0; // 0x1f6 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x299 PushI
	if(var_33_int == 0) goto Label_705; // 0x29a JumpB
	func_2539(); // 0x29c NEW_2
	var_35_int = 26872; // 0x29e PushI
	var_36_bool = var_31_bool == var_35_int; // 0x29f Eq
	if(var_36_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_37_string = ""; // 0x2a1 PushV
	var_37_string = "Neutral"; // 0x2a2 MovS
	func_642(var_32_cvector, var_37_string); // 0x2a3 NEW_2
	var_54_int = 525516; // 0x2a5 PushI
	SetMessage(var_54_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_55_int = 525517; // 0x2aa PushI
	var_56_int = -1; // 0x2ab PushI
	var_57_int = 26873; // 0x2ac PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x2ad TObjFunc
	var_58_int = 526273; // 0x2af PushI
	var_59_int = -1; // 0x2b0 PushI
	var_60_int = 27549; // 0x2b1 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_3_string = 1; // 0x2b5 TMovB
	var_61_bool = 0; // 0x2b6 PushV
	func_2918(var_61_bool); // 0x2b7 NEW_2
	if(var_61_bool == 0) goto Label_701; // 0x2b9 JumpB
	lshStopAnimation(); // 0x2ba Func
	goto Label_703; // 0x2bc Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_701:
	StopAnimation(); // 0x2bd Func
	
Label_705:
	return 0; // 0x2c1 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x36e PushI
	if(var_33_int == 0) goto Label_1100; // 0x36f JumpB
	func_2539(); // 0x371 NEW_2
	var_35_int = 27017; // 0x373 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x374 Eq
	if(var_36_bool == 0) goto Label_891; // 0x375 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x376 PushV
	var_37_object = var_1_object; // 0x377 MovT
	var_38_object = var_0_object; // 0x378 MovT
	func_2664(); // 0x379 NEW_2
	
Label_891:
	var_64_int = 27014; // 0x37b PushI
	var_65_bool = var_31_bool == var_64_int; // 0x37c Eq
	if(var_65_bool == 0) goto Label_924; // 0x37d JumpB
	var_66_string = ""; // 0x37e PushV
	var_66_string = "Smile"; // 0x37f MovS
	func_855(var_32_cvector, var_66_string); // 0x380 NEW_2
	var_83_int = 525691; // 0x382 PushI
	SetMessage(var_83_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_84_bool = 0; var_85_object = Obj(); // 0x387 PushV
	var_85_object = var_1_object; // 0x388 MovT
	func_2752(var_85_object); // 0x389 NEW_2
	if(var_84_bool == 0) goto Label_913; // 0x38b JumpB
	var_92_int = 525692; // 0x38c PushI
	var_93_int = 30673; // 0x38d PushI
	var_94_int = 27015; // 0x38e PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x38f TObjFunc
	
Label_913:
	var_95_int = 525695; // 0x391 PushI
	var_96_int = -1; // 0x392 PushI
	var_97_int = 27018; // 0x393 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x394 TObjFunc
	var_98_int = 542396; // 0x396 PushI
	var_99_int = -1; // 0x397 PushI
	var_100_int = 44768; // 0x398 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x399 TObjFunc
	return 0; // 0x39b Return
	
Label_924:
	var_101_int = 30673; // 0x39c PushI
	var_102_bool = var_31_bool == var_101_int; // 0x39d Eq
	if(var_102_bool == 0) goto Label_947; // 0x39e JumpB
	var_103_string = ""; // 0x39f PushV
	var_103_string = "Pride"; // 0x3a0 MovS
	func_855(var_32_cvector, var_103_string); // 0x3a1 NEW_2
	var_104_int = 529221; // 0x3a3 PushI
	SetMessage(var_104_int); // 0x3a4 TObjFunc
	ClearReplies(); // 0x3a6 TObjFunc
	var_105_int = 529222; // 0x3a8 PushI
	var_106_int = 44776; // 0x3a9 PushI
	var_107_int = 30674; // 0x3aa PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x3ab TObjFunc
	var_108_int = 529223; // 0x3ad PushI
	var_109_int = 44778; // 0x3ae PushI
	var_110_int = 30675; // 0x3af PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x3b0 TObjFunc
	return 0; // 0x3b2 Return
	
Label_947:
	var_111_int = 44778; // 0x3b3 PushI
	var_112_bool = var_31_bool == var_111_int; // 0x3b4 Eq
	if(var_112_bool == 0) goto Label_965; // 0x3b5 JumpB
	var_113_string = ""; // 0x3b6 PushV
	var_113_string = "Think"; // 0x3b7 MovS
	func_855(var_32_cvector, var_113_string); // 0x3b8 NEW_2
	var_114_int = 542404; // 0x3ba PushI
	SetMessage(var_114_int); // 0x3bb TObjFunc
	ClearReplies(); // 0x3bd TObjFunc
	var_115_int = 542405; // 0x3bf PushI
	var_116_int = 44781; // 0x3c0 PushI
	var_117_int = 44779; // 0x3c1 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_118_int = 44781; // 0x3c5 PushI
	var_119_bool = var_31_bool == var_118_int; // 0x3c6 Eq
	if(var_119_bool == 0) goto Label_983; // 0x3c7 JumpB
	var_120_string = ""; // 0x3c8 PushV
	var_120_string = "Neutral"; // 0x3c9 MovS
	func_855(var_32_cvector, var_120_string); // 0x3ca NEW_2
	var_121_int = 542407; // 0x3cc PushI
	SetMessage(var_121_int); // 0x3cd TObjFunc
	ClearReplies(); // 0x3cf TObjFunc
	var_122_int = 542408; // 0x3d1 PushI
	var_123_int = 27016; // 0x3d2 PushI
	var_124_int = 44782; // 0x3d3 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_125_int = 44776; // 0x3d7 PushI
	var_126_bool = var_31_bool == var_125_int; // 0x3d8 Eq
	if(var_126_bool == 0) goto Label_1006; // 0x3d9 JumpB
	var_127_string = ""; // 0x3da PushV
	var_127_string = "Pride"; // 0x3db MovS
	func_855(var_32_cvector, var_127_string); // 0x3dc NEW_2
	var_128_int = 542402; // 0x3de PushI
	SetMessage(var_128_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_129_int = 542403; // 0x3e3 PushI
	var_130_int = 27016; // 0x3e4 PushI
	var_131_int = 44777; // 0x3e5 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x3e6 TObjFunc
	var_132_int = 542406; // 0x3e8 PushI
	var_133_int = 27016; // 0x3e9 PushI
	var_134_int = 44780; // 0x3ea PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_135_int = 27016; // 0x3ee PushI
	var_136_bool = var_31_bool == var_135_int; // 0x3ef Eq
	if(var_136_bool == 0) goto Label_1029; // 0x3f0 JumpB
	var_137_string = ""; // 0x3f1 PushV
	var_137_string = "Think"; // 0x3f2 MovS
	func_855(var_32_cvector, var_137_string); // 0x3f3 NEW_2
	var_138_int = 525693; // 0x3f5 PushI
	SetMessage(var_138_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_139_int = 542409; // 0x3fa PushI
	var_140_int = 44786; // 0x3fb PushI
	var_141_int = 44785; // 0x3fc PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x3fd TObjFunc
	var_142_int = 542414; // 0x3ff PushI
	var_143_int = 30672; // 0x400 PushI
	var_144_int = 44790; // 0x401 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x402 TObjFunc
	return 0; // 0x404 Return
	
Label_1029:
	var_145_int = 44786; // 0x405 PushI
	var_146_bool = var_31_bool == var_145_int; // 0x406 Eq
	if(var_146_bool == 0) goto Label_1052; // 0x407 JumpB
	var_147_string = ""; // 0x408 PushV
	var_147_string = "Smile"; // 0x409 MovS
	func_855(var_32_cvector, var_147_string); // 0x40a NEW_2
	var_148_int = 542410; // 0x40c PushI
	SetMessage(var_148_int); // 0x40d TObjFunc
	ClearReplies(); // 0x40f TObjFunc
	var_149_int = 529219; // 0x411 PushI
	var_150_int = 30672; // 0x412 PushI
	var_151_int = 30671; // 0x413 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x414 TObjFunc
	var_152_int = 542411; // 0x416 PushI
	var_153_int = 44788; // 0x417 PushI
	var_154_int = 44787; // 0x418 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x419 TObjFunc
	return 0; // 0x41b Return
	
Label_1052:
	var_155_int = 44788; // 0x41c PushI
	var_156_bool = var_31_bool == var_155_int; // 0x41d Eq
	if(var_156_bool == 0) goto Label_1070; // 0x41e JumpB
	var_157_string = ""; // 0x41f PushV
	var_157_string = "Neutral"; // 0x420 MovS
	func_855(var_32_cvector, var_157_string); // 0x421 NEW_2
	var_158_int = 542412; // 0x423 PushI
	SetMessage(var_158_int); // 0x424 TObjFunc
	ClearReplies(); // 0x426 TObjFunc
	var_159_int = 542413; // 0x428 PushI
	var_160_int = 30672; // 0x429 PushI
	var_161_int = 44789; // 0x42a PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x42b TObjFunc
	return 0; // 0x42d Return
	
Label_1070:
	var_162_int = 30672; // 0x42e PushI
	var_163_bool = var_31_bool == var_162_int; // 0x42f Eq
	if(var_163_bool == 0) goto Label_1088; // 0x430 JumpB
	var_164_string = ""; // 0x431 PushV
	var_164_string = "Neutral"; // 0x432 MovS
	func_855(var_32_cvector, var_164_string); // 0x433 NEW_2
	var_165_int = 529220; // 0x435 PushI
	SetMessage(var_165_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_166_int = 525694; // 0x43a PushI
	var_167_int = -1; // 0x43b PushI
	var_168_int = 27017; // 0x43c PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x43d TObjFunc
	return 0; // 0x43f Return
	
Label_1088:
	var_3_string = 1; // 0x440 TMovB
	var_169_bool = 0; // 0x441 PushV
	func_2918(var_169_bool); // 0x442 NEW_2
	if(var_169_bool == 0) goto Label_1096; // 0x444 JumpB
	lshStopAnimation(); // 0x445 Func
	goto Label_1098; // 0x447 Jump
	
Label_1098:
	return 0; // 0x44a Return
	
Label_1096:
	StopAnimation(); // 0x448 Func
	
Label_1100:
	return 0; // 0x44c Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x50e PushI
	if(var_33_int == 0) goto Label_1514; // 0x50f JumpB
	func_2539(); // 0x511 NEW_2
	var_35_int = 29286; // 0x513 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x514 Eq
	if(var_36_bool == 0) goto Label_1312; // 0x515 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x516 PushV
	var_37_object = var_1_object; // 0x517 MovT
	var_38_object = var_0_object; // 0x518 MovT
	func_2679(); // 0x519 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0x51b PushV
	var_55_object = var_1_object; // 0x51c MovT
	var_56_object = var_0_object; // 0x51d MovT
	func_2712(); // 0x51e NEW_2
	
Label_1312:
	var_81_int = 29287; // 0x520 PushI
	var_82_bool = var_32_cvector == var_81_int; // 0x521 Eq
	if(var_82_bool == 0) goto Label_1325; // 0x522 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x523 PushV
	var_83_object = var_1_object; // 0x524 MovT
	var_84_object = var_0_object; // 0x525 MovT
	func_2679(); // 0x526 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0x528 PushV
	var_85_object = var_1_object; // 0x529 MovT
	var_86_object = var_0_object; // 0x52a MovT
	func_2712(); // 0x52b NEW_2
	
Label_1325:
	var_87_int = 29066; // 0x52d PushI
	var_88_bool = var_31_bool == var_87_int; // 0x52e Eq
	if(var_88_bool == 0) goto Label_1379; // 0x52f JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x530 PushV
	var_90_object = var_1_object; // 0x531 MovT
	func_2764(var_90_object); // 0x532 NEW_2
	var_97_bool = var_89_bool == 0; // 0x534 Not
	if(var_97_bool == 0) goto Label_1359; // 0x535 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x536 PushV
	var_98_object = var_1_object; // 0x537 MovT
	var_99_object = var_0_object; // 0x538 MovT
	func_2673(); // 0x539 NEW_2
	var_102_string = ""; // 0x53b PushV
	var_102_string = "Neutral"; // 0x53c MovS
	func_1271(var_32_cvector, var_102_string); // 0x53d NEW_2
	var_119_int = 527714; // 0x53f PushI
	SetMessage(var_119_int); // 0x540 TObjFunc
	ClearReplies(); // 0x542 TObjFunc
	var_120_int = 527715; // 0x544 PushI
	var_121_int = 29269; // 0x545 PushI
	var_122_int = 29067; // 0x546 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x547 TObjFunc
	var_123_int = 527928; // 0x549 PushI
	var_124_int = 29269; // 0x54a PushI
	var_125_int = 29279; // 0x54b PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_126_string = ""; // 0x54f PushV
	var_126_string = "Neutral"; // 0x550 MovS
	func_1271(var_32_cvector, var_126_string); // 0x551 NEW_2
	var_127_int = 527716; // 0x553 PushI
	SetMessage(var_127_int); // 0x554 TObjFunc
	ClearReplies(); // 0x556 TObjFunc
	var_128_int = 527717; // 0x558 PushI
	var_129_int = -1; // 0x559 PushI
	var_130_int = 29069; // 0x55a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x55b TObjFunc
	var_131_int = 527918; // 0x55d PushI
	var_132_int = -1; // 0x55e PushI
	var_133_int = 29268; // 0x55f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x560 TObjFunc
	return 0; // 0x562 Return
	
Label_1379:
	var_134_int = 29269; // 0x563 PushI
	var_135_bool = var_31_bool == var_134_int; // 0x564 Eq
	if(var_135_bool == 0) goto Label_1402; // 0x565 JumpB
	var_136_string = ""; // 0x566 PushV
	var_136_string = "Neutral"; // 0x567 MovS
	func_1271(var_32_cvector, var_136_string); // 0x568 NEW_2
	var_137_int = 527919; // 0x56a PushI
	SetMessage(var_137_int); // 0x56b TObjFunc
	ClearReplies(); // 0x56d TObjFunc
	var_138_int = 527920; // 0x56f PushI
	var_139_int = 29271; // 0x570 PushI
	var_140_int = 29270; // 0x571 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x572 TObjFunc
	var_141_int = 527923; // 0x574 PushI
	var_142_int = 29274; // 0x575 PushI
	var_143_int = 29273; // 0x576 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x577 TObjFunc
	return 0; // 0x579 Return
	
Label_1402:
	var_144_int = 29274; // 0x57a PushI
	var_145_bool = var_31_bool == var_144_int; // 0x57b Eq
	if(var_145_bool == 0) goto Label_1420; // 0x57c JumpB
	var_146_string = ""; // 0x57d PushV
	var_146_string = "Neutral"; // 0x57e MovS
	func_1271(var_32_cvector, var_146_string); // 0x57f NEW_2
	var_147_int = 527924; // 0x581 PushI
	SetMessage(var_147_int); // 0x582 TObjFunc
	ClearReplies(); // 0x584 TObjFunc
	var_148_int = 527925; // 0x586 PushI
	var_149_int = 29276; // 0x587 PushI
	var_150_int = 29275; // 0x588 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x589 TObjFunc
	return 0; // 0x58b Return
	
Label_1420:
	var_151_int = 29276; // 0x58c PushI
	var_152_bool = var_31_bool == var_151_int; // 0x58d Eq
	if(var_152_bool == 0) goto Label_1438; // 0x58e JumpB
	var_153_string = ""; // 0x58f PushV
	var_153_string = "Neutral"; // 0x590 MovS
	func_1271(var_32_cvector, var_153_string); // 0x591 NEW_2
	var_154_int = 527926; // 0x593 PushI
	SetMessage(var_154_int); // 0x594 TObjFunc
	ClearReplies(); // 0x596 TObjFunc
	var_155_int = 527927; // 0x598 PushI
	var_156_int = 29271; // 0x599 PushI
	var_157_int = 29277; // 0x59a PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x59b TObjFunc
	return 0; // 0x59d Return
	
Label_1438:
	var_158_int = 29271; // 0x59e PushI
	var_159_bool = var_31_bool == var_158_int; // 0x59f Eq
	if(var_159_bool == 0) goto Label_1461; // 0x5a0 JumpB
	var_160_string = ""; // 0x5a1 PushV
	var_160_string = "Neutral"; // 0x5a2 MovS
	func_1271(var_32_cvector, var_160_string); // 0x5a3 NEW_2
	var_161_int = 527921; // 0x5a5 PushI
	SetMessage(var_161_int); // 0x5a6 TObjFunc
	ClearReplies(); // 0x5a8 TObjFunc
	var_162_int = 527922; // 0x5aa PushI
	var_163_int = 29282; // 0x5ab PushI
	var_164_int = 29272; // 0x5ac PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x5ad TObjFunc
	var_165_int = 527929; // 0x5af PushI
	var_166_int = 29284; // 0x5b0 PushI
	var_167_int = 29281; // 0x5b1 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x5b2 TObjFunc
	return 0; // 0x5b4 Return
	
Label_1461:
	var_168_int = 29282; // 0x5b5 PushI
	var_169_bool = var_31_bool == var_168_int; // 0x5b6 Eq
	if(var_169_bool == 0) goto Label_1479; // 0x5b7 JumpB
	var_170_string = ""; // 0x5b8 PushV
	var_170_string = "Neutral"; // 0x5b9 MovS
	func_1271(var_32_cvector, var_170_string); // 0x5ba NEW_2
	var_171_int = 527930; // 0x5bc PushI
	SetMessage(var_171_int); // 0x5bd TObjFunc
	ClearReplies(); // 0x5bf TObjFunc
	var_172_int = 527931; // 0x5c1 PushI
	var_173_int = 29284; // 0x5c2 PushI
	var_174_int = 29283; // 0x5c3 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x5c4 TObjFunc
	return 0; // 0x5c6 Return
	
Label_1479:
	var_175_int = 29284; // 0x5c7 PushI
	var_176_bool = var_31_bool == var_175_int; // 0x5c8 Eq
	if(var_176_bool == 0) goto Label_1502; // 0x5c9 JumpB
	var_177_string = ""; // 0x5ca PushV
	var_177_string = "Neutral"; // 0x5cb MovS
	func_1271(var_32_cvector, var_177_string); // 0x5cc NEW_2
	var_178_int = 527932; // 0x5ce PushI
	SetMessage(var_178_int); // 0x5cf TObjFunc
	ClearReplies(); // 0x5d1 TObjFunc
	var_179_int = 527933; // 0x5d3 PushI
	var_180_int = -1; // 0x5d4 PushI
	var_181_int = 29286; // 0x5d5 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x5d6 TObjFunc
	var_182_int = 527934; // 0x5d8 PushI
	var_183_int = -1; // 0x5d9 PushI
	var_184_int = 29287; // 0x5da PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_3_string = 1; // 0x5de TMovB
	var_185_bool = 0; // 0x5df PushV
	func_2918(var_185_bool); // 0x5e0 NEW_2
	if(var_185_bool == 0) goto Label_1510; // 0x5e2 JumpB
	lshStopAnimation(); // 0x5e3 Func
	goto Label_1512; // 0x5e5 Jump
	
Label_1512:
	return 0; // 0x5e8 Return
	
Label_1510:
	StopAnimation(); // 0x5e6 Func
	
Label_1514:
	return 0; // 0x5ea Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x692 PushI
	if(var_33_int == 0) goto Label_1773; // 0x693 JumpB
	func_2539(); // 0x695 NEW_2
	var_35_int = 36960; // 0x697 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x698 Eq
	if(var_36_bool == 0) goto Label_1715; // 0x699 JumpB
	var_37_string = ""; // 0x69a PushV
	var_37_string = "Neutral"; // 0x69b MovS
	func_1659(var_32_cvector, var_37_string); // 0x69c NEW_2
	var_54_int = 535284; // 0x69e PushI
	SetMessage(var_54_int); // 0x69f TObjFunc
	ClearReplies(); // 0x6a1 TObjFunc
	var_55_int = 535285; // 0x6a3 PushI
	var_56_int = 36962; // 0x6a4 PushI
	var_57_int = 36961; // 0x6a5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x6a6 TObjFunc
	var_58_int = 535292; // 0x6a8 PushI
	var_59_int = -1; // 0x6a9 PushI
	var_60_int = 36968; // 0x6aa PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x6ab TObjFunc
	var_61_int = 535293; // 0x6ad PushI
	var_62_int = -1; // 0x6ae PushI
	var_63_int = 36969; // 0x6af PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x6b0 TObjFunc
	return 0; // 0x6b2 Return
	
Label_1715:
	var_64_int = 36962; // 0x6b3 PushI
	var_65_bool = var_31_bool == var_64_int; // 0x6b4 Eq
	if(var_65_bool == 0) goto Label_1738; // 0x6b5 JumpB
	var_66_string = ""; // 0x6b6 PushV
	var_66_string = "Neutral"; // 0x6b7 MovS
	func_1659(var_32_cvector, var_66_string); // 0x6b8 NEW_2
	var_67_int = 535286; // 0x6ba PushI
	SetMessage(var_67_int); // 0x6bb TObjFunc
	ClearReplies(); // 0x6bd TObjFunc
	var_68_int = 535287; // 0x6bf PushI
	var_69_int = 36964; // 0x6c0 PushI
	var_70_int = 36963; // 0x6c1 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x6c2 TObjFunc
	var_71_int = 535291; // 0x6c4 PushI
	var_72_int = -1; // 0x6c5 PushI
	var_73_int = 36967; // 0x6c6 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x6c7 TObjFunc
	return 0; // 0x6c9 Return
	
Label_1738:
	var_74_int = 36964; // 0x6ca PushI
	var_75_bool = var_31_bool == var_74_int; // 0x6cb Eq
	if(var_75_bool == 0) goto Label_1761; // 0x6cc JumpB
	var_76_string = ""; // 0x6cd PushV
	var_76_string = "Neutral"; // 0x6ce MovS
	func_1659(var_32_cvector, var_76_string); // 0x6cf NEW_2
	var_77_int = 535288; // 0x6d1 PushI
	SetMessage(var_77_int); // 0x6d2 TObjFunc
	ClearReplies(); // 0x6d4 TObjFunc
	var_78_int = 535289; // 0x6d6 PushI
	var_79_int = -1; // 0x6d7 PushI
	var_80_int = 36965; // 0x6d8 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x6d9 TObjFunc
	var_81_int = 535290; // 0x6db PushI
	var_82_int = -1; // 0x6dc PushI
	var_83_int = 36966; // 0x6dd PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x6de TObjFunc
	return 0; // 0x6e0 Return
	
Label_1761:
	var_3_string = 1; // 0x6e1 TMovB
	var_84_bool = 0; // 0x6e2 PushV
	func_2918(var_84_bool); // 0x6e3 NEW_2
	if(var_84_bool == 0) goto Label_1769; // 0x6e5 JumpB
	lshStopAnimation(); // 0x6e6 Func
	goto Label_1771; // 0x6e8 Jump
	
Label_1771:
	return 0; // 0x6eb Return
	
Label_1769:
	StopAnimation(); // 0x6e9 Func
	
Label_1773:
	return 0; // 0x6ed Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x790 PushI
	if(var_33_int == 0) goto Label_1976; // 0x791 JumpB
	func_2539(); // 0x793 NEW_2
	var_35_int = 42554; // 0x795 PushI
	var_36_bool = var_31_int == var_35_int; // 0x796 Eq
	if(var_36_bool == 0) goto Label_1964; // 0x797 JumpB
	var_37_string = ""; // 0x798 PushV
	var_37_string = "Neutral"; // 0x799 MovS
	func_1913(var_32_cvector, var_37_string); // 0x79a NEW_2
	var_54_int = 540545; // 0x79c PushI
	SetMessage(var_54_int); // 0x79d TObjFunc
	ClearReplies(); // 0x79f TObjFunc
	var_55_int = 540546; // 0x7a1 PushI
	var_56_int = -1; // 0x7a2 PushI
	var_57_int = 42555; // 0x7a3 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x7a4 TObjFunc
	var_58_int = 540798; // 0x7a6 PushI
	var_59_int = -1; // 0x7a7 PushI
	var_60_int = 42847; // 0x7a8 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x7a9 TObjFunc
	return 0; // 0x7ab Return
	
Label_1964:
	var_3_string = 1; // 0x7ac TMovB
	var_61_bool = 0; // 0x7ad PushV
	func_2918(var_61_bool); // 0x7ae NEW_2
	if(var_61_bool == 0) goto Label_1972; // 0x7b0 JumpB
	lshStopAnimation(); // 0x7b1 Func
	goto Label_1974; // 0x7b3 Jump
	
Label_1974:
	return 0; // 0x7b6 Return
	
Label_1972:
	StopAnimation(); // 0x7b4 Func
	
Label_1976:
	return 0; // 0x7b8 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x806 PushI
	var_33_bool = var_31_int == var_32_int; // 0x807 Eq
	if(var_33_bool == 0) goto Label_2090; // 0x808 JumpB
	func_2049(); // 0x80a NEW_2
	var_35_bool = 0; // 0x80c PushV
	var_35_bool = 0; // 0x80d MovB
	var_36_bool = 0; // 0x80e PushV
	func_2263(var_36_bool); // 0x80f NEW_2
	if(var_36_bool == 0) goto Label_2071; // 0x811 JumpB
	var_39_bool = 0; // 0x812 PushV
	func_2018(var_39_bool); // 0x813 NEW_2
	if(var_39_bool == 0) goto Label_2071; // 0x815 JumpB
	var_35_bool = 1; // 0x816 MovB
	
Label_2071:
	if(var_35_bool == 0) goto Label_2084; // 0x817 JumpB
	var_56_bool = 0; // 0x818 PushV
	func_1998(var_56_bool); // 0x819 NEW_2
	if(var_56_bool == 0) goto Label_2083; // 0x81b JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x81c PushV
	var_77_object = Obj(); // 0x81d PushV
	func_2546(var_77_object); // 0x81e NEW_2
	var_76_object = var_77_object; // 0x81f Mov
	func_2413(var_76_object); // 0x821 NEW_2
	
Label_2083:
	goto Label_2090; // 0x823 Jump
	
Label_2090:
	return 0; // 0x82a Return
	
Label_2084:
	func_2013(var_31_int); // 0x825 NEW_2
	func_2040(); // 0x828 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2231(); // 0x82c NEW_2
	func_2049(); // 0x82f NEW_2
	lshStopSpeech(); // 0x831 Func
	lshStopAnimation(); // 0x833 Func
	StopAsync(); // 0x835 Func
	Hold(); // 0x837 Func
	return 0; // 0x839 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x83a Func
	func_2049(); // 0x83d NEW_2
	var_32_string = ""; // 0x83f PushV
	var_32_string = "Neutral"; // 0x840 MovS
	func_2493(var_32_string); // 0x841 NEW_2
	func_2040(); // 0x844 NEW_2
	return 0; // 0x846 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x848 Push
	if(var_32_bool == 0) goto Label_2126; // 0x849 JumpB
	func_2040(); // 0x84b NEW_2
	goto Label_2130; // 0x84d Jump
	
Label_2130:
	return 0; // 0x852 Return
	
Label_2126:
	var_38_string = ""; // 0x84e PushV
	var_38_string = "Neutral"; // 0x84f MovS
	func_2493(var_38_string); // 0x850 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x853 PushV
	IsOverrideActive(var_33_bool); // 0x854 Func
	var_34_bool = var_33_bool == 0; // 0x856 Not
	if(var_34_bool == 0) goto Label_2159; // 0x857 JumpB
	EventDisable(0); // 0x858 EventDisable
	func_2231(); // 0x85a NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x85c PushV
	var_36_object = var_31_object; // 0x85d Mov
	func_2254(var_36_object); // 0x85e NEW_2
	EventEnable(0); // 0x860 EventEnable
	var_49_object = Obj(); // 0x861 PushV
	var_49_object = var_31_object; // 0x862 Mov
	func_2920(var_49_object); // 0x863 NEW_2
	var_609_string = ""; // 0x865 PushV
	var_609_string = "Neutral"; // 0x866 MovS
	func_2493(var_609_string); // 0x867 NEW_2
	func_2049(); // 0x86a NEW_2
	func_2040(); // 0x86d NEW_2
	
Label_2159:
	return 2; // 0x86f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x7b9 PushGE
	var_31_bool = 0; // 0x7ba MovB
	GlobalVars[1] = var_31_bool; // 0x7bb PopGE
	func_1984(var_30_cvector); // 0x7bd NEW_2
	return 0; // 0x7bf Return
}


func_0(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0x0 PushV
	var_0_object = var_282_object; // 0x1 TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0x2 PushV
	var_293_object = var_282_object; // 0x3 Mov
	var_294_float = 70.0; // 0x4 MovF
	func_2268(var_293_object, var_294_float); // 0x5 NEW_2
	var_295_bool = var_292_bool == 0; // 0x7 Not
	if(var_295_bool == 0) goto Label_11; // 0x8 JumpB
	var_281_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_288_object); // 0xb Func
	var_296_int = 0; // 0xd PushV
	func_2912(var_296_int); // 0xe NEW_2
	SetNPCName(var_296_int); // 0x10 ObjFunc
	var_297_int = 0; // 0x12 PushV
	func_2910(var_297_int); // 0x13 NEW_2
	SetNPCDescription(var_297_int); // 0x15 ObjFunc
	var_298_string = ""; // 0x17 PushV
	func_2914(var_298_string); // 0x18 NEW_2
	SetPhoto(var_298_string); // 0x1a ObjFunc
	var_299_string = ""; // 0x1c PushV
	func_2916(var_299_string); // 0x1d NEW_2
	SetPhoto2(var_299_string); // 0x1f ObjFunc
	var_300_int = 0; // 0x21 PushV
	func_2893(var_300_int); // 0x22 NEW_2
	SetPlayerName(var_300_int); // 0x24 ObjFunc
	var_290_int = -1; // 0x26 MovI
	IsOverrideActive(var_289_bool); // 0x27 Func
	var_301_bool = var_289_bool; // 0x29 Push
	if(var_301_bool == 0) goto Label_45; // 0x2a JumpB
	var_281_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_288_object); // 0x2d Func
	var_302_bool = 0; var_303_object = Obj(); // 0x2f PushV
	var_304_object = Obj(); // 0x30 PushV
	func_2546(var_304_object); // 0x31 NEW_2
	var_303_object = var_304_object; // 0x32 Mov
	func_2355(var_302_bool, var_303_object); // 0x34 NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x36 PushV
	var_305_object = var_282_object; // 0x37 Mov
	var_306_object = var_288_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_291_bool); // 0x3d ObjFunc
	
Label_63:
	var_346_bool = var_291_bool == 0; // 0x3f Not
	if(var_346_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_291_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_347_object = Obj(); // 0x46 PushV
	var_347_object = var_282_object; // 0x47 Mov
	func_2337(); // 0x48 NEW_2
	StopDialog(var_288_object); // 0x4a Func
	GetReturnValue(var_290_int); // 0x4c ObjFunc
	var_281_int = var_290_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2049()
{
	var_610_int = 10; // 0x801 PushI
	KillTimer(var_610_int); // 0x802 Func
	return 0; // 0x804 Return
}


func_2562(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0; // 0xa02 PushV
	GetVariable(var_324_string, var_326_int); // 0xa03 Func
	var_323_int = var_326_int; // 0xa05 Mov
	return 2; // 0xa06 Return
}


func_2567(var_87_int, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0xa07 PushV
	CreateIntVector(var_90_object); // 0xa08 Func
	add(var_87_int); // 0xa0a ObjFunc
	add(var_88_int); // 0xa0c ObjFunc
	var_91_int = 3; // 0xa0e PushI
	SendWorldWndMessage(var_91_int, var_90_object); // 0xa0f Func
	return 2; // 0xa11 Return
}


func_787(var_0_object, var_1_object, var_2_object, var_3_string, var_374_object, var_375_object)
{
	var_0_object = var_375_object; // 0x314 TMov
	var_1_object = var_374_object; // 0x315 TMov
	var_3_string = 0; // 0x316 TMovB
	var_380_int = 1; // 0x317 PushI
	if(var_380_int == 0) goto Label_825; // 0x318 JumpB
	var_381_string = ""; // 0x319 PushV
	var_381_string = "Smile"; // 0x31a MovS
	func_855(var_375_object, var_381_string); // 0x31b NEW_2
	var_389_int = 525691; // 0x31d PushI
	SetMessage(var_389_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_390_bool = 0; var_391_object = Obj(); // 0x322 PushV
	var_391_object = var_1_object; // 0x323 MovT
	func_2752(var_391_object); // 0x324 NEW_2
	if(var_390_bool == 0) goto Label_812; // 0x326 JumpB
	var_396_int = 525692; // 0x327 PushI
	var_397_int = 30673; // 0x328 PushI
	var_398_int = 27015; // 0x329 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x32a TObjFunc
	
Label_812:
	var_399_int = 525695; // 0x32c PushI
	var_400_int = -1; // 0x32d PushI
	var_401_int = 27018; // 0x32e PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x32f TObjFunc
	var_402_int = 542396; // 0x331 PushI
	var_403_int = -1; // 0x332 PushI
	var_404_int = 44768; // 0x333 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x334 TObjFunc
	goto Label_825; // 0x336 Jump
	
Label_825:
	var_405_bool = 0; // 0x339 PushV
	func_2918(var_405_bool); // 0x33a NEW_2
	if(var_405_bool == 0) goto Label_840; // 0x33c JumpB
	
Label_829:
	lshWaitForAnimEnd(); // 0x33d Func
	var_406_string = var_3_string; // 0x33f PushT
	if(var_406_string == 0) goto Label_834; // 0x340 JumpB
	goto Label_839; // 0x341 Jump
	
Label_839:
	goto Label_854; // 0x347 Jump
	
Label_854:
	return 0; // 0x356 Return
	
Label_834:
	var_407_string = ""; // 0x342 PushV
	var_407_string = var_2_object; // 0x343 MovT
	func_2493(var_407_string); // 0x344 NEW_2
	goto Label_829; // 0x346 Jump
	
Label_840:
	var_408_string = "all"; // 0x348 PushS
	var_409_string = "idle"; // 0x349 PushS
	PlayAnimation(var_408_string, var_409_string); // 0x34a Func
	
Label_844:
	WaitForAnimEnd(); // 0x34c Func
	var_410_string = var_3_string; // 0x34e PushT
	if(var_410_string == 0) goto Label_849; // 0x34f JumpB
	goto Label_854; // 0x350 Jump
	
Label_849:
	var_411_string = "all"; // 0x351 PushS
	var_412_string = "idle"; // 0x352 PushS
	PlayAnimation(var_411_string, var_412_string); // 0x353 Func
	goto Label_844; // 0x355 Jump
}


func_2579(var_77_object, var_78_int)
{
	var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0xa13 PushV
	GetItemID(var_82_int); // 0xa14 ObjFunc
	var_85_string = "Category"; // 0xa16 PushS
	GetInvItemProperty(var_83_int, var_82_int, var_85_string); // 0xa17 Func
	AddItem(var_84_bool, var_77_object, var_83_int, var_78_int); // 0xa19 ObjFunc
	var_86_bool = var_84_bool == 0; // 0xa1b Not
	if(var_86_bool == 0) goto Label_2592; // 0xa1c JumpB
	DropItems(var_77_object, var_78_int); // 0xa1d ObjFunc
	goto Label_2597; // 0xa1f Jump
	
Label_2597:
	return 6; // 0xa25 Return
	
Label_2592:
	var_87_int = 0; var_88_int = 0; // 0xa20 PushV
	var_87_int = var_82_int; // 0xa21 Mov
	var_88_int = var_78_int; // 0xa22 Mov
	func_2567(var_87_int, var_88_int); // 0xa23 NEW_2
}


func_2843(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); // 0xb1b PushV
	GetMainOutdoorScene(var_44_object); // 0xb1c Func
	var_46_bool = var_44_object == 0; // 0xb1e NullEq
	if(var_46_bool == 0) goto Label_2854; // 0xb1f JumpB
	var_47_string = "Can't find main outdoor scene"; // 0xb20 PushS
	Trace(var_47_string); // 0xb21 Func
	var_45_object = 0; // 0xb23 SetNull
	var_41_object = var_45_object; // 0xb24 Mov
	return 4; // 0xb25 Return
	
Label_2854:
	GetMap(var_45_object); // 0xb26 ObjFunc
	var_41_object = var_45_object; // 0xb28 Mov
	return 4; // 0xb29 Return
}


func_2337()
{
	var_270_bool = 0; var_271_bool = 0; // 0x921 PushV
	var_272_bool = 1; // 0x922 PushB
	CameraSwitchToNormal(var_272_bool); // 0x923 Func
	var_273_bool = 0; // 0x925 PushV
	func_2918(var_273_bool); // 0x926 NEW_2
	if(var_273_bool == 0) goto Label_2346; // 0x928 JumpB
	goto Label_2354; // 0x929 Jump
	
Label_2354:
	return 2; // 0x932 Return
	
Label_2346:
	var_274_string = "head"; // 0x92a PushS
	HasAnimationTrack(var_271_bool, var_274_string); // 0x92b Func
	var_275_bool = var_271_bool; // 0x92d Push
	if(var_275_bool == 0) goto Label_2354; // 0x92e JumpB
	var_276_string = "head"; // 0x92f PushS
	UnlookAsync(var_276_string); // 0x930 Func
}


func_2598(var_71_object, var_72_string, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0xa26 PushV
	CreateInvItem(var_75_object); // 0xa27 Func
	SetItemName(var_72_string); // 0xa29 ObjFunc
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; // 0xa2b PushV
	var_76_object = var_71_object; // 0xa2c Mov
	var_77_object = var_75_object; // 0xa2d Mov
	var_78_int = var_73_int; // 0xa2e Mov
	func_2579(var_77_object, var_78_int); // 0xa2f NEW_2
	return 2; // 0xa31 Return
}


func_2552(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0x9f8 PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0x9f9 Or
	var_94_float = sqrt(var_95_int); // 0x9fa Sqrt2
	var_96_float = 0.0; // 0x9fb PushF
	var_97_bool = var_94_float < var_96_float; // 0x9fc LT
	if(var_97_bool == 0) goto Label_2560; // 0x9fd JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0x9fe MovV
	return 2; // 0x9ff Return
	
Label_2560:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0xa00 Div2
	return 2; // 0xa01 Return
}


func_2860(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0xb2c PushV
	GetMainOutdoorScene(var_67_object); // 0xb2d Func
	var_69_bool = var_67_object == 0; // 0xb2f NullEq
	if(var_69_bool == 0) goto Label_2869; // 0xb30 JumpB
	var_70_string = "Can't find main outdoor scene"; // 0xb31 PushS
	Trace(var_70_string); // 0xb32 Func
	return 8; // 0xb34 Return
	
Label_2869:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0xb35 ObjFunc
	var_71_bool = var_68_bool == 0; // 0xb37 Not
	if(var_71_bool == 0) goto Label_2879; // 0xb38 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0xb39 PushS
	var_73_int = var_72_string + var_58_string; // 0xb3a Add
	var_74_string = " doesnt exist"; // 0xb3b PushS
	var_75_int = var_73_int + var_74_string; // 0xb3c Add
	Trace(var_75_int); // 0xb3d Func
	
Label_2879:
	GetMap(var_57_object); // 0xb3f ObjFunc
	var_76_bool = var_57_object == 0; // 0xb41 NullEq
	if(var_76_bool == 0) goto Label_2887; // 0xb42 JumpB
	var_77_string = "Can't find map"; // 0xb43 PushS
	Trace(var_77_string); // 0xb44 Func
	return 8; // 0xb46 Return
	
Label_2887:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0xb47 PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0xb48 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0xb49 ObjFunc
	return 8; // 0xb4b Return
}


func_2355(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x933 PushV
	var_133_string = "voice_common"; // 0x934 PushS
	GetVariable(var_133_string, var_131_int); // 0x935 Func
	var_134_int = var_131_int; // 0x937 Push
	if(var_134_int == 0) goto Label_2393; // 0x938 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x939 PushV
	var_136_object = var_125_object; // 0x93a Mov
	func_2413(var_136_object); // 0x93b NEW_2
	var_165_bool = var_135_bool == 0; // 0x93d Not
	if(var_165_bool == 0) goto Label_2375; // 0x93e JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0x93f PushV
	var_167_object = var_125_object; // 0x940 Mov
	func_2450(var_167_object); // 0x941 NEW_2
	var_201_bool = var_166_bool == 0; // 0x943 Not
	if(var_201_bool == 0) goto Label_2375; // 0x944 JumpB
	var_124_bool = 0; // 0x945 MovB
	return 4; // 0x946 Return
	
Label_2375:
	var_202_int = 2; // 0x947 PushI
	irand(var_132_int, var_202_int); // 0x948 Func
	var_203_int = var_132_int; // 0x94a Push
	if(var_203_int == 0) goto Label_2388; // 0x94b JumpB
	var_204_string = "voice_common"; // 0x94c PushS
	var_205_int = 1; // 0x94d PushI
	var_206_int = var_131_int + var_205_int; // 0x94e Add
	var_207_int = 3; // 0x94f PushI
	var_208_int = var_206_int / var_207_int; // 0x950 Mod
	SetVariable(var_204_string, var_208_int); // 0x951 Func
	goto Label_2392; // 0x953 Jump
	
Label_2392:
	goto Label_2411; // 0x958 Jump
	
Label_2411:
	var_124_bool = 1; // 0x96b MovB
	return 4; // 0x96c Return
	
Label_2388:
	var_209_string = "voice_common"; // 0x954 PushS
	var_210_int = 0; // 0x955 PushI
	SetVariable(var_209_string, var_210_int); // 0x956 Func
	
Label_2393:
	var_211_bool = 0; var_212_object = Obj(); // 0x959 PushV
	var_212_object = var_125_object; // 0x95a Mov
	func_2450(var_212_object); // 0x95b NEW_2
	var_213_bool = var_211_bool == 0; // 0x95d Not
	if(var_213_bool == 0) goto Label_2407; // 0x95e JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x95f PushV
	var_215_object = var_125_object; // 0x960 Mov
	func_2413(var_215_object); // 0x961 NEW_2
	var_216_bool = var_214_bool == 0; // 0x963 Not
	if(var_216_bool == 0) goto Label_2407; // 0x964 JumpB
	var_124_bool = 0; // 0x965 MovB
	return 4; // 0x966 Return
	
Label_2407:
	var_217_string = "voice_common"; // 0x967 PushS
	var_218_int = 1; // 0x968 PushI
	SetVariable(var_217_string, var_218_int); // 0x969 Func
}


func_2611(var_52_float)
{
	var_53_float = 0; var_54_float = 0; // 0xa33 PushV
	GetGameTime(var_54_float); // 0xa34 Func
	var_52_float = var_54_float; // 0xa36 Mov
	return 2; // 0xa37 Return
}


func_2616(var_179_int)
{
	var_180_float = 0; var_181_float = 0; // 0xa38 PushV
	GetGameTime(var_181_float); // 0xa39 Func
	var_182_int = 1; // 0xa3b PushI
	var_183_int = 0; // 0xa3c PushV
	var_184_int = 24; // 0xa3d PushI
	var_183_int = var_181_float / var_181_float; // 0xa3e Div2
	var_179_int = var_182_int + var_183_int; // 0xa3f Add2
	return 2; // 0xa40 Return
}


func_1596(var_0_object, var_1_object, var_2_object, var_3_string, var_518_object, var_519_object)
{
	var_0_object = var_519_object; // 0x63d TMov
	var_1_object = var_518_object; // 0x63e TMov
	var_3_string = 0; // 0x63f TMovB
	var_524_int = 1; // 0x640 PushI
	if(var_524_int == 0) goto Label_1629; // 0x641 JumpB
	var_525_string = ""; // 0x642 PushV
	var_525_string = "Neutral"; // 0x643 MovS
	func_1659(var_519_object, var_525_string); // 0x644 NEW_2
	var_533_int = 535284; // 0x646 PushI
	SetMessage(var_533_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_534_int = 535285; // 0x64b PushI
	var_535_int = 36962; // 0x64c PushI
	var_536_int = 36961; // 0x64d PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x64e TObjFunc
	var_537_int = 535292; // 0x650 PushI
	var_538_int = -1; // 0x651 PushI
	var_539_int = 36968; // 0x652 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x653 TObjFunc
	var_540_int = 535293; // 0x655 PushI
	var_541_int = -1; // 0x656 PushI
	var_542_int = 36969; // 0x657 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x658 TObjFunc
	goto Label_1629; // 0x65a Jump
	
Label_1629:
	var_543_bool = 0; // 0x65d PushV
	func_2918(var_543_bool); // 0x65e NEW_2
	if(var_543_bool == 0) goto Label_1644; // 0x660 JumpB
	
Label_1633:
	lshWaitForAnimEnd(); // 0x661 Func
	var_544_string = var_3_string; // 0x663 PushT
	if(var_544_string == 0) goto Label_1638; // 0x664 JumpB
	goto Label_1643; // 0x665 Jump
	
Label_1643:
	goto Label_1658; // 0x66b Jump
	
Label_1658:
	return 0; // 0x67a Return
	
Label_1638:
	var_545_string = ""; // 0x666 PushV
	var_545_string = var_2_object; // 0x667 MovT
	func_2493(var_545_string); // 0x668 NEW_2
	goto Label_1633; // 0x66a Jump
	
Label_1644:
	var_546_string = "all"; // 0x66c PushS
	var_547_string = "idle"; // 0x66d PushS
	PlayAnimation(var_546_string, var_547_string); // 0x66e Func
	
Label_1648:
	WaitForAnimEnd(); // 0x670 Func
	var_548_string = var_3_string; // 0x672 PushT
	if(var_548_string == 0) goto Label_1653; // 0x673 JumpB
	goto Label_1658; // 0x674 Jump
	
Label_1653:
	var_549_string = "all"; // 0x675 PushS
	var_550_string = "idle"; // 0x676 PushS
	PlayAnimation(var_549_string, var_550_string); // 0x677 Func
	goto Label_1648; // 0x679 Jump
}


func_1855(var_0_object, var_1_object, var_2_object, var_3_string, var_577_object, var_578_object)
{
	var_0_object = var_578_object; // 0x740 TMov
	var_1_object = var_577_object; // 0x741 TMov
	var_3_string = 0; // 0x742 TMovB
	var_583_int = 1; // 0x743 PushI
	if(var_583_int == 0) goto Label_1883; // 0x744 JumpB
	var_584_string = ""; // 0x745 PushV
	var_584_string = "Neutral"; // 0x746 MovS
	func_1913(var_578_object, var_584_string); // 0x747 NEW_2
	var_592_int = 540545; // 0x749 PushI
	SetMessage(var_592_int); // 0x74a TObjFunc
	ClearReplies(); // 0x74c TObjFunc
	var_593_int = 540546; // 0x74e PushI
	var_594_int = -1; // 0x74f PushI
	var_595_int = 42555; // 0x750 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x751 TObjFunc
	var_596_int = 540798; // 0x753 PushI
	var_597_int = -1; // 0x754 PushI
	var_598_int = 42847; // 0x755 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x756 TObjFunc
	goto Label_1883; // 0x758 Jump
	
Label_1883:
	var_599_bool = 0; // 0x75b PushV
	func_2918(var_599_bool); // 0x75c NEW_2
	if(var_599_bool == 0) goto Label_1898; // 0x75e JumpB
	
Label_1887:
	lshWaitForAnimEnd(); // 0x75f Func
	var_600_string = var_3_string; // 0x761 PushT
	if(var_600_string == 0) goto Label_1892; // 0x762 JumpB
	goto Label_1897; // 0x763 Jump
	
Label_1897:
	goto Label_1912; // 0x769 Jump
	
Label_1912:
	return 0; // 0x778 Return
	
Label_1892:
	var_601_string = ""; // 0x764 PushV
	var_601_string = var_2_object; // 0x765 MovT
	func_2493(var_601_string); // 0x766 NEW_2
	goto Label_1887; // 0x768 Jump
	
Label_1898:
	var_602_string = "all"; // 0x76a PushS
	var_603_string = "idle"; // 0x76b PushS
	PlayAnimation(var_602_string, var_603_string); // 0x76c Func
	
Label_1902:
	WaitForAnimEnd(); // 0x76e Func
	var_604_string = var_3_string; // 0x770 PushT
	if(var_604_string == 0) goto Label_1907; // 0x771 JumpB
	goto Label_1912; // 0x772 Jump
	
Label_1907:
	var_605_string = "all"; // 0x773 PushS
	var_606_string = "idle"; // 0x774 PushS
	PlayAnimation(var_605_string, var_606_string); // 0x775 Func
	goto Label_1902; // 0x777 Jump
}


func_2625(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0xa42 PushV
	func_2616(var_280_int); // 0xa43 NEW_2
	var_278_bool = var_280_int == var_279_int; // 0xa45 Eq2
	return 0; // 0xa46 Return
}


func_2631(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xa47 PushV
	var_59_string = "idle"; // 0xa48 MovS
	var_60_int = var_57_int; // 0xa49 Push
	if(var_60_int == 0) goto Label_2636; // 0xa4a JumpB
	var_59_string = var_59_string + var_57_int; // 0xa4b Add2
	
Label_2636:
	var_56_string = var_59_string; // 0xa4c Mov
	return 2; // 0xa4d Return
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x249 TMov
	var_1_object = var_219_object; // 0x24a TMov
	var_3_string = 0; // 0x24b TMovB
	var_225_int = 1; // 0x24c PushI
	if(var_225_int == 0) goto Label_612; // 0x24d JumpB
	var_226_string = ""; // 0x24e PushV
	var_226_string = "Neutral"; // 0x24f MovS
	func_642(var_220_object, var_226_string); // 0x250 NEW_2
	var_243_int = 525516; // 0x252 PushI
	SetMessage(var_243_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_244_int = 525517; // 0x257 PushI
	var_245_int = -1; // 0x258 PushI
	var_246_int = 26873; // 0x259 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x25a TObjFunc
	var_247_int = 526273; // 0x25c PushI
	var_248_int = -1; // 0x25d PushI
	var_249_int = 27549; // 0x25e PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x25f TObjFunc
	goto Label_612; // 0x261 Jump
	
Label_612:
	var_250_bool = 0; // 0x264 PushV
	func_2918(var_250_bool); // 0x265 NEW_2
	if(var_250_bool == 0) goto Label_627; // 0x267 JumpB
	
Label_616:
	lshWaitForAnimEnd(); // 0x268 Func
	var_251_string = var_3_string; // 0x26a PushT
	if(var_251_string == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_626:
	goto Label_641; // 0x272 Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_621:
	var_252_string = ""; // 0x26d PushV
	var_252_string = var_2_object; // 0x26e MovT
	func_2493(var_252_string); // 0x26f NEW_2
	goto Label_616; // 0x271 Jump
	
Label_627:
	var_263_string = "all"; // 0x273 PushS
	var_264_string = "idle"; // 0x274 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x275 Func
	
Label_631:
	WaitForAnimEnd(); // 0x277 Func
	var_265_string = var_3_string; // 0x279 PushT
	if(var_265_string == 0) goto Label_636; // 0x27a JumpB
	goto Label_641; // 0x27b Jump
	
Label_636:
	var_266_string = "all"; // 0x27c PushS
	var_267_string = "idle"; // 0x27d PushS
	PlayAnimation(var_266_string, var_267_string); // 0x27e Func
	goto Label_631; // 0x280 Jump
}


func_2893(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xb4d PushV
	var_118_string = "branch"; // 0xb4e PushS
	GetVariable(var_118_string, var_117_int); // 0xb4f Func
	var_119_int = 0; // 0xb51 PushI
	var_120_bool = var_117_int == var_119_int; // 0xb52 Eq
	if(var_120_bool == 0) goto Label_2903; // 0xb53 JumpB
	var_115_int = 1; // 0xb54 MovI
	return 2; // 0xb55 Return
	
Label_2903:
	var_121_int = 1; // 0xb57 PushI
	var_122_bool = var_117_int == var_121_int; // 0xb58 Eq
	if(var_122_bool == 0) goto Label_2908; // 0xb59 JumpB
	var_115_int = 2; // 0xb5a MovI
	return 2; // 0xb5b Return
	
Label_2908:
	var_115_int = 3; // 0xb5c MovI
	return 2; // 0xb5d Return
}


func_2638(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xa4e PushV
	var_53_int = 0; // 0xa4f MovI
	
Label_2640:
	var_55_string = "all"; // 0xa50 PushS
	var_56_string = ""; var_57_int = 0; // 0xa51 PushV
	var_57_int = var_53_int; // 0xa52 Mov
	func_2631(var_56_string, var_57_int); // 0xa53 NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xa55 Func
	var_61_bool = var_54_bool == 0; // 0xa57 Not
	if(var_61_bool == 0) goto Label_2650; // 0xa58 JumpB
	goto Label_2653; // 0xa59 Jump
	
Label_2653:
	var_50_int = var_53_int; // 0xa5d Mov
	return 4; // 0xa5e Return
	
Label_2650:
	var_62_int = 1; // 0xa5a PushI
	var_53_int = var_53_int + var_62_int; // 0xa5b Add2
	goto Label_2640; // 0xa5c Jump
}


func_1101(var_0_object, var_417_int, var_418_object)
{
	var_420_object = Obj(); var_421_bool = 0; var_422_int = 0; var_423_bool = 0; var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; // 0x44d PushV
	var_0_object = var_418_object; // 0x44e TMov
	var_428_bool = 0; var_429_object = Obj(); var_430_float = 0; // 0x44f PushV
	var_429_object = var_418_object; // 0x450 Mov
	var_430_float = 70.0; // 0x451 MovF
	func_2268(var_429_object, var_430_float); // 0x452 NEW_2
	var_431_bool = var_428_bool == 0; // 0x454 Not
	if(var_431_bool == 0) goto Label_1112; // 0x455 JumpB
	var_417_int = -2; // 0x456 MovI
	return 8; // 0x457 Return
	
Label_1112:
	CreateDialog(var_424_object); // 0x458 Func
	var_432_int = 0; // 0x45a PushV
	func_2912(var_432_int); // 0x45b NEW_2
	SetNPCName(var_432_int); // 0x45d ObjFunc
	var_433_int = 0; // 0x45f PushV
	func_2910(var_433_int); // 0x460 NEW_2
	SetNPCDescription(var_433_int); // 0x462 ObjFunc
	var_434_string = ""; // 0x464 PushV
	func_2914(var_434_string); // 0x465 NEW_2
	SetPhoto(var_434_string); // 0x467 ObjFunc
	var_435_string = ""; // 0x469 PushV
	func_2916(var_435_string); // 0x46a NEW_2
	SetPhoto2(var_435_string); // 0x46c ObjFunc
	var_436_int = 0; // 0x46e PushV
	func_2893(var_436_int); // 0x46f NEW_2
	SetPlayerName(var_436_int); // 0x471 ObjFunc
	var_426_int = -1; // 0x473 MovI
	IsOverrideActive(var_425_bool); // 0x474 Func
	var_437_bool = var_425_bool; // 0x476 Push
	if(var_437_bool == 0) goto Label_1146; // 0x477 JumpB
	var_417_int = -2; // 0x478 MovI
	return 8; // 0x479 Return
	
Label_1146:
	DoDialog(var_424_object); // 0x47a Func
	var_438_bool = 0; var_439_object = Obj(); // 0x47c PushV
	var_440_object = Obj(); // 0x47d PushV
	func_2546(var_440_object); // 0x47e NEW_2
	var_439_object = var_440_object; // 0x47f Mov
	func_2355(var_438_bool, var_439_object); // 0x481 NEW_2
	var_441_object = Obj(); var_442_object = Obj(); // 0x483 PushV
	var_441_object = var_418_object; // 0x484 Mov
	var_442_object = var_424_object; // 0x485 Mov
	TaskCall(7); // 0x486 TaskCall
	func_1182(var_443_object, var_444_object, var_445_string, var_446_bool, var_441_object, var_442_object); // 0x487 NEW_2
	TaskReturn(); // 0x488 TaskReturn
	IsDialogEnd(var_427_bool); // 0x48a ObjFunc
	
Label_1164:
	var_490_bool = var_427_bool == 0; // 0x48c Not
	if(var_490_bool == 0) goto Label_1171; // 0x48d JumpB
	sync(); // 0x48e Func
	IsDialogEnd(var_427_bool); // 0x490 ObjFunc
	goto Label_1164; // 0x492 Jump
	
Label_1171:
	var_491_object = Obj(); // 0x493 PushV
	var_491_object = var_418_object; // 0x494 Mov
	func_2337(); // 0x495 NEW_2
	StopDialog(var_424_object); // 0x497 Func
	GetReturnValue(var_426_int); // 0x499 ObjFunc
	var_417_int = var_426_int; // 0x49b Mov
	return 8; // 0x49c Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x52 TMov
	var_1_object = var_305_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_311_int = 1; // 0x55 PushI
	if(var_311_int == 0) goto Label_119; // 0x56 JumpB
	var_312_string = ""; // 0x57 PushV
	var_312_string = "Neutral"; // 0x58 MovS
	func_149(var_306_object, var_312_string); // 0x59 NEW_2
	var_320_int = 524791; // 0x5b PushI
	SetMessage(var_320_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_321_bool = 0; var_322_object = Obj(); // 0x60 PushV
	var_322_object = var_1_object; // 0x61 MovT
	func_2740(var_322_object); // 0x62 NEW_2
	if(var_321_bool == 0) goto Label_106; // 0x64 JumpB
	var_329_int = 524792; // 0x65 PushI
	var_330_int = 28167; // 0x66 PushI
	var_331_int = 26107; // 0x67 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x68 TObjFunc
	
Label_106:
	var_332_int = 524793; // 0x6a PushI
	var_333_int = -1; // 0x6b PushI
	var_334_int = 26108; // 0x6c PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x6d TObjFunc
	var_335_int = 542093; // 0x6f PushI
	var_336_int = -1; // 0x70 PushI
	var_337_int = 44393; // 0x71 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_338_bool = 0; // 0x77 PushV
	func_2918(var_338_bool); // 0x78 NEW_2
	if(var_338_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_339_string = var_3_string; // 0x7d PushT
	if(var_339_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_340_string = ""; // 0x80 PushV
	var_340_string = var_2_object; // 0x81 MovT
	func_2493(var_340_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_341_string = "all"; // 0x86 PushS
	var_342_string = "idle"; // 0x87 PushS
	PlayAnimation(var_341_string, var_342_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_343_string = var_3_string; // 0x8c PushT
	if(var_343_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_344_string = "all"; // 0x8f PushS
	var_345_string = "idle"; // 0x90 PushS
	PlayAnimation(var_344_string, var_345_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_855(var_2_object, var_381_string)
{
	var_382_bool = 0; // 0x358 PushV
	func_2918(var_382_bool); // 0x359 NEW_2
	var_383_bool = var_382_bool == 0; // 0x35b Not
	if(var_383_bool == 0) goto Label_862; // 0x35c JumpB
	return 0; // 0x35d Return
	
Label_862:
	var_384_bool = var_381_string == var_2_object; // 0x35e Eq
	if(var_384_bool == 0) goto Label_865; // 0x35f JumpB
	return 0; // 0x360 Return
	
Label_865:
	var_385_string = ""; var_386_bool = 0; // 0x361 PushV
	var_385_string = var_381_string; // 0x362 Mov
	var_387_string = ""; // 0x363 PushS
	var_388_bool = var_381_string == var_387_string; // 0x364 Eq
	if(var_388_bool == 0) goto Label_872; // 0x365 JumpB
	var_386_bool = 0; // 0x366 MovB
	goto Label_873; // 0x367 Jump
	
Label_873:
	func_2509(var_385_string, var_386_bool); // 0x369 NEW_2
	var_2_object = var_381_string; // 0x36b TMov
	return 0; // 0x36c Return
	
Label_872:
	var_386_bool = 1; // 0x368 MovB
}


func_2910(var_112_int)
{
	var_112_int = 515548; // 0xb5e MovI
	return 0; // 0xb5f Return
}


func_2655()
{
	var_39_string = "k1q03"; // 0xa60 PushS
	var_40_int = 2; // 0xa61 PushI
	SetVariable(var_39_string, var_40_int); // 0xa62 Func
	func_2776(); // 0xa65 NEW_2
	return 0; // 0xa67 Return
}


func_2912(var_111_int)
{
	var_111_int = 502873; // 0xb60 MovI
	return 0; // 0xb61 Return
}


func_2914(var_113_string)
{
	var_113_string = "ui/NPC_Notkin.png"; // 0xb62 MovS
	return 0; // 0xb63 Return
}


func_2916(var_114_string)
{
	var_114_string = "ui/NPC_Notkin_b.png"; // 0xb64 MovS
	return 0; // 0xb65 Return
}


func_2918(var_106_bool)
{
	var_106_bool = 1; // 0xb66 MovB
	return 0; // 0xb67 Return
}


func_2664()
{
	var_39_string = "k4q01"; // 0xa69 PushS
	var_40_int = 3; // 0xa6a PushI
	SetVariable(var_39_string, var_40_int); // 0xa6b Func
	func_2789(); // 0xa6e NEW_2
	return 0; // 0xa70 Return
}


func_2920(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xb69 PushGE
	var_51_bool = var_50_bool == 0; // 0xb6a Not
	if(var_51_bool == 0) goto Label_2933; // 0xb6b JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xb6c PushV
	var_53_object = var_49_object; // 0xb6d Mov
	TaskCall(2); // 0xb6e TaskCall
	func_503(var_54_object, var_52_int, var_53_object); // 0xb6f NEW_2
	TaskReturn(); // 0xb70 TaskReturn
	var_277_bool = GlobalVars[1]; // 0xb72 PushGE
	var_277_bool = 1; // 0xb73 MovB
	GlobalVars[1] = var_277_bool; // 0xb74 PopGE
	
Label_2933:
	var_278_bool = 0; var_279_int = 0; // 0xb75 PushV
	var_279_int = 1; // 0xb76 MovI
	func_2625(var_278_bool, var_279_int); // 0xb77 NEW_2
	if(var_278_bool == 0) goto Label_2945; // 0xb79 JumpB
	var_281_int = 0; var_282_object = Obj(); // 0xb7a PushV
	var_282_object = var_49_object; // 0xb7b Mov
	TaskCall(0); // 0xb7c TaskCall
	func_0(var_283_object, var_281_int, var_282_object); // 0xb7d NEW_2
	TaskReturn(); // 0xb7e TaskReturn
	return 0; // 0xb80 Return
	
Label_2945:
	var_348_bool = 0; var_349_int = 0; // 0xb81 PushV
	var_349_int = 4; // 0xb82 MovI
	func_2625(var_348_bool, var_349_int); // 0xb83 NEW_2
	if(var_348_bool == 0) goto Label_2957; // 0xb85 JumpB
	var_350_int = 0; var_351_object = Obj(); // 0xb86 PushV
	var_351_object = var_49_object; // 0xb87 Mov
	TaskCall(4); // 0xb88 TaskCall
	func_706(var_352_object, var_350_int, var_351_object); // 0xb89 NEW_2
	TaskReturn(); // 0xb8a TaskReturn
	return 0; // 0xb8c Return
	
Label_2957:
	var_415_bool = 0; var_416_int = 0; // 0xb8d PushV
	var_416_int = 10; // 0xb8e MovI
	func_2625(var_415_bool, var_416_int); // 0xb8f NEW_2
	if(var_415_bool == 0) goto Label_2969; // 0xb91 JumpB
	var_417_int = 0; var_418_object = Obj(); // 0xb92 PushV
	var_418_object = var_49_object; // 0xb93 Mov
	TaskCall(6); // 0xb94 TaskCall
	func_1101(var_419_object, var_417_int, var_418_object); // 0xb95 NEW_2
	TaskReturn(); // 0xb96 TaskReturn
	return 0; // 0xb98 Return
	
Label_2969:
	var_492_bool = 0; var_493_int = 0; // 0xb99 PushV
	var_493_int = 12; // 0xb9a MovI
	func_2625(var_492_bool, var_493_int); // 0xb9b NEW_2
	if(var_492_bool == 0) goto Label_2981; // 0xb9d JumpB
	var_494_int = 0; var_495_object = Obj(); // 0xb9e PushV
	var_495_object = var_49_object; // 0xb9f Mov
	TaskCall(8); // 0xba0 TaskCall
	func_1515(var_496_object, var_494_int, var_495_object); // 0xba1 NEW_2
	TaskReturn(); // 0xba2 TaskReturn
	return 0; // 0xba4 Return
	
Label_2981:
	var_553_int = 0; var_554_object = Obj(); // 0xba5 PushV
	var_554_object = var_49_object; // 0xba6 Mov
	TaskCall(10); // 0xba7 TaskCall
	func_1774(var_555_object, var_553_int, var_554_object); // 0xba8 NEW_2
	TaskReturn(); // 0xba9 TaskReturn
	return 0; // 0xbab Return
}


func_2413(var_135_bool)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; // 0x96d PushV
	var_142_string = "c"; // 0x96e MovS
	var_143_int = 0; // 0x96f MovI
	
Label_2416:
	var_147_int = 1; // 0x970 PushI
	if(var_147_int == 0) goto Label_2429; // 0x971 JumpB
	var_148_int = 1; // 0x972 PushI
	var_149_int = var_143_int + var_148_int; // 0x973 Add
	var_150_int = var_142_string + var_149_int; // 0x974 Add
	HasProperty(var_150_int, var_144_bool); // 0x975 ObjFunc
	var_151_bool = var_144_bool == 0; // 0x977 Not
	if(var_151_bool == 0) goto Label_2426; // 0x978 JumpB
	goto Label_2429; // 0x979 Jump
	
Label_2429:
	var_152_bool = var_143_int == 0; // 0x97d Not
	if(var_152_bool == 0) goto Label_2433; // 0x97e JumpB
	var_135_bool = 0; // 0x97f MovB
	return 10; // 0x980 Return
	
Label_2433:
	var_145_int = 0; // 0x981 MovI
	var_153_int = 1; // 0x982 PushI
	var_154_bool = var_143_int > var_153_int; // 0x983 GT
	if(var_154_bool == 0) goto Label_2439; // 0x984 JumpB
	irand(var_145_int, var_143_int); // 0x985 Func
	
Label_2439:
	var_155_int = 1; // 0x987 PushI
	var_156_int = var_145_int + var_155_int; // 0x988 Add
	var_157_int = var_142_string + var_156_int; // 0x989 Add
	GetProperty(var_157_int, var_146_string); // 0x98a ObjFunc
	var_158_bool = 0; var_159_string = ""; // 0x98c PushV
	var_159_string = var_146_string; // 0x98d Mov
	func_2524(var_158_bool, var_159_string); // 0x98e NEW_2
	var_135_bool = var_158_bool; // 0x98f Mov
	return 10; // 0x991 Return
	
Label_2426:
	var_164_int = 1; // 0x97a PushI
	var_143_int = var_143_int + var_164_int; // 0x97b Add2
	goto Label_2416; // 0x97c Jump
}


func_2160()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x870 PushV
	WaitForAnimEnd(); // 0x871 Func
	var_48_bool = 0; // 0x873 PushV
	func_2263(var_48_bool); // 0x874 NEW_2
	var_49_bool = var_48_bool == 0; // 0x876 Not
	if(var_49_bool == 0) goto Label_2169; // 0x877 JumpB
	return 12; // 0x878 Return
	
Label_2169:
	var_50_int = 0; // 0x879 PushV
	func_2638(var_50_int); // 0x87a NEW_2
	var_42_int = var_50_int; // 0x87b Mov
	var_43_int = 0; // 0x87d MovI
	
Label_2174:
	var_63_bool = 0; // 0x87e PushV
	var_63_bool = 0; // 0x87f MovB
	var_64_int = 5; // 0x880 PushI
	var_65_bool = var_43_int < var_64_int; // 0x881 LT
	if(var_65_bool == 0) goto Label_2184; // 0x882 JumpB
	var_66_bool = 0; // 0x883 PushV
	func_2263(var_66_bool); // 0x884 NEW_2
	if(var_66_bool == 0) goto Label_2184; // 0x886 JumpB
	var_63_bool = 1; // 0x887 MovB
	
Label_2184:
	if(var_63_bool == 0) goto Label_2226; // 0x888 JumpB
	var_67_bool = var_42_int == 0; // 0x889 Not
	if(var_67_bool == 0) goto Label_2194; // 0x88a JumpB
	var_68_int = 3; // 0x88b PushI
	Sleep(var_68_int, var_44_bool); // 0x88c Func
	var_69_bool = var_44_bool == 0; // 0x88e Not
	if(var_69_bool == 0) goto Label_2193; // 0x88f JumpB
	goto Label_2226; // 0x890 Jump
	
Label_2226:
	ResetAAS(); // 0x8b2 Func
	return 12; // 0x8b4 Return
	
Label_2193:
	goto Label_2215; // 0x891 Jump
	
Label_2215:
	var_70_bool = 0; // 0x8a7 PushV
	func_2229(var_70_bool); // 0x8a8 NEW_2
	var_71_bool = var_70_bool == 0; // 0x8aa Not
	if(var_71_bool == 0) goto Label_2221; // 0x8ab JumpB
	goto Label_2226; // 0x8ac Jump
	
Label_2221:
	ResetAAS(); // 0x8ad Func
	var_72_int = 1; // 0x8af PushI
	var_43_int = var_43_int + var_72_int; // 0x8b0 Add2
	goto Label_2174; // 0x8b1 Jump
	
Label_2194:
	irand(var_45_int, var_42_int); // 0x892 Func
	var_73_int = 5; // 0x894 PushI
	irand(var_46_int, var_73_int); // 0x895 Func
	var_74_int = 0; // 0x897 PushI
	var_75_bool = var_46_int != var_74_int; // 0x898 Neq
	if(var_75_bool == 0) goto Label_2203; // 0x899 JumpB
	var_45_int = 0; // 0x89a MovI
	
Label_2203:
	var_76_string = "all"; // 0x89b PushS
	var_77_string = ""; var_78_int = 0; // 0x89c PushV
	var_78_int = var_45_int; // 0x89d Mov
	func_2631(var_77_string, var_78_int); // 0x89e NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x8a0 Func
	WaitForAnimEnd(var_47_bool); // 0x8a2 Func
	var_79_bool = var_47_bool == 0; // 0x8a4 Not
	if(var_79_bool == 0) goto Label_2215; // 0x8a5 JumpB
	goto Label_2226; // 0x8a6 Jump
}


func_2673()
{
	var_457_string = "k10q01KnowAboutRubin"; // 0xa72 PushS
	var_458_int = 1; // 0xa73 PushI
	SetVariable(var_457_string, var_458_int); // 0xa74 Func
	return 0; // 0xa76 Return
}


func_2679()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xa77 PushV
	var_41_object = Obj(); // 0xa78 PushV
	func_2843(var_41_object); // 0xa79 NEW_2
	var_40_object = var_41_object; // 0xa7a Mov
	var_48_string = "k10q01NotkinGotoRubin"; // 0xa7c PushS
	var_49_string = "pt_map_rubin"; // 0xa7d PushS
	var_50_int = 3; // 0xa7e PushI
	var_51_int = 530195; // 0xa7f PushI
	var_52_float = 0; // 0xa80 PushV
	func_2611(var_52_float); // 0xa81 NEW_2
	AddMark(var_48_string, var_49_string, var_50_int, var_51_int, var_52_float); // 0xa83 ObjFunc
	return 2; // 0xa85 Return
}


func_1913(var_2_object, var_584_string)
{
	var_585_bool = 0; // 0x77a PushV
	func_2918(var_585_bool); // 0x77b NEW_2
	var_586_bool = var_585_bool == 0; // 0x77d Not
	if(var_586_bool == 0) goto Label_1920; // 0x77e JumpB
	return 0; // 0x77f Return
	
Label_1920:
	var_587_bool = var_584_string == var_2_object; // 0x780 Eq
	if(var_587_bool == 0) goto Label_1923; // 0x781 JumpB
	return 0; // 0x782 Return
	
Label_1923:
	var_588_string = ""; var_589_bool = 0; // 0x783 PushV
	var_588_string = var_584_string; // 0x784 Mov
	var_590_string = ""; // 0x785 PushS
	var_591_bool = var_584_string == var_590_string; // 0x786 Eq
	if(var_591_bool == 0) goto Label_1930; // 0x787 JumpB
	var_589_bool = 0; // 0x788 MovB
	goto Label_1931; // 0x789 Jump
	
Label_1931:
	func_2509(var_588_string, var_589_bool); // 0x78b NEW_2
	var_2_object = var_584_string; // 0x78d TMov
	return 0; // 0x78e Return
	
Label_1930:
	var_589_bool = 1; // 0x78a MovB
}


func_1659(var_2_object, var_525_string)
{
	var_526_bool = 0; // 0x67c PushV
	func_2918(var_526_bool); // 0x67d NEW_2
	var_527_bool = var_526_bool == 0; // 0x67f Not
	if(var_527_bool == 0) goto Label_1666; // 0x680 JumpB
	return 0; // 0x681 Return
	
Label_1666:
	var_528_bool = var_525_string == var_2_object; // 0x682 Eq
	if(var_528_bool == 0) goto Label_1669; // 0x683 JumpB
	return 0; // 0x684 Return
	
Label_1669:
	var_529_string = ""; var_530_bool = 0; // 0x685 PushV
	var_529_string = var_525_string; // 0x686 Mov
	var_531_string = ""; // 0x687 PushS
	var_532_bool = var_525_string == var_531_string; // 0x688 Eq
	if(var_532_bool == 0) goto Label_1676; // 0x689 JumpB
	var_530_bool = 0; // 0x68a MovB
	goto Label_1677; // 0x68b Jump
	
Label_1677:
	func_2509(var_529_string, var_530_bool); // 0x68d NEW_2
	var_2_object = var_525_string; // 0x68f TMov
	return 0; // 0x690 Return
	
Label_1676:
	var_530_bool = 1; // 0x68c MovB
}


func_642(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0x283 PushV
	func_2918(var_227_bool); // 0x284 NEW_2
	var_228_bool = var_227_bool == 0; // 0x286 Not
	if(var_228_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_229_bool = var_226_string == var_2_object; // 0x289 Eq
	if(var_229_bool == 0) goto Label_652; // 0x28a JumpB
	return 0; // 0x28b Return
	
Label_652:
	var_230_string = ""; var_231_bool = 0; // 0x28c PushV
	var_230_string = var_226_string; // 0x28d Mov
	var_232_string = ""; // 0x28e PushS
	var_233_bool = var_226_string == var_232_string; // 0x28f Eq
	if(var_233_bool == 0) goto Label_659; // 0x290 JumpB
	var_231_bool = 0; // 0x291 MovB
	goto Label_660; // 0x292 Jump
	
Label_660:
	func_2509(var_230_string, var_231_bool); // 0x294 NEW_2
	var_2_object = var_226_string; // 0x296 TMov
	return 0; // 0x297 Return
	
Label_659:
	var_231_bool = 1; // 0x293 MovB
}


func_2695()
{
	var_94_string = "playsound"; // 0xa88 PushS
	var_95_string = "giveitem"; // 0xa89 PushS
	TriggerWorld(var_94_string, var_95_string); // 0xa8a Func
	return 0; // 0xa8c Return
}


func_2701(var_68_object)
{
	var_70_string = "Gun is given"; // 0xa8e PushS
	Trace(var_70_string); // 0xa8f Func
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0; // 0xa91 PushV
	var_71_object = var_68_object; // 0xa92 Mov
	var_72_string = "Gun"; // 0xa93 MovS
	var_73_int = 1; // 0xa94 MovI
	func_2598(var_71_object, var_72_string, var_73_int); // 0xa95 NEW_2
	return 0; // 0xa97 Return
}


func_2450(var_166_bool)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; // 0x992 PushV
	var_178_string = "d"; // 0x993 PushS
	var_179_int = 0; // 0x994 PushV
	func_2616(var_179_int); // 0x995 NEW_2
	var_185_int = var_178_string + var_179_int; // 0x997 Add
	var_186_string = "m"; // 0x998 PushS
	var_173_string = var_185_int + var_186_string; // 0x999 Add2
	var_174_int = 0; // 0x99a MovI
	
Label_2459:
	var_187_int = 1; // 0x99b PushI
	if(var_187_int == 0) goto Label_2472; // 0x99c JumpB
	var_188_int = 1; // 0x99d PushI
	var_189_int = var_174_int + var_188_int; // 0x99e Add
	var_190_int = var_173_string + var_189_int; // 0x99f Add
	HasProperty(var_190_int, var_175_bool); // 0x9a0 ObjFunc
	var_191_bool = var_175_bool == 0; // 0x9a2 Not
	if(var_191_bool == 0) goto Label_2469; // 0x9a3 JumpB
	goto Label_2472; // 0x9a4 Jump
	
Label_2472:
	var_192_bool = var_174_int == 0; // 0x9a8 Not
	if(var_192_bool == 0) goto Label_2476; // 0x9a9 JumpB
	var_166_bool = 0; // 0x9aa MovB
	return 10; // 0x9ab Return
	
Label_2476:
	var_176_int = 0; // 0x9ac MovI
	var_193_int = 1; // 0x9ad PushI
	var_194_bool = var_174_int > var_193_int; // 0x9ae GT
	if(var_194_bool == 0) goto Label_2482; // 0x9af JumpB
	irand(var_176_int, var_174_int); // 0x9b0 Func
	
Label_2482:
	var_195_int = 1; // 0x9b2 PushI
	var_196_int = var_176_int + var_195_int; // 0x9b3 Add
	var_197_int = var_173_string + var_196_int; // 0x9b4 Add
	GetProperty(var_197_int, var_177_string); // 0x9b5 ObjFunc
	var_198_bool = 0; var_199_string = ""; // 0x9b7 PushV
	var_199_string = var_177_string; // 0x9b8 Mov
	func_2524(var_198_bool, var_199_string); // 0x9b9 NEW_2
	var_166_bool = var_198_bool; // 0x9ba Mov
	return 10; // 0x9bc Return
	
Label_2469:
	var_200_int = 1; // 0x9a5 PushI
	var_174_int = var_174_int + var_200_int; // 0x9a6 Add2
	goto Label_2459; // 0x9a7 Jump
}


func_149(var_2_object, var_312_string)
{
	var_313_bool = 0; // 0x96 PushV
	func_2918(var_313_bool); // 0x97 NEW_2
	var_314_bool = var_313_bool == 0; // 0x99 Not
	if(var_314_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_315_bool = var_312_string == var_2_object; // 0x9c Eq
	if(var_315_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_316_string = ""; var_317_bool = 0; // 0x9f PushV
	var_316_string = var_312_string; // 0xa0 Mov
	var_318_string = ""; // 0xa1 PushS
	var_319_bool = var_312_string == var_318_string; // 0xa2 Eq
	if(var_319_bool == 0) goto Label_166; // 0xa3 JumpB
	var_317_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_2509(var_316_string, var_317_bool); // 0xa7 NEW_2
	var_2_object = var_312_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_317_bool = 1; // 0xa6 MovB
}


func_2712()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0xa99 PushV
	var_60_object = Obj(); // 0xa9a PushV
	func_2843(var_60_object); // 0xa9b NEW_2
	var_57_object = var_60_object; // 0xa9c Mov
	var_58_string = "pt_map_rubin"; // 0xa9e MovS
	var_59_float = 2; // 0xa9f MovI
	func_2860(var_57_object, var_58_string, var_59_float); // 0xaa0 NEW_2
	var_80_object = Obj(); // 0xaa2 PushV
	func_2843(var_80_object); // 0xaa3 NEW_2
	ShowMap(var_80_object); // 0xaa5 ObjFunc
	return 0; // 0xaa7 Return
}


func_1182(var_0_object, var_1_object, var_2_object, var_3_string, var_441_object, var_442_object)
{
	var_0_object = var_442_object; // 0x49f TMov
	var_1_object = var_441_object; // 0x4a0 TMov
	var_3_string = 0; // 0x4a1 TMovB
	var_447_int = 1; // 0x4a2 PushI
	if(var_447_int == 0) goto Label_1241; // 0x4a3 JumpB
	var_448_bool = 0; var_449_object = Obj(); // 0x4a4 PushV
	var_449_object = var_1_object; // 0x4a5 MovT
	func_2764(var_449_object); // 0x4a6 NEW_2
	var_454_bool = var_448_bool == 0; // 0x4a8 Not
	if(var_454_bool == 0) goto Label_1219; // 0x4a9 JumpB
	var_455_object = Obj(); var_456_object = Obj(); // 0x4aa PushV
	var_455_object = var_1_object; // 0x4ab MovT
	var_456_object = var_0_object; // 0x4ac MovT
	func_2673(); // 0x4ad NEW_2
	var_459_string = ""; // 0x4af PushV
	var_459_string = "Neutral"; // 0x4b0 MovS
	func_1271(var_442_object, var_459_string); // 0x4b1 NEW_2
	var_467_int = 527714; // 0x4b3 PushI
	SetMessage(var_467_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_468_int = 527715; // 0x4b8 PushI
	var_469_int = 29269; // 0x4b9 PushI
	var_470_int = 29067; // 0x4ba PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x4bb TObjFunc
	var_471_int = 527928; // 0x4bd PushI
	var_472_int = 29269; // 0x4be PushI
	var_473_int = 29279; // 0x4bf PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x4c0 TObjFunc
	goto Label_1241; // 0x4c2 Jump
	
Label_1241:
	var_474_bool = 0; // 0x4d9 PushV
	func_2918(var_474_bool); // 0x4da NEW_2
	if(var_474_bool == 0) goto Label_1256; // 0x4dc JumpB
	
Label_1245:
	lshWaitForAnimEnd(); // 0x4dd Func
	var_475_string = var_3_string; // 0x4df PushT
	if(var_475_string == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1255; // 0x4e1 Jump
	
Label_1255:
	goto Label_1270; // 0x4e7 Jump
	
Label_1270:
	return 0; // 0x4f6 Return
	
Label_1250:
	var_476_string = ""; // 0x4e2 PushV
	var_476_string = var_2_object; // 0x4e3 MovT
	func_2493(var_476_string); // 0x4e4 NEW_2
	goto Label_1245; // 0x4e6 Jump
	
Label_1256:
	var_477_string = "all"; // 0x4e8 PushS
	var_478_string = "idle"; // 0x4e9 PushS
	PlayAnimation(var_477_string, var_478_string); // 0x4ea Func
	
Label_1260:
	WaitForAnimEnd(); // 0x4ec Func
	var_479_string = var_3_string; // 0x4ee PushT
	if(var_479_string == 0) goto Label_1265; // 0x4ef JumpB
	goto Label_1270; // 0x4f0 Jump
	
Label_1265:
	var_480_string = "all"; // 0x4f1 PushS
	var_481_string = "idle"; // 0x4f2 PushS
	PlayAnimation(var_480_string, var_481_string); // 0x4f3 Func
	goto Label_1260; // 0x4f5 Jump
	
Label_1219:
	var_482_string = ""; // 0x4c3 PushV
	var_482_string = "Neutral"; // 0x4c4 MovS
	func_1271(var_442_object, var_482_string); // 0x4c5 NEW_2
	var_483_int = 527716; // 0x4c7 PushI
	SetMessage(var_483_int); // 0x4c8 TObjFunc
	ClearReplies(); // 0x4ca TObjFunc
	var_484_int = 527717; // 0x4cc PushI
	var_485_int = -1; // 0x4cd PushI
	var_486_int = 29069; // 0x4ce PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x4cf TObjFunc
	var_487_int = 527918; // 0x4d1 PushI
	var_488_int = -1; // 0x4d2 PushI
	var_489_int = 29268; // 0x4d3 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x4d4 TObjFunc
	goto Label_1241; // 0x4d6 Jump
}


func_2728(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0xaa9 PushV
	var_175_string = "k1q01DobermanDead"; // 0xaaa MovS
	func_2562(var_174_int, var_175_string); // 0xaab NEW_2
	var_176_int = 0; // 0xaad PushI
	var_177_bool = var_174_int != var_176_int; // 0xaae Neq
	if(var_177_bool == 0) goto Label_2738; // 0xaaf JumpB
	var_172_bool = 1; // 0xab0 MovB
	return 0; // 0xab1 Return
	
Label_2738:
	var_172_bool = 0; // 0xab2 MovB
	return 0; // 0xab3 Return
}


func_2740(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0xab5 PushV
	var_324_string = "k1q03"; // 0xab6 MovS
	func_2562(var_323_int, var_324_string); // 0xab7 NEW_2
	var_327_int = 1; // 0xab9 PushI
	var_328_bool = var_323_int == var_327_int; // 0xaba Eq
	if(var_328_bool == 0) goto Label_2750; // 0xabb JumpB
	var_321_bool = 1; // 0xabc MovB
	return 0; // 0xabd Return
	
Label_2750:
	var_321_bool = 0; // 0xabe MovB
	return 0; // 0xabf Return
}


func_2229(var_70_bool)
{
	var_70_bool = 1; // 0x8b5 MovB
	return 0; // 0x8b6 Return
}


func_2231()
{
	StopAnimation(); // 0x8b7 Func
	StopGroup0(); // 0x8b9 Func
	return 0; // 0x8bb Return
}


func_2236(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x8bc PushV
	GetPosition(var_51_cvector); // 0x8bd Func
	GetPosition(var_52_cvector); // 0x8bf ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x8c1 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x8c2 Or2
	return 6; // 0x8c3 Return
}


func_2493(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x9bd PushV
	lshHasAnimation(var_256_bool, var_252_string); // 0x9be Func
	var_259_bool = var_256_bool; // 0x9c0 Push
	if(var_259_bool == 0) goto Label_2504; // 0x9c1 JumpB
	lshGetAnimTimes(var_252_string, var_257_float, var_258_float); // 0x9c2 Func
	var_260_bool = 0; // 0x9c4 PushB
	lshPlayAnimation(var_257_float, var_258_float, var_260_bool); // 0x9c5 Func
	goto Label_2508; // 0x9c7 Jump
	
Label_2508:
	return 6; // 0x9cc Return
	
Label_2504:
	var_261_string = "Can't find lsh animation : "; // 0x9c8 PushS
	var_262_int = var_261_string + var_252_string; // 0x9c9 Add
	Trace(var_262_int); // 0x9ca Func
}


func_2752(var_390_bool)
{
	var_392_int = 0; var_393_string = ""; // 0xac1 PushV
	var_393_string = "k4q01"; // 0xac2 MovS
	func_2562(var_392_int, var_393_string); // 0xac3 NEW_2
	var_394_int = 2; // 0xac5 PushI
	var_395_bool = var_392_int == var_394_int; // 0xac6 Eq
	if(var_395_bool == 0) goto Label_2762; // 0xac7 JumpB
	var_390_bool = 1; // 0xac8 MovB
	return 0; // 0xac9 Return
	
Label_2762:
	var_390_bool = 0; // 0xaca MovB
	return 0; // 0xacb Return
}


func_1984(var_0_object)
{
	var_32_bool = 0; // 0x7c0 PushV
	func_2263(var_32_bool); // 0x7c1 NEW_2
	var_35_bool = var_32_bool == 0; // 0x7c3 Not
	if(var_35_bool == 0) goto Label_1991; // 0x7c4 JumpB
	Hold(); // 0x7c5 Func
	
Label_1991:
	GetDirection(var_0_object); // 0x7c7 Func
	
Label_1993:
	func_2160(); // 0x7ca NEW_2
	goto Label_1993; // 0x7cc Jump
}


func_706(var_0_object, var_350_int, var_351_object)
{
	var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0; var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; // 0x2c2 PushV
	var_0_object = var_351_object; // 0x2c3 TMov
	var_361_bool = 0; var_362_object = Obj(); var_363_float = 0; // 0x2c4 PushV
	var_362_object = var_351_object; // 0x2c5 Mov
	var_363_float = 70.0; // 0x2c6 MovF
	func_2268(var_362_object, var_363_float); // 0x2c7 NEW_2
	var_364_bool = var_361_bool == 0; // 0x2c9 Not
	if(var_364_bool == 0) goto Label_717; // 0x2ca JumpB
	var_350_int = -2; // 0x2cb MovI
	return 8; // 0x2cc Return
	
Label_717:
	CreateDialog(var_357_object); // 0x2cd Func
	var_365_int = 0; // 0x2cf PushV
	func_2912(var_365_int); // 0x2d0 NEW_2
	SetNPCName(var_365_int); // 0x2d2 ObjFunc
	var_366_int = 0; // 0x2d4 PushV
	func_2910(var_366_int); // 0x2d5 NEW_2
	SetNPCDescription(var_366_int); // 0x2d7 ObjFunc
	var_367_string = ""; // 0x2d9 PushV
	func_2914(var_367_string); // 0x2da NEW_2
	SetPhoto(var_367_string); // 0x2dc ObjFunc
	var_368_string = ""; // 0x2de PushV
	func_2916(var_368_string); // 0x2df NEW_2
	SetPhoto2(var_368_string); // 0x2e1 ObjFunc
	var_369_int = 0; // 0x2e3 PushV
	func_2893(var_369_int); // 0x2e4 NEW_2
	SetPlayerName(var_369_int); // 0x2e6 ObjFunc
	var_359_int = -1; // 0x2e8 MovI
	IsOverrideActive(var_358_bool); // 0x2e9 Func
	var_370_bool = var_358_bool; // 0x2eb Push
	if(var_370_bool == 0) goto Label_751; // 0x2ec JumpB
	var_350_int = -2; // 0x2ed MovI
	return 8; // 0x2ee Return
	
Label_751:
	DoDialog(var_357_object); // 0x2ef Func
	var_371_bool = 0; var_372_object = Obj(); // 0x2f1 PushV
	var_373_object = Obj(); // 0x2f2 PushV
	func_2546(var_373_object); // 0x2f3 NEW_2
	var_372_object = var_373_object; // 0x2f4 Mov
	func_2355(var_371_bool, var_372_object); // 0x2f6 NEW_2
	var_374_object = Obj(); var_375_object = Obj(); // 0x2f8 PushV
	var_374_object = var_351_object; // 0x2f9 Mov
	var_375_object = var_357_object; // 0x2fa Mov
	TaskCall(5); // 0x2fb TaskCall
	func_787(var_376_object, var_377_object, var_378_string, var_379_bool, var_374_object, var_375_object); // 0x2fc NEW_2
	TaskReturn(); // 0x2fd TaskReturn
	IsDialogEnd(var_360_bool); // 0x2ff ObjFunc
	
Label_769:
	var_413_bool = var_360_bool == 0; // 0x301 Not
	if(var_413_bool == 0) goto Label_776; // 0x302 JumpB
	sync(); // 0x303 Func
	IsDialogEnd(var_360_bool); // 0x305 ObjFunc
	goto Label_769; // 0x307 Jump
	
Label_776:
	var_414_object = Obj(); // 0x308 PushV
	var_414_object = var_351_object; // 0x309 Mov
	func_2337(); // 0x30a NEW_2
	StopDialog(var_357_object); // 0x30c Func
	GetReturnValue(var_359_int); // 0x30e ObjFunc
	var_350_int = var_359_int; // 0x310 Mov
	return 8; // 0x311 Return
}


func_2244(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x8c4 PushV
	GetPosition(var_44_cvector); // 0x8c5 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x8c7 Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x8c8 PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x8c9 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x8ca Func
	var_39_bool = var_46_bool; // 0x8cc Mov
	return 6; // 0x8cd Return
}


func_2764(var_448_bool)
{
	var_450_int = 0; var_451_string = ""; // 0xacd PushV
	var_451_string = "k10q01KnowAboutRubin"; // 0xace MovS
	func_2562(var_450_int, var_451_string); // 0xacf NEW_2
	var_452_int = 0; // 0xad1 PushI
	var_453_bool = var_450_int != var_452_int; // 0xad2 Neq
	if(var_453_bool == 0) goto Label_2774; // 0xad3 JumpB
	var_448_bool = 1; // 0xad4 MovB
	return 0; // 0xad5 Return
	
Label_2774:
	var_448_bool = 0; // 0xad6 MovB
	return 0; // 0xad7 Return
}


func_2509(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x9cd PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0x9ce Func
	var_240_bool = var_237_bool; // 0x9d0 Push
	if(var_240_bool == 0) goto Label_2519; // 0x9d1 JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0x9d2 Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0x9d4 Func
	goto Label_2523; // 0x9d6 Jump
	
Label_2523:
	return 6; // 0x9db Return
	
Label_2519:
	var_241_string = "Can't find lsh animation : "; // 0x9d7 PushS
	var_242_int = var_241_string + var_230_string; // 0x9d8 Add
	Trace(var_242_int); // 0x9d9 Func
}


func_2254(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x8ce PushV
	GetPosition(var_38_cvector); // 0x8cf ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x8d1 PushV
	var_40_cvector = var_38_cvector; // 0x8d2 Mov
	func_2244(var_39_bool, var_40_cvector); // 0x8d3 NEW_2
	var_35_bool = var_39_bool; // 0x8d4 Mov
	return 2; // 0x8d6 Return
}


func_1998(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x7ce PushV
	var_59_string = "player"; // 0x7cf PushS
	FindActor(var_58_object, var_59_string); // 0x7d0 Func
	var_60_bool = var_58_object == 0; // 0x7d2 Not
	if(var_60_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_56_bool = 0; // 0x7d4 MovB
	return 2; // 0x7d5 Return
	
Label_2006:
	var_61_bool = 0; var_62_object = Obj(); // 0x7d6 PushV
	var_62_object = var_58_object; // 0x7d7 Mov
	func_2254(var_62_object); // 0x7d8 NEW_2
	var_56_bool = var_61_bool; // 0x7d9 Mov
	return 2; // 0x7db Return
}


func_2263(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x8d7 PushV
	IsLoaded(var_34_bool); // 0x8d8 Func
	var_32_bool = var_34_bool; // 0x8da Mov
	return 2; // 0x8db Return
}


func_2776()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xad8 PushV
	var_43_int = 335; // 0xad9 PushI
	var_44_int = 2; // 0xada PushI
	var_45_int = 524802; // 0xadb PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xadc Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xade PushV
	var_47_object = var_42_object; // 0xadf Mov
	var_48_int = 333; // 0xae0 MovI
	func_2815(var_46_bool, var_47_object, var_48_int); // 0xae1 NEW_2
	return 2; // 0xae3 Return
}


func_2268(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0x8dc PushV
	GetPosition(var_76_cvector); // 0x8dd ObjFunc
	GetEyesHeight(var_75_float); // 0x8df ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x8e1 PushE
	var_84_float = var_84_float + var_75_float; // 0x8e2 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x8e3 PopE
	GetPosition(var_77_cvector); // 0x8e4 Func
	GetEyesHeight(var_75_float); // 0x8e6 Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x8e8 PushE
	var_85_float = var_85_float + var_75_float; // 0x8e9 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x8ea PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0x8eb Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x8ec PushE
	var_86_float = 0; // 0x8ed MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x8ee PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0x8ef Or
	var_88_float = sqrt(var_87_int); // 0x8f0 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0x8f1 Div2
	var_79_cvector = -var_78_cvector; // 0x8f2 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0x8f3 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x8f4 PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0x8f5 PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0x8f6 Xor2
	func_2552(var_90_cvector, var_91_cvector); // 0x8f7 NEW_2
	var_98_int = 25; // 0x8f9 PushI
	var_99_float = var_90_cvector * var_98_int; // 0x8fa Mult
	var_100_int = var_89_float + var_99_float; // 0x8fb Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0x8fc PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0x8fd Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0x8fe Add2
	IsOverrideActive(var_82_bool); // 0x8ff Func
	var_102_bool = var_82_bool; // 0x901 Push
	if(var_102_bool == 0) goto Label_2309; // 0x902 JumpB
	var_63_bool = 0; // 0x903 MovB
	return 18; // 0x904 Return
	
Label_2309:
	StopWorld(); // 0x905 Func
	var_103_bool = 1; // 0x907 PushB
	CameraTransit(var_81_cvector, var_79_cvector, var_103_bool); // 0x908 Func
	var_104_float = GetByIndex(var_80_cvector, 0); // 0x90a PushE
	var_105_float = GetByIndex(var_80_cvector, 2); // 0x90b PushE
	Rotate(var_104_float, var_105_float); // 0x90c Func
	var_106_bool = 0; // 0x90e PushV
	func_2918(var_106_bool); // 0x90f NEW_2
	if(var_106_bool == 0) goto Label_2323; // 0x911 JumpB
	goto Label_2331; // 0x912 Jump
	
Label_2331:
	CameraWaitForPlayFinish(); // 0x91b Func
	ResumeWorld(); // 0x91d Func
	var_63_bool = 1; // 0x91f MovB
	return 18; // 0x920 Return
	
Label_2323:
	var_107_string = "head"; // 0x913 PushS
	HasAnimationTrack(var_83_bool, var_107_string); // 0x914 Func
	var_108_bool = var_83_bool; // 0x916 Push
	if(var_108_bool == 0) goto Label_2331; // 0x917 JumpB
	var_109_string = "head"; // 0x918 PushS
	LookAsyncCamera(var_109_string); // 0x919 Func
}


func_2013(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x7dd PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x7de PushE
	RotateAsync(var_108_float, var_109_float); // 0x7df Func
	return 0; // 0x7e1 Return
}


func_2524(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0; // 0x9dc PushV
	var_162_bool = 0; // 0x9dd PushV
	func_2918(var_162_bool); // 0x9de NEW_2
	if(var_162_bool == 0) goto Label_2537; // 0x9e0 JumpB
	lshHasSpeech(var_161_bool, var_159_string); // 0x9e1 Func
	var_163_bool = var_161_bool; // 0x9e3 Push
	if(var_163_bool == 0) goto Label_2537; // 0x9e4 JumpB
	lshPlaySpeech(var_159_string); // 0x9e5 Func
	var_158_bool = 1; // 0x9e7 MovB
	return 2; // 0x9e8 Return
	
Label_2537:
	var_158_bool = 0; // 0x9e9 MovB
	return 2; // 0x9ea Return
}


func_2018(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x7e2 PushV
	var_44_string = "player"; // 0x7e3 PushS
	FindActor(var_42_object, var_44_string); // 0x7e4 Func
	var_45_bool = var_42_object == 0; // 0x7e6 Not
	if(var_45_bool == 0) goto Label_2026; // 0x7e7 JumpB
	var_39_bool = 0; // 0x7e8 MovB
	return 4; // 0x7e9 Return
	
Label_2026:
	var_46_float = 0; var_47_object = Obj(); // 0x7ea PushV
	var_47_object = var_42_object; // 0x7eb Mov
	func_2236(var_47_object); // 0x7ec NEW_2
	var_54_float = 90000.0; // 0x7ee PushF
	var_55_bool = var_46_float > var_54_float; // 0x7ef GT
	if(var_55_bool == 0) goto Label_2035; // 0x7f0 JumpB
	var_39_bool = 0; // 0x7f1 MovB
	return 4; // 0x7f2 Return
	
Label_2035:
	CanSee(var_43_bool, var_42_object); // 0x7f3 Func
	var_39_bool = var_43_bool; // 0x7f5 Mov
	return 4; // 0x7f6 Return
}


func_2789()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xae5 PushV
	var_43_int = 371; // 0xae6 PushI
	var_44_int = 1; // 0xae7 PushI
	var_45_int = 525728; // 0xae8 PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xae9 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xaeb PushV
	var_47_object = var_42_object; // 0xaec Mov
	var_48_int = 368; // 0xaed MovI
	func_2815(var_46_bool, var_47_object, var_48_int); // 0xaee NEW_2
	return 2; // 0xaf0 Return
}


func_2539()
{
	var_34_bool = 0; // 0x9eb PushV
	func_2918(var_34_bool); // 0x9ec NEW_2
	if(var_34_bool == 0) goto Label_2545; // 0x9ee JumpB
	lshStopSpeech(); // 0x9ef Func
	
Label_2545:
	return 0; // 0x9f1 Return
}


func_1515(var_0_object, var_494_int, var_495_object)
{
	var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0; var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0; // 0x5eb PushV
	var_0_object = var_495_object; // 0x5ec TMov
	var_505_bool = 0; var_506_object = Obj(); var_507_float = 0; // 0x5ed PushV
	var_506_object = var_495_object; // 0x5ee Mov
	var_507_float = 70.0; // 0x5ef MovF
	func_2268(var_506_object, var_507_float); // 0x5f0 NEW_2
	var_508_bool = var_505_bool == 0; // 0x5f2 Not
	if(var_508_bool == 0) goto Label_1526; // 0x5f3 JumpB
	var_494_int = -2; // 0x5f4 MovI
	return 8; // 0x5f5 Return
	
Label_1526:
	CreateDialog(var_501_object); // 0x5f6 Func
	var_509_int = 0; // 0x5f8 PushV
	func_2912(var_509_int); // 0x5f9 NEW_2
	SetNPCName(var_509_int); // 0x5fb ObjFunc
	var_510_int = 0; // 0x5fd PushV
	func_2910(var_510_int); // 0x5fe NEW_2
	SetNPCDescription(var_510_int); // 0x600 ObjFunc
	var_511_string = ""; // 0x602 PushV
	func_2914(var_511_string); // 0x603 NEW_2
	SetPhoto(var_511_string); // 0x605 ObjFunc
	var_512_string = ""; // 0x607 PushV
	func_2916(var_512_string); // 0x608 NEW_2
	SetPhoto2(var_512_string); // 0x60a ObjFunc
	var_513_int = 0; // 0x60c PushV
	func_2893(var_513_int); // 0x60d NEW_2
	SetPlayerName(var_513_int); // 0x60f ObjFunc
	var_503_int = -1; // 0x611 MovI
	IsOverrideActive(var_502_bool); // 0x612 Func
	var_514_bool = var_502_bool; // 0x614 Push
	if(var_514_bool == 0) goto Label_1560; // 0x615 JumpB
	var_494_int = -2; // 0x616 MovI
	return 8; // 0x617 Return
	
Label_1560:
	DoDialog(var_501_object); // 0x618 Func
	var_515_bool = 0; var_516_object = Obj(); // 0x61a PushV
	var_517_object = Obj(); // 0x61b PushV
	func_2546(var_517_object); // 0x61c NEW_2
	var_516_object = var_517_object; // 0x61d Mov
	func_2355(var_515_bool, var_516_object); // 0x61f NEW_2
	var_518_object = Obj(); var_519_object = Obj(); // 0x621 PushV
	var_518_object = var_495_object; // 0x622 Mov
	var_519_object = var_501_object; // 0x623 Mov
	TaskCall(9); // 0x624 TaskCall
	func_1596(var_520_object, var_521_object, var_522_string, var_523_bool, var_518_object, var_519_object); // 0x625 NEW_2
	TaskReturn(); // 0x626 TaskReturn
	IsDialogEnd(var_504_bool); // 0x628 ObjFunc
	
Label_1578:
	var_551_bool = var_504_bool == 0; // 0x62a Not
	if(var_551_bool == 0) goto Label_1585; // 0x62b JumpB
	sync(); // 0x62c Func
	IsDialogEnd(var_504_bool); // 0x62e ObjFunc
	goto Label_1578; // 0x630 Jump
	
Label_1585:
	var_552_object = Obj(); // 0x631 PushV
	var_552_object = var_495_object; // 0x632 Mov
	func_2337(); // 0x633 NEW_2
	StopDialog(var_501_object); // 0x635 Func
	GetReturnValue(var_503_int); // 0x637 ObjFunc
	var_494_int = var_503_int; // 0x639 Mov
	return 8; // 0x63a Return
}


func_1774(var_0_object, var_553_int, var_554_object)
{
	var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0; var_560_object = Obj(); var_561_bool = 0; var_562_int = 0; var_563_bool = 0; // 0x6ee PushV
	var_0_object = var_554_object; // 0x6ef TMov
	var_564_bool = 0; var_565_object = Obj(); var_566_float = 0; // 0x6f0 PushV
	var_565_object = var_554_object; // 0x6f1 Mov
	var_566_float = 70.0; // 0x6f2 MovF
	func_2268(var_565_object, var_566_float); // 0x6f3 NEW_2
	var_567_bool = var_564_bool == 0; // 0x6f5 Not
	if(var_567_bool == 0) goto Label_1785; // 0x6f6 JumpB
	var_553_int = -2; // 0x6f7 MovI
	return 8; // 0x6f8 Return
	
Label_1785:
	CreateDialog(var_560_object); // 0x6f9 Func
	var_568_int = 0; // 0x6fb PushV
	func_2912(var_568_int); // 0x6fc NEW_2
	SetNPCName(var_568_int); // 0x6fe ObjFunc
	var_569_int = 0; // 0x700 PushV
	func_2910(var_569_int); // 0x701 NEW_2
	SetNPCDescription(var_569_int); // 0x703 ObjFunc
	var_570_string = ""; // 0x705 PushV
	func_2914(var_570_string); // 0x706 NEW_2
	SetPhoto(var_570_string); // 0x708 ObjFunc
	var_571_string = ""; // 0x70a PushV
	func_2916(var_571_string); // 0x70b NEW_2
	SetPhoto2(var_571_string); // 0x70d ObjFunc
	var_572_int = 0; // 0x70f PushV
	func_2893(var_572_int); // 0x710 NEW_2
	SetPlayerName(var_572_int); // 0x712 ObjFunc
	var_562_int = -1; // 0x714 MovI
	IsOverrideActive(var_561_bool); // 0x715 Func
	var_573_bool = var_561_bool; // 0x717 Push
	if(var_573_bool == 0) goto Label_1819; // 0x718 JumpB
	var_553_int = -2; // 0x719 MovI
	return 8; // 0x71a Return
	
Label_1819:
	DoDialog(var_560_object); // 0x71b Func
	var_574_bool = 0; var_575_object = Obj(); // 0x71d PushV
	var_576_object = Obj(); // 0x71e PushV
	func_2546(var_576_object); // 0x71f NEW_2
	var_575_object = var_576_object; // 0x720 Mov
	func_2355(var_574_bool, var_575_object); // 0x722 NEW_2
	var_577_object = Obj(); var_578_object = Obj(); // 0x724 PushV
	var_577_object = var_554_object; // 0x725 Mov
	var_578_object = var_560_object; // 0x726 Mov
	TaskCall(11); // 0x727 TaskCall
	func_1855(var_579_object, var_580_object, var_581_string, var_582_bool, var_577_object, var_578_object); // 0x728 NEW_2
	TaskReturn(); // 0x729 TaskReturn
	IsDialogEnd(var_563_bool); // 0x72b ObjFunc
	
Label_1837:
	var_607_bool = var_563_bool == 0; // 0x72d Not
	if(var_607_bool == 0) goto Label_1844; // 0x72e JumpB
	sync(); // 0x72f Func
	IsDialogEnd(var_563_bool); // 0x731 ObjFunc
	goto Label_1837; // 0x733 Jump
	
Label_1844:
	var_608_object = Obj(); // 0x734 PushV
	var_608_object = var_554_object; // 0x735 Mov
	func_2337(); // 0x736 NEW_2
	StopDialog(var_560_object); // 0x738 Func
	GetReturnValue(var_562_int); // 0x73a ObjFunc
	var_553_int = var_562_int; // 0x73c Mov
	return 8; // 0x73d Return
}


func_2546(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0x9f2 PushV
	self(var_128_object); // 0x9f3 Func
	var_126_object = var_128_object; // 0x9f5 Mov
	return 2; // 0x9f6 Return
}


func_2802(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xaf2 PushV
	GetDiaryRoot(var_57_object); // 0xaf3 Func
	var_58_bool = var_57_object == 0; // 0xaf5 Not
	if(var_58_bool == 0) goto Label_2812; // 0xaf6 JumpB
	var_59_string = "Can't retrieve diary root"; // 0xaf7 PushS
	Trace(var_59_string); // 0xaf8 Func
	var_55_object = 0; // 0xafa MovB
	return 2; // 0xafb Return
	
Label_2812:
	var_55_object = var_57_object; // 0xafc Mov
	return 2; // 0xafd Return
}


func_503(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x1f7 PushV
	var_0_object = var_53_object; // 0x1f8 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x1f9 PushV
	var_64_object = var_53_object; // 0x1fa Mov
	var_65_float = 70.0; // 0x1fb MovF
	func_2268(var_64_object, var_65_float); // 0x1fc NEW_2
	var_110_bool = var_63_bool == 0; // 0x1fe Not
	if(var_110_bool == 0) goto Label_514; // 0x1ff JumpB
	var_52_int = -2; // 0x200 MovI
	return 8; // 0x201 Return
	
Label_514:
	CreateDialog(var_59_object); // 0x202 Func
	var_111_int = 0; // 0x204 PushV
	func_2912(var_111_int); // 0x205 NEW_2
	SetNPCName(var_111_int); // 0x207 ObjFunc
	var_112_int = 0; // 0x209 PushV
	func_2910(var_112_int); // 0x20a NEW_2
	SetNPCDescription(var_112_int); // 0x20c ObjFunc
	var_113_string = ""; // 0x20e PushV
	func_2914(var_113_string); // 0x20f NEW_2
	SetPhoto(var_113_string); // 0x211 ObjFunc
	var_114_string = ""; // 0x213 PushV
	func_2916(var_114_string); // 0x214 NEW_2
	SetPhoto2(var_114_string); // 0x216 ObjFunc
	var_115_int = 0; // 0x218 PushV
	func_2893(var_115_int); // 0x219 NEW_2
	SetPlayerName(var_115_int); // 0x21b ObjFunc
	var_61_int = -1; // 0x21d MovI
	IsOverrideActive(var_60_bool); // 0x21e Func
	var_123_bool = var_60_bool; // 0x220 Push
	if(var_123_bool == 0) goto Label_548; // 0x221 JumpB
	var_52_int = -2; // 0x222 MovI
	return 8; // 0x223 Return
	
Label_548:
	DoDialog(var_59_object); // 0x224 Func
	var_124_bool = 0; var_125_object = Obj(); // 0x226 PushV
	var_126_object = Obj(); // 0x227 PushV
	func_2546(var_126_object); // 0x228 NEW_2
	var_125_object = var_126_object; // 0x229 Mov
	func_2355(var_124_bool, var_125_object); // 0x22b NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x22d PushV
	var_219_object = var_53_object; // 0x22e Mov
	var_220_object = var_59_object; // 0x22f Mov
	TaskCall(3); // 0x230 TaskCall
	func_584(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	IsDialogEnd(var_62_bool); // 0x234 ObjFunc
	
Label_566:
	var_268_bool = var_62_bool == 0; // 0x236 Not
	if(var_268_bool == 0) goto Label_573; // 0x237 JumpB
	sync(); // 0x238 Func
	IsDialogEnd(var_62_bool); // 0x23a ObjFunc
	goto Label_566; // 0x23c Jump
	
Label_573:
	var_269_object = Obj(); // 0x23d PushV
	var_269_object = var_53_object; // 0x23e Mov
	func_2337(); // 0x23f NEW_2
	StopDialog(var_59_object); // 0x241 Func
	GetReturnValue(var_61_int); // 0x243 ObjFunc
	var_52_int = var_61_int; // 0x245 Mov
	return 8; // 0x246 Return
}


func_2040()
{
	var_611_float = 0; var_612_float = 0; // 0x7f8 PushV
	var_613_int = 8; // 0x7f9 PushI
	var_614_int = 16; // 0x7fa PushI
	rand(var_612_float, var_613_int, var_614_int); // 0x7fb Func
	var_615_int = 10; // 0x7fd PushI
	SetTimer(var_615_int, var_612_float); // 0x7fe Func
	return 2; // 0x800 Return
}


func_1271(var_2_object, var_459_string)
{
	var_460_bool = 0; // 0x4f8 PushV
	func_2918(var_460_bool); // 0x4f9 NEW_2
	var_461_bool = var_460_bool == 0; // 0x4fb Not
	if(var_461_bool == 0) goto Label_1278; // 0x4fc JumpB
	return 0; // 0x4fd Return
	
Label_1278:
	var_462_bool = var_459_string == var_2_object; // 0x4fe Eq
	if(var_462_bool == 0) goto Label_1281; // 0x4ff JumpB
	return 0; // 0x500 Return
	
Label_1281:
	var_463_string = ""; var_464_bool = 0; // 0x501 PushV
	var_463_string = var_459_string; // 0x502 Mov
	var_465_string = ""; // 0x503 PushS
	var_466_bool = var_459_string == var_465_string; // 0x504 Eq
	if(var_466_bool == 0) goto Label_1288; // 0x505 JumpB
	var_464_bool = 0; // 0x506 MovB
	goto Label_1289; // 0x507 Jump
	
Label_1289:
	func_2509(var_463_string, var_464_bool); // 0x509 NEW_2
	var_2_object = var_459_string; // 0x50b TMov
	return 0; // 0x50c Return
	
Label_1288:
	var_464_bool = 1; // 0x508 MovB
}


func_2815(var_46_bool, var_47_object, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0xaff PushV
	var_55_object = Obj(); // 0xb00 PushV
	func_2802(var_55_object); // 0xb01 NEW_2
	var_52_object = var_55_object; // 0xb02 Mov
	Find(var_48_int, var_53_object); // 0xb04 ObjFunc
	var_60_bool = var_53_object == 0; // 0xb06 Not
	if(var_60_bool == 0) goto Label_2830; // 0xb07 JumpB
	var_61_string = "Can't find diary parent with id: "; // 0xb08 PushS
	var_62_int = var_61_string + var_48_int; // 0xb09 Add
	Trace(var_62_int); // 0xb0a Func
	var_46_bool = 0; // 0xb0c MovB
	return 6; // 0xb0d Return
	
Label_2830:
	AddChild(var_47_object); // 0xb0e ObjFunc
	var_63_int = 7; // 0xb10 PushI
	SendWorldWndMessage(var_63_int); // 0xb11 Func
	GetCategory(var_54_int); // 0xb13 ObjFunc
	SetDiarySection(var_54_int); // 0xb15 Func
	var_46_bool = 0; // 0xb17 MovB
	return 6; // 0xb18 Return
}


