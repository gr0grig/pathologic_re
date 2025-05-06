task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0x119 PushI
	if(var_9_int == 0) goto Label_775; // 0x11a JumpB
	func_1378(); // 0x11c NEW_2
	var_11_int = 24461; // 0x11e PushI
	var_12_bool = var_8_bool == var_11_int; // 0x11f Eq
	if(var_12_bool == 0) goto Label_294; // 0x120 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0x121 PushV
	var_13_object = var_1_object; // 0x122 MovT
	var_14_object = var_0_object; // 0x123 MovT
	func_1455(); // 0x124 NEW_2
	
Label_294:
	var_17_int = 24467; // 0x126 PushI
	var_18_bool = var_8_bool == var_17_int; // 0x127 Eq
	if(var_18_bool == 0) goto Label_302; // 0x128 JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0x129 PushV
	var_19_object = var_1_object; // 0x12a MovT
	var_20_object = var_0_object; // 0x12b MovT
	func_1455(); // 0x12c NEW_2
	
Label_302:
	var_21_int = 24468; // 0x12e PushI
	var_22_bool = var_8_bool == var_21_int; // 0x12f Eq
	if(var_22_bool == 0) goto Label_310; // 0x130 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x131 PushV
	var_23_object = var_1_object; // 0x132 MovT
	var_24_object = var_0_object; // 0x133 MovT
	func_1455(); // 0x134 NEW_2
	
Label_310:
	var_25_int = 23272; // 0x136 PushI
	var_26_bool = var_8_bool == var_25_int; // 0x137 Eq
	if(var_26_bool == 0) goto Label_318; // 0x138 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x139 PushV
	var_27_object = var_1_object; // 0x13a MovT
	var_28_object = var_0_object; // 0x13b MovT
	func_1461(); // 0x13c NEW_2
	
Label_318:
	var_31_int = 36215; // 0x13e PushI
	var_32_bool = var_8_bool == var_31_int; // 0x13f Eq
	if(var_32_bool == 0) goto Label_326; // 0x140 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x141 PushV
	var_33_object = var_1_object; // 0x142 MovT
	var_34_object = var_0_object; // 0x143 MovT
	func_1467(); // 0x144 NEW_2
	
Label_326:
	var_37_int = 23268; // 0x146 PushI
	var_38_bool = var_7_cvector == var_37_int; // 0x147 Eq
	if(var_38_bool == 0) goto Label_468; // 0x148 JumpB
	var_39_bool = 0; // 0x149 PushV
	var_39_bool = 1; // 0x14a MovB
	var_40_bool = 0; // 0x14b PushV
	var_40_bool = 0; // 0x14c MovB
	var_41_bool = 0; var_42_object = Obj(); // 0x14d PushV
	var_42_object = var_1_object; // 0x14e MovT
	func_1473(var_42_object); // 0x14f NEW_2
	if(var_41_bool == 0) goto Label_344; // 0x151 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x152 PushV
	var_50_object = var_1_object; // 0x153 MovT
	func_1497(var_50_object); // 0x154 NEW_2
	if(var_49_bool == 0) goto Label_344; // 0x156 JumpB
	var_40_bool = 1; // 0x157 MovB
	
Label_344:
	if(var_40_bool == 0) goto Label_360; // 0x158 JumpB
	var_55_bool = 0; // 0x159 PushV
	var_55_bool = 0; // 0x15a MovB
	var_56_bool = 0; var_57_object = Obj(); // 0x15b PushV
	var_57_object = var_1_object; // 0x15c MovT
	func_1485(var_57_object); // 0x15d NEW_2
	if(var_56_bool == 0) goto Label_358; // 0x15f JumpB
	var_62_bool = 0; var_63_object = Obj(); // 0x160 PushV
	var_63_object = var_1_object; // 0x161 MovT
	func_1497(var_63_object); // 0x162 NEW_2
	if(var_62_bool == 0) goto Label_358; // 0x164 JumpB
	var_55_bool = 1; // 0x165 MovB
	
Label_358:
	if(var_55_bool == 0) goto Label_360; // 0x166 JumpB
	var_39_bool = 0; // 0x167 MovB
	
