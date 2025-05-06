task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_619; // 0xad JumpB
	func_756(); // 0xaf Call
	var_10_int = 14668; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_195; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_816(); // 0xb7 Call
	var_41_object = Obj(); var_42_object = Obj(); // 0xb9 PushV
	var_41_object = var_1_object; // 0xba MovT
	var_42_object = var_0_object; // 0xbb MovT
	func_834(var_42_object); // 0xbc Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xbe PushV
	var_60_object = var_1_object; // 0xbf MovT
	var_61_object = var_0_object; // 0xc0 MovT
	func_810(); // 0xc1 Call
	
Label_195:
	var_64_int = 14696; // 0xc3 PushI
	var_65_bool = var_7_bool == var_64_int; // 0xc4 Eq
	if(var_65_bool == 0) goto Label_213; // 0xc5 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0xc6 PushV
	var_66_object = var_1_object; // 0xc7 MovT
	var_67_object = var_0_object; // 0xc8 MovT
	func_854(var_67_object); // 0xc9 Call
	var_72_object = Obj(); var_73_object = Obj(); // 0xcb PushV
	var_72_object = var_1_object; // 0xcc MovT
	var_73_object = var_0_object; // 0xcd MovT
	func_810(); // 0xce Call
	var_74_object = Obj(); var_75_object = Obj(); // 0xd0 PushV
	var_74_object = var_1_object; // 0xd1 MovT
	var_75_object = var_0_object; // 0xd2 MovT
	func_825(); // 0xd3 Call
	
Label_213:
	var_87_int = 14692; // 0xd5 PushI
	var_88_bool = var_7_bool == var_87_int; // 0xd6 Eq
	if(var_88_bool == 0) goto Label_221; // 0xd7 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xd8 PushV
	var_89_object = var_1_object; // 0xd9 MovT
	var_90_object = var_0_object; // 0xda MovT
	func_845(); // 0xdb Call
	
Label_221:
	var_102_int = 14669; // 0xdd PushI
	var_103_bool = var_7_bool == var_102_int; // 0xde Eq
	if(var_103_bool == 0) goto Label_229; // 0xdf JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0xe0 PushV
	var_104_object = var_1_object; // 0xe1 MovT
	var_105_object = var_0_object; // 0xe2 MovT
	func_865(); // 0xe3 Call
	
