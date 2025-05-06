task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xfb PushI
	if(var_53_int == 0) goto Label_631; // 0xfc JumpB
	func_5078(); // 0xfe NEW_2
	var_55_int = 33614; // 0x100 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x101 Eq
	if(var_56_bool == 0) goto Label_264; // 0x102 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x103 PushV
	var_57_object = var_1_object; // 0x104 MovT
	var_58_object = var_0_object; // 0x105 MovT
	func_5239(); // 0x106 NEW_2
	
Label_264:
	var_61_int = 34517; // 0x108 PushI
	var_62_bool = var_52_cvector == var_61_int; // 0x109 Eq
	if(var_62_bool == 0) goto Label_272; // 0x10a JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x10b PushV
	var_63_object = var_1_object; // 0x10c MovT
	var_64_object = var_0_object; // 0x10d MovT
	func_5305(); // 0x10e NEW_2
	
Label_272:
	var_67_int = 33613; // 0x110 PushI
	var_68_bool = var_51_bool == var_67_int; // 0x111 Eq
	if(var_68_bool == 0) goto Label_384; // 0x112 JumpB
	var_69_bool = 0; var_70_object = Obj(); // 0x113 PushV
	var_70_object = var_1_object; // 0x114 MovT
	func_5442(var_70_object); // 0x115 NEW_2
	var_77_bool = var_69_bool == 0; // 0x117 Not
	if(var_77_bool == 0) goto Label_306; // 0x118 JumpB
	var_78_string = ""; // 0x119 PushV
	var_78_string = "Neutral"; // 0x11a MovS
	func_228(var_52_cvector, var_78_string); // 0x11b NEW_2
	var_95_int = 532198; // 0x11d PushI
	SetMessage(var_95_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_96_bool = 0; var_97_object = Obj(); // 0x122 PushV
	var_97_object = var_1_object; // 0x123 MovT
	func_5454(var_97_object); // 0x124 NEW_2
	if(var_96_bool == 0) goto Label_300; // 0x126 JumpB
	var_102_int = 532199; // 0x127 PushI
	var_103_int = 33615; // 0x128 PushI
	var_104_int = 33614; // 0x129 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x12a TObjFunc
	
Label_300:
	var_105_int = 532203; // 0x12c PushI
	var_106_int = -1; // 0x12d PushI
	var_107_int = 33618; // 0x12e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x12f TObjFunc
	return 0; // 0x131 Return
	
Label_306:
	var_108_bool = 0; // 0x132 PushV
	var_108_bool = 0; // 0x133 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x134 PushV
	var_110_object = var_1_object; // 0x135 MovT
	func_5466(var_110_object); // 0x136 NEW_2
	if(var_109_bool == 0) goto Label_319; // 0x138 JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x139 PushV
	var_116_object = var_1_object; // 0x13a MovT
	func_5719(var_116_object); // 0x13b NEW_2
	if(var_115_bool == 0) goto Label_319; // 0x13d JumpB
	var_108_bool = 1; // 0x13e MovB
	
Label_319:
	if(var_108_bool == 0) goto Label_350; // 0x13f JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x140 PushV
	var_131_object = var_1_object; // 0x141 MovT
	var_132_object = var_0_object; // 0x142 MovT
	func_5245(); // 0x143 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x145 PushV
	var_135_object = var_1_object; // 0x146 MovT
	var_136_object = var_0_object; // 0x147 MovT
	func_5340(); // 0x148 NEW_2
	var_139_string = ""; // 0x14a PushV
	var_139_string = "Penetrating"; // 0x14b MovS
	func_228(var_52_cvector, var_139_string); // 0x14c NEW_2
	var_140_int = 532204; // 0x14e PushI
	SetMessage(var_140_int); // 0x14f TObjFunc
	ClearReplies(); // 0x151 TObjFunc
	var_141_int = 532205; // 0x153 PushI
	var_142_int = 33621; // 0x154 PushI
	var_143_int = 33620; // 0x155 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x156 TObjFunc
	var_144_int = 532221; // 0x158 PushI
	var_145_int = 33621; // 0x159 PushI
	var_146_int = 33638; // 0x15a PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_147_string = ""; // 0x15e PushV
	var_147_string = "Suffering"; // 0x15f MovS
	func_228(var_52_cvector, var_147_string); // 0x160 NEW_2
	var_148_int = 532253; // 0x162 PushI
	SetMessage(var_148_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_149_bool = 0; // 0x167 PushV
	var_149_bool = 0; // 0x168 MovB
	var_150_bool = 0; var_151_object = Obj(); // 0x169 PushV
	var_151_object = var_1_object; // 0x16a MovT
	func_5719(var_151_object); // 0x16b NEW_2
	if(var_150_bool == 0) goto Label_372; // 0x16d JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x16e PushV
	var_153_object = var_1_object; // 0x16f MovT
	func_5539(var_153_object); // 0x170 NEW_2
	if(var_152_bool == 0) goto Label_372; // 0x172 JumpB
	var_149_bool = 1; // 0x173 MovB
	
Label_372:
	if(var_149_bool == 0) goto Label_378; // 0x174 JumpB
	var_158_int = 533013; // 0x175 PushI
	var_159_int = 34518; // 0x176 PushI
	var_160_int = 34517; // 0x177 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x178 TObjFunc
	
Label_378:
	var_161_int = 532338; // 0x17a PushI
	var_162_int = -1; // 0x17b PushI
	var_163_int = 33767; // 0x17c PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_164_int = 34518; // 0x180 PushI
	var_165_bool = var_51_bool == var_164_int; // 0x181 Eq
	if(var_165_bool == 0) goto Label_412; // 0x182 JumpB
	var_166_string = ""; // 0x183 PushV
	var_166_string = "Suffering"; // 0x184 MovS
	func_228(var_52_cvector, var_166_string); // 0x185 NEW_2
	var_167_int = 533014; // 0x187 PushI
	SetMessage(var_167_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_168_int = 533015; // 0x18c PushI
	var_169_int = 34520; // 0x18d PushI
	var_170_int = 34519; // 0x18e PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x18f TObjFunc
	var_171_int = 533024; // 0x191 PushI
	var_172_int = 34529; // 0x192 PushI
	var_173_int = 34528; // 0x193 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x194 TObjFunc
	var_174_int = 533030; // 0x196 PushI
	var_175_int = 34529; // 0x197 PushI
	var_176_int = 34536; // 0x198 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_177_int = 34529; // 0x19c PushI
	var_178_bool = var_51_bool == var_177_int; // 0x19d Eq
	if(var_178_bool == 0) goto Label_435; // 0x19e JumpB
	var_179_string = ""; // 0x19f PushV
	var_179_string = "Neutral"; // 0x1a0 MovS
	func_228(var_52_cvector, var_179_string); // 0x1a1 NEW_2
	var_180_int = 533025; // 0x1a3 PushI
	SetMessage(var_180_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_181_int = 533026; // 0x1a8 PushI
	var_182_int = 34520; // 0x1a9 PushI
	var_183_int = 34530; // 0x1aa PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1ab TObjFunc
	var_184_int = 533027; // 0x1ad PushI
	var_185_int = 34533; // 0x1ae PushI
	var_186_int = 34532; // 0x1af PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_187_int = 34533; // 0x1b3 PushI
	var_188_bool = var_51_bool == var_187_int; // 0x1b4 Eq
	if(var_188_bool == 0) goto Label_453; // 0x1b5 JumpB
	var_189_string = ""; // 0x1b6 PushV
	var_189_string = "Neutral"; // 0x1b7 MovS
	func_228(var_52_cvector, var_189_string); // 0x1b8 NEW_2
	var_190_int = 533028; // 0x1ba PushI
	SetMessage(var_190_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_191_int = 533029; // 0x1bf PushI
	var_192_int = 34520; // 0x1c0 PushI
	var_193_int = 34534; // 0x1c1 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1c2 TObjFunc
	return 0; // 0x1c4 Return
	
Label_453:
	var_194_int = 34520; // 0x1c5 PushI
	var_195_bool = var_51_bool == var_194_int; // 0x1c6 Eq
	if(var_195_bool == 0) goto Label_476; // 0x1c7 JumpB
	var_196_string = ""; // 0x1c8 PushV
	var_196_string = "Neutral"; // 0x1c9 MovS
	func_228(var_52_cvector, var_196_string); // 0x1ca NEW_2
	var_197_int = 533016; // 0x1cc PushI
	SetMessage(var_197_int); // 0x1cd TObjFunc
	ClearReplies(); // 0x1cf TObjFunc
	var_198_int = 533017; // 0x1d1 PushI
	var_199_int = -1; // 0x1d2 PushI
	var_200_int = 34521; // 0x1d3 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1d4 TObjFunc
	var_201_int = 533031; // 0x1d6 PushI
	var_202_int = -1; // 0x1d7 PushI
	var_203_int = 34540; // 0x1d8 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_204_int = 33621; // 0x1dc PushI
	var_205_bool = var_51_bool == var_204_int; // 0x1dd Eq
	if(var_205_bool == 0) goto Label_504; // 0x1de JumpB
	var_206_string = ""; // 0x1df PushV
	var_206_string = "Penetrating"; // 0x1e0 MovS
	func_228(var_52_cvector, var_206_string); // 0x1e1 NEW_2
	var_207_int = 532206; // 0x1e3 PushI
	SetMessage(var_207_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_208_int = 532207; // 0x1e8 PushI
	var_209_int = 33623; // 0x1e9 PushI
	var_210_int = 33622; // 0x1ea PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1eb TObjFunc
	var_211_int = 532218; // 0x1ed PushI
	var_212_int = 33636; // 0x1ee PushI
	var_213_int = 33635; // 0x1ef PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1f0 TObjFunc
	var_214_int = 532217; // 0x1f2 PushI
	var_215_int = 33623; // 0x1f3 PushI
	var_216_int = 33633; // 0x1f4 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_217_int = 33636; // 0x1f8 PushI
	var_218_bool = var_51_bool == var_217_int; // 0x1f9 Eq
	if(var_218_bool == 0) goto Label_527; // 0x1fa JumpB
	var_219_string = ""; // 0x1fb PushV
	var_219_string = "Neutral"; // 0x1fc MovS
	func_228(var_52_cvector, var_219_string); // 0x1fd NEW_2
	var_220_int = 532219; // 0x1ff PushI
	SetMessage(var_220_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_221_int = 532220; // 0x204 PushI
	var_222_int = -1; // 0x205 PushI
	var_223_int = 33637; // 0x206 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x207 TObjFunc
	var_224_int = 533154; // 0x209 PushI
	var_225_int = 33625; // 0x20a PushI
	var_226_int = 34671; // 0x20b PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_227_int = 33623; // 0x20f PushI
	var_228_bool = var_51_bool == var_227_int; // 0x210 Eq
	if(var_228_bool == 0) goto Label_550; // 0x211 JumpB
	var_229_string = ""; // 0x212 PushV
	var_229_string = "Neutral"; // 0x213 MovS
	func_228(var_52_cvector, var_229_string); // 0x214 NEW_2
	var_230_int = 532208; // 0x216 PushI
	SetMessage(var_230_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_231_int = 532209; // 0x21b PushI
	var_232_int = 33625; // 0x21c PushI
	var_233_int = 33624; // 0x21d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x21e TObjFunc
	var_234_int = 532216; // 0x220 PushI
	var_235_int = 33627; // 0x221 PushI
	var_236_int = 33631; // 0x222 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x223 TObjFunc
	return 0; // 0x225 Return
	
Label_550:
	var_237_int = 33625; // 0x226 PushI
	var_238_bool = var_51_bool == var_237_int; // 0x227 Eq
	if(var_238_bool == 0) goto Label_573; // 0x228 JumpB
	var_239_string = ""; // 0x229 PushV
	var_239_string = "Neutral"; // 0x22a MovS
	func_228(var_52_cvector, var_239_string); // 0x22b NEW_2
	var_240_int = 532210; // 0x22d PushI
	SetMessage(var_240_int); // 0x22e TObjFunc
	ClearReplies(); // 0x230 TObjFunc
	var_241_int = 532211; // 0x232 PushI
	var_242_int = 33627; // 0x233 PushI
	var_243_int = 33626; // 0x234 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x235 TObjFunc
	var_244_int = 532215; // 0x237 PushI
	var_245_int = -1; // 0x238 PushI
	var_246_int = 33630; // 0x239 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x23a TObjFunc
	return 0; // 0x23c Return
	
Label_573:
	var_247_int = 33627; // 0x23d PushI
	var_248_bool = var_51_bool == var_247_int; // 0x23e Eq
	if(var_248_bool == 0) goto Label_596; // 0x23f JumpB
	var_249_string = ""; // 0x240 PushV
	var_249_string = "Neutral"; // 0x241 MovS
	func_228(var_52_cvector, var_249_string); // 0x242 NEW_2
	var_250_int = 532212; // 0x244 PushI
	SetMessage(var_250_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_251_int = 532213; // 0x249 PushI
	var_252_int = -1; // 0x24a PushI
	var_253_int = 33628; // 0x24b PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x24c TObjFunc
	var_254_int = 532214; // 0x24e PushI
	var_255_int = -1; // 0x24f PushI
	var_256_int = 33629; // 0x250 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_257_int = 33615; // 0x254 PushI
	var_258_bool = var_51_bool == var_257_int; // 0x255 Eq
	if(var_258_bool == 0) goto Label_619; // 0x256 JumpB
	var_259_string = ""; // 0x257 PushV
	var_259_string = "Neutral"; // 0x258 MovS
	func_228(var_52_cvector, var_259_string); // 0x259 NEW_2
	var_260_int = 532200; // 0x25b PushI
	SetMessage(var_260_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_261_int = 532201; // 0x260 PushI
	var_262_int = -1; // 0x261 PushI
	var_263_int = 33616; // 0x262 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x263 TObjFunc
	var_264_int = 532202; // 0x265 PushI
	var_265_int = -1; // 0x266 PushI
	var_266_int = 33617; // 0x267 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_3_string = 1; // 0x26b TMovB
	var_267_bool = 0; // 0x26c PushV
	func_5225(var_267_bool); // 0x26d NEW_2
	if(var_267_bool == 0) goto Label_627; // 0x26f JumpB
	lshStopAnimation(); // 0x270 Func
	goto Label_629; // 0x272 Jump
	
Label_629:
	return 0; // 0x275 Return
	
Label_627:
	StopAnimation(); // 0x273 Func
	
Label_631:
	return 0; // 0x277 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x33d PushI
	if(var_53_int == 0) goto Label_1127; // 0x33e JumpB
	func_5078(); // 0x340 NEW_2
	var_55_int = 35677; // 0x342 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x343 Eq
	if(var_56_bool == 0) goto Label_847; // 0x344 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x345 PushV
	var_57_object = var_1_object; // 0x346 MovT
	var_58_object = var_0_object; // 0x347 MovT
	func_5251(); // 0x348 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x34a PushV
	var_116_object = var_1_object; // 0x34b MovT
	var_117_object = var_0_object; // 0x34c MovT
	func_5311(); // 0x34d NEW_2
	
Label_847:
	var_142_int = 35678; // 0x34f PushI
	var_143_bool = var_52_cvector == var_142_int; // 0x350 Eq
	if(var_143_bool == 0) goto Label_860; // 0x351 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0x352 PushV
	var_144_object = var_1_object; // 0x353 MovT
	var_145_object = var_0_object; // 0x354 MovT
	func_5251(); // 0x355 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x357 PushV
	var_146_object = var_1_object; // 0x358 MovT
	var_147_object = var_0_object; // 0x359 MovT
	func_5311(); // 0x35a NEW_2
	
Label_860:
	var_148_int = 35672; // 0x35c PushI
	var_149_bool = var_51_bool == var_148_int; // 0x35d Eq
	if(var_149_bool == 0) goto Label_918; // 0x35e JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x35f PushV
	var_151_object = var_1_object; // 0x360 MovT
	func_5478(var_151_object); // 0x361 NEW_2
	if(var_150_bool == 0) goto Label_898; // 0x363 JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x364 PushV
	var_158_object = var_1_object; // 0x365 MovT
	var_159_object = var_0_object; // 0x366 MovT
	func_5281(); // 0x367 NEW_2
	var_162_object = Obj(); var_163_object = Obj(); // 0x369 PushV
	var_162_object = var_1_object; // 0x36a MovT
	var_163_object = var_0_object; // 0x36b MovT
	func_5287(); // 0x36c NEW_2
	var_166_string = ""; // 0x36e PushV
	var_166_string = "Fear"; // 0x36f MovS
	func_806(var_52_cvector, var_166_string); // 0x370 NEW_2
	var_183_int = 534079; // 0x372 PushI
	SetMessage(var_183_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_184_int = 534080; // 0x377 PushI
	var_185_int = 38114; // 0x378 PushI
	var_186_int = 35673; // 0x379 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x37a TObjFunc
	var_187_int = 536380; // 0x37c PushI
	var_188_int = 38114; // 0x37d PushI
	var_189_int = 38153; // 0x37e PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_190_string = ""; // 0x382 PushV
	var_190_string = "Neutral"; // 0x383 MovS
	func_806(var_52_cvector, var_190_string); // 0x384 NEW_2
	var_191_int = 534086; // 0x386 PushI
	SetMessage(var_191_int); // 0x387 TObjFunc
	ClearReplies(); // 0x389 TObjFunc
	var_192_int = 534090; // 0x38b PushI
	var_193_int = -1; // 0x38c PushI
	var_194_int = 35683; // 0x38d PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x38e TObjFunc
	var_195_int = 536397; // 0x390 PushI
	var_196_int = -1; // 0x391 PushI
	var_197_int = 38176; // 0x392 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x393 TObjFunc
	return 0; // 0x395 Return
	
Label_918:
	var_198_int = 38114; // 0x396 PushI
	var_199_bool = var_51_bool == var_198_int; // 0x397 Eq
	if(var_199_bool == 0) goto Label_941; // 0x398 JumpB
	var_200_string = ""; // 0x399 PushV
	var_200_string = "Fear"; // 0x39a MovS
	func_806(var_52_cvector, var_200_string); // 0x39b NEW_2
	var_201_int = 536332; // 0x39d PushI
	SetMessage(var_201_int); // 0x39e TObjFunc
	ClearReplies(); // 0x3a0 TObjFunc
	var_202_int = 536333; // 0x3a2 PushI
	var_203_int = 38116; // 0x3a3 PushI
	var_204_int = 38115; // 0x3a4 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x3a5 TObjFunc
	var_205_int = 536381; // 0x3a7 PushI
	var_206_int = 38116; // 0x3a8 PushI
	var_207_int = 38155; // 0x3a9 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x3aa TObjFunc
	return 0; // 0x3ac Return
	
Label_941:
	var_208_int = 38116; // 0x3ad PushI
	var_209_bool = var_51_bool == var_208_int; // 0x3ae Eq
	if(var_209_bool == 0) goto Label_964; // 0x3af JumpB
	var_210_string = ""; // 0x3b0 PushV
	var_210_string = "Suffering"; // 0x3b1 MovS
	func_806(var_52_cvector, var_210_string); // 0x3b2 NEW_2
	var_211_int = 536334; // 0x3b4 PushI
	SetMessage(var_211_int); // 0x3b5 TObjFunc
	ClearReplies(); // 0x3b7 TObjFunc
	var_212_int = 536335; // 0x3b9 PushI
	var_213_int = 38118; // 0x3ba PushI
	var_214_int = 38117; // 0x3bb PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x3bc TObjFunc
	var_215_int = 536382; // 0x3be PushI
	var_216_int = 38161; // 0x3bf PushI
	var_217_int = 38156; // 0x3c0 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x3c1 TObjFunc
	return 0; // 0x3c3 Return
	
Label_964:
	var_218_int = 38161; // 0x3c4 PushI
	var_219_bool = var_51_bool == var_218_int; // 0x3c5 Eq
	if(var_219_bool == 0) goto Label_982; // 0x3c6 JumpB
	var_220_string = ""; // 0x3c7 PushV
	var_220_string = "Suffering"; // 0x3c8 MovS
	func_806(var_52_cvector, var_220_string); // 0x3c9 NEW_2
	var_221_int = 536386; // 0x3cb PushI
	SetMessage(var_221_int); // 0x3cc TObjFunc
	ClearReplies(); // 0x3ce TObjFunc
	var_222_int = 536389; // 0x3d0 PushI
	var_223_int = 38162; // 0x3d1 PushI
	var_224_int = 38164; // 0x3d2 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x3d3 TObjFunc
	return 0; // 0x3d5 Return
	
Label_982:
	var_225_int = 38118; // 0x3d6 PushI
	var_226_bool = var_51_bool == var_225_int; // 0x3d7 Eq
	if(var_226_bool == 0) goto Label_1005; // 0x3d8 JumpB
	var_227_string = ""; // 0x3d9 PushV
	var_227_string = "Suffering"; // 0x3da MovS
	func_806(var_52_cvector, var_227_string); // 0x3db NEW_2
	var_228_int = 536336; // 0x3dd PushI
	SetMessage(var_228_int); // 0x3de TObjFunc
	ClearReplies(); // 0x3e0 TObjFunc
	var_229_int = 536337; // 0x3e2 PushI
	var_230_int = 38162; // 0x3e3 PushI
	var_231_int = 38119; // 0x3e4 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x3e5 TObjFunc
	var_232_int = 536385; // 0x3e7 PushI
	var_233_int = 35674; // 0x3e8 PushI
	var_234_int = 38159; // 0x3e9 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x3ea TObjFunc
	return 0; // 0x3ec Return
	
Label_1005:
	var_235_int = 38162; // 0x3ed PushI
	var_236_bool = var_51_bool == var_235_int; // 0x3ee Eq
	if(var_236_bool == 0) goto Label_1028; // 0x3ef JumpB
	var_237_string = ""; // 0x3f0 PushV
	var_237_string = "Fear"; // 0x3f1 MovS
	func_806(var_52_cvector, var_237_string); // 0x3f2 NEW_2
	var_238_int = 536387; // 0x3f4 PushI
	SetMessage(var_238_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_239_int = 536388; // 0x3f9 PushI
	var_240_int = 38165; // 0x3fa PushI
	var_241_int = 38163; // 0x3fb PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x3fc TObjFunc
	var_242_int = 536394; // 0x3fe PushI
	var_243_int = 35674; // 0x3ff PushI
	var_244_int = 38171; // 0x400 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_245_int = 38165; // 0x404 PushI
	var_246_bool = var_51_bool == var_245_int; // 0x405 Eq
	if(var_246_bool == 0) goto Label_1051; // 0x406 JumpB
	var_247_string = ""; // 0x407 PushV
	var_247_string = "Fear"; // 0x408 MovS
	func_806(var_52_cvector, var_247_string); // 0x409 NEW_2
	var_248_int = 536390; // 0x40b PushI
	SetMessage(var_248_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_249_int = 536391; // 0x410 PushI
	var_250_int = 38167; // 0x411 PushI
	var_251_int = 38166; // 0x412 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x413 TObjFunc
	var_252_int = 536396; // 0x415 PushI
	var_253_int = 35674; // 0x416 PushI
	var_254_int = 38174; // 0x417 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_255_int = 38167; // 0x41b PushI
	var_256_bool = var_51_bool == var_255_int; // 0x41c Eq
	if(var_256_bool == 0) goto Label_1074; // 0x41d JumpB
	var_257_string = ""; // 0x41e PushV
	var_257_string = "Neutral"; // 0x41f MovS
	func_806(var_52_cvector, var_257_string); // 0x420 NEW_2
	var_258_int = 536392; // 0x422 PushI
	SetMessage(var_258_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_259_int = 536393; // 0x427 PushI
	var_260_int = 35674; // 0x428 PushI
	var_261_int = 38168; // 0x429 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x42a TObjFunc
	var_262_int = 536395; // 0x42c PushI
	var_263_int = -1; // 0x42d PushI
	var_264_int = 38173; // 0x42e PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_265_int = 35674; // 0x432 PushI
	var_266_bool = var_51_bool == var_265_int; // 0x433 Eq
	if(var_266_bool == 0) goto Label_1092; // 0x434 JumpB
	var_267_string = ""; // 0x435 PushV
	var_267_string = "Penetrating"; // 0x436 MovS
	func_806(var_52_cvector, var_267_string); // 0x437 NEW_2
	var_268_int = 534081; // 0x439 PushI
	SetMessage(var_268_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_269_int = 534082; // 0x43e PushI
	var_270_int = 35676; // 0x43f PushI
	var_271_int = 35675; // 0x440 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x441 TObjFunc
	return 0; // 0x443 Return
	
Label_1092:
	var_272_int = 35676; // 0x444 PushI
	var_273_bool = var_51_bool == var_272_int; // 0x445 Eq
	if(var_273_bool == 0) goto Label_1115; // 0x446 JumpB
	var_274_string = ""; // 0x447 PushV
	var_274_string = "Grin"; // 0x448 MovS
	func_806(var_52_cvector, var_274_string); // 0x449 NEW_2
	var_275_int = 534083; // 0x44b PushI
	SetMessage(var_275_int); // 0x44c TObjFunc
	ClearReplies(); // 0x44e TObjFunc
	var_276_int = 534084; // 0x450 PushI
	var_277_int = -1; // 0x451 PushI
	var_278_int = 35677; // 0x452 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x453 TObjFunc
	var_279_int = 534085; // 0x455 PushI
	var_280_int = -1; // 0x456 PushI
	var_281_int = 35678; // 0x457 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_3_string = 1; // 0x45b TMovB
	var_282_bool = 0; // 0x45c PushV
	func_5225(var_282_bool); // 0x45d NEW_2
	if(var_282_bool == 0) goto Label_1123; // 0x45f JumpB
	lshStopAnimation(); // 0x460 Func
	goto Label_1125; // 0x462 Jump
	
Label_1125:
	return 0; // 0x465 Return
	
Label_1123:
	StopAnimation(); // 0x463 Func
	
Label_1127:
	return 0; // 0x467 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x50f PushI
	if(var_53_int == 0) goto Label_1386; // 0x510 JumpB
	func_5078(); // 0x512 NEW_2
	var_55_int = 36971; // 0x514 PushI
	var_56_bool = var_51_bool == var_55_int; // 0x515 Eq
	if(var_56_bool == 0) goto Label_1328; // 0x516 JumpB
	var_57_string = ""; // 0x517 PushV
	var_57_string = "Neutral"; // 0x518 MovS
	func_1272(var_52_cvector, var_57_string); // 0x519 NEW_2
	var_74_int = 535294; // 0x51b PushI
	SetMessage(var_74_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_75_int = 535295; // 0x520 PushI
	var_76_int = 36973; // 0x521 PushI
	var_77_int = 36972; // 0x522 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x523 TObjFunc
	var_78_int = 535302; // 0x525 PushI
	var_79_int = -1; // 0x526 PushI
	var_80_int = 36980; // 0x527 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x528 TObjFunc
	var_81_int = 535303; // 0x52a PushI
	var_82_int = -1; // 0x52b PushI
	var_83_int = 36981; // 0x52c PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x52d TObjFunc
	return 0; // 0x52f Return
	
Label_1328:
	var_84_int = 36973; // 0x530 PushI
	var_85_bool = var_51_bool == var_84_int; // 0x531 Eq
	if(var_85_bool == 0) goto Label_1351; // 0x532 JumpB
	var_86_string = ""; // 0x533 PushV
	var_86_string = "Neutral"; // 0x534 MovS
	func_1272(var_52_cvector, var_86_string); // 0x535 NEW_2
	var_87_int = 535296; // 0x537 PushI
	SetMessage(var_87_int); // 0x538 TObjFunc
	ClearReplies(); // 0x53a TObjFunc
	var_88_int = 535297; // 0x53c PushI
	var_89_int = 36975; // 0x53d PushI
	var_90_int = 36974; // 0x53e PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x53f TObjFunc
	var_91_int = 535301; // 0x541 PushI
	var_92_int = 36975; // 0x542 PushI
	var_93_int = 36978; // 0x543 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x544 TObjFunc
	return 0; // 0x546 Return
	
Label_1351:
	var_94_int = 36975; // 0x547 PushI
	var_95_bool = var_51_bool == var_94_int; // 0x548 Eq
	if(var_95_bool == 0) goto Label_1374; // 0x549 JumpB
	var_96_string = ""; // 0x54a PushV
	var_96_string = "Neutral"; // 0x54b MovS
	func_1272(var_52_cvector, var_96_string); // 0x54c NEW_2
	var_97_int = 535298; // 0x54e PushI
	SetMessage(var_97_int); // 0x54f TObjFunc
	ClearReplies(); // 0x551 TObjFunc
	var_98_int = 535299; // 0x553 PushI
	var_99_int = -1; // 0x554 PushI
	var_100_int = 36976; // 0x555 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x556 TObjFunc
	var_101_int = 535300; // 0x558 PushI
	var_102_int = -1; // 0x559 PushI
	var_103_int = 36977; // 0x55a PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_3_string = 1; // 0x55e TMovB
	var_104_bool = 0; // 0x55f PushV
	func_5225(var_104_bool); // 0x560 NEW_2
	if(var_104_bool == 0) goto Label_1382; // 0x562 JumpB
	lshStopAnimation(); // 0x563 Func
	goto Label_1384; // 0x565 Jump
	
Label_1384:
	return 0; // 0x568 Return
	
Label_1382:
	StopAnimation(); // 0x566 Func
	
Label_1386:
	return 0; // 0x56a Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x617 PushI
	if(var_53_int == 0) goto Label_1678; // 0x618 JumpB
	func_5078(); // 0x61a NEW_2
	var_55_int = 346; // 0x61c PushI
	var_56_bool = var_51_bool == var_55_int; // 0x61d Eq
	if(var_56_bool == 0) goto Label_1597; // 0x61e JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x61f PushV
	var_57_object = var_1_object; // 0x620 MovT
	var_58_object = var_0_object; // 0x621 MovT
	func_5227(); // 0x622 NEW_2
	var_61_string = ""; // 0x624 PushV
	var_61_string = "Neutral"; // 0x625 MovS
	func_1536(var_52_cvector, var_61_string); // 0x626 NEW_2
	var_78_int = 500295; // 0x628 PushI
	SetMessage(var_78_int); // 0x629 TObjFunc
	ClearReplies(); // 0x62b TObjFunc
	var_79_int = 500296; // 0x62d PushI
	var_80_int = 350; // 0x62e PushI
	var_81_int = 347; // 0x62f PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x630 TObjFunc
	var_82_int = 500297; // 0x632 PushI
	var_83_int = 350; // 0x633 PushI
	var_84_int = 348; // 0x634 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x635 TObjFunc
	var_85_int = 500298; // 0x637 PushI
	var_86_int = 350; // 0x638 PushI
	var_87_int = 349; // 0x639 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x63a TObjFunc
	return 0; // 0x63c Return
	
Label_1597:
	var_88_int = 350; // 0x63d PushI
	var_89_bool = var_51_bool == var_88_int; // 0x63e Eq
	if(var_89_bool == 0) goto Label_1620; // 0x63f JumpB
	var_90_string = ""; // 0x640 PushV
	var_90_string = "Neutral"; // 0x641 MovS
	func_1536(var_52_cvector, var_90_string); // 0x642 NEW_2
	var_91_int = 500299; // 0x644 PushI
	SetMessage(var_91_int); // 0x645 TObjFunc
	ClearReplies(); // 0x647 TObjFunc
	var_92_int = 500300; // 0x649 PushI
	var_93_int = 355; // 0x64a PushI
	var_94_int = 351; // 0x64b PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x64c TObjFunc
	var_95_int = 500301; // 0x64e PushI
	var_96_int = 358; // 0x64f PushI
	var_97_int = 352; // 0x650 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x651 TObjFunc
	return 0; // 0x653 Return
	
Label_1620:
	var_98_int = 358; // 0x654 PushI
	var_99_bool = var_51_bool == var_98_int; // 0x655 Eq
	if(var_99_bool == 0) goto Label_1643; // 0x656 JumpB
	var_100_string = ""; // 0x657 PushV
	var_100_string = "Neutral"; // 0x658 MovS
	func_1536(var_52_cvector, var_100_string); // 0x659 NEW_2
	var_101_int = 500305; // 0x65b PushI
	SetMessage(var_101_int); // 0x65c TObjFunc
	ClearReplies(); // 0x65e TObjFunc
	var_102_int = 500306; // 0x660 PushI
	var_103_int = -1; // 0x661 PushI
	var_104_int = 359; // 0x662 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x663 TObjFunc
	var_105_int = 500307; // 0x665 PushI
	var_106_int = -1; // 0x666 PushI
	var_107_int = 360; // 0x667 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x668 TObjFunc
	return 0; // 0x66a Return
	
Label_1643:
	var_108_int = 355; // 0x66b PushI
	var_109_bool = var_51_bool == var_108_int; // 0x66c Eq
	if(var_109_bool == 0) goto Label_1666; // 0x66d JumpB
	var_110_string = ""; // 0x66e PushV
	var_110_string = "Neutral"; // 0x66f MovS
	func_1536(var_52_cvector, var_110_string); // 0x670 NEW_2
	var_111_int = 500302; // 0x672 PushI
	SetMessage(var_111_int); // 0x673 TObjFunc
	ClearReplies(); // 0x675 TObjFunc
	var_112_int = 500304; // 0x677 PushI
	var_113_int = -1; // 0x678 PushI
	var_114_int = 357; // 0x679 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x67a TObjFunc
	var_115_int = 500303; // 0x67c PushI
	var_116_int = -1; // 0x67d PushI
	var_117_int = 356; // 0x67e PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x67f TObjFunc
	return 0; // 0x681 Return
	
Label_1666:
	var_3_string = 1; // 0x682 TMovB
	var_118_bool = 0; // 0x683 PushV
	func_5225(var_118_bool); // 0x684 NEW_2
	if(var_118_bool == 0) goto Label_1674; // 0x686 JumpB
	lshStopAnimation(); // 0x687 Func
	goto Label_1676; // 0x689 Jump
	
Label_1676:
	return 0; // 0x68c Return
	
Label_1674:
	StopAnimation(); // 0x68a Func
	
Label_1678:
	return 0; // 0x68e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0x777 PushI
	if(var_53_int == 0) goto Label_2425; // 0x778 JumpB
	func_5078(); // 0x77a NEW_2
	var_55_int = 3742; // 0x77c PushI
	var_56_bool = var_52_cvector == var_55_int; // 0x77d Eq
	if(var_56_bool == 0) goto Label_1924; // 0x77e JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0x77f PushV
	var_57_object = var_1_object; // 0x780 MovT
	var_58_object = var_0_object; // 0x781 MovT
	func_5346(); // 0x782 NEW_2
	
Label_1924:
	var_61_int = 3745; // 0x784 PushI
	var_62_bool = var_52_cvector == var_61_int; // 0x785 Eq
	if(var_62_bool == 0) goto Label_1932; // 0x786 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x787 PushV
	var_63_object = var_1_object; // 0x788 MovT
	var_64_object = var_0_object; // 0x789 MovT
	func_5346(); // 0x78a NEW_2
	
Label_1932:
	var_65_int = 3746; // 0x78c PushI
	var_66_bool = var_52_cvector == var_65_int; // 0x78d Eq
	if(var_66_bool == 0) goto Label_1940; // 0x78e JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x78f PushV
	var_67_object = var_1_object; // 0x790 MovT
	var_68_object = var_0_object; // 0x791 MovT
	func_5346(); // 0x792 NEW_2
	
Label_1940:
	var_69_int = 3740; // 0x794 PushI
	var_70_bool = var_52_cvector == var_69_int; // 0x795 Eq
	if(var_70_bool == 0) goto Label_1948; // 0x796 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0x797 PushV
	var_71_object = var_1_object; // 0x798 MovT
	var_72_object = var_0_object; // 0x799 MovT
	func_5346(); // 0x79a NEW_2
	
Label_1948:
	var_73_int = 13984; // 0x79c PushI
	var_74_bool = var_52_cvector == var_73_int; // 0x79d Eq
	if(var_74_bool == 0) goto Label_1961; // 0x79e JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x79f PushV
	var_75_object = var_1_object; // 0x7a0 MovT
	var_76_object = var_0_object; // 0x7a1 MovT
	func_5352(); // 0x7a2 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x7a4 PushV
	var_79_object = var_1_object; // 0x7a5 MovT
	var_80_object = var_0_object; // 0x7a6 MovT
	func_5358(); // 0x7a7 NEW_2
	
Label_1961:
	var_133_int = 13988; // 0x7a9 PushI
	var_134_bool = var_52_cvector == var_133_int; // 0x7aa Eq
	if(var_134_bool == 0) goto Label_1974; // 0x7ab JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x7ac PushV
	var_135_object = var_1_object; // 0x7ad MovT
	var_136_object = var_0_object; // 0x7ae MovT
	func_5352(); // 0x7af NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0x7b1 PushV
	var_137_object = var_1_object; // 0x7b2 MovT
	var_138_object = var_0_object; // 0x7b3 MovT
	func_5358(); // 0x7b4 NEW_2
	
Label_1974:
	var_139_int = 13990; // 0x7b6 PushI
	var_140_bool = var_52_cvector == var_139_int; // 0x7b7 Eq
	if(var_140_bool == 0) goto Label_1982; // 0x7b8 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x7b9 PushV
	var_141_object = var_1_object; // 0x7ba MovT
	var_142_object = var_0_object; // 0x7bb MovT
	func_5395(); // 0x7bc NEW_2
	
Label_1982:
	var_145_int = 13969; // 0x7be PushI
	var_146_bool = var_51_bool == var_145_int; // 0x7bf Eq
	if(var_146_bool == 0) goto Label_2075; // 0x7c0 JumpB
	var_147_string = ""; // 0x7c1 PushV
	var_147_string = "Fear"; // 0x7c2 MovS
	func_1888(var_52_cvector, var_147_string); // 0x7c3 NEW_2
	var_164_int = 512770; // 0x7c5 PushI
	SetMessage(var_164_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_165_bool = 0; // 0x7ca PushV
	var_165_bool = 0; // 0x7cb MovB
	var_166_bool = 0; var_167_object = Obj(); // 0x7cc PushV
	var_167_object = var_1_object; // 0x7cd MovT
	func_5599(var_167_object); // 0x7ce NEW_2
	if(var_166_bool == 0) goto Label_2007; // 0x7d0 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x7d1 PushV
	var_175_object = var_1_object; // 0x7d2 MovT
	func_5575(var_175_object); // 0x7d3 NEW_2
	if(var_174_bool == 0) goto Label_2007; // 0x7d5 JumpB
	var_165_bool = 1; // 0x7d6 MovB
	
Label_2007:
	if(var_165_bool == 0) goto Label_2013; // 0x7d7 JumpB
	var_180_int = 512771; // 0x7d8 PushI
	var_181_int = 3726; // 0x7d9 PushI
	var_182_int = 13970; // 0x7da PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x7db TObjFunc
	
Label_2013:
	var_183_bool = 0; // 0x7dd PushV
	var_183_bool = 0; // 0x7de MovB
	var_184_bool = 0; var_185_object = Obj(); // 0x7df PushV
	var_185_object = var_1_object; // 0x7e0 MovT
	func_5611(var_185_object); // 0x7e1 NEW_2
	if(var_184_bool == 0) goto Label_2026; // 0x7e3 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x7e4 PushV
	var_191_object = var_1_object; // 0x7e5 MovT
	func_5587(var_191_object); // 0x7e6 NEW_2
	if(var_190_bool == 0) goto Label_2026; // 0x7e8 JumpB
	var_183_bool = 1; // 0x7e9 MovB
	
Label_2026:
	if(var_183_bool == 0) goto Label_2032; // 0x7ea JumpB
	var_196_int = 512772; // 0x7eb PushI
	var_197_int = 13972; // 0x7ec PushI
	var_198_int = 13971; // 0x7ed PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x7ee TObjFunc
	
Label_2032:
	var_199_bool = 0; // 0x7f0 PushV
	var_199_bool = 1; // 0x7f1 MovB
	var_200_bool = 0; // 0x7f2 PushV
	var_200_bool = 0; // 0x7f3 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x7f4 PushV
	var_202_object = var_1_object; // 0x7f5 MovT
	func_5623(var_202_object); // 0x7f6 NEW_2
	if(var_201_bool == 0) goto Label_2047; // 0x7f8 JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x7f9 PushV
	var_208_object = var_1_object; // 0x7fa MovT
	func_5647(var_208_object); // 0x7fb NEW_2
	if(var_207_bool == 0) goto Label_2047; // 0x7fd JumpB
	var_200_bool = 1; // 0x7fe MovB
	
Label_2047:
	if(var_200_bool == 0) goto Label_2063; // 0x7ff JumpB
	var_213_bool = 0; // 0x800 PushV
	var_213_bool = 0; // 0x801 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x802 PushV
	var_215_object = var_1_object; // 0x803 MovT
	func_5635(var_215_object); // 0x804 NEW_2
	if(var_214_bool == 0) goto Label_2061; // 0x806 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x807 PushV
	var_221_object = var_1_object; // 0x808 MovT
	func_5647(var_221_object); // 0x809 NEW_2
	if(var_220_bool == 0) goto Label_2061; // 0x80b JumpB
	var_213_bool = 1; // 0x80c MovB
	
Label_2061:
	if(var_213_bool == 0) goto Label_2063; // 0x80d JumpB
	var_199_bool = 0; // 0x80e MovB
	
Label_2063:
	if(var_199_bool == 0) goto Label_2069; // 0x80f JumpB
	var_222_int = 512791; // 0x810 PushI
	var_223_int = 13991; // 0x811 PushI
	var_224_int = 13990; // 0x812 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x813 TObjFunc
	
Label_2069:
	var_225_int = 512790; // 0x815 PushI
	var_226_int = -1; // 0x816 PushI
	var_227_int = 13989; // 0x817 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x818 TObjFunc
	return 0; // 0x81a Return
	
Label_2075:
	var_228_int = 13991; // 0x81b PushI
	var_229_bool = var_51_bool == var_228_int; // 0x81c Eq
	if(var_229_bool == 0) goto Label_2093; // 0x81d JumpB
	var_230_string = ""; // 0x81e PushV
	var_230_string = "Fear"; // 0x81f MovS
	func_1888(var_52_cvector, var_230_string); // 0x820 NEW_2
	var_231_int = 512792; // 0x822 PushI
	SetMessage(var_231_int); // 0x823 TObjFunc
	ClearReplies(); // 0x825 TObjFunc
	var_232_int = 512793; // 0x827 PushI
	var_233_int = 13993; // 0x828 PushI
	var_234_int = 13992; // 0x829 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x82a TObjFunc
	return 0; // 0x82c Return
	
Label_2093:
	var_235_int = 13993; // 0x82d PushI
	var_236_bool = var_51_bool == var_235_int; // 0x82e Eq
	if(var_236_bool == 0) goto Label_2116; // 0x82f JumpB
	var_237_string = ""; // 0x830 PushV
	var_237_string = "Fear"; // 0x831 MovS
	func_1888(var_52_cvector, var_237_string); // 0x832 NEW_2
	var_238_int = 512794; // 0x834 PushI
	SetMessage(var_238_int); // 0x835 TObjFunc
	ClearReplies(); // 0x837 TObjFunc
	var_239_int = 512795; // 0x839 PushI
	var_240_int = -1; // 0x83a PushI
	var_241_int = 13994; // 0x83b PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x83c TObjFunc
	var_242_int = 512798; // 0x83e PushI
	var_243_int = -1; // 0x83f PushI
	var_244_int = 13997; // 0x840 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x841 TObjFunc
	return 0; // 0x843 Return
	
Label_2116:
	var_245_int = 13972; // 0x844 PushI
	var_246_bool = var_51_bool == var_245_int; // 0x845 Eq
	if(var_246_bool == 0) goto Label_2134; // 0x846 JumpB
	var_247_string = ""; // 0x847 PushV
	var_247_string = "Fear"; // 0x848 MovS
	func_1888(var_52_cvector, var_247_string); // 0x849 NEW_2
	var_248_int = 512773; // 0x84b PushI
	SetMessage(var_248_int); // 0x84c TObjFunc
	ClearReplies(); // 0x84e TObjFunc
	var_249_int = 512774; // 0x850 PushI
	var_250_int = 13974; // 0x851 PushI
	var_251_int = 13973; // 0x852 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x853 TObjFunc
	return 0; // 0x855 Return
	
Label_2134:
	var_252_int = 13974; // 0x856 PushI
	var_253_bool = var_51_bool == var_252_int; // 0x857 Eq
	if(var_253_bool == 0) goto Label_2152; // 0x858 JumpB
	var_254_string = ""; // 0x859 PushV
	var_254_string = "Fear"; // 0x85a MovS
	func_1888(var_52_cvector, var_254_string); // 0x85b NEW_2
	var_255_int = 512775; // 0x85d PushI
	SetMessage(var_255_int); // 0x85e TObjFunc
	ClearReplies(); // 0x860 TObjFunc
	var_256_int = 512776; // 0x862 PushI
	var_257_int = 13976; // 0x863 PushI
	var_258_int = 13975; // 0x864 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x865 TObjFunc
	return 0; // 0x867 Return
	
Label_2152:
	var_259_int = 13976; // 0x868 PushI
	var_260_bool = var_51_bool == var_259_int; // 0x869 Eq
	if(var_260_bool == 0) goto Label_2175; // 0x86a JumpB
	var_261_string = ""; // 0x86b PushV
	var_261_string = "Suffering"; // 0x86c MovS
	func_1888(var_52_cvector, var_261_string); // 0x86d NEW_2
	var_262_int = 512777; // 0x86f PushI
	SetMessage(var_262_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_263_int = 512779; // 0x874 PushI
	var_264_int = 13980; // 0x875 PushI
	var_265_int = 13978; // 0x876 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x877 TObjFunc
	var_266_int = 512778; // 0x879 PushI
	var_267_int = 13979; // 0x87a PushI
	var_268_int = 13977; // 0x87b PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x87c TObjFunc
	return 0; // 0x87e Return
	
Label_2175:
	var_269_int = 13979; // 0x87f PushI
	var_270_bool = var_51_bool == var_269_int; // 0x880 Eq
	if(var_270_bool == 0) goto Label_2198; // 0x881 JumpB
	var_271_string = ""; // 0x882 PushV
	var_271_string = "Neutral"; // 0x883 MovS
	func_1888(var_52_cvector, var_271_string); // 0x884 NEW_2
	var_272_int = 512780; // 0x886 PushI
	SetMessage(var_272_int); // 0x887 TObjFunc
	ClearReplies(); // 0x889 TObjFunc
	var_273_int = 513020; // 0x88b PushI
	var_274_int = 13983; // 0x88c PushI
	var_275_int = 14226; // 0x88d PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x88e TObjFunc
	var_276_int = 541840; // 0x890 PushI
	var_277_int = 13983; // 0x891 PushI
	var_278_int = 44057; // 0x892 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x893 TObjFunc
	return 0; // 0x895 Return
	
Label_2198:
	var_279_int = 13980; // 0x896 PushI
	var_280_bool = var_51_bool == var_279_int; // 0x897 Eq
	if(var_280_bool == 0) goto Label_2216; // 0x898 JumpB
	var_281_string = ""; // 0x899 PushV
	var_281_string = "Suffering"; // 0x89a MovS
	func_1888(var_52_cvector, var_281_string); // 0x89b NEW_2
	var_282_int = 512781; // 0x89d PushI
	SetMessage(var_282_int); // 0x89e TObjFunc
	ClearReplies(); // 0x8a0 TObjFunc
	var_283_int = 512782; // 0x8a2 PushI
	var_284_int = 13983; // 0x8a3 PushI
	var_285_int = 13981; // 0x8a4 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x8a5 TObjFunc
	return 0; // 0x8a7 Return
	
Label_2216:
	var_286_int = 13983; // 0x8a8 PushI
	var_287_bool = var_51_bool == var_286_int; // 0x8a9 Eq
	if(var_287_bool == 0) goto Label_2239; // 0x8aa JumpB
	var_288_string = ""; // 0x8ab PushV
	var_288_string = "Neutral"; // 0x8ac MovS
	func_1888(var_52_cvector, var_288_string); // 0x8ad NEW_2
	var_289_int = 512784; // 0x8af PushI
	SetMessage(var_289_int); // 0x8b0 TObjFunc
	ClearReplies(); // 0x8b2 TObjFunc
	var_290_int = 512785; // 0x8b4 PushI
	var_291_int = -1; // 0x8b5 PushI
	var_292_int = 13984; // 0x8b6 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x8b7 TObjFunc
	var_293_int = 512783; // 0x8b9 PushI
	var_294_int = 13985; // 0x8ba PushI
	var_295_int = 13982; // 0x8bb PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x8bc TObjFunc
	return 0; // 0x8be Return
	
Label_2239:
	var_296_int = 13985; // 0x8bf PushI
	var_297_bool = var_51_bool == var_296_int; // 0x8c0 Eq
	if(var_297_bool == 0) goto Label_2257; // 0x8c1 JumpB
	var_298_string = ""; // 0x8c2 PushV
	var_298_string = "Neutral"; // 0x8c3 MovS
	func_1888(var_52_cvector, var_298_string); // 0x8c4 NEW_2
	var_299_int = 512786; // 0x8c6 PushI
	SetMessage(var_299_int); // 0x8c7 TObjFunc
	ClearReplies(); // 0x8c9 TObjFunc
	var_300_int = 512787; // 0x8cb PushI
	var_301_int = 13987; // 0x8cc PushI
	var_302_int = 13986; // 0x8cd PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x8ce TObjFunc
	return 0; // 0x8d0 Return
	
Label_2257:
	var_303_int = 13987; // 0x8d1 PushI
	var_304_bool = var_51_bool == var_303_int; // 0x8d2 Eq
	if(var_304_bool == 0) goto Label_2275; // 0x8d3 JumpB
	var_305_string = ""; // 0x8d4 PushV
	var_305_string = "Neutral"; // 0x8d5 MovS
	func_1888(var_52_cvector, var_305_string); // 0x8d6 NEW_2
	var_306_int = 512788; // 0x8d8 PushI
	SetMessage(var_306_int); // 0x8d9 TObjFunc
	ClearReplies(); // 0x8db TObjFunc
	var_307_int = 512789; // 0x8dd PushI
	var_308_int = -1; // 0x8de PushI
	var_309_int = 13988; // 0x8df PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x8e0 TObjFunc
	return 0; // 0x8e2 Return
	
Label_2275:
	var_310_int = 3726; // 0x8e3 PushI
	var_311_bool = var_51_bool == var_310_int; // 0x8e4 Eq
	if(var_311_bool == 0) goto Label_2298; // 0x8e5 JumpB
	var_312_string = ""; // 0x8e6 PushV
	var_312_string = "Fear"; // 0x8e7 MovS
	func_1888(var_52_cvector, var_312_string); // 0x8e8 NEW_2
	var_313_int = 503459; // 0x8ea PushI
	SetMessage(var_313_int); // 0x8eb TObjFunc
	ClearReplies(); // 0x8ed TObjFunc
	var_314_int = 503460; // 0x8ef PushI
	var_315_int = 3729; // 0x8f0 PushI
	var_316_int = 3727; // 0x8f1 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x8f2 TObjFunc
	var_317_int = 503461; // 0x8f4 PushI
	var_318_int = 3730; // 0x8f5 PushI
	var_319_int = 3728; // 0x8f6 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x8f7 TObjFunc
	return 0; // 0x8f9 Return
	
Label_2298:
	var_320_int = 3730; // 0x8fa PushI
	var_321_bool = var_51_bool == var_320_int; // 0x8fb Eq
	if(var_321_bool == 0) goto Label_2321; // 0x8fc JumpB
	var_322_string = ""; // 0x8fd PushV
	var_322_string = "Fear"; // 0x8fe MovS
	func_1888(var_52_cvector, var_322_string); // 0x8ff NEW_2
	var_323_int = 503463; // 0x901 PushI
	SetMessage(var_323_int); // 0x902 TObjFunc
	ClearReplies(); // 0x904 TObjFunc
	var_324_int = 503464; // 0x906 PushI
	var_325_int = 3729; // 0x907 PushI
	var_326_int = 3731; // 0x908 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x909 TObjFunc
	var_327_int = 503465; // 0x90b PushI
	var_328_int = 3734; // 0x90c PushI
	var_329_int = 3733; // 0x90d PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x90e TObjFunc
	return 0; // 0x910 Return
	
Label_2321:
	var_330_int = 3734; // 0x911 PushI
	var_331_bool = var_51_bool == var_330_int; // 0x912 Eq
	if(var_331_bool == 0) goto Label_2344; // 0x913 JumpB
	var_332_string = ""; // 0x914 PushV
	var_332_string = "Fear"; // 0x915 MovS
	func_1888(var_52_cvector, var_332_string); // 0x916 NEW_2
	var_333_int = 503466; // 0x918 PushI
	SetMessage(var_333_int); // 0x919 TObjFunc
	ClearReplies(); // 0x91b TObjFunc
	var_334_int = 503467; // 0x91d PushI
	var_335_int = 3729; // 0x91e PushI
	var_336_int = 3735; // 0x91f PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x920 TObjFunc
	var_337_int = 503468; // 0x922 PushI
	var_338_int = 3729; // 0x923 PushI
	var_339_int = 3736; // 0x924 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x925 TObjFunc
	return 0; // 0x927 Return
	
Label_2344:
	var_340_int = 3729; // 0x928 PushI
	var_341_bool = var_51_bool == var_340_int; // 0x929 Eq
	if(var_341_bool == 0) goto Label_2367; // 0x92a JumpB
	var_342_string = ""; // 0x92b PushV
	var_342_string = "Fear"; // 0x92c MovS
	func_1888(var_52_cvector, var_342_string); // 0x92d NEW_2
	var_343_int = 503462; // 0x92f PushI
	SetMessage(var_343_int); // 0x930 TObjFunc
	ClearReplies(); // 0x932 TObjFunc
	var_344_int = 503469; // 0x934 PushI
	var_345_int = 3741; // 0x935 PushI
	var_346_int = 3739; // 0x936 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x937 TObjFunc
	var_347_int = 503470; // 0x939 PushI
	var_348_int = -1; // 0x93a PushI
	var_349_int = 3740; // 0x93b PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x93c TObjFunc
	return 0; // 0x93e Return
	
Label_2367:
	var_350_int = 3741; // 0x93f PushI
	var_351_bool = var_51_bool == var_350_int; // 0x940 Eq
	if(var_351_bool == 0) goto Label_2390; // 0x941 JumpB
	var_352_string = ""; // 0x942 PushV
	var_352_string = "Neutral"; // 0x943 MovS
	func_1888(var_52_cvector, var_352_string); // 0x944 NEW_2
	var_353_int = 503471; // 0x946 PushI
	SetMessage(var_353_int); // 0x947 TObjFunc
	ClearReplies(); // 0x949 TObjFunc
	var_354_int = 503472; // 0x94b PushI
	var_355_int = -1; // 0x94c PushI
	var_356_int = 3742; // 0x94d PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x94e TObjFunc
	var_357_int = 503473; // 0x950 PushI
	var_358_int = 3744; // 0x951 PushI
	var_359_int = 3743; // 0x952 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x953 TObjFunc
	return 0; // 0x955 Return
	
Label_2390:
	var_360_int = 3744; // 0x956 PushI
	var_361_bool = var_51_bool == var_360_int; // 0x957 Eq
	if(var_361_bool == 0) goto Label_2413; // 0x958 JumpB
	var_362_string = ""; // 0x959 PushV
	var_362_string = "Neutral"; // 0x95a MovS
	func_1888(var_52_cvector, var_362_string); // 0x95b NEW_2
	var_363_int = 503474; // 0x95d PushI
	SetMessage(var_363_int); // 0x95e TObjFunc
	ClearReplies(); // 0x960 TObjFunc
	var_364_int = 503475; // 0x962 PushI
	var_365_int = -1; // 0x963 PushI
	var_366_int = 3745; // 0x964 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x965 TObjFunc
	var_367_int = 503476; // 0x967 PushI
	var_368_int = -1; // 0x968 PushI
	var_369_int = 3746; // 0x969 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x96a TObjFunc
	return 0; // 0x96c Return
	
Label_2413:
	var_3_string = 1; // 0x96d TMovB
	var_370_bool = 0; // 0x96e PushV
	func_5225(var_370_bool); // 0x96f NEW_2
	if(var_370_bool == 0) goto Label_2421; // 0x971 JumpB
	lshStopAnimation(); // 0x972 Func
	goto Label_2423; // 0x974 Jump
	
Label_2423:
	return 0; // 0x977 Return
	
Label_2421:
	StopAnimation(); // 0x975 Func
	
Label_2425:
	return 0; // 0x979 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xa62 PushI
	if(var_53_int == 0) goto Label_2847; // 0xa63 JumpB
	func_5078(); // 0xa65 NEW_2
	var_55_int = 10246; // 0xa67 PushI
	var_56_bool = var_51_bool == var_55_int; // 0xa68 Eq
	if(var_56_bool == 0) goto Label_2756; // 0xa69 JumpB
	var_57_bool = 0; var_58_object = Obj(); // 0xa6a PushV
	var_58_object = var_1_object; // 0xa6b MovT
	func_5683(var_58_object); // 0xa6c NEW_2
	if(var_57_bool == 0) goto Label_2701; // 0xa6e JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0xa6f PushV
	var_65_object = var_1_object; // 0xa70 MovT
	var_66_object = var_0_object; // 0xa71 MovT
	func_5424(); // 0xa72 NEW_2
	var_69_string = ""; // 0xa74 PushV
	var_69_string = "Neutral"; // 0xa75 MovS
	func_2635(var_52_cvector, var_69_string); // 0xa76 NEW_2
	var_86_int = 509330; // 0xa78 PushI
	SetMessage(var_86_int); // 0xa79 TObjFunc
	ClearReplies(); // 0xa7b TObjFunc
	var_87_int = 509331; // 0xa7d PushI
	var_88_int = 10248; // 0xa7e PushI
	var_89_int = 10247; // 0xa7f PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xa80 TObjFunc
	var_90_int = 509340; // 0xa82 PushI
	var_91_int = 10248; // 0xa83 PushI
	var_92_int = 10258; // 0xa84 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xa85 TObjFunc
	var_93_int = 509341; // 0xa87 PushI
	var_94_int = 10248; // 0xa88 PushI
	var_95_int = 10260; // 0xa89 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xa8a TObjFunc
	return 0; // 0xa8c Return
	
Label_2701:
	var_96_bool = 0; var_97_object = Obj(); // 0xa8d PushV
	var_97_object = var_1_object; // 0xa8e MovT
	func_5695(var_97_object); // 0xa8f NEW_2
	if(var_96_bool == 0) goto Label_2736; // 0xa91 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xa92 PushV
	var_102_object = var_1_object; // 0xa93 MovT
	var_103_object = var_0_object; // 0xa94 MovT
	func_5430(); // 0xa95 NEW_2
	var_106_string = ""; // 0xa97 PushV
	var_106_string = "Neutral"; // 0xa98 MovS
	func_2635(var_52_cvector, var_106_string); // 0xa99 NEW_2
	var_107_int = 509323; // 0xa9b PushI
	SetMessage(var_107_int); // 0xa9c TObjFunc
	ClearReplies(); // 0xa9e TObjFunc
	var_108_int = 509324; // 0xaa0 PushI
	var_109_int = 10239; // 0xaa1 PushI
	var_110_int = 10238; // 0xaa2 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xaa3 TObjFunc
	var_111_int = 509328; // 0xaa5 PushI
	var_112_int = 10239; // 0xaa6 PushI
	var_113_int = 10242; // 0xaa7 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xaa8 TObjFunc
	var_114_int = 509329; // 0xaaa PushI
	var_115_int = 10239; // 0xaab PushI
	var_116_int = 10244; // 0xaac PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xaad TObjFunc
	return 0; // 0xaaf Return
	
Label_2736:
	var_117_string = ""; // 0xab0 PushV
	var_117_string = "Neutral"; // 0xab1 MovS
	func_2635(var_52_cvector, var_117_string); // 0xab2 NEW_2
	var_118_int = 515792; // 0xab4 PushI
	SetMessage(var_118_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_119_int = 533895; // 0xab9 PushI
	var_120_int = -1; // 0xaba PushI
	var_121_int = 35453; // 0xabb PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xabc TObjFunc
	var_122_int = 533894; // 0xabe PushI
	var_123_int = -1; // 0xabf PushI
	var_124_int = 35452; // 0xac0 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xac1 TObjFunc
	return 0; // 0xac3 Return
	
Label_2756:
	var_125_int = 10239; // 0xac4 PushI
	var_126_bool = var_51_bool == var_125_int; // 0xac5 Eq
	if(var_126_bool == 0) goto Label_2779; // 0xac6 JumpB
	var_127_string = ""; // 0xac7 PushV
	var_127_string = "Neutral"; // 0xac8 MovS
	func_2635(var_52_cvector, var_127_string); // 0xac9 NEW_2
	var_128_int = 509325; // 0xacb PushI
	SetMessage(var_128_int); // 0xacc TObjFunc
	ClearReplies(); // 0xace TObjFunc
	var_129_int = 509326; // 0xad0 PushI
	var_130_int = -1; // 0xad1 PushI
	var_131_int = 10240; // 0xad2 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xad3 TObjFunc
	var_132_int = 509327; // 0xad5 PushI
	var_133_int = -1; // 0xad6 PushI
	var_134_int = 10241; // 0xad7 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xad8 TObjFunc
	return 0; // 0xada Return
	
Label_2779:
	var_135_int = 10248; // 0xadb PushI
	var_136_bool = var_51_bool == var_135_int; // 0xadc Eq
	if(var_136_bool == 0) goto Label_2807; // 0xadd JumpB
	var_137_string = ""; // 0xade PushV
	var_137_string = "Grin"; // 0xadf MovS
	func_2635(var_52_cvector, var_137_string); // 0xae0 NEW_2
	var_138_int = 509332; // 0xae2 PushI
	SetMessage(var_138_int); // 0xae3 TObjFunc
	ClearReplies(); // 0xae5 TObjFunc
	var_139_int = 509333; // 0xae7 PushI
	var_140_int = 10250; // 0xae8 PushI
	var_141_int = 10249; // 0xae9 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xaea TObjFunc
	var_142_int = 509338; // 0xaec PushI
	var_143_int = 10250; // 0xaed PushI
	var_144_int = 10254; // 0xaee PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xaef TObjFunc
	var_145_int = 509339; // 0xaf1 PushI
	var_146_int = 10250; // 0xaf2 PushI
	var_147_int = 10256; // 0xaf3 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0xaf4 TObjFunc
	return 0; // 0xaf6 Return
	
Label_2807:
	var_148_int = 10250; // 0xaf7 PushI
	var_149_bool = var_51_bool == var_148_int; // 0xaf8 Eq
	if(var_149_bool == 0) goto Label_2835; // 0xaf9 JumpB
	var_150_string = ""; // 0xafa PushV
	var_150_string = "Grin"; // 0xafb MovS
	func_2635(var_52_cvector, var_150_string); // 0xafc NEW_2
	var_151_int = 509334; // 0xafe PushI
	SetMessage(var_151_int); // 0xaff TObjFunc
	ClearReplies(); // 0xb01 TObjFunc
	var_152_int = 509335; // 0xb03 PushI
	var_153_int = -1; // 0xb04 PushI
	var_154_int = 10251; // 0xb05 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xb06 TObjFunc
	var_155_int = 509336; // 0xb08 PushI
	var_156_int = -1; // 0xb09 PushI
	var_157_int = 10252; // 0xb0a PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xb0b TObjFunc
	var_158_int = 509337; // 0xb0d PushI
	var_159_int = -1; // 0xb0e PushI
	var_160_int = 10253; // 0xb0f PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xb10 TObjFunc
	return 0; // 0xb12 Return
	
Label_2835:
	var_3_string = 1; // 0xb13 TMovB
	var_161_bool = 0; // 0xb14 PushV
	func_5225(var_161_bool); // 0xb15 NEW_2
	if(var_161_bool == 0) goto Label_2843; // 0xb17 JumpB
	lshStopAnimation(); // 0xb18 Func
	goto Label_2845; // 0xb1a Jump
	
Label_2845:
	return 0; // 0xb1d Return
	
Label_2843:
	StopAnimation(); // 0xb1b Func
	
Label_2847:
	return 0; // 0xb1f Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xbee PushI
	if(var_53_int == 0) goto Label_3484; // 0xbef JumpB
	func_5078(); // 0xbf1 NEW_2
	var_55_int = 10945; // 0xbf3 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xbf4 Eq
	if(var_56_bool == 0) goto Label_3072; // 0xbf5 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xbf6 PushV
	var_57_object = var_1_object; // 0xbf7 MovT
	var_58_object = var_0_object; // 0xbf8 MovT
	func_5407(var_58_object); // 0xbf9 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0xbfb PushV
	var_81_object = var_1_object; // 0xbfc MovT
	var_82_object = var_0_object; // 0xbfd MovT
	func_5233(); // 0xbfe NEW_2
	
Label_3072:
	var_85_int = 10946; // 0xc00 PushI
	var_86_bool = var_52_cvector == var_85_int; // 0xc01 Eq
	if(var_86_bool == 0) goto Label_3085; // 0xc02 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0xc03 PushV
	var_87_object = var_1_object; // 0xc04 MovT
	var_88_object = var_0_object; // 0xc05 MovT
	func_5407(var_88_object); // 0xc06 NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0xc08 PushV
	var_89_object = var_1_object; // 0xc09 MovT
	var_90_object = var_0_object; // 0xc0a MovT
	func_5233(); // 0xc0b NEW_2
	
Label_3085:
	var_91_int = 34384; // 0xc0d PushI
	var_92_bool = var_52_cvector == var_91_int; // 0xc0e Eq
	if(var_92_bool == 0) goto Label_3098; // 0xc0f JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xc10 PushV
	var_93_object = var_1_object; // 0xc11 MovT
	var_94_object = var_0_object; // 0xc12 MovT
	func_5293(); // 0xc13 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0xc15 PushV
	var_97_object = var_1_object; // 0xc16 MovT
	var_98_object = var_0_object; // 0xc17 MovT
	func_5299(); // 0xc18 NEW_2
	
Label_3098:
	var_101_int = 10936; // 0xc1a PushI
	var_102_bool = var_51_bool == var_101_int; // 0xc1b Eq
	if(var_102_bool == 0) goto Label_3165; // 0xc1c JumpB
	var_103_bool = 0; // 0xc1d PushV
	var_103_bool = 0; // 0xc1e MovB
	var_104_bool = 0; var_105_object = Obj(); // 0xc1f PushV
	var_105_object = var_1_object; // 0xc20 MovT
	func_5659(var_105_object); // 0xc21 NEW_2
	if(var_104_bool == 0) goto Label_3114; // 0xc23 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0xc24 PushV
	var_113_object = var_1_object; // 0xc25 MovT
	func_5490(var_113_object); // 0xc26 NEW_2
	if(var_112_bool == 0) goto Label_3114; // 0xc28 JumpB
	var_103_bool = 1; // 0xc29 MovB
	
Label_3114:
	if(var_103_bool == 0) goto Label_3135; // 0xc2a JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0xc2b PushV
	var_131_object = var_1_object; // 0xc2c MovT
	var_132_object = var_0_object; // 0xc2d MovT
	func_5401(); // 0xc2e NEW_2
	var_135_string = ""; // 0xc30 PushV
	var_135_string = "Grin"; // 0xc31 MovS
	func_3031(var_52_cvector, var_135_string); // 0xc32 NEW_2
	var_152_int = 509926; // 0xc34 PushI
	SetMessage(var_152_int); // 0xc35 TObjFunc
	ClearReplies(); // 0xc37 TObjFunc
	var_153_int = 509927; // 0xc39 PushI
	var_154_int = 10938; // 0xc3a PushI
	var_155_int = 10937; // 0xc3b PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xc3c TObjFunc
	return 0; // 0xc3e Return
	
Label_3135:
	var_156_string = ""; // 0xc3f PushV
	var_156_string = "Penetrating"; // 0xc40 MovS
	func_3031(var_52_cvector, var_156_string); // 0xc41 NEW_2
	var_157_int = 532898; // 0xc43 PushI
	SetMessage(var_157_int); // 0xc44 TObjFunc
	ClearReplies(); // 0xc46 TObjFunc
	var_158_bool = 0; var_159_object = Obj(); // 0xc48 PushV
	var_159_object = var_1_object; // 0xc49 MovT
	func_5527(var_159_object); // 0xc4a NEW_2
	if(var_158_bool == 0) goto Label_3154; // 0xc4c JumpB
	var_164_int = 532897; // 0xc4d PushI
	var_165_int = 11224; // 0xc4e PushI
	var_166_int = 34384; // 0xc4f PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0xc50 TObjFunc
	
Label_3154:
	var_167_int = 534175; // 0xc52 PushI
	var_168_int = -1; // 0xc53 PushI
	var_169_int = 35757; // 0xc54 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xc55 TObjFunc
	var_170_int = 534555; // 0xc57 PushI
	var_171_int = -1; // 0xc58 PushI
	var_172_int = 36187; // 0xc59 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xc5a TObjFunc
	return 0; // 0xc5c Return
	
Label_3165:
	var_173_int = 11224; // 0xc5d PushI
	var_174_bool = var_51_bool == var_173_int; // 0xc5e Eq
	if(var_174_bool == 0) goto Label_3188; // 0xc5f JumpB
	var_175_string = ""; // 0xc60 PushV
	var_175_string = "Penetrating"; // 0xc61 MovS
	func_3031(var_52_cvector, var_175_string); // 0xc62 NEW_2
	var_176_int = 510178; // 0xc64 PushI
	SetMessage(var_176_int); // 0xc65 TObjFunc
	ClearReplies(); // 0xc67 TObjFunc
	var_177_int = 510186; // 0xc69 PushI
	var_178_int = 11233; // 0xc6a PushI
	var_179_int = 11232; // 0xc6b PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0xc6c TObjFunc
	var_180_int = 510464; // 0xc6e PushI
	var_181_int = 11233; // 0xc6f PushI
	var_182_int = 11537; // 0xc70 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xc71 TObjFunc
	return 0; // 0xc73 Return
	
Label_3188:
	var_183_int = 11233; // 0xc74 PushI
	var_184_bool = var_51_bool == var_183_int; // 0xc75 Eq
	if(var_184_bool == 0) goto Label_3211; // 0xc76 JumpB
	var_185_string = ""; // 0xc77 PushV
	var_185_string = "Penetrating"; // 0xc78 MovS
	func_3031(var_52_cvector, var_185_string); // 0xc79 NEW_2
	var_186_int = 510187; // 0xc7b PushI
	SetMessage(var_186_int); // 0xc7c TObjFunc
	ClearReplies(); // 0xc7e TObjFunc
	var_187_int = 510179; // 0xc80 PushI
	var_188_int = 11226; // 0xc81 PushI
	var_189_int = 11225; // 0xc82 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xc83 TObjFunc
	var_190_int = 510463; // 0xc85 PushI
	var_191_int = 11226; // 0xc86 PushI
	var_192_int = 11536; // 0xc87 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xc88 TObjFunc
	return 0; // 0xc8a Return
	
Label_3211:
	var_193_int = 11226; // 0xc8b PushI
	var_194_bool = var_51_bool == var_193_int; // 0xc8c Eq
	if(var_194_bool == 0) goto Label_3234; // 0xc8d JumpB
	var_195_string = ""; // 0xc8e PushV
	var_195_string = "Suffering"; // 0xc8f MovS
	func_3031(var_52_cvector, var_195_string); // 0xc90 NEW_2
	var_196_int = 510180; // 0xc92 PushI
	SetMessage(var_196_int); // 0xc93 TObjFunc
	ClearReplies(); // 0xc95 TObjFunc
	var_197_int = 510465; // 0xc97 PushI
	var_198_int = 11541; // 0xc98 PushI
	var_199_int = 11540; // 0xc99 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xc9a TObjFunc
	var_200_int = 510470; // 0xc9c PushI
	var_201_int = 11228; // 0xc9d PushI
	var_202_int = 11547; // 0xc9e PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xc9f TObjFunc
	return 0; // 0xca1 Return
	
Label_3234:
	var_203_int = 11541; // 0xca2 PushI
	var_204_bool = var_51_bool == var_203_int; // 0xca3 Eq
	if(var_204_bool == 0) goto Label_3262; // 0xca4 JumpB
	var_205_string = ""; // 0xca5 PushV
	var_205_string = "Penetrating"; // 0xca6 MovS
	func_3031(var_52_cvector, var_205_string); // 0xca7 NEW_2
	var_206_int = 510466; // 0xca9 PushI
	SetMessage(var_206_int); // 0xcaa TObjFunc
	ClearReplies(); // 0xcac TObjFunc
	var_207_int = 510181; // 0xcae PushI
	var_208_int = 11228; // 0xcaf PushI
	var_209_int = 11227; // 0xcb0 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xcb1 TObjFunc
	var_210_int = 510467; // 0xcb3 PushI
	var_211_int = 11228; // 0xcb4 PushI
	var_212_int = 11542; // 0xcb5 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xcb6 TObjFunc
	var_213_int = 510468; // 0xcb8 PushI
	var_214_int = 11228; // 0xcb9 PushI
	var_215_int = 11543; // 0xcba PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xcbb TObjFunc
	return 0; // 0xcbd Return
	
Label_3262:
	var_216_int = 11228; // 0xcbe PushI
	var_217_bool = var_51_bool == var_216_int; // 0xcbf Eq
	if(var_217_bool == 0) goto Label_3280; // 0xcc0 JumpB
	var_218_string = ""; // 0xcc1 PushV
	var_218_string = "Grin"; // 0xcc2 MovS
	func_3031(var_52_cvector, var_218_string); // 0xcc3 NEW_2
	var_219_int = 510182; // 0xcc5 PushI
	SetMessage(var_219_int); // 0xcc6 TObjFunc
	ClearReplies(); // 0xcc8 TObjFunc
	var_220_int = 510183; // 0xcca PushI
	var_221_int = 11230; // 0xccb PushI
	var_222_int = 11229; // 0xccc PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xccd TObjFunc
	return 0; // 0xccf Return
	
Label_3280:
	var_223_int = 11230; // 0xcd0 PushI
	var_224_bool = var_51_bool == var_223_int; // 0xcd1 Eq
	if(var_224_bool == 0) goto Label_3303; // 0xcd2 JumpB
	var_225_string = ""; // 0xcd3 PushV
	var_225_string = "Grin"; // 0xcd4 MovS
	func_3031(var_52_cvector, var_225_string); // 0xcd5 NEW_2
	var_226_int = 510184; // 0xcd7 PushI
	SetMessage(var_226_int); // 0xcd8 TObjFunc
	ClearReplies(); // 0xcda TObjFunc
	var_227_int = 510185; // 0xcdc PushI
	var_228_int = 11234; // 0xcdd PushI
	var_229_int = 11231; // 0xcde PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0xcdf TObjFunc
	var_230_int = 510469; // 0xce1 PushI
	var_231_int = 11234; // 0xce2 PushI
	var_232_int = 11546; // 0xce3 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xce4 TObjFunc
	return 0; // 0xce6 Return
	
Label_3303:
	var_233_int = 11234; // 0xce7 PushI
	var_234_bool = var_51_bool == var_233_int; // 0xce8 Eq
	if(var_234_bool == 0) goto Label_3331; // 0xce9 JumpB
	var_235_string = ""; // 0xcea PushV
	var_235_string = "Penetrating"; // 0xceb MovS
	func_3031(var_52_cvector, var_235_string); // 0xcec NEW_2
	var_236_int = 510188; // 0xcee PushI
	SetMessage(var_236_int); // 0xcef TObjFunc
	ClearReplies(); // 0xcf1 TObjFunc
	var_237_int = 510189; // 0xcf3 PushI
	var_238_int = -1; // 0xcf4 PushI
	var_239_int = 11235; // 0xcf5 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xcf6 TObjFunc
	var_240_int = 510471; // 0xcf8 PushI
	var_241_int = -1; // 0xcf9 PushI
	var_242_int = 11549; // 0xcfa PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xcfb TObjFunc
	var_243_int = 510472; // 0xcfd PushI
	var_244_int = -1; // 0xcfe PushI
	var_245_int = 11550; // 0xcff PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xd00 TObjFunc
	return 0; // 0xd02 Return
	
Label_3331:
	var_246_int = 10954; // 0xd03 PushI
	var_247_bool = var_51_bool == var_246_int; // 0xd04 Eq
	if(var_247_bool == 0) goto Label_3334; // 0xd05 JumpB
	
Label_3334:
	var_248_int = 10956; // 0xd06 PushI
	var_249_bool = var_51_bool == var_248_int; // 0xd07 Eq
	if(var_249_bool == 0) goto Label_3357; // 0xd08 JumpB
	var_250_string = ""; // 0xd09 PushV
	var_250_string = "Penetrating"; // 0xd0a MovS
	func_3031(var_52_cvector, var_250_string); // 0xd0b NEW_2
	var_251_int = 509943; // 0xd0d PushI
	SetMessage(var_251_int); // 0xd0e TObjFunc
	ClearReplies(); // 0xd10 TObjFunc
	var_252_int = 509944; // 0xd12 PushI
	var_253_int = 10958; // 0xd13 PushI
	var_254_int = 10957; // 0xd14 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xd15 TObjFunc
	var_255_int = 509948; // 0xd17 PushI
	var_256_int = 10938; // 0xd18 PushI
	var_257_int = 10963; // 0xd19 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xd1a TObjFunc
	return 0; // 0xd1c Return
	
Label_3357:
	var_258_int = 10958; // 0xd1d PushI
	var_259_bool = var_51_bool == var_258_int; // 0xd1e Eq
	if(var_259_bool == 0) goto Label_3380; // 0xd1f JumpB
	var_260_string = ""; // 0xd20 PushV
	var_260_string = "Grin"; // 0xd21 MovS
	func_3031(var_52_cvector, var_260_string); // 0xd22 NEW_2
	var_261_int = 509945; // 0xd24 PushI
	SetMessage(var_261_int); // 0xd25 TObjFunc
	ClearReplies(); // 0xd27 TObjFunc
	var_262_int = 509946; // 0xd29 PushI
	var_263_int = 10938; // 0xd2a PushI
	var_264_int = 10959; // 0xd2b PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xd2c TObjFunc
	var_265_int = 509947; // 0xd2e PushI
	var_266_int = 10938; // 0xd2f PushI
	var_267_int = 10961; // 0xd30 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xd31 TObjFunc
	return 0; // 0xd33 Return
	
Label_3380:
	var_268_int = 10938; // 0xd34 PushI
	var_269_bool = var_51_bool == var_268_int; // 0xd35 Eq
	if(var_269_bool == 0) goto Label_3403; // 0xd36 JumpB
	var_270_string = ""; // 0xd37 PushV
	var_270_string = "Grin"; // 0xd38 MovS
	func_3031(var_52_cvector, var_270_string); // 0xd39 NEW_2
	var_271_int = 509928; // 0xd3b PushI
	SetMessage(var_271_int); // 0xd3c TObjFunc
	ClearReplies(); // 0xd3e TObjFunc
	var_272_int = 509929; // 0xd40 PushI
	var_273_int = 10940; // 0xd41 PushI
	var_274_int = 10939; // 0xd42 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xd43 TObjFunc
	var_275_int = 509939; // 0xd45 PushI
	var_276_int = 10942; // 0xd46 PushI
	var_277_int = 10951; // 0xd47 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xd48 TObjFunc
	return 0; // 0xd4a Return
	
Label_3403:
	var_278_int = 10940; // 0xd4b PushI
	var_279_bool = var_51_bool == var_278_int; // 0xd4c Eq
	if(var_279_bool == 0) goto Label_3426; // 0xd4d JumpB
	var_280_string = ""; // 0xd4e PushV
	var_280_string = "Grin"; // 0xd4f MovS
	func_3031(var_52_cvector, var_280_string); // 0xd50 NEW_2
	var_281_int = 509930; // 0xd52 PushI
	SetMessage(var_281_int); // 0xd53 TObjFunc
	ClearReplies(); // 0xd55 TObjFunc
	var_282_int = 509931; // 0xd57 PushI
	var_283_int = 10942; // 0xd58 PushI
	var_284_int = 10941; // 0xd59 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xd5a TObjFunc
	var_285_int = 509938; // 0xd5c PushI
	var_286_int = 10942; // 0xd5d PushI
	var_287_int = 10949; // 0xd5e PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xd5f TObjFunc
	return 0; // 0xd61 Return
	
Label_3426:
	var_288_int = 10942; // 0xd62 PushI
	var_289_bool = var_51_bool == var_288_int; // 0xd63 Eq
	if(var_289_bool == 0) goto Label_3449; // 0xd64 JumpB
	var_290_string = ""; // 0xd65 PushV
	var_290_string = "Neutral"; // 0xd66 MovS
	func_3031(var_52_cvector, var_290_string); // 0xd67 NEW_2
	var_291_int = 509932; // 0xd69 PushI
	SetMessage(var_291_int); // 0xd6a TObjFunc
	ClearReplies(); // 0xd6c TObjFunc
	var_292_int = 509933; // 0xd6e PushI
	var_293_int = 10944; // 0xd6f PushI
	var_294_int = 10943; // 0xd70 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xd71 TObjFunc
	var_295_int = 509937; // 0xd73 PushI
	var_296_int = 10944; // 0xd74 PushI
	var_297_int = 10947; // 0xd75 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xd76 TObjFunc
	return 0; // 0xd78 Return
	
Label_3449:
	var_298_int = 10944; // 0xd79 PushI
	var_299_bool = var_51_bool == var_298_int; // 0xd7a Eq
	if(var_299_bool == 0) goto Label_3472; // 0xd7b JumpB
	var_300_string = ""; // 0xd7c PushV
	var_300_string = "Neutral"; // 0xd7d MovS
	func_3031(var_52_cvector, var_300_string); // 0xd7e NEW_2
	var_301_int = 509934; // 0xd80 PushI
	SetMessage(var_301_int); // 0xd81 TObjFunc
	ClearReplies(); // 0xd83 TObjFunc
	var_302_int = 509935; // 0xd85 PushI
	var_303_int = -1; // 0xd86 PushI
	var_304_int = 10945; // 0xd87 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xd88 TObjFunc
	var_305_int = 509936; // 0xd8a PushI
	var_306_int = -1; // 0xd8b PushI
	var_307_int = 10946; // 0xd8c PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xd8d TObjFunc
	return 0; // 0xd8f Return
	
Label_3472:
	var_3_string = 1; // 0xd90 TMovB
	var_308_bool = 0; // 0xd91 PushV
	func_5225(var_308_bool); // 0xd92 NEW_2
	if(var_308_bool == 0) goto Label_3480; // 0xd94 JumpB
	lshStopAnimation(); // 0xd95 Func
	goto Label_3482; // 0xd97 Jump
	
Label_3482:
	return 0; // 0xd9a Return
	
Label_3480:
	StopAnimation(); // 0xd98 Func
	
Label_3484:
	return 0; // 0xd9c Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xe49 PushI
	if(var_53_int == 0) goto Label_3779; // 0xe4a JumpB
	func_5078(); // 0xe4c NEW_2
	var_55_int = 12392; // 0xe4e PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xe4f Eq
	if(var_56_bool == 0) goto Label_3670; // 0xe50 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xe51 PushV
	var_57_object = var_1_object; // 0xe52 MovT
	var_58_object = var_0_object; // 0xe53 MovT
	func_5418(); // 0xe54 NEW_2
	
Label_3670:
	var_61_int = 12391; // 0xe56 PushI
	var_62_bool = var_51_bool == var_61_int; // 0xe57 Eq
	if(var_62_bool == 0) goto Label_3703; // 0xe58 JumpB
	var_63_string = ""; // 0xe59 PushV
	var_63_string = "Fear"; // 0xe5a MovS
	func_3634(var_52_cvector, var_63_string); // 0xe5b NEW_2
	var_80_int = 511203; // 0xe5d PushI
	SetMessage(var_80_int); // 0xe5e TObjFunc
	ClearReplies(); // 0xe60 TObjFunc
	var_81_bool = 0; var_82_object = Obj(); // 0xe62 PushV
	var_82_object = var_1_object; // 0xe63 MovT
	func_5671(var_82_object); // 0xe64 NEW_2
	if(var_81_bool == 0) goto Label_3692; // 0xe66 JumpB
	var_89_int = 511204; // 0xe67 PushI
	var_90_int = 12393; // 0xe68 PushI
	var_91_int = 12392; // 0xe69 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xe6a TObjFunc
	
Label_3692:
	var_92_int = 515336; // 0xe6c PushI
	var_93_int = -1; // 0xe6d PushI
	var_94_int = 16559; // 0xe6e PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xe6f TObjFunc
	var_95_int = 536116; // 0xe71 PushI
	var_96_int = -1; // 0xe72 PushI
	var_97_int = 37872; // 0xe73 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xe74 TObjFunc
	return 0; // 0xe76 Return
	
Label_3703:
	var_98_int = 12393; // 0xe77 PushI
	var_99_bool = var_51_bool == var_98_int; // 0xe78 Eq
	if(var_99_bool == 0) goto Label_3721; // 0xe79 JumpB
	var_100_string = ""; // 0xe7a PushV
	var_100_string = "Fear"; // 0xe7b MovS
	func_3634(var_52_cvector, var_100_string); // 0xe7c NEW_2
	var_101_int = 511205; // 0xe7e PushI
	SetMessage(var_101_int); // 0xe7f TObjFunc
	ClearReplies(); // 0xe81 TObjFunc
	var_102_int = 536117; // 0xe83 PushI
	var_103_int = 37874; // 0xe84 PushI
	var_104_int = 37873; // 0xe85 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xe86 TObjFunc
	return 0; // 0xe88 Return
	
Label_3721:
	var_105_int = 37874; // 0xe89 PushI
	var_106_bool = var_51_bool == var_105_int; // 0xe8a Eq
	if(var_106_bool == 0) goto Label_3744; // 0xe8b JumpB
	var_107_string = ""; // 0xe8c PushV
	var_107_string = "Fear"; // 0xe8d MovS
	func_3634(var_52_cvector, var_107_string); // 0xe8e NEW_2
	var_108_int = 536118; // 0xe90 PushI
	SetMessage(var_108_int); // 0xe91 TObjFunc
	ClearReplies(); // 0xe93 TObjFunc
	var_109_int = 511206; // 0xe95 PushI
	var_110_int = 12395; // 0xe96 PushI
	var_111_int = 12394; // 0xe97 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xe98 TObjFunc
	var_112_int = 536120; // 0xe9a PushI
	var_113_int = 12395; // 0xe9b PushI
	var_114_int = 37876; // 0xe9c PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xe9d TObjFunc
	return 0; // 0xe9f Return
	
Label_3744:
	var_115_int = 12395; // 0xea0 PushI
	var_116_bool = var_51_bool == var_115_int; // 0xea1 Eq
	if(var_116_bool == 0) goto Label_3767; // 0xea2 JumpB
	var_117_string = ""; // 0xea3 PushV
	var_117_string = "Neutral"; // 0xea4 MovS
	func_3634(var_52_cvector, var_117_string); // 0xea5 NEW_2
	var_118_int = 511207; // 0xea7 PushI
	SetMessage(var_118_int); // 0xea8 TObjFunc
	ClearReplies(); // 0xeaa TObjFunc
	var_119_int = 511208; // 0xeac PushI
	var_120_int = -1; // 0xead PushI
	var_121_int = 12396; // 0xeae PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xeaf TObjFunc
	var_122_int = 511209; // 0xeb1 PushI
	var_123_int = -1; // 0xeb2 PushI
	var_124_int = 12397; // 0xeb3 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xeb4 TObjFunc
	return 0; // 0xeb6 Return
	
Label_3767:
	var_3_string = 1; // 0xeb7 TMovB
	var_125_bool = 0; // 0xeb8 PushV
	func_5225(var_125_bool); // 0xeb9 NEW_2
	if(var_125_bool == 0) goto Label_3775; // 0xebb JumpB
	lshStopAnimation(); // 0xebc Func
	goto Label_3777; // 0xebe Jump
	
Label_3777:
	return 0; // 0xec1 Return
	
Label_3775:
	StopAnimation(); // 0xebf Func
	
Label_3779:
	return 0; // 0xec3 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	var_53_int = 1; // 0xf90 PushI
	if(var_53_int == 0) goto Label_4314; // 0xf91 JumpB
	func_5078(); // 0xf93 NEW_2
	var_55_int = 12849; // 0xf95 PushI
	var_56_bool = var_52_cvector == var_55_int; // 0xf96 Eq
	if(var_56_bool == 0) goto Label_3997; // 0xf97 JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xf98 PushV
	var_57_object = var_1_object; // 0xf99 MovT
	var_58_object = var_0_object; // 0xf9a MovT
	func_5327(); // 0xf9b NEW_2
	
Label_3997:
	var_67_int = 12850; // 0xf9d PushI
	var_68_bool = var_52_cvector == var_67_int; // 0xf9e Eq
	if(var_68_bool == 0) goto Label_4005; // 0xf9f JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0xfa0 PushV
	var_69_object = var_1_object; // 0xfa1 MovT
	var_70_object = var_0_object; // 0xfa2 MovT
	func_5436(); // 0xfa3 NEW_2
	
Label_4005:
	var_73_int = 12858; // 0xfa5 PushI
	var_74_bool = var_52_cvector == var_73_int; // 0xfa6 Eq
	if(var_74_bool == 0) goto Label_4013; // 0xfa7 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xfa8 PushV
	var_75_object = var_1_object; // 0xfa9 MovT
	var_76_object = var_0_object; // 0xfaa MovT
	func_5327(); // 0xfab NEW_2
	
Label_4013:
	var_77_int = 37111; // 0xfad PushI
	var_78_bool = var_52_cvector == var_77_int; // 0xfae Eq
	if(var_78_bool == 0) goto Label_4021; // 0xfaf JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xfb0 PushV
	var_79_object = var_1_object; // 0xfb1 MovT
	var_80_object = var_0_object; // 0xfb2 MovT
	func_5327(); // 0xfb3 NEW_2
	
Label_4021:
	var_81_int = 37112; // 0xfb5 PushI
	var_82_bool = var_52_cvector == var_81_int; // 0xfb6 Eq
	if(var_82_bool == 0) goto Label_4029; // 0xfb7 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0xfb8 PushV
	var_83_object = var_1_object; // 0xfb9 MovT
	var_84_object = var_0_object; // 0xfba MovT
	func_5327(); // 0xfbb NEW_2
	
Label_4029:
	var_85_int = 37113; // 0xfbd PushI
	var_86_bool = var_52_cvector == var_85_int; // 0xfbe Eq
	if(var_86_bool == 0) goto Label_4037; // 0xfbf JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0xfc0 PushV
	var_87_object = var_1_object; // 0xfc1 MovT
	var_88_object = var_0_object; // 0xfc2 MovT
	func_5327(); // 0xfc3 NEW_2
	
Label_4037:
	var_89_int = 12840; // 0xfc5 PushI
	var_90_bool = var_51_bool == var_89_int; // 0xfc6 Eq
	if(var_90_bool == 0) goto Label_4102; // 0xfc7 JumpB
	var_91_string = ""; // 0xfc8 PushV
	var_91_string = "Penetrating"; // 0xfc9 MovS
	func_3961(var_52_cvector, var_91_string); // 0xfca NEW_2
	var_108_int = 511641; // 0xfcc PushI
	SetMessage(var_108_int); // 0xfcd TObjFunc
	ClearReplies(); // 0xfcf TObjFunc
	var_109_bool = 0; var_110_object = Obj(); // 0xfd1 PushV
	var_110_object = var_1_object; // 0xfd2 MovT
	func_5551(var_110_object); // 0xfd3 NEW_2
	if(var_109_bool == 0) goto Label_4059; // 0xfd5 JumpB
	var_115_int = 511642; // 0xfd6 PushI
	var_116_int = 12842; // 0xfd7 PushI
	var_117_int = 12841; // 0xfd8 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xfd9 TObjFunc
	
Label_4059:
	var_118_bool = 0; // 0xfdb PushV
	var_118_bool = 1; // 0xfdc MovB
	var_119_bool = 0; // 0xfdd PushV
	var_119_bool = 0; // 0xfde MovB
	var_120_bool = 0; var_121_object = Obj(); // 0xfdf PushV
	var_121_object = var_1_object; // 0xfe0 MovT
	func_5551(var_121_object); // 0xfe1 NEW_2
	if(var_120_bool == 0) goto Label_4074; // 0xfe3 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0xfe4 PushV
	var_123_object = var_1_object; // 0xfe5 MovT
	func_5707(var_123_object); // 0xfe6 NEW_2
	if(var_122_bool == 0) goto Label_4074; // 0xfe8 JumpB
	var_119_bool = 1; // 0xfe9 MovB
	
Label_4074:
	if(var_119_bool == 0) goto Label_4090; // 0xfea JumpB
	var_128_bool = 0; // 0xfeb PushV
	var_128_bool = 0; // 0xfec MovB
	var_129_bool = 0; var_130_object = Obj(); // 0xfed PushV
	var_130_object = var_1_object; // 0xfee MovT
	func_5563(var_130_object); // 0xfef NEW_2
	if(var_129_bool == 0) goto Label_4088; // 0xff1 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0xff2 PushV
	var_136_object = var_1_object; // 0xff3 MovT
	func_5707(var_136_object); // 0xff4 NEW_2
	if(var_135_bool == 0) goto Label_4088; // 0xff6 JumpB
	var_128_bool = 1; // 0xff7 MovB
	
Label_4088:
	if(var_128_bool == 0) goto Label_4090; // 0xff8 JumpB
	var_118_bool = 0; // 0xff9 MovB
	
Label_4090:
	if(var_118_bool == 0) goto Label_4096; // 0xffa JumpB
	var_137_int = 511651; // 0xffb PushI
	var_138_int = 12851; // 0xffc PushI
	var_139_int = 12850; // 0xffd PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xffe TObjFunc
	
Label_4096:
	var_140_int = 511660; // 0x1000 PushI
	var_141_int = -1; // 0x1001 PushI
	var_142_int = 12859; // 0x1002 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x1003 TObjFunc
	return 0; // 0x1005 Return
	
Label_4102:
	var_143_int = 12851; // 0x1006 PushI
	var_144_bool = var_51_bool == var_143_int; // 0x1007 Eq
	if(var_144_bool == 0) goto Label_4120; // 0x1008 JumpB
	var_145_string = ""; // 0x1009 PushV
	var_145_string = "Suffering"; // 0x100a MovS
	func_3961(var_52_cvector, var_145_string); // 0x100b NEW_2
	var_146_int = 511652; // 0x100d PushI
	SetMessage(var_146_int); // 0x100e TObjFunc
	ClearReplies(); // 0x1010 TObjFunc
	var_147_int = 511653; // 0x1012 PushI
	var_148_int = 12853; // 0x1013 PushI
	var_149_int = 12852; // 0x1014 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1015 TObjFunc
	return 0; // 0x1017 Return
	
Label_4120:
	var_150_int = 12853; // 0x1018 PushI
	var_151_bool = var_51_bool == var_150_int; // 0x1019 Eq
	if(var_151_bool == 0) goto Label_4138; // 0x101a JumpB
	var_152_string = ""; // 0x101b PushV
	var_152_string = "Suffering"; // 0x101c MovS
	func_3961(var_52_cvector, var_152_string); // 0x101d NEW_2
	var_153_int = 511654; // 0x101f PushI
	SetMessage(var_153_int); // 0x1020 TObjFunc
	ClearReplies(); // 0x1022 TObjFunc
	var_154_int = 511655; // 0x1024 PushI
	var_155_int = 12855; // 0x1025 PushI
	var_156_int = 12854; // 0x1026 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1027 TObjFunc
	return 0; // 0x1029 Return
	
Label_4138:
	var_157_int = 12855; // 0x102a PushI
	var_158_bool = var_51_bool == var_157_int; // 0x102b Eq
	if(var_158_bool == 0) goto Label_4161; // 0x102c JumpB
	var_159_string = ""; // 0x102d PushV
	var_159_string = "Suffering"; // 0x102e MovS
	func_3961(var_52_cvector, var_159_string); // 0x102f NEW_2
	var_160_int = 511656; // 0x1031 PushI
	SetMessage(var_160_int); // 0x1032 TObjFunc
	ClearReplies(); // 0x1034 TObjFunc
	var_161_int = 511657; // 0x1036 PushI
	var_162_int = 12857; // 0x1037 PushI
	var_163_int = 12856; // 0x1038 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1039 TObjFunc
	var_164_int = 535425; // 0x103b PushI
	var_165_int = 37107; // 0x103c PushI
	var_166_int = 37105; // 0x103d PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x103e TObjFunc
	return 0; // 0x1040 Return
	
Label_4161:
	var_167_int = 12857; // 0x1041 PushI
	var_168_bool = var_51_bool == var_167_int; // 0x1042 Eq
	if(var_168_bool == 0) goto Label_4184; // 0x1043 JumpB
	var_169_string = ""; // 0x1044 PushV
	var_169_string = "Neutral"; // 0x1045 MovS
	func_3961(var_52_cvector, var_169_string); // 0x1046 NEW_2
	var_170_int = 511658; // 0x1048 PushI
	SetMessage(var_170_int); // 0x1049 TObjFunc
	ClearReplies(); // 0x104b TObjFunc
	var_171_int = 535426; // 0x104d PushI
	var_172_int = 37107; // 0x104e PushI
	var_173_int = 37106; // 0x104f PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1050 TObjFunc
	var_174_int = 535432; // 0x1052 PushI
	var_175_int = -1; // 0x1053 PushI
	var_176_int = 37113; // 0x1054 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1055 TObjFunc
	return 0; // 0x1057 Return
	
Label_4184:
	var_177_int = 37107; // 0x1058 PushI
	var_178_bool = var_51_bool == var_177_int; // 0x1059 Eq
	if(var_178_bool == 0) goto Label_4207; // 0x105a JumpB
	var_179_string = ""; // 0x105b PushV
	var_179_string = "Neutral"; // 0x105c MovS
	func_3961(var_52_cvector, var_179_string); // 0x105d NEW_2
	var_180_int = 535427; // 0x105f PushI
	SetMessage(var_180_int); // 0x1060 TObjFunc
	ClearReplies(); // 0x1062 TObjFunc
	var_181_int = 511659; // 0x1064 PushI
	var_182_int = -1; // 0x1065 PushI
	var_183_int = 12858; // 0x1066 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1067 TObjFunc
	var_184_int = 535428; // 0x1069 PushI
	var_185_int = 37110; // 0x106a PushI
	var_186_int = 37109; // 0x106b PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x106c TObjFunc
	return 0; // 0x106e Return
	
Label_4207:
	var_187_int = 37110; // 0x106f PushI
	var_188_bool = var_51_bool == var_187_int; // 0x1070 Eq
	if(var_188_bool == 0) goto Label_4230; // 0x1071 JumpB
	var_189_string = ""; // 0x1072 PushV
	var_189_string = "Suffering"; // 0x1073 MovS
	func_3961(var_52_cvector, var_189_string); // 0x1074 NEW_2
	var_190_int = 535429; // 0x1076 PushI
	SetMessage(var_190_int); // 0x1077 TObjFunc
	ClearReplies(); // 0x1079 TObjFunc
	var_191_int = 535430; // 0x107b PushI
	var_192_int = -1; // 0x107c PushI
	var_193_int = 37111; // 0x107d PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x107e TObjFunc
	var_194_int = 535431; // 0x1080 PushI
	var_195_int = -1; // 0x1081 PushI
	var_196_int = 37112; // 0x1082 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1083 TObjFunc
	return 0; // 0x1085 Return
	
Label_4230:
	var_197_int = 12842; // 0x1086 PushI
	var_198_bool = var_51_bool == var_197_int; // 0x1087 Eq
	if(var_198_bool == 0) goto Label_4248; // 0x1088 JumpB
	var_199_string = ""; // 0x1089 PushV
	var_199_string = "Penetrating"; // 0x108a MovS
	func_3961(var_52_cvector, var_199_string); // 0x108b NEW_2
	var_200_int = 511643; // 0x108d PushI
	SetMessage(var_200_int); // 0x108e TObjFunc
	ClearReplies(); // 0x1090 TObjFunc
	var_201_int = 511644; // 0x1092 PushI
	var_202_int = 12844; // 0x1093 PushI
	var_203_int = 12843; // 0x1094 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1095 TObjFunc
	return 0; // 0x1097 Return
	
Label_4248:
	var_204_int = 12844; // 0x1098 PushI
	var_205_bool = var_51_bool == var_204_int; // 0x1099 Eq
	if(var_205_bool == 0) goto Label_4266; // 0x109a JumpB
	var_206_string = ""; // 0x109b PushV
	var_206_string = "Neutral"; // 0x109c MovS
	func_3961(var_52_cvector, var_206_string); // 0x109d NEW_2
	var_207_int = 511645; // 0x109f PushI
	SetMessage(var_207_int); // 0x10a0 TObjFunc
	ClearReplies(); // 0x10a2 TObjFunc
	var_208_int = 511646; // 0x10a4 PushI
	var_209_int = 12846; // 0x10a5 PushI
	var_210_int = 12845; // 0x10a6 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x10a7 TObjFunc
	return 0; // 0x10a9 Return
	
Label_4266:
	var_211_int = 12846; // 0x10aa PushI
	var_212_bool = var_51_bool == var_211_int; // 0x10ab Eq
	if(var_212_bool == 0) goto Label_4284; // 0x10ac JumpB
	var_213_string = ""; // 0x10ad PushV
	var_213_string = "Neutral"; // 0x10ae MovS
	func_3961(var_52_cvector, var_213_string); // 0x10af NEW_2
	var_214_int = 511647; // 0x10b1 PushI
	SetMessage(var_214_int); // 0x10b2 TObjFunc
	ClearReplies(); // 0x10b4 TObjFunc
	var_215_int = 511648; // 0x10b6 PushI
	var_216_int = 12848; // 0x10b7 PushI
	var_217_int = 12847; // 0x10b8 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x10b9 TObjFunc
	return 0; // 0x10bb Return
	
Label_4284:
	var_218_int = 12848; // 0x10bc PushI
	var_219_bool = var_51_bool == var_218_int; // 0x10bd Eq
	if(var_219_bool == 0) goto Label_4302; // 0x10be JumpB
	var_220_string = ""; // 0x10bf PushV
	var_220_string = "Neutral"; // 0x10c0 MovS
	func_3961(var_52_cvector, var_220_string); // 0x10c1 NEW_2
	var_221_int = 511649; // 0x10c3 PushI
	SetMessage(var_221_int); // 0x10c4 TObjFunc
	ClearReplies(); // 0x10c6 TObjFunc
	var_222_int = 511650; // 0x10c8 PushI
	var_223_int = -1; // 0x10c9 PushI
	var_224_int = 12849; // 0x10ca PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x10cb TObjFunc
	return 0; // 0x10cd Return
	
Label_4302:
	var_3_string = 1; // 0x10ce TMovB
	var_225_bool = 0; // 0x10cf PushV
	func_5225(var_225_bool); // 0x10d0 NEW_2
	if(var_225_bool == 0) goto Label_4310; // 0x10d2 JumpB
	lshStopAnimation(); // 0x10d3 Func
	goto Label_4312; // 0x10d5 Jump
	
Label_4312:
	return 0; // 0x10d8 Return
	
Label_4310:
	StopAnimation(); // 0x10d6 Func
	
Label_4314:
	return 0; // 0x10da Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_cvector)
{
	var_53_int = 1; // 0x117d PushI
	if(var_53_int == 0) goto Label_4517; // 0x117e JumpB
	func_5078(); // 0x1180 NEW_2
	var_55_int = 42557; // 0x1182 PushI
	var_56_bool = var_51_int == var_55_int; // 0x1183 Eq
	if(var_56_bool == 0) goto Label_4505; // 0x1184 JumpB
	var_57_string = ""; // 0x1185 PushV
	var_57_string = "Neutral"; // 0x1186 MovS
	func_4454(var_52_cvector, var_57_string); // 0x1187 NEW_2
	var_74_int = 540548; // 0x1189 PushI
	SetMessage(var_74_int); // 0x118a TObjFunc
	ClearReplies(); // 0x118c TObjFunc
	var_75_int = 540549; // 0x118e PushI
	var_76_int = -1; // 0x118f PushI
	var_77_int = 42558; // 0x1190 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x1191 TObjFunc
	var_78_int = 540797; // 0x1193 PushI
	var_79_int = -1; // 0x1194 PushI
	var_80_int = 42846; // 0x1195 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x1196 TObjFunc
	return 0; // 0x1198 Return
	
Label_4505:
	var_3_string = 1; // 0x1199 TMovB
	var_81_bool = 0; // 0x119a PushV
	func_5225(var_81_bool); // 0x119b NEW_2
	if(var_81_bool == 0) goto Label_4513; // 0x119d JumpB
	lshStopAnimation(); // 0x119e Func
	goto Label_4515; // 0x11a0 Jump
	
Label_4515:
	return 0; // 0x11a3 Return
	
Label_4513:
	StopAnimation(); // 0x11a1 Func
	
Label_4517:
	return 0; // 0x11a5 Return
}


task_20_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_int)
{
	var_52_int = 10; // 0x11f3 PushI
	var_53_bool = var_51_int == var_52_int; // 0x11f4 Eq
	if(var_53_bool == 0) goto Label_4631; // 0x11f5 JumpB
	func_4590(); // 0x11f7 NEW_2
	var_55_bool = 0; // 0x11f9 PushV
	var_55_bool = 0; // 0x11fa MovB
	var_56_bool = 0; // 0x11fb PushV
	func_4804(var_56_bool); // 0x11fc NEW_2
	if(var_56_bool == 0) goto Label_4612; // 0x11fe JumpB
	var_59_bool = 0; // 0x11ff PushV
	func_4559(var_59_bool); // 0x1200 NEW_2
	if(var_59_bool == 0) goto Label_4612; // 0x1202 JumpB
	var_55_bool = 1; // 0x1203 MovB
	
Label_4612:
	if(var_55_bool == 0) goto Label_4625; // 0x1204 JumpB
	var_76_bool = 0; // 0x1205 PushV
	func_4539(var_76_bool); // 0x1206 NEW_2
	if(var_76_bool == 0) goto Label_4624; // 0x1208 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x1209 PushV
	var_97_object = Obj(); // 0x120a PushV
	func_5085(var_97_object); // 0x120b NEW_2
	var_96_object = var_97_object; // 0x120c Mov
	func_4952(var_96_object); // 0x120e NEW_2
	
Label_4624:
	goto Label_4631; // 0x1210 Jump
	
Label_4631:
	return 0; // 0x1217 Return
	
Label_4625:
	func_4554(var_51_int); // 0x1212 NEW_2
	func_4581(); // 0x1215 NEW_2
}


task_20_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	func_4772(); // 0x1219 NEW_2
	func_4590(); // 0x121c NEW_2
	lshStopSpeech(); // 0x121e Func
	lshStopAnimation(); // 0x1220 Func
	StopAsync(); // 0x1222 Func
	Hold(); // 0x1224 Func
	return 0; // 0x1226 Return
}


task_20_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	StopGroup0(); // 0x1227 Func
	func_4590(); // 0x122a NEW_2
	var_52_string = ""; // 0x122c PushV
	var_52_string = "Neutral"; // 0x122d MovS
	func_5032(var_52_string); // 0x122e NEW_2
	func_4581(); // 0x1231 NEW_2
	return 0; // 0x1233 Return
}


task_20_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_bool)
{
	var_52_bool = var_51_bool; // 0x1235 Push
	if(var_52_bool == 0) goto Label_4667; // 0x1236 JumpB
	func_4581(); // 0x1238 NEW_2
	goto Label_4671; // 0x123a Jump
	
Label_4671:
	return 0; // 0x123f Return
	
Label_4667:
	var_58_string = ""; // 0x123b PushV
	var_58_string = "Neutral"; // 0x123c MovS
	func_5032(var_58_string); // 0x123d NEW_2
}


task_20_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0; // 0x1240 PushV
	IsOverrideActive(var_53_bool); // 0x1241 Func
	var_54_bool = var_53_bool == 0; // 0x1243 Not
	if(var_54_bool == 0) goto Label_4700; // 0x1244 JumpB
	EventDisable(0); // 0x1245 EventDisable
	func_4772(); // 0x1247 NEW_2
	var_55_bool = 0; var_56_object = Obj(); // 0x1249 PushV
	var_56_object = var_51_object; // 0x124a Mov
	func_4795(var_56_object); // 0x124b NEW_2
	EventEnable(0); // 0x124d EventEnable
	var_69_object = Obj(); // 0x124e PushV
	var_69_object = var_51_object; // 0x124f Mov
	func_5900(var_69_object); // 0x1250 NEW_2
	var_1098_string = ""; // 0x1252 PushV
	var_1098_string = "Neutral"; // 0x1253 MovS
	func_5032(var_1098_string); // 0x1254 NEW_2
	func_4590(); // 0x1257 NEW_2
	func_4581(); // 0x125a NEW_2
	
Label_4700:
	return 2; // 0x125c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	var_51_bool = GlobalVars[1]; // 0x11a6 PushGE
	var_51_bool = 0; // 0x11a7 MovB
	GlobalVars[1] = var_51_bool; // 0x11a8 PopGE
	func_4525(var_50_cvector); // 0x11aa NEW_2
	return 0; // 0x11ac Return
}


func_1536(var_2_object, var_249_string)
{
	var_250_bool = 0; // 0x601 PushV
	func_5225(var_250_bool); // 0x602 NEW_2
	var_251_bool = var_250_bool == 0; // 0x604 Not
	if(var_251_bool == 0) goto Label_1543; // 0x605 JumpB
	return 0; // 0x606 Return
	
Label_1543:
	var_252_bool = var_249_string == var_2_object; // 0x607 Eq
	if(var_252_bool == 0) goto Label_1546; // 0x608 JumpB
	return 0; // 0x609 Return
	
Label_1546:
	var_253_string = ""; var_254_bool = 0; // 0x60a PushV
	var_253_string = var_249_string; // 0x60b Mov
	var_255_string = ""; // 0x60c PushS
	var_256_bool = var_249_string == var_255_string; // 0x60d Eq
	if(var_256_bool == 0) goto Label_1553; // 0x60e JumpB
	var_254_bool = 0; // 0x60f MovB
	goto Label_1554; // 0x610 Jump
	
Label_1554:
	func_5048(var_253_string, var_254_bool); // 0x612 NEW_2
	var_2_object = var_249_string; // 0x614 TMov
	return 0; // 0x615 Return
	
Label_1553:
	var_254_bool = 1; // 0x611 MovB
}


func_0(var_0_object, var_306_int, var_307_object)
{
	var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; var_313_object = Obj(); var_314_bool = 0; var_315_int = 0; var_316_bool = 0; // 0x0 PushV
	var_0_object = var_307_object; // 0x1 TMov
	var_317_bool = 0; var_318_object = Obj(); var_319_float = 0; // 0x2 PushV
	var_318_object = var_307_object; // 0x3 Mov
	var_319_float = 70.0; // 0x4 MovF
	func_4809(var_318_object, var_319_float); // 0x5 NEW_2
	var_320_bool = var_317_bool == 0; // 0x7 Not
	if(var_320_bool == 0) goto Label_11; // 0x8 JumpB
	var_306_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_313_object); // 0xb Func
	var_321_int = 0; // 0xd PushV
	func_5219(var_321_int); // 0xe NEW_2
	SetNPCName(var_321_int); // 0x10 ObjFunc
	var_322_int = 0; // 0x12 PushV
	func_5217(var_322_int); // 0x13 NEW_2
	SetNPCDescription(var_322_int); // 0x15 ObjFunc
	var_323_string = ""; // 0x17 PushV
	func_5221(var_323_string); // 0x18 NEW_2
	SetPhoto(var_323_string); // 0x1a ObjFunc
	var_324_string = ""; // 0x1c PushV
	func_5223(var_324_string); // 0x1d NEW_2
	SetPhoto2(var_324_string); // 0x1f ObjFunc
	var_325_int = 0; // 0x21 PushV
	func_5883(var_325_int); // 0x22 NEW_2
	SetPlayerName(var_325_int); // 0x24 ObjFunc
	var_315_int = -1; // 0x26 MovI
	IsOverrideActive(var_314_bool); // 0x27 Func
	var_326_bool = var_314_bool; // 0x29 Push
	if(var_326_bool == 0) goto Label_45; // 0x2a JumpB
	var_306_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_313_object); // 0x2d Func
	var_327_bool = 0; var_328_object = Obj(); // 0x2f PushV
	var_329_object = Obj(); // 0x30 PushV
	func_5085(var_329_object); // 0x31 NEW_2
	var_328_object = var_329_object; // 0x32 Mov
	func_4894(var_327_bool, var_328_object); // 0x34 NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x36 PushV
	var_330_object = var_307_object; // 0x37 Mov
	var_331_object = var_313_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_316_bool); // 0x3d ObjFunc
	
Label_63:
	var_431_bool = var_316_bool == 0; // 0x3f Not
	if(var_431_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_316_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_432_object = Obj(); // 0x46 PushV
	var_432_object = var_307_object; // 0x47 Mov
	func_4877(); // 0x48 NEW_2
	StopDialog(var_313_object); // 0x4a Func
	GetReturnValue(var_315_int); // 0x4c ObjFunc
	var_306_int = var_315_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_5635(var_877_bool)
{
	var_879_int = 0; var_880_string = ""; // 0x1604 PushV
	var_880_string = "d6q01"; // 0x1605 MovS
	func_5101(var_879_int, var_880_string); // 0x1606 NEW_2
	var_881_int = 3; // 0x1608 PushI
	var_882_bool = var_879_int == var_881_int; // 0x1609 Eq
	if(var_882_bool == 0) goto Label_5645; // 0x160a JumpB
	var_877_bool = 1; // 0x160b MovB
	return 0; // 0x160c Return
	
Label_5645:
	var_877_bool = 0; // 0x160d MovB
	return 0; // 0x160e Return
}


func_5129(var_66_object, var_67_int)
{
	var_68_int = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0; // 0x1409 PushV
	GetItemID(var_71_int); // 0x140a ObjFunc
	var_74_string = "Category"; // 0x140c PushS
	GetInvItemProperty(var_72_int, var_71_int, var_74_string); // 0x140d Func
	AddItem(var_73_bool, var_66_object, var_72_int, var_67_int); // 0x140f ObjFunc
	var_75_bool = var_73_bool == 0; // 0x1411 Not
	if(var_75_bool == 0) goto Label_5142; // 0x1412 JumpB
	DropItems(var_66_object, var_67_int); // 0x1413 ObjFunc
	goto Label_5147; // 0x1415 Jump
	
Label_5147:
	return 6; // 0x141b Return
	
Label_5142:
	var_76_int = 0; var_77_int = 0; // 0x1416 PushV
	var_76_int = var_71_int; // 0x1417 Mov
	var_77_int = var_67_int; // 0x1418 Mov
	func_5117(var_76_int, var_77_int); // 0x1419 NEW_2
}


func_5900(var_69_object)
{
	var_70_bool = GlobalVars[1]; // 0x170d PushGE
	var_71_bool = var_70_bool == 0; // 0x170e Not
	if(var_71_bool == 0) goto Label_5913; // 0x170f JumpB
	var_72_int = 0; var_73_object = Obj(); // 0x1710 PushV
	var_73_object = var_69_object; // 0x1711 Mov
	TaskCall(6); // 0x1712 TaskCall
	func_1387(var_74_object, var_72_int, var_73_object); // 0x1713 NEW_2
	TaskReturn(); // 0x1714 TaskReturn
	var_302_bool = GlobalVars[1]; // 0x1716 PushGE
	var_302_bool = 1; // 0x1717 MovB
	GlobalVars[1] = var_302_bool; // 0x1718 PopGE
	
Label_5913:
	var_303_bool = 0; var_304_int = 0; // 0x1719 PushV
	var_304_int = 1; // 0x171a MovI
	func_5187(var_303_bool, var_304_int); // 0x171b NEW_2
	if(var_303_bool == 0) goto Label_5925; // 0x171d JumpB
	var_306_int = 0; var_307_object = Obj(); // 0x171e PushV
	var_307_object = var_69_object; // 0x171f Mov
	TaskCall(0); // 0x1720 TaskCall
	func_0(var_308_object, var_306_int, var_307_object); // 0x1721 NEW_2
	TaskReturn(); // 0x1722 TaskReturn
	return 0; // 0x1724 Return
	
Label_5925:
	var_433_bool = 0; var_434_int = 0; // 0x1725 PushV
	var_434_int = 2; // 0x1726 MovI
	func_5187(var_433_bool, var_434_int); // 0x1727 NEW_2
	if(var_433_bool == 0) goto Label_5937; // 0x1729 JumpB
	var_435_int = 0; var_436_object = Obj(); // 0x172a PushV
	var_436_object = var_69_object; // 0x172b Mov
	TaskCall(10); // 0x172c TaskCall
	func_2426(var_437_object, var_435_int, var_436_object); // 0x172d NEW_2
	TaskReturn(); // 0x172e TaskReturn
	return 0; // 0x1730 Return
	
Label_5937:
	var_533_bool = 0; var_534_int = 0; // 0x1731 PushV
	var_534_int = 3; // 0x1732 MovI
	func_5187(var_533_bool, var_534_int); // 0x1733 NEW_2
	if(var_533_bool == 0) goto Label_5949; // 0x1735 JumpB
	var_535_int = 0; var_536_object = Obj(); // 0x1736 PushV
	var_536_object = var_69_object; // 0x1737 Mov
	TaskCall(12); // 0x1738 TaskCall
	func_2848(var_537_object, var_535_int, var_536_object); // 0x1739 NEW_2
	TaskReturn(); // 0x173a TaskReturn
	return 0; // 0x173c Return
	
Label_5949:
	var_635_bool = 0; var_636_int = 0; // 0x173d PushV
	var_636_int = 4; // 0x173e MovI
	func_5187(var_635_bool, var_636_int); // 0x173f NEW_2
	if(var_635_bool == 0) goto Label_5961; // 0x1741 JumpB
	var_637_int = 0; var_638_object = Obj(); // 0x1742 PushV
	var_638_object = var_69_object; // 0x1743 Mov
	TaskCall(14); // 0x1744 TaskCall
	func_3485(var_639_object, var_637_int, var_638_object); // 0x1745 NEW_2
	TaskReturn(); // 0x1746 TaskReturn
	return 0; // 0x1748 Return
	
Label_5961:
	var_702_bool = 0; var_703_int = 0; // 0x1749 PushV
	var_703_int = 5; // 0x174a MovI
	func_5187(var_702_bool, var_703_int); // 0x174b NEW_2
	if(var_702_bool == 0) goto Label_5973; // 0x174d JumpB
	var_704_int = 0; var_705_object = Obj(); // 0x174e PushV
	var_705_object = var_69_object; // 0x174f Mov
	TaskCall(16); // 0x1750 TaskCall
	func_3780(var_706_object, var_704_int, var_705_object); // 0x1751 NEW_2
	TaskReturn(); // 0x1752 TaskReturn
	return 0; // 0x1754 Return
	
Label_5973:
	var_788_bool = 0; var_789_int = 0; // 0x1755 PushV
	var_789_int = 6; // 0x1756 MovI
	func_5187(var_788_bool, var_789_int); // 0x1757 NEW_2
	if(var_788_bool == 0) goto Label_5985; // 0x1759 JumpB
	var_790_int = 0; var_791_object = Obj(); // 0x175a PushV
	var_791_object = var_69_object; // 0x175b Mov
	TaskCall(8); // 0x175c TaskCall
	func_1679(var_792_object, var_790_int, var_791_object); // 0x175d NEW_2
	TaskReturn(); // 0x175e TaskReturn
	return 0; // 0x1760 Return
	
Label_5985:
	var_901_bool = 0; var_902_int = 0; // 0x1761 PushV
	var_902_int = 10; // 0x1762 MovI
	func_5187(var_901_bool, var_902_int); // 0x1763 NEW_2
	if(var_901_bool == 0) goto Label_5997; // 0x1765 JumpB
	var_903_int = 0; var_904_object = Obj(); // 0x1766 PushV
	var_904_object = var_69_object; // 0x1767 Mov
	TaskCall(2); // 0x1768 TaskCall
	func_632(var_905_object, var_903_int, var_904_object); // 0x1769 NEW_2
	TaskReturn(); // 0x176a TaskReturn
	return 0; // 0x176c Return
	
Label_5997:
	var_981_bool = 0; var_982_int = 0; // 0x176d PushV
	var_982_int = 12; // 0x176e MovI
	func_5187(var_981_bool, var_982_int); // 0x176f NEW_2
	if(var_981_bool == 0) goto Label_6009; // 0x1771 JumpB
	var_983_int = 0; var_984_object = Obj(); // 0x1772 PushV
	var_984_object = var_69_object; // 0x1773 Mov
	TaskCall(4); // 0x1774 TaskCall
	func_1128(var_985_object, var_983_int, var_984_object); // 0x1775 NEW_2
	TaskReturn(); // 0x1776 TaskReturn
	return 0; // 0x1778 Return
	
Label_6009:
	var_1042_int = 0; var_1043_object = Obj(); // 0x1779 PushV
	var_1043_object = var_69_object; // 0x177a Mov
	TaskCall(18); // 0x177b TaskCall
	func_4315(var_1044_object, var_1042_int, var_1043_object); // 0x177c NEW_2
	TaskReturn(); // 0x177d TaskReturn
	return 0; // 0x177f Return
}


func_4877()
{
	var_296_bool = 0; var_297_bool = 0; // 0x130d PushV
	CameraSwitchToNormal(); // 0x130e Func
	var_298_bool = 0; // 0x1310 PushV
	func_5225(var_298_bool); // 0x1311 NEW_2
	if(var_298_bool == 0) goto Label_4885; // 0x1313 JumpB
	goto Label_4893; // 0x1314 Jump
	
Label_4893:
	return 2; // 0x131d Return
	
Label_4885:
	var_299_string = "head"; // 0x1315 PushS
	HasAnimationTrack(var_297_bool, var_299_string); // 0x1316 Func
	var_300_bool = var_297_bool; // 0x1318 Push
	if(var_300_bool == 0) goto Label_4893; // 0x1319 JumpB
	var_301_string = "head"; // 0x131a PushS
	UnlookAsync(var_301_string); // 0x131b Func
}


func_5647(var_870_bool)
{
	var_872_int = 0; var_873_string = ""; // 0x1610 PushV
	var_873_string = "ood6Katerina3"; // 0x1611 MovS
	func_5101(var_872_int, var_873_string); // 0x1612 NEW_2
	var_874_int = 0; // 0x1614 PushI
	var_875_bool = var_872_int == var_874_int; // 0x1615 Eq
	if(var_875_bool == 0) goto Label_5657; // 0x1616 JumpB
	var_870_bool = 1; // 0x1617 MovB
	return 0; // 0x1618 Return
	
Label_5657:
	var_870_bool = 0; // 0x1619 MovB
	return 0; // 0x161a Return
}


func_5395()
{
	var_143_string = "ood6Katerina3"; // 0x1514 PushS
	var_144_int = 1; // 0x1515 PushI
	SetVariable(var_143_string, var_144_int); // 0x1516 Func
	return 0; // 0x1518 Return
}


func_3861(var_0_object, var_1_object, var_2_object, var_3_string, var_728_object, var_729_object)
{
	var_0_object = var_729_object; // 0xf16 TMov
	var_1_object = var_728_object; // 0xf17 TMov
	var_3_string = 0; // 0xf18 TMovB
	var_734_int = 1; // 0xf19 PushI
	if(var_734_int == 0) goto Label_3931; // 0xf1a JumpB
	var_735_string = ""; // 0xf1b PushV
	var_735_string = "Penetrating"; // 0xf1c MovS
	func_3961(var_729_object, var_735_string); // 0xf1d NEW_2
	var_743_int = 511641; // 0xf1f PushI
	SetMessage(var_743_int); // 0xf20 TObjFunc
	ClearReplies(); // 0xf22 TObjFunc
	var_744_bool = 0; var_745_object = Obj(); // 0xf24 PushV
	var_745_object = var_1_object; // 0xf25 MovT
	func_5551(var_745_object); // 0xf26 NEW_2
	if(var_744_bool == 0) goto Label_3886; // 0xf28 JumpB
	var_750_int = 511642; // 0xf29 PushI
	var_751_int = 12842; // 0xf2a PushI
	var_752_int = 12841; // 0xf2b PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0xf2c TObjFunc
	
Label_3886:
	var_753_bool = 0; // 0xf2e PushV
	var_753_bool = 1; // 0xf2f MovB
	var_754_bool = 0; // 0xf30 PushV
	var_754_bool = 0; // 0xf31 MovB
	var_755_bool = 0; var_756_object = Obj(); // 0xf32 PushV
	var_756_object = var_1_object; // 0xf33 MovT
	func_5551(var_756_object); // 0xf34 NEW_2
	if(var_755_bool == 0) goto Label_3901; // 0xf36 JumpB
	var_757_bool = 0; var_758_object = Obj(); // 0xf37 PushV
	var_758_object = var_1_object; // 0xf38 MovT
	func_5707(var_758_object); // 0xf39 NEW_2
	if(var_757_bool == 0) goto Label_3901; // 0xf3b JumpB
	var_754_bool = 1; // 0xf3c MovB
	
Label_3901:
	if(var_754_bool == 0) goto Label_3917; // 0xf3d JumpB
	var_763_bool = 0; // 0xf3e PushV
	var_763_bool = 0; // 0xf3f MovB
	var_764_bool = 0; var_765_object = Obj(); // 0xf40 PushV
	var_765_object = var_1_object; // 0xf41 MovT
	func_5563(var_765_object); // 0xf42 NEW_2
	if(var_764_bool == 0) goto Label_3915; // 0xf44 JumpB
	var_770_bool = 0; var_771_object = Obj(); // 0xf45 PushV
	var_771_object = var_1_object; // 0xf46 MovT
	func_5707(var_771_object); // 0xf47 NEW_2
	if(var_770_bool == 0) goto Label_3915; // 0xf49 JumpB
	var_763_bool = 1; // 0xf4a MovB
	
Label_3915:
	if(var_763_bool == 0) goto Label_3917; // 0xf4b JumpB
	var_753_bool = 0; // 0xf4c MovB
	
Label_3917:
	if(var_753_bool == 0) goto Label_3923; // 0xf4d JumpB
	var_772_int = 511651; // 0xf4e PushI
	var_773_int = 12851; // 0xf4f PushI
	var_774_int = 12850; // 0xf50 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xf51 TObjFunc
	
Label_3923:
	var_775_int = 511660; // 0xf53 PushI
	var_776_int = -1; // 0xf54 PushI
	var_777_int = 12859; // 0xf55 PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xf56 TObjFunc
	goto Label_3931; // 0xf58 Jump
	
Label_3931:
	var_778_bool = 0; // 0xf5b PushV
	func_5225(var_778_bool); // 0xf5c NEW_2
	if(var_778_bool == 0) goto Label_3946; // 0xf5e JumpB
	
Label_3935:
	lshWaitForAnimEnd(); // 0xf5f Func
	var_779_string = var_3_string; // 0xf61 PushT
	if(var_779_string == 0) goto Label_3940; // 0xf62 JumpB
	goto Label_3945; // 0xf63 Jump
	
Label_3945:
	goto Label_3960; // 0xf69 Jump
	
Label_3960:
	return 0; // 0xf78 Return
	
Label_3940:
	var_780_string = ""; // 0xf64 PushV
	var_780_string = var_2_object; // 0xf65 MovT
	func_5032(var_780_string); // 0xf66 NEW_2
	goto Label_3935; // 0xf68 Jump
	
Label_3946:
	var_781_string = "all"; // 0xf6a PushS
	var_782_string = "idle"; // 0xf6b PushS
	PlayAnimation(var_781_string, var_782_string); // 0xf6c Func
	
Label_3950:
	WaitForAnimEnd(); // 0xf6e Func
	var_783_string = var_3_string; // 0xf70 PushT
	if(var_783_string == 0) goto Label_3955; // 0xf71 JumpB
	goto Label_3960; // 0xf72 Jump
	
Label_3955:
	var_784_string = "all"; // 0xf73 PushS
	var_785_string = "idle"; // 0xf74 PushS
	PlayAnimation(var_784_string, var_785_string); // 0xf75 Func
	goto Label_3950; // 0xf77 Jump
}


func_5401()
{
	var_594_string = "ood3Katerina1"; // 0x151a PushS
	var_595_int = 1; // 0x151b PushI
	SetVariable(var_594_string, var_595_int); // 0x151c Func
	return 0; // 0x151e Return
}


func_5659(var_567_bool)
{
	var_569_int = 0; var_570_string = ""; // 0x161c PushV
	var_570_string = "ood3Katerina1"; // 0x161d MovS
	func_5101(var_569_int, var_570_string); // 0x161e NEW_2
	var_571_int = 0; // 0x1620 PushI
	var_572_bool = var_569_int == var_571_int; // 0x1621 Eq
	if(var_572_bool == 0) goto Label_5669; // 0x1622 JumpB
	var_567_bool = 1; // 0x1623 MovB
	return 0; // 0x1624 Return
	
Label_5669:
	var_567_bool = 0; // 0x1625 MovB
	return 0; // 0x1626 Return
}


func_5148(var_60_object, var_61_string, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x141c PushV
	CreateInvItem(var_64_object); // 0x141d Func
	SetItemName(var_61_string); // 0x141f ObjFunc
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; // 0x1421 PushV
	var_65_object = var_60_object; // 0x1422 Mov
	var_66_object = var_64_object; // 0x1423 Mov
	var_67_int = var_62_int; // 0x1424 Mov
	func_5129(var_66_object, var_67_int); // 0x1425 NEW_2
	return 2; // 0x1427 Return
}


func_4894(var_143_bool, var_144_object)
{
	var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_int = 0; // 0x131e PushV
	var_152_string = "voice_common"; // 0x131f PushS
	GetVariable(var_152_string, var_150_int); // 0x1320 Func
	var_153_int = var_150_int; // 0x1322 Push
	if(var_153_int == 0) goto Label_4932; // 0x1323 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x1324 PushV
	var_155_object = var_144_object; // 0x1325 Mov
	func_4952(var_155_object); // 0x1326 NEW_2
	var_184_bool = var_154_bool == 0; // 0x1328 Not
	if(var_184_bool == 0) goto Label_4914; // 0x1329 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x132a PushV
	var_186_object = var_144_object; // 0x132b Mov
	func_4989(var_186_object); // 0x132c NEW_2
	var_220_bool = var_185_bool == 0; // 0x132e Not
	if(var_220_bool == 0) goto Label_4914; // 0x132f JumpB
	var_143_bool = 0; // 0x1330 MovB
	return 4; // 0x1331 Return
	
Label_4914:
	var_221_int = 2; // 0x1332 PushI
	irand(var_151_int, var_221_int); // 0x1333 Func
	var_222_int = var_151_int; // 0x1335 Push
	if(var_222_int == 0) goto Label_4927; // 0x1336 JumpB
	var_223_string = "voice_common"; // 0x1337 PushS
	var_224_int = 1; // 0x1338 PushI
	var_225_int = var_150_int + var_224_int; // 0x1339 Add
	var_226_int = 3; // 0x133a PushI
	var_227_int = var_225_int / var_226_int; // 0x133b Mod
	SetVariable(var_223_string, var_227_int); // 0x133c Func
	goto Label_4931; // 0x133e Jump
	
Label_4931:
	goto Label_4950; // 0x1343 Jump
	
Label_4950:
	var_143_bool = 1; // 0x1356 MovB
	return 4; // 0x1357 Return
	
Label_4927:
	var_228_string = "voice_common"; // 0x133f PushS
	var_229_int = 0; // 0x1340 PushI
	SetVariable(var_228_string, var_229_int); // 0x1341 Func
	
Label_4932:
	var_230_bool = 0; var_231_object = Obj(); // 0x1344 PushV
	var_231_object = var_144_object; // 0x1345 Mov
	func_4989(var_231_object); // 0x1346 NEW_2
	var_232_bool = var_230_bool == 0; // 0x1348 Not
	if(var_232_bool == 0) goto Label_4946; // 0x1349 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x134a PushV
	var_234_object = var_144_object; // 0x134b Mov
	func_4952(var_234_object); // 0x134c NEW_2
	var_235_bool = var_233_bool == 0; // 0x134e Not
	if(var_235_bool == 0) goto Label_4946; // 0x134f JumpB
	var_143_bool = 0; // 0x1350 MovB
	return 4; // 0x1351 Return
	
Label_4946:
	var_236_string = "voice_common"; // 0x1352 PushS
	var_237_int = 1; // 0x1353 PushI
	SetVariable(var_236_string, var_237_int); // 0x1354 Func
}


func_5407(var_57_object)
{
	var_59_string = "drapery is given"; // 0x1520 PushS
	Trace(var_59_string); // 0x1521 Func
	var_60_object = Obj(); var_61_string = ""; var_62_int = 0; // 0x1523 PushV
	var_60_object = var_57_object; // 0x1524 Mov
	var_61_string = "drapery"; // 0x1525 MovS
	var_62_int = 1; // 0x1526 MovI
	func_5148(var_60_object, var_61_string, var_62_int); // 0x1527 NEW_2
	return 0; // 0x1529 Return
}


func_2848(var_0_object, var_535_int, var_536_object)
{
	var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0; var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0; // 0xb20 PushV
	var_0_object = var_536_object; // 0xb21 TMov
	var_546_bool = 0; var_547_object = Obj(); var_548_float = 0; // 0xb22 PushV
	var_547_object = var_536_object; // 0xb23 Mov
	var_548_float = 70.0; // 0xb24 MovF
	func_4809(var_547_object, var_548_float); // 0xb25 NEW_2
	var_549_bool = var_546_bool == 0; // 0xb27 Not
	if(var_549_bool == 0) goto Label_2859; // 0xb28 JumpB
	var_535_int = -2; // 0xb29 MovI
	return 8; // 0xb2a Return
	
Label_2859:
	CreateDialog(var_542_object); // 0xb2b Func
	var_550_int = 0; // 0xb2d PushV
	func_5219(var_550_int); // 0xb2e NEW_2
	SetNPCName(var_550_int); // 0xb30 ObjFunc
	var_551_int = 0; // 0xb32 PushV
	func_5217(var_551_int); // 0xb33 NEW_2
	SetNPCDescription(var_551_int); // 0xb35 ObjFunc
	var_552_string = ""; // 0xb37 PushV
	func_5221(var_552_string); // 0xb38 NEW_2
	SetPhoto(var_552_string); // 0xb3a ObjFunc
	var_553_string = ""; // 0xb3c PushV
	func_5223(var_553_string); // 0xb3d NEW_2
	SetPhoto2(var_553_string); // 0xb3f ObjFunc
	var_554_int = 0; // 0xb41 PushV
	func_5883(var_554_int); // 0xb42 NEW_2
	SetPlayerName(var_554_int); // 0xb44 ObjFunc
	var_544_int = -1; // 0xb46 MovI
	IsOverrideActive(var_543_bool); // 0xb47 Func
	var_555_bool = var_543_bool; // 0xb49 Push
	if(var_555_bool == 0) goto Label_2893; // 0xb4a JumpB
	var_535_int = -2; // 0xb4b MovI
	return 8; // 0xb4c Return
	
Label_2893:
	DoDialog(var_542_object); // 0xb4d Func
	var_556_bool = 0; var_557_object = Obj(); // 0xb4f PushV
	var_558_object = Obj(); // 0xb50 PushV
	func_5085(var_558_object); // 0xb51 NEW_2
	var_557_object = var_558_object; // 0xb52 Mov
	func_4894(var_556_bool, var_557_object); // 0xb54 NEW_2
	var_559_object = Obj(); var_560_object = Obj(); // 0xb56 PushV
	var_559_object = var_536_object; // 0xb57 Mov
	var_560_object = var_542_object; // 0xb58 Mov
	TaskCall(13); // 0xb59 TaskCall
	func_2929(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object); // 0xb5a NEW_2
	TaskReturn(); // 0xb5b TaskReturn
	IsDialogEnd(var_545_bool); // 0xb5d ObjFunc
	
Label_2911:
	var_633_bool = var_545_bool == 0; // 0xb5f Not
	if(var_633_bool == 0) goto Label_2918; // 0xb60 JumpB
	sync(); // 0xb61 Func
	IsDialogEnd(var_545_bool); // 0xb63 ObjFunc
	goto Label_2911; // 0xb65 Jump
	
Label_2918:
	var_634_object = Obj(); // 0xb66 PushV
	var_634_object = var_536_object; // 0xb67 Mov
	func_4877(); // 0xb68 NEW_2
	StopDialog(var_542_object); // 0xb6a Func
	GetReturnValue(var_544_int); // 0xb6c ObjFunc
	var_535_int = var_544_int; // 0xb6e Mov
	return 8; // 0xb6f Return
}


func_806(var_2_object, var_948_string)
{
	var_949_bool = 0; // 0x327 PushV
	func_5225(var_949_bool); // 0x328 NEW_2
	var_950_bool = var_949_bool == 0; // 0x32a Not
	if(var_950_bool == 0) goto Label_813; // 0x32b JumpB
	return 0; // 0x32c Return
	
Label_813:
	var_951_bool = var_948_string == var_2_object; // 0x32d Eq
	if(var_951_bool == 0) goto Label_816; // 0x32e JumpB
	return 0; // 0x32f Return
	
Label_816:
	var_952_string = ""; var_953_bool = 0; // 0x330 PushV
	var_952_string = var_948_string; // 0x331 Mov
	var_954_string = ""; // 0x332 PushS
	var_955_bool = var_948_string == var_954_string; // 0x333 Eq
	if(var_955_bool == 0) goto Label_823; // 0x334 JumpB
	var_953_bool = 0; // 0x335 MovB
	goto Label_824; // 0x336 Jump
	
Label_824:
	func_5048(var_952_string, var_953_bool); // 0x338 NEW_2
	var_2_object = var_948_string; // 0x33a TMov
	return 0; // 0x33b Return
	
Label_823:
	var_953_bool = 1; // 0x337 MovB
}


func_5671(var_677_bool)
{
	var_679_int = 0; var_680_string = ""; // 0x1628 PushV
	var_680_string = "ood4Katerina1"; // 0x1629 MovS
	func_5101(var_679_int, var_680_string); // 0x162a NEW_2
	var_681_int = 0; // 0x162c PushI
	var_682_bool = var_679_int == var_681_int; // 0x162d Eq
	if(var_682_bool == 0) goto Label_5681; // 0x162e JumpB
	var_677_bool = 1; // 0x162f MovB
	return 0; // 0x1630 Return
	
Label_5681:
	var_677_bool = 0; // 0x1631 MovB
	return 0; // 0x1632 Return
}


func_5161(var_127_bool, var_128_string, var_129_string)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x1429 PushV
	FindActor(var_131_object, var_128_string); // 0x142a Func
	var_132_bool = var_131_object == 0; // 0x142c NullEq
	if(var_132_bool == 0) goto Label_5168; // 0x142d JumpB
	var_127_bool = 0; // 0x142e MovB
	return 2; // 0x142f Return
	
Label_5168:
	Trigger(var_131_object, var_129_string); // 0x1430 Func
	var_127_bool = 1; // 0x1432 MovB
	return 2; // 0x1433 Return
}


func_5418()
{
	var_59_string = "ood4Katerina1"; // 0x152b PushS
	var_60_int = 1; // 0x152c PushI
	SetVariable(var_59_string, var_60_int); // 0x152d Func
	return 0; // 0x152f Return
}


func_4396(var_0_object, var_1_object, var_2_object, var_3_string, var_1066_object, var_1067_object)
{
	var_0_object = var_1067_object; // 0x112d TMov
	var_1_object = var_1066_object; // 0x112e TMov
	var_3_string = 0; // 0x112f TMovB
	var_1072_int = 1; // 0x1130 PushI
	if(var_1072_int == 0) goto Label_4424; // 0x1131 JumpB
	var_1073_string = ""; // 0x1132 PushV
	var_1073_string = "Neutral"; // 0x1133 MovS
	func_4454(var_1067_object, var_1073_string); // 0x1134 NEW_2
	var_1081_int = 540548; // 0x1136 PushI
	SetMessage(var_1081_int); // 0x1137 TObjFunc
	ClearReplies(); // 0x1139 TObjFunc
	var_1082_int = 540549; // 0x113b PushI
	var_1083_int = -1; // 0x113c PushI
	var_1084_int = 42558; // 0x113d PushI
	AddReply(var_1082_int, var_1083_int, var_1084_int); // 0x113e TObjFunc
	var_1085_int = 540797; // 0x1140 PushI
	var_1086_int = -1; // 0x1141 PushI
	var_1087_int = 42846; // 0x1142 PushI
	AddReply(var_1085_int, var_1086_int, var_1087_int); // 0x1143 TObjFunc
	goto Label_4424; // 0x1145 Jump
	
Label_4424:
	var_1088_bool = 0; // 0x1148 PushV
	func_5225(var_1088_bool); // 0x1149 NEW_2
	if(var_1088_bool == 0) goto Label_4439; // 0x114b JumpB
	
Label_4428:
	lshWaitForAnimEnd(); // 0x114c Func
	var_1089_string = var_3_string; // 0x114e PushT
	if(var_1089_string == 0) goto Label_4433; // 0x114f JumpB
	goto Label_4438; // 0x1150 Jump
	
Label_4438:
	goto Label_4453; // 0x1156 Jump
	
Label_4453:
	return 0; // 0x1165 Return
	
Label_4433:
	var_1090_string = ""; // 0x1151 PushV
	var_1090_string = var_2_object; // 0x1152 MovT
	func_5032(var_1090_string); // 0x1153 NEW_2
	goto Label_4428; // 0x1155 Jump
	
Label_4439:
	var_1091_string = "all"; // 0x1157 PushS
	var_1092_string = "idle"; // 0x1158 PushS
	PlayAnimation(var_1091_string, var_1092_string); // 0x1159 Func
	
Label_4443:
	WaitForAnimEnd(); // 0x115b Func
	var_1093_string = var_3_string; // 0x115d PushT
	if(var_1093_string == 0) goto Label_4448; // 0x115e JumpB
	goto Label_4453; // 0x115f Jump
	
Label_4448:
	var_1094_string = "all"; // 0x1160 PushS
	var_1095_string = "idle"; // 0x1161 PushS
	PlayAnimation(var_1094_string, var_1095_string); // 0x1162 Func
	goto Label_4443; // 0x1164 Jump
}


func_5424()
{
	var_474_string = "ood2Katerina1"; // 0x1531 PushS
	var_475_int = 1; // 0x1532 PushI
	SetVariable(var_474_string, var_475_int); // 0x1533 Func
	return 0; // 0x1535 Return
}


func_3634(var_2_object, var_668_string)
{
	var_669_bool = 0; // 0xe33 PushV
	func_5225(var_669_bool); // 0xe34 NEW_2
	var_670_bool = var_669_bool == 0; // 0xe36 Not
	if(var_670_bool == 0) goto Label_3641; // 0xe37 JumpB
	return 0; // 0xe38 Return
	
Label_3641:
	var_671_bool = var_668_string == var_2_object; // 0xe39 Eq
	if(var_671_bool == 0) goto Label_3644; // 0xe3a JumpB
	return 0; // 0xe3b Return
	
Label_3644:
	var_672_string = ""; var_673_bool = 0; // 0xe3c PushV
	var_672_string = var_668_string; // 0xe3d Mov
	var_674_string = ""; // 0xe3e PushS
	var_675_bool = var_668_string == var_674_string; // 0xe3f Eq
	if(var_675_bool == 0) goto Label_3651; // 0xe40 JumpB
	var_673_bool = 0; // 0xe41 MovB
	goto Label_3652; // 0xe42 Jump
	
Label_3652:
	func_5048(var_672_string, var_673_bool); // 0xe44 NEW_2
	var_2_object = var_668_string; // 0xe46 TMov
	return 0; // 0xe47 Return
	
Label_3651:
	var_673_bool = 1; // 0xe43 MovB
}


func_5683(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0x1634 PushV
	var_469_string = "ood2Katerina1"; // 0x1635 MovS
	func_5101(var_468_int, var_469_string); // 0x1636 NEW_2
	var_470_int = 0; // 0x1638 PushI
	var_471_bool = var_468_int == var_470_int; // 0x1639 Eq
	if(var_471_bool == 0) goto Label_5693; // 0x163a JumpB
	var_466_bool = 1; // 0x163b MovB
	return 0; // 0x163c Return
	
Label_5693:
	var_466_bool = 0; // 0x163d MovB
	return 0; // 0x163e Return
}


func_5173(var_96_float)
{
	var_97_float = 0; var_98_float = 0; // 0x1435 PushV
	GetGameTime(var_98_float); // 0x1436 Func
	var_96_float = var_98_float; // 0x1438 Mov
	return 2; // 0x1439 Return
}


func_5430()
{
	var_510_string = "ood2Katerina2"; // 0x1537 PushS
	var_511_int = 1; // 0x1538 PushI
	SetVariable(var_510_string, var_511_int); // 0x1539 Func
	return 0; // 0x153b Return
}


func_5178(var_198_int)
{
	var_199_float = 0; var_200_float = 0; // 0x143a PushV
	GetGameTime(var_200_float); // 0x143b Func
	var_201_int = 1; // 0x143d PushI
	var_202_int = 0; // 0x143e PushV
	var_203_int = 24; // 0x143f PushI
	var_202_int = var_200_float / var_200_float; // 0x1440 Div2
	var_198_int = var_201_int + var_202_int; // 0x1441 Add2
	return 2; // 0x1442 Return
}


func_5436()
{
	var_71_string = "ood5Katerina1"; // 0x153d PushS
	var_72_int = 1; // 0x153e PushI
	SetVariable(var_71_string, var_72_int); // 0x153f Func
	return 0; // 0x1541 Return
}


func_5695(var_502_bool)
{
	var_504_int = 0; var_505_string = ""; // 0x1640 PushV
	var_505_string = "ood2Katerina2"; // 0x1641 MovS
	func_5101(var_504_int, var_505_string); // 0x1642 NEW_2
	var_506_int = 0; // 0x1644 PushI
	var_507_bool = var_504_int == var_506_int; // 0x1645 Eq
	if(var_507_bool == 0) goto Label_5705; // 0x1646 JumpB
	var_502_bool = 1; // 0x1647 MovB
	return 0; // 0x1648 Return
	
Label_5705:
	var_502_bool = 0; // 0x1649 MovB
	return 0; // 0x164a Return
}


func_5442(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0x1543 PushV
	var_340_string = "d1q01FirstGeorgVisit"; // 0x1544 MovS
	func_5101(var_339_int, var_340_string); // 0x1545 NEW_2
	var_343_int = 1; // 0x1547 PushI
	var_344_bool = var_339_int == var_343_int; // 0x1548 Eq
	if(var_344_bool == 0) goto Label_5452; // 0x1549 JumpB
	var_337_bool = 1; // 0x154a MovB
	return 0; // 0x154b Return
	
Label_5452:
	var_337_bool = 0; // 0x154c MovB
	return 0; // 0x154d Return
}


func_5187(var_303_bool, var_304_int)
{
	var_305_int = 0; // 0x1444 PushV
	func_5178(var_305_int); // 0x1445 NEW_2
	var_303_bool = var_305_int == var_304_int; // 0x1447 Eq2
	return 0; // 0x1448 Return
}


func_5193(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = ""; // 0x1449 PushV
	var_79_string = "idle"; // 0x144a MovS
	var_80_int = var_77_int; // 0x144b Push
	if(var_80_int == 0) goto Label_5198; // 0x144c JumpB
	var_79_string = var_79_string + var_77_int; // 0x144d Add2
	
Label_5198:
	var_76_string = var_79_string; // 0x144e Mov
	return 2; // 0x144f Return
}


func_2635(var_2_object, var_476_string)
{
	var_477_bool = 0; // 0xa4c PushV
	func_5225(var_477_bool); // 0xa4d NEW_2
	var_478_bool = var_477_bool == 0; // 0xa4f Not
	if(var_478_bool == 0) goto Label_2642; // 0xa50 JumpB
	return 0; // 0xa51 Return
	
Label_2642:
	var_479_bool = var_476_string == var_2_object; // 0xa52 Eq
	if(var_479_bool == 0) goto Label_2645; // 0xa53 JumpB
	return 0; // 0xa54 Return
	
Label_2645:
	var_480_string = ""; var_481_bool = 0; // 0xa55 PushV
	var_480_string = var_476_string; // 0xa56 Mov
	var_482_string = ""; // 0xa57 PushS
	var_483_bool = var_476_string == var_482_string; // 0xa58 Eq
	if(var_483_bool == 0) goto Label_2652; // 0xa59 JumpB
	var_481_bool = 0; // 0xa5a MovB
	goto Label_2653; // 0xa5b Jump
	
Label_2653:
	func_5048(var_480_string, var_481_bool); // 0xa5d NEW_2
	var_2_object = var_476_string; // 0xa5f TMov
	return 0; // 0xa60 Return
	
Label_2652:
	var_481_bool = 1; // 0xa5c MovB
}


func_5707(var_757_bool)
{
	var_759_int = 0; var_760_string = ""; // 0x164c PushV
	var_760_string = "ood5Katerina1"; // 0x164d MovS
	func_5101(var_759_int, var_760_string); // 0x164e NEW_2
	var_761_int = 0; // 0x1650 PushI
	var_762_bool = var_759_int == var_761_int; // 0x1651 Eq
	if(var_762_bool == 0) goto Label_5717; // 0x1652 JumpB
	var_757_bool = 1; // 0x1653 MovB
	return 0; // 0x1654 Return
	
Label_5717:
	var_757_bool = 0; // 0x1655 MovB
	return 0; // 0x1656 Return
}


func_5454(var_355_bool)
{
	var_357_int = 0; var_358_string = ""; // 0x154f PushV
	var_358_string = "ood1Katerina1"; // 0x1550 MovS
	func_5101(var_357_int, var_358_string); // 0x1551 NEW_2
	var_359_int = 0; // 0x1553 PushI
	var_360_bool = var_357_int == var_359_int; // 0x1554 Eq
	if(var_360_bool == 0) goto Label_5464; // 0x1555 JumpB
	var_355_bool = 1; // 0x1556 MovB
	return 0; // 0x1557 Return
	
Label_5464:
	var_355_bool = 0; // 0x1558 MovB
	return 0; // 0x1559 Return
}


func_5200(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0; // 0x1450 PushV
	var_73_int = 0; // 0x1451 MovI
	
Label_5202:
	var_75_string = "all"; // 0x1452 PushS
	var_76_string = ""; var_77_int = 0; // 0x1453 PushV
	var_77_int = var_73_int; // 0x1454 Mov
	func_5193(var_76_string, var_77_int); // 0x1455 NEW_2
	HasAnimation(var_74_bool, var_75_string, var_76_string); // 0x1457 Func
	var_81_bool = var_74_bool == 0; // 0x1459 Not
	if(var_81_bool == 0) goto Label_5212; // 0x145a JumpB
	goto Label_5215; // 0x145b Jump
	
Label_5215:
	var_70_int = var_73_int; // 0x145f Mov
	return 4; // 0x1460 Return
	
Label_5212:
	var_82_int = 1; // 0x145c PushI
	var_73_int = var_73_int + var_82_int; // 0x145d Add2
	goto Label_5202; // 0x145e Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_330_object, var_331_object)
{
	var_0_object = var_331_object; // 0x52 TMov
	var_1_object = var_330_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_336_int = 1; // 0x55 PushI
	if(var_336_int == 0) goto Label_198; // 0x56 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x57 PushV
	var_338_object = var_1_object; // 0x58 MovT
	func_5442(var_338_object); // 0x59 NEW_2
	var_345_bool = var_337_bool == 0; // 0x5b Not
	if(var_345_bool == 0) goto Label_118; // 0x5c JumpB
	var_346_string = ""; // 0x5d PushV
	var_346_string = "Neutral"; // 0x5e MovS
	func_228(var_331_object, var_346_string); // 0x5f NEW_2
	var_354_int = 532198; // 0x61 PushI
	SetMessage(var_354_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_355_bool = 0; var_356_object = Obj(); // 0x66 PushV
	var_356_object = var_1_object; // 0x67 MovT
	func_5454(var_356_object); // 0x68 NEW_2
	if(var_355_bool == 0) goto Label_112; // 0x6a JumpB
	var_361_int = 532199; // 0x6b PushI
	var_362_int = 33615; // 0x6c PushI
	var_363_int = 33614; // 0x6d PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x6e TObjFunc
	
Label_112:
	var_364_int = 532203; // 0x70 PushI
	var_365_int = -1; // 0x71 PushI
	var_366_int = 33618; // 0x72 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x73 TObjFunc
	goto Label_198; // 0x75 Jump
	
Label_198:
	var_367_bool = 0; // 0xc6 PushV
	func_5225(var_367_bool); // 0xc7 NEW_2
	if(var_367_bool == 0) goto Label_213; // 0xc9 JumpB
	
Label_202:
	lshWaitForAnimEnd(); // 0xca Func
	var_368_string = var_3_string; // 0xcc PushT
	if(var_368_string == 0) goto Label_207; // 0xcd JumpB
	goto Label_212; // 0xce Jump
	
Label_212:
	goto Label_227; // 0xd4 Jump
	
Label_227:
	return 0; // 0xe3 Return
	
Label_207:
	var_369_string = ""; // 0xcf PushV
	var_369_string = var_2_object; // 0xd0 MovT
	func_5032(var_369_string); // 0xd1 NEW_2
	goto Label_202; // 0xd3 Jump
	
Label_213:
	var_370_string = "all"; // 0xd5 PushS
	var_371_string = "idle"; // 0xd6 PushS
	PlayAnimation(var_370_string, var_371_string); // 0xd7 Func
	
Label_217:
	WaitForAnimEnd(); // 0xd9 Func
	var_372_string = var_3_string; // 0xdb PushT
	if(var_372_string == 0) goto Label_222; // 0xdc JumpB
	goto Label_227; // 0xdd Jump
	
Label_222:
	var_373_string = "all"; // 0xde PushS
	var_374_string = "idle"; // 0xdf PushS
	PlayAnimation(var_373_string, var_374_string); // 0xe0 Func
	goto Label_217; // 0xe2 Jump
	
Label_118:
	var_375_bool = 0; // 0x76 PushV
	var_375_bool = 0; // 0x77 MovB
	var_376_bool = 0; var_377_object = Obj(); // 0x78 PushV
	var_377_object = var_1_object; // 0x79 MovT
	func_5466(var_377_object); // 0x7a NEW_2
	if(var_376_bool == 0) goto Label_131; // 0x7c JumpB
	var_382_bool = 0; var_383_object = Obj(); // 0x7d PushV
	var_383_object = var_1_object; // 0x7e MovT
	func_5719(var_383_object); // 0x7f NEW_2
	if(var_382_bool == 0) goto Label_131; // 0x81 JumpB
	var_375_bool = 1; // 0x82 MovB
	
Label_131:
	if(var_375_bool == 0) goto Label_162; // 0x83 JumpB
	var_398_object = Obj(); var_399_object = Obj(); // 0x84 PushV
	var_398_object = var_1_object; // 0x85 MovT
	var_399_object = var_0_object; // 0x86 MovT
	func_5245(); // 0x87 NEW_2
	var_402_object = Obj(); var_403_object = Obj(); // 0x89 PushV
	var_402_object = var_1_object; // 0x8a MovT
	var_403_object = var_0_object; // 0x8b MovT
	func_5340(); // 0x8c NEW_2
	var_406_string = ""; // 0x8e PushV
	var_406_string = "Penetrating"; // 0x8f MovS
	func_228(var_331_object, var_406_string); // 0x90 NEW_2
	var_407_int = 532204; // 0x92 PushI
	SetMessage(var_407_int); // 0x93 TObjFunc
	ClearReplies(); // 0x95 TObjFunc
	var_408_int = 532205; // 0x97 PushI
	var_409_int = 33621; // 0x98 PushI
	var_410_int = 33620; // 0x99 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x9a TObjFunc
	var_411_int = 532221; // 0x9c PushI
	var_412_int = 33621; // 0x9d PushI
	var_413_int = 33638; // 0x9e PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x9f TObjFunc
	goto Label_198; // 0xa1 Jump
	
Label_162:
	var_414_string = ""; // 0xa2 PushV
	var_414_string = "Suffering"; // 0xa3 MovS
	func_228(var_331_object, var_414_string); // 0xa4 NEW_2
	var_415_int = 532253; // 0xa6 PushI
	SetMessage(var_415_int); // 0xa7 TObjFunc
	ClearReplies(); // 0xa9 TObjFunc
	var_416_bool = 0; // 0xab PushV
	var_416_bool = 0; // 0xac MovB
	var_417_bool = 0; var_418_object = Obj(); // 0xad PushV
	var_418_object = var_1_object; // 0xae MovT
	func_5719(var_418_object); // 0xaf NEW_2
	if(var_417_bool == 0) goto Label_184; // 0xb1 JumpB
	var_419_bool = 0; var_420_object = Obj(); // 0xb2 PushV
	var_420_object = var_1_object; // 0xb3 MovT
	func_5539(var_420_object); // 0xb4 NEW_2
	if(var_419_bool == 0) goto Label_184; // 0xb6 JumpB
	var_416_bool = 1; // 0xb7 MovB
	
Label_184:
	if(var_416_bool == 0) goto Label_190; // 0xb8 JumpB
	var_425_int = 533013; // 0xb9 PushI
	var_426_int = 34518; // 0xba PushI
	var_427_int = 34517; // 0xbb PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xbc TObjFunc
	
Label_190:
	var_428_int = 532338; // 0xbe PushI
	var_429_int = -1; // 0xbf PushI
	var_430_int = 33767; // 0xc0 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xc1 TObjFunc
	goto Label_198; // 0xc3 Jump
}


func_5719(var_382_bool)
{
	var_384_bool = 0; // 0x1658 PushV
	var_384_bool = 0; // 0x1659 MovB
	var_385_bool = 0; // 0x165a PushV
	var_385_bool = 0; // 0x165b MovB
	var_386_int = 0; var_387_string = ""; // 0x165c PushV
	var_387_string = "d1q01"; // 0x165d MovS
	func_5101(var_386_int, var_387_string); // 0x165e NEW_2
	var_388_int = 0; // 0x1660 PushI
	var_389_bool = var_386_int != var_388_int; // 0x1661 Neq
	if(var_389_bool == 0) goto Label_5739; // 0x1662 JumpB
	var_390_int = 0; var_391_string = ""; // 0x1663 PushV
	var_391_string = "d1q01"; // 0x1664 MovS
	func_5101(var_390_int, var_391_string); // 0x1665 NEW_2
	var_392_int = 1000; // 0x1667 PushI
	var_393_bool = var_390_int != var_392_int; // 0x1668 Neq
	if(var_393_bool == 0) goto Label_5739; // 0x1669 JumpB
	var_385_bool = 1; // 0x166a MovB
	
Label_5739:
	if(var_385_bool == 0) goto Label_5748; // 0x166b JumpB
	var_394_int = 0; var_395_string = ""; // 0x166c PushV
	var_395_string = "d1q01"; // 0x166d MovS
	func_5101(var_394_int, var_395_string); // 0x166e NEW_2
	var_396_int = -1; // 0x1670 PushI
	var_397_bool = var_394_int != var_396_int; // 0x1671 Neq
	if(var_397_bool == 0) goto Label_5748; // 0x1672 JumpB
	var_384_bool = 1; // 0x1673 MovB
	
Label_5748:
	if(var_384_bool == 0) goto Label_5751; // 0x1674 JumpB
	var_382_bool = 1; // 0x1675 MovB
	return 0; // 0x1676 Return
	
Label_5751:
	var_382_bool = 0; // 0x1677 MovB
	return 0; // 0x1678 Return
}


func_4952(var_154_bool)
{
	var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; // 0x1358 PushV
	var_161_string = "c"; // 0x1359 MovS
	var_162_int = 0; // 0x135a MovI
	
Label_4955:
	var_166_int = 1; // 0x135b PushI
	if(var_166_int == 0) goto Label_4968; // 0x135c JumpB
	var_167_int = 1; // 0x135d PushI
	var_168_int = var_162_int + var_167_int; // 0x135e Add
	var_169_int = var_161_string + var_168_int; // 0x135f Add
	HasProperty(var_169_int, var_163_bool); // 0x1360 ObjFunc
	var_170_bool = var_163_bool == 0; // 0x1362 Not
	if(var_170_bool == 0) goto Label_4965; // 0x1363 JumpB
	goto Label_4968; // 0x1364 Jump
	
Label_4968:
	var_171_bool = var_162_int == 0; // 0x1368 Not
	if(var_171_bool == 0) goto Label_4972; // 0x1369 JumpB
	var_154_bool = 0; // 0x136a MovB
	return 10; // 0x136b Return
	
Label_4972:
	var_164_int = 0; // 0x136c MovI
	var_172_int = 1; // 0x136d PushI
	var_173_bool = var_162_int > var_172_int; // 0x136e GT
	if(var_173_bool == 0) goto Label_4978; // 0x136f JumpB
	irand(var_164_int, var_162_int); // 0x1370 Func
	
Label_4978:
	var_174_int = 1; // 0x1372 PushI
	var_175_int = var_164_int + var_174_int; // 0x1373 Add
	var_176_int = var_161_string + var_175_int; // 0x1374 Add
	GetProperty(var_176_int, var_165_string); // 0x1375 ObjFunc
	var_177_bool = 0; var_178_string = ""; // 0x1377 PushV
	var_178_string = var_165_string; // 0x1378 Mov
	func_5063(var_177_bool, var_178_string); // 0x1379 NEW_2
	var_154_bool = var_177_bool; // 0x137a Mov
	return 10; // 0x137c Return
	
Label_4965:
	var_183_int = 1; // 0x1365 PushI
	var_162_int = var_162_int + var_183_int; // 0x1366 Add2
	goto Label_4955; // 0x1367 Jump
}


func_5466(var_376_bool)
{
	var_378_int = 0; var_379_string = ""; // 0x155b PushV
	var_379_string = "ood1Katerina2"; // 0x155c MovS
	func_5101(var_378_int, var_379_string); // 0x155d NEW_2
	var_380_int = 0; // 0x155f PushI
	var_381_bool = var_378_int == var_380_int; // 0x1560 Eq
	if(var_381_bool == 0) goto Label_5476; // 0x1561 JumpB
	var_376_bool = 1; // 0x1562 MovB
	return 0; // 0x1563 Return
	
Label_5476:
	var_376_bool = 0; // 0x1564 MovB
	return 0; // 0x1565 Return
}


func_4701()
{
	var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0; // 0x125d PushV
	WaitForAnimEnd(); // 0x125e Func
	var_68_bool = 0; // 0x1260 PushV
	func_4804(var_68_bool); // 0x1261 NEW_2
	var_69_bool = var_68_bool == 0; // 0x1263 Not
	if(var_69_bool == 0) goto Label_4710; // 0x1264 JumpB
	return 12; // 0x1265 Return
	
Label_4710:
	var_70_int = 0; // 0x1266 PushV
	func_5200(var_70_int); // 0x1267 NEW_2
	var_62_int = var_70_int; // 0x1268 Mov
	var_63_int = 0; // 0x126a MovI
	
Label_4715:
	var_83_bool = 0; // 0x126b PushV
	var_83_bool = 0; // 0x126c MovB
	var_84_int = 5; // 0x126d PushI
	var_85_bool = var_63_int < var_84_int; // 0x126e LT
	if(var_85_bool == 0) goto Label_4725; // 0x126f JumpB
	var_86_bool = 0; // 0x1270 PushV
	func_4804(var_86_bool); // 0x1271 NEW_2
	if(var_86_bool == 0) goto Label_4725; // 0x1273 JumpB
	var_83_bool = 1; // 0x1274 MovB
	
Label_4725:
	if(var_83_bool == 0) goto Label_4767; // 0x1275 JumpB
	var_87_bool = var_62_int == 0; // 0x1276 Not
	if(var_87_bool == 0) goto Label_4735; // 0x1277 JumpB
	var_88_int = 3; // 0x1278 PushI
	Sleep(var_88_int, var_64_bool); // 0x1279 Func
	var_89_bool = var_64_bool == 0; // 0x127b Not
	if(var_89_bool == 0) goto Label_4734; // 0x127c JumpB
	goto Label_4767; // 0x127d Jump
	
Label_4767:
	ResetAAS(); // 0x129f Func
	return 12; // 0x12a1 Return
	
Label_4734:
	goto Label_4756; // 0x127e Jump
	
Label_4756:
	var_90_bool = 0; // 0x1294 PushV
	func_4770(var_90_bool); // 0x1295 NEW_2
	var_91_bool = var_90_bool == 0; // 0x1297 Not
	if(var_91_bool == 0) goto Label_4762; // 0x1298 JumpB
	goto Label_4767; // 0x1299 Jump
	
Label_4762:
	ResetAAS(); // 0x129a Func
	var_92_int = 1; // 0x129c PushI
	var_63_int = var_63_int + var_92_int; // 0x129d Add2
	goto Label_4715; // 0x129e Jump
	
Label_4735:
	irand(var_65_int, var_62_int); // 0x127f Func
	var_93_int = 5; // 0x1281 PushI
	irand(var_66_int, var_93_int); // 0x1282 Func
	var_94_int = 0; // 0x1284 PushI
	var_95_bool = var_66_int != var_94_int; // 0x1285 Neq
	if(var_95_bool == 0) goto Label_4744; // 0x1286 JumpB
	var_65_int = 0; // 0x1287 MovI
	
Label_4744:
	var_96_string = "all"; // 0x1288 PushS
	var_97_string = ""; var_98_int = 0; // 0x1289 PushV
	var_98_int = var_65_int; // 0x128a Mov
	func_5193(var_97_string, var_98_int); // 0x128b NEW_2
	PlayAnimation(var_96_string, var_97_string); // 0x128d Func
	WaitForAnimEnd(var_67_bool); // 0x128f Func
	var_99_bool = var_67_bool == 0; // 0x1291 Not
	if(var_99_bool == 0) goto Label_4756; // 0x1292 JumpB
	goto Label_4767; // 0x1293 Jump
}


func_1888(var_2_object, var_821_string)
{
	var_822_bool = 0; // 0x761 PushV
	func_5225(var_822_bool); // 0x762 NEW_2
	var_823_bool = var_822_bool == 0; // 0x764 Not
	if(var_823_bool == 0) goto Label_1895; // 0x765 JumpB
	return 0; // 0x766 Return
	
Label_1895:
	var_824_bool = var_821_string == var_2_object; // 0x767 Eq
	if(var_824_bool == 0) goto Label_1898; // 0x768 JumpB
	return 0; // 0x769 Return
	
Label_1898:
	var_825_string = ""; var_826_bool = 0; // 0x76a PushV
	var_825_string = var_821_string; // 0x76b Mov
	var_827_string = ""; // 0x76c PushS
	var_828_bool = var_821_string == var_827_string; // 0x76d Eq
	if(var_828_bool == 0) goto Label_1905; // 0x76e JumpB
	var_826_bool = 0; // 0x76f MovB
	goto Label_1906; // 0x770 Jump
	
Label_1906:
	func_5048(var_825_string, var_826_bool); // 0x772 NEW_2
	var_2_object = var_821_string; // 0x774 TMov
	return 0; // 0x775 Return
	
Label_1905:
	var_826_bool = 1; // 0x771 MovB
}


func_5217(var_131_int)
{
	var_131_int = 515539; // 0x1461 MovI
	return 0; // 0x1462 Return
}


func_5219(var_130_int)
{
	var_130_int = 502864; // 0x1463 MovI
	return 0; // 0x1464 Return
}


func_5221(var_132_string)
{
	var_132_string = "ui/NPC_Katerina.png"; // 0x1465 MovS
	return 0; // 0x1466 Return
}


func_5478(var_934_bool)
{
	var_936_int = 0; var_937_string = ""; // 0x1567 PushV
	var_937_string = "ood10Katerina1"; // 0x1568 MovS
	func_5101(var_936_int, var_937_string); // 0x1569 NEW_2
	var_938_int = 0; // 0x156b PushI
	var_939_bool = var_936_int == var_938_int; // 0x156c Eq
	if(var_939_bool == 0) goto Label_5488; // 0x156d JumpB
	var_934_bool = 1; // 0x156e MovB
	return 0; // 0x156f Return
	
Label_5488:
	var_934_bool = 0; // 0x1570 MovB
	return 0; // 0x1571 Return
}


func_5223(var_133_string)
{
	var_133_string = "ui/NPC_Katerina_b.png"; // 0x1467 MovS
	return 0; // 0x1468 Return
}


func_1128(var_0_object, var_983_int, var_984_object)
{
	var_986_object = Obj(); var_987_bool = 0; var_988_int = 0; var_989_bool = 0; var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0; // 0x468 PushV
	var_0_object = var_984_object; // 0x469 TMov
	var_994_bool = 0; var_995_object = Obj(); var_996_float = 0; // 0x46a PushV
	var_995_object = var_984_object; // 0x46b Mov
	var_996_float = 70.0; // 0x46c MovF
	func_4809(var_995_object, var_996_float); // 0x46d NEW_2
	var_997_bool = var_994_bool == 0; // 0x46f Not
	if(var_997_bool == 0) goto Label_1139; // 0x470 JumpB
	var_983_int = -2; // 0x471 MovI
	return 8; // 0x472 Return
	
Label_1139:
	CreateDialog(var_990_object); // 0x473 Func
	var_998_int = 0; // 0x475 PushV
	func_5219(var_998_int); // 0x476 NEW_2
	SetNPCName(var_998_int); // 0x478 ObjFunc
	var_999_int = 0; // 0x47a PushV
	func_5217(var_999_int); // 0x47b NEW_2
	SetNPCDescription(var_999_int); // 0x47d ObjFunc
	var_1000_string = ""; // 0x47f PushV
	func_5221(var_1000_string); // 0x480 NEW_2
	SetPhoto(var_1000_string); // 0x482 ObjFunc
	var_1001_string = ""; // 0x484 PushV
	func_5223(var_1001_string); // 0x485 NEW_2
	SetPhoto2(var_1001_string); // 0x487 ObjFunc
	var_1002_int = 0; // 0x489 PushV
	func_5883(var_1002_int); // 0x48a NEW_2
	SetPlayerName(var_1002_int); // 0x48c ObjFunc
	var_992_int = -1; // 0x48e MovI
	IsOverrideActive(var_991_bool); // 0x48f Func
	var_1003_bool = var_991_bool; // 0x491 Push
	if(var_1003_bool == 0) goto Label_1173; // 0x492 JumpB
	var_983_int = -2; // 0x493 MovI
	return 8; // 0x494 Return
	
Label_1173:
	DoDialog(var_990_object); // 0x495 Func
	var_1004_bool = 0; var_1005_object = Obj(); // 0x497 PushV
	var_1006_object = Obj(); // 0x498 PushV
	func_5085(var_1006_object); // 0x499 NEW_2
	var_1005_object = var_1006_object; // 0x49a Mov
	func_4894(var_1004_bool, var_1005_object); // 0x49c NEW_2
	var_1007_object = Obj(); var_1008_object = Obj(); // 0x49e PushV
	var_1007_object = var_984_object; // 0x49f Mov
	var_1008_object = var_990_object; // 0x4a0 Mov
	TaskCall(5); // 0x4a1 TaskCall
	func_1209(var_1009_object, var_1010_object, var_1011_string, var_1012_bool, var_1007_object, var_1008_object); // 0x4a2 NEW_2
	TaskReturn(); // 0x4a3 TaskReturn
	IsDialogEnd(var_993_bool); // 0x4a5 ObjFunc
	
Label_1191:
	var_1040_bool = var_993_bool == 0; // 0x4a7 Not
	if(var_1040_bool == 0) goto Label_1198; // 0x4a8 JumpB
	sync(); // 0x4a9 Func
	IsDialogEnd(var_993_bool); // 0x4ab ObjFunc
	goto Label_1191; // 0x4ad Jump
	
Label_1198:
	var_1041_object = Obj(); // 0x4ae PushV
	var_1041_object = var_984_object; // 0x4af Mov
	func_4877(); // 0x4b0 NEW_2
	StopDialog(var_990_object); // 0x4b2 Func
	GetReturnValue(var_992_int); // 0x4b4 ObjFunc
	var_983_int = var_992_int; // 0x4b6 Mov
	return 8; // 0x4b7 Return
}


func_5225(var_125_bool)
{
	var_125_bool = 1; // 0x1469 MovB
	return 0; // 0x146a Return
}


func_4454(var_2_object, var_1073_string)
{
	var_1074_bool = 0; // 0x1167 PushV
	func_5225(var_1074_bool); // 0x1168 NEW_2
	var_1075_bool = var_1074_bool == 0; // 0x116a Not
	if(var_1075_bool == 0) goto Label_4461; // 0x116b JumpB
	return 0; // 0x116c Return
	
Label_4461:
	var_1076_bool = var_1073_string == var_2_object; // 0x116d Eq
	if(var_1076_bool == 0) goto Label_4464; // 0x116e JumpB
	return 0; // 0x116f Return
	
Label_4464:
	var_1077_string = ""; var_1078_bool = 0; // 0x1170 PushV
	var_1077_string = var_1073_string; // 0x1171 Mov
	var_1079_string = ""; // 0x1172 PushS
	var_1080_bool = var_1073_string == var_1079_string; // 0x1173 Eq
	if(var_1080_bool == 0) goto Label_4471; // 0x1174 JumpB
	var_1078_bool = 0; // 0x1175 MovB
	goto Label_4472; // 0x1176 Jump
	
Label_4472:
	func_5048(var_1077_string, var_1078_bool); // 0x1178 NEW_2
	var_2_object = var_1073_string; // 0x117a TMov
	return 0; // 0x117b Return
	
Label_4471:
	var_1078_bool = 1; // 0x1177 MovB
}


func_5227()
{
	var_247_string = "KnowKaterina"; // 0x146c PushS
	var_248_int = 1; // 0x146d PushI
	SetVariable(var_247_string, var_248_int); // 0x146e Func
	return 0; // 0x1470 Return
}


func_1387(var_0_object, var_72_int, var_73_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0; // 0x56b PushV
	var_0_object = var_73_object; // 0x56c TMov
	var_83_bool = 0; var_84_object = Obj(); var_85_float = 0; // 0x56d PushV
	var_84_object = var_73_object; // 0x56e Mov
	var_85_float = 70.0; // 0x56f MovF
	func_4809(var_84_object, var_85_float); // 0x570 NEW_2
	var_129_bool = var_83_bool == 0; // 0x572 Not
	if(var_129_bool == 0) goto Label_1398; // 0x573 JumpB
	var_72_int = -2; // 0x574 MovI
	return 8; // 0x575 Return
	
Label_1398:
	CreateDialog(var_79_object); // 0x576 Func
	var_130_int = 0; // 0x578 PushV
	func_5219(var_130_int); // 0x579 NEW_2
	SetNPCName(var_130_int); // 0x57b ObjFunc
	var_131_int = 0; // 0x57d PushV
	func_5217(var_131_int); // 0x57e NEW_2
	SetNPCDescription(var_131_int); // 0x580 ObjFunc
	var_132_string = ""; // 0x582 PushV
	func_5221(var_132_string); // 0x583 NEW_2
	SetPhoto(var_132_string); // 0x585 ObjFunc
	var_133_string = ""; // 0x587 PushV
	func_5223(var_133_string); // 0x588 NEW_2
	SetPhoto2(var_133_string); // 0x58a ObjFunc
	var_134_int = 0; // 0x58c PushV
	func_5883(var_134_int); // 0x58d NEW_2
	SetPlayerName(var_134_int); // 0x58f ObjFunc
	var_81_int = -1; // 0x591 MovI
	IsOverrideActive(var_80_bool); // 0x592 Func
	var_142_bool = var_80_bool; // 0x594 Push
	if(var_142_bool == 0) goto Label_1432; // 0x595 JumpB
	var_72_int = -2; // 0x596 MovI
	return 8; // 0x597 Return
	
Label_1432:
	DoDialog(var_79_object); // 0x598 Func
	var_143_bool = 0; var_144_object = Obj(); // 0x59a PushV
	var_145_object = Obj(); // 0x59b PushV
	func_5085(var_145_object); // 0x59c NEW_2
	var_144_object = var_145_object; // 0x59d Mov
	func_4894(var_143_bool, var_144_object); // 0x59f NEW_2
	var_238_object = Obj(); var_239_object = Obj(); // 0x5a1 PushV
	var_238_object = var_73_object; // 0x5a2 Mov
	var_239_object = var_79_object; // 0x5a3 Mov
	TaskCall(7); // 0x5a4 TaskCall
	func_1468(var_240_object, var_241_object, var_242_string, var_243_bool, var_238_object, var_239_object); // 0x5a5 NEW_2
	TaskReturn(); // 0x5a6 TaskReturn
	IsDialogEnd(var_82_bool); // 0x5a8 ObjFunc
	
Label_1450:
	var_294_bool = var_82_bool == 0; // 0x5aa Not
	if(var_294_bool == 0) goto Label_1457; // 0x5ab JumpB
	sync(); // 0x5ac Func
	IsDialogEnd(var_82_bool); // 0x5ae ObjFunc
	goto Label_1450; // 0x5b0 Jump
	
Label_1457:
	var_295_object = Obj(); // 0x5b1 PushV
	var_295_object = var_73_object; // 0x5b2 Mov
	func_4877(); // 0x5b3 NEW_2
	StopDialog(var_79_object); // 0x5b5 Func
	GetReturnValue(var_81_int); // 0x5b7 ObjFunc
	var_72_int = var_81_int; // 0x5b9 Mov
	return 8; // 0x5ba Return
}


func_5233()
{
	var_83_string = "playsound"; // 0x1472 PushS
	var_84_string = "giveitem"; // 0x1473 PushS
	TriggerWorld(var_83_string, var_84_string); // 0x1474 Func
	return 0; // 0x1476 Return
}


func_2929(var_0_object, var_1_object, var_2_object, var_3_string, var_559_object, var_560_object)
{
	var_0_object = var_560_object; // 0xb72 TMov
	var_1_object = var_559_object; // 0xb73 TMov
	var_3_string = 0; // 0xb74 TMovB
	var_565_int = 1; // 0xb75 PushI
	if(var_565_int == 0) goto Label_3001; // 0xb76 JumpB
	var_566_bool = 0; // 0xb77 PushV
	var_566_bool = 0; // 0xb78 MovB
	var_567_bool = 0; var_568_object = Obj(); // 0xb79 PushV
	var_568_object = var_1_object; // 0xb7a MovT
	func_5659(var_568_object); // 0xb7b NEW_2
	if(var_567_bool == 0) goto Label_2948; // 0xb7d JumpB
	var_573_bool = 0; var_574_object = Obj(); // 0xb7e PushV
	var_574_object = var_1_object; // 0xb7f MovT
	func_5490(var_574_object); // 0xb80 NEW_2
	if(var_573_bool == 0) goto Label_2948; // 0xb82 JumpB
	var_566_bool = 1; // 0xb83 MovB
	
Label_2948:
	if(var_566_bool == 0) goto Label_2969; // 0xb84 JumpB
	var_592_object = Obj(); var_593_object = Obj(); // 0xb85 PushV
	var_592_object = var_1_object; // 0xb86 MovT
	var_593_object = var_0_object; // 0xb87 MovT
	func_5401(); // 0xb88 NEW_2
	var_596_string = ""; // 0xb8a PushV
	var_596_string = "Grin"; // 0xb8b MovS
	func_3031(var_560_object, var_596_string); // 0xb8c NEW_2
	var_604_int = 509926; // 0xb8e PushI
	SetMessage(var_604_int); // 0xb8f TObjFunc
	ClearReplies(); // 0xb91 TObjFunc
	var_605_int = 509927; // 0xb93 PushI
	var_606_int = 10938; // 0xb94 PushI
	var_607_int = 10937; // 0xb95 PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0xb96 TObjFunc
	goto Label_3001; // 0xb98 Jump
	
Label_3001:
	var_608_bool = 0; // 0xbb9 PushV
	func_5225(var_608_bool); // 0xbba NEW_2
	if(var_608_bool == 0) goto Label_3016; // 0xbbc JumpB
	
Label_3005:
	lshWaitForAnimEnd(); // 0xbbd Func
	var_609_string = var_3_string; // 0xbbf PushT
	if(var_609_string == 0) goto Label_3010; // 0xbc0 JumpB
	goto Label_3015; // 0xbc1 Jump
	
Label_3015:
	goto Label_3030; // 0xbc7 Jump
	
Label_3030:
	return 0; // 0xbd6 Return
	
Label_3010:
	var_610_string = ""; // 0xbc2 PushV
	var_610_string = var_2_object; // 0xbc3 MovT
	func_5032(var_610_string); // 0xbc4 NEW_2
	goto Label_3005; // 0xbc6 Jump
	
Label_3016:
	var_611_string = "all"; // 0xbc8 PushS
	var_612_string = "idle"; // 0xbc9 PushS
	PlayAnimation(var_611_string, var_612_string); // 0xbca Func
	
Label_3020:
	WaitForAnimEnd(); // 0xbcc Func
	var_613_string = var_3_string; // 0xbce PushT
	if(var_613_string == 0) goto Label_3025; // 0xbcf JumpB
	goto Label_3030; // 0xbd0 Jump
	
Label_3025:
	var_614_string = "all"; // 0xbd1 PushS
	var_615_string = "idle"; // 0xbd2 PushS
	PlayAnimation(var_614_string, var_615_string); // 0xbd3 Func
	goto Label_3020; // 0xbd5 Jump
	
Label_2969:
	var_616_string = ""; // 0xb99 PushV
	var_616_string = "Penetrating"; // 0xb9a MovS
	func_3031(var_560_object, var_616_string); // 0xb9b NEW_2
	var_617_int = 532898; // 0xb9d PushI
	SetMessage(var_617_int); // 0xb9e TObjFunc
	ClearReplies(); // 0xba0 TObjFunc
	var_618_bool = 0; var_619_object = Obj(); // 0xba2 PushV
	var_619_object = var_1_object; // 0xba3 MovT
	func_5527(var_619_object); // 0xba4 NEW_2
	if(var_618_bool == 0) goto Label_2988; // 0xba6 JumpB
	var_624_int = 532897; // 0xba7 PushI
	var_625_int = 11224; // 0xba8 PushI
	var_626_int = 34384; // 0xba9 PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0xbaa TObjFunc
	
Label_2988:
	var_627_int = 534175; // 0xbac PushI
	var_628_int = -1; // 0xbad PushI
	var_629_int = 35757; // 0xbae PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0xbaf TObjFunc
	var_630_int = 534555; // 0xbb1 PushI
	var_631_int = -1; // 0xbb2 PushI
	var_632_int = 36187; // 0xbb3 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xbb4 TObjFunc
	goto Label_3001; // 0xbb6 Jump
}


func_5490(var_573_bool)
{
	var_575_bool = 0; // 0x1573 PushV
	var_575_bool = 0; // 0x1574 MovB
	var_576_bool = 0; // 0x1575 PushV
	var_576_bool = 0; // 0x1576 MovB
	var_577_int = 0; var_578_string = ""; // 0x1577 PushV
	var_578_string = "d3q01"; // 0x1578 MovS
	func_5101(var_577_int, var_578_string); // 0x1579 NEW_2
	var_579_int = 0; // 0x157b PushI
	var_580_bool = var_577_int == var_579_int; // 0x157c Eq
	var_581_bool = var_580_bool == 0; // 0x157d Not
	if(var_581_bool == 0) goto Label_5512; // 0x157e JumpB
	var_582_int = 0; var_583_string = ""; // 0x157f PushV
	var_583_string = "d3q01"; // 0x1580 MovS
	func_5101(var_582_int, var_583_string); // 0x1581 NEW_2
	var_584_int = 1000; // 0x1583 PushI
	var_585_bool = var_582_int == var_584_int; // 0x1584 Eq
	var_586_bool = var_585_bool == 0; // 0x1585 Not
	if(var_586_bool == 0) goto Label_5512; // 0x1586 JumpB
	var_576_bool = 1; // 0x1587 MovB
	
Label_5512:
	if(var_576_bool == 0) goto Label_5522; // 0x1588 JumpB
	var_587_int = 0; var_588_string = ""; // 0x1589 PushV
	var_588_string = "d3q01"; // 0x158a MovS
	func_5101(var_587_int, var_588_string); // 0x158b NEW_2
	var_589_int = -1; // 0x158d PushI
	var_590_bool = var_587_int == var_589_int; // 0x158e Eq
	var_591_bool = var_590_bool == 0; // 0x158f Not
	if(var_591_bool == 0) goto Label_5522; // 0x1590 JumpB
	var_575_bool = 1; // 0x1591 MovB
	
Label_5522:
	if(var_575_bool == 0) goto Label_5525; // 0x1592 JumpB
	var_573_bool = 1; // 0x1593 MovB
	return 0; // 0x1594 Return
	
Label_5525:
	var_573_bool = 0; // 0x1595 MovB
	return 0; // 0x1596 Return
}


func_5239()
{
	var_59_string = "ood1Katerina1"; // 0x1478 PushS
	var_60_int = 1; // 0x1479 PushI
	SetVariable(var_59_string, var_60_int); // 0x147a Func
	return 0; // 0x147c Return
}


func_632(var_0_object, var_903_int, var_904_object)
{
	var_906_object = Obj(); var_907_bool = 0; var_908_int = 0; var_909_bool = 0; var_910_object = Obj(); var_911_bool = 0; var_912_int = 0; var_913_bool = 0; // 0x278 PushV
	var_0_object = var_904_object; // 0x279 TMov
	var_914_bool = 0; var_915_object = Obj(); var_916_float = 0; // 0x27a PushV
	var_915_object = var_904_object; // 0x27b Mov
	var_916_float = 70.0; // 0x27c MovF
	func_4809(var_915_object, var_916_float); // 0x27d NEW_2
	var_917_bool = var_914_bool == 0; // 0x27f Not
	if(var_917_bool == 0) goto Label_643; // 0x280 JumpB
	var_903_int = -2; // 0x281 MovI
	return 8; // 0x282 Return
	
Label_643:
	CreateDialog(var_910_object); // 0x283 Func
	var_918_int = 0; // 0x285 PushV
	func_5219(var_918_int); // 0x286 NEW_2
	SetNPCName(var_918_int); // 0x288 ObjFunc
	var_919_int = 0; // 0x28a PushV
	func_5217(var_919_int); // 0x28b NEW_2
	SetNPCDescription(var_919_int); // 0x28d ObjFunc
	var_920_string = ""; // 0x28f PushV
	func_5221(var_920_string); // 0x290 NEW_2
	SetPhoto(var_920_string); // 0x292 ObjFunc
	var_921_string = ""; // 0x294 PushV
	func_5223(var_921_string); // 0x295 NEW_2
	SetPhoto2(var_921_string); // 0x297 ObjFunc
	var_922_int = 0; // 0x299 PushV
	func_5883(var_922_int); // 0x29a NEW_2
	SetPlayerName(var_922_int); // 0x29c ObjFunc
	var_912_int = -1; // 0x29e MovI
	IsOverrideActive(var_911_bool); // 0x29f Func
	var_923_bool = var_911_bool; // 0x2a1 Push
	if(var_923_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_903_int = -2; // 0x2a3 MovI
	return 8; // 0x2a4 Return
	
Label_677:
	DoDialog(var_910_object); // 0x2a5 Func
	var_924_bool = 0; var_925_object = Obj(); // 0x2a7 PushV
	var_926_object = Obj(); // 0x2a8 PushV
	func_5085(var_926_object); // 0x2a9 NEW_2
	var_925_object = var_926_object; // 0x2aa Mov
	func_4894(var_924_bool, var_925_object); // 0x2ac NEW_2
	var_927_object = Obj(); var_928_object = Obj(); // 0x2ae PushV
	var_927_object = var_904_object; // 0x2af Mov
	var_928_object = var_910_object; // 0x2b0 Mov
	TaskCall(3); // 0x2b1 TaskCall
	func_713(var_929_object, var_930_object, var_931_string, var_932_bool, var_927_object, var_928_object); // 0x2b2 NEW_2
	TaskReturn(); // 0x2b3 TaskReturn
	IsDialogEnd(var_913_bool); // 0x2b5 ObjFunc
	
Label_695:
	var_979_bool = var_913_bool == 0; // 0x2b7 Not
	if(var_979_bool == 0) goto Label_702; // 0x2b8 JumpB
	sync(); // 0x2b9 Func
	IsDialogEnd(var_913_bool); // 0x2bb ObjFunc
	goto Label_695; // 0x2bd Jump
	
Label_702:
	var_980_object = Obj(); // 0x2be PushV
	var_980_object = var_904_object; // 0x2bf Mov
	func_4877(); // 0x2c0 NEW_2
	StopDialog(var_910_object); // 0x2c2 Func
	GetReturnValue(var_912_int); // 0x2c4 ObjFunc
	var_903_int = var_912_int; // 0x2c6 Mov
	return 8; // 0x2c7 Return
}


func_5753()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1679 PushV
	var_79_int = 666; // 0x167a PushI
	var_80_int = 2; // 0x167b PushI
	var_81_int = 534120; // 0x167c PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x167d Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x167f PushV
	var_83_object = var_78_object; // 0x1680 Mov
	var_84_int = -1; // 0x1681 MovI
	func_5805(var_82_bool, var_83_object, var_84_int); // 0x1682 NEW_2
	return 2; // 0x1684 Return
}


func_3961(var_2_object, var_735_string)
{
	var_736_bool = 0; // 0xf7a PushV
	func_5225(var_736_bool); // 0xf7b NEW_2
	var_737_bool = var_736_bool == 0; // 0xf7d Not
	if(var_737_bool == 0) goto Label_3968; // 0xf7e JumpB
	return 0; // 0xf7f Return
	
Label_3968:
	var_738_bool = var_735_string == var_2_object; // 0xf80 Eq
	if(var_738_bool == 0) goto Label_3971; // 0xf81 JumpB
	return 0; // 0xf82 Return
	
Label_3971:
	var_739_string = ""; var_740_bool = 0; // 0xf83 PushV
	var_739_string = var_735_string; // 0xf84 Mov
	var_741_string = ""; // 0xf85 PushS
	var_742_bool = var_735_string == var_741_string; // 0xf86 Eq
	if(var_742_bool == 0) goto Label_3978; // 0xf87 JumpB
	var_740_bool = 0; // 0xf88 MovB
	goto Label_3979; // 0xf89 Jump
	
Label_3979:
	func_5048(var_739_string, var_740_bool); // 0xf8b NEW_2
	var_2_object = var_735_string; // 0xf8d TMov
	return 0; // 0xf8e Return
	
Label_3978:
	var_740_bool = 1; // 0xf8a MovB
}


func_2426(var_0_object, var_435_int, var_436_object)
{
	var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; // 0x97a PushV
	var_0_object = var_436_object; // 0x97b TMov
	var_446_bool = 0; var_447_object = Obj(); var_448_float = 0; // 0x97c PushV
	var_447_object = var_436_object; // 0x97d Mov
	var_448_float = 70.0; // 0x97e MovF
	func_4809(var_447_object, var_448_float); // 0x97f NEW_2
	var_449_bool = var_446_bool == 0; // 0x981 Not
	if(var_449_bool == 0) goto Label_2437; // 0x982 JumpB
	var_435_int = -2; // 0x983 MovI
	return 8; // 0x984 Return
	
Label_2437:
	CreateDialog(var_442_object); // 0x985 Func
	var_450_int = 0; // 0x987 PushV
	func_5219(var_450_int); // 0x988 NEW_2
	SetNPCName(var_450_int); // 0x98a ObjFunc
	var_451_int = 0; // 0x98c PushV
	func_5217(var_451_int); // 0x98d NEW_2
	SetNPCDescription(var_451_int); // 0x98f ObjFunc
	var_452_string = ""; // 0x991 PushV
	func_5221(var_452_string); // 0x992 NEW_2
	SetPhoto(var_452_string); // 0x994 ObjFunc
	var_453_string = ""; // 0x996 PushV
	func_5223(var_453_string); // 0x997 NEW_2
	SetPhoto2(var_453_string); // 0x999 ObjFunc
	var_454_int = 0; // 0x99b PushV
	func_5883(var_454_int); // 0x99c NEW_2
	SetPlayerName(var_454_int); // 0x99e ObjFunc
	var_444_int = -1; // 0x9a0 MovI
	IsOverrideActive(var_443_bool); // 0x9a1 Func
	var_455_bool = var_443_bool; // 0x9a3 Push
	if(var_455_bool == 0) goto Label_2471; // 0x9a4 JumpB
	var_435_int = -2; // 0x9a5 MovI
	return 8; // 0x9a6 Return
	
Label_2471:
	DoDialog(var_442_object); // 0x9a7 Func
	var_456_bool = 0; var_457_object = Obj(); // 0x9a9 PushV
	var_458_object = Obj(); // 0x9aa PushV
	func_5085(var_458_object); // 0x9ab NEW_2
	var_457_object = var_458_object; // 0x9ac Mov
	func_4894(var_456_bool, var_457_object); // 0x9ae NEW_2
	var_459_object = Obj(); var_460_object = Obj(); // 0x9b0 PushV
	var_459_object = var_436_object; // 0x9b1 Mov
	var_460_object = var_442_object; // 0x9b2 Mov
	TaskCall(11); // 0x9b3 TaskCall
	func_2507(var_461_object, var_462_object, var_463_string, var_464_bool, var_459_object, var_460_object); // 0x9b4 NEW_2
	TaskReturn(); // 0x9b5 TaskReturn
	IsDialogEnd(var_445_bool); // 0x9b7 ObjFunc
	
Label_2489:
	var_531_bool = var_445_bool == 0; // 0x9b9 Not
	if(var_531_bool == 0) goto Label_2496; // 0x9ba JumpB
	sync(); // 0x9bb Func
	IsDialogEnd(var_445_bool); // 0x9bd ObjFunc
	goto Label_2489; // 0x9bf Jump
	
Label_2496:
	var_532_object = Obj(); // 0x9c0 PushV
	var_532_object = var_436_object; // 0x9c1 Mov
	func_4877(); // 0x9c2 NEW_2
	StopDialog(var_442_object); // 0x9c4 Func
	GetReturnValue(var_444_int); // 0x9c6 ObjFunc
	var_435_int = var_444_int; // 0x9c8 Mov
	return 8; // 0x9c9 Return
}


func_5245()
{
	var_400_string = "ood1Katerina2"; // 0x147e PushS
	var_401_int = 1; // 0x147f PushI
	SetVariable(var_400_string, var_401_int); // 0x1480 Func
	return 0; // 0x1482 Return
}


func_4989(var_185_bool)
{
	var_187_string = ""; var_188_int = 0; var_189_bool = 0; var_190_int = 0; var_191_string = ""; var_192_string = ""; var_193_int = 0; var_194_bool = 0; var_195_int = 0; var_196_string = ""; // 0x137d PushV
	var_197_string = "d"; // 0x137e PushS
	var_198_int = 0; // 0x137f PushV
	func_5178(var_198_int); // 0x1380 NEW_2
	var_204_int = var_197_string + var_198_int; // 0x1382 Add
	var_205_string = "m"; // 0x1383 PushS
	var_192_string = var_204_int + var_205_string; // 0x1384 Add2
	var_193_int = 0; // 0x1385 MovI
	
Label_4998:
	var_206_int = 1; // 0x1386 PushI
	if(var_206_int == 0) goto Label_5011; // 0x1387 JumpB
	var_207_int = 1; // 0x1388 PushI
	var_208_int = var_193_int + var_207_int; // 0x1389 Add
	var_209_int = var_192_string + var_208_int; // 0x138a Add
	HasProperty(var_209_int, var_194_bool); // 0x138b ObjFunc
	var_210_bool = var_194_bool == 0; // 0x138d Not
	if(var_210_bool == 0) goto Label_5008; // 0x138e JumpB
	goto Label_5011; // 0x138f Jump
	
Label_5011:
	var_211_bool = var_193_int == 0; // 0x1393 Not
	if(var_211_bool == 0) goto Label_5015; // 0x1394 JumpB
	var_185_bool = 0; // 0x1395 MovB
	return 10; // 0x1396 Return
	
Label_5015:
	var_195_int = 0; // 0x1397 MovI
	var_212_int = 1; // 0x1398 PushI
	var_213_bool = var_193_int > var_212_int; // 0x1399 GT
	if(var_213_bool == 0) goto Label_5021; // 0x139a JumpB
	irand(var_195_int, var_193_int); // 0x139b Func
	
Label_5021:
	var_214_int = 1; // 0x139d PushI
	var_215_int = var_195_int + var_214_int; // 0x139e Add
	var_216_int = var_192_string + var_215_int; // 0x139f Add
	GetProperty(var_216_int, var_196_string); // 0x13a0 ObjFunc
	var_217_bool = 0; var_218_string = ""; // 0x13a2 PushV
	var_218_string = var_196_string; // 0x13a3 Mov
	func_5063(var_217_bool, var_218_string); // 0x13a4 NEW_2
	var_185_bool = var_217_bool; // 0x13a5 Mov
	return 10; // 0x13a7 Return
	
Label_5008:
	var_219_int = 1; // 0x1390 PushI
	var_193_int = var_193_int + var_219_int; // 0x1391 Add2
	goto Label_4998; // 0x1392 Jump
}


func_5251()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x1483 PushV
	var_61_string = "d10q02"; // 0x1484 PushS
	var_62_int = 1; // 0x1485 PushI
	SetVariable(var_61_string, var_62_int); // 0x1486 Func
	var_63_object = Obj(); // 0x1488 PushV
	func_5833(var_63_object); // 0x1489 NEW_2
	var_60_object = var_63_object; // 0x148a Mov
	var_70_string = "d10q02KaterinaGotoRubin"; // 0x148c PushS
	var_71_string = "pt_region01_center01"; // 0x148d PushS
	var_72_int = 0; // 0x148e PushI
	var_73_int = 515467; // 0x148f PushI
	var_74_float = 0; // 0x1490 PushV
	func_5173(var_74_float); // 0x1491 NEW_2
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1493 ObjFunc
	func_5753(); // 0x1496 NEW_2
	func_5766(); // 0x1499 NEW_2
	var_108_object = Obj(); var_109_string = ""; // 0x149b PushV
	var_109_string = "quest_d10_02"; // 0x149c MovS
	func_5106(var_108_object, var_109_string); // 0x149d NEW_2
	return 2; // 0x149f Return
}


func_5766()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1686 PushV
	var_102_int = 667; // 0x1687 PushI
	var_103_int = 2; // 0x1688 PushI
	var_104_int = 534121; // 0x1689 PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x168a Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x168c PushV
	var_106_object = var_101_object; // 0x168d Mov
	var_107_int = 666; // 0x168e MovI
	func_5805(var_105_bool, var_106_object, var_107_int); // 0x168f NEW_2
	return 2; // 0x1691 Return
}


func_1679(var_0_object, var_790_int, var_791_object)
{
	var_793_object = Obj(); var_794_bool = 0; var_795_int = 0; var_796_bool = 0; var_797_object = Obj(); var_798_bool = 0; var_799_int = 0; var_800_bool = 0; // 0x68f PushV
	var_0_object = var_791_object; // 0x690 TMov
	var_801_bool = 0; var_802_object = Obj(); var_803_float = 0; // 0x691 PushV
	var_802_object = var_791_object; // 0x692 Mov
	var_803_float = 70.0; // 0x693 MovF
	func_4809(var_802_object, var_803_float); // 0x694 NEW_2
	var_804_bool = var_801_bool == 0; // 0x696 Not
	if(var_804_bool == 0) goto Label_1690; // 0x697 JumpB
	var_790_int = -2; // 0x698 MovI
	return 8; // 0x699 Return
	
Label_1690:
	CreateDialog(var_797_object); // 0x69a Func
	var_805_int = 0; // 0x69c PushV
	func_5219(var_805_int); // 0x69d NEW_2
	SetNPCName(var_805_int); // 0x69f ObjFunc
	var_806_int = 0; // 0x6a1 PushV
	func_5217(var_806_int); // 0x6a2 NEW_2
	SetNPCDescription(var_806_int); // 0x6a4 ObjFunc
	var_807_string = ""; // 0x6a6 PushV
	func_5221(var_807_string); // 0x6a7 NEW_2
	SetPhoto(var_807_string); // 0x6a9 ObjFunc
	var_808_string = ""; // 0x6ab PushV
	func_5223(var_808_string); // 0x6ac NEW_2
	SetPhoto2(var_808_string); // 0x6ae ObjFunc
	var_809_int = 0; // 0x6b0 PushV
	func_5883(var_809_int); // 0x6b1 NEW_2
	SetPlayerName(var_809_int); // 0x6b3 ObjFunc
	var_799_int = -1; // 0x6b5 MovI
	IsOverrideActive(var_798_bool); // 0x6b6 Func
	var_810_bool = var_798_bool; // 0x6b8 Push
	if(var_810_bool == 0) goto Label_1724; // 0x6b9 JumpB
	var_790_int = -2; // 0x6ba MovI
	return 8; // 0x6bb Return
	
Label_1724:
	DoDialog(var_797_object); // 0x6bc Func
	var_811_bool = 0; var_812_object = Obj(); // 0x6be PushV
	var_813_object = Obj(); // 0x6bf PushV
	func_5085(var_813_object); // 0x6c0 NEW_2
	var_812_object = var_813_object; // 0x6c1 Mov
	func_4894(var_811_bool, var_812_object); // 0x6c3 NEW_2
	var_814_object = Obj(); var_815_object = Obj(); // 0x6c5 PushV
	var_814_object = var_791_object; // 0x6c6 Mov
	var_815_object = var_797_object; // 0x6c7 Mov
	TaskCall(9); // 0x6c8 TaskCall
	func_1760(var_816_object, var_817_object, var_818_string, var_819_bool, var_814_object, var_815_object); // 0x6c9 NEW_2
	TaskReturn(); // 0x6ca TaskReturn
	IsDialogEnd(var_800_bool); // 0x6cc ObjFunc
	
Label_1742:
	var_899_bool = var_800_bool == 0; // 0x6ce Not
	if(var_899_bool == 0) goto Label_1749; // 0x6cf JumpB
	sync(); // 0x6d0 Func
	IsDialogEnd(var_800_bool); // 0x6d2 ObjFunc
	goto Label_1742; // 0x6d4 Jump
	
Label_1749:
	var_900_object = Obj(); // 0x6d5 PushV
	var_900_object = var_791_object; // 0x6d6 Mov
	func_4877(); // 0x6d7 NEW_2
	StopDialog(var_797_object); // 0x6d9 Func
	GetReturnValue(var_799_int); // 0x6db ObjFunc
	var_790_int = var_799_int; // 0x6dd Mov
	return 8; // 0x6de Return
}


func_5779()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x1693 PushV
	var_106_int = 123; // 0x1694 PushI
	var_107_int = 1; // 0x1695 PushI
	var_108_int = 513746; // 0x1696 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x1697 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x1699 PushV
	var_110_object = var_105_object; // 0x169a Mov
	var_111_int = 111; // 0x169b MovI
	func_5805(var_109_bool, var_110_object, var_111_int); // 0x169c NEW_2
	return 2; // 0x169e Return
}


func_5527(var_618_bool)
{
	var_620_int = 0; var_621_string = ""; // 0x1598 PushV
	var_621_string = "ood3Katerina2"; // 0x1599 MovS
	func_5101(var_620_int, var_621_string); // 0x159a NEW_2
	var_622_int = 0; // 0x159c PushI
	var_623_bool = var_620_int == var_622_int; // 0x159d Eq
	if(var_623_bool == 0) goto Label_5537; // 0x159e JumpB
	var_618_bool = 1; // 0x159f MovB
	return 0; // 0x15a0 Return
	
Label_5537:
	var_618_bool = 0; // 0x15a1 MovB
	return 0; // 0x15a2 Return
}


func_3485(var_0_object, var_637_int, var_638_object)
{
	var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; var_644_object = Obj(); var_645_bool = 0; var_646_int = 0; var_647_bool = 0; // 0xd9d PushV
	var_0_object = var_638_object; // 0xd9e TMov
	var_648_bool = 0; var_649_object = Obj(); var_650_float = 0; // 0xd9f PushV
	var_649_object = var_638_object; // 0xda0 Mov
	var_650_float = 70.0; // 0xda1 MovF
	func_4809(var_649_object, var_650_float); // 0xda2 NEW_2
	var_651_bool = var_648_bool == 0; // 0xda4 Not
	if(var_651_bool == 0) goto Label_3496; // 0xda5 JumpB
	var_637_int = -2; // 0xda6 MovI
	return 8; // 0xda7 Return
	
Label_3496:
	CreateDialog(var_644_object); // 0xda8 Func
	var_652_int = 0; // 0xdaa PushV
	func_5219(var_652_int); // 0xdab NEW_2
	SetNPCName(var_652_int); // 0xdad ObjFunc
	var_653_int = 0; // 0xdaf PushV
	func_5217(var_653_int); // 0xdb0 NEW_2
	SetNPCDescription(var_653_int); // 0xdb2 ObjFunc
	var_654_string = ""; // 0xdb4 PushV
	func_5221(var_654_string); // 0xdb5 NEW_2
	SetPhoto(var_654_string); // 0xdb7 ObjFunc
	var_655_string = ""; // 0xdb9 PushV
	func_5223(var_655_string); // 0xdba NEW_2
	SetPhoto2(var_655_string); // 0xdbc ObjFunc
	var_656_int = 0; // 0xdbe PushV
	func_5883(var_656_int); // 0xdbf NEW_2
	SetPlayerName(var_656_int); // 0xdc1 ObjFunc
	var_646_int = -1; // 0xdc3 MovI
	IsOverrideActive(var_645_bool); // 0xdc4 Func
	var_657_bool = var_645_bool; // 0xdc6 Push
	if(var_657_bool == 0) goto Label_3530; // 0xdc7 JumpB
	var_637_int = -2; // 0xdc8 MovI
	return 8; // 0xdc9 Return
	
Label_3530:
	DoDialog(var_644_object); // 0xdca Func
	var_658_bool = 0; var_659_object = Obj(); // 0xdcc PushV
	var_660_object = Obj(); // 0xdcd PushV
	func_5085(var_660_object); // 0xdce NEW_2
	var_659_object = var_660_object; // 0xdcf Mov
	func_4894(var_658_bool, var_659_object); // 0xdd1 NEW_2
	var_661_object = Obj(); var_662_object = Obj(); // 0xdd3 PushV
	var_661_object = var_638_object; // 0xdd4 Mov
	var_662_object = var_644_object; // 0xdd5 Mov
	TaskCall(15); // 0xdd6 TaskCall
	func_3566(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object); // 0xdd7 NEW_2
	TaskReturn(); // 0xdd8 TaskReturn
	IsDialogEnd(var_647_bool); // 0xdda ObjFunc
	
Label_3548:
	var_700_bool = var_647_bool == 0; // 0xddc Not
	if(var_700_bool == 0) goto Label_3555; // 0xddd JumpB
	sync(); // 0xdde Func
	IsDialogEnd(var_647_bool); // 0xde0 ObjFunc
	goto Label_3548; // 0xde2 Jump
	
Label_3555:
	var_701_object = Obj(); // 0xde3 PushV
	var_701_object = var_638_object; // 0xde4 Mov
	func_4877(); // 0xde5 NEW_2
	StopDialog(var_644_object); // 0xde7 Func
	GetReturnValue(var_646_int); // 0xde9 ObjFunc
	var_637_int = var_646_int; // 0xdeb Mov
	return 8; // 0xdec Return
}


func_5792(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x16a0 PushV
	GetDiaryRoot(var_120_object); // 0x16a1 Func
	var_121_bool = var_120_object == 0; // 0x16a3 Not
	if(var_121_bool == 0) goto Label_5802; // 0x16a4 JumpB
	var_122_string = "Can't retrieve diary root"; // 0x16a5 PushS
	Trace(var_122_string); // 0x16a6 Func
	var_118_object = 0; // 0x16a8 MovB
	return 2; // 0x16a9 Return
	
Label_5802:
	var_118_object = var_120_object; // 0x16aa Mov
	return 2; // 0x16ab Return
}


func_5281()
{
	var_942_string = "ood10Katerina1"; // 0x14a2 PushS
	var_943_int = 1; // 0x14a3 PushI
	SetVariable(var_942_string, var_943_int); // 0x14a4 Func
	return 0; // 0x14a6 Return
}


func_4770(var_90_bool)
{
	var_90_bool = 1; // 0x12a2 MovB
	return 0; // 0x12a3 Return
}


func_5539(var_419_bool)
{
	var_421_int = 0; var_422_string = ""; // 0x15a4 PushV
	var_422_string = "ood1Katerina3"; // 0x15a5 MovS
	func_5101(var_421_int, var_422_string); // 0x15a6 NEW_2
	var_423_int = 0; // 0x15a8 PushI
	var_424_bool = var_421_int == var_423_int; // 0x15a9 Eq
	if(var_424_bool == 0) goto Label_5549; // 0x15aa JumpB
	var_419_bool = 1; // 0x15ab MovB
	return 0; // 0x15ac Return
	
Label_5549:
	var_419_bool = 0; // 0x15ad MovB
	return 0; // 0x15ae Return
}


func_4772()
{
	StopAnimation(); // 0x12a4 Func
	StopGroup0(); // 0x12a6 Func
	return 0; // 0x12a8 Return
}


func_5287()
{
	var_946_string = "d10KaterinaVisit"; // 0x14a8 PushS
	var_947_int = 1; // 0x14a9 PushI
	SetVariable(var_946_string, var_947_int); // 0x14aa Func
	return 0; // 0x14ac Return
}


func_5032(var_278_string)
{
	var_279_bool = 0; var_280_float = 0; var_281_float = 0; var_282_bool = 0; var_283_float = 0; var_284_float = 0; // 0x13a8 PushV
	lshHasAnimation(var_282_bool, var_278_string); // 0x13a9 Func
	var_285_bool = var_282_bool; // 0x13ab Push
	if(var_285_bool == 0) goto Label_5043; // 0x13ac JumpB
	lshGetAnimTimes(var_278_string, var_283_float, var_284_float); // 0x13ad Func
	var_286_bool = 0; // 0x13af PushB
	lshPlayAnimation(var_283_float, var_284_float, var_286_bool); // 0x13b0 Func
	goto Label_5047; // 0x13b2 Jump
	
Label_5047:
	return 6; // 0x13b7 Return
	
Label_5043:
	var_287_string = "Can't find lsh animation : "; // 0x13b3 PushS
	var_288_int = var_287_string + var_278_string; // 0x13b4 Add
	Trace(var_288_int); // 0x13b5 Func
}


func_4777(var_66_float)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x12a9 PushV
	GetPosition(var_71_cvector); // 0x12aa Func
	GetPosition(var_72_cvector); // 0x12ac ObjFunc
	var_73_cvector = var_72_cvector - var_71_cvector; // 0x12ae Sub2
	var_66_float = var_73_cvector | var_73_cvector; // 0x12af Or2
	return 6; // 0x12b0 Return
}


func_5293()
{
	var_95_string = "ood3Katerina2"; // 0x14ae PushS
	var_96_int = 1; // 0x14af PushI
	SetVariable(var_95_string, var_96_int); // 0x14b0 Func
	return 0; // 0x14b2 Return
}


func_5805(var_109_bool, var_110_object, var_111_int)
{
	var_112_object = Obj(); var_113_object = Obj(); var_114_int = 0; var_115_object = Obj(); var_116_object = Obj(); var_117_int = 0; // 0x16ad PushV
	var_118_object = Obj(); // 0x16ae PushV
	func_5792(var_118_object); // 0x16af NEW_2
	var_115_object = var_118_object; // 0x16b0 Mov
	Find(var_111_int, var_116_object); // 0x16b2 ObjFunc
	var_123_bool = var_116_object == 0; // 0x16b4 Not
	if(var_123_bool == 0) goto Label_5820; // 0x16b5 JumpB
	var_124_string = "Can't find diary parent with id: "; // 0x16b6 PushS
	var_125_int = var_124_string + var_111_int; // 0x16b7 Add
	Trace(var_125_int); // 0x16b8 Func
	var_109_bool = 0; // 0x16ba MovB
	return 6; // 0x16bb Return
	
Label_5820:
	AddChild(var_110_object); // 0x16bc ObjFunc
	var_126_int = 7; // 0x16be PushI
	SendWorldWndMessage(var_126_int); // 0x16bf Func
	GetCategory(var_117_int); // 0x16c1 ObjFunc
	SetDiarySection(var_117_int); // 0x16c3 Func
	var_109_bool = 0; // 0x16c5 MovB
	return 6; // 0x16c6 Return
}


func_4525(var_0_object)
{
	var_52_bool = 0; // 0x11ad PushV
	func_4804(var_52_bool); // 0x11ae NEW_2
	var_55_bool = var_52_bool == 0; // 0x11b0 Not
	if(var_55_bool == 0) goto Label_4532; // 0x11b1 JumpB
	Hold(); // 0x11b2 Func
	
Label_4532:
	GetDirection(var_0_object); // 0x11b4 Func
	
Label_4534:
	func_4701(); // 0x11b7 NEW_2
	goto Label_4534; // 0x11b9 Jump
}


func_5551(var_744_bool)
{
	var_746_int = 0; var_747_string = ""; // 0x15b0 PushV
	var_747_string = "d5q01"; // 0x15b1 MovS
	func_5101(var_746_int, var_747_string); // 0x15b2 NEW_2
	var_748_int = 3; // 0x15b4 PushI
	var_749_bool = var_746_int == var_748_int; // 0x15b5 Eq
	if(var_749_bool == 0) goto Label_5561; // 0x15b6 JumpB
	var_744_bool = 1; // 0x15b7 MovB
	return 0; // 0x15b8 Return
	
Label_5561:
	var_744_bool = 0; // 0x15b9 MovB
	return 0; // 0x15ba Return
}


func_4785(var_59_bool, var_60_cvector)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; // 0x12b1 PushV
	GetPosition(var_64_cvector); // 0x12b2 Func
	var_65_cvector = var_60_cvector - var_64_cvector; // 0x12b4 Sub2
	var_67_float = GetByIndex(var_65_cvector, 0); // 0x12b5 PushE
	var_68_float = GetByIndex(var_65_cvector, 2); // 0x12b6 PushE
	Rotate(var_67_float, var_68_float, var_66_bool); // 0x12b7 Func
	var_59_bool = var_66_bool; // 0x12b9 Mov
	return 6; // 0x12ba Return
}


func_5299()
{
	var_99_string = "d3KaterinaAboutKills"; // 0x14b4 PushS
	var_100_int = 1; // 0x14b5 PushI
	SetVariable(var_99_string, var_100_int); // 0x14b6 Func
	return 0; // 0x14b8 Return
}


func_5048(var_253_string, var_254_bool)
{
	var_257_bool = 0; var_258_float = 0; var_259_float = 0; var_260_bool = 0; var_261_float = 0; var_262_float = 0; // 0x13b8 PushV
	lshHasAnimation(var_260_bool, var_253_string); // 0x13b9 Func
	var_263_bool = var_260_bool; // 0x13bb Push
	if(var_263_bool == 0) goto Label_5058; // 0x13bc JumpB
	lshGetAnimTimes(var_253_string, var_261_float, var_262_float); // 0x13bd Func
	lshPlayAnimation(var_261_float, var_262_float, var_254_bool); // 0x13bf Func
	goto Label_5062; // 0x13c1 Jump
	
Label_5062:
	return 6; // 0x13c6 Return
	
Label_5058:
	var_264_string = "Can't find lsh animation : "; // 0x13c2 PushS
	var_265_int = var_264_string + var_253_string; // 0x13c3 Add
	Trace(var_265_int); // 0x13c4 Func
}


func_5305()
{
	var_65_string = "ood1Katerina3"; // 0x14ba PushS
	var_66_int = 1; // 0x14bb PushI
	SetVariable(var_65_string, var_66_int); // 0x14bc Func
	return 0; // 0x14be Return
}


func_1209(var_0_object, var_1_object, var_2_object, var_3_string, var_1007_object, var_1008_object)
{
	var_0_object = var_1008_object; // 0x4ba TMov
	var_1_object = var_1007_object; // 0x4bb TMov
	var_3_string = 0; // 0x4bc TMovB
	var_1013_int = 1; // 0x4bd PushI
	if(var_1013_int == 0) goto Label_1242; // 0x4be JumpB
	var_1014_string = ""; // 0x4bf PushV
	var_1014_string = "Neutral"; // 0x4c0 MovS
	func_1272(var_1008_object, var_1014_string); // 0x4c1 NEW_2
	var_1022_int = 535294; // 0x4c3 PushI
	SetMessage(var_1022_int); // 0x4c4 TObjFunc
	ClearReplies(); // 0x4c6 TObjFunc
	var_1023_int = 535295; // 0x4c8 PushI
	var_1024_int = 36973; // 0x4c9 PushI
	var_1025_int = 36972; // 0x4ca PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0x4cb TObjFunc
	var_1026_int = 535302; // 0x4cd PushI
	var_1027_int = -1; // 0x4ce PushI
	var_1028_int = 36980; // 0x4cf PushI
	AddReply(var_1026_int, var_1027_int, var_1028_int); // 0x4d0 TObjFunc
	var_1029_int = 535303; // 0x4d2 PushI
	var_1030_int = -1; // 0x4d3 PushI
	var_1031_int = 36981; // 0x4d4 PushI
	AddReply(var_1029_int, var_1030_int, var_1031_int); // 0x4d5 TObjFunc
	goto Label_1242; // 0x4d7 Jump
	
Label_1242:
	var_1032_bool = 0; // 0x4da PushV
	func_5225(var_1032_bool); // 0x4db NEW_2
	if(var_1032_bool == 0) goto Label_1257; // 0x4dd JumpB
	
Label_1246:
	lshWaitForAnimEnd(); // 0x4de Func
	var_1033_string = var_3_string; // 0x4e0 PushT
	if(var_1033_string == 0) goto Label_1251; // 0x4e1 JumpB
	goto Label_1256; // 0x4e2 Jump
	
Label_1256:
	goto Label_1271; // 0x4e8 Jump
	
Label_1271:
	return 0; // 0x4f7 Return
	
Label_1251:
	var_1034_string = ""; // 0x4e3 PushV
	var_1034_string = var_2_object; // 0x4e4 MovT
	func_5032(var_1034_string); // 0x4e5 NEW_2
	goto Label_1246; // 0x4e7 Jump
	
Label_1257:
	var_1035_string = "all"; // 0x4e9 PushS
	var_1036_string = "idle"; // 0x4ea PushS
	PlayAnimation(var_1035_string, var_1036_string); // 0x4eb Func
	
Label_1261:
	WaitForAnimEnd(); // 0x4ed Func
	var_1037_string = var_3_string; // 0x4ef PushT
	if(var_1037_string == 0) goto Label_1266; // 0x4f0 JumpB
	goto Label_1271; // 0x4f1 Jump
	
Label_1266:
	var_1038_string = "all"; // 0x4f2 PushS
	var_1039_string = "idle"; // 0x4f3 PushS
	PlayAnimation(var_1038_string, var_1039_string); // 0x4f4 Func
	goto Label_1261; // 0x4f6 Jump
}


func_4795(var_55_bool)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x12bb PushV
	GetPosition(var_58_cvector); // 0x12bc ObjFunc
	var_59_bool = 0; var_60_cvector = CVector(0,0,0); // 0x12be PushV
	var_60_cvector = var_58_cvector; // 0x12bf Mov
	func_4785(var_59_bool, var_60_cvector); // 0x12c0 NEW_2
	var_55_bool = var_59_bool; // 0x12c1 Mov
	return 2; // 0x12c3 Return
}


func_5563(var_764_bool)
{
	var_766_int = 0; var_767_string = ""; // 0x15bc PushV
	var_767_string = "d5q01"; // 0x15bd MovS
	func_5101(var_766_int, var_767_string); // 0x15be NEW_2
	var_768_int = 4; // 0x15c0 PushI
	var_769_bool = var_766_int == var_768_int; // 0x15c1 Eq
	if(var_769_bool == 0) goto Label_5573; // 0x15c2 JumpB
	var_764_bool = 1; // 0x15c3 MovB
	return 0; // 0x15c4 Return
	
Label_5573:
	var_764_bool = 0; // 0x15c5 MovB
	return 0; // 0x15c6 Return
}


func_1468(var_0_object, var_1_object, var_2_object, var_3_string, var_238_object, var_239_object)
{
	var_0_object = var_239_object; // 0x5bd TMov
	var_1_object = var_238_object; // 0x5be TMov
	var_3_string = 0; // 0x5bf TMovB
	var_244_int = 1; // 0x5c0 PushI
	if(var_244_int == 0) goto Label_1506; // 0x5c1 JumpB
	var_245_object = Obj(); var_246_object = Obj(); // 0x5c2 PushV
	var_245_object = var_1_object; // 0x5c3 MovT
	var_246_object = var_0_object; // 0x5c4 MovT
	func_5227(); // 0x5c5 NEW_2
	var_249_string = ""; // 0x5c7 PushV
	var_249_string = "Neutral"; // 0x5c8 MovS
	func_1536(var_239_object, var_249_string); // 0x5c9 NEW_2
	var_266_int = 500295; // 0x5cb PushI
	SetMessage(var_266_int); // 0x5cc TObjFunc
	ClearReplies(); // 0x5ce TObjFunc
	var_267_int = 500296; // 0x5d0 PushI
	var_268_int = 350; // 0x5d1 PushI
	var_269_int = 347; // 0x5d2 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x5d3 TObjFunc
	var_270_int = 500297; // 0x5d5 PushI
	var_271_int = 350; // 0x5d6 PushI
	var_272_int = 348; // 0x5d7 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x5d8 TObjFunc
	var_273_int = 500298; // 0x5da PushI
	var_274_int = 350; // 0x5db PushI
	var_275_int = 349; // 0x5dc PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x5dd TObjFunc
	goto Label_1506; // 0x5df Jump
	
Label_1506:
	var_276_bool = 0; // 0x5e2 PushV
	func_5225(var_276_bool); // 0x5e3 NEW_2
	if(var_276_bool == 0) goto Label_1521; // 0x5e5 JumpB
	
Label_1510:
	lshWaitForAnimEnd(); // 0x5e6 Func
	var_277_string = var_3_string; // 0x5e8 PushT
	if(var_277_string == 0) goto Label_1515; // 0x5e9 JumpB
	goto Label_1520; // 0x5ea Jump
	
Label_1520:
	goto Label_1535; // 0x5f0 Jump
	
Label_1535:
	return 0; // 0x5ff Return
	
Label_1515:
	var_278_string = ""; // 0x5eb PushV
	var_278_string = var_2_object; // 0x5ec MovT
	func_5032(var_278_string); // 0x5ed NEW_2
	goto Label_1510; // 0x5ef Jump
	
Label_1521:
	var_289_string = "all"; // 0x5f1 PushS
	var_290_string = "idle"; // 0x5f2 PushS
	PlayAnimation(var_289_string, var_290_string); // 0x5f3 Func
	
Label_1525:
	WaitForAnimEnd(); // 0x5f5 Func
	var_291_string = var_3_string; // 0x5f7 PushT
	if(var_291_string == 0) goto Label_1530; // 0x5f8 JumpB
	goto Label_1535; // 0x5f9 Jump
	
Label_1530:
	var_292_string = "all"; // 0x5fa PushS
	var_293_string = "idle"; // 0x5fb PushS
	PlayAnimation(var_292_string, var_293_string); // 0x5fc Func
	goto Label_1525; // 0x5fe Jump
}


func_4539(var_76_bool)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x11bb PushV
	var_79_string = "player"; // 0x11bc PushS
	FindActor(var_78_object, var_79_string); // 0x11bd Func
	var_80_bool = var_78_object == 0; // 0x11bf Not
	if(var_80_bool == 0) goto Label_4547; // 0x11c0 JumpB
	var_76_bool = 0; // 0x11c1 MovB
	return 2; // 0x11c2 Return
	
Label_4547:
	var_81_bool = 0; var_82_object = Obj(); // 0x11c3 PushV
	var_82_object = var_78_object; // 0x11c4 Mov
	func_4795(var_82_object); // 0x11c5 NEW_2
	var_76_bool = var_81_bool; // 0x11c6 Mov
	return 2; // 0x11c8 Return
}


func_5311()
{
	var_118_object = Obj(); var_119_string = ""; var_120_float = 0; // 0x14c0 PushV
	var_121_object = Obj(); // 0x14c1 PushV
	func_5833(var_121_object); // 0x14c2 NEW_2
	var_118_object = var_121_object; // 0x14c3 Mov
	var_119_string = "pt_region01_center01"; // 0x14c5 MovS
	var_120_float = 2; // 0x14c6 MovI
	func_5850(var_118_object, var_119_string, var_120_float); // 0x14c7 NEW_2
	var_141_object = Obj(); // 0x14c9 PushV
	func_5833(var_141_object); // 0x14ca NEW_2
	ShowMap(var_141_object); // 0x14cc ObjFunc
	return 0; // 0x14ce Return
}


func_4804(var_52_bool)
{
	var_53_bool = 0; var_54_bool = 0; // 0x12c4 PushV
	IsLoaded(var_54_bool); // 0x12c5 Func
	var_52_bool = var_54_bool; // 0x12c7 Mov
	return 2; // 0x12c8 Return
}


func_3780(var_0_object, var_704_int, var_705_object)
{
	var_707_object = Obj(); var_708_bool = 0; var_709_int = 0; var_710_bool = 0; var_711_object = Obj(); var_712_bool = 0; var_713_int = 0; var_714_bool = 0; // 0xec4 PushV
	var_0_object = var_705_object; // 0xec5 TMov
	var_715_bool = 0; var_716_object = Obj(); var_717_float = 0; // 0xec6 PushV
	var_716_object = var_705_object; // 0xec7 Mov
	var_717_float = 70.0; // 0xec8 MovF
	func_4809(var_716_object, var_717_float); // 0xec9 NEW_2
	var_718_bool = var_715_bool == 0; // 0xecb Not
	if(var_718_bool == 0) goto Label_3791; // 0xecc JumpB
	var_704_int = -2; // 0xecd MovI
	return 8; // 0xece Return
	
Label_3791:
	CreateDialog(var_711_object); // 0xecf Func
	var_719_int = 0; // 0xed1 PushV
	func_5219(var_719_int); // 0xed2 NEW_2
	SetNPCName(var_719_int); // 0xed4 ObjFunc
	var_720_int = 0; // 0xed6 PushV
	func_5217(var_720_int); // 0xed7 NEW_2
	SetNPCDescription(var_720_int); // 0xed9 ObjFunc
	var_721_string = ""; // 0xedb PushV
	func_5221(var_721_string); // 0xedc NEW_2
	SetPhoto(var_721_string); // 0xede ObjFunc
	var_722_string = ""; // 0xee0 PushV
	func_5223(var_722_string); // 0xee1 NEW_2
	SetPhoto2(var_722_string); // 0xee3 ObjFunc
	var_723_int = 0; // 0xee5 PushV
	func_5883(var_723_int); // 0xee6 NEW_2
	SetPlayerName(var_723_int); // 0xee8 ObjFunc
	var_713_int = -1; // 0xeea MovI
	IsOverrideActive(var_712_bool); // 0xeeb Func
	var_724_bool = var_712_bool; // 0xeed Push
	if(var_724_bool == 0) goto Label_3825; // 0xeee JumpB
	var_704_int = -2; // 0xeef MovI
	return 8; // 0xef0 Return
	
Label_3825:
	DoDialog(var_711_object); // 0xef1 Func
	var_725_bool = 0; var_726_object = Obj(); // 0xef3 PushV
	var_727_object = Obj(); // 0xef4 PushV
	func_5085(var_727_object); // 0xef5 NEW_2
	var_726_object = var_727_object; // 0xef6 Mov
	func_4894(var_725_bool, var_726_object); // 0xef8 NEW_2
	var_728_object = Obj(); var_729_object = Obj(); // 0xefa PushV
	var_728_object = var_705_object; // 0xefb Mov
	var_729_object = var_711_object; // 0xefc Mov
	TaskCall(17); // 0xefd TaskCall
	func_3861(var_730_object, var_731_object, var_732_string, var_733_bool, var_728_object, var_729_object); // 0xefe NEW_2
	TaskReturn(); // 0xeff TaskReturn
	IsDialogEnd(var_714_bool); // 0xf01 ObjFunc
	
Label_3843:
	var_786_bool = var_714_bool == 0; // 0xf03 Not
	if(var_786_bool == 0) goto Label_3850; // 0xf04 JumpB
	sync(); // 0xf05 Func
	IsDialogEnd(var_714_bool); // 0xf07 ObjFunc
	goto Label_3843; // 0xf09 Jump
	
Label_3850:
	var_787_object = Obj(); // 0xf0a PushV
	var_787_object = var_705_object; // 0xf0b Mov
	func_4877(); // 0xf0c NEW_2
	StopDialog(var_711_object); // 0xf0e Func
	GetReturnValue(var_713_int); // 0xf10 ObjFunc
	var_704_int = var_713_int; // 0xf12 Mov
	return 8; // 0xf13 Return
}


func_5575(var_837_bool)
{
	var_839_int = 0; var_840_string = ""; // 0x15c8 PushV
	var_840_string = "d6q01"; // 0x15c9 MovS
	func_5101(var_839_int, var_840_string); // 0x15ca NEW_2
	var_841_int = 1; // 0x15cc PushI
	var_842_bool = var_839_int == var_841_int; // 0x15cd Eq
	if(var_842_bool == 0) goto Label_5585; // 0x15ce JumpB
	var_837_bool = 1; // 0x15cf MovB
	return 0; // 0x15d0 Return
	
Label_5585:
	var_837_bool = 0; // 0x15d1 MovB
	return 0; // 0x15d2 Return
}


func_5063(var_177_bool, var_178_string)
{
	var_179_bool = 0; var_180_bool = 0; // 0x13c7 PushV
	var_181_bool = 0; // 0x13c8 PushV
	func_5225(var_181_bool); // 0x13c9 NEW_2
	if(var_181_bool == 0) goto Label_5076; // 0x13cb JumpB
	lshHasSpeech(var_180_bool, var_178_string); // 0x13cc Func
	var_182_bool = var_180_bool; // 0x13ce Push
	if(var_182_bool == 0) goto Label_5076; // 0x13cf JumpB
	lshPlaySpeech(var_178_string); // 0x13d0 Func
	var_177_bool = 1; // 0x13d2 MovB
	return 2; // 0x13d3 Return
	
Label_5076:
	var_177_bool = 0; // 0x13d4 MovB
	return 2; // 0x13d5 Return
}


func_4809(var_83_bool, var_85_float)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0; // 0x12c9 PushV
	GetPosition(var_96_cvector); // 0x12ca ObjFunc
	GetEyesHeight(var_95_float); // 0x12cc ObjFunc
	var_104_float = GetByIndex(var_96_cvector, 1); // 0x12ce PushE
	var_104_float = var_104_float + var_95_float; // 0x12cf Add2
	SetByIndex(var_96_cvector, 1) = var_104_float; // 0x12d0 PopE
	GetPosition(var_97_cvector); // 0x12d1 Func
	GetEyesHeight(var_95_float); // 0x12d3 Func
	var_105_float = GetByIndex(var_97_cvector, 1); // 0x12d5 PushE
	var_105_float = var_105_float + var_95_float; // 0x12d6 Add2
	SetByIndex(var_97_cvector, 1) = var_105_float; // 0x12d7 PopE
	var_98_cvector = var_96_cvector - var_97_cvector; // 0x12d8 Sub2
	var_106_float = GetByIndex(var_98_cvector, 1); // 0x12d9 PushE
	var_106_float = 0; // 0x12da MovI
	SetByIndex(var_98_cvector, 1) = var_106_float; // 0x12db PopE
	var_107_int = var_98_cvector | var_98_cvector; // 0x12dc Or
	var_108_float = sqrt(var_107_int); // 0x12dd Sqrt
	var_98_cvector = var_98_cvector / var_98_cvector; // 0x12de Div2
	var_99_cvector = -var_98_cvector; // 0x12df Neg2
	var_109_float = var_98_cvector * var_85_float; // 0x12e0 Mult
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); // 0x12e1 PushV
	var_112_cvector = CVector(0.0, 1.0, 0.0); // 0x12e2 PushVec
	var_111_cvector = var_99_cvector ^ var_112_cvector; // 0x12e3 Xor2
	func_5091(var_110_cvector, var_111_cvector); // 0x12e4 NEW_2
	var_118_int = 25; // 0x12e6 PushI
	var_119_float = var_110_cvector * var_118_int; // 0x12e7 Mult
	var_120_int = var_109_float + var_119_float; // 0x12e8 Add
	var_121_cvector = CVector(0.0, 10.0, 0.0); // 0x12e9 PushVec
	var_100_cvector = var_120_int - var_121_cvector; // 0x12ea Sub2
	var_101_cvector = var_97_cvector + var_100_cvector; // 0x12eb Add2
	IsOverrideActive(var_102_bool); // 0x12ec Func
	var_122_bool = var_102_bool; // 0x12ee Push
	if(var_122_bool == 0) goto Label_4850; // 0x12ef JumpB
	var_83_bool = 0; // 0x12f0 MovB
	return 18; // 0x12f1 Return
	
Label_4850:
	StopWorld(); // 0x12f2 Func
	CameraTransit(var_101_cvector, var_99_cvector); // 0x12f4 Func
	var_123_float = GetByIndex(var_100_cvector, 0); // 0x12f6 PushE
	var_124_float = GetByIndex(var_100_cvector, 2); // 0x12f7 PushE
	Rotate(var_123_float, var_124_float); // 0x12f8 Func
	var_125_bool = 0; // 0x12fa PushV
	func_5225(var_125_bool); // 0x12fb NEW_2
	if(var_125_bool == 0) goto Label_4863; // 0x12fd JumpB
	goto Label_4871; // 0x12fe Jump
	
Label_4871:
	CameraWaitForPlayFinish(); // 0x1307 Func
	ResumeWorld(); // 0x1309 Func
	var_83_bool = 1; // 0x130b MovB
	return 18; // 0x130c Return
	
Label_4863:
	var_126_string = "head"; // 0x12ff PushS
	HasAnimationTrack(var_103_bool, var_126_string); // 0x1300 Func
	var_127_bool = var_103_bool; // 0x1302 Push
	if(var_127_bool == 0) goto Label_4871; // 0x1303 JumpB
	var_128_string = "head"; // 0x1304 PushS
	LookAsyncCamera(var_128_string); // 0x1305 Func
}


func_713(var_0_object, var_1_object, var_2_object, var_3_string, var_927_object, var_928_object)
{
	var_0_object = var_928_object; // 0x2ca TMov
	var_1_object = var_927_object; // 0x2cb TMov
	var_3_string = 0; // 0x2cc TMovB
	var_933_int = 1; // 0x2cd PushI
	if(var_933_int == 0) goto Label_776; // 0x2ce JumpB
	var_934_bool = 0; var_935_object = Obj(); // 0x2cf PushV
	var_935_object = var_1_object; // 0x2d0 MovT
	func_5478(var_935_object); // 0x2d1 NEW_2
	if(var_934_bool == 0) goto Label_754; // 0x2d3 JumpB
	var_940_object = Obj(); var_941_object = Obj(); // 0x2d4 PushV
	var_940_object = var_1_object; // 0x2d5 MovT
	var_941_object = var_0_object; // 0x2d6 MovT
	func_5281(); // 0x2d7 NEW_2
	var_944_object = Obj(); var_945_object = Obj(); // 0x2d9 PushV
	var_944_object = var_1_object; // 0x2da MovT
	var_945_object = var_0_object; // 0x2db MovT
	func_5287(); // 0x2dc NEW_2
	var_948_string = ""; // 0x2de PushV
	var_948_string = "Fear"; // 0x2df MovS
	func_806(var_928_object, var_948_string); // 0x2e0 NEW_2
	var_956_int = 534079; // 0x2e2 PushI
	SetMessage(var_956_int); // 0x2e3 TObjFunc
	ClearReplies(); // 0x2e5 TObjFunc
	var_957_int = 534080; // 0x2e7 PushI
	var_958_int = 38114; // 0x2e8 PushI
	var_959_int = 35673; // 0x2e9 PushI
	AddReply(var_957_int, var_958_int, var_959_int); // 0x2ea TObjFunc
	var_960_int = 536380; // 0x2ec PushI
	var_961_int = 38114; // 0x2ed PushI
	var_962_int = 38153; // 0x2ee PushI
	AddReply(var_960_int, var_961_int, var_962_int); // 0x2ef TObjFunc
	goto Label_776; // 0x2f1 Jump
	
Label_776:
	var_963_bool = 0; // 0x308 PushV
	func_5225(var_963_bool); // 0x309 NEW_2
	if(var_963_bool == 0) goto Label_791; // 0x30b JumpB
	
Label_780:
	lshWaitForAnimEnd(); // 0x30c Func
	var_964_string = var_3_string; // 0x30e PushT
	if(var_964_string == 0) goto Label_785; // 0x30f JumpB
	goto Label_790; // 0x310 Jump
	
Label_790:
	goto Label_805; // 0x316 Jump
	
Label_805:
	return 0; // 0x325 Return
	
Label_785:
	var_965_string = ""; // 0x311 PushV
	var_965_string = var_2_object; // 0x312 MovT
	func_5032(var_965_string); // 0x313 NEW_2
	goto Label_780; // 0x315 Jump
	
Label_791:
	var_966_string = "all"; // 0x317 PushS
	var_967_string = "idle"; // 0x318 PushS
	PlayAnimation(var_966_string, var_967_string); // 0x319 Func
	
Label_795:
	WaitForAnimEnd(); // 0x31b Func
	var_968_string = var_3_string; // 0x31d PushT
	if(var_968_string == 0) goto Label_800; // 0x31e JumpB
	goto Label_805; // 0x31f Jump
	
Label_800:
	var_969_string = "all"; // 0x320 PushS
	var_970_string = "idle"; // 0x321 PushS
	PlayAnimation(var_969_string, var_970_string); // 0x322 Func
	goto Label_795; // 0x324 Jump
	
Label_754:
	var_971_string = ""; // 0x2f2 PushV
	var_971_string = "Neutral"; // 0x2f3 MovS
	func_806(var_928_object, var_971_string); // 0x2f4 NEW_2
	var_972_int = 534086; // 0x2f6 PushI
	SetMessage(var_972_int); // 0x2f7 TObjFunc
	ClearReplies(); // 0x2f9 TObjFunc
	var_973_int = 534090; // 0x2fb PushI
	var_974_int = -1; // 0x2fc PushI
	var_975_int = 35683; // 0x2fd PushI
	AddReply(var_973_int, var_974_int, var_975_int); // 0x2fe TObjFunc
	var_976_int = 536397; // 0x300 PushI
	var_977_int = -1; // 0x301 PushI
	var_978_int = 38176; // 0x302 PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0x303 TObjFunc
	goto Label_776; // 0x305 Jump
}


func_5833(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); // 0x16c9 PushV
	GetMainOutdoorScene(var_88_object); // 0x16ca Func
	var_90_bool = var_88_object == 0; // 0x16cc NullEq
	if(var_90_bool == 0) goto Label_5844; // 0x16cd JumpB
	var_91_string = "Can't find main outdoor scene"; // 0x16ce PushS
	Trace(var_91_string); // 0x16cf Func
	var_89_object = 0; // 0x16d1 SetNull
	var_85_object = var_89_object; // 0x16d2 Mov
	return 4; // 0x16d3 Return
	
Label_5844:
	GetMap(var_89_object); // 0x16d4 ObjFunc
	var_85_object = var_89_object; // 0x16d6 Mov
	return 4; // 0x16d7 Return
}


func_4554(var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0); // 0x11ca PushE
	var_129_float = GetByIndex(var_0_object, 2); // 0x11cb PushE
	RotateAsync(var_128_float, var_129_float); // 0x11cc Func
	return 0; // 0x11ce Return
}


func_2507(var_0_object, var_1_object, var_2_object, var_3_string, var_459_object, var_460_object)
{
	var_0_object = var_460_object; // 0x9cc TMov
	var_1_object = var_459_object; // 0x9cd TMov
	var_3_string = 0; // 0x9ce TMovB
	var_465_int = 1; // 0x9cf PushI
	if(var_465_int == 0) goto Label_2605; // 0x9d0 JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x9d1 PushV
	var_467_object = var_1_object; // 0x9d2 MovT
	func_5683(var_467_object); // 0x9d3 NEW_2
	if(var_466_bool == 0) goto Label_2548; // 0x9d5 JumpB
	var_472_object = Obj(); var_473_object = Obj(); // 0x9d6 PushV
	var_472_object = var_1_object; // 0x9d7 MovT
	var_473_object = var_0_object; // 0x9d8 MovT
	func_5424(); // 0x9d9 NEW_2
	var_476_string = ""; // 0x9db PushV
	var_476_string = "Neutral"; // 0x9dc MovS
	func_2635(var_460_object, var_476_string); // 0x9dd NEW_2
	var_484_int = 509330; // 0x9df PushI
	SetMessage(var_484_int); // 0x9e0 TObjFunc
	ClearReplies(); // 0x9e2 TObjFunc
	var_485_int = 509331; // 0x9e4 PushI
	var_486_int = 10248; // 0x9e5 PushI
	var_487_int = 10247; // 0x9e6 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x9e7 TObjFunc
	var_488_int = 509340; // 0x9e9 PushI
	var_489_int = 10248; // 0x9ea PushI
	var_490_int = 10258; // 0x9eb PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x9ec TObjFunc
	var_491_int = 509341; // 0x9ee PushI
	var_492_int = 10248; // 0x9ef PushI
	var_493_int = 10260; // 0x9f0 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x9f1 TObjFunc
	goto Label_2605; // 0x9f3 Jump
	
Label_2605:
	var_494_bool = 0; // 0xa2d PushV
	func_5225(var_494_bool); // 0xa2e NEW_2
	if(var_494_bool == 0) goto Label_2620; // 0xa30 JumpB
	
Label_2609:
	lshWaitForAnimEnd(); // 0xa31 Func
	var_495_string = var_3_string; // 0xa33 PushT
	if(var_495_string == 0) goto Label_2614; // 0xa34 JumpB
	goto Label_2619; // 0xa35 Jump
	
Label_2619:
	goto Label_2634; // 0xa3b Jump
	
Label_2634:
	return 0; // 0xa4a Return
	
Label_2614:
	var_496_string = ""; // 0xa36 PushV
	var_496_string = var_2_object; // 0xa37 MovT
	func_5032(var_496_string); // 0xa38 NEW_2
	goto Label_2609; // 0xa3a Jump
	
Label_2620:
	var_497_string = "all"; // 0xa3c PushS
	var_498_string = "idle"; // 0xa3d PushS
	PlayAnimation(var_497_string, var_498_string); // 0xa3e Func
	
Label_2624:
	WaitForAnimEnd(); // 0xa40 Func
	var_499_string = var_3_string; // 0xa42 PushT
	if(var_499_string == 0) goto Label_2629; // 0xa43 JumpB
	goto Label_2634; // 0xa44 Jump
	
Label_2629:
	var_500_string = "all"; // 0xa45 PushS
	var_501_string = "idle"; // 0xa46 PushS
	PlayAnimation(var_500_string, var_501_string); // 0xa47 Func
	goto Label_2624; // 0xa49 Jump
	
Label_2548:
	var_502_bool = 0; var_503_object = Obj(); // 0x9f4 PushV
	var_503_object = var_1_object; // 0x9f5 MovT
	func_5695(var_503_object); // 0x9f6 NEW_2
	if(var_502_bool == 0) goto Label_2583; // 0x9f8 JumpB
	var_508_object = Obj(); var_509_object = Obj(); // 0x9f9 PushV
	var_508_object = var_1_object; // 0x9fa MovT
	var_509_object = var_0_object; // 0x9fb MovT
	func_5430(); // 0x9fc NEW_2
	var_512_string = ""; // 0x9fe PushV
	var_512_string = "Neutral"; // 0x9ff MovS
	func_2635(var_460_object, var_512_string); // 0xa00 NEW_2
	var_513_int = 509323; // 0xa02 PushI
	SetMessage(var_513_int); // 0xa03 TObjFunc
	ClearReplies(); // 0xa05 TObjFunc
	var_514_int = 509324; // 0xa07 PushI
	var_515_int = 10239; // 0xa08 PushI
	var_516_int = 10238; // 0xa09 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0xa0a TObjFunc
	var_517_int = 509328; // 0xa0c PushI
	var_518_int = 10239; // 0xa0d PushI
	var_519_int = 10242; // 0xa0e PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0xa0f TObjFunc
	var_520_int = 509329; // 0xa11 PushI
	var_521_int = 10239; // 0xa12 PushI
	var_522_int = 10244; // 0xa13 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0xa14 TObjFunc
	goto Label_2605; // 0xa16 Jump
	
Label_2583:
	var_523_string = ""; // 0xa17 PushV
	var_523_string = "Neutral"; // 0xa18 MovS
	func_2635(var_460_object, var_523_string); // 0xa19 NEW_2
	var_524_int = 515792; // 0xa1b PushI
	SetMessage(var_524_int); // 0xa1c TObjFunc
	ClearReplies(); // 0xa1e TObjFunc
	var_525_int = 533895; // 0xa20 PushI
	var_526_int = -1; // 0xa21 PushI
	var_527_int = 35453; // 0xa22 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xa23 TObjFunc
	var_528_int = 533894; // 0xa25 PushI
	var_529_int = -1; // 0xa26 PushI
	var_530_int = 35452; // 0xa27 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0xa28 TObjFunc
	goto Label_2605; // 0xa2a Jump
}


func_5327()
{
	var_59_int = 0; var_60_string = ""; // 0x14d0 PushV
	var_60_string = "d5q01"; // 0x14d1 MovS
	func_5101(var_59_int, var_60_string); // 0x14d2 NEW_2
	var_63_int = 4; // 0x14d4 PushI
	var_64_bool = var_59_int != var_63_int; // 0x14d5 Neq
	if(var_64_bool == 0) goto Label_5339; // 0x14d6 JumpB
	var_65_string = "d5q01"; // 0x14d7 PushS
	var_66_int = 4; // 0x14d8 PushI
	SetVariable(var_65_string, var_66_int); // 0x14d9 Func
	
Label_5339:
	return 0; // 0x14db Return
}


func_4559(var_59_bool)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; // 0x11cf PushV
	var_64_string = "player"; // 0x11d0 PushS
	FindActor(var_62_object, var_64_string); // 0x11d1 Func
	var_65_bool = var_62_object == 0; // 0x11d3 Not
	if(var_65_bool == 0) goto Label_4567; // 0x11d4 JumpB
	var_59_bool = 0; // 0x11d5 MovB
	return 4; // 0x11d6 Return
	
Label_4567:
	var_66_float = 0; var_67_object = Obj(); // 0x11d7 PushV
	var_67_object = var_62_object; // 0x11d8 Mov
	func_4777(var_67_object); // 0x11d9 NEW_2
	var_74_float = 90000.0; // 0x11db PushF
	var_75_bool = var_66_float > var_74_float; // 0x11dc GT
	if(var_75_bool == 0) goto Label_4576; // 0x11dd JumpB
	var_59_bool = 0; // 0x11de MovB
	return 4; // 0x11df Return
	
Label_4576:
	CanSee(var_63_bool, var_62_object); // 0x11e0 Func
	var_59_bool = var_63_bool; // 0x11e2 Mov
	return 4; // 0x11e3 Return
}


func_5587(var_853_bool)
{
	var_855_int = 0; var_856_string = ""; // 0x15d4 PushV
	var_856_string = "d6q01KnowKillerIsKlara"; // 0x15d5 MovS
	func_5101(var_855_int, var_856_string); // 0x15d6 NEW_2
	var_857_int = 1; // 0x15d8 PushI
	var_858_bool = var_855_int == var_857_int; // 0x15d9 Eq
	if(var_858_bool == 0) goto Label_5597; // 0x15da JumpB
	var_853_bool = 1; // 0x15db MovB
	return 0; // 0x15dc Return
	
Label_5597:
	var_853_bool = 0; // 0x15dd MovB
	return 0; // 0x15de Return
}


func_5078()
{
	var_54_bool = 0; // 0x13d6 PushV
	func_5225(var_54_bool); // 0x13d7 NEW_2
	if(var_54_bool == 0) goto Label_5084; // 0x13d9 JumpB
	lshStopSpeech(); // 0x13da Func
	
Label_5084:
	return 0; // 0x13dc Return
}


func_3031(var_2_object, var_596_string)
{
	var_597_bool = 0; // 0xbd8 PushV
	func_5225(var_597_bool); // 0xbd9 NEW_2
	var_598_bool = var_597_bool == 0; // 0xbdb Not
	if(var_598_bool == 0) goto Label_3038; // 0xbdc JumpB
	return 0; // 0xbdd Return
	
Label_3038:
	var_599_bool = var_596_string == var_2_object; // 0xbde Eq
	if(var_599_bool == 0) goto Label_3041; // 0xbdf JumpB
	return 0; // 0xbe0 Return
	
Label_3041:
	var_600_string = ""; var_601_bool = 0; // 0xbe1 PushV
	var_600_string = var_596_string; // 0xbe2 Mov
	var_602_string = ""; // 0xbe3 PushS
	var_603_bool = var_596_string == var_602_string; // 0xbe4 Eq
	if(var_603_bool == 0) goto Label_3048; // 0xbe5 JumpB
	var_601_bool = 0; // 0xbe6 MovB
	goto Label_3049; // 0xbe7 Jump
	
Label_3049:
	func_5048(var_600_string, var_601_bool); // 0xbe9 NEW_2
	var_2_object = var_596_string; // 0xbeb TMov
	return 0; // 0xbec Return
	
Label_3048:
	var_601_bool = 1; // 0xbe8 MovB
}


func_5850(var_118_object, var_119_string, var_120_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0; // 0x16da PushV
	GetMainOutdoorScene(var_128_object); // 0x16db Func
	var_130_bool = var_128_object == 0; // 0x16dd NullEq
	if(var_130_bool == 0) goto Label_5859; // 0x16de JumpB
	var_131_string = "Can't find main outdoor scene"; // 0x16df PushS
	Trace(var_131_string); // 0x16e0 Func
	return 8; // 0x16e2 Return
	
Label_5859:
	GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector); // 0x16e3 ObjFunc
	var_132_bool = var_129_bool == 0; // 0x16e5 Not
	if(var_132_bool == 0) goto Label_5869; // 0x16e6 JumpB
	var_133_string = "Warning: outdoor scene locator "; // 0x16e7 PushS
	var_134_int = var_133_string + var_119_string; // 0x16e8 Add
	var_135_string = " doesnt exist"; // 0x16e9 PushS
	var_136_int = var_134_int + var_135_string; // 0x16ea Add
	Trace(var_136_int); // 0x16eb Func
	
Label_5869:
	GetMap(var_118_object); // 0x16ed ObjFunc
	var_137_bool = var_118_object == 0; // 0x16ef NullEq
	if(var_137_bool == 0) goto Label_5877; // 0x16f0 JumpB
	var_138_string = "Can't find map"; // 0x16f1 PushS
	Trace(var_138_string); // 0x16f2 Func
	return 8; // 0x16f4 Return
	
Label_5877:
	var_139_float = GetByIndex(var_126_cvector, 0); // 0x16f5 PushE
	var_140_float = GetByIndex(var_126_cvector, 2); // 0x16f6 PushE
	SetMapParams(var_139_float, var_140_float, var_120_float); // 0x16f7 ObjFunc
	return 8; // 0x16f9 Return
}


func_4315(var_0_object, var_1042_int, var_1043_object)
{
	var_1045_object = Obj(); var_1046_bool = 0; var_1047_int = 0; var_1048_bool = 0; var_1049_object = Obj(); var_1050_bool = 0; var_1051_int = 0; var_1052_bool = 0; // 0x10db PushV
	var_0_object = var_1043_object; // 0x10dc TMov
	var_1053_bool = 0; var_1054_object = Obj(); var_1055_float = 0; // 0x10dd PushV
	var_1054_object = var_1043_object; // 0x10de Mov
	var_1055_float = 70.0; // 0x10df MovF
	func_4809(var_1054_object, var_1055_float); // 0x10e0 NEW_2
	var_1056_bool = var_1053_bool == 0; // 0x10e2 Not
	if(var_1056_bool == 0) goto Label_4326; // 0x10e3 JumpB
	var_1042_int = -2; // 0x10e4 MovI
	return 8; // 0x10e5 Return
	
Label_4326:
	CreateDialog(var_1049_object); // 0x10e6 Func
	var_1057_int = 0; // 0x10e8 PushV
	func_5219(var_1057_int); // 0x10e9 NEW_2
	SetNPCName(var_1057_int); // 0x10eb ObjFunc
	var_1058_int = 0; // 0x10ed PushV
	func_5217(var_1058_int); // 0x10ee NEW_2
	SetNPCDescription(var_1058_int); // 0x10f0 ObjFunc
	var_1059_string = ""; // 0x10f2 PushV
	func_5221(var_1059_string); // 0x10f3 NEW_2
	SetPhoto(var_1059_string); // 0x10f5 ObjFunc
	var_1060_string = ""; // 0x10f7 PushV
	func_5223(var_1060_string); // 0x10f8 NEW_2
	SetPhoto2(var_1060_string); // 0x10fa ObjFunc
	var_1061_int = 0; // 0x10fc PushV
	func_5883(var_1061_int); // 0x10fd NEW_2
	SetPlayerName(var_1061_int); // 0x10ff ObjFunc
	var_1051_int = -1; // 0x1101 MovI
	IsOverrideActive(var_1050_bool); // 0x1102 Func
	var_1062_bool = var_1050_bool; // 0x1104 Push
	if(var_1062_bool == 0) goto Label_4360; // 0x1105 JumpB
	var_1042_int = -2; // 0x1106 MovI
	return 8; // 0x1107 Return
	
Label_4360:
	DoDialog(var_1049_object); // 0x1108 Func
	var_1063_bool = 0; var_1064_object = Obj(); // 0x110a PushV
	var_1065_object = Obj(); // 0x110b PushV
	func_5085(var_1065_object); // 0x110c NEW_2
	var_1064_object = var_1065_object; // 0x110d Mov
	func_4894(var_1063_bool, var_1064_object); // 0x110f NEW_2
	var_1066_object = Obj(); var_1067_object = Obj(); // 0x1111 PushV
	var_1066_object = var_1043_object; // 0x1112 Mov
	var_1067_object = var_1049_object; // 0x1113 Mov
	TaskCall(19); // 0x1114 TaskCall
	func_4396(var_1068_object, var_1069_object, var_1070_string, var_1071_bool, var_1066_object, var_1067_object); // 0x1115 NEW_2
	TaskReturn(); // 0x1116 TaskReturn
	IsDialogEnd(var_1052_bool); // 0x1118 ObjFunc
	
Label_4378:
	var_1096_bool = var_1052_bool == 0; // 0x111a Not
	if(var_1096_bool == 0) goto Label_4385; // 0x111b JumpB
	sync(); // 0x111c Func
	IsDialogEnd(var_1052_bool); // 0x111e ObjFunc
	goto Label_4378; // 0x1120 Jump
	
Label_4385:
	var_1097_object = Obj(); // 0x1121 PushV
	var_1097_object = var_1043_object; // 0x1122 Mov
	func_4877(); // 0x1123 NEW_2
	StopDialog(var_1049_object); // 0x1125 Func
	GetReturnValue(var_1051_int); // 0x1127 ObjFunc
	var_1042_int = var_1051_int; // 0x1129 Mov
	return 8; // 0x112a Return
}


func_5340()
{
	var_404_string = "d1q01KaterinaUHave1day"; // 0x14dd PushS
	var_405_int = 1; // 0x14de PushI
	SetVariable(var_404_string, var_405_int); // 0x14df Func
	return 0; // 0x14e1 Return
}


func_5085(var_145_object)
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x13dd PushV
	self(var_147_object); // 0x13de Func
	var_145_object = var_147_object; // 0x13e0 Mov
	return 2; // 0x13e1 Return
}


