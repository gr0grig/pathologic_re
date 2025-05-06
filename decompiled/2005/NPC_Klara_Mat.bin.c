task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x9d PushI
	if(var_23_int == 0) goto Label_215; // 0x9e JumpB
	func_1784(); // 0xa0 NEW_2
	var_25_int = 26863; // 0xa2 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa3 Eq
	if(var_26_bool == 0) goto Label_180; // 0xa4 JumpB
	var_27_string = ""; // 0xa5 PushV
	var_27_string = "Neutral"; // 0xa6 MovS
	func_134(var_22_cvector, var_27_string); // 0xa7 NEW_2
	var_44_int = 525507; // 0xa9 PushI
	SetMessage(var_44_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_45_int = 525508; // 0xae PushI
	var_46_int = 30772; // 0xaf PushI
	var_47_int = 26864; // 0xb0 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb1 TObjFunc
	return 0; // 0xb3 Return
	
Label_180:
	var_48_int = 30772; // 0xb4 PushI
	var_49_bool = var_21_bool == var_48_int; // 0xb5 Eq
	if(var_49_bool == 0) goto Label_203; // 0xb6 JumpB
	var_50_string = ""; // 0xb7 PushV
	var_50_string = "Neutral"; // 0xb8 MovS
	func_134(var_22_cvector, var_50_string); // 0xb9 NEW_2
	var_51_int = 529318; // 0xbb PushI
	SetMessage(var_51_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_52_int = 529319; // 0xc0 PushI
	var_53_int = -1; // 0xc1 PushI
	var_54_int = 30773; // 0xc2 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xc3 TObjFunc
	var_55_int = 529320; // 0xc5 PushI
	var_56_int = -1; // 0xc6 PushI
	var_57_int = 30774; // 0xc7 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xc8 TObjFunc
	return 0; // 0xca Return
	
Label_203:
	var_3_string = 1; // 0xcb TMovB
	var_58_bool = 0; // 0xcc PushV
	func_1871(var_58_bool); // 0xcd NEW_2
	if(var_58_bool == 0) goto Label_211; // 0xcf JumpB
	lshStopAnimation(); // 0xd0 Func
	goto Label_213; // 0xd2 Jump
	
Label_213:
	return 0; // 0xd5 Return
	
Label_211:
	StopAnimation(); // 0xd3 Func
	
Label_215:
	return 0; // 0xd7 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x18e PushI
	if(var_23_int == 0) goto Label_761; // 0x18f JumpB
	func_1784(); // 0x191 NEW_2
	var_25_int = 27685; // 0x193 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x194 Eq
	if(var_26_bool == 0) goto Label_411; // 0x195 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x196 PushV
	var_27_object = var_1_object; // 0x197 MovT
	var_28_object = var_0_object; // 0x198 MovT
	func_1873(); // 0x199 NEW_2
	
Label_411:
	var_54_int = 30467; // 0x19b PushI
	var_55_bool = var_22_cvector == var_54_int; // 0x19c Eq
	if(var_55_bool == 0) goto Label_419; // 0x19d JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x19e PushV
	var_56_object = var_1_object; // 0x19f MovT
	var_57_object = var_0_object; // 0x1a0 MovT
	func_1896(); // 0x1a1 NEW_2
	
Label_419:
	var_72_int = 30471; // 0x1a3 PushI
	var_73_bool = var_22_cvector == var_72_int; // 0x1a4 Eq
	if(var_73_bool == 0) goto Label_427; // 0x1a5 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x1a6 PushV
	var_74_object = var_1_object; // 0x1a7 MovT
	var_75_object = var_0_object; // 0x1a8 MovT
	func_1896(); // 0x1a9 NEW_2
	
Label_427:
	var_76_int = 27703; // 0x1ab PushI
	var_77_bool = var_22_cvector == var_76_int; // 0x1ac Eq
	if(var_77_bool == 0) goto Label_435; // 0x1ad JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1ae PushV
	var_78_object = var_1_object; // 0x1af MovT
	var_79_object = var_0_object; // 0x1b0 MovT
	func_1882(); // 0x1b1 NEW_2
	
Label_435:
	var_93_int = 30462; // 0x1b3 PushI
	var_94_bool = var_22_cvector == var_93_int; // 0x1b4 Eq
	if(var_94_bool == 0) goto Label_443; // 0x1b5 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x1b6 PushV
	var_95_object = var_1_object; // 0x1b7 MovT
	var_96_object = var_0_object; // 0x1b8 MovT
	func_1896(); // 0x1b9 NEW_2
	
Label_443:
	var_97_int = 27680; // 0x1bb PushI
	var_98_bool = var_21_bool == var_97_int; // 0x1bc Eq
	if(var_98_bool == 0) goto Label_486; // 0x1bd JumpB
	var_99_string = ""; // 0x1be PushV
	var_99_string = "Neutral"; // 0x1bf MovS
	func_375(var_22_cvector, var_99_string); // 0x1c0 NEW_2
	var_116_int = 526405; // 0x1c2 PushI
	SetMessage(var_116_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_117_bool = 0; var_118_object = Obj(); // 0x1c7 PushV
	var_118_object = var_1_object; // 0x1c8 MovT
	func_1906(var_118_object); // 0x1c9 NEW_2
	if(var_117_bool == 0) goto Label_465; // 0x1cb JumpB
	var_125_int = 526406; // 0x1cc PushI
	var_126_int = 27682; // 0x1cd PushI
	var_127_int = 27681; // 0x1ce PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x1cf TObjFunc
	
Label_465:
	var_128_bool = 0; var_129_object = Obj(); // 0x1d1 PushV
	var_129_object = var_1_object; // 0x1d2 MovT
	func_1918(var_129_object); // 0x1d3 NEW_2
	if(var_128_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_134_int = 526420; // 0x1d6 PushI
	var_135_int = 27696; // 0x1d7 PushI
	var_136_int = 27695; // 0x1d8 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x1d9 TObjFunc
	
Label_475:
	var_137_int = 526411; // 0x1db PushI
	var_138_int = -1; // 0x1dc PushI
	var_139_int = 27686; // 0x1dd PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x1de TObjFunc
	var_140_int = 529012; // 0x1e0 PushI
	var_141_int = -1; // 0x1e1 PushI
	var_142_int = 30452; // 0x1e2 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x1e3 TObjFunc
	return 0; // 0x1e5 Return
	
Label_486:
	var_143_int = 27696; // 0x1e6 PushI
	var_144_bool = var_21_bool == var_143_int; // 0x1e7 Eq
	if(var_144_bool == 0) goto Label_504; // 0x1e8 JumpB
	var_145_string = ""; // 0x1e9 PushV
	var_145_string = "Untrust"; // 0x1ea MovS
	func_375(var_22_cvector, var_145_string); // 0x1eb NEW_2
	var_146_int = 526421; // 0x1ed PushI
	SetMessage(var_146_int); // 0x1ee TObjFunc
	ClearReplies(); // 0x1f0 TObjFunc
	var_147_int = 526422; // 0x1f2 PushI
	var_148_int = 30457; // 0x1f3 PushI
	var_149_int = 27697; // 0x1f4 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_150_int = 30457; // 0x1f8 PushI
	var_151_bool = var_21_bool == var_150_int; // 0x1f9 Eq
	if(var_151_bool == 0) goto Label_522; // 0x1fa JumpB
	var_152_string = ""; // 0x1fb PushV
	var_152_string = "Untrust"; // 0x1fc MovS
	func_375(var_22_cvector, var_152_string); // 0x1fd NEW_2
	var_153_int = 529017; // 0x1ff PushI
	SetMessage(var_153_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_154_int = 529018; // 0x204 PushI
	var_155_int = 27698; // 0x205 PushI
	var_156_int = 30458; // 0x206 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x207 TObjFunc
	return 0; // 0x209 Return
	
Label_522:
	var_157_int = 27698; // 0x20a PushI
	var_158_bool = var_21_bool == var_157_int; // 0x20b Eq
	if(var_158_bool == 0) goto Label_550; // 0x20c JumpB
	var_159_string = ""; // 0x20d PushV
	var_159_string = "Neutral"; // 0x20e MovS
	func_375(var_22_cvector, var_159_string); // 0x20f NEW_2
	var_160_int = 526423; // 0x211 PushI
	SetMessage(var_160_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_161_int = 529019; // 0x216 PushI
	var_162_int = 30464; // 0x217 PushI
	var_163_int = 30459; // 0x218 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x219 TObjFunc
	var_164_int = 529020; // 0x21b PushI
	var_165_int = 30468; // 0x21c PushI
	var_166_int = 30460; // 0x21d PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x21e TObjFunc
	var_167_int = 526424; // 0x220 PushI
	var_168_int = 30461; // 0x221 PushI
	var_169_int = 27699; // 0x222 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x223 TObjFunc
	return 0; // 0x225 Return
	
Label_550:
	var_170_int = 30461; // 0x226 PushI
	var_171_bool = var_21_bool == var_170_int; // 0x227 Eq
	if(var_171_bool == 0) goto Label_573; // 0x228 JumpB
	var_172_string = ""; // 0x229 PushV
	var_172_string = "Rage"; // 0x22a MovS
	func_375(var_22_cvector, var_172_string); // 0x22b NEW_2
	var_173_int = 529021; // 0x22d PushI
	SetMessage(var_173_int); // 0x22e TObjFunc
	ClearReplies(); // 0x230 TObjFunc
	var_174_int = 529023; // 0x232 PushI
	var_175_int = 30472; // 0x233 PushI
	var_176_int = 30463; // 0x234 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x235 TObjFunc
	var_177_int = 529022; // 0x237 PushI
	var_178_int = -1; // 0x238 PushI
	var_179_int = 30462; // 0x239 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x23a TObjFunc
	return 0; // 0x23c Return
	
Label_573:
	var_180_int = 30472; // 0x23d PushI
	var_181_bool = var_21_bool == var_180_int; // 0x23e Eq
	if(var_181_bool == 0) goto Label_591; // 0x23f JumpB
	var_182_string = ""; // 0x240 PushV
	var_182_string = "Untrust"; // 0x241 MovS
	func_375(var_22_cvector, var_182_string); // 0x242 NEW_2
	var_183_int = 529032; // 0x244 PushI
	SetMessage(var_183_int); // 0x245 TObjFunc
	ClearReplies(); // 0x247 TObjFunc
	var_184_int = 529033; // 0x249 PushI
	var_185_int = 27700; // 0x24a PushI
	var_186_int = 30473; // 0x24b PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x24c TObjFunc
	return 0; // 0x24e Return
	
Label_591:
	var_187_int = 27700; // 0x24f PushI
	var_188_bool = var_21_bool == var_187_int; // 0x250 Eq
	if(var_188_bool == 0) goto Label_609; // 0x251 JumpB
	var_189_string = ""; // 0x252 PushV
	var_189_string = "Patronage"; // 0x253 MovS
	func_375(var_22_cvector, var_189_string); // 0x254 NEW_2
	var_190_int = 526425; // 0x256 PushI
	SetMessage(var_190_int); // 0x257 TObjFunc
	ClearReplies(); // 0x259 TObjFunc
	var_191_int = 526426; // 0x25b PushI
	var_192_int = 27702; // 0x25c PushI
	var_193_int = 27701; // 0x25d PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_194_int = 27702; // 0x261 PushI
	var_195_bool = var_21_bool == var_194_int; // 0x262 Eq
	if(var_195_bool == 0) goto Label_627; // 0x263 JumpB
	var_196_string = ""; // 0x264 PushV
	var_196_string = "Neutral"; // 0x265 MovS
	func_375(var_22_cvector, var_196_string); // 0x266 NEW_2
	var_197_int = 526427; // 0x268 PushI
	SetMessage(var_197_int); // 0x269 TObjFunc
	ClearReplies(); // 0x26b TObjFunc
	var_198_int = 526428; // 0x26d PushI
	var_199_int = -1; // 0x26e PushI
	var_200_int = 27703; // 0x26f PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_201_int = 30468; // 0x273 PushI
	var_202_bool = var_21_bool == var_201_int; // 0x274 Eq
	if(var_202_bool == 0) goto Label_645; // 0x275 JumpB
	var_203_string = ""; // 0x276 PushV
	var_203_string = "Discontent"; // 0x277 MovS
	func_375(var_22_cvector, var_203_string); // 0x278 NEW_2
	var_204_int = 529028; // 0x27a PushI
	SetMessage(var_204_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_205_int = 529029; // 0x27f PushI
	var_206_int = 30470; // 0x280 PushI
	var_207_int = 30469; // 0x281 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_208_int = 30470; // 0x285 PushI
	var_209_bool = var_21_bool == var_208_int; // 0x286 Eq
	if(var_209_bool == 0) goto Label_663; // 0x287 JumpB
	var_210_string = ""; // 0x288 PushV
	var_210_string = "Rage"; // 0x289 MovS
	func_375(var_22_cvector, var_210_string); // 0x28a NEW_2
	var_211_int = 529030; // 0x28c PushI
	SetMessage(var_211_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_212_int = 529031; // 0x291 PushI
	var_213_int = -1; // 0x292 PushI
	var_214_int = 30471; // 0x293 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_215_int = 30464; // 0x297 PushI
	var_216_bool = var_21_bool == var_215_int; // 0x298 Eq
	if(var_216_bool == 0) goto Label_681; // 0x299 JumpB
	var_217_string = ""; // 0x29a PushV
	var_217_string = "Discontent"; // 0x29b MovS
	func_375(var_22_cvector, var_217_string); // 0x29c NEW_2
	var_218_int = 529024; // 0x29e PushI
	SetMessage(var_218_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_219_int = 529025; // 0x2a3 PushI
	var_220_int = 30466; // 0x2a4 PushI
	var_221_int = 30465; // 0x2a5 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_222_int = 30466; // 0x2a9 PushI
	var_223_bool = var_21_bool == var_222_int; // 0x2aa Eq
	if(var_223_bool == 0) goto Label_699; // 0x2ab JumpB
	var_224_string = ""; // 0x2ac PushV
	var_224_string = "Rage"; // 0x2ad MovS
	func_375(var_22_cvector, var_224_string); // 0x2ae NEW_2
	var_225_int = 529026; // 0x2b0 PushI
	SetMessage(var_225_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_226_int = 529027; // 0x2b5 PushI
	var_227_int = -1; // 0x2b6 PushI
	var_228_int = 30467; // 0x2b7 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x2b8 TObjFunc
	return 0; // 0x2ba Return
	
Label_699:
	var_229_int = 27682; // 0x2bb PushI
	var_230_bool = var_21_bool == var_229_int; // 0x2bc Eq
	if(var_230_bool == 0) goto Label_713; // 0x2bd JumpB
	var_231_int = 526407; // 0x2be PushI
	SetMessage(var_231_int); // 0x2bf TObjFunc
	ClearReplies(); // 0x2c1 TObjFunc
	var_232_int = 526408; // 0x2c3 PushI
	var_233_int = 30453; // 0x2c4 PushI
	var_234_int = 27683; // 0x2c5 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2c6 TObjFunc
	return 0; // 0x2c8 Return
	
Label_713:
	var_235_int = 30453; // 0x2c9 PushI
	var_236_bool = var_21_bool == var_235_int; // 0x2ca Eq
	if(var_236_bool == 0) goto Label_731; // 0x2cb JumpB
	var_237_string = ""; // 0x2cc PushV
	var_237_string = "Discontent"; // 0x2cd MovS
	func_375(var_22_cvector, var_237_string); // 0x2ce NEW_2
	var_238_int = 529013; // 0x2d0 PushI
	SetMessage(var_238_int); // 0x2d1 TObjFunc
	ClearReplies(); // 0x2d3 TObjFunc
	var_239_int = 529014; // 0x2d5 PushI
	var_240_int = 27684; // 0x2d6 PushI
	var_241_int = 30454; // 0x2d7 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2d8 TObjFunc
	return 0; // 0x2da Return
	
Label_731:
	var_242_int = 27684; // 0x2db PushI
	var_243_bool = var_21_bool == var_242_int; // 0x2dc Eq
	if(var_243_bool == 0) goto Label_749; // 0x2dd JumpB
	var_244_string = ""; // 0x2de PushV
	var_244_string = "Rage"; // 0x2df MovS
	func_375(var_22_cvector, var_244_string); // 0x2e0 NEW_2
	var_245_int = 526409; // 0x2e2 PushI
	SetMessage(var_245_int); // 0x2e3 TObjFunc
	ClearReplies(); // 0x2e5 TObjFunc
	var_246_int = 526410; // 0x2e7 PushI
	var_247_int = -1; // 0x2e8 PushI
	var_248_int = 27685; // 0x2e9 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_3_string = 1; // 0x2ed TMovB
	var_249_bool = 0; // 0x2ee PushV
	func_1871(var_249_bool); // 0x2ef NEW_2
	if(var_249_bool == 0) goto Label_757; // 0x2f1 JumpB
	lshStopAnimation(); // 0x2f2 Func
	goto Label_759; // 0x2f4 Jump
	
Label_759:
	return 0; // 0x2f7 Return
	
Label_757:
	StopAnimation(); // 0x2f5 Func
	
Label_761:
	return 0; // 0x2f9 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x3a1 PushI
	if(var_23_int == 0) goto Label_1020; // 0x3a2 JumpB
	func_1784(); // 0x3a4 NEW_2
	var_25_int = 36960; // 0x3a6 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x3a7 Eq
	if(var_26_bool == 0) goto Label_962; // 0x3a8 JumpB
	var_27_string = ""; // 0x3a9 PushV
	var_27_string = "Neutral"; // 0x3aa MovS
	func_906(var_22_cvector, var_27_string); // 0x3ab NEW_2
	var_44_int = 535284; // 0x3ad PushI
	SetMessage(var_44_int); // 0x3ae TObjFunc
	ClearReplies(); // 0x3b0 TObjFunc
	var_45_int = 535285; // 0x3b2 PushI
	var_46_int = 36962; // 0x3b3 PushI
	var_47_int = 36961; // 0x3b4 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3b5 TObjFunc
	var_48_int = 535292; // 0x3b7 PushI
	var_49_int = -1; // 0x3b8 PushI
	var_50_int = 36968; // 0x3b9 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x3ba TObjFunc
	var_51_int = 535293; // 0x3bc PushI
	var_52_int = -1; // 0x3bd PushI
	var_53_int = 36969; // 0x3be PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x3bf TObjFunc
	return 0; // 0x3c1 Return
	
Label_962:
	var_54_int = 36962; // 0x3c2 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x3c3 Eq
	if(var_55_bool == 0) goto Label_985; // 0x3c4 JumpB
	var_56_string = ""; // 0x3c5 PushV
	var_56_string = "Neutral"; // 0x3c6 MovS
	func_906(var_22_cvector, var_56_string); // 0x3c7 NEW_2
	var_57_int = 535286; // 0x3c9 PushI
	SetMessage(var_57_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_58_int = 535287; // 0x3ce PushI
	var_59_int = 36964; // 0x3cf PushI
	var_60_int = 36963; // 0x3d0 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x3d1 TObjFunc
	var_61_int = 535291; // 0x3d3 PushI
	var_62_int = -1; // 0x3d4 PushI
	var_63_int = 36967; // 0x3d5 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x3d6 TObjFunc
	return 0; // 0x3d8 Return
	
Label_985:
	var_64_int = 36964; // 0x3d9 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x3da Eq
	if(var_65_bool == 0) goto Label_1008; // 0x3db JumpB
	var_66_string = ""; // 0x3dc PushV
	var_66_string = "Neutral"; // 0x3dd MovS
	func_906(var_22_cvector, var_66_string); // 0x3de NEW_2
	var_67_int = 535288; // 0x3e0 PushI
	SetMessage(var_67_int); // 0x3e1 TObjFunc
	ClearReplies(); // 0x3e3 TObjFunc
	var_68_int = 535289; // 0x3e5 PushI
	var_69_int = -1; // 0x3e6 PushI
	var_70_int = 36965; // 0x3e7 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x3e8 TObjFunc
	var_71_int = 535290; // 0x3ea PushI
	var_72_int = -1; // 0x3eb PushI
	var_73_int = 36966; // 0x3ec PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_3_string = 1; // 0x3f0 TMovB
	var_74_bool = 0; // 0x3f1 PushV
	func_1871(var_74_bool); // 0x3f2 NEW_2
	if(var_74_bool == 0) goto Label_1016; // 0x3f4 JumpB
	lshStopAnimation(); // 0x3f5 Func
	goto Label_1018; // 0x3f7 Jump
	
Label_1018:
	return 0; // 0x3fa Return
	
Label_1016:
	StopAnimation(); // 0x3f8 Func
	
Label_1020:
	return 0; // 0x3fc Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x49f PushI
	if(var_23_int == 0) goto Label_1223; // 0x4a0 JumpB
	func_1784(); // 0x4a2 NEW_2
	var_25_int = 42548; // 0x4a4 PushI
	var_26_bool = var_21_int == var_25_int; // 0x4a5 Eq
	if(var_26_bool == 0) goto Label_1211; // 0x4a6 JumpB
	var_27_string = ""; // 0x4a7 PushV
	var_27_string = "Neutral"; // 0x4a8 MovS
	func_1160(var_22_cvector, var_27_string); // 0x4a9 NEW_2
	var_44_int = 540539; // 0x4ab PushI
	SetMessage(var_44_int); // 0x4ac TObjFunc
	ClearReplies(); // 0x4ae TObjFunc
	var_45_int = 540540; // 0x4b0 PushI
	var_46_int = -1; // 0x4b1 PushI
	var_47_int = 42549; // 0x4b2 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x4b3 TObjFunc
	var_48_int = 540799; // 0x4b5 PushI
	var_49_int = -1; // 0x4b6 PushI
	var_50_int = 42848; // 0x4b7 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_3_string = 1; // 0x4bb TMovB
	var_51_bool = 0; // 0x4bc PushV
	func_1871(var_51_bool); // 0x4bd NEW_2
	if(var_51_bool == 0) goto Label_1219; // 0x4bf JumpB
	lshStopAnimation(); // 0x4c0 Func
	goto Label_1221; // 0x4c2 Jump
	
Label_1221:
	return 0; // 0x4c5 Return
	
Label_1219:
	StopAnimation(); // 0x4c3 Func
	
Label_1223:
	return 0; // 0x4c7 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x515 PushI
	var_23_bool = var_21_int == var_22_int; // 0x516 Eq
	if(var_23_bool == 0) goto Label_1337; // 0x517 JumpB
	func_1296(); // 0x519 NEW_2
	var_25_bool = 0; // 0x51b PushV
	var_25_bool = 0; // 0x51c MovB
	var_26_bool = 0; // 0x51d PushV
	func_1510(var_26_bool); // 0x51e NEW_2
	if(var_26_bool == 0) goto Label_1318; // 0x520 JumpB
	var_29_bool = 0; // 0x521 PushV
	func_1265(var_29_bool); // 0x522 NEW_2
	if(var_29_bool == 0) goto Label_1318; // 0x524 JumpB
	var_25_bool = 1; // 0x525 MovB
	
Label_1318:
	if(var_25_bool == 0) goto Label_1331; // 0x526 JumpB
	var_46_bool = 0; // 0x527 PushV
	func_1245(var_46_bool); // 0x528 NEW_2
	if(var_46_bool == 0) goto Label_1330; // 0x52a JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x52b PushV
	var_67_object = Obj(); // 0x52c PushV
	func_1791(var_67_object); // 0x52d NEW_2
	var_66_object = var_67_object; // 0x52e Mov
	func_1658(var_66_object); // 0x530 NEW_2
	
Label_1330:
	goto Label_1337; // 0x532 Jump
	
Label_1337:
	return 0; // 0x539 Return
	
Label_1331:
	func_1260(var_21_int); // 0x534 NEW_2
	func_1287(); // 0x537 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1478(); // 0x53b NEW_2
	func_1296(); // 0x53e NEW_2
	lshStopSpeech(); // 0x540 Func
	lshStopAnimation(); // 0x542 Func
	StopAsync(); // 0x544 Func
	Hold(); // 0x546 Func
	return 0; // 0x548 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x549 Func
	func_1296(); // 0x54c NEW_2
	var_22_string = ""; // 0x54e PushV
	var_22_string = "Neutral"; // 0x54f MovS
	func_1738(var_22_string); // 0x550 NEW_2
	func_1287(); // 0x553 NEW_2
	return 0; // 0x555 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x557 Push
	if(var_22_bool == 0) goto Label_1373; // 0x558 JumpB
	func_1287(); // 0x55a NEW_2
	goto Label_1377; // 0x55c Jump
	
Label_1377:
	return 0; // 0x561 Return
	
Label_1373:
	var_28_string = ""; // 0x55d PushV
	var_28_string = "Neutral"; // 0x55e MovS
	func_1738(var_28_string); // 0x55f NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x562 PushV
	IsOverrideActive(var_23_bool); // 0x563 Func
	var_24_bool = var_23_bool == 0; // 0x565 Not
	if(var_24_bool == 0) goto Label_1406; // 0x566 JumpB
	EventDisable(0); // 0x567 EventDisable
	func_1478(); // 0x569 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x56b PushV
	var_26_object = var_21_object; // 0x56c Mov
	func_1501(var_26_object); // 0x56d NEW_2
	EventEnable(0); // 0x56f EventEnable
	var_39_object = Obj(); // 0x570 PushV
	var_39_object = var_21_object; // 0x571 Mov
	func_2027(var_39_object); // 0x572 NEW_2
	var_459_string = ""; // 0x574 PushV
	var_459_string = "Neutral"; // 0x575 MovS
	func_1738(var_459_string); // 0x576 NEW_2
	func_1296(); // 0x579 NEW_2
	func_1287(); // 0x57c NEW_2
	
Label_1406:
	return 2; // 0x57e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x4c8 PushGE
	var_21_bool = 0; // 0x4c9 MovB
	GlobalVars[1] = var_21_bool; // 0x4ca PopGE
	func_1231(var_20_cvector); // 0x4cc NEW_2
	return 0; // 0x4ce Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_1515(var_54_object, var_55_float); // 0x5 NEW_2
	var_99_bool = var_53_bool == 0; // 0x7 Not
	if(var_99_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_100_int = 0; // 0xd PushV
	func_1865(var_100_int); // 0xe NEW_2
	SetNPCName(var_100_int); // 0x10 ObjFunc
	var_101_int = 0; // 0x12 PushV
	func_1863(var_101_int); // 0x13 NEW_2
	SetNPCDescription(var_101_int); // 0x15 ObjFunc
	var_102_string = ""; // 0x17 PushV
	func_1867(var_102_string); // 0x18 NEW_2
	SetPhoto(var_102_string); // 0x1a ObjFunc
	var_103_string = ""; // 0x1c PushV
	func_1869(var_103_string); // 0x1d NEW_2
	SetPhoto2(var_103_string); // 0x1f ObjFunc
	var_104_int = 0; // 0x21 PushV
	func_2010(var_104_int); // 0x22 NEW_2
	SetPlayerName(var_104_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_112_bool = var_50_bool; // 0x29 Push
	if(var_112_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_113_bool = 0; var_114_object = Obj(); // 0x2f PushV
	var_115_object = Obj(); // 0x30 PushV
	func_1791(var_115_object); // 0x31 NEW_2
	var_114_object = var_115_object; // 0x32 Mov
	func_1600(var_113_bool, var_114_object); // 0x34 NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x36 PushV
	var_208_object = var_43_object; // 0x37 Mov
	var_209_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_254_bool = var_52_bool == 0; // 0x3f Not
	if(var_254_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_255_object = Obj(); // 0x46 PushV
	var_255_object = var_43_object; // 0x47 Mov
	func_1583(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1797(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x705 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x706 Or
	var_84_float = sqrt(var_85_int); // 0x707 Sqrt2
	var_86_float = 0.0; // 0x708 PushF
	var_87_bool = var_84_float < var_86_float; // 0x709 LT
	if(var_87_bool == 0) goto Label_1805; // 0x70a JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x70b MovV
	return 2; // 0x70c Return
	
Label_1805:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x70d Div2
	return 2; // 0x70e Return
}


func_134(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x87 PushV
	func_1871(var_216_bool); // 0x88 NEW_2
	var_217_bool = var_216_bool == 0; // 0x8a Not
	if(var_217_bool == 0) goto Label_141; // 0x8b JumpB
	return 0; // 0x8c Return
	
Label_141:
	var_218_bool = var_215_string == var_2_object; // 0x8d Eq
	if(var_218_bool == 0) goto Label_144; // 0x8e JumpB
	return 0; // 0x8f Return
	
Label_144:
	var_219_string = ""; var_220_bool = 0; // 0x90 PushV
	var_219_string = var_215_string; // 0x91 Mov
	var_221_string = ""; // 0x92 PushS
	var_222_bool = var_215_string == var_221_string; // 0x93 Eq
	if(var_222_bool == 0) goto Label_151; // 0x94 JumpB
	var_220_bool = 0; // 0x95 MovB
	goto Label_152; // 0x96 Jump
	
Label_152:
	func_1754(var_219_string, var_220_bool); // 0x98 NEW_2
	var_2_object = var_215_string; // 0x9a TMov
	return 0; // 0x9b Return
	
Label_151:
	var_220_bool = 1; // 0x97 MovB
}


func_1287()
{
	var_461_float = 0; var_462_float = 0; // 0x507 PushV
	var_463_int = 8; // 0x508 PushI
	var_464_int = 16; // 0x509 PushI
	rand(var_462_float, var_463_int, var_464_int); // 0x50a Func
	var_465_int = 10; // 0x50c PushI
	SetTimer(var_465_int, var_462_float); // 0x50d Func
	return 2; // 0x50f Return
}


func_1160(var_2_object, var_434_string)
{
	var_435_bool = 0; // 0x489 PushV
	func_1871(var_435_bool); // 0x48a NEW_2
	var_436_bool = var_435_bool == 0; // 0x48c Not
	if(var_436_bool == 0) goto Label_1167; // 0x48d JumpB
	return 0; // 0x48e Return
	
Label_1167:
	var_437_bool = var_434_string == var_2_object; // 0x48f Eq
	if(var_437_bool == 0) goto Label_1170; // 0x490 JumpB
	return 0; // 0x491 Return
	
Label_1170:
	var_438_string = ""; var_439_bool = 0; // 0x492 PushV
	var_438_string = var_434_string; // 0x493 Mov
	var_440_string = ""; // 0x494 PushS
	var_441_bool = var_434_string == var_440_string; // 0x495 Eq
	if(var_441_bool == 0) goto Label_1177; // 0x496 JumpB
	var_439_bool = 0; // 0x497 MovB
	goto Label_1178; // 0x498 Jump
	
Label_1178:
	func_1754(var_438_string, var_439_bool); // 0x49a NEW_2
	var_2_object = var_434_string; // 0x49c TMov
	return 0; // 0x49d Return
	
Label_1177:
	var_439_bool = 1; // 0x499 MovB
}


func_906(var_2_object, var_375_string)
{
	var_376_bool = 0; // 0x38b PushV
	func_1871(var_376_bool); // 0x38c NEW_2
	var_377_bool = var_376_bool == 0; // 0x38e Not
	if(var_377_bool == 0) goto Label_913; // 0x38f JumpB
	return 0; // 0x390 Return
	
Label_913:
	var_378_bool = var_375_string == var_2_object; // 0x391 Eq
	if(var_378_bool == 0) goto Label_916; // 0x392 JumpB
	return 0; // 0x393 Return
	
Label_916:
	var_379_string = ""; var_380_bool = 0; // 0x394 PushV
	var_379_string = var_375_string; // 0x395 Mov
	var_381_string = ""; // 0x396 PushS
	var_382_bool = var_375_string == var_381_string; // 0x397 Eq
	if(var_382_bool == 0) goto Label_923; // 0x398 JumpB
	var_380_bool = 0; // 0x399 MovB
	goto Label_924; // 0x39a Jump
	
Label_924:
	func_1754(var_379_string, var_380_bool); // 0x39c NEW_2
	var_2_object = var_375_string; // 0x39e TMov
	return 0; // 0x39f Return
	
Label_923:
	var_380_bool = 1; // 0x39b MovB
}


func_1930()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x78a PushV
	var_60_int = 530; // 0x78b PushI
	var_61_int = 1; // 0x78c PushI
	var_62_int = 530194; // 0x78d PushI
	CreateDiaryEntry(var_59_object, var_60_int, var_61_int, var_62_int); // 0x78e Func
	var_63_bool = 0; var_64_object = Obj(); var_65_int = 0; // 0x790 PushV
	var_64_object = var_59_object; // 0x791 Mov
	var_65_int = 438; // 0x792 MovI
	func_1982(var_63_bool, var_64_object, var_65_int); // 0x793 NEW_2
	return 2; // 0x795 Return
}


func_1807(var_308_int, var_309_string)
{
	var_310_int = 0; var_311_int = 0; // 0x70f PushV
	GetVariable(var_309_string, var_311_int); // 0x710 Func
	var_308_int = var_311_int; // 0x712 Mov
	return 2; // 0x713 Return
}


func_1296()
{
	var_460_int = 10; // 0x510 PushI
	KillTimer(var_460_int); // 0x511 Func
	return 0; // 0x513 Return
}


func_1812(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x714 PushV
	FindActor(var_70_object, var_67_string); // 0x715 Func
	var_71_bool = var_70_object == 0; // 0x717 NullEq
	if(var_71_bool == 0) goto Label_1819; // 0x718 JumpB
	var_66_bool = 0; // 0x719 MovB
	return 2; // 0x71a Return
	
Label_1819:
	Trigger(var_70_object, var_68_string); // 0x71b Func
	var_66_bool = 1; // 0x71d MovB
	return 2; // 0x71e Return
}


func_1658(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x67a PushV
	var_131_string = "c"; // 0x67b MovS
	var_132_int = 0; // 0x67c MovI
	
Label_1661:
	var_136_int = 1; // 0x67d PushI
	if(var_136_int == 0) goto Label_1674; // 0x67e JumpB
	var_137_int = 1; // 0x67f PushI
	var_138_int = var_132_int + var_137_int; // 0x680 Add
	var_139_int = var_131_string + var_138_int; // 0x681 Add
	HasProperty(var_139_int, var_133_bool); // 0x682 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x684 Not
	if(var_140_bool == 0) goto Label_1671; // 0x685 JumpB
	goto Label_1674; // 0x686 Jump
	
Label_1674:
	var_141_bool = var_132_int == 0; // 0x68a Not
	if(var_141_bool == 0) goto Label_1678; // 0x68b JumpB
	var_124_bool = 0; // 0x68c MovB
	return 10; // 0x68d Return
	
Label_1678:
	var_134_int = 0; // 0x68e MovI
	var_142_int = 1; // 0x68f PushI
	var_143_bool = var_132_int > var_142_int; // 0x690 GT
	if(var_143_bool == 0) goto Label_1684; // 0x691 JumpB
	irand(var_134_int, var_132_int); // 0x692 Func
	
Label_1684:
	var_144_int = 1; // 0x694 PushI
	var_145_int = var_134_int + var_144_int; // 0x695 Add
	var_146_int = var_131_string + var_145_int; // 0x696 Add
	GetProperty(var_146_int, var_135_string); // 0x697 ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x699 PushV
	var_148_string = var_135_string; // 0x69a Mov
	func_1769(var_147_bool, var_148_string); // 0x69b NEW_2
	var_124_bool = var_147_bool; // 0x69c Mov
	return 10; // 0x69e Return
	
Label_1671:
	var_153_int = 1; // 0x687 PushI
	var_132_int = var_132_int + var_153_int; // 0x688 Add2
	goto Label_1661; // 0x689 Jump
}


func_1943()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x797 PushV
	var_33_int = 440; // 0x798 PushI
	var_34_int = 1; // 0x799 PushI
	var_35_int = 526465; // 0x79a PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x79b Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x79d PushV
	var_37_object = var_32_object; // 0x79e Mov
	var_38_int = 438; // 0x79f MovI
	func_1982(var_36_bool, var_37_object, var_38_int); // 0x7a0 NEW_2
	return 2; // 0x7a2 Return
}


func_1695(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x69f PushV
	var_167_string = "d"; // 0x6a0 PushS
	var_168_int = 0; // 0x6a1 PushV
	func_1824(var_168_int); // 0x6a2 NEW_2
	var_174_int = var_167_string + var_168_int; // 0x6a4 Add
	var_175_string = "m"; // 0x6a5 PushS
	var_162_string = var_174_int + var_175_string; // 0x6a6 Add2
	var_163_int = 0; // 0x6a7 MovI
	
Label_1704:
	var_176_int = 1; // 0x6a8 PushI
	if(var_176_int == 0) goto Label_1717; // 0x6a9 JumpB
	var_177_int = 1; // 0x6aa PushI
	var_178_int = var_163_int + var_177_int; // 0x6ab Add
	var_179_int = var_162_string + var_178_int; // 0x6ac Add
	HasProperty(var_179_int, var_164_bool); // 0x6ad ObjFunc
	var_180_bool = var_164_bool == 0; // 0x6af Not
	if(var_180_bool == 0) goto Label_1714; // 0x6b0 JumpB
	goto Label_1717; // 0x6b1 Jump
	
Label_1717:
	var_181_bool = var_163_int == 0; // 0x6b5 Not
	if(var_181_bool == 0) goto Label_1721; // 0x6b6 JumpB
	var_155_bool = 0; // 0x6b7 MovB
	return 10; // 0x6b8 Return
	
Label_1721:
	var_165_int = 0; // 0x6b9 MovI
	var_182_int = 1; // 0x6ba PushI
	var_183_bool = var_163_int > var_182_int; // 0x6bb GT
	if(var_183_bool == 0) goto Label_1727; // 0x6bc JumpB
	irand(var_165_int, var_163_int); // 0x6bd Func
	
Label_1727:
	var_184_int = 1; // 0x6bf PushI
	var_185_int = var_165_int + var_184_int; // 0x6c0 Add
	var_186_int = var_162_string + var_185_int; // 0x6c1 Add
	GetProperty(var_186_int, var_166_string); // 0x6c2 ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x6c4 PushV
	var_188_string = var_166_string; // 0x6c5 Mov
	func_1769(var_187_bool, var_188_string); // 0x6c6 NEW_2
	var_155_bool = var_187_bool; // 0x6c7 Mov
	return 10; // 0x6c9 Return
	
Label_1714:
	var_189_int = 1; // 0x6b2 PushI
	var_163_int = var_163_int + var_189_int; // 0x6b3 Add2
	goto Label_1704; // 0x6b4 Jump
}


func_1824(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x720 PushV
	GetGameTime(var_170_float); // 0x721 Func
	var_171_int = 1; // 0x723 PushI
	var_172_int = 0; // 0x724 PushV
	var_173_int = 24; // 0x725 PushI
	var_172_int = var_170_float / var_170_float; // 0x726 Div2
	var_168_int = var_171_int + var_172_int; // 0x727 Add2
	return 2; // 0x728 Return
}


func_1956()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x7a4 PushV
	var_84_int = 442; // 0x7a5 PushI
	var_85_int = 1; // 0x7a6 PushI
	var_86_int = 526467; // 0x7a7 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x7a8 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x7aa PushV
	var_88_object = var_83_object; // 0x7ab Mov
	var_89_int = 438; // 0x7ac MovI
	func_1982(var_87_bool, var_88_object, var_89_int); // 0x7ad NEW_2
	return 2; // 0x7af Return
}


func_297(var_0_object, var_1_object, var_2_object, var_3_string, var_290_object, var_291_object)
{
	var_0_object = var_291_object; // 0x12a TMov
	var_1_object = var_290_object; // 0x12b TMov
	var_3_string = 0; // 0x12c TMovB
	var_296_int = 1; // 0x12d PushI
	if(var_296_int == 0) goto Label_345; // 0x12e JumpB
	var_297_string = ""; // 0x12f PushV
	var_297_string = "Neutral"; // 0x130 MovS
	func_375(var_291_object, var_297_string); // 0x131 NEW_2
	var_305_int = 526405; // 0x133 PushI
	SetMessage(var_305_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_306_bool = 0; var_307_object = Obj(); // 0x138 PushV
	var_307_object = var_1_object; // 0x139 MovT
	func_1906(var_307_object); // 0x13a NEW_2
	if(var_306_bool == 0) goto Label_322; // 0x13c JumpB
	var_314_int = 526406; // 0x13d PushI
	var_315_int = 27682; // 0x13e PushI
	var_316_int = 27681; // 0x13f PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x140 TObjFunc
	
Label_322:
	var_317_bool = 0; var_318_object = Obj(); // 0x142 PushV
	var_318_object = var_1_object; // 0x143 MovT
	func_1918(var_318_object); // 0x144 NEW_2
	if(var_317_bool == 0) goto Label_332; // 0x146 JumpB
	var_323_int = 526420; // 0x147 PushI
	var_324_int = 27696; // 0x148 PushI
	var_325_int = 27695; // 0x149 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x14a TObjFunc
	
Label_332:
	var_326_int = 526411; // 0x14c PushI
	var_327_int = -1; // 0x14d PushI
	var_328_int = 27686; // 0x14e PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x14f TObjFunc
	var_329_int = 529012; // 0x151 PushI
	var_330_int = -1; // 0x152 PushI
	var_331_int = 30452; // 0x153 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x154 TObjFunc
	goto Label_345; // 0x156 Jump
	
Label_345:
	var_332_bool = 0; // 0x159 PushV
	func_1871(var_332_bool); // 0x15a NEW_2
	if(var_332_bool == 0) goto Label_360; // 0x15c JumpB
	
Label_349:
	lshWaitForAnimEnd(); // 0x15d Func
	var_333_string = var_3_string; // 0x15f PushT
	if(var_333_string == 0) goto Label_354; // 0x160 JumpB
	goto Label_359; // 0x161 Jump
	
Label_359:
	goto Label_374; // 0x167 Jump
	
Label_374:
	return 0; // 0x176 Return
	
Label_354:
	var_334_string = ""; // 0x162 PushV
	var_334_string = var_2_object; // 0x163 MovT
	func_1738(var_334_string); // 0x164 NEW_2
	goto Label_349; // 0x166 Jump
	
Label_360:
	var_335_string = "all"; // 0x168 PushS
	var_336_string = "idle"; // 0x169 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x16a Func
	
Label_364:
	WaitForAnimEnd(); // 0x16c Func
	var_337_string = var_3_string; // 0x16e PushT
	if(var_337_string == 0) goto Label_369; // 0x16f JumpB
	goto Label_374; // 0x170 Jump
	
Label_369:
	var_338_string = "all"; // 0x171 PushS
	var_339_string = "idle"; // 0x172 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x173 Func
	goto Label_364; // 0x175 Jump
}


func_1833(var_263_bool, var_264_int)
{
	var_265_int = 0; // 0x72a PushV
	func_1824(var_265_int); // 0x72b NEW_2
	var_263_bool = var_265_int == var_264_int; // 0x72d Eq2
	return 0; // 0x72e Return
}


func_1583()
{
	var_256_bool = 0; var_257_bool = 0; // 0x62f PushV
	CameraSwitchToNormal(); // 0x630 Func
	var_258_bool = 0; // 0x632 PushV
	func_1871(var_258_bool); // 0x633 NEW_2
	if(var_258_bool == 0) goto Label_1591; // 0x635 JumpB
	goto Label_1599; // 0x636 Jump
	
Label_1599:
	return 2; // 0x63f Return
	
Label_1591:
	var_259_string = "head"; // 0x637 PushS
	HasAnimationTrack(var_257_bool, var_259_string); // 0x638 Func
	var_260_bool = var_257_bool; // 0x63a Push
	if(var_260_bool == 0) goto Label_1599; // 0x63b JumpB
	var_261_string = "head"; // 0x63c PushS
	UnlookAsync(var_261_string); // 0x63d Func
}


func_1839(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x72f PushV
	var_49_string = "idle"; // 0x730 MovS
	var_50_int = var_47_int; // 0x731 Push
	if(var_50_int == 0) goto Label_1844; // 0x732 JumpB
	var_49_string = var_49_string + var_47_int; // 0x733 Add2
	
Label_1844:
	var_46_string = var_49_string; // 0x734 Mov
	return 2; // 0x735 Return
}


func_1969(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x7b1 PushV
	GetDiaryRoot(var_47_object); // 0x7b2 Func
	var_48_bool = var_47_object == 0; // 0x7b4 Not
	if(var_48_bool == 0) goto Label_1979; // 0x7b5 JumpB
	var_49_string = "Can't retrieve diary root"; // 0x7b6 PushS
	Trace(var_49_string); // 0x7b7 Func
	var_45_object = 0; // 0x7b9 MovB
	return 2; // 0x7ba Return
	
Label_1979:
	var_45_object = var_47_object; // 0x7bb Mov
	return 2; // 0x7bc Return
}


func_1791(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x6ff PushV
	self(var_117_object); // 0x700 Func
	var_115_object = var_117_object; // 0x702 Mov
	return 2; // 0x703 Return
}


func_1846(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x736 PushV
	var_43_int = 0; // 0x737 MovI
	
Label_1848:
	var_45_string = "all"; // 0x738 PushS
	var_46_string = ""; var_47_int = 0; // 0x739 PushV
	var_47_int = var_43_int; // 0x73a Mov
	func_1839(var_46_string, var_47_int); // 0x73b NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x73d Func
	var_51_bool = var_44_bool == 0; // 0x73f Not
	if(var_51_bool == 0) goto Label_1858; // 0x740 JumpB
	goto Label_1861; // 0x741 Jump
	
Label_1861:
	var_40_int = var_43_int; // 0x745 Mov
	return 4; // 0x746 Return
	
Label_1858:
	var_52_int = 1; // 0x742 PushI
	var_43_int = var_43_int + var_52_int; // 0x743 Add2
	goto Label_1848; // 0x744 Jump
}


func_1982(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x7be PushV
	var_45_object = Obj(); // 0x7bf PushV
	func_1969(var_45_object); // 0x7c0 NEW_2
	var_42_object = var_45_object; // 0x7c1 Mov
	Find(var_38_int, var_43_object); // 0x7c3 ObjFunc
	var_50_bool = var_43_object == 0; // 0x7c5 Not
	if(var_50_bool == 0) goto Label_1997; // 0x7c6 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x7c7 PushS
	var_52_int = var_51_string + var_38_int; // 0x7c8 Add
	Trace(var_52_int); // 0x7c9 Func
	var_36_bool = 0; // 0x7cb MovB
	return 6; // 0x7cc Return
	
Label_1997:
	AddChild(var_37_object); // 0x7cd ObjFunc
	var_53_int = 7; // 0x7cf PushI
	SendWorldWndMessage(var_53_int); // 0x7d0 Func
	GetCategory(var_44_int); // 0x7d2 ObjFunc
	SetDiarySection(var_44_int); // 0x7d4 Func
	var_36_bool = 0; // 0x7d6 MovB
	return 6; // 0x7d7 Return
}


func_1600(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x640 PushV
	var_122_string = "voice_common"; // 0x641 PushS
	GetVariable(var_122_string, var_120_int); // 0x642 Func
	var_123_int = var_120_int; // 0x644 Push
	if(var_123_int == 0) goto Label_1638; // 0x645 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x646 PushV
	var_125_object = var_114_object; // 0x647 Mov
	func_1658(var_125_object); // 0x648 NEW_2
	var_154_bool = var_124_bool == 0; // 0x64a Not
	if(var_154_bool == 0) goto Label_1620; // 0x64b JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x64c PushV
	var_156_object = var_114_object; // 0x64d Mov
	func_1695(var_156_object); // 0x64e NEW_2
	var_190_bool = var_155_bool == 0; // 0x650 Not
	if(var_190_bool == 0) goto Label_1620; // 0x651 JumpB
	var_113_bool = 0; // 0x652 MovB
	return 4; // 0x653 Return
	
Label_1620:
	var_191_int = 2; // 0x654 PushI
	irand(var_121_int, var_191_int); // 0x655 Func
	var_192_int = var_121_int; // 0x657 Push
	if(var_192_int == 0) goto Label_1633; // 0x658 JumpB
	var_193_string = "voice_common"; // 0x659 PushS
	var_194_int = 1; // 0x65a PushI
	var_195_int = var_120_int + var_194_int; // 0x65b Add
	var_196_int = 3; // 0x65c PushI
	var_197_int = var_195_int / var_196_int; // 0x65d Mod
	SetVariable(var_193_string, var_197_int); // 0x65e Func
	goto Label_1637; // 0x660 Jump
	
Label_1637:
	goto Label_1656; // 0x665 Jump
	
Label_1656:
	var_113_bool = 1; // 0x678 MovB
	return 4; // 0x679 Return
	
Label_1633:
	var_198_string = "voice_common"; // 0x661 PushS
	var_199_int = 0; // 0x662 PushI
	SetVariable(var_198_string, var_199_int); // 0x663 Func
	
Label_1638:
	var_200_bool = 0; var_201_object = Obj(); // 0x666 PushV
	var_201_object = var_114_object; // 0x667 Mov
	func_1695(var_201_object); // 0x668 NEW_2
	var_202_bool = var_200_bool == 0; // 0x66a Not
	if(var_202_bool == 0) goto Label_1652; // 0x66b JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x66c PushV
	var_204_object = var_114_object; // 0x66d Mov
	func_1658(var_204_object); // 0x66e NEW_2
	var_205_bool = var_203_bool == 0; // 0x670 Not
	if(var_205_bool == 0) goto Label_1652; // 0x671 JumpB
	var_113_bool = 0; // 0x672 MovB
	return 4; // 0x673 Return
	
Label_1652:
	var_206_string = "voice_common"; // 0x674 PushS
	var_207_int = 1; // 0x675 PushI
	SetVariable(var_206_string, var_207_int); // 0x676 Func
}


func_1476(var_60_bool)
{
	var_60_bool = 1; // 0x5c4 MovB
	return 0; // 0x5c5 Return
}


func_1478()
{
	StopAnimation(); // 0x5c6 Func
	StopGroup0(); // 0x5c8 Func
	return 0; // 0x5ca Return
}


func_1863(var_101_int)
{
	var_101_int = 515545; // 0x747 MovI
	return 0; // 0x748 Return
}


func_1865(var_100_int)
{
	var_100_int = 502870; // 0x749 MovI
	return 0; // 0x74a Return
}


func_1738(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x6ca PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x6cb Func
	var_245_bool = var_242_bool; // 0x6cd Push
	if(var_245_bool == 0) goto Label_1749; // 0x6ce JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x6cf Func
	var_246_bool = 0; // 0x6d1 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x6d2 Func
	goto Label_1753; // 0x6d4 Jump
	
Label_1753:
	return 6; // 0x6d9 Return
	
Label_1749:
	var_247_string = "Can't find lsh animation : "; // 0x6d5 PushS
	var_248_int = var_247_string + var_238_string; // 0x6d6 Add
	Trace(var_248_int); // 0x6d7 Func
}


func_1867(var_102_string)
{
	var_102_string = "ui/NPC_Mat.png"; // 0x74b MovS
	return 0; // 0x74c Return
}


func_843(var_0_object, var_1_object, var_2_object, var_3_string, var_368_object, var_369_object)
{
	var_0_object = var_369_object; // 0x34c TMov
	var_1_object = var_368_object; // 0x34d TMov
	var_3_string = 0; // 0x34e TMovB
	var_374_int = 1; // 0x34f PushI
	if(var_374_int == 0) goto Label_876; // 0x350 JumpB
	var_375_string = ""; // 0x351 PushV
	var_375_string = "Neutral"; // 0x352 MovS
	func_906(var_369_object, var_375_string); // 0x353 NEW_2
	var_383_int = 535284; // 0x355 PushI
	SetMessage(var_383_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_384_int = 535285; // 0x35a PushI
	var_385_int = 36962; // 0x35b PushI
	var_386_int = 36961; // 0x35c PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x35d TObjFunc
	var_387_int = 535292; // 0x35f PushI
	var_388_int = -1; // 0x360 PushI
	var_389_int = 36968; // 0x361 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x362 TObjFunc
	var_390_int = 535293; // 0x364 PushI
	var_391_int = -1; // 0x365 PushI
	var_392_int = 36969; // 0x366 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x367 TObjFunc
	goto Label_876; // 0x369 Jump
	
Label_876:
	var_393_bool = 0; // 0x36c PushV
	func_1871(var_393_bool); // 0x36d NEW_2
	if(var_393_bool == 0) goto Label_891; // 0x36f JumpB
	
Label_880:
	lshWaitForAnimEnd(); // 0x370 Func
	var_394_string = var_3_string; // 0x372 PushT
	if(var_394_string == 0) goto Label_885; // 0x373 JumpB
	goto Label_890; // 0x374 Jump
	
Label_890:
	goto Label_905; // 0x37a Jump
	
Label_905:
	return 0; // 0x389 Return
	
Label_885:
	var_395_string = ""; // 0x375 PushV
	var_395_string = var_2_object; // 0x376 MovT
	func_1738(var_395_string); // 0x377 NEW_2
	goto Label_880; // 0x379 Jump
	
Label_891:
	var_396_string = "all"; // 0x37b PushS
	var_397_string = "idle"; // 0x37c PushS
	PlayAnimation(var_396_string, var_397_string); // 0x37d Func
	
Label_895:
	WaitForAnimEnd(); // 0x37f Func
	var_398_string = var_3_string; // 0x381 PushT
	if(var_398_string == 0) goto Label_900; // 0x382 JumpB
	goto Label_905; // 0x383 Jump
	
Label_900:
	var_399_string = "all"; // 0x384 PushS
	var_400_string = "idle"; // 0x385 PushS
	PlayAnimation(var_399_string, var_400_string); // 0x386 Func
	goto Label_895; // 0x388 Jump
}


func_1869(var_103_string)
{
	var_103_string = "ui/NPC_Mat_b.png"; // 0x74d MovS
	return 0; // 0x74e Return
}


func_1102(var_0_object, var_1_object, var_2_object, var_3_string, var_427_object, var_428_object)
{
	var_0_object = var_428_object; // 0x44f TMov
	var_1_object = var_427_object; // 0x450 TMov
	var_3_string = 0; // 0x451 TMovB
	var_433_int = 1; // 0x452 PushI
	if(var_433_int == 0) goto Label_1130; // 0x453 JumpB
	var_434_string = ""; // 0x454 PushV
	var_434_string = "Neutral"; // 0x455 MovS
	func_1160(var_428_object, var_434_string); // 0x456 NEW_2
	var_442_int = 540539; // 0x458 PushI
	SetMessage(var_442_int); // 0x459 TObjFunc
	ClearReplies(); // 0x45b TObjFunc
	var_443_int = 540540; // 0x45d PushI
	var_444_int = -1; // 0x45e PushI
	var_445_int = 42549; // 0x45f PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x460 TObjFunc
	var_446_int = 540799; // 0x462 PushI
	var_447_int = -1; // 0x463 PushI
	var_448_int = 42848; // 0x464 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x465 TObjFunc
	goto Label_1130; // 0x467 Jump
	
Label_1130:
	var_449_bool = 0; // 0x46a PushV
	func_1871(var_449_bool); // 0x46b NEW_2
	if(var_449_bool == 0) goto Label_1145; // 0x46d JumpB
	
Label_1134:
	lshWaitForAnimEnd(); // 0x46e Func
	var_450_string = var_3_string; // 0x470 PushT
	if(var_450_string == 0) goto Label_1139; // 0x471 JumpB
	goto Label_1144; // 0x472 Jump
	
Label_1144:
	goto Label_1159; // 0x478 Jump
	
Label_1159:
	return 0; // 0x487 Return
	
Label_1139:
	var_451_string = ""; // 0x473 PushV
	var_451_string = var_2_object; // 0x474 MovT
	func_1738(var_451_string); // 0x475 NEW_2
	goto Label_1134; // 0x477 Jump
	
Label_1145:
	var_452_string = "all"; // 0x479 PushS
	var_453_string = "idle"; // 0x47a PushS
	PlayAnimation(var_452_string, var_453_string); // 0x47b Func
	
Label_1149:
	WaitForAnimEnd(); // 0x47d Func
	var_454_string = var_3_string; // 0x47f PushT
	if(var_454_string == 0) goto Label_1154; // 0x480 JumpB
	goto Label_1159; // 0x481 Jump
	
Label_1154:
	var_455_string = "all"; // 0x482 PushS
	var_456_string = "idle"; // 0x483 PushS
	PlayAnimation(var_455_string, var_456_string); // 0x484 Func
	goto Label_1149; // 0x486 Jump
}


func_1871(var_95_bool)
{
	var_95_bool = 1; // 0x74f MovB
	return 0; // 0x750 Return
}


func_1231(var_0_object)
{
	var_22_bool = 0; // 0x4cf PushV
	func_1510(var_22_bool); // 0x4d0 NEW_2
	var_25_bool = var_22_bool == 0; // 0x4d2 Not
	if(var_25_bool == 0) goto Label_1238; // 0x4d3 JumpB
	Hold(); // 0x4d4 Func
	
Label_1238:
	GetDirection(var_0_object); // 0x4d6 Func
	
Label_1240:
	func_1407(); // 0x4d9 NEW_2
	goto Label_1240; // 0x4db Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x52 TMov
	var_1_object = var_208_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_214_int = 1; // 0x55 PushI
	if(var_214_int == 0) goto Label_104; // 0x56 JumpB
	var_215_string = ""; // 0x57 PushV
	var_215_string = "Neutral"; // 0x58 MovS
	func_134(var_209_object, var_215_string); // 0x59 NEW_2
	var_232_int = 525507; // 0x5b PushI
	SetMessage(var_232_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_233_int = 525508; // 0x60 PushI
	var_234_int = 30772; // 0x61 PushI
	var_235_int = 26864; // 0x62 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x63 TObjFunc
	goto Label_104; // 0x65 Jump
	
Label_104:
	var_236_bool = 0; // 0x68 PushV
	func_1871(var_236_bool); // 0x69 NEW_2
	if(var_236_bool == 0) goto Label_119; // 0x6b JumpB
	
Label_108:
	lshWaitForAnimEnd(); // 0x6c Func
	var_237_string = var_3_string; // 0x6e PushT
	if(var_237_string == 0) goto Label_113; // 0x6f JumpB
	goto Label_118; // 0x70 Jump
	
Label_118:
	goto Label_133; // 0x76 Jump
	
Label_133:
	return 0; // 0x85 Return
	
Label_113:
	var_238_string = ""; // 0x71 PushV
	var_238_string = var_2_object; // 0x72 MovT
	func_1738(var_238_string); // 0x73 NEW_2
	goto Label_108; // 0x75 Jump
	
Label_119:
	var_249_string = "all"; // 0x77 PushS
	var_250_string = "idle"; // 0x78 PushS
	PlayAnimation(var_249_string, var_250_string); // 0x79 Func
	
Label_123:
	WaitForAnimEnd(); // 0x7b Func
	var_251_string = var_3_string; // 0x7d PushT
	if(var_251_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_128:
	var_252_string = "all"; // 0x80 PushS
	var_253_string = "idle"; // 0x81 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x82 Func
	goto Label_123; // 0x84 Jump
}


func_1873()
{
	var_29_string = "k8q01"; // 0x752 PushS
	var_30_int = 2; // 0x753 PushI
	SetVariable(var_29_string, var_30_int); // 0x754 Func
	func_1943(); // 0x757 NEW_2
	return 0; // 0x759 Return
}


func_1483(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x5cb PushV
	GetPosition(var_41_cvector); // 0x5cc Func
	GetPosition(var_42_cvector); // 0x5ce ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x5d0 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x5d1 Or2
	return 6; // 0x5d2 Return
}


func_1491(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x5d3 PushV
	GetPosition(var_34_cvector); // 0x5d4 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x5d6 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x5d7 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x5d8 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x5d9 Func
	var_29_bool = var_36_bool; // 0x5db Mov
	return 6; // 0x5dc Return
}


func_216(var_0_object, var_266_int, var_267_object)
{
	var_269_object = Obj(); var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; var_276_bool = 0; // 0xd8 PushV
	var_0_object = var_267_object; // 0xd9 TMov
	var_277_bool = 0; var_278_object = Obj(); var_279_float = 0; // 0xda PushV
	var_278_object = var_267_object; // 0xdb Mov
	var_279_float = 70.0; // 0xdc MovF
	func_1515(var_278_object, var_279_float); // 0xdd NEW_2
	var_280_bool = var_277_bool == 0; // 0xdf Not
	if(var_280_bool == 0) goto Label_227; // 0xe0 JumpB
	var_266_int = -2; // 0xe1 MovI
	return 8; // 0xe2 Return
	
Label_227:
	CreateDialog(var_273_object); // 0xe3 Func
	var_281_int = 0; // 0xe5 PushV
	func_1865(var_281_int); // 0xe6 NEW_2
	SetNPCName(var_281_int); // 0xe8 ObjFunc
	var_282_int = 0; // 0xea PushV
	func_1863(var_282_int); // 0xeb NEW_2
	SetNPCDescription(var_282_int); // 0xed ObjFunc
	var_283_string = ""; // 0xef PushV
	func_1867(var_283_string); // 0xf0 NEW_2
	SetPhoto(var_283_string); // 0xf2 ObjFunc
	var_284_string = ""; // 0xf4 PushV
	func_1869(var_284_string); // 0xf5 NEW_2
	SetPhoto2(var_284_string); // 0xf7 ObjFunc
	var_285_int = 0; // 0xf9 PushV
	func_2010(var_285_int); // 0xfa NEW_2
	SetPlayerName(var_285_int); // 0xfc ObjFunc
	var_275_int = -1; // 0xfe MovI
	IsOverrideActive(var_274_bool); // 0xff Func
	var_286_bool = var_274_bool; // 0x101 Push
	if(var_286_bool == 0) goto Label_261; // 0x102 JumpB
	var_266_int = -2; // 0x103 MovI
	return 8; // 0x104 Return
	
Label_261:
	DoDialog(var_273_object); // 0x105 Func
	var_287_bool = 0; var_288_object = Obj(); // 0x107 PushV
	var_289_object = Obj(); // 0x108 PushV
	func_1791(var_289_object); // 0x109 NEW_2
	var_288_object = var_289_object; // 0x10a Mov
	func_1600(var_287_bool, var_288_object); // 0x10c NEW_2
	var_290_object = Obj(); var_291_object = Obj(); // 0x10e PushV
	var_290_object = var_267_object; // 0x10f Mov
	var_291_object = var_273_object; // 0x110 Mov
	TaskCall(3); // 0x111 TaskCall
	func_297(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object); // 0x112 NEW_2
	TaskReturn(); // 0x113 TaskReturn
	IsDialogEnd(var_276_bool); // 0x115 ObjFunc
	
Label_279:
	var_340_bool = var_276_bool == 0; // 0x117 Not
	if(var_340_bool == 0) goto Label_286; // 0x118 JumpB
	sync(); // 0x119 Func
	IsDialogEnd(var_276_bool); // 0x11b ObjFunc
	goto Label_279; // 0x11d Jump
	
Label_286:
	var_341_object = Obj(); // 0x11e PushV
	var_341_object = var_267_object; // 0x11f Mov
	func_1583(); // 0x120 NEW_2
	StopDialog(var_273_object); // 0x122 Func
	GetReturnValue(var_275_int); // 0x124 ObjFunc
	var_266_int = var_275_int; // 0x126 Mov
	return 8; // 0x127 Return
}


func_1754(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x6da PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x6db Func
	var_229_bool = var_226_bool; // 0x6dd Push
	if(var_229_bool == 0) goto Label_1764; // 0x6de JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x6df Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x6e1 Func
	goto Label_1768; // 0x6e3 Jump
	
Label_1768:
	return 6; // 0x6e8 Return
	
Label_1764:
	var_230_string = "Can't find lsh animation : "; // 0x6e4 PushS
	var_231_int = var_230_string + var_219_string; // 0x6e5 Add
	Trace(var_231_int); // 0x6e6 Func
}


func_2010(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x7da PushV
	var_107_string = "branch"; // 0x7db PushS
	GetVariable(var_107_string, var_106_int); // 0x7dc Func
	var_108_int = 0; // 0x7de PushI
	var_109_bool = var_106_int == var_108_int; // 0x7df Eq
	if(var_109_bool == 0) goto Label_2020; // 0x7e0 JumpB
	var_104_int = 1; // 0x7e1 MovI
	return 2; // 0x7e2 Return
	
Label_2020:
	var_110_int = 1; // 0x7e4 PushI
	var_111_bool = var_106_int == var_110_int; // 0x7e5 Eq
	if(var_111_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_104_int = 2; // 0x7e7 MovI
	return 2; // 0x7e8 Return
	
Label_2025:
	var_104_int = 3; // 0x7e9 MovI
	return 2; // 0x7ea Return
}


func_1882()
{
	var_80_string = "k8q01"; // 0x75b PushS
	var_81_int = 4; // 0x75c PushI
	SetVariable(var_80_string, var_81_int); // 0x75d Func
	func_1956(); // 0x760 NEW_2
	var_90_bool = 0; var_91_string = ""; var_92_string = ""; // 0x762 PushV
	var_91_string = "quest_k8_01"; // 0x763 MovS
	var_92_string = "unlock_boiny"; // 0x764 MovS
	func_1812(var_90_bool, var_91_string, var_92_string); // 0x765 NEW_2
	return 0; // 0x767 Return
}


func_1501(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5dd PushV
	GetPosition(var_28_cvector); // 0x5de ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x5e0 PushV
	var_30_cvector = var_28_cvector; // 0x5e1 Mov
	func_1491(var_29_bool, var_30_cvector); // 0x5e2 NEW_2
	var_25_bool = var_29_bool; // 0x5e3 Mov
	return 2; // 0x5e5 Return
}


func_1245(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x4dd PushV
	var_49_string = "player"; // 0x4de PushS
	FindActor(var_48_object, var_49_string); // 0x4df Func
	var_50_bool = var_48_object == 0; // 0x4e1 Not
	if(var_50_bool == 0) goto Label_1253; // 0x4e2 JumpB
	var_46_bool = 0; // 0x4e3 MovB
	return 2; // 0x4e4 Return
	
Label_1253:
	var_51_bool = 0; var_52_object = Obj(); // 0x4e5 PushV
	var_52_object = var_48_object; // 0x4e6 Mov
	func_1501(var_52_object); // 0x4e7 NEW_2
	var_46_bool = var_51_bool; // 0x4e8 Mov
	return 2; // 0x4ea Return
}


func_1510(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5e6 PushV
	IsLoaded(var_24_bool); // 0x5e7 Func
	var_22_bool = var_24_bool; // 0x5e9 Mov
	return 2; // 0x5ea Return
}


func_1896()
{
	func_1930(); // 0x76a NEW_2
	var_66_bool = 0; var_67_string = ""; var_68_string = ""; // 0x76c PushV
	var_67_string = "quest_k8_01"; // 0x76d MovS
	var_68_string = "fail"; // 0x76e MovS
	func_1812(var_66_bool, var_67_string, var_68_string); // 0x76f NEW_2
	return 0; // 0x771 Return
}


func_1769(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6e9 PushV
	var_151_bool = 0; // 0x6ea PushV
	func_1871(var_151_bool); // 0x6eb NEW_2
	if(var_151_bool == 0) goto Label_1782; // 0x6ed JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x6ee Func
	var_152_bool = var_150_bool; // 0x6f0 Push
	if(var_152_bool == 0) goto Label_1782; // 0x6f1 JumpB
	lshPlaySpeech(var_148_string); // 0x6f2 Func
	var_147_bool = 1; // 0x6f4 MovB
	return 2; // 0x6f5 Return
	
Label_1782:
	var_147_bool = 0; // 0x6f6 MovB
	return 2; // 0x6f7 Return
}


func_1515(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x5eb PushV
	GetPosition(var_66_cvector); // 0x5ec ObjFunc
	GetEyesHeight(var_65_float); // 0x5ee ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x5f0 PushE
	var_74_float = var_74_float + var_65_float; // 0x5f1 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x5f2 PopE
	GetPosition(var_67_cvector); // 0x5f3 Func
	GetEyesHeight(var_65_float); // 0x5f5 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x5f7 PushE
	var_75_float = var_75_float + var_65_float; // 0x5f8 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x5f9 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x5fa Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x5fb PushE
	var_76_float = 0; // 0x5fc MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x5fd PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x5fe Or
	var_78_float = sqrt(var_77_int); // 0x5ff Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x600 Div2
	var_69_cvector = -var_68_cvector; // 0x601 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x602 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x603 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x604 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x605 Xor2
	func_1797(var_80_cvector, var_81_cvector); // 0x606 NEW_2
	var_88_int = 25; // 0x608 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x609 Mult
	var_90_int = var_79_float + var_89_float; // 0x60a Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x60b PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x60c Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x60d Add2
	IsOverrideActive(var_72_bool); // 0x60e Func
	var_92_bool = var_72_bool; // 0x610 Push
	if(var_92_bool == 0) goto Label_1556; // 0x611 JumpB
	var_53_bool = 0; // 0x612 MovB
	return 18; // 0x613 Return
	
Label_1556:
	StopWorld(); // 0x614 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x616 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x618 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x619 PushE
	Rotate(var_93_float, var_94_float); // 0x61a Func
	var_95_bool = 0; // 0x61c PushV
	func_1871(var_95_bool); // 0x61d NEW_2
	if(var_95_bool == 0) goto Label_1569; // 0x61f JumpB
	goto Label_1577; // 0x620 Jump
	
Label_1577:
	CameraWaitForPlayFinish(); // 0x629 Func
	ResumeWorld(); // 0x62b Func
	var_53_bool = 1; // 0x62d MovB
	return 18; // 0x62e Return
	
Label_1569:
	var_96_string = "head"; // 0x621 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x622 Func
	var_97_bool = var_73_bool; // 0x624 Push
	if(var_97_bool == 0) goto Label_1577; // 0x625 JumpB
	var_98_string = "head"; // 0x626 PushS
	LookAsyncCamera(var_98_string); // 0x627 Func
}


func_1260(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x4ec PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x4ed PushE
	RotateAsync(var_98_float, var_99_float); // 0x4ee Func
	return 0; // 0x4f0 Return
}


func_2027(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x7ec PushGE
	var_41_bool = var_40_bool == 0; // 0x7ed Not
	if(var_41_bool == 0) goto Label_2040; // 0x7ee JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x7ef PushV
	var_43_object = var_39_object; // 0x7f0 Mov
	TaskCall(0); // 0x7f1 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x7f2 NEW_2
	TaskReturn(); // 0x7f3 TaskReturn
	var_262_bool = GlobalVars[1]; // 0x7f5 PushGE
	var_262_bool = 1; // 0x7f6 MovB
	GlobalVars[1] = var_262_bool; // 0x7f7 PopGE
	
Label_2040:
	var_263_bool = 0; var_264_int = 0; // 0x7f8 PushV
	var_264_int = 8; // 0x7f9 MovI
	func_1833(var_263_bool, var_264_int); // 0x7fa NEW_2
	if(var_263_bool == 0) goto Label_2052; // 0x7fc JumpB
	var_266_int = 0; var_267_object = Obj(); // 0x7fd PushV
	var_267_object = var_39_object; // 0x7fe Mov
	TaskCall(2); // 0x7ff TaskCall
	func_216(var_268_object, var_266_int, var_267_object); // 0x800 NEW_2
	TaskReturn(); // 0x801 TaskReturn
	return 0; // 0x803 Return
	
Label_2052:
	var_342_bool = 0; var_343_int = 0; // 0x804 PushV
	var_343_int = 12; // 0x805 MovI
	func_1833(var_342_bool, var_343_int); // 0x806 NEW_2
	if(var_342_bool == 0) goto Label_2064; // 0x808 JumpB
	var_344_int = 0; var_345_object = Obj(); // 0x809 PushV
	var_345_object = var_39_object; // 0x80a Mov
	TaskCall(4); // 0x80b TaskCall
	func_762(var_346_object, var_344_int, var_345_object); // 0x80c NEW_2
	TaskReturn(); // 0x80d TaskReturn
	return 0; // 0x80f Return
	
Label_2064:
	var_403_int = 0; var_404_object = Obj(); // 0x810 PushV
	var_404_object = var_39_object; // 0x811 Mov
	TaskCall(6); // 0x812 TaskCall
	func_1021(var_405_object, var_403_int, var_404_object); // 0x813 NEW_2
	TaskReturn(); // 0x814 TaskReturn
	return 0; // 0x816 Return
}


func_1265(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x4f1 PushV
	var_34_string = "player"; // 0x4f2 PushS
	FindActor(var_32_object, var_34_string); // 0x4f3 Func
	var_35_bool = var_32_object == 0; // 0x4f5 Not
	if(var_35_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_29_bool = 0; // 0x4f7 MovB
	return 4; // 0x4f8 Return
	
Label_1273:
	var_36_float = 0; var_37_object = Obj(); // 0x4f9 PushV
	var_37_object = var_32_object; // 0x4fa Mov
	func_1483(var_37_object); // 0x4fb NEW_2
	var_44_float = 90000.0; // 0x4fd PushF
	var_45_bool = var_36_float > var_44_float; // 0x4fe GT
	if(var_45_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_29_bool = 0; // 0x500 MovB
	return 4; // 0x501 Return
	
Label_1282:
	CanSee(var_33_bool, var_32_object); // 0x502 Func
	var_29_bool = var_33_bool; // 0x504 Mov
	return 4; // 0x505 Return
}


func_1906(var_306_bool)
{
	var_308_int = 0; var_309_string = ""; // 0x773 PushV
	var_309_string = "k8q01"; // 0x774 MovS
	func_1807(var_308_int, var_309_string); // 0x775 NEW_2
	var_312_int = 1; // 0x777 PushI
	var_313_bool = var_308_int == var_312_int; // 0x778 Eq
	if(var_313_bool == 0) goto Label_1916; // 0x779 JumpB
	var_306_bool = 1; // 0x77a MovB
	return 0; // 0x77b Return
	
Label_1916:
	var_306_bool = 0; // 0x77c MovB
	return 0; // 0x77d Return
}


func_375(var_2_object, var_297_string)
{
	var_298_bool = 0; // 0x178 PushV
	func_1871(var_298_bool); // 0x179 NEW_2
	var_299_bool = var_298_bool == 0; // 0x17b Not
	if(var_299_bool == 0) goto Label_382; // 0x17c JumpB
	return 0; // 0x17d Return
	
Label_382:
	var_300_bool = var_297_string == var_2_object; // 0x17e Eq
	if(var_300_bool == 0) goto Label_385; // 0x17f JumpB
	return 0; // 0x180 Return
	
Label_385:
	var_301_string = ""; var_302_bool = 0; // 0x181 PushV
	var_301_string = var_297_string; // 0x182 Mov
	var_303_string = ""; // 0x183 PushS
	var_304_bool = var_297_string == var_303_string; // 0x184 Eq
	if(var_304_bool == 0) goto Label_392; // 0x185 JumpB
	var_302_bool = 0; // 0x186 MovB
	goto Label_393; // 0x187 Jump
	
Label_393:
	func_1754(var_301_string, var_302_bool); // 0x189 NEW_2
	var_2_object = var_297_string; // 0x18b TMov
	return 0; // 0x18c Return
	
Label_392:
	var_302_bool = 1; // 0x188 MovB
}


func_1784()
{
	var_24_bool = 0; // 0x6f8 PushV
	func_1871(var_24_bool); // 0x6f9 NEW_2
	if(var_24_bool == 0) goto Label_1790; // 0x6fb JumpB
	lshStopSpeech(); // 0x6fc Func
	
Label_1790:
	return 0; // 0x6fe Return
}


func_762(var_0_object, var_344_int, var_345_object)
{
	var_347_object = Obj(); var_348_bool = 0; var_349_int = 0; var_350_bool = 0; var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0; // 0x2fa PushV
	var_0_object = var_345_object; // 0x2fb TMov
	var_355_bool = 0; var_356_object = Obj(); var_357_float = 0; // 0x2fc PushV
	var_356_object = var_345_object; // 0x2fd Mov
	var_357_float = 70.0; // 0x2fe MovF
	func_1515(var_356_object, var_357_float); // 0x2ff NEW_2
	var_358_bool = var_355_bool == 0; // 0x301 Not
	if(var_358_bool == 0) goto Label_773; // 0x302 JumpB
	var_344_int = -2; // 0x303 MovI
	return 8; // 0x304 Return
	
Label_773:
	CreateDialog(var_351_object); // 0x305 Func
	var_359_int = 0; // 0x307 PushV
	func_1865(var_359_int); // 0x308 NEW_2
	SetNPCName(var_359_int); // 0x30a ObjFunc
	var_360_int = 0; // 0x30c PushV
	func_1863(var_360_int); // 0x30d NEW_2
	SetNPCDescription(var_360_int); // 0x30f ObjFunc
	var_361_string = ""; // 0x311 PushV
	func_1867(var_361_string); // 0x312 NEW_2
	SetPhoto(var_361_string); // 0x314 ObjFunc
	var_362_string = ""; // 0x316 PushV
	func_1869(var_362_string); // 0x317 NEW_2
	SetPhoto2(var_362_string); // 0x319 ObjFunc
	var_363_int = 0; // 0x31b PushV
	func_2010(var_363_int); // 0x31c NEW_2
	SetPlayerName(var_363_int); // 0x31e ObjFunc
	var_353_int = -1; // 0x320 MovI
	IsOverrideActive(var_352_bool); // 0x321 Func
	var_364_bool = var_352_bool; // 0x323 Push
	if(var_364_bool == 0) goto Label_807; // 0x324 JumpB
	var_344_int = -2; // 0x325 MovI
	return 8; // 0x326 Return
	
Label_807:
	DoDialog(var_351_object); // 0x327 Func
	var_365_bool = 0; var_366_object = Obj(); // 0x329 PushV
	var_367_object = Obj(); // 0x32a PushV
	func_1791(var_367_object); // 0x32b NEW_2
	var_366_object = var_367_object; // 0x32c Mov
	func_1600(var_365_bool, var_366_object); // 0x32e NEW_2
	var_368_object = Obj(); var_369_object = Obj(); // 0x330 PushV
	var_368_object = var_345_object; // 0x331 Mov
	var_369_object = var_351_object; // 0x332 Mov
	TaskCall(5); // 0x333 TaskCall
	func_843(var_370_object, var_371_object, var_372_string, var_373_bool, var_368_object, var_369_object); // 0x334 NEW_2
	TaskReturn(); // 0x335 TaskReturn
	IsDialogEnd(var_354_bool); // 0x337 ObjFunc
	
Label_825:
	var_401_bool = var_354_bool == 0; // 0x339 Not
	if(var_401_bool == 0) goto Label_832; // 0x33a JumpB
	sync(); // 0x33b Func
	IsDialogEnd(var_354_bool); // 0x33d ObjFunc
	goto Label_825; // 0x33f Jump
	
Label_832:
	var_402_object = Obj(); // 0x340 PushV
	var_402_object = var_345_object; // 0x341 Mov
	func_1583(); // 0x342 NEW_2
	StopDialog(var_351_object); // 0x344 Func
	GetReturnValue(var_353_int); // 0x346 ObjFunc
	var_344_int = var_353_int; // 0x348 Mov
	return 8; // 0x349 Return
}


func_1021(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0; // 0x3fd PushV
	var_0_object = var_404_object; // 0x3fe TMov
	var_414_bool = 0; var_415_object = Obj(); var_416_float = 0; // 0x3ff PushV
	var_415_object = var_404_object; // 0x400 Mov
	var_416_float = 70.0; // 0x401 MovF
	func_1515(var_415_object, var_416_float); // 0x402 NEW_2
	var_417_bool = var_414_bool == 0; // 0x404 Not
	if(var_417_bool == 0) goto Label_1032; // 0x405 JumpB
	var_403_int = -2; // 0x406 MovI
	return 8; // 0x407 Return
	
Label_1032:
	CreateDialog(var_410_object); // 0x408 Func
	var_418_int = 0; // 0x40a PushV
	func_1865(var_418_int); // 0x40b NEW_2
	SetNPCName(var_418_int); // 0x40d ObjFunc
	var_419_int = 0; // 0x40f PushV
	func_1863(var_419_int); // 0x410 NEW_2
	SetNPCDescription(var_419_int); // 0x412 ObjFunc
	var_420_string = ""; // 0x414 PushV
	func_1867(var_420_string); // 0x415 NEW_2
	SetPhoto(var_420_string); // 0x417 ObjFunc
	var_421_string = ""; // 0x419 PushV
	func_1869(var_421_string); // 0x41a NEW_2
	SetPhoto2(var_421_string); // 0x41c ObjFunc
	var_422_int = 0; // 0x41e PushV
	func_2010(var_422_int); // 0x41f NEW_2
	SetPlayerName(var_422_int); // 0x421 ObjFunc
	var_412_int = -1; // 0x423 MovI
	IsOverrideActive(var_411_bool); // 0x424 Func
	var_423_bool = var_411_bool; // 0x426 Push
	if(var_423_bool == 0) goto Label_1066; // 0x427 JumpB
	var_403_int = -2; // 0x428 MovI
	return 8; // 0x429 Return
	
Label_1066:
	DoDialog(var_410_object); // 0x42a Func
	var_424_bool = 0; var_425_object = Obj(); // 0x42c PushV
	var_426_object = Obj(); // 0x42d PushV
	func_1791(var_426_object); // 0x42e NEW_2
	var_425_object = var_426_object; // 0x42f Mov
	func_1600(var_424_bool, var_425_object); // 0x431 NEW_2
	var_427_object = Obj(); var_428_object = Obj(); // 0x433 PushV
	var_427_object = var_404_object; // 0x434 Mov
	var_428_object = var_410_object; // 0x435 Mov
	TaskCall(7); // 0x436 TaskCall
	func_1102(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object); // 0x437 NEW_2
	TaskReturn(); // 0x438 TaskReturn
	IsDialogEnd(var_413_bool); // 0x43a ObjFunc
	
Label_1084:
	var_457_bool = var_413_bool == 0; // 0x43c Not
	if(var_457_bool == 0) goto Label_1091; // 0x43d JumpB
	sync(); // 0x43e Func
	IsDialogEnd(var_413_bool); // 0x440 ObjFunc
	goto Label_1084; // 0x442 Jump
	
Label_1091:
	var_458_object = Obj(); // 0x443 PushV
	var_458_object = var_404_object; // 0x444 Mov
	func_1583(); // 0x445 NEW_2
	StopDialog(var_410_object); // 0x447 Func
	GetReturnValue(var_412_int); // 0x449 ObjFunc
	var_403_int = var_412_int; // 0x44b Mov
	return 8; // 0x44c Return
}


func_1918(var_317_bool)
{
	var_319_int = 0; var_320_string = ""; // 0x77f PushV
	var_320_string = "k8q01"; // 0x780 MovS
	func_1807(var_319_int, var_320_string); // 0x781 NEW_2
	var_321_int = 3; // 0x783 PushI
	var_322_bool = var_319_int == var_321_int; // 0x784 Eq
	if(var_322_bool == 0) goto Label_1928; // 0x785 JumpB
	var_317_bool = 1; // 0x786 MovB
	return 0; // 0x787 Return
	
Label_1928:
	var_317_bool = 0; // 0x788 MovB
	return 0; // 0x789 Return
}


func_1407()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x57f PushV
	WaitForAnimEnd(); // 0x580 Func
	var_38_bool = 0; // 0x582 PushV
	func_1510(var_38_bool); // 0x583 NEW_2
	var_39_bool = var_38_bool == 0; // 0x585 Not
	if(var_39_bool == 0) goto Label_1416; // 0x586 JumpB
	return 12; // 0x587 Return
	
Label_1416:
	var_40_int = 0; // 0x588 PushV
	func_1846(var_40_int); // 0x589 NEW_2
	var_32_int = var_40_int; // 0x58a Mov
	var_33_int = 0; // 0x58c MovI
	
Label_1421:
	var_53_bool = 0; // 0x58d PushV
	var_53_bool = 0; // 0x58e MovB
	var_54_int = 5; // 0x58f PushI
	var_55_bool = var_33_int < var_54_int; // 0x590 LT
	if(var_55_bool == 0) goto Label_1431; // 0x591 JumpB
	var_56_bool = 0; // 0x592 PushV
	func_1510(var_56_bool); // 0x593 NEW_2
	if(var_56_bool == 0) goto Label_1431; // 0x595 JumpB
	var_53_bool = 1; // 0x596 MovB
	
Label_1431:
	if(var_53_bool == 0) goto Label_1473; // 0x597 JumpB
	var_57_bool = var_32_int == 0; // 0x598 Not
	if(var_57_bool == 0) goto Label_1441; // 0x599 JumpB
	var_58_int = 3; // 0x59a PushI
	Sleep(var_58_int, var_34_bool); // 0x59b Func
	var_59_bool = var_34_bool == 0; // 0x59d Not
	if(var_59_bool == 0) goto Label_1440; // 0x59e JumpB
	goto Label_1473; // 0x59f Jump
	
Label_1473:
	ResetAAS(); // 0x5c1 Func
	return 12; // 0x5c3 Return
	
Label_1440:
	goto Label_1462; // 0x5a0 Jump
	
Label_1462:
	var_60_bool = 0; // 0x5b6 PushV
	func_1476(var_60_bool); // 0x5b7 NEW_2
	var_61_bool = var_60_bool == 0; // 0x5b9 Not
	if(var_61_bool == 0) goto Label_1468; // 0x5ba JumpB
	goto Label_1473; // 0x5bb Jump
	
Label_1468:
	ResetAAS(); // 0x5bc Func
	var_62_int = 1; // 0x5be PushI
	var_33_int = var_33_int + var_62_int; // 0x5bf Add2
	goto Label_1421; // 0x5c0 Jump
	
Label_1441:
	irand(var_35_int, var_32_int); // 0x5a1 Func
	var_63_int = 5; // 0x5a3 PushI
	irand(var_36_int, var_63_int); // 0x5a4 Func
	var_64_int = 0; // 0x5a6 PushI
	var_65_bool = var_36_int != var_64_int; // 0x5a7 Neq
	if(var_65_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_35_int = 0; // 0x5a9 MovI
	
Label_1450:
	var_66_string = "all"; // 0x5aa PushS
	var_67_string = ""; var_68_int = 0; // 0x5ab PushV
	var_68_int = var_35_int; // 0x5ac Mov
	func_1839(var_67_string, var_68_int); // 0x5ad NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x5af Func
	WaitForAnimEnd(var_37_bool); // 0x5b1 Func
	var_69_bool = var_37_bool == 0; // 0x5b3 Not
	if(var_69_bool == 0) goto Label_1462; // 0x5b4 JumpB
	goto Label_1473; // 0x5b5 Jump
}


