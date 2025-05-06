task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xac PushI
	if(var_33_int == 0) goto Label_502; // 0xad JumpB
	func_2517(); // 0xaf NEW_2
	var_35_int = 26110; // 0xb1 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xb2 Eq
	if(var_36_bool == 0) goto Label_185; // 0xb3 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xb4 PushV
	var_37_object = var_1_object; // 0xb5 MovT
	var_38_object = var_0_object; // 0xb6 MovT
	func_2633(); // 0xb7 NEW_2
	
Label_185:
	var_64_int = 28176; // 0xb9 PushI
	var_65_bool = var_32_cvector == var_64_int; // 0xba Eq
	if(var_65_bool == 0) goto Label_203; // 0xbb JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0xbc PushV
	var_66_object = var_1_object; // 0xbd MovT
	var_67_object = var_0_object; // 0xbe MovT
	func_2633(); // 0xbf NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xc1 PushV
	var_68_object = var_1_object; // 0xc2 MovT
	var_69_object = var_0_object; // 0xc3 MovT
	func_2679(var_69_object); // 0xc4 NEW_2
	var_92_object = Obj(); var_93_object = Obj(); // 0xc6 PushV
	var_92_object = var_1_object; // 0xc7 MovT
	var_93_object = var_0_object; // 0xc8 MovT
	func_2673(); // 0xc9 NEW_2
	
Label_203:
	var_96_int = 40900; // 0xcb PushI
	var_97_bool = var_32_cvector == var_96_int; // 0xcc Eq
	if(var_97_bool == 0) goto Label_211; // 0xcd JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xce PushV
	var_98_object = var_1_object; // 0xcf MovT
	var_99_object = var_0_object; // 0xd0 MovT
	func_2633(); // 0xd1 NEW_2
	
Label_211:
	var_100_int = 40901; // 0xd3 PushI
	var_101_bool = var_32_cvector == var_100_int; // 0xd4 Eq
	if(var_101_bool == 0) goto Label_219; // 0xd5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xd6 PushV
	var_102_object = var_1_object; // 0xd7 MovT
	var_103_object = var_0_object; // 0xd8 MovT
	func_2633(); // 0xd9 NEW_2
	
Label_219:
	var_104_int = 40902; // 0xdb PushI
	var_105_bool = var_32_cvector == var_104_int; // 0xdc Eq
	if(var_105_bool == 0) goto Label_227; // 0xdd JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xde PushV
	var_106_object = var_1_object; // 0xdf MovT
	var_107_object = var_0_object; // 0xe0 MovT
	func_2633(); // 0xe1 NEW_2
	
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
	func_2718(var_129_object); // 0xf1 NEW_2
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
	func_2706(var_173_object); // 0x145 NEW_2
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
	func_2896(var_248_bool); // 0x1ec NEW_2
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
	func_2517(); // 0x29c NEW_2
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
	func_2896(var_61_bool); // 0x2b7 NEW_2
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
	if(var_33_int == 0) goto Label_1080; // 0x36f JumpB
	func_2517(); // 0x371 NEW_2
	var_35_int = 27017; // 0x373 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x374 Eq
	if(var_36_bool == 0) goto Label_891; // 0x375 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x376 PushV
	var_37_object = var_1_object; // 0x377 MovT
	var_38_object = var_0_object; // 0x378 MovT
	func_2642(); // 0x379 NEW_2
	
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
	func_2730(var_85_object); // 0x389 NEW_2
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
	if(var_102_bool == 0) goto Label_942; // 0x39e JumpB
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
	return 0; // 0x3ad Return
	
Label_942:
	var_108_int = 44778; // 0x3ae PushI
	var_109_bool = var_31_bool == var_108_int; // 0x3af Eq
	if(var_109_bool == 0) goto Label_945; // 0x3b0 JumpB
	