func_5599(var_831_bool)
{
	var_833_int = 0; var_834_string = ""; // 0x15e0 PushV
	var_834_string = "ood6Katerina1"; // 0x15e1 MovS
	func_5101(var_833_int, var_834_string); // 0x15e2 NEW_2
	var_835_int = 0; // 0x15e4 PushI
	var_836_bool = var_833_int == var_835_int; // 0x15e5 Eq
	if(var_836_bool == 0) goto Label_5609; // 0x15e6 JumpB
	var_831_bool = 1; // 0x15e7 MovB
	return 0; // 0x15e8 Return
	
Label_5609:
	var_831_bool = 0; // 0x15e9 MovB
	return 0; // 0x15ea Return
}


func_1760(var_0_object, var_1_object, var_2_object, var_3_string, var_814_object, var_815_object)
{
	var_0_object = var_815_object; // 0x6e1 TMov
	var_1_object = var_814_object; // 0x6e2 TMov
	var_3_string = 0; // 0x6e3 TMovB
	var_820_int = 1; // 0x6e4 PushI
	if(var_820_int == 0) goto Label_1858; // 0x6e5 JumpB
	var_821_string = ""; // 0x6e6 PushV
	var_821_string = "Fear"; // 0x6e7 MovS
	func_1888(var_815_object, var_821_string); // 0x6e8 NEW_2
	var_829_int = 512770; // 0x6ea PushI
	SetMessage(var_829_int); // 0x6eb TObjFunc
	ClearReplies(); // 0x6ed TObjFunc
	var_830_bool = 0; // 0x6ef PushV
	var_830_bool = 0; // 0x6f0 MovB
	var_831_bool = 0; var_832_object = Obj(); // 0x6f1 PushV
	var_832_object = var_1_object; // 0x6f2 MovT
	func_5599(var_832_object); // 0x6f3 NEW_2
	if(var_831_bool == 0) goto Label_1788; // 0x6f5 JumpB
	var_837_bool = 0; var_838_object = Obj(); // 0x6f6 PushV
	var_838_object = var_1_object; // 0x6f7 MovT
	func_5575(var_838_object); // 0x6f8 NEW_2
	if(var_837_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_830_bool = 1; // 0x6fb MovB
	
Label_1788:
	if(var_830_bool == 0) goto Label_1794; // 0x6fc JumpB
	var_843_int = 512771; // 0x6fd PushI
	var_844_int = 3726; // 0x6fe PushI
	var_845_int = 13970; // 0x6ff PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0x700 TObjFunc
	
Label_1794:
	var_846_bool = 0; // 0x702 PushV
	var_846_bool = 0; // 0x703 MovB
	var_847_bool = 0; var_848_object = Obj(); // 0x704 PushV
	var_848_object = var_1_object; // 0x705 MovT
	func_5611(var_848_object); // 0x706 NEW_2
	if(var_847_bool == 0) goto Label_1807; // 0x708 JumpB
	var_853_bool = 0; var_854_object = Obj(); // 0x709 PushV
	var_854_object = var_1_object; // 0x70a MovT
	func_5587(var_854_object); // 0x70b NEW_2
	if(var_853_bool == 0) goto Label_1807; // 0x70d JumpB
	var_846_bool = 1; // 0x70e MovB
	
Label_1807:
	if(var_846_bool == 0) goto Label_1813; // 0x70f JumpB
	var_859_int = 512772; // 0x710 PushI
	var_860_int = 13972; // 0x711 PushI
	var_861_int = 13971; // 0x712 PushI
	AddReply(var_859_int, var_860_int, var_861_int); // 0x713 TObjFunc
	
Label_1813:
	var_862_bool = 0; // 0x715 PushV
	var_862_bool = 1; // 0x716 MovB
	var_863_bool = 0; // 0x717 PushV
	var_863_bool = 0; // 0x718 MovB
	var_864_bool = 0; var_865_object = Obj(); // 0x719 PushV
	var_865_object = var_1_object; // 0x71a MovT
	func_5623(var_865_object); // 0x71b NEW_2
	if(var_864_bool == 0) goto Label_1828; // 0x71d JumpB
	var_870_bool = 0; var_871_object = Obj(); // 0x71e PushV
	var_871_object = var_1_object; // 0x71f MovT
	func_5647(var_871_object); // 0x720 NEW_2
	if(var_870_bool == 0) goto Label_1828; // 0x722 JumpB
	var_863_bool = 1; // 0x723 MovB
	
Label_1828:
	if(var_863_bool == 0) goto Label_1844; // 0x724 JumpB
	var_876_bool = 0; // 0x725 PushV
	var_876_bool = 0; // 0x726 MovB
	var_877_bool = 0; var_878_object = Obj(); // 0x727 PushV
	var_878_object = var_1_object; // 0x728 MovT
	func_5635(var_878_object); // 0x729 NEW_2
	if(var_877_bool == 0) goto Label_1842; // 0x72b JumpB
	var_883_bool = 0; var_884_object = Obj(); // 0x72c PushV
	var_884_object = var_1_object; // 0x72d MovT
	func_5647(var_884_object); // 0x72e NEW_2
	if(var_883_bool == 0) goto Label_1842; // 0x730 JumpB
	var_876_bool = 1; // 0x731 MovB
	
Label_1842:
	if(var_876_bool == 0) goto Label_1844; // 0x732 JumpB
	var_862_bool = 0; // 0x733 MovB
	
Label_1844:
	if(var_862_bool == 0) goto Label_1850; // 0x734 JumpB
	var_885_int = 512791; // 0x735 PushI
	var_886_int = 13991; // 0x736 PushI
	var_887_int = 13990; // 0x737 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x738 TObjFunc
	
Label_1850:
	var_888_int = 512790; // 0x73a PushI
	var_889_int = -1; // 0x73b PushI
	var_890_int = 13989; // 0x73c PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0x73d TObjFunc
	goto Label_1858; // 0x73f Jump
	
Label_1858:
	var_891_bool = 0; // 0x742 PushV
	func_5225(var_891_bool); // 0x743 NEW_2
	if(var_891_bool == 0) goto Label_1873; // 0x745 JumpB
	
Label_1862:
	lshWaitForAnimEnd(); // 0x746 Func
	var_892_string = var_3_string; // 0x748 PushT
	if(var_892_string == 0) goto Label_1867; // 0x749 JumpB
	goto Label_1872; // 0x74a Jump
	
Label_1872:
	goto Label_1887; // 0x750 Jump
	
Label_1887:
	return 0; // 0x75f Return
	
Label_1867:
	var_893_string = ""; // 0x74b PushV
	var_893_string = var_2_object; // 0x74c MovT
	func_5032(var_893_string); // 0x74d NEW_2
	goto Label_1862; // 0x74f Jump
	
Label_1873:
	var_894_string = "all"; // 0x751 PushS
	var_895_string = "idle"; // 0x752 PushS
	PlayAnimation(var_894_string, var_895_string); // 0x753 Func
	
Label_1877:
	WaitForAnimEnd(); // 0x755 Func
	var_896_string = var_3_string; // 0x757 PushT
	if(var_896_string == 0) goto Label_1882; // 0x758 JumpB
	goto Label_1887; // 0x759 Jump
	
Label_1882:
	var_897_string = "all"; // 0x75a PushS
	var_898_string = "idle"; // 0x75b PushS
	PlayAnimation(var_897_string, var_898_string); // 0x75c Func
	goto Label_1877; // 0x75e Jump
}


func_5346()
{
	var_59_string = "ood6Katerina1"; // 0x14e3 PushS
	var_60_int = 1; // 0x14e4 PushI
	SetVariable(var_59_string, var_60_int); // 0x14e5 Func
	return 0; // 0x14e7 Return
}


func_5091(var_110_cvector, var_111_cvector)
{
	var_113_float = 0; var_114_float = 0; // 0x13e3 PushV
	var_115_int = var_111_cvector | var_111_cvector; // 0x13e4 Or
	var_114_float = sqrt(var_115_int); // 0x13e5 Sqrt2
	var_116_float = 0.0; // 0x13e6 PushF
	var_117_bool = var_114_float < var_116_float; // 0x13e7 LT
	if(var_117_bool == 0) goto Label_5099; // 0x13e8 JumpB
	var_110_cvector = CVector(0.0, 0.0, 0.0); // 0x13e9 MovV
	return 2; // 0x13ea Return
	
Label_5099:
	var_110_cvector = var_111_cvector / var_111_cvector; // 0x13eb Div2
	return 2; // 0x13ec Return
}


func_228(var_2_object, var_346_string)
{
	var_347_bool = 0; // 0xe5 PushV
	func_5225(var_347_bool); // 0xe6 NEW_2
	var_348_bool = var_347_bool == 0; // 0xe8 Not
	if(var_348_bool == 0) goto Label_235; // 0xe9 JumpB
	return 0; // 0xea Return
	
Label_235:
	var_349_bool = var_346_string == var_2_object; // 0xeb Eq
	if(var_349_bool == 0) goto Label_238; // 0xec JumpB
	return 0; // 0xed Return
	
Label_238:
	var_350_string = ""; var_351_bool = 0; // 0xee PushV
	var_350_string = var_346_string; // 0xef Mov
	var_352_string = ""; // 0xf0 PushS
	var_353_bool = var_346_string == var_352_string; // 0xf1 Eq
	if(var_353_bool == 0) goto Label_245; // 0xf2 JumpB
	var_351_bool = 0; // 0xf3 MovB
	goto Label_246; // 0xf4 Jump
	
Label_246:
	func_5048(var_350_string, var_351_bool); // 0xf6 NEW_2
	var_2_object = var_346_string; // 0xf8 TMov
	return 0; // 0xf9 Return
	
Label_245:
	var_351_bool = 1; // 0xf5 MovB
}


func_4581()
{
	var_1100_float = 0; var_1101_float = 0; // 0x11e5 PushV
	var_1102_int = 8; // 0x11e6 PushI
	var_1103_int = 16; // 0x11e7 PushI
	rand(var_1101_float, var_1102_int, var_1103_int); // 0x11e8 Func
	var_1104_int = 10; // 0x11ea PushI
	SetTimer(var_1104_int, var_1101_float); // 0x11eb Func
	return 2; // 0x11ed Return
}


func_5352()
{
	var_77_string = "ood6Katerina2"; // 0x14e9 PushS
	var_78_int = 1; // 0x14ea PushI
	SetVariable(var_77_string, var_78_int); // 0x14eb Func
	return 0; // 0x14ed Return
}


func_5611(var_847_bool)
{
	var_849_int = 0; var_850_string = ""; // 0x15ec PushV
	var_850_string = "ood6Katerina2"; // 0x15ed MovS
	func_5101(var_849_int, var_850_string); // 0x15ee NEW_2
	var_851_int = 0; // 0x15f0 PushI
	var_852_bool = var_849_int == var_851_int; // 0x15f1 Eq
	if(var_852_bool == 0) goto Label_5621; // 0x15f2 JumpB
	var_847_bool = 1; // 0x15f3 MovB
	return 0; // 0x15f4 Return
	
Label_5621:
	var_847_bool = 0; // 0x15f5 MovB
	return 0; // 0x15f6 Return
}


func_5101(var_339_int, var_340_string)
{
	var_341_int = 0; var_342_int = 0; // 0x13ed PushV
	GetVariable(var_340_string, var_342_int); // 0x13ee Func
	var_339_int = var_342_int; // 0x13f0 Mov
	return 2; // 0x13f1 Return
}


func_5358()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x14ee PushV
	var_83_string = "d6q01"; // 0x14ef PushS
	var_84_int = 2; // 0x14f0 PushI
	SetVariable(var_83_string, var_84_int); // 0x14f1 Func
	var_85_object = Obj(); // 0x14f3 PushV
	func_5833(var_85_object); // 0x14f4 NEW_2
	var_82_object = var_85_object; // 0x14f5 Mov
	var_92_string = "d6q01KaterinaGotoLaska"; // 0x14f7 PushS
	var_93_string = "pt_map_laska"; // 0x14f8 PushS
	var_94_int = 1; // 0x14f9 PushI
	var_95_int = 515398; // 0x14fa PushI
	var_96_float = 0; // 0x14fb PushV
	func_5173(var_96_float); // 0x14fc NEW_2
	AddMark(var_92_string, var_93_string, var_94_int, var_95_int, var_96_float); // 0x14fe ObjFunc
	var_99_string = "d6q01KaterinagotoLaskaSelf"; // 0x1500 PushS
	var_100_string = "pt_map_katerina"; // 0x1501 PushS
	var_101_int = 1; // 0x1502 PushI
	var_102_int = 515399; // 0x1503 PushI
	var_103_float = 0; // 0x1504 PushV
	func_5173(var_103_float); // 0x1505 NEW_2
	AddMark(var_99_string, var_100_string, var_101_int, var_102_int, var_103_float); // 0x1507 ObjFunc
	func_5779(); // 0x150a NEW_2
	var_127_bool = 0; var_128_string = ""; var_129_string = ""; // 0x150c PushV
	var_128_string = "quest_d6_01"; // 0x150d MovS
	var_129_string = "saburov_klara_remove"; // 0x150e MovS
	func_5161(var_127_bool, var_128_string, var_129_string); // 0x150f NEW_2
	return 2; // 0x1511 Return
}


