task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe4 PushI
	if(var_7_int == 0) goto Label_716; // 0xe5 JumpB
	func_845(); // 0xe7 NEW_2
	var_9_int = 14497; // 0xe9 PushI
	var_10_bool = var_6_int == var_9_int; // 0xea Eq
	if(var_10_bool == 0) goto Label_251; // 0xeb JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xec PushV
	var_11_object = var_1_object; // 0xed MovT
	var_12_object = var_0_object; // 0xee MovT
	func_929(var_12_object); // 0xef NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0xf1 PushV
	var_35_object = var_1_object; // 0xf2 MovT
	var_36_object = var_0_object; // 0xf3 MovT
	func_940(); // 0xf4 NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xf6 PushV
	var_39_object = var_1_object; // 0xf7 MovT
	var_40_object = var_0_object; // 0xf8 MovT
	func_923(); // 0xf9 NEW_2
	
Label_251:
	var_43_int = 14502; // 0xfb PushI
	var_44_bool = var_6_int == var_43_int; // 0xfc Eq
	if(var_44_bool == 0) goto Label_269; // 0xfd JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xfe PushV
	var_45_object = var_1_object; // 0xff MovT
	var_46_object = var_0_object; // 0x100 MovT
	func_923(); // 0x101 NEW_2
	var_47_object = Obj(); var_48_object = Obj(); // 0x103 PushV
	var_47_object = var_1_object; // 0x104 MovT
	var_48_object = var_0_object; // 0x105 MovT
	func_940(); // 0x106 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0x108 PushV
	var_49_object = var_1_object; // 0x109 MovT
	var_50_object = var_0_object; // 0x10a MovT
	func_929(var_50_object); // 0x10b NEW_2
	
Label_269:
	var_51_int = 14513; // 0x10d PushI
	var_52_bool = var_6_int == var_51_int; // 0x10e Eq
	if(var_52_bool == 0) goto Label_277; // 0x10f JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x110 PushV
	var_53_object = var_1_object; // 0x111 MovT
	var_54_object = var_0_object; // 0x112 MovT
	func_946(); // 0x113 NEW_2
	
Label_277:
	var_61_int = 14517; // 0x115 PushI
	var_62_bool = var_6_int == var_61_int; // 0x116 Eq
	if(var_62_bool == 0) goto Label_285; // 0x117 JumpB
	var_63_object = Obj(); var_64_object = Obj(); // 0x118 PushV
	var_63_object = var_1_object; // 0x119 MovT
	var_64_object = var_0_object; // 0x11a MovT
	func_946(); // 0x11b NEW_2
	
Label_285:
	var_65_int = 14539; // 0x11d PushI
	var_66_bool = var_6_int == var_65_int; // 0x11e Eq
	if(var_66_bool == 0) goto Label_293; // 0x11f JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x120 PushV
	var_67_object = var_1_object; // 0x121 MovT
	var_68_object = var_0_object; // 0x122 MovT
	func_946(); // 0x123 NEW_2
	
