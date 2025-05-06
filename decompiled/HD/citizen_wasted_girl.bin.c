task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_4122(var_23_bool); // 0x1c NEW_2
	if(var_23_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 1; // 0x185 PushI
	if(var_24_int == 0) goto Label_909; // 0x186 JumpB
	func_3191(); // 0x188 NEW_2
	var_26_int = 45802; // 0x18a PushI
	var_27_bool = var_22_cvector == var_26_int; // 0x18b Eq
	if(var_27_bool == 0) goto Label_611; // 0x18c JumpB
	var_28_bool = 0; // 0x18d PushV
	var_28_bool = 0; // 0x18e MovB
	var_29_bool = 0; // 0x18f PushV
	var_29_bool = 0; // 0x190 MovB
	var_30_bool = 0; // 0x191 PushV
	var_30_bool = 0; // 0x192 MovB
	var_31_bool = 0; // 0x193 PushV
	var_31_bool = 0; // 0x194 MovB
	var_32_bool = 0; var_33_object = Obj(); // 0x195 PushV
	var_33_object = var_1_object; // 0x196 MovT
	func_3325(var_33_object); // 0x197 NEW_2
	if(var_32_bool == 0) goto Label_417; // 0x199 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x19a PushV
	var_41_object = var_1_object; // 0x19b MovT
	func_3337(var_40_bool, var_41_object); // 0x19c NEW_2
	var_51_bool = var_40_bool == 0; // 0x19e Not
	if(var_51_bool == 0) goto Label_417; // 0x19f JumpB
	var_31_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_31_bool == 0) goto Label_425; // 0x1a1 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0x1a2 PushV
	var_53_object = var_1_object; // 0x1a3 MovT
	func_3347(var_52_bool, var_53_object); // 0x1a4 NEW_2
	var_58_bool = var_52_bool == 0; // 0x1a6 Not
	if(var_58_bool == 0) goto Label_425; // 0x1a7 JumpB
	var_30_bool = 1; // 0x1a8 MovB
	