func_3566(var_0_object, var_1_object, var_2_object, var_3_string, var_661_object, var_662_object)
{
	var_0_object = var_662_object; // 0xdef TMov
	var_1_object = var_661_object; // 0xdf0 TMov
	var_3_string = 0; // 0xdf1 TMovB
	var_667_int = 1; // 0xdf2 PushI
	if(var_667_int == 0) goto Label_3604; // 0xdf3 JumpB
	var_668_string = ""; // 0xdf4 PushV
	var_668_string = "Fear"; // 0xdf5 MovS
	func_3634(var_662_object, var_668_string); // 0xdf6 NEW_2
	var_676_int = 511203; // 0xdf8 PushI
	SetMessage(var_676_int); // 0xdf9 TObjFunc
	ClearReplies(); // 0xdfb TObjFunc
	var_677_bool = 0; var_678_object = Obj(); // 0xdfd PushV
	var_678_object = var_1_object; // 0xdfe MovT
	func_5671(var_678_object); // 0xdff NEW_2
	if(var_677_bool == 0) goto Label_3591; // 0xe01 JumpB
	var_683_int = 511204; // 0xe02 PushI
	var_684_int = 12393; // 0xe03 PushI
	var_685_int = 12392; // 0xe04 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0xe05 TObjFunc
	
Label_3591:
	var_686_int = 515336; // 0xe07 PushI
	var_687_int = -1; // 0xe08 PushI
	var_688_int = 16559; // 0xe09 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xe0a TObjFunc
	var_689_int = 536116; // 0xe0c PushI
	var_690_int = -1; // 0xe0d PushI
	var_691_int = 37872; // 0xe0e PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0xe0f TObjFunc
	goto Label_3604; // 0xe11 Jump
	
Label_3604:
	var_692_bool = 0; // 0xe14 PushV
	func_5225(var_692_bool); // 0xe15 NEW_2
	if(var_692_bool == 0) goto Label_3619; // 0xe17 JumpB
	
Label_3608:
	lshWaitForAnimEnd(); // 0xe18 Func
	var_693_string = var_3_string; // 0xe1a PushT
	if(var_693_string == 0) goto Label_3613; // 0xe1b JumpB
	goto Label_3618; // 0xe1c Jump
	
Label_3618:
	goto Label_3633; // 0xe22 Jump
	
Label_3633:
	return 0; // 0xe31 Return
	
Label_3613:
	var_694_string = ""; // 0xe1d PushV
	var_694_string = var_2_object; // 0xe1e MovT
	func_5032(var_694_string); // 0xe1f NEW_2
	goto Label_3608; // 0xe21 Jump
	
Label_3619:
	var_695_string = "all"; // 0xe23 PushS
	var_696_string = "idle"; // 0xe24 PushS
	PlayAnimation(var_695_string, var_696_string); // 0xe25 Func
	
Label_3623:
	WaitForAnimEnd(); // 0xe27 Func
	var_697_string = var_3_string; // 0xe29 PushT
	if(var_697_string == 0) goto Label_3628; // 0xe2a JumpB
	goto Label_3633; // 0xe2b Jump
	
Label_3628:
	var_698_string = "all"; // 0xe2c PushS
	var_699_string = "idle"; // 0xe2d PushS
	PlayAnimation(var_698_string, var_699_string); // 0xe2e Func
	goto Label_3623; // 0xe30 Jump
}


