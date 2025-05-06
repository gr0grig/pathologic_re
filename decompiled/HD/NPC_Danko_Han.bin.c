task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xc9 PushI
	if(var_43_int == 0) goto Label_581; // 0xca JumpB
	func_4020(); // 0xcc NEW_2
	var_45_int = 11509; // 0xce PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xcf Eq
	if(var_46_bool == 0) goto Label_214; // 0xd0 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xd1 PushV
	var_47_object = var_1_object; // 0xd2 MovT
	var_48_object = var_0_object; // 0xd3 MovT
	func_4195(); // 0xd4 NEW_2
	
Label_214:
	var_90_int = 11510; // 0xd6 PushI
	var_91_bool = var_42_cvector == var_90_int; // 0xd7 Eq
	if(var_91_bool == 0) goto Label_222; // 0xd8 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0xd9 PushV
	var_92_object = var_1_object; // 0xda MovT
	var_93_object = var_0_object; // 0xdb MovT
	func_4195(); // 0xdc NEW_2
	
Label_222:
	var_94_int = 11505; // 0xde PushI
	var_95_bool = var_42_cvector == var_94_int; // 0xdf Eq
	if(var_95_bool == 0) goto Label_230; // 0xe0 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0xe1 PushV
	var_96_object = var_1_object; // 0xe2 MovT
	var_97_object = var_0_object; // 0xe3 MovT
	func_4195(); // 0xe4 NEW_2
	
Label_230:
	var_98_int = 11498; // 0xe6 PushI
	var_99_bool = var_42_cvector == var_98_int; // 0xe7 Eq
	if(var_99_bool == 0) goto Label_238; // 0xe8 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0xe9 PushV
	var_100_object = var_1_object; // 0xea MovT
	var_101_object = var_0_object; // 0xeb MovT
	func_4195(); // 0xec NEW_2
	
Label_238:
	var_102_int = 11488; // 0xee PushI
	var_103_bool = var_41_bool == var_102_int; // 0xef Eq
	if(var_103_bool == 0) goto Label_300; // 0xf0 JumpB
	var_104_bool = 0; // 0xf1 PushV
	var_104_bool = 0; // 0xf2 MovB
	var_105_bool = 0; var_106_object = Obj(); // 0xf3 PushV
	var_106_object = var_1_object; // 0xf4 MovT
	func_4321(var_106_object); // 0xf5 NEW_2
	if(var_105_bool == 0) goto Label_254; // 0xf7 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0xf8 PushV
	var_114_object = var_1_object; // 0xf9 MovT
	func_4316(var_114_object); // 0xfa NEW_2
	if(var_113_bool == 0) goto Label_254; // 0xfc JumpB
	var_104_bool = 1; // 0xfd MovB
	
