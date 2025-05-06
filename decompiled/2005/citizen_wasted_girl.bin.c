task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; // 0x1b PushV
	func_4118(var_23_bool); // 0x1c NEW_2
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
	func_3187(); // 0x188 NEW_2
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
	func_3321(var_33_object); // 0x197 NEW_2
	if(var_32_bool == 0) goto Label_417; // 0x199 JumpB
	var_40_bool = 0; var_41_object = Obj(); // 0x19a PushV
	var_41_object = var_1_object; // 0x19b MovT
	func_3333(var_40_bool, var_41_object); // 0x19c NEW_2
	var_51_bool = var_40_bool == 0; // 0x19e Not
	if(var_51_bool == 0) goto Label_417; // 0x19f JumpB
	var_31_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_31_bool == 0) goto Label_425; // 0x1a1 JumpB
	var_52_bool = 0; var_53_object = Obj(); // 0x1a2 PushV
	var_53_object = var_1_object; // 0x1a3 MovT
	func_3343(var_52_bool, var_53_object); // 0x1a4 NEW_2
	var_58_bool = var_52_bool == 0; // 0x1a6 Not
	if(var_58_bool == 0) goto Label_425; // 0x1a7 JumpB
	var_30_bool = 1; // 0x1a8 MovB
	
Label_425:
	if(var_30_bool == 0) goto Label_433; // 0x1a9 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x1aa PushV
	var_60_object = var_1_object; // 0x1ab MovT
	func_3353(var_59_bool, var_60_object); // 0x1ac NEW_2
	var_65_bool = var_59_bool == 0; // 0x1ae Not
	if(var_65_bool == 0) goto Label_433; // 0x1af JumpB
	var_29_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_29_bool == 0) goto Label_441; // 0x1b1 JumpB
	var_66_bool = 0; var_67_object = Obj(); // 0x1b2 PushV
	var_67_object = var_1_object; // 0x1b3 MovT
	func_3363(var_66_bool, var_67_object); // 0x1b4 NEW_2
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
	func_3321(var_98_object); // 0x1d0 NEW_2
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
	func_3333(var_102_bool, var_103_object); // 0x1e0 NEW_2
	if(var_102_bool == 0) goto Label_489; // 0x1e2 JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x1e3 PushV
	var_105_object = var_1_object; // 0x1e4 MovT
	func_3343(var_104_bool, var_105_object); // 0x1e5 NEW_2
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
	func_3333(var_110_bool, var_111_object); // 0x1f3 NEW_2
	if(var_110_bool == 0) goto Label_508; // 0x1f5 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x1f6 PushV
	var_113_object = var_1_object; // 0x1f7 MovT
	func_3343(var_112_bool, var_113_object); // 0x1f8 NEW_2
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
	func_3353(var_118_bool, var_119_object); // 0x206 NEW_2
	if(var_118_bool == 0) goto Label_527; // 0x208 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x209 PushV
	var_121_object = var_1_object; // 0x20a MovT
	func_3363(var_120_bool, var_121_object); // 0x20b NEW_2
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
	func_3353(var_126_bool, var_127_object); // 0x219 NEW_2
	if(var_126_bool == 0) goto Label_546; // 0x21b JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x21c PushV
	var_129_object = var_1_object; // 0x21d MovT
	func_3363(var_128_bool, var_129_object); // 0x21e NEW_2
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
	func_3353(var_134_bool, var_135_object); // 0x22c NEW_2
	if(var_134_bool == 0) goto Label_565; // 0x22e JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x22f PushV
	var_137_object = var_1_object; // 0x230 MovT
	func_3363(var_136_bool, var_137_object); // 0x231 NEW_2
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
	func_3309(var_148_object); // 0x24e NEW_2
	if(var_147_bool == 0) goto Label_599; // 0x250 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x251 PushV
	var_154_object = var_1_object; // 0x252 MovT
	func_3373(var_153_bool, var_154_object); // 0x253 NEW_2
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
	func_4118(var_291_bool); // 0x383 NEW_2
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
	func_4046(var_26_object); // 0x3a0 NEW_2
	var_24_int = var_25_int; // 0x3a1 Mov
	var_27_int = 0; // 0x3a3 PushI
	var_28_bool = var_24_int > var_27_int; // 0x3a4 GT
	if(var_28_bool == 0) goto Label_938; // 0x3a5 JumpB
	var_29_object = Obj(); // 0x3a6 PushV
	var_29_object = var_22_bool; // 0x3a7 Mov
	func_4049(var_29_object); // 0x3a8 NEW_2
	
Label_938:
	return 2; // 0x3aa Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_4055(); // 0x3ac NEW_2
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
	func_4046(var_26_object); // 0x445 NEW_2
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
	func_4049(var_32_object); // 0x453 NEW_2
	
Label_1109:
	return 2; // 0x455 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x456 PushV
	var_25_object = Obj(); // 0x457 PushV
	var_25_object = var_22_bool; // 0x458 Mov
	func_3851(var_25_object); // 0x459 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x45b PushV
	var_35_object = var_22_bool; // 0x45c Mov
	func_3934(var_34_int, var_35_object); // 0x45d NEW_2
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
	func_3944(var_75_object); // 0x46b NEW_2
	
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
	func_4170(var_28_object, var_29_object, var_30_bool); // 0x473 NEW_2
	if(var_27_bool == 0) goto Label_1161; // 0x475 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x476 PushV
	var_75_object = var_22_object; // 0x477 Mov
	var_76_bool = var_24_bool; // 0x478 Mov
	func_3952(var_75_object, var_76_bool); // 0x479 NEW_2
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
	func_3962(var_110_object); // 0x487 NEW_2
	
Label_1161:
	return 2; // 0x489 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x48a PushV
	var_25_int = 0; var_26_object = Obj(); // 0x48b PushV
	var_26_object = var_22_bool; // 0x48c Mov
	func_4036(var_26_object); // 0x48d NEW_2
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
	func_4039(); // 0x49b NEW_2
	
Label_1181:
	return 2; // 0x49d Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x49e PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x49f PushV
	var_27_object = var_22_cvector; // 0x4a0 Mov
	var_28_string = var_23_bool; // 0x4a1 Mov
	func_3765(var_26_bool, var_27_object, var_28_string); // 0x4a2 NEW_2
	if(var_26_bool == 0) goto Label_1198; // 0x4a4 JumpB
	func_1277(var_25_int); // 0x4a6 NEW_2
	var_59_object = Obj(); var_60_string = ""; // 0x4a8 PushV
	var_59_object = var_22_cvector; // 0x4a9 Mov
	var_60_string = var_23_bool; // 0x4aa Mov
	func_3797(var_59_object, var_60_string); // 0x4ab NEW_2
	goto Label_1218; // 0x4ad Jump
	
Label_1218:
	return 2; // 0x4c2 Return
	
Label_1198:
	var_208_int = 0; var_209_string = ""; var_210_object = Obj(); // 0x4ae PushV
	var_209_string = var_23_bool; // 0x4af Mov
	var_210_object = var_22_cvector; // 0x4b0 Mov
	func_4041(var_210_object); // 0x4b1 NEW_2
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
	func_4044(); // 0x4c0 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x4c4 PushV
	var_24_string = var_22_bool; // 0x4c5 Mov
	func_3864(var_23_bool, var_24_string); // 0x4c6 NEW_2
	if(var_23_bool == 0) goto Label_1232; // 0x4c8 JumpB
	func_1277(var_22_bool); // 0x4ca NEW_2
	var_33_string = ""; // 0x4cc PushV
	var_33_string = var_22_bool; // 0x4cd Mov
	func_3880(var_33_string); // 0x4ce NEW_2
	
Label_1232:
	return 0; // 0x4d0 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x4d2 PushV
	var_24_object = var_22_bool; // 0x4d3 Mov
	func_3822(var_23_bool, var_24_object); // 0x4d4 NEW_2
	if(var_23_bool == 0) goto Label_1247; // 0x4d6 JumpB
	func_1277(var_22_bool); // 0x4d8 NEW_2
	var_38_object = Obj(); // 0x4da PushV
	var_38_object = var_22_bool; // 0x4db Mov
	func_3845(var_38_object); // 0x4dc NEW_2
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
	func_4055(); // 0x4fa NEW_2
	return 0; // 0x4fc Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1277(var_22_bool); // 0x50f NEW_2
	var_24_object = Obj(); // 0x511 PushV
	var_24_object = var_22_bool; // 0x512 Mov
	func_3741(); // 0x513 NEW_2
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
	func_4046(var_26_object); // 0x59e NEW_2
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
	func_4049(var_31_object); // 0x5ac NEW_2
	
Label_1454:
	return 2; // 0x5ae Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x5af PushV
	var_25_object = Obj(); // 0x5b0 PushV
	var_25_object = var_22_bool; // 0x5b1 Mov
	func_3851(var_25_object); // 0x5b2 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x5b4 PushV
	var_35_object = var_22_bool; // 0x5b5 Mov
	func_3934(var_34_int, var_35_object); // 0x5b6 NEW_2
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
	func_3944(var_74_object); // 0x5c4 NEW_2
	
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
	func_4170(var_28_object, var_29_object, var_30_bool); // 0x5cc NEW_2
	if(var_27_bool == 0) goto Label_1506; // 0x5ce JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x5cf PushV
	var_75_object = var_22_object; // 0x5d0 Mov
	var_76_bool = var_24_bool; // 0x5d1 Mov
	func_3952(var_75_object, var_76_bool); // 0x5d2 NEW_2
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
	func_3962(var_109_object); // 0x5e0 NEW_2
	
Label_1506:
	return 2; // 0x5e2 Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x5e3 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x5e4 PushV
	var_26_object = var_22_bool; // 0x5e5 Mov
	func_4036(var_26_object); // 0x5e6 NEW_2
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
	func_4039(); // 0x5f4 NEW_2
	
Label_1526:
	return 2; // 0x5f6 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x5f7 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x5f8 PushV
	var_27_object = var_22_cvector; // 0x5f9 Mov
	var_28_string = var_23_bool; // 0x5fa Mov
	func_3765(var_26_bool, var_27_object, var_28_string); // 0x5fb NEW_2
	if(var_26_bool == 0) goto Label_1543; // 0x5fd JumpB
	func_1680(); // 0x5ff NEW_2
	var_58_object = Obj(); var_59_string = ""; // 0x601 PushV
	var_58_object = var_22_cvector; // 0x602 Mov
	var_59_string = var_23_bool; // 0x603 Mov
	func_3797(var_58_object, var_59_string); // 0x604 NEW_2
	goto Label_1563; // 0x606 Jump
	
Label_1563:
	return 2; // 0x61b Return
	
Label_1543:
	var_207_int = 0; var_208_string = ""; var_209_object = Obj(); // 0x607 PushV
	var_208_string = var_23_bool; // 0x608 Mov
	var_209_object = var_22_cvector; // 0x609 Mov
	func_4041(var_209_object); // 0x60a NEW_2
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
	func_4044(); // 0x619 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x61d PushV
	var_24_string = var_22_bool; // 0x61e Mov
	func_3864(var_23_bool, var_24_string); // 0x61f NEW_2
	if(var_23_bool == 0) goto Label_1577; // 0x621 JumpB
	func_1680(); // 0x623 NEW_2
	var_32_string = ""; // 0x625 PushV
	var_32_string = var_22_bool; // 0x626 Mov
	func_3880(var_32_string); // 0x627 NEW_2
	
Label_1577:
	return 0; // 0x629 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_1680(); // 0x62b NEW_2
	func_4055(); // 0x62e NEW_2
	return 0; // 0x630 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x632 PushV
	var_24_object = var_22_bool; // 0x633 Mov
	func_3822(var_23_bool, var_24_object); // 0x634 NEW_2
	if(var_23_bool == 0) goto Label_1598; // 0x636 JumpB
	func_1680(); // 0x638 NEW_2
	var_37_object = Obj(); // 0x63a PushV
	var_37_object = var_22_bool; // 0x63b Mov
	func_3845(var_37_object); // 0x63c NEW_2
	
Label_1598:
	return 0; // 0x63e Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x6cd PushV
	var_25_int = 0; var_26_object = Obj(); // 0x6ce PushV
	var_26_object = var_22_bool; // 0x6cf Mov
	func_4046(var_26_object); // 0x6d0 NEW_2
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
	func_4049(var_33_object); // 0x6de NEW_2
	
Label_1760:
	return 2; // 0x6e0 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x6e1 PushV
	var_25_object = Obj(); // 0x6e2 PushV
	var_25_object = var_22_bool; // 0x6e3 Mov
	func_3851(var_25_object); // 0x6e4 NEW_2
	var_34_int = 0; var_35_object = Obj(); // 0x6e6 PushV
	var_35_object = var_22_bool; // 0x6e7 Mov
	func_3934(var_34_int, var_35_object); // 0x6e8 NEW_2
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
	func_3944(var_76_object); // 0x6f6 NEW_2
	
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
	func_4170(var_28_object, var_29_object, var_30_bool); // 0x6fe NEW_2
	if(var_27_bool == 0) goto Label_1812; // 0x700 JumpB
	var_74_int = 0; var_75_object = Obj(); var_76_bool = 0; // 0x701 PushV
	var_75_object = var_22_object; // 0x702 Mov
	var_76_bool = var_24_bool; // 0x703 Mov
	func_3952(var_75_object, var_76_bool); // 0x704 NEW_2
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
	func_3962(var_111_object); // 0x712 NEW_2
	
