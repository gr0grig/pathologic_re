task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xbf PushI
	if(var_43_int == 0) goto Label_627; // 0xc0 JumpB
	func_4746(); // 0xc2 NEW_2
	var_45_int = 33796; // 0xc4 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xc5 Eq
	if(var_46_bool == 0) goto Label_204; // 0xc6 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xc7 PushV
	var_47_object = var_1_object; // 0xc8 MovT
	var_48_object = var_0_object; // 0xc9 MovT
	func_4884(); // 0xca NEW_2
	
Label_204:
	var_55_int = 33811; // 0xcc PushI
	var_56_bool = var_42_cvector == var_55_int; // 0xcd Eq
	if(var_56_bool == 0) goto Label_212; // 0xce JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xcf PushV
	var_57_object = var_1_object; // 0xd0 MovT
	var_58_object = var_0_object; // 0xd1 MovT
	func_4897(); // 0xd2 NEW_2
	
Label_212:
	var_85_int = 33781; // 0xd4 PushI
	var_86_bool = var_41_bool == var_85_int; // 0xd5 Eq
	if(var_86_bool == 0) goto Label_264; // 0xd6 JumpB
	var_87_bool = 0; // 0xd7 PushV
	var_87_bool = 0; // 0xd8 MovB
	var_88_bool = 0; var_89_object = Obj(); // 0xd9 PushV
	var_89_object = var_1_object; // 0xda MovT
	func_5134(var_89_object); // 0xdb NEW_2
	if(var_88_bool == 0) goto Label_228; // 0xdd JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0xde PushV
	var_97_object = var_1_object; // 0xdf MovT
	func_5146(var_97_object); // 0xe0 NEW_2
	if(var_96_bool == 0) goto Label_228; // 0xe2 JumpB
	var_87_bool = 1; // 0xe3 MovB
	