Label_425:
	if(var_30_bool == 0) goto Label_433; // 0x1a9 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x1aa PushV
	var_60_object = var_1_object; // 0x1ab MovT
	func_3357(var_59_bool, var_60_object); // 0x1ac NEW_2
	var_65_bool = var_59_bool == 0; // 0x1ae Not
	if(var_65_bool == 0) goto Label_433; // 0x1af JumpB
	var_29_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_29_bool == 0) goto Label_441; // 0x1b1 JumpB
	var_66_bool = 0; var_67_object = Obj(); // 0x1b2 PushV
	var_67_object = var_1_object; // 0x1b3 MovT
	func_3367(var_66_bool, var_67_object); // 0x1b4 NEW_2
	var_72_bool = var_66_bool == 0; // 0x1b6 Not
	if(var_72_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_28_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_28_bool == 0) goto Label_462; // 0x1b9 JumpB
	var_73_string = ""; // 0x1ba PushV
	var_73_string = "Neutral"; // 0x1bb MovS
	func_366(var_23_bool, var_73_string); // 0x1bc NEW_2
	var_90_int = 543344; // 0x1be PushI
	SetMessage(var_90_int); // 0x1bf TObjFunc
	ClearReplies(); // 0x1c1 TObjFunc
	var_91_int = 543362; // 0x1c3 PushI
	var_92_int = 45824; // 0x1c4 PushI
	var_93_int = 45822; // 0x1c5 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x1c6 TObjFunc
	var_94_int = 543361; // 0x1c8 PushI
	var_95_int = -1; // 0x1c9 PushI
	var_96_int = 45821; // 0x1ca PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_97_bool = 0; var_98_object = Obj(); // 0x1ce PushV
	var_98_object = var_1_object; // 0x1cf MovT
	func_3325(var_98_object); // 0x1d0 NEW_2
	if(var_97_bool == 0) goto Label_577; // 0x1d2 JumpB
	var_99_string = ""; // 0x1d3 PushV
	var_99_string = "Neutral"; // 0x1d4 MovS
	func_366(var_23_bool, var_99_string); // 0x1d5 NEW_2
	var_100_int = 543343; // 0x1d7 PushI
	SetMessage(var_100_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_101_bool = 0; // 0x1dc PushV
	var_101_bool = 1; // 0x1dd MovB
	var_102_bool = 0; var_103_object = Obj(); // 0x1de PushV
	var_103_object = var_1_object; // 0x1df MovT
	func_3337(var_102_bool, var_103_object); // 0x1e0 NEW_2
	if(var_102_bool == 0) goto Label_489; // 0x1e2 JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x1e3 PushV
	var_105_object = var_1_object; // 0x1e4 MovT
	func_3347(var_104_bool, var_105_object); // 0x1e5 NEW_2
	if(var_104_bool == 0) goto Label_489; // 0x1e7 JumpB
	var_101_bool = 0; // 0x1e8 MovB
	
Label_489:
	if(var_101_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_106_int = 543349; // 0x1ea PushI
	var_107_int = 45804; // 0x1eb PushI
	var_108_int = 45807; // 0x1ec PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x1ed TObjFunc
	
Label_495:
	var_109_bool = 0; // 0x1ef PushV
	var_109_bool = 1; // 0x1f0 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x1f1 PushV
	var_111_object = var_1_object; // 0x1f2 MovT
	func_3337(var_110_bool, var_111_object); // 0x1f3 NEW_2
	if(var_110_bool == 0) goto Label_508; // 0x1f5 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x1f6 PushV
	var_113_object = var_1_object; // 0x1f7 MovT
	func_3347(var_112_bool, var_113_object); // 0x1f8 NEW_2
	if(var_112_bool == 0) goto Label_508; // 0x1fa JumpB
	var_109_bool = 0; // 0x1fb MovB
	
Label_508:
	if(var_109_bool == 0) goto Label_514; // 0x1fc JumpB
	var_114_int = 543345; // 0x1fd PushI
	var_115_int = 45804; // 0x1fe PushI
	var_116_int = 45803; // 0x1ff PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x200 TObjFunc
	
Label_514:
	var_117_bool = 0; // 0x202 PushV
	var_117_bool = 1; // 0x203 MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x204 PushV
	var_119_object = var_1_object; // 0x205 MovT
	func_3357(var_118_bool, var_119_object); // 0x206 NEW_2
	if(var_118_bool == 0) goto Label_527; // 0x208 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x209 PushV
	var_121_object = var_1_object; // 0x20a MovT
	func_3367(var_120_bool, var_121_object); // 0x20b NEW_2
	if(var_120_bool == 0) goto Label_527; // 0x20d JumpB
	var_117_bool = 0; // 0x20e MovB
	
Label_527:
	if(var_117_bool == 0) goto Label_533; // 0x20f JumpB
	var_122_int = 543347; // 0x210 PushI
	var_123_int = 45806; // 0x211 PushI
	var_124_int = 45805; // 0x212 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x213 TObjFunc
	
Label_533:
	var_125_bool = 0; // 0x215 PushV
	var_125_bool = 1; // 0x216 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x217 PushV
	var_127_object = var_1_object; // 0x218 MovT
	func_3357(var_126_bool, var_127_object); // 0x219 NEW_2
	if(var_126_bool == 0) goto Label_546; // 0x21b JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x21c PushV
	var_129_object = var_1_object; // 0x21d MovT
	func_3367(var_128_bool, var_129_object); // 0x21e NEW_2
	if(var_128_bool == 0) goto Label_546; // 0x220 JumpB
	var_125_bool = 0; // 0x221 MovB
	
Label_546:
	if(var_125_bool == 0) goto Label_552; // 0x222 JumpB
	var_130_int = 543357; // 0x223 PushI
	var_131_int = 45806; // 0x224 PushI
	var_132_int = 45816; // 0x225 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x226 TObjFunc
	
Label_552:
	var_133_bool = 0; // 0x228 PushV
	var_133_bool = 1; // 0x229 MovB
	var_134_bool = 0; var_135_object = Obj(); // 0x22a PushV
	var_135_object = var_1_object; // 0x22b MovT
	func_3357(var_134_bool, var_135_object); // 0x22c NEW_2
	if(var_134_bool == 0) goto Label_565; // 0x22e JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x22f PushV
	var_137_object = var_1_object; // 0x230 MovT
	func_3367(var_136_bool, var_137_object); // 0x231 NEW_2
	if(var_136_bool == 0) goto Label_565; // 0x233 JumpB
	var_133_bool = 0; // 0x234 MovB
	
Label_565:
	if(var_133_bool == 0) goto Label_571; // 0x235 JumpB
	var_138_int = 543355; // 0x236 PushI
	var_139_int = -1; // 0x237 PushI
	var_140_int = 45814; // 0x238 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x239 TObjFunc
	
Label_571:
	var_141_int = 543351; // 0x23b PushI
	var_142_int = -1; // 0x23c PushI
	var_143_int = 45809; // 0x23d PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x23e TObjFunc
	return 0; // 0x240 Return
	
Label_577:
	var_144_string = ""; // 0x241 PushV
	var_144_string = "Neutral"; // 0x242 MovS
	func_366(var_23_bool, var_144_string); // 0x243 NEW_2
	var_145_int = 538136; // 0x245 PushI
	SetMessage(var_145_int); // 0x246 TObjFunc
	ClearReplies(); // 0x248 TObjFunc
	var_146_bool = 0; // 0x24a PushV
	var_146_bool = 0; // 0x24b MovB
	var_147_bool = 0; var_148_object = Obj(); // 0x24c PushV
	var_148_object = var_1_object; // 0x24d MovT
	func_3313(var_148_object); // 0x24e NEW_2
	if(var_147_bool == 0) goto Label_599; // 0x250 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x251 PushV
	var_154_object = var_1_object; // 0x252 MovT
	func_3377(var_153_bool, var_154_object); // 0x253 NEW_2
	if(var_153_bool == 0) goto Label_599; // 0x255 JumpB
	var_146_bool = 1; // 0x256 MovB
	
Label_599:
	if(var_146_bool == 0) goto Label_605; // 0x257 JumpB
	var_159_int = 538137; // 0x258 PushI
	var_160_int = 40009; // 0x259 PushI
	var_161_int = 40008; // 0x25a PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x25b TObjFunc
	
Label_605:
	var_162_int = 538165; // 0x25d PushI
	var_163_int = -1; // 0x25e PushI
	var_164_int = 40040; // 0x25f PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x260 TObjFunc
	return 0; // 0x262 Return
	
Label_611:
	var_165_int = 40009; // 0x263 PushI
	var_166_bool = var_22_cvector == var_165_int; // 0x264 Eq
	if(var_166_bool == 0) goto Label_634; // 0x265 JumpB
	var_167_string = ""; // 0x266 PushV
	var_167_string = "Neutral"; // 0x267 MovS
	func_366(var_23_bool, var_167_string); // 0x268 NEW_2
	var_168_int = 538138; // 0x26a PushI
	SetMessage(var_168_int); // 0x26b TObjFunc
	ClearReplies(); // 0x26d TObjFunc
	var_169_int = 538139; // 0x26f PushI
	var_170_int = 40011; // 0x270 PushI
	var_171_int = 40010; // 0x271 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x272 TObjFunc
	var_172_int = 538164; // 0x274 PushI
	var_173_int = 40019; // 0x275 PushI
	var_174_int = 40038; // 0x276 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x277 TObjFunc
	return 0; // 0x279 Return
	
Label_634:
	var_175_int = 40011; // 0x27a PushI
	var_176_bool = var_22_cvector == var_175_int; // 0x27b Eq
	if(var_176_bool == 0) goto Label_657; // 0x27c JumpB
	var_177_string = ""; // 0x27d PushV
	var_177_string = "Neutral"; // 0x27e MovS
	func_366(var_23_bool, var_177_string); // 0x27f NEW_2
	var_178_int = 538140; // 0x281 PushI
	SetMessage(var_178_int); // 0x282 TObjFunc
	ClearReplies(); // 0x284 TObjFunc
	var_179_int = 538141; // 0x286 PushI
	var_180_int = 40013; // 0x287 PushI
	var_181_int = 40012; // 0x288 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x289 TObjFunc
	var_182_int = 538163; // 0x28b PushI
	var_183_int = 40019; // 0x28c PushI
	var_184_int = 40036; // 0x28d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x28e TObjFunc
	return 0; // 0x290 Return
	
Label_657:
	var_185_int = 40013; // 0x291 PushI
	var_186_bool = var_22_cvector == var_185_int; // 0x292 Eq
	if(var_186_bool == 0) goto Label_680; // 0x293 JumpB
	var_187_string = ""; // 0x294 PushV
	var_187_string = "Neutral"; // 0x295 MovS
	func_366(var_23_bool, var_187_string); // 0x296 NEW_2
	var_188_int = 538142; // 0x298 PushI
	SetMessage(var_188_int); // 0x299 TObjFunc
	ClearReplies(); // 0x29b TObjFunc
	var_189_int = 538143; // 0x29d PushI
	var_190_int = 40015; // 0x29e PushI
	var_191_int = 40014; // 0x29f PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x2a0 TObjFunc
	var_192_int = 538162; // 0x2a2 PushI
	var_193_int = 40015; // 0x2a3 PushI
	var_194_int = 40034; // 0x2a4 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x2a5 TObjFunc
	return 0; // 0x2a7 Return
	
Label_680:
	var_195_int = 40015; // 0x2a8 PushI
	var_196_bool = var_22_cvector == var_195_int; // 0x2a9 Eq
	if(var_196_bool == 0) goto Label_708; // 0x2aa JumpB
	var_197_string = ""; // 0x2ab PushV
	var_197_string = "Neutral"; // 0x2ac MovS
	func_366(var_23_bool, var_197_string); // 0x2ad NEW_2
	var_198_int = 538144; // 0x2af PushI
	SetMessage(var_198_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_199_int = 538145; // 0x2b4 PushI
	var_200_int = 40017; // 0x2b5 PushI
	var_201_int = 40016; // 0x2b6 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2b7 TObjFunc
	var_202_int = 538157; // 0x2b9 PushI
	var_203_int = 40017; // 0x2ba PushI
	var_204_int = 40028; // 0x2bb PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2bc TObjFunc
	var_205_int = 538158; // 0x2be PushI
	var_206_int = 40031; // 0x2bf PushI
	var_207_int = 40030; // 0x2c0 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_208_int = 40031; // 0x2c4 PushI
	var_209_bool = var_22_cvector == var_208_int; // 0x2c5 Eq
	if(var_209_bool == 0) goto Label_731; // 0x2c6 JumpB
	var_210_string = ""; // 0x2c7 PushV
	var_210_string = "Neutral"; // 0x2c8 MovS
	func_366(var_23_bool, var_210_string); // 0x2c9 NEW_2
	var_211_int = 538159; // 0x2cb PushI
	SetMessage(var_211_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_212_int = 538160; // 0x2d0 PushI
	var_213_int = -1; // 0x2d1 PushI
	var_214_int = 40032; // 0x2d2 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x2d3 TObjFunc
	var_215_int = 538161; // 0x2d5 PushI
	var_216_int = -1; // 0x2d6 PushI
	var_217_int = 40033; // 0x2d7 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x2d8 TObjFunc
	return 0; // 0x2da Return
	
Label_731:
	var_218_int = 40017; // 0x2db PushI
	var_219_bool = var_22_cvector == var_218_int; // 0x2dc Eq
	if(var_219_bool == 0) goto Label_749; // 0x2dd JumpB
	var_220_string = ""; // 0x2de PushV
	var_220_string = "Neutral"; // 0x2df MovS
	func_366(var_23_bool, var_220_string); // 0x2e0 NEW_2
	var_221_int = 538146; // 0x2e2 PushI
	SetMessage(var_221_int); // 0x2e3 TObjFunc
	ClearReplies(); // 0x2e5 TObjFunc
	var_222_int = 538147; // 0x2e7 PushI
	var_223_int = 40019; // 0x2e8 PushI
	var_224_int = 40018; // 0x2e9 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x2ea TObjFunc
	return 0; // 0x2ec Return
	
Label_749:
	var_225_int = 40019; // 0x2ed PushI
	var_226_bool = var_22_cvector == var_225_int; // 0x2ee Eq
	if(var_226_bool == 0) goto Label_772; // 0x2ef JumpB
	var_227_string = ""; // 0x2f0 PushV
	var_227_string = "Neutral"; // 0x2f1 MovS
	func_366(var_23_bool, var_227_string); // 0x2f2 NEW_2
	var_228_int = 538148; // 0x2f4 PushI
	SetMessage(var_228_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_229_int = 538149; // 0x2f9 PushI
	var_230_int = 40021; // 0x2fa PushI
	var_231_int = 40020; // 0x2fb PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x2fc TObjFunc
	var_232_int = 538156; // 0x2fe PushI
	var_233_int = -1; // 0x2ff PushI
	var_234_int = 40027; // 0x300 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x301 TObjFunc
	return 0; // 0x303 Return
	
Label_772:
	var_235_int = 40021; // 0x304 PushI
	var_236_bool = var_22_cvector == var_235_int; // 0x305 Eq
	if(var_236_bool == 0) goto Label_795; // 0x306 JumpB
	var_237_string = ""; // 0x307 PushV
	var_237_string = "Neutral"; // 0x308 MovS
	func_366(var_23_bool, var_237_string); // 0x309 NEW_2
	var_238_int = 538150; // 0x30b PushI
	SetMessage(var_238_int); // 0x30c TObjFunc
	ClearReplies(); // 0x30e TObjFunc
	var_239_int = 538151; // 0x310 PushI
	var_240_int = -1; // 0x311 PushI
	var_241_int = 40022; // 0x312 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x313 TObjFunc
	var_242_int = 538152; // 0x315 PushI
	var_243_int = 40024; // 0x316 PushI
	var_244_int = 40023; // 0x317 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x318 TObjFunc
	return 0; // 0x31a Return
	
Label_795:
	var_245_int = 40024; // 0x31b PushI
	var_246_bool = var_22_cvector == var_245_int; // 0x31c Eq
	if(var_246_bool == 0) goto Label_818; // 0x31d JumpB
	var_247_string = ""; // 0x31e PushV
	var_247_string = "Neutral"; // 0x31f MovS
	func_366(var_23_bool, var_247_string); // 0x320 NEW_2
	var_248_int = 538153; // 0x322 PushI
	SetMessage(var_248_int); // 0x323 TObjFunc
	ClearReplies(); // 0x325 TObjFunc
	var_249_int = 538154; // 0x327 PushI
	var_250_int = -1; // 0x328 PushI
	var_251_int = 40025; // 0x329 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x32a TObjFunc
	var_252_int = 538155; // 0x32c PushI
	var_253_int = -1; // 0x32d PushI
	var_254_int = 40026; // 0x32e PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x32f TObjFunc
	return 0; // 0x331 Return
	
Label_818:
	var_255_int = 45806; // 0x332 PushI
	var_256_bool = var_22_cvector == var_255_int; // 0x333 Eq
	if(var_256_bool == 0) goto Label_846; // 0x334 JumpB
	var_257_string = ""; // 0x335 PushV
	var_257_string = "Neutral"; // 0x336 MovS
	func_366(var_23_bool, var_257_string); // 0x337 NEW_2
	var_258_int = 543348; // 0x339 PushI
	SetMessage(var_258_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_259_int = 543358; // 0x33e PushI
	var_260_int = -1; // 0x33f PushI
	var_261_int = 45818; // 0x340 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x341 TObjFunc
	var_262_int = 543359; // 0x343 PushI
	var_263_int = -1; // 0x344 PushI
	var_264_int = 45819; // 0x345 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x346 TObjFunc
	var_265_int = 543360; // 0x348 PushI
	var_266_int = -1; // 0x349 PushI
	var_267_int = 45820; // 0x34a PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x34b TObjFunc
	return 0; // 0x34d Return
	
Label_846:
	var_268_int = 45804; // 0x34e PushI
	var_269_bool = var_22_cvector == var_268_int; // 0x34f Eq
	if(var_269_bool == 0) goto Label_874; // 0x350 JumpB
	var_270_string = ""; // 0x351 PushV
	var_270_string = "Neutral"; // 0x352 MovS
	func_366(var_23_bool, var_270_string); // 0x353 NEW_2
	var_271_int = 543346; // 0x355 PushI
	SetMessage(var_271_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_272_int = 543352; // 0x35a PushI
	var_273_int = -1; // 0x35b PushI
	var_274_int = 45810; // 0x35c PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x35d TObjFunc
	var_275_int = 543353; // 0x35f PushI
	var_276_int = -1; // 0x360 PushI
	var_277_int = 45812; // 0x361 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x362 TObjFunc
	var_278_int = 543354; // 0x364 PushI
	var_279_int = -1; // 0x365 PushI
	var_280_int = 45813; // 0x366 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x367 TObjFunc
	return 0; // 0x369 Return
	
Label_874:
	var_281_int = 45824; // 0x36a PushI
	var_282_bool = var_22_cvector == var_281_int; // 0x36b Eq
	if(var_282_bool == 0) goto Label_897; // 0x36c JumpB
	var_283_string = ""; // 0x36d PushV
	var_283_string = "Neutral"; // 0x36e MovS
	func_366(var_23_bool, var_283_string); // 0x36f NEW_2
	var_284_int = 543364; // 0x371 PushI
	SetMessage(var_284_int); // 0x372 TObjFunc
	ClearReplies(); // 0x374 TObjFunc
	var_285_int = 543365; // 0x376 PushI
	var_286_int = -1; // 0x377 PushI
	var_287_int = 45825; // 0x378 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x379 TObjFunc
	var_288_int = 543366; // 0x37b PushI
	var_289_int = -1; // 0x37c PushI
	var_290_int = 45826; // 0x37d PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x37e TObjFunc
	return 0; // 0x380 Return
	
Label_897:
	var_3_object = 1; // 0x381 TMovB
	var_291_bool = 0; // 0x382 PushV
	func_4122(var_291_bool); // 0x383 NEW_2
	if(var_291_bool == 0) goto Label_905; // 0x385 JumpB
	lshStopAnimation(); // 0x386 Func
	goto Label_907; // 0x388 Jump
	
Label_907:
	return 0; // 0x38b Return
	
Label_905:
	StopAnimation(); // 0x389 Func
	
Label_909:
	return 0; // 0x38d Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x39d PushV
	var_25_int = 0; var_26_object = Obj(); // 0x39e PushV
	var_26_object = var_22_bool; // 0x39f Mov
	func_4050(var_26_object); // 0x3a0 NEW_2
	var_24_int = var_25_int; // 0x3a1 Mov
	var_27_int = 0; // 0x3a3 PushI
	var_28_bool = var_24_int > var_27_int; // 0x3a4 GT
	if(var_28_bool == 0) goto Label_938; // 0x3a5 JumpB
	var_29_object = Obj(); // 0x3a6 PushV
	var_29_object = var_22_bool; // 0x3a7 Mov
	func_4053(var_29_object); // 0x3a8 NEW_2
	
Label_938:
	return 2; // 0x3aa Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_4059(); // 0x3ac NEW_2
	return 0; // 0x3ae Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool, var_23_object, var_24_cvector, var_25_bool)
{
	return 0; // 0x425 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	return 0; // 0x427 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	return 0; // 0x429 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x442 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x443 PushV
	var_26_object = var_22_bool; // 0x444 Mov
	func_4050(var_26_object); // 0x445 NEW_2
	var_24_int = var_25_int; // 0x446 Mov
	var_27_int = 0; // 0x448 PushI
	var_28_bool = var_24_int > var_27_int; // 0x449 GT
	if(var_28_bool == 0) goto Label_1109; // 0x44a JumpB
	var_29_int = 1; // 0x44b PushI
	var_30_bool = var_24_int > var_29_int; // 0x44c GT
	if(var_30_bool == 0) goto Label_1105; // 0x44d JumpB
	func_1277(var_24_int); // 0x44f NEW_2
	
Label_1105:
	var_32_object = Obj(); // 0x451 PushV
	var_32_object = var_22_bool; // 0x452 Mov
	func_4053(var_32_object); // 0x453 NEW_2
	
Label_1109:
	return 2; // 0x455 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x456 PushV
	var_25_object = Obj(); // 0x457 PushV
	var_25_object = var_22_bool; // 0x458 Mov
	func_3855(var_25_object); // 0x459 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x45b PushV
	var_35_object = var_22_bool; // 0x45c Mov
	func_3938(var_34_int, var_35_object); // 0x45d NEW_2
	var_24_int = var_34_int; // 0x45e Mov
	var_70_int = 0; // 0x460 PushI
	var_71_bool = var_24_int > var_70_int; // 0x461 GT
	if(var_71_bool == 0) goto Label_1133; // 0x462 JumpB
	var_72_int = 1; // 0x463 PushI
	var_73_bool = var_24_int > var_72_int; // 0x464 GT
	if(var_73_bool == 0) goto Label_1129; // 0x465 JumpB
	func_1277(var_24_int); // 0x467 NEW_2
	
Label_1129:
	var_75_object = Obj(); // 0x469 PushV
	var_75_object = var_22_bool; // 0x46a Mov
	func_3948(var_75_object); // 0x46b NEW_2
	
Label_1133:
	return 2; // 0x46d Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x46e PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x46f PushV
	var_28_object = var_22_object; // 0x470 Mov
	var_29_object = var_23_cvector; // 0x471 Mov
	var_30_bool = var_24_bool; // 0x472 Mov
	func_4174(var_28_object, var_29_object, var_30_bool); // 0x473 NEW_2
	if(var_27_bool == 0) goto Label_1161; // 0x475 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x476 PushV
	var_75_object = var_22_object; // 0x477 Mov
	var_76_bool = var_24_bool; // 0x478 Mov
	func_3956(var_75_object, var_76_bool); // 0x479 NEW_2
	var_26_int = var_74_int; // 0x47a Mov
	var_105_int = 0; // 0x47c PushI
	var_106_bool = var_26_int > var_105_int; // 0x47d GT
	if(var_106_bool == 0) goto Label_1161; // 0x47e JumpB
	var_107_int = 1; // 0x47f PushI
	var_108_bool = var_26_int > var_107_int; // 0x480 GT
	if(var_108_bool == 0) goto Label_1157; // 0x481 JumpB
	func_1277(var_26_int); // 0x483 NEW_2
	
Label_1157:
	var_110_object = Obj(); // 0x485 PushV
	var_110_object = var_22_object; // 0x486 Mov
	func_3966(var_110_object); // 0x487 NEW_2
	
Label_1161:
	return 2; // 0x489 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x48a PushV
	var_25_int = 0; var_26_object = Obj(); // 0x48b PushV
	var_26_object = var_22_bool; // 0x48c Mov
	func_4040(var_26_object); // 0x48d NEW_2
	var_24_int = var_25_int; // 0x48e Mov
	var_27_int = 0; // 0x490 PushI
	var_28_bool = var_24_int > var_27_int; // 0x491 GT
	if(var_28_bool == 0) goto Label_1181; // 0x492 JumpB
	var_29_int = 1; // 0x493 PushI
	var_30_bool = var_24_int > var_29_int; // 0x494 GT
	if(var_30_bool == 0) goto Label_1177; // 0x495 JumpB
	func_1277(var_24_int); // 0x497 NEW_2
	
Label_1177:
	var_32_object = Obj(); // 0x499 PushV
	var_32_object = var_22_bool; // 0x49a Mov
	func_4043(); // 0x49b NEW_2
	
Label_1181:
	return 2; // 0x49d Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x49e PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x49f PushV
	var_27_object = var_22_cvector; // 0x4a0 Mov
	var_28_string = var_23_bool; // 0x4a1 Mov
	func_3769(var_26_bool, var_27_object, var_28_string); // 0x4a2 NEW_2
	if(var_26_bool == 0) goto Label_1198; // 0x4a4 JumpB
	func_1277(var_25_int); // 0x4a6 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0x4a8 PushV
	var_59_object = var_22_cvector; // 0x4a9 Mov
	var_60_string = var_23_bool; // 0x4aa Mov
	func_3801(var_59_object, var_60_string); // 0x4ab NEW_2
	goto Label_1218; // 0x4ad Jump
	
Label_1218:
	return 2; // 0x4c2 Return
	
Label_1198:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0x4ae PushV
	var_209_string = var_23_bool; // 0x4af Mov
	var_210_object = var_22_cvector; // 0x4b0 Mov
	func_4045(var_210_object); // 0x4b1 NEW_2
	var_25_int = var_208_int; // 0x4b2 Mov
	var_211_int = 0; // 0x4b4 PushI
	var_212_bool = var_25_int > var_211_int; // 0x4b5 GT
	if(var_212_bool == 0) goto Label_1218; // 0x4b6 JumpB
	var_213_int = 1; // 0x4b7 PushI
	var_214_bool = var_25_int > var_213_int; // 0x4b8 GT
	if(var_214_bool == 0) goto Label_1213; // 0x4b9 JumpB
	func_1277(var_25_int); // 0x4bb NEW_2
	
Label_1213:
	var_215_string = ""; var_216_object = Obj(); // 0x4bd PushV
	var_215_string = var_23_bool; // 0x4be Mov
	var_216_object = var_22_cvector; // 0x4bf Mov
	func_4048(); // 0x4c0 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x4c4 PushV
	var_24_string = var_22_bool; // 0x4c5 Mov
	func_3868(var_23_bool, var_24_string); // 0x4c6 NEW_2
	if(var_23_bool == 0) goto Label_1232; // 0x4c8 JumpB
	func_1277(var_22_bool); // 0x4ca NEW_2
	var_33_string = ""; // 0x4cc PushV
	var_33_string = var_22_bool; // 0x4cd Mov
	func_3884(var_33_string); // 0x4ce NEW_2
	
Label_1232:
	return 0; // 0x4d0 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x4d2 PushV
	var_24_object = var_22_bool; // 0x4d3 Mov
	func_3826(var_23_bool, var_24_object); // 0x4d4 NEW_2
	if(var_23_bool == 0) goto Label_1247; // 0x4d6 JumpB
	func_1277(var_22_bool); // 0x4d8 NEW_2
	var_38_object = Obj(); // 0x4da PushV
	var_38_object = var_22_bool; // 0x4db Mov
	func_3849(var_38_object); // 0x4dc NEW_2
	goto Label_1251; // 0x4de Jump
	
Label_1251:
	return 0; // 0x4e3 Return
	
Label_1247:
	var_112_object = Obj(); // 0x4df PushV
	var_112_object = var_22_bool; // 0x4e0 Mov
	func_1302(var_22_bool, var_112_object); // 0x4e1 NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_object = Obj(); // 0x4e5 PushV
	var_23_object = var_22_bool; // 0x4e6 Mov
	func_1302(var_22_bool, var_23_object); // 0x4e7 NEW_2
	return 0; // 0x4e9 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 110; // 0x4eb PushI
	var_24_bool = var_22_bool != var_23_int; // 0x4ec Neq
	if(var_24_bool == 0) goto Label_1263; // 0x4ed JumpB
	return 0; // 0x4ee Return
	
Label_1263:
	var_2_object = 0; // 0x4ef TMovB
	var_25_int = 110; // 0x4f0 PushI
	KillTimer(var_25_int); // 0x4f1 Func
	ResetAAS(); // 0x4f3 Func
	return 0; // 0x4f5 Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1277(var_21_bool); // 0x4f7 NEW_2
	func_4059(); // 0x4fa NEW_2
	return 0; // 0x4fc Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1277(var_22_bool); // 0x50f NEW_2
	var_24_object = Obj(); // 0x511 PushV
	var_24_object = var_22_bool; // 0x512 Mov
	func_3745(); // 0x513 NEW_2
	return 0; // 0x515 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	RequestClearPath(var_22_bool); // 0x57f Func
	return 0; // 0x581 Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	Stop(); // 0x582 Func
	return 0; // 0x584 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x59b PushV
	var_25_int = 0; var_26_object = Obj(); // 0x59c PushV
	var_26_object = var_22_bool; // 0x59d Mov
	func_4050(var_26_object); // 0x59e NEW_2
	var_24_int = var_25_int; // 0x59f Mov
	var_27_int = 0; // 0x5a1 PushI
	var_28_bool = var_24_int > var_27_int; // 0x5a2 GT
	if(var_28_bool == 0) goto Label_1454; // 0x5a3 JumpB
	var_29_int = 1; // 0x5a4 PushI
	var_30_bool = var_24_int > var_29_int; // 0x5a5 GT
	if(var_30_bool == 0) goto Label_1450; // 0x5a6 JumpB
	func_1680(); // 0x5a8 NEW_2
	
Label_1450:
	var_31_object = Obj(); // 0x5aa PushV
	var_31_object = var_22_bool; // 0x5ab Mov
	func_4053(var_31_object); // 0x5ac NEW_2
	
Label_1454:
	return 2; // 0x5ae Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x5af PushV
	var_25_object = Obj(); // 0x5b0 PushV
	var_25_object = var_22_bool; // 0x5b1 Mov
	func_3855(var_25_object); // 0x5b2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x5b4 PushV
	var_35_object = var_22_bool; // 0x5b5 Mov
	func_3938(var_34_int, var_35_object); // 0x5b6 NEW_2
	var_24_int = var_34_int; // 0x5b7 Mov
	var_70_int = 0; // 0x5b9 PushI
	var_71_bool = var_24_int > var_70_int; // 0x5ba GT
	if(var_71_bool == 0) goto Label_1478; // 0x5bb JumpB
	var_72_int = 1; // 0x5bc PushI
	var_73_bool = var_24_int > var_72_int; // 0x5bd GT
	if(var_73_bool == 0) goto Label_1474; // 0x5be JumpB
	func_1680(); // 0x5c0 NEW_2
	
Label_1474:
	var_74_object = Obj(); // 0x5c2 PushV
	var_74_object = var_22_bool; // 0x5c3 Mov
	func_3948(var_74_object); // 0x5c4 NEW_2
	
Label_1478:
	return 2; // 0x5c6 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x5c7 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x5c8 PushV
	var_28_object = var_22_object; // 0x5c9 Mov
	var_29_object = var_23_cvector; // 0x5ca Mov
	var_30_bool = var_24_bool; // 0x5cb Mov
	func_4174(var_28_object, var_29_object, var_30_bool); // 0x5cc NEW_2
	if(var_27_bool == 0) goto Label_1506; // 0x5ce JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x5cf PushV
	var_75_object = var_22_object; // 0x5d0 Mov
	var_76_bool = var_24_bool; // 0x5d1 Mov
	func_3956(var_75_object, var_76_bool); // 0x5d2 NEW_2
	var_26_int = var_74_int; // 0x5d3 Mov
	var_105_int = 0; // 0x5d5 PushI
	var_106_bool = var_26_int > var_105_int; // 0x5d6 GT
	if(var_106_bool == 0) goto Label_1506; // 0x5d7 JumpB
	var_107_int = 1; // 0x5d8 PushI
	var_108_bool = var_26_int > var_107_int; // 0x5d9 GT
	if(var_108_bool == 0) goto Label_1502; // 0x5da JumpB
	func_1680(); // 0x5dc NEW_2
	
Label_1502:
	var_109_object = Obj(); // 0x5de PushV
	var_109_object = var_22_object; // 0x5df Mov
	func_3966(var_109_object); // 0x5e0 NEW_2
	
Label_1506:
	return 2; // 0x5e2 Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x5e3 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x5e4 PushV
	var_26_object = var_22_bool; // 0x5e5 Mov
	func_4040(var_26_object); // 0x5e6 NEW_2
	var_24_int = var_25_int; // 0x5e7 Mov
	var_27_int = 0; // 0x5e9 PushI
	var_28_bool = var_24_int > var_27_int; // 0x5ea GT
	if(var_28_bool == 0) goto Label_1526; // 0x5eb JumpB
	var_29_int = 1; // 0x5ec PushI
	var_30_bool = var_24_int > var_29_int; // 0x5ed GT
	if(var_30_bool == 0) goto Label_1522; // 0x5ee JumpB
	func_1680(); // 0x5f0 NEW_2
	
Label_1522:
	var_31_object = Obj(); // 0x5f2 PushV
	var_31_object = var_22_bool; // 0x5f3 Mov
	func_4043(); // 0x5f4 NEW_2
	
Label_1526:
	return 2; // 0x5f6 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x5f7 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x5f8 PushV
	var_27_object = var_22_cvector; // 0x5f9 Mov
	var_28_string = var_23_bool; // 0x5fa Mov
	func_3769(var_26_bool, var_27_object, var_28_string); // 0x5fb NEW_2
	if(var_26_bool == 0) goto Label_1543; // 0x5fd JumpB
	func_1680(); // 0x5ff NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x601 PushV
	var_58_object = var_22_cvector; // 0x602 Mov
	var_59_string = var_23_bool; // 0x603 Mov
	func_3801(var_58_object, var_59_string); // 0x604 NEW_2
	goto Label_1563; // 0x606 Jump
	
Label_1563:
	return 2; // 0x61b Return
	
Label_1543:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x607 PushV
	var_208_string = var_23_bool; // 0x608 Mov
	var_209_object = var_22_cvector; // 0x609 Mov
	func_4045(var_209_object); // 0x60a NEW_2
	var_25_int = var_207_int; // 0x60b Mov
	var_210_int = 0; // 0x60d PushI
	var_211_bool = var_25_int > var_210_int; // 0x60e GT
	if(var_211_bool == 0) goto Label_1563; // 0x60f JumpB
	var_212_int = 1; // 0x610 PushI
	var_213_bool = var_25_int > var_212_int; // 0x611 GT
	if(var_213_bool == 0) goto Label_1558; // 0x612 JumpB
	func_1680(); // 0x614 NEW_2
	
Label_1558:
	var_214_string = ""; var_215_object = Obj(); // 0x616 PushV
	var_214_string = var_23_bool; // 0x617 Mov
	var_215_object = var_22_cvector; // 0x618 Mov
	func_4048(); // 0x619 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x61d PushV
	var_24_string = var_22_bool; // 0x61e Mov
	func_3868(var_23_bool, var_24_string); // 0x61f NEW_2
	if(var_23_bool == 0) goto Label_1577; // 0x621 JumpB
	func_1680(); // 0x623 NEW_2
	var_32_string = ""; // 0x625 PushV
	var_32_string = var_22_bool; // 0x626 Mov
	func_3884(var_32_string); // 0x627 NEW_2
	
Label_1577:
	return 0; // 0x629 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1680(); // 0x62b NEW_2
	func_4059(); // 0x62e NEW_2
	return 0; // 0x630 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x632 PushV
	var_24_object = var_22_bool; // 0x633 Mov
	func_3826(var_23_bool, var_24_object); // 0x634 NEW_2
	if(var_23_bool == 0) goto Label_1598; // 0x636 JumpB
	func_1680(); // 0x638 NEW_2
	var_37_object = Obj(); // 0x63a PushV
	var_37_object = var_22_bool; // 0x63b Mov
	func_3849(var_37_object); // 0x63c NEW_2
	
Label_1598:
	return 0; // 0x63e Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x6cd PushV
	var_25_int = 0; var_26_object = Obj(); // 0x6ce PushV
	var_26_object = var_22_bool; // 0x6cf Mov
	func_4050(var_26_object); // 0x6d0 NEW_2
	var_24_int = var_25_int; // 0x6d1 Mov
	var_27_int = 0; // 0x6d3 PushI
	var_28_bool = var_24_int > var_27_int; // 0x6d4 GT
	if(var_28_bool == 0) goto Label_1760; // 0x6d5 JumpB
	var_29_int = 1; // 0x6d6 PushI
	var_30_bool = var_24_int > var_29_int; // 0x6d7 GT
	if(var_30_bool == 0) goto Label_1756; // 0x6d8 JumpB
	func_1884(); // 0x6da NEW_2
	
Label_1756:
	var_33_object = Obj(); // 0x6dc PushV
	var_33_object = var_22_bool; // 0x6dd Mov
	func_4053(var_33_object); // 0x6de NEW_2
	
Label_1760:
	return 2; // 0x6e0 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x6e1 PushV
	var_25_object = Obj(); // 0x6e2 PushV
	var_25_object = var_22_bool; // 0x6e3 Mov
	func_3855(var_25_object); // 0x6e4 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x6e6 PushV
	var_35_object = var_22_bool; // 0x6e7 Mov
	func_3938(var_34_int, var_35_object); // 0x6e8 NEW_2
	var_24_int = var_34_int; // 0x6e9 Mov
	var_70_int = 0; // 0x6eb PushI
	var_71_bool = var_24_int > var_70_int; // 0x6ec GT
	if(var_71_bool == 0) goto Label_1784; // 0x6ed JumpB
	var_72_int = 1; // 0x6ee PushI
	var_73_bool = var_24_int > var_72_int; // 0x6ef GT
	if(var_73_bool == 0) goto Label_1780; // 0x6f0 JumpB
	func_1884(); // 0x6f2 NEW_2
	
Label_1780:
	var_76_object = Obj(); // 0x6f4 PushV
	var_76_object = var_22_bool; // 0x6f5 Mov
	func_3948(var_76_object); // 0x6f6 NEW_2
	
Label_1784:
	return 2; // 0x6f8 Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_cvector, var_24_bool)
{
	var_25_int = 0; var_26_int = 0; // 0x6f9 PushV
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_bool = 0; // 0x6fa PushV
	var_28_object = var_22_object; // 0x6fb Mov
	var_29_object = var_23_cvector; // 0x6fc Mov
	var_30_bool = var_24_bool; // 0x6fd Mov
	func_4174(var_28_object, var_29_object, var_30_bool); // 0x6fe NEW_2
	if(var_27_bool == 0) goto Label_1812; // 0x700 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x701 PushV
	var_75_object = var_22_object; // 0x702 Mov
	var_76_bool = var_24_bool; // 0x703 Mov
	func_3956(var_75_object, var_76_bool); // 0x704 NEW_2
	var_26_int = var_74_int; // 0x705 Mov
	var_105_int = 0; // 0x707 PushI
	var_106_bool = var_26_int > var_105_int; // 0x708 GT
	if(var_106_bool == 0) goto Label_1812; // 0x709 JumpB
	var_107_int = 1; // 0x70a PushI
	var_108_bool = var_26_int > var_107_int; // 0x70b GT
	if(var_108_bool == 0) goto Label_1808; // 0x70c JumpB
	func_1884(); // 0x70e NEW_2
	
Label_1808:
	var_111_object = Obj(); // 0x710 PushV
	var_111_object = var_22_object; // 0x711 Mov
	func_3966(var_111_object); // 0x712 NEW_2
	
Label_1812:
	return 2; // 0x714 Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x715 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x716 PushV
	var_26_object = var_22_bool; // 0x717 Mov
	func_4040(var_26_object); // 0x718 NEW_2
	var_24_int = var_25_int; // 0x719 Mov
	var_27_int = 0; // 0x71b PushI
	var_28_bool = var_24_int > var_27_int; // 0x71c GT
	if(var_28_bool == 0) goto Label_1832; // 0x71d JumpB
	var_29_int = 1; // 0x71e PushI
	var_30_bool = var_24_int > var_29_int; // 0x71f GT
	if(var_30_bool == 0) goto Label_1828; // 0x720 JumpB
	func_1884(); // 0x722 NEW_2
	
Label_1828:
	var_33_object = Obj(); // 0x724 PushV
	var_33_object = var_22_bool; // 0x725 Mov
	func_4043(); // 0x726 NEW_2
	
Label_1832:
	return 2; // 0x728 Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x729 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x72a PushV
	var_27_object = var_22_cvector; // 0x72b Mov
	var_28_string = var_23_bool; // 0x72c Mov
	func_3769(var_26_bool, var_27_object, var_28_string); // 0x72d NEW_2
	if(var_26_bool == 0) goto Label_1849; // 0x72f JumpB
	func_1884(); // 0x731 NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x733 PushV
	var_60_object = var_22_cvector; // 0x734 Mov
	var_61_string = var_23_bool; // 0x735 Mov
	func_3801(var_60_object, var_61_string); // 0x736 NEW_2
	goto Label_1869; // 0x738 Jump
	
Label_1869:
	return 2; // 0x74d Return
	
Label_1849:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x739 PushV
	var_210_string = var_23_bool; // 0x73a Mov
	var_211_object = var_22_cvector; // 0x73b Mov
	func_4045(var_211_object); // 0x73c NEW_2
	var_25_int = var_209_int; // 0x73d Mov
	var_212_int = 0; // 0x73f PushI
	var_213_bool = var_25_int > var_212_int; // 0x740 GT
	if(var_213_bool == 0) goto Label_1869; // 0x741 JumpB
	var_214_int = 1; // 0x742 PushI
	var_215_bool = var_25_int > var_214_int; // 0x743 GT
	if(var_215_bool == 0) goto Label_1864; // 0x744 JumpB
	func_1884(); // 0x746 NEW_2
	
Label_1864:
	var_216_string = ""; var_217_object = Obj(); // 0x748 PushV
	var_216_string = var_23_bool; // 0x749 Mov
	var_217_object = var_22_cvector; // 0x74a Mov
	func_4048(); // 0x74b NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x74f PushV
	var_24_string = var_22_bool; // 0x750 Mov
	func_3868(var_23_bool, var_24_string); // 0x751 NEW_2
	if(var_23_bool == 0) goto Label_1883; // 0x753 JumpB
	func_1884(); // 0x755 NEW_2
	var_34_string = ""; // 0x757 PushV
	var_34_string = var_22_bool; // 0x758 Mov
	func_3884(var_34_string); // 0x759 NEW_2
	
Label_1883:
	return 0; // 0x75b Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1884(); // 0x769 NEW_2
	var_25_object = Obj(); // 0x76b PushV
	var_25_object = var_22_bool; // 0x76c Mov
	func_3745(); // 0x76d NEW_2
	return 0; // 0x76f Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x770 PushV
	var_27_int = 111; // 0x771 PushI
	var_28_bool = var_22_bool != var_27_int; // 0x772 Neq
	if(var_28_bool == 0) goto Label_1909; // 0x773 JumpB
	return 4; // 0x774 Return
	
Label_1909:
	var_29_bool = 0; var_30_object = Obj(); // 0x775 PushV
	var_30_object = var_0_bool; // 0x776 MovT
	func_2835(var_29_bool, var_30_object); // 0x777 NEW_2
	var_63_bool = var_29_bool == 0; // 0x779 Not
	if(var_63_bool == 0) goto Label_1919; // 0x77a JumpB
	func_1884(); // 0x77c NEW_2
	return 4; // 0x77e Return
	
Label_1919:
	GetDirection(var_25_cvector); // 0x77f Func
	var_66_cvector = CVector(0,0,0); var_67_object = Obj(); // 0x781 PushV
	var_67_object = var_0_bool; // 0x782 MovT
	func_2762(var_67_object); // 0x783 NEW_2
	var_26_cvector = var_66_cvector; // 0x784 Mov
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x786 PushV
	var_73_cvector = var_25_cvector; // 0x787 Mov
	var_74_cvector = var_26_cvector; // 0x788 Mov
	func_3282(var_72_float, var_73_cvector, var_74_cvector); // 0x789 NEW_2
	var_96_float = 0.5; // 0x78b PushF
	var_97_bool = var_72_float < var_96_float; // 0x78c LT
	if(var_97_bool == 0) goto Label_1938; // 0x78d JumpB
	var_98_object = Obj(); // 0x78e PushV
	var_98_object = var_0_bool; // 0x78f MovT
	func_2985(); // 0x790 NEW_2
	
Label_1938:
	return 4; // 0x792 Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1884(); // 0x794 NEW_2
	func_4059(); // 0x797 NEW_2
	return 0; // 0x799 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x79b PushV
	var_24_object = var_22_bool; // 0x79c Mov
	func_3826(var_23_bool, var_24_object); // 0x79d NEW_2
	if(var_23_bool == 0) goto Label_1959; // 0x79f JumpB
	func_1884(); // 0x7a1 NEW_2
	var_39_object = Obj(); // 0x7a3 PushV
	var_39_object = var_22_bool; // 0x7a4 Mov
	func_3849(var_39_object); // 0x7a5 NEW_2
	
Label_1959:
	return 0; // 0x7a7 Return
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2150(var_21_bool); // 0x7c5 NEW_2
	func_4059(); // 0x7c8 NEW_2
	return 0; // 0x7ca Return
}


task_7_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x832 PushV
	var_31_int = 120; // 0x833 PushI
	var_32_bool = var_22_bool != var_31_int; // 0x834 Neq
	if(var_32_bool == 0) goto Label_2103; // 0x835 JumpB
	return 8; // 0x836 Return
	
Label_2103:
	var_33_bool = var_0_bool == 0; // 0x837 NullEq
	if(var_33_bool == 0) goto Label_2112; // 0x838 JumpB
	Stop(); // 0x839 Func
	var_34_int = 1; // 0x83b PushI
	KillTimer(var_34_int); // 0x83c Func
	var_2_object = 1; // 0x83e TMovB
	goto Label_2149; // 0x83f Jump
	
Label_2149:
	return 8; // 0x865 Return
	
Label_2112:
	GetDirection(var_27_cvector); // 0x840 Func
	var_35_float = 7000.0; // 0x842 PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x843 Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x845 PushV
	var_37_float = 1.74533; // 0x846 MovF
	func_1995(var_36_cvector, var_37_float); // 0x847 NEW_2
	var_29_cvector = var_36_cvector; // 0x848 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x84a Or2
	var_66_bool = 0; // 0x84b PushV
	var_66_bool = 0; // 0x84c MovB
	var_67_float = 2500.0; // 0x84d PushF
	var_68_bool = var_30_float >= var_67_float; // 0x84e GE
	if(var_68_bool == 0) goto Label_2142; // 0x84f JumpB
	var_69_bool = 0; // 0x850 PushV
	var_69_bool = 1; // 0x851 MovB
	var_70_float = var_28_float * var_28_float; // 0x852 Mult
	var_71_float = 2.25; // 0x853 PushF
	var_72_float = var_70_float * var_71_float; // 0x854 Mult
	var_73_bool = var_30_float >= var_72_float; // 0x855 GE
	if(var_73_bool == 0) goto Label_2140; // 0x856 JumpB
	var_74_bool = 0; // 0x857 PushV
	func_2166(var_69_bool, var_74_bool); // 0x858 NEW_2
	if(var_74_bool == 0) goto Label_2140; // 0x85a JumpB
	var_69_bool = 0; // 0x85b MovB
	
Label_2140:
	if(var_69_bool == 0) goto Label_2142; // 0x85c JumpB
	var_66_bool = 1; // 0x85d MovB
	
Label_2142:
	if(var_66_bool == 0) goto Label_2149; // 0x85e JumpB
	Stop(); // 0x85f Func
	var_94_cvector = CVector(0,0,0); // 0x861 PushV
	func_2757(var_94_cvector); // 0x862 NEW_2
	var_1_object = var_94_cvector + var_29_cvector; // 0x864 Add2
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_2150(var_22_bool); // 0x86f NEW_2
	var_24_object = Obj(); // 0x871 PushV
	var_24_object = var_22_bool; // 0x872 Mov
	func_3745(); // 0x873 NEW_2
	return 0; // 0x875 Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_int, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x8ed PushV
	var_31_int = 120; // 0x8ee PushI
	var_32_bool = var_22_bool != var_31_int; // 0x8ef Neq
	if(var_32_bool == 0) goto Label_2290; // 0x8f0 JumpB
	return 8; // 0x8f1 Return
	
Label_2290:
	var_33_bool = var_0_bool == 0; // 0x8f2 NullEq
	if(var_33_bool == 0) goto Label_2299; // 0x8f3 JumpB
	Stop(); // 0x8f4 Func
	var_34_int = 1; // 0x8f6 PushI
	KillTimer(var_34_int); // 0x8f7 Func
	var_2_object = 1; // 0x8f9 TMovB
	goto Label_2336; // 0x8fa Jump
	
Label_2336:
	return 8; // 0x920 Return
	
Label_2299:
	GetDirection(var_27_cvector); // 0x8fb Func
	var_35_float = 7000.0; // 0x8fd PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x8fe Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x900 PushV
	var_37_float = 1.74533; // 0x901 MovF
	func_2182(var_36_cvector, var_37_float); // 0x902 NEW_2
	var_29_cvector = var_36_cvector; // 0x903 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x905 Or2
	var_66_bool = 0; // 0x906 PushV
	var_66_bool = 0; // 0x907 MovB
	var_67_float = 2500.0; // 0x908 PushF
	var_68_bool = var_30_float >= var_67_float; // 0x909 GE
	if(var_68_bool == 0) goto Label_2329; // 0x90a JumpB
	var_69_bool = 0; // 0x90b PushV
	var_69_bool = 1; // 0x90c MovB
	var_70_float = var_28_float * var_28_float; // 0x90d Mult
	var_71_float = 2.25; // 0x90e PushF
	var_72_float = var_70_float * var_71_float; // 0x90f Mult
	var_73_bool = var_30_float >= var_72_float; // 0x910 GE
	if(var_73_bool == 0) goto Label_2327; // 0x911 JumpB
	var_74_bool = 0; // 0x912 PushV
	func_2353(var_69_bool, var_74_bool); // 0x913 NEW_2
	if(var_74_bool == 0) goto Label_2327; // 0x915 JumpB
	var_69_bool = 0; // 0x916 MovB
	
Label_2327:
	if(var_69_bool == 0) goto Label_2329; // 0x917 JumpB
	var_66_bool = 1; // 0x918 MovB
	
Label_2329:
	if(var_66_bool == 0) goto Label_2336; // 0x919 JumpB
	Stop(); // 0x91a Func
	var_94_cvector = CVector(0,0,0); // 0x91c PushV
	func_2757(var_94_cvector); // 0x91d NEW_2
	var_1_object = var_94_cvector + var_29_cvector; // 0x91f Add2
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_2337(var_22_bool); // 0x92a NEW_2
	var_24_object = Obj(); // 0x92c PushV
	var_24_object = var_22_bool; // 0x92d Mov
	func_3745(); // 0x92e NEW_2
	return 0; // 0x930 Return
}


task_9_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2531(var_21_bool); // 0x942 NEW_2
	func_4059(); // 0x945 NEW_2
	return 0; // 0x947 Return
}


task_9_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0x9af PushV
	var_31_int = 120; // 0x9b0 PushI
	var_32_bool = var_22_bool != var_31_int; // 0x9b1 Neq
	if(var_32_bool == 0) goto Label_2484; // 0x9b2 JumpB
	return 8; // 0x9b3 Return
	
Label_2484:
	var_33_bool = var_0_bool == 0; // 0x9b4 NullEq
	if(var_33_bool == 0) goto Label_2493; // 0x9b5 JumpB
	Stop(); // 0x9b6 Func
	var_34_int = 1; // 0x9b8 PushI
	KillTimer(var_34_int); // 0x9b9 Func
	var_2_object = 1; // 0x9bb TMovB
	goto Label_2530; // 0x9bc Jump
	
Label_2530:
	return 8; // 0x9e2 Return
	
Label_2493:
	GetDirection(var_27_cvector); // 0x9bd Func
	var_35_float = 7000.0; // 0x9bf PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0x9c0 Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x9c2 PushV
	var_37_float = 1.74533; // 0x9c3 MovF
	func_2376(var_36_cvector, var_37_float); // 0x9c4 NEW_2
	var_29_cvector = var_36_cvector; // 0x9c5 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0x9c7 Or2
	var_66_bool = 0; // 0x9c8 PushV
	var_66_bool = 0; // 0x9c9 MovB
	var_67_float = 2500.0; // 0x9ca PushF
	var_68_bool = var_30_float >= var_67_float; // 0x9cb GE
	if(var_68_bool == 0) goto Label_2523; // 0x9cc JumpB
	var_69_bool = 0; // 0x9cd PushV
	var_69_bool = 1; // 0x9ce MovB
	var_70_float = var_28_float * var_28_float; // 0x9cf Mult
	var_71_float = 2.25; // 0x9d0 PushF
	var_72_float = var_70_float * var_71_float; // 0x9d1 Mult
	var_73_bool = var_30_float >= var_72_float; // 0x9d2 GE
	if(var_73_bool == 0) goto Label_2521; // 0x9d3 JumpB
	var_74_bool = 0; // 0x9d4 PushV
	func_2547(var_69_bool, var_74_bool); // 0x9d5 NEW_2
	if(var_74_bool == 0) goto Label_2521; // 0x9d7 JumpB
	var_69_bool = 0; // 0x9d8 MovB
	
Label_2521:
	if(var_69_bool == 0) goto Label_2523; // 0x9d9 JumpB
	var_66_bool = 1; // 0x9da MovB
	
Label_2523:
	if(var_66_bool == 0) goto Label_2530; // 0x9db JumpB
	Stop(); // 0x9dc Func
	var_94_cvector = CVector(0,0,0); // 0x9de PushV
	func_2757(var_94_cvector); // 0x9df NEW_2
	var_1_object = var_94_cvector + var_29_cvector; // 0x9e1 Add2
}


task_9_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_object, var_21_cvector, var_22_bool)
{
	func_2531(var_22_bool); // 0x9ec NEW_2
	var_24_object = Obj(); // 0x9ee PushV
	var_24_object = var_22_bool; // 0x9ef Mov
	func_3745(); // 0x9f0 NEW_2
	return 0; // 0x9f2 Return
}


task_10_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2725(var_21_bool); // 0xa04 NEW_2
	func_4059(); // 0xa07 NEW_2
	return 0; // 0xa09 Return
}


task_10_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int)
{
	var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; // 0xa71 PushV
	var_31_int = 120; // 0xa72 PushI
	var_32_bool = var_22_int != var_31_int; // 0xa73 Neq
	if(var_32_bool == 0) goto Label_2678; // 0xa74 JumpB
	return 8; // 0xa75 Return
	
Label_2678:
	var_33_bool = var_0_bool == 0; // 0xa76 NullEq
	if(var_33_bool == 0) goto Label_2687; // 0xa77 JumpB
	Stop(); // 0xa78 Func
	var_34_int = 1; // 0xa7a PushI
	KillTimer(var_34_int); // 0xa7b Func
	var_2_object = 1; // 0xa7d TMovB
	goto Label_2724; // 0xa7e Jump
	
Label_2724:
	return 8; // 0xaa4 Return
	
Label_2687:
	GetDirection(var_27_cvector); // 0xa7f Func
	var_35_float = 7000.0; // 0xa81 PushF
	FindDirLength(var_28_float, var_27_cvector, var_35_float); // 0xa82 Func
	var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0xa84 PushV
	var_37_float = 1.74533; // 0xa85 MovF
	func_2570(var_36_cvector, var_37_float); // 0xa86 NEW_2
	var_29_cvector = var_36_cvector; // 0xa87 Mov
	var_30_float = var_29_cvector | var_29_cvector; // 0xa89 Or2
	var_66_bool = 0; // 0xa8a PushV
	var_66_bool = 0; // 0xa8b MovB
	var_67_float = 2500.0; // 0xa8c PushF
	var_68_bool = var_30_float >= var_67_float; // 0xa8d GE
	if(var_68_bool == 0) goto Label_2717; // 0xa8e JumpB
	var_69_bool = 0; // 0xa8f PushV
	var_69_bool = 1; // 0xa90 MovB
	var_70_float = var_28_float * var_28_float; // 0xa91 Mult
	var_71_float = 2.25; // 0xa92 PushF
	var_72_float = var_70_float * var_71_float; // 0xa93 Mult
	var_73_bool = var_30_float >= var_72_float; // 0xa94 GE
	if(var_73_bool == 0) goto Label_2715; // 0xa95 JumpB
	var_74_bool = 0; // 0xa96 PushV
	func_2741(var_69_bool, var_74_bool); // 0xa97 NEW_2
	if(var_74_bool == 0) goto Label_2715; // 0xa99 JumpB
	var_69_bool = 0; // 0xa9a MovB
	
Label_2715:
	if(var_69_bool == 0) goto Label_2717; // 0xa9b JumpB
	var_66_bool = 1; // 0xa9c MovB
	
Label_2717:
	if(var_66_bool == 0) goto Label_2724; // 0xa9d JumpB
	Stop(); // 0xa9e Func
	var_94_cvector = CVector(0,0,0); // 0xaa0 PushV
	func_2757(var_94_cvector); // 0xaa1 NEW_2
	var_1_object = var_94_cvector + var_29_cvector; // 0xaa3 Add2
}


task_10_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object)
{
	func_2725(var_22_object); // 0xaae NEW_2
	var_24_object = Obj(); // 0xab0 PushV
	var_24_object = var_22_object; // 0xab1 Mov
	func_3745(); // 0xab2 NEW_2
	return 0; // 0xab4 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_string)
{
	var_24_float = 0; var_25_float = 0; // 0xe94 PushV
	var_26_string = "health"; // 0xe95 PushS
	var_27_bool = var_23_string == var_26_string; // 0xe96 Eq
	if(var_27_bool == 0) goto Label_3744; // 0xe97 JumpB
	var_28_string = "health"; // 0xe98 PushS
	GetProperty(var_28_string, var_25_float); // 0xe99 Func
	var_29_int = 0; // 0xe9b PushI
	var_30_bool = var_25_float <= var_29_int; // 0xe9c LE
	if(var_30_bool == 0) goto Label_3744; // 0xe9d JumpB
	SignalDeath(var_22_object); // 0xe9e Func
	
Label_3744:
	return 2; // 0xea0 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object)
{
	var_23_object = Obj(); // 0xea2 PushV
	var_23_object = var_22_object; // 0xea3 Mov
	func_3724(var_23_object); // 0xea4 NEW_2
	return 0; // 0xea6 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; // 0xea8 PushV
	var_26_object = var_22_object; // 0xea9 Mov
	var_27_int = var_23_int; // 0xeaa Mov
	var_28_float = var_24_float; // 0xeab Mov
	func_2903(var_26_object, var_27_int, var_28_float); // 0xeac NEW_2
	return 0; // 0xeae Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_int = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0xeb0 PushV
	var_28_object = var_22_object; // 0xeb1 Mov
	var_29_int = var_23_int; // 0xeb2 Mov
	var_30_float = var_24_float; // 0xeb3 Mov
	var_31_cvector = var_26_cvector; // 0xeb4 Mov
	var_32_cvector = var_27_cvector; // 0xeb5 Mov
	func_2971(var_30_float, var_31_cvector, var_32_cvector); // 0xeb6 NEW_2
	return 0; // 0xeb8 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 1; // 0x42a PushB
	SensePlayerOnly(var_22_bool); // 0x42b Func
	func_4124(); // 0x42e NEW_2
	func_1081(); // 0x431 NEW_2
	
Label_1075:
	var_2_object = 0; // 0x433 TMovB
	func_1342(var_20_cvector, var_21_bool); // 0x435 NEW_2
	goto Label_1075; // 0x437 Jump
}


func_4096(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0x1001 PushV
	var_57_object = var_55_object; // 0x1002 Mov
	func_4073(var_56_bool, var_57_object); // 0x1003 NEW_2
	var_54_bool = var_56_bool; // 0x1004 Mov
	return 0; // 0x1006 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_326_bool = 0; // 0x4 PushV
	func_4122(var_326_bool); // 0x5 NEW_2
	if(var_326_bool == 0) goto Label_15; // 0x7 JumpB
	var_327_string = ""; // 0x8 PushV
	var_327_string = "Neutral"; // 0x9 MovS
	func_3149(var_327_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_328_bool = var_0_bool; // 0x15 PushT
	if(var_328_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_329_string = "all"; // 0x11 PushS
	var_330_string = "idle"; // 0x12 PushS
	PlayAnimation(var_329_string, var_330_string); // 0x13 Func
}


func_4103(var_207_object)
{
	var_208_object = Obj(); // 0x1008 PushV
	var_208_object = var_207_object; // 0x1009 Mov
	func_4088(var_208_object); // 0x100a NEW_2
	return 0; // 0x100c Return
}


func_1034(var_47_string)
{
	RemoveRTEnvelope(); // 0x40b Func
	SetDeathState(); // 0x40d Func
	Stop(); // 0x40f Func
	StopAsync(); // 0x411 Func
	StopSecondaryAnimation(); // 0x413 Func
	var_48_string = ""; // 0x415 PushV
	var_48_string = var_47_string; // 0x416 Mov
	func_3198(var_48_string); // 0x417 NEW_2
	var_77_string = "all"; // 0x419 PushS
	PlayAnimation(var_77_string, var_47_string); // 0x41a Func
	WaitForAnimEnd(); // 0x41c Func
	var_78_string = "all"; // 0x41e PushS
	LockAnimationEnd(var_78_string, var_47_string); // 0x41f Func
	RemoveEnvelope(); // 0x421 Func
	return 0; // 0x423 Return
}


func_2570(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0xa0a PushV
	GetPosition(var_44_cvector); // 0xa0b Func
	GetPosition(var_45_cvector); // 0xa0d TObjFunc
	GetDirection(var_46_cvector); // 0xa0f Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xa11 PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xa12 PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0xa13 Sub2
	func_3245(var_52_cvector, var_53_cvector); // 0xa14 NEW_2
	var_59_float = 0.75; // 0xa16 PushF
	var_60_float = var_46_cvector * var_59_float; // 0xa17 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0xa18 Add2
	func_3245(var_50_cvector, var_51_cvector); // 0xa19 NEW_2
	var_47_cvector = var_50_cvector; // 0xa1a Mov
	var_61_int = 32; // 0xa1c PushI
	var_62_float = 7000.0; // 0xa1d PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0xa1e Func
	var_63_int = 100; // 0xa20 PushI
	var_49_float = var_49_float - var_63_int; // 0xa21 Sub2
	var_64_int = 0; // 0xa22 PushI
	var_65_bool = var_49_float < var_64_int; // 0xa23 LT
	if(var_65_bool == 0) goto Label_2598; // 0xa24 JumpB
	var_49_float = 0; // 0xa25 MovI
	
Label_2598:
	var_36_cvector = var_48_cvector * var_49_float; // 0xa26 Mult2
	return 12; // 0xa27 Return
}


func_4109(var_30_bool)
{
	var_30_bool = 0; // 0x100e MovB
	return 0; // 0x100f Return
}


func_4112()
{
	return 0; // 0x1011 Return
}


func_3088(var_291_bool, var_292_object)
{
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; // 0xc11 PushV
	var_294_object = var_292_object; // 0xc12 Mov
	var_295_float = 70; // 0xc13 MovI
	func_3096(var_294_object, var_295_float); // 0xc14 NEW_2
	var_291_bool = var_293_bool; // 0xc15 Mov
	return 0; // 0xc17 Return
}


func_4114(var_107_int)
{
	var_107_int = 515555; // 0x1012 MovI
	return 0; // 0x1013 Return
}


func_4116(var_106_int)
{
	var_106_int = 503340; // 0x1014 MovI
	return 0; // 0x1015 Return
}


func_4118(var_108_string)
{
	var_108_string = "ui/NPC_Citizen2.png"; // 0x1016 MovS
	return 0; // 0x1017 Return
}


func_4120(var_109_string)
{
	var_109_string = "ui/NPC_Citizen2_b.png"; // 0x1018 MovS
	return 0; // 0x1019 Return
}


func_3096(var_293_bool, var_295_float)
{
	var_296_float = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_bool = 0; var_304_float = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_bool = 0; // 0xc18 PushV
	GetPosition(var_305_cvector); // 0xc19 ObjFunc
	GetEyesHeight(var_304_float); // 0xc1b ObjFunc
	var_312_float = GetByIndex(var_305_cvector, 1); // 0xc1d PushE
	var_312_float = var_312_float + var_304_float; // 0xc1e Add2
	SetByIndex(var_305_cvector, 1) = var_312_float; // 0xc1f PopE
	GetPosition(var_306_cvector); // 0xc20 Func
	GetEyesHeight(var_304_float); // 0xc22 Func
	var_313_float = GetByIndex(var_306_cvector, 1); // 0xc24 PushE
	var_313_float = var_313_float + var_304_float; // 0xc25 Add2
	SetByIndex(var_306_cvector, 1) = var_313_float; // 0xc26 PopE
	var_307_cvector = var_305_cvector - var_306_cvector; // 0xc27 Sub2
	var_314_float = GetByIndex(var_307_cvector, 1); // 0xc28 PushE
	var_314_float = 0; // 0xc29 MovI
	SetByIndex(var_307_cvector, 1) = var_314_float; // 0xc2a PopE
	var_315_int = var_307_cvector | var_307_cvector; // 0xc2b Or
	var_316_float = sqrt(var_315_int); // 0xc2c Sqrt
	var_307_cvector = var_307_cvector / var_307_cvector; // 0xc2d Div2
	var_308_cvector = -var_307_cvector; // 0xc2e Neg2
	var_317_float = var_307_cvector * var_295_float; // 0xc2f Mult
	var_318_cvector = CVector(0.0, 10.0, 0.0); // 0xc30 PushVec
	var_309_cvector = var_317_float - var_318_cvector; // 0xc31 Sub2
	var_310_cvector = var_306_cvector + var_309_cvector; // 0xc32 Add2
	IsOverrideActive(var_311_bool); // 0xc33 Func
	var_319_bool = var_311_bool; // 0xc35 Push
	if(var_319_bool == 0) goto Label_3129; // 0xc36 JumpB
	var_293_bool = 0; // 0xc37 MovB
	return 16; // 0xc38 Return
	
Label_3129:
	StopWorld(); // 0xc39 Func
	var_320_bool = 1; // 0xc3b PushB
	CameraTransit(var_310_cvector, var_308_cvector, var_320_bool); // 0xc3c Func
	var_321_float = GetByIndex(var_309_cvector, 0); // 0xc3e PushE
	var_322_float = GetByIndex(var_309_cvector, 2); // 0xc3f PushE
	Rotate(var_321_float, var_322_float); // 0xc40 Func
	CameraWaitForPlayFinish(); // 0xc42 Func
	ResumeWorld(); // 0xc44 Func
	var_293_bool = 1; // 0xc46 MovB
	return 16; // 0xc47 Return
}


func_4122(var_101_bool)
{
	var_101_bool = 0; // 0x101a MovB
	return 0; // 0x101b Return
}


func_4124()
{
	var_23_bool = GlobalVars[0]; // 0x101c PushGE
	var_23_bool = 0; // 0x101d MovB
	GlobalVars[0] = var_23_bool; // 0x101e PopGE
	return 0; // 0x101f Return
}


func_4128(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x1020 PushV
	var_37_bool = GlobalVars[0]; // 0x1021 PushGE
	if(var_37_bool == 0) goto Label_4141; // 0x1022 JumpB
	IsOverrideActive(var_36_bool); // 0x1023 Func
	var_38_bool = var_36_bool == 0; // 0x1025 Not
	if(var_38_bool == 0) goto Label_4139; // 0x1026 JumpB
	var_39_object = Obj(); // 0x1027 PushV
	var_39_object = var_34_object; // 0x1028 Mov
	func_3459(var_39_object); // 0x1029 NEW_2
	
Label_4139:
	return 2; // 0x102b Return
	
Label_4141:
	var_46_int = 1000; // 0x102d PushI
	var_47_int = 0; var_48_object = Obj(); // 0x102e PushV
	var_48_object = var_34_object; // 0x102f Mov
	TaskCall(1); // 0x1030 TaskCall
	func_40(var_49_object, var_47_int, var_48_object); // 0x1031 NEW_2
	TaskReturn(); // 0x1032 TaskReturn
	var_290_bool = var_46_int == var_49_object; // 0x1034 Eq
	if(var_290_bool == 0) goto Label_4167; // 0x1035 JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0x1036 PushV
	var_292_object = var_34_object; // 0x1037 Mov
	func_3088(var_291_bool, var_292_object); // 0x1038 NEW_2
	var_323_bool = var_291_bool == 0; // 0x103a Not
	if(var_323_bool == 0) goto Label_4157; // 0x103b JumpB
	return 2; // 0x103c Return
	
Label_4157:
	var_324_object = Obj(); // 0x103d PushV
	var_324_object = var_34_object; // 0x103e Mov
	TaskCall(0); // 0x103f TaskCall
	func_0(var_324_object); // 0x1040 NEW_2
	TaskReturn(); // 0x1041 TaskReturn
	var_331_object = Obj(); // 0x1043 PushV
	var_331_object = var_34_object; // 0x1044 Mov
	func_3144(); // 0x1045 NEW_2
	
Label_4167:
	return 2; // 0x1047 Return
}


func_2600(var_0_bool, var_1_object, var_2_object, var_140_object)
{
	var_144_cvector = CVector(0,0,0); var_145_float = 0; var_146_bool = 0; var_147_cvector = CVector(0,0,0); var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_bool = 0; var_152_cvector = CVector(0,0,0); var_153_float = 0; // 0xa28 PushV
	var_0_bool = var_140_object; // 0xa29 TMov
	var_154_cvector = CVector(0,0,0); var_155_float = 0; // 0xa2a PushV
	var_155_float = 1.74533; // 0xa2b MovF
	func_2570(var_154_cvector, var_155_float); // 0xa2c NEW_2
	var_149_cvector = var_154_cvector; // 0xa2d Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0xa2f Or2
	var_179_float = 2500.0; // 0xa30 PushF
	var_180_bool = var_150_float < var_179_float; // 0xa31 LT
	if(var_180_bool == 0) goto Label_2629; // 0xa32 JumpB
	var_181_cvector = CVector(0,0,0); var_182_float = 0; // 0xa33 PushV
	var_182_float = 2.61799; // 0xa34 MovF
	func_2570(var_181_cvector, var_182_float); // 0xa35 NEW_2
	var_149_cvector = var_181_cvector; // 0xa36 Mov
	var_150_float = var_149_cvector | var_149_cvector; // 0xa38 Or2
	var_183_float = 2500.0; // 0xa39 PushF
	var_184_bool = var_150_float < var_183_float; // 0xa3a LT
	if(var_184_bool == 0) goto Label_2629; // 0xa3b JumpB
	var_185_string = "Can't retreat, distance: "; // 0xa3c PushS
	var_186_float = sqrt(var_150_float); // 0xa3d Sqrt
	var_187_int = var_185_string + var_186_float; // 0xa3e Add
	Trace(var_187_int); // 0xa3f Func
	var_188_float = 0.5; // 0xa41 PushF
	Sleep(var_188_float); // 0xa42 Func
	return 10; // 0xa44 Return
	
Label_2629:
	var_189_float = GetByIndex(var_149_cvector, 0); // 0xa45 PushE
	var_190_float = GetByIndex(var_149_cvector, 2); // 0xa46 PushE
	Rotate(var_189_float, var_190_float); // 0xa47 Func
	var_191_cvector = CVector(0,0,0); // 0xa49 PushV
	func_2757(var_191_cvector); // 0xa4a NEW_2
	var_1_object = var_191_cvector + var_149_cvector; // 0xa4c Add2
	var_192_int = 120; // 0xa4d PushI
	var_193_float = 0.5; // 0xa4e PushF
	SetTimer(var_192_int, var_193_float); // 0xa4f Func
	var_2_object = 0; // 0xa51 TMovB
	
Label_2642:
	var_194_int = 1; // 0xa52 PushI
	MovePoint(var_194_int, var_194_int, var_151_bool); // 0xa53 Func
	var_195_bool = var_151_bool; // 0xa55 Push
	if(var_195_bool == 0) goto Label_2670; // 0xa56 JumpB
	var_196_bool = var_0_bool == 0; // 0xa57 NullEq
	if(var_196_bool == 0) goto Label_2651; // 0xa58 JumpB
	goto Label_2672; // 0xa59 Jump
	
Label_2672:
	return 10; // 0xa70 Return
	
Label_2651:
	var_197_cvector = CVector(0,0,0); var_198_float = 0; // 0xa5b PushV
	var_198_float = 2.61799; // 0xa5c MovF
	func_2570(var_197_cvector, var_198_float); // 0xa5d NEW_2
	var_152_cvector = var_197_cvector; // 0xa5e Mov
	var_153_float = var_152_cvector | var_152_cvector; // 0xa60 Or2
	var_199_float = 2500.0; // 0xa61 PushF
	var_200_bool = var_153_float >= var_199_float; // 0xa62 GE
	if(var_200_bool == 0) goto Label_2669; // 0xa63 JumpB
	var_201_cvector = CVector(0,0,0); // 0xa64 PushV
	func_2757(var_201_cvector); // 0xa65 NEW_2
	var_1_object = var_201_cvector + var_152_cvector; // 0xa67 Add2
	var_202_int = 120; // 0xa68 PushI
	var_203_float = 0.5; // 0xa69 PushF
	SetTimer(var_202_int, var_203_float); // 0xa6a Func
	goto Label_2670; // 0xa6c Jump
	
Label_2670:
	var_204_bool = var_2_object == 0; // 0xa6e Not
	if(var_204_bool == 0) goto Label_2642; // 0xa6f JumpB
	
Label_2669:
	goto Label_2672; // 0xa6d Jump
}


func_40(var_0_bool, var_47_int, var_48_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; // 0x28 PushV
	var_0_bool = var_48_object; // 0x29 TMov
	var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; // 0x2a PushV
	var_59_object = var_48_object; // 0x2b Mov
	var_60_float = 70.0; // 0x2c MovF
	func_3001(var_59_object, var_60_float); // 0x2d NEW_2
	var_105_bool = var_58_bool == 0; // 0x2f Not
	if(var_105_bool == 0) goto Label_51; // 0x30 JumpB
	var_47_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_54_object); // 0x33 Func
	var_106_int = 0; // 0x35 PushV
	func_4116(var_106_int); // 0x36 NEW_2
	SetNPCName(var_106_int); // 0x38 ObjFunc
	var_107_int = 0; // 0x3a PushV
	func_4114(var_107_int); // 0x3b NEW_2
	SetNPCDescription(var_107_int); // 0x3d ObjFunc
	var_108_string = ""; // 0x3f PushV
	func_4118(var_108_string); // 0x40 NEW_2
	SetPhoto(var_108_string); // 0x42 ObjFunc
	var_109_string = ""; // 0x44 PushV
	func_4120(var_109_string); // 0x45 NEW_2
	SetPhoto2(var_109_string); // 0x47 ObjFunc
	var_110_int = 0; // 0x49 PushV
	func_3422(var_110_int); // 0x4a NEW_2
	SetPlayerName(var_110_int); // 0x4c ObjFunc
	var_56_int = -1; // 0x4e MovI
	IsOverrideActive(var_55_bool); // 0x4f Func
	var_118_bool = var_55_bool; // 0x51 Push
	if(var_118_bool == 0) goto Label_85; // 0x52 JumpB
	var_47_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_54_object); // 0x55 Func
	var_119_object = Obj(); var_120_object = Obj(); // 0x57 PushV
	var_119_object = var_48_object; // 0x58 Mov
	var_120_object = var_54_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_121_object, var_122_object, var_123_string, var_124_bool, var_119_object, var_120_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_57_bool); // 0x5e ObjFunc
	
Label_96:
	var_281_bool = var_57_bool == 0; // 0x60 Not
	if(var_281_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_57_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_282_object = Obj(); // 0x67 PushV
	var_282_object = var_48_object; // 0x68 Mov
	func_3070(); // 0x69 NEW_2
	StopDialog(var_54_object); // 0x6b Func
	GetReturnValue(var_56_int); // 0x6d ObjFunc
	var_47_int = var_56_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_1081()
{
	var_24_bool = 0; // 0x439 PushV
	func_2996(var_24_bool); // 0x43a NEW_2
	var_27_bool = var_24_bool == 0; // 0x43c Not
	if(var_27_bool == 0) goto Label_1089; // 0x43d JumpB
	func_4059(); // 0x43f NEW_2
	
Label_1089:
	return 0; // 0x441 Return
}


func_1599()
{
	var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_float = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_float = 0; var_68_bool = 0; // 0x63f PushV
	WaitForAnimEnd(); // 0x640 Func
	var_69_bool = 0; // 0x642 PushV
	func_2996(var_69_bool); // 0x643 NEW_2
	var_70_bool = var_69_bool == 0; // 0x645 Not
	if(var_70_bool == 0) goto Label_1608; // 0x646 JumpB
	return 14; // 0x647 Return
	
Label_1608:
	var_71_int = 0; // 0x648 PushV
	func_3904(var_71_int); // 0x649 NEW_2
	var_62_int = var_71_int; // 0x64a Mov
	var_63_int = 0; // 0x64c MovI
	
Label_1613:
	var_84_bool = 0; // 0x64d PushV
	var_84_bool = 0; // 0x64e MovB
	var_85_int = 5; // 0x64f PushI
	var_86_bool = var_63_int < var_85_int; // 0x650 LT
	if(var_86_bool == 0) goto Label_1623; // 0x651 JumpB
	var_87_bool = 0; // 0x652 PushV
	func_2996(var_87_bool); // 0x653 NEW_2
	if(var_87_bool == 0) goto Label_1623; // 0x655 JumpB
	var_84_bool = 1; // 0x656 MovB
	
Label_1623:
	if(var_84_bool == 0) goto Label_1675; // 0x657 JumpB
	var_88_int = 3; // 0x658 PushI
	irand(var_64_int, var_88_int); // 0x659 Func
	var_89_int = 0; // 0x65b PushI
	var_90_bool = var_64_int == var_89_int; // 0x65c Eq
	if(var_90_bool == 0) goto Label_1647; // 0x65d JumpB
	var_91_int = var_62_int; // 0x65e Push
	if(var_91_int == 0) goto Label_1646; // 0x65f JumpB
	irand(var_65_int, var_62_int); // 0x660 Func
	var_92_string = "all"; // 0x662 PushS
	var_93_string = ""; var_94_int = 0; // 0x663 PushV
	var_94_int = var_65_int; // 0x664 Mov
	func_3897(var_93_string, var_94_int); // 0x665 NEW_2
	PlayAnimation(var_92_string, var_93_string); // 0x667 Func
	WaitForAnimEnd(var_66_bool); // 0x669 Func
	var_95_bool = var_66_bool == 0; // 0x66b Not
	if(var_95_bool == 0) goto Label_1646; // 0x66c JumpB
	goto Label_1675; // 0x66d Jump
	
Label_1675:
	ResetAAS(); // 0x68b Func
	return 14; // 0x68d Return
	
Label_1646:
	goto Label_1664; // 0x66e Jump
	
Label_1664:
	var_96_bool = 0; // 0x680 PushV
	func_1678(var_96_bool); // 0x681 NEW_2
	var_97_bool = var_96_bool == 0; // 0x683 Not
	if(var_97_bool == 0) goto Label_1670; // 0x684 JumpB
	goto Label_1675; // 0x685 Jump
	
Label_1670:
	ResetAAS(); // 0x686 Func
	var_98_int = 1; // 0x688 PushI
	var_63_int = var_63_int + var_98_int; // 0x689 Add2
	goto Label_1613; // 0x68a Jump
	
Label_1647:
	var_99_int = 1; // 0x66f PushI
	var_100_bool = var_64_int == var_99_int; // 0x670 Eq
	if(var_100_bool == 0) goto Label_1661; // 0x671 JumpB
	var_101_int = 4; // 0x672 PushI
	rand(var_67_float, var_101_int); // 0x673 Func
	var_102_int = 1; // 0x675 PushI
	var_103_int = var_67_float + var_102_int; // 0x676 Add
	Sleep(var_103_int, var_68_bool); // 0x677 Func
	var_104_bool = var_68_bool == 0; // 0x679 Not
	if(var_104_bool == 0) goto Label_1660; // 0x67a JumpB
	goto Label_1675; // 0x67b Jump
	
Label_1660:
	goto Label_1664; // 0x67c Jump
	
Label_1661:
	var_105_int = var_63_int; // 0x67d Push
	if(var_105_int == 0) goto Label_1664; // 0x67e JumpB
	goto Label_1675; // 0x67f Jump
}


func_4168(var_67_bool)
{
	var_68_float = 0; // 0x1048 PushV
	func_3445(var_68_float); // 0x1049 NEW_2
	var_76_float = 0.7; // 0x104b PushF
	var_67_bool = var_68_float > var_76_float; // 0x104c GT2
	return 0; // 0x104d Return
}


func_3144()
{
	var_332_bool = 1; // 0xc49 PushB
	CameraSwitchToNormal(var_332_bool); // 0xc4a Func
	return 0; // 0xc4c Return
}


func_3149(var_197_string)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0xc4d PushV
	lshHasAnimation(var_201_bool, var_197_string); // 0xc4e Func
	var_204_bool = var_201_bool; // 0xc50 Push
	if(var_204_bool == 0) goto Label_3160; // 0xc51 JumpB
	lshGetAnimTimes(var_197_string, var_202_float, var_203_float); // 0xc52 Func
	var_205_bool = 0; // 0xc54 PushB
	lshPlayAnimation(var_202_float, var_203_float, var_205_bool); // 0xc55 Func
	goto Label_3164; // 0xc57 Jump
	
Label_3164:
	return 6; // 0xc5c Return
	
Label_3160:
	var_206_string = "Can't find lsh animation : "; // 0xc58 PushS
	var_207_int = var_206_string + var_197_string; // 0xc59 Add
	Trace(var_207_int); // 0xc5a Func
}


func_4174(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x104f PushV
	var_32_object = var_28_object; // 0x1050 Mov
	var_33_object = var_29_object; // 0x1051 Mov
	var_34_float = 700.0; // 0x1052 MovF
	func_3974(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x1053 NEW_2
	var_27_bool = var_31_bool; // 0x1054 Mov
	return 0; // 0x1056 Return
}


func_4183(var_105_object)
{
	var_106_bool = 0; var_107_object = Obj(); // 0x1058 PushV
	var_107_object = var_105_object; // 0x1059 Mov
	func_2777(var_106_bool, var_107_object); // 0x105a NEW_2
	if(var_106_bool == 0) goto Label_4200; // 0x105c JumpB
	var_110_object = Obj(); // 0x105d PushV
	func_3239(var_110_object); // 0x105e NEW_2
	var_113_float = -0.1; // 0x1060 PushF
	var_114_bool = 1; // 0x1061 PushB
	ReportReputationChange(var_105_object, var_110_object, var_113_float, var_114_bool); // 0x1062 Func
	var_115_bool = 0; // 0x1064 PushV
	var_115_bool = 0; // 0x1065 MovB
	func_3544(var_115_bool); // 0x1066 NEW_2
	
Label_4200:
	func_3520(); // 0x1069 NEW_2
	var_249_bool = GlobalVars[0]; // 0x106b PushGE
	var_249_bool = 1; // 0x106c MovB
	GlobalVars[0] = var_249_bool; // 0x106d PopGE
	var_250_int = 50; // 0x106e PushI
	var_251_int = 40; // 0x106f PushI
	SetRTEnvelope(var_250_int, var_251_int); // 0x1070 Func
	return 0; // 0x1072 Return
}


func_3165(var_175_string, var_176_bool)
{
	var_179_bool = 0; var_180_float = 0; var_181_float = 0; var_182_bool = 0; var_183_float = 0; var_184_float = 0; // 0xc5d PushV
	lshHasAnimation(var_182_bool, var_175_string); // 0xc5e Func
	var_185_bool = var_182_bool; // 0xc60 Push
	if(var_185_bool == 0) goto Label_3175; // 0xc61 JumpB
	lshGetAnimTimes(var_175_string, var_183_float, var_184_float); // 0xc62 Func
	lshPlayAnimation(var_183_float, var_184_float, var_176_bool); // 0xc64 Func
	goto Label_3179; // 0xc66 Jump
	
Label_3179:
	return 6; // 0xc6b Return
	
Label_3175:
	var_186_string = "Can't find lsh animation : "; // 0xc67 PushS
	var_187_int = var_186_string + var_175_string; // 0xc68 Add
	Trace(var_187_int); // 0xc69 Func
}


func_2150(var_2_object)
{
	Stop(); // 0x866 Func
	var_23_int = 120; // 0x868 PushI
	KillTimer(var_23_int); // 0x869 Func
	var_2_object = 1; // 0x86b TMovB
	return 0; // 0x86c Return
}


func_3180(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0xc6c PushV
	GetEyesHeight(var_94_float); // 0xc6d ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0xc6f MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0xc70 PushE
	var_96_float = var_94_float; // 0xc71 Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0xc72 PopE
	var_97_string = "head"; // 0xc73 PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0xc74 Func
	return 4; // 0xc76 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_119_object, var_120_object)
{
	var_0_bool = var_120_object; // 0x73 TMov
	var_1_object = var_119_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_125_int = 1; // 0x76 PushI
	if(var_125_int == 0) goto Label_336; // 0x77 JumpB
	var_126_bool = 0; // 0x78 PushV
	var_126_bool = 0; // 0x79 MovB
	var_127_bool = 0; // 0x7a PushV
	var_127_bool = 0; // 0x7b MovB
	var_128_bool = 0; // 0x7c PushV
	var_128_bool = 0; // 0x7d MovB
	var_129_bool = 0; // 0x7e PushV
	var_129_bool = 0; // 0x7f MovB
	var_130_bool = 0; var_131_object = Obj(); // 0x80 PushV
	var_131_object = var_1_object; // 0x81 MovT
	func_3325(var_131_object); // 0x82 NEW_2
	if(var_130_bool == 0) goto Label_140; // 0x84 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x85 PushV
	var_139_object = var_1_object; // 0x86 MovT
	func_3337(var_138_bool, var_139_object); // 0x87 NEW_2
	var_149_bool = var_138_bool == 0; // 0x89 Not
	if(var_149_bool == 0) goto Label_140; // 0x8a JumpB
	var_129_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_129_bool == 0) goto Label_148; // 0x8c JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x8d PushV
	var_151_object = var_1_object; // 0x8e MovT
	func_3347(var_150_bool, var_151_object); // 0x8f NEW_2
	var_156_bool = var_150_bool == 0; // 0x91 Not
	if(var_156_bool == 0) goto Label_148; // 0x92 JumpB
	var_128_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_128_bool == 0) goto Label_156; // 0x94 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x95 PushV
	var_158_object = var_1_object; // 0x96 MovT
	func_3357(var_157_bool, var_158_object); // 0x97 NEW_2
	var_163_bool = var_157_bool == 0; // 0x99 Not
	if(var_163_bool == 0) goto Label_156; // 0x9a JumpB
	var_127_bool = 1; // 0x9b MovB
	
Label_156:
	if(var_127_bool == 0) goto Label_164; // 0x9c JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x9d PushV
	var_165_object = var_1_object; // 0x9e MovT
	func_3367(var_164_bool, var_165_object); // 0x9f NEW_2
	var_170_bool = var_164_bool == 0; // 0xa1 Not
	if(var_170_bool == 0) goto Label_164; // 0xa2 JumpB
	var_126_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_126_bool == 0) goto Label_185; // 0xa4 JumpB
	var_171_string = ""; // 0xa5 PushV
	var_171_string = "Neutral"; // 0xa6 MovS
	func_366(var_120_object, var_171_string); // 0xa7 NEW_2
	var_188_int = 543344; // 0xa9 PushI
	SetMessage(var_188_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_189_int = 543362; // 0xae PushI
	var_190_int = 45824; // 0xaf PushI
	var_191_int = 45822; // 0xb0 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xb1 TObjFunc
	var_192_int = 543361; // 0xb3 PushI
	var_193_int = -1; // 0xb4 PushI
	var_194_int = 45821; // 0xb5 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xb6 TObjFunc
	goto Label_336; // 0xb8 Jump
	
Label_336:
	var_195_bool = 0; // 0x150 PushV
	func_4122(var_195_bool); // 0x151 NEW_2
	if(var_195_bool == 0) goto Label_351; // 0x153 JumpB
	
Label_340:
	lshWaitForAnimEnd(); // 0x154 Func
	var_196_object = var_3_object; // 0x156 PushT
	if(var_196_object == 0) goto Label_345; // 0x157 JumpB
	goto Label_350; // 0x158 Jump
	
Label_350:
	goto Label_365; // 0x15e Jump
	
Label_365:
	return 0; // 0x16d Return
	
Label_345:
	var_197_string = ""; // 0x159 PushV
	var_197_string = var_2_object; // 0x15a MovT
	func_3149(var_197_string); // 0x15b NEW_2
	goto Label_340; // 0x15d Jump
	
Label_351:
	var_208_string = "all"; // 0x15f PushS
	var_209_string = "idle"; // 0x160 PushS
	PlayAnimation(var_208_string, var_209_string); // 0x161 Func
	
Label_355:
	WaitForAnimEnd(); // 0x163 Func
	var_210_object = var_3_object; // 0x165 PushT
	if(var_210_object == 0) goto Label_360; // 0x166 JumpB
	goto Label_365; // 0x167 Jump
	
Label_360:
	var_211_string = "all"; // 0x168 PushS
	var_212_string = "idle"; // 0x169 PushS
	PlayAnimation(var_211_string, var_212_string); // 0x16a Func
	goto Label_355; // 0x16c Jump
	
Label_185:
	var_213_bool = 0; var_214_object = Obj(); // 0xb9 PushV
	var_214_object = var_1_object; // 0xba MovT
	func_3325(var_214_object); // 0xbb NEW_2
	if(var_213_bool == 0) goto Label_300; // 0xbd JumpB
	var_215_string = ""; // 0xbe PushV
	var_215_string = "Neutral"; // 0xbf MovS
	func_366(var_120_object, var_215_string); // 0xc0 NEW_2
	var_216_int = 543343; // 0xc2 PushI
	SetMessage(var_216_int); // 0xc3 TObjFunc
	ClearReplies(); // 0xc5 TObjFunc
	var_217_bool = 0; // 0xc7 PushV
	var_217_bool = 1; // 0xc8 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xc9 PushV
	var_219_object = var_1_object; // 0xca MovT
	func_3337(var_218_bool, var_219_object); // 0xcb NEW_2
	if(var_218_bool == 0) goto Label_212; // 0xcd JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xce PushV
	var_221_object = var_1_object; // 0xcf MovT
	func_3347(var_220_bool, var_221_object); // 0xd0 NEW_2
	if(var_220_bool == 0) goto Label_212; // 0xd2 JumpB
	var_217_bool = 0; // 0xd3 MovB
	
Label_212:
	if(var_217_bool == 0) goto Label_218; // 0xd4 JumpB
	var_222_int = 543349; // 0xd5 PushI
	var_223_int = 45804; // 0xd6 PushI
	var_224_int = 45807; // 0xd7 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xd8 TObjFunc
	
Label_218:
	var_225_bool = 0; // 0xda PushV
	var_225_bool = 1; // 0xdb MovB
	var_226_bool = 0; var_227_object = Obj(); // 0xdc PushV
	var_227_object = var_1_object; // 0xdd MovT
	func_3337(var_226_bool, var_227_object); // 0xde NEW_2
	if(var_226_bool == 0) goto Label_231; // 0xe0 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0xe1 PushV
	var_229_object = var_1_object; // 0xe2 MovT
	func_3347(var_228_bool, var_229_object); // 0xe3 NEW_2
	if(var_228_bool == 0) goto Label_231; // 0xe5 JumpB
	var_225_bool = 0; // 0xe6 MovB
	
Label_231:
	if(var_225_bool == 0) goto Label_237; // 0xe7 JumpB
	var_230_int = 543345; // 0xe8 PushI
	var_231_int = 45804; // 0xe9 PushI
	var_232_int = 45803; // 0xea PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xeb TObjFunc
	
Label_237:
	var_233_bool = 0; // 0xed PushV
	var_233_bool = 1; // 0xee MovB
	var_234_bool = 0; var_235_object = Obj(); // 0xef PushV
	var_235_object = var_1_object; // 0xf0 MovT
	func_3357(var_234_bool, var_235_object); // 0xf1 NEW_2
	if(var_234_bool == 0) goto Label_250; // 0xf3 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0xf4 PushV
	var_237_object = var_1_object; // 0xf5 MovT
	func_3367(var_236_bool, var_237_object); // 0xf6 NEW_2
	if(var_236_bool == 0) goto Label_250; // 0xf8 JumpB
	var_233_bool = 0; // 0xf9 MovB
	
Label_250:
	if(var_233_bool == 0) goto Label_256; // 0xfa JumpB
	var_238_int = 543347; // 0xfb PushI
	var_239_int = 45806; // 0xfc PushI
	var_240_int = 45805; // 0xfd PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xfe TObjFunc
	
Label_256:
	var_241_bool = 0; // 0x100 PushV
	var_241_bool = 1; // 0x101 MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x102 PushV
	var_243_object = var_1_object; // 0x103 MovT
	func_3357(var_242_bool, var_243_object); // 0x104 NEW_2
	if(var_242_bool == 0) goto Label_269; // 0x106 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x107 PushV
	var_245_object = var_1_object; // 0x108 MovT
	func_3367(var_244_bool, var_245_object); // 0x109 NEW_2
	if(var_244_bool == 0) goto Label_269; // 0x10b JumpB
	var_241_bool = 0; // 0x10c MovB
	
Label_269:
	if(var_241_bool == 0) goto Label_275; // 0x10d JumpB
	var_246_int = 543357; // 0x10e PushI
	var_247_int = 45806; // 0x10f PushI
	var_248_int = 45816; // 0x110 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x111 TObjFunc
	
Label_275:
	var_249_bool = 0; // 0x113 PushV
	var_249_bool = 1; // 0x114 MovB
	var_250_bool = 0; var_251_object = Obj(); // 0x115 PushV
	var_251_object = var_1_object; // 0x116 MovT
	func_3357(var_250_bool, var_251_object); // 0x117 NEW_2
	if(var_250_bool == 0) goto Label_288; // 0x119 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x11a PushV
	var_253_object = var_1_object; // 0x11b MovT
	func_3367(var_252_bool, var_253_object); // 0x11c NEW_2
	if(var_252_bool == 0) goto Label_288; // 0x11e JumpB
	var_249_bool = 0; // 0x11f MovB
	
Label_288:
	if(var_249_bool == 0) goto Label_294; // 0x120 JumpB
	var_254_int = 543355; // 0x121 PushI
	var_255_int = -1; // 0x122 PushI
	var_256_int = 45814; // 0x123 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x124 TObjFunc
	
Label_294:
	var_257_int = 543351; // 0x126 PushI
	var_258_int = -1; // 0x127 PushI
	var_259_int = 45809; // 0x128 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x129 TObjFunc
	goto Label_336; // 0x12b Jump
	
Label_300:
	var_260_string = ""; // 0x12c PushV
	var_260_string = "Neutral"; // 0x12d MovS
	func_366(var_120_object, var_260_string); // 0x12e NEW_2
	var_261_int = 538136; // 0x130 PushI
	SetMessage(var_261_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_262_bool = 0; // 0x135 PushV
	var_262_bool = 0; // 0x136 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x137 PushV
	var_264_object = var_1_object; // 0x138 MovT
	func_3313(var_264_object); // 0x139 NEW_2
	if(var_263_bool == 0) goto Label_322; // 0x13b JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x13c PushV
	var_270_object = var_1_object; // 0x13d MovT
	func_3377(var_269_bool, var_270_object); // 0x13e NEW_2
	if(var_269_bool == 0) goto Label_322; // 0x140 JumpB
	var_262_bool = 1; // 0x141 MovB
	
Label_322:
	if(var_262_bool == 0) goto Label_328; // 0x142 JumpB
	var_275_int = 538137; // 0x143 PushI
	var_276_int = 40009; // 0x144 PushI
	var_277_int = 40008; // 0x145 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x146 TObjFunc
	
Label_328:
	var_278_int = 538165; // 0x148 PushI
	var_279_int = -1; // 0x149 PushI
	var_280_int = 40040; // 0x14a PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x14b TObjFunc
	goto Label_336; // 0x14d Jump
}


func_2166(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x876 PushV
	GetDirection(var_77_cvector); // 0x877 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x879 PushV
	var_80_object = var_0_bool; // 0x87a MovT
	func_2762(var_80_object); // 0x87b NEW_2
	var_78_cvector = var_79_cvector; // 0x87c Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x87e PushV
	var_86_cvector = var_77_cvector; // 0x87f Mov
	var_87_cvector = var_78_cvector; // 0x880 Mov
	func_3255(var_85_float, var_86_cvector, var_87_cvector); // 0x881 NEW_2
	var_93_float = -0.34202; // 0x883 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x884 GE2
	return 4; // 0x885 Return
}


func_3191()
{
	var_25_bool = 0; // 0xc77 PushV
	func_4122(var_25_bool); // 0xc78 NEW_2
	if(var_25_bool == 0) goto Label_3197; // 0xc7a JumpB
	lshStopSpeech(); // 0xc7b Func
	
Label_3197:
	return 0; // 0xc7d Return
}


func_3198(var_48_string)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0xc7e PushV
	IsExisting3DSound(var_57_bool, var_48_string); // 0xc7f Func
	var_65_bool = var_57_bool == 0; // 0xc81 Not
	if(var_65_bool == 0) goto Label_3223; // 0xc82 JumpB
	var_58_int = 0; // 0xc83 MovI
	
Label_3204:
	var_66_int = 1; // 0xc84 PushI
	var_67_int = var_58_int + var_66_int; // 0xc85 Add
	var_68_int = var_48_string + var_67_int; // 0xc86 Add
	IsExisting3DSound(var_59_bool, var_68_int); // 0xc87 Func
	var_69_bool = var_59_bool == 0; // 0xc89 Not
	if(var_69_bool == 0) goto Label_3212; // 0xc8a JumpB
	goto Label_3215; // 0xc8b Jump
	
Label_3215:
	var_70_bool = var_58_int == 0; // 0xc8f Not
	if(var_70_bool == 0) goto Label_3218; // 0xc90 JumpB
	return 16; // 0xc91 Return
	
Label_3218:
	irand(var_60_int, var_58_int); // 0xc92 Func
	var_71_int = 1; // 0xc94 PushI
	var_72_int = var_60_int + var_71_int; // 0xc95 Add
	var_48_string = var_48_string + var_72_int; // 0xc96 Add2
	
Label_3223:
	Is3DSoundLoaded(var_61_bool, var_48_string); // 0xc97 Func
	var_73_bool = var_61_bool; // 0xc99 Push
	if(var_73_bool == 0) goto Label_3238; // 0xc9a JumpB
	GetEyesHeight(var_62_float); // 0xc9b Func
	GetDirection(var_63_cvector); // 0xc9d Func
	var_74_int = 50; // 0xc9f PushI
	var_64_cvector = var_63_cvector * var_74_int; // 0xca0 Mult2
	var_75_float = GetByIndex(var_64_cvector, 1); // 0xca1 PushE
	var_75_float = var_75_float + var_62_float; // 0xca2 Add2
	SetByIndex(var_64_cvector, 1) = var_75_float; // 0xca3 PopE
	PlayGlobalSound(var_48_string, var_64_cvector); // 0xca4 Func
	
Label_3238:
	return 16; // 0xca6 Return
	
Label_3212:
	var_76_int = 1; // 0xc8c PushI
	var_58_int = var_58_int + var_76_int; // 0xc8d Add2
	goto Label_3204; // 0xc8e Jump
}


func_2182(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x886 PushV
	GetPosition(var_44_cvector); // 0x887 Func
	GetPosition(var_45_cvector); // 0x889 TObjFunc
	GetDirection(var_46_cvector); // 0x88b Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x88d PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x88e PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x88f Sub2
	func_3245(var_52_cvector, var_53_cvector); // 0x890 NEW_2
	var_59_float = 0.75; // 0x892 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x893 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x894 Add2
	func_3245(var_50_cvector, var_51_cvector); // 0x895 NEW_2
	var_47_cvector = var_50_cvector; // 0x896 Mov
	var_61_int = 32; // 0x898 PushI
	var_62_float = 7000.0; // 0x899 PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x89a Func
	var_63_int = 100; // 0x89c PushI
	var_49_float = var_49_float - var_63_int; // 0x89d Sub2
	var_64_int = 0; // 0x89e PushI
	var_65_bool = var_49_float < var_64_int; // 0x89f LT
	if(var_65_bool == 0) goto Label_2210; // 0x8a0 JumpB
	var_49_float = 0; // 0x8a1 MovI
	
Label_2210:
	var_36_cvector = var_48_cvector * var_49_float; // 0x8a2 Mult2
	return 12; // 0x8a3 Return
}


func_3719(var_142_int, var_143_string)
{
	var_144_int = 0; var_145_int = 0; // 0xe87 PushV
	GetInvItemByName(var_145_int, var_143_string); // 0xe88 Func
	var_142_int = var_145_int; // 0xe8a Mov
	return 2; // 0xe8b Return
}


func_3724(var_23_object)
{
	var_24_object = Obj(); // 0xe8d PushV
	var_24_object = var_23_object; // 0xe8e Mov
	TaskCall(3); // 0xe8f TaskCall
	func_910(var_24_object); // 0xe90 NEW_2
	TaskReturn(); // 0xe91 TaskReturn
	return 0; // 0xe93 Return
}


func_1678(var_96_bool)
{
	var_96_bool = 1; // 0x68e MovB
	return 0; // 0x68f Return
}


func_1680()
{
	StopAnimation(); // 0x690 Func
	StopGroup0(); // 0x692 Func
	return 0; // 0x694 Return
}


func_1685(var_0_bool, var_83_object)
{
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; // 0x695 PushV
	var_0_bool = var_83_object; // 0x696 TMov
	func_1736(var_90_bool); // 0x698 NEW_2
	GetDirection(var_88_cvector); // 0x69a Func
	var_98_cvector = CVector(0,0,0); var_99_object = Obj(); // 0x69c PushV
	var_99_object = var_0_bool; // 0x69d MovT
	func_2762(var_99_object); // 0x69e NEW_2
	var_89_cvector = var_98_cvector; // 0x69f Mov
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x6a1 PushV
	var_105_cvector = var_88_cvector; // 0x6a2 Mov
	var_106_cvector = var_89_cvector; // 0x6a3 Mov
	func_3282(var_104_float, var_105_cvector, var_106_cvector); // 0x6a4 NEW_2
	var_128_int = 0; // 0x6a6 PushI
	var_129_bool = var_104_float < var_128_int; // 0x6a7 LT
	if(var_129_bool == 0) goto Label_1711; // 0x6a8 JumpB
	var_130_object = Obj(); // 0x6a9 PushV
	var_130_object = var_0_bool; // 0x6aa MovT
	func_2985(); // 0x6ab NEW_2
	var_90_bool = 1; // 0x6ad MovB
	goto Label_1714; // 0x6ae Jump
	
Label_1714:
	var_139_bool = var_90_bool; // 0x6b2 Push
	if(var_139_bool == 0) goto Label_1730; // 0x6b3 JumpB
	var_140_object = Obj(); // 0x6b4 PushV
	var_140_object = var_0_bool; // 0x6b5 MovT
	func_2985(); // 0x6b6 NEW_2
	var_141_int = 111; // 0x6b8 PushI
	var_142_float = 0.5; // 0x6b9 PushF
	SetTimer(var_141_int, var_142_float); // 0x6ba Func
	var_143_float = 5.0; // 0x6bc PushF
	Sleep(var_143_float); // 0x6bd Func
	var_144_int = 111; // 0x6bf PushI
	KillTimer(var_144_int); // 0x6c0 Func
	
Label_1730:
	StopAsync(); // 0x6c2 Func
	var_145_string = "head"; // 0x6c4 PushS
	UnlookAsync(var_145_string); // 0x6c5 Func
	return 6; // 0x6c7 Return
	
Label_1711:
	var_146_float = 1.5; // 0x6af PushF
	Sleep(var_146_float, var_90_bool); // 0x6b0 Func
}


func_2212(var_0_bool, var_1_object, var_2_object, var_112_object)
{
	var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_bool = 0; var_124_cvector = CVector(0,0,0); var_125_float = 0; // 0x8a4 PushV
	var_0_bool = var_112_object; // 0x8a5 TMov
	var_126_cvector = CVector(0,0,0); var_127_float = 0; // 0x8a6 PushV
	var_127_float = 1.74533; // 0x8a7 MovF
	func_2182(var_126_cvector, var_127_float); // 0x8a8 NEW_2
	var_121_cvector = var_126_cvector; // 0x8a9 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x8ab Or2
	var_156_float = 2500.0; // 0x8ac PushF
	var_157_bool = var_122_float < var_156_float; // 0x8ad LT
	if(var_157_bool == 0) goto Label_2241; // 0x8ae JumpB
	var_158_cvector = CVector(0,0,0); var_159_float = 0; // 0x8af PushV
	var_159_float = 2.61799; // 0x8b0 MovF
	func_2182(var_158_cvector, var_159_float); // 0x8b1 NEW_2
	var_121_cvector = var_158_cvector; // 0x8b2 Mov
	var_122_float = var_121_cvector | var_121_cvector; // 0x8b4 Or2
	var_160_float = 2500.0; // 0x8b5 PushF
	var_161_bool = var_122_float < var_160_float; // 0x8b6 LT
	if(var_161_bool == 0) goto Label_2241; // 0x8b7 JumpB
	var_162_string = "Can't retreat, distance: "; // 0x8b8 PushS
	var_163_float = sqrt(var_122_float); // 0x8b9 Sqrt
	var_164_int = var_162_string + var_163_float; // 0x8ba Add
	Trace(var_164_int); // 0x8bb Func
	var_165_float = 0.5; // 0x8bd PushF
	Sleep(var_165_float); // 0x8be Func
	return 10; // 0x8c0 Return
	
Label_2241:
	var_166_float = GetByIndex(var_121_cvector, 0); // 0x8c1 PushE
	var_167_float = GetByIndex(var_121_cvector, 2); // 0x8c2 PushE
	Rotate(var_166_float, var_167_float); // 0x8c3 Func
	var_168_cvector = CVector(0,0,0); // 0x8c5 PushV
	func_2757(var_168_cvector); // 0x8c6 NEW_2
	var_1_object = var_168_cvector + var_121_cvector; // 0x8c8 Add2
	var_171_int = 120; // 0x8c9 PushI
	var_172_float = 0.5; // 0x8ca PushF
	SetTimer(var_171_int, var_172_float); // 0x8cb Func
	var_2_object = 0; // 0x8cd TMovB
	
Label_2254:
	var_173_int = 1; // 0x8ce PushI
	MovePoint(var_173_int, var_173_int, var_123_bool); // 0x8cf Func
	var_174_bool = var_123_bool; // 0x8d1 Push
	if(var_174_bool == 0) goto Label_2282; // 0x8d2 JumpB
	var_175_bool = var_0_bool == 0; // 0x8d3 NullEq
	if(var_175_bool == 0) goto Label_2263; // 0x8d4 JumpB
	goto Label_2284; // 0x8d5 Jump
	
Label_2284:
	return 10; // 0x8ec Return
	
Label_2263:
	var_176_cvector = CVector(0,0,0); var_177_float = 0; // 0x8d7 PushV
	var_177_float = 2.61799; // 0x8d8 MovF
	func_2182(var_176_cvector, var_177_float); // 0x8d9 NEW_2
	var_124_cvector = var_176_cvector; // 0x8da Mov
	var_125_float = var_124_cvector | var_124_cvector; // 0x8dc Or2
	var_178_float = 2500.0; // 0x8dd PushF
	var_179_bool = var_125_float >= var_178_float; // 0x8de GE
	if(var_179_bool == 0) goto Label_2281; // 0x8df JumpB
	var_180_cvector = CVector(0,0,0); // 0x8e0 PushV
	func_2757(var_180_cvector); // 0x8e1 NEW_2
	var_1_object = var_180_cvector + var_124_cvector; // 0x8e3 Add2
	var_181_int = 120; // 0x8e4 PushI
	var_182_float = 0.5; // 0x8e5 PushF
	SetTimer(var_181_int, var_182_float); // 0x8e6 Func
	goto Label_2282; // 0x8e8 Jump
	
Label_2282:
	var_183_bool = var_2_object == 0; // 0x8ea Not
	if(var_183_bool == 0) goto Label_2254; // 0x8eb JumpB
	
Label_2281:
	goto Label_2284; // 0x8e9 Jump
}


func_2725(var_2_object)
{
	Stop(); // 0xaa5 Func
	var_23_int = 120; // 0xaa7 PushI
	KillTimer(var_23_int); // 0xaa8 Func
	var_2_object = 1; // 0xaaa TMovB
	return 0; // 0xaab Return
}


func_3239(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0xca7 PushV
	self(var_112_object); // 0xca8 Func
	var_110_object = var_112_object; // 0xcaa Mov
	return 2; // 0xcab Return
}


func_3245(var_54_cvector, var_55_cvector)
{
	var_62_float = 0; var_63_float = 0; // 0xcad PushV
	var_64_int = var_55_cvector | var_55_cvector; // 0xcae Or
	var_63_float = sqrt(var_64_int); // 0xcaf Sqrt2
	var_65_float = 0.0; // 0xcb0 PushF
	var_66_bool = var_63_float < var_65_float; // 0xcb1 LT
	if(var_66_bool == 0) goto Label_3253; // 0xcb2 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0xcb3 MovV
	return 2; // 0xcb4 Return
	
Label_3253:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0xcb5 Div2
	return 2; // 0xcb6 Return
}


func_2741(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0xab5 PushV
	GetDirection(var_77_cvector); // 0xab6 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0xab8 PushV
	var_80_object = var_0_bool; // 0xab9 MovT
	func_2762(var_80_object); // 0xaba NEW_2
	var_78_cvector = var_79_cvector; // 0xabb Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0xabd PushV
	var_86_cvector = var_77_cvector; // 0xabe Mov
	var_87_cvector = var_78_cvector; // 0xabf Mov
	func_3255(var_85_float, var_86_cvector, var_87_cvector); // 0xac0 NEW_2
	var_93_float = -0.34202; // 0xac2 PushF
	var_74_bool = var_85_float >= var_93_float; // 0xac3 GE2
	return 4; // 0xac4 Return
}


func_3255(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0xcb8 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xcb9 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0xcba Or
	var_91_float = var_89_int * var_90_int; // 0xcbb Mult
	var_92_float = sqrt(var_91_float); // 0xcbc Sqrt
	var_85_float = var_88_int / var_88_int; // 0xcbd Div2
	return 0; // 0xcbe Return
}


func_3769(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0xeba PushS
	var_30_bool = var_28_string == var_29_string; // 0xebb Eq
	if(var_30_bool == 0) goto Label_3780; // 0xebc JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xebd PushV
	var_32_object = var_27_object; // 0xebe Mov
	func_4060(var_31_bool, var_32_object); // 0xebf NEW_2
	var_26_bool = var_31_bool; // 0xec0 Mov
	return 0; // 0xec2 Return
	
Label_3780:
	var_35_string = "player_shot"; // 0xec4 PushS
	var_36_bool = var_28_string == var_35_string; // 0xec5 Eq
	if(var_36_bool == 0) goto Label_3790; // 0xec6 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xec7 PushV
	var_38_object = var_27_object; // 0xec8 Mov
	func_4073(var_37_bool, var_38_object); // 0xec9 NEW_2
	var_26_bool = var_37_bool; // 0xeca Mov
	return 0; // 0xecc Return
	
Label_3790:
	var_52_string = "battle"; // 0xece PushS
	var_53_bool = var_28_string == var_52_string; // 0xecf Eq
	if(var_53_bool == 0) goto Label_3799; // 0xed0 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xed1 PushV
	var_55_object = var_27_object; // 0xed2 Mov
	func_4096(var_54_bool, var_55_object); // 0xed3 NEW_2
	var_26_bool = var_54_bool; // 0xed4 Mov
	return 0; // 0xed6 Return
	
Label_3799:
	var_26_bool = 0; // 0xed7 MovB
	return 0; // 0xed8 Return
}


func_3263(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xcc0 PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0xcc1 PushE
	var_80_float = var_78_float * var_79_float; // 0xcc2 Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xcc3 PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0xcc4 PushE
	var_83_float = var_81_float * var_82_float; // 0xcc5 Mult
	var_75_float = var_80_float + var_83_float; // 0xcc6 Add2
	return 0; // 0xcc7 Return
}


func_2757(var_94_cvector)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); // 0xac5 PushV
	GetPosition(var_96_cvector); // 0xac6 Func
	var_94_cvector = var_96_cvector; // 0xac8 Mov
	return 2; // 0xac9 Return
}


func_1736(var_0_bool)
{
	var_91_object = Obj(); // 0x6c8 PushV
	var_91_object = var_0_bool; // 0x6c9 MovT
	func_3180(var_91_object); // 0x6ca NEW_2
	return 0; // 0x6cc Return
}


func_3272(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0xcc9 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0xcca PushE
	var_88_float = var_86_float * var_87_float; // 0xccb Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0xccc PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0xccd PushE
	var_91_float = var_89_float * var_90_float; // 0xcce Mult
	var_92_int = var_88_float + var_91_float; // 0xccf Add
	var_84_float = sqrt(var_92_int); // 0xcd0 Sqrt2
	return 0; // 0xcd1 Return
}


func_2762(var_56_cvector)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0xaca PushV
	GetPosition(var_60_cvector); // 0xacb Func
	GetPosition(var_61_cvector); // 0xacd ObjFunc
	var_56_cvector = var_61_cvector - var_60_cvector; // 0xacf Sub2
	return 4; // 0xad0 Return
}


