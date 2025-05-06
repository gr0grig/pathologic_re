task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xda PushI
	if(var_8_int == 0) goto Label_624; // 0xdb JumpB
	func_958(); // 0xdd NEW_2
	var_10_int = 41218; // 0xdf PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe0 Eq
	if(var_11_bool == 0) goto Label_241; // 0xe1 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xe2 PushV
	var_12_object = var_1_object; // 0xe3 MovT
	var_13_object = var_0_object; // 0xe4 MovT
	func_1024(); // 0xe5 NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xe7 PushV
	var_16_object = var_1_object; // 0xe8 MovT
	var_17_object = var_0_object; // 0xe9 MovT
	func_1030(); // 0xea NEW_2
	var_28_object = Obj(); var_29_object = Obj(); // 0xec PushV
	var_28_object = var_1_object; // 0xed MovT
	var_29_object = var_0_object; // 0xee MovT
	func_1042(); // 0xef NEW_2
	
Label_241:
	var_53_int = 41204; // 0xf1 PushI
	var_54_bool = var_7_bool == var_53_int; // 0xf2 Eq
	if(var_54_bool == 0) goto Label_259; // 0xf3 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xf4 PushV
	var_55_object = var_1_object; // 0xf5 MovT
	var_56_object = var_0_object; // 0xf6 MovT
	func_1018(); // 0xf7 NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xf9 PushV
	var_59_object = var_1_object; // 0xfa MovT
	var_60_object = var_0_object; // 0xfb MovT
	func_1030(); // 0xfc NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xfe PushV
	var_61_object = var_1_object; // 0xff MovT
	var_62_object = var_0_object; // 0x100 MovT
	func_1037(); // 0x101 NEW_2
	
Label_259:
	var_71_int = 41213; // 0x103 PushI
	var_72_bool = var_7_bool == var_71_int; // 0x104 Eq
	if(var_72_bool == 0) goto Label_277; // 0x105 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x106 PushV
	var_73_object = var_1_object; // 0x107 MovT
	var_74_object = var_0_object; // 0x108 MovT
	func_1012(); // 0x109 NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x10b PushV
	var_77_object = var_1_object; // 0x10c MovT
	var_78_object = var_0_object; // 0x10d MovT
	func_1030(); // 0x10e NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x110 PushV
	var_79_object = var_1_object; // 0x111 MovT
	var_80_object = var_0_object; // 0x112 MovT
	func_1047(); // 0x113 NEW_2
	
Label_277:
	var_89_int = 42255; // 0x115 PushI
	var_90_bool = var_7_bool == var_89_int; // 0x116 Eq
	if(var_90_bool == 0) goto Label_295; // 0x117 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x118 PushV
	var_91_object = var_1_object; // 0x119 MovT
	var_92_object = var_0_object; // 0x11a MovT
	func_1052(); // 0x11b NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x11d PushV
	var_95_object = var_1_object; // 0x11e MovT
	var_96_object = var_0_object; // 0x11f MovT
	func_1030(); // 0x120 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x122 PushV
	var_97_object = var_1_object; // 0x123 MovT
	var_98_object = var_0_object; // 0x124 MovT
	func_1058(); // 0x125 NEW_2
	