Label_254:
	if(var_104_bool == 0) goto Label_280; // 0xfe JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0xff PushV
	var_115_object = var_1_object; // 0x100 MovT
	var_116_object = var_0_object; // 0x101 MovT
	func_4193(); // 0x102 NEW_2
	var_117_string = ""; // 0x104 PushV
	var_117_string = "Questioning"; // 0x105 MovS
	func_178(var_42_cvector, var_117_string); // 0x106 NEW_2
	var_134_int = 510420; // 0x108 PushI
	SetMessage(var_134_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_135_int = 510421; // 0x10d PushI
	var_136_int = 11490; // 0x10e PushI
	var_137_int = 11489; // 0x10f PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x110 TObjFunc
	var_138_int = 534384; // 0x112 PushI
	var_139_int = 36001; // 0x113 PushI
	var_140_int = 35999; // 0x114 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_141_string = ""; // 0x118 PushV
	var_141_string = "Neutral"; // 0x119 MovS
	func_178(var_42_cvector, var_141_string); // 0x11a NEW_2
	var_142_int = 534418; // 0x11c PushI
	SetMessage(var_142_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_143_int = 534419; // 0x121 PushI
	var_144_int = -1; // 0x122 PushI
	var_145_int = 36046; // 0x123 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x124 TObjFunc
	var_146_int = 536096; // 0x126 PushI
	var_147_int = -1; // 0x127 PushI
	var_148_int = 37848; // 0x128 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_149_int = 36001; // 0x12c PushI
	var_150_bool = var_41_bool == var_149_int; // 0x12d Eq
	if(var_150_bool == 0) goto Label_318; // 0x12e JumpB
	var_151_string = ""; // 0x12f PushV
	var_151_string = "Questioning"; // 0x130 MovS
	func_178(var_42_cvector, var_151_string); // 0x131 NEW_2
	var_152_int = 534386; // 0x133 PushI
	SetMessage(var_152_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_153_int = 534387; // 0x138 PushI
	var_154_int = 36003; // 0x139 PushI
	var_155_int = 36002; // 0x13a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_156_int = 36003; // 0x13e PushI
	var_157_bool = var_41_bool == var_156_int; // 0x13f Eq
	if(var_157_bool == 0) goto Label_341; // 0x140 JumpB
	var_158_string = ""; // 0x141 PushV
	var_158_string = "Questioning"; // 0x142 MovS
	func_178(var_42_cvector, var_158_string); // 0x143 NEW_2
	var_159_int = 534388; // 0x145 PushI
	SetMessage(var_159_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_160_int = 534389; // 0x14a PushI
	var_161_int = 36006; // 0x14b PushI
	var_162_int = 36004; // 0x14c PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x14d TObjFunc
	var_163_int = 534390; // 0x14f PushI
	var_164_int = 36006; // 0x150 PushI
	var_165_int = 36005; // 0x151 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_166_int = 36006; // 0x155 PushI
	var_167_bool = var_41_bool == var_166_int; // 0x156 Eq
	if(var_167_bool == 0) goto Label_364; // 0x157 JumpB
	var_168_string = ""; // 0x158 PushV
	var_168_string = "Questioning"; // 0x159 MovS
	func_178(var_42_cvector, var_168_string); // 0x15a NEW_2
	var_169_int = 534391; // 0x15c PushI
	SetMessage(var_169_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_170_int = 534392; // 0x161 PushI
	var_171_int = 36009; // 0x162 PushI
	var_172_int = 36007; // 0x163 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x164 TObjFunc
	var_173_int = 534393; // 0x166 PushI
	var_174_int = 36009; // 0x167 PushI
	var_175_int = 36008; // 0x168 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_176_int = 36009; // 0x16c PushI
	var_177_bool = var_41_bool == var_176_int; // 0x16d Eq
	if(var_177_bool == 0) goto Label_382; // 0x16e JumpB
	var_178_string = ""; // 0x16f PushV
	var_178_string = "Suspicion"; // 0x170 MovS
	func_178(var_42_cvector, var_178_string); // 0x171 NEW_2
	var_179_int = 534394; // 0x173 PushI
	SetMessage(var_179_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_180_int = 534395; // 0x178 PushI
	var_181_int = 36013; // 0x179 PushI
	var_182_int = 36012; // 0x17a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_183_int = 36013; // 0x17e PushI
	var_184_bool = var_41_bool == var_183_int; // 0x17f Eq
	if(var_184_bool == 0) goto Label_400; // 0x180 JumpB
	var_185_string = ""; // 0x181 PushV
	var_185_string = "Neutral"; // 0x182 MovS
	func_178(var_42_cvector, var_185_string); // 0x183 NEW_2
	var_186_int = 534396; // 0x185 PushI
	SetMessage(var_186_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_187_int = 534397; // 0x18a PushI
	var_188_int = 11492; // 0x18b PushI
	var_189_int = 36014; // 0x18c PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x18d TObjFunc
	return 0; // 0x18f Return
	
Label_400:
	var_190_int = 11490; // 0x190 PushI
	var_191_bool = var_41_bool == var_190_int; // 0x191 Eq
	if(var_191_bool == 0) goto Label_423; // 0x192 JumpB
	var_192_string = ""; // 0x193 PushV
	var_192_string = "Doubt"; // 0x194 MovS
	func_178(var_42_cvector, var_192_string); // 0x195 NEW_2
	var_193_int = 510422; // 0x197 PushI
	SetMessage(var_193_int); // 0x198 TObjFunc
	ClearReplies(); // 0x19a TObjFunc
	var_194_int = 510423; // 0x19c PushI
	var_195_int = 11492; // 0x19d PushI
	var_196_int = 11491; // 0x19e PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x19f TObjFunc
	var_197_int = 534385; // 0x1a1 PushI
	var_198_int = 11502; // 0x1a2 PushI
	var_199_int = 36000; // 0x1a3 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_200_int = 11492; // 0x1a7 PushI
	var_201_bool = var_41_bool == var_200_int; // 0x1a8 Eq
	if(var_201_bool == 0) goto Label_441; // 0x1a9 JumpB
	var_202_string = ""; // 0x1aa PushV
	var_202_string = "Doubt"; // 0x1ab MovS
	func_178(var_42_cvector, var_202_string); // 0x1ac NEW_2
	var_203_int = 510424; // 0x1ae PushI
	SetMessage(var_203_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_204_int = 510425; // 0x1b3 PushI
	var_205_int = 11494; // 0x1b4 PushI
	var_206_int = 11493; // 0x1b5 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_207_int = 11494; // 0x1b9 PushI
	var_208_bool = var_41_bool == var_207_int; // 0x1ba Eq
	if(var_208_bool == 0) goto Label_459; // 0x1bb JumpB
	var_209_string = ""; // 0x1bc PushV
	var_209_string = "Grin"; // 0x1bd MovS
	func_178(var_42_cvector, var_209_string); // 0x1be NEW_2
	var_210_int = 510426; // 0x1c0 PushI
	SetMessage(var_210_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_211_int = 510427; // 0x1c5 PushI
	var_212_int = 11496; // 0x1c6 PushI
	var_213_int = 11495; // 0x1c7 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_214_int = 11496; // 0x1cb PushI
	var_215_bool = var_41_bool == var_214_int; // 0x1cc Eq
	if(var_215_bool == 0) goto Label_482; // 0x1cd JumpB
	var_216_string = ""; // 0x1ce PushV
	var_216_string = "Questioning"; // 0x1cf MovS
	func_178(var_42_cvector, var_216_string); // 0x1d0 NEW_2
	var_217_int = 510428; // 0x1d2 PushI
	SetMessage(var_217_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_218_int = 510429; // 0x1d7 PushI
	var_219_int = 11499; // 0x1d8 PushI
	var_220_int = 11497; // 0x1d9 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1da TObjFunc
	var_221_int = 510430; // 0x1dc PushI
	var_222_int = -1; // 0x1dd PushI
	var_223_int = 11498; // 0x1de PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_224_int = 11499; // 0x1e2 PushI
	var_225_bool = var_41_bool == var_224_int; // 0x1e3 Eq
	if(var_225_bool == 0) goto Label_505; // 0x1e4 JumpB
	var_226_string = ""; // 0x1e5 PushV
	var_226_string = "Suspicion"; // 0x1e6 MovS
	func_178(var_42_cvector, var_226_string); // 0x1e7 NEW_2
	var_227_int = 510431; // 0x1e9 PushI
	SetMessage(var_227_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_228_int = 510432; // 0x1ee PushI
	var_229_int = 11502; // 0x1ef PushI
	var_230_int = 11500; // 0x1f0 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1f1 TObjFunc
	var_231_int = 510433; // 0x1f3 PushI
	var_232_int = 11502; // 0x1f4 PushI
	var_233_int = 11501; // 0x1f5 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_234_int = 11502; // 0x1f9 PushI
	var_235_bool = var_41_bool == var_234_int; // 0x1fa Eq
	if(var_235_bool == 0) goto Label_528; // 0x1fb JumpB
	var_236_string = ""; // 0x1fc PushV
	var_236_string = "Suspicion"; // 0x1fd MovS
	func_178(var_42_cvector, var_236_string); // 0x1fe NEW_2
	var_237_int = 510434; // 0x200 PushI
	SetMessage(var_237_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_238_int = 510435; // 0x205 PushI
	var_239_int = 11504; // 0x206 PushI
	var_240_int = 11503; // 0x207 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x208 TObjFunc
	var_241_int = 510437; // 0x20a PushI
	var_242_int = -1; // 0x20b PushI
	var_243_int = 11505; // 0x20c PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_244_int = 11504; // 0x210 PushI
	var_245_bool = var_41_bool == var_244_int; // 0x211 Eq
	if(var_245_bool == 0) goto Label_546; // 0x212 JumpB
	var_246_string = ""; // 0x213 PushV
	var_246_string = "Neutral"; // 0x214 MovS
	func_178(var_42_cvector, var_246_string); // 0x215 NEW_2
	var_247_int = 510436; // 0x217 PushI
	SetMessage(var_247_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_248_int = 510438; // 0x21c PushI
	var_249_int = 11508; // 0x21d PushI
	var_250_int = 11507; // 0x21e PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x21f TObjFunc
	return 0; // 0x221 Return
	
Label_546:
	var_251_int = 11508; // 0x222 PushI
	var_252_bool = var_41_bool == var_251_int; // 0x223 Eq
	if(var_252_bool == 0) goto Label_569; // 0x224 JumpB
	var_253_string = ""; // 0x225 PushV
	var_253_string = "Neutral"; // 0x226 MovS
	func_178(var_42_cvector, var_253_string); // 0x227 NEW_2
	var_254_int = 510439; // 0x229 PushI
	SetMessage(var_254_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_255_int = 510440; // 0x22e PushI
	var_256_int = -1; // 0x22f PushI
	var_257_int = 11509; // 0x230 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x231 TObjFunc
	var_258_int = 510441; // 0x233 PushI
	var_259_int = -1; // 0x234 PushI
	var_260_int = 11510; // 0x235 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_3_string = 1; // 0x239 TMovB
	var_261_bool = 0; // 0x23a PushV
	func_4119(var_261_bool); // 0x23b NEW_2
	if(var_261_bool == 0) goto Label_577; // 0x23d JumpB
	lshStopAnimation(); // 0x23e Func
	goto Label_579; // 0x240 Jump
	
Label_579:
	return 0; // 0x243 Return
	
Label_577:
	StopAnimation(); // 0x241 Func
	
Label_581:
	return 0; // 0x245 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x2ed PushI
	if(var_43_int == 0) goto Label_894; // 0x2ee JumpB
	func_4020(); // 0x2f0 NEW_2
	var_45_int = 13388; // 0x2f2 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x2f3 Eq
	if(var_46_bool == 0) goto Label_762; // 0x2f4 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x2f5 PushV
	var_47_object = var_1_object; // 0x2f6 MovT
	var_48_object = var_0_object; // 0x2f7 MovT
	func_4121(); // 0x2f8 NEW_2
	
Label_762:
	var_51_int = 13387; // 0x2fa PushI
	var_52_bool = var_41_bool == var_51_int; // 0x2fb Eq
	if(var_52_bool == 0) goto Label_790; // 0x2fc JumpB
	var_53_string = ""; // 0x2fd PushV
	var_53_string = "Suspicion"; // 0x2fe MovS
	func_726(var_42_cvector, var_53_string); // 0x2ff NEW_2
	var_70_int = 512232; // 0x301 PushI
	SetMessage(var_70_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_71_bool = 0; var_72_object = Obj(); // 0x306 PushV
	var_72_object = var_1_object; // 0x307 MovT
	func_4257(var_72_object); // 0x308 NEW_2
	if(var_71_bool == 0) goto Label_784; // 0x30a JumpB
	var_79_int = 512233; // 0x30b PushI
	var_80_int = 13389; // 0x30c PushI
	var_81_int = 13388; // 0x30d PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x30e TObjFunc
	
Label_784:
	var_82_int = 533144; // 0x310 PushI
	var_83_int = -1; // 0x311 PushI
	var_84_int = 34662; // 0x312 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x313 TObjFunc
	return 0; // 0x315 Return
	
Label_790:
	var_85_int = 13389; // 0x316 PushI
	var_86_bool = var_41_bool == var_85_int; // 0x317 Eq
	if(var_86_bool == 0) goto Label_818; // 0x318 JumpB
	var_87_string = ""; // 0x319 PushV
	var_87_string = "Questioning"; // 0x31a MovS
	func_726(var_42_cvector, var_87_string); // 0x31b NEW_2
	var_88_int = 512234; // 0x31d PushI
	SetMessage(var_88_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_89_int = 512235; // 0x322 PushI
	var_90_int = 13393; // 0x323 PushI
	var_91_int = 13390; // 0x324 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x325 TObjFunc
	var_92_int = 512236; // 0x327 PushI
	var_93_int = 13393; // 0x328 PushI
	var_94_int = 13391; // 0x329 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x32a TObjFunc
	var_95_int = 512237; // 0x32c PushI
	var_96_int = 13393; // 0x32d PushI
	var_97_int = 13392; // 0x32e PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x32f TObjFunc
	return 0; // 0x331 Return
	
Label_818:
	var_98_int = 13393; // 0x332 PushI
	var_99_bool = var_41_bool == var_98_int; // 0x333 Eq
	if(var_99_bool == 0) goto Label_841; // 0x334 JumpB
	var_100_string = ""; // 0x335 PushV
	var_100_string = "Questioning"; // 0x336 MovS
	func_726(var_42_cvector, var_100_string); // 0x337 NEW_2
	var_101_int = 512238; // 0x339 PushI
	SetMessage(var_101_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_102_int = 535824; // 0x33e PushI
	var_103_int = 37518; // 0x33f PushI
	var_104_int = 37517; // 0x340 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x341 TObjFunc
	var_105_int = 535826; // 0x343 PushI
	var_106_int = 37518; // 0x344 PushI
	var_107_int = 37519; // 0x345 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_108_int = 37518; // 0x349 PushI
	var_109_bool = var_41_bool == var_108_int; // 0x34a Eq
	if(var_109_bool == 0) goto Label_859; // 0x34b JumpB
	var_110_string = ""; // 0x34c PushV
	var_110_string = "Questioning"; // 0x34d MovS
	func_726(var_42_cvector, var_110_string); // 0x34e NEW_2
	var_111_int = 535825; // 0x350 PushI
	SetMessage(var_111_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_112_int = 512240; // 0x355 PushI
	var_113_int = 13397; // 0x356 PushI
	var_114_int = 13396; // 0x357 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x358 TObjFunc
	return 0; // 0x35a Return
	
Label_859:
	var_115_int = 13397; // 0x35b PushI
	var_116_bool = var_41_bool == var_115_int; // 0x35c Eq
	if(var_116_bool == 0) goto Label_882; // 0x35d JumpB
	var_117_string = ""; // 0x35e PushV
	var_117_string = "Doubt"; // 0x35f MovS
	func_726(var_42_cvector, var_117_string); // 0x360 NEW_2
	var_118_int = 512241; // 0x362 PushI
	SetMessage(var_118_int); // 0x363 TObjFunc
	ClearReplies(); // 0x365 TObjFunc
	var_119_int = 512242; // 0x367 PushI
	var_120_int = -1; // 0x368 PushI
	var_121_int = 13398; // 0x369 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x36a TObjFunc
	var_122_int = 535827; // 0x36c PushI
	var_123_int = -1; // 0x36d PushI
	var_124_int = 37521; // 0x36e PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_3_string = 1; // 0x372 TMovB
	var_125_bool = 0; // 0x373 PushV
	func_4119(var_125_bool); // 0x374 NEW_2
	if(var_125_bool == 0) goto Label_890; // 0x376 JumpB
	lshStopAnimation(); // 0x377 Func
	goto Label_892; // 0x379 Jump
	
Label_892:
	return 0; // 0x37c Return
	
Label_890:
	StopAnimation(); // 0x37a Func
	
Label_894:
	return 0; // 0x37e Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x43f PushI
	if(var_43_int == 0) goto Label_1293; // 0x440 JumpB
	func_4020(); // 0x442 NEW_2
	var_45_int = 13489; // 0x444 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x445 Eq
	if(var_46_bool == 0) goto Label_1145; // 0x446 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x447 PushV
	var_48_object = var_1_object; // 0x448 MovT
	func_4333(var_48_object); // 0x449 NEW_2
	if(var_47_bool == 0) goto Label_1125; // 0x44b JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x44c PushV
	var_55_object = var_1_object; // 0x44d MovT
	var_56_object = var_0_object; // 0x44e MovT
	func_4218(); // 0x44f NEW_2
	var_59_string = ""; // 0x451 PushV
	var_59_string = "Grin"; // 0x452 MovS
	func_1064(var_42_cvector, var_59_string); // 0x453 NEW_2
	var_76_int = 512330; // 0x455 PushI
	SetMessage(var_76_int); // 0x456 TObjFunc
	ClearReplies(); // 0x458 TObjFunc
	var_77_int = 512331; // 0x45a PushI
	var_78_int = 13491; // 0x45b PushI
	var_79_int = 13490; // 0x45c PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x45d TObjFunc
	var_80_int = 512336; // 0x45f PushI
	var_81_int = -1; // 0x460 PushI
	var_82_int = 13495; // 0x461 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x462 TObjFunc
	return 0; // 0x464 Return
	
Label_1125:
	var_83_string = ""; // 0x465 PushV
	var_83_string = "Neutral"; // 0x466 MovS
	func_1064(var_42_cvector, var_83_string); // 0x467 NEW_2
	var_84_int = 513781; // 0x469 PushI
	SetMessage(var_84_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_85_int = 513782; // 0x46e PushI
	var_86_int = -1; // 0x46f PushI
	var_87_int = 15018; // 0x470 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x471 TObjFunc
	var_88_int = 541839; // 0x473 PushI
	var_89_int = -1; // 0x474 PushI
	var_90_int = 44056; // 0x475 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x476 TObjFunc
	return 0; // 0x478 Return
	
Label_1145:
	var_91_int = 13491; // 0x479 PushI
	var_92_bool = var_41_bool == var_91_int; // 0x47a Eq
	if(var_92_bool == 0) goto Label_1168; // 0x47b JumpB
	var_93_string = ""; // 0x47c PushV
	var_93_string = "Grin"; // 0x47d MovS
	func_1064(var_42_cvector, var_93_string); // 0x47e NEW_2
	var_94_int = 512332; // 0x480 PushI
	SetMessage(var_94_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_95_int = 512333; // 0x485 PushI
	var_96_int = 13493; // 0x486 PushI
	var_97_int = 13492; // 0x487 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x488 TObjFunc
	var_98_int = 512337; // 0x48a PushI
	var_99_int = 13497; // 0x48b PushI
	var_100_int = 13496; // 0x48c PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x48d TObjFunc
	return 0; // 0x48f Return
	
Label_1168:
	var_101_int = 13497; // 0x490 PushI
	var_102_bool = var_41_bool == var_101_int; // 0x491 Eq
	if(var_102_bool == 0) goto Label_1186; // 0x492 JumpB
	var_103_string = ""; // 0x493 PushV
	var_103_string = "Grin"; // 0x494 MovS
	func_1064(var_42_cvector, var_103_string); // 0x495 NEW_2
	var_104_int = 512338; // 0x497 PushI
	SetMessage(var_104_int); // 0x498 TObjFunc
	ClearReplies(); // 0x49a TObjFunc
	var_105_int = 512339; // 0x49c PushI
	var_106_int = 13499; // 0x49d PushI
	var_107_int = 13498; // 0x49e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x49f TObjFunc
	return 0; // 0x4a1 Return
	
Label_1186:
	var_108_int = 13499; // 0x4a2 PushI
	var_109_bool = var_41_bool == var_108_int; // 0x4a3 Eq
	if(var_109_bool == 0) goto Label_1209; // 0x4a4 JumpB
	var_110_string = ""; // 0x4a5 PushV
	var_110_string = "Neutral"; // 0x4a6 MovS
	func_1064(var_42_cvector, var_110_string); // 0x4a7 NEW_2
	var_111_int = 512340; // 0x4a9 PushI
	SetMessage(var_111_int); // 0x4aa TObjFunc
	ClearReplies(); // 0x4ac TObjFunc
	var_112_int = 512341; // 0x4ae PushI
	var_113_int = -1; // 0x4af PushI
	var_114_int = 13500; // 0x4b0 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x4b1 TObjFunc
	var_115_int = 512342; // 0x4b3 PushI
	var_116_int = 13502; // 0x4b4 PushI
	var_117_int = 13501; // 0x4b5 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x4b6 TObjFunc
	return 0; // 0x4b8 Return
	
Label_1209:
	var_118_int = 13502; // 0x4b9 PushI
	var_119_bool = var_41_bool == var_118_int; // 0x4ba Eq
	if(var_119_bool == 0) goto Label_1227; // 0x4bb JumpB
	var_120_string = ""; // 0x4bc PushV
	var_120_string = "Neutral"; // 0x4bd MovS
	func_1064(var_42_cvector, var_120_string); // 0x4be NEW_2
	var_121_int = 512343; // 0x4c0 PushI
	SetMessage(var_121_int); // 0x4c1 TObjFunc
	ClearReplies(); // 0x4c3 TObjFunc
	var_122_int = 512344; // 0x4c5 PushI
	var_123_int = -1; // 0x4c6 PushI
	var_124_int = 13503; // 0x4c7 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x4c8 TObjFunc
	return 0; // 0x4ca Return
	
Label_1227:
	var_125_int = 13493; // 0x4cb PushI
	var_126_bool = var_41_bool == var_125_int; // 0x4cc Eq
	if(var_126_bool == 0) goto Label_1245; // 0x4cd JumpB
	var_127_string = ""; // 0x4ce PushV
	var_127_string = "Grin"; // 0x4cf MovS
	func_1064(var_42_cvector, var_127_string); // 0x4d0 NEW_2
	var_128_int = 512334; // 0x4d2 PushI
	SetMessage(var_128_int); // 0x4d3 TObjFunc
	ClearReplies(); // 0x4d5 TObjFunc
	var_129_int = 512335; // 0x4d7 PushI
	var_130_int = 13504; // 0x4d8 PushI
	var_131_int = 13494; // 0x4d9 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x4da TObjFunc
	return 0; // 0x4dc Return
	
Label_1245:
	var_132_int = 13504; // 0x4dd PushI
	var_133_bool = var_41_bool == var_132_int; // 0x4de Eq
	if(var_133_bool == 0) goto Label_1263; // 0x4df JumpB
	var_134_string = ""; // 0x4e0 PushV
	var_134_string = "Grin"; // 0x4e1 MovS
	func_1064(var_42_cvector, var_134_string); // 0x4e2 NEW_2
	var_135_int = 512345; // 0x4e4 PushI
	SetMessage(var_135_int); // 0x4e5 TObjFunc
	ClearReplies(); // 0x4e7 TObjFunc
	var_136_int = 512346; // 0x4e9 PushI
	var_137_int = 13506; // 0x4ea PushI
	var_138_int = 13505; // 0x4eb PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x4ec TObjFunc
	return 0; // 0x4ee Return
	
Label_1263:
	var_139_int = 13506; // 0x4ef PushI
	var_140_bool = var_41_bool == var_139_int; // 0x4f0 Eq
	if(var_140_bool == 0) goto Label_1281; // 0x4f1 JumpB
	var_141_string = ""; // 0x4f2 PushV
	var_141_string = "Grin"; // 0x4f3 MovS
	func_1064(var_42_cvector, var_141_string); // 0x4f4 NEW_2
	var_142_int = 512347; // 0x4f6 PushI
	SetMessage(var_142_int); // 0x4f7 TObjFunc
	ClearReplies(); // 0x4f9 TObjFunc
	var_143_int = 512348; // 0x4fb PushI
	var_144_int = -1; // 0x4fc PushI
	var_145_int = 13507; // 0x4fd PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x4fe TObjFunc
	return 0; // 0x500 Return
	
Label_1281:
	var_3_string = 1; // 0x501 TMovB
	var_146_bool = 0; // 0x502 PushV
	func_4119(var_146_bool); // 0x503 NEW_2
	if(var_146_bool == 0) goto Label_1289; // 0x505 JumpB
	lshStopAnimation(); // 0x506 Func
	goto Label_1291; // 0x508 Jump
	
Label_1291:
	return 0; // 0x50b Return
	
Label_1289:
	StopAnimation(); // 0x509 Func
	
Label_1293:
	return 0; // 0x50d Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x606 PushI
	if(var_43_int == 0) goto Label_2169; // 0x607 JumpB
	func_4020(); // 0x609 NEW_2
	var_45_int = 15289; // 0x60b PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x60c Eq
	if(var_46_bool == 0) goto Label_1555; // 0x60d JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x60e PushV
	var_47_object = var_1_object; // 0x60f MovT
	var_48_object = var_0_object; // 0x610 MovT
	func_4230(); // 0x611 NEW_2
	
Label_1555:
	var_74_int = 15310; // 0x613 PushI
	var_75_bool = var_42_cvector == var_74_int; // 0x614 Eq
	if(var_75_bool == 0) goto Label_1578; // 0x615 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x616 PushV
	var_76_object = var_1_object; // 0x617 MovT
	var_77_object = var_0_object; // 0x618 MovT
	func_4187(); // 0x619 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x61b PushV
	var_80_object = var_1_object; // 0x61c MovT
	var_81_object = var_0_object; // 0x61d MovT
	func_4239(); // 0x61e NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x620 PushV
	var_86_object = var_1_object; // 0x621 MovT
	var_87_object = var_0_object; // 0x622 MovT
	func_4141(); // 0x623 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0x625 PushV
	var_94_object = var_1_object; // 0x626 MovT
	var_95_object = var_0_object; // 0x627 MovT
	func_4247(); // 0x628 NEW_2
	
Label_1578:
	var_107_int = 40764; // 0x62a PushI
	var_108_bool = var_42_cvector == var_107_int; // 0x62b Eq
	if(var_108_bool == 0) goto Label_1586; // 0x62c JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x62d PushV
	var_109_object = var_1_object; // 0x62e MovT
	var_110_object = var_0_object; // 0x62f MovT
	func_4181(); // 0x630 NEW_2
	
Label_1586:
	var_113_int = 40789; // 0x632 PushI
	var_114_bool = var_42_cvector == var_113_int; // 0x633 Eq
	if(var_114_bool == 0) goto Label_1599; // 0x634 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x635 PushV
	var_115_object = var_1_object; // 0x636 MovT
	var_116_object = var_0_object; // 0x637 MovT
	func_4148(); // 0x638 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x63a PushV
	var_127_object = var_1_object; // 0x63b MovT
	var_128_object = var_0_object; // 0x63c MovT
	func_4165(); // 0x63d NEW_2
	
Label_1599:
	var_159_int = 40790; // 0x63f PushI
	var_160_bool = var_42_cvector == var_159_int; // 0x640 Eq
	if(var_160_bool == 0) goto Label_1612; // 0x641 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x642 PushV
	var_161_object = var_1_object; // 0x643 MovT
	var_162_object = var_0_object; // 0x644 MovT
	func_4148(); // 0x645 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x647 PushV
	var_163_object = var_1_object; // 0x648 MovT
	var_164_object = var_0_object; // 0x649 MovT
	func_4165(); // 0x64a NEW_2
	
Label_1612:
	var_165_int = 40787; // 0x64c PushI
	var_166_bool = var_42_cvector == var_165_int; // 0x64d Eq
	if(var_166_bool == 0) goto Label_1625; // 0x64e JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x64f PushV
	var_167_object = var_1_object; // 0x650 MovT
	var_168_object = var_0_object; // 0x651 MovT
	func_4148(); // 0x652 NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x654 PushV
	var_169_object = var_1_object; // 0x655 MovT
	var_170_object = var_0_object; // 0x656 MovT
	func_4165(); // 0x657 NEW_2
	
Label_1625:
	var_171_int = 15276; // 0x659 PushI
	var_172_bool = var_41_bool == var_171_int; // 0x65a Eq
	if(var_172_bool == 0) goto Label_1734; // 0x65b JumpB
	var_173_bool = 0; // 0x65c PushV
	var_173_bool = 0; // 0x65d MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x65e PushV
	var_175_object = var_1_object; // 0x65f MovT
	func_4345(var_175_object); // 0x660 NEW_2
	if(var_174_bool == 0) goto Label_1641; // 0x662 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x663 PushV
	var_181_object = var_1_object; // 0x664 MovT
	func_4357(var_181_object); // 0x665 NEW_2
	if(var_180_bool == 0) goto Label_1641; // 0x667 JumpB
	var_173_bool = 1; // 0x668 MovB
	
Label_1641:
	if(var_173_bool == 0) goto Label_1662; // 0x669 JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x66a PushV
	var_186_object = var_1_object; // 0x66b MovT
	var_187_object = var_0_object; // 0x66c MovT
	func_4224(); // 0x66d NEW_2
	var_190_string = ""; // 0x66f PushV
	var_190_string = "Neutral"; // 0x670 MovS
	func_1519(var_42_cvector, var_190_string); // 0x671 NEW_2
	var_207_int = 514041; // 0x673 PushI
	SetMessage(var_207_int); // 0x674 TObjFunc
	ClearReplies(); // 0x676 TObjFunc
	var_208_int = 514042; // 0x678 PushI
	var_209_int = 15278; // 0x679 PushI
	var_210_int = 15277; // 0x67a PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x67b TObjFunc
	return 0; // 0x67d Return
	
Label_1662:
	var_211_string = ""; // 0x67e PushV
	var_211_string = "Suspicion"; // 0x67f MovS
	func_1519(var_42_cvector, var_211_string); // 0x680 NEW_2
	var_212_int = 514063; // 0x682 PushI
	SetMessage(var_212_int); // 0x683 TObjFunc
	ClearReplies(); // 0x685 TObjFunc
	var_213_bool = 0; // 0x687 PushV
	var_213_bool = 0; // 0x688 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x689 PushV
	var_215_object = var_1_object; // 0x68a MovT
	func_4381(var_214_bool, var_215_object); // 0x68b NEW_2
	if(var_214_bool == 0) goto Label_1684; // 0x68d JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x68e PushV
	var_224_object = var_1_object; // 0x68f MovT
	func_4369(var_224_object); // 0x690 NEW_2
	if(var_223_bool == 0) goto Label_1684; // 0x692 JumpB
	var_213_bool = 1; // 0x693 MovB
	
Label_1684:
	if(var_213_bool == 0) goto Label_1690; // 0x694 JumpB
	var_229_int = 514068; // 0x695 PushI
	var_230_int = 40760; // 0x696 PushI
	var_231_int = 15305; // 0x697 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x698 TObjFunc
	
Label_1690:
	var_232_bool = 0; // 0x69a PushV
	var_232_bool = 0; // 0x69b MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x69c PushV
	var_234_object = var_1_object; // 0x69d MovT
	func_4391(var_233_bool, var_234_object); // 0x69e NEW_2
	if(var_233_bool == 0) goto Label_1703; // 0x6a0 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x6a1 PushV
	var_246_object = var_1_object; // 0x6a2 MovT
	func_4369(var_246_object); // 0x6a3 NEW_2
	if(var_245_bool == 0) goto Label_1703; // 0x6a5 JumpB
	var_232_bool = 1; // 0x6a6 MovB
	
Label_1703:
	if(var_232_bool == 0) goto Label_1709; // 0x6a7 JumpB
	var_247_int = 514069; // 0x6a8 PushI
	var_248_int = 15307; // 0x6a9 PushI
	var_249_int = 15306; // 0x6aa PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x6ab TObjFunc
	
Label_1709:
	var_250_bool = 0; // 0x6ad PushV
	var_250_bool = 0; // 0x6ae MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x6af PushV
	var_252_object = var_1_object; // 0x6b0 MovT
	func_4292(var_252_object); // 0x6b1 NEW_2
	if(var_251_bool == 0) goto Label_1722; // 0x6b3 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x6b4 PushV
	var_258_object = var_1_object; // 0x6b5 MovT
	func_4304(var_258_object); // 0x6b6 NEW_2
	if(var_257_bool == 0) goto Label_1722; // 0x6b8 JumpB
	var_250_bool = 1; // 0x6b9 MovB
	
Label_1722:
	if(var_250_bool == 0) goto Label_1728; // 0x6ba JumpB
	var_263_int = 538835; // 0x6bb PushI
	var_264_int = 40765; // 0x6bc PushI
	var_265_int = 40764; // 0x6bd PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x6be TObjFunc
	
Label_1728:
	var_266_int = 514064; // 0x6c0 PushI
	var_267_int = -1; // 0x6c1 PushI
	var_268_int = 15300; // 0x6c2 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_269_int = 40765; // 0x6c6 PushI
	var_270_bool = var_41_bool == var_269_int; // 0x6c7 Eq
	if(var_270_bool == 0) goto Label_1762; // 0x6c8 JumpB
	var_271_string = ""; // 0x6c9 PushV
	var_271_string = "Neutral"; // 0x6ca MovS
	func_1519(var_42_cvector, var_271_string); // 0x6cb NEW_2
	var_272_int = 538836; // 0x6cd PushI
	SetMessage(var_272_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_273_int = 538837; // 0x6d2 PushI
	var_274_int = 40775; // 0x6d3 PushI
	var_275_int = 40766; // 0x6d4 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x6d5 TObjFunc
	var_276_int = 538838; // 0x6d7 PushI
	var_277_int = 40774; // 0x6d8 PushI
	var_278_int = 40767; // 0x6d9 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x6da TObjFunc
	var_279_int = 538839; // 0x6dc PushI
	var_280_int = 40769; // 0x6dd PushI
	var_281_int = 40768; // 0x6de PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x6df TObjFunc
	return 0; // 0x6e1 Return
	
Label_1762:
	var_282_int = 40769; // 0x6e2 PushI
	var_283_bool = var_41_bool == var_282_int; // 0x6e3 Eq
	if(var_283_bool == 0) goto Label_1780; // 0x6e4 JumpB
	var_284_string = ""; // 0x6e5 PushV
	var_284_string = "Neutral"; // 0x6e6 MovS
	func_1519(var_42_cvector, var_284_string); // 0x6e7 NEW_2
	var_285_int = 538840; // 0x6e9 PushI
	SetMessage(var_285_int); // 0x6ea TObjFunc
	ClearReplies(); // 0x6ec TObjFunc
	var_286_int = 538841; // 0x6ee PushI
	var_287_int = 40773; // 0x6ef PushI
	var_288_int = 40772; // 0x6f0 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_289_int = 40773; // 0x6f4 PushI
	var_290_bool = var_41_bool == var_289_int; // 0x6f5 Eq
	if(var_290_bool == 0) goto Label_1798; // 0x6f6 JumpB
	var_291_string = ""; // 0x6f7 PushV
	var_291_string = "Neutral"; // 0x6f8 MovS
	func_1519(var_42_cvector, var_291_string); // 0x6f9 NEW_2
	var_292_int = 538842; // 0x6fb PushI
	SetMessage(var_292_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_293_int = 538847; // 0x700 PushI
	var_294_int = 40780; // 0x701 PushI
	var_295_int = 40779; // 0x702 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_296_int = 40774; // 0x706 PushI
	var_297_bool = var_41_bool == var_296_int; // 0x707 Eq
	if(var_297_bool == 0) goto Label_1821; // 0x708 JumpB
	var_298_string = ""; // 0x709 PushV
	var_298_string = "Neutral"; // 0x70a MovS
	func_1519(var_42_cvector, var_298_string); // 0x70b NEW_2
	var_299_int = 538843; // 0x70d PushI
	SetMessage(var_299_int); // 0x70e TObjFunc
	ClearReplies(); // 0x710 TObjFunc
	var_300_int = 538846; // 0x712 PushI
	var_301_int = 40769; // 0x713 PushI
	var_302_int = 40777; // 0x714 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x715 TObjFunc
	var_303_int = 538849; // 0x717 PushI
	var_304_int = 40780; // 0x718 PushI
	var_305_int = 40781; // 0x719 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x71a TObjFunc
	return 0; // 0x71c Return
	
Label_1821:
	var_306_int = 40775; // 0x71d PushI
	var_307_bool = var_41_bool == var_306_int; // 0x71e Eq
	if(var_307_bool == 0) goto Label_1839; // 0x71f JumpB
	var_308_string = ""; // 0x720 PushV
	var_308_string = "Neutral"; // 0x721 MovS
	func_1519(var_42_cvector, var_308_string); // 0x722 NEW_2
	var_309_int = 538844; // 0x724 PushI
	SetMessage(var_309_int); // 0x725 TObjFunc
	ClearReplies(); // 0x727 TObjFunc
	var_310_int = 538845; // 0x729 PushI
	var_311_int = 40780; // 0x72a PushI
	var_312_int = 40776; // 0x72b PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x72c TObjFunc
	return 0; // 0x72e Return
	
Label_1839:
	var_313_int = 40780; // 0x72f PushI
	var_314_bool = var_41_bool == var_313_int; // 0x730 Eq
	if(var_314_bool == 0) goto Label_1857; // 0x731 JumpB
	var_315_string = ""; // 0x732 PushV
	var_315_string = "Questioning"; // 0x733 MovS
	func_1519(var_42_cvector, var_315_string); // 0x734 NEW_2
	var_316_int = 538848; // 0x736 PushI
	SetMessage(var_316_int); // 0x737 TObjFunc
	ClearReplies(); // 0x739 TObjFunc
	var_317_int = 538850; // 0x73b PushI
	var_318_int = 40783; // 0x73c PushI
	var_319_int = 40782; // 0x73d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x73e TObjFunc
	return 0; // 0x740 Return
	
Label_1857:
	var_320_int = 40783; // 0x741 PushI
	var_321_bool = var_41_bool == var_320_int; // 0x742 Eq
	if(var_321_bool == 0) goto Label_1880; // 0x743 JumpB
	var_322_string = ""; // 0x744 PushV
	var_322_string = "Neutral"; // 0x745 MovS
	func_1519(var_42_cvector, var_322_string); // 0x746 NEW_2
	var_323_int = 538851; // 0x748 PushI
	SetMessage(var_323_int); // 0x749 TObjFunc
	ClearReplies(); // 0x74b TObjFunc
	var_324_int = 538852; // 0x74d PushI
	var_325_int = 40788; // 0x74e PushI
	var_326_int = 40786; // 0x74f PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x750 TObjFunc
	var_327_int = 538853; // 0x752 PushI
	var_328_int = -1; // 0x753 PushI
	var_329_int = 40787; // 0x754 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x755 TObjFunc
	return 0; // 0x757 Return
	
Label_1880:
	var_330_int = 40788; // 0x758 PushI
	var_331_bool = var_41_bool == var_330_int; // 0x759 Eq
	if(var_331_bool == 0) goto Label_1903; // 0x75a JumpB
	var_332_string = ""; // 0x75b PushV
	var_332_string = "Neutral"; // 0x75c MovS
	func_1519(var_42_cvector, var_332_string); // 0x75d NEW_2
	var_333_int = 538854; // 0x75f PushI
	SetMessage(var_333_int); // 0x760 TObjFunc
	ClearReplies(); // 0x762 TObjFunc
	var_334_int = 538855; // 0x764 PushI
	var_335_int = -1; // 0x765 PushI
	var_336_int = 40789; // 0x766 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x767 TObjFunc
	var_337_int = 538856; // 0x769 PushI
	var_338_int = -1; // 0x76a PushI
	var_339_int = 40790; // 0x76b PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_340_int = 15307; // 0x76f PushI
	var_341_bool = var_41_bool == var_340_int; // 0x770 Eq
	if(var_341_bool == 0) goto Label_1921; // 0x771 JumpB
	var_342_string = ""; // 0x772 PushV
	var_342_string = "Suspicion"; // 0x773 MovS
	func_1519(var_42_cvector, var_342_string); // 0x774 NEW_2
	var_343_int = 514070; // 0x776 PushI
	SetMessage(var_343_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_344_int = 514071; // 0x77b PushI
	var_345_int = -1; // 0x77c PushI
	var_346_int = 15308; // 0x77d PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x77e TObjFunc
	return 0; // 0x780 Return
	
Label_1921:
	var_347_int = 40760; // 0x781 PushI
	var_348_bool = var_41_bool == var_347_int; // 0x782 Eq
	if(var_348_bool == 0) goto Label_1939; // 0x783 JumpB
	var_349_string = ""; // 0x784 PushV
	var_349_string = "Suspicion"; // 0x785 MovS
	func_1519(var_42_cvector, var_349_string); // 0x786 NEW_2
	var_350_int = 538831; // 0x788 PushI
	SetMessage(var_350_int); // 0x789 TObjFunc
	ClearReplies(); // 0x78b TObjFunc
	var_351_int = 538832; // 0x78d PushI
	var_352_int = 40762; // 0x78e PushI
	var_353_int = 40761; // 0x78f PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_354_int = 40762; // 0x793 PushI
	var_355_bool = var_41_bool == var_354_int; // 0x794 Eq
	if(var_355_bool == 0) goto Label_1957; // 0x795 JumpB
	var_356_string = ""; // 0x796 PushV
	var_356_string = "Grin"; // 0x797 MovS
	func_1519(var_42_cvector, var_356_string); // 0x798 NEW_2
	var_357_int = 538833; // 0x79a PushI
	SetMessage(var_357_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_358_int = 538834; // 0x79f PushI
	var_359_int = 15309; // 0x7a0 PushI
	var_360_int = 40763; // 0x7a1 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x7a2 TObjFunc
	return 0; // 0x7a4 Return
	
Label_1957:
	var_361_int = 15309; // 0x7a5 PushI
	var_362_bool = var_41_bool == var_361_int; // 0x7a6 Eq
	if(var_362_bool == 0) goto Label_1975; // 0x7a7 JumpB
	var_363_string = ""; // 0x7a8 PushV
	var_363_string = "Neutral"; // 0x7a9 MovS
	func_1519(var_42_cvector, var_363_string); // 0x7aa NEW_2
	var_364_int = 514072; // 0x7ac PushI
	SetMessage(var_364_int); // 0x7ad TObjFunc
	ClearReplies(); // 0x7af TObjFunc
	var_365_int = 514073; // 0x7b1 PushI
	var_366_int = -1; // 0x7b2 PushI
	var_367_int = 15310; // 0x7b3 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x7b4 TObjFunc
	return 0; // 0x7b6 Return
	
Label_1975:
	var_368_int = 15278; // 0x7b7 PushI
	var_369_bool = var_41_bool == var_368_int; // 0x7b8 Eq
	if(var_369_bool == 0) goto Label_1998; // 0x7b9 JumpB
	var_370_string = ""; // 0x7ba PushV
	var_370_string = "Neutral"; // 0x7bb MovS
	func_1519(var_42_cvector, var_370_string); // 0x7bc NEW_2
	var_371_int = 514043; // 0x7be PushI
	SetMessage(var_371_int); // 0x7bf TObjFunc
	ClearReplies(); // 0x7c1 TObjFunc
	var_372_int = 514044; // 0x7c3 PushI
	var_373_int = 15280; // 0x7c4 PushI
	var_374_int = 15279; // 0x7c5 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x7c6 TObjFunc
	var_375_int = 538829; // 0x7c8 PushI
	var_376_int = 15280; // 0x7c9 PushI
	var_377_int = 40756; // 0x7ca PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x7cb TObjFunc
	return 0; // 0x7cd Return
	
Label_1998:
	var_378_int = 15280; // 0x7ce PushI
	var_379_bool = var_41_bool == var_378_int; // 0x7cf Eq
	if(var_379_bool == 0) goto Label_2016; // 0x7d0 JumpB
	var_380_string = ""; // 0x7d1 PushV
	var_380_string = "Neutral"; // 0x7d2 MovS
	func_1519(var_42_cvector, var_380_string); // 0x7d3 NEW_2
	var_381_int = 514045; // 0x7d5 PushI
	SetMessage(var_381_int); // 0x7d6 TObjFunc
	ClearReplies(); // 0x7d8 TObjFunc
	var_382_int = 514046; // 0x7da PushI
	var_383_int = 15282; // 0x7db PushI
	var_384_int = 15281; // 0x7dc PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x7dd TObjFunc
	return 0; // 0x7df Return
	
Label_2016:
	var_385_int = 15282; // 0x7e0 PushI
	var_386_bool = var_41_bool == var_385_int; // 0x7e1 Eq
	if(var_386_bool == 0) goto Label_2039; // 0x7e2 JumpB
	var_387_string = ""; // 0x7e3 PushV
	var_387_string = "Neutral"; // 0x7e4 MovS
	func_1519(var_42_cvector, var_387_string); // 0x7e5 NEW_2
	var_388_int = 514047; // 0x7e7 PushI
	SetMessage(var_388_int); // 0x7e8 TObjFunc
	ClearReplies(); // 0x7ea TObjFunc
	var_389_int = 514048; // 0x7ec PushI
	var_390_int = 15284; // 0x7ed PushI
	var_391_int = 15283; // 0x7ee PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x7ef TObjFunc
	var_392_int = 514060; // 0x7f1 PushI
	var_393_int = 15297; // 0x7f2 PushI
	var_394_int = 15296; // 0x7f3 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x7f4 TObjFunc
	return 0; // 0x7f6 Return
	
Label_2039:
	var_395_int = 15297; // 0x7f7 PushI
	var_396_bool = var_41_bool == var_395_int; // 0x7f8 Eq
	if(var_396_bool == 0) goto Label_2062; // 0x7f9 JumpB
	var_397_string = ""; // 0x7fa PushV
	var_397_string = "Neutral"; // 0x7fb MovS
	func_1519(var_42_cvector, var_397_string); // 0x7fc NEW_2
	var_398_int = 514061; // 0x7fe PushI
	SetMessage(var_398_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_399_int = 514062; // 0x803 PushI
	var_400_int = 15286; // 0x804 PushI
	var_401_int = 15298; // 0x805 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x806 TObjFunc
	var_402_int = 538830; // 0x808 PushI
	var_403_int = 15286; // 0x809 PushI
	var_404_int = 40758; // 0x80a PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x80b TObjFunc
	return 0; // 0x80d Return
	
Label_2062:
	var_405_int = 15284; // 0x80e PushI
	var_406_bool = var_41_bool == var_405_int; // 0x80f Eq
	if(var_406_bool == 0) goto Label_2085; // 0x810 JumpB
	var_407_string = ""; // 0x811 PushV
	var_407_string = "Questioning"; // 0x812 MovS
	func_1519(var_42_cvector, var_407_string); // 0x813 NEW_2
	var_408_int = 514049; // 0x815 PushI
	SetMessage(var_408_int); // 0x816 TObjFunc
	ClearReplies(); // 0x818 TObjFunc
	var_409_int = 514050; // 0x81a PushI
	var_410_int = 15286; // 0x81b PushI
	var_411_int = 15285; // 0x81c PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x81d TObjFunc
	var_412_int = 514055; // 0x81f PushI
	var_413_int = 15291; // 0x820 PushI
	var_414_int = 15290; // 0x821 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x822 TObjFunc
	return 0; // 0x824 Return
	
Label_2085:
	var_415_int = 15291; // 0x825 PushI
	var_416_bool = var_41_bool == var_415_int; // 0x826 Eq
	if(var_416_bool == 0) goto Label_2103; // 0x827 JumpB
	var_417_string = ""; // 0x828 PushV
	var_417_string = "Questioning"; // 0x829 MovS
	func_1519(var_42_cvector, var_417_string); // 0x82a NEW_2
	var_418_int = 514056; // 0x82c PushI
	SetMessage(var_418_int); // 0x82d TObjFunc
	ClearReplies(); // 0x82f TObjFunc
	var_419_int = 514057; // 0x831 PushI
	var_420_int = 15293; // 0x832 PushI
	var_421_int = 15292; // 0x833 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x834 TObjFunc
	return 0; // 0x836 Return
	
Label_2103:
	var_422_int = 15293; // 0x837 PushI
	var_423_bool = var_41_bool == var_422_int; // 0x838 Eq
	if(var_423_bool == 0) goto Label_2121; // 0x839 JumpB
	var_424_string = ""; // 0x83a PushV
	var_424_string = "Questioning"; // 0x83b MovS
	func_1519(var_42_cvector, var_424_string); // 0x83c NEW_2
	var_425_int = 514058; // 0x83e PushI
	SetMessage(var_425_int); // 0x83f TObjFunc
	ClearReplies(); // 0x841 TObjFunc
	var_426_int = 514059; // 0x843 PushI
	var_427_int = 15286; // 0x844 PushI
	var_428_int = 15294; // 0x845 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x846 TObjFunc
	return 0; // 0x848 Return
	
Label_2121:
	var_429_int = 15286; // 0x849 PushI
	var_430_bool = var_41_bool == var_429_int; // 0x84a Eq
	if(var_430_bool == 0) goto Label_2139; // 0x84b JumpB
	var_431_string = ""; // 0x84c PushV
	var_431_string = "Questioning"; // 0x84d MovS
	func_1519(var_42_cvector, var_431_string); // 0x84e NEW_2
	var_432_int = 514051; // 0x850 PushI
	SetMessage(var_432_int); // 0x851 TObjFunc
	ClearReplies(); // 0x853 TObjFunc
	var_433_int = 514052; // 0x855 PushI
	var_434_int = 15288; // 0x856 PushI
	var_435_int = 15287; // 0x857 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x858 TObjFunc
	return 0; // 0x85a Return
	
Label_2139:
	var_436_int = 15288; // 0x85b PushI
	var_437_bool = var_41_bool == var_436_int; // 0x85c Eq
	if(var_437_bool == 0) goto Label_2157; // 0x85d JumpB
	var_438_string = ""; // 0x85e PushV
	var_438_string = "Grin"; // 0x85f MovS
	func_1519(var_42_cvector, var_438_string); // 0x860 NEW_2
	var_439_int = 514053; // 0x862 PushI
	SetMessage(var_439_int); // 0x863 TObjFunc
	ClearReplies(); // 0x865 TObjFunc
	var_440_int = 514054; // 0x867 PushI
	var_441_int = -1; // 0x868 PushI
	var_442_int = 15289; // 0x869 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x86a TObjFunc
	return 0; // 0x86c Return
	
Label_2157:
	var_3_string = 1; // 0x86d TMovB
	var_443_bool = 0; // 0x86e PushV
	func_4119(var_443_bool); // 0x86f NEW_2
	if(var_443_bool == 0) goto Label_2165; // 0x871 JumpB
	lshStopAnimation(); // 0x872 Func
	goto Label_2167; // 0x874 Jump
	
Label_2167:
	return 0; // 0x877 Return
	
Label_2165:
	StopAnimation(); // 0x875 Func
	
Label_2169:
	return 0; // 0x879 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x91c PushI
	if(var_43_int == 0) goto Label_2436; // 0x91d JumpB
	func_4020(); // 0x91f NEW_2
	var_45_int = 19139; // 0x921 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x922 Eq
	if(var_46_bool == 0) goto Label_2360; // 0x923 JumpB
	var_47_string = ""; // 0x924 PushV
	var_47_string = "Neutral"; // 0x925 MovS
	func_2309(var_42_cvector, var_47_string); // 0x926 NEW_2
	var_64_int = 518006; // 0x928 PushI
	SetMessage(var_64_int); // 0x929 TObjFunc
	ClearReplies(); // 0x92b TObjFunc
	var_65_int = 518007; // 0x92d PushI
	var_66_int = 36191; // 0x92e PushI
	var_67_int = 19140; // 0x92f PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x930 TObjFunc
	var_68_int = 534556; // 0x932 PushI
	var_69_int = 36189; // 0x933 PushI
	var_70_int = 36188; // 0x934 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x935 TObjFunc
	return 0; // 0x937 Return
	
Label_2360:
	var_71_int = 36189; // 0x938 PushI
	var_72_bool = var_41_bool == var_71_int; // 0x939 Eq
	if(var_72_bool == 0) goto Label_2378; // 0x93a JumpB
	var_73_string = ""; // 0x93b PushV
	var_73_string = "Neutral"; // 0x93c MovS
	func_2309(var_42_cvector, var_73_string); // 0x93d NEW_2
	var_74_int = 534557; // 0x93f PushI
	SetMessage(var_74_int); // 0x940 TObjFunc
	ClearReplies(); // 0x942 TObjFunc
	var_75_int = 534558; // 0x944 PushI
	var_76_int = 36195; // 0x945 PushI
	var_77_int = 36190; // 0x946 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_78_int = 36195; // 0x94a PushI
	var_79_bool = var_41_bool == var_78_int; // 0x94b Eq
	if(var_79_bool == 0) goto Label_2406; // 0x94c JumpB
	var_80_string = ""; // 0x94d PushV
	var_80_string = "Neutral"; // 0x94e MovS
	func_2309(var_42_cvector, var_80_string); // 0x94f NEW_2
	var_81_int = 534562; // 0x951 PushI
	SetMessage(var_81_int); // 0x952 TObjFunc
	ClearReplies(); // 0x954 TObjFunc
	var_82_int = 534563; // 0x956 PushI
	var_83_int = -1; // 0x957 PushI
	var_84_int = 36196; // 0x958 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x959 TObjFunc
	var_85_int = 534565; // 0x95b PushI
	var_86_int = -1; // 0x95c PushI
	var_87_int = 36198; // 0x95d PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x95e TObjFunc
	var_88_int = 534564; // 0x960 PushI
	var_89_int = -1; // 0x961 PushI
	var_90_int = 36197; // 0x962 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x963 TObjFunc
	return 0; // 0x965 Return
	
Label_2406:
	var_91_int = 36191; // 0x966 PushI
	var_92_bool = var_41_bool == var_91_int; // 0x967 Eq
	if(var_92_bool == 0) goto Label_2424; // 0x968 JumpB
	var_93_string = ""; // 0x969 PushV
	var_93_string = "Neutral"; // 0x96a MovS
	func_2309(var_42_cvector, var_93_string); // 0x96b NEW_2
	var_94_int = 534559; // 0x96d PushI
	SetMessage(var_94_int); // 0x96e TObjFunc
	ClearReplies(); // 0x970 TObjFunc
	var_95_int = 534560; // 0x972 PushI
	var_96_int = 36189; // 0x973 PushI
	var_97_int = 36192; // 0x974 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x975 TObjFunc
	return 0; // 0x977 Return
	
Label_2424:
	var_3_string = 1; // 0x978 TMovB
	var_98_bool = 0; // 0x979 PushV
	func_4119(var_98_bool); // 0x97a NEW_2
	if(var_98_bool == 0) goto Label_2432; // 0x97c JumpB
	lshStopAnimation(); // 0x97d Func
	goto Label_2434; // 0x97f Jump
	
Label_2434:
	return 0; // 0x982 Return
	
Label_2432:
	StopAnimation(); // 0x980 Func
	
Label_2436:
	return 0; // 0x984 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xa3a PushI
	if(var_43_int == 0) goto Label_2998; // 0xa3b JumpB
	func_4020(); // 0xa3d NEW_2
	var_45_int = 36133; // 0xa3f PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xa40 Eq
	if(var_46_bool == 0) goto Label_2631; // 0xa41 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xa42 PushV
	var_47_object = var_1_object; // 0xa43 MovT
	var_48_object = var_0_object; // 0xa44 MovT
	func_4127(); // 0xa45 NEW_2
	
Label_2631:
	var_80_int = 38442; // 0xa47 PushI
	var_81_bool = var_42_cvector == var_80_int; // 0xa48 Eq
	if(var_81_bool == 0) goto Label_2639; // 0xa49 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0xa4a PushV
	var_82_object = var_1_object; // 0xa4b MovT
	var_83_object = var_0_object; // 0xa4c MovT
	func_4127(); // 0xa4d NEW_2
	
Label_2639:
	var_84_int = 41671; // 0xa4f PushI
	var_85_bool = var_42_cvector == var_84_int; // 0xa50 Eq
	if(var_85_bool == 0) goto Label_2647; // 0xa51 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xa52 PushV
	var_86_object = var_1_object; // 0xa53 MovT
	var_87_object = var_0_object; // 0xa54 MovT
	func_4127(); // 0xa55 NEW_2
	
Label_2647:
	var_88_int = 36126; // 0xa57 PushI
	var_89_bool = var_41_bool == var_88_int; // 0xa58 Eq
	if(var_89_bool == 0) goto Label_2689; // 0xa59 JumpB
	var_90_string = ""; // 0xa5a PushV
	var_90_string = "Suspicion"; // 0xa5b MovS
	func_2595(var_42_cvector, var_90_string); // 0xa5c NEW_2
	var_107_int = 534481; // 0xa5e PushI
	SetMessage(var_107_int); // 0xa5f TObjFunc
	ClearReplies(); // 0xa61 TObjFunc
	var_108_bool = 0; // 0xa63 PushV
	var_108_bool = 0; // 0xa64 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0xa65 PushV
	var_110_object = var_1_object; // 0xa66 MovT
	func_4269(var_110_object); // 0xa67 NEW_2
	if(var_109_bool == 0) goto Label_2672; // 0xa69 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0xa6a PushV
	var_118_object = var_1_object; // 0xa6b MovT
	func_4281(var_117_bool, var_118_object); // 0xa6c NEW_2
	if(var_117_bool == 0) goto Label_2672; // 0xa6e JumpB
	var_108_bool = 1; // 0xa6f MovB
	
Label_2672:
	if(var_108_bool == 0) goto Label_2678; // 0xa70 JumpB
	var_126_int = 534482; // 0xa71 PushI
	var_127_int = 38410; // 0xa72 PushI
	var_128_int = 36127; // 0xa73 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xa74 TObjFunc
	
Label_2678:
	var_129_int = 534489; // 0xa76 PushI
	var_130_int = -1; // 0xa77 PushI
	var_131_int = 36134; // 0xa78 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xa79 TObjFunc
	var_132_int = 536587; // 0xa7b PushI
	var_133_int = -1; // 0xa7c PushI
	var_134_int = 38409; // 0xa7d PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xa7e TObjFunc
	return 0; // 0xa80 Return
	
Label_2689:
	var_135_int = 38410; // 0xa81 PushI
	var_136_bool = var_41_bool == var_135_int; // 0xa82 Eq
	if(var_136_bool == 0) goto Label_2712; // 0xa83 JumpB
	var_137_string = ""; // 0xa84 PushV
	var_137_string = "Suspicion"; // 0xa85 MovS
	func_2595(var_42_cvector, var_137_string); // 0xa86 NEW_2
	var_138_int = 536588; // 0xa88 PushI
	SetMessage(var_138_int); // 0xa89 TObjFunc
	ClearReplies(); // 0xa8b TObjFunc
	var_139_int = 536589; // 0xa8d PushI
	var_140_int = 38412; // 0xa8e PushI
	var_141_int = 38411; // 0xa8f PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xa90 TObjFunc
	var_142_int = 536598; // 0xa92 PushI
	var_143_int = 38421; // 0xa93 PushI
	var_144_int = 38420; // 0xa94 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xa95 TObjFunc
	return 0; // 0xa97 Return
	
Label_2712:
	var_145_int = 38421; // 0xa98 PushI
	var_146_bool = var_41_bool == var_145_int; // 0xa99 Eq
	if(var_146_bool == 0) goto Label_2730; // 0xa9a JumpB
	var_147_string = ""; // 0xa9b PushV
	var_147_string = "Neutral"; // 0xa9c MovS
	func_2595(var_42_cvector, var_147_string); // 0xa9d NEW_2
	var_148_int = 536599; // 0xa9f PushI
	SetMessage(var_148_int); // 0xaa0 TObjFunc
	ClearReplies(); // 0xaa2 TObjFunc
	var_149_int = 536600; // 0xaa4 PushI
	var_150_int = 36128; // 0xaa5 PushI
	var_151_int = 38422; // 0xaa6 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0xaa7 TObjFunc
	return 0; // 0xaa9 Return
	
Label_2730:
	var_152_int = 38412; // 0xaaa PushI
	var_153_bool = var_41_bool == var_152_int; // 0xaab Eq
	if(var_153_bool == 0) goto Label_2753; // 0xaac JumpB
	var_154_string = ""; // 0xaad PushV
	var_154_string = "Grin"; // 0xaae MovS
	func_2595(var_42_cvector, var_154_string); // 0xaaf NEW_2
	var_155_int = 536590; // 0xab1 PushI
	SetMessage(var_155_int); // 0xab2 TObjFunc
	ClearReplies(); // 0xab4 TObjFunc
	var_156_int = 536591; // 0xab6 PushI
	var_157_int = 38414; // 0xab7 PushI
	var_158_int = 38413; // 0xab8 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xab9 TObjFunc
	var_159_int = 536601; // 0xabb PushI
	var_160_int = 38418; // 0xabc PushI
	var_161_int = 38424; // 0xabd PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xabe TObjFunc
	return 0; // 0xac0 Return
	
Label_2753:
	var_162_int = 38414; // 0xac1 PushI
	var_163_bool = var_41_bool == var_162_int; // 0xac2 Eq
	if(var_163_bool == 0) goto Label_2776; // 0xac3 JumpB
	var_164_string = ""; // 0xac4 PushV
	var_164_string = "Grin"; // 0xac5 MovS
	func_2595(var_42_cvector, var_164_string); // 0xac6 NEW_2
	var_165_int = 536592; // 0xac8 PushI
	SetMessage(var_165_int); // 0xac9 TObjFunc
	ClearReplies(); // 0xacb TObjFunc
	var_166_int = 536595; // 0xacd PushI
	var_167_int = 38418; // 0xace PushI
	var_168_int = 38417; // 0xacf PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xad0 TObjFunc
	var_169_int = 539710; // 0xad2 PushI
	var_170_int = 41666; // 0xad3 PushI
	var_171_int = 41668; // 0xad4 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xad5 TObjFunc
	return 0; // 0xad7 Return
	
Label_2776:
	var_172_int = 38418; // 0xad8 PushI
	var_173_bool = var_41_bool == var_172_int; // 0xad9 Eq
	if(var_173_bool == 0) goto Label_2799; // 0xada JumpB
	var_174_string = ""; // 0xadb PushV
	var_174_string = "Grin"; // 0xadc MovS
	func_2595(var_42_cvector, var_174_string); // 0xadd NEW_2
	var_175_int = 536596; // 0xadf PushI
	SetMessage(var_175_int); // 0xae0 TObjFunc
	ClearReplies(); // 0xae2 TObjFunc
	var_176_int = 536610; // 0xae4 PushI
	var_177_int = 38437; // 0xae5 PushI
	var_178_int = 38436; // 0xae6 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xae7 TObjFunc
	var_179_int = 536612; // 0xae9 PushI
	var_180_int = 38437; // 0xaea PushI
	var_181_int = 38438; // 0xaeb PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xaec TObjFunc
	return 0; // 0xaee Return
	
Label_2799:
	var_182_int = 38437; // 0xaef PushI
	var_183_bool = var_41_bool == var_182_int; // 0xaf0 Eq
	if(var_183_bool == 0) goto Label_2822; // 0xaf1 JumpB
	var_184_string = ""; // 0xaf2 PushV
	var_184_string = "Neutral"; // 0xaf3 MovS
	func_2595(var_42_cvector, var_184_string); // 0xaf4 NEW_2
	var_185_int = 536611; // 0xaf6 PushI
	SetMessage(var_185_int); // 0xaf7 TObjFunc
	ClearReplies(); // 0xaf9 TObjFunc
	var_186_int = 536603; // 0xafb PushI
	var_187_int = 36130; // 0xafc PushI
	var_188_int = 38427; // 0xafd PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xafe TObjFunc
	var_189_int = 534484; // 0xb00 PushI
	var_190_int = 36132; // 0xb01 PushI
	var_191_int = 36129; // 0xb02 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xb03 TObjFunc
	return 0; // 0xb05 Return
	
Label_2822:
	var_192_int = 36130; // 0xb06 PushI
	var_193_bool = var_41_bool == var_192_int; // 0xb07 Eq
	if(var_193_bool == 0) goto Label_2845; // 0xb08 JumpB
	var_194_string = ""; // 0xb09 PushV
	var_194_string = "Doubt"; // 0xb0a MovS
	func_2595(var_42_cvector, var_194_string); // 0xb0b NEW_2
	var_195_int = 534485; // 0xb0d PushI
	SetMessage(var_195_int); // 0xb0e TObjFunc
	ClearReplies(); // 0xb10 TObjFunc
	var_196_int = 534486; // 0xb12 PushI
	var_197_int = 36132; // 0xb13 PushI
	var_198_int = 36131; // 0xb14 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xb15 TObjFunc
	var_199_int = 536605; // 0xb17 PushI
	var_200_int = 41666; // 0xb18 PushI
	var_201_int = 38430; // 0xb19 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xb1a TObjFunc
	return 0; // 0xb1c Return
	
Label_2845:
	var_202_int = 41666; // 0xb1d PushI
	var_203_bool = var_41_bool == var_202_int; // 0xb1e Eq
	if(var_203_bool == 0) goto Label_2868; // 0xb1f JumpB
	var_204_string = ""; // 0xb20 PushV
	var_204_string = "Doubt"; // 0xb21 MovS
	func_2595(var_42_cvector, var_204_string); // 0xb22 NEW_2
	var_205_int = 539708; // 0xb24 PushI
	SetMessage(var_205_int); // 0xb25 TObjFunc
	ClearReplies(); // 0xb27 TObjFunc
	var_206_int = 539709; // 0xb29 PushI
	var_207_int = 38431; // 0xb2a PushI
	var_208_int = 41667; // 0xb2b PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xb2c TObjFunc
	var_209_int = 536593; // 0xb2e PushI
	var_210_int = 38416; // 0xb2f PushI
	var_211_int = 38415; // 0xb30 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xb31 TObjFunc
	return 0; // 0xb33 Return
	
Label_2868:
	var_212_int = 38416; // 0xb34 PushI
	var_213_bool = var_41_bool == var_212_int; // 0xb35 Eq
	if(var_213_bool == 0) goto Label_2886; // 0xb36 JumpB
	var_214_string = ""; // 0xb37 PushV
	var_214_string = "Neutral"; // 0xb38 MovS
	func_2595(var_42_cvector, var_214_string); // 0xb39 NEW_2
	var_215_int = 536594; // 0xb3b PushI
	SetMessage(var_215_int); // 0xb3c TObjFunc
	ClearReplies(); // 0xb3e TObjFunc
	var_216_int = 539711; // 0xb40 PushI
	var_217_int = 36132; // 0xb41 PushI
	var_218_int = 41669; // 0xb42 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xb43 TObjFunc
	return 0; // 0xb45 Return
	
Label_2886:
	var_219_int = 38431; // 0xb46 PushI
	var_220_bool = var_41_bool == var_219_int; // 0xb47 Eq
	if(var_220_bool == 0) goto Label_2909; // 0xb48 JumpB
	var_221_string = ""; // 0xb49 PushV
	var_221_string = "Neutral"; // 0xb4a MovS
	func_2595(var_42_cvector, var_221_string); // 0xb4b NEW_2
	var_222_int = 536606; // 0xb4d PushI
	SetMessage(var_222_int); // 0xb4e TObjFunc
	ClearReplies(); // 0xb50 TObjFunc
	var_223_int = 536607; // 0xb52 PushI
	var_224_int = 38433; // 0xb53 PushI
	var_225_int = 38432; // 0xb54 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xb55 TObjFunc
	var_226_int = 539712; // 0xb57 PushI
	var_227_int = -1; // 0xb58 PushI
	var_228_int = 41671; // 0xb59 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xb5a TObjFunc
	return 0; // 0xb5c Return
	
Label_2909:
	var_229_int = 38433; // 0xb5d PushI
	var_230_bool = var_41_bool == var_229_int; // 0xb5e Eq
	if(var_230_bool == 0) goto Label_2927; // 0xb5f JumpB
	var_231_string = ""; // 0xb60 PushV
	var_231_string = "Neutral"; // 0xb61 MovS
	func_2595(var_42_cvector, var_231_string); // 0xb62 NEW_2
	var_232_int = 536608; // 0xb64 PushI
	SetMessage(var_232_int); // 0xb65 TObjFunc
	ClearReplies(); // 0xb67 TObjFunc
	var_233_int = 536609; // 0xb69 PushI
	var_234_int = 36128; // 0xb6a PushI
	var_235_int = 38434; // 0xb6b PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xb6c TObjFunc
	return 0; // 0xb6e Return
	
Label_2927:
	var_236_int = 36132; // 0xb6f PushI
	var_237_bool = var_41_bool == var_236_int; // 0xb70 Eq
	if(var_237_bool == 0) goto Label_2945; // 0xb71 JumpB
	var_238_string = ""; // 0xb72 PushV
	var_238_string = "Doubt"; // 0xb73 MovS
	func_2595(var_42_cvector, var_238_string); // 0xb74 NEW_2
	var_239_int = 534487; // 0xb76 PushI
	SetMessage(var_239_int); // 0xb77 TObjFunc
	ClearReplies(); // 0xb79 TObjFunc
	var_240_int = 536597; // 0xb7b PushI
	var_241_int = 36128; // 0xb7c PushI
	var_242_int = 38419; // 0xb7d PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xb7e TObjFunc
	return 0; // 0xb80 Return
	
Label_2945:
	var_243_int = 36128; // 0xb81 PushI
	var_244_bool = var_41_bool == var_243_int; // 0xb82 Eq
	if(var_244_bool == 0) goto Label_2968; // 0xb83 JumpB
	var_245_string = ""; // 0xb84 PushV
	var_245_string = "Neutral"; // 0xb85 MovS
	func_2595(var_42_cvector, var_245_string); // 0xb86 NEW_2
	var_246_int = 534483; // 0xb88 PushI
	SetMessage(var_246_int); // 0xb89 TObjFunc
	ClearReplies(); // 0xb8b TObjFunc
	var_247_int = 534488; // 0xb8d PushI
	var_248_int = -1; // 0xb8e PushI
	var_249_int = 36133; // 0xb8f PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xb90 TObjFunc
	var_250_int = 536613; // 0xb92 PushI
	var_251_int = 38441; // 0xb93 PushI
	var_252_int = 38440; // 0xb94 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xb95 TObjFunc
	return 0; // 0xb97 Return
	
Label_2968:
	var_253_int = 38441; // 0xb98 PushI
	var_254_bool = var_41_bool == var_253_int; // 0xb99 Eq
	if(var_254_bool == 0) goto Label_2986; // 0xb9a JumpB
	var_255_string = ""; // 0xb9b PushV
	var_255_string = "Neutral"; // 0xb9c MovS
	func_2595(var_42_cvector, var_255_string); // 0xb9d NEW_2
	var_256_int = 536614; // 0xb9f PushI
	SetMessage(var_256_int); // 0xba0 TObjFunc
	ClearReplies(); // 0xba2 TObjFunc
	var_257_int = 536615; // 0xba4 PushI
	var_258_int = -1; // 0xba5 PushI
	var_259_int = 38442; // 0xba6 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xba7 TObjFunc
	return 0; // 0xba9 Return
	
Label_2986:
	var_3_string = 1; // 0xbaa TMovB
	var_260_bool = 0; // 0xbab PushV
	func_4119(var_260_bool); // 0xbac NEW_2
	if(var_260_bool == 0) goto Label_2994; // 0xbae JumpB
	lshStopAnimation(); // 0xbaf Func
	goto Label_2996; // 0xbb1 Jump
	
Label_2996:
	return 0; // 0xbb4 Return
	
Label_2994:
	StopAnimation(); // 0xbb2 Func
	
Label_2998:
	return 0; // 0xbb6 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xc5e PushI
	if(var_43_int == 0) goto Label_3257; // 0xc5f JumpB
	func_4020(); // 0xc61 NEW_2
	var_45_int = 36960; // 0xc63 PushI
	var_46_bool = var_41_bool == var_45_int; // 0xc64 Eq
	if(var_46_bool == 0) goto Label_3199; // 0xc65 JumpB
	var_47_string = ""; // 0xc66 PushV
	var_47_string = "Neutral"; // 0xc67 MovS
	func_3143(var_42_cvector, var_47_string); // 0xc68 NEW_2
	var_64_int = 535284; // 0xc6a PushI
	SetMessage(var_64_int); // 0xc6b TObjFunc
	ClearReplies(); // 0xc6d TObjFunc
	var_65_int = 535285; // 0xc6f PushI
	var_66_int = 36962; // 0xc70 PushI
	var_67_int = 36961; // 0xc71 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xc72 TObjFunc
	var_68_int = 535292; // 0xc74 PushI
	var_69_int = -1; // 0xc75 PushI
	var_70_int = 36968; // 0xc76 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xc77 TObjFunc
	var_71_int = 535293; // 0xc79 PushI
	var_72_int = -1; // 0xc7a PushI
	var_73_int = 36969; // 0xc7b PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xc7c TObjFunc
	return 0; // 0xc7e Return
	
Label_3199:
	var_74_int = 36962; // 0xc7f PushI
	var_75_bool = var_41_bool == var_74_int; // 0xc80 Eq
	if(var_75_bool == 0) goto Label_3222; // 0xc81 JumpB
	var_76_string = ""; // 0xc82 PushV
	var_76_string = "Neutral"; // 0xc83 MovS
	func_3143(var_42_cvector, var_76_string); // 0xc84 NEW_2
	var_77_int = 535286; // 0xc86 PushI
	SetMessage(var_77_int); // 0xc87 TObjFunc
	ClearReplies(); // 0xc89 TObjFunc
	var_78_int = 535287; // 0xc8b PushI
	var_79_int = 36964; // 0xc8c PushI
	var_80_int = 36963; // 0xc8d PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xc8e TObjFunc
	var_81_int = 535291; // 0xc90 PushI
	var_82_int = -1; // 0xc91 PushI
	var_83_int = 36967; // 0xc92 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xc93 TObjFunc
	return 0; // 0xc95 Return
	
Label_3222:
	var_84_int = 36964; // 0xc96 PushI
	var_85_bool = var_41_bool == var_84_int; // 0xc97 Eq
	if(var_85_bool == 0) goto Label_3245; // 0xc98 JumpB
	var_86_string = ""; // 0xc99 PushV
	var_86_string = "Neutral"; // 0xc9a MovS
	func_3143(var_42_cvector, var_86_string); // 0xc9b NEW_2
	var_87_int = 535288; // 0xc9d PushI
	SetMessage(var_87_int); // 0xc9e TObjFunc
	ClearReplies(); // 0xca0 TObjFunc
	var_88_int = 535289; // 0xca2 PushI
	var_89_int = -1; // 0xca3 PushI
	var_90_int = 36965; // 0xca4 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xca5 TObjFunc
	var_91_int = 535290; // 0xca7 PushI
	var_92_int = -1; // 0xca8 PushI
	var_93_int = 36966; // 0xca9 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xcaa TObjFunc
	return 0; // 0xcac Return
	
Label_3245:
	var_3_string = 1; // 0xcad TMovB
	var_94_bool = 0; // 0xcae PushV
	func_4119(var_94_bool); // 0xcaf NEW_2
	if(var_94_bool == 0) goto Label_3253; // 0xcb1 JumpB
	lshStopAnimation(); // 0xcb2 Func
	goto Label_3255; // 0xcb4 Jump
	
Label_3255:
	return 0; // 0xcb7 Return
	
Label_3253:
	StopAnimation(); // 0xcb5 Func
	
Label_3257:
	return 0; // 0xcb9 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	var_43_int = 1; // 0xd5c PushI
	if(var_43_int == 0) goto Label_3460; // 0xd5d JumpB
	func_4020(); // 0xd5f NEW_2
	var_45_int = 42551; // 0xd61 PushI
	var_46_bool = var_41_int == var_45_int; // 0xd62 Eq
	if(var_46_bool == 0) goto Label_3448; // 0xd63 JumpB
	var_47_string = ""; // 0xd64 PushV
	var_47_string = "Neutral"; // 0xd65 MovS
	func_3397(var_42_cvector, var_47_string); // 0xd66 NEW_2
	var_64_int = 540542; // 0xd68 PushI
	SetMessage(var_64_int); // 0xd69 TObjFunc
	ClearReplies(); // 0xd6b TObjFunc
	var_65_int = 540543; // 0xd6d PushI
	var_66_int = -1; // 0xd6e PushI
	var_67_int = 42552; // 0xd6f PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xd70 TObjFunc
	var_68_int = 540796; // 0xd72 PushI
	var_69_int = -1; // 0xd73 PushI
	var_70_int = 42845; // 0xd74 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xd75 TObjFunc
	return 0; // 0xd77 Return
	
Label_3448:
	var_3_string = 1; // 0xd78 TMovB
	var_71_bool = 0; // 0xd79 PushV
	func_4119(var_71_bool); // 0xd7a NEW_2
	if(var_71_bool == 0) goto Label_3456; // 0xd7c JumpB
	lshStopAnimation(); // 0xd7d Func
	goto Label_3458; // 0xd7f Jump
	
Label_3458:
	return 0; // 0xd82 Return
	
Label_3456:
	StopAnimation(); // 0xd80 Func
	
Label_3460:
	return 0; // 0xd84 Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_42_int = 10; // 0xdcf PushI
	var_43_bool = var_41_int == var_42_int; // 0xdd0 Eq
	if(var_43_bool == 0) goto Label_3571; // 0xdd1 JumpB
	func_3530(); // 0xdd3 NEW_2
	var_45_bool = 0; // 0xdd5 PushV
	var_45_bool = 0; // 0xdd6 MovB
	var_46_bool = 0; // 0xdd7 PushV
	func_3744(var_46_bool); // 0xdd8 NEW_2
	if(var_46_bool == 0) goto Label_3552; // 0xdda JumpB
	var_49_bool = 0; // 0xddb PushV
	func_3499(var_49_bool); // 0xddc NEW_2
	if(var_49_bool == 0) goto Label_3552; // 0xdde JumpB
	var_45_bool = 1; // 0xddf MovB
	
Label_3552:
	if(var_45_bool == 0) goto Label_3565; // 0xde0 JumpB
	var_66_bool = 0; // 0xde1 PushV
	func_3479(var_66_bool); // 0xde2 NEW_2
	if(var_66_bool == 0) goto Label_3564; // 0xde4 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0xde5 PushV
	var_87_object = Obj(); // 0xde6 PushV
	func_4027(var_87_object); // 0xde7 NEW_2
	var_86_object = var_87_object; // 0xde8 Mov
	func_3894(var_86_object); // 0xdea NEW_2
	
Label_3564:
	goto Label_3571; // 0xdec Jump
	
Label_3571:
	return 0; // 0xdf3 Return
	
Label_3565:
	func_3494(var_41_int); // 0xdee NEW_2
	func_3521(); // 0xdf1 NEW_2
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3712(); // 0xdf5 NEW_2
	func_3530(); // 0xdf8 NEW_2
	lshStopSpeech(); // 0xdfa Func
	lshStopAnimation(); // 0xdfc Func
	StopAsync(); // 0xdfe Func
	Hold(); // 0xe00 Func
	return 0; // 0xe02 Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0(); // 0xe03 Func
	func_3530(); // 0xe06 NEW_2
	var_42_string = ""; // 0xe08 PushV
	var_42_string = "Neutral"; // 0xe09 MovS
	func_3974(var_42_string); // 0xe0a NEW_2
	func_3521(); // 0xe0d NEW_2
	return 0; // 0xe0f Return
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool; // 0xe11 Push
	if(var_42_bool == 0) goto Label_3607; // 0xe12 JumpB
	func_3521(); // 0xe14 NEW_2
	goto Label_3611; // 0xe16 Jump
	
Label_3611:
	return 0; // 0xe1b Return
	
Label_3607:
	var_48_string = ""; // 0xe17 PushV
	var_48_string = "Neutral"; // 0xe18 MovS
	func_3974(var_48_string); // 0xe19 NEW_2
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0; // 0xe1c PushV
	IsOverrideActive(var_43_bool); // 0xe1d Func
	var_44_bool = var_43_bool == 0; // 0xe1f Not
	if(var_44_bool == 0) goto Label_3640; // 0xe20 JumpB
	EventDisable(0); // 0xe21 EventDisable
	func_3712(); // 0xe23 NEW_2
	var_45_bool = 0; var_46_object = Obj(); // 0xe25 PushV
	var_46_object = var_41_object; // 0xe26 Mov
	func_3735(var_46_object); // 0xe27 NEW_2
	EventEnable(0); // 0xe29 EventEnable
	var_59_object = Obj(); // 0xe2a PushV
	var_59_object = var_41_object; // 0xe2b Mov
	func_4590(var_59_object); // 0xe2c NEW_2
	var_837_string = ""; // 0xe2e PushV
	var_837_string = "Neutral"; // 0xe2f MovS
	func_3974(var_837_string); // 0xe30 NEW_2
	func_3530(); // 0xe33 NEW_2
	func_3521(); // 0xe36 NEW_2
	
Label_3640:
	return 2; // 0xe38 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3465(var_40_cvector); // 0xd86 NEW_2
	return 0; // 0xd88 Return
}


func_0(var_0_object, var_296_int, var_297_object)
{
	var_299_object = Obj(); var_300_bool = 0; var_301_int = 0; var_302_bool = 0; var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0; // 0x0 PushV
	var_0_object = var_297_object; // 0x1 TMov
	var_307_bool = 0; var_308_object = Obj(); var_309_float = 0; // 0x2 PushV
	var_308_object = var_297_object; // 0x3 Mov
	var_309_float = 70.0; // 0x4 MovF
	func_3749(var_308_object, var_309_float); // 0x5 NEW_2
	var_310_bool = var_307_bool == 0; // 0x7 Not
	if(var_310_bool == 0) goto Label_11; // 0x8 JumpB
	var_296_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_303_object); // 0xb Func
	var_311_int = 0; // 0xd PushV
	func_4113(var_311_int); // 0xe NEW_2
	SetNPCName(var_311_int); // 0x10 ObjFunc
	var_312_int = 0; // 0x12 PushV
	func_4111(var_312_int); // 0x13 NEW_2
	SetNPCDescription(var_312_int); // 0x15 ObjFunc
	var_313_string = ""; // 0x17 PushV
	func_4115(var_313_string); // 0x18 NEW_2
	SetPhoto(var_313_string); // 0x1a ObjFunc
	var_314_string = ""; // 0x1c PushV
	func_4117(var_314_string); // 0x1d NEW_2
	SetPhoto2(var_314_string); // 0x1f ObjFunc
	var_315_int = 0; // 0x21 PushV
	func_4573(var_315_int); // 0x22 NEW_2
	SetPlayerName(var_315_int); // 0x24 ObjFunc
	var_305_int = -1; // 0x26 MovI
	IsOverrideActive(var_304_bool); // 0x27 Func
	var_316_bool = var_304_bool; // 0x29 Push
	if(var_316_bool == 0) goto Label_45; // 0x2a JumpB
	var_296_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_303_object); // 0x2d Func
	var_317_bool = 0; var_318_object = Obj(); // 0x2f PushV
	var_319_object = Obj(); // 0x30 PushV
	func_4027(var_319_object); // 0x31 NEW_2
	var_318_object = var_319_object; // 0x32 Mov
	func_3836(var_317_bool, var_318_object); // 0x34 NEW_2
	var_320_object = Obj(); var_321_object = Obj(); // 0x36 PushV
	var_320_object = var_297_object; // 0x37 Mov
	var_321_object = var_303_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_306_bool); // 0x3d ObjFunc
	
Label_63:
	var_371_bool = var_306_bool == 0; // 0x3f Not
	if(var_371_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_306_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_372_object = Obj(); // 0x46 PushV
	var_372_object = var_297_object; // 0x47 Mov
	func_3818(); // 0x48 NEW_2
	StopDialog(var_303_object); // 0x4a Func
	GetReturnValue(var_305_int); // 0x4c ObjFunc
	var_296_int = var_305_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4357(var_553_bool)
{
	var_555_int = 0; var_556_string = ""; // 0x1106 PushV
	var_556_string = "ood9Xan1"; // 0x1107 MovS
	func_4043(var_555_int, var_556_string); // 0x1108 NEW_2
	var_557_int = 0; // 0x110a PushI
	var_558_bool = var_555_int == var_557_int; // 0x110b Eq
	if(var_558_bool == 0) goto Label_4367; // 0x110c JumpB
	var_553_bool = 1; // 0x110d MovB
	return 0; // 0x110e Return
	
Label_4367:
	var_553_bool = 0; // 0x110f MovB
	return 0; // 0x1110 Return
}


func_2309(var_2_object, var_238_string)
{
	var_239_bool = 0; // 0x906 PushV
	func_4119(var_239_bool); // 0x907 NEW_2
	var_240_bool = var_239_bool == 0; // 0x909 Not
	if(var_240_bool == 0) goto Label_2316; // 0x90a JumpB
	return 0; // 0x90b Return
	
Label_2316:
	var_241_bool = var_238_string == var_2_object; // 0x90c Eq
	if(var_241_bool == 0) goto Label_2319; // 0x90d JumpB
	return 0; // 0x90e Return
	
Label_2319:
	var_242_string = ""; var_243_bool = 0; // 0x90f PushV
	var_242_string = var_238_string; // 0x910 Mov
	var_244_string = ""; // 0x911 PushS
	var_245_bool = var_238_string == var_244_string; // 0x912 Eq
	if(var_245_bool == 0) goto Label_2326; // 0x913 JumpB
	var_243_bool = 0; // 0x914 MovB
	goto Label_2327; // 0x915 Jump
	
Label_2327:
	func_3990(var_242_string, var_243_bool); // 0x917 NEW_2
	var_2_object = var_238_string; // 0x919 TMov
	return 0; // 0x91a Return
	
Label_2326:
	var_243_bool = 1; // 0x916 MovB
}


func_3080(var_0_object, var_1_object, var_2_object, var_3_string, var_746_object, var_747_object)
{
	var_0_object = var_747_object; // 0xc09 TMov
	var_1_object = var_746_object; // 0xc0a TMov
	var_3_string = 0; // 0xc0b TMovB
	var_752_int = 1; // 0xc0c PushI
	if(var_752_int == 0) goto Label_3113; // 0xc0d JumpB
	var_753_string = ""; // 0xc0e PushV
	var_753_string = "Neutral"; // 0xc0f MovS
	func_3143(var_747_object, var_753_string); // 0xc10 NEW_2
	var_761_int = 535284; // 0xc12 PushI
	SetMessage(var_761_int); // 0xc13 TObjFunc
	ClearReplies(); // 0xc15 TObjFunc
	var_762_int = 535285; // 0xc17 PushI
	var_763_int = 36962; // 0xc18 PushI
	var_764_int = 36961; // 0xc19 PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0xc1a TObjFunc
	var_765_int = 535292; // 0xc1c PushI
	var_766_int = -1; // 0xc1d PushI
	var_767_int = 36968; // 0xc1e PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0xc1f TObjFunc
	var_768_int = 535293; // 0xc21 PushI
	var_769_int = -1; // 0xc22 PushI
	var_770_int = 36969; // 0xc23 PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xc24 TObjFunc
	goto Label_3113; // 0xc26 Jump
	
Label_3113:
	var_771_bool = 0; // 0xc29 PushV
	func_4119(var_771_bool); // 0xc2a NEW_2
	if(var_771_bool == 0) goto Label_3128; // 0xc2c JumpB
	
Label_3117:
	lshWaitForAnimEnd(); // 0xc2d Func
	var_772_string = var_3_string; // 0xc2f PushT
	if(var_772_string == 0) goto Label_3122; // 0xc30 JumpB
	goto Label_3127; // 0xc31 Jump
	
Label_3127:
	goto Label_3142; // 0xc37 Jump
	
Label_3142:
	return 0; // 0xc46 Return
	
Label_3122:
	var_773_string = ""; // 0xc32 PushV
	var_773_string = var_2_object; // 0xc33 MovT
	func_3974(var_773_string); // 0xc34 NEW_2
	goto Label_3117; // 0xc36 Jump
	
Label_3128:
	var_774_string = "all"; // 0xc38 PushS
	var_775_string = "idle"; // 0xc39 PushS
	PlayAnimation(var_774_string, var_775_string); // 0xc3a Func
	
Label_3132:
	WaitForAnimEnd(); // 0xc3c Func
	var_776_string = var_3_string; // 0xc3e PushT
	if(var_776_string == 0) goto Label_3137; // 0xc3f JumpB
	goto Label_3142; // 0xc40 Jump
	
Label_3137:
	var_777_string = "all"; // 0xc41 PushS
	var_778_string = "idle"; // 0xc42 PushS
	PlayAnimation(var_777_string, var_778_string); // 0xc43 Func
	goto Label_3132; // 0xc45 Jump
}


func_3339(var_0_object, var_1_object, var_2_object, var_3_string, var_805_object, var_806_object)
{
	var_0_object = var_806_object; // 0xd0c TMov
	var_1_object = var_805_object; // 0xd0d TMov
	var_3_string = 0; // 0xd0e TMovB
	var_811_int = 1; // 0xd0f PushI
	if(var_811_int == 0) goto Label_3367; // 0xd10 JumpB
	var_812_string = ""; // 0xd11 PushV
	var_812_string = "Neutral"; // 0xd12 MovS
	func_3397(var_806_object, var_812_string); // 0xd13 NEW_2
	var_820_int = 540542; // 0xd15 PushI
	SetMessage(var_820_int); // 0xd16 TObjFunc
	ClearReplies(); // 0xd18 TObjFunc
	var_821_int = 540543; // 0xd1a PushI
	var_822_int = -1; // 0xd1b PushI
	var_823_int = 42552; // 0xd1c PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0xd1d TObjFunc
	var_824_int = 540796; // 0xd1f PushI
	var_825_int = -1; // 0xd20 PushI
	var_826_int = 42845; // 0xd21 PushI
	AddReply(var_824_int, var_825_int, var_826_int); // 0xd22 TObjFunc
	goto Label_3367; // 0xd24 Jump
	
Label_3367:
	var_827_bool = 0; // 0xd27 PushV
	func_4119(var_827_bool); // 0xd28 NEW_2
	if(var_827_bool == 0) goto Label_3382; // 0xd2a JumpB
	
Label_3371:
	lshWaitForAnimEnd(); // 0xd2b Func
	var_828_string = var_3_string; // 0xd2d PushT
	if(var_828_string == 0) goto Label_3376; // 0xd2e JumpB
	goto Label_3381; // 0xd2f Jump
	
Label_3381:
	goto Label_3396; // 0xd35 Jump
	
Label_3396:
	return 0; // 0xd44 Return
	
Label_3376:
	var_829_string = ""; // 0xd30 PushV
	var_829_string = var_2_object; // 0xd31 MovT
	func_3974(var_829_string); // 0xd32 NEW_2
	goto Label_3371; // 0xd34 Jump
	
Label_3382:
	var_830_string = "all"; // 0xd36 PushS
	var_831_string = "idle"; // 0xd37 PushS
	PlayAnimation(var_830_string, var_831_string); // 0xd38 Func
	
Label_3386:
	WaitForAnimEnd(); // 0xd3a Func
	var_832_string = var_3_string; // 0xd3c PushT
	if(var_832_string == 0) goto Label_3391; // 0xd3d JumpB
	goto Label_3396; // 0xd3e Jump
	
Label_3391:
	var_833_string = "all"; // 0xd3f PushS
	var_834_string = "idle"; // 0xd40 PushS
	PlayAnimation(var_833_string, var_834_string); // 0xd41 Func
	goto Label_3386; // 0xd43 Jump
}


func_1294(var_0_object, var_515_int, var_516_object)
{
	var_518_object = Obj(); var_519_bool = 0; var_520_int = 0; var_521_bool = 0; var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0; // 0x50e PushV
	var_0_object = var_516_object; // 0x50f TMov
	var_526_bool = 0; var_527_object = Obj(); var_528_float = 0; // 0x510 PushV
	var_527_object = var_516_object; // 0x511 Mov
	var_528_float = 70.0; // 0x512 MovF
	func_3749(var_527_object, var_528_float); // 0x513 NEW_2
	var_529_bool = var_526_bool == 0; // 0x515 Not
	if(var_529_bool == 0) goto Label_1305; // 0x516 JumpB
	var_515_int = -2; // 0x517 MovI
	return 8; // 0x518 Return
	
Label_1305:
	CreateDialog(var_522_object); // 0x519 Func
	var_530_int = 0; // 0x51b PushV
	func_4113(var_530_int); // 0x51c NEW_2
	SetNPCName(var_530_int); // 0x51e ObjFunc
	var_531_int = 0; // 0x520 PushV
	func_4111(var_531_int); // 0x521 NEW_2
	SetNPCDescription(var_531_int); // 0x523 ObjFunc
	var_532_string = ""; // 0x525 PushV
	func_4115(var_532_string); // 0x526 NEW_2
	SetPhoto(var_532_string); // 0x528 ObjFunc
	var_533_string = ""; // 0x52a PushV
	func_4117(var_533_string); // 0x52b NEW_2
	SetPhoto2(var_533_string); // 0x52d ObjFunc
	var_534_int = 0; // 0x52f PushV
	func_4573(var_534_int); // 0x530 NEW_2
	SetPlayerName(var_534_int); // 0x532 ObjFunc
	var_524_int = -1; // 0x534 MovI
	IsOverrideActive(var_523_bool); // 0x535 Func
	var_535_bool = var_523_bool; // 0x537 Push
	if(var_535_bool == 0) goto Label_1339; // 0x538 JumpB
	var_515_int = -2; // 0x539 MovI
	return 8; // 0x53a Return
	
Label_1339:
	DoDialog(var_522_object); // 0x53b Func
	var_536_bool = 0; var_537_object = Obj(); // 0x53d PushV
	var_538_object = Obj(); // 0x53e PushV
	func_4027(var_538_object); // 0x53f NEW_2
	var_537_object = var_538_object; // 0x540 Mov
	func_3836(var_536_bool, var_537_object); // 0x542 NEW_2
	var_539_object = Obj(); var_540_object = Obj(); // 0x544 PushV
	var_539_object = var_516_object; // 0x545 Mov
	var_540_object = var_522_object; // 0x546 Mov
	TaskCall(7); // 0x547 TaskCall
	func_1375(var_541_object, var_542_object, var_543_string, var_544_bool, var_539_object, var_540_object); // 0x548 NEW_2
	TaskReturn(); // 0x549 TaskReturn
	IsDialogEnd(var_525_bool); // 0x54b ObjFunc
	
Label_1357:
	var_641_bool = var_525_bool == 0; // 0x54d Not
	if(var_641_bool == 0) goto Label_1364; // 0x54e JumpB
	sync(); // 0x54f Func
	IsDialogEnd(var_525_bool); // 0x551 ObjFunc
	goto Label_1357; // 0x553 Jump
	
Label_1364:
	var_642_object = Obj(); // 0x554 PushV
	var_642_object = var_516_object; // 0x555 Mov
	func_3818(); // 0x556 NEW_2
	StopDialog(var_522_object); // 0x558 Func
	GetReturnValue(var_524_int); // 0x55a ObjFunc
	var_515_int = var_524_int; // 0x55c Mov
	return 8; // 0x55d Return
}


func_4111(var_124_int)
{
	var_124_int = 515536; // 0x100f MovI
	return 0; // 0x1010 Return
}


func_4113(var_123_int)
{
	var_123_int = 502861; // 0x1011 MovI
	return 0; // 0x1012 Return
}


func_4369(var_595_bool)
{
	var_597_int = 0; var_598_string = ""; // 0x1112 PushV
	var_598_string = "d9q01"; // 0x1113 MovS
	func_4043(var_597_int, var_598_string); // 0x1114 NEW_2
	var_599_int = 2; // 0x1116 PushI
	var_600_bool = var_597_int == var_599_int; // 0x1117 Eq
	if(var_600_bool == 0) goto Label_4379; // 0x1118 JumpB
	var_595_bool = 1; // 0x1119 MovB
	return 0; // 0x111a Return
	
Label_4379:
	var_595_bool = 0; // 0x111b MovB
	return 0; // 0x111c Return
}


func_4115(var_125_string)
{
	var_125_string = "ui/NPC_Han.png"; // 0x1013 MovS
	return 0; // 0x1014 Return
}


func_4117(var_126_string)
{
	var_126_string = "ui/NPC_Han_b.png"; // 0x1015 MovS
	return 0; // 0x1016 Return
}


func_4119(var_118_bool)
{
	var_118_bool = 1; // 0x1017 MovB
	return 0; // 0x1018 Return
}


func_4121()
{
	var_49_string = "ood7Han1"; // 0x101a PushS
	var_50_int = 1; // 0x101b PushI
	SetVariable(var_49_string, var_50_int); // 0x101c Func
	return 0; // 0x101e Return
}


func_4381(var_586_bool, var_587_object)
{
	var_588_bool = 0; var_589_object = Obj(); // 0x111e PushV
	var_589_object = var_587_object; // 0x111f Mov
	func_4401(var_589_object); // 0x1120 NEW_2
	if(var_588_bool == 0) goto Label_4389; // 0x1122 JumpB
	var_586_bool = 1; // 0x1123 MovB
	return 0; // 0x1124 Return
	
Label_4389:
	var_586_bool = 0; // 0x1125 MovB
	return 0; // 0x1126 Return
}


func_4127()
{
	var_49_string = "d11q05"; // 0x1020 PushS
	var_50_int = 2; // 0x1021 PushI
	SetVariable(var_49_string, var_50_int); // 0x1022 Func
	func_4430(); // 0x1025 NEW_2
	var_74_bool = 0; var_75_string = ""; var_76_string = ""; // 0x1027 PushV
	var_75_string = "quest_d11_05"; // 0x1028 MovS
	var_76_string = "place_enemy_before"; // 0x1029 MovS
	func_4055(var_74_bool, var_75_string, var_76_string); // 0x102a NEW_2
	return 0; // 0x102c Return
}


func_2595(var_2_object, var_676_string)
{
	var_677_bool = 0; // 0xa24 PushV
	func_4119(var_677_bool); // 0xa25 NEW_2
	var_678_bool = var_677_bool == 0; // 0xa27 Not
	if(var_678_bool == 0) goto Label_2602; // 0xa28 JumpB
	return 0; // 0xa29 Return
	
Label_2602:
	var_679_bool = var_676_string == var_2_object; // 0xa2a Eq
	if(var_679_bool == 0) goto Label_2605; // 0xa2b JumpB
	return 0; // 0xa2c Return
	
Label_2605:
	var_680_string = ""; var_681_bool = 0; // 0xa2d PushV
	var_680_string = var_676_string; // 0xa2e Mov
	var_682_string = ""; // 0xa2f PushS
	var_683_bool = var_676_string == var_682_string; // 0xa30 Eq
	if(var_683_bool == 0) goto Label_2612; // 0xa31 JumpB
	var_681_bool = 0; // 0xa32 MovB
	goto Label_2613; // 0xa33 Jump
	
Label_2613:
	func_3990(var_680_string, var_681_bool); // 0xa35 NEW_2
	var_2_object = var_676_string; // 0xa37 TMov
	return 0; // 0xa38 Return
	
Label_2612:
	var_681_bool = 1; // 0xa34 MovB
}


func_4391(var_605_bool, var_606_object)
{
	var_607_bool = 0; var_608_object = Obj(); // 0x1128 PushV
	var_608_object = var_606_object; // 0x1129 Mov
	func_4412(var_608_object); // 0x112a NEW_2
	if(var_607_bool == 0) goto Label_4399; // 0x112c JumpB
	var_605_bool = 1; // 0x112d MovB
	return 0; // 0x112e Return
	
Label_4399:
	var_605_bool = 0; // 0x112f MovB
	return 0; // 0x1130 Return
}


func_1064(var_2_object, var_480_string)
{
	var_481_bool = 0; // 0x429 PushV
	func_4119(var_481_bool); // 0x42a NEW_2
	var_482_bool = var_481_bool == 0; // 0x42c Not
	if(var_482_bool == 0) goto Label_1071; // 0x42d JumpB
	return 0; // 0x42e Return
	
Label_1071:
	var_483_bool = var_480_string == var_2_object; // 0x42f Eq
	if(var_483_bool == 0) goto Label_1074; // 0x430 JumpB
	return 0; // 0x431 Return
	
Label_1074:
	var_484_string = ""; var_485_bool = 0; // 0x432 PushV
	var_484_string = var_480_string; // 0x433 Mov
	var_486_string = ""; // 0x434 PushS
	var_487_bool = var_480_string == var_486_string; // 0x435 Eq
	if(var_487_bool == 0) goto Label_1081; // 0x436 JumpB
	var_485_bool = 0; // 0x437 MovB
	goto Label_1082; // 0x438 Jump
	
Label_1082:
	func_3990(var_484_string, var_485_bool); // 0x43a NEW_2
	var_2_object = var_480_string; // 0x43c TMov
	return 0; // 0x43d Return
	
Label_1081:
	var_485_bool = 1; // 0x439 MovB
}


func_4141()
{
	var_88_bool = 0; var_89_string = ""; var_90_string = ""; // 0x102e PushV
	var_89_string = "quest_d9_01"; // 0x102f MovS
	var_90_string = "teleport_to_mnogogrannik"; // 0x1030 MovS
	func_4055(var_88_bool, var_89_string, var_90_string); // 0x1031 NEW_2
	return 0; // 0x1033 Return
}


func_4401(var_588_bool)
{
	var_590_int = 0; var_591_int = 0; // 0x1131 PushV
	var_592_string = "Rifle"; // 0x1132 PushS
	GetItemCountOfType(var_591_int, var_592_string); // 0x1133 ObjFunc
	var_593_int = 5; // 0x1135 PushI
	var_594_bool = var_591_int >= var_593_int; // 0x1136 GE
	if(var_594_bool == 0) goto Label_4410; // 0x1137 JumpB
	var_588_bool = 1; // 0x1138 MovB
	return 2; // 0x1139 Return
	
Label_4410:
	var_588_bool = 0; // 0x113a MovB
	return 2; // 0x113b Return
}


func_4148()
{
	var_117_int = 0; var_118_string = ""; // 0x1035 PushV
	var_118_string = "map_chertez_state"; // 0x1036 MovS
	func_4043(var_117_int, var_118_string); // 0x1037 NEW_2
	var_121_int = 3; // 0x1039 PushI
	var_122_bool = var_117_int <= var_121_int; // 0x103a LE
	if(var_122_bool == 0) goto Label_4164; // 0x103b JumpB
	var_123_string = "map_chertez_state"; // 0x103c PushS
	var_124_int = 3; // 0x103d PushI
	SetVariable(var_123_string, var_124_int); // 0x103e Func
	var_125_string = "map_chertez_force"; // 0x1040 PushS
	var_126_int = 1; // 0x1041 PushI
	SetVariable(var_125_string, var_126_int); // 0x1042 Func
	
Label_4164:
	return 0; // 0x1044 Return
}


func_3894(var_147_bool)
{
	var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = ""; // 0xf36 PushV
	var_154_string = "c"; // 0xf37 MovS
	var_155_int = 0; // 0xf38 MovI
	
Label_3897:
	var_159_int = 1; // 0xf39 PushI
	if(var_159_int == 0) goto Label_3910; // 0xf3a JumpB
	var_160_int = 1; // 0xf3b PushI
	var_161_int = var_155_int + var_160_int; // 0xf3c Add
	var_162_int = var_154_string + var_161_int; // 0xf3d Add
	HasProperty(var_162_int, var_156_bool); // 0xf3e ObjFunc
	var_163_bool = var_156_bool == 0; // 0xf40 Not
	if(var_163_bool == 0) goto Label_3907; // 0xf41 JumpB
	goto Label_3910; // 0xf42 Jump
	
Label_3910:
	var_164_bool = var_155_int == 0; // 0xf46 Not
	if(var_164_bool == 0) goto Label_3914; // 0xf47 JumpB
	var_147_bool = 0; // 0xf48 MovB
	return 10; // 0xf49 Return
	
Label_3914:
	var_157_int = 0; // 0xf4a MovI
	var_165_int = 1; // 0xf4b PushI
	var_166_bool = var_155_int > var_165_int; // 0xf4c GT
	if(var_166_bool == 0) goto Label_3920; // 0xf4d JumpB
	irand(var_157_int, var_155_int); // 0xf4e Func
	
Label_3920:
	var_167_int = 1; // 0xf50 PushI
	var_168_int = var_157_int + var_167_int; // 0xf51 Add
	var_169_int = var_154_string + var_168_int; // 0xf52 Add
	GetProperty(var_169_int, var_158_string); // 0xf53 ObjFunc
	var_170_bool = 0; var_171_string = ""; // 0xf55 PushV
	var_171_string = var_158_string; // 0xf56 Mov
	func_4005(var_170_bool, var_171_string); // 0xf57 NEW_2
	var_147_bool = var_170_bool; // 0xf58 Mov
	return 10; // 0xf5a Return
	
Label_3907:
	var_176_int = 1; // 0xf43 PushI
	var_155_int = var_155_int + var_176_int; // 0xf44 Add2
	goto Label_3897; // 0xf45 Jump
}


func_3641()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; // 0xe39 PushV
	WaitForAnimEnd(); // 0xe3a Func
	var_57_bool = 0; // 0xe3c PushV
	func_3744(var_57_bool); // 0xe3d NEW_2
	var_58_bool = var_57_bool == 0; // 0xe3f Not
	if(var_58_bool == 0) goto Label_3650; // 0xe40 JumpB
	return 12; // 0xe41 Return
	
Label_3650:
	var_59_int = 0; // 0xe42 PushV
	func_4094(var_59_int); // 0xe43 NEW_2
	var_51_int = var_59_int; // 0xe44 Mov
	var_52_int = 0; // 0xe46 MovI
	
Label_3655:
	var_72_bool = 0; // 0xe47 PushV
	var_72_bool = 0; // 0xe48 MovB
	var_73_int = 5; // 0xe49 PushI
	var_74_bool = var_52_int < var_73_int; // 0xe4a LT
	if(var_74_bool == 0) goto Label_3665; // 0xe4b JumpB
	var_75_bool = 0; // 0xe4c PushV
	func_3744(var_75_bool); // 0xe4d NEW_2
	if(var_75_bool == 0) goto Label_3665; // 0xe4f JumpB
	var_72_bool = 1; // 0xe50 MovB
	
Label_3665:
	if(var_72_bool == 0) goto Label_3707; // 0xe51 JumpB
	var_76_bool = var_51_int == 0; // 0xe52 Not
	if(var_76_bool == 0) goto Label_3675; // 0xe53 JumpB
	var_77_int = 3; // 0xe54 PushI
	Sleep(var_77_int, var_53_bool); // 0xe55 Func
	var_78_bool = var_53_bool == 0; // 0xe57 Not
	if(var_78_bool == 0) goto Label_3674; // 0xe58 JumpB
	goto Label_3707; // 0xe59 Jump
	
Label_3707:
	ResetAAS(); // 0xe7b Func
	return 12; // 0xe7d Return
	
Label_3674:
	goto Label_3696; // 0xe5a Jump
	
Label_3696:
	var_79_bool = 0; // 0xe70 PushV
	func_3710(var_79_bool); // 0xe71 NEW_2
	var_80_bool = var_79_bool == 0; // 0xe73 Not
	if(var_80_bool == 0) goto Label_3702; // 0xe74 JumpB
	goto Label_3707; // 0xe75 Jump
	
Label_3702:
	ResetAAS(); // 0xe76 Func
	var_81_int = 1; // 0xe78 PushI
	var_52_int = var_52_int + var_81_int; // 0xe79 Add2
	goto Label_3655; // 0xe7a Jump
	
Label_3675:
	irand(var_54_int, var_51_int); // 0xe5b Func
	var_82_int = 5; // 0xe5d PushI
	irand(var_55_int, var_82_int); // 0xe5e Func
	var_83_int = 0; // 0xe60 PushI
	var_84_bool = var_55_int != var_83_int; // 0xe61 Neq
	if(var_84_bool == 0) goto Label_3684; // 0xe62 JumpB
	var_54_int = 0; // 0xe63 MovI
	
Label_3684:
	var_85_string = "all"; // 0xe64 PushS
	var_86_string = ""; var_87_int = 0; // 0xe65 PushV
	var_87_int = var_54_int; // 0xe66 Mov
	func_4087(var_86_string, var_87_int); // 0xe67 NEW_2
	PlayAnimation(var_85_string, var_86_string); // 0xe69 Func
	WaitForAnimEnd(var_56_bool); // 0xe6b Func
	var_88_bool = var_56_bool == 0; // 0xe6d Not
	if(var_88_bool == 0) goto Label_3696; // 0xe6e JumpB
	goto Label_3707; // 0xe6f Jump
}


func_4412(var_607_bool)
{
	var_609_int = 0; var_610_int = 0; // 0x113c PushV
	var_611_string = "Rifle"; // 0x113d PushS
	GetItemCountOfType(var_610_int, var_611_string); // 0x113e ObjFunc
	var_612_bool = 0; // 0x1140 PushV
	var_612_bool = 0; // 0x1141 MovB
	var_613_int = 0; // 0x1142 PushI
	var_614_bool = var_610_int > var_613_int; // 0x1143 GT
	if(var_614_bool == 0) goto Label_4425; // 0x1144 JumpB
	var_615_int = 5; // 0x1145 PushI
	var_616_bool = var_610_int < var_615_int; // 0x1146 LT
	if(var_616_bool == 0) goto Label_4425; // 0x1147 JumpB
	var_612_bool = 1; // 0x1148 MovB
	
Label_4425:
	if(var_612_bool == 0) goto Label_4428; // 0x1149 JumpB
	var_607_bool = 1; // 0x114a MovB
	return 2; // 0x114b Return
	
Label_4428:
	var_607_bool = 0; // 0x114c MovB
	return 2; // 0x114d Return
}


func_4165()
{
	var_129_object = Obj(); var_130_string = ""; var_131_float = 0; // 0x1046 PushV
	var_132_object = Obj(); // 0x1047 PushV
	func_4523(var_132_object); // 0x1048 NEW_2
	var_129_object = var_132_object; // 0x1049 Mov
	var_130_string = "pt_map_aglaja"; // 0x104b MovS
	var_131_float = -1; // 0x104c MovI
	func_4540(var_129_object, var_130_string, var_131_float); // 0x104d NEW_2
	var_158_object = Obj(); // 0x104f PushV
	func_4523(var_158_object); // 0x1050 NEW_2
	ShowMap(var_158_object); // 0x1052 ObjFunc
	return 0; // 0x1054 Return
}


func_582(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; // 0x246 PushV
	var_0_object = var_376_object; // 0x247 TMov
	var_386_bool = 0; var_387_object = Obj(); var_388_float = 0; // 0x248 PushV
	var_387_object = var_376_object; // 0x249 Mov
	var_388_float = 70.0; // 0x24a MovF
	func_3749(var_387_object, var_388_float); // 0x24b NEW_2
	var_389_bool = var_386_bool == 0; // 0x24d Not
	if(var_389_bool == 0) goto Label_593; // 0x24e JumpB
	var_375_int = -2; // 0x24f MovI
	return 8; // 0x250 Return
	
Label_593:
	CreateDialog(var_382_object); // 0x251 Func
	var_390_int = 0; // 0x253 PushV
	func_4113(var_390_int); // 0x254 NEW_2
	SetNPCName(var_390_int); // 0x256 ObjFunc
	var_391_int = 0; // 0x258 PushV
	func_4111(var_391_int); // 0x259 NEW_2
	SetNPCDescription(var_391_int); // 0x25b ObjFunc
	var_392_string = ""; // 0x25d PushV
	func_4115(var_392_string); // 0x25e NEW_2
	SetPhoto(var_392_string); // 0x260 ObjFunc
	var_393_string = ""; // 0x262 PushV
	func_4117(var_393_string); // 0x263 NEW_2
	SetPhoto2(var_393_string); // 0x265 ObjFunc
	var_394_int = 0; // 0x267 PushV
	func_4573(var_394_int); // 0x268 NEW_2
	SetPlayerName(var_394_int); // 0x26a ObjFunc
	var_384_int = -1; // 0x26c MovI
	IsOverrideActive(var_383_bool); // 0x26d Func
	var_395_bool = var_383_bool; // 0x26f Push
	if(var_395_bool == 0) goto Label_627; // 0x270 JumpB
	var_375_int = -2; // 0x271 MovI
	return 8; // 0x272 Return
	
Label_627:
	DoDialog(var_382_object); // 0x273 Func
	var_396_bool = 0; var_397_object = Obj(); // 0x275 PushV
	var_398_object = Obj(); // 0x276 PushV
	func_4027(var_398_object); // 0x277 NEW_2
	var_397_object = var_398_object; // 0x278 Mov
	func_3836(var_396_bool, var_397_object); // 0x27a NEW_2
	var_399_object = Obj(); var_400_object = Obj(); // 0x27c PushV
	var_399_object = var_376_object; // 0x27d Mov
	var_400_object = var_382_object; // 0x27e Mov
	TaskCall(3); // 0x27f TaskCall
	func_663(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object); // 0x280 NEW_2
	TaskReturn(); // 0x281 TaskReturn
	IsDialogEnd(var_385_bool); // 0x283 ObjFunc
	
Label_645:
	var_435_bool = var_385_bool == 0; // 0x285 Not
	if(var_435_bool == 0) goto Label_652; // 0x286 JumpB
	sync(); // 0x287 Func
	IsDialogEnd(var_385_bool); // 0x289 ObjFunc
	goto Label_645; // 0x28b Jump
	
Label_652:
	var_436_object = Obj(); // 0x28c PushV
	var_436_object = var_376_object; // 0x28d Mov
	func_3818(); // 0x28e NEW_2
	StopDialog(var_382_object); // 0x290 Func
	GetReturnValue(var_384_int); // 0x292 ObjFunc
	var_375_int = var_384_int; // 0x294 Mov
	return 8; // 0x295 Return
}


func_3143(var_2_object, var_753_string)
{
	var_754_bool = 0; // 0xc48 PushV
	func_4119(var_754_bool); // 0xc49 NEW_2
	var_755_bool = var_754_bool == 0; // 0xc4b Not
	if(var_755_bool == 0) goto Label_3150; // 0xc4c JumpB
	return 0; // 0xc4d Return
	
Label_3150:
	var_756_bool = var_753_string == var_2_object; // 0xc4e Eq
	if(var_756_bool == 0) goto Label_3153; // 0xc4f JumpB
	return 0; // 0xc50 Return
	
Label_3153:
	var_757_string = ""; var_758_bool = 0; // 0xc51 PushV
	var_757_string = var_753_string; // 0xc52 Mov
	var_759_string = ""; // 0xc53 PushS
	var_760_bool = var_753_string == var_759_string; // 0xc54 Eq
	if(var_760_bool == 0) goto Label_3160; // 0xc55 JumpB
	var_758_bool = 0; // 0xc56 MovB
	goto Label_3161; // 0xc57 Jump
	
Label_3161:
	func_3990(var_757_string, var_758_bool); // 0xc59 NEW_2
	var_2_object = var_753_string; // 0xc5b TMov
	return 0; // 0xc5c Return
	
Label_3160:
	var_758_bool = 1; // 0xc58 MovB
}


func_3397(var_2_object, var_812_string)
{
	var_813_bool = 0; // 0xd46 PushV
	func_4119(var_813_bool); // 0xd47 NEW_2
	var_814_bool = var_813_bool == 0; // 0xd49 Not
	if(var_814_bool == 0) goto Label_3404; // 0xd4a JumpB
	return 0; // 0xd4b Return
	
Label_3404:
	var_815_bool = var_812_string == var_2_object; // 0xd4c Eq
	if(var_815_bool == 0) goto Label_3407; // 0xd4d JumpB
	return 0; // 0xd4e Return
	
Label_3407:
	var_816_string = ""; var_817_bool = 0; // 0xd4f PushV
	var_816_string = var_812_string; // 0xd50 Mov
	var_818_string = ""; // 0xd51 PushS
	var_819_bool = var_812_string == var_818_string; // 0xd52 Eq
	if(var_819_bool == 0) goto Label_3414; // 0xd53 JumpB
	var_817_bool = 0; // 0xd54 MovB
	goto Label_3415; // 0xd55 Jump
	
Label_3415:
	func_3990(var_816_string, var_817_bool); // 0xd57 NEW_2
	var_2_object = var_812_string; // 0xd59 TMov
	return 0; // 0xd5a Return
	
Label_3414:
	var_817_bool = 1; // 0xd56 MovB
}


func_4430()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x114e PushV
	var_53_int = 684; // 0x114f PushI
	var_54_int = 2; // 0x1150 PushI
	var_55_int = 534499; // 0x1151 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x1152 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x1154 PushV
	var_57_object = var_52_object; // 0x1155 Mov
	var_58_int = 682; // 0x1156 MovI
	func_4495(var_56_bool, var_57_object, var_58_int); // 0x1157 NEW_2
	return 2; // 0x1159 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_320_object, var_321_object)
{
	var_0_object = var_321_object; // 0x52 TMov
	var_1_object = var_320_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_326_int = 1; // 0x55 PushI
	if(var_326_int == 0) goto Label_148; // 0x56 JumpB
	var_327_bool = 0; // 0x57 PushV
	var_327_bool = 0; // 0x58 MovB
	var_328_bool = 0; var_329_object = Obj(); // 0x59 PushV
	var_329_object = var_1_object; // 0x5a MovT
	func_4321(var_329_object); // 0x5b NEW_2
	if(var_328_bool == 0) goto Label_100; // 0x5d JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0x5e PushV
	var_337_object = var_1_object; // 0x5f MovT
	func_4316(var_337_object); // 0x60 NEW_2
	if(var_336_bool == 0) goto Label_100; // 0x62 JumpB
	var_327_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_327_bool == 0) goto Label_126; // 0x64 JumpB
	var_338_object = Obj(); var_339_object = Obj(); // 0x65 PushV
	var_338_object = var_1_object; // 0x66 MovT
	var_339_object = var_0_object; // 0x67 MovT
	func_4193(); // 0x68 NEW_2
	var_340_string = ""; // 0x6a PushV
	var_340_string = "Questioning"; // 0x6b MovS
	func_178(var_321_object, var_340_string); // 0x6c NEW_2
	var_348_int = 510420; // 0x6e PushI
	SetMessage(var_348_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_349_int = 510421; // 0x73 PushI
	var_350_int = 11490; // 0x74 PushI
	var_351_int = 11489; // 0x75 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x76 TObjFunc
	var_352_int = 534384; // 0x78 PushI
	var_353_int = 36001; // 0x79 PushI
	var_354_int = 35999; // 0x7a PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_148:
	var_355_bool = 0; // 0x94 PushV
	func_4119(var_355_bool); // 0x95 NEW_2
	if(var_355_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_356_string = var_3_string; // 0x9a PushT
	if(var_356_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_357_string = ""; // 0x9d PushV
	var_357_string = var_2_object; // 0x9e MovT
	func_3974(var_357_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_358_string = "all"; // 0xa3 PushS
	var_359_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_358_string, var_359_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_360_string = var_3_string; // 0xa9 PushT
	if(var_360_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_361_string = "all"; // 0xac PushS
	var_362_string = "idle"; // 0xad PushS
	PlayAnimation(var_361_string, var_362_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_126:
	var_363_string = ""; // 0x7e PushV
	var_363_string = "Neutral"; // 0x7f MovS
	func_178(var_321_object, var_363_string); // 0x80 NEW_2
	var_364_int = 534418; // 0x82 PushI
	SetMessage(var_364_int); // 0x83 TObjFunc
	ClearReplies(); // 0x85 TObjFunc
	var_365_int = 534419; // 0x87 PushI
	var_366_int = -1; // 0x88 PushI
	var_367_int = 36046; // 0x89 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x8a TObjFunc
	var_368_int = 536096; // 0x8c PushI
	var_369_int = -1; // 0x8d PushI
	var_370_int = 37848; // 0x8e PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
}


func_4181()
{
	var_111_string = "ood9Xan3"; // 0x1056 PushS
	var_112_int = 1; // 0x1057 PushI
	SetVariable(var_111_string, var_112_int); // 0x1058 Func
	return 0; // 0x105a Return
}


func_4187()
{
	var_78_string = "playsound"; // 0x105c PushS
	var_79_string = "giveitem"; // 0x105d PushS
	TriggerWorld(var_78_string, var_79_string); // 0x105e Func
	return 0; // 0x1060 Return
}


func_3931(var_178_bool)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = ""; // 0xf5b PushV
	var_190_string = "d"; // 0xf5c PushS
	var_191_int = 0; // 0xf5d PushV
	func_4072(var_191_int); // 0xf5e NEW_2
	var_197_int = var_190_string + var_191_int; // 0xf60 Add
	var_198_string = "m"; // 0xf61 PushS
	var_185_string = var_197_int + var_198_string; // 0xf62 Add2
	var_186_int = 0; // 0xf63 MovI
	
Label_3940:
	var_199_int = 1; // 0xf64 PushI
	if(var_199_int == 0) goto Label_3953; // 0xf65 JumpB
	var_200_int = 1; // 0xf66 PushI
	var_201_int = var_186_int + var_200_int; // 0xf67 Add
	var_202_int = var_185_string + var_201_int; // 0xf68 Add
	HasProperty(var_202_int, var_187_bool); // 0xf69 ObjFunc
	var_203_bool = var_187_bool == 0; // 0xf6b Not
	if(var_203_bool == 0) goto Label_3950; // 0xf6c JumpB
	goto Label_3953; // 0xf6d Jump
	
Label_3953:
	var_204_bool = var_186_int == 0; // 0xf71 Not
	if(var_204_bool == 0) goto Label_3957; // 0xf72 JumpB
	var_178_bool = 0; // 0xf73 MovB
	return 10; // 0xf74 Return
	
Label_3957:
	var_188_int = 0; // 0xf75 MovI
	var_205_int = 1; // 0xf76 PushI
	var_206_bool = var_186_int > var_205_int; // 0xf77 GT
	if(var_206_bool == 0) goto Label_3963; // 0xf78 JumpB
	irand(var_188_int, var_186_int); // 0xf79 Func
	
Label_3963:
	var_207_int = 1; // 0xf7b PushI
	var_208_int = var_188_int + var_207_int; // 0xf7c Add
	var_209_int = var_185_string + var_208_int; // 0xf7d Add
	GetProperty(var_209_int, var_189_string); // 0xf7e ObjFunc
	var_210_bool = 0; var_211_string = ""; // 0xf80 PushV
	var_211_string = var_189_string; // 0xf81 Mov
	func_4005(var_210_bool, var_211_string); // 0xf82 NEW_2
	var_178_bool = var_210_bool; // 0xf83 Mov
	return 10; // 0xf85 Return
	
Label_3950:
	var_212_int = 1; // 0xf6e PushI
	var_186_int = var_186_int + var_212_int; // 0xf6f Add2
	goto Label_3940; // 0xf70 Jump
}


func_4443()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x115b PushV
	var_69_int = 679; // 0x115c PushI
	var_70_int = 2; // 0x115d PushI
	var_71_int = 534420; // 0x115e PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x115f Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1161 PushV
	var_73_object = var_68_object; // 0x1162 Mov
	var_74_int = 26; // 0x1163 MovI
	func_4495(var_72_bool, var_73_object, var_74_int); // 0x1164 NEW_2
	return 2; // 0x1166 Return
}


func_1375(var_0_object, var_1_object, var_2_object, var_3_string, var_539_object, var_540_object)
{
	var_0_object = var_540_object; // 0x560 TMov
	var_1_object = var_539_object; // 0x561 TMov
	var_3_string = 0; // 0x562 TMovB
	var_545_int = 1; // 0x563 PushI
	if(var_545_int == 0) goto Label_1489; // 0x564 JumpB
	var_546_bool = 0; // 0x565 PushV
	var_546_bool = 0; // 0x566 MovB
	var_547_bool = 0; var_548_object = Obj(); // 0x567 PushV
	var_548_object = var_1_object; // 0x568 MovT
	func_4345(var_548_object); // 0x569 NEW_2
	if(var_547_bool == 0) goto Label_1394; // 0x56b JumpB
	var_553_bool = 0; var_554_object = Obj(); // 0x56c PushV
	var_554_object = var_1_object; // 0x56d MovT
	func_4357(var_554_object); // 0x56e NEW_2
	if(var_553_bool == 0) goto Label_1394; // 0x570 JumpB
	var_546_bool = 1; // 0x571 MovB
	
Label_1394:
	if(var_546_bool == 0) goto Label_1415; // 0x572 JumpB
	var_559_object = Obj(); var_560_object = Obj(); // 0x573 PushV
	var_559_object = var_1_object; // 0x574 MovT
	var_560_object = var_0_object; // 0x575 MovT
	func_4224(); // 0x576 NEW_2
	var_563_string = ""; // 0x578 PushV
	var_563_string = "Neutral"; // 0x579 MovS
	func_1519(var_540_object, var_563_string); // 0x57a NEW_2
	var_571_int = 514041; // 0x57c PushI
	SetMessage(var_571_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_572_int = 514042; // 0x581 PushI
	var_573_int = 15278; // 0x582 PushI
	var_574_int = 15277; // 0x583 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x584 TObjFunc
	goto Label_1489; // 0x586 Jump
	
Label_1489:
	var_575_bool = 0; // 0x5d1 PushV
	func_4119(var_575_bool); // 0x5d2 NEW_2
	if(var_575_bool == 0) goto Label_1504; // 0x5d4 JumpB
	
Label_1493:
	lshWaitForAnimEnd(); // 0x5d5 Func
	var_576_string = var_3_string; // 0x5d7 PushT
	if(var_576_string == 0) goto Label_1498; // 0x5d8 JumpB
	goto Label_1503; // 0x5d9 Jump
	
Label_1503:
	goto Label_1518; // 0x5df Jump
	
Label_1518:
	return 0; // 0x5ee Return
	
Label_1498:
	var_577_string = ""; // 0x5da PushV
	var_577_string = var_2_object; // 0x5db MovT
	func_3974(var_577_string); // 0x5dc NEW_2
	goto Label_1493; // 0x5de Jump
	
Label_1504:
	var_578_string = "all"; // 0x5e0 PushS
	var_579_string = "idle"; // 0x5e1 PushS
	PlayAnimation(var_578_string, var_579_string); // 0x5e2 Func
	
Label_1508:
	WaitForAnimEnd(); // 0x5e4 Func
	var_580_string = var_3_string; // 0x5e6 PushT
	if(var_580_string == 0) goto Label_1513; // 0x5e7 JumpB
	goto Label_1518; // 0x5e8 Jump
	
Label_1513:
	var_581_string = "all"; // 0x5e9 PushS
	var_582_string = "idle"; // 0x5ea PushS
	PlayAnimation(var_581_string, var_582_string); // 0x5eb Func
	goto Label_1508; // 0x5ed Jump
	
Label_1415:
	var_583_string = ""; // 0x587 PushV
	var_583_string = "Suspicion"; // 0x588 MovS
	func_1519(var_540_object, var_583_string); // 0x589 NEW_2
	var_584_int = 514063; // 0x58b PushI
	SetMessage(var_584_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_585_bool = 0; // 0x590 PushV
	var_585_bool = 0; // 0x591 MovB
	var_586_bool = 0; var_587_object = Obj(); // 0x592 PushV
	var_587_object = var_1_object; // 0x593 MovT
	func_4381(var_586_bool, var_587_object); // 0x594 NEW_2
	if(var_586_bool == 0) goto Label_1437; // 0x596 JumpB
	var_595_bool = 0; var_596_object = Obj(); // 0x597 PushV
	var_596_object = var_1_object; // 0x598 MovT
	func_4369(var_596_object); // 0x599 NEW_2
	if(var_595_bool == 0) goto Label_1437; // 0x59b JumpB
	var_585_bool = 1; // 0x59c MovB
	
Label_1437:
	if(var_585_bool == 0) goto Label_1443; // 0x59d JumpB
	var_601_int = 514068; // 0x59e PushI
	var_602_int = 40760; // 0x59f PushI
	var_603_int = 15305; // 0x5a0 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x5a1 TObjFunc
	
Label_1443:
	var_604_bool = 0; // 0x5a3 PushV
	var_604_bool = 0; // 0x5a4 MovB
	var_605_bool = 0; var_606_object = Obj(); // 0x5a5 PushV
	var_606_object = var_1_object; // 0x5a6 MovT
	func_4391(var_605_bool, var_606_object); // 0x5a7 NEW_2
	if(var_605_bool == 0) goto Label_1456; // 0x5a9 JumpB
	var_617_bool = 0; var_618_object = Obj(); // 0x5aa PushV
	var_618_object = var_1_object; // 0x5ab MovT
	func_4369(var_618_object); // 0x5ac NEW_2
	if(var_617_bool == 0) goto Label_1456; // 0x5ae JumpB
	var_604_bool = 1; // 0x5af MovB
	
Label_1456:
	if(var_604_bool == 0) goto Label_1462; // 0x5b0 JumpB
	var_619_int = 514069; // 0x5b1 PushI
	var_620_int = 15307; // 0x5b2 PushI
	var_621_int = 15306; // 0x5b3 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x5b4 TObjFunc
	
Label_1462:
	var_622_bool = 0; // 0x5b6 PushV
	var_622_bool = 0; // 0x5b7 MovB
	var_623_bool = 0; var_624_object = Obj(); // 0x5b8 PushV
	var_624_object = var_1_object; // 0x5b9 MovT
	func_4292(var_624_object); // 0x5ba NEW_2
	if(var_623_bool == 0) goto Label_1475; // 0x5bc JumpB
	var_629_bool = 0; var_630_object = Obj(); // 0x5bd PushV
	var_630_object = var_1_object; // 0x5be MovT
	func_4304(var_630_object); // 0x5bf NEW_2
	if(var_629_bool == 0) goto Label_1475; // 0x5c1 JumpB
	var_622_bool = 1; // 0x5c2 MovB
	
Label_1475:
	if(var_622_bool == 0) goto Label_1481; // 0x5c3 JumpB
	var_635_int = 538835; // 0x5c4 PushI
	var_636_int = 40765; // 0x5c5 PushI
	var_637_int = 40764; // 0x5c6 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x5c7 TObjFunc
	
Label_1481:
	var_638_int = 514064; // 0x5c9 PushI
	var_639_int = -1; // 0x5ca PushI
	var_640_int = 15300; // 0x5cb PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x5cc TObjFunc
	goto Label_1489; // 0x5ce Jump
}


func_4193()
{
	return 0; // 0x1062 Return
}


func_4195()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1063 PushV
	var_51_string = "d3q02"; // 0x1064 PushS
	var_52_int = 4; // 0x1065 PushI
	SetVariable(var_51_string, var_52_int); // 0x1066 Func
	var_53_object = Obj(); // 0x1068 PushV
	func_4523(var_53_object); // 0x1069 NEW_2
	var_50_object = var_53_object; // 0x106a Mov
	var_60_string = "d3q02HanGotoMladVlad"; // 0x106c PushS
	var_61_string = "pt_map_mladvlad"; // 0x106d PushS
	var_62_int = 0; // 0x106e PushI
	var_63_int = 511386; // 0x106f PushI
	var_64_float = 0; // 0x1070 PushV
	func_4067(var_64_float); // 0x1071 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1073 ObjFunc
	func_4443(); // 0x1076 NEW_2
	return 2; // 0x1078 Return
}


func_4456()
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x1168 PushV
	var_98_int = 185; // 0x1169 PushI
	var_99_int = 1; // 0x116a PushI
	var_100_int = 515448; // 0x116b PushI
	CreateDiaryEntry(var_97_object, var_98_int, var_99_int, var_100_int); // 0x116c Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x116e PushV
	var_102_object = var_97_object; // 0x116f Mov
	var_103_int = 182; // 0x1170 MovI
	func_4495(var_101_bool, var_102_object, var_103_int); // 0x1171 NEW_2
	return 2; // 0x1173 Return
}


func_4469()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x1175 PushV
	var_53_int = 184; // 0x1176 PushI
	var_54_int = 1; // 0x1177 PushI
	var_55_int = 515447; // 0x1178 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x1179 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x117b PushV
	var_57_object = var_52_object; // 0x117c Mov
	var_58_int = 182; // 0x117d MovI
	func_4495(var_56_bool, var_57_object, var_58_int); // 0x117e NEW_2
	return 2; // 0x1180 Return
}


func_2170(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x87a PushV
	var_0_object = var_65_object; // 0x87b TMov
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; // 0x87c PushV
	var_76_object = var_65_object; // 0x87d Mov
	var_77_float = 70.0; // 0x87e MovF
	func_3749(var_76_object, var_77_float); // 0x87f NEW_2
	var_122_bool = var_75_bool == 0; // 0x881 Not
	if(var_122_bool == 0) goto Label_2181; // 0x882 JumpB
	var_64_int = -2; // 0x883 MovI
	return 8; // 0x884 Return
	
Label_2181:
	CreateDialog(var_71_object); // 0x885 Func
	var_123_int = 0; // 0x887 PushV
	func_4113(var_123_int); // 0x888 NEW_2
	SetNPCName(var_123_int); // 0x88a ObjFunc
	var_124_int = 0; // 0x88c PushV
	func_4111(var_124_int); // 0x88d NEW_2
	SetNPCDescription(var_124_int); // 0x88f ObjFunc
	var_125_string = ""; // 0x891 PushV
	func_4115(var_125_string); // 0x892 NEW_2
	SetPhoto(var_125_string); // 0x894 ObjFunc
	var_126_string = ""; // 0x896 PushV
	func_4117(var_126_string); // 0x897 NEW_2
	SetPhoto2(var_126_string); // 0x899 ObjFunc
	var_127_int = 0; // 0x89b PushV
	func_4573(var_127_int); // 0x89c NEW_2
	SetPlayerName(var_127_int); // 0x89e ObjFunc
	var_73_int = -1; // 0x8a0 MovI
	IsOverrideActive(var_72_bool); // 0x8a1 Func
	var_135_bool = var_72_bool; // 0x8a3 Push
	if(var_135_bool == 0) goto Label_2215; // 0x8a4 JumpB
	var_64_int = -2; // 0x8a5 MovI
	return 8; // 0x8a6 Return
	
Label_2215:
	DoDialog(var_71_object); // 0x8a7 Func
	var_136_bool = 0; var_137_object = Obj(); // 0x8a9 PushV
	var_138_object = Obj(); // 0x8aa PushV
	func_4027(var_138_object); // 0x8ab NEW_2
	var_137_object = var_138_object; // 0x8ac Mov
	func_3836(var_136_bool, var_137_object); // 0x8ae NEW_2
	var_231_object = Obj(); var_232_object = Obj(); // 0x8b0 PushV
	var_231_object = var_65_object; // 0x8b1 Mov
	var_232_object = var_71_object; // 0x8b2 Mov
	TaskCall(9); // 0x8b3 TaskCall
	func_2251(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object); // 0x8b4 NEW_2
	TaskReturn(); // 0x8b5 TaskReturn
	IsDialogEnd(var_74_bool); // 0x8b7 ObjFunc
	
Label_2233:
	var_280_bool = var_74_bool == 0; // 0x8b9 Not
	if(var_280_bool == 0) goto Label_2240; // 0x8ba JumpB
	sync(); // 0x8bb Func
	IsDialogEnd(var_74_bool); // 0x8bd ObjFunc
	goto Label_2233; // 0x8bf Jump
	
Label_2240:
	var_281_object = Obj(); // 0x8c0 PushV
	var_281_object = var_65_object; // 0x8c1 Mov
	func_3818(); // 0x8c2 NEW_2
	StopDialog(var_71_object); // 0x8c4 Func
	GetReturnValue(var_73_int); // 0x8c6 ObjFunc
	var_64_int = var_73_int; // 0x8c8 Mov
	return 8; // 0x8c9 Return
}


func_4218()
{
	var_478_string = "ood8Han1"; // 0x107b PushS
	var_479_int = 1; // 0x107c PushI
	SetVariable(var_478_string, var_479_int); // 0x107d Func
	return 0; // 0x107f Return
}


func_3710(var_79_bool)
{
	var_79_bool = 1; // 0xe7e MovB
	return 0; // 0xe7f Return
}


func_895(var_0_object, var_439_int, var_440_object)
{
	var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; var_449_bool = 0; // 0x37f PushV
	var_0_object = var_440_object; // 0x380 TMov
	var_450_bool = 0; var_451_object = Obj(); var_452_float = 0; // 0x381 PushV
	var_451_object = var_440_object; // 0x382 Mov
	var_452_float = 70.0; // 0x383 MovF
	func_3749(var_451_object, var_452_float); // 0x384 NEW_2
	var_453_bool = var_450_bool == 0; // 0x386 Not
	if(var_453_bool == 0) goto Label_906; // 0x387 JumpB
	var_439_int = -2; // 0x388 MovI
	return 8; // 0x389 Return
	
Label_906:
	CreateDialog(var_446_object); // 0x38a Func
	var_454_int = 0; // 0x38c PushV
	func_4113(var_454_int); // 0x38d NEW_2
	SetNPCName(var_454_int); // 0x38f ObjFunc
	var_455_int = 0; // 0x391 PushV
	func_4111(var_455_int); // 0x392 NEW_2
	SetNPCDescription(var_455_int); // 0x394 ObjFunc
	var_456_string = ""; // 0x396 PushV
	func_4115(var_456_string); // 0x397 NEW_2
	SetPhoto(var_456_string); // 0x399 ObjFunc
	var_457_string = ""; // 0x39b PushV
	func_4117(var_457_string); // 0x39c NEW_2
	SetPhoto2(var_457_string); // 0x39e ObjFunc
	var_458_int = 0; // 0x3a0 PushV
	func_4573(var_458_int); // 0x3a1 NEW_2
	SetPlayerName(var_458_int); // 0x3a3 ObjFunc
	var_448_int = -1; // 0x3a5 MovI
	IsOverrideActive(var_447_bool); // 0x3a6 Func
	var_459_bool = var_447_bool; // 0x3a8 Push
	if(var_459_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_439_int = -2; // 0x3aa MovI
	return 8; // 0x3ab Return
	
Label_940:
	DoDialog(var_446_object); // 0x3ac Func
	var_460_bool = 0; var_461_object = Obj(); // 0x3ae PushV
	var_462_object = Obj(); // 0x3af PushV
	func_4027(var_462_object); // 0x3b0 NEW_2
	var_461_object = var_462_object; // 0x3b1 Mov
	func_3836(var_460_bool, var_461_object); // 0x3b3 NEW_2
	var_463_object = Obj(); var_464_object = Obj(); // 0x3b5 PushV
	var_463_object = var_440_object; // 0x3b6 Mov
	var_464_object = var_446_object; // 0x3b7 Mov
	TaskCall(5); // 0x3b8 TaskCall
	func_976(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object); // 0x3b9 NEW_2
	TaskReturn(); // 0x3ba TaskReturn
	IsDialogEnd(var_449_bool); // 0x3bc ObjFunc
	
Label_958:
	var_511_bool = var_449_bool == 0; // 0x3be Not
	if(var_511_bool == 0) goto Label_965; // 0x3bf JumpB
	sync(); // 0x3c0 Func
	IsDialogEnd(var_449_bool); // 0x3c2 ObjFunc
	goto Label_958; // 0x3c4 Jump
	
Label_965:
	var_512_object = Obj(); // 0x3c5 PushV
	var_512_object = var_440_object; // 0x3c6 Mov
	func_3818(); // 0x3c7 NEW_2
	StopDialog(var_446_object); // 0x3c9 Func
	GetReturnValue(var_448_int); // 0x3cb ObjFunc
	var_439_int = var_448_int; // 0x3cd Mov
	return 8; // 0x3ce Return
}


func_4224()
{
	var_561_string = "ood9Xan1"; // 0x1081 PushS
	var_562_int = 1; // 0x1082 PushI
	SetVariable(var_561_string, var_562_int); // 0x1083 Func
	return 0; // 0x1085 Return
}


func_3712()
{
	StopAnimation(); // 0xe80 Func
	StopGroup0(); // 0xe82 Func
	return 0; // 0xe84 Return
}


func_4482(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1182 PushV
	GetDiaryRoot(var_67_object); // 0x1183 Func
	var_68_bool = var_67_object == 0; // 0x1185 Not
	if(var_68_bool == 0) goto Label_4492; // 0x1186 JumpB
	var_69_string = "Can't retrieve diary root"; // 0x1187 PushS
	Trace(var_69_string); // 0x1188 Func
	var_65_object = 0; // 0x118a MovB
	return 2; // 0x118b Return
	
Label_4492:
	var_65_object = var_67_object; // 0x118c Mov
	return 2; // 0x118d Return
}


func_3717(var_56_float)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xe85 PushV
	GetPosition(var_61_cvector); // 0xe86 Func
	GetPosition(var_62_cvector); // 0xe88 ObjFunc
	var_63_cvector = var_62_cvector - var_61_cvector; // 0xe8a Sub2
	var_56_float = var_63_cvector | var_63_cvector; // 0xe8b Or2
	return 6; // 0xe8c Return
}


func_4230()
{
	var_49_string = "d9q01"; // 0x1087 PushS
	var_50_int = 2; // 0x1088 PushI
	SetVariable(var_49_string, var_50_int); // 0x1089 Func
	func_4469(); // 0x108c NEW_2
	return 0; // 0x108e Return
}


func_2437(var_0_object, var_645_int, var_646_object)
{
	var_648_object = Obj(); var_649_bool = 0; var_650_int = 0; var_651_bool = 0; var_652_object = Obj(); var_653_bool = 0; var_654_int = 0; var_655_bool = 0; // 0x985 PushV
	var_0_object = var_646_object; // 0x986 TMov
	var_656_bool = 0; var_657_object = Obj(); var_658_float = 0; // 0x987 PushV
	var_657_object = var_646_object; // 0x988 Mov
	var_658_float = 70.0; // 0x989 MovF
	func_3749(var_657_object, var_658_float); // 0x98a NEW_2
	var_659_bool = var_656_bool == 0; // 0x98c Not
	if(var_659_bool == 0) goto Label_2448; // 0x98d JumpB
	var_645_int = -2; // 0x98e MovI
	return 8; // 0x98f Return
	
Label_2448:
	CreateDialog(var_652_object); // 0x990 Func
	var_660_int = 0; // 0x992 PushV
	func_4113(var_660_int); // 0x993 NEW_2
	SetNPCName(var_660_int); // 0x995 ObjFunc
	var_661_int = 0; // 0x997 PushV
	func_4111(var_661_int); // 0x998 NEW_2
	SetNPCDescription(var_661_int); // 0x99a ObjFunc
	var_662_string = ""; // 0x99c PushV
	func_4115(var_662_string); // 0x99d NEW_2
	SetPhoto(var_662_string); // 0x99f ObjFunc
	var_663_string = ""; // 0x9a1 PushV
	func_4117(var_663_string); // 0x9a2 NEW_2
	SetPhoto2(var_663_string); // 0x9a4 ObjFunc
	var_664_int = 0; // 0x9a6 PushV
	func_4573(var_664_int); // 0x9a7 NEW_2
	SetPlayerName(var_664_int); // 0x9a9 ObjFunc
	var_654_int = -1; // 0x9ab MovI
	IsOverrideActive(var_653_bool); // 0x9ac Func
	var_665_bool = var_653_bool; // 0x9ae Push
	if(var_665_bool == 0) goto Label_2482; // 0x9af JumpB
	var_645_int = -2; // 0x9b0 MovI
	return 8; // 0x9b1 Return
	
Label_2482:
	DoDialog(var_652_object); // 0x9b2 Func
	var_666_bool = 0; var_667_object = Obj(); // 0x9b4 PushV
	var_668_object = Obj(); // 0x9b5 PushV
	func_4027(var_668_object); // 0x9b6 NEW_2
	var_667_object = var_668_object; // 0x9b7 Mov
	func_3836(var_666_bool, var_667_object); // 0x9b9 NEW_2
	var_669_object = Obj(); var_670_object = Obj(); // 0x9bb PushV
	var_669_object = var_646_object; // 0x9bc Mov
	var_670_object = var_652_object; // 0x9bd Mov
	TaskCall(11); // 0x9be TaskCall
	func_2518(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object); // 0x9bf NEW_2
	TaskReturn(); // 0x9c0 TaskReturn
	IsDialogEnd(var_655_bool); // 0x9c2 ObjFunc
	
Label_2500:
	var_718_bool = var_655_bool == 0; // 0x9c4 Not
	if(var_718_bool == 0) goto Label_2507; // 0x9c5 JumpB
	sync(); // 0x9c6 Func
	IsDialogEnd(var_655_bool); // 0x9c8 ObjFunc
	goto Label_2500; // 0x9ca Jump
	
Label_2507:
	var_719_object = Obj(); // 0x9cb PushV
	var_719_object = var_646_object; // 0x9cc Mov
	func_3818(); // 0x9cd NEW_2
	StopDialog(var_652_object); // 0x9cf Func
	GetReturnValue(var_654_int); // 0x9d1 ObjFunc
	var_645_int = var_654_int; // 0x9d3 Mov
	return 8; // 0x9d4 Return
}


func_3974(var_264_string)
{
	var_265_bool = 0; var_266_float = 0; var_267_float = 0; var_268_bool = 0; var_269_float = 0; var_270_float = 0; // 0xf86 PushV
	lshHasAnimation(var_268_bool, var_264_string); // 0xf87 Func
	var_271_bool = var_268_bool; // 0xf89 Push
	if(var_271_bool == 0) goto Label_3985; // 0xf8a JumpB
	lshGetAnimTimes(var_264_string, var_269_float, var_270_float); // 0xf8b Func
	var_272_bool = 0; // 0xf8d PushB
	lshPlayAnimation(var_269_float, var_270_float, var_272_bool); // 0xf8e Func
	goto Label_3989; // 0xf90 Jump
	
Label_3989:
	return 6; // 0xf95 Return
	
Label_3985:
	var_273_string = "Can't find lsh animation : "; // 0xf91 PushS
	var_274_int = var_273_string + var_264_string; // 0xf92 Add
	Trace(var_274_int); // 0xf93 Func
}


func_3465(var_0_object)
{
	var_41_bool = 0; // 0xd89 PushV
	func_3744(var_41_bool); // 0xd8a NEW_2
	var_44_bool = var_41_bool == 0; // 0xd8c Not
	if(var_44_bool == 0) goto Label_3472; // 0xd8d JumpB
	Hold(); // 0xd8e Func
	
Label_3472:
	GetDirection(var_0_object); // 0xd90 Func
	
Label_3474:
	func_3641(); // 0xd93 NEW_2
	goto Label_3474; // 0xd95 Jump
}


func_3725(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; // 0xe8d PushV
	GetPosition(var_54_cvector); // 0xe8e Func
	var_55_cvector = var_50_cvector - var_54_cvector; // 0xe90 Sub2
	var_57_float = GetByIndex(var_55_cvector, 0); // 0xe91 PushE
	var_58_float = GetByIndex(var_55_cvector, 2); // 0xe92 PushE
	Rotate(var_57_float, var_58_float, var_56_bool); // 0xe93 Func
	var_49_bool = var_56_bool; // 0xe95 Mov
	return 6; // 0xe96 Return
}


func_4239()
{
	var_82_int = 0; var_83_int = 0; // 0x108f PushV
	var_84_string = "Rifle"; // 0x1090 PushS
	var_85_int = 5; // 0x1091 PushI
	RemoveItemByType(var_83_int, var_84_string, var_85_int); // 0x1092 ObjFunc
	SelectWeapon(); // 0x1094 ObjFunc
	return 2; // 0x1096 Return
}


func_4495(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; // 0x118f PushV
	var_65_object = Obj(); // 0x1190 PushV
	func_4482(var_65_object); // 0x1191 NEW_2
	var_62_object = var_65_object; // 0x1192 Mov
	Find(var_58_int, var_63_object); // 0x1194 ObjFunc
	var_70_bool = var_63_object == 0; // 0x1196 Not
	if(var_70_bool == 0) goto Label_4510; // 0x1197 JumpB
	var_71_string = "Can't find diary parent with id: "; // 0x1198 PushS
	var_72_int = var_71_string + var_58_int; // 0x1199 Add
	Trace(var_72_int); // 0x119a Func
	var_56_bool = 0; // 0x119c MovB
	return 6; // 0x119d Return
	
Label_4510:
	AddChild(var_57_object); // 0x119e ObjFunc
	var_73_int = 7; // 0x11a0 PushI
	SendWorldWndMessage(var_73_int); // 0x11a1 Func
	GetCategory(var_64_int); // 0x11a3 ObjFunc
	SetDiarySection(var_64_int); // 0x11a5 Func
	var_56_bool = 0; // 0x11a7 MovB
	return 6; // 0x11a8 Return
}


func_3990(var_242_string, var_243_bool)
{
	var_246_bool = 0; var_247_float = 0; var_248_float = 0; var_249_bool = 0; var_250_float = 0; var_251_float = 0; // 0xf96 PushV
	lshHasAnimation(var_249_bool, var_242_string); // 0xf97 Func
	var_252_bool = var_249_bool; // 0xf99 Push
	if(var_252_bool == 0) goto Label_4000; // 0xf9a JumpB
	lshGetAnimTimes(var_242_string, var_250_float, var_251_float); // 0xf9b Func
	lshPlayAnimation(var_250_float, var_251_float, var_243_bool); // 0xf9d Func
	goto Label_4004; // 0xf9f Jump
	
Label_4004:
	return 6; // 0xfa4 Return
	
Label_4000:
	var_253_string = "Can't find lsh animation : "; // 0xfa0 PushS
	var_254_int = var_253_string + var_242_string; // 0xfa1 Add
	Trace(var_254_int); // 0xfa2 Func
}


func_663(var_0_object, var_1_object, var_2_object, var_3_string, var_399_object, var_400_object)
{
	var_0_object = var_400_object; // 0x298 TMov
	var_1_object = var_399_object; // 0x299 TMov
	var_3_string = 0; // 0x29a TMovB
	var_405_int = 1; // 0x29b PushI
	if(var_405_int == 0) goto Label_696; // 0x29c JumpB
	var_406_string = ""; // 0x29d PushV
	var_406_string = "Suspicion"; // 0x29e MovS
	func_726(var_400_object, var_406_string); // 0x29f NEW_2
	var_414_int = 512232; // 0x2a1 PushI
	SetMessage(var_414_int); // 0x2a2 TObjFunc
	ClearReplies(); // 0x2a4 TObjFunc
	var_415_bool = 0; var_416_object = Obj(); // 0x2a6 PushV
	var_416_object = var_1_object; // 0x2a7 MovT
	func_4257(var_416_object); // 0x2a8 NEW_2
	if(var_415_bool == 0) goto Label_688; // 0x2aa JumpB
	var_421_int = 512233; // 0x2ab PushI
	var_422_int = 13389; // 0x2ac PushI
	var_423_int = 13388; // 0x2ad PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x2ae TObjFunc
	
Label_688:
	var_424_int = 533144; // 0x2b0 PushI
	var_425_int = -1; // 0x2b1 PushI
	var_426_int = 34662; // 0x2b2 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x2b3 TObjFunc
	goto Label_696; // 0x2b5 Jump
	
Label_696:
	var_427_bool = 0; // 0x2b8 PushV
	func_4119(var_427_bool); // 0x2b9 NEW_2
	if(var_427_bool == 0) goto Label_711; // 0x2bb JumpB
	
Label_700:
	lshWaitForAnimEnd(); // 0x2bc Func
	var_428_string = var_3_string; // 0x2be PushT
	if(var_428_string == 0) goto Label_705; // 0x2bf JumpB
	goto Label_710; // 0x2c0 Jump
	
Label_710:
	goto Label_725; // 0x2c6 Jump
	
Label_725:
	return 0; // 0x2d5 Return
	
Label_705:
	var_429_string = ""; // 0x2c1 PushV
	var_429_string = var_2_object; // 0x2c2 MovT
	func_3974(var_429_string); // 0x2c3 NEW_2
	goto Label_700; // 0x2c5 Jump
	
Label_711:
	var_430_string = "all"; // 0x2c7 PushS
	var_431_string = "idle"; // 0x2c8 PushS
	PlayAnimation(var_430_string, var_431_string); // 0x2c9 Func
	
Label_715:
	WaitForAnimEnd(); // 0x2cb Func
	var_432_string = var_3_string; // 0x2cd PushT
	if(var_432_string == 0) goto Label_720; // 0x2ce JumpB
	goto Label_725; // 0x2cf Jump
	
Label_720:
	var_433_string = "all"; // 0x2d0 PushS
	var_434_string = "idle"; // 0x2d1 PushS
	PlayAnimation(var_433_string, var_434_string); // 0x2d2 Func
	goto Label_715; // 0x2d4 Jump
}


func_4247()
{
	func_4456(); // 0x1099 NEW_2
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x109b PushV
	var_105_string = "quest_d9_01"; // 0x109c MovS
	var_106_string = "completed"; // 0x109d MovS
	func_4055(var_104_bool, var_105_string, var_106_string); // 0x109e NEW_2
	return 0; // 0x10a0 Return
}


func_3735(var_45_bool)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xe97 PushV
	GetPosition(var_48_cvector); // 0xe98 ObjFunc
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0xe9a PushV
	var_50_cvector = var_48_cvector; // 0xe9b Mov
	func_3725(var_49_bool, var_50_cvector); // 0xe9c NEW_2
	var_45_bool = var_49_bool; // 0xe9d Mov
	return 2; // 0xe9f Return
}


func_3479(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xd97 PushV
	var_69_string = "player"; // 0xd98 PushS
	FindActor(var_68_object, var_69_string); // 0xd99 Func
	var_70_bool = var_68_object == 0; // 0xd9b Not
	if(var_70_bool == 0) goto Label_3487; // 0xd9c JumpB
	var_66_bool = 0; // 0xd9d MovB
	return 2; // 0xd9e Return
	
Label_3487:
	var_71_bool = 0; var_72_object = Obj(); // 0xd9f PushV
	var_72_object = var_68_object; // 0xda0 Mov
	func_3735(var_72_object); // 0xda1 NEW_2
	var_66_bool = var_71_bool; // 0xda2 Mov
	return 2; // 0xda4 Return
}


func_3744(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0xea0 PushV
	IsLoaded(var_43_bool); // 0xea1 Func
	var_41_bool = var_43_bool; // 0xea3 Mov
	return 2; // 0xea4 Return
}


func_4257(var_415_bool)
{
	var_417_int = 0; var_418_string = ""; // 0x10a2 PushV
	var_418_string = "ood7Han1"; // 0x10a3 MovS
	func_4043(var_417_int, var_418_string); // 0x10a4 NEW_2
	var_419_int = 0; // 0x10a6 PushI
	var_420_bool = var_417_int == var_419_int; // 0x10a7 Eq
	if(var_420_bool == 0) goto Label_4267; // 0x10a8 JumpB
	var_415_bool = 1; // 0x10a9 MovB
	return 0; // 0x10aa Return
	
Label_4267:
	var_415_bool = 0; // 0x10ab MovB
	return 0; // 0x10ac Return
}


func_3749(var_75_bool, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; // 0xea5 PushV
	GetPosition(var_88_cvector); // 0xea6 ObjFunc
	GetEyesHeight(var_87_float); // 0xea8 ObjFunc
	var_96_float = GetByIndex(var_88_cvector, 1); // 0xeaa PushE
	var_96_float = var_96_float + var_87_float; // 0xeab Add2
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0xeac PopE
	GetPosition(var_89_cvector); // 0xead Func
	GetEyesHeight(var_87_float); // 0xeaf Func
	var_97_float = GetByIndex(var_89_cvector, 1); // 0xeb1 PushE
	var_97_float = var_97_float + var_87_float; // 0xeb2 Add2
	SetByIndex(var_89_cvector, 1) = var_97_float; // 0xeb3 PopE
	var_90_cvector = var_88_cvector - var_89_cvector; // 0xeb4 Sub2
	var_98_float = GetByIndex(var_90_cvector, 1); // 0xeb5 PushE
	var_98_float = 0; // 0xeb6 MovI
	SetByIndex(var_90_cvector, 1) = var_98_float; // 0xeb7 PopE
	var_99_int = var_90_cvector | var_90_cvector; // 0xeb8 Or
	var_100_float = sqrt(var_99_int); // 0xeb9 Sqrt
	var_90_cvector = var_90_cvector / var_90_cvector; // 0xeba Div2
	var_91_cvector = -var_90_cvector; // 0xebb Neg2
	var_101_float = var_90_cvector * var_77_float; // 0xebc Mult
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0xebd PushV
	var_104_cvector = CVector(0.0, 1.0, 0.0); // 0xebe PushVec
	var_103_cvector = var_91_cvector ^ var_104_cvector; // 0xebf Xor2
	func_4033(var_102_cvector, var_103_cvector); // 0xec0 NEW_2
	var_110_int = 25; // 0xec2 PushI
	var_111_float = var_102_cvector * var_110_int; // 0xec3 Mult
	var_112_int = var_101_float + var_111_float; // 0xec4 Add
	var_113_cvector = CVector(0.0, 10.0, 0.0); // 0xec5 PushVec
	var_92_cvector = var_112_int - var_113_cvector; // 0xec6 Sub2
	var_93_cvector = var_89_cvector + var_92_cvector; // 0xec7 Add2
	IsOverrideActive(var_94_bool); // 0xec8 Func
	var_114_bool = var_94_bool; // 0xeca Push
	if(var_114_bool == 0) goto Label_3790; // 0xecb JumpB
	var_75_bool = 0; // 0xecc MovB
	return 18; // 0xecd Return
	
Label_3790:
	StopWorld(); // 0xece Func
	var_115_bool = 1; // 0xed0 PushB
	CameraTransit(var_93_cvector, var_91_cvector, var_115_bool); // 0xed1 Func
	var_116_float = GetByIndex(var_92_cvector, 0); // 0xed3 PushE
	var_117_float = GetByIndex(var_92_cvector, 2); // 0xed4 PushE
	Rotate(var_116_float, var_117_float); // 0xed5 Func
	var_118_bool = 0; // 0xed7 PushV
	func_4119(var_118_bool); // 0xed8 NEW_2
	if(var_118_bool == 0) goto Label_3804; // 0xeda JumpB
	goto Label_3812; // 0xedb Jump
	
Label_3812:
	CameraWaitForPlayFinish(); // 0xee4 Func
	ResumeWorld(); // 0xee6 Func
	var_75_bool = 1; // 0xee8 MovB
	return 18; // 0xee9 Return
	
Label_3804:
	var_119_string = "head"; // 0xedc PushS
	HasAnimationTrack(var_95_bool, var_119_string); // 0xedd Func
	var_120_bool = var_95_bool; // 0xedf Push
	if(var_120_bool == 0) goto Label_3812; // 0xee0 JumpB
	var_121_string = "head"; // 0xee1 PushS
	LookAsyncCamera(var_121_string); // 0xee2 Func
}


func_4005(var_170_bool, var_171_string)
{
	var_172_bool = 0; var_173_bool = 0; // 0xfa5 PushV
	var_174_bool = 0; // 0xfa6 PushV
	func_4119(var_174_bool); // 0xfa7 NEW_2
	if(var_174_bool == 0) goto Label_4018; // 0xfa9 JumpB
	lshHasSpeech(var_173_bool, var_171_string); // 0xfaa Func
	var_175_bool = var_173_bool; // 0xfac Push
	if(var_175_bool == 0) goto Label_4018; // 0xfad JumpB
	lshPlaySpeech(var_171_string); // 0xfae Func
	var_170_bool = 1; // 0xfb0 MovB
	return 2; // 0xfb1 Return
	
Label_4018:
	var_170_bool = 0; // 0xfb2 MovB
	return 2; // 0xfb3 Return
}


func_3494(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0); // 0xda6 PushE
	var_119_float = GetByIndex(var_0_object, 2); // 0xda7 PushE
	RotateAsync(var_118_float, var_119_float); // 0xda8 Func
	return 0; // 0xdaa Return
}


func_3499(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0xdab PushV
	var_54_string = "player"; // 0xdac PushS
	FindActor(var_52_object, var_54_string); // 0xdad Func
	var_55_bool = var_52_object == 0; // 0xdaf Not
	if(var_55_bool == 0) goto Label_3507; // 0xdb0 JumpB
	var_49_bool = 0; // 0xdb1 MovB
	return 4; // 0xdb2 Return
	
Label_3507:
	var_56_float = 0; var_57_object = Obj(); // 0xdb3 PushV
	var_57_object = var_52_object; // 0xdb4 Mov
	func_3717(var_57_object); // 0xdb5 NEW_2
	var_64_float = 90000.0; // 0xdb7 PushF
	var_65_bool = var_56_float > var_64_float; // 0xdb8 GT
	if(var_65_bool == 0) goto Label_3516; // 0xdb9 JumpB
	var_49_bool = 0; // 0xdba MovB
	return 4; // 0xdbb Return
	
Label_3516:
	CanSee(var_53_bool, var_52_object); // 0xdbc Func
	var_49_bool = var_53_bool; // 0xdbe Mov
	return 4; // 0xdbf Return
}


func_4523(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj(); // 0x11ab PushV
	GetMainOutdoorScene(var_135_object); // 0x11ac Func
	var_137_bool = var_135_object == 0; // 0x11ae NullEq
	if(var_137_bool == 0) goto Label_4534; // 0x11af JumpB
	var_138_string = "Can't find main outdoor scene"; // 0x11b0 PushS
	Trace(var_138_string); // 0x11b1 Func
	var_136_object = 0; // 0x11b3 SetNull
	var_132_object = var_136_object; // 0x11b4 Mov
	return 4; // 0x11b5 Return
	
Label_4534:
	GetMap(var_136_object); // 0x11b6 ObjFunc
	var_132_object = var_136_object; // 0x11b8 Mov
	return 4; // 0x11b9 Return
}


func_4269(var_686_bool)
{
	var_688_int = 0; var_689_string = ""; // 0x10ae PushV
	var_689_string = "d11q05"; // 0x10af MovS
	func_4043(var_688_int, var_689_string); // 0x10b0 NEW_2
	var_690_int = 1; // 0x10b2 PushI
	var_691_bool = var_688_int == var_690_int; // 0x10b3 Eq
	if(var_691_bool == 0) goto Label_4279; // 0x10b4 JumpB
	var_686_bool = 1; // 0x10b5 MovB
	return 0; // 0x10b6 Return
	
Label_4279:
	var_686_bool = 0; // 0x10b7 MovB
	return 0; // 0x10b8 Return
}


func_178(var_2_object, var_340_string)
{
	var_341_bool = 0; // 0xb3 PushV
	func_4119(var_341_bool); // 0xb4 NEW_2
	var_342_bool = var_341_bool == 0; // 0xb6 Not
	if(var_342_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_343_bool = var_340_string == var_2_object; // 0xb9 Eq
	if(var_343_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_344_string = ""; var_345_bool = 0; // 0xbc PushV
	var_344_string = var_340_string; // 0xbd Mov
	var_346_string = ""; // 0xbe PushS
	var_347_bool = var_340_string == var_346_string; // 0xbf Eq
	if(var_347_bool == 0) goto Label_195; // 0xc0 JumpB
	var_345_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_3990(var_344_string, var_345_bool); // 0xc4 NEW_2
	var_2_object = var_340_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_345_bool = 1; // 0xc3 MovB
}


func_4020()
{
	var_44_bool = 0; // 0xfb4 PushV
	func_4119(var_44_bool); // 0xfb5 NEW_2
	if(var_44_bool == 0) goto Label_4026; // 0xfb7 JumpB
	lshStopSpeech(); // 0xfb8 Func
	
Label_4026:
	return 0; // 0xfba Return
}


func_2999(var_0_object, var_722_int, var_723_object)
{
	var_725_object = Obj(); var_726_bool = 0; var_727_int = 0; var_728_bool = 0; var_729_object = Obj(); var_730_bool = 0; var_731_int = 0; var_732_bool = 0; // 0xbb7 PushV
	var_0_object = var_723_object; // 0xbb8 TMov
	var_733_bool = 0; var_734_object = Obj(); var_735_float = 0; // 0xbb9 PushV
	var_734_object = var_723_object; // 0xbba Mov
	var_735_float = 70.0; // 0xbbb MovF
	func_3749(var_734_object, var_735_float); // 0xbbc NEW_2
	var_736_bool = var_733_bool == 0; // 0xbbe Not
	if(var_736_bool == 0) goto Label_3010; // 0xbbf JumpB
	var_722_int = -2; // 0xbc0 MovI
	return 8; // 0xbc1 Return
	
Label_3010:
	CreateDialog(var_729_object); // 0xbc2 Func
	var_737_int = 0; // 0xbc4 PushV
	func_4113(var_737_int); // 0xbc5 NEW_2
	SetNPCName(var_737_int); // 0xbc7 ObjFunc
	var_738_int = 0; // 0xbc9 PushV
	func_4111(var_738_int); // 0xbca NEW_2
	SetNPCDescription(var_738_int); // 0xbcc ObjFunc
	var_739_string = ""; // 0xbce PushV
	func_4115(var_739_string); // 0xbcf NEW_2
	SetPhoto(var_739_string); // 0xbd1 ObjFunc
	var_740_string = ""; // 0xbd3 PushV
	func_4117(var_740_string); // 0xbd4 NEW_2
	SetPhoto2(var_740_string); // 0xbd6 ObjFunc
	var_741_int = 0; // 0xbd8 PushV
	func_4573(var_741_int); // 0xbd9 NEW_2
	SetPlayerName(var_741_int); // 0xbdb ObjFunc
	var_731_int = -1; // 0xbdd MovI
	IsOverrideActive(var_730_bool); // 0xbde Func
	var_742_bool = var_730_bool; // 0xbe0 Push
	if(var_742_bool == 0) goto Label_3044; // 0xbe1 JumpB
	var_722_int = -2; // 0xbe2 MovI
	return 8; // 0xbe3 Return
	
Label_3044:
	DoDialog(var_729_object); // 0xbe4 Func
	var_743_bool = 0; var_744_object = Obj(); // 0xbe6 PushV
	var_745_object = Obj(); // 0xbe7 PushV
	func_4027(var_745_object); // 0xbe8 NEW_2
	var_744_object = var_745_object; // 0xbe9 Mov
	func_3836(var_743_bool, var_744_object); // 0xbeb NEW_2
	var_746_object = Obj(); var_747_object = Obj(); // 0xbed PushV
	var_746_object = var_723_object; // 0xbee Mov
	var_747_object = var_729_object; // 0xbef Mov
	TaskCall(13); // 0xbf0 TaskCall
	func_3080(var_748_object, var_749_object, var_750_string, var_751_bool, var_746_object, var_747_object); // 0xbf1 NEW_2
	TaskReturn(); // 0xbf2 TaskReturn
	IsDialogEnd(var_732_bool); // 0xbf4 ObjFunc
	
Label_3062:
	var_779_bool = var_732_bool == 0; // 0xbf6 Not
	if(var_779_bool == 0) goto Label_3069; // 0xbf7 JumpB
	sync(); // 0xbf8 Func
	IsDialogEnd(var_732_bool); // 0xbfa ObjFunc
	goto Label_3062; // 0xbfc Jump
	
Label_3069:
	var_780_object = Obj(); // 0xbfd PushV
	var_780_object = var_723_object; // 0xbfe Mov
	func_3818(); // 0xbff NEW_2
	StopDialog(var_729_object); // 0xc01 Func
	GetReturnValue(var_731_int); // 0xc03 ObjFunc
	var_722_int = var_731_int; // 0xc05 Mov
	return 8; // 0xc06 Return
}


func_4281(var_692_bool, var_693_object)
{
	var_694_bool = 0; var_695_object = Obj(); var_696_string = ""; // 0x10ba PushV
	var_695_object = var_693_object; // 0x10bb Mov
	var_696_string = "burah_serum"; // 0x10bc MovS
	func_4048(var_695_object, var_696_string); // 0x10bd NEW_2
	if(var_694_bool == 0) goto Label_4290; // 0x10bf JumpB
	var_692_bool = 1; // 0x10c0 MovB
	return 0; // 0x10c1 Return
	
Label_4290:
	var_692_bool = 0; // 0x10c2 MovB
	return 0; // 0x10c3 Return
}


func_3258(var_0_object, var_781_int, var_782_object)
{
	var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0; // 0xcba PushV
	var_0_object = var_782_object; // 0xcbb TMov
	var_792_bool = 0; var_793_object = Obj(); var_794_float = 0; // 0xcbc PushV
	var_793_object = var_782_object; // 0xcbd Mov
	var_794_float = 70.0; // 0xcbe MovF
	func_3749(var_793_object, var_794_float); // 0xcbf NEW_2
	var_795_bool = var_792_bool == 0; // 0xcc1 Not
	if(var_795_bool == 0) goto Label_3269; // 0xcc2 JumpB
	var_781_int = -2; // 0xcc3 MovI
	return 8; // 0xcc4 Return
	
Label_3269:
	CreateDialog(var_788_object); // 0xcc5 Func
	var_796_int = 0; // 0xcc7 PushV
	func_4113(var_796_int); // 0xcc8 NEW_2
	SetNPCName(var_796_int); // 0xcca ObjFunc
	var_797_int = 0; // 0xccc PushV
	func_4111(var_797_int); // 0xccd NEW_2
	SetNPCDescription(var_797_int); // 0xccf ObjFunc
	var_798_string = ""; // 0xcd1 PushV
	func_4115(var_798_string); // 0xcd2 NEW_2
	SetPhoto(var_798_string); // 0xcd4 ObjFunc
	var_799_string = ""; // 0xcd6 PushV
	func_4117(var_799_string); // 0xcd7 NEW_2
	SetPhoto2(var_799_string); // 0xcd9 ObjFunc
	var_800_int = 0; // 0xcdb PushV
	func_4573(var_800_int); // 0xcdc NEW_2
	SetPlayerName(var_800_int); // 0xcde ObjFunc
	var_790_int = -1; // 0xce0 MovI
	IsOverrideActive(var_789_bool); // 0xce1 Func
	var_801_bool = var_789_bool; // 0xce3 Push
	if(var_801_bool == 0) goto Label_3303; // 0xce4 JumpB
	var_781_int = -2; // 0xce5 MovI
	return 8; // 0xce6 Return
	
Label_3303:
	DoDialog(var_788_object); // 0xce7 Func
	var_802_bool = 0; var_803_object = Obj(); // 0xce9 PushV
	var_804_object = Obj(); // 0xcea PushV
	func_4027(var_804_object); // 0xceb NEW_2
	var_803_object = var_804_object; // 0xcec Mov
	func_3836(var_802_bool, var_803_object); // 0xcee NEW_2
	var_805_object = Obj(); var_806_object = Obj(); // 0xcf0 PushV
	var_805_object = var_782_object; // 0xcf1 Mov
	var_806_object = var_788_object; // 0xcf2 Mov
	TaskCall(15); // 0xcf3 TaskCall
	func_3339(var_807_object, var_808_object, var_809_string, var_810_bool, var_805_object, var_806_object); // 0xcf4 NEW_2
	TaskReturn(); // 0xcf5 TaskReturn
	IsDialogEnd(var_791_bool); // 0xcf7 ObjFunc
	
Label_3321:
	var_835_bool = var_791_bool == 0; // 0xcf9 Not
	if(var_835_bool == 0) goto Label_3328; // 0xcfa JumpB
	sync(); // 0xcfb Func
	IsDialogEnd(var_791_bool); // 0xcfd ObjFunc
	goto Label_3321; // 0xcff Jump
	
Label_3328:
	var_836_object = Obj(); // 0xd00 PushV
	var_836_object = var_782_object; // 0xd01 Mov
	func_3818(); // 0xd02 NEW_2
	StopDialog(var_788_object); // 0xd04 Func
	GetReturnValue(var_790_int); // 0xd06 ObjFunc
	var_781_int = var_790_int; // 0xd08 Mov
	return 8; // 0xd09 Return
}


func_4027(var_138_object)
{
	var_139_object = Obj(); var_140_object = Obj(); // 0xfbb PushV
	self(var_140_object); // 0xfbc Func
	var_138_object = var_140_object; // 0xfbe Mov
	return 2; // 0xfbf Return
}


func_4540(var_129_object, var_130_string, var_131_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0; // 0x11bc PushV
	GetMainOutdoorScene(var_145_object); // 0x11bd Func
	var_147_bool = var_145_object == 0; // 0x11bf NullEq
	if(var_147_bool == 0) goto Label_4549; // 0x11c0 JumpB
	var_148_string = "Can't find main outdoor scene"; // 0x11c1 PushS
	Trace(var_148_string); // 0x11c2 Func
	return 8; // 0x11c4 Return
	
Label_4549:
	GetLocator(var_130_string, var_146_bool, var_143_cvector, var_144_cvector); // 0x11c5 ObjFunc
	var_149_bool = var_146_bool == 0; // 0x11c7 Not
	if(var_149_bool == 0) goto Label_4559; // 0x11c8 JumpB
	var_150_string = "Warning: outdoor scene locator "; // 0x11c9 PushS
	var_151_int = var_150_string + var_130_string; // 0x11ca Add
	var_152_string = " doesnt exist"; // 0x11cb PushS
	var_153_int = var_151_int + var_152_string; // 0x11cc Add
	Trace(var_153_int); // 0x11cd Func
	
Label_4559:
	GetMap(var_129_object); // 0x11cf ObjFunc
	var_154_bool = var_129_object == 0; // 0x11d1 NullEq
	if(var_154_bool == 0) goto Label_4567; // 0x11d2 JumpB
	var_155_string = "Can't find map"; // 0x11d3 PushS
	Trace(var_155_string); // 0x11d4 Func
	return 8; // 0x11d6 Return
	
Label_4567:
	var_156_float = GetByIndex(var_143_cvector, 0); // 0x11d7 PushE
	var_157_float = GetByIndex(var_143_cvector, 2); // 0x11d8 PushE
	SetMapParams(var_156_float, var_157_float, var_131_float); // 0x11d9 ObjFunc
	return 8; // 0x11db Return
}


func_3521()
{
	var_839_float = 0; var_840_float = 0; // 0xdc1 PushV
	var_841_int = 8; // 0xdc2 PushI
	var_842_int = 16; // 0xdc3 PushI
	rand(var_840_float, var_841_int, var_842_int); // 0xdc4 Func
	var_843_int = 10; // 0xdc6 PushI
	SetTimer(var_843_int, var_840_float); // 0xdc7 Func
	return 2; // 0xdc9 Return
}


func_4033(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0; // 0xfc1 PushV
	var_107_int = var_103_cvector | var_103_cvector; // 0xfc2 Or
	var_106_float = sqrt(var_107_int); // 0xfc3 Sqrt2
	var_108_float = 0.0; // 0xfc4 PushF
	var_109_bool = var_106_float < var_108_float; // 0xfc5 LT
	if(var_109_bool == 0) goto Label_4041; // 0xfc6 JumpB
	var_102_cvector = CVector(0.0, 0.0, 0.0); // 0xfc7 MovV
	return 2; // 0xfc8 Return
	
Label_4041:
	var_102_cvector = var_103_cvector / var_103_cvector; // 0xfc9 Div2
	return 2; // 0xfca Return
}


func_4292(var_623_bool)
{
	var_625_int = 0; var_626_string = ""; // 0x10c5 PushV
	var_626_string = "d9q01"; // 0x10c6 MovS
	func_4043(var_625_int, var_626_string); // 0x10c7 NEW_2
	var_627_int = 1000; // 0x10c9 PushI
	var_628_bool = var_625_int == var_627_int; // 0x10ca Eq
	if(var_628_bool == 0) goto Label_4302; // 0x10cb JumpB
	var_623_bool = 1; // 0x10cc MovB
	return 0; // 0x10cd Return
	
Label_4302:
	var_623_bool = 0; // 0x10ce MovB
	return 0; // 0x10cf Return
}


func_3530()
{
	var_838_int = 10; // 0xdca PushI
	KillTimer(var_838_int); // 0xdcb Func
	return 0; // 0xdcd Return
}


func_2251(var_0_object, var_1_object, var_2_object, var_3_string, var_231_object, var_232_object)
{
	var_0_object = var_232_object; // 0x8cc TMov
	var_1_object = var_231_object; // 0x8cd TMov
	var_3_string = 0; // 0x8ce TMovB
	var_237_int = 1; // 0x8cf PushI
	if(var_237_int == 0) goto Label_2279; // 0x8d0 JumpB
	var_238_string = ""; // 0x8d1 PushV
	var_238_string = "Neutral"; // 0x8d2 MovS
	func_2309(var_232_object, var_238_string); // 0x8d3 NEW_2
	var_255_int = 518006; // 0x8d5 PushI
	SetMessage(var_255_int); // 0x8d6 TObjFunc
	ClearReplies(); // 0x8d8 TObjFunc
	var_256_int = 518007; // 0x8da PushI
	var_257_int = 36191; // 0x8db PushI
	var_258_int = 19140; // 0x8dc PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x8dd TObjFunc
	var_259_int = 534556; // 0x8df PushI
	var_260_int = 36189; // 0x8e0 PushI
	var_261_int = 36188; // 0x8e1 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x8e2 TObjFunc
	goto Label_2279; // 0x8e4 Jump
	
Label_2279:
	var_262_bool = 0; // 0x8e7 PushV
	func_4119(var_262_bool); // 0x8e8 NEW_2
	if(var_262_bool == 0) goto Label_2294; // 0x8ea JumpB
	
Label_2283:
	lshWaitForAnimEnd(); // 0x8eb Func
	var_263_string = var_3_string; // 0x8ed PushT
	if(var_263_string == 0) goto Label_2288; // 0x8ee JumpB
	goto Label_2293; // 0x8ef Jump
	
Label_2293:
	goto Label_2308; // 0x8f5 Jump
	
Label_2308:
	return 0; // 0x904 Return
	
Label_2288:
	var_264_string = ""; // 0x8f0 PushV
	var_264_string = var_2_object; // 0x8f1 MovT
	func_3974(var_264_string); // 0x8f2 NEW_2
	goto Label_2283; // 0x8f4 Jump
	
Label_2294:
	var_275_string = "all"; // 0x8f6 PushS
	var_276_string = "idle"; // 0x8f7 PushS
	PlayAnimation(var_275_string, var_276_string); // 0x8f8 Func
	
Label_2298:
	WaitForAnimEnd(); // 0x8fa Func
	var_277_string = var_3_string; // 0x8fc PushT
	if(var_277_string == 0) goto Label_2303; // 0x8fd JumpB
	goto Label_2308; // 0x8fe Jump
	
Label_2303:
	var_278_string = "all"; // 0x8ff PushS
	var_279_string = "idle"; // 0x900 PushS
	PlayAnimation(var_278_string, var_279_string); // 0x901 Func
	goto Label_2298; // 0x903 Jump
}


func_4043(var_330_int, var_331_string)
{
	var_332_int = 0; var_333_int = 0; // 0xfcb PushV
	GetVariable(var_331_string, var_333_int); // 0xfcc Func
	var_330_int = var_333_int; // 0xfce Mov
	return 2; // 0xfcf Return
}


func_4304(var_629_bool)
{
	var_631_int = 0; var_632_string = ""; // 0x10d1 PushV
	var_632_string = "ood9Xan3"; // 0x10d2 MovS
	func_4043(var_631_int, var_632_string); // 0x10d3 NEW_2
	var_633_int = 0; // 0x10d5 PushI
	var_634_bool = var_631_int == var_633_int; // 0x10d6 Eq
	if(var_634_bool == 0) goto Label_4314; // 0x10d7 JumpB
	var_629_bool = 1; // 0x10d8 MovB
	return 0; // 0x10d9 Return
	
Label_4314:
	var_629_bool = 0; // 0x10da MovB
	return 0; // 0x10db Return
}


func_976(var_0_object, var_1_object, var_2_object, var_3_string, var_463_object, var_464_object)
{
	var_0_object = var_464_object; // 0x3d1 TMov
	var_1_object = var_463_object; // 0x3d2 TMov
	var_3_string = 0; // 0x3d3 TMovB
	var_469_int = 1; // 0x3d4 PushI
	if(var_469_int == 0) goto Label_1034; // 0x3d5 JumpB
	var_470_bool = 0; var_471_object = Obj(); // 0x3d6 PushV
	var_471_object = var_1_object; // 0x3d7 MovT
	func_4333(var_471_object); // 0x3d8 NEW_2
	if(var_470_bool == 0) goto Label_1012; // 0x3da JumpB
	var_476_object = Obj(); var_477_object = Obj(); // 0x3db PushV
	var_476_object = var_1_object; // 0x3dc MovT
	var_477_object = var_0_object; // 0x3dd MovT
	func_4218(); // 0x3de NEW_2
	var_480_string = ""; // 0x3e0 PushV
	var_480_string = "Grin"; // 0x3e1 MovS
	func_1064(var_464_object, var_480_string); // 0x3e2 NEW_2
	var_488_int = 512330; // 0x3e4 PushI
	SetMessage(var_488_int); // 0x3e5 TObjFunc
	ClearReplies(); // 0x3e7 TObjFunc
	var_489_int = 512331; // 0x3e9 PushI
	var_490_int = 13491; // 0x3ea PushI
	var_491_int = 13490; // 0x3eb PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x3ec TObjFunc
	var_492_int = 512336; // 0x3ee PushI
	var_493_int = -1; // 0x3ef PushI
	var_494_int = 13495; // 0x3f0 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x3f1 TObjFunc
	goto Label_1034; // 0x3f3 Jump
	
Label_1034:
	var_495_bool = 0; // 0x40a PushV
	func_4119(var_495_bool); // 0x40b NEW_2
	if(var_495_bool == 0) goto Label_1049; // 0x40d JumpB
	
Label_1038:
	lshWaitForAnimEnd(); // 0x40e Func
	var_496_string = var_3_string; // 0x410 PushT
	if(var_496_string == 0) goto Label_1043; // 0x411 JumpB
	goto Label_1048; // 0x412 Jump
	
Label_1048:
	goto Label_1063; // 0x418 Jump
	
Label_1063:
	return 0; // 0x427 Return
	
Label_1043:
	var_497_string = ""; // 0x413 PushV
	var_497_string = var_2_object; // 0x414 MovT
	func_3974(var_497_string); // 0x415 NEW_2
	goto Label_1038; // 0x417 Jump
	
Label_1049:
	var_498_string = "all"; // 0x419 PushS
	var_499_string = "idle"; // 0x41a PushS
	PlayAnimation(var_498_string, var_499_string); // 0x41b Func
	
Label_1053:
	WaitForAnimEnd(); // 0x41d Func
	var_500_string = var_3_string; // 0x41f PushT
	if(var_500_string == 0) goto Label_1058; // 0x420 JumpB
	goto Label_1063; // 0x421 Jump
	
Label_1058:
	var_501_string = "all"; // 0x422 PushS
	var_502_string = "idle"; // 0x423 PushS
	PlayAnimation(var_501_string, var_502_string); // 0x424 Func
	goto Label_1053; // 0x426 Jump
	
Label_1012:
	var_503_string = ""; // 0x3f4 PushV
	var_503_string = "Neutral"; // 0x3f5 MovS
	func_1064(var_464_object, var_503_string); // 0x3f6 NEW_2
	var_504_int = 513781; // 0x3f8 PushI
	SetMessage(var_504_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_505_int = 513782; // 0x3fd PushI
	var_506_int = -1; // 0x3fe PushI
	var_507_int = 15018; // 0x3ff PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x400 TObjFunc
	var_508_int = 541839; // 0x402 PushI
	var_509_int = -1; // 0x403 PushI
	var_510_int = 44056; // 0x404 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x405 TObjFunc
	goto Label_1034; // 0x407 Jump
}


func_4048(var_694_bool, var_696_string)
{
	var_697_int = 0; var_698_bool = 0; var_699_int = 0; var_700_bool = 0; // 0xfd0 PushV
	GetInvItemByName(var_699_int, var_696_string); // 0xfd1 Func
	HasItem(var_699_int, var_700_bool); // 0xfd3 ObjFunc
	var_694_bool = var_700_bool; // 0xfd5 Mov
	return 4; // 0xfd6 Return
}


func_726(var_2_object, var_406_string)
{
	var_407_bool = 0; // 0x2d7 PushV
	func_4119(var_407_bool); // 0x2d8 NEW_2
	var_408_bool = var_407_bool == 0; // 0x2da Not
	if(var_408_bool == 0) goto Label_733; // 0x2db JumpB
	return 0; // 0x2dc Return
	
Label_733:
	var_409_bool = var_406_string == var_2_object; // 0x2dd Eq
	if(var_409_bool == 0) goto Label_736; // 0x2de JumpB
	return 0; // 0x2df Return
	
Label_736:
	var_410_string = ""; var_411_bool = 0; // 0x2e0 PushV
	var_410_string = var_406_string; // 0x2e1 Mov
	var_412_string = ""; // 0x2e2 PushS
	var_413_bool = var_406_string == var_412_string; // 0x2e3 Eq
	if(var_413_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_411_bool = 0; // 0x2e5 MovB
	goto Label_744; // 0x2e6 Jump
	
Label_744:
	func_3990(var_410_string, var_411_bool); // 0x2e8 NEW_2
	var_2_object = var_406_string; // 0x2ea TMov
	return 0; // 0x2eb Return
	
Label_743:
	var_411_bool = 1; // 0x2e7 MovB
}


func_2518(var_0_object, var_1_object, var_2_object, var_3_string, var_669_object, var_670_object)
{
	var_0_object = var_670_object; // 0x9d7 TMov
	var_1_object = var_669_object; // 0x9d8 TMov
	var_3_string = 0; // 0x9d9 TMovB
	var_675_int = 1; // 0x9da PushI
	if(var_675_int == 0) goto Label_2565; // 0x9db JumpB
	var_676_string = ""; // 0x9dc PushV
	var_676_string = "Suspicion"; // 0x9dd MovS
	func_2595(var_670_object, var_676_string); // 0x9de NEW_2
	var_684_int = 534481; // 0x9e0 PushI
	SetMessage(var_684_int); // 0x9e1 TObjFunc
	ClearReplies(); // 0x9e3 TObjFunc
	var_685_bool = 0; // 0x9e5 PushV
	var_685_bool = 0; // 0x9e6 MovB
	var_686_bool = 0; var_687_object = Obj(); // 0x9e7 PushV
	var_687_object = var_1_object; // 0x9e8 MovT
	func_4269(var_687_object); // 0x9e9 NEW_2
	if(var_686_bool == 0) goto Label_2546; // 0x9eb JumpB
	var_692_bool = 0; var_693_object = Obj(); // 0x9ec PushV
	var_693_object = var_1_object; // 0x9ed MovT
	func_4281(var_692_bool, var_693_object); // 0x9ee NEW_2
	if(var_692_bool == 0) goto Label_2546; // 0x9f0 JumpB
	var_685_bool = 1; // 0x9f1 MovB
	
Label_2546:
	if(var_685_bool == 0) goto Label_2552; // 0x9f2 JumpB
	var_701_int = 534482; // 0x9f3 PushI
	var_702_int = 38410; // 0x9f4 PushI
	var_703_int = 36127; // 0x9f5 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x9f6 TObjFunc
	
Label_2552:
	var_704_int = 534489; // 0x9f8 PushI
	var_705_int = -1; // 0x9f9 PushI
	var_706_int = 36134; // 0x9fa PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0x9fb TObjFunc
	var_707_int = 536587; // 0x9fd PushI
	var_708_int = -1; // 0x9fe PushI
	var_709_int = 38409; // 0x9ff PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0xa00 TObjFunc
	goto Label_2565; // 0xa02 Jump
	
Label_2565:
	var_710_bool = 0; // 0xa05 PushV
	func_4119(var_710_bool); // 0xa06 NEW_2
	if(var_710_bool == 0) goto Label_2580; // 0xa08 JumpB
	
Label_2569:
	lshWaitForAnimEnd(); // 0xa09 Func
	var_711_string = var_3_string; // 0xa0b PushT
	if(var_711_string == 0) goto Label_2574; // 0xa0c JumpB
	goto Label_2579; // 0xa0d Jump
	
Label_2579:
	goto Label_2594; // 0xa13 Jump
	
Label_2594:
	return 0; // 0xa22 Return
	
Label_2574:
	var_712_string = ""; // 0xa0e PushV
	var_712_string = var_2_object; // 0xa0f MovT
	func_3974(var_712_string); // 0xa10 NEW_2
	goto Label_2569; // 0xa12 Jump
	
Label_2580:
	var_713_string = "all"; // 0xa14 PushS
	var_714_string = "idle"; // 0xa15 PushS
	PlayAnimation(var_713_string, var_714_string); // 0xa16 Func
	
Label_2584:
	WaitForAnimEnd(); // 0xa18 Func
	var_715_string = var_3_string; // 0xa1a PushT
	if(var_715_string == 0) goto Label_2589; // 0xa1b JumpB
	goto Label_2594; // 0xa1c Jump
	
Label_2589:
	var_716_string = "all"; // 0xa1d PushS
	var_717_string = "idle"; // 0xa1e PushS
	PlayAnimation(var_716_string, var_717_string); // 0xa1f Func
	goto Label_2584; // 0xa21 Jump
}


func_4055(var_74_bool, var_75_string, var_76_string)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0xfd7 PushV
	FindActor(var_78_object, var_75_string); // 0xfd8 Func
	var_79_bool = var_78_object == 0; // 0xfda NullEq
	if(var_79_bool == 0) goto Label_4062; // 0xfdb JumpB
	var_74_bool = 0; // 0xfdc MovB
	return 2; // 0xfdd Return
	
Label_4062:
	Trigger(var_78_object, var_76_string); // 0xfde Func
	var_74_bool = 1; // 0xfe0 MovB
	return 2; // 0xfe1 Return
}


func_4316(var_336_bool)
{
	var_336_bool = 1; // 0x10dd MovB
	return 0; // 0x10de Return
}


func_4573(var_127_int)
{
	var_128_int = 0; var_129_int = 0; // 0x11dd PushV
	var_130_string = "branch"; // 0x11de PushS
	GetVariable(var_130_string, var_129_int); // 0x11df Func
	var_131_int = 0; // 0x11e1 PushI
	var_132_bool = var_129_int == var_131_int; // 0x11e2 Eq
	if(var_132_bool == 0) goto Label_4583; // 0x11e3 JumpB
	var_127_int = 1; // 0x11e4 MovI
	return 2; // 0x11e5 Return
	
Label_4583:
	var_133_int = 1; // 0x11e7 PushI
	var_134_bool = var_129_int == var_133_int; // 0x11e8 Eq
	if(var_134_bool == 0) goto Label_4588; // 0x11e9 JumpB
	var_127_int = 2; // 0x11ea MovI
	return 2; // 0x11eb Return
	
Label_4588:
	var_127_int = 3; // 0x11ec MovI
	return 2; // 0x11ed Return
}


func_4321(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x10e2 PushV
	var_331_string = "d3q02"; // 0x10e3 MovS
	func_4043(var_330_int, var_331_string); // 0x10e4 NEW_2
	var_334_int = 3; // 0x10e6 PushI
	var_335_bool = var_330_int == var_334_int; // 0x10e7 Eq
	if(var_335_bool == 0) goto Label_4331; // 0x10e8 JumpB
	var_328_bool = 1; // 0x10e9 MovB
	return 0; // 0x10ea Return
	
Label_4331:
	var_328_bool = 0; // 0x10eb MovB
	return 0; // 0x10ec Return
}


func_4067(var_64_float)
{
	var_65_float = 0; var_66_float = 0; // 0xfe3 PushV
	GetGameTime(var_66_float); // 0xfe4 Func
	var_64_float = var_66_float; // 0xfe6 Mov
	return 2; // 0xfe7 Return
}


func_4072(var_191_int)
{
	var_192_float = 0; var_193_float = 0; // 0xfe8 PushV
	GetGameTime(var_193_float); // 0xfe9 Func
	var_194_int = 1; // 0xfeb PushI
	var_195_int = 0; // 0xfec PushV
	var_196_int = 24; // 0xfed PushI
	var_195_int = var_193_float / var_193_float; // 0xfee Div2
	var_191_int = var_194_int + var_195_int; // 0xfef Add2
	return 2; // 0xff0 Return
}


func_3818()
{
	var_282_bool = 0; var_283_bool = 0; // 0xeea PushV
	var_284_bool = 1; // 0xeeb PushB
	CameraSwitchToNormal(var_284_bool); // 0xeec Func
	var_285_bool = 0; // 0xeee PushV
	func_4119(var_285_bool); // 0xeef NEW_2
	if(var_285_bool == 0) goto Label_3827; // 0xef1 JumpB
	goto Label_3835; // 0xef2 Jump
	
Label_3835:
	return 2; // 0xefb Return
	
Label_3827:
	var_286_string = "head"; // 0xef3 PushS
	HasAnimationTrack(var_283_bool, var_286_string); // 0xef4 Func
	var_287_bool = var_283_bool; // 0xef6 Push
	if(var_287_bool == 0) goto Label_3835; // 0xef7 JumpB
	var_288_string = "head"; // 0xef8 PushS
	UnlookAsync(var_288_string); // 0xef9 Func
}


func_4333(var_470_bool)
{
	var_472_int = 0; var_473_string = ""; // 0x10ee PushV
	var_473_string = "ood8Han1"; // 0x10ef MovS
	func_4043(var_472_int, var_473_string); // 0x10f0 NEW_2
	var_474_int = 0; // 0x10f2 PushI
	var_475_bool = var_472_int == var_474_int; // 0x10f3 Eq
	if(var_475_bool == 0) goto Label_4343; // 0x10f4 JumpB
	var_470_bool = 1; // 0x10f5 MovB
	return 0; // 0x10f6 Return
	
Label_4343:
	var_470_bool = 0; // 0x10f7 MovB
	return 0; // 0x10f8 Return
}


func_4590(var_59_object)
{
	var_60_int = 0; var_61_int = 0; // 0x11ee PushV
	var_62_string = "mt_han"; // 0x11ef PushS
	GetVariable(var_62_string, var_61_int); // 0x11f0 Func
	var_63_bool = var_61_int == 0; // 0x11f2 Not
	if(var_63_bool == 0) goto Label_4606; // 0x11f3 JumpB
	var_64_int = 0; var_65_object = Obj(); // 0x11f4 PushV
	var_65_object = var_59_object; // 0x11f5 Mov
	TaskCall(8); // 0x11f6 TaskCall
	func_2170(var_66_object, var_64_int, var_65_object); // 0x11f7 NEW_2
	TaskReturn(); // 0x11f8 TaskReturn
	var_289_string = "mt_han"; // 0x11fa PushS
	var_290_int = 1; // 0x11fb PushI
	SetVariable(var_289_string, var_290_int); // 0x11fc Func
	
Label_4606:
	var_291_bool = 0; var_292_int = 0; // 0x11fe PushV
	var_292_int = 1; // 0x11ff MovI
	func_4081(var_291_bool, var_292_int); // 0x1200 NEW_2
	if(var_291_bool == 0) goto Label_4612; // 0x1202 JumpB
	return 2; // 0x1203 Return
	
Label_4612:
	var_294_bool = 0; var_295_int = 0; // 0x1204 PushV
	var_295_int = 3; // 0x1205 MovI
	func_4081(var_294_bool, var_295_int); // 0x1206 NEW_2
	if(var_294_bool == 0) goto Label_4624; // 0x1208 JumpB
	var_296_int = 0; var_297_object = Obj(); // 0x1209 PushV
	var_297_object = var_59_object; // 0x120a Mov
	TaskCall(0); // 0x120b TaskCall
	func_0(var_298_object, var_296_int, var_297_object); // 0x120c NEW_2
	TaskReturn(); // 0x120d TaskReturn
	return 2; // 0x120f Return
	
Label_4624:
	var_373_bool = 0; var_374_int = 0; // 0x1210 PushV
	var_374_int = 7; // 0x1211 MovI
	func_4081(var_373_bool, var_374_int); // 0x1212 NEW_2
	if(var_373_bool == 0) goto Label_4636; // 0x1214 JumpB
	var_375_int = 0; var_376_object = Obj(); // 0x1215 PushV
	var_376_object = var_59_object; // 0x1216 Mov
	TaskCall(2); // 0x1217 TaskCall
	func_582(var_377_object, var_375_int, var_376_object); // 0x1218 NEW_2
	TaskReturn(); // 0x1219 TaskReturn
	return 2; // 0x121b Return
	
Label_4636:
	var_437_bool = 0; var_438_int = 0; // 0x121c PushV
	var_438_int = 8; // 0x121d MovI
	func_4081(var_437_bool, var_438_int); // 0x121e NEW_2
	if(var_437_bool == 0) goto Label_4648; // 0x1220 JumpB
	var_439_int = 0; var_440_object = Obj(); // 0x1221 PushV
	var_440_object = var_59_object; // 0x1222 Mov
	TaskCall(4); // 0x1223 TaskCall
	func_895(var_441_object, var_439_int, var_440_object); // 0x1224 NEW_2
	TaskReturn(); // 0x1225 TaskReturn
	return 2; // 0x1227 Return
	
Label_4648:
	var_513_bool = 0; var_514_int = 0; // 0x1228 PushV
	var_514_int = 9; // 0x1229 MovI
	func_4081(var_513_bool, var_514_int); // 0x122a NEW_2
	if(var_513_bool == 0) goto Label_4660; // 0x122c JumpB
	var_515_int = 0; var_516_object = Obj(); // 0x122d PushV
	var_516_object = var_59_object; // 0x122e Mov
	TaskCall(6); // 0x122f TaskCall
	func_1294(var_517_object, var_515_int, var_516_object); // 0x1230 NEW_2
	TaskReturn(); // 0x1231 TaskReturn
	return 2; // 0x1233 Return
	
Label_4660:
	var_643_bool = 0; var_644_int = 0; // 0x1234 PushV
	var_644_int = 11; // 0x1235 MovI
	func_4081(var_643_bool, var_644_int); // 0x1236 NEW_2
	if(var_643_bool == 0) goto Label_4672; // 0x1238 JumpB
	var_645_int = 0; var_646_object = Obj(); // 0x1239 PushV
	var_646_object = var_59_object; // 0x123a Mov
	TaskCall(10); // 0x123b TaskCall
	func_2437(var_647_object, var_645_int, var_646_object); // 0x123c NEW_2
	TaskReturn(); // 0x123d TaskReturn
	return 2; // 0x123f Return
	
Label_4672:
	var_720_bool = 0; var_721_int = 0; // 0x1240 PushV
	var_721_int = 12; // 0x1241 MovI
	func_4081(var_720_bool, var_721_int); // 0x1242 NEW_2
	if(var_720_bool == 0) goto Label_4684; // 0x1244 JumpB
	var_722_int = 0; var_723_object = Obj(); // 0x1245 PushV
	var_723_object = var_59_object; // 0x1246 Mov
	TaskCall(12); // 0x1247 TaskCall
	func_2999(var_724_object, var_722_int, var_723_object); // 0x1248 NEW_2
	TaskReturn(); // 0x1249 TaskReturn
	return 2; // 0x124b Return
	
Label_4684:
	var_781_int = 0; var_782_object = Obj(); // 0x124c PushV
	var_782_object = var_59_object; // 0x124d Mov
	TaskCall(14); // 0x124e TaskCall
	func_3258(var_783_object, var_781_int, var_782_object); // 0x124f NEW_2
	TaskReturn(); // 0x1250 TaskReturn
	return 2; // 0x1252 Return
}


func_1519(var_2_object, var_563_string)
{
	var_564_bool = 0; // 0x5f0 PushV
	func_4119(var_564_bool); // 0x5f1 NEW_2
	var_565_bool = var_564_bool == 0; // 0x5f3 Not
	if(var_565_bool == 0) goto Label_1526; // 0x5f4 JumpB
	return 0; // 0x5f5 Return
	
Label_1526:
	var_566_bool = var_563_string == var_2_object; // 0x5f6 Eq
	if(var_566_bool == 0) goto Label_1529; // 0x5f7 JumpB
	return 0; // 0x5f8 Return
	
Label_1529:
	var_567_string = ""; var_568_bool = 0; // 0x5f9 PushV
	var_567_string = var_563_string; // 0x5fa Mov
	var_569_string = ""; // 0x5fb PushS
	var_570_bool = var_563_string == var_569_string; // 0x5fc Eq
	if(var_570_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_568_bool = 0; // 0x5fe MovB
	goto Label_1537; // 0x5ff Jump
	
Label_1537:
	func_3990(var_567_string, var_568_bool); // 0x601 NEW_2
	var_2_object = var_563_string; // 0x603 TMov
	return 0; // 0x604 Return
	
Label_1536:
	var_568_bool = 1; // 0x600 MovB
}


func_4081(var_291_bool, var_292_int)
{
	var_293_int = 0; // 0xff2 PushV
	func_4072(var_293_int); // 0xff3 NEW_2
	var_291_bool = var_293_int == var_292_int; // 0xff5 Eq2
	return 0; // 0xff6 Return
}


func_4087(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = ""; // 0xff7 PushV
	var_68_string = "idle"; // 0xff8 MovS
	var_69_int = var_66_int; // 0xff9 Push
	if(var_69_int == 0) goto Label_4092; // 0xffa JumpB
	var_68_string = var_68_string + var_66_int; // 0xffb Add2
	
Label_4092:
	var_65_string = var_68_string; // 0xffc Mov
	return 2; // 0xffd Return
}


func_4345(var_547_bool)
{
	var_549_int = 0; var_550_string = ""; // 0x10fa PushV
	var_550_string = "d9q01"; // 0x10fb MovS
	func_4043(var_549_int, var_550_string); // 0x10fc NEW_2
	var_551_int = 1; // 0x10fe PushI
	var_552_bool = var_549_int == var_551_int; // 0x10ff Eq
	if(var_552_bool == 0) goto Label_4355; // 0x1100 JumpB
	var_547_bool = 1; // 0x1101 MovB
	return 0; // 0x1102 Return
	
Label_4355:
	var_547_bool = 0; // 0x1103 MovB
	return 0; // 0x1104 Return
}


func_3836(var_136_bool, var_137_object)
{
	var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0; // 0xefc PushV
	var_145_string = "voice_common"; // 0xefd PushS
	GetVariable(var_145_string, var_143_int); // 0xefe Func
	var_146_int = var_143_int; // 0xf00 Push
	if(var_146_int == 0) goto Label_3874; // 0xf01 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0xf02 PushV
	var_148_object = var_137_object; // 0xf03 Mov
	func_3894(var_148_object); // 0xf04 NEW_2
	var_177_bool = var_147_bool == 0; // 0xf06 Not
	if(var_177_bool == 0) goto Label_3856; // 0xf07 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0xf08 PushV
	var_179_object = var_137_object; // 0xf09 Mov
	func_3931(var_179_object); // 0xf0a NEW_2
	var_213_bool = var_178_bool == 0; // 0xf0c Not
	if(var_213_bool == 0) goto Label_3856; // 0xf0d JumpB
	var_136_bool = 0; // 0xf0e MovB
	return 4; // 0xf0f Return
	
Label_3856:
	var_214_int = 2; // 0xf10 PushI
	irand(var_144_int, var_214_int); // 0xf11 Func
	var_215_int = var_144_int; // 0xf13 Push
	if(var_215_int == 0) goto Label_3869; // 0xf14 JumpB
	var_216_string = "voice_common"; // 0xf15 PushS
	var_217_int = 1; // 0xf16 PushI
	var_218_int = var_143_int + var_217_int; // 0xf17 Add
	var_219_int = 3; // 0xf18 PushI
	var_220_int = var_218_int / var_219_int; // 0xf19 Mod
	SetVariable(var_216_string, var_220_int); // 0xf1a Func
	goto Label_3873; // 0xf1c Jump
	
Label_3873:
	goto Label_3892; // 0xf21 Jump
	
Label_3892:
	var_136_bool = 1; // 0xf34 MovB
	return 4; // 0xf35 Return
	
Label_3869:
	var_221_string = "voice_common"; // 0xf1d PushS
	var_222_int = 0; // 0xf1e PushI
	SetVariable(var_221_string, var_222_int); // 0xf1f Func
	
Label_3874:
	var_223_bool = 0; var_224_object = Obj(); // 0xf22 PushV
	var_224_object = var_137_object; // 0xf23 Mov
	func_3931(var_224_object); // 0xf24 NEW_2
	var_225_bool = var_223_bool == 0; // 0xf26 Not
	if(var_225_bool == 0) goto Label_3888; // 0xf27 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0xf28 PushV
	var_227_object = var_137_object; // 0xf29 Mov
	func_3894(var_227_object); // 0xf2a NEW_2
	var_228_bool = var_226_bool == 0; // 0xf2c Not
	if(var_228_bool == 0) goto Label_3888; // 0xf2d JumpB
	var_136_bool = 0; // 0xf2e MovB
	return 4; // 0xf2f Return
	
Label_3888:
	var_229_string = "voice_common"; // 0xf30 PushS
	var_230_int = 1; // 0xf31 PushI
	SetVariable(var_229_string, var_230_int); // 0xf32 Func
}


func_4094(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0xffe PushV
	var_62_int = 0; // 0xfff MovI
	
Label_4096:
	var_64_string = "all"; // 0x1000 PushS
	var_65_string = ""; var_66_int = 0; // 0x1001 PushV
	var_66_int = var_62_int; // 0x1002 Mov
	func_4087(var_65_string, var_66_int); // 0x1003 NEW_2
	HasAnimation(var_63_bool, var_64_string, var_65_string); // 0x1005 Func
	var_70_bool = var_63_bool == 0; // 0x1007 Not
	if(var_70_bool == 0) goto Label_4106; // 0x1008 JumpB
	goto Label_4109; // 0x1009 Jump
	
Label_4109:
	var_59_int = var_62_int; // 0x100d Mov
	return 4; // 0x100e Return
	
Label_4106:
	var_71_int = 1; // 0x100a PushI
	var_62_int = var_62_int + var_71_int; // 0x100b Add2
	goto Label_4096; // 0x100c Jump
}


