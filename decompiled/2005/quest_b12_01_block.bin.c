task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xd0 PushI
	if(var_8_int == 0) goto Label_605; // 0xd1 JumpB
	func_937(); // 0xd3 NEW_2
	var_10_int = 24053; // 0xd5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd6 Eq
	if(var_11_bool == 0) goto Label_231; // 0xd7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd8 PushV
	var_12_object = var_1_object; // 0xd9 MovT
	var_13_object = var_0_object; // 0xda MovT
	func_991(); // 0xdb NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xdd PushV
	var_16_object = var_1_object; // 0xde MovT
	var_17_object = var_0_object; // 0xdf MovT
	func_1009(); // 0xe0 NEW_2
	var_28_object = Obj(); var_29_object = Obj(); // 0xe2 PushV
	var_28_object = var_1_object; // 0xe3 MovT
	var_29_object = var_0_object; // 0xe4 MovT
	func_1026(); // 0xe5 NEW_2
	
Label_231:
	var_53_int = 41989; // 0xe7 PushI
	var_54_bool = var_7_bool == var_53_int; // 0xe8 Eq
	if(var_54_bool == 0) goto Label_249; // 0xe9 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xea PushV
	var_55_object = var_1_object; // 0xeb MovT
	var_56_object = var_0_object; // 0xec MovT
	func_997(); // 0xed NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xef PushV
	var_59_object = var_1_object; // 0xf0 MovT
	var_60_object = var_0_object; // 0xf1 MovT
	func_1009(); // 0xf2 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xf4 PushV
	var_61_object = var_1_object; // 0xf5 MovT
	var_62_object = var_0_object; // 0xf6 MovT
	func_1016(); // 0xf7 NEW_2
	
Label_249:
	var_71_int = 24059; // 0xf9 PushI
	var_72_bool = var_7_bool == var_71_int; // 0xfa Eq
	if(var_72_bool == 0) goto Label_267; // 0xfb JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xfc PushV
	var_73_object = var_1_object; // 0xfd MovT
	var_74_object = var_0_object; // 0xfe MovT
	func_1003(); // 0xff NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x101 PushV
	var_77_object = var_1_object; // 0x102 MovT
	var_78_object = var_0_object; // 0x103 MovT
	func_1009(); // 0x104 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x106 PushV
	var_79_object = var_1_object; // 0x107 MovT
	var_80_object = var_0_object; // 0x108 MovT
	func_1021(); // 0x109 NEW_2
	
Label_267:
	var_89_int = 42261; // 0x10b PushI
	var_90_bool = var_7_bool == var_89_int; // 0x10c Eq
	if(var_90_bool == 0) goto Label_285; // 0x10d JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x10e PushV
	var_91_object = var_1_object; // 0x10f MovT
	var_92_object = var_0_object; // 0x110 MovT
	func_1031(); // 0x111 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x113 PushV
	var_95_object = var_1_object; // 0x114 MovT
	var_96_object = var_0_object; // 0x115 MovT
	func_1009(); // 0x116 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x118 PushV
	var_97_object = var_1_object; // 0x119 MovT
	var_98_object = var_0_object; // 0x11a MovT
	func_1037(); // 0x11b NEW_2
	