Label_228:
	if(var_87_bool == 0) goto Label_249; // 0xe4 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xe5 PushV
	var_102_object = var_1_object; // 0xe6 MovT
	var_103_object = var_0_object; // 0xe7 MovT
	func_4891(); // 0xe8 NEW_2
	var_106_string = ""; // 0xea PushV
	var_106_string = "Neutral"; // 0xeb MovS
	func_168(var_42_cvector, var_106_string); // 0xec NEW_2
	var_123_int = 532352; // 0xee PushI
	SetMessage(var_123_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_124_int = 532353; // 0xf3 PushI
	var_125_int = 33783; // 0xf4 PushI
	var_126_int = 33782; // 0xf5 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_127_string = ""; // 0xf9 PushV
	var_127_string = "Neutral"; // 0xfa MovS
	func_168(var_42_cvector, var_127_string); // 0xfb NEW_2
	var_128_int = 532393; // 0xfd PushI
	SetMessage(var_128_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_129_int = 532453; // 0x102 PushI
	var_130_int = -1; // 0x103 PushI
	var_131_int = 33895; // 0x104 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_132_int = 33836; // 0x108 PushI
	var_133_bool = var_41_bool == var_132_int; // 0x109 Eq
	if(var_133_bool == 0) goto Label_267; // 0x10a JumpB
	
Label_267:
	var_134_int = 33847; // 0x10b PushI
	var_135_bool = var_41_bool == var_134_int; // 0x10c Eq
	if(var_135_bool == 0) goto Label_290; // 0x10d JumpB
	var_136_string = ""; // 0x10e PushV
	var_136_string = "Neutral"; // 0x10f MovS
	func_168(var_42_cvector, var_136_string); // 0x110 NEW_2
	var_137_int = 532405; // 0x112 PushI
	SetMessage(var_137_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_138_int = 532406; // 0x117 PushI
	var_139_int = -1; // 0x118 PushI
	var_140_int = 33848; // 0x119 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x11a TObjFunc
	var_141_int = 532407; // 0x11c PushI
	var_142_int = -1; // 0x11d PushI
	var_143_int = 33849; // 0x11e PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_144_int = 33838; // 0x122 PushI
	var_145_bool = var_41_bool == var_144_int; // 0x123 Eq
	if(var_145_bool == 0) goto Label_318; // 0x124 JumpB
	var_146_string = ""; // 0x125 PushV
	var_146_string = "Strange"; // 0x126 MovS
	func_168(var_42_cvector, var_146_string); // 0x127 NEW_2
	var_147_int = 532397; // 0x129 PushI
	SetMessage(var_147_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_148_int = 532398; // 0x12e PushI
	var_149_int = 33840; // 0x12f PushI
	var_150_int = 33839; // 0x130 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x131 TObjFunc
	var_151_int = 532402; // 0x133 PushI
	var_152_int = -1; // 0x134 PushI
	var_153_int = 33843; // 0x135 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x136 TObjFunc
	var_154_int = 532403; // 0x138 PushI
	var_155_int = 33840; // 0x139 PushI
	var_156_int = 33844; // 0x13a PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_157_int = 33840; // 0x13e PushI
	var_158_bool = var_41_bool == var_157_int; // 0x13f Eq
	if(var_158_bool == 0) goto Label_341; // 0x140 JumpB
	var_159_string = ""; // 0x141 PushV
	var_159_string = "Neutral"; // 0x142 MovS
	func_168(var_42_cvector, var_159_string); // 0x143 NEW_2
	var_160_int = 532399; // 0x145 PushI
	SetMessage(var_160_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_161_int = 532400; // 0x14a PushI
	var_162_int = -1; // 0x14b PushI
	var_163_int = 33841; // 0x14c PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x14d TObjFunc
	var_164_int = 532401; // 0x14f PushI
	var_165_int = -1; // 0x150 PushI
	var_166_int = 33842; // 0x151 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_167_int = 33825; // 0x155 PushI
	var_168_bool = var_41_bool == var_167_int; // 0x156 Eq
	if(var_168_bool == 0) goto Label_344; // 0x157 JumpB
	
Label_344:
	var_169_int = 33827; // 0x158 PushI
	var_170_bool = var_41_bool == var_169_int; // 0x159 Eq
	if(var_170_bool == 0) goto Label_367; // 0x15a JumpB
	var_171_string = ""; // 0x15b PushV
	var_171_string = "Grin"; // 0x15c MovS
	func_168(var_42_cvector, var_171_string); // 0x15d NEW_2
	var_172_int = 532389; // 0x15f PushI
	SetMessage(var_172_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_173_int = 532390; // 0x164 PushI
	var_174_int = 33819; // 0x165 PushI
	var_175_int = 33828; // 0x166 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x167 TObjFunc
	var_176_int = 532391; // 0x169 PushI
	var_177_int = 33819; // 0x16a PushI
	var_178_int = 33830; // 0x16b PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_179_int = 33783; // 0x16f PushI
	var_180_bool = var_41_bool == var_179_int; // 0x170 Eq
	if(var_180_bool == 0) goto Label_390; // 0x171 JumpB
	var_181_string = ""; // 0x172 PushV
	var_181_string = "Grin"; // 0x173 MovS
	func_168(var_42_cvector, var_181_string); // 0x174 NEW_2
	var_182_int = 532354; // 0x176 PushI
	SetMessage(var_182_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_183_int = 532355; // 0x17b PushI
	var_184_int = 33785; // 0x17c PushI
	var_185_int = 33784; // 0x17d PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x17e TObjFunc
	var_186_int = 532385; // 0x180 PushI
	var_187_int = 33785; // 0x181 PushI
	var_188_int = 33822; // 0x182 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_189_int = 33785; // 0x186 PushI
	var_190_bool = var_41_bool == var_189_int; // 0x187 Eq
	if(var_190_bool == 0) goto Label_413; // 0x188 JumpB
	var_191_string = ""; // 0x189 PushV
	var_191_string = "Neutral"; // 0x18a MovS
	func_168(var_42_cvector, var_191_string); // 0x18b NEW_2
	var_192_int = 532356; // 0x18d PushI
	SetMessage(var_192_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_193_int = 532357; // 0x192 PushI
	var_194_int = 33787; // 0x193 PushI
	var_195_int = 33786; // 0x194 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x195 TObjFunc
	var_196_int = 532382; // 0x197 PushI
	var_197_int = 33819; // 0x198 PushI
	var_198_int = 33818; // 0x199 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_199_int = 33819; // 0x19d PushI
	var_200_bool = var_41_bool == var_199_int; // 0x19e Eq
	if(var_200_bool == 0) goto Label_431; // 0x19f JumpB
	var_201_string = ""; // 0x1a0 PushV
	var_201_string = "Neutral"; // 0x1a1 MovS
	func_168(var_42_cvector, var_201_string); // 0x1a2 NEW_2
	var_202_int = 532383; // 0x1a4 PushI
	SetMessage(var_202_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_203_int = 532384; // 0x1a9 PushI
	var_204_int = 33787; // 0x1aa PushI
	var_205_int = 33820; // 0x1ab PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_206_int = 33787; // 0x1af PushI
	var_207_bool = var_41_bool == var_206_int; // 0x1b0 Eq
	if(var_207_bool == 0) goto Label_459; // 0x1b1 JumpB
	var_208_string = ""; // 0x1b2 PushV
	var_208_string = "Grin"; // 0x1b3 MovS
	func_168(var_42_cvector, var_208_string); // 0x1b4 NEW_2
	var_209_int = 532358; // 0x1b6 PushI
	SetMessage(var_209_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_210_int = 532359; // 0x1bb PushI
	var_211_int = 33789; // 0x1bc PushI
	var_212_int = 33788; // 0x1bd PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1be TObjFunc
	var_213_int = 532373; // 0x1c0 PushI
	var_214_int = 33808; // 0x1c1 PushI
	var_215_int = 33807; // 0x1c2 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1c3 TObjFunc
	var_216_int = 532379; // 0x1c5 PushI
	var_217_int = 33815; // 0x1c6 PushI
	var_218_int = 33814; // 0x1c7 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_219_int = 33815; // 0x1cb PushI
	var_220_bool = var_41_bool == var_219_int; // 0x1cc Eq
	if(var_220_bool == 0) goto Label_477; // 0x1cd JumpB
	var_221_string = ""; // 0x1ce PushV
	var_221_string = "Neutral"; // 0x1cf MovS
	func_168(var_42_cvector, var_221_string); // 0x1d0 NEW_2
	var_222_int = 532380; // 0x1d2 PushI
	SetMessage(var_222_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_223_int = 532381; // 0x1d7 PushI
	var_224_int = 33808; // 0x1d8 PushI
	var_225_int = 33816; // 0x1d9 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_226_int = 33808; // 0x1dd PushI
	var_227_bool = var_41_bool == var_226_int; // 0x1de Eq
	if(var_227_bool == 0) goto Label_500; // 0x1df JumpB
	var_228_string = ""; // 0x1e0 PushV
	var_228_string = "Neutral"; // 0x1e1 MovS
	func_168(var_42_cvector, var_228_string); // 0x1e2 NEW_2
	var_229_int = 532374; // 0x1e4 PushI
	SetMessage(var_229_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_230_int = 532375; // 0x1e9 PushI
	var_231_int = 33810; // 0x1ea PushI
	var_232_int = 33809; // 0x1eb PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1ec TObjFunc
	var_233_int = 532378; // 0x1ee PushI
	var_234_int = 33789; // 0x1ef PushI
	var_235_int = 33812; // 0x1f0 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_236_int = 33810; // 0x1f4 PushI
	var_237_bool = var_41_bool == var_236_int; // 0x1f5 Eq
	if(var_237_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_238_string = ""; // 0x1f7 PushV
	var_238_string = "Neutral"; // 0x1f8 MovS
	func_168(var_42_cvector, var_238_string); // 0x1f9 NEW_2
	var_239_int = 532376; // 0x1fb PushI
	SetMessage(var_239_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_240_int = 532377; // 0x200 PushI
	var_241_int = -1; // 0x201 PushI
	var_242_int = 33811; // 0x202 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_243_int = 33789; // 0x206 PushI
	var_244_bool = var_41_bool == var_243_int; // 0x207 Eq
	if(var_244_bool == 0) goto Label_546; // 0x208 JumpB
	var_245_string = ""; // 0x209 PushV
	var_245_string = "Grin"; // 0x20a MovS
	func_168(var_42_cvector, var_245_string); // 0x20b NEW_2
	var_246_int = 532360; // 0x20d PushI
	SetMessage(var_246_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_247_int = 532361; // 0x212 PushI
	var_248_int = 33795; // 0x213 PushI
	var_249_int = 33790; // 0x214 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x215 TObjFunc
	var_250_int = 532362; // 0x217 PushI
	var_251_int = 33793; // 0x218 PushI
	var_252_int = 33792; // 0x219 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x21a TObjFunc
	var_253_int = 532372; // 0x21c PushI
	var_254_int = 33810; // 0x21d PushI
	var_255_int = 33805; // 0x21e PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x21f TObjFunc
	return 0; // 0x221 Return
	
Label_546:
	var_256_int = 33793; // 0x222 PushI
	var_257_bool = var_41_bool == var_256_int; // 0x223 Eq
	if(var_257_bool == 0) goto Label_569; // 0x224 JumpB
	var_258_string = ""; // 0x225 PushV
	var_258_string = "Neutral"; // 0x226 MovS
	func_168(var_42_cvector, var_258_string); // 0x227 NEW_2
	var_259_int = 532363; // 0x229 PushI
	SetMessage(var_259_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_260_int = 532364; // 0x22e PushI
	var_261_int = 33795; // 0x22f PushI
	var_262_int = 33794; // 0x230 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x231 TObjFunc
	var_263_int = 532368; // 0x233 PushI
	var_264_int = 33800; // 0x234 PushI
	var_265_int = 33799; // 0x235 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_266_int = 33800; // 0x239 PushI
	var_267_bool = var_41_bool == var_266_int; // 0x23a Eq
	if(var_267_bool == 0) goto Label_592; // 0x23b JumpB
	var_268_string = ""; // 0x23c PushV
	var_268_string = "Neutral"; // 0x23d MovS
	func_168(var_42_cvector, var_268_string); // 0x23e NEW_2
	var_269_int = 532369; // 0x240 PushI
	SetMessage(var_269_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_270_int = 532370; // 0x245 PushI
	var_271_int = 33795; // 0x246 PushI
	var_272_int = 33801; // 0x247 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x248 TObjFunc
	var_273_int = 532371; // 0x24a PushI
	var_274_int = 33810; // 0x24b PushI
	var_275_int = 33803; // 0x24c PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x24d TObjFunc
	return 0; // 0x24f Return
	
Label_592:
	var_276_int = 33795; // 0x250 PushI
	var_277_bool = var_41_bool == var_276_int; // 0x251 Eq
	if(var_277_bool == 0) goto Label_615; // 0x252 JumpB
	var_278_string = ""; // 0x253 PushV
	var_278_string = "Neutral"; // 0x254 MovS
	func_168(var_42_cvector, var_278_string); // 0x255 NEW_2
	var_279_int = 532365; // 0x257 PushI
	SetMessage(var_279_int); // 0x258 TObjFunc
	ClearReplies(); // 0x25a TObjFunc
	var_280_int = 532366; // 0x25c PushI
	var_281_int = -1; // 0x25d PushI
	var_282_int = 33796; // 0x25e PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x25f TObjFunc
	var_283_int = 532367; // 0x261 PushI
	var_284_int = 33810; // 0x262 PushI
	var_285_int = 33797; // 0x263 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x264 TObjFunc
	return 0; // 0x266 Return
	
Label_615:
	var_3_string = 1; // 0x267 TMovB
	var_286_bool = 0; // 0x268 PushV
	func_4882(var_286_bool); // 0x269 NEW_2
	if(var_286_bool == 0) goto Label_623; // 0x26b JumpB
	lshStopAnimation(); // 0x26c Func
	goto Label_625; // 0x26e Jump
	
Label_625:
	return 0; // 0x271 Return
	
Label_623:
	StopAnimation(); // 0x26f Func
	
Label_627:
	return 0; // 0x273 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x31b PushI
	if(var_43_int == 0) goto Label_886; // 0x31c JumpB
	func_4746(); // 0x31e NEW_2
	var_45_int = 36971; // 0x320 PushI
	var_46_bool = var_41_bool == var_45_int; // 0x321 Eq
	if(var_46_bool == 0) goto Label_828; // 0x322 JumpB
	var_47_string = ""; // 0x323 PushV
	var_47_string = "Neutral"; // 0x324 MovS
	func_772(var_42_cvector, var_47_string); // 0x325 NEW_2
	var_64_int = 535294; // 0x327 PushI
	SetMessage(var_64_int); // 0x328 TObjFunc
	ClearReplies(); // 0x32a TObjFunc
	var_65_int = 535295; // 0x32c PushI
	var_66_int = 36973; // 0x32d PushI
	var_67_int = 36972; // 0x32e PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x32f TObjFunc
	var_68_int = 535302; // 0x331 PushI
	var_69_int = -1; // 0x332 PushI
	var_70_int = 36980; // 0x333 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x334 TObjFunc
	var_71_int = 535303; // 0x336 PushI
	var_72_int = -1; // 0x337 PushI
	var_73_int = 36981; // 0x338 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x339 TObjFunc
	return 0; // 0x33b Return
	
Label_828:
	var_74_int = 36973; // 0x33c PushI
	var_75_bool = var_41_bool == var_74_int; // 0x33d Eq
	if(var_75_bool == 0) goto Label_851; // 0x33e JumpB
	var_76_string = ""; // 0x33f PushV
	var_76_string = "Neutral"; // 0x340 MovS
	func_772(var_42_cvector, var_76_string); // 0x341 NEW_2
	var_77_int = 535296; // 0x343 PushI
	SetMessage(var_77_int); // 0x344 TObjFunc
	ClearReplies(); // 0x346 TObjFunc
	var_78_int = 535297; // 0x348 PushI
	var_79_int = 36975; // 0x349 PushI
	var_80_int = 36974; // 0x34a PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x34b TObjFunc
	var_81_int = 535301; // 0x34d PushI
	var_82_int = 36975; // 0x34e PushI
	var_83_int = 36978; // 0x34f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x350 TObjFunc
	return 0; // 0x352 Return
	
Label_851:
	var_84_int = 36975; // 0x353 PushI
	var_85_bool = var_41_bool == var_84_int; // 0x354 Eq
	if(var_85_bool == 0) goto Label_874; // 0x355 JumpB
	var_86_string = ""; // 0x356 PushV
	var_86_string = "Neutral"; // 0x357 MovS
	func_772(var_42_cvector, var_86_string); // 0x358 NEW_2
	var_87_int = 535298; // 0x35a PushI
	SetMessage(var_87_int); // 0x35b TObjFunc
	ClearReplies(); // 0x35d TObjFunc
	var_88_int = 535299; // 0x35f PushI
	var_89_int = -1; // 0x360 PushI
	var_90_int = 36976; // 0x361 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x362 TObjFunc
	var_91_int = 535300; // 0x364 PushI
	var_92_int = -1; // 0x365 PushI
	var_93_int = 36977; // 0x366 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x367 TObjFunc
	return 0; // 0x369 Return
	
Label_874:
	var_3_string = 1; // 0x36a TMovB
	var_94_bool = 0; // 0x36b PushV
	func_4882(var_94_bool); // 0x36c NEW_2
	if(var_94_bool == 0) goto Label_882; // 0x36e JumpB
	lshStopAnimation(); // 0x36f Func
	goto Label_884; // 0x371 Jump
	
Label_884:
	return 0; // 0x374 Return
	
Label_882:
	StopAnimation(); // 0x372 Func
	
Label_886:
	return 0; // 0x376 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x44e PushI
	if(var_43_int == 0) goto Label_1585; // 0x44f JumpB
	func_4746(); // 0x451 NEW_2
	var_45_int = 3872; // 0x453 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x454 Eq
	if(var_46_bool == 0) goto Label_1125; // 0x455 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x456 PushV
	var_47_object = var_1_object; // 0x457 MovT
	var_48_object = var_0_object; // 0x458 MovT
	func_5053(); // 0x459 NEW_2
	var_51_object = Obj(); var_52_object = Obj(); // 0x45b PushV
	var_51_object = var_1_object; // 0x45c MovT
	var_52_object = var_0_object; // 0x45d MovT
	func_5114(); // 0x45e NEW_2
	var_55_object = Obj(); var_56_object = Obj(); // 0x460 PushV
	var_55_object = var_1_object; // 0x461 MovT
	var_56_object = var_0_object; // 0x462 MovT
	func_5100(var_56_object); // 0x463 NEW_2
	
Label_1125:
	var_102_int = 3870; // 0x465 PushI
	var_103_bool = var_42_cvector == var_102_int; // 0x466 Eq
	if(var_103_bool == 0) goto Label_1143; // 0x467 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x468 PushV
	var_104_object = var_1_object; // 0x469 MovT
	var_105_object = var_0_object; // 0x46a MovT
	func_5053(); // 0x46b NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x46d PushV
	var_106_object = var_1_object; // 0x46e MovT
	var_107_object = var_0_object; // 0x46f MovT
	func_5100(var_107_object); // 0x470 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x472 PushV
	var_108_object = var_1_object; // 0x473 MovT
	var_109_object = var_0_object; // 0x474 MovT
	func_5114(); // 0x475 NEW_2
	
Label_1143:
	var_110_int = 3860; // 0x477 PushI
	var_111_bool = var_42_cvector == var_110_int; // 0x478 Eq
	if(var_111_bool == 0) goto Label_1161; // 0x479 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x47a PushV
	var_112_object = var_1_object; // 0x47b MovT
	var_113_object = var_0_object; // 0x47c MovT
	func_5053(); // 0x47d NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x47f PushV
	var_114_object = var_1_object; // 0x480 MovT
	var_115_object = var_0_object; // 0x481 MovT
	func_5114(); // 0x482 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x484 PushV
	var_116_object = var_1_object; // 0x485 MovT
	var_117_object = var_0_object; // 0x486 MovT
	func_5100(var_117_object); // 0x487 NEW_2
	
Label_1161:
	var_118_int = 3857; // 0x489 PushI
	var_119_bool = var_42_cvector == var_118_int; // 0x48a Eq
	if(var_119_bool == 0) goto Label_1179; // 0x48b JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x48c PushV
	var_120_object = var_1_object; // 0x48d MovT
	var_121_object = var_0_object; // 0x48e MovT
	func_5053(); // 0x48f NEW_2
	var_122_object = Obj(); var_123_object = Obj(); // 0x491 PushV
	var_122_object = var_1_object; // 0x492 MovT
	var_123_object = var_0_object; // 0x493 MovT
	func_5100(var_123_object); // 0x494 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x496 PushV
	var_124_object = var_1_object; // 0x497 MovT
	var_125_object = var_0_object; // 0x498 MovT
	func_5114(); // 0x499 NEW_2
	
Label_1179:
	var_126_int = 13923; // 0x49b PushI
	var_127_bool = var_42_cvector == var_126_int; // 0x49c Eq
	if(var_127_bool == 0) goto Label_1187; // 0x49d JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x49e PushV
	var_128_object = var_1_object; // 0x49f MovT
	var_129_object = var_0_object; // 0x4a0 MovT
	func_5059(); // 0x4a1 NEW_2
	
Label_1187:
	var_132_int = 11939; // 0x4a3 PushI
	var_133_bool = var_42_cvector == var_132_int; // 0x4a4 Eq
	if(var_133_bool == 0) goto Label_1195; // 0x4a5 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x4a6 PushV
	var_134_object = var_1_object; // 0x4a7 MovT
	var_135_object = var_0_object; // 0x4a8 MovT
	func_5120(); // 0x4a9 NEW_2
	
Label_1195:
	var_152_int = 11940; // 0x4ab PushI
	var_153_bool = var_42_cvector == var_152_int; // 0x4ac Eq
	if(var_153_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x4ae PushV
	var_154_object = var_1_object; // 0x4af MovT
	var_155_object = var_0_object; // 0x4b0 MovT
	func_4907(); // 0x4b1 NEW_2
	
Label_1203:
	var_164_int = 13922; // 0x4b3 PushI
	var_165_bool = var_41_bool == var_164_int; // 0x4b4 Eq
	if(var_165_bool == 0) goto Label_1279; // 0x4b5 JumpB
	var_166_string = ""; // 0x4b6 PushV
	var_166_string = "Neutral"; // 0x4b7 MovS
	func_1079(var_42_cvector, var_166_string); // 0x4b8 NEW_2
	var_183_int = 512729; // 0x4ba PushI
	SetMessage(var_183_int); // 0x4bb TObjFunc
	ClearReplies(); // 0x4bd TObjFunc
	var_184_bool = 0; // 0x4bf PushV
	var_184_bool = 0; // 0x4c0 MovB
	var_185_bool = 0; var_186_object = Obj(); // 0x4c1 PushV
	var_186_object = var_1_object; // 0x4c2 MovT
	func_5278(var_186_object); // 0x4c3 NEW_2
	if(var_185_bool == 0) goto Label_1228; // 0x4c5 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x4c6 PushV
	var_194_object = var_1_object; // 0x4c7 MovT
	func_5266(var_194_object); // 0x4c8 NEW_2
	if(var_193_bool == 0) goto Label_1228; // 0x4ca JumpB
	var_184_bool = 1; // 0x4cb MovB
	
Label_1228:
	if(var_184_bool == 0) goto Label_1234; // 0x4cc JumpB
	var_199_int = 512731; // 0x4cd PushI
	var_200_int = 3851; // 0x4ce PushI
	var_201_int = 13924; // 0x4cf PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x4d0 TObjFunc
	
Label_1234:
	var_202_bool = 0; // 0x4d2 PushV
	var_202_bool = 0; // 0x4d3 MovB
	var_203_bool = 0; // 0x4d4 PushV
	var_203_bool = 0; // 0x4d5 MovB
	var_204_bool = 0; // 0x4d6 PushV
	var_204_bool = 0; // 0x4d7 MovB
	var_205_bool = 0; var_206_object = Obj(); // 0x4d8 PushV
	var_206_object = var_1_object; // 0x4d9 MovT
	func_5290(var_206_object); // 0x4da NEW_2
	if(var_205_bool == 0) goto Label_1251; // 0x4dc JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x4dd PushV
	var_212_object = var_1_object; // 0x4de MovT
	func_5338(var_212_object); // 0x4df NEW_2
	if(var_211_bool == 0) goto Label_1251; // 0x4e1 JumpB
	var_204_bool = 1; // 0x4e2 MovB
	
Label_1251:
	if(var_204_bool == 0) goto Label_1259; // 0x4e3 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x4e4 PushV
	var_218_object = var_1_object; // 0x4e5 MovT
	func_5350(var_218_object); // 0x4e6 NEW_2
	var_223_bool = var_217_bool == 0; // 0x4e8 Not
	if(var_223_bool == 0) goto Label_1259; // 0x4e9 JumpB
	var_203_bool = 1; // 0x4ea MovB
	
Label_1259:
	if(var_203_bool == 0) goto Label_1267; // 0x4eb JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x4ec PushV
	var_225_object = var_1_object; // 0x4ed MovT
	func_5362(var_225_object); // 0x4ee NEW_2
	var_230_bool = var_224_bool == 0; // 0x4f0 Not
	if(var_230_bool == 0) goto Label_1267; // 0x4f1 JumpB
	var_202_bool = 1; // 0x4f2 MovB
	
Label_1267:
	if(var_202_bool == 0) goto Label_1273; // 0x4f3 JumpB
	var_231_int = 512730; // 0x4f4 PushI
	var_232_int = 11927; // 0x4f5 PushI
	var_233_int = 13923; // 0x4f6 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x4f7 TObjFunc
	
Label_1273:
	var_234_int = 512732; // 0x4f9 PushI
	var_235_int = -1; // 0x4fa PushI
	var_236_int = 13926; // 0x4fb PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x4fc TObjFunc
	return 0; // 0x4fe Return
	
Label_1279:
	var_237_int = 11927; // 0x4ff PushI
	var_238_bool = var_41_bool == var_237_int; // 0x500 Eq
	if(var_238_bool == 0) goto Label_1302; // 0x501 JumpB
	var_239_string = ""; // 0x502 PushV
	var_239_string = "Neutral"; // 0x503 MovS
	func_1079(var_42_cvector, var_239_string); // 0x504 NEW_2
	var_240_int = 510791; // 0x506 PushI
	SetMessage(var_240_int); // 0x507 TObjFunc
	ClearReplies(); // 0x509 TObjFunc
	var_241_int = 510792; // 0x50b PushI
	var_242_int = 11929; // 0x50c PushI
	var_243_int = 11928; // 0x50d PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x50e TObjFunc
	var_244_int = 510810; // 0x510 PushI
	var_245_int = 11929; // 0x511 PushI
	var_246_int = 11950; // 0x512 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x513 TObjFunc
	return 0; // 0x515 Return
	
Label_1302:
	var_247_int = 11929; // 0x516 PushI
	var_248_bool = var_41_bool == var_247_int; // 0x517 Eq
	if(var_248_bool == 0) goto Label_1325; // 0x518 JumpB
	var_249_string = ""; // 0x519 PushV
	var_249_string = "Neutral"; // 0x51a MovS
	func_1079(var_42_cvector, var_249_string); // 0x51b NEW_2
	var_250_int = 510793; // 0x51d PushI
	SetMessage(var_250_int); // 0x51e TObjFunc
	ClearReplies(); // 0x520 TObjFunc
	var_251_int = 510794; // 0x522 PushI
	var_252_int = 11931; // 0x523 PushI
	var_253_int = 11930; // 0x524 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x525 TObjFunc
	var_254_int = 510808; // 0x527 PushI
	var_255_int = 11931; // 0x528 PushI
	var_256_int = 11946; // 0x529 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x52a TObjFunc
	return 0; // 0x52c Return
	
Label_1325:
	var_257_int = 11931; // 0x52d PushI
	var_258_bool = var_41_bool == var_257_int; // 0x52e Eq
	if(var_258_bool == 0) goto Label_1348; // 0x52f JumpB
	var_259_string = ""; // 0x530 PushV
	var_259_string = "Neutral"; // 0x531 MovS
	func_1079(var_42_cvector, var_259_string); // 0x532 NEW_2
	var_260_int = 510795; // 0x534 PushI
	SetMessage(var_260_int); // 0x535 TObjFunc
	ClearReplies(); // 0x537 TObjFunc
	var_261_int = 510796; // 0x539 PushI
	var_262_int = 11933; // 0x53a PushI
	var_263_int = 11932; // 0x53b PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x53c TObjFunc
	var_264_int = 510807; // 0x53e PushI
	var_265_int = 11933; // 0x53f PushI
	var_266_int = 11945; // 0x540 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x541 TObjFunc
	return 0; // 0x543 Return
	
Label_1348:
	var_267_int = 11933; // 0x544 PushI
	var_268_bool = var_41_bool == var_267_int; // 0x545 Eq
	if(var_268_bool == 0) goto Label_1371; // 0x546 JumpB
	var_269_string = ""; // 0x547 PushV
	var_269_string = "Neutral"; // 0x548 MovS
	func_1079(var_42_cvector, var_269_string); // 0x549 NEW_2
	var_270_int = 510797; // 0x54b PushI
	SetMessage(var_270_int); // 0x54c TObjFunc
	ClearReplies(); // 0x54e TObjFunc
	var_271_int = 510798; // 0x550 PushI
	var_272_int = 11935; // 0x551 PushI
	var_273_int = 11934; // 0x552 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x553 TObjFunc
	var_274_int = 510806; // 0x555 PushI
	var_275_int = 11937; // 0x556 PushI
	var_276_int = 11943; // 0x557 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x558 TObjFunc
	return 0; // 0x55a Return
	
Label_1371:
	var_277_int = 11935; // 0x55b PushI
	var_278_bool = var_41_bool == var_277_int; // 0x55c Eq
	if(var_278_bool == 0) goto Label_1394; // 0x55d JumpB
	var_279_string = ""; // 0x55e PushV
	var_279_string = "Neutral"; // 0x55f MovS
	func_1079(var_42_cvector, var_279_string); // 0x560 NEW_2
	var_280_int = 510799; // 0x562 PushI
	SetMessage(var_280_int); // 0x563 TObjFunc
	ClearReplies(); // 0x565 TObjFunc
	var_281_int = 510800; // 0x567 PushI
	var_282_int = 11937; // 0x568 PushI
	var_283_int = 11936; // 0x569 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x56a TObjFunc
	var_284_int = 510805; // 0x56c PushI
	var_285_int = 11937; // 0x56d PushI
	var_286_int = 11941; // 0x56e PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x56f TObjFunc
	return 0; // 0x571 Return
	
Label_1394:
	var_287_int = 11937; // 0x572 PushI
	var_288_bool = var_41_bool == var_287_int; // 0x573 Eq
	if(var_288_bool == 0) goto Label_1417; // 0x574 JumpB
	var_289_string = ""; // 0x575 PushV
	var_289_string = "Neutral"; // 0x576 MovS
	func_1079(var_42_cvector, var_289_string); // 0x577 NEW_2
	var_290_int = 510801; // 0x579 PushI
	SetMessage(var_290_int); // 0x57a TObjFunc
	ClearReplies(); // 0x57c TObjFunc
	var_291_int = 510803; // 0x57e PushI
	var_292_int = -1; // 0x57f PushI
	var_293_int = 11939; // 0x580 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x581 TObjFunc
	var_294_int = 510804; // 0x583 PushI
	var_295_int = -1; // 0x584 PushI
	var_296_int = 11940; // 0x585 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x586 TObjFunc
	return 0; // 0x588 Return
	
Label_1417:
	var_297_int = 3851; // 0x589 PushI
	var_298_bool = var_41_bool == var_297_int; // 0x58a Eq
	if(var_298_bool == 0) goto Label_1445; // 0x58b JumpB
	var_299_string = ""; // 0x58c PushV
	var_299_string = "Neutral"; // 0x58d MovS
	func_1079(var_42_cvector, var_299_string); // 0x58e NEW_2
	var_300_int = 503562; // 0x590 PushI
	SetMessage(var_300_int); // 0x591 TObjFunc
	ClearReplies(); // 0x593 TObjFunc
	var_301_int = 503563; // 0x595 PushI
	var_302_int = 3858; // 0x596 PushI
	var_303_int = 3852; // 0x597 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x598 TObjFunc
	var_304_int = 503564; // 0x59a PushI
	var_305_int = 3858; // 0x59b PushI
	var_306_int = 3853; // 0x59c PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x59d TObjFunc
	var_307_int = 503565; // 0x59f PushI
	var_308_int = 3855; // 0x5a0 PushI
	var_309_int = 3854; // 0x5a1 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x5a2 TObjFunc
	return 0; // 0x5a4 Return
	
Label_1445:
	var_310_int = 3855; // 0x5a5 PushI
	var_311_bool = var_41_bool == var_310_int; // 0x5a6 Eq
	if(var_311_bool == 0) goto Label_1463; // 0x5a7 JumpB
	var_312_string = ""; // 0x5a8 PushV
	var_312_string = "Neutral"; // 0x5a9 MovS
	func_1079(var_42_cvector, var_312_string); // 0x5aa NEW_2
	var_313_int = 503566; // 0x5ac PushI
	SetMessage(var_313_int); // 0x5ad TObjFunc
	ClearReplies(); // 0x5af TObjFunc
	var_314_int = 503568; // 0x5b1 PushI
	var_315_int = -1; // 0x5b2 PushI
	var_316_int = 3857; // 0x5b3 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x5b4 TObjFunc
	return 0; // 0x5b6 Return
	
Label_1463:
	var_317_int = 3858; // 0x5b7 PushI
	var_318_bool = var_41_bool == var_317_int; // 0x5b8 Eq
	if(var_318_bool == 0) goto Label_1491; // 0x5b9 JumpB
	var_319_string = ""; // 0x5ba PushV
	var_319_string = "Neutral"; // 0x5bb MovS
	func_1079(var_42_cvector, var_319_string); // 0x5bc NEW_2
	var_320_int = 503569; // 0x5be PushI
	SetMessage(var_320_int); // 0x5bf TObjFunc
	ClearReplies(); // 0x5c1 TObjFunc
	var_321_int = 503571; // 0x5c3 PushI
	var_322_int = 3862; // 0x5c4 PushI
	var_323_int = 3861; // 0x5c5 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x5c6 TObjFunc
	var_324_int = 503582; // 0x5c8 PushI
	var_325_int = 3874; // 0x5c9 PushI
	var_326_int = 3873; // 0x5ca PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x5cb TObjFunc
	var_327_int = 503570; // 0x5cd PushI
	var_328_int = -1; // 0x5ce PushI
	var_329_int = 3860; // 0x5cf PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x5d0 TObjFunc
	return 0; // 0x5d2 Return
	
Label_1491:
	var_330_int = 3874; // 0x5d3 PushI
	var_331_bool = var_41_bool == var_330_int; // 0x5d4 Eq
	if(var_331_bool == 0) goto Label_1509; // 0x5d5 JumpB
	var_332_string = ""; // 0x5d6 PushV
	var_332_string = "Neutral"; // 0x5d7 MovS
	func_1079(var_42_cvector, var_332_string); // 0x5d8 NEW_2
	var_333_int = 503583; // 0x5da PushI
	SetMessage(var_333_int); // 0x5db TObjFunc
	ClearReplies(); // 0x5dd TObjFunc
	var_334_int = 503584; // 0x5df PushI
	var_335_int = 3867; // 0x5e0 PushI
	var_336_int = 3875; // 0x5e1 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x5e2 TObjFunc
	return 0; // 0x5e4 Return
	
Label_1509:
	var_337_int = 3862; // 0x5e5 PushI
	var_338_bool = var_41_bool == var_337_int; // 0x5e6 Eq
	if(var_338_bool == 0) goto Label_1532; // 0x5e7 JumpB
	var_339_string = ""; // 0x5e8 PushV
	var_339_string = "Neutral"; // 0x5e9 MovS
	func_1079(var_42_cvector, var_339_string); // 0x5ea NEW_2
	var_340_int = 503572; // 0x5ec PushI
	SetMessage(var_340_int); // 0x5ed TObjFunc
	ClearReplies(); // 0x5ef TObjFunc
	var_341_int = 503573; // 0x5f1 PushI
	var_342_int = 3864; // 0x5f2 PushI
	var_343_int = 3863; // 0x5f3 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x5f4 TObjFunc
	var_344_int = 503576; // 0x5f6 PushI
	var_345_int = 3867; // 0x5f7 PushI
	var_346_int = 3866; // 0x5f8 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x5f9 TObjFunc
	return 0; // 0x5fb Return
	
Label_1532:
	var_347_int = 3864; // 0x5fc PushI
	var_348_bool = var_41_bool == var_347_int; // 0x5fd Eq
	if(var_348_bool == 0) goto Label_1555; // 0x5fe JumpB
	var_349_string = ""; // 0x5ff PushV
	var_349_string = "Neutral"; // 0x600 MovS
	func_1079(var_42_cvector, var_349_string); // 0x601 NEW_2
	var_350_int = 503574; // 0x603 PushI
	SetMessage(var_350_int); // 0x604 TObjFunc
	ClearReplies(); // 0x606 TObjFunc
	var_351_int = 503575; // 0x608 PushI
	var_352_int = 3867; // 0x609 PushI
	var_353_int = 3865; // 0x60a PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x60b TObjFunc
	var_354_int = 503579; // 0x60d PushI
	var_355_int = -1; // 0x60e PushI
	var_356_int = 3870; // 0x60f PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x610 TObjFunc
	return 0; // 0x612 Return
	
Label_1555:
	var_357_int = 3867; // 0x613 PushI
	var_358_bool = var_41_bool == var_357_int; // 0x614 Eq
	if(var_358_bool == 0) goto Label_1573; // 0x615 JumpB
	var_359_string = ""; // 0x616 PushV
	var_359_string = "Neutral"; // 0x617 MovS
	func_1079(var_42_cvector, var_359_string); // 0x618 NEW_2
	var_360_int = 503577; // 0x61a PushI
	SetMessage(var_360_int); // 0x61b TObjFunc
	ClearReplies(); // 0x61d TObjFunc
	var_361_int = 503581; // 0x61f PushI
	var_362_int = -1; // 0x620 PushI
	var_363_int = 3872; // 0x621 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x622 TObjFunc
	return 0; // 0x624 Return
	
Label_1573:
	var_3_string = 1; // 0x625 TMovB
	var_364_bool = 0; // 0x626 PushV
	func_4882(var_364_bool); // 0x627 NEW_2
	if(var_364_bool == 0) goto Label_1581; // 0x629 JumpB
	lshStopAnimation(); // 0x62a Func
	goto Label_1583; // 0x62c Jump
	
Label_1583:
	return 0; // 0x62f Return
	
Label_1581:
	StopAnimation(); // 0x62d Func
	
Label_1585:
	return 0; // 0x631 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x717 PushI
	if(var_43_int == 0) goto Label_2400; // 0x718 JumpB
	func_4746(); // 0x71a NEW_2
	var_45_int = 9768; // 0x71c PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x71d Eq
	if(var_46_bool == 0) goto Label_1838; // 0x71e JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x71f PushV
	var_47_object = var_1_object; // 0x720 MovT
	var_48_object = var_0_object; // 0x721 MovT
	func_4924(); // 0x722 NEW_2
	var_90_object = Obj(); var_91_object = Obj(); // 0x724 PushV
	var_90_object = var_1_object; // 0x725 MovT
	var_91_object = var_0_object; // 0x726 MovT
	func_4912(); // 0x727 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0x729 PushV
	var_94_object = var_1_object; // 0x72a MovT
	var_95_object = var_0_object; // 0x72b MovT
	func_4967(); // 0x72c NEW_2
	
Label_1838:
	var_120_int = 9769; // 0x72e PushI
	var_121_bool = var_42_cvector == var_120_int; // 0x72f Eq
	if(var_121_bool == 0) goto Label_1846; // 0x730 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x731 PushV
	var_122_object = var_1_object; // 0x732 MovT
	var_123_object = var_0_object; // 0x733 MovT
	func_4912(); // 0x734 NEW_2
	
Label_1846:
	var_124_int = 9760; // 0x736 PushI
	var_125_bool = var_42_cvector == var_124_int; // 0x737 Eq
	if(var_125_bool == 0) goto Label_1854; // 0x738 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x739 PushV
	var_126_object = var_1_object; // 0x73a MovT
	var_127_object = var_0_object; // 0x73b MovT
	func_4912(); // 0x73c NEW_2
	
Label_1854:
	var_128_int = 9762; // 0x73e PushI
	var_129_bool = var_42_cvector == var_128_int; // 0x73f Eq
	if(var_129_bool == 0) goto Label_1862; // 0x740 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x741 PushV
	var_130_object = var_1_object; // 0x742 MovT
	var_131_object = var_0_object; // 0x743 MovT
	func_4912(); // 0x744 NEW_2
	
Label_1862:
	var_132_int = 12327; // 0x746 PushI
	var_133_bool = var_42_cvector == var_132_int; // 0x747 Eq
	if(var_133_bool == 0) goto Label_1880; // 0x748 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x749 PushV
	var_134_object = var_1_object; // 0x74a MovT
	var_135_object = var_0_object; // 0x74b MovT
	func_4924(); // 0x74c NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x74e PushV
	var_136_object = var_1_object; // 0x74f MovT
	var_137_object = var_0_object; // 0x750 MovT
	func_4947(); // 0x751 NEW_2
	var_140_object = Obj(); var_141_object = Obj(); // 0x753 PushV
	var_140_object = var_1_object; // 0x754 MovT
	var_141_object = var_0_object; // 0x755 MovT
	func_4967(); // 0x756 NEW_2
	
Label_1880:
	var_142_int = 9788; // 0x758 PushI
	var_143_bool = var_42_cvector == var_142_int; // 0x759 Eq
	if(var_143_bool == 0) goto Label_1893; // 0x75a JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0x75b PushV
	var_144_object = var_1_object; // 0x75c MovT
	var_145_object = var_0_object; // 0x75d MovT
	func_4918(); // 0x75e NEW_2
	var_148_object = Obj(); var_149_object = Obj(); // 0x760 PushV
	var_148_object = var_1_object; // 0x761 MovT
	var_149_object = var_0_object; // 0x762 MovT
	func_4953(); // 0x763 NEW_2
	
Label_1893:
	var_166_int = 9789; // 0x765 PushI
	var_167_bool = var_42_cvector == var_166_int; // 0x766 Eq
	if(var_167_bool == 0) goto Label_1906; // 0x767 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x768 PushV
	var_168_object = var_1_object; // 0x769 MovT
	var_169_object = var_0_object; // 0x76a MovT
	func_4918(); // 0x76b NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x76d PushV
	var_170_object = var_1_object; // 0x76e MovT
	var_171_object = var_0_object; // 0x76f MovT
	func_4953(); // 0x770 NEW_2
	
Label_1906:
	var_172_int = 9728; // 0x772 PushI
	var_173_bool = var_41_bool == var_172_int; // 0x773 Eq
	if(var_173_bool == 0) goto Label_1996; // 0x774 JumpB
	var_174_string = ""; // 0x775 PushV
	var_174_string = "Neutral"; // 0x776 MovS
	func_1792(var_42_cvector, var_174_string); // 0x777 NEW_2
	var_191_int = 508869; // 0x779 PushI
	SetMessage(var_191_int); // 0x77a TObjFunc
	ClearReplies(); // 0x77c TObjFunc
	var_192_bool = 0; // 0x77e PushV
	var_192_bool = 0; // 0x77f MovB
	var_193_bool = 0; var_194_object = Obj(); // 0x780 PushV
	var_194_object = var_1_object; // 0x781 MovT
	func_5158(var_194_object); // 0x782 NEW_2
	if(var_193_bool == 0) goto Label_1931; // 0x784 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x785 PushV
	var_202_object = var_1_object; // 0x786 MovT
	func_5194(var_202_object); // 0x787 NEW_2
	if(var_201_bool == 0) goto Label_1931; // 0x789 JumpB
	var_192_bool = 1; // 0x78a MovB
	
Label_1931:
	if(var_192_bool == 0) goto Label_1937; // 0x78b JumpB
	var_207_int = 508889; // 0x78c PushI
	var_208_int = 9751; // 0x78d PushI
	var_209_int = 9750; // 0x78e PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x78f TObjFunc
	
Label_1937:
	var_210_bool = 0; // 0x791 PushV
	var_210_bool = 0; // 0x792 MovB
	var_211_bool = 0; // 0x793 PushV
	var_211_bool = 0; // 0x794 MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x795 PushV
	var_213_object = var_1_object; // 0x796 MovT
	func_5182(var_213_object); // 0x797 NEW_2
	if(var_212_bool == 0) goto Label_1953; // 0x799 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x79a PushV
	var_219_object = var_1_object; // 0x79b MovT
	func_5158(var_219_object); // 0x79c NEW_2
	var_220_bool = var_218_bool == 0; // 0x79e Not
	if(var_220_bool == 0) goto Label_1953; // 0x79f JumpB
	var_211_bool = 1; // 0x7a0 MovB
	
Label_1953:
	if(var_211_bool == 0) goto Label_1960; // 0x7a1 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x7a2 PushV
	var_222_object = var_1_object; // 0x7a3 MovT
	func_5194(var_222_object); // 0x7a4 NEW_2
	if(var_221_bool == 0) goto Label_1960; // 0x7a6 JumpB
	var_210_bool = 1; // 0x7a7 MovB
	
Label_1960:
	if(var_210_bool == 0) goto Label_1966; // 0x7a8 JumpB
	var_223_int = 511136; // 0x7a9 PushI
	var_224_int = 12326; // 0x7aa PushI
	var_225_int = 12325; // 0x7ab PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x7ac TObjFunc
	
Label_1966:
	var_226_bool = 0; // 0x7ae PushV
	var_226_bool = 0; // 0x7af MovB
	var_227_bool = 0; var_228_object = Obj(); // 0x7b0 PushV
	var_228_object = var_1_object; // 0x7b1 MovT
	func_5170(var_228_object); // 0x7b2 NEW_2
	if(var_227_bool == 0) goto Label_1979; // 0x7b4 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x7b5 PushV
	var_234_object = var_1_object; // 0x7b6 MovT
	func_5206(var_234_object); // 0x7b7 NEW_2
	if(var_233_bool == 0) goto Label_1979; // 0x7b9 JumpB
	var_226_bool = 1; // 0x7ba MovB
	
Label_1979:
	if(var_226_bool == 0) goto Label_1985; // 0x7bb JumpB
	var_239_int = 508908; // 0x7bc PushI
	var_240_int = 9772; // 0x7bd PushI
	var_241_int = 9771; // 0x7be PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x7bf TObjFunc
	
Label_1985:
	var_242_int = 511134; // 0x7c1 PushI
	var_243_int = -1; // 0x7c2 PushI
	var_244_int = 12323; // 0x7c3 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x7c4 TObjFunc
	var_245_int = 536099; // 0x7c6 PushI
	var_246_int = -1; // 0x7c7 PushI
	var_247_int = 37851; // 0x7c8 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x7c9 TObjFunc
	return 0; // 0x7cb Return
	
Label_1996:
	var_248_int = 9772; // 0x7cc PushI
	var_249_bool = var_41_bool == var_248_int; // 0x7cd Eq
	if(var_249_bool == 0) goto Label_2019; // 0x7ce JumpB
	var_250_string = ""; // 0x7cf PushV
	var_250_string = "Neutral"; // 0x7d0 MovS
	func_1792(var_42_cvector, var_250_string); // 0x7d1 NEW_2
	var_251_int = 508909; // 0x7d3 PushI
	SetMessage(var_251_int); // 0x7d4 TObjFunc
	ClearReplies(); // 0x7d6 TObjFunc
	var_252_int = 508913; // 0x7d8 PushI
	var_253_int = 9778; // 0x7d9 PushI
	var_254_int = 9777; // 0x7da PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x7db TObjFunc
	var_255_int = 508910; // 0x7dd PushI
	var_256_int = 9778; // 0x7de PushI
	var_257_int = 9773; // 0x7df PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x7e0 TObjFunc
	return 0; // 0x7e2 Return
	
Label_2019:
	var_258_int = 9778; // 0x7e3 PushI
	var_259_bool = var_41_bool == var_258_int; // 0x7e4 Eq
	if(var_259_bool == 0) goto Label_2042; // 0x7e5 JumpB
	var_260_string = ""; // 0x7e6 PushV
	var_260_string = "Neutral"; // 0x7e7 MovS
	func_1792(var_42_cvector, var_260_string); // 0x7e8 NEW_2
	var_261_int = 508914; // 0x7ea PushI
	SetMessage(var_261_int); // 0x7eb TObjFunc
	ClearReplies(); // 0x7ed TObjFunc
	var_262_int = 508916; // 0x7ef PushI
	var_263_int = 9781; // 0x7f0 PushI
	var_264_int = 9780; // 0x7f1 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x7f2 TObjFunc
	var_265_int = 508918; // 0x7f4 PushI
	var_266_int = 9783; // 0x7f5 PushI
	var_267_int = 9782; // 0x7f6 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x7f7 TObjFunc
	return 0; // 0x7f9 Return
	
Label_2042:
	var_268_int = 9783; // 0x7fa PushI
	var_269_bool = var_41_bool == var_268_int; // 0x7fb Eq
	if(var_269_bool == 0) goto Label_2060; // 0x7fc JumpB
	var_270_string = ""; // 0x7fd PushV
	var_270_string = "Neutral"; // 0x7fe MovS
	func_1792(var_42_cvector, var_270_string); // 0x7ff NEW_2
	var_271_int = 508919; // 0x801 PushI
	SetMessage(var_271_int); // 0x802 TObjFunc
	ClearReplies(); // 0x804 TObjFunc
	var_272_int = 508920; // 0x806 PushI
	var_273_int = 9786; // 0x807 PushI
	var_274_int = 9784; // 0x808 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x809 TObjFunc
	return 0; // 0x80b Return
	
Label_2060:
	var_275_int = 9781; // 0x80c PushI
	var_276_bool = var_41_bool == var_275_int; // 0x80d Eq
	if(var_276_bool == 0) goto Label_2078; // 0x80e JumpB
	var_277_string = ""; // 0x80f PushV
	var_277_string = "Neutral"; // 0x810 MovS
	func_1792(var_42_cvector, var_277_string); // 0x811 NEW_2
	var_278_int = 508917; // 0x813 PushI
	SetMessage(var_278_int); // 0x814 TObjFunc
	ClearReplies(); // 0x816 TObjFunc
	var_279_int = 508921; // 0x818 PushI
	var_280_int = 9786; // 0x819 PushI
	var_281_int = 9785; // 0x81a PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x81b TObjFunc
	return 0; // 0x81d Return
	
Label_2078:
	var_282_int = 9786; // 0x81e PushI
	var_283_bool = var_41_bool == var_282_int; // 0x81f Eq
	if(var_283_bool == 0) goto Label_2101; // 0x820 JumpB
	var_284_string = ""; // 0x821 PushV
	var_284_string = "Neutral"; // 0x822 MovS
	func_1792(var_42_cvector, var_284_string); // 0x823 NEW_2
	var_285_int = 508922; // 0x825 PushI
	SetMessage(var_285_int); // 0x826 TObjFunc
	ClearReplies(); // 0x828 TObjFunc
	var_286_int = 508923; // 0x82a PushI
	var_287_int = -1; // 0x82b PushI
	var_288_int = 9788; // 0x82c PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x82d TObjFunc
	var_289_int = 508924; // 0x82f PushI
	var_290_int = -1; // 0x830 PushI
	var_291_int = 9789; // 0x831 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x832 TObjFunc
	return 0; // 0x834 Return
	
Label_2101:
	var_292_int = 9729; // 0x835 PushI
	var_293_bool = var_41_bool == var_292_int; // 0x836 Eq
	if(var_293_bool == 0) goto Label_2104; // 0x837 JumpB
	
Label_2104:
	var_294_int = 9731; // 0x838 PushI
	var_295_bool = var_41_bool == var_294_int; // 0x839 Eq
	if(var_295_bool == 0) goto Label_2127; // 0x83a JumpB
	var_296_string = ""; // 0x83b PushV
	var_296_string = "Grimacing"; // 0x83c MovS
	func_1792(var_42_cvector, var_296_string); // 0x83d NEW_2
	var_297_int = 508872; // 0x83f PushI
	SetMessage(var_297_int); // 0x840 TObjFunc
	ClearReplies(); // 0x842 TObjFunc
	var_298_int = 508873; // 0x844 PushI
	var_299_int = 9733; // 0x845 PushI
	var_300_int = 9732; // 0x846 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x847 TObjFunc
	var_301_int = 508880; // 0x849 PushI
	var_302_int = 9740; // 0x84a PushI
	var_303_int = 9739; // 0x84b PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x84c TObjFunc
	return 0; // 0x84e Return
	
Label_2127:
	var_304_int = 9740; // 0x84f PushI
	var_305_bool = var_41_bool == var_304_int; // 0x850 Eq
	if(var_305_bool == 0) goto Label_2150; // 0x851 JumpB
	var_306_string = ""; // 0x852 PushV
	var_306_string = "Neutral"; // 0x853 MovS
	func_1792(var_42_cvector, var_306_string); // 0x854 NEW_2
	var_307_int = 508881; // 0x856 PushI
	SetMessage(var_307_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_308_int = 508882; // 0x85b PushI
	var_309_int = 9733; // 0x85c PushI
	var_310_int = 9741; // 0x85d PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x85e TObjFunc
	var_311_int = 508883; // 0x860 PushI
	var_312_int = 9744; // 0x861 PushI
	var_313_int = 9743; // 0x862 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x863 TObjFunc
	return 0; // 0x865 Return
	
Label_2150:
	var_314_int = 9744; // 0x866 PushI
	var_315_bool = var_41_bool == var_314_int; // 0x867 Eq
	if(var_315_bool == 0) goto Label_2173; // 0x868 JumpB
	var_316_string = ""; // 0x869 PushV
	var_316_string = "Neutral"; // 0x86a MovS
	func_1792(var_42_cvector, var_316_string); // 0x86b NEW_2
	var_317_int = 508884; // 0x86d PushI
	SetMessage(var_317_int); // 0x86e TObjFunc
	ClearReplies(); // 0x870 TObjFunc
	var_318_int = 508885; // 0x872 PushI
	var_319_int = -1; // 0x873 PushI
	var_320_int = 9745; // 0x874 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x875 TObjFunc
	var_321_int = 508886; // 0x877 PushI
	var_322_int = -1; // 0x878 PushI
	var_323_int = 9746; // 0x879 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x87a TObjFunc
	return 0; // 0x87c Return
	
Label_2173:
	var_324_int = 9733; // 0x87d PushI
	var_325_bool = var_41_bool == var_324_int; // 0x87e Eq
	if(var_325_bool == 0) goto Label_2196; // 0x87f JumpB
	var_326_string = ""; // 0x880 PushV
	var_326_string = "Grimacing"; // 0x881 MovS
	func_1792(var_42_cvector, var_326_string); // 0x882 NEW_2
	var_327_int = 508874; // 0x884 PushI
	SetMessage(var_327_int); // 0x885 TObjFunc
	ClearReplies(); // 0x887 TObjFunc
	var_328_int = 508875; // 0x889 PushI
	var_329_int = 9735; // 0x88a PushI
	var_330_int = 9734; // 0x88b PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x88c TObjFunc
	var_331_int = 508879; // 0x88e PushI
	var_332_int = -1; // 0x88f PushI
	var_333_int = 9738; // 0x890 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x891 TObjFunc
	return 0; // 0x893 Return
	
Label_2196:
	var_334_int = 9735; // 0x894 PushI
	var_335_bool = var_41_bool == var_334_int; // 0x895 Eq
	if(var_335_bool == 0) goto Label_2219; // 0x896 JumpB
	var_336_string = ""; // 0x897 PushV
	var_336_string = "Neutral"; // 0x898 MovS
	func_1792(var_42_cvector, var_336_string); // 0x899 NEW_2
	var_337_int = 508876; // 0x89b PushI
	SetMessage(var_337_int); // 0x89c TObjFunc
	ClearReplies(); // 0x89e TObjFunc
	var_338_int = 508877; // 0x8a0 PushI
	var_339_int = -1; // 0x8a1 PushI
	var_340_int = 9736; // 0x8a2 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x8a3 TObjFunc
	var_341_int = 508878; // 0x8a5 PushI
	var_342_int = -1; // 0x8a6 PushI
	var_343_int = 9737; // 0x8a7 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x8a8 TObjFunc
	return 0; // 0x8aa Return
	
Label_2219:
	var_344_int = 12326; // 0x8ab PushI
	var_345_bool = var_41_bool == var_344_int; // 0x8ac Eq
	if(var_345_bool == 0) goto Label_2237; // 0x8ad JumpB
	var_346_string = ""; // 0x8ae PushV
	var_346_string = "Neutral"; // 0x8af MovS
	func_1792(var_42_cvector, var_346_string); // 0x8b0 NEW_2
	var_347_int = 511137; // 0x8b2 PushI
	SetMessage(var_347_int); // 0x8b3 TObjFunc
	ClearReplies(); // 0x8b5 TObjFunc
	var_348_int = 536097; // 0x8b7 PushI
	var_349_int = 37850; // 0x8b8 PushI
	var_350_int = 37849; // 0x8b9 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x8ba TObjFunc
	return 0; // 0x8bc Return
	
Label_2237:
	var_351_int = 37850; // 0x8bd PushI
	var_352_bool = var_41_bool == var_351_int; // 0x8be Eq
	if(var_352_bool == 0) goto Label_2255; // 0x8bf JumpB
	var_353_string = ""; // 0x8c0 PushV
	var_353_string = "Neutral"; // 0x8c1 MovS
	func_1792(var_42_cvector, var_353_string); // 0x8c2 NEW_2
	var_354_int = 536098; // 0x8c4 PushI
	SetMessage(var_354_int); // 0x8c5 TObjFunc
	ClearReplies(); // 0x8c7 TObjFunc
	var_355_int = 511138; // 0x8c9 PushI
	var_356_int = -1; // 0x8ca PushI
	var_357_int = 12327; // 0x8cb PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x8cc TObjFunc
	return 0; // 0x8ce Return
	
Label_2255:
	var_358_int = 9751; // 0x8cf PushI
	var_359_bool = var_41_bool == var_358_int; // 0x8d0 Eq
	if(var_359_bool == 0) goto Label_2278; // 0x8d1 JumpB
	var_360_string = ""; // 0x8d2 PushV
	var_360_string = "Neutral"; // 0x8d3 MovS
	func_1792(var_42_cvector, var_360_string); // 0x8d4 NEW_2
	var_361_int = 508890; // 0x8d6 PushI
	SetMessage(var_361_int); // 0x8d7 TObjFunc
	ClearReplies(); // 0x8d9 TObjFunc
	var_362_int = 508891; // 0x8db PushI
	var_363_int = 9753; // 0x8dc PushI
	var_364_int = 9752; // 0x8dd PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x8de TObjFunc
	var_365_int = 508893; // 0x8e0 PushI
	var_366_int = 9759; // 0x8e1 PushI
	var_367_int = 9754; // 0x8e2 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x8e3 TObjFunc
	return 0; // 0x8e5 Return
	
Label_2278:
	var_368_int = 9759; // 0x8e6 PushI
	var_369_bool = var_41_bool == var_368_int; // 0x8e7 Eq
	if(var_369_bool == 0) goto Label_2301; // 0x8e8 JumpB
	var_370_string = ""; // 0x8e9 PushV
	var_370_string = "Neutral"; // 0x8ea MovS
	func_1792(var_42_cvector, var_370_string); // 0x8eb NEW_2
	var_371_int = 508898; // 0x8ed PushI
	SetMessage(var_371_int); // 0x8ee TObjFunc
	ClearReplies(); // 0x8f0 TObjFunc
	var_372_int = 508899; // 0x8f2 PushI
	var_373_int = -1; // 0x8f3 PushI
	var_374_int = 9760; // 0x8f4 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x8f5 TObjFunc
	var_375_int = 508900; // 0x8f7 PushI
	var_376_int = -1; // 0x8f8 PushI
	var_377_int = 9762; // 0x8f9 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x8fa TObjFunc
	return 0; // 0x8fc Return
	
Label_2301:
	var_378_int = 9753; // 0x8fd PushI
	var_379_bool = var_41_bool == var_378_int; // 0x8fe Eq
	if(var_379_bool == 0) goto Label_2319; // 0x8ff JumpB
	var_380_string = ""; // 0x900 PushV
	var_380_string = "Neutral"; // 0x901 MovS
	func_1792(var_42_cvector, var_380_string); // 0x902 NEW_2
	var_381_int = 508892; // 0x904 PushI
	SetMessage(var_381_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_382_int = 508894; // 0x909 PushI
	var_383_int = 9756; // 0x90a PushI
	var_384_int = 9755; // 0x90b PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x90c TObjFunc
	return 0; // 0x90e Return
	
Label_2319:
	var_385_int = 9756; // 0x90f PushI
	var_386_bool = var_41_bool == var_385_int; // 0x910 Eq
	if(var_386_bool == 0) goto Label_2342; // 0x911 JumpB
	var_387_string = ""; // 0x912 PushV
	var_387_string = "Neutral"; // 0x913 MovS
	func_1792(var_42_cvector, var_387_string); // 0x914 NEW_2
	var_388_int = 508895; // 0x916 PushI
	SetMessage(var_388_int); // 0x917 TObjFunc
	ClearReplies(); // 0x919 TObjFunc
	var_389_int = 508896; // 0x91b PushI
	var_390_int = 9763; // 0x91c PushI
	var_391_int = 9757; // 0x91d PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x91e TObjFunc
	var_392_int = 508897; // 0x920 PushI
	var_393_int = 9759; // 0x921 PushI
	var_394_int = 9758; // 0x922 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_395_int = 9763; // 0x926 PushI
	var_396_bool = var_41_bool == var_395_int; // 0x927 Eq
	if(var_396_bool == 0) goto Label_2365; // 0x928 JumpB
	var_397_string = ""; // 0x929 PushV
	var_397_string = "Neutral"; // 0x92a MovS
	func_1792(var_42_cvector, var_397_string); // 0x92b NEW_2
	var_398_int = 508901; // 0x92d PushI
	SetMessage(var_398_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_399_int = 508902; // 0x932 PushI
	var_400_int = 9766; // 0x933 PushI
	var_401_int = 9764; // 0x934 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x935 TObjFunc
	var_402_int = 508903; // 0x937 PushI
	var_403_int = 9766; // 0x938 PushI
	var_404_int = 9765; // 0x939 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x93a TObjFunc
	return 0; // 0x93c Return
	
Label_2365:
	var_405_int = 9766; // 0x93d PushI
	var_406_bool = var_41_bool == var_405_int; // 0x93e Eq
	if(var_406_bool == 0) goto Label_2388; // 0x93f JumpB
	var_407_string = ""; // 0x940 PushV
	var_407_string = "Neutral"; // 0x941 MovS
	func_1792(var_42_cvector, var_407_string); // 0x942 NEW_2
	var_408_int = 508904; // 0x944 PushI
	SetMessage(var_408_int); // 0x945 TObjFunc
	ClearReplies(); // 0x947 TObjFunc
	var_409_int = 508905; // 0x949 PushI
	var_410_int = -1; // 0x94a PushI
	var_411_int = 9768; // 0x94b PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x94c TObjFunc
	var_412_int = 508906; // 0x94e PushI
	var_413_int = -1; // 0x94f PushI
	var_414_int = 9769; // 0x950 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x951 TObjFunc
	return 0; // 0x953 Return
	
Label_2388:
	var_3_string = 1; // 0x954 TMovB
	var_415_bool = 0; // 0x955 PushV
	func_4882(var_415_bool); // 0x956 NEW_2
	if(var_415_bool == 0) goto Label_2396; // 0x958 JumpB
	lshStopAnimation(); // 0x959 Func
	goto Label_2398; // 0x95b Jump
	
Label_2398:
	return 0; // 0x95e Return
	
Label_2396:
	StopAnimation(); // 0x95c Func
	
Label_2400:
	return 0; // 0x960 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xa29 PushI
	if(var_43_int == 0) goto Label_2966; // 0xa2a JumpB
	func_4746(); // 0xa2c NEW_2
	var_45_int = 12266; // 0xa2e PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xa2f Eq
	if(var_46_bool == 0) goto Label_2624; // 0xa30 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xa31 PushV
	var_47_object = var_1_object; // 0xa32 MovT
	var_48_object = var_0_object; // 0xa33 MovT
	func_5035(); // 0xa34 NEW_2
	var_51_object = Obj(); var_52_object = Obj(); // 0xa36 PushV
	var_51_object = var_1_object; // 0xa37 MovT
	var_52_object = var_0_object; // 0xa38 MovT
	func_5015(); // 0xa39 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xa3b PushV
	var_71_object = var_1_object; // 0xa3c MovT
	var_72_object = var_0_object; // 0xa3d MovT
	func_4999(); // 0xa3e NEW_2
	
Label_2624:
	var_97_int = 12267; // 0xa40 PushI
	var_98_bool = var_42_cvector == var_97_int; // 0xa41 Eq
	if(var_98_bool == 0) goto Label_2642; // 0xa42 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0xa43 PushV
	var_99_object = var_1_object; // 0xa44 MovT
	var_100_object = var_0_object; // 0xa45 MovT
	func_5035(); // 0xa46 NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0xa48 PushV
	var_101_object = var_1_object; // 0xa49 MovT
	var_102_object = var_0_object; // 0xa4a MovT
	func_5015(); // 0xa4b NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0xa4d PushV
	var_103_object = var_1_object; // 0xa4e MovT
	var_104_object = var_0_object; // 0xa4f MovT
	func_4999(); // 0xa50 NEW_2
	
Label_2642:
	var_105_int = 12281; // 0xa52 PushI
	var_106_bool = var_42_cvector == var_105_int; // 0xa53 Eq
	if(var_106_bool == 0) goto Label_2655; // 0xa54 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0xa55 PushV
	var_107_object = var_1_object; // 0xa56 MovT
	var_108_object = var_0_object; // 0xa57 MovT
	func_5047(); // 0xa58 NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0xa5a PushV
	var_111_object = var_1_object; // 0xa5b MovT
	var_112_object = var_0_object; // 0xa5c MovT
	func_5041(); // 0xa5d NEW_2
	
Label_2655:
	var_115_int = 12246; // 0xa5f PushI
	var_116_bool = var_41_bool == var_115_int; // 0xa60 Eq
	if(var_116_bool == 0) goto Label_2716; // 0xa61 JumpB
	var_117_string = ""; // 0xa62 PushV
	var_117_string = "Neutral"; // 0xa63 MovS
	func_2578(var_42_cvector, var_117_string); // 0xa64 NEW_2
	var_134_int = 511065; // 0xa66 PushI
	SetMessage(var_134_int); // 0xa67 TObjFunc
	ClearReplies(); // 0xa69 TObjFunc
	var_135_bool = 0; // 0xa6b PushV
	var_135_bool = 0; // 0xa6c MovB
	var_136_bool = 0; var_137_object = Obj(); // 0xa6d PushV
	var_137_object = var_1_object; // 0xa6e MovT
	func_5230(var_137_object); // 0xa6f NEW_2
	if(var_136_bool == 0) goto Label_2680; // 0xa71 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0xa72 PushV
	var_145_object = var_1_object; // 0xa73 MovT
	func_5218(var_145_object); // 0xa74 NEW_2
	if(var_144_bool == 0) goto Label_2680; // 0xa76 JumpB
	var_135_bool = 1; // 0xa77 MovB
	
Label_2680:
	if(var_135_bool == 0) goto Label_2686; // 0xa78 JumpB
	var_150_int = 511066; // 0xa79 PushI
	var_151_int = 12248; // 0xa7a PushI
	var_152_int = 12247; // 0xa7b PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xa7c TObjFunc
	
Label_2686:
	var_153_bool = 0; // 0xa7e PushV
	var_153_bool = 0; // 0xa7f MovB
	var_154_bool = 0; var_155_object = Obj(); // 0xa80 PushV
	var_155_object = var_1_object; // 0xa81 MovT
	func_5254(var_155_object); // 0xa82 NEW_2
	if(var_154_bool == 0) goto Label_2699; // 0xa84 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0xa85 PushV
	var_161_object = var_1_object; // 0xa86 MovT
	func_5242(var_161_object); // 0xa87 NEW_2
	if(var_160_bool == 0) goto Label_2699; // 0xa89 JumpB
	var_153_bool = 1; // 0xa8a MovB
	
Label_2699:
	if(var_153_bool == 0) goto Label_2705; // 0xa8b JumpB
	var_166_int = 511079; // 0xa8c PushI
	var_167_int = 12268; // 0xa8d PushI
	var_168_int = 12263; // 0xa8e PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xa8f TObjFunc
	
Label_2705:
	var_169_int = 511505; // 0xa91 PushI
	var_170_int = -1; // 0xa92 PushI
	var_171_int = 12707; // 0xa93 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xa94 TObjFunc
	var_172_int = 536130; // 0xa96 PushI
	var_173_int = -1; // 0xa97 PushI
	var_174_int = 37889; // 0xa98 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xa99 TObjFunc
	return 0; // 0xa9b Return
	
Label_2716:
	var_175_int = 12268; // 0xa9c PushI
	var_176_bool = var_41_bool == var_175_int; // 0xa9d Eq
	if(var_176_bool == 0) goto Label_2739; // 0xa9e JumpB
	var_177_string = ""; // 0xa9f PushV
	var_177_string = "Neutral"; // 0xaa0 MovS
	func_2578(var_42_cvector, var_177_string); // 0xaa1 NEW_2
	var_178_int = 511083; // 0xaa3 PushI
	SetMessage(var_178_int); // 0xaa4 TObjFunc
	ClearReplies(); // 0xaa6 TObjFunc
	var_179_int = 511084; // 0xaa8 PushI
	var_180_int = 12271; // 0xaa9 PushI
	var_181_int = 12269; // 0xaaa PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xaab TObjFunc
	var_182_int = 511085; // 0xaad PushI
	var_183_int = 12272; // 0xaae PushI
	var_184_int = 12270; // 0xaaf PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xab0 TObjFunc
	return 0; // 0xab2 Return
	
Label_2739:
	var_185_int = 12272; // 0xab3 PushI
	var_186_bool = var_41_bool == var_185_int; // 0xab4 Eq
	if(var_186_bool == 0) goto Label_2757; // 0xab5 JumpB
	var_187_string = ""; // 0xab6 PushV
	var_187_string = "Neutral"; // 0xab7 MovS
	func_2578(var_42_cvector, var_187_string); // 0xab8 NEW_2
	var_188_int = 511087; // 0xaba PushI
	SetMessage(var_188_int); // 0xabb TObjFunc
	ClearReplies(); // 0xabd TObjFunc
	var_189_int = 511088; // 0xabf PushI
	var_190_int = 12275; // 0xac0 PushI
	var_191_int = 12273; // 0xac1 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xac2 TObjFunc
	return 0; // 0xac4 Return
	
Label_2757:
	var_192_int = 12271; // 0xac5 PushI
	var_193_bool = var_41_bool == var_192_int; // 0xac6 Eq
	if(var_193_bool == 0) goto Label_2775; // 0xac7 JumpB
	var_194_string = ""; // 0xac8 PushV
	var_194_string = "Neutral"; // 0xac9 MovS
	func_2578(var_42_cvector, var_194_string); // 0xaca NEW_2
	var_195_int = 511086; // 0xacc PushI
	SetMessage(var_195_int); // 0xacd TObjFunc
	ClearReplies(); // 0xacf TObjFunc
	var_196_int = 511089; // 0xad1 PushI
	var_197_int = 12275; // 0xad2 PushI
	var_198_int = 12274; // 0xad3 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xad4 TObjFunc
	return 0; // 0xad6 Return
	
Label_2775:
	var_199_int = 12275; // 0xad7 PushI
	var_200_bool = var_41_bool == var_199_int; // 0xad8 Eq
	if(var_200_bool == 0) goto Label_2798; // 0xad9 JumpB
	var_201_string = ""; // 0xada PushV
	var_201_string = "Neutral"; // 0xadb MovS
	func_2578(var_42_cvector, var_201_string); // 0xadc NEW_2
	var_202_int = 511090; // 0xade PushI
	SetMessage(var_202_int); // 0xadf TObjFunc
	ClearReplies(); // 0xae1 TObjFunc
	var_203_int = 511091; // 0xae3 PushI
	var_204_int = 12279; // 0xae4 PushI
	var_205_int = 12276; // 0xae5 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xae6 TObjFunc
	var_206_int = 511092; // 0xae8 PushI
	var_207_int = 12279; // 0xae9 PushI
	var_208_int = 12277; // 0xaea PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xaeb TObjFunc
	return 0; // 0xaed Return
	
Label_2798:
	var_209_int = 12279; // 0xaee PushI
	var_210_bool = var_41_bool == var_209_int; // 0xaef Eq
	if(var_210_bool == 0) goto Label_2816; // 0xaf0 JumpB
	var_211_string = ""; // 0xaf1 PushV
	var_211_string = "Neutral"; // 0xaf2 MovS
	func_2578(var_42_cvector, var_211_string); // 0xaf3 NEW_2
	var_212_int = 511093; // 0xaf5 PushI
	SetMessage(var_212_int); // 0xaf6 TObjFunc
	ClearReplies(); // 0xaf8 TObjFunc
	var_213_int = 511094; // 0xafa PushI
	var_214_int = -1; // 0xafb PushI
	var_215_int = 12281; // 0xafc PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xafd TObjFunc
	return 0; // 0xaff Return
	
Label_2816:
	var_216_int = 12248; // 0xb00 PushI
	var_217_bool = var_41_bool == var_216_int; // 0xb01 Eq
	if(var_217_bool == 0) goto Label_2839; // 0xb02 JumpB
	var_218_string = ""; // 0xb03 PushV
	var_218_string = "Neutral"; // 0xb04 MovS
	func_2578(var_42_cvector, var_218_string); // 0xb05 NEW_2
	var_219_int = 511067; // 0xb07 PushI
	SetMessage(var_219_int); // 0xb08 TObjFunc
	ClearReplies(); // 0xb0a TObjFunc
	var_220_int = 511068; // 0xb0c PushI
	var_221_int = 12250; // 0xb0d PushI
	var_222_int = 12249; // 0xb0e PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xb0f TObjFunc
	var_223_int = 511073; // 0xb11 PushI
	var_224_int = 12255; // 0xb12 PushI
	var_225_int = 12254; // 0xb13 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xb14 TObjFunc
	return 0; // 0xb16 Return
	
Label_2839:
	var_226_int = 12250; // 0xb17 PushI
	var_227_bool = var_41_bool == var_226_int; // 0xb18 Eq
	if(var_227_bool == 0) goto Label_2867; // 0xb19 JumpB
	var_228_string = ""; // 0xb1a PushV
	var_228_string = "Neutral"; // 0xb1b MovS
	func_2578(var_42_cvector, var_228_string); // 0xb1c NEW_2
	var_229_int = 511069; // 0xb1e PushI
	SetMessage(var_229_int); // 0xb1f TObjFunc
	ClearReplies(); // 0xb21 TObjFunc
	var_230_int = 511070; // 0xb23 PushI
	var_231_int = 12257; // 0xb24 PushI
	var_232_int = 12251; // 0xb25 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xb26 TObjFunc
	var_233_int = 511071; // 0xb28 PushI
	var_234_int = 12257; // 0xb29 PushI
	var_235_int = 12252; // 0xb2a PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xb2b TObjFunc
	var_236_int = 511072; // 0xb2d PushI
	var_237_int = 12255; // 0xb2e PushI
	var_238_int = 12253; // 0xb2f PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xb30 TObjFunc
	return 0; // 0xb32 Return
	
Label_2867:
	var_239_int = 12255; // 0xb33 PushI
	var_240_bool = var_41_bool == var_239_int; // 0xb34 Eq
	if(var_240_bool == 0) goto Label_2885; // 0xb35 JumpB
	var_241_string = ""; // 0xb36 PushV
	var_241_string = "Neutral"; // 0xb37 MovS
	func_2578(var_42_cvector, var_241_string); // 0xb38 NEW_2
	var_242_int = 511074; // 0xb3a PushI
	SetMessage(var_242_int); // 0xb3b TObjFunc
	ClearReplies(); // 0xb3d TObjFunc
	var_243_int = 511075; // 0xb3f PushI
	var_244_int = 12257; // 0xb40 PushI
	var_245_int = 12256; // 0xb41 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xb42 TObjFunc
	return 0; // 0xb44 Return
	
Label_2885:
	var_246_int = 12257; // 0xb45 PushI
	var_247_bool = var_41_bool == var_246_int; // 0xb46 Eq
	if(var_247_bool == 0) goto Label_2908; // 0xb47 JumpB
	var_248_string = ""; // 0xb48 PushV
	var_248_string = "Neutral"; // 0xb49 MovS
	func_2578(var_42_cvector, var_248_string); // 0xb4a NEW_2
	var_249_int = 511076; // 0xb4c PushI
	SetMessage(var_249_int); // 0xb4d TObjFunc
	ClearReplies(); // 0xb4f TObjFunc
	var_250_int = 511077; // 0xb51 PushI
	var_251_int = 40703; // 0xb52 PushI
	var_252_int = 12261; // 0xb53 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xb54 TObjFunc
	var_253_int = 511078; // 0xb56 PushI
	var_254_int = 12264; // 0xb57 PushI
	var_255_int = 12262; // 0xb58 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xb59 TObjFunc
	return 0; // 0xb5b Return
	
Label_2908:
	var_256_int = 40703; // 0xb5c PushI
	var_257_bool = var_41_bool == var_256_int; // 0xb5d Eq
	if(var_257_bool == 0) goto Label_2931; // 0xb5e JumpB
	var_258_string = ""; // 0xb5f PushV
	var_258_string = "Neutral"; // 0xb60 MovS
	func_2578(var_42_cvector, var_258_string); // 0xb61 NEW_2
	var_259_int = 538787; // 0xb63 PushI
	SetMessage(var_259_int); // 0xb64 TObjFunc
	ClearReplies(); // 0xb66 TObjFunc
	var_260_int = 538788; // 0xb68 PushI
	var_261_int = 12264; // 0xb69 PushI
	var_262_int = 40704; // 0xb6a PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xb6b TObjFunc
	var_263_int = 538789; // 0xb6d PushI
	var_264_int = 12264; // 0xb6e PushI
	var_265_int = 40705; // 0xb6f PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xb70 TObjFunc
	return 0; // 0xb72 Return
	
Label_2931:
	var_266_int = 12264; // 0xb73 PushI
	var_267_bool = var_41_bool == var_266_int; // 0xb74 Eq
	if(var_267_bool == 0) goto Label_2954; // 0xb75 JumpB
	var_268_string = ""; // 0xb76 PushV
	var_268_string = "Neutral"; // 0xb77 MovS
	func_2578(var_42_cvector, var_268_string); // 0xb78 NEW_2
	var_269_int = 511080; // 0xb7a PushI
	SetMessage(var_269_int); // 0xb7b TObjFunc
	ClearReplies(); // 0xb7d TObjFunc
	var_270_int = 511081; // 0xb7f PushI
	var_271_int = -1; // 0xb80 PushI
	var_272_int = 12266; // 0xb81 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xb82 TObjFunc
	var_273_int = 511082; // 0xb84 PushI
	var_274_int = -1; // 0xb85 PushI
	var_275_int = 12267; // 0xb86 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xb87 TObjFunc
	return 0; // 0xb89 Return
	
Label_2954:
	var_3_string = 1; // 0xb8a TMovB
	var_276_bool = 0; // 0xb8b PushV
	func_4882(var_276_bool); // 0xb8c NEW_2
	if(var_276_bool == 0) goto Label_2962; // 0xb8e JumpB
	lshStopAnimation(); // 0xb8f Func
	goto Label_2964; // 0xb91 Jump
	
Label_2964:
	return 0; // 0xb94 Return
	
Label_2962:
	StopAnimation(); // 0xb92 Func
	
Label_2966:
	return 0; // 0xb96 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xc52 PushI
	if(var_43_int == 0) goto Label_3682; // 0xc53 JumpB
	func_4746(); // 0xc55 NEW_2
	var_45_int = 14897; // 0xc57 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xc58 Eq
	if(var_46_bool == 0) goto Label_3167; // 0xc59 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xc5a PushV
	var_47_object = var_1_object; // 0xc5b MovT
	var_48_object = var_0_object; // 0xc5c MovT
	func_5094(); // 0xc5d NEW_2
	
Label_3167:
	var_51_int = 14911; // 0xc5f PushI
	var_52_bool = var_42_cvector == var_51_int; // 0xc60 Eq
	if(var_52_bool == 0) goto Label_3180; // 0xc61 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xc62 PushV
	var_53_object = var_1_object; // 0xc63 MovT
	var_54_object = var_0_object; // 0xc64 MovT
	func_5065(); // 0xc65 NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0xc67 PushV
	var_96_object = var_1_object; // 0xc68 MovT
	var_97_object = var_0_object; // 0xc69 MovT
	func_4983(); // 0xc6a NEW_2
	
Label_3180:
	var_122_int = 40378; // 0xc6c PushI
	var_123_bool = var_42_cvector == var_122_int; // 0xc6d Eq
	if(var_123_bool == 0) goto Label_3193; // 0xc6e JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0xc6f PushV
	var_124_object = var_1_object; // 0xc70 MovT
	var_125_object = var_0_object; // 0xc71 MovT
	func_5065(); // 0xc72 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xc74 PushV
	var_126_object = var_1_object; // 0xc75 MovT
	var_127_object = var_0_object; // 0xc76 MovT
	func_4983(); // 0xc77 NEW_2
	
Label_3193:
	var_128_int = 40377; // 0xc79 PushI
	var_129_bool = var_42_cvector == var_128_int; // 0xc7a Eq
	if(var_129_bool == 0) goto Label_3206; // 0xc7b JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0xc7c PushV
	var_130_object = var_1_object; // 0xc7d MovT
	var_131_object = var_0_object; // 0xc7e MovT
	func_5065(); // 0xc7f NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0xc81 PushV
	var_132_object = var_1_object; // 0xc82 MovT
	var_133_object = var_0_object; // 0xc83 MovT
	func_4983(); // 0xc84 NEW_2
	
Label_3206:
	var_134_int = 13535; // 0xc86 PushI
	var_135_bool = var_42_cvector == var_134_int; // 0xc87 Eq
	if(var_135_bool == 0) goto Label_3214; // 0xc88 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0xc89 PushV
	var_136_object = var_1_object; // 0xc8a MovT
	var_137_object = var_0_object; // 0xc8b MovT
	func_5088(); // 0xc8c NEW_2
	
Label_3214:
	var_140_int = 13534; // 0xc8e PushI
	var_141_bool = var_41_bool == var_140_int; // 0xc8f Eq
	if(var_141_bool == 0) goto Label_3262; // 0xc90 JumpB
	var_142_string = ""; // 0xc91 PushV
	var_142_string = "Neutral"; // 0xc92 MovS
	func_3131(var_42_cvector, var_142_string); // 0xc93 NEW_2
	var_159_int = 512374; // 0xc95 PushI
	SetMessage(var_159_int); // 0xc96 TObjFunc
	ClearReplies(); // 0xc98 TObjFunc
	var_160_bool = 0; // 0xc9a PushV
	var_160_bool = 0; // 0xc9b MovB
	var_161_bool = 0; var_162_object = Obj(); // 0xc9c PushV
	var_162_object = var_1_object; // 0xc9d MovT
	func_5302(var_162_object); // 0xc9e NEW_2
	var_169_bool = var_161_bool == 0; // 0xca0 Not
	if(var_169_bool == 0) goto Label_3240; // 0xca1 JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0xca2 PushV
	var_171_object = var_1_object; // 0xca3 MovT
	func_5326(var_171_object); // 0xca4 NEW_2
	if(var_170_bool == 0) goto Label_3240; // 0xca6 JumpB
	var_160_bool = 1; // 0xca7 MovB
	
Label_3240:
	if(var_160_bool == 0) goto Label_3246; // 0xca8 JumpB
	var_176_int = 513641; // 0xca9 PushI
	var_177_int = 14898; // 0xcaa PushI
	var_178_int = 14897; // 0xcab PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xcac TObjFunc
	
Label_3246:
	var_179_bool = 0; var_180_object = Obj(); // 0xcae PushV
	var_180_object = var_1_object; // 0xcaf MovT
	func_5314(var_180_object); // 0xcb0 NEW_2
	if(var_179_bool == 0) goto Label_3256; // 0xcb2 JumpB
	var_185_int = 512375; // 0xcb3 PushI
	var_186_int = 13536; // 0xcb4 PushI
	var_187_int = 13535; // 0xcb5 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xcb6 TObjFunc
	
Label_3256:
	var_188_int = 513658; // 0xcb8 PushI
	var_189_int = -1; // 0xcb9 PushI
	var_190_int = 14916; // 0xcba PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xcbb TObjFunc
	return 0; // 0xcbd Return
	
Label_3262:
	var_191_int = 13536; // 0xcbe PushI
	var_192_bool = var_41_bool == var_191_int; // 0xcbf Eq
	if(var_192_bool == 0) goto Label_3280; // 0xcc0 JumpB
	var_193_string = ""; // 0xcc1 PushV
	var_193_string = "Neutral"; // 0xcc2 MovS
	func_3131(var_42_cvector, var_193_string); // 0xcc3 NEW_2
	var_194_int = 512376; // 0xcc5 PushI
	SetMessage(var_194_int); // 0xcc6 TObjFunc
	ClearReplies(); // 0xcc8 TObjFunc
	var_195_int = 512378; // 0xcca PushI
	var_196_int = 13544; // 0xccb PushI
	var_197_int = 13538; // 0xccc PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xccd TObjFunc
	return 0; // 0xccf Return
	
Label_3280:
	var_198_int = 13539; // 0xcd0 PushI
	var_199_bool = var_41_bool == var_198_int; // 0xcd1 Eq
	if(var_199_bool == 0) goto Label_3283; // 0xcd2 JumpB
	
Label_3283:
	var_200_int = 13541; // 0xcd3 PushI
	var_201_bool = var_41_bool == var_200_int; // 0xcd4 Eq
	if(var_201_bool == 0) goto Label_3306; // 0xcd5 JumpB
	var_202_string = ""; // 0xcd6 PushV
	var_202_string = "Neutral"; // 0xcd7 MovS
	func_3131(var_42_cvector, var_202_string); // 0xcd8 NEW_2
	var_203_int = 512381; // 0xcda PushI
	SetMessage(var_203_int); // 0xcdb TObjFunc
	ClearReplies(); // 0xcdd TObjFunc
	var_204_int = 512382; // 0xcdf PushI
	var_205_int = -1; // 0xce0 PushI
	var_206_int = 13542; // 0xce1 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xce2 TObjFunc
	var_207_int = 512383; // 0xce4 PushI
	var_208_int = -1; // 0xce5 PushI
	var_209_int = 13543; // 0xce6 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xce7 TObjFunc
	return 0; // 0xce9 Return
	
Label_3306:
	var_210_int = 13544; // 0xcea PushI
	var_211_bool = var_41_bool == var_210_int; // 0xceb Eq
	if(var_211_bool == 0) goto Label_3329; // 0xcec JumpB
	var_212_string = ""; // 0xced PushV
	var_212_string = "Neutral"; // 0xcee MovS
	func_3131(var_42_cvector, var_212_string); // 0xcef NEW_2
	var_213_int = 512384; // 0xcf1 PushI
	SetMessage(var_213_int); // 0xcf2 TObjFunc
	ClearReplies(); // 0xcf4 TObjFunc
	var_214_int = 512385; // 0xcf6 PushI
	var_215_int = 13552; // 0xcf7 PushI
	var_216_int = 13545; // 0xcf8 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0xcf9 TObjFunc
	var_217_int = 512386; // 0xcfb PushI
	var_218_int = 13547; // 0xcfc PushI
	var_219_int = 13546; // 0xcfd PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0xcfe TObjFunc
	return 0; // 0xd00 Return
	
Label_3329:
	var_220_int = 13547; // 0xd01 PushI
	var_221_bool = var_41_bool == var_220_int; // 0xd02 Eq
	if(var_221_bool == 0) goto Label_3352; // 0xd03 JumpB
	var_222_string = ""; // 0xd04 PushV
	var_222_string = "Neutral"; // 0xd05 MovS
	func_3131(var_42_cvector, var_222_string); // 0xd06 NEW_2
	var_223_int = 512387; // 0xd08 PushI
	SetMessage(var_223_int); // 0xd09 TObjFunc
	ClearReplies(); // 0xd0b TObjFunc
	var_224_int = 512388; // 0xd0d PushI
	var_225_int = 13550; // 0xd0e PushI
	var_226_int = 13548; // 0xd0f PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xd10 TObjFunc
	var_227_int = 512389; // 0xd12 PushI
	var_228_int = 13550; // 0xd13 PushI
	var_229_int = 13549; // 0xd14 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xd15 TObjFunc
	return 0; // 0xd17 Return
	
Label_3352:
	var_230_int = 13550; // 0xd18 PushI
	var_231_bool = var_41_bool == var_230_int; // 0xd19 Eq
	if(var_231_bool == 0) goto Label_3370; // 0xd1a JumpB
	var_232_string = ""; // 0xd1b PushV
	var_232_string = "Neutral"; // 0xd1c MovS
	func_3131(var_42_cvector, var_232_string); // 0xd1d NEW_2
	var_233_int = 512390; // 0xd1f PushI
	SetMessage(var_233_int); // 0xd20 TObjFunc
	ClearReplies(); // 0xd22 TObjFunc
	var_234_int = 512391; // 0xd24 PushI
	var_235_int = -1; // 0xd25 PushI
	var_236_int = 13551; // 0xd26 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0xd27 TObjFunc
	return 0; // 0xd29 Return
	
Label_3370:
	var_237_int = 13552; // 0xd2a PushI
	var_238_bool = var_41_bool == var_237_int; // 0xd2b Eq
	if(var_238_bool == 0) goto Label_3398; // 0xd2c JumpB
	var_239_string = ""; // 0xd2d PushV
	var_239_string = "Neutral"; // 0xd2e MovS
	func_3131(var_42_cvector, var_239_string); // 0xd2f NEW_2
	var_240_int = 512392; // 0xd31 PushI
	SetMessage(var_240_int); // 0xd32 TObjFunc
	ClearReplies(); // 0xd34 TObjFunc
	var_241_int = 512393; // 0xd36 PushI
	var_242_int = 13559; // 0xd37 PushI
	var_243_int = 13554; // 0xd38 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xd39 TObjFunc
	var_244_int = 512394; // 0xd3b PushI
	var_245_int = 13557; // 0xd3c PushI
	var_246_int = 13555; // 0xd3d PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xd3e TObjFunc
	var_247_int = 512395; // 0xd40 PushI
	var_248_int = 13558; // 0xd41 PushI
	var_249_int = 13556; // 0xd42 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xd43 TObjFunc
	return 0; // 0xd45 Return
	
Label_3398:
	var_250_int = 13558; // 0xd46 PushI
	var_251_bool = var_41_bool == var_250_int; // 0xd47 Eq
	if(var_251_bool == 0) goto Label_3416; // 0xd48 JumpB
	var_252_string = ""; // 0xd49 PushV
	var_252_string = "Neutral"; // 0xd4a MovS
	func_3131(var_42_cvector, var_252_string); // 0xd4b NEW_2
	var_253_int = 512397; // 0xd4d PushI
	SetMessage(var_253_int); // 0xd4e TObjFunc
	ClearReplies(); // 0xd50 TObjFunc
	var_254_int = 512403; // 0xd52 PushI
	var_255_int = 13565; // 0xd53 PushI
	var_256_int = 13564; // 0xd54 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xd55 TObjFunc
	return 0; // 0xd57 Return
	
Label_3416:
	var_257_int = 13557; // 0xd58 PushI
	var_258_bool = var_41_bool == var_257_int; // 0xd59 Eq
	if(var_258_bool == 0) goto Label_3434; // 0xd5a JumpB
	var_259_string = ""; // 0xd5b PushV
	var_259_string = "Neutral"; // 0xd5c MovS
	func_3131(var_42_cvector, var_259_string); // 0xd5d NEW_2
	var_260_int = 512396; // 0xd5f PushI
	SetMessage(var_260_int); // 0xd60 TObjFunc
	ClearReplies(); // 0xd62 TObjFunc
	var_261_int = 512402; // 0xd64 PushI
	var_262_int = 13565; // 0xd65 PushI
	var_263_int = 13563; // 0xd66 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xd67 TObjFunc
	return 0; // 0xd69 Return
	
Label_3434:
	var_264_int = 13559; // 0xd6a PushI
	var_265_bool = var_41_bool == var_264_int; // 0xd6b Eq
	if(var_265_bool == 0) goto Label_3452; // 0xd6c JumpB
	var_266_string = ""; // 0xd6d PushV
	var_266_string = "Neutral"; // 0xd6e MovS
	func_3131(var_42_cvector, var_266_string); // 0xd6f NEW_2
	var_267_int = 512398; // 0xd71 PushI
	SetMessage(var_267_int); // 0xd72 TObjFunc
	ClearReplies(); // 0xd74 TObjFunc
	var_268_int = 512399; // 0xd76 PushI
	var_269_int = 13561; // 0xd77 PushI
	var_270_int = 13560; // 0xd78 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xd79 TObjFunc
	return 0; // 0xd7b Return
	
Label_3452:
	var_271_int = 13561; // 0xd7c PushI
	var_272_bool = var_41_bool == var_271_int; // 0xd7d Eq
	if(var_272_bool == 0) goto Label_3470; // 0xd7e JumpB
	var_273_string = ""; // 0xd7f PushV
	var_273_string = "Neutral"; // 0xd80 MovS
	func_3131(var_42_cvector, var_273_string); // 0xd81 NEW_2
	var_274_int = 512400; // 0xd83 PushI
	SetMessage(var_274_int); // 0xd84 TObjFunc
	ClearReplies(); // 0xd86 TObjFunc
	var_275_int = 512401; // 0xd88 PushI
	var_276_int = 13565; // 0xd89 PushI
	var_277_int = 13562; // 0xd8a PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xd8b TObjFunc
	return 0; // 0xd8d Return
	
Label_3470:
	var_278_int = 13565; // 0xd8e PushI
	var_279_bool = var_41_bool == var_278_int; // 0xd8f Eq
	if(var_279_bool == 0) goto Label_3493; // 0xd90 JumpB
	var_280_string = ""; // 0xd91 PushV
	var_280_string = "Neutral"; // 0xd92 MovS
	func_3131(var_42_cvector, var_280_string); // 0xd93 NEW_2
	var_281_int = 512404; // 0xd95 PushI
	SetMessage(var_281_int); // 0xd96 TObjFunc
	ClearReplies(); // 0xd98 TObjFunc
	var_282_int = 512405; // 0xd9a PushI
	var_283_int = 13570; // 0xd9b PushI
	var_284_int = 13568; // 0xd9c PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xd9d TObjFunc
	var_285_int = 512406; // 0xd9f PushI
	var_286_int = 13570; // 0xda0 PushI
	var_287_int = 13569; // 0xda1 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xda2 TObjFunc
	return 0; // 0xda4 Return
	
Label_3493:
	var_288_int = 13570; // 0xda5 PushI
	var_289_bool = var_41_bool == var_288_int; // 0xda6 Eq
	if(var_289_bool == 0) goto Label_3511; // 0xda7 JumpB
	var_290_string = ""; // 0xda8 PushV
	var_290_string = "Neutral"; // 0xda9 MovS
	func_3131(var_42_cvector, var_290_string); // 0xdaa NEW_2
	var_291_int = 512407; // 0xdac PushI
	SetMessage(var_291_int); // 0xdad TObjFunc
	ClearReplies(); // 0xdaf TObjFunc
	var_292_int = 512408; // 0xdb1 PushI
	var_293_int = -1; // 0xdb2 PushI
	var_294_int = 13572; // 0xdb3 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xdb4 TObjFunc
	return 0; // 0xdb6 Return
	
Label_3511:
	var_295_int = 14898; // 0xdb7 PushI
	var_296_bool = var_41_bool == var_295_int; // 0xdb8 Eq
	if(var_296_bool == 0) goto Label_3529; // 0xdb9 JumpB
	var_297_string = ""; // 0xdba PushV
	var_297_string = "Neutral"; // 0xdbb MovS
	func_3131(var_42_cvector, var_297_string); // 0xdbc NEW_2
	var_298_int = 513642; // 0xdbe PushI
	SetMessage(var_298_int); // 0xdbf TObjFunc
	ClearReplies(); // 0xdc1 TObjFunc
	var_299_int = 513643; // 0xdc3 PushI
	var_300_int = 14900; // 0xdc4 PushI
	var_301_int = 14899; // 0xdc5 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xdc6 TObjFunc
	return 0; // 0xdc8 Return
	
Label_3529:
	var_302_int = 14900; // 0xdc9 PushI
	var_303_bool = var_41_bool == var_302_int; // 0xdca Eq
	if(var_303_bool == 0) goto Label_3547; // 0xdcb JumpB
	var_304_string = ""; // 0xdcc PushV
	var_304_string = "Neutral"; // 0xdcd MovS
	func_3131(var_42_cvector, var_304_string); // 0xdce NEW_2
	var_305_int = 513644; // 0xdd0 PushI
	SetMessage(var_305_int); // 0xdd1 TObjFunc
	ClearReplies(); // 0xdd3 TObjFunc
	var_306_int = 513645; // 0xdd5 PushI
	var_307_int = 14902; // 0xdd6 PushI
	var_308_int = 14901; // 0xdd7 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xdd8 TObjFunc
	return 0; // 0xdda Return
	
Label_3547:
	var_309_int = 14902; // 0xddb PushI
	var_310_bool = var_41_bool == var_309_int; // 0xddc Eq
	if(var_310_bool == 0) goto Label_3570; // 0xddd JumpB
	var_311_string = ""; // 0xdde PushV
	var_311_string = "Neutral"; // 0xddf MovS
	func_3131(var_42_cvector, var_311_string); // 0xde0 NEW_2
	var_312_int = 513646; // 0xde2 PushI
	SetMessage(var_312_int); // 0xde3 TObjFunc
	ClearReplies(); // 0xde5 TObjFunc
	var_313_int = 513647; // 0xde7 PushI
	var_314_int = 14904; // 0xde8 PushI
	var_315_int = 14903; // 0xde9 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xdea TObjFunc
	var_316_int = 513649; // 0xdec PushI
	var_317_int = 14906; // 0xded PushI
	var_318_int = 14905; // 0xdee PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xdef TObjFunc
	return 0; // 0xdf1 Return
	
Label_3570:
	var_319_int = 14906; // 0xdf2 PushI
	var_320_bool = var_41_bool == var_319_int; // 0xdf3 Eq
	if(var_320_bool == 0) goto Label_3588; // 0xdf4 JumpB
	var_321_string = ""; // 0xdf5 PushV
	var_321_string = "Neutral"; // 0xdf6 MovS
	func_3131(var_42_cvector, var_321_string); // 0xdf7 NEW_2
	var_322_int = 513650; // 0xdf9 PushI
	SetMessage(var_322_int); // 0xdfa TObjFunc
	ClearReplies(); // 0xdfc TObjFunc
	var_323_int = 513652; // 0xdfe PushI
	var_324_int = 40376; // 0xdff PushI
	var_325_int = 14908; // 0xe00 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xe01 TObjFunc
	return 0; // 0xe03 Return
	
Label_3588:
	var_326_int = 40376; // 0xe04 PushI
	var_327_bool = var_41_bool == var_326_int; // 0xe05 Eq
	if(var_327_bool == 0) goto Label_3606; // 0xe06 JumpB
	var_328_string = ""; // 0xe07 PushV
	var_328_string = "Neutral"; // 0xe08 MovS
	func_3131(var_42_cvector, var_328_string); // 0xe09 NEW_2
	var_329_int = 538490; // 0xe0b PushI
	SetMessage(var_329_int); // 0xe0c TObjFunc
	ClearReplies(); // 0xe0e TObjFunc
	var_330_int = 538491; // 0xe10 PushI
	var_331_int = -1; // 0xe11 PushI
	var_332_int = 40377; // 0xe12 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xe13 TObjFunc
	return 0; // 0xe15 Return
	
Label_3606:
	var_333_int = 14904; // 0xe16 PushI
	var_334_bool = var_41_bool == var_333_int; // 0xe17 Eq
	if(var_334_bool == 0) goto Label_3629; // 0xe18 JumpB
	var_335_string = ""; // 0xe19 PushV
	var_335_string = "Neutral"; // 0xe1a MovS
	func_3131(var_42_cvector, var_335_string); // 0xe1b NEW_2
	var_336_int = 513648; // 0xe1d PushI
	SetMessage(var_336_int); // 0xe1e TObjFunc
	ClearReplies(); // 0xe20 TObjFunc
	var_337_int = 513651; // 0xe22 PushI
	var_338_int = 14909; // 0xe23 PushI
	var_339_int = 14907; // 0xe24 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xe25 TObjFunc
	var_340_int = 513655; // 0xe27 PushI
	var_341_int = 14913; // 0xe28 PushI
	var_342_int = 14912; // 0xe29 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xe2a TObjFunc
	return 0; // 0xe2c Return
	
Label_3629:
	var_343_int = 14913; // 0xe2d PushI
	var_344_bool = var_41_bool == var_343_int; // 0xe2e Eq
	if(var_344_bool == 0) goto Label_3647; // 0xe2f JumpB
	var_345_string = ""; // 0xe30 PushV
	var_345_string = "Neutral"; // 0xe31 MovS
	func_3131(var_42_cvector, var_345_string); // 0xe32 NEW_2
	var_346_int = 513656; // 0xe34 PushI
	SetMessage(var_346_int); // 0xe35 TObjFunc
	ClearReplies(); // 0xe37 TObjFunc
	var_347_int = 513657; // 0xe39 PushI
	var_348_int = 14909; // 0xe3a PushI
	var_349_int = 14914; // 0xe3b PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xe3c TObjFunc
	return 0; // 0xe3e Return
	
Label_3647:
	var_350_int = 14909; // 0xe3f PushI
	var_351_bool = var_41_bool == var_350_int; // 0xe40 Eq
	if(var_351_bool == 0) goto Label_3670; // 0xe41 JumpB
	var_352_string = ""; // 0xe42 PushV
	var_352_string = "Neutral"; // 0xe43 MovS
	func_3131(var_42_cvector, var_352_string); // 0xe44 NEW_2
	var_353_int = 513653; // 0xe46 PushI
	SetMessage(var_353_int); // 0xe47 TObjFunc
	ClearReplies(); // 0xe49 TObjFunc
	var_354_int = 513654; // 0xe4b PushI
	var_355_int = -1; // 0xe4c PushI
	var_356_int = 14911; // 0xe4d PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xe4e TObjFunc
	var_357_int = 538492; // 0xe50 PushI
	var_358_int = -1; // 0xe51 PushI
	var_359_int = 40378; // 0xe52 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xe53 TObjFunc
	return 0; // 0xe55 Return
	
Label_3670:
	var_3_string = 1; // 0xe56 TMovB
	var_360_bool = 0; // 0xe57 PushV
	func_4882(var_360_bool); // 0xe58 NEW_2
	if(var_360_bool == 0) goto Label_3678; // 0xe5a JumpB
	lshStopAnimation(); // 0xe5b Func
	goto Label_3680; // 0xe5d Jump
	
Label_3680:
	return 0; // 0xe60 Return
	
Label_3678:
	StopAnimation(); // 0xe5e Func
	
Label_3682:
	return 0; // 0xe62 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xf0a PushI
	if(var_43_int == 0) goto Label_3982; // 0xf0b JumpB
	func_4746(); // 0xf0d NEW_2
	var_45_int = 21998; // 0xf0f PushI
	var_46_bool = var_41_bool == var_45_int; // 0xf10 Eq
	if(var_46_bool == 0) goto Label_3883; // 0xf11 JumpB
	var_47_string = ""; // 0xf12 PushV
	var_47_string = "Neutral"; // 0xf13 MovS
	func_3827(var_42_cvector, var_47_string); // 0xf14 NEW_2
	var_64_int = 520784; // 0xf16 PushI
	SetMessage(var_64_int); // 0xf17 TObjFunc
	ClearReplies(); // 0xf19 TObjFunc
	var_65_int = 520785; // 0xf1b PushI
	var_66_int = 22000; // 0xf1c PushI
	var_67_int = 21999; // 0xf1d PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xf1e TObjFunc
	var_68_int = 520792; // 0xf20 PushI
	var_69_int = 22008; // 0xf21 PushI
	var_70_int = 22007; // 0xf22 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xf23 TObjFunc
	var_71_int = 520796; // 0xf25 PushI
	var_72_int = 22014; // 0xf26 PushI
	var_73_int = 22013; // 0xf27 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xf28 TObjFunc
	return 0; // 0xf2a Return
	
Label_3883:
	var_74_int = 22014; // 0xf2b PushI
	var_75_bool = var_41_bool == var_74_int; // 0xf2c Eq
	if(var_75_bool == 0) goto Label_3901; // 0xf2d JumpB
	var_76_string = ""; // 0xf2e PushV
	var_76_string = "Neutral"; // 0xf2f MovS
	func_3827(var_42_cvector, var_76_string); // 0xf30 NEW_2
	var_77_int = 520797; // 0xf32 PushI
	SetMessage(var_77_int); // 0xf33 TObjFunc
	ClearReplies(); // 0xf35 TObjFunc
	var_78_int = 520798; // 0xf37 PushI
	var_79_int = -1; // 0xf38 PushI
	var_80_int = 22015; // 0xf39 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xf3a TObjFunc
	return 0; // 0xf3c Return
	
Label_3901:
	var_81_int = 22008; // 0xf3d PushI
	var_82_bool = var_41_bool == var_81_int; // 0xf3e Eq
	if(var_82_bool == 0) goto Label_3924; // 0xf3f JumpB
	var_83_string = ""; // 0xf40 PushV
	var_83_string = "Neutral"; // 0xf41 MovS
	func_3827(var_42_cvector, var_83_string); // 0xf42 NEW_2
	var_84_int = 520793; // 0xf44 PushI
	SetMessage(var_84_int); // 0xf45 TObjFunc
	ClearReplies(); // 0xf47 TObjFunc
	var_85_int = 520794; // 0xf49 PushI
	var_86_int = 22000; // 0xf4a PushI
	var_87_int = 22009; // 0xf4b PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xf4c TObjFunc
	var_88_int = 520795; // 0xf4e PushI
	var_89_int = 22000; // 0xf4f PushI
	var_90_int = 22011; // 0xf50 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xf51 TObjFunc
	return 0; // 0xf53 Return
	
Label_3924:
	var_91_int = 22000; // 0xf54 PushI
	var_92_bool = var_41_bool == var_91_int; // 0xf55 Eq
	if(var_92_bool == 0) goto Label_3947; // 0xf56 JumpB
	var_93_string = ""; // 0xf57 PushV
	var_93_string = "Neutral"; // 0xf58 MovS
	func_3827(var_42_cvector, var_93_string); // 0xf59 NEW_2
	var_94_int = 520786; // 0xf5b PushI
	SetMessage(var_94_int); // 0xf5c TObjFunc
	ClearReplies(); // 0xf5e TObjFunc
	var_95_int = 520787; // 0xf60 PushI
	var_96_int = 22002; // 0xf61 PushI
	var_97_int = 22001; // 0xf62 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xf63 TObjFunc
	var_98_int = 520791; // 0xf65 PushI
	var_99_int = 22002; // 0xf66 PushI
	var_100_int = 22005; // 0xf67 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xf68 TObjFunc
	return 0; // 0xf6a Return
	
Label_3947:
	var_101_int = 22002; // 0xf6b PushI
	var_102_bool = var_41_bool == var_101_int; // 0xf6c Eq
	if(var_102_bool == 0) goto Label_3970; // 0xf6d JumpB
	var_103_string = ""; // 0xf6e PushV
	var_103_string = "Neutral"; // 0xf6f MovS
	func_3827(var_42_cvector, var_103_string); // 0xf70 NEW_2
	var_104_int = 520788; // 0xf72 PushI
	SetMessage(var_104_int); // 0xf73 TObjFunc
	ClearReplies(); // 0xf75 TObjFunc
	var_105_int = 520789; // 0xf77 PushI
	var_106_int = -1; // 0xf78 PushI
	var_107_int = 22003; // 0xf79 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xf7a TObjFunc
	var_108_int = 520790; // 0xf7c PushI
	var_109_int = -1; // 0xf7d PushI
	var_110_int = 22004; // 0xf7e PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xf7f TObjFunc
	return 0; // 0xf81 Return
	
Label_3970:
	var_3_string = 1; // 0xf82 TMovB
	var_111_bool = 0; // 0xf83 PushV
	func_4882(var_111_bool); // 0xf84 NEW_2
	if(var_111_bool == 0) goto Label_3978; // 0xf86 JumpB
	lshStopAnimation(); // 0xf87 Func
	goto Label_3980; // 0xf89 Jump
	
Label_3980:
	return 0; // 0xf8c Return
	
Label_3978:
	StopAnimation(); // 0xf8a Func
	
Label_3982:
	return 0; // 0xf8e Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	var_43_int = 1; // 0x1031 PushI
	if(var_43_int == 0) goto Label_4185; // 0x1032 JumpB
	func_4746(); // 0x1034 NEW_2
	var_45_int = 42557; // 0x1036 PushI
	var_46_bool = var_41_int == var_45_int; // 0x1037 Eq
	if(var_46_bool == 0) goto Label_4173; // 0x1038 JumpB
	var_47_string = ""; // 0x1039 PushV
	var_47_string = "Neutral"; // 0x103a MovS
	func_4122(var_42_cvector, var_47_string); // 0x103b NEW_2
	var_64_int = 540548; // 0x103d PushI
	SetMessage(var_64_int); // 0x103e TObjFunc
	ClearReplies(); // 0x1040 TObjFunc
	var_65_int = 540549; // 0x1042 PushI
	var_66_int = -1; // 0x1043 PushI
	var_67_int = 42558; // 0x1044 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x1045 TObjFunc
	var_68_int = 540797; // 0x1047 PushI
	var_69_int = -1; // 0x1048 PushI
	var_70_int = 42846; // 0x1049 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x104a TObjFunc
	return 0; // 0x104c Return
	
Label_4173:
	var_3_string = 1; // 0x104d TMovB
	var_71_bool = 0; // 0x104e PushV
	func_4882(var_71_bool); // 0x104f NEW_2
	if(var_71_bool == 0) goto Label_4181; // 0x1051 JumpB
	lshStopAnimation(); // 0x1052 Func
	goto Label_4183; // 0x1054 Jump
	
Label_4183:
	return 0; // 0x1057 Return
	
Label_4181:
	StopAnimation(); // 0x1055 Func
	
Label_4185:
	return 0; // 0x1059 Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_42_int = 10; // 0x10a7 PushI
	var_43_bool = var_41_int == var_42_int; // 0x10a8 Eq
	if(var_43_bool == 0) goto Label_4299; // 0x10a9 JumpB
	func_4258(); // 0x10ab NEW_2
	var_45_bool = 0; // 0x10ad PushV
	var_45_bool = 0; // 0x10ae MovB
	var_46_bool = 0; // 0x10af PushV
	func_4472(var_46_bool); // 0x10b0 NEW_2
	if(var_46_bool == 0) goto Label_4280; // 0x10b2 JumpB
	var_49_bool = 0; // 0x10b3 PushV
	func_4227(var_49_bool); // 0x10b4 NEW_2
	if(var_49_bool == 0) goto Label_4280; // 0x10b6 JumpB
	var_45_bool = 1; // 0x10b7 MovB
	
Label_4280:
	if(var_45_bool == 0) goto Label_4293; // 0x10b8 JumpB
	var_66_bool = 0; // 0x10b9 PushV
	func_4207(var_66_bool); // 0x10ba NEW_2
	if(var_66_bool == 0) goto Label_4292; // 0x10bc JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x10bd PushV
	var_87_object = Obj(); // 0x10be PushV
	func_4753(var_87_object); // 0x10bf NEW_2
	var_86_object = var_87_object; // 0x10c0 Mov
	func_4620(var_86_object); // 0x10c2 NEW_2
	
Label_4292:
	goto Label_4299; // 0x10c4 Jump
	
Label_4299:
	return 0; // 0x10cb Return
	
Label_4293:
	func_4222(var_41_int); // 0x10c6 NEW_2
	func_4249(); // 0x10c9 NEW_2
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_4440(); // 0x10cd NEW_2
	func_4258(); // 0x10d0 NEW_2
	lshStopSpeech(); // 0x10d2 Func
	lshStopAnimation(); // 0x10d4 Func
	StopAsync(); // 0x10d6 Func
	Hold(); // 0x10d8 Func
	return 0; // 0x10da Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0(); // 0x10db Func
	func_4258(); // 0x10de NEW_2
	var_42_string = ""; // 0x10e0 PushV
	var_42_string = "Neutral"; // 0x10e1 MovS
	func_4700(var_42_string); // 0x10e2 NEW_2
	func_4249(); // 0x10e5 NEW_2
	return 0; // 0x10e7 Return
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool; // 0x10e9 Push
	if(var_42_bool == 0) goto Label_4335; // 0x10ea JumpB
	func_4249(); // 0x10ec NEW_2
	goto Label_4339; // 0x10ee Jump
	
Label_4339:
	return 0; // 0x10f3 Return
	
Label_4335:
	var_48_string = ""; // 0x10ef PushV
	var_48_string = "Neutral"; // 0x10f0 MovS
	func_4700(var_48_string); // 0x10f1 NEW_2
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0; // 0x10f4 PushV
	IsOverrideActive(var_43_bool); // 0x10f5 Func
	var_44_bool = var_43_bool == 0; // 0x10f7 Not
	if(var_44_bool == 0) goto Label_4368; // 0x10f8 JumpB
	EventDisable(0); // 0x10f9 EventDisable
	func_4440(); // 0x10fb NEW_2
	var_45_bool = 0; var_46_object = Obj(); // 0x10fd PushV
	var_46_object = var_41_object; // 0x10fe Mov
	func_4463(var_46_object); // 0x10ff NEW_2
	EventEnable(0); // 0x1101 EventEnable
	var_59_object = Obj(); // 0x1102 PushV
	var_59_object = var_41_object; // 0x1103 Mov
	func_5573(var_59_object); // 0x1104 NEW_2
	var_866_string = ""; // 0x1106 PushV
	var_866_string = "Neutral"; // 0x1107 MovS
	func_4700(var_866_string); // 0x1108 NEW_2
	func_4258(); // 0x110b NEW_2
	func_4249(); // 0x110e NEW_2
	
Label_4368:
	return 2; // 0x1110 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	var_41_bool = GlobalVars[1]; // 0x105a PushGE
	var_41_bool = 0; // 0x105b MovB
	GlobalVars[1] = var_41_bool; // 0x105c PopGE
	func_4193(var_40_cvector); // 0x105e NEW_2
	return 0; // 0x1060 Return
}


func_5120()
{
	var_136_string = "d6q01OspinaVolonteer"; // 0x1401 PushS
	var_137_int = 1; // 0x1402 PushI
	SetVariable(var_136_string, var_137_int); // 0x1403 Func
	func_5426(); // 0x1406 NEW_2
	var_146_bool = 0; var_147_string = ""; var_148_string = ""; // 0x1408 PushV
	var_147_string = "quest_d6_01"; // 0x1409 MovS
	var_148_string = "completed"; // 0x140a MovS
	func_4818(var_146_bool, var_147_string, var_148_string); // 0x140b NEW_2
	return 0; // 0x140d Return
}


func_0(var_0_object, var_292_int, var_293_object)
{
	var_295_object = Obj(); var_296_bool = 0; var_297_int = 0; var_298_bool = 0; var_299_object = Obj(); var_300_bool = 0; var_301_int = 0; var_302_bool = 0; // 0x0 PushV
	var_0_object = var_293_object; // 0x1 TMov
	var_303_bool = 0; var_304_object = Obj(); var_305_float = 0; // 0x2 PushV
	var_304_object = var_293_object; // 0x3 Mov
	var_305_float = 70.0; // 0x4 MovF
	func_4477(var_304_object, var_305_float); // 0x5 NEW_2
	var_306_bool = var_303_bool == 0; // 0x7 Not
	if(var_306_bool == 0) goto Label_11; // 0x8 JumpB
	var_292_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_299_object); // 0xb Func
	var_307_int = 0; // 0xd PushV
	func_4876(var_307_int); // 0xe NEW_2
	SetNPCName(var_307_int); // 0x10 ObjFunc
	var_308_int = 0; // 0x12 PushV
	func_4874(var_308_int); // 0x13 NEW_2
	SetNPCDescription(var_308_int); // 0x15 ObjFunc
	var_309_string = ""; // 0x17 PushV
	func_4878(var_309_string); // 0x18 NEW_2
	SetPhoto(var_309_string); // 0x1a ObjFunc
	var_310_string = ""; // 0x1c PushV
	func_4880(var_310_string); // 0x1d NEW_2
	SetPhoto2(var_310_string); // 0x1f ObjFunc
	var_311_int = 0; // 0x21 PushV
	func_5556(var_311_int); // 0x22 NEW_2
	SetPlayerName(var_311_int); // 0x24 ObjFunc
	var_301_int = -1; // 0x26 MovI
	IsOverrideActive(var_300_bool); // 0x27 Func
	var_312_bool = var_300_bool; // 0x29 Push
	if(var_312_bool == 0) goto Label_45; // 0x2a JumpB
	var_292_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_299_object); // 0x2d Func
	var_313_bool = 0; var_314_object = Obj(); // 0x2f PushV
	var_315_object = Obj(); // 0x30 PushV
	func_4753(var_315_object); // 0x31 NEW_2
	var_314_object = var_315_object; // 0x32 Mov
	func_4562(var_313_bool, var_314_object); // 0x34 NEW_2
	var_316_object = Obj(); var_317_object = Obj(); // 0x36 PushV
	var_316_object = var_293_object; // 0x37 Mov
	var_317_object = var_299_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_318_object, var_319_object, var_320_string, var_321_bool, var_316_object, var_317_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_302_bool); // 0x3d ObjFunc
	
Label_63:
	var_367_bool = var_302_bool == 0; // 0x3f Not
	if(var_367_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_302_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_368_object = Obj(); // 0x46 PushV
	var_368_object = var_293_object; // 0x47 Mov
	func_4545(); // 0x48 NEW_2
	StopDialog(var_299_object); // 0x4a Func
	GetReturnValue(var_301_int); // 0x4c ObjFunc
	var_292_int = var_301_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1792(var_2_object, var_402_string)
{
	var_403_bool = 0; // 0x701 PushV
	func_4882(var_403_bool); // 0x702 NEW_2
	var_404_bool = var_403_bool == 0; // 0x704 Not
	if(var_404_bool == 0) goto Label_1799; // 0x705 JumpB
	return 0; // 0x706 Return
	
Label_1799:
	var_405_bool = var_402_string == var_2_object; // 0x707 Eq
	if(var_405_bool == 0) goto Label_1802; // 0x708 JumpB
	return 0; // 0x709 Return
	
Label_1802:
	var_406_string = ""; var_407_bool = 0; // 0x70a PushV
	var_406_string = var_402_string; // 0x70b Mov
	var_408_string = ""; // 0x70c PushS
	var_409_bool = var_402_string == var_408_string; // 0x70d Eq
	if(var_409_bool == 0) goto Label_1809; // 0x70e JumpB
	var_407_bool = 0; // 0x70f MovB
	goto Label_1810; // 0x710 Jump
	
Label_1810:
	func_4716(var_406_string, var_407_bool); // 0x712 NEW_2
	var_2_object = var_402_string; // 0x714 TMov
	return 0; // 0x715 Return
	
Label_1809:
	var_407_bool = 1; // 0x711 MovB
}


func_772(var_2_object, var_782_string)
{
	var_783_bool = 0; // 0x305 PushV
	func_4882(var_783_bool); // 0x306 NEW_2
	var_784_bool = var_783_bool == 0; // 0x308 Not
	if(var_784_bool == 0) goto Label_779; // 0x309 JumpB
	return 0; // 0x30a Return
	
Label_779:
	var_785_bool = var_782_string == var_2_object; // 0x30b Eq
	if(var_785_bool == 0) goto Label_782; // 0x30c JumpB
	return 0; // 0x30d Return
	
Label_782:
	var_786_string = ""; var_787_bool = 0; // 0x30e PushV
	var_786_string = var_782_string; // 0x30f Mov
	var_788_string = ""; // 0x310 PushS
	var_789_bool = var_782_string == var_788_string; // 0x311 Eq
	if(var_789_bool == 0) goto Label_789; // 0x312 JumpB
	var_787_bool = 0; // 0x313 MovB
	goto Label_790; // 0x314 Jump
	
Label_790:
	func_4716(var_786_string, var_787_bool); // 0x316 NEW_2
	var_2_object = var_782_string; // 0x318 TMov
	return 0; // 0x319 Return
	
Label_789:
	var_787_bool = 1; // 0x315 MovB
}


func_4874(var_121_int)
{
	var_121_int = 515549; // 0x130a MovI
	return 0; // 0x130b Return
}


func_5387()
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x150b PushV
	var_154_int = 71; // 0x150c PushI
	var_155_int = 1; // 0x150d PushI
	var_156_int = 512153; // 0x150e PushI
	CreateDiaryEntry(var_153_object, var_154_int, var_155_int, var_156_int); // 0x150f Func
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0; // 0x1511 PushV
	var_158_object = var_153_object; // 0x1512 Mov
	var_159_int = 25; // 0x1513 MovI
	func_5478(var_157_bool, var_158_object, var_159_int); // 0x1514 NEW_2
	return 2; // 0x1516 Return
}


func_4620(var_144_bool)
{
	var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; var_151_string = ""; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_string = ""; // 0x120c PushV
	var_151_string = "c"; // 0x120d MovS
	var_152_int = 0; // 0x120e MovI
	
Label_4623:
	var_156_int = 1; // 0x120f PushI
	if(var_156_int == 0) goto Label_4636; // 0x1210 JumpB
	var_157_int = 1; // 0x1211 PushI
	var_158_int = var_152_int + var_157_int; // 0x1212 Add
	var_159_int = var_151_string + var_158_int; // 0x1213 Add
	HasProperty(var_159_int, var_153_bool); // 0x1214 ObjFunc
	var_160_bool = var_153_bool == 0; // 0x1216 Not
	if(var_160_bool == 0) goto Label_4633; // 0x1217 JumpB
	goto Label_4636; // 0x1218 Jump
	
Label_4636:
	var_161_bool = var_152_int == 0; // 0x121c Not
	if(var_161_bool == 0) goto Label_4640; // 0x121d JumpB
	var_144_bool = 0; // 0x121e MovB
	return 10; // 0x121f Return
	
Label_4640:
	var_154_int = 0; // 0x1220 MovI
	var_162_int = 1; // 0x1221 PushI
	var_163_bool = var_152_int > var_162_int; // 0x1222 GT
	if(var_163_bool == 0) goto Label_4646; // 0x1223 JumpB
	irand(var_154_int, var_152_int); // 0x1224 Func
	
Label_4646:
	var_164_int = 1; // 0x1226 PushI
	var_165_int = var_154_int + var_164_int; // 0x1227 Add
	var_166_int = var_151_string + var_165_int; // 0x1228 Add
	GetProperty(var_166_int, var_155_string); // 0x1229 ObjFunc
	var_167_bool = 0; var_168_string = ""; // 0x122b PushV
	var_168_string = var_155_string; // 0x122c Mov
	func_4731(var_167_bool, var_168_string); // 0x122d NEW_2
	var_144_bool = var_167_bool; // 0x122e Mov
	return 10; // 0x1230 Return
	
Label_4633:
	var_173_int = 1; // 0x1219 PushI
	var_152_int = var_152_int + var_173_int; // 0x121a Add2
	goto Label_4623; // 0x121b Jump
}


func_4876(var_120_int)
{
	var_120_int = 502874; // 0x130c MovI
	return 0; // 0x130d Return
}


func_5134(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0x140f PushV
	var_327_string = "d1q03"; // 0x1410 MovS
	func_4769(var_326_int, var_327_string); // 0x1411 NEW_2
	var_330_int = 1; // 0x1413 PushI
	var_331_bool = var_326_int == var_330_int; // 0x1414 Eq
	if(var_331_bool == 0) goto Label_5144; // 0x1415 JumpB
	var_324_bool = 1; // 0x1416 MovB
	return 0; // 0x1417 Return
	
Label_5144:
	var_324_bool = 0; // 0x1418 MovB
	return 0; // 0x1419 Return
}


func_4878(var_122_string)
{
	var_122_string = "ui/NPC_Ospina.png"; // 0x130e MovS
	return 0; // 0x130f Return
}


func_4880(var_123_string)
{
	var_123_string = "ui/NPC_Ospina_b.png"; // 0x1310 MovS
	return 0; // 0x1311 Return
}


func_4369()
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x1111 PushV
	WaitForAnimEnd(); // 0x1112 Func
	var_58_bool = 0; // 0x1114 PushV
	func_4472(var_58_bool); // 0x1115 NEW_2
	var_59_bool = var_58_bool == 0; // 0x1117 Not
	if(var_59_bool == 0) goto Label_4378; // 0x1118 JumpB
	return 12; // 0x1119 Return
	
Label_4378:
	var_60_int = 0; // 0x111a PushV
	func_4857(var_60_int); // 0x111b NEW_2
	var_52_int = var_60_int; // 0x111c Mov
	var_53_int = 0; // 0x111e MovI
	
Label_4383:
	var_73_bool = 0; // 0x111f PushV
	var_73_bool = 0; // 0x1120 MovB
	var_74_int = 5; // 0x1121 PushI
	var_75_bool = var_53_int < var_74_int; // 0x1122 LT
	if(var_75_bool == 0) goto Label_4393; // 0x1123 JumpB
	var_76_bool = 0; // 0x1124 PushV
	func_4472(var_76_bool); // 0x1125 NEW_2
	if(var_76_bool == 0) goto Label_4393; // 0x1127 JumpB
	var_73_bool = 1; // 0x1128 MovB
	
Label_4393:
	if(var_73_bool == 0) goto Label_4435; // 0x1129 JumpB
	var_77_bool = var_52_int == 0; // 0x112a Not
	if(var_77_bool == 0) goto Label_4403; // 0x112b JumpB
	var_78_int = 3; // 0x112c PushI
	Sleep(var_78_int, var_54_bool); // 0x112d Func
	var_79_bool = var_54_bool == 0; // 0x112f Not
	if(var_79_bool == 0) goto Label_4402; // 0x1130 JumpB
	goto Label_4435; // 0x1131 Jump
	
Label_4435:
	ResetAAS(); // 0x1153 Func
	return 12; // 0x1155 Return
	
Label_4402:
	goto Label_4424; // 0x1132 Jump
	
Label_4424:
	var_80_bool = 0; // 0x1148 PushV
	func_4438(var_80_bool); // 0x1149 NEW_2
	var_81_bool = var_80_bool == 0; // 0x114b Not
	if(var_81_bool == 0) goto Label_4430; // 0x114c JumpB
	goto Label_4435; // 0x114d Jump
	
Label_4430:
	ResetAAS(); // 0x114e Func
	var_82_int = 1; // 0x1150 PushI
	var_53_int = var_53_int + var_82_int; // 0x1151 Add2
	goto Label_4383; // 0x1152 Jump
	
Label_4403:
	irand(var_55_int, var_52_int); // 0x1133 Func
	var_83_int = 5; // 0x1135 PushI
	irand(var_56_int, var_83_int); // 0x1136 Func
	var_84_int = 0; // 0x1138 PushI
	var_85_bool = var_56_int != var_84_int; // 0x1139 Neq
	if(var_85_bool == 0) goto Label_4412; // 0x113a JumpB
	var_55_int = 0; // 0x113b MovI
	
Label_4412:
	var_86_string = "all"; // 0x113c PushS
	var_87_string = ""; var_88_int = 0; // 0x113d PushV
	var_88_int = var_55_int; // 0x113e Mov
	func_4850(var_87_string, var_88_int); // 0x113f NEW_2
	PlayAnimation(var_86_string, var_87_string); // 0x1141 Func
	WaitForAnimEnd(var_57_bool); // 0x1143 Func
	var_89_bool = var_57_bool == 0; // 0x1145 Not
	if(var_89_bool == 0) goto Label_4424; // 0x1146 JumpB
	goto Label_4435; // 0x1147 Jump
}


func_2578(var_2_object, var_508_string)
{
	var_509_bool = 0; // 0xa13 PushV
	func_4882(var_509_bool); // 0xa14 NEW_2
	var_510_bool = var_509_bool == 0; // 0xa16 Not
	if(var_510_bool == 0) goto Label_2585; // 0xa17 JumpB
	return 0; // 0xa18 Return
	
Label_2585:
	var_511_bool = var_508_string == var_2_object; // 0xa19 Eq
	if(var_511_bool == 0) goto Label_2588; // 0xa1a JumpB
	return 0; // 0xa1b Return
	
Label_2588:
	var_512_string = ""; var_513_bool = 0; // 0xa1c PushV
	var_512_string = var_508_string; // 0xa1d Mov
	var_514_string = ""; // 0xa1e PushS
	var_515_bool = var_508_string == var_514_string; // 0xa1f Eq
	if(var_515_bool == 0) goto Label_2595; // 0xa20 JumpB
	var_513_bool = 0; // 0xa21 MovB
	goto Label_2596; // 0xa22 Jump
	
Label_2596:
	func_4716(var_512_string, var_513_bool); // 0xa24 NEW_2
	var_2_object = var_508_string; // 0xa26 TMov
	return 0; // 0xa27 Return
	
Label_2595:
	var_513_bool = 1; // 0xa23 MovB
}


func_4882(var_115_bool)
{
	var_115_bool = 1; // 0x1312 MovB
	return 0; // 0x1313 Return
}


func_4884()
{
	var_49_bool = 0; var_50_string = ""; var_51_string = ""; // 0x1315 PushV
	var_50_string = "quest_d1_03"; // 0x1316 MovS
	var_51_string = "eva_finish"; // 0x1317 MovS
	func_4818(var_49_bool, var_50_string, var_51_string); // 0x1318 NEW_2
	return 0; // 0x131a Return
}


func_5400()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x1518 PushV
	var_69_int = 70; // 0x1519 PushI
	var_70_int = 1; // 0x151a PushI
	var_71_int = 512152; // 0x151b PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x151c Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x151e PushV
	var_73_object = var_68_object; // 0x151f Mov
	var_74_int = 25; // 0x1520 MovI
	func_5478(var_72_bool, var_73_object, var_74_int); // 0x1521 NEW_2
	return 2; // 0x1523 Return
}


func_4122(var_2_object, var_841_string)
{
	var_842_bool = 0; // 0x101b PushV
	func_4882(var_842_bool); // 0x101c NEW_2
	var_843_bool = var_842_bool == 0; // 0x101e Not
	if(var_843_bool == 0) goto Label_4129; // 0x101f JumpB
	return 0; // 0x1020 Return
	
Label_4129:
	var_844_bool = var_841_string == var_2_object; // 0x1021 Eq
	if(var_844_bool == 0) goto Label_4132; // 0x1022 JumpB
	return 0; // 0x1023 Return
	
Label_4132:
	var_845_string = ""; var_846_bool = 0; // 0x1024 PushV
	var_845_string = var_841_string; // 0x1025 Mov
	var_847_string = ""; // 0x1026 PushS
	var_848_bool = var_841_string == var_847_string; // 0x1027 Eq
	if(var_848_bool == 0) goto Label_4139; // 0x1028 JumpB
	var_846_bool = 0; // 0x1029 MovB
	goto Label_4140; // 0x102a Jump
	
Label_4140:
	func_4716(var_845_string, var_846_bool); // 0x102c NEW_2
	var_2_object = var_841_string; // 0x102e TMov
	return 0; // 0x102f Return
	
Label_4139:
	var_846_bool = 1; // 0x102b MovB
}


func_5146(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0x141b PushV
	var_335_string = "ood1Ospina2"; // 0x141c MovS
	func_4769(var_334_int, var_335_string); // 0x141d NEW_2
	var_336_int = 0; // 0x141f PushI
	var_337_bool = var_334_int == var_336_int; // 0x1420 Eq
	if(var_337_bool == 0) goto Label_5156; // 0x1421 JumpB
	var_332_bool = 1; // 0x1422 MovB
	return 0; // 0x1423 Return
	
Label_5156:
	var_332_bool = 0; // 0x1424 MovB
	return 0; // 0x1425 Return
}


func_4891()
{
	var_340_string = "ood1Ospina2"; // 0x131c PushS
	var_341_int = 1; // 0x131d PushI
	SetVariable(var_340_string, var_341_int); // 0x131e Func
	return 0; // 0x1320 Return
}


func_4897()
{
	func_5374(); // 0x1323 NEW_2
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0x1325 PushV
	var_83_string = "quest_d1_03"; // 0x1326 MovS
	var_84_string = "unlock_butcher"; // 0x1327 MovS
	func_4818(var_82_bool, var_83_string, var_84_string); // 0x1328 NEW_2
	return 0; // 0x132a Return
}


func_5413()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x1525 PushV
	var_59_int = 162; // 0x1526 PushI
	var_60_int = 1; // 0x1527 PushI
	var_61_int = 515395; // 0x1528 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x1529 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x152b PushV
	var_63_object = var_58_object; // 0x152c Mov
	var_64_int = 111; // 0x152d MovI
	func_5478(var_62_bool, var_63_object, var_64_int); // 0x152e NEW_2
	return 2; // 0x1530 Return
}


func_5158(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0x1427 PushV
	var_415_string = "ood3Ospina2"; // 0x1428 MovS
	func_4769(var_414_int, var_415_string); // 0x1429 NEW_2
	var_416_int = 0; // 0x142b PushI
	var_417_bool = var_414_int == var_416_int; // 0x142c Eq
	if(var_417_bool == 0) goto Label_5168; // 0x142d JumpB
	var_412_bool = 1; // 0x142e MovB
	return 0; // 0x142f Return
	
Label_5168:
	var_412_bool = 0; // 0x1430 MovB
	return 0; // 0x1431 Return
}


func_4907()
{
	func_5439(); // 0x132d NEW_2
	return 0; // 0x132f Return
}


func_4912()
{
	var_92_string = "ood3Ospina2"; // 0x1331 PushS
	var_93_int = 1; // 0x1332 PushI
	SetVariable(var_92_string, var_93_int); // 0x1333 Func
	return 0; // 0x1335 Return
}


func_4657(var_175_bool)
{
	var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = ""; var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = ""; // 0x1231 PushV
	var_187_string = "d"; // 0x1232 PushS
	var_188_int = 0; // 0x1233 PushV
	func_4835(var_188_int); // 0x1234 NEW_2
	var_194_int = var_187_string + var_188_int; // 0x1236 Add
	var_195_string = "m"; // 0x1237 PushS
	var_182_string = var_194_int + var_195_string; // 0x1238 Add2
	var_183_int = 0; // 0x1239 MovI
	
Label_4666:
	var_196_int = 1; // 0x123a PushI
	if(var_196_int == 0) goto Label_4679; // 0x123b JumpB
	var_197_int = 1; // 0x123c PushI
	var_198_int = var_183_int + var_197_int; // 0x123d Add
	var_199_int = var_182_string + var_198_int; // 0x123e Add
	HasProperty(var_199_int, var_184_bool); // 0x123f ObjFunc
	var_200_bool = var_184_bool == 0; // 0x1241 Not
	if(var_200_bool == 0) goto Label_4676; // 0x1242 JumpB
	goto Label_4679; // 0x1243 Jump
	
Label_4679:
	var_201_bool = var_183_int == 0; // 0x1247 Not
	if(var_201_bool == 0) goto Label_4683; // 0x1248 JumpB
	var_175_bool = 0; // 0x1249 MovB
	return 10; // 0x124a Return
	
Label_4683:
	var_185_int = 0; // 0x124b MovI
	var_202_int = 1; // 0x124c PushI
	var_203_bool = var_183_int > var_202_int; // 0x124d GT
	if(var_203_bool == 0) goto Label_4689; // 0x124e JumpB
	irand(var_185_int, var_183_int); // 0x124f Func
	
Label_4689:
	var_204_int = 1; // 0x1251 PushI
	var_205_int = var_185_int + var_204_int; // 0x1252 Add
	var_206_int = var_182_string + var_205_int; // 0x1253 Add
	GetProperty(var_206_int, var_186_string); // 0x1254 ObjFunc
	var_207_bool = 0; var_208_string = ""; // 0x1256 PushV
	var_208_string = var_186_string; // 0x1257 Mov
	func_4731(var_207_bool, var_208_string); // 0x1258 NEW_2
	var_175_bool = var_207_bool; // 0x1259 Mov
	return 10; // 0x125b Return
	
Label_4676:
	var_209_int = 1; // 0x1244 PushI
	var_183_int = var_183_int + var_209_int; // 0x1245 Add2
	goto Label_4666; // 0x1246 Jump
}


func_5170(var_444_bool)
{
	var_446_int = 0; var_447_string = ""; // 0x1433 PushV
	var_447_string = "ood3Ospina3"; // 0x1434 MovS
	func_4769(var_446_int, var_447_string); // 0x1435 NEW_2
	var_448_int = 0; // 0x1437 PushI
	var_449_bool = var_446_int == var_448_int; // 0x1438 Eq
	if(var_449_bool == 0) goto Label_5180; // 0x1439 JumpB
	var_444_bool = 1; // 0x143a MovB
	return 0; // 0x143b Return
	
Label_5180:
	var_444_bool = 0; // 0x143c MovB
	return 0; // 0x143d Return
}


func_1586(var_0_object, var_371_int, var_372_object)
{
	var_374_object = Obj(); var_375_bool = 0; var_376_int = 0; var_377_bool = 0; var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; // 0x632 PushV
	var_0_object = var_372_object; // 0x633 TMov
	var_382_bool = 0; var_383_object = Obj(); var_384_float = 0; // 0x634 PushV
	var_383_object = var_372_object; // 0x635 Mov
	var_384_float = 70.0; // 0x636 MovF
	func_4477(var_383_object, var_384_float); // 0x637 NEW_2
	var_385_bool = var_382_bool == 0; // 0x639 Not
	if(var_385_bool == 0) goto Label_1597; // 0x63a JumpB
	var_371_int = -2; // 0x63b MovI
	return 8; // 0x63c Return
	
Label_1597:
	CreateDialog(var_378_object); // 0x63d Func
	var_386_int = 0; // 0x63f PushV
	func_4876(var_386_int); // 0x640 NEW_2
	SetNPCName(var_386_int); // 0x642 ObjFunc
	var_387_int = 0; // 0x644 PushV
	func_4874(var_387_int); // 0x645 NEW_2
	SetNPCDescription(var_387_int); // 0x647 ObjFunc
	var_388_string = ""; // 0x649 PushV
	func_4878(var_388_string); // 0x64a NEW_2
	SetPhoto(var_388_string); // 0x64c ObjFunc
	var_389_string = ""; // 0x64e PushV
	func_4880(var_389_string); // 0x64f NEW_2
	SetPhoto2(var_389_string); // 0x651 ObjFunc
	var_390_int = 0; // 0x653 PushV
	func_5556(var_390_int); // 0x654 NEW_2
	SetPlayerName(var_390_int); // 0x656 ObjFunc
	var_380_int = -1; // 0x658 MovI
	IsOverrideActive(var_379_bool); // 0x659 Func
	var_391_bool = var_379_bool; // 0x65b Push
	if(var_391_bool == 0) goto Label_1631; // 0x65c JumpB
	var_371_int = -2; // 0x65d MovI
	return 8; // 0x65e Return
	
Label_1631:
	DoDialog(var_378_object); // 0x65f Func
	var_392_bool = 0; var_393_object = Obj(); // 0x661 PushV
	var_394_object = Obj(); // 0x662 PushV
	func_4753(var_394_object); // 0x663 NEW_2
	var_393_object = var_394_object; // 0x664 Mov
	func_4562(var_392_bool, var_393_object); // 0x666 NEW_2
	var_395_object = Obj(); var_396_object = Obj(); // 0x668 PushV
	var_395_object = var_372_object; // 0x669 Mov
	var_396_object = var_378_object; // 0x66a Mov
	TaskCall(7); // 0x66b TaskCall
	func_1667(var_397_object, var_398_object, var_399_string, var_400_bool, var_395_object, var_396_object); // 0x66c NEW_2
	TaskReturn(); // 0x66d TaskReturn
	IsDialogEnd(var_381_bool); // 0x66f ObjFunc
	
Label_1649:
	var_473_bool = var_381_bool == 0; // 0x671 Not
	if(var_473_bool == 0) goto Label_1656; // 0x672 JumpB
	sync(); // 0x673 Func
	IsDialogEnd(var_381_bool); // 0x675 ObjFunc
	goto Label_1649; // 0x677 Jump
	
Label_1656:
	var_474_object = Obj(); // 0x678 PushV
	var_474_object = var_372_object; // 0x679 Mov
	func_4545(); // 0x67a NEW_2
	StopDialog(var_378_object); // 0x67c Func
	GetReturnValue(var_380_int); // 0x67e ObjFunc
	var_371_int = var_380_int; // 0x680 Mov
	return 8; // 0x681 Return
}


func_5426()
{
	var_138_object = Obj(); var_139_object = Obj(); // 0x1532 PushV
	var_140_int = 121; // 0x1533 PushI
	var_141_int = 1; // 0x1534 PushI
	var_142_int = 513744; // 0x1535 PushI
	CreateDiaryEntry(var_139_object, var_140_int, var_141_int, var_142_int); // 0x1536 Func
	var_143_bool = 0; var_144_object = Obj(); var_145_int = 0; // 0x1538 PushV
	var_144_object = var_139_object; // 0x1539 Mov
	var_145_int = 111; // 0x153a MovI
	func_5478(var_143_bool, var_144_object, var_145_int); // 0x153b NEW_2
	return 2; // 0x153d Return
}


func_4918()
{
	var_146_string = "ood3Ospina3"; // 0x1337 PushS
	var_147_int = 1; // 0x1338 PushI
	SetVariable(var_146_string, var_147_int); // 0x1339 Func
	return 0; // 0x133b Return
}


func_1079(var_2_object, var_598_string)
{
	var_599_bool = 0; // 0x438 PushV
	func_4882(var_599_bool); // 0x439 NEW_2
	var_600_bool = var_599_bool == 0; // 0x43b Not
	if(var_600_bool == 0) goto Label_1086; // 0x43c JumpB
	return 0; // 0x43d Return
	
Label_1086:
	var_601_bool = var_598_string == var_2_object; // 0x43e Eq
	if(var_601_bool == 0) goto Label_1089; // 0x43f JumpB
	return 0; // 0x440 Return
	
Label_1089:
	var_602_string = ""; var_603_bool = 0; // 0x441 PushV
	var_602_string = var_598_string; // 0x442 Mov
	var_604_string = ""; // 0x443 PushS
	var_605_bool = var_598_string == var_604_string; // 0x444 Eq
	if(var_605_bool == 0) goto Label_1096; // 0x445 JumpB
	var_603_bool = 0; // 0x446 MovB
	goto Label_1097; // 0x447 Jump
	
Label_1097:
	func_4716(var_602_string, var_603_bool); // 0x449 NEW_2
	var_2_object = var_598_string; // 0x44b TMov
	return 0; // 0x44c Return
	
Label_1096:
	var_603_bool = 1; // 0x448 MovB
}


func_3131(var_2_object, var_701_string)
{
	var_702_bool = 0; // 0xc3c PushV
	func_4882(var_702_bool); // 0xc3d NEW_2
	var_703_bool = var_702_bool == 0; // 0xc3f Not
	if(var_703_bool == 0) goto Label_3138; // 0xc40 JumpB
	return 0; // 0xc41 Return
	
Label_3138:
	var_704_bool = var_701_string == var_2_object; // 0xc42 Eq
	if(var_704_bool == 0) goto Label_3141; // 0xc43 JumpB
	return 0; // 0xc44 Return
	
Label_3141:
	var_705_string = ""; var_706_bool = 0; // 0xc45 PushV
	var_705_string = var_701_string; // 0xc46 Mov
	var_707_string = ""; // 0xc47 PushS
	var_708_bool = var_701_string == var_707_string; // 0xc48 Eq
	if(var_708_bool == 0) goto Label_3148; // 0xc49 JumpB
	var_706_bool = 0; // 0xc4a MovB
	goto Label_3149; // 0xc4b Jump
	
Label_3149:
	func_4716(var_705_string, var_706_bool); // 0xc4d NEW_2
	var_2_object = var_701_string; // 0xc4f TMov
	return 0; // 0xc50 Return
	
Label_3148:
	var_706_bool = 1; // 0xc4c MovB
}


func_4924()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x133c PushV
	var_51_string = "d3q01"; // 0x133d PushS
	var_52_int = 3; // 0x133e PushI
	SetVariable(var_51_string, var_52_int); // 0x133f Func
	var_53_object = Obj(); // 0x1341 PushV
	func_5506(var_53_object); // 0x1342 NEW_2
	var_50_object = var_53_object; // 0x1343 Mov
	var_60_string = "d3q01OspinaGotoBigVlad"; // 0x1345 PushS
	var_61_string = "pt_map_bigvlad"; // 0x1346 PushS
	var_62_int = 1; // 0x1347 PushI
	var_63_int = 511152; // 0x1348 PushI
	var_64_float = 0; // 0x1349 PushV
	func_4830(var_64_float); // 0x134a NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x134c ObjFunc
	func_5400(); // 0x134f NEW_2
	return 2; // 0x1351 Return
}


func_5182(var_429_bool)
{
	var_431_int = 0; var_432_string = ""; // 0x143f PushV
	var_432_string = "ood3Ospina4"; // 0x1440 MovS
	func_4769(var_431_int, var_432_string); // 0x1441 NEW_2
	var_433_int = 0; // 0x1443 PushI
	var_434_bool = var_431_int == var_433_int; // 0x1444 Eq
	if(var_434_bool == 0) goto Label_5192; // 0x1445 JumpB
	var_429_bool = 1; // 0x1446 MovB
	return 0; // 0x1447 Return
	
Label_5192:
	var_429_bool = 0; // 0x1448 MovB
	return 0; // 0x1449 Return
}


func_5439()
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x153f PushV
	var_158_int = 721; // 0x1540 PushI
	var_159_int = 1; // 0x1541 PushI
	var_160_int = 538785; // 0x1542 PushI
	CreateDiaryEntry(var_157_object, var_158_int, var_159_int, var_160_int); // 0x1543 Func
	var_161_bool = 0; var_162_object = Obj(); var_163_int = 0; // 0x1545 PushV
	var_162_object = var_157_object; // 0x1546 Mov
	var_163_int = 111; // 0x1547 MovI
	func_5478(var_161_bool, var_162_object, var_163_int); // 0x1548 NEW_2
	return 2; // 0x154a Return
}


func_5194(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x144b PushV
	var_421_string = "d3q01"; // 0x144c MovS
	func_4769(var_420_int, var_421_string); // 0x144d NEW_2
	var_422_int = 2; // 0x144f PushI
	var_423_bool = var_420_int == var_422_int; // 0x1450 Eq
	if(var_423_bool == 0) goto Label_5204; // 0x1451 JumpB
	var_418_bool = 1; // 0x1452 MovB
	return 0; // 0x1453 Return
	
Label_5204:
	var_418_bool = 0; // 0x1454 MovB
	return 0; // 0x1455 Return
}


func_5452()
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x154c PushV
	var_75_int = 178; // 0x154d PushI
	var_76_int = 1; // 0x154e PushI
	var_77_int = 515437; // 0x154f PushI
	CreateDiaryEntry(var_74_object, var_75_int, var_76_int, var_77_int); // 0x1550 Func
	var_78_bool = 0; var_79_object = Obj(); var_80_int = 0; // 0x1552 PushV
	var_79_object = var_74_object; // 0x1553 Mov
	var_80_int = 175; // 0x1554 MovI
	func_5478(var_78_bool, var_79_object, var_80_int); // 0x1555 NEW_2
	return 2; // 0x1557 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_316_object, var_317_object)
{
	var_0_object = var_317_object; // 0x52 TMov
	var_1_object = var_316_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_322_int = 1; // 0x55 PushI
	if(var_322_int == 0) goto Label_138; // 0x56 JumpB
	var_323_bool = 0; // 0x57 PushV
	var_323_bool = 0; // 0x58 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x59 PushV
	var_325_object = var_1_object; // 0x5a MovT
	func_5134(var_325_object); // 0x5b NEW_2
	if(var_324_bool == 0) goto Label_100; // 0x5d JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x5e PushV
	var_333_object = var_1_object; // 0x5f MovT
	func_5146(var_333_object); // 0x60 NEW_2
	if(var_332_bool == 0) goto Label_100; // 0x62 JumpB
	var_323_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_323_bool == 0) goto Label_121; // 0x64 JumpB
	var_338_object = Obj(); var_339_object = Obj(); // 0x65 PushV
	var_338_object = var_1_object; // 0x66 MovT
	var_339_object = var_0_object; // 0x67 MovT
	func_4891(); // 0x68 NEW_2
	var_342_string = ""; // 0x6a PushV
	var_342_string = "Neutral"; // 0x6b MovS
	func_168(var_317_object, var_342_string); // 0x6c NEW_2
	var_350_int = 532352; // 0x6e PushI
	SetMessage(var_350_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_351_int = 532353; // 0x73 PushI
	var_352_int = 33783; // 0x74 PushI
	var_353_int = 33782; // 0x75 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x76 TObjFunc
	goto Label_138; // 0x78 Jump
	
Label_138:
	var_354_bool = 0; // 0x8a PushV
	func_4882(var_354_bool); // 0x8b NEW_2
	if(var_354_bool == 0) goto Label_153; // 0x8d JumpB
	
Label_142:
	lshWaitForAnimEnd(); // 0x8e Func
	var_355_string = var_3_string; // 0x90 PushT
	if(var_355_string == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_152:
	goto Label_167; // 0x98 Jump
	
Label_167:
	return 0; // 0xa7 Return
	
Label_147:
	var_356_string = ""; // 0x93 PushV
	var_356_string = var_2_object; // 0x94 MovT
	func_4700(var_356_string); // 0x95 NEW_2
	goto Label_142; // 0x97 Jump
	
Label_153:
	var_357_string = "all"; // 0x99 PushS
	var_358_string = "idle"; // 0x9a PushS
	PlayAnimation(var_357_string, var_358_string); // 0x9b Func
	
Label_157:
	WaitForAnimEnd(); // 0x9d Func
	var_359_string = var_3_string; // 0x9f PushT
	if(var_359_string == 0) goto Label_162; // 0xa0 JumpB
	goto Label_167; // 0xa1 Jump
	
Label_162:
	var_360_string = "all"; // 0xa2 PushS
	var_361_string = "idle"; // 0xa3 PushS
	PlayAnimation(var_360_string, var_361_string); // 0xa4 Func
	goto Label_157; // 0xa6 Jump
	
Label_121:
	var_362_string = ""; // 0x79 PushV
	var_362_string = "Neutral"; // 0x7a MovS
	func_168(var_317_object, var_362_string); // 0x7b NEW_2
	var_363_int = 532393; // 0x7d PushI
	SetMessage(var_363_int); // 0x7e TObjFunc
	ClearReplies(); // 0x80 TObjFunc
	var_364_int = 532453; // 0x82 PushI
	var_365_int = -1; // 0x83 PushI
	var_366_int = 33895; // 0x84 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x85 TObjFunc
	goto Label_138; // 0x87 Jump
}


func_4947()
{
	var_138_string = "ood3Ospina4"; // 0x1354 PushS
	var_139_int = 1; // 0x1355 PushI
	SetVariable(var_138_string, var_139_int); // 0x1356 Func
	return 0; // 0x1358 Return
}


func_5206(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0x1457 PushV
	var_453_string = "d3q01"; // 0x1458 MovS
	func_4769(var_452_int, var_453_string); // 0x1459 NEW_2
	var_454_int = 6; // 0x145b PushI
	var_455_bool = var_452_int == var_454_int; // 0x145c Eq
	if(var_455_bool == 0) goto Label_5216; // 0x145d JumpB
	var_450_bool = 1; // 0x145e MovB
	return 0; // 0x145f Return
	
Label_5216:
	var_450_bool = 0; // 0x1460 MovB
	return 0; // 0x1461 Return
}


func_4438(var_80_bool)
{
	var_80_bool = 1; // 0x1156 MovB
	return 0; // 0x1157 Return
}


func_4440()
{
	StopAnimation(); // 0x1158 Func
	StopGroup0(); // 0x115a Func
	return 0; // 0x115c Return
}


func_4953()
{
	var_150_string = "d3q01"; // 0x135a PushS
	var_151_int = 7; // 0x135b PushI
	SetVariable(var_150_string, var_151_int); // 0x135c Func
	func_5387(); // 0x135f NEW_2
	var_160_bool = 0; var_161_string = ""; var_162_string = ""; // 0x1361 PushV
	var_161_string = "quest_d3_01"; // 0x1362 MovS
	var_162_string = "place_butchers"; // 0x1363 MovS
	func_4818(var_160_bool, var_161_string, var_162_string); // 0x1364 NEW_2
	return 0; // 0x1366 Return
}


func_5465(var_87_object)
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x1559 PushV
	GetDiaryRoot(var_89_object); // 0x155a Func
	var_90_bool = var_89_object == 0; // 0x155c Not
	if(var_90_bool == 0) goto Label_5475; // 0x155d JumpB
	var_91_string = "Can't retrieve diary root"; // 0x155e PushS
	Trace(var_91_string); // 0x155f Func
	var_87_object = 0; // 0x1561 MovB
	return 2; // 0x1562 Return
	
Label_5475:
	var_87_object = var_89_object; // 0x1563 Mov
	return 2; // 0x1564 Return
}


func_4700(var_264_string)
{
	var_265_bool = 0; var_266_float = 0; var_267_float = 0; var_268_bool = 0; var_269_float = 0; var_270_float = 0; // 0x125c PushV
	lshHasAnimation(var_268_bool, var_264_string); // 0x125d Func
	var_271_bool = var_268_bool; // 0x125f Push
	if(var_271_bool == 0) goto Label_4711; // 0x1260 JumpB
	lshGetAnimTimes(var_264_string, var_269_float, var_270_float); // 0x1261 Func
	var_272_bool = 0; // 0x1263 PushB
	lshPlayAnimation(var_269_float, var_270_float, var_272_bool); // 0x1264 Func
	goto Label_4715; // 0x1266 Jump
	
Label_4715:
	return 6; // 0x126b Return
	
Label_4711:
	var_273_string = "Can't find lsh animation : "; // 0x1267 PushS
	var_274_int = var_273_string + var_264_string; // 0x1268 Add
	Trace(var_274_int); // 0x1269 Func
}


func_4445(var_56_float)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x115d PushV
	GetPosition(var_61_cvector); // 0x115e Func
	GetPosition(var_62_cvector); // 0x1160 ObjFunc
	var_63_cvector = var_62_cvector - var_61_cvector; // 0x1162 Sub2
	var_56_float = var_63_cvector | var_63_cvector; // 0x1163 Or2
	return 6; // 0x1164 Return
}


func_4193(var_0_object)
{
	var_42_bool = 0; // 0x1061 PushV
	func_4472(var_42_bool); // 0x1062 NEW_2
	var_45_bool = var_42_bool == 0; // 0x1064 Not
	if(var_45_bool == 0) goto Label_4200; // 0x1065 JumpB
	Hold(); // 0x1066 Func
	
Label_4200:
	GetDirection(var_0_object); // 0x1068 Func
	
Label_4202:
	func_4369(); // 0x106b NEW_2
	goto Label_4202; // 0x106d Jump
}


func_5218(var_524_bool)
{
	var_526_int = 0; var_527_string = ""; // 0x1463 PushV
	var_527_string = "d4q01_subquest"; // 0x1464 MovS
	func_4769(var_526_int, var_527_string); // 0x1465 NEW_2
	var_528_int = 1; // 0x1467 PushI
	var_529_bool = var_526_int == var_528_int; // 0x1468 Eq
	if(var_529_bool == 0) goto Label_5228; // 0x1469 JumpB
	var_524_bool = 1; // 0x146a MovB
	return 0; // 0x146b Return
	
Label_5228:
	var_524_bool = 0; // 0x146c MovB
	return 0; // 0x146d Return
}


func_3683(var_0_object, var_62_int, var_63_object)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; var_72_bool = 0; // 0xe63 PushV
	var_0_object = var_63_object; // 0xe64 TMov
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; // 0xe65 PushV
	var_74_object = var_63_object; // 0xe66 Mov
	var_75_float = 70.0; // 0xe67 MovF
	func_4477(var_74_object, var_75_float); // 0xe68 NEW_2
	var_119_bool = var_73_bool == 0; // 0xe6a Not
	if(var_119_bool == 0) goto Label_3694; // 0xe6b JumpB
	var_62_int = -2; // 0xe6c MovI
	return 8; // 0xe6d Return
	
Label_3694:
	CreateDialog(var_69_object); // 0xe6e Func
	var_120_int = 0; // 0xe70 PushV
	func_4876(var_120_int); // 0xe71 NEW_2
	SetNPCName(var_120_int); // 0xe73 ObjFunc
	var_121_int = 0; // 0xe75 PushV
	func_4874(var_121_int); // 0xe76 NEW_2
	SetNPCDescription(var_121_int); // 0xe78 ObjFunc
	var_122_string = ""; // 0xe7a PushV
	func_4878(var_122_string); // 0xe7b NEW_2
	SetPhoto(var_122_string); // 0xe7d ObjFunc
	var_123_string = ""; // 0xe7f PushV
	func_4880(var_123_string); // 0xe80 NEW_2
	SetPhoto2(var_123_string); // 0xe82 ObjFunc
	var_124_int = 0; // 0xe84 PushV
	func_5556(var_124_int); // 0xe85 NEW_2
	SetPlayerName(var_124_int); // 0xe87 ObjFunc
	var_71_int = -1; // 0xe89 MovI
	IsOverrideActive(var_70_bool); // 0xe8a Func
	var_132_bool = var_70_bool; // 0xe8c Push
	if(var_132_bool == 0) goto Label_3728; // 0xe8d JumpB
	var_62_int = -2; // 0xe8e MovI
	return 8; // 0xe8f Return
	
Label_3728:
	DoDialog(var_69_object); // 0xe90 Func
	var_133_bool = 0; var_134_object = Obj(); // 0xe92 PushV
	var_135_object = Obj(); // 0xe93 PushV
	func_4753(var_135_object); // 0xe94 NEW_2
	var_134_object = var_135_object; // 0xe95 Mov
	func_4562(var_133_bool, var_134_object); // 0xe97 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0xe99 PushV
	var_228_object = var_63_object; // 0xe9a Mov
	var_229_object = var_69_object; // 0xe9b Mov
	TaskCall(13); // 0xe9c TaskCall
	func_3764(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object); // 0xe9d NEW_2
	TaskReturn(); // 0xe9e TaskReturn
	IsDialogEnd(var_72_bool); // 0xea0 ObjFunc
	
Label_3746:
	var_280_bool = var_72_bool == 0; // 0xea2 Not
	if(var_280_bool == 0) goto Label_3753; // 0xea3 JumpB
	sync(); // 0xea4 Func
	IsDialogEnd(var_72_bool); // 0xea6 ObjFunc
	goto Label_3746; // 0xea8 Jump
	
Label_3753:
	var_281_object = Obj(); // 0xea9 PushV
	var_281_object = var_63_object; // 0xeaa Mov
	func_4545(); // 0xeab NEW_2
	StopDialog(var_69_object); // 0xead Func
	GetReturnValue(var_71_int); // 0xeaf ObjFunc
	var_62_int = var_71_int; // 0xeb1 Mov
	return 8; // 0xeb2 Return
}


func_2401(var_0_object, var_477_int, var_478_object)
{
	var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0; var_484_object = Obj(); var_485_bool = 0; var_486_int = 0; var_487_bool = 0; // 0x961 PushV
	var_0_object = var_478_object; // 0x962 TMov
	var_488_bool = 0; var_489_object = Obj(); var_490_float = 0; // 0x963 PushV
	var_489_object = var_478_object; // 0x964 Mov
	var_490_float = 70.0; // 0x965 MovF
	func_4477(var_489_object, var_490_float); // 0x966 NEW_2
	var_491_bool = var_488_bool == 0; // 0x968 Not
	if(var_491_bool == 0) goto Label_2412; // 0x969 JumpB
	var_477_int = -2; // 0x96a MovI
	return 8; // 0x96b Return
	
Label_2412:
	CreateDialog(var_484_object); // 0x96c Func
	var_492_int = 0; // 0x96e PushV
	func_4876(var_492_int); // 0x96f NEW_2
	SetNPCName(var_492_int); // 0x971 ObjFunc
	var_493_int = 0; // 0x973 PushV
	func_4874(var_493_int); // 0x974 NEW_2
	SetNPCDescription(var_493_int); // 0x976 ObjFunc
	var_494_string = ""; // 0x978 PushV
	func_4878(var_494_string); // 0x979 NEW_2
	SetPhoto(var_494_string); // 0x97b ObjFunc
	var_495_string = ""; // 0x97d PushV
	func_4880(var_495_string); // 0x97e NEW_2
	SetPhoto2(var_495_string); // 0x980 ObjFunc
	var_496_int = 0; // 0x982 PushV
	func_5556(var_496_int); // 0x983 NEW_2
	SetPlayerName(var_496_int); // 0x985 ObjFunc
	var_486_int = -1; // 0x987 MovI
	IsOverrideActive(var_485_bool); // 0x988 Func
	var_497_bool = var_485_bool; // 0x98a Push
	if(var_497_bool == 0) goto Label_2446; // 0x98b JumpB
	var_477_int = -2; // 0x98c MovI
	return 8; // 0x98d Return
	
Label_2446:
	DoDialog(var_484_object); // 0x98e Func
	var_498_bool = 0; var_499_object = Obj(); // 0x990 PushV
	var_500_object = Obj(); // 0x991 PushV
	func_4753(var_500_object); // 0x992 NEW_2
	var_499_object = var_500_object; // 0x993 Mov
	func_4562(var_498_bool, var_499_object); // 0x995 NEW_2
	var_501_object = Obj(); var_502_object = Obj(); // 0x997 PushV
	var_501_object = var_478_object; // 0x998 Mov
	var_502_object = var_484_object; // 0x999 Mov
	TaskCall(9); // 0x99a TaskCall
	func_2482(var_503_object, var_504_object, var_505_string, var_506_bool, var_501_object, var_502_object); // 0x99b NEW_2
	TaskReturn(); // 0x99c TaskReturn
	IsDialogEnd(var_487_bool); // 0x99e ObjFunc
	
Label_2464:
	var_563_bool = var_487_bool == 0; // 0x9a0 Not
	if(var_563_bool == 0) goto Label_2471; // 0x9a1 JumpB
	sync(); // 0x9a2 Func
	IsDialogEnd(var_487_bool); // 0x9a4 ObjFunc
	goto Label_2464; // 0x9a6 Jump
	
Label_2471:
	var_564_object = Obj(); // 0x9a7 PushV
	var_564_object = var_478_object; // 0x9a8 Mov
	func_4545(); // 0x9a9 NEW_2
	StopDialog(var_484_object); // 0x9ab Func
	GetReturnValue(var_486_int); // 0x9ad ObjFunc
	var_477_int = var_486_int; // 0x9af Mov
	return 8; // 0x9b0 Return
}


func_4453(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; // 0x1165 PushV
	GetPosition(var_54_cvector); // 0x1166 Func
	var_55_cvector = var_50_cvector - var_54_cvector; // 0x1168 Sub2
	var_57_float = GetByIndex(var_55_cvector, 0); // 0x1169 PushE
	var_58_float = GetByIndex(var_55_cvector, 2); // 0x116a PushE
	Rotate(var_57_float, var_58_float, var_56_bool); // 0x116b Func
	var_49_bool = var_56_bool; // 0x116d Mov
	return 6; // 0x116e Return
}


func_5478(var_78_bool, var_79_object, var_80_int)
{
	var_81_object = Obj(); var_82_object = Obj(); var_83_int = 0; var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; // 0x1566 PushV
	var_87_object = Obj(); // 0x1567 PushV
	func_5465(var_87_object); // 0x1568 NEW_2
	var_84_object = var_87_object; // 0x1569 Mov
	Find(var_80_int, var_85_object); // 0x156b ObjFunc
	var_92_bool = var_85_object == 0; // 0x156d Not
	if(var_92_bool == 0) goto Label_5493; // 0x156e JumpB
	var_93_string = "Can't find diary parent with id: "; // 0x156f PushS
	var_94_int = var_93_string + var_80_int; // 0x1570 Add
	Trace(var_94_int); // 0x1571 Func
	var_78_bool = 0; // 0x1573 MovB
	return 6; // 0x1574 Return
	
Label_5493:
	AddChild(var_79_object); // 0x1575 ObjFunc
	var_95_int = 7; // 0x1577 PushI
	SendWorldWndMessage(var_95_int); // 0x1578 Func
	GetCategory(var_86_int); // 0x157a ObjFunc
	SetDiarySection(var_86_int); // 0x157c Func
	var_78_bool = 0; // 0x157e MovB
	return 6; // 0x157f Return
}


func_4967()
{
	var_96_object = Obj(); var_97_string = ""; var_98_float = 0; // 0x1368 PushV
	var_99_object = Obj(); // 0x1369 PushV
	func_5506(var_99_object); // 0x136a NEW_2
	var_96_object = var_99_object; // 0x136b Mov
	var_97_string = "pt_map_bigvlad"; // 0x136d MovS
	var_98_float = 2; // 0x136e MovI
	func_5523(var_96_object, var_97_string, var_98_float); // 0x136f NEW_2
	var_119_object = Obj(); // 0x1371 PushV
	func_5506(var_119_object); // 0x1372 NEW_2
	ShowMap(var_119_object); // 0x1374 ObjFunc
	return 0; // 0x1376 Return
}


func_4716(var_239_string, var_240_bool)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x126c PushV
	lshHasAnimation(var_246_bool, var_239_string); // 0x126d Func
	var_249_bool = var_246_bool; // 0x126f Push
	if(var_249_bool == 0) goto Label_4726; // 0x1270 JumpB
	lshGetAnimTimes(var_239_string, var_247_float, var_248_float); // 0x1271 Func
	lshPlayAnimation(var_247_float, var_248_float, var_240_bool); // 0x1273 Func
	goto Label_4730; // 0x1275 Jump
	
Label_4730:
	return 6; // 0x127a Return
	
Label_4726:
	var_250_string = "Can't find lsh animation : "; // 0x1276 PushS
	var_251_int = var_250_string + var_239_string; // 0x1277 Add
	Trace(var_251_int); // 0x1278 Func
}


func_5230(var_518_bool)
{
	var_520_int = 0; var_521_string = ""; // 0x146f PushV
	var_521_string = "ood4Ospina1"; // 0x1470 MovS
	func_4769(var_520_int, var_521_string); // 0x1471 NEW_2
	var_522_int = 0; // 0x1473 PushI
	var_523_bool = var_520_int == var_522_int; // 0x1474 Eq
	if(var_523_bool == 0) goto Label_5240; // 0x1475 JumpB
	var_518_bool = 1; // 0x1476 MovB
	return 0; // 0x1477 Return
	
Label_5240:
	var_518_bool = 0; // 0x1478 MovB
	return 0; // 0x1479 Return
}


func_4207(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x106f PushV
	var_69_string = "player"; // 0x1070 PushS
	FindActor(var_68_object, var_69_string); // 0x1071 Func
	var_70_bool = var_68_object == 0; // 0x1073 Not
	if(var_70_bool == 0) goto Label_4215; // 0x1074 JumpB
	var_66_bool = 0; // 0x1075 MovB
	return 2; // 0x1076 Return
	
Label_4215:
	var_71_bool = 0; var_72_object = Obj(); // 0x1077 PushV
	var_72_object = var_68_object; // 0x1078 Mov
	func_4463(var_72_object); // 0x1079 NEW_2
	var_66_bool = var_71_bool; // 0x107a Mov
	return 2; // 0x107c Return
}


func_4463(var_45_bool)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x116f PushV
	GetPosition(var_48_cvector); // 0x1170 ObjFunc
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0x1172 PushV
	var_50_cvector = var_48_cvector; // 0x1173 Mov
	func_4453(var_49_bool, var_50_cvector); // 0x1174 NEW_2
	var_45_bool = var_49_bool; // 0x1175 Mov
	return 2; // 0x1177 Return
}


func_628(var_0_object, var_751_int, var_752_object)
{
	var_754_object = Obj(); var_755_bool = 0; var_756_int = 0; var_757_bool = 0; var_758_object = Obj(); var_759_bool = 0; var_760_int = 0; var_761_bool = 0; // 0x274 PushV
	var_0_object = var_752_object; // 0x275 TMov
	var_762_bool = 0; var_763_object = Obj(); var_764_float = 0; // 0x276 PushV
	var_763_object = var_752_object; // 0x277 Mov
	var_764_float = 70.0; // 0x278 MovF
	func_4477(var_763_object, var_764_float); // 0x279 NEW_2
	var_765_bool = var_762_bool == 0; // 0x27b Not
	if(var_765_bool == 0) goto Label_639; // 0x27c JumpB
	var_751_int = -2; // 0x27d MovI
	return 8; // 0x27e Return
	
Label_639:
	CreateDialog(var_758_object); // 0x27f Func
	var_766_int = 0; // 0x281 PushV
	func_4876(var_766_int); // 0x282 NEW_2
	SetNPCName(var_766_int); // 0x284 ObjFunc
	var_767_int = 0; // 0x286 PushV
	func_4874(var_767_int); // 0x287 NEW_2
	SetNPCDescription(var_767_int); // 0x289 ObjFunc
	var_768_string = ""; // 0x28b PushV
	func_4878(var_768_string); // 0x28c NEW_2
	SetPhoto(var_768_string); // 0x28e ObjFunc
	var_769_string = ""; // 0x290 PushV
	func_4880(var_769_string); // 0x291 NEW_2
	SetPhoto2(var_769_string); // 0x293 ObjFunc
	var_770_int = 0; // 0x295 PushV
	func_5556(var_770_int); // 0x296 NEW_2
	SetPlayerName(var_770_int); // 0x298 ObjFunc
	var_760_int = -1; // 0x29a MovI
	IsOverrideActive(var_759_bool); // 0x29b Func
	var_771_bool = var_759_bool; // 0x29d Push
	if(var_771_bool == 0) goto Label_673; // 0x29e JumpB
	var_751_int = -2; // 0x29f MovI
	return 8; // 0x2a0 Return
	
Label_673:
	DoDialog(var_758_object); // 0x2a1 Func
	var_772_bool = 0; var_773_object = Obj(); // 0x2a3 PushV
	var_774_object = Obj(); // 0x2a4 PushV
	func_4753(var_774_object); // 0x2a5 NEW_2
	var_773_object = var_774_object; // 0x2a6 Mov
	func_4562(var_772_bool, var_773_object); // 0x2a8 NEW_2
	var_775_object = Obj(); var_776_object = Obj(); // 0x2aa PushV
	var_775_object = var_752_object; // 0x2ab Mov
	var_776_object = var_758_object; // 0x2ac Mov
	TaskCall(3); // 0x2ad TaskCall
	func_709(var_777_object, var_778_object, var_779_string, var_780_bool, var_775_object, var_776_object); // 0x2ae NEW_2
	TaskReturn(); // 0x2af TaskReturn
	IsDialogEnd(var_761_bool); // 0x2b1 ObjFunc
	
Label_691:
	var_808_bool = var_761_bool == 0; // 0x2b3 Not
	if(var_808_bool == 0) goto Label_698; // 0x2b4 JumpB
	sync(); // 0x2b5 Func
	IsDialogEnd(var_761_bool); // 0x2b7 ObjFunc
	goto Label_691; // 0x2b9 Jump
	
Label_698:
	var_809_object = Obj(); // 0x2ba PushV
	var_809_object = var_752_object; // 0x2bb Mov
	func_4545(); // 0x2bc NEW_2
	StopDialog(var_758_object); // 0x2be Func
	GetReturnValue(var_760_int); // 0x2c0 ObjFunc
	var_751_int = var_760_int; // 0x2c2 Mov
	return 8; // 0x2c3 Return
}


func_4983()
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0; // 0x1378 PushV
	var_101_object = Obj(); // 0x1379 PushV
	func_5506(var_101_object); // 0x137a NEW_2
	var_98_object = var_101_object; // 0x137b Mov
	var_99_string = "pt_map_mladvlad"; // 0x137d MovS
	var_100_float = 2; // 0x137e MovI
	func_5523(var_98_object, var_99_string, var_100_float); // 0x137f NEW_2
	var_121_object = Obj(); // 0x1381 PushV
	func_5506(var_121_object); // 0x1382 NEW_2
	ShowMap(var_121_object); // 0x1384 ObjFunc
	return 0; // 0x1386 Return
}


func_4472(var_42_bool)
{
	var_43_bool = 0; var_44_bool = 0; // 0x1178 PushV
	IsLoaded(var_44_bool); // 0x1179 Func
	var_42_bool = var_44_bool; // 0x117b Mov
	return 2; // 0x117c Return
}


func_887(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; // 0x377 PushV
	var_0_object = var_568_object; // 0x378 TMov
	var_578_bool = 0; var_579_object = Obj(); var_580_float = 0; // 0x379 PushV
	var_579_object = var_568_object; // 0x37a Mov
	var_580_float = 70.0; // 0x37b MovF
	func_4477(var_579_object, var_580_float); // 0x37c NEW_2
	var_581_bool = var_578_bool == 0; // 0x37e Not
	if(var_581_bool == 0) goto Label_898; // 0x37f JumpB
	var_567_int = -2; // 0x380 MovI
	return 8; // 0x381 Return
	
Label_898:
	CreateDialog(var_574_object); // 0x382 Func
	var_582_int = 0; // 0x384 PushV
	func_4876(var_582_int); // 0x385 NEW_2
	SetNPCName(var_582_int); // 0x387 ObjFunc
	var_583_int = 0; // 0x389 PushV
	func_4874(var_583_int); // 0x38a NEW_2
	SetNPCDescription(var_583_int); // 0x38c ObjFunc
	var_584_string = ""; // 0x38e PushV
	func_4878(var_584_string); // 0x38f NEW_2
	SetPhoto(var_584_string); // 0x391 ObjFunc
	var_585_string = ""; // 0x393 PushV
	func_4880(var_585_string); // 0x394 NEW_2
	SetPhoto2(var_585_string); // 0x396 ObjFunc
	var_586_int = 0; // 0x398 PushV
	func_5556(var_586_int); // 0x399 NEW_2
	SetPlayerName(var_586_int); // 0x39b ObjFunc
	var_576_int = -1; // 0x39d MovI
	IsOverrideActive(var_575_bool); // 0x39e Func
	var_587_bool = var_575_bool; // 0x3a0 Push
	if(var_587_bool == 0) goto Label_932; // 0x3a1 JumpB
	var_567_int = -2; // 0x3a2 MovI
	return 8; // 0x3a3 Return
	
Label_932:
	DoDialog(var_574_object); // 0x3a4 Func
	var_588_bool = 0; var_589_object = Obj(); // 0x3a6 PushV
	var_590_object = Obj(); // 0x3a7 PushV
	func_4753(var_590_object); // 0x3a8 NEW_2
	var_589_object = var_590_object; // 0x3a9 Mov
	func_4562(var_588_bool, var_589_object); // 0x3ab NEW_2
	var_591_object = Obj(); var_592_object = Obj(); // 0x3ad PushV
	var_591_object = var_568_object; // 0x3ae Mov
	var_592_object = var_574_object; // 0x3af Mov
	TaskCall(5); // 0x3b0 TaskCall
	func_968(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object); // 0x3b1 NEW_2
	TaskReturn(); // 0x3b2 TaskReturn
	IsDialogEnd(var_577_bool); // 0x3b4 ObjFunc
	
Label_950:
	var_666_bool = var_577_bool == 0; // 0x3b6 Not
	if(var_666_bool == 0) goto Label_957; // 0x3b7 JumpB
	sync(); // 0x3b8 Func
	IsDialogEnd(var_577_bool); // 0x3ba ObjFunc
	goto Label_950; // 0x3bc Jump
	
Label_957:
	var_667_object = Obj(); // 0x3bd PushV
	var_667_object = var_568_object; // 0x3be Mov
	func_4545(); // 0x3bf NEW_2
	StopDialog(var_574_object); // 0x3c1 Func
	GetReturnValue(var_576_int); // 0x3c3 ObjFunc
	var_567_int = var_576_int; // 0x3c5 Mov
	return 8; // 0x3c6 Return
}


func_5242(var_540_bool)
{
	var_542_int = 0; var_543_string = ""; // 0x147b PushV
	var_543_string = "d4q01_subquest"; // 0x147c MovS
	func_4769(var_542_int, var_543_string); // 0x147d NEW_2
	var_544_int = 3; // 0x147f PushI
	var_545_bool = var_542_int == var_544_int; // 0x1480 Eq
	if(var_545_bool == 0) goto Label_5252; // 0x1481 JumpB
	var_540_bool = 1; // 0x1482 MovB
	return 0; // 0x1483 Return
	
Label_5252:
	var_540_bool = 0; // 0x1484 MovB
	return 0; // 0x1485 Return
}


func_4731(var_167_bool, var_168_string)
{
	var_169_bool = 0; var_170_bool = 0; // 0x127b PushV
	var_171_bool = 0; // 0x127c PushV
	func_4882(var_171_bool); // 0x127d NEW_2
	if(var_171_bool == 0) goto Label_4744; // 0x127f JumpB
	lshHasSpeech(var_170_bool, var_168_string); // 0x1280 Func
	var_172_bool = var_170_bool; // 0x1282 Push
	if(var_172_bool == 0) goto Label_4744; // 0x1283 JumpB
	lshPlaySpeech(var_168_string); // 0x1284 Func
	var_167_bool = 1; // 0x1286 MovB
	return 2; // 0x1287 Return
	
Label_4744:
	var_167_bool = 0; // 0x1288 MovB
	return 2; // 0x1289 Return
}


func_4477(var_73_bool, var_75_float)
{
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0; // 0x117d PushV
	GetPosition(var_86_cvector); // 0x117e ObjFunc
	GetEyesHeight(var_85_float); // 0x1180 ObjFunc
	var_94_float = GetByIndex(var_86_cvector, 1); // 0x1182 PushE
	var_94_float = var_94_float + var_85_float; // 0x1183 Add2
	SetByIndex(var_86_cvector, 1) = var_94_float; // 0x1184 PopE
	GetPosition(var_87_cvector); // 0x1185 Func
	GetEyesHeight(var_85_float); // 0x1187 Func
	var_95_float = GetByIndex(var_87_cvector, 1); // 0x1189 PushE
	var_95_float = var_95_float + var_85_float; // 0x118a Add2
	SetByIndex(var_87_cvector, 1) = var_95_float; // 0x118b PopE
	var_88_cvector = var_86_cvector - var_87_cvector; // 0x118c Sub2
	var_96_float = GetByIndex(var_88_cvector, 1); // 0x118d PushE
	var_96_float = 0; // 0x118e MovI
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0x118f PopE
	var_97_int = var_88_cvector | var_88_cvector; // 0x1190 Or
	var_98_float = sqrt(var_97_int); // 0x1191 Sqrt
	var_88_cvector = var_88_cvector / var_88_cvector; // 0x1192 Div2
	var_89_cvector = -var_88_cvector; // 0x1193 Neg2
	var_99_float = var_88_cvector * var_75_float; // 0x1194 Mult
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x1195 PushV
	var_102_cvector = CVector(0.0, 1.0, 0.0); // 0x1196 PushVec
	var_101_cvector = var_89_cvector ^ var_102_cvector; // 0x1197 Xor2
	func_4759(var_100_cvector, var_101_cvector); // 0x1198 NEW_2
	var_108_int = 25; // 0x119a PushI
	var_109_float = var_100_cvector * var_108_int; // 0x119b Mult
	var_110_int = var_99_float + var_109_float; // 0x119c Add
	var_111_cvector = CVector(0.0, 10.0, 0.0); // 0x119d PushVec
	var_90_cvector = var_110_int - var_111_cvector; // 0x119e Sub2
	var_91_cvector = var_87_cvector + var_90_cvector; // 0x119f Add2
	IsOverrideActive(var_92_bool); // 0x11a0 Func
	var_112_bool = var_92_bool; // 0x11a2 Push
	if(var_112_bool == 0) goto Label_4518; // 0x11a3 JumpB
	var_73_bool = 0; // 0x11a4 MovB
	return 18; // 0x11a5 Return
	
Label_4518:
	StopWorld(); // 0x11a6 Func
	CameraTransit(var_91_cvector, var_89_cvector); // 0x11a8 Func
	var_113_float = GetByIndex(var_90_cvector, 0); // 0x11aa PushE
	var_114_float = GetByIndex(var_90_cvector, 2); // 0x11ab PushE
	Rotate(var_113_float, var_114_float); // 0x11ac Func
	var_115_bool = 0; // 0x11ae PushV
	func_4882(var_115_bool); // 0x11af NEW_2
	if(var_115_bool == 0) goto Label_4531; // 0x11b1 JumpB
	goto Label_4539; // 0x11b2 Jump
	
Label_4539:
	CameraWaitForPlayFinish(); // 0x11bb Func
	ResumeWorld(); // 0x11bd Func
	var_73_bool = 1; // 0x11bf MovB
	return 18; // 0x11c0 Return
	
Label_4531:
	var_116_string = "head"; // 0x11b3 PushS
	HasAnimationTrack(var_93_bool, var_116_string); // 0x11b4 Func
	var_117_bool = var_93_bool; // 0x11b6 Push
	if(var_117_bool == 0) goto Label_4539; // 0x11b7 JumpB
	var_118_string = "head"; // 0x11b8 PushS
	LookAsyncCamera(var_118_string); // 0x11b9 Func
}


func_4222(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0); // 0x107e PushE
	var_119_float = GetByIndex(var_0_object, 2); // 0x107f PushE
	RotateAsync(var_118_float, var_119_float); // 0x1080 Func
	return 0; // 0x1082 Return
}


func_5506(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj(); // 0x1582 PushV
	GetMainOutdoorScene(var_62_object); // 0x1583 Func
	var_64_bool = var_62_object == 0; // 0x1585 NullEq
	if(var_64_bool == 0) goto Label_5517; // 0x1586 JumpB
	var_65_string = "Can't find main outdoor scene"; // 0x1587 PushS
	Trace(var_65_string); // 0x1588 Func
	var_63_object = 0; // 0x158a SetNull
	var_59_object = var_63_object; // 0x158b Mov
	return 4; // 0x158c Return
	
Label_5517:
	GetMap(var_63_object); // 0x158d ObjFunc
	var_59_object = var_63_object; // 0x158f Mov
	return 4; // 0x1590 Return
}


func_1667(var_0_object, var_1_object, var_2_object, var_3_string, var_395_object, var_396_object)
{
	var_0_object = var_396_object; // 0x684 TMov
	var_1_object = var_395_object; // 0x685 TMov
	var_3_string = 0; // 0x686 TMovB
	var_401_int = 1; // 0x687 PushI
	if(var_401_int == 0) goto Label_1762; // 0x688 JumpB
	var_402_string = ""; // 0x689 PushV
	var_402_string = "Neutral"; // 0x68a MovS
	func_1792(var_396_object, var_402_string); // 0x68b NEW_2
	var_410_int = 508869; // 0x68d PushI
	SetMessage(var_410_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_411_bool = 0; // 0x692 PushV
	var_411_bool = 0; // 0x693 MovB
	var_412_bool = 0; var_413_object = Obj(); // 0x694 PushV
	var_413_object = var_1_object; // 0x695 MovT
	func_5158(var_413_object); // 0x696 NEW_2
	if(var_412_bool == 0) goto Label_1695; // 0x698 JumpB
	var_418_bool = 0; var_419_object = Obj(); // 0x699 PushV
	var_419_object = var_1_object; // 0x69a MovT
	func_5194(var_419_object); // 0x69b NEW_2
	if(var_418_bool == 0) goto Label_1695; // 0x69d JumpB
	var_411_bool = 1; // 0x69e MovB
	
Label_1695:
	if(var_411_bool == 0) goto Label_1701; // 0x69f JumpB
	var_424_int = 508889; // 0x6a0 PushI
	var_425_int = 9751; // 0x6a1 PushI
	var_426_int = 9750; // 0x6a2 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x6a3 TObjFunc
	
Label_1701:
	var_427_bool = 0; // 0x6a5 PushV
	var_427_bool = 0; // 0x6a6 MovB
	var_428_bool = 0; // 0x6a7 PushV
	var_428_bool = 0; // 0x6a8 MovB
	var_429_bool = 0; var_430_object = Obj(); // 0x6a9 PushV
	var_430_object = var_1_object; // 0x6aa MovT
	func_5182(var_430_object); // 0x6ab NEW_2
	if(var_429_bool == 0) goto Label_1717; // 0x6ad JumpB
	var_435_bool = 0; var_436_object = Obj(); // 0x6ae PushV
	var_436_object = var_1_object; // 0x6af MovT
	func_5158(var_436_object); // 0x6b0 NEW_2
	var_437_bool = var_435_bool == 0; // 0x6b2 Not
	if(var_437_bool == 0) goto Label_1717; // 0x6b3 JumpB
	var_428_bool = 1; // 0x6b4 MovB
	
Label_1717:
	if(var_428_bool == 0) goto Label_1724; // 0x6b5 JumpB
	var_438_bool = 0; var_439_object = Obj(); // 0x6b6 PushV
	var_439_object = var_1_object; // 0x6b7 MovT
	func_5194(var_439_object); // 0x6b8 NEW_2
	if(var_438_bool == 0) goto Label_1724; // 0x6ba JumpB
	var_427_bool = 1; // 0x6bb MovB
	
Label_1724:
	if(var_427_bool == 0) goto Label_1730; // 0x6bc JumpB
	var_440_int = 511136; // 0x6bd PushI
	var_441_int = 12326; // 0x6be PushI
	var_442_int = 12325; // 0x6bf PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x6c0 TObjFunc
	
Label_1730:
	var_443_bool = 0; // 0x6c2 PushV
	var_443_bool = 0; // 0x6c3 MovB
	var_444_bool = 0; var_445_object = Obj(); // 0x6c4 PushV
	var_445_object = var_1_object; // 0x6c5 MovT
	func_5170(var_445_object); // 0x6c6 NEW_2
	if(var_444_bool == 0) goto Label_1743; // 0x6c8 JumpB
	var_450_bool = 0; var_451_object = Obj(); // 0x6c9 PushV
	var_451_object = var_1_object; // 0x6ca MovT
	func_5206(var_451_object); // 0x6cb NEW_2
	if(var_450_bool == 0) goto Label_1743; // 0x6cd JumpB
	var_443_bool = 1; // 0x6ce MovB
	
Label_1743:
	if(var_443_bool == 0) goto Label_1749; // 0x6cf JumpB
	var_456_int = 508908; // 0x6d0 PushI
	var_457_int = 9772; // 0x6d1 PushI
	var_458_int = 9771; // 0x6d2 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x6d3 TObjFunc
	
Label_1749:
	var_459_int = 511134; // 0x6d5 PushI
	var_460_int = -1; // 0x6d6 PushI
	var_461_int = 12323; // 0x6d7 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x6d8 TObjFunc
	var_462_int = 536099; // 0x6da PushI
	var_463_int = -1; // 0x6db PushI
	var_464_int = 37851; // 0x6dc PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x6dd TObjFunc
	goto Label_1762; // 0x6df Jump
	
Label_1762:
	var_465_bool = 0; // 0x6e2 PushV
	func_4882(var_465_bool); // 0x6e3 NEW_2
	if(var_465_bool == 0) goto Label_1777; // 0x6e5 JumpB
	
Label_1766:
	lshWaitForAnimEnd(); // 0x6e6 Func
	var_466_string = var_3_string; // 0x6e8 PushT
	if(var_466_string == 0) goto Label_1771; // 0x6e9 JumpB
	goto Label_1776; // 0x6ea Jump
	
Label_1776:
	goto Label_1791; // 0x6f0 Jump
	
Label_1791:
	return 0; // 0x6ff Return
	
Label_1771:
	var_467_string = ""; // 0x6eb PushV
	var_467_string = var_2_object; // 0x6ec MovT
	func_4700(var_467_string); // 0x6ed NEW_2
	goto Label_1766; // 0x6ef Jump
	
Label_1777:
	var_468_string = "all"; // 0x6f1 PushS
	var_469_string = "idle"; // 0x6f2 PushS
	PlayAnimation(var_468_string, var_469_string); // 0x6f3 Func
	
Label_1781:
	WaitForAnimEnd(); // 0x6f5 Func
	var_470_string = var_3_string; // 0x6f7 PushT
	if(var_470_string == 0) goto Label_1786; // 0x6f8 JumpB
	goto Label_1791; // 0x6f9 Jump
	
Label_1786:
	var_471_string = "all"; // 0x6fa PushS
	var_472_string = "idle"; // 0x6fb PushS
	PlayAnimation(var_471_string, var_472_string); // 0x6fc Func
	goto Label_1781; // 0x6fe Jump
}


func_4227(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0x1083 PushV
	var_54_string = "player"; // 0x1084 PushS
	FindActor(var_52_object, var_54_string); // 0x1085 Func
	var_55_bool = var_52_object == 0; // 0x1087 Not
	if(var_55_bool == 0) goto Label_4235; // 0x1088 JumpB
	var_49_bool = 0; // 0x1089 MovB
	return 4; // 0x108a Return
	
Label_4235:
	var_56_float = 0; var_57_object = Obj(); // 0x108b PushV
	var_57_object = var_52_object; // 0x108c Mov
	func_4445(var_57_object); // 0x108d NEW_2
	var_64_float = 90000.0; // 0x108f PushF
	var_65_bool = var_56_float > var_64_float; // 0x1090 GT
	if(var_65_bool == 0) goto Label_4244; // 0x1091 JumpB
	var_49_bool = 0; // 0x1092 MovB
	return 4; // 0x1093 Return
	
Label_4244:
	CanSee(var_53_bool, var_52_object); // 0x1094 Func
	var_49_bool = var_53_bool; // 0x1096 Mov
	return 4; // 0x1097 Return
}


func_5254(var_534_bool)
{
	var_536_int = 0; var_537_string = ""; // 0x1487 PushV
	var_537_string = "ood4Ospina2"; // 0x1488 MovS
	func_4769(var_536_int, var_537_string); // 0x1489 NEW_2
	var_538_int = 0; // 0x148b PushI
	var_539_bool = var_536_int == var_538_int; // 0x148c Eq
	if(var_539_bool == 0) goto Label_5264; // 0x148d JumpB
	var_534_bool = 1; // 0x148e MovB
	return 0; // 0x148f Return
	
Label_5264:
	var_534_bool = 0; // 0x1490 MovB
	return 0; // 0x1491 Return
}


func_4999()
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x1388 PushV
	var_76_object = Obj(); // 0x1389 PushV
	func_5506(var_76_object); // 0x138a NEW_2
	var_73_object = var_76_object; // 0x138b Mov
	var_74_string = "pt_map_lara"; // 0x138d MovS
	var_75_float = 2; // 0x138e MovI
	func_5523(var_73_object, var_74_string, var_75_float); // 0x138f NEW_2
	var_96_object = Obj(); // 0x1391 PushV
	func_5506(var_96_object); // 0x1392 NEW_2
	ShowMap(var_96_object); // 0x1394 ObjFunc
	return 0; // 0x1396 Return
}


func_4746()
{
	var_44_bool = 0; // 0x128a PushV
	func_4882(var_44_bool); // 0x128b NEW_2
	if(var_44_bool == 0) goto Label_4752; // 0x128d JumpB
	lshStopSpeech(); // 0x128e Func
	
Label_4752:
	return 0; // 0x1290 Return
}


func_3983(var_0_object, var_810_int, var_811_object)
{
	var_813_object = Obj(); var_814_bool = 0; var_815_int = 0; var_816_bool = 0; var_817_object = Obj(); var_818_bool = 0; var_819_int = 0; var_820_bool = 0; // 0xf8f PushV
	var_0_object = var_811_object; // 0xf90 TMov
	var_821_bool = 0; var_822_object = Obj(); var_823_float = 0; // 0xf91 PushV
	var_822_object = var_811_object; // 0xf92 Mov
	var_823_float = 70.0; // 0xf93 MovF
	func_4477(var_822_object, var_823_float); // 0xf94 NEW_2
	var_824_bool = var_821_bool == 0; // 0xf96 Not
	if(var_824_bool == 0) goto Label_3994; // 0xf97 JumpB
	var_810_int = -2; // 0xf98 MovI
	return 8; // 0xf99 Return
	
Label_3994:
	CreateDialog(var_817_object); // 0xf9a Func
	var_825_int = 0; // 0xf9c PushV
	func_4876(var_825_int); // 0xf9d NEW_2
	SetNPCName(var_825_int); // 0xf9f ObjFunc
	var_826_int = 0; // 0xfa1 PushV
	func_4874(var_826_int); // 0xfa2 NEW_2
	SetNPCDescription(var_826_int); // 0xfa4 ObjFunc
	var_827_string = ""; // 0xfa6 PushV
	func_4878(var_827_string); // 0xfa7 NEW_2
	SetPhoto(var_827_string); // 0xfa9 ObjFunc
	var_828_string = ""; // 0xfab PushV
	func_4880(var_828_string); // 0xfac NEW_2
	SetPhoto2(var_828_string); // 0xfae ObjFunc
	var_829_int = 0; // 0xfb0 PushV
	func_5556(var_829_int); // 0xfb1 NEW_2
	SetPlayerName(var_829_int); // 0xfb3 ObjFunc
	var_819_int = -1; // 0xfb5 MovI
	IsOverrideActive(var_818_bool); // 0xfb6 Func
	var_830_bool = var_818_bool; // 0xfb8 Push
	if(var_830_bool == 0) goto Label_4028; // 0xfb9 JumpB
	var_810_int = -2; // 0xfba MovI
	return 8; // 0xfbb Return
	
Label_4028:
	DoDialog(var_817_object); // 0xfbc Func
	var_831_bool = 0; var_832_object = Obj(); // 0xfbe PushV
	var_833_object = Obj(); // 0xfbf PushV
	func_4753(var_833_object); // 0xfc0 NEW_2
	var_832_object = var_833_object; // 0xfc1 Mov
	func_4562(var_831_bool, var_832_object); // 0xfc3 NEW_2
	var_834_object = Obj(); var_835_object = Obj(); // 0xfc5 PushV
	var_834_object = var_811_object; // 0xfc6 Mov
	var_835_object = var_817_object; // 0xfc7 Mov
	TaskCall(15); // 0xfc8 TaskCall
	func_4064(var_836_object, var_837_object, var_838_string, var_839_bool, var_834_object, var_835_object); // 0xfc9 NEW_2
	TaskReturn(); // 0xfca TaskReturn
	IsDialogEnd(var_820_bool); // 0xfcc ObjFunc
	
Label_4046:
	var_864_bool = var_820_bool == 0; // 0xfce Not
	if(var_864_bool == 0) goto Label_4053; // 0xfcf JumpB
	sync(); // 0xfd0 Func
	IsDialogEnd(var_820_bool); // 0xfd2 ObjFunc
	goto Label_4046; // 0xfd4 Jump
	
Label_4053:
	var_865_object = Obj(); // 0xfd5 PushV
	var_865_object = var_811_object; // 0xfd6 Mov
	func_4545(); // 0xfd7 NEW_2
	StopDialog(var_817_object); // 0xfd9 Func
	GetReturnValue(var_819_int); // 0xfdb ObjFunc
	var_810_int = var_819_int; // 0xfdd Mov
	return 8; // 0xfde Return
}


func_4753(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x1291 PushV
	self(var_137_object); // 0x1292 Func
	var_135_object = var_137_object; // 0x1294 Mov
	return 2; // 0x1295 Return
}


func_5266(var_614_bool)
{
	var_616_int = 0; var_617_string = ""; // 0x1493 PushV
	var_617_string = "d6q01"; // 0x1494 MovS
	func_4769(var_616_int, var_617_string); // 0x1495 NEW_2
	var_618_int = 1; // 0x1497 PushI
	var_619_bool = var_616_int == var_618_int; // 0x1498 Eq
	if(var_619_bool == 0) goto Label_5276; // 0x1499 JumpB
	var_614_bool = 1; // 0x149a MovB
	return 0; // 0x149b Return
	
Label_5276:
	var_614_bool = 0; // 0x149c MovB
	return 0; // 0x149d Return
}


func_5523(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0; // 0x1593 PushV
	GetMainOutdoorScene(var_108_object); // 0x1594 Func
	var_110_bool = var_108_object == 0; // 0x1596 NullEq
	if(var_110_bool == 0) goto Label_5532; // 0x1597 JumpB
	var_111_string = "Can't find main outdoor scene"; // 0x1598 PushS
	Trace(var_111_string); // 0x1599 Func
	return 8; // 0x159b Return
	
Label_5532:
	GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector); // 0x159c ObjFunc
	var_112_bool = var_109_bool == 0; // 0x159e Not
	if(var_112_bool == 0) goto Label_5542; // 0x159f JumpB
	var_113_string = "Warning: outdoor scene locator "; // 0x15a0 PushS
	var_114_int = var_113_string + var_99_string; // 0x15a1 Add
	var_115_string = " doesnt exist"; // 0x15a2 PushS
	var_116_int = var_114_int + var_115_string; // 0x15a3 Add
	Trace(var_116_int); // 0x15a4 Func
	
Label_5542:
	GetMap(var_98_object); // 0x15a6 ObjFunc
	var_117_bool = var_98_object == 0; // 0x15a8 NullEq
	if(var_117_bool == 0) goto Label_5550; // 0x15a9 JumpB
	var_118_string = "Can't find map"; // 0x15aa PushS
	Trace(var_118_string); // 0x15ab Func
	return 8; // 0x15ad Return
	
Label_5550:
	var_119_float = GetByIndex(var_106_cvector, 0); // 0x15ae PushE
	var_120_float = GetByIndex(var_106_cvector, 2); // 0x15af PushE
	SetMapParams(var_119_float, var_120_float, var_100_float); // 0x15b0 ObjFunc
	return 8; // 0x15b2 Return
}


func_4759(var_100_cvector, var_101_cvector)
{
	var_103_float = 0; var_104_float = 0; // 0x1297 PushV
	var_105_int = var_101_cvector | var_101_cvector; // 0x1298 Or
	var_104_float = sqrt(var_105_int); // 0x1299 Sqrt2
	var_106_float = 0.0; // 0x129a PushF
	var_107_bool = var_104_float < var_106_float; // 0x129b LT
	if(var_107_bool == 0) goto Label_4767; // 0x129c JumpB
	var_100_cvector = CVector(0.0, 0.0, 0.0); // 0x129d MovV
	return 2; // 0x129e Return
	
Label_4767:
	var_100_cvector = var_101_cvector / var_101_cvector; // 0x129f Div2
	return 2; // 0x12a0 Return
}


func_5015()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x1397 PushV
	var_55_string = "d4q01_subquest"; // 0x1398 PushS
	var_56_int = 2; // 0x1399 PushI
	SetVariable(var_55_string, var_56_int); // 0x139a Func
	var_57_object = Obj(); // 0x139c PushV
	func_5506(var_57_object); // 0x139d NEW_2
	var_54_object = var_57_object; // 0x139e Mov
	var_64_string = "d4q01OspinaGotoLara"; // 0x13a0 PushS
	var_65_string = "pt_map_lara"; // 0x13a1 PushS
	var_66_int = 1; // 0x13a2 PushI
	var_67_int = 511504; // 0x13a3 PushI
	var_68_float = 0; // 0x13a4 PushV
	func_4830(var_68_float); // 0x13a5 NEW_2
	AddMark(var_64_string, var_65_string, var_66_int, var_67_int, var_68_float); // 0x13a7 ObjFunc
	return 2; // 0x13a9 Return
}


func_4249()
{
	var_868_float = 0; var_869_float = 0; // 0x1099 PushV
	var_870_int = 8; // 0x109a PushI
	var_871_int = 16; // 0x109b PushI
	rand(var_869_float, var_870_int, var_871_int); // 0x109c Func
	var_872_int = 10; // 0x109e PushI
	SetTimer(var_872_int, var_869_float); // 0x109f Func
	return 2; // 0x10a1 Return
}


func_2967(var_0_object, var_670_int, var_671_object)
{
	var_673_object = Obj(); var_674_bool = 0; var_675_int = 0; var_676_bool = 0; var_677_object = Obj(); var_678_bool = 0; var_679_int = 0; var_680_bool = 0; // 0xb97 PushV
	var_0_object = var_671_object; // 0xb98 TMov
	var_681_bool = 0; var_682_object = Obj(); var_683_float = 0; // 0xb99 PushV
	var_682_object = var_671_object; // 0xb9a Mov
	var_683_float = 70.0; // 0xb9b MovF
	func_4477(var_682_object, var_683_float); // 0xb9c NEW_2
	var_684_bool = var_681_bool == 0; // 0xb9e Not
	if(var_684_bool == 0) goto Label_2978; // 0xb9f JumpB
	var_670_int = -2; // 0xba0 MovI
	return 8; // 0xba1 Return
	
Label_2978:
	CreateDialog(var_677_object); // 0xba2 Func
	var_685_int = 0; // 0xba4 PushV
	func_4876(var_685_int); // 0xba5 NEW_2
	SetNPCName(var_685_int); // 0xba7 ObjFunc
	var_686_int = 0; // 0xba9 PushV
	func_4874(var_686_int); // 0xbaa NEW_2
	SetNPCDescription(var_686_int); // 0xbac ObjFunc
	var_687_string = ""; // 0xbae PushV
	func_4878(var_687_string); // 0xbaf NEW_2
	SetPhoto(var_687_string); // 0xbb1 ObjFunc
	var_688_string = ""; // 0xbb3 PushV
	func_4880(var_688_string); // 0xbb4 NEW_2
	SetPhoto2(var_688_string); // 0xbb6 ObjFunc
	var_689_int = 0; // 0xbb8 PushV
	func_5556(var_689_int); // 0xbb9 NEW_2
	SetPlayerName(var_689_int); // 0xbbb ObjFunc
	var_679_int = -1; // 0xbbd MovI
	IsOverrideActive(var_678_bool); // 0xbbe Func
	var_690_bool = var_678_bool; // 0xbc0 Push
	if(var_690_bool == 0) goto Label_3012; // 0xbc1 JumpB
	var_670_int = -2; // 0xbc2 MovI
	return 8; // 0xbc3 Return
	
Label_3012:
	DoDialog(var_677_object); // 0xbc4 Func
	var_691_bool = 0; var_692_object = Obj(); // 0xbc6 PushV
	var_693_object = Obj(); // 0xbc7 PushV
	func_4753(var_693_object); // 0xbc8 NEW_2
	var_692_object = var_693_object; // 0xbc9 Mov
	func_4562(var_691_bool, var_692_object); // 0xbcb NEW_2
	var_694_object = Obj(); var_695_object = Obj(); // 0xbcd PushV
	var_694_object = var_671_object; // 0xbce Mov
	var_695_object = var_677_object; // 0xbcf Mov
	TaskCall(11); // 0xbd0 TaskCall
	func_3048(var_696_object, var_697_object, var_698_string, var_699_bool, var_694_object, var_695_object); // 0xbd1 NEW_2
	TaskReturn(); // 0xbd2 TaskReturn
	IsDialogEnd(var_680_bool); // 0xbd4 ObjFunc
	
Label_3030:
	var_747_bool = var_680_bool == 0; // 0xbd6 Not
	if(var_747_bool == 0) goto Label_3037; // 0xbd7 JumpB
	sync(); // 0xbd8 Func
	IsDialogEnd(var_680_bool); // 0xbda ObjFunc
	goto Label_3030; // 0xbdc Jump
	
Label_3037:
	var_748_object = Obj(); // 0xbdd PushV
	var_748_object = var_671_object; // 0xbde Mov
	func_4545(); // 0xbdf NEW_2
	StopDialog(var_677_object); // 0xbe1 Func
	GetReturnValue(var_679_int); // 0xbe3 ObjFunc
	var_670_int = var_679_int; // 0xbe5 Mov
	return 8; // 0xbe6 Return
}


func_5278(var_608_bool)
{
	var_610_int = 0; var_611_string = ""; // 0x149f PushV
	var_611_string = "ood6Ospina1"; // 0x14a0 MovS
	func_4769(var_610_int, var_611_string); // 0x14a1 NEW_2
	var_612_int = 0; // 0x14a3 PushI
	var_613_bool = var_610_int == var_612_int; // 0x14a4 Eq
	if(var_613_bool == 0) goto Label_5288; // 0x14a5 JumpB
	var_608_bool = 1; // 0x14a6 MovB
	return 0; // 0x14a7 Return
	
Label_5288:
	var_608_bool = 0; // 0x14a8 MovB
	return 0; // 0x14a9 Return
}


func_4769(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0; // 0x12a1 PushV
	GetVariable(var_327_string, var_329_int); // 0x12a2 Func
	var_326_int = var_329_int; // 0x12a4 Mov
	return 2; // 0x12a5 Return
}


func_4258()
{
	var_867_int = 10; // 0x10a2 PushI
	KillTimer(var_867_int); // 0x10a3 Func
	return 0; // 0x10a5 Return
}


func_4774(var_97_int, var_98_int)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x12a6 PushV
	CreateIntVector(var_100_object); // 0x12a7 Func
	add(var_97_int); // 0x12a9 ObjFunc
	add(var_98_int); // 0x12ab ObjFunc
	var_101_int = 3; // 0x12ad PushI
	SendWorldWndMessage(var_101_int, var_100_object); // 0x12ae Func
	return 2; // 0x12b0 Return
}


func_168(var_2_object, var_342_string)
{
	var_343_bool = 0; // 0xa9 PushV
	func_4882(var_343_bool); // 0xaa NEW_2
	var_344_bool = var_343_bool == 0; // 0xac Not
	if(var_344_bool == 0) goto Label_175; // 0xad JumpB
	return 0; // 0xae Return
	
Label_175:
	var_345_bool = var_342_string == var_2_object; // 0xaf Eq
	if(var_345_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_346_string = ""; var_347_bool = 0; // 0xb2 PushV
	var_346_string = var_342_string; // 0xb3 Mov
	var_348_string = ""; // 0xb4 PushS
	var_349_bool = var_342_string == var_348_string; // 0xb5 Eq
	if(var_349_bool == 0) goto Label_185; // 0xb6 JumpB
	var_347_bool = 0; // 0xb7 MovB
	goto Label_186; // 0xb8 Jump
	
Label_186:
	func_4716(var_346_string, var_347_bool); // 0xba NEW_2
	var_2_object = var_342_string; // 0xbc TMov
	return 0; // 0xbd Return
	
Label_185:
	var_347_bool = 1; // 0xb9 MovB
}


func_5290(var_626_bool)
{
	var_628_int = 0; var_629_string = ""; // 0x14ab PushV
	var_629_string = "ood6Ospina2"; // 0x14ac MovS
	func_4769(var_628_int, var_629_string); // 0x14ad NEW_2
	var_630_int = 0; // 0x14af PushI
	var_631_bool = var_628_int == var_630_int; // 0x14b0 Eq
	if(var_631_bool == 0) goto Label_5300; // 0x14b1 JumpB
	var_626_bool = 1; // 0x14b2 MovB
	return 0; // 0x14b3 Return
	
Label_5300:
	var_626_bool = 0; // 0x14b4 MovB
	return 0; // 0x14b5 Return
}


func_5035()
{
	var_49_string = "ood4Ospina1"; // 0x13ac PushS
	var_50_int = 1; // 0x13ad PushI
	SetVariable(var_49_string, var_50_int); // 0x13ae Func
	return 0; // 0x13b0 Return
}


func_5041()
{
	var_113_string = "d4q01_subquest"; // 0x13b2 PushS
	var_114_int = 1000; // 0x13b3 PushI
	SetVariable(var_113_string, var_114_int); // 0x13b4 Func
	return 0; // 0x13b6 Return
}


func_4786(var_87_object, var_88_int)
{
	var_89_int = 0; var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0; // 0x12b2 PushV
	GetItemID(var_92_int); // 0x12b3 ObjFunc
	var_95_string = "Category"; // 0x12b5 PushS
	GetInvItemProperty(var_93_int, var_92_int, var_95_string); // 0x12b6 Func
	AddItem(var_94_bool, var_87_object, var_93_int, var_88_int); // 0x12b8 ObjFunc
	var_96_bool = var_94_bool == 0; // 0x12ba Not
	if(var_96_bool == 0) goto Label_4799; // 0x12bb JumpB
	DropItems(var_87_object, var_88_int); // 0x12bc ObjFunc
	goto Label_4804; // 0x12be Jump
	
Label_4804:
	return 6; // 0x12c4 Return
	
Label_4799:
	var_97_int = 0; var_98_int = 0; // 0x12bf PushV
	var_97_int = var_92_int; // 0x12c0 Mov
	var_98_int = var_88_int; // 0x12c1 Mov
	func_4774(var_97_int, var_98_int); // 0x12c2 NEW_2
}


func_2482(var_0_object, var_1_object, var_2_object, var_3_string, var_501_object, var_502_object)
{
	var_0_object = var_502_object; // 0x9b3 TMov
	var_1_object = var_501_object; // 0x9b4 TMov
	var_3_string = 0; // 0x9b5 TMovB
	var_507_int = 1; // 0x9b6 PushI
	if(var_507_int == 0) goto Label_2548; // 0x9b7 JumpB
	var_508_string = ""; // 0x9b8 PushV
	var_508_string = "Neutral"; // 0x9b9 MovS
	func_2578(var_502_object, var_508_string); // 0x9ba NEW_2
	var_516_int = 511065; // 0x9bc PushI
	SetMessage(var_516_int); // 0x9bd TObjFunc
	ClearReplies(); // 0x9bf TObjFunc
	var_517_bool = 0; // 0x9c1 PushV
	var_517_bool = 0; // 0x9c2 MovB
	var_518_bool = 0; var_519_object = Obj(); // 0x9c3 PushV
	var_519_object = var_1_object; // 0x9c4 MovT
	func_5230(var_519_object); // 0x9c5 NEW_2
	if(var_518_bool == 0) goto Label_2510; // 0x9c7 JumpB
	var_524_bool = 0; var_525_object = Obj(); // 0x9c8 PushV
	var_525_object = var_1_object; // 0x9c9 MovT
	func_5218(var_525_object); // 0x9ca NEW_2
	if(var_524_bool == 0) goto Label_2510; // 0x9cc JumpB
	var_517_bool = 1; // 0x9cd MovB
	
Label_2510:
	if(var_517_bool == 0) goto Label_2516; // 0x9ce JumpB
	var_530_int = 511066; // 0x9cf PushI
	var_531_int = 12248; // 0x9d0 PushI
	var_532_int = 12247; // 0x9d1 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x9d2 TObjFunc
	
Label_2516:
	var_533_bool = 0; // 0x9d4 PushV
	var_533_bool = 0; // 0x9d5 MovB
	var_534_bool = 0; var_535_object = Obj(); // 0x9d6 PushV
	var_535_object = var_1_object; // 0x9d7 MovT
	func_5254(var_535_object); // 0x9d8 NEW_2
	if(var_534_bool == 0) goto Label_2529; // 0x9da JumpB
	var_540_bool = 0; var_541_object = Obj(); // 0x9db PushV
	var_541_object = var_1_object; // 0x9dc MovT
	func_5242(var_541_object); // 0x9dd NEW_2
	if(var_540_bool == 0) goto Label_2529; // 0x9df JumpB
	var_533_bool = 1; // 0x9e0 MovB
	
Label_2529:
	if(var_533_bool == 0) goto Label_2535; // 0x9e1 JumpB
	var_546_int = 511079; // 0x9e2 PushI
	var_547_int = 12268; // 0x9e3 PushI
	var_548_int = 12263; // 0x9e4 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x9e5 TObjFunc
	
Label_2535:
	var_549_int = 511505; // 0x9e7 PushI
	var_550_int = -1; // 0x9e8 PushI
	var_551_int = 12707; // 0x9e9 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x9ea TObjFunc
	var_552_int = 536130; // 0x9ec PushI
	var_553_int = -1; // 0x9ed PushI
	var_554_int = 37889; // 0x9ee PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x9ef TObjFunc
	goto Label_2548; // 0x9f1 Jump
	
Label_2548:
	var_555_bool = 0; // 0x9f4 PushV
	func_4882(var_555_bool); // 0x9f5 NEW_2
	if(var_555_bool == 0) goto Label_2563; // 0x9f7 JumpB
	
Label_2552:
	lshWaitForAnimEnd(); // 0x9f8 Func
	var_556_string = var_3_string; // 0x9fa PushT
	if(var_556_string == 0) goto Label_2557; // 0x9fb JumpB
	goto Label_2562; // 0x9fc Jump
	
Label_2562:
	goto Label_2577; // 0xa02 Jump
	
Label_2577:
	return 0; // 0xa11 Return
	
Label_2557:
	var_557_string = ""; // 0x9fd PushV
	var_557_string = var_2_object; // 0x9fe MovT
	func_4700(var_557_string); // 0x9ff NEW_2
	goto Label_2552; // 0xa01 Jump
	
Label_2563:
	var_558_string = "all"; // 0xa03 PushS
	var_559_string = "idle"; // 0xa04 PushS
	PlayAnimation(var_558_string, var_559_string); // 0xa05 Func
	
Label_2567:
	WaitForAnimEnd(); // 0xa07 Func
	var_560_string = var_3_string; // 0xa09 PushT
	if(var_560_string == 0) goto Label_2572; // 0xa0a JumpB
	goto Label_2577; // 0xa0b Jump
	
Label_2572:
	var_561_string = "all"; // 0xa0c PushS
	var_562_string = "idle"; // 0xa0d PushS
	PlayAnimation(var_561_string, var_562_string); // 0xa0e Func
	goto Label_2567; // 0xa10 Jump
}


func_3764(var_0_object, var_1_object, var_2_object, var_3_string, var_228_object, var_229_object)
{
	var_0_object = var_229_object; // 0xeb5 TMov
	var_1_object = var_228_object; // 0xeb6 TMov
	var_3_string = 0; // 0xeb7 TMovB
	var_234_int = 1; // 0xeb8 PushI
	if(var_234_int == 0) goto Label_3797; // 0xeb9 JumpB
	var_235_string = ""; // 0xeba PushV
	var_235_string = "Neutral"; // 0xebb MovS
	func_3827(var_229_object, var_235_string); // 0xebc NEW_2
	var_252_int = 520784; // 0xebe PushI
	SetMessage(var_252_int); // 0xebf TObjFunc
	ClearReplies(); // 0xec1 TObjFunc
	var_253_int = 520785; // 0xec3 PushI
	var_254_int = 22000; // 0xec4 PushI
	var_255_int = 21999; // 0xec5 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xec6 TObjFunc
	var_256_int = 520792; // 0xec8 PushI
	var_257_int = 22008; // 0xec9 PushI
	var_258_int = 22007; // 0xeca PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xecb TObjFunc
	var_259_int = 520796; // 0xecd PushI
	var_260_int = 22014; // 0xece PushI
	var_261_int = 22013; // 0xecf PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xed0 TObjFunc
	goto Label_3797; // 0xed2 Jump
	
Label_3797:
	var_262_bool = 0; // 0xed5 PushV
	func_4882(var_262_bool); // 0xed6 NEW_2
	if(var_262_bool == 0) goto Label_3812; // 0xed8 JumpB
	
Label_3801:
	lshWaitForAnimEnd(); // 0xed9 Func
	var_263_string = var_3_string; // 0xedb PushT
	if(var_263_string == 0) goto Label_3806; // 0xedc JumpB
	goto Label_3811; // 0xedd Jump
	
Label_3811:
	goto Label_3826; // 0xee3 Jump
	
Label_3826:
	return 0; // 0xef2 Return
	
Label_3806:
	var_264_string = ""; // 0xede PushV
	var_264_string = var_2_object; // 0xedf MovT
	func_4700(var_264_string); // 0xee0 NEW_2
	goto Label_3801; // 0xee2 Jump
	
Label_3812:
	var_275_string = "all"; // 0xee4 PushS
	var_276_string = "idle"; // 0xee5 PushS
	PlayAnimation(var_275_string, var_276_string); // 0xee6 Func
	
Label_3816:
	WaitForAnimEnd(); // 0xee8 Func
	var_277_string = var_3_string; // 0xeea PushT
	if(var_277_string == 0) goto Label_3821; // 0xeeb JumpB
	goto Label_3826; // 0xeec Jump
	
Label_3821:
	var_278_string = "all"; // 0xeed PushS
	var_279_string = "idle"; // 0xeee PushS
	PlayAnimation(var_278_string, var_279_string); // 0xeef Func
	goto Label_3816; // 0xef1 Jump
}


func_5556(var_124_int)
{
	var_125_int = 0; var_126_int = 0; // 0x15b4 PushV
	var_127_string = "branch"; // 0x15b5 PushS
	GetVariable(var_127_string, var_126_int); // 0x15b6 Func
	var_128_int = 0; // 0x15b8 PushI
	var_129_bool = var_126_int == var_128_int; // 0x15b9 Eq
	if(var_129_bool == 0) goto Label_5566; // 0x15ba JumpB
	var_124_int = 1; // 0x15bb MovI
	return 2; // 0x15bc Return
	
Label_5566:
	var_130_int = 1; // 0x15be PushI
	var_131_bool = var_126_int == var_130_int; // 0x15bf Eq
	if(var_131_bool == 0) goto Label_5571; // 0x15c0 JumpB
	var_124_int = 2; // 0x15c1 MovI
	return 2; // 0x15c2 Return
	
Label_5571:
	var_124_int = 3; // 0x15c3 MovI
	return 2; // 0x15c4 Return
}


func_5302(var_711_bool)
{
	var_713_int = 0; var_714_string = ""; // 0x14b7 PushV
	var_714_string = "d8q01"; // 0x14b8 MovS
	func_4769(var_713_int, var_714_string); // 0x14b9 NEW_2
	var_715_int = 0; // 0x14bb PushI
	var_716_bool = var_713_int == var_715_int; // 0x14bc Eq
	if(var_716_bool == 0) goto Label_5312; // 0x14bd JumpB
	var_711_bool = 1; // 0x14be MovB
	return 0; // 0x14bf Return
	
Label_5312:
	var_711_bool = 0; // 0x14c0 MovB
	return 0; // 0x14c1 Return
}


func_5047()
{
	var_109_string = "ood4Ospina2"; // 0x13b8 PushS
	var_110_int = 1; // 0x13b9 PushI
	SetVariable(var_109_string, var_110_int); // 0x13ba Func
	return 0; // 0x13bc Return
}


func_5053()
{
	var_49_string = "ood6Ospina1"; // 0x13be PushS
	var_50_int = 1; // 0x13bf PushI
	SetVariable(var_49_string, var_50_int); // 0x13c0 Func
	return 0; // 0x13c2 Return
}


func_4545()
{
	var_282_bool = 0; var_283_bool = 0; // 0x11c1 PushV
	CameraSwitchToNormal(); // 0x11c2 Func
	var_284_bool = 0; // 0x11c4 PushV
	func_4882(var_284_bool); // 0x11c5 NEW_2
	if(var_284_bool == 0) goto Label_4553; // 0x11c7 JumpB
	goto Label_4561; // 0x11c8 Jump
	
Label_4561:
	return 2; // 0x11d1 Return
	
Label_4553:
	var_285_string = "head"; // 0x11c9 PushS
	HasAnimationTrack(var_283_bool, var_285_string); // 0x11ca Func
	var_286_bool = var_283_bool; // 0x11cc Push
	if(var_286_bool == 0) goto Label_4561; // 0x11cd JumpB
	var_287_string = "head"; // 0x11ce PushS
	UnlookAsync(var_287_string); // 0x11cf Func
}


func_5314(var_727_bool)
{
	var_729_int = 0; var_730_string = ""; // 0x14c3 PushV
	var_730_string = "ood8Ospina1"; // 0x14c4 MovS
	func_4769(var_729_int, var_730_string); // 0x14c5 NEW_2
	var_731_int = 0; // 0x14c7 PushI
	var_732_bool = var_729_int == var_731_int; // 0x14c8 Eq
	if(var_732_bool == 0) goto Label_5324; // 0x14c9 JumpB
	var_727_bool = 1; // 0x14ca MovB
	return 0; // 0x14cb Return
	
Label_5324:
	var_727_bool = 0; // 0x14cc MovB
	return 0; // 0x14cd Return
}


func_5059()
{
	var_130_string = "ood6Ospina2"; // 0x13c4 PushS
	var_131_int = 1; // 0x13c5 PushI
	SetVariable(var_130_string, var_131_int); // 0x13c6 Func
	return 0; // 0x13c8 Return
}


func_709(var_0_object, var_1_object, var_2_object, var_3_string, var_775_object, var_776_object)
{
	var_0_object = var_776_object; // 0x2c6 TMov
	var_1_object = var_775_object; // 0x2c7 TMov
	var_3_string = 0; // 0x2c8 TMovB
	var_781_int = 1; // 0x2c9 PushI
	if(var_781_int == 0) goto Label_742; // 0x2ca JumpB
	var_782_string = ""; // 0x2cb PushV
	var_782_string = "Neutral"; // 0x2cc MovS
	func_772(var_776_object, var_782_string); // 0x2cd NEW_2
	var_790_int = 535294; // 0x2cf PushI
	SetMessage(var_790_int); // 0x2d0 TObjFunc
	ClearReplies(); // 0x2d2 TObjFunc
	var_791_int = 535295; // 0x2d4 PushI
	var_792_int = 36973; // 0x2d5 PushI
	var_793_int = 36972; // 0x2d6 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x2d7 TObjFunc
	var_794_int = 535302; // 0x2d9 PushI
	var_795_int = -1; // 0x2da PushI
	var_796_int = 36980; // 0x2db PushI
	AddReply(var_794_int, var_795_int, var_796_int); // 0x2dc TObjFunc
	var_797_int = 535303; // 0x2de PushI
	var_798_int = -1; // 0x2df PushI
	var_799_int = 36981; // 0x2e0 PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x2e1 TObjFunc
	goto Label_742; // 0x2e3 Jump
	
Label_742:
	var_800_bool = 0; // 0x2e6 PushV
	func_4882(var_800_bool); // 0x2e7 NEW_2
	if(var_800_bool == 0) goto Label_757; // 0x2e9 JumpB
	
Label_746:
	lshWaitForAnimEnd(); // 0x2ea Func
	var_801_string = var_3_string; // 0x2ec PushT
	if(var_801_string == 0) goto Label_751; // 0x2ed JumpB
	goto Label_756; // 0x2ee Jump
	
Label_756:
	goto Label_771; // 0x2f4 Jump
	
Label_771:
	return 0; // 0x303 Return
	
Label_751:
	var_802_string = ""; // 0x2ef PushV
	var_802_string = var_2_object; // 0x2f0 MovT
	func_4700(var_802_string); // 0x2f1 NEW_2
	goto Label_746; // 0x2f3 Jump
	
Label_757:
	var_803_string = "all"; // 0x2f5 PushS
	var_804_string = "idle"; // 0x2f6 PushS
	PlayAnimation(var_803_string, var_804_string); // 0x2f7 Func
	
Label_761:
	WaitForAnimEnd(); // 0x2f9 Func
	var_805_string = var_3_string; // 0x2fb PushT
	if(var_805_string == 0) goto Label_766; // 0x2fc JumpB
	goto Label_771; // 0x2fd Jump
	
Label_766:
	var_806_string = "all"; // 0x2fe PushS
	var_807_string = "idle"; // 0x2ff PushS
	PlayAnimation(var_806_string, var_807_string); // 0x300 Func
	goto Label_761; // 0x302 Jump
}


func_4805(var_81_object, var_82_string, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x12c5 PushV
	CreateInvItem(var_85_object); // 0x12c6 Func
	SetItemName(var_82_string); // 0x12c8 ObjFunc
	var_86_object = Obj(); var_87_object = Obj(); var_88_int = 0; // 0x12ca PushV
	var_86_object = var_81_object; // 0x12cb Mov
	var_87_object = var_85_object; // 0x12cc Mov
	var_88_int = var_83_int; // 0x12cd Mov
	func_4786(var_87_object, var_88_int); // 0x12ce NEW_2
	return 2; // 0x12d0 Return
}


func_5573(var_59_object)
{
	var_60_bool = GlobalVars[1]; // 0x15c6 PushGE
	var_61_bool = var_60_bool == 0; // 0x15c7 Not
	if(var_61_bool == 0) goto Label_5586; // 0x15c8 JumpB
	var_62_int = 0; var_63_object = Obj(); // 0x15c9 PushV
	var_63_object = var_59_object; // 0x15ca Mov
	TaskCall(12); // 0x15cb TaskCall
	func_3683(var_64_object, var_62_int, var_63_object); // 0x15cc NEW_2
	TaskReturn(); // 0x15cd TaskReturn
	var_288_bool = GlobalVars[1]; // 0x15cf PushGE
	var_288_bool = 1; // 0x15d0 MovB
	GlobalVars[1] = var_288_bool; // 0x15d1 PopGE
	
Label_5586:
	var_289_bool = 0; var_290_int = 0; // 0x15d2 PushV
	var_290_int = 1; // 0x15d3 MovI
	func_4844(var_289_bool, var_290_int); // 0x15d4 NEW_2
	if(var_289_bool == 0) goto Label_5598; // 0x15d6 JumpB
	var_292_int = 0; var_293_object = Obj(); // 0x15d7 PushV
	var_293_object = var_59_object; // 0x15d8 Mov
	TaskCall(0); // 0x15d9 TaskCall
	func_0(var_294_object, var_292_int, var_293_object); // 0x15da NEW_2
	TaskReturn(); // 0x15db TaskReturn
	return 0; // 0x15dd Return
	
Label_5598:
	var_369_bool = 0; var_370_int = 0; // 0x15de PushV
	var_370_int = 3; // 0x15df MovI
	func_4844(var_369_bool, var_370_int); // 0x15e0 NEW_2
	if(var_369_bool == 0) goto Label_5610; // 0x15e2 JumpB
	var_371_int = 0; var_372_object = Obj(); // 0x15e3 PushV
	var_372_object = var_59_object; // 0x15e4 Mov
	TaskCall(6); // 0x15e5 TaskCall
	func_1586(var_373_object, var_371_int, var_372_object); // 0x15e6 NEW_2
	TaskReturn(); // 0x15e7 TaskReturn
	return 0; // 0x15e9 Return
	
Label_5610:
	var_475_bool = 0; var_476_int = 0; // 0x15ea PushV
	var_476_int = 4; // 0x15eb MovI
	func_4844(var_475_bool, var_476_int); // 0x15ec NEW_2
	if(var_475_bool == 0) goto Label_5622; // 0x15ee JumpB
	var_477_int = 0; var_478_object = Obj(); // 0x15ef PushV
	var_478_object = var_59_object; // 0x15f0 Mov
	TaskCall(8); // 0x15f1 TaskCall
	func_2401(var_479_object, var_477_int, var_478_object); // 0x15f2 NEW_2
	TaskReturn(); // 0x15f3 TaskReturn
	return 0; // 0x15f5 Return
	
Label_5622:
	var_565_bool = 0; var_566_int = 0; // 0x15f6 PushV
	var_566_int = 6; // 0x15f7 MovI
	func_4844(var_565_bool, var_566_int); // 0x15f8 NEW_2
	if(var_565_bool == 0) goto Label_5634; // 0x15fa JumpB
	var_567_int = 0; var_568_object = Obj(); // 0x15fb PushV
	var_568_object = var_59_object; // 0x15fc Mov
	TaskCall(4); // 0x15fd TaskCall
	func_887(var_569_object, var_567_int, var_568_object); // 0x15fe NEW_2
	TaskReturn(); // 0x15ff TaskReturn
	return 0; // 0x1601 Return
	
Label_5634:
	var_668_bool = 0; var_669_int = 0; // 0x1602 PushV
	var_669_int = 8; // 0x1603 MovI
	func_4844(var_668_bool, var_669_int); // 0x1604 NEW_2
	if(var_668_bool == 0) goto Label_5646; // 0x1606 JumpB
	var_670_int = 0; var_671_object = Obj(); // 0x1607 PushV
	var_671_object = var_59_object; // 0x1608 Mov
	TaskCall(10); // 0x1609 TaskCall
	func_2967(var_672_object, var_670_int, var_671_object); // 0x160a NEW_2
	TaskReturn(); // 0x160b TaskReturn
	return 0; // 0x160d Return
	
Label_5646:
	var_749_bool = 0; var_750_int = 0; // 0x160e PushV
	var_750_int = 12; // 0x160f MovI
	func_4844(var_749_bool, var_750_int); // 0x1610 NEW_2
	if(var_749_bool == 0) goto Label_5658; // 0x1612 JumpB
	var_751_int = 0; var_752_object = Obj(); // 0x1613 PushV
	var_752_object = var_59_object; // 0x1614 Mov
	TaskCall(2); // 0x1615 TaskCall
	func_628(var_753_object, var_751_int, var_752_object); // 0x1616 NEW_2
	TaskReturn(); // 0x1617 TaskReturn
	return 0; // 0x1619 Return
	
Label_5658:
	var_810_int = 0; var_811_object = Obj(); // 0x161a PushV
	var_811_object = var_59_object; // 0x161b Mov
	TaskCall(14); // 0x161c TaskCall
	func_3983(var_812_object, var_810_int, var_811_object); // 0x161d NEW_2
	TaskReturn(); // 0x161e TaskReturn
	return 0; // 0x1620 Return
}


func_968(var_0_object, var_1_object, var_2_object, var_3_string, var_591_object, var_592_object)
{
	var_0_object = var_592_object; // 0x3c9 TMov
	var_1_object = var_591_object; // 0x3ca TMov
	var_3_string = 0; // 0x3cb TMovB
	var_597_int = 1; // 0x3cc PushI
	if(var_597_int == 0) goto Label_1049; // 0x3cd JumpB
	var_598_string = ""; // 0x3ce PushV
	var_598_string = "Neutral"; // 0x3cf MovS
	func_1079(var_592_object, var_598_string); // 0x3d0 NEW_2
	var_606_int = 512729; // 0x3d2 PushI
	SetMessage(var_606_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_607_bool = 0; // 0x3d7 PushV
	var_607_bool = 0; // 0x3d8 MovB
	var_608_bool = 0; var_609_object = Obj(); // 0x3d9 PushV
	var_609_object = var_1_object; // 0x3da MovT
	func_5278(var_609_object); // 0x3db NEW_2
	if(var_608_bool == 0) goto Label_996; // 0x3dd JumpB
	var_614_bool = 0; var_615_object = Obj(); // 0x3de PushV
	var_615_object = var_1_object; // 0x3df MovT
	func_5266(var_615_object); // 0x3e0 NEW_2
	if(var_614_bool == 0) goto Label_996; // 0x3e2 JumpB
	var_607_bool = 1; // 0x3e3 MovB
	
Label_996:
	if(var_607_bool == 0) goto Label_1002; // 0x3e4 JumpB
	var_620_int = 512731; // 0x3e5 PushI
	var_621_int = 3851; // 0x3e6 PushI
	var_622_int = 13924; // 0x3e7 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x3e8 TObjFunc
	
Label_1002:
	var_623_bool = 0; // 0x3ea PushV
	var_623_bool = 0; // 0x3eb MovB
	var_624_bool = 0; // 0x3ec PushV
	var_624_bool = 0; // 0x3ed MovB
	var_625_bool = 0; // 0x3ee PushV
	var_625_bool = 0; // 0x3ef MovB
	var_626_bool = 0; var_627_object = Obj(); // 0x3f0 PushV
	var_627_object = var_1_object; // 0x3f1 MovT
	func_5290(var_627_object); // 0x3f2 NEW_2
	if(var_626_bool == 0) goto Label_1019; // 0x3f4 JumpB
	var_632_bool = 0; var_633_object = Obj(); // 0x3f5 PushV
	var_633_object = var_1_object; // 0x3f6 MovT
	func_5338(var_633_object); // 0x3f7 NEW_2
	if(var_632_bool == 0) goto Label_1019; // 0x3f9 JumpB
	var_625_bool = 1; // 0x3fa MovB
	
Label_1019:
	if(var_625_bool == 0) goto Label_1027; // 0x3fb JumpB
	var_638_bool = 0; var_639_object = Obj(); // 0x3fc PushV
	var_639_object = var_1_object; // 0x3fd MovT
	func_5350(var_639_object); // 0x3fe NEW_2
	var_644_bool = var_638_bool == 0; // 0x400 Not
	if(var_644_bool == 0) goto Label_1027; // 0x401 JumpB
	var_624_bool = 1; // 0x402 MovB
	
Label_1027:
	if(var_624_bool == 0) goto Label_1035; // 0x403 JumpB
	var_645_bool = 0; var_646_object = Obj(); // 0x404 PushV
	var_646_object = var_1_object; // 0x405 MovT
	func_5362(var_646_object); // 0x406 NEW_2
	var_651_bool = var_645_bool == 0; // 0x408 Not
	if(var_651_bool == 0) goto Label_1035; // 0x409 JumpB
	var_623_bool = 1; // 0x40a MovB
	
Label_1035:
	if(var_623_bool == 0) goto Label_1041; // 0x40b JumpB
	var_652_int = 512730; // 0x40c PushI
	var_653_int = 11927; // 0x40d PushI
	var_654_int = 13923; // 0x40e PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x40f TObjFunc
	
Label_1041:
	var_655_int = 512732; // 0x411 PushI
	var_656_int = -1; // 0x412 PushI
	var_657_int = 13926; // 0x413 PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0x414 TObjFunc
	goto Label_1049; // 0x416 Jump
	
Label_1049:
	var_658_bool = 0; // 0x419 PushV
	func_4882(var_658_bool); // 0x41a NEW_2
	if(var_658_bool == 0) goto Label_1064; // 0x41c JumpB
	
Label_1053:
	lshWaitForAnimEnd(); // 0x41d Func
	var_659_string = var_3_string; // 0x41f PushT
	if(var_659_string == 0) goto Label_1058; // 0x420 JumpB
	goto Label_1063; // 0x421 Jump
	
Label_1063:
	goto Label_1078; // 0x427 Jump
	
Label_1078:
	return 0; // 0x436 Return
	
Label_1058:
	var_660_string = ""; // 0x422 PushV
	var_660_string = var_2_object; // 0x423 MovT
	func_4700(var_660_string); // 0x424 NEW_2
	goto Label_1053; // 0x426 Jump
	
Label_1064:
	var_661_string = "all"; // 0x428 PushS
	var_662_string = "idle"; // 0x429 PushS
	PlayAnimation(var_661_string, var_662_string); // 0x42a Func
	
Label_1068:
	WaitForAnimEnd(); // 0x42c Func
	var_663_string = var_3_string; // 0x42e PushT
	if(var_663_string == 0) goto Label_1073; // 0x42f JumpB
	goto Label_1078; // 0x430 Jump
	
Label_1073:
	var_664_string = "all"; // 0x431 PushS
	var_665_string = "idle"; // 0x432 PushS
	PlayAnimation(var_664_string, var_665_string); // 0x433 Func
	goto Label_1068; // 0x435 Jump
}


func_5065()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x13c9 PushV
	var_57_string = "d8q01MladVladIsBad"; // 0x13ca PushS
	var_58_int = 1; // 0x13cb PushI
	SetVariable(var_57_string, var_58_int); // 0x13cc Func
	var_59_object = Obj(); // 0x13ce PushV
	func_5506(var_59_object); // 0x13cf NEW_2
	var_56_object = var_59_object; // 0x13d0 Mov
	var_66_string = "d8q01OspinaGotoMladVlad"; // 0x13d2 PushS
	var_67_string = "pt_map_mladvlad"; // 0x13d3 PushS
	var_68_int = 1; // 0x13d4 PushI
	var_69_int = 515307; // 0x13d5 PushI
	var_70_float = 0; // 0x13d6 PushV
	func_4830(var_70_float); // 0x13d7 NEW_2
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x13d9 ObjFunc
	func_5452(); // 0x13dc NEW_2
	return 2; // 0x13de Return
}


func_5326(var_718_bool)
{
	var_720_int = 0; var_721_string = ""; // 0x14cf PushV
	var_721_string = "ood8Ospina2"; // 0x14d0 MovS
	func_4769(var_720_int, var_721_string); // 0x14d1 NEW_2
	var_722_int = 0; // 0x14d3 PushI
	var_723_bool = var_720_int == var_722_int; // 0x14d4 Eq
	if(var_723_bool == 0) goto Label_5336; // 0x14d5 JumpB
	var_718_bool = 1; // 0x14d6 MovB
	return 0; // 0x14d7 Return
	
Label_5336:
	var_718_bool = 0; // 0x14d8 MovB
	return 0; // 0x14d9 Return
}


func_4818(var_160_bool, var_161_string, var_162_string)
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x12d2 PushV
	FindActor(var_164_object, var_161_string); // 0x12d3 Func
	var_165_bool = var_164_object == 0; // 0x12d5 NullEq
	if(var_165_bool == 0) goto Label_4825; // 0x12d6 JumpB
	var_160_bool = 0; // 0x12d7 MovB
	return 2; // 0x12d8 Return
	
Label_4825:
	Trigger(var_164_object, var_162_string); // 0x12d9 Func
	var_160_bool = 1; // 0x12db MovB
	return 2; // 0x12dc Return
}


func_4562(var_133_bool, var_134_object)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; // 0x11d2 PushV
	var_142_string = "voice_common"; // 0x11d3 PushS
	GetVariable(var_142_string, var_140_int); // 0x11d4 Func
	var_143_int = var_140_int; // 0x11d6 Push
	if(var_143_int == 0) goto Label_4600; // 0x11d7 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x11d8 PushV
	var_145_object = var_134_object; // 0x11d9 Mov
	func_4620(var_145_object); // 0x11da NEW_2
	var_174_bool = var_144_bool == 0; // 0x11dc Not
	if(var_174_bool == 0) goto Label_4582; // 0x11dd JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x11de PushV
	var_176_object = var_134_object; // 0x11df Mov
	func_4657(var_176_object); // 0x11e0 NEW_2
	var_210_bool = var_175_bool == 0; // 0x11e2 Not
	if(var_210_bool == 0) goto Label_4582; // 0x11e3 JumpB
	var_133_bool = 0; // 0x11e4 MovB
	return 4; // 0x11e5 Return
	
Label_4582:
	var_211_int = 2; // 0x11e6 PushI
	irand(var_141_int, var_211_int); // 0x11e7 Func
	var_212_int = var_141_int; // 0x11e9 Push
	if(var_212_int == 0) goto Label_4595; // 0x11ea JumpB
	var_213_string = "voice_common"; // 0x11eb PushS
	var_214_int = 1; // 0x11ec PushI
	var_215_int = var_140_int + var_214_int; // 0x11ed Add
	var_216_int = 3; // 0x11ee PushI
	var_217_int = var_215_int / var_216_int; // 0x11ef Mod
	SetVariable(var_213_string, var_217_int); // 0x11f0 Func
	goto Label_4599; // 0x11f2 Jump
	
Label_4599:
	goto Label_4618; // 0x11f7 Jump
	
Label_4618:
	var_133_bool = 1; // 0x120a MovB
	return 4; // 0x120b Return
	
Label_4595:
	var_218_string = "voice_common"; // 0x11f3 PushS
	var_219_int = 0; // 0x11f4 PushI
	SetVariable(var_218_string, var_219_int); // 0x11f5 Func
	
Label_4600:
	var_220_bool = 0; var_221_object = Obj(); // 0x11f8 PushV
	var_221_object = var_134_object; // 0x11f9 Mov
	func_4657(var_221_object); // 0x11fa NEW_2
	var_222_bool = var_220_bool == 0; // 0x11fc Not
	if(var_222_bool == 0) goto Label_4614; // 0x11fd JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x11fe PushV
	var_224_object = var_134_object; // 0x11ff Mov
	func_4620(var_224_object); // 0x1200 NEW_2
	var_225_bool = var_223_bool == 0; // 0x1202 Not
	if(var_225_bool == 0) goto Label_4614; // 0x1203 JumpB
	var_133_bool = 0; // 0x1204 MovB
	return 4; // 0x1205 Return
	
Label_4614:
	var_226_string = "voice_common"; // 0x1206 PushS
	var_227_int = 1; // 0x1207 PushI
	SetVariable(var_226_string, var_227_int); // 0x1208 Func
}


func_5338(var_632_bool)
{
	var_634_int = 0; var_635_string = ""; // 0x14db PushV
	var_635_string = "microscope_d6q01_ospina_blood"; // 0x14dc MovS
	func_4769(var_634_int, var_635_string); // 0x14dd NEW_2
	var_636_int = 0; // 0x14df PushI
	var_637_bool = var_634_int != var_636_int; // 0x14e0 Neq
	if(var_637_bool == 0) goto Label_5348; // 0x14e1 JumpB
	var_632_bool = 1; // 0x14e2 MovB
	return 0; // 0x14e3 Return
	
Label_5348:
	var_632_bool = 0; // 0x14e4 MovB
	return 0; // 0x14e5 Return
}


func_4830(var_70_float)
{
	var_71_float = 0; var_72_float = 0; // 0x12de PushV
	GetGameTime(var_72_float); // 0x12df Func
	var_70_float = var_72_float; // 0x12e1 Mov
	return 2; // 0x12e2 Return
}


func_5088()
{
	var_138_string = "ood8Ospina1"; // 0x13e1 PushS
	var_139_int = 1; // 0x13e2 PushI
	SetVariable(var_138_string, var_139_int); // 0x13e3 Func
	return 0; // 0x13e5 Return
}


func_4064(var_0_object, var_1_object, var_2_object, var_3_string, var_834_object, var_835_object)
{
	var_0_object = var_835_object; // 0xfe1 TMov
	var_1_object = var_834_object; // 0xfe2 TMov
	var_3_string = 0; // 0xfe3 TMovB
	var_840_int = 1; // 0xfe4 PushI
	if(var_840_int == 0) goto Label_4092; // 0xfe5 JumpB
	var_841_string = ""; // 0xfe6 PushV
	var_841_string = "Neutral"; // 0xfe7 MovS
	func_4122(var_835_object, var_841_string); // 0xfe8 NEW_2
	var_849_int = 540548; // 0xfea PushI
	SetMessage(var_849_int); // 0xfeb TObjFunc
	ClearReplies(); // 0xfed TObjFunc
	var_850_int = 540549; // 0xfef PushI
	var_851_int = -1; // 0xff0 PushI
	var_852_int = 42558; // 0xff1 PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0xff2 TObjFunc
	var_853_int = 540797; // 0xff4 PushI
	var_854_int = -1; // 0xff5 PushI
	var_855_int = 42846; // 0xff6 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0xff7 TObjFunc
	goto Label_4092; // 0xff9 Jump
	
Label_4092:
	var_856_bool = 0; // 0xffc PushV
	func_4882(var_856_bool); // 0xffd NEW_2
	if(var_856_bool == 0) goto Label_4107; // 0xfff JumpB
	
Label_4096:
	lshWaitForAnimEnd(); // 0x1000 Func
	var_857_string = var_3_string; // 0x1002 PushT
	if(var_857_string == 0) goto Label_4101; // 0x1003 JumpB
	goto Label_4106; // 0x1004 Jump
	
Label_4106:
	goto Label_4121; // 0x100a Jump
	
Label_4121:
	return 0; // 0x1019 Return
	
Label_4101:
	var_858_string = ""; // 0x1005 PushV
	var_858_string = var_2_object; // 0x1006 MovT
	func_4700(var_858_string); // 0x1007 NEW_2
	goto Label_4096; // 0x1009 Jump
	
Label_4107:
	var_859_string = "all"; // 0x100b PushS
	var_860_string = "idle"; // 0x100c PushS
	PlayAnimation(var_859_string, var_860_string); // 0x100d Func
	
Label_4111:
	WaitForAnimEnd(); // 0x100f Func
	var_861_string = var_3_string; // 0x1011 PushT
	if(var_861_string == 0) goto Label_4116; // 0x1012 JumpB
	goto Label_4121; // 0x1013 Jump
	
Label_4116:
	var_862_string = "all"; // 0x1014 PushS
	var_863_string = "idle"; // 0x1015 PushS
	PlayAnimation(var_862_string, var_863_string); // 0x1016 Func
	goto Label_4111; // 0x1018 Jump
}


func_4835(var_188_int)
{
	var_189_float = 0; var_190_float = 0; // 0x12e3 PushV
	GetGameTime(var_190_float); // 0x12e4 Func
	var_191_int = 1; // 0x12e6 PushI
	var_192_int = 0; // 0x12e7 PushV
	var_193_int = 24; // 0x12e8 PushI
	var_192_int = var_190_float / var_190_float; // 0x12e9 Div2
	var_188_int = var_191_int + var_192_int; // 0x12ea Add2
	return 2; // 0x12eb Return
}


func_5350(var_638_bool)
{
	var_640_int = 0; var_641_string = ""; // 0x14e7 PushV
	var_641_string = "d6q01"; // 0x14e8 MovS
	func_4769(var_640_int, var_641_string); // 0x14e9 NEW_2
	var_642_int = 1000; // 0x14eb PushI
	var_643_bool = var_640_int == var_642_int; // 0x14ec Eq
	if(var_643_bool == 0) goto Label_5360; // 0x14ed JumpB
	var_638_bool = 1; // 0x14ee MovB
	return 0; // 0x14ef Return
	
Label_5360:
	var_638_bool = 0; // 0x14f0 MovB
	return 0; // 0x14f1 Return
}


func_5094()
{
	var_49_string = "ood8Ospina2"; // 0x13e7 PushS
	var_50_int = 1; // 0x13e8 PushI
	SetVariable(var_49_string, var_50_int); // 0x13e9 Func
	return 0; // 0x13eb Return
}


func_3048(var_0_object, var_1_object, var_2_object, var_3_string, var_694_object, var_695_object)
{
	var_0_object = var_695_object; // 0xbe9 TMov
	var_1_object = var_694_object; // 0xbea TMov
	var_3_string = 0; // 0xbeb TMovB
	var_700_int = 1; // 0xbec PushI
	if(var_700_int == 0) goto Label_3101; // 0xbed JumpB
	var_701_string = ""; // 0xbee PushV
	var_701_string = "Neutral"; // 0xbef MovS
	func_3131(var_695_object, var_701_string); // 0xbf0 NEW_2
	var_709_int = 512374; // 0xbf2 PushI
	SetMessage(var_709_int); // 0xbf3 TObjFunc
	ClearReplies(); // 0xbf5 TObjFunc
	var_710_bool = 0; // 0xbf7 PushV
	var_710_bool = 0; // 0xbf8 MovB
	var_711_bool = 0; var_712_object = Obj(); // 0xbf9 PushV
	var_712_object = var_1_object; // 0xbfa MovT
	func_5302(var_712_object); // 0xbfb NEW_2
	var_717_bool = var_711_bool == 0; // 0xbfd Not
	if(var_717_bool == 0) goto Label_3077; // 0xbfe JumpB
	var_718_bool = 0; var_719_object = Obj(); // 0xbff PushV
	var_719_object = var_1_object; // 0xc00 MovT
	func_5326(var_719_object); // 0xc01 NEW_2
	if(var_718_bool == 0) goto Label_3077; // 0xc03 JumpB
	var_710_bool = 1; // 0xc04 MovB
	
Label_3077:
	if(var_710_bool == 0) goto Label_3083; // 0xc05 JumpB
	var_724_int = 513641; // 0xc06 PushI
	var_725_int = 14898; // 0xc07 PushI
	var_726_int = 14897; // 0xc08 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0xc09 TObjFunc
	
Label_3083:
	var_727_bool = 0; var_728_object = Obj(); // 0xc0b PushV
	var_728_object = var_1_object; // 0xc0c MovT
	func_5314(var_728_object); // 0xc0d NEW_2
	if(var_727_bool == 0) goto Label_3093; // 0xc0f JumpB
	var_733_int = 512375; // 0xc10 PushI
	var_734_int = 13536; // 0xc11 PushI
	var_735_int = 13535; // 0xc12 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0xc13 TObjFunc
	
Label_3093:
	var_736_int = 513658; // 0xc15 PushI
	var_737_int = -1; // 0xc16 PushI
	var_738_int = 14916; // 0xc17 PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0xc18 TObjFunc
	goto Label_3101; // 0xc1a Jump
	
Label_3101:
	var_739_bool = 0; // 0xc1d PushV
	func_4882(var_739_bool); // 0xc1e NEW_2
	if(var_739_bool == 0) goto Label_3116; // 0xc20 JumpB
	
Label_3105:
	lshWaitForAnimEnd(); // 0xc21 Func
	var_740_string = var_3_string; // 0xc23 PushT
	if(var_740_string == 0) goto Label_3110; // 0xc24 JumpB
	goto Label_3115; // 0xc25 Jump
	
Label_3115:
	goto Label_3130; // 0xc2b Jump
	
Label_3130:
	return 0; // 0xc3a Return
	
Label_3110:
	var_741_string = ""; // 0xc26 PushV
	var_741_string = var_2_object; // 0xc27 MovT
	func_4700(var_741_string); // 0xc28 NEW_2
	goto Label_3105; // 0xc2a Jump
	
Label_3116:
	var_742_string = "all"; // 0xc2c PushS
	var_743_string = "idle"; // 0xc2d PushS
	PlayAnimation(var_742_string, var_743_string); // 0xc2e Func
	
Label_3120:
	WaitForAnimEnd(); // 0xc30 Func
	var_744_string = var_3_string; // 0xc32 PushT
	if(var_744_string == 0) goto Label_3125; // 0xc33 JumpB
	goto Label_3130; // 0xc34 Jump
	
Label_3125:
	var_745_string = "all"; // 0xc35 PushS
	var_746_string = "idle"; // 0xc36 PushS
	PlayAnimation(var_745_string, var_746_string); // 0xc37 Func
	goto Label_3120; // 0xc39 Jump
}


func_4844(var_289_bool, var_290_int)
{
	var_291_int = 0; // 0x12ed PushV
	func_4835(var_291_int); // 0x12ee NEW_2
	var_289_bool = var_291_int == var_290_int; // 0x12f0 Eq2
	return 0; // 0x12f1 Return
}


func_5100(var_55_object)
{
	func_5413(); // 0x13ee NEW_2
	var_80_string = "ospina blood is given"; // 0x13f0 PushS
	Trace(var_80_string); // 0x13f1 Func
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x13f3 PushV
	var_81_object = var_55_object; // 0x13f4 Mov
	var_82_string = "d6q01_ospina_blood"; // 0x13f5 MovS
	var_83_int = 1; // 0x13f6 MovI
	func_4805(var_81_object, var_82_string, var_83_int); // 0x13f7 NEW_2
	return 0; // 0x13f9 Return
}


func_5362(var_645_bool)
{
	var_647_int = 0; var_648_string = ""; // 0x14f3 PushV
	var_648_string = "d6q01"; // 0x14f4 MovS
	func_4769(var_647_int, var_648_string); // 0x14f5 NEW_2
	var_649_int = -1; // 0x14f7 PushI
	var_650_bool = var_647_int == var_649_int; // 0x14f8 Eq
	if(var_650_bool == 0) goto Label_5372; // 0x14f9 JumpB
	var_645_bool = 1; // 0x14fa MovB
	return 0; // 0x14fb Return
	
Label_5372:
	var_645_bool = 0; // 0x14fc MovB
	return 0; // 0x14fd Return
}


func_3827(var_2_object, var_235_string)
{
	var_236_bool = 0; // 0xef4 PushV
	func_4882(var_236_bool); // 0xef5 NEW_2
	var_237_bool = var_236_bool == 0; // 0xef7 Not
	if(var_237_bool == 0) goto Label_3834; // 0xef8 JumpB
	return 0; // 0xef9 Return
	
Label_3834:
	var_238_bool = var_235_string == var_2_object; // 0xefa Eq
	if(var_238_bool == 0) goto Label_3837; // 0xefb JumpB
	return 0; // 0xefc Return
	
Label_3837:
	var_239_string = ""; var_240_bool = 0; // 0xefd PushV
	var_239_string = var_235_string; // 0xefe Mov
	var_241_string = ""; // 0xeff PushS
	var_242_bool = var_235_string == var_241_string; // 0xf00 Eq
	if(var_242_bool == 0) goto Label_3844; // 0xf01 JumpB
	var_240_bool = 0; // 0xf02 MovB
	goto Label_3845; // 0xf03 Jump
	
Label_3845:
	func_4716(var_239_string, var_240_bool); // 0xf05 NEW_2
	var_2_object = var_235_string; // 0xf07 TMov
	return 0; // 0xf08 Return
	
Label_3844:
	var_240_bool = 1; // 0xf04 MovB
}


func_4850(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = ""; // 0x12f2 PushV
	var_69_string = "idle"; // 0x12f3 MovS
	var_70_int = var_67_int; // 0x12f4 Push
	if(var_70_int == 0) goto Label_4855; // 0x12f5 JumpB
	var_69_string = var_69_string + var_67_int; // 0x12f6 Add2
	
Label_4855:
	var_66_string = var_69_string; // 0x12f7 Mov
	return 2; // 0x12f8 Return
}


func_4857(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x12f9 PushV
	var_63_int = 0; // 0x12fa MovI
	
Label_4859:
	var_65_string = "all"; // 0x12fb PushS
	var_66_string = ""; var_67_int = 0; // 0x12fc PushV
	var_67_int = var_63_int; // 0x12fd Mov
	func_4850(var_66_string, var_67_int); // 0x12fe NEW_2
	HasAnimation(var_64_bool, var_65_string, var_66_string); // 0x1300 Func
	var_71_bool = var_64_bool == 0; // 0x1302 Not
	if(var_71_bool == 0) goto Label_4869; // 0x1303 JumpB
	goto Label_4872; // 0x1304 Jump
	
Label_4872:
	var_60_int = var_63_int; // 0x1308 Mov
	return 4; // 0x1309 Return
	
Label_4869:
	var_72_int = 1; // 0x1305 PushI
	var_63_int = var_63_int + var_72_int; // 0x1306 Add2
	goto Label_4859; // 0x1307 Jump
}


func_5114()
{
	var_53_string = "playsound"; // 0x13fb PushS
	var_54_string = "giveitem"; // 0x13fc PushS
	TriggerWorld(var_53_string, var_54_string); // 0x13fd Func
	return 0; // 0x13ff Return
}


func_5374()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x14fe PushV
	var_61_int = 623; // 0x14ff PushI
	var_62_int = 2; // 0x1500 PushI
	var_63_int = 532457; // 0x1501 PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0x1502 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x1504 PushV
	var_65_object = var_60_object; // 0x1505 Mov
	var_66_int = 37; // 0x1506 MovI
	func_5478(var_64_bool, var_65_object, var_66_int); // 0x1507 NEW_2
	return 2; // 0x1509 Return
}