Label_945:
	var_110_int = 44781; // 0x3b1 PushI
	var_111_bool = var_31_bool == var_110_int; // 0x3b2 Eq
	if(var_111_bool == 0) goto Label_963; // 0x3b3 JumpB
	var_112_string = ""; // 0x3b4 PushV
	var_112_string = "Neutral"; // 0x3b5 MovS
	func_855(var_32_cvector, var_112_string); // 0x3b6 NEW_2
	var_113_int = 542407; // 0x3b8 PushI
	SetMessage(var_113_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_114_int = 542408; // 0x3bd PushI
	var_115_int = 27016; // 0x3be PushI
	var_116_int = 44782; // 0x3bf PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_117_int = 44776; // 0x3c3 PushI
	var_118_bool = var_31_bool == var_117_int; // 0x3c4 Eq
	if(var_118_bool == 0) goto Label_986; // 0x3c5 JumpB
	var_119_string = ""; // 0x3c6 PushV
	var_119_string = "Pride"; // 0x3c7 MovS
	func_855(var_32_cvector, var_119_string); // 0x3c8 NEW_2
	var_120_int = 542402; // 0x3ca PushI
	SetMessage(var_120_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_121_int = 542403; // 0x3cf PushI
	var_122_int = 27016; // 0x3d0 PushI
	var_123_int = 44777; // 0x3d1 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3d2 TObjFunc
	var_124_int = 542406; // 0x3d4 PushI
	var_125_int = 27016; // 0x3d5 PushI
	var_126_int = 44780; // 0x3d6 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x3d7 TObjFunc
	return 0; // 0x3d9 Return
	
Label_986:
	var_127_int = 27016; // 0x3da PushI
	var_128_bool = var_31_bool == var_127_int; // 0x3db Eq
	if(var_128_bool == 0) goto Label_1009; // 0x3dc JumpB
	var_129_string = ""; // 0x3dd PushV
	var_129_string = "Think"; // 0x3de MovS
	func_855(var_32_cvector, var_129_string); // 0x3df NEW_2
	var_130_int = 525693; // 0x3e1 PushI
	SetMessage(var_130_int); // 0x3e2 TObjFunc
	ClearReplies(); // 0x3e4 TObjFunc
	var_131_int = 542409; // 0x3e6 PushI
	var_132_int = 44786; // 0x3e7 PushI
	var_133_int = 44785; // 0x3e8 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x3e9 TObjFunc
	var_134_int = 542414; // 0x3eb PushI
	var_135_int = 30672; // 0x3ec PushI
	var_136_int = 44790; // 0x3ed PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x3ee TObjFunc
	return 0; // 0x3f0 Return
	
Label_1009:
	var_137_int = 44786; // 0x3f1 PushI
	var_138_bool = var_31_bool == var_137_int; // 0x3f2 Eq
	if(var_138_bool == 0) goto Label_1032; // 0x3f3 JumpB
	var_139_string = ""; // 0x3f4 PushV
	var_139_string = "Smile"; // 0x3f5 MovS
	func_855(var_32_cvector, var_139_string); // 0x3f6 NEW_2
	var_140_int = 542410; // 0x3f8 PushI
	SetMessage(var_140_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_141_int = 529219; // 0x3fd PushI
	var_142_int = 30672; // 0x3fe PushI
	var_143_int = 30671; // 0x3ff PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x400 TObjFunc
	var_144_int = 542411; // 0x402 PushI
	var_145_int = 44788; // 0x403 PushI
	var_146_int = 44787; // 0x404 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x405 TObjFunc
	return 0; // 0x407 Return
	
Label_1032:
	var_147_int = 44788; // 0x408 PushI
	var_148_bool = var_31_bool == var_147_int; // 0x409 Eq
	if(var_148_bool == 0) goto Label_1050; // 0x40a JumpB
	var_149_string = ""; // 0x40b PushV
	var_149_string = "Neutral"; // 0x40c MovS
	func_855(var_32_cvector, var_149_string); // 0x40d NEW_2
	var_150_int = 542412; // 0x40f PushI
	SetMessage(var_150_int); // 0x410 TObjFunc
	ClearReplies(); // 0x412 TObjFunc
	var_151_int = 542413; // 0x414 PushI
	var_152_int = 30672; // 0x415 PushI
	var_153_int = 44789; // 0x416 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x417 TObjFunc
	return 0; // 0x419 Return
	
Label_1050:
	var_154_int = 30672; // 0x41a PushI
	var_155_bool = var_31_bool == var_154_int; // 0x41b Eq
	if(var_155_bool == 0) goto Label_1068; // 0x41c JumpB
	var_156_string = ""; // 0x41d PushV
	var_156_string = "Neutral"; // 0x41e MovS
	func_855(var_32_cvector, var_156_string); // 0x41f NEW_2
	var_157_int = 529220; // 0x421 PushI
	SetMessage(var_157_int); // 0x422 TObjFunc
	ClearReplies(); // 0x424 TObjFunc
	var_158_int = 525694; // 0x426 PushI
	var_159_int = -1; // 0x427 PushI
	var_160_int = 27017; // 0x428 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x429 TObjFunc
	return 0; // 0x42b Return
	
Label_1068:
	var_3_string = 1; // 0x42c TMovB
	var_161_bool = 0; // 0x42d PushV
	func_2896(var_161_bool); // 0x42e NEW_2
	if(var_161_bool == 0) goto Label_1076; // 0x430 JumpB
	lshStopAnimation(); // 0x431 Func
	goto Label_1078; // 0x433 Jump
	
Label_1078:
	return 0; // 0x436 Return
	
Label_1076:
	StopAnimation(); // 0x434 Func
	
Label_1080:
	return 0; // 0x438 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x4fa PushI
	if(var_33_int == 0) goto Label_1494; // 0x4fb JumpB
	func_2517(); // 0x4fd NEW_2
	var_35_int = 29286; // 0x4ff PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x500 Eq
	if(var_36_bool == 0) goto Label_1292; // 0x501 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x502 PushV
	var_37_object = var_1_object; // 0x503 MovT
	var_38_object = var_0_object; // 0x504 MovT
	func_2657(); // 0x505 NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0x507 PushV
	var_55_object = var_1_object; // 0x508 MovT
	var_56_object = var_0_object; // 0x509 MovT
	func_2690(); // 0x50a NEW_2
	
Label_1292:
	var_81_int = 29287; // 0x50c PushI
	var_82_bool = var_32_cvector == var_81_int; // 0x50d Eq
	if(var_82_bool == 0) goto Label_1305; // 0x50e JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x50f PushV
	var_83_object = var_1_object; // 0x510 MovT
	var_84_object = var_0_object; // 0x511 MovT
	func_2657(); // 0x512 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0x514 PushV
	var_85_object = var_1_object; // 0x515 MovT
	var_86_object = var_0_object; // 0x516 MovT
	func_2690(); // 0x517 NEW_2
	
Label_1305:
	var_87_int = 29066; // 0x519 PushI
	var_88_bool = var_31_bool == var_87_int; // 0x51a Eq
	if(var_88_bool == 0) goto Label_1359; // 0x51b JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x51c PushV
	var_90_object = var_1_object; // 0x51d MovT
	func_2742(var_90_object); // 0x51e NEW_2
	var_97_bool = var_89_bool == 0; // 0x520 Not
	if(var_97_bool == 0) goto Label_1339; // 0x521 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x522 PushV
	var_98_object = var_1_object; // 0x523 MovT
	var_99_object = var_0_object; // 0x524 MovT
	func_2651(); // 0x525 NEW_2
	var_102_string = ""; // 0x527 PushV
	var_102_string = "Neutral"; // 0x528 MovS
	func_1251(var_32_cvector, var_102_string); // 0x529 NEW_2
	var_119_int = 527714; // 0x52b PushI
	SetMessage(var_119_int); // 0x52c TObjFunc
	ClearReplies(); // 0x52e TObjFunc
	var_120_int = 527715; // 0x530 PushI
	var_121_int = 29269; // 0x531 PushI
	var_122_int = 29067; // 0x532 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x533 TObjFunc
	var_123_int = 527928; // 0x535 PushI
	var_124_int = 29269; // 0x536 PushI
	var_125_int = 29279; // 0x537 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x538 TObjFunc
	return 0; // 0x53a Return
	
Label_1339:
	var_126_string = ""; // 0x53b PushV
	var_126_string = "Neutral"; // 0x53c MovS
	func_1251(var_32_cvector, var_126_string); // 0x53d NEW_2
	var_127_int = 527716; // 0x53f PushI
	SetMessage(var_127_int); // 0x540 TObjFunc
	ClearReplies(); // 0x542 TObjFunc
	var_128_int = 527717; // 0x544 PushI
	var_129_int = -1; // 0x545 PushI
	var_130_int = 29069; // 0x546 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x547 TObjFunc
	var_131_int = 527918; // 0x549 PushI
	var_132_int = -1; // 0x54a PushI
	var_133_int = 29268; // 0x54b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x54c TObjFunc
	return 0; // 0x54e Return
	
Label_1359:
	var_134_int = 29269; // 0x54f PushI
	var_135_bool = var_31_bool == var_134_int; // 0x550 Eq
	if(var_135_bool == 0) goto Label_1382; // 0x551 JumpB
	var_136_string = ""; // 0x552 PushV
	var_136_string = "Neutral"; // 0x553 MovS
	func_1251(var_32_cvector, var_136_string); // 0x554 NEW_2
	var_137_int = 527919; // 0x556 PushI
	SetMessage(var_137_int); // 0x557 TObjFunc
	ClearReplies(); // 0x559 TObjFunc
	var_138_int = 527920; // 0x55b PushI
	var_139_int = 29271; // 0x55c PushI
	var_140_int = 29270; // 0x55d PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x55e TObjFunc
	var_141_int = 527923; // 0x560 PushI
	var_142_int = 29274; // 0x561 PushI
	var_143_int = 29273; // 0x562 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x563 TObjFunc
	return 0; // 0x565 Return
	
Label_1382:
	var_144_int = 29274; // 0x566 PushI
	var_145_bool = var_31_bool == var_144_int; // 0x567 Eq
	if(var_145_bool == 0) goto Label_1400; // 0x568 JumpB
	var_146_string = ""; // 0x569 PushV
	var_146_string = "Neutral"; // 0x56a MovS
	func_1251(var_32_cvector, var_146_string); // 0x56b NEW_2
	var_147_int = 527924; // 0x56d PushI
	SetMessage(var_147_int); // 0x56e TObjFunc
	ClearReplies(); // 0x570 TObjFunc
	var_148_int = 527925; // 0x572 PushI
	var_149_int = 29276; // 0x573 PushI
	var_150_int = 29275; // 0x574 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x575 TObjFunc
	return 0; // 0x577 Return
	
Label_1400:
	var_151_int = 29276; // 0x578 PushI
	var_152_bool = var_31_bool == var_151_int; // 0x579 Eq
	if(var_152_bool == 0) goto Label_1418; // 0x57a JumpB
	var_153_string = ""; // 0x57b PushV
	var_153_string = "Neutral"; // 0x57c MovS
	func_1251(var_32_cvector, var_153_string); // 0x57d NEW_2
	var_154_int = 527926; // 0x57f PushI
	SetMessage(var_154_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_155_int = 527927; // 0x584 PushI
	var_156_int = 29271; // 0x585 PushI
	var_157_int = 29277; // 0x586 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x587 TObjFunc
	return 0; // 0x589 Return
	
Label_1418:
	var_158_int = 29271; // 0x58a PushI
	var_159_bool = var_31_bool == var_158_int; // 0x58b Eq
	if(var_159_bool == 0) goto Label_1441; // 0x58c JumpB
	var_160_string = ""; // 0x58d PushV
	var_160_string = "Neutral"; // 0x58e MovS
	func_1251(var_32_cvector, var_160_string); // 0x58f NEW_2
	var_161_int = 527921; // 0x591 PushI
	SetMessage(var_161_int); // 0x592 TObjFunc
	ClearReplies(); // 0x594 TObjFunc
	var_162_int = 527922; // 0x596 PushI
	var_163_int = 29282; // 0x597 PushI
	var_164_int = 29272; // 0x598 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x599 TObjFunc
	var_165_int = 527929; // 0x59b PushI
	var_166_int = 29284; // 0x59c PushI
	var_167_int = 29281; // 0x59d PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x59e TObjFunc
	return 0; // 0x5a0 Return
	
Label_1441:
	var_168_int = 29282; // 0x5a1 PushI
	var_169_bool = var_31_bool == var_168_int; // 0x5a2 Eq
	if(var_169_bool == 0) goto Label_1459; // 0x5a3 JumpB
	var_170_string = ""; // 0x5a4 PushV
	var_170_string = "Neutral"; // 0x5a5 MovS
	func_1251(var_32_cvector, var_170_string); // 0x5a6 NEW_2
	var_171_int = 527930; // 0x5a8 PushI
	SetMessage(var_171_int); // 0x5a9 TObjFunc
	ClearReplies(); // 0x5ab TObjFunc
	var_172_int = 527931; // 0x5ad PushI
	var_173_int = 29284; // 0x5ae PushI
	var_174_int = 29283; // 0x5af PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x5b0 TObjFunc
	return 0; // 0x5b2 Return
	
Label_1459:
	var_175_int = 29284; // 0x5b3 PushI
	var_176_bool = var_31_bool == var_175_int; // 0x5b4 Eq
	if(var_176_bool == 0) goto Label_1482; // 0x5b5 JumpB
	var_177_string = ""; // 0x5b6 PushV
	var_177_string = "Neutral"; // 0x5b7 MovS
	func_1251(var_32_cvector, var_177_string); // 0x5b8 NEW_2
	var_178_int = 527932; // 0x5ba PushI
	SetMessage(var_178_int); // 0x5bb TObjFunc
	ClearReplies(); // 0x5bd TObjFunc
	var_179_int = 527933; // 0x5bf PushI
	var_180_int = -1; // 0x5c0 PushI
	var_181_int = 29286; // 0x5c1 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x5c2 TObjFunc
	var_182_int = 527934; // 0x5c4 PushI
	var_183_int = -1; // 0x5c5 PushI
	var_184_int = 29287; // 0x5c6 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x5c7 TObjFunc
	return 0; // 0x5c9 Return
	
Label_1482:
	var_3_string = 1; // 0x5ca TMovB
	var_185_bool = 0; // 0x5cb PushV
	func_2896(var_185_bool); // 0x5cc NEW_2
	if(var_185_bool == 0) goto Label_1490; // 0x5ce JumpB
	lshStopAnimation(); // 0x5cf Func
	goto Label_1492; // 0x5d1 Jump
	
Label_1492:
	return 0; // 0x5d4 Return
	
Label_1490:
	StopAnimation(); // 0x5d2 Func
	
Label_1494:
	return 0; // 0x5d6 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x67e PushI
	if(var_33_int == 0) goto Label_1753; // 0x67f JumpB
	func_2517(); // 0x681 NEW_2
	var_35_int = 36960; // 0x683 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x684 Eq
	if(var_36_bool == 0) goto Label_1695; // 0x685 JumpB
	var_37_string = ""; // 0x686 PushV
	var_37_string = "Neutral"; // 0x687 MovS
	func_1639(var_32_cvector, var_37_string); // 0x688 NEW_2
	var_54_int = 535284; // 0x68a PushI
	SetMessage(var_54_int); // 0x68b TObjFunc
	ClearReplies(); // 0x68d TObjFunc
	var_55_int = 535285; // 0x68f PushI
	var_56_int = 36962; // 0x690 PushI
	var_57_int = 36961; // 0x691 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x692 TObjFunc
	var_58_int = 535292; // 0x694 PushI
	var_59_int = -1; // 0x695 PushI
	var_60_int = 36968; // 0x696 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x697 TObjFunc
	var_61_int = 535293; // 0x699 PushI
	var_62_int = -1; // 0x69a PushI
	var_63_int = 36969; // 0x69b PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_64_int = 36962; // 0x69f PushI
	var_65_bool = var_31_bool == var_64_int; // 0x6a0 Eq
	if(var_65_bool == 0) goto Label_1718; // 0x6a1 JumpB
	var_66_string = ""; // 0x6a2 PushV
	var_66_string = "Neutral"; // 0x6a3 MovS
	func_1639(var_32_cvector, var_66_string); // 0x6a4 NEW_2
	var_67_int = 535286; // 0x6a6 PushI
	SetMessage(var_67_int); // 0x6a7 TObjFunc
	ClearReplies(); // 0x6a9 TObjFunc
	var_68_int = 535287; // 0x6ab PushI
	var_69_int = 36964; // 0x6ac PushI
	var_70_int = 36963; // 0x6ad PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x6ae TObjFunc
	var_71_int = 535291; // 0x6b0 PushI
	var_72_int = -1; // 0x6b1 PushI
	var_73_int = 36967; // 0x6b2 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x6b3 TObjFunc
	return 0; // 0x6b5 Return
	
Label_1718:
	var_74_int = 36964; // 0x6b6 PushI
	var_75_bool = var_31_bool == var_74_int; // 0x6b7 Eq
	if(var_75_bool == 0) goto Label_1741; // 0x6b8 JumpB
	var_76_string = ""; // 0x6b9 PushV
	var_76_string = "Neutral"; // 0x6ba MovS
	func_1639(var_32_cvector, var_76_string); // 0x6bb NEW_2
	var_77_int = 535288; // 0x6bd PushI
	SetMessage(var_77_int); // 0x6be TObjFunc
	ClearReplies(); // 0x6c0 TObjFunc
	var_78_int = 535289; // 0x6c2 PushI
	var_79_int = -1; // 0x6c3 PushI
	var_80_int = 36965; // 0x6c4 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x6c5 TObjFunc
	var_81_int = 535290; // 0x6c7 PushI
	var_82_int = -1; // 0x6c8 PushI
	var_83_int = 36966; // 0x6c9 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x6ca TObjFunc
	return 0; // 0x6cc Return
	
Label_1741:
	var_3_string = 1; // 0x6cd TMovB
	var_84_bool = 0; // 0x6ce PushV
	func_2896(var_84_bool); // 0x6cf NEW_2
	if(var_84_bool == 0) goto Label_1749; // 0x6d1 JumpB
	lshStopAnimation(); // 0x6d2 Func
	goto Label_1751; // 0x6d4 Jump
	
Label_1751:
	return 0; // 0x6d7 Return
	
Label_1749:
	StopAnimation(); // 0x6d5 Func
	
Label_1753:
	return 0; // 0x6d9 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x77c PushI
	if(var_33_int == 0) goto Label_1956; // 0x77d JumpB
	func_2517(); // 0x77f NEW_2
	var_35_int = 42554; // 0x781 PushI
	var_36_bool = var_31_int == var_35_int; // 0x782 Eq
	if(var_36_bool == 0) goto Label_1944; // 0x783 JumpB
	var_37_string = ""; // 0x784 PushV
	var_37_string = "Neutral"; // 0x785 MovS
	func_1893(var_32_cvector, var_37_string); // 0x786 NEW_2
	var_54_int = 540545; // 0x788 PushI
	SetMessage(var_54_int); // 0x789 TObjFunc
	ClearReplies(); // 0x78b TObjFunc
	var_55_int = 540546; // 0x78d PushI
	var_56_int = -1; // 0x78e PushI
	var_57_int = 42555; // 0x78f PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x790 TObjFunc
	var_58_int = 540798; // 0x792 PushI
	var_59_int = -1; // 0x793 PushI
	var_60_int = 42847; // 0x794 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x795 TObjFunc
	return 0; // 0x797 Return
	
Label_1944:
	var_3_string = 1; // 0x798 TMovB
	var_61_bool = 0; // 0x799 PushV
	func_2896(var_61_bool); // 0x79a NEW_2
	if(var_61_bool == 0) goto Label_1952; // 0x79c JumpB
	lshStopAnimation(); // 0x79d Func
	goto Label_1954; // 0x79f Jump
	
Label_1954:
	return 0; // 0x7a2 Return
	
Label_1952:
	StopAnimation(); // 0x7a0 Func
	
Label_1956:
	return 0; // 0x7a4 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x7f2 PushI
	var_33_bool = var_31_int == var_32_int; // 0x7f3 Eq
	if(var_33_bool == 0) goto Label_2070; // 0x7f4 JumpB
	func_2029(); // 0x7f6 NEW_2
	var_35_bool = 0; // 0x7f8 PushV
	var_35_bool = 0; // 0x7f9 MovB
	var_36_bool = 0; // 0x7fa PushV
	func_2243(var_36_bool); // 0x7fb NEW_2
	if(var_36_bool == 0) goto Label_2051; // 0x7fd JumpB
	var_39_bool = 0; // 0x7fe PushV
	func_1998(var_39_bool); // 0x7ff NEW_2
	if(var_39_bool == 0) goto Label_2051; // 0x801 JumpB
	var_35_bool = 1; // 0x802 MovB
	
Label_2051:
	if(var_35_bool == 0) goto Label_2064; // 0x803 JumpB
	var_56_bool = 0; // 0x804 PushV
	func_1978(var_56_bool); // 0x805 NEW_2
	if(var_56_bool == 0) goto Label_2063; // 0x807 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x808 PushV
	var_77_object = Obj(); // 0x809 PushV
	func_2524(var_77_object); // 0x80a NEW_2
	var_76_object = var_77_object; // 0x80b Mov
	func_2391(var_76_object); // 0x80d NEW_2
	
Label_2063:
	goto Label_2070; // 0x80f Jump
	
Label_2070:
	return 0; // 0x816 Return
	
Label_2064:
	func_1993(var_31_int); // 0x811 NEW_2
	func_2020(); // 0x814 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2211(); // 0x818 NEW_2
	func_2029(); // 0x81b NEW_2
	lshStopSpeech(); // 0x81d Func
	lshStopAnimation(); // 0x81f Func
	StopAsync(); // 0x821 Func
	Hold(); // 0x823 Func
	return 0; // 0x825 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x826 Func
	func_2029(); // 0x829 NEW_2
	var_32_string = ""; // 0x82b PushV
	var_32_string = "Neutral"; // 0x82c MovS
	func_2471(var_32_string); // 0x82d NEW_2
	func_2020(); // 0x830 NEW_2
	return 0; // 0x832 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x834 Push
	if(var_32_bool == 0) goto Label_2106; // 0x835 JumpB
	func_2020(); // 0x837 NEW_2
	goto Label_2110; // 0x839 Jump
	
Label_2110:
	return 0; // 0x83e Return
	
Label_2106:
	var_38_string = ""; // 0x83a PushV
	var_38_string = "Neutral"; // 0x83b MovS
	func_2471(var_38_string); // 0x83c NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x83f PushV
	IsOverrideActive(var_33_bool); // 0x840 Func
	var_34_bool = var_33_bool == 0; // 0x842 Not
	if(var_34_bool == 0) goto Label_2139; // 0x843 JumpB
	EventDisable(0); // 0x844 EventDisable
	func_2211(); // 0x846 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x848 PushV
	var_36_object = var_31_object; // 0x849 Mov
	func_2234(var_36_object); // 0x84a NEW_2
	EventEnable(0); // 0x84c EventEnable
	var_49_object = Obj(); // 0x84d PushV
	var_49_object = var_31_object; // 0x84e Mov
	func_2898(var_49_object); // 0x84f NEW_2
	var_607_string = ""; // 0x851 PushV
	var_607_string = "Neutral"; // 0x852 MovS
	func_2471(var_607_string); // 0x853 NEW_2
	func_2029(); // 0x856 NEW_2
	func_2020(); // 0x859 NEW_2
	
Label_2139:
	return 2; // 0x85b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x7a5 PushGE
	var_31_bool = 0; // 0x7a6 MovB
	GlobalVars[1] = var_31_bool; // 0x7a7 PopGE
	func_1964(var_30_cvector); // 0x7a9 NEW_2
	return 0; // 0x7ab Return
}


func_0(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; // 0x0 PushV
	var_0_object = var_280_object; // 0x1 TMov
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0; // 0x2 PushV
	var_291_object = var_280_object; // 0x3 Mov
	var_292_float = 70.0; // 0x4 MovF
	func_2248(var_291_object, var_292_float); // 0x5 NEW_2
	var_293_bool = var_290_bool == 0; // 0x7 Not
	if(var_293_bool == 0) goto Label_11; // 0x8 JumpB
	var_279_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_286_object); // 0xb Func
	var_294_int = 0; // 0xd PushV
	func_2890(var_294_int); // 0xe NEW_2
	SetNPCName(var_294_int); // 0x10 ObjFunc
	var_295_int = 0; // 0x12 PushV
	func_2888(var_295_int); // 0x13 NEW_2
	SetNPCDescription(var_295_int); // 0x15 ObjFunc
	var_296_string = ""; // 0x17 PushV
	func_2892(var_296_string); // 0x18 NEW_2
	SetPhoto(var_296_string); // 0x1a ObjFunc
	var_297_string = ""; // 0x1c PushV
	func_2894(var_297_string); // 0x1d NEW_2
	SetPhoto2(var_297_string); // 0x1f ObjFunc
	var_298_int = 0; // 0x21 PushV
	func_2871(var_298_int); // 0x22 NEW_2
	SetPlayerName(var_298_int); // 0x24 ObjFunc
	var_288_int = -1; // 0x26 MovI
	IsOverrideActive(var_287_bool); // 0x27 Func
	var_299_bool = var_287_bool; // 0x29 Push
	if(var_299_bool == 0) goto Label_45; // 0x2a JumpB
	var_279_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_286_object); // 0x2d Func
	var_300_bool = 0; var_301_object = Obj(); // 0x2f PushV
	var_302_object = Obj(); // 0x30 PushV
	func_2524(var_302_object); // 0x31 NEW_2
	var_301_object = var_302_object; // 0x32 Mov
	func_2333(var_300_bool, var_301_object); // 0x34 NEW_2
	var_303_object = Obj(); var_304_object = Obj(); // 0x36 PushV
	var_303_object = var_280_object; // 0x37 Mov
	var_304_object = var_286_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_289_bool); // 0x3d ObjFunc
	
Label_63:
	var_344_bool = var_289_bool == 0; // 0x3f Not
	if(var_344_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_289_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_345_object = Obj(); // 0x46 PushV
	var_345_object = var_280_object; // 0x47 Mov
	func_2316(); // 0x48 NEW_2
	StopDialog(var_286_object); // 0x4a Func
	GetReturnValue(var_288_int); // 0x4c ObjFunc
	var_279_int = var_288_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2821(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj(); // 0xb05 PushV
	GetMainOutdoorScene(var_44_object); // 0xb06 Func
	var_46_bool = var_44_object == 0; // 0xb08 NullEq
	if(var_46_bool == 0) goto Label_2832; // 0xb09 JumpB
	var_47_string = "Can't find main outdoor scene"; // 0xb0a PushS
	Trace(var_47_string); // 0xb0b Func
	var_45_object = 0; // 0xb0d SetNull
	var_41_object = var_45_object; // 0xb0e Mov
	return 4; // 0xb0f Return
	
Label_2832:
	GetMap(var_45_object); // 0xb10 ObjFunc
	var_41_object = var_45_object; // 0xb12 Mov
	return 4; // 0xb13 Return
}


func_2316()
{
	var_269_bool = 0; var_270_bool = 0; // 0x90c PushV
	CameraSwitchToNormal(); // 0x90d Func
	var_271_bool = 0; // 0x90f PushV
	func_2896(var_271_bool); // 0x910 NEW_2
	if(var_271_bool == 0) goto Label_2324; // 0x912 JumpB
	goto Label_2332; // 0x913 Jump
	
Label_2332:
	return 2; // 0x91c Return
	
Label_2324:
	var_272_string = "head"; // 0x914 PushS
	HasAnimationTrack(var_270_bool, var_272_string); // 0x915 Func
	var_273_bool = var_270_bool; // 0x917 Push
	if(var_273_bool == 0) goto Label_2332; // 0x918 JumpB
	var_274_string = "head"; // 0x919 PushS
	UnlookAsync(var_274_string); // 0x91a Func
}


func_2576(var_71_object, var_72_string, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); // 0xa10 PushV
	CreateInvItem(var_75_object); // 0xa11 Func
	SetItemName(var_72_string); // 0xa13 ObjFunc
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; // 0xa15 PushV
	var_76_object = var_71_object; // 0xa16 Mov
	var_77_object = var_75_object; // 0xa17 Mov
	var_78_int = var_73_int; // 0xa18 Mov
	func_2557(var_77_object, var_78_int); // 0xa19 NEW_2
	return 2; // 0xa1b Return
}


func_787(var_0_object, var_1_object, var_2_object, var_3_string, var_372_object, var_373_object)
{
	var_0_object = var_373_object; // 0x314 TMov
	var_1_object = var_372_object; // 0x315 TMov
	var_3_string = 0; // 0x316 TMovB
	var_378_int = 1; // 0x317 PushI
	if(var_378_int == 0) goto Label_825; // 0x318 JumpB
	var_379_string = ""; // 0x319 PushV
	var_379_string = "Smile"; // 0x31a MovS
	func_855(var_373_object, var_379_string); // 0x31b NEW_2
	var_387_int = 525691; // 0x31d PushI
	SetMessage(var_387_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_388_bool = 0; var_389_object = Obj(); // 0x322 PushV
	var_389_object = var_1_object; // 0x323 MovT
	func_2730(var_389_object); // 0x324 NEW_2
	if(var_388_bool == 0) goto Label_812; // 0x326 JumpB
	var_394_int = 525692; // 0x327 PushI
	var_395_int = 30673; // 0x328 PushI
	var_396_int = 27015; // 0x329 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x32a TObjFunc
	
Label_812:
	var_397_int = 525695; // 0x32c PushI
	var_398_int = -1; // 0x32d PushI
	var_399_int = 27018; // 0x32e PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x32f TObjFunc
	var_400_int = 542396; // 0x331 PushI
	var_401_int = -1; // 0x332 PushI
	var_402_int = 44768; // 0x333 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x334 TObjFunc
	goto Label_825; // 0x336 Jump
	
Label_825:
	var_403_bool = 0; // 0x339 PushV
	func_2896(var_403_bool); // 0x33a NEW_2
	if(var_403_bool == 0) goto Label_840; // 0x33c JumpB
	
Label_829:
	lshWaitForAnimEnd(); // 0x33d Func
	var_404_string = var_3_string; // 0x33f PushT
	if(var_404_string == 0) goto Label_834; // 0x340 JumpB
	goto Label_839; // 0x341 Jump
	
Label_839:
	goto Label_854; // 0x347 Jump
	
Label_854:
	return 0; // 0x356 Return
	
Label_834:
	var_405_string = ""; // 0x342 PushV
	var_405_string = var_2_object; // 0x343 MovT
	func_2471(var_405_string); // 0x344 NEW_2
	goto Label_829; // 0x346 Jump
	
Label_840:
	var_406_string = "all"; // 0x348 PushS
	var_407_string = "idle"; // 0x349 PushS
	PlayAnimation(var_406_string, var_407_string); // 0x34a Func
	
Label_844:
	WaitForAnimEnd(); // 0x34c Func
	var_408_string = var_3_string; // 0x34e PushT
	if(var_408_string == 0) goto Label_849; // 0x34f JumpB
	goto Label_854; // 0x350 Jump
	
Label_849:
	var_409_string = "all"; // 0x351 PushS
	var_410_string = "idle"; // 0x352 PushS
	PlayAnimation(var_409_string, var_410_string); // 0x353 Func
	goto Label_844; // 0x355 Jump
}


func_2838(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0; // 0xb16 PushV
	GetMainOutdoorScene(var_67_object); // 0xb17 Func
	var_69_bool = var_67_object == 0; // 0xb19 NullEq
	if(var_69_bool == 0) goto Label_2847; // 0xb1a JumpB
	var_70_string = "Can't find main outdoor scene"; // 0xb1b PushS
	Trace(var_70_string); // 0xb1c Func
	return 8; // 0xb1e Return
	
Label_2847:
	GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector); // 0xb1f ObjFunc
	var_71_bool = var_68_bool == 0; // 0xb21 Not
	if(var_71_bool == 0) goto Label_2857; // 0xb22 JumpB
	var_72_string = "Warning: outdoor scene locator "; // 0xb23 PushS
	var_73_int = var_72_string + var_58_string; // 0xb24 Add
	var_74_string = " doesnt exist"; // 0xb25 PushS
	var_75_int = var_73_int + var_74_string; // 0xb26 Add
	Trace(var_75_int); // 0xb27 Func
	
Label_2857:
	GetMap(var_57_object); // 0xb29 ObjFunc
	var_76_bool = var_57_object == 0; // 0xb2b NullEq
	if(var_76_bool == 0) goto Label_2865; // 0xb2c JumpB
	var_77_string = "Can't find map"; // 0xb2d PushS
	Trace(var_77_string); // 0xb2e Func
	return 8; // 0xb30 Return
	
Label_2865:
	var_78_float = GetByIndex(var_65_cvector, 0); // 0xb31 PushE
	var_79_float = GetByIndex(var_65_cvector, 2); // 0xb32 PushE
	SetMapParams(var_78_float, var_79_float, var_59_float); // 0xb33 ObjFunc
	return 8; // 0xb35 Return
}


func_2589(var_52_float)
{
	var_53_float = 0; var_54_float = 0; // 0xa1d PushV
	GetGameTime(var_54_float); // 0xa1e Func
	var_52_float = var_54_float; // 0xa20 Mov
	return 2; // 0xa21 Return
}


func_2333(var_123_bool, var_124_object)
{
	var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_int = 0; // 0x91d PushV
	var_132_string = "voice_common"; // 0x91e PushS
	GetVariable(var_132_string, var_130_int); // 0x91f Func
	var_133_int = var_130_int; // 0x921 Push
	if(var_133_int == 0) goto Label_2371; // 0x922 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x923 PushV
	var_135_object = var_124_object; // 0x924 Mov
	func_2391(var_135_object); // 0x925 NEW_2
	var_164_bool = var_134_bool == 0; // 0x927 Not
	if(var_164_bool == 0) goto Label_2353; // 0x928 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x929 PushV
	var_166_object = var_124_object; // 0x92a Mov
	func_2428(var_166_object); // 0x92b NEW_2
	var_200_bool = var_165_bool == 0; // 0x92d Not
	if(var_200_bool == 0) goto Label_2353; // 0x92e JumpB
	var_123_bool = 0; // 0x92f MovB
	return 4; // 0x930 Return
	
Label_2353:
	var_201_int = 2; // 0x931 PushI
	irand(var_131_int, var_201_int); // 0x932 Func
	var_202_int = var_131_int; // 0x934 Push
	if(var_202_int == 0) goto Label_2366; // 0x935 JumpB
	var_203_string = "voice_common"; // 0x936 PushS
	var_204_int = 1; // 0x937 PushI
	var_205_int = var_130_int + var_204_int; // 0x938 Add
	var_206_int = 3; // 0x939 PushI
	var_207_int = var_205_int / var_206_int; // 0x93a Mod
	SetVariable(var_203_string, var_207_int); // 0x93b Func
	goto Label_2370; // 0x93d Jump
	
Label_2370:
	goto Label_2389; // 0x942 Jump
	
Label_2389:
	var_123_bool = 1; // 0x955 MovB
	return 4; // 0x956 Return
	
Label_2366:
	var_208_string = "voice_common"; // 0x93e PushS
	var_209_int = 0; // 0x93f PushI
	SetVariable(var_208_string, var_209_int); // 0x940 Func
	
Label_2371:
	var_210_bool = 0; var_211_object = Obj(); // 0x943 PushV
	var_211_object = var_124_object; // 0x944 Mov
	func_2428(var_211_object); // 0x945 NEW_2
	var_212_bool = var_210_bool == 0; // 0x947 Not
	if(var_212_bool == 0) goto Label_2385; // 0x948 JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x949 PushV
	var_214_object = var_124_object; // 0x94a Mov
	func_2391(var_214_object); // 0x94b NEW_2
	var_215_bool = var_213_bool == 0; // 0x94d Not
	if(var_215_bool == 0) goto Label_2385; // 0x94e JumpB
	var_123_bool = 0; // 0x94f MovB
	return 4; // 0x950 Return
	
Label_2385:
	var_216_string = "voice_common"; // 0x951 PushS
	var_217_int = 1; // 0x952 PushI
	SetVariable(var_216_string, var_217_int); // 0x953 Func
}


func_2594(var_178_int)
{
	var_179_float = 0; var_180_float = 0; // 0xa22 PushV
	GetGameTime(var_180_float); // 0xa23 Func
	var_181_int = 1; // 0xa25 PushI
	var_182_int = 0; // 0xa26 PushV
	var_183_int = 24; // 0xa27 PushI
	var_182_int = var_180_float / var_180_float; // 0xa28 Div2
	var_178_int = var_181_int + var_182_int; // 0xa29 Add2
	return 2; // 0xa2a Return
}


func_1576(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object; // 0x629 TMov
	var_1_object = var_516_object; // 0x62a TMov
	var_3_string = 0; // 0x62b TMovB
	var_522_int = 1; // 0x62c PushI
	if(var_522_int == 0) goto Label_1609; // 0x62d JumpB
	var_523_string = ""; // 0x62e PushV
	var_523_string = "Neutral"; // 0x62f MovS
	func_1639(var_517_object, var_523_string); // 0x630 NEW_2
	var_531_int = 535284; // 0x632 PushI
	SetMessage(var_531_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_532_int = 535285; // 0x637 PushI
	var_533_int = 36962; // 0x638 PushI
	var_534_int = 36961; // 0x639 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x63a TObjFunc
	var_535_int = 535292; // 0x63c PushI
	var_536_int = -1; // 0x63d PushI
	var_537_int = 36968; // 0x63e PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x63f TObjFunc
	var_538_int = 535293; // 0x641 PushI
	var_539_int = -1; // 0x642 PushI
	var_540_int = 36969; // 0x643 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x644 TObjFunc
	goto Label_1609; // 0x646 Jump
	
Label_1609:
	var_541_bool = 0; // 0x649 PushV
	func_2896(var_541_bool); // 0x64a NEW_2
	if(var_541_bool == 0) goto Label_1624; // 0x64c JumpB
	
Label_1613:
	lshWaitForAnimEnd(); // 0x64d Func
	var_542_string = var_3_string; // 0x64f PushT
	if(var_542_string == 0) goto Label_1618; // 0x650 JumpB
	goto Label_1623; // 0x651 Jump
	
Label_1623:
	goto Label_1638; // 0x657 Jump
	
Label_1638:
	return 0; // 0x666 Return
	
Label_1618:
	var_543_string = ""; // 0x652 PushV
	var_543_string = var_2_object; // 0x653 MovT
	func_2471(var_543_string); // 0x654 NEW_2
	goto Label_1613; // 0x656 Jump
	
Label_1624:
	var_544_string = "all"; // 0x658 PushS
	var_545_string = "idle"; // 0x659 PushS
	PlayAnimation(var_544_string, var_545_string); // 0x65a Func
	
Label_1628:
	WaitForAnimEnd(); // 0x65c Func
	var_546_string = var_3_string; // 0x65e PushT
	if(var_546_string == 0) goto Label_1633; // 0x65f JumpB
	goto Label_1638; // 0x660 Jump
	
Label_1633:
	var_547_string = "all"; // 0x661 PushS
	var_548_string = "idle"; // 0x662 PushS
	PlayAnimation(var_547_string, var_548_string); // 0x663 Func
	goto Label_1628; // 0x665 Jump
}


func_1835(var_0_object, var_1_object, var_2_object, var_3_string, var_575_object, var_576_object)
{
	var_0_object = var_576_object; // 0x72c TMov
	var_1_object = var_575_object; // 0x72d TMov
	var_3_string = 0; // 0x72e TMovB
	var_581_int = 1; // 0x72f PushI
	if(var_581_int == 0) goto Label_1863; // 0x730 JumpB
	var_582_string = ""; // 0x731 PushV
	var_582_string = "Neutral"; // 0x732 MovS
	func_1893(var_576_object, var_582_string); // 0x733 NEW_2
	var_590_int = 540545; // 0x735 PushI
	SetMessage(var_590_int); // 0x736 TObjFunc
	ClearReplies(); // 0x738 TObjFunc
	var_591_int = 540546; // 0x73a PushI
	var_592_int = -1; // 0x73b PushI
	var_593_int = 42555; // 0x73c PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x73d TObjFunc
	var_594_int = 540798; // 0x73f PushI
	var_595_int = -1; // 0x740 PushI
	var_596_int = 42847; // 0x741 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x742 TObjFunc
	goto Label_1863; // 0x744 Jump
	
Label_1863:
	var_597_bool = 0; // 0x747 PushV
	func_2896(var_597_bool); // 0x748 NEW_2
	if(var_597_bool == 0) goto Label_1878; // 0x74a JumpB
	
Label_1867:
	lshWaitForAnimEnd(); // 0x74b Func
	var_598_string = var_3_string; // 0x74d PushT
	if(var_598_string == 0) goto Label_1872; // 0x74e JumpB
	goto Label_1877; // 0x74f Jump
	
Label_1877:
	goto Label_1892; // 0x755 Jump
	
Label_1892:
	return 0; // 0x764 Return
	
Label_1872:
	var_599_string = ""; // 0x750 PushV
	var_599_string = var_2_object; // 0x751 MovT
	func_2471(var_599_string); // 0x752 NEW_2
	goto Label_1867; // 0x754 Jump
	
Label_1878:
	var_600_string = "all"; // 0x756 PushS
	var_601_string = "idle"; // 0x757 PushS
	PlayAnimation(var_600_string, var_601_string); // 0x758 Func
	
Label_1882:
	WaitForAnimEnd(); // 0x75a Func
	var_602_string = var_3_string; // 0x75c PushT
	if(var_602_string == 0) goto Label_1887; // 0x75d JumpB
	goto Label_1892; // 0x75e Jump
	
Label_1887:
	var_603_string = "all"; // 0x75f PushS
	var_604_string = "idle"; // 0x760 PushS
	PlayAnimation(var_603_string, var_604_string); // 0x761 Func
	goto Label_1882; // 0x763 Jump
}


func_2603(var_276_bool, var_277_int)
{
	var_278_int = 0; // 0xa2c PushV
	func_2594(var_278_int); // 0xa2d NEW_2
	var_276_bool = var_278_int == var_277_int; // 0xa2f Eq2
	return 0; // 0xa30 Return
}


func_2609(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xa31 PushV
	var_59_string = "idle"; // 0xa32 MovS
	var_60_int = var_57_int; // 0xa33 Push
	if(var_60_int == 0) goto Label_2614; // 0xa34 JumpB
	var_59_string = var_59_string + var_57_int; // 0xa35 Add2
	
Label_2614:
	var_56_string = var_59_string; // 0xa36 Mov
	return 2; // 0xa37 Return
}


func_2871(var_114_int)
{
	var_115_int = 0; var_116_int = 0; // 0xb37 PushV
	var_117_string = "branch"; // 0xb38 PushS
	GetVariable(var_117_string, var_116_int); // 0xb39 Func
	var_118_int = 0; // 0xb3b PushI
	var_119_bool = var_116_int == var_118_int; // 0xb3c Eq
	if(var_119_bool == 0) goto Label_2881; // 0xb3d JumpB
	var_114_int = 1; // 0xb3e MovI
	return 2; // 0xb3f Return
	
Label_2881:
	var_120_int = 1; // 0xb41 PushI
	var_121_bool = var_116_int == var_120_int; // 0xb42 Eq
	if(var_121_bool == 0) goto Label_2886; // 0xb43 JumpB
	var_114_int = 2; // 0xb44 MovI
	return 2; // 0xb45 Return
	
Label_2886:
	var_114_int = 3; // 0xb46 MovI
	return 2; // 0xb47 Return
}


func_2616(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xa38 PushV
	var_53_int = 0; // 0xa39 MovI
	
Label_2618:
	var_55_string = "all"; // 0xa3a PushS
	var_56_string = ""; var_57_int = 0; // 0xa3b PushV
	var_57_int = var_53_int; // 0xa3c Mov
	func_2609(var_56_string, var_57_int); // 0xa3d NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xa3f Func
	var_61_bool = var_54_bool == 0; // 0xa41 Not
	if(var_61_bool == 0) goto Label_2628; // 0xa42 JumpB
	goto Label_2631; // 0xa43 Jump
	
Label_2631:
	var_50_int = var_53_int; // 0xa47 Mov
	return 4; // 0xa48 Return
	
Label_2628:
	var_62_int = 1; // 0xa44 PushI
	var_53_int = var_53_int + var_62_int; // 0xa45 Add2
	goto Label_2618; // 0xa46 Jump
}


func_1081(var_0_object, var_415_int, var_416_object)
{
	var_418_object = Obj(); var_419_bool = 0; var_420_int = 0; var_421_bool = 0; var_422_object = Obj(); var_423_bool = 0; var_424_int = 0; var_425_bool = 0; // 0x439 PushV
	var_0_object = var_416_object; // 0x43a TMov
	var_426_bool = 0; var_427_object = Obj(); var_428_float = 0; // 0x43b PushV
	var_427_object = var_416_object; // 0x43c Mov
	var_428_float = 70.0; // 0x43d MovF
	func_2248(var_427_object, var_428_float); // 0x43e NEW_2
	var_429_bool = var_426_bool == 0; // 0x440 Not
	if(var_429_bool == 0) goto Label_1092; // 0x441 JumpB
	var_415_int = -2; // 0x442 MovI
	return 8; // 0x443 Return
	
Label_1092:
	CreateDialog(var_422_object); // 0x444 Func
	var_430_int = 0; // 0x446 PushV
	func_2890(var_430_int); // 0x447 NEW_2
	SetNPCName(var_430_int); // 0x449 ObjFunc
	var_431_int = 0; // 0x44b PushV
	func_2888(var_431_int); // 0x44c NEW_2
	SetNPCDescription(var_431_int); // 0x44e ObjFunc
	var_432_string = ""; // 0x450 PushV
	func_2892(var_432_string); // 0x451 NEW_2
	SetPhoto(var_432_string); // 0x453 ObjFunc
	var_433_string = ""; // 0x455 PushV
	func_2894(var_433_string); // 0x456 NEW_2
	SetPhoto2(var_433_string); // 0x458 ObjFunc
	var_434_int = 0; // 0x45a PushV
	func_2871(var_434_int); // 0x45b NEW_2
	SetPlayerName(var_434_int); // 0x45d ObjFunc
	var_424_int = -1; // 0x45f MovI
	IsOverrideActive(var_423_bool); // 0x460 Func
	var_435_bool = var_423_bool; // 0x462 Push
	if(var_435_bool == 0) goto Label_1126; // 0x463 JumpB
	var_415_int = -2; // 0x464 MovI
	return 8; // 0x465 Return
	
Label_1126:
	DoDialog(var_422_object); // 0x466 Func
	var_436_bool = 0; var_437_object = Obj(); // 0x468 PushV
	var_438_object = Obj(); // 0x469 PushV
	func_2524(var_438_object); // 0x46a NEW_2
	var_437_object = var_438_object; // 0x46b Mov
	func_2333(var_436_bool, var_437_object); // 0x46d NEW_2
	var_439_object = Obj(); var_440_object = Obj(); // 0x46f PushV
	var_439_object = var_416_object; // 0x470 Mov
	var_440_object = var_422_object; // 0x471 Mov
	TaskCall(7); // 0x472 TaskCall
	func_1162(var_441_object, var_442_object, var_443_string, var_444_bool, var_439_object, var_440_object); // 0x473 NEW_2
	TaskReturn(); // 0x474 TaskReturn
	IsDialogEnd(var_425_bool); // 0x476 ObjFunc
	
Label_1144:
	var_488_bool = var_425_bool == 0; // 0x478 Not
	if(var_488_bool == 0) goto Label_1151; // 0x479 JumpB
	sync(); // 0x47a Func
	IsDialogEnd(var_425_bool); // 0x47c ObjFunc
	goto Label_1144; // 0x47e Jump
	
Label_1151:
	var_489_object = Obj(); // 0x47f PushV
	var_489_object = var_416_object; // 0x480 Mov
	func_2316(); // 0x481 NEW_2
	StopDialog(var_422_object); // 0x483 Func
	GetReturnValue(var_424_int); // 0x485 ObjFunc
	var_415_int = var_424_int; // 0x487 Mov
	return 8; // 0x488 Return
}


func_2888(var_111_int)
{
	var_111_int = 515548; // 0xb48 MovI
	return 0; // 0xb49 Return
}


func_2633()
{
	var_39_string = "k1q03"; // 0xa4a PushS
	var_40_int = 2; // 0xa4b PushI
	SetVariable(var_39_string, var_40_int); // 0xa4c Func
	func_2754(); // 0xa4f NEW_2
	return 0; // 0xa51 Return
}


func_2890(var_110_int)
{
	var_110_int = 502873; // 0xb4a MovI
	return 0; // 0xb4b Return
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_218_object, var_219_object)
{
	var_0_object = var_219_object; // 0x249 TMov
	var_1_object = var_218_object; // 0x24a TMov
	var_3_string = 0; // 0x24b TMovB
	var_224_int = 1; // 0x24c PushI
	if(var_224_int == 0) goto Label_612; // 0x24d JumpB
	var_225_string = ""; // 0x24e PushV
	var_225_string = "Neutral"; // 0x24f MovS
	func_642(var_219_object, var_225_string); // 0x250 NEW_2
	var_242_int = 525516; // 0x252 PushI
	SetMessage(var_242_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_243_int = 525517; // 0x257 PushI
	var_244_int = -1; // 0x258 PushI
	var_245_int = 26873; // 0x259 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x25a TObjFunc
	var_246_int = 526273; // 0x25c PushI
	var_247_int = -1; // 0x25d PushI
	var_248_int = 27549; // 0x25e PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x25f TObjFunc
	goto Label_612; // 0x261 Jump
	
Label_612:
	var_249_bool = 0; // 0x264 PushV
	func_2896(var_249_bool); // 0x265 NEW_2
	if(var_249_bool == 0) goto Label_627; // 0x267 JumpB
	
Label_616:
	lshWaitForAnimEnd(); // 0x268 Func
	var_250_string = var_3_string; // 0x26a PushT
	if(var_250_string == 0) goto Label_621; // 0x26b JumpB
	goto Label_626; // 0x26c Jump
	
Label_626:
	goto Label_641; // 0x272 Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_621:
	var_251_string = ""; // 0x26d PushV
	var_251_string = var_2_object; // 0x26e MovT
	func_2471(var_251_string); // 0x26f NEW_2
	goto Label_616; // 0x271 Jump
	
Label_627:
	var_262_string = "all"; // 0x273 PushS
	var_263_string = "idle"; // 0x274 PushS
	PlayAnimation(var_262_string, var_263_string); // 0x275 Func
	
Label_631:
	WaitForAnimEnd(); // 0x277 Func
	var_264_string = var_3_string; // 0x279 PushT
	if(var_264_string == 0) goto Label_636; // 0x27a JumpB
	goto Label_641; // 0x27b Jump
	
Label_636:
	var_265_string = "all"; // 0x27c PushS
	var_266_string = "idle"; // 0x27d PushS
	PlayAnimation(var_265_string, var_266_string); // 0x27e Func
	goto Label_631; // 0x280 Jump
}


func_2892(var_112_string)
{
	var_112_string = "ui/NPC_Notkin.png"; // 0xb4c MovS
	return 0; // 0xb4d Return
}


func_2894(var_113_string)
{
	var_113_string = "ui/NPC_Notkin_b.png"; // 0xb4e MovS
	return 0; // 0xb4f Return
}


func_2896(var_105_bool)
{
	var_105_bool = 1; // 0xb50 MovB
	return 0; // 0xb51 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object; // 0x52 TMov
	var_1_object = var_303_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_309_int = 1; // 0x55 PushI
	if(var_309_int == 0) goto Label_119; // 0x56 JumpB
	var_310_string = ""; // 0x57 PushV
	var_310_string = "Neutral"; // 0x58 MovS
	func_149(var_304_object, var_310_string); // 0x59 NEW_2
	var_318_int = 524791; // 0x5b PushI
	SetMessage(var_318_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_319_bool = 0; var_320_object = Obj(); // 0x60 PushV
	var_320_object = var_1_object; // 0x61 MovT
	func_2718(var_320_object); // 0x62 NEW_2
	if(var_319_bool == 0) goto Label_106; // 0x64 JumpB
	var_327_int = 524792; // 0x65 PushI
	var_328_int = 28167; // 0x66 PushI
	var_329_int = 26107; // 0x67 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x68 TObjFunc
	
Label_106:
	var_330_int = 524793; // 0x6a PushI
	var_331_int = -1; // 0x6b PushI
	var_332_int = 26108; // 0x6c PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x6d TObjFunc
	var_333_int = 542093; // 0x6f PushI
	var_334_int = -1; // 0x70 PushI
	var_335_int = 44393; // 0x71 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_336_bool = 0; // 0x77 PushV
	func_2896(var_336_bool); // 0x78 NEW_2
	if(var_336_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_337_string = var_3_string; // 0x7d PushT
	if(var_337_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_338_string = ""; // 0x80 PushV
	var_338_string = var_2_object; // 0x81 MovT
	func_2471(var_338_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_339_string = "all"; // 0x86 PushS
	var_340_string = "idle"; // 0x87 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_341_string = var_3_string; // 0x8c PushT
	if(var_341_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_342_string = "all"; // 0x8f PushS
	var_343_string = "idle"; // 0x90 PushS
	PlayAnimation(var_342_string, var_343_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_2642()
{
	var_39_string = "k4q01"; // 0xa53 PushS
	var_40_int = 3; // 0xa54 PushI
	SetVariable(var_39_string, var_40_int); // 0xa55 Func
	func_2767(); // 0xa58 NEW_2
	return 0; // 0xa5a Return
}


func_2898(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xb53 PushGE
	var_51_bool = var_50_bool == 0; // 0xb54 Not
	if(var_51_bool == 0) goto Label_2911; // 0xb55 JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xb56 PushV
	var_53_object = var_49_object; // 0xb57 Mov
	TaskCall(2); // 0xb58 TaskCall
	func_503(var_54_object, var_52_int, var_53_object); // 0xb59 NEW_2
	TaskReturn(); // 0xb5a TaskReturn
	var_275_bool = GlobalVars[1]; // 0xb5c PushGE
	var_275_bool = 1; // 0xb5d MovB
	GlobalVars[1] = var_275_bool; // 0xb5e PopGE
	
Label_2911:
	var_276_bool = 0; var_277_int = 0; // 0xb5f PushV
	var_277_int = 1; // 0xb60 MovI
	func_2603(var_276_bool, var_277_int); // 0xb61 NEW_2
	if(var_276_bool == 0) goto Label_2923; // 0xb63 JumpB
	var_279_int = 0; var_280_object = Obj(); // 0xb64 PushV
	var_280_object = var_49_object; // 0xb65 Mov
	TaskCall(0); // 0xb66 TaskCall
	func_0(var_281_object, var_279_int, var_280_object); // 0xb67 NEW_2
	TaskReturn(); // 0xb68 TaskReturn
	return 0; // 0xb6a Return
	
Label_2923:
	var_346_bool = 0; var_347_int = 0; // 0xb6b PushV
	var_347_int = 4; // 0xb6c MovI
	func_2603(var_346_bool, var_347_int); // 0xb6d NEW_2
	if(var_346_bool == 0) goto Label_2935; // 0xb6f JumpB
	var_348_int = 0; var_349_object = Obj(); // 0xb70 PushV
	var_349_object = var_49_object; // 0xb71 Mov
	TaskCall(4); // 0xb72 TaskCall
	func_706(var_350_object, var_348_int, var_349_object); // 0xb73 NEW_2
	TaskReturn(); // 0xb74 TaskReturn
	return 0; // 0xb76 Return
	
Label_2935:
	var_413_bool = 0; var_414_int = 0; // 0xb77 PushV
	var_414_int = 10; // 0xb78 MovI
	func_2603(var_413_bool, var_414_int); // 0xb79 NEW_2
	if(var_413_bool == 0) goto Label_2947; // 0xb7b JumpB
	var_415_int = 0; var_416_object = Obj(); // 0xb7c PushV
	var_416_object = var_49_object; // 0xb7d Mov
	TaskCall(6); // 0xb7e TaskCall
	func_1081(var_417_object, var_415_int, var_416_object); // 0xb7f NEW_2
	TaskReturn(); // 0xb80 TaskReturn
	return 0; // 0xb82 Return
	
Label_2947:
	var_490_bool = 0; var_491_int = 0; // 0xb83 PushV
	var_491_int = 12; // 0xb84 MovI
	func_2603(var_490_bool, var_491_int); // 0xb85 NEW_2
	if(var_490_bool == 0) goto Label_2959; // 0xb87 JumpB
	var_492_int = 0; var_493_object = Obj(); // 0xb88 PushV
	var_493_object = var_49_object; // 0xb89 Mov
	TaskCall(8); // 0xb8a TaskCall
	func_1495(var_494_object, var_492_int, var_493_object); // 0xb8b NEW_2
	TaskReturn(); // 0xb8c TaskReturn
	return 0; // 0xb8e Return
	
Label_2959:
	var_551_int = 0; var_552_object = Obj(); // 0xb8f PushV
	var_552_object = var_49_object; // 0xb90 Mov
	TaskCall(10); // 0xb91 TaskCall
	func_1754(var_553_object, var_551_int, var_552_object); // 0xb92 NEW_2
	TaskReturn(); // 0xb93 TaskReturn
	return 0; // 0xb95 Return
}


func_855(var_2_object, var_379_string)
{
	var_380_bool = 0; // 0x358 PushV
	func_2896(var_380_bool); // 0x359 NEW_2
	var_381_bool = var_380_bool == 0; // 0x35b Not
	if(var_381_bool == 0) goto Label_862; // 0x35c JumpB
	return 0; // 0x35d Return
	
Label_862:
	var_382_bool = var_379_string == var_2_object; // 0x35e Eq
	if(var_382_bool == 0) goto Label_865; // 0x35f JumpB
	return 0; // 0x360 Return
	
Label_865:
	var_383_string = ""; var_384_bool = 0; // 0x361 PushV
	var_383_string = var_379_string; // 0x362 Mov
	var_385_string = ""; // 0x363 PushS
	var_386_bool = var_379_string == var_385_string; // 0x364 Eq
	if(var_386_bool == 0) goto Label_872; // 0x365 JumpB
	var_384_bool = 0; // 0x366 MovB
	goto Label_873; // 0x367 Jump
	
Label_873:
	func_2487(var_383_string, var_384_bool); // 0x369 NEW_2
	var_2_object = var_379_string; // 0x36b TMov
	return 0; // 0x36c Return
	
Label_872:
	var_384_bool = 1; // 0x368 MovB
}


func_2391(var_134_bool)
{
	var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; // 0x957 PushV
	var_141_string = "c"; // 0x958 MovS
	var_142_int = 0; // 0x959 MovI
	
Label_2394:
	var_146_int = 1; // 0x95a PushI
	if(var_146_int == 0) goto Label_2407; // 0x95b JumpB
	var_147_int = 1; // 0x95c PushI
	var_148_int = var_142_int + var_147_int; // 0x95d Add
	var_149_int = var_141_string + var_148_int; // 0x95e Add
	HasProperty(var_149_int, var_143_bool); // 0x95f ObjFunc
	var_150_bool = var_143_bool == 0; // 0x961 Not
	if(var_150_bool == 0) goto Label_2404; // 0x962 JumpB
	goto Label_2407; // 0x963 Jump
	
Label_2407:
	var_151_bool = var_142_int == 0; // 0x967 Not
	if(var_151_bool == 0) goto Label_2411; // 0x968 JumpB
	var_134_bool = 0; // 0x969 MovB
	return 10; // 0x96a Return
	
Label_2411:
	var_144_int = 0; // 0x96b MovI
	var_152_int = 1; // 0x96c PushI
	var_153_bool = var_142_int > var_152_int; // 0x96d GT
	if(var_153_bool == 0) goto Label_2417; // 0x96e JumpB
	irand(var_144_int, var_142_int); // 0x96f Func
	
Label_2417:
	var_154_int = 1; // 0x971 PushI
	var_155_int = var_144_int + var_154_int; // 0x972 Add
	var_156_int = var_141_string + var_155_int; // 0x973 Add
	GetProperty(var_156_int, var_145_string); // 0x974 ObjFunc
	var_157_bool = 0; var_158_string = ""; // 0x976 PushV
	var_158_string = var_145_string; // 0x977 Mov
	func_2502(var_157_bool, var_158_string); // 0x978 NEW_2
	var_134_bool = var_157_bool; // 0x979 Mov
	return 10; // 0x97b Return
	
Label_2404:
	var_163_int = 1; // 0x964 PushI
	var_142_int = var_142_int + var_163_int; // 0x965 Add2
	goto Label_2394; // 0x966 Jump
}


func_2651()
{
	var_455_string = "k10q01KnowAboutRubin"; // 0xa5c PushS
	var_456_int = 1; // 0xa5d PushI
	SetVariable(var_455_string, var_456_int); // 0xa5e Func
	return 0; // 0xa60 Return
}


func_2140()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x85c PushV
	WaitForAnimEnd(); // 0x85d Func
	var_48_bool = 0; // 0x85f PushV
	func_2243(var_48_bool); // 0x860 NEW_2
	var_49_bool = var_48_bool == 0; // 0x862 Not
	if(var_49_bool == 0) goto Label_2149; // 0x863 JumpB
	return 12; // 0x864 Return
	
Label_2149:
	var_50_int = 0; // 0x865 PushV
	func_2616(var_50_int); // 0x866 NEW_2
	var_42_int = var_50_int; // 0x867 Mov
	var_43_int = 0; // 0x869 MovI
	
Label_2154:
	var_63_bool = 0; // 0x86a PushV
	var_63_bool = 0; // 0x86b MovB
	var_64_int = 5; // 0x86c PushI
	var_65_bool = var_43_int < var_64_int; // 0x86d LT
	if(var_65_bool == 0) goto Label_2164; // 0x86e JumpB
	var_66_bool = 0; // 0x86f PushV
	func_2243(var_66_bool); // 0x870 NEW_2
	if(var_66_bool == 0) goto Label_2164; // 0x872 JumpB
	var_63_bool = 1; // 0x873 MovB
	
Label_2164:
	if(var_63_bool == 0) goto Label_2206; // 0x874 JumpB
	var_67_bool = var_42_int == 0; // 0x875 Not
	if(var_67_bool == 0) goto Label_2174; // 0x876 JumpB
	var_68_int = 3; // 0x877 PushI
	Sleep(var_68_int, var_44_bool); // 0x878 Func
	var_69_bool = var_44_bool == 0; // 0x87a Not
	if(var_69_bool == 0) goto Label_2173; // 0x87b JumpB
	goto Label_2206; // 0x87c Jump
	
Label_2206:
	ResetAAS(); // 0x89e Func
	return 12; // 0x8a0 Return
	
Label_2173:
	goto Label_2195; // 0x87d Jump
	
Label_2195:
	var_70_bool = 0; // 0x893 PushV
	func_2209(var_70_bool); // 0x894 NEW_2
	var_71_bool = var_70_bool == 0; // 0x896 Not
	if(var_71_bool == 0) goto Label_2201; // 0x897 JumpB
	goto Label_2206; // 0x898 Jump
	
Label_2201:
	ResetAAS(); // 0x899 Func
	var_72_int = 1; // 0x89b PushI
	var_43_int = var_43_int + var_72_int; // 0x89c Add2
	goto Label_2154; // 0x89d Jump
	
Label_2174:
	irand(var_45_int, var_42_int); // 0x87e Func
	var_73_int = 5; // 0x880 PushI
	irand(var_46_int, var_73_int); // 0x881 Func
	var_74_int = 0; // 0x883 PushI
	var_75_bool = var_46_int != var_74_int; // 0x884 Neq
	if(var_75_bool == 0) goto Label_2183; // 0x885 JumpB
	var_45_int = 0; // 0x886 MovI
	
Label_2183:
	var_76_string = "all"; // 0x887 PushS
	var_77_string = ""; var_78_int = 0; // 0x888 PushV
	var_78_int = var_45_int; // 0x889 Mov
	func_2609(var_77_string, var_78_int); // 0x88a NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x88c Func
	WaitForAnimEnd(var_47_bool); // 0x88e Func
	var_79_bool = var_47_bool == 0; // 0x890 Not
	if(var_79_bool == 0) goto Label_2195; // 0x891 JumpB
	goto Label_2206; // 0x892 Jump
}


func_2657()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xa61 PushV
	var_41_object = Obj(); // 0xa62 PushV
	func_2821(var_41_object); // 0xa63 NEW_2
	var_40_object = var_41_object; // 0xa64 Mov
	var_48_string = "k10q01NotkinGotoRubin"; // 0xa66 PushS
	var_49_string = "pt_map_rubin"; // 0xa67 PushS
	var_50_int = 3; // 0xa68 PushI
	var_51_int = 530195; // 0xa69 PushI
	var_52_float = 0; // 0xa6a PushV
	func_2589(var_52_float); // 0xa6b NEW_2
	AddMark(var_48_string, var_49_string, var_50_int, var_51_int, var_52_float); // 0xa6d ObjFunc
	return 2; // 0xa6f Return
}


func_1893(var_2_object, var_582_string)
{
	var_583_bool = 0; // 0x766 PushV
	func_2896(var_583_bool); // 0x767 NEW_2
	var_584_bool = var_583_bool == 0; // 0x769 Not
	if(var_584_bool == 0) goto Label_1900; // 0x76a JumpB
	return 0; // 0x76b Return
	
Label_1900:
	var_585_bool = var_582_string == var_2_object; // 0x76c Eq
	if(var_585_bool == 0) goto Label_1903; // 0x76d JumpB
	return 0; // 0x76e Return
	
Label_1903:
	var_586_string = ""; var_587_bool = 0; // 0x76f PushV
	var_586_string = var_582_string; // 0x770 Mov
	var_588_string = ""; // 0x771 PushS
	var_589_bool = var_582_string == var_588_string; // 0x772 Eq
	if(var_589_bool == 0) goto Label_1910; // 0x773 JumpB
	var_587_bool = 0; // 0x774 MovB
	goto Label_1911; // 0x775 Jump
	
Label_1911:
	func_2487(var_586_string, var_587_bool); // 0x777 NEW_2
	var_2_object = var_582_string; // 0x779 TMov
	return 0; // 0x77a Return
	
Label_1910:
	var_587_bool = 1; // 0x776 MovB
}


func_1639(var_2_object, var_523_string)
{
	var_524_bool = 0; // 0x668 PushV
	func_2896(var_524_bool); // 0x669 NEW_2
	var_525_bool = var_524_bool == 0; // 0x66b Not
	if(var_525_bool == 0) goto Label_1646; // 0x66c JumpB
	return 0; // 0x66d Return
	
Label_1646:
	var_526_bool = var_523_string == var_2_object; // 0x66e Eq
	if(var_526_bool == 0) goto Label_1649; // 0x66f JumpB
	return 0; // 0x670 Return
	
Label_1649:
	var_527_string = ""; var_528_bool = 0; // 0x671 PushV
	var_527_string = var_523_string; // 0x672 Mov
	var_529_string = ""; // 0x673 PushS
	var_530_bool = var_523_string == var_529_string; // 0x674 Eq
	if(var_530_bool == 0) goto Label_1656; // 0x675 JumpB
	var_528_bool = 0; // 0x676 MovB
	goto Label_1657; // 0x677 Jump
	
Label_1657:
	func_2487(var_527_string, var_528_bool); // 0x679 NEW_2
	var_2_object = var_523_string; // 0x67b TMov
	return 0; // 0x67c Return
	
Label_1656:
	var_528_bool = 1; // 0x678 MovB
}


func_2673()
{
	var_94_string = "playsound"; // 0xa72 PushS
	var_95_string = "giveitem"; // 0xa73 PushS
	TriggerWorld(var_94_string, var_95_string); // 0xa74 Func
	return 0; // 0xa76 Return
}


func_2679(var_68_object)
{
	var_70_string = "Gun is given"; // 0xa78 PushS
	Trace(var_70_string); // 0xa79 Func
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0; // 0xa7b PushV
	var_71_object = var_68_object; // 0xa7c Mov
	var_72_string = "Gun"; // 0xa7d MovS
	var_73_int = 1; // 0xa7e MovI
	func_2576(var_71_object, var_72_string, var_73_int); // 0xa7f NEW_2
	return 0; // 0xa81 Return
}


func_2428(var_165_bool)
{
	var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = ""; // 0x97c PushV
	var_177_string = "d"; // 0x97d PushS
	var_178_int = 0; // 0x97e PushV
	func_2594(var_178_int); // 0x97f NEW_2
	var_184_int = var_177_string + var_178_int; // 0x981 Add
	var_185_string = "m"; // 0x982 PushS
	var_172_string = var_184_int + var_185_string; // 0x983 Add2
	var_173_int = 0; // 0x984 MovI
	
Label_2437:
	var_186_int = 1; // 0x985 PushI
	if(var_186_int == 0) goto Label_2450; // 0x986 JumpB
	var_187_int = 1; // 0x987 PushI
	var_188_int = var_173_int + var_187_int; // 0x988 Add
	var_189_int = var_172_string + var_188_int; // 0x989 Add
	HasProperty(var_189_int, var_174_bool); // 0x98a ObjFunc
	var_190_bool = var_174_bool == 0; // 0x98c Not
	if(var_190_bool == 0) goto Label_2447; // 0x98d JumpB
	goto Label_2450; // 0x98e Jump
	
Label_2450:
	var_191_bool = var_173_int == 0; // 0x992 Not
	if(var_191_bool == 0) goto Label_2454; // 0x993 JumpB
	var_165_bool = 0; // 0x994 MovB
	return 10; // 0x995 Return
	
Label_2454:
	var_175_int = 0; // 0x996 MovI
	var_192_int = 1; // 0x997 PushI
	var_193_bool = var_173_int > var_192_int; // 0x998 GT
	if(var_193_bool == 0) goto Label_2460; // 0x999 JumpB
	irand(var_175_int, var_173_int); // 0x99a Func
	
Label_2460:
	var_194_int = 1; // 0x99c PushI
	var_195_int = var_175_int + var_194_int; // 0x99d Add
	var_196_int = var_172_string + var_195_int; // 0x99e Add
	GetProperty(var_196_int, var_176_string); // 0x99f ObjFunc
	var_197_bool = 0; var_198_string = ""; // 0x9a1 PushV
	var_198_string = var_176_string; // 0x9a2 Mov
	func_2502(var_197_bool, var_198_string); // 0x9a3 NEW_2
	var_165_bool = var_197_bool; // 0x9a4 Mov
	return 10; // 0x9a6 Return
	
Label_2447:
	var_199_int = 1; // 0x98f PushI
	var_173_int = var_173_int + var_199_int; // 0x990 Add2
	goto Label_2437; // 0x991 Jump
}


func_642(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x283 PushV
	func_2896(var_226_bool); // 0x284 NEW_2
	var_227_bool = var_226_bool == 0; // 0x286 Not
	if(var_227_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_228_bool = var_225_string == var_2_object; // 0x289 Eq
	if(var_228_bool == 0) goto Label_652; // 0x28a JumpB
	return 0; // 0x28b Return
	
Label_652:
	var_229_string = ""; var_230_bool = 0; // 0x28c PushV
	var_229_string = var_225_string; // 0x28d Mov
	var_231_string = ""; // 0x28e PushS
	var_232_bool = var_225_string == var_231_string; // 0x28f Eq
	if(var_232_bool == 0) goto Label_659; // 0x290 JumpB
	var_230_bool = 0; // 0x291 MovB
	goto Label_660; // 0x292 Jump
	
Label_660:
	func_2487(var_229_string, var_230_bool); // 0x294 NEW_2
	var_2_object = var_225_string; // 0x296 TMov
	return 0; // 0x297 Return
	
Label_659:
	var_230_bool = 1; // 0x293 MovB
}


func_2690()
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0; // 0xa83 PushV
	var_60_object = Obj(); // 0xa84 PushV
	func_2821(var_60_object); // 0xa85 NEW_2
	var_57_object = var_60_object; // 0xa86 Mov
	var_58_string = "pt_map_rubin"; // 0xa88 MovS
	var_59_float = 2; // 0xa89 MovI
	func_2838(var_57_object, var_58_string, var_59_float); // 0xa8a NEW_2
	var_80_object = Obj(); // 0xa8c PushV
	func_2821(var_80_object); // 0xa8d NEW_2
	ShowMap(var_80_object); // 0xa8f ObjFunc
	return 0; // 0xa91 Return
}


func_1162(var_0_object, var_1_object, var_2_object, var_3_string, var_439_object, var_440_object)
{
	var_0_object = var_440_object; // 0x48b TMov
	var_1_object = var_439_object; // 0x48c TMov
	var_3_string = 0; // 0x48d TMovB
	var_445_int = 1; // 0x48e PushI
	if(var_445_int == 0) goto Label_1221; // 0x48f JumpB
	var_446_bool = 0; var_447_object = Obj(); // 0x490 PushV
	var_447_object = var_1_object; // 0x491 MovT
	func_2742(var_447_object); // 0x492 NEW_2
	var_452_bool = var_446_bool == 0; // 0x494 Not
	if(var_452_bool == 0) goto Label_1199; // 0x495 JumpB
	var_453_object = Obj(); var_454_object = Obj(); // 0x496 PushV
	var_453_object = var_1_object; // 0x497 MovT
	var_454_object = var_0_object; // 0x498 MovT
	func_2651(); // 0x499 NEW_2
	var_457_string = ""; // 0x49b PushV
	var_457_string = "Neutral"; // 0x49c MovS
	func_1251(var_440_object, var_457_string); // 0x49d NEW_2
	var_465_int = 527714; // 0x49f PushI
	SetMessage(var_465_int); // 0x4a0 TObjFunc
	ClearReplies(); // 0x4a2 TObjFunc
	var_466_int = 527715; // 0x4a4 PushI
	var_467_int = 29269; // 0x4a5 PushI
	var_468_int = 29067; // 0x4a6 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4a7 TObjFunc
	var_469_int = 527928; // 0x4a9 PushI
	var_470_int = 29269; // 0x4aa PushI
	var_471_int = 29279; // 0x4ab PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x4ac TObjFunc
	goto Label_1221; // 0x4ae Jump
	
Label_1221:
	var_472_bool = 0; // 0x4c5 PushV
	func_2896(var_472_bool); // 0x4c6 NEW_2
	if(var_472_bool == 0) goto Label_1236; // 0x4c8 JumpB
	
Label_1225:
	lshWaitForAnimEnd(); // 0x4c9 Func
	var_473_string = var_3_string; // 0x4cb PushT
	if(var_473_string == 0) goto Label_1230; // 0x4cc JumpB
	goto Label_1235; // 0x4cd Jump
	
Label_1235:
	goto Label_1250; // 0x4d3 Jump
	
Label_1250:
	return 0; // 0x4e2 Return
	
Label_1230:
	var_474_string = ""; // 0x4ce PushV
	var_474_string = var_2_object; // 0x4cf MovT
	func_2471(var_474_string); // 0x4d0 NEW_2
	goto Label_1225; // 0x4d2 Jump
	
Label_1236:
	var_475_string = "all"; // 0x4d4 PushS
	var_476_string = "idle"; // 0x4d5 PushS
	PlayAnimation(var_475_string, var_476_string); // 0x4d6 Func
	
Label_1240:
	WaitForAnimEnd(); // 0x4d8 Func
	var_477_string = var_3_string; // 0x4da PushT
	if(var_477_string == 0) goto Label_1245; // 0x4db JumpB
	goto Label_1250; // 0x4dc Jump
	
Label_1245:
	var_478_string = "all"; // 0x4dd PushS
	var_479_string = "idle"; // 0x4de PushS
	PlayAnimation(var_478_string, var_479_string); // 0x4df Func
	goto Label_1240; // 0x4e1 Jump
	
Label_1199:
	var_480_string = ""; // 0x4af PushV
	var_480_string = "Neutral"; // 0x4b0 MovS
	func_1251(var_440_object, var_480_string); // 0x4b1 NEW_2
	var_481_int = 527716; // 0x4b3 PushI
	SetMessage(var_481_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_482_int = 527717; // 0x4b8 PushI
	var_483_int = -1; // 0x4b9 PushI
	var_484_int = 29069; // 0x4ba PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x4bb TObjFunc
	var_485_int = 527918; // 0x4bd PushI
	var_486_int = -1; // 0x4be PushI
	var_487_int = 29268; // 0x4bf PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x4c0 TObjFunc
	goto Label_1221; // 0x4c2 Jump
}


func_2706(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0xa93 PushV
	var_175_string = "k1q01DobermanDead"; // 0xa94 MovS
	func_2540(var_174_int, var_175_string); // 0xa95 NEW_2
	var_176_int = 0; // 0xa97 PushI
	var_177_bool = var_174_int != var_176_int; // 0xa98 Neq
	if(var_177_bool == 0) goto Label_2716; // 0xa99 JumpB
	var_172_bool = 1; // 0xa9a MovB
	return 0; // 0xa9b Return
	
Label_2716:
	var_172_bool = 0; // 0xa9c MovB
	return 0; // 0xa9d Return
}


func_149(var_2_object, var_310_string)
{
	var_311_bool = 0; // 0x96 PushV
	func_2896(var_311_bool); // 0x97 NEW_2
	var_312_bool = var_311_bool == 0; // 0x99 Not
	if(var_312_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_313_bool = var_310_string == var_2_object; // 0x9c Eq
	if(var_313_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_314_string = ""; var_315_bool = 0; // 0x9f PushV
	var_314_string = var_310_string; // 0xa0 Mov
	var_316_string = ""; // 0xa1 PushS
	var_317_bool = var_310_string == var_316_string; // 0xa2 Eq
	if(var_317_bool == 0) goto Label_166; // 0xa3 JumpB
	var_315_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_2487(var_314_string, var_315_bool); // 0xa7 NEW_2
	var_2_object = var_310_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_315_bool = 1; // 0xa6 MovB
}


func_2718(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0xa9f PushV
	var_322_string = "k1q03"; // 0xaa0 MovS
	func_2540(var_321_int, var_322_string); // 0xaa1 NEW_2
	var_325_int = 1; // 0xaa3 PushI
	var_326_bool = var_321_int == var_325_int; // 0xaa4 Eq
	if(var_326_bool == 0) goto Label_2728; // 0xaa5 JumpB
	var_319_bool = 1; // 0xaa6 MovB
	return 0; // 0xaa7 Return
	
Label_2728:
	var_319_bool = 0; // 0xaa8 MovB
	return 0; // 0xaa9 Return
}


func_2209(var_70_bool)
{
	var_70_bool = 1; // 0x8a1 MovB
	return 0; // 0x8a2 Return
}


func_2211()
{
	StopAnimation(); // 0x8a3 Func
	StopGroup0(); // 0x8a5 Func
	return 0; // 0x8a7 Return
}


func_2471(var_251_string)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0; // 0x9a7 PushV
	lshHasAnimation(var_255_bool, var_251_string); // 0x9a8 Func
	var_258_bool = var_255_bool; // 0x9aa Push
	if(var_258_bool == 0) goto Label_2482; // 0x9ab JumpB
	lshGetAnimTimes(var_251_string, var_256_float, var_257_float); // 0x9ac Func
	var_259_bool = 0; // 0x9ae PushB
	lshPlayAnimation(var_256_float, var_257_float, var_259_bool); // 0x9af Func
	goto Label_2486; // 0x9b1 Jump
	
Label_2486:
	return 6; // 0x9b6 Return
	
Label_2482:
	var_260_string = "Can't find lsh animation : "; // 0x9b2 PushS
	var_261_int = var_260_string + var_251_string; // 0x9b3 Add
	Trace(var_261_int); // 0x9b4 Func
}


func_2216(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x8a8 PushV
	GetPosition(var_51_cvector); // 0x8a9 Func
	GetPosition(var_52_cvector); // 0x8ab ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x8ad Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x8ae Or2
	return 6; // 0x8af Return
}


func_2730(var_388_bool)
{
	var_390_int = 0; var_391_string = ""; // 0xaab PushV
	var_391_string = "k4q01"; // 0xaac MovS
	func_2540(var_390_int, var_391_string); // 0xaad NEW_2
	var_392_int = 2; // 0xaaf PushI
	var_393_bool = var_390_int == var_392_int; // 0xab0 Eq
	if(var_393_bool == 0) goto Label_2740; // 0xab1 JumpB
	var_388_bool = 1; // 0xab2 MovB
	return 0; // 0xab3 Return
	
Label_2740:
	var_388_bool = 0; // 0xab4 MovB
	return 0; // 0xab5 Return
}


func_1964(var_0_object)
{
	var_32_bool = 0; // 0x7ac PushV
	func_2243(var_32_bool); // 0x7ad NEW_2
	var_35_bool = var_32_bool == 0; // 0x7af Not
	if(var_35_bool == 0) goto Label_1971; // 0x7b0 JumpB
	Hold(); // 0x7b1 Func
	
Label_1971:
	GetDirection(var_0_object); // 0x7b3 Func
	
Label_1973:
	func_2140(); // 0x7b6 NEW_2
	goto Label_1973; // 0x7b8 Jump
}


func_2224(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x8b0 PushV
	GetPosition(var_44_cvector); // 0x8b1 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x8b3 Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x8b4 PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x8b5 PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x8b6 Func
	var_39_bool = var_46_bool; // 0x8b8 Mov
	return 6; // 0x8b9 Return
}


func_2742(var_446_bool)
{
	var_448_int = 0; var_449_string = ""; // 0xab7 PushV
	var_449_string = "k10q01KnowAboutRubin"; // 0xab8 MovS
	func_2540(var_448_int, var_449_string); // 0xab9 NEW_2
	var_450_int = 0; // 0xabb PushI
	var_451_bool = var_448_int != var_450_int; // 0xabc Neq
	if(var_451_bool == 0) goto Label_2752; // 0xabd JumpB
	var_446_bool = 1; // 0xabe MovB
	return 0; // 0xabf Return
	
Label_2752:
	var_446_bool = 0; // 0xac0 MovB
	return 0; // 0xac1 Return
}


func_2487(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0; // 0x9b7 PushV
	lshHasAnimation(var_236_bool, var_229_string); // 0x9b8 Func
	var_239_bool = var_236_bool; // 0x9ba Push
	if(var_239_bool == 0) goto Label_2497; // 0x9bb JumpB
	lshGetAnimTimes(var_229_string, var_237_float, var_238_float); // 0x9bc Func
	lshPlayAnimation(var_237_float, var_238_float, var_230_bool); // 0x9be Func
	goto Label_2501; // 0x9c0 Jump
	
Label_2501:
	return 6; // 0x9c5 Return
	
Label_2497:
	var_240_string = "Can't find lsh animation : "; // 0x9c1 PushS
	var_241_int = var_240_string + var_229_string; // 0x9c2 Add
	Trace(var_241_int); // 0x9c3 Func
}


func_2234(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x8ba PushV
	GetPosition(var_38_cvector); // 0x8bb ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x8bd PushV
	var_40_cvector = var_38_cvector; // 0x8be Mov
	func_2224(var_39_bool, var_40_cvector); // 0x8bf NEW_2
	var_35_bool = var_39_bool; // 0x8c0 Mov
	return 2; // 0x8c2 Return
}


func_1978(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x7ba PushV
	var_59_string = "player"; // 0x7bb PushS
	FindActor(var_58_object, var_59_string); // 0x7bc Func
	var_60_bool = var_58_object == 0; // 0x7be Not
	if(var_60_bool == 0) goto Label_1986; // 0x7bf JumpB
	var_56_bool = 0; // 0x7c0 MovB
	return 2; // 0x7c1 Return
	
Label_1986:
	var_61_bool = 0; var_62_object = Obj(); // 0x7c2 PushV
	var_62_object = var_58_object; // 0x7c3 Mov
	func_2234(var_62_object); // 0x7c4 NEW_2
	var_56_bool = var_61_bool; // 0x7c5 Mov
	return 2; // 0x7c7 Return
}


func_2754()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xac2 PushV
	var_43_int = 335; // 0xac3 PushI
	var_44_int = 2; // 0xac4 PushI
	var_45_int = 524802; // 0xac5 PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xac6 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xac8 PushV
	var_47_object = var_42_object; // 0xac9 Mov
	var_48_int = 333; // 0xaca MovI
	func_2793(var_46_bool, var_47_object, var_48_int); // 0xacb NEW_2
	return 2; // 0xacd Return
}


func_2243(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x8c3 PushV
	IsLoaded(var_34_bool); // 0x8c4 Func
	var_32_bool = var_34_bool; // 0x8c6 Mov
	return 2; // 0x8c7 Return
}


func_706(var_0_object, var_348_int, var_349_object)
{
	var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0; var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0; // 0x2c2 PushV
	var_0_object = var_349_object; // 0x2c3 TMov
	var_359_bool = 0; var_360_object = Obj(); var_361_float = 0; // 0x2c4 PushV
	var_360_object = var_349_object; // 0x2c5 Mov
	var_361_float = 70.0; // 0x2c6 MovF
	func_2248(var_360_object, var_361_float); // 0x2c7 NEW_2
	var_362_bool = var_359_bool == 0; // 0x2c9 Not
	if(var_362_bool == 0) goto Label_717; // 0x2ca JumpB
	var_348_int = -2; // 0x2cb MovI
	return 8; // 0x2cc Return
	
Label_717:
	CreateDialog(var_355_object); // 0x2cd Func
	var_363_int = 0; // 0x2cf PushV
	func_2890(var_363_int); // 0x2d0 NEW_2
	SetNPCName(var_363_int); // 0x2d2 ObjFunc
	var_364_int = 0; // 0x2d4 PushV
	func_2888(var_364_int); // 0x2d5 NEW_2
	SetNPCDescription(var_364_int); // 0x2d7 ObjFunc
	var_365_string = ""; // 0x2d9 PushV
	func_2892(var_365_string); // 0x2da NEW_2
	SetPhoto(var_365_string); // 0x2dc ObjFunc
	var_366_string = ""; // 0x2de PushV
	func_2894(var_366_string); // 0x2df NEW_2
	SetPhoto2(var_366_string); // 0x2e1 ObjFunc
	var_367_int = 0; // 0x2e3 PushV
	func_2871(var_367_int); // 0x2e4 NEW_2
	SetPlayerName(var_367_int); // 0x2e6 ObjFunc
	var_357_int = -1; // 0x2e8 MovI
	IsOverrideActive(var_356_bool); // 0x2e9 Func
	var_368_bool = var_356_bool; // 0x2eb Push
	if(var_368_bool == 0) goto Label_751; // 0x2ec JumpB
	var_348_int = -2; // 0x2ed MovI
	return 8; // 0x2ee Return
	
Label_751:
	DoDialog(var_355_object); // 0x2ef Func
	var_369_bool = 0; var_370_object = Obj(); // 0x2f1 PushV
	var_371_object = Obj(); // 0x2f2 PushV
	func_2524(var_371_object); // 0x2f3 NEW_2
	var_370_object = var_371_object; // 0x2f4 Mov
	func_2333(var_369_bool, var_370_object); // 0x2f6 NEW_2
	var_372_object = Obj(); var_373_object = Obj(); // 0x2f8 PushV
	var_372_object = var_349_object; // 0x2f9 Mov
	var_373_object = var_355_object; // 0x2fa Mov
	TaskCall(5); // 0x2fb TaskCall
	func_787(var_374_object, var_375_object, var_376_string, var_377_bool, var_372_object, var_373_object); // 0x2fc NEW_2
	TaskReturn(); // 0x2fd TaskReturn
	IsDialogEnd(var_358_bool); // 0x2ff ObjFunc
	
Label_769:
	var_411_bool = var_358_bool == 0; // 0x301 Not
	if(var_411_bool == 0) goto Label_776; // 0x302 JumpB
	sync(); // 0x303 Func
	IsDialogEnd(var_358_bool); // 0x305 ObjFunc
	goto Label_769; // 0x307 Jump
	
Label_776:
	var_412_object = Obj(); // 0x308 PushV
	var_412_object = var_349_object; // 0x309 Mov
	func_2316(); // 0x30a NEW_2
	StopDialog(var_355_object); // 0x30c Func
	GetReturnValue(var_357_int); // 0x30e ObjFunc
	var_348_int = var_357_int; // 0x310 Mov
	return 8; // 0x311 Return
}


func_2502(var_157_bool, var_158_string)
{
	var_159_bool = 0; var_160_bool = 0; // 0x9c6 PushV
	var_161_bool = 0; // 0x9c7 PushV
	func_2896(var_161_bool); // 0x9c8 NEW_2
	if(var_161_bool == 0) goto Label_2515; // 0x9ca JumpB
	lshHasSpeech(var_160_bool, var_158_string); // 0x9cb Func
	var_162_bool = var_160_bool; // 0x9cd Push
	if(var_162_bool == 0) goto Label_2515; // 0x9ce JumpB
	lshPlaySpeech(var_158_string); // 0x9cf Func
	var_157_bool = 1; // 0x9d1 MovB
	return 2; // 0x9d2 Return
	
Label_2515:
	var_157_bool = 0; // 0x9d3 MovB
	return 2; // 0x9d4 Return
}


func_2248(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0x8c8 PushV
	GetPosition(var_76_cvector); // 0x8c9 ObjFunc
	GetEyesHeight(var_75_float); // 0x8cb ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x8cd PushE
	var_84_float = var_84_float + var_75_float; // 0x8ce Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x8cf PopE
	GetPosition(var_77_cvector); // 0x8d0 Func
	GetEyesHeight(var_75_float); // 0x8d2 Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x8d4 PushE
	var_85_float = var_85_float + var_75_float; // 0x8d5 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x8d6 PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0x8d7 Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x8d8 PushE
	var_86_float = 0; // 0x8d9 MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x8da PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0x8db Or
	var_88_float = sqrt(var_87_int); // 0x8dc Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0x8dd Div2
	var_79_cvector = -var_78_cvector; // 0x8de Neg2
	var_89_float = var_78_cvector * var_65_float; // 0x8df Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x8e0 PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0x8e1 PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0x8e2 Xor2
	func_2530(var_90_cvector, var_91_cvector); // 0x8e3 NEW_2
	var_98_int = 25; // 0x8e5 PushI
	var_99_float = var_90_cvector * var_98_int; // 0x8e6 Mult
	var_100_int = var_89_float + var_99_float; // 0x8e7 Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0x8e8 PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0x8e9 Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0x8ea Add2
	IsOverrideActive(var_82_bool); // 0x8eb Func
	var_102_bool = var_82_bool; // 0x8ed Push
	if(var_102_bool == 0) goto Label_2289; // 0x8ee JumpB
	var_63_bool = 0; // 0x8ef MovB
	return 18; // 0x8f0 Return
	
Label_2289:
	StopWorld(); // 0x8f1 Func
	CameraTransit(var_81_cvector, var_79_cvector); // 0x8f3 Func
	var_103_float = GetByIndex(var_80_cvector, 0); // 0x8f5 PushE
	var_104_float = GetByIndex(var_80_cvector, 2); // 0x8f6 PushE
	Rotate(var_103_float, var_104_float); // 0x8f7 Func
	var_105_bool = 0; // 0x8f9 PushV
	func_2896(var_105_bool); // 0x8fa NEW_2
	if(var_105_bool == 0) goto Label_2302; // 0x8fc JumpB
	goto Label_2310; // 0x8fd Jump
	
Label_2310:
	CameraWaitForPlayFinish(); // 0x906 Func
	ResumeWorld(); // 0x908 Func
	var_63_bool = 1; // 0x90a MovB
	return 18; // 0x90b Return
	
Label_2302:
	var_106_string = "head"; // 0x8fe PushS
	HasAnimationTrack(var_83_bool, var_106_string); // 0x8ff Func
	var_107_bool = var_83_bool; // 0x901 Push
	if(var_107_bool == 0) goto Label_2310; // 0x902 JumpB
	var_108_string = "head"; // 0x903 PushS
	LookAsyncCamera(var_108_string); // 0x904 Func
}


func_1993(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x7c9 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x7ca PushE
	RotateAsync(var_108_float, var_109_float); // 0x7cb Func
	return 0; // 0x7cd Return
}


func_1998(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x7ce PushV
	var_44_string = "player"; // 0x7cf PushS
	FindActor(var_42_object, var_44_string); // 0x7d0 Func
	var_45_bool = var_42_object == 0; // 0x7d2 Not
	if(var_45_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_39_bool = 0; // 0x7d4 MovB
	return 4; // 0x7d5 Return
	
Label_2006:
	var_46_float = 0; var_47_object = Obj(); // 0x7d6 PushV
	var_47_object = var_42_object; // 0x7d7 Mov
	func_2216(var_47_object); // 0x7d8 NEW_2
	var_54_float = 90000.0; // 0x7da PushF
	var_55_bool = var_46_float > var_54_float; // 0x7db GT
	if(var_55_bool == 0) goto Label_2015; // 0x7dc JumpB
	var_39_bool = 0; // 0x7dd MovB
	return 4; // 0x7de Return
	
Label_2015:
	CanSee(var_43_bool, var_42_object); // 0x7df Func
	var_39_bool = var_43_bool; // 0x7e1 Mov
	return 4; // 0x7e2 Return
}


func_2767()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xacf PushV
	var_43_int = 371; // 0xad0 PushI
	var_44_int = 1; // 0xad1 PushI
	var_45_int = 525728; // 0xad2 PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xad3 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xad5 PushV
	var_47_object = var_42_object; // 0xad6 Mov
	var_48_int = 368; // 0xad7 MovI
	func_2793(var_46_bool, var_47_object, var_48_int); // 0xad8 NEW_2
	return 2; // 0xada Return
}


func_2517()
{
	var_34_bool = 0; // 0x9d5 PushV
	func_2896(var_34_bool); // 0x9d6 NEW_2
	if(var_34_bool == 0) goto Label_2523; // 0x9d8 JumpB
	lshStopSpeech(); // 0x9d9 Func
	
Label_2523:
	return 0; // 0x9db Return
}


func_1495(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; // 0x5d7 PushV
	var_0_object = var_493_object; // 0x5d8 TMov
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0; // 0x5d9 PushV
	var_504_object = var_493_object; // 0x5da Mov
	var_505_float = 70.0; // 0x5db MovF
	func_2248(var_504_object, var_505_float); // 0x5dc NEW_2
	var_506_bool = var_503_bool == 0; // 0x5de Not
	if(var_506_bool == 0) goto Label_1506; // 0x5df JumpB
	var_492_int = -2; // 0x5e0 MovI
	return 8; // 0x5e1 Return
	
Label_1506:
	CreateDialog(var_499_object); // 0x5e2 Func
	var_507_int = 0; // 0x5e4 PushV
	func_2890(var_507_int); // 0x5e5 NEW_2
	SetNPCName(var_507_int); // 0x5e7 ObjFunc
	var_508_int = 0; // 0x5e9 PushV
	func_2888(var_508_int); // 0x5ea NEW_2
	SetNPCDescription(var_508_int); // 0x5ec ObjFunc
	var_509_string = ""; // 0x5ee PushV
	func_2892(var_509_string); // 0x5ef NEW_2
	SetPhoto(var_509_string); // 0x5f1 ObjFunc
	var_510_string = ""; // 0x5f3 PushV
	func_2894(var_510_string); // 0x5f4 NEW_2
	SetPhoto2(var_510_string); // 0x5f6 ObjFunc
	var_511_int = 0; // 0x5f8 PushV
	func_2871(var_511_int); // 0x5f9 NEW_2
	SetPlayerName(var_511_int); // 0x5fb ObjFunc
	var_501_int = -1; // 0x5fd MovI
	IsOverrideActive(var_500_bool); // 0x5fe Func
	var_512_bool = var_500_bool; // 0x600 Push
	if(var_512_bool == 0) goto Label_1540; // 0x601 JumpB
	var_492_int = -2; // 0x602 MovI
	return 8; // 0x603 Return
	
Label_1540:
	DoDialog(var_499_object); // 0x604 Func
	var_513_bool = 0; var_514_object = Obj(); // 0x606 PushV
	var_515_object = Obj(); // 0x607 PushV
	func_2524(var_515_object); // 0x608 NEW_2
	var_514_object = var_515_object; // 0x609 Mov
	func_2333(var_513_bool, var_514_object); // 0x60b NEW_2
	var_516_object = Obj(); var_517_object = Obj(); // 0x60d PushV
	var_516_object = var_493_object; // 0x60e Mov
	var_517_object = var_499_object; // 0x60f Mov
	TaskCall(9); // 0x610 TaskCall
	func_1576(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object); // 0x611 NEW_2
	TaskReturn(); // 0x612 TaskReturn
	IsDialogEnd(var_502_bool); // 0x614 ObjFunc
	
Label_1558:
	var_549_bool = var_502_bool == 0; // 0x616 Not
	if(var_549_bool == 0) goto Label_1565; // 0x617 JumpB
	sync(); // 0x618 Func
	IsDialogEnd(var_502_bool); // 0x61a ObjFunc
	goto Label_1558; // 0x61c Jump
	
Label_1565:
	var_550_object = Obj(); // 0x61d PushV
	var_550_object = var_493_object; // 0x61e Mov
	func_2316(); // 0x61f NEW_2
	StopDialog(var_499_object); // 0x621 Func
	GetReturnValue(var_501_int); // 0x623 ObjFunc
	var_492_int = var_501_int; // 0x625 Mov
	return 8; // 0x626 Return
}


func_1754(var_0_object, var_551_int, var_552_object)
{
	var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0; var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0; // 0x6da PushV
	var_0_object = var_552_object; // 0x6db TMov
	var_562_bool = 0; var_563_object = Obj(); var_564_float = 0; // 0x6dc PushV
	var_563_object = var_552_object; // 0x6dd Mov
	var_564_float = 70.0; // 0x6de MovF
	func_2248(var_563_object, var_564_float); // 0x6df NEW_2
	var_565_bool = var_562_bool == 0; // 0x6e1 Not
	if(var_565_bool == 0) goto Label_1765; // 0x6e2 JumpB
	var_551_int = -2; // 0x6e3 MovI
	return 8; // 0x6e4 Return
	
Label_1765:
	CreateDialog(var_558_object); // 0x6e5 Func
	var_566_int = 0; // 0x6e7 PushV
	func_2890(var_566_int); // 0x6e8 NEW_2
	SetNPCName(var_566_int); // 0x6ea ObjFunc
	var_567_int = 0; // 0x6ec PushV
	func_2888(var_567_int); // 0x6ed NEW_2
	SetNPCDescription(var_567_int); // 0x6ef ObjFunc
	var_568_string = ""; // 0x6f1 PushV
	func_2892(var_568_string); // 0x6f2 NEW_2
	SetPhoto(var_568_string); // 0x6f4 ObjFunc
	var_569_string = ""; // 0x6f6 PushV
	func_2894(var_569_string); // 0x6f7 NEW_2
	SetPhoto2(var_569_string); // 0x6f9 ObjFunc
	var_570_int = 0; // 0x6fb PushV
	func_2871(var_570_int); // 0x6fc NEW_2
	SetPlayerName(var_570_int); // 0x6fe ObjFunc
	var_560_int = -1; // 0x700 MovI
	IsOverrideActive(var_559_bool); // 0x701 Func
	var_571_bool = var_559_bool; // 0x703 Push
	if(var_571_bool == 0) goto Label_1799; // 0x704 JumpB
	var_551_int = -2; // 0x705 MovI
	return 8; // 0x706 Return
	
Label_1799:
	DoDialog(var_558_object); // 0x707 Func
	var_572_bool = 0; var_573_object = Obj(); // 0x709 PushV
	var_574_object = Obj(); // 0x70a PushV
	func_2524(var_574_object); // 0x70b NEW_2
	var_573_object = var_574_object; // 0x70c Mov
	func_2333(var_572_bool, var_573_object); // 0x70e NEW_2
	var_575_object = Obj(); var_576_object = Obj(); // 0x710 PushV
	var_575_object = var_552_object; // 0x711 Mov
	var_576_object = var_558_object; // 0x712 Mov
	TaskCall(11); // 0x713 TaskCall
	func_1835(var_577_object, var_578_object, var_579_string, var_580_bool, var_575_object, var_576_object); // 0x714 NEW_2
	TaskReturn(); // 0x715 TaskReturn
	IsDialogEnd(var_561_bool); // 0x717 ObjFunc
	
Label_1817:
	var_605_bool = var_561_bool == 0; // 0x719 Not
	if(var_605_bool == 0) goto Label_1824; // 0x71a JumpB
	sync(); // 0x71b Func
	IsDialogEnd(var_561_bool); // 0x71d ObjFunc
	goto Label_1817; // 0x71f Jump
	
Label_1824:
	var_606_object = Obj(); // 0x720 PushV
	var_606_object = var_552_object; // 0x721 Mov
	func_2316(); // 0x722 NEW_2
	StopDialog(var_558_object); // 0x724 Func
	GetReturnValue(var_560_int); // 0x726 ObjFunc
	var_551_int = var_560_int; // 0x728 Mov
	return 8; // 0x729 Return
}


func_2524(var_125_object)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x9dc PushV
	self(var_127_object); // 0x9dd Func
	var_125_object = var_127_object; // 0x9df Mov
	return 2; // 0x9e0 Return
}


func_2780(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0xadc PushV
	GetDiaryRoot(var_57_object); // 0xadd Func
	var_58_bool = var_57_object == 0; // 0xadf Not
	if(var_58_bool == 0) goto Label_2790; // 0xae0 JumpB
	var_59_string = "Can't retrieve diary root"; // 0xae1 PushS
	Trace(var_59_string); // 0xae2 Func
	var_55_object = 0; // 0xae4 MovB
	return 2; // 0xae5 Return
	
Label_2790:
	var_55_object = var_57_object; // 0xae6 Mov
	return 2; // 0xae7 Return
}


func_2530(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0x9e2 PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0x9e3 Or
	var_94_float = sqrt(var_95_int); // 0x9e4 Sqrt2
	var_96_float = 0.0; // 0x9e5 PushF
	var_97_bool = var_94_float < var_96_float; // 0x9e6 LT
	if(var_97_bool == 0) goto Label_2538; // 0x9e7 JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0x9e8 MovV
	return 2; // 0x9e9 Return
	
Label_2538:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0x9ea Div2
	return 2; // 0x9eb Return
}


func_1251(var_2_object, var_457_string)
{
	var_458_bool = 0; // 0x4e4 PushV
	func_2896(var_458_bool); // 0x4e5 NEW_2
	var_459_bool = var_458_bool == 0; // 0x4e7 Not
	if(var_459_bool == 0) goto Label_1258; // 0x4e8 JumpB
	return 0; // 0x4e9 Return
	
Label_1258:
	var_460_bool = var_457_string == var_2_object; // 0x4ea Eq
	if(var_460_bool == 0) goto Label_1261; // 0x4eb JumpB
	return 0; // 0x4ec Return
	
Label_1261:
	var_461_string = ""; var_462_bool = 0; // 0x4ed PushV
	var_461_string = var_457_string; // 0x4ee Mov
	var_463_string = ""; // 0x4ef PushS
	var_464_bool = var_457_string == var_463_string; // 0x4f0 Eq
	if(var_464_bool == 0) goto Label_1268; // 0x4f1 JumpB
	var_462_bool = 0; // 0x4f2 MovB
	goto Label_1269; // 0x4f3 Jump
	
Label_1269:
	func_2487(var_461_string, var_462_bool); // 0x4f5 NEW_2
	var_2_object = var_457_string; // 0x4f7 TMov
	return 0; // 0x4f8 Return
	
Label_1268:
	var_462_bool = 1; // 0x4f4 MovB
}


func_2020()
{
	var_609_float = 0; var_610_float = 0; // 0x7e4 PushV
	var_611_int = 8; // 0x7e5 PushI
	var_612_int = 16; // 0x7e6 PushI
	rand(var_610_float, var_611_int, var_612_int); // 0x7e7 Func
	var_613_int = 10; // 0x7e9 PushI
	SetTimer(var_613_int, var_610_float); // 0x7ea Func
	return 2; // 0x7ec Return
}


func_2793(var_46_bool, var_47_object, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0xae9 PushV
	var_55_object = Obj(); // 0xaea PushV
	func_2780(var_55_object); // 0xaeb NEW_2
	var_52_object = var_55_object; // 0xaec Mov
	Find(var_48_int, var_53_object); // 0xaee ObjFunc
	var_60_bool = var_53_object == 0; // 0xaf0 Not
	if(var_60_bool == 0) goto Label_2808; // 0xaf1 JumpB
	var_61_string = "Can't find diary parent with id: "; // 0xaf2 PushS
	var_62_int = var_61_string + var_48_int; // 0xaf3 Add
	Trace(var_62_int); // 0xaf4 Func
	var_46_bool = 0; // 0xaf6 MovB
	return 6; // 0xaf7 Return
	
Label_2808:
	AddChild(var_47_object); // 0xaf8 ObjFunc
	var_63_int = 7; // 0xafa PushI
	SendWorldWndMessage(var_63_int); // 0xafb Func
	GetCategory(var_54_int); // 0xafd ObjFunc
	SetDiarySection(var_54_int); // 0xaff Func
	var_46_bool = 0; // 0xb01 MovB
	return 6; // 0xb02 Return
}


func_2540(var_321_int, var_322_string)
{
	var_323_int = 0; var_324_int = 0; // 0x9ec PushV
	GetVariable(var_322_string, var_324_int); // 0x9ed Func
	var_321_int = var_324_int; // 0x9ef Mov
	return 2; // 0x9f0 Return
}


func_2029()
{
	var_608_int = 10; // 0x7ed PushI
	KillTimer(var_608_int); // 0x7ee Func
	return 0; // 0x7f0 Return
}


func_2545(var_87_int, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x9f1 PushV
	CreateIntVector(var_90_object); // 0x9f2 Func
	add(var_87_int); // 0x9f4 ObjFunc
	add(var_88_int); // 0x9f6 ObjFunc
	var_91_int = 3; // 0x9f8 PushI
	SendWorldWndMessage(var_91_int, var_90_object); // 0x9f9 Func
	return 2; // 0x9fb Return
}


func_503(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x1f7 PushV
	var_0_object = var_53_object; // 0x1f8 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x1f9 PushV
	var_64_object = var_53_object; // 0x1fa Mov
	var_65_float = 70.0; // 0x1fb MovF
	func_2248(var_64_object, var_65_float); // 0x1fc NEW_2
	var_109_bool = var_63_bool == 0; // 0x1fe Not
	if(var_109_bool == 0) goto Label_514; // 0x1ff JumpB
	var_52_int = -2; // 0x200 MovI
	return 8; // 0x201 Return
	
Label_514:
	CreateDialog(var_59_object); // 0x202 Func
	var_110_int = 0; // 0x204 PushV
	func_2890(var_110_int); // 0x205 NEW_2
	SetNPCName(var_110_int); // 0x207 ObjFunc
	var_111_int = 0; // 0x209 PushV
	func_2888(var_111_int); // 0x20a NEW_2
	SetNPCDescription(var_111_int); // 0x20c ObjFunc
	var_112_string = ""; // 0x20e PushV
	func_2892(var_112_string); // 0x20f NEW_2
	SetPhoto(var_112_string); // 0x211 ObjFunc
	var_113_string = ""; // 0x213 PushV
	func_2894(var_113_string); // 0x214 NEW_2
	SetPhoto2(var_113_string); // 0x216 ObjFunc
	var_114_int = 0; // 0x218 PushV
	func_2871(var_114_int); // 0x219 NEW_2
	SetPlayerName(var_114_int); // 0x21b ObjFunc
	var_61_int = -1; // 0x21d MovI
	IsOverrideActive(var_60_bool); // 0x21e Func
	var_122_bool = var_60_bool; // 0x220 Push
	if(var_122_bool == 0) goto Label_548; // 0x221 JumpB
	var_52_int = -2; // 0x222 MovI
	return 8; // 0x223 Return
	
Label_548:
	DoDialog(var_59_object); // 0x224 Func
	var_123_bool = 0; var_124_object = Obj(); // 0x226 PushV
	var_125_object = Obj(); // 0x227 PushV
	func_2524(var_125_object); // 0x228 NEW_2
	var_124_object = var_125_object; // 0x229 Mov
	func_2333(var_123_bool, var_124_object); // 0x22b NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0x22d PushV
	var_218_object = var_53_object; // 0x22e Mov
	var_219_object = var_59_object; // 0x22f Mov
	TaskCall(3); // 0x230 TaskCall
	func_584(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object); // 0x231 NEW_2
	TaskReturn(); // 0x232 TaskReturn
	IsDialogEnd(var_62_bool); // 0x234 ObjFunc
	
Label_566:
	var_267_bool = var_62_bool == 0; // 0x236 Not
	if(var_267_bool == 0) goto Label_573; // 0x237 JumpB
	sync(); // 0x238 Func
	IsDialogEnd(var_62_bool); // 0x23a ObjFunc
	goto Label_566; // 0x23c Jump
	
Label_573:
	var_268_object = Obj(); // 0x23d PushV
	var_268_object = var_53_object; // 0x23e Mov
	func_2316(); // 0x23f NEW_2
	StopDialog(var_59_object); // 0x241 Func
	GetReturnValue(var_61_int); // 0x243 ObjFunc
	var_52_int = var_61_int; // 0x245 Mov
	return 8; // 0x246 Return
}


func_2557(var_77_object, var_78_int)
{
	var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x9fd PushV
	GetItemID(var_82_int); // 0x9fe ObjFunc
	var_85_string = "Category"; // 0xa00 PushS
	GetInvItemProperty(var_83_int, var_82_int, var_85_string); // 0xa01 Func
	AddItem(var_84_bool, var_77_object, var_83_int, var_78_int); // 0xa03 ObjFunc
	var_86_bool = var_84_bool == 0; // 0xa05 Not
	if(var_86_bool == 0) goto Label_2570; // 0xa06 JumpB
	DropItems(var_77_object, var_78_int); // 0xa07 ObjFunc
	goto Label_2575; // 0xa09 Jump
	
Label_2575:
	return 6; // 0xa0f Return
	
Label_2570:
	var_87_int = 0; var_88_int = 0; // 0xa0a PushV
	var_87_int = var_82_int; // 0xa0b Mov
	var_88_int = var_78_int; // 0xa0c Mov
	func_2545(var_87_int, var_88_int); // 0xa0d NEW_2
}