Label_229:
	var_108_int = 14659; // 0xe5 PushI
	var_109_bool = var_6_int == var_108_int; // 0xe6 Eq
	if(var_109_bool == 0) goto Label_286; // 0xe7 JumpB
	var_110_string = ""; // 0xe8 PushV
	var_110_string = "Neutral"; // 0xe9 MovS
	func_155(var_7_bool, var_110_string); // 0xea Call
	var_125_int = 13423; // 0xec PushI
	SetMessage(var_125_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_126_bool = 0; var_127_object = Obj(); // 0xf1 PushV
	var_127_object = var_1_object; // 0xf2 MovT
	func_871(var_127_object); // 0xf3 Call
	if(var_126_bool == 0) goto Label_251; // 0xf5 JumpB
	var_134_int = 13424; // 0xf6 PushI
	var_135_int = 14661; // 0xf7 PushI
	var_136_int = 14660; // 0xf8 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xf9 TObjFunc
	
Label_251:
	var_137_bool = 0; // 0xfb PushV
	var_137_bool = 0; // 0xfc MovB
	var_138_bool = 0; var_139_object = Obj(); // 0xfd PushV
	var_139_object = var_1_object; // 0xfe MovT
	func_883(var_139_object); // 0xff Call
	if(var_138_bool == 0) goto Label_264; // 0x101 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x102 PushV
	var_145_object = var_1_object; // 0x103 MovT
	func_895(var_145_object); // 0x104 Call
	if(var_144_bool == 0) goto Label_264; // 0x106 JumpB
	var_137_bool = 1; // 0x107 MovB
	
Label_264:
	if(var_137_bool == 0) goto Label_270; // 0x108 JumpB
	var_150_int = 13447; // 0x109 PushI
	var_151_int = 14684; // 0x10a PushI
	var_152_int = 14683; // 0x10b PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x10c TObjFunc
	
Label_270:
	var_153_bool = 0; var_154_object = Obj(); // 0x10e PushV
	var_154_object = var_1_object; // 0x10f MovT
	func_907(var_154_object); // 0x110 Call
	if(var_153_bool == 0) goto Label_280; // 0x112 JumpB
	var_159_int = 13433; // 0x113 PushI
	var_160_int = 14670; // 0x114 PushI
	var_161_int = 14669; // 0x115 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x116 TObjFunc
	
Label_280:
	var_162_int = 13460; // 0x118 PushI
	var_163_int = -1; // 0x119 PushI
	var_164_int = 14697; // 0x11a PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x11b TObjFunc
	return 0; // 0x11d Return
	
Label_286:
	var_165_int = 14670; // 0x11e PushI
	var_166_bool = var_6_int == var_165_int; // 0x11f Eq
	if(var_166_bool == 0) goto Label_304; // 0x120 JumpB
	var_167_string = ""; // 0x121 PushV
	var_167_string = "Neutral"; // 0x122 MovS
	func_155(var_7_bool, var_167_string); // 0x123 Call
	var_168_int = 13434; // 0x125 PushI
	SetMessage(var_168_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_169_int = 13435; // 0x12a PushI
	var_170_int = 14672; // 0x12b PushI
	var_171_int = 14671; // 0x12c PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_172_int = 14672; // 0x130 PushI
	var_173_bool = var_6_int == var_172_int; // 0x131 Eq
	if(var_173_bool == 0) goto Label_322; // 0x132 JumpB
	var_174_string = ""; // 0x133 PushV
	var_174_string = "Neutral"; // 0x134 MovS
	func_155(var_7_bool, var_174_string); // 0x135 Call
	var_175_int = 13436; // 0x137 PushI
	SetMessage(var_175_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_176_int = 13437; // 0x13c PushI
	var_177_int = 14674; // 0x13d PushI
	var_178_int = 14673; // 0x13e PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_179_int = 14674; // 0x142 PushI
	var_180_bool = var_6_int == var_179_int; // 0x143 Eq
	if(var_180_bool == 0) goto Label_345; // 0x144 JumpB
	var_181_string = ""; // 0x145 PushV
	var_181_string = "Neutral"; // 0x146 MovS
	func_155(var_7_bool, var_181_string); // 0x147 Call
	var_182_int = 13438; // 0x149 PushI
	SetMessage(var_182_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_183_int = 13494; // 0x14e PushI
	var_184_int = 14736; // 0x14f PushI
	var_185_int = 14735; // 0x150 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x151 TObjFunc
	var_186_int = 13491; // 0x153 PushI
	var_187_int = 14732; // 0x154 PushI
	var_188_int = 14731; // 0x155 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_189_int = 14732; // 0x159 PushI
	var_190_bool = var_6_int == var_189_int; // 0x15a Eq
	if(var_190_bool == 0) goto Label_363; // 0x15b JumpB
	var_191_string = ""; // 0x15c PushV
	var_191_string = "Neutral"; // 0x15d MovS
	func_155(var_7_bool, var_191_string); // 0x15e Call
	var_192_int = 13492; // 0x160 PushI
	SetMessage(var_192_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_193_int = 13493; // 0x165 PushI
	var_194_int = 14678; // 0x166 PushI
	var_195_int = 14733; // 0x167 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_196_int = 14736; // 0x16b PushI
	var_197_bool = var_6_int == var_196_int; // 0x16c Eq
	if(var_197_bool == 0) goto Label_381; // 0x16d JumpB
	var_198_string = ""; // 0x16e PushV
	var_198_string = "Neutral"; // 0x16f MovS
	func_155(var_7_bool, var_198_string); // 0x170 Call
	var_199_int = 13495; // 0x172 PushI
	SetMessage(var_199_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_200_int = 13439; // 0x177 PushI
	var_201_int = 14676; // 0x178 PushI
	var_202_int = 14675; // 0x179 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_203_int = 14676; // 0x17d PushI
	var_204_bool = var_6_int == var_203_int; // 0x17e Eq
	if(var_204_bool == 0) goto Label_399; // 0x17f JumpB
	var_205_string = ""; // 0x180 PushV
	var_205_string = "Neutral"; // 0x181 MovS
	func_155(var_7_bool, var_205_string); // 0x182 Call
	var_206_int = 13440; // 0x184 PushI
	SetMessage(var_206_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_207_int = 13441; // 0x189 PushI
	var_208_int = 14678; // 0x18a PushI
	var_209_int = 14677; // 0x18b PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_210_int = 14678; // 0x18f PushI
	var_211_bool = var_6_int == var_210_int; // 0x190 Eq
	if(var_211_bool == 0) goto Label_417; // 0x191 JumpB
	var_212_string = ""; // 0x192 PushV
	var_212_string = "Neutral"; // 0x193 MovS
	func_155(var_7_bool, var_212_string); // 0x194 Call
	var_213_int = 13442; // 0x196 PushI
	SetMessage(var_213_int); // 0x197 TObjFunc
	ClearReplies(); // 0x199 TObjFunc
	var_214_int = 13444; // 0x19b PushI
	var_215_int = 14681; // 0x19c PushI
	var_216_int = 14680; // 0x19d PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x19e TObjFunc
	return 0; // 0x1a0 Return
	
Label_417:
	var_217_int = 14681; // 0x1a1 PushI
	var_218_bool = var_6_int == var_217_int; // 0x1a2 Eq
	if(var_218_bool == 0) goto Label_435; // 0x1a3 JumpB
	var_219_string = ""; // 0x1a4 PushV
	var_219_string = "Neutral"; // 0x1a5 MovS
	func_155(var_7_bool, var_219_string); // 0x1a6 Call
	var_220_int = 13445; // 0x1a8 PushI
	SetMessage(var_220_int); // 0x1a9 TObjFunc
	ClearReplies(); // 0x1ab TObjFunc
	var_221_int = 13446; // 0x1ad PushI
	var_222_int = -1; // 0x1ae PushI
	var_223_int = 14682; // 0x1af PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_224_int = 14684; // 0x1b3 PushI
	var_225_bool = var_6_int == var_224_int; // 0x1b4 Eq
	if(var_225_bool == 0) goto Label_458; // 0x1b5 JumpB
	var_226_string = ""; // 0x1b6 PushV
	var_226_string = "Neutral"; // 0x1b7 MovS
	func_155(var_7_bool, var_226_string); // 0x1b8 Call
	var_227_int = 13448; // 0x1ba PushI
	SetMessage(var_227_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_228_int = 13449; // 0x1bf PushI
	var_229_int = 14686; // 0x1c0 PushI
	var_230_int = 14685; // 0x1c1 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1c2 TObjFunc
	var_231_int = 13451; // 0x1c4 PushI
	var_232_int = 14688; // 0x1c5 PushI
	var_233_int = 14687; // 0x1c6 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_234_int = 14688; // 0x1ca PushI
	var_235_bool = var_6_int == var_234_int; // 0x1cb Eq
	if(var_235_bool == 0) goto Label_476; // 0x1cc JumpB
	var_236_string = ""; // 0x1cd PushV
	var_236_string = "Neutral"; // 0x1ce MovS
	func_155(var_7_bool, var_236_string); // 0x1cf Call
	var_237_int = 13452; // 0x1d1 PushI
	SetMessage(var_237_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_238_int = 13453; // 0x1d6 PushI
	var_239_int = 14690; // 0x1d7 PushI
	var_240_int = 14689; // 0x1d8 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_241_int = 14690; // 0x1dc PushI
	var_242_bool = var_6_int == var_241_int; // 0x1dd Eq
	if(var_242_bool == 0) goto Label_499; // 0x1de JumpB
	var_243_string = ""; // 0x1df PushV
	var_243_string = "Neutral"; // 0x1e0 MovS
	func_155(var_7_bool, var_243_string); // 0x1e1 Call
	var_244_int = 13454; // 0x1e3 PushI
	SetMessage(var_244_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_245_int = 13455; // 0x1e8 PushI
	var_246_int = 14694; // 0x1e9 PushI
	var_247_int = 14691; // 0x1ea PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1eb TObjFunc
	var_248_int = 13456; // 0x1ed PushI
	var_249_int = -1; // 0x1ee PushI
	var_250_int = 14692; // 0x1ef PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1f0 TObjFunc
	return 0; // 0x1f2 Return
	
Label_499:
	var_251_int = 14686; // 0x1f3 PushI
	var_252_bool = var_6_int == var_251_int; // 0x1f4 Eq
	if(var_252_bool == 0) goto Label_517; // 0x1f5 JumpB
	var_253_string = ""; // 0x1f6 PushV
	var_253_string = "Neutral"; // 0x1f7 MovS
	func_155(var_7_bool, var_253_string); // 0x1f8 Call
	var_254_int = 13450; // 0x1fa PushI
	SetMessage(var_254_int); // 0x1fb TObjFunc
	ClearReplies(); // 0x1fd TObjFunc
	var_255_int = 13457; // 0x1ff PushI
	var_256_int = 14694; // 0x200 PushI
	var_257_int = 14693; // 0x201 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_258_int = 14694; // 0x205 PushI
	var_259_bool = var_6_int == var_258_int; // 0x206 Eq
	if(var_259_bool == 0) goto Label_535; // 0x207 JumpB
	var_260_string = ""; // 0x208 PushV
	var_260_string = "Neutral"; // 0x209 MovS
	func_155(var_7_bool, var_260_string); // 0x20a Call
	var_261_int = 13458; // 0x20c PushI
	SetMessage(var_261_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_262_int = 13459; // 0x211 PushI
	var_263_int = -1; // 0x212 PushI
	var_264_int = 14696; // 0x213 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x214 TObjFunc
	return 0; // 0x216 Return
	
Label_535:
	var_265_int = 14661; // 0x217 PushI
	var_266_bool = var_6_int == var_265_int; // 0x218 Eq
	if(var_266_bool == 0) goto Label_553; // 0x219 JumpB
	var_267_string = ""; // 0x21a PushV
	var_267_string = "Neutral"; // 0x21b MovS
	func_155(var_7_bool, var_267_string); // 0x21c Call
	var_268_int = 13425; // 0x21e PushI
	SetMessage(var_268_int); // 0x21f TObjFunc
	ClearReplies(); // 0x221 TObjFunc
	var_269_int = 13426; // 0x223 PushI
	var_270_int = 14663; // 0x224 PushI
	var_271_int = 14662; // 0x225 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_272_int = 14663; // 0x229 PushI
	var_273_bool = var_6_int == var_272_int; // 0x22a Eq
	if(var_273_bool == 0) goto Label_571; // 0x22b JumpB
	var_274_string = ""; // 0x22c PushV
	var_274_string = "Neutral"; // 0x22d MovS
	func_155(var_7_bool, var_274_string); // 0x22e Call
	var_275_int = 13427; // 0x230 PushI
	SetMessage(var_275_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_276_int = 13428; // 0x235 PushI
	var_277_int = 14665; // 0x236 PushI
	var_278_int = 14664; // 0x237 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_279_int = 14665; // 0x23b PushI
	var_280_bool = var_6_int == var_279_int; // 0x23c Eq
	if(var_280_bool == 0) goto Label_589; // 0x23d JumpB
	var_281_string = ""; // 0x23e PushV
	var_281_string = "Neutral"; // 0x23f MovS
	func_155(var_7_bool, var_281_string); // 0x240 Call
	var_282_int = 13429; // 0x242 PushI
	SetMessage(var_282_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_283_int = 13430; // 0x247 PushI
	var_284_int = 14667; // 0x248 PushI
	var_285_int = 14666; // 0x249 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x24a TObjFunc
	return 0; // 0x24c Return
	
Label_589:
	var_286_int = 14667; // 0x24d PushI
	var_287_bool = var_6_int == var_286_int; // 0x24e Eq
	if(var_287_bool == 0) goto Label_607; // 0x24f JumpB
	var_288_string = ""; // 0x250 PushV
	var_288_string = "Neutral"; // 0x251 MovS
	func_155(var_7_bool, var_288_string); // 0x252 Call
	var_289_int = 13431; // 0x254 PushI
	SetMessage(var_289_int); // 0x255 TObjFunc
	ClearReplies(); // 0x257 TObjFunc
	var_290_int = 13432; // 0x259 PushI
	var_291_int = -1; // 0x25a PushI
	var_292_int = 14668; // 0x25b PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x25c TObjFunc
	return 0; // 0x25e Return
	
Label_607:
	var_3_string = 1; // 0x25f TMovB
	var_293_bool = 0; // 0x260 PushV
	func_1030(var_293_bool); // 0x261 Call
	if(var_293_bool == 0) goto Label_615; // 0x263 JumpB
	lshStopAnimation(); // 0x264 Func
	goto Label_617; // 0x266 Jump
	
Label_617:
	return 0; // 0x269 Return
	
Label_615:
	StopAnimation(); // 0x267 Func
	
Label_619:
	return 0; // 0x26b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x26d PushV
	var_8_object = var_6_object; // 0x26e Mov
	TaskCall(0); // 0x26f TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x270 Call
	TaskReturn(); // 0x271 TaskReturn
	return 0; // 0x273 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x278 PushV
	var_9_string = "cleanup"; // 0x279 PushS
	var_10_bool = var_6_string == var_9_string; // 0x27a Eq
	if(var_10_bool == 0) goto Label_655; // 0x27b JumpB
	var_0_object = 1; // 0x27c TMovB
	IsLoaded(var_8_bool); // 0x27d Func
	var_11_bool = 0; // 0x27f PushV
	var_11_bool = 0; // 0x280 MovB
	var_12_bool = var_8_bool == 0; // 0x281 Not
	if(var_12_bool == 0) goto Label_648; // 0x282 JumpB
	var_13_bool = 0; // 0x283 PushV
	func_676(var_13_bool); // 0x284 Call
	if(var_13_bool == 0) goto Label_648; // 0x286 JumpB
	var_11_bool = 1; // 0x287 MovB
	
Label_648:
	if(var_11_bool == 0) goto Label_654; // 0x288 JumpB
	var_14_object = Obj(); // 0x289 PushV
	func_763(var_14_object); // 0x28a Call
	RemoveActor(var_14_object); // 0x28c Func
	
Label_654:
	goto Label_659; // 0x28e Jump
	
Label_659:
	return 2; // 0x293 Return
	
Label_655:
	var_17_string = "restore"; // 0x28f PushS
	var_18_bool = var_6_string == var_17_string; // 0x290 Eq
	if(var_18_bool == 0) goto Label_659; // 0x291 JumpB
	var_0_object = 0; // 0x292 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x294 PushV
	var_6_bool = 0; // 0x295 MovB
	var_7_object = var_0_object; // 0x296 PushT
	if(var_7_object == 0) goto Label_669; // 0x297 JumpB
	var_8_bool = 0; // 0x298 PushV
	func_676(var_8_bool); // 0x299 Call
	if(var_8_bool == 0) goto Label_669; // 0x29b JumpB
	var_6_bool = 1; // 0x29c MovB
	
Label_669:
	if(var_6_bool == 0) goto Label_675; // 0x29d JumpB
	var_9_object = Obj(); // 0x29e PushV
	func_763(var_9_object); // 0x29f Call
	RemoveActor(var_9_object); // 0x2a1 Func
	
Label_675:
	return 0; // 0x2a3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_628:
	Hold(); // 0x274 Func
	goto Label_628; // 0x276 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_678(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_1026(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_1028(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_961(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_140_bool = var_17_bool == 0; // 0x2d Not
	if(var_140_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_141_object = Obj(); // 0x34 PushV
	var_141_object = var_8_object; // 0x35 Mov
	func_734(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_769(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x301 PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x302 Or
	var_47_float = sqrt(var_48_int); // 0x303 Sqrt2
	var_49_float = 0.0; // 0x304 PushF
	var_50_bool = var_47_float < var_49_float; // 0x305 LT
	if(var_50_bool == 0) goto Label_777; // 0x306 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x307 MovV
	return 2; // 0x308 Return
	
Label_777:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x309 Div2
	return 2; // 0x30a Return
}


func_1026(var_59_int)
{
	var_59_int = 11961; // 0x402 MovI
	return 0; // 0x403 Return
}


func_1028(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png"; // 0x404 MovS
	return 0; // 0x405 Return
}


func_1030(var_78_bool)
{
	var_78_bool = 1; // 0x406 MovB
	return 0; // 0x407 Return
}


func_907(var_120_bool)
{
	var_122_int = 0; var_123_string = ""; // 0x38c PushV
	var_123_string = "ood8Burah1"; // 0x38d MovS
	func_779(var_122_int, var_123_string); // 0x38e Call
	var_124_int = 0; // 0x390 PushI
	var_125_bool = var_122_int == var_124_int; // 0x391 Eq
	if(var_125_bool == 0) goto Label_917; // 0x392 JumpB
	var_120_bool = 1; // 0x393 MovB
	return 0; // 0x394 Return
	
Label_917:
	var_120_bool = 0; // 0x395 MovB
	return 0; // 0x396 Return
}


func_779(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x30b PushV
	GetVariable(var_96_string, var_98_int); // 0x30c Func
	var_95_int = var_98_int; // 0x30e Mov
	return 2; // 0x30f Return
}


func_784(var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x310 PushV
	GetItemID(var_55_int); // 0x311 ObjFunc
	var_58_string = "Category"; // 0x313 PushS
	GetInvItemProperty(var_56_int, var_55_int, var_58_string); // 0x314 Func
	AddItem(var_57_bool, var_50_object, var_56_int, var_51_int); // 0x316 ObjFunc
	var_59_bool = var_57_bool == 0; // 0x318 Not
	if(var_59_bool == 0) goto Label_796; // 0x319 JumpB
	DropItems(var_50_object, var_51_int); // 0x31a ObjFunc
	
Label_796:
	return 6; // 0x31c Return
}


func_919(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x397 PushV
	GetDiaryRoot(var_33_object); // 0x398 Func
	var_34_bool = var_33_object == 0; // 0x39a Not
	if(var_34_bool == 0) goto Label_929; // 0x39b JumpB
	var_35_string = "Can't retrieve diary root"; // 0x39c PushS
	Trace(var_35_string); // 0x39d Func
	var_31_object = 0; // 0x39f MovB
	return 2; // 0x3a0 Return
	
Label_929:
	var_31_object = var_33_object; // 0x3a1 Mov
	return 2; // 0x3a2 Return
}


func_155(var_2_object, var_77_string)
{
	var_78_bool = 0; // 0x9c PushV
	func_1030(var_78_bool); // 0x9d Call
	var_79_bool = var_78_bool == 0; // 0x9f Not
	if(var_79_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_80_bool = var_77_string == var_2_object; // 0xa2 Eq
	if(var_80_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_81_string = ""; // 0xa5 PushV
	var_81_string = var_77_string; // 0xa6 Mov
	func_738(var_81_string); // 0xa7 Call
	var_2_object = var_77_string; // 0xa9 TMov
	return 0; // 0xaa Return
}


func_797(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x31d PushV
	CreateInvItem(var_48_object); // 0x31e Func
	SetItemName(var_45_string); // 0x320 ObjFunc
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x322 PushV
	var_49_object = var_44_object; // 0x323 Mov
	var_50_object = var_48_object; // 0x324 Mov
	var_51_int = var_46_int; // 0x325 Mov
	func_784(var_50_object, var_51_int); // 0x326 Call
	return 2; // 0x328 Return
}


func_676(var_8_bool)
{
	var_8_bool = 1; // 0x2a4 MovB
	return 0; // 0x2a5 Return
}


func_932(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x3a4 PushV
	var_31_object = Obj(); // 0x3a5 PushV
	func_919(var_31_object); // 0x3a6 Call
	var_28_object = var_31_object; // 0x3a7 Mov
	Find(var_24_int, var_29_object); // 0x3a9 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3ab Not
	if(var_36_bool == 0) goto Label_947; // 0x3ac JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3ad PushS
	var_38_int = var_37_string + var_24_int; // 0x3ae Add
	Trace(var_38_int); // 0x3af Func
	var_22_bool = 0; // 0x3b1 MovB
	return 6; // 0x3b2 Return
	
Label_947:
	AddChild(var_23_object); // 0x3b3 ObjFunc
	var_39_string = "player_diary"; // 0x3b5 PushS
	var_40_int = 1; // 0x3b6 PushI
	SetVariable(var_39_string, var_40_int); // 0x3b7 Func
	GetCategory(var_30_int); // 0x3b9 ObjFunc
	SetDiarySection(var_30_int); // 0x3bb Func
	var_22_bool = 0; // 0x3bd MovB
	return 6; // 0x3be Return
}


func_678(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x2a6 PushV
	GetPosition(var_29_cvector); // 0x2a7 ObjFunc
	GetEyesHeight(var_28_float); // 0x2a9 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x2ab PushE
	var_36_float = var_36_float + var_28_float; // 0x2ac Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x2ad PopE
	GetPosition(var_30_cvector); // 0x2ae Func
	GetEyesHeight(var_28_float); // 0x2b0 Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x2b2 PushE
	var_37_float = var_37_float + var_28_float; // 0x2b3 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x2b4 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x2b5 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x2b6 PushE
	var_38_float = 0; // 0x2b7 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x2b8 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x2b9 Or
	var_40_float = sqrt(var_39_int); // 0x2ba Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x2bb Div2
	var_32_cvector = -var_31_cvector; // 0x2bc Neg2
	var_41_int = 70; // 0x2bd PushI
	var_42_float = var_31_cvector * var_41_int; // 0x2be Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x2bf PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x2c0 PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x2c1 Xor2
	func_769(var_43_cvector, var_44_cvector); // 0x2c2 Call
	var_51_int = 25; // 0x2c4 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x2c5 Mult
	var_53_int = var_42_float + var_52_float; // 0x2c6 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x2c7 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x2c8 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x2c9 Add2
	IsOverrideActive(var_35_bool); // 0x2ca Func
	var_55_bool = var_35_bool; // 0x2cc Push
	if(var_55_bool == 0) goto Label_720; // 0x2cd JumpB
	var_18_bool = 0; // 0x2ce MovB
	return 16; // 0x2cf Return
	
Label_720:
	StopWorld(); // 0x2d0 Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x2d2 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x2d4 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x2d5 PushE
	Rotate(var_56_float, var_57_float); // 0x2d6 Func
	CameraWaitForPlayFinish(); // 0x2d8 Func
	ResumeWorld(); // 0x2da Func
	var_18_bool = 1; // 0x2dc MovB
	return 16; // 0x2dd Return
}


func_810()
{
	var_62_string = "playsound"; // 0x32b PushS
	var_63_string = "giveitem"; // 0x32c PushS
	TriggerWorld(var_62_string, var_63_string); // 0x32d Func
	return 0; // 0x32f Return
}


func_816()
{
	var_14_string = "d8q03"; // 0x331 PushS
	var_15_int = 1; // 0x332 PushI
	SetVariable(var_14_string, var_15_int); // 0x333 Func
	func_978(); // 0x336 Call
	return 0; // 0x338 Return
}


func_825()
{
	var_76_string = "d8q03"; // 0x33a PushS
	var_77_int = 1000; // 0x33b PushI
	SetVariable(var_76_string, var_77_int); // 0x33c Func
	func_994(); // 0x33f Call
	return 0; // 0x341 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_125; // 0x44 JumpB
	var_77_string = ""; // 0x45 PushV
	var_77_string = "Neutral"; // 0x46 MovS
	func_155(var_71_object, var_77_string); // 0x47 Call
	var_92_int = 13423; // 0x49 PushI
	SetMessage(var_92_int); // 0x4a TObjFunc
	ClearReplies(); // 0x4c TObjFunc
	var_93_bool = 0; var_94_object = Obj(); // 0x4e PushV
	var_94_object = var_1_object; // 0x4f MovT
	func_871(var_94_object); // 0x50 Call
	if(var_93_bool == 0) goto Label_88; // 0x52 JumpB
	var_101_int = 13424; // 0x53 PushI
	var_102_int = 14661; // 0x54 PushI
	var_103_int = 14660; // 0x55 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x56 TObjFunc
	
Label_88:
	var_104_bool = 0; // 0x58 PushV
	var_104_bool = 0; // 0x59 MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x5a PushV
	var_106_object = var_1_object; // 0x5b MovT
	func_883(var_106_object); // 0x5c Call
	if(var_105_bool == 0) goto Label_101; // 0x5e JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x5f PushV
	var_112_object = var_1_object; // 0x60 MovT
	func_895(var_112_object); // 0x61 Call
	if(var_111_bool == 0) goto Label_101; // 0x63 JumpB
	var_104_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_104_bool == 0) goto Label_107; // 0x65 JumpB
	var_117_int = 13447; // 0x66 PushI
	var_118_int = 14684; // 0x67 PushI
	var_119_int = 14683; // 0x68 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x69 TObjFunc
	
Label_107:
	var_120_bool = 0; var_121_object = Obj(); // 0x6b PushV
	var_121_object = var_1_object; // 0x6c MovT
	func_907(var_121_object); // 0x6d Call
	if(var_120_bool == 0) goto Label_117; // 0x6f JumpB
	var_126_int = 13433; // 0x70 PushI
	var_127_int = 14670; // 0x71 PushI
	var_128_int = 14669; // 0x72 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x73 TObjFunc
	
Label_117:
	var_129_int = 13460; // 0x75 PushI
	var_130_int = -1; // 0x76 PushI
	var_131_int = 14697; // 0x77 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x78 TObjFunc
	goto Label_125; // 0x7a Jump
	
Label_125:
	var_132_bool = 0; // 0x7d PushV
	func_1030(var_132_bool); // 0x7e Call
	if(var_132_bool == 0) goto Label_140; // 0x80 JumpB
	
Label_129:
	lshWaitForAnimEnd(); // 0x81 Func
	var_133_string = var_3_string; // 0x83 PushT
	if(var_133_string == 0) goto Label_134; // 0x84 JumpB
	goto Label_139; // 0x85 Jump
	
Label_139:
	goto Label_154; // 0x8b Jump
	
Label_154:
	return 0; // 0x9a Return
	
Label_134:
	var_134_string = ""; // 0x86 PushV
	var_134_string = var_2_object; // 0x87 MovT
	func_738(var_134_string); // 0x88 Call
	goto Label_129; // 0x8a Jump
	
Label_140:
	var_135_string = "all"; // 0x8c PushS
	var_136_string = "idle"; // 0x8d PushS
	PlayAnimation(var_135_string, var_136_string); // 0x8e Func
	
Label_144:
	WaitForAnimEnd(); // 0x90 Func
	var_137_string = var_3_string; // 0x92 PushT
	if(var_137_string == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_149:
	var_138_string = "all"; // 0x95 PushS
	var_139_string = "idle"; // 0x96 PushS
	PlayAnimation(var_138_string, var_139_string); // 0x97 Func
	goto Label_144; // 0x99 Jump
}


func_961(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x3c1 PushV
	var_64_string = "player"; // 0x3c2 PushS
	GetVariable(var_64_string, var_63_int); // 0x3c3 Func
	var_65_int = 0; // 0x3c5 PushI
	var_66_bool = var_63_int == var_65_int; // 0x3c6 Eq
	if(var_66_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_61_int = 200001; // 0x3c8 MovI
	return 2; // 0x3c9 Return
	
Label_971:
	var_67_int = 1; // 0x3cb PushI
	var_68_bool = var_63_int == var_67_int; // 0x3cc Eq
	if(var_68_bool == 0) goto Label_976; // 0x3cd JumpB
	var_61_int = 200002; // 0x3ce MovI
	return 2; // 0x3cf Return
	
Label_976:
	var_61_int = 200003; // 0x3d0 MovI
	return 2; // 0x3d1 Return
}


func_834(var_41_object)
{
	var_43_string = "burah gives blood"; // 0x343 PushS
	Trace(var_43_string); // 0x344 Func
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0; // 0x346 PushV
	var_44_object = var_41_object; // 0x347 Mov
	var_45_string = "d8q03_blood"; // 0x348 MovS
	var_46_int = 1; // 0x349 MovI
	func_797(var_44_object, var_45_string, var_46_int); // 0x34a Call
	return 0; // 0x34c Return
}


func_845()
{
	var_91_string = "d8q03"; // 0x34e PushS
	var_92_int = -1; // 0x34f PushI
	SetVariable(var_91_string, var_92_int); // 0x350 Func
	func_1010(); // 0x353 Call
	return 0; // 0x355 Return
}


func_978()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x3d2 PushV
	var_18_string = "Adding diary entry"; // 0x3d3 PushS
	Trace(var_18_string); // 0x3d4 Func
	var_19_int = 124; // 0x3d6 PushI
	var_20_int = 2; // 0x3d7 PushI
	var_21_int = 13763; // 0x3d8 PushI
	CreateDiaryEntry(var_17_object, var_19_int, var_20_int, var_21_int); // 0x3d9 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x3db PushV
	var_23_object = var_17_object; // 0x3dc Mov
	var_24_int = -1; // 0x3dd MovI
	func_932(var_22_bool, var_23_object, var_24_int); // 0x3de Call
	return 2; // 0x3e0 Return
}


func_854(var_66_object)
{
	var_68_string = "burah gives serum"; // 0x357 PushS
	Trace(var_68_string); // 0x358 Func
	var_69_object = Obj(); var_70_string = ""; var_71_int = 0; // 0x35a PushV
	var_69_object = var_66_object; // 0x35b Mov
	var_70_string = "burah_serum"; // 0x35c MovS
	var_71_int = 1; // 0x35d MovI
	func_797(var_69_object, var_70_string, var_71_int); // 0x35e Call
	return 0; // 0x360 Return
}


func_734()
{
	CameraSwitchToNormal(); // 0x2df Func
	return 0; // 0x2e1 Return
}


func_865()
{
	var_106_string = "ood8Burah1"; // 0x362 PushS
	var_107_int = 1; // 0x363 PushI
	SetVariable(var_106_string, var_107_int); // 0x364 Func
	return 0; // 0x366 Return
}


func_738(var_81_string)
{
	var_82_float = 0; var_83_float = 0; var_84_float = 0; var_85_float = 0; // 0x2e2 PushV
	var_86_string = "playing "; // 0x2e3 PushS
	var_87_int = var_86_string + var_81_string; // 0x2e4 Add
	Trace(var_87_int); // 0x2e5 Func
	lshGetAnimTimes(var_81_string, var_84_float, var_85_float); // 0x2e7 Func
	lshPlayAnimation(var_84_float, var_85_float); // 0x2e9 Func
	var_88_string = "start: "; // 0x2eb PushS
	var_89_int = var_88_string + var_84_float; // 0x2ec Add
	Trace(var_89_int); // 0x2ed Func
	var_90_string = "end: "; // 0x2ef PushS
	var_91_int = var_90_string + var_85_float; // 0x2f0 Add
	Trace(var_91_int); // 0x2f1 Func
	return 4; // 0x2f3 Return
}


func_994()
{
	var_78_object = Obj(); var_79_object = Obj(); // 0x3e2 PushV
	var_80_string = "Adding diary entry"; // 0x3e3 PushS
	Trace(var_80_string); // 0x3e4 Func
	var_81_int = 125; // 0x3e6 PushI
	var_82_int = 2; // 0x3e7 PushI
	var_83_int = 13764; // 0x3e8 PushI
	CreateDiaryEntry(var_79_object, var_81_int, var_82_int, var_83_int); // 0x3e9 Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0x3eb PushV
	var_85_object = var_79_object; // 0x3ec Mov
	var_86_int = 124; // 0x3ed MovI
	func_932(var_84_bool, var_85_object, var_86_int); // 0x3ee Call
	return 2; // 0x3f0 Return
}


func_871(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x368 PushV
	var_96_string = "d8q03"; // 0x369 MovS
	func_779(var_95_int, var_96_string); // 0x36a Call
	var_99_int = 0; // 0x36c PushI
	var_100_bool = var_95_int == var_99_int; // 0x36d Eq
	if(var_100_bool == 0) goto Label_881; // 0x36e JumpB
	var_93_bool = 1; // 0x36f MovB
	return 0; // 0x370 Return
	
Label_881:
	var_93_bool = 0; // 0x371 MovB
	return 0; // 0x372 Return
}


func_1010()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x3f2 PushV
	var_95_string = "Adding diary entry"; // 0x3f3 PushS
	Trace(var_95_string); // 0x3f4 Func
	var_96_int = 126; // 0x3f6 PushI
	var_97_int = 2; // 0x3f7 PushI
	var_98_int = 13765; // 0x3f8 PushI
	CreateDiaryEntry(var_94_object, var_96_int, var_97_int, var_98_int); // 0x3f9 Func
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0; // 0x3fb PushV
	var_100_object = var_94_object; // 0x3fc Mov
	var_101_int = 124; // 0x3fd MovI
	func_932(var_99_bool, var_100_object, var_101_int); // 0x3fe Call
	return 2; // 0x400 Return
}


func_883(var_105_bool)
{
	var_107_int = 0; var_108_string = ""; // 0x374 PushV
	var_108_string = "microscope_d8q03_blood"; // 0x375 MovS
	func_779(var_107_int, var_108_string); // 0x376 Call
	var_109_int = 1; // 0x378 PushI
	var_110_bool = var_107_int == var_109_int; // 0x379 Eq
	if(var_110_bool == 0) goto Label_893; // 0x37a JumpB
	var_105_bool = 1; // 0x37b MovB
	return 0; // 0x37c Return
	
Label_893:
	var_105_bool = 0; // 0x37d MovB
	return 0; // 0x37e Return
}


func_756()
{
	var_9_bool = 0; // 0x2f4 PushV
	func_1030(var_9_bool); // 0x2f5 Call
	if(var_9_bool == 0) goto Label_762; // 0x2f7 JumpB
	lshStopSpeech(); // 0x2f8 Func
	
Label_762:
	return 0; // 0x2fa Return
}


func_763(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x2fb PushV
	self(var_11_object); // 0x2fc Func
	var_9_object = var_11_object; // 0x2fe Mov
	return 2; // 0x2ff Return
}


func_895(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x380 PushV
	var_114_string = "d8q03"; // 0x381 MovS
	func_779(var_113_int, var_114_string); // 0x382 Call
	var_115_int = 1; // 0x384 PushI
	var_116_bool = var_113_int == var_115_int; // 0x385 Eq
	if(var_116_bool == 0) goto Label_905; // 0x386 JumpB
	var_111_bool = 1; // 0x387 MovB
	return 0; // 0x388 Return
	
Label_905:
	var_111_bool = 0; // 0x389 MovB
	return 0; // 0x38a Return
}


