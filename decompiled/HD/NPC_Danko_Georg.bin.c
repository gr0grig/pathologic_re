task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xe2 PushI
	if(var_48_int == 0) goto Label_546; // 0xe3 JumpB
	func_6814(); // 0xe5 NEW_2
	var_50_int = 13228; // 0xe7 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xe8 Eq
	if(var_51_bool == 0) goto Label_239; // 0xe9 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xea PushV
	var_52_object = var_1_object; // 0xeb MovT
	var_53_object = var_0_object; // 0xec MovT
	func_7304(); // 0xed NEW_2
	
Label_239:
	var_56_int = 13232; // 0xef PushI
	var_57_bool = var_47_cvector == var_56_int; // 0xf0 Eq
	if(var_57_bool == 0) goto Label_247; // 0xf1 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xf2 PushV
	var_58_object = var_1_object; // 0xf3 MovT
	var_59_object = var_0_object; // 0xf4 MovT
	func_7292(); // 0xf5 NEW_2
	
Label_247:
	var_62_int = 13236; // 0xf7 PushI
	var_63_bool = var_47_cvector == var_62_int; // 0xf8 Eq
	if(var_63_bool == 0) goto Label_255; // 0xf9 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xfa PushV
	var_64_object = var_1_object; // 0xfb MovT
	var_65_object = var_0_object; // 0xfc MovT
	func_7298(); // 0xfd NEW_2
	
Label_255:
	var_68_int = 13227; // 0xff PushI
	var_69_bool = var_46_bool == var_68_int; // 0x100 Eq
	if(var_69_bool == 0) goto Label_342; // 0x101 JumpB
	var_70_string = ""; // 0x102 PushV
	var_70_string = "Neutral"; // 0x103 MovS
	func_203(var_47_cvector, var_70_string); // 0x104 NEW_2
	var_87_int = 512009; // 0x106 PushI
	SetMessage(var_87_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_88_bool = 0; // 0x10b PushV
	var_88_bool = 0; // 0x10c MovB
	var_89_bool = 0; var_90_object = Obj(); // 0x10d PushV
	var_90_object = var_1_object; // 0x10e MovT
	func_7707(var_90_object); // 0x10f NEW_2
	if(var_89_bool == 0) goto Label_280; // 0x111 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x112 PushV
	var_98_object = var_1_object; // 0x113 MovT
	func_7719(var_98_object); // 0x114 NEW_2
	if(var_97_bool == 0) goto Label_280; // 0x116 JumpB
	var_88_bool = 1; // 0x117 MovB
	
Label_280:
	if(var_88_bool == 0) goto Label_286; // 0x118 JumpB
	var_103_int = 512010; // 0x119 PushI
	var_104_int = 13230; // 0x11a PushI
	var_105_int = 13228; // 0x11b PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x11c TObjFunc
	
Label_286:
	var_106_bool = 0; // 0x11e PushV
	var_106_bool = 0; // 0x11f MovB
	var_107_bool = 0; // 0x120 PushV
	var_107_bool = 0; // 0x121 MovB
	var_108_bool = 0; // 0x122 PushV
	var_108_bool = 0; // 0x123 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x124 PushV
	var_110_object = var_1_object; // 0x125 MovT
	func_7647(var_110_object); // 0x126 NEW_2
	var_115_bool = var_109_bool == 0; // 0x128 Not
	if(var_115_bool == 0) goto Label_305; // 0x129 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x12a PushV
	var_117_object = var_1_object; // 0x12b MovT
	func_7659(var_117_object); // 0x12c NEW_2
	var_122_bool = var_116_bool == 0; // 0x12e Not
	if(var_122_bool == 0) goto Label_305; // 0x12f JumpB
	var_108_bool = 1; // 0x130 MovB
	
Label_305:
	if(var_108_bool == 0) goto Label_313; // 0x131 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x132 PushV
	var_124_object = var_1_object; // 0x133 MovT
	func_7671(var_124_object); // 0x134 NEW_2
	var_129_bool = var_123_bool == 0; // 0x136 Not
	if(var_129_bool == 0) goto Label_313; // 0x137 JumpB
	var_107_bool = 1; // 0x138 MovB
	
Label_313:
	if(var_107_bool == 0) goto Label_320; // 0x139 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x13a PushV
	var_131_object = var_1_object; // 0x13b MovT
	func_7683(var_131_object); // 0x13c NEW_2
	if(var_130_bool == 0) goto Label_320; // 0x13e JumpB
	var_106_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_106_bool == 0) goto Label_326; // 0x140 JumpB
	var_136_int = 512014; // 0x141 PushI
	var_137_int = 13233; // 0x142 PushI
	var_138_int = 13232; // 0x143 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x144 TObjFunc
	
Label_326:
	var_139_bool = 0; var_140_object = Obj(); // 0x146 PushV
	var_140_object = var_1_object; // 0x147 MovT
	func_7695(var_140_object); // 0x148 NEW_2
	if(var_139_bool == 0) goto Label_336; // 0x14a JumpB
	var_145_int = 512018; // 0x14b PushI
	var_146_int = 3560; // 0x14c PushI
	var_147_int = 13236; // 0x14d PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x14e TObjFunc
	
Label_336:
	var_148_int = 512011; // 0x150 PushI
	var_149_int = -1; // 0x151 PushI
	var_150_int = 13229; // 0x152 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_151_int = 3560; // 0x156 PushI
	var_152_bool = var_46_bool == var_151_int; // 0x157 Eq
	if(var_152_bool == 0) goto Label_365; // 0x158 JumpB
	var_153_string = ""; // 0x159 PushV
	var_153_string = "Neutral"; // 0x15a MovS
	func_203(var_47_cvector, var_153_string); // 0x15b NEW_2
	var_154_int = 503289; // 0x15d PushI
	SetMessage(var_154_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_155_int = 503290; // 0x162 PushI
	var_156_int = 3562; // 0x163 PushI
	var_157_int = 3561; // 0x164 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x165 TObjFunc
	var_158_int = 503298; // 0x167 PushI
	var_159_int = 3572; // 0x168 PushI
	var_160_int = 3571; // 0x169 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_161_int = 3572; // 0x16d PushI
	var_162_bool = var_46_bool == var_161_int; // 0x16e Eq
	if(var_162_bool == 0) goto Label_388; // 0x16f JumpB
	var_163_string = ""; // 0x170 PushV
	var_163_string = "Neutral"; // 0x171 MovS
	func_203(var_47_cvector, var_163_string); // 0x172 NEW_2
	var_164_int = 503299; // 0x174 PushI
	SetMessage(var_164_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_165_int = 503300; // 0x179 PushI
	var_166_int = 3562; // 0x17a PushI
	var_167_int = 3573; // 0x17b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x17c TObjFunc
	var_168_int = 503301; // 0x17e PushI
	var_169_int = 3564; // 0x17f PushI
	var_170_int = 3575; // 0x180 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_171_int = 3562; // 0x184 PushI
	var_172_bool = var_46_bool == var_171_int; // 0x185 Eq
	if(var_172_bool == 0) goto Label_411; // 0x186 JumpB
	var_173_string = ""; // 0x187 PushV
	var_173_string = "Neutral"; // 0x188 MovS
	func_203(var_47_cvector, var_173_string); // 0x189 NEW_2
	var_174_int = 503291; // 0x18b PushI
	SetMessage(var_174_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_175_int = 503292; // 0x190 PushI
	var_176_int = 3564; // 0x191 PushI
	var_177_int = 3563; // 0x192 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x193 TObjFunc
	var_178_int = 503295; // 0x195 PushI
	var_179_int = 3564; // 0x196 PushI
	var_180_int = 3566; // 0x197 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x198 TObjFunc
	return 0; // 0x19a Return
	
Label_411:
	var_181_int = 3564; // 0x19b PushI
	var_182_bool = var_46_bool == var_181_int; // 0x19c Eq
	if(var_182_bool == 0) goto Label_434; // 0x19d JumpB
	var_183_string = ""; // 0x19e PushV
	var_183_string = "Distrust"; // 0x19f MovS
	func_203(var_47_cvector, var_183_string); // 0x1a0 NEW_2
	var_184_int = 503293; // 0x1a2 PushI
	SetMessage(var_184_int); // 0x1a3 TObjFunc
	ClearReplies(); // 0x1a5 TObjFunc
	var_185_int = 503294; // 0x1a7 PushI
	var_186_int = 3568; // 0x1a8 PushI
	var_187_int = 3565; // 0x1a9 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1aa TObjFunc
	var_188_int = 503297; // 0x1ac PushI
	var_189_int = 3568; // 0x1ad PushI
	var_190_int = 3569; // 0x1ae PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_191_int = 3568; // 0x1b2 PushI
	var_192_bool = var_46_bool == var_191_int; // 0x1b3 Eq
	if(var_192_bool == 0) goto Label_457; // 0x1b4 JumpB
	var_193_string = ""; // 0x1b5 PushV
	var_193_string = "Neutral"; // 0x1b6 MovS
	func_203(var_47_cvector, var_193_string); // 0x1b7 NEW_2
	var_194_int = 503296; // 0x1b9 PushI
	SetMessage(var_194_int); // 0x1ba TObjFunc
	ClearReplies(); // 0x1bc TObjFunc
	var_195_int = 503302; // 0x1be PushI
	var_196_int = 3578; // 0x1bf PushI
	var_197_int = 3577; // 0x1c0 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1c1 TObjFunc
	var_198_int = 503305; // 0x1c3 PushI
	var_199_int = 3578; // 0x1c4 PushI
	var_200_int = 3580; // 0x1c5 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1c6 TObjFunc
	return 0; // 0x1c8 Return
	
Label_457:
	var_201_int = 3578; // 0x1c9 PushI
	var_202_bool = var_46_bool == var_201_int; // 0x1ca Eq
	if(var_202_bool == 0) goto Label_475; // 0x1cb JumpB
	var_203_string = ""; // 0x1cc PushV
	var_203_string = "Neutral"; // 0x1cd MovS
	func_203(var_47_cvector, var_203_string); // 0x1ce NEW_2
	var_204_int = 503303; // 0x1d0 PushI
	SetMessage(var_204_int); // 0x1d1 TObjFunc
	ClearReplies(); // 0x1d3 TObjFunc
	var_205_int = 503304; // 0x1d5 PushI
	var_206_int = -1; // 0x1d6 PushI
	var_207_int = 3579; // 0x1d7 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1d8 TObjFunc
	return 0; // 0x1da Return
	
Label_475:
	var_208_int = 13233; // 0x1db PushI
	var_209_bool = var_46_bool == var_208_int; // 0x1dc Eq
	if(var_209_bool == 0) goto Label_493; // 0x1dd JumpB
	var_210_string = ""; // 0x1de PushV
	var_210_string = "Neutral"; // 0x1df MovS
	func_203(var_47_cvector, var_210_string); // 0x1e0 NEW_2
	var_211_int = 512015; // 0x1e2 PushI
	SetMessage(var_211_int); // 0x1e3 TObjFunc
	ClearReplies(); // 0x1e5 TObjFunc
	var_212_int = 512016; // 0x1e7 PushI
	var_213_int = 13235; // 0x1e8 PushI
	var_214_int = 13234; // 0x1e9 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1ea TObjFunc
	return 0; // 0x1ec Return
	
Label_493:
	var_215_int = 13235; // 0x1ed PushI
	var_216_bool = var_46_bool == var_215_int; // 0x1ee Eq
	if(var_216_bool == 0) goto Label_516; // 0x1ef JumpB
	var_217_string = ""; // 0x1f0 PushV
	var_217_string = "Neutral"; // 0x1f1 MovS
	func_203(var_47_cvector, var_217_string); // 0x1f2 NEW_2
	var_218_int = 512017; // 0x1f4 PushI
	SetMessage(var_218_int); // 0x1f5 TObjFunc
	ClearReplies(); // 0x1f7 TObjFunc
	var_219_int = 536134; // 0x1f9 PushI
	var_220_int = -1; // 0x1fa PushI
	var_221_int = 37893; // 0x1fb PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1fc TObjFunc
	var_222_int = 536135; // 0x1fe PushI
	var_223_int = -1; // 0x1ff PushI
	var_224_int = 37894; // 0x200 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_225_int = 13230; // 0x204 PushI
	var_226_bool = var_46_bool == var_225_int; // 0x205 Eq
	if(var_226_bool == 0) goto Label_534; // 0x206 JumpB
	var_227_string = ""; // 0x207 PushV
	var_227_string = "Anger"; // 0x208 MovS
	func_203(var_47_cvector, var_227_string); // 0x209 NEW_2
	var_228_int = 512012; // 0x20b PushI
	SetMessage(var_228_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_229_int = 512013; // 0x210 PushI
	var_230_int = -1; // 0x211 PushI
	var_231_int = 13231; // 0x212 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_3_string = 1; // 0x216 TMovB
	var_232_bool = 0; // 0x217 PushV
	func_6948(var_232_bool); // 0x218 NEW_2
	if(var_232_bool == 0) goto Label_542; // 0x21a JumpB
	lshStopAnimation(); // 0x21b Func
	goto Label_544; // 0x21d Jump
	
Label_544:
	return 0; // 0x220 Return
	
Label_542:
	StopAnimation(); // 0x21e Func
	
Label_546:
	return 0; // 0x222 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x378 PushI
	if(var_48_int == 0) goto Label_2557; // 0x379 JumpB
	func_6814(); // 0x37b NEW_2
	var_50_int = 32944; // 0x37d PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x37e Eq
	if(var_51_bool == 0) goto Label_906; // 0x37f JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x380 PushV
	var_52_object = var_1_object; // 0x381 MovT
	var_53_object = var_0_object; // 0x382 MovT
	func_6976(); // 0x383 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x385 PushV
	var_108_object = var_1_object; // 0x386 MovT
	var_109_object = var_0_object; // 0x387 MovT
	func_7210(); // 0x388 NEW_2
	
Label_906:
	var_134_int = 32945; // 0x38a PushI
	var_135_bool = var_47_cvector == var_134_int; // 0x38b Eq
	if(var_135_bool == 0) goto Label_919; // 0x38c JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x38d PushV
	var_136_object = var_1_object; // 0x38e MovT
	var_137_object = var_0_object; // 0x38f MovT
	func_6976(); // 0x390 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x392 PushV
	var_138_object = var_1_object; // 0x393 MovT
	var_139_object = var_0_object; // 0x394 MovT
	func_7210(); // 0x395 NEW_2
	
Label_919:
	var_140_int = 34603; // 0x397 PushI
	var_141_bool = var_47_cvector == var_140_int; // 0x398 Eq
	if(var_141_bool == 0) goto Label_932; // 0x399 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x39a PushV
	var_142_object = var_1_object; // 0x39b MovT
	var_143_object = var_0_object; // 0x39c MovT
	func_6976(); // 0x39d NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x39f PushV
	var_144_object = var_1_object; // 0x3a0 MovT
	var_145_object = var_0_object; // 0x3a1 MovT
	func_7210(); // 0x3a2 NEW_2
	
Label_932:
	var_146_int = 23067; // 0x3a4 PushI
	var_147_bool = var_47_cvector == var_146_int; // 0x3a5 Eq
	if(var_147_bool == 0) goto Label_940; // 0x3a6 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x3a7 PushV
	var_148_object = var_1_object; // 0x3a8 MovT
	var_149_object = var_0_object; // 0x3a9 MovT
	func_7011(); // 0x3aa NEW_2
	
Label_940:
	var_164_int = 23065; // 0x3ac PushI
	var_165_bool = var_47_cvector == var_164_int; // 0x3ad Eq
	if(var_165_bool == 0) goto Label_948; // 0x3ae JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x3af PushV
	var_166_object = var_1_object; // 0x3b0 MovT
	var_167_object = var_0_object; // 0x3b1 MovT
	func_7011(); // 0x3b2 NEW_2
	
Label_948:
	var_168_int = 5360; // 0x3b4 PushI
	var_169_bool = var_47_cvector == var_168_int; // 0x3b5 Eq
	if(var_169_bool == 0) goto Label_961; // 0x3b6 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x3b7 PushV
	var_170_object = var_1_object; // 0x3b8 MovT
	var_171_object = var_0_object; // 0x3b9 MovT
	func_7021(); // 0x3ba NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x3bc PushV
	var_174_object = var_1_object; // 0x3bd MovT
	var_175_object = var_0_object; // 0x3be MovT
	func_7011(); // 0x3bf NEW_2
	
Label_961:
	var_176_int = 5359; // 0x3c1 PushI
	var_177_bool = var_47_cvector == var_176_int; // 0x3c2 Eq
	if(var_177_bool == 0) goto Label_974; // 0x3c3 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x3c4 PushV
	var_178_object = var_1_object; // 0x3c5 MovT
	var_179_object = var_0_object; // 0x3c6 MovT
	func_7021(); // 0x3c7 NEW_2
	var_180_object = Obj(); var_181_object = Obj(); // 0x3c9 PushV
	var_180_object = var_1_object; // 0x3ca MovT
	var_181_object = var_0_object; // 0x3cb MovT
	func_7011(); // 0x3cc NEW_2
	
Label_974:
	var_182_int = 32991; // 0x3ce PushI
	var_183_bool = var_47_cvector == var_182_int; // 0x3cf Eq
	if(var_183_bool == 0) goto Label_987; // 0x3d0 JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x3d1 PushV
	var_184_object = var_1_object; // 0x3d2 MovT
	var_185_object = var_0_object; // 0x3d3 MovT
	func_6976(); // 0x3d4 NEW_2
	var_186_object = Obj(); var_187_object = Obj(); // 0x3d6 PushV
	var_186_object = var_1_object; // 0x3d7 MovT
	var_187_object = var_0_object; // 0x3d8 MovT
	func_7210(); // 0x3d9 NEW_2
	
Label_987:
	var_188_int = 8418; // 0x3db PushI
	var_189_bool = var_47_cvector == var_188_int; // 0x3dc Eq
	if(var_189_bool == 0) goto Label_995; // 0x3dd JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x3de PushV
	var_190_object = var_1_object; // 0x3df MovT
	var_191_object = var_0_object; // 0x3e0 MovT
	func_7238(); // 0x3e1 NEW_2
	
Label_995:
	var_194_int = 5341; // 0x3e3 PushI
	var_195_bool = var_47_cvector == var_194_int; // 0x3e4 Eq
	if(var_195_bool == 0) goto Label_1003; // 0x3e5 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x3e6 PushV
	var_196_object = var_1_object; // 0x3e7 MovT
	var_197_object = var_0_object; // 0x3e8 MovT
	func_7244(); // 0x3e9 NEW_2
	
Label_1003:
	var_200_int = 5342; // 0x3eb PushI
	var_201_bool = var_47_cvector == var_200_int; // 0x3ec Eq
	if(var_201_bool == 0) goto Label_1011; // 0x3ed JumpB
	var_202_object = Obj(); var_203_object = Obj(); // 0x3ee PushV
	var_202_object = var_1_object; // 0x3ef MovT
	var_203_object = var_0_object; // 0x3f0 MovT
	func_7244(); // 0x3f1 NEW_2
	
Label_1011:
	var_204_int = 5347; // 0x3f3 PushI
	var_205_bool = var_47_cvector == var_204_int; // 0x3f4 Eq
	if(var_205_bool == 0) goto Label_1019; // 0x3f5 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0x3f6 PushV
	var_206_object = var_1_object; // 0x3f7 MovT
	var_207_object = var_0_object; // 0x3f8 MovT
	func_7244(); // 0x3f9 NEW_2
	
Label_1019:
	var_208_int = 8440; // 0x3fb PushI
	var_209_bool = var_47_cvector == var_208_int; // 0x3fc Eq
	if(var_209_bool == 0) goto Label_1027; // 0x3fd JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x3fe PushV
	var_210_object = var_1_object; // 0x3ff MovT
	var_211_object = var_0_object; // 0x400 MovT
	func_7244(); // 0x401 NEW_2
	
Label_1027:
	var_212_int = 32992; // 0x403 PushI
	var_213_bool = var_47_cvector == var_212_int; // 0x404 Eq
	if(var_213_bool == 0) goto Label_1035; // 0x405 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x406 PushV
	var_214_object = var_1_object; // 0x407 MovT
	var_215_object = var_0_object; // 0x408 MovT
	func_7122(); // 0x409 NEW_2
	
Label_1035:
	var_218_int = 32994; // 0x40b PushI
	var_219_bool = var_47_cvector == var_218_int; // 0x40c Eq
	if(var_219_bool == 0) goto Label_1043; // 0x40d JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x40e PushV
	var_220_object = var_1_object; // 0x40f MovT
	var_221_object = var_0_object; // 0x410 MovT
	func_7072(); // 0x411 NEW_2
	
Label_1043:
	var_224_int = 32925; // 0x413 PushI
	var_225_bool = var_46_bool == var_224_int; // 0x414 Eq
	if(var_225_bool == 0) goto Label_1245; // 0x415 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x416 PushV
	var_227_object = var_1_object; // 0x417 MovT
	func_7515(var_227_object); // 0x418 NEW_2
	if(var_226_bool == 0) goto Label_1086; // 0x41a JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x41b PushV
	var_234_object = var_1_object; // 0x41c MovT
	var_235_object = var_0_object; // 0x41d MovT
	func_7232(); // 0x41e NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0x420 PushV
	var_238_object = var_1_object; // 0x421 MovT
	var_239_object = var_0_object; // 0x422 MovT
	func_7027(); // 0x423 NEW_2
	var_248_string = ""; // 0x425 PushV
	var_248_string = "Anger"; // 0x426 MovS
	func_865(var_47_cvector, var_248_string); // 0x427 NEW_2
	var_265_int = 531566; // 0x429 PushI
	SetMessage(var_265_int); // 0x42a TObjFunc
	ClearReplies(); // 0x42c TObjFunc
	var_266_int = 531567; // 0x42e PushI
	var_267_int = 32927; // 0x42f PushI
	var_268_int = 32926; // 0x430 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x431 TObjFunc
	var_269_int = 531608; // 0x433 PushI
	var_270_int = 32978; // 0x434 PushI
	var_271_int = 32977; // 0x435 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x436 TObjFunc
	var_272_int = 531614; // 0x438 PushI
	var_273_int = 32986; // 0x439 PushI
	var_274_int = 32985; // 0x43a PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x43b TObjFunc
	return 0; // 0x43d Return
	
Label_1086:
	var_275_bool = 0; var_276_object = Obj(); // 0x43e PushV
	var_276_object = var_1_object; // 0x43f MovT
	func_7346(var_276_object); // 0x440 NEW_2
	if(var_275_bool == 0) goto Label_1111; // 0x442 JumpB
	var_281_string = ""; // 0x443 PushV
	var_281_string = "Neutral"; // 0x444 MovS
	func_865(var_47_cvector, var_281_string); // 0x445 NEW_2
	var_282_int = 504850; // 0x447 PushI
	SetMessage(var_282_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_283_int = 504879; // 0x44c PushI
	var_284_int = 5370; // 0x44d PushI
	var_285_int = 5353; // 0x44e PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x44f TObjFunc
	var_286_int = 504890; // 0x451 PushI
	var_287_int = 5354; // 0x452 PushI
	var_288_int = 5367; // 0x453 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x454 TObjFunc
	return 0; // 0x456 Return
	
Label_1111:
	var_289_string = ""; // 0x457 PushV
	var_289_string = "Neutral"; // 0x458 MovS
	func_865(var_47_cvector, var_289_string); // 0x459 NEW_2
	var_290_int = 507627; // 0x45b PushI
	SetMessage(var_290_int); // 0x45c TObjFunc
	ClearReplies(); // 0x45e TObjFunc
	var_291_bool = 0; var_292_object = Obj(); // 0x460 PushV
	var_292_object = var_1_object; // 0x461 MovT
	func_7334(var_292_object); // 0x462 NEW_2
	if(var_291_bool == 0) goto Label_1130; // 0x464 JumpB
	var_297_int = 531617; // 0x465 PushI
	var_298_int = 32990; // 0x466 PushI
	var_299_int = 32989; // 0x467 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x468 TObjFunc
	
Label_1130:
	var_300_bool = 0; // 0x46a PushV
	var_300_bool = 0; // 0x46b MovB
	var_301_bool = 0; // 0x46c PushV
	var_301_bool = 0; // 0x46d MovB
	var_302_bool = 0; var_303_object = Obj(); // 0x46e PushV
	var_303_object = var_1_object; // 0x46f MovT
	func_7527(var_303_object); // 0x470 NEW_2
	if(var_302_bool == 0) goto Label_1146; // 0x472 JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x473 PushV
	var_309_object = var_1_object; // 0x474 MovT
	func_7322(var_309_object); // 0x475 NEW_2
	var_314_bool = var_308_bool == 0; // 0x477 Not
	if(var_314_bool == 0) goto Label_1146; // 0x478 JumpB
	var_301_bool = 1; // 0x479 MovB
	
Label_1146:
	if(var_301_bool == 0) goto Label_1154; // 0x47a JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x47b PushV
	var_316_object = var_1_object; // 0x47c MovT
	func_7334(var_316_object); // 0x47d NEW_2
	var_317_bool = var_315_bool == 0; // 0x47f Not
	if(var_317_bool == 0) goto Label_1154; // 0x480 JumpB
	var_300_bool = 1; // 0x481 MovB
	
Label_1154:
	if(var_300_bool == 0) goto Label_1160; // 0x482 JumpB
	var_318_int = 507629; // 0x483 PushI
	var_319_int = 5329; // 0x484 PushI
	var_320_int = 8418; // 0x485 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x486 TObjFunc
	
Label_1160:
	var_321_bool = 0; // 0x488 PushV
	var_321_bool = 0; // 0x489 MovB
	var_322_bool = 0; // 0x48a PushV
	var_322_bool = 0; // 0x48b MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x48c PushV
	var_324_object = var_1_object; // 0x48d MovT
	func_7539(var_324_object); // 0x48e NEW_2
	if(var_323_bool == 0) goto Label_1176; // 0x490 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x491 PushV
	var_330_object = var_1_object; // 0x492 MovT
	func_7322(var_330_object); // 0x493 NEW_2
	var_331_bool = var_329_bool == 0; // 0x495 Not
	if(var_331_bool == 0) goto Label_1176; // 0x496 JumpB
	var_322_bool = 1; // 0x497 MovB
	
Label_1176:
	if(var_322_bool == 0) goto Label_1184; // 0x498 JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x499 PushV
	var_333_object = var_1_object; // 0x49a MovT
	func_7334(var_333_object); // 0x49b NEW_2
	var_334_bool = var_332_bool == 0; // 0x49d Not
	if(var_334_bool == 0) goto Label_1184; // 0x49e JumpB
	var_321_bool = 1; // 0x49f MovB
	
Label_1184:
	if(var_321_bool == 0) goto Label_1190; // 0x4a0 JumpB
	var_335_int = 507632; // 0x4a1 PushI
	var_336_int = 5334; // 0x4a2 PushI
	var_337_int = 8421; // 0x4a3 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x4a4 TObjFunc
	
Label_1190:
	var_338_bool = 0; // 0x4a6 PushV
	var_338_bool = 0; // 0x4a7 MovB
	var_339_bool = 0; // 0x4a8 PushV
	var_339_bool = 0; // 0x4a9 MovB
	var_340_bool = 0; var_341_object = Obj(); // 0x4aa PushV
	var_341_object = var_1_object; // 0x4ab MovT
	func_7491(var_341_object); // 0x4ac NEW_2
	if(var_340_bool == 0) goto Label_1206; // 0x4ae JumpB
	var_346_bool = 0; var_347_object = Obj(); // 0x4af PushV
	var_347_object = var_1_object; // 0x4b0 MovT
	func_7334(var_347_object); // 0x4b1 NEW_2
	var_348_bool = var_346_bool == 0; // 0x4b3 Not
	if(var_348_bool == 0) goto Label_1206; // 0x4b4 JumpB
	var_339_bool = 1; // 0x4b5 MovB
	
Label_1206:
	if(var_339_bool == 0) goto Label_1214; // 0x4b6 JumpB
	var_349_bool = 0; var_350_object = Obj(); // 0x4b7 PushV
	var_350_object = var_1_object; // 0x4b8 MovT
	func_7322(var_350_object); // 0x4b9 NEW_2
	var_351_bool = var_349_bool == 0; // 0x4bb Not
	if(var_351_bool == 0) goto Label_1214; // 0x4bc JumpB
	var_338_bool = 1; // 0x4bd MovB
	
Label_1214:
	if(var_338_bool == 0) goto Label_1220; // 0x4be JumpB
	var_352_int = 531620; // 0x4bf PushI
	var_353_int = 32993; // 0x4c0 PushI
	var_354_int = 32992; // 0x4c1 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x4c2 TObjFunc
	
Label_1220:
	var_355_bool = 0; // 0x4c4 PushV
	var_355_bool = 0; // 0x4c5 MovB
	var_356_bool = 0; var_357_object = Obj(); // 0x4c6 PushV
	var_357_object = var_1_object; // 0x4c7 MovT
	func_7358(var_357_object); // 0x4c8 NEW_2
	if(var_356_bool == 0) goto Label_1233; // 0x4ca JumpB
	var_362_bool = 0; var_363_object = Obj(); // 0x4cb PushV
	var_363_object = var_1_object; // 0x4cc MovT
	func_7503(var_363_object); // 0x4cd NEW_2
	if(var_362_bool == 0) goto Label_1233; // 0x4cf JumpB
	var_355_bool = 1; // 0x4d0 MovB
	
Label_1233:
	if(var_355_bool == 0) goto Label_1239; // 0x4d1 JumpB
	var_368_int = 531622; // 0x4d2 PushI
	var_369_int = 32995; // 0x4d3 PushI
	var_370_int = 32994; // 0x4d4 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x4d5 TObjFunc
	
Label_1239:
	var_371_int = 507658; // 0x4d7 PushI
	var_372_int = -1; // 0x4d8 PushI
	var_373_int = 8451; // 0x4d9 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x4da TObjFunc
	return 0; // 0x4dc Return
	
Label_1245:
	var_374_int = 32995; // 0x4dd PushI
	var_375_bool = var_46_bool == var_374_int; // 0x4de Eq
	if(var_375_bool == 0) goto Label_1263; // 0x4df JumpB
	var_376_string = ""; // 0x4e0 PushV
	var_376_string = "Neutral"; // 0x4e1 MovS
	func_865(var_47_cvector, var_376_string); // 0x4e2 NEW_2
	var_377_int = 531623; // 0x4e4 PushI
	SetMessage(var_377_int); // 0x4e5 TObjFunc
	ClearReplies(); // 0x4e7 TObjFunc
	var_378_int = 531624; // 0x4e9 PushI
	var_379_int = 34337; // 0x4ea PushI
	var_380_int = 32996; // 0x4eb PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x4ec TObjFunc
	return 0; // 0x4ee Return
	
Label_1263:
	var_381_int = 34337; // 0x4ef PushI
	var_382_bool = var_46_bool == var_381_int; // 0x4f0 Eq
	if(var_382_bool == 0) goto Label_1281; // 0x4f1 JumpB
	var_383_string = ""; // 0x4f2 PushV
	var_383_string = "Neutral"; // 0x4f3 MovS
	func_865(var_47_cvector, var_383_string); // 0x4f4 NEW_2
	var_384_int = 532852; // 0x4f6 PushI
	SetMessage(var_384_int); // 0x4f7 TObjFunc
	ClearReplies(); // 0x4f9 TObjFunc
	var_385_int = 532853; // 0x4fb PushI
	var_386_int = -1; // 0x4fc PushI
	var_387_int = 34338; // 0x4fd PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x4fe TObjFunc
	return 0; // 0x500 Return
	
Label_1281:
	var_388_int = 32993; // 0x501 PushI
	var_389_bool = var_46_bool == var_388_int; // 0x502 Eq
	if(var_389_bool == 0) goto Label_1304; // 0x503 JumpB
	var_390_string = ""; // 0x504 PushV
	var_390_string = "Jeer"; // 0x505 MovS
	func_865(var_47_cvector, var_390_string); // 0x506 NEW_2
	var_391_int = 531621; // 0x508 PushI
	SetMessage(var_391_int); // 0x509 TObjFunc
	ClearReplies(); // 0x50b TObjFunc
	var_392_int = 507630; // 0x50d PushI
	var_393_int = 8420; // 0x50e PushI
	var_394_int = 8419; // 0x50f PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x510 TObjFunc
	var_395_int = 532849; // 0x512 PushI
	var_396_int = 34334; // 0x513 PushI
	var_397_int = 34333; // 0x514 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x515 TObjFunc
	return 0; // 0x517 Return
	
Label_1304:
	var_398_int = 8420; // 0x518 PushI
	var_399_bool = var_46_bool == var_398_int; // 0x519 Eq
	if(var_399_bool == 0) goto Label_1322; // 0x51a JumpB
	var_400_string = ""; // 0x51b PushV
	var_400_string = "Jeer"; // 0x51c MovS
	func_865(var_47_cvector, var_400_string); // 0x51d NEW_2
	var_401_int = 507631; // 0x51f PushI
	SetMessage(var_401_int); // 0x520 TObjFunc
	ClearReplies(); // 0x522 TObjFunc
	var_402_int = 507633; // 0x524 PushI
	var_403_int = 34334; // 0x525 PushI
	var_404_int = 8422; // 0x526 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x527 TObjFunc
	return 0; // 0x529 Return
	
Label_1322:
	var_405_int = 34334; // 0x52a PushI
	var_406_bool = var_46_bool == var_405_int; // 0x52b Eq
	if(var_406_bool == 0) goto Label_1340; // 0x52c JumpB
	var_407_string = ""; // 0x52d PushV
	var_407_string = "Neutral"; // 0x52e MovS
	func_865(var_47_cvector, var_407_string); // 0x52f NEW_2
	var_408_int = 532850; // 0x531 PushI
	SetMessage(var_408_int); // 0x532 TObjFunc
	ClearReplies(); // 0x534 TObjFunc
	var_409_int = 532851; // 0x536 PushI
	var_410_int = -1; // 0x537 PushI
	var_411_int = 34336; // 0x538 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x539 TObjFunc
	return 0; // 0x53b Return
	
Label_1340:
	var_412_int = 5334; // 0x53c PushI
	var_413_bool = var_46_bool == var_412_int; // 0x53d Eq
	if(var_413_bool == 0) goto Label_1379; // 0x53e JumpB
	var_414_object = Obj(); var_415_object = Obj(); // 0x53f PushV
	var_414_object = var_1_object; // 0x540 MovT
	var_415_object = var_0_object; // 0x541 MovT
	func_7250(); // 0x542 NEW_2
	var_418_string = ""; // 0x544 PushV
	var_418_string = "Neutral"; // 0x545 MovS
	func_865(var_47_cvector, var_418_string); // 0x546 NEW_2
	var_419_int = 504862; // 0x548 PushI
	SetMessage(var_419_int); // 0x549 TObjFunc
	ClearReplies(); // 0x54b TObjFunc
	var_420_int = 504863; // 0x54d PushI
	var_421_int = 5336; // 0x54e PushI
	var_422_int = 5335; // 0x54f PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x550 TObjFunc
	var_423_int = 504875; // 0x552 PushI
	var_424_int = 5414; // 0x553 PushI
	var_425_int = 5348; // 0x554 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x555 TObjFunc
	var_426_bool = 0; var_427_object = Obj(); // 0x557 PushV
	var_427_object = var_1_object; // 0x558 MovT
	func_7479(var_427_object); // 0x559 NEW_2
	var_432_bool = var_426_bool == 0; // 0x55b Not
	if(var_432_bool == 0) goto Label_1378; // 0x55c JumpB
	var_433_int = 507643; // 0x55d PushI
	var_434_int = 8435; // 0x55e PushI
	var_435_int = 8434; // 0x55f PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x560 TObjFunc
	
Label_1378:
	return 0; // 0x562 Return
	
Label_1379:
	var_436_int = 8435; // 0x563 PushI
	var_437_bool = var_46_bool == var_436_int; // 0x564 Eq
	if(var_437_bool == 0) goto Label_1397; // 0x565 JumpB
	var_438_string = ""; // 0x566 PushV
	var_438_string = "Neutral"; // 0x567 MovS
	func_865(var_47_cvector, var_438_string); // 0x568 NEW_2
	var_439_int = 507644; // 0x56a PushI
	SetMessage(var_439_int); // 0x56b TObjFunc
	ClearReplies(); // 0x56d TObjFunc
	var_440_int = 507645; // 0x56f PushI
	var_441_int = 8437; // 0x570 PushI
	var_442_int = 8436; // 0x571 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_443_int = 8437; // 0x575 PushI
	var_444_bool = var_46_bool == var_443_int; // 0x576 Eq
	if(var_444_bool == 0) goto Label_1415; // 0x577 JumpB
	var_445_string = ""; // 0x578 PushV
	var_445_string = "Jeer"; // 0x579 MovS
	func_865(var_47_cvector, var_445_string); // 0x57a NEW_2
	var_446_int = 507646; // 0x57c PushI
	SetMessage(var_446_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_447_int = 507647; // 0x581 PushI
	var_448_int = 5336; // 0x582 PushI
	var_449_int = 8438; // 0x583 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x584 TObjFunc
	return 0; // 0x586 Return
	
Label_1415:
	var_450_int = 5414; // 0x587 PushI
	var_451_bool = var_46_bool == var_450_int; // 0x588 Eq
	if(var_451_bool == 0) goto Label_1438; // 0x589 JumpB
	var_452_string = ""; // 0x58a PushV
	var_452_string = "Neutral"; // 0x58b MovS
	func_865(var_47_cvector, var_452_string); // 0x58c NEW_2
	var_453_int = 504926; // 0x58e PushI
	SetMessage(var_453_int); // 0x58f TObjFunc
	ClearReplies(); // 0x591 TObjFunc
	var_454_int = 504927; // 0x593 PushI
	var_455_int = 8441; // 0x594 PushI
	var_456_int = 5415; // 0x595 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x596 TObjFunc
	var_457_int = 507648; // 0x598 PushI
	var_458_int = -1; // 0x599 PushI
	var_459_int = 8440; // 0x59a PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x59b TObjFunc
	return 0; // 0x59d Return
	
Label_1438:
	var_460_int = 8441; // 0x59e PushI
	var_461_bool = var_46_bool == var_460_int; // 0x59f Eq
	if(var_461_bool == 0) goto Label_1456; // 0x5a0 JumpB
	var_462_string = ""; // 0x5a1 PushV
	var_462_string = "Neutral"; // 0x5a2 MovS
	func_865(var_47_cvector, var_462_string); // 0x5a3 NEW_2
	var_463_int = 507649; // 0x5a5 PushI
	SetMessage(var_463_int); // 0x5a6 TObjFunc
	ClearReplies(); // 0x5a8 TObjFunc
	var_464_int = 507650; // 0x5aa PushI
	var_465_int = 5338; // 0x5ab PushI
	var_466_int = 8442; // 0x5ac PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x5ad TObjFunc
	return 0; // 0x5af Return
	
Label_1456:
	var_467_int = 5336; // 0x5b0 PushI
	var_468_bool = var_46_bool == var_467_int; // 0x5b1 Eq
	if(var_468_bool == 0) goto Label_1479; // 0x5b2 JumpB
	var_469_string = ""; // 0x5b3 PushV
	var_469_string = "Distrust"; // 0x5b4 MovS
	func_865(var_47_cvector, var_469_string); // 0x5b5 NEW_2
	var_470_int = 504864; // 0x5b7 PushI
	SetMessage(var_470_int); // 0x5b8 TObjFunc
	ClearReplies(); // 0x5ba TObjFunc
	var_471_int = 504865; // 0x5bc PushI
	var_472_int = 5338; // 0x5bd PushI
	var_473_int = 5337; // 0x5be PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x5bf TObjFunc
	var_474_int = 504871; // 0x5c1 PushI
	var_475_int = 5344; // 0x5c2 PushI
	var_476_int = 5343; // 0x5c3 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x5c4 TObjFunc
	return 0; // 0x5c6 Return
	
Label_1479:
	var_477_int = 5344; // 0x5c7 PushI
	var_478_bool = var_46_bool == var_477_int; // 0x5c8 Eq
	if(var_478_bool == 0) goto Label_1502; // 0x5c9 JumpB
	var_479_string = ""; // 0x5ca PushV
	var_479_string = "Anger"; // 0x5cb MovS
	func_865(var_47_cvector, var_479_string); // 0x5cc NEW_2
	var_480_int = 504872; // 0x5ce PushI
	SetMessage(var_480_int); // 0x5cf TObjFunc
	ClearReplies(); // 0x5d1 TObjFunc
	var_481_int = 504873; // 0x5d3 PushI
	var_482_int = 5338; // 0x5d4 PushI
	var_483_int = 5345; // 0x5d5 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x5d6 TObjFunc
	var_484_int = 504874; // 0x5d8 PushI
	var_485_int = -1; // 0x5d9 PushI
	var_486_int = 5347; // 0x5da PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_487_int = 5338; // 0x5de PushI
	var_488_bool = var_46_bool == var_487_int; // 0x5df Eq
	if(var_488_bool == 0) goto Label_1520; // 0x5e0 JumpB
	var_489_string = ""; // 0x5e1 PushV
	var_489_string = "Distrust"; // 0x5e2 MovS
	func_865(var_47_cvector, var_489_string); // 0x5e3 NEW_2
	var_490_int = 504866; // 0x5e5 PushI
	SetMessage(var_490_int); // 0x5e6 TObjFunc
	ClearReplies(); // 0x5e8 TObjFunc
	var_491_int = 504867; // 0x5ea PushI
	var_492_int = 5340; // 0x5eb PushI
	var_493_int = 5339; // 0x5ec PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x5ed TObjFunc
	return 0; // 0x5ef Return
	
Label_1520:
	var_494_int = 5340; // 0x5f0 PushI
	var_495_bool = var_46_bool == var_494_int; // 0x5f1 Eq
	if(var_495_bool == 0) goto Label_1543; // 0x5f2 JumpB
	var_496_string = ""; // 0x5f3 PushV
	var_496_string = "Neutral"; // 0x5f4 MovS
	func_865(var_47_cvector, var_496_string); // 0x5f5 NEW_2
	var_497_int = 504868; // 0x5f7 PushI
	SetMessage(var_497_int); // 0x5f8 TObjFunc
	ClearReplies(); // 0x5fa TObjFunc
	var_498_int = 504869; // 0x5fc PushI
	var_499_int = -1; // 0x5fd PushI
	var_500_int = 5341; // 0x5fe PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x5ff TObjFunc
	var_501_int = 504870; // 0x601 PushI
	var_502_int = -1; // 0x602 PushI
	var_503_int = 5342; // 0x603 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x604 TObjFunc
	return 0; // 0x606 Return
	
Label_1543:
	var_504_int = 5329; // 0x607 PushI
	var_505_bool = var_46_bool == var_504_int; // 0x608 Eq
	if(var_505_bool == 0) goto Label_1561; // 0x609 JumpB
	var_506_string = ""; // 0x60a PushV
	var_506_string = "Jeer"; // 0x60b MovS
	func_865(var_47_cvector, var_506_string); // 0x60c NEW_2
	var_507_int = 504857; // 0x60e PushI
	SetMessage(var_507_int); // 0x60f TObjFunc
	ClearReplies(); // 0x611 TObjFunc
	var_508_int = 504858; // 0x613 PushI
	var_509_int = 5374; // 0x614 PushI
	var_510_int = 5330; // 0x615 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x616 TObjFunc
	return 0; // 0x618 Return
	
Label_1561:
	var_511_int = 5374; // 0x619 PushI
	var_512_bool = var_46_bool == var_511_int; // 0x61a Eq
	if(var_512_bool == 0) goto Label_1584; // 0x61b JumpB
	var_513_string = ""; // 0x61c PushV
	var_513_string = "Jeer"; // 0x61d MovS
	func_865(var_47_cvector, var_513_string); // 0x61e NEW_2
	var_514_int = 504895; // 0x620 PushI
	SetMessage(var_514_int); // 0x621 TObjFunc
	ClearReplies(); // 0x623 TObjFunc
	var_515_int = 504896; // 0x625 PushI
	var_516_int = 5377; // 0x626 PushI
	var_517_int = 5375; // 0x627 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x628 TObjFunc
	var_518_int = 504897; // 0x62a PushI
	var_519_int = 5377; // 0x62b PushI
	var_520_int = 5376; // 0x62c PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x62d TObjFunc
	return 0; // 0x62f Return
	
Label_1584:
	var_521_int = 5377; // 0x630 PushI
	var_522_bool = var_46_bool == var_521_int; // 0x631 Eq
	if(var_522_bool == 0) goto Label_1607; // 0x632 JumpB
	var_523_string = ""; // 0x633 PushV
	var_523_string = "Jeer"; // 0x634 MovS
	func_865(var_47_cvector, var_523_string); // 0x635 NEW_2
	var_524_int = 504898; // 0x637 PushI
	SetMessage(var_524_int); // 0x638 TObjFunc
	ClearReplies(); // 0x63a TObjFunc
	var_525_int = 504899; // 0x63c PushI
	var_526_int = 5380; // 0x63d PushI
	var_527_int = 5378; // 0x63e PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x63f TObjFunc
	var_528_int = 504913; // 0x641 PushI
	var_529_int = 5396; // 0x642 PushI
	var_530_int = 5395; // 0x643 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x644 TObjFunc
	return 0; // 0x646 Return
	
Label_1607:
	var_531_int = 5396; // 0x647 PushI
	var_532_bool = var_46_bool == var_531_int; // 0x648 Eq
	if(var_532_bool == 0) goto Label_1630; // 0x649 JumpB
	var_533_string = ""; // 0x64a PushV
	var_533_string = "Neutral"; // 0x64b MovS
	func_865(var_47_cvector, var_533_string); // 0x64c NEW_2
	var_534_int = 504914; // 0x64e PushI
	SetMessage(var_534_int); // 0x64f TObjFunc
	ClearReplies(); // 0x651 TObjFunc
	var_535_int = 504915; // 0x653 PushI
	var_536_int = 5380; // 0x654 PushI
	var_537_int = 5397; // 0x655 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x656 TObjFunc
	var_538_int = 532846; // 0x658 PushI
	var_539_int = -1; // 0x659 PushI
	var_540_int = 34330; // 0x65a PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x65b TObjFunc
	return 0; // 0x65d Return
	
Label_1630:
	var_541_int = 5380; // 0x65e PushI
	var_542_bool = var_46_bool == var_541_int; // 0x65f Eq
	if(var_542_bool == 0) goto Label_1658; // 0x660 JumpB
	var_543_string = ""; // 0x661 PushV
	var_543_string = "Neutral"; // 0x662 MovS
	func_865(var_47_cvector, var_543_string); // 0x663 NEW_2
	var_544_int = 504900; // 0x665 PushI
	SetMessage(var_544_int); // 0x666 TObjFunc
	ClearReplies(); // 0x668 TObjFunc
	var_545_int = 504901; // 0x66a PushI
	var_546_int = 5382; // 0x66b PushI
	var_547_int = 5381; // 0x66c PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x66d TObjFunc
	var_548_int = 504916; // 0x66f PushI
	var_549_int = 5382; // 0x670 PushI
	var_550_int = 5399; // 0x671 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x672 TObjFunc
	var_551_int = 504917; // 0x674 PushI
	var_552_int = 5402; // 0x675 PushI
	var_553_int = 5401; // 0x676 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x677 TObjFunc
	return 0; // 0x679 Return
	
Label_1658:
	var_554_int = 5402; // 0x67a PushI
	var_555_bool = var_46_bool == var_554_int; // 0x67b Eq
	if(var_555_bool == 0) goto Label_1681; // 0x67c JumpB
	var_556_string = ""; // 0x67d PushV
	var_556_string = "Neutral"; // 0x67e MovS
	func_865(var_47_cvector, var_556_string); // 0x67f NEW_2
	var_557_int = 504918; // 0x681 PushI
	SetMessage(var_557_int); // 0x682 TObjFunc
	ClearReplies(); // 0x684 TObjFunc
	var_558_int = 504919; // 0x686 PushI
	var_559_int = 5382; // 0x687 PushI
	var_560_int = 5403; // 0x688 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x689 TObjFunc
	var_561_int = 532847; // 0x68b PushI
	var_562_int = -1; // 0x68c PushI
	var_563_int = 34331; // 0x68d PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x68e TObjFunc
	return 0; // 0x690 Return
	
Label_1681:
	var_564_int = 5382; // 0x691 PushI
	var_565_bool = var_46_bool == var_564_int; // 0x692 Eq
	if(var_565_bool == 0) goto Label_1734; // 0x693 JumpB
	var_566_object = Obj(); var_567_object = Obj(); // 0x694 PushV
	var_566_object = var_1_object; // 0x695 MovT
	var_567_object = var_0_object; // 0x696 MovT
	func_7268(); // 0x697 NEW_2
	var_570_object = Obj(); var_571_object = Obj(); // 0x699 PushV
	var_570_object = var_1_object; // 0x69a MovT
	var_571_object = var_0_object; // 0x69b MovT
	func_7262(); // 0x69c NEW_2
	var_574_object = Obj(); var_575_object = Obj(); // 0x69e PushV
	var_574_object = var_1_object; // 0x69f MovT
	var_575_object = var_0_object; // 0x6a0 MovT
	func_7256(); // 0x6a1 NEW_2
	var_578_object = Obj(); var_579_object = Obj(); // 0x6a3 PushV
	var_578_object = var_1_object; // 0x6a4 MovT
	var_579_object = var_0_object; // 0x6a5 MovT
	func_7280(); // 0x6a6 NEW_2
	var_582_object = Obj(); var_583_object = Obj(); // 0x6a8 PushV
	var_582_object = var_1_object; // 0x6a9 MovT
	var_583_object = var_0_object; // 0x6aa MovT
	func_7286(); // 0x6ab NEW_2
	var_586_string = ""; // 0x6ad PushV
	var_586_string = "Anger"; // 0x6ae MovS
	func_865(var_47_cvector, var_586_string); // 0x6af NEW_2
	var_587_int = 504902; // 0x6b1 PushI
	SetMessage(var_587_int); // 0x6b2 TObjFunc
	ClearReplies(); // 0x6b4 TObjFunc
	var_588_int = 504903; // 0x6b6 PushI
	var_589_int = 5385; // 0x6b7 PushI
	var_590_int = 5383; // 0x6b8 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x6b9 TObjFunc
	var_591_int = 504925; // 0x6bb PushI
	var_592_int = 5409; // 0x6bc PushI
	var_593_int = 5412; // 0x6bd PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x6be TObjFunc
	var_594_int = 504920; // 0x6c0 PushI
	var_595_int = 5385; // 0x6c1 PushI
	var_596_int = 5405; // 0x6c2 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_597_int = 5385; // 0x6c6 PushI
	var_598_bool = var_46_bool == var_597_int; // 0x6c7 Eq
	if(var_598_bool == 0) goto Label_1762; // 0x6c8 JumpB
	var_599_string = ""; // 0x6c9 PushV
	var_599_string = "Anger"; // 0x6ca MovS
	func_865(var_47_cvector, var_599_string); // 0x6cb NEW_2
	var_600_int = 504905; // 0x6cd PushI
	SetMessage(var_600_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_601_int = 504906; // 0x6d2 PushI
	var_602_int = 5388; // 0x6d3 PushI
	var_603_int = 5386; // 0x6d4 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x6d5 TObjFunc
	var_604_int = 504907; // 0x6d7 PushI
	var_605_int = 5388; // 0x6d8 PushI
	var_606_int = 5387; // 0x6d9 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x6da TObjFunc
	var_607_int = 504922; // 0x6dc PushI
	var_608_int = 5409; // 0x6dd PushI
	var_609_int = 5408; // 0x6de PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x6df TObjFunc
	return 0; // 0x6e1 Return
	
Label_1762:
	var_610_int = 5409; // 0x6e2 PushI
	var_611_bool = var_46_bool == var_610_int; // 0x6e3 Eq
	if(var_611_bool == 0) goto Label_1780; // 0x6e4 JumpB
	var_612_string = ""; // 0x6e5 PushV
	var_612_string = "Neutral"; // 0x6e6 MovS
	func_865(var_47_cvector, var_612_string); // 0x6e7 NEW_2
	var_613_int = 504923; // 0x6e9 PushI
	SetMessage(var_613_int); // 0x6ea TObjFunc
	ClearReplies(); // 0x6ec TObjFunc
	var_614_int = 504924; // 0x6ee PushI
	var_615_int = 5388; // 0x6ef PushI
	var_616_int = 5410; // 0x6f0 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_617_int = 5388; // 0x6f4 PushI
	var_618_bool = var_46_bool == var_617_int; // 0x6f5 Eq
	if(var_618_bool == 0) goto Label_1803; // 0x6f6 JumpB
	var_619_string = ""; // 0x6f7 PushV
	var_619_string = "Neutral"; // 0x6f8 MovS
	func_865(var_47_cvector, var_619_string); // 0x6f9 NEW_2
	var_620_int = 504908; // 0x6fb PushI
	SetMessage(var_620_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_621_int = 504909; // 0x700 PushI
	var_622_int = 5392; // 0x701 PushI
	var_623_int = 5390; // 0x702 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x703 TObjFunc
	var_624_int = 504910; // 0x705 PushI
	var_625_int = 5392; // 0x706 PushI
	var_626_int = 5391; // 0x707 PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x708 TObjFunc
	return 0; // 0x70a Return
	
Label_1803:
	var_627_int = 5392; // 0x70b PushI
	var_628_bool = var_46_bool == var_627_int; // 0x70c Eq
	if(var_628_bool == 0) goto Label_1826; // 0x70d JumpB
	var_629_string = ""; // 0x70e PushV
	var_629_string = "Neutral"; // 0x70f MovS
	func_865(var_47_cvector, var_629_string); // 0x710 NEW_2
	var_630_int = 504911; // 0x712 PushI
	SetMessage(var_630_int); // 0x713 TObjFunc
	ClearReplies(); // 0x715 TObjFunc
	var_631_int = 504912; // 0x717 PushI
	var_632_int = -1; // 0x718 PushI
	var_633_int = 5394; // 0x719 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x71a TObjFunc
	var_634_int = 504921; // 0x71c PushI
	var_635_int = -1; // 0x71d PushI
	var_636_int = 5407; // 0x71e PushI
	AddReply(var_634_int, var_635_int, var_636_int); // 0x71f TObjFunc
	return 0; // 0x721 Return
	
Label_1826:
	var_637_int = 32990; // 0x722 PushI
	var_638_bool = var_46_bool == var_637_int; // 0x723 Eq
	if(var_638_bool == 0) goto Label_1849; // 0x724 JumpB
	var_639_string = ""; // 0x725 PushV
	var_639_string = "Distrust"; // 0x726 MovS
	func_865(var_47_cvector, var_639_string); // 0x727 NEW_2
	var_640_int = 531618; // 0x729 PushI
	SetMessage(var_640_int); // 0x72a TObjFunc
	ClearReplies(); // 0x72c TObjFunc
	var_641_int = 532837; // 0x72e PushI
	var_642_int = 34319; // 0x72f PushI
	var_643_int = 34318; // 0x730 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x731 TObjFunc
	var_644_int = 532833; // 0x733 PushI
	var_645_int = 34315; // 0x734 PushI
	var_646_int = 34314; // 0x735 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x736 TObjFunc
	return 0; // 0x738 Return
	
Label_1849:
	var_647_int = 34315; // 0x739 PushI
	var_648_bool = var_46_bool == var_647_int; // 0x73a Eq
	if(var_648_bool == 0) goto Label_1872; // 0x73b JumpB
	var_649_string = ""; // 0x73c PushV
	var_649_string = "Neutral"; // 0x73d MovS
	func_865(var_47_cvector, var_649_string); // 0x73e NEW_2
	var_650_int = 532834; // 0x740 PushI
	SetMessage(var_650_int); // 0x741 TObjFunc
	ClearReplies(); // 0x743 TObjFunc
	var_651_int = 532843; // 0x745 PushI
	var_652_int = 34327; // 0x746 PushI
	var_653_int = 34326; // 0x747 PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x748 TObjFunc
	var_654_int = 532839; // 0x74a PushI
	var_655_int = 34321; // 0x74b PushI
	var_656_int = 34320; // 0x74c PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x74d TObjFunc
	return 0; // 0x74f Return
	
Label_1872:
	var_657_int = 34327; // 0x750 PushI
	var_658_bool = var_46_bool == var_657_int; // 0x751 Eq
	if(var_658_bool == 0) goto Label_1890; // 0x752 JumpB
	var_659_string = ""; // 0x753 PushV
	var_659_string = "Neutral"; // 0x754 MovS
	func_865(var_47_cvector, var_659_string); // 0x755 NEW_2
	var_660_int = 532844; // 0x757 PushI
	SetMessage(var_660_int); // 0x758 TObjFunc
	ClearReplies(); // 0x75a TObjFunc
	var_661_int = 532845; // 0x75c PushI
	var_662_int = 34319; // 0x75d PushI
	var_663_int = 34328; // 0x75e PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x75f TObjFunc
	return 0; // 0x761 Return
	
Label_1890:
	var_664_int = 34319; // 0x762 PushI
	var_665_bool = var_46_bool == var_664_int; // 0x763 Eq
	if(var_665_bool == 0) goto Label_1908; // 0x764 JumpB
	var_666_string = ""; // 0x765 PushV
	var_666_string = "Distrust"; // 0x766 MovS
	func_865(var_47_cvector, var_666_string); // 0x767 NEW_2
	var_667_int = 532838; // 0x769 PushI
	SetMessage(var_667_int); // 0x76a TObjFunc
	ClearReplies(); // 0x76c TObjFunc
	var_668_int = 532835; // 0x76e PushI
	var_669_int = 34321; // 0x76f PushI
	var_670_int = 34316; // 0x770 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x771 TObjFunc
	return 0; // 0x773 Return
	
Label_1908:
	var_671_int = 34321; // 0x774 PushI
	var_672_bool = var_46_bool == var_671_int; // 0x775 Eq
	if(var_672_bool == 0) goto Label_1931; // 0x776 JumpB
	var_673_string = ""; // 0x777 PushV
	var_673_string = "Neutral"; // 0x778 MovS
	func_865(var_47_cvector, var_673_string); // 0x779 NEW_2
	var_674_int = 532840; // 0x77b PushI
	SetMessage(var_674_int); // 0x77c TObjFunc
	ClearReplies(); // 0x77e TObjFunc
	var_675_int = 531619; // 0x780 PushI
	var_676_int = -1; // 0x781 PushI
	var_677_int = 32991; // 0x782 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x783 TObjFunc
	var_678_int = 532842; // 0x785 PushI
	var_679_int = -1; // 0x786 PushI
	var_680_int = 34325; // 0x787 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x788 TObjFunc
	return 0; // 0x78a Return
	
Label_1931:
	var_681_int = 5354; // 0x78b PushI
	var_682_bool = var_46_bool == var_681_int; // 0x78c Eq
	if(var_682_bool == 0) goto Label_1954; // 0x78d JumpB
	var_683_string = ""; // 0x78e PushV
	var_683_string = "Distrust"; // 0x78f MovS
	func_865(var_47_cvector, var_683_string); // 0x790 NEW_2
	var_684_int = 504880; // 0x792 PushI
	SetMessage(var_684_int); // 0x793 TObjFunc
	ClearReplies(); // 0x795 TObjFunc
	var_685_int = 504881; // 0x797 PushI
	var_686_int = 5356; // 0x798 PushI
	var_687_int = 5355; // 0x799 PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x79a TObjFunc
	var_688_int = 504889; // 0x79c PushI
	var_689_int = 5356; // 0x79d PushI
	var_690_int = 5365; // 0x79e PushI
	AddReply(var_688_int, var_689_int, var_690_int); // 0x79f TObjFunc
	return 0; // 0x7a1 Return
	
Label_1954:
	var_691_int = 5356; // 0x7a2 PushI
	var_692_bool = var_46_bool == var_691_int; // 0x7a3 Eq
	if(var_692_bool == 0) goto Label_1977; // 0x7a4 JumpB
	var_693_string = ""; // 0x7a5 PushV
	var_693_string = "Anger"; // 0x7a6 MovS
	func_865(var_47_cvector, var_693_string); // 0x7a7 NEW_2
	var_694_int = 504882; // 0x7a9 PushI
	SetMessage(var_694_int); // 0x7aa TObjFunc
	ClearReplies(); // 0x7ac TObjFunc
	var_695_int = 504883; // 0x7ae PushI
	var_696_int = 5358; // 0x7af PushI
	var_697_int = 5357; // 0x7b0 PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x7b1 TObjFunc
	var_698_int = 504887; // 0x7b3 PushI
	var_699_int = 5358; // 0x7b4 PushI
	var_700_int = 5361; // 0x7b5 PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x7b6 TObjFunc
	return 0; // 0x7b8 Return
	
Label_1977:
	var_701_int = 5358; // 0x7b9 PushI
	var_702_bool = var_46_bool == var_701_int; // 0x7ba Eq
	if(var_702_bool == 0) goto Label_1995; // 0x7bb JumpB
	var_703_string = ""; // 0x7bc PushV
	var_703_string = "Anger"; // 0x7bd MovS
	func_865(var_47_cvector, var_703_string); // 0x7be NEW_2
	var_704_int = 504884; // 0x7c0 PushI
	SetMessage(var_704_int); // 0x7c1 TObjFunc
	ClearReplies(); // 0x7c3 TObjFunc
	var_705_int = 521895; // 0x7c5 PushI
	var_706_int = 23069; // 0x7c6 PushI
	var_707_int = 23068; // 0x7c7 PushI
	AddReply(var_705_int, var_706_int, var_707_int); // 0x7c8 TObjFunc
	return 0; // 0x7ca Return
	
Label_1995:
	var_708_int = 23069; // 0x7cb PushI
	var_709_bool = var_46_bool == var_708_int; // 0x7cc Eq
	if(var_709_bool == 0) goto Label_2018; // 0x7cd JumpB
	var_710_string = ""; // 0x7ce PushV
	var_710_string = "Distrust"; // 0x7cf MovS
	func_865(var_47_cvector, var_710_string); // 0x7d0 NEW_2
	var_711_int = 521896; // 0x7d2 PushI
	SetMessage(var_711_int); // 0x7d3 TObjFunc
	ClearReplies(); // 0x7d5 TObjFunc
	var_712_int = 504886; // 0x7d7 PushI
	var_713_int = -1; // 0x7d8 PushI
	var_714_int = 5360; // 0x7d9 PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0x7da TObjFunc
	var_715_int = 504885; // 0x7dc PushI
	var_716_int = -1; // 0x7dd PushI
	var_717_int = 5359; // 0x7de PushI
	AddReply(var_715_int, var_716_int, var_717_int); // 0x7df TObjFunc
	return 0; // 0x7e1 Return
	
Label_2018:
	var_718_int = 5370; // 0x7e2 PushI
	var_719_bool = var_46_bool == var_718_int; // 0x7e3 Eq
	if(var_719_bool == 0) goto Label_2041; // 0x7e4 JumpB
	var_720_string = ""; // 0x7e5 PushV
	var_720_string = "Neutral"; // 0x7e6 MovS
	func_865(var_47_cvector, var_720_string); // 0x7e7 NEW_2
	var_721_int = 504892; // 0x7e9 PushI
	SetMessage(var_721_int); // 0x7ea TObjFunc
	ClearReplies(); // 0x7ec TObjFunc
	var_722_int = 504928; // 0x7ee PushI
	var_723_int = 5421; // 0x7ef PushI
	var_724_int = 5416; // 0x7f0 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x7f1 TObjFunc
	var_725_int = 504929; // 0x7f3 PushI
	var_726_int = 5418; // 0x7f4 PushI
	var_727_int = 5417; // 0x7f5 PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x7f6 TObjFunc
	return 0; // 0x7f8 Return
	
Label_2041:
	var_728_int = 5418; // 0x7f9 PushI
	var_729_bool = var_46_bool == var_728_int; // 0x7fa Eq
	if(var_729_bool == 0) goto Label_2059; // 0x7fb JumpB
	var_730_string = ""; // 0x7fc PushV
	var_730_string = "Neutral"; // 0x7fd MovS
	func_865(var_47_cvector, var_730_string); // 0x7fe NEW_2
	var_731_int = 504930; // 0x800 PushI
	SetMessage(var_731_int); // 0x801 TObjFunc
	ClearReplies(); // 0x803 TObjFunc
	var_732_int = 504931; // 0x805 PushI
	var_733_int = 5358; // 0x806 PushI
	var_734_int = 5419; // 0x807 PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x808 TObjFunc
	return 0; // 0x80a Return
	
Label_2059:
	var_735_int = 5421; // 0x80b PushI
	var_736_bool = var_46_bool == var_735_int; // 0x80c Eq
	if(var_736_bool == 0) goto Label_2082; // 0x80d JumpB
	var_737_string = ""; // 0x80e PushV
	var_737_string = "Neutral"; // 0x80f MovS
	func_865(var_47_cvector, var_737_string); // 0x810 NEW_2
	var_738_int = 504932; // 0x812 PushI
	SetMessage(var_738_int); // 0x813 TObjFunc
	ClearReplies(); // 0x815 TObjFunc
	var_739_int = 521889; // 0x817 PushI
	var_740_int = 23062; // 0x818 PushI
	var_741_int = 23061; // 0x819 PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x81a TObjFunc
	var_742_int = 521891; // 0x81c PushI
	var_743_int = 23062; // 0x81d PushI
	var_744_int = 23063; // 0x81e PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x81f TObjFunc
	return 0; // 0x821 Return
	
Label_2082:
	var_745_int = 23062; // 0x822 PushI
	var_746_bool = var_46_bool == var_745_int; // 0x823 Eq
	if(var_746_bool == 0) goto Label_2105; // 0x824 JumpB
	var_747_string = ""; // 0x825 PushV
	var_747_string = "Neutral"; // 0x826 MovS
	func_865(var_47_cvector, var_747_string); // 0x827 NEW_2
	var_748_int = 521890; // 0x829 PushI
	SetMessage(var_748_int); // 0x82a TObjFunc
	ClearReplies(); // 0x82c TObjFunc
	var_749_int = 504893; // 0x82e PushI
	var_750_int = 5354; // 0x82f PushI
	var_751_int = 5371; // 0x830 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0x831 TObjFunc
	var_752_int = 504933; // 0x833 PushI
	var_753_int = 5423; // 0x834 PushI
	var_754_int = 5422; // 0x835 PushI
	AddReply(var_752_int, var_753_int, var_754_int); // 0x836 TObjFunc
	return 0; // 0x838 Return
	
Label_2105:
	var_755_int = 5423; // 0x839 PushI
	var_756_bool = var_46_bool == var_755_int; // 0x83a Eq
	if(var_756_bool == 0) goto Label_2128; // 0x83b JumpB
	var_757_string = ""; // 0x83c PushV
	var_757_string = "Neutral"; // 0x83d MovS
	func_865(var_47_cvector, var_757_string); // 0x83e NEW_2
	var_758_int = 504934; // 0x840 PushI
	SetMessage(var_758_int); // 0x841 TObjFunc
	ClearReplies(); // 0x843 TObjFunc
	var_759_int = 504935; // 0x845 PushI
	var_760_int = 23066; // 0x846 PushI
	var_761_int = 5424; // 0x847 PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0x848 TObjFunc
	var_762_int = 521892; // 0x84a PushI
	var_763_int = -1; // 0x84b PushI
	var_764_int = 23065; // 0x84c PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x84d TObjFunc
	return 0; // 0x84f Return
	
Label_2128:
	var_765_int = 23066; // 0x850 PushI
	var_766_bool = var_46_bool == var_765_int; // 0x851 Eq
	if(var_766_bool == 0) goto Label_2151; // 0x852 JumpB
	var_767_string = ""; // 0x853 PushV
	var_767_string = "Neutral"; // 0x854 MovS
	func_865(var_47_cvector, var_767_string); // 0x855 NEW_2
	var_768_int = 521893; // 0x857 PushI
	SetMessage(var_768_int); // 0x858 TObjFunc
	ClearReplies(); // 0x85a TObjFunc
	var_769_int = 521894; // 0x85c PushI
	var_770_int = -1; // 0x85d PushI
	var_771_int = 23067; // 0x85e PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0x85f TObjFunc
	var_772_int = 542997; // 0x861 PushI
	var_773_int = -1; // 0x862 PushI
	var_774_int = 45445; // 0x863 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x864 TObjFunc
	return 0; // 0x866 Return
	
Label_2151:
	var_775_int = 32986; // 0x867 PushI
	var_776_bool = var_46_bool == var_775_int; // 0x868 Eq
	if(var_776_bool == 0) goto Label_2169; // 0x869 JumpB
	var_777_string = ""; // 0x86a PushV
	var_777_string = "Neutral"; // 0x86b MovS
	func_865(var_47_cvector, var_777_string); // 0x86c NEW_2
	var_778_int = 531615; // 0x86e PushI
	SetMessage(var_778_int); // 0x86f TObjFunc
	ClearReplies(); // 0x871 TObjFunc
	var_779_int = 531616; // 0x873 PushI
	var_780_int = 32927; // 0x874 PushI
	var_781_int = 32987; // 0x875 PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0x876 TObjFunc
	return 0; // 0x878 Return
	
Label_2169:
	var_782_int = 32978; // 0x879 PushI
	var_783_bool = var_46_bool == var_782_int; // 0x87a Eq
	if(var_783_bool == 0) goto Label_2187; // 0x87b JumpB
	var_784_string = ""; // 0x87c PushV
	var_784_string = "Anger"; // 0x87d MovS
	func_865(var_47_cvector, var_784_string); // 0x87e NEW_2
	var_785_int = 531609; // 0x880 PushI
	SetMessage(var_785_int); // 0x881 TObjFunc
	ClearReplies(); // 0x883 TObjFunc
	var_786_int = 531610; // 0x885 PushI
	var_787_int = 32980; // 0x886 PushI
	var_788_int = 32979; // 0x887 PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x888 TObjFunc
	return 0; // 0x88a Return
	
Label_2187:
	var_789_int = 32980; // 0x88b PushI
	var_790_bool = var_46_bool == var_789_int; // 0x88c Eq
	if(var_790_bool == 0) goto Label_2210; // 0x88d JumpB
	var_791_string = ""; // 0x88e PushV
	var_791_string = "Neutral"; // 0x88f MovS
	func_865(var_47_cvector, var_791_string); // 0x890 NEW_2
	var_792_int = 531611; // 0x892 PushI
	SetMessage(var_792_int); // 0x893 TObjFunc
	ClearReplies(); // 0x895 TObjFunc
	var_793_int = 531612; // 0x897 PushI
	var_794_int = 32927; // 0x898 PushI
	var_795_int = 32981; // 0x899 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x89a TObjFunc
	var_796_int = 531613; // 0x89c PushI
	var_797_int = 32931; // 0x89d PushI
	var_798_int = 32983; // 0x89e PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x89f TObjFunc
	return 0; // 0x8a1 Return
	
Label_2210:
	var_799_int = 32927; // 0x8a2 PushI
	var_800_bool = var_46_bool == var_799_int; // 0x8a3 Eq
	if(var_800_bool == 0) goto Label_2233; // 0x8a4 JumpB
	var_801_string = ""; // 0x8a5 PushV
	var_801_string = "Anger"; // 0x8a6 MovS
	func_865(var_47_cvector, var_801_string); // 0x8a7 NEW_2
	var_802_int = 531568; // 0x8a9 PushI
	SetMessage(var_802_int); // 0x8aa TObjFunc
	ClearReplies(); // 0x8ac TObjFunc
	var_803_int = 531569; // 0x8ae PushI
	var_804_int = 32929; // 0x8af PushI
	var_805_int = 32928; // 0x8b0 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0x8b1 TObjFunc
	var_806_int = 531595; // 0x8b3 PushI
	var_807_int = 32960; // 0x8b4 PushI
	var_808_int = 32959; // 0x8b5 PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0x8b6 TObjFunc
	return 0; // 0x8b8 Return
	
Label_2233:
	var_809_int = 32960; // 0x8b9 PushI
	var_810_bool = var_46_bool == var_809_int; // 0x8ba Eq
	if(var_810_bool == 0) goto Label_2256; // 0x8bb JumpB
	var_811_string = ""; // 0x8bc PushV
	var_811_string = "Neutral"; // 0x8bd MovS
	func_865(var_47_cvector, var_811_string); // 0x8be NEW_2
	var_812_int = 531596; // 0x8c0 PushI
	SetMessage(var_812_int); // 0x8c1 TObjFunc
	ClearReplies(); // 0x8c3 TObjFunc
	var_813_int = 531597; // 0x8c5 PushI
	var_814_int = 32962; // 0x8c6 PushI
	var_815_int = 32961; // 0x8c7 PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0x8c8 TObjFunc
	var_816_int = 531607; // 0x8ca PushI
	var_817_int = 32962; // 0x8cb PushI
	var_818_int = 32975; // 0x8cc PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0x8cd TObjFunc
	return 0; // 0x8cf Return
	
Label_2256:
	var_819_int = 32962; // 0x8d0 PushI
	var_820_bool = var_46_bool == var_819_int; // 0x8d1 Eq
	if(var_820_bool == 0) goto Label_2279; // 0x8d2 JumpB
	var_821_string = ""; // 0x8d3 PushV
	var_821_string = "Anger"; // 0x8d4 MovS
	func_865(var_47_cvector, var_821_string); // 0x8d5 NEW_2
	var_822_int = 531598; // 0x8d7 PushI
	SetMessage(var_822_int); // 0x8d8 TObjFunc
	ClearReplies(); // 0x8da TObjFunc
	var_823_int = 531599; // 0x8dc PushI
	var_824_int = 32964; // 0x8dd PushI
	var_825_int = 32963; // 0x8de PushI
	AddReply(var_823_int, var_824_int, var_825_int); // 0x8df TObjFunc
	var_826_int = 531606; // 0x8e1 PushI
	var_827_int = 32933; // 0x8e2 PushI
	var_828_int = 32973; // 0x8e3 PushI
	AddReply(var_826_int, var_827_int, var_828_int); // 0x8e4 TObjFunc
	return 0; // 0x8e6 Return
	
Label_2279:
	var_829_int = 32964; // 0x8e7 PushI
	var_830_bool = var_46_bool == var_829_int; // 0x8e8 Eq
	if(var_830_bool == 0) goto Label_2302; // 0x8e9 JumpB
	var_831_string = ""; // 0x8ea PushV
	var_831_string = "Anger"; // 0x8eb MovS
	func_865(var_47_cvector, var_831_string); // 0x8ec NEW_2
	var_832_int = 531600; // 0x8ee PushI
	SetMessage(var_832_int); // 0x8ef TObjFunc
	ClearReplies(); // 0x8f1 TObjFunc
	var_833_int = 531601; // 0x8f3 PushI
	var_834_int = 32966; // 0x8f4 PushI
	var_835_int = 32965; // 0x8f5 PushI
	AddReply(var_833_int, var_834_int, var_835_int); // 0x8f6 TObjFunc
	var_836_int = 531605; // 0x8f8 PushI
	var_837_int = 32966; // 0x8f9 PushI
	var_838_int = 32971; // 0x8fa PushI
	AddReply(var_836_int, var_837_int, var_838_int); // 0x8fb TObjFunc
	return 0; // 0x8fd Return
	
Label_2302:
	var_839_int = 32966; // 0x8fe PushI
	var_840_bool = var_46_bool == var_839_int; // 0x8ff Eq
	if(var_840_bool == 0) goto Label_2325; // 0x900 JumpB
	var_841_string = ""; // 0x901 PushV
	var_841_string = "Neutral"; // 0x902 MovS
	func_865(var_47_cvector, var_841_string); // 0x903 NEW_2
	var_842_int = 531602; // 0x905 PushI
	SetMessage(var_842_int); // 0x906 TObjFunc
	ClearReplies(); // 0x908 TObjFunc
	var_843_int = 531603; // 0x90a PushI
	var_844_int = 32931; // 0x90b PushI
	var_845_int = 32967; // 0x90c PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0x90d TObjFunc
	var_846_int = 531604; // 0x90f PushI
	var_847_int = 32931; // 0x910 PushI
	var_848_int = 32969; // 0x911 PushI
	AddReply(var_846_int, var_847_int, var_848_int); // 0x912 TObjFunc
	return 0; // 0x914 Return
	
Label_2325:
	var_849_int = 32929; // 0x915 PushI
	var_850_bool = var_46_bool == var_849_int; // 0x916 Eq
	if(var_850_bool == 0) goto Label_2348; // 0x917 JumpB
	var_851_string = ""; // 0x918 PushV
	var_851_string = "Anger"; // 0x919 MovS
	func_865(var_47_cvector, var_851_string); // 0x91a NEW_2
	var_852_int = 531570; // 0x91c PushI
	SetMessage(var_852_int); // 0x91d TObjFunc
	ClearReplies(); // 0x91f TObjFunc
	var_853_int = 531571; // 0x921 PushI
	var_854_int = 32931; // 0x922 PushI
	var_855_int = 32930; // 0x923 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0x924 TObjFunc
	var_856_int = 531594; // 0x926 PushI
	var_857_int = 32931; // 0x927 PushI
	var_858_int = 32957; // 0x928 PushI
	AddReply(var_856_int, var_857_int, var_858_int); // 0x929 TObjFunc
	return 0; // 0x92b Return
	
Label_2348:
	var_859_int = 32931; // 0x92c PushI
	var_860_bool = var_46_bool == var_859_int; // 0x92d Eq
	if(var_860_bool == 0) goto Label_2371; // 0x92e JumpB
	var_861_string = ""; // 0x92f PushV
	var_861_string = "Neutral"; // 0x930 MovS
	func_865(var_47_cvector, var_861_string); // 0x931 NEW_2
	var_862_int = 531572; // 0x933 PushI
	SetMessage(var_862_int); // 0x934 TObjFunc
	ClearReplies(); // 0x936 TObjFunc
	var_863_int = 531573; // 0x938 PushI
	var_864_int = 32933; // 0x939 PushI
	var_865_int = 32932; // 0x93a PushI
	AddReply(var_863_int, var_864_int, var_865_int); // 0x93b TObjFunc
	var_866_int = 531593; // 0x93d PushI
	var_867_int = 32933; // 0x93e PushI
	var_868_int = 32955; // 0x93f PushI
	AddReply(var_866_int, var_867_int, var_868_int); // 0x940 TObjFunc
	return 0; // 0x942 Return
	
Label_2371:
	var_869_int = 32933; // 0x943 PushI
	var_870_bool = var_46_bool == var_869_int; // 0x944 Eq
	if(var_870_bool == 0) goto Label_2394; // 0x945 JumpB
	var_871_string = ""; // 0x946 PushV
	var_871_string = "Neutral"; // 0x947 MovS
	func_865(var_47_cvector, var_871_string); // 0x948 NEW_2
	var_872_int = 531574; // 0x94a PushI
	SetMessage(var_872_int); // 0x94b TObjFunc
	ClearReplies(); // 0x94d TObjFunc
	var_873_int = 531575; // 0x94f PushI
	var_874_int = 32935; // 0x950 PushI
	var_875_int = 32934; // 0x951 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0x952 TObjFunc
	var_876_int = 531590; // 0x954 PushI
	var_877_int = 32952; // 0x955 PushI
	var_878_int = 32951; // 0x956 PushI
	AddReply(var_876_int, var_877_int, var_878_int); // 0x957 TObjFunc
	return 0; // 0x959 Return
	
Label_2394:
	var_879_int = 32952; // 0x95a PushI
	var_880_bool = var_46_bool == var_879_int; // 0x95b Eq
	if(var_880_bool == 0) goto Label_2412; // 0x95c JumpB
	var_881_string = ""; // 0x95d PushV
	var_881_string = "Neutral"; // 0x95e MovS
	func_865(var_47_cvector, var_881_string); // 0x95f NEW_2
	var_882_int = 531591; // 0x961 PushI
	SetMessage(var_882_int); // 0x962 TObjFunc
	ClearReplies(); // 0x964 TObjFunc
	var_883_int = 531592; // 0x966 PushI
	var_884_int = 32935; // 0x967 PushI
	var_885_int = 32953; // 0x968 PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0x969 TObjFunc
	return 0; // 0x96b Return
	
Label_2412:
	var_886_int = 32935; // 0x96c PushI
	var_887_bool = var_46_bool == var_886_int; // 0x96d Eq
	if(var_887_bool == 0) goto Label_2435; // 0x96e JumpB
	var_888_string = ""; // 0x96f PushV
	var_888_string = "Neutral"; // 0x970 MovS
	func_865(var_47_cvector, var_888_string); // 0x971 NEW_2
	var_889_int = 531576; // 0x973 PushI
	SetMessage(var_889_int); // 0x974 TObjFunc
	ClearReplies(); // 0x976 TObjFunc
	var_890_int = 531577; // 0x978 PushI
	var_891_int = 32937; // 0x979 PushI
	var_892_int = 32936; // 0x97a PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0x97b TObjFunc
	var_893_int = 531589; // 0x97d PushI
	var_894_int = 32941; // 0x97e PushI
	var_895_int = 32949; // 0x97f PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0x980 TObjFunc
	return 0; // 0x982 Return
	
Label_2435:
	var_896_int = 32937; // 0x983 PushI
	var_897_bool = var_46_bool == var_896_int; // 0x984 Eq
	if(var_897_bool == 0) goto Label_2458; // 0x985 JumpB
	var_898_string = ""; // 0x986 PushV
	var_898_string = "Neutral"; // 0x987 MovS
	func_865(var_47_cvector, var_898_string); // 0x988 NEW_2
	var_899_int = 531578; // 0x98a PushI
	SetMessage(var_899_int); // 0x98b TObjFunc
	ClearReplies(); // 0x98d TObjFunc
	var_900_int = 531579; // 0x98f PushI
	var_901_int = 32939; // 0x990 PushI
	var_902_int = 32938; // 0x991 PushI
	AddReply(var_900_int, var_901_int, var_902_int); // 0x992 TObjFunc
	var_903_int = 531588; // 0x994 PushI
	var_904_int = 32941; // 0x995 PushI
	var_905_int = 32947; // 0x996 PushI
	AddReply(var_903_int, var_904_int, var_905_int); // 0x997 TObjFunc
	return 0; // 0x999 Return
	
Label_2458:
	var_906_int = 32939; // 0x99a PushI
	var_907_bool = var_46_bool == var_906_int; // 0x99b Eq
	if(var_907_bool == 0) goto Label_2476; // 0x99c JumpB
	var_908_string = ""; // 0x99d PushV
	var_908_string = "Neutral"; // 0x99e MovS
	func_865(var_47_cvector, var_908_string); // 0x99f NEW_2
	var_909_int = 531580; // 0x9a1 PushI
	SetMessage(var_909_int); // 0x9a2 TObjFunc
	ClearReplies(); // 0x9a4 TObjFunc
	var_910_int = 531581; // 0x9a6 PushI
	var_911_int = 32941; // 0x9a7 PushI
	var_912_int = 32940; // 0x9a8 PushI
	AddReply(var_910_int, var_911_int, var_912_int); // 0x9a9 TObjFunc
	return 0; // 0x9ab Return
	
Label_2476:
	var_913_int = 32941; // 0x9ac PushI
	var_914_bool = var_46_bool == var_913_int; // 0x9ad Eq
	if(var_914_bool == 0) goto Label_2499; // 0x9ae JumpB
	var_915_string = ""; // 0x9af PushV
	var_915_string = "Anger"; // 0x9b0 MovS
	func_865(var_47_cvector, var_915_string); // 0x9b1 NEW_2
	var_916_int = 531582; // 0x9b3 PushI
	SetMessage(var_916_int); // 0x9b4 TObjFunc
	ClearReplies(); // 0x9b6 TObjFunc
	var_917_int = 531583; // 0x9b8 PushI
	var_918_int = 34601; // 0x9b9 PushI
	var_919_int = 32942; // 0x9ba PushI
	AddReply(var_917_int, var_918_int, var_919_int); // 0x9bb TObjFunc
	var_920_int = 531587; // 0x9bd PushI
	var_921_int = -1; // 0x9be PushI
	var_922_int = 32946; // 0x9bf PushI
	AddReply(var_920_int, var_921_int, var_922_int); // 0x9c0 TObjFunc
	return 0; // 0x9c2 Return
	
Label_2499:
	var_923_int = 34601; // 0x9c3 PushI
	var_924_bool = var_46_bool == var_923_int; // 0x9c4 Eq
	if(var_924_bool == 0) goto Label_2522; // 0x9c5 JumpB
	var_925_string = ""; // 0x9c6 PushV
	var_925_string = "Jeer"; // 0x9c7 MovS
	func_865(var_47_cvector, var_925_string); // 0x9c8 NEW_2
	var_926_int = 533090; // 0x9ca PushI
	SetMessage(var_926_int); // 0x9cb TObjFunc
	ClearReplies(); // 0x9cd TObjFunc
	var_927_int = 533091; // 0x9cf PushI
	var_928_int = 32943; // 0x9d0 PushI
	var_929_int = 34602; // 0x9d1 PushI
	AddReply(var_927_int, var_928_int, var_929_int); // 0x9d2 TObjFunc
	var_930_int = 533092; // 0x9d4 PushI
	var_931_int = -1; // 0x9d5 PushI
	var_932_int = 34603; // 0x9d6 PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x9d7 TObjFunc
	return 0; // 0x9d9 Return
	
Label_2522:
	var_933_int = 32943; // 0x9da PushI
	var_934_bool = var_46_bool == var_933_int; // 0x9db Eq
	if(var_934_bool == 0) goto Label_2545; // 0x9dc JumpB
	var_935_string = ""; // 0x9dd PushV
	var_935_string = "Jeer"; // 0x9de MovS
	func_865(var_47_cvector, var_935_string); // 0x9df NEW_2
	var_936_int = 531584; // 0x9e1 PushI
	SetMessage(var_936_int); // 0x9e2 TObjFunc
	ClearReplies(); // 0x9e4 TObjFunc
	var_937_int = 531585; // 0x9e6 PushI
	var_938_int = -1; // 0x9e7 PushI
	var_939_int = 32944; // 0x9e8 PushI
	AddReply(var_937_int, var_938_int, var_939_int); // 0x9e9 TObjFunc
	var_940_int = 531586; // 0x9eb PushI
	var_941_int = -1; // 0x9ec PushI
	var_942_int = 32945; // 0x9ed PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0x9ee TObjFunc
	return 0; // 0x9f0 Return
	
Label_2545:
	var_3_string = 1; // 0x9f1 TMovB
	var_943_bool = 0; // 0x9f2 PushV
	func_6948(var_943_bool); // 0x9f3 NEW_2
	if(var_943_bool == 0) goto Label_2553; // 0x9f5 JumpB
	lshStopAnimation(); // 0x9f6 Func
	goto Label_2555; // 0x9f8 Jump
	
Label_2555:
	return 0; // 0x9fb Return
	
Label_2553:
	StopAnimation(); // 0x9f9 Func
	
Label_2557:
	return 0; // 0x9fd Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xadf PushI
	if(var_48_int == 0) goto Label_3222; // 0xae0 JumpB
	func_6814(); // 0xae2 NEW_2
	var_50_int = 7538; // 0xae4 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xae5 Eq
	if(var_51_bool == 0) goto Label_2806; // 0xae6 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xae7 PushV
	var_52_object = var_1_object; // 0xae8 MovT
	var_53_object = var_0_object; // 0xae9 MovT
	func_7101(); // 0xaea NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xaec PushV
	var_56_object = var_1_object; // 0xaed MovT
	var_57_object = var_0_object; // 0xaee MovT
	func_7113(); // 0xaef NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0xaf1 PushV
	var_83_object = var_1_object; // 0xaf2 MovT
	var_84_object = var_0_object; // 0xaf3 MovT
	func_7043(); // 0xaf4 NEW_2
	
Label_2806:
	var_104_int = 7539; // 0xaf6 PushI
	var_105_bool = var_47_cvector == var_104_int; // 0xaf7 Eq
	if(var_105_bool == 0) goto Label_2824; // 0xaf8 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0xaf9 PushV
	var_106_object = var_1_object; // 0xafa MovT
	var_107_object = var_0_object; // 0xafb MovT
	func_7101(); // 0xafc NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0xafe PushV
	var_108_object = var_1_object; // 0xaff MovT
	var_109_object = var_0_object; // 0xb00 MovT
	func_7113(); // 0xb01 NEW_2
	var_110_object = Obj(); var_111_object = Obj(); // 0xb03 PushV
	var_110_object = var_1_object; // 0xb04 MovT
	var_111_object = var_0_object; // 0xb05 MovT
	func_7043(); // 0xb06 NEW_2
	
Label_2824:
	var_112_int = 7542; // 0xb08 PushI
	var_113_bool = var_47_cvector == var_112_int; // 0xb09 Eq
	if(var_113_bool == 0) goto Label_2842; // 0xb0a JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0xb0b PushV
	var_114_object = var_1_object; // 0xb0c MovT
	var_115_object = var_0_object; // 0xb0d MovT
	func_7101(); // 0xb0e NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0xb10 PushV
	var_116_object = var_1_object; // 0xb11 MovT
	var_117_object = var_0_object; // 0xb12 MovT
	func_7113(); // 0xb13 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0xb15 PushV
	var_118_object = var_1_object; // 0xb16 MovT
	var_119_object = var_0_object; // 0xb17 MovT
	func_7043(); // 0xb18 NEW_2
	
Label_2842:
	var_120_int = 7543; // 0xb1a PushI
	var_121_bool = var_47_cvector == var_120_int; // 0xb1b Eq
	if(var_121_bool == 0) goto Label_2860; // 0xb1c JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0xb1d PushV
	var_122_object = var_1_object; // 0xb1e MovT
	var_123_object = var_0_object; // 0xb1f MovT
	func_7101(); // 0xb20 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xb22 PushV
	var_124_object = var_1_object; // 0xb23 MovT
	var_125_object = var_0_object; // 0xb24 MovT
	func_7113(); // 0xb25 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xb27 PushV
	var_126_object = var_1_object; // 0xb28 MovT
	var_127_object = var_0_object; // 0xb29 MovT
	func_7043(); // 0xb2a NEW_2
	
Label_2860:
	var_128_int = 7557; // 0xb2c PushI
	var_129_bool = var_47_cvector == var_128_int; // 0xb2d Eq
	if(var_129_bool == 0) goto Label_2868; // 0xb2e JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0xb2f PushV
	var_130_object = var_1_object; // 0xb30 MovT
	var_131_object = var_0_object; // 0xb31 MovT
	func_7107(); // 0xb32 NEW_2
	
Label_2868:
	var_134_int = 7839; // 0xb34 PushI
	var_135_bool = var_47_cvector == var_134_int; // 0xb35 Eq
	if(var_135_bool == 0) goto Label_2881; // 0xb36 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0xb37 PushV
	var_136_object = var_1_object; // 0xb38 MovT
	var_137_object = var_0_object; // 0xb39 MovT
	func_7107(); // 0xb3a NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xb3c PushV
	var_138_object = var_1_object; // 0xb3d MovT
	var_139_object = var_0_object; // 0xb3e MovT
	func_7113(); // 0xb3f NEW_2
	
Label_2881:
	var_140_int = 7843; // 0xb41 PushI
	var_141_bool = var_47_cvector == var_140_int; // 0xb42 Eq
	if(var_141_bool == 0) goto Label_2894; // 0xb43 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0xb44 PushV
	var_142_object = var_1_object; // 0xb45 MovT
	var_143_object = var_0_object; // 0xb46 MovT
	func_7107(); // 0xb47 NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0xb49 PushV
	var_144_object = var_1_object; // 0xb4a MovT
	var_145_object = var_0_object; // 0xb4b MovT
	func_7113(); // 0xb4c NEW_2
	
Label_2894:
	var_146_int = 7529; // 0xb4e PushI
	var_147_bool = var_46_bool == var_146_int; // 0xb4f Eq
	if(var_147_bool == 0) goto Label_2980; // 0xb50 JumpB
	var_148_bool = 0; // 0xb51 PushV
	var_148_bool = 0; // 0xb52 MovB
	var_149_bool = 0; var_150_object = Obj(); // 0xb53 PushV
	var_150_object = var_1_object; // 0xb54 MovT
	func_7431(var_150_object); // 0xb55 NEW_2
	if(var_149_bool == 0) goto Label_2910; // 0xb57 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0xb58 PushV
	var_156_object = var_1_object; // 0xb59 MovT
	func_7467(var_156_object); // 0xb5a NEW_2
	if(var_155_bool == 0) goto Label_2910; // 0xb5c JumpB
	var_148_bool = 1; // 0xb5d MovB
	
Label_2910:
	if(var_148_bool == 0) goto Label_2941; // 0xb5e JumpB
	var_161_string = ""; // 0xb5f PushV
	var_161_string = "Neutral"; // 0xb60 MovS
	func_2760(var_47_cvector, var_161_string); // 0xb61 NEW_2
	var_178_int = 506829; // 0xb63 PushI
	SetMessage(var_178_int); // 0xb64 TObjFunc
	ClearReplies(); // 0xb66 TObjFunc
	var_179_int = 506830; // 0xb68 PushI
	var_180_int = 7531; // 0xb69 PushI
	var_181_int = 7530; // 0xb6a PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xb6b TObjFunc
	var_182_int = 506844; // 0xb6d PushI
	var_183_int = 7547; // 0xb6e PushI
	var_184_int = 7546; // 0xb6f PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xb70 TObjFunc
	var_185_int = 506849; // 0xb72 PushI
	var_186_int = 7535; // 0xb73 PushI
	var_187_int = 7554; // 0xb74 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xb75 TObjFunc
	var_188_int = 506848; // 0xb77 PushI
	var_189_int = 7547; // 0xb78 PushI
	var_190_int = 7552; // 0xb79 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xb7a TObjFunc
	return 0; // 0xb7c Return
	
Label_2941:
	var_191_string = ""; // 0xb7d PushV
	var_191_string = "Neutral"; // 0xb7e MovS
	func_2760(var_47_cvector, var_191_string); // 0xb7f NEW_2
	var_192_int = 506850; // 0xb81 PushI
	SetMessage(var_192_int); // 0xb82 TObjFunc
	ClearReplies(); // 0xb84 TObjFunc
	var_193_bool = 0; // 0xb86 PushV
	var_193_bool = 0; // 0xb87 MovB
	var_194_bool = 0; var_195_object = Obj(); // 0xb88 PushV
	var_195_object = var_1_object; // 0xb89 MovT
	func_7443(var_195_object); // 0xb8a NEW_2
	if(var_194_bool == 0) goto Label_2963; // 0xb8c JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0xb8d PushV
	var_201_object = var_1_object; // 0xb8e MovT
	func_7455(var_201_object); // 0xb8f NEW_2
	if(var_200_bool == 0) goto Label_2963; // 0xb91 JumpB
	var_193_bool = 1; // 0xb92 MovB
	
Label_2963:
	if(var_193_bool == 0) goto Label_2969; // 0xb93 JumpB
	var_206_int = 506851; // 0xb94 PushI
	var_207_int = 7835; // 0xb95 PushI
	var_208_int = 7557; // 0xb96 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xb97 TObjFunc
	
Label_2969:
	var_209_int = 507536; // 0xb99 PushI
	var_210_int = -1; // 0xb9a PushI
	var_211_int = 8318; // 0xb9b PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xb9c TObjFunc
	var_212_int = 533836; // 0xb9e PushI
	var_213_int = -1; // 0xb9f PushI
	var_214_int = 35386; // 0xba0 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xba1 TObjFunc
	return 0; // 0xba3 Return
	
Label_2980:
	var_215_int = 7835; // 0xba4 PushI
	var_216_bool = var_46_bool == var_215_int; // 0xba5 Eq
	if(var_216_bool == 0) goto Label_3003; // 0xba6 JumpB
	var_217_string = ""; // 0xba7 PushV
	var_217_string = "Anger"; // 0xba8 MovS
	func_2760(var_47_cvector, var_217_string); // 0xba9 NEW_2
	var_218_int = 507116; // 0xbab PushI
	SetMessage(var_218_int); // 0xbac TObjFunc
	ClearReplies(); // 0xbae TObjFunc
	var_219_int = 507117; // 0xbb0 PushI
	var_220_int = 7840; // 0xbb1 PushI
	var_221_int = 7836; // 0xbb2 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xbb3 TObjFunc
	var_222_int = 507118; // 0xbb5 PushI
	var_223_int = 7838; // 0xbb6 PushI
	var_224_int = 7837; // 0xbb7 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xbb8 TObjFunc
	return 0; // 0xbba Return
	
Label_3003:
	var_225_int = 7838; // 0xbbb PushI
	var_226_bool = var_46_bool == var_225_int; // 0xbbc Eq
	if(var_226_bool == 0) goto Label_3026; // 0xbbd JumpB
	var_227_string = ""; // 0xbbe PushV
	var_227_string = "Neutral"; // 0xbbf MovS
	func_2760(var_47_cvector, var_227_string); // 0xbc0 NEW_2
	var_228_int = 507119; // 0xbc2 PushI
	SetMessage(var_228_int); // 0xbc3 TObjFunc
	ClearReplies(); // 0xbc5 TObjFunc
	var_229_int = 507120; // 0xbc7 PushI
	var_230_int = -1; // 0xbc8 PushI
	var_231_int = 7839; // 0xbc9 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xbca TObjFunc
	var_232_int = 507124; // 0xbcc PushI
	var_233_int = -1; // 0xbcd PushI
	var_234_int = 7843; // 0xbce PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xbcf TObjFunc
	return 0; // 0xbd1 Return
	
Label_3026:
	var_235_int = 7840; // 0xbd2 PushI
	var_236_bool = var_46_bool == var_235_int; // 0xbd3 Eq
	if(var_236_bool == 0) goto Label_3049; // 0xbd4 JumpB
	var_237_string = ""; // 0xbd5 PushV
	var_237_string = "Neutral"; // 0xbd6 MovS
	func_2760(var_47_cvector, var_237_string); // 0xbd7 NEW_2
	var_238_int = 507121; // 0xbd9 PushI
	SetMessage(var_238_int); // 0xbda TObjFunc
	ClearReplies(); // 0xbdc TObjFunc
	var_239_int = 507125; // 0xbde PushI
	var_240_int = 7845; // 0xbdf PushI
	var_241_int = 7844; // 0xbe0 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xbe1 TObjFunc
	var_242_int = 507127; // 0xbe3 PushI
	var_243_int = 7847; // 0xbe4 PushI
	var_244_int = 7846; // 0xbe5 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xbe6 TObjFunc
	return 0; // 0xbe8 Return
	
Label_3049:
	var_245_int = 7847; // 0xbe9 PushI
	var_246_bool = var_46_bool == var_245_int; // 0xbea Eq
	if(var_246_bool == 0) goto Label_3067; // 0xbeb JumpB
	var_247_string = ""; // 0xbec PushV
	var_247_string = "Neutral"; // 0xbed MovS
	func_2760(var_47_cvector, var_247_string); // 0xbee NEW_2
	var_248_int = 507128; // 0xbf0 PushI
	SetMessage(var_248_int); // 0xbf1 TObjFunc
	ClearReplies(); // 0xbf3 TObjFunc
	var_249_int = 507129; // 0xbf5 PushI
	var_250_int = 7845; // 0xbf6 PushI
	var_251_int = 7848; // 0xbf7 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xbf8 TObjFunc
	return 0; // 0xbfa Return
	
Label_3067:
	var_252_int = 7845; // 0xbfb PushI
	var_253_bool = var_46_bool == var_252_int; // 0xbfc Eq
	if(var_253_bool == 0) goto Label_3090; // 0xbfd JumpB
	var_254_string = ""; // 0xbfe PushV
	var_254_string = "Neutral"; // 0xbff MovS
	func_2760(var_47_cvector, var_254_string); // 0xc00 NEW_2
	var_255_int = 507126; // 0xc02 PushI
	SetMessage(var_255_int); // 0xc03 TObjFunc
	ClearReplies(); // 0xc05 TObjFunc
	var_256_int = 507122; // 0xc07 PushI
	var_257_int = -1; // 0xc08 PushI
	var_258_int = 7841; // 0xc09 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xc0a TObjFunc
	var_259_int = 507123; // 0xc0c PushI
	var_260_int = -1; // 0xc0d PushI
	var_261_int = 7842; // 0xc0e PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xc0f TObjFunc
	return 0; // 0xc11 Return
	
Label_3090:
	var_262_int = 7547; // 0xc12 PushI
	var_263_bool = var_46_bool == var_262_int; // 0xc13 Eq
	if(var_263_bool == 0) goto Label_3113; // 0xc14 JumpB
	var_264_string = ""; // 0xc15 PushV
	var_264_string = "Anger"; // 0xc16 MovS
	func_2760(var_47_cvector, var_264_string); // 0xc17 NEW_2
	var_265_int = 506845; // 0xc19 PushI
	SetMessage(var_265_int); // 0xc1a TObjFunc
	ClearReplies(); // 0xc1c TObjFunc
	var_266_int = 506846; // 0xc1e PushI
	var_267_int = 7533; // 0xc1f PushI
	var_268_int = 7548; // 0xc20 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xc21 TObjFunc
	var_269_int = 506847; // 0xc23 PushI
	var_270_int = 7533; // 0xc24 PushI
	var_271_int = 7550; // 0xc25 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xc26 TObjFunc
	return 0; // 0xc28 Return
	
Label_3113:
	var_272_int = 7531; // 0xc29 PushI
	var_273_bool = var_46_bool == var_272_int; // 0xc2a Eq
	if(var_273_bool == 0) goto Label_3131; // 0xc2b JumpB
	var_274_string = ""; // 0xc2c PushV
	var_274_string = "Anger"; // 0xc2d MovS
	func_2760(var_47_cvector, var_274_string); // 0xc2e NEW_2
	var_275_int = 506831; // 0xc30 PushI
	SetMessage(var_275_int); // 0xc31 TObjFunc
	ClearReplies(); // 0xc33 TObjFunc
	var_276_int = 506832; // 0xc35 PushI
	var_277_int = 7533; // 0xc36 PushI
	var_278_int = 7532; // 0xc37 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0xc38 TObjFunc
	return 0; // 0xc3a Return
	
Label_3131:
	var_279_int = 7533; // 0xc3b PushI
	var_280_bool = var_46_bool == var_279_int; // 0xc3c Eq
	if(var_280_bool == 0) goto Label_3159; // 0xc3d JumpB
	var_281_string = ""; // 0xc3e PushV
	var_281_string = "Anger"; // 0xc3f MovS
	func_2760(var_47_cvector, var_281_string); // 0xc40 NEW_2
	var_282_int = 506833; // 0xc42 PushI
	SetMessage(var_282_int); // 0xc43 TObjFunc
	ClearReplies(); // 0xc45 TObjFunc
	var_283_int = 506834; // 0xc47 PushI
	var_284_int = 7535; // 0xc48 PushI
	var_285_int = 7534; // 0xc49 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xc4a TObjFunc
	var_286_int = 506843; // 0xc4c PushI
	var_287_int = 7535; // 0xc4d PushI
	var_288_int = 7544; // 0xc4e PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0xc4f TObjFunc
	var_289_int = 506842; // 0xc51 PushI
	var_290_int = -1; // 0xc52 PushI
	var_291_int = 7543; // 0xc53 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xc54 TObjFunc
	return 0; // 0xc56 Return
	
Label_3159:
	var_292_int = 7535; // 0xc57 PushI
	var_293_bool = var_46_bool == var_292_int; // 0xc58 Eq
	if(var_293_bool == 0) goto Label_3187; // 0xc59 JumpB
	var_294_string = ""; // 0xc5a PushV
	var_294_string = "Distrust"; // 0xc5b MovS
	func_2760(var_47_cvector, var_294_string); // 0xc5c NEW_2
	var_295_int = 506835; // 0xc5e PushI
	SetMessage(var_295_int); // 0xc5f TObjFunc
	ClearReplies(); // 0xc61 TObjFunc
	var_296_int = 506836; // 0xc63 PushI
	var_297_int = 7537; // 0xc64 PushI
	var_298_int = 7536; // 0xc65 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xc66 TObjFunc
	var_299_int = 506840; // 0xc68 PushI
	var_300_int = 7537; // 0xc69 PushI
	var_301_int = 7540; // 0xc6a PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xc6b TObjFunc
	var_302_int = 506841; // 0xc6d PushI
	var_303_int = -1; // 0xc6e PushI
	var_304_int = 7542; // 0xc6f PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xc70 TObjFunc
	return 0; // 0xc72 Return
	
Label_3187:
	var_305_int = 7537; // 0xc73 PushI
	var_306_bool = var_46_bool == var_305_int; // 0xc74 Eq
	if(var_306_bool == 0) goto Label_3210; // 0xc75 JumpB
	var_307_string = ""; // 0xc76 PushV
	var_307_string = "Neutral"; // 0xc77 MovS
	func_2760(var_47_cvector, var_307_string); // 0xc78 NEW_2
	var_308_int = 506837; // 0xc7a PushI
	SetMessage(var_308_int); // 0xc7b TObjFunc
	ClearReplies(); // 0xc7d TObjFunc
	var_309_int = 506838; // 0xc7f PushI
	var_310_int = -1; // 0xc80 PushI
	var_311_int = 7538; // 0xc81 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xc82 TObjFunc
	var_312_int = 506839; // 0xc84 PushI
	var_313_int = -1; // 0xc85 PushI
	var_314_int = 7539; // 0xc86 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xc87 TObjFunc
	return 0; // 0xc89 Return
	
Label_3210:
	var_3_string = 1; // 0xc8a TMovB
	var_315_bool = 0; // 0xc8b PushV
	func_6948(var_315_bool); // 0xc8c NEW_2
	if(var_315_bool == 0) goto Label_3218; // 0xc8e JumpB
	lshStopAnimation(); // 0xc8f Func
	goto Label_3220; // 0xc91 Jump
	
Label_3220:
	return 0; // 0xc94 Return
	
Label_3218:
	StopAnimation(); // 0xc92 Func
	
Label_3222:
	return 0; // 0xc96 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xda3 PushI
	if(var_48_int == 0) goto Label_4267; // 0xda4 JumpB
	func_6814(); // 0xda6 NEW_2
	var_50_int = 11255; // 0xda8 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xda9 Eq
	if(var_51_bool == 0) goto Label_3504; // 0xdaa JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xdab PushV
	var_52_object = var_1_object; // 0xdac MovT
	var_53_object = var_0_object; // 0xdad MovT
	func_7170(); // 0xdae NEW_2
	
Label_3504:
	var_111_int = 9939; // 0xdb0 PushI
	var_112_bool = var_47_cvector == var_111_int; // 0xdb1 Eq
	if(var_112_bool == 0) goto Label_3512; // 0xdb2 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0xdb3 PushV
	var_113_object = var_1_object; // 0xdb4 MovT
	var_114_object = var_0_object; // 0xdb5 MovT
	func_7170(); // 0xdb6 NEW_2
	
Label_3512:
	var_115_int = 35971; // 0xdb8 PushI
	var_116_bool = var_47_cvector == var_115_int; // 0xdb9 Eq
	if(var_116_bool == 0) goto Label_3530; // 0xdba JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0xdbb PushV
	var_117_object = var_1_object; // 0xdbc MovT
	var_118_object = var_0_object; // 0xdbd MovT
	func_7128(var_118_object); // 0xdbe NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xdc0 PushV
	var_138_object = var_1_object; // 0xdc1 MovT
	var_139_object = var_0_object; // 0xdc2 MovT
	func_7066(); // 0xdc3 NEW_2
	var_142_object = Obj(); var_143_object = Obj(); // 0xdc5 PushV
	var_142_object = var_1_object; // 0xdc6 MovT
	var_143_object = var_0_object; // 0xdc7 MovT
	func_7138(); // 0xdc8 NEW_2
	
Label_3530:
	var_164_int = 35972; // 0xdca PushI
	var_165_bool = var_47_cvector == var_164_int; // 0xdcb Eq
	if(var_165_bool == 0) goto Label_3538; // 0xdcc JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0xdcd PushV
	var_166_object = var_1_object; // 0xdce MovT
	var_167_object = var_0_object; // 0xdcf MovT
	func_7138(); // 0xdd0 NEW_2
	
Label_3538:
	var_168_int = 11275; // 0xdd2 PushI
	var_169_bool = var_47_cvector == var_168_int; // 0xdd3 Eq
	if(var_169_bool == 0) goto Label_3546; // 0xdd4 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0xdd5 PushV
	var_170_object = var_1_object; // 0xdd6 MovT
	var_171_object = var_0_object; // 0xdd7 MovT
	func_7138(); // 0xdd8 NEW_2
	
Label_3546:
	var_172_int = 9905; // 0xdda PushI
	var_173_bool = var_47_cvector == var_172_int; // 0xddb Eq
	if(var_173_bool == 0) goto Label_3554; // 0xddc JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0xddd PushV
	var_174_object = var_1_object; // 0xdde MovT
	var_175_object = var_0_object; // 0xddf MovT
	func_7170(); // 0xde0 NEW_2
	
Label_3554:
	var_176_int = 12577; // 0xde2 PushI
	var_177_bool = var_47_cvector == var_176_int; // 0xde3 Eq
	if(var_177_bool == 0) goto Label_3562; // 0xde4 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0xde5 PushV
	var_178_object = var_1_object; // 0xde6 MovT
	var_179_object = var_0_object; // 0xde7 MovT
	func_7170(); // 0xde8 NEW_2
	
Label_3562:
	var_180_int = 9918; // 0xdea PushI
	var_181_bool = var_47_cvector == var_180_int; // 0xdeb Eq
	if(var_181_bool == 0) goto Label_3570; // 0xdec JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0xded PushV
	var_182_object = var_1_object; // 0xdee MovT
	var_183_object = var_0_object; // 0xdef MovT
	func_7158(); // 0xdf0 NEW_2
	
Label_3570:
	var_186_int = 11511; // 0xdf2 PushI
	var_187_bool = var_47_cvector == var_186_int; // 0xdf3 Eq
	if(var_187_bool == 0) goto Label_3578; // 0xdf4 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0xdf5 PushV
	var_188_object = var_1_object; // 0xdf6 MovT
	var_189_object = var_0_object; // 0xdf7 MovT
	func_7226(); // 0xdf8 NEW_2
	
Label_3578:
	var_192_int = 11515; // 0xdfa PushI
	var_193_bool = var_47_cvector == var_192_int; // 0xdfb Eq
	if(var_193_bool == 0) goto Label_3596; // 0xdfc JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0xdfd PushV
	var_194_object = var_1_object; // 0xdfe MovT
	var_195_object = var_0_object; // 0xdff MovT
	func_7066(); // 0xe00 NEW_2
	var_196_object = Obj(); var_197_object = Obj(); // 0xe02 PushV
	var_196_object = var_1_object; // 0xe03 MovT
	var_197_object = var_0_object; // 0xe04 MovT
	func_7200(); // 0xe05 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0xe07 PushV
	var_209_object = var_1_object; // 0xe08 MovT
	var_210_object = var_0_object; // 0xe09 MovT
	func_6950(var_210_object); // 0xe0a NEW_2
	
Label_3596:
	var_214_int = 35973; // 0xe0c PushI
	var_215_bool = var_47_cvector == var_214_int; // 0xe0d Eq
	if(var_215_bool == 0) goto Label_3614; // 0xe0e JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0xe0f PushV
	var_216_object = var_1_object; // 0xe10 MovT
	var_217_object = var_0_object; // 0xe11 MovT
	func_6950(var_217_object); // 0xe12 NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0xe14 PushV
	var_218_object = var_1_object; // 0xe15 MovT
	var_219_object = var_0_object; // 0xe16 MovT
	func_7066(); // 0xe17 NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0xe19 PushV
	var_220_object = var_1_object; // 0xe1a MovT
	var_221_object = var_0_object; // 0xe1b MovT
	func_7200(); // 0xe1c NEW_2
	
Label_3614:
	var_222_int = 9915; // 0xe1e PushI
	var_223_bool = var_47_cvector == var_222_int; // 0xe1f Eq
	if(var_223_bool == 0) goto Label_3632; // 0xe20 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0xe21 PushV
	var_224_object = var_1_object; // 0xe22 MovT
	var_225_object = var_0_object; // 0xe23 MovT
	func_7066(); // 0xe24 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0xe26 PushV
	var_226_object = var_1_object; // 0xe27 MovT
	var_227_object = var_0_object; // 0xe28 MovT
	func_7128(var_227_object); // 0xe29 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0xe2b PushV
	var_228_object = var_1_object; // 0xe2c MovT
	var_229_object = var_0_object; // 0xe2d MovT
	func_7138(); // 0xe2e NEW_2
	
Label_3632:
	var_230_int = 9916; // 0xe30 PushI
	var_231_bool = var_47_cvector == var_230_int; // 0xe31 Eq
	if(var_231_bool == 0) goto Label_3640; // 0xe32 JumpB
	var_232_object = Obj(); var_233_object = Obj(); // 0xe33 PushV
	var_232_object = var_1_object; // 0xe34 MovT
	var_233_object = var_0_object; // 0xe35 MovT
	func_7138(); // 0xe36 NEW_2
	
Label_3640:
	var_234_int = 9919; // 0xe38 PushI
	var_235_bool = var_46_bool == var_234_int; // 0xe39 Eq
	if(var_235_bool == 0) goto Label_3769; // 0xe3a JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0xe3b PushV
	var_237_object = var_1_object; // 0xe3c MovT
	func_7563(var_237_object); // 0xe3d NEW_2
	if(var_236_bool == 0) goto Label_3673; // 0xe3f JumpB
	var_244_object = Obj(); var_245_object = Obj(); // 0xe40 PushV
	var_244_object = var_1_object; // 0xe41 MovT
	var_245_object = var_0_object; // 0xe42 MovT
	func_7316(); // 0xe43 NEW_2
	var_248_object = Obj(); var_249_object = Obj(); // 0xe45 PushV
	var_248_object = var_1_object; // 0xe46 MovT
	var_249_object = var_0_object; // 0xe47 MovT
	func_7164(); // 0xe48 NEW_2
	var_252_string = ""; // 0xe4a PushV
	var_252_string = "Neutral"; // 0xe4b MovS
	func_3468(var_47_cvector, var_252_string); // 0xe4c NEW_2
	var_269_int = 509043; // 0xe4e PushI
	SetMessage(var_269_int); // 0xe4f TObjFunc
	ClearReplies(); // 0xe51 TObjFunc
	var_270_int = 509044; // 0xe53 PushI
	var_271_int = 9921; // 0xe54 PushI
	var_272_int = 9920; // 0xe55 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xe56 TObjFunc
	return 0; // 0xe58 Return
	
Label_3673:
	var_273_object = Obj(); var_274_object = Obj(); // 0xe59 PushV
	var_273_object = var_1_object; // 0xe5a MovT
	var_274_object = var_0_object; // 0xe5b MovT
	func_7316(); // 0xe5c NEW_2
	var_275_string = ""; // 0xe5e PushV
	var_275_string = "Neutral"; // 0xe5f MovS
	func_3468(var_47_cvector, var_275_string); // 0xe60 NEW_2
	var_276_int = 509024; // 0xe62 PushI
	SetMessage(var_276_int); // 0xe63 TObjFunc
	ClearReplies(); // 0xe65 TObjFunc
	var_277_bool = 0; var_278_object = Obj(); // 0xe67 PushV
	var_278_object = var_1_object; // 0xe68 MovT
	func_7587(var_278_object); // 0xe69 NEW_2
	if(var_277_bool == 0) goto Label_3697; // 0xe6b JumpB
	var_283_int = 511376; // 0xe6c PushI
	var_284_int = 9899; // 0xe6d PushI
	var_285_int = 12575; // 0xe6e PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xe6f TObjFunc
	
Label_3697:
	var_286_bool = 0; // 0xe71 PushV
	var_286_bool = 0; // 0xe72 MovB
	var_287_bool = 0; var_288_object = Obj(); // 0xe73 PushV
	var_288_object = var_1_object; // 0xe74 MovT
	func_7551(var_288_object); // 0xe75 NEW_2
	if(var_287_bool == 0) goto Label_3710; // 0xe77 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0xe78 PushV
	var_294_object = var_1_object; // 0xe79 MovT
	func_7382(var_294_object); // 0xe7a NEW_2
	if(var_293_bool == 0) goto Label_3710; // 0xe7c JumpB
	var_286_bool = 1; // 0xe7d MovB
	
Label_3710:
	if(var_286_bool == 0) goto Label_3716; // 0xe7e JumpB
	var_299_int = 509042; // 0xe7f PushI
	var_300_int = 9941; // 0xe80 PushI
	var_301_int = 9918; // 0xe81 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xe82 TObjFunc
	
Label_3716:
	var_302_bool = 0; // 0xe84 PushV
	var_302_bool = 0; // 0xe85 MovB
	var_303_bool = 0; // 0xe86 PushV
	var_303_bool = 0; // 0xe87 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0xe88 PushV
	var_305_object = var_1_object; // 0xe89 MovT
	func_7599(var_305_object); // 0xe8a NEW_2
	if(var_304_bool == 0) goto Label_3731; // 0xe8c JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0xe8d PushV
	var_311_object = var_1_object; // 0xe8e MovT
	func_7611(var_311_object); // 0xe8f NEW_2
	if(var_310_bool == 0) goto Label_3731; // 0xe91 JumpB
	var_303_bool = 1; // 0xe92 MovB
	
Label_3731:
	if(var_303_bool == 0) goto Label_3738; // 0xe93 JumpB
	var_316_bool = 0; var_317_object = Obj(); // 0xe94 PushV
	var_317_object = var_1_object; // 0xe95 MovT
	func_7394(var_317_object); // 0xe96 NEW_2
	if(var_316_bool == 0) goto Label_3738; // 0xe98 JumpB
	var_302_bool = 1; // 0xe99 MovB
	
Label_3738:
	if(var_302_bool == 0) goto Label_3744; // 0xe9a JumpB
	var_335_int = 510442; // 0xe9b PushI
	var_336_int = 11512; // 0xe9c PushI
	var_337_int = 11511; // 0xe9d PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xe9e TObjFunc
	
Label_3744:
	var_338_bool = 0; // 0xea0 PushV
	var_338_bool = 0; // 0xea1 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0xea2 PushV
	var_340_object = var_1_object; // 0xea3 MovT
	func_7575(var_340_object); // 0xea4 NEW_2
	if(var_339_bool == 0) goto Label_3757; // 0xea6 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0xea7 PushV
	var_346_object = var_1_object; // 0xea8 MovT
	func_7394(var_346_object); // 0xea9 NEW_2
	if(var_345_bool == 0) goto Label_3757; // 0xeab JumpB
	var_338_bool = 1; // 0xeac MovB
	
Label_3757:
	if(var_338_bool == 0) goto Label_3763; // 0xead JumpB
	var_347_int = 509034; // 0xeae PushI
	var_348_int = 9910; // 0xeaf PushI
	var_349_int = 9909; // 0xeb0 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xeb1 TObjFunc
	
Label_3763:
	var_350_int = 511147; // 0xeb3 PushI
	var_351_int = -1; // 0xeb4 PushI
	var_352_int = 12337; // 0xeb5 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xeb6 TObjFunc
	return 0; // 0xeb8 Return
	
Label_3769:
	var_353_int = 9910; // 0xeb9 PushI
	var_354_bool = var_46_bool == var_353_int; // 0xeba Eq
	if(var_354_bool == 0) goto Label_3792; // 0xebb JumpB
	var_355_string = ""; // 0xebc PushV
	var_355_string = "Neutral"; // 0xebd MovS
	func_3468(var_47_cvector, var_355_string); // 0xebe NEW_2
	var_356_int = 509035; // 0xec0 PushI
	SetMessage(var_356_int); // 0xec1 TObjFunc
	ClearReplies(); // 0xec3 TObjFunc
	var_357_int = 509036; // 0xec5 PushI
	var_358_int = 9914; // 0xec6 PushI
	var_359_int = 9911; // 0xec7 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xec8 TObjFunc
	var_360_int = 509037; // 0xeca PushI
	var_361_int = 9914; // 0xecb PushI
	var_362_int = 9913; // 0xecc PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xecd TObjFunc
	return 0; // 0xecf Return
	
Label_3792:
	var_363_int = 9914; // 0xed0 PushI
	var_364_bool = var_46_bool == var_363_int; // 0xed1 Eq
	if(var_364_bool == 0) goto Label_3815; // 0xed2 JumpB
	var_365_string = ""; // 0xed3 PushV
	var_365_string = "Anger"; // 0xed4 MovS
	func_3468(var_47_cvector, var_365_string); // 0xed5 NEW_2
	var_366_int = 509038; // 0xed7 PushI
	SetMessage(var_366_int); // 0xed8 TObjFunc
	ClearReplies(); // 0xeda TObjFunc
	var_367_int = 509039; // 0xedc PushI
	var_368_int = -1; // 0xedd PushI
	var_369_int = 9915; // 0xede PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xedf TObjFunc
	var_370_int = 509040; // 0xee1 PushI
	var_371_int = -1; // 0xee2 PushI
	var_372_int = 9916; // 0xee3 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0xee4 TObjFunc
	return 0; // 0xee6 Return
	
Label_3815:
	var_373_int = 11512; // 0xee7 PushI
	var_374_bool = var_46_bool == var_373_int; // 0xee8 Eq
	if(var_374_bool == 0) goto Label_3833; // 0xee9 JumpB
	var_375_string = ""; // 0xeea PushV
	var_375_string = "Neutral"; // 0xeeb MovS
	func_3468(var_47_cvector, var_375_string); // 0xeec NEW_2
	var_376_int = 510443; // 0xeee PushI
	SetMessage(var_376_int); // 0xeef TObjFunc
	ClearReplies(); // 0xef1 TObjFunc
	var_377_int = 510444; // 0xef3 PushI
	var_378_int = 11514; // 0xef4 PushI
	var_379_int = 11513; // 0xef5 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xef6 TObjFunc
	return 0; // 0xef8 Return
	
Label_3833:
	var_380_int = 11514; // 0xef9 PushI
	var_381_bool = var_46_bool == var_380_int; // 0xefa Eq
	if(var_381_bool == 0) goto Label_3856; // 0xefb JumpB
	var_382_string = ""; // 0xefc PushV
	var_382_string = "Neutral"; // 0xefd MovS
	func_3468(var_47_cvector, var_382_string); // 0xefe NEW_2
	var_383_int = 510445; // 0xf00 PushI
	SetMessage(var_383_int); // 0xf01 TObjFunc
	ClearReplies(); // 0xf03 TObjFunc
	var_384_int = 510446; // 0xf05 PushI
	var_385_int = -1; // 0xf06 PushI
	var_386_int = 11515; // 0xf07 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0xf08 TObjFunc
	var_387_int = 534367; // 0xf0a PushI
	var_388_int = -1; // 0xf0b PushI
	var_389_int = 35973; // 0xf0c PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0xf0d TObjFunc
	return 0; // 0xf0f Return
	
Label_3856:
	var_390_int = 9941; // 0xf10 PushI
	var_391_bool = var_46_bool == var_390_int; // 0xf11 Eq
	if(var_391_bool == 0) goto Label_3874; // 0xf12 JumpB
	var_392_string = ""; // 0xf13 PushV
	var_392_string = "Neutral"; // 0xf14 MovS
	func_3468(var_47_cvector, var_392_string); // 0xf15 NEW_2
	var_393_int = 509064; // 0xf17 PushI
	SetMessage(var_393_int); // 0xf18 TObjFunc
	ClearReplies(); // 0xf1a TObjFunc
	var_394_int = 509065; // 0xf1c PushI
	var_395_int = 9943; // 0xf1d PushI
	var_396_int = 9942; // 0xf1e PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xf1f TObjFunc
	return 0; // 0xf21 Return
	
Label_3874:
	var_397_int = 9943; // 0xf22 PushI
	var_398_bool = var_46_bool == var_397_int; // 0xf23 Eq
	if(var_398_bool == 0) goto Label_3897; // 0xf24 JumpB
	var_399_string = ""; // 0xf25 PushV
	var_399_string = "Anger"; // 0xf26 MovS
	func_3468(var_47_cvector, var_399_string); // 0xf27 NEW_2
	var_400_int = 509066; // 0xf29 PushI
	SetMessage(var_400_int); // 0xf2a TObjFunc
	ClearReplies(); // 0xf2c TObjFunc
	var_401_int = 509067; // 0xf2e PushI
	var_402_int = 9946; // 0xf2f PushI
	var_403_int = 9944; // 0xf30 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xf31 TObjFunc
	var_404_int = 509068; // 0xf33 PushI
	var_405_int = 9949; // 0xf34 PushI
	var_406_int = 9945; // 0xf35 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xf36 TObjFunc
	return 0; // 0xf38 Return
	
Label_3897:
	var_407_int = 9949; // 0xf39 PushI
	var_408_bool = var_46_bool == var_407_int; // 0xf3a Eq
	if(var_408_bool == 0) goto Label_3915; // 0xf3b JumpB
	var_409_string = ""; // 0xf3c PushV
	var_409_string = "Neutral"; // 0xf3d MovS
	func_3468(var_47_cvector, var_409_string); // 0xf3e NEW_2
	var_410_int = 509072; // 0xf40 PushI
	SetMessage(var_410_int); // 0xf41 TObjFunc
	ClearReplies(); // 0xf43 TObjFunc
	var_411_int = 509073; // 0xf45 PushI
	var_412_int = 9948; // 0xf46 PushI
	var_413_int = 9950; // 0xf47 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xf48 TObjFunc
	return 0; // 0xf4a Return
	
Label_3915:
	var_414_int = 9946; // 0xf4b PushI
	var_415_bool = var_46_bool == var_414_int; // 0xf4c Eq
	if(var_415_bool == 0) goto Label_3938; // 0xf4d JumpB
	var_416_string = ""; // 0xf4e PushV
	var_416_string = "Neutral"; // 0xf4f MovS
	func_3468(var_47_cvector, var_416_string); // 0xf50 NEW_2
	var_417_int = 509069; // 0xf52 PushI
	SetMessage(var_417_int); // 0xf53 TObjFunc
	ClearReplies(); // 0xf55 TObjFunc
	var_418_int = 509074; // 0xf57 PushI
	var_419_int = 9953; // 0xf58 PushI
	var_420_int = 9952; // 0xf59 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xf5a TObjFunc
	var_421_int = 509070; // 0xf5c PushI
	var_422_int = 9948; // 0xf5d PushI
	var_423_int = 9947; // 0xf5e PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xf5f TObjFunc
	return 0; // 0xf61 Return
	
Label_3938:
	var_424_int = 9948; // 0xf62 PushI
	var_425_bool = var_46_bool == var_424_int; // 0xf63 Eq
	if(var_425_bool == 0) goto Label_3956; // 0xf64 JumpB
	var_426_string = ""; // 0xf65 PushV
	var_426_string = "Neutral"; // 0xf66 MovS
	func_3468(var_47_cvector, var_426_string); // 0xf67 NEW_2
	var_427_int = 509071; // 0xf69 PushI
	SetMessage(var_427_int); // 0xf6a TObjFunc
	ClearReplies(); // 0xf6c TObjFunc
	var_428_int = 511149; // 0xf6e PushI
	var_429_int = -1; // 0xf6f PushI
	var_430_int = 12338; // 0xf70 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xf71 TObjFunc
	return 0; // 0xf73 Return
	
Label_3956:
	var_431_int = 9953; // 0xf74 PushI
	var_432_bool = var_46_bool == var_431_int; // 0xf75 Eq
	if(var_432_bool == 0) goto Label_3979; // 0xf76 JumpB
	var_433_string = ""; // 0xf77 PushV
	var_433_string = "Anger"; // 0xf78 MovS
	func_3468(var_47_cvector, var_433_string); // 0xf79 NEW_2
	var_434_int = 509075; // 0xf7b PushI
	SetMessage(var_434_int); // 0xf7c TObjFunc
	ClearReplies(); // 0xf7e TObjFunc
	var_435_int = 509076; // 0xf80 PushI
	var_436_int = -1; // 0xf81 PushI
	var_437_int = 9954; // 0xf82 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xf83 TObjFunc
	var_438_int = 509077; // 0xf85 PushI
	var_439_int = -1; // 0xf86 PushI
	var_440_int = 9955; // 0xf87 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xf88 TObjFunc
	return 0; // 0xf8a Return
	
Label_3979:
	var_441_int = 9899; // 0xf8b PushI
	var_442_bool = var_46_bool == var_441_int; // 0xf8c Eq
	if(var_442_bool == 0) goto Label_4002; // 0xf8d JumpB
	var_443_string = ""; // 0xf8e PushV
	var_443_string = "Neutral"; // 0xf8f MovS
	func_3468(var_47_cvector, var_443_string); // 0xf90 NEW_2
	var_444_int = 509025; // 0xf92 PushI
	SetMessage(var_444_int); // 0xf93 TObjFunc
	ClearReplies(); // 0xf95 TObjFunc
	var_445_int = 509026; // 0xf97 PushI
	var_446_int = 9901; // 0xf98 PushI
	var_447_int = 9900; // 0xf99 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xf9a TObjFunc
	var_448_int = 509033; // 0xf9c PushI
	var_449_int = 9901; // 0xf9d PushI
	var_450_int = 9908; // 0xf9e PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0xf9f TObjFunc
	return 0; // 0xfa1 Return
	
Label_4002:
	var_451_int = 9901; // 0xfa2 PushI
	var_452_bool = var_46_bool == var_451_int; // 0xfa3 Eq
	if(var_452_bool == 0) goto Label_4025; // 0xfa4 JumpB
	var_453_string = ""; // 0xfa5 PushV
	var_453_string = "Distrust"; // 0xfa6 MovS
	func_3468(var_47_cvector, var_453_string); // 0xfa7 NEW_2
	var_454_int = 509027; // 0xfa9 PushI
	SetMessage(var_454_int); // 0xfaa TObjFunc
	ClearReplies(); // 0xfac TObjFunc
	var_455_int = 509028; // 0xfae PushI
	var_456_int = 9903; // 0xfaf PushI
	var_457_int = 9902; // 0xfb0 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0xfb1 TObjFunc
	var_458_int = 509032; // 0xfb3 PushI
	var_459_int = 9903; // 0xfb4 PushI
	var_460_int = 9906; // 0xfb5 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0xfb6 TObjFunc
	return 0; // 0xfb8 Return
	
Label_4025:
	var_461_int = 9903; // 0xfb9 PushI
	var_462_bool = var_46_bool == var_461_int; // 0xfba Eq
	if(var_462_bool == 0) goto Label_4048; // 0xfbb JumpB
	var_463_string = ""; // 0xfbc PushV
	var_463_string = "Neutral"; // 0xfbd MovS
	func_3468(var_47_cvector, var_463_string); // 0xfbe NEW_2
	var_464_int = 509029; // 0xfc0 PushI
	SetMessage(var_464_int); // 0xfc1 TObjFunc
	ClearReplies(); // 0xfc3 TObjFunc
	var_465_int = 509031; // 0xfc5 PushI
	var_466_int = -1; // 0xfc6 PushI
	var_467_int = 9905; // 0xfc7 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0xfc8 TObjFunc
	var_468_int = 511378; // 0xfca PushI
	var_469_int = -1; // 0xfcb PushI
	var_470_int = 12577; // 0xfcc PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xfcd TObjFunc
	return 0; // 0xfcf Return
	
Label_4048:
	var_471_int = 9921; // 0xfd0 PushI
	var_472_bool = var_46_bool == var_471_int; // 0xfd1 Eq
	if(var_472_bool == 0) goto Label_4066; // 0xfd2 JumpB
	var_473_string = ""; // 0xfd3 PushV
	var_473_string = "Neutral"; // 0xfd4 MovS
	func_3468(var_47_cvector, var_473_string); // 0xfd5 NEW_2
	var_474_int = 509045; // 0xfd7 PushI
	SetMessage(var_474_int); // 0xfd8 TObjFunc
	ClearReplies(); // 0xfda TObjFunc
	var_475_int = 510222; // 0xfdc PushI
	var_476_int = 11270; // 0xfdd PushI
	var_477_int = 11269; // 0xfde PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xfdf TObjFunc
	return 0; // 0xfe1 Return
	
Label_4066:
	var_478_int = 11270; // 0xfe2 PushI
	var_479_bool = var_46_bool == var_478_int; // 0xfe3 Eq
	if(var_479_bool == 0) goto Label_4099; // 0xfe4 JumpB
	var_480_string = ""; // 0xfe5 PushV
	var_480_string = "Distrust"; // 0xfe6 MovS
	func_3468(var_47_cvector, var_480_string); // 0xfe7 NEW_2
	var_481_int = 510223; // 0xfe9 PushI
	SetMessage(var_481_int); // 0xfea TObjFunc
	ClearReplies(); // 0xfec TObjFunc
	var_482_int = 509046; // 0xfee PushI
	var_483_int = 11280; // 0xfef PushI
	var_484_int = 9922; // 0xff0 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0xff1 TObjFunc
	var_485_int = 510224; // 0xff3 PushI
	var_486_int = 9929; // 0xff4 PushI
	var_487_int = 11271; // 0xff5 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xff6 TObjFunc
	var_488_bool = 0; var_489_object = Obj(); // 0xff8 PushV
	var_489_object = var_1_object; // 0xff9 MovT
	func_7575(var_489_object); // 0xffa NEW_2
	if(var_488_bool == 0) goto Label_4098; // 0xffc JumpB
	var_490_int = 509047; // 0xffd PushI
	var_491_int = 9924; // 0xffe PushI
	var_492_int = 9923; // 0xfff PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x1000 TObjFunc
	
Label_4098:
	return 0; // 0x1002 Return
	
Label_4099:
	var_493_int = 9924; // 0x1003 PushI
	var_494_bool = var_46_bool == var_493_int; // 0x1004 Eq
	if(var_494_bool == 0) goto Label_4122; // 0x1005 JumpB
	var_495_string = ""; // 0x1006 PushV
	var_495_string = "Neutral"; // 0x1007 MovS
	func_3468(var_47_cvector, var_495_string); // 0x1008 NEW_2
	var_496_int = 509048; // 0x100a PushI
	SetMessage(var_496_int); // 0x100b TObjFunc
	ClearReplies(); // 0x100d TObjFunc
	var_497_int = 509049; // 0x100f PushI
	var_498_int = 9929; // 0x1010 PushI
	var_499_int = 9925; // 0x1011 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x1012 TObjFunc
	var_500_int = 510225; // 0x1014 PushI
	var_501_int = 11273; // 0x1015 PushI
	var_502_int = 11272; // 0x1016 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x1017 TObjFunc
	return 0; // 0x1019 Return
	
Label_4122:
	var_503_int = 11273; // 0x101a PushI
	var_504_bool = var_46_bool == var_503_int; // 0x101b Eq
	if(var_504_bool == 0) goto Label_4145; // 0x101c JumpB
	var_505_string = ""; // 0x101d PushV
	var_505_string = "Neutral"; // 0x101e MovS
	func_3468(var_47_cvector, var_505_string); // 0x101f NEW_2
	var_506_int = 510226; // 0x1021 PushI
	SetMessage(var_506_int); // 0x1022 TObjFunc
	ClearReplies(); // 0x1024 TObjFunc
	var_507_int = 510227; // 0x1026 PushI
	var_508_int = 35970; // 0x1027 PushI
	var_509_int = 11274; // 0x1028 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x1029 TObjFunc
	var_510_int = 510228; // 0x102b PushI
	var_511_int = -1; // 0x102c PushI
	var_512_int = 11275; // 0x102d PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x102e TObjFunc
	return 0; // 0x1030 Return
	
Label_4145:
	var_513_int = 35970; // 0x1031 PushI
	var_514_bool = var_46_bool == var_513_int; // 0x1032 Eq
	if(var_514_bool == 0) goto Label_4168; // 0x1033 JumpB
	var_515_string = ""; // 0x1034 PushV
	var_515_string = "Neutral"; // 0x1035 MovS
	func_3468(var_47_cvector, var_515_string); // 0x1036 NEW_2
	var_516_int = 534364; // 0x1038 PushI
	SetMessage(var_516_int); // 0x1039 TObjFunc
	ClearReplies(); // 0x103b TObjFunc
	var_517_int = 534365; // 0x103d PushI
	var_518_int = -1; // 0x103e PushI
	var_519_int = 35971; // 0x103f PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x1040 TObjFunc
	var_520_int = 534366; // 0x1042 PushI
	var_521_int = -1; // 0x1043 PushI
	var_522_int = 35972; // 0x1044 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x1045 TObjFunc
	return 0; // 0x1047 Return
	
Label_4168:
	var_523_int = 9929; // 0x1048 PushI
	var_524_bool = var_46_bool == var_523_int; // 0x1049 Eq
	if(var_524_bool == 0) goto Label_4186; // 0x104a JumpB
	var_525_string = ""; // 0x104b PushV
	var_525_string = "Neutral"; // 0x104c MovS
	func_3468(var_47_cvector, var_525_string); // 0x104d NEW_2
	var_526_int = 509053; // 0x104f PushI
	SetMessage(var_526_int); // 0x1050 TObjFunc
	ClearReplies(); // 0x1052 TObjFunc
	var_527_int = 509060; // 0x1054 PushI
	var_528_int = 9938; // 0x1055 PushI
	var_529_int = 9937; // 0x1056 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x1057 TObjFunc
	return 0; // 0x1059 Return
	
Label_4186:
	var_530_int = 9938; // 0x105a PushI
	var_531_bool = var_46_bool == var_530_int; // 0x105b Eq
	if(var_531_bool == 0) goto Label_4209; // 0x105c JumpB
	var_532_string = ""; // 0x105d PushV
	var_532_string = "Anger"; // 0x105e MovS
	func_3468(var_47_cvector, var_532_string); // 0x105f NEW_2
	var_533_int = 509061; // 0x1061 PushI
	SetMessage(var_533_int); // 0x1062 TObjFunc
	ClearReplies(); // 0x1064 TObjFunc
	var_534_int = 509063; // 0x1066 PushI
	var_535_int = 11254; // 0x1067 PushI
	var_536_int = 9940; // 0x1068 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x1069 TObjFunc
	var_537_int = 509062; // 0x106b PushI
	var_538_int = -1; // 0x106c PushI
	var_539_int = 9939; // 0x106d PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x106e TObjFunc
	return 0; // 0x1070 Return
	
Label_4209:
	var_540_int = 11254; // 0x1071 PushI
	var_541_bool = var_46_bool == var_540_int; // 0x1072 Eq
	if(var_541_bool == 0) goto Label_4232; // 0x1073 JumpB
	var_542_string = ""; // 0x1074 PushV
	var_542_string = "Neutral"; // 0x1075 MovS
	func_3468(var_47_cvector, var_542_string); // 0x1076 NEW_2
	var_543_int = 510208; // 0x1078 PushI
	SetMessage(var_543_int); // 0x1079 TObjFunc
	ClearReplies(); // 0x107b TObjFunc
	var_544_int = 510209; // 0x107d PushI
	var_545_int = -1; // 0x107e PushI
	var_546_int = 11255; // 0x107f PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x1080 TObjFunc
	var_547_int = 510231; // 0x1082 PushI
	var_548_int = -1; // 0x1083 PushI
	var_549_int = 11278; // 0x1084 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x1085 TObjFunc
	return 0; // 0x1087 Return
	
Label_4232:
	var_550_int = 11280; // 0x1088 PushI
	var_551_bool = var_46_bool == var_550_int; // 0x1089 Eq
	if(var_551_bool == 0) goto Label_4255; // 0x108a JumpB
	var_552_string = ""; // 0x108b PushV
	var_552_string = "Neutral"; // 0x108c MovS
	func_3468(var_47_cvector, var_552_string); // 0x108d NEW_2
	var_553_int = 510232; // 0x108f PushI
	SetMessage(var_553_int); // 0x1090 TObjFunc
	ClearReplies(); // 0x1092 TObjFunc
	var_554_int = 510233; // 0x1094 PushI
	var_555_int = 9938; // 0x1095 PushI
	var_556_int = 11281; // 0x1096 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x1097 TObjFunc
	var_557_int = 510234; // 0x1099 PushI
	var_558_int = 9938; // 0x109a PushI
	var_559_int = 11282; // 0x109b PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x109c TObjFunc
	return 0; // 0x109e Return
	
Label_4255:
	var_3_string = 1; // 0x109f TMovB
	var_560_bool = 0; // 0x10a0 PushV
	func_6948(var_560_bool); // 0x10a1 NEW_2
	if(var_560_bool == 0) goto Label_4263; // 0x10a3 JumpB
	lshStopAnimation(); // 0x10a4 Func
	goto Label_4265; // 0x10a6 Jump
	
Label_4265:
	return 0; // 0x10a9 Return
	
Label_4263:
	StopAnimation(); // 0x10a7 Func
	
Label_4267:
	return 0; // 0x10ab Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x1166 PushI
	if(var_48_int == 0) goto Label_4778; // 0x1167 JumpB
	func_6814(); // 0x1169 NEW_2
	var_50_int = 13011; // 0x116b PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x116c Eq
	if(var_51_bool == 0) goto Label_4467; // 0x116d JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x116e PushV
	var_52_object = var_1_object; // 0x116f MovT
	var_53_object = var_0_object; // 0x1170 MovT
	func_7274(); // 0x1171 NEW_2
	
Label_4467:
	var_56_int = 16781; // 0x1173 PushI
	var_57_bool = var_47_cvector == var_56_int; // 0x1174 Eq
	if(var_57_bool == 0) goto Label_4475; // 0x1175 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x1176 PushV
	var_58_object = var_1_object; // 0x1177 MovT
	var_59_object = var_0_object; // 0x1178 MovT
	func_7274(); // 0x1179 NEW_2
	
Label_4475:
	var_60_int = 16782; // 0x117b PushI
	var_61_bool = var_47_cvector == var_60_int; // 0x117c Eq
	if(var_61_bool == 0) goto Label_4483; // 0x117d JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x117e PushV
	var_62_object = var_1_object; // 0x117f MovT
	var_63_object = var_0_object; // 0x1180 MovT
	func_7274(); // 0x1181 NEW_2
	
Label_4483:
	var_64_int = 16772; // 0x1183 PushI
	var_65_bool = var_47_cvector == var_64_int; // 0x1184 Eq
	if(var_65_bool == 0) goto Label_4491; // 0x1185 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x1186 PushV
	var_66_object = var_1_object; // 0x1187 MovT
	var_67_object = var_0_object; // 0x1188 MovT
	func_7274(); // 0x1189 NEW_2
	
Label_4491:
	var_68_int = 13001; // 0x118b PushI
	var_69_bool = var_46_bool == var_68_int; // 0x118c Eq
	if(var_69_bool == 0) goto Label_4538; // 0x118d JumpB
	var_70_string = ""; // 0x118e PushV
	var_70_string = "Neutral"; // 0x118f MovS
	func_4431(var_47_cvector, var_70_string); // 0x1190 NEW_2
	var_87_int = 511791; // 0x1192 PushI
	SetMessage(var_87_int); // 0x1193 TObjFunc
	ClearReplies(); // 0x1195 TObjFunc
	var_88_bool = 0; // 0x1197 PushV
	var_88_bool = 0; // 0x1198 MovB
	var_89_bool = 0; var_90_object = Obj(); // 0x1199 PushV
	var_90_object = var_1_object; // 0x119a MovT
	func_7635(var_90_object); // 0x119b NEW_2
	if(var_89_bool == 0) goto Label_4516; // 0x119d JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x119e PushV
	var_98_object = var_1_object; // 0x119f MovT
	func_7623(var_98_object); // 0x11a0 NEW_2
	if(var_97_bool == 0) goto Label_4516; // 0x11a2 JumpB
	var_88_bool = 1; // 0x11a3 MovB
	
Label_4516:
	if(var_88_bool == 0) goto Label_4522; // 0x11a4 JumpB
	var_103_int = 511792; // 0x11a5 PushI
	var_104_int = 13003; // 0x11a6 PushI
	var_105_int = 13002; // 0x11a7 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x11a8 TObjFunc
	
Label_4522:
	var_106_bool = 0; var_107_object = Obj(); // 0x11aa PushV
	var_107_object = var_1_object; // 0x11ab MovT
	func_7755(var_107_object); // 0x11ac NEW_2
	if(var_106_bool == 0) goto Label_4532; // 0x11ae JumpB
	var_112_int = 515713; // 0x11af PushI
	var_113_int = 16770; // 0x11b0 PushI
	var_114_int = 16769; // 0x11b1 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x11b2 TObjFunc
	
Label_4532:
	var_115_int = 511794; // 0x11b4 PushI
	var_116_int = -1; // 0x11b5 PushI
	var_117_int = 13004; // 0x11b6 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x11b7 TObjFunc
	return 0; // 0x11b9 Return
	
Label_4538:
	var_118_int = 16770; // 0x11ba PushI
	var_119_bool = var_46_bool == var_118_int; // 0x11bb Eq
	if(var_119_bool == 0) goto Label_4561; // 0x11bc JumpB
	var_120_string = ""; // 0x11bd PushV
	var_120_string = "Neutral"; // 0x11be MovS
	func_4431(var_47_cvector, var_120_string); // 0x11bf NEW_2
	var_121_int = 515714; // 0x11c1 PushI
	SetMessage(var_121_int); // 0x11c2 TObjFunc
	ClearReplies(); // 0x11c4 TObjFunc
	var_122_int = 515717; // 0x11c6 PushI
	var_123_int = 16774; // 0x11c7 PushI
	var_124_int = 16773; // 0x11c8 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x11c9 TObjFunc
	var_125_int = 515719; // 0x11cb PushI
	var_126_int = 16774; // 0x11cc PushI
	var_127_int = 16775; // 0x11cd PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x11ce TObjFunc
	return 0; // 0x11d0 Return
	
Label_4561:
	var_128_int = 16774; // 0x11d1 PushI
	var_129_bool = var_46_bool == var_128_int; // 0x11d2 Eq
	if(var_129_bool == 0) goto Label_4579; // 0x11d3 JumpB
	var_130_string = ""; // 0x11d4 PushV
	var_130_string = "Jeer"; // 0x11d5 MovS
	func_4431(var_47_cvector, var_130_string); // 0x11d6 NEW_2
	var_131_int = 515718; // 0x11d8 PushI
	SetMessage(var_131_int); // 0x11d9 TObjFunc
	ClearReplies(); // 0x11db TObjFunc
	var_132_int = 515726; // 0x11dd PushI
	var_133_int = 16784; // 0x11de PushI
	var_134_int = 16783; // 0x11df PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x11e0 TObjFunc
	return 0; // 0x11e2 Return
	
Label_4579:
	var_135_int = 16784; // 0x11e3 PushI
	var_136_bool = var_46_bool == var_135_int; // 0x11e4 Eq
	if(var_136_bool == 0) goto Label_4597; // 0x11e5 JumpB
	var_137_string = ""; // 0x11e6 PushV
	var_137_string = "Jeer"; // 0x11e7 MovS
	func_4431(var_47_cvector, var_137_string); // 0x11e8 NEW_2
	var_138_int = 515727; // 0x11ea PushI
	SetMessage(var_138_int); // 0x11eb TObjFunc
	ClearReplies(); // 0x11ed TObjFunc
	var_139_int = 515728; // 0x11ef PushI
	var_140_int = 16787; // 0x11f0 PushI
	var_141_int = 16786; // 0x11f1 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x11f2 TObjFunc
	return 0; // 0x11f4 Return
	
Label_4597:
	var_142_int = 16787; // 0x11f5 PushI
	var_143_bool = var_46_bool == var_142_int; // 0x11f6 Eq
	if(var_143_bool == 0) goto Label_4620; // 0x11f7 JumpB
	var_144_string = ""; // 0x11f8 PushV
	var_144_string = "Neutral"; // 0x11f9 MovS
	func_4431(var_47_cvector, var_144_string); // 0x11fa NEW_2
	var_145_int = 515729; // 0x11fc PushI
	SetMessage(var_145_int); // 0x11fd TObjFunc
	ClearReplies(); // 0x11ff TObjFunc
	var_146_int = 515730; // 0x1201 PushI
	var_147_int = -1; // 0x1202 PushI
	var_148_int = 16788; // 0x1203 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1204 TObjFunc
	var_149_int = 515731; // 0x1206 PushI
	var_150_int = -1; // 0x1207 PushI
	var_151_int = 16789; // 0x1208 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1209 TObjFunc
	return 0; // 0x120b Return
	
Label_4620:
	var_152_int = 13003; // 0x120c PushI
	var_153_bool = var_46_bool == var_152_int; // 0x120d Eq
	if(var_153_bool == 0) goto Label_4643; // 0x120e JumpB
	var_154_string = ""; // 0x120f PushV
	var_154_string = "Jeer"; // 0x1210 MovS
	func_4431(var_47_cvector, var_154_string); // 0x1211 NEW_2
	var_155_int = 511793; // 0x1213 PushI
	SetMessage(var_155_int); // 0x1214 TObjFunc
	ClearReplies(); // 0x1216 TObjFunc
	var_156_int = 511795; // 0x1218 PushI
	var_157_int = 13006; // 0x1219 PushI
	var_158_int = 13005; // 0x121a PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x121b TObjFunc
	var_159_int = 515711; // 0x121d PushI
	var_160_int = 16768; // 0x121e PushI
	var_161_int = 16767; // 0x121f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1220 TObjFunc
	return 0; // 0x1222 Return
	
Label_4643:
	var_162_int = 16768; // 0x1223 PushI
	var_163_bool = var_46_bool == var_162_int; // 0x1224 Eq
	if(var_163_bool == 0) goto Label_4666; // 0x1225 JumpB
	var_164_string = ""; // 0x1226 PushV
	var_164_string = "Neutral"; // 0x1227 MovS
	func_4431(var_47_cvector, var_164_string); // 0x1228 NEW_2
	var_165_int = 515712; // 0x122a PushI
	SetMessage(var_165_int); // 0x122b TObjFunc
	ClearReplies(); // 0x122d TObjFunc
	var_166_int = 515715; // 0x122f PushI
	var_167_int = 13006; // 0x1230 PushI
	var_168_int = 16771; // 0x1231 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1232 TObjFunc
	var_169_int = 515716; // 0x1234 PushI
	var_170_int = -1; // 0x1235 PushI
	var_171_int = 16772; // 0x1236 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1237 TObjFunc
	return 0; // 0x1239 Return
	
Label_4666:
	var_172_int = 13006; // 0x123a PushI
	var_173_bool = var_46_bool == var_172_int; // 0x123b Eq
	if(var_173_bool == 0) goto Label_4684; // 0x123c JumpB
	var_174_string = ""; // 0x123d PushV
	var_174_string = "Distrust"; // 0x123e MovS
	func_4431(var_47_cvector, var_174_string); // 0x123f NEW_2
	var_175_int = 511796; // 0x1241 PushI
	SetMessage(var_175_int); // 0x1242 TObjFunc
	ClearReplies(); // 0x1244 TObjFunc
	var_176_int = 511797; // 0x1246 PushI
	var_177_int = 13008; // 0x1247 PushI
	var_178_int = 13007; // 0x1248 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1249 TObjFunc
	return 0; // 0x124b Return
	
Label_4684:
	var_179_int = 13008; // 0x124c PushI
	var_180_bool = var_46_bool == var_179_int; // 0x124d Eq
	if(var_180_bool == 0) goto Label_4707; // 0x124e JumpB
	var_181_string = ""; // 0x124f PushV
	var_181_string = "Distrust"; // 0x1250 MovS
	func_4431(var_47_cvector, var_181_string); // 0x1251 NEW_2
	var_182_int = 511798; // 0x1253 PushI
	SetMessage(var_182_int); // 0x1254 TObjFunc
	ClearReplies(); // 0x1256 TObjFunc
	var_183_int = 511799; // 0x1258 PushI
	var_184_int = 13010; // 0x1259 PushI
	var_185_int = 13009; // 0x125a PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x125b TObjFunc
	var_186_int = 515720; // 0x125d PushI
	var_187_int = 16778; // 0x125e PushI
	var_188_int = 16777; // 0x125f PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1260 TObjFunc
	return 0; // 0x1262 Return
	
Label_4707:
	var_189_int = 16778; // 0x1263 PushI
	var_190_bool = var_46_bool == var_189_int; // 0x1264 Eq
	if(var_190_bool == 0) goto Label_4725; // 0x1265 JumpB
	var_191_string = ""; // 0x1266 PushV
	var_191_string = "Neutral"; // 0x1267 MovS
	func_4431(var_47_cvector, var_191_string); // 0x1268 NEW_2
	var_192_int = 515721; // 0x126a PushI
	SetMessage(var_192_int); // 0x126b TObjFunc
	ClearReplies(); // 0x126d TObjFunc
	var_193_int = 515722; // 0x126f PushI
	var_194_int = 16780; // 0x1270 PushI
	var_195_int = 16779; // 0x1271 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1272 TObjFunc
	return 0; // 0x1274 Return
	
Label_4725:
	var_196_int = 16780; // 0x1275 PushI
	var_197_bool = var_46_bool == var_196_int; // 0x1276 Eq
	if(var_197_bool == 0) goto Label_4748; // 0x1277 JumpB
	var_198_string = ""; // 0x1278 PushV
	var_198_string = "Neutral"; // 0x1279 MovS
	func_4431(var_47_cvector, var_198_string); // 0x127a NEW_2
	var_199_int = 515723; // 0x127c PushI
	SetMessage(var_199_int); // 0x127d TObjFunc
	ClearReplies(); // 0x127f TObjFunc
	var_200_int = 515724; // 0x1281 PushI
	var_201_int = -1; // 0x1282 PushI
	var_202_int = 16781; // 0x1283 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1284 TObjFunc
	var_203_int = 515725; // 0x1286 PushI
	var_204_int = -1; // 0x1287 PushI
	var_205_int = 16782; // 0x1288 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1289 TObjFunc
	return 0; // 0x128b Return
	
Label_4748:
	var_206_int = 13010; // 0x128c PushI
	var_207_bool = var_46_bool == var_206_int; // 0x128d Eq
	if(var_207_bool == 0) goto Label_4766; // 0x128e JumpB
	var_208_string = ""; // 0x128f PushV
	var_208_string = "Neutral"; // 0x1290 MovS
	func_4431(var_47_cvector, var_208_string); // 0x1291 NEW_2
	var_209_int = 511800; // 0x1293 PushI
	SetMessage(var_209_int); // 0x1294 TObjFunc
	ClearReplies(); // 0x1296 TObjFunc
	var_210_int = 511801; // 0x1298 PushI
	var_211_int = -1; // 0x1299 PushI
	var_212_int = 13011; // 0x129a PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x129b TObjFunc
	return 0; // 0x129d Return
	
Label_4766:
	var_3_string = 1; // 0x129e TMovB
	var_213_bool = 0; // 0x129f PushV
	func_6948(var_213_bool); // 0x12a0 NEW_2
	if(var_213_bool == 0) goto Label_4774; // 0x12a2 JumpB
	lshStopAnimation(); // 0x12a3 Func
	goto Label_4776; // 0x12a5 Jump
	
Label_4776:
	return 0; // 0x12a8 Return
	
Label_4774:
	StopAnimation(); // 0x12a6 Func
	
Label_4778:
	return 0; // 0x12aa Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x1374 PushI
	if(var_48_int == 0) goto Label_5277; // 0x1375 JumpB
	func_6814(); // 0x1377 NEW_2
	var_50_int = 13415; // 0x1379 PushI
	var_51_bool = var_46_bool == var_50_int; // 0x137a Eq
	if(var_51_bool == 0) goto Label_5047; // 0x137b JumpB
	var_52_bool = 0; // 0x137c PushV
	var_52_bool = 0; // 0x137d MovB
	var_53_bool = 0; var_54_object = Obj(); // 0x137e PushV
	var_54_object = var_1_object; // 0x137f MovT
	func_7731(var_54_object); // 0x1380 NEW_2
	if(var_53_bool == 0) goto Label_5001; // 0x1382 JumpB
	var_61_bool = 0; var_62_object = Obj(); // 0x1383 PushV
	var_62_object = var_1_object; // 0x1384 MovT
	func_7743(var_62_object); // 0x1385 NEW_2
	if(var_61_bool == 0) goto Label_5001; // 0x1387 JumpB
	var_52_bool = 1; // 0x1388 MovB
	
Label_5001:
	if(var_52_bool == 0) goto Label_5027; // 0x1389 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x138a PushV
	var_67_object = var_1_object; // 0x138b MovT
	var_68_object = var_0_object; // 0x138c MovT
	func_7310(); // 0x138d NEW_2
	var_71_string = ""; // 0x138f PushV
	var_71_string = "Neutral"; // 0x1390 MovS
	func_4957(var_47_cvector, var_71_string); // 0x1391 NEW_2
	var_88_int = 512258; // 0x1393 PushI
	SetMessage(var_88_int); // 0x1394 TObjFunc
	ClearReplies(); // 0x1396 TObjFunc
	var_89_int = 512259; // 0x1398 PushI
	var_90_int = 13417; // 0x1399 PushI
	var_91_int = 13416; // 0x139a PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x139b TObjFunc
	var_92_int = 541804; // 0x139d PushI
	var_93_int = -1; // 0x139e PushI
	var_94_int = 44016; // 0x139f PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x13a0 TObjFunc
	return 0; // 0x13a2 Return
	
Label_5027:
	var_95_string = ""; // 0x13a3 PushV
	var_95_string = "Neutral"; // 0x13a4 MovS
	func_4957(var_47_cvector, var_95_string); // 0x13a5 NEW_2
	var_96_int = 513775; // 0x13a7 PushI
	SetMessage(var_96_int); // 0x13a8 TObjFunc
	ClearReplies(); // 0x13aa TObjFunc
	var_97_int = 513776; // 0x13ac PushI
	var_98_int = -1; // 0x13ad PushI
	var_99_int = 15012; // 0x13ae PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x13af TObjFunc
	var_100_int = 541596; // 0x13b1 PushI
	var_101_int = -1; // 0x13b2 PushI
	var_102_int = 43760; // 0x13b3 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x13b4 TObjFunc
	return 0; // 0x13b6 Return
	
Label_5047:
	var_103_int = 13417; // 0x13b7 PushI
	var_104_bool = var_46_bool == var_103_int; // 0x13b8 Eq
	if(var_104_bool == 0) goto Label_5070; // 0x13b9 JumpB
	var_105_string = ""; // 0x13ba PushV
	var_105_string = "Neutral"; // 0x13bb MovS
	func_4957(var_47_cvector, var_105_string); // 0x13bc NEW_2
	var_106_int = 512260; // 0x13be PushI
	SetMessage(var_106_int); // 0x13bf TObjFunc
	ClearReplies(); // 0x13c1 TObjFunc
	var_107_int = 512261; // 0x13c3 PushI
	var_108_int = 13419; // 0x13c4 PushI
	var_109_int = 13418; // 0x13c5 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x13c6 TObjFunc
	var_110_int = 541805; // 0x13c8 PushI
	var_111_int = 44029; // 0x13c9 PushI
	var_112_int = 44017; // 0x13ca PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13cb TObjFunc
	return 0; // 0x13cd Return
	
Label_5070:
	var_113_int = 44029; // 0x13ce PushI
	var_114_bool = var_46_bool == var_113_int; // 0x13cf Eq
	if(var_114_bool == 0) goto Label_5088; // 0x13d0 JumpB
	var_115_string = ""; // 0x13d1 PushV
	var_115_string = "Anger"; // 0x13d2 MovS
	func_4957(var_47_cvector, var_115_string); // 0x13d3 NEW_2
	var_116_int = 541817; // 0x13d5 PushI
	SetMessage(var_116_int); // 0x13d6 TObjFunc
	ClearReplies(); // 0x13d8 TObjFunc
	var_117_int = 541818; // 0x13da PushI
	var_118_int = 13421; // 0x13db PushI
	var_119_int = 44030; // 0x13dc PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x13dd TObjFunc
	return 0; // 0x13df Return
	
Label_5088:
	var_120_int = 13419; // 0x13e0 PushI
	var_121_bool = var_46_bool == var_120_int; // 0x13e1 Eq
	if(var_121_bool == 0) goto Label_5106; // 0x13e2 JumpB
	var_122_string = ""; // 0x13e3 PushV
	var_122_string = "Neutral"; // 0x13e4 MovS
	func_4957(var_47_cvector, var_122_string); // 0x13e5 NEW_2
	var_123_int = 512262; // 0x13e7 PushI
	SetMessage(var_123_int); // 0x13e8 TObjFunc
	ClearReplies(); // 0x13ea TObjFunc
	var_124_int = 512263; // 0x13ec PushI
	var_125_int = 13421; // 0x13ed PushI
	var_126_int = 13420; // 0x13ee PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x13ef TObjFunc
	return 0; // 0x13f1 Return
	
Label_5106:
	var_127_int = 13421; // 0x13f2 PushI
	var_128_bool = var_46_bool == var_127_int; // 0x13f3 Eq
	if(var_128_bool == 0) goto Label_5124; // 0x13f4 JumpB
	var_129_string = ""; // 0x13f5 PushV
	var_129_string = "Neutral"; // 0x13f6 MovS
	func_4957(var_47_cvector, var_129_string); // 0x13f7 NEW_2
	var_130_int = 512264; // 0x13f9 PushI
	SetMessage(var_130_int); // 0x13fa TObjFunc
	ClearReplies(); // 0x13fc TObjFunc
	var_131_int = 512265; // 0x13fe PushI
	var_132_int = 13423; // 0x13ff PushI
	var_133_int = 13422; // 0x1400 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x1401 TObjFunc
	return 0; // 0x1403 Return
	
Label_5124:
	var_134_int = 13423; // 0x1404 PushI
	var_135_bool = var_46_bool == var_134_int; // 0x1405 Eq
	if(var_135_bool == 0) goto Label_5147; // 0x1406 JumpB
	var_136_string = ""; // 0x1407 PushV
	var_136_string = "Neutral"; // 0x1408 MovS
	func_4957(var_47_cvector, var_136_string); // 0x1409 NEW_2
	var_137_int = 512266; // 0x140b PushI
	SetMessage(var_137_int); // 0x140c TObjFunc
	ClearReplies(); // 0x140e TObjFunc
	var_138_int = 512267; // 0x1410 PushI
	var_139_int = 13425; // 0x1411 PushI
	var_140_int = 13424; // 0x1412 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x1413 TObjFunc
	var_141_int = 541819; // 0x1415 PushI
	var_142_int = 44033; // 0x1416 PushI
	var_143_int = 44032; // 0x1417 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1418 TObjFunc
	return 0; // 0x141a Return
	
Label_5147:
	var_144_int = 44033; // 0x141b PushI
	var_145_bool = var_46_bool == var_144_int; // 0x141c Eq
	if(var_145_bool == 0) goto Label_5165; // 0x141d JumpB
	var_146_string = ""; // 0x141e PushV
	var_146_string = "Neutral"; // 0x141f MovS
	func_4957(var_47_cvector, var_146_string); // 0x1420 NEW_2
	var_147_int = 541820; // 0x1422 PushI
	SetMessage(var_147_int); // 0x1423 TObjFunc
	ClearReplies(); // 0x1425 TObjFunc
	var_148_int = 541821; // 0x1427 PushI
	var_149_int = 44035; // 0x1428 PushI
	var_150_int = 44034; // 0x1429 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x142a TObjFunc
	return 0; // 0x142c Return
	
Label_5165:
	var_151_int = 44035; // 0x142d PushI
	var_152_bool = var_46_bool == var_151_int; // 0x142e Eq
	if(var_152_bool == 0) goto Label_5188; // 0x142f JumpB
	var_153_string = ""; // 0x1430 PushV
	var_153_string = "Neutral"; // 0x1431 MovS
	func_4957(var_47_cvector, var_153_string); // 0x1432 NEW_2
	var_154_int = 541822; // 0x1434 PushI
	SetMessage(var_154_int); // 0x1435 TObjFunc
	ClearReplies(); // 0x1437 TObjFunc
	var_155_int = 541823; // 0x1439 PushI
	var_156_int = 44037; // 0x143a PushI
	var_157_int = 44036; // 0x143b PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x143c TObjFunc
	var_158_int = 541826; // 0x143e PushI
	var_159_int = 13425; // 0x143f PushI
	var_160_int = 44039; // 0x1440 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1441 TObjFunc
	return 0; // 0x1443 Return
	
Label_5188:
	var_161_int = 44037; // 0x1444 PushI
	var_162_bool = var_46_bool == var_161_int; // 0x1445 Eq
	if(var_162_bool == 0) goto Label_5206; // 0x1446 JumpB
	var_163_string = ""; // 0x1447 PushV
	var_163_string = "Neutral"; // 0x1448 MovS
	func_4957(var_47_cvector, var_163_string); // 0x1449 NEW_2
	var_164_int = 541824; // 0x144b PushI
	SetMessage(var_164_int); // 0x144c TObjFunc
	ClearReplies(); // 0x144e TObjFunc
	var_165_int = 541825; // 0x1450 PushI
	var_166_int = 13425; // 0x1451 PushI
	var_167_int = 44038; // 0x1452 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1453 TObjFunc
	return 0; // 0x1455 Return
	
Label_5206:
	var_168_int = 13425; // 0x1456 PushI
	var_169_bool = var_46_bool == var_168_int; // 0x1457 Eq
	if(var_169_bool == 0) goto Label_5224; // 0x1458 JumpB
	var_170_string = ""; // 0x1459 PushV
	var_170_string = "Anger"; // 0x145a MovS
	func_4957(var_47_cvector, var_170_string); // 0x145b NEW_2
	var_171_int = 512268; // 0x145d PushI
	SetMessage(var_171_int); // 0x145e TObjFunc
	ClearReplies(); // 0x1460 TObjFunc
	var_172_int = 512269; // 0x1462 PushI
	var_173_int = 13427; // 0x1463 PushI
	var_174_int = 13426; // 0x1464 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1465 TObjFunc
	return 0; // 0x1467 Return
	
Label_5224:
	var_175_int = 13427; // 0x1468 PushI
	var_176_bool = var_46_bool == var_175_int; // 0x1469 Eq
	if(var_176_bool == 0) goto Label_5242; // 0x146a JumpB
	var_177_string = ""; // 0x146b PushV
	var_177_string = "Anger"; // 0x146c MovS
	func_4957(var_47_cvector, var_177_string); // 0x146d NEW_2
	var_178_int = 512270; // 0x146f PushI
	SetMessage(var_178_int); // 0x1470 TObjFunc
	ClearReplies(); // 0x1472 TObjFunc
	var_179_int = 512271; // 0x1474 PushI
	var_180_int = 13429; // 0x1475 PushI
	var_181_int = 13428; // 0x1476 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1477 TObjFunc
	return 0; // 0x1479 Return
	
Label_5242:
	var_182_int = 13429; // 0x147a PushI
	var_183_bool = var_46_bool == var_182_int; // 0x147b Eq
	if(var_183_bool == 0) goto Label_5265; // 0x147c JumpB
	var_184_string = ""; // 0x147d PushV
	var_184_string = "Neutral"; // 0x147e MovS
	func_4957(var_47_cvector, var_184_string); // 0x147f NEW_2
	var_185_int = 512272; // 0x1481 PushI
	SetMessage(var_185_int); // 0x1482 TObjFunc
	ClearReplies(); // 0x1484 TObjFunc
	var_186_int = 512273; // 0x1486 PushI
	var_187_int = -1; // 0x1487 PushI
	var_188_int = 13430; // 0x1488 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1489 TObjFunc
	var_189_int = 541827; // 0x148b PushI
	var_190_int = -1; // 0x148c PushI
	var_191_int = 44042; // 0x148d PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x148e TObjFunc
	return 0; // 0x1490 Return
	
Label_5265:
	var_3_string = 1; // 0x1491 TMovB
	var_192_bool = 0; // 0x1492 PushV
	func_6948(var_192_bool); // 0x1493 NEW_2
	if(var_192_bool == 0) goto Label_5273; // 0x1495 JumpB
	lshStopAnimation(); // 0x1496 Func
	goto Label_5275; // 0x1498 Jump
	
Label_5275:
	return 0; // 0x149b Return
	
Label_5273:
	StopAnimation(); // 0x1499 Func
	
Label_5277:
	return 0; // 0x149d Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x1545 PushI
	if(var_48_int == 0) goto Label_5718; // 0x1546 JumpB
	func_6814(); // 0x1548 NEW_2
	var_50_int = 35708; // 0x154a PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x154b Eq
	if(var_51_bool == 0) goto Label_5463; // 0x154c JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x154d PushV
	var_52_object = var_1_object; // 0x154e MovT
	var_53_object = var_0_object; // 0x154f MovT
	func_7078(); // 0x1550 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x1552 PushV
	var_95_object = var_1_object; // 0x1553 MovT
	var_96_object = var_0_object; // 0x1554 MovT
	func_6960(); // 0x1555 NEW_2
	
Label_5463:
	var_121_int = 35709; // 0x1557 PushI
	var_122_bool = var_47_cvector == var_121_int; // 0x1558 Eq
	if(var_122_bool == 0) goto Label_5476; // 0x1559 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x155a PushV
	var_123_object = var_1_object; // 0x155b MovT
	var_124_object = var_0_object; // 0x155c MovT
	func_7078(); // 0x155d NEW_2
	var_125_object = Obj(); var_126_object = Obj(); // 0x155f PushV
	var_125_object = var_1_object; // 0x1560 MovT
	var_126_object = var_0_object; // 0x1561 MovT
	func_6960(); // 0x1562 NEW_2
	
Label_5476:
	var_127_int = 35702; // 0x1564 PushI
	var_128_bool = var_46_bool == var_127_int; // 0x1565 Eq
	if(var_128_bool == 0) goto Label_5504; // 0x1566 JumpB
	var_129_string = ""; // 0x1567 PushV
	var_129_string = "Neutral"; // 0x1568 MovS
	func_5422(var_47_cvector, var_129_string); // 0x1569 NEW_2
	var_146_int = 534109; // 0x156b PushI
	SetMessage(var_146_int); // 0x156c TObjFunc
	ClearReplies(); // 0x156e TObjFunc
	var_147_bool = 0; var_148_object = Obj(); // 0x1570 PushV
	var_148_object = var_1_object; // 0x1571 MovT
	func_7370(var_148_object); // 0x1572 NEW_2
	if(var_147_bool == 0) goto Label_5498; // 0x1574 JumpB
	var_155_int = 534110; // 0x1575 PushI
	var_156_int = 38263; // 0x1576 PushI
	var_157_int = 35703; // 0x1577 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1578 TObjFunc
	
Label_5498:
	var_158_int = 534111; // 0x157a PushI
	var_159_int = -1; // 0x157b PushI
	var_160_int = 35704; // 0x157c PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x157d TObjFunc
	return 0; // 0x157f Return
	
Label_5504:
	var_161_int = 38263; // 0x1580 PushI
	var_162_bool = var_46_bool == var_161_int; // 0x1581 Eq
	if(var_162_bool == 0) goto Label_5527; // 0x1582 JumpB
	var_163_string = ""; // 0x1583 PushV
	var_163_string = "Grin"; // 0x1584 MovS
	func_5422(var_47_cvector, var_163_string); // 0x1585 NEW_2
	var_164_int = 536470; // 0x1587 PushI
	SetMessage(var_164_int); // 0x1588 TObjFunc
	ClearReplies(); // 0x158a TObjFunc
	var_165_int = 536471; // 0x158c PushI
	var_166_int = 38265; // 0x158d PushI
	var_167_int = 38264; // 0x158e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x158f TObjFunc
	var_168_int = 536477; // 0x1591 PushI
	var_169_int = 38271; // 0x1592 PushI
	var_170_int = 38270; // 0x1593 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1594 TObjFunc
	return 0; // 0x1596 Return
	
Label_5527:
	var_171_int = 38271; // 0x1597 PushI
	var_172_bool = var_46_bool == var_171_int; // 0x1598 Eq
	if(var_172_bool == 0) goto Label_5550; // 0x1599 JumpB
	var_173_string = ""; // 0x159a PushV
	var_173_string = "Neutral"; // 0x159b MovS
	func_5422(var_47_cvector, var_173_string); // 0x159c NEW_2
	var_174_int = 536478; // 0x159e PushI
	SetMessage(var_174_int); // 0x159f TObjFunc
	ClearReplies(); // 0x15a1 TObjFunc
	var_175_int = 536481; // 0x15a3 PushI
	var_176_int = 38267; // 0x15a4 PushI
	var_177_int = 38274; // 0x15a5 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x15a6 TObjFunc
	var_178_int = 536480; // 0x15a8 PushI
	var_179_int = 35705; // 0x15a9 PushI
	var_180_int = 38273; // 0x15aa PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x15ab TObjFunc
	return 0; // 0x15ad Return
	
Label_5550:
	var_181_int = 38265; // 0x15ae PushI
	var_182_bool = var_46_bool == var_181_int; // 0x15af Eq
	if(var_182_bool == 0) goto Label_5573; // 0x15b0 JumpB
	var_183_string = ""; // 0x15b1 PushV
	var_183_string = "Jeer"; // 0x15b2 MovS
	func_5422(var_47_cvector, var_183_string); // 0x15b3 NEW_2
	var_184_int = 536472; // 0x15b5 PushI
	SetMessage(var_184_int); // 0x15b6 TObjFunc
	ClearReplies(); // 0x15b8 TObjFunc
	var_185_int = 536473; // 0x15ba PushI
	var_186_int = 38267; // 0x15bb PushI
	var_187_int = 38266; // 0x15bc PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x15bd TObjFunc
	var_188_int = 536479; // 0x15bf PushI
	var_189_int = 35705; // 0x15c0 PushI
	var_190_int = 38272; // 0x15c1 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x15c2 TObjFunc
	return 0; // 0x15c4 Return
	
Label_5573:
	var_191_int = 38267; // 0x15c5 PushI
	var_192_bool = var_46_bool == var_191_int; // 0x15c6 Eq
	if(var_192_bool == 0) goto Label_5596; // 0x15c7 JumpB
	var_193_string = ""; // 0x15c8 PushV
	var_193_string = "Neutral"; // 0x15c9 MovS
	func_5422(var_47_cvector, var_193_string); // 0x15ca NEW_2
	var_194_int = 536474; // 0x15cc PushI
	SetMessage(var_194_int); // 0x15cd TObjFunc
	ClearReplies(); // 0x15cf TObjFunc
	var_195_int = 536475; // 0x15d1 PushI
	var_196_int = 35705; // 0x15d2 PushI
	var_197_int = 38268; // 0x15d3 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x15d4 TObjFunc
	var_198_int = 536482; // 0x15d6 PushI
	var_199_int = 38279; // 0x15d7 PushI
	var_200_int = 38278; // 0x15d8 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x15d9 TObjFunc
	return 0; // 0x15db Return
	
Label_5596:
	var_201_int = 38279; // 0x15dc PushI
	var_202_bool = var_46_bool == var_201_int; // 0x15dd Eq
	if(var_202_bool == 0) goto Label_5619; // 0x15de JumpB
	var_203_string = ""; // 0x15df PushV
	var_203_string = "Neutral"; // 0x15e0 MovS
	func_5422(var_47_cvector, var_203_string); // 0x15e1 NEW_2
	var_204_int = 536483; // 0x15e3 PushI
	SetMessage(var_204_int); // 0x15e4 TObjFunc
	ClearReplies(); // 0x15e6 TObjFunc
	var_205_int = 536484; // 0x15e8 PushI
	var_206_int = 35705; // 0x15e9 PushI
	var_207_int = 38280; // 0x15ea PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x15eb TObjFunc
	var_208_int = 536485; // 0x15ed PushI
	var_209_int = 35705; // 0x15ee PushI
	var_210_int = 38281; // 0x15ef PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x15f0 TObjFunc
	return 0; // 0x15f2 Return
	
Label_5619:
	var_211_int = 35705; // 0x15f3 PushI
	var_212_bool = var_46_bool == var_211_int; // 0x15f4 Eq
	if(var_212_bool == 0) goto Label_5642; // 0x15f5 JumpB
	var_213_string = ""; // 0x15f6 PushV
	var_213_string = "Grin"; // 0x15f7 MovS
	func_5422(var_47_cvector, var_213_string); // 0x15f8 NEW_2
	var_214_int = 534112; // 0x15fa PushI
	SetMessage(var_214_int); // 0x15fb TObjFunc
	ClearReplies(); // 0x15fd TObjFunc
	var_215_int = 534445; // 0x15ff PushI
	var_216_int = 38305; // 0x1600 PushI
	var_217_int = 36078; // 0x1601 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1602 TObjFunc
	var_218_int = 536486; // 0x1604 PushI
	var_219_int = 36079; // 0x1605 PushI
	var_220_int = 38284; // 0x1606 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1607 TObjFunc
	return 0; // 0x1609 Return
	
Label_5642:
	var_221_int = 38305; // 0x160a PushI
	var_222_bool = var_46_bool == var_221_int; // 0x160b Eq
	if(var_222_bool == 0) goto Label_5665; // 0x160c JumpB
	var_223_string = ""; // 0x160d PushV
	var_223_string = "Neutral"; // 0x160e MovS
	func_5422(var_47_cvector, var_223_string); // 0x160f NEW_2
	var_224_int = 536505; // 0x1611 PushI
	SetMessage(var_224_int); // 0x1612 TObjFunc
	ClearReplies(); // 0x1614 TObjFunc
	var_225_int = 536506; // 0x1616 PushI
	var_226_int = 36079; // 0x1617 PushI
	var_227_int = 38306; // 0x1618 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1619 TObjFunc
	var_228_int = 536507; // 0x161b PushI
	var_229_int = 36079; // 0x161c PushI
	var_230_int = 38307; // 0x161d PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x161e TObjFunc
	return 0; // 0x1620 Return
	
Label_5665:
	var_231_int = 36079; // 0x1621 PushI
	var_232_bool = var_46_bool == var_231_int; // 0x1622 Eq
	if(var_232_bool == 0) goto Label_5683; // 0x1623 JumpB
	var_233_string = ""; // 0x1624 PushV
	var_233_string = "Grin"; // 0x1625 MovS
	func_5422(var_47_cvector, var_233_string); // 0x1626 NEW_2
	var_234_int = 534446; // 0x1628 PushI
	SetMessage(var_234_int); // 0x1629 TObjFunc
	ClearReplies(); // 0x162b TObjFunc
	var_235_int = 534113; // 0x162d PushI
	var_236_int = 35707; // 0x162e PushI
	var_237_int = 35706; // 0x162f PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1630 TObjFunc
	return 0; // 0x1632 Return
	
Label_5683:
	var_238_int = 35707; // 0x1633 PushI
	var_239_bool = var_46_bool == var_238_int; // 0x1634 Eq
	if(var_239_bool == 0) goto Label_5706; // 0x1635 JumpB
	var_240_string = ""; // 0x1636 PushV
	var_240_string = "Grin"; // 0x1637 MovS
	func_5422(var_47_cvector, var_240_string); // 0x1638 NEW_2
	var_241_int = 534114; // 0x163a PushI
	SetMessage(var_241_int); // 0x163b TObjFunc
	ClearReplies(); // 0x163d TObjFunc
	var_242_int = 534115; // 0x163f PushI
	var_243_int = -1; // 0x1640 PushI
	var_244_int = 35708; // 0x1641 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1642 TObjFunc
	var_245_int = 534116; // 0x1644 PushI
	var_246_int = -1; // 0x1645 PushI
	var_247_int = 35709; // 0x1646 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1647 TObjFunc
	return 0; // 0x1649 Return
	
Label_5706:
	var_3_string = 1; // 0x164a TMovB
	var_248_bool = 0; // 0x164b PushV
	func_6948(var_248_bool); // 0x164c NEW_2
	if(var_248_bool == 0) goto Label_5714; // 0x164e JumpB
	lshStopAnimation(); // 0x164f Func
	goto Label_5716; // 0x1651 Jump
	
Label_5716:
	return 0; // 0x1654 Return
	
Label_5714:
	StopAnimation(); // 0x1652 Func
	
Label_5718:
	return 0; // 0x1656 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x16fe PushI
	if(var_48_int == 0) goto Label_6041; // 0x16ff JumpB
	func_6814(); // 0x1701 NEW_2
	var_50_int = 37348; // 0x1703 PushI
	var_51_bool = var_46_bool == var_50_int; // 0x1704 Eq
	if(var_51_bool == 0) goto Label_5919; // 0x1705 JumpB
	var_52_string = ""; // 0x1706 PushV
	var_52_string = "Neutral"; // 0x1707 MovS
	func_5863(var_47_cvector, var_52_string); // 0x1708 NEW_2
	var_69_int = 535662; // 0x170a PushI
	SetMessage(var_69_int); // 0x170b TObjFunc
	ClearReplies(); // 0x170d TObjFunc
	var_70_int = 535663; // 0x170f PushI
	var_71_int = 42111; // 0x1710 PushI
	var_72_int = 37349; // 0x1711 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1712 TObjFunc
	var_73_int = 540003; // 0x1714 PushI
	var_74_int = -1; // 0x1715 PushI
	var_75_int = 41974; // 0x1716 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1717 TObjFunc
	var_76_int = 540138; // 0x1719 PushI
	var_77_int = -1; // 0x171a PushI
	var_78_int = 42110; // 0x171b PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x171c TObjFunc
	return 0; // 0x171e Return
	
Label_5919:
	var_79_int = 42111; // 0x171f PushI
	var_80_bool = var_46_bool == var_79_int; // 0x1720 Eq
	if(var_80_bool == 0) goto Label_5942; // 0x1721 JumpB
	var_81_string = ""; // 0x1722 PushV
	var_81_string = "Grin"; // 0x1723 MovS
	func_5863(var_47_cvector, var_81_string); // 0x1724 NEW_2
	var_82_int = 540139; // 0x1726 PushI
	SetMessage(var_82_int); // 0x1727 TObjFunc
	ClearReplies(); // 0x1729 TObjFunc
	var_83_int = 540219; // 0x172b PushI
	var_84_int = 42200; // 0x172c PushI
	var_85_int = 42199; // 0x172d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x172e TObjFunc
	var_86_int = 540221; // 0x1730 PushI
	var_87_int = 42202; // 0x1731 PushI
	var_88_int = 42201; // 0x1732 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x1733 TObjFunc
	return 0; // 0x1735 Return
	
Label_5942:
	var_89_int = 42202; // 0x1736 PushI
	var_90_bool = var_46_bool == var_89_int; // 0x1737 Eq
	if(var_90_bool == 0) goto Label_5960; // 0x1738 JumpB
	var_91_string = ""; // 0x1739 PushV
	var_91_string = "Grin"; // 0x173a MovS
	func_5863(var_47_cvector, var_91_string); // 0x173b NEW_2
	var_92_int = 540222; // 0x173d PushI
	SetMessage(var_92_int); // 0x173e TObjFunc
	ClearReplies(); // 0x1740 TObjFunc
	var_93_int = 540223; // 0x1742 PushI
	var_94_int = 42200; // 0x1743 PushI
	var_95_int = 42203; // 0x1744 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x1745 TObjFunc
	return 0; // 0x1747 Return
	
Label_5960:
	var_96_int = 42200; // 0x1748 PushI
	var_97_bool = var_46_bool == var_96_int; // 0x1749 Eq
	if(var_97_bool == 0) goto Label_5983; // 0x174a JumpB
	var_98_string = ""; // 0x174b PushV
	var_98_string = "Neutral"; // 0x174c MovS
	func_5863(var_47_cvector, var_98_string); // 0x174d NEW_2
	var_99_int = 540220; // 0x174f PushI
	SetMessage(var_99_int); // 0x1750 TObjFunc
	ClearReplies(); // 0x1752 TObjFunc
	var_100_int = 540224; // 0x1754 PushI
	var_101_int = 42209; // 0x1755 PushI
	var_102_int = 42205; // 0x1756 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x1757 TObjFunc
	var_103_int = 540225; // 0x1759 PushI
	var_104_int = 42207; // 0x175a PushI
	var_105_int = 42206; // 0x175b PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x175c TObjFunc
	return 0; // 0x175e Return
	
Label_5983:
	var_106_int = 42207; // 0x175f PushI
	var_107_bool = var_46_bool == var_106_int; // 0x1760 Eq
	if(var_107_bool == 0) goto Label_6006; // 0x1761 JumpB
	var_108_string = ""; // 0x1762 PushV
	var_108_string = "Neutral"; // 0x1763 MovS
	func_5863(var_47_cvector, var_108_string); // 0x1764 NEW_2
	var_109_int = 540226; // 0x1766 PushI
	SetMessage(var_109_int); // 0x1767 TObjFunc
	ClearReplies(); // 0x1769 TObjFunc
	var_110_int = 540227; // 0x176b PushI
	var_111_int = -1; // 0x176c PushI
	var_112_int = 42208; // 0x176d PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x176e TObjFunc
	var_113_int = 540231; // 0x1770 PushI
	var_114_int = -1; // 0x1771 PushI
	var_115_int = 42212; // 0x1772 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1773 TObjFunc
	return 0; // 0x1775 Return
	
Label_6006:
	var_116_int = 42209; // 0x1776 PushI
	var_117_bool = var_46_bool == var_116_int; // 0x1777 Eq
	if(var_117_bool == 0) goto Label_6029; // 0x1778 JumpB
	var_118_string = ""; // 0x1779 PushV
	var_118_string = "Neutral"; // 0x177a MovS
	func_5863(var_47_cvector, var_118_string); // 0x177b NEW_2
	var_119_int = 540228; // 0x177d PushI
	SetMessage(var_119_int); // 0x177e TObjFunc
	ClearReplies(); // 0x1780 TObjFunc
	var_120_int = 540229; // 0x1782 PushI
	var_121_int = -1; // 0x1783 PushI
	var_122_int = 42210; // 0x1784 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x1785 TObjFunc
	var_123_int = 540230; // 0x1787 PushI
	var_124_int = -1; // 0x1788 PushI
	var_125_int = 42211; // 0x1789 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x178a TObjFunc
	return 0; // 0x178c Return
	
Label_6029:
	var_3_string = 1; // 0x178d TMovB
	var_126_bool = 0; // 0x178e PushV
	func_6948(var_126_bool); // 0x178f NEW_2
	if(var_126_bool == 0) goto Label_6037; // 0x1791 JumpB
	lshStopAnimation(); // 0x1792 Func
	goto Label_6039; // 0x1794 Jump
	
Label_6039:
	return 0; // 0x1797 Return
	
Label_6037:
	StopAnimation(); // 0x1795 Func
	
Label_6041:
	return 0; // 0x1799 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0x183c PushI
	if(var_48_int == 0) goto Label_6244; // 0x183d JumpB
	func_6814(); // 0x183f NEW_2
	var_50_int = 42551; // 0x1841 PushI
	var_51_bool = var_46_int == var_50_int; // 0x1842 Eq
	if(var_51_bool == 0) goto Label_6232; // 0x1843 JumpB
	var_52_string = ""; // 0x1844 PushV
	var_52_string = "Neutral"; // 0x1845 MovS
	func_6181(var_47_cvector, var_52_string); // 0x1846 NEW_2
	var_69_int = 540542; // 0x1848 PushI
	SetMessage(var_69_int); // 0x1849 TObjFunc
	ClearReplies(); // 0x184b TObjFunc
	var_70_int = 540543; // 0x184d PushI
	var_71_int = -1; // 0x184e PushI
	var_72_int = 42552; // 0x184f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1850 TObjFunc
	var_73_int = 540796; // 0x1852 PushI
	var_74_int = -1; // 0x1853 PushI
	var_75_int = 42845; // 0x1854 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1855 TObjFunc
	return 0; // 0x1857 Return
	
Label_6232:
	var_3_string = 1; // 0x1858 TMovB
	var_76_bool = 0; // 0x1859 PushV
	func_6948(var_76_bool); // 0x185a NEW_2
	if(var_76_bool == 0) goto Label_6240; // 0x185c JumpB
	lshStopAnimation(); // 0x185d Func
	goto Label_6242; // 0x185f Jump
	
Label_6242:
	return 0; // 0x1862 Return
	
Label_6240:
	StopAnimation(); // 0x1860 Func
	
Label_6244:
	return 0; // 0x1864 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x18b2 PushI
	var_48_bool = var_46_int == var_47_int; // 0x18b3 Eq
	if(var_48_bool == 0) goto Label_6358; // 0x18b4 JumpB
	func_6317(); // 0x18b6 NEW_2
	var_50_bool = 0; // 0x18b8 PushV
	var_50_bool = 0; // 0x18b9 MovB
	var_51_bool = 0; // 0x18ba PushV
	func_6538(var_51_bool); // 0x18bb NEW_2
	if(var_51_bool == 0) goto Label_6339; // 0x18bd JumpB
	var_54_bool = 0; // 0x18be PushV
	func_6286(var_54_bool); // 0x18bf NEW_2
	if(var_54_bool == 0) goto Label_6339; // 0x18c1 JumpB
	var_50_bool = 1; // 0x18c2 MovB
	
Label_6339:
	if(var_50_bool == 0) goto Label_6352; // 0x18c3 JumpB
	var_71_bool = 0; // 0x18c4 PushV
	func_6266(var_71_bool); // 0x18c5 NEW_2
	if(var_71_bool == 0) goto Label_6351; // 0x18c7 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x18c8 PushV
	var_92_object = Obj(); // 0x18c9 PushV
	func_6821(var_92_object); // 0x18ca NEW_2
	var_91_object = var_92_object; // 0x18cb Mov
	func_6688(var_91_object); // 0x18cd NEW_2
	
Label_6351:
	goto Label_6358; // 0x18cf Jump
	
Label_6358:
	return 0; // 0x18d6 Return
	
Label_6352:
	func_6281(var_46_int); // 0x18d1 NEW_2
	func_6308(); // 0x18d4 NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_6499(); // 0x18d8 NEW_2
	func_6317(); // 0x18db NEW_2
	lshStopSpeech(); // 0x18dd Func
	lshStopAnimation(); // 0x18df Func
	StopAsync(); // 0x18e1 Func
	Hold(); // 0x18e3 Func
	return 0; // 0x18e5 Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x18e6 Func
	func_6317(); // 0x18e9 NEW_2
	var_47_string = ""; // 0x18eb PushV
	var_47_string = "Neutral"; // 0x18ec MovS
	func_6768(var_47_string); // 0x18ed NEW_2
	func_6308(); // 0x18f0 NEW_2
	return 0; // 0x18f2 Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x18f4 Push
	if(var_47_bool == 0) goto Label_6394; // 0x18f5 JumpB
	func_6308(); // 0x18f7 NEW_2
	goto Label_6398; // 0x18f9 Jump
	
Label_6398:
	return 0; // 0x18fe Return
	
Label_6394:
	var_53_string = ""; // 0x18fa PushV
	var_53_string = "Neutral"; // 0x18fb MovS
	func_6768(var_53_string); // 0x18fc NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x18ff PushV
	IsOverrideActive(var_48_bool); // 0x1900 Func
	var_49_bool = var_48_bool == 0; // 0x1902 Not
	if(var_49_bool == 0) goto Label_6427; // 0x1903 JumpB
	EventDisable(0); // 0x1904 EventDisable
	func_6499(); // 0x1906 NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x1908 PushV
	var_51_object = var_46_object; // 0x1909 Mov
	func_6529(var_51_object); // 0x190a NEW_2
	EventEnable(0); // 0x190c EventEnable
	var_64_object = Obj(); // 0x190d PushV
	var_64_object = var_46_object; // 0x190e Mov
	func_8005(var_64_object); // 0x190f NEW_2
	var_1127_string = ""; // 0x1911 PushV
	var_1127_string = "Neutral"; // 0x1912 MovS
	func_6768(var_1127_string); // 0x1913 NEW_2
	func_6317(); // 0x1916 NEW_2
	func_6308(); // 0x1919 NEW_2
	
Label_6427:
	return 2; // 0x191b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1]; // 0x1865 PushGE
	var_46_bool = 0; // 0x1866 MovB
	GlobalVars[1] = var_46_bool; // 0x1867 PopGE
	func_6252(var_45_cvector); // 0x1869 NEW_2
	return 0; // 0x186b Return
}


func_0(var_0_object, var_752_int, var_753_object)
{
	var_755_object = Obj(); var_756_bool = 0; var_757_int = 0; var_758_bool = 0; var_759_object = Obj(); var_760_bool = 0; var_761_int = 0; var_762_bool = 0; // 0x0 PushV
	var_0_object = var_753_object; // 0x1 TMov
	var_763_bool = 0; var_764_object = Obj(); var_765_float = 0; // 0x2 PushV
	var_764_object = var_753_object; // 0x3 Mov
	var_765_float = 70.0; // 0x4 MovF
	func_6543(var_764_object, var_765_float); // 0x5 NEW_2
	var_766_bool = var_763_bool == 0; // 0x7 Not
	if(var_766_bool == 0) goto Label_11; // 0x8 JumpB
	var_752_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_759_object); // 0xb Func
	var_767_int = 0; // 0xd PushV
	func_6942(var_767_int); // 0xe NEW_2
	SetNPCName(var_767_int); // 0x10 ObjFunc
	var_768_int = 0; // 0x12 PushV
	func_6940(var_768_int); // 0x13 NEW_2
	SetNPCDescription(var_768_int); // 0x15 ObjFunc
	var_769_string = ""; // 0x17 PushV
	func_6944(var_769_string); // 0x18 NEW_2
	SetPhoto(var_769_string); // 0x1a ObjFunc
	var_770_string = ""; // 0x1c PushV
	func_6946(var_770_string); // 0x1d NEW_2
	SetPhoto2(var_770_string); // 0x1f ObjFunc
	var_771_int = 0; // 0x21 PushV
	func_7988(var_771_int); // 0x22 NEW_2
	SetPlayerName(var_771_int); // 0x24 ObjFunc
	var_761_int = -1; // 0x26 MovI
	IsOverrideActive(var_760_bool); // 0x27 Func
	var_772_bool = var_760_bool; // 0x29 Push
	if(var_772_bool == 0) goto Label_45; // 0x2a JumpB
	var_752_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_759_object); // 0x2d Func
	var_773_bool = 0; var_774_object = Obj(); // 0x2f PushV
	var_775_object = Obj(); // 0x30 PushV
	func_6821(var_775_object); // 0x31 NEW_2
	var_774_object = var_775_object; // 0x32 Mov
	func_6630(var_773_bool, var_774_object); // 0x34 NEW_2
	var_776_object = Obj(); var_777_object = Obj(); // 0x36 PushV
	var_776_object = var_753_object; // 0x37 Mov
	var_777_object = var_759_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_778_object, var_779_object, var_780_string, var_781_bool, var_776_object, var_777_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_762_bool); // 0x3d ObjFunc
	
Label_63:
	var_861_bool = var_762_bool == 0; // 0x3f Not
	if(var_861_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_762_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_862_object = Obj(); // 0x46 PushV
	var_862_object = var_753_object; // 0x47 Mov
	func_6612(); // 0x48 NEW_2
	StopDialog(var_759_object); // 0x4a Func
	GetReturnValue(var_761_int); // 0x4c ObjFunc
	var_752_int = var_761_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_7170()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1c02 PushV
	var_56_string = "d3q02"; // 0x1c03 PushS
	var_57_int = 1; // 0x1c04 PushI
	SetVariable(var_56_string, var_57_int); // 0x1c05 Func
	var_58_object = Obj(); // 0x1c07 PushV
	func_7938(var_58_object); // 0x1c08 NEW_2
	var_55_object = var_58_object; // 0x1c09 Mov
	var_65_string = "d3q02GeorgGotoViktor"; // 0x1c0b PushS
	var_66_string = "pt_map_viktor"; // 0x1c0c PushS
	var_67_int = 0; // 0x1c0d PushI
	var_68_int = 511379; // 0x1c0e PushI
	var_69_float = 0; // 0x1c0f PushV
	func_6896(var_69_float); // 0x1c10 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1c12 ObjFunc
	func_7845(); // 0x1c15 NEW_2
	func_7871(); // 0x1c18 NEW_2
	var_103_object = Obj(); var_104_string = ""; // 0x1c1a PushV
	var_104_string = "quest_d3_02"; // 0x1c1b MovS
	func_6842(var_103_object, var_104_string); // 0x1c1c NEW_2
	return 2; // 0x1c1e Return
}


func_7683(var_832_bool)
{
	var_834_int = 0; var_835_string = ""; // 0x1e04 PushV
	var_835_string = "ood6Georg1"; // 0x1e05 MovS
	func_6837(var_834_int, var_835_string); // 0x1e06 NEW_2
	var_836_int = 0; // 0x1e08 PushI
	var_837_bool = var_834_int == var_836_int; // 0x1e09 Eq
	if(var_837_bool == 0) goto Label_7693; // 0x1e0a JumpB
	var_832_bool = 1; // 0x1e0b MovB
	return 0; // 0x1e0c Return
	
Label_7693:
	var_832_bool = 0; // 0x1e0d MovB
	return 0; // 0x1e0e Return
}


func_7695(var_841_bool)
{
	var_843_int = 0; var_844_string = ""; // 0x1e10 PushV
	var_844_string = "ood6Georg2"; // 0x1e11 MovS
	func_6837(var_843_int, var_844_string); // 0x1e12 NEW_2
	var_845_int = 0; // 0x1e14 PushI
	var_846_bool = var_843_int == var_845_int; // 0x1e15 Eq
	if(var_846_bool == 0) goto Label_7705; // 0x1e16 JumpB
	var_841_bool = 1; // 0x1e17 MovB
	return 0; // 0x1e18 Return
	
Label_7705:
	var_841_bool = 0; // 0x1e19 MovB
	return 0; // 0x1e1a Return
}


func_7707(var_793_bool)
{
	var_795_int = 0; var_796_string = ""; // 0x1e1c PushV
	var_796_string = "d6RubinGoesToGeorg"; // 0x1e1d MovS
	func_6837(var_795_int, var_796_string); // 0x1e1e NEW_2
	var_797_int = 0; // 0x1e20 PushI
	var_798_bool = var_795_int != var_797_int; // 0x1e21 Neq
	if(var_798_bool == 0) goto Label_7717; // 0x1e22 JumpB
	var_793_bool = 1; // 0x1e23 MovB
	return 0; // 0x1e24 Return
	
Label_7717:
	var_793_bool = 0; // 0x1e25 MovB
	return 0; // 0x1e26 Return
}


func_7200()
{
	func_7884(); // 0x1c22 NEW_2
	var_206_bool = 0; var_207_string = ""; var_208_string = ""; // 0x1c24 PushV
	var_207_string = "quest_d3_02"; // 0x1c25 MovS
	var_208_string = "completed"; // 0x1c26 MovS
	func_6884(var_206_bool, var_207_string, var_208_string); // 0x1c27 NEW_2
	return 0; // 0x1c29 Return
}


func_6688(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x1a20 PushV
	var_163_string = "c"; // 0x1a21 MovS
	var_164_int = 0; // 0x1a22 MovI
	
Label_6691:
	var_168_int = 1; // 0x1a23 PushI
	if(var_168_int == 0) goto Label_6704; // 0x1a24 JumpB
	var_169_int = 1; // 0x1a25 PushI
	var_170_int = var_164_int + var_169_int; // 0x1a26 Add
	var_171_int = var_163_string + var_170_int; // 0x1a27 Add
	HasProperty(var_171_int, var_165_bool); // 0x1a28 ObjFunc
	var_172_bool = var_165_bool == 0; // 0x1a2a Not
	if(var_172_bool == 0) goto Label_6701; // 0x1a2b JumpB
	goto Label_6704; // 0x1a2c Jump
	
Label_6704:
	var_173_bool = var_164_int == 0; // 0x1a30 Not
	if(var_173_bool == 0) goto Label_6708; // 0x1a31 JumpB
	var_156_bool = 0; // 0x1a32 MovB
	return 10; // 0x1a33 Return
	
Label_6708:
	var_166_int = 0; // 0x1a34 MovI
	var_174_int = 1; // 0x1a35 PushI
	var_175_bool = var_164_int > var_174_int; // 0x1a36 GT
	if(var_175_bool == 0) goto Label_6714; // 0x1a37 JumpB
	irand(var_166_int, var_164_int); // 0x1a38 Func
	
Label_6714:
	var_176_int = 1; // 0x1a3a PushI
	var_177_int = var_166_int + var_176_int; // 0x1a3b Add
	var_178_int = var_163_string + var_177_int; // 0x1a3c Add
	GetProperty(var_178_int, var_167_string); // 0x1a3d ObjFunc
	var_179_bool = 0; var_180_string = ""; // 0x1a3f PushV
	var_180_string = var_167_string; // 0x1a40 Mov
	func_6799(var_179_bool, var_180_string); // 0x1a41 NEW_2
	var_156_bool = var_179_bool; // 0x1a42 Mov
	return 10; // 0x1a44 Return
	
Label_6701:
	var_185_int = 1; // 0x1a2d PushI
	var_164_int = var_164_int + var_185_int; // 0x1a2e Add2
	goto Label_6691; // 0x1a2f Jump
}


func_547(var_0_object, var_73_int, var_74_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_int = 0; var_79_bool = 0; var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; // 0x223 PushV
	var_0_object = var_74_object; // 0x224 TMov
	var_84_bool = 0; var_85_object = Obj(); var_86_float = 0; // 0x225 PushV
	var_85_object = var_74_object; // 0x226 Mov
	var_86_float = 70.0; // 0x227 MovF
	func_6543(var_85_object, var_86_float); // 0x228 NEW_2
	var_131_bool = var_84_bool == 0; // 0x22a Not
	if(var_131_bool == 0) goto Label_558; // 0x22b JumpB
	var_73_int = -2; // 0x22c MovI
	return 8; // 0x22d Return
	
Label_558:
	CreateDialog(var_80_object); // 0x22e Func
	var_132_int = 0; // 0x230 PushV
	func_6942(var_132_int); // 0x231 NEW_2
	SetNPCName(var_132_int); // 0x233 ObjFunc
	var_133_int = 0; // 0x235 PushV
	func_6940(var_133_int); // 0x236 NEW_2
	SetNPCDescription(var_133_int); // 0x238 ObjFunc
	var_134_string = ""; // 0x23a PushV
	func_6944(var_134_string); // 0x23b NEW_2
	SetPhoto(var_134_string); // 0x23d ObjFunc
	var_135_string = ""; // 0x23f PushV
	func_6946(var_135_string); // 0x240 NEW_2
	SetPhoto2(var_135_string); // 0x242 ObjFunc
	var_136_int = 0; // 0x244 PushV
	func_7988(var_136_int); // 0x245 NEW_2
	SetPlayerName(var_136_int); // 0x247 ObjFunc
	var_82_int = -1; // 0x249 MovI
	IsOverrideActive(var_81_bool); // 0x24a Func
	var_144_bool = var_81_bool; // 0x24c Push
	if(var_144_bool == 0) goto Label_592; // 0x24d JumpB
	var_73_int = -2; // 0x24e MovI
	return 8; // 0x24f Return
	
Label_592:
	DoDialog(var_80_object); // 0x250 Func
	var_145_bool = 0; var_146_object = Obj(); // 0x252 PushV
	var_147_object = Obj(); // 0x253 PushV
	func_6821(var_147_object); // 0x254 NEW_2
	var_146_object = var_147_object; // 0x255 Mov
	func_6630(var_145_bool, var_146_object); // 0x257 NEW_2
	var_235_object = Obj(); var_236_object = Obj(); // 0x259 PushV
	var_235_object = var_74_object; // 0x25a Mov
	var_236_object = var_80_object; // 0x25b Mov
	TaskCall(3); // 0x25c TaskCall
	func_628(var_237_object, var_238_object, var_239_string, var_240_bool, var_235_object, var_236_object); // 0x25d NEW_2
	TaskReturn(); // 0x25e TaskReturn
	IsDialogEnd(var_83_bool); // 0x260 ObjFunc
	
Label_610:
	var_411_bool = var_83_bool == 0; // 0x262 Not
	if(var_411_bool == 0) goto Label_617; // 0x263 JumpB
	sync(); // 0x264 Func
	IsDialogEnd(var_83_bool); // 0x266 ObjFunc
	goto Label_610; // 0x268 Jump
	
Label_617:
	var_412_object = Obj(); // 0x269 PushV
	var_412_object = var_74_object; // 0x26a Mov
	func_6612(); // 0x26b NEW_2
	StopDialog(var_80_object); // 0x26d Func
	GetReturnValue(var_82_int); // 0x26f ObjFunc
	var_73_int = var_82_int; // 0x271 Mov
	return 8; // 0x272 Return
}


func_6181(var_2_object, var_1102_string)
{
	var_1103_bool = 0; // 0x1826 PushV
	func_6948(var_1103_bool); // 0x1827 NEW_2
	var_1104_bool = var_1103_bool == 0; // 0x1829 Not
	if(var_1104_bool == 0) goto Label_6188; // 0x182a JumpB
	return 0; // 0x182b Return
	
Label_6188:
	var_1105_bool = var_1102_string == var_2_object; // 0x182c Eq
	if(var_1105_bool == 0) goto Label_6191; // 0x182d JumpB
	return 0; // 0x182e Return
	
Label_6191:
	var_1106_string = ""; var_1107_bool = 0; // 0x182f PushV
	var_1106_string = var_1102_string; // 0x1830 Mov
	var_1108_string = ""; // 0x1831 PushS
	var_1109_bool = var_1102_string == var_1108_string; // 0x1832 Eq
	if(var_1109_bool == 0) goto Label_6198; // 0x1833 JumpB
	var_1107_bool = 0; // 0x1834 MovB
	goto Label_6199; // 0x1835 Jump
	
Label_6199:
	func_6784(var_1106_string, var_1107_bool); // 0x1837 NEW_2
	var_2_object = var_1102_string; // 0x1839 TMov
	return 0; // 0x183a Return
	
Label_6198:
	var_1107_bool = 1; // 0x1836 MovB
}


func_7719(var_799_bool)
{
	var_801_int = 0; var_802_string = ""; // 0x1e28 PushV
	var_802_string = "ood6Georg3"; // 0x1e29 MovS
	func_6837(var_801_int, var_802_string); // 0x1e2a NEW_2
	var_803_int = 0; // 0x1e2c PushI
	var_804_bool = var_801_int == var_803_int; // 0x1e2d Eq
	if(var_804_bool == 0) goto Label_7729; // 0x1e2e JumpB
	var_799_bool = 1; // 0x1e2f MovB
	return 0; // 0x1e30 Return
	
Label_7729:
	var_799_bool = 0; // 0x1e31 MovB
	return 0; // 0x1e32 Return
}


func_7210()
{
	var_110_object = Obj(); var_111_string = ""; var_112_float = 0; // 0x1c2b PushV
	var_113_object = Obj(); // 0x1c2c PushV
	func_7938(var_113_object); // 0x1c2d NEW_2
	var_110_object = var_113_object; // 0x1c2e Mov
	var_111_string = "pt_map_viktor"; // 0x1c30 MovS
	var_112_float = 2; // 0x1c31 MovI
	func_7955(var_110_object, var_111_string, var_112_float); // 0x1c32 NEW_2
	var_133_object = Obj(); // 0x1c34 PushV
	func_7938(var_133_object); // 0x1c35 NEW_2
	ShowMap(var_133_object); // 0x1c37 ObjFunc
	return 0; // 0x1c39 Return
}


func_7731(var_897_bool)
{
	var_899_int = 0; var_900_string = ""; // 0x1e34 PushV
	var_900_string = "d8KainIsReason"; // 0x1e35 MovS
	func_6837(var_899_int, var_900_string); // 0x1e36 NEW_2
	var_901_int = 1; // 0x1e38 PushI
	var_902_bool = var_899_int == var_901_int; // 0x1e39 Eq
	if(var_902_bool == 0) goto Label_7741; // 0x1e3a JumpB
	var_897_bool = 1; // 0x1e3b MovB
	return 0; // 0x1e3c Return
	
Label_7741:
	var_897_bool = 0; // 0x1e3d MovB
	return 0; // 0x1e3e Return
}


func_7226()
{
	var_190_string = "ood3Georg3"; // 0x1c3b PushS
	var_191_int = 1; // 0x1c3c PushI
	SetVariable(var_190_string, var_191_int); // 0x1c3d Func
	return 0; // 0x1c3f Return
}


func_7743(var_903_bool)
{
	var_905_int = 0; var_906_string = ""; // 0x1e40 PushV
	var_906_string = "ood8Georg1"; // 0x1e41 MovS
	func_6837(var_905_int, var_906_string); // 0x1e42 NEW_2
	var_907_int = 0; // 0x1e44 PushI
	var_908_bool = var_905_int == var_907_int; // 0x1e45 Eq
	if(var_908_bool == 0) goto Label_7753; // 0x1e46 JumpB
	var_903_bool = 1; // 0x1e47 MovB
	return 0; // 0x1e48 Return
	
Label_7753:
	var_903_bool = 0; // 0x1e49 MovB
	return 0; // 0x1e4a Return
}


func_7232()
{
	var_252_string = "ood1Georg1"; // 0x1c41 PushS
	var_253_int = 1; // 0x1c42 PushI
	SetVariable(var_252_string, var_253_int); // 0x1c43 Func
	return 0; // 0x1c45 Return
}


func_6725(var_187_bool)
{
	var_189_string = ""; var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_string = ""; var_194_string = ""; var_195_int = 0; var_196_bool = 0; var_197_int = 0; var_198_string = ""; // 0x1a45 PushV
	var_199_string = "d"; // 0x1a46 PushS
	var_200_int = 0; // 0x1a47 PushV
	func_6901(var_200_int); // 0x1a48 NEW_2
	var_201_int = var_199_string + var_200_int; // 0x1a4a Add
	var_202_string = "m"; // 0x1a4b PushS
	var_194_string = var_201_int + var_202_string; // 0x1a4c Add2
	var_195_int = 0; // 0x1a4d MovI
	
Label_6734:
	var_203_int = 1; // 0x1a4e PushI
	if(var_203_int == 0) goto Label_6747; // 0x1a4f JumpB
	var_204_int = 1; // 0x1a50 PushI
	var_205_int = var_195_int + var_204_int; // 0x1a51 Add
	var_206_int = var_194_string + var_205_int; // 0x1a52 Add
	HasProperty(var_206_int, var_196_bool); // 0x1a53 ObjFunc
	var_207_bool = var_196_bool == 0; // 0x1a55 Not
	if(var_207_bool == 0) goto Label_6744; // 0x1a56 JumpB
	goto Label_6747; // 0x1a57 Jump
	
Label_6747:
	var_208_bool = var_195_int == 0; // 0x1a5b Not
	if(var_208_bool == 0) goto Label_6751; // 0x1a5c JumpB
	var_187_bool = 0; // 0x1a5d MovB
	return 10; // 0x1a5e Return
	
Label_6751:
	var_197_int = 0; // 0x1a5f MovI
	var_209_int = 1; // 0x1a60 PushI
	var_210_bool = var_195_int > var_209_int; // 0x1a61 GT
	if(var_210_bool == 0) goto Label_6757; // 0x1a62 JumpB
	irand(var_197_int, var_195_int); // 0x1a63 Func
	
Label_6757:
	var_211_int = 1; // 0x1a65 PushI
	var_212_int = var_197_int + var_211_int; // 0x1a66 Add
	var_213_int = var_194_string + var_212_int; // 0x1a67 Add
	GetProperty(var_213_int, var_198_string); // 0x1a68 ObjFunc
	var_214_bool = 0; var_215_string = ""; // 0x1a6a PushV
	var_215_string = var_198_string; // 0x1a6b Mov
	func_6799(var_214_bool, var_215_string); // 0x1a6c NEW_2
	var_187_bool = var_214_bool; // 0x1a6d Mov
	return 10; // 0x1a6f Return
	
Label_6744:
	var_216_int = 1; // 0x1a58 PushI
	var_195_int = var_195_int + var_216_int; // 0x1a59 Add2
	goto Label_6734; // 0x1a5a Jump
}


func_7238()
{
	var_192_string = "ood1Georg2"; // 0x1c47 PushS
	var_193_int = 1; // 0x1c48 PushI
	SetVariable(var_192_string, var_193_int); // 0x1c49 Func
	return 0; // 0x1c4b Return
}


func_7755(var_728_bool)
{
	var_730_int = 0; var_731_string = ""; // 0x1e4c PushV
	var_731_string = "ood5Georg2"; // 0x1e4d MovS
	func_6837(var_730_int, var_731_string); // 0x1e4e NEW_2
	var_732_int = 0; // 0x1e50 PushI
	var_733_bool = var_730_int == var_732_int; // 0x1e51 Eq
	if(var_733_bool == 0) goto Label_7765; // 0x1e52 JumpB
	var_728_bool = 1; // 0x1e53 MovB
	return 0; // 0x1e54 Return
	
Label_7765:
	var_728_bool = 0; // 0x1e55 MovB
	return 0; // 0x1e56 Return
}


func_7244()
{
	var_198_string = "ood1Georg3"; // 0x1c4d PushS
	var_199_int = 1; // 0x1c4e PushI
	SetVariable(var_198_string, var_199_int); // 0x1c4f Func
	return 0; // 0x1c51 Return
}


func_2639(var_0_object, var_1_object, var_2_object, var_3_string, var_446_object, var_447_object)
{
	var_0_object = var_447_object; // 0xa50 TMov
	var_1_object = var_446_object; // 0xa51 TMov
	var_3_string = 0; // 0xa52 TMovB
	var_452_int = 1; // 0xa53 PushI
	if(var_452_int == 0) goto Label_2730; // 0xa54 JumpB
	var_453_bool = 0; // 0xa55 PushV
	var_453_bool = 0; // 0xa56 MovB
	var_454_bool = 0; var_455_object = Obj(); // 0xa57 PushV
	var_455_object = var_1_object; // 0xa58 MovT
	func_7431(var_455_object); // 0xa59 NEW_2
	if(var_454_bool == 0) goto Label_2658; // 0xa5b JumpB
	var_460_bool = 0; var_461_object = Obj(); // 0xa5c PushV
	var_461_object = var_1_object; // 0xa5d MovT
	func_7467(var_461_object); // 0xa5e NEW_2
	if(var_460_bool == 0) goto Label_2658; // 0xa60 JumpB
	var_453_bool = 1; // 0xa61 MovB
	
Label_2658:
	if(var_453_bool == 0) goto Label_2689; // 0xa62 JumpB
	var_466_string = ""; // 0xa63 PushV
	var_466_string = "Neutral"; // 0xa64 MovS
	func_2760(var_447_object, var_466_string); // 0xa65 NEW_2
	var_474_int = 506829; // 0xa67 PushI
	SetMessage(var_474_int); // 0xa68 TObjFunc
	ClearReplies(); // 0xa6a TObjFunc
	var_475_int = 506830; // 0xa6c PushI
	var_476_int = 7531; // 0xa6d PushI
	var_477_int = 7530; // 0xa6e PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xa6f TObjFunc
	var_478_int = 506844; // 0xa71 PushI
	var_479_int = 7547; // 0xa72 PushI
	var_480_int = 7546; // 0xa73 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xa74 TObjFunc
	var_481_int = 506849; // 0xa76 PushI
	var_482_int = 7535; // 0xa77 PushI
	var_483_int = 7554; // 0xa78 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0xa79 TObjFunc
	var_484_int = 506848; // 0xa7b PushI
	var_485_int = 7547; // 0xa7c PushI
	var_486_int = 7552; // 0xa7d PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xa7e TObjFunc
	goto Label_2730; // 0xa80 Jump
	
Label_2730:
	var_487_bool = 0; // 0xaaa PushV
	func_6948(var_487_bool); // 0xaab NEW_2
	if(var_487_bool == 0) goto Label_2745; // 0xaad JumpB
	
Label_2734:
	lshWaitForAnimEnd(); // 0xaae Func
	var_488_string = var_3_string; // 0xab0 PushT
	if(var_488_string == 0) goto Label_2739; // 0xab1 JumpB
	goto Label_2744; // 0xab2 Jump
	
Label_2744:
	goto Label_2759; // 0xab8 Jump
	
Label_2759:
	return 0; // 0xac7 Return
	
Label_2739:
	var_489_string = ""; // 0xab3 PushV
	var_489_string = var_2_object; // 0xab4 MovT
	func_6768(var_489_string); // 0xab5 NEW_2
	goto Label_2734; // 0xab7 Jump
	
Label_2745:
	var_490_string = "all"; // 0xab9 PushS
	var_491_string = "idle"; // 0xaba PushS
	PlayAnimation(var_490_string, var_491_string); // 0xabb Func
	
Label_2749:
	WaitForAnimEnd(); // 0xabd Func
	var_492_string = var_3_string; // 0xabf PushT
	if(var_492_string == 0) goto Label_2754; // 0xac0 JumpB
	goto Label_2759; // 0xac1 Jump
	
Label_2754:
	var_493_string = "all"; // 0xac2 PushS
	var_494_string = "idle"; // 0xac3 PushS
	PlayAnimation(var_493_string, var_494_string); // 0xac4 Func
	goto Label_2749; // 0xac6 Jump
	
Label_2689:
	var_495_string = ""; // 0xa81 PushV
	var_495_string = "Neutral"; // 0xa82 MovS
	func_2760(var_447_object, var_495_string); // 0xa83 NEW_2
	var_496_int = 506850; // 0xa85 PushI
	SetMessage(var_496_int); // 0xa86 TObjFunc
	ClearReplies(); // 0xa88 TObjFunc
	var_497_bool = 0; // 0xa8a PushV
	var_497_bool = 0; // 0xa8b MovB
	var_498_bool = 0; var_499_object = Obj(); // 0xa8c PushV
	var_499_object = var_1_object; // 0xa8d MovT
	func_7443(var_499_object); // 0xa8e NEW_2
	if(var_498_bool == 0) goto Label_2711; // 0xa90 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0xa91 PushV
	var_505_object = var_1_object; // 0xa92 MovT
	func_7455(var_505_object); // 0xa93 NEW_2
	if(var_504_bool == 0) goto Label_2711; // 0xa95 JumpB
	var_497_bool = 1; // 0xa96 MovB
	
Label_2711:
	if(var_497_bool == 0) goto Label_2717; // 0xa97 JumpB
	var_510_int = 506851; // 0xa98 PushI
	var_511_int = 7835; // 0xa99 PushI
	var_512_int = 7557; // 0xa9a PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0xa9b TObjFunc
	
Label_2717:
	var_513_int = 507536; // 0xa9d PushI
	var_514_int = -1; // 0xa9e PushI
	var_515_int = 8318; // 0xa9f PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xaa0 TObjFunc
	var_516_int = 533836; // 0xaa2 PushI
	var_517_int = -1; // 0xaa3 PushI
	var_518_int = 35386; // 0xaa4 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xaa5 TObjFunc
	goto Label_2730; // 0xaa7 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_776_object, var_777_object)
{
	var_0_object = var_777_object; // 0x52 TMov
	var_1_object = var_776_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_782_int = 1; // 0x55 PushI
	if(var_782_int == 0) goto Label_173; // 0x56 JumpB
	var_783_string = ""; // 0x57 PushV
	var_783_string = "Neutral"; // 0x58 MovS
	func_203(var_777_object, var_783_string); // 0x59 NEW_2
	var_791_int = 512009; // 0x5b PushI
	SetMessage(var_791_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_792_bool = 0; // 0x60 PushV
	var_792_bool = 0; // 0x61 MovB
	var_793_bool = 0; var_794_object = Obj(); // 0x62 PushV
	var_794_object = var_1_object; // 0x63 MovT
	func_7707(var_794_object); // 0x64 NEW_2
	if(var_793_bool == 0) goto Label_109; // 0x66 JumpB
	var_799_bool = 0; var_800_object = Obj(); // 0x67 PushV
	var_800_object = var_1_object; // 0x68 MovT
	func_7719(var_800_object); // 0x69 NEW_2
	if(var_799_bool == 0) goto Label_109; // 0x6b JumpB
	var_792_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_792_bool == 0) goto Label_115; // 0x6d JumpB
	var_805_int = 512010; // 0x6e PushI
	var_806_int = 13230; // 0x6f PushI
	var_807_int = 13228; // 0x70 PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x71 TObjFunc
	
Label_115:
	var_808_bool = 0; // 0x73 PushV
	var_808_bool = 0; // 0x74 MovB
	var_809_bool = 0; // 0x75 PushV
	var_809_bool = 0; // 0x76 MovB
	var_810_bool = 0; // 0x77 PushV
	var_810_bool = 0; // 0x78 MovB
	var_811_bool = 0; var_812_object = Obj(); // 0x79 PushV
	var_812_object = var_1_object; // 0x7a MovT
	func_7647(var_812_object); // 0x7b NEW_2
	var_817_bool = var_811_bool == 0; // 0x7d Not
	if(var_817_bool == 0) goto Label_134; // 0x7e JumpB
	var_818_bool = 0; var_819_object = Obj(); // 0x7f PushV
	var_819_object = var_1_object; // 0x80 MovT
	func_7659(var_819_object); // 0x81 NEW_2
	var_824_bool = var_818_bool == 0; // 0x83 Not
	if(var_824_bool == 0) goto Label_134; // 0x84 JumpB
	var_810_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_810_bool == 0) goto Label_142; // 0x86 JumpB
	var_825_bool = 0; var_826_object = Obj(); // 0x87 PushV
	var_826_object = var_1_object; // 0x88 MovT
	func_7671(var_826_object); // 0x89 NEW_2
	var_831_bool = var_825_bool == 0; // 0x8b Not
	if(var_831_bool == 0) goto Label_142; // 0x8c JumpB
	var_809_bool = 1; // 0x8d MovB
	
Label_142:
	if(var_809_bool == 0) goto Label_149; // 0x8e JumpB
	var_832_bool = 0; var_833_object = Obj(); // 0x8f PushV
	var_833_object = var_1_object; // 0x90 MovT
	func_7683(var_833_object); // 0x91 NEW_2
	if(var_832_bool == 0) goto Label_149; // 0x93 JumpB
	var_808_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_808_bool == 0) goto Label_155; // 0x95 JumpB
	var_838_int = 512014; // 0x96 PushI
	var_839_int = 13233; // 0x97 PushI
	var_840_int = 13232; // 0x98 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x99 TObjFunc
	
Label_155:
	var_841_bool = 0; var_842_object = Obj(); // 0x9b PushV
	var_842_object = var_1_object; // 0x9c MovT
	func_7695(var_842_object); // 0x9d NEW_2
	if(var_841_bool == 0) goto Label_165; // 0x9f JumpB
	var_847_int = 512018; // 0xa0 PushI
	var_848_int = 3560; // 0xa1 PushI
	var_849_int = 13236; // 0xa2 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0xa3 TObjFunc
	
Label_165:
	var_850_int = 512011; // 0xa5 PushI
	var_851_int = -1; // 0xa6 PushI
	var_852_int = 13229; // 0xa7 PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0xa8 TObjFunc
	goto Label_173; // 0xaa Jump
	
Label_173:
	var_853_bool = 0; // 0xad PushV
	func_6948(var_853_bool); // 0xae NEW_2
	if(var_853_bool == 0) goto Label_188; // 0xb0 JumpB
	
Label_177:
	lshWaitForAnimEnd(); // 0xb1 Func
	var_854_string = var_3_string; // 0xb3 PushT
	if(var_854_string == 0) goto Label_182; // 0xb4 JumpB
	goto Label_187; // 0xb5 Jump
	
Label_187:
	goto Label_202; // 0xbb Jump
	
Label_202:
	return 0; // 0xca Return
	
Label_182:
	var_855_string = ""; // 0xb6 PushV
	var_855_string = var_2_object; // 0xb7 MovT
	func_6768(var_855_string); // 0xb8 NEW_2
	goto Label_177; // 0xba Jump
	
Label_188:
	var_856_string = "all"; // 0xbc PushS
	var_857_string = "idle"; // 0xbd PushS
	PlayAnimation(var_856_string, var_857_string); // 0xbe Func
	
Label_192:
	WaitForAnimEnd(); // 0xc0 Func
	var_858_string = var_3_string; // 0xc2 PushT
	if(var_858_string == 0) goto Label_197; // 0xc3 JumpB
	goto Label_202; // 0xc4 Jump
	
Label_197:
	var_859_string = "all"; // 0xc5 PushS
	var_860_string = "idle"; // 0xc6 PushS
	PlayAnimation(var_859_string, var_860_string); // 0xc7 Func
	goto Label_192; // 0xc9 Jump
}


func_7250()
{
	var_416_string = "KnowRubin"; // 0x1c53 PushS
	var_417_int = 1; // 0x1c54 PushI
	SetVariable(var_416_string, var_417_int); // 0x1c55 Func
	return 0; // 0x1c57 Return
}


func_7767()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1e57 PushV
	var_74_int = 670; // 0x1e58 PushI
	var_75_int = 2; // 0x1e59 PushI
	var_76_int = 534124; // 0x1e5a PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x1e5b Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x1e5d PushV
	var_78_object = var_73_object; // 0x1e5e Mov
	var_79_int = 666; // 0x1e5f MovI
	func_7910(var_77_bool, var_78_object, var_79_int); // 0x1e60 NEW_2
	return 2; // 0x1e62 Return
}


func_7256()
{
	var_576_string = "KnowSaburivClan"; // 0x1c59 PushS
	var_577_int = 1; // 0x1c5a PushI
	SetVariable(var_576_string, var_577_int); // 0x1c5b Func
	return 0; // 0x1c5d Return
}


func_5719(var_0_object, var_1012_int, var_1013_object)
{
	var_1015_object = Obj(); var_1016_bool = 0; var_1017_int = 0; var_1018_bool = 0; var_1019_object = Obj(); var_1020_bool = 0; var_1021_int = 0; var_1022_bool = 0; // 0x1657 PushV
	var_0_object = var_1013_object; // 0x1658 TMov
	var_1023_bool = 0; var_1024_object = Obj(); var_1025_float = 0; // 0x1659 PushV
	var_1024_object = var_1013_object; // 0x165a Mov
	var_1025_float = 70.0; // 0x165b MovF
	func_6543(var_1024_object, var_1025_float); // 0x165c NEW_2
	var_1026_bool = var_1023_bool == 0; // 0x165e Not
	if(var_1026_bool == 0) goto Label_5730; // 0x165f JumpB
	var_1012_int = -2; // 0x1660 MovI
	return 8; // 0x1661 Return
	
Label_5730:
	CreateDialog(var_1019_object); // 0x1662 Func
	var_1027_int = 0; // 0x1664 PushV
	func_6942(var_1027_int); // 0x1665 NEW_2
	SetNPCName(var_1027_int); // 0x1667 ObjFunc
	var_1028_int = 0; // 0x1669 PushV
	func_6940(var_1028_int); // 0x166a NEW_2
	SetNPCDescription(var_1028_int); // 0x166c ObjFunc
	var_1029_string = ""; // 0x166e PushV
	func_6944(var_1029_string); // 0x166f NEW_2
	SetPhoto(var_1029_string); // 0x1671 ObjFunc
	var_1030_string = ""; // 0x1673 PushV
	func_6946(var_1030_string); // 0x1674 NEW_2
	SetPhoto2(var_1030_string); // 0x1676 ObjFunc
	var_1031_int = 0; // 0x1678 PushV
	func_7988(var_1031_int); // 0x1679 NEW_2
	SetPlayerName(var_1031_int); // 0x167b ObjFunc
	var_1021_int = -1; // 0x167d MovI
	IsOverrideActive(var_1020_bool); // 0x167e Func
	var_1032_bool = var_1020_bool; // 0x1680 Push
	if(var_1032_bool == 0) goto Label_5764; // 0x1681 JumpB
	var_1012_int = -2; // 0x1682 MovI
	return 8; // 0x1683 Return
	
Label_5764:
	DoDialog(var_1019_object); // 0x1684 Func
	var_1033_bool = 0; var_1034_object = Obj(); // 0x1686 PushV
	var_1035_object = Obj(); // 0x1687 PushV
	func_6821(var_1035_object); // 0x1688 NEW_2
	var_1034_object = var_1035_object; // 0x1689 Mov
	func_6630(var_1033_bool, var_1034_object); // 0x168b NEW_2
	var_1036_object = Obj(); var_1037_object = Obj(); // 0x168d PushV
	var_1036_object = var_1013_object; // 0x168e Mov
	var_1037_object = var_1019_object; // 0x168f Mov
	TaskCall(15); // 0x1690 TaskCall
	func_5800(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object); // 0x1691 NEW_2
	TaskReturn(); // 0x1692 TaskReturn
	IsDialogEnd(var_1022_bool); // 0x1694 ObjFunc
	
Label_5782:
	var_1069_bool = var_1022_bool == 0; // 0x1696 Not
	if(var_1069_bool == 0) goto Label_5789; // 0x1697 JumpB
	sync(); // 0x1698 Func
	IsDialogEnd(var_1022_bool); // 0x169a ObjFunc
	goto Label_5782; // 0x169c Jump
	
Label_5789:
	var_1070_object = Obj(); // 0x169d PushV
	var_1070_object = var_1013_object; // 0x169e Mov
	func_6612(); // 0x169f NEW_2
	StopDialog(var_1019_object); // 0x16a1 Func
	GetReturnValue(var_1021_int); // 0x16a3 ObjFunc
	var_1012_int = var_1021_int; // 0x16a5 Mov
	return 8; // 0x16a6 Return
}


func_7262()
{
	var_572_string = "KnowOlgimskiClan"; // 0x1c5f PushS
	var_573_int = 1; // 0x1c60 PushI
	SetVariable(var_572_string, var_573_int); // 0x1c61 Func
	return 0; // 0x1c63 Return
}


func_7268()
{
	var_568_string = "KnowKainClan"; // 0x1c65 PushS
	var_569_int = 1; // 0x1c66 PushI
	SetVariable(var_568_string, var_569_int); // 0x1c67 Func
	return 0; // 0x1c69 Return
}


func_7780()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1e64 PushV
	var_79_int = 2; // 0x1e65 PushI
	var_80_int = 1; // 0x1e66 PushI
	var_81_int = 503073; // 0x1e67 PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x1e68 Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x1e6a PushV
	var_83_object = var_78_object; // 0x1e6b Mov
	var_84_int = -1; // 0x1e6c MovI
	func_7910(var_82_bool, var_83_object, var_84_int); // 0x1e6d NEW_2
	return 2; // 0x1e6f Return
}


func_7274()
{
	var_54_string = "ood5Georg1"; // 0x1c6b PushS
	var_55_int = 1; // 0x1c6c PushI
	SetVariable(var_54_string, var_55_int); // 0x1c6d Func
	return 0; // 0x1c6f Return
}


func_6252(var_0_object)
{
	var_47_bool = 0; // 0x186c PushV
	func_6538(var_47_bool); // 0x186d NEW_2
	var_50_bool = var_47_bool == 0; // 0x186f Not
	if(var_50_bool == 0) goto Label_6259; // 0x1870 JumpB
	Hold(); // 0x1871 Func
	
Label_6259:
	GetDirection(var_0_object); // 0x1873 Func
	
Label_6261:
	func_6428(); // 0x1876 NEW_2
	goto Label_6261; // 0x1878 Jump
}


func_6768(var_296_string)
{
	var_297_bool = 0; var_298_float = 0; var_299_float = 0; var_300_bool = 0; var_301_float = 0; var_302_float = 0; // 0x1a70 PushV
	lshHasAnimation(var_300_bool, var_296_string); // 0x1a71 Func
	var_303_bool = var_300_bool; // 0x1a73 Push
	if(var_303_bool == 0) goto Label_6779; // 0x1a74 JumpB
	lshGetAnimTimes(var_296_string, var_301_float, var_302_float); // 0x1a75 Func
	var_304_bool = 0; // 0x1a77 PushB
	lshPlayAnimation(var_301_float, var_302_float, var_304_bool); // 0x1a78 Func
	goto Label_6783; // 0x1a7a Jump
	
Label_6783:
	return 6; // 0x1a7f Return
	
Label_6779:
	var_305_string = "Can't find lsh animation : "; // 0x1a7b PushS
	var_306_int = var_305_string + var_296_string; // 0x1a7c Add
	Trace(var_306_int); // 0x1a7d Func
}


func_7280()
{
	var_580_string = "KnowAlexandr"; // 0x1c71 PushS
	var_581_int = 1; // 0x1c72 PushI
	SetVariable(var_580_string, var_581_int); // 0x1c73 Func
	return 0; // 0x1c75 Return
}


func_7793()
{
	var_150_object = Obj(); var_151_object = Obj(); // 0x1e71 PushV
	var_152_int = 622; // 0x1e72 PushI
	var_153_int = 1; // 0x1e73 PushI
	var_154_int = 532196; // 0x1e74 PushI
	CreateDiaryEntry(var_151_object, var_152_int, var_153_int, var_154_int); // 0x1e75 Func
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0; // 0x1e77 PushV
	var_156_object = var_151_object; // 0x1e78 Mov
	var_157_int = 2; // 0x1e79 MovI
	func_7910(var_155_bool, var_156_object, var_157_int); // 0x1e7a NEW_2
	return 2; // 0x1e7c Return
}


func_628(var_0_object, var_1_object, var_2_object, var_3_string, var_235_object, var_236_object)
{
	var_0_object = var_236_object; // 0x275 TMov
	var_1_object = var_235_object; // 0x276 TMov
	var_3_string = 0; // 0x277 TMovB
	var_241_int = 1; // 0x278 PushI
	if(var_241_int == 0) goto Label_835; // 0x279 JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x27a PushV
	var_243_object = var_1_object; // 0x27b MovT
	func_7515(var_243_object); // 0x27c NEW_2
	if(var_242_bool == 0) goto Label_674; // 0x27e JumpB
	var_250_object = Obj(); var_251_object = Obj(); // 0x27f PushV
	var_250_object = var_1_object; // 0x280 MovT
	var_251_object = var_0_object; // 0x281 MovT
	func_7232(); // 0x282 NEW_2
	var_254_object = Obj(); var_255_object = Obj(); // 0x284 PushV
	var_254_object = var_1_object; // 0x285 MovT
	var_255_object = var_0_object; // 0x286 MovT
	func_7027(); // 0x287 NEW_2
	var_267_string = ""; // 0x289 PushV
	var_267_string = "Anger"; // 0x28a MovS
	func_865(var_236_object, var_267_string); // 0x28b NEW_2
	var_284_int = 531566; // 0x28d PushI
	SetMessage(var_284_int); // 0x28e TObjFunc
	ClearReplies(); // 0x290 TObjFunc
	var_285_int = 531567; // 0x292 PushI
	var_286_int = 32927; // 0x293 PushI
	var_287_int = 32926; // 0x294 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x295 TObjFunc
	var_288_int = 531608; // 0x297 PushI
	var_289_int = 32978; // 0x298 PushI
	var_290_int = 32977; // 0x299 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x29a TObjFunc
	var_291_int = 531614; // 0x29c PushI
	var_292_int = 32986; // 0x29d PushI
	var_293_int = 32985; // 0x29e PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x29f TObjFunc
	goto Label_835; // 0x2a1 Jump
	
Label_835:
	var_294_bool = 0; // 0x343 PushV
	func_6948(var_294_bool); // 0x344 NEW_2
	if(var_294_bool == 0) goto Label_850; // 0x346 JumpB
	
Label_839:
	lshWaitForAnimEnd(); // 0x347 Func
	var_295_string = var_3_string; // 0x349 PushT
	if(var_295_string == 0) goto Label_844; // 0x34a JumpB
	goto Label_849; // 0x34b Jump
	
Label_849:
	goto Label_864; // 0x351 Jump
	
Label_864:
	return 0; // 0x360 Return
	
Label_844:
	var_296_string = ""; // 0x34c PushV
	var_296_string = var_2_object; // 0x34d MovT
	func_6768(var_296_string); // 0x34e NEW_2
	goto Label_839; // 0x350 Jump
	
Label_850:
	var_307_string = "all"; // 0x352 PushS
	var_308_string = "idle"; // 0x353 PushS
	PlayAnimation(var_307_string, var_308_string); // 0x354 Func
	
Label_854:
	WaitForAnimEnd(); // 0x356 Func
	var_309_string = var_3_string; // 0x358 PushT
	if(var_309_string == 0) goto Label_859; // 0x359 JumpB
	goto Label_864; // 0x35a Jump
	
Label_859:
	var_310_string = "all"; // 0x35b PushS
	var_311_string = "idle"; // 0x35c PushS
	PlayAnimation(var_310_string, var_311_string); // 0x35d Func
	goto Label_854; // 0x35f Jump
	
Label_674:
	var_312_bool = 0; var_313_object = Obj(); // 0x2a2 PushV
	var_313_object = var_1_object; // 0x2a3 MovT
	func_7346(var_313_object); // 0x2a4 NEW_2
	if(var_312_bool == 0) goto Label_699; // 0x2a6 JumpB
	var_318_string = ""; // 0x2a7 PushV
	var_318_string = "Neutral"; // 0x2a8 MovS
	func_865(var_236_object, var_318_string); // 0x2a9 NEW_2
	var_319_int = 504850; // 0x2ab PushI
	SetMessage(var_319_int); // 0x2ac TObjFunc
	ClearReplies(); // 0x2ae TObjFunc
	var_320_int = 504879; // 0x2b0 PushI
	var_321_int = 5370; // 0x2b1 PushI
	var_322_int = 5353; // 0x2b2 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x2b3 TObjFunc
	var_323_int = 504890; // 0x2b5 PushI
	var_324_int = 5354; // 0x2b6 PushI
	var_325_int = 5367; // 0x2b7 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x2b8 TObjFunc
	goto Label_835; // 0x2ba Jump
	
Label_699:
	var_326_string = ""; // 0x2bb PushV
	var_326_string = "Neutral"; // 0x2bc MovS
	func_865(var_236_object, var_326_string); // 0x2bd NEW_2
	var_327_int = 507627; // 0x2bf PushI
	SetMessage(var_327_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_328_bool = 0; var_329_object = Obj(); // 0x2c4 PushV
	var_329_object = var_1_object; // 0x2c5 MovT
	func_7334(var_329_object); // 0x2c6 NEW_2
	if(var_328_bool == 0) goto Label_718; // 0x2c8 JumpB
	var_334_int = 531617; // 0x2c9 PushI
	var_335_int = 32990; // 0x2ca PushI
	var_336_int = 32989; // 0x2cb PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x2cc TObjFunc
	
Label_718:
	var_337_bool = 0; // 0x2ce PushV
	var_337_bool = 0; // 0x2cf MovB
	var_338_bool = 0; // 0x2d0 PushV
	var_338_bool = 0; // 0x2d1 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x2d2 PushV
	var_340_object = var_1_object; // 0x2d3 MovT
	func_7527(var_340_object); // 0x2d4 NEW_2
	if(var_339_bool == 0) goto Label_734; // 0x2d6 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x2d7 PushV
	var_346_object = var_1_object; // 0x2d8 MovT
	func_7322(var_346_object); // 0x2d9 NEW_2
	var_351_bool = var_345_bool == 0; // 0x2db Not
	if(var_351_bool == 0) goto Label_734; // 0x2dc JumpB
	var_338_bool = 1; // 0x2dd MovB
	
Label_734:
	if(var_338_bool == 0) goto Label_742; // 0x2de JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x2df PushV
	var_353_object = var_1_object; // 0x2e0 MovT
	func_7334(var_353_object); // 0x2e1 NEW_2
	var_354_bool = var_352_bool == 0; // 0x2e3 Not
	if(var_354_bool == 0) goto Label_742; // 0x2e4 JumpB
	var_337_bool = 1; // 0x2e5 MovB
	
Label_742:
	if(var_337_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_355_int = 507629; // 0x2e7 PushI
	var_356_int = 5329; // 0x2e8 PushI
	var_357_int = 8418; // 0x2e9 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x2ea TObjFunc
	
Label_748:
	var_358_bool = 0; // 0x2ec PushV
	var_358_bool = 0; // 0x2ed MovB
	var_359_bool = 0; // 0x2ee PushV
	var_359_bool = 0; // 0x2ef MovB
	var_360_bool = 0; var_361_object = Obj(); // 0x2f0 PushV
	var_361_object = var_1_object; // 0x2f1 MovT
	func_7539(var_361_object); // 0x2f2 NEW_2
	if(var_360_bool == 0) goto Label_764; // 0x2f4 JumpB
	var_366_bool = 0; var_367_object = Obj(); // 0x2f5 PushV
	var_367_object = var_1_object; // 0x2f6 MovT
	func_7322(var_367_object); // 0x2f7 NEW_2
	var_368_bool = var_366_bool == 0; // 0x2f9 Not
	if(var_368_bool == 0) goto Label_764; // 0x2fa JumpB
	var_359_bool = 1; // 0x2fb MovB
	
Label_764:
	if(var_359_bool == 0) goto Label_772; // 0x2fc JumpB
	var_369_bool = 0; var_370_object = Obj(); // 0x2fd PushV
	var_370_object = var_1_object; // 0x2fe MovT
	func_7334(var_370_object); // 0x2ff NEW_2
	var_371_bool = var_369_bool == 0; // 0x301 Not
	if(var_371_bool == 0) goto Label_772; // 0x302 JumpB
	var_358_bool = 1; // 0x303 MovB
	
Label_772:
	if(var_358_bool == 0) goto Label_778; // 0x304 JumpB
	var_372_int = 507632; // 0x305 PushI
	var_373_int = 5334; // 0x306 PushI
	var_374_int = 8421; // 0x307 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x308 TObjFunc
	
Label_778:
	var_375_bool = 0; // 0x30a PushV
	var_375_bool = 0; // 0x30b MovB
	var_376_bool = 0; // 0x30c PushV
	var_376_bool = 0; // 0x30d MovB
	var_377_bool = 0; var_378_object = Obj(); // 0x30e PushV
	var_378_object = var_1_object; // 0x30f MovT
	func_7491(var_378_object); // 0x310 NEW_2
	if(var_377_bool == 0) goto Label_794; // 0x312 JumpB
	var_383_bool = 0; var_384_object = Obj(); // 0x313 PushV
	var_384_object = var_1_object; // 0x314 MovT
	func_7334(var_384_object); // 0x315 NEW_2
	var_385_bool = var_383_bool == 0; // 0x317 Not
	if(var_385_bool == 0) goto Label_794; // 0x318 JumpB
	var_376_bool = 1; // 0x319 MovB
	
Label_794:
	if(var_376_bool == 0) goto Label_802; // 0x31a JumpB
	var_386_bool = 0; var_387_object = Obj(); // 0x31b PushV
	var_387_object = var_1_object; // 0x31c MovT
	func_7322(var_387_object); // 0x31d NEW_2
	var_388_bool = var_386_bool == 0; // 0x31f Not
	if(var_388_bool == 0) goto Label_802; // 0x320 JumpB
	var_375_bool = 1; // 0x321 MovB
	
Label_802:
	if(var_375_bool == 0) goto Label_808; // 0x322 JumpB
	var_389_int = 531620; // 0x323 PushI
	var_390_int = 32993; // 0x324 PushI
	var_391_int = 32992; // 0x325 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x326 TObjFunc
	
Label_808:
	var_392_bool = 0; // 0x328 PushV
	var_392_bool = 0; // 0x329 MovB
	var_393_bool = 0; var_394_object = Obj(); // 0x32a PushV
	var_394_object = var_1_object; // 0x32b MovT
	func_7358(var_394_object); // 0x32c NEW_2
	if(var_393_bool == 0) goto Label_821; // 0x32e JumpB
	var_399_bool = 0; var_400_object = Obj(); // 0x32f PushV
	var_400_object = var_1_object; // 0x330 MovT
	func_7503(var_400_object); // 0x331 NEW_2
	if(var_399_bool == 0) goto Label_821; // 0x333 JumpB
	var_392_bool = 1; // 0x334 MovB
	
Label_821:
	if(var_392_bool == 0) goto Label_827; // 0x335 JumpB
	var_405_int = 531622; // 0x336 PushI
	var_406_int = 32995; // 0x337 PushI
	var_407_int = 32994; // 0x338 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x339 TObjFunc
	
Label_827:
	var_408_int = 507658; // 0x33b PushI
	var_409_int = -1; // 0x33c PushI
	var_410_int = 8451; // 0x33d PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x33e TObjFunc
	goto Label_835; // 0x340 Jump
}


func_7286()
{
	var_584_string = "KnowBigVlad"; // 0x1c77 PushS
	var_585_int = 1; // 0x1c78 PushI
	SetVariable(var_584_string, var_585_int); // 0x1c79 Func
	return 0; // 0x1c7b Return
}


func_6266(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x187a PushV
	var_74_string = "player"; // 0x187b PushS
	FindActor(var_73_object, var_74_string); // 0x187c Func
	var_75_bool = var_73_object == 0; // 0x187e Not
	if(var_75_bool == 0) goto Label_6274; // 0x187f JumpB
	var_71_bool = 0; // 0x1880 MovB
	return 2; // 0x1881 Return
	
Label_6274:
	var_76_bool = 0; var_77_object = Obj(); // 0x1882 PushV
	var_77_object = var_73_object; // 0x1883 Mov
	func_6529(var_77_object); // 0x1884 NEW_2
	var_71_bool = var_76_bool; // 0x1885 Mov
	return 2; // 0x1887 Return
}


func_7292()
{
	var_60_string = "ood6Georg1"; // 0x1c7d PushS
	var_61_int = 1; // 0x1c7e PushI
	SetVariable(var_60_string, var_61_int); // 0x1c7f Func
	return 0; // 0x1c81 Return
}


func_7806()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1e7e PushV
	var_102_int = 31; // 0x1e7f PushI
	var_103_int = 1; // 0x1e80 PushI
	var_104_int = 512113; // 0x1e81 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x1e82 Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x1e84 PushV
	var_106_object = var_101_object; // 0x1e85 Mov
	var_107_int = 2; // 0x1e86 MovI
	func_7910(var_105_bool, var_106_object, var_107_int); // 0x1e87 NEW_2
	return 2; // 0x1e89 Return
}


func_6784(var_271_string, var_272_bool)
{
	var_275_bool = 0; var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_float = 0; var_280_float = 0; // 0x1a80 PushV
	lshHasAnimation(var_278_bool, var_271_string); // 0x1a81 Func
	var_281_bool = var_278_bool; // 0x1a83 Push
	if(var_281_bool == 0) goto Label_6794; // 0x1a84 JumpB
	lshGetAnimTimes(var_271_string, var_279_float, var_280_float); // 0x1a85 Func
	lshPlayAnimation(var_279_float, var_280_float, var_272_bool); // 0x1a87 Func
	goto Label_6798; // 0x1a89 Jump
	
Label_6798:
	return 6; // 0x1a8e Return
	
Label_6794:
	var_282_string = "Can't find lsh animation : "; // 0x1a8a PushS
	var_283_int = var_282_string + var_271_string; // 0x1a8b Add
	Trace(var_283_int); // 0x1a8c Func
}


func_7298()
{
	var_66_string = "ood6Georg2"; // 0x1c83 PushS
	var_67_int = 1; // 0x1c84 PushI
	SetVariable(var_66_string, var_67_int); // 0x1c85 Func
	return 0; // 0x1c87 Return
}


func_7304()
{
	var_54_string = "ood6Georg3"; // 0x1c89 PushS
	var_55_int = 1; // 0x1c8a PushI
	SetVariable(var_54_string, var_55_int); // 0x1c8b Func
	return 0; // 0x1c8d Return
}


func_6281(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x1889 PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x188a PushE
	RotateAsync(var_123_float, var_124_float); // 0x188b Func
	return 0; // 0x188d Return
}


func_7819()
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x1e8b PushV
	var_98_int = 628; // 0x1e8c PushI
	var_99_int = 1; // 0x1e8d PushI
	var_100_int = 532757; // 0x1e8e PushI
	CreateDiaryEntry(var_97_object, var_98_int, var_99_int, var_100_int); // 0x1e8f Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x1e91 PushV
	var_102_object = var_97_object; // 0x1e92 Mov
	var_103_int = 10; // 0x1e93 MovI
	func_7910(var_101_bool, var_102_object, var_103_int); // 0x1e94 NEW_2
	return 2; // 0x1e96 Return
}


func_7310()
{
	var_911_string = "ood8Georg1"; // 0x1c8f PushS
	var_912_int = 1; // 0x1c90 PushI
	SetVariable(var_911_string, var_912_int); // 0x1c91 Func
	return 0; // 0x1c93 Return
}


func_6286(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x188e PushV
	var_59_string = "player"; // 0x188f PushS
	FindActor(var_57_object, var_59_string); // 0x1890 Func
	var_60_bool = var_57_object == 0; // 0x1892 Not
	if(var_60_bool == 0) goto Label_6294; // 0x1893 JumpB
	var_54_bool = 0; // 0x1894 MovB
	return 4; // 0x1895 Return
	
Label_6294:
	var_61_float = 0; var_62_object = Obj(); // 0x1896 PushV
	var_62_object = var_57_object; // 0x1897 Mov
	func_6504(var_62_object); // 0x1898 NEW_2
	var_69_float = 90000.0; // 0x189a PushF
	var_70_bool = var_61_float > var_69_float; // 0x189b GT
	if(var_70_bool == 0) goto Label_6303; // 0x189c JumpB
	var_54_bool = 0; // 0x189d MovB
	return 4; // 0x189e Return
	
Label_6303:
	CanSee(var_58_bool, var_57_object); // 0x189f Func
	var_54_bool = var_58_bool; // 0x18a1 Mov
	return 4; // 0x18a2 Return
}


func_6799(var_179_bool, var_180_string)
{
	var_181_bool = 0; var_182_bool = 0; // 0x1a8f PushV
	var_183_bool = 0; // 0x1a90 PushV
	func_6948(var_183_bool); // 0x1a91 NEW_2
	if(var_183_bool == 0) goto Label_6812; // 0x1a93 JumpB
	lshHasSpeech(var_182_bool, var_180_string); // 0x1a94 Func
	var_184_bool = var_182_bool; // 0x1a96 Push
	if(var_184_bool == 0) goto Label_6812; // 0x1a97 JumpB
	lshPlaySpeech(var_180_string); // 0x1a98 Func
	var_179_bool = 1; // 0x1a9a MovB
	return 2; // 0x1a9b Return
	
Label_6812:
	var_179_bool = 0; // 0x1a9c MovB
	return 2; // 0x1a9d Return
}


func_7316()
{
	var_562_string = "d3GeorgVisit"; // 0x1c95 PushS
	var_563_int = 1; // 0x1c96 PushI
	SetVariable(var_562_string, var_563_int); // 0x1c97 Func
	return 0; // 0x1c99 Return
}


func_3223(var_0_object, var_523_int, var_524_object)
{
	var_526_object = Obj(); var_527_bool = 0; var_528_int = 0; var_529_bool = 0; var_530_object = Obj(); var_531_bool = 0; var_532_int = 0; var_533_bool = 0; // 0xc97 PushV
	var_0_object = var_524_object; // 0xc98 TMov
	var_534_bool = 0; var_535_object = Obj(); var_536_float = 0; // 0xc99 PushV
	var_535_object = var_524_object; // 0xc9a Mov
	var_536_float = 70.0; // 0xc9b MovF
	func_6543(var_535_object, var_536_float); // 0xc9c NEW_2
	var_537_bool = var_534_bool == 0; // 0xc9e Not
	if(var_537_bool == 0) goto Label_3234; // 0xc9f JumpB
	var_523_int = -2; // 0xca0 MovI
	return 8; // 0xca1 Return
	
Label_3234:
	CreateDialog(var_530_object); // 0xca2 Func
	var_538_int = 0; // 0xca4 PushV
	func_6942(var_538_int); // 0xca5 NEW_2
	SetNPCName(var_538_int); // 0xca7 ObjFunc
	var_539_int = 0; // 0xca9 PushV
	func_6940(var_539_int); // 0xcaa NEW_2
	SetNPCDescription(var_539_int); // 0xcac ObjFunc
	var_540_string = ""; // 0xcae PushV
	func_6944(var_540_string); // 0xcaf NEW_2
	SetPhoto(var_540_string); // 0xcb1 ObjFunc
	var_541_string = ""; // 0xcb3 PushV
	func_6946(var_541_string); // 0xcb4 NEW_2
	SetPhoto2(var_541_string); // 0xcb6 ObjFunc
	var_542_int = 0; // 0xcb8 PushV
	func_7988(var_542_int); // 0xcb9 NEW_2
	SetPlayerName(var_542_int); // 0xcbb ObjFunc
	var_532_int = -1; // 0xcbd MovI
	IsOverrideActive(var_531_bool); // 0xcbe Func
	var_543_bool = var_531_bool; // 0xcc0 Push
	if(var_543_bool == 0) goto Label_3268; // 0xcc1 JumpB
	var_523_int = -2; // 0xcc2 MovI
	return 8; // 0xcc3 Return
	
Label_3268:
	DoDialog(var_530_object); // 0xcc4 Func
	var_544_bool = 0; var_545_object = Obj(); // 0xcc6 PushV
	var_546_object = Obj(); // 0xcc7 PushV
	func_6821(var_546_object); // 0xcc8 NEW_2
	var_545_object = var_546_object; // 0xcc9 Mov
	func_6630(var_544_bool, var_545_object); // 0xccb NEW_2
	var_547_object = Obj(); var_548_object = Obj(); // 0xccd PushV
	var_547_object = var_524_object; // 0xcce Mov
	var_548_object = var_530_object; // 0xccf Mov
	TaskCall(7); // 0xcd0 TaskCall
	func_3304(var_549_object, var_550_object, var_551_string, var_552_bool, var_547_object, var_548_object); // 0xcd1 NEW_2
	TaskReturn(); // 0xcd2 TaskReturn
	IsDialogEnd(var_533_bool); // 0xcd4 ObjFunc
	
Label_3286:
	var_668_bool = var_533_bool == 0; // 0xcd6 Not
	if(var_668_bool == 0) goto Label_3293; // 0xcd7 JumpB
	sync(); // 0xcd8 Func
	IsDialogEnd(var_533_bool); // 0xcda ObjFunc
	goto Label_3286; // 0xcdc Jump
	
Label_3293:
	var_669_object = Obj(); // 0xcdd PushV
	var_669_object = var_524_object; // 0xcde Mov
	func_6612(); // 0xcdf NEW_2
	StopDialog(var_530_object); // 0xce1 Func
	GetReturnValue(var_532_int); // 0xce3 ObjFunc
	var_523_int = var_532_int; // 0xce5 Mov
	return 8; // 0xce6 Return
}


func_7832()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x1e98 PushV
	var_62_int = 626; // 0x1e99 PushI
	var_63_int = 1; // 0x1e9a PushI
	var_64_int = 532755; // 0x1e9b PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x1e9c Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x1e9e PushV
	var_66_object = var_61_object; // 0x1e9f Mov
	var_67_int = 10; // 0x1ea0 MovI
	func_7910(var_65_bool, var_66_object, var_67_int); // 0x1ea1 NEW_2
	return 2; // 0x1ea3 Return
}


func_7322(var_345_bool)
{
	var_347_int = 0; var_348_string = ""; // 0x1c9b PushV
	var_348_string = "d1q01"; // 0x1c9c MovS
	func_6837(var_347_int, var_348_string); // 0x1c9d NEW_2
	var_349_int = 1000; // 0x1c9f PushI
	var_350_bool = var_347_int == var_349_int; // 0x1ca0 Eq
	if(var_350_bool == 0) goto Label_7332; // 0x1ca1 JumpB
	var_345_bool = 1; // 0x1ca2 MovB
	return 0; // 0x1ca3 Return
	
Label_7332:
	var_345_bool = 0; // 0x1ca4 MovB
	return 0; // 0x1ca5 Return
}


func_6814()
{
	var_49_bool = 0; // 0x1a9e PushV
	func_6948(var_49_bool); // 0x1a9f NEW_2
	if(var_49_bool == 0) goto Label_6820; // 0x1aa1 JumpB
	lshStopSpeech(); // 0x1aa2 Func
	
Label_6820:
	return 0; // 0x1aa4 Return
}


func_5278(var_0_object, var_948_int, var_949_object)
{
	var_951_object = Obj(); var_952_bool = 0; var_953_int = 0; var_954_bool = 0; var_955_object = Obj(); var_956_bool = 0; var_957_int = 0; var_958_bool = 0; // 0x149e PushV
	var_0_object = var_949_object; // 0x149f TMov
	var_959_bool = 0; var_960_object = Obj(); var_961_float = 0; // 0x14a0 PushV
	var_960_object = var_949_object; // 0x14a1 Mov
	var_961_float = 70.0; // 0x14a2 MovF
	func_6543(var_960_object, var_961_float); // 0x14a3 NEW_2
	var_962_bool = var_959_bool == 0; // 0x14a5 Not
	if(var_962_bool == 0) goto Label_5289; // 0x14a6 JumpB
	var_948_int = -2; // 0x14a7 MovI
	return 8; // 0x14a8 Return
	
Label_5289:
	CreateDialog(var_955_object); // 0x14a9 Func
	var_963_int = 0; // 0x14ab PushV
	func_6942(var_963_int); // 0x14ac NEW_2
	SetNPCName(var_963_int); // 0x14ae ObjFunc
	var_964_int = 0; // 0x14b0 PushV
	func_6940(var_964_int); // 0x14b1 NEW_2
	SetNPCDescription(var_964_int); // 0x14b3 ObjFunc
	var_965_string = ""; // 0x14b5 PushV
	func_6944(var_965_string); // 0x14b6 NEW_2
	SetPhoto(var_965_string); // 0x14b8 ObjFunc
	var_966_string = ""; // 0x14ba PushV
	func_6946(var_966_string); // 0x14bb NEW_2
	SetPhoto2(var_966_string); // 0x14bd ObjFunc
	var_967_int = 0; // 0x14bf PushV
	func_7988(var_967_int); // 0x14c0 NEW_2
	SetPlayerName(var_967_int); // 0x14c2 ObjFunc
	var_957_int = -1; // 0x14c4 MovI
	IsOverrideActive(var_956_bool); // 0x14c5 Func
	var_968_bool = var_956_bool; // 0x14c7 Push
	if(var_968_bool == 0) goto Label_5323; // 0x14c8 JumpB
	var_948_int = -2; // 0x14c9 MovI
	return 8; // 0x14ca Return
	
Label_5323:
	DoDialog(var_955_object); // 0x14cb Func
	var_969_bool = 0; var_970_object = Obj(); // 0x14cd PushV
	var_971_object = Obj(); // 0x14ce PushV
	func_6821(var_971_object); // 0x14cf NEW_2
	var_970_object = var_971_object; // 0x14d0 Mov
	func_6630(var_969_bool, var_970_object); // 0x14d2 NEW_2
	var_972_object = Obj(); var_973_object = Obj(); // 0x14d4 PushV
	var_972_object = var_949_object; // 0x14d5 Mov
	var_973_object = var_955_object; // 0x14d6 Mov
	TaskCall(13); // 0x14d7 TaskCall
	func_5359(var_974_object, var_975_object, var_976_string, var_977_bool, var_972_object, var_973_object); // 0x14d8 NEW_2
	TaskReturn(); // 0x14d9 TaskReturn
	IsDialogEnd(var_958_bool); // 0x14db ObjFunc
	
Label_5341:
	var_1008_bool = var_958_bool == 0; // 0x14dd Not
	if(var_1008_bool == 0) goto Label_5348; // 0x14de JumpB
	sync(); // 0x14df Func
	IsDialogEnd(var_958_bool); // 0x14e1 ObjFunc
	goto Label_5341; // 0x14e3 Jump
	
Label_5348:
	var_1009_object = Obj(); // 0x14e4 PushV
	var_1009_object = var_949_object; // 0x14e5 Mov
	func_6612(); // 0x14e6 NEW_2
	StopDialog(var_955_object); // 0x14e8 Func
	GetReturnValue(var_957_int); // 0x14ea ObjFunc
	var_948_int = var_957_int; // 0x14ec Mov
	return 8; // 0x14ed Return
}


func_6308()
{
	var_1129_float = 0; var_1130_float = 0; // 0x18a4 PushV
	var_1131_int = 8; // 0x18a5 PushI
	var_1132_int = 16; // 0x18a6 PushI
	rand(var_1130_float, var_1131_int, var_1132_int); // 0x18a7 Func
	var_1133_int = 10; // 0x18a9 PushI
	SetTimer(var_1133_int, var_1130_float); // 0x18aa Func
	return 2; // 0x18ac Return
}


func_6821(var_147_object)
{
	var_148_object = Obj(); var_149_object = Obj(); // 0x1aa5 PushV
	self(var_149_object); // 0x1aa6 Func
	var_147_object = var_149_object; // 0x1aa8 Mov
	return 2; // 0x1aa9 Return
}


func_7334(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x1ca7 PushV
	var_331_string = "d1q01"; // 0x1ca8 MovS
	func_6837(var_330_int, var_331_string); // 0x1ca9 NEW_2
	var_332_int = 0; // 0x1cab PushI
	var_333_bool = var_330_int == var_332_int; // 0x1cac Eq
	if(var_333_bool == 0) goto Label_7344; // 0x1cad JumpB
	var_328_bool = 1; // 0x1cae MovB
	return 0; // 0x1caf Return
	
Label_7344:
	var_328_bool = 0; // 0x1cb0 MovB
	return 0; // 0x1cb1 Return
}


func_7845()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1ea5 PushV
	var_74_int = 26; // 0x1ea6 PushI
	var_75_int = 2; // 0x1ea7 PushI
	var_76_int = 503366; // 0x1ea8 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x1ea9 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x1eab PushV
	var_78_object = var_73_object; // 0x1eac Mov
	var_79_int = -1; // 0x1ead MovI
	func_7910(var_77_bool, var_78_object, var_79_int); // 0x1eae NEW_2
	return 2; // 0x1eb0 Return
}


func_5800(var_0_object, var_1_object, var_2_object, var_3_string, var_1036_object, var_1037_object)
{
	var_0_object = var_1037_object; // 0x16a9 TMov
	var_1_object = var_1036_object; // 0x16aa TMov
	var_3_string = 0; // 0x16ab TMovB
	var_1042_int = 1; // 0x16ac PushI
	if(var_1042_int == 0) goto Label_5833; // 0x16ad JumpB
	var_1043_string = ""; // 0x16ae PushV
	var_1043_string = "Neutral"; // 0x16af MovS
	func_5863(var_1037_object, var_1043_string); // 0x16b0 NEW_2
	var_1051_int = 535662; // 0x16b2 PushI
	SetMessage(var_1051_int); // 0x16b3 TObjFunc
	ClearReplies(); // 0x16b5 TObjFunc
	var_1052_int = 535663; // 0x16b7 PushI
	var_1053_int = 42111; // 0x16b8 PushI
	var_1054_int = 37349; // 0x16b9 PushI
	AddReply(var_1052_int, var_1053_int, var_1054_int); // 0x16ba TObjFunc
	var_1055_int = 540003; // 0x16bc PushI
	var_1056_int = -1; // 0x16bd PushI
	var_1057_int = 41974; // 0x16be PushI
	AddReply(var_1055_int, var_1056_int, var_1057_int); // 0x16bf TObjFunc
	var_1058_int = 540138; // 0x16c1 PushI
	var_1059_int = -1; // 0x16c2 PushI
	var_1060_int = 42110; // 0x16c3 PushI
	AddReply(var_1058_int, var_1059_int, var_1060_int); // 0x16c4 TObjFunc
	goto Label_5833; // 0x16c6 Jump
	
Label_5833:
	var_1061_bool = 0; // 0x16c9 PushV
	func_6948(var_1061_bool); // 0x16ca NEW_2
	if(var_1061_bool == 0) goto Label_5848; // 0x16cc JumpB
	
Label_5837:
	lshWaitForAnimEnd(); // 0x16cd Func
	var_1062_string = var_3_string; // 0x16cf PushT
	if(var_1062_string == 0) goto Label_5842; // 0x16d0 JumpB
	goto Label_5847; // 0x16d1 Jump
	
Label_5847:
	goto Label_5862; // 0x16d7 Jump
	
Label_5862:
	return 0; // 0x16e6 Return
	
Label_5842:
	var_1063_string = ""; // 0x16d2 PushV
	var_1063_string = var_2_object; // 0x16d3 MovT
	func_6768(var_1063_string); // 0x16d4 NEW_2
	goto Label_5837; // 0x16d6 Jump
	
Label_5848:
	var_1064_string = "all"; // 0x16d8 PushS
	var_1065_string = "idle"; // 0x16d9 PushS
	PlayAnimation(var_1064_string, var_1065_string); // 0x16da Func
	
Label_5852:
	WaitForAnimEnd(); // 0x16dc Func
	var_1066_string = var_3_string; // 0x16de PushT
	if(var_1066_string == 0) goto Label_5857; // 0x16df JumpB
	goto Label_5862; // 0x16e0 Jump
	
Label_5857:
	var_1067_string = "all"; // 0x16e1 PushS
	var_1068_string = "idle"; // 0x16e2 PushS
	PlayAnimation(var_1067_string, var_1068_string); // 0x16e3 Func
	goto Label_5852; // 0x16e5 Jump
}


func_6827(var_111_cvector, var_112_cvector)
{
	var_114_float = 0; var_115_float = 0; // 0x1aab PushV
	var_116_int = var_112_cvector | var_112_cvector; // 0x1aac Or
	var_115_float = sqrt(var_116_int); // 0x1aad Sqrt2
	var_117_float = 0.0; // 0x1aae PushF
	var_118_bool = var_115_float < var_117_float; // 0x1aaf LT
	if(var_118_bool == 0) goto Label_6835; // 0x1ab0 JumpB
	var_111_cvector = CVector(0.0, 0.0, 0.0); // 0x1ab1 MovV
	return 2; // 0x1ab2 Return
	
Label_6835:
	var_111_cvector = var_112_cvector / var_112_cvector; // 0x1ab3 Div2
	return 2; // 0x1ab4 Return
}


func_4268(var_0_object, var_672_int, var_673_object)
{
	var_675_object = Obj(); var_676_bool = 0; var_677_int = 0; var_678_bool = 0; var_679_object = Obj(); var_680_bool = 0; var_681_int = 0; var_682_bool = 0; // 0x10ac PushV
	var_0_object = var_673_object; // 0x10ad TMov
	var_683_bool = 0; var_684_object = Obj(); var_685_float = 0; // 0x10ae PushV
	var_684_object = var_673_object; // 0x10af Mov
	var_685_float = 70.0; // 0x10b0 MovF
	func_6543(var_684_object, var_685_float); // 0x10b1 NEW_2
	var_686_bool = var_683_bool == 0; // 0x10b3 Not
	if(var_686_bool == 0) goto Label_4279; // 0x10b4 JumpB
	var_672_int = -2; // 0x10b5 MovI
	return 8; // 0x10b6 Return
	
Label_4279:
	CreateDialog(var_679_object); // 0x10b7 Func
	var_687_int = 0; // 0x10b9 PushV
	func_6942(var_687_int); // 0x10ba NEW_2
	SetNPCName(var_687_int); // 0x10bc ObjFunc
	var_688_int = 0; // 0x10be PushV
	func_6940(var_688_int); // 0x10bf NEW_2
	SetNPCDescription(var_688_int); // 0x10c1 ObjFunc
	var_689_string = ""; // 0x10c3 PushV
	func_6944(var_689_string); // 0x10c4 NEW_2
	SetPhoto(var_689_string); // 0x10c6 ObjFunc
	var_690_string = ""; // 0x10c8 PushV
	func_6946(var_690_string); // 0x10c9 NEW_2
	SetPhoto2(var_690_string); // 0x10cb ObjFunc
	var_691_int = 0; // 0x10cd PushV
	func_7988(var_691_int); // 0x10ce NEW_2
	SetPlayerName(var_691_int); // 0x10d0 ObjFunc
	var_681_int = -1; // 0x10d2 MovI
	IsOverrideActive(var_680_bool); // 0x10d3 Func
	var_692_bool = var_680_bool; // 0x10d5 Push
	if(var_692_bool == 0) goto Label_4313; // 0x10d6 JumpB
	var_672_int = -2; // 0x10d7 MovI
	return 8; // 0x10d8 Return
	
Label_4313:
	DoDialog(var_679_object); // 0x10d9 Func
	var_693_bool = 0; var_694_object = Obj(); // 0x10db PushV
	var_695_object = Obj(); // 0x10dc PushV
	func_6821(var_695_object); // 0x10dd NEW_2
	var_694_object = var_695_object; // 0x10de Mov
	func_6630(var_693_bool, var_694_object); // 0x10e0 NEW_2
	var_696_object = Obj(); var_697_object = Obj(); // 0x10e2 PushV
	var_696_object = var_673_object; // 0x10e3 Mov
	var_697_object = var_679_object; // 0x10e4 Mov
	TaskCall(9); // 0x10e5 TaskCall
	func_4349(var_698_object, var_699_object, var_700_string, var_701_bool, var_696_object, var_697_object); // 0x10e6 NEW_2
	TaskReturn(); // 0x10e7 TaskReturn
	IsDialogEnd(var_682_bool); // 0x10e9 ObjFunc
	
Label_4331:
	var_748_bool = var_682_bool == 0; // 0x10eb Not
	if(var_748_bool == 0) goto Label_4338; // 0x10ec JumpB
	sync(); // 0x10ed Func
	IsDialogEnd(var_682_bool); // 0x10ef ObjFunc
	goto Label_4331; // 0x10f1 Jump
	
Label_4338:
	var_749_object = Obj(); // 0x10f2 PushV
	var_749_object = var_673_object; // 0x10f3 Mov
	func_6612(); // 0x10f4 NEW_2
	StopDialog(var_679_object); // 0x10f6 Func
	GetReturnValue(var_681_int); // 0x10f8 ObjFunc
	var_672_int = var_681_int; // 0x10fa Mov
	return 8; // 0x10fb Return
}


func_6317()
{
	var_1128_int = 10; // 0x18ad PushI
	KillTimer(var_1128_int); // 0x18ae Func
	return 0; // 0x18b0 Return
}


func_4779(var_0_object, var_865_int, var_866_object)
{
	var_868_object = Obj(); var_869_bool = 0; var_870_int = 0; var_871_bool = 0; var_872_object = Obj(); var_873_bool = 0; var_874_int = 0; var_875_bool = 0; // 0x12ab PushV
	var_0_object = var_866_object; // 0x12ac TMov
	var_876_bool = 0; var_877_object = Obj(); var_878_float = 0; // 0x12ad PushV
	var_877_object = var_866_object; // 0x12ae Mov
	var_878_float = 70.0; // 0x12af MovF
	func_6543(var_877_object, var_878_float); // 0x12b0 NEW_2
	var_879_bool = var_876_bool == 0; // 0x12b2 Not
	if(var_879_bool == 0) goto Label_4790; // 0x12b3 JumpB
	var_865_int = -2; // 0x12b4 MovI
	return 8; // 0x12b5 Return
	
Label_4790:
	CreateDialog(var_872_object); // 0x12b6 Func
	var_880_int = 0; // 0x12b8 PushV
	func_6942(var_880_int); // 0x12b9 NEW_2
	SetNPCName(var_880_int); // 0x12bb ObjFunc
	var_881_int = 0; // 0x12bd PushV
	func_6940(var_881_int); // 0x12be NEW_2
	SetNPCDescription(var_881_int); // 0x12c0 ObjFunc
	var_882_string = ""; // 0x12c2 PushV
	func_6944(var_882_string); // 0x12c3 NEW_2
	SetPhoto(var_882_string); // 0x12c5 ObjFunc
	var_883_string = ""; // 0x12c7 PushV
	func_6946(var_883_string); // 0x12c8 NEW_2
	SetPhoto2(var_883_string); // 0x12ca ObjFunc
	var_884_int = 0; // 0x12cc PushV
	func_7988(var_884_int); // 0x12cd NEW_2
	SetPlayerName(var_884_int); // 0x12cf ObjFunc
	var_874_int = -1; // 0x12d1 MovI
	IsOverrideActive(var_873_bool); // 0x12d2 Func
	var_885_bool = var_873_bool; // 0x12d4 Push
	if(var_885_bool == 0) goto Label_4824; // 0x12d5 JumpB
	var_865_int = -2; // 0x12d6 MovI
	return 8; // 0x12d7 Return
	
Label_4824:
	DoDialog(var_872_object); // 0x12d8 Func
	var_886_bool = 0; var_887_object = Obj(); // 0x12da PushV
	var_888_object = Obj(); // 0x12db PushV
	func_6821(var_888_object); // 0x12dc NEW_2
	var_887_object = var_888_object; // 0x12dd Mov
	func_6630(var_886_bool, var_887_object); // 0x12df NEW_2
	var_889_object = Obj(); var_890_object = Obj(); // 0x12e1 PushV
	var_889_object = var_866_object; // 0x12e2 Mov
	var_890_object = var_872_object; // 0x12e3 Mov
	TaskCall(11); // 0x12e4 TaskCall
	func_4860(var_891_object, var_892_object, var_893_string, var_894_bool, var_889_object, var_890_object); // 0x12e5 NEW_2
	TaskReturn(); // 0x12e6 TaskReturn
	IsDialogEnd(var_875_bool); // 0x12e8 ObjFunc
	
Label_4842:
	var_944_bool = var_875_bool == 0; // 0x12ea Not
	if(var_944_bool == 0) goto Label_4849; // 0x12eb JumpB
	sync(); // 0x12ec Func
	IsDialogEnd(var_875_bool); // 0x12ee ObjFunc
	goto Label_4842; // 0x12f0 Jump
	
Label_4849:
	var_945_object = Obj(); // 0x12f1 PushV
	var_945_object = var_866_object; // 0x12f2 Mov
	func_6612(); // 0x12f3 NEW_2
	StopDialog(var_872_object); // 0x12f5 Func
	GetReturnValue(var_874_int); // 0x12f7 ObjFunc
	var_865_int = var_874_int; // 0x12f9 Mov
	return 8; // 0x12fa Return
}


func_7346(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x1cb3 PushV
	var_315_string = "d1q01"; // 0x1cb4 MovS
	func_6837(var_314_int, var_315_string); // 0x1cb5 NEW_2
	var_316_int = 8; // 0x1cb7 PushI
	var_317_bool = var_314_int == var_316_int; // 0x1cb8 Eq
	if(var_317_bool == 0) goto Label_7356; // 0x1cb9 JumpB
	var_312_bool = 1; // 0x1cba MovB
	return 0; // 0x1cbb Return
	
Label_7356:
	var_312_bool = 0; // 0x1cbc MovB
	return 0; // 0x1cbd Return
}


func_7858()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x1eb2 PushV
	var_148_int = 678; // 0x1eb3 PushI
	var_149_int = 2; // 0x1eb4 PushI
	var_150_int = 534417; // 0x1eb5 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x1eb6 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x1eb8 PushV
	var_152_object = var_147_object; // 0x1eb9 Mov
	var_153_int = 26; // 0x1eba MovI
	func_7910(var_151_bool, var_152_object, var_153_int); // 0x1ebb NEW_2
	return 2; // 0x1ebd Return
}


func_6837(var_244_int, var_245_string)
{
	var_246_int = 0; var_247_int = 0; // 0x1ab5 PushV
	GetVariable(var_245_string, var_247_int); // 0x1ab6 Func
	var_244_int = var_247_int; // 0x1ab8 Mov
	return 2; // 0x1ab9 Return
}


func_6842(var_103_object, var_104_string)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); // 0x1aba PushV
	GetMainOutdoorScene(var_107_object); // 0x1abb Func
	var_109_string = ".bin"; // 0x1abd PushS
	var_110_int = var_104_string + var_109_string; // 0x1abe Add
	AddBlankActor(var_108_object, var_107_object, var_104_string, var_110_int); // 0x1abf Func
	var_103_object = var_108_object; // 0x1ac1 Mov
	return 4; // 0x1ac2 Return
}


func_7358(var_393_bool)
{
	var_395_int = 0; var_396_string = ""; // 0x1cbf PushV
	var_396_string = "ood1Georg5"; // 0x1cc0 MovS
	func_6837(var_395_int, var_396_string); // 0x1cc1 NEW_2
	var_397_int = 0; // 0x1cc3 PushI
	var_398_bool = var_395_int == var_397_int; // 0x1cc4 Eq
	if(var_398_bool == 0) goto Label_7368; // 0x1cc5 JumpB
	var_393_bool = 1; // 0x1cc6 MovB
	return 0; // 0x1cc7 Return
	
Label_7368:
	var_393_bool = 0; // 0x1cc8 MovB
	return 0; // 0x1cc9 Return
}


func_7871()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x1ebf PushV
	var_97_int = 76; // 0x1ec0 PushI
	var_98_int = 2; // 0x1ec1 PushI
	var_99_int = 512158; // 0x1ec2 PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x1ec3 Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x1ec5 PushV
	var_101_object = var_96_object; // 0x1ec6 Mov
	var_102_int = 26; // 0x1ec7 MovI
	func_7910(var_100_bool, var_101_object, var_102_int); // 0x1ec8 NEW_2
	return 2; // 0x1eca Return
}


func_6853(var_133_int, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x1ac5 PushV
	CreateIntVector(var_136_object); // 0x1ac6 Func
	add(var_133_int); // 0x1ac8 ObjFunc
	add(var_134_int); // 0x1aca ObjFunc
	var_137_int = 3; // 0x1acc PushI
	SendWorldWndMessage(var_137_int, var_136_object); // 0x1acd Func
	return 2; // 0x1acf Return
}


func_2760(var_2_object, var_466_string)
{
	var_467_bool = 0; // 0xac9 PushV
	func_6948(var_467_bool); // 0xaca NEW_2
	var_468_bool = var_467_bool == 0; // 0xacc Not
	if(var_468_bool == 0) goto Label_2767; // 0xacd JumpB
	return 0; // 0xace Return
	
Label_2767:
	var_469_bool = var_466_string == var_2_object; // 0xacf Eq
	if(var_469_bool == 0) goto Label_2770; // 0xad0 JumpB
	return 0; // 0xad1 Return
	
Label_2770:
	var_470_string = ""; var_471_bool = 0; // 0xad2 PushV
	var_470_string = var_466_string; // 0xad3 Mov
	var_472_string = ""; // 0xad4 PushS
	var_473_bool = var_466_string == var_472_string; // 0xad5 Eq
	if(var_473_bool == 0) goto Label_2777; // 0xad6 JumpB
	var_471_bool = 0; // 0xad7 MovB
	goto Label_2778; // 0xad8 Jump
	
Label_2778:
	func_6784(var_470_string, var_471_bool); // 0xada NEW_2
	var_2_object = var_466_string; // 0xadc TMov
	return 0; // 0xadd Return
	
Label_2777:
	var_471_bool = 1; // 0xad9 MovB
}


func_7370(var_988_bool)
{
	var_990_int = 0; var_991_string = ""; // 0x1ccb PushV
	var_991_string = "d10q02"; // 0x1ccc MovS
	func_6837(var_990_int, var_991_string); // 0x1ccd NEW_2
	var_992_int = 3; // 0x1ccf PushI
	var_993_bool = var_990_int == var_992_int; // 0x1cd0 Eq
	if(var_993_bool == 0) goto Label_7380; // 0x1cd1 JumpB
	var_988_bool = 1; // 0x1cd2 MovB
	return 0; // 0x1cd3 Return
	
Label_7380:
	var_988_bool = 0; // 0x1cd4 MovB
	return 0; // 0x1cd5 Return
}


func_203(var_2_object, var_783_string)
{
	var_784_bool = 0; // 0xcc PushV
	func_6948(var_784_bool); // 0xcd NEW_2
	var_785_bool = var_784_bool == 0; // 0xcf Not
	if(var_785_bool == 0) goto Label_210; // 0xd0 JumpB
	return 0; // 0xd1 Return
	
Label_210:
	var_786_bool = var_783_string == var_2_object; // 0xd2 Eq
	if(var_786_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_787_string = ""; var_788_bool = 0; // 0xd5 PushV
	var_787_string = var_783_string; // 0xd6 Mov
	var_789_string = ""; // 0xd7 PushS
	var_790_bool = var_783_string == var_789_string; // 0xd8 Eq
	if(var_790_bool == 0) goto Label_220; // 0xd9 JumpB
	var_788_bool = 0; // 0xda MovB
	goto Label_221; // 0xdb Jump
	
Label_221:
	func_6784(var_787_string, var_788_bool); // 0xdd NEW_2
	var_2_object = var_783_string; // 0xdf TMov
	return 0; // 0xe0 Return
	
Label_220:
	var_788_bool = 1; // 0xdc MovB
}


func_7884()
{
	var_198_object = Obj(); var_199_object = Obj(); // 0x1ecc PushV
	var_200_int = 81; // 0x1ecd PushI
	var_201_int = 2; // 0x1ece PushI
	var_202_int = 512163; // 0x1ecf PushI
	CreateDiaryEntry(var_199_object, var_200_int, var_201_int, var_202_int); // 0x1ed0 Func
	var_203_bool = 0; var_204_object = Obj(); var_205_int = 0; // 0x1ed2 PushV
	var_204_object = var_199_object; // 0x1ed3 Mov
	var_205_int = 26; // 0x1ed4 MovI
	func_7910(var_203_bool, var_204_object, var_205_int); // 0x1ed5 NEW_2
	return 2; // 0x1ed7 Return
}


func_6865(var_120_object, var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0x1ad1 PushV
	var_124_object = Obj(); var_125_string = ""; var_126_int = 0; // 0x1ad2 PushV
	var_124_object = var_120_object; // 0x1ad3 Mov
	var_125_string = "money"; // 0x1ad4 MovS
	var_126_int = var_121_int; // 0x1ad5 Mov
	func_6512(var_125_string, var_126_int); // 0x1ad6 NEW_2
	var_130_int = 0; // 0x1ad8 PushI
	var_131_bool = var_121_int > var_130_int; // 0x1ad9 GT
	if(var_131_bool == 0) goto Label_6883; // 0x1ada JumpB
	var_132_string = "Money"; // 0x1adb PushS
	GetInvItemByName(var_123_int, var_132_string); // 0x1adc Func
	var_133_int = 0; var_134_int = 0; // 0x1ade PushV
	var_133_int = var_123_int; // 0x1adf Mov
	var_134_int = var_121_int; // 0x1ae0 Mov
	func_6853(var_133_int, var_134_int); // 0x1ae1 NEW_2
	
Label_6883:
	return 2; // 0x1ae3 Return
}


func_7382(var_608_bool)
{
	var_610_int = 0; var_611_string = ""; // 0x1cd7 PushV
	var_611_string = "d3q01HelpBurah"; // 0x1cd8 MovS
	func_6837(var_610_int, var_611_string); // 0x1cd9 NEW_2
	var_612_int = 0; // 0x1cdb PushI
	var_613_bool = var_610_int != var_612_int; // 0x1cdc Neq
	if(var_613_bool == 0) goto Label_7392; // 0x1cdd JumpB
	var_608_bool = 1; // 0x1cde MovB
	return 0; // 0x1cdf Return
	
Label_7392:
	var_608_bool = 0; // 0x1ce0 MovB
	return 0; // 0x1ce1 Return
}


func_7897(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1ed9 PushV
	GetDiaryRoot(var_88_object); // 0x1eda Func
	var_89_bool = var_88_object == 0; // 0x1edc Not
	if(var_89_bool == 0) goto Label_7907; // 0x1edd JumpB
	var_90_string = "Can't retrieve diary root"; // 0x1ede PushS
	Trace(var_90_string); // 0x1edf Func
	var_86_object = 0; // 0x1ee1 MovB
	return 2; // 0x1ee2 Return
	
Label_7907:
	var_86_object = var_88_object; // 0x1ee3 Mov
	return 2; // 0x1ee4 Return
}


func_7394(var_631_bool)
{
	var_633_bool = 0; // 0x1ce3 PushV
	var_633_bool = 0; // 0x1ce4 MovB
	var_634_bool = 0; // 0x1ce5 PushV
	var_634_bool = 0; // 0x1ce6 MovB
	var_635_int = 0; var_636_string = ""; // 0x1ce7 PushV
	var_636_string = "d3q02"; // 0x1ce8 MovS
	func_6837(var_635_int, var_636_string); // 0x1ce9 NEW_2
	var_637_int = 1000; // 0x1ceb PushI
	var_638_bool = var_635_int == var_637_int; // 0x1cec Eq
	var_639_bool = var_638_bool == 0; // 0x1ced Not
	if(var_639_bool == 0) goto Label_7416; // 0x1cee JumpB
	var_640_int = 0; var_641_string = ""; // 0x1cef PushV
	var_641_string = "d3q02"; // 0x1cf0 MovS
	func_6837(var_640_int, var_641_string); // 0x1cf1 NEW_2
	var_642_int = 0; // 0x1cf3 PushI
	var_643_bool = var_640_int == var_642_int; // 0x1cf4 Eq
	var_644_bool = var_643_bool == 0; // 0x1cf5 Not
	if(var_644_bool == 0) goto Label_7416; // 0x1cf6 JumpB
	var_634_bool = 1; // 0x1cf7 MovB
	
Label_7416:
	if(var_634_bool == 0) goto Label_7426; // 0x1cf8 JumpB
	var_645_int = 0; var_646_string = ""; // 0x1cf9 PushV
	var_646_string = "d3q02"; // 0x1cfa MovS
	func_6837(var_645_int, var_646_string); // 0x1cfb NEW_2
	var_647_int = -1; // 0x1cfd PushI
	var_648_bool = var_645_int == var_647_int; // 0x1cfe Eq
	var_649_bool = var_648_bool == 0; // 0x1cff Not
	if(var_649_bool == 0) goto Label_7426; // 0x1d00 JumpB
	var_633_bool = 1; // 0x1d01 MovB
	
Label_7426:
	if(var_633_bool == 0) goto Label_7429; // 0x1d02 JumpB
	var_631_bool = 1; // 0x1d03 MovB
	return 0; // 0x1d04 Return
	
Label_7429:
	var_631_bool = 0; // 0x1d05 MovB
	return 0; // 0x1d06 Return
}


func_6884(var_258_bool, var_259_string, var_260_string)
{
	var_261_object = Obj(); var_262_object = Obj(); // 0x1ae4 PushV
	FindActor(var_262_object, var_259_string); // 0x1ae5 Func
	var_263_bool = var_262_object == 0; // 0x1ae7 NullEq
	if(var_263_bool == 0) goto Label_6891; // 0x1ae8 JumpB
	var_258_bool = 0; // 0x1ae9 MovB
	return 2; // 0x1aea Return
	
Label_6891:
	Trigger(var_262_object, var_260_string); // 0x1aeb Func
	var_258_bool = 1; // 0x1aed MovB
	return 2; // 0x1aee Return
}


func_7910(var_77_bool, var_78_object, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; var_83_object = Obj(); var_84_object = Obj(); var_85_int = 0; // 0x1ee6 PushV
	var_86_object = Obj(); // 0x1ee7 PushV
	func_7897(var_86_object); // 0x1ee8 NEW_2
	var_83_object = var_86_object; // 0x1ee9 Mov
	Find(var_79_int, var_84_object); // 0x1eeb ObjFunc
	var_91_bool = var_84_object == 0; // 0x1eed Not
	if(var_91_bool == 0) goto Label_7925; // 0x1eee JumpB
	var_92_string = "Can't find diary parent with id: "; // 0x1eef PushS
	var_93_int = var_92_string + var_79_int; // 0x1ef0 Add
	Trace(var_93_int); // 0x1ef1 Func
	var_77_bool = 0; // 0x1ef3 MovB
	return 6; // 0x1ef4 Return
	
Label_7925:
	AddChild(var_78_object); // 0x1ef5 ObjFunc
	var_94_int = 7; // 0x1ef7 PushI
	SendWorldWndMessage(var_94_int); // 0x1ef8 Func
	GetCategory(var_85_int); // 0x1efa ObjFunc
	SetDiarySection(var_85_int); // 0x1efc Func
	var_77_bool = 0; // 0x1efe MovB
	return 6; // 0x1eff Return
}


func_5863(var_2_object, var_1043_string)
{
	var_1044_bool = 0; // 0x16e8 PushV
	func_6948(var_1044_bool); // 0x16e9 NEW_2
	var_1045_bool = var_1044_bool == 0; // 0x16eb Not
	if(var_1045_bool == 0) goto Label_5870; // 0x16ec JumpB
	return 0; // 0x16ed Return
	
Label_5870:
	var_1046_bool = var_1043_string == var_2_object; // 0x16ee Eq
	if(var_1046_bool == 0) goto Label_5873; // 0x16ef JumpB
	return 0; // 0x16f0 Return
	
Label_5873:
	var_1047_string = ""; var_1048_bool = 0; // 0x16f1 PushV
	var_1047_string = var_1043_string; // 0x16f2 Mov
	var_1049_string = ""; // 0x16f3 PushS
	var_1050_bool = var_1043_string == var_1049_string; // 0x16f4 Eq
	if(var_1050_bool == 0) goto Label_5880; // 0x16f5 JumpB
	var_1048_bool = 0; // 0x16f6 MovB
	goto Label_5881; // 0x16f7 Jump
	
Label_5881:
	func_6784(var_1047_string, var_1048_bool); // 0x16f9 NEW_2
	var_2_object = var_1043_string; // 0x16fb TMov
	return 0; // 0x16fc Return
	
Label_5880:
	var_1048_bool = 1; // 0x16f8 MovB
}


func_3304(var_0_object, var_1_object, var_2_object, var_3_string, var_547_object, var_548_object)
{
	var_0_object = var_548_object; // 0xce9 TMov
	var_1_object = var_547_object; // 0xcea TMov
	var_3_string = 0; // 0xceb TMovB
	var_553_int = 1; // 0xcec PushI
	if(var_553_int == 0) goto Label_3438; // 0xced JumpB
	var_554_bool = 0; var_555_object = Obj(); // 0xcee PushV
	var_555_object = var_1_object; // 0xcef MovT
	func_7563(var_555_object); // 0xcf0 NEW_2
	if(var_554_bool == 0) goto Label_3340; // 0xcf2 JumpB
	var_560_object = Obj(); var_561_object = Obj(); // 0xcf3 PushV
	var_560_object = var_1_object; // 0xcf4 MovT
	var_561_object = var_0_object; // 0xcf5 MovT
	func_7316(); // 0xcf6 NEW_2
	var_564_object = Obj(); var_565_object = Obj(); // 0xcf8 PushV
	var_564_object = var_1_object; // 0xcf9 MovT
	var_565_object = var_0_object; // 0xcfa MovT
	func_7164(); // 0xcfb NEW_2
	var_568_string = ""; // 0xcfd PushV
	var_568_string = "Neutral"; // 0xcfe MovS
	func_3468(var_548_object, var_568_string); // 0xcff NEW_2
	var_576_int = 509043; // 0xd01 PushI
	SetMessage(var_576_int); // 0xd02 TObjFunc
	ClearReplies(); // 0xd04 TObjFunc
	var_577_int = 509044; // 0xd06 PushI
	var_578_int = 9921; // 0xd07 PushI
	var_579_int = 9920; // 0xd08 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0xd09 TObjFunc
	goto Label_3438; // 0xd0b Jump
	
Label_3438:
	var_580_bool = 0; // 0xd6e PushV
	func_6948(var_580_bool); // 0xd6f NEW_2
	if(var_580_bool == 0) goto Label_3453; // 0xd71 JumpB
	
Label_3442:
	lshWaitForAnimEnd(); // 0xd72 Func
	var_581_string = var_3_string; // 0xd74 PushT
	if(var_581_string == 0) goto Label_3447; // 0xd75 JumpB
	goto Label_3452; // 0xd76 Jump
	
Label_3452:
	goto Label_3467; // 0xd7c Jump
	
Label_3467:
	return 0; // 0xd8b Return
	
Label_3447:
	var_582_string = ""; // 0xd77 PushV
	var_582_string = var_2_object; // 0xd78 MovT
	func_6768(var_582_string); // 0xd79 NEW_2
	goto Label_3442; // 0xd7b Jump
	
Label_3453:
	var_583_string = "all"; // 0xd7d PushS
	var_584_string = "idle"; // 0xd7e PushS
	PlayAnimation(var_583_string, var_584_string); // 0xd7f Func
	
Label_3457:
	WaitForAnimEnd(); // 0xd81 Func
	var_585_string = var_3_string; // 0xd83 PushT
	if(var_585_string == 0) goto Label_3462; // 0xd84 JumpB
	goto Label_3467; // 0xd85 Jump
	
Label_3462:
	var_586_string = "all"; // 0xd86 PushS
	var_587_string = "idle"; // 0xd87 PushS
	PlayAnimation(var_586_string, var_587_string); // 0xd88 Func
	goto Label_3457; // 0xd8a Jump
	
Label_3340:
	var_588_object = Obj(); var_589_object = Obj(); // 0xd0c PushV
	var_588_object = var_1_object; // 0xd0d MovT
	var_589_object = var_0_object; // 0xd0e MovT
	func_7316(); // 0xd0f NEW_2
	var_590_string = ""; // 0xd11 PushV
	var_590_string = "Neutral"; // 0xd12 MovS
	func_3468(var_548_object, var_590_string); // 0xd13 NEW_2
	var_591_int = 509024; // 0xd15 PushI
	SetMessage(var_591_int); // 0xd16 TObjFunc
	ClearReplies(); // 0xd18 TObjFunc
	var_592_bool = 0; var_593_object = Obj(); // 0xd1a PushV
	var_593_object = var_1_object; // 0xd1b MovT
	func_7587(var_593_object); // 0xd1c NEW_2
	if(var_592_bool == 0) goto Label_3364; // 0xd1e JumpB
	var_598_int = 511376; // 0xd1f PushI
	var_599_int = 9899; // 0xd20 PushI
	var_600_int = 12575; // 0xd21 PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0xd22 TObjFunc
	
Label_3364:
	var_601_bool = 0; // 0xd24 PushV
	var_601_bool = 0; // 0xd25 MovB
	var_602_bool = 0; var_603_object = Obj(); // 0xd26 PushV
	var_603_object = var_1_object; // 0xd27 MovT
	func_7551(var_603_object); // 0xd28 NEW_2
	if(var_602_bool == 0) goto Label_3377; // 0xd2a JumpB
	var_608_bool = 0; var_609_object = Obj(); // 0xd2b PushV
	var_609_object = var_1_object; // 0xd2c MovT
	func_7382(var_609_object); // 0xd2d NEW_2
	if(var_608_bool == 0) goto Label_3377; // 0xd2f JumpB
	var_601_bool = 1; // 0xd30 MovB
	
Label_3377:
	if(var_601_bool == 0) goto Label_3383; // 0xd31 JumpB
	var_614_int = 509042; // 0xd32 PushI
	var_615_int = 9941; // 0xd33 PushI
	var_616_int = 9918; // 0xd34 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0xd35 TObjFunc
	
Label_3383:
	var_617_bool = 0; // 0xd37 PushV
	var_617_bool = 0; // 0xd38 MovB
	var_618_bool = 0; // 0xd39 PushV
	var_618_bool = 0; // 0xd3a MovB
	var_619_bool = 0; var_620_object = Obj(); // 0xd3b PushV
	var_620_object = var_1_object; // 0xd3c MovT
	func_7599(var_620_object); // 0xd3d NEW_2
	if(var_619_bool == 0) goto Label_3398; // 0xd3f JumpB
	var_625_bool = 0; var_626_object = Obj(); // 0xd40 PushV
	var_626_object = var_1_object; // 0xd41 MovT
	func_7611(var_626_object); // 0xd42 NEW_2
	if(var_625_bool == 0) goto Label_3398; // 0xd44 JumpB
	var_618_bool = 1; // 0xd45 MovB
	
Label_3398:
	if(var_618_bool == 0) goto Label_3405; // 0xd46 JumpB
	var_631_bool = 0; var_632_object = Obj(); // 0xd47 PushV
	var_632_object = var_1_object; // 0xd48 MovT
	func_7394(var_632_object); // 0xd49 NEW_2
	if(var_631_bool == 0) goto Label_3405; // 0xd4b JumpB
	var_617_bool = 1; // 0xd4c MovB
	
Label_3405:
	if(var_617_bool == 0) goto Label_3411; // 0xd4d JumpB
	var_650_int = 510442; // 0xd4e PushI
	var_651_int = 11512; // 0xd4f PushI
	var_652_int = 11511; // 0xd50 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xd51 TObjFunc
	
Label_3411:
	var_653_bool = 0; // 0xd53 PushV
	var_653_bool = 0; // 0xd54 MovB
	var_654_bool = 0; var_655_object = Obj(); // 0xd55 PushV
	var_655_object = var_1_object; // 0xd56 MovT
	func_7575(var_655_object); // 0xd57 NEW_2
	if(var_654_bool == 0) goto Label_3424; // 0xd59 JumpB
	var_660_bool = 0; var_661_object = Obj(); // 0xd5a PushV
	var_661_object = var_1_object; // 0xd5b MovT
	func_7394(var_661_object); // 0xd5c NEW_2
	if(var_660_bool == 0) goto Label_3424; // 0xd5e JumpB
	var_653_bool = 1; // 0xd5f MovB
	
Label_3424:
	if(var_653_bool == 0) goto Label_3430; // 0xd60 JumpB
	var_662_int = 509034; // 0xd61 PushI
	var_663_int = 9910; // 0xd62 PushI
	var_664_int = 9909; // 0xd63 PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0xd64 TObjFunc
	
Label_3430:
	var_665_int = 511147; // 0xd66 PushI
	var_666_int = -1; // 0xd67 PushI
	var_667_int = 12337; // 0xd68 PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0xd69 TObjFunc
	goto Label_3438; // 0xd6b Jump
}


func_5359(var_0_object, var_1_object, var_2_object, var_3_string, var_972_object, var_973_object)
{
	var_0_object = var_973_object; // 0x14f0 TMov
	var_1_object = var_972_object; // 0x14f1 TMov
	var_3_string = 0; // 0x14f2 TMovB
	var_978_int = 1; // 0x14f3 PushI
	if(var_978_int == 0) goto Label_5392; // 0x14f4 JumpB
	var_979_string = ""; // 0x14f5 PushV
	var_979_string = "Neutral"; // 0x14f6 MovS
	func_5422(var_973_object, var_979_string); // 0x14f7 NEW_2
	var_987_int = 534109; // 0x14f9 PushI
	SetMessage(var_987_int); // 0x14fa TObjFunc
	ClearReplies(); // 0x14fc TObjFunc
	var_988_bool = 0; var_989_object = Obj(); // 0x14fe PushV
	var_989_object = var_1_object; // 0x14ff MovT
	func_7370(var_989_object); // 0x1500 NEW_2
	if(var_988_bool == 0) goto Label_5384; // 0x1502 JumpB
	var_994_int = 534110; // 0x1503 PushI
	var_995_int = 38263; // 0x1504 PushI
	var_996_int = 35703; // 0x1505 PushI
	AddReply(var_994_int, var_995_int, var_996_int); // 0x1506 TObjFunc
	
Label_5384:
	var_997_int = 534111; // 0x1508 PushI
	var_998_int = -1; // 0x1509 PushI
	var_999_int = 35704; // 0x150a PushI
	AddReply(var_997_int, var_998_int, var_999_int); // 0x150b TObjFunc
	goto Label_5392; // 0x150d Jump
	
Label_5392:
	var_1000_bool = 0; // 0x1510 PushV
	func_6948(var_1000_bool); // 0x1511 NEW_2
	if(var_1000_bool == 0) goto Label_5407; // 0x1513 JumpB
	
Label_5396:
	lshWaitForAnimEnd(); // 0x1514 Func
	var_1001_string = var_3_string; // 0x1516 PushT
	if(var_1001_string == 0) goto Label_5401; // 0x1517 JumpB
	goto Label_5406; // 0x1518 Jump
	
Label_5406:
	goto Label_5421; // 0x151e Jump
	
Label_5421:
	return 0; // 0x152d Return
	
Label_5401:
	var_1002_string = ""; // 0x1519 PushV
	var_1002_string = var_2_object; // 0x151a MovT
	func_6768(var_1002_string); // 0x151b NEW_2
	goto Label_5396; // 0x151d Jump
	
Label_5407:
	var_1003_string = "all"; // 0x151f PushS
	var_1004_string = "idle"; // 0x1520 PushS
	PlayAnimation(var_1003_string, var_1004_string); // 0x1521 Func
	
Label_5411:
	WaitForAnimEnd(); // 0x1523 Func
	var_1005_string = var_3_string; // 0x1525 PushT
	if(var_1005_string == 0) goto Label_5416; // 0x1526 JumpB
	goto Label_5421; // 0x1527 Jump
	
Label_5416:
	var_1006_string = "all"; // 0x1528 PushS
	var_1007_string = "idle"; // 0x1529 PushS
	PlayAnimation(var_1006_string, var_1007_string); // 0x152a Func
	goto Label_5411; // 0x152c Jump
}


func_6896(var_69_float)
{
	var_70_float = 0; var_71_float = 0; // 0x1af0 PushV
	GetGameTime(var_71_float); // 0x1af1 Func
	var_69_float = var_71_float; // 0x1af3 Mov
	return 2; // 0x1af4 Return
}


func_6901(var_67_int)
{
	var_68_float = 0; var_69_float = 0; // 0x1af5 PushV
	GetGameTime(var_69_float); // 0x1af6 Func
	var_70_int = 1; // 0x1af8 PushI
	var_71_int = 0; // 0x1af9 PushV
	var_72_int = 24; // 0x1afa PushI
	var_71_int = var_69_float / var_69_float; // 0x1afb Div2
	var_67_int = var_70_int + var_71_int; // 0x1afc Add2
	return 2; // 0x1afd Return
}


func_4860(var_0_object, var_1_object, var_2_object, var_3_string, var_889_object, var_890_object)
{
	var_0_object = var_890_object; // 0x12fd TMov
	var_1_object = var_889_object; // 0x12fe TMov
	var_3_string = 0; // 0x12ff TMovB
	var_895_int = 1; // 0x1300 PushI
	if(var_895_int == 0) goto Label_4927; // 0x1301 JumpB
	var_896_bool = 0; // 0x1302 PushV
	var_896_bool = 0; // 0x1303 MovB
	var_897_bool = 0; var_898_object = Obj(); // 0x1304 PushV
	var_898_object = var_1_object; // 0x1305 MovT
	func_7731(var_898_object); // 0x1306 NEW_2
	if(var_897_bool == 0) goto Label_4879; // 0x1308 JumpB
	var_903_bool = 0; var_904_object = Obj(); // 0x1309 PushV
	var_904_object = var_1_object; // 0x130a MovT
	func_7743(var_904_object); // 0x130b NEW_2
	if(var_903_bool == 0) goto Label_4879; // 0x130d JumpB
	var_896_bool = 1; // 0x130e MovB
	
Label_4879:
	if(var_896_bool == 0) goto Label_4905; // 0x130f JumpB
	var_909_object = Obj(); var_910_object = Obj(); // 0x1310 PushV
	var_909_object = var_1_object; // 0x1311 MovT
	var_910_object = var_0_object; // 0x1312 MovT
	func_7310(); // 0x1313 NEW_2
	var_913_string = ""; // 0x1315 PushV
	var_913_string = "Neutral"; // 0x1316 MovS
	func_4957(var_890_object, var_913_string); // 0x1317 NEW_2
	var_921_int = 512258; // 0x1319 PushI
	SetMessage(var_921_int); // 0x131a TObjFunc
	ClearReplies(); // 0x131c TObjFunc
	var_922_int = 512259; // 0x131e PushI
	var_923_int = 13417; // 0x131f PushI
	var_924_int = 13416; // 0x1320 PushI
	AddReply(var_922_int, var_923_int, var_924_int); // 0x1321 TObjFunc
	var_925_int = 541804; // 0x1323 PushI
	var_926_int = -1; // 0x1324 PushI
	var_927_int = 44016; // 0x1325 PushI
	AddReply(var_925_int, var_926_int, var_927_int); // 0x1326 TObjFunc
	goto Label_4927; // 0x1328 Jump
	
Label_4927:
	var_928_bool = 0; // 0x133f PushV
	func_6948(var_928_bool); // 0x1340 NEW_2
	if(var_928_bool == 0) goto Label_4942; // 0x1342 JumpB
	
Label_4931:
	lshWaitForAnimEnd(); // 0x1343 Func
	var_929_string = var_3_string; // 0x1345 PushT
	if(var_929_string == 0) goto Label_4936; // 0x1346 JumpB
	goto Label_4941; // 0x1347 Jump
	
Label_4941:
	goto Label_4956; // 0x134d Jump
	
Label_4956:
	return 0; // 0x135c Return
	
Label_4936:
	var_930_string = ""; // 0x1348 PushV
	var_930_string = var_2_object; // 0x1349 MovT
	func_6768(var_930_string); // 0x134a NEW_2
	goto Label_4931; // 0x134c Jump
	
Label_4942:
	var_931_string = "all"; // 0x134e PushS
	var_932_string = "idle"; // 0x134f PushS
	PlayAnimation(var_931_string, var_932_string); // 0x1350 Func
	
Label_4946:
	WaitForAnimEnd(); // 0x1352 Func
	var_933_string = var_3_string; // 0x1354 PushT
	if(var_933_string == 0) goto Label_4951; // 0x1355 JumpB
	goto Label_4956; // 0x1356 Jump
	
Label_4951:
	var_934_string = "all"; // 0x1357 PushS
	var_935_string = "idle"; // 0x1358 PushS
	PlayAnimation(var_934_string, var_935_string); // 0x1359 Func
	goto Label_4946; // 0x135b Jump
	
Label_4905:
	var_936_string = ""; // 0x1329 PushV
	var_936_string = "Neutral"; // 0x132a MovS
	func_4957(var_890_object, var_936_string); // 0x132b NEW_2
	var_937_int = 513775; // 0x132d PushI
	SetMessage(var_937_int); // 0x132e TObjFunc
	ClearReplies(); // 0x1330 TObjFunc
	var_938_int = 513776; // 0x1332 PushI
	var_939_int = -1; // 0x1333 PushI
	var_940_int = 15012; // 0x1334 PushI
	AddReply(var_938_int, var_939_int, var_940_int); // 0x1335 TObjFunc
	var_941_int = 541596; // 0x1337 PushI
	var_942_int = -1; // 0x1338 PushI
	var_943_int = 43760; // 0x1339 PushI
	AddReply(var_941_int, var_942_int, var_943_int); // 0x133a TObjFunc
	goto Label_4927; // 0x133c Jump
}


func_4349(var_0_object, var_1_object, var_2_object, var_3_string, var_696_object, var_697_object)
{
	var_0_object = var_697_object; // 0x10fe TMov
	var_1_object = var_696_object; // 0x10ff TMov
	var_3_string = 0; // 0x1100 TMovB
	var_702_int = 1; // 0x1101 PushI
	if(var_702_int == 0) goto Label_4401; // 0x1102 JumpB
	var_703_string = ""; // 0x1103 PushV
	var_703_string = "Neutral"; // 0x1104 MovS
	func_4431(var_697_object, var_703_string); // 0x1105 NEW_2
	var_711_int = 511791; // 0x1107 PushI
	SetMessage(var_711_int); // 0x1108 TObjFunc
	ClearReplies(); // 0x110a TObjFunc
	var_712_bool = 0; // 0x110c PushV
	var_712_bool = 0; // 0x110d MovB
	var_713_bool = 0; var_714_object = Obj(); // 0x110e PushV
	var_714_object = var_1_object; // 0x110f MovT
	func_7635(var_714_object); // 0x1110 NEW_2
	if(var_713_bool == 0) goto Label_4377; // 0x1112 JumpB
	var_719_bool = 0; var_720_object = Obj(); // 0x1113 PushV
	var_720_object = var_1_object; // 0x1114 MovT
	func_7623(var_720_object); // 0x1115 NEW_2
	if(var_719_bool == 0) goto Label_4377; // 0x1117 JumpB
	var_712_bool = 1; // 0x1118 MovB
	
Label_4377:
	if(var_712_bool == 0) goto Label_4383; // 0x1119 JumpB
	var_725_int = 511792; // 0x111a PushI
	var_726_int = 13003; // 0x111b PushI
	var_727_int = 13002; // 0x111c PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x111d TObjFunc
	
Label_4383:
	var_728_bool = 0; var_729_object = Obj(); // 0x111f PushV
	var_729_object = var_1_object; // 0x1120 MovT
	func_7755(var_729_object); // 0x1121 NEW_2
	if(var_728_bool == 0) goto Label_4393; // 0x1123 JumpB
	var_734_int = 515713; // 0x1124 PushI
	var_735_int = 16770; // 0x1125 PushI
	var_736_int = 16769; // 0x1126 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x1127 TObjFunc
	
Label_4393:
	var_737_int = 511794; // 0x1129 PushI
	var_738_int = -1; // 0x112a PushI
	var_739_int = 13004; // 0x112b PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x112c TObjFunc
	goto Label_4401; // 0x112e Jump
	
Label_4401:
	var_740_bool = 0; // 0x1131 PushV
	func_6948(var_740_bool); // 0x1132 NEW_2
	if(var_740_bool == 0) goto Label_4416; // 0x1134 JumpB
	
Label_4405:
	lshWaitForAnimEnd(); // 0x1135 Func
	var_741_string = var_3_string; // 0x1137 PushT
	if(var_741_string == 0) goto Label_4410; // 0x1138 JumpB
	goto Label_4415; // 0x1139 Jump
	
Label_4415:
	goto Label_4430; // 0x113f Jump
	
Label_4430:
	return 0; // 0x114e Return
	
Label_4410:
	var_742_string = ""; // 0x113a PushV
	var_742_string = var_2_object; // 0x113b MovT
	func_6768(var_742_string); // 0x113c NEW_2
	goto Label_4405; // 0x113e Jump
	
Label_4416:
	var_743_string = "all"; // 0x1140 PushS
	var_744_string = "idle"; // 0x1141 PushS
	PlayAnimation(var_743_string, var_744_string); // 0x1142 Func
	
Label_4420:
	WaitForAnimEnd(); // 0x1144 Func
	var_745_string = var_3_string; // 0x1146 PushT
	if(var_745_string == 0) goto Label_4425; // 0x1147 JumpB
	goto Label_4430; // 0x1148 Jump
	
Label_4425:
	var_746_string = "all"; // 0x1149 PushS
	var_747_string = "idle"; // 0x114a PushS
	PlayAnimation(var_746_string, var_747_string); // 0x114b Func
	goto Label_4420; // 0x114d Jump
}


func_6910(var_65_bool, var_66_int)
{
	var_67_int = 0; // 0x1aff PushV
	func_6901(var_67_int); // 0x1b00 NEW_2
	var_65_bool = var_67_int == var_66_int; // 0x1b02 Eq2
	return 0; // 0x1b03 Return
}


func_7938(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); // 0x1f02 PushV
	GetMainOutdoorScene(var_61_object); // 0x1f03 Func
	var_63_bool = var_61_object == 0; // 0x1f05 NullEq
	if(var_63_bool == 0) goto Label_7949; // 0x1f06 JumpB
	var_64_string = "Can't find main outdoor scene"; // 0x1f07 PushS
	Trace(var_64_string); // 0x1f08 Func
	var_62_object = 0; // 0x1f0a SetNull
	var_58_object = var_62_object; // 0x1f0b Mov
	return 4; // 0x1f0c Return
	
Label_7949:
	GetMap(var_62_object); // 0x1f0d ObjFunc
	var_58_object = var_62_object; // 0x1f0f Mov
	return 4; // 0x1f10 Return
}


func_6916(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0x1b04 PushV
	var_74_string = "idle"; // 0x1b05 MovS
	var_75_int = var_72_int; // 0x1b06 Push
	if(var_75_int == 0) goto Label_6921; // 0x1b07 JumpB
	var_74_string = var_74_string + var_72_int; // 0x1b08 Add2
	
Label_6921:
	var_71_string = var_74_string; // 0x1b09 Mov
	return 2; // 0x1b0a Return
}


func_7431(var_454_bool)
{
	var_456_int = 0; var_457_string = ""; // 0x1d08 PushV
	var_457_string = "ood2Georg1"; // 0x1d09 MovS
	func_6837(var_456_int, var_457_string); // 0x1d0a NEW_2
	var_458_int = 0; // 0x1d0c PushI
	var_459_bool = var_456_int == var_458_int; // 0x1d0d Eq
	if(var_459_bool == 0) goto Label_7441; // 0x1d0e JumpB
	var_454_bool = 1; // 0x1d0f MovB
	return 0; // 0x1d10 Return
	
Label_7441:
	var_454_bool = 0; // 0x1d11 MovB
	return 0; // 0x1d12 Return
}


func_6923(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x1b0b PushV
	var_68_int = 0; // 0x1b0c MovI
	
Label_6925:
	var_70_string = "all"; // 0x1b0d PushS
	var_71_string = ""; var_72_int = 0; // 0x1b0e PushV
	var_72_int = var_68_int; // 0x1b0f Mov
	func_6916(var_71_string, var_72_int); // 0x1b10 NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0x1b12 Func
	var_76_bool = var_69_bool == 0; // 0x1b14 Not
	if(var_76_bool == 0) goto Label_6935; // 0x1b15 JumpB
	goto Label_6938; // 0x1b16 Jump
	
Label_6938:
	var_65_int = var_68_int; // 0x1b1a Mov
	return 4; // 0x1b1b Return
	
Label_6935:
	var_77_int = 1; // 0x1b17 PushI
	var_68_int = var_68_int + var_77_int; // 0x1b18 Add2
	goto Label_6925; // 0x1b19 Jump
}


func_7443(var_498_bool)
{
	var_500_int = 0; var_501_string = ""; // 0x1d14 PushV
	var_501_string = "ood2Georg2"; // 0x1d15 MovS
	func_6837(var_500_int, var_501_string); // 0x1d16 NEW_2
	var_502_int = 0; // 0x1d18 PushI
	var_503_bool = var_500_int == var_502_int; // 0x1d19 Eq
	if(var_503_bool == 0) goto Label_7453; // 0x1d1a JumpB
	var_498_bool = 1; // 0x1d1b MovB
	return 0; // 0x1d1c Return
	
Label_7453:
	var_498_bool = 0; // 0x1d1d MovB
	return 0; // 0x1d1e Return
}


func_7955(var_97_object, var_98_string, var_99_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_object = Obj(); var_108_bool = 0; // 0x1f13 PushV
	GetMainOutdoorScene(var_107_object); // 0x1f14 Func
	var_109_bool = var_107_object == 0; // 0x1f16 NullEq
	if(var_109_bool == 0) goto Label_7964; // 0x1f17 JumpB
	var_110_string = "Can't find main outdoor scene"; // 0x1f18 PushS
	Trace(var_110_string); // 0x1f19 Func
	return 8; // 0x1f1b Return
	
Label_7964:
	GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector); // 0x1f1c ObjFunc
	var_111_bool = var_108_bool == 0; // 0x1f1e Not
	if(var_111_bool == 0) goto Label_7974; // 0x1f1f JumpB
	var_112_string = "Warning: outdoor scene locator "; // 0x1f20 PushS
	var_113_int = var_112_string + var_98_string; // 0x1f21 Add
	var_114_string = " doesnt exist"; // 0x1f22 PushS
	var_115_int = var_113_int + var_114_string; // 0x1f23 Add
	Trace(var_115_int); // 0x1f24 Func
	
Label_7974:
	GetMap(var_97_object); // 0x1f26 ObjFunc
	var_116_bool = var_97_object == 0; // 0x1f28 NullEq
	if(var_116_bool == 0) goto Label_7982; // 0x1f29 JumpB
	var_117_string = "Can't find map"; // 0x1f2a PushS
	Trace(var_117_string); // 0x1f2b Func
	return 8; // 0x1f2d Return
	
Label_7982:
	var_118_float = GetByIndex(var_105_cvector, 0); // 0x1f2e PushE
	var_119_float = GetByIndex(var_105_cvector, 2); // 0x1f2f PushE
	SetMapParams(var_118_float, var_119_float, var_99_float); // 0x1f30 ObjFunc
	return 8; // 0x1f32 Return
}


func_6940(var_133_int)
{
	var_133_int = 515534; // 0x1b1c MovI
	return 0; // 0x1b1d Return
}


func_6428()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x191c PushV
	WaitForAnimEnd(); // 0x191d Func
	var_63_bool = 0; // 0x191f PushV
	func_6538(var_63_bool); // 0x1920 NEW_2
	var_64_bool = var_63_bool == 0; // 0x1922 Not
	if(var_64_bool == 0) goto Label_6437; // 0x1923 JumpB
	return 12; // 0x1924 Return
	
Label_6437:
	var_65_int = 0; // 0x1925 PushV
	func_6923(var_65_int); // 0x1926 NEW_2
	var_57_int = var_65_int; // 0x1927 Mov
	var_58_int = 0; // 0x1929 MovI
	
Label_6442:
	var_78_bool = 0; // 0x192a PushV
	var_78_bool = 0; // 0x192b MovB
	var_79_int = 5; // 0x192c PushI
	var_80_bool = var_58_int < var_79_int; // 0x192d LT
	if(var_80_bool == 0) goto Label_6452; // 0x192e JumpB
	var_81_bool = 0; // 0x192f PushV
	func_6538(var_81_bool); // 0x1930 NEW_2
	if(var_81_bool == 0) goto Label_6452; // 0x1932 JumpB
	var_78_bool = 1; // 0x1933 MovB
	
Label_6452:
	if(var_78_bool == 0) goto Label_6494; // 0x1934 JumpB
	var_82_bool = var_57_int == 0; // 0x1935 Not
	if(var_82_bool == 0) goto Label_6462; // 0x1936 JumpB
	var_83_int = 3; // 0x1937 PushI
	Sleep(var_83_int, var_59_bool); // 0x1938 Func
	var_84_bool = var_59_bool == 0; // 0x193a Not
	if(var_84_bool == 0) goto Label_6461; // 0x193b JumpB
	goto Label_6494; // 0x193c Jump
	
Label_6494:
	ResetAAS(); // 0x195e Func
	return 12; // 0x1960 Return
	
Label_6461:
	goto Label_6483; // 0x193d Jump
	
Label_6483:
	var_85_bool = 0; // 0x1953 PushV
	func_6497(var_85_bool); // 0x1954 NEW_2
	var_86_bool = var_85_bool == 0; // 0x1956 Not
	if(var_86_bool == 0) goto Label_6489; // 0x1957 JumpB
	goto Label_6494; // 0x1958 Jump
	
Label_6489:
	ResetAAS(); // 0x1959 Func
	var_87_int = 1; // 0x195b PushI
	var_58_int = var_58_int + var_87_int; // 0x195c Add2
	goto Label_6442; // 0x195d Jump
	
Label_6462:
	irand(var_60_int, var_57_int); // 0x193e Func
	var_88_int = 5; // 0x1940 PushI
	irand(var_61_int, var_88_int); // 0x1941 Func
	var_89_int = 0; // 0x1943 PushI
	var_90_bool = var_61_int != var_89_int; // 0x1944 Neq
	if(var_90_bool == 0) goto Label_6471; // 0x1945 JumpB
	var_60_int = 0; // 0x1946 MovI
	
Label_6471:
	var_91_string = "all"; // 0x1947 PushS
	var_92_string = ""; var_93_int = 0; // 0x1948 PushV
	var_93_int = var_60_int; // 0x1949 Mov
	func_6916(var_92_string, var_93_int); // 0x194a NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x194c Func
	WaitForAnimEnd(var_62_bool); // 0x194e Func
	var_94_bool = var_62_bool == 0; // 0x1950 Not
	if(var_94_bool == 0) goto Label_6483; // 0x1951 JumpB
	goto Label_6494; // 0x1952 Jump
}


func_6942(var_132_int)
{
	var_132_int = 502859; // 0x1b1e MovI
	return 0; // 0x1b1f Return
}


func_7455(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0x1d20 PushV
	var_507_string = "d2q01"; // 0x1d21 MovS
	func_6837(var_506_int, var_507_string); // 0x1d22 NEW_2
	var_508_int = 0; // 0x1d24 PushI
	var_509_bool = var_506_int == var_508_int; // 0x1d25 Eq
	if(var_509_bool == 0) goto Label_7465; // 0x1d26 JumpB
	var_504_bool = 1; // 0x1d27 MovB
	return 0; // 0x1d28 Return
	
Label_7465:
	var_504_bool = 0; // 0x1d29 MovB
	return 0; // 0x1d2a Return
}


func_6944(var_134_string)
{
	var_134_string = "ui/NPC_Georg.png"; // 0x1b20 MovS
	return 0; // 0x1b21 Return
}


func_6946(var_135_string)
{
	var_135_string = "ui/NPC_Georg_b.png"; // 0x1b22 MovS
	return 0; // 0x1b23 Return
}


func_6948(var_127_bool)
{
	var_127_bool = 1; // 0x1b24 MovB
	return 0; // 0x1b25 Return
}


func_6950(var_209_object)
{
	var_211_string = "money 4000 is given"; // 0x1b27 PushS
	Trace(var_211_string); // 0x1b28 Func
	var_212_object = Obj(); var_213_int = 0; // 0x1b2a PushV
	var_212_object = var_209_object; // 0x1b2b Mov
	var_213_int = 4000; // 0x1b2c MovI
	func_6865(var_212_object, var_213_int); // 0x1b2d NEW_2
	return 0; // 0x1b2f Return
}


func_7467(var_460_bool)
{
	var_462_int = 0; var_463_string = ""; // 0x1d2c PushV
	var_463_string = "d2q01"; // 0x1d2d MovS
	func_6837(var_462_int, var_463_string); // 0x1d2e NEW_2
	var_464_int = 6; // 0x1d30 PushI
	var_465_bool = var_462_int == var_464_int; // 0x1d31 Eq
	if(var_465_bool == 0) goto Label_7477; // 0x1d32 JumpB
	var_460_bool = 1; // 0x1d33 MovB
	return 0; // 0x1d34 Return
	
Label_7477:
	var_460_bool = 0; // 0x1d35 MovB
	return 0; // 0x1d36 Return
}


func_5422(var_2_object, var_979_string)
{
	var_980_bool = 0; // 0x152f PushV
	func_6948(var_980_bool); // 0x1530 NEW_2
	var_981_bool = var_980_bool == 0; // 0x1532 Not
	if(var_981_bool == 0) goto Label_5429; // 0x1533 JumpB
	return 0; // 0x1534 Return
	
Label_5429:
	var_982_bool = var_979_string == var_2_object; // 0x1535 Eq
	if(var_982_bool == 0) goto Label_5432; // 0x1536 JumpB
	return 0; // 0x1537 Return
	
Label_5432:
	var_983_string = ""; var_984_bool = 0; // 0x1538 PushV
	var_983_string = var_979_string; // 0x1539 Mov
	var_985_string = ""; // 0x153a PushS
	var_986_bool = var_979_string == var_985_string; // 0x153b Eq
	if(var_986_bool == 0) goto Label_5439; // 0x153c JumpB
	var_984_bool = 0; // 0x153d MovB
	goto Label_5440; // 0x153e Jump
	
Label_5440:
	func_6784(var_983_string, var_984_bool); // 0x1540 NEW_2
	var_2_object = var_979_string; // 0x1542 TMov
	return 0; // 0x1543 Return
	
Label_5439:
	var_984_bool = 1; // 0x153f MovB
}


func_6960()
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0; // 0x1b31 PushV
	var_100_object = Obj(); // 0x1b32 PushV
	func_7938(var_100_object); // 0x1b33 NEW_2
	var_97_object = var_100_object; // 0x1b34 Mov
	var_98_string = "pt_map_aglaja"; // 0x1b36 MovS
	var_99_float = 2; // 0x1b37 MovI
	func_7955(var_97_object, var_98_string, var_99_float); // 0x1b38 NEW_2
	var_120_object = Obj(); // 0x1b3a PushV
	func_7938(var_120_object); // 0x1b3b NEW_2
	ShowMap(var_120_object); // 0x1b3d ObjFunc
	return 0; // 0x1b3f Return
}


func_7988(var_136_int)
{
	var_137_int = 0; var_138_int = 0; // 0x1f34 PushV
	var_139_string = "branch"; // 0x1f35 PushS
	GetVariable(var_139_string, var_138_int); // 0x1f36 Func
	var_140_int = 0; // 0x1f38 PushI
	var_141_bool = var_138_int == var_140_int; // 0x1f39 Eq
	if(var_141_bool == 0) goto Label_7998; // 0x1f3a JumpB
	var_136_int = 1; // 0x1f3b MovI
	return 2; // 0x1f3c Return
	
Label_7998:
	var_142_int = 1; // 0x1f3e PushI
	var_143_bool = var_138_int == var_142_int; // 0x1f3f Eq
	if(var_143_bool == 0) goto Label_8003; // 0x1f40 JumpB
	var_136_int = 2; // 0x1f41 MovI
	return 2; // 0x1f42 Return
	
Label_8003:
	var_136_int = 3; // 0x1f43 MovI
	return 2; // 0x1f44 Return
}


func_7479(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0x1d38 PushV
	var_429_string = "KnowBurahDead"; // 0x1d39 MovS
	func_6837(var_428_int, var_429_string); // 0x1d3a NEW_2
	var_430_int = 1; // 0x1d3c PushI
	var_431_bool = var_428_int == var_430_int; // 0x1d3d Eq
	if(var_431_bool == 0) goto Label_7489; // 0x1d3e JumpB
	var_426_bool = 1; // 0x1d3f MovB
	return 0; // 0x1d40 Return
	
Label_7489:
	var_426_bool = 0; // 0x1d41 MovB
	return 0; // 0x1d42 Return
}


func_6976()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1b40 PushV
	var_56_string = "d1q01"; // 0x1b41 PushS
	var_57_int = 1; // 0x1b42 PushI
	SetVariable(var_56_string, var_57_int); // 0x1b43 Func
	var_58_object = Obj(); // 0x1b45 PushV
	func_7938(var_58_object); // 0x1b46 NEW_2
	var_55_object = var_58_object; // 0x1b47 Mov
	var_65_string = "d1GeorgInfo"; // 0x1b49 PushS
	var_66_string = "pt_map_georg"; // 0x1b4a PushS
	var_67_int = 3; // 0x1b4b PushI
	var_68_int = 508631; // 0x1b4c PushI
	var_69_float = 0; // 0x1b4d PushV
	func_6896(var_69_float); // 0x1b4e NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1b50 ObjFunc
	var_72_string = "d1q01GeorgGotoViktor"; // 0x1b52 PushS
	var_73_string = "pt_map_viktor"; // 0x1b53 PushS
	var_74_int = 1; // 0x1b54 PushI
	var_75_int = 508629; // 0x1b55 PushI
	var_76_float = 0; // 0x1b56 PushV
	func_6896(var_76_float); // 0x1b57 NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x1b59 ObjFunc
	func_7780(); // 0x1b5c NEW_2
	func_7806(); // 0x1b5f NEW_2
	return 2; // 0x1b61 Return
}


func_7491(var_377_bool)
{
	var_379_int = 0; var_380_string = ""; // 0x1d44 PushV
	var_380_string = "ood1Georg4"; // 0x1d45 MovS
	func_6837(var_379_int, var_380_string); // 0x1d46 NEW_2
	var_381_int = 0; // 0x1d48 PushI
	var_382_bool = var_379_int == var_381_int; // 0x1d49 Eq
	if(var_382_bool == 0) goto Label_7501; // 0x1d4a JumpB
	var_377_bool = 1; // 0x1d4b MovB
	return 0; // 0x1d4c Return
	
Label_7501:
	var_377_bool = 0; // 0x1d4d MovB
	return 0; // 0x1d4e Return
}


func_8005(var_64_object)
{
	var_65_bool = 0; var_66_int = 0; // 0x1f46 PushV
	var_66_int = 1; // 0x1f47 MovI
	func_6910(var_65_bool, var_66_int); // 0x1f48 NEW_2
	if(var_65_bool == 0) goto Label_8018; // 0x1f4a JumpB
	var_73_int = 0; var_74_object = Obj(); // 0x1f4b PushV
	var_74_object = var_64_object; // 0x1f4c Mov
	TaskCall(2); // 0x1f4d TaskCall
	func_547(var_75_object, var_73_int, var_74_object); // 0x1f4e NEW_2
	TaskReturn(); // 0x1f4f TaskReturn
	return 0; // 0x1f51 Return
	
Label_8018:
	var_420_bool = 0; var_421_int = 0; // 0x1f52 PushV
	var_421_int = 2; // 0x1f53 MovI
	func_6910(var_420_bool, var_421_int); // 0x1f54 NEW_2
	if(var_420_bool == 0) goto Label_8030; // 0x1f56 JumpB
	var_422_int = 0; var_423_object = Obj(); // 0x1f57 PushV
	var_423_object = var_64_object; // 0x1f58 Mov
	TaskCall(4); // 0x1f59 TaskCall
	func_2558(var_424_object, var_422_int, var_423_object); // 0x1f5a NEW_2
	TaskReturn(); // 0x1f5b TaskReturn
	return 0; // 0x1f5d Return
	
Label_8030:
	var_521_bool = 0; var_522_int = 0; // 0x1f5e PushV
	var_522_int = 3; // 0x1f5f MovI
	func_6910(var_521_bool, var_522_int); // 0x1f60 NEW_2
	if(var_521_bool == 0) goto Label_8042; // 0x1f62 JumpB
	var_523_int = 0; var_524_object = Obj(); // 0x1f63 PushV
	var_524_object = var_64_object; // 0x1f64 Mov
	TaskCall(6); // 0x1f65 TaskCall
	func_3223(var_525_object, var_523_int, var_524_object); // 0x1f66 NEW_2
	TaskReturn(); // 0x1f67 TaskReturn
	return 0; // 0x1f69 Return
	
Label_8042:
	var_670_bool = 0; var_671_int = 0; // 0x1f6a PushV
	var_671_int = 5; // 0x1f6b MovI
	func_6910(var_670_bool, var_671_int); // 0x1f6c NEW_2
	if(var_670_bool == 0) goto Label_8054; // 0x1f6e JumpB
	var_672_int = 0; var_673_object = Obj(); // 0x1f6f PushV
	var_673_object = var_64_object; // 0x1f70 Mov
	TaskCall(8); // 0x1f71 TaskCall
	func_4268(var_674_object, var_672_int, var_673_object); // 0x1f72 NEW_2
	TaskReturn(); // 0x1f73 TaskReturn
	return 0; // 0x1f75 Return
	
Label_8054:
	var_750_bool = 0; var_751_int = 0; // 0x1f76 PushV
	var_751_int = 6; // 0x1f77 MovI
	func_6910(var_750_bool, var_751_int); // 0x1f78 NEW_2
	if(var_750_bool == 0) goto Label_8066; // 0x1f7a JumpB
	var_752_int = 0; var_753_object = Obj(); // 0x1f7b PushV
	var_753_object = var_64_object; // 0x1f7c Mov
	TaskCall(0); // 0x1f7d TaskCall
	func_0(var_754_object, var_752_int, var_753_object); // 0x1f7e NEW_2
	TaskReturn(); // 0x1f7f TaskReturn
	return 0; // 0x1f81 Return
	
Label_8066:
	var_863_bool = 0; var_864_int = 0; // 0x1f82 PushV
	var_864_int = 8; // 0x1f83 MovI
	func_6910(var_863_bool, var_864_int); // 0x1f84 NEW_2
	if(var_863_bool == 0) goto Label_8078; // 0x1f86 JumpB
	var_865_int = 0; var_866_object = Obj(); // 0x1f87 PushV
	var_866_object = var_64_object; // 0x1f88 Mov
	TaskCall(10); // 0x1f89 TaskCall
	func_4779(var_867_object, var_865_int, var_866_object); // 0x1f8a NEW_2
	TaskReturn(); // 0x1f8b TaskReturn
	return 0; // 0x1f8d Return
	
Label_8078:
	var_946_bool = 0; var_947_int = 0; // 0x1f8e PushV
	var_947_int = 10; // 0x1f8f MovI
	func_6910(var_946_bool, var_947_int); // 0x1f90 NEW_2
	if(var_946_bool == 0) goto Label_8090; // 0x1f92 JumpB
	var_948_int = 0; var_949_object = Obj(); // 0x1f93 PushV
	var_949_object = var_64_object; // 0x1f94 Mov
	TaskCall(12); // 0x1f95 TaskCall
	func_5278(var_950_object, var_948_int, var_949_object); // 0x1f96 NEW_2
	TaskReturn(); // 0x1f97 TaskReturn
	return 0; // 0x1f99 Return
	
Label_8090:
	var_1010_bool = 0; var_1011_int = 0; // 0x1f9a PushV
	var_1011_int = 12; // 0x1f9b MovI
	func_6910(var_1010_bool, var_1011_int); // 0x1f9c NEW_2
	if(var_1010_bool == 0) goto Label_8102; // 0x1f9e JumpB
	var_1012_int = 0; var_1013_object = Obj(); // 0x1f9f PushV
	var_1013_object = var_64_object; // 0x1fa0 Mov
	TaskCall(14); // 0x1fa1 TaskCall
	func_5719(var_1014_object, var_1012_int, var_1013_object); // 0x1fa2 NEW_2
	TaskReturn(); // 0x1fa3 TaskReturn
	return 0; // 0x1fa5 Return
	
Label_8102:
	var_1071_int = 0; var_1072_object = Obj(); // 0x1fa6 PushV
	var_1072_object = var_64_object; // 0x1fa7 Mov
	TaskCall(16); // 0x1fa8 TaskCall
	func_6042(var_1073_object, var_1071_int, var_1072_object); // 0x1fa9 NEW_2
	TaskReturn(); // 0x1faa TaskReturn
	return 0; // 0x1fac Return
}


func_7503(var_399_bool)
{
	var_401_int = 0; var_402_string = ""; // 0x1d50 PushV
	var_402_string = "d1q01"; // 0x1d51 MovS
	func_6837(var_401_int, var_402_string); // 0x1d52 NEW_2
	var_403_int = 1; // 0x1d54 PushI
	var_404_bool = var_401_int == var_403_int; // 0x1d55 Eq
	if(var_404_bool == 0) goto Label_7513; // 0x1d56 JumpB
	var_399_bool = 1; // 0x1d57 MovB
	return 0; // 0x1d58 Return
	
Label_7513:
	var_399_bool = 0; // 0x1d59 MovB
	return 0; // 0x1d5a Return
}


func_4431(var_2_object, var_703_string)
{
	var_704_bool = 0; // 0x1150 PushV
	func_6948(var_704_bool); // 0x1151 NEW_2
	var_705_bool = var_704_bool == 0; // 0x1153 Not
	if(var_705_bool == 0) goto Label_4438; // 0x1154 JumpB
	return 0; // 0x1155 Return
	
Label_4438:
	var_706_bool = var_703_string == var_2_object; // 0x1156 Eq
	if(var_706_bool == 0) goto Label_4441; // 0x1157 JumpB
	return 0; // 0x1158 Return
	
Label_4441:
	var_707_string = ""; var_708_bool = 0; // 0x1159 PushV
	var_707_string = var_703_string; // 0x115a Mov
	var_709_string = ""; // 0x115b PushS
	var_710_bool = var_703_string == var_709_string; // 0x115c Eq
	if(var_710_bool == 0) goto Label_4448; // 0x115d JumpB
	var_708_bool = 0; // 0x115e MovB
	goto Label_4449; // 0x115f Jump
	
Label_4449:
	func_6784(var_707_string, var_708_bool); // 0x1161 NEW_2
	var_2_object = var_703_string; // 0x1163 TMov
	return 0; // 0x1164 Return
	
Label_4448:
	var_708_bool = 1; // 0x1160 MovB
}


func_7515(var_242_bool)
{
	var_244_int = 0; var_245_string = ""; // 0x1d5c PushV
	var_245_string = "ood1Georg1"; // 0x1d5d MovS
	func_6837(var_244_int, var_245_string); // 0x1d5e NEW_2
	var_248_int = 0; // 0x1d60 PushI
	var_249_bool = var_244_int == var_248_int; // 0x1d61 Eq
	if(var_249_bool == 0) goto Label_7525; // 0x1d62 JumpB
	var_242_bool = 1; // 0x1d63 MovB
	return 0; // 0x1d64 Return
	
Label_7525:
	var_242_bool = 0; // 0x1d65 MovB
	return 0; // 0x1d66 Return
}


func_4957(var_2_object, var_913_string)
{
	var_914_bool = 0; // 0x135e PushV
	func_6948(var_914_bool); // 0x135f NEW_2
	var_915_bool = var_914_bool == 0; // 0x1361 Not
	if(var_915_bool == 0) goto Label_4964; // 0x1362 JumpB
	return 0; // 0x1363 Return
	
Label_4964:
	var_916_bool = var_913_string == var_2_object; // 0x1364 Eq
	if(var_916_bool == 0) goto Label_4967; // 0x1365 JumpB
	return 0; // 0x1366 Return
	
Label_4967:
	var_917_string = ""; var_918_bool = 0; // 0x1367 PushV
	var_917_string = var_913_string; // 0x1368 Mov
	var_919_string = ""; // 0x1369 PushS
	var_920_bool = var_913_string == var_919_string; // 0x136a Eq
	if(var_920_bool == 0) goto Label_4974; // 0x136b JumpB
	var_918_bool = 0; // 0x136c MovB
	goto Label_4975; // 0x136d Jump
	
Label_4975:
	func_6784(var_917_string, var_918_bool); // 0x136f NEW_2
	var_2_object = var_913_string; // 0x1371 TMov
	return 0; // 0x1372 Return
	
Label_4974:
	var_918_bool = 1; // 0x136e MovB
}


func_865(var_2_object, var_267_string)
{
	var_268_bool = 0; // 0x362 PushV
	func_6948(var_268_bool); // 0x363 NEW_2
	var_269_bool = var_268_bool == 0; // 0x365 Not
	if(var_269_bool == 0) goto Label_872; // 0x366 JumpB
	return 0; // 0x367 Return
	
Label_872:
	var_270_bool = var_267_string == var_2_object; // 0x368 Eq
	if(var_270_bool == 0) goto Label_875; // 0x369 JumpB
	return 0; // 0x36a Return
	
Label_875:
	var_271_string = ""; var_272_bool = 0; // 0x36b PushV
	var_271_string = var_267_string; // 0x36c Mov
	var_273_string = ""; // 0x36d PushS
	var_274_bool = var_267_string == var_273_string; // 0x36e Eq
	if(var_274_bool == 0) goto Label_882; // 0x36f JumpB
	var_272_bool = 0; // 0x370 MovB
	goto Label_883; // 0x371 Jump
	
Label_883:
	func_6784(var_271_string, var_272_bool); // 0x373 NEW_2
	var_2_object = var_267_string; // 0x375 TMov
	return 0; // 0x376 Return
	
Label_882:
	var_272_bool = 1; // 0x372 MovB
}


func_6497(var_85_bool)
{
	var_85_bool = 1; // 0x1961 MovB
	return 0; // 0x1962 Return
}


func_7011()
{
	func_7793(); // 0x1b65 NEW_2
	var_158_bool = 0; var_159_string = ""; var_160_string = ""; // 0x1b67 PushV
	var_159_string = "quest_d1_01"; // 0x1b68 MovS
	var_160_string = "completed"; // 0x1b69 MovS
	func_6884(var_158_bool, var_159_string, var_160_string); // 0x1b6a NEW_2
	return 0; // 0x1b6c Return
}


func_6499()
{
	StopAnimation(); // 0x1963 Func
	StopGroup0(); // 0x1965 Func
	return 0; // 0x1967 Return
}


func_7527(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x1d68 PushV
	var_342_string = "ood1Georg2"; // 0x1d69 MovS
	func_6837(var_341_int, var_342_string); // 0x1d6a NEW_2
	var_343_int = 0; // 0x1d6c PushI
	var_344_bool = var_341_int == var_343_int; // 0x1d6d Eq
	if(var_344_bool == 0) goto Label_7537; // 0x1d6e JumpB
	var_339_bool = 1; // 0x1d6f MovB
	return 0; // 0x1d70 Return
	
Label_7537:
	var_339_bool = 0; // 0x1d71 MovB
	return 0; // 0x1d72 Return
}


func_6504(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x1968 PushV
	GetPosition(var_66_cvector); // 0x1969 Func
	GetPosition(var_67_cvector); // 0x196b ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x196d Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x196e Or2
	return 6; // 0x196f Return
}


func_7021()
{
	var_172_string = "d1q01TeloNedostupno"; // 0x1b6e PushS
	var_173_int = 1; // 0x1b6f PushI
	SetVariable(var_172_string, var_173_int); // 0x1b70 Func
	return 0; // 0x1b72 Return
}


func_6512(var_125_string, var_126_int)
{
	var_127_int = 0; var_128_int = 0; // 0x1970 PushV
	GetProperty(var_125_string, var_128_int); // 0x1971 ObjFunc
	var_129_int = var_128_int + var_126_int; // 0x1973 Add
	SetProperty(var_125_string, var_129_int); // 0x1974 ObjFunc
	return 2; // 0x1976 Return
}


func_7027()
{
	var_256_string = "d1q01FirstGeorgVisit"; // 0x1b74 PushS
	var_257_int = 1; // 0x1b75 PushI
	SetVariable(var_256_string, var_257_int); // 0x1b76 Func
	var_258_bool = 0; var_259_string = ""; var_260_string = ""; // 0x1b78 PushV
	var_259_string = "quest_d1_01"; // 0x1b79 MovS
	var_260_string = "remove_cutscene"; // 0x1b7a MovS
	func_6884(var_258_bool, var_259_string, var_260_string); // 0x1b7b NEW_2
	var_264_bool = 0; var_265_string = ""; var_266_string = ""; // 0x1b7d PushV
	var_265_string = "quest_d1_01"; // 0x1b7e MovS
	var_266_string = "unlock_doors"; // 0x1b7f MovS
	func_6884(var_264_bool, var_265_string, var_266_string); // 0x1b80 NEW_2
	return 0; // 0x1b82 Return
}


func_7539(var_360_bool)
{
	var_362_int = 0; var_363_string = ""; // 0x1d74 PushV
	var_363_string = "ood1Georg3"; // 0x1d75 MovS
	func_6837(var_362_int, var_363_string); // 0x1d76 NEW_2
	var_364_int = 0; // 0x1d78 PushI
	var_365_bool = var_362_int == var_364_int; // 0x1d79 Eq
	if(var_365_bool == 0) goto Label_7549; // 0x1d7a JumpB
	var_360_bool = 1; // 0x1d7b MovB
	return 0; // 0x1d7c Return
	
Label_7549:
	var_360_bool = 0; // 0x1d7d MovB
	return 0; // 0x1d7e Return
}


func_6519(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x1977 PushV
	GetPosition(var_59_cvector); // 0x1978 Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x197a Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x197b PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x197c PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x197d Func
	var_54_bool = var_61_bool; // 0x197f Mov
	return 6; // 0x1980 Return
}


func_7551(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x1d80 PushV
	var_605_string = "ood3Georg1"; // 0x1d81 MovS
	func_6837(var_604_int, var_605_string); // 0x1d82 NEW_2
	var_606_int = 0; // 0x1d84 PushI
	var_607_bool = var_604_int == var_606_int; // 0x1d85 Eq
	if(var_607_bool == 0) goto Label_7561; // 0x1d86 JumpB
	var_602_bool = 1; // 0x1d87 MovB
	return 0; // 0x1d88 Return
	
Label_7561:
	var_602_bool = 0; // 0x1d89 MovB
	return 0; // 0x1d8a Return
}


func_6529(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1981 PushV
	GetPosition(var_53_cvector); // 0x1982 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x1984 PushV
	var_55_cvector = var_53_cvector; // 0x1985 Mov
	func_6519(var_54_bool, var_55_cvector); // 0x1986 NEW_2
	var_50_bool = var_54_bool; // 0x1987 Mov
	return 2; // 0x1989 Return
}


func_7043()
{
	var_85_bool = 0; // 0x1b84 PushV
	var_85_bool = 0; // 0x1b85 MovB
	var_86_int = 0; var_87_string = ""; // 0x1b86 PushV
	var_87_string = "d2q01BigVladVisit"; // 0x1b87 MovS
	func_6837(var_86_int, var_87_string); // 0x1b88 NEW_2
	var_90_int = 0; // 0x1b8a PushI
	var_91_bool = var_86_int != var_90_int; // 0x1b8b Neq
	if(var_91_bool == 0) goto Label_7061; // 0x1b8c JumpB
	var_92_int = 0; var_93_string = ""; // 0x1b8d PushV
	var_93_string = "d2q01GeorgVisit"; // 0x1b8e MovS
	func_6837(var_92_int, var_93_string); // 0x1b8f NEW_2
	var_94_int = 0; // 0x1b91 PushI
	var_95_bool = var_92_int != var_94_int; // 0x1b92 Neq
	if(var_95_bool == 0) goto Label_7061; // 0x1b93 JumpB
	var_85_bool = 1; // 0x1b94 MovB
	
Label_7061:
	if(var_85_bool == 0) goto Label_7065; // 0x1b95 JumpB
	func_7819(); // 0x1b97 NEW_2
	
Label_7065:
	return 0; // 0x1b99 Return
}


func_6538(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x198a PushV
	IsLoaded(var_49_bool); // 0x198b Func
	var_47_bool = var_49_bool; // 0x198d Mov
	return 2; // 0x198e Return
}


func_7563(var_554_bool)
{
	var_556_int = 0; var_557_string = ""; // 0x1d8c PushV
	var_557_string = "ood3Georg2"; // 0x1d8d MovS
	func_6837(var_556_int, var_557_string); // 0x1d8e NEW_2
	var_558_int = 0; // 0x1d90 PushI
	var_559_bool = var_556_int == var_558_int; // 0x1d91 Eq
	if(var_559_bool == 0) goto Label_7573; // 0x1d92 JumpB
	var_554_bool = 1; // 0x1d93 MovB
	return 0; // 0x1d94 Return
	
Label_7573:
	var_554_bool = 0; // 0x1d95 MovB
	return 0; // 0x1d96 Return
}


func_3468(var_2_object, var_568_string)
{
	var_569_bool = 0; // 0xd8d PushV
	func_6948(var_569_bool); // 0xd8e NEW_2
	var_570_bool = var_569_bool == 0; // 0xd90 Not
	if(var_570_bool == 0) goto Label_3475; // 0xd91 JumpB
	return 0; // 0xd92 Return
	
Label_3475:
	var_571_bool = var_568_string == var_2_object; // 0xd93 Eq
	if(var_571_bool == 0) goto Label_3478; // 0xd94 JumpB
	return 0; // 0xd95 Return
	
Label_3478:
	var_572_string = ""; var_573_bool = 0; // 0xd96 PushV
	var_572_string = var_568_string; // 0xd97 Mov
	var_574_string = ""; // 0xd98 PushS
	var_575_bool = var_568_string == var_574_string; // 0xd99 Eq
	if(var_575_bool == 0) goto Label_3485; // 0xd9a JumpB
	var_573_bool = 0; // 0xd9b MovB
	goto Label_3486; // 0xd9c Jump
	
Label_3486:
	func_6784(var_572_string, var_573_bool); // 0xd9e NEW_2
	var_2_object = var_568_string; // 0xda0 TMov
	return 0; // 0xda1 Return
	
Label_3485:
	var_573_bool = 1; // 0xd9d MovB
}


func_6543(var_84_bool, var_86_float)
{
	var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_bool = 0; // 0x198f PushV
	GetPosition(var_97_cvector); // 0x1990 ObjFunc
	GetEyesHeight(var_96_float); // 0x1992 ObjFunc
	var_105_float = GetByIndex(var_97_cvector, 1); // 0x1994 PushE
	var_105_float = var_105_float + var_96_float; // 0x1995 Add2
	SetByIndex(var_97_cvector, 1) = var_105_float; // 0x1996 PopE
	GetPosition(var_98_cvector); // 0x1997 Func
	GetEyesHeight(var_96_float); // 0x1999 Func
	var_106_float = GetByIndex(var_98_cvector, 1); // 0x199b PushE
	var_106_float = var_106_float + var_96_float; // 0x199c Add2
	SetByIndex(var_98_cvector, 1) = var_106_float; // 0x199d PopE
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x199e Sub2
	var_107_float = GetByIndex(var_99_cvector, 1); // 0x199f PushE
	var_107_float = 0; // 0x19a0 MovI
	SetByIndex(var_99_cvector, 1) = var_107_float; // 0x19a1 PopE
	var_108_int = var_99_cvector | var_99_cvector; // 0x19a2 Or
	var_109_float = sqrt(var_108_int); // 0x19a3 Sqrt
	var_99_cvector = var_99_cvector / var_99_cvector; // 0x19a4 Div2
	var_100_cvector = -var_99_cvector; // 0x19a5 Neg2
	var_110_float = var_99_cvector * var_86_float; // 0x19a6 Mult
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); // 0x19a7 PushV
	var_113_cvector = CVector(0.0, 1.0, 0.0); // 0x19a8 PushVec
	var_112_cvector = var_100_cvector ^ var_113_cvector; // 0x19a9 Xor2
	func_6827(var_111_cvector, var_112_cvector); // 0x19aa NEW_2
	var_119_int = 25; // 0x19ac PushI
	var_120_float = var_111_cvector * var_119_int; // 0x19ad Mult
	var_121_int = var_110_float + var_120_float; // 0x19ae Add
	var_122_cvector = CVector(0.0, 10.0, 0.0); // 0x19af PushVec
	var_101_cvector = var_121_int - var_122_cvector; // 0x19b0 Sub2
	var_102_cvector = var_98_cvector + var_101_cvector; // 0x19b1 Add2
	IsOverrideActive(var_103_bool); // 0x19b2 Func
	var_123_bool = var_103_bool; // 0x19b4 Push
	if(var_123_bool == 0) goto Label_6584; // 0x19b5 JumpB
	var_84_bool = 0; // 0x19b6 MovB
	return 18; // 0x19b7 Return
	
Label_6584:
	StopWorld(); // 0x19b8 Func
	var_124_bool = 1; // 0x19ba PushB
	CameraTransit(var_102_cvector, var_100_cvector, var_124_bool); // 0x19bb Func
	var_125_float = GetByIndex(var_101_cvector, 0); // 0x19bd PushE
	var_126_float = GetByIndex(var_101_cvector, 2); // 0x19be PushE
	Rotate(var_125_float, var_126_float); // 0x19bf Func
	var_127_bool = 0; // 0x19c1 PushV
	func_6948(var_127_bool); // 0x19c2 NEW_2
	if(var_127_bool == 0) goto Label_6598; // 0x19c4 JumpB
	goto Label_6606; // 0x19c5 Jump
	
Label_6606:
	CameraWaitForPlayFinish(); // 0x19ce Func
	ResumeWorld(); // 0x19d0 Func
	var_84_bool = 1; // 0x19d2 MovB
	return 18; // 0x19d3 Return
	
Label_6598:
	var_128_string = "head"; // 0x19c6 PushS
	HasAnimationTrack(var_104_bool, var_128_string); // 0x19c7 Func
	var_129_bool = var_104_bool; // 0x19c9 Push
	if(var_129_bool == 0) goto Label_6606; // 0x19ca JumpB
	var_130_string = "head"; // 0x19cb PushS
	LookAsyncCamera(var_130_string); // 0x19cc Func
}


func_7575(var_654_bool)
{
	var_656_int = 0; var_657_string = ""; // 0x1d98 PushV
	var_657_string = "d3RubinToldWhereIsSimon"; // 0x1d99 MovS
	func_6837(var_656_int, var_657_string); // 0x1d9a NEW_2
	var_658_int = 1; // 0x1d9c PushI
	var_659_bool = var_656_int == var_658_int; // 0x1d9d Eq
	if(var_659_bool == 0) goto Label_7585; // 0x1d9e JumpB
	var_654_bool = 1; // 0x1d9f MovB
	return 0; // 0x1da0 Return
	
Label_7585:
	var_654_bool = 0; // 0x1da1 MovB
	return 0; // 0x1da2 Return
}


func_7066()
{
	var_140_string = "playsound"; // 0x1b9b PushS
	var_141_string = "givemoney"; // 0x1b9c PushS
	TriggerWorld(var_140_string, var_141_string); // 0x1b9d Func
	return 0; // 0x1b9f Return
}


func_6042(var_0_object, var_1071_int, var_1072_object)
{
	var_1074_object = Obj(); var_1075_bool = 0; var_1076_int = 0; var_1077_bool = 0; var_1078_object = Obj(); var_1079_bool = 0; var_1080_int = 0; var_1081_bool = 0; // 0x179a PushV
	var_0_object = var_1072_object; // 0x179b TMov
	var_1082_bool = 0; var_1083_object = Obj(); var_1084_float = 0; // 0x179c PushV
	var_1083_object = var_1072_object; // 0x179d Mov
	var_1084_float = 70.0; // 0x179e MovF
	func_6543(var_1083_object, var_1084_float); // 0x179f NEW_2
	var_1085_bool = var_1082_bool == 0; // 0x17a1 Not
	if(var_1085_bool == 0) goto Label_6053; // 0x17a2 JumpB
	var_1071_int = -2; // 0x17a3 MovI
	return 8; // 0x17a4 Return
	
Label_6053:
	CreateDialog(var_1078_object); // 0x17a5 Func
	var_1086_int = 0; // 0x17a7 PushV
	func_6942(var_1086_int); // 0x17a8 NEW_2
	SetNPCName(var_1086_int); // 0x17aa ObjFunc
	var_1087_int = 0; // 0x17ac PushV
	func_6940(var_1087_int); // 0x17ad NEW_2
	SetNPCDescription(var_1087_int); // 0x17af ObjFunc
	var_1088_string = ""; // 0x17b1 PushV
	func_6944(var_1088_string); // 0x17b2 NEW_2
	SetPhoto(var_1088_string); // 0x17b4 ObjFunc
	var_1089_string = ""; // 0x17b6 PushV
	func_6946(var_1089_string); // 0x17b7 NEW_2
	SetPhoto2(var_1089_string); // 0x17b9 ObjFunc
	var_1090_int = 0; // 0x17bb PushV
	func_7988(var_1090_int); // 0x17bc NEW_2
	SetPlayerName(var_1090_int); // 0x17be ObjFunc
	var_1080_int = -1; // 0x17c0 MovI
	IsOverrideActive(var_1079_bool); // 0x17c1 Func
	var_1091_bool = var_1079_bool; // 0x17c3 Push
	if(var_1091_bool == 0) goto Label_6087; // 0x17c4 JumpB
	var_1071_int = -2; // 0x17c5 MovI
	return 8; // 0x17c6 Return
	
Label_6087:
	DoDialog(var_1078_object); // 0x17c7 Func
	var_1092_bool = 0; var_1093_object = Obj(); // 0x17c9 PushV
	var_1094_object = Obj(); // 0x17ca PushV
	func_6821(var_1094_object); // 0x17cb NEW_2
	var_1093_object = var_1094_object; // 0x17cc Mov
	func_6630(var_1092_bool, var_1093_object); // 0x17ce NEW_2
	var_1095_object = Obj(); var_1096_object = Obj(); // 0x17d0 PushV
	var_1095_object = var_1072_object; // 0x17d1 Mov
	var_1096_object = var_1078_object; // 0x17d2 Mov
	TaskCall(17); // 0x17d3 TaskCall
	func_6123(var_1097_object, var_1098_object, var_1099_string, var_1100_bool, var_1095_object, var_1096_object); // 0x17d4 NEW_2
	TaskReturn(); // 0x17d5 TaskReturn
	IsDialogEnd(var_1081_bool); // 0x17d7 ObjFunc
	
Label_6105:
	var_1125_bool = var_1081_bool == 0; // 0x17d9 Not
	if(var_1125_bool == 0) goto Label_6112; // 0x17da JumpB
	sync(); // 0x17db Func
	IsDialogEnd(var_1081_bool); // 0x17dd ObjFunc
	goto Label_6105; // 0x17df Jump
	
Label_6112:
	var_1126_object = Obj(); // 0x17e0 PushV
	var_1126_object = var_1072_object; // 0x17e1 Mov
	func_6612(); // 0x17e2 NEW_2
	StopDialog(var_1078_object); // 0x17e4 Func
	GetReturnValue(var_1080_int); // 0x17e6 ObjFunc
	var_1071_int = var_1080_int; // 0x17e8 Mov
	return 8; // 0x17e9 Return
}


func_7072()
{
	var_222_string = "ood1Georg5"; // 0x1ba1 PushS
	var_223_int = 1; // 0x1ba2 PushI
	SetVariable(var_222_string, var_223_int); // 0x1ba3 Func
	return 0; // 0x1ba5 Return
}


func_7587(var_592_bool)
{
	var_594_int = 0; var_595_string = ""; // 0x1da4 PushV
	var_595_string = "d3q02"; // 0x1da5 MovS
	func_6837(var_594_int, var_595_string); // 0x1da6 NEW_2
	var_596_int = 0; // 0x1da8 PushI
	var_597_bool = var_594_int == var_596_int; // 0x1da9 Eq
	if(var_597_bool == 0) goto Label_7597; // 0x1daa JumpB
	var_592_bool = 1; // 0x1dab MovB
	return 0; // 0x1dac Return
	
Label_7597:
	var_592_bool = 0; // 0x1dad MovB
	return 0; // 0x1dae Return
}


func_7078()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1ba6 PushV
	var_56_string = "d10q02"; // 0x1ba7 PushS
	var_57_int = 4; // 0x1ba8 PushI
	SetVariable(var_56_string, var_57_int); // 0x1ba9 Func
	var_58_object = Obj(); // 0x1bab PushV
	func_7938(var_58_object); // 0x1bac NEW_2
	var_55_object = var_58_object; // 0x1bad Mov
	var_65_string = "d10q02GeorgGotoAglaja"; // 0x1baf PushS
	var_66_string = "pt_map_aglaja"; // 0x1bb0 PushS
	var_67_int = 0; // 0x1bb1 PushI
	var_68_int = 515299; // 0x1bb2 PushI
	var_69_float = 0; // 0x1bb3 PushV
	func_6896(var_69_float); // 0x1bb4 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1bb6 ObjFunc
	func_7767(); // 0x1bb9 NEW_2
	return 2; // 0x1bbb Return
}


func_7599(var_619_bool)
{
	var_621_int = 0; var_622_string = ""; // 0x1db0 PushV
	var_622_string = "ood3Georg3"; // 0x1db1 MovS
	func_6837(var_621_int, var_622_string); // 0x1db2 NEW_2
	var_623_int = 0; // 0x1db4 PushI
	var_624_bool = var_621_int == var_623_int; // 0x1db5 Eq
	if(var_624_bool == 0) goto Label_7609; // 0x1db6 JumpB
	var_619_bool = 1; // 0x1db7 MovB
	return 0; // 0x1db8 Return
	
Label_7609:
	var_619_bool = 0; // 0x1db9 MovB
	return 0; // 0x1dba Return
}


func_7611(var_625_bool)
{
	var_627_int = 0; var_628_string = ""; // 0x1dbc PushV
	var_628_string = "d3q02SeeCorpse"; // 0x1dbd MovS
	func_6837(var_627_int, var_628_string); // 0x1dbe NEW_2
	var_629_int = 1; // 0x1dc0 PushI
	var_630_bool = var_627_int == var_629_int; // 0x1dc1 Eq
	if(var_630_bool == 0) goto Label_7621; // 0x1dc2 JumpB
	var_625_bool = 1; // 0x1dc3 MovB
	return 0; // 0x1dc4 Return
	
Label_7621:
	var_625_bool = 0; // 0x1dc5 MovB
	return 0; // 0x1dc6 Return
}


func_7101()
{
	var_54_string = "ood2Georg1"; // 0x1bbe PushS
	var_55_int = 1; // 0x1bbf PushI
	SetVariable(var_54_string, var_55_int); // 0x1bc0 Func
	return 0; // 0x1bc2 Return
}


func_7107()
{
	var_132_string = "ood2Georg2"; // 0x1bc4 PushS
	var_133_int = 1; // 0x1bc5 PushI
	SetVariable(var_132_string, var_133_int); // 0x1bc6 Func
	return 0; // 0x1bc8 Return
}


func_7623(var_719_bool)
{
	var_721_int = 0; var_722_string = ""; // 0x1dc8 PushV
	var_722_string = "d5q03"; // 0x1dc9 MovS
	func_6837(var_721_int, var_722_string); // 0x1dca NEW_2
	var_723_int = 1000; // 0x1dcc PushI
	var_724_bool = var_721_int == var_723_int; // 0x1dcd Eq
	if(var_724_bool == 0) goto Label_7633; // 0x1dce JumpB
	var_719_bool = 1; // 0x1dcf MovB
	return 0; // 0x1dd0 Return
	
Label_7633:
	var_719_bool = 0; // 0x1dd1 MovB
	return 0; // 0x1dd2 Return
}


func_7113()
{
	var_58_string = "d2q01GeorgVisit"; // 0x1bca PushS
	var_59_int = 1; // 0x1bcb PushI
	SetVariable(var_58_string, var_59_int); // 0x1bcc Func
	func_7832(); // 0x1bcf NEW_2
	return 0; // 0x1bd1 Return
}


func_7122()
{
	var_216_string = "ood1Georg4"; // 0x1bd3 PushS
	var_217_int = 1; // 0x1bd4 PushI
	SetVariable(var_216_string, var_217_int); // 0x1bd5 Func
	return 0; // 0x1bd7 Return
}


func_7635(var_713_bool)
{
	var_715_int = 0; var_716_string = ""; // 0x1dd4 PushV
	var_716_string = "ood5Georg1"; // 0x1dd5 MovS
	func_6837(var_715_int, var_716_string); // 0x1dd6 NEW_2
	var_717_int = 0; // 0x1dd8 PushI
	var_718_bool = var_715_int == var_717_int; // 0x1dd9 Eq
	if(var_718_bool == 0) goto Label_7645; // 0x1dda JumpB
	var_713_bool = 1; // 0x1ddb MovB
	return 0; // 0x1ddc Return
	
Label_7645:
	var_713_bool = 0; // 0x1ddd MovB
	return 0; // 0x1dde Return
}


func_6612()
{
	var_413_bool = 0; var_414_bool = 0; // 0x19d4 PushV
	var_415_bool = 1; // 0x19d5 PushB
	CameraSwitchToNormal(var_415_bool); // 0x19d6 Func
	var_416_bool = 0; // 0x19d8 PushV
	func_6948(var_416_bool); // 0x19d9 NEW_2
	if(var_416_bool == 0) goto Label_6621; // 0x19db JumpB
	goto Label_6629; // 0x19dc Jump
	
Label_6629:
	return 2; // 0x19e5 Return
	
Label_6621:
	var_417_string = "head"; // 0x19dd PushS
	HasAnimationTrack(var_414_bool, var_417_string); // 0x19de Func
	var_418_bool = var_414_bool; // 0x19e0 Push
	if(var_418_bool == 0) goto Label_6629; // 0x19e1 JumpB
	var_419_string = "head"; // 0x19e2 PushS
	UnlookAsync(var_419_string); // 0x19e3 Func
}


func_7128(var_117_object)
{
	var_119_string = "money 5000 is given"; // 0x1bd9 PushS
	Trace(var_119_string); // 0x1bda Func
	var_120_object = Obj(); var_121_int = 0; // 0x1bdc PushV
	var_120_object = var_117_object; // 0x1bdd Mov
	var_121_int = 5000; // 0x1bde MovI
	func_6865(var_120_object, var_121_int); // 0x1bdf NEW_2
	return 0; // 0x1be1 Return
}


func_7647(var_811_bool)
{
	var_813_int = 0; var_814_string = ""; // 0x1de0 PushV
	var_814_string = "d6q01"; // 0x1de1 MovS
	func_6837(var_813_int, var_814_string); // 0x1de2 NEW_2
	var_815_int = 0; // 0x1de4 PushI
	var_816_bool = var_813_int == var_815_int; // 0x1de5 Eq
	if(var_816_bool == 0) goto Label_7657; // 0x1de6 JumpB
	var_811_bool = 1; // 0x1de7 MovB
	return 0; // 0x1de8 Return
	
Label_7657:
	var_811_bool = 0; // 0x1de9 MovB
	return 0; // 0x1dea Return
}


func_7138()
{
	var_144_int = 0; var_145_int = 0; // 0x1be2 PushV
	func_7858(); // 0x1be4 NEW_2
	var_154_string = "d3q02"; // 0x1be6 PushS
	GetVariable(var_154_string, var_145_int); // 0x1be7 Func
	var_155_int = var_145_int; // 0x1be9 Push
	if(var_155_int == 0) goto Label_7153; // 0x1bea JumpB
	var_156_bool = 0; var_157_string = ""; var_158_string = ""; // 0x1beb PushV
	var_157_string = "quest_d3_02"; // 0x1bec MovS
	var_158_string = "completed"; // 0x1bed MovS
	func_6884(var_156_bool, var_157_string, var_158_string); // 0x1bee NEW_2
	goto Label_7157; // 0x1bf0 Jump
	
Label_7157:
	return 2; // 0x1bf5 Return
	
Label_7153:
	var_162_string = "d3q02"; // 0x1bf1 PushS
	var_163_int = 1000; // 0x1bf2 PushI
	SetVariable(var_162_string, var_163_int); // 0x1bf3 Func
}


func_6630(var_145_bool, var_146_object)
{
	var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_int = 0; // 0x19e6 PushV
	var_154_string = "voice_common"; // 0x19e7 PushS
	GetVariable(var_154_string, var_152_int); // 0x19e8 Func
	var_155_int = var_152_int; // 0x19ea Push
	if(var_155_int == 0) goto Label_6668; // 0x19eb JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x19ec PushV
	var_157_object = var_146_object; // 0x19ed Mov
	func_6688(var_157_object); // 0x19ee NEW_2
	var_186_bool = var_156_bool == 0; // 0x19f0 Not
	if(var_186_bool == 0) goto Label_6650; // 0x19f1 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x19f2 PushV
	var_188_object = var_146_object; // 0x19f3 Mov
	func_6725(var_188_object); // 0x19f4 NEW_2
	var_217_bool = var_187_bool == 0; // 0x19f6 Not
	if(var_217_bool == 0) goto Label_6650; // 0x19f7 JumpB
	var_145_bool = 0; // 0x19f8 MovB
	return 4; // 0x19f9 Return
	
Label_6650:
	var_218_int = 2; // 0x19fa PushI
	irand(var_153_int, var_218_int); // 0x19fb Func
	var_219_int = var_153_int; // 0x19fd Push
	if(var_219_int == 0) goto Label_6663; // 0x19fe JumpB
	var_220_string = "voice_common"; // 0x19ff PushS
	var_221_int = 1; // 0x1a00 PushI
	var_222_int = var_152_int + var_221_int; // 0x1a01 Add
	var_223_int = 3; // 0x1a02 PushI
	var_224_int = var_222_int / var_223_int; // 0x1a03 Mod
	SetVariable(var_220_string, var_224_int); // 0x1a04 Func
	goto Label_6667; // 0x1a06 Jump
	
Label_6667:
	goto Label_6686; // 0x1a0b Jump
	
Label_6686:
	var_145_bool = 1; // 0x1a1e MovB
	return 4; // 0x1a1f Return
	
Label_6663:
	var_225_string = "voice_common"; // 0x1a07 PushS
	var_226_int = 0; // 0x1a08 PushI
	SetVariable(var_225_string, var_226_int); // 0x1a09 Func
	
Label_6668:
	var_227_bool = 0; var_228_object = Obj(); // 0x1a0c PushV
	var_228_object = var_146_object; // 0x1a0d Mov
	func_6725(var_228_object); // 0x1a0e NEW_2
	var_229_bool = var_227_bool == 0; // 0x1a10 Not
	if(var_229_bool == 0) goto Label_6682; // 0x1a11 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x1a12 PushV
	var_231_object = var_146_object; // 0x1a13 Mov
	func_6688(var_231_object); // 0x1a14 NEW_2
	var_232_bool = var_230_bool == 0; // 0x1a16 Not
	if(var_232_bool == 0) goto Label_6682; // 0x1a17 JumpB
	var_145_bool = 0; // 0x1a18 MovB
	return 4; // 0x1a19 Return
	
Label_6682:
	var_233_string = "voice_common"; // 0x1a1a PushS
	var_234_int = 1; // 0x1a1b PushI
	SetVariable(var_233_string, var_234_int); // 0x1a1c Func
}


func_7659(var_818_bool)
{
	var_820_int = 0; var_821_string = ""; // 0x1dec PushV
	var_821_string = "d6q01"; // 0x1ded MovS
	func_6837(var_820_int, var_821_string); // 0x1dee NEW_2
	var_822_int = 1000; // 0x1df0 PushI
	var_823_bool = var_820_int == var_822_int; // 0x1df1 Eq
	if(var_823_bool == 0) goto Label_7669; // 0x1df2 JumpB
	var_818_bool = 1; // 0x1df3 MovB
	return 0; // 0x1df4 Return
	
Label_7669:
	var_818_bool = 0; // 0x1df5 MovB
	return 0; // 0x1df6 Return
}


func_6123(var_0_object, var_1_object, var_2_object, var_3_string, var_1095_object, var_1096_object)
{
	var_0_object = var_1096_object; // 0x17ec TMov
	var_1_object = var_1095_object; // 0x17ed TMov
	var_3_string = 0; // 0x17ee TMovB
	var_1101_int = 1; // 0x17ef PushI
	if(var_1101_int == 0) goto Label_6151; // 0x17f0 JumpB
	var_1102_string = ""; // 0x17f1 PushV
	var_1102_string = "Neutral"; // 0x17f2 MovS
	func_6181(var_1096_object, var_1102_string); // 0x17f3 NEW_2
	var_1110_int = 540542; // 0x17f5 PushI
	SetMessage(var_1110_int); // 0x17f6 TObjFunc
	ClearReplies(); // 0x17f8 TObjFunc
	var_1111_int = 540543; // 0x17fa PushI
	var_1112_int = -1; // 0x17fb PushI
	var_1113_int = 42552; // 0x17fc PushI
	AddReply(var_1111_int, var_1112_int, var_1113_int); // 0x17fd TObjFunc
	var_1114_int = 540796; // 0x17ff PushI
	var_1115_int = -1; // 0x1800 PushI
	var_1116_int = 42845; // 0x1801 PushI
	AddReply(var_1114_int, var_1115_int, var_1116_int); // 0x1802 TObjFunc
	goto Label_6151; // 0x1804 Jump
	
Label_6151:
	var_1117_bool = 0; // 0x1807 PushV
	func_6948(var_1117_bool); // 0x1808 NEW_2
	if(var_1117_bool == 0) goto Label_6166; // 0x180a JumpB
	
Label_6155:
	lshWaitForAnimEnd(); // 0x180b Func
	var_1118_string = var_3_string; // 0x180d PushT
	if(var_1118_string == 0) goto Label_6160; // 0x180e JumpB
	goto Label_6165; // 0x180f Jump
	
Label_6165:
	goto Label_6180; // 0x1815 Jump
	
Label_6180:
	return 0; // 0x1824 Return
	
Label_6160:
	var_1119_string = ""; // 0x1810 PushV
	var_1119_string = var_2_object; // 0x1811 MovT
	func_6768(var_1119_string); // 0x1812 NEW_2
	goto Label_6155; // 0x1814 Jump
	
Label_6166:
	var_1120_string = "all"; // 0x1816 PushS
	var_1121_string = "idle"; // 0x1817 PushS
	PlayAnimation(var_1120_string, var_1121_string); // 0x1818 Func
	
Label_6170:
	WaitForAnimEnd(); // 0x181a Func
	var_1122_string = var_3_string; // 0x181c PushT
	if(var_1122_string == 0) goto Label_6175; // 0x181d JumpB
	goto Label_6180; // 0x181e Jump
	
Label_6175:
	var_1123_string = "all"; // 0x181f PushS
	var_1124_string = "idle"; // 0x1820 PushS
	PlayAnimation(var_1123_string, var_1124_string); // 0x1821 Func
	goto Label_6170; // 0x1823 Jump
}


func_7158()
{
	var_184_string = "ood3Georg1"; // 0x1bf7 PushS
	var_185_int = 1; // 0x1bf8 PushI
	SetVariable(var_184_string, var_185_int); // 0x1bf9 Func
	return 0; // 0x1bfb Return
}


func_7671(var_825_bool)
{
	var_827_int = 0; var_828_string = ""; // 0x1df8 PushV
	var_828_string = "d6q01"; // 0x1df9 MovS
	func_6837(var_827_int, var_828_string); // 0x1dfa NEW_2
	var_829_int = -1; // 0x1dfc PushI
	var_830_bool = var_827_int == var_829_int; // 0x1dfd Eq
	if(var_830_bool == 0) goto Label_7681; // 0x1dfe JumpB
	var_825_bool = 1; // 0x1dff MovB
	return 0; // 0x1e00 Return
	
Label_7681:
	var_825_bool = 0; // 0x1e01 MovB
	return 0; // 0x1e02 Return
}


func_7164()
{
	var_566_string = "ood3Georg2"; // 0x1bfd PushS
	var_567_int = 1; // 0x1bfe PushI
	SetVariable(var_566_string, var_567_int); // 0x1bff Func
	return 0; // 0x1c01 Return
}


func_2558(var_0_object, var_422_int, var_423_object)
{
	var_425_object = Obj(); var_426_bool = 0; var_427_int = 0; var_428_bool = 0; var_429_object = Obj(); var_430_bool = 0; var_431_int = 0; var_432_bool = 0; // 0x9fe PushV
	var_0_object = var_423_object; // 0x9ff TMov
	var_433_bool = 0; var_434_object = Obj(); var_435_float = 0; // 0xa00 PushV
	var_434_object = var_423_object; // 0xa01 Mov
	var_435_float = 70.0; // 0xa02 MovF
	func_6543(var_434_object, var_435_float); // 0xa03 NEW_2
	var_436_bool = var_433_bool == 0; // 0xa05 Not
	if(var_436_bool == 0) goto Label_2569; // 0xa06 JumpB
	var_422_int = -2; // 0xa07 MovI
	return 8; // 0xa08 Return
	
Label_2569:
	CreateDialog(var_429_object); // 0xa09 Func
	var_437_int = 0; // 0xa0b PushV
	func_6942(var_437_int); // 0xa0c NEW_2
	SetNPCName(var_437_int); // 0xa0e ObjFunc
	var_438_int = 0; // 0xa10 PushV
	func_6940(var_438_int); // 0xa11 NEW_2
	SetNPCDescription(var_438_int); // 0xa13 ObjFunc
	var_439_string = ""; // 0xa15 PushV
	func_6944(var_439_string); // 0xa16 NEW_2
	SetPhoto(var_439_string); // 0xa18 ObjFunc
	var_440_string = ""; // 0xa1a PushV
	func_6946(var_440_string); // 0xa1b NEW_2
	SetPhoto2(var_440_string); // 0xa1d ObjFunc
	var_441_int = 0; // 0xa1f PushV
	func_7988(var_441_int); // 0xa20 NEW_2
	SetPlayerName(var_441_int); // 0xa22 ObjFunc
	var_431_int = -1; // 0xa24 MovI
	IsOverrideActive(var_430_bool); // 0xa25 Func
	var_442_bool = var_430_bool; // 0xa27 Push
	if(var_442_bool == 0) goto Label_2603; // 0xa28 JumpB
	var_422_int = -2; // 0xa29 MovI
	return 8; // 0xa2a Return
	
Label_2603:
	DoDialog(var_429_object); // 0xa2b Func
	var_443_bool = 0; var_444_object = Obj(); // 0xa2d PushV
	var_445_object = Obj(); // 0xa2e PushV
	func_6821(var_445_object); // 0xa2f NEW_2
	var_444_object = var_445_object; // 0xa30 Mov
	func_6630(var_443_bool, var_444_object); // 0xa32 NEW_2
	var_446_object = Obj(); var_447_object = Obj(); // 0xa34 PushV
	var_446_object = var_423_object; // 0xa35 Mov
	var_447_object = var_429_object; // 0xa36 Mov
	TaskCall(5); // 0xa37 TaskCall
	func_2639(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object); // 0xa38 NEW_2
	TaskReturn(); // 0xa39 TaskReturn
	IsDialogEnd(var_432_bool); // 0xa3b ObjFunc
	
Label_2621:
	var_519_bool = var_432_bool == 0; // 0xa3d Not
	if(var_519_bool == 0) goto Label_2628; // 0xa3e JumpB
	sync(); // 0xa3f Func
	IsDialogEnd(var_432_bool); // 0xa41 ObjFunc
	goto Label_2621; // 0xa43 Jump
	
Label_2628:
	var_520_object = Obj(); // 0xa44 PushV
	var_520_object = var_423_object; // 0xa45 Mov
	func_6612(); // 0xa46 NEW_2
	StopDialog(var_429_object); // 0xa48 Func
	GetReturnValue(var_431_int); // 0xa4a ObjFunc
	var_422_int = var_431_int; // 0xa4c Mov
	return 8; // 0xa4d Return
}


