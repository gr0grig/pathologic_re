task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe7 PushI
	if(var_7_int == 0) goto Label_739; // 0xe8 JumpB
	func_830(); // 0xea Call
	var_9_int = 14497; // 0xec PushI
	var_10_bool = var_6_int == var_9_int; // 0xed Eq
	if(var_10_bool == 0) goto Label_254; // 0xee JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xef PushV
	var_11_object = var_1_object; // 0xf0 MovT
	var_12_object = var_0_object; // 0xf1 MovT
	func_896(var_12_object); // 0xf2 Call
	var_30_object = Obj(); var_31_object = Obj(); // 0xf4 PushV
	var_30_object = var_1_object; // 0xf5 MovT
	var_31_object = var_0_object; // 0xf6 MovT
	func_907(); // 0xf7 Call
	var_34_object = Obj(); var_35_object = Obj(); // 0xf9 PushV
	var_34_object = var_1_object; // 0xfa MovT
	var_35_object = var_0_object; // 0xfb MovT
	func_890(); // 0xfc Call
	
Label_254:
	var_38_int = 14502; // 0xfe PushI
	var_39_bool = var_6_int == var_38_int; // 0xff Eq
	if(var_39_bool == 0) goto Label_272; // 0x100 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x101 PushV
	var_40_object = var_1_object; // 0x102 MovT
	var_41_object = var_0_object; // 0x103 MovT
	func_890(); // 0x104 Call
	var_42_object = Obj(); var_43_object = Obj(); // 0x106 PushV
	var_42_object = var_1_object; // 0x107 MovT
	var_43_object = var_0_object; // 0x108 MovT
	func_907(); // 0x109 Call
	var_44_object = Obj(); var_45_object = Obj(); // 0x10b PushV
	var_44_object = var_1_object; // 0x10c MovT
	var_45_object = var_0_object; // 0x10d MovT
	func_896(var_45_object); // 0x10e Call
	
Label_272:
	var_46_int = 14513; // 0x110 PushI
	var_47_bool = var_6_int == var_46_int; // 0x111 Eq
	if(var_47_bool == 0) goto Label_280; // 0x112 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x113 PushV
	var_48_object = var_1_object; // 0x114 MovT
	var_49_object = var_0_object; // 0x115 MovT
	func_913(); // 0x116 Call
	
Label_280:
	var_56_int = 14517; // 0x118 PushI
	var_57_bool = var_6_int == var_56_int; // 0x119 Eq
	if(var_57_bool == 0) goto Label_288; // 0x11a JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x11b PushV
	var_58_object = var_1_object; // 0x11c MovT
	var_59_object = var_0_object; // 0x11d MovT
	func_913(); // 0x11e Call
	
Label_288:
	var_60_int = 14539; // 0x120 PushI
	var_61_bool = var_6_int == var_60_int; // 0x121 Eq
	if(var_61_bool == 0) goto Label_296; // 0x122 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x123 PushV
	var_62_object = var_1_object; // 0x124 MovT
	var_63_object = var_0_object; // 0x125 MovT
	func_913(); // 0x126 Call
	
Label_296:
	var_64_int = 14490; // 0x128 PushI
	var_65_bool = var_5_int == var_64_int; // 0x129 Eq
	if(var_65_bool == 0) goto Label_412; // 0x12a JumpB
	var_66_bool = 0; // 0x12b PushV
	var_66_bool = 0; // 0x12c MovB
	var_67_bool = 0; var_68_object = Obj(); // 0x12d PushV
	var_68_object = var_1_object; // 0x12e MovT
	func_964(var_68_object); // 0x12f Call
	if(var_67_bool == 0) goto Label_312; // 0x131 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x132 PushV
	var_76_object = var_1_object; // 0x133 MovT
	func_942(var_76_object); // 0x134 Call
	if(var_75_bool == 0) goto Label_312; // 0x136 JumpB
	var_66_bool = 1; // 0x137 MovB
	