Label_1812:
	return 2; // 0x714 Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_int = 0; var_24_int = 0; // 0x715 PushV
	var_25_int = 0; var_26_object = Obj(); // 0x716 PushV
	var_26_object = var_22_bool; // 0x717 Mov
	func_4036(var_26_object); // 0x718 NEW_2
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
	func_4039(); // 0x726 NEW_2
	
Label_1832:
	return 2; // 0x728 Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_object, var_22_cvector, var_23_bool)
{
	var_24_int = 0; var_25_int = 0; // 0x729 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x72a PushV
	var_27_object = var_22_cvector; // 0x72b Mov
	var_28_string = var_23_bool; // 0x72c Mov
	func_3765(var_26_bool, var_27_object, var_28_string); // 0x72d NEW_2
	if(var_26_bool == 0) goto Label_1849; // 0x72f JumpB
	func_1884(); // 0x731 NEW_2
	var_60_object = Obj(); var_61_string = ""; // 0x733 PushV
	var_60_object = var_22_cvector; // 0x734 Mov
	var_61_string = var_23_bool; // 0x735 Mov
	func_3797(var_60_object, var_61_string); // 0x736 NEW_2
	goto Label_1869; // 0x738 Jump
	
Label_1869:
	return 2; // 0x74d Return
	
Label_1849:
	var_209_int = 0; var_210_string = ""; var_211_object = Obj(); // 0x739 PushV
	var_210_string = var_23_bool; // 0x73a Mov
	var_211_object = var_22_cvector; // 0x73b Mov
	func_4041(var_211_object); // 0x73c NEW_2
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
	func_4044(); // 0x74b NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_string = ""; // 0x74f PushV
	var_24_string = var_22_bool; // 0x750 Mov
	func_3864(var_23_bool, var_24_string); // 0x751 NEW_2
	if(var_23_bool == 0) goto Label_1883; // 0x753 JumpB
	func_1884(); // 0x755 NEW_2
	var_34_string = ""; // 0x757 PushV
	var_34_string = var_22_bool; // 0x758 Mov
	func_3880(var_34_string); // 0x759 NEW_2
	
Label_1883:
	return 0; // 0x75b Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	func_1884(); // 0x769 NEW_2
	var_25_object = Obj(); // 0x76b PushV
	var_25_object = var_22_bool; // 0x76c Mov
	func_3741(); // 0x76d NEW_2
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
	func_3278(var_72_float, var_73_cvector, var_74_cvector); // 0x789 NEW_2
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
	func_4055(); // 0x797 NEW_2
	return 0; // 0x799 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_object, var_21_cvector, var_22_bool)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x79b PushV
	var_24_object = var_22_bool; // 0x79c Mov
	func_3822(var_23_bool, var_24_object); // 0x79d NEW_2
	if(var_23_bool == 0) goto Label_1959; // 0x79f JumpB
	func_1884(); // 0x7a1 NEW_2
	var_39_object = Obj(); // 0x7a3 PushV
	var_39_object = var_22_bool; // 0x7a4 Mov
	func_3845(var_39_object); // 0x7a5 NEW_2
	
Label_1959:
	return 0; // 0x7a7 Return
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2150(var_21_bool); // 0x7c5 NEW_2
	func_4055(); // 0x7c8 NEW_2
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
	func_3741(); // 0x873 NEW_2
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
	func_3741(); // 0x92e NEW_2
	return 0; // 0x930 Return
}


task_9_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2531(var_21_bool); // 0x942 NEW_2
	func_4055(); // 0x945 NEW_2
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
	func_3741(); // 0x9f0 NEW_2
	return 0; // 0x9f2 Return
}


