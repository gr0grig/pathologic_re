task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xa2 PushI
	if(var_38_int == 0) goto Label_670; // 0xa3 JumpB
	func_7247(); // 0xa5 NEW_2
	var_40_int = 34605; // 0xa7 PushI
	var_41_bool = var_36_bool == var_40_int; // 0xa8 Eq
	if(var_41_bool == 0) goto Label_190; // 0xa9 JumpB
	var_42_string = ""; // 0xaa PushV
	var_42_string = "Neutral"; // 0xab MovS
	func_139(var_37_cvector, var_42_string); // 0xac NEW_2
	var_59_int = 533096; // 0xae PushI
	SetMessage(var_59_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_60_int = 533097; // 0xb3 PushI
	var_61_int = 34607; // 0xb4 PushI
	var_62_int = 34606; // 0xb5 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xb6 TObjFunc
	var_63_int = 533103; // 0xb8 PushI
	var_64_int = 34615; // 0xb9 PushI
	var_65_int = 34614; // 0xba PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_66_int = 34615; // 0xbe PushI
	var_67_bool = var_36_bool == var_66_int; // 0xbf Eq
	if(var_67_bool == 0) goto Label_219; // 0xc0 JumpB
	var_68_string = ""; // 0xc1 PushV
	var_68_string = "Threat"; // 0xc2 MovS
	func_139(var_37_cvector, var_68_string); // 0xc3 NEW_2
	var_69_int = 533104; // 0xc5 PushI
	SetMessage(var_69_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_70_int = 533105; // 0xca PushI
	var_71_int = 34617; // 0xcb PushI
	var_72_int = 34616; // 0xcc PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xcd TObjFunc
	var_73_bool = 0; var_74_object = Obj(); // 0xcf PushV
	var_74_object = var_1_object; // 0xd0 MovT
	func_8014(var_74_object); // 0xd1 NEW_2
	var_96_bool = var_73_bool == 0; // 0xd3 Not
	if(var_96_bool == 0) goto Label_218; // 0xd4 JumpB
	var_97_int = 533125; // 0xd5 PushI
	var_98_int = 34637; // 0xd6 PushI
	var_99_int = 34636; // 0xd7 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xd8 TObjFunc
	
Label_218:
	return 0; // 0xda Return
	
Label_219:
	var_100_int = 34637; // 0xdb PushI
	var_101_bool = var_36_bool == var_100_int; // 0xdc Eq
	if(var_101_bool == 0) goto Label_282; // 0xdd JumpB
	var_102_string = ""; // 0xde PushV
	var_102_string = "Neutral"; // 0xdf MovS
	func_139(var_37_cvector, var_102_string); // 0xe0 NEW_2
	var_103_int = 533126; // 0xe2 PushI
	SetMessage(var_103_int); // 0xe3 TObjFunc
	ClearReplies(); // 0xe5 TObjFunc
	var_104_bool = 0; var_105_object = Obj(); // 0xe7 PushV
	var_105_object = var_1_object; // 0xe8 MovT
	func_8002(var_105_object); // 0xe9 NEW_2
	if(var_104_bool == 0) goto Label_241; // 0xeb JumpB
	var_110_int = 533127; // 0xec PushI
	var_111_int = 34639; // 0xed PushI
	var_112_int = 34638; // 0xee PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xef TObjFunc
	
Label_241:
	var_113_bool = 0; var_114_object = Obj(); // 0xf1 PushV
	var_114_object = var_1_object; // 0xf2 MovT
	func_8071(var_114_object); // 0xf3 NEW_2
	if(var_113_bool == 0) goto Label_251; // 0xf5 JumpB
	var_119_int = 533130; // 0xf6 PushI
	var_120_int = 34643; // 0xf7 PushI
	var_121_int = 34642; // 0xf8 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xf9 TObjFunc
	
Label_251:
	var_122_bool = 0; var_123_object = Obj(); // 0xfb PushV
	var_123_object = var_1_object; // 0xfc MovT
	func_8083(var_123_object); // 0xfd NEW_2
	if(var_122_bool == 0) goto Label_261; // 0xff JumpB
	var_128_int = 533141; // 0x100 PushI
	var_129_int = 34643; // 0x101 PushI
	var_130_int = 34654; // 0x102 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x103 TObjFunc
	
Label_261:
	var_131_bool = 0; var_132_object = Obj(); // 0x105 PushV
	var_132_object = var_1_object; // 0x106 MovT
	func_8059(var_132_object); // 0x107 NEW_2
	if(var_131_bool == 0) goto Label_271; // 0x109 JumpB
	var_137_int = 533142; // 0x10a PushI
	var_138_int = 34643; // 0x10b PushI
	var_139_int = 34656; // 0x10c PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x10d TObjFunc
	
Label_271:
	var_140_bool = 0; var_141_object = Obj(); // 0x10f PushV
	var_141_object = var_1_object; // 0x110 MovT
	func_8214(var_140_bool, var_141_object); // 0x111 NEW_2
	if(var_140_bool == 0) goto Label_281; // 0x113 JumpB
	var_144_int = 533143; // 0x114 PushI
	var_145_int = 34643; // 0x115 PushI
	var_146_int = 34658; // 0x116 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x117 TObjFunc
	
Label_281:
	return 0; // 0x119 Return
	
Label_282:
	var_147_int = 34643; // 0x11a PushI
	var_148_bool = var_36_bool == var_147_int; // 0x11b Eq
	if(var_148_bool == 0) goto Label_310; // 0x11c JumpB
	var_149_string = ""; // 0x11d PushV
	var_149_string = "Neutral"; // 0x11e MovS
	func_139(var_37_cvector, var_149_string); // 0x11f NEW_2
	var_150_int = 533131; // 0x121 PushI
	SetMessage(var_150_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_151_int = 533132; // 0x126 PushI
	var_152_int = 34645; // 0x127 PushI
	var_153_int = 34644; // 0x128 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x129 TObjFunc
	var_154_int = 534457; // 0x12b PushI
	var_155_int = 34647; // 0x12c PushI
	var_156_int = 36092; // 0x12d PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x12e TObjFunc
	var_157_int = 534458; // 0x130 PushI
	var_158_int = 34647; // 0x131 PushI
	var_159_int = 36094; // 0x132 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_160_int = 34645; // 0x136 PushI
	var_161_bool = var_36_bool == var_160_int; // 0x137 Eq
	if(var_161_bool == 0) goto Label_333; // 0x138 JumpB
	var_162_string = ""; // 0x139 PushV
	var_162_string = "Neutral"; // 0x13a MovS
	func_139(var_37_cvector, var_162_string); // 0x13b NEW_2
	var_163_int = 533133; // 0x13d PushI
	SetMessage(var_163_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_164_int = 533134; // 0x142 PushI
	var_165_int = 34647; // 0x143 PushI
	var_166_int = 34646; // 0x144 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x145 TObjFunc
	var_167_int = 534459; // 0x147 PushI
	var_168_int = 34647; // 0x148 PushI
	var_169_int = 36096; // 0x149 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_170_int = 34647; // 0x14d PushI
	var_171_bool = var_36_bool == var_170_int; // 0x14e Eq
	if(var_171_bool == 0) goto Label_356; // 0x14f JumpB
	var_172_string = ""; // 0x150 PushV
	var_172_string = "Neutral"; // 0x151 MovS
	func_139(var_37_cvector, var_172_string); // 0x152 NEW_2
	var_173_int = 533135; // 0x154 PushI
	SetMessage(var_173_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_174_int = 533136; // 0x159 PushI
	var_175_int = 34649; // 0x15a PushI
	var_176_int = 34648; // 0x15b PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x15c TObjFunc
	var_177_int = 534460; // 0x15e PushI
	var_178_int = 34619; // 0x15f PushI
	var_179_int = 36098; // 0x160 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_180_int = 34649; // 0x164 PushI
	var_181_bool = var_36_bool == var_180_int; // 0x165 Eq
	if(var_181_bool == 0) goto Label_374; // 0x166 JumpB
	var_182_string = ""; // 0x167 PushV
	var_182_string = "Neutral"; // 0x168 MovS
	func_139(var_37_cvector, var_182_string); // 0x169 NEW_2
	var_183_int = 533137; // 0x16b PushI
	SetMessage(var_183_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_184_int = 533138; // 0x170 PushI
	var_185_int = 34651; // 0x171 PushI
	var_186_int = 34650; // 0x172 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_187_int = 34651; // 0x176 PushI
	var_188_bool = var_36_bool == var_187_int; // 0x177 Eq
	if(var_188_bool == 0) goto Label_392; // 0x178 JumpB
	var_189_string = ""; // 0x179 PushV
	var_189_string = "Neutral"; // 0x17a MovS
	func_139(var_37_cvector, var_189_string); // 0x17b NEW_2
	var_190_int = 533139; // 0x17d PushI
	SetMessage(var_190_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_191_int = 533140; // 0x182 PushI
	var_192_int = 34619; // 0x183 PushI
	var_193_int = 34652; // 0x184 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_194_int = 34639; // 0x188 PushI
	var_195_bool = var_36_bool == var_194_int; // 0x189 Eq
	if(var_195_bool == 0) goto Label_410; // 0x18a JumpB
	var_196_string = ""; // 0x18b PushV
	var_196_string = "Neutral"; // 0x18c MovS
	func_139(var_37_cvector, var_196_string); // 0x18d NEW_2
	var_197_int = 533128; // 0x18f PushI
	SetMessage(var_197_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_198_int = 533129; // 0x194 PushI
	var_199_int = 34643; // 0x195 PushI
	var_200_int = 34640; // 0x196 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_201_int = 34617; // 0x19a PushI
	var_202_bool = var_36_bool == var_201_int; // 0x19b Eq
	if(var_202_bool == 0) goto Label_433; // 0x19c JumpB
	var_203_string = ""; // 0x19d PushV
	var_203_string = "Neutral"; // 0x19e MovS
	func_139(var_37_cvector, var_203_string); // 0x19f NEW_2
	var_204_int = 533106; // 0x1a1 PushI
	SetMessage(var_204_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_205_int = 533107; // 0x1a6 PushI
	var_206_int = 34619; // 0x1a7 PushI
	var_207_int = 34618; // 0x1a8 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1a9 TObjFunc
	var_208_int = 534054; // 0x1ab PushI
	var_209_int = 34619; // 0x1ac PushI
	var_210_int = 35636; // 0x1ad PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_211_int = 34619; // 0x1b1 PushI
	var_212_bool = var_36_bool == var_211_int; // 0x1b2 Eq
	if(var_212_bool == 0) goto Label_456; // 0x1b3 JumpB
	var_213_string = ""; // 0x1b4 PushV
	var_213_string = "Neutral"; // 0x1b5 MovS
	func_139(var_37_cvector, var_213_string); // 0x1b6 NEW_2
	var_214_int = 533108; // 0x1b8 PushI
	SetMessage(var_214_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_215_int = 533109; // 0x1bd PushI
	var_216_int = 34621; // 0x1be PushI
	var_217_int = 34620; // 0x1bf PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1c0 TObjFunc
	var_218_int = 534055; // 0x1c2 PushI
	var_219_int = 35639; // 0x1c3 PushI
	var_220_int = 35638; // 0x1c4 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_221_int = 35639; // 0x1c8 PushI
	var_222_bool = var_36_bool == var_221_int; // 0x1c9 Eq
	if(var_222_bool == 0) goto Label_479; // 0x1ca JumpB
	var_223_string = ""; // 0x1cb PushV
	var_223_string = "Isee"; // 0x1cc MovS
	func_139(var_37_cvector, var_223_string); // 0x1cd NEW_2
	var_224_int = 534056; // 0x1cf PushI
	SetMessage(var_224_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_225_int = 534057; // 0x1d4 PushI
	var_226_int = 34621; // 0x1d5 PushI
	var_227_int = 35640; // 0x1d6 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1d7 TObjFunc
	var_228_int = 534058; // 0x1d9 PushI
	var_229_int = 34621; // 0x1da PushI
	var_230_int = 35642; // 0x1db PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_231_int = 34621; // 0x1df PushI
	var_232_bool = var_36_bool == var_231_int; // 0x1e0 Eq
	if(var_232_bool == 0) goto Label_502; // 0x1e1 JumpB
	var_233_string = ""; // 0x1e2 PushV
	var_233_string = "Isee"; // 0x1e3 MovS
	func_139(var_37_cvector, var_233_string); // 0x1e4 NEW_2
	var_234_int = 533110; // 0x1e6 PushI
	SetMessage(var_234_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_235_int = 533111; // 0x1eb PushI
	var_236_int = 34623; // 0x1ec PushI
	var_237_int = 34622; // 0x1ed PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1ee TObjFunc
	var_238_int = 534059; // 0x1f0 PushI
	var_239_int = 34623; // 0x1f1 PushI
	var_240_int = 35644; // 0x1f2 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_241_int = 34623; // 0x1f6 PushI
	var_242_bool = var_36_bool == var_241_int; // 0x1f7 Eq
	if(var_242_bool == 0) goto Label_525; // 0x1f8 JumpB
	var_243_string = ""; // 0x1f9 PushV
	var_243_string = "Isee"; // 0x1fa MovS
	func_139(var_37_cvector, var_243_string); // 0x1fb NEW_2
	var_244_int = 533112; // 0x1fd PushI
	SetMessage(var_244_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_245_int = 533113; // 0x202 PushI
	var_246_int = 34625; // 0x203 PushI
	var_247_int = 34624; // 0x204 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x205 TObjFunc
	var_248_int = 534461; // 0x207 PushI
	var_249_int = 34628; // 0x208 PushI
	var_250_int = 36100; // 0x209 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x20a TObjFunc
	return 0; // 0x20c Return
	
Label_525:
	var_251_int = 34625; // 0x20d PushI
	var_252_bool = var_36_bool == var_251_int; // 0x20e Eq
	if(var_252_bool == 0) goto Label_553; // 0x20f JumpB
	var_253_string = ""; // 0x210 PushV
	var_253_string = "Neutral"; // 0x211 MovS
	func_139(var_37_cvector, var_253_string); // 0x212 NEW_2
	var_254_int = 533114; // 0x214 PushI
	SetMessage(var_254_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_255_int = 533115; // 0x219 PushI
	var_256_int = -1; // 0x21a PushI
	var_257_int = 34626; // 0x21b PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x21c TObjFunc
	var_258_int = 533116; // 0x21e PushI
	var_259_int = 34628; // 0x21f PushI
	var_260_int = 34627; // 0x220 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x221 TObjFunc
	var_261_int = 533124; // 0x223 PushI
	var_262_int = -1; // 0x224 PushI
	var_263_int = 34635; // 0x225 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_264_int = 34628; // 0x229 PushI
	var_265_bool = var_36_bool == var_264_int; // 0x22a Eq
	if(var_265_bool == 0) goto Label_576; // 0x22b JumpB
	var_266_string = ""; // 0x22c PushV
	var_266_string = "Neutral"; // 0x22d MovS
	func_139(var_37_cvector, var_266_string); // 0x22e NEW_2
	var_267_int = 533117; // 0x230 PushI
	SetMessage(var_267_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_268_int = 533118; // 0x235 PushI
	var_269_int = 34630; // 0x236 PushI
	var_270_int = 34629; // 0x237 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x238 TObjFunc
	var_271_int = 534462; // 0x23a PushI
	var_272_int = -1; // 0x23b PushI
	var_273_int = 36102; // 0x23c PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x23d TObjFunc
	return 0; // 0x23f Return
	
Label_576:
	var_274_int = 34630; // 0x240 PushI
	var_275_bool = var_36_bool == var_274_int; // 0x241 Eq
	if(var_275_bool == 0) goto Label_594; // 0x242 JumpB
	var_276_string = ""; // 0x243 PushV
	var_276_string = "Threat"; // 0x244 MovS
	func_139(var_37_cvector, var_276_string); // 0x245 NEW_2
	var_277_int = 533119; // 0x247 PushI
	SetMessage(var_277_int); // 0x248 TObjFunc
	ClearReplies(); // 0x24a TObjFunc
	var_278_int = 533120; // 0x24c PushI
	var_279_int = 34632; // 0x24d PushI
	var_280_int = 34631; // 0x24e PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x24f TObjFunc
	return 0; // 0x251 Return
	
Label_594:
	var_281_int = 34632; // 0x252 PushI
	var_282_bool = var_36_bool == var_281_int; // 0x253 Eq
	if(var_282_bool == 0) goto Label_617; // 0x254 JumpB
	var_283_string = ""; // 0x255 PushV
	var_283_string = "Neutral"; // 0x256 MovS
	func_139(var_37_cvector, var_283_string); // 0x257 NEW_2
	var_284_int = 533121; // 0x259 PushI
	SetMessage(var_284_int); // 0x25a TObjFunc
	ClearReplies(); // 0x25c TObjFunc
	var_285_int = 533122; // 0x25e PushI
	var_286_int = -1; // 0x25f PushI
	var_287_int = 34633; // 0x260 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x261 TObjFunc
	var_288_int = 533123; // 0x263 PushI
	var_289_int = -1; // 0x264 PushI
	var_290_int = 34634; // 0x265 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x266 TObjFunc
	return 0; // 0x268 Return
	
Label_617:
	var_291_int = 34607; // 0x269 PushI
	var_292_bool = var_36_bool == var_291_int; // 0x26a Eq
	if(var_292_bool == 0) goto Label_640; // 0x26b JumpB
	var_293_string = ""; // 0x26c PushV
	var_293_string = "Threat"; // 0x26d MovS
	func_139(var_37_cvector, var_293_string); // 0x26e NEW_2
	var_294_int = 533098; // 0x270 PushI
	SetMessage(var_294_int); // 0x271 TObjFunc
	ClearReplies(); // 0x273 TObjFunc
	var_295_int = 533099; // 0x275 PushI
	var_296_int = 34609; // 0x276 PushI
	var_297_int = 34608; // 0x277 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x278 TObjFunc
	var_298_int = 533102; // 0x27a PushI
	var_299_int = 34615; // 0x27b PushI
	var_300_int = 34612; // 0x27c PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x27d TObjFunc
	return 0; // 0x27f Return
	
Label_640:
	var_301_int = 34609; // 0x280 PushI
	var_302_bool = var_36_bool == var_301_int; // 0x281 Eq
	if(var_302_bool == 0) goto Label_658; // 0x282 JumpB
	var_303_string = ""; // 0x283 PushV
	var_303_string = "Threat"; // 0x284 MovS
	func_139(var_37_cvector, var_303_string); // 0x285 NEW_2
	var_304_int = 533100; // 0x287 PushI
	SetMessage(var_304_int); // 0x288 TObjFunc
	ClearReplies(); // 0x28a TObjFunc
	var_305_int = 533101; // 0x28c PushI
	var_306_int = 34615; // 0x28d PushI
	var_307_int = 34610; // 0x28e PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x28f TObjFunc
	return 0; // 0x291 Return
	
Label_658:
	var_3_string = 1; // 0x292 TMovB
	var_308_bool = 0; // 0x293 PushV
	func_7439(var_308_bool); // 0x294 NEW_2
	if(var_308_bool == 0) goto Label_666; // 0x296 JumpB
	lshStopAnimation(); // 0x297 Func
	goto Label_668; // 0x299 Jump
	
Label_668:
	return 0; // 0x29c Return
	
Label_666:
	StopAnimation(); // 0x29a Func
	
Label_670:
	return 0; // 0x29e Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x34b PushI
	if(var_38_int == 0) goto Label_1029; // 0x34c JumpB
	func_7247(); // 0x34e NEW_2
	var_40_int = 41891; // 0x350 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x351 Eq
	if(var_41_bool == 0) goto Label_856; // 0x352 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x353 PushV
	var_42_object = var_1_object; // 0x354 MovT
	var_43_object = var_0_object; // 0x355 MovT
	func_7651(); // 0x356 NEW_2
	
Label_856:
	var_46_int = 37121; // 0x358 PushI
	var_47_bool = var_36_bool == var_46_int; // 0x359 Eq
	if(var_47_bool == 0) goto Label_889; // 0x35a JumpB
	var_48_string = ""; // 0x35b PushV
	var_48_string = "Arrogance"; // 0x35c MovS
	func_820(var_37_cvector, var_48_string); // 0x35d NEW_2
	var_65_int = 535439; // 0x35f PushI
	SetMessage(var_65_int); // 0x360 TObjFunc
	ClearReplies(); // 0x362 TObjFunc
	var_66_bool = 0; var_67_object = Obj(); // 0x364 PushV
	var_67_object = var_1_object; // 0x365 MovT
	func_8190(var_67_object); // 0x366 NEW_2
	if(var_66_bool == 0) goto Label_878; // 0x368 JumpB
	var_74_int = 539929; // 0x369 PushI
	var_75_int = 41892; // 0x36a PushI
	var_76_int = 41891; // 0x36b PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x36c TObjFunc
	
Label_878:
	var_77_int = 539927; // 0x36e PushI
	var_78_int = -1; // 0x36f PushI
	var_79_int = 41889; // 0x370 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x371 TObjFunc
	var_80_int = 539928; // 0x373 PushI
	var_81_int = -1; // 0x374 PushI
	var_82_int = 41890; // 0x375 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x376 TObjFunc
	return 0; // 0x378 Return
	
Label_889:
	var_83_int = 41892; // 0x379 PushI
	var_84_bool = var_36_bool == var_83_int; // 0x37a Eq
	if(var_84_bool == 0) goto Label_912; // 0x37b JumpB
	var_85_string = ""; // 0x37c PushV
	var_85_string = "Arrogance"; // 0x37d MovS
	func_820(var_37_cvector, var_85_string); // 0x37e NEW_2
	var_86_int = 539930; // 0x380 PushI
	SetMessage(var_86_int); // 0x381 TObjFunc
	ClearReplies(); // 0x383 TObjFunc
	var_87_int = 539931; // 0x385 PushI
	var_88_int = 41894; // 0x386 PushI
	var_89_int = 41893; // 0x387 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x388 TObjFunc
	var_90_int = 539937; // 0x38a PushI
	var_91_int = -1; // 0x38b PushI
	var_92_int = 41899; // 0x38c PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x38d TObjFunc
	return 0; // 0x38f Return
	
Label_912:
	var_93_int = 41894; // 0x390 PushI
	var_94_bool = var_36_bool == var_93_int; // 0x391 Eq
	if(var_94_bool == 0) goto Label_935; // 0x392 JumpB
	var_95_string = ""; // 0x393 PushV
	var_95_string = "Isee"; // 0x394 MovS
	func_820(var_37_cvector, var_95_string); // 0x395 NEW_2
	var_96_int = 539932; // 0x397 PushI
	SetMessage(var_96_int); // 0x398 TObjFunc
	ClearReplies(); // 0x39a TObjFunc
	var_97_int = 539933; // 0x39c PushI
	var_98_int = 41902; // 0x39d PushI
	var_99_int = 41895; // 0x39e PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x39f TObjFunc
	var_100_int = 539934; // 0x3a1 PushI
	var_101_int = 41897; // 0x3a2 PushI
	var_102_int = 41896; // 0x3a3 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x3a4 TObjFunc
	return 0; // 0x3a6 Return
	
Label_935:
	var_103_int = 41897; // 0x3a7 PushI
	var_104_bool = var_36_bool == var_103_int; // 0x3a8 Eq
	if(var_104_bool == 0) goto Label_953; // 0x3a9 JumpB
	var_105_string = ""; // 0x3aa PushV
	var_105_string = "Arrogance"; // 0x3ab MovS
	func_820(var_37_cvector, var_105_string); // 0x3ac NEW_2
	var_106_int = 539935; // 0x3ae PushI
	SetMessage(var_106_int); // 0x3af TObjFunc
	ClearReplies(); // 0x3b1 TObjFunc
	var_107_int = 539936; // 0x3b3 PushI
	var_108_int = 41900; // 0x3b4 PushI
	var_109_int = 41898; // 0x3b5 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x3b6 TObjFunc
	return 0; // 0x3b8 Return
	
Label_953:
	var_110_int = 41900; // 0x3b9 PushI
	var_111_bool = var_36_bool == var_110_int; // 0x3ba Eq
	if(var_111_bool == 0) goto Label_971; // 0x3bb JumpB
	var_112_string = ""; // 0x3bc PushV
	var_112_string = "Arrogance"; // 0x3bd MovS
	func_820(var_37_cvector, var_112_string); // 0x3be NEW_2
	var_113_int = 539938; // 0x3c0 PushI
	SetMessage(var_113_int); // 0x3c1 TObjFunc
	ClearReplies(); // 0x3c3 TObjFunc
	var_114_int = 539939; // 0x3c5 PushI
	var_115_int = -1; // 0x3c6 PushI
	var_116_int = 41901; // 0x3c7 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_117_int = 41902; // 0x3cb PushI
	var_118_bool = var_36_bool == var_117_int; // 0x3cc Eq
	if(var_118_bool == 0) goto Label_994; // 0x3cd JumpB
	var_119_string = ""; // 0x3ce PushV
	var_119_string = "Isee"; // 0x3cf MovS
	func_820(var_37_cvector, var_119_string); // 0x3d0 NEW_2
	var_120_int = 539940; // 0x3d2 PushI
	SetMessage(var_120_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_121_int = 539941; // 0x3d7 PushI
	var_122_int = 41905; // 0x3d8 PushI
	var_123_int = 41903; // 0x3d9 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3da TObjFunc
	var_124_int = 539942; // 0x3dc PushI
	var_125_int = 41905; // 0x3dd PushI
	var_126_int = 41904; // 0x3de PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x3df TObjFunc
	return 0; // 0x3e1 Return
	
Label_994:
	var_127_int = 41905; // 0x3e2 PushI
	var_128_bool = var_36_bool == var_127_int; // 0x3e3 Eq
	if(var_128_bool == 0) goto Label_1017; // 0x3e4 JumpB
	var_129_string = ""; // 0x3e5 PushV
	var_129_string = "Threat"; // 0x3e6 MovS
	func_820(var_37_cvector, var_129_string); // 0x3e7 NEW_2
	var_130_int = 539943; // 0x3e9 PushI
	SetMessage(var_130_int); // 0x3ea TObjFunc
	ClearReplies(); // 0x3ec TObjFunc
	var_131_int = 539944; // 0x3ee PushI
	var_132_int = -1; // 0x3ef PushI
	var_133_int = 41907; // 0x3f0 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x3f1 TObjFunc
	var_134_int = 539945; // 0x3f3 PushI
	var_135_int = -1; // 0x3f4 PushI
	var_136_int = 41908; // 0x3f5 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x3f6 TObjFunc
	return 0; // 0x3f8 Return
	
Label_1017:
	var_3_string = 1; // 0x3f9 TMovB
	var_137_bool = 0; // 0x3fa PushV
	func_7439(var_137_bool); // 0x3fb NEW_2
	if(var_137_bool == 0) goto Label_1025; // 0x3fd JumpB
	lshStopAnimation(); // 0x3fe Func
	goto Label_1027; // 0x400 Jump
	
Label_1027:
	return 0; // 0x403 Return
	
Label_1025:
	StopAnimation(); // 0x401 Func
	
Label_1029:
	return 0; // 0x405 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x4f2 PushI
	if(var_38_int == 0) goto Label_2467; // 0x4f3 JumpB
	func_7247(); // 0x4f5 NEW_2
	var_40_int = 14343; // 0x4f7 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x4f8 Eq
	if(var_41_bool == 0) goto Label_1279; // 0x4f9 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x4fa PushV
	var_42_object = var_1_object; // 0x4fb MovT
	var_43_object = var_0_object; // 0x4fc MovT
	func_7679(); // 0x4fd NEW_2
	
Label_1279:
	var_114_int = 14391; // 0x4ff PushI
	var_115_bool = var_37_cvector == var_114_int; // 0x500 Eq
	if(var_115_bool == 0) goto Label_1297; // 0x501 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x502 PushV
	var_116_object = var_1_object; // 0x503 MovT
	var_117_object = var_0_object; // 0x504 MovT
	func_7737(); // 0x505 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x507 PushV
	var_144_object = var_1_object; // 0x508 MovT
	var_145_object = var_0_object; // 0x509 MovT
	func_7772(); // 0x50a NEW_2
	var_148_object = Obj(); var_149_object = Obj(); // 0x50c PushV
	var_148_object = var_1_object; // 0x50d MovT
	var_149_object = var_0_object; // 0x50e MovT
	func_7657(); // 0x50f NEW_2
	
Label_1297:
	var_152_int = 14394; // 0x511 PushI
	var_153_bool = var_37_cvector == var_152_int; // 0x512 Eq
	if(var_153_bool == 0) goto Label_1315; // 0x513 JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0x514 PushV
	var_154_object = var_1_object; // 0x515 MovT
	var_155_object = var_0_object; // 0x516 MovT
	func_7737(); // 0x517 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0x519 PushV
	var_156_object = var_1_object; // 0x51a MovT
	var_157_object = var_0_object; // 0x51b MovT
	func_7772(); // 0x51c NEW_2
	var_158_object = Obj(); var_159_object = Obj(); // 0x51e PushV
	var_158_object = var_1_object; // 0x51f MovT
	var_159_object = var_0_object; // 0x520 MovT
	func_7657(); // 0x521 NEW_2
	
Label_1315:
	var_160_int = 14389; // 0x523 PushI
	var_161_bool = var_37_cvector == var_160_int; // 0x524 Eq
	if(var_161_bool == 0) goto Label_1333; // 0x525 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x526 PushV
	var_162_object = var_1_object; // 0x527 MovT
	var_163_object = var_0_object; // 0x528 MovT
	func_7737(); // 0x529 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x52b PushV
	var_164_object = var_1_object; // 0x52c MovT
	var_165_object = var_0_object; // 0x52d MovT
	func_7772(); // 0x52e NEW_2
	var_166_object = Obj(); var_167_object = Obj(); // 0x530 PushV
	var_166_object = var_1_object; // 0x531 MovT
	var_167_object = var_0_object; // 0x532 MovT
	func_7657(); // 0x533 NEW_2
	
Label_1333:
	var_168_int = 14363; // 0x535 PushI
	var_169_bool = var_37_cvector == var_168_int; // 0x536 Eq
	if(var_169_bool == 0) goto Label_1351; // 0x537 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x538 PushV
	var_170_object = var_1_object; // 0x539 MovT
	var_171_object = var_0_object; // 0x53a MovT
	func_7778(); // 0x53b NEW_2
	var_198_object = Obj(); var_199_object = Obj(); // 0x53d PushV
	var_198_object = var_1_object; // 0x53e MovT
	var_199_object = var_0_object; // 0x53f MovT
	func_7606(); // 0x540 NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0x542 PushV
	var_210_object = var_1_object; // 0x543 MovT
	var_211_object = var_0_object; // 0x544 MovT
	func_7623(); // 0x545 NEW_2
	
Label_1351:
	var_236_int = 14623; // 0x547 PushI
	var_237_bool = var_37_cvector == var_236_int; // 0x548 Eq
	if(var_237_bool == 0) goto Label_1359; // 0x549 JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x54a PushV
	var_238_object = var_1_object; // 0x54b MovT
	var_239_object = var_0_object; // 0x54c MovT
	func_7829(); // 0x54d NEW_2
	
Label_1359:
	var_250_int = 34746; // 0x54f PushI
	var_251_bool = var_37_cvector == var_250_int; // 0x550 Eq
	if(var_251_bool == 0) goto Label_1367; // 0x551 JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0x552 PushV
	var_252_object = var_1_object; // 0x553 MovT
	var_253_object = var_0_object; // 0x554 MovT
	func_7463(); // 0x555 NEW_2
	
Label_1367:
	var_280_int = 36091; // 0x557 PushI
	var_281_bool = var_37_cvector == var_280_int; // 0x558 Eq
	if(var_281_bool == 0) goto Label_1375; // 0x559 JumpB
	var_282_object = Obj(); var_283_object = Obj(); // 0x55a PushV
	var_282_object = var_1_object; // 0x55b MovT
	var_283_object = var_0_object; // 0x55c MovT
	func_7463(); // 0x55d NEW_2
	
Label_1375:
	var_284_int = 34770; // 0x55f PushI
	var_285_bool = var_37_cvector == var_284_int; // 0x560 Eq
	if(var_285_bool == 0) goto Label_1383; // 0x561 JumpB
	var_286_object = Obj(); var_287_object = Obj(); // 0x562 PushV
	var_286_object = var_1_object; // 0x563 MovT
	var_287_object = var_0_object; // 0x564 MovT
	func_7479(); // 0x565 NEW_2
	
Label_1383:
	var_301_int = 14240; // 0x567 PushI
	var_302_bool = var_36_bool == var_301_int; // 0x568 Eq
	if(var_302_bool == 0) goto Label_1480; // 0x569 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x56a PushV
	var_304_object = var_1_object; // 0x56b MovT
	func_8224(var_304_object); // 0x56c NEW_2
	if(var_303_bool == 0) goto Label_1416; // 0x56e JumpB
	var_309_object = Obj(); var_310_object = Obj(); // 0x56f PushV
	var_309_object = var_1_object; // 0x570 MovT
	var_310_object = var_0_object; // 0x571 MovT
	func_7673(); // 0x572 NEW_2
	var_313_string = ""; // 0x574 PushV
	var_313_string = "Neutral"; // 0x575 MovS
	func_1243(var_37_cvector, var_313_string); // 0x576 NEW_2
	var_330_int = 513033; // 0x578 PushI
	SetMessage(var_330_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_331_int = 513034; // 0x57d PushI
	var_332_int = 14260; // 0x57e PushI
	var_333_int = 14241; // 0x57f PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x580 TObjFunc
	var_334_int = 534463; // 0x582 PushI
	var_335_int = 36105; // 0x583 PushI
	var_336_int = 36104; // 0x584 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_337_string = ""; // 0x588 PushV
	var_337_string = "Arrogance"; // 0x589 MovS
	func_1243(var_37_cvector, var_337_string); // 0x58a NEW_2
	var_338_int = 513031; // 0x58c PushI
	SetMessage(var_338_int); // 0x58d TObjFunc
	ClearReplies(); // 0x58f TObjFunc
	var_339_bool = 0; // 0x591 PushV
	var_339_bool = 0; // 0x592 MovB
	var_340_bool = 0; var_341_object = Obj(); // 0x593 PushV
	var_341_object = var_1_object; // 0x594 MovT
	func_8236(var_340_bool, var_341_object); // 0x595 NEW_2
	if(var_340_bool == 0) goto Label_1438; // 0x597 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x598 PushV
	var_358_object = var_1_object; // 0x599 MovT
	func_8267(var_358_object); // 0x59a NEW_2
	if(var_357_bool == 0) goto Label_1438; // 0x59c JumpB
	var_339_bool = 1; // 0x59d MovB
	
Label_1438:
	if(var_339_bool == 0) goto Label_1444; // 0x59e JumpB
	var_363_int = 513075; // 0x59f PushI
	var_364_int = 14369; // 0x5a0 PushI
	var_365_int = 14285; // 0x5a1 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x5a2 TObjFunc
	
Label_1444:
	var_366_bool = 0; var_367_object = Obj(); // 0x5a4 PushV
	var_367_object = var_1_object; // 0x5a5 MovT
	func_8279(var_367_object); // 0x5a6 NEW_2
	if(var_366_bool == 0) goto Label_1454; // 0x5a8 JumpB
	var_372_int = 513141; // 0x5a9 PushI
	var_373_int = 14362; // 0x5aa PushI
	var_374_int = 14360; // 0x5ab PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x5ac TObjFunc
	
Label_1454:
	var_375_bool = 0; var_376_object = Obj(); // 0x5ae PushV
	var_376_object = var_1_object; // 0x5af MovT
	func_8291(var_376_object); // 0x5b0 NEW_2
	if(var_375_bool == 0) goto Label_1464; // 0x5b2 JumpB
	var_381_int = 513377; // 0x5b3 PushI
	var_382_int = 14610; // 0x5b4 PushI
	var_383_int = 14609; // 0x5b5 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x5b6 TObjFunc
	
Label_1464:
	var_384_bool = 0; var_385_object = Obj(); // 0x5b8 PushV
	var_385_object = var_1_object; // 0x5b9 MovT
	func_8095(var_385_object); // 0x5ba NEW_2
	if(var_384_bool == 0) goto Label_1474; // 0x5bc JumpB
	var_390_int = 533254; // 0x5bd PushI
	var_391_int = 34769; // 0x5be PushI
	var_392_int = 34768; // 0x5bf PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x5c0 TObjFunc
	
Label_1474:
	var_393_int = 513032; // 0x5c2 PushI
	var_394_int = -1; // 0x5c3 PushI
	var_395_int = 14239; // 0x5c4 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x5c5 TObjFunc
	return 0; // 0x5c7 Return
	
Label_1480:
	var_396_int = 14243; // 0x5c8 PushI
	var_397_bool = var_36_bool == var_396_int; // 0x5c9 Eq
	if(var_397_bool == 0) goto Label_1483; // 0x5ca JumpB
	
Label_1483:
	var_398_int = 14358; // 0x5cb PushI
	var_399_bool = var_36_bool == var_398_int; // 0x5cc Eq
	if(var_399_bool == 0) goto Label_1501; // 0x5cd JumpB
	var_400_string = ""; // 0x5ce PushV
	var_400_string = "Neutral"; // 0x5cf MovS
	func_1243(var_37_cvector, var_400_string); // 0x5d0 NEW_2
	var_401_int = 513139; // 0x5d2 PushI
	SetMessage(var_401_int); // 0x5d3 TObjFunc
	ClearReplies(); // 0x5d5 TObjFunc
	var_402_int = 513140; // 0x5d7 PushI
	var_403_int = -1; // 0x5d8 PushI
	var_404_int = 14359; // 0x5d9 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x5da TObjFunc
	return 0; // 0x5dc Return
	
Label_1501:
	var_405_int = 14354; // 0x5dd PushI
	var_406_bool = var_36_bool == var_405_int; // 0x5de Eq
	if(var_406_bool == 0) goto Label_1519; // 0x5df JumpB
	var_407_string = ""; // 0x5e0 PushV
	var_407_string = "Neutral"; // 0x5e1 MovS
	func_1243(var_37_cvector, var_407_string); // 0x5e2 NEW_2
	var_408_int = 513135; // 0x5e4 PushI
	SetMessage(var_408_int); // 0x5e5 TObjFunc
	ClearReplies(); // 0x5e7 TObjFunc
	var_409_int = 513138; // 0x5e9 PushI
	var_410_int = -1; // 0x5ea PushI
	var_411_int = 14357; // 0x5eb PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_412_int = 34769; // 0x5ef PushI
	var_413_bool = var_36_bool == var_412_int; // 0x5f0 Eq
	if(var_413_bool == 0) goto Label_1537; // 0x5f1 JumpB
	var_414_string = ""; // 0x5f2 PushV
	var_414_string = "Threat"; // 0x5f3 MovS
	func_1243(var_37_cvector, var_414_string); // 0x5f4 NEW_2
	var_415_int = 533255; // 0x5f6 PushI
	SetMessage(var_415_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_416_int = 533256; // 0x5fb PushI
	var_417_int = -1; // 0x5fc PushI
	var_418_int = 34770; // 0x5fd PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x5fe TObjFunc
	return 0; // 0x600 Return
	
Label_1537:
	var_419_int = 14610; // 0x601 PushI
	var_420_bool = var_36_bool == var_419_int; // 0x602 Eq
	if(var_420_bool == 0) goto Label_1560; // 0x603 JumpB
	var_421_string = ""; // 0x604 PushV
	var_421_string = "Arrogance"; // 0x605 MovS
	func_1243(var_37_cvector, var_421_string); // 0x606 NEW_2
	var_422_int = 513378; // 0x608 PushI
	SetMessage(var_422_int); // 0x609 TObjFunc
	ClearReplies(); // 0x60b TObjFunc
	var_423_int = 513379; // 0x60d PushI
	var_424_int = 14612; // 0x60e PushI
	var_425_int = 14611; // 0x60f PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x610 TObjFunc
	var_426_int = 534473; // 0x612 PushI
	var_427_int = 14612; // 0x613 PushI
	var_428_int = 36117; // 0x614 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_429_int = 14612; // 0x618 PushI
	var_430_bool = var_36_bool == var_429_int; // 0x619 Eq
	if(var_430_bool == 0) goto Label_1588; // 0x61a JumpB
	var_431_string = ""; // 0x61b PushV
	var_431_string = "Neutral"; // 0x61c MovS
	func_1243(var_37_cvector, var_431_string); // 0x61d NEW_2
	var_432_int = 513380; // 0x61f PushI
	SetMessage(var_432_int); // 0x620 TObjFunc
	ClearReplies(); // 0x622 TObjFunc
	var_433_int = 513382; // 0x624 PushI
	var_434_int = 14616; // 0x625 PushI
	var_435_int = 14614; // 0x626 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x627 TObjFunc
	var_436_int = 513383; // 0x629 PushI
	var_437_int = 14616; // 0x62a PushI
	var_438_int = 14615; // 0x62b PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x62c TObjFunc
	var_439_int = 513381; // 0x62e PushI
	var_440_int = 14619; // 0x62f PushI
	var_441_int = 14613; // 0x630 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x631 TObjFunc
	return 0; // 0x633 Return
	
Label_1588:
	var_442_int = 14619; // 0x634 PushI
	var_443_bool = var_36_bool == var_442_int; // 0x635 Eq
	if(var_443_bool == 0) goto Label_1606; // 0x636 JumpB
	var_444_string = ""; // 0x637 PushV
	var_444_string = "Neutral"; // 0x638 MovS
	func_1243(var_37_cvector, var_444_string); // 0x639 NEW_2
	var_445_int = 513386; // 0x63b PushI
	SetMessage(var_445_int); // 0x63c TObjFunc
	ClearReplies(); // 0x63e TObjFunc
	var_446_int = 513387; // 0x640 PushI
	var_447_int = 14622; // 0x641 PushI
	var_448_int = 14620; // 0x642 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x643 TObjFunc
	return 0; // 0x645 Return
	
Label_1606:
	var_449_int = 14622; // 0x646 PushI
	var_450_bool = var_36_bool == var_449_int; // 0x647 Eq
	if(var_450_bool == 0) goto Label_1624; // 0x648 JumpB
	var_451_string = ""; // 0x649 PushV
	var_451_string = "Arrogance"; // 0x64a MovS
	func_1243(var_37_cvector, var_451_string); // 0x64b NEW_2
	var_452_int = 513388; // 0x64d PushI
	SetMessage(var_452_int); // 0x64e TObjFunc
	ClearReplies(); // 0x650 TObjFunc
	var_453_int = 513389; // 0x652 PushI
	var_454_int = 34743; // 0x653 PushI
	var_455_int = 14623; // 0x654 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x655 TObjFunc
	return 0; // 0x657 Return
	
Label_1624:
	var_456_int = 34743; // 0x658 PushI
	var_457_bool = var_36_bool == var_456_int; // 0x659 Eq
	if(var_457_bool == 0) goto Label_1647; // 0x65a JumpB
	var_458_string = ""; // 0x65b PushV
	var_458_string = "Neutral"; // 0x65c MovS
	func_1243(var_37_cvector, var_458_string); // 0x65d NEW_2
	var_459_int = 533229; // 0x65f PushI
	SetMessage(var_459_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_460_int = 533230; // 0x664 PushI
	var_461_int = 34745; // 0x665 PushI
	var_462_int = 34744; // 0x666 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x667 TObjFunc
	var_463_int = 534453; // 0x669 PushI
	var_464_int = 34745; // 0x66a PushI
	var_465_int = 36086; // 0x66b PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x66c TObjFunc
	return 0; // 0x66e Return
	
Label_1647:
	var_466_int = 34745; // 0x66f PushI
	var_467_bool = var_36_bool == var_466_int; // 0x670 Eq
	if(var_467_bool == 0) goto Label_1670; // 0x671 JumpB
	var_468_string = ""; // 0x672 PushV
	var_468_string = "Neutral"; // 0x673 MovS
	func_1243(var_37_cvector, var_468_string); // 0x674 NEW_2
	var_469_int = 533231; // 0x676 PushI
	SetMessage(var_469_int); // 0x677 TObjFunc
	ClearReplies(); // 0x679 TObjFunc
	var_470_int = 534449; // 0x67b PushI
	var_471_int = 36083; // 0x67c PushI
	var_472_int = 36082; // 0x67d PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x67e TObjFunc
	var_473_int = 534454; // 0x680 PushI
	var_474_int = 36085; // 0x681 PushI
	var_475_int = 36088; // 0x682 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x683 TObjFunc
	return 0; // 0x685 Return
	
Label_1670:
	var_476_int = 36083; // 0x686 PushI
	var_477_bool = var_36_bool == var_476_int; // 0x687 Eq
	if(var_477_bool == 0) goto Label_1688; // 0x688 JumpB
	var_478_string = ""; // 0x689 PushV
	var_478_string = "Isee"; // 0x68a MovS
	func_1243(var_37_cvector, var_478_string); // 0x68b NEW_2
	var_479_int = 534450; // 0x68d PushI
	SetMessage(var_479_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_480_int = 534451; // 0x692 PushI
	var_481_int = 36085; // 0x693 PushI
	var_482_int = 36084; // 0x694 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x695 TObjFunc
	return 0; // 0x697 Return
	
Label_1688:
	var_483_int = 36085; // 0x698 PushI
	var_484_bool = var_36_bool == var_483_int; // 0x699 Eq
	if(var_484_bool == 0) goto Label_1716; // 0x69a JumpB
	var_485_string = ""; // 0x69b PushV
	var_485_string = "Isee"; // 0x69c MovS
	func_1243(var_37_cvector, var_485_string); // 0x69d NEW_2
	var_486_int = 534452; // 0x69f PushI
	SetMessage(var_486_int); // 0x6a0 TObjFunc
	ClearReplies(); // 0x6a2 TObjFunc
	var_487_int = 533232; // 0x6a4 PushI
	var_488_int = -1; // 0x6a5 PushI
	var_489_int = 34746; // 0x6a6 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x6a7 TObjFunc
	var_490_int = 534456; // 0x6a9 PushI
	var_491_int = -1; // 0x6aa PushI
	var_492_int = 36091; // 0x6ab PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x6ac TObjFunc
	var_493_int = 534455; // 0x6ae PushI
	var_494_int = -1; // 0x6af PushI
	var_495_int = 36090; // 0x6b0 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x6b1 TObjFunc
	return 0; // 0x6b3 Return
	
Label_1716:
	var_496_int = 14616; // 0x6b4 PushI
	var_497_bool = var_36_bool == var_496_int; // 0x6b5 Eq
	if(var_497_bool == 0) goto Label_1734; // 0x6b6 JumpB
	var_498_string = ""; // 0x6b7 PushV
	var_498_string = "Neutral"; // 0x6b8 MovS
	func_1243(var_37_cvector, var_498_string); // 0x6b9 NEW_2
	var_499_int = 513384; // 0x6bb PushI
	SetMessage(var_499_int); // 0x6bc TObjFunc
	ClearReplies(); // 0x6be TObjFunc
	var_500_int = 513385; // 0x6c0 PushI
	var_501_int = 14619; // 0x6c1 PushI
	var_502_int = 14618; // 0x6c2 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_503_int = 14362; // 0x6c6 PushI
	var_504_bool = var_36_bool == var_503_int; // 0x6c7 Eq
	if(var_504_bool == 0) goto Label_1752; // 0x6c8 JumpB
	var_505_string = ""; // 0x6c9 PushV
	var_505_string = "Arrogance"; // 0x6ca MovS
	func_1243(var_37_cvector, var_505_string); // 0x6cb NEW_2
	var_506_int = 513143; // 0x6cd PushI
	SetMessage(var_506_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_507_int = 513144; // 0x6d2 PushI
	var_508_int = -1; // 0x6d3 PushI
	var_509_int = 14363; // 0x6d4 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x6d5 TObjFunc
	return 0; // 0x6d7 Return
	
Label_1752:
	var_510_int = 14369; // 0x6d8 PushI
	var_511_bool = var_36_bool == var_510_int; // 0x6d9 Eq
	if(var_511_bool == 0) goto Label_1770; // 0x6da JumpB
	var_512_string = ""; // 0x6db PushV
	var_512_string = "Isee"; // 0x6dc MovS
	func_1243(var_37_cvector, var_512_string); // 0x6dd NEW_2
	var_513_int = 513150; // 0x6df PushI
	SetMessage(var_513_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_514_int = 513151; // 0x6e4 PushI
	var_515_int = 14371; // 0x6e5 PushI
	var_516_int = 14370; // 0x6e6 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x6e7 TObjFunc
	return 0; // 0x6e9 Return
	
Label_1770:
	var_517_int = 14371; // 0x6ea PushI
	var_518_bool = var_36_bool == var_517_int; // 0x6eb Eq
	if(var_518_bool == 0) goto Label_1788; // 0x6ec JumpB
	var_519_string = ""; // 0x6ed PushV
	var_519_string = "Isee"; // 0x6ee MovS
	func_1243(var_37_cvector, var_519_string); // 0x6ef NEW_2
	var_520_int = 513152; // 0x6f1 PushI
	SetMessage(var_520_int); // 0x6f2 TObjFunc
	ClearReplies(); // 0x6f4 TObjFunc
	var_521_int = 513153; // 0x6f6 PushI
	var_522_int = 14373; // 0x6f7 PushI
	var_523_int = 14372; // 0x6f8 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x6f9 TObjFunc
	return 0; // 0x6fb Return
	
Label_1788:
	var_524_int = 14373; // 0x6fc PushI
	var_525_bool = var_36_bool == var_524_int; // 0x6fd Eq
	if(var_525_bool == 0) goto Label_1811; // 0x6fe JumpB
	var_526_string = ""; // 0x6ff PushV
	var_526_string = "Neutral"; // 0x700 MovS
	func_1243(var_37_cvector, var_526_string); // 0x701 NEW_2
	var_527_int = 513154; // 0x703 PushI
	SetMessage(var_527_int); // 0x704 TObjFunc
	ClearReplies(); // 0x706 TObjFunc
	var_528_int = 534471; // 0x708 PushI
	var_529_int = 14377; // 0x709 PushI
	var_530_int = 36114; // 0x70a PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x70b TObjFunc
	var_531_int = 513155; // 0x70d PushI
	var_532_int = 14375; // 0x70e PushI
	var_533_int = 14374; // 0x70f PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x710 TObjFunc
	return 0; // 0x712 Return
	
Label_1811:
	var_534_int = 14375; // 0x713 PushI
	var_535_bool = var_36_bool == var_534_int; // 0x714 Eq
	if(var_535_bool == 0) goto Label_1829; // 0x715 JumpB
	var_536_string = ""; // 0x716 PushV
	var_536_string = "Neutral"; // 0x717 MovS
	func_1243(var_37_cvector, var_536_string); // 0x718 NEW_2
	var_537_int = 513156; // 0x71a PushI
	SetMessage(var_537_int); // 0x71b TObjFunc
	ClearReplies(); // 0x71d TObjFunc
	var_538_int = 513157; // 0x71f PushI
	var_539_int = 14377; // 0x720 PushI
	var_540_int = 14376; // 0x721 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x722 TObjFunc
	return 0; // 0x724 Return
	
Label_1829:
	var_541_int = 14377; // 0x725 PushI
	var_542_bool = var_36_bool == var_541_int; // 0x726 Eq
	if(var_542_bool == 0) goto Label_1852; // 0x727 JumpB
	var_543_string = ""; // 0x728 PushV
	var_543_string = "Threat"; // 0x729 MovS
	func_1243(var_37_cvector, var_543_string); // 0x72a NEW_2
	var_544_int = 513158; // 0x72c PushI
	SetMessage(var_544_int); // 0x72d TObjFunc
	ClearReplies(); // 0x72f TObjFunc
	var_545_int = 513159; // 0x731 PushI
	var_546_int = 14379; // 0x732 PushI
	var_547_int = 14378; // 0x733 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x734 TObjFunc
	var_548_int = 513161; // 0x736 PushI
	var_549_int = 14381; // 0x737 PushI
	var_550_int = 14380; // 0x738 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x739 TObjFunc
	return 0; // 0x73b Return
	
Label_1852:
	var_551_int = 14381; // 0x73c PushI
	var_552_bool = var_36_bool == var_551_int; // 0x73d Eq
	if(var_552_bool == 0) goto Label_1870; // 0x73e JumpB
	var_553_string = ""; // 0x73f PushV
	var_553_string = "Neutral"; // 0x740 MovS
	func_1243(var_37_cvector, var_553_string); // 0x741 NEW_2
	var_554_int = 513162; // 0x743 PushI
	SetMessage(var_554_int); // 0x744 TObjFunc
	ClearReplies(); // 0x746 TObjFunc
	var_555_int = 513164; // 0x748 PushI
	var_556_int = 14384; // 0x749 PushI
	var_557_int = 14383; // 0x74a PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x74b TObjFunc
	return 0; // 0x74d Return
	
Label_1870:
	var_558_int = 14379; // 0x74e PushI
	var_559_bool = var_36_bool == var_558_int; // 0x74f Eq
	if(var_559_bool == 0) goto Label_1888; // 0x750 JumpB
	var_560_string = ""; // 0x751 PushV
	var_560_string = "Neutral"; // 0x752 MovS
	func_1243(var_37_cvector, var_560_string); // 0x753 NEW_2
	var_561_int = 513160; // 0x755 PushI
	SetMessage(var_561_int); // 0x756 TObjFunc
	ClearReplies(); // 0x758 TObjFunc
	var_562_int = 513163; // 0x75a PushI
	var_563_int = 14384; // 0x75b PushI
	var_564_int = 14382; // 0x75c PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x75d TObjFunc
	return 0; // 0x75f Return
	
Label_1888:
	var_565_int = 14384; // 0x760 PushI
	var_566_bool = var_36_bool == var_565_int; // 0x761 Eq
	if(var_566_bool == 0) goto Label_1911; // 0x762 JumpB
	var_567_string = ""; // 0x763 PushV
	var_567_string = "Neutral"; // 0x764 MovS
	func_1243(var_37_cvector, var_567_string); // 0x765 NEW_2
	var_568_int = 513165; // 0x767 PushI
	SetMessage(var_568_int); // 0x768 TObjFunc
	ClearReplies(); // 0x76a TObjFunc
	var_569_int = 513166; // 0x76c PushI
	var_570_int = 14390; // 0x76d PushI
	var_571_int = 14386; // 0x76e PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x76f TObjFunc
	var_572_int = 513167; // 0x771 PushI
	var_573_int = 14388; // 0x772 PushI
	var_574_int = 14387; // 0x773 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x774 TObjFunc
	return 0; // 0x776 Return
	
Label_1911:
	var_575_int = 14388; // 0x777 PushI
	var_576_bool = var_36_bool == var_575_int; // 0x778 Eq
	if(var_576_bool == 0) goto Label_1929; // 0x779 JumpB
	var_577_string = ""; // 0x77a PushV
	var_577_string = "Neutral"; // 0x77b MovS
	func_1243(var_37_cvector, var_577_string); // 0x77c NEW_2
	var_578_int = 513168; // 0x77e PushI
	SetMessage(var_578_int); // 0x77f TObjFunc
	ClearReplies(); // 0x781 TObjFunc
	var_579_int = 513169; // 0x783 PushI
	var_580_int = -1; // 0x784 PushI
	var_581_int = 14389; // 0x785 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x786 TObjFunc
	return 0; // 0x788 Return
	
Label_1929:
	var_582_int = 14390; // 0x789 PushI
	var_583_bool = var_36_bool == var_582_int; // 0x78a Eq
	if(var_583_bool == 0) goto Label_1952; // 0x78b JumpB
	var_584_string = ""; // 0x78c PushV
	var_584_string = "Neutral"; // 0x78d MovS
	func_1243(var_37_cvector, var_584_string); // 0x78e NEW_2
	var_585_int = 513170; // 0x790 PushI
	SetMessage(var_585_int); // 0x791 TObjFunc
	ClearReplies(); // 0x793 TObjFunc
	var_586_int = 513171; // 0x795 PushI
	var_587_int = -1; // 0x796 PushI
	var_588_int = 14391; // 0x797 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x798 TObjFunc
	var_589_int = 513172; // 0x79a PushI
	var_590_int = 14393; // 0x79b PushI
	var_591_int = 14392; // 0x79c PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x79d TObjFunc
	return 0; // 0x79f Return
	
Label_1952:
	var_592_int = 14393; // 0x7a0 PushI
	var_593_bool = var_36_bool == var_592_int; // 0x7a1 Eq
	if(var_593_bool == 0) goto Label_1970; // 0x7a2 JumpB
	var_594_string = ""; // 0x7a3 PushV
	var_594_string = "Neutral"; // 0x7a4 MovS
	func_1243(var_37_cvector, var_594_string); // 0x7a5 NEW_2
	var_595_int = 513173; // 0x7a7 PushI
	SetMessage(var_595_int); // 0x7a8 TObjFunc
	ClearReplies(); // 0x7aa TObjFunc
	var_596_int = 513174; // 0x7ac PushI
	var_597_int = -1; // 0x7ad PushI
	var_598_int = 14394; // 0x7ae PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x7af TObjFunc
	return 0; // 0x7b1 Return
	
Label_1970:
	var_599_int = 14345; // 0x7b2 PushI
	var_600_bool = var_36_bool == var_599_int; // 0x7b3 Eq
	if(var_600_bool == 0) goto Label_1973; // 0x7b4 JumpB
	
Label_1973:
	var_601_int = 37553; // 0x7b5 PushI
	var_602_bool = var_36_bool == var_601_int; // 0x7b6 Eq
	if(var_602_bool == 0) goto Label_1996; // 0x7b7 JumpB
	var_603_string = ""; // 0x7b8 PushV
	var_603_string = "Arrogance"; // 0x7b9 MovS
	func_1243(var_37_cvector, var_603_string); // 0x7ba NEW_2
	var_604_int = 535853; // 0x7bc PushI
	SetMessage(var_604_int); // 0x7bd TObjFunc
	ClearReplies(); // 0x7bf TObjFunc
	var_605_int = 513127; // 0x7c1 PushI
	var_606_int = 14348; // 0x7c2 PushI
	var_607_int = 14346; // 0x7c3 PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x7c4 TObjFunc
	var_608_int = 513128; // 0x7c6 PushI
	var_609_int = -1; // 0x7c7 PushI
	var_610_int = 14347; // 0x7c8 PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0x7c9 TObjFunc
	return 0; // 0x7cb Return
	
Label_1996:
	var_611_int = 14348; // 0x7cc PushI
	var_612_bool = var_36_bool == var_611_int; // 0x7cd Eq
	if(var_612_bool == 0) goto Label_2019; // 0x7ce JumpB
	var_613_string = ""; // 0x7cf PushV
	var_613_string = "Neutral"; // 0x7d0 MovS
	func_1243(var_37_cvector, var_613_string); // 0x7d1 NEW_2
	var_614_int = 513129; // 0x7d3 PushI
	SetMessage(var_614_int); // 0x7d4 TObjFunc
	ClearReplies(); // 0x7d6 TObjFunc
	var_615_int = 513130; // 0x7d8 PushI
	var_616_int = 14350; // 0x7d9 PushI
	var_617_int = 14349; // 0x7da PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x7db TObjFunc
	var_618_int = 534472; // 0x7dd PushI
	var_619_int = -1; // 0x7de PushI
	var_620_int = 36116; // 0x7df PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x7e0 TObjFunc
	return 0; // 0x7e2 Return
	
Label_2019:
	var_621_int = 14350; // 0x7e3 PushI
	var_622_bool = var_36_bool == var_621_int; // 0x7e4 Eq
	if(var_622_bool == 0) goto Label_2042; // 0x7e5 JumpB
	var_623_string = ""; // 0x7e6 PushV
	var_623_string = "Neutral"; // 0x7e7 MovS
	func_1243(var_37_cvector, var_623_string); // 0x7e8 NEW_2
	var_624_int = 513131; // 0x7ea PushI
	SetMessage(var_624_int); // 0x7eb TObjFunc
	ClearReplies(); // 0x7ed TObjFunc
	var_625_int = 513132; // 0x7ef PushI
	var_626_int = -1; // 0x7f0 PushI
	var_627_int = 14351; // 0x7f1 PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0x7f2 TObjFunc
	var_628_int = 513133; // 0x7f4 PushI
	var_629_int = -1; // 0x7f5 PushI
	var_630_int = 14352; // 0x7f6 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x7f7 TObjFunc
	return 0; // 0x7f9 Return
	
Label_2042:
	var_631_int = 36105; // 0x7fa PushI
	var_632_bool = var_36_bool == var_631_int; // 0x7fb Eq
	if(var_632_bool == 0) goto Label_2060; // 0x7fc JumpB
	var_633_string = ""; // 0x7fd PushV
	var_633_string = "Isee"; // 0x7fe MovS
	func_1243(var_37_cvector, var_633_string); // 0x7ff NEW_2
	var_634_int = 534464; // 0x801 PushI
	SetMessage(var_634_int); // 0x802 TObjFunc
	ClearReplies(); // 0x804 TObjFunc
	var_635_int = 534465; // 0x806 PushI
	var_636_int = 36107; // 0x807 PushI
	var_637_int = 36106; // 0x808 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x809 TObjFunc
	return 0; // 0x80b Return
	
Label_2060:
	var_638_int = 36107; // 0x80c PushI
	var_639_bool = var_36_bool == var_638_int; // 0x80d Eq
	if(var_639_bool == 0) goto Label_2083; // 0x80e JumpB
	var_640_string = ""; // 0x80f PushV
	var_640_string = "Isee"; // 0x810 MovS
	func_1243(var_37_cvector, var_640_string); // 0x811 NEW_2
	var_641_int = 534466; // 0x813 PushI
	SetMessage(var_641_int); // 0x814 TObjFunc
	ClearReplies(); // 0x816 TObjFunc
	var_642_int = 534467; // 0x818 PushI
	var_643_int = 14260; // 0x819 PushI
	var_644_int = 36108; // 0x81a PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x81b TObjFunc
	var_645_int = 534468; // 0x81d PushI
	var_646_int = 36110; // 0x81e PushI
	var_647_int = 36109; // 0x81f PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x820 TObjFunc
	return 0; // 0x822 Return
	
Label_2083:
	var_648_int = 36110; // 0x823 PushI
	var_649_bool = var_36_bool == var_648_int; // 0x824 Eq
	if(var_649_bool == 0) goto Label_2101; // 0x825 JumpB
	var_650_string = ""; // 0x826 PushV
	var_650_string = "Arrogance"; // 0x827 MovS
	func_1243(var_37_cvector, var_650_string); // 0x828 NEW_2
	var_651_int = 534469; // 0x82a PushI
	SetMessage(var_651_int); // 0x82b TObjFunc
	ClearReplies(); // 0x82d TObjFunc
	var_652_int = 534470; // 0x82f PushI
	var_653_int = 14284; // 0x830 PushI
	var_654_int = 36111; // 0x831 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x832 TObjFunc
	return 0; // 0x834 Return
	
Label_2101:
	var_655_int = 14260; // 0x835 PushI
	var_656_bool = var_36_bool == var_655_int; // 0x836 Eq
	if(var_656_bool == 0) goto Label_2124; // 0x837 JumpB
	var_657_string = ""; // 0x838 PushV
	var_657_string = "Arrogance"; // 0x839 MovS
	func_1243(var_37_cvector, var_657_string); // 0x83a NEW_2
	var_658_int = 513052; // 0x83c PushI
	SetMessage(var_658_int); // 0x83d TObjFunc
	ClearReplies(); // 0x83f TObjFunc
	var_659_int = 513053; // 0x841 PushI
	var_660_int = 14262; // 0x842 PushI
	var_661_int = 14261; // 0x843 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x844 TObjFunc
	var_662_int = 513108; // 0x846 PushI
	var_663_int = 14262; // 0x847 PushI
	var_664_int = 14323; // 0x848 PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0x849 TObjFunc
	return 0; // 0x84b Return
	
Label_2124:
	var_665_int = 14262; // 0x84c PushI
	var_666_bool = var_36_bool == var_665_int; // 0x84d Eq
	if(var_666_bool == 0) goto Label_2147; // 0x84e JumpB
	var_667_string = ""; // 0x84f PushV
	var_667_string = "Arrogance"; // 0x850 MovS
	func_1243(var_37_cvector, var_667_string); // 0x851 NEW_2
	var_668_int = 513054; // 0x853 PushI
	SetMessage(var_668_int); // 0x854 TObjFunc
	ClearReplies(); // 0x856 TObjFunc
	var_669_int = 513055; // 0x858 PushI
	var_670_int = 14264; // 0x859 PushI
	var_671_int = 14263; // 0x85a PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x85b TObjFunc
	var_672_int = 513110; // 0x85d PushI
	var_673_int = 14264; // 0x85e PushI
	var_674_int = 14326; // 0x85f PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x860 TObjFunc
	return 0; // 0x862 Return
	
Label_2147:
	var_675_int = 14264; // 0x863 PushI
	var_676_bool = var_36_bool == var_675_int; // 0x864 Eq
	if(var_676_bool == 0) goto Label_2165; // 0x865 JumpB
	var_677_string = ""; // 0x866 PushV
	var_677_string = "Neutral"; // 0x867 MovS
	func_1243(var_37_cvector, var_677_string); // 0x868 NEW_2
	var_678_int = 513056; // 0x86a PushI
	SetMessage(var_678_int); // 0x86b TObjFunc
	ClearReplies(); // 0x86d TObjFunc
	var_679_int = 513057; // 0x86f PushI
	var_680_int = 14266; // 0x870 PushI
	var_681_int = 14265; // 0x871 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x872 TObjFunc
	return 0; // 0x874 Return
	
Label_2165:
	var_682_int = 14266; // 0x875 PushI
	var_683_bool = var_36_bool == var_682_int; // 0x876 Eq
	if(var_683_bool == 0) goto Label_2188; // 0x877 JumpB
	var_684_string = ""; // 0x878 PushV
	var_684_string = "Neutral"; // 0x879 MovS
	func_1243(var_37_cvector, var_684_string); // 0x87a NEW_2
	var_685_int = 513058; // 0x87c PushI
	SetMessage(var_685_int); // 0x87d TObjFunc
	ClearReplies(); // 0x87f TObjFunc
	var_686_int = 513059; // 0x881 PushI
	var_687_int = 14269; // 0x882 PushI
	var_688_int = 14267; // 0x883 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x884 TObjFunc
	var_689_int = 513060; // 0x886 PushI
	var_690_int = 14557; // 0x887 PushI
	var_691_int = 14268; // 0x888 PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x889 TObjFunc
	return 0; // 0x88b Return
	
Label_2188:
	var_692_int = 14269; // 0x88c PushI
	var_693_bool = var_36_bool == var_692_int; // 0x88d Eq
	if(var_693_bool == 0) goto Label_2206; // 0x88e JumpB
	var_694_string = ""; // 0x88f PushV
	var_694_string = "Isee"; // 0x890 MovS
	func_1243(var_37_cvector, var_694_string); // 0x891 NEW_2
	var_695_int = 513061; // 0x893 PushI
	SetMessage(var_695_int); // 0x894 TObjFunc
	ClearReplies(); // 0x896 TObjFunc
	var_696_int = 513321; // 0x898 PushI
	var_697_int = 14557; // 0x899 PushI
	var_698_int = 14556; // 0x89a PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x89b TObjFunc
	return 0; // 0x89d Return
	
Label_2206:
	var_699_int = 14557; // 0x89e PushI
	var_700_bool = var_36_bool == var_699_int; // 0x89f Eq
	if(var_700_bool == 0) goto Label_2224; // 0x8a0 JumpB
	var_701_string = ""; // 0x8a1 PushV
	var_701_string = "Isee"; // 0x8a2 MovS
	func_1243(var_37_cvector, var_701_string); // 0x8a3 NEW_2
	var_702_int = 513322; // 0x8a5 PushI
	SetMessage(var_702_int); // 0x8a6 TObjFunc
	ClearReplies(); // 0x8a8 TObjFunc
	var_703_int = 513323; // 0x8aa PushI
	var_704_int = 14284; // 0x8ab PushI
	var_705_int = 14558; // 0x8ac PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x8ad TObjFunc
	return 0; // 0x8af Return
	
Label_2224:
	var_706_int = 14284; // 0x8b0 PushI
	var_707_bool = var_36_bool == var_706_int; // 0x8b1 Eq
	if(var_707_bool == 0) goto Label_2247; // 0x8b2 JumpB
	var_708_string = ""; // 0x8b3 PushV
	var_708_string = "Threat"; // 0x8b4 MovS
	func_1243(var_37_cvector, var_708_string); // 0x8b5 NEW_2
	var_709_int = 513074; // 0x8b7 PushI
	SetMessage(var_709_int); // 0x8b8 TObjFunc
	ClearReplies(); // 0x8ba TObjFunc
	var_710_int = 513076; // 0x8bc PushI
	var_711_int = 14287; // 0x8bd PushI
	var_712_int = 14286; // 0x8be PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x8bf TObjFunc
	var_713_int = 513117; // 0x8c1 PushI
	var_714_int = 14336; // 0x8c2 PushI
	var_715_int = 14335; // 0x8c3 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x8c4 TObjFunc
	return 0; // 0x8c6 Return
	
Label_2247:
	var_716_int = 14336; // 0x8c7 PushI
	var_717_bool = var_36_bool == var_716_int; // 0x8c8 Eq
	if(var_717_bool == 0) goto Label_2265; // 0x8c9 JumpB
	var_718_string = ""; // 0x8ca PushV
	var_718_string = "Neutral"; // 0x8cb MovS
	func_1243(var_37_cvector, var_718_string); // 0x8cc NEW_2
	var_719_int = 513118; // 0x8ce PushI
	SetMessage(var_719_int); // 0x8cf TObjFunc
	ClearReplies(); // 0x8d1 TObjFunc
	var_720_int = 513119; // 0x8d3 PushI
	var_721_int = 14289; // 0x8d4 PushI
	var_722_int = 14337; // 0x8d5 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x8d6 TObjFunc
	return 0; // 0x8d8 Return
	
Label_2265:
	var_723_int = 14287; // 0x8d9 PushI
	var_724_bool = var_36_bool == var_723_int; // 0x8da Eq
	if(var_724_bool == 0) goto Label_2283; // 0x8db JumpB
	var_725_string = ""; // 0x8dc PushV
	var_725_string = "Isee"; // 0x8dd MovS
	func_1243(var_37_cvector, var_725_string); // 0x8de NEW_2
	var_726_int = 513077; // 0x8e0 PushI
	SetMessage(var_726_int); // 0x8e1 TObjFunc
	ClearReplies(); // 0x8e3 TObjFunc
	var_727_int = 513078; // 0x8e5 PushI
	var_728_int = 14289; // 0x8e6 PushI
	var_729_int = 14288; // 0x8e7 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x8e8 TObjFunc
	return 0; // 0x8ea Return
	
Label_2283:
	var_730_int = 14289; // 0x8eb PushI
	var_731_bool = var_36_bool == var_730_int; // 0x8ec Eq
	if(var_731_bool == 0) goto Label_2306; // 0x8ed JumpB
	var_732_string = ""; // 0x8ee PushV
	var_732_string = "Neutral"; // 0x8ef MovS
	func_1243(var_37_cvector, var_732_string); // 0x8f0 NEW_2
	var_733_int = 513079; // 0x8f2 PushI
	SetMessage(var_733_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_734_int = 513082; // 0x8f7 PushI
	var_735_int = 14296; // 0x8f8 PushI
	var_736_int = 14292; // 0x8f9 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x8fa TObjFunc
	var_737_int = 513080; // 0x8fc PushI
	var_738_int = 14291; // 0x8fd PushI
	var_739_int = 14290; // 0x8fe PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x8ff TObjFunc
	return 0; // 0x901 Return
	
Label_2306:
	var_740_int = 14291; // 0x902 PushI
	var_741_bool = var_36_bool == var_740_int; // 0x903 Eq
	if(var_741_bool == 0) goto Label_2324; // 0x904 JumpB
	var_742_string = ""; // 0x905 PushV
	var_742_string = "Threat"; // 0x906 MovS
	func_1243(var_37_cvector, var_742_string); // 0x907 NEW_2
	var_743_int = 513081; // 0x909 PushI
	SetMessage(var_743_int); // 0x90a TObjFunc
	ClearReplies(); // 0x90c TObjFunc
	var_744_int = 513083; // 0x90e PushI
	var_745_int = 14294; // 0x90f PushI
	var_746_int = 14293; // 0x910 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x911 TObjFunc
	return 0; // 0x913 Return
	
Label_2324:
	var_747_int = 14294; // 0x914 PushI
	var_748_bool = var_36_bool == var_747_int; // 0x915 Eq
	if(var_748_bool == 0) goto Label_2342; // 0x916 JumpB
	var_749_string = ""; // 0x917 PushV
	var_749_string = "Threat"; // 0x918 MovS
	func_1243(var_37_cvector, var_749_string); // 0x919 NEW_2
	var_750_int = 513084; // 0x91b PushI
	SetMessage(var_750_int); // 0x91c TObjFunc
	ClearReplies(); // 0x91e TObjFunc
	var_751_int = 513085; // 0x920 PushI
	var_752_int = 14296; // 0x921 PushI
	var_753_int = 14295; // 0x922 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_754_int = 14296; // 0x926 PushI
	var_755_bool = var_36_bool == var_754_int; // 0x927 Eq
	if(var_755_bool == 0) goto Label_2360; // 0x928 JumpB
	var_756_string = ""; // 0x929 PushV
	var_756_string = "Neutral"; // 0x92a MovS
	func_1243(var_37_cvector, var_756_string); // 0x92b NEW_2
	var_757_int = 513086; // 0x92d PushI
	SetMessage(var_757_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_758_int = 513111; // 0x932 PushI
	var_759_int = 14329; // 0x933 PushI
	var_760_int = 14328; // 0x934 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x935 TObjFunc
	return 0; // 0x937 Return
	
Label_2360:
	var_761_int = 14329; // 0x938 PushI
	var_762_bool = var_36_bool == var_761_int; // 0x939 Eq
	if(var_762_bool == 0) goto Label_2378; // 0x93a JumpB
	var_763_string = ""; // 0x93b PushV
	var_763_string = "Neutral"; // 0x93c MovS
	func_1243(var_37_cvector, var_763_string); // 0x93d NEW_2
	var_764_int = 513112; // 0x93f PushI
	SetMessage(var_764_int); // 0x940 TObjFunc
	ClearReplies(); // 0x942 TObjFunc
	var_765_int = 513113; // 0x944 PushI
	var_766_int = 14332; // 0x945 PushI
	var_767_int = 14331; // 0x946 PushI
	AddReply(var_765_int, var_766_int, var_767_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_768_int = 14332; // 0x94a PushI
	var_769_bool = var_36_bool == var_768_int; // 0x94b Eq
	if(var_769_bool == 0) goto Label_2401; // 0x94c JumpB
	var_770_string = ""; // 0x94d PushV
	var_770_string = "Neutral"; // 0x94e MovS
	func_1243(var_37_cvector, var_770_string); // 0x94f NEW_2
	var_771_int = 513114; // 0x951 PushI
	SetMessage(var_771_int); // 0x952 TObjFunc
	ClearReplies(); // 0x954 TObjFunc
	var_772_int = 513120; // 0x956 PushI
	var_773_int = 14340; // 0x957 PushI
	var_774_int = 14339; // 0x958 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x959 TObjFunc
	var_775_int = 513115; // 0x95b PushI
	var_776_int = 14334; // 0x95c PushI
	var_777_int = 14333; // 0x95d PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0x95e TObjFunc
	return 0; // 0x960 Return
	
Label_2401:
	var_778_int = 14334; // 0x961 PushI
	var_779_bool = var_36_bool == var_778_int; // 0x962 Eq
	if(var_779_bool == 0) goto Label_2419; // 0x963 JumpB
	var_780_string = ""; // 0x964 PushV
	var_780_string = "Neutral"; // 0x965 MovS
	func_1243(var_37_cvector, var_780_string); // 0x966 NEW_2
	var_781_int = 513116; // 0x968 PushI
	SetMessage(var_781_int); // 0x969 TObjFunc
	ClearReplies(); // 0x96b TObjFunc
	var_782_int = 534431; // 0x96d PushI
	var_783_int = 14340; // 0x96e PushI
	var_784_int = 36061; // 0x96f PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0x970 TObjFunc
	return 0; // 0x972 Return
	
Label_2419:
	var_785_int = 14340; // 0x973 PushI
	var_786_bool = var_36_bool == var_785_int; // 0x974 Eq
	if(var_786_bool == 0) goto Label_2437; // 0x975 JumpB
	var_787_string = ""; // 0x976 PushV
	var_787_string = "Neutral"; // 0x977 MovS
	func_1243(var_37_cvector, var_787_string); // 0x978 NEW_2
	var_788_int = 513121; // 0x97a PushI
	SetMessage(var_788_int); // 0x97b TObjFunc
	ClearReplies(); // 0x97d TObjFunc
	var_789_int = 513122; // 0x97f PushI
	var_790_int = 14342; // 0x980 PushI
	var_791_int = 14341; // 0x981 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x982 TObjFunc
	return 0; // 0x984 Return
	
Label_2437:
	var_792_int = 14342; // 0x985 PushI
	var_793_bool = var_36_bool == var_792_int; // 0x986 Eq
	if(var_793_bool == 0) goto Label_2455; // 0x987 JumpB
	var_794_string = ""; // 0x988 PushV
	var_794_string = "Threat"; // 0x989 MovS
	func_1243(var_37_cvector, var_794_string); // 0x98a NEW_2
	var_795_int = 513123; // 0x98c PushI
	SetMessage(var_795_int); // 0x98d TObjFunc
	ClearReplies(); // 0x98f TObjFunc
	var_796_int = 513124; // 0x991 PushI
	var_797_int = -1; // 0x992 PushI
	var_798_int = 14343; // 0x993 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x994 TObjFunc
	return 0; // 0x996 Return
	
Label_2455:
	var_3_string = 1; // 0x997 TMovB
	var_799_bool = 0; // 0x998 PushV
	func_7439(var_799_bool); // 0x999 NEW_2
	if(var_799_bool == 0) goto Label_2463; // 0x99b JumpB
	lshStopAnimation(); // 0x99c Func
	goto Label_2465; // 0x99e Jump
	
Label_2465:
	return 0; // 0x9a1 Return
	
Label_2463:
	StopAnimation(); // 0x99f Func
	
Label_2467:
	return 0; // 0x9a3 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xa73 PushI
	if(var_38_int == 0) goto Label_3484; // 0xa74 JumpB
	func_7247(); // 0xa76 NEW_2
	var_40_int = 14980; // 0xa78 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xa79 Eq
	if(var_41_bool == 0) goto Label_2688; // 0xa7a JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xa7b PushV
	var_42_object = var_1_object; // 0xa7c MovT
	var_43_object = var_0_object; // 0xa7d MovT
	func_7838(); // 0xa7e NEW_2
	
Label_2688:
	var_83_int = 37557; // 0xa80 PushI
	var_84_bool = var_37_cvector == var_83_int; // 0xa81 Eq
	if(var_84_bool == 0) goto Label_2696; // 0xa82 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0xa83 PushV
	var_85_object = var_1_object; // 0xa84 MovT
	var_86_object = var_0_object; // 0xa85 MovT
	func_7838(); // 0xa86 NEW_2
	
Label_2696:
	var_87_int = 14645; // 0xa88 PushI
	var_88_bool = var_37_cvector == var_87_int; // 0xa89 Eq
	if(var_88_bool == 0) goto Label_2704; // 0xa8a JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xa8b PushV
	var_89_object = var_1_object; // 0xa8c MovT
	var_90_object = var_0_object; // 0xa8d MovT
	func_7530(); // 0xa8e NEW_2
	
Label_2704:
	var_93_int = 13413; // 0xa90 PushI
	var_94_bool = var_37_cvector == var_93_int; // 0xa91 Eq
	if(var_94_bool == 0) goto Label_2712; // 0xa92 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0xa93 PushV
	var_95_object = var_1_object; // 0xa94 MovT
	var_96_object = var_0_object; // 0xa95 MovT
	func_7861(); // 0xa96 NEW_2
	
Label_2712:
	var_99_int = 16355; // 0xa98 PushI
	var_100_bool = var_36_bool == var_99_int; // 0xa99 Eq
	if(var_100_bool == 0) goto Label_2780; // 0xa9a JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0xa9b PushV
	var_102_object = var_1_object; // 0xa9c MovT
	func_8315(var_102_object); // 0xa9d NEW_2
	if(var_101_bool == 0) goto Label_2745; // 0xa9f JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0xaa0 PushV
	var_109_object = var_1_object; // 0xaa1 MovT
	var_110_object = var_0_object; // 0xaa2 MovT
	func_7855(); // 0xaa3 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0xaa5 PushV
	var_113_object = var_1_object; // 0xaa6 MovT
	var_114_object = var_0_object; // 0xaa7 MovT
	func_7536(); // 0xaa8 NEW_2
	var_117_string = ""; // 0xaaa PushV
	var_117_string = "Arrogance"; // 0xaab MovS
	func_2652(var_37_cvector, var_117_string); // 0xaac NEW_2
	var_134_int = 515089; // 0xaae PushI
	SetMessage(var_134_int); // 0xaaf TObjFunc
	ClearReplies(); // 0xab1 TObjFunc
	var_135_int = 535859; // 0xab3 PushI
	var_136_int = 37561; // 0xab4 PushI
	var_137_int = 37560; // 0xab5 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xab6 TObjFunc
	return 0; // 0xab8 Return
	
Label_2745:
	var_138_string = ""; // 0xab9 PushV
	var_138_string = "Neutral"; // 0xaba MovS
	func_2652(var_37_cvector, var_138_string); // 0xabb NEW_2
	var_139_int = 513409; // 0xabd PushI
	SetMessage(var_139_int); // 0xabe TObjFunc
	ClearReplies(); // 0xac0 TObjFunc
	var_140_bool = 0; var_141_object = Obj(); // 0xac2 PushV
	var_141_object = var_1_object; // 0xac3 MovT
	func_8303(var_141_object); // 0xac4 NEW_2
	if(var_140_bool == 0) goto Label_2764; // 0xac6 JumpB
	var_146_int = 535855; // 0xac7 PushI
	var_147_int = 14647; // 0xac8 PushI
	var_148_int = 37556; // 0xac9 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xaca TObjFunc
	
Label_2764:
	var_149_bool = 0; var_150_object = Obj(); // 0xacc PushV
	var_150_object = var_1_object; // 0xacd MovT
	func_8119(var_150_object); // 0xace NEW_2
	if(var_149_bool == 0) goto Label_2774; // 0xad0 JumpB
	var_155_int = 513411; // 0xad1 PushI
	var_156_int = 13400; // 0xad2 PushI
	var_157_int = 14645; // 0xad3 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xad4 TObjFunc
	
Label_2774:
	var_158_int = 513410; // 0xad6 PushI
	var_159_int = -1; // 0xad7 PushI
	var_160_int = 14644; // 0xad8 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xad9 TObjFunc
	return 0; // 0xadb Return
	
Label_2780:
	var_161_int = 13452; // 0xadc PushI
	var_162_bool = var_36_bool == var_161_int; // 0xadd Eq
	if(var_162_bool == 0) goto Label_2783; // 0xade JumpB
	
Label_2783:
	var_163_int = 13454; // 0xadf PushI
	var_164_bool = var_36_bool == var_163_int; // 0xae0 Eq
	if(var_164_bool == 0) goto Label_2806; // 0xae1 JumpB
	var_165_string = ""; // 0xae2 PushV
	var_165_string = "Neutral"; // 0xae3 MovS
	func_2652(var_37_cvector, var_165_string); // 0xae4 NEW_2
	var_166_int = 512295; // 0xae6 PushI
	SetMessage(var_166_int); // 0xae7 TObjFunc
	ClearReplies(); // 0xae9 TObjFunc
	var_167_int = 512296; // 0xaeb PushI
	var_168_int = 13457; // 0xaec PushI
	var_169_int = 13455; // 0xaed PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xaee TObjFunc
	var_170_int = 512297; // 0xaf0 PushI
	var_171_int = -1; // 0xaf1 PushI
	var_172_int = 13456; // 0xaf2 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xaf3 TObjFunc
	return 0; // 0xaf5 Return
	
Label_2806:
	var_173_int = 13457; // 0xaf6 PushI
	var_174_bool = var_36_bool == var_173_int; // 0xaf7 Eq
	if(var_174_bool == 0) goto Label_2824; // 0xaf8 JumpB
	var_175_string = ""; // 0xaf9 PushV
	var_175_string = "Neutral"; // 0xafa MovS
	func_2652(var_37_cvector, var_175_string); // 0xafb NEW_2
	var_176_int = 512298; // 0xafd PushI
	SetMessage(var_176_int); // 0xafe TObjFunc
	ClearReplies(); // 0xb00 TObjFunc
	var_177_int = 512299; // 0xb02 PushI
	var_178_int = 13459; // 0xb03 PushI
	var_179_int = 13458; // 0xb04 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xb05 TObjFunc
	return 0; // 0xb07 Return
	
Label_2824:
	var_180_int = 13459; // 0xb08 PushI
	var_181_bool = var_36_bool == var_180_int; // 0xb09 Eq
	if(var_181_bool == 0) goto Label_2842; // 0xb0a JumpB
	var_182_string = ""; // 0xb0b PushV
	var_182_string = "Threat"; // 0xb0c MovS
	func_2652(var_37_cvector, var_182_string); // 0xb0d NEW_2
	var_183_int = 512300; // 0xb0f PushI
	SetMessage(var_183_int); // 0xb10 TObjFunc
	ClearReplies(); // 0xb12 TObjFunc
	var_184_int = 512301; // 0xb14 PushI
	var_185_int = 13461; // 0xb15 PushI
	var_186_int = 13460; // 0xb16 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xb17 TObjFunc
	return 0; // 0xb19 Return
	
Label_2842:
	var_187_int = 13461; // 0xb1a PushI
	var_188_bool = var_36_bool == var_187_int; // 0xb1b Eq
	if(var_188_bool == 0) goto Label_2860; // 0xb1c JumpB
	var_189_string = ""; // 0xb1d PushV
	var_189_string = "Threat"; // 0xb1e MovS
	func_2652(var_37_cvector, var_189_string); // 0xb1f NEW_2
	var_190_int = 512302; // 0xb21 PushI
	SetMessage(var_190_int); // 0xb22 TObjFunc
	ClearReplies(); // 0xb24 TObjFunc
	var_191_int = 512303; // 0xb26 PushI
	var_192_int = 13463; // 0xb27 PushI
	var_193_int = 13462; // 0xb28 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xb29 TObjFunc
	return 0; // 0xb2b Return
	
Label_2860:
	var_194_int = 13463; // 0xb2c PushI
	var_195_bool = var_36_bool == var_194_int; // 0xb2d Eq
	if(var_195_bool == 0) goto Label_2878; // 0xb2e JumpB
	var_196_string = ""; // 0xb2f PushV
	var_196_string = "Neutral"; // 0xb30 MovS
	func_2652(var_37_cvector, var_196_string); // 0xb31 NEW_2
	var_197_int = 512304; // 0xb33 PushI
	SetMessage(var_197_int); // 0xb34 TObjFunc
	ClearReplies(); // 0xb36 TObjFunc
	var_198_int = 512305; // 0xb38 PushI
	var_199_int = 13465; // 0xb39 PushI
	var_200_int = 13464; // 0xb3a PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xb3b TObjFunc
	return 0; // 0xb3d Return
	
Label_2878:
	var_201_int = 13465; // 0xb3e PushI
	var_202_bool = var_36_bool == var_201_int; // 0xb3f Eq
	if(var_202_bool == 0) goto Label_2901; // 0xb40 JumpB
	var_203_string = ""; // 0xb41 PushV
	var_203_string = "Neutral"; // 0xb42 MovS
	func_2652(var_37_cvector, var_203_string); // 0xb43 NEW_2
	var_204_int = 512306; // 0xb45 PushI
	SetMessage(var_204_int); // 0xb46 TObjFunc
	ClearReplies(); // 0xb48 TObjFunc
	var_205_int = 512307; // 0xb4a PushI
	var_206_int = -1; // 0xb4b PushI
	var_207_int = 13466; // 0xb4c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xb4d TObjFunc
	var_208_int = 512308; // 0xb4f PushI
	var_209_int = -1; // 0xb50 PushI
	var_210_int = 13467; // 0xb51 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xb52 TObjFunc
	return 0; // 0xb54 Return
	
Label_2901:
	var_211_int = 13400; // 0xb55 PushI
	var_212_bool = var_36_bool == var_211_int; // 0xb56 Eq
	if(var_212_bool == 0) goto Label_2919; // 0xb57 JumpB
	var_213_string = ""; // 0xb58 PushV
	var_213_string = "Neutral"; // 0xb59 MovS
	func_2652(var_37_cvector, var_213_string); // 0xb5a NEW_2
	var_214_int = 512244; // 0xb5c PushI
	SetMessage(var_214_int); // 0xb5d TObjFunc
	ClearReplies(); // 0xb5f TObjFunc
	var_215_int = 512245; // 0xb61 PushI
	var_216_int = 13402; // 0xb62 PushI
	var_217_int = 13401; // 0xb63 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0xb64 TObjFunc
	return 0; // 0xb66 Return
	
Label_2919:
	var_218_int = 13402; // 0xb67 PushI
	var_219_bool = var_36_bool == var_218_int; // 0xb68 Eq
	if(var_219_bool == 0) goto Label_2942; // 0xb69 JumpB
	var_220_string = ""; // 0xb6a PushV
	var_220_string = "Neutral"; // 0xb6b MovS
	func_2652(var_37_cvector, var_220_string); // 0xb6c NEW_2
	var_221_int = 512246; // 0xb6e PushI
	SetMessage(var_221_int); // 0xb6f TObjFunc
	ClearReplies(); // 0xb71 TObjFunc
	var_222_int = 512248; // 0xb73 PushI
	var_223_int = 13405; // 0xb74 PushI
	var_224_int = 13404; // 0xb75 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xb76 TObjFunc
	var_225_int = 512247; // 0xb78 PushI
	var_226_int = 13409; // 0xb79 PushI
	var_227_int = 13403; // 0xb7a PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xb7b TObjFunc
	return 0; // 0xb7d Return
	
Label_2942:
	var_228_int = 13405; // 0xb7e PushI
	var_229_bool = var_36_bool == var_228_int; // 0xb7f Eq
	if(var_229_bool == 0) goto Label_2960; // 0xb80 JumpB
	var_230_string = ""; // 0xb81 PushV
	var_230_string = "Isee"; // 0xb82 MovS
	func_2652(var_37_cvector, var_230_string); // 0xb83 NEW_2
	var_231_int = 512249; // 0xb85 PushI
	SetMessage(var_231_int); // 0xb86 TObjFunc
	ClearReplies(); // 0xb88 TObjFunc
	var_232_int = 512250; // 0xb8a PushI
	var_233_int = 13407; // 0xb8b PushI
	var_234_int = 13406; // 0xb8c PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xb8d TObjFunc
	return 0; // 0xb8f Return
	
Label_2960:
	var_235_int = 13407; // 0xb90 PushI
	var_236_bool = var_36_bool == var_235_int; // 0xb91 Eq
	if(var_236_bool == 0) goto Label_2978; // 0xb92 JumpB
	var_237_string = ""; // 0xb93 PushV
	var_237_string = "Isee"; // 0xb94 MovS
	func_2652(var_37_cvector, var_237_string); // 0xb95 NEW_2
	var_238_int = 512251; // 0xb97 PushI
	SetMessage(var_238_int); // 0xb98 TObjFunc
	ClearReplies(); // 0xb9a TObjFunc
	var_239_int = 512252; // 0xb9c PushI
	var_240_int = 13409; // 0xb9d PushI
	var_241_int = 13408; // 0xb9e PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xb9f TObjFunc
	return 0; // 0xba1 Return
	
Label_2978:
	var_242_int = 13409; // 0xba2 PushI
	var_243_bool = var_36_bool == var_242_int; // 0xba3 Eq
	if(var_243_bool == 0) goto Label_2996; // 0xba4 JumpB
	var_244_string = ""; // 0xba5 PushV
	var_244_string = "Neutral"; // 0xba6 MovS
	func_2652(var_37_cvector, var_244_string); // 0xba7 NEW_2
	var_245_int = 512253; // 0xba9 PushI
	SetMessage(var_245_int); // 0xbaa TObjFunc
	ClearReplies(); // 0xbac TObjFunc
	var_246_int = 512254; // 0xbae PushI
	var_247_int = 13411; // 0xbaf PushI
	var_248_int = 13410; // 0xbb0 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xbb1 TObjFunc
	return 0; // 0xbb3 Return
	
Label_2996:
	var_249_int = 13411; // 0xbb4 PushI
	var_250_bool = var_36_bool == var_249_int; // 0xbb5 Eq
	if(var_250_bool == 0) goto Label_3014; // 0xbb6 JumpB
	var_251_string = ""; // 0xbb7 PushV
	var_251_string = "Neutral"; // 0xbb8 MovS
	func_2652(var_37_cvector, var_251_string); // 0xbb9 NEW_2
	var_252_int = 512255; // 0xbbb PushI
	SetMessage(var_252_int); // 0xbbc TObjFunc
	ClearReplies(); // 0xbbe TObjFunc
	var_253_int = 512256; // 0xbc0 PushI
	var_254_int = -1; // 0xbc1 PushI
	var_255_int = 13413; // 0xbc2 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xbc3 TObjFunc
	return 0; // 0xbc5 Return
	
Label_3014:
	var_256_int = 14647; // 0xbc6 PushI
	var_257_bool = var_36_bool == var_256_int; // 0xbc7 Eq
	if(var_257_bool == 0) goto Label_3042; // 0xbc8 JumpB
	var_258_string = ""; // 0xbc9 PushV
	var_258_string = "Isee"; // 0xbca MovS
	func_2652(var_37_cvector, var_258_string); // 0xbcb NEW_2
	var_259_int = 513413; // 0xbcd PushI
	SetMessage(var_259_int); // 0xbce TObjFunc
	ClearReplies(); // 0xbd0 TObjFunc
	var_260_int = 513415; // 0xbd2 PushI
	var_261_int = 14650; // 0xbd3 PushI
	var_262_int = 14649; // 0xbd4 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xbd5 TObjFunc
	var_263_int = 513417; // 0xbd7 PushI
	var_264_int = 14949; // 0xbd8 PushI
	var_265_int = 14652; // 0xbd9 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xbda TObjFunc
	var_266_int = 513414; // 0xbdc PushI
	var_267_int = 14650; // 0xbdd PushI
	var_268_int = 14648; // 0xbde PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xbdf TObjFunc
	return 0; // 0xbe1 Return
	
Label_3042:
	var_269_int = 14949; // 0xbe2 PushI
	var_270_bool = var_36_bool == var_269_int; // 0xbe3 Eq
	if(var_270_bool == 0) goto Label_3060; // 0xbe4 JumpB
	var_271_string = ""; // 0xbe5 PushV
	var_271_string = "Confusion"; // 0xbe6 MovS
	func_2652(var_37_cvector, var_271_string); // 0xbe7 NEW_2
	var_272_int = 513688; // 0xbe9 PushI
	SetMessage(var_272_int); // 0xbea TObjFunc
	ClearReplies(); // 0xbec TObjFunc
	var_273_int = 513689; // 0xbee PushI
	var_274_int = 14952; // 0xbef PushI
	var_275_int = 14951; // 0xbf0 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xbf1 TObjFunc
	return 0; // 0xbf3 Return
	
Label_3060:
	var_276_int = 14952; // 0xbf4 PushI
	var_277_bool = var_36_bool == var_276_int; // 0xbf5 Eq
	if(var_277_bool == 0) goto Label_3088; // 0xbf6 JumpB
	var_278_string = ""; // 0xbf7 PushV
	var_278_string = "Confusion"; // 0xbf8 MovS
	func_2652(var_37_cvector, var_278_string); // 0xbf9 NEW_2
	var_279_int = 513690; // 0xbfb PushI
	SetMessage(var_279_int); // 0xbfc TObjFunc
	ClearReplies(); // 0xbfe TObjFunc
	var_280_int = 513691; // 0xc00 PushI
	var_281_int = 14650; // 0xc01 PushI
	var_282_int = 14953; // 0xc02 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xc03 TObjFunc
	var_283_int = 513692; // 0xc05 PushI
	var_284_int = 14650; // 0xc06 PushI
	var_285_int = 14954; // 0xc07 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xc08 TObjFunc
	var_286_int = 513693; // 0xc0a PushI
	var_287_int = 14650; // 0xc0b PushI
	var_288_int = 14955; // 0xc0c PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xc0d TObjFunc
	return 0; // 0xc0f Return
	
Label_3088:
	var_289_int = 14650; // 0xc10 PushI
	var_290_bool = var_36_bool == var_289_int; // 0xc11 Eq
	if(var_290_bool == 0) goto Label_3106; // 0xc12 JumpB
	var_291_string = ""; // 0xc13 PushV
	var_291_string = "Isee"; // 0xc14 MovS
	func_2652(var_37_cvector, var_291_string); // 0xc15 NEW_2
	var_292_int = 513416; // 0xc17 PushI
	SetMessage(var_292_int); // 0xc18 TObjFunc
	ClearReplies(); // 0xc1a TObjFunc
	var_293_int = 513421; // 0xc1c PushI
	var_294_int = 14959; // 0xc1d PushI
	var_295_int = 14657; // 0xc1e PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xc1f TObjFunc
	return 0; // 0xc21 Return
	
Label_3106:
	var_296_int = 14959; // 0xc22 PushI
	var_297_bool = var_36_bool == var_296_int; // 0xc23 Eq
	if(var_297_bool == 0) goto Label_3134; // 0xc24 JumpB
	var_298_string = ""; // 0xc25 PushV
	var_298_string = "Isee"; // 0xc26 MovS
	func_2652(var_37_cvector, var_298_string); // 0xc27 NEW_2
	var_299_int = 513694; // 0xc29 PushI
	SetMessage(var_299_int); // 0xc2a TObjFunc
	ClearReplies(); // 0xc2c TObjFunc
	var_300_int = 513695; // 0xc2e PushI
	var_301_int = 14963; // 0xc2f PushI
	var_302_int = 14960; // 0xc30 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0xc31 TObjFunc
	var_303_int = 513696; // 0xc33 PushI
	var_304_int = 14963; // 0xc34 PushI
	var_305_int = 14961; // 0xc35 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0xc36 TObjFunc
	var_306_int = 513697; // 0xc38 PushI
	var_307_int = 14963; // 0xc39 PushI
	var_308_int = 14962; // 0xc3a PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xc3b TObjFunc
	return 0; // 0xc3d Return
	
Label_3134:
	var_309_int = 14963; // 0xc3e PushI
	var_310_bool = var_36_bool == var_309_int; // 0xc3f Eq
	if(var_310_bool == 0) goto Label_3157; // 0xc40 JumpB
	var_311_string = ""; // 0xc41 PushV
	var_311_string = "Neutral"; // 0xc42 MovS
	func_2652(var_37_cvector, var_311_string); // 0xc43 NEW_2
	var_312_int = 513698; // 0xc45 PushI
	SetMessage(var_312_int); // 0xc46 TObjFunc
	ClearReplies(); // 0xc48 TObjFunc
	var_313_int = 513699; // 0xc4a PushI
	var_314_int = 14970; // 0xc4b PushI
	var_315_int = 14964; // 0xc4c PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xc4d TObjFunc
	var_316_int = 513700; // 0xc4f PushI
	var_317_int = 14968; // 0xc50 PushI
	var_318_int = 14967; // 0xc51 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xc52 TObjFunc
	return 0; // 0xc54 Return
	
Label_3157:
	var_319_int = 14968; // 0xc55 PushI
	var_320_bool = var_36_bool == var_319_int; // 0xc56 Eq
	if(var_320_bool == 0) goto Label_3175; // 0xc57 JumpB
	var_321_string = ""; // 0xc58 PushV
	var_321_string = "Neutral"; // 0xc59 MovS
	func_2652(var_37_cvector, var_321_string); // 0xc5a NEW_2
	var_322_int = 513701; // 0xc5c PushI
	SetMessage(var_322_int); // 0xc5d TObjFunc
	ClearReplies(); // 0xc5f TObjFunc
	var_323_int = 513702; // 0xc61 PushI
	var_324_int = 14970; // 0xc62 PushI
	var_325_int = 14969; // 0xc63 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xc64 TObjFunc
	return 0; // 0xc66 Return
	
Label_3175:
	var_326_int = 14970; // 0xc67 PushI
	var_327_bool = var_36_bool == var_326_int; // 0xc68 Eq
	if(var_327_bool == 0) goto Label_3193; // 0xc69 JumpB
	var_328_string = ""; // 0xc6a PushV
	var_328_string = "Neutral"; // 0xc6b MovS
	func_2652(var_37_cvector, var_328_string); // 0xc6c NEW_2
	var_329_int = 513703; // 0xc6e PushI
	SetMessage(var_329_int); // 0xc6f TObjFunc
	ClearReplies(); // 0xc71 TObjFunc
	var_330_int = 513704; // 0xc73 PushI
	var_331_int = 14972; // 0xc74 PushI
	var_332_int = 14971; // 0xc75 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xc76 TObjFunc
	return 0; // 0xc78 Return
	
Label_3193:
	var_333_int = 14972; // 0xc79 PushI
	var_334_bool = var_36_bool == var_333_int; // 0xc7a Eq
	if(var_334_bool == 0) goto Label_3211; // 0xc7b JumpB
	var_335_string = ""; // 0xc7c PushV
	var_335_string = "Neutral"; // 0xc7d MovS
	func_2652(var_37_cvector, var_335_string); // 0xc7e NEW_2
	var_336_int = 513705; // 0xc80 PushI
	SetMessage(var_336_int); // 0xc81 TObjFunc
	ClearReplies(); // 0xc83 TObjFunc
	var_337_int = 513706; // 0xc85 PushI
	var_338_int = 14975; // 0xc86 PushI
	var_339_int = 14974; // 0xc87 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xc88 TObjFunc
	return 0; // 0xc8a Return
	
Label_3211:
	var_340_int = 14975; // 0xc8b PushI
	var_341_bool = var_36_bool == var_340_int; // 0xc8c Eq
	if(var_341_bool == 0) goto Label_3234; // 0xc8d JumpB
	var_342_string = ""; // 0xc8e PushV
	var_342_string = "Neutral"; // 0xc8f MovS
	func_2652(var_37_cvector, var_342_string); // 0xc90 NEW_2
	var_343_int = 513707; // 0xc92 PushI
	SetMessage(var_343_int); // 0xc93 TObjFunc
	ClearReplies(); // 0xc95 TObjFunc
	var_344_int = 513708; // 0xc97 PushI
	var_345_int = 14978; // 0xc98 PushI
	var_346_int = 14976; // 0xc99 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xc9a TObjFunc
	var_347_int = 513709; // 0xc9c PushI
	var_348_int = 14978; // 0xc9d PushI
	var_349_int = 14977; // 0xc9e PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xc9f TObjFunc
	return 0; // 0xca1 Return
	
Label_3234:
	var_350_int = 14978; // 0xca2 PushI
	var_351_bool = var_36_bool == var_350_int; // 0xca3 Eq
	if(var_351_bool == 0) goto Label_3257; // 0xca4 JumpB
	var_352_string = ""; // 0xca5 PushV
	var_352_string = "Neutral"; // 0xca6 MovS
	func_2652(var_37_cvector, var_352_string); // 0xca7 NEW_2
	var_353_int = 513710; // 0xca9 PushI
	SetMessage(var_353_int); // 0xcaa TObjFunc
	ClearReplies(); // 0xcac TObjFunc
	var_354_int = 513711; // 0xcae PushI
	var_355_int = -1; // 0xcaf PushI
	var_356_int = 14980; // 0xcb0 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xcb1 TObjFunc
	var_357_int = 535857; // 0xcb3 PushI
	var_358_int = 37559; // 0xcb4 PushI
	var_359_int = 37558; // 0xcb5 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xcb6 TObjFunc
	return 0; // 0xcb8 Return
	
Label_3257:
	var_360_int = 37559; // 0xcb9 PushI
	var_361_bool = var_36_bool == var_360_int; // 0xcba Eq
	if(var_361_bool == 0) goto Label_3275; // 0xcbb JumpB
	var_362_string = ""; // 0xcbc PushV
	var_362_string = "Neutral"; // 0xcbd MovS
	func_2652(var_37_cvector, var_362_string); // 0xcbe NEW_2
	var_363_int = 535858; // 0xcc0 PushI
	SetMessage(var_363_int); // 0xcc1 TObjFunc
	ClearReplies(); // 0xcc3 TObjFunc
	var_364_int = 535856; // 0xcc5 PushI
	var_365_int = -1; // 0xcc6 PushI
	var_366_int = 37557; // 0xcc7 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xcc8 TObjFunc
	return 0; // 0xcca Return
	
Label_3275:
	var_367_int = 37561; // 0xccb PushI
	var_368_bool = var_36_bool == var_367_int; // 0xccc Eq
	if(var_368_bool == 0) goto Label_3298; // 0xccd JumpB
	var_369_string = ""; // 0xcce PushV
	var_369_string = "Threat"; // 0xccf MovS
	func_2652(var_37_cvector, var_369_string); // 0xcd0 NEW_2
	var_370_int = 535860; // 0xcd2 PushI
	SetMessage(var_370_int); // 0xcd3 TObjFunc
	ClearReplies(); // 0xcd5 TObjFunc
	var_371_int = 535861; // 0xcd7 PushI
	var_372_int = 37563; // 0xcd8 PushI
	var_373_int = 37562; // 0xcd9 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xcda TObjFunc
	var_374_int = 535867; // 0xcdc PushI
	var_375_int = 37569; // 0xcdd PushI
	var_376_int = 37568; // 0xcde PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0xcdf TObjFunc
	return 0; // 0xce1 Return
	
Label_3298:
	var_377_int = 37569; // 0xce2 PushI
	var_378_bool = var_36_bool == var_377_int; // 0xce3 Eq
	if(var_378_bool == 0) goto Label_3321; // 0xce4 JumpB
	var_379_string = ""; // 0xce5 PushV
	var_379_string = "Threat"; // 0xce6 MovS
	func_2652(var_37_cvector, var_379_string); // 0xce7 NEW_2
	var_380_int = 535868; // 0xce9 PushI
	SetMessage(var_380_int); // 0xcea TObjFunc
	ClearReplies(); // 0xcec TObjFunc
	var_381_int = 535869; // 0xcee PushI
	var_382_int = 37563; // 0xcef PushI
	var_383_int = 37570; // 0xcf0 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xcf1 TObjFunc
	var_384_int = 535870; // 0xcf3 PushI
	var_385_int = -1; // 0xcf4 PushI
	var_386_int = 37571; // 0xcf5 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0xcf6 TObjFunc
	return 0; // 0xcf8 Return
	
Label_3321:
	var_387_int = 37563; // 0xcf9 PushI
	var_388_bool = var_36_bool == var_387_int; // 0xcfa Eq
	if(var_388_bool == 0) goto Label_3344; // 0xcfb JumpB
	var_389_string = ""; // 0xcfc PushV
	var_389_string = "Isee"; // 0xcfd MovS
	func_2652(var_37_cvector, var_389_string); // 0xcfe NEW_2
	var_390_int = 535862; // 0xd00 PushI
	SetMessage(var_390_int); // 0xd01 TObjFunc
	ClearReplies(); // 0xd03 TObjFunc
	var_391_int = 535863; // 0xd05 PushI
	var_392_int = 37565; // 0xd06 PushI
	var_393_int = 37564; // 0xd07 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xd08 TObjFunc
	var_394_int = 535871; // 0xd0a PushI
	var_395_int = 37565; // 0xd0b PushI
	var_396_int = 37573; // 0xd0c PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xd0d TObjFunc
	return 0; // 0xd0f Return
	
Label_3344:
	var_397_int = 37565; // 0xd10 PushI
	var_398_bool = var_36_bool == var_397_int; // 0xd11 Eq
	if(var_398_bool == 0) goto Label_3372; // 0xd12 JumpB
	var_399_string = ""; // 0xd13 PushV
	var_399_string = "Isee"; // 0xd14 MovS
	func_2652(var_37_cvector, var_399_string); // 0xd15 NEW_2
	var_400_int = 535864; // 0xd17 PushI
	SetMessage(var_400_int); // 0xd18 TObjFunc
	ClearReplies(); // 0xd1a TObjFunc
	var_401_int = 535876; // 0xd1c PushI
	var_402_int = 37581; // 0xd1d PushI
	var_403_int = 37580; // 0xd1e PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xd1f TObjFunc
	var_404_int = 535872; // 0xd21 PushI
	var_405_int = 37576; // 0xd22 PushI
	var_406_int = 37575; // 0xd23 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xd24 TObjFunc
	var_407_int = 535880; // 0xd26 PushI
	var_408_int = 37567; // 0xd27 PushI
	var_409_int = 37584; // 0xd28 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xd29 TObjFunc
	return 0; // 0xd2b Return
	
Label_3372:
	var_410_int = 37576; // 0xd2c PushI
	var_411_bool = var_36_bool == var_410_int; // 0xd2d Eq
	if(var_411_bool == 0) goto Label_3390; // 0xd2e JumpB
	var_412_string = ""; // 0xd2f PushV
	var_412_string = "Isee"; // 0xd30 MovS
	func_2652(var_37_cvector, var_412_string); // 0xd31 NEW_2
	var_413_int = 535873; // 0xd33 PushI
	SetMessage(var_413_int); // 0xd34 TObjFunc
	ClearReplies(); // 0xd36 TObjFunc
	var_414_int = 535874; // 0xd38 PushI
	var_415_int = 16357; // 0xd39 PushI
	var_416_int = 37577; // 0xd3a PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xd3b TObjFunc
	return 0; // 0xd3d Return
	
Label_3390:
	var_417_int = 37581; // 0xd3e PushI
	var_418_bool = var_36_bool == var_417_int; // 0xd3f Eq
	if(var_418_bool == 0) goto Label_3408; // 0xd40 JumpB
	var_419_string = ""; // 0xd41 PushV
	var_419_string = "Neutral"; // 0xd42 MovS
	func_2652(var_37_cvector, var_419_string); // 0xd43 NEW_2
	var_420_int = 535877; // 0xd45 PushI
	SetMessage(var_420_int); // 0xd46 TObjFunc
	ClearReplies(); // 0xd48 TObjFunc
	var_421_int = 535865; // 0xd4a PushI
	var_422_int = 37567; // 0xd4b PushI
	var_423_int = 37566; // 0xd4c PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xd4d TObjFunc
	return 0; // 0xd4f Return
	
Label_3408:
	var_424_int = 37567; // 0xd50 PushI
	var_425_bool = var_36_bool == var_424_int; // 0xd51 Eq
	if(var_425_bool == 0) goto Label_3426; // 0xd52 JumpB
	var_426_string = ""; // 0xd53 PushV
	var_426_string = "Threat"; // 0xd54 MovS
	func_2652(var_37_cvector, var_426_string); // 0xd55 NEW_2
	var_427_int = 535866; // 0xd57 PushI
	SetMessage(var_427_int); // 0xd58 TObjFunc
	ClearReplies(); // 0xd5a TObjFunc
	var_428_int = 515090; // 0xd5c PushI
	var_429_int = 16357; // 0xd5d PushI
	var_430_int = 16356; // 0xd5e PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xd5f TObjFunc
	return 0; // 0xd61 Return
	
Label_3426:
	var_431_int = 16357; // 0xd62 PushI
	var_432_bool = var_36_bool == var_431_int; // 0xd63 Eq
	if(var_432_bool == 0) goto Label_3449; // 0xd64 JumpB
	var_433_string = ""; // 0xd65 PushV
	var_433_string = "Threat"; // 0xd66 MovS
	func_2652(var_37_cvector, var_433_string); // 0xd67 NEW_2
	var_434_int = 515091; // 0xd69 PushI
	SetMessage(var_434_int); // 0xd6a TObjFunc
	ClearReplies(); // 0xd6c TObjFunc
	var_435_int = 535881; // 0xd6e PushI
	var_436_int = 16359; // 0xd6f PushI
	var_437_int = 37586; // 0xd70 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xd71 TObjFunc
	var_438_int = 515092; // 0xd73 PushI
	var_439_int = 16359; // 0xd74 PushI
	var_440_int = 16358; // 0xd75 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xd76 TObjFunc
	return 0; // 0xd78 Return
	
Label_3449:
	var_441_int = 16359; // 0xd79 PushI
	var_442_bool = var_36_bool == var_441_int; // 0xd7a Eq
	if(var_442_bool == 0) goto Label_3472; // 0xd7b JumpB
	var_443_string = ""; // 0xd7c PushV
	var_443_string = "Neutral"; // 0xd7d MovS
	func_2652(var_37_cvector, var_443_string); // 0xd7e NEW_2
	var_444_int = 515093; // 0xd80 PushI
	SetMessage(var_444_int); // 0xd81 TObjFunc
	ClearReplies(); // 0xd83 TObjFunc
	var_445_int = 515094; // 0xd85 PushI
	var_446_int = -1; // 0xd86 PushI
	var_447_int = 16360; // 0xd87 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xd88 TObjFunc
	var_448_int = 535875; // 0xd8a PushI
	var_449_int = -1; // 0xd8b PushI
	var_450_int = 37579; // 0xd8c PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xd8d TObjFunc
	return 0; // 0xd8f Return
	
Label_3472:
	var_3_string = 1; // 0xd90 TMovB
	var_451_bool = 0; // 0xd91 PushV
	func_7439(var_451_bool); // 0xd92 NEW_2
	if(var_451_bool == 0) goto Label_3480; // 0xd94 JumpB
	lshStopAnimation(); // 0xd95 Func
	goto Label_3482; // 0xd97 Jump
	
Label_3482:
	return 0; // 0xd9a Return
	
Label_3480:
	StopAnimation(); // 0xd98 Func
	
Label_3484:
	return 0; // 0xd9c Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xe97 PushI
	if(var_38_int == 0) goto Label_4425; // 0xe98 JumpB
	func_7247(); // 0xe9a NEW_2
	var_40_int = 14104; // 0xe9c PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xe9d Eq
	if(var_41_bool == 0) goto Label_3748; // 0xe9e JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xe9f PushV
	var_42_object = var_1_object; // 0xea0 MovT
	var_43_object = var_0_object; // 0xea1 MovT
	func_7923(); // 0xea2 NEW_2
	
Label_3748:
	var_99_int = 40830; // 0xea4 PushI
	var_100_bool = var_37_cvector == var_99_int; // 0xea5 Eq
	if(var_100_bool == 0) goto Label_3756; // 0xea6 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xea7 PushV
	var_101_object = var_1_object; // 0xea8 MovT
	var_102_object = var_0_object; // 0xea9 MovT
	func_7923(); // 0xeaa NEW_2
	
Label_3756:
	var_103_int = 14118; // 0xeac PushI
	var_104_bool = var_37_cvector == var_103_int; // 0xead Eq
	if(var_104_bool == 0) goto Label_3774; // 0xeae JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0xeaf PushV
	var_105_object = var_1_object; // 0xeb0 MovT
	var_106_object = var_0_object; // 0xeb1 MovT
	func_7960(); // 0xeb2 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0xeb4 PushV
	var_127_object = var_1_object; // 0xeb5 MovT
	var_128_object = var_0_object; // 0xeb6 MovT
	func_7600(); // 0xeb7 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0xeb9 PushV
	var_133_object = var_1_object; // 0xeba MovT
	var_134_object = var_0_object; // 0xebb MovT
	func_7657(); // 0xebc NEW_2
	
Label_3774:
	var_137_int = 40452; // 0xebe PushI
	var_138_bool = var_37_cvector == var_137_int; // 0xebf Eq
	if(var_138_bool == 0) goto Label_3792; // 0xec0 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0xec1 PushV
	var_139_object = var_1_object; // 0xec2 MovT
	var_140_object = var_0_object; // 0xec3 MovT
	func_7960(); // 0xec4 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0xec6 PushV
	var_141_object = var_1_object; // 0xec7 MovT
	var_142_object = var_0_object; // 0xec8 MovT
	func_7600(); // 0xec9 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0xecb PushV
	var_143_object = var_1_object; // 0xecc MovT
	var_144_object = var_0_object; // 0xecd MovT
	func_7657(); // 0xece NEW_2
	
Label_3792:
	var_145_int = 14114; // 0xed0 PushI
	var_146_bool = var_37_cvector == var_145_int; // 0xed1 Eq
	if(var_146_bool == 0) goto Label_3800; // 0xed2 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0xed3 PushV
	var_147_object = var_1_object; // 0xed4 MovT
	var_148_object = var_0_object; // 0xed5 MovT
	func_7990(); // 0xed6 NEW_2
	
Label_3800:
	var_151_int = 35712; // 0xed8 PushI
	var_152_bool = var_37_cvector == var_151_int; // 0xed9 Eq
	if(var_152_bool == 0) goto Label_3818; // 0xeda JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xedb PushV
	var_153_object = var_1_object; // 0xedc MovT
	var_154_object = var_0_object; // 0xedd MovT
	func_7504(); // 0xede NEW_2
	var_166_object = Obj(); var_167_object = Obj(); // 0xee0 PushV
	var_166_object = var_1_object; // 0xee1 MovT
	var_167_object = var_0_object; // 0xee2 MovT
	func_7441(); // 0xee3 NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0xee5 PushV
	var_170_object = var_1_object; // 0xee6 MovT
	var_171_object = var_0_object; // 0xee7 MovT
	func_7453(var_171_object); // 0xee8 NEW_2
	
Label_3818:
	var_191_int = 14101; // 0xeea PushI
	var_192_bool = var_36_bool == var_191_int; // 0xeeb Eq
	if(var_192_bool == 0) goto Label_3929; // 0xeec JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0xeed PushV
	var_194_object = var_1_object; // 0xeee MovT
	func_8411(var_194_object); // 0xeef NEW_2
	if(var_193_bool == 0) goto Label_3861; // 0xef1 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0xef2 PushV
	var_201_object = var_1_object; // 0xef3 MovT
	var_202_object = var_0_object; // 0xef4 MovT
	func_7954(); // 0xef5 NEW_2
	var_205_object = Obj(); var_206_object = Obj(); // 0xef7 PushV
	var_205_object = var_1_object; // 0xef8 MovT
	var_206_object = var_0_object; // 0xef9 MovT
	func_7542(); // 0xefa NEW_2
	var_209_string = ""; // 0xefc PushV
	var_209_string = "Neutral"; // 0xefd MovS
	func_3712(var_37_cvector, var_209_string); // 0xefe NEW_2
	var_226_int = 512899; // 0xf00 PushI
	SetMessage(var_226_int); // 0xf01 TObjFunc
	ClearReplies(); // 0xf03 TObjFunc
	var_227_int = 538546; // 0xf05 PushI
	var_228_int = 40428; // 0xf06 PushI
	var_229_int = 40427; // 0xf07 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xf08 TObjFunc
	var_230_int = 538571; // 0xf0a PushI
	var_231_int = 40458; // 0xf0b PushI
	var_232_int = 40456; // 0xf0c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xf0d TObjFunc
	var_233_int = 538572; // 0xf0f PushI
	var_234_int = 40428; // 0xf10 PushI
	var_235_int = 40457; // 0xf11 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xf12 TObjFunc
	return 0; // 0xf14 Return
	
Label_3861:
	var_236_string = ""; // 0xf15 PushV
	var_236_string = "Arrogance"; // 0xf16 MovS
	func_3712(var_37_cvector, var_236_string); // 0xf17 NEW_2
	var_237_int = 512905; // 0xf19 PushI
	SetMessage(var_237_int); // 0xf1a TObjFunc
	ClearReplies(); // 0xf1c TObjFunc
	var_238_bool = 0; // 0xf1e PushV
	var_238_bool = 0; // 0xf1f MovB
	var_239_bool = 0; var_240_object = Obj(); // 0xf20 PushV
	var_240_object = var_1_object; // 0xf21 MovT
	func_8447(var_240_object); // 0xf22 NEW_2
	if(var_239_bool == 0) goto Label_3883; // 0xf24 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0xf25 PushV
	var_246_object = var_1_object; // 0xf26 MovT
	func_8459(var_245_bool, var_246_object); // 0xf27 NEW_2
	if(var_245_bool == 0) goto Label_3883; // 0xf29 JumpB
	var_238_bool = 1; // 0xf2a MovB
	
Label_3883:
	if(var_238_bool == 0) goto Label_3889; // 0xf2b JumpB
	var_253_int = 512906; // 0xf2c PushI
	var_254_int = 40435; // 0xf2d PushI
	var_255_int = 14108; // 0xf2e PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xf2f TObjFunc
	
Label_3889:
	var_256_bool = 0; // 0xf31 PushV
	var_256_bool = 0; // 0xf32 MovB
	var_257_bool = 0; var_258_object = Obj(); // 0xf33 PushV
	var_258_object = var_1_object; // 0xf34 MovT
	func_8423(var_258_object); // 0xf35 NEW_2
	if(var_257_bool == 0) goto Label_3902; // 0xf37 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0xf38 PushV
	var_264_object = var_1_object; // 0xf39 MovT
	func_8435(var_264_object); // 0xf3a NEW_2
	if(var_263_bool == 0) goto Label_3902; // 0xf3c JumpB
	var_256_bool = 1; // 0xf3d MovB
	
Label_3902:
	if(var_256_bool == 0) goto Label_3908; // 0xf3e JumpB
	var_269_int = 512912; // 0xf3f PushI
	var_270_int = 14119; // 0xf40 PushI
	var_271_int = 14114; // 0xf41 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xf42 TObjFunc
	
Label_3908:
	var_272_bool = 0; var_273_object = Obj(); // 0xf44 PushV
	var_273_object = var_1_object; // 0xf45 MovT
	func_8107(var_273_object); // 0xf46 NEW_2
	if(var_272_bool == 0) goto Label_3918; // 0xf48 JumpB
	var_278_int = 534117; // 0xf49 PushI
	var_279_int = 35711; // 0xf4a PushI
	var_280_int = 35710; // 0xf4b PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xf4c TObjFunc
	
Label_3918:
	var_281_int = 512911; // 0xf4e PushI
	var_282_int = -1; // 0xf4f PushI
	var_283_int = 14113; // 0xf50 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xf51 TObjFunc
	var_284_int = 538502; // 0xf53 PushI
	var_285_int = -1; // 0xf54 PushI
	var_286_int = 40392; // 0xf55 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xf56 TObjFunc
	return 0; // 0xf58 Return
	
Label_3929:
	var_287_int = 35711; // 0xf59 PushI
	var_288_bool = var_36_bool == var_287_int; // 0xf5a Eq
	if(var_288_bool == 0) goto Label_3947; // 0xf5b JumpB
	var_289_string = ""; // 0xf5c PushV
	var_289_string = "Neutral"; // 0xf5d MovS
	func_3712(var_37_cvector, var_289_string); // 0xf5e NEW_2
	var_290_int = 534118; // 0xf60 PushI
	SetMessage(var_290_int); // 0xf61 TObjFunc
	ClearReplies(); // 0xf63 TObjFunc
	var_291_int = 536487; // 0xf65 PushI
	var_292_int = 38287; // 0xf66 PushI
	var_293_int = 38286; // 0xf67 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xf68 TObjFunc
	return 0; // 0xf6a Return
	
Label_3947:
	var_294_int = 38287; // 0xf6b PushI
	var_295_bool = var_36_bool == var_294_int; // 0xf6c Eq
	if(var_295_bool == 0) goto Label_3970; // 0xf6d JumpB
	var_296_string = ""; // 0xf6e PushV
	var_296_string = "Neutral"; // 0xf6f MovS
	func_3712(var_37_cvector, var_296_string); // 0xf70 NEW_2
	var_297_int = 536488; // 0xf72 PushI
	SetMessage(var_297_int); // 0xf73 TObjFunc
	ClearReplies(); // 0xf75 TObjFunc
	var_298_int = 536489; // 0xf77 PushI
	var_299_int = 38290; // 0xf78 PushI
	var_300_int = 38288; // 0xf79 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xf7a TObjFunc
	var_301_int = 536490; // 0xf7c PushI
	var_302_int = 38290; // 0xf7d PushI
	var_303_int = 38289; // 0xf7e PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xf7f TObjFunc
	return 0; // 0xf81 Return
	
Label_3970:
	var_304_int = 38290; // 0xf82 PushI
	var_305_bool = var_36_bool == var_304_int; // 0xf83 Eq
	if(var_305_bool == 0) goto Label_3988; // 0xf84 JumpB
	var_306_string = ""; // 0xf85 PushV
	var_306_string = "Threat"; // 0xf86 MovS
	func_3712(var_37_cvector, var_306_string); // 0xf87 NEW_2
	var_307_int = 536491; // 0xf89 PushI
	SetMessage(var_307_int); // 0xf8a TObjFunc
	ClearReplies(); // 0xf8c TObjFunc
	var_308_int = 536493; // 0xf8e PushI
	var_309_int = 38293; // 0xf8f PushI
	var_310_int = 38292; // 0xf90 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0xf91 TObjFunc
	return 0; // 0xf93 Return
	
Label_3988:
	var_311_int = 38293; // 0xf94 PushI
	var_312_bool = var_36_bool == var_311_int; // 0xf95 Eq
	if(var_312_bool == 0) goto Label_4006; // 0xf96 JumpB
	var_313_string = ""; // 0xf97 PushV
	var_313_string = "Isee"; // 0xf98 MovS
	func_3712(var_37_cvector, var_313_string); // 0xf99 NEW_2
	var_314_int = 536494; // 0xf9b PushI
	SetMessage(var_314_int); // 0xf9c TObjFunc
	ClearReplies(); // 0xf9e TObjFunc
	var_315_int = 534119; // 0xfa0 PushI
	var_316_int = -1; // 0xfa1 PushI
	var_317_int = 35712; // 0xfa2 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xfa3 TObjFunc
	return 0; // 0xfa5 Return
	
Label_4006:
	var_318_int = 14119; // 0xfa6 PushI
	var_319_bool = var_36_bool == var_318_int; // 0xfa7 Eq
	if(var_319_bool == 0) goto Label_4029; // 0xfa8 JumpB
	var_320_string = ""; // 0xfa9 PushV
	var_320_string = "Threat"; // 0xfaa MovS
	func_3712(var_37_cvector, var_320_string); // 0xfab NEW_2
	var_321_int = 512915; // 0xfad PushI
	SetMessage(var_321_int); // 0xfae TObjFunc
	ClearReplies(); // 0xfb0 TObjFunc
	var_322_int = 512916; // 0xfb2 PushI
	var_323_int = 14122; // 0xfb3 PushI
	var_324_int = 14120; // 0xfb4 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xfb5 TObjFunc
	var_325_int = 512917; // 0xfb7 PushI
	var_326_int = 14122; // 0xfb8 PushI
	var_327_int = 14121; // 0xfb9 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xfba TObjFunc
	return 0; // 0xfbc Return
	
Label_4029:
	var_328_int = 14122; // 0xfbd PushI
	var_329_bool = var_36_bool == var_328_int; // 0xfbe Eq
	if(var_329_bool == 0) goto Label_4052; // 0xfbf JumpB
	var_330_string = ""; // 0xfc0 PushV
	var_330_string = "Neutral"; // 0xfc1 MovS
	func_3712(var_37_cvector, var_330_string); // 0xfc2 NEW_2
	var_331_int = 512918; // 0xfc4 PushI
	SetMessage(var_331_int); // 0xfc5 TObjFunc
	ClearReplies(); // 0xfc7 TObjFunc
	var_332_int = 512919; // 0xfc9 PushI
	var_333_int = 14125; // 0xfca PushI
	var_334_int = 14124; // 0xfcb PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0xfcc TObjFunc
	var_335_int = 538564; // 0xfce PushI
	var_336_int = -1; // 0xfcf PushI
	var_337_int = 40449; // 0xfd0 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xfd1 TObjFunc
	return 0; // 0xfd3 Return
	
Label_4052:
	var_338_int = 14125; // 0xfd4 PushI
	var_339_bool = var_36_bool == var_338_int; // 0xfd5 Eq
	if(var_339_bool == 0) goto Label_4075; // 0xfd6 JumpB
	var_340_string = ""; // 0xfd7 PushV
	var_340_string = "Neutral"; // 0xfd8 MovS
	func_3712(var_37_cvector, var_340_string); // 0xfd9 NEW_2
	var_341_int = 512920; // 0xfdb PushI
	SetMessage(var_341_int); // 0xfdc TObjFunc
	ClearReplies(); // 0xfde TObjFunc
	var_342_int = 538568; // 0xfe0 PushI
	var_343_int = 40454; // 0xfe1 PushI
	var_344_int = 40453; // 0xfe2 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xfe3 TObjFunc
	var_345_int = 512921; // 0xfe5 PushI
	var_346_int = -1; // 0xfe6 PushI
	var_347_int = 14126; // 0xfe7 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xfe8 TObjFunc
	return 0; // 0xfea Return
	
Label_4075:
	var_348_int = 40454; // 0xfeb PushI
	var_349_bool = var_36_bool == var_348_int; // 0xfec Eq
	if(var_349_bool == 0) goto Label_4093; // 0xfed JumpB
	var_350_string = ""; // 0xfee PushV
	var_350_string = "Neutral"; // 0xfef MovS
	func_3712(var_37_cvector, var_350_string); // 0xff0 NEW_2
	var_351_int = 538569; // 0xff2 PushI
	SetMessage(var_351_int); // 0xff3 TObjFunc
	ClearReplies(); // 0xff5 TObjFunc
	var_352_int = 512922; // 0xff7 PushI
	var_353_int = 14128; // 0xff8 PushI
	var_354_int = 14127; // 0xff9 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xffa TObjFunc
	return 0; // 0xffc Return
	
Label_4093:
	var_355_int = 14128; // 0xffd PushI
	var_356_bool = var_36_bool == var_355_int; // 0xffe Eq
	if(var_356_bool == 0) goto Label_4116; // 0xfff JumpB
	var_357_string = ""; // 0x1000 PushV
	var_357_string = "Arrogance"; // 0x1001 MovS
	func_3712(var_37_cvector, var_357_string); // 0x1002 NEW_2
	var_358_int = 512923; // 0x1004 PushI
	SetMessage(var_358_int); // 0x1005 TObjFunc
	ClearReplies(); // 0x1007 TObjFunc
	var_359_int = 512924; // 0x1009 PushI
	var_360_int = -1; // 0x100a PushI
	var_361_int = 14129; // 0x100b PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x100c TObjFunc
	var_362_int = 538570; // 0x100e PushI
	var_363_int = -1; // 0x100f PushI
	var_364_int = 40455; // 0x1010 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x1011 TObjFunc
	return 0; // 0x1013 Return
	
Label_4116:
	var_365_int = 40435; // 0x1014 PushI
	var_366_bool = var_36_bool == var_365_int; // 0x1015 Eq
	if(var_366_bool == 0) goto Label_4139; // 0x1016 JumpB
	var_367_string = ""; // 0x1017 PushV
	var_367_string = "Threat"; // 0x1018 MovS
	func_3712(var_37_cvector, var_367_string); // 0x1019 NEW_2
	var_368_int = 538554; // 0x101b PushI
	SetMessage(var_368_int); // 0x101c TObjFunc
	ClearReplies(); // 0x101e TObjFunc
	var_369_int = 538555; // 0x1020 PushI
	var_370_int = 40437; // 0x1021 PushI
	var_371_int = 40436; // 0x1022 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x1023 TObjFunc
	var_372_int = 538558; // 0x1025 PushI
	var_373_int = 14109; // 0x1026 PushI
	var_374_int = 40439; // 0x1027 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x1028 TObjFunc
	return 0; // 0x102a Return
	
Label_4139:
	var_375_int = 40437; // 0x102b PushI
	var_376_bool = var_36_bool == var_375_int; // 0x102c Eq
	if(var_376_bool == 0) goto Label_4167; // 0x102d JumpB
	var_377_string = ""; // 0x102e PushV
	var_377_string = "Neutral"; // 0x102f MovS
	func_3712(var_37_cvector, var_377_string); // 0x1030 NEW_2
	var_378_int = 538556; // 0x1032 PushI
	SetMessage(var_378_int); // 0x1033 TObjFunc
	ClearReplies(); // 0x1035 TObjFunc
	var_379_int = 538557; // 0x1037 PushI
	var_380_int = 40442; // 0x1038 PushI
	var_381_int = 40438; // 0x1039 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x103a TObjFunc
	var_382_int = 538559; // 0x103c PushI
	var_383_int = 40442; // 0x103d PushI
	var_384_int = 40441; // 0x103e PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x103f TObjFunc
	var_385_int = 538562; // 0x1041 PushI
	var_386_int = 40442; // 0x1042 PushI
	var_387_int = 40444; // 0x1043 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x1044 TObjFunc
	return 0; // 0x1046 Return
	
Label_4167:
	var_388_int = 40442; // 0x1047 PushI
	var_389_bool = var_36_bool == var_388_int; // 0x1048 Eq
	if(var_389_bool == 0) goto Label_4190; // 0x1049 JumpB
	var_390_string = ""; // 0x104a PushV
	var_390_string = "Neutral"; // 0x104b MovS
	func_3712(var_37_cvector, var_390_string); // 0x104c NEW_2
	var_391_int = 538560; // 0x104e PushI
	SetMessage(var_391_int); // 0x104f TObjFunc
	ClearReplies(); // 0x1051 TObjFunc
	var_392_int = 538561; // 0x1053 PushI
	var_393_int = 14109; // 0x1054 PushI
	var_394_int = 40443; // 0x1055 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x1056 TObjFunc
	var_395_int = 538563; // 0x1058 PushI
	var_396_int = 14109; // 0x1059 PushI
	var_397_int = 40447; // 0x105a PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x105b TObjFunc
	return 0; // 0x105d Return
	
Label_4190:
	var_398_int = 14109; // 0x105e PushI
	var_399_bool = var_36_bool == var_398_int; // 0x105f Eq
	if(var_399_bool == 0) goto Label_4218; // 0x1060 JumpB
	var_400_string = ""; // 0x1061 PushV
	var_400_string = "Neutral"; // 0x1062 MovS
	func_3712(var_37_cvector, var_400_string); // 0x1063 NEW_2
	var_401_int = 512907; // 0x1065 PushI
	SetMessage(var_401_int); // 0x1066 TObjFunc
	ClearReplies(); // 0x1068 TObjFunc
	var_402_int = 512908; // 0x106a PushI
	var_403_int = 14115; // 0x106b PushI
	var_404_int = 14110; // 0x106c PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x106d TObjFunc
	var_405_int = 512909; // 0x106f PushI
	var_406_int = 14115; // 0x1070 PushI
	var_407_int = 14111; // 0x1071 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x1072 TObjFunc
	var_408_int = 512910; // 0x1074 PushI
	var_409_int = 14115; // 0x1075 PushI
	var_410_int = 14112; // 0x1076 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x1077 TObjFunc
	return 0; // 0x1079 Return
	
Label_4218:
	var_411_int = 14115; // 0x107a PushI
	var_412_bool = var_36_bool == var_411_int; // 0x107b Eq
	if(var_412_bool == 0) goto Label_4241; // 0x107c JumpB
	var_413_string = ""; // 0x107d PushV
	var_413_string = "Arrogance"; // 0x107e MovS
	func_3712(var_37_cvector, var_413_string); // 0x107f NEW_2
	var_414_int = 512913; // 0x1081 PushI
	SetMessage(var_414_int); // 0x1082 TObjFunc
	ClearReplies(); // 0x1084 TObjFunc
	var_415_int = 512914; // 0x1086 PushI
	var_416_int = -1; // 0x1087 PushI
	var_417_int = 14118; // 0x1088 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x1089 TObjFunc
	var_418_int = 538567; // 0x108b PushI
	var_419_int = -1; // 0x108c PushI
	var_420_int = 40452; // 0x108d PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x108e TObjFunc
	return 0; // 0x1090 Return
	
Label_4241:
	var_421_int = 40458; // 0x1091 PushI
	var_422_bool = var_36_bool == var_421_int; // 0x1092 Eq
	if(var_422_bool == 0) goto Label_4264; // 0x1093 JumpB
	var_423_string = ""; // 0x1094 PushV
	var_423_string = "Neutral"; // 0x1095 MovS
	func_3712(var_37_cvector, var_423_string); // 0x1096 NEW_2
	var_424_int = 538573; // 0x1098 PushI
	SetMessage(var_424_int); // 0x1099 TObjFunc
	ClearReplies(); // 0x109b TObjFunc
	var_425_int = 538873; // 0x109d PushI
	var_426_int = 40428; // 0x109e PushI
	var_427_int = 40810; // 0x109f PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x10a0 TObjFunc
	var_428_int = 538874; // 0x10a2 PushI
	var_429_int = 40428; // 0x10a3 PushI
	var_430_int = 40811; // 0x10a4 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x10a5 TObjFunc
	return 0; // 0x10a7 Return
	
Label_4264:
	var_431_int = 40428; // 0x10a8 PushI
	var_432_bool = var_36_bool == var_431_int; // 0x10a9 Eq
	if(var_432_bool == 0) goto Label_4282; // 0x10aa JumpB
	var_433_string = ""; // 0x10ab PushV
	var_433_string = "Neutral"; // 0x10ac MovS
	func_3712(var_37_cvector, var_433_string); // 0x10ad NEW_2
	var_434_int = 538547; // 0x10af PushI
	SetMessage(var_434_int); // 0x10b0 TObjFunc
	ClearReplies(); // 0x10b2 TObjFunc
	var_435_int = 538548; // 0x10b4 PushI
	var_436_int = 40430; // 0x10b5 PushI
	var_437_int = 40429; // 0x10b6 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x10b7 TObjFunc
	return 0; // 0x10b9 Return
	
Label_4282:
	var_438_int = 40817; // 0x10ba PushI
	var_439_bool = var_36_bool == var_438_int; // 0x10bb Eq
	if(var_439_bool == 0) goto Label_4285; // 0x10bc JumpB
	
Label_4285:
	var_440_int = 40819; // 0x10bd PushI
	var_441_bool = var_36_bool == var_440_int; // 0x10be Eq
	if(var_441_bool == 0) goto Label_4308; // 0x10bf JumpB
	var_442_string = ""; // 0x10c0 PushV
	var_442_string = "Neutral"; // 0x10c1 MovS
	func_3712(var_37_cvector, var_442_string); // 0x10c2 NEW_2
	var_443_int = 538879; // 0x10c4 PushI
	SetMessage(var_443_int); // 0x10c5 TObjFunc
	ClearReplies(); // 0x10c7 TObjFunc
	var_444_int = 538880; // 0x10c9 PushI
	var_445_int = 40430; // 0x10ca PushI
	var_446_int = 40820; // 0x10cb PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x10cc TObjFunc
	var_447_int = 538881; // 0x10ce PushI
	var_448_int = 40434; // 0x10cf PushI
	var_449_int = 40821; // 0x10d0 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x10d1 TObjFunc
	return 0; // 0x10d3 Return
	
Label_4308:
	var_450_int = 40430; // 0x10d4 PushI
	var_451_bool = var_36_bool == var_450_int; // 0x10d5 Eq
	if(var_451_bool == 0) goto Label_4331; // 0x10d6 JumpB
	var_452_string = ""; // 0x10d7 PushV
	var_452_string = "Neutral"; // 0x10d8 MovS
	func_3712(var_37_cvector, var_452_string); // 0x10d9 NEW_2
	var_453_int = 538549; // 0x10db PushI
	SetMessage(var_453_int); // 0x10dc TObjFunc
	ClearReplies(); // 0x10de TObjFunc
	var_454_int = 538550; // 0x10e0 PushI
	var_455_int = 40432; // 0x10e1 PushI
	var_456_int = 40431; // 0x10e2 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x10e3 TObjFunc
	var_457_int = 538882; // 0x10e5 PushI
	var_458_int = 40434; // 0x10e6 PushI
	var_459_int = 40823; // 0x10e7 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x10e8 TObjFunc
	return 0; // 0x10ea Return
	
Label_4331:
	var_460_int = 40432; // 0x10eb PushI
	var_461_bool = var_36_bool == var_460_int; // 0x10ec Eq
	if(var_461_bool == 0) goto Label_4349; // 0x10ed JumpB
	var_462_string = ""; // 0x10ee PushV
	var_462_string = "Neutral"; // 0x10ef MovS
	func_3712(var_37_cvector, var_462_string); // 0x10f0 NEW_2
	var_463_int = 538551; // 0x10f2 PushI
	SetMessage(var_463_int); // 0x10f3 TObjFunc
	ClearReplies(); // 0x10f5 TObjFunc
	var_464_int = 538552; // 0x10f7 PushI
	var_465_int = 40434; // 0x10f8 PushI
	var_466_int = 40433; // 0x10f9 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x10fa TObjFunc
	return 0; // 0x10fc Return
	
Label_4349:
	var_467_int = 40434; // 0x10fd PushI
	var_468_bool = var_36_bool == var_467_int; // 0x10fe Eq
	if(var_468_bool == 0) goto Label_4372; // 0x10ff JumpB
	var_469_string = ""; // 0x1100 PushV
	var_469_string = "Threat"; // 0x1101 MovS
	func_3712(var_37_cvector, var_469_string); // 0x1102 NEW_2
	var_470_int = 538553; // 0x1104 PushI
	SetMessage(var_470_int); // 0x1105 TObjFunc
	ClearReplies(); // 0x1107 TObjFunc
	var_471_int = 512900; // 0x1109 PushI
	var_472_int = 14103; // 0x110a PushI
	var_473_int = 14102; // 0x110b PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x110c TObjFunc
	var_474_int = 538883; // 0x110e PushI
	var_475_int = 14103; // 0x110f PushI
	var_476_int = 40826; // 0x1110 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x1111 TObjFunc
	return 0; // 0x1113 Return
	
Label_4372:
	var_477_int = 14103; // 0x1114 PushI
	var_478_bool = var_36_bool == var_477_int; // 0x1115 Eq
	if(var_478_bool == 0) goto Label_4395; // 0x1116 JumpB
	var_479_string = ""; // 0x1117 PushV
	var_479_string = "Threat"; // 0x1118 MovS
	func_3712(var_37_cvector, var_479_string); // 0x1119 NEW_2
	var_480_int = 512901; // 0x111b PushI
	SetMessage(var_480_int); // 0x111c TObjFunc
	ClearReplies(); // 0x111e TObjFunc
	var_481_int = 512902; // 0x1120 PushI
	var_482_int = -1; // 0x1121 PushI
	var_483_int = 14104; // 0x1122 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x1123 TObjFunc
	var_484_int = 512904; // 0x1125 PushI
	var_485_int = 40829; // 0x1126 PushI
	var_486_int = 14106; // 0x1127 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x1128 TObjFunc
	return 0; // 0x112a Return
	
Label_4395:
	var_487_int = 40829; // 0x112b PushI
	var_488_bool = var_36_bool == var_487_int; // 0x112c Eq
	if(var_488_bool == 0) goto Label_4413; // 0x112d JumpB
	var_489_string = ""; // 0x112e PushV
	var_489_string = "Neutral"; // 0x112f MovS
	func_3712(var_37_cvector, var_489_string); // 0x1130 NEW_2
	var_490_int = 538885; // 0x1132 PushI
	SetMessage(var_490_int); // 0x1133 TObjFunc
	ClearReplies(); // 0x1135 TObjFunc
	var_491_int = 538886; // 0x1137 PushI
	var_492_int = -1; // 0x1138 PushI
	var_493_int = 40830; // 0x1139 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x113a TObjFunc
	return 0; // 0x113c Return
	
Label_4413:
	var_3_string = 1; // 0x113d TMovB
	var_494_bool = 0; // 0x113e PushV
	func_7439(var_494_bool); // 0x113f NEW_2
	if(var_494_bool == 0) goto Label_4421; // 0x1141 JumpB
	lshStopAnimation(); // 0x1142 Func
	goto Label_4423; // 0x1144 Jump
	
Label_4423:
	return 0; // 0x1147 Return
	
Label_4421:
	StopAnimation(); // 0x1145 Func
	
Label_4425:
	return 0; // 0x1149 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x1244 PushI
	if(var_38_int == 0) goto Label_5695; // 0x1245 JumpB
	func_7247(); // 0x1247 NEW_2
	var_40_int = 15039; // 0x1249 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x124a Eq
	if(var_41_bool == 0) goto Label_4689; // 0x124b JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x124c PushV
	var_42_object = var_1_object; // 0x124d MovT
	var_43_object = var_0_object; // 0x124e MovT
	func_7560(); // 0x124f NEW_2
	
Label_4689:
	var_101_int = 15040; // 0x1251 PushI
	var_102_bool = var_37_cvector == var_101_int; // 0x1252 Eq
	if(var_102_bool == 0) goto Label_4697; // 0x1253 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x1254 PushV
	var_103_object = var_1_object; // 0x1255 MovT
	var_104_object = var_0_object; // 0x1256 MovT
	func_7560(); // 0x1257 NEW_2
	
Label_4697:
	var_105_int = 15079; // 0x1259 PushI
	var_106_bool = var_37_cvector == var_105_int; // 0x125a Eq
	if(var_106_bool == 0) goto Label_4705; // 0x125b JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x125c PushV
	var_107_object = var_1_object; // 0x125d MovT
	var_108_object = var_0_object; // 0x125e MovT
	func_7917(); // 0x125f NEW_2
	
Label_4705:
	var_111_int = 15046; // 0x1261 PushI
	var_112_bool = var_37_cvector == var_111_int; // 0x1262 Eq
	if(var_112_bool == 0) goto Label_4713; // 0x1263 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x1264 PushV
	var_113_object = var_1_object; // 0x1265 MovT
	var_114_object = var_0_object; // 0x1266 MovT
	func_7911(); // 0x1267 NEW_2
	
Label_4713:
	var_117_int = 40791; // 0x1269 PushI
	var_118_bool = var_37_cvector == var_117_int; // 0x126a Eq
	if(var_118_bool == 0) goto Label_4721; // 0x126b JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x126c PushV
	var_119_object = var_1_object; // 0x126d MovT
	var_120_object = var_0_object; // 0x126e MovT
	func_7548(); // 0x126f NEW_2
	
Label_4721:
	var_123_int = 40808; // 0x1271 PushI
	var_124_bool = var_37_cvector == var_123_int; // 0x1272 Eq
	if(var_124_bool == 0) goto Label_4729; // 0x1273 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x1274 PushV
	var_125_object = var_1_object; // 0x1275 MovT
	var_126_object = var_0_object; // 0x1276 MovT
	func_7663(var_126_object); // 0x1277 NEW_2
	
Label_4729:
	var_146_int = 42003; // 0x1279 PushI
	var_147_bool = var_37_cvector == var_146_int; // 0x127a Eq
	if(var_147_bool == 0) goto Label_4742; // 0x127b JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x127c PushV
	var_148_object = var_1_object; // 0x127d MovT
	var_149_object = var_0_object; // 0x127e MovT
	func_7590(); // 0x127f NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x1281 PushV
	var_164_object = var_1_object; // 0x1282 MovT
	var_165_object = var_0_object; // 0x1283 MovT
	func_7453(var_165_object); // 0x1284 NEW_2
	
Label_4742:
	var_169_int = 42004; // 0x1286 PushI
	var_170_bool = var_37_cvector == var_169_int; // 0x1287 Eq
	if(var_170_bool == 0) goto Label_4755; // 0x1288 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x1289 PushV
	var_171_object = var_1_object; // 0x128a MovT
	var_172_object = var_0_object; // 0x128b MovT
	func_7590(); // 0x128c NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x128e PushV
	var_173_object = var_1_object; // 0x128f MovT
	var_174_object = var_0_object; // 0x1290 MovT
	func_7663(var_174_object); // 0x1291 NEW_2
	
Label_4755:
	var_175_int = 15028; // 0x1293 PushI
	var_176_bool = var_36_bool == var_175_int; // 0x1294 Eq
	if(var_176_bool == 0) goto Label_4866; // 0x1295 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x1296 PushV
	var_178_object = var_1_object; // 0x1297 MovT
	func_8375(var_178_object); // 0x1298 NEW_2
	if(var_177_bool == 0) goto Label_4793; // 0x129a JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x129b PushV
	var_185_object = var_1_object; // 0x129c MovT
	var_186_object = var_0_object; // 0x129d MovT
	func_7905(); // 0x129e NEW_2
	var_189_object = Obj(); var_190_object = Obj(); // 0x12a0 PushV
	var_189_object = var_1_object; // 0x12a1 MovT
	var_190_object = var_0_object; // 0x12a2 MovT
	func_7554(); // 0x12a3 NEW_2
	var_193_string = ""; // 0x12a5 PushV
	var_193_string = "Neutral"; // 0x12a6 MovS
	func_4653(var_37_cvector, var_193_string); // 0x12a7 NEW_2
	var_210_int = 513802; // 0x12a9 PushI
	SetMessage(var_210_int); // 0x12aa TObjFunc
	ClearReplies(); // 0x12ac TObjFunc
	var_211_int = 513803; // 0x12ae PushI
	var_212_int = 15030; // 0x12af PushI
	var_213_int = 15029; // 0x12b0 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x12b1 TObjFunc
	var_214_int = 513815; // 0x12b3 PushI
	var_215_int = 15042; // 0x12b4 PushI
	var_216_int = 15041; // 0x12b5 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x12b6 TObjFunc
	return 0; // 0x12b8 Return
	
Label_4793:
	var_217_string = ""; // 0x12b9 PushV
	var_217_string = "Neutral"; // 0x12ba MovS
	func_4653(var_37_cvector, var_217_string); // 0x12bb NEW_2
	var_218_int = 513818; // 0x12bd PushI
	SetMessage(var_218_int); // 0x12be TObjFunc
	ClearReplies(); // 0x12c0 TObjFunc
	var_219_bool = 0; var_220_object = Obj(); // 0x12c2 PushV
	var_220_object = var_1_object; // 0x12c3 MovT
	func_8399(var_220_object); // 0x12c4 NEW_2
	if(var_219_bool == 0) goto Label_4812; // 0x12c6 JumpB
	var_225_int = 513852; // 0x12c7 PushI
	var_226_int = 15080; // 0x12c8 PushI
	var_227_int = 15079; // 0x12c9 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x12ca TObjFunc
	
Label_4812:
	var_228_bool = 0; // 0x12cc PushV
	var_228_bool = 0; // 0x12cd MovB
	var_229_bool = 0; var_230_object = Obj(); // 0x12ce PushV
	var_230_object = var_1_object; // 0x12cf MovT
	func_8387(var_230_object); // 0x12d0 NEW_2
	if(var_229_bool == 0) goto Label_4825; // 0x12d2 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x12d3 PushV
	var_236_object = var_1_object; // 0x12d4 MovT
	func_8327(var_236_object); // 0x12d5 NEW_2
	if(var_235_bool == 0) goto Label_4825; // 0x12d7 JumpB
	var_228_bool = 1; // 0x12d8 MovB
	
Label_4825:
	if(var_228_bool == 0) goto Label_4831; // 0x12d9 JumpB
	var_241_int = 513819; // 0x12da PushI
	var_242_int = 15047; // 0x12db PushI
	var_243_int = 15046; // 0x12dc PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x12dd TObjFunc
	
Label_4831:
	var_244_bool = 0; // 0x12df PushV
	var_244_bool = 0; // 0x12e0 MovB
	var_245_bool = 0; var_246_object = Obj(); // 0x12e1 PushV
	var_246_object = var_1_object; // 0x12e2 MovT
	func_8131(var_246_object); // 0x12e3 NEW_2
	if(var_245_bool == 0) goto Label_4844; // 0x12e5 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x12e6 PushV
	var_252_object = var_1_object; // 0x12e7 MovT
	func_8143(var_252_object); // 0x12e8 NEW_2
	if(var_251_bool == 0) goto Label_4844; // 0x12ea JumpB
	var_244_bool = 1; // 0x12eb MovB
	
Label_4844:
	if(var_244_bool == 0) goto Label_4850; // 0x12ec JumpB
	var_257_int = 538857; // 0x12ed PushI
	var_258_int = 40792; // 0x12ee PushI
	var_259_int = 40791; // 0x12ef PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x12f0 TObjFunc
	
Label_4850:
	var_260_bool = 0; var_261_object = Obj(); // 0x12f2 PushV
	var_261_object = var_1_object; // 0x12f3 MovT
	func_8155(var_261_object); // 0x12f4 NEW_2
	if(var_260_bool == 0) goto Label_4860; // 0x12f6 JumpB
	var_266_int = 540032; // 0x12f7 PushI
	var_267_int = 42000; // 0x12f8 PushI
	var_268_int = 41999; // 0x12f9 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x12fa TObjFunc
	
Label_4860:
	var_269_int = 513880; // 0x12fc PushI
	var_270_int = -1; // 0x12fd PushI
	var_271_int = 15107; // 0x12fe PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x12ff TObjFunc
	return 0; // 0x1301 Return
	
Label_4866:
	var_272_int = 42000; // 0x1302 PushI
	var_273_bool = var_36_bool == var_272_int; // 0x1303 Eq
	if(var_273_bool == 0) goto Label_4884; // 0x1304 JumpB
	var_274_string = ""; // 0x1305 PushV
	var_274_string = "Confusion"; // 0x1306 MovS
	func_4653(var_37_cvector, var_274_string); // 0x1307 NEW_2
	var_275_int = 540033; // 0x1309 PushI
	SetMessage(var_275_int); // 0x130a TObjFunc
	ClearReplies(); // 0x130c TObjFunc
	var_276_int = 540034; // 0x130e PushI
	var_277_int = 42002; // 0x130f PushI
	var_278_int = 42001; // 0x1310 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x1311 TObjFunc
	return 0; // 0x1313 Return
	
Label_4884:
	var_279_int = 42002; // 0x1314 PushI
	var_280_bool = var_36_bool == var_279_int; // 0x1315 Eq
	if(var_280_bool == 0) goto Label_4907; // 0x1316 JumpB
	var_281_string = ""; // 0x1317 PushV
	var_281_string = "Confusion"; // 0x1318 MovS
	func_4653(var_37_cvector, var_281_string); // 0x1319 NEW_2
	var_282_int = 540035; // 0x131b PushI
	SetMessage(var_282_int); // 0x131c TObjFunc
	ClearReplies(); // 0x131e TObjFunc
	var_283_int = 540036; // 0x1320 PushI
	var_284_int = -1; // 0x1321 PushI
	var_285_int = 42003; // 0x1322 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x1323 TObjFunc
	var_286_int = 540037; // 0x1325 PushI
	var_287_int = -1; // 0x1326 PushI
	var_288_int = 42004; // 0x1327 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x1328 TObjFunc
	return 0; // 0x132a Return
	
Label_4907:
	var_289_int = 40792; // 0x132b PushI
	var_290_bool = var_36_bool == var_289_int; // 0x132c Eq
	if(var_290_bool == 0) goto Label_4935; // 0x132d JumpB
	var_291_string = ""; // 0x132e PushV
	var_291_string = "Neutral"; // 0x132f MovS
	func_4653(var_37_cvector, var_291_string); // 0x1330 NEW_2
	var_292_int = 538858; // 0x1332 PushI
	SetMessage(var_292_int); // 0x1333 TObjFunc
	ClearReplies(); // 0x1335 TObjFunc
	var_293_int = 538859; // 0x1337 PushI
	var_294_int = 40796; // 0x1338 PushI
	var_295_int = 40793; // 0x1339 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x133a TObjFunc
	var_296_int = 538861; // 0x133c PushI
	var_297_int = 40796; // 0x133d PushI
	var_298_int = 40795; // 0x133e PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x133f TObjFunc
	var_299_int = 538860; // 0x1341 PushI
	var_300_int = 40799; // 0x1342 PushI
	var_301_int = 40794; // 0x1343 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x1344 TObjFunc
	return 0; // 0x1346 Return
	
Label_4935:
	var_302_int = 40799; // 0x1347 PushI
	var_303_bool = var_36_bool == var_302_int; // 0x1348 Eq
	if(var_303_bool == 0) goto Label_4953; // 0x1349 JumpB
	var_304_string = ""; // 0x134a PushV
	var_304_string = "Neutral"; // 0x134b MovS
	func_4653(var_37_cvector, var_304_string); // 0x134c NEW_2
	var_305_int = 538865; // 0x134e PushI
	SetMessage(var_305_int); // 0x134f TObjFunc
	ClearReplies(); // 0x1351 TObjFunc
	var_306_int = 538866; // 0x1353 PushI
	var_307_int = 40802; // 0x1354 PushI
	var_308_int = 40801; // 0x1355 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x1356 TObjFunc
	return 0; // 0x1358 Return
	
Label_4953:
	var_309_int = 40796; // 0x1359 PushI
	var_310_bool = var_36_bool == var_309_int; // 0x135a Eq
	if(var_310_bool == 0) goto Label_4976; // 0x135b JumpB
	var_311_string = ""; // 0x135c PushV
	var_311_string = "Arrogance"; // 0x135d MovS
	func_4653(var_37_cvector, var_311_string); // 0x135e NEW_2
	var_312_int = 538862; // 0x1360 PushI
	SetMessage(var_312_int); // 0x1361 TObjFunc
	ClearReplies(); // 0x1363 TObjFunc
	var_313_int = 538864; // 0x1365 PushI
	var_314_int = 40802; // 0x1366 PushI
	var_315_int = 40798; // 0x1367 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x1368 TObjFunc
	var_316_int = 538863; // 0x136a PushI
	var_317_int = -1; // 0x136b PushI
	var_318_int = 40797; // 0x136c PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x136d TObjFunc
	return 0; // 0x136f Return
	
Label_4976:
	var_319_int = 40802; // 0x1370 PushI
	var_320_bool = var_36_bool == var_319_int; // 0x1371 Eq
	if(var_320_bool == 0) goto Label_4999; // 0x1372 JumpB
	var_321_string = ""; // 0x1373 PushV
	var_321_string = "Neutral"; // 0x1374 MovS
	func_4653(var_37_cvector, var_321_string); // 0x1375 NEW_2
	var_322_int = 538867; // 0x1377 PushI
	SetMessage(var_322_int); // 0x1378 TObjFunc
	ClearReplies(); // 0x137a TObjFunc
	var_323_int = 538868; // 0x137c PushI
	var_324_int = 40806; // 0x137d PushI
	var_325_int = 40804; // 0x137e PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x137f TObjFunc
	var_326_int = 538869; // 0x1381 PushI
	var_327_int = 40806; // 0x1382 PushI
	var_328_int = 40805; // 0x1383 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x1384 TObjFunc
	return 0; // 0x1386 Return
	
Label_4999:
	var_329_int = 40806; // 0x1387 PushI
	var_330_bool = var_36_bool == var_329_int; // 0x1388 Eq
	if(var_330_bool == 0) goto Label_5022; // 0x1389 JumpB
	var_331_string = ""; // 0x138a PushV
	var_331_string = "Neutral"; // 0x138b MovS
	func_4653(var_37_cvector, var_331_string); // 0x138c NEW_2
	var_332_int = 538870; // 0x138e PushI
	SetMessage(var_332_int); // 0x138f TObjFunc
	ClearReplies(); // 0x1391 TObjFunc
	var_333_int = 538871; // 0x1393 PushI
	var_334_int = -1; // 0x1394 PushI
	var_335_int = 40808; // 0x1395 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x1396 TObjFunc
	var_336_int = 538872; // 0x1398 PushI
	var_337_int = -1; // 0x1399 PushI
	var_338_int = 40809; // 0x139a PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x139b TObjFunc
	return 0; // 0x139d Return
	
Label_5022:
	var_339_int = 15047; // 0x139e PushI
	var_340_bool = var_36_bool == var_339_int; // 0x139f Eq
	if(var_340_bool == 0) goto Label_5045; // 0x13a0 JumpB
	var_341_string = ""; // 0x13a1 PushV
	var_341_string = "Isee"; // 0x13a2 MovS
	func_4653(var_37_cvector, var_341_string); // 0x13a3 NEW_2
	var_342_int = 513820; // 0x13a5 PushI
	SetMessage(var_342_int); // 0x13a6 TObjFunc
	ClearReplies(); // 0x13a8 TObjFunc
	var_343_int = 513821; // 0x13aa PushI
	var_344_int = 15049; // 0x13ab PushI
	var_345_int = 15048; // 0x13ac PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x13ad TObjFunc
	var_346_int = 513839; // 0x13af PushI
	var_347_int = 15067; // 0x13b0 PushI
	var_348_int = 15066; // 0x13b1 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x13b2 TObjFunc
	return 0; // 0x13b4 Return
	
Label_5045:
	var_349_int = 15067; // 0x13b5 PushI
	var_350_bool = var_36_bool == var_349_int; // 0x13b6 Eq
	if(var_350_bool == 0) goto Label_5063; // 0x13b7 JumpB
	var_351_string = ""; // 0x13b8 PushV
	var_351_string = "Neutral"; // 0x13b9 MovS
	func_4653(var_37_cvector, var_351_string); // 0x13ba NEW_2
	var_352_int = 513840; // 0x13bc PushI
	SetMessage(var_352_int); // 0x13bd TObjFunc
	ClearReplies(); // 0x13bf TObjFunc
	var_353_int = 513841; // 0x13c1 PushI
	var_354_int = 15057; // 0x13c2 PushI
	var_355_int = 15068; // 0x13c3 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x13c4 TObjFunc
	return 0; // 0x13c6 Return
	
Label_5063:
	var_356_int = 15049; // 0x13c7 PushI
	var_357_bool = var_36_bool == var_356_int; // 0x13c8 Eq
	if(var_357_bool == 0) goto Label_5086; // 0x13c9 JumpB
	var_358_string = ""; // 0x13ca PushV
	var_358_string = "Isee"; // 0x13cb MovS
	func_4653(var_37_cvector, var_358_string); // 0x13cc NEW_2
	var_359_int = 513822; // 0x13ce PushI
	SetMessage(var_359_int); // 0x13cf TObjFunc
	ClearReplies(); // 0x13d1 TObjFunc
	var_360_int = 513823; // 0x13d3 PushI
	var_361_int = 15051; // 0x13d4 PushI
	var_362_int = 15050; // 0x13d5 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x13d6 TObjFunc
	var_363_int = 513842; // 0x13d8 PushI
	var_364_int = 15070; // 0x13d9 PushI
	var_365_int = 15069; // 0x13da PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x13db TObjFunc
	return 0; // 0x13dd Return
	
Label_5086:
	var_366_int = 15070; // 0x13de PushI
	var_367_bool = var_36_bool == var_366_int; // 0x13df Eq
	if(var_367_bool == 0) goto Label_5104; // 0x13e0 JumpB
	var_368_string = ""; // 0x13e1 PushV
	var_368_string = "Neutral"; // 0x13e2 MovS
	func_4653(var_37_cvector, var_368_string); // 0x13e3 NEW_2
	var_369_int = 513843; // 0x13e5 PushI
	SetMessage(var_369_int); // 0x13e6 TObjFunc
	ClearReplies(); // 0x13e8 TObjFunc
	var_370_int = 513844; // 0x13ea PushI
	var_371_int = 15072; // 0x13eb PushI
	var_372_int = 15071; // 0x13ec PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x13ed TObjFunc
	return 0; // 0x13ef Return
	
Label_5104:
	var_373_int = 15072; // 0x13f0 PushI
	var_374_bool = var_36_bool == var_373_int; // 0x13f1 Eq
	if(var_374_bool == 0) goto Label_5127; // 0x13f2 JumpB
	var_375_string = ""; // 0x13f3 PushV
	var_375_string = "Neutral"; // 0x13f4 MovS
	func_4653(var_37_cvector, var_375_string); // 0x13f5 NEW_2
	var_376_int = 513845; // 0x13f7 PushI
	SetMessage(var_376_int); // 0x13f8 TObjFunc
	ClearReplies(); // 0x13fa TObjFunc
	var_377_int = 513846; // 0x13fc PushI
	var_378_int = 15074; // 0x13fd PushI
	var_379_int = 15073; // 0x13fe PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x13ff TObjFunc
	var_380_int = 513849; // 0x1401 PushI
	var_381_int = 15077; // 0x1402 PushI
	var_382_int = 15076; // 0x1403 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x1404 TObjFunc
	return 0; // 0x1406 Return
	
Label_5127:
	var_383_int = 15077; // 0x1407 PushI
	var_384_bool = var_36_bool == var_383_int; // 0x1408 Eq
	if(var_384_bool == 0) goto Label_5145; // 0x1409 JumpB
	var_385_string = ""; // 0x140a PushV
	var_385_string = "Neutral"; // 0x140b MovS
	func_4653(var_37_cvector, var_385_string); // 0x140c NEW_2
	var_386_int = 513850; // 0x140e PushI
	SetMessage(var_386_int); // 0x140f TObjFunc
	ClearReplies(); // 0x1411 TObjFunc
	var_387_int = 513851; // 0x1413 PushI
	var_388_int = -1; // 0x1414 PushI
	var_389_int = 15078; // 0x1415 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x1416 TObjFunc
	return 0; // 0x1418 Return
	
Label_5145:
	var_390_int = 15074; // 0x1419 PushI
	var_391_bool = var_36_bool == var_390_int; // 0x141a Eq
	if(var_391_bool == 0) goto Label_5163; // 0x141b JumpB
	var_392_string = ""; // 0x141c PushV
	var_392_string = "Neutral"; // 0x141d MovS
	func_4653(var_37_cvector, var_392_string); // 0x141e NEW_2
	var_393_int = 513847; // 0x1420 PushI
	SetMessage(var_393_int); // 0x1421 TObjFunc
	ClearReplies(); // 0x1423 TObjFunc
	var_394_int = 513848; // 0x1425 PushI
	var_395_int = -1; // 0x1426 PushI
	var_396_int = 15075; // 0x1427 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1428 TObjFunc
	return 0; // 0x142a Return
	
Label_5163:
	var_397_int = 15051; // 0x142b PushI
	var_398_bool = var_36_bool == var_397_int; // 0x142c Eq
	if(var_398_bool == 0) goto Label_5186; // 0x142d JumpB
	var_399_string = ""; // 0x142e PushV
	var_399_string = "Neutral"; // 0x142f MovS
	func_4653(var_37_cvector, var_399_string); // 0x1430 NEW_2
	var_400_int = 513824; // 0x1432 PushI
	SetMessage(var_400_int); // 0x1433 TObjFunc
	ClearReplies(); // 0x1435 TObjFunc
	var_401_int = 513827; // 0x1437 PushI
	var_402_int = 15055; // 0x1438 PushI
	var_403_int = 15054; // 0x1439 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x143a TObjFunc
	var_404_int = 513825; // 0x143c PushI
	var_405_int = 15053; // 0x143d PushI
	var_406_int = 15052; // 0x143e PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x143f TObjFunc
	return 0; // 0x1441 Return
	
Label_5186:
	var_407_int = 15053; // 0x1442 PushI
	var_408_bool = var_36_bool == var_407_int; // 0x1443 Eq
	if(var_408_bool == 0) goto Label_5204; // 0x1444 JumpB
	var_409_string = ""; // 0x1445 PushV
	var_409_string = "Neutral"; // 0x1446 MovS
	func_4653(var_37_cvector, var_409_string); // 0x1447 NEW_2
	var_410_int = 513826; // 0x1449 PushI
	SetMessage(var_410_int); // 0x144a TObjFunc
	ClearReplies(); // 0x144c TObjFunc
	var_411_int = 529820; // 0x144e PushI
	var_412_int = 15057; // 0x144f PushI
	var_413_int = 31268; // 0x1450 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x1451 TObjFunc
	return 0; // 0x1453 Return
	
Label_5204:
	var_414_int = 15055; // 0x1454 PushI
	var_415_bool = var_36_bool == var_414_int; // 0x1455 Eq
	if(var_415_bool == 0) goto Label_5222; // 0x1456 JumpB
	var_416_string = ""; // 0x1457 PushV
	var_416_string = "Arrogance"; // 0x1458 MovS
	func_4653(var_37_cvector, var_416_string); // 0x1459 NEW_2
	var_417_int = 513828; // 0x145b PushI
	SetMessage(var_417_int); // 0x145c TObjFunc
	ClearReplies(); // 0x145e TObjFunc
	var_418_int = 513829; // 0x1460 PushI
	var_419_int = 15057; // 0x1461 PushI
	var_420_int = 15056; // 0x1462 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x1463 TObjFunc
	return 0; // 0x1465 Return
	
Label_5222:
	var_421_int = 15057; // 0x1466 PushI
	var_422_bool = var_36_bool == var_421_int; // 0x1467 Eq
	if(var_422_bool == 0) goto Label_5245; // 0x1468 JumpB
	var_423_string = ""; // 0x1469 PushV
	var_423_string = "Arrogance"; // 0x146a MovS
	func_4653(var_37_cvector, var_423_string); // 0x146b NEW_2
	var_424_int = 513830; // 0x146d PushI
	SetMessage(var_424_int); // 0x146e TObjFunc
	ClearReplies(); // 0x1470 TObjFunc
	var_425_int = 513831; // 0x1472 PushI
	var_426_int = 15059; // 0x1473 PushI
	var_427_int = 15058; // 0x1474 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x1475 TObjFunc
	var_428_int = 513838; // 0x1477 PushI
	var_429_int = -1; // 0x1478 PushI
	var_430_int = 15065; // 0x1479 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x147a TObjFunc
	return 0; // 0x147c Return
	
Label_5245:
	var_431_int = 15059; // 0x147d PushI
	var_432_bool = var_36_bool == var_431_int; // 0x147e Eq
	if(var_432_bool == 0) goto Label_5263; // 0x147f JumpB
	var_433_string = ""; // 0x1480 PushV
	var_433_string = "Neutral"; // 0x1481 MovS
	func_4653(var_37_cvector, var_433_string); // 0x1482 NEW_2
	var_434_int = 513832; // 0x1484 PushI
	SetMessage(var_434_int); // 0x1485 TObjFunc
	ClearReplies(); // 0x1487 TObjFunc
	var_435_int = 513833; // 0x1489 PushI
	var_436_int = 15061; // 0x148a PushI
	var_437_int = 15060; // 0x148b PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x148c TObjFunc
	return 0; // 0x148e Return
	
Label_5263:
	var_438_int = 15061; // 0x148f PushI
	var_439_bool = var_36_bool == var_438_int; // 0x1490 Eq
	if(var_439_bool == 0) goto Label_5281; // 0x1491 JumpB
	var_440_string = ""; // 0x1492 PushV
	var_440_string = "Neutral"; // 0x1493 MovS
	func_4653(var_37_cvector, var_440_string); // 0x1494 NEW_2
	var_441_int = 513834; // 0x1496 PushI
	SetMessage(var_441_int); // 0x1497 TObjFunc
	ClearReplies(); // 0x1499 TObjFunc
	var_442_int = 513835; // 0x149b PushI
	var_443_int = 15063; // 0x149c PushI
	var_444_int = 15062; // 0x149d PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x149e TObjFunc
	return 0; // 0x14a0 Return
	
Label_5281:
	var_445_int = 15063; // 0x14a1 PushI
	var_446_bool = var_36_bool == var_445_int; // 0x14a2 Eq
	if(var_446_bool == 0) goto Label_5299; // 0x14a3 JumpB
	var_447_string = ""; // 0x14a4 PushV
	var_447_string = "Neutral"; // 0x14a5 MovS
	func_4653(var_37_cvector, var_447_string); // 0x14a6 NEW_2
	var_448_int = 513836; // 0x14a8 PushI
	SetMessage(var_448_int); // 0x14a9 TObjFunc
	ClearReplies(); // 0x14ab TObjFunc
	var_449_int = 513837; // 0x14ad PushI
	var_450_int = -1; // 0x14ae PushI
	var_451_int = 15064; // 0x14af PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x14b0 TObjFunc
	return 0; // 0x14b2 Return
	
Label_5299:
	var_452_int = 15080; // 0x14b3 PushI
	var_453_bool = var_36_bool == var_452_int; // 0x14b4 Eq
	if(var_453_bool == 0) goto Label_5322; // 0x14b5 JumpB
	var_454_string = ""; // 0x14b6 PushV
	var_454_string = "Arrogance"; // 0x14b7 MovS
	func_4653(var_37_cvector, var_454_string); // 0x14b8 NEW_2
	var_455_int = 513853; // 0x14ba PushI
	SetMessage(var_455_int); // 0x14bb TObjFunc
	ClearReplies(); // 0x14bd TObjFunc
	var_456_int = 513854; // 0x14bf PushI
	var_457_int = 15082; // 0x14c0 PushI
	var_458_int = 15081; // 0x14c1 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x14c2 TObjFunc
	var_459_int = 538731; // 0x14c4 PushI
	var_460_int = -1; // 0x14c5 PushI
	var_461_int = 40641; // 0x14c6 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x14c7 TObjFunc
	return 0; // 0x14c9 Return
	
Label_5322:
	var_462_int = 15082; // 0x14ca PushI
	var_463_bool = var_36_bool == var_462_int; // 0x14cb Eq
	if(var_463_bool == 0) goto Label_5350; // 0x14cc JumpB
	var_464_string = ""; // 0x14cd PushV
	var_464_string = "Arrogance"; // 0x14ce MovS
	func_4653(var_37_cvector, var_464_string); // 0x14cf NEW_2
	var_465_int = 513855; // 0x14d1 PushI
	SetMessage(var_465_int); // 0x14d2 TObjFunc
	ClearReplies(); // 0x14d4 TObjFunc
	var_466_int = 513856; // 0x14d6 PushI
	var_467_int = 40636; // 0x14d7 PushI
	var_468_int = 15083; // 0x14d8 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x14d9 TObjFunc
	var_469_int = 513857; // 0x14db PushI
	var_470_int = 15085; // 0x14dc PushI
	var_471_int = 15084; // 0x14dd PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x14de TObjFunc
	var_472_int = 538732; // 0x14e0 PushI
	var_473_int = 15085; // 0x14e1 PushI
	var_474_int = 40642; // 0x14e2 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x14e3 TObjFunc
	return 0; // 0x14e5 Return
	
Label_5350:
	var_475_int = 15085; // 0x14e6 PushI
	var_476_bool = var_36_bool == var_475_int; // 0x14e7 Eq
	if(var_476_bool == 0) goto Label_5373; // 0x14e8 JumpB
	var_477_string = ""; // 0x14e9 PushV
	var_477_string = "Neutral"; // 0x14ea MovS
	func_4653(var_37_cvector, var_477_string); // 0x14eb NEW_2
	var_478_int = 513858; // 0x14ed PushI
	SetMessage(var_478_int); // 0x14ee TObjFunc
	ClearReplies(); // 0x14f0 TObjFunc
	var_479_int = 513859; // 0x14f2 PushI
	var_480_int = 15090; // 0x14f3 PushI
	var_481_int = 15086; // 0x14f4 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x14f5 TObjFunc
	var_482_int = 513860; // 0x14f7 PushI
	var_483_int = 15088; // 0x14f8 PushI
	var_484_int = 15087; // 0x14f9 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x14fa TObjFunc
	return 0; // 0x14fc Return
	
Label_5373:
	var_485_int = 15088; // 0x14fd PushI
	var_486_bool = var_36_bool == var_485_int; // 0x14fe Eq
	if(var_486_bool == 0) goto Label_5396; // 0x14ff JumpB
	var_487_string = ""; // 0x1500 PushV
	var_487_string = "Neutral"; // 0x1501 MovS
	func_4653(var_37_cvector, var_487_string); // 0x1502 NEW_2
	var_488_int = 513861; // 0x1504 PushI
	SetMessage(var_488_int); // 0x1505 TObjFunc
	ClearReplies(); // 0x1507 TObjFunc
	var_489_int = 513862; // 0x1509 PushI
	var_490_int = 15090; // 0x150a PushI
	var_491_int = 15089; // 0x150b PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x150c TObjFunc
	var_492_int = 513864; // 0x150e PushI
	var_493_int = 40636; // 0x150f PushI
	var_494_int = 15091; // 0x1510 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x1511 TObjFunc
	return 0; // 0x1513 Return
	
Label_5396:
	var_495_int = 15090; // 0x1514 PushI
	var_496_bool = var_36_bool == var_495_int; // 0x1515 Eq
	if(var_496_bool == 0) goto Label_5414; // 0x1516 JumpB
	var_497_string = ""; // 0x1517 PushV
	var_497_string = "Neutral"; // 0x1518 MovS
	func_4653(var_37_cvector, var_497_string); // 0x1519 NEW_2
	var_498_int = 513863; // 0x151b PushI
	SetMessage(var_498_int); // 0x151c TObjFunc
	ClearReplies(); // 0x151e TObjFunc
	var_499_int = 529821; // 0x1520 PushI
	var_500_int = 40636; // 0x1521 PushI
	var_501_int = 31270; // 0x1522 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x1523 TObjFunc
	return 0; // 0x1525 Return
	
Label_5414:
	var_502_int = 40636; // 0x1526 PushI
	var_503_bool = var_36_bool == var_502_int; // 0x1527 Eq
	if(var_503_bool == 0) goto Label_5437; // 0x1528 JumpB
	var_504_string = ""; // 0x1529 PushV
	var_504_string = "Neutral"; // 0x152a MovS
	func_4653(var_37_cvector, var_504_string); // 0x152b NEW_2
	var_505_int = 538728; // 0x152d PushI
	SetMessage(var_505_int); // 0x152e TObjFunc
	ClearReplies(); // 0x1530 TObjFunc
	var_506_int = 538729; // 0x1532 PushI
	var_507_int = -1; // 0x1533 PushI
	var_508_int = 40637; // 0x1534 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x1535 TObjFunc
	var_509_int = 538730; // 0x1537 PushI
	var_510_int = -1; // 0x1538 PushI
	var_511_int = 40638; // 0x1539 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x153a TObjFunc
	return 0; // 0x153c Return
	
Label_5437:
	var_512_int = 15093; // 0x153d PushI
	var_513_bool = var_36_bool == var_512_int; // 0x153e Eq
	if(var_513_bool == 0) goto Label_5440; // 0x153f JumpB
	
Label_5440:
	var_514_int = 15095; // 0x1540 PushI
	var_515_bool = var_36_bool == var_514_int; // 0x1541 Eq
	if(var_515_bool == 0) goto Label_5463; // 0x1542 JumpB
	var_516_string = ""; // 0x1543 PushV
	var_516_string = "Neutral"; // 0x1544 MovS
	func_4653(var_37_cvector, var_516_string); // 0x1545 NEW_2
	var_517_int = 513868; // 0x1547 PushI
	SetMessage(var_517_int); // 0x1548 TObjFunc
	ClearReplies(); // 0x154a TObjFunc
	var_518_int = 513869; // 0x154c PushI
	var_519_int = 15097; // 0x154d PushI
	var_520_int = 15096; // 0x154e PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x154f TObjFunc
	var_521_int = 513876; // 0x1551 PushI
	var_522_int = 15104; // 0x1552 PushI
	var_523_int = 15103; // 0x1553 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x1554 TObjFunc
	return 0; // 0x1556 Return
	
Label_5463:
	var_524_int = 15104; // 0x1557 PushI
	var_525_bool = var_36_bool == var_524_int; // 0x1558 Eq
	if(var_525_bool == 0) goto Label_5486; // 0x1559 JumpB
	var_526_string = ""; // 0x155a PushV
	var_526_string = "Neutral"; // 0x155b MovS
	func_4653(var_37_cvector, var_526_string); // 0x155c NEW_2
	var_527_int = 513877; // 0x155e PushI
	SetMessage(var_527_int); // 0x155f TObjFunc
	ClearReplies(); // 0x1561 TObjFunc
	var_528_int = 513878; // 0x1563 PushI
	var_529_int = -1; // 0x1564 PushI
	var_530_int = 15105; // 0x1565 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x1566 TObjFunc
	var_531_int = 513879; // 0x1568 PushI
	var_532_int = -1; // 0x1569 PushI
	var_533_int = 15106; // 0x156a PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x156b TObjFunc
	return 0; // 0x156d Return
	
Label_5486:
	var_534_int = 15097; // 0x156e PushI
	var_535_bool = var_36_bool == var_534_int; // 0x156f Eq
	if(var_535_bool == 0) goto Label_5509; // 0x1570 JumpB
	var_536_string = ""; // 0x1571 PushV
	var_536_string = "Neutral"; // 0x1572 MovS
	func_4653(var_37_cvector, var_536_string); // 0x1573 NEW_2
	var_537_int = 513870; // 0x1575 PushI
	SetMessage(var_537_int); // 0x1576 TObjFunc
	ClearReplies(); // 0x1578 TObjFunc
	var_538_int = 513871; // 0x157a PushI
	var_539_int = -1; // 0x157b PushI
	var_540_int = 15098; // 0x157c PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x157d TObjFunc
	var_541_int = 513872; // 0x157f PushI
	var_542_int = 15100; // 0x1580 PushI
	var_543_int = 15099; // 0x1581 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x1582 TObjFunc
	return 0; // 0x1584 Return
	
Label_5509:
	var_544_int = 15100; // 0x1585 PushI
	var_545_bool = var_36_bool == var_544_int; // 0x1586 Eq
	if(var_545_bool == 0) goto Label_5532; // 0x1587 JumpB
	var_546_string = ""; // 0x1588 PushV
	var_546_string = "Neutral"; // 0x1589 MovS
	func_4653(var_37_cvector, var_546_string); // 0x158a NEW_2
	var_547_int = 513873; // 0x158c PushI
	SetMessage(var_547_int); // 0x158d TObjFunc
	ClearReplies(); // 0x158f TObjFunc
	var_548_int = 513874; // 0x1591 PushI
	var_549_int = -1; // 0x1592 PushI
	var_550_int = 15101; // 0x1593 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x1594 TObjFunc
	var_551_int = 513875; // 0x1596 PushI
	var_552_int = -1; // 0x1597 PushI
	var_553_int = 15102; // 0x1598 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x1599 TObjFunc
	return 0; // 0x159b Return
	
Label_5532:
	var_554_int = 15042; // 0x159c PushI
	var_555_bool = var_36_bool == var_554_int; // 0x159d Eq
	if(var_555_bool == 0) goto Label_5550; // 0x159e JumpB
	var_556_string = ""; // 0x159f PushV
	var_556_string = "Neutral"; // 0x15a0 MovS
	func_4653(var_37_cvector, var_556_string); // 0x15a1 NEW_2
	var_557_int = 513816; // 0x15a3 PushI
	SetMessage(var_557_int); // 0x15a4 TObjFunc
	ClearReplies(); // 0x15a6 TObjFunc
	var_558_int = 513817; // 0x15a8 PushI
	var_559_int = 15030; // 0x15a9 PushI
	var_560_int = 15043; // 0x15aa PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x15ab TObjFunc
	return 0; // 0x15ad Return
	
Label_5550:
	var_561_int = 15030; // 0x15ae PushI
	var_562_bool = var_36_bool == var_561_int; // 0x15af Eq
	if(var_562_bool == 0) goto Label_5573; // 0x15b0 JumpB
	var_563_string = ""; // 0x15b1 PushV
	var_563_string = "Neutral"; // 0x15b2 MovS
	func_4653(var_37_cvector, var_563_string); // 0x15b3 NEW_2
	var_564_int = 513804; // 0x15b5 PushI
	SetMessage(var_564_int); // 0x15b6 TObjFunc
	ClearReplies(); // 0x15b8 TObjFunc
	var_565_int = 513805; // 0x15ba PushI
	var_566_int = 15032; // 0x15bb PushI
	var_567_int = 15031; // 0x15bc PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x15bd TObjFunc
	var_568_int = 538722; // 0x15bf PushI
	var_569_int = 15036; // 0x15c0 PushI
	var_570_int = 40627; // 0x15c1 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x15c2 TObjFunc
	return 0; // 0x15c4 Return
	
Label_5573:
	var_571_int = 15032; // 0x15c5 PushI
	var_572_bool = var_36_bool == var_571_int; // 0x15c6 Eq
	if(var_572_bool == 0) goto Label_5596; // 0x15c7 JumpB
	var_573_string = ""; // 0x15c8 PushV
	var_573_string = "Confusion"; // 0x15c9 MovS
	func_4653(var_37_cvector, var_573_string); // 0x15ca NEW_2
	var_574_int = 513806; // 0x15cc PushI
	SetMessage(var_574_int); // 0x15cd TObjFunc
	ClearReplies(); // 0x15cf TObjFunc
	var_575_int = 513807; // 0x15d1 PushI
	var_576_int = 15034; // 0x15d2 PushI
	var_577_int = 15033; // 0x15d3 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x15d4 TObjFunc
	var_578_int = 538723; // 0x15d6 PushI
	var_579_int = 40630; // 0x15d7 PushI
	var_580_int = 40629; // 0x15d8 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x15d9 TObjFunc
	return 0; // 0x15db Return
	
Label_5596:
	var_581_int = 40630; // 0x15dc PushI
	var_582_bool = var_36_bool == var_581_int; // 0x15dd Eq
	if(var_582_bool == 0) goto Label_5619; // 0x15de JumpB
	var_583_string = ""; // 0x15df PushV
	var_583_string = "Confusion"; // 0x15e0 MovS
	func_4653(var_37_cvector, var_583_string); // 0x15e1 NEW_2
	var_584_int = 538724; // 0x15e3 PushI
	SetMessage(var_584_int); // 0x15e4 TObjFunc
	ClearReplies(); // 0x15e6 TObjFunc
	var_585_int = 538725; // 0x15e8 PushI
	var_586_int = 15036; // 0x15e9 PushI
	var_587_int = 40631; // 0x15ea PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x15eb TObjFunc
	var_588_int = 538726; // 0x15ed PushI
	var_589_int = 15036; // 0x15ee PushI
	var_590_int = 40632; // 0x15ef PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x15f0 TObjFunc
	return 0; // 0x15f2 Return
	
Label_5619:
	var_591_int = 15034; // 0x15f3 PushI
	var_592_bool = var_36_bool == var_591_int; // 0x15f4 Eq
	if(var_592_bool == 0) goto Label_5637; // 0x15f5 JumpB
	var_593_string = ""; // 0x15f6 PushV
	var_593_string = "Confusion"; // 0x15f7 MovS
	func_4653(var_37_cvector, var_593_string); // 0x15f8 NEW_2
	var_594_int = 513808; // 0x15fa PushI
	SetMessage(var_594_int); // 0x15fb TObjFunc
	ClearReplies(); // 0x15fd TObjFunc
	var_595_int = 513809; // 0x15ff PushI
	var_596_int = 15036; // 0x1600 PushI
	var_597_int = 15035; // 0x1601 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x1602 TObjFunc
	return 0; // 0x1604 Return
	
Label_5637:
	var_598_int = 15036; // 0x1605 PushI
	var_599_bool = var_36_bool == var_598_int; // 0x1606 Eq
	if(var_599_bool == 0) goto Label_5660; // 0x1607 JumpB
	var_600_string = ""; // 0x1608 PushV
	var_600_string = "Confusion"; // 0x1609 MovS
	func_4653(var_37_cvector, var_600_string); // 0x160a NEW_2
	var_601_int = 513810; // 0x160c PushI
	SetMessage(var_601_int); // 0x160d TObjFunc
	ClearReplies(); // 0x160f TObjFunc
	var_602_int = 513811; // 0x1611 PushI
	var_603_int = 15038; // 0x1612 PushI
	var_604_int = 15037; // 0x1613 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x1614 TObjFunc
	var_605_int = 513814; // 0x1616 PushI
	var_606_int = -1; // 0x1617 PushI
	var_607_int = 15040; // 0x1618 PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x1619 TObjFunc
	return 0; // 0x161b Return
	
Label_5660:
	var_608_int = 15038; // 0x161c PushI
	var_609_bool = var_36_bool == var_608_int; // 0x161d Eq
	if(var_609_bool == 0) goto Label_5683; // 0x161e JumpB
	var_610_string = ""; // 0x161f PushV
	var_610_string = "Neutral"; // 0x1620 MovS
	func_4653(var_37_cvector, var_610_string); // 0x1621 NEW_2
	var_611_int = 513812; // 0x1623 PushI
	SetMessage(var_611_int); // 0x1624 TObjFunc
	ClearReplies(); // 0x1626 TObjFunc
	var_612_int = 513813; // 0x1628 PushI
	var_613_int = -1; // 0x1629 PushI
	var_614_int = 15039; // 0x162a PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x162b TObjFunc
	var_615_int = 538727; // 0x162d PushI
	var_616_int = -1; // 0x162e PushI
	var_617_int = 40635; // 0x162f PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x1630 TObjFunc
	return 0; // 0x1632 Return
	
Label_5683:
	var_3_string = 1; // 0x1633 TMovB
	var_618_bool = 0; // 0x1634 PushV
	func_7439(var_618_bool); // 0x1635 NEW_2
	if(var_618_bool == 0) goto Label_5691; // 0x1637 JumpB
	lshStopAnimation(); // 0x1638 Func
	goto Label_5693; // 0x163a Jump
	
Label_5693:
	return 0; // 0x163d Return
	
Label_5691:
	StopAnimation(); // 0x163b Func
	
Label_5695:
	return 0; // 0x163f Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0x173a PushI
	if(var_38_int == 0) goto Label_6682; // 0x173b JumpB
	func_7247(); // 0x173d NEW_2
	var_40_int = 15421; // 0x173f PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x1740 Eq
	if(var_41_bool == 0) goto Label_5959; // 0x1741 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x1742 PushV
	var_42_object = var_1_object; // 0x1743 MovT
	var_43_object = var_0_object; // 0x1744 MovT
	func_7873(); // 0x1745 NEW_2
	
Label_5959:
	var_86_int = 15422; // 0x1747 PushI
	var_87_bool = var_37_cvector == var_86_int; // 0x1748 Eq
	if(var_87_bool == 0) goto Label_5967; // 0x1749 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x174a PushV
	var_88_object = var_1_object; // 0x174b MovT
	var_89_object = var_0_object; // 0x174c MovT
	func_7873(); // 0x174d NEW_2
	
Label_5967:
	var_90_int = 36123; // 0x174f PushI
	var_91_bool = var_37_cvector == var_90_int; // 0x1750 Eq
	if(var_91_bool == 0) goto Label_5985; // 0x1751 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x1752 PushV
	var_92_object = var_1_object; // 0x1753 MovT
	var_93_object = var_0_object; // 0x1754 MovT
	func_7514(); // 0x1755 NEW_2
	var_120_object = Obj(); var_121_object = Obj(); // 0x1757 PushV
	var_120_object = var_1_object; // 0x1758 MovT
	var_121_object = var_0_object; // 0x1759 MovT
	func_7493(var_121_object); // 0x175a NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x175c PushV
	var_144_object = var_1_object; // 0x175d MovT
	var_145_object = var_0_object; // 0x175e MovT
	func_7447(); // 0x175f NEW_2
	
Label_5985:
	var_148_int = 15451; // 0x1761 PushI
	var_149_bool = var_37_cvector == var_148_int; // 0x1762 Eq
	if(var_149_bool == 0) goto Label_6003; // 0x1763 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x1764 PushV
	var_150_object = var_1_object; // 0x1765 MovT
	var_151_object = var_0_object; // 0x1766 MovT
	func_7895(); // 0x1767 NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x1769 PushV
	var_163_object = var_1_object; // 0x176a MovT
	var_164_object = var_0_object; // 0x176b MovT
	func_7645(); // 0x176c NEW_2
	var_169_object = Obj(); var_170_object = Obj(); // 0x176e PushV
	var_169_object = var_1_object; // 0x176f MovT
	var_170_object = var_0_object; // 0x1770 MovT
	func_7657(); // 0x1771 NEW_2
	
Label_6003:
	var_173_int = 15452; // 0x1773 PushI
	var_174_bool = var_37_cvector == var_173_int; // 0x1774 Eq
	if(var_174_bool == 0) goto Label_6011; // 0x1775 JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x1776 PushV
	var_175_object = var_1_object; // 0x1777 MovT
	var_176_object = var_0_object; // 0x1778 MovT
	func_7639(); // 0x1779 NEW_2
	
Label_6011:
	var_179_int = 15408; // 0x177b PushI
	var_180_bool = var_36_int == var_179_int; // 0x177c Eq
	if(var_180_bool == 0) goto Label_6122; // 0x177d JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x177e PushV
	var_182_object = var_1_object; // 0x177f MovT
	func_8351(var_182_object); // 0x1780 NEW_2
	if(var_181_bool == 0) goto Label_6039; // 0x1782 JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x1783 PushV
	var_189_object = var_1_object; // 0x1784 MovT
	var_190_object = var_0_object; // 0x1785 MovT
	func_7996(); // 0x1786 NEW_2
	var_193_string = ""; // 0x1788 PushV
	var_193_string = "Neutral"; // 0x1789 MovS
	func_5923(var_37_cvector, var_193_string); // 0x178a NEW_2
	var_210_int = 514194; // 0x178c PushI
	SetMessage(var_210_int); // 0x178d TObjFunc
	ClearReplies(); // 0x178f TObjFunc
	var_211_int = 514195; // 0x1791 PushI
	var_212_int = 15410; // 0x1792 PushI
	var_213_int = 15409; // 0x1793 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1794 TObjFunc
	return 0; // 0x1796 Return
	
Label_6039:
	var_214_bool = 0; var_215_object = Obj(); // 0x1797 PushV
	var_215_object = var_1_object; // 0x1798 MovT
	func_8339(var_215_object); // 0x1799 NEW_2
	if(var_214_bool == 0) goto Label_6069; // 0x179b JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x179c PushV
	var_220_object = var_1_object; // 0x179d MovT
	var_221_object = var_0_object; // 0x179e MovT
	func_7867(); // 0x179f NEW_2
	var_224_string = ""; // 0x17a1 PushV
	var_224_string = "Neutral"; // 0x17a2 MovS
	func_5923(var_37_cvector, var_224_string); // 0x17a3 NEW_2
	var_225_int = 534475; // 0x17a5 PushI
	SetMessage(var_225_int); // 0x17a6 TObjFunc
	ClearReplies(); // 0x17a8 TObjFunc
	var_226_int = 536564; // 0x17aa PushI
	var_227_int = 38380; // 0x17ab PushI
	var_228_int = 38379; // 0x17ac PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x17ad TObjFunc
	var_229_int = 536570; // 0x17af PushI
	var_230_int = 38380; // 0x17b0 PushI
	var_231_int = 38385; // 0x17b1 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x17b2 TObjFunc
	return 0; // 0x17b4 Return
	
Label_6069:
	var_232_string = ""; // 0x17b5 PushV
	var_232_string = "Neutral"; // 0x17b6 MovS
	func_5923(var_37_cvector, var_232_string); // 0x17b7 NEW_2
	var_233_int = 514222; // 0x17b9 PushI
	SetMessage(var_233_int); // 0x17ba TObjFunc
	ClearReplies(); // 0x17bc TObjFunc
	var_234_bool = 0; // 0x17be PushV
	var_234_bool = 0; // 0x17bf MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x17c0 PushV
	var_236_object = var_1_object; // 0x17c1 MovT
	func_8363(var_236_object); // 0x17c2 NEW_2
	if(var_235_bool == 0) goto Label_6091; // 0x17c4 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x17c5 PushV
	var_242_object = var_1_object; // 0x17c6 MovT
	func_8179(var_241_bool, var_242_object); // 0x17c7 NEW_2
	if(var_241_bool == 0) goto Label_6091; // 0x17c9 JumpB
	var_234_bool = 1; // 0x17ca MovB
	
Label_6091:
	if(var_234_bool == 0) goto Label_6097; // 0x17cb JumpB
	var_250_int = 514223; // 0x17cc PushI
	var_251_int = 15442; // 0x17cd PushI
	var_252_int = 15441; // 0x17ce PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x17cf TObjFunc
	
Label_6097:
	var_253_bool = 0; // 0x17d1 PushV
	var_253_bool = 0; // 0x17d2 MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x17d3 PushV
	var_255_object = var_1_object; // 0x17d4 MovT
	func_8167(var_255_object); // 0x17d5 NEW_2
	if(var_254_bool == 0) goto Label_6110; // 0x17d7 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x17d8 PushV
	var_261_object = var_1_object; // 0x17d9 MovT
	func_8202(var_261_object); // 0x17da NEW_2
	if(var_260_bool == 0) goto Label_6110; // 0x17dc JumpB
	var_253_bool = 1; // 0x17dd MovB
	
Label_6110:
	if(var_253_bool == 0) goto Label_6116; // 0x17de JumpB
	var_266_int = 514234; // 0x17df PushI
	var_267_int = 15453; // 0x17e0 PushI
	var_268_int = 15452; // 0x17e1 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x17e2 TObjFunc
	
Label_6116:
	var_269_int = 514239; // 0x17e4 PushI
	var_270_int = -1; // 0x17e5 PushI
	var_271_int = 15457; // 0x17e6 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x17e7 TObjFunc
	return 0; // 0x17e9 Return
	
Label_6122:
	var_272_int = 15453; // 0x17ea PushI
	var_273_bool = var_36_int == var_272_int; // 0x17eb Eq
	if(var_273_bool == 0) goto Label_6140; // 0x17ec JumpB
	var_274_string = ""; // 0x17ed PushV
	var_274_string = "Confusion"; // 0x17ee MovS
	func_5923(var_37_cvector, var_274_string); // 0x17ef NEW_2
	var_275_int = 514235; // 0x17f1 PushI
	SetMessage(var_275_int); // 0x17f2 TObjFunc
	ClearReplies(); // 0x17f4 TObjFunc
	var_276_int = 514236; // 0x17f6 PushI
	var_277_int = 15455; // 0x17f7 PushI
	var_278_int = 15454; // 0x17f8 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x17f9 TObjFunc
	return 0; // 0x17fb Return
	
Label_6140:
	var_279_int = 15455; // 0x17fc PushI
	var_280_bool = var_36_int == var_279_int; // 0x17fd Eq
	if(var_280_bool == 0) goto Label_6158; // 0x17fe JumpB
	var_281_string = ""; // 0x17ff PushV
	var_281_string = "Confusion"; // 0x1800 MovS
	func_5923(var_37_cvector, var_281_string); // 0x1801 NEW_2
	var_282_int = 514237; // 0x1803 PushI
	SetMessage(var_282_int); // 0x1804 TObjFunc
	ClearReplies(); // 0x1806 TObjFunc
	var_283_int = 514238; // 0x1808 PushI
	var_284_int = -1; // 0x1809 PushI
	var_285_int = 15456; // 0x180a PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x180b TObjFunc
	return 0; // 0x180d Return
	
Label_6158:
	var_286_int = 15442; // 0x180e PushI
	var_287_bool = var_36_int == var_286_int; // 0x180f Eq
	if(var_287_bool == 0) goto Label_6181; // 0x1810 JumpB
	var_288_string = ""; // 0x1811 PushV
	var_288_string = "Isee"; // 0x1812 MovS
	func_5923(var_37_cvector, var_288_string); // 0x1813 NEW_2
	var_289_int = 514224; // 0x1815 PushI
	SetMessage(var_289_int); // 0x1816 TObjFunc
	ClearReplies(); // 0x1818 TObjFunc
	var_290_int = 514225; // 0x181a PushI
	var_291_int = 15444; // 0x181b PushI
	var_292_int = 15443; // 0x181c PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x181d TObjFunc
	var_293_int = 536562; // 0x181f PushI
	var_294_int = 15444; // 0x1820 PushI
	var_295_int = 38375; // 0x1821 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x1822 TObjFunc
	return 0; // 0x1824 Return
	
Label_6181:
	var_296_int = 15444; // 0x1825 PushI
	var_297_bool = var_36_int == var_296_int; // 0x1826 Eq
	if(var_297_bool == 0) goto Label_6204; // 0x1827 JumpB
	var_298_string = ""; // 0x1828 PushV
	var_298_string = "Isee"; // 0x1829 MovS
	func_5923(var_37_cvector, var_298_string); // 0x182a NEW_2
	var_299_int = 514226; // 0x182c PushI
	SetMessage(var_299_int); // 0x182d TObjFunc
	ClearReplies(); // 0x182f TObjFunc
	var_300_int = 514227; // 0x1831 PushI
	var_301_int = 15446; // 0x1832 PushI
	var_302_int = 15445; // 0x1833 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x1834 TObjFunc
	var_303_int = 536563; // 0x1836 PushI
	var_304_int = 15448; // 0x1837 PushI
	var_305_int = 38377; // 0x1838 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x1839 TObjFunc
	return 0; // 0x183b Return
	
Label_6204:
	var_306_int = 15446; // 0x183c PushI
	var_307_bool = var_36_int == var_306_int; // 0x183d Eq
	if(var_307_bool == 0) goto Label_6222; // 0x183e JumpB
	var_308_string = ""; // 0x183f PushV
	var_308_string = "Neutral"; // 0x1840 MovS
	func_5923(var_37_cvector, var_308_string); // 0x1841 NEW_2
	var_309_int = 514228; // 0x1843 PushI
	SetMessage(var_309_int); // 0x1844 TObjFunc
	ClearReplies(); // 0x1846 TObjFunc
	var_310_int = 514229; // 0x1848 PushI
	var_311_int = 15448; // 0x1849 PushI
	var_312_int = 15447; // 0x184a PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x184b TObjFunc
	return 0; // 0x184d Return
	
Label_6222:
	var_313_int = 15448; // 0x184e PushI
	var_314_bool = var_36_int == var_313_int; // 0x184f Eq
	if(var_314_bool == 0) goto Label_6245; // 0x1850 JumpB
	var_315_string = ""; // 0x1851 PushV
	var_315_string = "Threat"; // 0x1852 MovS
	func_5923(var_37_cvector, var_315_string); // 0x1853 NEW_2
	var_316_int = 514230; // 0x1855 PushI
	SetMessage(var_316_int); // 0x1856 TObjFunc
	ClearReplies(); // 0x1858 TObjFunc
	var_317_int = 514231; // 0x185a PushI
	var_318_int = 15450; // 0x185b PushI
	var_319_int = 15449; // 0x185c PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x185d TObjFunc
	var_320_int = 536561; // 0x185f PushI
	var_321_int = 15450; // 0x1860 PushI
	var_322_int = 38373; // 0x1861 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x1862 TObjFunc
	return 0; // 0x1864 Return
	
Label_6245:
	var_323_int = 15450; // 0x1865 PushI
	var_324_bool = var_36_int == var_323_int; // 0x1866 Eq
	if(var_324_bool == 0) goto Label_6263; // 0x1867 JumpB
	var_325_string = ""; // 0x1868 PushV
	var_325_string = "Neutral"; // 0x1869 MovS
	func_5923(var_37_cvector, var_325_string); // 0x186a NEW_2
	var_326_int = 514232; // 0x186c PushI
	SetMessage(var_326_int); // 0x186d TObjFunc
	ClearReplies(); // 0x186f TObjFunc
	var_327_int = 514233; // 0x1871 PushI
	var_328_int = -1; // 0x1872 PushI
	var_329_int = 15451; // 0x1873 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x1874 TObjFunc
	return 0; // 0x1876 Return
	
Label_6263:
	var_330_int = 38380; // 0x1877 PushI
	var_331_bool = var_36_int == var_330_int; // 0x1878 Eq
	if(var_331_bool == 0) goto Label_6286; // 0x1879 JumpB
	var_332_string = ""; // 0x187a PushV
	var_332_string = "Neutral"; // 0x187b MovS
	func_5923(var_37_cvector, var_332_string); // 0x187c NEW_2
	var_333_int = 536565; // 0x187e PushI
	SetMessage(var_333_int); // 0x187f TObjFunc
	ClearReplies(); // 0x1881 TObjFunc
	var_334_int = 536571; // 0x1883 PushI
	var_335_int = 38388; // 0x1884 PushI
	var_336_int = 38387; // 0x1885 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x1886 TObjFunc
	var_337_int = 536566; // 0x1888 PushI
	var_338_int = 38388; // 0x1889 PushI
	var_339_int = 38381; // 0x188a PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x188b TObjFunc
	return 0; // 0x188d Return
	
Label_6286:
	var_340_int = 38388; // 0x188e PushI
	var_341_bool = var_36_int == var_340_int; // 0x188f Eq
	if(var_341_bool == 0) goto Label_6309; // 0x1890 JumpB
	var_342_string = ""; // 0x1891 PushV
	var_342_string = "Neutral"; // 0x1892 MovS
	func_5923(var_37_cvector, var_342_string); // 0x1893 NEW_2
	var_343_int = 536572; // 0x1895 PushI
	SetMessage(var_343_int); // 0x1896 TObjFunc
	ClearReplies(); // 0x1898 TObjFunc
	var_344_int = 536573; // 0x189a PushI
	var_345_int = 38391; // 0x189b PushI
	var_346_int = 38389; // 0x189c PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x189d TObjFunc
	var_347_int = 536576; // 0x189f PushI
	var_348_int = 38395; // 0x18a0 PushI
	var_349_int = 38393; // 0x18a1 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x18a2 TObjFunc
	return 0; // 0x18a4 Return
	
Label_6309:
	var_350_int = 38391; // 0x18a5 PushI
	var_351_bool = var_36_int == var_350_int; // 0x18a6 Eq
	if(var_351_bool == 0) goto Label_6332; // 0x18a7 JumpB
	var_352_string = ""; // 0x18a8 PushV
	var_352_string = "Threat"; // 0x18a9 MovS
	func_5923(var_37_cvector, var_352_string); // 0x18aa NEW_2
	var_353_int = 536574; // 0x18ac PushI
	SetMessage(var_353_int); // 0x18ad TObjFunc
	ClearReplies(); // 0x18af TObjFunc
	var_354_int = 536575; // 0x18b1 PushI
	var_355_int = 38382; // 0x18b2 PushI
	var_356_int = 38392; // 0x18b3 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x18b4 TObjFunc
	var_357_int = 536577; // 0x18b6 PushI
	var_358_int = 38395; // 0x18b7 PushI
	var_359_int = 38394; // 0x18b8 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x18b9 TObjFunc
	return 0; // 0x18bb Return
	
Label_6332:
	var_360_int = 38395; // 0x18bc PushI
	var_361_bool = var_36_int == var_360_int; // 0x18bd Eq
	if(var_361_bool == 0) goto Label_6355; // 0x18be JumpB
	var_362_string = ""; // 0x18bf PushV
	var_362_string = "Neutral"; // 0x18c0 MovS
	func_5923(var_37_cvector, var_362_string); // 0x18c1 NEW_2
	var_363_int = 536578; // 0x18c3 PushI
	SetMessage(var_363_int); // 0x18c4 TObjFunc
	ClearReplies(); // 0x18c6 TObjFunc
	var_364_int = 536579; // 0x18c8 PushI
	var_365_int = 38382; // 0x18c9 PushI
	var_366_int = 38397; // 0x18ca PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x18cb TObjFunc
	var_367_int = 536580; // 0x18cd PushI
	var_368_int = 38382; // 0x18ce PushI
	var_369_int = 38398; // 0x18cf PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x18d0 TObjFunc
	return 0; // 0x18d2 Return
	
Label_6355:
	var_370_int = 38382; // 0x18d3 PushI
	var_371_bool = var_36_int == var_370_int; // 0x18d4 Eq
	if(var_371_bool == 0) goto Label_6378; // 0x18d5 JumpB
	var_372_string = ""; // 0x18d6 PushV
	var_372_string = "Threat"; // 0x18d7 MovS
	func_5923(var_37_cvector, var_372_string); // 0x18d8 NEW_2
	var_373_int = 536567; // 0x18da PushI
	SetMessage(var_373_int); // 0x18db TObjFunc
	ClearReplies(); // 0x18dd TObjFunc
	var_374_int = 536568; // 0x18df PushI
	var_375_int = 38384; // 0x18e0 PushI
	var_376_int = 38383; // 0x18e1 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x18e2 TObjFunc
	var_377_int = 534476; // 0x18e4 PushI
	var_378_int = 36122; // 0x18e5 PushI
	var_379_int = 36121; // 0x18e6 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x18e7 TObjFunc
	return 0; // 0x18e9 Return
	
Label_6378:
	var_380_int = 36122; // 0x18ea PushI
	var_381_bool = var_36_int == var_380_int; // 0x18eb Eq
	if(var_381_bool == 0) goto Label_6396; // 0x18ec JumpB
	var_382_string = ""; // 0x18ed PushV
	var_382_string = "Neutral"; // 0x18ee MovS
	func_5923(var_37_cvector, var_382_string); // 0x18ef NEW_2
	var_383_int = 534477; // 0x18f1 PushI
	SetMessage(var_383_int); // 0x18f2 TObjFunc
	ClearReplies(); // 0x18f4 TObjFunc
	var_384_int = 536582; // 0x18f6 PushI
	var_385_int = 38404; // 0x18f7 PushI
	var_386_int = 38403; // 0x18f8 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x18f9 TObjFunc
	return 0; // 0x18fb Return
	
Label_6396:
	var_387_int = 38404; // 0x18fc PushI
	var_388_bool = var_36_int == var_387_int; // 0x18fd Eq
	if(var_388_bool == 0) goto Label_6419; // 0x18fe JumpB
	var_389_string = ""; // 0x18ff PushV
	var_389_string = "Neutral"; // 0x1900 MovS
	func_5923(var_37_cvector, var_389_string); // 0x1901 NEW_2
	var_390_int = 536583; // 0x1903 PushI
	SetMessage(var_390_int); // 0x1904 TObjFunc
	ClearReplies(); // 0x1906 TObjFunc
	var_391_int = 536584; // 0x1908 PushI
	var_392_int = 38406; // 0x1909 PushI
	var_393_int = 38405; // 0x190a PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x190b TObjFunc
	var_394_int = 536586; // 0x190d PushI
	var_395_int = 38406; // 0x190e PushI
	var_396_int = 38407; // 0x190f PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1910 TObjFunc
	return 0; // 0x1912 Return
	
Label_6419:
	var_397_int = 38406; // 0x1913 PushI
	var_398_bool = var_36_int == var_397_int; // 0x1914 Eq
	if(var_398_bool == 0) goto Label_6442; // 0x1915 JumpB
	var_399_string = ""; // 0x1916 PushV
	var_399_string = "Neutral"; // 0x1917 MovS
	func_5923(var_37_cvector, var_399_string); // 0x1918 NEW_2
	var_400_int = 536585; // 0x191a PushI
	SetMessage(var_400_int); // 0x191b TObjFunc
	ClearReplies(); // 0x191d TObjFunc
	var_401_int = 534478; // 0x191f PushI
	var_402_int = -1; // 0x1920 PushI
	var_403_int = 36123; // 0x1921 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x1922 TObjFunc
	var_404_int = 534479; // 0x1924 PushI
	var_405_int = -1; // 0x1925 PushI
	var_406_int = 36124; // 0x1926 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x1927 TObjFunc
	return 0; // 0x1929 Return
	
Label_6442:
	var_407_int = 38384; // 0x192a PushI
	var_408_bool = var_36_int == var_407_int; // 0x192b Eq
	if(var_408_bool == 0) goto Label_6460; // 0x192c JumpB
	var_409_string = ""; // 0x192d PushV
	var_409_string = "Threat"; // 0x192e MovS
	func_5923(var_37_cvector, var_409_string); // 0x192f NEW_2
	var_410_int = 536569; // 0x1931 PushI
	SetMessage(var_410_int); // 0x1932 TObjFunc
	ClearReplies(); // 0x1934 TObjFunc
	var_411_int = 536581; // 0x1936 PushI
	var_412_int = 36122; // 0x1937 PushI
	var_413_int = 38401; // 0x1938 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x1939 TObjFunc
	return 0; // 0x193b Return
	
Label_6460:
	var_414_int = 15410; // 0x193c PushI
	var_415_bool = var_36_int == var_414_int; // 0x193d Eq
	if(var_415_bool == 0) goto Label_6488; // 0x193e JumpB
	var_416_string = ""; // 0x193f PushV
	var_416_string = "Neutral"; // 0x1940 MovS
	func_5923(var_37_cvector, var_416_string); // 0x1941 NEW_2
	var_417_int = 514196; // 0x1943 PushI
	SetMessage(var_417_int); // 0x1944 TObjFunc
	ClearReplies(); // 0x1946 TObjFunc
	var_418_int = 514197; // 0x1948 PushI
	var_419_int = 15412; // 0x1949 PushI
	var_420_int = 15411; // 0x194a PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x194b TObjFunc
	var_421_int = 514218; // 0x194d PushI
	var_422_int = 15412; // 0x194e PushI
	var_423_int = 15435; // 0x194f PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1950 TObjFunc
	var_424_int = 514219; // 0x1952 PushI
	var_425_int = 15438; // 0x1953 PushI
	var_426_int = 15437; // 0x1954 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x1955 TObjFunc
	return 0; // 0x1957 Return
	
Label_6488:
	var_427_int = 15438; // 0x1958 PushI
	var_428_bool = var_36_int == var_427_int; // 0x1959 Eq
	if(var_428_bool == 0) goto Label_6506; // 0x195a JumpB
	var_429_string = ""; // 0x195b PushV
	var_429_string = "Neutral"; // 0x195c MovS
	func_5923(var_37_cvector, var_429_string); // 0x195d NEW_2
	var_430_int = 514220; // 0x195f PushI
	SetMessage(var_430_int); // 0x1960 TObjFunc
	ClearReplies(); // 0x1962 TObjFunc
	var_431_int = 514221; // 0x1964 PushI
	var_432_int = 15412; // 0x1965 PushI
	var_433_int = 15439; // 0x1966 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x1967 TObjFunc
	return 0; // 0x1969 Return
	
Label_6506:
	var_434_int = 15412; // 0x196a PushI
	var_435_bool = var_36_int == var_434_int; // 0x196b Eq
	if(var_435_bool == 0) goto Label_6529; // 0x196c JumpB
	var_436_string = ""; // 0x196d PushV
	var_436_string = "Isee"; // 0x196e MovS
	func_5923(var_37_cvector, var_436_string); // 0x196f NEW_2
	var_437_int = 514198; // 0x1971 PushI
	SetMessage(var_437_int); // 0x1972 TObjFunc
	ClearReplies(); // 0x1974 TObjFunc
	var_438_int = 514199; // 0x1976 PushI
	var_439_int = 15414; // 0x1977 PushI
	var_440_int = 15413; // 0x1978 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x1979 TObjFunc
	var_441_int = 514212; // 0x197b PushI
	var_442_int = 15428; // 0x197c PushI
	var_443_int = 15427; // 0x197d PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x197e TObjFunc
	return 0; // 0x1980 Return
	
Label_6529:
	var_444_int = 15428; // 0x1981 PushI
	var_445_bool = var_36_int == var_444_int; // 0x1982 Eq
	if(var_445_bool == 0) goto Label_6552; // 0x1983 JumpB
	var_446_string = ""; // 0x1984 PushV
	var_446_string = "Isee"; // 0x1985 MovS
	func_5923(var_37_cvector, var_446_string); // 0x1986 NEW_2
	var_447_int = 514213; // 0x1988 PushI
	SetMessage(var_447_int); // 0x1989 TObjFunc
	ClearReplies(); // 0x198b TObjFunc
	var_448_int = 514214; // 0x198d PushI
	var_449_int = 15430; // 0x198e PushI
	var_450_int = 15429; // 0x198f PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x1990 TObjFunc
	var_451_int = 514217; // 0x1992 PushI
	var_452_int = 15430; // 0x1993 PushI
	var_453_int = 15433; // 0x1994 PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x1995 TObjFunc
	return 0; // 0x1997 Return
	
Label_6552:
	var_454_int = 15430; // 0x1998 PushI
	var_455_bool = var_36_int == var_454_int; // 0x1999 Eq
	if(var_455_bool == 0) goto Label_6570; // 0x199a JumpB
	var_456_string = ""; // 0x199b PushV
	var_456_string = "Isee"; // 0x199c MovS
	func_5923(var_37_cvector, var_456_string); // 0x199d NEW_2
	var_457_int = 514215; // 0x199f PushI
	SetMessage(var_457_int); // 0x19a0 TObjFunc
	ClearReplies(); // 0x19a2 TObjFunc
	var_458_int = 514216; // 0x19a4 PushI
	var_459_int = 15420; // 0x19a5 PushI
	var_460_int = 15431; // 0x19a6 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x19a7 TObjFunc
	return 0; // 0x19a9 Return
	
Label_6570:
	var_461_int = 15414; // 0x19aa PushI
	var_462_bool = var_36_int == var_461_int; // 0x19ab Eq
	if(var_462_bool == 0) goto Label_6588; // 0x19ac JumpB
	var_463_string = ""; // 0x19ad PushV
	var_463_string = "Neutral"; // 0x19ae MovS
	func_5923(var_37_cvector, var_463_string); // 0x19af NEW_2
	var_464_int = 514200; // 0x19b1 PushI
	SetMessage(var_464_int); // 0x19b2 TObjFunc
	ClearReplies(); // 0x19b4 TObjFunc
	var_465_int = 514201; // 0x19b6 PushI
	var_466_int = 15416; // 0x19b7 PushI
	var_467_int = 15415; // 0x19b8 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x19b9 TObjFunc
	return 0; // 0x19bb Return
	
Label_6588:
	var_468_int = 15416; // 0x19bc PushI
	var_469_bool = var_36_int == var_468_int; // 0x19bd Eq
	if(var_469_bool == 0) goto Label_6611; // 0x19be JumpB
	var_470_string = ""; // 0x19bf PushV
	var_470_string = "Neutral"; // 0x19c0 MovS
	func_5923(var_37_cvector, var_470_string); // 0x19c1 NEW_2
	var_471_int = 514202; // 0x19c3 PushI
	SetMessage(var_471_int); // 0x19c4 TObjFunc
	ClearReplies(); // 0x19c6 TObjFunc
	var_472_int = 514203; // 0x19c8 PushI
	var_473_int = 15418; // 0x19c9 PushI
	var_474_int = 15417; // 0x19ca PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x19cb TObjFunc
	var_475_int = 514209; // 0x19cd PushI
	var_476_int = 15424; // 0x19ce PushI
	var_477_int = 15423; // 0x19cf PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x19d0 TObjFunc
	return 0; // 0x19d2 Return
	
Label_6611:
	var_478_int = 15424; // 0x19d3 PushI
	var_479_bool = var_36_int == var_478_int; // 0x19d4 Eq
	if(var_479_bool == 0) goto Label_6629; // 0x19d5 JumpB
	var_480_string = ""; // 0x19d6 PushV
	var_480_string = "Neutral"; // 0x19d7 MovS
	func_5923(var_37_cvector, var_480_string); // 0x19d8 NEW_2
	var_481_int = 514210; // 0x19da PushI
	SetMessage(var_481_int); // 0x19db TObjFunc
	ClearReplies(); // 0x19dd TObjFunc
	var_482_int = 514211; // 0x19df PushI
	var_483_int = 15418; // 0x19e0 PushI
	var_484_int = 15425; // 0x19e1 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x19e2 TObjFunc
	return 0; // 0x19e4 Return
	
Label_6629:
	var_485_int = 15418; // 0x19e5 PushI
	var_486_bool = var_36_int == var_485_int; // 0x19e6 Eq
	if(var_486_bool == 0) goto Label_6652; // 0x19e7 JumpB
	var_487_string = ""; // 0x19e8 PushV
	var_487_string = "Neutral"; // 0x19e9 MovS
	func_5923(var_37_cvector, var_487_string); // 0x19ea NEW_2
	var_488_int = 514204; // 0x19ec PushI
	SetMessage(var_488_int); // 0x19ed TObjFunc
	ClearReplies(); // 0x19ef TObjFunc
	var_489_int = 514205; // 0x19f1 PushI
	var_490_int = 15420; // 0x19f2 PushI
	var_491_int = 15419; // 0x19f3 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x19f4 TObjFunc
	var_492_int = 514208; // 0x19f6 PushI
	var_493_int = -1; // 0x19f7 PushI
	var_494_int = 15422; // 0x19f8 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x19f9 TObjFunc
	return 0; // 0x19fb Return
	
Label_6652:
	var_495_int = 15420; // 0x19fc PushI
	var_496_bool = var_36_int == var_495_int; // 0x19fd Eq
	if(var_496_bool == 0) goto Label_6670; // 0x19fe JumpB
	var_497_string = ""; // 0x19ff PushV
	var_497_string = "Neutral"; // 0x1a00 MovS
	func_5923(var_37_cvector, var_497_string); // 0x1a01 NEW_2
	var_498_int = 514206; // 0x1a03 PushI
	SetMessage(var_498_int); // 0x1a04 TObjFunc
	ClearReplies(); // 0x1a06 TObjFunc
	var_499_int = 514207; // 0x1a08 PushI
	var_500_int = -1; // 0x1a09 PushI
	var_501_int = 15421; // 0x1a0a PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x1a0b TObjFunc
	return 0; // 0x1a0d Return
	
Label_6670:
	var_3_string = 1; // 0x1a0e TMovB
	var_502_bool = 0; // 0x1a0f PushV
	func_7439(var_502_bool); // 0x1a10 NEW_2
	if(var_502_bool == 0) goto Label_6678; // 0x1a12 JumpB
	lshStopAnimation(); // 0x1a13 Func
	goto Label_6680; // 0x1a15 Jump
	
Label_6680:
	return 0; // 0x1a18 Return
	
Label_6678:
	StopAnimation(); // 0x1a16 Func
	
Label_6682:
	return 0; // 0x1a1a Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0x1a65 PushI
	var_38_bool = var_36_int == var_37_int; // 0x1a66 Eq
	if(var_38_bool == 0) goto Label_6793; // 0x1a67 JumpB
	func_6752(); // 0x1a69 NEW_2
	var_40_bool = 0; // 0x1a6b PushV
	var_40_bool = 0; // 0x1a6c MovB
	var_41_bool = 0; // 0x1a6d PushV
	func_6973(var_41_bool); // 0x1a6e NEW_2
	if(var_41_bool == 0) goto Label_6774; // 0x1a70 JumpB
	var_44_bool = 0; // 0x1a71 PushV
	func_6721(var_44_bool); // 0x1a72 NEW_2
	if(var_44_bool == 0) goto Label_6774; // 0x1a74 JumpB
	var_40_bool = 1; // 0x1a75 MovB
	
Label_6774:
	if(var_40_bool == 0) goto Label_6787; // 0x1a76 JumpB
	var_61_bool = 0; // 0x1a77 PushV
	func_6701(var_61_bool); // 0x1a78 NEW_2
	if(var_61_bool == 0) goto Label_6786; // 0x1a7a JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x1a7b PushV
	var_82_object = Obj(); // 0x1a7c PushV
	func_7254(var_82_object); // 0x1a7d NEW_2
	var_81_object = var_82_object; // 0x1a7e Mov
	func_7121(var_81_object); // 0x1a80 NEW_2
	
Label_6786:
	goto Label_6793; // 0x1a82 Jump
	
Label_6793:
	return 0; // 0x1a89 Return
	
Label_6787:
	func_6716(var_36_int); // 0x1a84 NEW_2
	func_6743(); // 0x1a87 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_6934(); // 0x1a8b NEW_2
	func_6752(); // 0x1a8e NEW_2
	lshStopSpeech(); // 0x1a90 Func
	lshStopAnimation(); // 0x1a92 Func
	StopAsync(); // 0x1a94 Func
	Hold(); // 0x1a96 Func
	return 0; // 0x1a98 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0x1a99 Func
	func_6752(); // 0x1a9c NEW_2
	var_37_string = ""; // 0x1a9e PushV
	var_37_string = "Neutral"; // 0x1a9f MovS
	func_7201(var_37_string); // 0x1aa0 NEW_2
	func_6743(); // 0x1aa3 NEW_2
	return 0; // 0x1aa5 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0x1aa7 Push
	if(var_37_bool == 0) goto Label_6829; // 0x1aa8 JumpB
	func_6743(); // 0x1aaa NEW_2
	goto Label_6833; // 0x1aac Jump
	
Label_6833:
	return 0; // 0x1ab1 Return
	
Label_6829:
	var_43_string = ""; // 0x1aad PushV
	var_43_string = "Neutral"; // 0x1aae MovS
	func_7201(var_43_string); // 0x1aaf NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0x1ab2 PushV
	IsOverrideActive(var_38_bool); // 0x1ab3 Func
	var_39_bool = var_38_bool == 0; // 0x1ab5 Not
	if(var_39_bool == 0) goto Label_6862; // 0x1ab6 JumpB
	EventDisable(0); // 0x1ab7 EventDisable
	func_6934(); // 0x1ab9 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0x1abb PushV
	var_41_object = var_36_object; // 0x1abc Mov
	func_6964(var_41_object); // 0x1abd NEW_2
	EventEnable(0); // 0x1abf EventEnable
	var_54_object = Obj(); // 0x1ac0 PushV
	var_54_object = var_36_object; // 0x1ac1 Mov
	func_8873(var_54_object); // 0x1ac2 NEW_2
	var_958_string = ""; // 0x1ac4 PushV
	var_958_string = "Neutral"; // 0x1ac5 MovS
	func_7201(var_958_string); // 0x1ac6 NEW_2
	func_6752(); // 0x1ac9 NEW_2
	func_6743(); // 0x1acc NEW_2
	
Label_6862:
	return 2; // 0x1ace Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_6687(var_35_cvector); // 0x1a1c NEW_2
	return 0; // 0x1a1e Return
}


func_0(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x0 PushV
	var_0_object = var_60_object; // 0x1 TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x2 PushV
	var_71_object = var_60_object; // 0x3 Mov
	var_72_float = 70.0; // 0x4 MovF
	func_6978(var_71_object, var_72_float); // 0x5 NEW_2
	var_116_bool = var_70_bool == 0; // 0x7 Not
	if(var_116_bool == 0) goto Label_11; // 0x8 JumpB
	var_59_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_66_object); // 0xb Func
	var_117_int = 0; // 0xd PushV
	func_7433(var_117_int); // 0xe NEW_2
	SetNPCName(var_117_int); // 0x10 ObjFunc
	var_118_int = 0; // 0x12 PushV
	func_7431(var_118_int); // 0x13 NEW_2
	SetNPCDescription(var_118_int); // 0x15 ObjFunc
	var_119_string = ""; // 0x17 PushV
	func_7435(var_119_string); // 0x18 NEW_2
	SetPhoto(var_119_string); // 0x1a ObjFunc
	var_120_string = ""; // 0x1c PushV
	func_7437(var_120_string); // 0x1d NEW_2
	SetPhoto2(var_120_string); // 0x1f ObjFunc
	var_121_int = 0; // 0x21 PushV
	func_8856(var_121_int); // 0x22 NEW_2
	SetPlayerName(var_121_int); // 0x24 ObjFunc
	var_68_int = -1; // 0x26 MovI
	IsOverrideActive(var_67_bool); // 0x27 Func
	var_129_bool = var_67_bool; // 0x29 Push
	if(var_129_bool == 0) goto Label_45; // 0x2a JumpB
	var_59_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_66_object); // 0x2d Func
	var_130_bool = 0; var_131_object = Obj(); // 0x2f PushV
	var_132_object = Obj(); // 0x30 PushV
	func_7254(var_132_object); // 0x31 NEW_2
	var_131_object = var_132_object; // 0x32 Mov
	func_7063(var_130_bool, var_131_object); // 0x34 NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x36 PushV
	var_225_object = var_60_object; // 0x37 Mov
	var_226_object = var_66_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_69_bool); // 0x3d ObjFunc
	
Label_63:
	var_274_bool = var_69_bool == 0; // 0x3f Not
	if(var_274_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_69_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_275_object = Obj(); // 0x46 PushV
	var_275_object = var_60_object; // 0x47 Mov
	func_7046(); // 0x48 NEW_2
	StopDialog(var_66_object); // 0x4a Func
	GetReturnValue(var_68_int); // 0x4c ObjFunc
	var_59_int = var_68_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1030(var_0_object, var_369_int, var_370_object)
{
	var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; var_376_object = Obj(); var_377_bool = 0; var_378_int = 0; var_379_bool = 0; // 0x406 PushV
	var_0_object = var_370_object; // 0x407 TMov
	var_380_bool = 0; var_381_object = Obj(); var_382_float = 0; // 0x408 PushV
	var_381_object = var_370_object; // 0x409 Mov
	var_382_float = 70.0; // 0x40a MovF
	func_6978(var_381_object, var_382_float); // 0x40b NEW_2
	var_383_bool = var_380_bool == 0; // 0x40d Not
	if(var_383_bool == 0) goto Label_1041; // 0x40e JumpB
	var_369_int = -2; // 0x40f MovI
	return 8; // 0x410 Return
	
Label_1041:
	CreateDialog(var_376_object); // 0x411 Func
	var_384_int = 0; // 0x413 PushV
	func_7433(var_384_int); // 0x414 NEW_2
	SetNPCName(var_384_int); // 0x416 ObjFunc
	var_385_int = 0; // 0x418 PushV
	func_7431(var_385_int); // 0x419 NEW_2
	SetNPCDescription(var_385_int); // 0x41b ObjFunc
	var_386_string = ""; // 0x41d PushV
	func_7435(var_386_string); // 0x41e NEW_2
	SetPhoto(var_386_string); // 0x420 ObjFunc
	var_387_string = ""; // 0x422 PushV
	func_7437(var_387_string); // 0x423 NEW_2
	SetPhoto2(var_387_string); // 0x425 ObjFunc
	var_388_int = 0; // 0x427 PushV
	func_8856(var_388_int); // 0x428 NEW_2
	SetPlayerName(var_388_int); // 0x42a ObjFunc
	var_378_int = -1; // 0x42c MovI
	IsOverrideActive(var_377_bool); // 0x42d Func
	var_389_bool = var_377_bool; // 0x42f Push
	if(var_389_bool == 0) goto Label_1075; // 0x430 JumpB
	var_369_int = -2; // 0x431 MovI
	return 8; // 0x432 Return
	
Label_1075:
	DoDialog(var_376_object); // 0x433 Func
	var_390_bool = 0; var_391_object = Obj(); // 0x435 PushV
	var_392_object = Obj(); // 0x436 PushV
	func_7254(var_392_object); // 0x437 NEW_2
	var_391_object = var_392_object; // 0x438 Mov
	func_7063(var_390_bool, var_391_object); // 0x43a NEW_2
	var_393_object = Obj(); var_394_object = Obj(); // 0x43c PushV
	var_393_object = var_370_object; // 0x43d Mov
	var_394_object = var_376_object; // 0x43e Mov
	TaskCall(5); // 0x43f TaskCall
	func_1111(var_395_object, var_396_object, var_397_string, var_398_bool, var_393_object, var_394_object); // 0x440 NEW_2
	TaskReturn(); // 0x441 TaskReturn
	IsDialogEnd(var_379_bool); // 0x443 ObjFunc
	
Label_1093:
	var_492_bool = var_379_bool == 0; // 0x445 Not
	if(var_492_bool == 0) goto Label_1100; // 0x446 JumpB
	sync(); // 0x447 Func
	IsDialogEnd(var_379_bool); // 0x449 ObjFunc
	goto Label_1093; // 0x44b Jump
	
Label_1100:
	var_493_object = Obj(); // 0x44c PushV
	var_493_object = var_370_object; // 0x44d Mov
	func_7046(); // 0x44e NEW_2
	StopDialog(var_376_object); // 0x450 Func
	GetReturnValue(var_378_int); // 0x452 ObjFunc
	var_369_int = var_378_int; // 0x454 Mov
	return 8; // 0x455 Return
}


func_8713()
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x2209 PushV
	var_71_int = 176; // 0x220a PushI
	var_72_int = 1; // 0x220b PushI
	var_73_int = 515435; // 0x220c PushI
	CreateDiaryEntry(var_70_object, var_71_int, var_72_int, var_73_int); // 0x220d Func
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0; // 0x220f PushV
	var_75_object = var_70_object; // 0x2210 Mov
	var_76_int = 175; // 0x2211 MovI
	func_8778(var_74_bool, var_75_object, var_76_int); // 0x2212 NEW_2
	return 2; // 0x2214 Return
}


func_8202(var_944_bool)
{
	var_946_int = 0; var_947_string = ""; // 0x200b PushV
	var_947_string = "d11RotaTalk"; // 0x200c MovS
	func_7270(var_946_int, var_947_string); // 0x200d NEW_2
	var_948_int = 0; // 0x200f PushI
	var_949_bool = var_946_int != var_948_int; // 0x2010 Neq
	if(var_949_bool == 0) goto Label_8212; // 0x2011 JumpB
	var_944_bool = 1; // 0x2012 MovB
	return 0; // 0x2013 Return
	
Label_8212:
	var_944_bool = 0; // 0x2014 MovB
	return 0; // 0x2015 Return
}


func_8214(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0x2017 PushV
	var_143_object = var_141_object; // 0x2018 Mov
	func_8469(var_143_object); // 0x2019 NEW_2
	if(var_142_bool == 0) goto Label_8222; // 0x201b JumpB
	var_140_bool = 1; // 0x201c MovB
	return 0; // 0x201d Return
	
Label_8222:
	var_140_bool = 0; // 0x201e MovB
	return 0; // 0x201f Return
}


func_8726()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x2216 PushV
	var_64_int = 764; // 0x2217 PushI
	var_65_int = 2; // 0x2218 PushI
	var_66_int = 540061; // 0x2219 PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x221a Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x221c PushV
	var_68_object = var_63_object; // 0x221d Mov
	var_69_int = -1; // 0x221e MovI
	func_8778(var_67_bool, var_68_object, var_69_int); // 0x221f NEW_2
	return 2; // 0x2221 Return
}


func_6687(var_0_object)
{
	var_36_bool = 0; // 0x1a1f PushV
	func_6973(var_36_bool); // 0x1a20 NEW_2
	var_39_bool = var_36_bool == 0; // 0x1a22 Not
	if(var_39_bool == 0) goto Label_6694; // 0x1a23 JumpB
	Hold(); // 0x1a24 Func
	
Label_6694:
	GetDirection(var_0_object); // 0x1a26 Func
	
Label_6696:
	func_6863(); // 0x1a29 NEW_2
	goto Label_6696; // 0x1a2b Jump
}


func_8224(var_400_bool)
{
	var_402_int = 0; var_403_string = ""; // 0x2021 PushV
	var_403_string = "d7q01"; // 0x2022 MovS
	func_7270(var_402_int, var_403_string); // 0x2023 NEW_2
	var_404_int = 0; // 0x2025 PushI
	var_405_bool = var_402_int == var_404_int; // 0x2026 Eq
	if(var_405_bool == 0) goto Label_8234; // 0x2027 JumpB
	var_400_bool = 1; // 0x2028 MovB
	return 0; // 0x2029 Return
	
Label_8234:
	var_400_bool = 0; // 0x202a MovB
	return 0; // 0x202b Return
}


func_7201(var_258_string)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0; // 0x1c21 PushV
	lshHasAnimation(var_262_bool, var_258_string); // 0x1c22 Func
	var_265_bool = var_262_bool; // 0x1c24 Push
	if(var_265_bool == 0) goto Label_7212; // 0x1c25 JumpB
	lshGetAnimTimes(var_258_string, var_263_float, var_264_float); // 0x1c26 Func
	var_266_bool = 0; // 0x1c28 PushB
	lshPlayAnimation(var_263_float, var_264_float, var_266_bool); // 0x1c29 Func
	goto Label_7216; // 0x1c2b Jump
	
Label_7216:
	return 6; // 0x1c30 Return
	
Label_7212:
	var_267_string = "Can't find lsh animation : "; // 0x1c2c PushS
	var_268_int = var_267_string + var_258_string; // 0x1c2d Add
	Trace(var_268_int); // 0x1c2e Func
}


func_8739()
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x2223 PushV
	var_87_int = 765; // 0x2224 PushI
	var_88_int = 2; // 0x2225 PushI
	var_89_int = 540062; // 0x2226 PushI
	CreateDiaryEntry(var_86_object, var_87_int, var_88_int, var_89_int); // 0x2227 Func
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0; // 0x2229 PushV
	var_91_object = var_86_object; // 0x222a Mov
	var_92_int = 764; // 0x222b MovI
	func_8778(var_90_bool, var_91_object, var_92_int); // 0x222c NEW_2
	return 2; // 0x222e Return
}


func_8236(var_436_bool, var_437_object)
{
	var_438_bool = 0; // 0x202d PushV
	var_438_bool = 0; // 0x202e MovB
	var_439_bool = 0; // 0x202f PushV
	var_439_bool = 0; // 0x2030 MovB
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x2031 PushV
	var_441_object = var_437_object; // 0x2032 Mov
	var_442_string = "d7q01_dreport"; // 0x2033 MovS
	func_7349(var_441_object, var_442_string); // 0x2034 NEW_2
	if(var_440_bool == 0) goto Label_8254; // 0x2036 JumpB
	var_447_bool = 0; var_448_object = Obj(); var_449_string = ""; // 0x2037 PushV
	var_448_object = var_437_object; // 0x2038 Mov
	var_449_string = "d7q01_mreport"; // 0x2039 MovS
	func_7349(var_448_object, var_449_string); // 0x203a NEW_2
	if(var_447_bool == 0) goto Label_8254; // 0x203c JumpB
	var_439_bool = 1; // 0x203d MovB
	
Label_8254:
	if(var_439_bool == 0) goto Label_8262; // 0x203e JumpB
	var_450_bool = 0; var_451_object = Obj(); var_452_string = ""; // 0x203f PushV
	var_451_object = var_437_object; // 0x2040 Mov
	var_452_string = "d7q01_ureport"; // 0x2041 MovS
	func_7349(var_451_object, var_452_string); // 0x2042 NEW_2
	if(var_450_bool == 0) goto Label_8262; // 0x2044 JumpB
	var_438_bool = 1; // 0x2045 MovB
	
Label_8262:
	if(var_438_bool == 0) goto Label_8265; // 0x2046 JumpB
	var_436_bool = 1; // 0x2047 MovB
	return 0; // 0x2048 Return
	
Label_8265:
	var_436_bool = 0; // 0x2049 MovB
	return 0; // 0x204a Return
}


func_4653(var_2_object, var_633_string)
{
	var_634_bool = 0; // 0x122e PushV
	func_7439(var_634_bool); // 0x122f NEW_2
	var_635_bool = var_634_bool == 0; // 0x1231 Not
	if(var_635_bool == 0) goto Label_4660; // 0x1232 JumpB
	return 0; // 0x1233 Return
	
Label_4660:
	var_636_bool = var_633_string == var_2_object; // 0x1234 Eq
	if(var_636_bool == 0) goto Label_4663; // 0x1235 JumpB
	return 0; // 0x1236 Return
	
Label_4663:
	var_637_string = ""; var_638_bool = 0; // 0x1237 PushV
	var_637_string = var_633_string; // 0x1238 Mov
	var_639_string = ""; // 0x1239 PushS
	var_640_bool = var_633_string == var_639_string; // 0x123a Eq
	if(var_640_bool == 0) goto Label_4670; // 0x123b JumpB
	var_638_bool = 0; // 0x123c MovB
	goto Label_4671; // 0x123d Jump
	
Label_4671:
	func_7217(var_637_string, var_638_bool); // 0x123f NEW_2
	var_2_object = var_633_string; // 0x1241 TMov
	return 0; // 0x1242 Return
	
Label_4670:
	var_638_bool = 1; // 0x123e MovB
}


func_6701(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x1a2d PushV
	var_64_string = "player"; // 0x1a2e PushS
	FindActor(var_63_object, var_64_string); // 0x1a2f Func
	var_65_bool = var_63_object == 0; // 0x1a31 Not
	if(var_65_bool == 0) goto Label_6709; // 0x1a32 JumpB
	var_61_bool = 0; // 0x1a33 MovB
	return 2; // 0x1a34 Return
	
Label_6709:
	var_66_bool = 0; var_67_object = Obj(); // 0x1a35 PushV
	var_67_object = var_63_object; // 0x1a36 Mov
	func_6964(var_67_object); // 0x1a37 NEW_2
	var_61_bool = var_66_bool; // 0x1a38 Mov
	return 2; // 0x1a3a Return
}


func_8752()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x2230 PushV
	var_152_int = 767; // 0x2231 PushI
	var_153_int = 2; // 0x2232 PushI
	var_154_int = 540064; // 0x2233 PushI
	CreateDiaryEntry(var_151_object, var_152_int, var_153_int, var_154_int); // 0x2234 Func
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0; // 0x2236 PushV
	var_156_object = var_151_object; // 0x2237 Mov
	var_157_int = 764; // 0x2238 MovI
	func_8778(var_155_bool, var_156_object, var_157_int); // 0x2239 NEW_2
	return 2; // 0x223b Return
}


func_7217(var_236_string, var_237_bool)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0; // 0x1c31 PushV
	lshHasAnimation(var_243_bool, var_236_string); // 0x1c32 Func
	var_246_bool = var_243_bool; // 0x1c34 Push
	if(var_246_bool == 0) goto Label_7227; // 0x1c35 JumpB
	lshGetAnimTimes(var_236_string, var_244_float, var_245_float); // 0x1c36 Func
	lshPlayAnimation(var_244_float, var_245_float, var_237_bool); // 0x1c38 Func
	goto Label_7231; // 0x1c3a Jump
	
Label_7231:
	return 6; // 0x1c3f Return
	
Label_7227:
	var_247_string = "Can't find lsh animation : "; // 0x1c3b PushS
	var_248_int = var_247_string + var_236_string; // 0x1c3c Add
	Trace(var_248_int); // 0x1c3d Func
}


func_7737()
{
	var_118_object = Obj(); var_119_int = 0; var_120_object = Obj(); var_121_int = 0; // 0x1e39 PushV
	var_122_string = "d7q01"; // 0x1e3a PushS
	var_123_int = 2; // 0x1e3b PushI
	SetVariable(var_122_string, var_123_int); // 0x1e3c Func
	var_124_object = Obj(); // 0x1e3e PushV
	func_8806(var_124_object); // 0x1e3f NEW_2
	var_120_object = var_124_object; // 0x1e40 Mov
	var_125_string = "d7q01AglajaFindLierSelf"; // 0x1e42 PushS
	var_126_string = "pt_map_aglaja"; // 0x1e43 PushS
	var_127_int = 1; // 0x1e44 PushI
	var_128_int = 515411; // 0x1e45 PushI
	var_129_float = 0; // 0x1e46 PushV
	func_7368(var_129_float); // 0x1e47 NEW_2
	AddMark(var_125_string, var_126_string, var_127_int, var_128_int, var_129_float); // 0x1e49 ObjFunc
	func_8635(); // 0x1e4c NEW_2
	var_138_string = "d7q01_mreport"; // 0x1e4e PushS
	var_139_int = 1; // 0x1e4f PushI
	RemoveItemByType(var_121_int, var_138_string, var_139_int); // 0x1e50 ObjFunc
	var_140_string = "d7q01_dreport"; // 0x1e52 PushS
	var_141_int = 1; // 0x1e53 PushI
	RemoveItemByType(var_121_int, var_140_string, var_141_int); // 0x1e54 ObjFunc
	var_142_string = "d7q01_ureport"; // 0x1e56 PushS
	var_143_int = 1; // 0x1e57 PushI
	RemoveItemByType(var_121_int, var_142_string, var_143_int); // 0x1e58 ObjFunc
	return 4; // 0x1e5a Return
}


func_6716(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0x1a3c PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0x1a3d PushE
	RotateAsync(var_113_float, var_114_float); // 0x1a3e Func
	return 0; // 0x1a40 Return
}


func_8765(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x223d PushV
	GetDiaryRoot(var_62_object); // 0x223e Func
	var_63_bool = var_62_object == 0; // 0x2240 Not
	if(var_63_bool == 0) goto Label_8775; // 0x2241 JumpB
	var_64_string = "Can't retrieve diary root"; // 0x2242 PushS
	Trace(var_64_string); // 0x2243 Func
	var_60_object = 0; // 0x2245 MovB
	return 2; // 0x2246 Return
	
Label_8775:
	var_60_object = var_62_object; // 0x2247 Mov
	return 2; // 0x2248 Return
}


func_7232(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0; // 0x1c40 PushV
	var_168_bool = 0; // 0x1c41 PushV
	func_7439(var_168_bool); // 0x1c42 NEW_2
	if(var_168_bool == 0) goto Label_7245; // 0x1c44 JumpB
	lshHasSpeech(var_167_bool, var_165_string); // 0x1c45 Func
	var_169_bool = var_167_bool; // 0x1c47 Push
	if(var_169_bool == 0) goto Label_7245; // 0x1c48 JumpB
	lshPlaySpeech(var_165_string); // 0x1c49 Func
	var_164_bool = 1; // 0x1c4b MovB
	return 2; // 0x1c4c Return
	
Label_7245:
	var_164_bool = 0; // 0x1c4d MovB
	return 2; // 0x1c4e Return
}


func_6721(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0x1a41 PushV
	var_49_string = "player"; // 0x1a42 PushS
	FindActor(var_47_object, var_49_string); // 0x1a43 Func
	var_50_bool = var_47_object == 0; // 0x1a45 Not
	if(var_50_bool == 0) goto Label_6729; // 0x1a46 JumpB
	var_44_bool = 0; // 0x1a47 MovB
	return 4; // 0x1a48 Return
	
Label_6729:
	var_51_float = 0; var_52_object = Obj(); // 0x1a49 PushV
	var_52_object = var_47_object; // 0x1a4a Mov
	func_6939(var_52_object); // 0x1a4b NEW_2
	var_59_float = 90000.0; // 0x1a4d PushF
	var_60_bool = var_51_float > var_59_float; // 0x1a4e GT
	if(var_60_bool == 0) goto Label_6738; // 0x1a4f JumpB
	var_44_bool = 0; // 0x1a50 MovB
	return 4; // 0x1a51 Return
	
Label_6738:
	CanSee(var_48_bool, var_47_object); // 0x1a52 Func
	var_44_bool = var_48_bool; // 0x1a54 Mov
	return 4; // 0x1a55 Return
}


func_5696(var_0_object, var_841_int, var_842_object)
{
	var_844_object = Obj(); var_845_bool = 0; var_846_int = 0; var_847_bool = 0; var_848_object = Obj(); var_849_bool = 0; var_850_int = 0; var_851_bool = 0; // 0x1640 PushV
	var_0_object = var_842_object; // 0x1641 TMov
	var_852_bool = 0; var_853_object = Obj(); var_854_float = 0; // 0x1642 PushV
	var_853_object = var_842_object; // 0x1643 Mov
	var_854_float = 70.0; // 0x1644 MovF
	func_6978(var_853_object, var_854_float); // 0x1645 NEW_2
	var_855_bool = var_852_bool == 0; // 0x1647 Not
	if(var_855_bool == 0) goto Label_5707; // 0x1648 JumpB
	var_841_int = -2; // 0x1649 MovI
	return 8; // 0x164a Return
	
Label_5707:
	CreateDialog(var_848_object); // 0x164b Func
	var_856_int = 0; // 0x164d PushV
	func_7433(var_856_int); // 0x164e NEW_2
	SetNPCName(var_856_int); // 0x1650 ObjFunc
	var_857_int = 0; // 0x1652 PushV
	func_7431(var_857_int); // 0x1653 NEW_2
	SetNPCDescription(var_857_int); // 0x1655 ObjFunc
	var_858_string = ""; // 0x1657 PushV
	func_7435(var_858_string); // 0x1658 NEW_2
	SetPhoto(var_858_string); // 0x165a ObjFunc
	var_859_string = ""; // 0x165c PushV
	func_7437(var_859_string); // 0x165d NEW_2
	SetPhoto2(var_859_string); // 0x165f ObjFunc
	var_860_int = 0; // 0x1661 PushV
	func_8856(var_860_int); // 0x1662 NEW_2
	SetPlayerName(var_860_int); // 0x1664 ObjFunc
	var_850_int = -1; // 0x1666 MovI
	IsOverrideActive(var_849_bool); // 0x1667 Func
	var_861_bool = var_849_bool; // 0x1669 Push
	if(var_861_bool == 0) goto Label_5741; // 0x166a JumpB
	var_841_int = -2; // 0x166b MovI
	return 8; // 0x166c Return
	
Label_5741:
	DoDialog(var_848_object); // 0x166d Func
	var_862_bool = 0; var_863_object = Obj(); // 0x166f PushV
	var_864_object = Obj(); // 0x1670 PushV
	func_7254(var_864_object); // 0x1671 NEW_2
	var_863_object = var_864_object; // 0x1672 Mov
	func_7063(var_862_bool, var_863_object); // 0x1674 NEW_2
	var_865_object = Obj(); var_866_object = Obj(); // 0x1676 PushV
	var_865_object = var_842_object; // 0x1677 Mov
	var_866_object = var_848_object; // 0x1678 Mov
	TaskCall(13); // 0x1679 TaskCall
	func_5777(var_867_object, var_868_object, var_869_string, var_870_bool, var_865_object, var_866_object); // 0x167a NEW_2
	TaskReturn(); // 0x167b TaskReturn
	IsDialogEnd(var_851_bool); // 0x167d ObjFunc
	
Label_5759:
	var_956_bool = var_851_bool == 0; // 0x167f Not
	if(var_956_bool == 0) goto Label_5766; // 0x1680 JumpB
	sync(); // 0x1681 Func
	IsDialogEnd(var_851_bool); // 0x1683 ObjFunc
	goto Label_5759; // 0x1685 Jump
	
Label_5766:
	var_957_object = Obj(); // 0x1686 PushV
	var_957_object = var_842_object; // 0x1687 Mov
	func_7046(); // 0x1688 NEW_2
	StopDialog(var_848_object); // 0x168a Func
	GetReturnValue(var_850_int); // 0x168c ObjFunc
	var_841_int = var_850_int; // 0x168e Mov
	return 8; // 0x168f Return
}


func_8778(var_51_bool, var_52_object, var_53_int)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; // 0x224a PushV
	var_60_object = Obj(); // 0x224b PushV
	func_8765(var_60_object); // 0x224c NEW_2
	var_57_object = var_60_object; // 0x224d Mov
	Find(var_53_int, var_58_object); // 0x224f ObjFunc
	var_65_bool = var_58_object == 0; // 0x2251 Not
	if(var_65_bool == 0) goto Label_8793; // 0x2252 JumpB
	var_66_string = "Can't find diary parent with id: "; // 0x2253 PushS
	var_67_int = var_66_string + var_53_int; // 0x2254 Add
	Trace(var_67_int); // 0x2255 Func
	var_51_bool = 0; // 0x2257 MovB
	return 6; // 0x2258 Return
	
Label_8793:
	AddChild(var_52_object); // 0x2259 ObjFunc
	var_68_int = 7; // 0x225b PushI
	SendWorldWndMessage(var_68_int); // 0x225c Func
	GetCategory(var_59_int); // 0x225e ObjFunc
	SetDiarySection(var_59_int); // 0x2260 Func
	var_51_bool = 0; // 0x2262 MovB
	return 6; // 0x2263 Return
}


func_8267(var_453_bool)
{
	var_455_int = 0; var_456_string = ""; // 0x204c PushV
	var_456_string = "ood7Aglaja5"; // 0x204d MovS
	func_7270(var_455_int, var_456_string); // 0x204e NEW_2
	var_457_int = 0; // 0x2050 PushI
	var_458_bool = var_455_int == var_457_int; // 0x2051 Eq
	if(var_458_bool == 0) goto Label_8277; // 0x2052 JumpB
	var_453_bool = 1; // 0x2053 MovB
	return 0; // 0x2054 Return
	
Label_8277:
	var_453_bool = 0; // 0x2055 MovB
	return 0; // 0x2056 Return
}


func_7247()
{
	var_39_bool = 0; // 0x1c4f PushV
	func_7439(var_39_bool); // 0x1c50 NEW_2
	if(var_39_bool == 0) goto Label_7253; // 0x1c52 JumpB
	lshStopSpeech(); // 0x1c53 Func
	
Label_7253:
	return 0; // 0x1c55 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_225_object, var_226_object)
{
	var_0_object = var_226_object; // 0x52 TMov
	var_1_object = var_225_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_231_int = 1; // 0x55 PushI
	if(var_231_int == 0) goto Label_109; // 0x56 JumpB
	var_232_string = ""; // 0x57 PushV
	var_232_string = "Neutral"; // 0x58 MovS
	func_139(var_226_object, var_232_string); // 0x59 NEW_2
	var_249_int = 533096; // 0x5b PushI
	SetMessage(var_249_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_250_int = 533097; // 0x60 PushI
	var_251_int = 34607; // 0x61 PushI
	var_252_int = 34606; // 0x62 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x63 TObjFunc
	var_253_int = 533103; // 0x65 PushI
	var_254_int = 34615; // 0x66 PushI
	var_255_int = 34614; // 0x67 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_256_bool = 0; // 0x6d PushV
	func_7439(var_256_bool); // 0x6e NEW_2
	if(var_256_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_257_string = var_3_string; // 0x73 PushT
	if(var_257_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_258_string = ""; // 0x76 PushV
	var_258_string = var_2_object; // 0x77 MovT
	func_7201(var_258_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_269_string = "all"; // 0x7c PushS
	var_270_string = "idle"; // 0x7d PushS
	PlayAnimation(var_269_string, var_270_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_271_string = var_3_string; // 0x82 PushT
	if(var_271_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_272_string = "all"; // 0x85 PushS
	var_273_string = "idle"; // 0x86 PushS
	PlayAnimation(var_272_string, var_273_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_7254(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x1c56 PushV
	self(var_134_object); // 0x1c57 Func
	var_132_object = var_134_object; // 0x1c59 Mov
	return 2; // 0x1c5a Return
}


func_1111(var_0_object, var_1_object, var_2_object, var_3_string, var_393_object, var_394_object)
{
	var_0_object = var_394_object; // 0x458 TMov
	var_1_object = var_393_object; // 0x459 TMov
	var_3_string = 0; // 0x45a TMovB
	var_399_int = 1; // 0x45b PushI
	if(var_399_int == 0) goto Label_1213; // 0x45c JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x45d PushV
	var_401_object = var_1_object; // 0x45e MovT
	func_8224(var_401_object); // 0x45f NEW_2
	if(var_400_bool == 0) goto Label_1147; // 0x461 JumpB
	var_406_object = Obj(); var_407_object = Obj(); // 0x462 PushV
	var_406_object = var_1_object; // 0x463 MovT
	var_407_object = var_0_object; // 0x464 MovT
	func_7673(); // 0x465 NEW_2
	var_410_string = ""; // 0x467 PushV
	var_410_string = "Neutral"; // 0x468 MovS
	func_1243(var_394_object, var_410_string); // 0x469 NEW_2
	var_418_int = 513033; // 0x46b PushI
	SetMessage(var_418_int); // 0x46c TObjFunc
	ClearReplies(); // 0x46e TObjFunc
	var_419_int = 513034; // 0x470 PushI
	var_420_int = 14260; // 0x471 PushI
	var_421_int = 14241; // 0x472 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x473 TObjFunc
	var_422_int = 534463; // 0x475 PushI
	var_423_int = 36105; // 0x476 PushI
	var_424_int = 36104; // 0x477 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x478 TObjFunc
	goto Label_1213; // 0x47a Jump
	
Label_1213:
	var_425_bool = 0; // 0x4bd PushV
	func_7439(var_425_bool); // 0x4be NEW_2
	if(var_425_bool == 0) goto Label_1228; // 0x4c0 JumpB
	
Label_1217:
	lshWaitForAnimEnd(); // 0x4c1 Func
	var_426_string = var_3_string; // 0x4c3 PushT
	if(var_426_string == 0) goto Label_1222; // 0x4c4 JumpB
	goto Label_1227; // 0x4c5 Jump
	
Label_1227:
	goto Label_1242; // 0x4cb Jump
	
Label_1242:
	return 0; // 0x4da Return
	
Label_1222:
	var_427_string = ""; // 0x4c6 PushV
	var_427_string = var_2_object; // 0x4c7 MovT
	func_7201(var_427_string); // 0x4c8 NEW_2
	goto Label_1217; // 0x4ca Jump
	
Label_1228:
	var_428_string = "all"; // 0x4cc PushS
	var_429_string = "idle"; // 0x4cd PushS
	PlayAnimation(var_428_string, var_429_string); // 0x4ce Func
	
Label_1232:
	WaitForAnimEnd(); // 0x4d0 Func
	var_430_string = var_3_string; // 0x4d2 PushT
	if(var_430_string == 0) goto Label_1237; // 0x4d3 JumpB
	goto Label_1242; // 0x4d4 Jump
	
Label_1237:
	var_431_string = "all"; // 0x4d5 PushS
	var_432_string = "idle"; // 0x4d6 PushS
	PlayAnimation(var_431_string, var_432_string); // 0x4d7 Func
	goto Label_1232; // 0x4d9 Jump
	
Label_1147:
	var_433_string = ""; // 0x47b PushV
	var_433_string = "Arrogance"; // 0x47c MovS
	func_1243(var_394_object, var_433_string); // 0x47d NEW_2
	var_434_int = 513031; // 0x47f PushI
	SetMessage(var_434_int); // 0x480 TObjFunc
	ClearReplies(); // 0x482 TObjFunc
	var_435_bool = 0; // 0x484 PushV
	var_435_bool = 0; // 0x485 MovB
	var_436_bool = 0; var_437_object = Obj(); // 0x486 PushV
	var_437_object = var_1_object; // 0x487 MovT
	func_8236(var_436_bool, var_437_object); // 0x488 NEW_2
	if(var_436_bool == 0) goto Label_1169; // 0x48a JumpB
	var_453_bool = 0; var_454_object = Obj(); // 0x48b PushV
	var_454_object = var_1_object; // 0x48c MovT
	func_8267(var_454_object); // 0x48d NEW_2
	if(var_453_bool == 0) goto Label_1169; // 0x48f JumpB
	var_435_bool = 1; // 0x490 MovB
	
Label_1169:
	if(var_435_bool == 0) goto Label_1175; // 0x491 JumpB
	var_459_int = 513075; // 0x492 PushI
	var_460_int = 14369; // 0x493 PushI
	var_461_int = 14285; // 0x494 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x495 TObjFunc
	
Label_1175:
	var_462_bool = 0; var_463_object = Obj(); // 0x497 PushV
	var_463_object = var_1_object; // 0x498 MovT
	func_8279(var_463_object); // 0x499 NEW_2
	if(var_462_bool == 0) goto Label_1185; // 0x49b JumpB
	var_468_int = 513141; // 0x49c PushI
	var_469_int = 14362; // 0x49d PushI
	var_470_int = 14360; // 0x49e PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x49f TObjFunc
	
Label_1185:
	var_471_bool = 0; var_472_object = Obj(); // 0x4a1 PushV
	var_472_object = var_1_object; // 0x4a2 MovT
	func_8291(var_472_object); // 0x4a3 NEW_2
	if(var_471_bool == 0) goto Label_1195; // 0x4a5 JumpB
	var_477_int = 513377; // 0x4a6 PushI
	var_478_int = 14610; // 0x4a7 PushI
	var_479_int = 14609; // 0x4a8 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x4a9 TObjFunc
	
Label_1195:
	var_480_bool = 0; var_481_object = Obj(); // 0x4ab PushV
	var_481_object = var_1_object; // 0x4ac MovT
	func_8095(var_481_object); // 0x4ad NEW_2
	if(var_480_bool == 0) goto Label_1205; // 0x4af JumpB
	var_486_int = 533254; // 0x4b0 PushI
	var_487_int = 34769; // 0x4b1 PushI
	var_488_int = 34768; // 0x4b2 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x4b3 TObjFunc
	
Label_1205:
	var_489_int = 513032; // 0x4b5 PushI
	var_490_int = -1; // 0x4b6 PushI
	var_491_int = 14239; // 0x4b7 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x4b8 TObjFunc
	goto Label_1213; // 0x4ba Jump
}


func_8279(var_462_bool)
{
	var_464_int = 0; var_465_string = ""; // 0x2058 PushV
	var_465_string = "d7q01"; // 0x2059 MovS
	func_7270(var_464_int, var_465_string); // 0x205a NEW_2
	var_466_int = 3; // 0x205c PushI
	var_467_bool = var_464_int == var_466_int; // 0x205d Eq
	if(var_467_bool == 0) goto Label_8289; // 0x205e JumpB
	var_462_bool = 1; // 0x205f MovB
	return 0; // 0x2060 Return
	
Label_8289:
	var_462_bool = 0; // 0x2061 MovB
	return 0; // 0x2062 Return
}


func_6743()
{
	var_960_float = 0; var_961_float = 0; // 0x1a57 PushV
	var_962_int = 8; // 0x1a58 PushI
	var_963_int = 16; // 0x1a59 PushI
	rand(var_961_float, var_962_int, var_963_int); // 0x1a5a Func
	var_964_int = 10; // 0x1a5c PushI
	SetTimer(var_964_int, var_961_float); // 0x1a5d Func
	return 2; // 0x1a5f Return
}


func_7772()
{
	var_146_string = "ood7Aglaja5"; // 0x1e5d PushS
	var_147_int = 1; // 0x1e5e PushI
	SetVariable(var_146_string, var_147_int); // 0x1e5f Func
	return 0; // 0x1e61 Return
}


func_2652(var_2_object, var_541_string)
{
	var_542_bool = 0; // 0xa5d PushV
	func_7439(var_542_bool); // 0xa5e NEW_2
	var_543_bool = var_542_bool == 0; // 0xa60 Not
	if(var_543_bool == 0) goto Label_2659; // 0xa61 JumpB
	return 0; // 0xa62 Return
	
Label_2659:
	var_544_bool = var_541_string == var_2_object; // 0xa63 Eq
	if(var_544_bool == 0) goto Label_2662; // 0xa64 JumpB
	return 0; // 0xa65 Return
	
Label_2662:
	var_545_string = ""; var_546_bool = 0; // 0xa66 PushV
	var_545_string = var_541_string; // 0xa67 Mov
	var_547_string = ""; // 0xa68 PushS
	var_548_bool = var_541_string == var_547_string; // 0xa69 Eq
	if(var_548_bool == 0) goto Label_2669; // 0xa6a JumpB
	var_546_bool = 0; // 0xa6b MovB
	goto Label_2670; // 0xa6c Jump
	
Label_2670:
	func_7217(var_545_string, var_546_bool); // 0xa6e NEW_2
	var_2_object = var_541_string; // 0xa70 TMov
	return 0; // 0xa71 Return
	
Label_2669:
	var_546_bool = 1; // 0xa6d MovB
}


func_7260(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0x1c5c PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0x1c5d Or
	var_101_float = sqrt(var_102_int); // 0x1c5e Sqrt2
	var_103_float = 0.0; // 0x1c5f PushF
	var_104_bool = var_101_float < var_103_float; // 0x1c60 LT
	if(var_104_bool == 0) goto Label_7268; // 0x1c61 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0x1c62 MovV
	return 2; // 0x1c63 Return
	
Label_7268:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0x1c64 Div2
	return 2; // 0x1c65 Return
}


func_6752()
{
	var_959_int = 10; // 0x1a60 PushI
	KillTimer(var_959_int); // 0x1a61 Func
	return 0; // 0x1a63 Return
}


func_7778()
{
	var_172_object = Obj(); var_173_object = Obj(); var_174_object = Obj(); var_175_object = Obj(); // 0x1e62 PushV
	var_176_object = Obj(); // 0x1e63 PushV
	func_8806(var_176_object); // 0x1e64 NEW_2
	var_174_object = var_176_object; // 0x1e65 Mov
	var_177_string = "d7q01AglajaFindLierSelf"; // 0x1e67 PushS
	FindMark(var_175_object, var_177_string); // 0x1e68 ObjFunc
	var_178_object = var_175_object; // 0x1e6a Push
	if(var_178_object == 0) goto Label_7790; // 0x1e6b JumpB
	Remove(); // 0x1e6c ObjFunc
	
Label_7790:
	var_179_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x1e6e PushS
	FindMark(var_175_object, var_179_string); // 0x1e6f ObjFunc
	var_180_object = var_175_object; // 0x1e71 Push
	if(var_180_object == 0) goto Label_7797; // 0x1e72 JumpB
	Remove(); // 0x1e73 ObjFunc
	
Label_7797:
	var_181_string = "d7q01BirdmaskD"; // 0x1e75 PushS
	FindMark(var_175_object, var_181_string); // 0x1e76 ObjFunc
	var_182_object = var_175_object; // 0x1e78 Push
	if(var_182_object == 0) goto Label_7804; // 0x1e79 JumpB
	Remove(); // 0x1e7a ObjFunc
	
Label_7804:
	var_183_string = "d7q01BirdmaskM"; // 0x1e7c PushS
	FindMark(var_175_object, var_183_string); // 0x1e7d ObjFunc
	var_184_object = var_175_object; // 0x1e7f Push
	if(var_184_object == 0) goto Label_7811; // 0x1e80 JumpB
	Remove(); // 0x1e81 ObjFunc
	
Label_7811:
	var_185_string = "d7q01BirdmaskU"; // 0x1e83 PushS
	FindMark(var_175_object, var_185_string); // 0x1e84 ObjFunc
	var_186_object = var_175_object; // 0x1e86 Push
	if(var_186_object == 0) goto Label_7818; // 0x1e87 JumpB
	Remove(); // 0x1e88 ObjFunc
	
Label_7818:
	func_8622(); // 0x1e8b NEW_2
	var_195_bool = 0; var_196_string = ""; var_197_string = ""; // 0x1e8d PushV
	var_196_string = "quest_d7_01"; // 0x1e8e MovS
	var_197_string = "completed"; // 0x1e8f MovS
	func_7356(var_195_bool, var_196_string, var_197_string); // 0x1e90 NEW_2
	return 4; // 0x1e92 Return
}


func_8291(var_471_bool)
{
	var_473_int = 0; var_474_string = ""; // 0x2064 PushV
	var_474_string = "d7q02"; // 0x2065 MovS
	func_7270(var_473_int, var_474_string); // 0x2066 NEW_2
	var_475_int = 2; // 0x2068 PushI
	var_476_bool = var_473_int == var_475_int; // 0x2069 Eq
	if(var_476_bool == 0) goto Label_8301; // 0x206a JumpB
	var_471_bool = 1; // 0x206b MovB
	return 0; // 0x206c Return
	
Label_8301:
	var_471_bool = 0; // 0x206d MovB
	return 0; // 0x206e Return
}


func_8806(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj(); // 0x2266 PushV
	GetMainOutdoorScene(var_51_object); // 0x2267 Func
	var_53_bool = var_51_object == 0; // 0x2269 NullEq
	if(var_53_bool == 0) goto Label_8817; // 0x226a JumpB
	var_54_string = "Can't find main outdoor scene"; // 0x226b PushS
	Trace(var_54_string); // 0x226c Func
	var_52_object = 0; // 0x226e SetNull
	var_48_object = var_52_object; // 0x226f Mov
	return 4; // 0x2270 Return
	
Label_8817:
	GetMap(var_52_object); // 0x2271 ObjFunc
	var_48_object = var_52_object; // 0x2273 Mov
	return 4; // 0x2274 Return
}


func_7270(var_341_int, var_342_string)
{
	var_343_int = 0; var_344_int = 0; // 0x1c66 PushV
	GetVariable(var_342_string, var_344_int); // 0x1c67 Func
	var_341_int = var_344_int; // 0x1c69 Mov
	return 2; // 0x1c6a Return
}


func_7275(var_112_object, var_113_string)
{
	var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj(); // 0x1c6b PushV
	GetMainOutdoorScene(var_116_object); // 0x1c6c Func
	var_118_string = ".bin"; // 0x1c6e PushS
	var_119_int = var_113_string + var_118_string; // 0x1c6f Add
	AddBlankActor(var_117_object, var_116_object, var_113_string, var_119_int); // 0x1c70 Func
	var_112_object = var_117_object; // 0x1c72 Mov
	return 4; // 0x1c73 Return
}


func_8303(var_563_bool)
{
	var_565_int = 0; var_566_string = ""; // 0x2070 PushV
	var_566_string = "d8q01"; // 0x2071 MovS
	func_7270(var_565_int, var_566_string); // 0x2072 NEW_2
	var_567_int = 0; // 0x2074 PushI
	var_568_bool = var_565_int == var_567_int; // 0x2075 Eq
	if(var_568_bool == 0) goto Label_8313; // 0x2076 JumpB
	var_563_bool = 1; // 0x2077 MovB
	return 0; // 0x2078 Return
	
Label_8313:
	var_563_bool = 0; // 0x2079 MovB
	return 0; // 0x207a Return
}


func_7286(var_139_int, var_140_int)
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x1c76 PushV
	CreateIntVector(var_142_object); // 0x1c77 Func
	add(var_139_int); // 0x1c79 ObjFunc
	add(var_140_int); // 0x1c7b ObjFunc
	var_143_int = 3; // 0x1c7d PushI
	SendWorldWndMessage(var_143_int, var_142_object); // 0x1c7e Func
	return 2; // 0x1c80 Return
}


func_8823(var_212_object, var_213_string, var_214_float)
{
	var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_object = Obj(); var_219_bool = 0; var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_object = Obj(); var_223_bool = 0; // 0x2277 PushV
	GetMainOutdoorScene(var_222_object); // 0x2278 Func
	var_224_bool = var_222_object == 0; // 0x227a NullEq
	if(var_224_bool == 0) goto Label_8832; // 0x227b JumpB
	var_225_string = "Can't find main outdoor scene"; // 0x227c PushS
	Trace(var_225_string); // 0x227d Func
	return 8; // 0x227f Return
	
Label_8832:
	GetLocator(var_213_string, var_223_bool, var_220_cvector, var_221_cvector); // 0x2280 ObjFunc
	var_226_bool = var_223_bool == 0; // 0x2282 Not
	if(var_226_bool == 0) goto Label_8842; // 0x2283 JumpB
	var_227_string = "Warning: outdoor scene locator "; // 0x2284 PushS
	var_228_int = var_227_string + var_213_string; // 0x2285 Add
	var_229_string = " doesnt exist"; // 0x2286 PushS
	var_230_int = var_228_int + var_229_string; // 0x2287 Add
	Trace(var_230_int); // 0x2288 Func
	
Label_8842:
	GetMap(var_212_object); // 0x228a ObjFunc
	var_231_bool = var_212_object == 0; // 0x228c NullEq
	if(var_231_bool == 0) goto Label_8850; // 0x228d JumpB
	var_232_string = "Can't find map"; // 0x228e PushS
	Trace(var_232_string); // 0x228f Func
	return 8; // 0x2291 Return
	
Label_8850:
	var_233_float = GetByIndex(var_220_cvector, 0); // 0x2292 PushE
	var_234_float = GetByIndex(var_220_cvector, 2); // 0x2293 PushE
	SetMapParams(var_233_float, var_234_float, var_214_float); // 0x2294 ObjFunc
	return 8; // 0x2296 Return
}


func_8315(var_527_bool)
{
	var_529_int = 0; var_530_string = ""; // 0x207c PushV
	var_530_string = "ood8Aglaja1"; // 0x207d MovS
	func_7270(var_529_int, var_530_string); // 0x207e NEW_2
	var_531_int = 0; // 0x2080 PushI
	var_532_bool = var_529_int == var_531_int; // 0x2081 Eq
	if(var_532_bool == 0) goto Label_8325; // 0x2082 JumpB
	var_527_bool = 1; // 0x2083 MovB
	return 0; // 0x2084 Return
	
Label_8325:
	var_527_bool = 0; // 0x2085 MovB
	return 0; // 0x2086 Return
}


func_3712(var_2_object, var_760_string)
{
	var_761_bool = 0; // 0xe81 PushV
	func_7439(var_761_bool); // 0xe82 NEW_2
	var_762_bool = var_761_bool == 0; // 0xe84 Not
	if(var_762_bool == 0) goto Label_3719; // 0xe85 JumpB
	return 0; // 0xe86 Return
	
Label_3719:
	var_763_bool = var_760_string == var_2_object; // 0xe87 Eq
	if(var_763_bool == 0) goto Label_3722; // 0xe88 JumpB
	return 0; // 0xe89 Return
	
Label_3722:
	var_764_string = ""; var_765_bool = 0; // 0xe8a PushV
	var_764_string = var_760_string; // 0xe8b Mov
	var_766_string = ""; // 0xe8c PushS
	var_767_bool = var_760_string == var_766_string; // 0xe8d Eq
	if(var_767_bool == 0) goto Label_3729; // 0xe8e JumpB
	var_765_bool = 0; // 0xe8f MovB
	goto Label_3730; // 0xe90 Jump
	
Label_3730:
	func_7217(var_764_string, var_765_bool); // 0xe92 NEW_2
	var_2_object = var_760_string; // 0xe94 TMov
	return 0; // 0xe95 Return
	
Label_3729:
	var_765_bool = 1; // 0xe91 MovB
}


func_7298(var_128_object, var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x1c82 PushV
	var_132_object = Obj(); var_133_string = ""; var_134_int = 0; // 0x1c83 PushV
	var_132_object = var_128_object; // 0x1c84 Mov
	var_133_string = "money"; // 0x1c85 MovS
	var_134_int = var_129_int; // 0x1c86 Mov
	func_6947(var_133_string, var_134_int); // 0x1c87 NEW_2
	var_138_int = 0; // 0x1c89 PushI
	var_139_bool = var_129_int > var_138_int; // 0x1c8a GT
	if(var_139_bool == 0) goto Label_7316; // 0x1c8b JumpB
	var_140_string = "Money"; // 0x1c8c PushS
	GetInvItemByName(var_131_int, var_140_string); // 0x1c8d Func
	var_141_int = 0; var_142_int = 0; // 0x1c8f PushV
	var_141_int = var_131_int; // 0x1c90 Mov
	var_142_int = var_129_int; // 0x1c91 Mov
	func_7286(var_141_int, var_142_int); // 0x1c92 NEW_2
	
Label_7316:
	return 2; // 0x1c94 Return
}


func_8327(var_674_bool)
{
	var_676_int = 0; var_677_string = ""; // 0x2088 PushV
	var_677_string = "d9TalkToPolkovodec"; // 0x2089 MovS
	func_7270(var_676_int, var_677_string); // 0x208a NEW_2
	var_678_int = 0; // 0x208c PushI
	var_679_bool = var_676_int != var_678_int; // 0x208d Neq
	if(var_679_bool == 0) goto Label_8337; // 0x208e JumpB
	var_674_bool = 1; // 0x208f MovB
	return 0; // 0x2090 Return
	
Label_8337:
	var_674_bool = 0; // 0x2091 MovB
	return 0; // 0x2092 Return
}


func_139(var_2_object, var_232_string)
{
	var_233_bool = 0; // 0x8c PushV
	func_7439(var_233_bool); // 0x8d NEW_2
	var_234_bool = var_233_bool == 0; // 0x8f Not
	if(var_234_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_235_bool = var_232_string == var_2_object; // 0x92 Eq
	if(var_235_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_236_string = ""; var_237_bool = 0; // 0x95 PushV
	var_236_string = var_232_string; // 0x96 Mov
	var_238_string = ""; // 0x97 PushS
	var_239_bool = var_232_string == var_238_string; // 0x98 Eq
	if(var_239_bool == 0) goto Label_156; // 0x99 JumpB
	var_237_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_7217(var_236_string, var_237_bool); // 0x9d NEW_2
	var_2_object = var_232_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_237_bool = 1; // 0x9c MovB
}


func_5777(var_0_object, var_1_object, var_2_object, var_3_string, var_865_object, var_866_object)
{
	var_0_object = var_866_object; // 0x1692 TMov
	var_1_object = var_865_object; // 0x1693 TMov
	var_3_string = 0; // 0x1694 TMovB
	var_871_int = 1; // 0x1695 PushI
	if(var_871_int == 0) goto Label_5893; // 0x1696 JumpB
	var_872_bool = 0; var_873_object = Obj(); // 0x1697 PushV
	var_873_object = var_1_object; // 0x1698 MovT
	func_8351(var_873_object); // 0x1699 NEW_2
	if(var_872_bool == 0) goto Label_5808; // 0x169b JumpB
	var_878_object = Obj(); var_879_object = Obj(); // 0x169c PushV
	var_878_object = var_1_object; // 0x169d MovT
	var_879_object = var_0_object; // 0x169e MovT
	func_7996(); // 0x169f NEW_2
	var_882_string = ""; // 0x16a1 PushV
	var_882_string = "Neutral"; // 0x16a2 MovS
	func_5923(var_866_object, var_882_string); // 0x16a3 NEW_2
	var_890_int = 514194; // 0x16a5 PushI
	SetMessage(var_890_int); // 0x16a6 TObjFunc
	ClearReplies(); // 0x16a8 TObjFunc
	var_891_int = 514195; // 0x16aa PushI
	var_892_int = 15410; // 0x16ab PushI
	var_893_int = 15409; // 0x16ac PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0x16ad TObjFunc
	goto Label_5893; // 0x16af Jump
	
Label_5893:
	var_894_bool = 0; // 0x1705 PushV
	func_7439(var_894_bool); // 0x1706 NEW_2
	if(var_894_bool == 0) goto Label_5908; // 0x1708 JumpB
	
Label_5897:
	lshWaitForAnimEnd(); // 0x1709 Func
	var_895_string = var_3_string; // 0x170b PushT
	if(var_895_string == 0) goto Label_5902; // 0x170c JumpB
	goto Label_5907; // 0x170d Jump
	
Label_5907:
	goto Label_5922; // 0x1713 Jump
	
Label_5922:
	return 0; // 0x1722 Return
	
Label_5902:
	var_896_string = ""; // 0x170e PushV
	var_896_string = var_2_object; // 0x170f MovT
	func_7201(var_896_string); // 0x1710 NEW_2
	goto Label_5897; // 0x1712 Jump
	
Label_5908:
	var_897_string = "all"; // 0x1714 PushS
	var_898_string = "idle"; // 0x1715 PushS
	PlayAnimation(var_897_string, var_898_string); // 0x1716 Func
	
Label_5912:
	WaitForAnimEnd(); // 0x1718 Func
	var_899_string = var_3_string; // 0x171a PushT
	if(var_899_string == 0) goto Label_5917; // 0x171b JumpB
	goto Label_5922; // 0x171c Jump
	
Label_5917:
	var_900_string = "all"; // 0x171d PushS
	var_901_string = "idle"; // 0x171e PushS
	PlayAnimation(var_900_string, var_901_string); // 0x171f Func
	goto Label_5912; // 0x1721 Jump
	
Label_5808:
	var_902_bool = 0; var_903_object = Obj(); // 0x16b0 PushV
	var_903_object = var_1_object; // 0x16b1 MovT
	func_8339(var_903_object); // 0x16b2 NEW_2
	if(var_902_bool == 0) goto Label_5838; // 0x16b4 JumpB
	var_908_object = Obj(); var_909_object = Obj(); // 0x16b5 PushV
	var_908_object = var_1_object; // 0x16b6 MovT
	var_909_object = var_0_object; // 0x16b7 MovT
	func_7867(); // 0x16b8 NEW_2
	var_912_string = ""; // 0x16ba PushV
	var_912_string = "Neutral"; // 0x16bb MovS
	func_5923(var_866_object, var_912_string); // 0x16bc NEW_2
	var_913_int = 534475; // 0x16be PushI
	SetMessage(var_913_int); // 0x16bf TObjFunc
	ClearReplies(); // 0x16c1 TObjFunc
	var_914_int = 536564; // 0x16c3 PushI
	var_915_int = 38380; // 0x16c4 PushI
	var_916_int = 38379; // 0x16c5 PushI
	AddReply(var_914_int, var_915_int, var_916_int); // 0x16c6 TObjFunc
	var_917_int = 536570; // 0x16c8 PushI
	var_918_int = 38380; // 0x16c9 PushI
	var_919_int = 38385; // 0x16ca PushI
	AddReply(var_917_int, var_918_int, var_919_int); // 0x16cb TObjFunc
	goto Label_5893; // 0x16cd Jump
	
Label_5838:
	var_920_string = ""; // 0x16ce PushV
	var_920_string = "Neutral"; // 0x16cf MovS
	func_5923(var_866_object, var_920_string); // 0x16d0 NEW_2
	var_921_int = 514222; // 0x16d2 PushI
	SetMessage(var_921_int); // 0x16d3 TObjFunc
	ClearReplies(); // 0x16d5 TObjFunc
	var_922_bool = 0; // 0x16d7 PushV
	var_922_bool = 0; // 0x16d8 MovB
	var_923_bool = 0; var_924_object = Obj(); // 0x16d9 PushV
	var_924_object = var_1_object; // 0x16da MovT
	func_8363(var_924_object); // 0x16db NEW_2
	if(var_923_bool == 0) goto Label_5860; // 0x16dd JumpB
	var_929_bool = 0; var_930_object = Obj(); // 0x16de PushV
	var_930_object = var_1_object; // 0x16df MovT
	func_8179(var_929_bool, var_930_object); // 0x16e0 NEW_2
	if(var_929_bool == 0) goto Label_5860; // 0x16e2 JumpB
	var_922_bool = 1; // 0x16e3 MovB
	
Label_5860:
	if(var_922_bool == 0) goto Label_5866; // 0x16e4 JumpB
	var_934_int = 514223; // 0x16e5 PushI
	var_935_int = 15442; // 0x16e6 PushI
	var_936_int = 15441; // 0x16e7 PushI
	AddReply(var_934_int, var_935_int, var_936_int); // 0x16e8 TObjFunc
	
Label_5866:
	var_937_bool = 0; // 0x16ea PushV
	var_937_bool = 0; // 0x16eb MovB
	var_938_bool = 0; var_939_object = Obj(); // 0x16ec PushV
	var_939_object = var_1_object; // 0x16ed MovT
	func_8167(var_939_object); // 0x16ee NEW_2
	if(var_938_bool == 0) goto Label_5879; // 0x16f0 JumpB
	var_944_bool = 0; var_945_object = Obj(); // 0x16f1 PushV
	var_945_object = var_1_object; // 0x16f2 MovT
	func_8202(var_945_object); // 0x16f3 NEW_2
	if(var_944_bool == 0) goto Label_5879; // 0x16f5 JumpB
	var_937_bool = 1; // 0x16f6 MovB
	
Label_5879:
	if(var_937_bool == 0) goto Label_5885; // 0x16f7 JumpB
	var_950_int = 514234; // 0x16f8 PushI
	var_951_int = 15453; // 0x16f9 PushI
	var_952_int = 15452; // 0x16fa PushI
	AddReply(var_950_int, var_951_int, var_952_int); // 0x16fb TObjFunc
	
Label_5885:
	var_953_int = 514239; // 0x16fd PushI
	var_954_int = -1; // 0x16fe PushI
	var_955_int = 15457; // 0x16ff PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0x1700 TObjFunc
	goto Label_5893; // 0x1702 Jump
}


func_8339(var_902_bool)
{
	var_904_int = 0; var_905_string = ""; // 0x2094 PushV
	var_905_string = "ood11Aglaja1"; // 0x2095 MovS
	func_7270(var_904_int, var_905_string); // 0x2096 NEW_2
	var_906_int = 0; // 0x2098 PushI
	var_907_bool = var_904_int == var_906_int; // 0x2099 Eq
	if(var_907_bool == 0) goto Label_8349; // 0x209a JumpB
	var_902_bool = 1; // 0x209b MovB
	return 0; // 0x209c Return
	
Label_8349:
	var_902_bool = 0; // 0x209d MovB
	return 0; // 0x209e Return
}


func_7829()
{
	var_240_string = "d7q02"; // 0x1e96 PushS
	var_241_int = 3; // 0x1e97 PushI
	SetVariable(var_240_string, var_241_int); // 0x1e98 Func
	func_8648(); // 0x1e9b NEW_2
	return 0; // 0x1e9d Return
}


func_7317(var_129_object, var_130_int)
{
	var_131_int = 0; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; // 0x1c95 PushV
	GetItemID(var_134_int); // 0x1c96 ObjFunc
	var_137_string = "Category"; // 0x1c98 PushS
	GetInvItemProperty(var_135_int, var_134_int, var_137_string); // 0x1c99 Func
	AddItem(var_136_bool, var_129_object, var_135_int, var_130_int); // 0x1c9b ObjFunc
	var_138_bool = var_136_bool == 0; // 0x1c9d Not
	if(var_138_bool == 0) goto Label_7330; // 0x1c9e JumpB
	DropItems(var_129_object, var_130_int); // 0x1c9f ObjFunc
	goto Label_7335; // 0x1ca1 Jump
	
Label_7335:
	return 6; // 0x1ca7 Return
	
Label_7330:
	var_139_int = 0; var_140_int = 0; // 0x1ca2 PushV
	var_139_int = var_134_int; // 0x1ca3 Mov
	var_140_int = var_130_int; // 0x1ca4 Mov
	func_7286(var_139_int, var_140_int); // 0x1ca5 NEW_2
}


func_8856(var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0x2298 PushV
	var_124_string = "branch"; // 0x2299 PushS
	GetVariable(var_124_string, var_123_int); // 0x229a Func
	var_125_int = 0; // 0x229c PushI
	var_126_bool = var_123_int == var_125_int; // 0x229d Eq
	if(var_126_bool == 0) goto Label_8866; // 0x229e JumpB
	var_121_int = 1; // 0x229f MovI
	return 2; // 0x22a0 Return
	
Label_8866:
	var_127_int = 1; // 0x22a2 PushI
	var_128_bool = var_123_int == var_127_int; // 0x22a3 Eq
	if(var_128_bool == 0) goto Label_8871; // 0x22a4 JumpB
	var_121_int = 2; // 0x22a5 MovI
	return 2; // 0x22a6 Return
	
Label_8871:
	var_121_int = 3; // 0x22a7 MovI
	return 2; // 0x22a8 Return
}


func_7838()
{
	var_44_string = "d8q01"; // 0x1e9f PushS
	var_45_int = 1; // 0x1ea0 PushI
	SetVariable(var_44_string, var_45_int); // 0x1ea1 Func
	func_8700(); // 0x1ea4 NEW_2
	func_8713(); // 0x1ea7 NEW_2
	var_77_bool = 0; var_78_string = ""; var_79_string = ""; // 0x1ea9 PushV
	var_78_string = "quest_d8_01"; // 0x1eaa MovS
	var_79_string = "block_well"; // 0x1eab MovS
	func_7356(var_77_bool, var_78_string, var_79_string); // 0x1eac NEW_2
	return 0; // 0x1eae Return
}


func_8351(var_872_bool)
{
	var_874_int = 0; var_875_string = ""; // 0x20a0 PushV
	var_875_string = "d11q01"; // 0x20a1 MovS
	func_7270(var_874_int, var_875_string); // 0x20a2 NEW_2
	var_876_int = 0; // 0x20a4 PushI
	var_877_bool = var_874_int == var_876_int; // 0x20a5 Eq
	if(var_877_bool == 0) goto Label_8361; // 0x20a6 JumpB
	var_872_bool = 1; // 0x20a7 MovB
	return 0; // 0x20a8 Return
	
Label_8361:
	var_872_bool = 0; // 0x20a9 MovB
	return 0; // 0x20aa Return
}


func_671(var_0_object, var_299_int, var_300_object)
{
	var_302_object = Obj(); var_303_bool = 0; var_304_int = 0; var_305_bool = 0; var_306_object = Obj(); var_307_bool = 0; var_308_int = 0; var_309_bool = 0; // 0x29f PushV
	var_0_object = var_300_object; // 0x2a0 TMov
	var_310_bool = 0; var_311_object = Obj(); var_312_float = 0; // 0x2a1 PushV
	var_311_object = var_300_object; // 0x2a2 Mov
	var_312_float = 70.0; // 0x2a3 MovF
	func_6978(var_311_object, var_312_float); // 0x2a4 NEW_2
	var_313_bool = var_310_bool == 0; // 0x2a6 Not
	if(var_313_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_299_int = -2; // 0x2a8 MovI
	return 8; // 0x2a9 Return
	
Label_682:
	CreateDialog(var_306_object); // 0x2aa Func
	var_314_int = 0; // 0x2ac PushV
	func_7433(var_314_int); // 0x2ad NEW_2
	SetNPCName(var_314_int); // 0x2af ObjFunc
	var_315_int = 0; // 0x2b1 PushV
	func_7431(var_315_int); // 0x2b2 NEW_2
	SetNPCDescription(var_315_int); // 0x2b4 ObjFunc
	var_316_string = ""; // 0x2b6 PushV
	func_7435(var_316_string); // 0x2b7 NEW_2
	SetPhoto(var_316_string); // 0x2b9 ObjFunc
	var_317_string = ""; // 0x2bb PushV
	func_7437(var_317_string); // 0x2bc NEW_2
	SetPhoto2(var_317_string); // 0x2be ObjFunc
	var_318_int = 0; // 0x2c0 PushV
	func_8856(var_318_int); // 0x2c1 NEW_2
	SetPlayerName(var_318_int); // 0x2c3 ObjFunc
	var_308_int = -1; // 0x2c5 MovI
	IsOverrideActive(var_307_bool); // 0x2c6 Func
	var_319_bool = var_307_bool; // 0x2c8 Push
	if(var_319_bool == 0) goto Label_716; // 0x2c9 JumpB
	var_299_int = -2; // 0x2ca MovI
	return 8; // 0x2cb Return
	
Label_716:
	DoDialog(var_306_object); // 0x2cc Func
	var_320_bool = 0; var_321_object = Obj(); // 0x2ce PushV
	var_322_object = Obj(); // 0x2cf PushV
	func_7254(var_322_object); // 0x2d0 NEW_2
	var_321_object = var_322_object; // 0x2d1 Mov
	func_7063(var_320_bool, var_321_object); // 0x2d3 NEW_2
	var_323_object = Obj(); var_324_object = Obj(); // 0x2d5 PushV
	var_323_object = var_300_object; // 0x2d6 Mov
	var_324_object = var_306_object; // 0x2d7 Mov
	TaskCall(3); // 0x2d8 TaskCall
	func_752(var_325_object, var_326_object, var_327_string, var_328_bool, var_323_object, var_324_object); // 0x2d9 NEW_2
	TaskReturn(); // 0x2da TaskReturn
	IsDialogEnd(var_309_bool); // 0x2dc ObjFunc
	
Label_734:
	var_364_bool = var_309_bool == 0; // 0x2de Not
	if(var_364_bool == 0) goto Label_741; // 0x2df JumpB
	sync(); // 0x2e0 Func
	IsDialogEnd(var_309_bool); // 0x2e2 ObjFunc
	goto Label_734; // 0x2e4 Jump
	
Label_741:
	var_365_object = Obj(); // 0x2e5 PushV
	var_365_object = var_300_object; // 0x2e6 Mov
	func_7046(); // 0x2e7 NEW_2
	StopDialog(var_306_object); // 0x2e9 Func
	GetReturnValue(var_308_int); // 0x2eb ObjFunc
	var_299_int = var_308_int; // 0x2ed Mov
	return 8; // 0x2ee Return
}


func_7336(var_123_object, var_124_string, var_125_int)
{
	var_126_object = Obj(); var_127_object = Obj(); // 0x1ca8 PushV
	CreateInvItem(var_127_object); // 0x1ca9 Func
	SetItemName(var_124_string); // 0x1cab ObjFunc
	var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0; // 0x1cad PushV
	var_128_object = var_123_object; // 0x1cae Mov
	var_129_object = var_127_object; // 0x1caf Mov
	var_130_int = var_125_int; // 0x1cb0 Mov
	func_7317(var_129_object, var_130_int); // 0x1cb1 NEW_2
	return 2; // 0x1cb3 Return
}


func_8873(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0x22a9 PushV
	var_57_string = "mt_aglaja"; // 0x22aa PushS
	GetVariable(var_57_string, var_56_int); // 0x22ab Func
	var_58_bool = var_56_int == 0; // 0x22ad Not
	if(var_58_bool == 0) goto Label_8889; // 0x22ae JumpB
	var_59_int = 0; var_60_object = Obj(); // 0x22af PushV
	var_60_object = var_54_object; // 0x22b0 Mov
	TaskCall(0); // 0x22b1 TaskCall
	func_0(var_61_object, var_59_int, var_60_object); // 0x22b2 NEW_2
	TaskReturn(); // 0x22b3 TaskReturn
	var_282_string = "mt_aglaja"; // 0x22b5 PushS
	var_283_int = 1; // 0x22b6 PushI
	SetVariable(var_282_string, var_283_int); // 0x22b7 Func
	
Label_8889:
	var_284_bool = 0; var_285_int = 0; // 0x22b9 PushV
	var_285_int = 12; // 0x22ba MovI
	func_7388(var_284_bool, var_285_int); // 0x22bb NEW_2
	if(var_284_bool == 0) goto Label_8901; // 0x22bd JumpB
	var_299_int = 0; var_300_object = Obj(); // 0x22be PushV
	var_300_object = var_54_object; // 0x22bf Mov
	TaskCall(2); // 0x22c0 TaskCall
	func_671(var_301_object, var_299_int, var_300_object); // 0x22c1 NEW_2
	TaskReturn(); // 0x22c2 TaskReturn
	return 2; // 0x22c4 Return
	
Label_8901:
	var_366_bool = 0; var_367_int = 0; // 0x22c5 PushV
	var_367_int = 7; // 0x22c6 MovI
	func_7382(var_366_bool, var_367_int); // 0x22c7 NEW_2
	if(var_366_bool == 0) goto Label_8913; // 0x22c9 JumpB
	var_369_int = 0; var_370_object = Obj(); // 0x22ca PushV
	var_370_object = var_54_object; // 0x22cb Mov
	TaskCall(4); // 0x22cc TaskCall
	func_1030(var_371_object, var_369_int, var_370_object); // 0x22cd NEW_2
	TaskReturn(); // 0x22ce TaskReturn
	return 2; // 0x22d0 Return
	
Label_8913:
	var_494_bool = 0; var_495_int = 0; // 0x22d1 PushV
	var_495_int = 8; // 0x22d2 MovI
	func_7382(var_494_bool, var_495_int); // 0x22d3 NEW_2
	if(var_494_bool == 0) goto Label_8925; // 0x22d5 JumpB
	var_496_int = 0; var_497_object = Obj(); // 0x22d6 PushV
	var_497_object = var_54_object; // 0x22d7 Mov
	TaskCall(6); // 0x22d8 TaskCall
	func_2468(var_498_object, var_496_int, var_497_object); // 0x22d9 NEW_2
	TaskReturn(); // 0x22da TaskReturn
	return 2; // 0x22dc Return
	
Label_8925:
	var_586_bool = 0; var_587_int = 0; // 0x22dd PushV
	var_587_int = 9; // 0x22de MovI
	func_7382(var_586_bool, var_587_int); // 0x22df NEW_2
	if(var_586_bool == 0) goto Label_8937; // 0x22e1 JumpB
	var_588_int = 0; var_589_object = Obj(); // 0x22e2 PushV
	var_589_object = var_54_object; // 0x22e3 Mov
	TaskCall(10); // 0x22e4 TaskCall
	func_4426(var_590_object, var_588_int, var_589_object); // 0x22e5 NEW_2
	TaskReturn(); // 0x22e6 TaskReturn
	return 2; // 0x22e8 Return
	
Label_8937:
	var_713_bool = 0; var_714_int = 0; // 0x22e9 PushV
	var_714_int = 10; // 0x22ea MovI
	func_7382(var_713_bool, var_714_int); // 0x22eb NEW_2
	if(var_713_bool == 0) goto Label_8949; // 0x22ed JumpB
	var_715_int = 0; var_716_object = Obj(); // 0x22ee PushV
	var_716_object = var_54_object; // 0x22ef Mov
	TaskCall(8); // 0x22f0 TaskCall
	func_3485(var_717_object, var_715_int, var_716_object); // 0x22f1 NEW_2
	TaskReturn(); // 0x22f2 TaskReturn
	return 2; // 0x22f4 Return
	
Label_8949:
	var_839_bool = 0; var_840_int = 0; // 0x22f5 PushV
	var_840_int = 11; // 0x22f6 MovI
	func_7382(var_839_bool, var_840_int); // 0x22f7 NEW_2
	if(var_839_bool == 0) goto Label_8961; // 0x22f9 JumpB
	var_841_int = 0; var_842_object = Obj(); // 0x22fa PushV
	var_842_object = var_54_object; // 0x22fb Mov
	TaskCall(12); // 0x22fc TaskCall
	func_5696(var_843_object, var_841_int, var_842_object); // 0x22fd NEW_2
	TaskReturn(); // 0x22fe TaskReturn
	return 2; // 0x2300 Return
	
Label_8961:
	return 2; // 0x2301 Return
}


func_8363(var_923_bool)
{
	var_925_int = 0; var_926_string = ""; // 0x20ac PushV
	var_926_string = "d11q01"; // 0x20ad MovS
	func_7270(var_925_int, var_926_string); // 0x20ae NEW_2
	var_927_int = 4; // 0x20b0 PushI
	var_928_bool = var_925_int == var_927_int; // 0x20b1 Eq
	if(var_928_bool == 0) goto Label_8373; // 0x20b2 JumpB
	var_923_bool = 1; // 0x20b3 MovB
	return 0; // 0x20b4 Return
	
Label_8373:
	var_923_bool = 0; // 0x20b5 MovB
	return 0; // 0x20b6 Return
}


func_7855()
{
	var_535_string = "ood8Aglaja1"; // 0x1eb0 PushS
	var_536_int = 1; // 0x1eb1 PushI
	SetVariable(var_535_string, var_536_int); // 0x1eb2 Func
	return 0; // 0x1eb4 Return
}


func_7861()
{
	var_97_string = "d8KainIsReason"; // 0x1eb6 PushS
	var_98_int = 1; // 0x1eb7 PushI
	SetVariable(var_97_string, var_98_int); // 0x1eb8 Func
	return 0; // 0x1eba Return
}


func_7349(var_440_bool, var_442_string)
{
	var_443_int = 0; var_444_bool = 0; var_445_int = 0; var_446_bool = 0; // 0x1cb5 PushV
	GetInvItemByName(var_445_int, var_442_string); // 0x1cb6 Func
	HasItem(var_445_int, var_446_bool); // 0x1cb8 ObjFunc
	var_440_bool = var_446_bool; // 0x1cba Mov
	return 4; // 0x1cbb Return
}


func_8375(var_619_bool)
{
	var_621_int = 0; var_622_string = ""; // 0x20b8 PushV
	var_622_string = "ood9Aglaja1"; // 0x20b9 MovS
	func_7270(var_621_int, var_622_string); // 0x20ba NEW_2
	var_623_int = 0; // 0x20bc PushI
	var_624_bool = var_621_int == var_623_int; // 0x20bd Eq
	if(var_624_bool == 0) goto Label_8385; // 0x20be JumpB
	var_619_bool = 1; // 0x20bf MovB
	return 0; // 0x20c0 Return
	
Label_8385:
	var_619_bool = 0; // 0x20c1 MovB
	return 0; // 0x20c2 Return
}


func_7867()
{
	var_910_string = "ood11Aglaja1"; // 0x1ebc PushS
	var_911_int = 1; // 0x1ebd PushI
	SetVariable(var_910_string, var_911_int); // 0x1ebe Func
	return 0; // 0x1ec0 Return
}


func_7356(var_77_bool, var_78_string, var_79_string)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x1cbc PushV
	FindActor(var_81_object, var_78_string); // 0x1cbd Func
	var_82_bool = var_81_object == 0; // 0x1cbf NullEq
	if(var_82_bool == 0) goto Label_7363; // 0x1cc0 JumpB
	var_77_bool = 0; // 0x1cc1 MovB
	return 2; // 0x1cc2 Return
	
Label_7363:
	Trigger(var_81_object, var_79_string); // 0x1cc3 Func
	var_77_bool = 1; // 0x1cc5 MovB
	return 2; // 0x1cc6 Return
}


func_7873()
{
	var_44_string = "d11q01"; // 0x1ec2 PushS
	var_45_int = 1; // 0x1ec3 PushI
	SetVariable(var_44_string, var_45_int); // 0x1ec4 Func
	func_8531(); // 0x1ec7 NEW_2
	func_8544(); // 0x1eca NEW_2
	var_77_bool = 0; var_78_string = ""; var_79_string = ""; // 0x1ecc PushV
	var_78_string = "quest_d11_01"; // 0x1ecd MovS
	var_79_string = "init_girl"; // 0x1ece MovS
	func_7356(var_77_bool, var_78_string, var_79_string); // 0x1ecf NEW_2
	var_83_bool = 0; var_84_string = ""; var_85_string = ""; // 0x1ed1 PushV
	var_84_string = "quest_d11_01"; // 0x1ed2 MovS
	var_85_string = "remove_andrei"; // 0x1ed3 MovS
	func_7356(var_83_bool, var_84_string, var_85_string); // 0x1ed4 NEW_2
	return 0; // 0x1ed6 Return
}


func_8387(var_668_bool)
{
	var_670_int = 0; var_671_string = ""; // 0x20c4 PushV
	var_671_string = "ood9Aglaja2"; // 0x20c5 MovS
	func_7270(var_670_int, var_671_string); // 0x20c6 NEW_2
	var_672_int = 0; // 0x20c8 PushI
	var_673_bool = var_670_int == var_672_int; // 0x20c9 Eq
	if(var_673_bool == 0) goto Label_8397; // 0x20ca JumpB
	var_668_bool = 1; // 0x20cb MovB
	return 0; // 0x20cc Return
	
Label_8397:
	var_668_bool = 0; // 0x20cd MovB
	return 0; // 0x20ce Return
}


func_7368(var_59_float)
{
	var_60_float = 0; var_61_float = 0; // 0x1cc8 PushV
	GetGameTime(var_61_float); // 0x1cc9 Func
	var_59_float = var_61_float; // 0x1ccb Mov
	return 2; // 0x1ccc Return
}


func_7373(var_185_int)
{
	var_186_float = 0; var_187_float = 0; // 0x1ccd PushV
	GetGameTime(var_187_float); // 0x1cce Func
	var_188_int = 1; // 0x1cd0 PushI
	var_189_int = 0; // 0x1cd1 PushV
	var_190_int = 24; // 0x1cd2 PushI
	var_189_int = var_187_float / var_187_float; // 0x1cd3 Div2
	var_185_int = var_188_int + var_189_int; // 0x1cd4 Add2
	return 2; // 0x1cd5 Return
}


func_8399(var_658_bool)
{
	var_660_int = 0; var_661_string = ""; // 0x20d0 PushV
	var_661_string = "ood9Aglaja4"; // 0x20d1 MovS
	func_7270(var_660_int, var_661_string); // 0x20d2 NEW_2
	var_662_int = 0; // 0x20d4 PushI
	var_663_bool = var_660_int == var_662_int; // 0x20d5 Eq
	if(var_663_bool == 0) goto Label_8409; // 0x20d6 JumpB
	var_658_bool = 1; // 0x20d7 MovB
	return 0; // 0x20d8 Return
	
Label_8409:
	var_658_bool = 0; // 0x20d9 MovB
	return 0; // 0x20da Return
}


func_6863()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x1acf PushV
	WaitForAnimEnd(); // 0x1ad0 Func
	var_52_bool = 0; // 0x1ad2 PushV
	func_6973(var_52_bool); // 0x1ad3 NEW_2
	var_53_bool = var_52_bool == 0; // 0x1ad5 Not
	if(var_53_bool == 0) goto Label_6872; // 0x1ad6 JumpB
	return 12; // 0x1ad7 Return
	
Label_6872:
	var_54_int = 0; // 0x1ad8 PushV
	func_7414(var_54_int); // 0x1ad9 NEW_2
	var_46_int = var_54_int; // 0x1ada Mov
	var_47_int = 0; // 0x1adc MovI
	
Label_6877:
	var_67_bool = 0; // 0x1add PushV
	var_67_bool = 0; // 0x1ade MovB
	var_68_int = 5; // 0x1adf PushI
	var_69_bool = var_47_int < var_68_int; // 0x1ae0 LT
	if(var_69_bool == 0) goto Label_6887; // 0x1ae1 JumpB
	var_70_bool = 0; // 0x1ae2 PushV
	func_6973(var_70_bool); // 0x1ae3 NEW_2
	if(var_70_bool == 0) goto Label_6887; // 0x1ae5 JumpB
	var_67_bool = 1; // 0x1ae6 MovB
	
Label_6887:
	if(var_67_bool == 0) goto Label_6929; // 0x1ae7 JumpB
	var_71_bool = var_46_int == 0; // 0x1ae8 Not
	if(var_71_bool == 0) goto Label_6897; // 0x1ae9 JumpB
	var_72_int = 3; // 0x1aea PushI
	Sleep(var_72_int, var_48_bool); // 0x1aeb Func
	var_73_bool = var_48_bool == 0; // 0x1aed Not
	if(var_73_bool == 0) goto Label_6896; // 0x1aee JumpB
	goto Label_6929; // 0x1aef Jump
	
Label_6929:
	ResetAAS(); // 0x1b11 Func
	return 12; // 0x1b13 Return
	
Label_6896:
	goto Label_6918; // 0x1af0 Jump
	
Label_6918:
	var_74_bool = 0; // 0x1b06 PushV
	func_6932(var_74_bool); // 0x1b07 NEW_2
	var_75_bool = var_74_bool == 0; // 0x1b09 Not
	if(var_75_bool == 0) goto Label_6924; // 0x1b0a JumpB
	goto Label_6929; // 0x1b0b Jump
	
Label_6924:
	ResetAAS(); // 0x1b0c Func
	var_76_int = 1; // 0x1b0e PushI
	var_47_int = var_47_int + var_76_int; // 0x1b0f Add2
	goto Label_6877; // 0x1b10 Jump
	
Label_6897:
	irand(var_49_int, var_46_int); // 0x1af1 Func
	var_77_int = 5; // 0x1af3 PushI
	irand(var_50_int, var_77_int); // 0x1af4 Func
	var_78_int = 0; // 0x1af6 PushI
	var_79_bool = var_50_int != var_78_int; // 0x1af7 Neq
	if(var_79_bool == 0) goto Label_6906; // 0x1af8 JumpB
	var_49_int = 0; // 0x1af9 MovI
	
Label_6906:
	var_80_string = "all"; // 0x1afa PushS
	var_81_string = ""; var_82_int = 0; // 0x1afb PushV
	var_82_int = var_49_int; // 0x1afc Mov
	func_7407(var_81_string, var_82_int); // 0x1afd NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0x1aff Func
	WaitForAnimEnd(var_51_bool); // 0x1b01 Func
	var_83_bool = var_51_bool == 0; // 0x1b03 Not
	if(var_83_bool == 0) goto Label_6918; // 0x1b04 JumpB
	goto Label_6929; // 0x1b05 Jump
}


func_7382(var_366_bool, var_367_int)
{
	var_368_int = 0; // 0x1cd7 PushV
	func_7373(var_368_int); // 0x1cd8 NEW_2
	var_366_bool = var_368_int == var_367_int; // 0x1cda Eq2
	return 0; // 0x1cdb Return
}


func_7895()
{
	func_8557(); // 0x1ed9 NEW_2
	var_160_bool = 0; var_161_string = ""; var_162_string = ""; // 0x1edb PushV
	var_161_string = "quest_d11_01"; // 0x1edc MovS
	var_162_string = "completed"; // 0x1edd MovS
	func_7356(var_160_bool, var_161_string, var_162_string); // 0x1ede NEW_2
	return 0; // 0x1ee0 Return
}


func_1243(var_2_object, var_410_string)
{
	var_411_bool = 0; // 0x4dc PushV
	func_7439(var_411_bool); // 0x4dd NEW_2
	var_412_bool = var_411_bool == 0; // 0x4df Not
	if(var_412_bool == 0) goto Label_1250; // 0x4e0 JumpB
	return 0; // 0x4e1 Return
	
Label_1250:
	var_413_bool = var_410_string == var_2_object; // 0x4e2 Eq
	if(var_413_bool == 0) goto Label_1253; // 0x4e3 JumpB
	return 0; // 0x4e4 Return
	
Label_1253:
	var_414_string = ""; var_415_bool = 0; // 0x4e5 PushV
	var_414_string = var_410_string; // 0x4e6 Mov
	var_416_string = ""; // 0x4e7 PushS
	var_417_bool = var_410_string == var_416_string; // 0x4e8 Eq
	if(var_417_bool == 0) goto Label_1260; // 0x4e9 JumpB
	var_415_bool = 0; // 0x4ea MovB
	goto Label_1261; // 0x4eb Jump
	
Label_1261:
	func_7217(var_414_string, var_415_bool); // 0x4ed NEW_2
	var_2_object = var_410_string; // 0x4ef TMov
	return 0; // 0x4f0 Return
	
Label_1260:
	var_415_bool = 1; // 0x4ec MovB
}


func_8411(var_746_bool)
{
	var_748_int = 0; var_749_string = ""; // 0x20dc PushV
	var_749_string = "ood10Aglaja1"; // 0x20dd MovS
	func_7270(var_748_int, var_749_string); // 0x20de NEW_2
	var_750_int = 0; // 0x20e0 PushI
	var_751_bool = var_748_int == var_750_int; // 0x20e1 Eq
	if(var_751_bool == 0) goto Label_8421; // 0x20e2 JumpB
	var_746_bool = 1; // 0x20e3 MovB
	return 0; // 0x20e4 Return
	
Label_8421:
	var_746_bool = 0; // 0x20e5 MovB
	return 0; // 0x20e6 Return
}


func_7388(var_284_bool, var_285_int)
{
	var_286_float = 0; var_287_int = 0; var_288_int = 0; var_289_float = 0; var_290_int = 0; var_291_int = 0; // 0x1cdc PushV
	GetGameTime(var_289_float); // 0x1cdd Func
	var_292_int = 1; // 0x1cdf PushI
	var_293_int = 0; // 0x1ce0 PushV
	var_294_int = 24; // 0x1ce1 PushI
	var_293_int = var_289_float / var_289_float; // 0x1ce2 Div2
	var_290_int = var_292_int + var_293_int; // 0x1ce3 Add2
	var_295_bool = var_290_int != var_285_int; // 0x1ce4 Neq
	if(var_295_bool == 0) goto Label_7400; // 0x1ce5 JumpB
	var_284_bool = 0; // 0x1ce6 MovB
	return 6; // 0x1ce7 Return
	
Label_7400:
	var_296_int = 0; // 0x1ce8 PushV
	var_296_int = var_289_float; // 0x1ce9 Mov
	var_297_int = 24; // 0x1cea PushI
	var_291_int = var_296_int % var_297_int; // 0x1ceb Mod2
	var_298_int = 7; // 0x1cec PushI
	var_284_bool = var_291_int < var_298_int; // 0x1ced LT2
	return 6; // 0x1cee Return
}


func_7905()
{
	var_627_string = "ood9Aglaja1"; // 0x1ee2 PushS
	var_628_int = 1; // 0x1ee3 PushI
	SetVariable(var_627_string, var_628_int); // 0x1ee4 Func
	return 0; // 0x1ee6 Return
}


func_8423(var_807_bool)
{
	var_809_int = 0; var_810_string = ""; // 0x20e8 PushV
	var_810_string = "d10q01"; // 0x20e9 MovS
	func_7270(var_809_int, var_810_string); // 0x20ea NEW_2
	var_811_int = 1000; // 0x20ec PushI
	var_812_bool = var_809_int == var_811_int; // 0x20ed Eq
	if(var_812_bool == 0) goto Label_8433; // 0x20ee JumpB
	var_807_bool = 1; // 0x20ef MovB
	return 0; // 0x20f0 Return
	
Label_8433:
	var_807_bool = 0; // 0x20f1 MovB
	return 0; // 0x20f2 Return
}


func_7911()
{
	var_115_string = "ood9Aglaja2"; // 0x1ee8 PushS
	var_116_int = 1; // 0x1ee9 PushI
	SetVariable(var_115_string, var_116_int); // 0x1eea Func
	return 0; // 0x1eec Return
}


func_7917()
{
	var_109_string = "ood9Aglaja4"; // 0x1eee PushS
	var_110_int = 1; // 0x1eef PushI
	SetVariable(var_109_string, var_110_int); // 0x1ef0 Func
	return 0; // 0x1ef2 Return
}


func_7407(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0x1cef PushV
	var_63_string = "idle"; // 0x1cf0 MovS
	var_64_int = var_61_int; // 0x1cf1 Push
	if(var_64_int == 0) goto Label_7412; // 0x1cf2 JumpB
	var_63_string = var_63_string + var_61_int; // 0x1cf3 Add2
	
Label_7412:
	var_60_string = var_63_string; // 0x1cf4 Mov
	return 2; // 0x1cf5 Return
}


func_752(var_0_object, var_1_object, var_2_object, var_3_string, var_323_object, var_324_object)
{
	var_0_object = var_324_object; // 0x2f1 TMov
	var_1_object = var_323_object; // 0x2f2 TMov
	var_3_string = 0; // 0x2f3 TMovB
	var_329_int = 1; // 0x2f4 PushI
	if(var_329_int == 0) goto Label_790; // 0x2f5 JumpB
	var_330_string = ""; // 0x2f6 PushV
	var_330_string = "Arrogance"; // 0x2f7 MovS
	func_820(var_324_object, var_330_string); // 0x2f8 NEW_2
	var_338_int = 535439; // 0x2fa PushI
	SetMessage(var_338_int); // 0x2fb TObjFunc
	ClearReplies(); // 0x2fd TObjFunc
	var_339_bool = 0; var_340_object = Obj(); // 0x2ff PushV
	var_340_object = var_1_object; // 0x300 MovT
	func_8190(var_340_object); // 0x301 NEW_2
	if(var_339_bool == 0) goto Label_777; // 0x303 JumpB
	var_347_int = 539929; // 0x304 PushI
	var_348_int = 41892; // 0x305 PushI
	var_349_int = 41891; // 0x306 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x307 TObjFunc
	
Label_777:
	var_350_int = 539927; // 0x309 PushI
	var_351_int = -1; // 0x30a PushI
	var_352_int = 41889; // 0x30b PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x30c TObjFunc
	var_353_int = 539928; // 0x30e PushI
	var_354_int = -1; // 0x30f PushI
	var_355_int = 41890; // 0x310 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x311 TObjFunc
	goto Label_790; // 0x313 Jump
	
Label_790:
	var_356_bool = 0; // 0x316 PushV
	func_7439(var_356_bool); // 0x317 NEW_2
	if(var_356_bool == 0) goto Label_805; // 0x319 JumpB
	
Label_794:
	lshWaitForAnimEnd(); // 0x31a Func
	var_357_string = var_3_string; // 0x31c PushT
	if(var_357_string == 0) goto Label_799; // 0x31d JumpB
	goto Label_804; // 0x31e Jump
	
Label_804:
	goto Label_819; // 0x324 Jump
	
Label_819:
	return 0; // 0x333 Return
	
Label_799:
	var_358_string = ""; // 0x31f PushV
	var_358_string = var_2_object; // 0x320 MovT
	func_7201(var_358_string); // 0x321 NEW_2
	goto Label_794; // 0x323 Jump
	
Label_805:
	var_359_string = "all"; // 0x325 PushS
	var_360_string = "idle"; // 0x326 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x327 Func
	
Label_809:
	WaitForAnimEnd(); // 0x329 Func
	var_361_string = var_3_string; // 0x32b PushT
	if(var_361_string == 0) goto Label_814; // 0x32c JumpB
	goto Label_819; // 0x32d Jump
	
Label_814:
	var_362_string = "all"; // 0x32e PushS
	var_363_string = "idle"; // 0x32f PushS
	PlayAnimation(var_362_string, var_363_string); // 0x330 Func
	goto Label_809; // 0x332 Jump
}


func_8435(var_813_bool)
{
	var_815_int = 0; var_816_string = ""; // 0x20f4 PushV
	var_816_string = "ood10Aglaja2"; // 0x20f5 MovS
	func_7270(var_815_int, var_816_string); // 0x20f6 NEW_2
	var_817_int = 0; // 0x20f8 PushI
	var_818_bool = var_815_int == var_817_int; // 0x20f9 Eq
	if(var_818_bool == 0) goto Label_8445; // 0x20fa JumpB
	var_813_bool = 1; // 0x20fb MovB
	return 0; // 0x20fc Return
	
Label_8445:
	var_813_bool = 0; // 0x20fd MovB
	return 0; // 0x20fe Return
}


func_7923()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1ef3 PushV
	var_46_string = "d10q01"; // 0x1ef4 PushS
	var_47_int = 1; // 0x1ef5 PushI
	SetVariable(var_46_string, var_47_int); // 0x1ef6 Func
	var_48_object = Obj(); // 0x1ef8 PushV
	func_8806(var_48_object); // 0x1ef9 NEW_2
	var_45_object = var_48_object; // 0x1efa Mov
	var_55_string = "d10q01AglajaGotoPetr"; // 0x1efc PushS
	var_56_string = "pt_map_petr"; // 0x1efd PushS
	var_57_int = 1; // 0x1efe PushI
	var_58_int = 515451; // 0x1eff PushI
	var_59_float = 0; // 0x1f00 PushV
	func_7368(var_59_float); // 0x1f01 NEW_2
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x1f03 ObjFunc
	func_8479(); // 0x1f06 NEW_2
	func_8492(); // 0x1f09 NEW_2
	var_93_bool = 0; var_94_string = ""; var_95_string = ""; // 0x1f0b PushV
	var_94_string = "quest_d10_01"; // 0x1f0c MovS
	var_95_string = "init_house"; // 0x1f0d MovS
	func_7356(var_93_bool, var_94_string, var_95_string); // 0x1f0e NEW_2
	return 2; // 0x1f10 Return
}


func_7414(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0x1cf6 PushV
	var_57_int = 0; // 0x1cf7 MovI
	
Label_7416:
	var_59_string = "all"; // 0x1cf8 PushS
	var_60_string = ""; var_61_int = 0; // 0x1cf9 PushV
	var_61_int = var_57_int; // 0x1cfa Mov
	func_7407(var_60_string, var_61_int); // 0x1cfb NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0x1cfd Func
	var_65_bool = var_58_bool == 0; // 0x1cff Not
	if(var_65_bool == 0) goto Label_7426; // 0x1d00 JumpB
	goto Label_7429; // 0x1d01 Jump
	
Label_7429:
	var_54_int = var_57_int; // 0x1d05 Mov
	return 4; // 0x1d06 Return
	
Label_7426:
	var_66_int = 1; // 0x1d02 PushI
	var_57_int = var_57_int + var_66_int; // 0x1d03 Add2
	goto Label_7416; // 0x1d04 Jump
}


func_8447(var_789_bool)
{
	var_791_int = 0; var_792_string = ""; // 0x2100 PushV
	var_792_string = "d10q01"; // 0x2101 MovS
	func_7270(var_791_int, var_792_string); // 0x2102 NEW_2
	var_793_int = 3; // 0x2104 PushI
	var_794_bool = var_791_int == var_793_int; // 0x2105 Eq
	if(var_794_bool == 0) goto Label_8457; // 0x2106 JumpB
	var_789_bool = 1; // 0x2107 MovB
	return 0; // 0x2108 Return
	
Label_8457:
	var_789_bool = 0; // 0x2109 MovB
	return 0; // 0x210a Return
}


func_7431(var_118_int)
{
	var_118_int = 515527; // 0x1d07 MovI
	return 0; // 0x1d08 Return
}


func_7433(var_117_int)
{
	var_117_int = 513334; // 0x1d09 MovI
	return 0; // 0x1d0a Return
}


func_7435(var_119_string)
{
	var_119_string = "ui/NPC_Aglaja.png"; // 0x1d0b MovS
	return 0; // 0x1d0c Return
}


func_8459(var_795_bool, var_796_object)
{
	var_797_bool = 0; var_798_object = Obj(); // 0x210c PushV
	var_798_object = var_796_object; // 0x210d Mov
	func_8472(var_798_object); // 0x210e NEW_2
	if(var_797_bool == 0) goto Label_8467; // 0x2110 JumpB
	var_795_bool = 1; // 0x2111 MovB
	return 0; // 0x2112 Return
	
Label_8467:
	var_795_bool = 0; // 0x2113 MovB
	return 0; // 0x2114 Return
}


func_7437(var_120_string)
{
	var_120_string = "ui/NPC_Aglaja_b.png"; // 0x1d0d MovS
	return 0; // 0x1d0e Return
}


func_7439(var_112_bool)
{
	var_112_bool = 1; // 0x1d0f MovB
	return 0; // 0x1d10 Return
}


func_7441()
{
	var_168_string = "playsound"; // 0x1d12 PushS
	var_169_string = "givemoney"; // 0x1d13 PushS
	TriggerWorld(var_168_string, var_169_string); // 0x1d14 Func
	return 0; // 0x1d16 Return
}


func_7954()
{
	var_754_string = "ood10Aglaja1"; // 0x1f13 PushS
	var_755_int = 1; // 0x1f14 PushI
	SetVariable(var_754_string, var_755_int); // 0x1f15 Func
	return 0; // 0x1f17 Return
}


func_6932(var_74_bool)
{
	var_74_bool = 1; // 0x1b14 MovB
	return 0; // 0x1b15 Return
}


func_8469(var_142_bool)
{
	var_142_bool = 0; // 0x2116 MovB
	return 0; // 0x2117 Return
}


func_6934()
{
	StopAnimation(); // 0x1b16 Func
	StopGroup0(); // 0x1b18 Func
	return 0; // 0x1b1a Return
}


func_7447()
{
	var_146_string = "playsound"; // 0x1d18 PushS
	var_147_string = "giveitem"; // 0x1d19 PushS
	TriggerWorld(var_146_string, var_147_string); // 0x1d1a Func
	return 0; // 0x1d1c Return
}


func_7960()
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); var_110_object = Obj(); // 0x1f18 PushV
	var_111_object = Obj(); // 0x1f19 PushV
	func_8806(var_111_object); // 0x1f1a NEW_2
	var_109_object = var_111_object; // 0x1f1b Mov
	var_112_string = "d10q01AglajaGotoPetr"; // 0x1f1d PushS
	FindMark(var_110_object, var_112_string); // 0x1f1e ObjFunc
	var_113_object = var_110_object; // 0x1f20 Push
	if(var_113_object == 0) goto Label_7972; // 0x1f21 JumpB
	Remove(); // 0x1f22 ObjFunc
	
Label_7972:
	var_114_string = "d10q02KaterinaGotoRubin"; // 0x1f24 PushS
	FindMark(var_110_object, var_114_string); // 0x1f25 ObjFunc
	var_115_object = var_110_object; // 0x1f27 Push
	if(var_115_object == 0) goto Label_7979; // 0x1f28 JumpB
	Remove(); // 0x1f29 ObjFunc
	
Label_7979:
	func_8505(); // 0x1f2c NEW_2
	var_124_bool = 0; var_125_string = ""; var_126_string = ""; // 0x1f2e PushV
	var_125_string = "quest_d10_01"; // 0x1f2f MovS
	var_126_string = "completed"; // 0x1f30 MovS
	func_7356(var_124_bool, var_125_string, var_126_string); // 0x1f31 NEW_2
	return 4; // 0x1f33 Return
}


func_8472(var_797_bool)
{
	var_799_int = 0; var_800_int = 0; // 0x2118 PushV
	var_801_string = "d10q01_blueprint"; // 0x2119 PushS
	GetItemCountOfType(var_800_int, var_801_string); // 0x211a ObjFunc
	var_802_int = 0; // 0x211c PushI
	var_797_bool = var_800_int != var_802_int; // 0x211d Neq2
	return 2; // 0x211e Return
}


func_6939(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x1b1b PushV
	GetPosition(var_56_cvector); // 0x1b1c Func
	GetPosition(var_57_cvector); // 0x1b1e ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0x1b20 Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0x1b21 Or2
	return 6; // 0x1b22 Return
}


func_7453(var_164_object)
{
	var_166_string = "money 7000 is given"; // 0x1d1e PushS
	Trace(var_166_string); // 0x1d1f Func
	var_167_object = Obj(); var_168_int = 0; // 0x1d21 PushV
	var_167_object = var_164_object; // 0x1d22 Mov
	var_168_int = 7000; // 0x1d23 MovI
	func_7298(var_167_object, var_168_int); // 0x1d24 NEW_2
	return 0; // 0x1d26 Return
}


func_8479()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x211f PushV
	var_64_int = 186; // 0x2120 PushI
	var_65_int = 1; // 0x2121 PushI
	var_66_int = 515449; // 0x2122 PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x2123 Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x2125 PushV
	var_68_object = var_63_object; // 0x2126 Mov
	var_69_int = -1; // 0x2127 MovI
	func_8778(var_67_bool, var_68_object, var_69_int); // 0x2128 NEW_2
	return 2; // 0x212a Return
}


func_5923(var_2_object, var_882_string)
{
	var_883_bool = 0; // 0x1724 PushV
	func_7439(var_883_bool); // 0x1725 NEW_2
	var_884_bool = var_883_bool == 0; // 0x1727 Not
	if(var_884_bool == 0) goto Label_5930; // 0x1728 JumpB
	return 0; // 0x1729 Return
	
Label_5930:
	var_885_bool = var_882_string == var_2_object; // 0x172a Eq
	if(var_885_bool == 0) goto Label_5933; // 0x172b JumpB
	return 0; // 0x172c Return
	
Label_5933:
	var_886_string = ""; var_887_bool = 0; // 0x172d PushV
	var_886_string = var_882_string; // 0x172e Mov
	var_888_string = ""; // 0x172f PushS
	var_889_bool = var_882_string == var_888_string; // 0x1730 Eq
	if(var_889_bool == 0) goto Label_5940; // 0x1731 JumpB
	var_887_bool = 0; // 0x1732 MovB
	goto Label_5941; // 0x1733 Jump
	
Label_5941:
	func_7217(var_886_string, var_887_bool); // 0x1735 NEW_2
	var_2_object = var_882_string; // 0x1737 TMov
	return 0; // 0x1738 Return
	
Label_5940:
	var_887_bool = 1; // 0x1734 MovB
}


func_6947(var_133_string, var_134_int)
{
	var_135_int = 0; var_136_int = 0; // 0x1b23 PushV
	GetProperty(var_133_string, var_136_int); // 0x1b24 ObjFunc
	var_137_int = var_136_int + var_134_int; // 0x1b26 Add
	SetProperty(var_133_string, var_137_int); // 0x1b27 ObjFunc
	return 2; // 0x1b29 Return
}


func_7463()
{
	var_254_string = "d7q03"; // 0x1d28 PushS
	var_255_int = 1; // 0x1d29 PushI
	SetVariable(var_254_string, var_255_int); // 0x1d2a Func
	func_8661(); // 0x1d2d NEW_2
	func_8674(); // 0x1d30 NEW_2
	var_272_object = Obj(); var_273_string = ""; // 0x1d32 PushV
	var_273_string = "quest_d7_03"; // 0x1d33 MovS
	func_7275(var_272_object, var_273_string); // 0x1d34 NEW_2
	return 0; // 0x1d36 Return
}


func_6954(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0x1b2a PushV
	GetPosition(var_49_cvector); // 0x1b2b Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0x1b2d Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0x1b2e PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0x1b2f PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0x1b30 Func
	var_44_bool = var_51_bool; // 0x1b32 Mov
	return 6; // 0x1b33 Return
}


func_8492()
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x212c PushV
	var_87_int = 187; // 0x212d PushI
	var_88_int = 1; // 0x212e PushI
	var_89_int = 515450; // 0x212f PushI
	CreateDiaryEntry(var_86_object, var_87_int, var_88_int, var_89_int); // 0x2130 Func
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0; // 0x2132 PushV
	var_91_object = var_86_object; // 0x2133 Mov
	var_92_int = 186; // 0x2134 MovI
	func_8778(var_90_bool, var_91_object, var_92_int); // 0x2135 NEW_2
	return 2; // 0x2137 Return
}


func_820(var_2_object, var_330_string)
{
	var_331_bool = 0; // 0x335 PushV
	func_7439(var_331_bool); // 0x336 NEW_2
	var_332_bool = var_331_bool == 0; // 0x338 Not
	if(var_332_bool == 0) goto Label_827; // 0x339 JumpB
	return 0; // 0x33a Return
	
Label_827:
	var_333_bool = var_330_string == var_2_object; // 0x33b Eq
	if(var_333_bool == 0) goto Label_830; // 0x33c JumpB
	return 0; // 0x33d Return
	
Label_830:
	var_334_string = ""; var_335_bool = 0; // 0x33e PushV
	var_334_string = var_330_string; // 0x33f Mov
	var_336_string = ""; // 0x340 PushS
	var_337_bool = var_330_string == var_336_string; // 0x341 Eq
	if(var_337_bool == 0) goto Label_837; // 0x342 JumpB
	var_335_bool = 0; // 0x343 MovB
	goto Label_838; // 0x344 Jump
	
Label_838:
	func_7217(var_334_string, var_335_bool); // 0x346 NEW_2
	var_2_object = var_330_string; // 0x348 TMov
	return 0; // 0x349 Return
	
Label_837:
	var_335_bool = 1; // 0x345 MovB
}


func_6964(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x1b34 PushV
	GetPosition(var_43_cvector); // 0x1b35 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0x1b37 PushV
	var_45_cvector = var_43_cvector; // 0x1b38 Mov
	func_6954(var_44_bool, var_45_cvector); // 0x1b39 NEW_2
	var_40_bool = var_44_bool; // 0x1b3a Mov
	return 2; // 0x1b3c Return
}


func_7990()
{
	var_149_string = "ood10Aglaja2"; // 0x1f37 PushS
	var_150_int = 1; // 0x1f38 PushI
	SetVariable(var_149_string, var_150_int); // 0x1f39 Func
	return 0; // 0x1f3b Return
}


func_7479()
{
	var_288_string = "d7q03"; // 0x1d38 PushS
	var_289_int = 4; // 0x1d39 PushI
	SetVariable(var_288_string, var_289_int); // 0x1d3a Func
	func_8687(); // 0x1d3d NEW_2
	var_298_bool = 0; var_299_string = ""; var_300_string = ""; // 0x1d3f PushV
	var_299_string = "quest_d7_03"; // 0x1d40 MovS
	var_300_string = "init_house_petr"; // 0x1d41 MovS
	func_7356(var_298_bool, var_299_string, var_300_string); // 0x1d42 NEW_2
	return 0; // 0x1d44 Return
}


func_8505()
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x2139 PushV
	var_118_int = 191; // 0x213a PushI
	var_119_int = 1; // 0x213b PushI
	var_120_int = 515476; // 0x213c PushI
	CreateDiaryEntry(var_117_object, var_118_int, var_119_int, var_120_int); // 0x213d Func
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0; // 0x213f PushV
	var_122_object = var_117_object; // 0x2140 Mov
	var_123_int = 186; // 0x2141 MovI
	func_8778(var_121_bool, var_122_object, var_123_int); // 0x2142 NEW_2
	return 2; // 0x2144 Return
}


func_7996()
{
	var_880_string = "d11AglajaVisit"; // 0x1f3d PushS
	var_881_int = 1; // 0x1f3e PushI
	SetVariable(var_880_string, var_881_int); // 0x1f3f Func
	return 0; // 0x1f41 Return
}


func_6973(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x1b3d PushV
	IsLoaded(var_38_bool); // 0x1b3e Func
	var_36_bool = var_38_bool; // 0x1b40 Mov
	return 2; // 0x1b41 Return
}


func_6978(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0x1b42 PushV
	GetPosition(var_83_cvector); // 0x1b43 ObjFunc
	GetEyesHeight(var_82_float); // 0x1b45 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0x1b47 PushE
	var_91_float = var_91_float + var_82_float; // 0x1b48 Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0x1b49 PopE
	GetPosition(var_84_cvector); // 0x1b4a Func
	GetEyesHeight(var_82_float); // 0x1b4c Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0x1b4e PushE
	var_92_float = var_92_float + var_82_float; // 0x1b4f Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0x1b50 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0x1b51 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0x1b52 PushE
	var_93_float = 0; // 0x1b53 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0x1b54 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0x1b55 Or
	var_95_float = sqrt(var_94_int); // 0x1b56 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0x1b57 Div2
	var_86_cvector = -var_85_cvector; // 0x1b58 Neg2
	var_96_float = var_85_cvector * var_72_float; // 0x1b59 Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x1b5a PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0x1b5b PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0x1b5c Xor2
	func_7260(var_97_cvector, var_98_cvector); // 0x1b5d NEW_2
	var_105_int = 25; // 0x1b5f PushI
	var_106_float = var_97_cvector * var_105_int; // 0x1b60 Mult
	var_107_int = var_96_float + var_106_float; // 0x1b61 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0x1b62 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0x1b63 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0x1b64 Add2
	IsOverrideActive(var_89_bool); // 0x1b65 Func
	var_109_bool = var_89_bool; // 0x1b67 Push
	if(var_109_bool == 0) goto Label_7019; // 0x1b68 JumpB
	var_70_bool = 0; // 0x1b69 MovB
	return 18; // 0x1b6a Return
	
Label_7019:
	StopWorld(); // 0x1b6b Func
	CameraTransit(var_88_cvector, var_86_cvector); // 0x1b6d Func
	var_110_float = GetByIndex(var_87_cvector, 0); // 0x1b6f PushE
	var_111_float = GetByIndex(var_87_cvector, 2); // 0x1b70 PushE
	Rotate(var_110_float, var_111_float); // 0x1b71 Func
	var_112_bool = 0; // 0x1b73 PushV
	func_7439(var_112_bool); // 0x1b74 NEW_2
	if(var_112_bool == 0) goto Label_7032; // 0x1b76 JumpB
	goto Label_7040; // 0x1b77 Jump
	
Label_7040:
	CameraWaitForPlayFinish(); // 0x1b80 Func
	ResumeWorld(); // 0x1b82 Func
	var_70_bool = 1; // 0x1b84 MovB
	return 18; // 0x1b85 Return
	
Label_7032:
	var_113_string = "head"; // 0x1b78 PushS
	HasAnimationTrack(var_90_bool, var_113_string); // 0x1b79 Func
	var_114_bool = var_90_bool; // 0x1b7b Push
	if(var_114_bool == 0) goto Label_7040; // 0x1b7c JumpB
	var_115_string = "head"; // 0x1b7d PushS
	LookAsyncCamera(var_115_string); // 0x1b7e Func
}


func_8002(var_104_bool)
{
	var_106_int = 0; var_107_string = ""; // 0x1f43 PushV
	var_107_string = "d6q01KlaraVolonteer"; // 0x1f44 MovS
	func_7270(var_106_int, var_107_string); // 0x1f45 NEW_2
	var_108_int = 0; // 0x1f47 PushI
	var_109_bool = var_106_int != var_108_int; // 0x1f48 Neq
	if(var_109_bool == 0) goto Label_8012; // 0x1f49 JumpB
	var_104_bool = 1; // 0x1f4a MovB
	return 0; // 0x1f4b Return
	
Label_8012:
	var_104_bool = 0; // 0x1f4c MovB
	return 0; // 0x1f4d Return
}


func_7493(var_120_object)
{
	var_122_string = "burah_serum is given"; // 0x1d46 PushS
	Trace(var_122_string); // 0x1d47 Func
	var_123_object = Obj(); var_124_string = ""; var_125_int = 0; // 0x1d49 PushV
	var_123_object = var_120_object; // 0x1d4a Mov
	var_124_string = "burah_serum"; // 0x1d4b MovS
	var_125_int = 1; // 0x1d4c MovI
	func_7336(var_123_object, var_124_string, var_125_int); // 0x1d4d NEW_2
	return 0; // 0x1d4f Return
}


func_8518()
{
	var_155_object = Obj(); var_156_object = Obj(); // 0x2146 PushV
	var_157_int = 671; // 0x2147 PushI
	var_158_int = 2; // 0x2148 PushI
	var_159_int = 534125; // 0x2149 PushI
	CreateDiaryEntry(var_156_object, var_157_int, var_158_int, var_159_int); // 0x214a Func
	var_160_bool = 0; var_161_object = Obj(); var_162_int = 0; // 0x214c PushV
	var_161_object = var_156_object; // 0x214d Mov
	var_162_int = 666; // 0x214e MovI
	func_8778(var_160_bool, var_161_object, var_162_int); // 0x214f NEW_2
	return 2; // 0x2151 Return
}


func_4426(var_0_object, var_588_int, var_589_object)
{
	var_591_object = Obj(); var_592_bool = 0; var_593_int = 0; var_594_bool = 0; var_595_object = Obj(); var_596_bool = 0; var_597_int = 0; var_598_bool = 0; // 0x114a PushV
	var_0_object = var_589_object; // 0x114b TMov
	var_599_bool = 0; var_600_object = Obj(); var_601_float = 0; // 0x114c PushV
	var_600_object = var_589_object; // 0x114d Mov
	var_601_float = 70.0; // 0x114e MovF
	func_6978(var_600_object, var_601_float); // 0x114f NEW_2
	var_602_bool = var_599_bool == 0; // 0x1151 Not
	if(var_602_bool == 0) goto Label_4437; // 0x1152 JumpB
	var_588_int = -2; // 0x1153 MovI
	return 8; // 0x1154 Return
	
Label_4437:
	CreateDialog(var_595_object); // 0x1155 Func
	var_603_int = 0; // 0x1157 PushV
	func_7433(var_603_int); // 0x1158 NEW_2
	SetNPCName(var_603_int); // 0x115a ObjFunc
	var_604_int = 0; // 0x115c PushV
	func_7431(var_604_int); // 0x115d NEW_2
	SetNPCDescription(var_604_int); // 0x115f ObjFunc
	var_605_string = ""; // 0x1161 PushV
	func_7435(var_605_string); // 0x1162 NEW_2
	SetPhoto(var_605_string); // 0x1164 ObjFunc
	var_606_string = ""; // 0x1166 PushV
	func_7437(var_606_string); // 0x1167 NEW_2
	SetPhoto2(var_606_string); // 0x1169 ObjFunc
	var_607_int = 0; // 0x116b PushV
	func_8856(var_607_int); // 0x116c NEW_2
	SetPlayerName(var_607_int); // 0x116e ObjFunc
	var_597_int = -1; // 0x1170 MovI
	IsOverrideActive(var_596_bool); // 0x1171 Func
	var_608_bool = var_596_bool; // 0x1173 Push
	if(var_608_bool == 0) goto Label_4471; // 0x1174 JumpB
	var_588_int = -2; // 0x1175 MovI
	return 8; // 0x1176 Return
	
Label_4471:
	DoDialog(var_595_object); // 0x1177 Func
	var_609_bool = 0; var_610_object = Obj(); // 0x1179 PushV
	var_611_object = Obj(); // 0x117a PushV
	func_7254(var_611_object); // 0x117b NEW_2
	var_610_object = var_611_object; // 0x117c Mov
	func_7063(var_609_bool, var_610_object); // 0x117e NEW_2
	var_612_object = Obj(); var_613_object = Obj(); // 0x1180 PushV
	var_612_object = var_589_object; // 0x1181 Mov
	var_613_object = var_595_object; // 0x1182 Mov
	TaskCall(11); // 0x1183 TaskCall
	func_4507(var_614_object, var_615_object, var_616_string, var_617_bool, var_612_object, var_613_object); // 0x1184 NEW_2
	TaskReturn(); // 0x1185 TaskReturn
	IsDialogEnd(var_598_bool); // 0x1187 ObjFunc
	
Label_4489:
	var_711_bool = var_598_bool == 0; // 0x1189 Not
	if(var_711_bool == 0) goto Label_4496; // 0x118a JumpB
	sync(); // 0x118b Func
	IsDialogEnd(var_598_bool); // 0x118d ObjFunc
	goto Label_4489; // 0x118f Jump
	
Label_4496:
	var_712_object = Obj(); // 0x1190 PushV
	var_712_object = var_589_object; // 0x1191 Mov
	func_7046(); // 0x1192 NEW_2
	StopDialog(var_595_object); // 0x1194 Func
	GetReturnValue(var_597_int); // 0x1196 ObjFunc
	var_588_int = var_597_int; // 0x1198 Mov
	return 8; // 0x1199 Return
}


func_8014(var_73_bool)
{
	var_75_bool = 0; // 0x1f4f PushV
	var_75_bool = 0; // 0x1f50 MovB
	var_76_bool = 0; // 0x1f51 PushV
	var_76_bool = 0; // 0x1f52 MovB
	var_77_bool = 0; // 0x1f53 PushV
	var_77_bool = 0; // 0x1f54 MovB
	var_78_int = 0; var_79_string = ""; // 0x1f55 PushV
	var_79_string = "d6q01JuliaVolonteer"; // 0x1f56 MovS
	func_7270(var_78_int, var_79_string); // 0x1f57 NEW_2
	var_82_int = 0; // 0x1f59 PushI
	var_83_bool = var_78_int == var_82_int; // 0x1f5a Eq
	if(var_83_bool == 0) goto Label_8036; // 0x1f5b JumpB
	var_84_int = 0; var_85_string = ""; // 0x1f5c PushV
	var_85_string = "d6q01KlaraVolonteer"; // 0x1f5d MovS
	func_7270(var_84_int, var_85_string); // 0x1f5e NEW_2
	var_86_int = 0; // 0x1f60 PushI
	var_87_bool = var_84_int == var_86_int; // 0x1f61 Eq
	if(var_87_bool == 0) goto Label_8036; // 0x1f62 JumpB
	var_77_bool = 1; // 0x1f63 MovB
	
Label_8036:
	if(var_77_bool == 0) goto Label_8045; // 0x1f64 JumpB
	var_88_int = 0; var_89_string = ""; // 0x1f65 PushV
	var_89_string = "d6q01LaraVolonteer"; // 0x1f66 MovS
	func_7270(var_88_int, var_89_string); // 0x1f67 NEW_2
	var_90_int = 0; // 0x1f69 PushI
	var_91_bool = var_88_int == var_90_int; // 0x1f6a Eq
	if(var_91_bool == 0) goto Label_8045; // 0x1f6b JumpB
	var_76_bool = 1; // 0x1f6c MovB
	
Label_8045:
	if(var_76_bool == 0) goto Label_8054; // 0x1f6d JumpB
	var_92_int = 0; var_93_string = ""; // 0x1f6e PushV
	var_93_string = "d6q01OspinaVolonteer"; // 0x1f6f MovS
	func_7270(var_92_int, var_93_string); // 0x1f70 NEW_2
	var_94_int = 0; // 0x1f72 PushI
	var_95_bool = var_92_int == var_94_int; // 0x1f73 Eq
	if(var_95_bool == 0) goto Label_8054; // 0x1f74 JumpB
	var_75_bool = 1; // 0x1f75 MovB
	
Label_8054:
	if(var_75_bool == 0) goto Label_8057; // 0x1f76 JumpB
	var_73_bool = 1; // 0x1f77 MovB
	return 0; // 0x1f78 Return
	
Label_8057:
	var_73_bool = 0; // 0x1f79 MovB
	return 0; // 0x1f7a Return
}


func_7504()
{
	func_8518(); // 0x1d52 NEW_2
	var_163_bool = 0; var_164_string = ""; var_165_string = ""; // 0x1d54 PushV
	var_164_string = "quest_d10_02"; // 0x1d55 MovS
	var_165_string = "completed"; // 0x1d56 MovS
	func_7356(var_163_bool, var_164_string, var_165_string); // 0x1d57 NEW_2
	return 0; // 0x1d59 Return
}


func_8531()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x2153 PushV
	var_48_int = 192; // 0x2154 PushI
	var_49_int = 1; // 0x2155 PushI
	var_50_int = 515477; // 0x2156 PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x2157 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x2159 PushV
	var_52_object = var_47_object; // 0x215a Mov
	var_53_int = -1; // 0x215b MovI
	func_8778(var_51_bool, var_52_object, var_53_int); // 0x215c NEW_2
	return 2; // 0x215e Return
}


func_7514()
{
	var_94_string = "d11q05"; // 0x1d5b PushS
	var_95_int = 1; // 0x1d5c PushI
	SetVariable(var_94_string, var_95_int); // 0x1d5d Func
	func_8570(); // 0x1d60 NEW_2
	func_8583(); // 0x1d63 NEW_2
	var_112_object = Obj(); var_113_string = ""; // 0x1d65 PushV
	var_113_string = "quest_d11_05"; // 0x1d66 MovS
	func_7275(var_112_object, var_113_string); // 0x1d67 NEW_2
	return 0; // 0x1d69 Return
}


func_8544()
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x2160 PushV
	var_71_int = 193; // 0x2161 PushI
	var_72_int = 1; // 0x2162 PushI
	var_73_int = 515478; // 0x2163 PushI
	CreateDiaryEntry(var_70_object, var_71_int, var_72_int, var_73_int); // 0x2164 Func
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0; // 0x2166 PushV
	var_75_object = var_70_object; // 0x2167 Mov
	var_76_int = 192; // 0x2168 MovI
	func_8778(var_74_bool, var_75_object, var_76_int); // 0x2169 NEW_2
	return 2; // 0x216b Return
}


func_7530()
{
	var_91_string = "ood8Aglaja3"; // 0x1d6b PushS
	var_92_int = 1; // 0x1d6c PushI
	SetVariable(var_91_string, var_92_int); // 0x1d6d Func
	return 0; // 0x1d6f Return
}


func_8557()
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x216d PushV
	var_154_int = 196; // 0x216e PushI
	var_155_int = 1; // 0x216f PushI
	var_156_int = 515481; // 0x2170 PushI
	CreateDiaryEntry(var_153_object, var_154_int, var_155_int, var_156_int); // 0x2171 Func
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0; // 0x2173 PushV
	var_158_object = var_153_object; // 0x2174 Mov
	var_159_int = 192; // 0x2175 MovI
	func_8778(var_157_bool, var_158_object, var_159_int); // 0x2176 NEW_2
	return 2; // 0x2178 Return
}


func_7536()
{
	var_539_string = "d8AglajaVisit"; // 0x1d71 PushS
	var_540_int = 1; // 0x1d72 PushI
	SetVariable(var_539_string, var_540_int); // 0x1d73 Func
	return 0; // 0x1d75 Return
}


func_7542()
{
	var_758_string = "d10AglajaVisit"; // 0x1d77 PushS
	var_759_int = 1; // 0x1d78 PushI
	SetVariable(var_758_string, var_759_int); // 0x1d79 Func
	return 0; // 0x1d7b Return
}


func_8570()
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x217a PushV
	var_98_int = 682; // 0x217b PushI
	var_99_int = 2; // 0x217c PushI
	var_100_int = 534497; // 0x217d PushI
	CreateDiaryEntry(var_97_object, var_98_int, var_99_int, var_100_int); // 0x217e Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x2180 PushV
	var_102_object = var_97_object; // 0x2181 Mov
	var_103_int = -1; // 0x2182 MovI
	func_8778(var_101_bool, var_102_object, var_103_int); // 0x2183 NEW_2
	return 2; // 0x2185 Return
}


func_8059(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x1f7c PushV
	var_134_string = "d6q01JuliaVolonteer"; // 0x1f7d MovS
	func_7270(var_133_int, var_134_string); // 0x1f7e NEW_2
	var_135_int = 0; // 0x1f80 PushI
	var_136_bool = var_133_int != var_135_int; // 0x1f81 Neq
	if(var_136_bool == 0) goto Label_8069; // 0x1f82 JumpB
	var_131_bool = 1; // 0x1f83 MovB
	return 0; // 0x1f84 Return
	
Label_8069:
	var_131_bool = 0; // 0x1f85 MovB
	return 0; // 0x1f86 Return
}


func_7548()
{
	var_121_string = "ood9Aglaja6"; // 0x1d7d PushS
	var_122_int = 1; // 0x1d7e PushI
	SetVariable(var_121_string, var_122_int); // 0x1d7f Func
	return 0; // 0x1d81 Return
}


func_7554()
{
	var_631_string = "d9AglajaVisit"; // 0x1d83 PushS
	var_632_int = 1; // 0x1d84 PushI
	SetVariable(var_631_string, var_632_int); // 0x1d85 Func
	return 0; // 0x1d87 Return
}


func_7046()
{
	var_276_bool = 0; var_277_bool = 0; // 0x1b86 PushV
	CameraSwitchToNormal(); // 0x1b87 Func
	var_278_bool = 0; // 0x1b89 PushV
	func_7439(var_278_bool); // 0x1b8a NEW_2
	if(var_278_bool == 0) goto Label_7054; // 0x1b8c JumpB
	goto Label_7062; // 0x1b8d Jump
	
Label_7062:
	return 2; // 0x1b96 Return
	
Label_7054:
	var_279_string = "head"; // 0x1b8e PushS
	HasAnimationTrack(var_277_bool, var_279_string); // 0x1b8f Func
	var_280_bool = var_277_bool; // 0x1b91 Push
	if(var_280_bool == 0) goto Label_7062; // 0x1b92 JumpB
	var_281_string = "head"; // 0x1b93 PushS
	UnlookAsync(var_281_string); // 0x1b94 Func
}


func_8071(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x1f88 PushV
	var_116_string = "d6q01LaraVolonteer"; // 0x1f89 MovS
	func_7270(var_115_int, var_116_string); // 0x1f8a NEW_2
	var_117_int = 0; // 0x1f8c PushI
	var_118_bool = var_115_int != var_117_int; // 0x1f8d Neq
	if(var_118_bool == 0) goto Label_8081; // 0x1f8e JumpB
	var_113_bool = 1; // 0x1f8f MovB
	return 0; // 0x1f90 Return
	
Label_8081:
	var_113_bool = 0; // 0x1f91 MovB
	return 0; // 0x1f92 Return
}


func_7560()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1d88 PushV
	var_46_string = "d9q05"; // 0x1d89 PushS
	var_47_int = 1; // 0x1d8a PushI
	SetVariable(var_46_string, var_47_int); // 0x1d8b Func
	var_48_object = Obj(); // 0x1d8d PushV
	func_8806(var_48_object); // 0x1d8e NEW_2
	var_45_object = var_48_object; // 0x1d8f Mov
	var_55_string = "d9q05AglajaGotoBurah"; // 0x1d91 PushS
	var_56_string = "pt_map_mat"; // 0x1d92 PushS
	var_57_int = 0; // 0x1d93 PushI
	var_58_int = 515304; // 0x1d94 PushI
	var_59_float = 0; // 0x1d95 PushV
	func_7368(var_59_float); // 0x1d96 NEW_2
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x1d98 ObjFunc
	func_8726(); // 0x1d9b NEW_2
	func_8739(); // 0x1d9e NEW_2
	var_93_object = Obj(); var_94_string = ""; // 0x1da0 PushV
	var_94_string = "quest_d9_05"; // 0x1da1 MovS
	func_7275(var_93_object, var_94_string); // 0x1da2 NEW_2
	return 2; // 0x1da4 Return
}


func_8583()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x2187 PushV
	var_106_int = 683; // 0x2188 PushI
	var_107_int = 2; // 0x2189 PushI
	var_108_int = 534498; // 0x218a PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x218b Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x218d PushV
	var_110_object = var_105_object; // 0x218e Mov
	var_111_int = 682; // 0x218f MovI
	func_8778(var_109_bool, var_110_object, var_111_int); // 0x2190 NEW_2
	return 2; // 0x2192 Return
}


func_8083(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x1f94 PushV
	var_125_string = "d6q01OspinaVolonteer"; // 0x1f95 MovS
	func_7270(var_124_int, var_125_string); // 0x1f96 NEW_2
	var_126_int = 0; // 0x1f98 PushI
	var_127_bool = var_124_int != var_126_int; // 0x1f99 Neq
	if(var_127_bool == 0) goto Label_8093; // 0x1f9a JumpB
	var_122_bool = 1; // 0x1f9b MovB
	return 0; // 0x1f9c Return
	
Label_8093:
	var_122_bool = 0; // 0x1f9d MovB
	return 0; // 0x1f9e Return
}


func_8596()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x2194 PushV
	var_79_int = 165; // 0x2195 PushI
	var_80_int = 1; // 0x2196 PushI
	var_81_int = 515412; // 0x2197 PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x2198 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x219a PushV
	var_83_object = var_78_object; // 0x219b Mov
	var_84_int = -1; // 0x219c MovI
	func_8778(var_82_bool, var_83_object, var_84_int); // 0x219d NEW_2
	return 2; // 0x219f Return
}


func_7063(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0; // 0x1b97 PushV
	var_139_string = "voice_common"; // 0x1b98 PushS
	GetVariable(var_139_string, var_137_int); // 0x1b99 Func
	var_140_int = var_137_int; // 0x1b9b Push
	if(var_140_int == 0) goto Label_7101; // 0x1b9c JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x1b9d PushV
	var_142_object = var_131_object; // 0x1b9e Mov
	func_7121(var_142_object); // 0x1b9f NEW_2
	var_171_bool = var_141_bool == 0; // 0x1ba1 Not
	if(var_171_bool == 0) goto Label_7083; // 0x1ba2 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x1ba3 PushV
	var_173_object = var_131_object; // 0x1ba4 Mov
	func_7158(var_173_object); // 0x1ba5 NEW_2
	var_207_bool = var_172_bool == 0; // 0x1ba7 Not
	if(var_207_bool == 0) goto Label_7083; // 0x1ba8 JumpB
	var_130_bool = 0; // 0x1ba9 MovB
	return 4; // 0x1baa Return
	
Label_7083:
	var_208_int = 2; // 0x1bab PushI
	irand(var_138_int, var_208_int); // 0x1bac Func
	var_209_int = var_138_int; // 0x1bae Push
	if(var_209_int == 0) goto Label_7096; // 0x1baf JumpB
	var_210_string = "voice_common"; // 0x1bb0 PushS
	var_211_int = 1; // 0x1bb1 PushI
	var_212_int = var_137_int + var_211_int; // 0x1bb2 Add
	var_213_int = 3; // 0x1bb3 PushI
	var_214_int = var_212_int / var_213_int; // 0x1bb4 Mod
	SetVariable(var_210_string, var_214_int); // 0x1bb5 Func
	goto Label_7100; // 0x1bb7 Jump
	
Label_7100:
	goto Label_7119; // 0x1bbc Jump
	
Label_7119:
	var_130_bool = 1; // 0x1bcf MovB
	return 4; // 0x1bd0 Return
	
Label_7096:
	var_215_string = "voice_common"; // 0x1bb8 PushS
	var_216_int = 0; // 0x1bb9 PushI
	SetVariable(var_215_string, var_216_int); // 0x1bba Func
	
Label_7101:
	var_217_bool = 0; var_218_object = Obj(); // 0x1bbd PushV
	var_218_object = var_131_object; // 0x1bbe Mov
	func_7158(var_218_object); // 0x1bbf NEW_2
	var_219_bool = var_217_bool == 0; // 0x1bc1 Not
	if(var_219_bool == 0) goto Label_7115; // 0x1bc2 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x1bc3 PushV
	var_221_object = var_131_object; // 0x1bc4 Mov
	func_7121(var_221_object); // 0x1bc5 NEW_2
	var_222_bool = var_220_bool == 0; // 0x1bc7 Not
	if(var_222_bool == 0) goto Label_7115; // 0x1bc8 JumpB
	var_130_bool = 0; // 0x1bc9 MovB
	return 4; // 0x1bca Return
	
Label_7115:
	var_223_string = "voice_common"; // 0x1bcb PushS
	var_224_int = 1; // 0x1bcc PushI
	SetVariable(var_223_string, var_224_int); // 0x1bcd Func
}


func_4507(var_0_object, var_1_object, var_2_object, var_3_string, var_612_object, var_613_object)
{
	var_0_object = var_613_object; // 0x119c TMov
	var_1_object = var_612_object; // 0x119d TMov
	var_3_string = 0; // 0x119e TMovB
	var_618_int = 1; // 0x119f PushI
	if(var_618_int == 0) goto Label_4623; // 0x11a0 JumpB
	var_619_bool = 0; var_620_object = Obj(); // 0x11a1 PushV
	var_620_object = var_1_object; // 0x11a2 MovT
	func_8375(var_620_object); // 0x11a3 NEW_2
	if(var_619_bool == 0) goto Label_4548; // 0x11a5 JumpB
	var_625_object = Obj(); var_626_object = Obj(); // 0x11a6 PushV
	var_625_object = var_1_object; // 0x11a7 MovT
	var_626_object = var_0_object; // 0x11a8 MovT
	func_7905(); // 0x11a9 NEW_2
	var_629_object = Obj(); var_630_object = Obj(); // 0x11ab PushV
	var_629_object = var_1_object; // 0x11ac MovT
	var_630_object = var_0_object; // 0x11ad MovT
	func_7554(); // 0x11ae NEW_2
	var_633_string = ""; // 0x11b0 PushV
	var_633_string = "Neutral"; // 0x11b1 MovS
	func_4653(var_613_object, var_633_string); // 0x11b2 NEW_2
	var_641_int = 513802; // 0x11b4 PushI
	SetMessage(var_641_int); // 0x11b5 TObjFunc
	ClearReplies(); // 0x11b7 TObjFunc
	var_642_int = 513803; // 0x11b9 PushI
	var_643_int = 15030; // 0x11ba PushI
	var_644_int = 15029; // 0x11bb PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x11bc TObjFunc
	var_645_int = 513815; // 0x11be PushI
	var_646_int = 15042; // 0x11bf PushI
	var_647_int = 15041; // 0x11c0 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x11c1 TObjFunc
	goto Label_4623; // 0x11c3 Jump
	
Label_4623:
	var_648_bool = 0; // 0x120f PushV
	func_7439(var_648_bool); // 0x1210 NEW_2
	if(var_648_bool == 0) goto Label_4638; // 0x1212 JumpB
	
Label_4627:
	lshWaitForAnimEnd(); // 0x1213 Func
	var_649_string = var_3_string; // 0x1215 PushT
	if(var_649_string == 0) goto Label_4632; // 0x1216 JumpB
	goto Label_4637; // 0x1217 Jump
	
Label_4637:
	goto Label_4652; // 0x121d Jump
	
Label_4652:
	return 0; // 0x122c Return
	
Label_4632:
	var_650_string = ""; // 0x1218 PushV
	var_650_string = var_2_object; // 0x1219 MovT
	func_7201(var_650_string); // 0x121a NEW_2
	goto Label_4627; // 0x121c Jump
	
Label_4638:
	var_651_string = "all"; // 0x121e PushS
	var_652_string = "idle"; // 0x121f PushS
	PlayAnimation(var_651_string, var_652_string); // 0x1220 Func
	
Label_4642:
	WaitForAnimEnd(); // 0x1222 Func
	var_653_string = var_3_string; // 0x1224 PushT
	if(var_653_string == 0) goto Label_4647; // 0x1225 JumpB
	goto Label_4652; // 0x1226 Jump
	
Label_4647:
	var_654_string = "all"; // 0x1227 PushS
	var_655_string = "idle"; // 0x1228 PushS
	PlayAnimation(var_654_string, var_655_string); // 0x1229 Func
	goto Label_4642; // 0x122b Jump
	
Label_4548:
	var_656_string = ""; // 0x11c4 PushV
	var_656_string = "Neutral"; // 0x11c5 MovS
	func_4653(var_613_object, var_656_string); // 0x11c6 NEW_2
	var_657_int = 513818; // 0x11c8 PushI
	SetMessage(var_657_int); // 0x11c9 TObjFunc
	ClearReplies(); // 0x11cb TObjFunc
	var_658_bool = 0; var_659_object = Obj(); // 0x11cd PushV
	var_659_object = var_1_object; // 0x11ce MovT
	func_8399(var_659_object); // 0x11cf NEW_2
	if(var_658_bool == 0) goto Label_4567; // 0x11d1 JumpB
	var_664_int = 513852; // 0x11d2 PushI
	var_665_int = 15080; // 0x11d3 PushI
	var_666_int = 15079; // 0x11d4 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x11d5 TObjFunc
	
Label_4567:
	var_667_bool = 0; // 0x11d7 PushV
	var_667_bool = 0; // 0x11d8 MovB
	var_668_bool = 0; var_669_object = Obj(); // 0x11d9 PushV
	var_669_object = var_1_object; // 0x11da MovT
	func_8387(var_669_object); // 0x11db NEW_2
	if(var_668_bool == 0) goto Label_4580; // 0x11dd JumpB
	var_674_bool = 0; var_675_object = Obj(); // 0x11de PushV
	var_675_object = var_1_object; // 0x11df MovT
	func_8327(var_675_object); // 0x11e0 NEW_2
	if(var_674_bool == 0) goto Label_4580; // 0x11e2 JumpB
	var_667_bool = 1; // 0x11e3 MovB
	
Label_4580:
	if(var_667_bool == 0) goto Label_4586; // 0x11e4 JumpB
	var_680_int = 513819; // 0x11e5 PushI
	var_681_int = 15047; // 0x11e6 PushI
	var_682_int = 15046; // 0x11e7 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x11e8 TObjFunc
	
Label_4586:
	var_683_bool = 0; // 0x11ea PushV
	var_683_bool = 0; // 0x11eb MovB
	var_684_bool = 0; var_685_object = Obj(); // 0x11ec PushV
	var_685_object = var_1_object; // 0x11ed MovT
	func_8131(var_685_object); // 0x11ee NEW_2
	if(var_684_bool == 0) goto Label_4599; // 0x11f0 JumpB
	var_690_bool = 0; var_691_object = Obj(); // 0x11f1 PushV
	var_691_object = var_1_object; // 0x11f2 MovT
	func_8143(var_691_object); // 0x11f3 NEW_2
	if(var_690_bool == 0) goto Label_4599; // 0x11f5 JumpB
	var_683_bool = 1; // 0x11f6 MovB
	
Label_4599:
	if(var_683_bool == 0) goto Label_4605; // 0x11f7 JumpB
	var_696_int = 538857; // 0x11f8 PushI
	var_697_int = 40792; // 0x11f9 PushI
	var_698_int = 40791; // 0x11fa PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x11fb TObjFunc
	
Label_4605:
	var_699_bool = 0; var_700_object = Obj(); // 0x11fd PushV
	var_700_object = var_1_object; // 0x11fe MovT
	func_8155(var_700_object); // 0x11ff NEW_2
	if(var_699_bool == 0) goto Label_4615; // 0x1201 JumpB
	var_705_int = 540032; // 0x1202 PushI
	var_706_int = 42000; // 0x1203 PushI
	var_707_int = 41999; // 0x1204 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x1205 TObjFunc
	
Label_4615:
	var_708_int = 513880; // 0x1207 PushI
	var_709_int = -1; // 0x1208 PushI
	var_710_int = 15107; // 0x1209 PushI
	AddReply(var_708_int, var_709_int, var_710_int); // 0x120a TObjFunc
	goto Label_4623; // 0x120c Jump
}


func_3485(var_0_object, var_715_int, var_716_object)
{
	var_718_object = Obj(); var_719_bool = 0; var_720_int = 0; var_721_bool = 0; var_722_object = Obj(); var_723_bool = 0; var_724_int = 0; var_725_bool = 0; // 0xd9d PushV
	var_0_object = var_716_object; // 0xd9e TMov
	var_726_bool = 0; var_727_object = Obj(); var_728_float = 0; // 0xd9f PushV
	var_727_object = var_716_object; // 0xda0 Mov
	var_728_float = 70.0; // 0xda1 MovF
	func_6978(var_727_object, var_728_float); // 0xda2 NEW_2
	var_729_bool = var_726_bool == 0; // 0xda4 Not
	if(var_729_bool == 0) goto Label_3496; // 0xda5 JumpB
	var_715_int = -2; // 0xda6 MovI
	return 8; // 0xda7 Return
	
Label_3496:
	CreateDialog(var_722_object); // 0xda8 Func
	var_730_int = 0; // 0xdaa PushV
	func_7433(var_730_int); // 0xdab NEW_2
	SetNPCName(var_730_int); // 0xdad ObjFunc
	var_731_int = 0; // 0xdaf PushV
	func_7431(var_731_int); // 0xdb0 NEW_2
	SetNPCDescription(var_731_int); // 0xdb2 ObjFunc
	var_732_string = ""; // 0xdb4 PushV
	func_7435(var_732_string); // 0xdb5 NEW_2
	SetPhoto(var_732_string); // 0xdb7 ObjFunc
	var_733_string = ""; // 0xdb9 PushV
	func_7437(var_733_string); // 0xdba NEW_2
	SetPhoto2(var_733_string); // 0xdbc ObjFunc
	var_734_int = 0; // 0xdbe PushV
	func_8856(var_734_int); // 0xdbf NEW_2
	SetPlayerName(var_734_int); // 0xdc1 ObjFunc
	var_724_int = -1; // 0xdc3 MovI
	IsOverrideActive(var_723_bool); // 0xdc4 Func
	var_735_bool = var_723_bool; // 0xdc6 Push
	if(var_735_bool == 0) goto Label_3530; // 0xdc7 JumpB
	var_715_int = -2; // 0xdc8 MovI
	return 8; // 0xdc9 Return
	
Label_3530:
	DoDialog(var_722_object); // 0xdca Func
	var_736_bool = 0; var_737_object = Obj(); // 0xdcc PushV
	var_738_object = Obj(); // 0xdcd PushV
	func_7254(var_738_object); // 0xdce NEW_2
	var_737_object = var_738_object; // 0xdcf Mov
	func_7063(var_736_bool, var_737_object); // 0xdd1 NEW_2
	var_739_object = Obj(); var_740_object = Obj(); // 0xdd3 PushV
	var_739_object = var_716_object; // 0xdd4 Mov
	var_740_object = var_722_object; // 0xdd5 Mov
	TaskCall(9); // 0xdd6 TaskCall
	func_3566(var_741_object, var_742_object, var_743_string, var_744_bool, var_739_object, var_740_object); // 0xdd7 NEW_2
	TaskReturn(); // 0xdd8 TaskReturn
	IsDialogEnd(var_725_bool); // 0xdda ObjFunc
	
Label_3548:
	var_837_bool = var_725_bool == 0; // 0xddc Not
	if(var_837_bool == 0) goto Label_3555; // 0xddd JumpB
	sync(); // 0xdde Func
	IsDialogEnd(var_725_bool); // 0xde0 ObjFunc
	goto Label_3548; // 0xde2 Jump
	
Label_3555:
	var_838_object = Obj(); // 0xde3 PushV
	var_838_object = var_716_object; // 0xde4 Mov
	func_7046(); // 0xde5 NEW_2
	StopDialog(var_722_object); // 0xde7 Func
	GetReturnValue(var_724_int); // 0xde9 ObjFunc
	var_715_int = var_724_int; // 0xdeb Mov
	return 8; // 0xdec Return
}


func_8095(var_480_bool)
{
	var_482_int = 0; var_483_string = ""; // 0x1fa0 PushV
	var_483_string = "d7q03"; // 0x1fa1 MovS
	func_7270(var_482_int, var_483_string); // 0x1fa2 NEW_2
	var_484_int = 3; // 0x1fa4 PushI
	var_485_bool = var_482_int == var_484_int; // 0x1fa5 Eq
	if(var_485_bool == 0) goto Label_8105; // 0x1fa6 JumpB
	var_480_bool = 1; // 0x1fa7 MovB
	return 0; // 0x1fa8 Return
	
Label_8105:
	var_480_bool = 0; // 0x1fa9 MovB
	return 0; // 0x1faa Return
}


func_8609()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x21a1 PushV
	var_102_int = 166; // 0x21a2 PushI
	var_103_int = 1; // 0x21a3 PushI
	var_104_int = 515413; // 0x21a4 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x21a5 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x21a7 PushV
	var_106_object = var_101_object; // 0x21a8 Mov
	var_107_int = 165; // 0x21a9 MovI
	func_8778(var_105_bool, var_106_object, var_107_int); // 0x21aa NEW_2
	return 2; // 0x21ac Return
}


func_2468(var_0_object, var_496_int, var_497_object)
{
	var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; var_503_object = Obj(); var_504_bool = 0; var_505_int = 0; var_506_bool = 0; // 0x9a4 PushV
	var_0_object = var_497_object; // 0x9a5 TMov
	var_507_bool = 0; var_508_object = Obj(); var_509_float = 0; // 0x9a6 PushV
	var_508_object = var_497_object; // 0x9a7 Mov
	var_509_float = 70.0; // 0x9a8 MovF
	func_6978(var_508_object, var_509_float); // 0x9a9 NEW_2
	var_510_bool = var_507_bool == 0; // 0x9ab Not
	if(var_510_bool == 0) goto Label_2479; // 0x9ac JumpB
	var_496_int = -2; // 0x9ad MovI
	return 8; // 0x9ae Return
	
Label_2479:
	CreateDialog(var_503_object); // 0x9af Func
	var_511_int = 0; // 0x9b1 PushV
	func_7433(var_511_int); // 0x9b2 NEW_2
	SetNPCName(var_511_int); // 0x9b4 ObjFunc
	var_512_int = 0; // 0x9b6 PushV
	func_7431(var_512_int); // 0x9b7 NEW_2
	SetNPCDescription(var_512_int); // 0x9b9 ObjFunc
	var_513_string = ""; // 0x9bb PushV
	func_7435(var_513_string); // 0x9bc NEW_2
	SetPhoto(var_513_string); // 0x9be ObjFunc
	var_514_string = ""; // 0x9c0 PushV
	func_7437(var_514_string); // 0x9c1 NEW_2
	SetPhoto2(var_514_string); // 0x9c3 ObjFunc
	var_515_int = 0; // 0x9c5 PushV
	func_8856(var_515_int); // 0x9c6 NEW_2
	SetPlayerName(var_515_int); // 0x9c8 ObjFunc
	var_505_int = -1; // 0x9ca MovI
	IsOverrideActive(var_504_bool); // 0x9cb Func
	var_516_bool = var_504_bool; // 0x9cd Push
	if(var_516_bool == 0) goto Label_2513; // 0x9ce JumpB
	var_496_int = -2; // 0x9cf MovI
	return 8; // 0x9d0 Return
	
Label_2513:
	DoDialog(var_503_object); // 0x9d1 Func
	var_517_bool = 0; var_518_object = Obj(); // 0x9d3 PushV
	var_519_object = Obj(); // 0x9d4 PushV
	func_7254(var_519_object); // 0x9d5 NEW_2
	var_518_object = var_519_object; // 0x9d6 Mov
	func_7063(var_517_bool, var_518_object); // 0x9d8 NEW_2
	var_520_object = Obj(); var_521_object = Obj(); // 0x9da PushV
	var_520_object = var_497_object; // 0x9db Mov
	var_521_object = var_503_object; // 0x9dc Mov
	TaskCall(7); // 0x9dd TaskCall
	func_2549(var_522_object, var_523_object, var_524_string, var_525_bool, var_520_object, var_521_object); // 0x9de NEW_2
	TaskReturn(); // 0x9df TaskReturn
	IsDialogEnd(var_506_bool); // 0x9e1 ObjFunc
	
Label_2531:
	var_584_bool = var_506_bool == 0; // 0x9e3 Not
	if(var_584_bool == 0) goto Label_2538; // 0x9e4 JumpB
	sync(); // 0x9e5 Func
	IsDialogEnd(var_506_bool); // 0x9e7 ObjFunc
	goto Label_2531; // 0x9e9 Jump
	
Label_2538:
	var_585_object = Obj(); // 0x9ea PushV
	var_585_object = var_497_object; // 0x9eb Mov
	func_7046(); // 0x9ec NEW_2
	StopDialog(var_503_object); // 0x9ee Func
	GetReturnValue(var_505_int); // 0x9f0 ObjFunc
	var_496_int = var_505_int; // 0x9f2 Mov
	return 8; // 0x9f3 Return
}


func_7590()
{
	func_8752(); // 0x1da8 NEW_2
	var_158_bool = 0; var_159_string = ""; var_160_string = ""; // 0x1daa PushV
	var_159_string = "quest_d9_05"; // 0x1dab MovS
	var_160_string = "completed"; // 0x1dac MovS
	func_7356(var_158_bool, var_159_string, var_160_string); // 0x1dad NEW_2
	return 0; // 0x1daf Return
}


func_8107(var_822_bool)
{
	var_824_int = 0; var_825_string = ""; // 0x1fac PushV
	var_825_string = "d10q02"; // 0x1fad MovS
	func_7270(var_824_int, var_825_string); // 0x1fae NEW_2
	var_826_int = 4; // 0x1fb0 PushI
	var_827_bool = var_824_int == var_826_int; // 0x1fb1 Eq
	if(var_827_bool == 0) goto Label_8117; // 0x1fb2 JumpB
	var_822_bool = 1; // 0x1fb3 MovB
	return 0; // 0x1fb4 Return
	
Label_8117:
	var_822_bool = 0; // 0x1fb5 MovB
	return 0; // 0x1fb6 Return
}


func_8622()
{
	var_187_object = Obj(); var_188_object = Obj(); // 0x21ae PushV
	var_189_int = 168; // 0x21af PushI
	var_190_int = 1; // 0x21b0 PushI
	var_191_int = 515415; // 0x21b1 PushI
	CreateDiaryEntry(var_188_object, var_189_int, var_190_int, var_191_int); // 0x21b2 Func
	var_192_bool = 0; var_193_object = Obj(); var_194_int = 0; // 0x21b4 PushV
	var_193_object = var_188_object; // 0x21b5 Mov
	var_194_int = 165; // 0x21b6 MovI
	func_8778(var_192_bool, var_193_object, var_194_int); // 0x21b7 NEW_2
	return 2; // 0x21b9 Return
}


func_7600()
{
	var_129_int = 0; var_130_int = 0; // 0x1db0 PushV
	var_131_string = "d10q01_blueprint"; // 0x1db1 PushS
	var_132_int = 1; // 0x1db2 PushI
	RemoveItemByType(var_130_int, var_131_string, var_132_int); // 0x1db3 ObjFunc
	return 2; // 0x1db5 Return
}


func_7606()
{
	var_200_int = 0; var_201_string = ""; // 0x1db7 PushV
	var_201_string = "map_chertez_state"; // 0x1db8 MovS
	func_7270(var_200_int, var_201_string); // 0x1db9 NEW_2
	var_204_int = 1; // 0x1dbb PushI
	var_205_bool = var_200_int <= var_204_int; // 0x1dbc LE
	if(var_205_bool == 0) goto Label_7622; // 0x1dbd JumpB
	var_206_string = "map_chertez_state"; // 0x1dbe PushS
	var_207_int = 1; // 0x1dbf PushI
	SetVariable(var_206_string, var_207_int); // 0x1dc0 Func
	var_208_string = "map_chertez_force"; // 0x1dc2 PushS
	var_209_int = 1; // 0x1dc3 PushI
	SetVariable(var_208_string, var_209_int); // 0x1dc4 Func
	
Label_7622:
	return 0; // 0x1dc6 Return
}


func_8119(var_572_bool)
{
	var_574_int = 0; var_575_string = ""; // 0x1fb8 PushV
	var_575_string = "ood8Aglaja3"; // 0x1fb9 MovS
	func_7270(var_574_int, var_575_string); // 0x1fba NEW_2
	var_576_int = 0; // 0x1fbc PushI
	var_577_bool = var_574_int == var_576_int; // 0x1fbd Eq
	if(var_577_bool == 0) goto Label_8129; // 0x1fbe JumpB
	var_572_bool = 1; // 0x1fbf MovB
	return 0; // 0x1fc0 Return
	
Label_8129:
	var_572_bool = 0; // 0x1fc1 MovB
	return 0; // 0x1fc2 Return
}


func_8635()
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x21bb PushV
	var_132_int = 167; // 0x21bc PushI
	var_133_int = 1; // 0x21bd PushI
	var_134_int = 515414; // 0x21be PushI
	CreateDiaryEntry(var_131_object, var_132_int, var_133_int, var_134_int); // 0x21bf Func
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0; // 0x21c1 PushV
	var_136_object = var_131_object; // 0x21c2 Mov
	var_137_int = 165; // 0x21c3 MovI
	func_8778(var_135_bool, var_136_object, var_137_int); // 0x21c4 NEW_2
	return 2; // 0x21c6 Return
}


func_8131(var_684_bool)
{
	var_686_int = 0; var_687_string = ""; // 0x1fc4 PushV
	var_687_string = "d9q01"; // 0x1fc5 MovS
	func_7270(var_686_int, var_687_string); // 0x1fc6 NEW_2
	var_688_int = 1000; // 0x1fc8 PushI
	var_689_bool = var_686_int == var_688_int; // 0x1fc9 Eq
	if(var_689_bool == 0) goto Label_8141; // 0x1fca JumpB
	var_684_bool = 1; // 0x1fcb MovB
	return 0; // 0x1fcc Return
	
Label_8141:
	var_684_bool = 0; // 0x1fcd MovB
	return 0; // 0x1fce Return
}


func_7623()
{
	var_212_object = Obj(); var_213_string = ""; var_214_float = 0; // 0x1dc8 PushV
	var_215_object = Obj(); // 0x1dc9 PushV
	func_8806(var_215_object); // 0x1dca NEW_2
	var_212_object = var_215_object; // 0x1dcb Mov
	var_213_string = "pt_map_aglaja"; // 0x1dcd MovS
	var_214_float = -1; // 0x1dce MovI
	func_8823(var_212_object, var_213_string, var_214_float); // 0x1dcf NEW_2
	var_235_object = Obj(); // 0x1dd1 PushV
	func_8806(var_235_object); // 0x1dd2 NEW_2
	ShowMap(var_235_object); // 0x1dd4 ObjFunc
	return 0; // 0x1dd6 Return
}


func_8648()
{
	var_242_object = Obj(); var_243_object = Obj(); // 0x21c8 PushV
	var_244_int = 263; // 0x21c9 PushI
	var_245_int = 2; // 0x21ca PushI
	var_246_int = 521049; // 0x21cb PushI
	CreateDiaryEntry(var_243_object, var_244_int, var_245_int, var_246_int); // 0x21cc Func
	var_247_bool = 0; var_248_object = Obj(); var_249_int = 0; // 0x21ce PushV
	var_248_object = var_243_object; // 0x21cf Mov
	var_249_int = 170; // 0x21d0 MovI
	func_8778(var_247_bool, var_248_object, var_249_int); // 0x21d1 NEW_2
	return 2; // 0x21d3 Return
}


func_8143(var_690_bool)
{
	var_692_int = 0; var_693_string = ""; // 0x1fd0 PushV
	var_693_string = "ood9Aglaja6"; // 0x1fd1 MovS
	func_7270(var_692_int, var_693_string); // 0x1fd2 NEW_2
	var_694_int = 0; // 0x1fd4 PushI
	var_695_bool = var_692_int == var_694_int; // 0x1fd5 Eq
	if(var_695_bool == 0) goto Label_8153; // 0x1fd6 JumpB
	var_690_bool = 1; // 0x1fd7 MovB
	return 0; // 0x1fd8 Return
	
Label_8153:
	var_690_bool = 0; // 0x1fd9 MovB
	return 0; // 0x1fda Return
}


func_7121(var_141_bool)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; // 0x1bd1 PushV
	var_148_string = "c"; // 0x1bd2 MovS
	var_149_int = 0; // 0x1bd3 MovI
	
Label_7124:
	var_153_int = 1; // 0x1bd4 PushI
	if(var_153_int == 0) goto Label_7137; // 0x1bd5 JumpB
	var_154_int = 1; // 0x1bd6 PushI
	var_155_int = var_149_int + var_154_int; // 0x1bd7 Add
	var_156_int = var_148_string + var_155_int; // 0x1bd8 Add
	HasProperty(var_156_int, var_150_bool); // 0x1bd9 ObjFunc
	var_157_bool = var_150_bool == 0; // 0x1bdb Not
	if(var_157_bool == 0) goto Label_7134; // 0x1bdc JumpB
	goto Label_7137; // 0x1bdd Jump
	
Label_7137:
	var_158_bool = var_149_int == 0; // 0x1be1 Not
	if(var_158_bool == 0) goto Label_7141; // 0x1be2 JumpB
	var_141_bool = 0; // 0x1be3 MovB
	return 10; // 0x1be4 Return
	
Label_7141:
	var_151_int = 0; // 0x1be5 MovI
	var_159_int = 1; // 0x1be6 PushI
	var_160_bool = var_149_int > var_159_int; // 0x1be7 GT
	if(var_160_bool == 0) goto Label_7147; // 0x1be8 JumpB
	irand(var_151_int, var_149_int); // 0x1be9 Func
	
Label_7147:
	var_161_int = 1; // 0x1beb PushI
	var_162_int = var_151_int + var_161_int; // 0x1bec Add
	var_163_int = var_148_string + var_162_int; // 0x1bed Add
	GetProperty(var_163_int, var_152_string); // 0x1bee ObjFunc
	var_164_bool = 0; var_165_string = ""; // 0x1bf0 PushV
	var_165_string = var_152_string; // 0x1bf1 Mov
	func_7232(var_164_bool, var_165_string); // 0x1bf2 NEW_2
	var_141_bool = var_164_bool; // 0x1bf3 Mov
	return 10; // 0x1bf5 Return
	
Label_7134:
	var_170_int = 1; // 0x1bde PushI
	var_149_int = var_149_int + var_170_int; // 0x1bdf Add2
	goto Label_7124; // 0x1be0 Jump
}


func_8661()
{
	var_256_object = Obj(); var_257_object = Obj(); // 0x21d5 PushV
	var_258_int = 641; // 0x21d6 PushI
	var_259_int = 2; // 0x21d7 PushI
	var_260_int = 533275; // 0x21d8 PushI
	CreateDiaryEntry(var_257_object, var_258_int, var_259_int, var_260_int); // 0x21d9 Func
	var_261_bool = 0; var_262_object = Obj(); var_263_int = 0; // 0x21db PushV
	var_262_object = var_257_object; // 0x21dc Mov
	var_263_int = -1; // 0x21dd MovI
	func_8778(var_261_bool, var_262_object, var_263_int); // 0x21de NEW_2
	return 2; // 0x21e0 Return
}


func_7639()
{
	var_177_string = "ood11Aglaja2"; // 0x1dd8 PushS
	var_178_int = 1; // 0x1dd9 PushI
	SetVariable(var_177_string, var_178_int); // 0x1dda Func
	return 0; // 0x1ddc Return
}


func_8155(var_699_bool)
{
	var_701_int = 0; var_702_string = ""; // 0x1fdc PushV
	var_702_string = "d9q05"; // 0x1fdd MovS
	func_7270(var_701_int, var_702_string); // 0x1fde NEW_2
	var_703_int = 2; // 0x1fe0 PushI
	var_704_bool = var_701_int == var_703_int; // 0x1fe1 Eq
	if(var_704_bool == 0) goto Label_8165; // 0x1fe2 JumpB
	var_699_bool = 1; // 0x1fe3 MovB
	return 0; // 0x1fe4 Return
	
Label_8165:
	var_699_bool = 0; // 0x1fe5 MovB
	return 0; // 0x1fe6 Return
}


func_7645()
{
	var_165_int = 0; var_166_int = 0; // 0x1ddd PushV
	var_167_string = "d11q01_blueprint"; // 0x1dde PushS
	var_168_int = 1; // 0x1ddf PushI
	RemoveItemByType(var_166_int, var_167_string, var_168_int); // 0x1de0 ObjFunc
	return 2; // 0x1de2 Return
}


func_8674()
{
	var_264_object = Obj(); var_265_object = Obj(); // 0x21e2 PushV
	var_266_int = 642; // 0x21e3 PushI
	var_267_int = 2; // 0x21e4 PushI
	var_268_int = 533276; // 0x21e5 PushI
	CreateDiaryEntry(var_265_object, var_266_int, var_267_int, var_268_int); // 0x21e6 Func
	var_269_bool = 0; var_270_object = Obj(); var_271_int = 0; // 0x21e8 PushV
	var_270_object = var_265_object; // 0x21e9 Mov
	var_271_int = 641; // 0x21ea MovI
	func_8778(var_269_bool, var_270_object, var_271_int); // 0x21eb NEW_2
	return 2; // 0x21ed Return
}


func_7651()
{
	var_44_string = "ood12AglajaNight1"; // 0x1de4 PushS
	var_45_int = 1; // 0x1de5 PushI
	SetVariable(var_44_string, var_45_int); // 0x1de6 Func
	return 0; // 0x1de8 Return
}


func_8167(var_938_bool)
{
	var_940_int = 0; var_941_string = ""; // 0x1fe8 PushV
	var_941_string = "ood11Aglaja2"; // 0x1fe9 MovS
	func_7270(var_940_int, var_941_string); // 0x1fea NEW_2
	var_942_int = 0; // 0x1fec PushI
	var_943_bool = var_940_int == var_942_int; // 0x1fed Eq
	if(var_943_bool == 0) goto Label_8177; // 0x1fee JumpB
	var_938_bool = 1; // 0x1fef MovB
	return 0; // 0x1ff0 Return
	
Label_8177:
	var_938_bool = 0; // 0x1ff1 MovB
	return 0; // 0x1ff2 Return
}


func_7657()
{
	var_171_string = "playsound"; // 0x1dea PushS
	var_172_string = "giveitem"; // 0x1deb PushS
	TriggerWorld(var_171_string, var_172_string); // 0x1dec Func
	return 0; // 0x1dee Return
}


func_3566(var_0_object, var_1_object, var_2_object, var_3_string, var_739_object, var_740_object)
{
	var_0_object = var_740_object; // 0xdef TMov
	var_1_object = var_739_object; // 0xdf0 TMov
	var_3_string = 0; // 0xdf1 TMovB
	var_745_int = 1; // 0xdf2 PushI
	if(var_745_int == 0) goto Label_3682; // 0xdf3 JumpB
	var_746_bool = 0; var_747_object = Obj(); // 0xdf4 PushV
	var_747_object = var_1_object; // 0xdf5 MovT
	func_8411(var_747_object); // 0xdf6 NEW_2
	if(var_746_bool == 0) goto Label_3612; // 0xdf8 JumpB
	var_752_object = Obj(); var_753_object = Obj(); // 0xdf9 PushV
	var_752_object = var_1_object; // 0xdfa MovT
	var_753_object = var_0_object; // 0xdfb MovT
	func_7954(); // 0xdfc NEW_2
	var_756_object = Obj(); var_757_object = Obj(); // 0xdfe PushV
	var_756_object = var_1_object; // 0xdff MovT
	var_757_object = var_0_object; // 0xe00 MovT
	func_7542(); // 0xe01 NEW_2
	var_760_string = ""; // 0xe03 PushV
	var_760_string = "Neutral"; // 0xe04 MovS
	func_3712(var_740_object, var_760_string); // 0xe05 NEW_2
	var_768_int = 512899; // 0xe07 PushI
	SetMessage(var_768_int); // 0xe08 TObjFunc
	ClearReplies(); // 0xe0a TObjFunc
	var_769_int = 538546; // 0xe0c PushI
	var_770_int = 40428; // 0xe0d PushI
	var_771_int = 40427; // 0xe0e PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0xe0f TObjFunc
	var_772_int = 538571; // 0xe11 PushI
	var_773_int = 40458; // 0xe12 PushI
	var_774_int = 40456; // 0xe13 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xe14 TObjFunc
	var_775_int = 538572; // 0xe16 PushI
	var_776_int = 40428; // 0xe17 PushI
	var_777_int = 40457; // 0xe18 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xe19 TObjFunc
	goto Label_3682; // 0xe1b Jump
	
Label_3682:
	var_778_bool = 0; // 0xe62 PushV
	func_7439(var_778_bool); // 0xe63 NEW_2
	if(var_778_bool == 0) goto Label_3697; // 0xe65 JumpB
	
Label_3686:
	lshWaitForAnimEnd(); // 0xe66 Func
	var_779_string = var_3_string; // 0xe68 PushT
	if(var_779_string == 0) goto Label_3691; // 0xe69 JumpB
	goto Label_3696; // 0xe6a Jump
	
Label_3696:
	goto Label_3711; // 0xe70 Jump
	
Label_3711:
	return 0; // 0xe7f Return
	
Label_3691:
	var_780_string = ""; // 0xe6b PushV
	var_780_string = var_2_object; // 0xe6c MovT
	func_7201(var_780_string); // 0xe6d NEW_2
	goto Label_3686; // 0xe6f Jump
	
Label_3697:
	var_781_string = "all"; // 0xe71 PushS
	var_782_string = "idle"; // 0xe72 PushS
	PlayAnimation(var_781_string, var_782_string); // 0xe73 Func
	
Label_3701:
	WaitForAnimEnd(); // 0xe75 Func
	var_783_string = var_3_string; // 0xe77 PushT
	if(var_783_string == 0) goto Label_3706; // 0xe78 JumpB
	goto Label_3711; // 0xe79 Jump
	
Label_3706:
	var_784_string = "all"; // 0xe7a PushS
	var_785_string = "idle"; // 0xe7b PushS
	PlayAnimation(var_784_string, var_785_string); // 0xe7c Func
	goto Label_3701; // 0xe7e Jump
	
Label_3612:
	var_786_string = ""; // 0xe1c PushV
	var_786_string = "Arrogance"; // 0xe1d MovS
	func_3712(var_740_object, var_786_string); // 0xe1e NEW_2
	var_787_int = 512905; // 0xe20 PushI
	SetMessage(var_787_int); // 0xe21 TObjFunc
	ClearReplies(); // 0xe23 TObjFunc
	var_788_bool = 0; // 0xe25 PushV
	var_788_bool = 0; // 0xe26 MovB
	var_789_bool = 0; var_790_object = Obj(); // 0xe27 PushV
	var_790_object = var_1_object; // 0xe28 MovT
	func_8447(var_790_object); // 0xe29 NEW_2
	if(var_789_bool == 0) goto Label_3634; // 0xe2b JumpB
	var_795_bool = 0; var_796_object = Obj(); // 0xe2c PushV
	var_796_object = var_1_object; // 0xe2d MovT
	func_8459(var_795_bool, var_796_object); // 0xe2e NEW_2
	if(var_795_bool == 0) goto Label_3634; // 0xe30 JumpB
	var_788_bool = 1; // 0xe31 MovB
	
Label_3634:
	if(var_788_bool == 0) goto Label_3640; // 0xe32 JumpB
	var_803_int = 512906; // 0xe33 PushI
	var_804_int = 40435; // 0xe34 PushI
	var_805_int = 14108; // 0xe35 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xe36 TObjFunc
	
Label_3640:
	var_806_bool = 0; // 0xe38 PushV
	var_806_bool = 0; // 0xe39 MovB
	var_807_bool = 0; var_808_object = Obj(); // 0xe3a PushV
	var_808_object = var_1_object; // 0xe3b MovT
	func_8423(var_808_object); // 0xe3c NEW_2
	if(var_807_bool == 0) goto Label_3653; // 0xe3e JumpB
	var_813_bool = 0; var_814_object = Obj(); // 0xe3f PushV
	var_814_object = var_1_object; // 0xe40 MovT
	func_8435(var_814_object); // 0xe41 NEW_2
	if(var_813_bool == 0) goto Label_3653; // 0xe43 JumpB
	var_806_bool = 1; // 0xe44 MovB
	
Label_3653:
	if(var_806_bool == 0) goto Label_3659; // 0xe45 JumpB
	var_819_int = 512912; // 0xe46 PushI
	var_820_int = 14119; // 0xe47 PushI
	var_821_int = 14114; // 0xe48 PushI
	AddReply(var_819_int, var_820_int, var_821_int); // 0xe49 TObjFunc
	
Label_3659:
	var_822_bool = 0; var_823_object = Obj(); // 0xe4b PushV
	var_823_object = var_1_object; // 0xe4c MovT
	func_8107(var_823_object); // 0xe4d NEW_2
	if(var_822_bool == 0) goto Label_3669; // 0xe4f JumpB
	var_828_int = 534117; // 0xe50 PushI
	var_829_int = 35711; // 0xe51 PushI
	var_830_int = 35710; // 0xe52 PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0xe53 TObjFunc
	
Label_3669:
	var_831_int = 512911; // 0xe55 PushI
	var_832_int = -1; // 0xe56 PushI
	var_833_int = 14113; // 0xe57 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0xe58 TObjFunc
	var_834_int = 538502; // 0xe5a PushI
	var_835_int = -1; // 0xe5b PushI
	var_836_int = 40392; // 0xe5c PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0xe5d TObjFunc
	goto Label_3682; // 0xe5f Jump
}


func_7663(var_125_object)
{
	var_127_string = "money 5000 is given"; // 0x1df0 PushS
	Trace(var_127_string); // 0x1df1 Func
	var_128_object = Obj(); var_129_int = 0; // 0x1df3 PushV
	var_128_object = var_125_object; // 0x1df4 Mov
	var_129_int = 5000; // 0x1df5 MovI
	func_7298(var_128_object, var_129_int); // 0x1df6 NEW_2
	return 0; // 0x1df8 Return
}


func_8687()
{
	var_290_object = Obj(); var_291_object = Obj(); // 0x21ef PushV
	var_292_int = 646; // 0x21f0 PushI
	var_293_int = 2; // 0x21f1 PushI
	var_294_int = 533280; // 0x21f2 PushI
	CreateDiaryEntry(var_291_object, var_292_int, var_293_int, var_294_int); // 0x21f3 Func
	var_295_bool = 0; var_296_object = Obj(); var_297_int = 0; // 0x21f5 PushV
	var_296_object = var_291_object; // 0x21f6 Mov
	var_297_int = 641; // 0x21f7 MovI
	func_8778(var_295_bool, var_296_object, var_297_int); // 0x21f8 NEW_2
	return 2; // 0x21fa Return
}


func_8179(var_929_bool, var_930_object)
{
	var_931_bool = 0; var_932_object = Obj(); var_933_string = ""; // 0x1ff4 PushV
	var_932_object = var_930_object; // 0x1ff5 Mov
	var_933_string = "d11q01_blueprint"; // 0x1ff6 MovS
	func_7349(var_932_object, var_933_string); // 0x1ff7 NEW_2
	if(var_931_bool == 0) goto Label_8188; // 0x1ff9 JumpB
	var_929_bool = 1; // 0x1ffa MovB
	return 0; // 0x1ffb Return
	
Label_8188:
	var_929_bool = 0; // 0x1ffc MovB
	return 0; // 0x1ffd Return
}


func_2549(var_0_object, var_1_object, var_2_object, var_3_string, var_520_object, var_521_object)
{
	var_0_object = var_521_object; // 0x9f6 TMov
	var_1_object = var_520_object; // 0x9f7 TMov
	var_3_string = 0; // 0x9f8 TMovB
	var_526_int = 1; // 0x9f9 PushI
	if(var_526_int == 0) goto Label_2622; // 0x9fa JumpB
	var_527_bool = 0; var_528_object = Obj(); // 0x9fb PushV
	var_528_object = var_1_object; // 0x9fc MovT
	func_8315(var_528_object); // 0x9fd NEW_2
	if(var_527_bool == 0) goto Label_2585; // 0x9ff JumpB
	var_533_object = Obj(); var_534_object = Obj(); // 0xa00 PushV
	var_533_object = var_1_object; // 0xa01 MovT
	var_534_object = var_0_object; // 0xa02 MovT
	func_7855(); // 0xa03 NEW_2
	var_537_object = Obj(); var_538_object = Obj(); // 0xa05 PushV
	var_537_object = var_1_object; // 0xa06 MovT
	var_538_object = var_0_object; // 0xa07 MovT
	func_7536(); // 0xa08 NEW_2
	var_541_string = ""; // 0xa0a PushV
	var_541_string = "Arrogance"; // 0xa0b MovS
	func_2652(var_521_object, var_541_string); // 0xa0c NEW_2
	var_549_int = 515089; // 0xa0e PushI
	SetMessage(var_549_int); // 0xa0f TObjFunc
	ClearReplies(); // 0xa11 TObjFunc
	var_550_int = 535859; // 0xa13 PushI
	var_551_int = 37561; // 0xa14 PushI
	var_552_int = 37560; // 0xa15 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0xa16 TObjFunc
	goto Label_2622; // 0xa18 Jump
	
Label_2622:
	var_553_bool = 0; // 0xa3e PushV
	func_7439(var_553_bool); // 0xa3f NEW_2
	if(var_553_bool == 0) goto Label_2637; // 0xa41 JumpB
	
Label_2626:
	lshWaitForAnimEnd(); // 0xa42 Func
	var_554_string = var_3_string; // 0xa44 PushT
	if(var_554_string == 0) goto Label_2631; // 0xa45 JumpB
	goto Label_2636; // 0xa46 Jump
	
Label_2636:
	goto Label_2651; // 0xa4c Jump
	
Label_2651:
	return 0; // 0xa5b Return
	
Label_2631:
	var_555_string = ""; // 0xa47 PushV
	var_555_string = var_2_object; // 0xa48 MovT
	func_7201(var_555_string); // 0xa49 NEW_2
	goto Label_2626; // 0xa4b Jump
	
Label_2637:
	var_556_string = "all"; // 0xa4d PushS
	var_557_string = "idle"; // 0xa4e PushS
	PlayAnimation(var_556_string, var_557_string); // 0xa4f Func
	
Label_2641:
	WaitForAnimEnd(); // 0xa51 Func
	var_558_string = var_3_string; // 0xa53 PushT
	if(var_558_string == 0) goto Label_2646; // 0xa54 JumpB
	goto Label_2651; // 0xa55 Jump
	
Label_2646:
	var_559_string = "all"; // 0xa56 PushS
	var_560_string = "idle"; // 0xa57 PushS
	PlayAnimation(var_559_string, var_560_string); // 0xa58 Func
	goto Label_2641; // 0xa5a Jump
	
Label_2585:
	var_561_string = ""; // 0xa19 PushV
	var_561_string = "Neutral"; // 0xa1a MovS
	func_2652(var_521_object, var_561_string); // 0xa1b NEW_2
	var_562_int = 513409; // 0xa1d PushI
	SetMessage(var_562_int); // 0xa1e TObjFunc
	ClearReplies(); // 0xa20 TObjFunc
	var_563_bool = 0; var_564_object = Obj(); // 0xa22 PushV
	var_564_object = var_1_object; // 0xa23 MovT
	func_8303(var_564_object); // 0xa24 NEW_2
	if(var_563_bool == 0) goto Label_2604; // 0xa26 JumpB
	var_569_int = 535855; // 0xa27 PushI
	var_570_int = 14647; // 0xa28 PushI
	var_571_int = 37556; // 0xa29 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0xa2a TObjFunc
	
Label_2604:
	var_572_bool = 0; var_573_object = Obj(); // 0xa2c PushV
	var_573_object = var_1_object; // 0xa2d MovT
	func_8119(var_573_object); // 0xa2e NEW_2
	if(var_572_bool == 0) goto Label_2614; // 0xa30 JumpB
	var_578_int = 513411; // 0xa31 PushI
	var_579_int = 13400; // 0xa32 PushI
	var_580_int = 14645; // 0xa33 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0xa34 TObjFunc
	
Label_2614:
	var_581_int = 513410; // 0xa36 PushI
	var_582_int = -1; // 0xa37 PushI
	var_583_int = 14644; // 0xa38 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0xa39 TObjFunc
	goto Label_2622; // 0xa3b Jump
}


func_7158(var_172_bool)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; // 0x1bf6 PushV
	var_184_string = "d"; // 0x1bf7 PushS
	var_185_int = 0; // 0x1bf8 PushV
	func_7373(var_185_int); // 0x1bf9 NEW_2
	var_191_int = var_184_string + var_185_int; // 0x1bfb Add
	var_192_string = "m"; // 0x1bfc PushS
	var_179_string = var_191_int + var_192_string; // 0x1bfd Add2
	var_180_int = 0; // 0x1bfe MovI
	
Label_7167:
	var_193_int = 1; // 0x1bff PushI
	if(var_193_int == 0) goto Label_7180; // 0x1c00 JumpB
	var_194_int = 1; // 0x1c01 PushI
	var_195_int = var_180_int + var_194_int; // 0x1c02 Add
	var_196_int = var_179_string + var_195_int; // 0x1c03 Add
	HasProperty(var_196_int, var_181_bool); // 0x1c04 ObjFunc
	var_197_bool = var_181_bool == 0; // 0x1c06 Not
	if(var_197_bool == 0) goto Label_7177; // 0x1c07 JumpB
	goto Label_7180; // 0x1c08 Jump
	
Label_7180:
	var_198_bool = var_180_int == 0; // 0x1c0c Not
	if(var_198_bool == 0) goto Label_7184; // 0x1c0d JumpB
	var_172_bool = 0; // 0x1c0e MovB
	return 10; // 0x1c0f Return
	
Label_7184:
	var_182_int = 0; // 0x1c10 MovI
	var_199_int = 1; // 0x1c11 PushI
	var_200_bool = var_180_int > var_199_int; // 0x1c12 GT
	if(var_200_bool == 0) goto Label_7190; // 0x1c13 JumpB
	irand(var_182_int, var_180_int); // 0x1c14 Func
	
Label_7190:
	var_201_int = 1; // 0x1c16 PushI
	var_202_int = var_182_int + var_201_int; // 0x1c17 Add
	var_203_int = var_179_string + var_202_int; // 0x1c18 Add
	GetProperty(var_203_int, var_183_string); // 0x1c19 ObjFunc
	var_204_bool = 0; var_205_string = ""; // 0x1c1b PushV
	var_205_string = var_183_string; // 0x1c1c Mov
	func_7232(var_204_bool, var_205_string); // 0x1c1d NEW_2
	var_172_bool = var_204_bool; // 0x1c1e Mov
	return 10; // 0x1c20 Return
	
Label_7177:
	var_206_int = 1; // 0x1c09 PushI
	var_180_int = var_180_int + var_206_int; // 0x1c0a Add2
	goto Label_7167; // 0x1c0b Jump
}


func_7673()
{
	var_408_string = "ood7Aglaja2"; // 0x1dfa PushS
	var_409_int = 1; // 0x1dfb PushI
	SetVariable(var_408_string, var_409_int); // 0x1dfc Func
	return 0; // 0x1dfe Return
}


func_8700()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x21fc PushV
	var_48_int = 175; // 0x21fd PushI
	var_49_int = 1; // 0x21fe PushI
	var_50_int = 515434; // 0x21ff PushI
	CreateDiaryEntry(var_47_object, var_48_int, var_49_int, var_50_int); // 0x2200 Func
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0; // 0x2202 PushV
	var_52_object = var_47_object; // 0x2203 Mov
	var_53_int = -1; // 0x2204 MovI
	func_8778(var_51_bool, var_52_object, var_53_int); // 0x2205 NEW_2
	return 2; // 0x2207 Return
}


func_8190(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x1fff PushV
	var_342_string = "ood12AglajaNight1"; // 0x2000 MovS
	func_7270(var_341_int, var_342_string); // 0x2001 NEW_2
	var_345_int = 0; // 0x2003 PushI
	var_346_bool = var_341_int == var_345_int; // 0x2004 Eq
	if(var_346_bool == 0) goto Label_8200; // 0x2005 JumpB
	var_339_bool = 1; // 0x2006 MovB
	return 0; // 0x2007 Return
	
Label_8200:
	var_339_bool = 0; // 0x2008 MovB
	return 0; // 0x2009 Return
}


func_7679()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1dff PushV
	var_46_string = "d7q01"; // 0x1e00 PushS
	var_47_int = 1; // 0x1e01 PushI
	SetVariable(var_46_string, var_47_int); // 0x1e02 Func
	var_48_object = Obj(); // 0x1e04 PushV
	func_8806(var_48_object); // 0x1e05 NEW_2
	var_45_object = var_48_object; // 0x1e06 Mov
	var_55_string = "d7q01AglajaGotoBirdmaskSelf"; // 0x1e08 PushS
	var_56_string = "pt_map_aglaja"; // 0x1e09 PushS
	var_57_int = 1; // 0x1e0a PushI
	var_58_int = 515410; // 0x1e0b PushI
	var_59_float = 0; // 0x1e0c PushV
	func_7368(var_59_float); // 0x1e0d NEW_2
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x1e0f ObjFunc
	var_62_string = "d7q01BirdmaskD"; // 0x1e11 PushS
	var_63_string = "pt_map_d7q01_dbirdmask"; // 0x1e12 PushS
	var_64_int = 1; // 0x1e13 PushI
	var_65_int = 515408; // 0x1e14 PushI
	var_66_float = 0; // 0x1e15 PushV
	func_7368(var_66_float); // 0x1e16 NEW_2
	AddMark(var_62_string, var_63_string, var_64_int, var_65_int, var_66_float); // 0x1e18 ObjFunc
	var_67_string = "d7q01BirdmaskM"; // 0x1e1a PushS
	var_68_string = "pt_map_d7q01_mbirdmask"; // 0x1e1b PushS
	var_69_int = 1; // 0x1e1c PushI
	var_70_int = 515409; // 0x1e1d PushI
	var_71_float = 0; // 0x1e1e PushV
	func_7368(var_71_float); // 0x1e1f NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x1e21 ObjFunc
	var_72_string = "d7q01BirdmaskU"; // 0x1e23 PushS
	var_73_string = "pt_map_d7q01_ubirdmask"; // 0x1e24 PushS
	var_74_int = 1; // 0x1e25 PushI
	var_75_int = 515407; // 0x1e26 PushI
	var_76_float = 0; // 0x1e27 PushV
	func_7368(var_76_float); // 0x1e28 NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x1e2a ObjFunc
	func_8596(); // 0x1e2d NEW_2
	func_8609(); // 0x1e30 NEW_2
	var_108_bool = 0; var_109_string = ""; var_110_string = ""; // 0x1e32 PushV
	var_109_string = "quest_d7_01"; // 0x1e33 MovS
	var_110_string = "place_birdmasks"; // 0x1e34 MovS
	func_7356(var_108_bool, var_109_string, var_110_string); // 0x1e35 NEW_2
	return 2; // 0x1e37 Return
}


