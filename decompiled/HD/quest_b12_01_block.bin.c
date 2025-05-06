task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xd0 PushI
	if(var_8_int == 0) goto Label_605; // 0xd1 JumpB
	func_939(); // 0xd3 NEW_2
	var_10_int = 24053; // 0xd5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd6 Eq
	if(var_11_bool == 0) goto Label_231; // 0xd7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd8 PushV
	var_12_object = var_1_object; // 0xd9 MovT
	var_13_object = var_0_object; // 0xda MovT
	func_993(); // 0xdb NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xdd PushV
	var_16_object = var_1_object; // 0xde MovT
	var_17_object = var_0_object; // 0xdf MovT
	func_1011(); // 0xe0 NEW_2
	var_28_object = Obj(); var_29_object = Obj(); // 0xe2 PushV
	var_28_object = var_1_object; // 0xe3 MovT
	var_29_object = var_0_object; // 0xe4 MovT
	func_1028(); // 0xe5 NEW_2
	
Label_231:
	var_53_int = 41989; // 0xe7 PushI
	var_54_bool = var_7_bool == var_53_int; // 0xe8 Eq
	if(var_54_bool == 0) goto Label_249; // 0xe9 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xea PushV
	var_55_object = var_1_object; // 0xeb MovT
	var_56_object = var_0_object; // 0xec MovT
	func_999(); // 0xed NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xef PushV
	var_59_object = var_1_object; // 0xf0 MovT
	var_60_object = var_0_object; // 0xf1 MovT
	func_1011(); // 0xf2 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xf4 PushV
	var_61_object = var_1_object; // 0xf5 MovT
	var_62_object = var_0_object; // 0xf6 MovT
	func_1018(); // 0xf7 NEW_2
	
Label_249:
	var_71_int = 24059; // 0xf9 PushI
	var_72_bool = var_7_bool == var_71_int; // 0xfa Eq
	if(var_72_bool == 0) goto Label_267; // 0xfb JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xfc PushV
	var_73_object = var_1_object; // 0xfd MovT
	var_74_object = var_0_object; // 0xfe MovT
	func_1005(); // 0xff NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x101 PushV
	var_77_object = var_1_object; // 0x102 MovT
	var_78_object = var_0_object; // 0x103 MovT
	func_1011(); // 0x104 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x106 PushV
	var_79_object = var_1_object; // 0x107 MovT
	var_80_object = var_0_object; // 0x108 MovT
	func_1023(); // 0x109 NEW_2
	
Label_267:
	var_89_int = 42261; // 0x10b PushI
	var_90_bool = var_7_bool == var_89_int; // 0x10c Eq
	if(var_90_bool == 0) goto Label_285; // 0x10d JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x10e PushV
	var_91_object = var_1_object; // 0x10f MovT
	var_92_object = var_0_object; // 0x110 MovT
	func_1033(); // 0x111 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x113 PushV
	var_95_object = var_1_object; // 0x114 MovT
	var_96_object = var_0_object; // 0x115 MovT
	func_1011(); // 0x116 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x118 PushV
	var_97_object = var_1_object; // 0x119 MovT
	var_98_object = var_0_object; // 0x11a MovT
	func_1039(); // 0x11b NEW_2
	
Label_285:
	var_107_int = 24039; // 0x11d PushI
	var_108_bool = var_6_int == var_107_int; // 0x11e Eq
	if(var_108_bool == 0) goto Label_354; // 0x11f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x120 PushV
	var_110_object = var_1_object; // 0x121 MovT
	func_1044(var_110_object); // 0x122 NEW_2
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
	func_1056(var_143_object); // 0x13b NEW_2
	if(var_142_bool == 0) goto Label_323; // 0x13d JumpB
	var_148_int = 540014; // 0x13e PushI
	var_149_int = 41986; // 0x13f PushI
	var_150_int = 41985; // 0x140 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x141 TObjFunc
	