Label_285:
	var_107_int = 24039; // 0x11d PushI
	var_108_bool = var_6_int == var_107_int; // 0x11e Eq
	if(var_108_bool == 0) goto Label_354; // 0x11f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x120 PushV
	var_110_object = var_1_object; // 0x121 MovT
	func_1042(var_110_object); // 0x122 NEW_2
	var_117_bool = var_109_bool == 0; // 0x124 Not
	if(var_117_bool == 0) goto Label_339; // 0x125 JumpB
	var_118_string = ""; // 0x126 PushV
	var_118_string = "Neutral"; // 0x127 MovS
	func_185(var_7_bool, var_118_string); // 0x128 NEW_2
	var_135_int = 522855; // 0x12a PushI
	SetMessage(var_135_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_136_int = 523022; // 0x12f PushI
	var_137_int = 24216; // 0x130 PushI
	var_138_int = 24215; // 0x131 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x132 TObjFunc
	var_139_int = 522876; // 0x134 PushI
	var_140_int = 33440; // 0x135 PushI
	var_141_int = 24060; // 0x136 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x137 TObjFunc
	var_142_bool = 0; var_143_object = Obj(); // 0x139 PushV
	var_143_object = var_1_object; // 0x13a MovT
	func_1054(var_143_object); // 0x13b NEW_2
	if(var_142_bool == 0) goto Label_323; // 0x13d JumpB
	var_148_int = 540014; // 0x13e PushI
	var_149_int = 41986; // 0x13f PushI
	var_150_int = 41985; // 0x140 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x141 TObjFunc
	
Label_323:
	var_151_bool = 0; var_152_object = Obj(); // 0x143 PushV
	var_152_object = var_1_object; // 0x144 MovT
	func_1066(var_152_object); // 0x145 NEW_2
	if(var_151_bool == 0) goto Label_333; // 0x147 JumpB
	var_157_int = 522878; // 0x148 PushI
	var_158_int = 33448; // 0x149 PushI
	var_159_int = 24064; // 0x14a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x14b TObjFunc
	
Label_333:
	var_160_int = 540279; // 0x14d PushI
	var_161_int = 42260; // 0x14e PushI
	var_162_int = 42259; // 0x14f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_163_string = ""; // 0x153 PushV
	var_163_string = "Neutral"; // 0x154 MovS
	func_185(var_7_bool, var_163_string); // 0x155 NEW_2
	var_164_int = 523170; // 0x157 PushI
	SetMessage(var_164_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_165_int = 523172; // 0x15c PushI
	var_166_int = -1; // 0x15d PushI
	var_167_int = 24374; // 0x15e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_168_int = 42260; // 0x162 PushI
	var_169_bool = var_6_int == var_168_int; // 0x163 Eq
	if(var_169_bool == 0) goto Label_372; // 0x164 JumpB
	var_170_string = ""; // 0x165 PushV
	var_170_string = "Neutral"; // 0x166 MovS
	func_185(var_7_bool, var_170_string); // 0x167 NEW_2
	var_171_int = 540280; // 0x169 PushI
	SetMessage(var_171_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_172_int = 540281; // 0x16e PushI
	var_173_int = -1; // 0x16f PushI
	var_174_int = 42261; // 0x170 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_175_int = 33448; // 0x174 PushI
	var_176_bool = var_6_int == var_175_int; // 0x175 Eq
	if(var_176_bool == 0) goto Label_390; // 0x176 JumpB
	var_177_string = ""; // 0x177 PushV
	var_177_string = "Neutral"; // 0x178 MovS
	func_185(var_7_bool, var_177_string); // 0x179 NEW_2
	var_178_int = 532048; // 0x17b PushI
	SetMessage(var_178_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_179_int = 532049; // 0x180 PushI
	var_180_int = 24055; // 0x181 PushI
	var_181_int = 33449; // 0x182 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_182_int = 24055; // 0x186 PushI
	var_183_bool = var_6_int == var_182_int; // 0x187 Eq
	if(var_183_bool == 0) goto Label_408; // 0x188 JumpB
	var_184_string = ""; // 0x189 PushV
	var_184_string = "Doubt"; // 0x18a MovS
	func_185(var_7_bool, var_184_string); // 0x18b NEW_2
	var_185_int = 522871; // 0x18d PushI
	SetMessage(var_185_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_186_int = 522875; // 0x192 PushI
	var_187_int = -1; // 0x193 PushI
	var_188_int = 24059; // 0x194 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_189_int = 41986; // 0x198 PushI
	var_190_bool = var_6_int == var_189_int; // 0x199 Eq
	if(var_190_bool == 0) goto Label_426; // 0x19a JumpB
	var_191_string = ""; // 0x19b PushV
	var_191_string = "Neutral"; // 0x19c MovS
	func_185(var_7_bool, var_191_string); // 0x19d NEW_2
	var_192_int = 540015; // 0x19f PushI
	SetMessage(var_192_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_193_int = 540016; // 0x1a4 PushI
	var_194_int = 41988; // 0x1a5 PushI
	var_195_int = 41987; // 0x1a6 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_196_int = 41988; // 0x1aa PushI
	var_197_bool = var_6_int == var_196_int; // 0x1ab Eq
	if(var_197_bool == 0) goto Label_444; // 0x1ac JumpB
	var_198_string = ""; // 0x1ad PushV
	var_198_string = "Doubt"; // 0x1ae MovS
	func_185(var_7_bool, var_198_string); // 0x1af NEW_2
	var_199_int = 540017; // 0x1b1 PushI
	SetMessage(var_199_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_200_int = 540018; // 0x1b6 PushI
	var_201_int = -1; // 0x1b7 PushI
	var_202_int = 41989; // 0x1b8 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_203_int = 33440; // 0x1bc PushI
	var_204_bool = var_6_int == var_203_int; // 0x1bd Eq
	if(var_204_bool == 0) goto Label_462; // 0x1be JumpB
	var_205_string = ""; // 0x1bf PushV
	var_205_string = "Neutral"; // 0x1c0 MovS
	func_185(var_7_bool, var_205_string); // 0x1c1 NEW_2
	var_206_int = 532040; // 0x1c3 PushI
	SetMessage(var_206_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_207_int = 532041; // 0x1c8 PushI
	var_208_int = 41997; // 0x1c9 PushI
	var_209_int = 33441; // 0x1ca PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_210_int = 41997; // 0x1ce PushI
	var_211_bool = var_6_int == var_210_int; // 0x1cf Eq
	if(var_211_bool == 0) goto Label_480; // 0x1d0 JumpB
	var_212_string = ""; // 0x1d1 PushV
	var_212_string = "Doubt"; // 0x1d2 MovS
	func_185(var_7_bool, var_212_string); // 0x1d3 NEW_2
	var_213_int = 540026; // 0x1d5 PushI
	SetMessage(var_213_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_214_int = 540027; // 0x1da PushI
	var_215_int = 33442; // 0x1db PushI
	var_216_int = 41998; // 0x1dc PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_217_int = 33442; // 0x1e0 PushI
	var_218_bool = var_6_int == var_217_int; // 0x1e1 Eq
	if(var_218_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_219_string = ""; // 0x1e3 PushV
	var_219_string = "Doubt"; // 0x1e4 MovS
	func_185(var_7_bool, var_219_string); // 0x1e5 NEW_2
	var_220_int = 532042; // 0x1e7 PushI
	SetMessage(var_220_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_221_int = 532043; // 0x1ec PushI
	var_222_int = 33446; // 0x1ed PushI
	var_223_int = 33443; // 0x1ee PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_224_int = 33446; // 0x1f2 PushI
	var_225_bool = var_6_int == var_224_int; // 0x1f3 Eq
	if(var_225_bool == 0) goto Label_521; // 0x1f4 JumpB
	var_226_string = ""; // 0x1f5 PushV
	var_226_string = "Doubt"; // 0x1f6 MovS
	func_185(var_7_bool, var_226_string); // 0x1f7 NEW_2
	var_227_int = 532046; // 0x1f9 PushI
	SetMessage(var_227_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_228_int = 532047; // 0x1fe PushI
	var_229_int = 24049; // 0x1ff PushI
	var_230_int = 33447; // 0x200 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x201 TObjFunc
	var_231_int = 540114; // 0x203 PushI
	var_232_int = 42082; // 0x204 PushI
	var_233_int = 42081; // 0x205 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x206 TObjFunc
	return 0; // 0x208 Return
	
Label_521:
	var_234_int = 42082; // 0x209 PushI
	var_235_bool = var_6_int == var_234_int; // 0x20a Eq
	if(var_235_bool == 0) goto Label_539; // 0x20b JumpB
	var_236_string = ""; // 0x20c PushV
	var_236_string = "Neutral"; // 0x20d MovS
	func_185(var_7_bool, var_236_string); // 0x20e NEW_2
	var_237_int = 540115; // 0x210 PushI
	SetMessage(var_237_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_238_int = 540116; // 0x215 PushI
	var_239_int = 42084; // 0x216 PushI
	var_240_int = 42083; // 0x217 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x218 TObjFunc
	return 0; // 0x21a Return
	
Label_539:
	var_241_int = 42084; // 0x21b PushI
	var_242_bool = var_6_int == var_241_int; // 0x21c Eq
	if(var_242_bool == 0) goto Label_557; // 0x21d JumpB
	var_243_string = ""; // 0x21e PushV
	var_243_string = "Neutral"; // 0x21f MovS
	func_185(var_7_bool, var_243_string); // 0x220 NEW_2
	var_244_int = 540117; // 0x222 PushI
	SetMessage(var_244_int); // 0x223 TObjFunc
	ClearReplies(); // 0x225 TObjFunc
	var_245_int = 540118; // 0x227 PushI
	var_246_int = 24049; // 0x228 PushI
	var_247_int = 42085; // 0x229 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x22a TObjFunc
	return 0; // 0x22c Return
	
Label_557:
	var_248_int = 24049; // 0x22d PushI
	var_249_bool = var_6_int == var_248_int; // 0x22e Eq
	if(var_249_bool == 0) goto Label_575; // 0x22f JumpB
	var_250_string = ""; // 0x230 PushV
	var_250_string = "Neutral"; // 0x231 MovS
	func_185(var_7_bool, var_250_string); // 0x232 NEW_2
	var_251_int = 522865; // 0x234 PushI
	SetMessage(var_251_int); // 0x235 TObjFunc
	ClearReplies(); // 0x237 TObjFunc
	var_252_int = 522869; // 0x239 PushI
	var_253_int = -1; // 0x23a PushI
	var_254_int = 24053; // 0x23b PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x23c TObjFunc
	return 0; // 0x23e Return
	
Label_575:
	var_255_int = 24216; // 0x23f PushI
	var_256_bool = var_6_int == var_255_int; // 0x240 Eq
	if(var_256_bool == 0) goto Label_593; // 0x241 JumpB
	var_257_string = ""; // 0x242 PushV
	var_257_string = "Neutral"; // 0x243 MovS
	func_185(var_7_bool, var_257_string); // 0x244 NEW_2
	var_258_int = 523023; // 0x246 PushI
	SetMessage(var_258_int); // 0x247 TObjFunc
	ClearReplies(); // 0x249 TObjFunc
	var_259_int = 523024; // 0x24b PushI
	var_260_int = -1; // 0x24c PushI
	var_261_int = 24217; // 0x24d PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x24e TObjFunc
	return 0; // 0x250 Return
	
Label_593:
	var_3_string = 1; // 0x251 TMovB
	var_262_bool = 0; // 0x252 PushV
	func_1196(var_262_bool); // 0x253 NEW_2
	if(var_262_bool == 0) goto Label_601; // 0x255 JumpB
	lshStopAnimation(); // 0x256 Func
	goto Label_603; // 0x258 Jump
	
Label_603:
	return 0; // 0x25b Return
	
Label_601:
	StopAnimation(); // 0x259 Func
	
Label_605:
	return 0; // 0x25d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x263 PushV
	var_8_object = var_6_object; // 0x264 Mov
	TaskCall(0); // 0x265 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x266 NEW_2
	TaskReturn(); // 0x267 TaskReturn
	return 0; // 0x269 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x26e PushV
	var_9_string = "cleanup"; // 0x26f PushS
	var_10_bool = var_6_string == var_9_string; // 0x270 Eq
	if(var_10_bool == 0) goto Label_645; // 0x271 JumpB
	var_0_object = 1; // 0x272 TMovB
	IsLoaded(var_8_bool); // 0x273 Func
	var_11_bool = 0; // 0x275 PushV
	var_11_bool = 0; // 0x276 MovB
	var_12_bool = var_8_bool == 0; // 0x277 Not
	if(var_12_bool == 0) goto Label_638; // 0x278 JumpB
	var_13_bool = 0; // 0x279 PushV
	func_666(var_13_bool); // 0x27a NEW_2
	if(var_13_bool == 0) goto Label_638; // 0x27c JumpB
	var_11_bool = 1; // 0x27d MovB
	
Label_638:
	if(var_11_bool == 0) goto Label_644; // 0x27e JumpB
	var_14_object = Obj(); // 0x27f PushV
	func_944(var_14_object); // 0x280 NEW_2
	RemoveActor(var_14_object); // 0x282 Func
	
Label_644:
	goto Label_649; // 0x284 Jump
	
Label_649:
	return 2; // 0x289 Return
	
Label_645:
	var_17_string = "restore"; // 0x285 PushS
	var_18_bool = var_6_string == var_17_string; // 0x286 Eq
	if(var_18_bool == 0) goto Label_649; // 0x287 JumpB
	var_0_object = 0; // 0x288 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x28a PushV
	var_6_bool = 0; // 0x28b MovB
	var_7_object = var_0_object; // 0x28c PushT
	if(var_7_object == 0) goto Label_659; // 0x28d JumpB
	var_8_bool = 0; // 0x28e PushV
	func_666(var_8_bool); // 0x28f NEW_2
	if(var_8_bool == 0) goto Label_659; // 0x291 JumpB
	var_6_bool = 1; // 0x292 MovB
	
Label_659:
	if(var_6_bool == 0) goto Label_665; // 0x293 JumpB
	var_9_object = Obj(); // 0x294 PushV
	func_944(var_9_object); // 0x295 NEW_2
	RemoveActor(var_9_object); // 0x297 Func
	
Label_665:
	return 0; // 0x299 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_618(); // 0x25f NEW_2
	return 0; // 0x261 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_668(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1190(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1188(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1192(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1194(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1171(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_944(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_753(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_17_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_8_object; // 0x47 Mov
	func_736(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1026()
{
	func_1104(); // 0x404 NEW_2
	return 0; // 0x406 Return
}


func_1031()
{
	var_93_string = "game_final"; // 0x408 PushS
	var_94_int = 4; // 0x409 PushI
	SetVariable(var_93_string, var_94_int); // 0x40a Func
	return 0; // 0x40c Return
}


func_907(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x38b PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x38c Func
	var_203_bool = var_200_bool; // 0x38e Push
	if(var_203_bool == 0) goto Label_917; // 0x38f JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x390 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x392 Func
	goto Label_921; // 0x394 Jump
	
Label_921:
	return 6; // 0x399 Return
	
Label_917:
	var_204_string = "Can't find lsh animation : "; // 0x395 PushS
	var_205_int = var_204_string + var_193_string; // 0x396 Add
	Trace(var_205_int); // 0x397 Func
}


func_1037()
{
	func_1078(); // 0x40f NEW_2
	return 0; // 0x411 Return
}


func_1042(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x413 PushV
	var_183_string = "game_final"; // 0x414 MovS
	func_960(var_182_int, var_183_string); // 0x415 NEW_2
	var_186_int = 0; // 0x417 PushI
	var_187_bool = var_182_int != var_186_int; // 0x418 Neq
	if(var_187_bool == 0) goto Label_1052; // 0x419 JumpB
	var_180_bool = 1; // 0x41a MovB
	return 0; // 0x41b Return
	
Label_1052:
	var_180_bool = 0; // 0x41c MovB
	return 0; // 0x41d Return
}


func_1171(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x493 PushV
	var_72_string = "branch"; // 0x494 PushS
	GetVariable(var_72_string, var_71_int); // 0x495 Func
	var_73_int = 0; // 0x497 PushI
	var_74_bool = var_71_int == var_73_int; // 0x498 Eq
	if(var_74_bool == 0) goto Label_1181; // 0x499 JumpB
	var_69_int = 1; // 0x49a MovI
	return 2; // 0x49b Return
	
Label_1181:
	var_75_int = 1; // 0x49d PushI
	var_76_bool = var_71_int == var_75_int; // 0x49e Eq
	if(var_76_bool == 0) goto Label_1186; // 0x49f JumpB
	var_69_int = 2; // 0x4a0 MovI
	return 2; // 0x4a1 Return
	
Label_1186:
	var_69_int = 3; // 0x4a2 MovI
	return 2; // 0x4a3 Return
}


func_666(var_8_bool)
{
	var_8_bool = 1; // 0x29a MovB
	return 0; // 0x29b Return
}


func_922(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x39a PushV
	var_116_bool = 0; // 0x39b PushV
	func_1196(var_116_bool); // 0x39c NEW_2
	if(var_116_bool == 0) goto Label_935; // 0x39e JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x39f Func
	var_117_bool = var_115_bool; // 0x3a1 Push
	if(var_117_bool == 0) goto Label_935; // 0x3a2 JumpB
	lshPlaySpeech(var_113_string); // 0x3a3 Func
	var_112_bool = 1; // 0x3a5 MovB
	return 2; // 0x3a6 Return
	
Label_935:
	var_112_bool = 0; // 0x3a7 MovB
	return 2; // 0x3a8 Return
}


func_668(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x29c PushV
	GetPosition(var_31_cvector); // 0x29d ObjFunc
	GetEyesHeight(var_30_float); // 0x29f ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2a1 PushE
	var_39_float = var_39_float + var_30_float; // 0x2a2 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2a3 PopE
	GetPosition(var_32_cvector); // 0x2a4 Func
	GetEyesHeight(var_30_float); // 0x2a6 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2a8 PushE
	var_40_float = var_40_float + var_30_float; // 0x2a9 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2aa PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x2ab Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x2ac PushE
	var_41_float = 0; // 0x2ad MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x2ae PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x2af Or
	var_43_float = sqrt(var_42_int); // 0x2b0 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x2b1 Div2
	var_34_cvector = -var_33_cvector; // 0x2b2 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2b3 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2b4 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x2b5 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x2b6 Xor2
	func_950(var_45_cvector, var_46_cvector); // 0x2b7 NEW_2
	var_53_int = 25; // 0x2b9 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x2ba Mult
	var_55_int = var_44_float + var_54_float; // 0x2bb Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x2bc PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x2bd Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x2be Add2
	IsOverrideActive(var_37_bool); // 0x2bf Func
	var_57_bool = var_37_bool; // 0x2c1 Push
	if(var_57_bool == 0) goto Label_709; // 0x2c2 JumpB
	var_18_bool = 0; // 0x2c3 MovB
	return 18; // 0x2c4 Return
	
Label_709:
	StopWorld(); // 0x2c5 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x2c7 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x2c9 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x2ca PushE
	Rotate(var_58_float, var_59_float); // 0x2cb Func
	var_60_bool = 0; // 0x2cd PushV
	func_1196(var_60_bool); // 0x2ce NEW_2
	if(var_60_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_730; // 0x2d1 Jump
	
Label_730:
	CameraWaitForPlayFinish(); // 0x2da Func
	ResumeWorld(); // 0x2dc Func
	var_18_bool = 1; // 0x2de MovB
	return 18; // 0x2df Return
	
Label_722:
	var_61_string = "head"; // 0x2d2 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x2d3 Func
	var_62_bool = var_38_bool; // 0x2d5 Push
	if(var_62_bool == 0) goto Label_730; // 0x2d6 JumpB
	var_63_string = "head"; // 0x2d7 PushS
	LookAsyncCamera(var_63_string); // 0x2d8 Func
}


func_1054(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x41f PushV
	var_216_string = "b12q01DankoInSobor"; // 0x420 MovS
	func_960(var_215_int, var_216_string); // 0x421 NEW_2
	var_217_int = 0; // 0x423 PushI
	var_218_bool = var_215_int != var_217_int; // 0x424 Neq
	if(var_218_bool == 0) goto Label_1064; // 0x425 JumpB
	var_213_bool = 1; // 0x426 MovB
	return 0; // 0x427 Return
	
Label_1064:
	var_213_bool = 0; // 0x428 MovB
	return 0; // 0x429 Return
}


func_1188(var_66_int)
{
	var_66_int = 515532; // 0x4a4 MovI
	return 0; // 0x4a5 Return
}


func_1190(var_65_int)
{
	var_65_int = 514840; // 0x4a6 MovI
	return 0; // 0x4a7 Return
}


func_1192(var_67_string)
{
	var_67_string = "ui/NPC_Block.png"; // 0x4a8 MovS
	return 0; // 0x4a9 Return
}


func_937()
{
	var_9_bool = 0; // 0x3a9 PushV
	func_1196(var_9_bool); // 0x3aa NEW_2
	if(var_9_bool == 0) goto Label_943; // 0x3ac JumpB
	lshStopSpeech(); // 0x3ad Func
	
Label_943:
	return 0; // 0x3af Return
}


func_1194(var_68_string)
{
	var_68_string = "ui/NPC_Block_b.png"; // 0x4aa MovS
	return 0; // 0x4ab Return
}


func_1066(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x42b PushV
	var_225_string = "b12q01KlaraInSobor"; // 0x42c MovS
	func_960(var_224_int, var_225_string); // 0x42d NEW_2
	var_226_int = 0; // 0x42f PushI
	var_227_bool = var_224_int != var_226_int; // 0x430 Neq
	if(var_227_bool == 0) goto Label_1076; // 0x431 JumpB
	var_222_bool = 1; // 0x432 MovB
	return 0; // 0x433 Return
	
Label_1076:
	var_222_bool = 0; // 0x434 MovB
	return 0; // 0x435 Return
}


func_1196(var_60_bool)
{
	var_60_bool = 1; // 0x4ac MovB
	return 0; // 0x4ad Return
}


func_811(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x32b PushV
	var_96_string = "c"; // 0x32c MovS
	var_97_int = 0; // 0x32d MovI
	
Label_814:
	var_101_int = 1; // 0x32e PushI
	if(var_101_int == 0) goto Label_827; // 0x32f JumpB
	var_102_int = 1; // 0x330 PushI
	var_103_int = var_97_int + var_102_int; // 0x331 Add
	var_104_int = var_96_string + var_103_int; // 0x332 Add
	HasProperty(var_104_int, var_98_bool); // 0x333 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x335 Not
	if(var_105_bool == 0) goto Label_824; // 0x336 JumpB
	goto Label_827; // 0x337 Jump
	
Label_827:
	var_106_bool = var_97_int == 0; // 0x33b Not
	if(var_106_bool == 0) goto Label_831; // 0x33c JumpB
	var_89_bool = 0; // 0x33d MovB
	return 10; // 0x33e Return
	
Label_831:
	var_99_int = 0; // 0x33f MovI
	var_107_int = 1; // 0x340 PushI
	var_108_bool = var_97_int > var_107_int; // 0x341 GT
	if(var_108_bool == 0) goto Label_837; // 0x342 JumpB
	irand(var_99_int, var_97_int); // 0x343 Func
	
Label_837:
	var_109_int = 1; // 0x345 PushI
	var_110_int = var_99_int + var_109_int; // 0x346 Add
	var_111_int = var_96_string + var_110_int; // 0x347 Add
	GetProperty(var_111_int, var_100_string); // 0x348 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x34a PushV
	var_113_string = var_100_string; // 0x34b Mov
	func_922(var_112_bool, var_113_string); // 0x34c NEW_2
	var_89_bool = var_112_bool; // 0x34d Mov
	return 10; // 0x34f Return
	
Label_824:
	var_118_int = 1; // 0x338 PushI
	var_97_int = var_97_int + var_118_int; // 0x339 Add2
	goto Label_814; // 0x33a Jump
}


func_944(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3b0 PushV
	self(var_11_object); // 0x3b1 Func
	var_9_object = var_11_object; // 0x3b3 Mov
	return 2; // 0x3b4 Return
}


func_950(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x3b6 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x3b7 Or
	var_49_float = sqrt(var_50_int); // 0x3b8 Sqrt2
	var_51_float = 0.0; // 0x3b9 PushF
	var_52_bool = var_49_float < var_51_float; // 0x3ba LT
	if(var_52_bool == 0) goto Label_958; // 0x3bb JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3bc MovV
	return 2; // 0x3bd Return
	
Label_958:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3be Div2
	return 2; // 0x3bf Return
}


func_1078()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x436 PushV
	var_101_int = 772; // 0x437 PushI
	var_102_int = 1; // 0x438 PushI
	var_103_int = 540273; // 0x439 PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x43a Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x43c PushV
	var_105_object = var_100_object; // 0x43d Mov
	var_106_int = 613; // 0x43e MovI
	func_1143(var_104_bool, var_105_object, var_106_int); // 0x43f NEW_2
	return 2; // 0x441 Return
}


func_185(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xba PushV
	func_1196(var_190_bool); // 0xbb NEW_2
	var_191_bool = var_190_bool == 0; // 0xbd Not
	if(var_191_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_192_bool = var_189_string == var_2_object; // 0xc0 Eq
	if(var_192_bool == 0) goto Label_195; // 0xc1 JumpB
	return 0; // 0xc2 Return
	
Label_195:
	var_193_string = ""; var_194_bool = 0; // 0xc3 PushV
	var_193_string = var_189_string; // 0xc4 Mov
	var_195_string = ""; // 0xc5 PushS
	var_196_bool = var_189_string == var_195_string; // 0xc6 Eq
	if(var_196_bool == 0) goto Label_202; // 0xc7 JumpB
	var_194_bool = 0; // 0xc8 MovB
	goto Label_203; // 0xc9 Jump
	
Label_203:
	func_907(var_193_string, var_194_bool); // 0xcb NEW_2
	var_2_object = var_189_string; // 0xcd TMov
	return 0; // 0xce Return
	
Label_202:
	var_194_bool = 1; // 0xca MovB
}


func_960(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x3c0 PushV
	GetVariable(var_183_string, var_185_int); // 0x3c1 Func
	var_182_int = var_185_int; // 0x3c3 Mov
	return 2; // 0x3c4 Return
}


func_1091()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x443 PushV
	var_83_int = 618; // 0x444 PushI
	var_84_int = 1; // 0x445 PushI
	var_85_int = 532007; // 0x446 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x447 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x449 PushV
	var_87_object = var_82_object; // 0x44a Mov
	var_88_int = 613; // 0x44b MovI
	func_1143(var_86_bool, var_87_object, var_88_int); // 0x44c NEW_2
	return 2; // 0x44e Return
}


func_965(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3c5 PushV
	FindActor(var_21_object, var_18_string); // 0x3c6 Func
	var_22_bool = var_21_object == 0; // 0x3c8 Not
	if(var_22_bool == 0) goto Label_977; // 0x3c9 JumpB
	var_23_string = "Door "; // 0x3ca PushS
	var_24_int = var_23_string + var_18_string; // 0x3cb Add
	var_25_string = " not found"; // 0x3cc PushS
	var_26_int = var_24_int + var_25_string; // 0x3cd Add
	Trace(var_26_int); // 0x3ce Func
	goto Label_980; // 0x3d0 Jump
	
Label_980:
	return 2; // 0x3d4 Return
	
Label_977:
	var_27_string = "locked"; // 0x3d1 PushS
	SetProperty(var_27_string, var_19_bool); // 0x3d2 ObjFunc
}


func_848(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x350 PushV
	var_132_string = "d"; // 0x351 PushS
	var_133_int = 0; // 0x352 PushV
	func_982(var_133_int); // 0x353 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x355 Add
	var_140_string = "m"; // 0x356 PushS
	var_127_string = var_139_int + var_140_string; // 0x357 Add2
	var_128_int = 0; // 0x358 MovI
	
Label_857:
	var_141_int = 1; // 0x359 PushI
	if(var_141_int == 0) goto Label_870; // 0x35a JumpB
	var_142_int = 1; // 0x35b PushI
	var_143_int = var_128_int + var_142_int; // 0x35c Add
	var_144_int = var_127_string + var_143_int; // 0x35d Add
	HasProperty(var_144_int, var_129_bool); // 0x35e ObjFunc
	var_145_bool = var_129_bool == 0; // 0x360 Not
	if(var_145_bool == 0) goto Label_867; // 0x361 JumpB
	goto Label_870; // 0x362 Jump
	
Label_870:
	var_146_bool = var_128_int == 0; // 0x366 Not
	if(var_146_bool == 0) goto Label_874; // 0x367 JumpB
	var_120_bool = 0; // 0x368 MovB
	return 10; // 0x369 Return
	
Label_874:
	var_130_int = 0; // 0x36a MovI
	var_147_int = 1; // 0x36b PushI
	var_148_bool = var_128_int > var_147_int; // 0x36c GT
	if(var_148_bool == 0) goto Label_880; // 0x36d JumpB
	irand(var_130_int, var_128_int); // 0x36e Func
	
Label_880:
	var_149_int = 1; // 0x370 PushI
	var_150_int = var_130_int + var_149_int; // 0x371 Add
	var_151_int = var_127_string + var_150_int; // 0x372 Add
	GetProperty(var_151_int, var_131_string); // 0x373 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x375 PushV
	var_153_string = var_131_string; // 0x376 Mov
	func_922(var_152_bool, var_153_string); // 0x377 NEW_2
	var_120_bool = var_152_bool; // 0x378 Mov
	return 10; // 0x37a Return
	
Label_867:
	var_154_int = 1; // 0x363 PushI
	var_128_int = var_128_int + var_154_int; // 0x364 Add2
	goto Label_857; // 0x365 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_155; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_1042(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_138; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_185(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 522855; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_int = 523022; // 0x66 PushI
	var_208_int = 24216; // 0x67 PushI
	var_209_int = 24215; // 0x68 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x69 TObjFunc
	var_210_int = 522876; // 0x6b PushI
	var_211_int = 33440; // 0x6c PushI
	var_212_int = 24060; // 0x6d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6e TObjFunc
	var_213_bool = 0; var_214_object = Obj(); // 0x70 PushV
	var_214_object = var_1_object; // 0x71 MovT
	func_1054(var_214_object); // 0x72 NEW_2
	if(var_213_bool == 0) goto Label_122; // 0x74 JumpB
	var_219_int = 540014; // 0x75 PushI
	var_220_int = 41986; // 0x76 PushI
	var_221_int = 41985; // 0x77 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x78 TObjFunc
	
Label_122:
	var_222_bool = 0; var_223_object = Obj(); // 0x7a PushV
	var_223_object = var_1_object; // 0x7b MovT
	func_1066(var_223_object); // 0x7c NEW_2
	if(var_222_bool == 0) goto Label_132; // 0x7e JumpB
	var_228_int = 522878; // 0x7f PushI
	var_229_int = 33448; // 0x80 PushI
	var_230_int = 24064; // 0x81 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x82 TObjFunc
	
Label_132:
	var_231_int = 540279; // 0x84 PushI
	var_232_int = 42260; // 0x85 PushI
	var_233_int = 42259; // 0x86 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x87 TObjFunc
	goto Label_155; // 0x89 Jump
	
Label_155:
	var_234_bool = 0; // 0x9b PushV
	func_1196(var_234_bool); // 0x9c NEW_2
	if(var_234_bool == 0) goto Label_170; // 0x9e JumpB
	
Label_159:
	lshWaitForAnimEnd(); // 0x9f Func
	var_235_string = var_3_string; // 0xa1 PushT
	if(var_235_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_169:
	goto Label_184; // 0xa9 Jump
	
Label_184:
	return 0; // 0xb8 Return
	
Label_164:
	var_236_string = ""; // 0xa4 PushV
	var_236_string = var_2_object; // 0xa5 MovT
	func_891(var_236_string); // 0xa6 NEW_2
	goto Label_159; // 0xa8 Jump
	
Label_170:
	var_247_string = "all"; // 0xaa PushS
	var_248_string = "idle"; // 0xab PushS
	PlayAnimation(var_247_string, var_248_string); // 0xac Func
	
Label_174:
	WaitForAnimEnd(); // 0xae Func
	var_249_string = var_3_string; // 0xb0 PushT
	if(var_249_string == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_179:
	var_250_string = "all"; // 0xb3 PushS
	var_251_string = "idle"; // 0xb4 PushS
	PlayAnimation(var_250_string, var_251_string); // 0xb5 Func
	goto Label_174; // 0xb7 Jump
	
Label_138:
	var_252_string = ""; // 0x8a PushV
	var_252_string = "Neutral"; // 0x8b MovS
	func_185(var_174_object, var_252_string); // 0x8c NEW_2
	var_253_int = 523170; // 0x8e PushI
	SetMessage(var_253_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_254_int = 523172; // 0x93 PushI
	var_255_int = -1; // 0x94 PushI
	var_256_int = 24374; // 0x95 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
}


func_1104()
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x450 PushV
	var_32_int = 616; // 0x451 PushI
	var_33_int = 1; // 0x452 PushI
	var_34_int = 532005; // 0x453 PushI
	CreateDiaryEntry(var_31_object, var_32_int, var_33_int, var_34_int); // 0x454 Func
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; // 0x456 PushV
	var_36_object = var_31_object; // 0x457 Mov
	var_37_int = 613; // 0x458 MovI
	func_1143(var_35_bool, var_36_object, var_37_int); // 0x459 NEW_2
	return 2; // 0x45b Return
}


func_982(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x3d6 PushV
	GetGameTime(var_135_float); // 0x3d7 Func
	var_136_int = 1; // 0x3d9 PushI
	var_137_int = 0; // 0x3da PushV
	var_138_int = 24; // 0x3db PushI
	var_137_int = var_135_float / var_135_float; // 0x3dc Div2
	var_133_int = var_136_int + var_137_int; // 0x3dd Add2
	return 2; // 0x3de Return
}


func_1117()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x45d PushV
	var_65_int = 617; // 0x45e PushI
	var_66_int = 1; // 0x45f PushI
	var_67_int = 532006; // 0x460 PushI
	CreateDiaryEntry(var_64_object, var_65_int, var_66_int, var_67_int); // 0x461 Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0x463 PushV
	var_69_object = var_64_object; // 0x464 Mov
	var_70_int = 613; // 0x465 MovI
	func_1143(var_68_bool, var_69_object, var_70_int); // 0x466 NEW_2
	return 2; // 0x468 Return
}


func_991()
{
	var_14_string = "game_final"; // 0x3e0 PushS
	var_15_int = 1; // 0x3e1 PushI
	SetVariable(var_14_string, var_15_int); // 0x3e2 Func
	return 0; // 0x3e4 Return
}


func_736()
{
	var_259_bool = 0; var_260_bool = 0; // 0x2e0 PushV
	CameraSwitchToNormal(); // 0x2e1 Func
	var_261_bool = 0; // 0x2e3 PushV
	func_1196(var_261_bool); // 0x2e4 NEW_2
	if(var_261_bool == 0) goto Label_744; // 0x2e6 JumpB
	goto Label_752; // 0x2e7 Jump
	
Label_752:
	return 2; // 0x2f0 Return
	
Label_744:
	var_262_string = "head"; // 0x2e8 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x2e9 Func
	var_263_bool = var_260_bool; // 0x2eb Push
	if(var_263_bool == 0) goto Label_752; // 0x2ec JumpB
	var_264_string = "head"; // 0x2ed PushS
	UnlookAsync(var_264_string); // 0x2ee Func
}


func_997()
{
	var_57_string = "game_final"; // 0x3e6 PushS
	var_58_int = 2; // 0x3e7 PushI
	SetVariable(var_57_string, var_58_int); // 0x3e8 Func
	return 0; // 0x3ea Return
}


func_618()
{
	
Label_618:
	Hold(); // 0x26a Func
	goto Label_618; // 0x26c Jump
}


func_1003()
{
	var_75_string = "game_final"; // 0x3ec PushS
	var_76_int = 3; // 0x3ed PushI
	SetVariable(var_75_string, var_76_int); // 0x3ee Func
	return 0; // 0x3f0 Return
}


func_1130(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x46a PushV
	GetDiaryRoot(var_46_object); // 0x46b Func
	var_47_bool = var_46_object == 0; // 0x46d Not
	if(var_47_bool == 0) goto Label_1140; // 0x46e JumpB
	var_48_string = "Can't retrieve diary root"; // 0x46f PushS
	Trace(var_48_string); // 0x470 Func
	var_44_object = 0; // 0x472 MovB
	return 2; // 0x473 Return
	
Label_1140:
	var_44_object = var_46_object; // 0x474 Mov
	return 2; // 0x475 Return
}


func_753(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2f1 PushV
	var_87_string = "voice_common"; // 0x2f2 PushS
	GetVariable(var_87_string, var_85_int); // 0x2f3 Func
	var_88_int = var_85_int; // 0x2f5 Push
	if(var_88_int == 0) goto Label_791; // 0x2f6 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2f7 PushV
	var_90_object = var_79_object; // 0x2f8 Mov
	func_811(var_90_object); // 0x2f9 NEW_2
	var_119_bool = var_89_bool == 0; // 0x2fb Not
	if(var_119_bool == 0) goto Label_773; // 0x2fc JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2fd PushV
	var_121_object = var_79_object; // 0x2fe Mov
	func_848(var_121_object); // 0x2ff NEW_2
	var_155_bool = var_120_bool == 0; // 0x301 Not
	if(var_155_bool == 0) goto Label_773; // 0x302 JumpB
	var_78_bool = 0; // 0x303 MovB
	return 4; // 0x304 Return
	
Label_773:
	var_156_int = 2; // 0x305 PushI
	irand(var_86_int, var_156_int); // 0x306 Func
	var_157_int = var_86_int; // 0x308 Push
	if(var_157_int == 0) goto Label_786; // 0x309 JumpB
	var_158_string = "voice_common"; // 0x30a PushS
	var_159_int = 1; // 0x30b PushI
	var_160_int = var_85_int + var_159_int; // 0x30c Add
	var_161_int = 3; // 0x30d PushI
	var_162_int = var_160_int / var_161_int; // 0x30e Mod
	SetVariable(var_158_string, var_162_int); // 0x30f Func
	goto Label_790; // 0x311 Jump
	
Label_790:
	goto Label_809; // 0x316 Jump
	
Label_809:
	var_78_bool = 1; // 0x329 MovB
	return 4; // 0x32a Return
	
Label_786:
	var_163_string = "voice_common"; // 0x312 PushS
	var_164_int = 0; // 0x313 PushI
	SetVariable(var_163_string, var_164_int); // 0x314 Func
	
Label_791:
	var_165_bool = 0; var_166_object = Obj(); // 0x317 PushV
	var_166_object = var_79_object; // 0x318 Mov
	func_848(var_166_object); // 0x319 NEW_2
	var_167_bool = var_165_bool == 0; // 0x31b Not
	if(var_167_bool == 0) goto Label_805; // 0x31c JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x31d PushV
	var_169_object = var_79_object; // 0x31e Mov
	func_811(var_169_object); // 0x31f NEW_2
	var_170_bool = var_168_bool == 0; // 0x321 Not
	if(var_170_bool == 0) goto Label_805; // 0x322 JumpB
	var_78_bool = 0; // 0x323 MovB
	return 4; // 0x324 Return
	
Label_805:
	var_171_string = "voice_common"; // 0x325 PushS
	var_172_int = 1; // 0x326 PushI
	SetVariable(var_171_string, var_172_int); // 0x327 Func
}


func_1009()
{
	var_18_string = ""; var_19_bool = 0; // 0x3f2 PushV
	var_18_string = "isobor@door1"; // 0x3f3 MovS
	var_19_bool = 0; // 0x3f4 MovB
	func_965(var_18_string, var_19_bool); // 0x3f5 NEW_2
	return 0; // 0x3f7 Return
}


func_1143(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; // 0x477 PushV
	var_44_object = Obj(); // 0x478 PushV
	func_1130(var_44_object); // 0x479 NEW_2
	var_41_object = var_44_object; // 0x47a Mov
	Find(var_37_int, var_42_object); // 0x47c ObjFunc
	var_49_bool = var_42_object == 0; // 0x47e Not
	if(var_49_bool == 0) goto Label_1158; // 0x47f JumpB
	var_50_string = "Can't find diary parent with id: "; // 0x480 PushS
	var_51_int = var_50_string + var_37_int; // 0x481 Add
	Trace(var_51_int); // 0x482 Func
	var_35_bool = 0; // 0x484 MovB
	return 6; // 0x485 Return
	
Label_1158:
	AddChild(var_36_object); // 0x486 ObjFunc
	var_52_int = 7; // 0x488 PushI
	SendWorldWndMessage(var_52_int); // 0x489 Func
	GetCategory(var_43_int); // 0x48b ObjFunc
	SetDiarySection(var_43_int); // 0x48d Func
	var_35_bool = 0; // 0x48f MovB
	return 6; // 0x490 Return
}


func_1016()
{
	func_1117(); // 0x3fa NEW_2
	return 0; // 0x3fc Return
}


func_891(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x37b PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x37c Func
	var_243_bool = var_240_bool; // 0x37e Push
	if(var_243_bool == 0) goto Label_902; // 0x37f JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x380 Func
	var_244_bool = 0; // 0x382 PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x383 Func
	goto Label_906; // 0x385 Jump
	
Label_906:
	return 6; // 0x38a Return
	
Label_902:
	var_245_string = "Can't find lsh animation : "; // 0x386 PushS
	var_246_int = var_245_string + var_236_string; // 0x387 Add
	Trace(var_246_int); // 0x388 Func
}


func_1021()
{
	func_1091(); // 0x3ff NEW_2
	return 0; // 0x401 Return
}


