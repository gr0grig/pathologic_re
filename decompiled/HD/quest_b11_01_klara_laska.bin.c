task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0x119 PushI
	if(var_9_int == 0) goto Label_808; // 0x11a JumpB
	func_1413(); // 0x11c NEW_2
	var_11_int = 24461; // 0x11e PushI
	var_12_bool = var_8_bool == var_11_int; // 0x11f Eq
	if(var_12_bool == 0) goto Label_294; // 0x120 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0x121 PushV
	var_13_object = var_1_object; // 0x122 MovT
	var_14_object = var_0_object; // 0x123 MovT
	func_1490(); // 0x124 NEW_2
	
Label_294:
	var_17_int = 24478; // 0x126 PushI
	var_18_bool = var_8_bool == var_17_int; // 0x127 Eq
	if(var_18_bool == 0) goto Label_302; // 0x128 JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0x129 PushV
	var_19_object = var_1_object; // 0x12a MovT
	var_20_object = var_0_object; // 0x12b MovT
	func_1490(); // 0x12c NEW_2
	
Label_302:
	var_21_int = 24467; // 0x12e PushI
	var_22_bool = var_8_bool == var_21_int; // 0x12f Eq
	if(var_22_bool == 0) goto Label_310; // 0x130 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x131 PushV
	var_23_object = var_1_object; // 0x132 MovT
	var_24_object = var_0_object; // 0x133 MovT
	func_1490(); // 0x134 NEW_2
	
Label_310:
	var_25_int = 24468; // 0x136 PushI
	var_26_bool = var_8_bool == var_25_int; // 0x137 Eq
	if(var_26_bool == 0) goto Label_318; // 0x138 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x139 PushV
	var_27_object = var_1_object; // 0x13a MovT
	var_28_object = var_0_object; // 0x13b MovT
	func_1490(); // 0x13c NEW_2
	
Label_318:
	var_29_int = 23272; // 0x13e PushI
	var_30_bool = var_8_bool == var_29_int; // 0x13f Eq
	if(var_30_bool == 0) goto Label_326; // 0x140 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x141 PushV
	var_31_object = var_1_object; // 0x142 MovT
	var_32_object = var_0_object; // 0x143 MovT
	func_1496(); // 0x144 NEW_2
	
Label_326:
	var_35_int = 36215; // 0x146 PushI
	var_36_bool = var_8_bool == var_35_int; // 0x147 Eq
	if(var_36_bool == 0) goto Label_334; // 0x148 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x149 PushV
	var_37_object = var_1_object; // 0x14a MovT
	var_38_object = var_0_object; // 0x14b MovT
	func_1502(); // 0x14c NEW_2
	
Label_334:
	var_41_int = 23268; // 0x14e PushI
	var_42_bool = var_7_cvector == var_41_int; // 0x14f Eq
	if(var_42_bool == 0) goto Label_476; // 0x150 JumpB
	var_43_bool = 0; // 0x151 PushV
	var_43_bool = 1; // 0x152 MovB
	var_44_bool = 0; // 0x153 PushV
	var_44_bool = 0; // 0x154 MovB
	var_45_bool = 0; var_46_object = Obj(); // 0x155 PushV
	var_46_object = var_1_object; // 0x156 MovT
	func_1508(var_46_object); // 0x157 NEW_2
	if(var_45_bool == 0) goto Label_352; // 0x159 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x15a PushV
	var_54_object = var_1_object; // 0x15b MovT
	func_1532(var_54_object); // 0x15c NEW_2
	if(var_53_bool == 0) goto Label_352; // 0x15e JumpB
	var_44_bool = 1; // 0x15f MovB
	
Label_352:
	if(var_44_bool == 0) goto Label_368; // 0x160 JumpB
	var_59_bool = 0; // 0x161 PushV
	var_59_bool = 0; // 0x162 MovB
	var_60_bool = 0; var_61_object = Obj(); // 0x163 PushV
	var_61_object = var_1_object; // 0x164 MovT
	func_1520(var_61_object); // 0x165 NEW_2
	if(var_60_bool == 0) goto Label_366; // 0x167 JumpB
	var_66_bool = 0; var_67_object = Obj(); // 0x168 PushV
	var_67_object = var_1_object; // 0x169 MovT
	func_1532(var_67_object); // 0x16a NEW_2
	if(var_66_bool == 0) goto Label_366; // 0x16c JumpB
	var_59_bool = 1; // 0x16d MovB
	
Label_366:
	if(var_59_bool == 0) goto Label_368; // 0x16e JumpB
	var_43_bool = 0; // 0x16f MovB
	