Label_360:
	if(var_39_bool == 0) goto Label_386; // 0x168 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x169 PushV
	var_64_object = var_1_object; // 0x16a MovT
	var_65_object = var_0_object; // 0x16b MovT
	func_1449(); // 0x16c NEW_2
	var_68_string = ""; // 0x16e PushV
	var_68_string = "Saveyouall"; // 0x16f MovS
	func_258(var_8_bool, var_68_string); // 0x170 NEW_2
	var_85_int = 522101; // 0x172 PushI
	SetMessage(var_85_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_86_int = 522102; // 0x177 PushI
	var_87_int = 24452; // 0x178 PushI
	var_88_int = 23269; // 0x179 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x17a TObjFunc
	var_89_int = 522103; // 0x17c PushI
	var_90_int = 24448; // 0x17d PushI
	var_91_int = 23270; // 0x17e PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_92_string = ""; // 0x182 PushV
	var_92_string = "Smile"; // 0x183 MovS
	func_258(var_8_bool, var_92_string); // 0x184 NEW_2
	var_93_int = 522104; // 0x186 PushI
	SetMessage(var_93_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_94_bool = 0; // 0x18b PushV
	var_94_bool = 0; // 0x18c MovB
	var_95_bool = 0; // 0x18d PushV
	var_95_bool = 0; // 0x18e MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x18f PushV
	var_97_object = var_1_object; // 0x190 MovT
	func_1473(var_97_object); // 0x191 NEW_2
	if(var_96_bool == 0) goto Label_410; // 0x193 JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x194 PushV
	var_99_object = var_1_object; // 0x195 MovT
	func_1485(var_99_object); // 0x196 NEW_2
	if(var_98_bool == 0) goto Label_410; // 0x198 JumpB
	var_95_bool = 1; // 0x199 MovB
	
Label_410:
	if(var_95_bool == 0) goto Label_418; // 0x19a JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x19b PushV
	var_101_object = var_1_object; // 0x19c MovT
	func_1509(var_101_object); // 0x19d NEW_2
	var_106_bool = var_100_bool == 0; // 0x19f Not
	if(var_106_bool == 0) goto Label_418; // 0x1a0 JumpB
	var_94_bool = 1; // 0x1a1 MovB
	
Label_418:
	if(var_94_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_107_int = 523263; // 0x1a3 PushI
	var_108_int = 24464; // 0x1a4 PushI
	var_109_int = 24463; // 0x1a5 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x1a6 TObjFunc
	
Label_424:
	var_110_bool = 0; // 0x1a8 PushV
	var_110_bool = 0; // 0x1a9 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x1aa PushV
	var_112_object = var_1_object; // 0x1ab MovT
	func_1509(var_112_object); // 0x1ac NEW_2
	if(var_111_bool == 0) goto Label_437; // 0x1ae JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x1af PushV
	var_114_object = var_1_object; // 0x1b0 MovT
	func_1521(var_114_object); // 0x1b1 NEW_2
	if(var_113_bool == 0) goto Label_437; // 0x1b3 JumpB
	var_110_bool = 1; // 0x1b4 MovB
	
Label_437:
	if(var_110_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_119_int = 522105; // 0x1b6 PushI
	var_120_int = 24443; // 0x1b7 PushI
	var_121_int = 23272; // 0x1b8 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x1b9 TObjFunc
	
Label_443:
	var_122_bool = 0; // 0x1bb PushV
	var_122_bool = 0; // 0x1bc MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x1bd PushV
	var_124_object = var_1_object; // 0x1be MovT
	func_1533(var_124_object); // 0x1bf NEW_2
	if(var_123_bool == 0) goto Label_456; // 0x1c1 JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x1c2 PushV
	var_130_object = var_1_object; // 0x1c3 MovT
	func_1545(var_130_object); // 0x1c4 NEW_2
	if(var_129_bool == 0) goto Label_456; // 0x1c6 JumpB
	var_122_bool = 1; // 0x1c7 MovB
	
Label_456:
	if(var_122_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_135_int = 534577; // 0x1c9 PushI
	var_136_int = 36216; // 0x1ca PushI
	var_137_int = 36215; // 0x1cb PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1cc TObjFunc
	
Label_462:
	var_138_int = 523242; // 0x1ce PushI
	var_139_int = -1; // 0x1cf PushI
	var_140_int = 24442; // 0x1d0 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1d1 TObjFunc
	return 0; // 0x1d3 Return
	
Label_468:
	var_141_int = 36216; // 0x1d4 PushI
	var_142_bool = var_7_cvector == var_141_int; // 0x1d5 Eq
	if(var_142_bool == 0) goto Label_491; // 0x1d6 JumpB
	var_143_string = ""; // 0x1d7 PushV
	var_143_string = "Neutral"; // 0x1d8 MovS
	func_258(var_8_bool, var_143_string); // 0x1d9 NEW_2
	var_144_int = 534578; // 0x1db PushI
	SetMessage(var_144_int); // 0x1dc TObjFunc
	ClearReplies(); // 0x1de TObjFunc
	var_145_int = 534579; // 0x1e0 PushI
	var_146_int = 36219; // 0x1e1 PushI
	var_147_int = 36217; // 0x1e2 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1e3 TObjFunc
	var_148_int = 534580; // 0x1e5 PushI
	var_149_int = -1; // 0x1e6 PushI
	var_150_int = 36218; // 0x1e7 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_151_int = 36219; // 0x1eb PushI
	var_152_bool = var_7_cvector == var_151_int; // 0x1ec Eq
	if(var_152_bool == 0) goto Label_514; // 0x1ed JumpB
	var_153_string = ""; // 0x1ee PushV
	var_153_string = "Saveyouall"; // 0x1ef MovS
	func_258(var_8_bool, var_153_string); // 0x1f0 NEW_2
	var_154_int = 534581; // 0x1f2 PushI
	SetMessage(var_154_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_155_int = 534582; // 0x1f7 PushI
	var_156_int = -1; // 0x1f8 PushI
	var_157_int = 36220; // 0x1f9 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1fa TObjFunc
	var_158_int = 534583; // 0x1fc PushI
	var_159_int = -1; // 0x1fd PushI
	var_160_int = 36221; // 0x1fe PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1ff TObjFunc
	return 0; // 0x201 Return
	
Label_514:
	var_161_int = 24443; // 0x202 PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x203 Eq
	if(var_162_bool == 0) goto Label_537; // 0x204 JumpB
	var_163_string = ""; // 0x205 PushV
	var_163_string = "Sly"; // 0x206 MovS
	func_258(var_8_bool, var_163_string); // 0x207 NEW_2
	var_164_int = 523243; // 0x209 PushI
	SetMessage(var_164_int); // 0x20a TObjFunc
	ClearReplies(); // 0x20c TObjFunc
	var_165_int = 523244; // 0x20e PushI
	var_166_int = -1; // 0x20f PushI
	var_167_int = 24444; // 0x210 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x211 TObjFunc
	var_168_int = 523245; // 0x213 PushI
	var_169_int = 24446; // 0x214 PushI
	var_170_int = 24445; // 0x215 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_171_int = 24446; // 0x219 PushI
	var_172_bool = var_7_cvector == var_171_int; // 0x21a Eq
	if(var_172_bool == 0) goto Label_555; // 0x21b JumpB
	var_173_string = ""; // 0x21c PushV
	var_173_string = "Sly"; // 0x21d MovS
	func_258(var_8_bool, var_173_string); // 0x21e NEW_2
	var_174_int = 523246; // 0x220 PushI
	SetMessage(var_174_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_175_int = 523247; // 0x225 PushI
	var_176_int = -1; // 0x226 PushI
	var_177_int = 24447; // 0x227 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_178_int = 24464; // 0x22b PushI
	var_179_bool = var_7_cvector == var_178_int; // 0x22c Eq
	if(var_179_bool == 0) goto Label_573; // 0x22d JumpB
	var_180_string = ""; // 0x22e PushV
	var_180_string = "Neutral"; // 0x22f MovS
	func_258(var_8_bool, var_180_string); // 0x230 NEW_2
	var_181_int = 523264; // 0x232 PushI
	SetMessage(var_181_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_182_int = 523265; // 0x237 PushI
	var_183_int = 24466; // 0x238 PushI
	var_184_int = 24465; // 0x239 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x23a TObjFunc
	return 0; // 0x23c Return
	
Label_573:
	var_185_int = 24466; // 0x23d PushI
	var_186_bool = var_7_cvector == var_185_int; // 0x23e Eq
	if(var_186_bool == 0) goto Label_596; // 0x23f JumpB
	var_187_string = ""; // 0x240 PushV
	var_187_string = "Saveyouall"; // 0x241 MovS
	func_258(var_8_bool, var_187_string); // 0x242 NEW_2
	var_188_int = 523266; // 0x244 PushI
	SetMessage(var_188_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_189_int = 523267; // 0x249 PushI
	var_190_int = -1; // 0x24a PushI
	var_191_int = 24467; // 0x24b PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x24c TObjFunc
	var_192_int = 523268; // 0x24e PushI
	var_193_int = -1; // 0x24f PushI
	var_194_int = 24468; // 0x250 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_195_int = 24448; // 0x254 PushI
	var_196_bool = var_7_cvector == var_195_int; // 0x255 Eq
	if(var_196_bool == 0) goto Label_619; // 0x256 JumpB
	var_197_string = ""; // 0x257 PushV
	var_197_string = "Smile"; // 0x258 MovS
	func_258(var_8_bool, var_197_string); // 0x259 NEW_2
	var_198_int = 523248; // 0x25b PushI
	SetMessage(var_198_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_199_int = 523250; // 0x260 PushI
	var_200_int = 24452; // 0x261 PushI
	var_201_int = 24450; // 0x262 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x263 TObjFunc
	var_202_int = 523249; // 0x265 PushI
	var_203_int = 24452; // 0x266 PushI
	var_204_int = 24449; // 0x267 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_205_int = 24452; // 0x26b PushI
	var_206_bool = var_7_cvector == var_205_int; // 0x26c Eq
	if(var_206_bool == 0) goto Label_637; // 0x26d JumpB
	var_207_string = ""; // 0x26e PushV
	var_207_string = "Saveyouall"; // 0x26f MovS
	func_258(var_8_bool, var_207_string); // 0x270 NEW_2
	var_208_int = 523252; // 0x272 PushI
	SetMessage(var_208_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_209_int = 523253; // 0x277 PushI
	var_210_int = 24451; // 0x278 PushI
	var_211_int = 24453; // 0x279 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x27a TObjFunc
	return 0; // 0x27c Return
	
Label_637:
	var_212_int = 24451; // 0x27d PushI
	var_213_bool = var_7_cvector == var_212_int; // 0x27e Eq
	if(var_213_bool == 0) goto Label_660; // 0x27f JumpB
	var_214_string = ""; // 0x280 PushV
	var_214_string = "Neutral"; // 0x281 MovS
	func_258(var_8_bool, var_214_string); // 0x282 NEW_2
	var_215_int = 523251; // 0x284 PushI
	SetMessage(var_215_int); // 0x285 TObjFunc
	ClearReplies(); // 0x287 TObjFunc
	var_216_int = 523254; // 0x289 PushI
	var_217_int = 24456; // 0x28a PushI
	var_218_int = 24454; // 0x28b PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x28c TObjFunc
	var_219_int = 523255; // 0x28e PushI
	var_220_int = 24469; // 0x28f PushI
	var_221_int = 24455; // 0x290 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x291 TObjFunc
	return 0; // 0x293 Return
	
Label_660:
	var_222_int = 24469; // 0x294 PushI
	var_223_bool = var_7_cvector == var_222_int; // 0x295 Eq
	if(var_223_bool == 0) goto Label_678; // 0x296 JumpB
	var_224_string = ""; // 0x297 PushV
	var_224_string = "Sly"; // 0x298 MovS
	func_258(var_8_bool, var_224_string); // 0x299 NEW_2
	var_225_int = 523269; // 0x29b PushI
	SetMessage(var_225_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_226_int = 523270; // 0x2a0 PushI
	var_227_int = 24456; // 0x2a1 PushI
	var_228_int = 24470; // 0x2a2 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_229_int = 24456; // 0x2a6 PushI
	var_230_bool = var_7_cvector == var_229_int; // 0x2a7 Eq
	if(var_230_bool == 0) goto Label_696; // 0x2a8 JumpB
	var_231_string = ""; // 0x2a9 PushV
	var_231_string = "Neutral"; // 0x2aa MovS
	func_258(var_8_bool, var_231_string); // 0x2ab NEW_2
	var_232_int = 523256; // 0x2ad PushI
	SetMessage(var_232_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_233_int = 523257; // 0x2b2 PushI
	var_234_int = 24458; // 0x2b3 PushI
	var_235_int = 24457; // 0x2b4 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_236_int = 24473; // 0x2b8 PushI
	var_237_bool = var_7_cvector == var_236_int; // 0x2b9 Eq
	if(var_237_bool == 0) goto Label_699; // 0x2ba JumpB
	
Label_699:
	var_238_int = 24475; // 0x2bb PushI
	var_239_bool = var_7_cvector == var_238_int; // 0x2bc Eq
	if(var_239_bool == 0) goto Label_722; // 0x2bd JumpB
	var_240_string = ""; // 0x2be PushV
	var_240_string = "Sly"; // 0x2bf MovS
	func_258(var_8_bool, var_240_string); // 0x2c0 NEW_2
	var_241_int = 523274; // 0x2c2 PushI
	SetMessage(var_241_int); // 0x2c3 TObjFunc
	ClearReplies(); // 0x2c5 TObjFunc
	var_242_int = 523276; // 0x2c7 PushI
	var_243_int = -1; // 0x2c8 PushI
	var_244_int = 24478; // 0x2c9 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x2ca TObjFunc
	var_245_int = 523277; // 0x2cc PushI
	var_246_int = -1; // 0x2cd PushI
	var_247_int = 24479; // 0x2ce PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x2cf TObjFunc
	return 0; // 0x2d1 Return
	
Label_722:
	var_248_int = 24458; // 0x2d2 PushI
	var_249_bool = var_7_cvector == var_248_int; // 0x2d3 Eq
	if(var_249_bool == 0) goto Label_740; // 0x2d4 JumpB
	var_250_string = ""; // 0x2d5 PushV
	var_250_string = "Neutral"; // 0x2d6 MovS
	func_258(var_8_bool, var_250_string); // 0x2d7 NEW_2
	var_251_int = 523258; // 0x2d9 PushI
	SetMessage(var_251_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_252_int = 523259; // 0x2de PushI
	var_253_int = 24460; // 0x2df PushI
	var_254_int = 24459; // 0x2e0 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x2e1 TObjFunc
	return 0; // 0x2e3 Return
	
Label_740:
	var_255_int = 24460; // 0x2e4 PushI
	var_256_bool = var_7_cvector == var_255_int; // 0x2e5 Eq
	if(var_256_bool == 0) goto Label_763; // 0x2e6 JumpB
	var_257_string = ""; // 0x2e7 PushV
	var_257_string = "Sly"; // 0x2e8 MovS
	func_258(var_8_bool, var_257_string); // 0x2e9 NEW_2
	var_258_int = 523260; // 0x2eb PushI
	SetMessage(var_258_int); // 0x2ec TObjFunc
	ClearReplies(); // 0x2ee TObjFunc
	var_259_int = 523261; // 0x2f0 PushI
	var_260_int = -1; // 0x2f1 PushI
	var_261_int = 24461; // 0x2f2 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x2f3 TObjFunc
	var_262_int = 523262; // 0x2f5 PushI
	var_263_int = -1; // 0x2f6 PushI
	var_264_int = 24462; // 0x2f7 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_3_string = 1; // 0x2fb TMovB
	var_265_bool = 0; // 0x2fc PushV
	func_1447(var_265_bool); // 0x2fd NEW_2
	if(var_265_bool == 0) goto Label_771; // 0x2ff JumpB
	lshStopAnimation(); // 0x300 Func
	goto Label_773; // 0x302 Jump
	
Label_773:
	return 0; // 0x305 Return
	
Label_771:
	StopAnimation(); // 0x303 Func
	
Label_775:
	return 0; // 0x307 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x314 PushV
	var_10_string = "cleanup"; // 0x315 PushS
	var_11_bool = var_7_string == var_10_string; // 0x316 Eq
	if(var_11_bool == 0) goto Label_803; // 0x317 JumpB
	var_1_object = 1; // 0x318 TMovB
	IsLoaded(var_9_bool); // 0x319 Func
	var_12_bool = var_9_bool == 0; // 0x31b Not
	if(var_12_bool == 0) goto Label_802; // 0x31c JumpB
	var_13_object = Obj(); // 0x31d PushV
	func_1385(var_13_object); // 0x31e NEW_2
	RemoveActor(var_13_object); // 0x320 Func
	
Label_802:
	goto Label_807; // 0x322 Jump
	
Label_807:
	return 2; // 0x327 Return
	
Label_803:
	var_16_string = "restore"; // 0x323 PushS
	var_17_bool = var_7_string == var_16_string; // 0x324 Eq
	if(var_17_bool == 0) goto Label_807; // 0x325 JumpB
	var_1_object = 0; // 0x326 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x328 PushT
	if(var_7_object == 0) goto Label_817; // 0x329 JumpB
	var_8_object = Obj(); // 0x32a PushV
	func_1385(var_8_object); // 0x32b NEW_2
	RemoveActor(var_8_object); // 0x32d Func
	Hold(); // 0x32f Func
	
Label_817:
	func_932(); // 0x332 NEW_2
	return 0; // 0x334 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_947(); // 0x336 NEW_2
	return 0; // 0x338 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x37f PushI
	var_9_bool = var_7_int == var_8_int; // 0x380 Eq
	if(var_9_bool == 0) goto Label_931; // 0x381 JumpB
	func_890(); // 0x383 NEW_2
	var_11_bool = 0; // 0x385 PushV
	var_11_bool = 0; // 0x386 MovB
	var_12_bool = 0; // 0x387 PushV
	func_1104(var_12_bool); // 0x388 NEW_2
	if(var_12_bool == 0) goto Label_912; // 0x38a JumpB
	var_15_bool = 0; // 0x38b PushV
	func_859(var_15_bool); // 0x38c NEW_2
	if(var_15_bool == 0) goto Label_912; // 0x38e JumpB
	var_11_bool = 1; // 0x38f MovB
	
Label_912:
	if(var_11_bool == 0) goto Label_925; // 0x390 JumpB
	var_32_bool = 0; // 0x391 PushV
	func_839(var_32_bool); // 0x392 NEW_2
	if(var_32_bool == 0) goto Label_924; // 0x394 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x395 PushV
	var_53_object = Obj(); // 0x396 PushV
	func_1385(var_53_object); // 0x397 NEW_2
	var_52_object = var_53_object; // 0x398 Mov
	func_1252(var_52_object); // 0x39a NEW_2
	
Label_924:
	goto Label_931; // 0x39c Jump
	
Label_931:
	return 0; // 0x3a3 Return
	
Label_925:
	func_854(var_7_int); // 0x39e NEW_2
	func_881(); // 0x3a1 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x3c1 Push
	if(var_8_bool == 0) goto Label_967; // 0x3c2 JumpB
	func_881(); // 0x3c4 NEW_2
	goto Label_971; // 0x3c6 Jump
	
Label_971:
	return 0; // 0x3cb Return
	
Label_967:
	var_14_string = ""; // 0x3c7 PushV
	var_14_string = "Neutral"; // 0x3c8 MovS
	func_1332(var_14_string); // 0x3c9 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3cc PushV
	IsOverrideActive(var_9_bool); // 0x3cd Func
	var_10_bool = var_9_bool == 0; // 0x3cf Not
	if(var_10_bool == 0) goto Label_1000; // 0x3d0 JumpB
	EventDisable(0); // 0x3d1 EventDisable
	func_1072(); // 0x3d3 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x3d5 PushV
	var_12_object = var_7_object; // 0x3d6 Mov
	func_1095(var_12_object); // 0x3d7 NEW_2
	EventEnable(0); // 0x3d9 EventEnable
	var_25_object = Obj(); // 0x3da PushV
	var_25_object = var_7_object; // 0x3db Mov
	func_776(var_25_object); // 0x3dc NEW_2
	var_327_string = ""; // 0x3de PushV
	var_327_string = "Neutral"; // 0x3df MovS
	func_1332(var_327_string); // 0x3e0 NEW_2
	func_890(); // 0x3e3 NEW_2
	func_881(); // 0x3e6 NEW_2
	
Label_1000:
	return 2; // 0x3e8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_825(var_6_bool); // 0x311 NEW_2
	return 0; // 0x313 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1109(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1441(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1439(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1443(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1445(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1557(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1385(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_1194(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_319_bool = var_36_bool == 0; // 0x3f Not
	if(var_319_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_320_object = Obj(); // 0x46 PushV
	var_320_object = var_27_object; // 0x47 Mov
	func_1177(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_258(var_2_object, var_228_string)
{
	var_229_bool = 0; // 0x103 PushV
	func_1447(var_229_bool); // 0x104 NEW_2
	var_230_bool = var_229_bool == 0; // 0x106 Not
	if(var_230_bool == 0) goto Label_265; // 0x107 JumpB
	return 0; // 0x108 Return
	
Label_265:
	var_231_bool = var_228_string == var_2_object; // 0x109 Eq
	if(var_231_bool == 0) goto Label_268; // 0x10a JumpB
	return 0; // 0x10b Return
	
Label_268:
	var_232_string = ""; var_233_bool = 0; // 0x10c PushV
	var_232_string = var_228_string; // 0x10d Mov
	var_234_string = ""; // 0x10e PushS
	var_235_bool = var_228_string == var_234_string; // 0x10f Eq
	if(var_235_bool == 0) goto Label_275; // 0x110 JumpB
	var_233_bool = 0; // 0x111 MovB
	goto Label_276; // 0x112 Jump
	
Label_276:
	func_1348(var_232_string, var_233_bool); // 0x114 NEW_2
	var_2_object = var_228_string; // 0x116 TMov
	return 0; // 0x117 Return
	
Label_275:
	var_233_bool = 1; // 0x113 MovB
}


func_1415(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x587 PushV
	var_34_string = "idle"; // 0x588 MovS
	var_35_int = var_32_int; // 0x589 Push
	if(var_35_int == 0) goto Label_1420; // 0x58a JumpB
	var_34_string = var_34_string + var_32_int; // 0x58b Add2
	
Label_1420:
	var_31_string = var_34_string; // 0x58c Mov
	return 2; // 0x58d Return
}


func_776(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x309 PushV
	var_27_object = var_25_object; // 0x30a Mov
	TaskCall(0); // 0x30b TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x30c NEW_2
	TaskReturn(); // 0x30d TaskReturn
	return 0; // 0x30f Return
}


func_1545(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0x60a PushV
	var_310_string = "oob11Klara3"; // 0x60b MovS
	func_1401(var_309_int, var_310_string); // 0x60c NEW_2
	var_311_int = 0; // 0x60e PushI
	var_312_bool = var_309_int == var_311_int; // 0x60f Eq
	if(var_312_bool == 0) goto Label_1555; // 0x610 JumpB
	var_307_bool = 1; // 0x611 MovB
	return 0; // 0x612 Return
	
Label_1555:
	var_307_bool = 0; // 0x613 MovB
	return 0; // 0x614 Return
}


func_1289(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x509 PushV
	var_151_string = "d"; // 0x50a PushS
	var_152_int = 0; // 0x50b PushV
	func_1406(var_152_int); // 0x50c NEW_2
	var_158_int = var_151_string + var_152_int; // 0x50e Add
	var_159_string = "m"; // 0x50f PushS
	var_146_string = var_158_int + var_159_string; // 0x510 Add2
	var_147_int = 0; // 0x511 MovI
	
Label_1298:
	var_160_int = 1; // 0x512 PushI
	if(var_160_int == 0) goto Label_1311; // 0x513 JumpB
	var_161_int = 1; // 0x514 PushI
	var_162_int = var_147_int + var_161_int; // 0x515 Add
	var_163_int = var_146_string + var_162_int; // 0x516 Add
	HasProperty(var_163_int, var_148_bool); // 0x517 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x519 Not
	if(var_164_bool == 0) goto Label_1308; // 0x51a JumpB
	goto Label_1311; // 0x51b Jump
	
Label_1311:
	var_165_bool = var_147_int == 0; // 0x51f Not
	if(var_165_bool == 0) goto Label_1315; // 0x520 JumpB
	var_139_bool = 0; // 0x521 MovB
	return 10; // 0x522 Return
	
Label_1315:
	var_149_int = 0; // 0x523 MovI
	var_166_int = 1; // 0x524 PushI
	var_167_bool = var_147_int > var_166_int; // 0x525 GT
	if(var_167_bool == 0) goto Label_1321; // 0x526 JumpB
	irand(var_149_int, var_147_int); // 0x527 Func
	
Label_1321:
	var_168_int = 1; // 0x529 PushI
	var_169_int = var_149_int + var_168_int; // 0x52a Add
	var_170_int = var_146_string + var_169_int; // 0x52b Add
	GetProperty(var_170_int, var_150_string); // 0x52c ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x52e PushV
	var_172_string = var_150_string; // 0x52f Mov
	func_1363(var_171_bool, var_172_string); // 0x530 NEW_2
	var_139_bool = var_171_bool; // 0x531 Mov
	return 10; // 0x533 Return
	
Label_1308:
	var_173_int = 1; // 0x51c PushI
	var_147_int = var_147_int + var_173_int; // 0x51d Add2
	goto Label_1298; // 0x51e Jump
}


func_1422(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x58e PushV
	var_28_int = 0; // 0x58f MovI
	
Label_1424:
	var_30_string = "all"; // 0x590 PushS
	var_31_string = ""; var_32_int = 0; // 0x591 PushV
	var_32_int = var_28_int; // 0x592 Mov
	func_1415(var_31_string, var_32_int); // 0x593 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x595 Func
	var_36_bool = var_29_bool == 0; // 0x597 Not
	if(var_36_bool == 0) goto Label_1434; // 0x598 JumpB
	goto Label_1437; // 0x599 Jump
	
Label_1437:
	var_25_int = var_28_int; // 0x59d Mov
	return 4; // 0x59e Return
	
Label_1434:
	var_37_int = 1; // 0x59a PushI
	var_28_int = var_28_int + var_37_int; // 0x59b Add2
	goto Label_1424; // 0x59c Jump
}


func_1557(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x615 PushV
	var_91_string = "branch"; // 0x616 PushS
	GetVariable(var_91_string, var_90_int); // 0x617 Func
	var_92_int = 0; // 0x619 PushI
	var_93_bool = var_90_int == var_92_int; // 0x61a Eq
	if(var_93_bool == 0) goto Label_1567; // 0x61b JumpB
	var_88_int = 1; // 0x61c MovI
	return 2; // 0x61d Return
	
Label_1567:
	var_94_int = 1; // 0x61f PushI
	var_95_bool = var_90_int == var_94_int; // 0x620 Eq
	if(var_95_bool == 0) goto Label_1572; // 0x621 JumpB
	var_88_int = 2; // 0x622 MovI
	return 2; // 0x623 Return
	
Label_1572:
	var_88_int = 3; // 0x624 MovI
	return 2; // 0x625 Return
}


func_1177()
{
	var_321_bool = 0; var_322_bool = 0; // 0x499 PushV
	CameraSwitchToNormal(); // 0x49a Func
	var_323_bool = 0; // 0x49c PushV
	func_1447(var_323_bool); // 0x49d NEW_2
	if(var_323_bool == 0) goto Label_1185; // 0x49f JumpB
	goto Label_1193; // 0x4a0 Jump
	
Label_1193:
	return 2; // 0x4a9 Return
	
Label_1185:
	var_324_string = "head"; // 0x4a1 PushS
	HasAnimationTrack(var_322_bool, var_324_string); // 0x4a2 Func
	var_325_bool = var_322_bool; // 0x4a4 Push
	if(var_325_bool == 0) goto Label_1193; // 0x4a5 JumpB
	var_326_string = "head"; // 0x4a6 PushS
	UnlookAsync(var_326_string); // 0x4a7 Func
}


func_1439(var_85_int)
{
	var_85_int = 515540; // 0x59f MovI
	return 0; // 0x5a0 Return
}


func_1441(var_84_int)
{
	var_84_int = 502865; // 0x5a1 MovI
	return 0; // 0x5a2 Return
}


func_1443(var_86_string)
{
	var_86_string = "ui/NPC_Klara.png"; // 0x5a3 MovS
	return 0; // 0x5a4 Return
}


func_932()
{
	func_1072(); // 0x3a5 NEW_2
	func_890(); // 0x3a8 NEW_2
	lshStopSpeech(); // 0x3aa Func
	lshStopAnimation(); // 0x3ac Func
	StopAsync(); // 0x3ae Func
	Hold(); // 0x3b0 Func
	return 0; // 0x3b2 Return
}


func_1445(var_87_string)
{
	var_87_string = "ui/NPC_Klara_b.png"; // 0x5a5 MovS
	return 0; // 0x5a6 Return
}


func_1447(var_79_bool)
{
	var_79_bool = 1; // 0x5a7 MovB
	return 0; // 0x5a8 Return
}


func_1449()
{
	var_226_string = "oob11Klara1"; // 0x5aa PushS
	var_227_int = 1; // 0x5ab PushI
	SetVariable(var_226_string, var_227_int); // 0x5ac Func
	return 0; // 0x5ae Return
}


func_1194(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x4aa PushV
	var_106_string = "voice_common"; // 0x4ab PushS
	GetVariable(var_106_string, var_104_int); // 0x4ac Func
	var_107_int = var_104_int; // 0x4ae Push
	if(var_107_int == 0) goto Label_1232; // 0x4af JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x4b0 PushV
	var_109_object = var_98_object; // 0x4b1 Mov
	func_1252(var_109_object); // 0x4b2 NEW_2
	var_138_bool = var_108_bool == 0; // 0x4b4 Not
	if(var_138_bool == 0) goto Label_1214; // 0x4b5 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x4b6 PushV
	var_140_object = var_98_object; // 0x4b7 Mov
	func_1289(var_140_object); // 0x4b8 NEW_2
	var_174_bool = var_139_bool == 0; // 0x4ba Not
	if(var_174_bool == 0) goto Label_1214; // 0x4bb JumpB
	var_97_bool = 0; // 0x4bc MovB
	return 4; // 0x4bd Return
	
Label_1214:
	var_175_int = 2; // 0x4be PushI
	irand(var_105_int, var_175_int); // 0x4bf Func
	var_176_int = var_105_int; // 0x4c1 Push
	if(var_176_int == 0) goto Label_1227; // 0x4c2 JumpB
	var_177_string = "voice_common"; // 0x4c3 PushS
	var_178_int = 1; // 0x4c4 PushI
	var_179_int = var_104_int + var_178_int; // 0x4c5 Add
	var_180_int = 3; // 0x4c6 PushI
	var_181_int = var_179_int / var_180_int; // 0x4c7 Mod
	SetVariable(var_177_string, var_181_int); // 0x4c8 Func
	goto Label_1231; // 0x4ca Jump
	
Label_1231:
	goto Label_1250; // 0x4cf Jump
	
Label_1250:
	var_97_bool = 1; // 0x4e2 MovB
	return 4; // 0x4e3 Return
	
Label_1227:
	var_182_string = "voice_common"; // 0x4cb PushS
	var_183_int = 0; // 0x4cc PushI
	SetVariable(var_182_string, var_183_int); // 0x4cd Func
	
Label_1232:
	var_184_bool = 0; var_185_object = Obj(); // 0x4d0 PushV
	var_185_object = var_98_object; // 0x4d1 Mov
	func_1289(var_185_object); // 0x4d2 NEW_2
	var_186_bool = var_184_bool == 0; // 0x4d4 Not
	if(var_186_bool == 0) goto Label_1246; // 0x4d5 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x4d6 PushV
	var_188_object = var_98_object; // 0x4d7 Mov
	func_1252(var_188_object); // 0x4d8 NEW_2
	var_189_bool = var_187_bool == 0; // 0x4da Not
	if(var_189_bool == 0) goto Label_1246; // 0x4db JumpB
	var_97_bool = 0; // 0x4dc MovB
	return 4; // 0x4dd Return
	
Label_1246:
	var_190_string = "voice_common"; // 0x4de PushS
	var_191_int = 1; // 0x4df PushI
	SetVariable(var_190_string, var_191_int); // 0x4e0 Func
}


func_1070(var_45_bool)
{
	var_45_bool = 1; // 0x42e MovB
	return 0; // 0x42f Return
}


func_1455()
{
	var_15_string = "b11q01KlaraWillHelp"; // 0x5b0 PushS
	var_16_int = 1; // 0x5b1 PushI
	SetVariable(var_15_string, var_16_int); // 0x5b2 Func
	return 0; // 0x5b4 Return
}


func_1072()
{
	StopAnimation(); // 0x430 Func
	StopGroup0(); // 0x432 Func
	return 0; // 0x434 Return
}


func_947()
{
	StopGroup0(); // 0x3b3 Func
	func_890(); // 0x3b6 NEW_2
	var_8_string = ""; // 0x3b8 PushV
	var_8_string = "Neutral"; // 0x3b9 MovS
	func_1332(var_8_string); // 0x3ba NEW_2
	func_881(); // 0x3bd NEW_2
	return 0; // 0x3bf Return
}


func_1332(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0; // 0x534 PushV
	lshHasAnimation(var_258_bool, var_254_string); // 0x535 Func
	var_261_bool = var_258_bool; // 0x537 Push
	if(var_261_bool == 0) goto Label_1343; // 0x538 JumpB
	lshGetAnimTimes(var_254_string, var_259_float, var_260_float); // 0x539 Func
	var_262_bool = 0; // 0x53b PushB
	lshPlayAnimation(var_259_float, var_260_float, var_262_bool); // 0x53c Func
	goto Label_1347; // 0x53e Jump
	
Label_1347:
	return 6; // 0x543 Return
	
Label_1343:
	var_263_string = "Can't find lsh animation : "; // 0x53f PushS
	var_264_int = var_263_string + var_254_string; // 0x540 Add
	Trace(var_264_int); // 0x541 Func
}


func_1461()
{
	var_29_string = "oob11Klara2"; // 0x5b6 PushS
	var_30_int = 1; // 0x5b7 PushI
	SetVariable(var_29_string, var_30_int); // 0x5b8 Func
	return 0; // 0x5ba Return
}


func_1077(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x435 PushV
	GetPosition(var_27_cvector); // 0x436 Func
	GetPosition(var_28_cvector); // 0x438 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x43a Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x43b Or2
	return 6; // 0x43c Return
}


func_825(var_0_object)
{
	var_7_bool = 0; // 0x339 PushV
	func_1104(var_7_bool); // 0x33a NEW_2
	var_10_bool = var_7_bool == 0; // 0x33c Not
	if(var_10_bool == 0) goto Label_832; // 0x33d JumpB
	Hold(); // 0x33e Func
	
Label_832:
	GetDirection(var_0_object); // 0x340 Func
	
Label_834:
	func_1001(); // 0x343 NEW_2
	goto Label_834; // 0x345 Jump
}


func_1467()
{
	var_35_string = "oob11Klara3"; // 0x5bc PushS
	var_36_int = 1; // 0x5bd PushI
	SetVariable(var_35_string, var_36_int); // 0x5be Func
	return 0; // 0x5c0 Return
}


func_1085(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x43d PushV
	GetPosition(var_20_cvector); // 0x43e Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x440 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x441 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x442 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x443 Func
	var_15_bool = var_22_bool; // 0x445 Mov
	return 6; // 0x446 Return
}


func_1473(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x5c2 PushV
	var_204_string = "b11q01"; // 0x5c3 MovS
	func_1401(var_203_int, var_204_string); // 0x5c4 NEW_2
	var_207_int = 0; // 0x5c6 PushI
	var_208_bool = var_203_int == var_207_int; // 0x5c7 Eq
	if(var_208_bool == 0) goto Label_1483; // 0x5c8 JumpB
	var_201_bool = 1; // 0x5c9 MovB
	return 0; // 0x5ca Return
	
Label_1483:
	var_201_bool = 0; // 0x5cb MovB
	return 0; // 0x5cc Return
}


func_1348(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0; // 0x544 PushV
	lshHasAnimation(var_239_bool, var_232_string); // 0x545 Func
	var_242_bool = var_239_bool; // 0x547 Push
	if(var_242_bool == 0) goto Label_1358; // 0x548 JumpB
	lshGetAnimTimes(var_232_string, var_240_float, var_241_float); // 0x549 Func
	lshPlayAnimation(var_240_float, var_241_float, var_233_bool); // 0x54b Func
	goto Label_1362; // 0x54d Jump
	
Label_1362:
	return 6; // 0x552 Return
	
Label_1358:
	var_243_string = "Can't find lsh animation : "; // 0x54e PushS
	var_244_int = var_243_string + var_232_string; // 0x54f Add
	Trace(var_244_int); // 0x550 Func
}


func_1095(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x447 PushV
	GetPosition(var_14_cvector); // 0x448 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x44a PushV
	var_16_cvector = var_14_cvector; // 0x44b Mov
	func_1085(var_15_bool, var_16_cvector); // 0x44c NEW_2
	var_11_bool = var_15_bool; // 0x44d Mov
	return 2; // 0x44f Return
}


func_839(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x347 PushV
	var_35_string = "player"; // 0x348 PushS
	FindActor(var_34_object, var_35_string); // 0x349 Func
	var_36_bool = var_34_object == 0; // 0x34b Not
	if(var_36_bool == 0) goto Label_847; // 0x34c JumpB
	var_32_bool = 0; // 0x34d MovB
	return 2; // 0x34e Return
	
Label_847:
	var_37_bool = 0; var_38_object = Obj(); // 0x34f PushV
	var_38_object = var_34_object; // 0x350 Mov
	func_1095(var_38_object); // 0x351 NEW_2
	var_32_bool = var_37_bool; // 0x352 Mov
	return 2; // 0x354 Return
}


func_1485(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x5ce PushV
	var_219_string = "b11q01"; // 0x5cf MovS
	func_1401(var_218_int, var_219_string); // 0x5d0 NEW_2
	var_220_int = 1; // 0x5d2 PushI
	var_221_bool = var_218_int == var_220_int; // 0x5d3 Eq
	if(var_221_bool == 0) goto Label_1495; // 0x5d4 JumpB
	var_216_bool = 1; // 0x5d5 MovB
	return 0; // 0x5d6 Return
	
Label_1495:
	var_216_bool = 0; // 0x5d7 MovB
	return 0; // 0x5d8 Return
}


func_1104(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x450 PushV
	IsLoaded(var_9_bool); // 0x451 Func
	var_7_bool = var_9_bool; // 0x453 Mov
	return 2; // 0x454 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_228; // 0x56 JumpB
	var_199_bool = 0; // 0x57 PushV
	var_199_bool = 1; // 0x58 MovB
	var_200_bool = 0; // 0x59 PushV
	var_200_bool = 0; // 0x5a MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x5b PushV
	var_202_object = var_1_object; // 0x5c MovT
	func_1473(var_202_object); // 0x5d NEW_2
	if(var_201_bool == 0) goto Label_102; // 0x5f JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x60 PushV
	var_210_object = var_1_object; // 0x61 MovT
	func_1497(var_210_object); // 0x62 NEW_2
	if(var_209_bool == 0) goto Label_102; // 0x64 JumpB
	var_200_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_200_bool == 0) goto Label_118; // 0x66 JumpB
	var_215_bool = 0; // 0x67 PushV
	var_215_bool = 0; // 0x68 MovB
	var_216_bool = 0; var_217_object = Obj(); // 0x69 PushV
	var_217_object = var_1_object; // 0x6a MovT
	func_1485(var_217_object); // 0x6b NEW_2
	if(var_216_bool == 0) goto Label_116; // 0x6d JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x6e PushV
	var_223_object = var_1_object; // 0x6f MovT
	func_1497(var_223_object); // 0x70 NEW_2
	if(var_222_bool == 0) goto Label_116; // 0x72 JumpB
	var_215_bool = 1; // 0x73 MovB
	
Label_116:
	if(var_215_bool == 0) goto Label_118; // 0x74 JumpB
	var_199_bool = 0; // 0x75 MovB
	
Label_118:
	if(var_199_bool == 0) goto Label_144; // 0x76 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x77 PushV
	var_224_object = var_1_object; // 0x78 MovT
	var_225_object = var_0_object; // 0x79 MovT
	func_1449(); // 0x7a NEW_2
	var_228_string = ""; // 0x7c PushV
	var_228_string = "Saveyouall"; // 0x7d MovS
	func_258(var_193_object, var_228_string); // 0x7e NEW_2
	var_245_int = 522101; // 0x80 PushI
	SetMessage(var_245_int); // 0x81 TObjFunc
	ClearReplies(); // 0x83 TObjFunc
	var_246_int = 522102; // 0x85 PushI
	var_247_int = 24452; // 0x86 PushI
	var_248_int = 23269; // 0x87 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x88 TObjFunc
	var_249_int = 522103; // 0x8a PushI
	var_250_int = 24448; // 0x8b PushI
	var_251_int = 23270; // 0x8c PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x8d TObjFunc
	goto Label_228; // 0x8f Jump
	
Label_228:
	var_252_bool = 0; // 0xe4 PushV
	func_1447(var_252_bool); // 0xe5 NEW_2
	if(var_252_bool == 0) goto Label_243; // 0xe7 JumpB
	
Label_232:
	lshWaitForAnimEnd(); // 0xe8 Func
	var_253_string = var_3_string; // 0xea PushT
	if(var_253_string == 0) goto Label_237; // 0xeb JumpB
	goto Label_242; // 0xec Jump
	
Label_242:
	goto Label_257; // 0xf2 Jump
	
Label_257:
	return 0; // 0x101 Return
	
Label_237:
	var_254_string = ""; // 0xed PushV
	var_254_string = var_2_object; // 0xee MovT
	func_1332(var_254_string); // 0xef NEW_2
	goto Label_232; // 0xf1 Jump
	
Label_243:
	var_265_string = "all"; // 0xf3 PushS
	var_266_string = "idle"; // 0xf4 PushS
	PlayAnimation(var_265_string, var_266_string); // 0xf5 Func
	
Label_247:
	WaitForAnimEnd(); // 0xf7 Func
	var_267_string = var_3_string; // 0xf9 PushT
	if(var_267_string == 0) goto Label_252; // 0xfa JumpB
	goto Label_257; // 0xfb Jump
	
Label_252:
	var_268_string = "all"; // 0xfc PushS
	var_269_string = "idle"; // 0xfd PushS
	PlayAnimation(var_268_string, var_269_string); // 0xfe Func
	goto Label_247; // 0x100 Jump
	
Label_144:
	var_270_string = ""; // 0x90 PushV
	var_270_string = "Smile"; // 0x91 MovS
	func_258(var_193_object, var_270_string); // 0x92 NEW_2
	var_271_int = 522104; // 0x94 PushI
	SetMessage(var_271_int); // 0x95 TObjFunc
	ClearReplies(); // 0x97 TObjFunc
	var_272_bool = 0; // 0x99 PushV
	var_272_bool = 0; // 0x9a MovB
	var_273_bool = 0; // 0x9b PushV
	var_273_bool = 0; // 0x9c MovB
	var_274_bool = 0; var_275_object = Obj(); // 0x9d PushV
	var_275_object = var_1_object; // 0x9e MovT
	func_1473(var_275_object); // 0x9f NEW_2
	if(var_274_bool == 0) goto Label_168; // 0xa1 JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0xa2 PushV
	var_277_object = var_1_object; // 0xa3 MovT
	func_1485(var_277_object); // 0xa4 NEW_2
	if(var_276_bool == 0) goto Label_168; // 0xa6 JumpB
	var_273_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_273_bool == 0) goto Label_176; // 0xa8 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0xa9 PushV
	var_279_object = var_1_object; // 0xaa MovT
	func_1509(var_279_object); // 0xab NEW_2
	var_284_bool = var_278_bool == 0; // 0xad Not
	if(var_284_bool == 0) goto Label_176; // 0xae JumpB
	var_272_bool = 1; // 0xaf MovB
	
Label_176:
	if(var_272_bool == 0) goto Label_182; // 0xb0 JumpB
	var_285_int = 523263; // 0xb1 PushI
	var_286_int = 24464; // 0xb2 PushI
	var_287_int = 24463; // 0xb3 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xb4 TObjFunc
	
Label_182:
	var_288_bool = 0; // 0xb6 PushV
	var_288_bool = 0; // 0xb7 MovB
	var_289_bool = 0; var_290_object = Obj(); // 0xb8 PushV
	var_290_object = var_1_object; // 0xb9 MovT
	func_1509(var_290_object); // 0xba NEW_2
	if(var_289_bool == 0) goto Label_195; // 0xbc JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0xbd PushV
	var_292_object = var_1_object; // 0xbe MovT
	func_1521(var_292_object); // 0xbf NEW_2
	if(var_291_bool == 0) goto Label_195; // 0xc1 JumpB
	var_288_bool = 1; // 0xc2 MovB
	
Label_195:
	if(var_288_bool == 0) goto Label_201; // 0xc3 JumpB
	var_297_int = 522105; // 0xc4 PushI
	var_298_int = 24443; // 0xc5 PushI
	var_299_int = 23272; // 0xc6 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xc7 TObjFunc
	
Label_201:
	var_300_bool = 0; // 0xc9 PushV
	var_300_bool = 0; // 0xca MovB
	var_301_bool = 0; var_302_object = Obj(); // 0xcb PushV
	var_302_object = var_1_object; // 0xcc MovT
	func_1533(var_302_object); // 0xcd NEW_2
	if(var_301_bool == 0) goto Label_214; // 0xcf JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0xd0 PushV
	var_308_object = var_1_object; // 0xd1 MovT
	func_1545(var_308_object); // 0xd2 NEW_2
	if(var_307_bool == 0) goto Label_214; // 0xd4 JumpB
	var_300_bool = 1; // 0xd5 MovB
	
Label_214:
	if(var_300_bool == 0) goto Label_220; // 0xd6 JumpB
	var_313_int = 534577; // 0xd7 PushI
	var_314_int = 36216; // 0xd8 PushI
	var_315_int = 36215; // 0xd9 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xda TObjFunc
	
Label_220:
	var_316_int = 523242; // 0xdc PushI
	var_317_int = -1; // 0xdd PushI
	var_318_int = 24442; // 0xde PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xdf TObjFunc
	goto Label_228; // 0xe1 Jump
}


func_1363(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x553 PushV
	var_135_bool = 0; // 0x554 PushV
	func_1447(var_135_bool); // 0x555 NEW_2
	if(var_135_bool == 0) goto Label_1376; // 0x557 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x558 Func
	var_136_bool = var_134_bool; // 0x55a Push
	if(var_136_bool == 0) goto Label_1376; // 0x55b JumpB
	lshPlaySpeech(var_132_string); // 0x55c Func
	var_131_bool = 1; // 0x55e MovB
	return 2; // 0x55f Return
	
Label_1376:
	var_131_bool = 0; // 0x560 MovB
	return 2; // 0x561 Return
}


func_1109(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x455 PushV
	GetPosition(var_50_cvector); // 0x456 ObjFunc
	GetEyesHeight(var_49_float); // 0x458 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x45a PushE
	var_58_float = var_58_float + var_49_float; // 0x45b Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x45c PopE
	GetPosition(var_51_cvector); // 0x45d Func
	GetEyesHeight(var_49_float); // 0x45f Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x461 PushE
	var_59_float = var_59_float + var_49_float; // 0x462 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x463 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x464 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x465 PushE
	var_60_float = 0; // 0x466 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x467 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x468 Or
	var_62_float = sqrt(var_61_int); // 0x469 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x46a Div2
	var_53_cvector = -var_52_cvector; // 0x46b Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x46c Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x46d PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x46e PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x46f Xor2
	func_1391(var_64_cvector, var_65_cvector); // 0x470 NEW_2
	var_72_int = 25; // 0x472 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x473 Mult
	var_74_int = var_63_float + var_73_float; // 0x474 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x475 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x476 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x477 Add2
	IsOverrideActive(var_56_bool); // 0x478 Func
	var_76_bool = var_56_bool; // 0x47a Push
	if(var_76_bool == 0) goto Label_1150; // 0x47b JumpB
	var_37_bool = 0; // 0x47c MovB
	return 18; // 0x47d Return
	
Label_1150:
	StopWorld(); // 0x47e Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x480 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x482 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x483 PushE
	Rotate(var_77_float, var_78_float); // 0x484 Func
	var_79_bool = 0; // 0x486 PushV
	func_1447(var_79_bool); // 0x487 NEW_2
	if(var_79_bool == 0) goto Label_1163; // 0x489 JumpB
	goto Label_1171; // 0x48a Jump
	
Label_1171:
	CameraWaitForPlayFinish(); // 0x493 Func
	ResumeWorld(); // 0x495 Func
	var_37_bool = 1; // 0x497 MovB
	return 18; // 0x498 Return
	
Label_1163:
	var_80_string = "head"; // 0x48b PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x48c Func
	var_81_bool = var_57_bool; // 0x48e Push
	if(var_81_bool == 0) goto Label_1171; // 0x48f JumpB
	var_82_string = "head"; // 0x490 PushS
	LookAsyncCamera(var_82_string); // 0x491 Func
}


func_854(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x356 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x357 PushE
	RotateAsync(var_84_float, var_85_float); // 0x358 Func
	return 0; // 0x35a Return
}


func_1497(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x5da PushV
	var_212_string = "oob11Klara1"; // 0x5db MovS
	func_1401(var_211_int, var_212_string); // 0x5dc NEW_2
	var_213_int = 0; // 0x5de PushI
	var_214_bool = var_211_int == var_213_int; // 0x5df Eq
	if(var_214_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_209_bool = 1; // 0x5e1 MovB
	return 0; // 0x5e2 Return
	
Label_1507:
	var_209_bool = 0; // 0x5e3 MovB
	return 0; // 0x5e4 Return
}


func_859(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x35b PushV
	var_20_string = "player"; // 0x35c PushS
	FindActor(var_18_object, var_20_string); // 0x35d Func
	var_21_bool = var_18_object == 0; // 0x35f Not
	if(var_21_bool == 0) goto Label_867; // 0x360 JumpB
	var_15_bool = 0; // 0x361 MovB
	return 4; // 0x362 Return
	
Label_867:
	var_22_float = 0; var_23_object = Obj(); // 0x363 PushV
	var_23_object = var_18_object; // 0x364 Mov
	func_1077(var_23_object); // 0x365 NEW_2
	var_30_float = 90000.0; // 0x367 PushF
	var_31_bool = var_22_float > var_30_float; // 0x368 GT
	if(var_31_bool == 0) goto Label_876; // 0x369 JumpB
	var_15_bool = 0; // 0x36a MovB
	return 4; // 0x36b Return
	
Label_876:
	CanSee(var_19_bool, var_18_object); // 0x36c Func
	var_15_bool = var_19_bool; // 0x36e Mov
	return 4; // 0x36f Return
}


func_1378()
{
	var_10_bool = 0; // 0x562 PushV
	func_1447(var_10_bool); // 0x563 NEW_2
	if(var_10_bool == 0) goto Label_1384; // 0x565 JumpB
	lshStopSpeech(); // 0x566 Func
	
Label_1384:
	return 0; // 0x568 Return
}


func_1252(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x4e4 PushV
	var_115_string = "c"; // 0x4e5 MovS
	var_116_int = 0; // 0x4e6 MovI
	
Label_1255:
	var_120_int = 1; // 0x4e7 PushI
	if(var_120_int == 0) goto Label_1268; // 0x4e8 JumpB
	var_121_int = 1; // 0x4e9 PushI
	var_122_int = var_116_int + var_121_int; // 0x4ea Add
	var_123_int = var_115_string + var_122_int; // 0x4eb Add
	HasProperty(var_123_int, var_117_bool); // 0x4ec ObjFunc
	var_124_bool = var_117_bool == 0; // 0x4ee Not
	if(var_124_bool == 0) goto Label_1265; // 0x4ef JumpB
	goto Label_1268; // 0x4f0 Jump
	
Label_1268:
	var_125_bool = var_116_int == 0; // 0x4f4 Not
	if(var_125_bool == 0) goto Label_1272; // 0x4f5 JumpB
	var_108_bool = 0; // 0x4f6 MovB
	return 10; // 0x4f7 Return
	
Label_1272:
	var_118_int = 0; // 0x4f8 MovI
	var_126_int = 1; // 0x4f9 PushI
	var_127_bool = var_116_int > var_126_int; // 0x4fa GT
	if(var_127_bool == 0) goto Label_1278; // 0x4fb JumpB
	irand(var_118_int, var_116_int); // 0x4fc Func
	
Label_1278:
	var_128_int = 1; // 0x4fe PushI
	var_129_int = var_118_int + var_128_int; // 0x4ff Add
	var_130_int = var_115_string + var_129_int; // 0x500 Add
	GetProperty(var_130_int, var_119_string); // 0x501 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x503 PushV
	var_132_string = var_119_string; // 0x504 Mov
	func_1363(var_131_bool, var_132_string); // 0x505 NEW_2
	var_108_bool = var_131_bool; // 0x506 Mov
	return 10; // 0x508 Return
	
Label_1265:
	var_137_int = 1; // 0x4f1 PushI
	var_116_int = var_116_int + var_137_int; // 0x4f2 Add2
	goto Label_1255; // 0x4f3 Jump
}


func_1509(var_278_bool)
{
	var_280_int = 0; var_281_string = ""; // 0x5e6 PushV
	var_281_string = "b11q01KlaraWillHelp"; // 0x5e7 MovS
	func_1401(var_280_int, var_281_string); // 0x5e8 NEW_2
	var_282_int = 0; // 0x5ea PushI
	var_283_bool = var_280_int != var_282_int; // 0x5eb Neq
	if(var_283_bool == 0) goto Label_1519; // 0x5ec JumpB
	var_278_bool = 1; // 0x5ed MovB
	return 0; // 0x5ee Return
	
Label_1519:
	var_278_bool = 0; // 0x5ef MovB
	return 0; // 0x5f0 Return
}


func_1385(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x569 PushV
	self(var_101_object); // 0x56a Func
	var_99_object = var_101_object; // 0x56c Mov
	return 2; // 0x56d Return
}


func_1001()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x3e9 PushV
	WaitForAnimEnd(); // 0x3ea Func
	var_23_bool = 0; // 0x3ec PushV
	func_1104(var_23_bool); // 0x3ed NEW_2
	var_24_bool = var_23_bool == 0; // 0x3ef Not
	if(var_24_bool == 0) goto Label_1010; // 0x3f0 JumpB
	return 12; // 0x3f1 Return
	
Label_1010:
	var_25_int = 0; // 0x3f2 PushV
	func_1422(var_25_int); // 0x3f3 NEW_2
	var_17_int = var_25_int; // 0x3f4 Mov
	var_18_int = 0; // 0x3f6 MovI
	
Label_1015:
	var_38_bool = 0; // 0x3f7 PushV
	var_38_bool = 0; // 0x3f8 MovB
	var_39_int = 5; // 0x3f9 PushI
	var_40_bool = var_18_int < var_39_int; // 0x3fa LT
	if(var_40_bool == 0) goto Label_1025; // 0x3fb JumpB
	var_41_bool = 0; // 0x3fc PushV
	func_1104(var_41_bool); // 0x3fd NEW_2
	if(var_41_bool == 0) goto Label_1025; // 0x3ff JumpB
	var_38_bool = 1; // 0x400 MovB
	
Label_1025:
	if(var_38_bool == 0) goto Label_1067; // 0x401 JumpB
	var_42_bool = var_17_int == 0; // 0x402 Not
	if(var_42_bool == 0) goto Label_1035; // 0x403 JumpB
	var_43_int = 3; // 0x404 PushI
	Sleep(var_43_int, var_19_bool); // 0x405 Func
	var_44_bool = var_19_bool == 0; // 0x407 Not
	if(var_44_bool == 0) goto Label_1034; // 0x408 JumpB
	goto Label_1067; // 0x409 Jump
	
Label_1067:
	ResetAAS(); // 0x42b Func
	return 12; // 0x42d Return
	
Label_1034:
	goto Label_1056; // 0x40a Jump
	
Label_1056:
	var_45_bool = 0; // 0x420 PushV
	func_1070(var_45_bool); // 0x421 NEW_2
	var_46_bool = var_45_bool == 0; // 0x423 Not
	if(var_46_bool == 0) goto Label_1062; // 0x424 JumpB
	goto Label_1067; // 0x425 Jump
	
Label_1062:
	ResetAAS(); // 0x426 Func
	var_47_int = 1; // 0x428 PushI
	var_18_int = var_18_int + var_47_int; // 0x429 Add2
	goto Label_1015; // 0x42a Jump
	
Label_1035:
	irand(var_20_int, var_17_int); // 0x40b Func
	var_48_int = 5; // 0x40d PushI
	irand(var_21_int, var_48_int); // 0x40e Func
	var_49_int = 0; // 0x410 PushI
	var_50_bool = var_21_int != var_49_int; // 0x411 Neq
	if(var_50_bool == 0) goto Label_1044; // 0x412 JumpB
	var_20_int = 0; // 0x413 MovI
	
Label_1044:
	var_51_string = "all"; // 0x414 PushS
	var_52_string = ""; var_53_int = 0; // 0x415 PushV
	var_53_int = var_20_int; // 0x416 Mov
	func_1415(var_52_string, var_53_int); // 0x417 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x419 Func
	WaitForAnimEnd(var_22_bool); // 0x41b Func
	var_54_bool = var_22_bool == 0; // 0x41d Not
	if(var_54_bool == 0) goto Label_1056; // 0x41e JumpB
	goto Label_1067; // 0x41f Jump
}


func_1391(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x56f PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x570 Or
	var_68_float = sqrt(var_69_int); // 0x571 Sqrt2
	var_70_float = 0.0; // 0x572 PushF
	var_71_bool = var_68_float < var_70_float; // 0x573 LT
	if(var_71_bool == 0) goto Label_1399; // 0x574 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x575 MovV
	return 2; // 0x576 Return
	
Label_1399:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x577 Div2
	return 2; // 0x578 Return
}


func_1521(var_291_bool)
{
	var_293_int = 0; var_294_string = ""; // 0x5f2 PushV
	var_294_string = "oob11Klara2"; // 0x5f3 MovS
	func_1401(var_293_int, var_294_string); // 0x5f4 NEW_2
	var_295_int = 0; // 0x5f6 PushI
	var_296_bool = var_293_int == var_295_int; // 0x5f7 Eq
	if(var_296_bool == 0) goto Label_1531; // 0x5f8 JumpB
	var_291_bool = 1; // 0x5f9 MovB
	return 0; // 0x5fa Return
	
Label_1531:
	var_291_bool = 0; // 0x5fb MovB
	return 0; // 0x5fc Return
}


func_881()
{
	var_329_float = 0; var_330_float = 0; // 0x371 PushV
	var_331_int = 8; // 0x372 PushI
	var_332_int = 16; // 0x373 PushI
	rand(var_330_float, var_331_int, var_332_int); // 0x374 Func
	var_333_int = 10; // 0x376 PushI
	SetTimer(var_333_int, var_330_float); // 0x377 Func
	return 2; // 0x379 Return
}


func_1401(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0; // 0x579 PushV
	GetVariable(var_204_string, var_206_int); // 0x57a Func
	var_203_int = var_206_int; // 0x57c Mov
	return 2; // 0x57d Return
}


func_890()
{
	var_328_int = 10; // 0x37a PushI
	KillTimer(var_328_int); // 0x37b Func
	return 0; // 0x37d Return
}


func_1533(var_301_bool)
{
	var_303_int = 0; var_304_string = ""; // 0x5fe PushV
	var_304_string = "b9KlaraLetter"; // 0x5ff MovS
	func_1401(var_303_int, var_304_string); // 0x600 NEW_2
	var_305_int = 0; // 0x602 PushI
	var_306_bool = var_303_int != var_305_int; // 0x603 Neq
	if(var_306_bool == 0) goto Label_1543; // 0x604 JumpB
	var_301_bool = 1; // 0x605 MovB
	return 0; // 0x606 Return
	
Label_1543:
	var_301_bool = 0; // 0x607 MovB
	return 0; // 0x608 Return
}


func_1406(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x57e PushV
	GetGameTime(var_154_float); // 0x57f Func
	var_155_int = 1; // 0x581 PushI
	var_156_int = 0; // 0x582 PushV
	var_157_int = 24; // 0x583 PushI
	var_156_int = var_154_float / var_154_float; // 0x584 Div2
	var_152_int = var_155_int + var_156_int; // 0x585 Add2
	return 2; // 0x586 Return
}