task_10_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	func_2725(var_21_bool); // 0xa04 NEW_2
	func_4055(); // 0xa07 NEW_2
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
	func_3741(); // 0xab2 NEW_2
	return 0; // 0xab4 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_string)
{
	var_24_float = 0; var_25_float = 0; // 0xe90 PushV
	var_26_string = "health"; // 0xe91 PushS
	var_27_bool = var_23_string == var_26_string; // 0xe92 Eq
	if(var_27_bool == 0) goto Label_3740; // 0xe93 JumpB
	var_28_string = "health"; // 0xe94 PushS
	GetProperty(var_28_string, var_25_float); // 0xe95 Func
	var_29_int = 0; // 0xe97 PushI
	var_30_bool = var_25_float <= var_29_int; // 0xe98 LE
	if(var_30_bool == 0) goto Label_3740; // 0xe99 JumpB
	SignalDeath(var_22_object); // 0xe9a Func
	
Label_3740:
	return 2; // 0xe9c Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object)
{
	var_23_object = Obj(); // 0xe9e PushV
	var_23_object = var_22_object; // 0xe9f Mov
	func_3720(var_23_object); // 0xea0 NEW_2
	return 0; // 0xea2 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float)
{
	var_26_object = Obj(); var_27_int = 0; var_28_float = 0; // 0xea4 PushV
	var_26_object = var_22_object; // 0xea5 Mov
	var_27_int = var_23_int; // 0xea6 Mov
	var_28_float = var_24_float; // 0xea7 Mov
	func_2903(var_26_object, var_27_int, var_28_float); // 0xea8 NEW_2
	return 0; // 0xeaa Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_object, var_23_int, var_24_float, var_25_float, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_int = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0xeac PushV
	var_28_object = var_22_object; // 0xead Mov
	var_29_int = var_23_int; // 0xeae Mov
	var_30_float = var_24_float; // 0xeaf Mov
	var_31_cvector = var_26_cvector; // 0xeb0 Mov
	var_32_cvector = var_27_cvector; // 0xeb1 Mov
	func_2971(var_30_float, var_31_cvector, var_32_cvector); // 0xeb2 NEW_2
	return 0; // 0xeb4 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_cvector, var_21_bool)
{
	var_22_bool = 1; // 0x42a PushB
	SensePlayerOnly(var_22_bool); // 0x42b Func
	func_4120(); // 0x42e NEW_2
	func_1081(); // 0x431 NEW_2
	
Label_1075:
	var_2_object = 0; // 0x433 TMovB
	func_1342(var_20_cvector, var_21_bool); // 0x435 NEW_2
	goto Label_1075; // 0x437 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_323_bool = 0; // 0x4 PushV
	func_4118(var_323_bool); // 0x5 NEW_2
	if(var_323_bool == 0) goto Label_15; // 0x7 JumpB
	var_324_string = ""; // 0x8 PushV
	var_324_string = "Neutral"; // 0x9 MovS
	func_3145(var_324_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_325_bool = var_0_bool; // 0x15 PushT
	if(var_325_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_326_string = "all"; // 0x11 PushS
	var_327_string = "idle"; // 0x12 PushS
	PlayAnimation(var_326_string, var_327_string); // 0x13 Func
}


func_4099(var_207_object)
{
	var_208_object = Obj(); // 0x1004 PushV
	var_208_object = var_207_object; // 0x1005 Mov
	func_4084(var_208_object); // 0x1006 NEW_2
	return 0; // 0x1008 Return
}


func_4105(var_30_bool)
{
	var_30_bool = 0; // 0x100a MovB
	return 0; // 0x100b Return
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
	func_3194(var_48_string); // 0x417 NEW_2
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
	func_3241(var_52_cvector, var_53_cvector); // 0xa14 NEW_2
	var_59_float = 0.75; // 0xa16 PushF
	var_60_float = var_46_cvector * var_59_float; // 0xa17 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0xa18 Add2
	func_3241(var_50_cvector, var_51_cvector); // 0xa19 NEW_2
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


func_4108()
{
	return 0; // 0x100d Return
}


func_4110(var_106_int)
{
	var_106_int = 515555; // 0x100e MovI
	return 0; // 0x100f Return
}


func_3086(var_289_bool, var_290_object)
{
	var_291_bool = 0; var_292_object = Obj(); var_293_float = 0; // 0xc0f PushV
	var_292_object = var_290_object; // 0xc10 Mov
	var_293_float = 70; // 0xc11 MovI
	func_3094(var_292_object, var_293_float); // 0xc12 NEW_2
	var_289_bool = var_291_bool; // 0xc13 Mov
	return 0; // 0xc15 Return
}


func_4112(var_105_int)
{
	var_105_int = 503340; // 0x1010 MovI
	return 0; // 0x1011 Return
}


func_4114(var_107_string)
{
	var_107_string = "ui/NPC_Citizen2.png"; // 0x1012 MovS
	return 0; // 0x1013 Return
}


func_4116(var_108_string)
{
	var_108_string = "ui/NPC_Citizen2_b.png"; // 0x1014 MovS
	return 0; // 0x1015 Return
}


func_4118(var_100_bool)
{
	var_100_bool = 0; // 0x1016 MovB
	return 0; // 0x1017 Return
}


func_3094(var_291_bool, var_293_float)
{
	var_294_float = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_bool = 0; var_302_float = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_bool = 0; // 0xc16 PushV
	GetPosition(var_303_cvector); // 0xc17 ObjFunc
	GetEyesHeight(var_302_float); // 0xc19 ObjFunc
	var_310_float = GetByIndex(var_303_cvector, 1); // 0xc1b PushE
	var_310_float = var_310_float + var_302_float; // 0xc1c Add2
	SetByIndex(var_303_cvector, 1) = var_310_float; // 0xc1d PopE
	GetPosition(var_304_cvector); // 0xc1e Func
	GetEyesHeight(var_302_float); // 0xc20 Func
	var_311_float = GetByIndex(var_304_cvector, 1); // 0xc22 PushE
	var_311_float = var_311_float + var_302_float; // 0xc23 Add2
	SetByIndex(var_304_cvector, 1) = var_311_float; // 0xc24 PopE
	var_305_cvector = var_303_cvector - var_304_cvector; // 0xc25 Sub2
	var_312_float = GetByIndex(var_305_cvector, 1); // 0xc26 PushE
	var_312_float = 0; // 0xc27 MovI
	SetByIndex(var_305_cvector, 1) = var_312_float; // 0xc28 PopE
	var_313_int = var_305_cvector | var_305_cvector; // 0xc29 Or
	var_314_float = sqrt(var_313_int); // 0xc2a Sqrt
	var_305_cvector = var_305_cvector / var_305_cvector; // 0xc2b Div2
	var_306_cvector = -var_305_cvector; // 0xc2c Neg2
	var_315_float = var_305_cvector * var_293_float; // 0xc2d Mult
	var_316_cvector = CVector(0.0, 10.0, 0.0); // 0xc2e PushVec
	var_307_cvector = var_315_float - var_316_cvector; // 0xc2f Sub2
	var_308_cvector = var_304_cvector + var_307_cvector; // 0xc30 Add2
	IsOverrideActive(var_309_bool); // 0xc31 Func
	var_317_bool = var_309_bool; // 0xc33 Push
	if(var_317_bool == 0) goto Label_3127; // 0xc34 JumpB
	var_291_bool = 0; // 0xc35 MovB
	return 16; // 0xc36 Return
	
Label_3127:
	StopWorld(); // 0xc37 Func
	CameraTransit(var_308_cvector, var_306_cvector); // 0xc39 Func
	var_318_float = GetByIndex(var_307_cvector, 0); // 0xc3b PushE
	var_319_float = GetByIndex(var_307_cvector, 2); // 0xc3c PushE
	Rotate(var_318_float, var_319_float); // 0xc3d Func
	CameraWaitForPlayFinish(); // 0xc3f Func
	ResumeWorld(); // 0xc41 Func
	var_291_bool = 1; // 0xc43 MovB
	return 16; // 0xc44 Return
}


func_4120()
{
	var_23_bool = GlobalVars[0]; // 0x1018 PushGE
	var_23_bool = 0; // 0x1019 MovB
	GlobalVars[0] = var_23_bool; // 0x101a PopGE
	return 0; // 0x101b Return
}


func_4124(var_34_object, var_49_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x101c PushV
	var_37_bool = GlobalVars[0]; // 0x101d PushGE
	if(var_37_bool == 0) goto Label_4137; // 0x101e JumpB
	IsOverrideActive(var_36_bool); // 0x101f Func
	var_38_bool = var_36_bool == 0; // 0x1021 Not
	if(var_38_bool == 0) goto Label_4135; // 0x1022 JumpB
	var_39_object = Obj(); // 0x1023 PushV
	var_39_object = var_34_object; // 0x1024 Mov
	func_3455(var_39_object); // 0x1025 NEW_2
	
Label_4135:
	return 2; // 0x1027 Return
	
Label_4137:
	var_46_int = 1000; // 0x1029 PushI
	var_47_int = 0; var_48_object = Obj(); // 0x102a PushV
	var_48_object = var_34_object; // 0x102b Mov
	TaskCall(1); // 0x102c TaskCall
	func_40(var_49_object, var_47_int, var_48_object); // 0x102d NEW_2
	TaskReturn(); // 0x102e TaskReturn
	var_288_bool = var_46_int == var_49_object; // 0x1030 Eq
	if(var_288_bool == 0) goto Label_4163; // 0x1031 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0x1032 PushV
	var_290_object = var_34_object; // 0x1033 Mov
	func_3086(var_289_bool, var_290_object); // 0x1034 NEW_2
	var_320_bool = var_289_bool == 0; // 0x1036 Not
	if(var_320_bool == 0) goto Label_4153; // 0x1037 JumpB
	return 2; // 0x1038 Return
	
Label_4153:
	var_321_object = Obj(); // 0x1039 PushV
	var_321_object = var_34_object; // 0x103a Mov
	TaskCall(0); // 0x103b TaskCall
	func_0(var_321_object); // 0x103c NEW_2
	TaskReturn(); // 0x103d TaskReturn
	var_328_object = Obj(); // 0x103f PushV
	var_328_object = var_34_object; // 0x1040 Mov
	func_3141(); // 0x1041 NEW_2
	
Label_4163:
	return 2; // 0x1043 Return
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
	var_104_bool = var_58_bool == 0; // 0x2f Not
	if(var_104_bool == 0) goto Label_51; // 0x30 JumpB
	var_47_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_54_object); // 0x33 Func
	var_105_int = 0; // 0x35 PushV
	func_4112(var_105_int); // 0x36 NEW_2
	SetNPCName(var_105_int); // 0x38 ObjFunc
	var_106_int = 0; // 0x3a PushV
	func_4110(var_106_int); // 0x3b NEW_2
	SetNPCDescription(var_106_int); // 0x3d ObjFunc
	var_107_string = ""; // 0x3f PushV
	func_4114(var_107_string); // 0x40 NEW_2
	SetPhoto(var_107_string); // 0x42 ObjFunc
	var_108_string = ""; // 0x44 PushV
	func_4116(var_108_string); // 0x45 NEW_2
	SetPhoto2(var_108_string); // 0x47 ObjFunc
	var_109_int = 0; // 0x49 PushV
	func_3418(var_109_int); // 0x4a NEW_2
	SetPlayerName(var_109_int); // 0x4c ObjFunc
	var_56_int = -1; // 0x4e MovI
	IsOverrideActive(var_55_bool); // 0x4f Func
	var_117_bool = var_55_bool; // 0x51 Push
	if(var_117_bool == 0) goto Label_85; // 0x52 JumpB
	var_47_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_54_object); // 0x55 Func
	var_118_object = Obj(); var_119_object = Obj(); // 0x57 PushV
	var_118_object = var_48_object; // 0x58 Mov
	var_119_object = var_54_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_57_bool); // 0x5e ObjFunc
	
Label_96:
	var_280_bool = var_57_bool == 0; // 0x60 Not
	if(var_280_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_57_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_281_object = Obj(); // 0x67 PushV
	var_281_object = var_48_object; // 0x68 Mov
	func_3069(); // 0x69 NEW_2
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
	func_4055(); // 0x43f NEW_2
	
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
	func_3900(var_71_int); // 0x649 NEW_2
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
	func_3893(var_93_string, var_94_int); // 0x665 NEW_2
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


func_4164(var_67_bool)
{
	var_68_float = 0; // 0x1044 PushV
	func_3441(var_68_float); // 0x1045 NEW_2
	var_76_float = 0.7; // 0x1047 PushF
	var_67_bool = var_68_float > var_76_float; // 0x1048 GT2
	return 0; // 0x1049 Return
}


func_3141()
{
	CameraSwitchToNormal(); // 0xc46 Func
	return 0; // 0xc48 Return
}


func_3145(var_196_string)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0xc49 PushV
	lshHasAnimation(var_200_bool, var_196_string); // 0xc4a Func
	var_203_bool = var_200_bool; // 0xc4c Push
	if(var_203_bool == 0) goto Label_3156; // 0xc4d JumpB
	lshGetAnimTimes(var_196_string, var_201_float, var_202_float); // 0xc4e Func
	var_204_bool = 0; // 0xc50 PushB
	lshPlayAnimation(var_201_float, var_202_float, var_204_bool); // 0xc51 Func
	goto Label_3160; // 0xc53 Jump
	
Label_3160:
	return 6; // 0xc58 Return
	
Label_3156:
	var_205_string = "Can't find lsh animation : "; // 0xc54 PushS
	var_206_int = var_205_string + var_196_string; // 0xc55 Add
	Trace(var_206_int); // 0xc56 Func
}


func_4170(var_27_bool, var_28_object, var_29_object)
{
	var_31_bool = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_float = 0; // 0x104b PushV
	var_32_object = var_28_object; // 0x104c Mov
	var_33_object = var_29_object; // 0x104d Mov
	var_34_float = 700.0; // 0x104e MovF
	func_3970(var_31_bool, var_32_object, var_33_object, var_34_float); // 0x104f NEW_2
	var_27_bool = var_31_bool; // 0x1050 Mov
	return 0; // 0x1052 Return
}


func_4179(var_105_object)
{
	var_106_bool = 0; var_107_object = Obj(); // 0x1054 PushV
	var_107_object = var_105_object; // 0x1055 Mov
	func_2777(var_106_bool, var_107_object); // 0x1056 NEW_2
	if(var_106_bool == 0) goto Label_4196; // 0x1058 JumpB
	var_110_object = Obj(); // 0x1059 PushV
	func_3235(var_110_object); // 0x105a NEW_2
	var_113_float = -0.1; // 0x105c PushF
	var_114_bool = 1; // 0x105d PushB
	ReportReputationChange(var_105_object, var_110_object, var_113_float, var_114_bool); // 0x105e Func
	var_115_bool = 0; // 0x1060 PushV
	var_115_bool = 0; // 0x1061 MovB
	func_3540(var_115_bool); // 0x1062 NEW_2
	
Label_4196:
	func_3516(); // 0x1065 NEW_2
	var_249_bool = GlobalVars[0]; // 0x1067 PushGE
	var_249_bool = 1; // 0x1068 MovB
	GlobalVars[0] = var_249_bool; // 0x1069 PopGE
	var_250_int = 50; // 0x106a PushI
	var_251_int = 40; // 0x106b PushI
	SetRTEnvelope(var_250_int, var_251_int); // 0x106c Func
	return 0; // 0x106e Return
}


func_3161(var_174_string, var_175_bool)
{
	var_178_bool = 0; var_179_float = 0; var_180_float = 0; var_181_bool = 0; var_182_float = 0; var_183_float = 0; // 0xc59 PushV
	lshHasAnimation(var_181_bool, var_174_string); // 0xc5a Func
	var_184_bool = var_181_bool; // 0xc5c Push
	if(var_184_bool == 0) goto Label_3171; // 0xc5d JumpB
	lshGetAnimTimes(var_174_string, var_182_float, var_183_float); // 0xc5e Func
	lshPlayAnimation(var_182_float, var_183_float, var_175_bool); // 0xc60 Func
	goto Label_3175; // 0xc62 Jump
	
Label_3175:
	return 6; // 0xc67 Return
	
Label_3171:
	var_185_string = "Can't find lsh animation : "; // 0xc63 PushS
	var_186_int = var_185_string + var_174_string; // 0xc64 Add
	Trace(var_186_int); // 0xc65 Func
}


func_2150(var_2_object)
{
	Stop(); // 0x866 Func
	var_23_int = 120; // 0x868 PushI
	KillTimer(var_23_int); // 0x869 Func
	var_2_object = 1; // 0x86b TMovB
	return 0; // 0x86c Return
}


func_3176(var_91_object)
{
	var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0); // 0xc68 PushV
	GetEyesHeight(var_94_float); // 0xc69 ObjFunc
	var_95_cvector = CVector(0.0, 0.0, 0.0); // 0xc6b MovV
	var_96_float = GetByIndex(var_95_cvector, 1); // 0xc6c PushE
	var_96_float = var_94_float; // 0xc6d Mov
	SetByIndex(var_95_cvector, 1) = var_96_float; // 0xc6e PopE
	var_97_string = "head"; // 0xc6f PushS
	LookAsync(var_91_object, var_97_string, var_95_cvector); // 0xc70 Func
	return 4; // 0xc72 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_118_object, var_119_object)
{
	var_0_bool = var_119_object; // 0x73 TMov
	var_1_object = var_118_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_124_int = 1; // 0x76 PushI
	if(var_124_int == 0) goto Label_336; // 0x77 JumpB
	var_125_bool = 0; // 0x78 PushV
	var_125_bool = 0; // 0x79 MovB
	var_126_bool = 0; // 0x7a PushV
	var_126_bool = 0; // 0x7b MovB
	var_127_bool = 0; // 0x7c PushV
	var_127_bool = 0; // 0x7d MovB
	var_128_bool = 0; // 0x7e PushV
	var_128_bool = 0; // 0x7f MovB
	var_129_bool = 0; var_130_object = Obj(); // 0x80 PushV
	var_130_object = var_1_object; // 0x81 MovT
	func_3321(var_130_object); // 0x82 NEW_2
	if(var_129_bool == 0) goto Label_140; // 0x84 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x85 PushV
	var_138_object = var_1_object; // 0x86 MovT
	func_3333(var_137_bool, var_138_object); // 0x87 NEW_2
	var_148_bool = var_137_bool == 0; // 0x89 Not
	if(var_148_bool == 0) goto Label_140; // 0x8a JumpB
	var_128_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_128_bool == 0) goto Label_148; // 0x8c JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x8d PushV
	var_150_object = var_1_object; // 0x8e MovT
	func_3343(var_149_bool, var_150_object); // 0x8f NEW_2
	var_155_bool = var_149_bool == 0; // 0x91 Not
	if(var_155_bool == 0) goto Label_148; // 0x92 JumpB
	var_127_bool = 1; // 0x93 MovB
	
Label_148:
	if(var_127_bool == 0) goto Label_156; // 0x94 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x95 PushV
	var_157_object = var_1_object; // 0x96 MovT
	func_3353(var_156_bool, var_157_object); // 0x97 NEW_2
	var_162_bool = var_156_bool == 0; // 0x99 Not
	if(var_162_bool == 0) goto Label_156; // 0x9a JumpB
	var_126_bool = 1; // 0x9b MovB
	
Label_156:
	if(var_126_bool == 0) goto Label_164; // 0x9c JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x9d PushV
	var_164_object = var_1_object; // 0x9e MovT
	func_3363(var_163_bool, var_164_object); // 0x9f NEW_2
	var_169_bool = var_163_bool == 0; // 0xa1 Not
	if(var_169_bool == 0) goto Label_164; // 0xa2 JumpB
	var_125_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_125_bool == 0) goto Label_185; // 0xa4 JumpB
	var_170_string = ""; // 0xa5 PushV
	var_170_string = "Neutral"; // 0xa6 MovS
	func_366(var_119_object, var_170_string); // 0xa7 NEW_2
	var_187_int = 543344; // 0xa9 PushI
	SetMessage(var_187_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_188_int = 543362; // 0xae PushI
	var_189_int = 45824; // 0xaf PushI
	var_190_int = 45822; // 0xb0 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xb1 TObjFunc
	var_191_int = 543361; // 0xb3 PushI
	var_192_int = -1; // 0xb4 PushI
	var_193_int = 45821; // 0xb5 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xb6 TObjFunc
	goto Label_336; // 0xb8 Jump
	
Label_336:
	var_194_bool = 0; // 0x150 PushV
	func_4118(var_194_bool); // 0x151 NEW_2
	if(var_194_bool == 0) goto Label_351; // 0x153 JumpB
	
Label_340:
	lshWaitForAnimEnd(); // 0x154 Func
	var_195_object = var_3_object; // 0x156 PushT
	if(var_195_object == 0) goto Label_345; // 0x157 JumpB
	goto Label_350; // 0x158 Jump
	
Label_350:
	goto Label_365; // 0x15e Jump
	
Label_365:
	return 0; // 0x16d Return
	
Label_345:
	var_196_string = ""; // 0x159 PushV
	var_196_string = var_2_object; // 0x15a MovT
	func_3145(var_196_string); // 0x15b NEW_2
	goto Label_340; // 0x15d Jump
	
Label_351:
	var_207_string = "all"; // 0x15f PushS
	var_208_string = "idle"; // 0x160 PushS
	PlayAnimation(var_207_string, var_208_string); // 0x161 Func
	
Label_355:
	WaitForAnimEnd(); // 0x163 Func
	var_209_object = var_3_object; // 0x165 PushT
	if(var_209_object == 0) goto Label_360; // 0x166 JumpB
	goto Label_365; // 0x167 Jump
	
Label_360:
	var_210_string = "all"; // 0x168 PushS
	var_211_string = "idle"; // 0x169 PushS
	PlayAnimation(var_210_string, var_211_string); // 0x16a Func
	goto Label_355; // 0x16c Jump
	
Label_185:
	var_212_bool = 0; var_213_object = Obj(); // 0xb9 PushV
	var_213_object = var_1_object; // 0xba MovT
	func_3321(var_213_object); // 0xbb NEW_2
	if(var_212_bool == 0) goto Label_300; // 0xbd JumpB
	var_214_string = ""; // 0xbe PushV
	var_214_string = "Neutral"; // 0xbf MovS
	func_366(var_119_object, var_214_string); // 0xc0 NEW_2
	var_215_int = 543343; // 0xc2 PushI
	SetMessage(var_215_int); // 0xc3 TObjFunc
	ClearReplies(); // 0xc5 TObjFunc
	var_216_bool = 0; // 0xc7 PushV
	var_216_bool = 1; // 0xc8 MovB
	var_217_bool = 0; var_218_object = Obj(); // 0xc9 PushV
	var_218_object = var_1_object; // 0xca MovT
	func_3333(var_217_bool, var_218_object); // 0xcb NEW_2
	if(var_217_bool == 0) goto Label_212; // 0xcd JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0xce PushV
	var_220_object = var_1_object; // 0xcf MovT
	func_3343(var_219_bool, var_220_object); // 0xd0 NEW_2
	if(var_219_bool == 0) goto Label_212; // 0xd2 JumpB
	var_216_bool = 0; // 0xd3 MovB
	
Label_212:
	if(var_216_bool == 0) goto Label_218; // 0xd4 JumpB
	var_221_int = 543349; // 0xd5 PushI
	var_222_int = 45804; // 0xd6 PushI
	var_223_int = 45807; // 0xd7 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xd8 TObjFunc
	
Label_218:
	var_224_bool = 0; // 0xda PushV
	var_224_bool = 1; // 0xdb MovB
	var_225_bool = 0; var_226_object = Obj(); // 0xdc PushV
	var_226_object = var_1_object; // 0xdd MovT
	func_3333(var_225_bool, var_226_object); // 0xde NEW_2
	if(var_225_bool == 0) goto Label_231; // 0xe0 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xe1 PushV
	var_228_object = var_1_object; // 0xe2 MovT
	func_3343(var_227_bool, var_228_object); // 0xe3 NEW_2
	if(var_227_bool == 0) goto Label_231; // 0xe5 JumpB
	var_224_bool = 0; // 0xe6 MovB
	
Label_231:
	if(var_224_bool == 0) goto Label_237; // 0xe7 JumpB
	var_229_int = 543345; // 0xe8 PushI
	var_230_int = 45804; // 0xe9 PushI
	var_231_int = 45803; // 0xea PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xeb TObjFunc
	
Label_237:
	var_232_bool = 0; // 0xed PushV
	var_232_bool = 1; // 0xee MovB
	var_233_bool = 0; var_234_object = Obj(); // 0xef PushV
	var_234_object = var_1_object; // 0xf0 MovT
	func_3353(var_233_bool, var_234_object); // 0xf1 NEW_2
	if(var_233_bool == 0) goto Label_250; // 0xf3 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0xf4 PushV
	var_236_object = var_1_object; // 0xf5 MovT
	func_3363(var_235_bool, var_236_object); // 0xf6 NEW_2
	if(var_235_bool == 0) goto Label_250; // 0xf8 JumpB
	var_232_bool = 0; // 0xf9 MovB
	
Label_250:
	if(var_232_bool == 0) goto Label_256; // 0xfa JumpB
	var_237_int = 543347; // 0xfb PushI
	var_238_int = 45806; // 0xfc PushI
	var_239_int = 45805; // 0xfd PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xfe TObjFunc
	
Label_256:
	var_240_bool = 0; // 0x100 PushV
	var_240_bool = 1; // 0x101 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x102 PushV
	var_242_object = var_1_object; // 0x103 MovT
	func_3353(var_241_bool, var_242_object); // 0x104 NEW_2
	if(var_241_bool == 0) goto Label_269; // 0x106 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x107 PushV
	var_244_object = var_1_object; // 0x108 MovT
	func_3363(var_243_bool, var_244_object); // 0x109 NEW_2
	if(var_243_bool == 0) goto Label_269; // 0x10b JumpB
	var_240_bool = 0; // 0x10c MovB
	
Label_269:
	if(var_240_bool == 0) goto Label_275; // 0x10d JumpB
	var_245_int = 543357; // 0x10e PushI
	var_246_int = 45806; // 0x10f PushI
	var_247_int = 45816; // 0x110 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x111 TObjFunc
	
Label_275:
	var_248_bool = 0; // 0x113 PushV
	var_248_bool = 1; // 0x114 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x115 PushV
	var_250_object = var_1_object; // 0x116 MovT
	func_3353(var_249_bool, var_250_object); // 0x117 NEW_2
	if(var_249_bool == 0) goto Label_288; // 0x119 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x11a PushV
	var_252_object = var_1_object; // 0x11b MovT
	func_3363(var_251_bool, var_252_object); // 0x11c NEW_2
	if(var_251_bool == 0) goto Label_288; // 0x11e JumpB
	var_248_bool = 0; // 0x11f MovB
	
Label_288:
	if(var_248_bool == 0) goto Label_294; // 0x120 JumpB
	var_253_int = 543355; // 0x121 PushI
	var_254_int = -1; // 0x122 PushI
	var_255_int = 45814; // 0x123 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x124 TObjFunc
	
Label_294:
	var_256_int = 543351; // 0x126 PushI
	var_257_int = -1; // 0x127 PushI
	var_258_int = 45809; // 0x128 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x129 TObjFunc
	goto Label_336; // 0x12b Jump
	
Label_300:
	var_259_string = ""; // 0x12c PushV
	var_259_string = "Neutral"; // 0x12d MovS
	func_366(var_119_object, var_259_string); // 0x12e NEW_2
	var_260_int = 538136; // 0x130 PushI
	SetMessage(var_260_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_261_bool = 0; // 0x135 PushV
	var_261_bool = 0; // 0x136 MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x137 PushV
	var_263_object = var_1_object; // 0x138 MovT
	func_3309(var_263_object); // 0x139 NEW_2
	if(var_262_bool == 0) goto Label_322; // 0x13b JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x13c PushV
	var_269_object = var_1_object; // 0x13d MovT
	func_3373(var_268_bool, var_269_object); // 0x13e NEW_2
	if(var_268_bool == 0) goto Label_322; // 0x140 JumpB
	var_261_bool = 1; // 0x141 MovB
	
Label_322:
	if(var_261_bool == 0) goto Label_328; // 0x142 JumpB
	var_274_int = 538137; // 0x143 PushI
	var_275_int = 40009; // 0x144 PushI
	var_276_int = 40008; // 0x145 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x146 TObjFunc
	
Label_328:
	var_277_int = 538165; // 0x148 PushI
	var_278_int = -1; // 0x149 PushI
	var_279_int = 40040; // 0x14a PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x14b TObjFunc
	goto Label_336; // 0x14d Jump
}


func_3187()
{
	var_25_bool = 0; // 0xc73 PushV
	func_4118(var_25_bool); // 0xc74 NEW_2
	if(var_25_bool == 0) goto Label_3193; // 0xc76 JumpB
	lshStopSpeech(); // 0xc77 Func
	
Label_3193:
	return 0; // 0xc79 Return
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
	func_3251(var_85_float, var_86_cvector, var_87_cvector); // 0x881 NEW_2
	var_93_float = -0.34202; // 0x883 PushF
	var_74_bool = var_85_float >= var_93_float; // 0x884 GE2
	return 4; // 0x885 Return
}


func_3194(var_48_string)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0xc7a PushV
	IsExisting3DSound(var_57_bool, var_48_string); // 0xc7b Func
	var_65_bool = var_57_bool == 0; // 0xc7d Not
	if(var_65_bool == 0) goto Label_3219; // 0xc7e JumpB
	var_58_int = 0; // 0xc7f MovI
	
Label_3200:
	var_66_int = 1; // 0xc80 PushI
	var_67_int = var_58_int + var_66_int; // 0xc81 Add
	var_68_int = var_48_string + var_67_int; // 0xc82 Add
	IsExisting3DSound(var_59_bool, var_68_int); // 0xc83 Func
	var_69_bool = var_59_bool == 0; // 0xc85 Not
	if(var_69_bool == 0) goto Label_3208; // 0xc86 JumpB
	goto Label_3211; // 0xc87 Jump
	
Label_3211:
	var_70_bool = var_58_int == 0; // 0xc8b Not
	if(var_70_bool == 0) goto Label_3214; // 0xc8c JumpB
	return 16; // 0xc8d Return
	
Label_3214:
	irand(var_60_int, var_58_int); // 0xc8e Func
	var_71_int = 1; // 0xc90 PushI
	var_72_int = var_60_int + var_71_int; // 0xc91 Add
	var_48_string = var_48_string + var_72_int; // 0xc92 Add2
	
Label_3219:
	Is3DSoundLoaded(var_61_bool, var_48_string); // 0xc93 Func
	var_73_bool = var_61_bool; // 0xc95 Push
	if(var_73_bool == 0) goto Label_3234; // 0xc96 JumpB
	GetEyesHeight(var_62_float); // 0xc97 Func
	GetDirection(var_63_cvector); // 0xc99 Func
	var_74_int = 50; // 0xc9b PushI
	var_64_cvector = var_63_cvector * var_74_int; // 0xc9c Mult2
	var_75_float = GetByIndex(var_64_cvector, 1); // 0xc9d PushE
	var_75_float = var_75_float + var_62_float; // 0xc9e Add2
	SetByIndex(var_64_cvector, 1) = var_75_float; // 0xc9f PopE
	PlayGlobalSound(var_48_string, var_64_cvector); // 0xca0 Func
	
Label_3234:
	return 16; // 0xca2 Return
	
Label_3208:
	var_76_int = 1; // 0xc88 PushI
	var_58_int = var_58_int + var_76_int; // 0xc89 Add2
	goto Label_3200; // 0xc8a Jump
}


func_3715(var_142_int, var_143_string)
{
	var_144_int = 0; var_145_int = 0; // 0xe83 PushV
	GetInvItemByName(var_145_int, var_143_string); // 0xe84 Func
	var_142_int = var_145_int; // 0xe86 Mov
	return 2; // 0xe87 Return
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
	func_3241(var_52_cvector, var_53_cvector); // 0x890 NEW_2
	var_59_float = 0.75; // 0x892 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x893 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x894 Add2
	func_3241(var_50_cvector, var_51_cvector); // 0x895 NEW_2
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


func_3720(var_23_object)
{
	var_24_object = Obj(); // 0xe89 PushV
	var_24_object = var_23_object; // 0xe8a Mov
	TaskCall(3); // 0xe8b TaskCall
	func_910(var_24_object); // 0xe8c NEW_2
	TaskReturn(); // 0xe8d TaskReturn
	return 0; // 0xe8f Return
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
	func_3278(var_104_float, var_105_cvector, var_106_cvector); // 0x6a4 NEW_2
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


func_3235(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0xca3 PushV
	self(var_112_object); // 0xca4 Func
	var_110_object = var_112_object; // 0xca6 Mov
	return 2; // 0xca7 Return
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


func_3241(var_54_cvector, var_55_cvector)
{
	var_62_float = 0; var_63_float = 0; // 0xca9 PushV
	var_64_int = var_55_cvector | var_55_cvector; // 0xcaa Or
	var_63_float = sqrt(var_64_int); // 0xcab Sqrt2
	var_65_float = 0.0; // 0xcac PushF
	var_66_bool = var_63_float < var_65_float; // 0xcad LT
	if(var_66_bool == 0) goto Label_3249; // 0xcae JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0xcaf MovV
	return 2; // 0xcb0 Return
	
Label_3249:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0xcb1 Div2
	return 2; // 0xcb2 Return
}


func_3251(var_85_float, var_86_cvector, var_87_cvector)
{
	var_88_int = var_86_cvector | var_87_cvector; // 0xcb4 Or
	var_89_int = var_86_cvector | var_86_cvector; // 0xcb5 Or
	var_90_int = var_87_cvector | var_87_cvector; // 0xcb6 Or
	var_91_float = var_89_int * var_90_int; // 0xcb7 Mult
	var_92_float = sqrt(var_91_float); // 0xcb8 Sqrt
	var_85_float = var_88_int / var_88_int; // 0xcb9 Div2
	return 0; // 0xcba Return
}


func_3765(var_26_bool, var_27_object, var_28_string)
{
	var_29_string = "unholster"; // 0xeb6 PushS
	var_30_bool = var_28_string == var_29_string; // 0xeb7 Eq
	if(var_30_bool == 0) goto Label_3776; // 0xeb8 JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0xeb9 PushV
	var_32_object = var_27_object; // 0xeba Mov
	func_4056(var_31_bool, var_32_object); // 0xebb NEW_2
	var_26_bool = var_31_bool; // 0xebc Mov
	return 0; // 0xebe Return
	
Label_3776:
	var_35_string = "player_shot"; // 0xec0 PushS
	var_36_bool = var_28_string == var_35_string; // 0xec1 Eq
	if(var_36_bool == 0) goto Label_3786; // 0xec2 JumpB
	var_37_bool = 0; var_38_object = Obj(); // 0xec3 PushV
	var_38_object = var_27_object; // 0xec4 Mov
	func_4069(var_37_bool, var_38_object); // 0xec5 NEW_2
	var_26_bool = var_37_bool; // 0xec6 Mov
	return 0; // 0xec8 Return
	
Label_3786:
	var_52_string = "battle"; // 0xeca PushS
	var_53_bool = var_28_string == var_52_string; // 0xecb Eq
	if(var_53_bool == 0) goto Label_3795; // 0xecc JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xecd PushV
	var_55_object = var_27_object; // 0xece Mov
	func_4092(var_54_bool, var_55_object); // 0xecf NEW_2
	var_26_bool = var_54_bool; // 0xed0 Mov
	return 0; // 0xed2 Return
	
Label_3795:
	var_26_bool = 0; // 0xed3 MovB
	return 0; // 0xed4 Return
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
	func_3251(var_85_float, var_86_cvector, var_87_cvector); // 0xac0 NEW_2
	var_93_float = -0.34202; // 0xac2 PushF
	var_74_bool = var_85_float >= var_93_float; // 0xac3 GE2
	return 4; // 0xac4 Return
}


func_3259(var_75_float, var_76_cvector, var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0); // 0xcbc PushE
	var_79_float = GetByIndex(var_77_cvector, 0); // 0xcbd PushE
	var_80_float = var_78_float * var_79_float; // 0xcbe Mult
	var_81_float = GetByIndex(var_76_cvector, 2); // 0xcbf PushE
	var_82_float = GetByIndex(var_77_cvector, 2); // 0xcc0 PushE
	var_83_float = var_81_float * var_82_float; // 0xcc1 Mult
	var_75_float = var_80_float + var_83_float; // 0xcc2 Add2
	return 0; // 0xcc3 Return
}


func_3268(var_84_float, var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0); // 0xcc5 PushE
	var_87_float = GetByIndex(var_85_cvector, 0); // 0xcc6 PushE
	var_88_float = var_86_float * var_87_float; // 0xcc7 Mult
	var_89_float = GetByIndex(var_85_cvector, 2); // 0xcc8 PushE
	var_90_float = GetByIndex(var_85_cvector, 2); // 0xcc9 PushE
	var_91_float = var_89_float * var_90_float; // 0xcca Mult
	var_92_int = var_88_float + var_91_float; // 0xccb Add
	var_84_float = sqrt(var_92_int); // 0xccc Sqrt2
	return 0; // 0xccd Return
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
	func_3176(var_91_object); // 0x6ca NEW_2
	return 0; // 0x6cc Return
}


func_2762(var_56_cvector)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0xaca PushV
	GetPosition(var_60_cvector); // 0xacb Func
	GetPosition(var_61_cvector); // 0xacd ObjFunc
	var_56_cvector = var_61_cvector - var_60_cvector; // 0xacf Sub2
	return 4; // 0xad0 Return
}


func_3278(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); // 0xccf PushV
	var_76_cvector = var_73_cvector; // 0xcd0 Mov
	var_77_cvector = var_74_cvector; // 0xcd1 Mov
	func_3259(var_75_float, var_76_cvector, var_77_cvector); // 0xcd2 NEW_2
	var_84_float = 0; var_85_cvector = CVector(0,0,0); // 0xcd4 PushV
	var_85_cvector = var_73_cvector; // 0xcd5 Mov
	func_3268(var_84_float, var_85_cvector); // 0xcd6 NEW_2
	var_93_float = 0; var_94_cvector = CVector(0,0,0); // 0xcd8 PushV
	var_94_cvector = var_74_cvector; // 0xcd9 Mov
	func_3268(var_93_float, var_94_cvector); // 0xcda NEW_2
	var_95_float = var_84_float * var_93_float; // 0xcdc Mult
	var_72_float = var_75_float / var_75_float; // 0xcdd Div2
	return 0; // 0xcde Return
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


func_3797(var_60_object, var_61_string)
{
	var_62_string = "unholster"; // 0xed6 PushS
	var_63_bool = var_61_string == var_62_string; // 0xed7 Eq
	if(var_63_bool == 0) goto Label_3806; // 0xed8 JumpB
	var_64_object = Obj(); // 0xed9 PushV
	var_64_object = var_60_object; // 0xeda Mov
	func_4061(var_64_object); // 0xedb NEW_2
	goto Label_3821; // 0xedd Jump
	
Label_3821:
	return 0; // 0xeed Return
	
Label_3806:
	var_137_string = "player_shot"; // 0xede PushS
	var_138_bool = var_61_string == var_137_string; // 0xedf Eq
	if(var_138_bool == 0) goto Label_3814; // 0xee0 JumpB
	var_139_object = Obj(); // 0xee1 PushV
	var_139_object = var_60_object; // 0xee2 Mov
	func_4084(var_139_object); // 0xee3 NEW_2
	goto Label_3821; // 0xee5 Jump
	
Label_3814:
	var_205_string = "battle"; // 0xee6 PushS
	var_206_bool = var_61_string == var_205_string; // 0xee7 Eq
	if(var_206_bool == 0) goto Label_3821; // 0xee8 JumpB
	var_207_object = Obj(); // 0xee9 PushV
	var_207_object = var_60_object; // 0xeea Mov
	func_4099(var_207_object); // 0xeeb NEW_2
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


func_3295(var_131_int, var_132_string)
{
	var_133_int = 0; var_134_int = 0; // 0xcdf PushV
	GetVariable(var_132_string, var_134_int); // 0xce0 Func
	var_131_int = var_134_int; // 0xce2 Mov
	return 2; // 0xce3 Return
}


func_3300(var_124_int)
{
	var_125_float = 0; var_126_float = 0; // 0xce4 PushV
	GetGameTime(var_126_float); // 0xce5 Func
	var_127_int = 1; // 0xce7 PushI
	var_128_int = 0; // 0xce8 PushV
	var_129_int = 24; // 0xce9 PushI
	var_128_int = var_126_float / var_126_float; // 0xcea Div2
	var_124_int = var_127_int + var_128_int; // 0xceb Add2
	return 2; // 0xcec Return
}


func_2794(var_44_bool)
{
	var_46_bool = 0; var_47_bool = 0; // 0xaea PushV
	IsDead(var_47_bool); // 0xaeb ObjFunc
	var_44_bool = var_47_bool; // 0xaed Mov
	return 2; // 0xaee Return
}


func_3309(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0xcee PushV
	var_265_string = "branch"; // 0xcef MovS
	func_3295(var_264_int, var_265_string); // 0xcf0 NEW_2
	var_266_int = 0; // 0xcf2 PushI
	var_267_bool = var_264_int == var_266_int; // 0xcf3 Eq
	if(var_267_bool == 0) goto Label_3319; // 0xcf4 JumpB
	var_262_bool = 1; // 0xcf5 MovB
	return 0; // 0xcf6 Return
	
Label_3319:
	var_262_bool = 0; // 0xcf7 MovB
	return 0; // 0xcf8 Return
}


func_3822(var_23_bool, var_24_object)
{
	var_25_bool = 0; var_26_bool = 0; // 0xeee PushV
	var_27_bool = 0; // 0xeef PushV
	var_27_bool = 0; // 0xef0 MovB
	var_28_bool = 0; var_29_object = Obj(); // 0xef1 PushV
	var_29_object = var_24_object; // 0xef2 Mov
	func_4056(var_28_bool, var_29_object); // 0xef3 NEW_2
	if(var_28_bool == 0) goto Label_3836; // 0xef5 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0xef6 PushV
	var_33_object = var_24_object; // 0xef7 Mov
	func_2777(var_32_bool, var_33_object); // 0xef8 NEW_2
	if(var_32_bool == 0) goto Label_3836; // 0xefa JumpB
	var_27_bool = 1; // 0xefb MovB
	
Label_3836:
	if(var_27_bool == 0) goto Label_3843; // 0xefc JumpB
	IsWeaponHolstered(var_26_bool); // 0xefd ObjFunc
	var_36_bool = var_26_bool == 0; // 0xeff Not
	if(var_36_bool == 0) goto Label_3843; // 0xf00 JumpB
	var_23_bool = 1; // 0xf01 MovB
	return 2; // 0xf02 Return
	
Label_3843:
	var_23_bool = 0; // 0xf03 MovB
	return 2; // 0xf04 Return
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


func_3321(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0xcfa PushV
	var_132_string = "branch"; // 0xcfb MovS
	func_3295(var_131_int, var_132_string); // 0xcfc NEW_2
	var_135_int = 2; // 0xcfe PushI
	var_136_bool = var_131_int == var_135_int; // 0xcff Eq
	if(var_136_bool == 0) goto Label_3331; // 0xd00 JumpB
	var_129_bool = 1; // 0xd01 MovB
	return 0; // 0xd02 Return
	
Label_3331:
	var_129_bool = 0; // 0xd03 MovB
	return 0; // 0xd04 Return
}


func_1277(var_2_object)
{
	var_23_int = 110; // 0x4fd PushI
	KillTimer(var_23_int); // 0x4fe Func
	var_2_object = 0; // 0x500 TMovB
	func_1413(var_21_cvector, var_22_bool); // 0x502 NEW_2
	return 0; // 0x504 Return
}


func_3333(var_137_bool, var_138_object)
{
	var_139_bool = 0; var_140_object = Obj(); // 0xd06 PushV
	var_140_object = var_138_object; // 0xd07 Mov
	func_3383(var_140_object); // 0xd08 NEW_2
	if(var_139_bool == 0) goto Label_3341; // 0xd0a JumpB
	var_137_bool = 1; // 0xd0b MovB
	return 0; // 0xd0c Return
	
Label_3341:
	var_137_bool = 0; // 0xd0d MovB
	return 0; // 0xd0e Return
}


func_3845(var_39_object)
{
	var_40_object = Obj(); // 0xf06 PushV
	var_40_object = var_39_object; // 0xf07 Mov
	func_4061(var_40_object); // 0xf08 NEW_2
	return 0; // 0xf0a Return
}


func_1285(var_2_object)
{
	var_81_int = 110; // 0x505 PushI
	KillTimer(var_81_int); // 0x506 Func
	var_2_object = 0; // 0x508 TMovB
	func_1420(var_26_bool, var_27_int); // 0x50a NEW_2
	return 0; // 0x50c Return
}


func_3851(var_25_object)
{
	var_26_bool = 0; var_27_object = Obj(); // 0xf0c PushV
	var_27_object = var_25_object; // 0xf0d Mov
	func_2777(var_26_bool, var_27_object); // 0xf0e NEW_2
	if(var_26_bool == 0) goto Label_3863; // 0xf10 JumpB
	var_30_object = Obj(); // 0xf11 PushV
	func_3235(var_30_object); // 0xf12 NEW_2
	var_33_float = -0.05; // 0xf14 PushF
	ReportReputationChange(var_25_object, var_30_object, var_33_float); // 0xf15 Func
	
Label_3863:
	return 0; // 0xf17 Return
}


func_3343(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj(); // 0xd10 PushV
	var_152_object = var_150_object; // 0xd11 Mov
	func_3390(var_152_object); // 0xd12 NEW_2
	if(var_151_bool == 0) goto Label_3351; // 0xd14 JumpB
	var_149_bool = 1; // 0xd15 MovB
	return 0; // 0xd16 Return
	
Label_3351:
	var_149_bool = 0; // 0xd17 MovB
	return 0; // 0xd18 Return
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
	func_3917(var_66_object); // 0x528 NEW_2
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
	func_3926(var_82_object); // 0x536 NEW_2
	var_2_object = 1; // 0x538 TMovB
	var_147_int = 110; // 0x539 PushI
	var_148_float = 10.0; // 0x53a PushF
	SetTimer(var_147_int, var_148_float); // 0x53b Func
	
Label_1341:
	return 4; // 0x53d Return
}


func_3864(var_23_bool, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0xf18 PushV
	var_27_string = "heal"; // 0xf19 PushS
	var_28_bool = var_24_string == var_27_string; // 0xf1a Eq
	if(var_28_bool == 0) goto Label_3878; // 0xf1b JumpB
	var_29_string = "player"; // 0xf1c PushS
	FindActor(var_26_object, var_29_string); // 0xf1d Func
	var_30_bool = 0; var_31_object = Obj(); // 0xf1f PushV
	var_31_object = var_26_object; // 0xf20 Mov
	func_4105(var_31_object); // 0xf21 NEW_2
	var_23_bool = var_30_bool; // 0xf22 Mov
	return 2; // 0xf24 Return
	
Label_3878:
	var_23_bool = 0; // 0xf26 MovB
	return 2; // 0xf27 Return
}


func_3353(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj(); // 0xd1a PushV
	var_159_object = var_157_object; // 0xd1b Mov
	func_3397(var_159_object); // 0xd1c NEW_2
	if(var_158_bool == 0) goto Label_3361; // 0xd1e JumpB
	var_156_bool = 1; // 0xd1f MovB
	return 0; // 0xd20 Return
	
Label_3361:
	var_156_bool = 0; // 0xd21 MovB
	return 0; // 0xd22 Return
}


func_2337(var_2_object)
{
	Stop(); // 0x921 Func
	var_23_int = 120; // 0x923 PushI
	KillTimer(var_23_int); // 0x924 Func
	var_2_object = 1; // 0x926 TMovB
	return 0; // 0x927 Return
}


func_3363(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj(); // 0xd24 PushV
	var_166_object = var_164_object; // 0xd25 Mov
	func_3404(var_166_object); // 0xd26 NEW_2
	if(var_165_bool == 0) goto Label_3371; // 0xd28 JumpB
	var_163_bool = 1; // 0xd29 MovB
	return 0; // 0xd2a Return
	
Label_3371:
	var_163_bool = 0; // 0xd2b MovB
	return 0; // 0xd2c Return
}


func_3880(var_34_string)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0xf28 PushV
	var_37_string = "heal"; // 0xf29 PushS
	var_38_bool = var_34_string == var_37_string; // 0xf2a Eq
	if(var_38_bool == 0) goto Label_3892; // 0xf2b JumpB
	var_39_string = "player"; // 0xf2c PushS
	FindActor(var_36_object, var_39_string); // 0xf2d Func
	var_40_object = Obj(); // 0xf2f PushV
	var_40_object = var_36_object; // 0xf30 Mov
	func_4108(); // 0xf31 NEW_2
	var_36_object = 0; // 0xf33 SetNull
	
Label_3892:
	return 2; // 0xf34 Return
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


func_3373(var_268_bool, var_269_object)
{
	var_270_bool = 0; var_271_object = Obj(); // 0xd2e PushV
	var_271_object = var_269_object; // 0xd2f Mov
	func_3411(var_271_object); // 0xd30 NEW_2
	if(var_270_bool == 0) goto Label_3381; // 0xd32 JumpB
	var_268_bool = 1; // 0xd33 MovB
	return 0; // 0xd34 Return
	
Label_3381:
	var_268_bool = 0; // 0xd35 MovB
	return 0; // 0xd36 Return
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
	func_3251(var_85_float, var_86_cvector, var_87_cvector); // 0x93c NEW_2
	var_93_float = -0.34202; // 0x93e PushF
	var_74_bool = var_85_float >= var_93_float; // 0x93f GE2
	return 4; // 0x940 Return
}


func_3893(var_77_string, var_78_int)
{
	var_79_string = ""; var_80_string = ""; // 0xf35 PushV
	var_80_string = "idle"; // 0xf36 MovS
	var_81_int = var_78_int; // 0xf37 Push
	if(var_81_int == 0) goto Label_3898; // 0xf38 JumpB
	var_80_string = var_80_string + var_78_int; // 0xf39 Add2
	
Label_3898:
	var_77_string = var_80_string; // 0xf3a Mov
	return 2; // 0xf3b Return
}


func_3383(var_139_bool)
{
	var_141_int = 0; // 0xd38 PushV
	func_3300(var_141_int); // 0xd39 NEW_2
	var_147_int = 3; // 0xd3b PushI
	var_139_bool = var_141_int == var_147_int; // 0xd3c Eq2
	return 0; // 0xd3d Return
}


func_3900(var_71_int)
{
	var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; // 0xf3c PushV
	var_74_int = 0; // 0xf3d MovI
	
Label_3902:
	var_76_string = "all"; // 0xf3e PushS
	var_77_string = ""; var_78_int = 0; // 0xf3f PushV
	var_78_int = var_74_int; // 0xf40 Mov
	func_3893(var_77_string, var_78_int); // 0xf41 NEW_2
	HasAnimation(var_75_bool, var_76_string, var_77_string); // 0xf43 Func
	var_82_bool = var_75_bool == 0; // 0xf45 Not
	if(var_82_bool == 0) goto Label_3912; // 0xf46 JumpB
	goto Label_3915; // 0xf47 Jump
	
Label_3915:
	var_71_int = var_74_int; // 0xf4b Mov
	return 4; // 0xf4c Return
	
Label_3912:
	var_83_int = 1; // 0xf48 PushI
	var_74_int = var_74_int + var_83_int; // 0xf49 Add2
	goto Label_3902; // 0xf4a Jump
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


func_3390(var_151_bool)
{
	var_153_int = 0; // 0xd3f PushV
	func_3300(var_153_int); // 0xd40 NEW_2
	var_154_int = 4; // 0xd42 PushI
	var_151_bool = var_153_int == var_154_int; // 0xd43 Eq2
	return 0; // 0xd44 Return
}


func_3397(var_158_bool)
{
	var_160_int = 0; // 0xd46 PushV
	func_3300(var_160_int); // 0xd47 NEW_2
	var_161_int = 5; // 0xd49 PushI
	var_158_bool = var_160_int == var_161_int; // 0xd4a Eq2
	return 0; // 0xd4b Return
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
	func_3241(var_52_cvector, var_53_cvector); // 0x952 NEW_2
	var_59_float = 0.75; // 0x954 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x955 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x956 Add2
	func_3241(var_50_cvector, var_51_cvector); // 0x957 NEW_2
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


func_3404(var_165_bool)
{
	var_167_int = 0; // 0xd4d PushV
	func_3300(var_167_int); // 0xd4e NEW_2
	var_168_int = 6; // 0xd50 PushI
	var_165_bool = var_167_int == var_168_int; // 0xd51 Eq2
	return 0; // 0xd52 Return
}


func_3917(var_65_int)
{
	var_67_bool = 0; // 0xf4e PushV
	func_4164(var_67_bool); // 0xf4f NEW_2
	if(var_67_bool == 0) goto Label_3924; // 0xf51 JumpB
	var_65_int = 2; // 0xf52 MovI
	goto Label_3925; // 0xf53 Jump
	
Label_3925:
	return 0; // 0xf55 Return
	
Label_3924:
	var_65_int = 0; // 0xf54 MovI
}


func_3411(var_270_bool)
{
	var_272_int = 0; // 0xd54 PushV
	func_3300(var_272_int); // 0xd55 NEW_2
	var_273_int = 7; // 0xd57 PushI
	var_270_bool = var_272_int == var_273_int; // 0xd58 Eq2
	return 0; // 0xd59 Return
}


func_3926(var_82_object)
{
	var_83_object = Obj(); // 0xf57 PushV
	var_83_object = var_82_object; // 0xf58 Mov
	TaskCall(6); // 0xf59 TaskCall
	func_1685(var_84_object, var_83_object); // 0xf5a NEW_2
	TaskReturn(); // 0xf5b TaskReturn
	return 0; // 0xf5d Return
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
	func_3241(var_54_cvector, var_55_cvector); // 0xb6e NEW_2
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


func_3418(var_109_int)
{
	var_110_int = 0; var_111_int = 0; // 0xd5a PushV
	var_112_string = "branch"; // 0xd5b PushS
	GetVariable(var_112_string, var_111_int); // 0xd5c Func
	var_113_int = 0; // 0xd5e PushI
	var_114_bool = var_111_int == var_113_int; // 0xd5f Eq
	if(var_114_bool == 0) goto Label_3428; // 0xd60 JumpB
	var_109_int = 1; // 0xd61 MovI
	return 2; // 0xd62 Return
	
Label_3428:
	var_115_int = 1; // 0xd64 PushI
	var_116_bool = var_111_int == var_115_int; // 0xd65 Eq
	if(var_116_bool == 0) goto Label_3433; // 0xd66 JumpB
	var_109_int = 2; // 0xd67 MovI
	return 2; // 0xd68 Return
	
Label_3433:
	var_109_int = 3; // 0xd69 MovI
	return 2; // 0xd6a Return
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


func_3934(var_34_int, var_35_object)
{
	var_36_bool = 0; var_37_object = Obj(); // 0xf5f PushV
	var_37_object = var_35_object; // 0xf60 Mov
	func_2835(var_36_bool, var_37_object); // 0xf61 NEW_2
	if(var_36_bool == 0) goto Label_3942; // 0xf63 JumpB
	var_34_int = 2; // 0xf64 MovI
	goto Label_3943; // 0xf65 Jump
	
Label_3943:
	return 0; // 0xf67 Return
	
Label_3942:
	var_34_int = 0; // 0xf66 MovI
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


func_3944(var_76_object)
{
	var_77_object = Obj(); // 0xf69 PushV
	var_77_object = var_76_object; // 0xf6a Mov
	TaskCall(7); // 0xf6b TaskCall
	func_1960(var_77_object); // 0xf6c NEW_2
	TaskReturn(); // 0xf6d TaskReturn
	return 0; // 0xf6f Return
}


func_3435(var_229_int)
{
	var_230_int = 0; var_231_int = 0; // 0xd6b PushV
	var_232_string = "branch"; // 0xd6c PushS
	GetVariable(var_232_string, var_231_int); // 0xd6d Func
	var_229_int = var_231_int; // 0xd6f Mov
	return 2; // 0xd70 Return
}


func_366(var_2_object, var_170_string)
{
	var_171_bool = 0; // 0x16f PushV
	func_4118(var_171_bool); // 0x170 NEW_2
	var_172_bool = var_171_bool == 0; // 0x172 Not
	if(var_172_bool == 0) goto Label_373; // 0x173 JumpB
	return 0; // 0x174 Return
	
Label_373:
	var_173_bool = var_170_string == var_2_object; // 0x175 Eq
	if(var_173_bool == 0) goto Label_376; // 0x176 JumpB
	return 0; // 0x177 Return
	
Label_376:
	var_174_string = ""; var_175_bool = 0; // 0x178 PushV
	var_174_string = var_170_string; // 0x179 Mov
	var_176_string = ""; // 0x17a PushS
	var_177_bool = var_170_string == var_176_string; // 0x17b Eq
	if(var_177_bool == 0) goto Label_383; // 0x17c JumpB
	var_175_bool = 0; // 0x17d MovB
	goto Label_384; // 0x17e Jump
	
Label_384:
	func_3161(var_174_string, var_175_bool); // 0x180 NEW_2
	var_2_object = var_170_string; // 0x182 TMov
	return 0; // 0x183 Return
	
Label_383:
	var_175_bool = 1; // 0x17f MovB
}


func_3952(var_74_int, var_75_object)
{
	var_77_bool = 0; var_78_object = Obj(); // 0xf71 PushV
	var_78_object = var_75_object; // 0xf72 Mov
	func_2835(var_77_bool, var_78_object); // 0xf73 NEW_2
	if(var_77_bool == 0) goto Label_3960; // 0xf75 JumpB
	var_74_int = 2; // 0xf76 MovI
	goto Label_3961; // 0xf77 Jump
	
Label_3961:
	return 0; // 0xf79 Return
	
Label_3960:
	var_74_int = 0; // 0xf78 MovI
}


func_3441(var_68_float)
{
	var_69_object = Obj(); var_70_float = 0; var_71_object = Obj(); var_72_float = 0; // 0xd71 PushV
	var_73_string = "player"; // 0xd72 PushS
	FindActor(var_71_object, var_73_string); // 0xd73 Func
	var_74_bool = var_71_object == 0; // 0xd75 Not
	if(var_74_bool == 0) goto Label_3449; // 0xd76 JumpB
	var_68_float = 0; // 0xd77 MovI
	return 4; // 0xd78 Return
	
Label_3449:
	var_75_string = "reputation"; // 0xd79 PushS
	GetProperty(var_75_string, var_72_float); // 0xd7a ObjFunc
	var_68_float = var_72_float; // 0xd7c Mov
	return 4; // 0xd7d Return
}


func_1401(var_43_float)
{
	var_44_float = 0; var_45_float = 0; // 0x579 PushV
	GetCameraFarDistance(var_45_float); // 0x57a Func
	var_43_float = var_45_float; // 0x57c Mov
	return 2; // 0x57d Return
}


func_3962(var_111_object)
{
	var_112_object = Obj(); // 0xf7b PushV
	var_112_object = var_111_object; // 0xf7c Mov
	TaskCall(8); // 0xf7d TaskCall
	func_2212(var_113_object, var_114_cvector, var_115_bool, var_112_object); // 0xf7e NEW_2
	TaskReturn(); // 0xf7f TaskReturn
	return 0; // 0xf81 Return
}


func_3455(var_39_object)
{
	var_40_int = 0; // 0xd80 PushV
	func_3435(var_40_int); // 0xd81 NEW_2
	var_44_int = 1; // 0xd83 PushI
	var_45_bool = var_40_int == var_44_int; // 0xd84 Eq
	if(var_45_bool == 0) goto Label_3465; // 0xd85 JumpB
	WorkWithCorpse(var_39_object); // 0xd86 Func
	goto Label_3467; // 0xd88 Jump
	
Label_3467:
	return 0; // 0xd8b Return
	
Label_3465:
	Barter(var_39_object); // 0xd89 Func
}


func_3970(var_31_bool, var_32_object, var_33_object, var_34_float)
{
	var_35_string = ""; var_36_bool = 0; var_37_string = ""; var_38_bool = 0; // 0xf82 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0xf83 PushV
	var_40_object = var_33_object; // 0xf84 Mov
	var_41_string = "class"; // 0xf85 MovS
	func_2782(var_39_bool, var_40_object, var_41_string); // 0xf86 NEW_2
	var_48_bool = var_39_bool == 0; // 0xf88 Not
	if(var_48_bool == 0) goto Label_3980; // 0xf89 JumpB
	var_31_bool = 0; // 0xf8a MovB
	return 4; // 0xf8b Return
	
Label_3980:
	var_49_string = "class"; // 0xf8c PushS
	GetProperty(var_49_string, var_37_string); // 0xf8d ObjFunc
	var_50_string = "rat"; // 0xf8f PushS
	var_51_bool = var_37_string == var_50_string; // 0xf90 Eq
	if(var_51_bool == 0) goto Label_3989; // 0xf91 JumpB
	var_31_bool = 0; // 0xf92 MovB
	return 4; // 0xf93 Return
	
Label_3989:
	var_52_string = "rat_big"; // 0xf95 PushS
	var_53_bool = var_37_string == var_52_string; // 0xf96 Eq
	if(var_53_bool == 0) goto Label_3995; // 0xf97 JumpB
	var_31_bool = 0; // 0xf98 MovB
	return 4; // 0xf99 Return
	
Label_3995:
	var_54_string = "dog"; // 0xf9b PushS
	var_55_bool = var_37_string == var_54_string; // 0xf9c Eq
	if(var_55_bool == 0) goto Label_4000; // 0xf9d JumpB
	var_31_bool = 0; // 0xf9e MovB
	return 4; // 0xf9f Return
	
Label_4000:
	CanSee(var_38_bool, var_32_object); // 0xfa0 Func
	var_56_bool = 0; // 0xfa2 PushV
	var_56_bool = 1; // 0xfa3 MovB
	var_57_bool = var_38_bool; // 0xfa4 Push
	if(var_57_bool == 0) goto Label_4014; // 0xfa5 JumpB
	var_58_float = 0; var_59_object = Obj(); // 0xfa6 PushV
	var_59_object = var_32_object; // 0xfa7 Mov
	func_2769(var_59_object); // 0xfa8 NEW_2
	var_66_float = var_34_float * var_34_float; // 0xfaa Mult
	var_67_bool = var_58_float <= var_66_float; // 0xfab LE
	if(var_67_bool == 0) goto Label_4014; // 0xfac JumpB
	var_56_bool = 0; // 0xfad MovB
	
Label_4014:
	if(var_56_bool == 0) goto Label_4017; // 0xfae JumpB
	var_31_bool = 1; // 0xfaf MovB
	return 4; // 0xfb0 Return
	
Label_4017:
	CanSee(var_38_bool, var_33_object); // 0xfb1 Func
	var_68_bool = 0; // 0xfb3 PushV
	var_68_bool = 1; // 0xfb4 MovB
	var_69_bool = var_38_bool; // 0xfb5 Push
	if(var_69_bool == 0) goto Label_4031; // 0xfb6 JumpB
	var_70_float = 0; var_71_object = Obj(); // 0xfb7 PushV
	var_71_object = var_33_object; // 0xfb8 Mov
	func_2769(var_71_object); // 0xfb9 NEW_2
	var_72_float = var_34_float * var_34_float; // 0xfbb Mult
	var_73_bool = var_70_float <= var_72_float; // 0xfbc LE
	if(var_73_bool == 0) goto Label_4031; // 0xfbd JumpB
	var_68_bool = 0; // 0xfbe MovB
	
Label_4031:
	if(var_68_bool == 0) goto Label_4034; // 0xfbf JumpB
	var_31_bool = 1; // 0xfc0 MovB
	return 4; // 0xfc1 Return
	
Label_4034:
	var_31_bool = 0; // 0xfc2 MovB
	return 4; // 0xfc3 Return
}


func_1413(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x585 TMovB
	var_1_object = 0; // 0x586 TMovB
	Stop(); // 0x587 Func
	StopGroup0(); // 0x589 Func
	return 0; // 0x58b Return
}


func_1420(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x58c TMovB
	var_1_object = 1; // 0x58d TMovB
	Stop(); // 0x58e Func
	StopGroup0(); // 0x590 Func
	return 0; // 0x592 Return
}


func_3468(var_121_int, var_122_int)
{
	var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0; // 0xd8c PushV
	var_136_bool = var_121_int > var_122_int; // 0xd8d GT
	if(var_136_bool == 0) goto Label_3475; // 0xd8e JumpB
	var_137_string = "GenerateMoney: iMin > iMax"; // 0xd8f PushS
	Trace(var_137_string); // 0xd90 Func
	return 4; // 0xd92 Return
	
Label_3475:
	var_134_int = 0; // 0xd93 MovI
	var_138_bool = var_121_int != var_122_int; // 0xd94 Neq
	if(var_138_bool == 0) goto Label_3482; // 0xd95 JumpB
	var_139_int = var_122_int - var_121_int; // 0xd96 Sub
	irand(var_134_int, var_139_int); // 0xd97 Func
	goto Label_3486; // 0xd99 Jump
	
Label_3486:
	var_134_int = var_134_int + var_121_int; // 0xd9e Add2
	var_140_int = 0; // 0xd9f PushI
	var_141_bool = var_134_int == var_140_int; // 0xda0 Eq
	if(var_141_bool == 0) goto Label_3491; // 0xda1 JumpB
	return 4; // 0xda2 Return
	
Label_3491:
	var_142_int = 0; var_143_string = ""; // 0xda3 PushV
	var_143_string = "Money"; // 0xda4 MovS
	func_3715(var_142_int, var_143_string); // 0xda5 NEW_2
	var_146_int = 0; // 0xda7 PushI
	AddItem(var_135_bool, var_142_int, var_146_int, var_134_int); // 0xda8 Func
	return 4; // 0xdaa Return
	
Label_3482:
	var_147_int = 0; // 0xd9a PushI
	var_148_bool = var_121_int == var_147_int; // 0xd9b Eq
	if(var_148_bool == 0) goto Label_3486; // 0xd9c JumpB
	return 4; // 0xd9d Return
}


func_910(var_24_object)
{
	EventDisable(0); // 0x38f EventDisable
	var_25_object = Obj(); // 0x390 PushV
	var_25_object = var_24_object; // 0x391 Mov
	func_943(var_25_object); // 0x392 NEW_2
	var_105_object = Obj(); // 0x394 PushV
	var_105_object = var_24_object; // 0x395 Mov
	func_4179(var_105_object); // 0x396 NEW_2
	EventEnable(0); // 0x398 EventEnable
	
Label_921:
	Hold(); // 0x399 Func
	goto Label_921; // 0x39b Jump
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


func_3499(var_235_string)
{
	var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; var_239_object = Obj(); var_240_int = 0; var_241_bool = 0; // 0xdab PushV
	CreateInvItem(var_239_object); // 0xdac Func
	SetItemName(var_235_string); // 0xdae ObjFunc
	var_242_string = "Organ"; // 0xdb0 PushS
	var_243_int = 1; // 0xdb1 PushI
	SetProperty(var_242_string, var_243_int); // 0xdb2 ObjFunc
	GetItemID(var_240_int); // 0xdb4 ObjFunc
	var_244_int = 0; // 0xdb6 PushI
	var_245_int = 1; // 0xdb7 PushI
	AddItem(var_241_bool, var_239_object, var_244_int, var_245_int); // 0xdb8 Func
	return 6; // 0xdba Return
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
	func_3194(var_100_string); // 0x3f5 NEW_2
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
	func_3241(var_85_cvector, var_86_cvector); // 0xbd4 NEW_2
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
	CameraTransit(var_76_cvector, var_74_cvector); // 0xbe4 Func
	var_98_float = GetByIndex(var_75_cvector, 0); // 0xbe6 PushE
	var_99_float = GetByIndex(var_75_cvector, 2); // 0xbe7 PushE
	Rotate(var_98_float, var_99_float); // 0xbe8 Func
	var_100_bool = 0; // 0xbea PushV
	func_4118(var_100_bool); // 0xbeb NEW_2
	if(var_100_bool == 0) goto Label_3055; // 0xbed JumpB
	goto Label_3063; // 0xbee Jump
	
Label_3063:
	CameraWaitForPlayFinish(); // 0xbf7 Func
	ResumeWorld(); // 0xbf9 Func
	var_58_bool = 1; // 0xbfb MovB
	return 18; // 0xbfc Return
	
Label_3055:
	var_101_string = "head"; // 0xbef PushS
	HasAnimationTrack(var_78_bool, var_101_string); // 0xbf0 Func
	var_102_bool = var_78_bool; // 0xbf2 Push
	if(var_102_bool == 0) goto Label_3063; // 0xbf3 JumpB
	var_103_string = "head"; // 0xbf4 PushS
	LookAsyncCamera(var_103_string); // 0xbf5 Func
}


func_3516()
{
	var_229_int = 0; // 0xdbc PushV
	func_3435(var_229_int); // 0xdbd NEW_2
	var_233_int = 1; // 0xdbf PushI
	var_234_bool = var_229_int != var_233_int; // 0xdc0 Neq
	if(var_234_bool == 0) goto Label_3523; // 0xdc1 JumpB
	return 0; // 0xdc2 Return
	
Label_3523:
	var_235_string = ""; // 0xdc3 PushV
	var_235_string = "liver"; // 0xdc4 MovS
	func_3499(var_235_string); // 0xdc5 NEW_2
	var_246_string = ""; // 0xdc7 PushV
	var_246_string = "kidney"; // 0xdc8 MovS
	func_3499(var_246_string); // 0xdc9 NEW_2
	var_247_string = ""; // 0xdcb PushV
	var_247_string = "heart"; // 0xdcc MovS
	func_3499(var_247_string); // 0xdcd NEW_2
	var_248_string = ""; // 0xdcf PushV
	var_248_string = "blood"; // 0xdd0 MovS
	func_3499(var_248_string); // 0xdd1 NEW_2
	return 0; // 0xdd3 Return
}


func_4036(var_25_int)
{
	var_25_int = 0; // 0xfc5 MovI
	return 0; // 0xfc6 Return
}


func_4039()
{
	return 0; // 0xfc8 Return
}


func_4041(var_209_int)
{
	var_209_int = 0; // 0xfca MovI
	return 0; // 0xfcb Return
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
	func_3241(var_52_cvector, var_53_cvector); // 0x7d5 NEW_2
	var_59_float = 0.75; // 0x7d7 PushF
	var_60_float = var_46_cvector * var_59_float; // 0x7d8 Mult
	var_51_cvector = var_52_cvector + var_60_float; // 0x7d9 Add2
	func_3241(var_50_cvector, var_51_cvector); // 0x7da NEW_2
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


func_4044()
{
	return 0; // 0xfcd Return
}


func_4046(var_25_int)
{
	var_25_int = 2; // 0xfcf MovI
	return 0; // 0xfd0 Return
}


func_4049(var_33_object)
{
	var_34_object = Obj(); // 0xfd2 PushV
	var_34_object = var_33_object; // 0xfd3 Mov
	func_4124(var_33_object, var_34_object); // 0xfd4 NEW_2
	return 0; // 0xfd6 Return
}


func_3540(var_115_bool)
{
	var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_bool = 0; // 0xdd4 PushV
	var_120_bool = var_115_bool; // 0xdd5 Push
	if(var_120_bool == 0) goto Label_3629; // 0xdd6 JumpB
	var_121_int = 0; var_122_int = 0; // 0xdd7 PushV
	var_121_int = 0; // 0xdd8 MovI
	var_123_int = 100; // 0xdd9 PushI
	var_124_int = 0; // 0xdda PushV
	func_3300(var_124_int); // 0xddb NEW_2
	var_130_int = 100; // 0xddd PushI
	var_131_float = var_124_int * var_130_int; // 0xdde Mult
	var_122_int = var_123_int + var_131_float; // 0xddf Add2
	func_3468(var_121_int, var_122_int); // 0xde0 NEW_2
	var_149_int = 8; // 0xde2 PushI
	irand(var_118_int, var_149_int); // 0xde3 Func
	var_150_int = 0; // 0xde5 PushI
	var_151_bool = var_118_int == var_150_int; // 0xde6 Eq
	if(var_151_bool == 0) goto Label_3569; // 0xde7 JumpB
	var_152_int = 0; var_153_string = ""; // 0xde8 PushV
	var_153_string = "lemon"; // 0xde9 MovS
	func_3715(var_152_int, var_153_string); // 0xdea NEW_2
	var_154_int = 0; // 0xdec PushI
	var_155_int = 1; // 0xded PushI
	AddItem(var_119_bool, var_152_int, var_154_int, var_155_int); // 0xdee Func
	goto Label_3628; // 0xdf0 Jump
	
Label_3628:
	goto Label_3714; // 0xe2c Jump
	
Label_3714:
	return 4; // 0xe82 Return
	
Label_3569:
	var_156_int = 1; // 0xdf1 PushI
	var_157_bool = var_118_int == var_156_int; // 0xdf2 Eq
	if(var_157_bool == 0) goto Label_3581; // 0xdf3 JumpB
	var_158_int = 0; var_159_string = ""; // 0xdf4 PushV
	var_159_string = "rusk"; // 0xdf5 MovS
	func_3715(var_158_int, var_159_string); // 0xdf6 NEW_2
	var_160_int = 0; // 0xdf8 PushI
	var_161_int = 1; // 0xdf9 PushI
	AddItem(var_119_bool, var_158_int, var_160_int, var_161_int); // 0xdfa Func
	goto Label_3628; // 0xdfc Jump
	
Label_3581:
	var_162_int = 2; // 0xdfd PushI
	var_163_bool = var_118_int == var_162_int; // 0xdfe Eq
	if(var_163_bool == 0) goto Label_3593; // 0xdff JumpB
	var_164_int = 0; var_165_string = ""; // 0xe00 PushV
	var_165_string = "hook"; // 0xe01 MovS
	func_3715(var_164_int, var_165_string); // 0xe02 NEW_2
	var_166_int = 0; // 0xe04 PushI
	var_167_int = 1; // 0xe05 PushI
	AddItem(var_119_bool, var_164_int, var_166_int, var_167_int); // 0xe06 Func
	goto Label_3628; // 0xe08 Jump
	
Label_3593:
	var_168_int = 4; // 0xe09 PushI
	var_169_bool = var_118_int == var_168_int; // 0xe0a Eq
	if(var_169_bool == 0) goto Label_3605; // 0xe0b JumpB
	var_170_int = 0; var_171_string = ""; // 0xe0c PushV
	var_171_string = "syringe"; // 0xe0d MovS
	func_3715(var_170_int, var_171_string); // 0xe0e NEW_2
	var_172_int = 0; // 0xe10 PushI
	var_173_int = 1; // 0xe11 PushI
	AddItem(var_119_bool, var_170_int, var_172_int, var_173_int); // 0xe12 Func
	goto Label_3628; // 0xe14 Jump
	
Label_3605:
	var_174_int = 5; // 0xe15 PushI
	var_175_bool = var_118_int == var_174_int; // 0xe16 Eq
	if(var_175_bool == 0) goto Label_3617; // 0xe17 JumpB
	var_176_int = 0; var_177_string = ""; // 0xe18 PushV
	var_177_string = "watch"; // 0xe19 MovS
	func_3715(var_176_int, var_177_string); // 0xe1a NEW_2
	var_178_int = 0; // 0xe1c PushI
	var_179_int = 1; // 0xe1d PushI
	AddItem(var_119_bool, var_176_int, var_178_int, var_179_int); // 0xe1e Func
	goto Label_3628; // 0xe20 Jump
	
Label_3617:
	var_180_int = 6; // 0xe21 PushI
	var_181_bool = var_118_int == var_180_int; // 0xe22 Eq
	if(var_181_bool == 0) goto Label_3628; // 0xe23 JumpB
	var_182_int = 0; var_183_string = ""; // 0xe24 PushV
	var_183_string = "razor"; // 0xe25 MovS
	func_3715(var_182_int, var_183_string); // 0xe26 NEW_2
	var_184_int = 0; // 0xe28 PushI
	var_185_int = 1; // 0xe29 PushI
	AddItem(var_119_bool, var_182_int, var_184_int, var_185_int); // 0xe2a Func
	
Label_3629:
	var_186_int = 0; var_187_int = 0; // 0xe2d PushV
	var_186_int = 0; // 0xe2e MovI
	var_188_int = 50; // 0xe2f PushI
	var_189_int = 0; // 0xe30 PushV
	func_3300(var_189_int); // 0xe31 NEW_2
	var_190_int = 50; // 0xe33 PushI
	var_191_float = var_189_int * var_190_int; // 0xe34 Mult
	var_187_int = var_188_int + var_191_float; // 0xe35 Add2
	func_3468(var_186_int, var_187_int); // 0xe36 NEW_2
	var_192_int = 7; // 0xe38 PushI
	irand(var_118_int, var_192_int); // 0xe39 Func
	var_193_int = 0; // 0xe3b PushI
	var_194_bool = var_118_int == var_193_int; // 0xe3c Eq
	if(var_194_bool == 0) goto Label_3655; // 0xe3d JumpB
	var_195_int = 0; var_196_string = ""; // 0xe3e PushV
	var_196_string = "beads"; // 0xe3f MovS
	func_3715(var_195_int, var_196_string); // 0xe40 NEW_2
	var_197_int = 0; // 0xe42 PushI
	var_198_int = 1; // 0xe43 PushI
	AddItem(var_119_bool, var_195_int, var_197_int, var_198_int); // 0xe44 Func
	goto Label_3714; // 0xe46 Jump
	
Label_3655:
	var_199_int = 1; // 0xe47 PushI
	var_200_bool = var_118_int == var_199_int; // 0xe48 Eq
	if(var_200_bool == 0) goto Label_3667; // 0xe49 JumpB
	var_201_int = 0; var_202_string = ""; // 0xe4a PushV
	var_202_string = "bracelet"; // 0xe4b MovS
	func_3715(var_201_int, var_202_string); // 0xe4c NEW_2
	var_203_int = 0; // 0xe4e PushI
	var_204_int = 1; // 0xe4f PushI
	AddItem(var_119_bool, var_201_int, var_203_int, var_204_int); // 0xe50 Func
	goto Label_3714; // 0xe52 Jump
	
Label_3667:
	var_205_int = 2; // 0xe53 PushI
	var_206_bool = var_118_int == var_205_int; // 0xe54 Eq
	if(var_206_bool == 0) goto Label_3679; // 0xe55 JumpB
	var_207_int = 0; var_208_string = ""; // 0xe56 PushV
	var_208_string = "ear_ring"; // 0xe57 MovS
	func_3715(var_207_int, var_208_string); // 0xe58 NEW_2
	var_209_int = 0; // 0xe5a PushI
	var_210_int = 1; // 0xe5b PushI
	AddItem(var_119_bool, var_207_int, var_209_int, var_210_int); // 0xe5c Func
	goto Label_3714; // 0xe5e Jump
	
Label_3679:
	var_211_int = 3; // 0xe5f PushI
	var_212_bool = var_118_int == var_211_int; // 0xe60 Eq
	if(var_212_bool == 0) goto Label_3691; // 0xe61 JumpB
	var_213_int = 0; var_214_string = ""; // 0xe62 PushV
	var_214_string = "gold_ring"; // 0xe63 MovS
	func_3715(var_213_int, var_214_string); // 0xe64 NEW_2
	var_215_int = 0; // 0xe66 PushI
	var_216_int = 1; // 0xe67 PushI
	AddItem(var_119_bool, var_213_int, var_215_int, var_216_int); // 0xe68 Func
	goto Label_3714; // 0xe6a Jump
	
Label_3691:
	var_217_int = 4; // 0xe6b PushI
	var_218_bool = var_118_int == var_217_int; // 0xe6c Eq
	if(var_218_bool == 0) goto Label_3703; // 0xe6d JumpB
	var_219_int = 0; var_220_string = ""; // 0xe6e PushV
	var_220_string = "silver_ring"; // 0xe6f MovS
	func_3715(var_219_int, var_220_string); // 0xe70 NEW_2
	var_221_int = 0; // 0xe72 PushI
	var_222_int = 1; // 0xe73 PushI
	AddItem(var_119_bool, var_219_int, var_221_int, var_222_int); // 0xe74 Func
	goto Label_3714; // 0xe76 Jump
	
Label_3703:
	var_223_int = 5; // 0xe77 PushI
	var_224_bool = var_118_int == var_223_int; // 0xe78 Eq
	if(var_224_bool == 0) goto Label_3714; // 0xe79 JumpB
	var_225_int = 0; var_226_string = ""; // 0xe7a PushV
	var_226_string = "flower"; // 0xe7b MovS
	func_3715(var_225_int, var_226_string); // 0xe7c NEW_2
	var_227_int = 0; // 0xe7e PushI
	var_228_int = 1; // 0xe7f PushI
	AddItem(var_119_bool, var_225_int, var_227_int, var_228_int); // 0xe80 Func
}


func_4055()
{
	return 0; // 0xfd7 Return
}


func_4056(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0xfd8 PushV
	CanSee(var_31_bool, var_29_object); // 0xfd9 Func
	var_28_bool = var_31_bool; // 0xfdb Mov
	return 2; // 0xfdc Return
}


func_4061(var_40_object)
{
	var_41_object = Obj(); // 0xfde PushV
	var_41_object = var_40_object; // 0xfdf Mov
	TaskCall(9); // 0xfe0 TaskCall
	func_2406(var_42_object, var_43_cvector, var_44_bool, var_41_object); // 0xfe1 NEW_2
	TaskReturn(); // 0xfe2 TaskReturn
	return 0; // 0xfe4 Return
}


func_2531(var_2_object)
{
	Stop(); // 0x9e3 Func
	var_23_int = 120; // 0x9e5 PushI
	KillTimer(var_23_int); // 0x9e6 Func
	var_2_object = 1; // 0x9e8 TMovB
	return 0; // 0x9e9 Return
}


func_4069(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; // 0xfe5 PushV
	CanSee(var_40_bool, var_38_object); // 0xfe6 Func
	var_37_bool = 1; // 0xfe8 MovB
	var_41_bool = var_40_bool; // 0xfe9 Push
	if(var_41_bool == 0) goto Label_4083; // 0xfea JumpB
	var_42_float = 0; var_43_object = Obj(); // 0xfeb PushV
	var_43_object = var_38_object; // 0xfec Mov
	func_2769(var_43_object); // 0xfed NEW_2
	var_50_int = 4000000; // 0xfef PushI
	var_51_bool = var_42_float <= var_50_int; // 0xff0 LE
	if(var_51_bool == 0) goto Label_4083; // 0xff1 JumpB
	var_37_bool = 0; // 0xff2 MovB
	
Label_4083:
	return 2; // 0xff3 Return
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
	func_3251(var_85_float, var_86_cvector, var_87_cvector); // 0x9fe NEW_2
	var_93_float = -0.34202; // 0xa00 PushF
	var_74_bool = var_85_float >= var_93_float; // 0xa01 GE2
	return 4; // 0xa02 Return
}


func_4084(var_139_object)
{
	var_140_object = Obj(); // 0xff5 PushV
	var_140_object = var_139_object; // 0xff6 Mov
	TaskCall(10); // 0xff7 TaskCall
	func_2600(var_141_object, var_142_cvector, var_143_bool, var_140_object); // 0xff8 NEW_2
	TaskReturn(); // 0xff9 TaskReturn
	return 0; // 0xffb Return
}


func_4092(var_54_bool, var_55_object)
{
	var_56_bool = 0; var_57_object = Obj(); // 0xffd PushV
	var_57_object = var_55_object; // 0xffe Mov
	func_4069(var_56_bool, var_57_object); // 0xfff NEW_2
	var_54_bool = var_56_bool; // 0x1000 Mov
	return 0; // 0x1002 Return
}


func_3069()
{
	var_282_bool = 0; var_283_bool = 0; // 0xbfd PushV
	CameraSwitchToNormal(); // 0xbfe Func
	var_284_bool = 0; // 0xc00 PushV
	func_4118(var_284_bool); // 0xc01 NEW_2
	if(var_284_bool == 0) goto Label_3077; // 0xc03 JumpB
	goto Label_3085; // 0xc04 Jump
	
Label_3085:
	return 2; // 0xc0d Return
	
Label_3077:
	var_285_string = "head"; // 0xc05 PushS
	HasAnimationTrack(var_283_bool, var_285_string); // 0xc06 Func
	var_286_bool = var_283_bool; // 0xc08 Push
	if(var_286_bool == 0) goto Label_3085; // 0xc09 JumpB
	var_287_string = "head"; // 0xc0a PushS
	UnlookAsync(var_287_string); // 0xc0b Func
}