Label_368:
	if(var_43_bool == 0) goto Label_394; // 0x170 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x171 PushV
	var_68_object = var_1_object; // 0x172 MovT
	var_69_object = var_0_object; // 0x173 MovT
	func_1484(); // 0x174 NEW_2
	var_72_string = ""; // 0x176 PushV
	var_72_string = "Saveyouall"; // 0x177 MovS
	func_258(var_8_bool, var_72_string); // 0x178 NEW_2
	var_89_int = 522101; // 0x17a PushI
	SetMessage(var_89_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_90_int = 522102; // 0x17f PushI
	var_91_int = 24452; // 0x180 PushI
	var_92_int = 23269; // 0x181 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x182 TObjFunc
	var_93_int = 522103; // 0x184 PushI
	var_94_int = 24448; // 0x185 PushI
	var_95_int = 23270; // 0x186 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_96_string = ""; // 0x18a PushV
	var_96_string = "Smile"; // 0x18b MovS
	func_258(var_8_bool, var_96_string); // 0x18c NEW_2
	var_97_int = 522104; // 0x18e PushI
	SetMessage(var_97_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_98_bool = 0; // 0x193 PushV
	var_98_bool = 0; // 0x194 MovB
	var_99_bool = 0; // 0x195 PushV
	var_99_bool = 0; // 0x196 MovB
	var_100_bool = 0; var_101_object = Obj(); // 0x197 PushV
	var_101_object = var_1_object; // 0x198 MovT
	func_1508(var_101_object); // 0x199 NEW_2
	if(var_100_bool == 0) goto Label_418; // 0x19b JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x19c PushV
	var_103_object = var_1_object; // 0x19d MovT
	func_1520(var_103_object); // 0x19e NEW_2
	if(var_102_bool == 0) goto Label_418; // 0x1a0 JumpB
	var_99_bool = 1; // 0x1a1 MovB
	
Label_418:
	if(var_99_bool == 0) goto Label_426; // 0x1a2 JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x1a3 PushV
	var_105_object = var_1_object; // 0x1a4 MovT
	func_1544(var_105_object); // 0x1a5 NEW_2
	var_110_bool = var_104_bool == 0; // 0x1a7 Not
	if(var_110_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_98_bool = 1; // 0x1a9 MovB
	
Label_426:
	if(var_98_bool == 0) goto Label_432; // 0x1aa JumpB
	var_111_int = 523263; // 0x1ab PushI
	var_112_int = 24464; // 0x1ac PushI
	var_113_int = 24463; // 0x1ad PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x1ae TObjFunc
	
Label_432:
	var_114_bool = 0; // 0x1b0 PushV
	var_114_bool = 0; // 0x1b1 MovB
	var_115_bool = 0; var_116_object = Obj(); // 0x1b2 PushV
	var_116_object = var_1_object; // 0x1b3 MovT
	func_1544(var_116_object); // 0x1b4 NEW_2
	if(var_115_bool == 0) goto Label_445; // 0x1b6 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x1b7 PushV
	var_118_object = var_1_object; // 0x1b8 MovT
	func_1556(var_118_object); // 0x1b9 NEW_2
	if(var_117_bool == 0) goto Label_445; // 0x1bb JumpB
	var_114_bool = 1; // 0x1bc MovB
	
Label_445:
	if(var_114_bool == 0) goto Label_451; // 0x1bd JumpB
	var_123_int = 522105; // 0x1be PushI
	var_124_int = 24443; // 0x1bf PushI
	var_125_int = 23272; // 0x1c0 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x1c1 TObjFunc
	
Label_451:
	var_126_bool = 0; // 0x1c3 PushV
	var_126_bool = 0; // 0x1c4 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x1c5 PushV
	var_128_object = var_1_object; // 0x1c6 MovT
	func_1568(var_128_object); // 0x1c7 NEW_2
	if(var_127_bool == 0) goto Label_464; // 0x1c9 JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x1ca PushV
	var_134_object = var_1_object; // 0x1cb MovT
	func_1580(var_134_object); // 0x1cc NEW_2
	if(var_133_bool == 0) goto Label_464; // 0x1ce JumpB
	var_126_bool = 1; // 0x1cf MovB
	
Label_464:
	if(var_126_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_139_int = 534577; // 0x1d1 PushI
	var_140_int = 36216; // 0x1d2 PushI
	var_141_int = 36215; // 0x1d3 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1d4 TObjFunc
	
Label_470:
	var_142_int = 523242; // 0x1d6 PushI
	var_143_int = -1; // 0x1d7 PushI
	var_144_int = 24442; // 0x1d8 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_145_int = 36216; // 0x1dc PushI
	var_146_bool = var_7_cvector == var_145_int; // 0x1dd Eq
	if(var_146_bool == 0) goto Label_499; // 0x1de JumpB
	var_147_string = ""; // 0x1df PushV
	var_147_string = "Neutral"; // 0x1e0 MovS
	func_258(var_8_bool, var_147_string); // 0x1e1 NEW_2
	var_148_int = 534578; // 0x1e3 PushI
	SetMessage(var_148_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_149_int = 534579; // 0x1e8 PushI
	var_150_int = 36219; // 0x1e9 PushI
	var_151_int = 36217; // 0x1ea PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1eb TObjFunc
	var_152_int = 534580; // 0x1ed PushI
	var_153_int = -1; // 0x1ee PushI
	var_154_int = 36218; // 0x1ef PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1f0 TObjFunc
	return 0; // 0x1f2 Return
	
Label_499:
	var_155_int = 36219; // 0x1f3 PushI
	var_156_bool = var_7_cvector == var_155_int; // 0x1f4 Eq
	if(var_156_bool == 0) goto Label_522; // 0x1f5 JumpB
	var_157_string = ""; // 0x1f6 PushV
	var_157_string = "Saveyouall"; // 0x1f7 MovS
	func_258(var_8_bool, var_157_string); // 0x1f8 NEW_2
	var_158_int = 534581; // 0x1fa PushI
	SetMessage(var_158_int); // 0x1fb TObjFunc
	ClearReplies(); // 0x1fd TObjFunc
	var_159_int = 534582; // 0x1ff PushI
	var_160_int = -1; // 0x200 PushI
	var_161_int = 36220; // 0x201 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x202 TObjFunc
	var_162_int = 534583; // 0x204 PushI
	var_163_int = -1; // 0x205 PushI
	var_164_int = 36221; // 0x206 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x207 TObjFunc
	return 0; // 0x209 Return
	
Label_522:
	var_165_int = 24443; // 0x20a PushI
	var_166_bool = var_7_cvector == var_165_int; // 0x20b Eq
	if(var_166_bool == 0) goto Label_545; // 0x20c JumpB
	var_167_string = ""; // 0x20d PushV
	var_167_string = "Sly"; // 0x20e MovS
	func_258(var_8_bool, var_167_string); // 0x20f NEW_2
	var_168_int = 523243; // 0x211 PushI
	SetMessage(var_168_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_169_int = 523244; // 0x216 PushI
	var_170_int = -1; // 0x217 PushI
	var_171_int = 24444; // 0x218 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x219 TObjFunc
	var_172_int = 523245; // 0x21b PushI
	var_173_int = 24446; // 0x21c PushI
	var_174_int = 24445; // 0x21d PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_175_int = 24446; // 0x221 PushI
	var_176_bool = var_7_cvector == var_175_int; // 0x222 Eq
	if(var_176_bool == 0) goto Label_563; // 0x223 JumpB
	var_177_string = ""; // 0x224 PushV
	var_177_string = "Sly"; // 0x225 MovS
	func_258(var_8_bool, var_177_string); // 0x226 NEW_2
	var_178_int = 523246; // 0x228 PushI
	SetMessage(var_178_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_179_int = 523247; // 0x22d PushI
	var_180_int = -1; // 0x22e PushI
	var_181_int = 24447; // 0x22f PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x230 TObjFunc
	return 0; // 0x232 Return
	
Label_563:
	var_182_int = 24464; // 0x233 PushI
	var_183_bool = var_7_cvector == var_182_int; // 0x234 Eq
	if(var_183_bool == 0) goto Label_581; // 0x235 JumpB
	var_184_string = ""; // 0x236 PushV
	var_184_string = "Neutral"; // 0x237 MovS
	func_258(var_8_bool, var_184_string); // 0x238 NEW_2
	var_185_int = 523264; // 0x23a PushI
	SetMessage(var_185_int); // 0x23b TObjFunc
	ClearReplies(); // 0x23d TObjFunc
	var_186_int = 523265; // 0x23f PushI
	var_187_int = 24466; // 0x240 PushI
	var_188_int = 24465; // 0x241 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_189_int = 24466; // 0x245 PushI
	var_190_bool = var_7_cvector == var_189_int; // 0x246 Eq
	if(var_190_bool == 0) goto Label_604; // 0x247 JumpB
	var_191_string = ""; // 0x248 PushV
	var_191_string = "Saveyouall"; // 0x249 MovS
	func_258(var_8_bool, var_191_string); // 0x24a NEW_2
	var_192_int = 523266; // 0x24c PushI
	SetMessage(var_192_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_193_int = 523267; // 0x251 PushI
	var_194_int = -1; // 0x252 PushI
	var_195_int = 24467; // 0x253 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x254 TObjFunc
	var_196_int = 523268; // 0x256 PushI
	var_197_int = -1; // 0x257 PushI
	var_198_int = 24468; // 0x258 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x259 TObjFunc
	return 0; // 0x25b Return
	
Label_604:
	var_199_int = 24448; // 0x25c PushI
	var_200_bool = var_7_cvector == var_199_int; // 0x25d Eq
	if(var_200_bool == 0) goto Label_627; // 0x25e JumpB
	var_201_string = ""; // 0x25f PushV
	var_201_string = "Smile"; // 0x260 MovS
	func_258(var_8_bool, var_201_string); // 0x261 NEW_2
	var_202_int = 523248; // 0x263 PushI
	SetMessage(var_202_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_203_int = 523250; // 0x268 PushI
	var_204_int = 24452; // 0x269 PushI
	var_205_int = 24450; // 0x26a PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x26b TObjFunc
	var_206_int = 523249; // 0x26d PushI
	var_207_int = 24452; // 0x26e PushI
	var_208_int = 24449; // 0x26f PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_209_int = 24452; // 0x273 PushI
	var_210_bool = var_7_cvector == var_209_int; // 0x274 Eq
	if(var_210_bool == 0) goto Label_645; // 0x275 JumpB
	var_211_string = ""; // 0x276 PushV
	var_211_string = "Saveyouall"; // 0x277 MovS
	func_258(var_8_bool, var_211_string); // 0x278 NEW_2
	var_212_int = 523252; // 0x27a PushI
	SetMessage(var_212_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_213_int = 523253; // 0x27f PushI
	var_214_int = 24451; // 0x280 PushI
	var_215_int = 24453; // 0x281 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_216_int = 24451; // 0x285 PushI
	var_217_bool = var_7_cvector == var_216_int; // 0x286 Eq
	if(var_217_bool == 0) goto Label_668; // 0x287 JumpB
	var_218_string = ""; // 0x288 PushV
	var_218_string = "Neutral"; // 0x289 MovS
	func_258(var_8_bool, var_218_string); // 0x28a NEW_2
	var_219_int = 523251; // 0x28c PushI
	SetMessage(var_219_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_220_int = 523254; // 0x291 PushI
	var_221_int = 24456; // 0x292 PushI
	var_222_int = 24454; // 0x293 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x294 TObjFunc
	var_223_int = 523255; // 0x296 PushI
	var_224_int = 24469; // 0x297 PushI
	var_225_int = 24455; // 0x298 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x299 TObjFunc
	return 0; // 0x29b Return
	
Label_668:
	var_226_int = 24469; // 0x29c PushI
	var_227_bool = var_7_cvector == var_226_int; // 0x29d Eq
	if(var_227_bool == 0) goto Label_686; // 0x29e JumpB
	var_228_string = ""; // 0x29f PushV
	var_228_string = "Sly"; // 0x2a0 MovS
	func_258(var_8_bool, var_228_string); // 0x2a1 NEW_2
	var_229_int = 523269; // 0x2a3 PushI
	SetMessage(var_229_int); // 0x2a4 TObjFunc
	ClearReplies(); // 0x2a6 TObjFunc
	var_230_int = 523270; // 0x2a8 PushI
	var_231_int = 24456; // 0x2a9 PushI
	var_232_int = 24470; // 0x2aa PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x2ab TObjFunc
	return 0; // 0x2ad Return
	
Label_686:
	var_233_int = 24456; // 0x2ae PushI
	var_234_bool = var_7_cvector == var_233_int; // 0x2af Eq
	if(var_234_bool == 0) goto Label_709; // 0x2b0 JumpB
	var_235_string = ""; // 0x2b1 PushV
	var_235_string = "Neutral"; // 0x2b2 MovS
	func_258(var_8_bool, var_235_string); // 0x2b3 NEW_2
	var_236_int = 523256; // 0x2b5 PushI
	SetMessage(var_236_int); // 0x2b6 TObjFunc
	ClearReplies(); // 0x2b8 TObjFunc
	var_237_int = 523257; // 0x2ba PushI
	var_238_int = 24458; // 0x2bb PushI
	var_239_int = 24457; // 0x2bc PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2bd TObjFunc
	var_240_int = 523271; // 0x2bf PushI
	var_241_int = 24473; // 0x2c0 PushI
	var_242_int = 24472; // 0x2c1 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x2c2 TObjFunc
	return 0; // 0x2c4 Return
	
Label_709:
	var_243_int = 24473; // 0x2c5 PushI
	var_244_bool = var_7_cvector == var_243_int; // 0x2c6 Eq
	if(var_244_bool == 0) goto Label_732; // 0x2c7 JumpB
	var_245_string = ""; // 0x2c8 PushV
	var_245_string = "Sly"; // 0x2c9 MovS
	func_258(var_8_bool, var_245_string); // 0x2ca NEW_2
	var_246_int = 523272; // 0x2cc PushI
	SetMessage(var_246_int); // 0x2cd TObjFunc
	ClearReplies(); // 0x2cf TObjFunc
	var_247_int = 523273; // 0x2d1 PushI
	var_248_int = 24475; // 0x2d2 PushI
	var_249_int = 24474; // 0x2d3 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x2d4 TObjFunc
	var_250_int = 523275; // 0x2d6 PushI
	var_251_int = 24475; // 0x2d7 PushI
	var_252_int = 24476; // 0x2d8 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x2d9 TObjFunc
	return 0; // 0x2db Return
	
Label_732:
	var_253_int = 24475; // 0x2dc PushI
	var_254_bool = var_7_cvector == var_253_int; // 0x2dd Eq
	if(var_254_bool == 0) goto Label_755; // 0x2de JumpB
	var_255_string = ""; // 0x2df PushV
	var_255_string = "Sly"; // 0x2e0 MovS
	func_258(var_8_bool, var_255_string); // 0x2e1 NEW_2
	var_256_int = 523274; // 0x2e3 PushI
	SetMessage(var_256_int); // 0x2e4 TObjFunc
	ClearReplies(); // 0x2e6 TObjFunc
	var_257_int = 523276; // 0x2e8 PushI
	var_258_int = -1; // 0x2e9 PushI
	var_259_int = 24478; // 0x2ea PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x2eb TObjFunc
	var_260_int = 523277; // 0x2ed PushI
	var_261_int = -1; // 0x2ee PushI
	var_262_int = 24479; // 0x2ef PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x2f0 TObjFunc
	return 0; // 0x2f2 Return
	
Label_755:
	var_263_int = 24458; // 0x2f3 PushI
	var_264_bool = var_7_cvector == var_263_int; // 0x2f4 Eq
	if(var_264_bool == 0) goto Label_773; // 0x2f5 JumpB
	var_265_string = ""; // 0x2f6 PushV
	var_265_string = "Neutral"; // 0x2f7 MovS
	func_258(var_8_bool, var_265_string); // 0x2f8 NEW_2
	var_266_int = 523258; // 0x2fa PushI
	SetMessage(var_266_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_267_int = 523259; // 0x2ff PushI
	var_268_int = 24460; // 0x300 PushI
	var_269_int = 24459; // 0x301 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x302 TObjFunc
	return 0; // 0x304 Return
	
Label_773:
	var_270_int = 24460; // 0x305 PushI
	var_271_bool = var_7_cvector == var_270_int; // 0x306 Eq
	if(var_271_bool == 0) goto Label_796; // 0x307 JumpB
	var_272_string = ""; // 0x308 PushV
	var_272_string = "Sly"; // 0x309 MovS
	func_258(var_8_bool, var_272_string); // 0x30a NEW_2
	var_273_int = 523260; // 0x30c PushI
	SetMessage(var_273_int); // 0x30d TObjFunc
	ClearReplies(); // 0x30f TObjFunc
	var_274_int = 523261; // 0x311 PushI
	var_275_int = -1; // 0x312 PushI
	var_276_int = 24461; // 0x313 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x314 TObjFunc
	var_277_int = 523262; // 0x316 PushI
	var_278_int = -1; // 0x317 PushI
	var_279_int = 24462; // 0x318 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x319 TObjFunc
	return 0; // 0x31b Return
	
Label_796:
	var_3_string = 1; // 0x31c TMovB
	var_280_bool = 0; // 0x31d PushV
	func_1482(var_280_bool); // 0x31e NEW_2
	if(var_280_bool == 0) goto Label_804; // 0x320 JumpB
	lshStopAnimation(); // 0x321 Func
	goto Label_806; // 0x323 Jump
	
Label_806:
	return 0; // 0x326 Return
	
Label_804:
	StopAnimation(); // 0x324 Func
	
Label_808:
	return 0; // 0x328 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x335 PushV
	var_10_string = "cleanup"; // 0x336 PushS
	var_11_bool = var_7_string == var_10_string; // 0x337 Eq
	if(var_11_bool == 0) goto Label_836; // 0x338 JumpB
	var_1_object = 1; // 0x339 TMovB
	IsLoaded(var_9_bool); // 0x33a Func
	var_12_bool = var_9_bool == 0; // 0x33c Not
	if(var_12_bool == 0) goto Label_835; // 0x33d JumpB
	var_13_object = Obj(); // 0x33e PushV
	func_1420(var_13_object); // 0x33f NEW_2
	RemoveActor(var_13_object); // 0x341 Func
	
Label_835:
	goto Label_840; // 0x343 Jump
	
Label_840:
	return 2; // 0x348 Return
	
Label_836:
	var_16_string = "restore"; // 0x344 PushS
	var_17_bool = var_7_string == var_16_string; // 0x345 Eq
	if(var_17_bool == 0) goto Label_840; // 0x346 JumpB
	var_1_object = 0; // 0x347 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x349 PushT
	if(var_7_object == 0) goto Label_850; // 0x34a JumpB
	var_8_object = Obj(); // 0x34b PushV
	func_1420(var_8_object); // 0x34c NEW_2
	RemoveActor(var_8_object); // 0x34e Func
	Hold(); // 0x350 Func
	
Label_850:
	func_965(); // 0x353 NEW_2
	return 0; // 0x355 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_980(); // 0x357 NEW_2
	return 0; // 0x359 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x3a0 PushI
	var_9_bool = var_7_int == var_8_int; // 0x3a1 Eq
	if(var_9_bool == 0) goto Label_964; // 0x3a2 JumpB
	func_923(); // 0x3a4 NEW_2
	var_11_bool = 0; // 0x3a6 PushV
	var_11_bool = 0; // 0x3a7 MovB
	var_12_bool = 0; // 0x3a8 PushV
	func_1137(var_12_bool); // 0x3a9 NEW_2
	if(var_12_bool == 0) goto Label_945; // 0x3ab JumpB
	var_15_bool = 0; // 0x3ac PushV
	func_892(var_15_bool); // 0x3ad NEW_2
	if(var_15_bool == 0) goto Label_945; // 0x3af JumpB
	var_11_bool = 1; // 0x3b0 MovB
	
Label_945:
	if(var_11_bool == 0) goto Label_958; // 0x3b1 JumpB
	var_32_bool = 0; // 0x3b2 PushV
	func_872(var_32_bool); // 0x3b3 NEW_2
	if(var_32_bool == 0) goto Label_957; // 0x3b5 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x3b6 PushV
	var_53_object = Obj(); // 0x3b7 PushV
	func_1420(var_53_object); // 0x3b8 NEW_2
	var_52_object = var_53_object; // 0x3b9 Mov
	func_1287(var_52_object); // 0x3bb NEW_2
	
Label_957:
	goto Label_964; // 0x3bd Jump
	
Label_964:
	return 0; // 0x3c4 Return
	
Label_958:
	func_887(var_7_int); // 0x3bf NEW_2
	func_914(); // 0x3c2 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x3e2 Push
	if(var_8_bool == 0) goto Label_1000; // 0x3e3 JumpB
	func_914(); // 0x3e5 NEW_2
	goto Label_1004; // 0x3e7 Jump
	
Label_1004:
	return 0; // 0x3ec Return
	
Label_1000:
	var_14_string = ""; // 0x3e8 PushV
	var_14_string = "Neutral"; // 0x3e9 MovS
	func_1367(var_14_string); // 0x3ea NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3ed PushV
	IsOverrideActive(var_9_bool); // 0x3ee Func
	var_10_bool = var_9_bool == 0; // 0x3f0 Not
	if(var_10_bool == 0) goto Label_1033; // 0x3f1 JumpB
	EventDisable(0); // 0x3f2 EventDisable
	func_1105(); // 0x3f4 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x3f6 PushV
	var_12_object = var_7_object; // 0x3f7 Mov
	func_1128(var_12_object); // 0x3f8 NEW_2
	EventEnable(0); // 0x3fa EventEnable
	var_25_object = Obj(); // 0x3fb PushV
	var_25_object = var_7_object; // 0x3fc Mov
	func_809(var_25_object); // 0x3fd NEW_2
	var_329_string = ""; // 0x3ff PushV
	var_329_string = "Neutral"; // 0x400 MovS
	func_1367(var_329_string); // 0x401 NEW_2
	func_923(); // 0x404 NEW_2
	func_914(); // 0x407 NEW_2
	
Label_1033:
	return 2; // 0x409 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_858(var_6_bool); // 0x332 NEW_2
	return 0; // 0x334 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1142(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1476(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1474(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1478(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1480(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1592(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1420(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1229(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_320_bool = var_36_bool == 0; // 0x3f Not
	if(var_320_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_321_object = Obj(); // 0x46 PushV
	var_321_object = var_27_object; // 0x47 Mov
	func_1211(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_258(var_2_object, var_229_string)
{
	var_230_bool = 0; // 0x103 PushV
	func_1482(var_230_bool); // 0x104 NEW_2
	var_231_bool = var_230_bool == 0; // 0x106 Not
	if(var_231_bool == 0) goto Label_265; // 0x107 JumpB
	return 0; // 0x108 Return
	
Label_265:
	var_232_bool = var_229_string == var_2_object; // 0x109 Eq
	if(var_232_bool == 0) goto Label_268; // 0x10a JumpB
	return 0; // 0x10b Return
	
Label_268:
	var_233_string = ""; var_234_bool = 0; // 0x10c PushV
	var_233_string = var_229_string; // 0x10d Mov
	var_235_string = ""; // 0x10e PushS
	var_236_bool = var_229_string == var_235_string; // 0x10f Eq
	if(var_236_bool == 0) goto Label_275; // 0x110 JumpB
	var_234_bool = 0; // 0x111 MovB
	goto Label_276; // 0x112 Jump
	
Label_276:
	func_1383(var_233_string, var_234_bool); // 0x114 NEW_2
	var_2_object = var_229_string; // 0x116 TMov
	return 0; // 0x117 Return
	
Label_275:
	var_234_bool = 1; // 0x113 MovB
}


func_1413()
{
	var_10_bool = 0; // 0x585 PushV
	func_1482(var_10_bool); // 0x586 NEW_2
	if(var_10_bool == 0) goto Label_1419; // 0x588 JumpB
	lshStopSpeech(); // 0x589 Func
	
Label_1419:
	return 0; // 0x58b Return
}


func_1287(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x507 PushV
	var_116_string = "c"; // 0x508 MovS
	var_117_int = 0; // 0x509 MovI
	
Label_1290:
	var_121_int = 1; // 0x50a PushI
	if(var_121_int == 0) goto Label_1303; // 0x50b JumpB
	var_122_int = 1; // 0x50c PushI
	var_123_int = var_117_int + var_122_int; // 0x50d Add
	var_124_int = var_116_string + var_123_int; // 0x50e Add
	HasProperty(var_124_int, var_118_bool); // 0x50f ObjFunc
	var_125_bool = var_118_bool == 0; // 0x511 Not
	if(var_125_bool == 0) goto Label_1300; // 0x512 JumpB
	goto Label_1303; // 0x513 Jump
	
Label_1303:
	var_126_bool = var_117_int == 0; // 0x517 Not
	if(var_126_bool == 0) goto Label_1307; // 0x518 JumpB
	var_109_bool = 0; // 0x519 MovB
	return 10; // 0x51a Return
	
Label_1307:
	var_119_int = 0; // 0x51b MovI
	var_127_int = 1; // 0x51c PushI
	var_128_bool = var_117_int > var_127_int; // 0x51d GT
	if(var_128_bool == 0) goto Label_1313; // 0x51e JumpB
	irand(var_119_int, var_117_int); // 0x51f Func
	
Label_1313:
	var_129_int = 1; // 0x521 PushI
	var_130_int = var_119_int + var_129_int; // 0x522 Add
	var_131_int = var_116_string + var_130_int; // 0x523 Add
	GetProperty(var_131_int, var_120_string); // 0x524 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x526 PushV
	var_133_string = var_120_string; // 0x527 Mov
	func_1398(var_132_bool, var_133_string); // 0x528 NEW_2
	var_109_bool = var_132_bool; // 0x529 Mov
	return 10; // 0x52b Return
	
Label_1300:
	var_138_int = 1; // 0x514 PushI
	var_117_int = var_117_int + var_138_int; // 0x515 Add2
	goto Label_1290; // 0x516 Jump
}


func_1544(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x609 PushV
	var_282_string = "b11q01KlaraWillHelp"; // 0x60a MovS
	func_1436(var_281_int, var_282_string); // 0x60b NEW_2
	var_283_int = 0; // 0x60d PushI
	var_284_bool = var_281_int != var_283_int; // 0x60e Neq
	if(var_284_bool == 0) goto Label_1554; // 0x60f JumpB
	var_279_bool = 1; // 0x610 MovB
	return 0; // 0x611 Return
	
Label_1554:
	var_279_bool = 0; // 0x612 MovB
	return 0; // 0x613 Return
}


func_1034()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x40a PushV
	WaitForAnimEnd(); // 0x40b Func
	var_23_bool = 0; // 0x40d PushV
	func_1137(var_23_bool); // 0x40e NEW_2
	var_24_bool = var_23_bool == 0; // 0x410 Not
	if(var_24_bool == 0) goto Label_1043; // 0x411 JumpB
	return 12; // 0x412 Return
	
Label_1043:
	var_25_int = 0; // 0x413 PushV
	func_1457(var_25_int); // 0x414 NEW_2
	var_17_int = var_25_int; // 0x415 Mov
	var_18_int = 0; // 0x417 MovI
	
Label_1048:
	var_38_bool = 0; // 0x418 PushV
	var_38_bool = 0; // 0x419 MovB
	var_39_int = 5; // 0x41a PushI
	var_40_bool = var_18_int < var_39_int; // 0x41b LT
	if(var_40_bool == 0) goto Label_1058; // 0x41c JumpB
	var_41_bool = 0; // 0x41d PushV
	func_1137(var_41_bool); // 0x41e NEW_2
	if(var_41_bool == 0) goto Label_1058; // 0x420 JumpB
	var_38_bool = 1; // 0x421 MovB
	
Label_1058:
	if(var_38_bool == 0) goto Label_1100; // 0x422 JumpB
	var_42_bool = var_17_int == 0; // 0x423 Not
	if(var_42_bool == 0) goto Label_1068; // 0x424 JumpB
	var_43_int = 3; // 0x425 PushI
	Sleep(var_43_int, var_19_bool); // 0x426 Func
	var_44_bool = var_19_bool == 0; // 0x428 Not
	if(var_44_bool == 0) goto Label_1067; // 0x429 JumpB
	goto Label_1100; // 0x42a Jump
	
Label_1100:
	ResetAAS(); // 0x44c Func
	return 12; // 0x44e Return
	
Label_1067:
	goto Label_1089; // 0x42b Jump
	
Label_1089:
	var_45_bool = 0; // 0x441 PushV
	func_1103(var_45_bool); // 0x442 NEW_2
	var_46_bool = var_45_bool == 0; // 0x444 Not
	if(var_46_bool == 0) goto Label_1095; // 0x445 JumpB
	goto Label_1100; // 0x446 Jump
	
Label_1095:
	ResetAAS(); // 0x447 Func
	var_47_int = 1; // 0x449 PushI
	var_18_int = var_18_int + var_47_int; // 0x44a Add2
	goto Label_1048; // 0x44b Jump
	
Label_1068:
	irand(var_20_int, var_17_int); // 0x42c Func
	var_48_int = 5; // 0x42e PushI
	irand(var_21_int, var_48_int); // 0x42f Func
	var_49_int = 0; // 0x431 PushI
	var_50_bool = var_21_int != var_49_int; // 0x432 Neq
	if(var_50_bool == 0) goto Label_1077; // 0x433 JumpB
	var_20_int = 0; // 0x434 MovI
	
Label_1077:
	var_51_string = "all"; // 0x435 PushS
	var_52_string = ""; var_53_int = 0; // 0x436 PushV
	var_53_int = var_20_int; // 0x437 Mov
	func_1450(var_52_string, var_53_int); // 0x438 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x43a Func
	WaitForAnimEnd(var_22_bool); // 0x43c Func
	var_54_bool = var_22_bool == 0; // 0x43e Not
	if(var_54_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1100; // 0x440 Jump
}


func_1420(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x58c PushV
	self(var_102_object); // 0x58d Func
	var_100_object = var_102_object; // 0x58f Mov
	return 2; // 0x590 Return
}


func_914()
{
	var_331_float = 0; var_332_float = 0; // 0x392 PushV
	var_333_int = 8; // 0x393 PushI
	var_334_int = 16; // 0x394 PushI
	rand(var_332_float, var_333_int, var_334_int); // 0x395 Func
	var_335_int = 10; // 0x397 PushI
	SetTimer(var_335_int, var_332_float); // 0x398 Func
	return 2; // 0x39a Return
}


func_1426(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x592 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x593 Or
	var_68_float = sqrt(var_69_int); // 0x594 Sqrt2
	var_70_float = 0.0; // 0x595 PushF
	var_71_bool = var_68_float < var_70_float; // 0x596 LT
	if(var_71_bool == 0) goto Label_1434; // 0x597 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x598 MovV
	return 2; // 0x599 Return
	
Label_1434:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x59a Div2
	return 2; // 0x59b Return
}


func_1556(var_292_bool)
{
	var_294_int = 0; var_295_string = ""; // 0x615 PushV
	var_295_string = "oob11Klara2"; // 0x616 MovS
	func_1436(var_294_int, var_295_string); // 0x617 NEW_2
	var_296_int = 0; // 0x619 PushI
	var_297_bool = var_294_int == var_296_int; // 0x61a Eq
	if(var_297_bool == 0) goto Label_1566; // 0x61b JumpB
	var_292_bool = 1; // 0x61c MovB
	return 0; // 0x61d Return
	
Label_1566:
	var_292_bool = 0; // 0x61e MovB
	return 0; // 0x61f Return
}


func_923()
{
	var_330_int = 10; // 0x39b PushI
	KillTimer(var_330_int); // 0x39c Func
	return 0; // 0x39e Return
}


func_1436(var_204_int, var_205_string)
{
	var_206_int = 0; var_207_int = 0; // 0x59c PushV
	GetVariable(var_205_string, var_207_int); // 0x59d Func
	var_204_int = var_207_int; // 0x59f Mov
	return 2; // 0x5a0 Return
}


func_1532(var_210_bool)
{
	var_212_int = 0; var_213_string = ""; // 0x5fd PushV
	var_213_string = "oob11Klara1"; // 0x5fe MovS
	func_1436(var_212_int, var_213_string); // 0x5ff NEW_2
	var_214_int = 0; // 0x601 PushI
	var_215_bool = var_212_int == var_214_int; // 0x602 Eq
	if(var_215_bool == 0) goto Label_1542; // 0x603 JumpB
	var_210_bool = 1; // 0x604 MovB
	return 0; // 0x605 Return
	
Label_1542:
	var_210_bool = 0; // 0x606 MovB
	return 0; // 0x607 Return
}


func_1568(var_302_bool)
{
	var_304_int = 0; var_305_string = ""; // 0x621 PushV
	var_305_string = "b9KlaraLetter"; // 0x622 MovS
	func_1436(var_304_int, var_305_string); // 0x623 NEW_2
	var_306_int = 0; // 0x625 PushI
	var_307_bool = var_304_int != var_306_int; // 0x626 Neq
	if(var_307_bool == 0) goto Label_1578; // 0x627 JumpB
	var_302_bool = 1; // 0x628 MovB
	return 0; // 0x629 Return
	
Label_1578:
	var_302_bool = 0; // 0x62a MovB
	return 0; // 0x62b Return
}


func_1441(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x5a1 PushV
	GetGameTime(var_155_float); // 0x5a2 Func
	var_156_int = 1; // 0x5a4 PushI
	var_157_int = 0; // 0x5a5 PushV
	var_158_int = 24; // 0x5a6 PushI
	var_157_int = var_155_float / var_155_float; // 0x5a7 Div2
	var_153_int = var_156_int + var_157_int; // 0x5a8 Add2
	return 2; // 0x5a9 Return
}


func_809(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x32a PushV
	var_27_object = var_25_object; // 0x32b Mov
	TaskCall(0); // 0x32c TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x32d NEW_2
	TaskReturn(); // 0x32e TaskReturn
	return 0; // 0x330 Return
}


func_1450(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x5aa PushV
	var_34_string = "idle"; // 0x5ab MovS
	var_35_int = var_32_int; // 0x5ac Push
	if(var_35_int == 0) goto Label_1455; // 0x5ad JumpB
	var_34_string = var_34_string + var_32_int; // 0x5ae Add2
	
Label_1455:
	var_31_string = var_34_string; // 0x5af Mov
	return 2; // 0x5b0 Return
}


func_1580(var_308_bool)
{
	var_310_int = 0; var_311_string = ""; // 0x62d PushV
	var_311_string = "oob11Klara3"; // 0x62e MovS
	func_1436(var_310_int, var_311_string); // 0x62f NEW_2
	var_312_int = 0; // 0x631 PushI
	var_313_bool = var_310_int == var_312_int; // 0x632 Eq
	if(var_313_bool == 0) goto Label_1590; // 0x633 JumpB
	var_308_bool = 1; // 0x634 MovB
	return 0; // 0x635 Return
	
Label_1590:
	var_308_bool = 0; // 0x636 MovB
	return 0; // 0x637 Return
}


func_1324(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x52c PushV
	var_152_string = "d"; // 0x52d PushS
	var_153_int = 0; // 0x52e PushV
	func_1441(var_153_int); // 0x52f NEW_2
	var_159_int = var_152_string + var_153_int; // 0x531 Add
	var_160_string = "m"; // 0x532 PushS
	var_147_string = var_159_int + var_160_string; // 0x533 Add2
	var_148_int = 0; // 0x534 MovI
	
Label_1333:
	var_161_int = 1; // 0x535 PushI
	if(var_161_int == 0) goto Label_1346; // 0x536 JumpB
	var_162_int = 1; // 0x537 PushI
	var_163_int = var_148_int + var_162_int; // 0x538 Add
	var_164_int = var_147_string + var_163_int; // 0x539 Add
	HasProperty(var_164_int, var_149_bool); // 0x53a ObjFunc
	var_165_bool = var_149_bool == 0; // 0x53c Not
	if(var_165_bool == 0) goto Label_1343; // 0x53d JumpB
	goto Label_1346; // 0x53e Jump
	
Label_1346:
	var_166_bool = var_148_int == 0; // 0x542 Not
	if(var_166_bool == 0) goto Label_1350; // 0x543 JumpB
	var_140_bool = 0; // 0x544 MovB
	return 10; // 0x545 Return
	
Label_1350:
	var_150_int = 0; // 0x546 MovI
	var_167_int = 1; // 0x547 PushI
	var_168_bool = var_148_int > var_167_int; // 0x548 GT
	if(var_168_bool == 0) goto Label_1356; // 0x549 JumpB
	irand(var_150_int, var_148_int); // 0x54a Func
	
Label_1356:
	var_169_int = 1; // 0x54c PushI
	var_170_int = var_150_int + var_169_int; // 0x54d Add
	var_171_int = var_147_string + var_170_int; // 0x54e Add
	GetProperty(var_171_int, var_151_string); // 0x54f ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x551 PushV
	var_173_string = var_151_string; // 0x552 Mov
	func_1398(var_172_bool, var_173_string); // 0x553 NEW_2
	var_140_bool = var_172_bool; // 0x554 Mov
	return 10; // 0x556 Return
	
Label_1343:
	var_174_int = 1; // 0x53f PushI
	var_148_int = var_148_int + var_174_int; // 0x540 Add2
	goto Label_1333; // 0x541 Jump
}


func_1457(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x5b1 PushV
	var_28_int = 0; // 0x5b2 MovI
	
Label_1459:
	var_30_string = "all"; // 0x5b3 PushS
	var_31_string = ""; var_32_int = 0; // 0x5b4 PushV
	var_32_int = var_28_int; // 0x5b5 Mov
	func_1450(var_31_string, var_32_int); // 0x5b6 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x5b8 Func
	var_36_bool = var_29_bool == 0; // 0x5ba Not
	if(var_36_bool == 0) goto Label_1469; // 0x5bb JumpB
	goto Label_1472; // 0x5bc Jump
	
Label_1472:
	var_25_int = var_28_int; // 0x5c0 Mov
	return 4; // 0x5c1 Return
	
Label_1469:
	var_37_int = 1; // 0x5bd PushI
	var_28_int = var_28_int + var_37_int; // 0x5be Add2
	goto Label_1459; // 0x5bf Jump
}


func_1592(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x638 PushV
	var_92_string = "branch"; // 0x639 PushS
	GetVariable(var_92_string, var_91_int); // 0x63a Func
	var_93_int = 0; // 0x63c PushI
	var_94_bool = var_91_int == var_93_int; // 0x63d Eq
	if(var_94_bool == 0) goto Label_1602; // 0x63e JumpB
	var_89_int = 1; // 0x63f MovI
	return 2; // 0x640 Return
	
Label_1602:
	var_95_int = 1; // 0x642 PushI
	var_96_bool = var_91_int == var_95_int; // 0x643 Eq
	if(var_96_bool == 0) goto Label_1607; // 0x644 JumpB
	var_89_int = 2; // 0x645 MovI
	return 2; // 0x646 Return
	
Label_1607:
	var_89_int = 3; // 0x647 MovI
	return 2; // 0x648 Return
}


func_1211()
{
	var_322_bool = 0; var_323_bool = 0; // 0x4bb PushV
	var_324_bool = 1; // 0x4bc PushB
	CameraSwitchToNormal(var_324_bool); // 0x4bd Func
	var_325_bool = 0; // 0x4bf PushV
	func_1482(var_325_bool); // 0x4c0 NEW_2
	if(var_325_bool == 0) goto Label_1220; // 0x4c2 JumpB
	goto Label_1228; // 0x4c3 Jump
	
Label_1228:
	return 2; // 0x4cc Return
	
Label_1220:
	var_326_string = "head"; // 0x4c4 PushS
	HasAnimationTrack(var_323_bool, var_326_string); // 0x4c5 Func
	var_327_bool = var_323_bool; // 0x4c7 Push
	if(var_327_bool == 0) goto Label_1228; // 0x4c8 JumpB
	var_328_string = "head"; // 0x4c9 PushS
	UnlookAsync(var_328_string); // 0x4ca Func
}


func_1474(var_86_int)
{
	var_86_int = 515540; // 0x5c2 MovI
	return 0; // 0x5c3 Return
}


func_1476(var_85_int)
{
	var_85_int = 502865; // 0x5c4 MovI
	return 0; // 0x5c5 Return
}


func_965()
{
	func_1105(); // 0x3c6 NEW_2
	func_923(); // 0x3c9 NEW_2
	lshStopSpeech(); // 0x3cb Func
	lshStopAnimation(); // 0x3cd Func
	StopAsync(); // 0x3cf Func
	Hold(); // 0x3d1 Func
	return 0; // 0x3d3 Return
}


func_1478(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png"; // 0x5c6 MovS
	return 0; // 0x5c7 Return
}


func_1480(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png"; // 0x5c8 MovS
	return 0; // 0x5c9 Return
}


func_1482(var_80_bool)
{
	var_80_bool = 1; // 0x5ca MovB
	return 0; // 0x5cb Return
}


func_1484()
{
	var_227_string = "oob11Klara1"; // 0x5cd PushS
	var_228_int = 1; // 0x5ce PushI
	SetVariable(var_227_string, var_228_int); // 0x5cf Func
	return 0; // 0x5d1 Return
}


func_1229(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x4cd PushV
	var_107_string = "voice_common"; // 0x4ce PushS
	GetVariable(var_107_string, var_105_int); // 0x4cf Func
	var_108_int = var_105_int; // 0x4d1 Push
	if(var_108_int == 0) goto Label_1267; // 0x4d2 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x4d3 PushV
	var_110_object = var_99_object; // 0x4d4 Mov
	func_1287(var_110_object); // 0x4d5 NEW_2
	var_139_bool = var_109_bool == 0; // 0x4d7 Not
	if(var_139_bool == 0) goto Label_1249; // 0x4d8 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x4d9 PushV
	var_141_object = var_99_object; // 0x4da Mov
	func_1324(var_141_object); // 0x4db NEW_2
	var_175_bool = var_140_bool == 0; // 0x4dd Not
	if(var_175_bool == 0) goto Label_1249; // 0x4de JumpB
	var_98_bool = 0; // 0x4df MovB
	return 4; // 0x4e0 Return
	
Label_1249:
	var_176_int = 2; // 0x4e1 PushI
	irand(var_106_int, var_176_int); // 0x4e2 Func
	var_177_int = var_106_int; // 0x4e4 Push
	if(var_177_int == 0) goto Label_1262; // 0x4e5 JumpB
	var_178_string = "voice_common"; // 0x4e6 PushS
	var_179_int = 1; // 0x4e7 PushI
	var_180_int = var_105_int + var_179_int; // 0x4e8 Add
	var_181_int = 3; // 0x4e9 PushI
	var_182_int = var_180_int / var_181_int; // 0x4ea Mod
	SetVariable(var_178_string, var_182_int); // 0x4eb Func
	goto Label_1266; // 0x4ed Jump
	
Label_1266:
	goto Label_1285; // 0x4f2 Jump
	
Label_1285:
	var_98_bool = 1; // 0x505 MovB
	return 4; // 0x506 Return
	
Label_1262:
	var_183_string = "voice_common"; // 0x4ee PushS
	var_184_int = 0; // 0x4ef PushI
	SetVariable(var_183_string, var_184_int); // 0x4f0 Func
	
Label_1267:
	var_185_bool = 0; var_186_object = Obj(); // 0x4f3 PushV
	var_186_object = var_99_object; // 0x4f4 Mov
	func_1324(var_186_object); // 0x4f5 NEW_2
	var_187_bool = var_185_bool == 0; // 0x4f7 Not
	if(var_187_bool == 0) goto Label_1281; // 0x4f8 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x4f9 PushV
	var_189_object = var_99_object; // 0x4fa Mov
	func_1287(var_189_object); // 0x4fb NEW_2
	var_190_bool = var_188_bool == 0; // 0x4fd Not
	if(var_190_bool == 0) goto Label_1281; // 0x4fe JumpB
	var_98_bool = 0; // 0x4ff MovB
	return 4; // 0x500 Return
	
Label_1281:
	var_191_string = "voice_common"; // 0x501 PushS
	var_192_int = 1; // 0x502 PushI
	SetVariable(var_191_string, var_192_int); // 0x503 Func
}


func_1103(var_45_bool)
{
	var_45_bool = 1; // 0x44f MovB
	return 0; // 0x450 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_228; // 0x56 JumpB
	var_200_bool = 0; // 0x57 PushV
	var_200_bool = 1; // 0x58 MovB
	var_201_bool = 0; // 0x59 PushV
	var_201_bool = 0; // 0x5a MovB
	var_202_bool = 0; var_203_object = Obj(); // 0x5b PushV
	var_203_object = var_1_object; // 0x5c MovT
	func_1508(var_203_object); // 0x5d NEW_2
	if(var_202_bool == 0) goto Label_102; // 0x5f JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x60 PushV
	var_211_object = var_1_object; // 0x61 MovT
	func_1532(var_211_object); // 0x62 NEW_2
	if(var_210_bool == 0) goto Label_102; // 0x64 JumpB
	var_201_bool = 1; // 0x65 MovB
	
Label_102:
	if(var_201_bool == 0) goto Label_118; // 0x66 JumpB
	var_216_bool = 0; // 0x67 PushV
	var_216_bool = 0; // 0x68 MovB
	var_217_bool = 0; var_218_object = Obj(); // 0x69 PushV
	var_218_object = var_1_object; // 0x6a MovT
	func_1520(var_218_object); // 0x6b NEW_2
	if(var_217_bool == 0) goto Label_116; // 0x6d JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x6e PushV
	var_224_object = var_1_object; // 0x6f MovT
	func_1532(var_224_object); // 0x70 NEW_2
	if(var_223_bool == 0) goto Label_116; // 0x72 JumpB
	var_216_bool = 1; // 0x73 MovB
	
Label_116:
	if(var_216_bool == 0) goto Label_118; // 0x74 JumpB
	var_200_bool = 0; // 0x75 MovB
	
Label_118:
	if(var_200_bool == 0) goto Label_144; // 0x76 JumpB
	var_225_object = Obj(); var_226_object = Obj(); // 0x77 PushV
	var_225_object = var_1_object; // 0x78 MovT
	var_226_object = var_0_object; // 0x79 MovT
	func_1484(); // 0x7a NEW_2
	var_229_string = ""; // 0x7c PushV
	var_229_string = "Saveyouall"; // 0x7d MovS
	func_258(var_194_object, var_229_string); // 0x7e NEW_2
	var_246_int = 522101; // 0x80 PushI
	SetMessage(var_246_int); // 0x81 TObjFunc
	ClearReplies(); // 0x83 TObjFunc
	var_247_int = 522102; // 0x85 PushI
	var_248_int = 24452; // 0x86 PushI
	var_249_int = 23269; // 0x87 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x88 TObjFunc
	var_250_int = 522103; // 0x8a PushI
	var_251_int = 24448; // 0x8b PushI
	var_252_int = 23270; // 0x8c PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x8d TObjFunc
	goto Label_228; // 0x8f Jump
	
Label_228:
	var_253_bool = 0; // 0xe4 PushV
	func_1482(var_253_bool); // 0xe5 NEW_2
	if(var_253_bool == 0) goto Label_243; // 0xe7 JumpB
	
Label_232:
	lshWaitForAnimEnd(); // 0xe8 Func
	var_254_string = var_3_string; // 0xea PushT
	if(var_254_string == 0) goto Label_237; // 0xeb JumpB
	goto Label_242; // 0xec Jump
	
Label_242:
	goto Label_257; // 0xf2 Jump
	
Label_257:
	return 0; // 0x101 Return
	
Label_237:
	var_255_string = ""; // 0xed PushV
	var_255_string = var_2_object; // 0xee MovT
	func_1367(var_255_string); // 0xef NEW_2
	goto Label_232; // 0xf1 Jump
	
Label_243:
	var_266_string = "all"; // 0xf3 PushS
	var_267_string = "idle"; // 0xf4 PushS
	PlayAnimation(var_266_string, var_267_string); // 0xf5 Func
	
Label_247:
	WaitForAnimEnd(); // 0xf7 Func
	var_268_string = var_3_string; // 0xf9 PushT
	if(var_268_string == 0) goto Label_252; // 0xfa JumpB
	goto Label_257; // 0xfb Jump
	
Label_252:
	var_269_string = "all"; // 0xfc PushS
	var_270_string = "idle"; // 0xfd PushS
	PlayAnimation(var_269_string, var_270_string); // 0xfe Func
	goto Label_247; // 0x100 Jump
	
Label_144:
	var_271_string = ""; // 0x90 PushV
	var_271_string = "Smile"; // 0x91 MovS
	func_258(var_194_object, var_271_string); // 0x92 NEW_2
	var_272_int = 522104; // 0x94 PushI
	SetMessage(var_272_int); // 0x95 TObjFunc
	ClearReplies(); // 0x97 TObjFunc
	var_273_bool = 0; // 0x99 PushV
	var_273_bool = 0; // 0x9a MovB
	var_274_bool = 0; // 0x9b PushV
	var_274_bool = 0; // 0x9c MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x9d PushV
	var_276_object = var_1_object; // 0x9e MovT
	func_1508(var_276_object); // 0x9f NEW_2
	if(var_275_bool == 0) goto Label_168; // 0xa1 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0xa2 PushV
	var_278_object = var_1_object; // 0xa3 MovT
	func_1520(var_278_object); // 0xa4 NEW_2
	if(var_277_bool == 0) goto Label_168; // 0xa6 JumpB
	var_274_bool = 1; // 0xa7 MovB
	
Label_168:
	if(var_274_bool == 0) goto Label_176; // 0xa8 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0xa9 PushV
	var_280_object = var_1_object; // 0xaa MovT
	func_1544(var_280_object); // 0xab NEW_2
	var_285_bool = var_279_bool == 0; // 0xad Not
	if(var_285_bool == 0) goto Label_176; // 0xae JumpB
	var_273_bool = 1; // 0xaf MovB
	
Label_176:
	if(var_273_bool == 0) goto Label_182; // 0xb0 JumpB
	var_286_int = 523263; // 0xb1 PushI
	var_287_int = 24464; // 0xb2 PushI
	var_288_int = 24463; // 0xb3 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xb4 TObjFunc
	
Label_182:
	var_289_bool = 0; // 0xb6 PushV
	var_289_bool = 0; // 0xb7 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0xb8 PushV
	var_291_object = var_1_object; // 0xb9 MovT
	func_1544(var_291_object); // 0xba NEW_2
	if(var_290_bool == 0) goto Label_195; // 0xbc JumpB
	var_292_bool = 0; var_293_object = Obj(); // 0xbd PushV
	var_293_object = var_1_object; // 0xbe MovT
	func_1556(var_293_object); // 0xbf NEW_2
	if(var_292_bool == 0) goto Label_195; // 0xc1 JumpB
	var_289_bool = 1; // 0xc2 MovB
	
Label_195:
	if(var_289_bool == 0) goto Label_201; // 0xc3 JumpB
	var_298_int = 522105; // 0xc4 PushI
	var_299_int = 24443; // 0xc5 PushI
	var_300_int = 23272; // 0xc6 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xc7 TObjFunc
	
Label_201:
	var_301_bool = 0; // 0xc9 PushV
	var_301_bool = 0; // 0xca MovB
	var_302_bool = 0; var_303_object = Obj(); // 0xcb PushV
	var_303_object = var_1_object; // 0xcc MovT
	func_1568(var_303_object); // 0xcd NEW_2
	if(var_302_bool == 0) goto Label_214; // 0xcf JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0xd0 PushV
	var_309_object = var_1_object; // 0xd1 MovT
	func_1580(var_309_object); // 0xd2 NEW_2
	if(var_308_bool == 0) goto Label_214; // 0xd4 JumpB
	var_301_bool = 1; // 0xd5 MovB
	
Label_214:
	if(var_301_bool == 0) goto Label_220; // 0xd6 JumpB
	var_314_int = 534577; // 0xd7 PushI
	var_315_int = 36216; // 0xd8 PushI
	var_316_int = 36215; // 0xd9 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xda TObjFunc
	
Label_220:
	var_317_int = 523242; // 0xdc PushI
	var_318_int = -1; // 0xdd PushI
	var_319_int = 24442; // 0xde PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xdf TObjFunc
	goto Label_228; // 0xe1 Jump
}


func_1490()
{
	var_15_string = "b11q01KlaraWillHelp"; // 0x5d3 PushS
	var_16_int = 1; // 0x5d4 PushI
	SetVariable(var_15_string, var_16_int); // 0x5d5 Func
	return 0; // 0x5d7 Return
}


func_1105()
{
	StopAnimation(); // 0x451 Func
	StopGroup0(); // 0x453 Func
	return 0; // 0x455 Return
}


func_980()
{
	StopGroup0(); // 0x3d4 Func
	func_923(); // 0x3d7 NEW_2
	var_8_string = ""; // 0x3d9 PushV
	var_8_string = "Neutral"; // 0x3da MovS
	func_1367(var_8_string); // 0x3db NEW_2
	func_914(); // 0x3de NEW_2
	return 0; // 0x3e0 Return
}


func_1110(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x456 PushV
	GetPosition(var_27_cvector); // 0x457 Func
	GetPosition(var_28_cvector); // 0x459 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x45b Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x45c Or2
	return 6; // 0x45d Return
}


func_1367(var_255_string)
{
	var_256_bool = 0; var_257_float = 0; var_258_float = 0; var_259_bool = 0; var_260_float = 0; var_261_float = 0; // 0x557 PushV
	lshHasAnimation(var_259_bool, var_255_string); // 0x558 Func
	var_262_bool = var_259_bool; // 0x55a Push
	if(var_262_bool == 0) goto Label_1378; // 0x55b JumpB
	lshGetAnimTimes(var_255_string, var_260_float, var_261_float); // 0x55c Func
	var_263_bool = 0; // 0x55e PushB
	lshPlayAnimation(var_260_float, var_261_float, var_263_bool); // 0x55f Func
	goto Label_1382; // 0x561 Jump
	
Label_1382:
	return 6; // 0x566 Return
	
Label_1378:
	var_264_string = "Can't find lsh animation : "; // 0x562 PushS
	var_265_int = var_264_string + var_255_string; // 0x563 Add
	Trace(var_265_int); // 0x564 Func
}


func_1496()
{
	var_33_string = "oob11Klara2"; // 0x5d9 PushS
	var_34_int = 1; // 0x5da PushI
	SetVariable(var_33_string, var_34_int); // 0x5db Func
	return 0; // 0x5dd Return
}


func_858(var_0_object)
{
	var_7_bool = 0; // 0x35a PushV
	func_1137(var_7_bool); // 0x35b NEW_2
	var_10_bool = var_7_bool == 0; // 0x35d Not
	if(var_10_bool == 0) goto Label_865; // 0x35e JumpB
	Hold(); // 0x35f Func
	
Label_865:
	GetDirection(var_0_object); // 0x361 Func
	
Label_867:
	func_1034(); // 0x364 NEW_2
	goto Label_867; // 0x366 Jump
}


func_1502()
{
	var_39_string = "oob11Klara3"; // 0x5df PushS
	var_40_int = 1; // 0x5e0 PushI
	SetVariable(var_39_string, var_40_int); // 0x5e1 Func
	return 0; // 0x5e3 Return
}


func_1118(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x45e PushV
	GetPosition(var_20_cvector); // 0x45f Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x461 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x462 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x463 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x464 Func
	var_15_bool = var_22_bool; // 0x466 Mov
	return 6; // 0x467 Return
}


func_1508(var_202_bool)
{
	var_204_int = 0; var_205_string = ""; // 0x5e5 PushV
	var_205_string = "b11q01"; // 0x5e6 MovS
	func_1436(var_204_int, var_205_string); // 0x5e7 NEW_2
	var_208_int = 0; // 0x5e9 PushI
	var_209_bool = var_204_int == var_208_int; // 0x5ea Eq
	if(var_209_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_202_bool = 1; // 0x5ec MovB
	return 0; // 0x5ed Return
	
Label_1518:
	var_202_bool = 0; // 0x5ee MovB
	return 0; // 0x5ef Return
}


func_1383(var_233_string, var_234_bool)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x567 PushV
	lshHasAnimation(var_240_bool, var_233_string); // 0x568 Func
	var_243_bool = var_240_bool; // 0x56a Push
	if(var_243_bool == 0) goto Label_1393; // 0x56b JumpB
	lshGetAnimTimes(var_233_string, var_241_float, var_242_float); // 0x56c Func
	lshPlayAnimation(var_241_float, var_242_float, var_234_bool); // 0x56e Func
	goto Label_1397; // 0x570 Jump
	
Label_1397:
	return 6; // 0x575 Return
	
Label_1393:
	var_244_string = "Can't find lsh animation : "; // 0x571 PushS
	var_245_int = var_244_string + var_233_string; // 0x572 Add
	Trace(var_245_int); // 0x573 Func
}


func_1128(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x468 PushV
	GetPosition(var_14_cvector); // 0x469 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x46b PushV
	var_16_cvector = var_14_cvector; // 0x46c Mov
	func_1118(var_15_bool, var_16_cvector); // 0x46d NEW_2
	var_11_bool = var_15_bool; // 0x46e Mov
	return 2; // 0x470 Return
}


func_872(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x368 PushV
	var_35_string = "player"; // 0x369 PushS
	FindActor(var_34_object, var_35_string); // 0x36a Func
	var_36_bool = var_34_object == 0; // 0x36c Not
	if(var_36_bool == 0) goto Label_880; // 0x36d JumpB
	var_32_bool = 0; // 0x36e MovB
	return 2; // 0x36f Return
	
Label_880:
	var_37_bool = 0; var_38_object = Obj(); // 0x370 PushV
	var_38_object = var_34_object; // 0x371 Mov
	func_1128(var_38_object); // 0x372 NEW_2
	var_32_bool = var_37_bool; // 0x373 Mov
	return 2; // 0x375 Return
}


func_1520(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x5f1 PushV
	var_220_string = "b11q01"; // 0x5f2 MovS
	func_1436(var_219_int, var_220_string); // 0x5f3 NEW_2
	var_221_int = 1; // 0x5f5 PushI
	var_222_bool = var_219_int == var_221_int; // 0x5f6 Eq
	if(var_222_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_217_bool = 1; // 0x5f8 MovB
	return 0; // 0x5f9 Return
	
Label_1530:
	var_217_bool = 0; // 0x5fa MovB
	return 0; // 0x5fb Return
}


func_1137(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x471 PushV
	IsLoaded(var_9_bool); // 0x472 Func
	var_7_bool = var_9_bool; // 0x474 Mov
	return 2; // 0x475 Return
}


func_1142(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x476 PushV
	GetPosition(var_50_cvector); // 0x477 ObjFunc
	GetEyesHeight(var_49_float); // 0x479 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x47b PushE
	var_58_float = var_58_float + var_49_float; // 0x47c Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x47d PopE
	GetPosition(var_51_cvector); // 0x47e Func
	GetEyesHeight(var_49_float); // 0x480 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x482 PushE
	var_59_float = var_59_float + var_49_float; // 0x483 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x484 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x485 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x486 PushE
	var_60_float = 0; // 0x487 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x488 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x489 Or
	var_62_float = sqrt(var_61_int); // 0x48a Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x48b Div2
	var_53_cvector = -var_52_cvector; // 0x48c Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x48d Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x48e PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x48f PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x490 Xor2
	func_1426(var_64_cvector, var_65_cvector); // 0x491 NEW_2
	var_72_int = 25; // 0x493 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x494 Mult
	var_74_int = var_63_float + var_73_float; // 0x495 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x496 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x497 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x498 Add2
	IsOverrideActive(var_56_bool); // 0x499 Func
	var_76_bool = var_56_bool; // 0x49b Push
	if(var_76_bool == 0) goto Label_1183; // 0x49c JumpB
	var_37_bool = 0; // 0x49d MovB
	return 18; // 0x49e Return
	
Label_1183:
	StopWorld(); // 0x49f Func
	var_77_bool = 1; // 0x4a1 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x4a2 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x4a4 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x4a5 PushE
	Rotate(var_78_float, var_79_float); // 0x4a6 Func
	var_80_bool = 0; // 0x4a8 PushV
	func_1482(var_80_bool); // 0x4a9 NEW_2
	if(var_80_bool == 0) goto Label_1197; // 0x4ab JumpB
	goto Label_1205; // 0x4ac Jump
	
Label_1205:
	CameraWaitForPlayFinish(); // 0x4b5 Func
	ResumeWorld(); // 0x4b7 Func
	var_37_bool = 1; // 0x4b9 MovB
	return 18; // 0x4ba Return
	
Label_1197:
	var_81_string = "head"; // 0x4ad PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x4ae Func
	var_82_bool = var_57_bool; // 0x4b0 Push
	if(var_82_bool == 0) goto Label_1205; // 0x4b1 JumpB
	var_83_string = "head"; // 0x4b2 PushS
	LookAsyncCamera(var_83_string); // 0x4b3 Func
}


func_887(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x377 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x378 PushE
	RotateAsync(var_84_float, var_85_float); // 0x379 Func
	return 0; // 0x37b Return
}


func_1398(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x576 PushV
	var_136_bool = 0; // 0x577 PushV
	func_1482(var_136_bool); // 0x578 NEW_2
	if(var_136_bool == 0) goto Label_1411; // 0x57a JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x57b Func
	var_137_bool = var_135_bool; // 0x57d Push
	if(var_137_bool == 0) goto Label_1411; // 0x57e JumpB
	lshPlaySpeech(var_133_string); // 0x57f Func
	var_132_bool = 1; // 0x581 MovB
	return 2; // 0x582 Return
	
Label_1411:
	var_132_bool = 0; // 0x583 MovB
	return 2; // 0x584 Return
}


func_892(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x37c PushV
	var_20_string = "player"; // 0x37d PushS
	FindActor(var_18_object, var_20_string); // 0x37e Func
	var_21_bool = var_18_object == 0; // 0x380 Not
	if(var_21_bool == 0) goto Label_900; // 0x381 JumpB
	var_15_bool = 0; // 0x382 MovB
	return 4; // 0x383 Return
	
Label_900:
	var_22_float = 0; var_23_object = Obj(); // 0x384 PushV
	var_23_object = var_18_object; // 0x385 Mov
	func_1110(var_23_object); // 0x386 NEW_2
	var_30_float = 90000.0; // 0x388 PushF
	var_31_bool = var_22_float > var_30_float; // 0x389 GT
	if(var_31_bool == 0) goto Label_909; // 0x38a JumpB
	var_15_bool = 0; // 0x38b MovB
	return 4; // 0x38c Return
	
Label_909:
	CanSee(var_19_bool, var_18_object); // 0x38d Func
	var_15_bool = var_19_bool; // 0x38f Mov
	return 4; // 0x390 Return
}