func_2769(var_42_float)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0xad1 PushV
	GetPosition(var_47_cvector); // 0xad2 Func
	GetPosition(var_48_cvector); // 0xad4 ObjFunc
	var_49_cvector = var_48_cvector - var_47_cvector; // 0xad6 Sub2
	var_42_float = var_49_cvector | var_49_cvector; // 0xad7 Or2
	return 6; // 0xad8 Return
}


func_3282(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xcd3 PushV
	var_76_cvector = var_73_cvector; // 0xcd4 Mov
	var_77_cvector = var_74_cvector; // 0xcd5 Mov
	func_3263(var_75_float, var_76_cvector, var_77_cvector); // 0xcd6 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0xcd8 PushV
	var_85_cvector = var_73_cvector; // 0xcd9 Mov
	func_3272(var_84_float, var_85_cvector); // 0xcda NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xcdc PushV
	var_94_cvector = var_74_cvector; // 0xcdd Mov
	func_3272(var_93_float, var_94_cvector); // 0xcde NEW_2
	var_95_float = var_84_float * var_93_float; // 0xce0 Mult
	var_72_float = var_75_float / var_75_float; // 0xce1 Div2
	return 0; // 0xce2 Return
}


func_3801(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0xeda PushS
	var_63_bool = var_61_string == var_62_string; // 0xedb Eq
	if(var_63_bool == 0) goto Label_3810; // 0xedc JumpB
	var_64_object = Obj(); // 0xedd PushV
	var_64_object = var_60_object; // 0xede Mov
	func_4065(var_64_object); // 0xedf NEW_2
	goto Label_3825; // 0xee1 Jump
	
Label_3825:
	return 0; // 0xef1 Return
	
Label_3810:
	var_137_string = "player_shot"; // 0xee2 PushS
	var_138_bool = var_61_string == var_137_string; // 0xee3 Eq
	if(var_138_bool == 0) goto Label_3818; // 0xee4 JumpB
	var_139_object = Obj(); // 0xee5 PushV
	var_139_object = var_60_object; // 0xee6 Mov
	func_4088(var_139_object); // 0xee7 NEW_2
	goto Label_3825; // 0xee9 Jump
	
Label_3818:
	var_205_string = "battle"; // 0xeea PushS
	var_206_bool = var_61_string == var_205_string; // 0xeeb Eq
	if(var_206_bool == 0) goto Label_3825; // 0xeec JumpB
	var_207_object = Obj(); // 0xeed PushV
	var_207_object = var_60_object; // 0xeee Mov
	func_4103(var_207_object); // 0xeef NEW_2
}


