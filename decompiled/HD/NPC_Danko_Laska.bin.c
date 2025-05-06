task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xa7 PushI
	if(var_38_int == 0) goto Label_276; // 0xa8 JumpB
	func_3076(); // 0xaa NEW_2
	var_40_int = 429; // 0xac PushI
	var_41_bool = var_36_bool == var_40_int; // 0xad Eq
	if(var_41_bool == 0) goto Label_200; // 0xae JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xaf PushV
	var_42_object = var_1_object; // 0xb0 MovT
	var_43_object = var_0_object; // 0xb1 MovT
	func_3400(); // 0xb2 NEW_2
	var_46_string = ""; // 0xb4 PushV
	var_46_string = "Neutral"; // 0xb5 MovS
	func_144(var_37_cvector, var_46_string); // 0xb6 NEW_2
	var_63_int = 500370; // 0xb8 PushI
	SetMessage(var_63_int); // 0xb9 TObjFunc
	ClearReplies(); // 0xbb TObjFunc
	var_64_int = 500371; // 0xbd PushI
	var_65_int = 432; // 0xbe PushI
	var_66_int = 430; // 0xbf PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xc0 TObjFunc
	var_67_int = 500372; // 0xc2 PushI
	var_68_int = 437; // 0xc3 PushI
	var_69_int = 431; // 0xc4 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_70_int = 437; // 0xc8 PushI
	var_71_bool = var_36_bool == var_70_int; // 0xc9 Eq
	if(var_71_bool == 0) goto Label_218; // 0xca JumpB
	var_72_string = ""; // 0xcb PushV
	var_72_string = "Neutral"; // 0xcc MovS
	func_144(var_37_cvector, var_72_string); // 0xcd NEW_2
	var_73_int = 500377; // 0xcf PushI
	SetMessage(var_73_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_74_int = 500378; // 0xd4 PushI
	var_75_int = 432; // 0xd5 PushI
	var_76_int = 438; // 0xd6 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_77_int = 432; // 0xda PushI
	var_78_bool = var_36_bool == var_77_int; // 0xdb Eq
	if(var_78_bool == 0) goto Label_241; // 0xdc JumpB
	var_79_string = ""; // 0xdd PushV
	var_79_string = "Neutral"; // 0xde MovS
	func_144(var_37_cvector, var_79_string); // 0xdf NEW_2
	var_80_int = 500373; // 0xe1 PushI
	SetMessage(var_80_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_81_int = 500374; // 0xe6 PushI
	var_82_int = 435; // 0xe7 PushI
	var_83_int = 433; // 0xe8 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xe9 TObjFunc
	var_84_int = 500375; // 0xeb PushI
	var_85_int = 435; // 0xec PushI
	var_86_int = 434; // 0xed PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_87_int = 435; // 0xf1 PushI
	var_88_bool = var_36_bool == var_87_int; // 0xf2 Eq
	if(var_88_bool == 0) goto Label_264; // 0xf3 JumpB
	var_89_string = ""; // 0xf4 PushV
	var_89_string = "Neutral"; // 0xf5 MovS
	func_144(var_37_cvector, var_89_string); // 0xf6 NEW_2
	var_90_int = 500376; // 0xf8 PushI
	SetMessage(var_90_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_91_int = 500381; // 0xfd PushI
	var_92_int = -1; // 0xfe PushI
	var_93_int = 442; // 0xff PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x100 TObjFunc
	var_94_int = 500379; // 0x102 PushI
	var_95_int = -1; // 0x103 PushI
	var_96_int = 440; // 0x104 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_3_string = 1; // 0x108 TMovB
	var_97_bool = 0; // 0x109 PushV
	func_3268(var_97_bool); // 0x10a NEW_2
	if(var_97_bool == 0) goto Label_272; // 0x10c JumpB
	lshStopAnimation(); // 0x10d Func
	goto Label_274; // 0x10f Jump
	
Label_274:
	return 0; // 0x112 Return
	
Label_272:
	StopAnimation(); // 0x110 Func
	
Label_276:
	return 0; // 0x114 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x1c6 PushI
	if(var_38_int == 0) goto Label_884; // 0x1c7 JumpB
	func_3076(); // 0x1c9 NEW_2
	var_40_int = 35473; // 0x1cb PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x1cc Eq
	if(var_41_bool == 0) goto Label_467; // 0x1cd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x1ce PushV
	var_42_object = var_1_object; // 0x1cf MovT
	var_43_object = var_0_object; // 0x1d0 MovT
	func_3297(); // 0x1d1 NEW_2
	
Label_467:
	var_46_int = 35486; // 0x1d3 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x1d4 Eq
	if(var_47_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x1d6 PushV
	var_48_object = var_1_object; // 0x1d7 MovT
	var_49_object = var_0_object; // 0x1d8 MovT
	func_3270(var_49_object); // 0x1d9 NEW_2
	
Label_475:
	var_72_int = 35487; // 0x1db PushI
	var_73_bool = var_37_cvector == var_72_int; // 0x1dc Eq
	if(var_73_bool == 0) goto Label_483; // 0x1dd JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x1de PushV
	var_74_object = var_1_object; // 0x1df MovT
	var_75_object = var_0_object; // 0x1e0 MovT
	func_3270(var_75_object); // 0x1e1 NEW_2
	
Label_483:
	var_76_int = 10416; // 0x1e3 PushI
	var_77_bool = var_37_cvector == var_76_int; // 0x1e4 Eq
	if(var_77_bool == 0) goto Label_491; // 0x1e5 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1e6 PushV
	var_78_object = var_1_object; // 0x1e7 MovT
	var_79_object = var_0_object; // 0x1e8 MovT
	func_3303(); // 0x1e9 NEW_2
	
Label_491:
	var_82_int = 10415; // 0x1eb PushI
	var_83_bool = var_36_bool == var_82_int; // 0x1ec Eq
	if(var_83_bool == 0) goto Label_529; // 0x1ed JumpB
	var_84_string = ""; // 0x1ee PushV
	var_84_string = "Neutral"; // 0x1ef MovS
	func_431(var_37_cvector, var_84_string); // 0x1f0 NEW_2
	var_101_int = 509473; // 0x1f2 PushI
	SetMessage(var_101_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_102_bool = 0; var_103_object = Obj(); // 0x1f7 PushV
	var_103_object = var_1_object; // 0x1f8 MovT
	func_3433(var_103_object); // 0x1f9 NEW_2
	if(var_102_bool == 0) goto Label_513; // 0x1fb JumpB
	var_110_int = 533914; // 0x1fc PushI
	var_111_int = 35474; // 0x1fd PushI
	var_112_int = 35473; // 0x1fe PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x1ff TObjFunc
	
Label_513:
	var_113_bool = 0; var_114_object = Obj(); // 0x201 PushV
	var_114_object = var_1_object; // 0x202 MovT
	func_3445(var_114_object); // 0x203 NEW_2
	if(var_113_bool == 0) goto Label_523; // 0x205 JumpB
	var_119_int = 509474; // 0x206 PushI
	var_120_int = 10417; // 0x207 PushI
	var_121_int = 10416; // 0x208 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x209 TObjFunc
	
Label_523:
	var_122_int = 509487; // 0x20b PushI
	var_123_int = -1; // 0x20c PushI
	var_124_int = 10429; // 0x20d PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x20e TObjFunc
	return 0; // 0x210 Return
	
Label_529:
	var_125_int = 10417; // 0x211 PushI
	var_126_bool = var_36_bool == var_125_int; // 0x212 Eq
	if(var_126_bool == 0) goto Label_552; // 0x213 JumpB
	var_127_string = ""; // 0x214 PushV
	var_127_string = "Autizm"; // 0x215 MovS
	func_431(var_37_cvector, var_127_string); // 0x216 NEW_2
	var_128_int = 509475; // 0x218 PushI
	SetMessage(var_128_int); // 0x219 TObjFunc
	ClearReplies(); // 0x21b TObjFunc
	var_129_int = 509476; // 0x21d PushI
	var_130_int = 10419; // 0x21e PushI
	var_131_int = 10418; // 0x21f PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x220 TObjFunc
	var_132_int = 509481; // 0x222 PushI
	var_133_int = 10424; // 0x223 PushI
	var_134_int = 10423; // 0x224 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x225 TObjFunc
	return 0; // 0x227 Return
	
Label_552:
	var_135_int = 10424; // 0x228 PushI
	var_136_bool = var_36_bool == var_135_int; // 0x229 Eq
	if(var_136_bool == 0) goto Label_570; // 0x22a JumpB
	var_137_string = ""; // 0x22b PushV
	var_137_string = "Autizm"; // 0x22c MovS
	func_431(var_37_cvector, var_137_string); // 0x22d NEW_2
	var_138_int = 509482; // 0x22f PushI
	SetMessage(var_138_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_139_int = 509483; // 0x234 PushI
	var_140_int = 10426; // 0x235 PushI
	var_141_int = 10425; // 0x236 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_142_int = 10426; // 0x23a PushI
	var_143_bool = var_36_bool == var_142_int; // 0x23b Eq
	if(var_143_bool == 0) goto Label_593; // 0x23c JumpB
	var_144_string = ""; // 0x23d PushV
	var_144_string = "Autizm"; // 0x23e MovS
	func_431(var_37_cvector, var_144_string); // 0x23f NEW_2
	var_145_int = 509484; // 0x241 PushI
	SetMessage(var_145_int); // 0x242 TObjFunc
	ClearReplies(); // 0x244 TObjFunc
	var_146_int = 509485; // 0x246 PushI
	var_147_int = -1; // 0x247 PushI
	var_148_int = 10427; // 0x248 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x249 TObjFunc
	var_149_int = 509486; // 0x24b PushI
	var_150_int = -1; // 0x24c PushI
	var_151_int = 10428; // 0x24d PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x24e TObjFunc
	return 0; // 0x250 Return
	
Label_593:
	var_152_int = 10419; // 0x251 PushI
	var_153_bool = var_36_bool == var_152_int; // 0x252 Eq
	if(var_153_bool == 0) goto Label_621; // 0x253 JumpB
	var_154_string = ""; // 0x254 PushV
	var_154_string = "Autizm"; // 0x255 MovS
	func_431(var_37_cvector, var_154_string); // 0x256 NEW_2
	var_155_int = 509477; // 0x258 PushI
	SetMessage(var_155_int); // 0x259 TObjFunc
	ClearReplies(); // 0x25b TObjFunc
	var_156_int = 509478; // 0x25d PushI
	var_157_int = -1; // 0x25e PushI
	var_158_int = 10420; // 0x25f PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x260 TObjFunc
	var_159_int = 509479; // 0x262 PushI
	var_160_int = -1; // 0x263 PushI
	var_161_int = 10421; // 0x264 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x265 TObjFunc
	var_162_int = 509480; // 0x267 PushI
	var_163_int = -1; // 0x268 PushI
	var_164_int = 10422; // 0x269 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_165_int = 35474; // 0x26d PushI
	var_166_bool = var_36_bool == var_165_int; // 0x26e Eq
	if(var_166_bool == 0) goto Label_644; // 0x26f JumpB
	var_167_string = ""; // 0x270 PushV
	var_167_string = "Disturbance"; // 0x271 MovS
	func_431(var_37_cvector, var_167_string); // 0x272 NEW_2
	var_168_int = 533915; // 0x274 PushI
	SetMessage(var_168_int); // 0x275 TObjFunc
	ClearReplies(); // 0x277 TObjFunc
	var_169_int = 533916; // 0x279 PushI
	var_170_int = 35476; // 0x27a PushI
	var_171_int = 35475; // 0x27b PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x27c TObjFunc
	var_172_int = 533923; // 0x27e PushI
	var_173_int = 35483; // 0x27f PushI
	var_174_int = 35482; // 0x280 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x281 TObjFunc
	return 0; // 0x283 Return
	
Label_644:
	var_175_int = 35483; // 0x284 PushI
	var_176_bool = var_36_bool == var_175_int; // 0x285 Eq
	if(var_176_bool == 0) goto Label_662; // 0x286 JumpB
	var_177_string = ""; // 0x287 PushV
	var_177_string = "Disturbance"; // 0x288 MovS
	func_431(var_37_cvector, var_177_string); // 0x289 NEW_2
	var_178_int = 533924; // 0x28b PushI
	SetMessage(var_178_int); // 0x28c TObjFunc
	ClearReplies(); // 0x28e TObjFunc
	var_179_int = 533925; // 0x290 PushI
	var_180_int = 35478; // 0x291 PushI
	var_181_int = 35484; // 0x292 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x293 TObjFunc
	return 0; // 0x295 Return
	
Label_662:
	var_182_int = 35476; // 0x296 PushI
	var_183_bool = var_36_bool == var_182_int; // 0x297 Eq
	if(var_183_bool == 0) goto Label_685; // 0x298 JumpB
	var_184_string = ""; // 0x299 PushV
	var_184_string = "Disturbance"; // 0x29a MovS
	func_431(var_37_cvector, var_184_string); // 0x29b NEW_2
	var_185_int = 533917; // 0x29d PushI
	SetMessage(var_185_int); // 0x29e TObjFunc
	ClearReplies(); // 0x2a0 TObjFunc
	var_186_int = 533918; // 0x2a2 PushI
	var_187_int = 35478; // 0x2a3 PushI
	var_188_int = 35477; // 0x2a4 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x2a5 TObjFunc
	var_189_int = 533936; // 0x2a7 PushI
	var_190_int = 35499; // 0x2a8 PushI
	var_191_int = 35498; // 0x2a9 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x2aa TObjFunc
	return 0; // 0x2ac Return
	
Label_685:
	var_192_int = 35499; // 0x2ad PushI
	var_193_bool = var_36_bool == var_192_int; // 0x2ae Eq
	if(var_193_bool == 0) goto Label_708; // 0x2af JumpB
	var_194_string = ""; // 0x2b0 PushV
	var_194_string = "Disturbance"; // 0x2b1 MovS
	func_431(var_37_cvector, var_194_string); // 0x2b2 NEW_2
	var_195_int = 533937; // 0x2b4 PushI
	SetMessage(var_195_int); // 0x2b5 TObjFunc
	ClearReplies(); // 0x2b7 TObjFunc
	var_196_int = 533939; // 0x2b9 PushI
	var_197_int = 35504; // 0x2ba PushI
	var_198_int = 35501; // 0x2bb PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x2bc TObjFunc
	var_199_int = 533938; // 0x2be PushI
	var_200_int = 35478; // 0x2bf PushI
	var_201_int = 35500; // 0x2c0 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_202_int = 35504; // 0x2c4 PushI
	var_203_bool = var_36_bool == var_202_int; // 0x2c5 Eq
	if(var_203_bool == 0) goto Label_726; // 0x2c6 JumpB
	var_204_string = ""; // 0x2c7 PushV
	var_204_string = "Disturbance"; // 0x2c8 MovS
	func_431(var_37_cvector, var_204_string); // 0x2c9 NEW_2
	var_205_int = 533940; // 0x2cb PushI
	SetMessage(var_205_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_206_int = 533941; // 0x2d0 PushI
	var_207_int = 35506; // 0x2d1 PushI
	var_208_int = 35505; // 0x2d2 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_209_int = 35506; // 0x2d6 PushI
	var_210_bool = var_36_bool == var_209_int; // 0x2d7 Eq
	if(var_210_bool == 0) goto Label_749; // 0x2d8 JumpB
	var_211_string = ""; // 0x2d9 PushV
	var_211_string = "Pain"; // 0x2da MovS
	func_431(var_37_cvector, var_211_string); // 0x2db NEW_2
	var_212_int = 533942; // 0x2dd PushI
	SetMessage(var_212_int); // 0x2de TObjFunc
	ClearReplies(); // 0x2e0 TObjFunc
	var_213_int = 533943; // 0x2e2 PushI
	var_214_int = 35508; // 0x2e3 PushI
	var_215_int = 35507; // 0x2e4 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x2e5 TObjFunc
	var_216_int = 533948; // 0x2e7 PushI
	var_217_int = 35510; // 0x2e8 PushI
	var_218_int = 35512; // 0x2e9 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_219_int = 35510; // 0x2ed PushI
	var_220_bool = var_36_bool == var_219_int; // 0x2ee Eq
	if(var_220_bool == 0) goto Label_767; // 0x2ef JumpB
	var_221_string = ""; // 0x2f0 PushV
	var_221_string = "Pain"; // 0x2f1 MovS
	func_431(var_37_cvector, var_221_string); // 0x2f2 NEW_2
	var_222_int = 533946; // 0x2f4 PushI
	SetMessage(var_222_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_223_int = 533947; // 0x2f9 PushI
	var_224_int = -1; // 0x2fa PushI
	var_225_int = 35511; // 0x2fb PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x2fc TObjFunc
	return 0; // 0x2fe Return
	
Label_767:
	var_226_int = 35508; // 0x2ff PushI
	var_227_bool = var_36_bool == var_226_int; // 0x300 Eq
	if(var_227_bool == 0) goto Label_785; // 0x301 JumpB
	var_228_string = ""; // 0x302 PushV
	var_228_string = "Pain"; // 0x303 MovS
	func_431(var_37_cvector, var_228_string); // 0x304 NEW_2
	var_229_int = 533944; // 0x306 PushI
	SetMessage(var_229_int); // 0x307 TObjFunc
	ClearReplies(); // 0x309 TObjFunc
	var_230_int = 533945; // 0x30b PushI
	var_231_int = -1; // 0x30c PushI
	var_232_int = 35509; // 0x30d PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_233_int = 35478; // 0x311 PushI
	var_234_bool = var_36_bool == var_233_int; // 0x312 Eq
	if(var_234_bool == 0) goto Label_808; // 0x313 JumpB
	var_235_string = ""; // 0x314 PushV
	var_235_string = "Disturbance"; // 0x315 MovS
	func_431(var_37_cvector, var_235_string); // 0x316 NEW_2
	var_236_int = 533919; // 0x318 PushI
	SetMessage(var_236_int); // 0x319 TObjFunc
	ClearReplies(); // 0x31b TObjFunc
	var_237_int = 533922; // 0x31d PushI
	var_238_int = 35485; // 0x31e PushI
	var_239_int = 35481; // 0x31f PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x320 TObjFunc
	var_240_int = 533930; // 0x322 PushI
	var_241_int = 35490; // 0x323 PushI
	var_242_int = 35489; // 0x324 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_243_int = 35490; // 0x328 PushI
	var_244_bool = var_36_bool == var_243_int; // 0x329 Eq
	if(var_244_bool == 0) goto Label_831; // 0x32a JumpB
	var_245_string = ""; // 0x32b PushV
	var_245_string = "Welldie"; // 0x32c MovS
	func_431(var_37_cvector, var_245_string); // 0x32d NEW_2
	var_246_int = 533931; // 0x32f PushI
	SetMessage(var_246_int); // 0x330 TObjFunc
	ClearReplies(); // 0x332 TObjFunc
	var_247_int = 533932; // 0x334 PushI
	var_248_int = 35493; // 0x335 PushI
	var_249_int = 35491; // 0x336 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x337 TObjFunc
	var_250_int = 533934; // 0x339 PushI
	var_251_int = 35485; // 0x33a PushI
	var_252_int = 35494; // 0x33b PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x33c TObjFunc
	return 0; // 0x33e Return
	
Label_831:
	var_253_int = 35493; // 0x33f PushI
	var_254_bool = var_36_bool == var_253_int; // 0x340 Eq
	if(var_254_bool == 0) goto Label_849; // 0x341 JumpB
	var_255_string = ""; // 0x342 PushV
	var_255_string = "Welldie"; // 0x343 MovS
	func_431(var_37_cvector, var_255_string); // 0x344 NEW_2
	var_256_int = 533933; // 0x346 PushI
	SetMessage(var_256_int); // 0x347 TObjFunc
	ClearReplies(); // 0x349 TObjFunc
	var_257_int = 533935; // 0x34b PushI
	var_258_int = 35485; // 0x34c PushI
	var_259_int = 35495; // 0x34d PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x34e TObjFunc
	return 0; // 0x350 Return
	
Label_849:
	var_260_int = 35485; // 0x351 PushI
	var_261_bool = var_36_bool == var_260_int; // 0x352 Eq
	if(var_261_bool == 0) goto Label_872; // 0x353 JumpB
	var_262_string = ""; // 0x354 PushV
	var_262_string = "Neutral"; // 0x355 MovS
	func_431(var_37_cvector, var_262_string); // 0x356 NEW_2
	var_263_int = 533926; // 0x358 PushI
	SetMessage(var_263_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_264_int = 533927; // 0x35d PushI
	var_265_int = -1; // 0x35e PushI
	var_266_int = 35486; // 0x35f PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x360 TObjFunc
	var_267_int = 533928; // 0x362 PushI
	var_268_int = -1; // 0x363 PushI
	var_269_int = 35487; // 0x364 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_3_string = 1; // 0x368 TMovB
	var_270_bool = 0; // 0x369 PushV
	func_3268(var_270_bool); // 0x36a NEW_2
	if(var_270_bool == 0) goto Label_880; // 0x36c JumpB
	lshStopAnimation(); // 0x36d Func
	goto Label_882; // 0x36f Jump
	
Label_882:
	return 0; // 0x372 Return
	
Label_880:
	StopAnimation(); // 0x370 Func
	
Label_884:
	return 0; // 0x374 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x41c PushI
	if(var_38_int == 0) goto Label_1195; // 0x41d JumpB
	func_3076(); // 0x41f NEW_2
	var_40_int = 10978; // 0x421 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x422 Eq
	if(var_41_bool == 0) goto Label_1065; // 0x423 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x424 PushV
	var_42_object = var_1_object; // 0x425 MovT
	var_43_object = var_0_object; // 0x426 MovT
	func_3406(); // 0x427 NEW_2
	
Label_1065:
	var_46_int = 10976; // 0x429 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x42a Eq
	if(var_47_bool == 0) goto Label_1078; // 0x42b JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x42c PushV
	var_48_object = var_1_object; // 0x42d MovT
	var_49_object = var_0_object; // 0x42e MovT
	func_3337(var_49_object); // 0x42f NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x431 PushV
	var_72_object = var_1_object; // 0x432 MovT
	var_73_object = var_0_object; // 0x433 MovT
	func_3291(); // 0x434 NEW_2
	
Label_1078:
	var_76_int = 10977; // 0x436 PushI
	var_77_bool = var_37_cvector == var_76_int; // 0x437 Eq
	if(var_77_bool == 0) goto Label_1086; // 0x438 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x439 PushV
	var_78_object = var_1_object; // 0x43a MovT
	var_79_object = var_0_object; // 0x43b MovT
	func_3348(var_79_object); // 0x43c NEW_2
	
Label_1086:
	var_118_int = 10968; // 0x43e PushI
	var_119_bool = var_36_bool == var_118_int; // 0x43f Eq
	if(var_119_bool == 0) goto Label_1114; // 0x440 JumpB
	var_120_string = ""; // 0x441 PushV
	var_120_string = "Pain"; // 0x442 MovS
	func_1029(var_37_cvector, var_120_string); // 0x443 NEW_2
	var_137_int = 509951; // 0x445 PushI
	SetMessage(var_137_int); // 0x446 TObjFunc
	ClearReplies(); // 0x448 TObjFunc
	var_138_bool = 0; var_139_object = Obj(); // 0x44a PushV
	var_139_object = var_1_object; // 0x44b MovT
	func_3517(var_139_object); // 0x44c NEW_2
	if(var_138_bool == 0) goto Label_1108; // 0x44e JumpB
	var_146_int = 509961; // 0x44f PushI
	var_147_int = 10970; // 0x450 PushI
	var_148_int = 10978; // 0x451 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x452 TObjFunc
	
Label_1108:
	var_149_int = 509952; // 0x454 PushI
	var_150_int = -1; // 0x455 PushI
	var_151_int = 10969; // 0x456 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x457 TObjFunc
	return 0; // 0x459 Return
	
Label_1114:
	var_152_int = 10970; // 0x45a PushI
	var_153_bool = var_36_bool == var_152_int; // 0x45b Eq
	if(var_153_bool == 0) goto Label_1137; // 0x45c JumpB
	var_154_string = ""; // 0x45d PushV
	var_154_string = "Pain"; // 0x45e MovS
	func_1029(var_37_cvector, var_154_string); // 0x45f NEW_2
	var_155_int = 509953; // 0x461 PushI
	SetMessage(var_155_int); // 0x462 TObjFunc
	ClearReplies(); // 0x464 TObjFunc
	var_156_int = 509954; // 0x466 PushI
	var_157_int = -1; // 0x467 PushI
	var_158_int = 10971; // 0x468 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x469 TObjFunc
	var_159_int = 509955; // 0x46b PushI
	var_160_int = 10973; // 0x46c PushI
	var_161_int = 10972; // 0x46d PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_162_int = 10973; // 0x471 PushI
	var_163_bool = var_36_bool == var_162_int; // 0x472 Eq
	if(var_163_bool == 0) goto Label_1160; // 0x473 JumpB
	var_164_string = ""; // 0x474 PushV
	var_164_string = "Pain"; // 0x475 MovS
	func_1029(var_37_cvector, var_164_string); // 0x476 NEW_2
	var_165_int = 509956; // 0x478 PushI
	SetMessage(var_165_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_166_int = 509957; // 0x47d PushI
	var_167_int = 10975; // 0x47e PushI
	var_168_int = 10974; // 0x47f PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x480 TObjFunc
	var_169_int = 534181; // 0x482 PushI
	var_170_int = -1; // 0x483 PushI
	var_171_int = 35764; // 0x484 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_172_int = 10975; // 0x488 PushI
	var_173_bool = var_36_bool == var_172_int; // 0x489 Eq
	if(var_173_bool == 0) goto Label_1183; // 0x48a JumpB
	var_174_string = ""; // 0x48b PushV
	var_174_string = "Welldie"; // 0x48c MovS
	func_1029(var_37_cvector, var_174_string); // 0x48d NEW_2
	var_175_int = 509958; // 0x48f PushI
	SetMessage(var_175_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_176_int = 509959; // 0x494 PushI
	var_177_int = -1; // 0x495 PushI
	var_178_int = 10976; // 0x496 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x497 TObjFunc
	var_179_int = 509960; // 0x499 PushI
	var_180_int = -1; // 0x49a PushI
	var_181_int = 10977; // 0x49b PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x49c TObjFunc
	return 0; // 0x49e Return
	
Label_1183:
	var_3_string = 1; // 0x49f TMovB
	var_182_bool = 0; // 0x4a0 PushV
	func_3268(var_182_bool); // 0x4a1 NEW_2
	if(var_182_bool == 0) goto Label_1191; // 0x4a3 JumpB
	lshStopAnimation(); // 0x4a4 Func
	goto Label_1193; // 0x4a6 Jump
	
Label_1193:
	return 0; // 0x4a9 Return
	
Label_1191:
	StopAnimation(); // 0x4a7 Func
	
Label_1195:
	return 0; // 0x4ab Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x55c PushI
	if(var_38_int == 0) goto Label_1640; // 0x55d JumpB
	func_3076(); // 0x55f NEW_2
	var_40_int = 14233; // 0x561 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x562 Eq
	if(var_41_bool == 0) goto Label_1390; // 0x563 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x564 PushV
	var_42_object = var_1_object; // 0x565 MovT
	var_43_object = var_0_object; // 0x566 MovT
	func_3355(); // 0x567 NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0x569 PushV
	var_46_object = var_1_object; // 0x56a MovT
	var_47_object = var_0_object; // 0x56b MovT
	func_3389(); // 0x56c NEW_2
	
Label_1390:
	var_56_int = 14234; // 0x56e PushI
	var_57_bool = var_37_cvector == var_56_int; // 0x56f Eq
	if(var_57_bool == 0) goto Label_1403; // 0x570 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x571 PushV
	var_58_object = var_1_object; // 0x572 MovT
	var_59_object = var_0_object; // 0x573 MovT
	func_3355(); // 0x574 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x576 PushV
	var_60_object = var_1_object; // 0x577 MovT
	var_61_object = var_0_object; // 0x578 MovT
	func_3389(); // 0x579 NEW_2
	
Label_1403:
	var_62_int = 14027; // 0x57b PushI
	var_63_bool = var_37_cvector == var_62_int; // 0x57c Eq
	if(var_63_bool == 0) goto Label_1416; // 0x57d JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x57e PushV
	var_64_object = var_1_object; // 0x57f MovT
	var_65_object = var_0_object; // 0x580 MovT
	func_3355(); // 0x581 NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x583 PushV
	var_66_object = var_1_object; // 0x584 MovT
	var_67_object = var_0_object; // 0x585 MovT
	func_3361(); // 0x586 NEW_2
	
Label_1416:
	var_112_int = 14026; // 0x588 PushI
	var_113_bool = var_37_cvector == var_112_int; // 0x589 Eq
	if(var_113_bool == 0) goto Label_1429; // 0x58a JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x58b PushV
	var_114_object = var_1_object; // 0x58c MovT
	var_115_object = var_0_object; // 0x58d MovT
	func_3355(); // 0x58e NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x590 PushV
	var_116_object = var_1_object; // 0x591 MovT
	var_117_object = var_0_object; // 0x592 MovT
	func_3361(); // 0x593 NEW_2
	
Label_1429:
	var_118_int = 14015; // 0x595 PushI
	var_119_bool = var_36_bool == var_118_int; // 0x596 Eq
	if(var_119_bool == 0) goto Label_1466; // 0x597 JumpB
	var_120_string = ""; // 0x598 PushV
	var_120_string = "Neutral"; // 0x599 MovS
	func_1349(var_37_cvector, var_120_string); // 0x59a NEW_2
	var_137_int = 512815; // 0x59c PushI
	SetMessage(var_137_int); // 0x59d TObjFunc
	ClearReplies(); // 0x59f TObjFunc
	var_138_bool = 0; // 0x5a1 PushV
	var_138_bool = 0; // 0x5a2 MovB
	var_139_bool = 0; var_140_object = Obj(); // 0x5a3 PushV
	var_140_object = var_1_object; // 0x5a4 MovT
	func_3481(var_140_object); // 0x5a5 NEW_2
	if(var_139_bool == 0) goto Label_1454; // 0x5a7 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x5a8 PushV
	var_148_object = var_1_object; // 0x5a9 MovT
	func_3493(var_148_object); // 0x5aa NEW_2
	if(var_147_bool == 0) goto Label_1454; // 0x5ac JumpB
	var_138_bool = 1; // 0x5ad MovB
	
Label_1454:
	if(var_138_bool == 0) goto Label_1460; // 0x5ae JumpB
	var_153_int = 512816; // 0x5af PushI
	var_154_int = 14017; // 0x5b0 PushI
	var_155_int = 14016; // 0x5b1 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x5b2 TObjFunc
	
Label_1460:
	var_156_int = 512828; // 0x5b4 PushI
	var_157_int = -1; // 0x5b5 PushI
	var_158_int = 14028; // 0x5b6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_159_int = 14017; // 0x5ba PushI
	var_160_bool = var_36_bool == var_159_int; // 0x5bb Eq
	if(var_160_bool == 0) goto Label_1510; // 0x5bc JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x5bd PushV
	var_162_object = var_1_object; // 0x5be MovT
	func_3469(var_162_object); // 0x5bf NEW_2
	var_167_bool = var_161_bool == 0; // 0x5c1 Not
	if(var_167_bool == 0) goto Label_1490; // 0x5c2 JumpB
	var_168_string = ""; // 0x5c3 PushV
	var_168_string = "Disturbance"; // 0x5c4 MovS
	func_1349(var_37_cvector, var_168_string); // 0x5c5 NEW_2
	var_169_int = 512817; // 0x5c7 PushI
	SetMessage(var_169_int); // 0x5c8 TObjFunc
	ClearReplies(); // 0x5ca TObjFunc
	var_170_int = 513022; // 0x5cc PushI
	var_171_int = 14230; // 0x5cd PushI
	var_172_int = 14229; // 0x5ce PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x5cf TObjFunc
	return 0; // 0x5d1 Return
	
Label_1490:
	var_173_bool = 0; var_174_object = Obj(); // 0x5d2 PushV
	var_174_object = var_1_object; // 0x5d3 MovT
	func_3469(var_174_object); // 0x5d4 NEW_2
	if(var_173_bool == 0) goto Label_1510; // 0x5d6 JumpB
	var_175_string = ""; // 0x5d7 PushV
	var_175_string = "Welldie"; // 0x5d8 MovS
	func_1349(var_37_cvector, var_175_string); // 0x5d9 NEW_2
	var_176_int = 513021; // 0x5db PushI
	SetMessage(var_176_int); // 0x5dc TObjFunc
	ClearReplies(); // 0x5de TObjFunc
	var_177_int = 512818; // 0x5e0 PushI
	var_178_int = 14019; // 0x5e1 PushI
	var_179_int = 14018; // 0x5e2 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x5e3 TObjFunc
	return 0; // 0x5e5 Return
	
Label_1510:
	var_180_int = 14019; // 0x5e6 PushI
	var_181_bool = var_36_bool == var_180_int; // 0x5e7 Eq
	if(var_181_bool == 0) goto Label_1528; // 0x5e8 JumpB
	var_182_string = ""; // 0x5e9 PushV
	var_182_string = "Welldie"; // 0x5ea MovS
	func_1349(var_37_cvector, var_182_string); // 0x5eb NEW_2
	var_183_int = 512819; // 0x5ed PushI
	SetMessage(var_183_int); // 0x5ee TObjFunc
	ClearReplies(); // 0x5f0 TObjFunc
	var_184_int = 512820; // 0x5f2 PushI
	var_185_int = 14021; // 0x5f3 PushI
	var_186_int = 14020; // 0x5f4 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x5f5 TObjFunc
	return 0; // 0x5f7 Return
	
Label_1528:
	var_187_int = 14021; // 0x5f8 PushI
	var_188_bool = var_36_bool == var_187_int; // 0x5f9 Eq
	if(var_188_bool == 0) goto Label_1546; // 0x5fa JumpB
	var_189_string = ""; // 0x5fb PushV
	var_189_string = "Neutral"; // 0x5fc MovS
	func_1349(var_37_cvector, var_189_string); // 0x5fd NEW_2
	var_190_int = 512821; // 0x5ff PushI
	SetMessage(var_190_int); // 0x600 TObjFunc
	ClearReplies(); // 0x602 TObjFunc
	var_191_int = 512822; // 0x604 PushI
	var_192_int = 14023; // 0x605 PushI
	var_193_int = 14022; // 0x606 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x607 TObjFunc
	return 0; // 0x609 Return
	
Label_1546:
	var_194_int = 14023; // 0x60a PushI
	var_195_bool = var_36_bool == var_194_int; // 0x60b Eq
	if(var_195_bool == 0) goto Label_1569; // 0x60c JumpB
	var_196_string = ""; // 0x60d PushV
	var_196_string = "Autizm"; // 0x60e MovS
	func_1349(var_37_cvector, var_196_string); // 0x60f NEW_2
	var_197_int = 512823; // 0x611 PushI
	SetMessage(var_197_int); // 0x612 TObjFunc
	ClearReplies(); // 0x614 TObjFunc
	var_198_int = 512824; // 0x616 PushI
	var_199_int = 14025; // 0x617 PushI
	var_200_int = 14024; // 0x618 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x619 TObjFunc
	var_201_int = 512826; // 0x61b PushI
	var_202_int = -1; // 0x61c PushI
	var_203_int = 14026; // 0x61d PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x61e TObjFunc
	return 0; // 0x620 Return
	
Label_1569:
	var_204_int = 14025; // 0x621 PushI
	var_205_bool = var_36_bool == var_204_int; // 0x622 Eq
	if(var_205_bool == 0) goto Label_1587; // 0x623 JumpB
	var_206_string = ""; // 0x624 PushV
	var_206_string = "Autizm"; // 0x625 MovS
	func_1349(var_37_cvector, var_206_string); // 0x626 NEW_2
	var_207_int = 512825; // 0x628 PushI
	SetMessage(var_207_int); // 0x629 TObjFunc
	ClearReplies(); // 0x62b TObjFunc
	var_208_int = 512827; // 0x62d PushI
	var_209_int = -1; // 0x62e PushI
	var_210_int = 14027; // 0x62f PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x630 TObjFunc
	return 0; // 0x632 Return
	
Label_1587:
	var_211_int = 14230; // 0x633 PushI
	var_212_bool = var_36_bool == var_211_int; // 0x634 Eq
	if(var_212_bool == 0) goto Label_1610; // 0x635 JumpB
	var_213_string = ""; // 0x636 PushV
	var_213_string = "Disturbance"; // 0x637 MovS
	func_1349(var_37_cvector, var_213_string); // 0x638 NEW_2
	var_214_int = 513023; // 0x63a PushI
	SetMessage(var_214_int); // 0x63b TObjFunc
	ClearReplies(); // 0x63d TObjFunc
	var_215_int = 513024; // 0x63f PushI
	var_216_int = 14232; // 0x640 PushI
	var_217_int = 14231; // 0x641 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x642 TObjFunc
	var_218_int = 513027; // 0x644 PushI
	var_219_int = -1; // 0x645 PushI
	var_220_int = 14234; // 0x646 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x647 TObjFunc
	return 0; // 0x649 Return
	
Label_1610:
	var_221_int = 14232; // 0x64a PushI
	var_222_bool = var_36_bool == var_221_int; // 0x64b Eq
	if(var_222_bool == 0) goto Label_1628; // 0x64c JumpB
	var_223_string = ""; // 0x64d PushV
	var_223_string = "Autizm"; // 0x64e MovS
	func_1349(var_37_cvector, var_223_string); // 0x64f NEW_2
	var_224_int = 513025; // 0x651 PushI
	SetMessage(var_224_int); // 0x652 TObjFunc
	ClearReplies(); // 0x654 TObjFunc
	var_225_int = 513026; // 0x656 PushI
	var_226_int = -1; // 0x657 PushI
	var_227_int = 14233; // 0x658 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_3_string = 1; // 0x65c TMovB
	var_228_bool = 0; // 0x65d PushV
	func_3268(var_228_bool); // 0x65e NEW_2
	if(var_228_bool == 0) goto Label_1636; // 0x660 JumpB
	lshStopAnimation(); // 0x661 Func
	goto Label_1638; // 0x663 Jump
	
Label_1638:
	return 0; // 0x666 Return
	
Label_1636:
	StopAnimation(); // 0x664 Func
	
Label_1640:
	return 0; // 0x668 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x710 PushI
	if(var_38_int == 0) goto Label_1899; // 0x711 JumpB
	func_3076(); // 0x713 NEW_2
	var_40_int = 36960; // 0x715 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x716 Eq
	if(var_41_bool == 0) goto Label_1841; // 0x717 JumpB
	var_42_string = ""; // 0x718 PushV
	var_42_string = "Neutral"; // 0x719 MovS
	func_1785(var_37_cvector, var_42_string); // 0x71a NEW_2
	var_59_int = 535284; // 0x71c PushI
	SetMessage(var_59_int); // 0x71d TObjFunc
	ClearReplies(); // 0x71f TObjFunc
	var_60_int = 535285; // 0x721 PushI
	var_61_int = 36962; // 0x722 PushI
	var_62_int = 36961; // 0x723 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x724 TObjFunc
	var_63_int = 535292; // 0x726 PushI
	var_64_int = -1; // 0x727 PushI
	var_65_int = 36968; // 0x728 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x729 TObjFunc
	var_66_int = 535293; // 0x72b PushI
	var_67_int = -1; // 0x72c PushI
	var_68_int = 36969; // 0x72d PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x72e TObjFunc
	return 0; // 0x730 Return
	
Label_1841:
	var_69_int = 36962; // 0x731 PushI
	var_70_bool = var_36_bool == var_69_int; // 0x732 Eq
	if(var_70_bool == 0) goto Label_1864; // 0x733 JumpB
	var_71_string = ""; // 0x734 PushV
	var_71_string = "Neutral"; // 0x735 MovS
	func_1785(var_37_cvector, var_71_string); // 0x736 NEW_2
	var_72_int = 535286; // 0x738 PushI
	SetMessage(var_72_int); // 0x739 TObjFunc
	ClearReplies(); // 0x73b TObjFunc
	var_73_int = 535287; // 0x73d PushI
	var_74_int = 36964; // 0x73e PushI
	var_75_int = 36963; // 0x73f PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x740 TObjFunc
	var_76_int = 535291; // 0x742 PushI
	var_77_int = -1; // 0x743 PushI
	var_78_int = 36967; // 0x744 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x745 TObjFunc
	return 0; // 0x747 Return
	
Label_1864:
	var_79_int = 36964; // 0x748 PushI
	var_80_bool = var_36_bool == var_79_int; // 0x749 Eq
	if(var_80_bool == 0) goto Label_1887; // 0x74a JumpB
	var_81_string = ""; // 0x74b PushV
	var_81_string = "Neutral"; // 0x74c MovS
	func_1785(var_37_cvector, var_81_string); // 0x74d NEW_2
	var_82_int = 535288; // 0x74f PushI
	SetMessage(var_82_int); // 0x750 TObjFunc
	ClearReplies(); // 0x752 TObjFunc
	var_83_int = 535289; // 0x754 PushI
	var_84_int = -1; // 0x755 PushI
	var_85_int = 36965; // 0x756 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x757 TObjFunc
	var_86_int = 535290; // 0x759 PushI
	var_87_int = -1; // 0x75a PushI
	var_88_int = 36966; // 0x75b PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x75c TObjFunc
	return 0; // 0x75e Return
	
Label_1887:
	var_3_string = 1; // 0x75f TMovB
	var_89_bool = 0; // 0x760 PushV
	func_3268(var_89_bool); // 0x761 NEW_2
	if(var_89_bool == 0) goto Label_1895; // 0x763 JumpB
	lshStopAnimation(); // 0x764 Func
	goto Label_1897; // 0x766 Jump
	
Label_1897:
	return 0; // 0x769 Return
	
Label_1895:
	StopAnimation(); // 0x767 Func
	
Label_1899:
	return 0; // 0x76b Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x821 PushI
	if(var_38_int == 0) goto Label_2279; // 0x822 JumpB
	func_3076(); // 0x824 NEW_2
	var_40_int = 42012; // 0x826 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x827 Eq
	if(var_41_bool == 0) goto Label_2094; // 0x828 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x829 PushV
	var_42_object = var_1_object; // 0x82a MovT
	var_43_object = var_0_object; // 0x82b MovT
	func_3309(); // 0x82c NEW_2
	
Label_2094:
	var_46_int = 42025; // 0x82e PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x82f Eq
	if(var_47_bool == 0) goto Label_2102; // 0x830 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x831 PushV
	var_48_object = var_1_object; // 0x832 MovT
	var_49_object = var_0_object; // 0x833 MovT
	func_3412(var_49_object); // 0x834 NEW_2
	
Label_2102:
	var_72_int = 42026; // 0x836 PushI
	var_73_bool = var_37_cvector == var_72_int; // 0x837 Eq
	if(var_73_bool == 0) goto Label_2120; // 0x838 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x839 PushV
	var_74_object = var_1_object; // 0x83a MovT
	var_75_object = var_0_object; // 0x83b MovT
	func_3412(var_75_object); // 0x83c NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x83e PushV
	var_76_object = var_1_object; // 0x83f MovT
	var_77_object = var_0_object; // 0x840 MovT
	func_3326(var_77_object); // 0x841 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x843 PushV
	var_87_object = var_1_object; // 0x844 MovT
	var_88_object = var_0_object; // 0x845 MovT
	func_3315(var_88_object); // 0x846 NEW_2
	
Label_2120:
	var_93_int = 42010; // 0x848 PushI
	var_94_bool = var_36_bool == var_93_int; // 0x849 Eq
	if(var_94_bool == 0) goto Label_2162; // 0x84a JumpB
	var_95_string = ""; // 0x84b PushV
	var_95_string = "Pain"; // 0x84c MovS
	func_2058(var_37_cvector, var_95_string); // 0x84d NEW_2
	var_112_int = 540043; // 0x84f PushI
	SetMessage(var_112_int); // 0x850 TObjFunc
	ClearReplies(); // 0x852 TObjFunc
	var_113_bool = 0; // 0x854 PushV
	var_113_bool = 0; // 0x855 MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x856 PushV
	var_115_object = var_1_object; // 0x857 MovT
	func_3505(var_115_object); // 0x858 NEW_2
	if(var_114_bool == 0) goto Label_2145; // 0x85a JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x85b PushV
	var_123_object = var_1_object; // 0x85c MovT
	func_3457(var_123_object); // 0x85d NEW_2
	if(var_122_bool == 0) goto Label_2145; // 0x85f JumpB
	var_113_bool = 1; // 0x860 MovB
	
Label_2145:
	if(var_113_bool == 0) goto Label_2151; // 0x861 JumpB
	var_128_int = 540045; // 0x862 PushI
	var_129_int = 42013; // 0x863 PushI
	var_130_int = 42012; // 0x864 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x865 TObjFunc
	
Label_2151:
	var_131_int = 540044; // 0x867 PushI
	var_132_int = -1; // 0x868 PushI
	var_133_int = 42011; // 0x869 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x86a TObjFunc
	var_134_int = 540060; // 0x86c PushI
	var_135_int = -1; // 0x86d PushI
	var_136_int = 42029; // 0x86e PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x86f TObjFunc
	return 0; // 0x871 Return
	
Label_2162:
	var_137_int = 42013; // 0x872 PushI
	var_138_bool = var_36_bool == var_137_int; // 0x873 Eq
	if(var_138_bool == 0) goto Label_2185; // 0x874 JumpB
	var_139_string = ""; // 0x875 PushV
	var_139_string = "Pain"; // 0x876 MovS
	func_2058(var_37_cvector, var_139_string); // 0x877 NEW_2
	var_140_int = 540046; // 0x879 PushI
	SetMessage(var_140_int); // 0x87a TObjFunc
	ClearReplies(); // 0x87c TObjFunc
	var_141_int = 540047; // 0x87e PushI
	var_142_int = 42015; // 0x87f PushI
	var_143_int = 42014; // 0x880 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x881 TObjFunc
	var_144_int = 540052; // 0x883 PushI
	var_145_int = 42024; // 0x884 PushI
	var_146_int = 42019; // 0x885 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x886 TObjFunc
	return 0; // 0x888 Return
	
Label_2185:
	var_147_int = 42015; // 0x889 PushI
	var_148_bool = var_36_bool == var_147_int; // 0x88a Eq
	if(var_148_bool == 0) goto Label_2203; // 0x88b JumpB
	var_149_string = ""; // 0x88c PushV
	var_149_string = "Pain"; // 0x88d MovS
	func_2058(var_37_cvector, var_149_string); // 0x88e NEW_2
	var_150_int = 540048; // 0x890 PushI
	SetMessage(var_150_int); // 0x891 TObjFunc
	ClearReplies(); // 0x893 TObjFunc
	var_151_int = 540049; // 0x895 PushI
	var_152_int = 42017; // 0x896 PushI
	var_153_int = 42016; // 0x897 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x898 TObjFunc
	return 0; // 0x89a Return
	
Label_2203:
	var_154_int = 42017; // 0x89b PushI
	var_155_bool = var_36_bool == var_154_int; // 0x89c Eq
	if(var_155_bool == 0) goto Label_2226; // 0x89d JumpB
	var_156_string = ""; // 0x89e PushV
	var_156_string = "Welldie"; // 0x89f MovS
	func_2058(var_37_cvector, var_156_string); // 0x8a0 NEW_2
	var_157_int = 540050; // 0x8a2 PushI
	SetMessage(var_157_int); // 0x8a3 TObjFunc
	ClearReplies(); // 0x8a5 TObjFunc
	var_158_int = 540051; // 0x8a7 PushI
	var_159_int = 42020; // 0x8a8 PushI
	var_160_int = 42018; // 0x8a9 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x8aa TObjFunc
	var_161_int = 540056; // 0x8ac PushI
	var_162_int = 42024; // 0x8ad PushI
	var_163_int = 42023; // 0x8ae PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x8af TObjFunc
	return 0; // 0x8b1 Return
	
Label_2226:
	var_164_int = 42020; // 0x8b2 PushI
	var_165_bool = var_36_bool == var_164_int; // 0x8b3 Eq
	if(var_165_bool == 0) goto Label_2244; // 0x8b4 JumpB
	var_166_string = ""; // 0x8b5 PushV
	var_166_string = "Pain"; // 0x8b6 MovS
	func_2058(var_37_cvector, var_166_string); // 0x8b7 NEW_2
	var_167_int = 540053; // 0x8b9 PushI
	SetMessage(var_167_int); // 0x8ba TObjFunc
	ClearReplies(); // 0x8bc TObjFunc
	var_168_int = 540054; // 0x8be PushI
	var_169_int = 42024; // 0x8bf PushI
	var_170_int = 42021; // 0x8c0 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x8c1 TObjFunc
	return 0; // 0x8c3 Return
	
Label_2244:
	var_171_int = 42024; // 0x8c4 PushI
	var_172_bool = var_36_bool == var_171_int; // 0x8c5 Eq
	if(var_172_bool == 0) goto Label_2267; // 0x8c6 JumpB
	var_173_string = ""; // 0x8c7 PushV
	var_173_string = "Neutral"; // 0x8c8 MovS
	func_2058(var_37_cvector, var_173_string); // 0x8c9 NEW_2
	var_174_int = 540057; // 0x8cb PushI
	SetMessage(var_174_int); // 0x8cc TObjFunc
	ClearReplies(); // 0x8ce TObjFunc
	var_175_int = 540058; // 0x8d0 PushI
	var_176_int = -1; // 0x8d1 PushI
	var_177_int = 42025; // 0x8d2 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x8d3 TObjFunc
	var_178_int = 540059; // 0x8d5 PushI
	var_179_int = -1; // 0x8d6 PushI
	var_180_int = 42026; // 0x8d7 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x8d8 TObjFunc
	return 0; // 0x8da Return
	
Label_2267:
	var_3_string = 1; // 0x8db TMovB
	var_181_bool = 0; // 0x8dc PushV
	func_3268(var_181_bool); // 0x8dd NEW_2
	if(var_181_bool == 0) goto Label_2275; // 0x8df JumpB
	lshStopAnimation(); // 0x8e0 Func
	goto Label_2277; // 0x8e2 Jump
	
Label_2277:
	return 0; // 0x8e5 Return
	
Label_2275:
	StopAnimation(); // 0x8e3 Func
	
Label_2279:
	return 0; // 0x8e7 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0x98a PushI
	if(var_38_int == 0) goto Label_2482; // 0x98b JumpB
	func_3076(); // 0x98d NEW_2
	var_40_int = 42557; // 0x98f PushI
	var_41_bool = var_36_int == var_40_int; // 0x990 Eq
	if(var_41_bool == 0) goto Label_2470; // 0x991 JumpB
	var_42_string = ""; // 0x992 PushV
	var_42_string = "Neutral"; // 0x993 MovS
	func_2419(var_37_cvector, var_42_string); // 0x994 NEW_2
	var_59_int = 540548; // 0x996 PushI
	SetMessage(var_59_int); // 0x997 TObjFunc
	ClearReplies(); // 0x999 TObjFunc
	var_60_int = 540549; // 0x99b PushI
	var_61_int = -1; // 0x99c PushI
	var_62_int = 42558; // 0x99d PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x99e TObjFunc
	var_63_int = 540797; // 0x9a0 PushI
	var_64_int = -1; // 0x9a1 PushI
	var_65_int = 42846; // 0x9a2 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x9a3 TObjFunc
	return 0; // 0x9a5 Return
	
Label_2470:
	var_3_string = 1; // 0x9a6 TMovB
	var_66_bool = 0; // 0x9a7 PushV
	func_3268(var_66_bool); // 0x9a8 NEW_2
	if(var_66_bool == 0) goto Label_2478; // 0x9aa JumpB
	lshStopAnimation(); // 0x9ab Func
	goto Label_2480; // 0x9ad Jump
	
Label_2480:
	return 0; // 0x9b0 Return
	
Label_2478:
	StopAnimation(); // 0x9ae Func
	
Label_2482:
	return 0; // 0x9b2 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0x9fd PushI
	var_38_bool = var_36_int == var_37_int; // 0x9fe Eq
	if(var_38_bool == 0) goto Label_2593; // 0x9ff JumpB
	func_2552(); // 0xa01 NEW_2
	var_40_bool = 0; // 0xa03 PushV
	var_40_bool = 0; // 0xa04 MovB
	var_41_bool = 0; // 0xa05 PushV
	func_2800(var_41_bool); // 0xa06 NEW_2
	if(var_41_bool == 0) goto Label_2574; // 0xa08 JumpB
	var_44_bool = 0; // 0xa09 PushV
	func_2521(var_44_bool); // 0xa0a NEW_2
	if(var_44_bool == 0) goto Label_2574; // 0xa0c JumpB
	var_40_bool = 1; // 0xa0d MovB
	
Label_2574:
	if(var_40_bool == 0) goto Label_2587; // 0xa0e JumpB
	var_61_bool = 0; // 0xa0f PushV
	func_2501(var_61_bool); // 0xa10 NEW_2
	if(var_61_bool == 0) goto Label_2586; // 0xa12 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xa13 PushV
	var_82_object = Obj(); // 0xa14 PushV
	func_3083(var_82_object); // 0xa15 NEW_2
	var_81_object = var_82_object; // 0xa16 Mov
	func_2950(var_81_object); // 0xa18 NEW_2
	
Label_2586:
	goto Label_2593; // 0xa1a Jump
	
Label_2593:
	return 0; // 0xa21 Return
	
Label_2587:
	func_2516(var_36_int); // 0xa1c NEW_2
	func_2543(); // 0xa1f NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2734(); // 0xa23 NEW_2
	func_2552(); // 0xa26 NEW_2
	lshStopSpeech(); // 0xa28 Func
	lshStopAnimation(); // 0xa2a Func
	StopAsync(); // 0xa2c Func
	Hold(); // 0xa2e Func
	return 0; // 0xa30 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xa31 Func
	func_2552(); // 0xa34 NEW_2
	var_37_string = ""; // 0xa36 PushV
	var_37_string = "Neutral"; // 0xa37 MovS
	func_3030(var_37_string); // 0xa38 NEW_2
	func_2543(); // 0xa3b NEW_2
	return 0; // 0xa3d Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xa3f Push
	if(var_37_bool == 0) goto Label_2629; // 0xa40 JumpB
	func_2543(); // 0xa42 NEW_2
	goto Label_2633; // 0xa44 Jump
	
Label_2633:
	return 0; // 0xa49 Return
	
Label_2629:
	var_43_string = ""; // 0xa45 PushV
	var_43_string = "Neutral"; // 0xa46 MovS
	func_3030(var_43_string); // 0xa47 NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xa4a PushV
	IsOverrideActive(var_38_bool); // 0xa4b Func
	var_39_bool = var_38_bool == 0; // 0xa4d Not
	if(var_39_bool == 0) goto Label_2662; // 0xa4e JumpB
	EventDisable(0); // 0xa4f EventDisable
	func_2734(); // 0xa51 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xa53 PushV
	var_41_object = var_36_object; // 0xa54 Mov
	func_2791(var_41_object); // 0xa55 NEW_2
	EventEnable(0); // 0xa57 EventEnable
	var_54_object = Obj(); // 0xa58 PushV
	var_54_object = var_36_object; // 0xa59 Mov
	func_3617(var_54_object); // 0xa5a NEW_2
	var_692_string = ""; // 0xa5c PushV
	var_692_string = "Neutral"; // 0xa5d MovS
	func_3030(var_692_string); // 0xa5e NEW_2
	func_2552(); // 0xa61 NEW_2
	func_2543(); // 0xa64 NEW_2
	
Label_2662:
	return 2; // 0xa66 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2487(var_35_cvector); // 0x9b4 NEW_2
	return 0; // 0x9b6 Return
}


func_0(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x0 PushV
	var_0_object = var_60_object; // 0x1 TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x2 PushV
	var_71_object = var_60_object; // 0x3 Mov
	var_72_float = 70.0; // 0x4 MovF
	func_2805(var_71_object, var_72_float); // 0x5 NEW_2
	var_117_bool = var_70_bool == 0; // 0x7 Not
	if(var_117_bool == 0) goto Label_11; // 0x8 JumpB
	var_59_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_66_object); // 0xb Func
	var_118_int = 0; // 0xd PushV
	func_3262(var_118_int); // 0xe NEW_2
	SetNPCName(var_118_int); // 0x10 ObjFunc
	var_119_int = 0; // 0x12 PushV
	func_3260(var_119_int); // 0x13 NEW_2
	SetNPCDescription(var_119_int); // 0x15 ObjFunc
	var_120_string = ""; // 0x17 PushV
	func_3264(var_120_string); // 0x18 NEW_2
	SetPhoto(var_120_string); // 0x1a ObjFunc
	var_121_string = ""; // 0x1c PushV
	func_3266(var_121_string); // 0x1d NEW_2
	SetPhoto2(var_121_string); // 0x1f ObjFunc
	var_122_int = 0; // 0x21 PushV
	func_3600(var_122_int); // 0x22 NEW_2
	SetPlayerName(var_122_int); // 0x24 ObjFunc
	var_68_int = -1; // 0x26 MovI
	IsOverrideActive(var_67_bool); // 0x27 Func
	var_130_bool = var_67_bool; // 0x29 Push
	if(var_130_bool == 0) goto Label_45; // 0x2a JumpB
	var_59_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_66_object); // 0x2d Func
	var_131_bool = 0; var_132_object = Obj(); // 0x2f PushV
	var_133_object = Obj(); // 0x30 PushV
	func_3083(var_133_object); // 0x31 NEW_2
	var_132_object = var_133_object; // 0x32 Mov
	func_2892(var_131_bool, var_132_object); // 0x34 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x36 PushV
	var_226_object = var_60_object; // 0x37 Mov
	var_227_object = var_66_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_69_bool); // 0x3d ObjFunc
	
Label_63:
	var_279_bool = var_69_bool == 0; // 0x3f Not
	if(var_279_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_69_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_280_object = Obj(); // 0x46 PushV
	var_280_object = var_60_object; // 0x47 Mov
	func_2874(); // 0x48 NEW_2
	StopDialog(var_66_object); // 0x4a Func
	GetReturnValue(var_68_int); // 0x4c ObjFunc
	var_59_int = var_68_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3076()
{
	var_39_bool = 0; // 0xc04 PushV
	func_3268(var_39_bool); // 0xc05 NEW_2
	if(var_39_bool == 0) goto Label_3082; // 0xc07 JumpB
	lshStopSpeech(); // 0xc08 Func
	
Label_3082:
	return 0; // 0xc0a Return
}


func_1029(var_2_object, var_399_string)
{
	var_400_bool = 0; // 0x406 PushV
	func_3268(var_400_bool); // 0x407 NEW_2
	var_401_bool = var_400_bool == 0; // 0x409 Not
	if(var_401_bool == 0) goto Label_1036; // 0x40a JumpB
	return 0; // 0x40b Return
	
Label_1036:
	var_402_bool = var_399_string == var_2_object; // 0x40c Eq
	if(var_402_bool == 0) goto Label_1039; // 0x40d JumpB
	return 0; // 0x40e Return
	
Label_1039:
	var_403_string = ""; var_404_bool = 0; // 0x40f PushV
	var_403_string = var_399_string; // 0x410 Mov
	var_405_string = ""; // 0x411 PushS
	var_406_bool = var_399_string == var_405_string; // 0x412 Eq
	if(var_406_bool == 0) goto Label_1046; // 0x413 JumpB
	var_404_bool = 0; // 0x414 MovB
	goto Label_1047; // 0x415 Jump
	
Label_1047:
	func_3046(var_403_string, var_404_bool); // 0x417 NEW_2
	var_2_object = var_399_string; // 0x419 TMov
	return 0; // 0x41a Return
	
Label_1046:
	var_404_bool = 1; // 0x416 MovB
}


func_3337(var_48_object)
{
	var_50_string = "powder is given"; // 0xd0a PushS
	Trace(var_50_string); // 0xd0b Func
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0; // 0xd0d PushV
	var_51_object = var_48_object; // 0xd0e Mov
	var_52_string = "powder"; // 0xd0f MovS
	var_53_int = 1; // 0xd10 MovI
	func_3146(var_51_object, var_52_string, var_53_int); // 0xd11 NEW_2
	return 0; // 0xd13 Return
}


func_2058(var_2_object, var_534_string)
{
	var_535_bool = 0; // 0x80b PushV
	func_3268(var_535_bool); // 0x80c NEW_2
	var_536_bool = var_535_bool == 0; // 0x80e Not
	if(var_536_bool == 0) goto Label_2065; // 0x80f JumpB
	return 0; // 0x810 Return
	
Label_2065:
	var_537_bool = var_534_string == var_2_object; // 0x811 Eq
	if(var_537_bool == 0) goto Label_2068; // 0x812 JumpB
	return 0; // 0x813 Return
	
Label_2068:
	var_538_string = ""; var_539_bool = 0; // 0x814 PushV
	var_538_string = var_534_string; // 0x815 Mov
	var_540_string = ""; // 0x816 PushS
	var_541_bool = var_534_string == var_540_string; // 0x817 Eq
	if(var_541_bool == 0) goto Label_2075; // 0x818 JumpB
	var_539_bool = 0; // 0x819 MovB
	goto Label_2076; // 0x81a Jump
	
Label_2076:
	func_3046(var_538_string, var_539_bool); // 0x81c NEW_2
	var_2_object = var_534_string; // 0x81e TMov
	return 0; // 0x81f Return
	
Label_2075:
	var_539_bool = 1; // 0x81b MovB
}


func_3083(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0xc0b PushV
	self(var_135_object); // 0xc0c Func
	var_133_object = var_135_object; // 0xc0e Mov
	return 2; // 0xc0f Return
}


func_3600(var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0xe10 PushV
	var_125_string = "branch"; // 0xe11 PushS
	GetVariable(var_125_string, var_124_int); // 0xe12 Func
	var_126_int = 0; // 0xe14 PushI
	var_127_bool = var_124_int == var_126_int; // 0xe15 Eq
	if(var_127_bool == 0) goto Label_3610; // 0xe16 JumpB
	var_122_int = 1; // 0xe17 MovI
	return 2; // 0xe18 Return
	
Label_3610:
	var_128_int = 1; // 0xe1a PushI
	var_129_bool = var_124_int == var_128_int; // 0xe1b Eq
	if(var_129_bool == 0) goto Label_3615; // 0xe1c JumpB
	var_122_int = 2; // 0xe1d MovI
	return 2; // 0xe1e Return
	
Label_3615:
	var_122_int = 3; // 0xe1f MovI
	return 2; // 0xe20 Return
}


func_3089(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xc11 PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xc12 Or
	var_101_float = sqrt(var_102_int); // 0xc13 Sqrt2
	var_103_float = 0.0; // 0xc14 PushF
	var_104_bool = var_101_float < var_103_float; // 0xc15 LT
	if(var_104_bool == 0) goto Label_3097; // 0xc16 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xc17 MovV
	return 2; // 0xc18 Return
	
Label_3097:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xc19 Div2
	return 2; // 0xc1a Return
}


func_3348(var_78_object)
{
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0; // 0xd15 PushV
	var_81_object = var_78_object; // 0xd16 Mov
	var_82_float = 0.3; // 0xd17 MovF
	func_3159(var_80_bool, var_81_object, var_82_float); // 0xd18 NEW_2
	return 0; // 0xd1a Return
}


func_277(var_0_object, var_293_int, var_294_object)
{
	var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; var_300_object = Obj(); var_301_bool = 0; var_302_int = 0; var_303_bool = 0; // 0x115 PushV
	var_0_object = var_294_object; // 0x116 TMov
	var_304_bool = 0; var_305_object = Obj(); var_306_float = 0; // 0x117 PushV
	var_305_object = var_294_object; // 0x118 Mov
	var_306_float = 70.0; // 0x119 MovF
	func_2805(var_305_object, var_306_float); // 0x11a NEW_2
	var_307_bool = var_304_bool == 0; // 0x11c Not
	if(var_307_bool == 0) goto Label_288; // 0x11d JumpB
	var_293_int = -2; // 0x11e MovI
	return 8; // 0x11f Return
	
Label_288:
	CreateDialog(var_300_object); // 0x120 Func
	var_308_int = 0; // 0x122 PushV
	func_3262(var_308_int); // 0x123 NEW_2
	SetNPCName(var_308_int); // 0x125 ObjFunc
	var_309_int = 0; // 0x127 PushV
	func_3260(var_309_int); // 0x128 NEW_2
	SetNPCDescription(var_309_int); // 0x12a ObjFunc
	var_310_string = ""; // 0x12c PushV
	func_3264(var_310_string); // 0x12d NEW_2
	SetPhoto(var_310_string); // 0x12f ObjFunc
	var_311_string = ""; // 0x131 PushV
	func_3266(var_311_string); // 0x132 NEW_2
	SetPhoto2(var_311_string); // 0x134 ObjFunc
	var_312_int = 0; // 0x136 PushV
	func_3600(var_312_int); // 0x137 NEW_2
	SetPlayerName(var_312_int); // 0x139 ObjFunc
	var_302_int = -1; // 0x13b MovI
	IsOverrideActive(var_301_bool); // 0x13c Func
	var_313_bool = var_301_bool; // 0x13e Push
	if(var_313_bool == 0) goto Label_322; // 0x13f JumpB
	var_293_int = -2; // 0x140 MovI
	return 8; // 0x141 Return
	
Label_322:
	DoDialog(var_300_object); // 0x142 Func
	var_314_bool = 0; var_315_object = Obj(); // 0x144 PushV
	var_316_object = Obj(); // 0x145 PushV
	func_3083(var_316_object); // 0x146 NEW_2
	var_315_object = var_316_object; // 0x147 Mov
	func_2892(var_314_bool, var_315_object); // 0x149 NEW_2
	var_317_object = Obj(); var_318_object = Obj(); // 0x14b PushV
	var_317_object = var_294_object; // 0x14c Mov
	var_318_object = var_300_object; // 0x14d Mov
	TaskCall(3); // 0x14e TaskCall
	func_358(var_319_object, var_320_object, var_321_string, var_322_bool, var_317_object, var_318_object); // 0x14f NEW_2
	TaskReturn(); // 0x150 TaskReturn
	IsDialogEnd(var_303_bool); // 0x152 ObjFunc
	
Label_340:
	var_364_bool = var_303_bool == 0; // 0x154 Not
	if(var_364_bool == 0) goto Label_347; // 0x155 JumpB
	sync(); // 0x156 Func
	IsDialogEnd(var_303_bool); // 0x158 ObjFunc
	goto Label_340; // 0x15a Jump
	
Label_347:
	var_365_object = Obj(); // 0x15b PushV
	var_365_object = var_294_object; // 0x15c Mov
	func_2874(); // 0x15d NEW_2
	StopDialog(var_300_object); // 0x15f Func
	GetReturnValue(var_302_int); // 0x161 ObjFunc
	var_293_int = var_302_int; // 0x163 Mov
	return 8; // 0x164 Return
}


func_3099(var_109_float, var_110_float, var_111_float, var_112_float)
{
	var_113_bool = var_110_float < var_111_float; // 0xc1c LT
	if(var_113_bool == 0) goto Label_3104; // 0xc1d JumpB
	var_109_float = var_111_float; // 0xc1e Mov
	return 0; // 0xc1f Return
	
Label_3104:
	var_114_bool = var_110_float > var_112_float; // 0xc20 GT
	if(var_114_bool == 0) goto Label_3108; // 0xc21 JumpB
	var_109_float = var_112_float; // 0xc22 Mov
	return 0; // 0xc23 Return
	
Label_3108:
	var_109_float = var_110_float; // 0xc24 Mov
	return 0; // 0xc25 Return
}


func_3355()
{
	var_44_string = "ood6Laska1"; // 0xd1c PushS
	var_45_int = 1; // 0xd1d PushI
	SetVariable(var_44_string, var_45_int); // 0xd1e Func
	return 0; // 0xd20 Return
}


func_3617(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0xe21 PushV
	var_57_string = "mt_laska"; // 0xe22 PushS
	GetVariable(var_57_string, var_56_int); // 0xe23 Func
	var_58_bool = var_56_int == 0; // 0xe25 Not
	if(var_58_bool == 0) goto Label_3633; // 0xe26 JumpB
	var_59_int = 0; var_60_object = Obj(); // 0xe27 PushV
	var_60_object = var_54_object; // 0xe28 Mov
	TaskCall(0); // 0xe29 TaskCall
	func_0(var_61_object, var_59_int, var_60_object); // 0xe2a NEW_2
	TaskReturn(); // 0xe2b TaskReturn
	var_288_string = "mt_laska"; // 0xe2d PushS
	var_289_int = 1; // 0xe2e PushI
	SetVariable(var_288_string, var_289_int); // 0xe2f Func
	
Label_3633:
	var_290_bool = 0; var_291_int = 0; // 0xe31 PushV
	var_291_int = 2; // 0xe32 MovI
	func_3230(var_290_bool, var_291_int); // 0xe33 NEW_2
	if(var_290_bool == 0) goto Label_3645; // 0xe35 JumpB
	var_293_int = 0; var_294_object = Obj(); // 0xe36 PushV
	var_294_object = var_54_object; // 0xe37 Mov
	TaskCall(2); // 0xe38 TaskCall
	func_277(var_295_object, var_293_int, var_294_object); // 0xe39 NEW_2
	TaskReturn(); // 0xe3a TaskReturn
	return 2; // 0xe3c Return
	
Label_3645:
	var_366_bool = 0; var_367_int = 0; // 0xe3d PushV
	var_367_int = 3; // 0xe3e MovI
	func_3230(var_366_bool, var_367_int); // 0xe3f NEW_2
	if(var_366_bool == 0) goto Label_3657; // 0xe41 JumpB
	var_368_int = 0; var_369_object = Obj(); // 0xe42 PushV
	var_369_object = var_54_object; // 0xe43 Mov
	TaskCall(4); // 0xe44 TaskCall
	func_885(var_370_object, var_368_int, var_369_object); // 0xe45 NEW_2
	TaskReturn(); // 0xe46 TaskReturn
	return 2; // 0xe48 Return
	
Label_3657:
	var_430_bool = 0; var_431_int = 0; // 0xe49 PushV
	var_431_int = 6; // 0xe4a MovI
	func_3230(var_430_bool, var_431_int); // 0xe4b NEW_2
	if(var_430_bool == 0) goto Label_3669; // 0xe4d JumpB
	var_432_int = 0; var_433_object = Obj(); // 0xe4e PushV
	var_433_object = var_54_object; // 0xe4f Mov
	TaskCall(6); // 0xe50 TaskCall
	func_1196(var_434_object, var_432_int, var_433_object); // 0xe51 NEW_2
	TaskReturn(); // 0xe52 TaskReturn
	return 2; // 0xe54 Return
	
Label_3669:
	var_501_bool = 0; var_502_int = 0; // 0xe55 PushV
	var_502_int = 11; // 0xe56 MovI
	func_3230(var_501_bool, var_502_int); // 0xe57 NEW_2
	if(var_501_bool == 0) goto Label_3681; // 0xe59 JumpB
	var_503_int = 0; var_504_object = Obj(); // 0xe5a PushV
	var_504_object = var_54_object; // 0xe5b Mov
	TaskCall(10); // 0xe5c TaskCall
	func_1900(var_505_object, var_503_int, var_504_object); // 0xe5d NEW_2
	TaskReturn(); // 0xe5e TaskReturn
	return 2; // 0xe60 Return
	
Label_3681:
	var_575_bool = 0; var_576_int = 0; // 0xe61 PushV
	var_576_int = 12; // 0xe62 MovI
	func_3230(var_575_bool, var_576_int); // 0xe63 NEW_2
	if(var_575_bool == 0) goto Label_3693; // 0xe65 JumpB
	var_577_int = 0; var_578_object = Obj(); // 0xe66 PushV
	var_578_object = var_54_object; // 0xe67 Mov
	TaskCall(8); // 0xe68 TaskCall
	func_1641(var_579_object, var_577_int, var_578_object); // 0xe69 NEW_2
	TaskReturn(); // 0xe6a TaskReturn
	return 2; // 0xe6c Return
	
Label_3693:
	var_636_int = 0; var_637_object = Obj(); // 0xe6d PushV
	var_637_object = var_54_object; // 0xe6e Mov
	TaskCall(12); // 0xe6f TaskCall
	func_2280(var_638_object, var_636_int, var_637_object); // 0xe70 NEW_2
	TaskReturn(); // 0xe71 TaskReturn
	return 2; // 0xe73 Return
}


func_3361()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xd21 PushV
	var_70_string = "d6q01"; // 0xd22 PushS
	var_71_int = 3; // 0xd23 PushI
	SetVariable(var_70_string, var_71_int); // 0xd24 Func
	var_72_object = Obj(); // 0xd26 PushV
	func_3583(var_72_object); // 0xd27 NEW_2
	var_69_object = var_72_object; // 0xd28 Mov
	var_79_string = "d6q01LaskaGotoAlbinos"; // 0xd2a PushS
	var_80_string = "pt_d6q03_albinos"; // 0xd2b PushS
	var_81_int = 1; // 0xd2c PushI
	var_82_int = 515400; // 0xd2d PushI
	var_83_float = 0; // 0xd2e PushV
	func_3216(var_83_float); // 0xd2f NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0xd31 ObjFunc
	func_3529(); // 0xd34 NEW_2
	var_109_bool = 0; var_110_string = ""; var_111_string = ""; // 0xd36 PushV
	var_110_string = "quest_d6_01"; // 0xd37 MovS
	var_111_string = "albinos_klara"; // 0xd38 MovS
	func_3204(var_109_bool, var_110_string, var_111_string); // 0xd39 NEW_2
	return 2; // 0xd3b Return
}


func_3110(var_335_int, var_336_string)
{
	var_337_int = 0; var_338_int = 0; // 0xc26 PushV
	GetVariable(var_336_string, var_338_int); // 0xc27 Func
	var_335_int = var_338_int; // 0xc29 Mov
	return 2; // 0xc2a Return
}


func_3115(var_67_int, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0xc2b PushV
	CreateIntVector(var_70_object); // 0xc2c Func
	add(var_67_int); // 0xc2e ObjFunc
	add(var_68_int); // 0xc30 ObjFunc
	var_71_int = 3; // 0xc32 PushI
	SendWorldWndMessage(var_71_int, var_70_object); // 0xc33 Func
	return 2; // 0xc35 Return
}


func_3127(var_57_object, var_58_int)
{
	var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; // 0xc37 PushV
	GetItemID(var_62_int); // 0xc38 ObjFunc
	var_65_string = "Category"; // 0xc3a PushS
	GetInvItemProperty(var_63_int, var_62_int, var_65_string); // 0xc3b Func
	AddItem(var_64_bool, var_57_object, var_63_int, var_58_int); // 0xc3d ObjFunc
	var_66_bool = var_64_bool == 0; // 0xc3f Not
	if(var_66_bool == 0) goto Label_3140; // 0xc40 JumpB
	DropItems(var_57_object, var_58_int); // 0xc41 ObjFunc
	goto Label_3145; // 0xc43 Jump
	
Label_3145:
	return 6; // 0xc49 Return
	
Label_3140:
	var_67_int = 0; var_68_int = 0; // 0xc44 PushV
	var_67_int = var_62_int; // 0xc45 Mov
	var_68_int = var_58_int; // 0xc46 Mov
	func_3115(var_67_int, var_68_int); // 0xc47 NEW_2
}


func_2361(var_0_object, var_1_object, var_2_object, var_3_string, var_660_object, var_661_object)
{
	var_0_object = var_661_object; // 0x93a TMov
	var_1_object = var_660_object; // 0x93b TMov
	var_3_string = 0; // 0x93c TMovB
	var_666_int = 1; // 0x93d PushI
	if(var_666_int == 0) goto Label_2389; // 0x93e JumpB
	var_667_string = ""; // 0x93f PushV
	var_667_string = "Neutral"; // 0x940 MovS
	func_2419(var_661_object, var_667_string); // 0x941 NEW_2
	var_675_int = 540548; // 0x943 PushI
	SetMessage(var_675_int); // 0x944 TObjFunc
	ClearReplies(); // 0x946 TObjFunc
	var_676_int = 540549; // 0x948 PushI
	var_677_int = -1; // 0x949 PushI
	var_678_int = 42558; // 0x94a PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x94b TObjFunc
	var_679_int = 540797; // 0x94d PushI
	var_680_int = -1; // 0x94e PushI
	var_681_int = 42846; // 0x94f PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x950 TObjFunc
	goto Label_2389; // 0x952 Jump
	
Label_2389:
	var_682_bool = 0; // 0x955 PushV
	func_3268(var_682_bool); // 0x956 NEW_2
	if(var_682_bool == 0) goto Label_2404; // 0x958 JumpB
	
Label_2393:
	lshWaitForAnimEnd(); // 0x959 Func
	var_683_string = var_3_string; // 0x95b PushT
	if(var_683_string == 0) goto Label_2398; // 0x95c JumpB
	goto Label_2403; // 0x95d Jump
	
Label_2403:
	goto Label_2418; // 0x963 Jump
	
Label_2418:
	return 0; // 0x972 Return
	
Label_2398:
	var_684_string = ""; // 0x95e PushV
	var_684_string = var_2_object; // 0x95f MovT
	func_3030(var_684_string); // 0x960 NEW_2
	goto Label_2393; // 0x962 Jump
	
Label_2404:
	var_685_string = "all"; // 0x964 PushS
	var_686_string = "idle"; // 0x965 PushS
	PlayAnimation(var_685_string, var_686_string); // 0x966 Func
	
Label_2408:
	WaitForAnimEnd(); // 0x968 Func
	var_687_string = var_3_string; // 0x96a PushT
	if(var_687_string == 0) goto Label_2413; // 0x96b JumpB
	goto Label_2418; // 0x96c Jump
	
Label_2413:
	var_688_string = "all"; // 0x96d PushS
	var_689_string = "idle"; // 0x96e PushS
	PlayAnimation(var_688_string, var_689_string); // 0x96f Func
	goto Label_2408; // 0x971 Jump
}


func_2874()
{
	var_281_bool = 0; var_282_bool = 0; // 0xb3a PushV
	var_283_bool = 1; // 0xb3b PushB
	CameraSwitchToNormal(var_283_bool); // 0xb3c Func
	var_284_bool = 0; // 0xb3e PushV
	func_3268(var_284_bool); // 0xb3f NEW_2
	if(var_284_bool == 0) goto Label_2883; // 0xb41 JumpB
	goto Label_2891; // 0xb42 Jump
	
Label_2891:
	return 2; // 0xb4b Return
	
Label_2883:
	var_285_string = "head"; // 0xb43 PushS
	HasAnimationTrack(var_282_bool, var_285_string); // 0xb44 Func
	var_286_bool = var_282_bool; // 0xb46 Push
	if(var_286_bool == 0) goto Label_2891; // 0xb47 JumpB
	var_287_string = "head"; // 0xb48 PushS
	UnlookAsync(var_287_string); // 0xb49 Func
}


func_3389()
{
	var_48_string = "d6q01"; // 0xd3e PushS
	var_49_int = 4; // 0xd3f PushI
	SetVariable(var_48_string, var_49_int); // 0xd40 Func
	var_50_bool = 0; var_51_string = ""; var_52_string = ""; // 0xd42 PushV
	var_51_string = "quest_d6_01"; // 0xd43 MovS
	var_52_string = "eva_klara"; // 0xd44 MovS
	func_3204(var_50_bool, var_51_string, var_52_string); // 0xd45 NEW_2
	return 0; // 0xd47 Return
}


func_1349(var_2_object, var_463_string)
{
	var_464_bool = 0; // 0x546 PushV
	func_3268(var_464_bool); // 0x547 NEW_2
	var_465_bool = var_464_bool == 0; // 0x549 Not
	if(var_465_bool == 0) goto Label_1356; // 0x54a JumpB
	return 0; // 0x54b Return
	
Label_1356:
	var_466_bool = var_463_string == var_2_object; // 0x54c Eq
	if(var_466_bool == 0) goto Label_1359; // 0x54d JumpB
	return 0; // 0x54e Return
	
Label_1359:
	var_467_string = ""; var_468_bool = 0; // 0x54f PushV
	var_467_string = var_463_string; // 0x550 Mov
	var_469_string = ""; // 0x551 PushS
	var_470_bool = var_463_string == var_469_string; // 0x552 Eq
	if(var_470_bool == 0) goto Label_1366; // 0x553 JumpB
	var_468_bool = 0; // 0x554 MovB
	goto Label_1367; // 0x555 Jump
	
Label_1367:
	func_3046(var_467_string, var_468_bool); // 0x557 NEW_2
	var_2_object = var_463_string; // 0x559 TMov
	return 0; // 0x55a Return
	
Label_1366:
	var_468_bool = 1; // 0x556 MovB
}


func_3400()
{
	var_235_string = "KnowLaska"; // 0xd49 PushS
	var_236_int = 1; // 0xd4a PushI
	SetVariable(var_235_string, var_236_int); // 0xd4b Func
	return 0; // 0xd4d Return
}


func_3146(var_79_object, var_80_string, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xc4a PushV
	CreateInvItem(var_83_object); // 0xc4b Func
	SetItemName(var_80_string); // 0xc4d ObjFunc
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; // 0xc4f PushV
	var_84_object = var_79_object; // 0xc50 Mov
	var_85_object = var_83_object; // 0xc51 Mov
	var_86_int = var_81_int; // 0xc52 Mov
	func_3127(var_85_object, var_86_int); // 0xc53 NEW_2
	return 2; // 0xc55 Return
}


func_2892(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; // 0xb4c PushV
	var_140_string = "voice_common"; // 0xb4d PushS
	GetVariable(var_140_string, var_138_int); // 0xb4e Func
	var_141_int = var_138_int; // 0xb50 Push
	if(var_141_int == 0) goto Label_2930; // 0xb51 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0xb52 PushV
	var_143_object = var_132_object; // 0xb53 Mov
	func_2950(var_143_object); // 0xb54 NEW_2
	var_172_bool = var_142_bool == 0; // 0xb56 Not
	if(var_172_bool == 0) goto Label_2912; // 0xb57 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xb58 PushV
	var_174_object = var_132_object; // 0xb59 Mov
	func_2987(var_174_object); // 0xb5a NEW_2
	var_208_bool = var_173_bool == 0; // 0xb5c Not
	if(var_208_bool == 0) goto Label_2912; // 0xb5d JumpB
	var_131_bool = 0; // 0xb5e MovB
	return 4; // 0xb5f Return
	
Label_2912:
	var_209_int = 2; // 0xb60 PushI
	irand(var_139_int, var_209_int); // 0xb61 Func
	var_210_int = var_139_int; // 0xb63 Push
	if(var_210_int == 0) goto Label_2925; // 0xb64 JumpB
	var_211_string = "voice_common"; // 0xb65 PushS
	var_212_int = 1; // 0xb66 PushI
	var_213_int = var_138_int + var_212_int; // 0xb67 Add
	var_214_int = 3; // 0xb68 PushI
	var_215_int = var_213_int / var_214_int; // 0xb69 Mod
	SetVariable(var_211_string, var_215_int); // 0xb6a Func
	goto Label_2929; // 0xb6c Jump
	
Label_2929:
	goto Label_2948; // 0xb71 Jump
	
Label_2948:
	var_131_bool = 1; // 0xb84 MovB
	return 4; // 0xb85 Return
	
Label_2925:
	var_216_string = "voice_common"; // 0xb6d PushS
	var_217_int = 0; // 0xb6e PushI
	SetVariable(var_216_string, var_217_int); // 0xb6f Func
	
Label_2930:
	var_218_bool = 0; var_219_object = Obj(); // 0xb72 PushV
	var_219_object = var_132_object; // 0xb73 Mov
	func_2987(var_219_object); // 0xb74 NEW_2
	var_220_bool = var_218_bool == 0; // 0xb76 Not
	if(var_220_bool == 0) goto Label_2944; // 0xb77 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xb78 PushV
	var_222_object = var_132_object; // 0xb79 Mov
	func_2950(var_222_object); // 0xb7a NEW_2
	var_223_bool = var_221_bool == 0; // 0xb7c Not
	if(var_223_bool == 0) goto Label_2944; // 0xb7d JumpB
	var_131_bool = 0; // 0xb7e MovB
	return 4; // 0xb7f Return
	
Label_2944:
	var_224_string = "voice_common"; // 0xb80 PushS
	var_225_int = 1; // 0xb81 PushI
	SetVariable(var_224_string, var_225_int); // 0xb82 Func
}


func_3406()
{
	var_44_string = "ood3Laska1"; // 0xd4f PushS
	var_45_int = 1; // 0xd50 PushI
	SetVariable(var_44_string, var_45_int); // 0xd51 Func
	return 0; // 0xd53 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object; // 0x52 TMov
	var_1_object = var_226_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_232_int = 1; // 0x55 PushI
	if(var_232_int == 0) goto Label_114; // 0x56 JumpB
	var_233_object = Obj(); var_234_object = Obj(); // 0x57 PushV
	var_233_object = var_1_object; // 0x58 MovT
	var_234_object = var_0_object; // 0x59 MovT
	func_3400(); // 0x5a NEW_2
	var_237_string = ""; // 0x5c PushV
	var_237_string = "Neutral"; // 0x5d MovS
	func_144(var_227_object, var_237_string); // 0x5e NEW_2
	var_254_int = 500370; // 0x60 PushI
	SetMessage(var_254_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_255_int = 500371; // 0x65 PushI
	var_256_int = 432; // 0x66 PushI
	var_257_int = 430; // 0x67 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x68 TObjFunc
	var_258_int = 500372; // 0x6a PushI
	var_259_int = 437; // 0x6b PushI
	var_260_int = 431; // 0x6c PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_261_bool = 0; // 0x72 PushV
	func_3268(var_261_bool); // 0x73 NEW_2
	if(var_261_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_262_string = var_3_string; // 0x78 PushT
	if(var_262_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_263_string = ""; // 0x7b PushV
	var_263_string = var_2_object; // 0x7c MovT
	func_3030(var_263_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_274_string = "all"; // 0x81 PushS
	var_275_string = "idle"; // 0x82 PushS
	PlayAnimation(var_274_string, var_275_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_276_string = var_3_string; // 0x87 PushT
	if(var_276_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_277_string = "all"; // 0x8a PushS
	var_278_string = "idle"; // 0x8b PushS
	PlayAnimation(var_277_string, var_278_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_3412(var_48_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xd54 PushV
	var_52_string = "Knife is given"; // 0xd55 PushS
	Trace(var_52_string); // 0xd56 Func
	CreateInvItem(var_51_object); // 0xd58 Func
	var_53_string = "Knife"; // 0xd5a PushS
	SetItemName(var_53_string); // 0xd5b ObjFunc
	var_54_string = "durability"; // 0xd5d PushS
	var_55_int = 100; // 0xd5e PushI
	SetProperty(var_54_string, var_55_int); // 0xd5f ObjFunc
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xd61 PushV
	var_56_object = var_48_object; // 0xd62 Mov
	var_57_object = var_51_object; // 0xd63 Mov
	var_58_int = 1; // 0xd64 MovI
	func_3127(var_57_object, var_58_int); // 0xd65 NEW_2
	return 2; // 0xd67 Return
}


func_3159(var_80_bool, var_81_object, var_82_float)
{
	var_83_bool = var_81_object == 0; // 0xc58 Not
	if(var_83_bool == 0) goto Label_3164; // 0xc59 JumpB
	var_80_bool = 0; // 0xc5a MovB
	return 0; // 0xc5b Return
	
Label_3164:
	var_84_int = 0; // 0xc5c PushI
	var_85_bool = var_82_float > var_84_int; // 0xc5d GT
	if(var_85_bool == 0) goto Label_3171; // 0xc5e JumpB
	var_86_int = 8; // 0xc5f PushI
	SendWorldWndMessage(var_86_int); // 0xc60 Func
	goto Label_3180; // 0xc62 Jump
	
Label_3180:
	var_87_float = 0; // 0xc6c PushV
	var_87_float = var_82_float; // 0xc6d Mov
	func_3194(var_87_float); // 0xc6e NEW_2
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; var_94_float = 0; var_95_float = 0; var_96_float = 0; // 0xc70 PushV
	var_92_object = var_81_object; // 0xc71 Mov
	var_93_string = "reputation"; // 0xc72 MovS
	var_94_float = var_82_float; // 0xc73 Mov
	var_95_float = 0; // 0xc74 MovI
	var_96_float = 1; // 0xc75 MovI
	func_2759(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float); // 0xc76 NEW_2
	var_80_bool = 1; // 0xc78 MovB
	return 0; // 0xc79 Return
	
Label_3171:
	var_115_int = 0; // 0xc63 PushI
	var_116_bool = var_82_float < var_115_int; // 0xc64 LT
	if(var_116_bool == 0) goto Label_3178; // 0xc65 JumpB
	var_117_int = 9; // 0xc66 PushI
	SendWorldWndMessage(var_117_int); // 0xc67 Func
	goto Label_3180; // 0xc69 Jump
	
Label_3178:
	var_80_bool = 0; // 0xc6a MovB
	return 0; // 0xc6b Return
}


func_358(var_0_object, var_1_object, var_2_object, var_3_string, var_317_object, var_318_object)
{
	var_0_object = var_318_object; // 0x167 TMov
	var_1_object = var_317_object; // 0x168 TMov
	var_3_string = 0; // 0x169 TMovB
	var_323_int = 1; // 0x16a PushI
	if(var_323_int == 0) goto Label_401; // 0x16b JumpB
	var_324_string = ""; // 0x16c PushV
	var_324_string = "Neutral"; // 0x16d MovS
	func_431(var_318_object, var_324_string); // 0x16e NEW_2
	var_332_int = 509473; // 0x170 PushI
	SetMessage(var_332_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_333_bool = 0; var_334_object = Obj(); // 0x175 PushV
	var_334_object = var_1_object; // 0x176 MovT
	func_3433(var_334_object); // 0x177 NEW_2
	if(var_333_bool == 0) goto Label_383; // 0x179 JumpB
	var_341_int = 533914; // 0x17a PushI
	var_342_int = 35474; // 0x17b PushI
	var_343_int = 35473; // 0x17c PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x17d TObjFunc
	
Label_383:
	var_344_bool = 0; var_345_object = Obj(); // 0x17f PushV
	var_345_object = var_1_object; // 0x180 MovT
	func_3445(var_345_object); // 0x181 NEW_2
	if(var_344_bool == 0) goto Label_393; // 0x183 JumpB
	var_350_int = 509474; // 0x184 PushI
	var_351_int = 10417; // 0x185 PushI
	var_352_int = 10416; // 0x186 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x187 TObjFunc
	
Label_393:
	var_353_int = 509487; // 0x189 PushI
	var_354_int = -1; // 0x18a PushI
	var_355_int = 10429; // 0x18b PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x18c TObjFunc
	goto Label_401; // 0x18e Jump
	
Label_401:
	var_356_bool = 0; // 0x191 PushV
	func_3268(var_356_bool); // 0x192 NEW_2
	if(var_356_bool == 0) goto Label_416; // 0x194 JumpB
	
Label_405:
	lshWaitForAnimEnd(); // 0x195 Func
	var_357_string = var_3_string; // 0x197 PushT
	if(var_357_string == 0) goto Label_410; // 0x198 JumpB
	goto Label_415; // 0x199 Jump
	
Label_415:
	goto Label_430; // 0x19f Jump
	
Label_430:
	return 0; // 0x1ae Return
	
Label_410:
	var_358_string = ""; // 0x19a PushV
	var_358_string = var_2_object; // 0x19b MovT
	func_3030(var_358_string); // 0x19c NEW_2
	goto Label_405; // 0x19e Jump
	
Label_416:
	var_359_string = "all"; // 0x1a0 PushS
	var_360_string = "idle"; // 0x1a1 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x1a2 Func
	
Label_420:
	WaitForAnimEnd(); // 0x1a4 Func
	var_361_string = var_3_string; // 0x1a6 PushT
	if(var_361_string == 0) goto Label_425; // 0x1a7 JumpB
	goto Label_430; // 0x1a8 Jump
	
Label_425:
	var_362_string = "all"; // 0x1a9 PushS
	var_363_string = "idle"; // 0x1aa PushS
	PlayAnimation(var_362_string, var_363_string); // 0x1ab Func
	goto Label_420; // 0x1ad Jump
}


func_2663()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xa67 PushV
	WaitForAnimEnd(); // 0xa68 Func
	var_52_bool = 0; // 0xa6a PushV
	func_2800(var_52_bool); // 0xa6b NEW_2
	var_53_bool = var_52_bool == 0; // 0xa6d Not
	if(var_53_bool == 0) goto Label_2672; // 0xa6e JumpB
	return 12; // 0xa6f Return
	
Label_2672:
	var_54_int = 0; // 0xa70 PushV
	func_3243(var_54_int); // 0xa71 NEW_2
	var_46_int = var_54_int; // 0xa72 Mov
	var_47_int = 0; // 0xa74 MovI
	
Label_2677:
	var_67_bool = 0; // 0xa75 PushV
	var_67_bool = 0; // 0xa76 MovB
	var_68_int = 5; // 0xa77 PushI
	var_69_bool = var_47_int < var_68_int; // 0xa78 LT
	if(var_69_bool == 0) goto Label_2687; // 0xa79 JumpB
	var_70_bool = 0; // 0xa7a PushV
	func_2800(var_70_bool); // 0xa7b NEW_2
	if(var_70_bool == 0) goto Label_2687; // 0xa7d JumpB
	var_67_bool = 1; // 0xa7e MovB
	
Label_2687:
	if(var_67_bool == 0) goto Label_2729; // 0xa7f JumpB
	var_71_bool = var_46_int == 0; // 0xa80 Not
	if(var_71_bool == 0) goto Label_2697; // 0xa81 JumpB
	var_72_int = 3; // 0xa82 PushI
	Sleep(var_72_int, var_48_bool); // 0xa83 Func
	var_73_bool = var_48_bool == 0; // 0xa85 Not
	if(var_73_bool == 0) goto Label_2696; // 0xa86 JumpB
	goto Label_2729; // 0xa87 Jump
	
Label_2729:
	ResetAAS(); // 0xaa9 Func
	return 12; // 0xaab Return
	
Label_2696:
	goto Label_2718; // 0xa88 Jump
	
Label_2718:
	var_74_bool = 0; // 0xa9e PushV
	func_2732(var_74_bool); // 0xa9f NEW_2
	var_75_bool = var_74_bool == 0; // 0xaa1 Not
	if(var_75_bool == 0) goto Label_2724; // 0xaa2 JumpB
	goto Label_2729; // 0xaa3 Jump
	
Label_2724:
	ResetAAS(); // 0xaa4 Func
	var_76_int = 1; // 0xaa6 PushI
	var_47_int = var_47_int + var_76_int; // 0xaa7 Add2
	goto Label_2677; // 0xaa8 Jump
	
Label_2697:
	irand(var_49_int, var_46_int); // 0xa89 Func
	var_77_int = 5; // 0xa8b PushI
	irand(var_50_int, var_77_int); // 0xa8c Func
	var_78_int = 0; // 0xa8e PushI
	var_79_bool = var_50_int != var_78_int; // 0xa8f Neq
	if(var_79_bool == 0) goto Label_2706; // 0xa90 JumpB
	var_49_int = 0; // 0xa91 MovI
	
Label_2706:
	var_80_string = "all"; // 0xa92 PushS
	var_81_string = ""; var_82_int = 0; // 0xa93 PushV
	var_82_int = var_49_int; // 0xa94 Mov
	func_3236(var_81_string, var_82_int); // 0xa95 NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xa97 Func
	WaitForAnimEnd(var_51_bool); // 0xa99 Func
	var_83_bool = var_51_bool == 0; // 0xa9b Not
	if(var_83_bool == 0) goto Label_2718; // 0xa9c JumpB
	goto Label_2729; // 0xa9d Jump
}


func_1641(var_0_object, var_577_int, var_578_object)
{
	var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0; var_584_object = Obj(); var_585_bool = 0; var_586_int = 0; var_587_bool = 0; // 0x669 PushV
	var_0_object = var_578_object; // 0x66a TMov
	var_588_bool = 0; var_589_object = Obj(); var_590_float = 0; // 0x66b PushV
	var_589_object = var_578_object; // 0x66c Mov
	var_590_float = 70.0; // 0x66d MovF
	func_2805(var_589_object, var_590_float); // 0x66e NEW_2
	var_591_bool = var_588_bool == 0; // 0x670 Not
	if(var_591_bool == 0) goto Label_1652; // 0x671 JumpB
	var_577_int = -2; // 0x672 MovI
	return 8; // 0x673 Return
	
Label_1652:
	CreateDialog(var_584_object); // 0x674 Func
	var_592_int = 0; // 0x676 PushV
	func_3262(var_592_int); // 0x677 NEW_2
	SetNPCName(var_592_int); // 0x679 ObjFunc
	var_593_int = 0; // 0x67b PushV
	func_3260(var_593_int); // 0x67c NEW_2
	SetNPCDescription(var_593_int); // 0x67e ObjFunc
	var_594_string = ""; // 0x680 PushV
	func_3264(var_594_string); // 0x681 NEW_2
	SetPhoto(var_594_string); // 0x683 ObjFunc
	var_595_string = ""; // 0x685 PushV
	func_3266(var_595_string); // 0x686 NEW_2
	SetPhoto2(var_595_string); // 0x688 ObjFunc
	var_596_int = 0; // 0x68a PushV
	func_3600(var_596_int); // 0x68b NEW_2
	SetPlayerName(var_596_int); // 0x68d ObjFunc
	var_586_int = -1; // 0x68f MovI
	IsOverrideActive(var_585_bool); // 0x690 Func
	var_597_bool = var_585_bool; // 0x692 Push
	if(var_597_bool == 0) goto Label_1686; // 0x693 JumpB
	var_577_int = -2; // 0x694 MovI
	return 8; // 0x695 Return
	
Label_1686:
	DoDialog(var_584_object); // 0x696 Func
	var_598_bool = 0; var_599_object = Obj(); // 0x698 PushV
	var_600_object = Obj(); // 0x699 PushV
	func_3083(var_600_object); // 0x69a NEW_2
	var_599_object = var_600_object; // 0x69b Mov
	func_2892(var_598_bool, var_599_object); // 0x69d NEW_2
	var_601_object = Obj(); var_602_object = Obj(); // 0x69f PushV
	var_601_object = var_578_object; // 0x6a0 Mov
	var_602_object = var_584_object; // 0x6a1 Mov
	TaskCall(9); // 0x6a2 TaskCall
	func_1722(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object); // 0x6a3 NEW_2
	TaskReturn(); // 0x6a4 TaskReturn
	IsDialogEnd(var_587_bool); // 0x6a6 ObjFunc
	
Label_1704:
	var_634_bool = var_587_bool == 0; // 0x6a8 Not
	if(var_634_bool == 0) goto Label_1711; // 0x6a9 JumpB
	sync(); // 0x6aa Func
	IsDialogEnd(var_587_bool); // 0x6ac ObjFunc
	goto Label_1704; // 0x6ae Jump
	
Label_1711:
	var_635_object = Obj(); // 0x6af PushV
	var_635_object = var_578_object; // 0x6b0 Mov
	func_2874(); // 0x6b1 NEW_2
	StopDialog(var_584_object); // 0x6b3 Func
	GetReturnValue(var_586_int); // 0x6b5 ObjFunc
	var_577_int = var_586_int; // 0x6b7 Mov
	return 8; // 0x6b8 Return
}


func_3433(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0xd6a PushV
	var_336_string = "ood2Laska1"; // 0xd6b MovS
	func_3110(var_335_int, var_336_string); // 0xd6c NEW_2
	var_339_int = 0; // 0xd6e PushI
	var_340_bool = var_335_int == var_339_int; // 0xd6f Eq
	if(var_340_bool == 0) goto Label_3443; // 0xd70 JumpB
	var_333_bool = 1; // 0xd71 MovB
	return 0; // 0xd72 Return
	
Label_3443:
	var_333_bool = 0; // 0xd73 MovB
	return 0; // 0xd74 Return
}


func_1900(var_0_object, var_503_int, var_504_object)
{
	var_506_object = Obj(); var_507_bool = 0; var_508_int = 0; var_509_bool = 0; var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0; // 0x76c PushV
	var_0_object = var_504_object; // 0x76d TMov
	var_514_bool = 0; var_515_object = Obj(); var_516_float = 0; // 0x76e PushV
	var_515_object = var_504_object; // 0x76f Mov
	var_516_float = 70.0; // 0x770 MovF
	func_2805(var_515_object, var_516_float); // 0x771 NEW_2
	var_517_bool = var_514_bool == 0; // 0x773 Not
	if(var_517_bool == 0) goto Label_1911; // 0x774 JumpB
	var_503_int = -2; // 0x775 MovI
	return 8; // 0x776 Return
	
Label_1911:
	CreateDialog(var_510_object); // 0x777 Func
	var_518_int = 0; // 0x779 PushV
	func_3262(var_518_int); // 0x77a NEW_2
	SetNPCName(var_518_int); // 0x77c ObjFunc
	var_519_int = 0; // 0x77e PushV
	func_3260(var_519_int); // 0x77f NEW_2
	SetNPCDescription(var_519_int); // 0x781 ObjFunc
	var_520_string = ""; // 0x783 PushV
	func_3264(var_520_string); // 0x784 NEW_2
	SetPhoto(var_520_string); // 0x786 ObjFunc
	var_521_string = ""; // 0x788 PushV
	func_3266(var_521_string); // 0x789 NEW_2
	SetPhoto2(var_521_string); // 0x78b ObjFunc
	var_522_int = 0; // 0x78d PushV
	func_3600(var_522_int); // 0x78e NEW_2
	SetPlayerName(var_522_int); // 0x790 ObjFunc
	var_512_int = -1; // 0x792 MovI
	IsOverrideActive(var_511_bool); // 0x793 Func
	var_523_bool = var_511_bool; // 0x795 Push
	if(var_523_bool == 0) goto Label_1945; // 0x796 JumpB
	var_503_int = -2; // 0x797 MovI
	return 8; // 0x798 Return
	
Label_1945:
	DoDialog(var_510_object); // 0x799 Func
	var_524_bool = 0; var_525_object = Obj(); // 0x79b PushV
	var_526_object = Obj(); // 0x79c PushV
	func_3083(var_526_object); // 0x79d NEW_2
	var_525_object = var_526_object; // 0x79e Mov
	func_2892(var_524_bool, var_525_object); // 0x7a0 NEW_2
	var_527_object = Obj(); var_528_object = Obj(); // 0x7a2 PushV
	var_527_object = var_504_object; // 0x7a3 Mov
	var_528_object = var_510_object; // 0x7a4 Mov
	TaskCall(11); // 0x7a5 TaskCall
	func_1981(var_529_object, var_530_object, var_531_string, var_532_bool, var_527_object, var_528_object); // 0x7a6 NEW_2
	TaskReturn(); // 0x7a7 TaskReturn
	IsDialogEnd(var_513_bool); // 0x7a9 ObjFunc
	
Label_1963:
	var_573_bool = var_513_bool == 0; // 0x7ab Not
	if(var_573_bool == 0) goto Label_1970; // 0x7ac JumpB
	sync(); // 0x7ad Func
	IsDialogEnd(var_513_bool); // 0x7af ObjFunc
	goto Label_1963; // 0x7b1 Jump
	
Label_1970:
	var_574_object = Obj(); // 0x7b2 PushV
	var_574_object = var_504_object; // 0x7b3 Mov
	func_2874(); // 0x7b4 NEW_2
	StopDialog(var_510_object); // 0x7b6 Func
	GetReturnValue(var_512_int); // 0x7b8 ObjFunc
	var_503_int = var_512_int; // 0x7ba Mov
	return 8; // 0x7bb Return
}


func_2419(var_2_object, var_667_string)
{
	var_668_bool = 0; // 0x974 PushV
	func_3268(var_668_bool); // 0x975 NEW_2
	var_669_bool = var_668_bool == 0; // 0x977 Not
	if(var_669_bool == 0) goto Label_2426; // 0x978 JumpB
	return 0; // 0x979 Return
	
Label_2426:
	var_670_bool = var_667_string == var_2_object; // 0x97a Eq
	if(var_670_bool == 0) goto Label_2429; // 0x97b JumpB
	return 0; // 0x97c Return
	
Label_2429:
	var_671_string = ""; var_672_bool = 0; // 0x97d PushV
	var_671_string = var_667_string; // 0x97e Mov
	var_673_string = ""; // 0x97f PushS
	var_674_bool = var_667_string == var_673_string; // 0x980 Eq
	if(var_674_bool == 0) goto Label_2436; // 0x981 JumpB
	var_672_bool = 0; // 0x982 MovB
	goto Label_2437; // 0x983 Jump
	
Label_2437:
	func_3046(var_671_string, var_672_bool); // 0x985 NEW_2
	var_2_object = var_667_string; // 0x987 TMov
	return 0; // 0x988 Return
	
Label_2436:
	var_672_bool = 1; // 0x984 MovB
}


func_3445(var_344_bool)
{
	var_346_int = 0; var_347_string = ""; // 0xd76 PushV
	var_347_string = "ood2Laska2"; // 0xd77 MovS
	func_3110(var_346_int, var_347_string); // 0xd78 NEW_2
	var_348_int = 0; // 0xd7a PushI
	var_349_bool = var_346_int == var_348_int; // 0xd7b Eq
	if(var_349_bool == 0) goto Label_3455; // 0xd7c JumpB
	var_344_bool = 1; // 0xd7d MovB
	return 0; // 0xd7e Return
	
Label_3455:
	var_344_bool = 0; // 0xd7f MovB
	return 0; // 0xd80 Return
}


func_885(var_0_object, var_368_int, var_369_object)
{
	var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0; var_375_object = Obj(); var_376_bool = 0; var_377_int = 0; var_378_bool = 0; // 0x375 PushV
	var_0_object = var_369_object; // 0x376 TMov
	var_379_bool = 0; var_380_object = Obj(); var_381_float = 0; // 0x377 PushV
	var_380_object = var_369_object; // 0x378 Mov
	var_381_float = 70.0; // 0x379 MovF
	func_2805(var_380_object, var_381_float); // 0x37a NEW_2
	var_382_bool = var_379_bool == 0; // 0x37c Not
	if(var_382_bool == 0) goto Label_896; // 0x37d JumpB
	var_368_int = -2; // 0x37e MovI
	return 8; // 0x37f Return
	
Label_896:
	CreateDialog(var_375_object); // 0x380 Func
	var_383_int = 0; // 0x382 PushV
	func_3262(var_383_int); // 0x383 NEW_2
	SetNPCName(var_383_int); // 0x385 ObjFunc
	var_384_int = 0; // 0x387 PushV
	func_3260(var_384_int); // 0x388 NEW_2
	SetNPCDescription(var_384_int); // 0x38a ObjFunc
	var_385_string = ""; // 0x38c PushV
	func_3264(var_385_string); // 0x38d NEW_2
	SetPhoto(var_385_string); // 0x38f ObjFunc
	var_386_string = ""; // 0x391 PushV
	func_3266(var_386_string); // 0x392 NEW_2
	SetPhoto2(var_386_string); // 0x394 ObjFunc
	var_387_int = 0; // 0x396 PushV
	func_3600(var_387_int); // 0x397 NEW_2
	SetPlayerName(var_387_int); // 0x399 ObjFunc
	var_377_int = -1; // 0x39b MovI
	IsOverrideActive(var_376_bool); // 0x39c Func
	var_388_bool = var_376_bool; // 0x39e Push
	if(var_388_bool == 0) goto Label_930; // 0x39f JumpB
	var_368_int = -2; // 0x3a0 MovI
	return 8; // 0x3a1 Return
	
Label_930:
	DoDialog(var_375_object); // 0x3a2 Func
	var_389_bool = 0; var_390_object = Obj(); // 0x3a4 PushV
	var_391_object = Obj(); // 0x3a5 PushV
	func_3083(var_391_object); // 0x3a6 NEW_2
	var_390_object = var_391_object; // 0x3a7 Mov
	func_2892(var_389_bool, var_390_object); // 0x3a9 NEW_2
	var_392_object = Obj(); var_393_object = Obj(); // 0x3ab PushV
	var_392_object = var_369_object; // 0x3ac Mov
	var_393_object = var_375_object; // 0x3ad Mov
	TaskCall(5); // 0x3ae TaskCall
	func_966(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object); // 0x3af NEW_2
	TaskReturn(); // 0x3b0 TaskReturn
	IsDialogEnd(var_378_bool); // 0x3b2 ObjFunc
	
Label_948:
	var_428_bool = var_378_bool == 0; // 0x3b4 Not
	if(var_428_bool == 0) goto Label_955; // 0x3b5 JumpB
	sync(); // 0x3b6 Func
	IsDialogEnd(var_378_bool); // 0x3b8 ObjFunc
	goto Label_948; // 0x3ba Jump
	
Label_955:
	var_429_object = Obj(); // 0x3bb PushV
	var_429_object = var_369_object; // 0x3bc Mov
	func_2874(); // 0x3bd NEW_2
	StopDialog(var_375_object); // 0x3bf Func
	GetReturnValue(var_377_int); // 0x3c1 ObjFunc
	var_368_int = var_377_int; // 0x3c3 Mov
	return 8; // 0x3c4 Return
}


func_3194(var_87_float)
{
	var_88_object = Obj(); var_89_object = Obj(); // 0xc7a PushV
	CreateFloatVector(var_89_object); // 0xc7b Func
	add(var_87_float); // 0xc7d ObjFunc
	var_90_int = 16; // 0xc7f PushI
	SendWorldWndMessage(var_90_int, var_89_object); // 0xc80 Func
	return 2; // 0xc82 Return
}


func_3457(var_550_bool)
{
	var_552_int = 0; var_553_string = ""; // 0xd82 PushV
	var_553_string = "ood11Laska1"; // 0xd83 MovS
	func_3110(var_552_int, var_553_string); // 0xd84 NEW_2
	var_554_int = 0; // 0xd86 PushI
	var_555_bool = var_552_int == var_554_int; // 0xd87 Eq
	if(var_555_bool == 0) goto Label_3467; // 0xd88 JumpB
	var_550_bool = 1; // 0xd89 MovB
	return 0; // 0xd8a Return
	
Label_3467:
	var_550_bool = 0; // 0xd8b MovB
	return 0; // 0xd8c Return
}


func_3204(var_50_bool, var_51_string, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0xc84 PushV
	FindActor(var_54_object, var_51_string); // 0xc85 Func
	var_55_bool = var_54_object == 0; // 0xc87 NullEq
	if(var_55_bool == 0) goto Label_3211; // 0xc88 JumpB
	var_50_bool = 0; // 0xc89 MovB
	return 2; // 0xc8a Return
	
Label_3211:
	Trigger(var_54_object, var_52_string); // 0xc8b Func
	var_50_bool = 1; // 0xc8d MovB
	return 2; // 0xc8e Return
}


func_2950(var_142_bool)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; // 0xb86 PushV
	var_149_string = "c"; // 0xb87 MovS
	var_150_int = 0; // 0xb88 MovI
	
Label_2953:
	var_154_int = 1; // 0xb89 PushI
	if(var_154_int == 0) goto Label_2966; // 0xb8a JumpB
	var_155_int = 1; // 0xb8b PushI
	var_156_int = var_150_int + var_155_int; // 0xb8c Add
	var_157_int = var_149_string + var_156_int; // 0xb8d Add
	HasProperty(var_157_int, var_151_bool); // 0xb8e ObjFunc
	var_158_bool = var_151_bool == 0; // 0xb90 Not
	if(var_158_bool == 0) goto Label_2963; // 0xb91 JumpB
	goto Label_2966; // 0xb92 Jump
	
Label_2966:
	var_159_bool = var_150_int == 0; // 0xb96 Not
	if(var_159_bool == 0) goto Label_2970; // 0xb97 JumpB
	var_142_bool = 0; // 0xb98 MovB
	return 10; // 0xb99 Return
	
Label_2970:
	var_152_int = 0; // 0xb9a MovI
	var_160_int = 1; // 0xb9b PushI
	var_161_bool = var_150_int > var_160_int; // 0xb9c GT
	if(var_161_bool == 0) goto Label_2976; // 0xb9d JumpB
	irand(var_152_int, var_150_int); // 0xb9e Func
	
Label_2976:
	var_162_int = 1; // 0xba0 PushI
	var_163_int = var_152_int + var_162_int; // 0xba1 Add
	var_164_int = var_149_string + var_163_int; // 0xba2 Add
	GetProperty(var_164_int, var_153_string); // 0xba3 ObjFunc
	var_165_bool = 0; var_166_string = ""; // 0xba5 PushV
	var_166_string = var_153_string; // 0xba6 Mov
	func_3061(var_165_bool, var_166_string); // 0xba7 NEW_2
	var_142_bool = var_165_bool; // 0xba8 Mov
	return 10; // 0xbaa Return
	
Label_2963:
	var_171_int = 1; // 0xb93 PushI
	var_150_int = var_150_int + var_171_int; // 0xb94 Add2
	goto Label_2953; // 0xb95 Jump
}


func_3469(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0xd8e PushV
	var_164_string = "d6q03AlbinosKilled"; // 0xd8f MovS
	func_3110(var_163_int, var_164_string); // 0xd90 NEW_2
	var_165_int = 1; // 0xd92 PushI
	var_166_bool = var_163_int == var_165_int; // 0xd93 Eq
	if(var_166_bool == 0) goto Label_3479; // 0xd94 JumpB
	var_161_bool = 1; // 0xd95 MovB
	return 0; // 0xd96 Return
	
Label_3479:
	var_161_bool = 0; // 0xd97 MovB
	return 0; // 0xd98 Return
}


func_144(var_2_object, var_237_string)
{
	var_238_bool = 0; // 0x91 PushV
	func_3268(var_238_bool); // 0x92 NEW_2
	var_239_bool = var_238_bool == 0; // 0x94 Not
	if(var_239_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_240_bool = var_237_string == var_2_object; // 0x97 Eq
	if(var_240_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_241_string = ""; var_242_bool = 0; // 0x9a PushV
	var_241_string = var_237_string; // 0x9b Mov
	var_243_string = ""; // 0x9c PushS
	var_244_bool = var_237_string == var_243_string; // 0x9d Eq
	if(var_244_bool == 0) goto Label_161; // 0x9e JumpB
	var_242_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_3046(var_241_string, var_242_bool); // 0xa2 NEW_2
	var_2_object = var_237_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_242_bool = 1; // 0xa1 MovB
}


func_3216(var_83_float)
{
	var_84_float = 0; var_85_float = 0; // 0xc90 PushV
	GetGameTime(var_85_float); // 0xc91 Func
	var_83_float = var_85_float; // 0xc93 Mov
	return 2; // 0xc94 Return
}


func_3221(var_186_int)
{
	var_187_float = 0; var_188_float = 0; // 0xc95 PushV
	GetGameTime(var_188_float); // 0xc96 Func
	var_189_int = 1; // 0xc98 PushI
	var_190_int = 0; // 0xc99 PushV
	var_191_int = 24; // 0xc9a PushI
	var_190_int = var_188_float / var_188_float; // 0xc9b Div2
	var_186_int = var_189_int + var_190_int; // 0xc9c Add2
	return 2; // 0xc9d Return
}


func_3481(var_473_bool)
{
	var_475_int = 0; var_476_string = ""; // 0xd9a PushV
	var_476_string = "d6q01"; // 0xd9b MovS
	func_3110(var_475_int, var_476_string); // 0xd9c NEW_2
	var_477_int = 2; // 0xd9e PushI
	var_478_bool = var_475_int == var_477_int; // 0xd9f Eq
	if(var_478_bool == 0) goto Label_3491; // 0xda0 JumpB
	var_473_bool = 1; // 0xda1 MovB
	return 0; // 0xda2 Return
	
Label_3491:
	var_473_bool = 0; // 0xda3 MovB
	return 0; // 0xda4 Return
}


func_3230(var_290_bool, var_291_int)
{
	var_292_int = 0; // 0xc9f PushV
	func_3221(var_292_int); // 0xca0 NEW_2
	var_290_bool = var_292_int == var_291_int; // 0xca2 Eq2
	return 0; // 0xca3 Return
}


func_3236(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xca4 PushV
	var_63_string = "idle"; // 0xca5 MovS
	var_64_int = var_61_int; // 0xca6 Push
	if(var_64_int == 0) goto Label_3241; // 0xca7 JumpB
	var_63_string = var_63_string + var_61_int; // 0xca8 Add2
	
Label_3241:
	var_60_string = var_63_string; // 0xca9 Mov
	return 2; // 0xcaa Return
}


func_3493(var_479_bool)
{
	var_481_int = 0; var_482_string = ""; // 0xda6 PushV
	var_482_string = "ood6Laska1"; // 0xda7 MovS
	func_3110(var_481_int, var_482_string); // 0xda8 NEW_2
	var_483_int = 0; // 0xdaa PushI
	var_484_bool = var_481_int == var_483_int; // 0xdab Eq
	if(var_484_bool == 0) goto Label_3503; // 0xdac JumpB
	var_479_bool = 1; // 0xdad MovB
	return 0; // 0xdae Return
	
Label_3503:
	var_479_bool = 0; // 0xdaf MovB
	return 0; // 0xdb0 Return
}


func_3243(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xcab PushV
	var_57_int = 0; // 0xcac MovI
	
Label_3245:
	var_59_string = "all"; // 0xcad PushS
	var_60_string = ""; var_61_int = 0; // 0xcae PushV
	var_61_int = var_57_int; // 0xcaf Mov
	func_3236(var_60_string, var_61_int); // 0xcb0 NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xcb2 Func
	var_65_bool = var_58_bool == 0; // 0xcb4 Not
	if(var_65_bool == 0) goto Label_3255; // 0xcb5 JumpB
	goto Label_3258; // 0xcb6 Jump
	
Label_3258:
	var_54_int = var_57_int; // 0xcba Mov
	return 4; // 0xcbb Return
	
Label_3255:
	var_66_int = 1; // 0xcb7 PushI
	var_57_int = var_57_int + var_66_int; // 0xcb8 Add2
	goto Label_3245; // 0xcb9 Jump
}


func_2732(var_74_bool)
{
	var_74_bool = 1; // 0xaac MovB
	return 0; // 0xaad Return
}


func_1196(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0; // 0x4ac PushV
	var_0_object = var_433_object; // 0x4ad TMov
	var_443_bool = 0; var_444_object = Obj(); var_445_float = 0; // 0x4ae PushV
	var_444_object = var_433_object; // 0x4af Mov
	var_445_float = 70.0; // 0x4b0 MovF
	func_2805(var_444_object, var_445_float); // 0x4b1 NEW_2
	var_446_bool = var_443_bool == 0; // 0x4b3 Not
	if(var_446_bool == 0) goto Label_1207; // 0x4b4 JumpB
	var_432_int = -2; // 0x4b5 MovI
	return 8; // 0x4b6 Return
	
Label_1207:
	CreateDialog(var_439_object); // 0x4b7 Func
	var_447_int = 0; // 0x4b9 PushV
	func_3262(var_447_int); // 0x4ba NEW_2
	SetNPCName(var_447_int); // 0x4bc ObjFunc
	var_448_int = 0; // 0x4be PushV
	func_3260(var_448_int); // 0x4bf NEW_2
	SetNPCDescription(var_448_int); // 0x4c1 ObjFunc
	var_449_string = ""; // 0x4c3 PushV
	func_3264(var_449_string); // 0x4c4 NEW_2
	SetPhoto(var_449_string); // 0x4c6 ObjFunc
	var_450_string = ""; // 0x4c8 PushV
	func_3266(var_450_string); // 0x4c9 NEW_2
	SetPhoto2(var_450_string); // 0x4cb ObjFunc
	var_451_int = 0; // 0x4cd PushV
	func_3600(var_451_int); // 0x4ce NEW_2
	SetPlayerName(var_451_int); // 0x4d0 ObjFunc
	var_441_int = -1; // 0x4d2 MovI
	IsOverrideActive(var_440_bool); // 0x4d3 Func
	var_452_bool = var_440_bool; // 0x4d5 Push
	if(var_452_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_432_int = -2; // 0x4d7 MovI
	return 8; // 0x4d8 Return
	
Label_1241:
	DoDialog(var_439_object); // 0x4d9 Func
	var_453_bool = 0; var_454_object = Obj(); // 0x4db PushV
	var_455_object = Obj(); // 0x4dc PushV
	func_3083(var_455_object); // 0x4dd NEW_2
	var_454_object = var_455_object; // 0x4de Mov
	func_2892(var_453_bool, var_454_object); // 0x4e0 NEW_2
	var_456_object = Obj(); var_457_object = Obj(); // 0x4e2 PushV
	var_456_object = var_433_object; // 0x4e3 Mov
	var_457_object = var_439_object; // 0x4e4 Mov
	TaskCall(7); // 0x4e5 TaskCall
	func_1277(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object); // 0x4e6 NEW_2
	TaskReturn(); // 0x4e7 TaskReturn
	IsDialogEnd(var_442_bool); // 0x4e9 ObjFunc
	
Label_1259:
	var_499_bool = var_442_bool == 0; // 0x4eb Not
	if(var_499_bool == 0) goto Label_1266; // 0x4ec JumpB
	sync(); // 0x4ed Func
	IsDialogEnd(var_442_bool); // 0x4ef ObjFunc
	goto Label_1259; // 0x4f1 Jump
	
Label_1266:
	var_500_object = Obj(); // 0x4f2 PushV
	var_500_object = var_433_object; // 0x4f3 Mov
	func_2874(); // 0x4f4 NEW_2
	StopDialog(var_439_object); // 0x4f6 Func
	GetReturnValue(var_441_int); // 0x4f8 ObjFunc
	var_432_int = var_441_int; // 0x4fa Mov
	return 8; // 0x4fb Return
}


func_2734()
{
	StopAnimation(); // 0xaae Func
	StopGroup0(); // 0xab0 Func
	return 0; // 0xab2 Return
}


func_2987(var_173_bool)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; // 0xbab PushV
	var_185_string = "d"; // 0xbac PushS
	var_186_int = 0; // 0xbad PushV
	func_3221(var_186_int); // 0xbae NEW_2
	var_192_int = var_185_string + var_186_int; // 0xbb0 Add
	var_193_string = "m"; // 0xbb1 PushS
	var_180_string = var_192_int + var_193_string; // 0xbb2 Add2
	var_181_int = 0; // 0xbb3 MovI
	
Label_2996:
	var_194_int = 1; // 0xbb4 PushI
	if(var_194_int == 0) goto Label_3009; // 0xbb5 JumpB
	var_195_int = 1; // 0xbb6 PushI
	var_196_int = var_181_int + var_195_int; // 0xbb7 Add
	var_197_int = var_180_string + var_196_int; // 0xbb8 Add
	HasProperty(var_197_int, var_182_bool); // 0xbb9 ObjFunc
	var_198_bool = var_182_bool == 0; // 0xbbb Not
	if(var_198_bool == 0) goto Label_3006; // 0xbbc JumpB
	goto Label_3009; // 0xbbd Jump
	
Label_3009:
	var_199_bool = var_181_int == 0; // 0xbc1 Not
	if(var_199_bool == 0) goto Label_3013; // 0xbc2 JumpB
	var_173_bool = 0; // 0xbc3 MovB
	return 10; // 0xbc4 Return
	
Label_3013:
	var_183_int = 0; // 0xbc5 MovI
	var_200_int = 1; // 0xbc6 PushI
	var_201_bool = var_181_int > var_200_int; // 0xbc7 GT
	if(var_201_bool == 0) goto Label_3019; // 0xbc8 JumpB
	irand(var_183_int, var_181_int); // 0xbc9 Func
	
Label_3019:
	var_202_int = 1; // 0xbcb PushI
	var_203_int = var_183_int + var_202_int; // 0xbcc Add
	var_204_int = var_180_string + var_203_int; // 0xbcd Add
	GetProperty(var_204_int, var_184_string); // 0xbce ObjFunc
	var_205_bool = 0; var_206_string = ""; // 0xbd0 PushV
	var_206_string = var_184_string; // 0xbd1 Mov
	func_3061(var_205_bool, var_206_string); // 0xbd2 NEW_2
	var_173_bool = var_205_bool; // 0xbd3 Mov
	return 10; // 0xbd5 Return
	
Label_3006:
	var_207_int = 1; // 0xbbe PushI
	var_181_int = var_181_int + var_207_int; // 0xbbf Add2
	goto Label_2996; // 0xbc0 Jump
}


func_431(var_2_object, var_324_string)
{
	var_325_bool = 0; // 0x1b0 PushV
	func_3268(var_325_bool); // 0x1b1 NEW_2
	var_326_bool = var_325_bool == 0; // 0x1b3 Not
	if(var_326_bool == 0) goto Label_438; // 0x1b4 JumpB
	return 0; // 0x1b5 Return
	
Label_438:
	var_327_bool = var_324_string == var_2_object; // 0x1b6 Eq
	if(var_327_bool == 0) goto Label_441; // 0x1b7 JumpB
	return 0; // 0x1b8 Return
	
Label_441:
	var_328_string = ""; var_329_bool = 0; // 0x1b9 PushV
	var_328_string = var_324_string; // 0x1ba Mov
	var_330_string = ""; // 0x1bb PushS
	var_331_bool = var_324_string == var_330_string; // 0x1bc Eq
	if(var_331_bool == 0) goto Label_448; // 0x1bd JumpB
	var_329_bool = 0; // 0x1be MovB
	goto Label_449; // 0x1bf Jump
	
Label_449:
	func_3046(var_328_string, var_329_bool); // 0x1c1 NEW_2
	var_2_object = var_324_string; // 0x1c3 TMov
	return 0; // 0x1c4 Return
	
Label_448:
	var_329_bool = 1; // 0x1c0 MovB
}


func_3505(var_544_bool)
{
	var_546_int = 0; var_547_string = ""; // 0xdb2 PushV
	var_547_string = "d11q01"; // 0xdb3 MovS
	func_3110(var_546_int, var_547_string); // 0xdb4 NEW_2
	var_548_int = 3; // 0xdb6 PushI
	var_549_bool = var_546_int == var_548_int; // 0xdb7 Eq
	if(var_549_bool == 0) goto Label_3515; // 0xdb8 JumpB
	var_544_bool = 1; // 0xdb9 MovB
	return 0; // 0xdba Return
	
Label_3515:
	var_544_bool = 0; // 0xdbb MovB
	return 0; // 0xdbc Return
}


func_2739(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xab3 PushV
	GetPosition(var_56_cvector); // 0xab4 Func
	GetPosition(var_57_cvector); // 0xab6 ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xab8 Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xab9 Or2
	return 6; // 0xaba Return
}


func_2487(var_0_object)
{
	var_36_bool = 0; // 0x9b7 PushV
	func_2800(var_36_bool); // 0x9b8 NEW_2
	var_39_bool = var_36_bool == 0; // 0x9ba Not
	if(var_39_bool == 0) goto Label_2494; // 0x9bb JumpB
	Hold(); // 0x9bc Func
	
Label_2494:
	GetDirection(var_0_object); // 0x9be Func
	
Label_2496:
	func_2663(); // 0x9c1 NEW_2
	goto Label_2496; // 0x9c3 Jump
}


func_1722(var_0_object, var_1_object, var_2_object, var_3_string, var_601_object, var_602_object)
{
	var_0_object = var_602_object; // 0x6bb TMov
	var_1_object = var_601_object; // 0x6bc TMov
	var_3_string = 0; // 0x6bd TMovB
	var_607_int = 1; // 0x6be PushI
	if(var_607_int == 0) goto Label_1755; // 0x6bf JumpB
	var_608_string = ""; // 0x6c0 PushV
	var_608_string = "Neutral"; // 0x6c1 MovS
	func_1785(var_602_object, var_608_string); // 0x6c2 NEW_2
	var_616_int = 535284; // 0x6c4 PushI
	SetMessage(var_616_int); // 0x6c5 TObjFunc
	ClearReplies(); // 0x6c7 TObjFunc
	var_617_int = 535285; // 0x6c9 PushI
	var_618_int = 36962; // 0x6ca PushI
	var_619_int = 36961; // 0x6cb PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x6cc TObjFunc
	var_620_int = 535292; // 0x6ce PushI
	var_621_int = -1; // 0x6cf PushI
	var_622_int = 36968; // 0x6d0 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x6d1 TObjFunc
	var_623_int = 535293; // 0x6d3 PushI
	var_624_int = -1; // 0x6d4 PushI
	var_625_int = 36969; // 0x6d5 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x6d6 TObjFunc
	goto Label_1755; // 0x6d8 Jump
	
Label_1755:
	var_626_bool = 0; // 0x6db PushV
	func_3268(var_626_bool); // 0x6dc NEW_2
	if(var_626_bool == 0) goto Label_1770; // 0x6de JumpB
	
Label_1759:
	lshWaitForAnimEnd(); // 0x6df Func
	var_627_string = var_3_string; // 0x6e1 PushT
	if(var_627_string == 0) goto Label_1764; // 0x6e2 JumpB
	goto Label_1769; // 0x6e3 Jump
	
Label_1769:
	goto Label_1784; // 0x6e9 Jump
	
Label_1784:
	return 0; // 0x6f8 Return
	
Label_1764:
	var_628_string = ""; // 0x6e4 PushV
	var_628_string = var_2_object; // 0x6e5 MovT
	func_3030(var_628_string); // 0x6e6 NEW_2
	goto Label_1759; // 0x6e8 Jump
	
Label_1770:
	var_629_string = "all"; // 0x6ea PushS
	var_630_string = "idle"; // 0x6eb PushS
	PlayAnimation(var_629_string, var_630_string); // 0x6ec Func
	
Label_1774:
	WaitForAnimEnd(); // 0x6ee Func
	var_631_string = var_3_string; // 0x6f0 PushT
	if(var_631_string == 0) goto Label_1779; // 0x6f1 JumpB
	goto Label_1784; // 0x6f2 Jump
	
Label_1779:
	var_632_string = "all"; // 0x6f3 PushS
	var_633_string = "idle"; // 0x6f4 PushS
	PlayAnimation(var_632_string, var_633_string); // 0x6f5 Func
	goto Label_1774; // 0x6f7 Jump
}


func_2747(var_99_bool, var_100_object, var_101_string)
{
	var_102_bool = 0; var_103_bool = 0; // 0xabb PushV
	var_104_string = "HasProperty"; // 0xabc PushS
	var_105_int = 2; // 0xabd PushI
	var_106_bool = IsFuncExist(var_100_object, var_104_string, var_105_int); // 0xabe FuncExist
	var_107_bool = var_106_bool == 0; // 0xabf Not
	if(var_107_bool == 0) goto Label_2755; // 0xac0 JumpB
	var_99_bool = 0; // 0xac1 MovB
	return 2; // 0xac2 Return
	
Label_2755:
	HasProperty(var_101_string, var_103_bool); // 0xac3 ObjFunc
	var_99_bool = var_103_bool; // 0xac5 Mov
	return 2; // 0xac6 Return
}


func_3260(var_119_int)
{
	var_119_int = 515542; // 0xcbc MovI
	return 0; // 0xcbd Return
}


func_3517(var_408_bool)
{
	var_410_int = 0; var_411_string = ""; // 0xdbe PushV
	var_411_string = "ood3Laska1"; // 0xdbf MovS
	func_3110(var_410_int, var_411_string); // 0xdc0 NEW_2
	var_412_int = 0; // 0xdc2 PushI
	var_413_bool = var_410_int == var_412_int; // 0xdc3 Eq
	if(var_413_bool == 0) goto Label_3527; // 0xdc4 JumpB
	var_408_bool = 1; // 0xdc5 MovB
	return 0; // 0xdc6 Return
	
Label_3527:
	var_408_bool = 0; // 0xdc7 MovB
	return 0; // 0xdc8 Return
}


func_3262(var_118_int)
{
	var_118_int = 502867; // 0xcbe MovI
	return 0; // 0xcbf Return
}


func_1981(var_0_object, var_1_object, var_2_object, var_3_string, var_527_object, var_528_object)
{
	var_0_object = var_528_object; // 0x7be TMov
	var_1_object = var_527_object; // 0x7bf TMov
	var_3_string = 0; // 0x7c0 TMovB
	var_533_int = 1; // 0x7c1 PushI
	if(var_533_int == 0) goto Label_2028; // 0x7c2 JumpB
	var_534_string = ""; // 0x7c3 PushV
	var_534_string = "Pain"; // 0x7c4 MovS
	func_2058(var_528_object, var_534_string); // 0x7c5 NEW_2
	var_542_int = 540043; // 0x7c7 PushI
	SetMessage(var_542_int); // 0x7c8 TObjFunc
	ClearReplies(); // 0x7ca TObjFunc
	var_543_bool = 0; // 0x7cc PushV
	var_543_bool = 0; // 0x7cd MovB
	var_544_bool = 0; var_545_object = Obj(); // 0x7ce PushV
	var_545_object = var_1_object; // 0x7cf MovT
	func_3505(var_545_object); // 0x7d0 NEW_2
	if(var_544_bool == 0) goto Label_2009; // 0x7d2 JumpB
	var_550_bool = 0; var_551_object = Obj(); // 0x7d3 PushV
	var_551_object = var_1_object; // 0x7d4 MovT
	func_3457(var_551_object); // 0x7d5 NEW_2
	if(var_550_bool == 0) goto Label_2009; // 0x7d7 JumpB
	var_543_bool = 1; // 0x7d8 MovB
	
Label_2009:
	if(var_543_bool == 0) goto Label_2015; // 0x7d9 JumpB
	var_556_int = 540045; // 0x7da PushI
	var_557_int = 42013; // 0x7db PushI
	var_558_int = 42012; // 0x7dc PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x7dd TObjFunc
	
Label_2015:
	var_559_int = 540044; // 0x7df PushI
	var_560_int = -1; // 0x7e0 PushI
	var_561_int = 42011; // 0x7e1 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x7e2 TObjFunc
	var_562_int = 540060; // 0x7e4 PushI
	var_563_int = -1; // 0x7e5 PushI
	var_564_int = 42029; // 0x7e6 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x7e7 TObjFunc
	goto Label_2028; // 0x7e9 Jump
	
Label_2028:
	var_565_bool = 0; // 0x7ec PushV
	func_3268(var_565_bool); // 0x7ed NEW_2
	if(var_565_bool == 0) goto Label_2043; // 0x7ef JumpB
	
Label_2032:
	lshWaitForAnimEnd(); // 0x7f0 Func
	var_566_string = var_3_string; // 0x7f2 PushT
	if(var_566_string == 0) goto Label_2037; // 0x7f3 JumpB
	goto Label_2042; // 0x7f4 Jump
	
Label_2042:
	goto Label_2057; // 0x7fa Jump
	
Label_2057:
	return 0; // 0x809 Return
	
Label_2037:
	var_567_string = ""; // 0x7f5 PushV
	var_567_string = var_2_object; // 0x7f6 MovT
	func_3030(var_567_string); // 0x7f7 NEW_2
	goto Label_2032; // 0x7f9 Jump
	
Label_2043:
	var_568_string = "all"; // 0x7fb PushS
	var_569_string = "idle"; // 0x7fc PushS
	PlayAnimation(var_568_string, var_569_string); // 0x7fd Func
	
Label_2047:
	WaitForAnimEnd(); // 0x7ff Func
	var_570_string = var_3_string; // 0x801 PushT
	if(var_570_string == 0) goto Label_2052; // 0x802 JumpB
	goto Label_2057; // 0x803 Jump
	
Label_2052:
	var_571_string = "all"; // 0x804 PushS
	var_572_string = "idle"; // 0x805 PushS
	PlayAnimation(var_571_string, var_572_string); // 0x806 Func
	goto Label_2047; // 0x808 Jump
}


func_3264(var_120_string)
{
	var_120_string = "ui/NPC_Laska.png"; // 0xcc0 MovS
	return 0; // 0xcc1 Return
}


func_3266(var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png"; // 0xcc2 MovS
	return 0; // 0xcc3 Return
}


func_3268(var_113_bool)
{
	var_113_bool = 1; // 0xcc4 MovB
	return 0; // 0xcc5 Return
}


func_2501(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x9c5 PushV
	var_64_string = "player"; // 0x9c6 PushS
	FindActor(var_63_object, var_64_string); // 0x9c7 Func
	var_65_bool = var_63_object == 0; // 0x9c9 Not
	if(var_65_bool == 0) goto Label_2509; // 0x9ca JumpB
	var_61_bool = 0; // 0x9cb MovB
	return 2; // 0x9cc Return
	
Label_2509:
	var_66_bool = 0; var_67_object = Obj(); // 0x9cd PushV
	var_67_object = var_63_object; // 0x9ce Mov
	func_2791(var_67_object); // 0x9cf NEW_2
	var_61_bool = var_66_bool; // 0x9d0 Mov
	return 2; // 0x9d2 Return
}


func_3270(var_48_object)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xcc6 PushV
	var_52_string = "lockpick1time is given"; // 0xcc7 PushS
	Trace(var_52_string); // 0xcc8 Func
	CreateInvItem(var_51_object); // 0xcca Func
	var_53_string = "lockpick"; // 0xccc PushS
	SetItemName(var_53_string); // 0xccd ObjFunc
	var_54_string = "uses"; // 0xccf PushS
	var_55_int = 1; // 0xcd0 PushI
	SetProperty(var_54_string, var_55_int); // 0xcd1 ObjFunc
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0xcd3 PushV
	var_56_object = var_48_object; // 0xcd4 Mov
	var_57_object = var_51_object; // 0xcd5 Mov
	var_58_int = 1; // 0xcd6 MovI
	func_3127(var_57_object, var_58_int); // 0xcd7 NEW_2
	return 2; // 0xcd9 Return
}


func_2759(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float)
{
	var_97_float = 0; var_98_float = 0; // 0xac7 PushV
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; // 0xac8 PushV
	var_100_object = var_92_object; // 0xac9 Mov
	var_101_string = var_93_string; // 0xaca Mov
	func_2747(var_99_bool, var_100_object, var_101_string); // 0xacb NEW_2
	var_108_bool = var_99_bool == 0; // 0xacd Not
	if(var_108_bool == 0) goto Label_2769; // 0xace JumpB
	var_91_bool = 0; // 0xacf MovB
	return 2; // 0xad0 Return
	
Label_2769:
	GetProperty(var_93_string, var_98_float); // 0xad1 ObjFunc
	var_109_float = 0; var_110_float = 0; var_111_float = 0; var_112_float = 0; // 0xad3 PushV
	var_110_float = var_98_float + var_94_float; // 0xad4 Add2
	var_111_float = var_95_float; // 0xad5 Mov
	var_112_float = var_96_float; // 0xad6 Mov
	func_3099(var_109_float, var_110_float, var_111_float, var_112_float); // 0xad7 NEW_2
	SetProperty(var_93_string, var_109_float); // 0xad9 ObjFunc
	var_91_bool = 1; // 0xadb MovB
	return 2; // 0xadc Return
}


func_966(var_0_object, var_1_object, var_2_object, var_3_string, var_392_object, var_393_object)
{
	var_0_object = var_393_object; // 0x3c7 TMov
	var_1_object = var_392_object; // 0x3c8 TMov
	var_3_string = 0; // 0x3c9 TMovB
	var_398_int = 1; // 0x3ca PushI
	if(var_398_int == 0) goto Label_999; // 0x3cb JumpB
	var_399_string = ""; // 0x3cc PushV
	var_399_string = "Pain"; // 0x3cd MovS
	func_1029(var_393_object, var_399_string); // 0x3ce NEW_2
	var_407_int = 509951; // 0x3d0 PushI
	SetMessage(var_407_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_408_bool = 0; var_409_object = Obj(); // 0x3d5 PushV
	var_409_object = var_1_object; // 0x3d6 MovT
	func_3517(var_409_object); // 0x3d7 NEW_2
	if(var_408_bool == 0) goto Label_991; // 0x3d9 JumpB
	var_414_int = 509961; // 0x3da PushI
	var_415_int = 10970; // 0x3db PushI
	var_416_int = 10978; // 0x3dc PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x3dd TObjFunc
	
Label_991:
	var_417_int = 509952; // 0x3df PushI
	var_418_int = -1; // 0x3e0 PushI
	var_419_int = 10969; // 0x3e1 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x3e2 TObjFunc
	goto Label_999; // 0x3e4 Jump
	
Label_999:
	var_420_bool = 0; // 0x3e7 PushV
	func_3268(var_420_bool); // 0x3e8 NEW_2
	if(var_420_bool == 0) goto Label_1014; // 0x3ea JumpB
	
Label_1003:
	lshWaitForAnimEnd(); // 0x3eb Func
	var_421_string = var_3_string; // 0x3ed PushT
	if(var_421_string == 0) goto Label_1008; // 0x3ee JumpB
	goto Label_1013; // 0x3ef Jump
	
Label_1013:
	goto Label_1028; // 0x3f5 Jump
	
Label_1028:
	return 0; // 0x404 Return
	
Label_1008:
	var_422_string = ""; // 0x3f0 PushV
	var_422_string = var_2_object; // 0x3f1 MovT
	func_3030(var_422_string); // 0x3f2 NEW_2
	goto Label_1003; // 0x3f4 Jump
	
Label_1014:
	var_423_string = "all"; // 0x3f6 PushS
	var_424_string = "idle"; // 0x3f7 PushS
	PlayAnimation(var_423_string, var_424_string); // 0x3f8 Func
	
Label_1018:
	WaitForAnimEnd(); // 0x3fa Func
	var_425_string = var_3_string; // 0x3fc PushT
	if(var_425_string == 0) goto Label_1023; // 0x3fd JumpB
	goto Label_1028; // 0x3fe Jump
	
Label_1023:
	var_426_string = "all"; // 0x3ff PushS
	var_427_string = "idle"; // 0x400 PushS
	PlayAnimation(var_426_string, var_427_string); // 0x401 Func
	goto Label_1018; // 0x403 Jump
}


func_3529()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0xdc9 PushV
	var_88_int = 117; // 0xdca PushI
	var_89_int = 1; // 0xdcb PushI
	var_90_int = 513740; // 0xdcc PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0xdcd Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0xdcf PushV
	var_92_object = var_87_object; // 0xdd0 Mov
	var_93_int = 111; // 0xdd1 MovI
	func_3555(var_91_bool, var_92_object, var_93_int); // 0xdd2 NEW_2
	return 2; // 0xdd4 Return
}


func_2516(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0x9d4 PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0x9d5 PushE
	RotateAsync(var_113_float, var_114_float); // 0x9d6 Func
	return 0; // 0x9d8 Return
}


func_3030(var_263_string)
{
	var_264_bool = 0; var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_float = 0; var_269_float = 0; // 0xbd6 PushV
	lshHasAnimation(var_267_bool, var_263_string); // 0xbd7 Func
	var_270_bool = var_267_bool; // 0xbd9 Push
	if(var_270_bool == 0) goto Label_3041; // 0xbda JumpB
	lshGetAnimTimes(var_263_string, var_268_float, var_269_float); // 0xbdb Func
	var_271_bool = 0; // 0xbdd PushB
	lshPlayAnimation(var_268_float, var_269_float, var_271_bool); // 0xbde Func
	goto Label_3045; // 0xbe0 Jump
	
Label_3045:
	return 6; // 0xbe5 Return
	
Label_3041:
	var_272_string = "Can't find lsh animation : "; // 0xbe1 PushS
	var_273_int = var_272_string + var_263_string; // 0xbe2 Add
	Trace(var_273_int); // 0xbe3 Func
}


func_3542(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0xdd6 PushV
	GetDiaryRoot(var_102_object); // 0xdd7 Func
	var_103_bool = var_102_object == 0; // 0xdd9 Not
	if(var_103_bool == 0) goto Label_3552; // 0xdda JumpB
	var_104_string = "Can't retrieve diary root"; // 0xddb PushS
	Trace(var_104_string); // 0xddc Func
	var_100_object = 0; // 0xdde MovB
	return 2; // 0xddf Return
	
Label_3552:
	var_100_object = var_102_object; // 0xde0 Mov
	return 2; // 0xde1 Return
}


func_2521(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0x9d9 PushV
	var_49_string = "player"; // 0x9da PushS
	FindActor(var_47_object, var_49_string); // 0x9db Func
	var_50_bool = var_47_object == 0; // 0x9dd Not
	if(var_50_bool == 0) goto Label_2529; // 0x9de JumpB
	var_44_bool = 0; // 0x9df MovB
	return 4; // 0x9e0 Return
	
Label_2529:
	var_51_float = 0; var_52_object = Obj(); // 0x9e1 PushV
	var_52_object = var_47_object; // 0x9e2 Mov
	func_2739(var_52_object); // 0x9e3 NEW_2
	var_59_float = 90000.0; // 0x9e5 PushF
	var_60_bool = var_51_float > var_59_float; // 0x9e6 GT
	if(var_60_bool == 0) goto Label_2538; // 0x9e7 JumpB
	var_44_bool = 0; // 0x9e8 MovB
	return 4; // 0x9e9 Return
	
Label_2538:
	CanSee(var_48_bool, var_47_object); // 0x9ea Func
	var_44_bool = var_48_bool; // 0x9ec Mov
	return 4; // 0x9ed Return
}


func_3291()
{
	var_74_string = "playsound"; // 0xcdc PushS
	var_75_string = "giveitem"; // 0xcdd PushS
	TriggerWorld(var_74_string, var_75_string); // 0xcde Func
	return 0; // 0xce0 Return
}


func_2781(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xadd PushV
	GetPosition(var_49_cvector); // 0xade Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xae0 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xae1 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xae2 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xae3 Func
	var_44_bool = var_51_bool; // 0xae5 Mov
	return 6; // 0xae6 Return
}


func_3297()
{
	var_44_string = "ood2Laska1"; // 0xce2 PushS
	var_45_int = 1; // 0xce3 PushI
	SetVariable(var_44_string, var_45_int); // 0xce4 Func
	return 0; // 0xce6 Return
}


func_3555(var_91_bool, var_92_object, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; var_97_object = Obj(); var_98_object = Obj(); var_99_int = 0; // 0xde3 PushV
	var_100_object = Obj(); // 0xde4 PushV
	func_3542(var_100_object); // 0xde5 NEW_2
	var_97_object = var_100_object; // 0xde6 Mov
	Find(var_93_int, var_98_object); // 0xde8 ObjFunc
	var_105_bool = var_98_object == 0; // 0xdea Not
	if(var_105_bool == 0) goto Label_3570; // 0xdeb JumpB
	var_106_string = "Can't find diary parent with id: "; // 0xdec PushS
	var_107_int = var_106_string + var_93_int; // 0xded Add
	Trace(var_107_int); // 0xdee Func
	var_91_bool = 0; // 0xdf0 MovB
	return 6; // 0xdf1 Return
	
Label_3570:
	AddChild(var_92_object); // 0xdf2 ObjFunc
	var_108_int = 7; // 0xdf4 PushI
	SendWorldWndMessage(var_108_int); // 0xdf5 Func
	GetCategory(var_99_int); // 0xdf7 ObjFunc
	SetDiarySection(var_99_int); // 0xdf9 Func
	var_91_bool = 0; // 0xdfb MovB
	return 6; // 0xdfc Return
}


func_3046(var_241_string, var_242_bool)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0; // 0xbe6 PushV
	lshHasAnimation(var_248_bool, var_241_string); // 0xbe7 Func
	var_251_bool = var_248_bool; // 0xbe9 Push
	if(var_251_bool == 0) goto Label_3056; // 0xbea JumpB
	lshGetAnimTimes(var_241_string, var_249_float, var_250_float); // 0xbeb Func
	lshPlayAnimation(var_249_float, var_250_float, var_242_bool); // 0xbed Func
	goto Label_3060; // 0xbef Jump
	
Label_3060:
	return 6; // 0xbf4 Return
	
Label_3056:
	var_252_string = "Can't find lsh animation : "; // 0xbf0 PushS
	var_253_int = var_252_string + var_241_string; // 0xbf1 Add
	Trace(var_253_int); // 0xbf2 Func
}


func_3303()
{
	var_80_string = "ood2Laska2"; // 0xce8 PushS
	var_81_int = 1; // 0xce9 PushI
	SetVariable(var_80_string, var_81_int); // 0xcea Func
	return 0; // 0xcec Return
}


func_2791(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xae7 PushV
	GetPosition(var_43_cvector); // 0xae8 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xaea PushV
	var_45_cvector = var_43_cvector; // 0xaeb Mov
	func_2781(var_44_bool, var_45_cvector); // 0xaec NEW_2
	var_40_bool = var_44_bool; // 0xaed Mov
	return 2; // 0xaef Return
}


func_2280(var_0_object, var_636_int, var_637_object)
{
	var_639_object = Obj(); var_640_bool = 0; var_641_int = 0; var_642_bool = 0; var_643_object = Obj(); var_644_bool = 0; var_645_int = 0; var_646_bool = 0; // 0x8e8 PushV
	var_0_object = var_637_object; // 0x8e9 TMov
	var_647_bool = 0; var_648_object = Obj(); var_649_float = 0; // 0x8ea PushV
	var_648_object = var_637_object; // 0x8eb Mov
	var_649_float = 70.0; // 0x8ec MovF
	func_2805(var_648_object, var_649_float); // 0x8ed NEW_2
	var_650_bool = var_647_bool == 0; // 0x8ef Not
	if(var_650_bool == 0) goto Label_2291; // 0x8f0 JumpB
	var_636_int = -2; // 0x8f1 MovI
	return 8; // 0x8f2 Return
	
Label_2291:
	CreateDialog(var_643_object); // 0x8f3 Func
	var_651_int = 0; // 0x8f5 PushV
	func_3262(var_651_int); // 0x8f6 NEW_2
	SetNPCName(var_651_int); // 0x8f8 ObjFunc
	var_652_int = 0; // 0x8fa PushV
	func_3260(var_652_int); // 0x8fb NEW_2
	SetNPCDescription(var_652_int); // 0x8fd ObjFunc
	var_653_string = ""; // 0x8ff PushV
	func_3264(var_653_string); // 0x900 NEW_2
	SetPhoto(var_653_string); // 0x902 ObjFunc
	var_654_string = ""; // 0x904 PushV
	func_3266(var_654_string); // 0x905 NEW_2
	SetPhoto2(var_654_string); // 0x907 ObjFunc
	var_655_int = 0; // 0x909 PushV
	func_3600(var_655_int); // 0x90a NEW_2
	SetPlayerName(var_655_int); // 0x90c ObjFunc
	var_645_int = -1; // 0x90e MovI
	IsOverrideActive(var_644_bool); // 0x90f Func
	var_656_bool = var_644_bool; // 0x911 Push
	if(var_656_bool == 0) goto Label_2325; // 0x912 JumpB
	var_636_int = -2; // 0x913 MovI
	return 8; // 0x914 Return
	
Label_2325:
	DoDialog(var_643_object); // 0x915 Func
	var_657_bool = 0; var_658_object = Obj(); // 0x917 PushV
	var_659_object = Obj(); // 0x918 PushV
	func_3083(var_659_object); // 0x919 NEW_2
	var_658_object = var_659_object; // 0x91a Mov
	func_2892(var_657_bool, var_658_object); // 0x91c NEW_2
	var_660_object = Obj(); var_661_object = Obj(); // 0x91e PushV
	var_660_object = var_637_object; // 0x91f Mov
	var_661_object = var_643_object; // 0x920 Mov
	TaskCall(13); // 0x921 TaskCall
	func_2361(var_662_object, var_663_object, var_664_string, var_665_bool, var_660_object, var_661_object); // 0x922 NEW_2
	TaskReturn(); // 0x923 TaskReturn
	IsDialogEnd(var_646_bool); // 0x925 ObjFunc
	
Label_2343:
	var_690_bool = var_646_bool == 0; // 0x927 Not
	if(var_690_bool == 0) goto Label_2350; // 0x928 JumpB
	sync(); // 0x929 Func
	IsDialogEnd(var_646_bool); // 0x92b ObjFunc
	goto Label_2343; // 0x92d Jump
	
Label_2350:
	var_691_object = Obj(); // 0x92e PushV
	var_691_object = var_637_object; // 0x92f Mov
	func_2874(); // 0x930 NEW_2
	StopDialog(var_643_object); // 0x932 Func
	GetReturnValue(var_645_int); // 0x934 ObjFunc
	var_636_int = var_645_int; // 0x936 Mov
	return 8; // 0x937 Return
}


func_3309()
{
	var_44_string = "ood11Laska1"; // 0xcee PushS
	var_45_int = 1; // 0xcef PushI
	SetVariable(var_44_string, var_45_int); // 0xcf0 Func
	return 0; // 0xcf2 Return
}


func_2543()
{
	var_694_float = 0; var_695_float = 0; // 0x9ef PushV
	var_696_int = 8; // 0x9f0 PushI
	var_697_int = 16; // 0x9f1 PushI
	rand(var_695_float, var_696_int, var_697_int); // 0x9f2 Func
	var_698_int = 10; // 0x9f4 PushI
	SetTimer(var_698_int, var_695_float); // 0x9f5 Func
	return 2; // 0x9f7 Return
}


func_2800(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xaf0 PushV
	IsLoaded(var_38_bool); // 0xaf1 Func
	var_36_bool = var_38_bool; // 0xaf3 Mov
	return 2; // 0xaf4 Return
}


func_3315(var_87_object)
{
	var_89_string = "bandage is given"; // 0xcf4 PushS
	Trace(var_89_string); // 0xcf5 Func
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0; // 0xcf7 PushV
	var_90_object = var_87_object; // 0xcf8 Mov
	var_91_string = "bandage"; // 0xcf9 MovS
	var_92_int = 1; // 0xcfa MovI
	func_3146(var_90_object, var_91_string, var_92_int); // 0xcfb NEW_2
	return 0; // 0xcfd Return
}


func_2805(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xaf5 PushV
	GetPosition(var_83_cvector); // 0xaf6 ObjFunc
	GetEyesHeight(var_82_float); // 0xaf8 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xafa PushE
	var_91_float = var_91_float + var_82_float; // 0xafb Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xafc PopE
	GetPosition(var_84_cvector); // 0xafd Func
	GetEyesHeight(var_82_float); // 0xaff Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xb01 PushE
	var_92_float = var_92_float + var_82_float; // 0xb02 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xb03 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xb04 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xb05 PushE
	var_93_float = 0; // 0xb06 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xb07 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xb08 Or
	var_95_float = sqrt(var_94_int); // 0xb09 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xb0a Div2
	var_86_cvector = -var_85_cvector; // 0xb0b Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xb0c Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xb0d PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xb0e PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xb0f Xor2
	func_3089(var_97_cvector, var_98_cvector); // 0xb10 NEW_2
	var_105_int = 25; // 0xb12 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xb13 Mult
	var_107_int = var_96_float + var_106_float; // 0xb14 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xb15 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xb16 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xb17 Add2
	IsOverrideActive(var_89_bool); // 0xb18 Func
	var_109_bool = var_89_bool; // 0xb1a Push
	if(var_109_bool == 0) goto Label_2846; // 0xb1b JumpB
	var_70_bool = 0; // 0xb1c MovB
	return 18; // 0xb1d Return
	
Label_2846:
	StopWorld(); // 0xb1e Func
	var_110_bool = 1; // 0xb20 PushB
	CameraTransit(var_88_cvector, var_86_cvector, var_110_bool); // 0xb21 Func
	var_111_float = GetByIndex(var_87_cvector, 0); // 0xb23 PushE
	var_112_float = GetByIndex(var_87_cvector, 2); // 0xb24 PushE
	Rotate(var_111_float, var_112_float); // 0xb25 Func
	var_113_bool = 0; // 0xb27 PushV
	func_3268(var_113_bool); // 0xb28 NEW_2
	if(var_113_bool == 0) goto Label_2860; // 0xb2a JumpB
	goto Label_2868; // 0xb2b Jump
	
Label_2868:
	CameraWaitForPlayFinish(); // 0xb34 Func
	ResumeWorld(); // 0xb36 Func
	var_70_bool = 1; // 0xb38 MovB
	return 18; // 0xb39 Return
	
Label_2860:
	var_114_string = "head"; // 0xb2c PushS
	HasAnimationTrack(var_90_bool, var_114_string); // 0xb2d Func
	var_115_bool = var_90_bool; // 0xb2f Push
	if(var_115_bool == 0) goto Label_2868; // 0xb30 JumpB
	var_116_string = "head"; // 0xb31 PushS
	LookAsyncCamera(var_116_string); // 0xb32 Func
}


func_3061(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0; // 0xbf5 PushV
	var_169_bool = 0; // 0xbf6 PushV
	func_3268(var_169_bool); // 0xbf7 NEW_2
	if(var_169_bool == 0) goto Label_3074; // 0xbf9 JumpB
	lshHasSpeech(var_168_bool, var_166_string); // 0xbfa Func
	var_170_bool = var_168_bool; // 0xbfc Push
	if(var_170_bool == 0) goto Label_3074; // 0xbfd JumpB
	lshPlaySpeech(var_166_string); // 0xbfe Func
	var_165_bool = 1; // 0xc00 MovB
	return 2; // 0xc01 Return
	
Label_3074:
	var_165_bool = 0; // 0xc02 MovB
	return 2; // 0xc03 Return
}


func_2552()
{
	var_693_int = 10; // 0x9f8 PushI
	KillTimer(var_693_int); // 0x9f9 Func
	return 0; // 0x9fb Return
}


func_1785(var_2_object, var_608_string)
{
	var_609_bool = 0; // 0x6fa PushV
	func_3268(var_609_bool); // 0x6fb NEW_2
	var_610_bool = var_609_bool == 0; // 0x6fd Not
	if(var_610_bool == 0) goto Label_1792; // 0x6fe JumpB
	return 0; // 0x6ff Return
	
Label_1792:
	var_611_bool = var_608_string == var_2_object; // 0x700 Eq
	if(var_611_bool == 0) goto Label_1795; // 0x701 JumpB
	return 0; // 0x702 Return
	
Label_1795:
	var_612_string = ""; var_613_bool = 0; // 0x703 PushV
	var_612_string = var_608_string; // 0x704 Mov
	var_614_string = ""; // 0x705 PushS
	var_615_bool = var_608_string == var_614_string; // 0x706 Eq
	if(var_615_bool == 0) goto Label_1802; // 0x707 JumpB
	var_613_bool = 0; // 0x708 MovB
	goto Label_1803; // 0x709 Jump
	
Label_1803:
	func_3046(var_612_string, var_613_bool); // 0x70b NEW_2
	var_2_object = var_608_string; // 0x70d TMov
	return 0; // 0x70e Return
	
Label_1802:
	var_613_bool = 1; // 0x70a MovB
}


func_1277(var_0_object, var_1_object, var_2_object, var_3_string, var_456_object, var_457_object)
{
	var_0_object = var_457_object; // 0x4fe TMov
	var_1_object = var_456_object; // 0x4ff TMov
	var_3_string = 0; // 0x500 TMovB
	var_462_int = 1; // 0x501 PushI
	if(var_462_int == 0) goto Label_1319; // 0x502 JumpB
	var_463_string = ""; // 0x503 PushV
	var_463_string = "Neutral"; // 0x504 MovS
	func_1349(var_457_object, var_463_string); // 0x505 NEW_2
	var_471_int = 512815; // 0x507 PushI
	SetMessage(var_471_int); // 0x508 TObjFunc
	ClearReplies(); // 0x50a TObjFunc
	var_472_bool = 0; // 0x50c PushV
	var_472_bool = 0; // 0x50d MovB
	var_473_bool = 0; var_474_object = Obj(); // 0x50e PushV
	var_474_object = var_1_object; // 0x50f MovT
	func_3481(var_474_object); // 0x510 NEW_2
	if(var_473_bool == 0) goto Label_1305; // 0x512 JumpB
	var_479_bool = 0; var_480_object = Obj(); // 0x513 PushV
	var_480_object = var_1_object; // 0x514 MovT
	func_3493(var_480_object); // 0x515 NEW_2
	if(var_479_bool == 0) goto Label_1305; // 0x517 JumpB
	var_472_bool = 1; // 0x518 MovB
	
Label_1305:
	if(var_472_bool == 0) goto Label_1311; // 0x519 JumpB
	var_485_int = 512816; // 0x51a PushI
	var_486_int = 14017; // 0x51b PushI
	var_487_int = 14016; // 0x51c PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x51d TObjFunc
	
Label_1311:
	var_488_int = 512828; // 0x51f PushI
	var_489_int = -1; // 0x520 PushI
	var_490_int = 14028; // 0x521 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x522 TObjFunc
	goto Label_1319; // 0x524 Jump
	
Label_1319:
	var_491_bool = 0; // 0x527 PushV
	func_3268(var_491_bool); // 0x528 NEW_2
	if(var_491_bool == 0) goto Label_1334; // 0x52a JumpB
	
Label_1323:
	lshWaitForAnimEnd(); // 0x52b Func
	var_492_string = var_3_string; // 0x52d PushT
	if(var_492_string == 0) goto Label_1328; // 0x52e JumpB
	goto Label_1333; // 0x52f Jump
	
Label_1333:
	goto Label_1348; // 0x535 Jump
	
Label_1348:
	return 0; // 0x544 Return
	
Label_1328:
	var_493_string = ""; // 0x530 PushV
	var_493_string = var_2_object; // 0x531 MovT
	func_3030(var_493_string); // 0x532 NEW_2
	goto Label_1323; // 0x534 Jump
	
Label_1334:
	var_494_string = "all"; // 0x536 PushS
	var_495_string = "idle"; // 0x537 PushS
	PlayAnimation(var_494_string, var_495_string); // 0x538 Func
	
Label_1338:
	WaitForAnimEnd(); // 0x53a Func
	var_496_string = var_3_string; // 0x53c PushT
	if(var_496_string == 0) goto Label_1343; // 0x53d JumpB
	goto Label_1348; // 0x53e Jump
	
Label_1343:
	var_497_string = "all"; // 0x53f PushS
	var_498_string = "idle"; // 0x540 PushS
	PlayAnimation(var_497_string, var_498_string); // 0x541 Func
	goto Label_1338; // 0x543 Jump
}


func_3326(var_76_object)
{
	var_78_string = "tourniquet is given"; // 0xcff PushS
	Trace(var_78_string); // 0xd00 Func
	var_79_object = Obj(); var_80_string = ""; var_81_int = 0; // 0xd02 PushV
	var_79_object = var_76_object; // 0xd03 Mov
	var_80_string = "tourniquet"; // 0xd04 MovS
	var_81_int = 1; // 0xd05 MovI
	func_3146(var_79_object, var_80_string, var_81_int); // 0xd06 NEW_2
	return 0; // 0xd08 Return
}


func_3583(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); // 0xdff PushV
	GetMainOutdoorScene(var_75_object); // 0xe00 Func
	var_77_bool = var_75_object == 0; // 0xe02 NullEq
	if(var_77_bool == 0) goto Label_3594; // 0xe03 JumpB
	var_78_string = "Can't find main outdoor scene"; // 0xe04 PushS
	Trace(var_78_string); // 0xe05 Func
	var_76_object = 0; // 0xe07 SetNull
	var_72_object = var_76_object; // 0xe08 Mov
	return 4; // 0xe09 Return
	
Label_3594:
	GetMap(var_76_object); // 0xe0a ObjFunc
	var_72_object = var_76_object; // 0xe0c Mov
	return 4; // 0xe0d Return
}


