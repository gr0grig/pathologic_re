task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xa2 PushI
	if(var_28_int == 0) goto Label_225; // 0xa3 JumpB
	func_2131(); // 0xa5 NEW_2
	var_30_int = 19130; // 0xa7 PushI
	var_31_bool = var_26_bool == var_30_int; // 0xa8 Eq
	if(var_31_bool == 0) goto Label_190; // 0xa9 JumpB
	var_32_string = ""; // 0xaa PushV
	var_32_string = "Neutral"; // 0xab MovS
	func_139(var_27_cvector, var_32_string); // 0xac NEW_2
	var_49_int = 517997; // 0xae PushI
	SetMessage(var_49_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_50_int = 517998; // 0xb3 PushI
	var_51_int = 29658; // 0xb4 PushI
	var_52_int = 19131; // 0xb5 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb6 TObjFunc
	var_53_int = 528292; // 0xb8 PushI
	var_54_int = 29658; // 0xb9 PushI
	var_55_int = 29657; // 0xba PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_56_int = 29658; // 0xbe PushI
	var_57_bool = var_26_bool == var_56_int; // 0xbf Eq
	if(var_57_bool == 0) goto Label_213; // 0xc0 JumpB
	var_58_string = ""; // 0xc1 PushV
	var_58_string = "Neutral"; // 0xc2 MovS
	func_139(var_27_cvector, var_58_string); // 0xc3 NEW_2
	var_59_int = 528293; // 0xc5 PushI
	SetMessage(var_59_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_60_int = 528294; // 0xca PushI
	var_61_int = -1; // 0xcb PushI
	var_62_int = 29660; // 0xcc PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xcd TObjFunc
	var_63_int = 528295; // 0xcf PushI
	var_64_int = -1; // 0xd0 PushI
	var_65_int = 29661; // 0xd1 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_66_bool = 0; // 0xd6 PushV
	func_2237(var_66_bool); // 0xd7 NEW_2
	if(var_66_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x1a5 PushI
	if(var_28_int == 0) goto Label_786; // 0x1a6 JumpB
	func_2131(); // 0x1a8 NEW_2
	var_30_int = 19739; // 0x1aa PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x1ab Eq
	if(var_31_bool == 0) goto Label_434; // 0x1ac JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x1ad PushV
	var_32_object = var_1_object; // 0x1ae MovT
	var_33_object = var_0_object; // 0x1af MovT
	func_2239(); // 0x1b0 NEW_2
	
Label_434:
	var_36_int = 19745; // 0x1b2 PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x1b3 Eq
	if(var_37_bool == 0) goto Label_452; // 0x1b4 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x1b5 PushV
	var_38_object = var_1_object; // 0x1b6 MovT
	var_39_object = var_0_object; // 0x1b7 MovT
	func_2245(); // 0x1b8 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x1ba PushV
	var_42_object = var_1_object; // 0x1bb MovT
	var_43_object = var_0_object; // 0x1bc MovT
	func_2251(var_43_object); // 0x1bd NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0x1bf PushV
	var_63_object = var_1_object; // 0x1c0 MovT
	var_64_object = var_0_object; // 0x1c1 MovT
	func_2261(); // 0x1c2 NEW_2
	
Label_452:
	var_67_int = 19824; // 0x1c4 PushI
	var_68_bool = var_27_cvector == var_67_int; // 0x1c5 Eq
	if(var_68_bool == 0) goto Label_470; // 0x1c6 JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0x1c7 PushV
	var_69_object = var_1_object; // 0x1c8 MovT
	var_70_object = var_0_object; // 0x1c9 MovT
	func_2245(); // 0x1ca NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0x1cc PushV
	var_71_object = var_1_object; // 0x1cd MovT
	var_72_object = var_0_object; // 0x1ce MovT
	func_2273(var_72_object); // 0x1cf NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x1d1 PushV
	var_76_object = var_1_object; // 0x1d2 MovT
	var_77_object = var_0_object; // 0x1d3 MovT
	func_2261(); // 0x1d4 NEW_2
	
Label_470:
	var_78_int = 19738; // 0x1d6 PushI
	var_79_bool = var_26_bool == var_78_int; // 0x1d7 Eq
	if(var_79_bool == 0) goto Label_526; // 0x1d8 JumpB
	var_80_string = ""; // 0x1d9 PushV
	var_80_string = "Fear"; // 0x1da MovS
	func_398(var_27_cvector, var_80_string); // 0x1db NEW_2
	var_97_int = 518646; // 0x1dd PushI
	SetMessage(var_97_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_98_bool = 0; // 0x1e2 PushV
	var_98_bool = 0; // 0x1e3 MovB
	var_99_bool = 0; var_100_object = Obj(); // 0x1e4 PushV
	var_100_object = var_1_object; // 0x1e5 MovT
	func_2295(var_100_object); // 0x1e6 NEW_2
	if(var_99_bool == 0) goto Label_495; // 0x1e8 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x1e9 PushV
	var_108_object = var_1_object; // 0x1ea MovT
	func_2319(var_108_object); // 0x1eb NEW_2
	if(var_107_bool == 0) goto Label_495; // 0x1ed JumpB
	var_98_bool = 1; // 0x1ee MovB
	
Label_495:
	if(var_98_bool == 0) goto Label_501; // 0x1ef JumpB
	var_113_int = 518647; // 0x1f0 PushI
	var_114_int = 19740; // 0x1f1 PushI
	var_115_int = 19739; // 0x1f2 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1f3 TObjFunc
	
Label_501:
	var_116_bool = 0; // 0x1f5 PushV
	var_116_bool = 0; // 0x1f6 MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x1f7 PushV
	var_118_object = var_1_object; // 0x1f8 MovT
	func_2307(var_118_object); // 0x1f9 NEW_2
	if(var_117_bool == 0) goto Label_514; // 0x1fb JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x1fc PushV
	var_124_object = var_1_object; // 0x1fd MovT
	func_2331(var_124_object); // 0x1fe NEW_2
	if(var_123_bool == 0) goto Label_514; // 0x200 JumpB
	var_116_bool = 1; // 0x201 MovB
	
Label_514:
	if(var_116_bool == 0) goto Label_520; // 0x202 JumpB
	var_129_int = 518651; // 0x203 PushI
	var_130_int = 19744; // 0x204 PushI
	var_131_int = 19743; // 0x205 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x206 TObjFunc
	
Label_520:
	var_132_int = 518654; // 0x208 PushI
	var_133_int = -1; // 0x209 PushI
	var_134_int = 19746; // 0x20a PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x20b TObjFunc
	return 0; // 0x20d Return
	
Label_526:
	var_135_int = 19744; // 0x20e PushI
	var_136_bool = var_26_bool == var_135_int; // 0x20f Eq
	if(var_136_bool == 0) goto Label_554; // 0x210 JumpB
	var_137_string = ""; // 0x211 PushV
	var_137_string = "Rage"; // 0x212 MovS
	func_398(var_27_cvector, var_137_string); // 0x213 NEW_2
	var_138_int = 518652; // 0x215 PushI
	SetMessage(var_138_int); // 0x216 TObjFunc
	ClearReplies(); // 0x218 TObjFunc
	var_139_int = 518720; // 0x21a PushI
	var_140_int = 19815; // 0x21b PushI
	var_141_int = 19811; // 0x21c PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x21d TObjFunc
	var_142_int = 518722; // 0x21f PushI
	var_143_int = -1; // 0x220 PushI
	var_144_int = 19813; // 0x221 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x222 TObjFunc
	var_145_int = 518732; // 0x224 PushI
	var_146_int = -1; // 0x225 PushI
	var_147_int = 19824; // 0x226 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x227 TObjFunc
	return 0; // 0x229 Return
	
Label_554:
	var_148_int = 19815; // 0x22a PushI
	var_149_bool = var_26_bool == var_148_int; // 0x22b Eq
	if(var_149_bool == 0) goto Label_577; // 0x22c JumpB
	var_150_string = ""; // 0x22d PushV
	var_150_string = "Rage"; // 0x22e MovS
	func_398(var_27_cvector, var_150_string); // 0x22f NEW_2
	var_151_int = 518724; // 0x231 PushI
	SetMessage(var_151_int); // 0x232 TObjFunc
	ClearReplies(); // 0x234 TObjFunc
	var_152_int = 518725; // 0x236 PushI
	var_153_int = 19817; // 0x237 PushI
	var_154_int = 19816; // 0x238 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x239 TObjFunc
	var_155_int = 518727; // 0x23b PushI
	var_156_int = 19819; // 0x23c PushI
	var_157_int = 19818; // 0x23d PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x23e TObjFunc
	return 0; // 0x240 Return
	
Label_577:
	var_158_int = 19819; // 0x241 PushI
	var_159_bool = var_26_bool == var_158_int; // 0x242 Eq
	if(var_159_bool == 0) goto Label_595; // 0x243 JumpB
	var_160_string = ""; // 0x244 PushV
	var_160_string = "Adoration"; // 0x245 MovS
	func_398(var_27_cvector, var_160_string); // 0x246 NEW_2
	var_161_int = 518728; // 0x248 PushI
	SetMessage(var_161_int); // 0x249 TObjFunc
	ClearReplies(); // 0x24b TObjFunc
	var_162_int = 518729; // 0x24d PushI
	var_163_int = 19817; // 0x24e PushI
	var_164_int = 19820; // 0x24f PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_165_int = 19817; // 0x253 PushI
	var_166_bool = var_26_bool == var_165_int; // 0x254 Eq
	if(var_166_bool == 0) goto Label_618; // 0x255 JumpB
	var_167_string = ""; // 0x256 PushV
	var_167_string = "Adoration"; // 0x257 MovS
	func_398(var_27_cvector, var_167_string); // 0x258 NEW_2
	var_168_int = 518726; // 0x25a PushI
	SetMessage(var_168_int); // 0x25b TObjFunc
	ClearReplies(); // 0x25d TObjFunc
	var_169_int = 518730; // 0x25f PushI
	var_170_int = -1; // 0x260 PushI
	var_171_int = 19822; // 0x261 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x262 TObjFunc
	var_172_int = 518653; // 0x264 PushI
	var_173_int = -1; // 0x265 PushI
	var_174_int = 19745; // 0x266 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x267 TObjFunc
	return 0; // 0x269 Return
	
Label_618:
	var_175_int = 19740; // 0x26a PushI
	var_176_bool = var_26_bool == var_175_int; // 0x26b Eq
	if(var_176_bool == 0) goto Label_636; // 0x26c JumpB
	var_177_string = ""; // 0x26d PushV
	var_177_string = "Rage"; // 0x26e MovS
	func_398(var_27_cvector, var_177_string); // 0x26f NEW_2
	var_178_int = 518648; // 0x271 PushI
	SetMessage(var_178_int); // 0x272 TObjFunc
	ClearReplies(); // 0x274 TObjFunc
	var_179_int = 518649; // 0x276 PushI
	var_180_int = 19826; // 0x277 PushI
	var_181_int = 19741; // 0x278 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x279 TObjFunc
	return 0; // 0x27b Return
	
Label_636:
	var_182_int = 19826; // 0x27c PushI
	var_183_bool = var_26_bool == var_182_int; // 0x27d Eq
	if(var_183_bool == 0) goto Label_669; // 0x27e JumpB
	var_184_string = ""; // 0x27f PushV
	var_184_string = "Rage"; // 0x280 MovS
	func_398(var_27_cvector, var_184_string); // 0x281 NEW_2
	var_185_int = 518734; // 0x283 PushI
	SetMessage(var_185_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_186_int = 518735; // 0x288 PushI
	var_187_int = 19830; // 0x289 PushI
	var_188_int = 19827; // 0x28a PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x28b TObjFunc
	var_189_int = 518736; // 0x28d PushI
	var_190_int = 19829; // 0x28e PushI
	var_191_int = 19828; // 0x28f PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x290 TObjFunc
	var_192_bool = 0; var_193_object = Obj(); // 0x292 PushV
	var_193_object = var_1_object; // 0x293 MovT
	func_2307(var_193_object); // 0x294 NEW_2
	if(var_192_bool == 0) goto Label_668; // 0x296 JumpB
	var_194_int = 531552; // 0x297 PushI
	var_195_int = 19744; // 0x298 PushI
	var_196_int = 32915; // 0x299 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x29a TObjFunc
	
Label_668:
	return 0; // 0x29c Return
	
Label_669:
	var_197_int = 19829; // 0x29d PushI
	var_198_bool = var_26_bool == var_197_int; // 0x29e Eq
	if(var_198_bool == 0) goto Label_692; // 0x29f JumpB
	var_199_string = ""; // 0x2a0 PushV
	var_199_string = "Rage"; // 0x2a1 MovS
	func_398(var_27_cvector, var_199_string); // 0x2a2 NEW_2
	var_200_int = 518737; // 0x2a4 PushI
	SetMessage(var_200_int); // 0x2a5 TObjFunc
	ClearReplies(); // 0x2a7 TObjFunc
	var_201_int = 528296; // 0x2a9 PushI
	var_202_int = 29663; // 0x2aa PushI
	var_203_int = 29662; // 0x2ab PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x2ac TObjFunc
	var_204_int = 518742; // 0x2ae PushI
	var_205_int = -1; // 0x2af PushI
	var_206_int = 19834; // 0x2b0 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x2b1 TObjFunc
	return 0; // 0x2b3 Return
	
Label_692:
	var_207_int = 29663; // 0x2b4 PushI
	var_208_bool = var_26_bool == var_207_int; // 0x2b5 Eq
	if(var_208_bool == 0) goto Label_710; // 0x2b6 JumpB
	var_209_string = ""; // 0x2b7 PushV
	var_209_string = "Dream"; // 0x2b8 MovS
	func_398(var_27_cvector, var_209_string); // 0x2b9 NEW_2
	var_210_int = 528297; // 0x2bb PushI
	SetMessage(var_210_int); // 0x2bc TObjFunc
	ClearReplies(); // 0x2be TObjFunc
	var_211_int = 518741; // 0x2c0 PushI
	var_212_int = 19835; // 0x2c1 PushI
	var_213_int = 19833; // 0x2c2 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x2c3 TObjFunc
	return 0; // 0x2c5 Return
	
Label_710:
	var_214_int = 19835; // 0x2c6 PushI
	var_215_bool = var_26_bool == var_214_int; // 0x2c7 Eq
	if(var_215_bool == 0) goto Label_728; // 0x2c8 JumpB
	var_216_string = ""; // 0x2c9 PushV
	var_216_string = "Dream"; // 0x2ca MovS
	func_398(var_27_cvector, var_216_string); // 0x2cb NEW_2
	var_217_int = 518743; // 0x2cd PushI
	SetMessage(var_217_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_218_int = 518744; // 0x2d2 PushI
	var_219_int = 19837; // 0x2d3 PushI
	var_220_int = 19836; // 0x2d4 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x2d5 TObjFunc
	return 0; // 0x2d7 Return
	
Label_728:
	var_221_int = 19837; // 0x2d8 PushI
	var_222_bool = var_26_bool == var_221_int; // 0x2d9 Eq
	if(var_222_bool == 0) goto Label_751; // 0x2da JumpB
	var_223_string = ""; // 0x2db PushV
	var_223_string = "Dream"; // 0x2dc MovS
	func_398(var_27_cvector, var_223_string); // 0x2dd NEW_2
	var_224_int = 518745; // 0x2df PushI
	SetMessage(var_224_int); // 0x2e0 TObjFunc
	ClearReplies(); // 0x2e2 TObjFunc
	var_225_int = 518746; // 0x2e4 PushI
	var_226_int = -1; // 0x2e5 PushI
	var_227_int = 19838; // 0x2e6 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x2e7 TObjFunc
	var_228_int = 518747; // 0x2e9 PushI
	var_229_int = -1; // 0x2ea PushI
	var_230_int = 19839; // 0x2eb PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x2ec TObjFunc
	return 0; // 0x2ee Return
	
Label_751:
	var_231_int = 19830; // 0x2ef PushI
	var_232_bool = var_26_bool == var_231_int; // 0x2f0 Eq
	if(var_232_bool == 0) goto Label_774; // 0x2f1 JumpB
	var_233_string = ""; // 0x2f2 PushV
	var_233_string = "Adoration"; // 0x2f3 MovS
	func_398(var_27_cvector, var_233_string); // 0x2f4 NEW_2
	var_234_int = 518738; // 0x2f6 PushI
	SetMessage(var_234_int); // 0x2f7 TObjFunc
	ClearReplies(); // 0x2f9 TObjFunc
	var_235_int = 518739; // 0x2fb PushI
	var_236_int = -1; // 0x2fc PushI
	var_237_int = 19831; // 0x2fd PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x2fe TObjFunc
	var_238_int = 518740; // 0x300 PushI
	var_239_int = -1; // 0x301 PushI
	var_240_int = 19832; // 0x302 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x303 TObjFunc
	return 0; // 0x305 Return
	
Label_774:
	var_3_string = 1; // 0x306 TMovB
	var_241_bool = 0; // 0x307 PushV
	func_2237(var_241_bool); // 0x308 NEW_2
	if(var_241_bool == 0) goto Label_782; // 0x30a JumpB
	lshStopAnimation(); // 0x30b Func
	goto Label_784; // 0x30d Jump
	
Label_784:
	return 0; // 0x310 Return
	
Label_782:
	StopAnimation(); // 0x30e Func
	
Label_786:
	return 0; // 0x312 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3ba PushI
	if(var_28_int == 0) goto Label_1099; // 0x3bb JumpB
	func_2131(); // 0x3bd NEW_2
	var_30_int = 32175; // 0x3bf PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x3c0 Eq
	if(var_31_bool == 0) goto Label_967; // 0x3c1 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x3c2 PushV
	var_32_object = var_1_object; // 0x3c3 MovT
	var_33_object = var_0_object; // 0x3c4 MovT
	func_2267(); // 0x3c5 NEW_2
	
Label_967:
	var_36_int = 32173; // 0x3c7 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x3c8 Eq
	if(var_37_bool == 0) goto Label_995; // 0x3c9 JumpB
	var_38_string = ""; // 0x3ca PushV
	var_38_string = "Neutral"; // 0x3cb MovS
	func_931(var_27_cvector, var_38_string); // 0x3cc NEW_2
	var_55_int = 530857; // 0x3ce PushI
	SetMessage(var_55_int); // 0x3cf TObjFunc
	ClearReplies(); // 0x3d1 TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0x3d3 PushV
	var_57_object = var_1_object; // 0x3d4 MovT
	func_2283(var_57_object); // 0x3d5 NEW_2
	if(var_56_bool == 0) goto Label_989; // 0x3d7 JumpB
	var_64_int = 530859; // 0x3d8 PushI
	var_65_int = 32176; // 0x3d9 PushI
	var_66_int = 32175; // 0x3da PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x3db TObjFunc
	
Label_989:
	var_67_int = 530858; // 0x3dd PushI
	var_68_int = -1; // 0x3de PushI
	var_69_int = 32174; // 0x3df PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x3e0 TObjFunc
	return 0; // 0x3e2 Return
	
Label_995:
	var_70_int = 32176; // 0x3e3 PushI
	var_71_bool = var_26_bool == var_70_int; // 0x3e4 Eq
	if(var_71_bool == 0) goto Label_1018; // 0x3e5 JumpB
	var_72_string = ""; // 0x3e6 PushV
	var_72_string = "Fear"; // 0x3e7 MovS
	func_931(var_27_cvector, var_72_string); // 0x3e8 NEW_2
	var_73_int = 530860; // 0x3ea PushI
	SetMessage(var_73_int); // 0x3eb TObjFunc
	ClearReplies(); // 0x3ed TObjFunc
	var_74_int = 530861; // 0x3ef PushI
	var_75_int = 32179; // 0x3f0 PushI
	var_76_int = 32177; // 0x3f1 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x3f2 TObjFunc
	var_77_int = 530862; // 0x3f4 PushI
	var_78_int = 32185; // 0x3f5 PushI
	var_79_int = 32178; // 0x3f6 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x3f7 TObjFunc
	return 0; // 0x3f9 Return
	
Label_1018:
	var_80_int = 32179; // 0x3fa PushI
	var_81_bool = var_26_bool == var_80_int; // 0x3fb Eq
	if(var_81_bool == 0) goto Label_1041; // 0x3fc JumpB
	var_82_string = ""; // 0x3fd PushV
	var_82_string = "Fear"; // 0x3fe MovS
	func_931(var_27_cvector, var_82_string); // 0x3ff NEW_2
	var_83_int = 530863; // 0x401 PushI
	SetMessage(var_83_int); // 0x402 TObjFunc
	ClearReplies(); // 0x404 TObjFunc
	var_84_int = 530864; // 0x406 PushI
	var_85_int = 32182; // 0x407 PushI
	var_86_int = 32180; // 0x408 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x409 TObjFunc
	var_87_int = 530865; // 0x40b PushI
	var_88_int = 32185; // 0x40c PushI
	var_89_int = 32181; // 0x40d PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x40e TObjFunc
	return 0; // 0x410 Return
	
Label_1041:
	var_90_int = 32182; // 0x411 PushI
	var_91_bool = var_26_bool == var_90_int; // 0x412 Eq
	if(var_91_bool == 0) goto Label_1064; // 0x413 JumpB
	var_92_string = ""; // 0x414 PushV
	var_92_string = "Fear"; // 0x415 MovS
	func_931(var_27_cvector, var_92_string); // 0x416 NEW_2
	var_93_int = 530866; // 0x418 PushI
	SetMessage(var_93_int); // 0x419 TObjFunc
	ClearReplies(); // 0x41b TObjFunc
	var_94_int = 530867; // 0x41d PushI
	var_95_int = 32185; // 0x41e PushI
	var_96_int = 32183; // 0x41f PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x420 TObjFunc
	var_97_int = 530868; // 0x422 PushI
	var_98_int = 32185; // 0x423 PushI
	var_99_int = 32184; // 0x424 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x425 TObjFunc
	return 0; // 0x427 Return
	
Label_1064:
	var_100_int = 32185; // 0x428 PushI
	var_101_bool = var_26_bool == var_100_int; // 0x429 Eq
	if(var_101_bool == 0) goto Label_1087; // 0x42a JumpB
	var_102_string = ""; // 0x42b PushV
	var_102_string = "Fear"; // 0x42c MovS
	func_931(var_27_cvector, var_102_string); // 0x42d NEW_2
	var_103_int = 530870; // 0x42f PushI
	SetMessage(var_103_int); // 0x430 TObjFunc
	ClearReplies(); // 0x432 TObjFunc
	var_104_int = 530871; // 0x434 PushI
	var_105_int = -1; // 0x435 PushI
	var_106_int = 32189; // 0x436 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x437 TObjFunc
	var_107_int = 530872; // 0x439 PushI
	var_108_int = -1; // 0x43a PushI
	var_109_int = 32190; // 0x43b PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x43c TObjFunc
	return 0; // 0x43e Return
	
Label_1087:
	var_3_string = 1; // 0x43f TMovB
	var_110_bool = 0; // 0x440 PushV
	func_2237(var_110_bool); // 0x441 NEW_2
	if(var_110_bool == 0) goto Label_1095; // 0x443 JumpB
	lshStopAnimation(); // 0x444 Func
	goto Label_1097; // 0x446 Jump
	
Label_1097:
	return 0; // 0x449 Return
	
Label_1095:
	StopAnimation(); // 0x447 Func
	
Label_1099:
	return 0; // 0x44b Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x4f3 PushI
	if(var_28_int == 0) goto Label_1358; // 0x4f4 JumpB
	func_2131(); // 0x4f6 NEW_2
	var_30_int = 36971; // 0x4f8 PushI
	var_31_bool = var_26_bool == var_30_int; // 0x4f9 Eq
	if(var_31_bool == 0) goto Label_1300; // 0x4fa JumpB
	var_32_string = ""; // 0x4fb PushV
	var_32_string = "Neutral"; // 0x4fc MovS
	func_1244(var_27_cvector, var_32_string); // 0x4fd NEW_2
	var_49_int = 535294; // 0x4ff PushI
	SetMessage(var_49_int); // 0x500 TObjFunc
	ClearReplies(); // 0x502 TObjFunc
	var_50_int = 535295; // 0x504 PushI
	var_51_int = 36973; // 0x505 PushI
	var_52_int = 36972; // 0x506 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x507 TObjFunc
	var_53_int = 535302; // 0x509 PushI
	var_54_int = -1; // 0x50a PushI
	var_55_int = 36980; // 0x50b PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x50c TObjFunc
	var_56_int = 535303; // 0x50e PushI
	var_57_int = -1; // 0x50f PushI
	var_58_int = 36981; // 0x510 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_59_int = 36973; // 0x514 PushI
	var_60_bool = var_26_bool == var_59_int; // 0x515 Eq
	if(var_60_bool == 0) goto Label_1323; // 0x516 JumpB
	var_61_string = ""; // 0x517 PushV
	var_61_string = "Neutral"; // 0x518 MovS
	func_1244(var_27_cvector, var_61_string); // 0x519 NEW_2
	var_62_int = 535296; // 0x51b PushI
	SetMessage(var_62_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_63_int = 535297; // 0x520 PushI
	var_64_int = 36975; // 0x521 PushI
	var_65_int = 36974; // 0x522 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x523 TObjFunc
	var_66_int = 535301; // 0x525 PushI
	var_67_int = 36975; // 0x526 PushI
	var_68_int = 36978; // 0x527 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x528 TObjFunc
	return 0; // 0x52a Return
	
Label_1323:
	var_69_int = 36975; // 0x52b PushI
	var_70_bool = var_26_bool == var_69_int; // 0x52c Eq
	if(var_70_bool == 0) goto Label_1346; // 0x52d JumpB
	var_71_string = ""; // 0x52e PushV
	var_71_string = "Neutral"; // 0x52f MovS
	func_1244(var_27_cvector, var_71_string); // 0x530 NEW_2
	var_72_int = 535298; // 0x532 PushI
	SetMessage(var_72_int); // 0x533 TObjFunc
	ClearReplies(); // 0x535 TObjFunc
	var_73_int = 535299; // 0x537 PushI
	var_74_int = -1; // 0x538 PushI
	var_75_int = 36976; // 0x539 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x53a TObjFunc
	var_76_int = 535300; // 0x53c PushI
	var_77_int = -1; // 0x53d PushI
	var_78_int = 36977; // 0x53e PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x53f TObjFunc
	return 0; // 0x541 Return
	
Label_1346:
	var_3_string = 1; // 0x542 TMovB
	var_79_bool = 0; // 0x543 PushV
	func_2237(var_79_bool); // 0x544 NEW_2
	if(var_79_bool == 0) goto Label_1354; // 0x546 JumpB
	lshStopAnimation(); // 0x547 Func
	goto Label_1356; // 0x549 Jump
	
Label_1356:
	return 0; // 0x54c Return
	
Label_1354:
	StopAnimation(); // 0x54a Func
	
Label_1358:
	return 0; // 0x54e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x5f1 PushI
	if(var_28_int == 0) goto Label_1561; // 0x5f2 JumpB
	func_2131(); // 0x5f4 NEW_2
	var_30_int = 42560; // 0x5f6 PushI
	var_31_bool = var_26_int == var_30_int; // 0x5f7 Eq
	if(var_31_bool == 0) goto Label_1549; // 0x5f8 JumpB
	var_32_string = ""; // 0x5f9 PushV
	var_32_string = "Neutral"; // 0x5fa MovS
	func_1498(var_27_cvector, var_32_string); // 0x5fb NEW_2
	var_49_int = 540551; // 0x5fd PushI
	SetMessage(var_49_int); // 0x5fe TObjFunc
	ClearReplies(); // 0x600 TObjFunc
	var_50_int = 540552; // 0x602 PushI
	var_51_int = -1; // 0x603 PushI
	var_52_int = 42561; // 0x604 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x605 TObjFunc
	var_53_int = 540795; // 0x607 PushI
	var_54_int = -1; // 0x608 PushI
	var_55_int = 42844; // 0x609 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x60a TObjFunc
	return 0; // 0x60c Return
	
Label_1549:
	var_3_string = 1; // 0x60d TMovB
	var_56_bool = 0; // 0x60e PushV
	func_2237(var_56_bool); // 0x60f NEW_2
	if(var_56_bool == 0) goto Label_1557; // 0x611 JumpB
	lshStopAnimation(); // 0x612 Func
	goto Label_1559; // 0x614 Jump
	
Label_1559:
	return 0; // 0x617 Return
	
Label_1557:
	StopAnimation(); // 0x615 Func
	
Label_1561:
	return 0; // 0x619 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x667 PushI
	var_28_bool = var_26_int == var_27_int; // 0x668 Eq
	if(var_28_bool == 0) goto Label_1675; // 0x669 JumpB
	func_1634(); // 0x66b NEW_2
	var_30_bool = 0; // 0x66d PushV
	var_30_bool = 0; // 0x66e MovB
	var_31_bool = 0; // 0x66f PushV
	func_1855(var_31_bool); // 0x670 NEW_2
	if(var_31_bool == 0) goto Label_1656; // 0x672 JumpB
	var_34_bool = 0; // 0x673 PushV
	func_1603(var_34_bool); // 0x674 NEW_2
	if(var_34_bool == 0) goto Label_1656; // 0x676 JumpB
	var_30_bool = 1; // 0x677 MovB
	
Label_1656:
	if(var_30_bool == 0) goto Label_1669; // 0x678 JumpB
	var_51_bool = 0; // 0x679 PushV
	func_1583(var_51_bool); // 0x67a NEW_2
	if(var_51_bool == 0) goto Label_1668; // 0x67c JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x67d PushV
	var_72_object = Obj(); // 0x67e PushV
	func_2138(var_72_object); // 0x67f NEW_2
	var_71_object = var_72_object; // 0x680 Mov
	func_2005(var_71_object); // 0x682 NEW_2
	
Label_1668:
	goto Label_1675; // 0x684 Jump
	
Label_1675:
	return 0; // 0x68b Return
	
Label_1669:
	func_1598(var_26_int); // 0x686 NEW_2
	func_1625(); // 0x689 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1816(); // 0x68d NEW_2
	func_1634(); // 0x690 NEW_2
	lshStopSpeech(); // 0x692 Func
	lshStopAnimation(); // 0x694 Func
	StopAsync(); // 0x696 Func
	Hold(); // 0x698 Func
	return 0; // 0x69a Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x69b Func
	func_1634(); // 0x69e NEW_2
	var_27_string = ""; // 0x6a0 PushV
	var_27_string = "Neutral"; // 0x6a1 MovS
	func_2085(var_27_string); // 0x6a2 NEW_2
	func_1625(); // 0x6a5 NEW_2
	return 0; // 0x6a7 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6a9 Push
	if(var_27_bool == 0) goto Label_1711; // 0x6aa JumpB
	func_1625(); // 0x6ac NEW_2
	goto Label_1715; // 0x6ae Jump
	
Label_1715:
	return 0; // 0x6b3 Return
	
Label_1711:
	var_33_string = ""; // 0x6af PushV
	var_33_string = "Neutral"; // 0x6b0 MovS
	func_2085(var_33_string); // 0x6b1 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x6b4 PushV
	IsOverrideActive(var_28_bool); // 0x6b5 Func
	var_29_bool = var_28_bool == 0; // 0x6b7 Not
	if(var_29_bool == 0) goto Label_1744; // 0x6b8 JumpB
	EventDisable(0); // 0x6b9 EventDisable
	func_1816(); // 0x6bb NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x6bd PushV
	var_31_object = var_26_object; // 0x6be Mov
	func_1846(var_31_object); // 0x6bf NEW_2
	EventEnable(0); // 0x6c1 EventEnable
	var_44_object = Obj(); // 0x6c2 PushV
	var_44_object = var_26_object; // 0x6c3 Mov
	func_2360(var_44_object); // 0x6c4 NEW_2
	var_548_string = ""; // 0x6c6 PushV
	var_548_string = "Neutral"; // 0x6c7 MovS
	func_2085(var_548_string); // 0x6c8 NEW_2
	func_1634(); // 0x6cb NEW_2
	func_1625(); // 0x6ce NEW_2
	
Label_1744:
	return 2; // 0x6d0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	var_26_bool = GlobalVars[1]; // 0x61a PushGE
	var_26_bool = 0; // 0x61b MovB
	GlobalVars[1] = var_26_bool; // 0x61c PopGE
	func_1569(var_25_cvector); // 0x61e NEW_2
	return 0; // 0x620 Return
}


func_0(var_0_object, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x0 PushV
	var_0_object = var_48_object; // 0x1 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x2 PushV
	var_59_object = var_48_object; // 0x3 Mov
	var_60_float = 70.0; // 0x4 MovF
	func_1860(var_59_object, var_60_float); // 0x5 NEW_2
	var_105_bool = var_58_bool == 0; // 0x7 Not
	if(var_105_bool == 0) goto Label_11; // 0x8 JumpB
	var_47_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_54_object); // 0xb Func
	var_106_int = 0; // 0xd PushV
	func_2231(var_106_int); // 0xe NEW_2
	SetNPCName(var_106_int); // 0x10 ObjFunc
	var_107_int = 0; // 0x12 PushV
	func_2229(var_107_int); // 0x13 NEW_2
	SetNPCDescription(var_107_int); // 0x15 ObjFunc
	var_108_string = ""; // 0x17 PushV
	func_2233(var_108_string); // 0x18 NEW_2
	SetPhoto(var_108_string); // 0x1a ObjFunc
	var_109_string = ""; // 0x1c PushV
	func_2235(var_109_string); // 0x1d NEW_2
	SetPhoto2(var_109_string); // 0x1f ObjFunc
	var_110_int = 0; // 0x21 PushV
	func_2343(var_110_int); // 0x22 NEW_2
	SetPlayerName(var_110_int); // 0x24 ObjFunc
	var_56_int = -1; // 0x26 MovI
	IsOverrideActive(var_55_bool); // 0x27 Func
	var_118_bool = var_55_bool; // 0x29 Push
	if(var_118_bool == 0) goto Label_45; // 0x2a JumpB
	var_47_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_54_object); // 0x2d Func
	var_119_bool = 0; var_120_object = Obj(); // 0x2f PushV
	var_121_object = Obj(); // 0x30 PushV
	func_2138(var_121_object); // 0x31 NEW_2
	var_120_object = var_121_object; // 0x32 Mov
	func_1947(var_119_bool, var_120_object); // 0x34 NEW_2
	var_214_object = Obj(); var_215_object = Obj(); // 0x36 PushV
	var_214_object = var_48_object; // 0x37 Mov
	var_215_object = var_54_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_216_object, var_217_object, var_218_string, var_219_bool, var_214_object, var_215_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_57_bool); // 0x3d ObjFunc
	
Label_63:
	var_263_bool = var_57_bool == 0; // 0x3f Not
	if(var_263_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_57_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_264_object = Obj(); // 0x46 PushV
	var_264_object = var_48_object; // 0x47 Mov
	func_1929(); // 0x48 NEW_2
	StopDialog(var_54_object); // 0x4a Func
	GetReturnValue(var_56_int); // 0x4c ObjFunc
	var_47_int = var_56_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2307(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0x904 PushV
	var_338_string = "b5q01VeraDead"; // 0x905 MovS
	func_2154(var_337_int, var_338_string); // 0x906 NEW_2
	var_339_int = 0; // 0x908 PushI
	var_340_bool = var_337_int != var_339_int; // 0x909 Neq
	if(var_340_bool == 0) goto Label_2317; // 0x90a JumpB
	var_335_bool = 1; // 0x90b MovB
	return 0; // 0x90c Return
	
Label_2317:
	var_335_bool = 0; // 0x90d MovB
	return 0; // 0x90e Return
}


func_2319(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0x910 PushV
	var_328_string = "b5q01_1"; // 0x911 MovS
	func_2154(var_327_int, var_328_string); // 0x912 NEW_2
	var_329_int = 0; // 0x914 PushI
	var_330_bool = var_327_int == var_329_int; // 0x915 Eq
	if(var_330_bool == 0) goto Label_2329; // 0x916 JumpB
	var_325_bool = 1; // 0x917 MovB
	return 0; // 0x918 Return
	
Label_2329:
	var_325_bool = 0; // 0x919 MovB
	return 0; // 0x91a Return
}


func_787(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; // 0x313 PushV
	var_0_object = var_366_object; // 0x314 TMov
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0; // 0x315 PushV
	var_377_object = var_366_object; // 0x316 Mov
	var_378_float = 70.0; // 0x317 MovF
	func_1860(var_377_object, var_378_float); // 0x318 NEW_2
	var_379_bool = var_376_bool == 0; // 0x31a Not
	if(var_379_bool == 0) goto Label_798; // 0x31b JumpB
	var_365_int = -2; // 0x31c MovI
	return 8; // 0x31d Return
	
Label_798:
	CreateDialog(var_372_object); // 0x31e Func
	var_380_int = 0; // 0x320 PushV
	func_2231(var_380_int); // 0x321 NEW_2
	SetNPCName(var_380_int); // 0x323 ObjFunc
	var_381_int = 0; // 0x325 PushV
	func_2229(var_381_int); // 0x326 NEW_2
	SetNPCDescription(var_381_int); // 0x328 ObjFunc
	var_382_string = ""; // 0x32a PushV
	func_2233(var_382_string); // 0x32b NEW_2
	SetPhoto(var_382_string); // 0x32d ObjFunc
	var_383_string = ""; // 0x32f PushV
	func_2235(var_383_string); // 0x330 NEW_2
	SetPhoto2(var_383_string); // 0x332 ObjFunc
	var_384_int = 0; // 0x334 PushV
	func_2343(var_384_int); // 0x335 NEW_2
	SetPlayerName(var_384_int); // 0x337 ObjFunc
	var_374_int = -1; // 0x339 MovI
	IsOverrideActive(var_373_bool); // 0x33a Func
	var_385_bool = var_373_bool; // 0x33c Push
	if(var_385_bool == 0) goto Label_832; // 0x33d JumpB
	var_365_int = -2; // 0x33e MovI
	return 8; // 0x33f Return
	
Label_832:
	DoDialog(var_372_object); // 0x340 Func
	var_386_bool = 0; var_387_object = Obj(); // 0x342 PushV
	var_388_object = Obj(); // 0x343 PushV
	func_2138(var_388_object); // 0x344 NEW_2
	var_387_object = var_388_object; // 0x345 Mov
	func_1947(var_386_bool, var_387_object); // 0x347 NEW_2
	var_389_object = Obj(); var_390_object = Obj(); // 0x349 PushV
	var_389_object = var_366_object; // 0x34a Mov
	var_390_object = var_372_object; // 0x34b Mov
	TaskCall(5); // 0x34c TaskCall
	func_868(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object); // 0x34d NEW_2
	TaskReturn(); // 0x34e TaskReturn
	IsDialogEnd(var_375_bool); // 0x350 ObjFunc
	
Label_850:
	var_425_bool = var_375_bool == 0; // 0x352 Not
	if(var_425_bool == 0) goto Label_857; // 0x353 JumpB
	sync(); // 0x354 Func
	IsDialogEnd(var_375_bool); // 0x356 ObjFunc
	goto Label_850; // 0x358 Jump
	
Label_857:
	var_426_object = Obj(); // 0x359 PushV
	var_426_object = var_366_object; // 0x35a Mov
	func_1929(); // 0x35b NEW_2
	StopDialog(var_372_object); // 0x35d Func
	GetReturnValue(var_374_int); // 0x35f ObjFunc
	var_365_int = var_374_int; // 0x361 Mov
	return 8; // 0x362 Return
}


func_1814(var_65_bool)
{
	var_65_bool = 1; // 0x716 MovB
	return 0; // 0x717 Return
}


func_1816()
{
	StopAnimation(); // 0x718 Func
	StopGroup0(); // 0x71a Func
	return 0; // 0x71c Return
}


func_2331(var_341_bool)
{
	var_343_int = 0; var_344_string = ""; // 0x91c PushV
	var_344_string = "b5q01_1"; // 0x91d MovS
	func_2154(var_343_int, var_344_string); // 0x91e NEW_2
	var_345_int = 1; // 0x920 PushI
	var_346_bool = var_343_int == var_345_int; // 0x921 Eq
	if(var_346_bool == 0) goto Label_2341; // 0x922 JumpB
	var_341_bool = 1; // 0x923 MovB
	return 0; // 0x924 Return
	
Label_2341:
	var_341_bool = 0; // 0x925 MovB
	return 0; // 0x926 Return
}


func_1821(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x71d PushV
	GetPosition(var_46_cvector); // 0x71e Func
	GetPosition(var_47_cvector); // 0x720 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x722 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x723 Or2
	return 6; // 0x724 Return
}


func_1569(var_0_object)
{
	var_27_bool = 0; // 0x621 PushV
	func_1855(var_27_bool); // 0x622 NEW_2
	var_30_bool = var_27_bool == 0; // 0x624 Not
	if(var_30_bool == 0) goto Label_1576; // 0x625 JumpB
	Hold(); // 0x626 Func
	
Label_1576:
	GetDirection(var_0_object); // 0x628 Func
	
Label_1578:
	func_1745(); // 0x62b NEW_2
	goto Label_1578; // 0x62d Jump
}


func_2085(var_247_string)
{
	var_248_bool = 0; var_249_float = 0; var_250_float = 0; var_251_bool = 0; var_252_float = 0; var_253_float = 0; // 0x825 PushV
	lshHasAnimation(var_251_bool, var_247_string); // 0x826 Func
	var_254_bool = var_251_bool; // 0x828 Push
	if(var_254_bool == 0) goto Label_2096; // 0x829 JumpB
	lshGetAnimTimes(var_247_string, var_252_float, var_253_float); // 0x82a Func
	var_255_bool = 0; // 0x82c PushB
	lshPlayAnimation(var_252_float, var_253_float, var_255_bool); // 0x82d Func
	goto Label_2100; // 0x82f Jump
	
Label_2100:
	return 6; // 0x834 Return
	
Label_2096:
	var_256_string = "Can't find lsh animation : "; // 0x830 PushS
	var_257_int = var_256_string + var_247_string; // 0x831 Add
	Trace(var_257_int); // 0x832 Func
}


func_1829(var_50_string, var_51_int)
{
	var_52_int = 0; var_53_int = 0; // 0x725 PushV
	GetProperty(var_50_string, var_53_int); // 0x726 ObjFunc
	var_54_int = var_53_int + var_51_int; // 0x728 Add
	SetProperty(var_50_string, var_54_int); // 0x729 ObjFunc
	return 2; // 0x72b Return
}


func_2343(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0x927 PushV
	var_113_string = "branch"; // 0x928 PushS
	GetVariable(var_113_string, var_112_int); // 0x929 Func
	var_114_int = 0; // 0x92b PushI
	var_115_bool = var_112_int == var_114_int; // 0x92c Eq
	if(var_115_bool == 0) goto Label_2353; // 0x92d JumpB
	var_110_int = 1; // 0x92e MovI
	return 2; // 0x92f Return
	
Label_2353:
	var_116_int = 1; // 0x931 PushI
	var_117_bool = var_112_int == var_116_int; // 0x932 Eq
	if(var_117_bool == 0) goto Label_2358; // 0x933 JumpB
	var_110_int = 2; // 0x934 MovI
	return 2; // 0x935 Return
	
Label_2358:
	var_110_int = 3; // 0x936 MovI
	return 2; // 0x937 Return
}


func_1836(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x72c PushV
	GetPosition(var_39_cvector); // 0x72d Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x72f Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x730 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x731 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x732 Func
	var_34_bool = var_41_bool; // 0x734 Mov
	return 6; // 0x735 Return
}


func_1583(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x62f PushV
	var_54_string = "player"; // 0x630 PushS
	FindActor(var_53_object, var_54_string); // 0x631 Func
	var_55_bool = var_53_object == 0; // 0x633 Not
	if(var_55_bool == 0) goto Label_1591; // 0x634 JumpB
	var_51_bool = 0; // 0x635 MovB
	return 2; // 0x636 Return
	
Label_1591:
	var_56_bool = 0; var_57_object = Obj(); // 0x637 PushV
	var_57_object = var_53_object; // 0x638 Mov
	func_1846(var_57_object); // 0x639 NEW_2
	var_51_bool = var_56_bool; // 0x63a Mov
	return 2; // 0x63c Return
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_300_object, var_301_object)
{
	var_0_object = var_301_object; // 0x134 TMov
	var_1_object = var_300_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_306_int = 1; // 0x137 PushI
	if(var_306_int == 0) goto Label_368; // 0x138 JumpB
	var_307_string = ""; // 0x139 PushV
	var_307_string = "Fear"; // 0x13a MovS
	func_398(var_301_object, var_307_string); // 0x13b NEW_2
	var_315_int = 518646; // 0x13d PushI
	SetMessage(var_315_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_316_bool = 0; // 0x142 PushV
	var_316_bool = 0; // 0x143 MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x144 PushV
	var_318_object = var_1_object; // 0x145 MovT
	func_2295(var_318_object); // 0x146 NEW_2
	if(var_317_bool == 0) goto Label_335; // 0x148 JumpB
	var_325_bool = 0; var_326_object = Obj(); // 0x149 PushV
	var_326_object = var_1_object; // 0x14a MovT
	func_2319(var_326_object); // 0x14b NEW_2
	if(var_325_bool == 0) goto Label_335; // 0x14d JumpB
	var_316_bool = 1; // 0x14e MovB
	
Label_335:
	if(var_316_bool == 0) goto Label_341; // 0x14f JumpB
	var_331_int = 518647; // 0x150 PushI
	var_332_int = 19740; // 0x151 PushI
	var_333_int = 19739; // 0x152 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x153 TObjFunc
	
Label_341:
	var_334_bool = 0; // 0x155 PushV
	var_334_bool = 0; // 0x156 MovB
	var_335_bool = 0; var_336_object = Obj(); // 0x157 PushV
	var_336_object = var_1_object; // 0x158 MovT
	func_2307(var_336_object); // 0x159 NEW_2
	if(var_335_bool == 0) goto Label_354; // 0x15b JumpB
	var_341_bool = 0; var_342_object = Obj(); // 0x15c PushV
	var_342_object = var_1_object; // 0x15d MovT
	func_2331(var_342_object); // 0x15e NEW_2
	if(var_341_bool == 0) goto Label_354; // 0x160 JumpB
	var_334_bool = 1; // 0x161 MovB
	
Label_354:
	if(var_334_bool == 0) goto Label_360; // 0x162 JumpB
	var_347_int = 518651; // 0x163 PushI
	var_348_int = 19744; // 0x164 PushI
	var_349_int = 19743; // 0x165 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x166 TObjFunc
	
Label_360:
	var_350_int = 518654; // 0x168 PushI
	var_351_int = -1; // 0x169 PushI
	var_352_int = 19746; // 0x16a PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x16b TObjFunc
	goto Label_368; // 0x16d Jump
	
Label_368:
	var_353_bool = 0; // 0x170 PushV
	func_2237(var_353_bool); // 0x171 NEW_2
	if(var_353_bool == 0) goto Label_383; // 0x173 JumpB
	
Label_372:
	lshWaitForAnimEnd(); // 0x174 Func
	var_354_string = var_3_string; // 0x176 PushT
	if(var_354_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_382:
	goto Label_397; // 0x17e Jump
	
Label_397:
	return 0; // 0x18d Return
	
Label_377:
	var_355_string = ""; // 0x179 PushV
	var_355_string = var_2_object; // 0x17a MovT
	func_2085(var_355_string); // 0x17b NEW_2
	goto Label_372; // 0x17d Jump
	
Label_383:
	var_356_string = "all"; // 0x17f PushS
	var_357_string = "idle"; // 0x180 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x181 Func
	
Label_387:
	WaitForAnimEnd(); // 0x183 Func
	var_358_string = var_3_string; // 0x185 PushT
	if(var_358_string == 0) goto Label_392; // 0x186 JumpB
	goto Label_397; // 0x187 Jump
	
Label_392:
	var_359_string = "all"; // 0x188 PushS
	var_360_string = "idle"; // 0x189 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x18a Func
	goto Label_387; // 0x18c Jump
}


func_2101(var_225_string, var_226_bool)
{
	var_229_bool = 0; var_230_float = 0; var_231_float = 0; var_232_bool = 0; var_233_float = 0; var_234_float = 0; // 0x835 PushV
	lshHasAnimation(var_232_bool, var_225_string); // 0x836 Func
	var_235_bool = var_232_bool; // 0x838 Push
	if(var_235_bool == 0) goto Label_2111; // 0x839 JumpB
	lshGetAnimTimes(var_225_string, var_233_float, var_234_float); // 0x83a Func
	lshPlayAnimation(var_233_float, var_234_float, var_226_bool); // 0x83c Func
	goto Label_2115; // 0x83e Jump
	
Label_2115:
	return 6; // 0x843 Return
	
Label_2111:
	var_236_string = "Can't find lsh animation : "; // 0x83f PushS
	var_237_int = var_236_string + var_225_string; // 0x840 Add
	Trace(var_237_int); // 0x841 Func
}


func_1846(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x736 PushV
	GetPosition(var_33_cvector); // 0x737 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x739 PushV
	var_35_cvector = var_33_cvector; // 0x73a Mov
	func_1836(var_34_bool, var_35_cvector); // 0x73b NEW_2
	var_30_bool = var_34_bool; // 0x73c Mov
	return 2; // 0x73e Return
}


func_2360(var_44_object)
{
	var_45_bool = GlobalVars[1]; // 0x939 PushGE
	var_46_bool = var_45_bool == 0; // 0x93a Not
	if(var_46_bool == 0) goto Label_2373; // 0x93b JumpB
	var_47_int = 0; var_48_object = Obj(); // 0x93c PushV
	var_48_object = var_44_object; // 0x93d Mov
	TaskCall(0); // 0x93e TaskCall
	func_0(var_49_object, var_47_int, var_48_object); // 0x93f NEW_2
	TaskReturn(); // 0x940 TaskReturn
	var_272_bool = GlobalVars[1]; // 0x942 PushGE
	var_272_bool = 1; // 0x943 MovB
	GlobalVars[1] = var_272_bool; // 0x944 PopGE
	
Label_2373:
	var_273_bool = 0; var_274_int = 0; // 0x945 PushV
	var_274_int = 5; // 0x946 MovI
	func_2199(var_273_bool, var_274_int); // 0x947 NEW_2
	if(var_273_bool == 0) goto Label_2385; // 0x949 JumpB
	var_276_int = 0; var_277_object = Obj(); // 0x94a PushV
	var_277_object = var_44_object; // 0x94b Mov
	TaskCall(2); // 0x94c TaskCall
	func_226(var_278_object, var_276_int, var_277_object); // 0x94d NEW_2
	TaskReturn(); // 0x94e TaskReturn
	return 0; // 0x950 Return
	
Label_2385:
	var_363_bool = 0; var_364_int = 0; // 0x951 PushV
	var_364_int = 6; // 0x952 MovI
	func_2199(var_363_bool, var_364_int); // 0x953 NEW_2
	if(var_363_bool == 0) goto Label_2397; // 0x955 JumpB
	var_365_int = 0; var_366_object = Obj(); // 0x956 PushV
	var_366_object = var_44_object; // 0x957 Mov
	TaskCall(4); // 0x958 TaskCall
	func_787(var_367_object, var_365_int, var_366_object); // 0x959 NEW_2
	TaskReturn(); // 0x95a TaskReturn
	return 0; // 0x95c Return
	
Label_2397:
	var_427_bool = 0; // 0x95d PushV
	var_427_bool = 0; // 0x95e MovB
	var_428_bool = 0; var_429_int = 0; // 0x95f PushV
	var_429_int = 12; // 0x960 MovI
	func_2199(var_428_bool, var_429_int); // 0x961 NEW_2
	if(var_428_bool == 0) goto Label_2408; // 0x963 JumpB
	var_430_bool = GlobalVars[2]; // 0x964 PushGE
	var_431_bool = var_430_bool == 0; // 0x965 Not
	if(var_431_bool == 0) goto Label_2408; // 0x966 JumpB
	var_427_bool = 1; // 0x967 MovB
	
Label_2408:
	if(var_427_bool == 0) goto Label_2419; // 0x968 JumpB
	var_432_int = 0; var_433_object = Obj(); // 0x969 PushV
	var_433_object = var_44_object; // 0x96a Mov
	TaskCall(6); // 0x96b TaskCall
	func_1100(var_434_object, var_432_int, var_433_object); // 0x96c NEW_2
	TaskReturn(); // 0x96d TaskReturn
	var_491_bool = GlobalVars[2]; // 0x96f PushGE
	var_491_bool = 1; // 0x970 MovB
	GlobalVars[2] = var_491_bool; // 0x971 PopGE
	return 0; // 0x972 Return
	
Label_2419:
	var_492_int = 0; var_493_object = Obj(); // 0x973 PushV
	var_493_object = var_44_object; // 0x974 Mov
	TaskCall(8); // 0x975 TaskCall
	func_1359(var_494_object, var_492_int, var_493_object); // 0x976 NEW_2
	TaskReturn(); // 0x977 TaskReturn
	return 0; // 0x979 Return
}


func_1598(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x63e PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x63f PushE
	RotateAsync(var_103_float, var_104_float); // 0x640 Func
	return 0; // 0x642 Return
}


func_1855(var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; // 0x73f PushV
	IsLoaded(var_29_bool); // 0x740 Func
	var_27_bool = var_29_bool; // 0x742 Mov
	return 2; // 0x743 Return
}


func_1603(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x643 PushV
	var_39_string = "player"; // 0x644 PushS
	FindActor(var_37_object, var_39_string); // 0x645 Func
	var_40_bool = var_37_object == 0; // 0x647 Not
	if(var_40_bool == 0) goto Label_1611; // 0x648 JumpB
	var_34_bool = 0; // 0x649 MovB
	return 4; // 0x64a Return
	
Label_1611:
	var_41_float = 0; var_42_object = Obj(); // 0x64b PushV
	var_42_object = var_37_object; // 0x64c Mov
	func_1821(var_42_object); // 0x64d NEW_2
	var_49_float = 90000.0; // 0x64f PushF
	var_50_bool = var_41_float > var_49_float; // 0x650 GT
	if(var_50_bool == 0) goto Label_1620; // 0x651 JumpB
	var_34_bool = 0; // 0x652 MovB
	return 4; // 0x653 Return
	
Label_1620:
	CanSee(var_38_bool, var_37_object); // 0x654 Func
	var_34_bool = var_38_bool; // 0x656 Mov
	return 4; // 0x657 Return
}


func_1860(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0x744 PushV
	GetPosition(var_71_cvector); // 0x745 ObjFunc
	GetEyesHeight(var_70_float); // 0x747 ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0x749 PushE
	var_79_float = var_79_float + var_70_float; // 0x74a Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0x74b PopE
	GetPosition(var_72_cvector); // 0x74c Func
	GetEyesHeight(var_70_float); // 0x74e Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x750 PushE
	var_80_float = var_80_float + var_70_float; // 0x751 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x752 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0x753 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x754 PushE
	var_81_float = 0; // 0x755 MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x756 PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0x757 Or
	var_83_float = sqrt(var_82_int); // 0x758 Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0x759 Div2
	var_74_cvector = -var_73_cvector; // 0x75a Neg2
	var_84_float = var_73_cvector * var_60_float; // 0x75b Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x75c PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0x75d PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0x75e Xor2
	func_2144(var_85_cvector, var_86_cvector); // 0x75f NEW_2
	var_93_int = 25; // 0x761 PushI
	var_94_float = var_85_cvector * var_93_int; // 0x762 Mult
	var_95_int = var_84_float + var_94_float; // 0x763 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0x764 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0x765 Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0x766 Add2
	IsOverrideActive(var_77_bool); // 0x767 Func
	var_97_bool = var_77_bool; // 0x769 Push
	if(var_97_bool == 0) goto Label_1901; // 0x76a JumpB
	var_58_bool = 0; // 0x76b MovB
	return 18; // 0x76c Return
	
Label_1901:
	StopWorld(); // 0x76d Func
	var_98_bool = 1; // 0x76f PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0x770 Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0x772 PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0x773 PushE
	Rotate(var_99_float, var_100_float); // 0x774 Func
	var_101_bool = 0; // 0x776 PushV
	func_2237(var_101_bool); // 0x777 NEW_2
	if(var_101_bool == 0) goto Label_1915; // 0x779 JumpB
	goto Label_1923; // 0x77a Jump
	
Label_1923:
	CameraWaitForPlayFinish(); // 0x783 Func
	ResumeWorld(); // 0x785 Func
	var_58_bool = 1; // 0x787 MovB
	return 18; // 0x788 Return
	
Label_1915:
	var_102_string = "head"; // 0x77b PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0x77c Func
	var_103_bool = var_78_bool; // 0x77e Push
	if(var_103_bool == 0) goto Label_1923; // 0x77f JumpB
	var_104_string = "head"; // 0x780 PushS
	LookAsyncCamera(var_104_string); // 0x781 Func
}


func_2116(var_153_bool, var_154_string)
{
	var_155_bool = 0; var_156_bool = 0; // 0x844 PushV
	var_157_bool = 0; // 0x845 PushV
	func_2237(var_157_bool); // 0x846 NEW_2
	if(var_157_bool == 0) goto Label_2129; // 0x848 JumpB
	lshHasSpeech(var_156_bool, var_154_string); // 0x849 Func
	var_158_bool = var_156_bool; // 0x84b Push
	if(var_158_bool == 0) goto Label_2129; // 0x84c JumpB
	lshPlaySpeech(var_154_string); // 0x84d Func
	var_153_bool = 1; // 0x84f MovB
	return 2; // 0x850 Return
	
Label_2129:
	var_153_bool = 0; // 0x851 MovB
	return 2; // 0x852 Return
}


func_1100(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0; // 0x44c PushV
	var_0_object = var_433_object; // 0x44d TMov
	var_443_bool = 0; var_444_object = Obj(); var_445_float = 0; // 0x44e PushV
	var_444_object = var_433_object; // 0x44f Mov
	var_445_float = 70.0; // 0x450 MovF
	func_1860(var_444_object, var_445_float); // 0x451 NEW_2
	var_446_bool = var_443_bool == 0; // 0x453 Not
	if(var_446_bool == 0) goto Label_1111; // 0x454 JumpB
	var_432_int = -2; // 0x455 MovI
	return 8; // 0x456 Return
	
Label_1111:
	CreateDialog(var_439_object); // 0x457 Func
	var_447_int = 0; // 0x459 PushV
	func_2231(var_447_int); // 0x45a NEW_2
	SetNPCName(var_447_int); // 0x45c ObjFunc
	var_448_int = 0; // 0x45e PushV
	func_2229(var_448_int); // 0x45f NEW_2
	SetNPCDescription(var_448_int); // 0x461 ObjFunc
	var_449_string = ""; // 0x463 PushV
	func_2233(var_449_string); // 0x464 NEW_2
	SetPhoto(var_449_string); // 0x466 ObjFunc
	var_450_string = ""; // 0x468 PushV
	func_2235(var_450_string); // 0x469 NEW_2
	SetPhoto2(var_450_string); // 0x46b ObjFunc
	var_451_int = 0; // 0x46d PushV
	func_2343(var_451_int); // 0x46e NEW_2
	SetPlayerName(var_451_int); // 0x470 ObjFunc
	var_441_int = -1; // 0x472 MovI
	IsOverrideActive(var_440_bool); // 0x473 Func
	var_452_bool = var_440_bool; // 0x475 Push
	if(var_452_bool == 0) goto Label_1145; // 0x476 JumpB
	var_432_int = -2; // 0x477 MovI
	return 8; // 0x478 Return
	
Label_1145:
	DoDialog(var_439_object); // 0x479 Func
	var_453_bool = 0; var_454_object = Obj(); // 0x47b PushV
	var_455_object = Obj(); // 0x47c PushV
	func_2138(var_455_object); // 0x47d NEW_2
	var_454_object = var_455_object; // 0x47e Mov
	func_1947(var_453_bool, var_454_object); // 0x480 NEW_2
	var_456_object = Obj(); var_457_object = Obj(); // 0x482 PushV
	var_456_object = var_433_object; // 0x483 Mov
	var_457_object = var_439_object; // 0x484 Mov
	TaskCall(7); // 0x485 TaskCall
	func_1181(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object); // 0x486 NEW_2
	TaskReturn(); // 0x487 TaskReturn
	IsDialogEnd(var_442_bool); // 0x489 ObjFunc
	
Label_1163:
	var_489_bool = var_442_bool == 0; // 0x48b Not
	if(var_489_bool == 0) goto Label_1170; // 0x48c JumpB
	sync(); // 0x48d Func
	IsDialogEnd(var_442_bool); // 0x48f ObjFunc
	goto Label_1163; // 0x491 Jump
	
Label_1170:
	var_490_object = Obj(); // 0x492 PushV
	var_490_object = var_433_object; // 0x493 Mov
	func_1929(); // 0x494 NEW_2
	StopDialog(var_439_object); // 0x496 Func
	GetReturnValue(var_441_int); // 0x498 ObjFunc
	var_432_int = var_441_int; // 0x49a Mov
	return 8; // 0x49b Return
}


func_1359(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; // 0x54f PushV
	var_0_object = var_493_object; // 0x550 TMov
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0; // 0x551 PushV
	var_504_object = var_493_object; // 0x552 Mov
	var_505_float = 70.0; // 0x553 MovF
	func_1860(var_504_object, var_505_float); // 0x554 NEW_2
	var_506_bool = var_503_bool == 0; // 0x556 Not
	if(var_506_bool == 0) goto Label_1370; // 0x557 JumpB
	var_492_int = -2; // 0x558 MovI
	return 8; // 0x559 Return
	
Label_1370:
	CreateDialog(var_499_object); // 0x55a Func
	var_507_int = 0; // 0x55c PushV
	func_2231(var_507_int); // 0x55d NEW_2
	SetNPCName(var_507_int); // 0x55f ObjFunc
	var_508_int = 0; // 0x561 PushV
	func_2229(var_508_int); // 0x562 NEW_2
	SetNPCDescription(var_508_int); // 0x564 ObjFunc
	var_509_string = ""; // 0x566 PushV
	func_2233(var_509_string); // 0x567 NEW_2
	SetPhoto(var_509_string); // 0x569 ObjFunc
	var_510_string = ""; // 0x56b PushV
	func_2235(var_510_string); // 0x56c NEW_2
	SetPhoto2(var_510_string); // 0x56e ObjFunc
	var_511_int = 0; // 0x570 PushV
	func_2343(var_511_int); // 0x571 NEW_2
	SetPlayerName(var_511_int); // 0x573 ObjFunc
	var_501_int = -1; // 0x575 MovI
	IsOverrideActive(var_500_bool); // 0x576 Func
	var_512_bool = var_500_bool; // 0x578 Push
	if(var_512_bool == 0) goto Label_1404; // 0x579 JumpB
	var_492_int = -2; // 0x57a MovI
	return 8; // 0x57b Return
	
Label_1404:
	DoDialog(var_499_object); // 0x57c Func
	var_513_bool = 0; var_514_object = Obj(); // 0x57e PushV
	var_515_object = Obj(); // 0x57f PushV
	func_2138(var_515_object); // 0x580 NEW_2
	var_514_object = var_515_object; // 0x581 Mov
	func_1947(var_513_bool, var_514_object); // 0x583 NEW_2
	var_516_object = Obj(); var_517_object = Obj(); // 0x585 PushV
	var_516_object = var_493_object; // 0x586 Mov
	var_517_object = var_499_object; // 0x587 Mov
	TaskCall(9); // 0x588 TaskCall
	func_1440(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object); // 0x589 NEW_2
	TaskReturn(); // 0x58a TaskReturn
	IsDialogEnd(var_502_bool); // 0x58c ObjFunc
	
Label_1422:
	var_546_bool = var_502_bool == 0; // 0x58e Not
	if(var_546_bool == 0) goto Label_1429; // 0x58f JumpB
	sync(); // 0x590 Func
	IsDialogEnd(var_502_bool); // 0x592 ObjFunc
	goto Label_1422; // 0x594 Jump
	
Label_1429:
	var_547_object = Obj(); // 0x595 PushV
	var_547_object = var_493_object; // 0x596 Mov
	func_1929(); // 0x597 NEW_2
	StopDialog(var_499_object); // 0x599 Func
	GetReturnValue(var_501_int); // 0x59b ObjFunc
	var_492_int = var_501_int; // 0x59d Mov
	return 8; // 0x59e Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_214_object, var_215_object)
{
	var_0_object = var_215_object; // 0x52 TMov
	var_1_object = var_214_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_220_int = 1; // 0x55 PushI
	if(var_220_int == 0) goto Label_109; // 0x56 JumpB
	var_221_string = ""; // 0x57 PushV
	var_221_string = "Neutral"; // 0x58 MovS
	func_139(var_215_object, var_221_string); // 0x59 NEW_2
	var_238_int = 517997; // 0x5b PushI
	SetMessage(var_238_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_239_int = 517998; // 0x60 PushI
	var_240_int = 29658; // 0x61 PushI
	var_241_int = 19131; // 0x62 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x63 TObjFunc
	var_242_int = 528292; // 0x65 PushI
	var_243_int = 29658; // 0x66 PushI
	var_244_int = 29657; // 0x67 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_245_bool = 0; // 0x6d PushV
	func_2237(var_245_bool); // 0x6e NEW_2
	if(var_245_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_246_string = var_3_string; // 0x73 PushT
	if(var_246_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_247_string = ""; // 0x76 PushV
	var_247_string = var_2_object; // 0x77 MovT
	func_2085(var_247_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_258_string = "all"; // 0x7c PushS
	var_259_string = "idle"; // 0x7d PushS
	PlayAnimation(var_258_string, var_259_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_260_string = var_3_string; // 0x82 PushT
	if(var_260_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_261_string = "all"; // 0x85 PushS
	var_262_string = "idle"; // 0x86 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2131()
{
	var_29_bool = 0; // 0x853 PushV
	func_2237(var_29_bool); // 0x854 NEW_2
	if(var_29_bool == 0) goto Label_2137; // 0x856 JumpB
	lshStopSpeech(); // 0x857 Func
	
Label_2137:
	return 0; // 0x859 Return
}


func_1625()
{
	var_550_float = 0; var_551_float = 0; // 0x659 PushV
	var_552_int = 8; // 0x65a PushI
	var_553_int = 16; // 0x65b PushI
	rand(var_551_float, var_552_int, var_553_int); // 0x65c Func
	var_554_int = 10; // 0x65e PushI
	SetTimer(var_554_int, var_551_float); // 0x65f Func
	return 2; // 0x661 Return
}


func_2138(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); // 0x85a PushV
	self(var_123_object); // 0x85b Func
	var_121_object = var_123_object; // 0x85d Mov
	return 2; // 0x85e Return
}


func_2144(var_85_cvector, var_86_cvector)
{
	var_88_float = 0; var_89_float = 0; // 0x860 PushV
	var_90_int = var_86_cvector | var_86_cvector; // 0x861 Or
	var_89_float = sqrt(var_90_int); // 0x862 Sqrt2
	var_91_float = 0.0; // 0x863 PushF
	var_92_bool = var_89_float < var_91_float; // 0x864 LT
	if(var_92_bool == 0) goto Label_2152; // 0x865 JumpB
	var_85_cvector = CVector(0.0, 0.0, 0.0); // 0x866 MovV
	return 2; // 0x867 Return
	
Label_2152:
	var_85_cvector = var_86_cvector / var_86_cvector; // 0x868 Div2
	return 2; // 0x869 Return
}


func_1634()
{
	var_549_int = 10; // 0x662 PushI
	KillTimer(var_549_int); // 0x663 Func
	return 0; // 0x665 Return
}


func_868(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object; // 0x365 TMov
	var_1_object = var_389_object; // 0x366 TMov
	var_3_string = 0; // 0x367 TMovB
	var_395_int = 1; // 0x368 PushI
	if(var_395_int == 0) goto Label_901; // 0x369 JumpB
	var_396_string = ""; // 0x36a PushV
	var_396_string = "Neutral"; // 0x36b MovS
	func_931(var_390_object, var_396_string); // 0x36c NEW_2
	var_404_int = 530857; // 0x36e PushI
	SetMessage(var_404_int); // 0x36f TObjFunc
	ClearReplies(); // 0x371 TObjFunc
	var_405_bool = 0; var_406_object = Obj(); // 0x373 PushV
	var_406_object = var_1_object; // 0x374 MovT
	func_2283(var_406_object); // 0x375 NEW_2
	if(var_405_bool == 0) goto Label_893; // 0x377 JumpB
	var_411_int = 530859; // 0x378 PushI
	var_412_int = 32176; // 0x379 PushI
	var_413_int = 32175; // 0x37a PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x37b TObjFunc
	
Label_893:
	var_414_int = 530858; // 0x37d PushI
	var_415_int = -1; // 0x37e PushI
	var_416_int = 32174; // 0x37f PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x380 TObjFunc
	goto Label_901; // 0x382 Jump
	
Label_901:
	var_417_bool = 0; // 0x385 PushV
	func_2237(var_417_bool); // 0x386 NEW_2
	if(var_417_bool == 0) goto Label_916; // 0x388 JumpB
	
Label_905:
	lshWaitForAnimEnd(); // 0x389 Func
	var_418_string = var_3_string; // 0x38b PushT
	if(var_418_string == 0) goto Label_910; // 0x38c JumpB
	goto Label_915; // 0x38d Jump
	
Label_915:
	goto Label_930; // 0x393 Jump
	
Label_930:
	return 0; // 0x3a2 Return
	
Label_910:
	var_419_string = ""; // 0x38e PushV
	var_419_string = var_2_object; // 0x38f MovT
	func_2085(var_419_string); // 0x390 NEW_2
	goto Label_905; // 0x392 Jump
	
Label_916:
	var_420_string = "all"; // 0x394 PushS
	var_421_string = "idle"; // 0x395 PushS
	PlayAnimation(var_420_string, var_421_string); // 0x396 Func
	
Label_920:
	WaitForAnimEnd(); // 0x398 Func
	var_422_string = var_3_string; // 0x39a PushT
	if(var_422_string == 0) goto Label_925; // 0x39b JumpB
	goto Label_930; // 0x39c Jump
	
Label_925:
	var_423_string = "all"; // 0x39d PushS
	var_424_string = "idle"; // 0x39e PushS
	PlayAnimation(var_423_string, var_424_string); // 0x39f Func
	goto Label_920; // 0x3a1 Jump
}


func_2154(var_319_int, var_320_string)
{
	var_321_int = 0; var_322_int = 0; // 0x86a PushV
	GetVariable(var_320_string, var_322_int); // 0x86b Func
	var_319_int = var_322_int; // 0x86d Mov
	return 2; // 0x86e Return
}


func_2159(var_58_int, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x86f PushV
	CreateIntVector(var_61_object); // 0x870 Func
	add(var_58_int); // 0x872 ObjFunc
	add(var_59_int); // 0x874 ObjFunc
	var_62_int = 3; // 0x876 PushI
	SendWorldWndMessage(var_62_int, var_61_object); // 0x877 Func
	return 2; // 0x879 Return
}


func_2171(var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x87b PushV
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0; // 0x87c PushV
	var_49_object = var_45_object; // 0x87d Mov
	var_50_string = "money"; // 0x87e MovS
	var_51_int = var_46_int; // 0x87f Mov
	func_1829(var_50_string, var_51_int); // 0x880 NEW_2
	var_55_int = 0; // 0x882 PushI
	var_56_bool = var_46_int > var_55_int; // 0x883 GT
	if(var_56_bool == 0) goto Label_2189; // 0x884 JumpB
	var_57_string = "Money"; // 0x885 PushS
	GetInvItemByName(var_48_int, var_57_string); // 0x886 Func
	var_58_int = 0; var_59_int = 0; // 0x888 PushV
	var_58_int = var_48_int; // 0x889 Mov
	var_59_int = var_46_int; // 0x88a Mov
	func_2159(var_58_int, var_59_int); // 0x88b NEW_2
	
Label_2189:
	return 2; // 0x88d Return
}


func_1929()
{
	var_265_bool = 0; var_266_bool = 0; // 0x789 PushV
	var_267_bool = 1; // 0x78a PushB
	CameraSwitchToNormal(var_267_bool); // 0x78b Func
	var_268_bool = 0; // 0x78d PushV
	func_2237(var_268_bool); // 0x78e NEW_2
	if(var_268_bool == 0) goto Label_1938; // 0x790 JumpB
	goto Label_1946; // 0x791 Jump
	
Label_1946:
	return 2; // 0x79a Return
	
Label_1938:
	var_269_string = "head"; // 0x792 PushS
	HasAnimationTrack(var_266_bool, var_269_string); // 0x793 Func
	var_270_bool = var_266_bool; // 0x795 Push
	if(var_270_bool == 0) goto Label_1946; // 0x796 JumpB
	var_271_string = "head"; // 0x797 PushS
	UnlookAsync(var_271_string); // 0x798 Func
}


func_139(var_2_object, var_221_string)
{
	var_222_bool = 0; // 0x8c PushV
	func_2237(var_222_bool); // 0x8d NEW_2
	var_223_bool = var_222_bool == 0; // 0x8f Not
	if(var_223_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_224_bool = var_221_string == var_2_object; // 0x92 Eq
	if(var_224_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_225_string = ""; var_226_bool = 0; // 0x95 PushV
	var_225_string = var_221_string; // 0x96 Mov
	var_227_string = ""; // 0x97 PushS
	var_228_bool = var_221_string == var_227_string; // 0x98 Eq
	if(var_228_bool == 0) goto Label_156; // 0x99 JumpB
	var_226_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2101(var_225_string, var_226_bool); // 0x9d NEW_2
	var_2_object = var_221_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_226_bool = 1; // 0x9c MovB
}


func_398(var_2_object, var_307_string)
{
	var_308_bool = 0; // 0x18f PushV
	func_2237(var_308_bool); // 0x190 NEW_2
	var_309_bool = var_308_bool == 0; // 0x192 Not
	if(var_309_bool == 0) goto Label_405; // 0x193 JumpB
	return 0; // 0x194 Return
	
Label_405:
	var_310_bool = var_307_string == var_2_object; // 0x195 Eq
	if(var_310_bool == 0) goto Label_408; // 0x196 JumpB
	return 0; // 0x197 Return
	
Label_408:
	var_311_string = ""; var_312_bool = 0; // 0x198 PushV
	var_311_string = var_307_string; // 0x199 Mov
	var_313_string = ""; // 0x19a PushS
	var_314_bool = var_307_string == var_313_string; // 0x19b Eq
	if(var_314_bool == 0) goto Label_415; // 0x19c JumpB
	var_312_bool = 0; // 0x19d MovB
	goto Label_416; // 0x19e Jump
	
Label_416:
	func_2101(var_311_string, var_312_bool); // 0x1a0 NEW_2
	var_2_object = var_307_string; // 0x1a2 TMov
	return 0; // 0x1a3 Return
	
Label_415:
	var_312_bool = 1; // 0x19f MovB
}


func_2190(var_174_int)
{
	var_175_float = 0; var_176_float = 0; // 0x88e PushV
	GetGameTime(var_176_float); // 0x88f Func
	var_177_int = 1; // 0x891 PushI
	var_178_int = 0; // 0x892 PushV
	var_179_int = 24; // 0x893 PushI
	var_178_int = var_176_float / var_176_float; // 0x894 Div2
	var_174_int = var_177_int + var_178_int; // 0x895 Add2
	return 2; // 0x896 Return
}


func_2199(var_273_bool, var_274_int)
{
	var_275_int = 0; // 0x898 PushV
	func_2190(var_275_int); // 0x899 NEW_2
	var_273_bool = var_275_int == var_274_int; // 0x89b Eq2
	return 0; // 0x89c Return
}


func_1947(var_119_bool, var_120_object)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0x79b PushV
	var_128_string = "voice_common"; // 0x79c PushS
	GetVariable(var_128_string, var_126_int); // 0x79d Func
	var_129_int = var_126_int; // 0x79f Push
	if(var_129_int == 0) goto Label_1985; // 0x7a0 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x7a1 PushV
	var_131_object = var_120_object; // 0x7a2 Mov
	func_2005(var_131_object); // 0x7a3 NEW_2
	var_160_bool = var_130_bool == 0; // 0x7a5 Not
	if(var_160_bool == 0) goto Label_1967; // 0x7a6 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x7a7 PushV
	var_162_object = var_120_object; // 0x7a8 Mov
	func_2042(var_162_object); // 0x7a9 NEW_2
	var_196_bool = var_161_bool == 0; // 0x7ab Not
	if(var_196_bool == 0) goto Label_1967; // 0x7ac JumpB
	var_119_bool = 0; // 0x7ad MovB
	return 4; // 0x7ae Return
	
Label_1967:
	var_197_int = 2; // 0x7af PushI
	irand(var_127_int, var_197_int); // 0x7b0 Func
	var_198_int = var_127_int; // 0x7b2 Push
	if(var_198_int == 0) goto Label_1980; // 0x7b3 JumpB
	var_199_string = "voice_common"; // 0x7b4 PushS
	var_200_int = 1; // 0x7b5 PushI
	var_201_int = var_126_int + var_200_int; // 0x7b6 Add
	var_202_int = 3; // 0x7b7 PushI
	var_203_int = var_201_int / var_202_int; // 0x7b8 Mod
	SetVariable(var_199_string, var_203_int); // 0x7b9 Func
	goto Label_1984; // 0x7bb Jump
	
Label_1984:
	goto Label_2003; // 0x7c0 Jump
	
Label_2003:
	var_119_bool = 1; // 0x7d3 MovB
	return 4; // 0x7d4 Return
	
Label_1980:
	var_204_string = "voice_common"; // 0x7bc PushS
	var_205_int = 0; // 0x7bd PushI
	SetVariable(var_204_string, var_205_int); // 0x7be Func
	
Label_1985:
	var_206_bool = 0; var_207_object = Obj(); // 0x7c1 PushV
	var_207_object = var_120_object; // 0x7c2 Mov
	func_2042(var_207_object); // 0x7c3 NEW_2
	var_208_bool = var_206_bool == 0; // 0x7c5 Not
	if(var_208_bool == 0) goto Label_1999; // 0x7c6 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x7c7 PushV
	var_210_object = var_120_object; // 0x7c8 Mov
	func_2005(var_210_object); // 0x7c9 NEW_2
	var_211_bool = var_209_bool == 0; // 0x7cb Not
	if(var_211_bool == 0) goto Label_1999; // 0x7cc JumpB
	var_119_bool = 0; // 0x7cd MovB
	return 4; // 0x7ce Return
	
Label_1999:
	var_212_string = "voice_common"; // 0x7cf PushS
	var_213_int = 1; // 0x7d0 PushI
	SetVariable(var_212_string, var_213_int); // 0x7d1 Func
}


func_2205(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0x89d PushV
	var_54_string = "idle"; // 0x89e MovS
	var_55_int = var_52_int; // 0x89f Push
	if(var_55_int == 0) goto Label_2210; // 0x8a0 JumpB
	var_54_string = var_54_string + var_52_int; // 0x8a1 Add2
	
Label_2210:
	var_51_string = var_54_string; // 0x8a2 Mov
	return 2; // 0x8a3 Return
}


func_1181(var_0_object, var_1_object, var_2_object, var_3_string, var_456_object, var_457_object)
{
	var_0_object = var_457_object; // 0x49e TMov
	var_1_object = var_456_object; // 0x49f TMov
	var_3_string = 0; // 0x4a0 TMovB
	var_462_int = 1; // 0x4a1 PushI
	if(var_462_int == 0) goto Label_1214; // 0x4a2 JumpB
	var_463_string = ""; // 0x4a3 PushV
	var_463_string = "Neutral"; // 0x4a4 MovS
	func_1244(var_457_object, var_463_string); // 0x4a5 NEW_2
	var_471_int = 535294; // 0x4a7 PushI
	SetMessage(var_471_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_472_int = 535295; // 0x4ac PushI
	var_473_int = 36973; // 0x4ad PushI
	var_474_int = 36972; // 0x4ae PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x4af TObjFunc
	var_475_int = 535302; // 0x4b1 PushI
	var_476_int = -1; // 0x4b2 PushI
	var_477_int = 36980; // 0x4b3 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x4b4 TObjFunc
	var_478_int = 535303; // 0x4b6 PushI
	var_479_int = -1; // 0x4b7 PushI
	var_480_int = 36981; // 0x4b8 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x4b9 TObjFunc
	goto Label_1214; // 0x4bb Jump
	
Label_1214:
	var_481_bool = 0; // 0x4be PushV
	func_2237(var_481_bool); // 0x4bf NEW_2
	if(var_481_bool == 0) goto Label_1229; // 0x4c1 JumpB
	
Label_1218:
	lshWaitForAnimEnd(); // 0x4c2 Func
	var_482_string = var_3_string; // 0x4c4 PushT
	if(var_482_string == 0) goto Label_1223; // 0x4c5 JumpB
	goto Label_1228; // 0x4c6 Jump
	
Label_1228:
	goto Label_1243; // 0x4cc Jump
	
Label_1243:
	return 0; // 0x4db Return
	
Label_1223:
	var_483_string = ""; // 0x4c7 PushV
	var_483_string = var_2_object; // 0x4c8 MovT
	func_2085(var_483_string); // 0x4c9 NEW_2
	goto Label_1218; // 0x4cb Jump
	
Label_1229:
	var_484_string = "all"; // 0x4cd PushS
	var_485_string = "idle"; // 0x4ce PushS
	PlayAnimation(var_484_string, var_485_string); // 0x4cf Func
	
Label_1233:
	WaitForAnimEnd(); // 0x4d1 Func
	var_486_string = var_3_string; // 0x4d3 PushT
	if(var_486_string == 0) goto Label_1238; // 0x4d4 JumpB
	goto Label_1243; // 0x4d5 Jump
	
Label_1238:
	var_487_string = "all"; // 0x4d6 PushS
	var_488_string = "idle"; // 0x4d7 PushS
	PlayAnimation(var_487_string, var_488_string); // 0x4d8 Func
	goto Label_1233; // 0x4da Jump
}


func_1440(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object; // 0x5a1 TMov
	var_1_object = var_516_object; // 0x5a2 TMov
	var_3_string = 0; // 0x5a3 TMovB
	var_522_int = 1; // 0x5a4 PushI
	if(var_522_int == 0) goto Label_1468; // 0x5a5 JumpB
	var_523_string = ""; // 0x5a6 PushV
	var_523_string = "Neutral"; // 0x5a7 MovS
	func_1498(var_517_object, var_523_string); // 0x5a8 NEW_2
	var_531_int = 540551; // 0x5aa PushI
	SetMessage(var_531_int); // 0x5ab TObjFunc
	ClearReplies(); // 0x5ad TObjFunc
	var_532_int = 540552; // 0x5af PushI
	var_533_int = -1; // 0x5b0 PushI
	var_534_int = 42561; // 0x5b1 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x5b2 TObjFunc
	var_535_int = 540795; // 0x5b4 PushI
	var_536_int = -1; // 0x5b5 PushI
	var_537_int = 42844; // 0x5b6 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x5b7 TObjFunc
	goto Label_1468; // 0x5b9 Jump
	
Label_1468:
	var_538_bool = 0; // 0x5bc PushV
	func_2237(var_538_bool); // 0x5bd NEW_2
	if(var_538_bool == 0) goto Label_1483; // 0x5bf JumpB
	
Label_1472:
	lshWaitForAnimEnd(); // 0x5c0 Func
	var_539_string = var_3_string; // 0x5c2 PushT
	if(var_539_string == 0) goto Label_1477; // 0x5c3 JumpB
	goto Label_1482; // 0x5c4 Jump
	
Label_1482:
	goto Label_1497; // 0x5ca Jump
	
Label_1497:
	return 0; // 0x5d9 Return
	
Label_1477:
	var_540_string = ""; // 0x5c5 PushV
	var_540_string = var_2_object; // 0x5c6 MovT
	func_2085(var_540_string); // 0x5c7 NEW_2
	goto Label_1472; // 0x5c9 Jump
	
Label_1483:
	var_541_string = "all"; // 0x5cb PushS
	var_542_string = "idle"; // 0x5cc PushS
	PlayAnimation(var_541_string, var_542_string); // 0x5cd Func
	
Label_1487:
	WaitForAnimEnd(); // 0x5cf Func
	var_543_string = var_3_string; // 0x5d1 PushT
	if(var_543_string == 0) goto Label_1492; // 0x5d2 JumpB
	goto Label_1497; // 0x5d3 Jump
	
Label_1492:
	var_544_string = "all"; // 0x5d4 PushS
	var_545_string = "idle"; // 0x5d5 PushS
	PlayAnimation(var_544_string, var_545_string); // 0x5d6 Func
	goto Label_1487; // 0x5d8 Jump
}


func_931(var_2_object, var_396_string)
{
	var_397_bool = 0; // 0x3a4 PushV
	func_2237(var_397_bool); // 0x3a5 NEW_2
	var_398_bool = var_397_bool == 0; // 0x3a7 Not
	if(var_398_bool == 0) goto Label_938; // 0x3a8 JumpB
	return 0; // 0x3a9 Return
	
Label_938:
	var_399_bool = var_396_string == var_2_object; // 0x3aa Eq
	if(var_399_bool == 0) goto Label_941; // 0x3ab JumpB
	return 0; // 0x3ac Return
	
Label_941:
	var_400_string = ""; var_401_bool = 0; // 0x3ad PushV
	var_400_string = var_396_string; // 0x3ae Mov
	var_402_string = ""; // 0x3af PushS
	var_403_bool = var_396_string == var_402_string; // 0x3b0 Eq
	if(var_403_bool == 0) goto Label_948; // 0x3b1 JumpB
	var_401_bool = 0; // 0x3b2 MovB
	goto Label_949; // 0x3b3 Jump
	
Label_949:
	func_2101(var_400_string, var_401_bool); // 0x3b5 NEW_2
	var_2_object = var_396_string; // 0x3b7 TMov
	return 0; // 0x3b8 Return
	
Label_948:
	var_401_bool = 1; // 0x3b4 MovB
}


func_2212(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x8a4 PushV
	var_48_int = 0; // 0x8a5 MovI
	
Label_2214:
	var_50_string = "all"; // 0x8a6 PushS
	var_51_string = ""; var_52_int = 0; // 0x8a7 PushV
	var_52_int = var_48_int; // 0x8a8 Mov
	func_2205(var_51_string, var_52_int); // 0x8a9 NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0x8ab Func
	var_56_bool = var_49_bool == 0; // 0x8ad Not
	if(var_56_bool == 0) goto Label_2224; // 0x8ae JumpB
	goto Label_2227; // 0x8af Jump
	
Label_2227:
	var_45_int = var_48_int; // 0x8b3 Mov
	return 4; // 0x8b4 Return
	
Label_2224:
	var_57_int = 1; // 0x8b0 PushI
	var_48_int = var_48_int + var_57_int; // 0x8b1 Add2
	goto Label_2214; // 0x8b2 Jump
}


func_2229(var_107_int)
{
	var_107_int = 515530; // 0x8b5 MovI
	return 0; // 0x8b6 Return
}


func_2231(var_106_int)
{
	var_106_int = 502856; // 0x8b7 MovI
	return 0; // 0x8b8 Return
}


func_2233(var_108_string)
{
	var_108_string = "ui/NPC_Anna.png"; // 0x8b9 MovS
	return 0; // 0x8ba Return
}


func_2235(var_109_string)
{
	var_109_string = "ui/NPC_Anna_b.png"; // 0x8bb MovS
	return 0; // 0x8bc Return
}


func_2237(var_101_bool)
{
	var_101_bool = 1; // 0x8bd MovB
	return 0; // 0x8be Return
}


func_2239()
{
	var_34_string = "b5q01_1"; // 0x8c0 PushS
	var_35_int = 1; // 0x8c1 PushI
	SetVariable(var_34_string, var_35_int); // 0x8c2 Func
	return 0; // 0x8c4 Return
}


func_2245()
{
	var_40_string = "b5q01_1"; // 0x8c6 PushS
	var_41_int = 1000; // 0x8c7 PushI
	SetVariable(var_40_string, var_41_int); // 0x8c8 Func
	return 0; // 0x8ca Return
}


func_2251(var_42_object)
{
	var_44_string = "money10000 is given"; // 0x8cc PushS
	Trace(var_44_string); // 0x8cd Func
	var_45_object = Obj(); var_46_int = 0; // 0x8cf PushV
	var_45_object = var_42_object; // 0x8d0 Mov
	var_46_int = 10000; // 0x8d1 MovI
	func_2171(var_45_object, var_46_int); // 0x8d2 NEW_2
	return 0; // 0x8d4 Return
}


func_1745()
{
	var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; // 0x6d1 PushV
	WaitForAnimEnd(); // 0x6d2 Func
	var_43_bool = 0; // 0x6d4 PushV
	func_1855(var_43_bool); // 0x6d5 NEW_2
	var_44_bool = var_43_bool == 0; // 0x6d7 Not
	if(var_44_bool == 0) goto Label_1754; // 0x6d8 JumpB
	return 12; // 0x6d9 Return
	
Label_1754:
	var_45_int = 0; // 0x6da PushV
	func_2212(var_45_int); // 0x6db NEW_2
	var_37_int = var_45_int; // 0x6dc Mov
	var_38_int = 0; // 0x6de MovI
	
Label_1759:
	var_58_bool = 0; // 0x6df PushV
	var_58_bool = 0; // 0x6e0 MovB
	var_59_int = 5; // 0x6e1 PushI
	var_60_bool = var_38_int < var_59_int; // 0x6e2 LT
	if(var_60_bool == 0) goto Label_1769; // 0x6e3 JumpB
	var_61_bool = 0; // 0x6e4 PushV
	func_1855(var_61_bool); // 0x6e5 NEW_2
	if(var_61_bool == 0) goto Label_1769; // 0x6e7 JumpB
	var_58_bool = 1; // 0x6e8 MovB
	
Label_1769:
	if(var_58_bool == 0) goto Label_1811; // 0x6e9 JumpB
	var_62_bool = var_37_int == 0; // 0x6ea Not
	if(var_62_bool == 0) goto Label_1779; // 0x6eb JumpB
	var_63_int = 3; // 0x6ec PushI
	Sleep(var_63_int, var_39_bool); // 0x6ed Func
	var_64_bool = var_39_bool == 0; // 0x6ef Not
	if(var_64_bool == 0) goto Label_1778; // 0x6f0 JumpB
	goto Label_1811; // 0x6f1 Jump
	
Label_1811:
	ResetAAS(); // 0x713 Func
	return 12; // 0x715 Return
	
Label_1778:
	goto Label_1800; // 0x6f2 Jump
	
Label_1800:
	var_65_bool = 0; // 0x708 PushV
	func_1814(var_65_bool); // 0x709 NEW_2
	var_66_bool = var_65_bool == 0; // 0x70b Not
	if(var_66_bool == 0) goto Label_1806; // 0x70c JumpB
	goto Label_1811; // 0x70d Jump
	
Label_1806:
	ResetAAS(); // 0x70e Func
	var_67_int = 1; // 0x710 PushI
	var_38_int = var_38_int + var_67_int; // 0x711 Add2
	goto Label_1759; // 0x712 Jump
	
Label_1779:
	irand(var_40_int, var_37_int); // 0x6f3 Func
	var_68_int = 5; // 0x6f5 PushI
	irand(var_41_int, var_68_int); // 0x6f6 Func
	var_69_int = 0; // 0x6f8 PushI
	var_70_bool = var_41_int != var_69_int; // 0x6f9 Neq
	if(var_70_bool == 0) goto Label_1788; // 0x6fa JumpB
	var_40_int = 0; // 0x6fb MovI
	
Label_1788:
	var_71_string = "all"; // 0x6fc PushS
	var_72_string = ""; var_73_int = 0; // 0x6fd PushV
	var_73_int = var_40_int; // 0x6fe Mov
	func_2205(var_72_string, var_73_int); // 0x6ff NEW_2
	PlayAnimation(var_71_string, var_72_string); // 0x701 Func
	WaitForAnimEnd(var_42_bool); // 0x703 Func
	var_74_bool = var_42_bool == 0; // 0x705 Not
	if(var_74_bool == 0) goto Label_1800; // 0x706 JumpB
	goto Label_1811; // 0x707 Jump
}


func_2261()
{
	var_65_string = "playsound"; // 0x8d6 PushS
	var_66_string = "givemoney"; // 0x8d7 PushS
	TriggerWorld(var_65_string, var_66_string); // 0x8d8 Func
	return 0; // 0x8da Return
}


func_2005(var_130_bool)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; // 0x7d5 PushV
	var_137_string = "c"; // 0x7d6 MovS
	var_138_int = 0; // 0x7d7 MovI
	
Label_2008:
	var_142_int = 1; // 0x7d8 PushI
	if(var_142_int == 0) goto Label_2021; // 0x7d9 JumpB
	var_143_int = 1; // 0x7da PushI
	var_144_int = var_138_int + var_143_int; // 0x7db Add
	var_145_int = var_137_string + var_144_int; // 0x7dc Add
	HasProperty(var_145_int, var_139_bool); // 0x7dd ObjFunc
	var_146_bool = var_139_bool == 0; // 0x7df Not
	if(var_146_bool == 0) goto Label_2018; // 0x7e0 JumpB
	goto Label_2021; // 0x7e1 Jump
	
Label_2021:
	var_147_bool = var_138_int == 0; // 0x7e5 Not
	if(var_147_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_130_bool = 0; // 0x7e7 MovB
	return 10; // 0x7e8 Return
	
Label_2025:
	var_140_int = 0; // 0x7e9 MovI
	var_148_int = 1; // 0x7ea PushI
	var_149_bool = var_138_int > var_148_int; // 0x7eb GT
	if(var_149_bool == 0) goto Label_2031; // 0x7ec JumpB
	irand(var_140_int, var_138_int); // 0x7ed Func
	
Label_2031:
	var_150_int = 1; // 0x7ef PushI
	var_151_int = var_140_int + var_150_int; // 0x7f0 Add
	var_152_int = var_137_string + var_151_int; // 0x7f1 Add
	GetProperty(var_152_int, var_141_string); // 0x7f2 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x7f4 PushV
	var_154_string = var_141_string; // 0x7f5 Mov
	func_2116(var_153_bool, var_154_string); // 0x7f6 NEW_2
	var_130_bool = var_153_bool; // 0x7f7 Mov
	return 10; // 0x7f9 Return
	
Label_2018:
	var_159_int = 1; // 0x7e2 PushI
	var_138_int = var_138_int + var_159_int; // 0x7e3 Add2
	goto Label_2008; // 0x7e4 Jump
}


func_1498(var_2_object, var_523_string)
{
	var_524_bool = 0; // 0x5db PushV
	func_2237(var_524_bool); // 0x5dc NEW_2
	var_525_bool = var_524_bool == 0; // 0x5de Not
	if(var_525_bool == 0) goto Label_1505; // 0x5df JumpB
	return 0; // 0x5e0 Return
	
Label_1505:
	var_526_bool = var_523_string == var_2_object; // 0x5e1 Eq
	if(var_526_bool == 0) goto Label_1508; // 0x5e2 JumpB
	return 0; // 0x5e3 Return
	
Label_1508:
	var_527_string = ""; var_528_bool = 0; // 0x5e4 PushV
	var_527_string = var_523_string; // 0x5e5 Mov
	var_529_string = ""; // 0x5e6 PushS
	var_530_bool = var_523_string == var_529_string; // 0x5e7 Eq
	if(var_530_bool == 0) goto Label_1515; // 0x5e8 JumpB
	var_528_bool = 0; // 0x5e9 MovB
	goto Label_1516; // 0x5ea Jump
	
Label_1516:
	func_2101(var_527_string, var_528_bool); // 0x5ec NEW_2
	var_2_object = var_523_string; // 0x5ee TMov
	return 0; // 0x5ef Return
	
Label_1515:
	var_528_bool = 1; // 0x5eb MovB
}


func_2267()
{
	var_34_string = "oob6Anna1"; // 0x8dc PushS
	var_35_int = 1; // 0x8dd PushI
	SetVariable(var_34_string, var_35_int); // 0x8de Func
	return 0; // 0x8e0 Return
}


func_1244(var_2_object, var_463_string)
{
	var_464_bool = 0; // 0x4dd PushV
	func_2237(var_464_bool); // 0x4de NEW_2
	var_465_bool = var_464_bool == 0; // 0x4e0 Not
	if(var_465_bool == 0) goto Label_1251; // 0x4e1 JumpB
	return 0; // 0x4e2 Return
	
Label_1251:
	var_466_bool = var_463_string == var_2_object; // 0x4e3 Eq
	if(var_466_bool == 0) goto Label_1254; // 0x4e4 JumpB
	return 0; // 0x4e5 Return
	
Label_1254:
	var_467_string = ""; var_468_bool = 0; // 0x4e6 PushV
	var_467_string = var_463_string; // 0x4e7 Mov
	var_469_string = ""; // 0x4e8 PushS
	var_470_bool = var_463_string == var_469_string; // 0x4e9 Eq
	if(var_470_bool == 0) goto Label_1261; // 0x4ea JumpB
	var_468_bool = 0; // 0x4eb MovB
	goto Label_1262; // 0x4ec Jump
	
Label_1262:
	func_2101(var_467_string, var_468_bool); // 0x4ee NEW_2
	var_2_object = var_463_string; // 0x4f0 TMov
	return 0; // 0x4f1 Return
	
Label_1261:
	var_468_bool = 1; // 0x4ed MovB
}


func_2273(var_71_object)
{
	var_73_string = "money3000 is given"; // 0x8e2 PushS
	Trace(var_73_string); // 0x8e3 Func
	var_74_object = Obj(); var_75_int = 0; // 0x8e5 PushV
	var_74_object = var_71_object; // 0x8e6 Mov
	var_75_int = 3000; // 0x8e7 MovI
	func_2171(var_74_object, var_75_int); // 0x8e8 NEW_2
	return 0; // 0x8ea Return
}


func_226(var_0_object, var_276_int, var_277_object)
{
	var_279_object = Obj(); var_280_bool = 0; var_281_int = 0; var_282_bool = 0; var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0; // 0xe2 PushV
	var_0_object = var_277_object; // 0xe3 TMov
	var_287_bool = 0; var_288_object = Obj(); var_289_float = 0; // 0xe4 PushV
	var_288_object = var_277_object; // 0xe5 Mov
	var_289_float = 70.0; // 0xe6 MovF
	func_1860(var_288_object, var_289_float); // 0xe7 NEW_2
	var_290_bool = var_287_bool == 0; // 0xe9 Not
	if(var_290_bool == 0) goto Label_237; // 0xea JumpB
	var_276_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_283_object); // 0xed Func
	var_291_int = 0; // 0xef PushV
	func_2231(var_291_int); // 0xf0 NEW_2
	SetNPCName(var_291_int); // 0xf2 ObjFunc
	var_292_int = 0; // 0xf4 PushV
	func_2229(var_292_int); // 0xf5 NEW_2
	SetNPCDescription(var_292_int); // 0xf7 ObjFunc
	var_293_string = ""; // 0xf9 PushV
	func_2233(var_293_string); // 0xfa NEW_2
	SetPhoto(var_293_string); // 0xfc ObjFunc
	var_294_string = ""; // 0xfe PushV
	func_2235(var_294_string); // 0xff NEW_2
	SetPhoto2(var_294_string); // 0x101 ObjFunc
	var_295_int = 0; // 0x103 PushV
	func_2343(var_295_int); // 0x104 NEW_2
	SetPlayerName(var_295_int); // 0x106 ObjFunc
	var_285_int = -1; // 0x108 MovI
	IsOverrideActive(var_284_bool); // 0x109 Func
	var_296_bool = var_284_bool; // 0x10b Push
	if(var_296_bool == 0) goto Label_271; // 0x10c JumpB
	var_276_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_283_object); // 0x10f Func
	var_297_bool = 0; var_298_object = Obj(); // 0x111 PushV
	var_299_object = Obj(); // 0x112 PushV
	func_2138(var_299_object); // 0x113 NEW_2
	var_298_object = var_299_object; // 0x114 Mov
	func_1947(var_297_bool, var_298_object); // 0x116 NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0x118 PushV
	var_300_object = var_277_object; // 0x119 Mov
	var_301_object = var_283_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_302_object, var_303_object, var_304_string, var_305_bool, var_300_object, var_301_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_286_bool); // 0x11f ObjFunc
	
Label_289:
	var_361_bool = var_286_bool == 0; // 0x121 Not
	if(var_361_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_286_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_362_object = Obj(); // 0x128 PushV
	var_362_object = var_277_object; // 0x129 Mov
	func_1929(); // 0x12a NEW_2
	StopDialog(var_283_object); // 0x12c Func
	GetReturnValue(var_285_int); // 0x12e ObjFunc
	var_276_int = var_285_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_2283(var_405_bool)
{
	var_407_int = 0; var_408_string = ""; // 0x8ec PushV
	var_408_string = "oob6Anna1"; // 0x8ed MovS
	func_2154(var_407_int, var_408_string); // 0x8ee NEW_2
	var_409_int = 0; // 0x8f0 PushI
	var_410_bool = var_407_int == var_409_int; // 0x8f1 Eq
	if(var_410_bool == 0) goto Label_2293; // 0x8f2 JumpB
	var_405_bool = 1; // 0x8f3 MovB
	return 0; // 0x8f4 Return
	
Label_2293:
	var_405_bool = 0; // 0x8f5 MovB
	return 0; // 0x8f6 Return
}


func_2295(var_317_bool)
{
	var_319_int = 0; var_320_string = ""; // 0x8f8 PushV
	var_320_string = "b5q01TalkToVera"; // 0x8f9 MovS
	func_2154(var_319_int, var_320_string); // 0x8fa NEW_2
	var_323_int = 1; // 0x8fc PushI
	var_324_bool = var_319_int == var_323_int; // 0x8fd Eq
	if(var_324_bool == 0) goto Label_2305; // 0x8fe JumpB
	var_317_bool = 1; // 0x8ff MovB
	return 0; // 0x900 Return
	
Label_2305:
	var_317_bool = 0; // 0x901 MovB
	return 0; // 0x902 Return
}


func_2042(var_161_bool)
{
	var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; // 0x7fa PushV
	var_173_string = "d"; // 0x7fb PushS
	var_174_int = 0; // 0x7fc PushV
	func_2190(var_174_int); // 0x7fd NEW_2
	var_180_int = var_173_string + var_174_int; // 0x7ff Add
	var_181_string = "m"; // 0x800 PushS
	var_168_string = var_180_int + var_181_string; // 0x801 Add2
	var_169_int = 0; // 0x802 MovI
	
Label_2051:
	var_182_int = 1; // 0x803 PushI
	if(var_182_int == 0) goto Label_2064; // 0x804 JumpB
	var_183_int = 1; // 0x805 PushI
	var_184_int = var_169_int + var_183_int; // 0x806 Add
	var_185_int = var_168_string + var_184_int; // 0x807 Add
	HasProperty(var_185_int, var_170_bool); // 0x808 ObjFunc
	var_186_bool = var_170_bool == 0; // 0x80a Not
	if(var_186_bool == 0) goto Label_2061; // 0x80b JumpB
	goto Label_2064; // 0x80c Jump
	
Label_2064:
	var_187_bool = var_169_int == 0; // 0x810 Not
	if(var_187_bool == 0) goto Label_2068; // 0x811 JumpB
	var_161_bool = 0; // 0x812 MovB
	return 10; // 0x813 Return
	
Label_2068:
	var_171_int = 0; // 0x814 MovI
	var_188_int = 1; // 0x815 PushI
	var_189_bool = var_169_int > var_188_int; // 0x816 GT
	if(var_189_bool == 0) goto Label_2074; // 0x817 JumpB
	irand(var_171_int, var_169_int); // 0x818 Func
	
Label_2074:
	var_190_int = 1; // 0x81a PushI
	var_191_int = var_171_int + var_190_int; // 0x81b Add
	var_192_int = var_168_string + var_191_int; // 0x81c Add
	GetProperty(var_192_int, var_172_string); // 0x81d ObjFunc
	var_193_bool = 0; var_194_string = ""; // 0x81f PushV
	var_194_string = var_172_string; // 0x820 Mov
	func_2116(var_193_bool, var_194_string); // 0x821 NEW_2
	var_161_bool = var_193_bool; // 0x822 Mov
	return 10; // 0x824 Return
	
Label_2061:
	var_195_int = 1; // 0x80d PushI
	var_169_int = var_169_int + var_195_int; // 0x80e Add2
	goto Label_2051; // 0x80f Jump
}