Label_312:
	if(var_66_bool == 0) goto Label_328; // 0x138 JumpB
	var_81_string = ""; // 0x139 PushV
	var_81_string = "Neutral"; // 0x13a MovS
	func_214(var_6_int, var_81_string); // 0x13b Call
	var_96_int = 13261; // 0x13d PushI
	SetMessage(var_96_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_97_int = 13262; // 0x142 PushI
	var_98_int = 14492; // 0x143 PushI
	var_99_int = 14491; // 0x144 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_100_bool = 0; // 0x148 PushV
	var_100_bool = 0; // 0x149 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x14a PushV
	var_102_object = var_1_object; // 0x14b MovT
	func_930(var_102_object); // 0x14c Call
	if(var_101_bool == 0) goto Label_341; // 0x14e JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x14f PushV
	var_108_object = var_1_object; // 0x150 MovT
	func_954(var_107_bool, var_108_object); // 0x151 Call
	if(var_107_bool == 0) goto Label_341; // 0x153 JumpB
	var_100_bool = 1; // 0x154 MovB
	
Label_341:
	if(var_100_bool == 0) goto Label_382; // 0x155 JumpB
	var_145_string = ""; // 0x156 PushV
	var_145_string = "Neutral"; // 0x157 MovS
	func_214(var_6_int, var_145_string); // 0x158 Call
	var_146_int = 13279; // 0x15a PushI
	SetMessage(var_146_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_147_bool = 0; var_148_object = Obj(); // 0x15f PushV
	var_148_object = var_1_object; // 0x160 MovT
	func_920(var_147_bool, var_148_object); // 0x161 Call
	if(var_147_bool == 0) goto Label_361; // 0x163 JumpB
	var_151_int = 13280; // 0x164 PushI
	var_152_int = 14511; // 0x165 PushI
	var_153_int = 14510; // 0x166 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x167 TObjFunc
	
Label_361:
	var_154_bool = 0; var_155_object = Obj(); // 0x169 PushV
	var_155_object = var_1_object; // 0x16a MovT
	func_920(var_154_bool, var_155_object); // 0x16b Call
	if(var_154_bool == 0) goto Label_371; // 0x16d JumpB
	var_156_int = 13284; // 0x16e PushI
	var_157_int = 14515; // 0x16f PushI
	var_158_int = 14514; // 0x170 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x171 TObjFunc
	
Label_371:
	var_159_bool = 0; var_160_object = Obj(); // 0x173 PushV
	var_160_object = var_1_object; // 0x174 MovT
	func_920(var_159_bool, var_160_object); // 0x175 Call
	if(var_159_bool == 0) goto Label_381; // 0x177 JumpB
	var_161_int = 13288; // 0x178 PushI
	var_162_int = 14511; // 0x179 PushI
	var_163_int = 14518; // 0x17a PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x17b TObjFunc
	
Label_381:
	return 0; // 0x17d Return
	
Label_382:
	var_164_bool = 0; var_165_object = Obj(); // 0x17e PushV
	var_165_object = var_1_object; // 0x17f MovT
	func_930(var_165_object); // 0x180 Call
	if(var_164_bool == 0) goto Label_412; // 0x182 JumpB
	var_166_string = ""; // 0x183 PushV
	var_166_string = "Neutral"; // 0x184 MovS
	func_214(var_6_int, var_166_string); // 0x185 Call
	var_167_int = 13289; // 0x187 PushI
	SetMessage(var_167_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_168_int = 13290; // 0x18c PushI
	var_169_int = 14522; // 0x18d PushI
	var_170_int = 14521; // 0x18e PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x18f TObjFunc
	var_171_int = 13304; // 0x191 PushI
	var_172_int = 14538; // 0x192 PushI
	var_173_int = 14535; // 0x193 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x194 TObjFunc
	var_174_int = 13305; // 0x196 PushI
	var_175_int = -1; // 0x197 PushI
	var_176_int = 14536; // 0x198 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_177_int = 14522; // 0x19c PushI
	var_178_bool = var_5_int == var_177_int; // 0x19d Eq
	if(var_178_bool == 0) goto Label_440; // 0x19e JumpB
	var_179_string = ""; // 0x19f PushV
	var_179_string = "Neutral"; // 0x1a0 MovS
	func_214(var_6_int, var_179_string); // 0x1a1 Call
	var_180_int = 13291; // 0x1a3 PushI
	SetMessage(var_180_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_181_int = 13292; // 0x1a8 PushI
	var_182_int = 14524; // 0x1a9 PushI
	var_183_int = 14523; // 0x1aa PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1ab TObjFunc
	var_184_int = 13296; // 0x1ad PushI
	var_185_int = 14528; // 0x1ae PushI
	var_186_int = 14527; // 0x1af PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1b0 TObjFunc
	var_187_int = 13300; // 0x1b2 PushI
	var_188_int = 14532; // 0x1b3 PushI
	var_189_int = 14531; // 0x1b4 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_190_int = 14532; // 0x1b8 PushI
	var_191_bool = var_5_int == var_190_int; // 0x1b9 Eq
	if(var_191_bool == 0) goto Label_463; // 0x1ba JumpB
	var_192_string = ""; // 0x1bb PushV
	var_192_string = "Neutral"; // 0x1bc MovS
	func_214(var_6_int, var_192_string); // 0x1bd Call
	var_193_int = 13301; // 0x1bf PushI
	SetMessage(var_193_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_194_int = 13302; // 0x1c4 PushI
	var_195_int = 14540; // 0x1c5 PushI
	var_196_int = 14533; // 0x1c6 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1c7 TObjFunc
	var_197_int = 13303; // 0x1c9 PushI
	var_198_int = 14538; // 0x1ca PushI
	var_199_int = 14534; // 0x1cb PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_200_int = 14540; // 0x1cf PushI
	var_201_bool = var_5_int == var_200_int; // 0x1d0 Eq
	if(var_201_bool == 0) goto Label_481; // 0x1d1 JumpB
	var_202_string = ""; // 0x1d2 PushV
	var_202_string = "Neutral"; // 0x1d3 MovS
	func_214(var_6_int, var_202_string); // 0x1d4 Call
	var_203_int = 13309; // 0x1d6 PushI
	SetMessage(var_203_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_204_int = 13310; // 0x1db PushI
	var_205_int = 14524; // 0x1dc PushI
	var_206_int = 14541; // 0x1dd PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_207_int = 14528; // 0x1e1 PushI
	var_208_bool = var_5_int == var_207_int; // 0x1e2 Eq
	if(var_208_bool == 0) goto Label_504; // 0x1e3 JumpB
	var_209_string = ""; // 0x1e4 PushV
	var_209_string = "Neutral"; // 0x1e5 MovS
	func_214(var_6_int, var_209_string); // 0x1e6 Call
	var_210_int = 13297; // 0x1e8 PushI
	SetMessage(var_210_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_211_int = 13298; // 0x1ed PushI
	var_212_int = -1; // 0x1ee PushI
	var_213_int = 14529; // 0x1ef PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1f0 TObjFunc
	var_214_int = 13299; // 0x1f2 PushI
	var_215_int = 14538; // 0x1f3 PushI
	var_216_int = 14530; // 0x1f4 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_217_int = 14524; // 0x1f8 PushI
	var_218_bool = var_5_int == var_217_int; // 0x1f9 Eq
	if(var_218_bool == 0) goto Label_527; // 0x1fa JumpB
	var_219_string = ""; // 0x1fb PushV
	var_219_string = "Neutral"; // 0x1fc MovS
	func_214(var_6_int, var_219_string); // 0x1fd Call
	var_220_int = 13293; // 0x1ff PushI
	SetMessage(var_220_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_221_int = 13295; // 0x204 PushI
	var_222_int = -1; // 0x205 PushI
	var_223_int = 14526; // 0x206 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x207 TObjFunc
	var_224_int = 13306; // 0x209 PushI
	var_225_int = 14538; // 0x20a PushI
	var_226_int = 14537; // 0x20b PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_227_int = 14538; // 0x20f PushI
	var_228_bool = var_5_int == var_227_int; // 0x210 Eq
	if(var_228_bool == 0) goto Label_545; // 0x211 JumpB
	var_229_string = ""; // 0x212 PushV
	var_229_string = "Neutral"; // 0x213 MovS
	func_214(var_6_int, var_229_string); // 0x214 Call
	var_230_int = 13307; // 0x216 PushI
	SetMessage(var_230_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_231_int = 13308; // 0x21b PushI
	var_232_int = -1; // 0x21c PushI
	var_233_int = 14539; // 0x21d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_234_int = 14515; // 0x221 PushI
	var_235_bool = var_5_int == var_234_int; // 0x222 Eq
	if(var_235_bool == 0) goto Label_568; // 0x223 JumpB
	var_236_string = ""; // 0x224 PushV
	var_236_string = "Neutral"; // 0x225 MovS
	func_214(var_6_int, var_236_string); // 0x226 Call
	var_237_int = 13285; // 0x228 PushI
	SetMessage(var_237_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_238_int = 13286; // 0x22d PushI
	var_239_int = -1; // 0x22e PushI
	var_240_int = 14516; // 0x22f PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x230 TObjFunc
	var_241_int = 13287; // 0x232 PushI
	var_242_int = -1; // 0x233 PushI
	var_243_int = 14517; // 0x234 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x235 TObjFunc
	return 0; // 0x237 Return
	
Label_568:
	var_244_int = 14511; // 0x238 PushI
	var_245_bool = var_5_int == var_244_int; // 0x239 Eq
	if(var_245_bool == 0) goto Label_591; // 0x23a JumpB
	var_246_string = ""; // 0x23b PushV
	var_246_string = "Neutral"; // 0x23c MovS
	func_214(var_6_int, var_246_string); // 0x23d Call
	var_247_int = 13281; // 0x23f PushI
	SetMessage(var_247_int); // 0x240 TObjFunc
	ClearReplies(); // 0x242 TObjFunc
	var_248_int = 13282; // 0x244 PushI
	var_249_int = -1; // 0x245 PushI
	var_250_int = 14512; // 0x246 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x247 TObjFunc
	var_251_int = 13283; // 0x249 PushI
	var_252_int = -1; // 0x24a PushI
	var_253_int = 14513; // 0x24b PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x24c TObjFunc
	return 0; // 0x24e Return
	
Label_591:
	var_254_int = 14492; // 0x24f PushI
	var_255_bool = var_5_int == var_254_int; // 0x250 Eq
	if(var_255_bool == 0) goto Label_619; // 0x251 JumpB
	var_256_string = ""; // 0x252 PushV
	var_256_string = "Neutral"; // 0x253 MovS
	func_214(var_6_int, var_256_string); // 0x254 Call
	var_257_int = 13263; // 0x256 PushI
	SetMessage(var_257_int); // 0x257 TObjFunc
	ClearReplies(); // 0x259 TObjFunc
	var_258_int = 13264; // 0x25b PushI
	var_259_int = 14494; // 0x25c PushI
	var_260_int = 14493; // 0x25d PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x25e TObjFunc
	var_261_int = 13269; // 0x260 PushI
	var_262_int = 14506; // 0x261 PushI
	var_263_int = 14498; // 0x262 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x263 TObjFunc
	var_264_int = 13274; // 0x265 PushI
	var_265_int = 14504; // 0x266 PushI
	var_266_int = 14503; // 0x267 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_267_int = 14504; // 0x26b PushI
	var_268_bool = var_5_int == var_267_int; // 0x26c Eq
	if(var_268_bool == 0) goto Label_637; // 0x26d JumpB
	var_269_string = ""; // 0x26e PushV
	var_269_string = "Neutral"; // 0x26f MovS
	func_214(var_6_int, var_269_string); // 0x270 Call
	var_270_int = 13275; // 0x272 PushI
	SetMessage(var_270_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_271_int = 13276; // 0x277 PushI
	var_272_int = 14499; // 0x278 PushI
	var_273_int = 14505; // 0x279 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x27a TObjFunc
	return 0; // 0x27c Return
	
Label_637:
	var_274_int = 14506; // 0x27d PushI
	var_275_bool = var_5_int == var_274_int; // 0x27e Eq
	if(var_275_bool == 0) goto Label_655; // 0x27f JumpB
	var_276_string = ""; // 0x280 PushV
	var_276_string = "Neutral"; // 0x281 MovS
	func_214(var_6_int, var_276_string); // 0x282 Call
	var_277_int = 13277; // 0x284 PushI
	SetMessage(var_277_int); // 0x285 TObjFunc
	ClearReplies(); // 0x287 TObjFunc
	var_278_int = 13278; // 0x289 PushI
	var_279_int = 14499; // 0x28a PushI
	var_280_int = 14507; // 0x28b PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x28c TObjFunc
	return 0; // 0x28e Return
	
Label_655:
	var_281_int = 14499; // 0x28f PushI
	var_282_bool = var_5_int == var_281_int; // 0x290 Eq
	if(var_282_bool == 0) goto Label_673; // 0x291 JumpB
	var_283_string = ""; // 0x292 PushV
	var_283_string = "Neutral"; // 0x293 MovS
	func_214(var_6_int, var_283_string); // 0x294 Call
	var_284_int = 13270; // 0x296 PushI
	SetMessage(var_284_int); // 0x297 TObjFunc
	ClearReplies(); // 0x299 TObjFunc
	var_285_int = 13271; // 0x29b PushI
	var_286_int = 14501; // 0x29c PushI
	var_287_int = 14500; // 0x29d PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x29e TObjFunc
	return 0; // 0x2a0 Return
	
Label_673:
	var_288_int = 14501; // 0x2a1 PushI
	var_289_bool = var_5_int == var_288_int; // 0x2a2 Eq
	if(var_289_bool == 0) goto Label_691; // 0x2a3 JumpB
	var_290_string = ""; // 0x2a4 PushV
	var_290_string = "Neutral"; // 0x2a5 MovS
	func_214(var_6_int, var_290_string); // 0x2a6 Call
	var_291_int = 13272; // 0x2a8 PushI
	SetMessage(var_291_int); // 0x2a9 TObjFunc
	ClearReplies(); // 0x2ab TObjFunc
	var_292_int = 13273; // 0x2ad PushI
	var_293_int = -1; // 0x2ae PushI
	var_294_int = 14502; // 0x2af PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x2b0 TObjFunc
	return 0; // 0x2b2 Return
	
Label_691:
	var_295_int = 14494; // 0x2b3 PushI
	var_296_bool = var_5_int == var_295_int; // 0x2b4 Eq
	if(var_296_bool == 0) goto Label_709; // 0x2b5 JumpB
	var_297_string = ""; // 0x2b6 PushV
	var_297_string = "Neutral"; // 0x2b7 MovS
	func_214(var_6_int, var_297_string); // 0x2b8 Call
	var_298_int = 13265; // 0x2ba PushI
	SetMessage(var_298_int); // 0x2bb TObjFunc
	ClearReplies(); // 0x2bd TObjFunc
	var_299_int = 13266; // 0x2bf PushI
	var_300_int = 14496; // 0x2c0 PushI
	var_301_int = 14495; // 0x2c1 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x2c2 TObjFunc
	return 0; // 0x2c4 Return
	
Label_709:
	var_302_int = 14496; // 0x2c5 PushI
	var_303_bool = var_5_int == var_302_int; // 0x2c6 Eq
	if(var_303_bool == 0) goto Label_727; // 0x2c7 JumpB
	var_304_string = ""; // 0x2c8 PushV
	var_304_string = "Neutral"; // 0x2c9 MovS
	func_214(var_6_int, var_304_string); // 0x2ca Call
	var_305_int = 13267; // 0x2cc PushI
	SetMessage(var_305_int); // 0x2cd TObjFunc
	ClearReplies(); // 0x2cf TObjFunc
	var_306_int = 13268; // 0x2d1 PushI
	var_307_int = -1; // 0x2d2 PushI
	var_308_int = 14497; // 0x2d3 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_3_string = 1; // 0x2d7 TMovB
	var_309_bool = 0; // 0x2d8 PushV
	func_1048(var_309_bool); // 0x2d9 Call
	if(var_309_bool == 0) goto Label_735; // 0x2db JumpB
	lshStopAnimation(); // 0x2dc Func
	goto Label_737; // 0x2de Jump
	
Label_737:
	return 0; // 0x2e1 Return
	
Label_735:
	StopAnimation(); // 0x2df Func
	
Label_739:
	return 0; // 0x2e3 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x2e9 PushV
	var_7_object = var_5_object; // 0x2ea Mov
	TaskCall(0); // 0x2eb TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x2ec Call
	TaskReturn(); // 0x2ed TaskReturn
	return 0; // 0x2ef Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_740:
	Hold(); // 0x2e4 Func
	goto Label_740; // 0x2e6 Jump
}


func_896(var_11_object)
{
	var_13_string = "dreport is given"; // 0x381 PushS
	Trace(var_13_string); // 0x382 Func
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0; // 0x384 PushV
	var_14_object = var_11_object; // 0x385 Mov
	var_15_string = "d7q01_dreport"; // 0x386 MovS
	var_16_int = 1; // 0x387 MovI
	func_865(var_14_object, var_15_string, var_16_int); // 0x388 Call
	return 0; // 0x38a Return
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_752(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_1044(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_1046(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_1027(var_60_int); // 0x17 Call
	SetPlayerName(var_60_int); // 0x19 ObjFunc
	var_15_int = -1; // 0x1b MovI
	IsOverrideActive(var_14_bool); // 0x1c Func
	var_68_bool = var_14_bool; // 0x1e Push
	if(var_68_bool == 0) goto Label_34; // 0x1f JumpB
	var_6_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_13_object); // 0x22 Func
	var_69_object = Obj(); var_70_object = Obj(); // 0x24 PushV
	var_69_object = var_7_object; // 0x25 Mov
	var_70_object = var_13_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_16_bool); // 0x2b ObjFunc
	
Label_45:
	var_195_bool = var_16_bool == 0; // 0x2d Not
	if(var_195_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_196_object = Obj(); // 0x34 PushV
	var_196_object = var_7_object; // 0x35 Mov
	func_808(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_1027(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x403 PushV
	var_63_string = "player"; // 0x404 PushS
	GetVariable(var_63_string, var_62_int); // 0x405 Func
	var_64_int = 0; // 0x407 PushI
	var_65_bool = var_62_int == var_64_int; // 0x408 Eq
	if(var_65_bool == 0) goto Label_1037; // 0x409 JumpB
	var_60_int = 200001; // 0x40a MovI
	return 2; // 0x40b Return
	
Label_1037:
	var_66_int = 1; // 0x40d PushI
	var_67_bool = var_62_int == var_66_int; // 0x40e Eq
	if(var_67_bool == 0) goto Label_1042; // 0x40f JumpB
	var_60_int = 200002; // 0x410 MovI
	return 2; // 0x411 Return
	
Label_1042:
	var_60_int = 200003; // 0x412 MovI
	return 2; // 0x413 Return
}


func_964(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x3c5 PushV
	var_80_string = "ood7DBirdmask1"; // 0x3c6 MovS
	func_847(var_79_int, var_80_string); // 0x3c7 Call
	var_83_int = 0; // 0x3c9 PushI
	var_84_bool = var_79_int == var_83_int; // 0x3ca Eq
	if(var_84_bool == 0) goto Label_974; // 0x3cb JumpB
	var_77_bool = 1; // 0x3cc MovB
	return 0; // 0x3cd Return
	
Label_974:
	var_77_bool = 0; // 0x3ce MovB
	return 0; // 0x3cf Return
}


func_837(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x345 PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x346 Or
	var_46_float = sqrt(var_47_int); // 0x347 Sqrt2
	var_48_float = 0.0; // 0x348 PushF
	var_49_bool = var_46_float < var_48_float; // 0x349 LT
	if(var_49_bool == 0) goto Label_845; // 0x34a JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x34b MovV
	return 2; // 0x34c Return
	
Label_845:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x34d Div2
	return 2; // 0x34e Return
}


func_907()
{
	var_32_string = "ood7DBirdmask1"; // 0x38c PushS
	var_33_int = 1; // 0x38d PushI
	SetVariable(var_32_string, var_33_int); // 0x38e Func
	return 0; // 0x390 Return
}


func_847(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x34f PushV
	GetVariable(var_80_string, var_82_int); // 0x350 Func
	var_79_int = var_82_int; // 0x352 Mov
	return 2; // 0x353 Return
}


func_976(var_167_bool)
{
	var_167_bool = 0; // 0x3d1 MovB
	return 0; // 0x3d2 Return
}


func_913()
{
	var_50_bool = 0; var_51_string = ""; var_52_string = ""; // 0x392 PushV
	var_51_string = "quest_d7_01"; // 0x393 MovS
	var_52_string = "kill_player"; // 0x394 MovS
	func_878(var_50_bool, var_51_string, var_52_string); // 0x395 Call
	return 0; // 0x397 Return
}


func_979(var_127_bool)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_bool = 0; var_133_bool = 0; var_134_int = 0; var_135_object = Obj(); var_136_int = 0; var_137_bool = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_bool = 0; var_143_bool = 0; var_144_int = 0; var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_bool = 0; // 0x3d3 PushV
	var_149_int = 1; // 0x3d4 PushI
	GetItemCount(var_139_int, var_149_int); // 0x3d5 ObjFunc
	var_150_string = "bird_mask"; // 0x3d7 PushS
	GetInvItemByName(var_140_int, var_150_string); // 0x3d8 Func
	var_151_string = "bird_balahon"; // 0x3da PushS
	GetInvItemByName(var_141_int, var_151_string); // 0x3db Func
	var_142_bool = 0; // 0x3dd MovB
	var_143_bool = 0; // 0x3de MovB
	var_144_int = 0; // 0x3df MovI
	
Label_992:
	var_152_bool = var_144_int < var_139_int; // 0x3e0 LT
	if(var_152_bool == 0) goto Label_1020; // 0x3e1 JumpB
	var_153_int = 1; // 0x3e2 PushI
	GetItem(var_145_object, var_144_int, var_153_int); // 0x3e3 ObjFunc
	GetItemID(var_146_int); // 0x3e5 ObjFunc
	var_154_bool = var_146_int == var_140_int; // 0x3e7 Eq
	if(var_154_bool == 0) goto Label_1008; // 0x3e8 JumpB
	var_155_int = 1; // 0x3e9 PushI
	IsItemSelected(var_147_bool, var_144_int, var_155_int); // 0x3ea ObjFunc
	var_156_bool = var_147_bool; // 0x3ec Push
	if(var_156_bool == 0) goto Label_1007; // 0x3ed JumpB
	var_142_bool = 1; // 0x3ee MovB
	
Label_1007:
	goto Label_1016; // 0x3ef Jump
	
Label_1016:
	var_145_object = 0; // 0x3f8 SetNull
	var_157_int = 1; // 0x3f9 PushI
	var_144_int = var_144_int + var_157_int; // 0x3fa Add2
	goto Label_992; // 0x3fb Jump
	
Label_1008:
	var_158_bool = var_146_int == var_141_int; // 0x3f0 Eq
	if(var_158_bool == 0) goto Label_1016; // 0x3f1 JumpB
	var_159_int = 1; // 0x3f2 PushI
	IsItemSelected(var_148_bool, var_144_int, var_159_int); // 0x3f3 ObjFunc
	var_160_bool = var_148_bool; // 0x3f5 Push
	if(var_160_bool == 0) goto Label_1016; // 0x3f6 JumpB
	var_143_bool = 1; // 0x3f7 MovB
	
Label_1020:
	var_127_bool = 0; // 0x3fc MovB
	var_161_bool = var_142_bool; // 0x3fd Push
	if(var_161_bool == 0) goto Label_1026; // 0x3fe JumpB
	var_162_bool = var_143_bool; // 0x3ff Push
	if(var_162_bool == 0) goto Label_1026; // 0x400 JumpB
	var_127_bool = 1; // 0x401 MovB
	
Label_1026:
	return 20; // 0x402 Return
}


func_1044(var_58_int)
{
	var_58_int = 4029; // 0x414 MovI
	return 0; // 0x415 Return
}


func_852(var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x354 PushV
	GetItemID(var_25_int); // 0x355 ObjFunc
	var_28_string = "Category"; // 0x357 PushS
	GetInvItemProperty(var_26_int, var_25_int, var_28_string); // 0x358 Func
	AddItem(var_27_bool, var_20_object, var_26_int, var_21_int); // 0x35a ObjFunc
	var_29_bool = var_27_bool == 0; // 0x35c Not
	if(var_29_bool == 0) goto Label_864; // 0x35d JumpB
	DropItems(var_20_object, var_21_int); // 0x35e ObjFunc
	
Label_864:
	return 6; // 0x360 Return
}


func_1046(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x416 MovS
	return 0; // 0x417 Return
}


func_214(var_2_object, var_91_string)
{
	var_92_bool = 0; // 0xd7 PushV
	func_1048(var_92_bool); // 0xd8 Call
	var_93_bool = var_92_bool == 0; // 0xda Not
	if(var_93_bool == 0) goto Label_221; // 0xdb JumpB
	return 0; // 0xdc Return
	
Label_221:
	var_94_bool = var_91_string == var_2_object; // 0xdd Eq
	if(var_94_bool == 0) goto Label_224; // 0xde JumpB
	return 0; // 0xdf Return
	
Label_224:
	var_95_string = ""; // 0xe0 PushV
	var_95_string = var_91_string; // 0xe1 Mov
	func_812(var_95_string); // 0xe2 Call
	var_2_object = var_91_string; // 0xe4 TMov
	return 0; // 0xe5 Return
}


func_920(var_165_bool, var_166_object)
{
	var_167_bool = 0; var_168_object = Obj(); // 0x399 PushV
	var_168_object = var_166_object; // 0x39a Mov
	func_976(var_168_object); // 0x39b Call
	if(var_167_bool == 0) goto Label_928; // 0x39d JumpB
	var_165_bool = 1; // 0x39e MovB
	return 0; // 0x39f Return
	
Label_928:
	var_165_bool = 0; // 0x3a0 MovB
	return 0; // 0x3a1 Return
}


func_1048(var_92_bool)
{
	var_92_bool = 0; // 0x418 MovB
	return 0; // 0x419 Return
}


func_865(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x361 PushV
	CreateInvItem(var_18_object); // 0x362 Func
	SetItemName(var_15_string); // 0x364 ObjFunc
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x366 PushV
	var_19_object = var_14_object; // 0x367 Mov
	var_20_object = var_18_object; // 0x368 Mov
	var_21_int = var_16_int; // 0x369 Mov
	func_852(var_20_object, var_21_int); // 0x36a Call
	return 2; // 0x36c Return
}


func_930(var_119_bool)
{
	var_121_int = 0; var_122_string = ""; // 0x3a3 PushV
	var_122_string = "d7q01"; // 0x3a4 MovS
	func_847(var_121_int, var_122_string); // 0x3a5 Call
	var_123_int = 2; // 0x3a7 PushI
	var_124_bool = var_121_int == var_123_int; // 0x3a8 Eq
	if(var_124_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_119_bool = 1; // 0x3aa MovB
	return 0; // 0x3ab Return
	
Label_940:
	var_119_bool = 0; // 0x3ac MovB
	return 0; // 0x3ad Return
}


func_808()
{
	CameraSwitchToNormal(); // 0x329 Func
	return 0; // 0x32b Return
}


func_812(var_95_string)
{
	var_96_float = 0; var_97_float = 0; var_98_float = 0; var_99_float = 0; // 0x32c PushV
	var_100_string = "playing "; // 0x32d PushS
	var_101_int = var_100_string + var_95_string; // 0x32e Add
	Trace(var_101_int); // 0x32f Func
	lshGetAnimTimes(var_95_string, var_98_float, var_99_float); // 0x331 Func
	lshPlayAnimation(var_98_float, var_99_float); // 0x333 Func
	var_102_string = "start: "; // 0x335 PushS
	var_103_int = var_102_string + var_98_float; // 0x336 Add
	Trace(var_103_int); // 0x337 Func
	var_104_string = "end: "; // 0x339 PushS
	var_105_int = var_104_string + var_99_float; // 0x33a Add
	Trace(var_105_int); // 0x33b Func
	return 4; // 0x33d Return
}


func_942(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x3af PushV
	var_88_string = "d7q01"; // 0x3b0 MovS
	func_847(var_87_int, var_88_string); // 0x3b1 Call
	var_89_int = 1; // 0x3b3 PushI
	var_90_bool = var_87_int == var_89_int; // 0x3b4 Eq
	if(var_90_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_85_bool = 1; // 0x3b6 MovB
	return 0; // 0x3b7 Return
	
Label_952:
	var_85_bool = 0; // 0x3b8 MovB
	return 0; // 0x3b9 Return
}


func_878(var_50_bool, var_51_string, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x36e PushV
	FindActor(var_54_object, var_51_string); // 0x36f Func
	var_55_bool = var_54_object == 0; // 0x371 NullEq
	if(var_55_bool == 0) goto Label_885; // 0x372 JumpB
	var_50_bool = 0; // 0x373 MovB
	return 2; // 0x374 Return
	
Label_885:
	Trigger(var_54_object, var_52_string); // 0x375 Func
	var_50_bool = 1; // 0x377 MovB
	return 2; // 0x378 Return
}


func_752(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x2f0 PushV
	GetPosition(var_28_cvector); // 0x2f1 ObjFunc
	GetEyesHeight(var_27_float); // 0x2f3 ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x2f5 PushE
	var_35_float = var_35_float + var_27_float; // 0x2f6 Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x2f7 PopE
	GetPosition(var_29_cvector); // 0x2f8 Func
	GetEyesHeight(var_27_float); // 0x2fa Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x2fc PushE
	var_36_float = var_36_float + var_27_float; // 0x2fd Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x2fe PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x2ff Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x300 PushE
	var_37_float = 0; // 0x301 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x302 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x303 Or
	var_39_float = sqrt(var_38_int); // 0x304 Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x305 Div2
	var_31_cvector = -var_30_cvector; // 0x306 Neg2
	var_40_int = 70; // 0x307 PushI
	var_41_float = var_30_cvector * var_40_int; // 0x308 Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x309 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x30a PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x30b Xor2
	func_837(var_42_cvector, var_43_cvector); // 0x30c Call
	var_50_int = 25; // 0x30e PushI
	var_51_float = var_42_cvector * var_50_int; // 0x30f Mult
	var_52_int = var_41_float + var_51_float; // 0x310 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x311 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x312 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x313 Add2
	IsOverrideActive(var_34_bool); // 0x314 Func
	var_54_bool = var_34_bool; // 0x316 Push
	if(var_54_bool == 0) goto Label_794; // 0x317 JumpB
	var_17_bool = 0; // 0x318 MovB
	return 16; // 0x319 Return
	
Label_794:
	StopWorld(); // 0x31a Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x31c Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x31e PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x31f PushE
	Rotate(var_55_float, var_56_float); // 0x320 Func
	CameraWaitForPlayFinish(); // 0x322 Func
	ResumeWorld(); // 0x324 Func
	var_17_bool = 1; // 0x326 MovB
	return 16; // 0x327 Return
}


func_890()
{
	var_36_string = "playsound"; // 0x37b PushS
	var_37_string = "giveitem"; // 0x37c PushS
	TriggerWorld(var_36_string, var_37_string); // 0x37d Func
	return 0; // 0x37f Return
}


func_954(var_125_bool, var_126_object)
{
	var_127_bool = 0; var_128_object = Obj(); // 0x3bb PushV
	var_128_object = var_126_object; // 0x3bc Mov
	func_979(var_128_object); // 0x3bd Call
	if(var_127_bool == 0) goto Label_962; // 0x3bf JumpB
	var_125_bool = 1; // 0x3c0 MovB
	return 0; // 0x3c1 Return
	
Label_962:
	var_125_bool = 0; // 0x3c2 MovB
	return 0; // 0x3c3 Return
}


func_830()
{
	var_8_bool = 0; // 0x33e PushV
	func_1048(var_8_bool); // 0x33f Call
	if(var_8_bool == 0) goto Label_836; // 0x341 JumpB
	lshStopSpeech(); // 0x342 Func
	
Label_836:
	return 0; // 0x344 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_184; // 0x44 JumpB
	var_76_bool = 0; // 0x45 PushV
	var_76_bool = 0; // 0x46 MovB
	var_77_bool = 0; var_78_object = Obj(); // 0x47 PushV
	var_78_object = var_1_object; // 0x48 MovT
	func_964(var_78_object); // 0x49 Call
	if(var_77_bool == 0) goto Label_82; // 0x4b JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x4c PushV
	var_86_object = var_1_object; // 0x4d MovT
	func_942(var_86_object); // 0x4e Call
	if(var_85_bool == 0) goto Label_82; // 0x50 JumpB
	var_76_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_76_bool == 0) goto Label_98; // 0x52 JumpB
	var_91_string = ""; // 0x53 PushV
	var_91_string = "Neutral"; // 0x54 MovS
	func_214(var_70_object, var_91_string); // 0x55 Call
	var_106_int = 13261; // 0x57 PushI
	SetMessage(var_106_int); // 0x58 TObjFunc
	ClearReplies(); // 0x5a TObjFunc
	var_107_int = 13262; // 0x5c PushI
	var_108_int = 14492; // 0x5d PushI
	var_109_int = 14491; // 0x5e PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x5f TObjFunc
	goto Label_184; // 0x61 Jump
	
Label_184:
	var_110_bool = 0; // 0xb8 PushV
	func_1048(var_110_bool); // 0xb9 Call
	if(var_110_bool == 0) goto Label_199; // 0xbb JumpB
	
Label_188:
	lshWaitForAnimEnd(); // 0xbc Func
	var_111_string = var_3_string; // 0xbe PushT
	if(var_111_string == 0) goto Label_193; // 0xbf JumpB
	goto Label_198; // 0xc0 Jump
	
Label_198:
	goto Label_213; // 0xc6 Jump
	
Label_213:
	return 0; // 0xd5 Return
	
Label_193:
	var_112_string = ""; // 0xc1 PushV
	var_112_string = var_2_object; // 0xc2 MovT
	func_812(var_112_string); // 0xc3 Call
	goto Label_188; // 0xc5 Jump
	
Label_199:
	var_113_string = "all"; // 0xc7 PushS
	var_114_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_113_string, var_114_string); // 0xc9 Func
	
Label_203:
	WaitForAnimEnd(); // 0xcb Func
	var_115_string = var_3_string; // 0xcd PushT
	if(var_115_string == 0) goto Label_208; // 0xce JumpB
	goto Label_213; // 0xcf Jump
	
Label_208:
	var_116_string = "all"; // 0xd0 PushS
	var_117_string = "idle"; // 0xd1 PushS
	PlayAnimation(var_116_string, var_117_string); // 0xd2 Func
	goto Label_203; // 0xd4 Jump
	
Label_98:
	var_118_bool = 0; // 0x62 PushV
	var_118_bool = 0; // 0x63 MovB
	var_119_bool = 0; var_120_object = Obj(); // 0x64 PushV
	var_120_object = var_1_object; // 0x65 MovT
	func_930(var_120_object); // 0x66 Call
	if(var_119_bool == 0) goto Label_111; // 0x68 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x69 PushV
	var_126_object = var_1_object; // 0x6a MovT
	func_954(var_125_bool, var_126_object); // 0x6b Call
	if(var_125_bool == 0) goto Label_111; // 0x6d JumpB
	var_118_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_118_bool == 0) goto Label_152; // 0x6f JumpB
	var_163_string = ""; // 0x70 PushV
	var_163_string = "Neutral"; // 0x71 MovS
	func_214(var_70_object, var_163_string); // 0x72 Call
	var_164_int = 13279; // 0x74 PushI
	SetMessage(var_164_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_165_bool = 0; var_166_object = Obj(); // 0x79 PushV
	var_166_object = var_1_object; // 0x7a MovT
	func_920(var_165_bool, var_166_object); // 0x7b Call
	if(var_165_bool == 0) goto Label_131; // 0x7d JumpB
	var_169_int = 13280; // 0x7e PushI
	var_170_int = 14511; // 0x7f PushI
	var_171_int = 14510; // 0x80 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x81 TObjFunc
	
Label_131:
	var_172_bool = 0; var_173_object = Obj(); // 0x83 PushV
	var_173_object = var_1_object; // 0x84 MovT
	func_920(var_172_bool, var_173_object); // 0x85 Call
	if(var_172_bool == 0) goto Label_141; // 0x87 JumpB
	var_174_int = 13284; // 0x88 PushI
	var_175_int = 14515; // 0x89 PushI
	var_176_int = 14514; // 0x8a PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x8b TObjFunc
	
Label_141:
	var_177_bool = 0; var_178_object = Obj(); // 0x8d PushV
	var_178_object = var_1_object; // 0x8e MovT
	func_920(var_177_bool, var_178_object); // 0x8f Call
	if(var_177_bool == 0) goto Label_151; // 0x91 JumpB
	var_179_int = 13288; // 0x92 PushI
	var_180_int = 14511; // 0x93 PushI
	var_181_int = 14518; // 0x94 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x95 TObjFunc
	
Label_151:
	goto Label_184; // 0x97 Jump
	
Label_152:
	var_182_bool = 0; var_183_object = Obj(); // 0x98 PushV
	var_183_object = var_1_object; // 0x99 MovT
	func_930(var_183_object); // 0x9a Call
	if(var_182_bool == 0) goto Label_182; // 0x9c JumpB
	var_184_string = ""; // 0x9d PushV
	var_184_string = "Neutral"; // 0x9e MovS
	func_214(var_70_object, var_184_string); // 0x9f Call
	var_185_int = 13289; // 0xa1 PushI
	SetMessage(var_185_int); // 0xa2 TObjFunc
	ClearReplies(); // 0xa4 TObjFunc
	var_186_int = 13290; // 0xa6 PushI
	var_187_int = 14522; // 0xa7 PushI
	var_188_int = 14521; // 0xa8 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xa9 TObjFunc
	var_189_int = 13304; // 0xab PushI
	var_190_int = 14538; // 0xac PushI
	var_191_int = 14535; // 0xad PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xae TObjFunc
	var_192_int = 13305; // 0xb0 PushI
	var_193_int = -1; // 0xb1 PushI
	var_194_int = 14536; // 0xb2 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xb3 TObjFunc
	goto Label_184; // 0xb5 Jump
	
Label_182:
	return 0; // 0xb6 Return
}