func_4590()
{
	var_1099_int = 10; // 0x11ee PushI
	KillTimer(var_1099_int); // 0x11ef Func
	return 0; // 0x11f1 Return
}


func_5106(var_108_object, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); // 0x13f2 PushV
	GetMainOutdoorScene(var_112_object); // 0x13f3 Func
	var_114_string = ".bin"; // 0x13f5 PushS
	var_115_int = var_109_string + var_114_string; // 0x13f6 Add
	AddBlankActor(var_113_object, var_112_object, var_109_string, var_115_int); // 0x13f7 Func
	var_108_object = var_113_object; // 0x13f9 Mov
	return 4; // 0x13fa Return
}


func_5623(var_864_bool)
{
	var_866_int = 0; var_867_string = ""; // 0x15f8 PushV
	var_867_string = "d6q01"; // 0x15f9 MovS
	func_5101(var_866_int, var_867_string); // 0x15fa NEW_2
	var_868_int = 4; // 0x15fc PushI
	var_869_bool = var_866_int == var_868_int; // 0x15fd Eq
	if(var_869_bool == 0) goto Label_5633; // 0x15fe JumpB
	var_864_bool = 1; // 0x15ff MovB
	return 0; // 0x1600 Return
	
Label_5633:
	var_864_bool = 0; // 0x1601 MovB
	return 0; // 0x1602 Return
}


