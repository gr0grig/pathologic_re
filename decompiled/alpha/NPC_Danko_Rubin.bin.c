task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_object = Obj(); // 0x24 PushV
	var_21_object = var_20_bool; // 0x25 Mov
	func_4587(var_21_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x2a PushV
	var_22_object = var_20_bool; // 0x2b Mov
	func_3538(var_22_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0xde PushI
	if(var_22_int == 0) goto Label_671; // 0xdf JumpB
	func_3633(); // 0xe1 Call
	var_24_int = 10081; // 0xe3 PushI
	var_25_bool = var_21_bool == var_24_int; // 0xe4 Eq
	if(var_25_bool == 0) goto Label_235; // 0xe5 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xe6 PushV
	var_26_object = var_1_object; // 0xe7 MovT
	var_27_object = var_0_object; // 0xe8 MovT
	func_3735(); // 0xe9 Call
	
Label_235:
	var_92_int = 10088; // 0xeb PushI
	var_93_bool = var_21_bool == var_92_int; // 0xec Eq
	if(var_93_bool == 0) goto Label_243; // 0xed JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0xee PushV
	var_94_object = var_1_object; // 0xef MovT
	var_95_object = var_0_object; // 0xf0 MovT
	func_3735(); // 0xf1 Call
	
Label_243:
	var_96_int = 10054; // 0xf3 PushI
	var_97_bool = var_20_string == var_96_int; // 0xf4 Eq
	if(var_97_bool == 0) goto Label_301; // 0xf5 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xf6 PushV
	var_98_object = var_1_object; // 0xf7 MovT
	var_99_object = var_0_object; // 0xf8 MovT
	func_4018(); // 0xf9 Call
	var_102_string = ""; // 0xfb PushV
	var_102_string = "Neutral"; // 0xfc MovS
	func_205(var_21_bool, var_102_string); // 0xfd Call
	var_117_int = 9170; // 0xff PushI
	SetMessage(var_117_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_118_int = 9171; // 0x104 PushI
	var_119_int = 10056; // 0x105 PushI
	var_120_int = 10055; // 0x106 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x107 TObjFunc
	var_121_int = 9175; // 0x109 PushI
	var_122_int = 10062; // 0x10a PushI
	var_123_int = 10061; // 0x10b PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x10c TObjFunc
	var_124_int = 9187; // 0x10e PushI
	var_125_int = 10077; // 0x10f PushI
	var_126_int = 10076; // 0x110 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_301:
	var_127_int = 6391; // 0x12d PushI
	var_128_bool = var_20_string == var_127_int; // 0x12e Eq
	if(var_128_bool == 0) goto Label_324; // 0x12f JumpB
	var_129_string = ""; // 0x130 PushV
	var_129_string = "Neutral"; // 0x131 MovS
	func_205(var_21_bool, var_129_string); // 0x132 Call
	var_130_int = 5802; // 0x134 PushI
	SetMessage(var_130_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_131_int = 5803; // 0x139 PushI
	var_132_int = 6393; // 0x13a PushI
	var_133_int = 6392; // 0x13b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x13c TObjFunc
	var_134_int = 5806; // 0x13e PushI
	var_135_int = 6396; // 0x13f PushI
	var_136_int = 6395; // 0x140 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_137_int = 6396; // 0x144 PushI
	var_138_bool = var_20_string == var_137_int; // 0x145 Eq
	if(var_138_bool == 0) goto Label_347; // 0x146 JumpB
	var_139_string = ""; // 0x147 PushV
	var_139_string = "Neutral"; // 0x148 MovS
	func_205(var_21_bool, var_139_string); // 0x149 Call
	var_140_int = 5807; // 0x14b PushI
	SetMessage(var_140_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_141_int = 5808; // 0x150 PushI
	var_142_int = 6398; // 0x151 PushI
	var_143_int = 6397; // 0x152 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x153 TObjFunc
	var_144_int = 5818; // 0x155 PushI
	var_145_int = -1; // 0x156 PushI
	var_146_int = 6407; // 0x157 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x158 TObjFunc
	return 0; // 0x15a Return
	
Label_347:
	var_147_int = 6398; // 0x15b PushI
	var_148_bool = var_20_string == var_147_int; // 0x15c Eq
	if(var_148_bool == 0) goto Label_370; // 0x15d JumpB
	var_149_string = ""; // 0x15e PushV
	var_149_string = "Neutral"; // 0x15f MovS
	func_205(var_21_bool, var_149_string); // 0x160 Call
	var_150_int = 5809; // 0x162 PushI
	SetMessage(var_150_int); // 0x163 TObjFunc
	ClearReplies(); // 0x165 TObjFunc
	var_151_int = 5810; // 0x167 PushI
	var_152_int = 6400; // 0x168 PushI
	var_153_int = 6399; // 0x169 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x16a TObjFunc
	var_154_int = 5817; // 0x16c PushI
	var_155_int = -1; // 0x16d PushI
	var_156_int = 6406; // 0x16e PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_157_int = 6400; // 0x172 PushI
	var_158_bool = var_20_string == var_157_int; // 0x173 Eq
	if(var_158_bool == 0) goto Label_393; // 0x174 JumpB
	var_159_string = ""; // 0x175 PushV
	var_159_string = "Neutral"; // 0x176 MovS
	func_205(var_21_bool, var_159_string); // 0x177 Call
	var_160_int = 5811; // 0x179 PushI
	SetMessage(var_160_int); // 0x17a TObjFunc
	ClearReplies(); // 0x17c TObjFunc
	var_161_int = 5812; // 0x17e PushI
	var_162_int = 6402; // 0x17f PushI
	var_163_int = 6401; // 0x180 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x181 TObjFunc
	var_164_int = 5816; // 0x183 PushI
	var_165_int = -1; // 0x184 PushI
	var_166_int = 6405; // 0x185 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_167_int = 6402; // 0x189 PushI
	var_168_bool = var_20_string == var_167_int; // 0x18a Eq
	if(var_168_bool == 0) goto Label_416; // 0x18b JumpB
	var_169_string = ""; // 0x18c PushV
	var_169_string = "Neutral"; // 0x18d MovS
	func_205(var_21_bool, var_169_string); // 0x18e Call
	var_170_int = 5813; // 0x190 PushI
	SetMessage(var_170_int); // 0x191 TObjFunc
	ClearReplies(); // 0x193 TObjFunc
	var_171_int = 5814; // 0x195 PushI
	var_172_int = -1; // 0x196 PushI
	var_173_int = 6403; // 0x197 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x198 TObjFunc
	var_174_int = 5815; // 0x19a PushI
	var_175_int = -1; // 0x19b PushI
	var_176_int = 6404; // 0x19c PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_177_int = 6393; // 0x1a0 PushI
	var_178_bool = var_20_string == var_177_int; // 0x1a1 Eq
	if(var_178_bool == 0) goto Label_434; // 0x1a2 JumpB
	var_179_string = ""; // 0x1a3 PushV
	var_179_string = "Neutral"; // 0x1a4 MovS
	func_205(var_21_bool, var_179_string); // 0x1a5 Call
	var_180_int = 5804; // 0x1a7 PushI
	SetMessage(var_180_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_181_int = 5805; // 0x1ac PushI
	var_182_int = -1; // 0x1ad PushI
	var_183_int = 6394; // 0x1ae PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1af TObjFunc
	return 0; // 0x1b1 Return
	
Label_434:
	var_184_int = 10077; // 0x1b2 PushI
	var_185_bool = var_20_string == var_184_int; // 0x1b3 Eq
	if(var_185_bool == 0) goto Label_457; // 0x1b4 JumpB
	var_186_string = ""; // 0x1b5 PushV
	var_186_string = "Neutral"; // 0x1b6 MovS
	func_205(var_21_bool, var_186_string); // 0x1b7 Call
	var_187_int = 9188; // 0x1b9 PushI
	SetMessage(var_187_int); // 0x1ba TObjFunc
	ClearReplies(); // 0x1bc TObjFunc
	var_188_int = 9189; // 0x1be PushI
	var_189_int = -1; // 0x1bf PushI
	var_190_int = 10078; // 0x1c0 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1c1 TObjFunc
	var_191_int = 9190; // 0x1c3 PushI
	var_192_int = 10080; // 0x1c4 PushI
	var_193_int = 10079; // 0x1c5 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1c6 TObjFunc
	return 0; // 0x1c8 Return
	
Label_457:
	var_194_int = 10080; // 0x1c9 PushI
	var_195_bool = var_20_string == var_194_int; // 0x1ca Eq
	if(var_195_bool == 0) goto Label_480; // 0x1cb JumpB
	var_196_string = ""; // 0x1cc PushV
	var_196_string = "Neutral"; // 0x1cd MovS
	func_205(var_21_bool, var_196_string); // 0x1ce Call
	var_197_int = 9191; // 0x1d0 PushI
	SetMessage(var_197_int); // 0x1d1 TObjFunc
	ClearReplies(); // 0x1d3 TObjFunc
	var_198_int = 9192; // 0x1d5 PushI
	var_199_int = -1; // 0x1d6 PushI
	var_200_int = 10081; // 0x1d7 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1d8 TObjFunc
	var_201_int = 9193; // 0x1da PushI
	var_202_int = 10083; // 0x1db PushI
	var_203_int = 10082; // 0x1dc PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_204_int = 10083; // 0x1e0 PushI
	var_205_bool = var_20_string == var_204_int; // 0x1e1 Eq
	if(var_205_bool == 0) goto Label_503; // 0x1e2 JumpB
	var_206_string = ""; // 0x1e3 PushV
	var_206_string = "Neutral"; // 0x1e4 MovS
	func_205(var_21_bool, var_206_string); // 0x1e5 Call
	var_207_int = 9194; // 0x1e7 PushI
	SetMessage(var_207_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_208_int = 9195; // 0x1ec PushI
	var_209_int = 10085; // 0x1ed PushI
	var_210_int = 10084; // 0x1ee PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1ef TObjFunc
	var_211_int = 9202; // 0x1f1 PushI
	var_212_int = 10085; // 0x1f2 PushI
	var_213_int = 10093; // 0x1f3 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1f4 TObjFunc
	return 0; // 0x1f6 Return
	
Label_503:
	var_214_int = 10085; // 0x1f7 PushI
	var_215_bool = var_20_string == var_214_int; // 0x1f8 Eq
	if(var_215_bool == 0) goto Label_531; // 0x1f9 JumpB
	var_216_string = ""; // 0x1fa PushV
	var_216_string = "Neutral"; // 0x1fb MovS
	func_205(var_21_bool, var_216_string); // 0x1fc Call
	var_217_int = 9196; // 0x1fe PushI
	SetMessage(var_217_int); // 0x1ff TObjFunc
	ClearReplies(); // 0x201 TObjFunc
	var_218_int = 9197; // 0x203 PushI
	var_219_int = 10087; // 0x204 PushI
	var_220_int = 10086; // 0x205 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x206 TObjFunc
	var_221_int = 9200; // 0x208 PushI
	var_222_int = 10087; // 0x209 PushI
	var_223_int = 10089; // 0x20a PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x20b TObjFunc
	var_224_int = 9201; // 0x20d PushI
	var_225_int = 10087; // 0x20e PushI
	var_226_int = 10091; // 0x20f PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_227_int = 10087; // 0x213 PushI
	var_228_bool = var_20_string == var_227_int; // 0x214 Eq
	if(var_228_bool == 0) goto Label_549; // 0x215 JumpB
	var_229_string = ""; // 0x216 PushV
	var_229_string = "Neutral"; // 0x217 MovS
	func_205(var_21_bool, var_229_string); // 0x218 Call
	var_230_int = 9198; // 0x21a PushI
	SetMessage(var_230_int); // 0x21b TObjFunc
	ClearReplies(); // 0x21d TObjFunc
	var_231_int = 9199; // 0x21f PushI
	var_232_int = -1; // 0x220 PushI
	var_233_int = 10088; // 0x221 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_234_int = 10062; // 0x225 PushI
	var_235_bool = var_20_string == var_234_int; // 0x226 Eq
	if(var_235_bool == 0) goto Label_572; // 0x227 JumpB
	var_236_string = ""; // 0x228 PushV
	var_236_string = "Neutral"; // 0x229 MovS
	func_205(var_21_bool, var_236_string); // 0x22a Call
	var_237_int = 9176; // 0x22c PushI
	SetMessage(var_237_int); // 0x22d TObjFunc
	ClearReplies(); // 0x22f TObjFunc
	var_238_int = 9177; // 0x231 PushI
	var_239_int = 10064; // 0x232 PushI
	var_240_int = 10063; // 0x233 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x234 TObjFunc
	var_241_int = 9186; // 0x236 PushI
	var_242_int = -1; // 0x237 PushI
	var_243_int = 10075; // 0x238 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x239 TObjFunc
	return 0; // 0x23b Return
	
Label_572:
	var_244_int = 10064; // 0x23c PushI
	var_245_bool = var_20_string == var_244_int; // 0x23d Eq
	if(var_245_bool == 0) goto Label_595; // 0x23e JumpB
	var_246_string = ""; // 0x23f PushV
	var_246_string = "Neutral"; // 0x240 MovS
	func_205(var_21_bool, var_246_string); // 0x241 Call
	var_247_int = 9178; // 0x243 PushI
	SetMessage(var_247_int); // 0x244 TObjFunc
	ClearReplies(); // 0x246 TObjFunc
	var_248_int = 9179; // 0x248 PushI
	var_249_int = 10066; // 0x249 PushI
	var_250_int = 10065; // 0x24a PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x24b TObjFunc
	var_251_int = 9185; // 0x24d PushI
	var_252_int = 10066; // 0x24e PushI
	var_253_int = 10073; // 0x24f PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_254_int = 10066; // 0x253 PushI
	var_255_bool = var_20_string == var_254_int; // 0x254 Eq
	if(var_255_bool == 0) goto Label_618; // 0x255 JumpB
	var_256_string = ""; // 0x256 PushV
	var_256_string = "Neutral"; // 0x257 MovS
	func_205(var_21_bool, var_256_string); // 0x258 Call
	var_257_int = 9180; // 0x25a PushI
	SetMessage(var_257_int); // 0x25b TObjFunc
	ClearReplies(); // 0x25d TObjFunc
	var_258_int = 9181; // 0x25f PushI
	var_259_int = 10068; // 0x260 PushI
	var_260_int = 10067; // 0x261 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x262 TObjFunc
	var_261_int = 9184; // 0x264 PushI
	var_262_int = 10068; // 0x265 PushI
	var_263_int = 10071; // 0x266 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x267 TObjFunc
	return 0; // 0x269 Return
	
Label_618:
	var_264_int = 10068; // 0x26a PushI
	var_265_bool = var_20_string == var_264_int; // 0x26b Eq
	if(var_265_bool == 0) goto Label_636; // 0x26c JumpB
	var_266_string = ""; // 0x26d PushV
	var_266_string = "Neutral"; // 0x26e MovS
	func_205(var_21_bool, var_266_string); // 0x26f Call
	var_267_int = 9182; // 0x271 PushI
	SetMessage(var_267_int); // 0x272 TObjFunc
	ClearReplies(); // 0x274 TObjFunc
	var_268_int = 9183; // 0x276 PushI
	var_269_int = 10085; // 0x277 PushI
	var_270_int = 10069; // 0x278 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x279 TObjFunc
	return 0; // 0x27b Return
	
Label_636:
	var_271_int = 10056; // 0x27c PushI
	var_272_bool = var_20_string == var_271_int; // 0x27d Eq
	if(var_272_bool == 0) goto Label_659; // 0x27e JumpB
	var_273_string = ""; // 0x27f PushV
	var_273_string = "Neutral"; // 0x280 MovS
	func_205(var_21_bool, var_273_string); // 0x281 Call
	var_274_int = 9172; // 0x283 PushI
	SetMessage(var_274_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_275_int = 9173; // 0x288 PushI
	var_276_int = 10064; // 0x289 PushI
	var_277_int = 10057; // 0x28a PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x28b TObjFunc
	var_278_int = 9174; // 0x28d PushI
	var_279_int = 10064; // 0x28e PushI
	var_280_int = 10059; // 0x28f PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x290 TObjFunc
	return 0; // 0x292 Return
	
Label_659:
	var_3_string = 1; // 0x293 TMovB
	var_281_bool = 0; // 0x294 PushV
	func_3733(var_281_bool); // 0x295 Call
	if(var_281_bool == 0) goto Label_667; // 0x297 JumpB
	lshStopAnimation(); // 0x298 Func
	goto Label_669; // 0x29a Jump
	
Label_669:
	return 0; // 0x29d Return
	
Label_667:
	StopAnimation(); // 0x29b Func
	
Label_671:
	return 0; // 0x29f Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x3d8 PushI
	if(var_22_int == 0) goto Label_2269; // 0x3d9 JumpB
	func_3633(); // 0x3db Call
	var_24_int = 9647; // 0x3dd PushI
	var_25_bool = var_21_bool == var_24_int; // 0x3de Eq
	if(var_25_bool == 0) goto Label_1007; // 0x3df JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x3e0 PushV
	var_26_object = var_1_object; // 0x3e1 MovT
	var_27_object = var_0_object; // 0x3e2 MovT
	func_3849(); // 0x3e3 Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x3e5 PushV
	var_30_object = var_1_object; // 0x3e6 MovT
	var_31_object = var_0_object; // 0x3e7 MovT
	func_3814(); // 0x3e8 Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x3ea PushV
	var_89_object = var_1_object; // 0x3eb MovT
	var_90_object = var_0_object; // 0x3ec MovT
	func_3873(); // 0x3ed Call
	
Label_1007:
	var_115_int = 9649; // 0x3ef PushI
	var_116_bool = var_21_bool == var_115_int; // 0x3f0 Eq
	if(var_116_bool == 0) goto Label_1015; // 0x3f1 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x3f2 PushV
	var_117_object = var_1_object; // 0x3f3 MovT
	var_118_object = var_0_object; // 0x3f4 MovT
	func_3849(); // 0x3f5 Call
	
Label_1015:
	var_119_int = 9639; // 0x3f7 PushI
	var_120_bool = var_21_bool == var_119_int; // 0x3f8 Eq
	if(var_120_bool == 0) goto Label_1033; // 0x3f9 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x3fa PushV
	var_121_object = var_1_object; // 0x3fb MovT
	var_122_object = var_0_object; // 0x3fc MovT
	func_3849(); // 0x3fd Call
	var_123_object = Obj(); var_124_object = Obj(); // 0x3ff PushV
	var_123_object = var_1_object; // 0x400 MovT
	var_124_object = var_0_object; // 0x401 MovT
	func_3814(); // 0x402 Call
	var_125_object = Obj(); var_126_object = Obj(); // 0x404 PushV
	var_125_object = var_1_object; // 0x405 MovT
	var_126_object = var_0_object; // 0x406 MovT
	func_3873(); // 0x407 Call
	
Label_1033:
	var_127_int = 9594; // 0x409 PushI
	var_128_bool = var_21_bool == var_127_int; // 0x40a Eq
	if(var_128_bool == 0) goto Label_1051; // 0x40b JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x40c PushV
	var_129_object = var_1_object; // 0x40d MovT
	var_130_object = var_0_object; // 0x40e MovT
	func_3849(); // 0x40f Call
	var_131_object = Obj(); var_132_object = Obj(); // 0x411 PushV
	var_131_object = var_1_object; // 0x412 MovT
	var_132_object = var_0_object; // 0x413 MovT
	func_3814(); // 0x414 Call
	var_133_object = Obj(); var_134_object = Obj(); // 0x416 PushV
	var_133_object = var_1_object; // 0x417 MovT
	var_134_object = var_0_object; // 0x418 MovT
	func_3873(); // 0x419 Call
	
Label_1051:
	var_135_int = 9963; // 0x41b PushI
	var_136_bool = var_21_bool == var_135_int; // 0x41c Eq
	if(var_136_bool == 0) goto Label_1059; // 0x41d JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x41e PushV
	var_137_object = var_1_object; // 0x41f MovT
	var_138_object = var_0_object; // 0x420 MovT
	func_3905(); // 0x421 Call
	
Label_1059:
	var_185_int = 12332; // 0x423 PushI
	var_186_bool = var_21_bool == var_185_int; // 0x424 Eq
	if(var_186_bool == 0) goto Label_1072; // 0x425 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x426 PushV
	var_187_object = var_1_object; // 0x427 MovT
	var_188_object = var_0_object; // 0x428 MovT
	func_3814(); // 0x429 Call
	var_189_object = Obj(); var_190_object = Obj(); // 0x42b PushV
	var_189_object = var_1_object; // 0x42c MovT
	var_190_object = var_0_object; // 0x42d MovT
	func_3873(); // 0x42e Call
	
Label_1072:
	var_191_int = 9684; // 0x430 PushI
	var_192_bool = var_21_bool == var_191_int; // 0x431 Eq
	if(var_192_bool == 0) goto Label_1080; // 0x432 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x433 PushV
	var_193_object = var_1_object; // 0x434 MovT
	var_194_object = var_0_object; // 0x435 MovT
	func_3855(); // 0x436 Call
	
Label_1080:
	var_197_int = 9672; // 0x438 PushI
	var_198_bool = var_21_bool == var_197_int; // 0x439 Eq
	if(var_198_bool == 0) goto Label_1088; // 0x43a JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x43b PushV
	var_199_object = var_1_object; // 0x43c MovT
	var_200_object = var_0_object; // 0x43d MovT
	func_3861(); // 0x43e Call
	
Label_1088:
	var_203_int = 9678; // 0x440 PushI
	var_204_bool = var_21_bool == var_203_int; // 0x441 Eq
	if(var_204_bool == 0) goto Label_1096; // 0x442 JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x443 PushV
	var_205_object = var_1_object; // 0x444 MovT
	var_206_object = var_0_object; // 0x445 MovT
	func_3861(); // 0x446 Call
	
Label_1096:
	var_207_int = 9679; // 0x448 PushI
	var_208_bool = var_21_bool == var_207_int; // 0x449 Eq
	if(var_208_bool == 0) goto Label_1104; // 0x44a JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x44b PushV
	var_209_object = var_1_object; // 0x44c MovT
	var_210_object = var_0_object; // 0x44d MovT
	func_3861(); // 0x44e Call
	
Label_1104:
	var_211_int = 9667; // 0x450 PushI
	var_212_bool = var_21_bool == var_211_int; // 0x451 Eq
	if(var_212_bool == 0) goto Label_1112; // 0x452 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x453 PushV
	var_213_object = var_1_object; // 0x454 MovT
	var_214_object = var_0_object; // 0x455 MovT
	func_3861(); // 0x456 Call
	
Label_1112:
	var_215_int = 9644; // 0x458 PushI
	var_216_bool = var_21_bool == var_215_int; // 0x459 Eq
	if(var_216_bool == 0) goto Label_1120; // 0x45a JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0x45b PushV
	var_217_object = var_1_object; // 0x45c MovT
	var_218_object = var_0_object; // 0x45d MovT
	func_3867(); // 0x45e Call
	
Label_1120:
	var_221_int = 9641; // 0x460 PushI
	var_222_bool = var_21_bool == var_221_int; // 0x461 Eq
	if(var_222_bool == 0) goto Label_1128; // 0x462 JumpB
	var_223_object = Obj(); var_224_object = Obj(); // 0x463 PushV
	var_223_object = var_1_object; // 0x464 MovT
	var_224_object = var_0_object; // 0x465 MovT
	func_3867(); // 0x466 Call
	
Label_1128:
	var_225_int = 9574; // 0x468 PushI
	var_226_bool = var_20_string == var_225_int; // 0x469 Eq
	if(var_226_bool == 0) goto Label_1325; // 0x46a JumpB
	var_227_bool = 0; // 0x46b PushV
	var_227_bool = 0; // 0x46c MovB
	var_228_bool = 0; var_229_object = Obj(); // 0x46d PushV
	var_229_object = var_1_object; // 0x46e MovT
	func_4200(var_229_object); // 0x46f Call
	if(var_228_bool == 0) goto Label_1144; // 0x471 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x472 PushV
	var_237_object = var_1_object; // 0x473 MovT
	func_4212(var_237_object); // 0x474 Call
	if(var_236_bool == 0) goto Label_1144; // 0x476 JumpB
	var_227_bool = 1; // 0x477 MovB
	
Label_1144:
	if(var_227_bool == 0) goto Label_1170; // 0x478 JumpB
	var_242_object = Obj(); var_243_object = Obj(); // 0x479 PushV
	var_242_object = var_1_object; // 0x47a MovT
	var_243_object = var_0_object; // 0x47b MovT
	func_4178(); // 0x47c Call
	var_246_string = ""; // 0x47e PushV
	var_246_string = "Neutral"; // 0x47f MovS
	func_967(var_21_bool, var_246_string); // 0x480 Call
	var_261_int = 8737; // 0x482 PushI
	SetMessage(var_261_int); // 0x483 TObjFunc
	ClearReplies(); // 0x485 TObjFunc
	var_262_int = 8777; // 0x487 PushI
	var_263_int = 9633; // 0x488 PushI
	var_264_int = 9624; // 0x489 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x48a TObjFunc
	var_265_int = 8781; // 0x48c PushI
	var_266_int = 9629; // 0x48d PushI
	var_267_int = 9628; // 0x48e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x48f TObjFunc
	return 0; // 0x491 Return
	
Label_1170:
	var_268_bool = 0; var_269_object = Obj(); // 0x492 PushV
	var_269_object = var_1_object; // 0x493 MovT
	func_4190(var_268_bool, var_269_object); // 0x494 Call
	if(var_268_bool == 0) goto Label_1195; // 0x496 JumpB
	var_272_string = ""; // 0x497 PushV
	var_272_string = "Neutral"; // 0x498 MovS
	func_967(var_21_bool, var_272_string); // 0x499 Call
	var_273_int = 9805; // 0x49b PushI
	SetMessage(var_273_int); // 0x49c TObjFunc
	ClearReplies(); // 0x49e TObjFunc
	var_274_int = 9806; // 0x4a0 PushI
	var_275_int = 10801; // 0x4a1 PushI
	var_276_int = 10800; // 0x4a2 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x4a3 TObjFunc
	var_277_int = 9822; // 0x4a5 PushI
	var_278_int = 10801; // 0x4a6 PushI
	var_279_int = 10818; // 0x4a7 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x4a8 TObjFunc
	return 0; // 0x4aa Return
	
Label_1195:
	var_280_bool = 0; // 0x4ab PushV
	var_280_bool = 0; // 0x4ac MovB
	var_281_bool = 0; var_282_object = Obj(); // 0x4ad PushV
	var_282_object = var_1_object; // 0x4ae MovT
	func_4272(var_281_bool, var_282_object); // 0x4af Call
	if(var_281_bool == 0) goto Label_1209; // 0x4b1 JumpB
	var_290_bool = 0; var_291_object = Obj(); // 0x4b2 PushV
	var_291_object = var_1_object; // 0x4b3 MovT
	func_4260(var_291_object); // 0x4b4 Call
	var_296_bool = var_290_bool == 0; // 0x4b6 Not
	if(var_296_bool == 0) goto Label_1209; // 0x4b7 JumpB
	var_280_bool = 1; // 0x4b8 MovB
	
Label_1209:
	if(var_280_bool == 0) goto Label_1225; // 0x4b9 JumpB
	var_297_string = ""; // 0x4ba PushV
	var_297_string = "Neutral"; // 0x4bb MovS
	func_967(var_21_bool, var_297_string); // 0x4bc Call
	var_298_int = 9078; // 0x4be PushI
	SetMessage(var_298_int); // 0x4bf TObjFunc
	ClearReplies(); // 0x4c1 TObjFunc
	var_299_int = 9079; // 0x4c3 PushI
	var_300_int = 9958; // 0x4c4 PushI
	var_301_int = 9957; // 0x4c5 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x4c6 TObjFunc
	return 0; // 0x4c8 Return
	
Label_1225:
	var_302_bool = 0; var_303_object = Obj(); // 0x4c9 PushV
	var_303_object = var_1_object; // 0x4ca MovT
	func_4190(var_302_bool, var_303_object); // 0x4cb Call
	if(var_302_bool == 0) goto Label_1250; // 0x4cd JumpB
	var_304_string = ""; // 0x4ce PushV
	var_304_string = "Neutral"; // 0x4cf MovS
	func_967(var_21_bool, var_304_string); // 0x4d0 Call
	var_305_int = 8769; // 0x4d2 PushI
	SetMessage(var_305_int); // 0x4d3 TObjFunc
	ClearReplies(); // 0x4d5 TObjFunc
	var_306_int = 8770; // 0x4d7 PushI
	var_307_int = 9621; // 0x4d8 PushI
	var_308_int = 9617; // 0x4d9 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x4da TObjFunc
	var_309_int = 8771; // 0x4dc PushI
	var_310_int = 9619; // 0x4dd PushI
	var_311_int = 9618; // 0x4de PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_312_string = ""; // 0x4e2 PushV
	var_312_string = "Neutral"; // 0x4e3 MovS
	func_967(var_21_bool, var_312_string); // 0x4e4 Call
	var_313_int = 8778; // 0x4e6 PushI
	SetMessage(var_313_int); // 0x4e7 TObjFunc
	ClearReplies(); // 0x4e9 TObjFunc
	var_314_bool = 0; var_315_object = Obj(); // 0x4eb PushV
	var_315_object = var_1_object; // 0x4ec MovT
	func_4200(var_315_object); // 0x4ed Call
	if(var_314_bool == 0) goto Label_1269; // 0x4ef JumpB
	var_316_int = 11141; // 0x4f0 PushI
	var_317_int = 12331; // 0x4f1 PushI
	var_318_int = 12330; // 0x4f2 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x4f3 TObjFunc
	
Label_1269:
	var_319_bool = 0; var_320_object = Obj(); // 0x4f5 PushV
	var_320_object = var_1_object; // 0x4f6 MovT
	func_4224(var_320_object); // 0x4f7 Call
	if(var_319_bool == 0) goto Label_1279; // 0x4f9 JumpB
	var_325_int = 8779; // 0x4fa PushI
	var_326_int = 9681; // 0x4fb PushI
	var_327_int = 9626; // 0x4fc PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x4fd TObjFunc
	
Label_1279:
	var_328_bool = 0; var_329_object = Obj(); // 0x4ff PushV
	var_329_object = var_1_object; // 0x500 MovT
	func_4236(var_329_object); // 0x501 Call
	if(var_328_bool == 0) goto Label_1289; // 0x503 JumpB
	var_334_int = 8780; // 0x504 PushI
	var_335_int = 9669; // 0x505 PushI
	var_336_int = 9627; // 0x506 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x507 TObjFunc
	
Label_1289:
	var_337_bool = 0; // 0x509 PushV
	var_337_bool = 0; // 0x50a MovB
	var_338_bool = 0; // 0x50b PushV
	var_338_bool = 0; // 0x50c MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x50d PushV
	var_340_object = var_1_object; // 0x50e MovT
	func_4248(var_340_object); // 0x50f Call
	if(var_339_bool == 0) goto Label_1305; // 0x511 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x512 PushV
	var_346_object = var_1_object; // 0x513 MovT
	func_4200(var_346_object); // 0x514 Call
	var_347_bool = var_345_bool == 0; // 0x516 Not
	if(var_347_bool == 0) goto Label_1305; // 0x517 JumpB
	var_338_bool = 1; // 0x518 MovB
	
Label_1305:
	if(var_338_bool == 0) goto Label_1313; // 0x519 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x51a PushV
	var_349_object = var_1_object; // 0x51b MovT
	func_4260(var_349_object); // 0x51c Call
	var_350_bool = var_348_bool == 0; // 0x51e Not
	if(var_350_bool == 0) goto Label_1313; // 0x51f JumpB
	var_337_bool = 1; // 0x520 MovB
	
Label_1313:
	if(var_337_bool == 0) goto Label_1319; // 0x521 JumpB
	var_351_int = 8802; // 0x522 PushI
	var_352_int = 9651; // 0x523 PushI
	var_353_int = 9650; // 0x524 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x525 TObjFunc
	
Label_1319:
	var_354_int = 11140; // 0x527 PushI
	var_355_int = -1; // 0x528 PushI
	var_356_int = 12329; // 0x529 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x52a TObjFunc
	return 0; // 0x52c Return
	
Label_1325:
	var_357_int = 9651; // 0x52d PushI
	var_358_bool = var_20_string == var_357_int; // 0x52e Eq
	if(var_358_bool == 0) goto Label_1343; // 0x52f JumpB
	var_359_string = ""; // 0x530 PushV
	var_359_string = "Neutral"; // 0x531 MovS
	func_967(var_21_bool, var_359_string); // 0x532 Call
	var_360_int = 8803; // 0x534 PushI
	SetMessage(var_360_int); // 0x535 TObjFunc
	ClearReplies(); // 0x537 TObjFunc
	var_361_int = 8804; // 0x539 PushI
	var_362_int = 9640; // 0x53a PushI
	var_363_int = 9652; // 0x53b PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x53c TObjFunc
	return 0; // 0x53e Return
	
Label_1343:
	var_364_int = 9640; // 0x53f PushI
	var_365_bool = var_20_string == var_364_int; // 0x540 Eq
	if(var_365_bool == 0) goto Label_1366; // 0x541 JumpB
	var_366_string = ""; // 0x542 PushV
	var_366_string = "Neutral"; // 0x543 MovS
	func_967(var_21_bool, var_366_string); // 0x544 Call
	var_367_int = 8793; // 0x546 PushI
	SetMessage(var_367_int); // 0x547 TObjFunc
	ClearReplies(); // 0x549 TObjFunc
	var_368_int = 8795; // 0x54b PushI
	var_369_int = 9643; // 0x54c PushI
	var_370_int = 9642; // 0x54d PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x54e TObjFunc
	var_371_int = 8794; // 0x550 PushI
	var_372_int = -1; // 0x551 PushI
	var_373_int = 9641; // 0x552 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x553 TObjFunc
	return 0; // 0x555 Return
	
Label_1366:
	var_374_int = 9643; // 0x556 PushI
	var_375_bool = var_20_string == var_374_int; // 0x557 Eq
	if(var_375_bool == 0) goto Label_1384; // 0x558 JumpB
	var_376_string = ""; // 0x559 PushV
	var_376_string = "Neutral"; // 0x55a MovS
	func_967(var_21_bool, var_376_string); // 0x55b Call
	var_377_int = 8796; // 0x55d PushI
	SetMessage(var_377_int); // 0x55e TObjFunc
	ClearReplies(); // 0x560 TObjFunc
	var_378_int = 8797; // 0x562 PushI
	var_379_int = -1; // 0x563 PushI
	var_380_int = 9644; // 0x564 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x565 TObjFunc
	return 0; // 0x567 Return
	
Label_1384:
	var_381_int = 9669; // 0x568 PushI
	var_382_bool = var_20_string == var_381_int; // 0x569 Eq
	if(var_382_bool == 0) goto Label_1402; // 0x56a JumpB
	var_383_string = ""; // 0x56b PushV
	var_383_string = "Neutral"; // 0x56c MovS
	func_967(var_21_bool, var_383_string); // 0x56d Call
	var_384_int = 8818; // 0x56f PushI
	SetMessage(var_384_int); // 0x570 TObjFunc
	ClearReplies(); // 0x572 TObjFunc
	var_385_int = 8819; // 0x574 PushI
	var_386_int = 9666; // 0x575 PushI
	var_387_int = 9670; // 0x576 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x577 TObjFunc
	return 0; // 0x579 Return
	
Label_1402:
	var_388_int = 9666; // 0x57a PushI
	var_389_bool = var_20_string == var_388_int; // 0x57b Eq
	if(var_389_bool == 0) goto Label_1425; // 0x57c JumpB
	var_390_string = ""; // 0x57d PushV
	var_390_string = "Neutral"; // 0x57e MovS
	func_967(var_21_bool, var_390_string); // 0x57f Call
	var_391_int = 8815; // 0x581 PushI
	SetMessage(var_391_int); // 0x582 TObjFunc
	ClearReplies(); // 0x584 TObjFunc
	var_392_int = 8817; // 0x586 PushI
	var_393_int = 9671; // 0x587 PushI
	var_394_int = 9668; // 0x588 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x589 TObjFunc
	var_395_int = 8816; // 0x58b PushI
	var_396_int = -1; // 0x58c PushI
	var_397_int = 9667; // 0x58d PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x58e TObjFunc
	return 0; // 0x590 Return
	
Label_1425:
	var_398_int = 9671; // 0x591 PushI
	var_399_bool = var_20_string == var_398_int; // 0x592 Eq
	if(var_399_bool == 0) goto Label_1448; // 0x593 JumpB
	var_400_string = ""; // 0x594 PushV
	var_400_string = "Neutral"; // 0x595 MovS
	func_967(var_21_bool, var_400_string); // 0x596 Call
	var_401_int = 8820; // 0x598 PushI
	SetMessage(var_401_int); // 0x599 TObjFunc
	ClearReplies(); // 0x59b TObjFunc
	var_402_int = 8821; // 0x59d PushI
	var_403_int = -1; // 0x59e PushI
	var_404_int = 9672; // 0x59f PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x5a0 TObjFunc
	var_405_int = 8822; // 0x5a2 PushI
	var_406_int = 9674; // 0x5a3 PushI
	var_407_int = 9673; // 0x5a4 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_408_int = 9674; // 0x5a8 PushI
	var_409_bool = var_20_string == var_408_int; // 0x5a9 Eq
	if(var_409_bool == 0) goto Label_1466; // 0x5aa JumpB
	var_410_string = ""; // 0x5ab PushV
	var_410_string = "Neutral"; // 0x5ac MovS
	func_967(var_21_bool, var_410_string); // 0x5ad Call
	var_411_int = 8823; // 0x5af PushI
	SetMessage(var_411_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_412_int = 8824; // 0x5b4 PushI
	var_413_int = 9677; // 0x5b5 PushI
	var_414_int = 9675; // 0x5b6 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_415_int = 9677; // 0x5ba PushI
	var_416_bool = var_20_string == var_415_int; // 0x5bb Eq
	if(var_416_bool == 0) goto Label_1489; // 0x5bc JumpB
	var_417_string = ""; // 0x5bd PushV
	var_417_string = "Neutral"; // 0x5be MovS
	func_967(var_21_bool, var_417_string); // 0x5bf Call
	var_418_int = 8826; // 0x5c1 PushI
	SetMessage(var_418_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_419_int = 8827; // 0x5c6 PushI
	var_420_int = -1; // 0x5c7 PushI
	var_421_int = 9678; // 0x5c8 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x5c9 TObjFunc
	var_422_int = 8828; // 0x5cb PushI
	var_423_int = -1; // 0x5cc PushI
	var_424_int = 9679; // 0x5cd PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x5ce TObjFunc
	return 0; // 0x5d0 Return
	
Label_1489:
	var_425_int = 9681; // 0x5d1 PushI
	var_426_bool = var_20_string == var_425_int; // 0x5d2 Eq
	if(var_426_bool == 0) goto Label_1507; // 0x5d3 JumpB
	var_427_string = ""; // 0x5d4 PushV
	var_427_string = "Neutral"; // 0x5d5 MovS
	func_967(var_21_bool, var_427_string); // 0x5d6 Call
	var_428_int = 8829; // 0x5d8 PushI
	SetMessage(var_428_int); // 0x5d9 TObjFunc
	ClearReplies(); // 0x5db TObjFunc
	var_429_int = 8830; // 0x5dd PushI
	var_430_int = 9683; // 0x5de PushI
	var_431_int = 9682; // 0x5df PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x5e0 TObjFunc
	return 0; // 0x5e2 Return
	
Label_1507:
	var_432_int = 9683; // 0x5e3 PushI
	var_433_bool = var_20_string == var_432_int; // 0x5e4 Eq
	if(var_433_bool == 0) goto Label_1525; // 0x5e5 JumpB
	var_434_string = ""; // 0x5e6 PushV
	var_434_string = "Neutral"; // 0x5e7 MovS
	func_967(var_21_bool, var_434_string); // 0x5e8 Call
	var_435_int = 8831; // 0x5ea PushI
	SetMessage(var_435_int); // 0x5eb TObjFunc
	ClearReplies(); // 0x5ed TObjFunc
	var_436_int = 8832; // 0x5ef PushI
	var_437_int = -1; // 0x5f0 PushI
	var_438_int = 9684; // 0x5f1 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_439_int = 12331; // 0x5f5 PushI
	var_440_bool = var_20_string == var_439_int; // 0x5f6 Eq
	if(var_440_bool == 0) goto Label_1543; // 0x5f7 JumpB
	var_441_string = ""; // 0x5f8 PushV
	var_441_string = "Neutral"; // 0x5f9 MovS
	func_967(var_21_bool, var_441_string); // 0x5fa Call
	var_442_int = 11142; // 0x5fc PushI
	SetMessage(var_442_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_443_int = 11143; // 0x601 PushI
	var_444_int = -1; // 0x602 PushI
	var_445_int = 12332; // 0x603 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x604 TObjFunc
	return 0; // 0x606 Return
	
Label_1543:
	var_446_int = 9619; // 0x607 PushI
	var_447_bool = var_20_string == var_446_int; // 0x608 Eq
	if(var_447_bool == 0) goto Label_1566; // 0x609 JumpB
	var_448_string = ""; // 0x60a PushV
	var_448_string = "Neutral"; // 0x60b MovS
	func_967(var_21_bool, var_448_string); // 0x60c Call
	var_449_int = 8772; // 0x60e PushI
	SetMessage(var_449_int); // 0x60f TObjFunc
	ClearReplies(); // 0x611 TObjFunc
	var_450_int = 8773; // 0x613 PushI
	var_451_int = 9621; // 0x614 PushI
	var_452_int = 9620; // 0x615 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x616 TObjFunc
	var_453_int = 8814; // 0x618 PushI
	var_454_int = 9621; // 0x619 PushI
	var_455_int = 9663; // 0x61a PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x61b TObjFunc
	return 0; // 0x61d Return
	
Label_1566:
	var_456_int = 9621; // 0x61e PushI
	var_457_bool = var_20_string == var_456_int; // 0x61f Eq
	if(var_457_bool == 0) goto Label_1589; // 0x620 JumpB
	var_458_string = ""; // 0x621 PushV
	var_458_string = "Neutral"; // 0x622 MovS
	func_967(var_21_bool, var_458_string); // 0x623 Call
	var_459_int = 8774; // 0x625 PushI
	SetMessage(var_459_int); // 0x626 TObjFunc
	ClearReplies(); // 0x628 TObjFunc
	var_460_int = 8775; // 0x62a PushI
	var_461_int = 9623; // 0x62b PushI
	var_462_int = 9622; // 0x62c PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x62d TObjFunc
	var_463_int = 10448; // 0x62f PushI
	var_464_int = 9623; // 0x630 PushI
	var_465_int = 11518; // 0x631 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x632 TObjFunc
	return 0; // 0x634 Return
	
Label_1589:
	var_466_int = 9623; // 0x635 PushI
	var_467_bool = var_20_string == var_466_int; // 0x636 Eq
	if(var_467_bool == 0) goto Label_1617; // 0x637 JumpB
	var_468_string = ""; // 0x638 PushV
	var_468_string = "Neutral"; // 0x639 MovS
	func_967(var_21_bool, var_468_string); // 0x63a Call
	var_469_int = 8776; // 0x63c PushI
	SetMessage(var_469_int); // 0x63d TObjFunc
	ClearReplies(); // 0x63f TObjFunc
	var_470_int = 8739; // 0x641 PushI
	var_471_int = 9577; // 0x642 PushI
	var_472_int = 9576; // 0x643 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x644 TObjFunc
	var_473_int = 8764; // 0x646 PushI
	var_474_int = 9577; // 0x647 PushI
	var_475_int = 9608; // 0x648 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x649 TObjFunc
	var_476_int = 8765; // 0x64b PushI
	var_477_int = 9611; // 0x64c PushI
	var_478_int = 9610; // 0x64d PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x64e TObjFunc
	return 0; // 0x650 Return
	
Label_1617:
	var_479_int = 9611; // 0x651 PushI
	var_480_bool = var_20_string == var_479_int; // 0x652 Eq
	if(var_480_bool == 0) goto Label_1640; // 0x653 JumpB
	var_481_string = ""; // 0x654 PushV
	var_481_string = "Neutral"; // 0x655 MovS
	func_967(var_21_bool, var_481_string); // 0x656 Call
	var_482_int = 8766; // 0x658 PushI
	SetMessage(var_482_int); // 0x659 TObjFunc
	ClearReplies(); // 0x65b TObjFunc
	var_483_int = 8767; // 0x65d PushI
	var_484_int = 9587; // 0x65e PushI
	var_485_int = 9612; // 0x65f PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x660 TObjFunc
	var_486_int = 8768; // 0x662 PushI
	var_487_int = 9587; // 0x663 PushI
	var_488_int = 9614; // 0x664 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x665 TObjFunc
	return 0; // 0x667 Return
	
Label_1640:
	var_489_int = 9577; // 0x668 PushI
	var_490_bool = var_20_string == var_489_int; // 0x669 Eq
	if(var_490_bool == 0) goto Label_1663; // 0x66a JumpB
	var_491_string = ""; // 0x66b PushV
	var_491_string = "Neutral"; // 0x66c MovS
	func_967(var_21_bool, var_491_string); // 0x66d Call
	var_492_int = 8740; // 0x66f PushI
	SetMessage(var_492_int); // 0x670 TObjFunc
	ClearReplies(); // 0x672 TObjFunc
	var_493_int = 8746; // 0x674 PushI
	var_494_int = 9587; // 0x675 PushI
	var_495_int = 9586; // 0x676 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x677 TObjFunc
	var_496_int = 8741; // 0x679 PushI
	var_497_int = 9579; // 0x67a PushI
	var_498_int = 9578; // 0x67b PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_499_int = 9579; // 0x67f PushI
	var_500_bool = var_20_string == var_499_int; // 0x680 Eq
	if(var_500_bool == 0) goto Label_1691; // 0x681 JumpB
	var_501_string = ""; // 0x682 PushV
	var_501_string = "Neutral"; // 0x683 MovS
	func_967(var_21_bool, var_501_string); // 0x684 Call
	var_502_int = 8742; // 0x686 PushI
	SetMessage(var_502_int); // 0x687 TObjFunc
	ClearReplies(); // 0x689 TObjFunc
	var_503_int = 8743; // 0x68b PushI
	var_504_int = 9587; // 0x68c PushI
	var_505_int = 9580; // 0x68d PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x68e TObjFunc
	var_506_int = 8744; // 0x690 PushI
	var_507_int = 9587; // 0x691 PushI
	var_508_int = 9582; // 0x692 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x693 TObjFunc
	var_509_int = 8745; // 0x695 PushI
	var_510_int = 9587; // 0x696 PushI
	var_511_int = 9584; // 0x697 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x698 TObjFunc
	return 0; // 0x69a Return
	
Label_1691:
	var_512_int = 9587; // 0x69b PushI
	var_513_bool = var_20_string == var_512_int; // 0x69c Eq
	if(var_513_bool == 0) goto Label_1719; // 0x69d JumpB
	var_514_string = ""; // 0x69e PushV
	var_514_string = "Neutral"; // 0x69f MovS
	func_967(var_21_bool, var_514_string); // 0x6a0 Call
	var_515_int = 8747; // 0x6a2 PushI
	SetMessage(var_515_int); // 0x6a3 TObjFunc
	ClearReplies(); // 0x6a5 TObjFunc
	var_516_int = 8748; // 0x6a7 PushI
	var_517_int = 9589; // 0x6a8 PushI
	var_518_int = 9588; // 0x6a9 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x6aa TObjFunc
	var_519_int = 8762; // 0x6ac PushI
	var_520_int = 9589; // 0x6ad PushI
	var_521_int = 9604; // 0x6ae PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x6af TObjFunc
	var_522_int = 8763; // 0x6b1 PushI
	var_523_int = 9589; // 0x6b2 PushI
	var_524_int = 9606; // 0x6b3 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x6b4 TObjFunc
	return 0; // 0x6b6 Return
	
Label_1719:
	var_525_int = 9589; // 0x6b7 PushI
	var_526_bool = var_20_string == var_525_int; // 0x6b8 Eq
	if(var_526_bool == 0) goto Label_1737; // 0x6b9 JumpB
	var_527_string = ""; // 0x6ba PushV
	var_527_string = "Neutral"; // 0x6bb MovS
	func_967(var_21_bool, var_527_string); // 0x6bc Call
	var_528_int = 8749; // 0x6be PushI
	SetMessage(var_528_int); // 0x6bf TObjFunc
	ClearReplies(); // 0x6c1 TObjFunc
	var_529_int = 8761; // 0x6c3 PushI
	var_530_int = -1; // 0x6c4 PushI
	var_531_int = 9603; // 0x6c5 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x6c6 TObjFunc
	return 0; // 0x6c8 Return
	
Label_1737:
	var_532_int = 9958; // 0x6c9 PushI
	var_533_bool = var_20_string == var_532_int; // 0x6ca Eq
	if(var_533_bool == 0) goto Label_1755; // 0x6cb JumpB
	var_534_string = ""; // 0x6cc PushV
	var_534_string = "Neutral"; // 0x6cd MovS
	func_967(var_21_bool, var_534_string); // 0x6ce Call
	var_535_int = 9080; // 0x6d0 PushI
	SetMessage(var_535_int); // 0x6d1 TObjFunc
	ClearReplies(); // 0x6d3 TObjFunc
	var_536_int = 9081; // 0x6d5 PushI
	var_537_int = 11530; // 0x6d6 PushI
	var_538_int = 9959; // 0x6d7 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x6d8 TObjFunc
	return 0; // 0x6da Return
	
Label_1755:
	var_539_int = 11530; // 0x6db PushI
	var_540_bool = var_20_string == var_539_int; // 0x6dc Eq
	if(var_540_bool == 0) goto Label_1773; // 0x6dd JumpB
	var_541_string = ""; // 0x6de PushV
	var_541_string = "Neutral"; // 0x6df MovS
	func_967(var_21_bool, var_541_string); // 0x6e0 Call
	var_542_int = 10457; // 0x6e2 PushI
	SetMessage(var_542_int); // 0x6e3 TObjFunc
	ClearReplies(); // 0x6e5 TObjFunc
	var_543_int = 10458; // 0x6e7 PushI
	var_544_int = 11532; // 0x6e8 PushI
	var_545_int = 11531; // 0x6e9 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x6ea TObjFunc
	return 0; // 0x6ec Return
	
Label_1773:
	var_546_int = 11532; // 0x6ed PushI
	var_547_bool = var_20_string == var_546_int; // 0x6ee Eq
	if(var_547_bool == 0) goto Label_1791; // 0x6ef JumpB
	var_548_string = ""; // 0x6f0 PushV
	var_548_string = "Neutral"; // 0x6f1 MovS
	func_967(var_21_bool, var_548_string); // 0x6f2 Call
	var_549_int = 10459; // 0x6f4 PushI
	SetMessage(var_549_int); // 0x6f5 TObjFunc
	ClearReplies(); // 0x6f7 TObjFunc
	var_550_int = 10460; // 0x6f9 PushI
	var_551_int = 11534; // 0x6fa PushI
	var_552_int = 11533; // 0x6fb PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x6fc TObjFunc
	return 0; // 0x6fe Return
	
Label_1791:
	var_553_int = 11534; // 0x6ff PushI
	var_554_bool = var_20_string == var_553_int; // 0x700 Eq
	if(var_554_bool == 0) goto Label_1809; // 0x701 JumpB
	var_555_string = ""; // 0x702 PushV
	var_555_string = "Neutral"; // 0x703 MovS
	func_967(var_21_bool, var_555_string); // 0x704 Call
	var_556_int = 10461; // 0x706 PushI
	SetMessage(var_556_int); // 0x707 TObjFunc
	ClearReplies(); // 0x709 TObjFunc
	var_557_int = 10462; // 0x70b PushI
	var_558_int = 9960; // 0x70c PushI
	var_559_int = 11535; // 0x70d PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x70e TObjFunc
	return 0; // 0x710 Return
	
Label_1809:
	var_560_int = 9960; // 0x711 PushI
	var_561_bool = var_20_string == var_560_int; // 0x712 Eq
	if(var_561_bool == 0) goto Label_1827; // 0x713 JumpB
	var_562_string = ""; // 0x714 PushV
	var_562_string = "Neutral"; // 0x715 MovS
	func_967(var_21_bool, var_562_string); // 0x716 Call
	var_563_int = 9082; // 0x718 PushI
	SetMessage(var_563_int); // 0x719 TObjFunc
	ClearReplies(); // 0x71b TObjFunc
	var_564_int = 9083; // 0x71d PushI
	var_565_int = 9962; // 0x71e PushI
	var_566_int = 9961; // 0x71f PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x720 TObjFunc
	return 0; // 0x722 Return
	
Label_1827:
	var_567_int = 9962; // 0x723 PushI
	var_568_bool = var_20_string == var_567_int; // 0x724 Eq
	if(var_568_bool == 0) goto Label_1845; // 0x725 JumpB
	var_569_string = ""; // 0x726 PushV
	var_569_string = "Neutral"; // 0x727 MovS
	func_967(var_21_bool, var_569_string); // 0x728 Call
	var_570_int = 9084; // 0x72a PushI
	SetMessage(var_570_int); // 0x72b TObjFunc
	ClearReplies(); // 0x72d TObjFunc
	var_571_int = 9085; // 0x72f PushI
	var_572_int = -1; // 0x730 PushI
	var_573_int = 9963; // 0x731 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x732 TObjFunc
	return 0; // 0x734 Return
	
Label_1845:
	var_574_int = 10801; // 0x735 PushI
	var_575_bool = var_20_string == var_574_int; // 0x736 Eq
	if(var_575_bool == 0) goto Label_1868; // 0x737 JumpB
	var_576_string = ""; // 0x738 PushV
	var_576_string = "Neutral"; // 0x739 MovS
	func_967(var_21_bool, var_576_string); // 0x73a Call
	var_577_int = 9807; // 0x73c PushI
	SetMessage(var_577_int); // 0x73d TObjFunc
	ClearReplies(); // 0x73f TObjFunc
	var_578_int = 9808; // 0x741 PushI
	var_579_int = 10803; // 0x742 PushI
	var_580_int = 10802; // 0x743 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x744 TObjFunc
	var_581_int = 9821; // 0x746 PushI
	var_582_int = 10803; // 0x747 PushI
	var_583_int = 10816; // 0x748 PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x749 TObjFunc
	return 0; // 0x74b Return
	
Label_1868:
	var_584_int = 10803; // 0x74c PushI
	var_585_bool = var_20_string == var_584_int; // 0x74d Eq
	if(var_585_bool == 0) goto Label_1896; // 0x74e JumpB
	var_586_string = ""; // 0x74f PushV
	var_586_string = "Neutral"; // 0x750 MovS
	func_967(var_21_bool, var_586_string); // 0x751 Call
	var_587_int = 9809; // 0x753 PushI
	SetMessage(var_587_int); // 0x754 TObjFunc
	ClearReplies(); // 0x756 TObjFunc
	var_588_int = 9810; // 0x758 PushI
	var_589_int = 10805; // 0x759 PushI
	var_590_int = 10804; // 0x75a PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x75b TObjFunc
	var_591_int = 9814; // 0x75d PushI
	var_592_int = 10809; // 0x75e PushI
	var_593_int = 10808; // 0x75f PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x760 TObjFunc
	var_594_int = 9820; // 0x762 PushI
	var_595_int = 10809; // 0x763 PushI
	var_596_int = 10814; // 0x764 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x765 TObjFunc
	return 0; // 0x767 Return
	
Label_1896:
	var_597_int = 10809; // 0x768 PushI
	var_598_bool = var_20_string == var_597_int; // 0x769 Eq
	if(var_598_bool == 0) goto Label_1914; // 0x76a JumpB
	var_599_string = ""; // 0x76b PushV
	var_599_string = "Neutral"; // 0x76c MovS
	func_967(var_21_bool, var_599_string); // 0x76d Call
	var_600_int = 9815; // 0x76f PushI
	SetMessage(var_600_int); // 0x770 TObjFunc
	ClearReplies(); // 0x772 TObjFunc
	var_601_int = 9816; // 0x774 PushI
	var_602_int = 10811; // 0x775 PushI
	var_603_int = 10810; // 0x776 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x777 TObjFunc
	return 0; // 0x779 Return
	
Label_1914:
	var_604_int = 10811; // 0x77a PushI
	var_605_bool = var_20_string == var_604_int; // 0x77b Eq
	if(var_605_bool == 0) goto Label_1937; // 0x77c JumpB
	var_606_string = ""; // 0x77d PushV
	var_606_string = "Neutral"; // 0x77e MovS
	func_967(var_21_bool, var_606_string); // 0x77f Call
	var_607_int = 9817; // 0x781 PushI
	SetMessage(var_607_int); // 0x782 TObjFunc
	ClearReplies(); // 0x784 TObjFunc
	var_608_int = 9818; // 0x786 PushI
	var_609_int = -1; // 0x787 PushI
	var_610_int = 10812; // 0x788 PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0x789 TObjFunc
	var_611_int = 9819; // 0x78b PushI
	var_612_int = -1; // 0x78c PushI
	var_613_int = 10813; // 0x78d PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x78e TObjFunc
	return 0; // 0x790 Return
	
Label_1937:
	var_614_int = 10805; // 0x791 PushI
	var_615_bool = var_20_string == var_614_int; // 0x792 Eq
	if(var_615_bool == 0) goto Label_1960; // 0x793 JumpB
	var_616_string = ""; // 0x794 PushV
	var_616_string = "Neutral"; // 0x795 MovS
	func_967(var_21_bool, var_616_string); // 0x796 Call
	var_617_int = 9811; // 0x798 PushI
	SetMessage(var_617_int); // 0x799 TObjFunc
	ClearReplies(); // 0x79b TObjFunc
	var_618_int = 9812; // 0x79d PushI
	var_619_int = -1; // 0x79e PushI
	var_620_int = 10806; // 0x79f PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x7a0 TObjFunc
	var_621_int = 9813; // 0x7a2 PushI
	var_622_int = -1; // 0x7a3 PushI
	var_623_int = 10807; // 0x7a4 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x7a5 TObjFunc
	return 0; // 0x7a7 Return
	
Label_1960:
	var_624_int = 9629; // 0x7a8 PushI
	var_625_bool = var_20_string == var_624_int; // 0x7a9 Eq
	if(var_625_bool == 0) goto Label_1988; // 0x7aa JumpB
	var_626_object = Obj(); var_627_object = Obj(); // 0x7ab PushV
	var_626_object = var_1_object; // 0x7ac MovT
	var_627_object = var_0_object; // 0x7ad MovT
	func_4012(); // 0x7ae Call
	var_630_string = ""; // 0x7b0 PushV
	var_630_string = "Neutral"; // 0x7b1 MovS
	func_967(var_21_bool, var_630_string); // 0x7b2 Call
	var_631_int = 8782; // 0x7b4 PushI
	SetMessage(var_631_int); // 0x7b5 TObjFunc
	ClearReplies(); // 0x7b7 TObjFunc
	var_632_int = 8783; // 0x7b9 PushI
	var_633_int = 9631; // 0x7ba PushI
	var_634_int = 9630; // 0x7bb PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x7bc TObjFunc
	var_635_int = 10447; // 0x7be PushI
	var_636_int = 9631; // 0x7bf PushI
	var_637_int = 11516; // 0x7c0 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x7c1 TObjFunc
	return 0; // 0x7c3 Return
	
Label_1988:
	var_638_int = 9631; // 0x7c4 PushI
	var_639_bool = var_20_string == var_638_int; // 0x7c5 Eq
	if(var_639_bool == 0) goto Label_2006; // 0x7c6 JumpB
	var_640_string = ""; // 0x7c7 PushV
	var_640_string = "Neutral"; // 0x7c8 MovS
	func_967(var_21_bool, var_640_string); // 0x7c9 Call
	var_641_int = 8784; // 0x7cb PushI
	SetMessage(var_641_int); // 0x7cc TObjFunc
	ClearReplies(); // 0x7ce TObjFunc
	var_642_int = 8785; // 0x7d0 PushI
	var_643_int = 9591; // 0x7d1 PushI
	var_644_int = 9632; // 0x7d2 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x7d3 TObjFunc
	return 0; // 0x7d5 Return
	
Label_2006:
	var_645_int = 9633; // 0x7d6 PushI
	var_646_bool = var_20_string == var_645_int; // 0x7d7 Eq
	if(var_646_bool == 0) goto Label_2024; // 0x7d8 JumpB
	var_647_string = ""; // 0x7d9 PushV
	var_647_string = "Neutral"; // 0x7da MovS
	func_967(var_21_bool, var_647_string); // 0x7db Call
	var_648_int = 8786; // 0x7dd PushI
	SetMessage(var_648_int); // 0x7de TObjFunc
	ClearReplies(); // 0x7e0 TObjFunc
	var_649_int = 8787; // 0x7e2 PushI
	var_650_int = 9591; // 0x7e3 PushI
	var_651_int = 9634; // 0x7e4 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x7e5 TObjFunc
	return 0; // 0x7e7 Return
	
Label_2024:
	var_652_int = 9591; // 0x7e8 PushI
	var_653_bool = var_20_string == var_652_int; // 0x7e9 Eq
	if(var_653_bool == 0) goto Label_2047; // 0x7ea JumpB
	var_654_string = ""; // 0x7eb PushV
	var_654_string = "Neutral"; // 0x7ec MovS
	func_967(var_21_bool, var_654_string); // 0x7ed Call
	var_655_int = 8751; // 0x7ef PushI
	SetMessage(var_655_int); // 0x7f0 TObjFunc
	ClearReplies(); // 0x7f2 TObjFunc
	var_656_int = 8752; // 0x7f4 PushI
	var_657_int = 9657; // 0x7f5 PushI
	var_658_int = 9592; // 0x7f6 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x7f7 TObjFunc
	var_659_int = 8757; // 0x7f9 PushI
	var_660_int = 9598; // 0x7fa PushI
	var_661_int = 9597; // 0x7fb PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_662_int = 9598; // 0x7ff PushI
	var_663_bool = var_20_string == var_662_int; // 0x800 Eq
	if(var_663_bool == 0) goto Label_2070; // 0x801 JumpB
	var_664_string = ""; // 0x802 PushV
	var_664_string = "Neutral"; // 0x803 MovS
	func_967(var_21_bool, var_664_string); // 0x804 Call
	var_665_int = 8758; // 0x806 PushI
	SetMessage(var_665_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_666_int = 8759; // 0x80b PushI
	var_667_int = 9593; // 0x80c PushI
	var_668_int = 9599; // 0x80d PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x80e TObjFunc
	var_669_int = 8760; // 0x810 PushI
	var_670_int = 9593; // 0x811 PushI
	var_671_int = 9601; // 0x812 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x813 TObjFunc
	return 0; // 0x815 Return
	
Label_2070:
	var_672_int = 9657; // 0x816 PushI
	var_673_bool = var_20_string == var_672_int; // 0x817 Eq
	if(var_673_bool == 0) goto Label_2093; // 0x818 JumpB
	var_674_string = ""; // 0x819 PushV
	var_674_string = "Neutral"; // 0x81a MovS
	func_967(var_21_bool, var_674_string); // 0x81b Call
	var_675_int = 8808; // 0x81d PushI
	SetMessage(var_675_int); // 0x81e TObjFunc
	ClearReplies(); // 0x820 TObjFunc
	var_676_int = 8809; // 0x822 PushI
	var_677_int = 9659; // 0x823 PushI
	var_678_int = 9658; // 0x824 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x825 TObjFunc
	var_679_int = 10449; // 0x827 PushI
	var_680_int = 11521; // 0x828 PushI
	var_681_int = 11520; // 0x829 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x82a TObjFunc
	return 0; // 0x82c Return
	
Label_2093:
	var_682_int = 11521; // 0x82d PushI
	var_683_bool = var_20_string == var_682_int; // 0x82e Eq
	if(var_683_bool == 0) goto Label_2111; // 0x82f JumpB
	var_684_string = ""; // 0x830 PushV
	var_684_string = "Neutral"; // 0x831 MovS
	func_967(var_21_bool, var_684_string); // 0x832 Call
	var_685_int = 10450; // 0x834 PushI
	SetMessage(var_685_int); // 0x835 TObjFunc
	ClearReplies(); // 0x837 TObjFunc
	var_686_int = 10451; // 0x839 PushI
	var_687_int = 11523; // 0x83a PushI
	var_688_int = 11522; // 0x83b PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x83c TObjFunc
	return 0; // 0x83e Return
	
Label_2111:
	var_689_int = 11523; // 0x83f PushI
	var_690_bool = var_20_string == var_689_int; // 0x840 Eq
	if(var_690_bool == 0) goto Label_2129; // 0x841 JumpB
	var_691_string = ""; // 0x842 PushV
	var_691_string = "Neutral"; // 0x843 MovS
	func_967(var_21_bool, var_691_string); // 0x844 Call
	var_692_int = 10452; // 0x846 PushI
	SetMessage(var_692_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_693_int = 10453; // 0x84b PushI
	var_694_int = 9659; // 0x84c PushI
	var_695_int = 11524; // 0x84d PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x84e TObjFunc
	return 0; // 0x850 Return
	
Label_2129:
	var_696_int = 9659; // 0x851 PushI
	var_697_bool = var_20_string == var_696_int; // 0x852 Eq
	if(var_697_bool == 0) goto Label_2152; // 0x853 JumpB
	var_698_string = ""; // 0x854 PushV
	var_698_string = "Neutral"; // 0x855 MovS
	func_967(var_21_bool, var_698_string); // 0x856 Call
	var_699_int = 8810; // 0x858 PushI
	SetMessage(var_699_int); // 0x859 TObjFunc
	ClearReplies(); // 0x85b TObjFunc
	var_700_int = 8811; // 0x85d PushI
	var_701_int = 9661; // 0x85e PushI
	var_702_int = 9660; // 0x85f PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x860 TObjFunc
	var_703_int = 10454; // 0x862 PushI
	var_704_int = 11527; // 0x863 PushI
	var_705_int = 11526; // 0x864 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x865 TObjFunc
	return 0; // 0x867 Return
	
Label_2152:
	var_706_int = 11527; // 0x868 PushI
	var_707_bool = var_20_string == var_706_int; // 0x869 Eq
	if(var_707_bool == 0) goto Label_2170; // 0x86a JumpB
	var_708_string = ""; // 0x86b PushV
	var_708_string = "Neutral"; // 0x86c MovS
	func_967(var_21_bool, var_708_string); // 0x86d Call
	var_709_int = 10455; // 0x86f PushI
	SetMessage(var_709_int); // 0x870 TObjFunc
	ClearReplies(); // 0x872 TObjFunc
	var_710_int = 10456; // 0x874 PushI
	var_711_int = 9593; // 0x875 PushI
	var_712_int = 11528; // 0x876 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x877 TObjFunc
	return 0; // 0x879 Return
	
Label_2170:
	var_713_int = 9661; // 0x87a PushI
	var_714_bool = var_20_string == var_713_int; // 0x87b Eq
	if(var_714_bool == 0) goto Label_2188; // 0x87c JumpB
	var_715_string = ""; // 0x87d PushV
	var_715_string = "Neutral"; // 0x87e MovS
	func_967(var_21_bool, var_715_string); // 0x87f Call
	var_716_int = 8812; // 0x881 PushI
	SetMessage(var_716_int); // 0x882 TObjFunc
	ClearReplies(); // 0x884 TObjFunc
	var_717_int = 8813; // 0x886 PushI
	var_718_int = 9593; // 0x887 PushI
	var_719_int = 9662; // 0x888 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x889 TObjFunc
	return 0; // 0x88b Return
	
Label_2188:
	var_720_int = 9593; // 0x88c PushI
	var_721_bool = var_20_string == var_720_int; // 0x88d Eq
	if(var_721_bool == 0) goto Label_2211; // 0x88e JumpB
	var_722_string = ""; // 0x88f PushV
	var_722_string = "Neutral"; // 0x890 MovS
	func_967(var_21_bool, var_722_string); // 0x891 Call
	var_723_int = 8753; // 0x893 PushI
	SetMessage(var_723_int); // 0x894 TObjFunc
	ClearReplies(); // 0x896 TObjFunc
	var_724_int = 8790; // 0x898 PushI
	var_725_int = 9638; // 0x899 PushI
	var_726_int = 9637; // 0x89a PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x89b TObjFunc
	var_727_int = 8754; // 0x89d PushI
	var_728_int = -1; // 0x89e PushI
	var_729_int = 9594; // 0x89f PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x8a0 TObjFunc
	return 0; // 0x8a2 Return
	
Label_2211:
	var_730_int = 9638; // 0x8a3 PushI
	var_731_bool = var_20_string == var_730_int; // 0x8a4 Eq
	if(var_731_bool == 0) goto Label_2234; // 0x8a5 JumpB
	var_732_string = ""; // 0x8a6 PushV
	var_732_string = "Neutral"; // 0x8a7 MovS
	func_967(var_21_bool, var_732_string); // 0x8a8 Call
	var_733_int = 8791; // 0x8aa PushI
	SetMessage(var_733_int); // 0x8ab TObjFunc
	ClearReplies(); // 0x8ad TObjFunc
	var_734_int = 8798; // 0x8af PushI
	var_735_int = 9646; // 0x8b0 PushI
	var_736_int = 9645; // 0x8b1 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x8b2 TObjFunc
	var_737_int = 8792; // 0x8b4 PushI
	var_738_int = -1; // 0x8b5 PushI
	var_739_int = 9639; // 0x8b6 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x8b7 TObjFunc
	return 0; // 0x8b9 Return
	
Label_2234:
	var_740_int = 9646; // 0x8ba PushI
	var_741_bool = var_20_string == var_740_int; // 0x8bb Eq
	if(var_741_bool == 0) goto Label_2257; // 0x8bc JumpB
	var_742_string = ""; // 0x8bd PushV
	var_742_string = "Neutral"; // 0x8be MovS
	func_967(var_21_bool, var_742_string); // 0x8bf Call
	var_743_int = 8799; // 0x8c1 PushI
	SetMessage(var_743_int); // 0x8c2 TObjFunc
	ClearReplies(); // 0x8c4 TObjFunc
	var_744_int = 8800; // 0x8c6 PushI
	var_745_int = -1; // 0x8c7 PushI
	var_746_int = 9647; // 0x8c8 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x8c9 TObjFunc
	var_747_int = 8801; // 0x8cb PushI
	var_748_int = -1; // 0x8cc PushI
	var_749_int = 9649; // 0x8cd PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x8ce TObjFunc
	return 0; // 0x8d0 Return
	
Label_2257:
	var_3_string = 1; // 0x8d1 TMovB
	var_750_bool = 0; // 0x8d2 PushV
	func_3733(var_750_bool); // 0x8d3 Call
	if(var_750_bool == 0) goto Label_2265; // 0x8d5 JumpB
	lshStopAnimation(); // 0x8d6 Func
	goto Label_2267; // 0x8d8 Jump
	
Label_2267:
	return 0; // 0x8db Return
	
Label_2265:
	StopAnimation(); // 0x8d9 Func
	
Label_2269:
	return 0; // 0x8dd Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x9d4 PushI
	if(var_22_int == 0) goto Label_3272; // 0x9d5 JumpB
	func_3633(); // 0x9d7 Call
	var_24_int = 11563; // 0x9d9 PushI
	var_25_bool = var_21_bool == var_24_int; // 0x9da Eq
	if(var_25_bool == 0) goto Label_2539; // 0x9db JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x9dc PushV
	var_26_object = var_1_object; // 0x9dd MovT
	var_27_object = var_0_object; // 0x9de MovT
	func_4024(); // 0x9df Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x9e1 PushV
	var_30_object = var_1_object; // 0x9e2 MovT
	var_31_object = var_0_object; // 0x9e3 MovT
	func_4030(); // 0x9e4 Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x9e6 PushV
	var_89_object = var_1_object; // 0x9e7 MovT
	var_90_object = var_0_object; // 0x9e8 MovT
	func_3889(); // 0x9e9 Call
	
Label_2539:
	var_115_int = 11566; // 0x9eb PushI
	var_116_bool = var_21_bool == var_115_int; // 0x9ec Eq
	if(var_116_bool == 0) goto Label_2557; // 0x9ed JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x9ee PushV
	var_117_object = var_1_object; // 0x9ef MovT
	var_118_object = var_0_object; // 0x9f0 MovT
	func_4024(); // 0x9f1 Call
	var_119_object = Obj(); var_120_object = Obj(); // 0x9f3 PushV
	var_119_object = var_1_object; // 0x9f4 MovT
	var_120_object = var_0_object; // 0x9f5 MovT
	func_4030(); // 0x9f6 Call
	var_121_object = Obj(); var_122_object = Obj(); // 0x9f8 PushV
	var_121_object = var_1_object; // 0x9f9 MovT
	var_122_object = var_0_object; // 0x9fa MovT
	func_3889(); // 0x9fb Call
	
Label_2557:
	var_123_int = 11569; // 0x9fd PushI
	var_124_bool = var_21_bool == var_123_int; // 0x9fe Eq
	if(var_124_bool == 0) goto Label_2575; // 0x9ff JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0xa00 PushV
	var_125_object = var_1_object; // 0xa01 MovT
	var_126_object = var_0_object; // 0xa02 MovT
	func_4024(); // 0xa03 Call
	var_127_object = Obj(); var_128_object = Obj(); // 0xa05 PushV
	var_127_object = var_1_object; // 0xa06 MovT
	var_128_object = var_0_object; // 0xa07 MovT
	func_4030(); // 0xa08 Call
	var_129_object = Obj(); var_130_object = Obj(); // 0xa0a PushV
	var_129_object = var_1_object; // 0xa0b MovT
	var_130_object = var_0_object; // 0xa0c MovT
	func_3889(); // 0xa0d Call
	
Label_2575:
	var_131_int = 11570; // 0xa0f PushI
	var_132_bool = var_21_bool == var_131_int; // 0xa10 Eq
	if(var_132_bool == 0) goto Label_2593; // 0xa11 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0xa12 PushV
	var_133_object = var_1_object; // 0xa13 MovT
	var_134_object = var_0_object; // 0xa14 MovT
	func_4024(); // 0xa15 Call
	var_135_object = Obj(); var_136_object = Obj(); // 0xa17 PushV
	var_135_object = var_1_object; // 0xa18 MovT
	var_136_object = var_0_object; // 0xa19 MovT
	func_4030(); // 0xa1a Call
	var_137_object = Obj(); var_138_object = Obj(); // 0xa1c PushV
	var_137_object = var_1_object; // 0xa1d MovT
	var_138_object = var_0_object; // 0xa1e MovT
	func_3889(); // 0xa1f Call
	
Label_2593:
	var_139_int = 11571; // 0xa21 PushI
	var_140_bool = var_21_bool == var_139_int; // 0xa22 Eq
	if(var_140_bool == 0) goto Label_2611; // 0xa23 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0xa24 PushV
	var_141_object = var_1_object; // 0xa25 MovT
	var_142_object = var_0_object; // 0xa26 MovT
	func_4024(); // 0xa27 Call
	var_143_object = Obj(); var_144_object = Obj(); // 0xa29 PushV
	var_143_object = var_1_object; // 0xa2a MovT
	var_144_object = var_0_object; // 0xa2b MovT
	func_4030(); // 0xa2c Call
	var_145_object = Obj(); var_146_object = Obj(); // 0xa2e PushV
	var_145_object = var_1_object; // 0xa2f MovT
	var_146_object = var_0_object; // 0xa30 MovT
	func_3889(); // 0xa31 Call
	
Label_2611:
	var_147_int = 11599; // 0xa33 PushI
	var_148_bool = var_21_bool == var_147_int; // 0xa34 Eq
	if(var_148_bool == 0) goto Label_2624; // 0xa35 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0xa36 PushV
	var_149_object = var_1_object; // 0xa37 MovT
	var_150_object = var_0_object; // 0xa38 MovT
	func_4065(); // 0xa39 Call
	var_153_object = Obj(); var_154_object = Obj(); // 0xa3b PushV
	var_153_object = var_1_object; // 0xa3c MovT
	var_154_object = var_0_object; // 0xa3d MovT
	func_4071(); // 0xa3e Call
	
Label_2624:
	var_199_int = 11600; // 0xa40 PushI
	var_200_bool = var_21_bool == var_199_int; // 0xa41 Eq
	if(var_200_bool == 0) goto Label_2637; // 0xa42 JumpB
	var_201_object = Obj(); var_202_object = Obj(); // 0xa43 PushV
	var_201_object = var_1_object; // 0xa44 MovT
	var_202_object = var_0_object; // 0xa45 MovT
	func_4065(); // 0xa46 Call
	var_203_object = Obj(); var_204_object = Obj(); // 0xa48 PushV
	var_203_object = var_1_object; // 0xa49 MovT
	var_204_object = var_0_object; // 0xa4a MovT
	func_4071(); // 0xa4b Call
	
Label_2637:
	var_205_int = 11601; // 0xa4d PushI
	var_206_bool = var_21_bool == var_205_int; // 0xa4e Eq
	if(var_206_bool == 0) goto Label_2650; // 0xa4f JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0xa50 PushV
	var_207_object = var_1_object; // 0xa51 MovT
	var_208_object = var_0_object; // 0xa52 MovT
	func_4065(); // 0xa53 Call
	var_209_object = Obj(); var_210_object = Obj(); // 0xa55 PushV
	var_209_object = var_1_object; // 0xa56 MovT
	var_210_object = var_0_object; // 0xa57 MovT
	func_4071(); // 0xa58 Call
	
Label_2650:
	var_211_int = 12720; // 0xa5a PushI
	var_212_bool = var_20_string == var_211_int; // 0xa5b Eq
	if(var_212_bool == 0) goto Label_2781; // 0xa5c JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0xa5d PushV
	var_214_object = var_1_object; // 0xa5e MovT
	func_4283(var_214_object); // 0xa5f Call
	if(var_213_bool == 0) goto Label_2693; // 0xa61 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0xa62 PushV
	var_221_object = var_1_object; // 0xa63 MovT
	var_222_object = var_0_object; // 0xa64 MovT
	func_4184(); // 0xa65 Call
	var_225_string = ""; // 0xa67 PushV
	var_225_string = "Neutral"; // 0xa68 MovS
	func_2499(var_21_bool, var_225_string); // 0xa69 Call
	var_240_int = 11527; // 0xa6b PushI
	SetMessage(var_240_int); // 0xa6c TObjFunc
	ClearReplies(); // 0xa6e TObjFunc
	var_241_int = 11528; // 0xa70 PushI
	var_242_int = 12722; // 0xa71 PushI
	var_243_int = 12721; // 0xa72 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xa73 TObjFunc
	var_244_bool = 0; var_245_object = Obj(); // 0xa75 PushV
	var_245_object = var_1_object; // 0xa76 MovT
	func_4190(var_244_bool, var_245_object); // 0xa77 Call
	if(var_244_bool == 0) goto Label_2687; // 0xa79 JumpB
	var_248_int = 11537; // 0xa7a PushI
	var_249_int = 12731; // 0xa7b PushI
	var_250_int = 12730; // 0xa7c PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xa7d TObjFunc
	
Label_2687:
	var_251_int = 11539; // 0xa7f PushI
	var_252_int = 11552; // 0xa80 PushI
	var_253_int = 12732; // 0xa81 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xa82 TObjFunc
	return 0; // 0xa84 Return
	
Label_2693:
	var_254_bool = 0; var_255_object = Obj(); // 0xa85 PushV
	var_255_object = var_1_object; // 0xa86 MovT
	func_4190(var_254_bool, var_255_object); // 0xa87 Call
	if(var_254_bool == 0) goto Label_2718; // 0xa89 JumpB
	var_256_string = ""; // 0xa8a PushV
	var_256_string = "Neutral"; // 0xa8b MovS
	func_2499(var_21_bool, var_256_string); // 0xa8c Call
	var_257_int = 10500; // 0xa8e PushI
	SetMessage(var_257_int); // 0xa8f TObjFunc
	ClearReplies(); // 0xa91 TObjFunc
	var_258_int = 10501; // 0xa93 PushI
	var_259_int = 11584; // 0xa94 PushI
	var_260_int = 11583; // 0xa95 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xa96 TObjFunc
	var_261_int = 10509; // 0xa98 PushI
	var_262_int = -1; // 0xa99 PushI
	var_263_int = 11591; // 0xa9a PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xa9b TObjFunc
	return 0; // 0xa9d Return
	
Label_2718:
	var_264_bool = 0; // 0xa9e PushV
	var_264_bool = 0; // 0xa9f MovB
	var_265_bool = 0; // 0xaa0 PushV
	var_265_bool = 0; // 0xaa1 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0xaa2 PushV
	var_267_object = var_1_object; // 0xaa3 MovT
	func_4307(var_267_object); // 0xaa4 Call
	if(var_266_bool == 0) goto Label_2733; // 0xaa6 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0xaa7 PushV
	var_273_object = var_1_object; // 0xaa8 MovT
	func_4295(var_273_object); // 0xaa9 Call
	if(var_272_bool == 0) goto Label_2733; // 0xaab JumpB
	var_265_bool = 1; // 0xaac MovB
	
Label_2733:
	if(var_265_bool == 0) goto Label_2740; // 0xaad JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0xaae PushV
	var_279_object = var_1_object; // 0xaaf MovT
	func_4319(var_278_bool, var_279_object); // 0xab0 Call
	if(var_278_bool == 0) goto Label_2740; // 0xab2 JumpB
	var_264_bool = 1; // 0xab3 MovB
	
Label_2740:
	if(var_264_bool == 0) goto Label_2761; // 0xab4 JumpB
	var_287_string = ""; // 0xab5 PushV
	var_287_string = "Neutral"; // 0xab6 MovS
	func_2499(var_21_bool, var_287_string); // 0xab7 Call
	var_288_int = 10510; // 0xab9 PushI
	SetMessage(var_288_int); // 0xaba TObjFunc
	ClearReplies(); // 0xabc TObjFunc
	var_289_int = 10511; // 0xabe PushI
	var_290_int = 11594; // 0xabf PushI
	var_291_int = 11593; // 0xac0 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xac1 TObjFunc
	var_292_int = 10521; // 0xac3 PushI
	var_293_int = 11594; // 0xac4 PushI
	var_294_int = 11604; // 0xac5 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xac6 TObjFunc
	return 0; // 0xac8 Return
	
Label_2761:
	var_295_bool = 0; var_296_object = Obj(); // 0xac9 PushV
	var_296_object = var_1_object; // 0xaca MovT
	func_4190(var_295_bool, var_296_object); // 0xacb Call
	if(var_295_bool == 0) goto Label_2781; // 0xacd JumpB
	var_297_string = ""; // 0xace PushV
	var_297_string = "Neutral"; // 0xacf MovS
	func_2499(var_21_bool, var_297_string); // 0xad0 Call
	var_298_int = 11547; // 0xad2 PushI
	SetMessage(var_298_int); // 0xad3 TObjFunc
	ClearReplies(); // 0xad5 TObjFunc
	var_299_int = 11548; // 0xad7 PushI
	var_300_int = 12743; // 0xad8 PushI
	var_301_int = 12742; // 0xad9 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xada TObjFunc
	return 0; // 0xadc Return
	
Label_2781:
	var_302_int = 12743; // 0xadd PushI
	var_303_bool = var_20_string == var_302_int; // 0xade Eq
	if(var_303_bool == 0) goto Label_2799; // 0xadf JumpB
	var_304_string = ""; // 0xae0 PushV
	var_304_string = "Neutral"; // 0xae1 MovS
	func_2499(var_21_bool, var_304_string); // 0xae2 Call
	var_305_int = 11549; // 0xae4 PushI
	SetMessage(var_305_int); // 0xae5 TObjFunc
	ClearReplies(); // 0xae7 TObjFunc
	var_306_int = 11550; // 0xae9 PushI
	var_307_int = 12745; // 0xaea PushI
	var_308_int = 12744; // 0xaeb PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xaec TObjFunc
	return 0; // 0xaee Return
	
Label_2799:
	var_309_int = 12745; // 0xaef PushI
	var_310_bool = var_20_string == var_309_int; // 0xaf0 Eq
	if(var_310_bool == 0) goto Label_2817; // 0xaf1 JumpB
	var_311_string = ""; // 0xaf2 PushV
	var_311_string = "Neutral"; // 0xaf3 MovS
	func_2499(var_21_bool, var_311_string); // 0xaf4 Call
	var_312_int = 11551; // 0xaf6 PushI
	SetMessage(var_312_int); // 0xaf7 TObjFunc
	ClearReplies(); // 0xaf9 TObjFunc
	var_313_int = 11552; // 0xafb PushI
	var_314_int = 12747; // 0xafc PushI
	var_315_int = 12746; // 0xafd PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xafe TObjFunc
	return 0; // 0xb00 Return
	
Label_2817:
	var_316_int = 12747; // 0xb01 PushI
	var_317_bool = var_20_string == var_316_int; // 0xb02 Eq
	if(var_317_bool == 0) goto Label_2835; // 0xb03 JumpB
	var_318_string = ""; // 0xb04 PushV
	var_318_string = "Neutral"; // 0xb05 MovS
	func_2499(var_21_bool, var_318_string); // 0xb06 Call
	var_319_int = 11553; // 0xb08 PushI
	SetMessage(var_319_int); // 0xb09 TObjFunc
	ClearReplies(); // 0xb0b TObjFunc
	var_320_int = 11554; // 0xb0d PushI
	var_321_int = 12749; // 0xb0e PushI
	var_322_int = 12748; // 0xb0f PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xb10 TObjFunc
	return 0; // 0xb12 Return
	
Label_2835:
	var_323_int = 12749; // 0xb13 PushI
	var_324_bool = var_20_string == var_323_int; // 0xb14 Eq
	if(var_324_bool == 0) goto Label_2853; // 0xb15 JumpB
	var_325_string = ""; // 0xb16 PushV
	var_325_string = "Neutral"; // 0xb17 MovS
	func_2499(var_21_bool, var_325_string); // 0xb18 Call
	var_326_int = 11555; // 0xb1a PushI
	SetMessage(var_326_int); // 0xb1b TObjFunc
	ClearReplies(); // 0xb1d TObjFunc
	var_327_int = 11556; // 0xb1f PushI
	var_328_int = -1; // 0xb20 PushI
	var_329_int = 12750; // 0xb21 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xb22 TObjFunc
	return 0; // 0xb24 Return
	
Label_2853:
	var_330_int = 11594; // 0xb25 PushI
	var_331_bool = var_20_string == var_330_int; // 0xb26 Eq
	if(var_331_bool == 0) goto Label_2876; // 0xb27 JumpB
	var_332_string = ""; // 0xb28 PushV
	var_332_string = "Neutral"; // 0xb29 MovS
	func_2499(var_21_bool, var_332_string); // 0xb2a Call
	var_333_int = 10512; // 0xb2c PushI
	SetMessage(var_333_int); // 0xb2d TObjFunc
	ClearReplies(); // 0xb2f TObjFunc
	var_334_int = 10513; // 0xb31 PushI
	var_335_int = 11596; // 0xb32 PushI
	var_336_int = 11595; // 0xb33 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xb34 TObjFunc
	var_337_int = 10520; // 0xb36 PushI
	var_338_int = 11598; // 0xb37 PushI
	var_339_int = 11602; // 0xb38 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xb39 TObjFunc
	return 0; // 0xb3b Return
	
Label_2876:
	var_340_int = 11596; // 0xb3c PushI
	var_341_bool = var_20_string == var_340_int; // 0xb3d Eq
	if(var_341_bool == 0) goto Label_2899; // 0xb3e JumpB
	var_342_string = ""; // 0xb3f PushV
	var_342_string = "Neutral"; // 0xb40 MovS
	func_2499(var_21_bool, var_342_string); // 0xb41 Call
	var_343_int = 10514; // 0xb43 PushI
	SetMessage(var_343_int); // 0xb44 TObjFunc
	ClearReplies(); // 0xb46 TObjFunc
	var_344_int = 10515; // 0xb48 PushI
	var_345_int = 11598; // 0xb49 PushI
	var_346_int = 11597; // 0xb4a PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xb4b TObjFunc
	var_347_int = 10519; // 0xb4d PushI
	var_348_int = -1; // 0xb4e PushI
	var_349_int = 11601; // 0xb4f PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xb50 TObjFunc
	return 0; // 0xb52 Return
	
Label_2899:
	var_350_int = 11598; // 0xb53 PushI
	var_351_bool = var_20_string == var_350_int; // 0xb54 Eq
	if(var_351_bool == 0) goto Label_2922; // 0xb55 JumpB
	var_352_string = ""; // 0xb56 PushV
	var_352_string = "Neutral"; // 0xb57 MovS
	func_2499(var_21_bool, var_352_string); // 0xb58 Call
	var_353_int = 10516; // 0xb5a PushI
	SetMessage(var_353_int); // 0xb5b TObjFunc
	ClearReplies(); // 0xb5d TObjFunc
	var_354_int = 10517; // 0xb5f PushI
	var_355_int = -1; // 0xb60 PushI
	var_356_int = 11599; // 0xb61 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xb62 TObjFunc
	var_357_int = 10518; // 0xb64 PushI
	var_358_int = -1; // 0xb65 PushI
	var_359_int = 11600; // 0xb66 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0xb67 TObjFunc
	return 0; // 0xb69 Return
	
Label_2922:
	var_360_int = 11584; // 0xb6a PushI
	var_361_bool = var_20_string == var_360_int; // 0xb6b Eq
	if(var_361_bool == 0) goto Label_2950; // 0xb6c JumpB
	var_362_string = ""; // 0xb6d PushV
	var_362_string = "Neutral"; // 0xb6e MovS
	func_2499(var_21_bool, var_362_string); // 0xb6f Call
	var_363_int = 10502; // 0xb71 PushI
	SetMessage(var_363_int); // 0xb72 TObjFunc
	ClearReplies(); // 0xb74 TObjFunc
	var_364_int = 10503; // 0xb76 PushI
	var_365_int = -1; // 0xb77 PushI
	var_366_int = 11585; // 0xb78 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xb79 TObjFunc
	var_367_int = 10504; // 0xb7b PushI
	var_368_int = -1; // 0xb7c PushI
	var_369_int = 11586; // 0xb7d PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xb7e TObjFunc
	var_370_int = 10505; // 0xb80 PushI
	var_371_int = 11588; // 0xb81 PushI
	var_372_int = 11587; // 0xb82 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0xb83 TObjFunc
	return 0; // 0xb85 Return
	
Label_2950:
	var_373_int = 11588; // 0xb86 PushI
	var_374_bool = var_20_string == var_373_int; // 0xb87 Eq
	if(var_374_bool == 0) goto Label_2973; // 0xb88 JumpB
	var_375_string = ""; // 0xb89 PushV
	var_375_string = "Neutral"; // 0xb8a MovS
	func_2499(var_21_bool, var_375_string); // 0xb8b Call
	var_376_int = 10506; // 0xb8d PushI
	SetMessage(var_376_int); // 0xb8e TObjFunc
	ClearReplies(); // 0xb90 TObjFunc
	var_377_int = 10507; // 0xb92 PushI
	var_378_int = -1; // 0xb93 PushI
	var_379_int = 11589; // 0xb94 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xb95 TObjFunc
	var_380_int = 10508; // 0xb97 PushI
	var_381_int = -1; // 0xb98 PushI
	var_382_int = 11590; // 0xb99 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xb9a TObjFunc
	return 0; // 0xb9c Return
	
Label_2973:
	var_383_int = 11552; // 0xb9d PushI
	var_384_bool = var_20_string == var_383_int; // 0xb9e Eq
	if(var_384_bool == 0) goto Label_2996; // 0xb9f JumpB
	var_385_string = ""; // 0xba0 PushV
	var_385_string = "Neutral"; // 0xba1 MovS
	func_2499(var_21_bool, var_385_string); // 0xba2 Call
	var_386_int = 10474; // 0xba4 PushI
	SetMessage(var_386_int); // 0xba5 TObjFunc
	ClearReplies(); // 0xba7 TObjFunc
	var_387_int = 10495; // 0xba9 PushI
	var_388_int = 11554; // 0xbaa PushI
	var_389_int = 11574; // 0xbab PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0xbac TObjFunc
	var_390_int = 10496; // 0xbae PushI
	var_391_int = 11577; // 0xbaf PushI
	var_392_int = 11576; // 0xbb0 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xbb1 TObjFunc
	return 0; // 0xbb3 Return
	
Label_2996:
	var_393_int = 11577; // 0xbb4 PushI
	var_394_bool = var_20_string == var_393_int; // 0xbb5 Eq
	if(var_394_bool == 0) goto Label_3019; // 0xbb6 JumpB
	var_395_string = ""; // 0xbb7 PushV
	var_395_string = "Neutral"; // 0xbb8 MovS
	func_2499(var_21_bool, var_395_string); // 0xbb9 Call
	var_396_int = 10497; // 0xbbb PushI
	SetMessage(var_396_int); // 0xbbc TObjFunc
	ClearReplies(); // 0xbbe TObjFunc
	var_397_int = 10498; // 0xbc0 PushI
	var_398_int = 11554; // 0xbc1 PushI
	var_399_int = 11578; // 0xbc2 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xbc3 TObjFunc
	var_400_int = 10499; // 0xbc5 PushI
	var_401_int = 11554; // 0xbc6 PushI
	var_402_int = 11580; // 0xbc7 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0xbc8 TObjFunc
	return 0; // 0xbca Return
	
Label_3019:
	var_403_int = 12731; // 0xbcb PushI
	var_404_bool = var_20_string == var_403_int; // 0xbcc Eq
	if(var_404_bool == 0) goto Label_3037; // 0xbcd JumpB
	var_405_string = ""; // 0xbce PushV
	var_405_string = "Neutral"; // 0xbcf MovS
	func_2499(var_21_bool, var_405_string); // 0xbd0 Call
	var_406_int = 11538; // 0xbd2 PushI
	SetMessage(var_406_int); // 0xbd3 TObjFunc
	ClearReplies(); // 0xbd5 TObjFunc
	var_407_int = 11540; // 0xbd7 PushI
	var_408_int = 12734; // 0xbd8 PushI
	var_409_int = 12733; // 0xbd9 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xbda TObjFunc
	return 0; // 0xbdc Return
	
Label_3037:
	var_410_int = 12734; // 0xbdd PushI
	var_411_bool = var_20_string == var_410_int; // 0xbde Eq
	if(var_411_bool == 0) goto Label_3055; // 0xbdf JumpB
	var_412_string = ""; // 0xbe0 PushV
	var_412_string = "Neutral"; // 0xbe1 MovS
	func_2499(var_21_bool, var_412_string); // 0xbe2 Call
	var_413_int = 11541; // 0xbe4 PushI
	SetMessage(var_413_int); // 0xbe5 TObjFunc
	ClearReplies(); // 0xbe7 TObjFunc
	var_414_int = 11542; // 0xbe9 PushI
	var_415_int = 12736; // 0xbea PushI
	var_416_int = 12735; // 0xbeb PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xbec TObjFunc
	return 0; // 0xbee Return
	
Label_3055:
	var_417_int = 12736; // 0xbef PushI
	var_418_bool = var_20_string == var_417_int; // 0xbf0 Eq
	if(var_418_bool == 0) goto Label_3073; // 0xbf1 JumpB
	var_419_string = ""; // 0xbf2 PushV
	var_419_string = "Neutral"; // 0xbf3 MovS
	func_2499(var_21_bool, var_419_string); // 0xbf4 Call
	var_420_int = 11543; // 0xbf6 PushI
	SetMessage(var_420_int); // 0xbf7 TObjFunc
	ClearReplies(); // 0xbf9 TObjFunc
	var_421_int = 11544; // 0xbfb PushI
	var_422_int = 12738; // 0xbfc PushI
	var_423_int = 12737; // 0xbfd PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xbfe TObjFunc
	return 0; // 0xc00 Return
	
Label_3073:
	var_424_int = 12738; // 0xc01 PushI
	var_425_bool = var_20_string == var_424_int; // 0xc02 Eq
	if(var_425_bool == 0) goto Label_3091; // 0xc03 JumpB
	var_426_string = ""; // 0xc04 PushV
	var_426_string = "Neutral"; // 0xc05 MovS
	func_2499(var_21_bool, var_426_string); // 0xc06 Call
	var_427_int = 11545; // 0xc08 PushI
	SetMessage(var_427_int); // 0xc09 TObjFunc
	ClearReplies(); // 0xc0b TObjFunc
	var_428_int = 11546; // 0xc0d PushI
	var_429_int = 11560; // 0xc0e PushI
	var_430_int = 12739; // 0xc0f PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xc10 TObjFunc
	return 0; // 0xc12 Return
	
Label_3091:
	var_431_int = 12722; // 0xc13 PushI
	var_432_bool = var_20_string == var_431_int; // 0xc14 Eq
	if(var_432_bool == 0) goto Label_3109; // 0xc15 JumpB
	var_433_string = ""; // 0xc16 PushV
	var_433_string = "Neutral"; // 0xc17 MovS
	func_2499(var_21_bool, var_433_string); // 0xc18 Call
	var_434_int = 11529; // 0xc1a PushI
	SetMessage(var_434_int); // 0xc1b TObjFunc
	ClearReplies(); // 0xc1d TObjFunc
	var_435_int = 11530; // 0xc1f PushI
	var_436_int = 11554; // 0xc20 PushI
	var_437_int = 12723; // 0xc21 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xc22 TObjFunc
	return 0; // 0xc24 Return
	
Label_3109:
	var_438_int = 11554; // 0xc25 PushI
	var_439_bool = var_20_string == var_438_int; // 0xc26 Eq
	if(var_439_bool == 0) goto Label_3132; // 0xc27 JumpB
	var_440_string = ""; // 0xc28 PushV
	var_440_string = "Neutral"; // 0xc29 MovS
	func_2499(var_21_bool, var_440_string); // 0xc2a Call
	var_441_int = 10476; // 0xc2c PushI
	SetMessage(var_441_int); // 0xc2d TObjFunc
	ClearReplies(); // 0xc2f TObjFunc
	var_442_int = 10477; // 0xc31 PushI
	var_443_int = 11556; // 0xc32 PushI
	var_444_int = 11555; // 0xc33 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xc34 TObjFunc
	var_445_int = 10494; // 0xc36 PushI
	var_446_int = 11556; // 0xc37 PushI
	var_447_int = 11572; // 0xc38 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xc39 TObjFunc
	return 0; // 0xc3b Return
	
Label_3132:
	var_448_int = 11556; // 0xc3c PushI
	var_449_bool = var_20_string == var_448_int; // 0xc3d Eq
	if(var_449_bool == 0) goto Label_3155; // 0xc3e JumpB
	var_450_string = ""; // 0xc3f PushV
	var_450_string = "Neutral"; // 0xc40 MovS
	func_2499(var_21_bool, var_450_string); // 0xc41 Call
	var_451_int = 10478; // 0xc43 PushI
	SetMessage(var_451_int); // 0xc44 TObjFunc
	ClearReplies(); // 0xc46 TObjFunc
	var_452_int = 10479; // 0xc48 PushI
	var_453_int = 11558; // 0xc49 PushI
	var_454_int = 11557; // 0xc4a PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xc4b TObjFunc
	var_455_int = 10489; // 0xc4d PushI
	var_456_int = 11568; // 0xc4e PushI
	var_457_int = 11567; // 0xc4f PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_458_int = 11568; // 0xc53 PushI
	var_459_bool = var_20_string == var_458_int; // 0xc54 Eq
	if(var_459_bool == 0) goto Label_3183; // 0xc55 JumpB
	var_460_string = ""; // 0xc56 PushV
	var_460_string = "Neutral"; // 0xc57 MovS
	func_2499(var_21_bool, var_460_string); // 0xc58 Call
	var_461_int = 10490; // 0xc5a PushI
	SetMessage(var_461_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_462_int = 10491; // 0xc5f PushI
	var_463_int = -1; // 0xc60 PushI
	var_464_int = 11569; // 0xc61 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0xc62 TObjFunc
	var_465_int = 10492; // 0xc64 PushI
	var_466_int = -1; // 0xc65 PushI
	var_467_int = 11570; // 0xc66 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0xc67 TObjFunc
	var_468_int = 10493; // 0xc69 PushI
	var_469_int = -1; // 0xc6a PushI
	var_470_int = 11571; // 0xc6b PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0xc6c TObjFunc
	return 0; // 0xc6e Return
	
Label_3183:
	var_471_int = 11558; // 0xc6f PushI
	var_472_bool = var_20_string == var_471_int; // 0xc70 Eq
	if(var_472_bool == 0) goto Label_3206; // 0xc71 JumpB
	var_473_string = ""; // 0xc72 PushV
	var_473_string = "Neutral"; // 0xc73 MovS
	func_2499(var_21_bool, var_473_string); // 0xc74 Call
	var_474_int = 10480; // 0xc76 PushI
	SetMessage(var_474_int); // 0xc77 TObjFunc
	ClearReplies(); // 0xc79 TObjFunc
	var_475_int = 10481; // 0xc7b PushI
	var_476_int = 11560; // 0xc7c PushI
	var_477_int = 11559; // 0xc7d PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xc7e TObjFunc
	var_478_int = 10486; // 0xc80 PushI
	var_479_int = 11565; // 0xc81 PushI
	var_480_int = 11564; // 0xc82 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0xc83 TObjFunc
	return 0; // 0xc85 Return
	
Label_3206:
	var_481_int = 11565; // 0xc86 PushI
	var_482_bool = var_20_string == var_481_int; // 0xc87 Eq
	if(var_482_bool == 0) goto Label_3224; // 0xc88 JumpB
	var_483_string = ""; // 0xc89 PushV
	var_483_string = "Neutral"; // 0xc8a MovS
	func_2499(var_21_bool, var_483_string); // 0xc8b Call
	var_484_int = 10487; // 0xc8d PushI
	SetMessage(var_484_int); // 0xc8e TObjFunc
	ClearReplies(); // 0xc90 TObjFunc
	var_485_int = 10488; // 0xc92 PushI
	var_486_int = -1; // 0xc93 PushI
	var_487_int = 11566; // 0xc94 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xc95 TObjFunc
	return 0; // 0xc97 Return
	
Label_3224:
	var_488_int = 11560; // 0xc98 PushI
	var_489_bool = var_20_string == var_488_int; // 0xc99 Eq
	if(var_489_bool == 0) goto Label_3242; // 0xc9a JumpB
	var_490_string = ""; // 0xc9b PushV
	var_490_string = "Neutral"; // 0xc9c MovS
	func_2499(var_21_bool, var_490_string); // 0xc9d Call
	var_491_int = 10482; // 0xc9f PushI
	SetMessage(var_491_int); // 0xca0 TObjFunc
	ClearReplies(); // 0xca2 TObjFunc
	var_492_int = 10483; // 0xca4 PushI
	var_493_int = 11562; // 0xca5 PushI
	var_494_int = 11561; // 0xca6 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0xca7 TObjFunc
	return 0; // 0xca9 Return
	
Label_3242:
	var_495_int = 11562; // 0xcaa PushI
	var_496_bool = var_20_string == var_495_int; // 0xcab Eq
	if(var_496_bool == 0) goto Label_3260; // 0xcac JumpB
	var_497_string = ""; // 0xcad PushV
	var_497_string = "Neutral"; // 0xcae MovS
	func_2499(var_21_bool, var_497_string); // 0xcaf Call
	var_498_int = 10484; // 0xcb1 PushI
	SetMessage(var_498_int); // 0xcb2 TObjFunc
	ClearReplies(); // 0xcb4 TObjFunc
	var_499_int = 10485; // 0xcb6 PushI
	var_500_int = -1; // 0xcb7 PushI
	var_501_int = 11563; // 0xcb8 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0xcb9 TObjFunc
	return 0; // 0xcbb Return
	
Label_3260:
	var_3_string = 1; // 0xcbc TMovB
	var_502_bool = 0; // 0xcbd PushV
	func_3733(var_502_bool); // 0xcbe Call
	if(var_502_bool == 0) goto Label_3268; // 0xcc0 JumpB
	lshStopAnimation(); // 0xcc1 Func
	goto Label_3270; // 0xcc3 Jump
	
Label_3270:
	return 0; // 0xcc6 Return
	
Label_3268:
	StopAnimation(); // 0xcc4 Func
	
Label_3272:
	return 0; // 0xcc8 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	var_22_int = 1; // 0xd63 PushI
	if(var_22_int == 0) goto Label_3537; // 0xd64 JumpB
	func_3633(); // 0xd66 Call
	var_24_int = 13243; // 0xd68 PushI
	var_25_bool = var_21_int == var_24_int; // 0xd69 Eq
	if(var_25_bool == 0) goto Label_3450; // 0xd6a JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xd6b PushV
	var_26_object = var_1_object; // 0xd6c MovT
	var_27_object = var_0_object; // 0xd6d MovT
	func_4161(); // 0xd6e Call
	var_30_object = Obj(); var_31_object = Obj(); // 0xd70 PushV
	var_30_object = var_1_object; // 0xd71 MovT
	var_31_object = var_0_object; // 0xd72 MovT
	func_4167(var_31_object); // 0xd73 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0xd75 PushV
	var_49_object = var_1_object; // 0xd76 MovT
	var_50_object = var_0_object; // 0xd77 MovT
	func_3808(); // 0xd78 Call
	
Label_3450:
	var_53_int = 13238; // 0xd7a PushI
	var_54_bool = var_20_int == var_53_int; // 0xd7b Eq
	if(var_54_bool == 0) goto Label_3489; // 0xd7c JumpB
	var_55_bool = 0; var_56_object = Obj(); // 0xd7d PushV
	var_56_object = var_1_object; // 0xd7e MovT
	func_4330(var_56_object); // 0xd7f Call
	var_63_bool = var_55_bool == 0; // 0xd81 Not
	if(var_63_bool == 0) goto Label_3474; // 0xd82 JumpB
	var_64_string = ""; // 0xd83 PushV
	var_64_string = "Neutral"; // 0xd84 MovS
	func_3410(var_21_int, var_64_string); // 0xd85 Call
	var_79_int = 12020; // 0xd87 PushI
	SetMessage(var_79_int); // 0xd88 TObjFunc
	ClearReplies(); // 0xd8a TObjFunc
	var_80_int = 12021; // 0xd8c PushI
	var_81_int = 13240; // 0xd8d PushI
	var_82_int = 13239; // 0xd8e PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xd8f TObjFunc
	return 0; // 0xd91 Return
	
Label_3474:
	var_83_string = ""; // 0xd92 PushV
	var_83_string = "Neutral"; // 0xd93 MovS
	func_3410(var_21_int, var_83_string); // 0xd94 Call
	var_84_int = 13723; // 0xd96 PushI
	SetMessage(var_84_int); // 0xd97 TObjFunc
	ClearReplies(); // 0xd99 TObjFunc
	var_85_int = 13724; // 0xd9b PushI
	var_86_int = -1; // 0xd9c PushI
	var_87_int = 14990; // 0xd9d PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xd9e TObjFunc
	return 0; // 0xda0 Return
	
Label_3489:
	var_88_int = 13240; // 0xda1 PushI
	var_89_bool = var_20_int == var_88_int; // 0xda2 Eq
	if(var_89_bool == 0) goto Label_3507; // 0xda3 JumpB
	var_90_string = ""; // 0xda4 PushV
	var_90_string = "Neutral"; // 0xda5 MovS
	func_3410(var_21_int, var_90_string); // 0xda6 Call
	var_91_int = 12022; // 0xda8 PushI
	SetMessage(var_91_int); // 0xda9 TObjFunc
	ClearReplies(); // 0xdab TObjFunc
	var_92_int = 12023; // 0xdad PushI
	var_93_int = 13242; // 0xdae PushI
	var_94_int = 13241; // 0xdaf PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xdb0 TObjFunc
	return 0; // 0xdb2 Return
	
Label_3507:
	var_95_int = 13242; // 0xdb3 PushI
	var_96_bool = var_20_int == var_95_int; // 0xdb4 Eq
	if(var_96_bool == 0) goto Label_3525; // 0xdb5 JumpB
	var_97_string = ""; // 0xdb6 PushV
	var_97_string = "Neutral"; // 0xdb7 MovS
	func_3410(var_21_int, var_97_string); // 0xdb8 Call
	var_98_int = 12024; // 0xdba PushI
	SetMessage(var_98_int); // 0xdbb TObjFunc
	ClearReplies(); // 0xdbd TObjFunc
	var_99_int = 12025; // 0xdbf PushI
	var_100_int = -1; // 0xdc0 PushI
	var_101_int = 13243; // 0xdc1 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xdc2 TObjFunc
	return 0; // 0xdc4 Return
	
Label_3525:
	var_3_string = 1; // 0xdc5 TMovB
	var_102_bool = 0; // 0xdc6 PushV
	func_3733(var_102_bool); // 0xdc7 Call
	if(var_102_bool == 0) goto Label_3533; // 0xdc9 JumpB
	lshStopAnimation(); // 0xdca Func
	goto Label_3535; // 0xdcc Jump
	
Label_3535:
	return 0; // 0xdcf Return
	
Label_3533:
	StopAnimation(); // 0xdcd Func
	
Label_3537:
	return 0; // 0xdd1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_4583(); // 0x7 Call
	var_21_bool = 0; // 0x9 PushV
	func_3550(var_21_bool); // 0xa Call
	var_24_bool = var_21_bool == 0; // 0xc Not
	if(var_24_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_25_string = ""; // 0x13 PushV
	var_25_string = "Neutral"; // 0x14 MovS
	func_3615(var_25_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_4358(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x1106 PushV
	var_70_object = Obj(); // 0x1107 PushV
	func_4345(var_70_object); // 0x1108 Call
	var_67_object = var_70_object; // 0x1109 Mov
	Find(var_63_int, var_68_object); // 0x110b ObjFunc
	var_75_bool = var_68_object == 0; // 0x110d Not
	if(var_75_bool == 0) goto Label_4373; // 0x110e JumpB
	var_76_string = "Can't find diary parent with id: "; // 0x110f PushS
	var_77_int = var_76_string + var_63_int; // 0x1110 Add
	Trace(var_77_int); // 0x1111 Func
	var_61_bool = 0; // 0x1113 MovB
	return 6; // 0x1114 Return
	
Label_4373:
	AddChild(var_62_object); // 0x1115 ObjFunc
	var_78_string = "player_diary"; // 0x1117 PushS
	var_79_int = 1; // 0x1118 PushI
	SetVariable(var_78_string, var_79_int); // 0x1119 Func
	GetCategory(var_69_int); // 0x111b ObjFunc
	SetDiarySection(var_69_int); // 0x111d Func
	var_61_bool = 0; // 0x111f MovB
	return 6; // 0x1120 Return
}


func_3336(var_0_object, var_1_object, var_2_object, var_3_object, var_430_object, var_431_object)
{
	var_0_object = var_431_object; // 0xd09 TMov
	var_1_object = var_430_object; // 0xd0a TMov
	var_3_object = 0; // 0xd0b TMovB
	var_436_int = 1; // 0xd0c PushI
	if(var_436_int == 0) goto Label_3380; // 0xd0d JumpB
	var_437_bool = 0; var_438_object = Obj(); // 0xd0e PushV
	var_438_object = var_1_object; // 0xd0f MovT
	func_4330(var_438_object); // 0xd10 Call
	var_443_bool = var_437_bool == 0; // 0xd12 Not
	if(var_443_bool == 0) goto Label_3363; // 0xd13 JumpB
	var_444_string = ""; // 0xd14 PushV
	var_444_string = "Neutral"; // 0xd15 MovS
	func_3410(var_431_object, var_444_string); // 0xd16 Call
	var_449_int = 12020; // 0xd18 PushI
	SetMessage(var_449_int); // 0xd19 TObjFunc
	ClearReplies(); // 0xd1b TObjFunc
	var_450_int = 12021; // 0xd1d PushI
	var_451_int = 13240; // 0xd1e PushI
	var_452_int = 13239; // 0xd1f PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0xd20 TObjFunc
	goto Label_3380; // 0xd22 Jump
	
Label_3380:
	var_453_bool = 0; // 0xd34 PushV
	func_3733(var_453_bool); // 0xd35 Call
	if(var_453_bool == 0) goto Label_3395; // 0xd37 JumpB
	
Label_3384:
	lshWaitForAnimEnd(); // 0xd38 Func
	var_454_object = var_3_object; // 0xd3a PushT
	if(var_454_object == 0) goto Label_3389; // 0xd3b JumpB
	goto Label_3394; // 0xd3c Jump
	
Label_3394:
	goto Label_3409; // 0xd42 Jump
	
Label_3409:
	return 0; // 0xd51 Return
	
Label_3389:
	var_455_string = ""; // 0xd3d PushV
	var_455_string = var_2_object; // 0xd3e MovT
	func_3615(var_455_string); // 0xd3f Call
	goto Label_3384; // 0xd41 Jump
	
Label_3395:
	var_456_string = "all"; // 0xd43 PushS
	var_457_string = "idle"; // 0xd44 PushS
	PlayAnimation(var_456_string, var_457_string); // 0xd45 Func
	
Label_3399:
	WaitForAnimEnd(); // 0xd47 Func
	var_458_object = var_3_object; // 0xd49 PushT
	if(var_458_object == 0) goto Label_3404; // 0xd4a JumpB
	goto Label_3409; // 0xd4b Jump
	
Label_3404:
	var_459_string = "all"; // 0xd4c PushS
	var_460_string = "idle"; // 0xd4d PushS
	PlayAnimation(var_459_string, var_460_string); // 0xd4e Func
	goto Label_3399; // 0xd50 Jump
	
Label_3363:
	var_461_string = ""; // 0xd23 PushV
	var_461_string = "Neutral"; // 0xd24 MovS
	func_3410(var_431_object, var_461_string); // 0xd25 Call
	var_462_int = 13723; // 0xd27 PushI
	SetMessage(var_462_int); // 0xd28 TObjFunc
	ClearReplies(); // 0xd2a TObjFunc
	var_463_int = 13724; // 0xd2c PushI
	var_464_int = -1; // 0xd2d PushI
	var_465_int = 14990; // 0xd2e PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0xd2f TObjFunc
	goto Label_3380; // 0xd31 Jump
}


func_3849()
{
	var_28_string = "ood3Rubin1"; // 0xf0a PushS
	var_29_int = 1; // 0xf0b PushI
	SetVariable(var_28_string, var_29_int); // 0xf0c Func
	return 0; // 0xf0e Return
}


func_3855()
{
	var_195_string = "ood3Rubin2"; // 0xf10 PushS
	var_196_int = 1; // 0xf11 PushI
	SetVariable(var_195_string, var_196_int); // 0xf12 Func
	return 0; // 0xf14 Return
}


func_3861()
{
	var_201_string = "ood3Rubin3"; // 0xf16 PushS
	var_202_int = 1; // 0xf17 PushI
	SetVariable(var_201_string, var_202_int); // 0xf18 Func
	return 0; // 0xf1a Return
}


func_3611()
{
	CameraSwitchToNormal(); // 0xe1c Func
	return 0; // 0xe1e Return
}


func_3867()
{
	var_219_string = "ood3Rubin4"; // 0xf1c PushS
	var_220_int = 1; // 0xf1d PushI
	SetVariable(var_219_string, var_220_int); // 0xf1e Func
	return 0; // 0xf20 Return
}


func_2333(var_0_object, var_1_object, var_2_object, var_3_object, var_322_object, var_323_object)
{
	var_0_object = var_323_object; // 0x91e TMov
	var_1_object = var_322_object; // 0x91f TMov
	var_3_object = 0; // 0x920 TMovB
	var_328_int = 1; // 0x921 PushI
	if(var_328_int == 0) goto Label_2469; // 0x922 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x923 PushV
	var_330_object = var_1_object; // 0x924 MovT
	func_4283(var_330_object); // 0x925 Call
	if(var_329_bool == 0) goto Label_2379; // 0x927 JumpB
	var_335_object = Obj(); var_336_object = Obj(); // 0x928 PushV
	var_335_object = var_1_object; // 0x929 MovT
	var_336_object = var_0_object; // 0x92a MovT
	func_4184(); // 0x92b Call
	var_339_string = ""; // 0x92d PushV
	var_339_string = "Neutral"; // 0x92e MovS
	func_2499(var_323_object, var_339_string); // 0x92f Call
	var_344_int = 11527; // 0x931 PushI
	SetMessage(var_344_int); // 0x932 TObjFunc
	ClearReplies(); // 0x934 TObjFunc
	var_345_int = 11528; // 0x936 PushI
	var_346_int = 12722; // 0x937 PushI
	var_347_int = 12721; // 0x938 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x939 TObjFunc
	var_348_bool = 0; var_349_object = Obj(); // 0x93b PushV
	var_349_object = var_1_object; // 0x93c MovT
	func_4190(var_348_bool, var_349_object); // 0x93d Call
	if(var_348_bool == 0) goto Label_2373; // 0x93f JumpB
	var_350_int = 11537; // 0x940 PushI
	var_351_int = 12731; // 0x941 PushI
	var_352_int = 12730; // 0x942 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x943 TObjFunc
	
Label_2373:
	var_353_int = 11539; // 0x945 PushI
	var_354_int = 11552; // 0x946 PushI
	var_355_int = 12732; // 0x947 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x948 TObjFunc
	goto Label_2469; // 0x94a Jump
	
Label_2469:
	var_356_bool = 0; // 0x9a5 PushV
	func_3733(var_356_bool); // 0x9a6 Call
	if(var_356_bool == 0) goto Label_2484; // 0x9a8 JumpB
	
Label_2473:
	lshWaitForAnimEnd(); // 0x9a9 Func
	var_357_object = var_3_object; // 0x9ab PushT
	if(var_357_object == 0) goto Label_2478; // 0x9ac JumpB
	goto Label_2483; // 0x9ad Jump
	
Label_2483:
	goto Label_2498; // 0x9b3 Jump
	
Label_2498:
	return 0; // 0x9c2 Return
	
Label_2478:
	var_358_string = ""; // 0x9ae PushV
	var_358_string = var_2_object; // 0x9af MovT
	func_3615(var_358_string); // 0x9b0 Call
	goto Label_2473; // 0x9b2 Jump
	
Label_2484:
	var_359_string = "all"; // 0x9b4 PushS
	var_360_string = "idle"; // 0x9b5 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x9b6 Func
	
Label_2488:
	WaitForAnimEnd(); // 0x9b8 Func
	var_361_object = var_3_object; // 0x9ba PushT
	if(var_361_object == 0) goto Label_2493; // 0x9bb JumpB
	goto Label_2498; // 0x9bc Jump
	
Label_2493:
	var_362_string = "all"; // 0x9bd PushS
	var_363_string = "idle"; // 0x9be PushS
	PlayAnimation(var_362_string, var_363_string); // 0x9bf Func
	goto Label_2488; // 0x9c1 Jump
	
Label_2379:
	var_364_bool = 0; var_365_object = Obj(); // 0x94b PushV
	var_365_object = var_1_object; // 0x94c MovT
	func_4190(var_364_bool, var_365_object); // 0x94d Call
	if(var_364_bool == 0) goto Label_2404; // 0x94f JumpB
	var_366_string = ""; // 0x950 PushV
	var_366_string = "Neutral"; // 0x951 MovS
	func_2499(var_323_object, var_366_string); // 0x952 Call
	var_367_int = 10500; // 0x954 PushI
	SetMessage(var_367_int); // 0x955 TObjFunc
	ClearReplies(); // 0x957 TObjFunc
	var_368_int = 10501; // 0x959 PushI
	var_369_int = 11584; // 0x95a PushI
	var_370_int = 11583; // 0x95b PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x95c TObjFunc
	var_371_int = 10509; // 0x95e PushI
	var_372_int = -1; // 0x95f PushI
	var_373_int = 11591; // 0x960 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x961 TObjFunc
	goto Label_2469; // 0x963 Jump
	
Label_2404:
	var_374_bool = 0; // 0x964 PushV
	var_374_bool = 0; // 0x965 MovB
	var_375_bool = 0; // 0x966 PushV
	var_375_bool = 0; // 0x967 MovB
	var_376_bool = 0; var_377_object = Obj(); // 0x968 PushV
	var_377_object = var_1_object; // 0x969 MovT
	func_4307(var_377_object); // 0x96a Call
	if(var_376_bool == 0) goto Label_2419; // 0x96c JumpB
	var_382_bool = 0; var_383_object = Obj(); // 0x96d PushV
	var_383_object = var_1_object; // 0x96e MovT
	func_4295(var_383_object); // 0x96f Call
	if(var_382_bool == 0) goto Label_2419; // 0x971 JumpB
	var_375_bool = 1; // 0x972 MovB
	
Label_2419:
	if(var_375_bool == 0) goto Label_2426; // 0x973 JumpB
	var_388_bool = 0; var_389_object = Obj(); // 0x974 PushV
	var_389_object = var_1_object; // 0x975 MovT
	func_4319(var_388_bool, var_389_object); // 0x976 Call
	if(var_388_bool == 0) goto Label_2426; // 0x978 JumpB
	var_374_bool = 1; // 0x979 MovB
	
Label_2426:
	if(var_374_bool == 0) goto Label_2447; // 0x97a JumpB
	var_393_string = ""; // 0x97b PushV
	var_393_string = "Neutral"; // 0x97c MovS
	func_2499(var_323_object, var_393_string); // 0x97d Call
	var_394_int = 10510; // 0x97f PushI
	SetMessage(var_394_int); // 0x980 TObjFunc
	ClearReplies(); // 0x982 TObjFunc
	var_395_int = 10511; // 0x984 PushI
	var_396_int = 11594; // 0x985 PushI
	var_397_int = 11593; // 0x986 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x987 TObjFunc
	var_398_int = 10521; // 0x989 PushI
	var_399_int = 11594; // 0x98a PushI
	var_400_int = 11604; // 0x98b PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x98c TObjFunc
	goto Label_2469; // 0x98e Jump
	
Label_2447:
	var_401_bool = 0; var_402_object = Obj(); // 0x98f PushV
	var_402_object = var_1_object; // 0x990 MovT
	func_4190(var_401_bool, var_402_object); // 0x991 Call
	if(var_401_bool == 0) goto Label_2467; // 0x993 JumpB
	var_403_string = ""; // 0x994 PushV
	var_403_string = "Neutral"; // 0x995 MovS
	func_2499(var_323_object, var_403_string); // 0x996 Call
	var_404_int = 11547; // 0x998 PushI
	SetMessage(var_404_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_405_int = 11548; // 0x99d PushI
	var_406_int = 12743; // 0x99e PushI
	var_407_int = 12742; // 0x99f PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x9a0 TObjFunc
	goto Label_2469; // 0x9a2 Jump
	
Label_2467:
	return 0; // 0x9a3 Return
}


func_3615(var_25_string)
{
	var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0xe1f PushV
	var_30_string = "playing "; // 0xe20 PushS
	var_31_int = var_30_string + var_25_string; // 0xe21 Add
	Trace(var_31_int); // 0xe22 Func
	lshGetAnimTimes(var_25_string, var_28_float, var_29_float); // 0xe24 Func
	lshPlayAnimation(var_28_float, var_29_float); // 0xe26 Func
	var_32_string = "start: "; // 0xe28 PushS
	var_33_int = var_32_string + var_28_float; // 0xe29 Add
	Trace(var_33_int); // 0xe2a Func
	var_34_string = "end: "; // 0xe2c PushS
	var_35_int = var_34_string + var_29_float; // 0xe2d Add
	Trace(var_35_int); // 0xe2e Func
	return 4; // 0xe30 Return
}


func_3873()
{
	var_91_object = Obj(); var_92_string = ""; var_93_float = 0; // 0xf22 PushV
	var_94_object = Obj(); // 0xf23 PushV
	func_4404(var_94_object); // 0xf24 Call
	var_91_object = var_94_object; // 0xf25 Mov
	var_92_string = "pt_map_alexandr"; // 0xf27 MovS
	var_93_float = 2; // 0xf28 MovI
	func_4421(var_91_object, var_92_string, var_93_float); // 0xf29 Call
	var_114_object = Obj(); // 0xf2b PushV
	func_4404(var_114_object); // 0xf2c Call
	ShowMap(var_114_object); // 0xf2e ObjFunc
	return 0; // 0xf30 Return
}


func_4387(var_78_bool, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); var_83_object = Obj(); // 0x1123 PushV
	var_84_object = Obj(); // 0x1124 PushV
	func_4345(var_84_object); // 0x1125 Call
	var_82_object = var_84_object; // 0x1126 Mov
	Find(var_79_int, var_83_object); // 0x1128 ObjFunc
	var_85_bool = var_83_object == 0; // 0x112a Not
	if(var_85_bool == 0) goto Label_4398; // 0x112b JumpB
	var_78_bool = 0; // 0x112c MovB
	return 4; // 0x112d Return
	
Label_4398:
	Remove(); // 0x112e ObjFunc
	var_78_bool = 1; // 0x1130 MovB
	return 4; // 0x1131 Return
}


func_3633()
{
	var_23_bool = 0; // 0xe31 PushV
	func_3733(var_23_bool); // 0xe32 Call
	if(var_23_bool == 0) goto Label_3639; // 0xe34 JumpB
	lshStopSpeech(); // 0xe35 Func
	
Label_3639:
	return 0; // 0xe37 Return
}


func_49(var_0_object, var_38_int, var_39_object)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x31 PushV
	var_0_object = var_39_object; // 0x32 TMov
	var_49_bool = 0; var_50_object = Obj(); // 0x33 PushV
	var_50_object = var_39_object; // 0x34 Mov
	func_3555(var_50_object); // 0x35 Call
	var_89_bool = var_49_bool == 0; // 0x37 Not
	if(var_89_bool == 0) goto Label_59; // 0x38 JumpB
	var_38_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_45_object); // 0x3b Func
	var_90_int = 0; // 0x3d PushV
	func_3729(var_90_int); // 0x3e Call
	SetNPCName(var_90_int); // 0x40 ObjFunc
	var_91_string = ""; // 0x42 PushV
	func_3731(var_91_string); // 0x43 Call
	SetPhoto(var_91_string); // 0x45 ObjFunc
	var_92_int = 0; // 0x47 PushV
	func_4454(var_92_int); // 0x48 Call
	SetPlayerName(var_92_int); // 0x4a ObjFunc
	var_47_int = -1; // 0x4c MovI
	IsOverrideActive(var_46_bool); // 0x4d Func
	var_100_bool = var_46_bool; // 0x4f Push
	if(var_100_bool == 0) goto Label_83; // 0x50 JumpB
	var_38_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_45_object); // 0x53 Func
	var_101_object = Obj(); var_102_object = Obj(); // 0x55 PushV
	var_101_object = var_39_object; // 0x56 Mov
	var_102_object = var_45_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_48_bool); // 0x5c ObjFunc
	
Label_94:
	var_145_bool = var_48_bool == 0; // 0x5e Not
	if(var_145_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_48_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_146_object = Obj(); // 0x65 PushV
	var_146_object = var_39_object; // 0x66 Mov
	func_3611(); // 0x67 Call
	StopDialog(var_45_object); // 0x69 Func
	GetReturnValue(var_47_int); // 0x6b ObjFunc
	var_38_int = var_47_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_3889()
{
	var_91_object = Obj(); var_92_string = ""; var_93_float = 0; // 0xf32 PushV
	var_94_object = Obj(); // 0xf33 PushV
	func_4404(var_94_object); // 0xf34 Call
	var_91_object = var_94_object; // 0xf35 Mov
	var_92_string = "pt_map_bigvlad"; // 0xf37 MovS
	var_93_float = 2; // 0xf38 MovI
	func_4421(var_91_object, var_92_string, var_93_float); // 0xf39 Call
	var_114_object = Obj(); // 0xf3b PushV
	func_4404(var_114_object); // 0xf3c Call
	ShowMap(var_114_object); // 0xf3e ObjFunc
	return 0; // 0xf40 Return
}


func_4404(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0x1134 PushV
	GetMainOutdoorScene(var_39_object); // 0x1135 Func
	var_41_bool = var_39_object == 0; // 0x1137 NullEq
	if(var_41_bool == 0) goto Label_4415; // 0x1138 JumpB
	var_42_string = "Can't find main outdoor scene"; // 0x1139 PushS
	Trace(var_42_string); // 0x113a Func
	var_40_object = 0; // 0x113c SetNull
	var_36_object = var_40_object; // 0x113d Mov
	return 4; // 0x113e Return
	
Label_4415:
	GetMap(var_40_object); // 0x113f ObjFunc
	var_36_object = var_40_object; // 0x1141 Mov
	return 4; // 0x1142 Return
}


func_3640(var_74_cvector, var_75_cvector)
{
	var_77_float = 0; var_78_float = 0; // 0xe38 PushV
	var_79_int = var_75_cvector | var_75_cvector; // 0xe39 Or
	var_78_float = sqrt(var_79_int); // 0xe3a Sqrt2
	var_80_float = 0.0; // 0xe3b PushF
	var_81_bool = var_78_float < var_80_float; // 0xe3c LT
	if(var_81_bool == 0) goto Label_3648; // 0xe3d JumpB
	var_74_cvector = CVector(0.0, 0.0, 0.0); // 0xe3e MovV
	return 2; // 0xe3f Return
	
Label_3648:
	var_74_cvector = var_75_cvector / var_75_cvector; // 0xe40 Div2
	return 2; // 0xe41 Return
}


func_4161()
{
	var_28_string = "d6RubinGoesToGeorg"; // 0x1042 PushS
	var_29_int = 1; // 0x1043 PushI
	SetVariable(var_28_string, var_29_int); // 0x1044 Func
	return 0; // 0x1046 Return
}


func_3650(var_57_int, var_58_string)
{
	var_59_int = 0; var_60_int = 0; // 0xe42 PushV
	GetVariable(var_58_string, var_60_int); // 0xe43 Func
	var_57_int = var_60_int; // 0xe45 Mov
	return 2; // 0xe46 Return
}


func_3905()
{
	var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); // 0xf41 PushV
	var_143_object = Obj(); // 0xf42 PushV
	func_4404(var_143_object); // 0xf43 Call
	var_141_object = var_143_object; // 0xf44 Mov
	var_144_string = "d3q01AlexandrGotoOspina"; // 0xf46 PushS
	FindMark(var_142_object, var_144_string); // 0xf47 ObjFunc
	var_145_object = var_142_object; // 0xf49 Push
	if(var_145_object == 0) goto Label_3917; // 0xf4a JumpB
	Remove(); // 0xf4b ObjFunc
	
Label_3917:
	var_146_string = "d3q01AlexandrGotoOspinaSelf"; // 0xf4d PushS
	FindMark(var_142_object, var_146_string); // 0xf4e ObjFunc
	var_147_object = var_142_object; // 0xf50 Push
	if(var_147_object == 0) goto Label_3924; // 0xf51 JumpB
	Remove(); // 0xf52 ObjFunc
	
Label_3924:
	var_148_string = "d3q01BigVladAgreed"; // 0xf54 PushS
	FindMark(var_142_object, var_148_string); // 0xf55 ObjFunc
	var_149_object = var_142_object; // 0xf57 Push
	if(var_149_object == 0) goto Label_3931; // 0xf58 JumpB
	Remove(); // 0xf59 ObjFunc
	
Label_3931:
	var_150_string = "d3q01BigVladAgreedSelf"; // 0xf5b PushS
	FindMark(var_142_object, var_150_string); // 0xf5c ObjFunc
	var_151_object = var_142_object; // 0xf5e Push
	if(var_151_object == 0) goto Label_3938; // 0xf5f JumpB
	Remove(); // 0xf60 ObjFunc
	
Label_3938:
	var_152_string = "d3q01BigVladGotoGeorg"; // 0xf62 PushS
	FindMark(var_142_object, var_152_string); // 0xf63 ObjFunc
	var_153_object = var_142_object; // 0xf65 Push
	if(var_153_object == 0) goto Label_3945; // 0xf66 JumpB
	Remove(); // 0xf67 ObjFunc
	
Label_3945:
	var_154_string = "d3q01BigVladGotoGeorgSelf"; // 0xf69 PushS
	FindMark(var_142_object, var_154_string); // 0xf6a ObjFunc
	var_155_object = var_142_object; // 0xf6c Push
	if(var_155_object == 0) goto Label_3952; // 0xf6d JumpB
	Remove(); // 0xf6e ObjFunc
	
Label_3952:
	var_156_string = "d3q01GeorgAgreed"; // 0xf70 PushS
	FindMark(var_142_object, var_156_string); // 0xf71 ObjFunc
	var_157_object = var_142_object; // 0xf73 Push
	if(var_157_object == 0) goto Label_3959; // 0xf74 JumpB
	Remove(); // 0xf75 ObjFunc
	
Label_3959:
	var_158_string = "d3q01GeorgAgreedSelf"; // 0xf77 PushS
	FindMark(var_142_object, var_158_string); // 0xf78 ObjFunc
	var_159_object = var_142_object; // 0xf7a Push
	if(var_159_object == 0) goto Label_3966; // 0xf7b JumpB
	Remove(); // 0xf7c ObjFunc
	
Label_3966:
	var_160_string = "d3q01OspinaButchersWillHelpSelf"; // 0xf7e PushS
	FindMark(var_142_object, var_160_string); // 0xf7f ObjFunc
	var_161_object = var_142_object; // 0xf81 Push
	if(var_161_object == 0) goto Label_3973; // 0xf82 JumpB
	Remove(); // 0xf83 ObjFunc
	
Label_3973:
	var_162_string = "d3q01OspinaGotoBigVlad"; // 0xf85 PushS
	FindMark(var_142_object, var_162_string); // 0xf86 ObjFunc
	var_163_object = var_142_object; // 0xf88 Push
	if(var_163_object == 0) goto Label_3980; // 0xf89 JumpB
	Remove(); // 0xf8a ObjFunc
	
Label_3980:
	var_164_string = "d3q01OspinaGotoBigVladSelf"; // 0xf8c PushS
	FindMark(var_142_object, var_164_string); // 0xf8d ObjFunc
	var_165_object = var_142_object; // 0xf8f Push
	if(var_165_object == 0) goto Label_3987; // 0xf90 JumpB
	Remove(); // 0xf91 ObjFunc
	
Label_3987:
	var_166_string = "d3q01RubinGotoAlexandr"; // 0xf93 PushS
	FindMark(var_142_object, var_166_string); // 0xf94 ObjFunc
	var_167_object = var_142_object; // 0xf96 Push
	if(var_167_object == 0) goto Label_3994; // 0xf97 JumpB
	Remove(); // 0xf98 ObjFunc
	
Label_3994:
	var_168_string = "d3q01RubinGotoAlexandrSelf"; // 0xf9a PushS
	FindMark(var_142_object, var_168_string); // 0xf9b ObjFunc
	var_169_object = var_142_object; // 0xf9d Push
	if(var_169_object == 0) goto Label_4001; // 0xf9e JumpB
	Remove(); // 0xf9f ObjFunc
	
Label_4001:
	func_4519(); // 0xfa2 Call
	var_179_bool = 0; var_180_string = ""; var_181_string = ""; // 0xfa4 PushV
	var_180_string = "quest_d3_01"; // 0xfa5 MovS
	var_181_string = "completed"; // 0xfa6 MovS
	func_3688(var_179_bool, var_180_string, var_181_string); // 0xfa7 Call
	return 4; // 0xfa9 Return
}


func_4421(var_91_object, var_92_string, var_93_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0; // 0x1145 PushV
	GetMainOutdoorScene(var_101_object); // 0x1146 Func
	var_103_bool = var_101_object == 0; // 0x1148 NullEq
	if(var_103_bool == 0) goto Label_4430; // 0x1149 JumpB
	var_104_string = "Can't find main outdoor scene"; // 0x114a PushS
	Trace(var_104_string); // 0x114b Func
	return 8; // 0x114d Return
	
Label_4430:
	GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector); // 0x114e ObjFunc
	var_105_bool = var_102_bool == 0; // 0x1150 Not
	if(var_105_bool == 0) goto Label_4440; // 0x1151 JumpB
	var_106_string = "Warning: outdoor scene locator "; // 0x1152 PushS
	var_107_int = var_106_string + var_92_string; // 0x1153 Add
	var_108_string = " doesnt exist"; // 0x1154 PushS
	var_109_int = var_107_int + var_108_string; // 0x1155 Add
	Trace(var_109_int); // 0x1156 Func
	
Label_4440:
	GetMap(var_91_object); // 0x1158 ObjFunc
	var_110_bool = var_91_object == 0; // 0x115a NullEq
	if(var_110_bool == 0) goto Label_4448; // 0x115b JumpB
	var_111_string = "Can't find map"; // 0x115c PushS
	Trace(var_111_string); // 0x115d Func
	return 8; // 0x115f Return
	
Label_4448:
	var_112_float = GetByIndex(var_99_cvector, 0); // 0x1160 PushE
	var_113_float = GetByIndex(var_99_cvector, 2); // 0x1161 PushE
	SetMapParams(var_112_float, var_113_float, var_93_float); // 0x1162 ObjFunc
	return 8; // 0x1164 Return
}


func_4167(var_30_object)
{
	var_32_string = "whitevaccine is given"; // 0x1048 PushS
	Trace(var_32_string); // 0x1049 Func
	var_33_object = Obj(); var_34_string = ""; var_35_int = 0; // 0x104b PushV
	var_33_object = var_30_object; // 0x104c Mov
	var_34_string = "white_vaccine"; // 0x104d MovS
	var_35_int = 1; // 0x104e MovI
	func_3668(var_33_object, var_34_string, var_35_int); // 0x104f Call
	return 0; // 0x1051 Return
}


func_3655(var_39_object, var_40_int)
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0xe47 PushV
	GetItemID(var_44_int); // 0xe48 ObjFunc
	var_47_string = "Category"; // 0xe4a PushS
	GetInvItemProperty(var_45_int, var_44_int, var_47_string); // 0xe4b Func
	AddItem(var_46_bool, var_39_object, var_45_int, var_40_int); // 0xe4d ObjFunc
	var_48_bool = var_46_bool == 0; // 0xe4f Not
	if(var_48_bool == 0) goto Label_3667; // 0xe50 JumpB
	DropItems(var_39_object, var_40_int); // 0xe51 ObjFunc
	
Label_3667:
	return 6; // 0xe53 Return
}


func_4178()
{
	var_244_string = "d3RubinVisit"; // 0x1053 PushS
	var_245_int = 1; // 0x1054 PushI
	SetVariable(var_244_string, var_245_int); // 0x1055 Func
	return 0; // 0x1057 Return
}


func_3410(var_2_object, var_64_string)
{
	var_65_bool = 0; // 0xd53 PushV
	func_3733(var_65_bool); // 0xd54 Call
	var_66_bool = var_65_bool == 0; // 0xd56 Not
	if(var_66_bool == 0) goto Label_3417; // 0xd57 JumpB
	return 0; // 0xd58 Return
	
Label_3417:
	var_67_bool = var_64_string == var_2_object; // 0xd59 Eq
	if(var_67_bool == 0) goto Label_3420; // 0xd5a JumpB
	return 0; // 0xd5b Return
	
Label_3420:
	var_68_string = ""; // 0xd5c PushV
	var_68_string = var_64_string; // 0xd5d Mov
	func_3615(var_68_string); // 0xd5e Call
	var_2_object = var_64_string; // 0xd60 TMov
	return 0; // 0xd61 Return
}


func_3668(var_33_object, var_34_string, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0xe54 PushV
	CreateInvItem(var_37_object); // 0xe55 Func
	SetItemName(var_34_string); // 0xe57 ObjFunc
	var_38_object = Obj(); var_39_object = Obj(); var_40_int = 0; // 0xe59 PushV
	var_38_object = var_33_object; // 0xe5a Mov
	var_39_object = var_37_object; // 0xe5b Mov
	var_40_int = var_35_int; // 0xe5c Mov
	func_3655(var_39_object, var_40_int); // 0xe5d Call
	return 2; // 0xe5f Return
}


func_4184()
{
	var_223_string = "d5RubinVisit"; // 0x1059 PushS
	var_224_int = 1; // 0x105a PushI
	SetVariable(var_223_string, var_224_int); // 0x105b Func
	return 0; // 0x105d Return
}


func_4190(var_244_bool, var_245_object)
{
	var_246_bool = 0; var_247_object = Obj(); // 0x105f PushV
	var_247_object = var_245_object; // 0x1060 Mov
	func_4342(var_247_object); // 0x1061 Call
	if(var_246_bool == 0) goto Label_4198; // 0x1063 JumpB
	var_244_bool = 1; // 0x1064 MovB
	return 0; // 0x1065 Return
	
Label_4198:
	var_244_bool = 0; // 0x1066 MovB
	return 0; // 0x1067 Return
}


func_3681(var_280_bool, var_282_string)
{
	var_283_int = 0; var_284_bool = 0; var_285_int = 0; var_286_bool = 0; // 0xe61 PushV
	GetInvItemByName(var_285_int, var_282_string); // 0xe62 Func
	HasItem(var_285_int, var_286_bool); // 0xe64 ObjFunc
	var_280_bool = var_286_bool; // 0xe66 Mov
	return 4; // 0xe67 Return
}


func_4454(var_92_int)
{
	var_93_int = 0; var_94_int = 0; // 0x1166 PushV
	var_95_string = "player"; // 0x1167 PushS
	GetVariable(var_95_string, var_94_int); // 0x1168 Func
	var_96_int = 0; // 0x116a PushI
	var_97_bool = var_94_int == var_96_int; // 0x116b Eq
	if(var_97_bool == 0) goto Label_4464; // 0x116c JumpB
	var_92_int = 200001; // 0x116d MovI
	return 2; // 0x116e Return
	
Label_4464:
	var_98_int = 1; // 0x1170 PushI
	var_99_bool = var_94_int == var_98_int; // 0x1171 Eq
	if(var_99_bool == 0) goto Label_4469; // 0x1172 JumpB
	var_92_int = 200002; // 0x1173 MovI
	return 2; // 0x1174 Return
	
Label_4469:
	var_92_int = 200003; // 0x1175 MovI
	return 2; // 0x1176 Return
}


func_4200(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x1069 PushV
	var_231_string = "d3q01"; // 0x106a MovS
	func_3650(var_230_int, var_231_string); // 0x106b Call
	var_234_int = 0; // 0x106d PushI
	var_235_bool = var_230_int == var_234_int; // 0x106e Eq
	if(var_235_bool == 0) goto Label_4210; // 0x106f JumpB
	var_228_bool = 1; // 0x1070 MovB
	return 0; // 0x1071 Return
	
Label_4210:
	var_228_bool = 0; // 0x1072 MovB
	return 0; // 0x1073 Return
}


func_3688(var_193_bool, var_194_string, var_195_string)
{
	var_196_object = Obj(); var_197_object = Obj(); // 0xe68 PushV
	FindActor(var_197_object, var_194_string); // 0xe69 Func
	var_198_bool = var_197_object == 0; // 0xe6b NullEq
	if(var_198_bool == 0) goto Label_3695; // 0xe6c JumpB
	var_193_bool = 0; // 0xe6d MovB
	return 2; // 0xe6e Return
	
Label_3695:
	Trigger(var_197_object, var_195_string); // 0xe6f Func
	var_193_bool = 1; // 0xe71 MovB
	return 2; // 0xe72 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_101_object, var_102_object)
{
	var_0_object = var_102_object; // 0x71 TMov
	var_1_object = var_101_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_107_int = 1; // 0x74 PushI
	if(var_107_int == 0) goto Label_175; // 0x75 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x76 PushV
	var_108_object = var_1_object; // 0x77 MovT
	var_109_object = var_0_object; // 0x78 MovT
	func_4018(); // 0x79 Call
	var_112_string = ""; // 0x7b PushV
	var_112_string = "Neutral"; // 0x7c MovS
	func_205(var_102_object, var_112_string); // 0x7d Call
	var_127_int = 9170; // 0x7f PushI
	SetMessage(var_127_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_128_int = 9171; // 0x84 PushI
	var_129_int = 10056; // 0x85 PushI
	var_130_int = 10055; // 0x86 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x87 TObjFunc
	var_131_int = 9175; // 0x89 PushI
	var_132_int = 10062; // 0x8a PushI
	var_133_int = 10061; // 0x8b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x8c TObjFunc
	var_134_int = 9187; // 0x8e PushI
	var_135_int = 10077; // 0x8f PushI
	var_136_int = 10076; // 0x90 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x91 TObjFunc
	goto Label_175; // 0x93 Jump
	
Label_175:
	var_137_bool = 0; // 0xaf PushV
	func_3733(var_137_bool); // 0xb0 Call
	if(var_137_bool == 0) goto Label_190; // 0xb2 JumpB
	
Label_179:
	lshWaitForAnimEnd(); // 0xb3 Func
	var_138_object = var_3_object; // 0xb5 PushT
	if(var_138_object == 0) goto Label_184; // 0xb6 JumpB
	goto Label_189; // 0xb7 Jump
	
Label_189:
	goto Label_204; // 0xbd Jump
	
Label_204:
	return 0; // 0xcc Return
	
Label_184:
	var_139_string = ""; // 0xb8 PushV
	var_139_string = var_2_object; // 0xb9 MovT
	func_3615(var_139_string); // 0xba Call
	goto Label_179; // 0xbc Jump
	
Label_190:
	var_140_string = "all"; // 0xbe PushS
	var_141_string = "idle"; // 0xbf PushS
	PlayAnimation(var_140_string, var_141_string); // 0xc0 Func
	
Label_194:
	WaitForAnimEnd(); // 0xc2 Func
	var_142_object = var_3_object; // 0xc4 PushT
	if(var_142_object == 0) goto Label_199; // 0xc5 JumpB
	goto Label_204; // 0xc6 Jump
	
Label_199:
	var_143_string = "all"; // 0xc7 PushS
	var_144_string = "idle"; // 0xc8 PushS
	PlayAnimation(var_143_string, var_144_string); // 0xc9 Func
	goto Label_194; // 0xcb Jump
}


func_4212(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x1075 PushV
	var_239_string = "ood3Rubin1"; // 0x1076 MovS
	func_3650(var_238_int, var_239_string); // 0x1077 Call
	var_240_int = 0; // 0x1079 PushI
	var_241_bool = var_238_int == var_240_int; // 0x107a Eq
	if(var_241_bool == 0) goto Label_4222; // 0x107b JumpB
	var_236_bool = 1; // 0x107c MovB
	return 0; // 0x107d Return
	
Label_4222:
	var_236_bool = 0; // 0x107e MovB
	return 0; // 0x107f Return
}


func_3700(var_47_float)
{
	var_48_float = 0; var_49_float = 0; // 0xe74 PushV
	GetGameTime(var_49_float); // 0xe75 Func
	var_47_float = var_49_float; // 0xe77 Mov
	return 2; // 0xe78 Return
}


func_4471()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x1177 PushV
	var_55_string = "Adding diary entry"; // 0x1178 PushS
	Trace(var_55_string); // 0x1179 Func
	var_56_int = 49; // 0x117b PushI
	var_57_int = 1; // 0x117c PushI
	var_58_int = 12131; // 0x117d PushI
	CreateDiaryEntry(var_54_object, var_56_int, var_57_int, var_58_int); // 0x117e Func
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; // 0x1180 PushV
	var_60_object = var_54_object; // 0x1181 Mov
	var_61_int = 2; // 0x1182 MovI
	func_4358(var_59_bool, var_60_object, var_61_int); // 0x1183 Call
	return 2; // 0x1185 Return
}


func_3705(var_26_int)
{
	var_27_float = 0; var_28_float = 0; // 0xe79 PushV
	GetGameTime(var_28_float); // 0xe7a Func
	var_29_int = 1; // 0xe7c PushI
	var_30_int = 0; // 0xe7d PushV
	var_31_int = 24; // 0xe7e PushI
	var_30_int = var_28_float / var_28_float; // 0xe7f Div2
	var_26_int = var_29_int + var_30_int; // 0xe80 Add2
	return 2; // 0xe81 Return
}


func_4224(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0x1081 PushV
	var_322_string = "ood3Rubin2"; // 0x1082 MovS
	func_3650(var_321_int, var_322_string); // 0x1083 Call
	var_323_int = 0; // 0x1085 PushI
	var_324_bool = var_321_int == var_323_int; // 0x1086 Eq
	if(var_324_bool == 0) goto Label_4234; // 0x1087 JumpB
	var_319_bool = 1; // 0x1088 MovB
	return 0; // 0x1089 Return
	
Label_4234:
	var_319_bool = 0; // 0x108a MovB
	return 0; // 0x108b Return
}


func_3714(var_24_bool, var_25_int)
{
	var_26_int = 0; // 0xe83 PushV
	func_3705(var_26_int); // 0xe84 Call
	var_24_bool = var_26_int == var_25_int; // 0xe86 Eq2
	return 0; // 0xe87 Return
}


func_4487()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x1187 PushV
	var_57_string = "Adding diary entry"; // 0x1188 PushS
	Trace(var_57_string); // 0x1189 Func
	var_58_int = 25; // 0x118b PushI
	var_59_int = 1; // 0x118c PushI
	var_60_int = 3365; // 0x118d PushI
	CreateDiaryEntry(var_56_object, var_58_int, var_59_int, var_60_int); // 0x118e Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x1190 PushV
	var_62_object = var_56_object; // 0x1191 Mov
	var_63_int = -1; // 0x1192 MovI
	func_4358(var_61_bool, var_62_object, var_63_int); // 0x1193 Call
	return 2; // 0x1195 Return
}


func_3720(var_468_bool)
{
	var_469_bool = 0; var_470_bool = 0; // 0xe88 PushV
	var_471_string = ""; // 0xe89 PushV
	var_471_string = "No"; // 0xe8a MovS
	func_3615(var_471_string); // 0xe8b Call
	lshWaitForAnimEnd(var_470_bool); // 0xe8d Func
	var_468_bool = var_470_bool; // 0xe8f Mov
	return 2; // 0xe90 Return
}


func_4236(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x108d PushV
	var_331_string = "ood3Rubin3"; // 0x108e MovS
	func_3650(var_330_int, var_331_string); // 0x108f Call
	var_332_int = 0; // 0x1091 PushI
	var_333_bool = var_330_int == var_332_int; // 0x1092 Eq
	if(var_333_bool == 0) goto Label_4246; // 0x1093 JumpB
	var_328_bool = 1; // 0x1094 MovB
	return 0; // 0x1095 Return
	
Label_4246:
	var_328_bool = 0; // 0x1096 MovB
	return 0; // 0x1097 Return
}


func_3729(var_90_int)
{
	var_90_int = 2876; // 0xe91 MovI
	return 0; // 0xe92 Return
}


func_3731(var_91_string)
{
	var_91_string = "ui/NPC_Rubin.png"; // 0xe93 MovS
	return 0; // 0xe94 Return
}


func_3733(var_23_bool)
{
	var_23_bool = 1; // 0xe95 MovB
	return 0; // 0xe96 Return
}


func_3735()
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0xe97 PushV
	var_32_string = "d1q01"; // 0xe98 PushS
	var_33_int = 1000; // 0xe99 PushI
	SetVariable(var_32_string, var_33_int); // 0xe9a Func
	var_34_object = Obj(); // 0xe9c PushV
	func_4404(var_34_object); // 0xe9d Call
	var_30_object = var_34_object; // 0xe9e Mov
	var_41_string = "d1q01EvaAboutMark"; // 0xea0 PushS
	FindMark(var_31_object, var_41_string); // 0xea1 ObjFunc
	var_42_object = var_31_object; // 0xea3 Push
	if(var_42_object == 0) goto Label_3751; // 0xea4 JumpB
	Remove(); // 0xea5 ObjFunc
	
Label_3751:
	var_43_string = "d1q01EvaGotoSimon"; // 0xea7 PushS
	FindMark(var_31_object, var_43_string); // 0xea8 ObjFunc
	var_44_object = var_31_object; // 0xeaa Push
	if(var_44_object == 0) goto Label_3758; // 0xeab JumpB
	Remove(); // 0xeac ObjFunc
	
Label_3758:
	var_45_string = "d1q01GrifAboutRubin"; // 0xeae PushS
	FindMark(var_31_object, var_45_string); // 0xeaf ObjFunc
	var_46_object = var_31_object; // 0xeb1 Push
	if(var_46_object == 0) goto Label_3765; // 0xeb2 JumpB
	Remove(); // 0xeb3 ObjFunc
	
Label_3765:
	var_47_string = "d1q01MarkAboutJulia"; // 0xeb5 PushS
	FindMark(var_31_object, var_47_string); // 0xeb6 ObjFunc
	var_48_object = var_31_object; // 0xeb8 Push
	if(var_48_object == 0) goto Label_3772; // 0xeb9 JumpB
	Remove(); // 0xeba ObjFunc
	
Label_3772:
	var_49_string = "d1q01MarkAboutLara"; // 0xebc PushS
	FindMark(var_31_object, var_49_string); // 0xebd ObjFunc
	var_50_object = var_31_object; // 0xebf Push
	if(var_50_object == 0) goto Label_3779; // 0xec0 JumpB
	Remove(); // 0xec1 ObjFunc
	
Label_3779:
	var_51_string = "d1q01NotkinAboutRubin"; // 0xec3 PushS
	FindMark(var_31_object, var_51_string); // 0xec4 ObjFunc
	var_52_object = var_31_object; // 0xec6 Push
	if(var_52_object == 0) goto Label_3786; // 0xec7 JumpB
	Remove(); // 0xec8 ObjFunc
	
Label_3786:
	func_4471(); // 0xecb Call
	var_78_bool = 0; var_79_int = 0; // 0xecd PushV
	var_79_int = 31; // 0xece MovI
	func_4387(var_78_bool, var_79_int); // 0xecf Call
	var_86_bool = 0; var_87_int = 0; // 0xed1 PushV
	var_87_int = 32; // 0xed2 MovI
	func_4387(var_86_bool, var_87_int); // 0xed3 Call
	var_88_bool = 0; var_89_int = 0; // 0xed5 PushV
	var_89_int = 33; // 0xed6 MovI
	func_4387(var_88_bool, var_89_int); // 0xed7 Call
	var_90_bool = 0; var_91_int = 0; // 0xed9 PushV
	var_91_int = 34; // 0xeda MovI
	func_4387(var_90_bool, var_91_int); // 0xedb Call
	return 4; // 0xedd Return
}


func_4248(var_339_bool)
{
	var_341_int = 0; var_342_string = ""; // 0x1099 PushV
	var_342_string = "ood3Rubin4"; // 0x109a MovS
	func_3650(var_341_int, var_342_string); // 0x109b Call
	var_343_int = 0; // 0x109d PushI
	var_344_bool = var_341_int == var_343_int; // 0x109e Eq
	if(var_344_bool == 0) goto Label_4258; // 0x109f JumpB
	var_339_bool = 1; // 0x10a0 MovB
	return 0; // 0x10a1 Return
	
Label_4258:
	var_339_bool = 0; // 0x10a2 MovB
	return 0; // 0x10a3 Return
}


func_4503()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x1197 PushV
	var_82_string = "Adding diary entry"; // 0x1198 PushS
	Trace(var_82_string); // 0x1199 Func
	var_83_int = 68; // 0x119b PushI
	var_84_int = 1; // 0x119c PushI
	var_85_int = 12150; // 0x119d PushI
	CreateDiaryEntry(var_81_object, var_83_int, var_84_int, var_85_int); // 0x119e Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x11a0 PushV
	var_87_object = var_81_object; // 0x11a1 Mov
	var_88_int = 25; // 0x11a2 MovI
	func_4358(var_86_bool, var_87_object, var_88_int); // 0x11a3 Call
	return 2; // 0x11a5 Return
}


func_672(var_0_object, var_149_int, var_150_object)
{
	var_152_object = Obj(); var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_object = Obj(); var_157_bool = 0; var_158_int = 0; var_159_bool = 0; // 0x2a0 PushV
	var_0_object = var_150_object; // 0x2a1 TMov
	var_160_bool = 0; var_161_object = Obj(); // 0x2a2 PushV
	var_161_object = var_150_object; // 0x2a3 Mov
	func_3555(var_161_object); // 0x2a4 Call
	var_162_bool = var_160_bool == 0; // 0x2a6 Not
	if(var_162_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_149_int = -2; // 0x2a8 MovI
	return 8; // 0x2a9 Return
	
Label_682:
	CreateDialog(var_156_object); // 0x2aa Func
	var_163_int = 0; // 0x2ac PushV
	func_3729(var_163_int); // 0x2ad Call
	SetNPCName(var_163_int); // 0x2af ObjFunc
	var_164_string = ""; // 0x2b1 PushV
	func_3731(var_164_string); // 0x2b2 Call
	SetPhoto(var_164_string); // 0x2b4 ObjFunc
	var_165_int = 0; // 0x2b6 PushV
	func_4454(var_165_int); // 0x2b7 Call
	SetPlayerName(var_165_int); // 0x2b9 ObjFunc
	var_158_int = -1; // 0x2bb MovI
	IsOverrideActive(var_157_bool); // 0x2bc Func
	var_166_bool = var_157_bool; // 0x2be Push
	if(var_166_bool == 0) goto Label_706; // 0x2bf JumpB
	var_149_int = -2; // 0x2c0 MovI
	return 8; // 0x2c1 Return
	
Label_706:
	DoDialog(var_156_object); // 0x2c2 Func
	var_167_object = Obj(); var_168_object = Obj(); // 0x2c4 PushV
	var_167_object = var_150_object; // 0x2c5 Mov
	var_168_object = var_156_object; // 0x2c6 Mov
	TaskCall(5); // 0x2c7 TaskCall
	func_735(var_169_object, var_170_object, var_171_string, var_172_bool, var_167_object, var_168_object); // 0x2c8 Call
	TaskReturn(); // 0x2c9 TaskReturn
	IsDialogEnd(var_159_bool); // 0x2cb ObjFunc
	
Label_717:
	var_300_bool = var_159_bool == 0; // 0x2cd Not
	if(var_300_bool == 0) goto Label_724; // 0x2ce JumpB
	sync(); // 0x2cf Func
	IsDialogEnd(var_159_bool); // 0x2d1 ObjFunc
	goto Label_717; // 0x2d3 Jump
	
Label_724:
	var_301_object = Obj(); // 0x2d4 PushV
	var_301_object = var_150_object; // 0x2d5 Mov
	func_3611(); // 0x2d6 Call
	StopDialog(var_156_object); // 0x2d8 Func
	GetReturnValue(var_158_int); // 0x2da ObjFunc
	var_149_int = var_158_int; // 0x2dc Mov
	return 8; // 0x2dd Return
}


func_4260(var_290_bool)
{
	var_292_int = 0; var_293_string = ""; // 0x10a5 PushV
	var_293_string = "d3q01"; // 0x10a6 MovS
	func_3650(var_292_int, var_293_string); // 0x10a7 Call
	var_294_int = 1000; // 0x10a9 PushI
	var_295_bool = var_292_int == var_294_int; // 0x10aa Eq
	if(var_295_bool == 0) goto Label_4270; // 0x10ab JumpB
	var_290_bool = 1; // 0x10ac MovB
	return 0; // 0x10ad Return
	
Label_4270:
	var_290_bool = 0; // 0x10ae MovB
	return 0; // 0x10af Return
}


func_4519()
{
	var_170_object = Obj(); var_171_object = Obj(); // 0x11a7 PushV
	var_172_string = "Adding diary entry"; // 0x11a8 PushS
	Trace(var_172_string); // 0x11a9 Func
	var_173_int = 74; // 0x11ab PushI
	var_174_int = 1; // 0x11ac PushI
	var_175_int = 12156; // 0x11ad PushI
	CreateDiaryEntry(var_171_object, var_173_int, var_174_int, var_175_int); // 0x11ae Func
	var_176_bool = 0; var_177_object = Obj(); var_178_int = 0; // 0x11b0 PushV
	var_177_object = var_171_object; // 0x11b1 Mov
	var_178_int = 25; // 0x11b2 MovI
	func_4358(var_176_bool, var_177_object, var_178_int); // 0x11b3 Call
	return 2; // 0x11b5 Return
}


func_4012()
{
	var_628_string = "d3RubinToldWhereIsSimon"; // 0xfad PushS
	var_629_int = 1; // 0xfae PushI
	SetVariable(var_628_string, var_629_int); // 0xfaf Func
	return 0; // 0xfb1 Return
}


func_4272(var_281_bool, var_282_object)
{
	var_283_bool = 0; var_284_object = Obj(); var_285_string = ""; // 0x10b1 PushV
	var_284_object = var_282_object; // 0x10b2 Mov
	var_285_string = "d3q01_blood"; // 0x10b3 MovS
	func_3681(var_284_object, var_285_string); // 0x10b4 Call
	if(var_283_bool == 0) goto Label_4281; // 0x10b6 JumpB
	var_281_bool = 1; // 0x10b7 MovB
	return 0; // 0x10b8 Return
	
Label_4281:
	var_281_bool = 0; // 0x10b9 MovB
	return 0; // 0x10ba Return
}


func_4018()
{
	var_100_string = "KnowRubin"; // 0xfb3 PushS
	var_101_int = 1; // 0xfb4 PushI
	SetVariable(var_100_string, var_101_int); // 0xfb5 Func
	return 0; // 0xfb7 Return
}


func_4535()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x11b7 PushV
	var_57_string = "Adding diary entry"; // 0x11b8 PushS
	Trace(var_57_string); // 0x11b9 Func
	var_58_int = 139; // 0x11bb PushI
	var_59_int = 1; // 0x11bc PushI
	var_60_int = 15339; // 0x11bd PushI
	CreateDiaryEntry(var_56_object, var_58_int, var_59_int, var_60_int); // 0x11be Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x11c0 PushV
	var_62_object = var_56_object; // 0x11c1 Mov
	var_63_int = -1; // 0x11c2 MovI
	func_4358(var_61_bool, var_62_object, var_63_int); // 0x11c3 Call
	return 2; // 0x11c5 Return
}


func_4024()
{
	var_28_string = "ood5Rubin1"; // 0xfb9 PushS
	var_29_int = 1; // 0xfba PushI
	SetVariable(var_28_string, var_29_int); // 0xfbb Func
	return 0; // 0xfbd Return
}


func_4283(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x10bc PushV
	var_216_string = "ood5Rubin1"; // 0x10bd MovS
	func_3650(var_215_int, var_216_string); // 0x10be Call
	var_219_int = 0; // 0x10c0 PushI
	var_220_bool = var_215_int == var_219_int; // 0x10c1 Eq
	if(var_220_bool == 0) goto Label_4293; // 0x10c2 JumpB
	var_213_bool = 1; // 0x10c3 MovB
	return 0; // 0x10c4 Return
	
Label_4293:
	var_213_bool = 0; // 0x10c5 MovB
	return 0; // 0x10c6 Return
}


func_4030()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0xfbe PushV
	var_34_string = "d5q01"; // 0xfbf PushS
	var_35_int = 1; // 0xfc0 PushI
	SetVariable(var_34_string, var_35_int); // 0xfc1 Func
	var_36_object = Obj(); // 0xfc3 PushV
	func_4404(var_36_object); // 0xfc4 Call
	var_33_object = var_36_object; // 0xfc5 Mov
	var_43_string = "d5q01RubinGotoBigVlad"; // 0xfc7 PushS
	var_44_string = "pt_map_bigvlad"; // 0xfc8 PushS
	var_45_int = 1; // 0xfc9 PushI
	var_46_int = 11956; // 0xfca PushI
	var_47_float = 0; // 0xfcb PushV
	func_3700(var_47_float); // 0xfcc Call
	AddMark(var_43_string, var_44_string, var_45_int, var_46_int, var_47_float); // 0xfce ObjFunc
	var_50_string = "d5q01RubinGotoBigVladSelf"; // 0xfd0 PushS
	var_51_string = "pt_map_rubin"; // 0xfd1 PushS
	var_52_int = 1; // 0xfd2 PushI
	var_53_int = 15348; // 0xfd3 PushI
	var_54_float = 0; // 0xfd4 PushV
	func_3700(var_54_float); // 0xfd5 Call
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xfd7 ObjFunc
	func_4535(); // 0xfda Call
	func_4551(); // 0xfdd Call
	return 2; // 0xfdf Return
}


func_2499(var_2_object, var_225_string)
{
	var_226_bool = 0; // 0x9c4 PushV
	func_3733(var_226_bool); // 0x9c5 Call
	var_227_bool = var_226_bool == 0; // 0x9c7 Not
	if(var_227_bool == 0) goto Label_2506; // 0x9c8 JumpB
	return 0; // 0x9c9 Return
	
Label_2506:
	var_228_bool = var_225_string == var_2_object; // 0x9ca Eq
	if(var_228_bool == 0) goto Label_2509; // 0x9cb JumpB
	return 0; // 0x9cc Return
	
Label_2509:
	var_229_string = ""; // 0x9cd PushV
	var_229_string = var_225_string; // 0x9ce Mov
	func_3615(var_229_string); // 0x9cf Call
	var_2_object = var_225_string; // 0x9d1 TMov
	return 0; // 0x9d2 Return
}


func_4295(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x10c8 PushV
	var_275_string = "d5q01"; // 0x10c9 MovS
	func_3650(var_274_int, var_275_string); // 0x10ca Call
	var_276_int = 7; // 0x10cc PushI
	var_277_bool = var_274_int == var_276_int; // 0x10cd Eq
	if(var_277_bool == 0) goto Label_4305; // 0x10ce JumpB
	var_272_bool = 1; // 0x10cf MovB
	return 0; // 0x10d0 Return
	
Label_4305:
	var_272_bool = 0; // 0x10d1 MovB
	return 0; // 0x10d2 Return
}


func_967(var_2_object, var_246_string)
{
	var_247_bool = 0; // 0x3c8 PushV
	func_3733(var_247_bool); // 0x3c9 Call
	var_248_bool = var_247_bool == 0; // 0x3cb Not
	if(var_248_bool == 0) goto Label_974; // 0x3cc JumpB
	return 0; // 0x3cd Return
	
Label_974:
	var_249_bool = var_246_string == var_2_object; // 0x3ce Eq
	if(var_249_bool == 0) goto Label_977; // 0x3cf JumpB
	return 0; // 0x3d0 Return
	
Label_977:
	var_250_string = ""; // 0x3d1 PushV
	var_250_string = var_246_string; // 0x3d2 Mov
	func_3615(var_250_string); // 0x3d3 Call
	var_2_object = var_246_string; // 0x3d5 TMov
	return 0; // 0x3d6 Return
}


func_3273(var_0_object, var_412_int, var_413_object)
{
	var_415_object = Obj(); var_416_bool = 0; var_417_int = 0; var_418_bool = 0; var_419_object = Obj(); var_420_bool = 0; var_421_int = 0; var_422_bool = 0; // 0xcc9 PushV
	var_0_object = var_413_object; // 0xcca TMov
	var_423_bool = 0; var_424_object = Obj(); // 0xccb PushV
	var_424_object = var_413_object; // 0xccc Mov
	func_3555(var_424_object); // 0xccd Call
	var_425_bool = var_423_bool == 0; // 0xccf Not
	if(var_425_bool == 0) goto Label_3283; // 0xcd0 JumpB
	var_412_int = -2; // 0xcd1 MovI
	return 8; // 0xcd2 Return
	
Label_3283:
	CreateDialog(var_419_object); // 0xcd3 Func
	var_426_int = 0; // 0xcd5 PushV
	func_3729(var_426_int); // 0xcd6 Call
	SetNPCName(var_426_int); // 0xcd8 ObjFunc
	var_427_string = ""; // 0xcda PushV
	func_3731(var_427_string); // 0xcdb Call
	SetPhoto(var_427_string); // 0xcdd ObjFunc
	var_428_int = 0; // 0xcdf PushV
	func_4454(var_428_int); // 0xce0 Call
	SetPlayerName(var_428_int); // 0xce2 ObjFunc
	var_421_int = -1; // 0xce4 MovI
	IsOverrideActive(var_420_bool); // 0xce5 Func
	var_429_bool = var_420_bool; // 0xce7 Push
	if(var_429_bool == 0) goto Label_3307; // 0xce8 JumpB
	var_412_int = -2; // 0xce9 MovI
	return 8; // 0xcea Return
	
Label_3307:
	DoDialog(var_419_object); // 0xceb Func
	var_430_object = Obj(); var_431_object = Obj(); // 0xced PushV
	var_430_object = var_413_object; // 0xcee Mov
	var_431_object = var_419_object; // 0xcef Mov
	TaskCall(9); // 0xcf0 TaskCall
	func_3336(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object); // 0xcf1 Call
	TaskReturn(); // 0xcf2 TaskReturn
	IsDialogEnd(var_422_bool); // 0xcf4 ObjFunc
	
Label_3318:
	var_466_bool = var_422_bool == 0; // 0xcf6 Not
	if(var_466_bool == 0) goto Label_3325; // 0xcf7 JumpB
	sync(); // 0xcf8 Func
	IsDialogEnd(var_422_bool); // 0xcfa ObjFunc
	goto Label_3318; // 0xcfc Jump
	
Label_3325:
	var_467_object = Obj(); // 0xcfd PushV
	var_467_object = var_413_object; // 0xcfe Mov
	func_3611(); // 0xcff Call
	StopDialog(var_419_object); // 0xd01 Func
	GetReturnValue(var_421_int); // 0xd03 ObjFunc
	var_412_int = var_421_int; // 0xd05 Mov
	return 8; // 0xd06 Return
}


func_4551()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x11c7 PushV
	var_82_string = "Adding diary entry"; // 0x11c8 PushS
	Trace(var_82_string); // 0x11c9 Func
	var_83_int = 140; // 0x11cb PushI
	var_84_int = 1; // 0x11cc PushI
	var_85_int = 15340; // 0x11cd PushI
	CreateDiaryEntry(var_81_object, var_83_int, var_84_int, var_85_int); // 0x11ce Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x11d0 PushV
	var_87_object = var_81_object; // 0x11d1 Mov
	var_88_int = 139; // 0x11d2 MovI
	func_4358(var_86_bool, var_87_object, var_88_int); // 0x11d3 Call
	return 2; // 0x11d5 Return
}


func_205(var_2_object, var_102_string)
{
	var_103_bool = 0; // 0xce PushV
	func_3733(var_103_bool); // 0xcf Call
	var_104_bool = var_103_bool == 0; // 0xd1 Not
	if(var_104_bool == 0) goto Label_212; // 0xd2 JumpB
	return 0; // 0xd3 Return
	
Label_212:
	var_105_bool = var_102_string == var_2_object; // 0xd4 Eq
	if(var_105_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_106_string = ""; // 0xd7 PushV
	var_106_string = var_102_string; // 0xd8 Mov
	func_3615(var_106_string); // 0xd9 Call
	var_2_object = var_102_string; // 0xdb TMov
	return 0; // 0xdc Return
}


func_3538(var_21_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; // 0xdd2 PushV
	GetPosition(var_27_cvector); // 0xdd3 ObjFunc
	GetPosition(var_28_cvector); // 0xdd5 Func
	var_29_cvector = var_27_cvector - var_28_cvector; // 0xdd7 Sub2
	var_31_float = GetByIndex(var_29_cvector, 0); // 0xdd8 PushE
	var_32_float = GetByIndex(var_29_cvector, 2); // 0xdd9 PushE
	Rotate(var_31_float, var_32_float, var_30_bool); // 0xdda Func
	var_21_bool = var_30_bool; // 0xddc Mov
	return 8; // 0xddd Return
}


func_4307(var_266_bool)
{
	var_268_int = 0; var_269_string = ""; // 0x10d4 PushV
	var_269_string = "ood5Rubin2"; // 0x10d5 MovS
	func_3650(var_268_int, var_269_string); // 0x10d6 Call
	var_270_int = 0; // 0x10d8 PushI
	var_271_bool = var_268_int == var_270_int; // 0x10d9 Eq
	if(var_271_bool == 0) goto Label_4317; // 0x10da JumpB
	var_266_bool = 1; // 0x10db MovB
	return 0; // 0x10dc Return
	
Label_4317:
	var_266_bool = 0; // 0x10dd MovB
	return 0; // 0x10de Return
}


func_4567()
{
	var_182_object = Obj(); var_183_object = Obj(); // 0x11d7 PushV
	var_184_string = "Adding diary entry"; // 0x11d8 PushS
	Trace(var_184_string); // 0x11d9 Func
	var_185_int = 147; // 0x11db PushI
	var_186_int = 1; // 0x11dc PushI
	var_187_int = 15347; // 0x11dd PushI
	CreateDiaryEntry(var_183_object, var_185_int, var_186_int, var_187_int); // 0x11de Func
	var_188_bool = 0; var_189_object = Obj(); var_190_int = 0; // 0x11e0 PushV
	var_189_object = var_183_object; // 0x11e1 Mov
	var_190_int = 139; // 0x11e2 MovI
	func_4358(var_188_bool, var_189_object, var_190_int); // 0x11e3 Call
	return 2; // 0x11e5 Return
}


func_2270(var_0_object, var_304_int, var_305_object)
{
	var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_object = Obj(); var_312_bool = 0; var_313_int = 0; var_314_bool = 0; // 0x8de PushV
	var_0_object = var_305_object; // 0x8df TMov
	var_315_bool = 0; var_316_object = Obj(); // 0x8e0 PushV
	var_316_object = var_305_object; // 0x8e1 Mov
	func_3555(var_316_object); // 0x8e2 Call
	var_317_bool = var_315_bool == 0; // 0x8e4 Not
	if(var_317_bool == 0) goto Label_2280; // 0x8e5 JumpB
	var_304_int = -2; // 0x8e6 MovI
	return 8; // 0x8e7 Return
	
Label_2280:
	CreateDialog(var_311_object); // 0x8e8 Func
	var_318_int = 0; // 0x8ea PushV
	func_3729(var_318_int); // 0x8eb Call
	SetNPCName(var_318_int); // 0x8ed ObjFunc
	var_319_string = ""; // 0x8ef PushV
	func_3731(var_319_string); // 0x8f0 Call
	SetPhoto(var_319_string); // 0x8f2 ObjFunc
	var_320_int = 0; // 0x8f4 PushV
	func_4454(var_320_int); // 0x8f5 Call
	SetPlayerName(var_320_int); // 0x8f7 ObjFunc
	var_313_int = -1; // 0x8f9 MovI
	IsOverrideActive(var_312_bool); // 0x8fa Func
	var_321_bool = var_312_bool; // 0x8fc Push
	if(var_321_bool == 0) goto Label_2304; // 0x8fd JumpB
	var_304_int = -2; // 0x8fe MovI
	return 8; // 0x8ff Return
	
Label_2304:
	DoDialog(var_311_object); // 0x900 Func
	var_322_object = Obj(); var_323_object = Obj(); // 0x902 PushV
	var_322_object = var_305_object; // 0x903 Mov
	var_323_object = var_311_object; // 0x904 Mov
	TaskCall(7); // 0x905 TaskCall
	func_2333(var_324_object, var_325_object, var_326_string, var_327_bool, var_322_object, var_323_object); // 0x906 Call
	TaskReturn(); // 0x907 TaskReturn
	IsDialogEnd(var_314_bool); // 0x909 ObjFunc
	
Label_2315:
	var_408_bool = var_314_bool == 0; // 0x90b Not
	if(var_408_bool == 0) goto Label_2322; // 0x90c JumpB
	sync(); // 0x90d Func
	IsDialogEnd(var_314_bool); // 0x90f ObjFunc
	goto Label_2315; // 0x911 Jump
	
Label_2322:
	var_409_object = Obj(); // 0x912 PushV
	var_409_object = var_305_object; // 0x913 Mov
	func_3611(); // 0x914 Call
	StopDialog(var_311_object); // 0x916 Func
	GetReturnValue(var_313_int); // 0x918 ObjFunc
	var_304_int = var_313_int; // 0x91a Mov
	return 8; // 0x91b Return
}


func_735(var_0_object, var_1_object, var_2_object, var_3_object, var_167_object, var_168_object)
{
	var_0_object = var_168_object; // 0x2e0 TMov
	var_1_object = var_167_object; // 0x2e1 TMov
	var_3_object = 0; // 0x2e2 TMovB
	var_173_int = 1; // 0x2e3 PushI
	if(var_173_int == 0) goto Label_937; // 0x2e4 JumpB
	var_174_bool = 0; // 0x2e5 PushV
	var_174_bool = 0; // 0x2e6 MovB
	var_175_bool = 0; var_176_object = Obj(); // 0x2e7 PushV
	var_176_object = var_1_object; // 0x2e8 MovT
	func_4200(var_176_object); // 0x2e9 Call
	if(var_175_bool == 0) goto Label_754; // 0x2eb JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x2ec PushV
	var_182_object = var_1_object; // 0x2ed MovT
	func_4212(var_182_object); // 0x2ee Call
	if(var_181_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_174_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_174_bool == 0) goto Label_780; // 0x2f2 JumpB
	var_187_object = Obj(); var_188_object = Obj(); // 0x2f3 PushV
	var_187_object = var_1_object; // 0x2f4 MovT
	var_188_object = var_0_object; // 0x2f5 MovT
	func_4178(); // 0x2f6 Call
	var_191_string = ""; // 0x2f8 PushV
	var_191_string = "Neutral"; // 0x2f9 MovS
	func_967(var_168_object, var_191_string); // 0x2fa Call
	var_196_int = 8737; // 0x2fc PushI
	SetMessage(var_196_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_197_int = 8777; // 0x301 PushI
	var_198_int = 9633; // 0x302 PushI
	var_199_int = 9624; // 0x303 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x304 TObjFunc
	var_200_int = 8781; // 0x306 PushI
	var_201_int = 9629; // 0x307 PushI
	var_202_int = 9628; // 0x308 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x309 TObjFunc
	goto Label_937; // 0x30b Jump
	
Label_937:
	var_203_bool = 0; // 0x3a9 PushV
	func_3733(var_203_bool); // 0x3aa Call
	if(var_203_bool == 0) goto Label_952; // 0x3ac JumpB
	
Label_941:
	lshWaitForAnimEnd(); // 0x3ad Func
	var_204_object = var_3_object; // 0x3af PushT
	if(var_204_object == 0) goto Label_946; // 0x3b0 JumpB
	goto Label_951; // 0x3b1 Jump
	
Label_951:
	goto Label_966; // 0x3b7 Jump
	
Label_966:
	return 0; // 0x3c6 Return
	
Label_946:
	var_205_string = ""; // 0x3b2 PushV
	var_205_string = var_2_object; // 0x3b3 MovT
	func_3615(var_205_string); // 0x3b4 Call
	goto Label_941; // 0x3b6 Jump
	
Label_952:
	var_206_string = "all"; // 0x3b8 PushS
	var_207_string = "idle"; // 0x3b9 PushS
	PlayAnimation(var_206_string, var_207_string); // 0x3ba Func
	
Label_956:
	WaitForAnimEnd(); // 0x3bc Func
	var_208_object = var_3_object; // 0x3be PushT
	if(var_208_object == 0) goto Label_961; // 0x3bf JumpB
	goto Label_966; // 0x3c0 Jump
	
Label_961:
	var_209_string = "all"; // 0x3c1 PushS
	var_210_string = "idle"; // 0x3c2 PushS
	PlayAnimation(var_209_string, var_210_string); // 0x3c3 Func
	goto Label_956; // 0x3c5 Jump
	
Label_780:
	var_211_bool = 0; var_212_object = Obj(); // 0x30c PushV
	var_212_object = var_1_object; // 0x30d MovT
	func_4190(var_211_bool, var_212_object); // 0x30e Call
	if(var_211_bool == 0) goto Label_805; // 0x310 JumpB
	var_215_string = ""; // 0x311 PushV
	var_215_string = "Neutral"; // 0x312 MovS
	func_967(var_168_object, var_215_string); // 0x313 Call
	var_216_int = 9805; // 0x315 PushI
	SetMessage(var_216_int); // 0x316 TObjFunc
	ClearReplies(); // 0x318 TObjFunc
	var_217_int = 9806; // 0x31a PushI
	var_218_int = 10801; // 0x31b PushI
	var_219_int = 10800; // 0x31c PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x31d TObjFunc
	var_220_int = 9822; // 0x31f PushI
	var_221_int = 10801; // 0x320 PushI
	var_222_int = 10818; // 0x321 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x322 TObjFunc
	goto Label_937; // 0x324 Jump
	
Label_805:
	var_223_bool = 0; // 0x325 PushV
	var_223_bool = 0; // 0x326 MovB
	var_224_bool = 0; var_225_object = Obj(); // 0x327 PushV
	var_225_object = var_1_object; // 0x328 MovT
	func_4272(var_224_bool, var_225_object); // 0x329 Call
	if(var_224_bool == 0) goto Label_819; // 0x32b JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x32c PushV
	var_234_object = var_1_object; // 0x32d MovT
	func_4260(var_234_object); // 0x32e Call
	var_239_bool = var_233_bool == 0; // 0x330 Not
	if(var_239_bool == 0) goto Label_819; // 0x331 JumpB
	var_223_bool = 1; // 0x332 MovB
	
Label_819:
	if(var_223_bool == 0) goto Label_835; // 0x333 JumpB
	var_240_string = ""; // 0x334 PushV
	var_240_string = "Neutral"; // 0x335 MovS
	func_967(var_168_object, var_240_string); // 0x336 Call
	var_241_int = 9078; // 0x338 PushI
	SetMessage(var_241_int); // 0x339 TObjFunc
	ClearReplies(); // 0x33b TObjFunc
	var_242_int = 9079; // 0x33d PushI
	var_243_int = 9958; // 0x33e PushI
	var_244_int = 9957; // 0x33f PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x340 TObjFunc
	goto Label_937; // 0x342 Jump
	
Label_835:
	var_245_bool = 0; var_246_object = Obj(); // 0x343 PushV
	var_246_object = var_1_object; // 0x344 MovT
	func_4190(var_245_bool, var_246_object); // 0x345 Call
	if(var_245_bool == 0) goto Label_860; // 0x347 JumpB
	var_247_string = ""; // 0x348 PushV
	var_247_string = "Neutral"; // 0x349 MovS
	func_967(var_168_object, var_247_string); // 0x34a Call
	var_248_int = 8769; // 0x34c PushI
	SetMessage(var_248_int); // 0x34d TObjFunc
	ClearReplies(); // 0x34f TObjFunc
	var_249_int = 8770; // 0x351 PushI
	var_250_int = 9621; // 0x352 PushI
	var_251_int = 9617; // 0x353 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x354 TObjFunc
	var_252_int = 8771; // 0x356 PushI
	var_253_int = 9619; // 0x357 PushI
	var_254_int = 9618; // 0x358 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x359 TObjFunc
	goto Label_937; // 0x35b Jump
	
Label_860:
	var_255_string = ""; // 0x35c PushV
	var_255_string = "Neutral"; // 0x35d MovS
	func_967(var_168_object, var_255_string); // 0x35e Call
	var_256_int = 8778; // 0x360 PushI
	SetMessage(var_256_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_257_bool = 0; var_258_object = Obj(); // 0x365 PushV
	var_258_object = var_1_object; // 0x366 MovT
	func_4200(var_258_object); // 0x367 Call
	if(var_257_bool == 0) goto Label_879; // 0x369 JumpB
	var_259_int = 11141; // 0x36a PushI
	var_260_int = 12331; // 0x36b PushI
	var_261_int = 12330; // 0x36c PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x36d TObjFunc
	
Label_879:
	var_262_bool = 0; var_263_object = Obj(); // 0x36f PushV
	var_263_object = var_1_object; // 0x370 MovT
	func_4224(var_263_object); // 0x371 Call
	if(var_262_bool == 0) goto Label_889; // 0x373 JumpB
	var_268_int = 8779; // 0x374 PushI
	var_269_int = 9681; // 0x375 PushI
	var_270_int = 9626; // 0x376 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x377 TObjFunc
	
Label_889:
	var_271_bool = 0; var_272_object = Obj(); // 0x379 PushV
	var_272_object = var_1_object; // 0x37a MovT
	func_4236(var_272_object); // 0x37b Call
	if(var_271_bool == 0) goto Label_899; // 0x37d JumpB
	var_277_int = 8780; // 0x37e PushI
	var_278_int = 9669; // 0x37f PushI
	var_279_int = 9627; // 0x380 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x381 TObjFunc
	
Label_899:
	var_280_bool = 0; // 0x383 PushV
	var_280_bool = 0; // 0x384 MovB
	var_281_bool = 0; // 0x385 PushV
	var_281_bool = 0; // 0x386 MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x387 PushV
	var_283_object = var_1_object; // 0x388 MovT
	func_4248(var_283_object); // 0x389 Call
	if(var_282_bool == 0) goto Label_915; // 0x38b JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x38c PushV
	var_289_object = var_1_object; // 0x38d MovT
	func_4200(var_289_object); // 0x38e Call
	var_290_bool = var_288_bool == 0; // 0x390 Not
	if(var_290_bool == 0) goto Label_915; // 0x391 JumpB
	var_281_bool = 1; // 0x392 MovB
	
Label_915:
	if(var_281_bool == 0) goto Label_923; // 0x393 JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0x394 PushV
	var_292_object = var_1_object; // 0x395 MovT
	func_4260(var_292_object); // 0x396 Call
	var_293_bool = var_291_bool == 0; // 0x398 Not
	if(var_293_bool == 0) goto Label_923; // 0x399 JumpB
	var_280_bool = 1; // 0x39a MovB
	
Label_923:
	if(var_280_bool == 0) goto Label_929; // 0x39b JumpB
	var_294_int = 8802; // 0x39c PushI
	var_295_int = 9651; // 0x39d PushI
	var_296_int = 9650; // 0x39e PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x39f TObjFunc
	
Label_929:
	var_297_int = 11140; // 0x3a1 PushI
	var_298_int = -1; // 0x3a2 PushI
	var_299_int = 12329; // 0x3a3 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x3a4 TObjFunc
	goto Label_937; // 0x3a6 Jump
}


func_4319(var_278_bool, var_279_object)
{
	var_280_bool = 0; var_281_object = Obj(); var_282_string = ""; // 0x10e0 PushV
	var_281_object = var_279_object; // 0x10e1 Mov
	var_282_string = "d5q01_heart"; // 0x10e2 MovS
	func_3681(var_281_object, var_282_string); // 0x10e3 Call
	if(var_280_bool == 0) goto Label_4328; // 0x10e5 JumpB
	var_278_bool = 1; // 0x10e6 MovB
	return 0; // 0x10e7 Return
	
Label_4328:
	var_278_bool = 0; // 0x10e8 MovB
	return 0; // 0x10e9 Return
}


func_3808()
{
	var_51_string = "playsound"; // 0xee1 PushS
	var_52_string = "giveitem"; // 0xee2 PushS
	TriggerWorld(var_51_string, var_52_string); // 0xee3 Func
	return 0; // 0xee5 Return
}


func_3550(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0xdde PushV
	IsLoaded(var_23_bool); // 0xddf Func
	var_21_bool = var_23_bool; // 0xde1 Mov
	return 2; // 0xde2 Return
}


func_4065()
{
	var_151_string = "ood5Rubin2"; // 0xfe2 PushS
	var_152_int = 1; // 0xfe3 PushI
	SetVariable(var_151_string, var_152_int); // 0xfe4 Func
	return 0; // 0xfe6 Return
}


func_3555(var_49_bool)
{
	var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; // 0xde3 PushV
	GetPosition(var_60_cvector); // 0xde4 ObjFunc
	GetEyesHeight(var_59_float); // 0xde6 ObjFunc
	var_67_float = GetByIndex(var_60_cvector, 1); // 0xde8 PushE
	var_67_float = var_67_float + var_59_float; // 0xde9 Add2
	SetByIndex(var_60_cvector, 1) = var_67_float; // 0xdea PopE
	GetPosition(var_61_cvector); // 0xdeb Func
	GetEyesHeight(var_59_float); // 0xded Func
	var_68_float = GetByIndex(var_61_cvector, 1); // 0xdef PushE
	var_68_float = var_68_float + var_59_float; // 0xdf0 Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0xdf1 PopE
	var_62_cvector = var_60_cvector - var_61_cvector; // 0xdf2 Sub2
	var_69_float = GetByIndex(var_62_cvector, 1); // 0xdf3 PushE
	var_69_float = 0; // 0xdf4 MovI
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0xdf5 PopE
	var_70_int = var_62_cvector | var_62_cvector; // 0xdf6 Or
	var_71_float = sqrt(var_70_int); // 0xdf7 Sqrt
	var_62_cvector = var_62_cvector / var_62_cvector; // 0xdf8 Div2
	var_63_cvector = -var_62_cvector; // 0xdf9 Neg2
	var_72_int = 70; // 0xdfa PushI
	var_73_float = var_62_cvector * var_72_int; // 0xdfb Mult
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xdfc PushV
	var_76_cvector = CVector(0.0, 1.0, 0.0); // 0xdfd PushVec
	var_75_cvector = var_63_cvector ^ var_76_cvector; // 0xdfe Xor2
	func_3640(var_74_cvector, var_75_cvector); // 0xdff Call
	var_82_int = 25; // 0xe01 PushI
	var_83_float = var_74_cvector * var_82_int; // 0xe02 Mult
	var_84_int = var_73_float + var_83_float; // 0xe03 Add
	var_85_cvector = CVector(0.0, 10.0, 0.0); // 0xe04 PushVec
	var_64_cvector = var_84_int - var_85_cvector; // 0xe05 Sub2
	var_65_cvector = var_61_cvector + var_64_cvector; // 0xe06 Add2
	IsOverrideActive(var_66_bool); // 0xe07 Func
	var_86_bool = var_66_bool; // 0xe09 Push
	if(var_86_bool == 0) goto Label_3597; // 0xe0a JumpB
	var_49_bool = 0; // 0xe0b MovB
	return 16; // 0xe0c Return
	
Label_3597:
	StopWorld(); // 0xe0d Func
	CameraTransit(var_65_cvector, var_63_cvector); // 0xe0f Func
	var_87_float = GetByIndex(var_64_cvector, 0); // 0xe11 PushE
	var_88_float = GetByIndex(var_64_cvector, 2); // 0xe12 PushE
	Rotate(var_87_float, var_88_float); // 0xe13 Func
	CameraWaitForPlayFinish(); // 0xe15 Func
	ResumeWorld(); // 0xe17 Func
	var_49_bool = 1; // 0xe19 MovB
	return 16; // 0xe1a Return
}


func_3814()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0xee6 PushV
	var_34_string = "d3q01"; // 0xee7 PushS
	var_35_int = 1; // 0xee8 PushI
	SetVariable(var_34_string, var_35_int); // 0xee9 Func
	var_36_object = Obj(); // 0xeeb PushV
	func_4404(var_36_object); // 0xeec Call
	var_33_object = var_36_object; // 0xeed Mov
	var_43_string = "d3q01RubinGotoAlexandr"; // 0xeef PushS
	var_44_string = "pt_map_alexandr"; // 0xef0 PushS
	var_45_int = 1; // 0xef1 PushI
	var_46_int = 11151; // 0xef2 PushI
	var_47_float = 0; // 0xef3 PushV
	func_3700(var_47_float); // 0xef4 Call
	AddMark(var_43_string, var_44_string, var_45_int, var_46_int, var_47_float); // 0xef6 ObjFunc
	var_50_string = "d3q01RubinGotoAlexandrSelf"; // 0xef8 PushS
	var_51_string = "pt_map_rubin"; // 0xef9 PushS
	var_52_int = 1; // 0xefa PushI
	var_53_int = 15294; // 0xefb PushI
	var_54_float = 0; // 0xefc PushV
	func_3700(var_54_float); // 0xefd Call
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xeff ObjFunc
	func_4487(); // 0xf02 Call
	func_4503(); // 0xf05 Call
	return 2; // 0xf07 Return
}


func_4583()
{
	var_20_bool = GlobalVars[1]; // 0x11e7 PushGE
	var_20_bool = 0; // 0x11e8 MovB
	GlobalVars[1] = var_20_bool; // 0x11e9 PopGE
	return 0; // 0x11ea Return
}


func_4071()
{
	var_155_object = Obj(); var_156_object = Obj(); var_157_int = 0; var_158_object = Obj(); var_159_object = Obj(); var_160_int = 0; // 0xfe7 PushV
	var_161_object = Obj(); // 0xfe8 PushV
	func_4404(var_161_object); // 0xfe9 Call
	var_158_object = var_161_object; // 0xfea Mov
	var_162_string = "d5q01AlexandrGotoKaterina"; // 0xfec PushS
	FindMark(var_159_object, var_162_string); // 0xfed ObjFunc
	var_163_object = var_159_object; // 0xfef Push
	if(var_163_object == 0) goto Label_4083; // 0xff0 JumpB
	Remove(); // 0xff1 ObjFunc
	
Label_4083:
	var_164_string = "d5q01BigVladGotoAlexandr"; // 0xff3 PushS
	FindMark(var_159_object, var_164_string); // 0xff4 ObjFunc
	var_165_object = var_159_object; // 0xff6 Push
	if(var_165_object == 0) goto Label_4090; // 0xff7 JumpB
	Remove(); // 0xff8 ObjFunc
	
Label_4090:
	var_166_string = "d5q01BurahMeeting1"; // 0xffa PushS
	FindMark(var_159_object, var_166_string); // 0xffb ObjFunc
	var_167_object = var_159_object; // 0xffd Push
	if(var_167_object == 0) goto Label_4097; // 0xffe JumpB
	Remove(); // 0xfff ObjFunc
	
Label_4097:
	var_168_string = "d5q01BurahMeeting2"; // 0x1001 PushS
	FindMark(var_159_object, var_168_string); // 0x1002 ObjFunc
	var_169_object = var_159_object; // 0x1004 Push
	if(var_169_object == 0) goto Label_4104; // 0x1005 JumpB
	Remove(); // 0x1006 ObjFunc
	
Label_4104:
	var_170_string = "d5q01GrifWantsMoney"; // 0x1008 PushS
	FindMark(var_159_object, var_170_string); // 0x1009 ObjFunc
	var_171_object = var_159_object; // 0x100b Push
	if(var_171_object == 0) goto Label_4111; // 0x100c JumpB
	Remove(); // 0x100d ObjFunc
	
Label_4111:
	var_172_string = "d5q01GrifWillHelp"; // 0x100f PushS
	FindMark(var_159_object, var_172_string); // 0x1010 ObjFunc
	var_173_object = var_159_object; // 0x1012 Push
	if(var_173_object == 0) goto Label_4118; // 0x1013 JumpB
	Remove(); // 0x1014 ObjFunc
	
Label_4118:
	var_174_string = "d5q01KaterinaGotoLara"; // 0x1016 PushS
	FindMark(var_159_object, var_174_string); // 0x1017 ObjFunc
	var_175_object = var_159_object; // 0x1019 Push
	if(var_175_object == 0) goto Label_4125; // 0x101a JumpB
	Remove(); // 0x101b ObjFunc
	
Label_4125:
	var_176_string = "d5q01PatrolGotoGrif"; // 0x101d PushS
	FindMark(var_159_object, var_176_string); // 0x101e ObjFunc
	var_177_object = var_159_object; // 0x1020 Push
	if(var_177_object == 0) goto Label_4132; // 0x1021 JumpB
	Remove(); // 0x1022 ObjFunc
	
Label_4132:
	var_178_string = "d5q01RubinGotoBigVlad"; // 0x1024 PushS
	FindMark(var_159_object, var_178_string); // 0x1025 ObjFunc
	var_179_object = var_159_object; // 0x1027 Push
	if(var_179_object == 0) goto Label_4139; // 0x1028 JumpB
	Remove(); // 0x1029 ObjFunc
	
Label_4139:
	var_180_string = "d5q01RubinGotoBigVladSelf"; // 0x102b PushS
	FindMark(var_159_object, var_180_string); // 0x102c ObjFunc
	var_181_object = var_159_object; // 0x102e Push
	if(var_181_object == 0) goto Label_4146; // 0x102f JumpB
	Remove(); // 0x1030 ObjFunc
	
Label_4146:
	func_4567(); // 0x1033 Call
	var_191_string = "d5q01_heart"; // 0x1035 PushS
	var_192_int = 1; // 0x1036 PushI
	RemoveItemByType(var_160_int, var_191_string, var_192_int); // 0x1037 ObjFunc
	var_193_bool = 0; var_194_string = ""; var_195_string = ""; // 0x1039 PushV
	var_194_string = "quest_d5_01"; // 0x103a MovS
	var_195_string = "completed"; // 0x103b MovS
	func_3688(var_193_bool, var_194_string, var_195_string); // 0x103c Call
	return 6; // 0x103e Return
}


func_4330(var_55_bool)
{
	var_57_int = 0; var_58_string = ""; // 0x10eb PushV
	var_58_string = "d6RubinGoesToGeorg"; // 0x10ec MovS
	func_3650(var_57_int, var_58_string); // 0x10ed Call
	var_61_int = 0; // 0x10ef PushI
	var_62_bool = var_57_int != var_61_int; // 0x10f0 Neq
	if(var_62_bool == 0) goto Label_4340; // 0x10f1 JumpB
	var_55_bool = 1; // 0x10f2 MovB
	return 0; // 0x10f3 Return
	
Label_4340:
	var_55_bool = 0; // 0x10f4 MovB
	return 0; // 0x10f5 Return
}


func_4587(var_21_object)
{
	var_22_bool = GlobalVars[1]; // 0x11ec PushGE
	var_23_bool = var_22_bool == 0; // 0x11ed Not
	if(var_23_bool == 0) goto Label_4591; // 0x11ee JumpB
	
Label_4591:
	var_24_bool = 0; var_25_int = 0; // 0x11ef PushV
	var_25_int = 1; // 0x11f0 MovI
	func_3714(var_24_bool, var_25_int); // 0x11f1 Call
	if(var_24_bool == 0) goto Label_4610; // 0x11f3 JumpB
	var_32_int = 0; var_33_string = ""; // 0x11f4 PushV
	var_33_string = "d1q01"; // 0x11f5 MovS
	func_3650(var_32_int, var_33_string); // 0x11f6 Call
	var_36_int = 1000; // 0x11f8 PushI
	var_37_bool = var_32_int != var_36_int; // 0x11f9 Neq
	if(var_37_bool == 0) goto Label_4610; // 0x11fa JumpB
	var_38_int = 0; var_39_object = Obj(); // 0x11fb PushV
	var_39_object = var_21_object; // 0x11fc Mov
	TaskCall(2); // 0x11fd TaskCall
	func_49(var_40_object, var_38_int, var_39_object); // 0x11fe Call
	TaskReturn(); // 0x11ff TaskReturn
	return 0; // 0x1201 Return
	
Label_4610:
	var_147_bool = 0; var_148_int = 0; // 0x1202 PushV
	var_148_int = 3; // 0x1203 MovI
	func_3714(var_147_bool, var_148_int); // 0x1204 Call
	if(var_147_bool == 0) goto Label_4622; // 0x1206 JumpB
	var_149_int = 0; var_150_object = Obj(); // 0x1207 PushV
	var_150_object = var_21_object; // 0x1208 Mov
	TaskCall(4); // 0x1209 TaskCall
	func_672(var_151_object, var_149_int, var_150_object); // 0x120a Call
	TaskReturn(); // 0x120b TaskReturn
	return 0; // 0x120d Return
	
Label_4622:
	var_302_bool = 0; var_303_int = 0; // 0x120e PushV
	var_303_int = 5; // 0x120f MovI
	func_3714(var_302_bool, var_303_int); // 0x1210 Call
	if(var_302_bool == 0) goto Label_4634; // 0x1212 JumpB
	var_304_int = 0; var_305_object = Obj(); // 0x1213 PushV
	var_305_object = var_21_object; // 0x1214 Mov
	TaskCall(6); // 0x1215 TaskCall
	func_2270(var_306_object, var_304_int, var_305_object); // 0x1216 Call
	TaskReturn(); // 0x1217 TaskReturn
	return 0; // 0x1219 Return
	
Label_4634:
	var_410_bool = 0; var_411_int = 0; // 0x121a PushV
	var_411_int = 6; // 0x121b MovI
	func_3714(var_410_bool, var_411_int); // 0x121c Call
	if(var_410_bool == 0) goto Label_4646; // 0x121e JumpB
	var_412_int = 0; var_413_object = Obj(); // 0x121f PushV
	var_413_object = var_21_object; // 0x1220 Mov
	TaskCall(8); // 0x1221 TaskCall
	func_3273(var_414_object, var_412_int, var_413_object); // 0x1222 Call
	TaskReturn(); // 0x1223 TaskReturn
	return 0; // 0x1225 Return
	
Label_4646:
	var_468_bool = 0; // 0x1226 PushV
	func_3720(var_468_bool); // 0x1227 Call
	return 0; // 0x1229 Return
}


func_4342(var_246_bool)
{
	var_246_bool = 0; // 0x10f7 MovB
	return 0; // 0x10f8 Return
}


func_4345(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x10f9 PushV
	GetDiaryRoot(var_72_object); // 0x10fa Func
	var_73_bool = var_72_object == 0; // 0x10fc Not
	if(var_73_bool == 0) goto Label_4355; // 0x10fd JumpB
	var_74_string = "Can't retrieve diary root"; // 0x10fe PushS
	Trace(var_74_string); // 0x10ff Func
	var_70_object = 0; // 0x1101 MovB
	return 2; // 0x1102 Return
	
Label_4355:
	var_70_object = var_72_object; // 0x1103 Mov
	return 2; // 0x1104 Return
}