Label_295:
	var_107_int = 41196; // 0x127 PushI
	var_108_bool = var_6_int == var_107_int; // 0x128 Eq
	if(var_108_bool == 0) goto Label_374; // 0x129 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x12a PushV
	var_110_object = var_1_object; // 0x12b MovT
	func_1063(var_110_object); // 0x12c NEW_2
	var_117_bool = var_109_bool == 0; // 0x12e Not
	if(var_117_bool == 0) goto Label_349; // 0x12f JumpB
	var_118_string = ""; // 0x130 PushV
	var_118_string = "Doubt"; // 0x131 MovS
	func_195(var_7_bool, var_118_string); // 0x132 NEW_2
	var_135_int = 539253; // 0x134 PushI
	SetMessage(var_135_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_136_int = 539254; // 0x139 PushI
	var_137_int = 41198; // 0x13a PushI
	var_138_int = 41197; // 0x13b PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x13c TObjFunc
	var_139_int = 539271; // 0x13e PushI
	var_140_int = 41215; // 0x13f PushI
	var_141_int = 41214; // 0x140 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x141 TObjFunc
	var_142_bool = 0; var_143_object = Obj(); // 0x143 PushV
	var_143_object = var_1_object; // 0x144 MovT
	func_1087(var_143_object); // 0x145 NEW_2
	if(var_142_bool == 0) goto Label_333; // 0x147 JumpB
	var_148_int = 539257; // 0x148 PushI
	var_149_int = 41201; // 0x149 PushI
	var_150_int = 41200; // 0x14a PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x14b TObjFunc
	
Label_333:
	var_151_bool = 0; var_152_object = Obj(); // 0x14d PushV
	var_152_object = var_1_object; // 0x14e MovT
	func_1075(var_152_object); // 0x14f NEW_2
	if(var_151_bool == 0) goto Label_343; // 0x151 JumpB
	var_157_int = 539262; // 0x152 PushI
	var_158_int = 41206; // 0x153 PushI
	var_159_int = 41205; // 0x154 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x155 TObjFunc
	
Label_343:
	var_160_int = 540270; // 0x157 PushI
	var_161_int = 42254; // 0x158 PushI
	var_162_int = 42253; // 0x159 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_163_string = ""; // 0x15d PushV
	var_163_string = "Neutral"; // 0x15e MovS
	func_195(var_7_bool, var_163_string); // 0x15f NEW_2
	var_164_int = 539276; // 0x161 PushI
	SetMessage(var_164_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_165_int = 539277; // 0x166 PushI
	var_166_int = -1; // 0x167 PushI
	var_167_int = 41220; // 0x168 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x169 TObjFunc
	var_168_int = 542911; // 0x16b PushI
	var_169_int = -1; // 0x16c PushI
	var_170_int = 45342; // 0x16d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x16e TObjFunc
	var_171_int = 542912; // 0x170 PushI
	var_172_int = -1; // 0x171 PushI
	var_173_int = 45343; // 0x172 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_174_int = 42254; // 0x176 PushI
	var_175_bool = var_6_int == var_174_int; // 0x177 Eq
	if(var_175_bool == 0) goto Label_402; // 0x178 JumpB
	var_176_string = ""; // 0x179 PushV
	var_176_string = "Neutral"; // 0x17a MovS
	func_195(var_7_bool, var_176_string); // 0x17b NEW_2
	var_177_int = 540271; // 0x17d PushI
	SetMessage(var_177_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_178_int = 542922; // 0x182 PushI
	var_179_int = 45358; // 0x183 PushI
	var_180_int = 45356; // 0x184 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x185 TObjFunc
	var_181_int = 542923; // 0x187 PushI
	var_182_int = 45358; // 0x188 PushI
	var_183_int = 45357; // 0x189 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x18a TObjFunc
	var_184_int = 542925; // 0x18c PushI
	var_185_int = 45358; // 0x18d PushI
	var_186_int = 45359; // 0x18e PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_187_int = 45358; // 0x192 PushI
	var_188_bool = var_6_int == var_187_int; // 0x193 Eq
	if(var_188_bool == 0) goto Label_420; // 0x194 JumpB
	var_189_string = ""; // 0x195 PushV
	var_189_string = "Doubt"; // 0x196 MovS
	func_195(var_7_bool, var_189_string); // 0x197 NEW_2
	var_190_int = 542924; // 0x199 PushI
	SetMessage(var_190_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_191_int = 540272; // 0x19e PushI
	var_192_int = -1; // 0x19f PushI
	var_193_int = 42255; // 0x1a0 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_194_int = 41206; // 0x1a4 PushI
	var_195_bool = var_6_int == var_194_int; // 0x1a5 Eq
	if(var_195_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_196_string = ""; // 0x1a7 PushV
	var_196_string = "Neutral"; // 0x1a8 MovS
	func_195(var_7_bool, var_196_string); // 0x1a9 NEW_2
	var_197_int = 539263; // 0x1ab PushI
	SetMessage(var_197_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_198_int = 542926; // 0x1b0 PushI
	var_199_int = 45363; // 0x1b1 PushI
	var_200_int = 45362; // 0x1b2 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_201_int = 45363; // 0x1b6 PushI
	var_202_bool = var_6_int == var_201_int; // 0x1b7 Eq
	if(var_202_bool == 0) goto Label_456; // 0x1b8 JumpB
	var_203_string = ""; // 0x1b9 PushV
	var_203_string = "Doubt"; // 0x1ba MovS
	func_195(var_7_bool, var_203_string); // 0x1bb NEW_2
	var_204_int = 542927; // 0x1bd PushI
	SetMessage(var_204_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_205_int = 539270; // 0x1c2 PushI
	var_206_int = -1; // 0x1c3 PushI
	var_207_int = 41213; // 0x1c4 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_208_int = 41201; // 0x1c8 PushI
	var_209_bool = var_6_int == var_208_int; // 0x1c9 Eq
	if(var_209_bool == 0) goto Label_474; // 0x1ca JumpB
	var_210_string = ""; // 0x1cb PushV
	var_210_string = "Untrust"; // 0x1cc MovS
	func_195(var_7_bool, var_210_string); // 0x1cd NEW_2
	var_211_int = 539258; // 0x1cf PushI
	SetMessage(var_211_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_212_int = 539259; // 0x1d4 PushI
	var_213_int = 41203; // 0x1d5 PushI
	var_214_int = 41202; // 0x1d6 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_215_int = 41203; // 0x1da PushI
	var_216_bool = var_6_int == var_215_int; // 0x1db Eq
	if(var_216_bool == 0) goto Label_492; // 0x1dc JumpB
	var_217_string = ""; // 0x1dd PushV
	var_217_string = "Untrust"; // 0x1de MovS
	func_195(var_7_bool, var_217_string); // 0x1df NEW_2
	var_218_int = 539260; // 0x1e1 PushI
	SetMessage(var_218_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_219_int = 539261; // 0x1e6 PushI
	var_220_int = -1; // 0x1e7 PushI
	var_221_int = 41204; // 0x1e8 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1e9 TObjFunc
	return 0; // 0x1eb Return
	
Label_492:
	var_222_int = 41215; // 0x1ec PushI
	var_223_bool = var_6_int == var_222_int; // 0x1ed Eq
	if(var_223_bool == 0) goto Label_515; // 0x1ee JumpB
	var_224_string = ""; // 0x1ef PushV
	var_224_string = "Neutral"; // 0x1f0 MovS
	func_195(var_7_bool, var_224_string); // 0x1f1 NEW_2
	var_225_int = 539272; // 0x1f3 PushI
	SetMessage(var_225_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_226_int = 539273; // 0x1f8 PushI
	var_227_int = 41217; // 0x1f9 PushI
	var_228_int = 41216; // 0x1fa PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1fb TObjFunc
	var_229_int = 542914; // 0x1fd PushI
	var_230_int = 45346; // 0x1fe PushI
	var_231_int = 45345; // 0x1ff PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_232_int = 45346; // 0x203 PushI
	var_233_bool = var_6_int == var_232_int; // 0x204 Eq
	if(var_233_bool == 0) goto Label_533; // 0x205 JumpB
	var_234_string = ""; // 0x206 PushV
	var_234_string = "Neutral"; // 0x207 MovS
	func_195(var_7_bool, var_234_string); // 0x208 NEW_2
	var_235_int = 542915; // 0x20a PushI
	SetMessage(var_235_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_236_int = 542916; // 0x20f PushI
	var_237_int = 41217; // 0x210 PushI
	var_238_int = 45347; // 0x211 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x212 TObjFunc
	return 0; // 0x214 Return
	
Label_533:
	var_239_int = 41217; // 0x215 PushI
	var_240_bool = var_6_int == var_239_int; // 0x216 Eq
	if(var_240_bool == 0) goto Label_571; // 0x217 JumpB
	var_241_string = ""; // 0x218 PushV
	var_241_string = "Neutral"; // 0x219 MovS
	func_195(var_7_bool, var_241_string); // 0x21a NEW_2
	var_242_int = 539274; // 0x21c PushI
	SetMessage(var_242_int); // 0x21d TObjFunc
	ClearReplies(); // 0x21f TObjFunc
	var_243_int = 539275; // 0x221 PushI
	var_244_int = -1; // 0x222 PushI
	var_245_int = 41218; // 0x223 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x224 TObjFunc
	return 0; // 0x226 Return
	
Label_571:
	var_246_int = 45351; // 0x23b PushI
	var_247_bool = var_6_int == var_246_int; // 0x23c Eq
	if(var_247_bool == 0) goto Label_589; // 0x23d JumpB
	var_248_string = ""; // 0x23e PushV
	var_248_string = "Neutral"; // 0x23f MovS
	func_195(var_7_bool, var_248_string); // 0x240 NEW_2
	var_249_int = 542920; // 0x242 PushI
	SetMessage(var_249_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_250_int = 542921; // 0x247 PushI
	var_251_int = 41217; // 0x248 PushI
	var_252_int = 45352; // 0x249 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x24a TObjFunc
	return 0; // 0x24c Return
	
Label_589:
	var_253_int = 41198; // 0x24d PushI
	var_254_bool = var_6_int == var_253_int; // 0x24e Eq
	if(var_254_bool == 0) goto Label_612; // 0x24f JumpB
	var_255_string = ""; // 0x250 PushV
	var_255_string = "Untrust"; // 0x251 MovS
	func_195(var_7_bool, var_255_string); // 0x252 NEW_2
	var_256_int = 539255; // 0x254 PushI
	SetMessage(var_256_int); // 0x255 TObjFunc
	ClearReplies(); // 0x257 TObjFunc
	var_257_int = 539256; // 0x259 PushI
	var_258_int = -1; // 0x25a PushI
	var_259_int = 41199; // 0x25b PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x25c TObjFunc
	var_260_int = 542913; // 0x25e PushI
	var_261_int = -1; // 0x25f PushI
	var_262_int = 45344; // 0x260 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x261 TObjFunc
	return 0; // 0x263 Return
	
Label_612:
	var_3_string = 1; // 0x264 TMovB
	var_263_bool = 0; // 0x265 PushV
	func_1217(var_263_bool); // 0x266 NEW_2
	if(var_263_bool == 0) goto Label_620; // 0x268 JumpB
	lshStopAnimation(); // 0x269 Func
	goto Label_622; // 0x26b Jump
	
Label_622:
	return 0; // 0x26e Return
	
Label_620:
	StopAnimation(); // 0x26c Func
	
Label_624:
	return 0; // 0x270 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x276 PushV
	var_8_object = var_6_object; // 0x277 Mov
	TaskCall(0); // 0x278 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x279 NEW_2
	TaskReturn(); // 0x27a TaskReturn
	return 0; // 0x27c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x281 PushV
	var_9_string = "cleanup"; // 0x282 PushS
	var_10_bool = var_6_string == var_9_string; // 0x283 Eq
	if(var_10_bool == 0) goto Label_664; // 0x284 JumpB
	var_0_object = 1; // 0x285 TMovB
	IsLoaded(var_8_bool); // 0x286 Func
	var_11_bool = 0; // 0x288 PushV
	var_11_bool = 0; // 0x289 MovB
	var_12_bool = var_8_bool == 0; // 0x28a Not
	if(var_12_bool == 0) goto Label_657; // 0x28b JumpB
	var_13_bool = 0; // 0x28c PushV
	func_685(var_13_bool); // 0x28d NEW_2
	if(var_13_bool == 0) goto Label_657; // 0x28f JumpB
	var_11_bool = 1; // 0x290 MovB
	
Label_657:
	if(var_11_bool == 0) goto Label_663; // 0x291 JumpB
	var_14_object = Obj(); // 0x292 PushV
	func_965(var_14_object); // 0x293 NEW_2
	RemoveActor(var_14_object); // 0x295 Func
	
Label_663:
	goto Label_668; // 0x297 Jump
	
Label_668:
	return 2; // 0x29c Return
	
Label_664:
	var_17_string = "restore"; // 0x298 PushS
	var_18_bool = var_6_string == var_17_string; // 0x299 Eq
	if(var_18_bool == 0) goto Label_668; // 0x29a JumpB
	var_0_object = 0; // 0x29b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x29d PushV
	var_6_bool = 0; // 0x29e MovB
	var_7_object = var_0_object; // 0x29f PushT
	if(var_7_object == 0) goto Label_678; // 0x2a0 JumpB
	var_8_bool = 0; // 0x2a1 PushV
	func_685(var_8_bool); // 0x2a2 NEW_2
	if(var_8_bool == 0) goto Label_678; // 0x2a4 JumpB
	var_6_bool = 1; // 0x2a5 MovB
	
Label_678:
	if(var_6_bool == 0) goto Label_684; // 0x2a6 JumpB
	var_9_object = Obj(); // 0x2a7 PushV
	func_965(var_9_object); // 0x2a8 NEW_2
	RemoveActor(var_9_object); // 0x2aa Func
	
Label_684:
	return 0; // 0x2ac Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_637(); // 0x272 NEW_2
	return 0; // 0x274 Return
}


func_1024()
{
	var_14_string = "game_final"; // 0x401 PushS
	var_15_int = 3; // 0x402 PushI
	SetVariable(var_14_string, var_15_int); // 0x403 Func
	return 0; // 0x405 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_687(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1211(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1209(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1213(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1215(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1192(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_965(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_774(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_264_bool = var_17_bool == 0; // 0x3f Not
	if(var_264_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_265_object = Obj(); // 0x46 PushV
	var_265_object = var_8_object; // 0x47 Mov
	func_756(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_774(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x306 PushV
	var_88_string = "voice_common"; // 0x307 PushS
	GetVariable(var_88_string, var_86_int); // 0x308 Func
	var_89_int = var_86_int; // 0x30a Push
	if(var_89_int == 0) goto Label_812; // 0x30b JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x30c PushV
	var_91_object = var_80_object; // 0x30d Mov
	func_832(var_91_object); // 0x30e NEW_2
	var_120_bool = var_90_bool == 0; // 0x310 Not
	if(var_120_bool == 0) goto Label_794; // 0x311 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x312 PushV
	var_122_object = var_80_object; // 0x313 Mov
	func_869(var_122_object); // 0x314 NEW_2
	var_156_bool = var_121_bool == 0; // 0x316 Not
	if(var_156_bool == 0) goto Label_794; // 0x317 JumpB
	var_79_bool = 0; // 0x318 MovB
	return 4; // 0x319 Return
	
Label_794:
	var_157_int = 2; // 0x31a PushI
	irand(var_87_int, var_157_int); // 0x31b Func
	var_158_int = var_87_int; // 0x31d Push
	if(var_158_int == 0) goto Label_807; // 0x31e JumpB
	var_159_string = "voice_common"; // 0x31f PushS
	var_160_int = 1; // 0x320 PushI
	var_161_int = var_86_int + var_160_int; // 0x321 Add
	var_162_int = 3; // 0x322 PushI
	var_163_int = var_161_int / var_162_int; // 0x323 Mod
	SetVariable(var_159_string, var_163_int); // 0x324 Func
	goto Label_811; // 0x326 Jump
	
Label_811:
	goto Label_830; // 0x32b Jump
	
Label_830:
	var_79_bool = 1; // 0x33e MovB
	return 4; // 0x33f Return
	
Label_807:
	var_164_string = "voice_common"; // 0x327 PushS
	var_165_int = 0; // 0x328 PushI
	SetVariable(var_164_string, var_165_int); // 0x329 Func
	
Label_812:
	var_166_bool = 0; var_167_object = Obj(); // 0x32c PushV
	var_167_object = var_80_object; // 0x32d Mov
	func_869(var_167_object); // 0x32e NEW_2
	var_168_bool = var_166_bool == 0; // 0x330 Not
	if(var_168_bool == 0) goto Label_826; // 0x331 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x332 PushV
	var_170_object = var_80_object; // 0x333 Mov
	func_832(var_170_object); // 0x334 NEW_2
	var_171_bool = var_169_bool == 0; // 0x336 Not
	if(var_171_bool == 0) goto Label_826; // 0x337 JumpB
	var_79_bool = 0; // 0x338 MovB
	return 4; // 0x339 Return
	
Label_826:
	var_172_string = "voice_common"; // 0x33a PushS
	var_173_int = 1; // 0x33b PushI
	SetVariable(var_172_string, var_173_int); // 0x33c Func
}


func_1030()
{
	var_18_string = ""; var_19_bool = 0; // 0x407 PushV
	var_18_string = "isobor@door1"; // 0x408 MovS
	var_19_bool = 0; // 0x409 MovB
	func_986(var_18_string, var_19_bool); // 0x40a NEW_2
	return 0; // 0x40c Return
}


func_1164(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; // 0x48c PushV
	var_44_object = Obj(); // 0x48d PushV
	func_1151(var_44_object); // 0x48e NEW_2
	var_41_object = var_44_object; // 0x48f Mov
	Find(var_37_int, var_42_object); // 0x491 ObjFunc
	var_49_bool = var_42_object == 0; // 0x493 Not
	if(var_49_bool == 0) goto Label_1179; // 0x494 JumpB
	var_50_string = "Can't find diary parent with id: "; // 0x495 PushS
	var_51_int = var_50_string + var_37_int; // 0x496 Add
	Trace(var_51_int); // 0x497 Func
	var_35_bool = 0; // 0x499 MovB
	return 6; // 0x49a Return
	
Label_1179:
	AddChild(var_36_object); // 0x49b ObjFunc
	var_52_int = 7; // 0x49d PushI
	SendWorldWndMessage(var_52_int); // 0x49e Func
	GetCategory(var_43_int); // 0x4a0 ObjFunc
	SetDiarySection(var_43_int); // 0x4a2 Func
	var_35_bool = 0; // 0x4a4 MovB
	return 6; // 0x4a5 Return
}


func_1037()
{
	func_1138(); // 0x40f NEW_2
	return 0; // 0x411 Return
}


func_912(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x390 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x391 Func
	var_244_bool = var_241_bool; // 0x393 Push
	if(var_244_bool == 0) goto Label_923; // 0x394 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x395 Func
	var_245_bool = 0; // 0x397 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x398 Func
	goto Label_927; // 0x39a Jump
	
Label_927:
	return 6; // 0x39f Return
	
Label_923:
	var_246_string = "Can't find lsh animation : "; // 0x39b PushS
	var_247_int = var_246_string + var_237_string; // 0x39c Add
	Trace(var_247_int); // 0x39d Func
}


func_1042()
{
	func_1112(); // 0x414 NEW_2
	return 0; // 0x416 Return
}


func_1047()
{
	func_1125(); // 0x419 NEW_2
	return 0; // 0x41b Return
}


func_1052()
{
	var_93_string = "game_final"; // 0x41d PushS
	var_94_int = 4; // 0x41e PushI
	SetVariable(var_93_string, var_94_int); // 0x41f Func
	return 0; // 0x421 Return
}


func_928(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x3a0 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x3a1 Func
	var_204_bool = var_201_bool; // 0x3a3 Push
	if(var_204_bool == 0) goto Label_938; // 0x3a4 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x3a5 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x3a7 Func
	goto Label_942; // 0x3a9 Jump
	
Label_942:
	return 6; // 0x3ae Return
	
Label_938:
	var_205_string = "Can't find lsh animation : "; // 0x3aa PushS
	var_206_int = var_205_string + var_194_string; // 0x3ab Add
	Trace(var_206_int); // 0x3ac Func
}


func_1058()
{
	func_1099(); // 0x424 NEW_2
	return 0; // 0x426 Return
}


func_1063(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x428 PushV
	var_184_string = "game_final"; // 0x429 MovS
	func_981(var_183_int, var_184_string); // 0x42a NEW_2
	var_187_int = 0; // 0x42c PushI
	var_188_bool = var_183_int != var_187_int; // 0x42d Neq
	if(var_188_bool == 0) goto Label_1073; // 0x42e JumpB
	var_181_bool = 1; // 0x42f MovB
	return 0; // 0x430 Return
	
Label_1073:
	var_181_bool = 0; // 0x431 MovB
	return 0; // 0x432 Return
}


func_1192(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x4a8 PushV
	var_73_string = "branch"; // 0x4a9 PushS
	GetVariable(var_73_string, var_72_int); // 0x4aa Func
	var_74_int = 0; // 0x4ac PushI
	var_75_bool = var_72_int == var_74_int; // 0x4ad Eq
	if(var_75_bool == 0) goto Label_1202; // 0x4ae JumpB
	var_70_int = 1; // 0x4af MovI
	return 2; // 0x4b0 Return
	
Label_1202:
	var_76_int = 1; // 0x4b2 PushI
	var_77_bool = var_72_int == var_76_int; // 0x4b3 Eq
	if(var_77_bool == 0) goto Label_1207; // 0x4b4 JumpB
	var_70_int = 2; // 0x4b5 MovI
	return 2; // 0x4b6 Return
	
Label_1207:
	var_70_int = 3; // 0x4b7 MovI
	return 2; // 0x4b8 Return
}


func_685(var_8_bool)
{
	var_8_bool = 1; // 0x2ad MovB
	return 0; // 0x2ae Return
}


func_687(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x2af PushV
	GetPosition(var_31_cvector); // 0x2b0 ObjFunc
	GetEyesHeight(var_30_float); // 0x2b2 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2b4 PushE
	var_39_float = var_39_float + var_30_float; // 0x2b5 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2b6 PopE
	GetPosition(var_32_cvector); // 0x2b7 Func
	GetEyesHeight(var_30_float); // 0x2b9 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2bb PushE
	var_40_float = var_40_float + var_30_float; // 0x2bc Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2bd PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x2be Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x2bf PushE
	var_41_float = 0; // 0x2c0 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x2c1 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x2c2 Or
	var_43_float = sqrt(var_42_int); // 0x2c3 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x2c4 Div2
	var_34_cvector = -var_33_cvector; // 0x2c5 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2c6 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2c7 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x2c8 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x2c9 Xor2
	func_971(var_45_cvector, var_46_cvector); // 0x2ca NEW_2
	var_53_int = 25; // 0x2cc PushI
	var_54_float = var_45_cvector * var_53_int; // 0x2cd Mult
	var_55_int = var_44_float + var_54_float; // 0x2ce Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x2cf PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2d0 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2d1 Add2
	IsOverrideActive(var_37_bool); // 0x2d2 Func
	var_57_bool = var_37_bool; // 0x2d4 Push
	if(var_57_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_18_bool = 0; // 0x2d6 MovB
	return 18; // 0x2d7 Return
	
Label_728:
	StopWorld(); // 0x2d8 Func
	var_58_bool = 1; // 0x2da PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x2db Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x2dd PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x2de PushE
	Rotate(var_59_float, var_60_float); // 0x2df Func
	var_61_bool = 0; // 0x2e1 PushV
	func_1217(var_61_bool); // 0x2e2 NEW_2
	if(var_61_bool == 0) goto Label_742; // 0x2e4 JumpB
	goto Label_750; // 0x2e5 Jump
	
Label_750:
	CameraWaitForPlayFinish(); // 0x2ee Func
	ResumeWorld(); // 0x2f0 Func
	var_18_bool = 1; // 0x2f2 MovB
	return 18; // 0x2f3 Return
	
Label_742:
	var_62_string = "head"; // 0x2e6 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2e7 Func
	var_63_bool = var_38_bool; // 0x2e9 Push
	if(var_63_bool == 0) goto Label_750; // 0x2ea JumpB
	var_64_string = "head"; // 0x2eb PushS
	LookAsyncCamera(var_64_string); // 0x2ec Func
}


func_943(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x3af PushV
	var_117_bool = 0; // 0x3b0 PushV
	func_1217(var_117_bool); // 0x3b1 NEW_2
	if(var_117_bool == 0) goto Label_956; // 0x3b3 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x3b4 Func
	var_118_bool = var_116_bool; // 0x3b6 Push
	if(var_118_bool == 0) goto Label_956; // 0x3b7 JumpB
	lshPlaySpeech(var_114_string); // 0x3b8 Func
	var_113_bool = 1; // 0x3ba MovB
	return 2; // 0x3bb Return
	
Label_956:
	var_113_bool = 0; // 0x3bc MovB
	return 2; // 0x3bd Return
}


func_1075(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x434 PushV
	var_226_string = "k12q01BurahInSobor"; // 0x435 MovS
	func_981(var_225_int, var_226_string); // 0x436 NEW_2
	var_227_int = 0; // 0x438 PushI
	var_228_bool = var_225_int != var_227_int; // 0x439 Neq
	if(var_228_bool == 0) goto Label_1085; // 0x43a JumpB
	var_223_bool = 1; // 0x43b MovB
	return 0; // 0x43c Return
	
Label_1085:
	var_223_bool = 0; // 0x43d MovB
	return 0; // 0x43e Return
}


func_1209(var_67_int)
{
	var_67_int = 515532; // 0x4b9 MovI
	return 0; // 0x4ba Return
}


func_1211(var_66_int)
{
	var_66_int = 514840; // 0x4bb MovI
	return 0; // 0x4bc Return
}


func_1213(var_68_string)
{
	var_68_string = "ui/NPC_Block.png"; // 0x4bd MovS
	return 0; // 0x4be Return
}


func_958()
{
	var_9_bool = 0; // 0x3be PushV
	func_1217(var_9_bool); // 0x3bf NEW_2
	if(var_9_bool == 0) goto Label_964; // 0x3c1 JumpB
	lshStopSpeech(); // 0x3c2 Func
	
Label_964:
	return 0; // 0x3c4 Return
}


func_1087(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x440 PushV
	var_217_string = "k12q01DankoInSobor"; // 0x441 MovS
	func_981(var_216_int, var_217_string); // 0x442 NEW_2
	var_218_int = 0; // 0x444 PushI
	var_219_bool = var_216_int != var_218_int; // 0x445 Neq
	if(var_219_bool == 0) goto Label_1097; // 0x446 JumpB
	var_214_bool = 1; // 0x447 MovB
	return 0; // 0x448 Return
	
Label_1097:
	var_214_bool = 0; // 0x449 MovB
	return 0; // 0x44a Return
}


func_1215(var_69_string)
{
	var_69_string = "ui/NPC_Block_b.png"; // 0x4bf MovS
	return 0; // 0x4c0 Return
}


func_1217(var_61_bool)
{
	var_61_bool = 1; // 0x4c1 MovB
	return 0; // 0x4c2 Return
}


func_832(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x340 PushV
	var_97_string = "c"; // 0x341 MovS
	var_98_int = 0; // 0x342 MovI
	
Label_835:
	var_102_int = 1; // 0x343 PushI
	if(var_102_int == 0) goto Label_848; // 0x344 JumpB
	var_103_int = 1; // 0x345 PushI
	var_104_int = var_98_int + var_103_int; // 0x346 Add
	var_105_int = var_97_string + var_104_int; // 0x347 Add
	HasProperty(var_105_int, var_99_bool); // 0x348 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x34a Not
	if(var_106_bool == 0) goto Label_845; // 0x34b JumpB
	goto Label_848; // 0x34c Jump
	
Label_848:
	var_107_bool = var_98_int == 0; // 0x350 Not
	if(var_107_bool == 0) goto Label_852; // 0x351 JumpB
	var_90_bool = 0; // 0x352 MovB
	return 10; // 0x353 Return
	
Label_852:
	var_100_int = 0; // 0x354 MovI
	var_108_int = 1; // 0x355 PushI
	var_109_bool = var_98_int > var_108_int; // 0x356 GT
	if(var_109_bool == 0) goto Label_858; // 0x357 JumpB
	irand(var_100_int, var_98_int); // 0x358 Func
	
Label_858:
	var_110_int = 1; // 0x35a PushI
	var_111_int = var_100_int + var_110_int; // 0x35b Add
	var_112_int = var_97_string + var_111_int; // 0x35c Add
	GetProperty(var_112_int, var_101_string); // 0x35d ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x35f PushV
	var_114_string = var_101_string; // 0x360 Mov
	func_943(var_113_bool, var_114_string); // 0x361 NEW_2
	var_90_bool = var_113_bool; // 0x362 Mov
	return 10; // 0x364 Return
	
Label_845:
	var_119_int = 1; // 0x34d PushI
	var_98_int = var_98_int + var_119_int; // 0x34e Add2
	goto Label_835; // 0x34f Jump
}


func_195(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xc4 PushV
	func_1217(var_191_bool); // 0xc5 NEW_2
	var_192_bool = var_191_bool == 0; // 0xc7 Not
	if(var_192_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_193_bool = var_190_string == var_2_object; // 0xca Eq
	if(var_193_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_194_string = ""; var_195_bool = 0; // 0xcd PushV
	var_194_string = var_190_string; // 0xce Mov
	var_196_string = ""; // 0xcf PushS
	var_197_bool = var_190_string == var_196_string; // 0xd0 Eq
	if(var_197_bool == 0) goto Label_212; // 0xd1 JumpB
	var_195_bool = 0; // 0xd2 MovB
	goto Label_213; // 0xd3 Jump
	
Label_213:
	func_928(var_194_string, var_195_bool); // 0xd5 NEW_2
	var_2_object = var_190_string; // 0xd7 TMov
	return 0; // 0xd8 Return
	
Label_212:
	var_195_bool = 1; // 0xd4 MovB
}


func_965(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3c5 PushV
	self(var_11_object); // 0x3c6 Func
	var_9_object = var_11_object; // 0x3c8 Mov
	return 2; // 0x3c9 Return
}


func_971(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x3cb PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x3cc Or
	var_49_float = sqrt(var_50_int); // 0x3cd Sqrt2
	var_51_float = 0.0; // 0x3ce PushF
	var_52_bool = var_49_float < var_51_float; // 0x3cf LT
	if(var_52_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3d1 MovV
	return 2; // 0x3d2 Return
	
Label_979:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3d3 Div2
	return 2; // 0x3d4 Return
}


func_1099()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x44b PushV
	var_101_int = 774; // 0x44c PushI
	var_102_int = 1; // 0x44d PushI
	var_103_int = 540275; // 0x44e PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x44f Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x451 PushV
	var_105_object = var_100_object; // 0x452 Mov
	var_106_int = 729; // 0x453 MovI
	func_1164(var_104_bool, var_105_object, var_106_int); // 0x454 NEW_2
	return 2; // 0x456 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_165; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_1063(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_138; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Doubt"; // 0x5e MovS
	func_195(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 539253; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_int = 539254; // 0x66 PushI
	var_209_int = 41198; // 0x67 PushI
	var_210_int = 41197; // 0x68 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x69 TObjFunc
	var_211_int = 539271; // 0x6b PushI
	var_212_int = 41215; // 0x6c PushI
	var_213_int = 41214; // 0x6d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6e TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x70 PushV
	var_215_object = var_1_object; // 0x71 MovT
	func_1087(var_215_object); // 0x72 NEW_2
	if(var_214_bool == 0) goto Label_122; // 0x74 JumpB
	var_220_int = 539257; // 0x75 PushI
	var_221_int = 41201; // 0x76 PushI
	var_222_int = 41200; // 0x77 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x78 TObjFunc
	
Label_122:
	var_223_bool = 0; var_224_object = Obj(); // 0x7a PushV
	var_224_object = var_1_object; // 0x7b MovT
	func_1075(var_224_object); // 0x7c NEW_2
	if(var_223_bool == 0) goto Label_132; // 0x7e JumpB
	var_229_int = 539262; // 0x7f PushI
	var_230_int = 41206; // 0x80 PushI
	var_231_int = 41205; // 0x81 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x82 TObjFunc
	
Label_132:
	var_232_int = 540270; // 0x84 PushI
	var_233_int = 42254; // 0x85 PushI
	var_234_int = 42253; // 0x86 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x87 TObjFunc
	goto Label_165; // 0x89 Jump
	
Label_165:
	var_235_bool = 0; // 0xa5 PushV
	func_1217(var_235_bool); // 0xa6 NEW_2
	if(var_235_bool == 0) goto Label_180; // 0xa8 JumpB
	
Label_169:
	lshWaitForAnimEnd(); // 0xa9 Func
	var_236_string = var_3_string; // 0xab PushT
	if(var_236_string == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_179:
	goto Label_194; // 0xb3 Jump
	
Label_194:
	return 0; // 0xc2 Return
	
Label_174:
	var_237_string = ""; // 0xae PushV
	var_237_string = var_2_object; // 0xaf MovT
	func_912(var_237_string); // 0xb0 NEW_2
	goto Label_169; // 0xb2 Jump
	
Label_180:
	var_248_string = "all"; // 0xb4 PushS
	var_249_string = "idle"; // 0xb5 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xb6 Func
	
Label_184:
	WaitForAnimEnd(); // 0xb8 Func
	var_250_string = var_3_string; // 0xba PushT
	if(var_250_string == 0) goto Label_189; // 0xbb JumpB
	goto Label_194; // 0xbc Jump
	
Label_189:
	var_251_string = "all"; // 0xbd PushS
	var_252_string = "idle"; // 0xbe PushS
	PlayAnimation(var_251_string, var_252_string); // 0xbf Func
	goto Label_184; // 0xc1 Jump
	
Label_138:
	var_253_string = ""; // 0x8a PushV
	var_253_string = "Neutral"; // 0x8b MovS
	func_195(var_175_object, var_253_string); // 0x8c NEW_2
	var_254_int = 539276; // 0x8e PushI
	SetMessage(var_254_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_255_int = 539277; // 0x93 PushI
	var_256_int = -1; // 0x94 PushI
	var_257_int = 41220; // 0x95 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x96 TObjFunc
	var_258_int = 542911; // 0x98 PushI
	var_259_int = -1; // 0x99 PushI
	var_260_int = 45342; // 0x9a PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x9b TObjFunc
	var_261_int = 542912; // 0x9d PushI
	var_262_int = -1; // 0x9e PushI
	var_263_int = 45343; // 0x9f PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xa0 TObjFunc
	goto Label_165; // 0xa2 Jump
}


func_981(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x3d5 PushV
	GetVariable(var_184_string, var_186_int); // 0x3d6 Func
	var_183_int = var_186_int; // 0x3d8 Mov
	return 2; // 0x3d9 Return
}


func_1112()
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x458 PushV
	var_32_int = 734; // 0x459 PushI
	var_33_int = 1; // 0x45a PushI
	var_34_int = 539364; // 0x45b PushI
	CreateDiaryEntry(var_31_object, var_32_int, var_33_int, var_34_int); // 0x45c Func
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; // 0x45e PushV
	var_36_object = var_31_object; // 0x45f Mov
	var_37_int = 729; // 0x460 MovI
	func_1164(var_35_bool, var_36_object, var_37_int); // 0x461 NEW_2
	return 2; // 0x463 Return
}


func_986(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3da PushV
	FindActor(var_21_object, var_18_string); // 0x3db Func
	var_22_bool = var_21_object == 0; // 0x3dd Not
	if(var_22_bool == 0) goto Label_998; // 0x3de JumpB
	var_23_string = "Door "; // 0x3df PushS
	var_24_int = var_23_string + var_18_string; // 0x3e0 Add
	var_25_string = " not found"; // 0x3e1 PushS
	var_26_int = var_24_int + var_25_string; // 0x3e2 Add
	Trace(var_26_int); // 0x3e3 Func
	goto Label_1001; // 0x3e5 Jump
	
Label_1001:
	return 2; // 0x3e9 Return
	
Label_998:
	var_27_string = "locked"; // 0x3e6 PushS
	SetProperty(var_27_string, var_19_bool); // 0x3e7 ObjFunc
}


func_869(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x365 PushV
	var_133_string = "d"; // 0x366 PushS
	var_134_int = 0; // 0x367 PushV
	func_1003(var_134_int); // 0x368 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x36a Add
	var_141_string = "m"; // 0x36b PushS
	var_128_string = var_140_int + var_141_string; // 0x36c Add2
	var_129_int = 0; // 0x36d MovI
	
Label_878:
	var_142_int = 1; // 0x36e PushI
	if(var_142_int == 0) goto Label_891; // 0x36f JumpB
	var_143_int = 1; // 0x370 PushI
	var_144_int = var_129_int + var_143_int; // 0x371 Add
	var_145_int = var_128_string + var_144_int; // 0x372 Add
	HasProperty(var_145_int, var_130_bool); // 0x373 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x375 Not
	if(var_146_bool == 0) goto Label_888; // 0x376 JumpB
	goto Label_891; // 0x377 Jump
	
Label_891:
	var_147_bool = var_129_int == 0; // 0x37b Not
	if(var_147_bool == 0) goto Label_895; // 0x37c JumpB
	var_121_bool = 0; // 0x37d MovB
	return 10; // 0x37e Return
	
Label_895:
	var_131_int = 0; // 0x37f MovI
	var_148_int = 1; // 0x380 PushI
	var_149_bool = var_129_int > var_148_int; // 0x381 GT
	if(var_149_bool == 0) goto Label_901; // 0x382 JumpB
	irand(var_131_int, var_129_int); // 0x383 Func
	
Label_901:
	var_150_int = 1; // 0x385 PushI
	var_151_int = var_131_int + var_150_int; // 0x386 Add
	var_152_int = var_128_string + var_151_int; // 0x387 Add
	GetProperty(var_152_int, var_132_string); // 0x388 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x38a PushV
	var_154_string = var_132_string; // 0x38b Mov
	func_943(var_153_bool, var_154_string); // 0x38c NEW_2
	var_121_bool = var_153_bool; // 0x38d Mov
	return 10; // 0x38f Return
	
Label_888:
	var_155_int = 1; // 0x378 PushI
	var_129_int = var_129_int + var_155_int; // 0x379 Add2
	goto Label_878; // 0x37a Jump
}


func_1125()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x465 PushV
	var_83_int = 732; // 0x466 PushI
	var_84_int = 1; // 0x467 PushI
	var_85_int = 539362; // 0x468 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x469 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x46b PushV
	var_87_object = var_82_object; // 0x46c Mov
	var_88_int = 729; // 0x46d MovI
	func_1164(var_86_bool, var_87_object, var_88_int); // 0x46e NEW_2
	return 2; // 0x470 Return
}


func_1003(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x3eb PushV
	GetGameTime(var_136_float); // 0x3ec Func
	var_137_int = 1; // 0x3ee PushI
	var_138_int = 0; // 0x3ef PushV
	var_139_int = 24; // 0x3f0 PushI
	var_138_int = var_136_float / var_136_float; // 0x3f1 Div2
	var_134_int = var_137_int + var_138_int; // 0x3f2 Add2
	return 2; // 0x3f3 Return
}


func_1138()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x472 PushV
	var_65_int = 733; // 0x473 PushI
	var_66_int = 1; // 0x474 PushI
	var_67_int = 539363; // 0x475 PushI
	CreateDiaryEntry(var_64_object, var_65_int, var_66_int, var_67_int); // 0x476 Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0x478 PushV
	var_69_object = var_64_object; // 0x479 Mov
	var_70_int = 729; // 0x47a MovI
	func_1164(var_68_bool, var_69_object, var_70_int); // 0x47b NEW_2
	return 2; // 0x47d Return
}


func_756()
{
	var_266_bool = 0; var_267_bool = 0; // 0x2f4 PushV
	var_268_bool = 1; // 0x2f5 PushB
	CameraSwitchToNormal(var_268_bool); // 0x2f6 Func
	var_269_bool = 0; // 0x2f8 PushV
	func_1217(var_269_bool); // 0x2f9 NEW_2
	if(var_269_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_773; // 0x2fc Jump
	
Label_773:
	return 2; // 0x305 Return
	
Label_765:
	var_270_string = "head"; // 0x2fd PushS
	HasAnimationTrack(var_267_bool, var_270_string); // 0x2fe Func
	var_271_bool = var_267_bool; // 0x300 Push
	if(var_271_bool == 0) goto Label_773; // 0x301 JumpB
	var_272_string = "head"; // 0x302 PushS
	UnlookAsync(var_272_string); // 0x303 Func
}


func_1012()
{
	var_75_string = "game_final"; // 0x3f5 PushS
	var_76_int = 1; // 0x3f6 PushI
	SetVariable(var_75_string, var_76_int); // 0x3f7 Func
	return 0; // 0x3f9 Return
}


func_1018()
{
	var_57_string = "game_final"; // 0x3fb PushS
	var_58_int = 2; // 0x3fc PushI
	SetVariable(var_57_string, var_58_int); // 0x3fd Func
	return 0; // 0x3ff Return
}


func_637()
{
	
Label_637:
	Hold(); // 0x27d Func
	goto Label_637; // 0x27f Jump
}


func_1151(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x47f PushV
	GetDiaryRoot(var_46_object); // 0x480 Func
	var_47_bool = var_46_object == 0; // 0x482 Not
	if(var_47_bool == 0) goto Label_1161; // 0x483 JumpB
	var_48_string = "Can't retrieve diary root"; // 0x484 PushS
	Trace(var_48_string); // 0x485 Func
	var_44_object = 0; // 0x487 MovB
	return 2; // 0x488 Return
	
Label_1161:
	var_44_object = var_46_object; // 0x489 Mov
	return 2; // 0x48a Return
}