func_1272(var_2_object, var_1014_string)
{
	var_1015_bool = 0; // 0x4f9 PushV
	func_5225(var_1015_bool); // 0x4fa NEW_2
	var_1016_bool = var_1015_bool == 0; // 0x4fc Not
	if(var_1016_bool == 0) goto Label_1279; // 0x4fd JumpB
	return 0; // 0x4fe Return
	
Label_1279:
	var_1017_bool = var_1014_string == var_2_object; // 0x4ff Eq
	if(var_1017_bool == 0) goto Label_1282; // 0x500 JumpB
	return 0; // 0x501 Return
	
Label_1282:
	var_1018_string = ""; var_1019_bool = 0; // 0x502 PushV
	var_1018_string = var_1014_string; // 0x503 Mov
	var_1020_string = ""; // 0x504 PushS
	var_1021_bool = var_1014_string == var_1020_string; // 0x505 Eq
	if(var_1021_bool == 0) goto Label_1289; // 0x506 JumpB
	var_1019_bool = 0; // 0x507 MovB
	goto Label_1290; // 0x508 Jump
	
Label_1290:
	func_5048(var_1018_string, var_1019_bool); // 0x50a NEW_2
	var_2_object = var_1014_string; // 0x50c TMov
	return 0; // 0x50d Return
	
Label_1289:
	var_1019_bool = 1; // 0x509 MovB
}