Label_323:
	var_151_bool = 0; var_152_object = Obj(); // 0x143 PushV
	var_152_object = var_1_object; // 0x144 MovT
	func_1068(var_152_object); // 0x145 NEW_2
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
	func_1198(var_262_bool); // 0x253 NEW_2
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
	func_946(var_14_object); // 0x280 NEW_2
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
	func_946(var_9_object); // 0x295 NEW_2
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
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1192(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1190(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1194(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1196(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1173(var_70_int); // 0x22 NEW_2
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
	func_946(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_755(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_17_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_8_object; // 0x47 Mov
	func_737(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1028()
{
	func_1106(); // 0x406 NEW_2
	return 0; // 0x408 Return
}


func_1033()
{
	var_93_string = "game_final"; // 0x40a PushS
	var_94_int = 4; // 0x40b PushI
	SetVariable(var_93_string, var_94_int); // 0x40c Func
	return 0; // 0x40e Return
}


func_909(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x38d PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x38e Func
	var_204_bool = var_201_bool; // 0x390 Push
	if(var_204_bool == 0) goto Label_919; // 0x391 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x392 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x394 Func
	goto Label_923; // 0x396 Jump
	
Label_923:
	return 6; // 0x39b Return
	
Label_919:
	var_205_string = "Can't find lsh animation : "; // 0x397 PushS
	var_206_int = var_205_string + var_194_string; // 0x398 Add
	Trace(var_206_int); // 0x399 Func
}


func_1039()
{
	func_1080(); // 0x411 NEW_2
	return 0; // 0x413 Return
}


func_1044(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x415 PushV
	var_184_string = "game_final"; // 0x416 MovS
	func_962(var_183_int, var_184_string); // 0x417 NEW_2
	var_187_int = 0; // 0x419 PushI
	var_188_bool = var_183_int != var_187_int; // 0x41a Neq
	if(var_188_bool == 0) goto Label_1054; // 0x41b JumpB
	var_181_bool = 1; // 0x41c MovB
	return 0; // 0x41d Return
	
Label_1054:
	var_181_bool = 0; // 0x41e MovB
	return 0; // 0x41f Return
}


func_1173(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x495 PushV
	var_73_string = "branch"; // 0x496 PushS
	GetVariable(var_73_string, var_72_int); // 0x497 Func
	var_74_int = 0; // 0x499 PushI
	var_75_bool = var_72_int == var_74_int; // 0x49a Eq
	if(var_75_bool == 0) goto Label_1183; // 0x49b JumpB
	var_70_int = 1; // 0x49c MovI
	return 2; // 0x49d Return
	
Label_1183:
	var_76_int = 1; // 0x49f PushI
	var_77_bool = var_72_int == var_76_int; // 0x4a0 Eq
	if(var_77_bool == 0) goto Label_1188; // 0x4a1 JumpB
	var_70_int = 2; // 0x4a2 MovI
	return 2; // 0x4a3 Return
	
Label_1188:
	var_70_int = 3; // 0x4a4 MovI
	return 2; // 0x4a5 Return
}


func_666(var_8_bool)
{
	var_8_bool = 1; // 0x29a MovB
	return 0; // 0x29b Return
}


func_924(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x39c PushV
	var_117_bool = 0; // 0x39d PushV
	func_1198(var_117_bool); // 0x39e NEW_2
	if(var_117_bool == 0) goto Label_937; // 0x3a0 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x3a1 Func
	var_118_bool = var_116_bool; // 0x3a3 Push
	if(var_118_bool == 0) goto Label_937; // 0x3a4 JumpB
	lshPlaySpeech(var_114_string); // 0x3a5 Func
	var_113_bool = 1; // 0x3a7 MovB
	return 2; // 0x3a8 Return
	
Label_937:
	var_113_bool = 0; // 0x3a9 MovB
	return 2; // 0x3aa Return
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
	func_952(var_45_cvector, var_46_cvector); // 0x2b7 NEW_2
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
	var_58_bool = 1; // 0x2c7 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x2c8 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x2ca PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x2cb PushE
	Rotate(var_59_float, var_60_float); // 0x2cc Func
	var_61_bool = 0; // 0x2ce PushV
	func_1198(var_61_bool); // 0x2cf NEW_2
	if(var_61_bool == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_731; // 0x2d2 Jump
	
Label_731:
	CameraWaitForPlayFinish(); // 0x2db Func
	ResumeWorld(); // 0x2dd Func
	var_18_bool = 1; // 0x2df MovB
	return 18; // 0x2e0 Return
	
Label_723:
	var_62_string = "head"; // 0x2d3 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2d4 Func
	var_63_bool = var_38_bool; // 0x2d6 Push
	if(var_63_bool == 0) goto Label_731; // 0x2d7 JumpB
	var_64_string = "head"; // 0x2d8 PushS
	LookAsyncCamera(var_64_string); // 0x2d9 Func
}


func_1056(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x421 PushV
	var_217_string = "b12q01DankoInSobor"; // 0x422 MovS
	func_962(var_216_int, var_217_string); // 0x423 NEW_2
	var_218_int = 0; // 0x425 PushI
	var_219_bool = var_216_int != var_218_int; // 0x426 Neq
	if(var_219_bool == 0) goto Label_1066; // 0x427 JumpB
	var_214_bool = 1; // 0x428 MovB
	return 0; // 0x429 Return
	
Label_1066:
	var_214_bool = 0; // 0x42a MovB
	return 0; // 0x42b Return
}


func_1190(var_67_int)
{
	var_67_int = 515532; // 0x4a6 MovI
	return 0; // 0x4a7 Return
}


func_1192(var_66_int)
{
	var_66_int = 514840; // 0x4a8 MovI
	return 0; // 0x4a9 Return
}


func_1194(var_68_string)
{
	var_68_string = "ui/NPC_Block.png"; // 0x4aa MovS
	return 0; // 0x4ab Return
}


func_939()
{
	var_9_bool = 0; // 0x3ab PushV
	func_1198(var_9_bool); // 0x3ac NEW_2
	if(var_9_bool == 0) goto Label_945; // 0x3ae JumpB
	lshStopSpeech(); // 0x3af Func
	
Label_945:
	return 0; // 0x3b1 Return
}


func_1196(var_69_string)
{
	var_69_string = "ui/NPC_Block_b.png"; // 0x4ac MovS
	return 0; // 0x4ad Return
}


func_1068(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x42d PushV
	var_226_string = "b12q01KlaraInSobor"; // 0x42e MovS
	func_962(var_225_int, var_226_string); // 0x42f NEW_2
	var_227_int = 0; // 0x431 PushI
	var_228_bool = var_225_int != var_227_int; // 0x432 Neq
	if(var_228_bool == 0) goto Label_1078; // 0x433 JumpB
	var_223_bool = 1; // 0x434 MovB
	return 0; // 0x435 Return
	
Label_1078:
	var_223_bool = 0; // 0x436 MovB
	return 0; // 0x437 Return
}


func_1198(var_61_bool)
{
	var_61_bool = 1; // 0x4ae MovB
	return 0; // 0x4af Return
}


func_813(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x32d PushV
	var_97_string = "c"; // 0x32e MovS
	var_98_int = 0; // 0x32f MovI
	
Label_816:
	var_102_int = 1; // 0x330 PushI
	if(var_102_int == 0) goto Label_829; // 0x331 JumpB
	var_103_int = 1; // 0x332 PushI
	var_104_int = var_98_int + var_103_int; // 0x333 Add
	var_105_int = var_97_string + var_104_int; // 0x334 Add
	HasProperty(var_105_int, var_99_bool); // 0x335 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x337 Not
	if(var_106_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_829; // 0x339 Jump
	
Label_829:
	var_107_bool = var_98_int == 0; // 0x33d Not
	if(var_107_bool == 0) goto Label_833; // 0x33e JumpB
	var_90_bool = 0; // 0x33f MovB
	return 10; // 0x340 Return
	
Label_833:
	var_100_int = 0; // 0x341 MovI
	var_108_int = 1; // 0x342 PushI
	var_109_bool = var_98_int > var_108_int; // 0x343 GT
	if(var_109_bool == 0) goto Label_839; // 0x344 JumpB
	irand(var_100_int, var_98_int); // 0x345 Func
	
Label_839:
	var_110_int = 1; // 0x347 PushI
	var_111_int = var_100_int + var_110_int; // 0x348 Add
	var_112_int = var_97_string + var_111_int; // 0x349 Add
	GetProperty(var_112_int, var_101_string); // 0x34a ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x34c PushV
	var_114_string = var_101_string; // 0x34d Mov
	func_924(var_113_bool, var_114_string); // 0x34e NEW_2
	var_90_bool = var_113_bool; // 0x34f Mov
	return 10; // 0x351 Return
	
Label_826:
	var_119_int = 1; // 0x33a PushI
	var_98_int = var_98_int + var_119_int; // 0x33b Add2
	goto Label_816; // 0x33c Jump
}


func_946(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3b2 PushV
	self(var_11_object); // 0x3b3 Func
	var_9_object = var_11_object; // 0x3b5 Mov
	return 2; // 0x3b6 Return
}


func_952(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x3b8 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x3b9 Or
	var_49_float = sqrt(var_50_int); // 0x3ba Sqrt2
	var_51_float = 0.0; // 0x3bb PushF
	var_52_bool = var_49_float < var_51_float; // 0x3bc LT
	if(var_52_bool == 0) goto Label_960; // 0x3bd JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3be MovV
	return 2; // 0x3bf Return
	
Label_960:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x3c0 Div2
	return 2; // 0x3c1 Return
}


func_185(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xba PushV
	func_1198(var_191_bool); // 0xbb NEW_2
	var_192_bool = var_191_bool == 0; // 0xbd Not
	if(var_192_bool == 0) goto Label_192; // 0xbe JumpB
	return 0; // 0xbf Return
	
Label_192:
	var_193_bool = var_190_string == var_2_object; // 0xc0 Eq
	if(var_193_bool == 0) goto Label_195; // 0xc1 JumpB
	return 0; // 0xc2 Return
	
Label_195:
	var_194_string = ""; var_195_bool = 0; // 0xc3 PushV
	var_194_string = var_190_string; // 0xc4 Mov
	var_196_string = ""; // 0xc5 PushS
	var_197_bool = var_190_string == var_196_string; // 0xc6 Eq
	if(var_197_bool == 0) goto Label_202; // 0xc7 JumpB
	var_195_bool = 0; // 0xc8 MovB
	goto Label_203; // 0xc9 Jump
	
Label_203:
	func_909(var_194_string, var_195_bool); // 0xcb NEW_2
	var_2_object = var_190_string; // 0xcd TMov
	return 0; // 0xce Return
	
Label_202:
	var_195_bool = 1; // 0xca MovB
}


func_1080()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x438 PushV
	var_101_int = 772; // 0x439 PushI
	var_102_int = 1; // 0x43a PushI
	var_103_int = 540273; // 0x43b PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x43c Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x43e PushV
	var_105_object = var_100_object; // 0x43f Mov
	var_106_int = 613; // 0x440 MovI
	func_1145(var_104_bool, var_105_object, var_106_int); // 0x441 NEW_2
	return 2; // 0x443 Return
}


func_962(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x3c2 PushV
	GetVariable(var_184_string, var_186_int); // 0x3c3 Func
	var_183_int = var_186_int; // 0x3c5 Mov
	return 2; // 0x3c6 Return
}


func_1093()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x445 PushV
	var_83_int = 618; // 0x446 PushI
	var_84_int = 1; // 0x447 PushI
	var_85_int = 532007; // 0x448 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x449 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x44b PushV
	var_87_object = var_82_object; // 0x44c Mov
	var_88_int = 613; // 0x44d MovI
	func_1145(var_86_bool, var_87_object, var_88_int); // 0x44e NEW_2
	return 2; // 0x450 Return
}


func_967(var_18_string, var_19_bool)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x3c7 PushV
	FindActor(var_21_object, var_18_string); // 0x3c8 Func
	var_22_bool = var_21_object == 0; // 0x3ca Not
	if(var_22_bool == 0) goto Label_979; // 0x3cb JumpB
	var_23_string = "Door "; // 0x3cc PushS
	var_24_int = var_23_string + var_18_string; // 0x3cd Add
	var_25_string = " not found"; // 0x3ce PushS
	var_26_int = var_24_int + var_25_string; // 0x3cf Add
	Trace(var_26_int); // 0x3d0 Func
	goto Label_982; // 0x3d2 Jump
	
Label_982:
	return 2; // 0x3d6 Return
	
Label_979:
	var_27_string = "locked"; // 0x3d3 PushS
	SetProperty(var_27_string, var_19_bool); // 0x3d4 ObjFunc
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_155; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_1044(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_138; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_185(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 522855; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_int = 523022; // 0x66 PushI
	var_209_int = 24216; // 0x67 PushI
	var_210_int = 24215; // 0x68 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x69 TObjFunc
	var_211_int = 522876; // 0x6b PushI
	var_212_int = 33440; // 0x6c PushI
	var_213_int = 24060; // 0x6d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6e TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x70 PushV
	var_215_object = var_1_object; // 0x71 MovT
	func_1056(var_215_object); // 0x72 NEW_2
	if(var_214_bool == 0) goto Label_122; // 0x74 JumpB
	var_220_int = 540014; // 0x75 PushI
	var_221_int = 41986; // 0x76 PushI
	var_222_int = 41985; // 0x77 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x78 TObjFunc
	
Label_122:
	var_223_bool = 0; var_224_object = Obj(); // 0x7a PushV
	var_224_object = var_1_object; // 0x7b MovT
	func_1068(var_224_object); // 0x7c NEW_2
	if(var_223_bool == 0) goto Label_132; // 0x7e JumpB
	var_229_int = 522878; // 0x7f PushI
	var_230_int = 33448; // 0x80 PushI
	var_231_int = 24064; // 0x81 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x82 TObjFunc
	
Label_132:
	var_232_int = 540279; // 0x84 PushI
	var_233_int = 42260; // 0x85 PushI
	var_234_int = 42259; // 0x86 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x87 TObjFunc
	goto Label_155; // 0x89 Jump
	
Label_155:
	var_235_bool = 0; // 0x9b PushV
	func_1198(var_235_bool); // 0x9c NEW_2
	if(var_235_bool == 0) goto Label_170; // 0x9e JumpB
	
Label_159:
	lshWaitForAnimEnd(); // 0x9f Func
	var_236_string = var_3_string; // 0xa1 PushT
	if(var_236_string == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_169:
	goto Label_184; // 0xa9 Jump
	
Label_184:
	return 0; // 0xb8 Return
	
Label_164:
	var_237_string = ""; // 0xa4 PushV
	var_237_string = var_2_object; // 0xa5 MovT
	func_893(var_237_string); // 0xa6 NEW_2
	goto Label_159; // 0xa8 Jump
	
Label_170:
	var_248_string = "all"; // 0xaa PushS
	var_249_string = "idle"; // 0xab PushS
	PlayAnimation(var_248_string, var_249_string); // 0xac Func
	
Label_174:
	WaitForAnimEnd(); // 0xae Func
	var_250_string = var_3_string; // 0xb0 PushT
	if(var_250_string == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_179:
	var_251_string = "all"; // 0xb3 PushS
	var_252_string = "idle"; // 0xb4 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xb5 Func
	goto Label_174; // 0xb7 Jump
	
Label_138:
	var_253_string = ""; // 0x8a PushV
	var_253_string = "Neutral"; // 0x8b MovS
	func_185(var_175_object, var_253_string); // 0x8c NEW_2
	var_254_int = 523170; // 0x8e PushI
	SetMessage(var_254_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_255_int = 523172; // 0x93 PushI
	var_256_int = -1; // 0x94 PushI
	var_257_int = 24374; // 0x95 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
}


func_850(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x352 PushV
	var_133_string = "d"; // 0x353 PushS
	var_134_int = 0; // 0x354 PushV
	func_984(var_134_int); // 0x355 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x357 Add
	var_141_string = "m"; // 0x358 PushS
	var_128_string = var_140_int + var_141_string; // 0x359 Add2
	var_129_int = 0; // 0x35a MovI
	
Label_859:
	var_142_int = 1; // 0x35b PushI
	if(var_142_int == 0) goto Label_872; // 0x35c JumpB
	var_143_int = 1; // 0x35d PushI
	var_144_int = var_129_int + var_143_int; // 0x35e Add
	var_145_int = var_128_string + var_144_int; // 0x35f Add
	HasProperty(var_145_int, var_130_bool); // 0x360 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x362 Not
	if(var_146_bool == 0) goto Label_869; // 0x363 JumpB
	goto Label_872; // 0x364 Jump
	
Label_872:
	var_147_bool = var_129_int == 0; // 0x368 Not
	if(var_147_bool == 0) goto Label_876; // 0x369 JumpB
	var_121_bool = 0; // 0x36a MovB
	return 10; // 0x36b Return
	
Label_876:
	var_131_int = 0; // 0x36c MovI
	var_148_int = 1; // 0x36d PushI
	var_149_bool = var_129_int > var_148_int; // 0x36e GT
	if(var_149_bool == 0) goto Label_882; // 0x36f JumpB
	irand(var_131_int, var_129_int); // 0x370 Func
	
Label_882:
	var_150_int = 1; // 0x372 PushI
	var_151_int = var_131_int + var_150_int; // 0x373 Add
	var_152_int = var_128_string + var_151_int; // 0x374 Add
	GetProperty(var_152_int, var_132_string); // 0x375 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x377 PushV
	var_154_string = var_132_string; // 0x378 Mov
	func_924(var_153_bool, var_154_string); // 0x379 NEW_2
	var_121_bool = var_153_bool; // 0x37a Mov
	return 10; // 0x37c Return
	
Label_869:
	var_155_int = 1; // 0x365 PushI
	var_129_int = var_129_int + var_155_int; // 0x366 Add2
	goto Label_859; // 0x367 Jump
}


func_1106()
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x452 PushV
	var_32_int = 616; // 0x453 PushI
	var_33_int = 1; // 0x454 PushI
	var_34_int = 532005; // 0x455 PushI
	CreateDiaryEntry(var_31_object, var_32_int, var_33_int, var_34_int); // 0x456 Func
	var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; // 0x458 PushV
	var_36_object = var_31_object; // 0x459 Mov
	var_37_int = 613; // 0x45a MovI
	func_1145(var_35_bool, var_36_object, var_37_int); // 0x45b NEW_2
	return 2; // 0x45d Return
}


func_984(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x3d8 PushV
	GetGameTime(var_136_float); // 0x3d9 Func
	var_137_int = 1; // 0x3db PushI
	var_138_int = 0; // 0x3dc PushV
	var_139_int = 24; // 0x3dd PushI
	var_138_int = var_136_float / var_136_float; // 0x3de Div2
	var_134_int = var_137_int + var_138_int; // 0x3df Add2
	return 2; // 0x3e0 Return
}


func_1119()
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x45f PushV
	var_65_int = 617; // 0x460 PushI
	var_66_int = 1; // 0x461 PushI
	var_67_int = 532006; // 0x462 PushI
	CreateDiaryEntry(var_64_object, var_65_int, var_66_int, var_67_int); // 0x463 Func
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0; // 0x465 PushV
	var_69_object = var_64_object; // 0x466 Mov
	var_70_int = 613; // 0x467 MovI
	func_1145(var_68_bool, var_69_object, var_70_int); // 0x468 NEW_2
	return 2; // 0x46a Return
}


func_737()
{
	var_260_bool = 0; var_261_bool = 0; // 0x2e1 PushV
	var_262_bool = 1; // 0x2e2 PushB
	CameraSwitchToNormal(var_262_bool); // 0x2e3 Func
	var_263_bool = 0; // 0x2e5 PushV
	func_1198(var_263_bool); // 0x2e6 NEW_2
	if(var_263_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_754; // 0x2e9 Jump
	
Label_754:
	return 2; // 0x2f2 Return
	
Label_746:
	var_264_string = "head"; // 0x2ea PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x2eb Func
	var_265_bool = var_261_bool; // 0x2ed Push
	if(var_265_bool == 0) goto Label_754; // 0x2ee JumpB
	var_266_string = "head"; // 0x2ef PushS
	UnlookAsync(var_266_string); // 0x2f0 Func
}


func_993()
{
	var_14_string = "game_final"; // 0x3e2 PushS
	var_15_int = 1; // 0x3e3 PushI
	SetVariable(var_14_string, var_15_int); // 0x3e4 Func
	return 0; // 0x3e6 Return
}


func_999()
{
	var_57_string = "game_final"; // 0x3e8 PushS
	var_58_int = 2; // 0x3e9 PushI
	SetVariable(var_57_string, var_58_int); // 0x3ea Func
	return 0; // 0x3ec Return
}


func_618()
{
	
Label_618:
	Hold(); // 0x26a Func
	goto Label_618; // 0x26c Jump
}


func_1132(var_44_object)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x46c PushV
	GetDiaryRoot(var_46_object); // 0x46d Func
	var_47_bool = var_46_object == 0; // 0x46f Not
	if(var_47_bool == 0) goto Label_1142; // 0x470 JumpB
	var_48_string = "Can't retrieve diary root"; // 0x471 PushS
	Trace(var_48_string); // 0x472 Func
	var_44_object = 0; // 0x474 MovB
	return 2; // 0x475 Return
	
Label_1142:
	var_44_object = var_46_object; // 0x476 Mov
	return 2; // 0x477 Return
}


func_1005()
{
	var_75_string = "game_final"; // 0x3ee PushS
	var_76_int = 3; // 0x3ef PushI
	SetVariable(var_75_string, var_76_int); // 0x3f0 Func
	return 0; // 0x3f2 Return
}


func_755(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2f3 PushV
	var_88_string = "voice_common"; // 0x2f4 PushS
	GetVariable(var_88_string, var_86_int); // 0x2f5 Func
	var_89_int = var_86_int; // 0x2f7 Push
	if(var_89_int == 0) goto Label_793; // 0x2f8 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2f9 PushV
	var_91_object = var_80_object; // 0x2fa Mov
	func_813(var_91_object); // 0x2fb NEW_2
	var_120_bool = var_90_bool == 0; // 0x2fd Not
	if(var_120_bool == 0) goto Label_775; // 0x2fe JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2ff PushV
	var_122_object = var_80_object; // 0x300 Mov
	func_850(var_122_object); // 0x301 NEW_2
	var_156_bool = var_121_bool == 0; // 0x303 Not
	if(var_156_bool == 0) goto Label_775; // 0x304 JumpB
	var_79_bool = 0; // 0x305 MovB
	return 4; // 0x306 Return
	
Label_775:
	var_157_int = 2; // 0x307 PushI
	irand(var_87_int, var_157_int); // 0x308 Func
	var_158_int = var_87_int; // 0x30a Push
	if(var_158_int == 0) goto Label_788; // 0x30b JumpB
	var_159_string = "voice_common"; // 0x30c PushS
	var_160_int = 1; // 0x30d PushI
	var_161_int = var_86_int + var_160_int; // 0x30e Add
	var_162_int = 3; // 0x30f PushI
	var_163_int = var_161_int / var_162_int; // 0x310 Mod
	SetVariable(var_159_string, var_163_int); // 0x311 Func
	goto Label_792; // 0x313 Jump
	
Label_792:
	goto Label_811; // 0x318 Jump
	
Label_811:
	var_79_bool = 1; // 0x32b MovB
	return 4; // 0x32c Return
	
Label_788:
	var_164_string = "voice_common"; // 0x314 PushS
	var_165_int = 0; // 0x315 PushI
	SetVariable(var_164_string, var_165_int); // 0x316 Func
	
Label_793:
	var_166_bool = 0; var_167_object = Obj(); // 0x319 PushV
	var_167_object = var_80_object; // 0x31a Mov
	func_850(var_167_object); // 0x31b NEW_2
	var_168_bool = var_166_bool == 0; // 0x31d Not
	if(var_168_bool == 0) goto Label_807; // 0x31e JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x31f PushV
	var_170_object = var_80_object; // 0x320 Mov
	func_813(var_170_object); // 0x321 NEW_2
	var_171_bool = var_169_bool == 0; // 0x323 Not
	if(var_171_bool == 0) goto Label_807; // 0x324 JumpB
	var_79_bool = 0; // 0x325 MovB
	return 4; // 0x326 Return
	
Label_807:
	var_172_string = "voice_common"; // 0x327 PushS
	var_173_int = 1; // 0x328 PushI
	SetVariable(var_172_string, var_173_int); // 0x329 Func
}


func_1011()
{
	var_18_string = ""; var_19_bool = 0; // 0x3f4 PushV
	var_18_string = "isobor@door1"; // 0x3f5 MovS
	var_19_bool = 0; // 0x3f6 MovB
	func_967(var_18_string, var_19_bool); // 0x3f7 NEW_2
	return 0; // 0x3f9 Return
}


func_1145(var_35_bool, var_36_object, var_37_int)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; // 0x479 PushV
	var_44_object = Obj(); // 0x47a PushV
	func_1132(var_44_object); // 0x47b NEW_2
	var_41_object = var_44_object; // 0x47c Mov
	Find(var_37_int, var_42_object); // 0x47e ObjFunc
	var_49_bool = var_42_object == 0; // 0x480 Not
	if(var_49_bool == 0) goto Label_1160; // 0x481 JumpB
	var_50_string = "Can't find diary parent with id: "; // 0x482 PushS
	var_51_int = var_50_string + var_37_int; // 0x483 Add
	Trace(var_51_int); // 0x484 Func
	var_35_bool = 0; // 0x486 MovB
	return 6; // 0x487 Return
	
Label_1160:
	AddChild(var_36_object); // 0x488 ObjFunc
	var_52_int = 7; // 0x48a PushI
	SendWorldWndMessage(var_52_int); // 0x48b Func
	GetCategory(var_43_int); // 0x48d ObjFunc
	SetDiarySection(var_43_int); // 0x48f Func
	var_35_bool = 0; // 0x491 MovB
	return 6; // 0x492 Return
}


func_1018()
{
	func_1119(); // 0x3fc NEW_2
	return 0; // 0x3fe Return
}


func_893(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x37d PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x37e Func
	var_244_bool = var_241_bool; // 0x380 Push
	if(var_244_bool == 0) goto Label_904; // 0x381 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x382 Func
	var_245_bool = 0; // 0x384 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x385 Func
	goto Label_908; // 0x387 Jump
	
Label_908:
	return 6; // 0x38c Return
	
Label_904:
	var_246_string = "Can't find lsh animation : "; // 0x388 PushS
	var_247_int = var_246_string + var_237_string; // 0x389 Add
	Trace(var_247_int); // 0x38a Func
}


func_1023()
{
	func_1093(); // 0x401 NEW_2
	return 0; // 0x403 Return
}