func_2777(var_106_bool, var_107_object)
{
	var_108_bool = 0; var_109_bool = 0; // 0xad9 PushV
	IsPlayerActor(var_107_object, var_109_bool); // 0xada Func
	var_106_bool = var_109_bool; // 0xadc Mov
	return 2; // 0xadd Return
}


func_2782(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0xade PushV
	var_56_string = "HasProperty"; // 0xadf PushS
	var_57_int = 2; // 0xae0 PushI
	var_58_bool = IsFuncExist(var_52_object, var_56_string, var_57_int); // 0xae1 FuncExist
	var_59_bool = var_58_bool == 0; // 0xae2 Not
	if(var_59_bool == 0) goto Label_2790; // 0xae3 JumpB
	var_51_bool = 0; // 0xae4 MovB
	return 2; // 0xae5 Return
	
Label_2790:
	HasProperty(var_53_string, var_55_bool); // 0xae6 ObjFunc
	var_51_bool = var_55_bool; // 0xae8 Mov
	return 2; // 0xae9 Return
}


func_3299(var_132_int, var_133_string)
{
	var_134_int = 0; var_135_int = 0; // 0xce3 PushV
	GetVariable(var_133_string, var_135_int); // 0xce4 Func
	var_132_int = var_135_int; // 0xce6 Mov
	return 2; // 0xce7 Return
}