func_5883(var_134_int)
{
	var_135_int = 0; var_136_int = 0; // 0x16fb PushV
	var_137_string = "branch"; // 0x16fc PushS
	GetVariable(var_137_string, var_136_int); // 0x16fd Func
	var_138_int = 0; // 0x16ff PushI
	var_139_bool = var_136_int == var_138_int; // 0x1700 Eq
	if(var_139_bool == 0) goto Label_5893; // 0x1701 JumpB
	var_134_int = 1; // 0x1702 MovI
	return 2; // 0x1703 Return
	
Label_5893:
	var_140_int = 1; // 0x1705 PushI
	var_141_bool = var_136_int == var_140_int; // 0x1706 Eq
	if(var_141_bool == 0) goto Label_5898; // 0x1707 JumpB
	var_134_int = 2; // 0x1708 MovI
	return 2; // 0x1709 Return
	
Label_5898:
	var_134_int = 3; // 0x170a MovI
	return 2; // 0x170b Return
}


func_5117(var_76_int, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x13fd PushV
	CreateIntVector(var_79_object); // 0x13fe Func
	add(var_76_int); // 0x1400 ObjFunc
	add(var_77_int); // 0x1402 ObjFunc
	var_80_int = 3; // 0x1404 PushI
	SendWorldWndMessage(var_80_int, var_79_object); // 0x1405 Func
	return 2; // 0x1407 Return
}