Label_293:
	var_69_int = 14490; // 0x125 PushI
	var_70_bool = var_5_int == var_69_int; // 0x126 Eq
	if(var_70_bool == 0) goto Label_389; // 0x127 JumpB
	var_71_bool = 0; // 0x128 PushV
	var_71_bool = 0; // 0x129 MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x12a PushV
	var_73_object = var_1_object; // 0x12b MovT
	func_987(var_73_object); // 0x12c NEW_2
	if(var_72_bool == 0) goto Label_309; // 0x12e JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x12f PushV
	var_81_object = var_1_object; // 0x130 MovT
	func_965(var_81_object); // 0x131 NEW_2
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
	func_953(var_109_object); // 0x149 NEW_2
	if(var_108_bool == 0) goto Label_338; // 0x14b JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x14c PushV
	var_115_object = var_1_object; // 0x14d MovT
	func_977(var_114_bool, var_115_object); // 0x14e NEW_2
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
	func_953(var_161_object); // 0x169 NEW_2
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
	func_1072(var_305_bool); // 0x2c2 NEW_2
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
	var_63_bool = var_17_bool == 0; // 0x7 Not
	if(var_63_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_64_int = 0; // 0xd PushV
	func_1066(var_64_int); // 0xe NEW_2
	SetNPCName(var_64_int); // 0x10 ObjFunc
	var_65_int = 0; // 0x12 PushV
	func_1064(var_65_int); // 0x13 NEW_2
	SetNPCDescription(var_65_int); // 0x15 ObjFunc
	var_66_string = ""; // 0x17 PushV
	func_1068(var_66_string); // 0x18 NEW_2
	SetPhoto(var_66_string); // 0x1a ObjFunc
	var_67_string = ""; // 0x1c PushV
	func_1070(var_67_string); // 0x1d NEW_2
	SetPhoto2(var_67_string); // 0x1f ObjFunc
	var_68_int = 0; // 0x21 PushV
	func_1047(var_68_int); // 0x22 NEW_2
	SetPlayerName(var_68_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_76_bool = var_14_bool; // 0x29 Push
	if(var_76_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x2f PushV
	var_77_object = var_7_object; // 0x30 Mov
	var_78_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_204_bool = var_16_bool == 0; // 0x38 Not
	if(var_204_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_205_object = Obj(); // 0x3f PushV
	var_205_object = var_7_object; // 0x40 Mov
	func_797(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_898(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x382 PushV
	CreateInvItem(var_18_object); // 0x383 Func
	SetItemName(var_15_string); // 0x385 ObjFunc
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x387 PushV
	var_19_object = var_14_object; // 0x388 Mov
	var_20_object = var_18_object; // 0x389 Mov
	var_21_int = var_16_int; // 0x38a Mov
	func_879(var_20_object, var_21_int); // 0x38b NEW_2
	return 2; // 0x38d Return
}


func_965(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x3c6 PushV
	var_96_string = "d7q01"; // 0x3c7 MovS
	func_862(var_95_int, var_96_string); // 0x3c8 NEW_2
	var_97_int = 1; // 0x3ca PushI
	var_98_bool = var_95_int == var_97_int; // 0x3cb Eq
	if(var_98_bool == 0) goto Label_975; // 0x3cc JumpB
	var_93_bool = 1; // 0x3cd MovB
	return 0; // 0x3ce Return
	
Label_975:
	var_93_bool = 0; // 0x3cf MovB
	return 0; // 0x3d0 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x4b TMov
	var_1_object = var_77_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_83_int = 1; // 0x4e PushI
	if(var_83_int == 0) goto Label_175; // 0x4f JumpB
	var_84_bool = 0; // 0x50 PushV
	var_84_bool = 0; // 0x51 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x52 PushV
	var_86_object = var_1_object; // 0x53 MovT
	func_987(var_86_object); // 0x54 NEW_2
	if(var_85_bool == 0) goto Label_93; // 0x56 JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x57 PushV
	var_94_object = var_1_object; // 0x58 MovT
	func_965(var_94_object); // 0x59 NEW_2
	if(var_93_bool == 0) goto Label_93; // 0x5b JumpB
	var_84_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_84_bool == 0) goto Label_109; // 0x5d JumpB
	var_99_string = ""; // 0x5e PushV
	var_99_string = "Neutral"; // 0x5f MovS
	func_205(var_78_object, var_99_string); // 0x60 NEW_2
	var_116_int = 513261; // 0x62 PushI
	SetMessage(var_116_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_117_int = 513262; // 0x67 PushI
	var_118_int = 14492; // 0x68 PushI
	var_119_int = 14491; // 0x69 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x6a TObjFunc
	goto Label_175; // 0x6c Jump
	
Label_175:
	var_120_bool = 0; // 0xaf PushV
	func_1072(var_120_bool); // 0xb0 NEW_2
	if(var_120_bool == 0) goto Label_190; // 0xb2 JumpB
	
Label_179:
	lshWaitForAnimEnd(); // 0xb3 Func
	var_121_string = var_3_string; // 0xb5 PushT
	if(var_121_string == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_189:
	goto Label_204; // 0xbd Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_184:
	var_122_string = ""; // 0xb8 PushV
	var_122_string = var_2_object; // 0xb9 MovT
	func_814(var_122_string); // 0xba NEW_2
	goto Label_179; // 0xbc Jump
	
Label_190:
	var_133_string = "all"; // 0xbe PushS
	var_134_string = "idle"; // 0xbf PushS
	PlayAnimation(var_133_string, var_134_string); // 0xc0 Func
	
Label_194:
	WaitForAnimEnd(); // 0xc2 Func
	var_135_string = var_3_string; // 0xc4 PushT
	if(var_135_string == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_199:
	var_136_string = "all"; // 0xc7 PushS
	var_137_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_136_string, var_137_string); // 0xc9 Func
	goto Label_194; // 0xcb Jump
	
Label_109:
	var_138_bool = 0; // 0x6d PushV
	var_138_bool = 0; // 0x6e MovB
	var_139_bool = 0; var_140_object = Obj(); // 0x6f PushV
	var_140_object = var_1_object; // 0x70 MovT
	func_953(var_140_object); // 0x71 NEW_2
	if(var_139_bool == 0) goto Label_122; // 0x73 JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x74 PushV
	var_146_object = var_1_object; // 0x75 MovT
	func_977(var_145_bool, var_146_object); // 0x76 NEW_2
	if(var_145_bool == 0) goto Label_122; // 0x78 JumpB
	var_138_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_138_bool == 0) goto Label_143; // 0x7a JumpB
	var_183_string = ""; // 0x7b PushV
	var_183_string = "Neutral"; // 0x7c MovS
	func_205(var_78_object, var_183_string); // 0x7d NEW_2
	var_184_int = 513279; // 0x7f PushI
	SetMessage(var_184_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_185_int = 513280; // 0x84 PushI
	var_186_int = 14511; // 0x85 PushI
	var_187_int = 14510; // 0x86 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x87 TObjFunc
	var_188_int = 513284; // 0x89 PushI
	var_189_int = 14515; // 0x8a PushI
	var_190_int = 14514; // 0x8b PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x8c TObjFunc
	goto Label_175; // 0x8e Jump
	
Label_143:
	var_191_bool = 0; var_192_object = Obj(); // 0x8f PushV
	var_192_object = var_1_object; // 0x90 MovT
	func_953(var_192_object); // 0x91 NEW_2
	if(var_191_bool == 0) goto Label_173; // 0x93 JumpB
	var_193_string = ""; // 0x94 PushV
	var_193_string = "Neutral"; // 0x95 MovS
	func_205(var_78_object, var_193_string); // 0x96 NEW_2
	var_194_int = 513289; // 0x98 PushI
	SetMessage(var_194_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_195_int = 513290; // 0x9d PushI
	var_196_int = 14522; // 0x9e PushI
	var_197_int = 14521; // 0x9f PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xa0 TObjFunc
	var_198_int = 513304; // 0xa2 PushI
	var_199_int = 14538; // 0xa3 PushI
	var_200_int = 14535; // 0xa4 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xa5 TObjFunc
	var_201_int = 513305; // 0xa7 PushI
	var_202_int = -1; // 0xa8 PushI
	var_203_int = 14536; // 0xa9 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xaa TObjFunc
	goto Label_175; // 0xac Jump
	
Label_173:
	return 0; // 0xad Return
}


func_205(var_2_object, var_99_string)
{
	var_100_bool = 0; // 0xce PushV
	func_1072(var_100_bool); // 0xcf NEW_2
	var_101_bool = var_100_bool == 0; // 0xd1 Not
	if(var_101_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_102_bool = var_99_string == var_2_object; // 0xd4 Eq
	if(var_102_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_103_string = ""; var_104_bool = 0; // 0xd7 PushV
	var_103_string = var_99_string; // 0xd8 Mov
	var_105_string = ""; // 0xd9 PushS
	var_106_bool = var_99_string == var_105_string; // 0xda Eq
	if(var_106_bool == 0) goto Label_222; // 0xdb JumpB
	var_104_bool = 0; // 0xdc MovB
	goto Label_223; // 0xdd Jump
	
Label_223:
	func_830(var_103_string, var_104_bool); // 0xdf NEW_2
	var_2_object = var_99_string; // 0xe1 TMov
	return 0; // 0xe2 Return
	
Label_222:
	var_104_bool = 1; // 0xde MovB
}


func_845()
{
	var_8_bool = 0; // 0x34d PushV
	func_1072(var_8_bool); // 0x34e NEW_2
	if(var_8_bool == 0) goto Label_851; // 0x350 JumpB
	lshStopSpeech(); // 0x351 Func
	
Label_851:
	return 0; // 0x353 Return
}


func_911(var_55_bool, var_56_string, var_57_string)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x38f PushV
	FindActor(var_59_object, var_56_string); // 0x390 Func
	var_60_bool = var_59_object == 0; // 0x392 NullEq
	if(var_60_bool == 0) goto Label_918; // 0x393 JumpB
	var_55_bool = 0; // 0x394 MovB
	return 2; // 0x395 Return
	
Label_918:
	Trigger(var_59_object, var_57_string); // 0x396 Func
	var_55_bool = 1; // 0x398 MovB
	return 2; // 0x399 Return
}


func_977(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj(); // 0x3d2 PushV
	var_148_object = var_146_object; // 0x3d3 Mov
	func_999(var_148_object); // 0x3d4 NEW_2
	if(var_147_bool == 0) goto Label_985; // 0x3d6 JumpB
	var_145_bool = 1; // 0x3d7 MovB
	return 0; // 0x3d8 Return
	
Label_985:
	var_145_bool = 0; // 0x3d9 MovB
	return 0; // 0x3da Return
}


func_852(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x354 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x355 Or
	var_48_float = sqrt(var_49_int); // 0x356 Sqrt2
	var_50_float = 0.0; // 0x357 PushF
	var_51_bool = var_48_float < var_50_float; // 0x358 LT
	if(var_51_bool == 0) goto Label_860; // 0x359 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x35a MovV
	return 2; // 0x35b Return
	
Label_860:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x35c Div2
	return 2; // 0x35d Return
}


func_1047(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x417 PushV
	var_71_string = "branch"; // 0x418 PushS
	GetVariable(var_71_string, var_70_int); // 0x419 Func
	var_72_int = 0; // 0x41b PushI
	var_73_bool = var_70_int == var_72_int; // 0x41c Eq
	if(var_73_bool == 0) goto Label_1057; // 0x41d JumpB
	var_68_int = 1; // 0x41e MovI
	return 2; // 0x41f Return
	
Label_1057:
	var_74_int = 1; // 0x421 PushI
	var_75_bool = var_70_int == var_74_int; // 0x422 Eq
	if(var_75_bool == 0) goto Label_1062; // 0x423 JumpB
	var_68_int = 2; // 0x424 MovI
	return 2; // 0x425 Return
	
Label_1062:
	var_68_int = 3; // 0x426 MovI
	return 2; // 0x427 Return
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
	func_852(var_44_cvector, var_45_cvector); // 0x2f4 NEW_2
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
	CameraTransit(var_35_cvector, var_33_cvector); // 0x304 Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x306 PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x307 PushE
	Rotate(var_57_float, var_58_float); // 0x308 Func
	var_59_bool = 0; // 0x30a PushV
	func_1072(var_59_bool); // 0x30b NEW_2
	if(var_59_bool == 0) goto Label_783; // 0x30d JumpB
	goto Label_791; // 0x30e Jump
	
Label_791:
	CameraWaitForPlayFinish(); // 0x317 Func
	ResumeWorld(); // 0x319 Func
	var_17_bool = 1; // 0x31b MovB
	return 18; // 0x31c Return
	
Label_783:
	var_60_string = "head"; // 0x30f PushS
	HasAnimationTrack(var_37_bool, var_60_string); // 0x310 Func
	var_61_bool = var_37_bool; // 0x312 Push
	if(var_61_bool == 0) goto Label_791; // 0x313 JumpB
	var_62_string = "head"; // 0x314 PushS
	LookAsyncCamera(var_62_string); // 0x315 Func
}


func_923()
{
	var_41_string = "playsound"; // 0x39c PushS
	var_42_string = "giveitem"; // 0x39d PushS
	TriggerWorld(var_41_string, var_42_string); // 0x39e Func
	return 0; // 0x3a0 Return
}


func_987(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x3dc PushV
	var_88_string = "ood7DBirdmask1"; // 0x3dd MovS
	func_862(var_87_int, var_88_string); // 0x3de NEW_2
	var_91_int = 0; // 0x3e0 PushI
	var_92_bool = var_87_int == var_91_int; // 0x3e1 Eq
	if(var_92_bool == 0) goto Label_997; // 0x3e2 JumpB
	var_85_bool = 1; // 0x3e3 MovB
	return 0; // 0x3e4 Return
	
Label_997:
	var_85_bool = 0; // 0x3e5 MovB
	return 0; // 0x3e6 Return
}


func_797()
{
	var_206_bool = 0; var_207_bool = 0; // 0x31d PushV
	CameraSwitchToNormal(); // 0x31e Func
	var_208_bool = 0; // 0x320 PushV
	func_1072(var_208_bool); // 0x321 NEW_2
	if(var_208_bool == 0) goto Label_805; // 0x323 JumpB
	goto Label_813; // 0x324 Jump
	
Label_813:
	return 2; // 0x32d Return
	
Label_805:
	var_209_string = "head"; // 0x325 PushS
	HasAnimationTrack(var_207_bool, var_209_string); // 0x326 Func
	var_210_bool = var_207_bool; // 0x328 Push
	if(var_210_bool == 0) goto Label_813; // 0x329 JumpB
	var_211_string = "head"; // 0x32a PushS
	UnlookAsync(var_211_string); // 0x32b Func
}


func_862(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x35e PushV
	GetVariable(var_88_string, var_90_int); // 0x35f Func
	var_87_int = var_90_int; // 0x361 Mov
	return 2; // 0x362 Return
}


func_929(var_11_object)
{
	var_13_string = "dreport is given"; // 0x3a2 PushS
	Trace(var_13_string); // 0x3a3 Func
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0; // 0x3a5 PushV
	var_14_object = var_11_object; // 0x3a6 Mov
	var_15_string = "d7q01_dreport"; // 0x3a7 MovS
	var_16_int = 1; // 0x3a8 MovI
	func_898(var_14_object, var_15_string, var_16_int); // 0x3a9 NEW_2
	return 0; // 0x3ab Return
}


func_867(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x363 PushV
	CreateIntVector(var_33_object); // 0x364 Func
	add(var_30_int); // 0x366 ObjFunc
	add(var_31_int); // 0x368 ObjFunc
	var_34_int = 3; // 0x36a PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x36b Func
	return 2; // 0x36d Return
}


func_999(var_147_bool)
{
	var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_bool = 0; var_153_bool = 0; var_154_int = 0; var_155_object = Obj(); var_156_int = 0; var_157_bool = 0; var_158_bool = 0; var_159_int = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0; var_163_bool = 0; var_164_int = 0; var_165_object = Obj(); var_166_int = 0; var_167_bool = 0; var_168_bool = 0; // 0x3e7 PushV
	var_169_int = 1; // 0x3e8 PushI
	GetItemCount(var_159_int, var_169_int); // 0x3e9 ObjFunc
	var_170_string = "bird_mask"; // 0x3eb PushS
	GetInvItemByName(var_160_int, var_170_string); // 0x3ec Func
	var_171_string = "bird_balahon"; // 0x3ee PushS
	GetInvItemByName(var_161_int, var_171_string); // 0x3ef Func
	var_162_bool = 0; // 0x3f1 MovB
	var_163_bool = 0; // 0x3f2 MovB
	var_164_int = 0; // 0x3f3 MovI
	
Label_1012:
	var_172_bool = var_164_int < var_159_int; // 0x3f4 LT
	if(var_172_bool == 0) goto Label_1040; // 0x3f5 JumpB
	var_173_int = 1; // 0x3f6 PushI
	GetItem(var_165_object, var_164_int, var_173_int); // 0x3f7 ObjFunc
	GetItemID(var_166_int); // 0x3f9 ObjFunc
	var_174_bool = var_166_int == var_160_int; // 0x3fb Eq
	if(var_174_bool == 0) goto Label_1028; // 0x3fc JumpB
	var_175_int = 1; // 0x3fd PushI
	IsItemSelected(var_167_bool, var_164_int, var_175_int); // 0x3fe ObjFunc
	var_176_bool = var_167_bool; // 0x400 Push
	if(var_176_bool == 0) goto Label_1027; // 0x401 JumpB
	var_162_bool = 1; // 0x402 MovB
	
Label_1027:
	goto Label_1036; // 0x403 Jump
	
Label_1036:
	var_165_object = 0; // 0x40c SetNull
	var_177_int = 1; // 0x40d PushI
	var_164_int = var_164_int + var_177_int; // 0x40e Add2
	goto Label_1012; // 0x40f Jump
	
Label_1028:
	var_178_bool = var_166_int == var_161_int; // 0x404 Eq
	if(var_178_bool == 0) goto Label_1036; // 0x405 JumpB
	var_179_int = 1; // 0x406 PushI
	IsItemSelected(var_168_bool, var_164_int, var_179_int); // 0x407 ObjFunc
	var_180_bool = var_168_bool; // 0x409 Push
	if(var_180_bool == 0) goto Label_1036; // 0x40a JumpB
	var_163_bool = 1; // 0x40b MovB
	
Label_1040:
	var_147_bool = 0; // 0x410 MovB
	var_181_bool = var_162_bool; // 0x411 Push
	if(var_181_bool == 0) goto Label_1046; // 0x412 JumpB
	var_182_bool = var_163_bool; // 0x413 Push
	if(var_182_bool == 0) goto Label_1046; // 0x414 JumpB
	var_147_bool = 1; // 0x415 MovB
	
Label_1046:
	return 20; // 0x416 Return
}


func_1064(var_65_int)
{
	var_65_int = 515571; // 0x428 MovI
	return 0; // 0x429 Return
}


func_1066(var_64_int)
{
	var_64_int = 504029; // 0x42a MovI
	return 0; // 0x42b Return
}


func_1068(var_66_string)
{
	var_66_string = "ui/NPC_bmask.png"; // 0x42c MovS
	return 0; // 0x42d Return
}


func_940()
{
	var_37_string = "ood7DBirdmask1"; // 0x3ad PushS
	var_38_int = 1; // 0x3ae PushI
	SetVariable(var_37_string, var_38_int); // 0x3af Func
	return 0; // 0x3b1 Return
}


func_1070(var_67_string)
{
	var_67_string = "ui/NPC_bmask_b.png"; // 0x42e MovS
	return 0; // 0x42f Return
}


func_814(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x32e PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x32f Func
	var_129_bool = var_126_bool; // 0x331 Push
	if(var_129_bool == 0) goto Label_825; // 0x332 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x333 Func
	var_130_bool = 0; // 0x335 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x336 Func
	goto Label_829; // 0x338 Jump
	
Label_829:
	return 6; // 0x33d Return
	
Label_825:
	var_131_string = "Can't find lsh animation : "; // 0x339 PushS
	var_132_int = var_131_string + var_122_string; // 0x33a Add
	Trace(var_132_int); // 0x33b Func
}


func_1072(var_59_bool)
{
	var_59_bool = 0; // 0x430 MovB
	return 0; // 0x431 Return
}


func_879(var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x36f PushV
	GetItemID(var_25_int); // 0x370 ObjFunc
	var_28_string = "Category"; // 0x372 PushS
	GetInvItemProperty(var_26_int, var_25_int, var_28_string); // 0x373 Func
	AddItem(var_27_bool, var_20_object, var_26_int, var_21_int); // 0x375 ObjFunc
	var_29_bool = var_27_bool == 0; // 0x377 Not
	if(var_29_bool == 0) goto Label_892; // 0x378 JumpB
	DropItems(var_20_object, var_21_int); // 0x379 ObjFunc
	goto Label_897; // 0x37b Jump
	
Label_897:
	return 6; // 0x381 Return
	
Label_892:
	var_30_int = 0; var_31_int = 0; // 0x37c PushV
	var_30_int = var_25_int; // 0x37d Mov
	var_31_int = var_21_int; // 0x37e Mov
	func_867(var_30_int, var_31_int); // 0x37f NEW_2
}


func_946()
{
	var_55_bool = 0; var_56_string = ""; var_57_string = ""; // 0x3b3 PushV
	var_56_string = "quest_d7_01"; // 0x3b4 MovS
	var_57_string = "kill_player"; // 0x3b5 MovS
	func_911(var_55_bool, var_56_string, var_57_string); // 0x3b6 NEW_2
	return 0; // 0x3b8 Return
}


func_953(var_139_bool)
{
	var_141_int = 0; var_142_string = ""; // 0x3ba PushV
	var_142_string = "d7q01"; // 0x3bb MovS
	func_862(var_141_int, var_142_string); // 0x3bc NEW_2
	var_143_int = 2; // 0x3be PushI
	var_144_bool = var_141_int == var_143_int; // 0x3bf Eq
	if(var_144_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_139_bool = 1; // 0x3c1 MovB
	return 0; // 0x3c2 Return
	
Label_963:
	var_139_bool = 0; // 0x3c3 MovB
	return 0; // 0x3c4 Return
}


func_830(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0; // 0x33e PushV
	lshHasAnimation(var_110_bool, var_103_string); // 0x33f Func
	var_113_bool = var_110_bool; // 0x341 Push
	if(var_113_bool == 0) goto Label_840; // 0x342 JumpB
	lshGetAnimTimes(var_103_string, var_111_float, var_112_float); // 0x343 Func
	lshPlayAnimation(var_111_float, var_112_float, var_104_bool); // 0x345 Func
	goto Label_844; // 0x347 Jump
	
Label_844:
	return 6; // 0x34c Return
	
Label_840:
	var_114_string = "Can't find lsh animation : "; // 0x348 PushS
	var_115_int = var_114_string + var_103_string; // 0x349 Add
	Trace(var_115_int); // 0x34a Func
}


