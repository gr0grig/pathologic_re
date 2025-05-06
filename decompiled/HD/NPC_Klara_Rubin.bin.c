task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xbb PushI
	if(var_28_int == 0) goto Label_555; // 0xbc JumpB
	func_2667(); // 0xbe NEW_2
	var_30_int = 26936; // 0xc0 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xc1 Eq
	if(var_31_bool == 0) goto Label_210; // 0xc2 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xc3 PushV
	var_32_object = var_1_object; // 0xc4 MovT
	var_33_object = var_0_object; // 0xc5 MovT
	func_2793(); // 0xc6 NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xc8 PushV
	var_59_object = var_1_object; // 0xc9 MovT
	var_60_object = var_0_object; // 0xca MovT
	func_2901(); // 0xcb NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0xcd PushV
	var_63_object = var_1_object; // 0xce MovT
	var_64_object = var_0_object; // 0xcf MovT
	func_2923(var_64_object); // 0xd0 NEW_2
	
Label_210:
	var_87_int = 26937; // 0xd2 PushI
	var_88_bool = var_27_cvector == var_87_int; // 0xd3 Eq
	if(var_88_bool == 0) goto Label_218; // 0xd4 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xd5 PushV
	var_89_object = var_1_object; // 0xd6 MovT
	var_90_object = var_0_object; // 0xd7 MovT
	func_2793(); // 0xd8 NEW_2
	
Label_218:
	var_91_int = 42688; // 0xda PushI
	var_92_bool = var_27_cvector == var_91_int; // 0xdb Eq
	if(var_92_bool == 0) goto Label_226; // 0xdc JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xdd PushV
	var_93_object = var_1_object; // 0xde MovT
	var_94_object = var_0_object; // 0xdf MovT
	func_2793(); // 0xe0 NEW_2
	