func_3304(var_124_int)
{
	var_125_float = 0; var_126_float = 0; // 0xce8 PushV
	GetGameTime(var_126_float); // 0xce9 Func
	var_127_int = 1; // 0xceb PushI
	var_128_int = 0; // 0xcec PushV
	var_129_int = 24; // 0xced PushI
	var_128_int = var_126_float / var_126_float; // 0xcee Div2
	var_124_int = var_127_int + var_128_int; // 0xcef Add2
	return 2; // 0xcf0 Return
}


func_2794(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0xaea PushV
	IsDead(var_47_bool); // 0xaeb ObjFunc
	var_44_bool = var_47_bool; // 0xaed Mov
	return 2; // 0xaee Return
}


func_2799(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); // 0xaef PushV
	var_39_bool = var_34_object == 0; // 0xaf0 NullEq
	if(var_39_bool == 0) goto Label_2804; // 0xaf1 JumpB
	var_33_bool = 0; // 0xaf2 MovB
	return 4; // 0xaf3 Return
	
Label_2804:
	var_40_bool = 0; // 0xaf4 PushV
	var_40_bool = 0; // 0xaf5 MovB
	var_41_string = "IsDead"; // 0xaf6 PushS
	var_42_int = 1; // 0xaf7 PushI
	var_43_bool = IsFuncExist(var_34_object, var_41_string, var_42_int); // 0xaf8 FuncExist
	if(var_43_bool == 0) goto Label_2816; // 0xaf9 JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0xafa PushV
	var_45_object = var_34_object; // 0xafb Mov
	func_2794(var_45_object); // 0xafc NEW_2
	if(var_44_bool == 0) goto Label_2816; // 0xafe JumpB
	var_40_bool = 1; // 0xaff MovB
	
Label_2816:
	if(var_40_bool == 0) goto Label_2819; // 0xb00 JumpB
	var_33_bool = 0; // 0xb01 MovB
	return 4; // 0xb02 Return
	
Label_2819:
	GetScene(var_37_object); // 0xb03 Func
	var_48_bool = var_37_object == 0; // 0xb05 NullEq
	if(var_48_bool == 0) goto Label_2825; // 0xb06 JumpB
	var_33_bool = 0; // 0xb07 MovB
	return 4; // 0xb08 Return
	
Label_2825:
	GetScene(var_38_object); // 0xb09 ObjFunc
	var_49_bool = var_37_object != var_38_object; // 0xb0b Neq
	if(var_49_bool == 0) goto Label_2831; // 0xb0c JumpB
	var_33_bool = 0; // 0xb0d MovB
	return 4; // 0xb0e Return
	
Label_2831:
	var_33_bool = 1; // 0xb0f MovB
	return 4; // 0xb10 Return
}


func_3313(var_263_bool)
{
	var_265_int = 0; var_266_string = ""; // 0xcf2 PushV
	var_266_string = "branch"; // 0xcf3 MovS
	func_3299(var_265_int, var_266_string); // 0xcf4 NEW_2
	var_267_int = 0; // 0xcf6 PushI
	var_268_bool = var_265_int == var_267_int; // 0xcf7 Eq
	if(var_268_bool == 0) goto Label_3323; // 0xcf8 JumpB
	var_263_bool = 1; // 0xcf9 MovB
	return 0; // 0xcfa Return
	
Label_3323:
	var_263_bool = 0; // 0xcfb MovB
	return 0; // 0xcfc Return
}


func_3826(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0xef2 PushV
	var_27_bool = 0; // 0xef3 PushV
	var_27_bool = 0; // 0xef4 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0xef5 PushV
	var_29_object = var_24_object; // 0xef6 Mov
	func_4060(var_28_bool, var_29_object); // 0xef7 NEW_2
	if(var_28_bool == 0) goto Label_3840; // 0xef9 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0xefa PushV
	var_33_object = var_24_object; // 0xefb Mov
	func_2777(var_32_bool, var_33_object); // 0xefc NEW_2
	if(var_32_bool == 0) goto Label_3840; // 0xefe JumpB
	var_27_bool = 1; // 0xeff MovB
	
Label_3840:
	if(var_27_bool == 0) goto Label_3847; // 0xf00 JumpB
	IsWeaponHolstered(var_26_bool); // 0xf01 ObjFunc
	var_36_bool = var_26_bool == 0; // 0xf03 Not
	if(var_36_bool == 0) goto Label_3847; // 0xf04 JumpB
	var_23_bool = 1; // 0xf05 MovB
	return 2; // 0xf06 Return
	
Label_3847:
	var_23_bool = 0; // 0xf07 MovB
	return 2; // 0xf08 Return
}


func_1277(var_2_object)
{
	var_23_int = 110; // 0x4fd PushI
	KillTimer(var_23_int); // 0x4fe Func
	var_2_object = 0; // 0x500 TMovB
	func_1413(var_21_cvector, var_22_bool); // 0x502 NEW_2
	return 0; // 0x504 Return
}


