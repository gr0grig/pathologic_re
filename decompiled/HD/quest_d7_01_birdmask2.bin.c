task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe4 PushI
	if(var_7_int == 0) goto Label_716; // 0xe5 JumpB
	func_847(); // 0xe7 NEW_2
	var_9_int = 14497; // 0xe9 PushI
	var_10_bool = var_6_int == var_9_int; // 0xea Eq
	if(var_10_bool == 0) goto Label_251; // 0xeb JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xec PushV
	var_11_object = var_1_object; // 0xed MovT
	var_12_object = var_0_object; // 0xee MovT
	func_931(var_12_object); // 0xef NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0xf1 PushV
	var_35_object = var_1_object; // 0xf2 MovT
	var_36_object = var_0_object; // 0xf3 MovT
	func_942(); // 0xf4 NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xf6 PushV
	var_39_object = var_1_object; // 0xf7 MovT
	var_40_object = var_0_object; // 0xf8 MovT
	func_925(); // 0xf9 NEW_2
	
Label_251:
	var_43_int = 14502; // 0xfb PushI
	var_44_bool = var_6_int == var_43_int; // 0xfc Eq
	if(var_44_bool == 0) goto Label_269; // 0xfd JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xfe PushV
	var_45_object = var_1_object; // 0xff MovT
	var_46_object = var_0_object; // 0x100 MovT
	func_925(); // 0x101 NEW_2
	var_47_object = Obj(); var_48_object = Obj(); // 0x103 PushV
	var_47_object = var_1_object; // 0x104 MovT
	var_48_object = var_0_object; // 0x105 MovT
	func_942(); // 0x106 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x108 PushV
	var_49_object = var_1_object; // 0x109 MovT
	var_50_object = var_0_object; // 0x10a MovT
	func_931(var_50_object); // 0x10b NEW_2
	
Label_269:
	var_51_int = 14513; // 0x10d PushI
	var_52_bool = var_6_int == var_51_int; // 0x10e Eq
	if(var_52_bool == 0) goto Label_277; // 0x10f JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x110 PushV
	var_53_object = var_1_object; // 0x111 MovT
	var_54_object = var_0_object; // 0x112 MovT
	func_948(); // 0x113 NEW_2
	
Label_277:
	var_61_int = 14517; // 0x115 PushI
	var_62_bool = var_6_int == var_61_int; // 0x116 Eq
	if(var_62_bool == 0) goto Label_285; // 0x117 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x118 PushV
	var_63_object = var_1_object; // 0x119 MovT
	var_64_object = var_0_object; // 0x11a MovT
	func_948(); // 0x11b NEW_2
	
Label_285:
	var_65_int = 14539; // 0x11d PushI
	var_66_bool = var_6_int == var_65_int; // 0x11e Eq
	if(var_66_bool == 0) goto Label_293; // 0x11f JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x120 PushV
	var_67_object = var_1_object; // 0x121 MovT
	var_68_object = var_0_object; // 0x122 MovT
	func_948(); // 0x123 NEW_2
	
Label_293:
	var_69_int = 14490; // 0x125 PushI
	var_70_bool = var_5_int == var_69_int; // 0x126 Eq
	if(var_70_bool == 0) goto Label_389; // 0x127 JumpB
	var_71_bool = 0; // 0x128 PushV
	var_71_bool = 0; // 0x129 MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x12a PushV
	var_73_object = var_1_object; // 0x12b MovT
	func_989(var_73_object); // 0x12c NEW_2
	if(var_72_bool == 0) goto Label_309; // 0x12e JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x12f PushV
	var_81_object = var_1_object; // 0x130 MovT
	func_967(var_81_object); // 0x131 NEW_2
	if(var_80_bool == 0) goto Label_309; // 0x133 JumpB
	var_71_bool = 1; // 0x134 MovB
	