Label_226:
	var_95_int = 26931; // 0xe2 PushI
	var_96_bool = var_26_bool == var_95_int; // 0xe3 Eq
	if(var_96_bool == 0) goto Label_274; // 0xe4 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0xe5 PushV
	var_98_object = var_1_object; // 0xe6 MovT
	func_2934(var_98_object); // 0xe7 NEW_2
	if(var_97_bool == 0) goto Label_254; // 0xe9 JumpB
	var_105_string = ""; // 0xea PushV
	var_105_string = "Confusion"; // 0xeb MovS
	func_164(var_27_cvector, var_105_string); // 0xec NEW_2
	var_122_int = 525584; // 0xee PushI
	SetMessage(var_122_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_123_int = 525585; // 0xf3 PushI
	var_124_int = 26933; // 0xf4 PushI
	var_125_int = 26932; // 0xf5 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xf6 TObjFunc
	var_126_int = 540637; // 0xf8 PushI
	var_127_int = 26933; // 0xf9 PushI
	var_128_int = 42660; // 0xfa PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_129_string = ""; // 0xfe PushV
	var_129_string = "Warning"; // 0xff MovS
	func_164(var_27_cvector, var_129_string); // 0x100 NEW_2
	var_130_int = 525591; // 0x102 PushI
	SetMessage(var_130_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_131_int = 525592; // 0x107 PushI
	var_132_int = -1; // 0x108 PushI
	var_133_int = 26939; // 0x109 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x10a TObjFunc
	var_134_int = 540621; // 0x10c PushI
	var_135_int = -1; // 0x10d PushI
	var_136_int = 42643; // 0x10e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_137_int = 26933; // 0x112 PushI
	var_138_bool = var_26_bool == var_137_int; // 0x113 Eq
	if(var_138_bool == 0) goto Label_297; // 0x114 JumpB
	var_139_string = ""; // 0x115 PushV
	var_139_string = "Confusion"; // 0x116 MovS
	func_164(var_27_cvector, var_139_string); // 0x117 NEW_2
	var_140_int = 525586; // 0x119 PushI
	SetMessage(var_140_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_141_int = 525587; // 0x11e PushI
	var_142_int = 42662; // 0x11f PushI
	var_143_int = 26934; // 0x120 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x121 TObjFunc
	var_144_int = 540639; // 0x123 PushI
	var_145_int = 42664; // 0x124 PushI
	var_146_int = 42663; // 0x125 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_147_int = 42664; // 0x129 PushI
	var_148_bool = var_26_bool == var_147_int; // 0x12a Eq
	if(var_148_bool == 0) goto Label_315; // 0x12b JumpB
	var_149_string = ""; // 0x12c PushV
	var_149_string = "Rage"; // 0x12d MovS
	func_164(var_27_cvector, var_149_string); // 0x12e NEW_2
	var_150_int = 540640; // 0x130 PushI
	SetMessage(var_150_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_151_int = 540641; // 0x135 PushI
	var_152_int = 26935; // 0x136 PushI
	var_153_int = 42665; // 0x137 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_154_int = 26935; // 0x13b PushI
	var_155_bool = var_26_bool == var_154_int; // 0x13c Eq
	if(var_155_bool == 0) goto Label_333; // 0x13d JumpB
	var_156_string = ""; // 0x13e PushV
	var_156_string = "Warning"; // 0x13f MovS
	func_164(var_27_cvector, var_156_string); // 0x140 NEW_2
	var_157_int = 525588; // 0x142 PushI
	SetMessage(var_157_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_158_int = 540642; // 0x147 PushI
	var_159_int = 42667; // 0x148 PushI
	var_160_int = 42666; // 0x149 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_161_int = 42667; // 0x14d PushI
	var_162_bool = var_26_bool == var_161_int; // 0x14e Eq
	if(var_162_bool == 0) goto Label_356; // 0x14f JumpB
	var_163_string = ""; // 0x150 PushV
	var_163_string = "Warning"; // 0x151 MovS
	func_164(var_27_cvector, var_163_string); // 0x152 NEW_2
	var_164_int = 540643; // 0x154 PushI
	SetMessage(var_164_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_165_int = 525589; // 0x159 PushI
	var_166_int = -1; // 0x15a PushI
	var_167_int = 26936; // 0x15b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x15c TObjFunc
	var_168_int = 540625; // 0x15e PushI
	var_169_int = 42648; // 0x15f PushI
	var_170_int = 42647; // 0x160 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_171_int = 42648; // 0x164 PushI
	var_172_bool = var_26_bool == var_171_int; // 0x165 Eq
	if(var_172_bool == 0) goto Label_379; // 0x166 JumpB
	var_173_string = ""; // 0x167 PushV
	var_173_string = "Rage"; // 0x168 MovS
	func_164(var_27_cvector, var_173_string); // 0x169 NEW_2
	var_174_int = 540626; // 0x16b PushI
	SetMessage(var_174_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_175_int = 525590; // 0x170 PushI
	var_176_int = -1; // 0x171 PushI
	var_177_int = 26937; // 0x172 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x173 TObjFunc
	var_178_int = 540661; // 0x175 PushI
	var_179_int = 42689; // 0x176 PushI
	var_180_int = 42690; // 0x177 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_181_int = 42689; // 0x17b PushI
	var_182_bool = var_26_bool == var_181_int; // 0x17c Eq
	if(var_182_bool == 0) goto Label_397; // 0x17d JumpB
	var_183_string = ""; // 0x17e PushV
	var_183_string = "Rage"; // 0x17f MovS
	func_164(var_27_cvector, var_183_string); // 0x180 NEW_2
	var_184_int = 540660; // 0x182 PushI
	SetMessage(var_184_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_185_int = 540659; // 0x187 PushI
	var_186_int = -1; // 0x188 PushI
	var_187_int = 42688; // 0x189 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_188_int = 42662; // 0x18d PushI
	var_189_bool = var_26_bool == var_188_int; // 0x18e Eq
	if(var_189_bool == 0) goto Label_420; // 0x18f JumpB
	var_190_string = ""; // 0x190 PushV
	var_190_string = "Warning"; // 0x191 MovS
	func_164(var_27_cvector, var_190_string); // 0x192 NEW_2
	var_191_int = 540638; // 0x194 PushI
	SetMessage(var_191_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_192_int = 540644; // 0x199 PushI
	var_193_int = 26935; // 0x19a PushI
	var_194_int = 42668; // 0x19b PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x19c TObjFunc
	var_195_int = 540645; // 0x19e PushI
	var_196_int = 42670; // 0x19f PushI
	var_197_int = 42669; // 0x1a0 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_198_int = 42670; // 0x1a4 PushI
	var_199_bool = var_26_bool == var_198_int; // 0x1a5 Eq
	if(var_199_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_200_string = ""; // 0x1a7 PushV
	var_200_string = "Warning"; // 0x1a8 MovS
	func_164(var_27_cvector, var_200_string); // 0x1a9 NEW_2
	var_201_int = 540646; // 0x1ab PushI
	SetMessage(var_201_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_202_int = 540647; // 0x1b0 PushI
	var_203_int = 42673; // 0x1b1 PushI
	var_204_int = 42671; // 0x1b2 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1b3 TObjFunc
	var_205_int = 540649; // 0x1b5 PushI
	var_206_int = 42673; // 0x1b6 PushI
	var_207_int = 42675; // 0x1b7 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_208_int = 42673; // 0x1bb PushI
	var_209_bool = var_26_bool == var_208_int; // 0x1bc Eq
	if(var_209_bool == 0) goto Label_461; // 0x1bd JumpB
	var_210_string = ""; // 0x1be PushV
	var_210_string = "Warning"; // 0x1bf MovS
	func_164(var_27_cvector, var_210_string); // 0x1c0 NEW_2
	var_211_int = 540648; // 0x1c2 PushI
	SetMessage(var_211_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_212_int = 540650; // 0x1c7 PushI
	var_213_int = 42678; // 0x1c8 PushI
	var_214_int = 42677; // 0x1c9 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_215_int = 42678; // 0x1cd PushI
	var_216_bool = var_26_bool == var_215_int; // 0x1ce Eq
	if(var_216_bool == 0) goto Label_479; // 0x1cf JumpB
	var_217_string = ""; // 0x1d0 PushV
	var_217_string = "Warning"; // 0x1d1 MovS
	func_164(var_27_cvector, var_217_string); // 0x1d2 NEW_2
	var_218_int = 540651; // 0x1d4 PushI
	SetMessage(var_218_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_219_int = 540652; // 0x1d9 PushI
	var_220_int = 42680; // 0x1da PushI
	var_221_int = 42679; // 0x1db PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_222_int = 42680; // 0x1df PushI
	var_223_bool = var_26_bool == var_222_int; // 0x1e0 Eq
	if(var_223_bool == 0) goto Label_502; // 0x1e1 JumpB
	var_224_string = ""; // 0x1e2 PushV
	var_224_string = "Neutral"; // 0x1e3 MovS
	func_164(var_27_cvector, var_224_string); // 0x1e4 NEW_2
	var_225_int = 540653; // 0x1e6 PushI
	SetMessage(var_225_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_226_int = 540654; // 0x1eb PushI
	var_227_int = 42691; // 0x1ec PushI
	var_228_int = 42681; // 0x1ed PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1ee TObjFunc
	var_229_int = 540655; // 0x1f0 PushI
	var_230_int = 42683; // 0x1f1 PushI
	var_231_int = 42682; // 0x1f2 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_232_int = 42683; // 0x1f6 PushI
	var_233_bool = var_26_bool == var_232_int; // 0x1f7 Eq
	if(var_233_bool == 0) goto Label_525; // 0x1f8 JumpB
	var_234_string = ""; // 0x1f9 PushV
	var_234_string = "Neutral"; // 0x1fa MovS
	func_164(var_27_cvector, var_234_string); // 0x1fb NEW_2
	var_235_int = 540656; // 0x1fd PushI
	SetMessage(var_235_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_236_int = 540657; // 0x202 PushI
	var_237_int = 26935; // 0x203 PushI
	var_238_int = 42684; // 0x204 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x205 TObjFunc
	var_239_int = 540658; // 0x207 PushI
	var_240_int = 26935; // 0x208 PushI
	var_241_int = 42685; // 0x209 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x20a TObjFunc
	return 0; // 0x20c Return
	
Label_525:
	var_242_int = 42691; // 0x20d PushI
	var_243_bool = var_26_bool == var_242_int; // 0x20e Eq
	if(var_243_bool == 0) goto Label_543; // 0x20f JumpB
	var_244_string = ""; // 0x210 PushV
	var_244_string = "Warning"; // 0x211 MovS
	func_164(var_27_cvector, var_244_string); // 0x212 NEW_2
	var_245_int = 540662; // 0x214 PushI
	SetMessage(var_245_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_246_int = 540663; // 0x219 PushI
	var_247_int = 26935; // 0x21a PushI
	var_248_int = 42692; // 0x21b PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_3_string = 1; // 0x21f TMovB
	var_249_bool = 0; // 0x220 PushV
	func_2791(var_249_bool); // 0x221 NEW_2
	if(var_249_bool == 0) goto Label_551; // 0x223 JumpB
	lshStopAnimation(); // 0x224 Func
	goto Label_553; // 0x226 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_551:
	StopAnimation(); // 0x227 Func
	
Label_555:
	return 0; // 0x22b Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x2ff PushI
	if(var_28_int == 0) goto Label_1121; // 0x300 JumpB
	func_2667(); // 0x302 NEW_2
	var_30_int = 27160; // 0x304 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x305 Eq
	if(var_31_bool == 0) goto Label_790; // 0x306 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x307 PushV
	var_32_object = var_1_object; // 0x308 MovT
	var_33_object = var_0_object; // 0x309 MovT
	func_2802(); // 0x30a NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0x30c PushV
	var_75_object = var_1_object; // 0x30d MovT
	var_76_object = var_0_object; // 0x30e MovT
	func_2834(); // 0x30f NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0x311 PushV
	var_83_object = var_1_object; // 0x312 MovT
	var_84_object = var_0_object; // 0x313 MovT
	func_2907(); // 0x314 NEW_2
	
Label_790:
	var_109_int = 27178; // 0x316 PushI
	var_110_bool = var_27_cvector == var_109_int; // 0x317 Eq
	if(var_110_bool == 0) goto Label_798; // 0x318 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x319 PushV
	var_111_object = var_1_object; // 0x31a MovT
	var_112_object = var_0_object; // 0x31b MovT
	func_2825(); // 0x31c NEW_2
	
Label_798:
	var_123_int = 27146; // 0x31e PushI
	var_124_bool = var_26_bool == var_123_int; // 0x31f Eq
	if(var_124_bool == 0) goto Label_870; // 0x320 JumpB
	var_125_string = ""; // 0x321 PushV
	var_125_string = "Confusion"; // 0x322 MovS
	func_744(var_27_cvector, var_125_string); // 0x323 NEW_2
	var_142_int = 525847; // 0x325 PushI
	SetMessage(var_142_int); // 0x326 TObjFunc
	ClearReplies(); // 0x328 TObjFunc
	var_143_bool = 0; // 0x32a PushV
	var_143_bool = 0; // 0x32b MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x32c PushV
	var_145_object = var_1_object; // 0x32d MovT
	func_2946(var_145_object); // 0x32e NEW_2
	if(var_144_bool == 0) goto Label_824; // 0x330 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x331 PushV
	var_153_object = var_1_object; // 0x332 MovT
	func_2958(var_152_bool, var_153_object); // 0x333 NEW_2
	var_164_bool = var_152_bool == 0; // 0x335 Not
	if(var_164_bool == 0) goto Label_824; // 0x336 JumpB
	var_143_bool = 1; // 0x337 MovB
	
Label_824:
	if(var_143_bool == 0) goto Label_830; // 0x338 JumpB
	var_165_int = 525848; // 0x339 PushI
	var_166_int = 27148; // 0x33a PushI
	var_167_int = 27147; // 0x33b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x33c TObjFunc
	
Label_830:
	var_168_bool = 0; // 0x33e PushV
	var_168_bool = 0; // 0x33f MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x340 PushV
	var_170_object = var_1_object; // 0x341 MovT
	func_2946(var_170_object); // 0x342 NEW_2
	if(var_169_bool == 0) goto Label_843; // 0x344 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x345 PushV
	var_172_object = var_1_object; // 0x346 MovT
	func_2958(var_171_bool, var_172_object); // 0x347 NEW_2
	if(var_171_bool == 0) goto Label_843; // 0x349 JumpB
	var_168_bool = 1; // 0x34a MovB
	
Label_843:
	if(var_168_bool == 0) goto Label_849; // 0x34b JumpB
	var_173_int = 525851; // 0x34c PushI
	var_174_int = 27151; // 0x34d PushI
	var_175_int = 27150; // 0x34e PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x34f TObjFunc
	
Label_849:
	var_176_bool = 0; var_177_object = Obj(); // 0x351 PushV
	var_177_object = var_1_object; // 0x352 MovT
	func_2968(var_177_object); // 0x353 NEW_2
	if(var_176_bool == 0) goto Label_859; // 0x355 JumpB
	var_182_int = 525875; // 0x356 PushI
	var_183_int = 27175; // 0x357 PushI
	var_184_int = 27174; // 0x358 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x359 TObjFunc
	
Label_859:
	var_185_int = 525862; // 0x35b PushI
	var_186_int = -1; // 0x35c PushI
	var_187_int = 27161; // 0x35d PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x35e TObjFunc
	var_188_int = 529118; // 0x360 PushI
	var_189_int = -1; // 0x361 PushI
	var_190_int = 30563; // 0x362 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x363 TObjFunc
	return 0; // 0x365 Return
	
Label_870:
	var_191_int = 27175; // 0x366 PushI
	var_192_bool = var_26_bool == var_191_int; // 0x367 Eq
	if(var_192_bool == 0) goto Label_888; // 0x368 JumpB
	var_193_string = ""; // 0x369 PushV
	var_193_string = "Warning"; // 0x36a MovS
	func_744(var_27_cvector, var_193_string); // 0x36b NEW_2
	var_194_int = 525876; // 0x36d PushI
	SetMessage(var_194_int); // 0x36e TObjFunc
	ClearReplies(); // 0x370 TObjFunc
	var_195_int = 525877; // 0x372 PushI
	var_196_int = 27177; // 0x373 PushI
	var_197_int = 27176; // 0x374 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x375 TObjFunc
	return 0; // 0x377 Return
	
Label_888:
	var_198_int = 27177; // 0x378 PushI
	var_199_bool = var_26_bool == var_198_int; // 0x379 Eq
	if(var_199_bool == 0) goto Label_906; // 0x37a JumpB
	var_200_string = ""; // 0x37b PushV
	var_200_string = "Neutral"; // 0x37c MovS
	func_744(var_27_cvector, var_200_string); // 0x37d NEW_2
	var_201_int = 525878; // 0x37f PushI
	SetMessage(var_201_int); // 0x380 TObjFunc
	ClearReplies(); // 0x382 TObjFunc
	var_202_int = 529128; // 0x384 PushI
	var_203_int = 30575; // 0x385 PushI
	var_204_int = 30574; // 0x386 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x387 TObjFunc
	return 0; // 0x389 Return
	
Label_906:
	var_205_int = 30575; // 0x38a PushI
	var_206_bool = var_26_bool == var_205_int; // 0x38b Eq
	if(var_206_bool == 0) goto Label_924; // 0x38c JumpB
	var_207_string = ""; // 0x38d PushV
	var_207_string = "Neutral"; // 0x38e MovS
	func_744(var_27_cvector, var_207_string); // 0x38f NEW_2
	var_208_int = 529129; // 0x391 PushI
	SetMessage(var_208_int); // 0x392 TObjFunc
	ClearReplies(); // 0x394 TObjFunc
	var_209_int = 525879; // 0x396 PushI
	var_210_int = -1; // 0x397 PushI
	var_211_int = 27178; // 0x398 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x399 TObjFunc
	return 0; // 0x39b Return
	
Label_924:
	var_212_int = 27151; // 0x39c PushI
	var_213_bool = var_26_bool == var_212_int; // 0x39d Eq
	if(var_213_bool == 0) goto Label_942; // 0x39e JumpB
	var_214_string = ""; // 0x39f PushV
	var_214_string = "Neutral"; // 0x3a0 MovS
	func_744(var_27_cvector, var_214_string); // 0x3a1 NEW_2
	var_215_int = 525852; // 0x3a3 PushI
	SetMessage(var_215_int); // 0x3a4 TObjFunc
	ClearReplies(); // 0x3a6 TObjFunc
	var_216_int = 529119; // 0x3a8 PushI
	var_217_int = 30565; // 0x3a9 PushI
	var_218_int = 30564; // 0x3aa PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x3ab TObjFunc
	return 0; // 0x3ad Return
	
Label_942:
	var_219_int = 30565; // 0x3ae PushI
	var_220_bool = var_26_bool == var_219_int; // 0x3af Eq
	if(var_220_bool == 0) goto Label_965; // 0x3b0 JumpB
	var_221_string = ""; // 0x3b1 PushV
	var_221_string = "Neutral"; // 0x3b2 MovS
	func_744(var_27_cvector, var_221_string); // 0x3b3 NEW_2
	var_222_int = 529120; // 0x3b5 PushI
	SetMessage(var_222_int); // 0x3b6 TObjFunc
	ClearReplies(); // 0x3b8 TObjFunc
	var_223_int = 525853; // 0x3ba PushI
	var_224_int = 27153; // 0x3bb PushI
	var_225_int = 27152; // 0x3bc PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x3bd TObjFunc
	var_226_int = 529121; // 0x3bf PushI
	var_227_int = 30567; // 0x3c0 PushI
	var_228_int = 30566; // 0x3c1 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_229_int = 30567; // 0x3c5 PushI
	var_230_bool = var_26_bool == var_229_int; // 0x3c6 Eq
	if(var_230_bool == 0) goto Label_983; // 0x3c7 JumpB
	var_231_string = ""; // 0x3c8 PushV
	var_231_string = "Neutral"; // 0x3c9 MovS
	func_744(var_27_cvector, var_231_string); // 0x3ca NEW_2
	var_232_int = 529122; // 0x3cc PushI
	SetMessage(var_232_int); // 0x3cd TObjFunc
	ClearReplies(); // 0x3cf TObjFunc
	var_233_int = 529123; // 0x3d1 PushI
	var_234_int = 27153; // 0x3d2 PushI
	var_235_int = 30568; // 0x3d3 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_236_int = 27153; // 0x3d7 PushI
	var_237_bool = var_26_bool == var_236_int; // 0x3d8 Eq
	if(var_237_bool == 0) goto Label_1001; // 0x3d9 JumpB
	var_238_string = ""; // 0x3da PushV
	var_238_string = "Warning"; // 0x3db MovS
	func_744(var_27_cvector, var_238_string); // 0x3dc NEW_2
	var_239_int = 525854; // 0x3de PushI
	SetMessage(var_239_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_240_int = 529124; // 0x3e3 PushI
	var_241_int = 30571; // 0x3e4 PushI
	var_242_int = 30570; // 0x3e5 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_243_int = 30571; // 0x3e9 PushI
	var_244_bool = var_26_bool == var_243_int; // 0x3ea Eq
	if(var_244_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_245_string = ""; // 0x3ec PushV
	var_245_string = "Warning"; // 0x3ed MovS
	func_744(var_27_cvector, var_245_string); // 0x3ee NEW_2
	var_246_int = 529125; // 0x3f0 PushI
	SetMessage(var_246_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_247_int = 525855; // 0x3f5 PushI
	var_248_int = 27155; // 0x3f6 PushI
	var_249_int = 27154; // 0x3f7 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_250_int = 27155; // 0x3fb PushI
	var_251_bool = var_26_bool == var_250_int; // 0x3fc Eq
	if(var_251_bool == 0) goto Label_1037; // 0x3fd JumpB
	var_252_string = ""; // 0x3fe PushV
	var_252_string = "Confusion"; // 0x3ff MovS
	func_744(var_27_cvector, var_252_string); // 0x400 NEW_2
	var_253_int = 525856; // 0x402 PushI
	SetMessage(var_253_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_254_int = 529126; // 0x407 PushI
	var_255_int = 30573; // 0x408 PushI
	var_256_int = 30572; // 0x409 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_257_int = 30573; // 0x40d PushI
	var_258_bool = var_26_bool == var_257_int; // 0x40e Eq
	if(var_258_bool == 0) goto Label_1055; // 0x40f JumpB
	var_259_string = ""; // 0x410 PushV
	var_259_string = "Warning"; // 0x411 MovS
	func_744(var_27_cvector, var_259_string); // 0x412 NEW_2
	var_260_int = 529127; // 0x414 PushI
	SetMessage(var_260_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_261_int = 525857; // 0x419 PushI
	var_262_int = 27157; // 0x41a PushI
	var_263_int = 27156; // 0x41b PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_264_int = 27157; // 0x41f PushI
	var_265_bool = var_26_bool == var_264_int; // 0x420 Eq
	if(var_265_bool == 0) goto Label_1073; // 0x421 JumpB
	var_266_string = ""; // 0x422 PushV
	var_266_string = "Warning"; // 0x423 MovS
	func_744(var_27_cvector, var_266_string); // 0x424 NEW_2
	var_267_int = 525858; // 0x426 PushI
	SetMessage(var_267_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_268_int = 525859; // 0x42b PushI
	var_269_int = 27159; // 0x42c PushI
	var_270_int = 27158; // 0x42d PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x42e TObjFunc
	return 0; // 0x430 Return
	
Label_1073:
	var_271_int = 27159; // 0x431 PushI
	var_272_bool = var_26_bool == var_271_int; // 0x432 Eq
	if(var_272_bool == 0) goto Label_1091; // 0x433 JumpB
	var_273_string = ""; // 0x434 PushV
	var_273_string = "Neutral"; // 0x435 MovS
	func_744(var_27_cvector, var_273_string); // 0x436 NEW_2
	var_274_int = 525860; // 0x438 PushI
	SetMessage(var_274_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_275_int = 525861; // 0x43d PushI
	var_276_int = -1; // 0x43e PushI
	var_277_int = 27160; // 0x43f PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x440 TObjFunc
	return 0; // 0x442 Return
	
Label_1091:
	var_278_int = 27148; // 0x443 PushI
	var_279_bool = var_26_bool == var_278_int; // 0x444 Eq
	if(var_279_bool == 0) goto Label_1109; // 0x445 JumpB
	var_280_string = ""; // 0x446 PushV
	var_280_string = "Confusion"; // 0x447 MovS
	func_744(var_27_cvector, var_280_string); // 0x448 NEW_2
	var_281_int = 525849; // 0x44a PushI
	SetMessage(var_281_int); // 0x44b TObjFunc
	ClearReplies(); // 0x44d TObjFunc
	var_282_int = 525850; // 0x44f PushI
	var_283_int = -1; // 0x450 PushI
	var_284_int = 27149; // 0x451 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x452 TObjFunc
	return 0; // 0x454 Return
	
Label_1109:
	var_3_string = 1; // 0x455 TMovB
	var_285_bool = 0; // 0x456 PushV
	func_2791(var_285_bool); // 0x457 NEW_2
	if(var_285_bool == 0) goto Label_1117; // 0x459 JumpB
	lshStopAnimation(); // 0x45a Func
	goto Label_1119; // 0x45c Jump
	
Label_1119:
	return 0; // 0x45f Return
	
Label_1117:
	StopAnimation(); // 0x45d Func
	
Label_1121:
	return 0; // 0x461 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x512 PushI
	if(var_28_int == 0) goto Label_1481; // 0x513 JumpB
	func_2667(); // 0x515 NEW_2
	var_30_int = 29045; // 0x517 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x518 Eq
	if(var_31_bool == 0) goto Label_1311; // 0x519 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x51a PushV
	var_32_object = var_1_object; // 0x51b MovT
	var_33_object = var_0_object; // 0x51c MovT
	func_2895(); // 0x51d NEW_2
	
Label_1311:
	var_36_int = 29057; // 0x51f PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x520 Eq
	if(var_37_bool == 0) goto Label_1319; // 0x521 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x522 PushV
	var_38_object = var_1_object; // 0x523 MovT
	var_39_object = var_0_object; // 0x524 MovT
	func_2844(); // 0x525 NEW_2
	
Label_1319:
	var_120_int = 29043; // 0x527 PushI
	var_121_bool = var_26_bool == var_120_int; // 0x528 Eq
	if(var_121_bool == 0) goto Label_1356; // 0x529 JumpB
	var_122_string = ""; // 0x52a PushV
	var_122_string = "Neutral"; // 0x52b MovS
	func_1275(var_27_cvector, var_122_string); // 0x52c NEW_2
	var_139_int = 527693; // 0x52e PushI
	SetMessage(var_139_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_140_bool = 0; // 0x533 PushV
	var_140_bool = 0; // 0x534 MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x535 PushV
	var_142_object = var_1_object; // 0x536 MovT
	func_2992(var_142_object); // 0x537 NEW_2
	if(var_141_bool == 0) goto Label_1344; // 0x539 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x53a PushV
	var_150_object = var_1_object; // 0x53b MovT
	func_2980(var_150_object); // 0x53c NEW_2
	if(var_149_bool == 0) goto Label_1344; // 0x53e JumpB
	var_140_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_140_bool == 0) goto Label_1350; // 0x540 JumpB
	var_155_int = 527695; // 0x541 PushI
	var_156_int = 29046; // 0x542 PushI
	var_157_int = 29045; // 0x543 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x544 TObjFunc
	
Label_1350:
	var_158_int = 527694; // 0x546 PushI
	var_159_int = -1; // 0x547 PushI
	var_160_int = 29044; // 0x548 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x549 TObjFunc
	return 0; // 0x54b Return
	
Label_1356:
	var_161_int = 29046; // 0x54c PushI
	var_162_bool = var_26_bool == var_161_int; // 0x54d Eq
	if(var_162_bool == 0) goto Label_1374; // 0x54e JumpB
	var_163_string = ""; // 0x54f PushV
	var_163_string = "Warning"; // 0x550 MovS
	func_1275(var_27_cvector, var_163_string); // 0x551 NEW_2
	var_164_int = 527696; // 0x553 PushI
	SetMessage(var_164_int); // 0x554 TObjFunc
	ClearReplies(); // 0x556 TObjFunc
	var_165_int = 527697; // 0x558 PushI
	var_166_int = 29048; // 0x559 PushI
	var_167_int = 29047; // 0x55a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_168_int = 29048; // 0x55e PushI
	var_169_bool = var_26_bool == var_168_int; // 0x55f Eq
	if(var_169_bool == 0) goto Label_1392; // 0x560 JumpB
	var_170_string = ""; // 0x561 PushV
	var_170_string = "Warning"; // 0x562 MovS
	func_1275(var_27_cvector, var_170_string); // 0x563 NEW_2
	var_171_int = 527698; // 0x565 PushI
	SetMessage(var_171_int); // 0x566 TObjFunc
	ClearReplies(); // 0x568 TObjFunc
	var_172_int = 527699; // 0x56a PushI
	var_173_int = 29050; // 0x56b PushI
	var_174_int = 29049; // 0x56c PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x56d TObjFunc
	return 0; // 0x56f Return
	
Label_1392:
	var_175_int = 29050; // 0x570 PushI
	var_176_bool = var_26_bool == var_175_int; // 0x571 Eq
	if(var_176_bool == 0) goto Label_1410; // 0x572 JumpB
	var_177_string = ""; // 0x573 PushV
	var_177_string = "Neutral"; // 0x574 MovS
	func_1275(var_27_cvector, var_177_string); // 0x575 NEW_2
	var_178_int = 527700; // 0x577 PushI
	SetMessage(var_178_int); // 0x578 TObjFunc
	ClearReplies(); // 0x57a TObjFunc
	var_179_int = 527701; // 0x57c PushI
	var_180_int = 29052; // 0x57d PushI
	var_181_int = 29051; // 0x57e PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x57f TObjFunc
	return 0; // 0x581 Return
	
Label_1410:
	var_182_int = 29052; // 0x582 PushI
	var_183_bool = var_26_bool == var_182_int; // 0x583 Eq
	if(var_183_bool == 0) goto Label_1433; // 0x584 JumpB
	var_184_string = ""; // 0x585 PushV
	var_184_string = "Neutral"; // 0x586 MovS
	func_1275(var_27_cvector, var_184_string); // 0x587 NEW_2
	var_185_int = 527702; // 0x589 PushI
	SetMessage(var_185_int); // 0x58a TObjFunc
	ClearReplies(); // 0x58c TObjFunc
	var_186_int = 527703; // 0x58e PushI
	var_187_int = 29054; // 0x58f PushI
	var_188_int = 29053; // 0x590 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x591 TObjFunc
	var_189_int = 527712; // 0x593 PushI
	var_190_int = 29054; // 0x594 PushI
	var_191_int = 29063; // 0x595 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x596 TObjFunc
	return 0; // 0x598 Return
	
Label_1433:
	var_192_int = 29054; // 0x599 PushI
	var_193_bool = var_26_bool == var_192_int; // 0x59a Eq
	if(var_193_bool == 0) goto Label_1451; // 0x59b JumpB
	var_194_string = ""; // 0x59c PushV
	var_194_string = "Warning"; // 0x59d MovS
	func_1275(var_27_cvector, var_194_string); // 0x59e NEW_2
	var_195_int = 527704; // 0x5a0 PushI
	SetMessage(var_195_int); // 0x5a1 TObjFunc
	ClearReplies(); // 0x5a3 TObjFunc
	var_196_int = 527705; // 0x5a5 PushI
	var_197_int = 29056; // 0x5a6 PushI
	var_198_int = 29055; // 0x5a7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x5a8 TObjFunc
	return 0; // 0x5aa Return
	
Label_1451:
	var_199_int = 29056; // 0x5ab PushI
	var_200_bool = var_26_bool == var_199_int; // 0x5ac Eq
	if(var_200_bool == 0) goto Label_1469; // 0x5ad JumpB
	var_201_string = ""; // 0x5ae PushV
	var_201_string = "Warning"; // 0x5af MovS
	func_1275(var_27_cvector, var_201_string); // 0x5b0 NEW_2
	var_202_int = 527706; // 0x5b2 PushI
	SetMessage(var_202_int); // 0x5b3 TObjFunc
	ClearReplies(); // 0x5b5 TObjFunc
	var_203_int = 527707; // 0x5b7 PushI
	var_204_int = -1; // 0x5b8 PushI
	var_205_int = 29057; // 0x5b9 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x5ba TObjFunc
	return 0; // 0x5bc Return
	
Label_1469:
	var_3_string = 1; // 0x5bd TMovB
	var_206_bool = 0; // 0x5be PushV
	func_2791(var_206_bool); // 0x5bf NEW_2
	if(var_206_bool == 0) goto Label_1477; // 0x5c1 JumpB
	lshStopAnimation(); // 0x5c2 Func
	goto Label_1479; // 0x5c4 Jump
	
Label_1479:
	return 0; // 0x5c7 Return
	
Label_1477:
	StopAnimation(); // 0x5c5 Func
	
Label_1481:
	return 0; // 0x5c9 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x671 PushI
	if(var_28_int == 0) goto Label_1904; // 0x672 JumpB
	func_2667(); // 0x674 NEW_2
	var_30_int = 41237; // 0x676 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x677 Eq
	if(var_31_bool == 0) goto Label_1682; // 0x678 JumpB
	var_32_string = ""; // 0x679 PushV
	var_32_string = "Neutral"; // 0x67a MovS
	func_1626(var_27_cvector, var_32_string); // 0x67b NEW_2
	var_49_int = 539294; // 0x67d PushI
	SetMessage(var_49_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_50_int = 542670; // 0x682 PushI
	var_51_int = 45076; // 0x683 PushI
	var_52_int = 45074; // 0x684 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x685 TObjFunc
	var_53_int = 539295; // 0x687 PushI
	var_54_int = -1; // 0x688 PushI
	var_55_int = 41238; // 0x689 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x68a TObjFunc
	var_56_int = 542671; // 0x68c PushI
	var_57_int = -1; // 0x68d PushI
	var_58_int = 45075; // 0x68e PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x68f TObjFunc
	return 0; // 0x691 Return
	
Label_1682:
	var_59_int = 45076; // 0x692 PushI
	var_60_bool = var_26_bool == var_59_int; // 0x693 Eq
	if(var_60_bool == 0) goto Label_1700; // 0x694 JumpB
	var_61_string = ""; // 0x695 PushV
	var_61_string = "Neutral"; // 0x696 MovS
	func_1626(var_27_cvector, var_61_string); // 0x697 NEW_2
	var_62_int = 542672; // 0x699 PushI
	SetMessage(var_62_int); // 0x69a TObjFunc
	ClearReplies(); // 0x69c TObjFunc
	var_63_int = 542673; // 0x69e PushI
	var_64_int = 45078; // 0x69f PushI
	var_65_int = 45077; // 0x6a0 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x6a1 TObjFunc
	return 0; // 0x6a3 Return
	
Label_1700:
	var_66_int = 45078; // 0x6a4 PushI
	var_67_bool = var_26_bool == var_66_int; // 0x6a5 Eq
	if(var_67_bool == 0) goto Label_1723; // 0x6a6 JumpB
	var_68_string = ""; // 0x6a7 PushV
	var_68_string = "Neutral"; // 0x6a8 MovS
	func_1626(var_27_cvector, var_68_string); // 0x6a9 NEW_2
	var_69_int = 542674; // 0x6ab PushI
	SetMessage(var_69_int); // 0x6ac TObjFunc
	ClearReplies(); // 0x6ae TObjFunc
	var_70_int = 542675; // 0x6b0 PushI
	var_71_int = 45081; // 0x6b1 PushI
	var_72_int = 45079; // 0x6b2 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x6b3 TObjFunc
	var_73_int = 542676; // 0x6b5 PushI
	var_74_int = 45084; // 0x6b6 PushI
	var_75_int = 45080; // 0x6b7 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_76_int = 45081; // 0x6bb PushI
	var_77_bool = var_26_bool == var_76_int; // 0x6bc Eq
	if(var_77_bool == 0) goto Label_1746; // 0x6bd JumpB
	var_78_string = ""; // 0x6be PushV
	var_78_string = "Neutral"; // 0x6bf MovS
	func_1626(var_27_cvector, var_78_string); // 0x6c0 NEW_2
	var_79_int = 542677; // 0x6c2 PushI
	SetMessage(var_79_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_80_int = 542678; // 0x6c7 PushI
	var_81_int = 45088; // 0x6c8 PushI
	var_82_int = 45082; // 0x6c9 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x6ca TObjFunc
	var_83_int = 542679; // 0x6cc PushI
	var_84_int = 45084; // 0x6cd PushI
	var_85_int = 45083; // 0x6ce PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x6cf TObjFunc
	return 0; // 0x6d1 Return
	
Label_1746:
	var_86_int = 45088; // 0x6d2 PushI
	var_87_bool = var_26_bool == var_86_int; // 0x6d3 Eq
	if(var_87_bool == 0) goto Label_1764; // 0x6d4 JumpB
	var_88_string = ""; // 0x6d5 PushV
	var_88_string = "Warning"; // 0x6d6 MovS
	func_1626(var_27_cvector, var_88_string); // 0x6d7 NEW_2
	var_89_int = 542683; // 0x6d9 PushI
	SetMessage(var_89_int); // 0x6da TObjFunc
	ClearReplies(); // 0x6dc TObjFunc
	var_90_int = 542684; // 0x6de PushI
	var_91_int = 45084; // 0x6df PushI
	var_92_int = 45089; // 0x6e0 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x6e1 TObjFunc
	return 0; // 0x6e3 Return
	
Label_1764:
	var_93_int = 45084; // 0x6e4 PushI
	var_94_bool = var_26_bool == var_93_int; // 0x6e5 Eq
	if(var_94_bool == 0) goto Label_1787; // 0x6e6 JumpB
	var_95_string = ""; // 0x6e7 PushV
	var_95_string = "Warning"; // 0x6e8 MovS
	func_1626(var_27_cvector, var_95_string); // 0x6e9 NEW_2
	var_96_int = 542680; // 0x6eb PushI
	SetMessage(var_96_int); // 0x6ec TObjFunc
	ClearReplies(); // 0x6ee TObjFunc
	var_97_int = 542681; // 0x6f0 PushI
	var_98_int = 45091; // 0x6f1 PushI
	var_99_int = 45085; // 0x6f2 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x6f3 TObjFunc
	var_100_int = 542687; // 0x6f5 PushI
	var_101_int = 45094; // 0x6f6 PushI
	var_102_int = 45093; // 0x6f7 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x6f8 TObjFunc
	return 0; // 0x6fa Return
	
Label_1787:
	var_103_int = 45094; // 0x6fb PushI
	var_104_bool = var_26_bool == var_103_int; // 0x6fc Eq
	if(var_104_bool == 0) goto Label_1805; // 0x6fd JumpB
	var_105_string = ""; // 0x6fe PushV
	var_105_string = "Confusion"; // 0x6ff MovS
	func_1626(var_27_cvector, var_105_string); // 0x700 NEW_2
	var_106_int = 542688; // 0x702 PushI
	SetMessage(var_106_int); // 0x703 TObjFunc
	ClearReplies(); // 0x705 TObjFunc
	var_107_int = 542689; // 0x707 PushI
	var_108_int = 45096; // 0x708 PushI
	var_109_int = 45095; // 0x709 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x70a TObjFunc
	return 0; // 0x70c Return
	
Label_1805:
	var_110_int = 45091; // 0x70d PushI
	var_111_bool = var_26_bool == var_110_int; // 0x70e Eq
	if(var_111_bool == 0) goto Label_1823; // 0x70f JumpB
	var_112_string = ""; // 0x710 PushV
	var_112_string = "Warning"; // 0x711 MovS
	func_1626(var_27_cvector, var_112_string); // 0x712 NEW_2
	var_113_int = 542685; // 0x714 PushI
	SetMessage(var_113_int); // 0x715 TObjFunc
	ClearReplies(); // 0x717 TObjFunc
	var_114_int = 542686; // 0x719 PushI
	var_115_int = 45096; // 0x71a PushI
	var_116_int = 45092; // 0x71b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x71c TObjFunc
	return 0; // 0x71e Return
	
Label_1823:
	var_117_int = 45096; // 0x71f PushI
	var_118_bool = var_26_bool == var_117_int; // 0x720 Eq
	if(var_118_bool == 0) goto Label_1846; // 0x721 JumpB
	var_119_string = ""; // 0x722 PushV
	var_119_string = "Neutral"; // 0x723 MovS
	func_1626(var_27_cvector, var_119_string); // 0x724 NEW_2
	var_120_int = 542690; // 0x726 PushI
	SetMessage(var_120_int); // 0x727 TObjFunc
	ClearReplies(); // 0x729 TObjFunc
	var_121_int = 542691; // 0x72b PushI
	var_122_int = 45100; // 0x72c PushI
	var_123_int = 45098; // 0x72d PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x72e TObjFunc
	var_124_int = 542692; // 0x730 PushI
	var_125_int = -1; // 0x731 PushI
	var_126_int = 45099; // 0x732 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x733 TObjFunc
	return 0; // 0x735 Return
	
Label_1846:
	var_127_int = 45100; // 0x736 PushI
	var_128_bool = var_26_bool == var_127_int; // 0x737 Eq
	if(var_128_bool == 0) goto Label_1869; // 0x738 JumpB
	var_129_string = ""; // 0x739 PushV
	var_129_string = "Neutral"; // 0x73a MovS
	func_1626(var_27_cvector, var_129_string); // 0x73b NEW_2
	var_130_int = 542693; // 0x73d PushI
	SetMessage(var_130_int); // 0x73e TObjFunc
	ClearReplies(); // 0x740 TObjFunc
	var_131_int = 542694; // 0x742 PushI
	var_132_int = 45103; // 0x743 PushI
	var_133_int = 45101; // 0x744 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x745 TObjFunc
	var_134_int = 542695; // 0x747 PushI
	var_135_int = 45103; // 0x748 PushI
	var_136_int = 45102; // 0x749 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x74a TObjFunc
	return 0; // 0x74c Return
	
Label_1869:
	var_137_int = 45103; // 0x74d PushI
	var_138_bool = var_26_bool == var_137_int; // 0x74e Eq
	if(var_138_bool == 0) goto Label_1892; // 0x74f JumpB
	var_139_string = ""; // 0x750 PushV
	var_139_string = "Neutral"; // 0x751 MovS
	func_1626(var_27_cvector, var_139_string); // 0x752 NEW_2
	var_140_int = 542696; // 0x754 PushI
	SetMessage(var_140_int); // 0x755 TObjFunc
	ClearReplies(); // 0x757 TObjFunc
	var_141_int = 542697; // 0x759 PushI
	var_142_int = -1; // 0x75a PushI
	var_143_int = 45105; // 0x75b PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x75c TObjFunc
	var_144_int = 542698; // 0x75e PushI
	var_145_int = -1; // 0x75f PushI
	var_146_int = 45106; // 0x760 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x761 TObjFunc
	return 0; // 0x763 Return
	
Label_1892:
	var_3_string = 1; // 0x764 TMovB
	var_147_bool = 0; // 0x765 PushV
	func_2791(var_147_bool); // 0x766 NEW_2
	if(var_147_bool == 0) goto Label_1900; // 0x768 JumpB
	lshStopAnimation(); // 0x769 Func
	goto Label_1902; // 0x76b Jump
	
Label_1902:
	return 0; // 0x76e Return
	
Label_1900:
	StopAnimation(); // 0x76c Func
	
Label_1904:
	return 0; // 0x770 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x813 PushI
	if(var_28_int == 0) goto Label_2107; // 0x814 JumpB
	func_2667(); // 0x816 NEW_2
	var_30_int = 42554; // 0x818 PushI
	var_31_bool = var_26_int == var_30_int; // 0x819 Eq
	if(var_31_bool == 0) goto Label_2095; // 0x81a JumpB
	var_32_string = ""; // 0x81b PushV
	var_32_string = "Neutral"; // 0x81c MovS
	func_2044(var_27_cvector, var_32_string); // 0x81d NEW_2
	var_49_int = 540545; // 0x81f PushI
	SetMessage(var_49_int); // 0x820 TObjFunc
	ClearReplies(); // 0x822 TObjFunc
	var_50_int = 540546; // 0x824 PushI
	var_51_int = -1; // 0x825 PushI
	var_52_int = 42555; // 0x826 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x827 TObjFunc
	var_53_int = 540798; // 0x829 PushI
	var_54_int = -1; // 0x82a PushI
	var_55_int = 42847; // 0x82b PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x82c TObjFunc
	return 0; // 0x82e Return
	
Label_2095:
	var_3_string = 1; // 0x82f TMovB
	var_56_bool = 0; // 0x830 PushV
	func_2791(var_56_bool); // 0x831 NEW_2
	if(var_56_bool == 0) goto Label_2103; // 0x833 JumpB
	lshStopAnimation(); // 0x834 Func
	goto Label_2105; // 0x836 Jump
	
Label_2105:
	return 0; // 0x839 Return
	
Label_2103:
	StopAnimation(); // 0x837 Func
	
Label_2107:
	return 0; // 0x83b Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x886 PushI
	var_28_bool = var_26_int == var_27_int; // 0x887 Eq
	if(var_28_bool == 0) goto Label_2218; // 0x888 JumpB
	func_2177(); // 0x88a NEW_2
	var_30_bool = 0; // 0x88c PushV
	var_30_bool = 0; // 0x88d MovB
	var_31_bool = 0; // 0x88e PushV
	func_2391(var_31_bool); // 0x88f NEW_2
	if(var_31_bool == 0) goto Label_2199; // 0x891 JumpB
	var_34_bool = 0; // 0x892 PushV
	func_2146(var_34_bool); // 0x893 NEW_2
	if(var_34_bool == 0) goto Label_2199; // 0x895 JumpB
	var_30_bool = 1; // 0x896 MovB
	
Label_2199:
	if(var_30_bool == 0) goto Label_2212; // 0x897 JumpB
	var_51_bool = 0; // 0x898 PushV
	func_2126(var_51_bool); // 0x899 NEW_2
	if(var_51_bool == 0) goto Label_2211; // 0x89b JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x89c PushV
	var_72_object = Obj(); // 0x89d PushV
	func_2674(var_72_object); // 0x89e NEW_2
	var_71_object = var_72_object; // 0x89f Mov
	func_2541(var_71_object); // 0x8a1 NEW_2
	
Label_2211:
	goto Label_2218; // 0x8a3 Jump
	
Label_2218:
	return 0; // 0x8aa Return
	
Label_2212:
	func_2141(var_26_int); // 0x8a5 NEW_2
	func_2168(); // 0x8a8 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2359(); // 0x8ac NEW_2
	func_2177(); // 0x8af NEW_2
	lshStopSpeech(); // 0x8b1 Func
	lshStopAnimation(); // 0x8b3 Func
	StopAsync(); // 0x8b5 Func
	Hold(); // 0x8b7 Func
	return 0; // 0x8b9 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x8ba Func
	func_2177(); // 0x8bd NEW_2
	var_27_string = ""; // 0x8bf PushV
	var_27_string = "Neutral"; // 0x8c0 MovS
	func_2621(var_27_string); // 0x8c1 NEW_2
	func_2168(); // 0x8c4 NEW_2
	return 0; // 0x8c6 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x8c8 Push
	if(var_27_bool == 0) goto Label_2254; // 0x8c9 JumpB
	func_2168(); // 0x8cb NEW_2
	goto Label_2258; // 0x8cd Jump
	
Label_2258:
	return 0; // 0x8d2 Return
	
Label_2254:
	var_33_string = ""; // 0x8ce PushV
	var_33_string = "Neutral"; // 0x8cf MovS
	func_2621(var_33_string); // 0x8d0 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x8d3 PushV
	IsOverrideActive(var_28_bool); // 0x8d4 Func
	var_29_bool = var_28_bool == 0; // 0x8d6 Not
	if(var_29_bool == 0) goto Label_2287; // 0x8d7 JumpB
	EventDisable(0); // 0x8d8 EventDisable
	func_2359(); // 0x8da NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x8dc PushV
	var_31_object = var_26_object; // 0x8dd Mov
	func_2382(var_31_object); // 0x8de NEW_2
	EventEnable(0); // 0x8e0 EventEnable
	var_44_object = Obj(); // 0x8e1 PushV
	var_44_object = var_26_object; // 0x8e2 Mov
	func_3248(var_44_object); // 0x8e3 NEW_2
	var_575_string = ""; // 0x8e5 PushV
	var_575_string = "Neutral"; // 0x8e6 MovS
	func_2621(var_575_string); // 0x8e7 NEW_2
	func_2177(); // 0x8ea NEW_2
	func_2168(); // 0x8ed NEW_2
	
Label_2287:
	return 2; // 0x8ef Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2112(var_25_cvector); // 0x83d NEW_2
	return 0; // 0x83f Return
}


func_0(var_0_object, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x0 PushV
	var_0_object = var_54_object; // 0x1 TMov
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x2 PushV
	var_65_object = var_54_object; // 0x3 Mov
	var_66_float = 70.0; // 0x4 MovF
	func_2396(var_65_object, var_66_float); // 0x5 NEW_2
	var_111_bool = var_64_bool == 0; // 0x7 Not
	if(var_111_bool == 0) goto Label_11; // 0x8 JumpB
	var_53_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_60_object); // 0xb Func
	var_112_int = 0; // 0xd PushV
	func_2785(var_112_int); // 0xe NEW_2
	SetNPCName(var_112_int); // 0x10 ObjFunc
	var_113_int = 0; // 0x12 PushV
	func_2783(var_113_int); // 0x13 NEW_2
	SetNPCDescription(var_113_int); // 0x15 ObjFunc
	var_114_string = ""; // 0x17 PushV
	func_2787(var_114_string); // 0x18 NEW_2
	SetPhoto(var_114_string); // 0x1a ObjFunc
	var_115_string = ""; // 0x1c PushV
	func_2789(var_115_string); // 0x1d NEW_2
	SetPhoto2(var_115_string); // 0x1f ObjFunc
	var_116_int = 0; // 0x21 PushV
	func_3231(var_116_int); // 0x22 NEW_2
	SetPlayerName(var_116_int); // 0x24 ObjFunc
	var_62_int = -1; // 0x26 MovI
	IsOverrideActive(var_61_bool); // 0x27 Func
	var_124_bool = var_61_bool; // 0x29 Push
	if(var_124_bool == 0) goto Label_45; // 0x2a JumpB
	var_53_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_60_object); // 0x2d Func
	var_125_bool = 0; var_126_object = Obj(); // 0x2f PushV
	var_127_object = Obj(); // 0x30 PushV
	func_2674(var_127_object); // 0x31 NEW_2
	var_126_object = var_127_object; // 0x32 Mov
	func_2483(var_125_bool, var_126_object); // 0x34 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x36 PushV
	var_215_object = var_54_object; // 0x37 Mov
	var_216_object = var_60_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_63_bool); // 0x3d ObjFunc
	
Label_63:
	var_280_bool = var_63_bool == 0; // 0x3f Not
	if(var_280_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_63_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_281_object = Obj(); // 0x46 PushV
	var_281_object = var_54_object; // 0x47 Mov
	func_2465(); // 0x48 NEW_2
	StopDialog(var_60_object); // 0x4a Func
	GetReturnValue(var_62_int); // 0x4c ObjFunc
	var_53_int = var_62_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3075()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xc03 PushV
	var_74_int = 494; // 0xc04 PushI
	var_75_int = 1; // 0xc05 PushI
	var_76_int = 528061; // 0xc06 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0xc07 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0xc09 PushV
	var_78_object = var_73_object; // 0xc0a Mov
	var_79_int = 480; // 0xc0b MovI
	func_3153(var_77_bool, var_78_object, var_79_int); // 0xc0c NEW_2
	return 2; // 0xc0e Return
}


func_2825()
{
	var_113_string = "k5q01"; // 0xb0a PushS
	var_114_int = 4; // 0xb0b PushI
	SetVariable(var_113_string, var_114_int); // 0xb0c Func
	func_3114(); // 0xb0f NEW_2
	return 0; // 0xb11 Return
}


func_3088()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xc10 PushV
	var_49_int = 493; // 0xc11 PushI
	var_50_int = 1; // 0xc12 PushI
	var_51_int = 528060; // 0xc13 PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0xc14 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xc16 PushV
	var_53_object = var_48_object; // 0xc17 Mov
	var_54_int = 480; // 0xc18 MovI
	func_3153(var_52_bool, var_53_object, var_54_int); // 0xc19 NEW_2
	return 2; // 0xc1b Return
}


func_2578(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xa12 PushV
	var_179_string = "d"; // 0xa13 PushS
	var_180_int = 0; // 0xa14 PushV
	func_2744(var_180_int); // 0xa15 NEW_2
	var_181_int = var_179_string + var_180_int; // 0xa17 Add
	var_182_string = "m"; // 0xa18 PushS
	var_174_string = var_181_int + var_182_string; // 0xa19 Add2
	var_175_int = 0; // 0xa1a MovI
	
Label_2587:
	var_183_int = 1; // 0xa1b PushI
	if(var_183_int == 0) goto Label_2600; // 0xa1c JumpB
	var_184_int = 1; // 0xa1d PushI
	var_185_int = var_175_int + var_184_int; // 0xa1e Add
	var_186_int = var_174_string + var_185_int; // 0xa1f Add
	HasProperty(var_186_int, var_176_bool); // 0xa20 ObjFunc
	var_187_bool = var_176_bool == 0; // 0xa22 Not
	if(var_187_bool == 0) goto Label_2597; // 0xa23 JumpB
	goto Label_2600; // 0xa24 Jump
	
Label_2600:
	var_188_bool = var_175_int == 0; // 0xa28 Not
	if(var_188_bool == 0) goto Label_2604; // 0xa29 JumpB
	var_167_bool = 0; // 0xa2a MovB
	return 10; // 0xa2b Return
	
Label_2604:
	var_177_int = 0; // 0xa2c MovI
	var_189_int = 1; // 0xa2d PushI
	var_190_bool = var_175_int > var_189_int; // 0xa2e GT
	if(var_190_bool == 0) goto Label_2610; // 0xa2f JumpB
	irand(var_177_int, var_175_int); // 0xa30 Func
	
Label_2610:
	var_191_int = 1; // 0xa32 PushI
	var_192_int = var_177_int + var_191_int; // 0xa33 Add
	var_193_int = var_174_string + var_192_int; // 0xa34 Add
	GetProperty(var_193_int, var_178_string); // 0xa35 ObjFunc
	var_194_bool = 0; var_195_string = ""; // 0xa37 PushV
	var_195_string = var_178_string; // 0xa38 Mov
	func_2652(var_194_bool, var_195_string); // 0xa39 NEW_2
	var_167_bool = var_194_bool; // 0xa3a Mov
	return 10; // 0xa3c Return
	
Label_2597:
	var_196_int = 1; // 0xa25 PushI
	var_175_int = var_175_int + var_196_int; // 0xa26 Add2
	goto Label_2587; // 0xa27 Jump
}


func_2834()
{
	var_77_int = 0; var_78_int = 0; // 0xb12 PushV
	var_79_string = "tvirin"; // 0xb13 PushS
	var_80_int = 3; // 0xb14 PushI
	RemoveItemByType(var_78_int, var_79_string, var_80_int); // 0xb15 ObjFunc
	var_81_string = "fresh_meat"; // 0xb17 PushS
	var_82_int = 3; // 0xb18 PushI
	RemoveItemByType(var_78_int, var_81_string, var_82_int); // 0xb19 ObjFunc
	return 2; // 0xb1b Return
}


func_1563(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object; // 0x61c TMov
	var_1_object = var_484_object; // 0x61d TMov
	var_3_string = 0; // 0x61e TMovB
	var_490_int = 1; // 0x61f PushI
	if(var_490_int == 0) goto Label_1596; // 0x620 JumpB
	var_491_string = ""; // 0x621 PushV
	var_491_string = "Neutral"; // 0x622 MovS
	func_1626(var_485_object, var_491_string); // 0x623 NEW_2
	var_499_int = 539294; // 0x625 PushI
	SetMessage(var_499_int); // 0x626 TObjFunc
	ClearReplies(); // 0x628 TObjFunc
	var_500_int = 542670; // 0x62a PushI
	var_501_int = 45076; // 0x62b PushI
	var_502_int = 45074; // 0x62c PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x62d TObjFunc
	var_503_int = 539295; // 0x62f PushI
	var_504_int = -1; // 0x630 PushI
	var_505_int = 41238; // 0x631 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x632 TObjFunc
	var_506_int = 542671; // 0x634 PushI
	var_507_int = -1; // 0x635 PushI
	var_508_int = 45075; // 0x636 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x637 TObjFunc
	goto Label_1596; // 0x639 Jump
	
Label_1596:
	var_509_bool = 0; // 0x63c PushV
	func_2791(var_509_bool); // 0x63d NEW_2
	if(var_509_bool == 0) goto Label_1611; // 0x63f JumpB
	
Label_1600:
	lshWaitForAnimEnd(); // 0x640 Func
	var_510_string = var_3_string; // 0x642 PushT
	if(var_510_string == 0) goto Label_1605; // 0x643 JumpB
	goto Label_1610; // 0x644 Jump
	
Label_1610:
	goto Label_1625; // 0x64a Jump
	
Label_1625:
	return 0; // 0x659 Return
	
Label_1605:
	var_511_string = ""; // 0x645 PushV
	var_511_string = var_2_object; // 0x646 MovT
	func_2621(var_511_string); // 0x647 NEW_2
	goto Label_1600; // 0x649 Jump
	
Label_1611:
	var_512_string = "all"; // 0x64b PushS
	var_513_string = "idle"; // 0x64c PushS
	PlayAnimation(var_512_string, var_513_string); // 0x64d Func
	
Label_1615:
	WaitForAnimEnd(); // 0x64f Func
	var_514_string = var_3_string; // 0x651 PushT
	if(var_514_string == 0) goto Label_1620; // 0x652 JumpB
	goto Label_1625; // 0x653 Jump
	
Label_1620:
	var_515_string = "all"; // 0x654 PushS
	var_516_string = "idle"; // 0x655 PushS
	PlayAnimation(var_515_string, var_516_string); // 0x656 Func
	goto Label_1615; // 0x658 Jump
}


func_2844()
{
	var_40_int = 0; var_41_int = 0; // 0xb1c PushV
	var_42_string = "k11q01SoulCount"; // 0xb1d PushS
	GetVariable(var_42_string, var_41_int); // 0xb1e Func
	var_43_int = 1; // 0xb20 PushI
	var_41_int = var_41_int + var_43_int; // 0xb21 Add2
	var_44_string = "k11q01SoulCount"; // 0xb22 PushS
	SetVariable(var_44_string, var_41_int); // 0xb23 Func
	var_45_int = 2; // 0xb25 PushI
	var_46_bool = var_41_int == var_45_int; // 0xb26 Eq
	if(var_46_bool == 0) goto Label_2860; // 0xb27 JumpB
	func_3088(); // 0xb29 NEW_2
	goto Label_2894; // 0xb2b Jump
	
Label_2894:
	return 2; // 0xb4e Return
	
Label_2860:
	var_70_int = 3; // 0xb2c PushI
	var_71_bool = var_41_int == var_70_int; // 0xb2d Eq
	if(var_71_bool == 0) goto Label_2867; // 0xb2e JumpB
	func_3075(); // 0xb30 NEW_2
	goto Label_2894; // 0xb32 Jump
	
Label_2867:
	var_80_int = 4; // 0xb33 PushI
	var_81_bool = var_41_int == var_80_int; // 0xb34 Eq
	if(var_81_bool == 0) goto Label_2874; // 0xb35 JumpB
	func_3062(); // 0xb37 NEW_2
	goto Label_2894; // 0xb39 Jump
	
Label_2874:
	var_90_int = 5; // 0xb3a PushI
	var_91_bool = var_41_int == var_90_int; // 0xb3b Eq
	if(var_91_bool == 0) goto Label_2881; // 0xb3c JumpB
	func_3049(); // 0xb3e NEW_2
	goto Label_2894; // 0xb40 Jump
	
Label_2881:
	var_100_int = 6; // 0xb41 PushI
	var_101_bool = var_41_int == var_100_int; // 0xb42 Eq
	if(var_101_bool == 0) goto Label_2888; // 0xb43 JumpB
	func_3036(); // 0xb45 NEW_2
	goto Label_2894; // 0xb47 Jump
	
Label_2888:
	var_110_int = 7; // 0xb48 PushI
	var_111_bool = var_41_int == var_110_int; // 0xb49 Eq
	if(var_111_bool == 0) goto Label_2894; // 0xb4a JumpB
	func_3023(); // 0xb4c NEW_2
}


func_3101()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0xc1d PushV
	var_38_int = 353; // 0xc1e PushI
	var_39_int = 2; // 0xc1f PushI
	var_40_int = 525619; // 0xc20 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0xc21 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0xc23 PushV
	var_42_object = var_37_object; // 0xc24 Mov
	var_43_int = 350; // 0xc25 MovI
	func_3153(var_41_bool, var_42_object, var_43_int); // 0xc26 NEW_2
	return 2; // 0xc28 Return
}


func_3114()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0xc2a PushV
	var_117_int = 395; // 0xc2b PushI
	var_118_int = 1; // 0xc2c PushI
	var_119_int = 525888; // 0xc2d PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0xc2e Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0xc30 PushV
	var_121_object = var_116_object; // 0xc31 Mov
	var_122_int = 390; // 0xc32 MovI
	func_3153(var_120_bool, var_121_object, var_122_int); // 0xc33 NEW_2
	return 2; // 0xc35 Return
}


func_556(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0; // 0x22c PushV
	var_0_object = var_292_object; // 0x22d TMov
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0; // 0x22e PushV
	var_303_object = var_292_object; // 0x22f Mov
	var_304_float = 70.0; // 0x230 MovF
	func_2396(var_303_object, var_304_float); // 0x231 NEW_2
	var_305_bool = var_302_bool == 0; // 0x233 Not
	if(var_305_bool == 0) goto Label_567; // 0x234 JumpB
	var_291_int = -2; // 0x235 MovI
	return 8; // 0x236 Return
	
Label_567:
	CreateDialog(var_298_object); // 0x237 Func
	var_306_int = 0; // 0x239 PushV
	func_2785(var_306_int); // 0x23a NEW_2
	SetNPCName(var_306_int); // 0x23c ObjFunc
	var_307_int = 0; // 0x23e PushV
	func_2783(var_307_int); // 0x23f NEW_2
	SetNPCDescription(var_307_int); // 0x241 ObjFunc
	var_308_string = ""; // 0x243 PushV
	func_2787(var_308_string); // 0x244 NEW_2
	SetPhoto(var_308_string); // 0x246 ObjFunc
	var_309_string = ""; // 0x248 PushV
	func_2789(var_309_string); // 0x249 NEW_2
	SetPhoto2(var_309_string); // 0x24b ObjFunc
	var_310_int = 0; // 0x24d PushV
	func_3231(var_310_int); // 0x24e NEW_2
	SetPlayerName(var_310_int); // 0x250 ObjFunc
	var_300_int = -1; // 0x252 MovI
	IsOverrideActive(var_299_bool); // 0x253 Func
	var_311_bool = var_299_bool; // 0x255 Push
	if(var_311_bool == 0) goto Label_601; // 0x256 JumpB
	var_291_int = -2; // 0x257 MovI
	return 8; // 0x258 Return
	
Label_601:
	DoDialog(var_298_object); // 0x259 Func
	var_312_bool = 0; var_313_object = Obj(); // 0x25b PushV
	var_314_object = Obj(); // 0x25c PushV
	func_2674(var_314_object); // 0x25d NEW_2
	var_313_object = var_314_object; // 0x25e Mov
	func_2483(var_312_bool, var_313_object); // 0x260 NEW_2
	var_315_object = Obj(); var_316_object = Obj(); // 0x262 PushV
	var_315_object = var_292_object; // 0x263 Mov
	var_316_object = var_298_object; // 0x264 Mov
	TaskCall(3); // 0x265 TaskCall
	func_637(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object); // 0x266 NEW_2
	TaskReturn(); // 0x267 TaskReturn
	IsDialogEnd(var_301_bool); // 0x269 ObjFunc
	
Label_619:
	var_385_bool = var_301_bool == 0; // 0x26b Not
	if(var_385_bool == 0) goto Label_626; // 0x26c JumpB
	sync(); // 0x26d Func
	IsDialogEnd(var_301_bool); // 0x26f ObjFunc
	goto Label_619; // 0x271 Jump
	
Label_626:
	var_386_object = Obj(); // 0x272 PushV
	var_386_object = var_292_object; // 0x273 Mov
	func_2465(); // 0x274 NEW_2
	StopDialog(var_298_object); // 0x276 Func
	GetReturnValue(var_300_int); // 0x278 ObjFunc
	var_291_int = var_300_int; // 0x27a Mov
	return 8; // 0x27b Return
}


func_2357(var_64_bool)
{
	var_64_bool = 1; // 0x935 MovB
	return 0; // 0x936 Return
}


func_3127()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xc37 PushV
	var_54_int = 393; // 0xc38 PushI
	var_55_int = 1; // 0xc39 PushI
	var_56_int = 525886; // 0xc3a PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0xc3b Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0xc3d PushV
	var_58_object = var_53_object; // 0xc3e Mov
	var_59_int = 390; // 0xc3f MovI
	func_3153(var_57_bool, var_58_object, var_59_int); // 0xc40 NEW_2
	return 2; // 0xc42 Return
}


func_2359()
{
	StopAnimation(); // 0x937 Func
	StopGroup0(); // 0x939 Func
	return 0; // 0x93b Return
}


func_2364(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x93c PushV
	GetPosition(var_46_cvector); // 0x93d Func
	GetPosition(var_47_cvector); // 0x93f ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x941 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x942 Or2
	return 6; // 0x943 Return
}


func_2621(var_256_string)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0; // 0xa3d PushV
	lshHasAnimation(var_260_bool, var_256_string); // 0xa3e Func
	var_263_bool = var_260_bool; // 0xa40 Push
	if(var_263_bool == 0) goto Label_2632; // 0xa41 JumpB
	lshGetAnimTimes(var_256_string, var_261_float, var_262_float); // 0xa42 Func
	var_264_bool = 0; // 0xa44 PushB
	lshPlayAnimation(var_261_float, var_262_float, var_264_bool); // 0xa45 Func
	goto Label_2636; // 0xa47 Jump
	
Label_2636:
	return 6; // 0xa4c Return
	
Label_2632:
	var_265_string = "Can't find lsh animation : "; // 0xa48 PushS
	var_266_int = var_265_string + var_256_string; // 0xa49 Add
	Trace(var_266_int); // 0xa4a Func
}


func_2112(var_0_object)
{
	var_26_bool = 0; // 0x840 PushV
	func_2391(var_26_bool); // 0x841 NEW_2
	var_29_bool = var_26_bool == 0; // 0x843 Not
	if(var_29_bool == 0) goto Label_2119; // 0x844 JumpB
	Hold(); // 0x845 Func
	
Label_2119:
	GetDirection(var_0_object); // 0x847 Func
	
Label_2121:
	func_2288(); // 0x84a NEW_2
	goto Label_2121; // 0x84c Jump
}


func_3140(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xc44 PushV
	GetDiaryRoot(var_63_object); // 0xc45 Func
	var_64_bool = var_63_object == 0; // 0xc47 Not
	if(var_64_bool == 0) goto Label_3150; // 0xc48 JumpB
	var_65_string = "Can't retrieve diary root"; // 0xc49 PushS
	Trace(var_65_string); // 0xc4a Func
	var_61_object = 0; // 0xc4c MovB
	return 2; // 0xc4d Return
	
Label_3150:
	var_61_object = var_63_object; // 0xc4e Mov
	return 2; // 0xc4f Return
}


func_2372(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x944 PushV
	GetPosition(var_39_cvector); // 0x945 Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x947 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x948 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x949 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x94a Func
	var_34_bool = var_41_bool; // 0x94c Mov
	return 6; // 0x94d Return
}


func_2637(var_234_string, var_235_bool)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0xa4d PushV
	lshHasAnimation(var_241_bool, var_234_string); // 0xa4e Func
	var_244_bool = var_241_bool; // 0xa50 Push
	if(var_244_bool == 0) goto Label_2647; // 0xa51 JumpB
	lshGetAnimTimes(var_234_string, var_242_float, var_243_float); // 0xa52 Func
	lshPlayAnimation(var_242_float, var_243_float, var_235_bool); // 0xa54 Func
	goto Label_2651; // 0xa56 Jump
	
Label_2651:
	return 6; // 0xa5b Return
	
Label_2647:
	var_245_string = "Can't find lsh animation : "; // 0xa57 PushS
	var_246_int = var_245_string + var_234_string; // 0xa58 Add
	Trace(var_246_int); // 0xa59 Func
}


func_2126(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x84e PushV
	var_54_string = "player"; // 0x84f PushS
	FindActor(var_53_object, var_54_string); // 0x850 Func
	var_55_bool = var_53_object == 0; // 0x852 Not
	if(var_55_bool == 0) goto Label_2134; // 0x853 JumpB
	var_51_bool = 0; // 0x854 MovB
	return 2; // 0x855 Return
	
Label_2134:
	var_56_bool = 0; var_57_object = Obj(); // 0x856 PushV
	var_57_object = var_53_object; // 0x857 Mov
	func_2382(var_57_object); // 0x858 NEW_2
	var_51_bool = var_56_bool; // 0x859 Mov
	return 2; // 0x85b Return
}


func_2382(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x94e PushV
	GetPosition(var_33_cvector); // 0x94f ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x951 PushV
	var_35_cvector = var_33_cvector; // 0x952 Mov
	func_2372(var_34_bool, var_35_cvector); // 0x953 NEW_2
	var_30_bool = var_34_bool; // 0x954 Mov
	return 2; // 0x956 Return
}


func_2895()
{
	var_34_string = "ook11Rubin1"; // 0xb50 PushS
	var_35_int = 1; // 0xb51 PushI
	SetVariable(var_34_string, var_35_int); // 0xb52 Func
	return 0; // 0xb54 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object; // 0x52 TMov
	var_1_object = var_215_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_221_int = 1; // 0x55 PushI
	if(var_221_int == 0) goto Label_134; // 0x56 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x57 PushV
	var_223_object = var_1_object; // 0x58 MovT
	func_2934(var_223_object); // 0x59 NEW_2
	if(var_222_bool == 0) goto Label_112; // 0x5b JumpB
	var_230_string = ""; // 0x5c PushV
	var_230_string = "Confusion"; // 0x5d MovS
	func_164(var_216_object, var_230_string); // 0x5e NEW_2
	var_247_int = 525584; // 0x60 PushI
	SetMessage(var_247_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_248_int = 525585; // 0x65 PushI
	var_249_int = 26933; // 0x66 PushI
	var_250_int = 26932; // 0x67 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x68 TObjFunc
	var_251_int = 540637; // 0x6a PushI
	var_252_int = 26933; // 0x6b PushI
	var_253_int = 42660; // 0x6c PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_254_bool = 0; // 0x86 PushV
	func_2791(var_254_bool); // 0x87 NEW_2
	if(var_254_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_255_string = var_3_string; // 0x8c PushT
	if(var_255_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_256_string = ""; // 0x8f PushV
	var_256_string = var_2_object; // 0x90 MovT
	func_2621(var_256_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_267_string = "all"; // 0x95 PushS
	var_268_string = "idle"; // 0x96 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_269_string = var_3_string; // 0x9b PushT
	if(var_269_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_270_string = "all"; // 0x9e PushS
	var_271_string = "idle"; // 0x9f PushS
	PlayAnimation(var_270_string, var_271_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_272_string = ""; // 0x70 PushV
	var_272_string = "Warning"; // 0x71 MovS
	func_164(var_216_object, var_272_string); // 0x72 NEW_2
	var_273_int = 525591; // 0x74 PushI
	SetMessage(var_273_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_274_int = 525592; // 0x79 PushI
	var_275_int = -1; // 0x7a PushI
	var_276_int = 26939; // 0x7b PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x7c TObjFunc
	var_277_int = 540621; // 0x7e PushI
	var_278_int = -1; // 0x7f PushI
	var_279_int = 42643; // 0x80 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_3153(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0xc51 PushV
	var_61_object = Obj(); // 0xc52 PushV
	func_3140(var_61_object); // 0xc53 NEW_2
	var_58_object = var_61_object; // 0xc54 Mov
	Find(var_54_int, var_59_object); // 0xc56 ObjFunc
	var_66_bool = var_59_object == 0; // 0xc58 Not
	if(var_66_bool == 0) goto Label_3168; // 0xc59 JumpB
	var_67_string = "Can't find diary parent with id: "; // 0xc5a PushS
	var_68_int = var_67_string + var_54_int; // 0xc5b Add
	Trace(var_68_int); // 0xc5c Func
	var_52_bool = 0; // 0xc5e MovB
	return 6; // 0xc5f Return
	
Label_3168:
	AddChild(var_53_object); // 0xc60 ObjFunc
	var_69_int = 7; // 0xc62 PushI
	SendWorldWndMessage(var_69_int); // 0xc63 Func
	GetCategory(var_60_int); // 0xc65 ObjFunc
	SetDiarySection(var_60_int); // 0xc67 Func
	var_52_bool = 0; // 0xc69 MovB
	return 6; // 0xc6a Return
}


func_2901()
{
	var_61_string = "playsound"; // 0xb56 PushS
	var_62_string = "giveitem"; // 0xb57 PushS
	TriggerWorld(var_61_string, var_62_string); // 0xb58 Func
	return 0; // 0xb5a Return
}


func_2391(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x957 PushV
	IsLoaded(var_28_bool); // 0x958 Func
	var_26_bool = var_28_bool; // 0x95a Mov
	return 2; // 0x95b Return
}


func_1626(var_2_object, var_491_string)
{
	var_492_bool = 0; // 0x65b PushV
	func_2791(var_492_bool); // 0x65c NEW_2
	var_493_bool = var_492_bool == 0; // 0x65e Not
	if(var_493_bool == 0) goto Label_1633; // 0x65f JumpB
	return 0; // 0x660 Return
	
Label_1633:
	var_494_bool = var_491_string == var_2_object; // 0x661 Eq
	if(var_494_bool == 0) goto Label_1636; // 0x662 JumpB
	return 0; // 0x663 Return
	
Label_1636:
	var_495_string = ""; var_496_bool = 0; // 0x664 PushV
	var_495_string = var_491_string; // 0x665 Mov
	var_497_string = ""; // 0x666 PushS
	var_498_bool = var_491_string == var_497_string; // 0x667 Eq
	if(var_498_bool == 0) goto Label_1643; // 0x668 JumpB
	var_496_bool = 0; // 0x669 MovB
	goto Label_1644; // 0x66a Jump
	
Label_1644:
	func_2637(var_495_string, var_496_bool); // 0x66c NEW_2
	var_2_object = var_491_string; // 0x66e TMov
	return 0; // 0x66f Return
	
Label_1643:
	var_496_bool = 1; // 0x66b MovB
}


func_2907()
{
	var_85_object = Obj(); var_86_string = ""; var_87_float = 0; // 0xb5c PushV
	var_88_object = Obj(); // 0xb5d PushV
	func_3181(var_88_object); // 0xb5e NEW_2
	var_85_object = var_88_object; // 0xb5f Mov
	var_86_string = "pt_map_georg"; // 0xb61 MovS
	var_87_float = 2; // 0xb62 MovI
	func_3198(var_85_object, var_86_string, var_87_float); // 0xb63 NEW_2
	var_108_object = Obj(); // 0xb65 PushV
	func_3181(var_108_object); // 0xb66 NEW_2
	ShowMap(var_108_object); // 0xb68 ObjFunc
	return 0; // 0xb6a Return
}


func_2652(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xa5c PushV
	var_163_bool = 0; // 0xa5d PushV
	func_2791(var_163_bool); // 0xa5e NEW_2
	if(var_163_bool == 0) goto Label_2665; // 0xa60 JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xa61 Func
	var_164_bool = var_162_bool; // 0xa63 Push
	if(var_164_bool == 0) goto Label_2665; // 0xa64 JumpB
	lshPlaySpeech(var_160_string); // 0xa65 Func
	var_159_bool = 1; // 0xa67 MovB
	return 2; // 0xa68 Return
	
Label_2665:
	var_159_bool = 0; // 0xa69 MovB
	return 2; // 0xa6a Return
}


func_2141(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x85d PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x85e PushE
	RotateAsync(var_103_float, var_104_float); // 0x85f Func
	return 0; // 0x861 Return
}


func_2396(var_64_bool, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; // 0x95c PushV
	GetPosition(var_77_cvector); // 0x95d ObjFunc
	GetEyesHeight(var_76_float); // 0x95f ObjFunc
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x961 PushE
	var_85_float = var_85_float + var_76_float; // 0x962 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x963 PopE
	GetPosition(var_78_cvector); // 0x964 Func
	GetEyesHeight(var_76_float); // 0x966 Func
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x968 PushE
	var_86_float = var_86_float + var_76_float; // 0x969 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x96a PopE
	var_79_cvector = var_77_cvector - var_78_cvector; // 0x96b Sub2
	var_87_float = GetByIndex(var_79_cvector, 1); // 0x96c PushE
	var_87_float = 0; // 0x96d MovI
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0x96e PopE
	var_88_int = var_79_cvector | var_79_cvector; // 0x96f Or
	var_89_float = sqrt(var_88_int); // 0x970 Sqrt
	var_79_cvector = var_79_cvector / var_79_cvector; // 0x971 Div2
	var_80_cvector = -var_79_cvector; // 0x972 Neg2
	var_90_float = var_79_cvector * var_66_float; // 0x973 Mult
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0x974 PushV
	var_93_cvector = CVector(0.0, 1.0, 0.0); // 0x975 PushVec
	var_92_cvector = var_80_cvector ^ var_93_cvector; // 0x976 Xor2
	func_2680(var_91_cvector, var_92_cvector); // 0x977 NEW_2
	var_99_int = 25; // 0x979 PushI
	var_100_float = var_91_cvector * var_99_int; // 0x97a Mult
	var_101_int = var_90_float + var_100_float; // 0x97b Add
	var_102_cvector = CVector(0.0, 10.0, 0.0); // 0x97c PushVec
	var_81_cvector = var_101_int - var_102_cvector; // 0x97d Sub2
	var_82_cvector = var_78_cvector + var_81_cvector; // 0x97e Add2
	IsOverrideActive(var_83_bool); // 0x97f Func
	var_103_bool = var_83_bool; // 0x981 Push
	if(var_103_bool == 0) goto Label_2437; // 0x982 JumpB
	var_64_bool = 0; // 0x983 MovB
	return 18; // 0x984 Return
	
Label_2437:
	StopWorld(); // 0x985 Func
	var_104_bool = 1; // 0x987 PushB
	CameraTransit(var_82_cvector, var_80_cvector, var_104_bool); // 0x988 Func
	var_105_float = GetByIndex(var_81_cvector, 0); // 0x98a PushE
	var_106_float = GetByIndex(var_81_cvector, 2); // 0x98b PushE
	Rotate(var_105_float, var_106_float); // 0x98c Func
	var_107_bool = 0; // 0x98e PushV
	func_2791(var_107_bool); // 0x98f NEW_2
	if(var_107_bool == 0) goto Label_2451; // 0x991 JumpB
	goto Label_2459; // 0x992 Jump
	
Label_2459:
	CameraWaitForPlayFinish(); // 0x99b Func
	ResumeWorld(); // 0x99d Func
	var_64_bool = 1; // 0x99f MovB
	return 18; // 0x9a0 Return
	
Label_2451:
	var_108_string = "head"; // 0x993 PushS
	HasAnimationTrack(var_84_bool, var_108_string); // 0x994 Func
	var_109_bool = var_84_bool; // 0x996 Push
	if(var_109_bool == 0) goto Label_2459; // 0x997 JumpB
	var_110_string = "head"; // 0x998 PushS
	LookAsyncCamera(var_110_string); // 0x999 Func
}


func_2146(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x862 PushV
	var_39_string = "player"; // 0x863 PushS
	FindActor(var_37_object, var_39_string); // 0x864 Func
	var_40_bool = var_37_object == 0; // 0x866 Not
	if(var_40_bool == 0) goto Label_2154; // 0x867 JumpB
	var_34_bool = 0; // 0x868 MovB
	return 4; // 0x869 Return
	
Label_2154:
	var_41_float = 0; var_42_object = Obj(); // 0x86a PushV
	var_42_object = var_37_object; // 0x86b Mov
	func_2364(var_42_object); // 0x86c NEW_2
	var_49_float = 90000.0; // 0x86e PushF
	var_50_bool = var_41_float > var_49_float; // 0x86f GT
	if(var_50_bool == 0) goto Label_2163; // 0x870 JumpB
	var_34_bool = 0; // 0x871 MovB
	return 4; // 0x872 Return
	
Label_2163:
	CanSee(var_38_bool, var_37_object); // 0x873 Func
	var_34_bool = var_38_bool; // 0x875 Mov
	return 4; // 0x876 Return
}


func_1122(var_0_object, var_389_int, var_390_object)
{
	var_392_object = Obj(); var_393_bool = 0; var_394_int = 0; var_395_bool = 0; var_396_object = Obj(); var_397_bool = 0; var_398_int = 0; var_399_bool = 0; // 0x462 PushV
	var_0_object = var_390_object; // 0x463 TMov
	var_400_bool = 0; var_401_object = Obj(); var_402_float = 0; // 0x464 PushV
	var_401_object = var_390_object; // 0x465 Mov
	var_402_float = 70.0; // 0x466 MovF
	func_2396(var_401_object, var_402_float); // 0x467 NEW_2
	var_403_bool = var_400_bool == 0; // 0x469 Not
	if(var_403_bool == 0) goto Label_1133; // 0x46a JumpB
	var_389_int = -2; // 0x46b MovI
	return 8; // 0x46c Return
	
Label_1133:
	CreateDialog(var_396_object); // 0x46d Func
	var_404_int = 0; // 0x46f PushV
	func_2785(var_404_int); // 0x470 NEW_2
	SetNPCName(var_404_int); // 0x472 ObjFunc
	var_405_int = 0; // 0x474 PushV
	func_2783(var_405_int); // 0x475 NEW_2
	SetNPCDescription(var_405_int); // 0x477 ObjFunc
	var_406_string = ""; // 0x479 PushV
	func_2787(var_406_string); // 0x47a NEW_2
	SetPhoto(var_406_string); // 0x47c ObjFunc
	var_407_string = ""; // 0x47e PushV
	func_2789(var_407_string); // 0x47f NEW_2
	SetPhoto2(var_407_string); // 0x481 ObjFunc
	var_408_int = 0; // 0x483 PushV
	func_3231(var_408_int); // 0x484 NEW_2
	SetPlayerName(var_408_int); // 0x486 ObjFunc
	var_398_int = -1; // 0x488 MovI
	IsOverrideActive(var_397_bool); // 0x489 Func
	var_409_bool = var_397_bool; // 0x48b Push
	if(var_409_bool == 0) goto Label_1167; // 0x48c JumpB
	var_389_int = -2; // 0x48d MovI
	return 8; // 0x48e Return
	
Label_1167:
	DoDialog(var_396_object); // 0x48f Func
	var_410_bool = 0; var_411_object = Obj(); // 0x491 PushV
	var_412_object = Obj(); // 0x492 PushV
	func_2674(var_412_object); // 0x493 NEW_2
	var_411_object = var_412_object; // 0x494 Mov
	func_2483(var_410_bool, var_411_object); // 0x496 NEW_2
	var_413_object = Obj(); var_414_object = Obj(); // 0x498 PushV
	var_413_object = var_390_object; // 0x499 Mov
	var_414_object = var_396_object; // 0x49a Mov
	TaskCall(5); // 0x49b TaskCall
	func_1203(var_415_object, var_416_object, var_417_string, var_418_bool, var_413_object, var_414_object); // 0x49c NEW_2
	TaskReturn(); // 0x49d TaskReturn
	IsDialogEnd(var_399_bool); // 0x49f ObjFunc
	
Label_1185:
	var_456_bool = var_399_bool == 0; // 0x4a1 Not
	if(var_456_bool == 0) goto Label_1192; // 0x4a2 JumpB
	sync(); // 0x4a3 Func
	IsDialogEnd(var_399_bool); // 0x4a5 ObjFunc
	goto Label_1185; // 0x4a7 Jump
	
Label_1192:
	var_457_object = Obj(); // 0x4a8 PushV
	var_457_object = var_390_object; // 0x4a9 Mov
	func_2465(); // 0x4aa NEW_2
	StopDialog(var_396_object); // 0x4ac Func
	GetReturnValue(var_398_int); // 0x4ae ObjFunc
	var_389_int = var_398_int; // 0x4b0 Mov
	return 8; // 0x4b1 Return
}


func_2667()
{
	var_29_bool = 0; // 0xa6b PushV
	func_2791(var_29_bool); // 0xa6c NEW_2
	if(var_29_bool == 0) goto Label_2673; // 0xa6e JumpB
	lshStopSpeech(); // 0xa6f Func
	
Label_2673:
	return 0; // 0xa71 Return
}


func_2923(var_63_object)
{
	var_65_string = "blackvaccine2 is given"; // 0xb6c PushS
	Trace(var_65_string); // 0xb6d Func
	var_66_object = Obj(); var_67_string = ""; var_68_int = 0; // 0xb6f PushV
	var_66_object = var_63_object; // 0xb70 Mov
	var_67_string = "black_vaccine"; // 0xb71 MovS
	var_68_int = 2; // 0xb72 MovI
	func_2726(var_66_object, var_67_string, var_68_int); // 0xb73 NEW_2
	return 0; // 0xb75 Return
}


func_3181(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0xc6d PushV
	GetMainOutdoorScene(var_41_object); // 0xc6e Func
	var_43_bool = var_41_object == 0; // 0xc70 NullEq
	if(var_43_bool == 0) goto Label_3192; // 0xc71 JumpB
	var_44_string = "Can't find main outdoor scene"; // 0xc72 PushS
	Trace(var_44_string); // 0xc73 Func
	var_42_object = 0; // 0xc75 SetNull
	var_38_object = var_42_object; // 0xc76 Mov
	return 4; // 0xc77 Return
	
Label_3192:
	GetMap(var_42_object); // 0xc78 ObjFunc
	var_38_object = var_42_object; // 0xc7a Mov
	return 4; // 0xc7b Return
}


func_1905(var_0_object, var_519_int, var_520_object)
{
	var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0; var_526_object = Obj(); var_527_bool = 0; var_528_int = 0; var_529_bool = 0; // 0x771 PushV
	var_0_object = var_520_object; // 0x772 TMov
	var_530_bool = 0; var_531_object = Obj(); var_532_float = 0; // 0x773 PushV
	var_531_object = var_520_object; // 0x774 Mov
	var_532_float = 70.0; // 0x775 MovF
	func_2396(var_531_object, var_532_float); // 0x776 NEW_2
	var_533_bool = var_530_bool == 0; // 0x778 Not
	if(var_533_bool == 0) goto Label_1916; // 0x779 JumpB
	var_519_int = -2; // 0x77a MovI
	return 8; // 0x77b Return
	
Label_1916:
	CreateDialog(var_526_object); // 0x77c Func
	var_534_int = 0; // 0x77e PushV
	func_2785(var_534_int); // 0x77f NEW_2
	SetNPCName(var_534_int); // 0x781 ObjFunc
	var_535_int = 0; // 0x783 PushV
	func_2783(var_535_int); // 0x784 NEW_2
	SetNPCDescription(var_535_int); // 0x786 ObjFunc
	var_536_string = ""; // 0x788 PushV
	func_2787(var_536_string); // 0x789 NEW_2
	SetPhoto(var_536_string); // 0x78b ObjFunc
	var_537_string = ""; // 0x78d PushV
	func_2789(var_537_string); // 0x78e NEW_2
	SetPhoto2(var_537_string); // 0x790 ObjFunc
	var_538_int = 0; // 0x792 PushV
	func_3231(var_538_int); // 0x793 NEW_2
	SetPlayerName(var_538_int); // 0x795 ObjFunc
	var_528_int = -1; // 0x797 MovI
	IsOverrideActive(var_527_bool); // 0x798 Func
	var_539_bool = var_527_bool; // 0x79a Push
	if(var_539_bool == 0) goto Label_1950; // 0x79b JumpB
	var_519_int = -2; // 0x79c MovI
	return 8; // 0x79d Return
	
Label_1950:
	DoDialog(var_526_object); // 0x79e Func
	var_540_bool = 0; var_541_object = Obj(); // 0x7a0 PushV
	var_542_object = Obj(); // 0x7a1 PushV
	func_2674(var_542_object); // 0x7a2 NEW_2
	var_541_object = var_542_object; // 0x7a3 Mov
	func_2483(var_540_bool, var_541_object); // 0x7a5 NEW_2
	var_543_object = Obj(); var_544_object = Obj(); // 0x7a7 PushV
	var_543_object = var_520_object; // 0x7a8 Mov
	var_544_object = var_526_object; // 0x7a9 Mov
	TaskCall(9); // 0x7aa TaskCall
	func_1986(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object); // 0x7ab NEW_2
	TaskReturn(); // 0x7ac TaskReturn
	IsDialogEnd(var_529_bool); // 0x7ae ObjFunc
	
Label_1968:
	var_573_bool = var_529_bool == 0; // 0x7b0 Not
	if(var_573_bool == 0) goto Label_1975; // 0x7b1 JumpB
	sync(); // 0x7b2 Func
	IsDialogEnd(var_529_bool); // 0x7b4 ObjFunc
	goto Label_1968; // 0x7b6 Jump
	
Label_1975:
	var_574_object = Obj(); // 0x7b7 PushV
	var_574_object = var_520_object; // 0x7b8 Mov
	func_2465(); // 0x7b9 NEW_2
	StopDialog(var_526_object); // 0x7bb Func
	GetReturnValue(var_528_int); // 0x7bd ObjFunc
	var_519_int = var_528_int; // 0x7bf Mov
	return 8; // 0x7c0 Return
}


func_2674(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xa72 PushV
	self(var_129_object); // 0xa73 Func
	var_127_object = var_129_object; // 0xa75 Mov
	return 2; // 0xa76 Return
}


func_2934(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0xb77 PushV
	var_225_string = "k3q03"; // 0xb78 MovS
	func_2690(var_224_int, var_225_string); // 0xb79 NEW_2
	var_228_int = 1; // 0xb7b PushI
	var_229_bool = var_224_int == var_228_int; // 0xb7c Eq
	if(var_229_bool == 0) goto Label_2944; // 0xb7d JumpB
	var_222_bool = 1; // 0xb7e MovB
	return 0; // 0xb7f Return
	
Label_2944:
	var_222_bool = 0; // 0xb80 MovB
	return 0; // 0xb81 Return
}


func_2168()
{
	var_577_float = 0; var_578_float = 0; // 0x878 PushV
	var_579_int = 8; // 0x879 PushI
	var_580_int = 16; // 0x87a PushI
	rand(var_578_float, var_579_int, var_580_int); // 0x87b Func
	var_581_int = 10; // 0x87d PushI
	SetTimer(var_581_int, var_578_float); // 0x87e Func
	return 2; // 0x880 Return
}


func_2680(var_91_cvector, var_92_cvector)
{
	var_94_float = 0; var_95_float = 0; // 0xa78 PushV
	var_96_int = var_92_cvector | var_92_cvector; // 0xa79 Or
	var_95_float = sqrt(var_96_int); // 0xa7a Sqrt2
	var_97_float = 0.0; // 0xa7b PushF
	var_98_bool = var_95_float < var_97_float; // 0xa7c LT
	if(var_98_bool == 0) goto Label_2688; // 0xa7d JumpB
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0xa7e MovV
	return 2; // 0xa7f Return
	
Label_2688:
	var_91_cvector = var_92_cvector / var_92_cvector; // 0xa80 Div2
	return 2; // 0xa81 Return
}


func_637(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object; // 0x27e TMov
	var_1_object = var_315_object; // 0x27f TMov
	var_3_string = 0; // 0x280 TMovB
	var_321_int = 1; // 0x281 PushI
	if(var_321_int == 0) goto Label_714; // 0x282 JumpB
	var_322_string = ""; // 0x283 PushV
	var_322_string = "Confusion"; // 0x284 MovS
	func_744(var_316_object, var_322_string); // 0x285 NEW_2
	var_330_int = 525847; // 0x287 PushI
	SetMessage(var_330_int); // 0x288 TObjFunc
	ClearReplies(); // 0x28a TObjFunc
	var_331_bool = 0; // 0x28c PushV
	var_331_bool = 0; // 0x28d MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x28e PushV
	var_333_object = var_1_object; // 0x28f MovT
	func_2946(var_333_object); // 0x290 NEW_2
	if(var_332_bool == 0) goto Label_666; // 0x292 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x293 PushV
	var_339_object = var_1_object; // 0x294 MovT
	func_2958(var_338_bool, var_339_object); // 0x295 NEW_2
	var_350_bool = var_338_bool == 0; // 0x297 Not
	if(var_350_bool == 0) goto Label_666; // 0x298 JumpB
	var_331_bool = 1; // 0x299 MovB
	
Label_666:
	if(var_331_bool == 0) goto Label_672; // 0x29a JumpB
	var_351_int = 525848; // 0x29b PushI
	var_352_int = 27148; // 0x29c PushI
	var_353_int = 27147; // 0x29d PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x29e TObjFunc
	
Label_672:
	var_354_bool = 0; // 0x2a0 PushV
	var_354_bool = 0; // 0x2a1 MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x2a2 PushV
	var_356_object = var_1_object; // 0x2a3 MovT
	func_2946(var_356_object); // 0x2a4 NEW_2
	if(var_355_bool == 0) goto Label_685; // 0x2a6 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x2a7 PushV
	var_358_object = var_1_object; // 0x2a8 MovT
	func_2958(var_357_bool, var_358_object); // 0x2a9 NEW_2
	if(var_357_bool == 0) goto Label_685; // 0x2ab JumpB
	var_354_bool = 1; // 0x2ac MovB
	
Label_685:
	if(var_354_bool == 0) goto Label_691; // 0x2ad JumpB
	var_359_int = 525851; // 0x2ae PushI
	var_360_int = 27151; // 0x2af PushI
	var_361_int = 27150; // 0x2b0 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x2b1 TObjFunc
	
Label_691:
	var_362_bool = 0; var_363_object = Obj(); // 0x2b3 PushV
	var_363_object = var_1_object; // 0x2b4 MovT
	func_2968(var_363_object); // 0x2b5 NEW_2
	if(var_362_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_368_int = 525875; // 0x2b8 PushI
	var_369_int = 27175; // 0x2b9 PushI
	var_370_int = 27174; // 0x2ba PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x2bb TObjFunc
	
Label_701:
	var_371_int = 525862; // 0x2bd PushI
	var_372_int = -1; // 0x2be PushI
	var_373_int = 27161; // 0x2bf PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x2c0 TObjFunc
	var_374_int = 529118; // 0x2c2 PushI
	var_375_int = -1; // 0x2c3 PushI
	var_376_int = 30563; // 0x2c4 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x2c5 TObjFunc
	goto Label_714; // 0x2c7 Jump
	
Label_714:
	var_377_bool = 0; // 0x2ca PushV
	func_2791(var_377_bool); // 0x2cb NEW_2
	if(var_377_bool == 0) goto Label_729; // 0x2cd JumpB
	
Label_718:
	lshWaitForAnimEnd(); // 0x2ce Func
	var_378_string = var_3_string; // 0x2d0 PushT
	if(var_378_string == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_728; // 0x2d2 Jump
	
Label_728:
	goto Label_743; // 0x2d8 Jump
	
Label_743:
	return 0; // 0x2e7 Return
	
Label_723:
	var_379_string = ""; // 0x2d3 PushV
	var_379_string = var_2_object; // 0x2d4 MovT
	func_2621(var_379_string); // 0x2d5 NEW_2
	goto Label_718; // 0x2d7 Jump
	
Label_729:
	var_380_string = "all"; // 0x2d9 PushS
	var_381_string = "idle"; // 0x2da PushS
	PlayAnimation(var_380_string, var_381_string); // 0x2db Func
	
Label_733:
	WaitForAnimEnd(); // 0x2dd Func
	var_382_string = var_3_string; // 0x2df PushT
	if(var_382_string == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_743; // 0x2e1 Jump
	
Label_738:
	var_383_string = "all"; // 0x2e2 PushS
	var_384_string = "idle"; // 0x2e3 PushS
	PlayAnimation(var_383_string, var_384_string); // 0x2e4 Func
	goto Label_733; // 0x2e6 Jump
}


func_3198(var_85_object, var_86_string, var_87_float)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_bool = 0; // 0xc7e PushV
	GetMainOutdoorScene(var_95_object); // 0xc7f Func
	var_97_bool = var_95_object == 0; // 0xc81 NullEq
	if(var_97_bool == 0) goto Label_3207; // 0xc82 JumpB
	var_98_string = "Can't find main outdoor scene"; // 0xc83 PushS
	Trace(var_98_string); // 0xc84 Func
	return 8; // 0xc86 Return
	
Label_3207:
	GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector); // 0xc87 ObjFunc
	var_99_bool = var_96_bool == 0; // 0xc89 Not
	if(var_99_bool == 0) goto Label_3217; // 0xc8a JumpB
	var_100_string = "Warning: outdoor scene locator "; // 0xc8b PushS
	var_101_int = var_100_string + var_86_string; // 0xc8c Add
	var_102_string = " doesnt exist"; // 0xc8d PushS
	var_103_int = var_101_int + var_102_string; // 0xc8e Add
	Trace(var_103_int); // 0xc8f Func
	
Label_3217:
	GetMap(var_85_object); // 0xc91 ObjFunc
	var_104_bool = var_85_object == 0; // 0xc93 NullEq
	if(var_104_bool == 0) goto Label_3225; // 0xc94 JumpB
	var_105_string = "Can't find map"; // 0xc95 PushS
	Trace(var_105_string); // 0xc96 Func
	return 8; // 0xc98 Return
	
Label_3225:
	var_106_float = GetByIndex(var_93_cvector, 0); // 0xc99 PushE
	var_107_float = GetByIndex(var_93_cvector, 2); // 0xc9a PushE
	SetMapParams(var_106_float, var_107_float, var_87_float); // 0xc9b ObjFunc
	return 8; // 0xc9d Return
}


func_2177()
{
	var_576_int = 10; // 0x881 PushI
	KillTimer(var_576_int); // 0x882 Func
	return 0; // 0x884 Return
}


func_2690(var_224_int, var_225_string)
{
	var_226_int = 0; var_227_int = 0; // 0xa82 PushV
	GetVariable(var_225_string, var_227_int); // 0xa83 Func
	var_224_int = var_227_int; // 0xa85 Mov
	return 2; // 0xa86 Return
}


func_2946(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0xb83 PushV
	var_335_string = "k5q01"; // 0xb84 MovS
	func_2690(var_334_int, var_335_string); // 0xb85 NEW_2
	var_336_int = 1; // 0xb87 PushI
	var_337_bool = var_334_int == var_336_int; // 0xb88 Eq
	if(var_337_bool == 0) goto Label_2956; // 0xb89 JumpB
	var_332_bool = 1; // 0xb8a MovB
	return 0; // 0xb8b Return
	
Label_2956:
	var_332_bool = 0; // 0xb8c MovB
	return 0; // 0xb8d Return
}


func_2695(var_82_int, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0xa87 PushV
	CreateIntVector(var_85_object); // 0xa88 Func
	add(var_82_int); // 0xa8a ObjFunc
	add(var_83_int); // 0xa8c ObjFunc
	var_86_int = 3; // 0xa8e PushI
	SendWorldWndMessage(var_86_int, var_85_object); // 0xa8f Func
	return 2; // 0xa91 Return
}


func_2958(var_338_bool, var_339_object)
{
	var_340_bool = 0; var_341_object = Obj(); // 0xb8f PushV
	var_341_object = var_339_object; // 0xb90 Mov
	func_3004(var_341_object); // 0xb91 NEW_2
	if(var_340_bool == 0) goto Label_2966; // 0xb93 JumpB
	var_338_bool = 1; // 0xb94 MovB
	return 0; // 0xb95 Return
	
Label_2966:
	var_338_bool = 0; // 0xb96 MovB
	return 0; // 0xb97 Return
}


func_2707(var_72_object, var_73_int)
{
	var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; var_79_bool = 0; // 0xa93 PushV
	GetItemID(var_77_int); // 0xa94 ObjFunc
	var_80_string = "Category"; // 0xa96 PushS
	GetInvItemProperty(var_78_int, var_77_int, var_80_string); // 0xa97 Func
	AddItem(var_79_bool, var_72_object, var_78_int, var_73_int); // 0xa99 ObjFunc
	var_81_bool = var_79_bool == 0; // 0xa9b Not
	if(var_81_bool == 0) goto Label_2720; // 0xa9c JumpB
	DropItems(var_72_object, var_73_int); // 0xa9d ObjFunc
	goto Label_2725; // 0xa9f Jump
	
Label_2725:
	return 6; // 0xaa5 Return
	
Label_2720:
	var_82_int = 0; var_83_int = 0; // 0xaa0 PushV
	var_82_int = var_77_int; // 0xaa1 Mov
	var_83_int = var_73_int; // 0xaa2 Mov
	func_2695(var_82_int, var_83_int); // 0xaa3 NEW_2
}


func_2968(var_362_bool)
{
	var_364_int = 0; var_365_string = ""; // 0xb99 PushV
	var_365_string = "k5q01"; // 0xb9a MovS
	func_2690(var_364_int, var_365_string); // 0xb9b NEW_2
	var_366_int = 3; // 0xb9d PushI
	var_367_bool = var_364_int == var_366_int; // 0xb9e Eq
	if(var_367_bool == 0) goto Label_2978; // 0xb9f JumpB
	var_362_bool = 1; // 0xba0 MovB
	return 0; // 0xba1 Return
	
Label_2978:
	var_362_bool = 0; // 0xba2 MovB
	return 0; // 0xba3 Return
}


func_3231(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0xc9f PushV
	var_119_string = "branch"; // 0xca0 PushS
	GetVariable(var_119_string, var_118_int); // 0xca1 Func
	var_120_int = 0; // 0xca3 PushI
	var_121_bool = var_118_int == var_120_int; // 0xca4 Eq
	if(var_121_bool == 0) goto Label_3241; // 0xca5 JumpB
	var_116_int = 1; // 0xca6 MovI
	return 2; // 0xca7 Return
	
Label_3241:
	var_122_int = 1; // 0xca9 PushI
	var_123_bool = var_118_int == var_122_int; // 0xcaa Eq
	if(var_123_bool == 0) goto Label_3246; // 0xcab JumpB
	var_116_int = 2; // 0xcac MovI
	return 2; // 0xcad Return
	
Label_3246:
	var_116_int = 3; // 0xcae MovI
	return 2; // 0xcaf Return
}


func_2465()
{
	var_282_bool = 0; var_283_bool = 0; // 0x9a1 PushV
	var_284_bool = 1; // 0x9a2 PushB
	CameraSwitchToNormal(var_284_bool); // 0x9a3 Func
	var_285_bool = 0; // 0x9a5 PushV
	func_2791(var_285_bool); // 0x9a6 NEW_2
	if(var_285_bool == 0) goto Label_2474; // 0x9a8 JumpB
	goto Label_2482; // 0x9a9 Jump
	
Label_2482:
	return 2; // 0x9b2 Return
	
Label_2474:
	var_286_string = "head"; // 0x9aa PushS
	HasAnimationTrack(var_283_bool, var_286_string); // 0x9ab Func
	var_287_bool = var_283_bool; // 0x9ad Push
	if(var_287_bool == 0) goto Label_2482; // 0x9ae JumpB
	var_288_string = "head"; // 0x9af PushS
	UnlookAsync(var_288_string); // 0x9b0 Func
}


func_164(var_2_object, var_230_string)
{
	var_231_bool = 0; // 0xa5 PushV
	func_2791(var_231_bool); // 0xa6 NEW_2
	var_232_bool = var_231_bool == 0; // 0xa8 Not
	if(var_232_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_233_bool = var_230_string == var_2_object; // 0xab Eq
	if(var_233_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_234_string = ""; var_235_bool = 0; // 0xae PushV
	var_234_string = var_230_string; // 0xaf Mov
	var_236_string = ""; // 0xb0 PushS
	var_237_bool = var_230_string == var_236_string; // 0xb1 Eq
	if(var_237_bool == 0) goto Label_181; // 0xb2 JumpB
	var_235_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_2637(var_234_string, var_235_bool); // 0xb6 NEW_2
	var_2_object = var_230_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_235_bool = 1; // 0xb5 MovB
}


func_2980(var_436_bool)
{
	var_438_int = 0; var_439_string = ""; // 0xba5 PushV
	var_439_string = "k11q01"; // 0xba6 MovS
	func_2690(var_438_int, var_439_string); // 0xba7 NEW_2
	var_440_int = 9; // 0xba9 PushI
	var_441_bool = var_438_int == var_440_int; // 0xbaa Eq
	if(var_441_bool == 0) goto Label_2990; // 0xbab JumpB
	var_436_bool = 1; // 0xbac MovB
	return 0; // 0xbad Return
	
Label_2990:
	var_436_bool = 0; // 0xbae MovB
	return 0; // 0xbaf Return
}


func_2726(var_66_object, var_67_string, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xaa6 PushV
	CreateInvItem(var_70_object); // 0xaa7 Func
	SetItemName(var_67_string); // 0xaa9 ObjFunc
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; // 0xaab PushV
	var_71_object = var_66_object; // 0xaac Mov
	var_72_object = var_70_object; // 0xaad Mov
	var_73_int = var_68_int; // 0xaae Mov
	func_2707(var_72_object, var_73_int); // 0xaaf NEW_2
	return 2; // 0xab1 Return
}


func_3248(var_44_object)
{
	var_45_bool = 0; var_46_int = 0; // 0xcb1 PushV
	var_46_int = 3; // 0xcb2 MovI
	func_2753(var_45_bool, var_46_int); // 0xcb3 NEW_2
	if(var_45_bool == 0) goto Label_3261; // 0xcb5 JumpB
	var_53_int = 0; var_54_object = Obj(); // 0xcb6 PushV
	var_54_object = var_44_object; // 0xcb7 Mov
	TaskCall(0); // 0xcb8 TaskCall
	func_0(var_55_object, var_53_int, var_54_object); // 0xcb9 NEW_2
	TaskReturn(); // 0xcba TaskReturn
	return 0; // 0xcbc Return
	
Label_3261:
	var_289_bool = 0; var_290_int = 0; // 0xcbd PushV
	var_290_int = 5; // 0xcbe MovI
	func_2753(var_289_bool, var_290_int); // 0xcbf NEW_2
	if(var_289_bool == 0) goto Label_3273; // 0xcc1 JumpB
	var_291_int = 0; var_292_object = Obj(); // 0xcc2 PushV
	var_292_object = var_44_object; // 0xcc3 Mov
	TaskCall(2); // 0xcc4 TaskCall
	func_556(var_293_object, var_291_int, var_292_object); // 0xcc5 NEW_2
	TaskReturn(); // 0xcc6 TaskReturn
	return 0; // 0xcc8 Return
	
Label_3273:
	var_387_bool = 0; var_388_int = 0; // 0xcc9 PushV
	var_388_int = 11; // 0xcca MovI
	func_2753(var_387_bool, var_388_int); // 0xccb NEW_2
	if(var_387_bool == 0) goto Label_3285; // 0xccd JumpB
	var_389_int = 0; var_390_object = Obj(); // 0xcce PushV
	var_390_object = var_44_object; // 0xccf Mov
	TaskCall(4); // 0xcd0 TaskCall
	func_1122(var_391_object, var_389_int, var_390_object); // 0xcd1 NEW_2
	TaskReturn(); // 0xcd2 TaskReturn
	return 0; // 0xcd4 Return
	
Label_3285:
	var_458_bool = 0; var_459_int = 0; // 0xcd5 PushV
	var_459_int = 12; // 0xcd6 MovI
	func_2753(var_458_bool, var_459_int); // 0xcd7 NEW_2
	if(var_458_bool == 0) goto Label_3297; // 0xcd9 JumpB
	var_460_int = 0; var_461_object = Obj(); // 0xcda PushV
	var_461_object = var_44_object; // 0xcdb Mov
	TaskCall(6); // 0xcdc TaskCall
	func_1482(var_462_object, var_460_int, var_461_object); // 0xcdd NEW_2
	TaskReturn(); // 0xcde TaskReturn
	return 0; // 0xce0 Return
	
Label_3297:
	var_519_int = 0; var_520_object = Obj(); // 0xce1 PushV
	var_520_object = var_44_object; // 0xce2 Mov
	TaskCall(8); // 0xce3 TaskCall
	func_1905(var_521_object, var_519_int, var_520_object); // 0xce4 NEW_2
	TaskReturn(); // 0xce5 TaskReturn
	return 0; // 0xce7 Return
}


func_2992(var_430_bool)
{
	var_432_int = 0; var_433_string = ""; // 0xbb1 PushV
	var_433_string = "ook11Rubin1"; // 0xbb2 MovS
	func_2690(var_432_int, var_433_string); // 0xbb3 NEW_2
	var_434_int = 0; // 0xbb5 PushI
	var_435_bool = var_432_int == var_434_int; // 0xbb6 Eq
	if(var_435_bool == 0) goto Label_3002; // 0xbb7 JumpB
	var_430_bool = 1; // 0xbb8 MovB
	return 0; // 0xbb9 Return
	
Label_3002:
	var_430_bool = 0; // 0xbba MovB
	return 0; // 0xbbb Return
}


func_1203(var_0_object, var_1_object, var_2_object, var_3_string, var_413_object, var_414_object)
{
	var_0_object = var_414_object; // 0x4b4 TMov
	var_1_object = var_413_object; // 0x4b5 TMov
	var_3_string = 0; // 0x4b6 TMovB
	var_419_int = 1; // 0x4b7 PushI
	if(var_419_int == 0) goto Label_1245; // 0x4b8 JumpB
	var_420_string = ""; // 0x4b9 PushV
	var_420_string = "Neutral"; // 0x4ba MovS
	func_1275(var_414_object, var_420_string); // 0x4bb NEW_2
	var_428_int = 527693; // 0x4bd PushI
	SetMessage(var_428_int); // 0x4be TObjFunc
	ClearReplies(); // 0x4c0 TObjFunc
	var_429_bool = 0; // 0x4c2 PushV
	var_429_bool = 0; // 0x4c3 MovB
	var_430_bool = 0; var_431_object = Obj(); // 0x4c4 PushV
	var_431_object = var_1_object; // 0x4c5 MovT
	func_2992(var_431_object); // 0x4c6 NEW_2
	if(var_430_bool == 0) goto Label_1231; // 0x4c8 JumpB
	var_436_bool = 0; var_437_object = Obj(); // 0x4c9 PushV
	var_437_object = var_1_object; // 0x4ca MovT
	func_2980(var_437_object); // 0x4cb NEW_2
	if(var_436_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_429_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_429_bool == 0) goto Label_1237; // 0x4cf JumpB
	var_442_int = 527695; // 0x4d0 PushI
	var_443_int = 29046; // 0x4d1 PushI
	var_444_int = 29045; // 0x4d2 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x4d3 TObjFunc
	
Label_1237:
	var_445_int = 527694; // 0x4d5 PushI
	var_446_int = -1; // 0x4d6 PushI
	var_447_int = 29044; // 0x4d7 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x4d8 TObjFunc
	goto Label_1245; // 0x4da Jump
	
Label_1245:
	var_448_bool = 0; // 0x4dd PushV
	func_2791(var_448_bool); // 0x4de NEW_2
	if(var_448_bool == 0) goto Label_1260; // 0x4e0 JumpB
	
Label_1249:
	lshWaitForAnimEnd(); // 0x4e1 Func
	var_449_string = var_3_string; // 0x4e3 PushT
	if(var_449_string == 0) goto Label_1254; // 0x4e4 JumpB
	goto Label_1259; // 0x4e5 Jump
	
Label_1259:
	goto Label_1274; // 0x4eb Jump
	
Label_1274:
	return 0; // 0x4fa Return
	
Label_1254:
	var_450_string = ""; // 0x4e6 PushV
	var_450_string = var_2_object; // 0x4e7 MovT
	func_2621(var_450_string); // 0x4e8 NEW_2
	goto Label_1249; // 0x4ea Jump
	
Label_1260:
	var_451_string = "all"; // 0x4ec PushS
	var_452_string = "idle"; // 0x4ed PushS
	PlayAnimation(var_451_string, var_452_string); // 0x4ee Func
	
Label_1264:
	WaitForAnimEnd(); // 0x4f0 Func
	var_453_string = var_3_string; // 0x4f2 PushT
	if(var_453_string == 0) goto Label_1269; // 0x4f3 JumpB
	goto Label_1274; // 0x4f4 Jump
	
Label_1269:
	var_454_string = "all"; // 0x4f5 PushS
	var_455_string = "idle"; // 0x4f6 PushS
	PlayAnimation(var_454_string, var_455_string); // 0x4f7 Func
	goto Label_1264; // 0x4f9 Jump
}


func_2739(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0xab3 PushV
	GetGameTime(var_51_float); // 0xab4 Func
	var_49_float = var_51_float; // 0xab6 Mov
	return 2; // 0xab7 Return
}


func_2483(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0x9b3 PushV
	var_134_string = "voice_common"; // 0x9b4 PushS
	GetVariable(var_134_string, var_132_int); // 0x9b5 Func
	var_135_int = var_132_int; // 0x9b7 Push
	if(var_135_int == 0) goto Label_2521; // 0x9b8 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x9b9 PushV
	var_137_object = var_126_object; // 0x9ba Mov
	func_2541(var_137_object); // 0x9bb NEW_2
	var_166_bool = var_136_bool == 0; // 0x9bd Not
	if(var_166_bool == 0) goto Label_2503; // 0x9be JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x9bf PushV
	var_168_object = var_126_object; // 0x9c0 Mov
	func_2578(var_168_object); // 0x9c1 NEW_2
	var_197_bool = var_167_bool == 0; // 0x9c3 Not
	if(var_197_bool == 0) goto Label_2503; // 0x9c4 JumpB
	var_125_bool = 0; // 0x9c5 MovB
	return 4; // 0x9c6 Return
	
Label_2503:
	var_198_int = 2; // 0x9c7 PushI
	irand(var_133_int, var_198_int); // 0x9c8 Func
	var_199_int = var_133_int; // 0x9ca Push
	if(var_199_int == 0) goto Label_2516; // 0x9cb JumpB
	var_200_string = "voice_common"; // 0x9cc PushS
	var_201_int = 1; // 0x9cd PushI
	var_202_int = var_132_int + var_201_int; // 0x9ce Add
	var_203_int = 3; // 0x9cf PushI
	var_204_int = var_202_int / var_203_int; // 0x9d0 Mod
	SetVariable(var_200_string, var_204_int); // 0x9d1 Func
	goto Label_2520; // 0x9d3 Jump
	
Label_2520:
	goto Label_2539; // 0x9d8 Jump
	
Label_2539:
	var_125_bool = 1; // 0x9eb MovB
	return 4; // 0x9ec Return
	
Label_2516:
	var_205_string = "voice_common"; // 0x9d4 PushS
	var_206_int = 0; // 0x9d5 PushI
	SetVariable(var_205_string, var_206_int); // 0x9d6 Func
	
Label_2521:
	var_207_bool = 0; var_208_object = Obj(); // 0x9d9 PushV
	var_208_object = var_126_object; // 0x9da Mov
	func_2578(var_208_object); // 0x9db NEW_2
	var_209_bool = var_207_bool == 0; // 0x9dd Not
	if(var_209_bool == 0) goto Label_2535; // 0x9de JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x9df PushV
	var_211_object = var_126_object; // 0x9e0 Mov
	func_2541(var_211_object); // 0x9e1 NEW_2
	var_212_bool = var_210_bool == 0; // 0x9e3 Not
	if(var_212_bool == 0) goto Label_2535; // 0x9e4 JumpB
	var_125_bool = 0; // 0x9e5 MovB
	return 4; // 0x9e6 Return
	
Label_2535:
	var_213_string = "voice_common"; // 0x9e7 PushS
	var_214_int = 1; // 0x9e8 PushI
	SetVariable(var_213_string, var_214_int); // 0x9e9 Func
}


func_2744(var_47_int)
{
	var_48_float = 0; var_49_float = 0; // 0xab8 PushV
	GetGameTime(var_49_float); // 0xab9 Func
	var_50_int = 1; // 0xabb PushI
	var_51_int = 0; // 0xabc PushV
	var_52_int = 24; // 0xabd PushI
	var_51_int = var_49_float / var_49_float; // 0xabe Div2
	var_47_int = var_50_int + var_51_int; // 0xabf Add2
	return 2; // 0xac0 Return
}


func_3004(var_340_bool)
{
	var_342_int = 0; var_343_int = 0; // 0xbbc PushV
	var_344_string = "tvirin"; // 0xbbd PushS
	GetItemCountOfType(var_343_int, var_344_string); // 0xbbe ObjFunc
	var_345_int = 3; // 0xbc0 PushI
	var_346_bool = var_343_int < var_345_int; // 0xbc1 LT
	if(var_346_bool == 0) goto Label_3013; // 0xbc2 JumpB
	var_340_bool = 0; // 0xbc3 MovB
	return 2; // 0xbc4 Return
	
Label_3013:
	var_347_string = "fresh_meat"; // 0xbc5 PushS
	GetItemCountOfType(var_343_int, var_347_string); // 0xbc6 ObjFunc
	var_348_int = 3; // 0xbc8 PushI
	var_349_bool = var_343_int < var_348_int; // 0xbc9 LT
	if(var_349_bool == 0) goto Label_3021; // 0xbca JumpB
	var_340_bool = 0; // 0xbcb MovB
	return 2; // 0xbcc Return
	
Label_3021:
	var_340_bool = 1; // 0xbcd MovB
	return 2; // 0xbce Return
}


func_2753(var_45_bool, var_46_int)
{
	var_47_int = 0; // 0xac2 PushV
	func_2744(var_47_int); // 0xac3 NEW_2
	var_45_bool = var_47_int == var_46_int; // 0xac5 Eq2
	return 0; // 0xac6 Return
}


func_1986(var_0_object, var_1_object, var_2_object, var_3_string, var_543_object, var_544_object)
{
	var_0_object = var_544_object; // 0x7c3 TMov
	var_1_object = var_543_object; // 0x7c4 TMov
	var_3_string = 0; // 0x7c5 TMovB
	var_549_int = 1; // 0x7c6 PushI
	if(var_549_int == 0) goto Label_2014; // 0x7c7 JumpB
	var_550_string = ""; // 0x7c8 PushV
	var_550_string = "Neutral"; // 0x7c9 MovS
	func_2044(var_544_object, var_550_string); // 0x7ca NEW_2
	var_558_int = 540545; // 0x7cc PushI
	SetMessage(var_558_int); // 0x7cd TObjFunc
	ClearReplies(); // 0x7cf TObjFunc
	var_559_int = 540546; // 0x7d1 PushI
	var_560_int = -1; // 0x7d2 PushI
	var_561_int = 42555; // 0x7d3 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x7d4 TObjFunc
	var_562_int = 540798; // 0x7d6 PushI
	var_563_int = -1; // 0x7d7 PushI
	var_564_int = 42847; // 0x7d8 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x7d9 TObjFunc
	goto Label_2014; // 0x7db Jump
	
Label_2014:
	var_565_bool = 0; // 0x7de PushV
	func_2791(var_565_bool); // 0x7df NEW_2
	if(var_565_bool == 0) goto Label_2029; // 0x7e1 JumpB
	
Label_2018:
	lshWaitForAnimEnd(); // 0x7e2 Func
	var_566_string = var_3_string; // 0x7e4 PushT
	if(var_566_string == 0) goto Label_2023; // 0x7e5 JumpB
	goto Label_2028; // 0x7e6 Jump
	
Label_2028:
	goto Label_2043; // 0x7ec Jump
	
Label_2043:
	return 0; // 0x7fb Return
	
Label_2023:
	var_567_string = ""; // 0x7e7 PushV
	var_567_string = var_2_object; // 0x7e8 MovT
	func_2621(var_567_string); // 0x7e9 NEW_2
	goto Label_2018; // 0x7eb Jump
	
Label_2029:
	var_568_string = "all"; // 0x7ed PushS
	var_569_string = "idle"; // 0x7ee PushS
	PlayAnimation(var_568_string, var_569_string); // 0x7ef Func
	
Label_2033:
	WaitForAnimEnd(); // 0x7f1 Func
	var_570_string = var_3_string; // 0x7f3 PushT
	if(var_570_string == 0) goto Label_2038; // 0x7f4 JumpB
	goto Label_2043; // 0x7f5 Jump
	
Label_2038:
	var_571_string = "all"; // 0x7f6 PushS
	var_572_string = "idle"; // 0x7f7 PushS
	PlayAnimation(var_571_string, var_572_string); // 0x7f8 Func
	goto Label_2033; // 0x7fa Jump
}


func_2759(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0xac7 PushV
	var_53_string = "idle"; // 0xac8 MovS
	var_54_int = var_51_int; // 0xac9 Push
	if(var_54_int == 0) goto Label_2764; // 0xaca JumpB
	var_53_string = var_53_string + var_51_int; // 0xacb Add2
	
Label_2764:
	var_50_string = var_53_string; // 0xacc Mov
	return 2; // 0xacd Return
}


func_1482(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0; // 0x5ca PushV
	var_0_object = var_461_object; // 0x5cb TMov
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0; // 0x5cc PushV
	var_472_object = var_461_object; // 0x5cd Mov
	var_473_float = 70.0; // 0x5ce MovF
	func_2396(var_472_object, var_473_float); // 0x5cf NEW_2
	var_474_bool = var_471_bool == 0; // 0x5d1 Not
	if(var_474_bool == 0) goto Label_1493; // 0x5d2 JumpB
	var_460_int = -2; // 0x5d3 MovI
	return 8; // 0x5d4 Return
	
Label_1493:
	CreateDialog(var_467_object); // 0x5d5 Func
	var_475_int = 0; // 0x5d7 PushV
	func_2785(var_475_int); // 0x5d8 NEW_2
	SetNPCName(var_475_int); // 0x5da ObjFunc
	var_476_int = 0; // 0x5dc PushV
	func_2783(var_476_int); // 0x5dd NEW_2
	SetNPCDescription(var_476_int); // 0x5df ObjFunc
	var_477_string = ""; // 0x5e1 PushV
	func_2787(var_477_string); // 0x5e2 NEW_2
	SetPhoto(var_477_string); // 0x5e4 ObjFunc
	var_478_string = ""; // 0x5e6 PushV
	func_2789(var_478_string); // 0x5e7 NEW_2
	SetPhoto2(var_478_string); // 0x5e9 ObjFunc
	var_479_int = 0; // 0x5eb PushV
	func_3231(var_479_int); // 0x5ec NEW_2
	SetPlayerName(var_479_int); // 0x5ee ObjFunc
	var_469_int = -1; // 0x5f0 MovI
	IsOverrideActive(var_468_bool); // 0x5f1 Func
	var_480_bool = var_468_bool; // 0x5f3 Push
	if(var_480_bool == 0) goto Label_1527; // 0x5f4 JumpB
	var_460_int = -2; // 0x5f5 MovI
	return 8; // 0x5f6 Return
	
Label_1527:
	DoDialog(var_467_object); // 0x5f7 Func
	var_481_bool = 0; var_482_object = Obj(); // 0x5f9 PushV
	var_483_object = Obj(); // 0x5fa PushV
	func_2674(var_483_object); // 0x5fb NEW_2
	var_482_object = var_483_object; // 0x5fc Mov
	func_2483(var_481_bool, var_482_object); // 0x5fe NEW_2
	var_484_object = Obj(); var_485_object = Obj(); // 0x600 PushV
	var_484_object = var_461_object; // 0x601 Mov
	var_485_object = var_467_object; // 0x602 Mov
	TaskCall(7); // 0x603 TaskCall
	func_1563(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object); // 0x604 NEW_2
	TaskReturn(); // 0x605 TaskReturn
	IsDialogEnd(var_470_bool); // 0x607 ObjFunc
	
Label_1545:
	var_517_bool = var_470_bool == 0; // 0x609 Not
	if(var_517_bool == 0) goto Label_1552; // 0x60a JumpB
	sync(); // 0x60b Func
	IsDialogEnd(var_470_bool); // 0x60d ObjFunc
	goto Label_1545; // 0x60f Jump
	
Label_1552:
	var_518_object = Obj(); // 0x610 PushV
	var_518_object = var_461_object; // 0x611 Mov
	func_2465(); // 0x612 NEW_2
	StopDialog(var_467_object); // 0x614 Func
	GetReturnValue(var_469_int); // 0x616 ObjFunc
	var_460_int = var_469_int; // 0x618 Mov
	return 8; // 0x619 Return
}


func_2766(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0xace PushV
	var_47_int = 0; // 0xacf MovI
	
Label_2768:
	var_49_string = "all"; // 0xad0 PushS
	var_50_string = ""; var_51_int = 0; // 0xad1 PushV
	var_51_int = var_47_int; // 0xad2 Mov
	func_2759(var_50_string, var_51_int); // 0xad3 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0xad5 Func
	var_55_bool = var_48_bool == 0; // 0xad7 Not
	if(var_55_bool == 0) goto Label_2778; // 0xad8 JumpB
	goto Label_2781; // 0xad9 Jump
	
Label_2781:
	var_44_int = var_47_int; // 0xadd Mov
	return 4; // 0xade Return
	
Label_2778:
	var_56_int = 1; // 0xada PushI
	var_47_int = var_47_int + var_56_int; // 0xadb Add2
	goto Label_2768; // 0xadc Jump
}


func_3023()
{
	var_112_object = Obj(); var_113_object = Obj(); // 0xbcf PushV
	var_114_int = 498; // 0xbd0 PushI
	var_115_int = 1; // 0xbd1 PushI
	var_116_int = 528065; // 0xbd2 PushI
	CreateDiaryEntry(var_113_object, var_114_int, var_115_int, var_116_int); // 0xbd3 Func
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0; // 0xbd5 PushV
	var_118_object = var_113_object; // 0xbd6 Mov
	var_119_int = 480; // 0xbd7 MovI
	func_3153(var_117_bool, var_118_object, var_119_int); // 0xbd8 NEW_2
	return 2; // 0xbda Return
}


func_3036()
{
	var_102_object = Obj(); var_103_object = Obj(); // 0xbdc PushV
	var_104_int = 497; // 0xbdd PushI
	var_105_int = 1; // 0xbde PushI
	var_106_int = 528064; // 0xbdf PushI
	CreateDiaryEntry(var_103_object, var_104_int, var_105_int, var_106_int); // 0xbe0 Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0xbe2 PushV
	var_108_object = var_103_object; // 0xbe3 Mov
	var_109_int = 480; // 0xbe4 MovI
	func_3153(var_107_bool, var_108_object, var_109_int); // 0xbe5 NEW_2
	return 2; // 0xbe7 Return
}


func_2783(var_113_int)
{
	var_113_int = 515551; // 0xadf MovI
	return 0; // 0xae0 Return
}


func_2785(var_112_int)
{
	var_112_int = 502876; // 0xae1 MovI
	return 0; // 0xae2 Return
}


func_2787(var_114_string)
{
	var_114_string = "ui/NPC_Rubin.png"; // 0xae3 MovS
	return 0; // 0xae4 Return
}


func_2789(var_115_string)
{
	var_115_string = "ui/NPC_Rubin_b.png"; // 0xae5 MovS
	return 0; // 0xae6 Return
}


func_2791(var_107_bool)
{
	var_107_bool = 1; // 0xae7 MovB
	return 0; // 0xae8 Return
}


func_744(var_2_object, var_322_string)
{
	var_323_bool = 0; // 0x2e9 PushV
	func_2791(var_323_bool); // 0x2ea NEW_2
	var_324_bool = var_323_bool == 0; // 0x2ec Not
	if(var_324_bool == 0) goto Label_751; // 0x2ed JumpB
	return 0; // 0x2ee Return
	
Label_751:
	var_325_bool = var_322_string == var_2_object; // 0x2ef Eq
	if(var_325_bool == 0) goto Label_754; // 0x2f0 JumpB
	return 0; // 0x2f1 Return
	
Label_754:
	var_326_string = ""; var_327_bool = 0; // 0x2f2 PushV
	var_326_string = var_322_string; // 0x2f3 Mov
	var_328_string = ""; // 0x2f4 PushS
	var_329_bool = var_322_string == var_328_string; // 0x2f5 Eq
	if(var_329_bool == 0) goto Label_761; // 0x2f6 JumpB
	var_327_bool = 0; // 0x2f7 MovB
	goto Label_762; // 0x2f8 Jump
	
Label_762:
	func_2637(var_326_string, var_327_bool); // 0x2fa NEW_2
	var_2_object = var_322_string; // 0x2fc TMov
	return 0; // 0x2fd Return
	
Label_761:
	var_327_bool = 1; // 0x2f9 MovB
}


func_2793()
{
	var_34_string = "k3q03"; // 0xaea PushS
	var_35_int = 1000; // 0xaeb PushI
	SetVariable(var_34_string, var_35_int); // 0xaec Func
	func_3101(); // 0xaef NEW_2
	return 0; // 0xaf1 Return
}


func_3049()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0xbe9 PushV
	var_94_int = 496; // 0xbea PushI
	var_95_int = 1; // 0xbeb PushI
	var_96_int = 528063; // 0xbec PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0xbed Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0xbef PushV
	var_98_object = var_93_object; // 0xbf0 Mov
	var_99_int = 480; // 0xbf1 MovI
	func_3153(var_97_bool, var_98_object, var_99_int); // 0xbf2 NEW_2
	return 2; // 0xbf4 Return
}


func_2541(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0x9ed PushV
	var_143_string = "c"; // 0x9ee MovS
	var_144_int = 0; // 0x9ef MovI
	
Label_2544:
	var_148_int = 1; // 0x9f0 PushI
	if(var_148_int == 0) goto Label_2557; // 0x9f1 JumpB
	var_149_int = 1; // 0x9f2 PushI
	var_150_int = var_144_int + var_149_int; // 0x9f3 Add
	var_151_int = var_143_string + var_150_int; // 0x9f4 Add
	HasProperty(var_151_int, var_145_bool); // 0x9f5 ObjFunc
	var_152_bool = var_145_bool == 0; // 0x9f7 Not
	if(var_152_bool == 0) goto Label_2554; // 0x9f8 JumpB
	goto Label_2557; // 0x9f9 Jump
	
Label_2557:
	var_153_bool = var_144_int == 0; // 0x9fd Not
	if(var_153_bool == 0) goto Label_2561; // 0x9fe JumpB
	var_136_bool = 0; // 0x9ff MovB
	return 10; // 0xa00 Return
	
Label_2561:
	var_146_int = 0; // 0xa01 MovI
	var_154_int = 1; // 0xa02 PushI
	var_155_bool = var_144_int > var_154_int; // 0xa03 GT
	if(var_155_bool == 0) goto Label_2567; // 0xa04 JumpB
	irand(var_146_int, var_144_int); // 0xa05 Func
	
Label_2567:
	var_156_int = 1; // 0xa07 PushI
	var_157_int = var_146_int + var_156_int; // 0xa08 Add
	var_158_int = var_143_string + var_157_int; // 0xa09 Add
	GetProperty(var_158_int, var_147_string); // 0xa0a ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xa0c PushV
	var_160_string = var_147_string; // 0xa0d Mov
	func_2652(var_159_bool, var_160_string); // 0xa0e NEW_2
	var_136_bool = var_159_bool; // 0xa0f Mov
	return 10; // 0xa11 Return
	
Label_2554:
	var_165_int = 1; // 0x9fa PushI
	var_144_int = var_144_int + var_165_int; // 0x9fb Add2
	goto Label_2544; // 0x9fc Jump
}


func_2288()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x8f0 PushV
	WaitForAnimEnd(); // 0x8f1 Func
	var_42_bool = 0; // 0x8f3 PushV
	func_2391(var_42_bool); // 0x8f4 NEW_2
	var_43_bool = var_42_bool == 0; // 0x8f6 Not
	if(var_43_bool == 0) goto Label_2297; // 0x8f7 JumpB
	return 12; // 0x8f8 Return
	
Label_2297:
	var_44_int = 0; // 0x8f9 PushV
	func_2766(var_44_int); // 0x8fa NEW_2
	var_36_int = var_44_int; // 0x8fb Mov
	var_37_int = 0; // 0x8fd MovI
	
Label_2302:
	var_57_bool = 0; // 0x8fe PushV
	var_57_bool = 0; // 0x8ff MovB
	var_58_int = 5; // 0x900 PushI
	var_59_bool = var_37_int < var_58_int; // 0x901 LT
	if(var_59_bool == 0) goto Label_2312; // 0x902 JumpB
	var_60_bool = 0; // 0x903 PushV
	func_2391(var_60_bool); // 0x904 NEW_2
	if(var_60_bool == 0) goto Label_2312; // 0x906 JumpB
	var_57_bool = 1; // 0x907 MovB
	
Label_2312:
	if(var_57_bool == 0) goto Label_2354; // 0x908 JumpB
	var_61_bool = var_36_int == 0; // 0x909 Not
	if(var_61_bool == 0) goto Label_2322; // 0x90a JumpB
	var_62_int = 3; // 0x90b PushI
	Sleep(var_62_int, var_38_bool); // 0x90c Func
	var_63_bool = var_38_bool == 0; // 0x90e Not
	if(var_63_bool == 0) goto Label_2321; // 0x90f JumpB
	goto Label_2354; // 0x910 Jump
	
Label_2354:
	ResetAAS(); // 0x932 Func
	return 12; // 0x934 Return
	
Label_2321:
	goto Label_2343; // 0x911 Jump
	
Label_2343:
	var_64_bool = 0; // 0x927 PushV
	func_2357(var_64_bool); // 0x928 NEW_2
	var_65_bool = var_64_bool == 0; // 0x92a Not
	if(var_65_bool == 0) goto Label_2349; // 0x92b JumpB
	goto Label_2354; // 0x92c Jump
	
Label_2349:
	ResetAAS(); // 0x92d Func
	var_66_int = 1; // 0x92f PushI
	var_37_int = var_37_int + var_66_int; // 0x930 Add2
	goto Label_2302; // 0x931 Jump
	
Label_2322:
	irand(var_39_int, var_36_int); // 0x912 Func
	var_67_int = 5; // 0x914 PushI
	irand(var_40_int, var_67_int); // 0x915 Func
	var_68_int = 0; // 0x917 PushI
	var_69_bool = var_40_int != var_68_int; // 0x918 Neq
	if(var_69_bool == 0) goto Label_2331; // 0x919 JumpB
	var_39_int = 0; // 0x91a MovI
	
Label_2331:
	var_70_string = "all"; // 0x91b PushS
	var_71_string = ""; var_72_int = 0; // 0x91c PushV
	var_72_int = var_39_int; // 0x91d Mov
	func_2759(var_71_string, var_72_int); // 0x91e NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x920 Func
	WaitForAnimEnd(var_41_bool); // 0x922 Func
	var_73_bool = var_41_bool == 0; // 0x924 Not
	if(var_73_bool == 0) goto Label_2343; // 0x925 JumpB
	goto Label_2354; // 0x926 Jump
}


func_2802()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xaf2 PushV
	var_36_string = "k5q01"; // 0xaf3 PushS
	var_37_int = 2; // 0xaf4 PushI
	SetVariable(var_36_string, var_37_int); // 0xaf5 Func
	var_38_object = Obj(); // 0xaf7 PushV
	func_3181(var_38_object); // 0xaf8 NEW_2
	var_35_object = var_38_object; // 0xaf9 Mov
	var_45_string = "k5q01RubinGotoGeorg"; // 0xafb PushS
	var_46_string = "pt_map_georg"; // 0xafc PushS
	var_47_int = 1; // 0xafd PushI
	var_48_int = 515292; // 0xafe PushI
	var_49_float = 0; // 0xaff PushV
	func_2739(var_49_float); // 0xb00 NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0xb02 ObjFunc
	func_3127(); // 0xb05 NEW_2
	return 2; // 0xb07 Return
}


func_3062()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xbf6 PushV
	var_84_int = 495; // 0xbf7 PushI
	var_85_int = 1; // 0xbf8 PushI
	var_86_int = 528062; // 0xbf9 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0xbfa Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0xbfc PushV
	var_88_object = var_83_object; // 0xbfd Mov
	var_89_int = 480; // 0xbfe MovI
	func_3153(var_87_bool, var_88_object, var_89_int); // 0xbff NEW_2
	return 2; // 0xc01 Return
}


func_1275(var_2_object, var_420_string)
{
	var_421_bool = 0; // 0x4fc PushV
	func_2791(var_421_bool); // 0x4fd NEW_2
	var_422_bool = var_421_bool == 0; // 0x4ff Not
	if(var_422_bool == 0) goto Label_1282; // 0x500 JumpB
	return 0; // 0x501 Return
	
Label_1282:
	var_423_bool = var_420_string == var_2_object; // 0x502 Eq
	if(var_423_bool == 0) goto Label_1285; // 0x503 JumpB
	return 0; // 0x504 Return
	
Label_1285:
	var_424_string = ""; var_425_bool = 0; // 0x505 PushV
	var_424_string = var_420_string; // 0x506 Mov
	var_426_string = ""; // 0x507 PushS
	var_427_bool = var_420_string == var_426_string; // 0x508 Eq
	if(var_427_bool == 0) goto Label_1292; // 0x509 JumpB
	var_425_bool = 0; // 0x50a MovB
	goto Label_1293; // 0x50b Jump
	
Label_1293:
	func_2637(var_424_string, var_425_bool); // 0x50d NEW_2
	var_2_object = var_420_string; // 0x50f TMov
	return 0; // 0x510 Return
	
Label_1292:
	var_425_bool = 1; // 0x50c MovB
}


func_2044(var_2_object, var_550_string)
{
	var_551_bool = 0; // 0x7fd PushV
	func_2791(var_551_bool); // 0x7fe NEW_2
	var_552_bool = var_551_bool == 0; // 0x800 Not
	if(var_552_bool == 0) goto Label_2051; // 0x801 JumpB
	return 0; // 0x802 Return
	
Label_2051:
	var_553_bool = var_550_string == var_2_object; // 0x803 Eq
	if(var_553_bool == 0) goto Label_2054; // 0x804 JumpB
	return 0; // 0x805 Return
	
Label_2054:
	var_554_string = ""; var_555_bool = 0; // 0x806 PushV
	var_554_string = var_550_string; // 0x807 Mov
	var_556_string = ""; // 0x808 PushS
	var_557_bool = var_550_string == var_556_string; // 0x809 Eq
	if(var_557_bool == 0) goto Label_2061; // 0x80a JumpB
	var_555_bool = 0; // 0x80b MovB
	goto Label_2062; // 0x80c Jump
	
Label_2062:
	func_2637(var_554_string, var_555_bool); // 0x80e NEW_2
	var_2_object = var_550_string; // 0x810 TMov
	return 0; // 0x811 Return
	
Label_2061:
	var_555_bool = 1; // 0x80d MovB
}