func_3325(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0xcfe PushV
	var_133_string = "branch"; // 0xcff MovS
	func_3299(var_132_int, var_133_string); // 0xd00 NEW_2
	var_136_int = 2; // 0xd02 PushI
	var_137_bool = var_132_int == var_136_int; // 0xd03 Eq
	if(var_137_bool == 0) goto Label_3335; // 0xd04 JumpB
	var_130_bool = 1; // 0xd05 MovB
	return 0; // 0xd06 Return
	
Label_3335:
	var_130_bool = 0; // 0xd07 MovB
	return 0; // 0xd08 Return
}


func_1285(var_2_object)
{
	var_81_int = 110; // 0x505 PushI
	KillTimer(var_81_int); // 0x506 Func
	var_2_object = 0; // 0x508 TMovB
	func_1420(var_26_bool, var_27_int); // 0x50a NEW_2
	return 0; // 0x50c Return
}


func_3337(var_138_bool, var_139_object)
{
	var_140_bool = 0; var_141_object = Obj(); // 0xd0a PushV
	var_141_object = var_139_object; // 0xd0b Mov
	func_3387(var_141_object); // 0xd0c NEW_2
	if(var_140_bool == 0) goto Label_3345; // 0xd0e JumpB
	var_138_bool = 1; // 0xd0f MovB
	return 0; // 0xd10 Return
	
Label_3345:
	var_138_bool = 0; // 0xd11 MovB
	return 0; // 0xd12 Return
}


func_3849(var_39_object)
{
	var_40_object = Obj(); // 0xf0a PushV
	var_40_object = var_39_object; // 0xf0b Mov
	func_4065(var_40_object); // 0xf0c NEW_2
	return 0; // 0xf0e Return
}


func_3855(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0xf10 PushV
	var_27_object = var_25_object; // 0xf11 Mov
	func_2777(var_26_bool, var_27_object); // 0xf12 NEW_2
	if(var_26_bool == 0) goto Label_3867; // 0xf14 JumpB
	var_30_object = Obj(); // 0xf15 PushV
	func_3239(var_30_object); // 0xf16 NEW_2
	var_33_float = -0.05; // 0xf18 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0xf19 Func
	
Label_3867:
	return 0; // 0xf1b Return
}


func_2835(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0xb13 PushV
	var_33_bool = 0; var_34_object = Obj(); // 0xb14 PushV
	var_34_object = var_30_object; // 0xb15 Mov
	func_2799(var_33_bool, var_34_object); // 0xb16 NEW_2
	var_50_bool = var_33_bool == 0; // 0xb18 Not
	if(var_50_bool == 0) goto Label_2844; // 0xb19 JumpB
	var_29_bool = 0; // 0xb1a MovB
	return 2; // 0xb1b Return
	
Label_2844:
	var_51_bool = 0; var_52_object = Obj(); var_53_string = ""; // 0xb1c PushV
	var_52_object = var_30_object; // 0xb1d Mov
	var_53_string = "noaccess"; // 0xb1e MovS
	func_2782(var_51_bool, var_52_object, var_53_string); // 0xb1f NEW_2
	var_60_bool = var_51_bool == 0; // 0xb21 Not
	if(var_60_bool == 0) goto Label_2853; // 0xb22 JumpB
	var_29_bool = 1; // 0xb23 MovB
	return 2; // 0xb24 Return
	
Label_2853:
	var_61_string = "noaccess"; // 0xb25 PushS
	GetProperty(var_61_string, var_32_int); // 0xb26 ObjFunc
	var_62_int = 0; // 0xb28 PushI
	var_29_bool = var_32_int == var_62_int; // 0xb29 Eq2
	return 2; // 0xb2a Return
}


func_3347(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj(); // 0xd14 PushV
	var_153_object = var_151_object; // 0xd15 Mov
	func_3394(var_153_object); // 0xd16 NEW_2
	if(var_152_bool == 0) goto Label_3355; // 0xd18 JumpB
	var_150_bool = 1; // 0xd19 MovB
	return 0; // 0xd1a Return
	
Label_3355:
	var_150_bool = 0; // 0xd1b MovB
	return 0; // 0xd1c Return
}


func_1302(var_2_object, var_23_object)
{
	var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; // 0x516 PushV
	var_28_bool = 0; var_29_object = Obj(); // 0x517 PushV
	var_29_object = var_23_object; // 0x518 Mov
	func_2835(var_28_bool, var_29_object); // 0x519 NEW_2
	var_62_bool = var_28_bool == 0; // 0x51b Not
	if(var_62_bool == 0) goto Label_1310; // 0x51c JumpB
	return 4; // 0x51d Return
	
Label_1310:
	var_63_object = var_2_object; // 0x51e PushT
	if(var_63_object == 0) goto Label_1313; // 0x51f JumpB
	return 4; // 0x520 Return
	
Label_1313:
	IsPlayerActor(var_23_object, var_26_bool); // 0x521 Func
	var_64_bool = var_26_bool == 0; // 0x523 Not
	if(var_64_bool == 0) goto Label_1318; // 0x524 JumpB
	return 4; // 0x525 Return
	
Label_1318:
	var_65_int = 0; var_66_object = Obj(); // 0x526 PushV
	var_66_object = var_23_object; // 0x527 Mov
	func_3921(var_66_object); // 0x528 NEW_2
	var_27_int = var_65_int; // 0x529 Mov
	var_77_int = 0; // 0x52b PushI
	var_78_bool = var_27_int > var_77_int; // 0x52c GT
	if(var_78_bool == 0) goto Label_1341; // 0x52d JumpB
	var_79_int = 1; // 0x52e PushI
	var_80_bool = var_27_int > var_79_int; // 0x52f GT
	if(var_80_bool == 0) goto Label_1332; // 0x530 JumpB
	func_1285(var_27_int); // 0x532 NEW_2
	
Label_1332:
	var_82_object = Obj(); // 0x534 PushV
	var_82_object = var_23_object; // 0x535 Mov
	func_3930(var_82_object); // 0x536 NEW_2
	var_2_object = 1; // 0x538 TMovB
	var_147_int = 110; // 0x539 PushI
	var_148_float = 10.0; // 0x53a PushF
	SetTimer(var_147_int, var_148_float); // 0x53b Func
	
Label_1341:
	return 4; // 0x53d Return
}


func_3868(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xf1c PushV
	var_27_string = "heal"; // 0xf1d PushS
	var_28_bool = var_24_string == var_27_string; // 0xf1e Eq
	if(var_28_bool == 0) goto Label_3882; // 0xf1f JumpB
	var_29_string = "player"; // 0xf20 PushS
	FindActor(var_26_object, var_29_string); // 0xf21 Func
	var_30_bool = 0; var_31_object = Obj(); // 0xf23 PushV
	var_31_object = var_26_object; // 0xf24 Mov
	func_4109(var_31_object); // 0xf25 NEW_2
	var_23_bool = var_30_bool; // 0xf26 Mov
	return 2; // 0xf28 Return
	
Label_3882:
	var_23_bool = 0; // 0xf2a MovB
	return 2; // 0xf2b Return
}


func_3357(var_157_bool, var_158_object)
{
	var_159_bool = 0; var_160_object = Obj(); // 0xd1e PushV
	var_160_object = var_158_object; // 0xd1f Mov
	func_3401(var_160_object); // 0xd20 NEW_2
	if(var_159_bool == 0) goto Label_3365; // 0xd22 JumpB
	var_157_bool = 1; // 0xd23 MovB
	return 0; // 0xd24 Return
	
Label_3365:
	var_157_bool = 0; // 0xd25 MovB
	return 0; // 0xd26 Return
}


func_2337(var_2_object)
{
	Stop(); // 0x921 Func
	var_23_int = 120; // 0x923 PushI
	KillTimer(var_23_int); // 0x924 Func
	var_2_object = 1; // 0x926 TMovB
	return 0; // 0x927 Return
}


func_3367(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_object = Obj(); // 0xd28 PushV
	var_167_object = var_165_object; // 0xd29 Mov
	func_3408(var_167_object); // 0xd2a NEW_2
	if(var_166_bool == 0) goto Label_3375; // 0xd2c JumpB
	var_164_bool = 1; // 0xd2d MovB
	return 0; // 0xd2e Return
	
Label_3375:
	var_164_bool = 0; // 0xd2f MovB
	return 0; // 0xd30 Return
}


func_2859(var_39_object)
{
	var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; var_47_bool = 0; var_48_int = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_string = ""; // 0xb2b PushV
	var_54_bool = var_39_object == 0; // 0xb2c NullEq
	if(var_54_bool == 0) goto Label_2863; // 0xb2d JumpB
	return 14; // 0xb2e Return
	
Label_2863:
	IsDead(var_47_bool); // 0xb2f Func
	var_55_bool = var_47_bool; // 0xb31 Push
	if(var_55_bool == 0) goto Label_2868; // 0xb32 JumpB
	return 14; // 0xb33 Return
	
Label_2868:
	GetSecondaryAnimationType(var_48_int); // 0xb34 Func
	var_56_int = 0; // 0xb36 PushI
	var_57_bool = var_48_int < var_56_int; // 0xb37 LT
	if(var_57_bool == 0) goto Label_2874; // 0xb38 JumpB
	return 14; // 0xb39 Return
	
Label_2874:
	GetPosition(var_49_cvector); // 0xb3a ObjFunc
	GetPosition(var_50_cvector); // 0xb3c Func
	GetDirection(var_51_cvector); // 0xb3e Func
	var_52_cvector = var_50_cvector - var_49_cvector; // 0xb40 Sub2
	var_58_float = GetByIndex(var_52_cvector, 0); // 0xb41 PushE
	var_59_float = GetByIndex(var_51_cvector, 0); // 0xb42 PushE
	var_60_float = var_58_float * var_59_float; // 0xb43 Mult
	var_61_float = GetByIndex(var_52_cvector, 2); // 0xb44 PushE
	var_62_float = GetByIndex(var_51_cvector, 2); // 0xb45 PushE
	var_63_float = var_61_float * var_62_float; // 0xb46 Mult
	var_64_int = var_60_float + var_63_float; // 0xb47 Add
	var_65_int = 0; // 0xb48 PushI
	var_66_bool = var_64_int >= var_65_int; // 0xb49 GE
	if(var_66_bool == 0) goto Label_2893; // 0xb4a JumpB
	var_53_string = "fhit"; // 0xb4b MovS
	goto Label_2894; // 0xb4c Jump
	
Label_2894:
	var_67_string = "hit_react"; // 0xb4e PushS
	var_68_string = "1"; // 0xb4f PushS
	var_69_int = var_53_string + var_68_string; // 0xb50 Add
	var_70_string = "2"; // 0xb51 PushS
	var_71_int = var_53_string + var_70_string; // 0xb52 Add
	var_72_int = -10; // 0xb53 PushI
	FadeSecondaryAnimation(var_67_string, var_69_int, var_71_int, var_72_int); // 0xb54 Func
	return 14; // 0xb56 Return
	
Label_2893:
	var_53_string = "bhit"; // 0xb4d MovS
}


func_3884(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xf2c PushV
	var_37_string = "heal"; // 0xf2d PushS
	var_38_bool = var_34_string == var_37_string; // 0xf2e Eq
	if(var_38_bool == 0) goto Label_3896; // 0xf2f JumpB
	var_39_string = "player"; // 0xf30 PushS
	FindActor(var_36_object, var_39_string); // 0xf31 Func
	var_40_object = Obj(); // 0xf33 PushV
	var_40_object = var_36_object; // 0xf34 Mov
	func_4112(); // 0xf35 NEW_2
	var_36_object = 0; // 0xf37 SetNull
	
Label_3896:
	return 2; // 0xf38 Return
}


func_3377(var_269_bool, var_270_object)
{
	var_271_bool = 0; var_272_object = Obj(); // 0xd32 PushV
	var_272_object = var_270_object; // 0xd33 Mov
	func_3415(var_272_object); // 0xd34 NEW_2
	if(var_271_bool == 0) goto Label_3385; // 0xd36 JumpB
	var_269_bool = 1; // 0xd37 MovB
	return 0; // 0xd38 Return
	
Label_3385:
	var_269_bool = 0; // 0xd39 MovB
	return 0; // 0xd3a Return
}


func_2353(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x931 PushV
	GetDirection(var_77_cvector); // 0x932 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x934 PushV
	var_80_object = var_0_bool; // 0x935 MovT
	func_2762(var_80_object); // 0x936 NEW_2
	var_78_cvector = var_79_cvector; // 0x937 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x939 PushV
	var_86_cvector = var_77_cvector; // 0x93a Mov
	var_87_cvector = var_78_cvector; // 0x93b Mov
	func_3255(var_85_float, var_86_cvector, var_87_cvector); // 0x93c NEW_2
	var_93_float = -0.34202; // 0x93e PushF
	var_74_bool = var_85_float >= var_93_float; // 0x93f GE2
	return 4; // 0x940 Return
}


func_3897(var_77_string, var_78_int)
{
	var_79_string = ""; var_80_string = ""; // 0xf39 PushV
	var_80_string = "idle"; // 0xf3a MovS
	var_81_int = var_78_int; // 0xf3b Push
	if(var_81_int == 0) goto Label_3902; // 0xf3c JumpB
	var_80_string = var_80_string + var_78_int; // 0xf3d Add2
	
Label_3902:
	var_77_string = var_80_string; // 0xf3e Mov
	return 2; // 0xf3f Return
}


func_3387(var_140_bool)
{
	var_142_int = 0; // 0xd3c PushV
	func_3304(var_142_int); // 0xd3d NEW_2
	var_148_int = 3; // 0xd3f PushI
	var_140_bool = var_142_int == var_148_int; // 0xd40 Eq2
	return 0; // 0xd41 Return
}


func_1342(var_0_bool, var_1_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; // 0x53e PushV
	var_0_bool = 0; // 0x53f TMovB
	var_1_object = 0; // 0x540 TMovB
	var_40_float = 0.5; // 0x541 PushF
	rand(var_34_float, var_40_float); // 0x542 Func
	Sleep(var_34_float); // 0x544 Func
	
Label_1350:
	var_41_bool = var_0_bool == 0; // 0x546 Not
	if(var_41_bool == 0) goto Label_1400; // 0x547 JumpB
	var_42_bool = var_1_object == 0; // 0x548 Not
	if(var_42_bool == 0) goto Label_1369; // 0x549 JumpB
	
Label_1354:
	GetPosition(var_36_cvector); // 0x54a Func
	var_43_float = 0; // 0x54c PushV
	func_1401(var_43_float); // 0x54d NEW_2
	GetRandomPFPointInCircle(var_35_cvector, var_36_cvector, var_43_float, var_37_bool); // 0x54f Func
	var_46_bool = var_37_bool; // 0x551 Push
	if(var_46_bool == 0) goto Label_1364; // 0x552 JumpB
	goto Label_1368; // 0x553 Jump
	
Label_1368:
	goto Label_1370; // 0x558 Jump
	
Label_1370:
	var_47_object = Obj(); var_48_cvector = CVector(0,0,0); // 0x55a PushV
	var_48_cvector = var_35_cvector; // 0x55b Mov
	func_1429(var_47_object, var_48_cvector); // 0x55c NEW_2
	var_38_object = var_47_object; // 0x55d Mov
	var_51_bool = var_38_object != 0; // 0x55f NullNeq
	if(var_51_bool == 0) goto Label_1395; // 0x560 JumpB
	RotatePath(var_38_object, var_39_bool); // 0x561 Func
	var_52_bool = var_39_bool; // 0x563 Push
	if(var_52_bool == 0) goto Label_1394; // 0x564 JumpB
	var_53_bool = 0; // 0x565 PushV
	func_1427(var_53_bool); // 0x566 NEW_2
	FollowPath(var_38_object, var_53_bool, var_39_bool); // 0x568 Func
	var_38_object = 0; // 0x56a SetNull
	var_54_bool = var_39_bool; // 0x56b Push
	if(var_54_bool == 0) goto Label_1394; // 0x56c JumpB
	TaskCall(5); // 0x56e TaskCall
	func_1599(); // 0x56f NEW_2
	TaskReturn(); // 0x570 TaskReturn
	
Label_1394:
	goto Label_1398; // 0x572 Jump
	
Label_1398:
	var_38_object = 0; // 0x576 SetNull
	goto Label_1350; // 0x577 Jump
	
Label_1395:
	var_106_int = 1; // 0x573 PushI
	Sleep(var_106_int); // 0x574 Func
	
Label_1364:
	var_107_int = 1; // 0x554 PushI
	Sleep(var_107_int); // 0x555 Func
	goto Label_1354; // 0x557 Jump
	
Label_1369:
	var_1_object = 0; // 0x559 TMovB
	
Label_1400:
	return 12; // 0x578 Return
}


func_3904(var_71_int)
{
	var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; // 0xf40 PushV
	var_74_int = 0; // 0xf41 MovI
	
Label_3906:
	var_76_string = "all"; // 0xf42 PushS
	var_77_string = ""; var_78_int = 0; // 0xf43 PushV
	var_78_int = var_74_int; // 0xf44 Mov
	func_3897(var_77_string, var_78_int); // 0xf45 NEW_2
	HasAnimation(var_75_bool, var_76_string, var_77_string); // 0xf47 Func
	var_82_bool = var_75_bool == 0; // 0xf49 Not
	if(var_82_bool == 0) goto Label_3916; // 0xf4a JumpB
	goto Label_3919; // 0xf4b Jump
	
Label_3919:
	var_71_int = var_74_int; // 0xf4f Mov
	return 4; // 0xf50 Return
	
Label_3916:
	var_83_int = 1; // 0xf4c PushI
	var_74_int = var_74_int + var_83_int; // 0xf4d Add2
	goto Label_3906; // 0xf4e Jump
}


func_3394(var_152_bool)
{
	var_154_int = 0; // 0xd43 PushV
	func_3304(var_154_int); // 0xd44 NEW_2
	var_155_int = 4; // 0xd46 PushI
	var_152_bool = var_154_int == var_155_int; // 0xd47 Eq2
	return 0; // 0xd48 Return
}


func_2376(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x948 PushV
	GetPosition(var_44_cvector); // 0x949 Func
	GetPosition(var_45_cvector); // 0x94b TObjFunc
	GetDirection(var_46_cvector); // 0x94d Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x94f PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x950 PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x951 Sub2
	func_3245(var_52_cvector, var_53_cvector); // 0x952 NEW_2
	var_59_float = 0.75; // 0x954 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x955 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x956 Add2
	func_3245(var_50_cvector, var_51_cvector); // 0x957 NEW_2
	var_47_cvector = var_50_cvector; // 0x958 Mov
	var_61_int = 32; // 0x95a PushI
	var_62_float = 7000.0; // 0x95b PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x95c Func
	var_63_int = 100; // 0x95e PushI
	var_49_float = var_49_float - var_63_int; // 0x95f Sub2
	var_64_int = 0; // 0x960 PushI
	var_65_bool = var_49_float < var_64_int; // 0x961 LT
	if(var_65_bool == 0) goto Label_2404; // 0x962 JumpB
	var_49_float = 0; // 0x963 MovI
	
Label_2404:
	var_36_cvector = var_48_cvector * var_49_float; // 0x964 Mult2
	return 12; // 0x965 Return
}


func_3401(var_159_bool)
{
	var_161_int = 0; // 0xd4a PushV
	func_3304(var_161_int); // 0xd4b NEW_2
	var_162_int = 5; // 0xd4d PushI
	var_159_bool = var_161_int == var_162_int; // 0xd4e Eq2
	return 0; // 0xd4f Return
}


func_3408(var_166_bool)
{
	var_168_int = 0; // 0xd51 PushV
	func_3304(var_168_int); // 0xd52 NEW_2
	var_169_int = 6; // 0xd54 PushI
	var_166_bool = var_168_int == var_169_int; // 0xd55 Eq2
	return 0; // 0xd56 Return
}


func_3921(var_65_int)
{
	var_67_bool = 0; // 0xf52 PushV
	func_4168(var_67_bool); // 0xf53 NEW_2
	if(var_67_bool == 0) goto Label_3928; // 0xf55 JumpB
	var_65_int = 2; // 0xf56 MovI
	goto Label_3929; // 0xf57 Jump
	
Label_3929:
	return 0; // 0xf59 Return
	
Label_3928:
	var_65_int = 0; // 0xf58 MovI
}


func_3415(var_271_bool)
{
	var_273_int = 0; // 0xd58 PushV
	func_3304(var_273_int); // 0xd59 NEW_2
	var_274_int = 7; // 0xd5b PushI
	var_271_bool = var_273_int == var_274_int; // 0xd5c Eq2
	return 0; // 0xd5d Return
}


func_2903(var_26_object, var_27_int, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_int = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_int = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); // 0xb57 PushV
	var_47_bool = 0; // 0xb58 PushV
	var_47_bool = 0; // 0xb59 MovB
	var_48_bool = 0; // 0xb5a PushV
	var_48_bool = 0; // 0xb5b MovB
	var_49_object = var_26_object; // 0xb5c Push
	if(var_49_object == 0) goto Label_2914; // 0xb5d JumpB
	var_50_int = 4; // 0xb5e PushI
	var_51_bool = var_27_int != var_50_int; // 0xb5f Neq
	if(var_51_bool == 0) goto Label_2914; // 0xb60 JumpB
	var_48_bool = 1; // 0xb61 MovB
	
Label_2914:
	if(var_48_bool == 0) goto Label_2919; // 0xb62 JumpB
	var_52_int = 5; // 0xb63 PushI
	var_53_bool = var_27_int != var_52_int; // 0xb64 Neq
	if(var_53_bool == 0) goto Label_2919; // 0xb65 JumpB
	var_47_bool = 1; // 0xb66 MovB
	
Label_2919:
	if(var_47_bool == 0) goto Label_2966; // 0xb67 JumpB
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0xb68 PushV
	var_56_cvector = CVector(0,0,0); var_57_object = Obj(); // 0xb69 PushV
	var_57_object = var_26_object; // 0xb6a Mov
	func_2762(var_57_object); // 0xb6b NEW_2
	var_55_cvector = var_56_cvector; // 0xb6c Mov
	func_3245(var_54_cvector, var_55_cvector); // 0xb6e NEW_2
	var_38_cvector = var_54_cvector; // 0xb6f Mov
	CreateVectorVector(var_39_object); // 0xb71 Func
	var_40_int = 1; // 0xb73 MovI
	
Label_2932:
	var_67_string = "hit"; // 0xb74 PushS
	var_68_int = var_67_string + var_40_int; // 0xb75 Add
	GetGeometryLocator(var_68_int, var_41_bool, var_42_cvector, var_43_cvector); // 0xb76 Func
	var_69_bool = var_41_bool == 0; // 0xb78 Not
	if(var_69_bool == 0) goto Label_2939; // 0xb79 JumpB
	goto Label_2948; // 0xb7a Jump
	
Label_2948:
	size(var_44_int); // 0xb84 ObjFunc
	var_70_int = var_44_int; // 0xb86 Push
	if(var_70_int == 0) goto Label_2965; // 0xb87 JumpB
	irand(var_45_int, var_44_int); // 0xb88 Func
	get(var_46_cvector, var_45_int); // 0xb8a ObjFunc
	var_71_object = Obj(); var_72_int = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xb8c PushV
	var_71_object = var_26_object; // 0xb8d Mov
	var_72_int = var_27_int; // 0xb8e Mov
	var_73_float = var_28_float; // 0xb8f Mov
	var_74_cvector = var_46_cvector; // 0xb90 Mov
	var_75_cvector = -var_38_cvector; // 0xb91 Neg2
	func_2971(var_73_float, var_74_cvector, var_75_cvector); // 0xb92 NEW_2
	return 18; // 0xb94 Return
	
Label_2965:
	var_39_object = 0; // 0xb95 SetNull
	
Label_2966:
	var_116_object = Obj(); // 0xb96 PushV
	var_116_object = var_26_object; // 0xb97 Mov
	func_2859(var_116_object); // 0xb98 NEW_2
	return 18; // 0xb9a Return
	
Label_2939:
	var_117_int = var_43_cvector | var_38_cvector; // 0xb7b Or
	var_118_float = 0.70711; // 0xb7c PushF
	var_119_bool = var_117_int >= var_118_float; // 0xb7d GE
	if(var_119_bool == 0) goto Label_2945; // 0xb7e JumpB
	add(var_42_cvector); // 0xb7f ObjFunc
	
Label_2945:
	var_120_int = 1; // 0xb81 PushI
	var_40_int = var_40_int + var_120_int; // 0xb82 Add2
	goto Label_2932; // 0xb83 Jump
}


func_3930(var_82_object)
{
	var_83_object = Obj(); // 0xf5b PushV
	var_83_object = var_82_object; // 0xf5c Mov
	TaskCall(6); // 0xf5d TaskCall
	func_1685(var_84_object, var_83_object); // 0xf5e NEW_2
	TaskReturn(); // 0xf5f TaskReturn
	return 0; // 0xf61 Return
}


func_1884()
{
	StopGroup0(); // 0x75c Func
	StopAsync(); // 0x75e Func
	var_37_string = "head"; // 0x760 PushS
	UnlookAsync(var_37_string); // 0x761 Func
	var_38_int = 111; // 0x763 PushI
	KillTimer(var_38_int); // 0x764 Func
	return 0; // 0x766 Return
}


