task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe2 PushI
	if(var_7_int == 0) goto Label_634; // 0xe3 JumpB
	func_725(); // 0xe5 Call
	var_9_int = 14419; // 0xe7 PushI
	var_10_bool = var_6_int == var_9_int; // 0xe8 Eq
	if(var_10_bool == 0) goto Label_249; // 0xe9 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xea PushV
	var_11_object = var_1_object; // 0xeb MovT
	var_12_object = var_0_object; // 0xec MovT
	func_800(); // 0xed Call
	var_15_object = Obj(); var_16_object = Obj(); // 0xef PushV
	var_15_object = var_1_object; // 0xf0 MovT
	var_16_object = var_0_object; // 0xf1 MovT
	func_806(var_16_object); // 0xf2 Call
	var_34_object = Obj(); var_35_object = Obj(); // 0xf4 PushV
	var_34_object = var_1_object; // 0xf5 MovT
	var_35_object = var_0_object; // 0xf6 MovT
	func_785(); // 0xf7 Call
	
Label_249:
	var_38_int = 14487; // 0xf9 PushI
	var_39_bool = var_6_int == var_38_int; // 0xfa Eq
	if(var_39_bool == 0) goto Label_257; // 0xfb JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0xfc PushV
	var_40_object = var_1_object; // 0xfd MovT
	var_41_object = var_0_object; // 0xfe MovT
	func_817(); // 0xff Call
	
Label_257:
	var_48_int = 14432; // 0x101 PushI
	var_49_bool = var_6_int == var_48_int; // 0x102 Eq
	if(var_49_bool == 0) goto Label_265; // 0x103 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0x104 PushV
	var_50_object = var_1_object; // 0x105 MovT
	var_51_object = var_0_object; // 0x106 MovT
	func_817(); // 0x107 Call
	
Label_265:
	var_52_int = 14562; // 0x109 PushI
	var_53_bool = var_6_int == var_52_int; // 0x10a Eq
	if(var_53_bool == 0) goto Label_273; // 0x10b JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x10c PushV
	var_54_object = var_1_object; // 0x10d MovT
	var_55_object = var_0_object; // 0x10e MovT
	func_817(); // 0x10f Call
	
Label_273:
	var_56_int = 14563; // 0x111 PushI
	var_57_bool = var_6_int == var_56_int; // 0x112 Eq
	if(var_57_bool == 0) goto Label_286; // 0x113 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x114 PushV
	var_58_object = var_1_object; // 0x115 MovT
	var_59_object = var_0_object; // 0x116 MovT
	func_824(); // 0x117 Call
	var_63_object = Obj(); var_64_object = Obj(); // 0x119 PushV
	var_63_object = var_1_object; // 0x11a MovT
	var_64_object = var_0_object; // 0x11b MovT
	func_791(); // 0x11c Call
	
Label_286:
	var_92_int = 13343; // 0x11e PushI
	var_93_bool = var_5_int == var_92_int; // 0x11f Eq
	if(var_93_bool == 0) goto Label_397; // 0x120 JumpB
	var_94_bool = 0; // 0x121 PushV
	var_94_bool = 0; // 0x122 MovB
	var_95_bool = 0; var_96_object = Obj(); // 0x123 PushV
	var_96_object = var_1_object; // 0x124 MovT
	func_843(var_96_object); // 0x125 Call
	if(var_95_bool == 0) goto Label_302; // 0x127 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x128 PushV
	var_104_object = var_1_object; // 0x129 MovT
	func_865(var_104_object); // 0x12a Call
	if(var_103_bool == 0) goto Label_302; // 0x12c JumpB
	var_94_bool = 1; // 0x12d MovB
	