Label_309:
	if(var_71_bool == 0) goto Label_325; // 0x135 JumpB
	var_86_string = ""; // 0x136 PushV
	var_86_string = "Neutral"; // 0x137 MovS
	func_205(var_6_int, var_86_string); // 0x138 NEW_2
	var_103_int = 513261; // 0x13a PushI
	SetMessage(var_103_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_104_int = 513262; // 0x13f PushI
	var_105_int = 14492; // 0x140 PushI
	var_106_int = 14491; // 0x141 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_107_bool = 0; // 0x145 PushV
	var_107_bool = 0; // 0x146 MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x147 PushV
	var_109_object = var_1_object; // 0x148 MovT
	func_955(var_109_object); // 0x149 NEW_2
	if(var_108_bool == 0) goto Label_338; // 0x14b JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x14c PushV
	var_115_object = var_1_object; // 0x14d MovT
	func_979(var_114_bool, var_115_object); // 0x14e NEW_2
	if(var_114_bool == 0) goto Label_338; // 0x150 JumpB
	var_107_bool = 1; // 0x151 MovB
	
Label_338:
	if(var_107_bool == 0) goto Label_359; // 0x152 JumpB
	var_152_string = ""; // 0x153 PushV
	var_152_string = "Neutral"; // 0x154 MovS
	func_205(var_6_int, var_152_string); // 0x155 NEW_2
	var_153_int = 513279; // 0x157 PushI
	SetMessage(var_153_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_154_int = 513280; // 0x15c PushI
	var_155_int = 14511; // 0x15d PushI
	var_156_int = 14510; // 0x15e PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x15f TObjFunc
	var_157_int = 513284; // 0x161 PushI
	var_158_int = 14515; // 0x162 PushI
	var_159_int = 14514; // 0x163 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x164 TObjFunc
	return 0; // 0x166 Return
	
Label_359:
	var_160_bool = 0; var_161_object = Obj(); // 0x167 PushV
	var_161_object = var_1_object; // 0x168 MovT
	func_955(var_161_object); // 0x169 NEW_2
	if(var_160_bool == 0) goto Label_389; // 0x16b JumpB
	var_162_string = ""; // 0x16c PushV
	var_162_string = "Neutral"; // 0x16d MovS
	func_205(var_6_int, var_162_string); // 0x16e NEW_2
	var_163_int = 513289; // 0x170 PushI
	SetMessage(var_163_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_164_int = 513290; // 0x175 PushI
	var_165_int = 14522; // 0x176 PushI
	var_166_int = 14521; // 0x177 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x178 TObjFunc
	var_167_int = 513304; // 0x17a PushI
	var_168_int = 14538; // 0x17b PushI
	var_169_int = 14535; // 0x17c PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x17d TObjFunc
	var_170_int = 513305; // 0x17f PushI
	var_171_int = -1; // 0x180 PushI
	var_172_int = 14536; // 0x181 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_173_int = 14522; // 0x185 PushI
	var_174_bool = var_5_int == var_173_int; // 0x186 Eq
	if(var_174_bool == 0) goto Label_417; // 0x187 JumpB
	var_175_string = ""; // 0x188 PushV
	var_175_string = "Neutral"; // 0x189 MovS
	func_205(var_6_int, var_175_string); // 0x18a NEW_2
	var_176_int = 513291; // 0x18c PushI
	SetMessage(var_176_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_177_int = 513292; // 0x191 PushI
	var_178_int = 14524; // 0x192 PushI
	var_179_int = 14523; // 0x193 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x194 TObjFunc
	var_180_int = 513296; // 0x196 PushI
	var_181_int = 14528; // 0x197 PushI
	var_182_int = 14527; // 0x198 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x199 TObjFunc
	var_183_int = 513300; // 0x19b PushI
	var_184_int = 14532; // 0x19c PushI
	var_185_int = 14531; // 0x19d PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x19e TObjFunc
	return 0; // 0x1a0 Return
	
Label_417:
	var_186_int = 14532; // 0x1a1 PushI
	var_187_bool = var_5_int == var_186_int; // 0x1a2 Eq
	if(var_187_bool == 0) goto Label_440; // 0x1a3 JumpB
	var_188_string = ""; // 0x1a4 PushV
	var_188_string = "Neutral"; // 0x1a5 MovS
	func_205(var_6_int, var_188_string); // 0x1a6 NEW_2
	var_189_int = 513301; // 0x1a8 PushI
	SetMessage(var_189_int); // 0x1a9 TObjFunc
	ClearReplies(); // 0x1ab TObjFunc
	var_190_int = 513302; // 0x1ad PushI
	var_191_int = 14540; // 0x1ae PushI
	var_192_int = 14533; // 0x1af PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1b0 TObjFunc
	var_193_int = 513303; // 0x1b2 PushI
	var_194_int = 14538; // 0x1b3 PushI
	var_195_int = 14534; // 0x1b4 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_196_int = 14540; // 0x1b8 PushI
	var_197_bool = var_5_int == var_196_int; // 0x1b9 Eq
	if(var_197_bool == 0) goto Label_458; // 0x1ba JumpB
	var_198_string = ""; // 0x1bb PushV
	var_198_string = "Neutral"; // 0x1bc MovS
	func_205(var_6_int, var_198_string); // 0x1bd NEW_2
	var_199_int = 513309; // 0x1bf PushI
	SetMessage(var_199_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_200_int = 513310; // 0x1c4 PushI
	var_201_int = 14524; // 0x1c5 PushI
	var_202_int = 14541; // 0x1c6 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_203_int = 14528; // 0x1ca PushI
	var_204_bool = var_5_int == var_203_int; // 0x1cb Eq
	if(var_204_bool == 0) goto Label_481; // 0x1cc JumpB
	var_205_string = ""; // 0x1cd PushV
	var_205_string = "Neutral"; // 0x1ce MovS
	func_205(var_6_int, var_205_string); // 0x1cf NEW_2
	var_206_int = 513297; // 0x1d1 PushI
	SetMessage(var_206_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_207_int = 513298; // 0x1d6 PushI
	var_208_int = -1; // 0x1d7 PushI
	var_209_int = 14529; // 0x1d8 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1d9 TObjFunc
	var_210_int = 513299; // 0x1db PushI
	var_211_int = 14538; // 0x1dc PushI
	var_212_int = 14530; // 0x1dd PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_213_int = 14524; // 0x1e1 PushI
	var_214_bool = var_5_int == var_213_int; // 0x1e2 Eq
	if(var_214_bool == 0) goto Label_504; // 0x1e3 JumpB
	var_215_string = ""; // 0x1e4 PushV
	var_215_string = "Neutral"; // 0x1e5 MovS
	func_205(var_6_int, var_215_string); // 0x1e6 NEW_2
	var_216_int = 513293; // 0x1e8 PushI
	SetMessage(var_216_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_217_int = 513295; // 0x1ed PushI
	var_218_int = -1; // 0x1ee PushI
	var_219_int = 14526; // 0x1ef PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1f0 TObjFunc
	var_220_int = 513306; // 0x1f2 PushI
	var_221_int = 14538; // 0x1f3 PushI
	var_222_int = 14537; // 0x1f4 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_223_int = 14538; // 0x1f8 PushI
	var_224_bool = var_5_int == var_223_int; // 0x1f9 Eq
	if(var_224_bool == 0) goto Label_522; // 0x1fa JumpB
	var_225_string = ""; // 0x1fb PushV
	var_225_string = "Neutral"; // 0x1fc MovS
	func_205(var_6_int, var_225_string); // 0x1fd NEW_2
	var_226_int = 513307; // 0x1ff PushI
	SetMessage(var_226_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_227_int = 513308; // 0x204 PushI
	var_228_int = -1; // 0x205 PushI
	var_229_int = 14539; // 0x206 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x207 TObjFunc
	return 0; // 0x209 Return
	
Label_522:
	var_230_int = 14515; // 0x20a PushI
	var_231_bool = var_5_int == var_230_int; // 0x20b Eq
	if(var_231_bool == 0) goto Label_545; // 0x20c JumpB
	var_232_string = ""; // 0x20d PushV
	var_232_string = "Neutral"; // 0x20e MovS
	func_205(var_6_int, var_232_string); // 0x20f NEW_2
	var_233_int = 513285; // 0x211 PushI
	SetMessage(var_233_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_234_int = 513286; // 0x216 PushI
	var_235_int = -1; // 0x217 PushI
	var_236_int = 14516; // 0x218 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x219 TObjFunc
	var_237_int = 513287; // 0x21b PushI
	var_238_int = -1; // 0x21c PushI
	var_239_int = 14517; // 0x21d PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_240_int = 14511; // 0x221 PushI
	var_241_bool = var_5_int == var_240_int; // 0x222 Eq
	if(var_241_bool == 0) goto Label_568; // 0x223 JumpB
	var_242_string = ""; // 0x224 PushV
	var_242_string = "Neutral"; // 0x225 MovS
	func_205(var_6_int, var_242_string); // 0x226 NEW_2
	var_243_int = 513281; // 0x228 PushI
	SetMessage(var_243_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_244_int = 513282; // 0x22d PushI
	var_245_int = -1; // 0x22e PushI
	var_246_int = 14512; // 0x22f PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x230 TObjFunc
	var_247_int = 513283; // 0x232 PushI
	var_248_int = -1; // 0x233 PushI
	var_249_int = 14513; // 0x234 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_250_int = 14492; // 0x238 PushI
	var_251_bool = var_5_int == var_250_int; // 0x239 Eq
	if(var_251_bool == 0) goto Label_596; // 0x23a JumpB
	var_252_string = ""; // 0x23b PushV
	var_252_string = "Neutral"; // 0x23c MovS
	func_205(var_6_int, var_252_string); // 0x23d NEW_2
	var_253_int = 513263; // 0x23f PushI
	SetMessage(var_253_int); // 0x240 TObjFunc
	ClearReplies(); // 0x242 TObjFunc
	var_254_int = 513264; // 0x244 PushI
	var_255_int = 14494; // 0x245 PushI
	var_256_int = 14493; // 0x246 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x247 TObjFunc
	var_257_int = 513269; // 0x249 PushI
	var_258_int = 14506; // 0x24a PushI
	var_259_int = 14498; // 0x24b PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x24c TObjFunc
	var_260_int = 513274; // 0x24e PushI
	var_261_int = 14504; // 0x24f PushI
	var_262_int = 14503; // 0x250 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_263_int = 14504; // 0x254 PushI
	var_264_bool = var_5_int == var_263_int; // 0x255 Eq
	if(var_264_bool == 0) goto Label_614; // 0x256 JumpB
	var_265_string = ""; // 0x257 PushV
	var_265_string = "Neutral"; // 0x258 MovS
	func_205(var_6_int, var_265_string); // 0x259 NEW_2
	var_266_int = 513275; // 0x25b PushI
	SetMessage(var_266_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_267_int = 513276; // 0x260 PushI
	var_268_int = 14499; // 0x261 PushI
	var_269_int = 14505; // 0x262 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x263 TObjFunc
	return 0; // 0x265 Return
	
Label_614:
	var_270_int = 14506; // 0x266 PushI
	var_271_bool = var_5_int == var_270_int; // 0x267 Eq
	if(var_271_bool == 0) goto Label_632; // 0x268 JumpB
	var_272_string = ""; // 0x269 PushV
	var_272_string = "Neutral"; // 0x26a MovS
	func_205(var_6_int, var_272_string); // 0x26b NEW_2
	var_273_int = 513277; // 0x26d PushI
	SetMessage(var_273_int); // 0x26e TObjFunc
	ClearReplies(); // 0x270 TObjFunc
	var_274_int = 513278; // 0x272 PushI
	var_275_int = 14499; // 0x273 PushI
	var_276_int = 14507; // 0x274 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x275 TObjFunc
	return 0; // 0x277 Return
	
Label_632:
	var_277_int = 14499; // 0x278 PushI
	var_278_bool = var_5_int == var_277_int; // 0x279 Eq
	if(var_278_bool == 0) goto Label_650; // 0x27a JumpB
	var_279_string = ""; // 0x27b PushV
	var_279_string = "Neutral"; // 0x27c MovS
	func_205(var_6_int, var_279_string); // 0x27d NEW_2
	var_280_int = 513270; // 0x27f PushI
	SetMessage(var_280_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_281_int = 513271; // 0x284 PushI
	var_282_int = 14501; // 0x285 PushI
	var_283_int = 14500; // 0x286 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x287 TObjFunc
	return 0; // 0x289 Return
	
Label_650:
	var_284_int = 14501; // 0x28a PushI
	var_285_bool = var_5_int == var_284_int; // 0x28b Eq
	if(var_285_bool == 0) goto Label_668; // 0x28c JumpB
	var_286_string = ""; // 0x28d PushV
	var_286_string = "Neutral"; // 0x28e MovS
	func_205(var_6_int, var_286_string); // 0x28f NEW_2
	var_287_int = 513272; // 0x291 PushI
	SetMessage(var_287_int); // 0x292 TObjFunc
	ClearReplies(); // 0x294 TObjFunc
	var_288_int = 513273; // 0x296 PushI
	var_289_int = -1; // 0x297 PushI
	var_290_int = 14502; // 0x298 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x299 TObjFunc
	return 0; // 0x29b Return
	
Label_668:
	var_291_int = 14494; // 0x29c PushI
	var_292_bool = var_5_int == var_291_int; // 0x29d Eq
	if(var_292_bool == 0) goto Label_686; // 0x29e JumpB
	var_293_string = ""; // 0x29f PushV
	var_293_string = "Neutral"; // 0x2a0 MovS
	func_205(var_6_int, var_293_string); // 0x2a1 NEW_2
	var_294_int = 513265; // 0x2a3 PushI
	SetMessage(var_294_int); // 0x2a4 TObjFunc
	ClearReplies(); // 0x2a6 TObjFunc
	var_295_int = 513266; // 0x2a8 PushI
	var_296_int = 14496; // 0x2a9 PushI
	var_297_int = 14495; // 0x2aa PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x2ab TObjFunc
	return 0; // 0x2ad Return
	
Label_686:
	var_298_int = 14496; // 0x2ae PushI
	var_299_bool = var_5_int == var_298_int; // 0x2af Eq
	if(var_299_bool == 0) goto Label_704; // 0x2b0 JumpB
	var_300_string = ""; // 0x2b1 PushV
	var_300_string = "Neutral"; // 0x2b2 MovS
	func_205(var_6_int, var_300_string); // 0x2b3 NEW_2
	var_301_int = 513267; // 0x2b5 PushI
	SetMessage(var_301_int); // 0x2b6 TObjFunc
	ClearReplies(); // 0x2b8 TObjFunc
	var_302_int = 513268; // 0x2ba PushI
	var_303_int = -1; // 0x2bb PushI
	var_304_int = 14497; // 0x2bc PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_3_string = 1; // 0x2c0 TMovB
	var_305_bool = 0; // 0x2c1 PushV
	func_1074(var_305_bool); // 0x2c2 NEW_2
	if(var_305_bool == 0) goto Label_712; // 0x2c4 JumpB
	lshStopAnimation(); // 0x2c5 Func
	goto Label_714; // 0x2c7 Jump
	
Label_714:
	return 0; // 0x2ca Return
	
Label_712:
	StopAnimation(); // 0x2c8 Func
	
Label_716:
	return 0; // 0x2cc Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x2d2 PushV
	var_7_object = var_5_object; // 0x2d3 Mov
	TaskCall(0); // 0x2d4 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x2d5 NEW_2
	TaskReturn(); // 0x2d6 TaskReturn
	return 0; // 0x2d8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_717:
	Hold(); // 0x2cd Func
	goto Label_717; // 0x2cf Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	var_19_float = 130.0; // 0x4 MovF
	func_729(var_18_object, var_19_float); // 0x5 NEW_2
	var_64_bool = var_17_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1068(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1066(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1070(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1072(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1049(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_77_bool = var_14_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_7_object; // 0x30 Mov
	var_79_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_205_bool = var_16_bool == 0; // 0x38 Not
	if(var_205_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_206_object = Obj(); // 0x3f PushV
	var_206_object = var_7_object; // 0x40 Mov
	func_798(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_832(var_104_string, var_105_bool)
{
	var_108_bool = 0; var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_float = 0; var_113_float = 0; // 0x340 PushV
	lshHasAnimation(var_111_bool, var_104_string); // 0x341 Func
	var_114_bool = var_111_bool; // 0x343 Push
	if(var_114_bool == 0) goto Label_842; // 0x344 JumpB
	lshGetAnimTimes(var_104_string, var_112_float, var_113_float); // 0x345 Func
	lshPlayAnimation(var_112_float, var_113_float, var_105_bool); // 0x347 Func
	goto Label_846; // 0x349 Jump
	
Label_846:
	return 6; // 0x34e Return
	
Label_842:
	var_115_string = "Can't find lsh animation : "; // 0x34a PushS
	var_116_int = var_115_string + var_104_string; // 0x34b Add
	Trace(var_116_int); // 0x34c Func
}


func_900(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x384 PushV
	CreateInvItem(var_18_object); // 0x385 Func
	SetItemName(var_15_string); // 0x387 ObjFunc
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x389 PushV
	var_19_object = var_14_object; // 0x38a Mov
	var_20_object = var_18_object; // 0x38b Mov
	var_21_int = var_16_int; // 0x38c Mov
	func_881(var_20_object, var_21_int); // 0x38d NEW_2
	return 2; // 0x38f Return
}


func_967(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x3c8 PushV
	var_97_string = "d7q01"; // 0x3c9 MovS
	func_864(var_96_int, var_97_string); // 0x3ca NEW_2
	var_98_int = 1; // 0x3cc PushI
	var_99_bool = var_96_int == var_98_int; // 0x3cd Eq
	if(var_99_bool == 0) goto Label_977; // 0x3ce JumpB
	var_94_bool = 1; // 0x3cf MovB
	return 0; // 0x3d0 Return
	
Label_977:
	var_94_bool = 0; // 0x3d1 MovB
	return 0; // 0x3d2 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_175; // 0x4f JumpB
	var_85_bool = 0; // 0x50 PushV
	var_85_bool = 0; // 0x51 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x52 PushV
	var_87_object = var_1_object; // 0x53 MovT
	func_989(var_87_object); // 0x54 NEW_2
	if(var_86_bool == 0) goto Label_93; // 0x56 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x57 PushV
	var_95_object = var_1_object; // 0x58 MovT
	func_967(var_95_object); // 0x59 NEW_2
	if(var_94_bool == 0) goto Label_93; // 0x5b JumpB
	var_85_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_85_bool == 0) goto Label_109; // 0x5d JumpB
	var_100_string = ""; // 0x5e PushV
	var_100_string = "Neutral"; // 0x5f MovS
	func_205(var_79_object, var_100_string); // 0x60 NEW_2
	var_117_int = 513261; // 0x62 PushI
	SetMessage(var_117_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_118_int = 513262; // 0x67 PushI
	var_119_int = 14492; // 0x68 PushI
	var_120_int = 14491; // 0x69 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6a TObjFunc
	goto Label_175; // 0x6c Jump
	
Label_175:
	var_121_bool = 0; // 0xaf PushV
	func_1074(var_121_bool); // 0xb0 NEW_2
	if(var_121_bool == 0) goto Label_190; // 0xb2 JumpB
	
Label_179:
	lshWaitForAnimEnd(); // 0xb3 Func
	var_122_string = var_3_string; // 0xb5 PushT
	if(var_122_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_189:
	goto Label_204; // 0xbd Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_184:
	var_123_string = ""; // 0xb8 PushV
	var_123_string = var_2_object; // 0xb9 MovT
	func_816(var_123_string); // 0xba NEW_2
	goto Label_179; // 0xbc Jump
	
Label_190:
	var_134_string = "all"; // 0xbe PushS
	var_135_string = "idle"; // 0xbf PushS
	PlayAnimation(var_134_string, var_135_string); // 0xc0 Func
	
Label_194:
	WaitForAnimEnd(); // 0xc2 Func
	var_136_string = var_3_string; // 0xc4 PushT
	if(var_136_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_199:
	var_137_string = "all"; // 0xc7 PushS
	var_138_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_137_string, var_138_string); // 0xc9 Func
	goto Label_194; // 0xcb Jump
	
Label_109:
	var_139_bool = 0; // 0x6d PushV
	var_139_bool = 0; // 0x6e MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x6f PushV
	var_141_object = var_1_object; // 0x70 MovT
	func_955(var_141_object); // 0x71 NEW_2
	if(var_140_bool == 0) goto Label_122; // 0x73 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x74 PushV
	var_147_object = var_1_object; // 0x75 MovT
	func_979(var_146_bool, var_147_object); // 0x76 NEW_2
	if(var_146_bool == 0) goto Label_122; // 0x78 JumpB
	var_139_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_139_bool == 0) goto Label_143; // 0x7a JumpB
	var_184_string = ""; // 0x7b PushV
	var_184_string = "Neutral"; // 0x7c MovS
	func_205(var_79_object, var_184_string); // 0x7d NEW_2
	var_185_int = 513279; // 0x7f PushI
	SetMessage(var_185_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_186_int = 513280; // 0x84 PushI
	var_187_int = 14511; // 0x85 PushI
	var_188_int = 14510; // 0x86 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x87 TObjFunc
	var_189_int = 513284; // 0x89 PushI
	var_190_int = 14515; // 0x8a PushI
	var_191_int = 14514; // 0x8b PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x8c TObjFunc
	goto Label_175; // 0x8e Jump
	
Label_143:
	var_192_bool = 0; var_193_object = Obj(); // 0x8f PushV
	var_193_object = var_1_object; // 0x90 MovT
	func_955(var_193_object); // 0x91 NEW_2
	if(var_192_bool == 0) goto Label_173; // 0x93 JumpB
	var_194_string = ""; // 0x94 PushV
	var_194_string = "Neutral"; // 0x95 MovS
	func_205(var_79_object, var_194_string); // 0x96 NEW_2
	var_195_int = 513289; // 0x98 PushI
	SetMessage(var_195_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_196_int = 513290; // 0x9d PushI
	var_197_int = 14522; // 0x9e PushI
	var_198_int = 14521; // 0x9f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xa0 TObjFunc
	var_199_int = 513304; // 0xa2 PushI
	var_200_int = 14538; // 0xa3 PushI
	var_201_int = 14535; // 0xa4 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xa5 TObjFunc
	var_202_int = 513305; // 0xa7 PushI
	var_203_int = -1; // 0xa8 PushI
	var_204_int = 14536; // 0xa9 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0xaa TObjFunc
	goto Label_175; // 0xac Jump
	
Label_173:
	return 0; // 0xad Return
}


func_205(var_2_object, var_100_string)
{
	var_101_bool = 0; // 0xce PushV
	func_1074(var_101_bool); // 0xcf NEW_2
	var_102_bool = var_101_bool == 0; // 0xd1 Not
	if(var_102_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_103_bool = var_100_string == var_2_object; // 0xd4 Eq
	if(var_103_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_104_string = ""; var_105_bool = 0; // 0xd7 PushV
	var_104_string = var_100_string; // 0xd8 Mov
	var_106_string = ""; // 0xd9 PushS
	var_107_bool = var_100_string == var_106_string; // 0xda Eq
	if(var_107_bool == 0) goto Label_222; // 0xdb JumpB
	var_105_bool = 0; // 0xdc MovB
	goto Label_223; // 0xdd Jump
	
Label_223:
	func_832(var_104_string, var_105_bool); // 0xdf NEW_2
	var_2_object = var_100_string; // 0xe1 TMov
	return 0; // 0xe2 Return
	
Label_222:
	var_105_bool = 1; // 0xde MovB
}


func_847()
{
	var_8_bool = 0; // 0x34f PushV
	func_1074(var_8_bool); // 0x350 NEW_2
	if(var_8_bool == 0) goto Label_853; // 0x352 JumpB
	lshStopSpeech(); // 0x353 Func
	
Label_853:
	return 0; // 0x355 Return
}


func_913(var_55_bool, var_56_string, var_57_string)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x391 PushV
	FindActor(var_59_object, var_56_string); // 0x392 Func
	var_60_bool = var_59_object == 0; // 0x394 NullEq
	if(var_60_bool == 0) goto Label_920; // 0x395 JumpB
	var_55_bool = 0; // 0x396 MovB
	return 2; // 0x397 Return
	
Label_920:
	Trigger(var_59_object, var_57_string); // 0x398 Func
	var_55_bool = 1; // 0x39a MovB
	return 2; // 0x39b Return
}


func_979(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_object = Obj(); // 0x3d4 PushV
	var_149_object = var_147_object; // 0x3d5 Mov
	func_1001(var_149_object); // 0x3d6 NEW_2
	if(var_148_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_146_bool = 1; // 0x3d9 MovB
	return 0; // 0x3da Return
	
Label_987:
	var_146_bool = 0; // 0x3db MovB
	return 0; // 0x3dc Return
}


func_854(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x356 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x357 Or
	var_48_float = sqrt(var_49_int); // 0x358 Sqrt2
	var_50_float = 0.0; // 0x359 PushF
	var_51_bool = var_48_float < var_50_float; // 0x35a LT
	if(var_51_bool == 0) goto Label_862; // 0x35b JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x35c MovV
	return 2; // 0x35d Return
	
Label_862:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x35e Div2
	return 2; // 0x35f Return
}


func_1049(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x419 PushV
	var_72_string = "branch"; // 0x41a PushS
	GetVariable(var_72_string, var_71_int); // 0x41b Func
	var_73_int = 0; // 0x41d PushI
	var_74_bool = var_71_int == var_73_int; // 0x41e Eq
	if(var_74_bool == 0) goto Label_1059; // 0x41f JumpB
	var_69_int = 1; // 0x420 MovI
	return 2; // 0x421 Return
	
Label_1059:
	var_75_int = 1; // 0x423 PushI
	var_76_bool = var_71_int == var_75_int; // 0x424 Eq
	if(var_76_bool == 0) goto Label_1064; // 0x425 JumpB
	var_69_int = 2; // 0x426 MovI
	return 2; // 0x427 Return
	
Label_1064:
	var_69_int = 3; // 0x428 MovI
	return 2; // 0x429 Return
}


func_729(var_17_bool, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; // 0x2d9 PushV
	GetPosition(var_30_cvector); // 0x2da ObjFunc
	GetEyesHeight(var_29_float); // 0x2dc ObjFunc
	var_38_float = GetByIndex(var_30_cvector, 1); // 0x2de PushE
	var_38_float = var_38_float + var_29_float; // 0x2df Add2
	SetByIndex(var_30_cvector, 1) = var_38_float; // 0x2e0 PopE
	GetPosition(var_31_cvector); // 0x2e1 Func
	GetEyesHeight(var_29_float); // 0x2e3 Func
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2e5 PushE
	var_39_float = var_39_float + var_29_float; // 0x2e6 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2e7 PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x2e8 Sub2
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2e9 PushE
	var_40_float = 0; // 0x2ea MovI
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2eb PopE
	var_41_int = var_32_cvector | var_32_cvector; // 0x2ec Or
	var_42_float = sqrt(var_41_int); // 0x2ed Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x2ee Div2
	var_33_cvector = -var_32_cvector; // 0x2ef Neg2
	var_43_float = var_32_cvector * var_19_float; // 0x2f0 Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x2f1 PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x2f2 PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x2f3 Xor2
	func_854(var_44_cvector, var_45_cvector); // 0x2f4 NEW_2
	var_52_int = 25; // 0x2f6 PushI
	var_53_float = var_44_cvector * var_52_int; // 0x2f7 Mult
	var_54_int = var_43_float + var_53_float; // 0x2f8 Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x2f9 PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x2fa Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x2fb Add2
	IsOverrideActive(var_36_bool); // 0x2fc Func
	var_56_bool = var_36_bool; // 0x2fe Push
	if(var_56_bool == 0) goto Label_770; // 0x2ff JumpB
	var_17_bool = 0; // 0x300 MovB
	return 18; // 0x301 Return
	
Label_770:
	StopWorld(); // 0x302 Func
	var_57_bool = 1; // 0x304 PushB
	CameraTransit(var_35_cvector, var_33_cvector, var_57_bool); // 0x305 Func
	var_58_float = GetByIndex(var_34_cvector, 0); // 0x307 PushE
	var_59_float = GetByIndex(var_34_cvector, 2); // 0x308 PushE
	Rotate(var_58_float, var_59_float); // 0x309 Func
	var_60_bool = 0; // 0x30b PushV
	func_1074(var_60_bool); // 0x30c NEW_2
	if(var_60_bool == 0) goto Label_784; // 0x30e JumpB
	goto Label_792; // 0x30f Jump
	
Label_792:
	CameraWaitForPlayFinish(); // 0x318 Func
	ResumeWorld(); // 0x31a Func
	var_17_bool = 1; // 0x31c MovB
	return 18; // 0x31d Return
	
Label_784:
	var_61_string = "head"; // 0x310 PushS
	HasAnimationTrack(var_37_bool, var_61_string); // 0x311 Func
	var_62_bool = var_37_bool; // 0x313 Push
	if(var_62_bool == 0) goto Label_792; // 0x314 JumpB
	var_63_string = "head"; // 0x315 PushS
	LookAsyncCamera(var_63_string); // 0x316 Func
}


func_925()
{
	var_41_string = "playsound"; // 0x39e PushS
	var_42_string = "giveitem"; // 0x39f PushS
	TriggerWorld(var_41_string, var_42_string); // 0x3a0 Func
	return 0; // 0x3a2 Return
}


func_798()
{
	var_207_bool = 0; var_208_bool = 0; // 0x31e PushV
	var_209_bool = 1; // 0x31f PushB
	CameraSwitchToNormal(var_209_bool); // 0x320 Func
	var_210_bool = 0; // 0x322 PushV
	func_1074(var_210_bool); // 0x323 NEW_2
	if(var_210_bool == 0) goto Label_807; // 0x325 JumpB
	goto Label_815; // 0x326 Jump
	
Label_815:
	return 2; // 0x32f Return
	
Label_807:
	var_211_string = "head"; // 0x327 PushS
	HasAnimationTrack(var_208_bool, var_211_string); // 0x328 Func
	var_212_bool = var_208_bool; // 0x32a Push
	if(var_212_bool == 0) goto Label_815; // 0x32b JumpB
	var_213_string = "head"; // 0x32c PushS
	UnlookAsync(var_213_string); // 0x32d Func
}


func_989(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x3de PushV
	var_89_string = "ood7DBirdmask1"; // 0x3df MovS
	func_864(var_88_int, var_89_string); // 0x3e0 NEW_2
	var_92_int = 0; // 0x3e2 PushI
	var_93_bool = var_88_int == var_92_int; // 0x3e3 Eq
	if(var_93_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_86_bool = 1; // 0x3e5 MovB
	return 0; // 0x3e6 Return
	
Label_999:
	var_86_bool = 0; // 0x3e7 MovB
	return 0; // 0x3e8 Return
}


func_864(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x360 PushV
	GetVariable(var_89_string, var_91_int); // 0x361 Func
	var_88_int = var_91_int; // 0x363 Mov
	return 2; // 0x364 Return
}


func_931(var_11_object)
{
	var_13_string = "dreport is given"; // 0x3a4 PushS
	Trace(var_13_string); // 0x3a5 Func
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0; // 0x3a7 PushV
	var_14_object = var_11_object; // 0x3a8 Mov
	var_15_string = "d7q01_dreport"; // 0x3a9 MovS
	var_16_int = 1; // 0x3aa MovI
	func_900(var_14_object, var_15_string, var_16_int); // 0x3ab NEW_2
	return 0; // 0x3ad Return
}


func_869(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x365 PushV
	CreateIntVector(var_33_object); // 0x366 Func
	add(var_30_int); // 0x368 ObjFunc
	add(var_31_int); // 0x36a ObjFunc
	var_34_int = 3; // 0x36c PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x36d Func
	return 2; // 0x36f Return
}


func_1001(var_148_bool)
{
	var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_bool = 0; var_154_bool = 0; var_155_int = 0; var_156_object = Obj(); var_157_int = 0; var_158_bool = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_bool = 0; var_164_bool = 0; var_165_int = 0; var_166_object = Obj(); var_167_int = 0; var_168_bool = 0; var_169_bool = 0; // 0x3e9 PushV
	var_170_int = 1; // 0x3ea PushI
	GetItemCount(var_160_int, var_170_int); // 0x3eb ObjFunc
	var_171_string = "bird_mask"; // 0x3ed PushS
	GetInvItemByName(var_161_int, var_171_string); // 0x3ee Func
	var_172_string = "bird_balahon"; // 0x3f0 PushS
	GetInvItemByName(var_162_int, var_172_string); // 0x3f1 Func
	var_163_bool = 0; // 0x3f3 MovB
	var_164_bool = 0; // 0x3f4 MovB
	var_165_int = 0; // 0x3f5 MovI
	
Label_1014:
	var_173_bool = var_165_int < var_160_int; // 0x3f6 LT
	if(var_173_bool == 0) goto Label_1042; // 0x3f7 JumpB
	var_174_int = 1; // 0x3f8 PushI
	GetItem(var_166_object, var_165_int, var_174_int); // 0x3f9 ObjFunc
	GetItemID(var_167_int); // 0x3fb ObjFunc
	var_175_bool = var_167_int == var_161_int; // 0x3fd Eq
	if(var_175_bool == 0) goto Label_1030; // 0x3fe JumpB
	var_176_int = 1; // 0x3ff PushI
	IsItemSelected(var_168_bool, var_165_int, var_176_int); // 0x400 ObjFunc
	var_177_bool = var_168_bool; // 0x402 Push
	if(var_177_bool == 0) goto Label_1029; // 0x403 JumpB
	var_163_bool = 1; // 0x404 MovB
	
Label_1029:
	goto Label_1038; // 0x405 Jump
	
Label_1038:
	var_166_object = 0; // 0x40e SetNull
	var_178_int = 1; // 0x40f PushI
	var_165_int = var_165_int + var_178_int; // 0x410 Add2
	goto Label_1014; // 0x411 Jump
	
Label_1030:
	var_179_bool = var_167_int == var_162_int; // 0x406 Eq
	if(var_179_bool == 0) goto Label_1038; // 0x407 JumpB
	var_180_int = 1; // 0x408 PushI
	IsItemSelected(var_169_bool, var_165_int, var_180_int); // 0x409 ObjFunc
	var_181_bool = var_169_bool; // 0x40b Push
	if(var_181_bool == 0) goto Label_1038; // 0x40c JumpB
	var_164_bool = 1; // 0x40d MovB
	
Label_1042:
	var_148_bool = 0; // 0x412 MovB
	var_182_bool = var_163_bool; // 0x413 Push
	if(var_182_bool == 0) goto Label_1048; // 0x414 JumpB
	var_183_bool = var_164_bool; // 0x415 Push
	if(var_183_bool == 0) goto Label_1048; // 0x416 JumpB
	var_148_bool = 1; // 0x417 MovB
	
Label_1048:
	return 20; // 0x418 Return
}


func_1066(var_66_int)
{
	var_66_int = 515571; // 0x42a MovI
	return 0; // 0x42b Return
}


func_1068(var_65_int)
{
	var_65_int = 504029; // 0x42c MovI
	return 0; // 0x42d Return
}


func_1070(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png"; // 0x42e MovS
	return 0; // 0x42f Return
}


func_942()
{
	var_37_string = "ood7DBirdmask1"; // 0x3af PushS
	var_38_int = 1; // 0x3b0 PushI
	SetVariable(var_37_string, var_38_int); // 0x3b1 Func
	return 0; // 0x3b3 Return
}


func_1072(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png"; // 0x430 MovS
	return 0; // 0x431 Return
}


func_816(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0; // 0x330 PushV
	lshHasAnimation(var_127_bool, var_123_string); // 0x331 Func
	var_130_bool = var_127_bool; // 0x333 Push
	if(var_130_bool == 0) goto Label_827; // 0x334 JumpB
	lshGetAnimTimes(var_123_string, var_128_float, var_129_float); // 0x335 Func
	var_131_bool = 0; // 0x337 PushB
	lshPlayAnimation(var_128_float, var_129_float, var_131_bool); // 0x338 Func
	goto Label_831; // 0x33a Jump
	
Label_831:
	return 6; // 0x33f Return
	
Label_827:
	var_132_string = "Can't find lsh animation : "; // 0x33b PushS
	var_133_int = var_132_string + var_123_string; // 0x33c Add
	Trace(var_133_int); // 0x33d Func
}


func_1074(var_60_bool)
{
	var_60_bool = 0; // 0x432 MovB
	return 0; // 0x433 Return
}


func_881(var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x371 PushV
	GetItemID(var_25_int); // 0x372 ObjFunc
	var_28_string = "Category"; // 0x374 PushS
	GetInvItemProperty(var_26_int, var_25_int, var_28_string); // 0x375 Func
	AddItem(var_27_bool, var_20_object, var_26_int, var_21_int); // 0x377 ObjFunc
	var_29_bool = var_27_bool == 0; // 0x379 Not
	if(var_29_bool == 0) goto Label_894; // 0x37a JumpB
	DropItems(var_20_object, var_21_int); // 0x37b ObjFunc
	goto Label_899; // 0x37d Jump
	
Label_899:
	return 6; // 0x383 Return
	
Label_894:
	var_30_int = 0; var_31_int = 0; // 0x37e PushV
	var_30_int = var_25_int; // 0x37f Mov
	var_31_int = var_21_int; // 0x380 Mov
	func_869(var_30_int, var_31_int); // 0x381 NEW_2
}


func_948()
{
	var_55_bool = 0; var_56_string = ""; var_57_string = ""; // 0x3b5 PushV
	var_56_string = "quest_d7_01"; // 0x3b6 MovS
	var_57_string = "kill_player"; // 0x3b7 MovS
	func_913(var_55_bool, var_56_string, var_57_string); // 0x3b8 NEW_2
	return 0; // 0x3ba Return
}


func_955(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x3bc PushV
	var_143_string = "d7q01"; // 0x3bd MovS
	func_864(var_142_int, var_143_string); // 0x3be NEW_2
	var_144_int = 2; // 0x3c0 PushI
	var_145_bool = var_142_int == var_144_int; // 0x3c1 Eq
	if(var_145_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_140_bool = 1; // 0x3c3 MovB
	return 0; // 0x3c4 Return
	
Label_965:
	var_140_bool = 0; // 0x3c5 MovB
	return 0; // 0x3c6 Return
}