func_3422(var_110_int)
{
	var_111_int = 0; var_112_int = 0; // 0xd5e PushV
	var_113_string = "branch"; // 0xd5f PushS
	GetVariable(var_113_string, var_112_int); // 0xd60 Func
	var_114_int = 0; // 0xd62 PushI
	var_115_bool = var_112_int == var_114_int; // 0xd63 Eq
	if(var_115_bool == 0) goto Label_3432; // 0xd64 JumpB
	var_110_int = 1; // 0xd65 MovI
	return 2; // 0xd66 Return
	
Label_3432:
	var_116_int = 1; // 0xd68 PushI
	var_117_bool = var_112_int == var_116_int; // 0xd69 Eq
	if(var_117_bool == 0) goto Label_3437; // 0xd6a JumpB
	var_110_int = 2; // 0xd6b MovI
	return 2; // 0xd6c Return
	
Label_3437:
	var_110_int = 3; // 0xd6d MovI
	return 2; // 0xd6e Return
}


func_3938(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0xf63 PushV
	var_37_object = var_35_object; // 0xf64 Mov
	func_2835(var_36_bool, var_37_object); // 0xf65 NEW_2
	if(var_36_bool == 0) goto Label_3946; // 0xf67 JumpB
	var_34_int = 2; // 0xf68 MovI
	goto Label_3947; // 0xf69 Jump
	
Label_3947:
	return 0; // 0xf6b Return
	
Label_3946:
	var_34_int = 0; // 0xf6a MovI
}


func_2406(var_0_bool, var_1_object, var_2_object, var_41_object)
{
	var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_float = 0; // 0x966 PushV
	var_0_bool = var_41_object; // 0x967 TMov
	var_55_cvector = CVector(0,0,0); var_56_float = 0; // 0x968 PushV
	var_56_float = 1.74533; // 0x969 MovF
	func_2376(var_55_cvector, var_56_float); // 0x96a NEW_2
	var_50_cvector = var_55_cvector; // 0x96b Mov
	var_51_float = var_50_cvector | var_50_cvector; // 0x96d Or2
	var_85_float = 2500.0; // 0x96e PushF
	var_86_bool = var_51_float < var_85_float; // 0x96f LT
	if(var_86_bool == 0) goto Label_2435; // 0x970 JumpB
	var_87_cvector = CVector(0,0,0); var_88_float = 0; // 0x971 PushV
	var_88_float = 2.61799; // 0x972 MovF
	func_2376(var_87_cvector, var_88_float); // 0x973 NEW_2
	var_50_cvector = var_87_cvector; // 0x974 Mov
	var_51_float = var_50_cvector | var_50_cvector; // 0x976 Or2
	var_89_float = 2500.0; // 0x977 PushF
	var_90_bool = var_51_float < var_89_float; // 0x978 LT
	if(var_90_bool == 0) goto Label_2435; // 0x979 JumpB
	var_91_string = "Can't retreat, distance: "; // 0x97a PushS
	var_92_float = sqrt(var_51_float); // 0x97b Sqrt
	var_93_int = var_91_string + var_92_float; // 0x97c Add
	Trace(var_93_int); // 0x97d Func
	var_94_float = 0.5; // 0x97f PushF
	Sleep(var_94_float); // 0x980 Func
	return 10; // 0x982 Return
	
Label_2435:
	var_95_float = GetByIndex(var_50_cvector, 0); // 0x983 PushE
	var_96_float = GetByIndex(var_50_cvector, 2); // 0x984 PushE
	Rotate(var_95_float, var_96_float); // 0x985 Func
	var_97_cvector = CVector(0,0,0); // 0x987 PushV
	func_2757(var_97_cvector); // 0x988 NEW_2
	var_1_object = var_97_cvector + var_50_cvector; // 0x98a Add2
	var_100_int = 120; // 0x98b PushI
	var_101_float = 0.5; // 0x98c PushF
	SetTimer(var_100_int, var_101_float); // 0x98d Func
	var_2_object = 0; // 0x98f TMovB
	
Label_2448:
	var_102_int = 1; // 0x990 PushI
	MovePoint(var_102_int, var_102_int, var_52_bool); // 0x991 Func
	var_103_bool = var_52_bool; // 0x993 Push
	if(var_103_bool == 0) goto Label_2476; // 0x994 JumpB
	var_104_bool = var_0_bool == 0; // 0x995 NullEq
	if(var_104_bool == 0) goto Label_2457; // 0x996 JumpB
	goto Label_2478; // 0x997 Jump
	
Label_2478:
	return 10; // 0x9ae Return
	
Label_2457:
	var_105_cvector = CVector(0,0,0); var_106_float = 0; // 0x999 PushV
	var_106_float = 2.61799; // 0x99a MovF
	func_2376(var_105_cvector, var_106_float); // 0x99b NEW_2
	var_53_cvector = var_105_cvector; // 0x99c Mov
	var_54_float = var_53_cvector | var_53_cvector; // 0x99e Or2
	var_107_float = 2500.0; // 0x99f PushF
	var_108_bool = var_54_float >= var_107_float; // 0x9a0 GE
	if(var_108_bool == 0) goto Label_2475; // 0x9a1 JumpB
	var_109_cvector = CVector(0,0,0); // 0x9a2 PushV
	func_2757(var_109_cvector); // 0x9a3 NEW_2
	var_1_object = var_109_cvector + var_53_cvector; // 0x9a5 Add2
	var_110_int = 120; // 0x9a6 PushI
	var_111_float = 0.5; // 0x9a7 PushF
	SetTimer(var_110_int, var_111_float); // 0x9a8 Func
	goto Label_2476; // 0x9aa Jump
	
Label_2476:
	var_112_bool = var_2_object == 0; // 0x9ac Not
	if(var_112_bool == 0) goto Label_2448; // 0x9ad JumpB
	
Label_2475:
	goto Label_2478; // 0x9ab Jump
}


func_3948(var_76_object)
{
	var_77_object = Obj(); // 0xf6d PushV
	var_77_object = var_76_object; // 0xf6e Mov
	TaskCall(7); // 0xf6f TaskCall
	func_1960(var_77_object); // 0xf70 NEW_2
	TaskReturn(); // 0xf71 TaskReturn
	return 0; // 0xf73 Return
}


func_366(var_2_object, var_171_string)
{
	var_172_bool = 0; // 0x16f PushV
	func_4122(var_172_bool); // 0x170 NEW_2
	var_173_bool = var_172_bool == 0; // 0x172 Not
	if(var_173_bool == 0) goto Label_373; // 0x173 JumpB
	return 0; // 0x174 Return
	
Label_373:
	var_174_bool = var_171_string == var_2_object; // 0x175 Eq
	if(var_174_bool == 0) goto Label_376; // 0x176 JumpB
	return 0; // 0x177 Return
	
Label_376:
	var_175_string = ""; var_176_bool = 0; // 0x178 PushV
	var_175_string = var_171_string; // 0x179 Mov
	var_177_string = ""; // 0x17a PushS
	var_178_bool = var_171_string == var_177_string; // 0x17b Eq
	if(var_178_bool == 0) goto Label_383; // 0x17c JumpB
	var_176_bool = 0; // 0x17d MovB
	goto Label_384; // 0x17e Jump
	
Label_384:
	func_3165(var_175_string, var_176_bool); // 0x180 NEW_2
	var_2_object = var_171_string; // 0x182 TMov
	return 0; // 0x183 Return
	
Label_383:
	var_176_bool = 1; // 0x17f MovB
}


func_3439(var_229_int)
{
	var_230_int = 0; var_231_int = 0; // 0xd6f PushV
	var_232_string = "branch"; // 0xd70 PushS
	GetVariable(var_232_string, var_231_int); // 0xd71 Func
	var_229_int = var_231_int; // 0xd73 Mov
	return 2; // 0xd74 Return
}


func_3956(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0xf75 PushV
	var_78_object = var_75_object; // 0xf76 Mov
	func_2835(var_77_bool, var_78_object); // 0xf77 NEW_2
	if(var_77_bool == 0) goto Label_3964; // 0xf79 JumpB
	var_74_int = 2; // 0xf7a MovI
	goto Label_3965; // 0xf7b Jump
	
Label_3965:
	return 0; // 0xf7d Return
	
Label_3964:
	var_74_int = 0; // 0xf7c MovI
}


func_3445(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0xd75 PushV
	var_73_string = "player"; // 0xd76 PushS
	FindActor(var_71_object, var_73_string); // 0xd77 Func
	var_74_bool = var_71_object == 0; // 0xd79 Not
	if(var_74_bool == 0) goto Label_3453; // 0xd7a JumpB
	var_68_float = 0; // 0xd7b MovI
	return 4; // 0xd7c Return
	
Label_3453:
	var_75_string = "reputation"; // 0xd7d PushS
	GetProperty(var_75_string, var_72_float); // 0xd7e ObjFunc
	var_68_float = var_72_float; // 0xd80 Mov
	return 4; // 0xd81 Return
}


func_1401(var_43_float)
{
	var_44_float = 0; var_45_float = 0; // 0x579 PushV
	GetCameraFarDistance(var_45_float); // 0x57a Func
	var_43_float = var_45_float; // 0x57c Mov
	return 2; // 0x57d Return
}


func_3966(var_111_object)
{
	var_112_object = Obj(); // 0xf7f PushV
	var_112_object = var_111_object; // 0xf80 Mov
	TaskCall(8); // 0xf81 TaskCall
	func_2212(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0xf82 NEW_2
	TaskReturn(); // 0xf83 TaskReturn
	return 0; // 0xf85 Return
}


func_3459(var_39_object)
{
	var_40_int = 0; // 0xd84 PushV
	func_3439(var_40_int); // 0xd85 NEW_2
	var_44_int = 1; // 0xd87 PushI
	var_45_bool = var_40_int == var_44_int; // 0xd88 Eq
	if(var_45_bool == 0) goto Label_3469; // 0xd89 JumpB
	WorkWithCorpse(var_39_object); // 0xd8a Func
	goto Label_3471; // 0xd8c Jump
	
Label_3471:
	return 0; // 0xd8f Return
	
Label_3469:
	Barter(var_39_object); // 0xd8d Func
}


func_1413(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x585 TMovB
	var_1_object = 0; // 0x586 TMovB
	Stop(); // 0x587 Func
	StopGroup0(); // 0x589 Func
	return 0; // 0x58b Return
}


func_3974(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0xf86 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0xf87 PushV
	var_40_object = var_33_object; // 0xf88 Mov
	var_41_string = "class"; // 0xf89 MovS
	func_2782(var_39_bool, var_40_object, var_41_string); // 0xf8a NEW_2
	var_48_bool = var_39_bool == 0; // 0xf8c Not
	if(var_48_bool == 0) goto Label_3984; // 0xf8d JumpB
	var_31_bool = 0; // 0xf8e MovB
	return 4; // 0xf8f Return
	
Label_3984:
	var_49_string = "class"; // 0xf90 PushS
	GetProperty(var_49_string, var_37_string); // 0xf91 ObjFunc
	var_50_string = "rat"; // 0xf93 PushS
	var_51_bool = var_37_string == var_50_string; // 0xf94 Eq
	if(var_51_bool == 0) goto Label_3993; // 0xf95 JumpB
	var_31_bool = 0; // 0xf96 MovB
	return 4; // 0xf97 Return
	
Label_3993:
	var_52_string = "rat_big"; // 0xf99 PushS
	var_53_bool = var_37_string == var_52_string; // 0xf9a Eq
	if(var_53_bool == 0) goto Label_3999; // 0xf9b JumpB
	var_31_bool = 0; // 0xf9c MovB
	return 4; // 0xf9d Return
	
Label_3999:
	var_54_string = "dog"; // 0xf9f PushS
	var_55_bool = var_37_string == var_54_string; // 0xfa0 Eq
	if(var_55_bool == 0) goto Label_4004; // 0xfa1 JumpB
	var_31_bool = 0; // 0xfa2 MovB
	return 4; // 0xfa3 Return
	
Label_4004:
	CanSee(var_38_bool, var_32_object); // 0xfa4 Func
	var_56_bool = 0; // 0xfa6 PushV
	var_56_bool = 1; // 0xfa7 MovB
	var_57_bool = var_38_bool; // 0xfa8 Push
	if(var_57_bool == 0) goto Label_4018; // 0xfa9 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0xfaa PushV
	var_59_object = var_32_object; // 0xfab Mov
	func_2769(var_59_object); // 0xfac NEW_2
	var_66_float = var_34_float * var_34_float; // 0xfae Mult
	var_67_bool = var_58_float <= var_66_float; // 0xfaf LE
	if(var_67_bool == 0) goto Label_4018; // 0xfb0 JumpB
	var_56_bool = 0; // 0xfb1 MovB
	
Label_4018:
	if(var_56_bool == 0) goto Label_4021; // 0xfb2 JumpB
	var_31_bool = 1; // 0xfb3 MovB
	return 4; // 0xfb4 Return
	
Label_4021:
	CanSee(var_38_bool, var_33_object); // 0xfb5 Func
	var_68_bool = 0; // 0xfb7 PushV
	var_68_bool = 1; // 0xfb8 MovB
	var_69_bool = var_38_bool; // 0xfb9 Push
	if(var_69_bool == 0) goto Label_4035; // 0xfba JumpB
	var_70_float = 0; var_71_object = Obj(); // 0xfbb PushV
	var_71_object = var_33_object; // 0xfbc Mov
	func_2769(var_71_object); // 0xfbd NEW_2
	var_72_float = var_34_float * var_34_float; // 0xfbf Mult
	var_73_bool = var_70_float <= var_72_float; // 0xfc0 LE
	if(var_73_bool == 0) goto Label_4035; // 0xfc1 JumpB
	var_68_bool = 0; // 0xfc2 MovB
	
Label_4035:
	if(var_68_bool == 0) goto Label_4038; // 0xfc3 JumpB
	var_31_bool = 1; // 0xfc4 MovB
	return 4; // 0xfc5 Return
	
Label_4038:
	var_31_bool = 0; // 0xfc6 MovB
	return 4; // 0xfc7 Return
}


func_1420(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x58c TMovB
	var_1_object = 1; // 0x58d TMovB
	Stop(); // 0x58e Func
	StopGroup0(); // 0x590 Func
	return 0; // 0x592 Return
}


func_910(var_24_object)
{
	EventDisable(0); // 0x38f EventDisable
	var_25_object = Obj(); // 0x390 PushV
	var_25_object = var_24_object; // 0x391 Mov
	func_943(var_25_object); // 0x392 NEW_2
	var_105_object = Obj(); // 0x394 PushV
	var_105_object = var_24_object; // 0x395 Mov
	func_4183(var_105_object); // 0x396 NEW_2
	EventEnable(0); // 0x398 EventEnable
	
Label_921:
	Hold(); // 0x399 Func
	goto Label_921; // 0x39b Jump
}


func_3472(var_121_int, var_122_int)
{
	var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0; // 0xd90 PushV
	var_136_bool = var_121_int > var_122_int; // 0xd91 GT
	if(var_136_bool == 0) goto Label_3479; // 0xd92 JumpB
	var_137_string = "GenerateMoney: iMin > iMax"; // 0xd93 PushS
	Trace(var_137_string); // 0xd94 Func
	return 4; // 0xd96 Return
	
Label_3479:
	var_134_int = 0; // 0xd97 MovI
	var_138_bool = var_121_int != var_122_int; // 0xd98 Neq
	if(var_138_bool == 0) goto Label_3486; // 0xd99 JumpB
	var_139_int = var_122_int - var_121_int; // 0xd9a Sub
	irand(var_134_int, var_139_int); // 0xd9b Func
	goto Label_3490; // 0xd9d Jump
	
Label_3490:
	var_134_int = var_134_int + var_121_int; // 0xda2 Add2
	var_140_int = 0; // 0xda3 PushI
	var_141_bool = var_134_int == var_140_int; // 0xda4 Eq
	if(var_141_bool == 0) goto Label_3495; // 0xda5 JumpB
	return 4; // 0xda6 Return
	
Label_3495:
	var_142_int = 0; var_143_string = ""; // 0xda7 PushV
	var_143_string = "Money"; // 0xda8 MovS
	func_3719(var_142_int, var_143_string); // 0xda9 NEW_2
	var_146_int = 0; // 0xdab PushI
	AddItem(var_135_bool, var_142_int, var_146_int, var_134_int); // 0xdac Func
	return 4; // 0xdae Return
	
Label_3486:
	var_147_int = 0; // 0xd9e PushI
	var_148_bool = var_121_int == var_147_int; // 0xd9f Eq
	if(var_148_bool == 0) goto Label_3490; // 0xda0 JumpB
	return 4; // 0xda1 Return
}


func_1427(var_53_bool)
{
	var_53_bool = 0; // 0x593 MovB
	return 0; // 0x594 Return
}


func_1429(var_47_object, var_48_cvector)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x595 PushV
	FindShiftedPathTo(var_50_object, var_48_cvector); // 0x596 Func
	var_47_object = var_50_object; // 0x598 Mov
	return 2; // 0x599 Return
}


func_2971(var_28_object, var_31_cvector, var_32_cvector)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); // 0xb9b PushV
	GetScene(var_35_object); // 0xb9c Func
	var_37_string = "scripted"; // 0xb9e PushS
	var_38_string = "blood_dir.xml"; // 0xb9f PushS
	AddActorByType(var_36_object, var_37_string, var_35_object, var_31_cvector, var_32_cvector, var_38_string); // 0xba0 Func
	var_39_object = Obj(); // 0xba2 PushV
	var_39_object = var_28_object; // 0xba3 Mov
	func_2859(var_39_object); // 0xba4 NEW_2
	return 4; // 0xba6 Return
}


func_1960(var_77_object)
{
	Face(var_77_object); // 0x7a9 Func
	var_81_string = "all"; // 0x7ab PushS
	var_82_string = "attack_on"; // 0x7ac PushS
	PlayAnimation(var_81_string, var_82_string); // 0x7ad Func
	WaitForAnimEnd(); // 0x7af Func
	var_83_string = "all"; // 0x7b1 PushS
	var_84_string = "attack_stay"; // 0x7b2 PushS
	PlayAnimation(var_83_string, var_84_string); // 0x7b3 Func
	WaitForAnimEnd(); // 0x7b5 Func
	var_85_string = "all"; // 0x7b7 PushS
	var_86_string = "attack_off"; // 0x7b8 PushS
	PlayAnimation(var_85_string, var_86_string); // 0x7b9 Func
	WaitForAnimEnd(); // 0x7bb Func
	StopAsync(); // 0x7bd Func
	var_87_object = Obj(); // 0x7bf PushV
	var_87_object = var_77_object; // 0x7c0 Mov
	func_2025(var_79_cvector, var_80_bool, var_77_object, var_87_object); // 0x7c1 NEW_2
	return 0; // 0x7c3 Return
}


func_2985()
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); // 0xba9 PushV
	GetPosition(var_102_cvector); // 0xbaa ObjFunc
	GetPosition(var_103_cvector); // 0xbac Func
	var_104_cvector = var_102_cvector - var_103_cvector; // 0xbae Sub2
	var_105_float = GetByIndex(var_104_cvector, 0); // 0xbaf PushE
	var_106_float = GetByIndex(var_104_cvector, 2); // 0xbb0 PushE
	RotateAsync(var_105_float, var_106_float); // 0xbb1 Func
	return 6; // 0xbb3 Return
}


func_943(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); // 0x3af PushV
	var_46_bool = var_25_object == 0; // 0x3b0 NullEq
	if(var_46_bool == 0) goto Label_951; // 0x3b1 JumpB
	var_47_string = ""; // 0x3b2 PushV
	var_47_string = "fdie"; // 0x3b3 MovS
	func_1034(var_47_string); // 0x3b4 NEW_2
	goto Label_1033; // 0x3b6 Jump
	
Label_1033:
	return 20; // 0x409 Return
	