Label_302:
	if(var_94_bool == 0) goto Label_318; // 0x12e JumpB
	var_109_string = ""; // 0x12f PushV
	var_109_string = "Neutral"; // 0x130 MovS
	func_209(var_6_int, var_109_string); // 0x131 Call
	var_124_int = 12188; // 0x133 PushI
	SetMessage(var_124_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_125_int = 12189; // 0x138 PushI
	var_126_int = 14396; // 0x139 PushI
	var_127_int = 13344; // 0x13a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_128_bool = 0; // 0x13e PushV
	var_128_bool = 0; // 0x13f MovB
	var_129_bool = 0; var_130_object = Obj(); // 0x140 PushV
	var_130_object = var_1_object; // 0x141 MovT
	func_855(var_129_bool, var_130_object); // 0x142 Call
	if(var_129_bool == 0) goto Label_331; // 0x144 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x145 PushV
	var_168_object = var_1_object; // 0x146 MovT
	func_831(var_168_object); // 0x147 Call
	if(var_167_bool == 0) goto Label_331; // 0x149 JumpB
	var_128_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_128_bool == 0) goto Label_367; // 0x14b JumpB
	var_173_string = ""; // 0x14c PushV
	var_173_string = "Neutral"; // 0x14d MovS
	func_209(var_6_int, var_173_string); // 0x14e Call
	var_174_int = 13197; // 0x150 PushI
	SetMessage(var_174_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_175_int = 13198; // 0x155 PushI
	var_176_int = 14433; // 0x156 PushI
	var_177_int = 14421; // 0x157 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x158 TObjFunc
	var_178_int = 13199; // 0x15a PushI
	var_179_int = 14428; // 0x15b PushI
	var_180_int = 14422; // 0x15c PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x15d TObjFunc
	var_181_int = 13200; // 0x15f PushI
	var_182_int = 14424; // 0x160 PushI
	var_183_int = 14423; // 0x161 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x162 TObjFunc
	var_184_int = 13330; // 0x164 PushI
	var_185_int = -1; // 0x165 PushI
	var_186_int = 14562; // 0x166 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x167 TObjFunc
	var_187_int = 13331; // 0x169 PushI
	var_188_int = -1; // 0x16a PushI
	var_189_int = 14563; // 0x16b PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_190_bool = 0; var_191_object = Obj(); // 0x16f PushV
	var_191_object = var_1_object; // 0x170 MovT
	func_831(var_191_object); // 0x171 Call
	if(var_190_bool == 0) goto Label_397; // 0x173 JumpB
	var_192_string = ""; // 0x174 PushV
	var_192_string = "Neutral"; // 0x175 MovS
	func_209(var_6_int, var_192_string); // 0x176 Call
	var_193_int = 13175; // 0x178 PushI
	SetMessage(var_193_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_194_int = 13177; // 0x17d PushI
	var_195_int = 14398; // 0x17e PushI
	var_196_int = 14397; // 0x17f PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x180 TObjFunc
	var_197_int = 13195; // 0x182 PushI
	var_198_int = 14411; // 0x183 PushI
	var_199_int = 14417; // 0x184 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x185 TObjFunc
	var_200_int = 13193; // 0x187 PushI
	var_201_int = -1; // 0x188 PushI
	var_202_int = 14415; // 0x189 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_203_int = 14398; // 0x18d PushI
	var_204_bool = var_5_int == var_203_int; // 0x18e Eq
	if(var_204_bool == 0) goto Label_425; // 0x18f JumpB
	var_205_string = ""; // 0x190 PushV
	var_205_string = "Neutral"; // 0x191 MovS
	func_209(var_6_int, var_205_string); // 0x192 Call
	var_206_int = 13178; // 0x194 PushI
	SetMessage(var_206_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_207_int = 13179; // 0x199 PushI
	var_208_int = 14402; // 0x19a PushI
	var_209_int = 14399; // 0x19b PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x19c TObjFunc
	var_210_int = 13180; // 0x19e PushI
	var_211_int = 14403; // 0x19f PushI
	var_212_int = 14400; // 0x1a0 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1a1 TObjFunc
	var_213_int = 13181; // 0x1a3 PushI
	var_214_int = 14404; // 0x1a4 PushI
	var_215_int = 14401; // 0x1a5 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_216_int = 14404; // 0x1a9 PushI
	var_217_bool = var_5_int == var_216_int; // 0x1aa Eq
	if(var_217_bool == 0) goto Label_448; // 0x1ab JumpB
	var_218_string = ""; // 0x1ac PushV
	var_218_string = "Neutral"; // 0x1ad MovS
	func_209(var_6_int, var_218_string); // 0x1ae Call
	var_219_int = 13184; // 0x1b0 PushI
	SetMessage(var_219_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_220_int = 13189; // 0x1b5 PushI
	var_221_int = -1; // 0x1b6 PushI
	var_222_int = 14409; // 0x1b7 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1b8 TObjFunc
	var_223_int = 13190; // 0x1ba PushI
	var_224_int = 14411; // 0x1bb PushI
	var_225_int = 14410; // 0x1bc PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_226_int = 14403; // 0x1c0 PushI
	var_227_bool = var_5_int == var_226_int; // 0x1c1 Eq
	if(var_227_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_228_string = ""; // 0x1c3 PushV
	var_228_string = "Neutral"; // 0x1c4 MovS
	func_209(var_6_int, var_228_string); // 0x1c5 Call
	var_229_int = 13183; // 0x1c7 PushI
	SetMessage(var_229_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_230_int = 13187; // 0x1cc PushI
	var_231_int = -1; // 0x1cd PushI
	var_232_int = 14407; // 0x1ce PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1cf TObjFunc
	var_233_int = 13188; // 0x1d1 PushI
	var_234_int = 14411; // 0x1d2 PushI
	var_235_int = 14408; // 0x1d3 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_236_int = 14402; // 0x1d7 PushI
	var_237_bool = var_5_int == var_236_int; // 0x1d8 Eq
	if(var_237_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_238_string = ""; // 0x1da PushV
	var_238_string = "Neutral"; // 0x1db MovS
	func_209(var_6_int, var_238_string); // 0x1dc Call
	var_239_int = 13182; // 0x1de PushI
	SetMessage(var_239_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_240_int = 13185; // 0x1e3 PushI
	var_241_int = 14411; // 0x1e4 PushI
	var_242_int = 14405; // 0x1e5 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1e6 TObjFunc
	var_243_int = 13186; // 0x1e8 PushI
	var_244_int = -1; // 0x1e9 PushI
	var_245_int = 14406; // 0x1ea PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_246_int = 14411; // 0x1ee PushI
	var_247_bool = var_5_int == var_246_int; // 0x1ef Eq
	if(var_247_bool == 0) goto Label_512; // 0x1f0 JumpB
	var_248_string = ""; // 0x1f1 PushV
	var_248_string = "Neutral"; // 0x1f2 MovS
	func_209(var_6_int, var_248_string); // 0x1f3 Call
	var_249_int = 13191; // 0x1f5 PushI
	SetMessage(var_249_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_250_int = 13192; // 0x1fa PushI
	var_251_int = -1; // 0x1fb PushI
	var_252_int = 14414; // 0x1fc PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_253_int = 14424; // 0x200 PushI
	var_254_bool = var_5_int == var_253_int; // 0x201 Eq
	if(var_254_bool == 0) goto Label_540; // 0x202 JumpB
	var_255_string = ""; // 0x203 PushV
	var_255_string = "Neutral"; // 0x204 MovS
	func_209(var_6_int, var_255_string); // 0x205 Call
	var_256_int = 13201; // 0x207 PushI
	SetMessage(var_256_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_257_int = 13202; // 0x20c PushI
	var_258_int = 14429; // 0x20d PushI
	var_259_int = 14425; // 0x20e PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x20f TObjFunc
	var_260_int = 13203; // 0x211 PushI
	var_261_int = 14433; // 0x212 PushI
	var_262_int = 14426; // 0x213 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x214 TObjFunc
	var_263_int = 13204; // 0x216 PushI
	var_264_int = 14428; // 0x217 PushI
	var_265_int = 14427; // 0x218 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_266_int = 14429; // 0x21c PushI
	var_267_bool = var_5_int == var_266_int; // 0x21d Eq
	if(var_267_bool == 0) goto Label_558; // 0x21e JumpB
	var_268_string = ""; // 0x21f PushV
	var_268_string = "Neutral"; // 0x220 MovS
	func_209(var_6_int, var_268_string); // 0x221 Call
	var_269_int = 13206; // 0x223 PushI
	SetMessage(var_269_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_270_int = 13207; // 0x228 PushI
	var_271_int = -1; // 0x229 PushI
	var_272_int = 14430; // 0x22a PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x22b TObjFunc
	return 0; // 0x22d Return
	
Label_558:
	var_273_int = 14428; // 0x22e PushI
	var_274_bool = var_5_int == var_273_int; // 0x22f Eq
	if(var_274_bool == 0) goto Label_581; // 0x230 JumpB
	var_275_string = ""; // 0x231 PushV
	var_275_string = "Neutral"; // 0x232 MovS
	func_209(var_6_int, var_275_string); // 0x233 Call
	var_276_int = 13205; // 0x235 PushI
	SetMessage(var_276_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_277_int = 13208; // 0x23a PushI
	var_278_int = -1; // 0x23b PushI
	var_279_int = 14431; // 0x23c PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x23d TObjFunc
	var_280_int = 13209; // 0x23f PushI
	var_281_int = -1; // 0x240 PushI
	var_282_int = 14432; // 0x241 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_283_int = 14433; // 0x245 PushI
	var_284_bool = var_5_int == var_283_int; // 0x246 Eq
	if(var_284_bool == 0) goto Label_604; // 0x247 JumpB
	var_285_string = ""; // 0x248 PushV
	var_285_string = "Neutral"; // 0x249 MovS
	func_209(var_6_int, var_285_string); // 0x24a Call
	var_286_int = 13210; // 0x24c PushI
	SetMessage(var_286_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_287_int = 13211; // 0x251 PushI
	var_288_int = -1; // 0x252 PushI
	var_289_int = 14434; // 0x253 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x254 TObjFunc
	var_290_int = 13260; // 0x256 PushI
	var_291_int = -1; // 0x257 PushI
	var_292_int = 14487; // 0x258 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x259 TObjFunc
	return 0; // 0x25b Return
	
Label_604:
	var_293_int = 14396; // 0x25c PushI
	var_294_bool = var_5_int == var_293_int; // 0x25d Eq
	if(var_294_bool == 0) goto Label_622; // 0x25e JumpB
	var_295_string = ""; // 0x25f PushV
	var_295_string = "Neutral"; // 0x260 MovS
	func_209(var_6_int, var_295_string); // 0x261 Call
	var_296_int = 13176; // 0x263 PushI
	SetMessage(var_296_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_297_int = 13196; // 0x268 PushI
	var_298_int = -1; // 0x269 PushI
	var_299_int = 14419; // 0x26a PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_3_string = 1; // 0x26e TMovB
	var_300_bool = 0; // 0x26f PushV
	func_1004(var_300_bool); // 0x270 Call
	if(var_300_bool == 0) goto Label_630; // 0x272 JumpB
	lshStopAnimation(); // 0x273 Func
	goto Label_632; // 0x275 Jump
	
Label_632:
	return 0; // 0x278 Return
	
Label_630:
	StopAnimation(); // 0x276 Func
	
Label_634:
	return 0; // 0x27a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x280 PushV
	var_7_object = var_5_object; // 0x281 Mov
	TaskCall(0); // 0x282 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x283 Call
	TaskReturn(); // 0x284 TaskReturn
	return 0; // 0x286 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_635:
	Hold(); // 0x27b Func
	goto Label_635; // 0x27d Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	func_647(var_18_object); // 0x4 Call
	var_57_bool = var_17_bool == 0; // 0x6 Not
	if(var_57_bool == 0) goto Label_10; // 0x7 JumpB
	var_6_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_13_object); // 0xa Func
	var_58_int = 0; // 0xc PushV
	func_1000(var_58_int); // 0xd Call
	SetNPCName(var_58_int); // 0xf ObjFunc
	var_59_string = ""; // 0x11 PushV
	func_1002(var_59_string); // 0x12 Call
	SetPhoto(var_59_string); // 0x14 ObjFunc
	var_60_int = 0; // 0x16 PushV
	func_967(var_60_int); // 0x17 Call
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
	var_193_bool = var_16_bool == 0; // 0x2d Not
	if(var_193_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_16_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_194_object = Obj(); // 0x34 PushV
	var_194_object = var_7_object; // 0x35 Mov
	func_703(); // 0x36 Call
	StopDialog(var_13_object); // 0x38 Func
	GetReturnValue(var_15_int); // 0x3a ObjFunc
	var_6_int = var_15_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_707(var_95_string)
{
	var_96_float = 0; var_97_float = 0; var_98_float = 0; var_99_float = 0; // 0x2c3 PushV
	var_100_string = "playing "; // 0x2c4 PushS
	var_101_int = var_100_string + var_95_string; // 0x2c5 Add
	Trace(var_101_int); // 0x2c6 Func
	lshGetAnimTimes(var_95_string, var_98_float, var_99_float); // 0x2c8 Func
	lshPlayAnimation(var_98_float, var_99_float); // 0x2ca Func
	var_102_string = "start: "; // 0x2cc PushS
	var_103_int = var_102_string + var_98_float; // 0x2cd Add
	Trace(var_103_int); // 0x2ce Func
	var_104_string = "end: "; // 0x2d0 PushS
	var_105_int = var_104_string + var_99_float; // 0x2d1 Add
	Trace(var_105_int); // 0x2d2 Func
	return 4; // 0x2d4 Return
}


func_773(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x305 PushV
	FindActor(var_46_object, var_43_string); // 0x306 Func
	var_47_bool = var_46_object == 0; // 0x308 NullEq
	if(var_47_bool == 0) goto Label_780; // 0x309 JumpB
	var_42_bool = 0; // 0x30a MovB
	return 2; // 0x30b Return
	
Label_780:
	Trigger(var_46_object, var_44_string); // 0x30c Func
	var_42_bool = 1; // 0x30e MovB
	return 2; // 0x30f Return
}


func_647(var_17_bool)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; // 0x287 PushV
	GetPosition(var_28_cvector); // 0x288 ObjFunc
	GetEyesHeight(var_27_float); // 0x28a ObjFunc
	var_35_float = GetByIndex(var_28_cvector, 1); // 0x28c PushE
	var_35_float = var_35_float + var_27_float; // 0x28d Add2
	SetByIndex(var_28_cvector, 1) = var_35_float; // 0x28e PopE
	GetPosition(var_29_cvector); // 0x28f Func
	GetEyesHeight(var_27_float); // 0x291 Func
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x293 PushE
	var_36_float = var_36_float + var_27_float; // 0x294 Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x295 PopE
	var_30_cvector = var_28_cvector - var_29_cvector; // 0x296 Sub2
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x297 PushE
	var_37_float = 0; // 0x298 MovI
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x299 PopE
	var_38_int = var_30_cvector | var_30_cvector; // 0x29a Or
	var_39_float = sqrt(var_38_int); // 0x29b Sqrt
	var_30_cvector = var_30_cvector / var_30_cvector; // 0x29c Div2
	var_31_cvector = -var_30_cvector; // 0x29d Neg2
	var_40_int = 70; // 0x29e PushI
	var_41_float = var_30_cvector * var_40_int; // 0x29f Mult
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x2a0 PushV
	var_44_cvector = CVector(0.0, 1.0, 0.0); // 0x2a1 PushVec
	var_43_cvector = var_31_cvector ^ var_44_cvector; // 0x2a2 Xor2
	func_732(var_42_cvector, var_43_cvector); // 0x2a3 Call
	var_50_int = 25; // 0x2a5 PushI
	var_51_float = var_42_cvector * var_50_int; // 0x2a6 Mult
	var_52_int = var_41_float + var_51_float; // 0x2a7 Add
	var_53_cvector = CVector(0.0, 10.0, 0.0); // 0x2a8 PushVec
	var_32_cvector = var_52_int - var_53_cvector; // 0x2a9 Sub2
	var_33_cvector = var_29_cvector + var_32_cvector; // 0x2aa Add2
	IsOverrideActive(var_34_bool); // 0x2ab Func
	var_54_bool = var_34_bool; // 0x2ad Push
	if(var_54_bool == 0) goto Label_689; // 0x2ae JumpB
	var_17_bool = 0; // 0x2af MovB
	return 16; // 0x2b0 Return
	
Label_689:
	StopWorld(); // 0x2b1 Func
	CameraTransit(var_33_cvector, var_31_cvector); // 0x2b3 Func
	var_55_float = GetByIndex(var_32_cvector, 0); // 0x2b5 PushE
	var_56_float = GetByIndex(var_32_cvector, 2); // 0x2b6 PushE
	Rotate(var_55_float, var_56_float); // 0x2b7 Func
	CameraWaitForPlayFinish(); // 0x2b9 Func
	ResumeWorld(); // 0x2bb Func
	var_17_bool = 1; // 0x2bd MovB
	return 16; // 0x2be Return
}


func_967(var_60_int)
{
	var_61_int = 0; var_62_int = 0; // 0x3c7 PushV
	var_63_string = "player"; // 0x3c8 PushS
	GetVariable(var_63_string, var_62_int); // 0x3c9 Func
	var_64_int = 0; // 0x3cb PushI
	var_65_bool = var_62_int == var_64_int; // 0x3cc Eq
	if(var_65_bool == 0) goto Label_977; // 0x3cd JumpB
	var_60_int = 200001; // 0x3ce MovI
	return 2; // 0x3cf Return
	
Label_977:
	var_66_int = 1; // 0x3d1 PushI
	var_67_bool = var_62_int == var_66_int; // 0x3d2 Eq
	if(var_67_bool == 0) goto Label_982; // 0x3d3 JumpB
	var_60_int = 200002; // 0x3d4 MovI
	return 2; // 0x3d5 Return
	
Label_982:
	var_60_int = 200003; // 0x3d6 MovI
	return 2; // 0x3d7 Return
}


func_843(var_77_bool)
{
	var_79_int = 0; var_80_string = ""; // 0x34c PushV
	var_80_string = "d7q01"; // 0x34d MovS
	func_742(var_79_int, var_80_string); // 0x34e Call
	var_83_int = 1; // 0x350 PushI
	var_84_bool = var_79_int == var_83_int; // 0x351 Eq
	if(var_84_bool == 0) goto Label_853; // 0x352 JumpB
	var_77_bool = 1; // 0x353 MovB
	return 0; // 0x354 Return
	
Label_853:
	var_77_bool = 0; // 0x355 MovB
	return 0; // 0x356 Return
}


func_785()
{
	var_36_string = "playsound"; // 0x312 PushS
	var_37_string = "giveitem"; // 0x313 PushS
	TriggerWorld(var_36_string, var_37_string); // 0x314 Func
	return 0; // 0x316 Return
}


func_703()
{
	CameraSwitchToNormal(); // 0x2c0 Func
	return 0; // 0x2c2 Return
}


func_209(var_2_object, var_91_string)
{
	var_92_bool = 0; // 0xd2 PushV
	func_1004(var_92_bool); // 0xd3 Call
	var_93_bool = var_92_bool == 0; // 0xd5 Not
	if(var_93_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_94_bool = var_91_string == var_2_object; // 0xd8 Eq
	if(var_94_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_95_string = ""; // 0xdb PushV
	var_95_string = var_91_string; // 0xdc Mov
	func_707(var_95_string); // 0xdd Call
	var_2_object = var_91_string; // 0xdf TMov
	return 0; // 0xe0 Return
}


func_831(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x340 PushV
	var_160_string = "d7q01"; // 0x341 MovS
	func_742(var_159_int, var_160_string); // 0x342 Call
	var_161_int = 2; // 0x344 PushI
	var_162_bool = var_159_int == var_161_int; // 0x345 Eq
	if(var_162_bool == 0) goto Label_841; // 0x346 JumpB
	var_157_bool = 1; // 0x347 MovB
	return 0; // 0x348 Return
	
Label_841:
	var_157_bool = 0; // 0x349 MovB
	return 0; // 0x34a Return
}


func_725()
{
	var_8_bool = 0; // 0x2d5 PushV
	func_1004(var_8_bool); // 0x2d6 Call
	if(var_8_bool == 0) goto Label_731; // 0x2d8 JumpB
	lshStopSpeech(); // 0x2d9 Func
	
Label_731:
	return 0; // 0x2db Return
}


func_791()
{
	var_65_string = "d7q01"; // 0x318 PushS
	var_66_int = 3; // 0x319 PushI
	SetVariable(var_65_string, var_66_int); // 0x31a Func
	func_984(); // 0x31d Call
	return 0; // 0x31f Return
}


func_855(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj(); // 0x358 PushV
	var_122_object = var_120_object; // 0x359 Mov
	func_877(var_122_object); // 0x35a Call
	if(var_121_bool == 0) goto Label_863; // 0x35c JumpB
	var_119_bool = 1; // 0x35d MovB
	return 0; // 0x35e Return
	
Label_863:
	var_119_bool = 0; // 0x35f MovB
	return 0; // 0x360 Return
}


func_984()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x3d8 PushV
	var_69_string = "Adding diary entry"; // 0x3d9 PushS
	Trace(var_69_string); // 0x3da Func
	var_70_int = 169; // 0x3dc PushI
	var_71_int = 1; // 0x3dd PushI
	var_72_int = 15418; // 0x3de PushI
	CreateDiaryEntry(var_68_object, var_70_int, var_71_int, var_72_int); // 0x3df Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0x3e1 PushV
	var_74_object = var_68_object; // 0x3e2 Mov
	var_75_int = 165; // 0x3e3 MovI
	func_938(var_73_bool, var_74_object, var_75_int); // 0x3e4 Call
	return 2; // 0x3e6 Return
}


func_732(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0; // 0x2dc PushV
	var_47_int = var_43_cvector | var_43_cvector; // 0x2dd Or
	var_46_float = sqrt(var_47_int); // 0x2de Sqrt2
	var_48_float = 0.0; // 0x2df PushF
	var_49_bool = var_46_float < var_48_float; // 0x2e0 LT
	if(var_49_bool == 0) goto Label_740; // 0x2e1 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x2e2 MovV
	return 2; // 0x2e3 Return
	
Label_740:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x2e4 Div2
	return 2; // 0x2e5 Return
}


func_925(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x39d PushV
	GetDiaryRoot(var_84_object); // 0x39e Func
	var_85_bool = var_84_object == 0; // 0x3a0 Not
	if(var_85_bool == 0) goto Label_935; // 0x3a1 JumpB
	var_86_string = "Can't retrieve diary root"; // 0x3a2 PushS
	Trace(var_86_string); // 0x3a3 Func
	var_82_object = 0; // 0x3a5 MovB
	return 2; // 0x3a6 Return
	
Label_935:
	var_82_object = var_84_object; // 0x3a7 Mov
	return 2; // 0x3a8 Return
}


func_800()
{
	var_13_string = "ood7UBirdmask1"; // 0x321 PushS
	var_14_int = 1; // 0x322 PushI
	SetVariable(var_13_string, var_14_int); // 0x323 Func
	return 0; // 0x325 Return
}


func_865(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x362 PushV
	var_88_string = "ood7UBirdmask1"; // 0x363 MovS
	func_742(var_87_int, var_88_string); // 0x364 Call
	var_89_int = 0; // 0x366 PushI
	var_90_bool = var_87_int == var_89_int; // 0x367 Eq
	if(var_90_bool == 0) goto Label_875; // 0x368 JumpB
	var_85_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
	
Label_875:
	var_85_bool = 0; // 0x36b MovB
	return 0; // 0x36c Return
}


func_806(var_15_object)
{
	var_17_string = "ureport is given"; // 0x327 PushS
	Trace(var_17_string); // 0x328 Func
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0; // 0x32a PushV
	var_18_object = var_15_object; // 0x32b Mov
	var_19_string = "d7q01_ureport"; // 0x32c MovS
	var_20_int = 1; // 0x32d MovI
	func_760(var_18_object, var_19_string, var_20_int); // 0x32e Call
	return 0; // 0x330 Return
}


func_742(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0; // 0x2e6 PushV
	GetVariable(var_80_string, var_82_int); // 0x2e7 Func
	var_79_int = var_82_int; // 0x2e9 Mov
	return 2; // 0x2ea Return
}


func_1000(var_58_int)
{
	var_58_int = 4029; // 0x3e8 MovI
	return 0; // 0x3e9 Return
}


func_938(var_73_bool, var_74_object, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0; // 0x3aa PushV
	var_82_object = Obj(); // 0x3ab PushV
	func_925(var_82_object); // 0x3ac Call
	var_79_object = var_82_object; // 0x3ad Mov
	Find(var_75_int, var_80_object); // 0x3af ObjFunc
	var_87_bool = var_80_object == 0; // 0x3b1 Not
	if(var_87_bool == 0) goto Label_953; // 0x3b2 JumpB
	var_88_string = "Can't find diary parent with id: "; // 0x3b3 PushS
	var_89_int = var_88_string + var_75_int; // 0x3b4 Add
	Trace(var_89_int); // 0x3b5 Func
	var_73_bool = 0; // 0x3b7 MovB
	return 6; // 0x3b8 Return
	
Label_953:
	AddChild(var_74_object); // 0x3b9 ObjFunc
	var_90_string = "player_diary"; // 0x3bb PushS
	var_91_int = 1; // 0x3bc PushI
	SetVariable(var_90_string, var_91_int); // 0x3bd Func
	GetCategory(var_81_int); // 0x3bf ObjFunc
	SetDiarySection(var_81_int); // 0x3c1 Func
	var_73_bool = 0; // 0x3c3 MovB
	return 6; // 0x3c4 Return
}


func_1002(var_59_string)
{
	var_59_string = "ui/NPC_Black.png"; // 0x3ea MovS
	return 0; // 0x3eb Return
}


func_747(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x2eb PushV
	GetItemID(var_29_int); // 0x2ec ObjFunc
	var_32_string = "Category"; // 0x2ee PushS
	GetInvItemProperty(var_30_int, var_29_int, var_32_string); // 0x2ef Func
	AddItem(var_31_bool, var_24_object, var_30_int, var_25_int); // 0x2f1 ObjFunc
	var_33_bool = var_31_bool == 0; // 0x2f3 Not
	if(var_33_bool == 0) goto Label_759; // 0x2f4 JumpB
	DropItems(var_24_object, var_25_int); // 0x2f5 ObjFunc
	
Label_759:
	return 6; // 0x2f7 Return
}


func_1004(var_92_bool)
{
	var_92_bool = 0; // 0x3ec MovB
	return 0; // 0x3ed Return
}


func_877(var_121_bool)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0; var_127_bool = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_bool = 0; var_132_bool = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_bool = 0; var_138_int = 0; var_139_object = Obj(); var_140_int = 0; var_141_bool = 0; var_142_bool = 0; // 0x36d PushV
	var_143_int = 1; // 0x36e PushI
	GetItemCount(var_133_int, var_143_int); // 0x36f ObjFunc
	var_144_string = "bird_mask"; // 0x371 PushS
	GetInvItemByName(var_134_int, var_144_string); // 0x372 Func
	var_145_string = "bird_balahon"; // 0x374 PushS
	GetInvItemByName(var_135_int, var_145_string); // 0x375 Func
	var_136_bool = 0; // 0x377 MovB
	var_137_bool = 0; // 0x378 MovB
	var_138_int = 0; // 0x379 MovI
	
Label_890:
	var_146_bool = var_138_int < var_133_int; // 0x37a LT
	if(var_146_bool == 0) goto Label_918; // 0x37b JumpB
	var_147_int = 1; // 0x37c PushI
	GetItem(var_139_object, var_138_int, var_147_int); // 0x37d ObjFunc
	GetItemID(var_140_int); // 0x37f ObjFunc
	var_148_bool = var_140_int == var_134_int; // 0x381 Eq
	if(var_148_bool == 0) goto Label_906; // 0x382 JumpB
	var_149_int = 1; // 0x383 PushI
	IsItemSelected(var_141_bool, var_138_int, var_149_int); // 0x384 ObjFunc
	var_150_bool = var_141_bool; // 0x386 Push
	if(var_150_bool == 0) goto Label_905; // 0x387 JumpB
	var_136_bool = 1; // 0x388 MovB
	
Label_905:
	goto Label_914; // 0x389 Jump
	
Label_914:
	var_139_object = 0; // 0x392 SetNull
	var_151_int = 1; // 0x393 PushI
	var_138_int = var_138_int + var_151_int; // 0x394 Add2
	goto Label_890; // 0x395 Jump
	
Label_906:
	var_152_bool = var_140_int == var_135_int; // 0x38a Eq
	if(var_152_bool == 0) goto Label_914; // 0x38b JumpB
	var_153_int = 1; // 0x38c PushI
	IsItemSelected(var_142_bool, var_138_int, var_153_int); // 0x38d ObjFunc
	var_154_bool = var_142_bool; // 0x38f Push
	if(var_154_bool == 0) goto Label_914; // 0x390 JumpB
	var_137_bool = 1; // 0x391 MovB
	
Label_918:
	var_121_bool = 0; // 0x396 MovB
	var_155_bool = var_136_bool; // 0x397 Push
	if(var_155_bool == 0) goto Label_924; // 0x398 JumpB
	var_156_bool = var_137_bool; // 0x399 Push
	if(var_156_bool == 0) goto Label_924; // 0x39a JumpB
	var_121_bool = 1; // 0x39b MovB
	
Label_924:
	return 20; // 0x39c Return
}


func_760(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x2f8 PushV
	CreateInvItem(var_22_object); // 0x2f9 Func
	SetItemName(var_19_string); // 0x2fb ObjFunc
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0x2fd PushV
	var_23_object = var_18_object; // 0x2fe Mov
	var_24_object = var_22_object; // 0x2ff Mov
	var_25_int = var_20_int; // 0x300 Mov
	func_747(var_24_object, var_25_int); // 0x301 Call
	return 2; // 0x303 Return
}


func_817()
{
	var_42_bool = 0; var_43_string = ""; var_44_string = ""; // 0x332 PushV
	var_43_string = "quest_d7_01"; // 0x333 MovS
	var_44_string = "kill_player"; // 0x334 MovS
	func_773(var_42_bool, var_43_string, var_44_string); // 0x335 Call
	return 0; // 0x337 Return
}


func_824()
{
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x339 PushV
	var_61_string = "quest_d7_01"; // 0x33a MovS
	var_62_string = "sobor_teleport"; // 0x33b MovS
	func_773(var_60_bool, var_61_string, var_62_string); // 0x33c Call
	return 0; // 0x33e Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object; // 0x40 TMov
	var_1_object = var_69_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_75_int = 1; // 0x43 PushI
	if(var_75_int == 0) goto Label_179; // 0x44 JumpB
	var_76_bool = 0; // 0x45 PushV
	var_76_bool = 0; // 0x46 MovB
	var_77_bool = 0; var_78_object = Obj(); // 0x47 PushV
	var_78_object = var_1_object; // 0x48 MovT
	func_843(var_78_object); // 0x49 Call
	if(var_77_bool == 0) goto Label_82; // 0x4b JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x4c PushV
	var_86_object = var_1_object; // 0x4d MovT
	func_865(var_86_object); // 0x4e Call
	if(var_85_bool == 0) goto Label_82; // 0x50 JumpB
	var_76_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_76_bool == 0) goto Label_98; // 0x52 JumpB
	var_91_string = ""; // 0x53 PushV
	var_91_string = "Neutral"; // 0x54 MovS
	func_209(var_70_object, var_91_string); // 0x55 Call
	var_106_int = 12188; // 0x57 PushI
	SetMessage(var_106_int); // 0x58 TObjFunc
	ClearReplies(); // 0x5a TObjFunc
	var_107_int = 12189; // 0x5c PushI
	var_108_int = 14396; // 0x5d PushI
	var_109_int = 13344; // 0x5e PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x5f TObjFunc
	goto Label_179; // 0x61 Jump
	
Label_179:
	var_110_bool = 0; // 0xb3 PushV
	func_1004(var_110_bool); // 0xb4 Call
	if(var_110_bool == 0) goto Label_194; // 0xb6 JumpB
	
Label_183:
	lshWaitForAnimEnd(); // 0xb7 Func
	var_111_string = var_3_string; // 0xb9 PushT
	if(var_111_string == 0) goto Label_188; // 0xba JumpB
	goto Label_193; // 0xbb Jump
	
Label_193:
	goto Label_208; // 0xc1 Jump
	
Label_208:
	return 0; // 0xd0 Return
	
Label_188:
	var_112_string = ""; // 0xbc PushV
	var_112_string = var_2_object; // 0xbd MovT
	func_707(var_112_string); // 0xbe Call
	goto Label_183; // 0xc0 Jump
	
Label_194:
	var_113_string = "all"; // 0xc2 PushS
	var_114_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_113_string, var_114_string); // 0xc4 Func
	
Label_198:
	WaitForAnimEnd(); // 0xc6 Func
	var_115_string = var_3_string; // 0xc8 PushT
	if(var_115_string == 0) goto Label_203; // 0xc9 JumpB
	goto Label_208; // 0xca Jump
	
Label_203:
	var_116_string = "all"; // 0xcb PushS
	var_117_string = "idle"; // 0xcc PushS
	PlayAnimation(var_116_string, var_117_string); // 0xcd Func
	goto Label_198; // 0xcf Jump
	
Label_98:
	var_118_bool = 0; // 0x62 PushV
	var_118_bool = 0; // 0x63 MovB
	var_119_bool = 0; var_120_object = Obj(); // 0x64 PushV
	var_120_object = var_1_object; // 0x65 MovT
	func_855(var_119_bool, var_120_object); // 0x66 Call
	if(var_119_bool == 0) goto Label_111; // 0x68 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x69 PushV
	var_158_object = var_1_object; // 0x6a MovT
	func_831(var_158_object); // 0x6b Call
	if(var_157_bool == 0) goto Label_111; // 0x6d JumpB
	var_118_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_118_bool == 0) goto Label_147; // 0x6f JumpB
	var_163_string = ""; // 0x70 PushV
	var_163_string = "Neutral"; // 0x71 MovS
	func_209(var_70_object, var_163_string); // 0x72 Call
	var_164_int = 13197; // 0x74 PushI
	SetMessage(var_164_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_165_int = 13198; // 0x79 PushI
	var_166_int = 14433; // 0x7a PushI
	var_167_int = 14421; // 0x7b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x7c TObjFunc
	var_168_int = 13199; // 0x7e PushI
	var_169_int = 14428; // 0x7f PushI
	var_170_int = 14422; // 0x80 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x81 TObjFunc
	var_171_int = 13200; // 0x83 PushI
	var_172_int = 14424; // 0x84 PushI
	var_173_int = 14423; // 0x85 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x86 TObjFunc
	var_174_int = 13330; // 0x88 PushI
	var_175_int = -1; // 0x89 PushI
	var_176_int = 14562; // 0x8a PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x8b TObjFunc
	var_177_int = 13331; // 0x8d PushI
	var_178_int = -1; // 0x8e PushI
	var_179_int = 14563; // 0x8f PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x90 TObjFunc
	goto Label_179; // 0x92 Jump
	
Label_147:
	var_180_bool = 0; var_181_object = Obj(); // 0x93 PushV
	var_181_object = var_1_object; // 0x94 MovT
	func_831(var_181_object); // 0x95 Call
	if(var_180_bool == 0) goto Label_177; // 0x97 JumpB
	var_182_string = ""; // 0x98 PushV
	var_182_string = "Neutral"; // 0x99 MovS
	func_209(var_70_object, var_182_string); // 0x9a Call
	var_183_int = 13175; // 0x9c PushI
	SetMessage(var_183_int); // 0x9d TObjFunc
	ClearReplies(); // 0x9f TObjFunc
	var_184_int = 13177; // 0xa1 PushI
	var_185_int = 14398; // 0xa2 PushI
	var_186_int = 14397; // 0xa3 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xa4 TObjFunc
	var_187_int = 13195; // 0xa6 PushI
	var_188_int = 14411; // 0xa7 PushI
	var_189_int = 14417; // 0xa8 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0xa9 TObjFunc
	var_190_int = 13193; // 0xab PushI
	var_191_int = -1; // 0xac PushI
	var_192_int = 14415; // 0xad PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xae TObjFunc
	goto Label_179; // 0xb0 Jump
	
Label_177:
	return 0; // 0xb1 Return
}