Label_951:
	GetPosition(var_36_cvector); // 0x3b7 ObjFunc
	GetPosition(var_37_cvector); // 0x3b9 Func
	GetDirection(var_38_cvector); // 0x3bb Func
	var_39_cvector = var_37_cvector - var_36_cvector; // 0x3bd Sub2
	var_79_float = GetByIndex(var_39_cvector, 0); // 0x3be PushE
	var_80_float = GetByIndex(var_38_cvector, 0); // 0x3bf PushE
	var_81_float = var_79_float * var_80_float; // 0x3c0 Mult
	var_82_float = GetByIndex(var_39_cvector, 2); // 0x3c1 PushE
	var_83_float = GetByIndex(var_38_cvector, 2); // 0x3c2 PushE
	var_84_float = var_82_float * var_83_float; // 0x3c3 Mult
	var_85_int = var_81_float + var_84_float; // 0x3c4 Add
	var_86_int = 0; // 0x3c5 PushI
	var_87_bool = var_85_int >= var_86_int; // 0x3c6 GE
	if(var_87_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_40_string = "fdie"; // 0x3c8 MovS
	goto Label_971; // 0x3c9 Jump
	
Label_971:
	RemoveRTEnvelope(); // 0x3cb Func
	SetDeathState(); // 0x3cd Func
	Stop(); // 0x3cf Func
	StopAsync(); // 0x3d1 Func
	var_41_object = var_25_object; // 0x3d3 Mov
	var_88_string = "GetScriptProperty"; // 0x3d4 PushS
	var_89_int = 2; // 0x3d5 PushI
	var_90_bool = IsFuncExist(var_25_object, var_88_string, var_89_int); // 0x3d6 FuncExist
	if(var_90_bool == 0) goto Label_995; // 0x3d7 JumpB
	var_91_string = "Owner"; // 0x3d8 PushS
	HasScriptProperty(var_42_bool, var_91_string); // 0x3d9 ObjFunc
	var_92_bool = var_42_bool; // 0x3db Push
	if(var_92_bool == 0) goto Label_995; // 0x3dc JumpB
	var_93_string = "Owner"; // 0x3dd PushS
	GetScriptProperty(var_41_object, var_93_string); // 0x3de ObjFunc
	var_94_bool = var_41_object == 0; // 0x3e0 NullEq
	if(var_94_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_41_object = var_25_object; // 0x3e2 Mov
	
Label_995:
	var_95_string = "@GetEyesHeight"; // 0x3e3 PushS
	var_96_int = 1; // 0x3e4 PushI
	var_97_bool = IsFuncExist(var_41_object, var_95_string, var_96_int); // 0x3e5 FuncExist
	if(var_97_bool == 0) goto Label_1010; // 0x3e6 JumpB
	GetEyesHeight(var_44_float); // 0x3e7 ObjFunc
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x3e9 MovV
	var_98_float = GetByIndex(var_45_cvector, 1); // 0x3ea PushE
	var_98_float = var_44_float; // 0x3eb Mov
	SetByIndex(var_45_cvector, 1) = var_98_float; // 0x3ec PopE
	var_99_string = "head"; // 0x3ed PushS
	LookAsync(var_25_object, var_99_string, var_45_cvector); // 0x3ee Func
	var_43_bool = 1; // 0x3f0 MovB
	goto Label_1011; // 0x3f1 Jump
	
Label_1011:
	var_100_string = ""; // 0x3f3 PushV
	var_100_string = var_40_string; // 0x3f4 Mov
	func_3198(var_100_string); // 0x3f5 NEW_2
	var_101_string = "all"; // 0x3f7 PushS
	PlayAnimation(var_101_string, var_40_string); // 0x3f8 Func
	WaitForAnimEnd(); // 0x3fa Func
	var_102_bool = var_43_bool; // 0x3fc Push
	if(var_102_bool == 0) goto Label_1027; // 0x3fd JumpB
	StopAsync(); // 0x3fe Func
	var_103_string = "head"; // 0x400 PushS
	UnlookAsync(var_103_string); // 0x401 Func
	
Label_1027:
	var_104_string = "all"; // 0x403 PushS
	LockAnimationEnd(var_104_string, var_40_string); // 0x404 Func
	RemoveEnvelope(); // 0x406 Func
	var_41_object = 0; // 0x408 SetNull
	
Label_1010:
	var_43_bool = 0; // 0x3f2 MovB
	
Label_970:
	var_40_string = "bdie"; // 0x3ca MovS
}


func_3503(var_235_string)
{
	var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; var_239_object = Obj(); var_240_int = 0; var_241_bool = 0; // 0xdaf PushV
	CreateInvItem(var_239_object); // 0xdb0 Func
	SetItemName(var_235_string); // 0xdb2 ObjFunc
	var_242_string = "Organ"; // 0xdb4 PushS
	var_243_int = 1; // 0xdb5 PushI
	SetProperty(var_242_string, var_243_int); // 0xdb6 ObjFunc
	GetItemID(var_240_int); // 0xdb8 ObjFunc
	var_244_int = 0; // 0xdba PushI
	var_245_int = 1; // 0xdbb PushI
	AddItem(var_241_bool, var_239_object, var_244_int, var_245_int); // 0xdbc Func
	return 6; // 0xdbe Return
}


func_2996(var_24_bool)
{
	var_25_bool = 0; var_26_bool = 0; // 0xbb4 PushV
	IsLoaded(var_26_bool); // 0xbb5 Func
	var_24_bool = var_26_bool; // 0xbb7 Mov
	return 2; // 0xbb8 Return
}


func_3001(var_58_bool, var_60_float)
{
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_bool = 0; // 0xbb9 PushV
	GetPosition(var_71_cvector); // 0xbba ObjFunc
	GetEyesHeight(var_70_float); // 0xbbc ObjFunc
	var_79_float = GetByIndex(var_71_cvector, 1); // 0xbbe PushE
	var_79_float = var_79_float + var_70_float; // 0xbbf Add2
	SetByIndex(var_71_cvector, 1) = var_79_float; // 0xbc0 PopE
	GetPosition(var_72_cvector); // 0xbc1 Func
	GetEyesHeight(var_70_float); // 0xbc3 Func
	var_80_float = GetByIndex(var_72_cvector, 1); // 0xbc5 PushE
	var_80_float = var_80_float + var_70_float; // 0xbc6 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0xbc7 PopE
	var_73_cvector = var_71_cvector - var_72_cvector; // 0xbc8 Sub2
	var_81_float = GetByIndex(var_73_cvector, 1); // 0xbc9 PushE
	var_81_float = 0; // 0xbca MovI
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0xbcb PopE
	var_82_int = var_73_cvector | var_73_cvector; // 0xbcc Or
	var_83_float = sqrt(var_82_int); // 0xbcd Sqrt
	var_73_cvector = var_73_cvector / var_73_cvector; // 0xbce Div2
	var_74_cvector = -var_73_cvector; // 0xbcf Neg2
	var_84_float = var_73_cvector * var_60_float; // 0xbd0 Mult
	var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0xbd1 PushV
	var_87_cvector = CVector(0.0, 1.0, 0.0); // 0xbd2 PushVec
	var_86_cvector = var_74_cvector ^ var_87_cvector; // 0xbd3 Xor2
	func_3245(var_85_cvector, var_86_cvector); // 0xbd4 NEW_2
	var_93_int = 25; // 0xbd6 PushI
	var_94_float = var_85_cvector * var_93_int; // 0xbd7 Mult
	var_95_int = var_84_float + var_94_float; // 0xbd8 Add
	var_96_cvector = CVector(0.0, 10.0, 0.0); // 0xbd9 PushVec
	var_75_cvector = var_95_int - var_96_cvector; // 0xbda Sub2
	var_76_cvector = var_72_cvector + var_75_cvector; // 0xbdb Add2
	IsOverrideActive(var_77_bool); // 0xbdc Func
	var_97_bool = var_77_bool; // 0xbde Push
	if(var_97_bool == 0) goto Label_3042; // 0xbdf JumpB
	var_58_bool = 0; // 0xbe0 MovB
	return 18; // 0xbe1 Return
	
Label_3042:
	StopWorld(); // 0xbe2 Func
	var_98_bool = 1; // 0xbe4 PushB
	CameraTransit(var_76_cvector, var_74_cvector, var_98_bool); // 0xbe5 Func
	var_99_float = GetByIndex(var_75_cvector, 0); // 0xbe7 PushE
	var_100_float = GetByIndex(var_75_cvector, 2); // 0xbe8 PushE
	Rotate(var_99_float, var_100_float); // 0xbe9 Func
	var_101_bool = 0; // 0xbeb PushV
	func_4122(var_101_bool); // 0xbec NEW_2
	if(var_101_bool == 0) goto Label_3056; // 0xbee JumpB
	goto Label_3064; // 0xbef Jump
	
Label_3064:
	CameraWaitForPlayFinish(); // 0xbf8 Func
	ResumeWorld(); // 0xbfa Func
	var_58_bool = 1; // 0xbfc MovB
	return 18; // 0xbfd Return
	
Label_3056:
	var_102_string = "head"; // 0xbf0 PushS
	HasAnimationTrack(var_78_bool, var_102_string); // 0xbf1 Func
	var_103_bool = var_78_bool; // 0xbf3 Push
	if(var_103_bool == 0) goto Label_3064; // 0xbf4 JumpB
	var_104_string = "head"; // 0xbf5 PushS
	LookAsyncCamera(var_104_string); // 0xbf6 Func
}


func_3520()
{
	var_229_int = 0; // 0xdc0 PushV
	func_3439(var_229_int); // 0xdc1 NEW_2
	var_233_int = 1; // 0xdc3 PushI
	var_234_bool = var_229_int != var_233_int; // 0xdc4 Neq
	if(var_234_bool == 0) goto Label_3527; // 0xdc5 JumpB
	return 0; // 0xdc6 Return
	
Label_3527:
	var_235_string = ""; // 0xdc7 PushV
	var_235_string = "liver"; // 0xdc8 MovS
	func_3503(var_235_string); // 0xdc9 NEW_2
	var_246_string = ""; // 0xdcb PushV
	var_246_string = "kidney"; // 0xdcc MovS
	func_3503(var_246_string); // 0xdcd NEW_2
	var_247_string = ""; // 0xdcf PushV
	var_247_string = "heart"; // 0xdd0 MovS
	func_3503(var_247_string); // 0xdd1 NEW_2
	var_248_string = ""; // 0xdd3 PushV
	var_248_string = "blood"; // 0xdd4 MovS
	func_3503(var_248_string); // 0xdd5 NEW_2
	return 0; // 0xdd7 Return
}


func_4040(var_25_int)
{
	var_25_int = 0; // 0xfc9 MovI
	return 0; // 0xfca Return
}


func_4043()
{
	return 0; // 0xfcc Return
}


func_1995(var_36_cvector, var_37_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_float = 0; // 0x7cb PushV
	GetPosition(var_44_cvector); // 0x7cc Func
	GetPosition(var_45_cvector); // 0x7ce TObjFunc
	GetDirection(var_46_cvector); // 0x7d0 Func
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x7d2 PushV
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x7d3 PushV
	var_53_cvector = var_44_cvector - var_45_cvector; // 0x7d4 Sub2
	func_3245(var_52_cvector, var_53_cvector); // 0x7d5 NEW_2
	var_59_float = 0.75; // 0x7d7 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x7d8 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x7d9 Add2
	func_3245(var_50_cvector, var_51_cvector); // 0x7da NEW_2
	var_47_cvector = var_50_cvector; // 0x7db Mov
	var_61_int = 32; // 0x7dd PushI
	var_62_float = 7000.0; // 0x7de PushF
	FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, var_61_int, var_62_float); // 0x7df Func
	var_63_int = 100; // 0x7e1 PushI
	var_49_float = var_49_float - var_63_int; // 0x7e2 Sub2
	var_64_int = 0; // 0x7e3 PushI
	var_65_bool = var_49_float < var_64_int; // 0x7e4 LT
	if(var_65_bool == 0) goto Label_2023; // 0x7e5 JumpB
	var_49_float = 0; // 0x7e6 MovI
	
Label_2023:
	var_36_cvector = var_48_cvector * var_49_float; // 0x7e7 Mult2
	return 12; // 0x7e8 Return
}


func_4045(var_209_int)
{
	var_209_int = 0; // 0xfce MovI
	return 0; // 0xfcf Return
}


func_4048()
{
	return 0; // 0xfd1 Return
}


func_4050(var_25_int)
{
	var_25_int = 2; // 0xfd3 MovI
	return 0; // 0xfd4 Return
}


func_4053(var_33_object)
{
	var_34_object = Obj(); // 0xfd6 PushV
	var_34_object = var_33_object; // 0xfd7 Mov
	func_4128(var_33_object, var_34_object); // 0xfd8 NEW_2
	return 0; // 0xfda Return
}


func_3544(var_115_bool)
{
	var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_bool = 0; // 0xdd8 PushV
	var_120_bool = var_115_bool; // 0xdd9 Push
	if(var_120_bool == 0) goto Label_3633; // 0xdda JumpB
	var_121_int = 0; var_122_int = 0; // 0xddb PushV
	var_121_int = 0; // 0xddc MovI
	var_123_int = 100; // 0xddd PushI
	var_124_int = 0; // 0xdde PushV
	func_3304(var_124_int); // 0xddf NEW_2
	var_130_int = 100; // 0xde1 PushI
	var_131_float = var_124_int * var_130_int; // 0xde2 Mult
	var_122_int = var_123_int + var_131_float; // 0xde3 Add2
	func_3472(var_121_int, var_122_int); // 0xde4 NEW_2
	var_149_int = 8; // 0xde6 PushI
	irand(var_118_int, var_149_int); // 0xde7 Func
	var_150_int = 0; // 0xde9 PushI
	var_151_bool = var_118_int == var_150_int; // 0xdea Eq
	if(var_151_bool == 0) goto Label_3573; // 0xdeb JumpB
	var_152_int = 0; var_153_string = ""; // 0xdec PushV
	var_153_string = "lemon"; // 0xded MovS
	func_3719(var_152_int, var_153_string); // 0xdee NEW_2
	var_154_int = 0; // 0xdf0 PushI
	var_155_int = 1; // 0xdf1 PushI
	AddItem(var_119_bool, var_152_int, var_154_int, var_155_int); // 0xdf2 Func
	goto Label_3632; // 0xdf4 Jump
	
Label_3632:
	goto Label_3718; // 0xe30 Jump
	
Label_3718:
	return 4; // 0xe86 Return
	
Label_3573:
	var_156_int = 1; // 0xdf5 PushI
	var_157_bool = var_118_int == var_156_int; // 0xdf6 Eq
	if(var_157_bool == 0) goto Label_3585; // 0xdf7 JumpB
	var_158_int = 0; var_159_string = ""; // 0xdf8 PushV
	var_159_string = "rusk"; // 0xdf9 MovS
	func_3719(var_158_int, var_159_string); // 0xdfa NEW_2
	var_160_int = 0; // 0xdfc PushI
	var_161_int = 1; // 0xdfd PushI
	AddItem(var_119_bool, var_158_int, var_160_int, var_161_int); // 0xdfe Func
	goto Label_3632; // 0xe00 Jump
	
Label_3585:
	var_162_int = 2; // 0xe01 PushI
	var_163_bool = var_118_int == var_162_int; // 0xe02 Eq
	if(var_163_bool == 0) goto Label_3597; // 0xe03 JumpB
	var_164_int = 0; var_165_string = ""; // 0xe04 PushV
	var_165_string = "hook"; // 0xe05 MovS
	func_3719(var_164_int, var_165_string); // 0xe06 NEW_2
	var_166_int = 0; // 0xe08 PushI
	var_167_int = 1; // 0xe09 PushI
	AddItem(var_119_bool, var_164_int, var_166_int, var_167_int); // 0xe0a Func
	goto Label_3632; // 0xe0c Jump
	
Label_3597:
	var_168_int = 4; // 0xe0d PushI
	var_169_bool = var_118_int == var_168_int; // 0xe0e Eq
	if(var_169_bool == 0) goto Label_3609; // 0xe0f JumpB
	var_170_int = 0; var_171_string = ""; // 0xe10 PushV
	var_171_string = "syringe"; // 0xe11 MovS
	func_3719(var_170_int, var_171_string); // 0xe12 NEW_2
	var_172_int = 0; // 0xe14 PushI
	var_173_int = 1; // 0xe15 PushI
	AddItem(var_119_bool, var_170_int, var_172_int, var_173_int); // 0xe16 Func
	goto Label_3632; // 0xe18 Jump
	
Label_3609:
	var_174_int = 5; // 0xe19 PushI
	var_175_bool = var_118_int == var_174_int; // 0xe1a Eq
	if(var_175_bool == 0) goto Label_3621; // 0xe1b JumpB
	var_176_int = 0; var_177_string = ""; // 0xe1c PushV
	var_177_string = "watch"; // 0xe1d MovS
	func_3719(var_176_int, var_177_string); // 0xe1e NEW_2
	var_178_int = 0; // 0xe20 PushI
	var_179_int = 1; // 0xe21 PushI
	AddItem(var_119_bool, var_176_int, var_178_int, var_179_int); // 0xe22 Func
	goto Label_3632; // 0xe24 Jump
	
Label_3621:
	var_180_int = 6; // 0xe25 PushI
	var_181_bool = var_118_int == var_180_int; // 0xe26 Eq
	if(var_181_bool == 0) goto Label_3632; // 0xe27 JumpB
	var_182_int = 0; var_183_string = ""; // 0xe28 PushV
	var_183_string = "razor"; // 0xe29 MovS
	func_3719(var_182_int, var_183_string); // 0xe2a NEW_2
	var_184_int = 0; // 0xe2c PushI
	var_185_int = 1; // 0xe2d PushI
	AddItem(var_119_bool, var_182_int, var_184_int, var_185_int); // 0xe2e Func
	
Label_3633:
	var_186_int = 0; var_187_int = 0; // 0xe31 PushV
	var_186_int = 0; // 0xe32 MovI
	var_188_int = 50; // 0xe33 PushI
	var_189_int = 0; // 0xe34 PushV
	func_3304(var_189_int); // 0xe35 NEW_2
	var_190_int = 50; // 0xe37 PushI
	var_191_float = var_189_int * var_190_int; // 0xe38 Mult
	var_187_int = var_188_int + var_191_float; // 0xe39 Add2
	func_3472(var_186_int, var_187_int); // 0xe3a NEW_2
	var_192_int = 7; // 0xe3c PushI
	irand(var_118_int, var_192_int); // 0xe3d Func
	var_193_int = 0; // 0xe3f PushI
	var_194_bool = var_118_int == var_193_int; // 0xe40 Eq
	if(var_194_bool == 0) goto Label_3659; // 0xe41 JumpB
	var_195_int = 0; var_196_string = ""; // 0xe42 PushV
	var_196_string = "beads"; // 0xe43 MovS
	func_3719(var_195_int, var_196_string); // 0xe44 NEW_2
	var_197_int = 0; // 0xe46 PushI
	var_198_int = 1; // 0xe47 PushI
	AddItem(var_119_bool, var_195_int, var_197_int, var_198_int); // 0xe48 Func
	goto Label_3718; // 0xe4a Jump
	
Label_3659:
	var_199_int = 1; // 0xe4b PushI
	var_200_bool = var_118_int == var_199_int; // 0xe4c Eq
	if(var_200_bool == 0) goto Label_3671; // 0xe4d JumpB
	var_201_int = 0; var_202_string = ""; // 0xe4e PushV
	var_202_string = "bracelet"; // 0xe4f MovS
	func_3719(var_201_int, var_202_string); // 0xe50 NEW_2
	var_203_int = 0; // 0xe52 PushI
	var_204_int = 1; // 0xe53 PushI
	AddItem(var_119_bool, var_201_int, var_203_int, var_204_int); // 0xe54 Func
	goto Label_3718; // 0xe56 Jump
	
Label_3671:
	var_205_int = 2; // 0xe57 PushI
	var_206_bool = var_118_int == var_205_int; // 0xe58 Eq
	if(var_206_bool == 0) goto Label_3683; // 0xe59 JumpB
	var_207_int = 0; var_208_string = ""; // 0xe5a PushV
	var_208_string = "ear_ring"; // 0xe5b MovS
	func_3719(var_207_int, var_208_string); // 0xe5c NEW_2
	var_209_int = 0; // 0xe5e PushI
	var_210_int = 1; // 0xe5f PushI
	AddItem(var_119_bool, var_207_int, var_209_int, var_210_int); // 0xe60 Func
	goto Label_3718; // 0xe62 Jump
	
Label_3683:
	var_211_int = 3; // 0xe63 PushI
	var_212_bool = var_118_int == var_211_int; // 0xe64 Eq
	if(var_212_bool == 0) goto Label_3695; // 0xe65 JumpB
	var_213_int = 0; var_214_string = ""; // 0xe66 PushV
	var_214_string = "gold_ring"; // 0xe67 MovS
	func_3719(var_213_int, var_214_string); // 0xe68 NEW_2
	var_215_int = 0; // 0xe6a PushI
	var_216_int = 1; // 0xe6b PushI
	AddItem(var_119_bool, var_213_int, var_215_int, var_216_int); // 0xe6c Func
	goto Label_3718; // 0xe6e Jump
	
Label_3695:
	var_217_int = 4; // 0xe6f PushI
	var_218_bool = var_118_int == var_217_int; // 0xe70 Eq
	if(var_218_bool == 0) goto Label_3707; // 0xe71 JumpB
	var_219_int = 0; var_220_string = ""; // 0xe72 PushV
	var_220_string = "silver_ring"; // 0xe73 MovS
	func_3719(var_219_int, var_220_string); // 0xe74 NEW_2
	var_221_int = 0; // 0xe76 PushI
	var_222_int = 1; // 0xe77 PushI
	AddItem(var_119_bool, var_219_int, var_221_int, var_222_int); // 0xe78 Func
	goto Label_3718; // 0xe7a Jump
	
Label_3707:
	var_223_int = 5; // 0xe7b PushI
	var_224_bool = var_118_int == var_223_int; // 0xe7c Eq
	if(var_224_bool == 0) goto Label_3718; // 0xe7d JumpB
	var_225_int = 0; var_226_string = ""; // 0xe7e PushV
	var_226_string = "flower"; // 0xe7f MovS
	func_3719(var_225_int, var_226_string); // 0xe80 NEW_2
	var_227_int = 0; // 0xe82 PushI
	var_228_int = 1; // 0xe83 PushI
	AddItem(var_119_bool, var_225_int, var_227_int, var_228_int); // 0xe84 Func
}


func_4059()
{
	return 0; // 0xfdb Return
}


func_4060(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xfdc PushV
	CanSee(var_31_bool, var_29_object); // 0xfdd Func
	var_28_bool = var_31_bool; // 0xfdf Mov
	return 2; // 0xfe0 Return
}


func_4065(var_40_object)
{
	var_41_object = Obj(); // 0xfe2 PushV
	var_41_object = var_40_object; // 0xfe3 Mov
	TaskCall(9); // 0xfe4 TaskCall
	func_2406(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0xfe5 NEW_2
	TaskReturn(); // 0xfe6 TaskReturn
	return 0; // 0xfe8 Return
}


func_2531(var_2_object)
{
	Stop(); // 0x9e3 Func
	var_23_int = 120; // 0x9e5 PushI
	KillTimer(var_23_int); // 0x9e6 Func
	var_2_object = 1; // 0x9e8 TMovB
	return 0; // 0x9e9 Return
}


func_2025(var_0_bool, var_1_object, var_2_object, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; // 0x7e9 PushV
	var_0_bool = var_87_object; // 0x7ea TMov
	var_98_cvector = CVector(0,0,0); var_99_float = 0; // 0x7eb PushV
	var_99_float = 1.74533; // 0x7ec MovF
	func_1995(var_98_cvector, var_99_float); // 0x7ed NEW_2
	var_93_cvector = var_98_cvector; // 0x7ee Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x7f0 Or2
	var_128_float = 2500.0; // 0x7f1 PushF
	var_129_bool = var_94_float < var_128_float; // 0x7f2 LT
	if(var_129_bool == 0) goto Label_2054; // 0x7f3 JumpB
	var_130_cvector = CVector(0,0,0); var_131_float = 0; // 0x7f4 PushV
	var_131_float = 2.61799; // 0x7f5 MovF
	func_1995(var_130_cvector, var_131_float); // 0x7f6 NEW_2
	var_93_cvector = var_130_cvector; // 0x7f7 Mov
	var_94_float = var_93_cvector | var_93_cvector; // 0x7f9 Or2
	var_132_float = 2500.0; // 0x7fa PushF
	var_133_bool = var_94_float < var_132_float; // 0x7fb LT
	if(var_133_bool == 0) goto Label_2054; // 0x7fc JumpB
	var_134_string = "Can't retreat, distance: "; // 0x7fd PushS
	var_135_float = sqrt(var_94_float); // 0x7fe Sqrt
	var_136_int = var_134_string + var_135_float; // 0x7ff Add
	Trace(var_136_int); // 0x800 Func
	var_137_float = 0.5; // 0x802 PushF
	Sleep(var_137_float); // 0x803 Func
	return 10; // 0x805 Return
	
Label_2054:
	var_138_float = GetByIndex(var_93_cvector, 0); // 0x806 PushE
	var_139_float = GetByIndex(var_93_cvector, 2); // 0x807 PushE
	Rotate(var_138_float, var_139_float); // 0x808 Func
	var_140_cvector = CVector(0,0,0); // 0x80a PushV
	func_2757(var_140_cvector); // 0x80b NEW_2
	var_1_object = var_140_cvector + var_93_cvector; // 0x80d Add2
	var_143_int = 120; // 0x80e PushI
	var_144_float = 0.5; // 0x80f PushF
	SetTimer(var_143_int, var_144_float); // 0x810 Func
	var_2_object = 0; // 0x812 TMovB
	
Label_2067:
	var_145_int = 1; // 0x813 PushI
	MovePoint(var_145_int, var_145_int, var_95_bool); // 0x814 Func
	var_146_bool = var_95_bool; // 0x816 Push
	if(var_146_bool == 0) goto Label_2095; // 0x817 JumpB
	var_147_bool = var_0_bool == 0; // 0x818 NullEq
	if(var_147_bool == 0) goto Label_2076; // 0x819 JumpB
	goto Label_2097; // 0x81a Jump
	
Label_2097:
	return 10; // 0x831 Return
	
Label_2076:
	var_148_cvector = CVector(0,0,0); var_149_float = 0; // 0x81c PushV
	var_149_float = 2.61799; // 0x81d MovF
	func_1995(var_148_cvector, var_149_float); // 0x81e NEW_2
	var_96_cvector = var_148_cvector; // 0x81f Mov
	var_97_float = var_96_cvector | var_96_cvector; // 0x821 Or2
	var_150_float = 2500.0; // 0x822 PushF
	var_151_bool = var_97_float >= var_150_float; // 0x823 GE
	if(var_151_bool == 0) goto Label_2094; // 0x824 JumpB
	var_152_cvector = CVector(0,0,0); // 0x825 PushV
	func_2757(var_152_cvector); // 0x826 NEW_2
	var_1_object = var_152_cvector + var_96_cvector; // 0x828 Add2
	var_153_int = 120; // 0x829 PushI
	var_154_float = 0.5; // 0x82a PushF
	SetTimer(var_153_int, var_154_float); // 0x82b Func
	goto Label_2095; // 0x82d Jump
	
Label_2095:
	var_155_bool = var_2_object == 0; // 0x82f Not
	if(var_155_bool == 0) goto Label_2067; // 0x830 JumpB
	
Label_2094:
	goto Label_2097; // 0x82e Jump
}


func_4073(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0xfe9 PushV
	CanSee(var_40_bool, var_38_object); // 0xfea Func
	var_37_bool = 1; // 0xfec MovB
	var_41_bool = var_40_bool; // 0xfed Push
	if(var_41_bool == 0) goto Label_4087; // 0xfee JumpB
	var_42_float = 0; var_43_object = Obj(); // 0xfef PushV
	var_43_object = var_38_object; // 0xff0 Mov
	func_2769(var_43_object); // 0xff1 NEW_2
	var_50_int = 4000000; // 0xff3 PushI
	var_51_bool = var_42_float <= var_50_int; // 0xff4 LE
	if(var_51_bool == 0) goto Label_4087; // 0xff5 JumpB
	var_37_bool = 0; // 0xff6 MovB
	
Label_4087:
	return 2; // 0xff7 Return
}


func_2547(var_0_bool, var_74_bool)
{
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x9f3 PushV
	GetDirection(var_77_cvector); // 0x9f4 Func
	var_79_cvector = CVector(0,0,0); var_80_object = Obj(); // 0x9f6 PushV
	var_80_object = var_0_bool; // 0x9f7 MovT
	func_2762(var_80_object); // 0x9f8 NEW_2
	var_78_cvector = var_79_cvector; // 0x9f9 Mov
	var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x9fb PushV
	var_86_cvector = var_77_cvector; // 0x9fc Mov
	var_87_cvector = var_78_cvector; // 0x9fd Mov
	func_3255(var_85_float, var_86_cvector, var_87_cvector); // 0x9fe NEW_2
	var_93_float = -0.34202; // 0xa00 PushF
	var_74_bool = var_85_float >= var_93_float; // 0xa01 GE2
	return 4; // 0xa02 Return
}


func_4088(var_139_object)
{
	var_140_object = Obj(); // 0xff9 PushV
	var_140_object = var_139_object; // 0xffa Mov
	TaskCall(10); // 0xffb TaskCall
	func_2600(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0xffc NEW_2
	TaskReturn(); // 0xffd TaskReturn
	return 0; // 0xfff Return
}


func_3070()
{
	var_283_bool = 0; var_284_bool = 0; // 0xbfe PushV
	var_285_bool = 1; // 0xbff PushB
	CameraSwitchToNormal(var_285_bool); // 0xc00 Func
	var_286_bool = 0; // 0xc02 PushV
	func_4122(var_286_bool); // 0xc03 NEW_2
	if(var_286_bool == 0) goto Label_3079; // 0xc05 JumpB
	goto Label_3087; // 0xc06 Jump
	
Label_3087:
	return 2; // 0xc0f Return
	
Label_3079:
	var_287_string = "head"; // 0xc07 PushS
	HasAnimationTrack(var_284_bool, var_287_string); // 0xc08 Func
	var_288_bool = var_284_bool; // 0xc0a Push
	if(var_288_bool == 0) goto Label_3087; // 0xc0b JumpB
	var_289_string = "head"; // 0xc0c PushS
	UnlookAsync(var_289_string); // 0xc0d Func
}


