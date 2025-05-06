task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xd0 PushI
	if(var_8_int == 0) goto Label_564; // 0xd1 JumpB
	func_896(); // 0xd3 NEW_2
	var_10_int = 37241; // 0xd5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd6 Eq
	if(var_11_bool == 0) goto Label_231; // 0xd7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd8 PushV
	var_12_object = var_1_object; // 0xd9 MovT
	var_13_object = var_0_object; // 0xda MovT
	func_956(); // 0xdb NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xdd PushV
	var_16_object = var_1_object; // 0xde MovT
	var_17_object = var_0_object; // 0xdf MovT
	func_986(); // 0xe0 NEW_2
	var_41_object = Obj(); var_42_object = Obj(); // 0xe2 PushV
	var_41_object = var_1_object; // 0xe3 MovT
	var_42_object = var_0_object; // 0xe4 MovT
	func_968(); // 0xe5 NEW_2
	
Label_231:
	var_53_int = 37236; // 0xe7 PushI
	var_54_bool = var_7_bool == var_53_int; // 0xe8 Eq
	if(var_54_bool == 0) goto Label_249; // 0xe9 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xea PushV
	var_55_object = var_1_object; // 0xeb MovT
	var_56_object = var_0_object; // 0xec MovT
	func_950(); // 0xed NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xef PushV
	var_59_object = var_1_object; // 0xf0 MovT
	var_60_object = var_0_object; // 0xf1 MovT
	func_996(); // 0xf2 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0xf4 PushV
	var_69_object = var_1_object; // 0xf5 MovT
	var_70_object = var_0_object; // 0xf6 MovT
	func_968(); // 0xf7 NEW_2
	
Label_249:
	var_71_int = 37246; // 0xf9 PushI
	var_72_bool = var_7_bool == var_71_int; // 0xfa Eq
	if(var_72_bool == 0) goto Label_267; // 0xfb JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xfc PushV
	var_73_object = var_1_object; // 0xfd MovT
	var_74_object = var_0_object; // 0xfe MovT
	func_962(); // 0xff NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x101 PushV
	var_77_object = var_1_object; // 0x102 MovT
	var_78_object = var_0_object; // 0x103 MovT
	func_991(); // 0x104 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x106 PushV
	var_87_object = var_1_object; // 0x107 MovT
	var_88_object = var_0_object; // 0x108 MovT
	func_968(); // 0x109 NEW_2
	
Label_267:
	var_89_int = 42258; // 0x10b PushI
	var_90_bool = var_7_bool == var_89_int; // 0x10c Eq
	if(var_90_bool == 0) goto Label_285; // 0x10d JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x10e PushV
	var_91_object = var_1_object; // 0x10f MovT
	var_92_object = var_0_object; // 0x110 MovT
	func_975(); // 0x111 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x113 PushV
	var_95_object = var_1_object; // 0x114 MovT
	var_96_object = var_0_object; // 0x115 MovT
	func_968(); // 0x116 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x118 PushV
	var_97_object = var_1_object; // 0x119 MovT
	var_98_object = var_0_object; // 0x11a MovT
	func_981(); // 0x11b NEW_2
	
Label_285:
	var_107_int = 37224; // 0x11d PushI
	var_108_bool = var_6_int == var_107_int; // 0x11e Eq
	if(var_108_bool == 0) goto Label_354; // 0x11f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x120 PushV
	var_110_object = var_1_object; // 0x121 MovT
	func_1001(var_110_object); // 0x122 NEW_2
	var_117_bool = var_109_bool == 0; // 0x124 Not
	if(var_117_bool == 0) goto Label_339; // 0x125 JumpB
	var_118_string = ""; // 0x126 PushV
	var_118_string = "Neutral"; // 0x127 MovS
	func_185(var_7_bool, var_118_string); // 0x128 NEW_2
	var_135_int = 535541; // 0x12a PushI
	SetMessage(var_135_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_136_int = 535542; // 0x12f PushI
	var_137_int = 37226; // 0x130 PushI
	var_138_int = 37225; // 0x131 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x132 TObjFunc
	var_139_int = 540019; // 0x134 PushI
	var_140_int = 41991; // 0x135 PushI
	var_141_int = 41990; // 0x136 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x137 TObjFunc
	var_142_bool = 0; var_143_object = Obj(); // 0x139 PushV
	var_143_object = var_1_object; // 0x13a MovT
	func_1013(var_143_object); // 0x13b NEW_2
	if(var_142_bool == 0) goto Label_323; // 0x13d JumpB
	var_148_int = 535545; // 0x13e PushI
	var_149_int = 42317; // 0x13f PushI
	var_150_int = 37228; // 0x140 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x141 TObjFunc
	
Label_323:
	var_151_bool = 0; var_152_object = Obj(); // 0x143 PushV
	var_152_object = var_1_object; // 0x144 MovT
	func_1025(var_152_object); // 0x145 NEW_2
	if(var_151_bool == 0) goto Label_333; // 0x147 JumpB
	var_157_int = 535559; // 0x148 PushI
	var_158_int = 37243; // 0x149 PushI
	var_159_int = 37242; // 0x14a PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x14b TObjFunc
	
Label_333:
	var_160_int = 540276; // 0x14d PushI
	var_161_int = 42323; // 0x14e PushI
	var_162_int = 42256; // 0x14f PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_163_string = ""; // 0x153 PushV
	var_163_string = "Neutral"; // 0x154 MovS
	func_185(var_7_bool, var_163_string); // 0x155 NEW_2
	var_164_int = 535564; // 0x157 PushI
	SetMessage(var_164_int); // 0x158 TObjFunc
	ClearReplies(); // 0x15a TObjFunc
	var_165_int = 535565; // 0x15c PushI
	var_166_int = -1; // 0x15d PushI
	var_167_int = 37248; // 0x15e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_168_int = 42323; // 0x162 PushI
	var_169_bool = var_6_int == var_168_int; // 0x163 Eq
	if(var_169_bool == 0) goto Label_372; // 0x164 JumpB
	var_170_string = ""; // 0x165 PushV
	var_170_string = "Neutral"; // 0x166 MovS
	func_185(var_7_bool, var_170_string); // 0x167 NEW_2
	var_171_int = 540340; // 0x169 PushI
	SetMessage(var_171_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_172_int = 540278; // 0x16e PushI
	var_173_int = -1; // 0x16f PushI
	var_174_int = 42258; // 0x170 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_175_int = 37243; // 0x174 PushI
	var_176_bool = var_6_int == var_175_int; // 0x175 Eq
	if(var_176_bool == 0) goto Label_390; // 0x176 JumpB
	var_177_string = ""; // 0x177 PushV
	var_177_string = "Neutral"; // 0x178 MovS
	func_185(var_7_bool, var_177_string); // 0x179 NEW_2
	var_178_int = 535560; // 0x17b PushI
	SetMessage(var_178_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_179_int = 535561; // 0x180 PushI
	var_180_int = 37245; // 0x181 PushI
	var_181_int = 37244; // 0x182 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_182_int = 37245; // 0x186 PushI
	var_183_bool = var_6_int == var_182_int; // 0x187 Eq
	if(var_183_bool == 0) goto Label_408; // 0x188 JumpB
	var_184_string = ""; // 0x189 PushV
	var_184_string = "Doubt"; // 0x18a MovS
	func_185(var_7_bool, var_184_string); // 0x18b NEW_2
	var_185_int = 535562; // 0x18d PushI
	SetMessage(var_185_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_186_int = 535563; // 0x192 PushI
	var_187_int = -1; // 0x193 PushI
	var_188_int = 37246; // 0x194 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_189_int = 42317; // 0x198 PushI
	var_190_bool = var_6_int == var_189_int; // 0x199 Eq
	if(var_190_bool == 0) goto Label_426; // 0x19a JumpB
	var_191_string = ""; // 0x19b PushV
	var_191_string = "Neutral"; // 0x19c MovS
	func_185(var_7_bool, var_191_string); // 0x19d NEW_2
	var_192_int = 540334; // 0x19f PushI
	SetMessage(var_192_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_193_int = 540336; // 0x1a4 PushI
	var_194_int = 42320; // 0x1a5 PushI
	var_195_int = 42319; // 0x1a6 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_196_int = 42320; // 0x1aa PushI
	var_197_bool = var_6_int == var_196_int; // 0x1ab Eq
	if(var_197_bool == 0) goto Label_444; // 0x1ac JumpB
	var_198_string = ""; // 0x1ad PushV
	var_198_string = "Doubt"; // 0x1ae MovS
	func_185(var_7_bool, var_198_string); // 0x1af NEW_2
	var_199_int = 540337; // 0x1b1 PushI
	SetMessage(var_199_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_200_int = 535553; // 0x1b6 PushI
	var_201_int = -1; // 0x1b7 PushI
	var_202_int = 37236; // 0x1b8 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_203_int = 41991; // 0x1bc PushI
	var_204_bool = var_6_int == var_203_int; // 0x1bd Eq
	if(var_204_bool == 0) goto Label_462; // 0x1be JumpB
	var_205_string = ""; // 0x1bf PushV
	var_205_string = "Neutral"; // 0x1c0 MovS
	func_185(var_7_bool, var_205_string); // 0x1c1 NEW_2
	var_206_int = 540020; // 0x1c3 PushI
	SetMessage(var_206_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_207_int = 540021; // 0x1c8 PushI
	var_208_int = 41993; // 0x1c9 PushI
	var_209_int = 41992; // 0x1ca PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_210_int = 41993; // 0x1ce PushI
	var_211_bool = var_6_int == var_210_int; // 0x1cf Eq
	if(var_211_bool == 0) goto Label_480; // 0x1d0 JumpB
	var_212_string = ""; // 0x1d1 PushV
	var_212_string = "Neutral"; // 0x1d2 MovS
	func_185(var_7_bool, var_212_string); // 0x1d3 NEW_2
	var_213_int = 540022; // 0x1d5 PushI
	SetMessage(var_213_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_214_int = 540023; // 0x1da PushI
	var_215_int = 41995; // 0x1db PushI
	var_216_int = 41994; // 0x1dc PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_217_int = 41995; // 0x1e0 PushI
	var_218_bool = var_6_int == var_217_int; // 0x1e1 Eq
	if(var_218_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_219_string = ""; // 0x1e3 PushV
	var_219_string = "Neutral"; // 0x1e4 MovS
	func_185(var_7_bool, var_219_string); // 0x1e5 NEW_2
	var_220_int = 540024; // 0x1e7 PushI
	SetMessage(var_220_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_221_int = 540025; // 0x1ec PushI
	var_222_int = 37238; // 0x1ed PushI
	var_223_int = 41996; // 0x1ee PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_224_int = 37238; // 0x1f2 PushI
	var_225_bool = var_6_int == var_224_int; // 0x1f3 Eq
	if(var_225_bool == 0) goto Label_516; // 0x1f4 JumpB
	var_226_string = ""; // 0x1f5 PushV
	var_226_string = "Neutral"; // 0x1f6 MovS
	func_185(var_7_bool, var_226_string); // 0x1f7 NEW_2
	var_227_int = 535555; // 0x1f9 PushI
	SetMessage(var_227_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_228_int = 535556; // 0x1fe PushI
	var_229_int = 37240; // 0x1ff PushI
	var_230_int = 37239; // 0x200 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x201 TObjFunc
	return 0; // 0x203 Return
	
Label_516:
	var_231_int = 37240; // 0x204 PushI
	var_232_bool = var_6_int == var_231_int; // 0x205 Eq
	if(var_232_bool == 0) goto Label_534; // 0x206 JumpB
	var_233_string = ""; // 0x207 PushV
	var_233_string = "Neutral"; // 0x208 MovS
	func_185(var_7_bool, var_233_string); // 0x209 NEW_2
	var_234_int = 535557; // 0x20b PushI
	SetMessage(var_234_int); // 0x20c TObjFunc
	ClearReplies(); // 0x20e TObjFunc
	var_235_int = 535558; // 0x210 PushI
	var_236_int = -1; // 0x211 PushI
	var_237_int = 37241; // 0x212 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_238_int = 37226; // 0x216 PushI
	var_239_bool = var_6_int == var_238_int; // 0x217 Eq
	if(var_239_bool == 0) goto Label_552; // 0x218 JumpB
	var_240_string = ""; // 0x219 PushV
	var_240_string = "Neutral"; // 0x21a MovS
	func_185(var_7_bool, var_240_string); // 0x21b NEW_2
	var_241_int = 535543; // 0x21d PushI
	SetMessage(var_241_int); // 0x21e TObjFunc
	ClearReplies(); // 0x220 TObjFunc
	var_242_int = 535544; // 0x222 PushI
	var_243_int = -1; // 0x223 PushI
	var_244_int = 37227; // 0x224 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x225 TObjFunc
	return 0; // 0x227 Return
	
Label_552:
	var_3_string = 1; // 0x228 TMovB
	var_245_bool = 0; // 0x229 PushV
	func_1155(var_245_bool); // 0x22a NEW_2
	if(var_245_bool == 0) goto Label_560; // 0x22c JumpB
	lshStopAnimation(); // 0x22d Func
	goto Label_562; // 0x22f Jump
	
Label_562:
	return 0; // 0x232 Return
	
Label_560:
	StopAnimation(); // 0x230 Func
	
Label_564:
	return 0; // 0x234 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x23a PushV
	var_8_object = var_6_object; // 0x23b Mov
	TaskCall(0); // 0x23c TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x23d NEW_2
	TaskReturn(); // 0x23e TaskReturn
	return 0; // 0x240 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x245 PushV
	var_9_string = "cleanup"; // 0x246 PushS
	var_10_bool = var_6_string == var_9_string; // 0x247 Eq
	if(var_10_bool == 0) goto Label_604; // 0x248 JumpB
	var_0_object = 1; // 0x249 TMovB
	IsLoaded(var_8_bool); // 0x24a Func
	var_11_bool = 0; // 0x24c PushV
	var_11_bool = 0; // 0x24d MovB
	var_12_bool = var_8_bool == 0; // 0x24e Not
	if(var_12_bool == 0) goto Label_597; // 0x24f JumpB
	var_13_bool = 0; // 0x250 PushV
	func_625(var_13_bool); // 0x251 NEW_2
	if(var_13_bool == 0) goto Label_597; // 0x253 JumpB
	var_11_bool = 1; // 0x254 MovB
	
Label_597:
	if(var_11_bool == 0) goto Label_603; // 0x255 JumpB
	var_14_object = Obj(); // 0x256 PushV
	func_903(var_14_object); // 0x257 NEW_2
	RemoveActor(var_14_object); // 0x259 Func
	
Label_603:
	goto Label_608; // 0x25b Jump
	
Label_608:
	return 2; // 0x260 Return
	
Label_604:
	var_17_string = "restore"; // 0x25c PushS
	var_18_bool = var_6_string == var_17_string; // 0x25d Eq
	if(var_18_bool == 0) goto Label_608; // 0x25e JumpB
	var_0_object = 0; // 0x25f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x261 PushV
	var_6_bool = 0; // 0x262 MovB
	var_7_object = var_0_object; // 0x263 PushT
	if(var_7_object == 0) goto Label_618; // 0x264 JumpB
	var_8_bool = 0; // 0x265 PushV
	func_625(var_8_bool); // 0x266 NEW_2
	if(var_8_bool == 0) goto Label_618; // 0x268 JumpB
	var_6_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_6_bool == 0) goto Label_624; // 0x26a JumpB
	var_9_object = Obj(); // 0x26b PushV
	func_903(var_9_object); // 0x26c NEW_2
	RemoveActor(var_9_object); // 0x26e Func
	
Label_624:
	return 0; // 0x270 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_577(); // 0x236 NEW_2
	return 0; // 0x238 Return
}


func_896()
{
	var_9_bool = 0; // 0x380 PushV
	func_1155(var_9_bool); // 0x381 NEW_2
	if(var_9_bool == 0) goto Label_902; // 0x383 JumpB
	lshStopSpeech(); // 0x384 Func
	
Label_902:
	return 0; // 0x386 Return
}


func_1153(var_68_string)
{
	var_68_string = "ui/NPC_Block_b.png"; // 0x481 MovS
	return 0; // 0x482 Return
}


func_1025(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x402 PushV
	var_225_string = "d12q01KlaraInSobor"; // 0x403 MovS
	func_919(var_224_int, var_225_string); // 0x404 NEW_2
	var_226_int = 0; // 0x406 PushI
	var_227_bool = var_224_int != var_226_int; // 0x407 Neq
	if(var_227_bool == 0) goto Label_1035; // 0x408 JumpB
	var_222_bool = 1; // 0x409 MovB
	return 0; // 0x40a Return
	
Label_1035:
	var_222_bool = 0; // 0x40b MovB
	return 0; // 0x40c Return
}


func_1155(var_60_bool)
{
	var_60_bool = 1; // 0x483 MovB
	return 0; // 0x484 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_627(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1149(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1147(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1151(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1153(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1130(var_69_int); // 0x22 NEW_2
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
	func_903(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_712(var_78_bool, var_79_object); // 0x34 NEW_2
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
	func_695(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_770(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x302 PushV
	var_96_string = "c"; // 0x303 MovS
	var_97_int = 0; // 0x304 MovI
	
Label_773:
	var_101_int = 1; // 0x305 PushI
	if(var_101_int == 0) goto Label_786; // 0x306 JumpB
	var_102_int = 1; // 0x307 PushI
	var_103_int = var_97_int + var_102_int; // 0x308 Add
	var_104_int = var_96_string + var_103_int; // 0x309 Add
	HasProperty(var_104_int, var_98_bool); // 0x30a ObjFunc
	var_105_bool = var_98_bool == 0; // 0x30c Not
	if(var_105_bool == 0) goto Label_783; // 0x30d JumpB
	goto Label_786; // 0x30e Jump
	
Label_786:
	var_106_bool = var_97_int == 0; // 0x312 Not
	if(var_106_bool == 0) goto Label_790; // 0x313 JumpB
	var_89_bool = 0; // 0x314 MovB
	return 10; // 0x315 Return
	
Label_790:
	var_99_int = 0; // 0x316 MovI
	var_107_int = 1; // 0x317 PushI
	var_108_bool = var_97_int > var_107_int; // 0x318 GT
	if(var_108_bool == 0) goto Label_796; // 0x319 JumpB
	irand(var_99_int, var_97_int); // 0x31a Func
	
Label_796:
	var_109_int = 1; // 0x31c PushI
	var_110_int = var_99_int + var_109_int; // 0x31d Add
	var_111_int = var_96_string + var_110_int; // 0x31e Add
	GetProperty(var_111_int, var_100_string); // 0x31f ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x321 PushV
	var_113_string = var_100_string; // 0x322 Mov
	func_881(var_112_bool, var_113_string); // 0x323 NEW_2
	var_89_bool = var_112_bool; // 0x324 Mov
	return 10; // 0x326 Return
	
Label_783:
	var_118_int = 1; // 0x30f PushI
	var_97_int = var_97_int + var_118_int; // 0x310 Add2
	goto Label_773; // 0x311 Jump
}


func_903(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x387 PushV
	self(var_11_object); // 0x388 Func
	var_9_object = var_11_object; // 0x38a Mov
	return 2; // 0x38b Return
}


func_909(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x38d PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x38e Or
	var_49_float = sqrt(var_50_int); // 0x38f Sqrt2
	var_51_float = 0.0; // 0x390 PushF
	var_52_bool = var_49_float < var_51_float; // 0x391 LT
	if(var_52_bool == 0) goto Label_917; // 0x392 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x393 MovV
	return 2; // 0x394 Return
	
Label_917:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x395 Div2
	return 2; // 0x396 Return
}


func_1037()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x40d PushV
	var_101_int = 773; // 0x40e PushI
	var_102_int = 1; // 0x40f PushI
	var_103_int = 540274; // 0x410 PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x411 Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x413 PushV
	var_105_object = var_100_object; // 0x414 Mov
	var_106_int = 699; // 0x415 MovI
	func_1102(var_104_bool, var_105_object, var_106_int); // 0x416 NEW_2
	return 2; // 0x418 Return
}


func_919(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x397 PushV
	GetVariable(var_183_string, var_185_int); // 0x398 Func
	var_182_int = var_185_int; // 0x39a Mov
	return 2; // 0x39b Return
}


func_1050()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x41a PushV
	var_81_int = 704; // 0x41b PushI
	var_82_int = 1; // 0x41c PushI
	var_83_int = 535687; // 0x41d PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0x41e Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0x420 PushV
	var_85_object = var_80_object; // 0x421 Mov
	var_86_int = 699; // 0x422 MovI
	func_1102(var_84_bool, var_85_object, var_86_int); // 0x423 NEW_2
	return 2; // 0x425 Return
}


func_924(var_43_string, var_44_bool)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x39c PushV
	FindActor(var_46_object, var_43_string); // 0x39d Func
	var_47_bool = var_46_object == 0; // 0x39f Not
	if(var_47_bool == 0) goto Label_936; // 0x3a0 JumpB
	var_48_string = "Door "; // 0x3a1 PushS
	var_49_int = var_48_string + var_43_string; // 0x3a2 Add
	var_50_string = " not found"; // 0x3a3 PushS
	var_51_int = var_49_int + var_50_string; // 0x3a4 Add
	Trace(var_51_int); // 0x3a5 Func
	goto Label_939; // 0x3a7 Jump
	
Label_939:
	return 2; // 0x3ab Return
	
Label_936:
	var_52_string = "locked"; // 0x3a8 PushS
	SetProperty(var_52_string, var_44_bool); // 0x3a9 ObjFunc
}


func_807(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x327 PushV
	var_132_string = "d"; // 0x328 PushS
	var_133_int = 0; // 0x329 PushV
	func_941(var_133_int); // 0x32a NEW_2
	var_139_int = var_132_string + var_133_int; // 0x32c Add
	var_140_string = "m"; // 0x32d PushS
	var_127_string = var_139_int + var_140_string; // 0x32e Add2
	var_128_int = 0; // 0x32f MovI
	
Label_816:
	var_141_int = 1; // 0x330 PushI
	if(var_141_int == 0) goto Label_829; // 0x331 JumpB
	var_142_int = 1; // 0x332 PushI
	var_143_int = var_128_int + var_142_int; // 0x333 Add
	var_144_int = var_127_string + var_143_int; // 0x334 Add
	HasProperty(var_144_int, var_129_bool); // 0x335 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x337 Not
	if(var_145_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_829; // 0x339 Jump
	
Label_829:
	var_146_bool = var_128_int == 0; // 0x33d Not
	if(var_146_bool == 0) goto Label_833; // 0x33e JumpB
	var_120_bool = 0; // 0x33f MovB
	return 10; // 0x340 Return
	
Label_833:
	var_130_int = 0; // 0x341 MovI
	var_147_int = 1; // 0x342 PushI
	var_148_bool = var_128_int > var_147_int; // 0x343 GT
	if(var_148_bool == 0) goto Label_839; // 0x344 JumpB
	irand(var_130_int, var_128_int); // 0x345 Func
	
Label_839:
	var_149_int = 1; // 0x347 PushI
	var_150_int = var_130_int + var_149_int; // 0x348 Add
	var_151_int = var_127_string + var_150_int; // 0x349 Add
	GetProperty(var_151_int, var_131_string); // 0x34a ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x34c PushV
	var_153_string = var_131_string; // 0x34d Mov
	func_881(var_152_bool, var_153_string); // 0x34e NEW_2
	var_120_bool = var_152_bool; // 0x34f Mov
	return 10; // 0x351 Return
	
Label_826:
	var_154_int = 1; // 0x33a PushI
	var_128_int = var_128_int + var_154_int; // 0x33b Add2
	goto Label_816; // 0x33c Jump
}


func_1063()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x427 PushV
	var_63_int = 702; // 0x428 PushI
	var_64_int = 1; // 0x429 PushI
	var_65_int = 535685; // 0x42a PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0x42b Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x42d PushV
	var_67_object = var_62_object; // 0x42e Mov
	var_68_int = 699; // 0x42f MovI
	func_1102(var_66_bool, var_67_object, var_68_int); // 0x430 NEW_2
	return 2; // 0x432 Return
}


func_941(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x3ad PushV
	GetGameTime(var_135_float); // 0x3ae Func
	var_136_int = 1; // 0x3b0 PushI
	var_137_int = 0; // 0x3b1 PushV
	var_138_int = 24; // 0x3b2 PushI
	var_137_int = var_135_float / var_135_float; // 0x3b3 Div2
	var_133_int = var_136_int + var_137_int; // 0x3b4 Add2
	return 2; // 0x3b5 Return
}


func_1076()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x434 PushV
	var_20_int = 703; // 0x435 PushI
	var_21_int = 1; // 0x436 PushI
	var_22_int = 535686; // 0x437 PushI
	CreateDiaryEntry(var_19_object, var_20_int, var_21_int, var_22_int); // 0x438 Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x43a PushV
	var_24_object = var_19_object; // 0x43b Mov
	var_25_int = 699; // 0x43c MovI
	func_1102(var_23_bool, var_24_object, var_25_int); // 0x43d NEW_2
	return 2; // 0x43f Return
}


func_950()
{
	var_57_string = "game_final"; // 0x3b7 PushS
	var_58_int = 1; // 0x3b8 PushI
	SetVariable(var_57_string, var_58_int); // 0x3b9 Func
	return 0; // 0x3bb Return
}


func_695()
{
	var_259_bool = 0; var_260_bool = 0; // 0x2b7 PushV
	CameraSwitchToNormal(); // 0x2b8 Func
	var_261_bool = 0; // 0x2ba PushV
	func_1155(var_261_bool); // 0x2bb NEW_2
	if(var_261_bool == 0) goto Label_703; // 0x2bd JumpB
	goto Label_711; // 0x2be Jump
	
Label_711:
	return 2; // 0x2c7 Return
	
Label_703:
	var_262_string = "head"; // 0x2bf PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x2c0 Func
	var_263_bool = var_260_bool; // 0x2c2 Push
	if(var_263_bool == 0) goto Label_711; // 0x2c3 JumpB
	var_264_string = "head"; // 0x2c4 PushS
	UnlookAsync(var_264_string); // 0x2c5 Func
}


func_185(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xba PushV
	func_1155(var_190_bool); // 0xbb NEW_2
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
	func_866(var_193_string, var_194_bool); // 0xcb NEW_2
	var_2_object = var_189_string; // 0xcd TMov
	return 0; // 0xce Return
	
Label_202:
	var_194_bool = 1; // 0xca MovB
}


func_956()
{
	var_14_string = "game_final"; // 0x3bd PushS
	var_15_int = 2; // 0x3be PushI
	SetVariable(var_14_string, var_15_int); // 0x3bf Func
	return 0; // 0x3c1 Return
}


func_577()
{
	
Label_577:
	Hold(); // 0x241 Func
	goto Label_577; // 0x243 Jump
}


func_962()
{
	var_75_string = "game_final"; // 0x3c3 PushS
	var_76_int = 3; // 0x3c4 PushI
	SetVariable(var_75_string, var_76_int); // 0x3c5 Func
	return 0; // 0x3c7 Return
}


func_1089(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x441 PushV
	GetDiaryRoot(var_34_object); // 0x442 Func
	var_35_bool = var_34_object == 0; // 0x444 Not
	if(var_35_bool == 0) goto Label_1099; // 0x445 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x446 PushS
	Trace(var_36_string); // 0x447 Func
	var_32_object = 0; // 0x449 MovB
	return 2; // 0x44a Return
	
Label_1099:
	var_32_object = var_34_object; // 0x44b Mov
	return 2; // 0x44c Return
}


func_712(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x2c8 PushV
	var_87_string = "voice_common"; // 0x2c9 PushS
	GetVariable(var_87_string, var_85_int); // 0x2ca Func
	var_88_int = var_85_int; // 0x2cc Push
	if(var_88_int == 0) goto Label_750; // 0x2cd JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x2ce PushV
	var_90_object = var_79_object; // 0x2cf Mov
	func_770(var_90_object); // 0x2d0 NEW_2
	var_119_bool = var_89_bool == 0; // 0x2d2 Not
	if(var_119_bool == 0) goto Label_732; // 0x2d3 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x2d4 PushV
	var_121_object = var_79_object; // 0x2d5 Mov
	func_807(var_121_object); // 0x2d6 NEW_2
	var_155_bool = var_120_bool == 0; // 0x2d8 Not
	if(var_155_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_78_bool = 0; // 0x2da MovB
	return 4; // 0x2db Return
	
Label_732:
	var_156_int = 2; // 0x2dc PushI
	irand(var_86_int, var_156_int); // 0x2dd Func
	var_157_int = var_86_int; // 0x2df Push
	if(var_157_int == 0) goto Label_745; // 0x2e0 JumpB
	var_158_string = "voice_common"; // 0x2e1 PushS
	var_159_int = 1; // 0x2e2 PushI
	var_160_int = var_85_int + var_159_int; // 0x2e3 Add
	var_161_int = 3; // 0x2e4 PushI
	var_162_int = var_160_int / var_161_int; // 0x2e5 Mod
	SetVariable(var_158_string, var_162_int); // 0x2e6 Func
	goto Label_749; // 0x2e8 Jump
	
Label_749:
	goto Label_768; // 0x2ed Jump
	
Label_768:
	var_78_bool = 1; // 0x300 MovB
	return 4; // 0x301 Return
	
Label_745:
	var_163_string = "voice_common"; // 0x2e9 PushS
	var_164_int = 0; // 0x2ea PushI
	SetVariable(var_163_string, var_164_int); // 0x2eb Func
	
Label_750:
	var_165_bool = 0; var_166_object = Obj(); // 0x2ee PushV
	var_166_object = var_79_object; // 0x2ef Mov
	func_807(var_166_object); // 0x2f0 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2f2 Not
	if(var_167_bool == 0) goto Label_764; // 0x2f3 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2f4 PushV
	var_169_object = var_79_object; // 0x2f5 Mov
	func_770(var_169_object); // 0x2f6 NEW_2
	var_170_bool = var_168_bool == 0; // 0x2f8 Not
	if(var_170_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_78_bool = 0; // 0x2fa MovB
	return 4; // 0x2fb Return
	
Label_764:
	var_171_string = "voice_common"; // 0x2fc PushS
	var_172_int = 1; // 0x2fd PushI
	SetVariable(var_171_string, var_172_int); // 0x2fe Func
}


func_968()
{
	var_43_string = ""; var_44_bool = 0; // 0x3c9 PushV
	var_43_string = "isobor@door1"; // 0x3ca MovS
	var_44_bool = 0; // 0x3cb MovB
	func_924(var_43_string, var_44_bool); // 0x3cc NEW_2
	return 0; // 0x3ce Return
}


func_1102(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x44e PushV
	var_32_object = Obj(); // 0x44f PushV
	func_1089(var_32_object); // 0x450 NEW_2
	var_29_object = var_32_object; // 0x451 Mov
	Find(var_25_int, var_30_object); // 0x453 ObjFunc
	var_37_bool = var_30_object == 0; // 0x455 Not
	if(var_37_bool == 0) goto Label_1117; // 0x456 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x457 PushS
	var_39_int = var_38_string + var_25_int; // 0x458 Add
	Trace(var_39_int); // 0x459 Func
	var_23_bool = 0; // 0x45b MovB
	return 6; // 0x45c Return
	
Label_1117:
	AddChild(var_24_object); // 0x45d ObjFunc
	var_40_int = 7; // 0x45f PushI
	SendWorldWndMessage(var_40_int); // 0x460 Func
	GetCategory(var_31_int); // 0x462 ObjFunc
	SetDiarySection(var_31_int); // 0x464 Func
	var_23_bool = 0; // 0x466 MovB
	return 6; // 0x467 Return
}


func_975()
{
	var_93_string = "game_final"; // 0x3d0 PushS
	var_94_int = 4; // 0x3d1 PushI
	SetVariable(var_93_string, var_94_int); // 0x3d2 Func
	return 0; // 0x3d4 Return
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
	func_1001(var_181_object); // 0x59 NEW_2
	var_188_bool = var_180_bool == 0; // 0x5b Not
	if(var_188_bool == 0) goto Label_138; // 0x5c JumpB
	var_189_string = ""; // 0x5d PushV
	var_189_string = "Neutral"; // 0x5e MovS
	func_185(var_174_object, var_189_string); // 0x5f NEW_2
	var_206_int = 535541; // 0x61 PushI
	SetMessage(var_206_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_207_int = 535542; // 0x66 PushI
	var_208_int = 37226; // 0x67 PushI
	var_209_int = 37225; // 0x68 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x69 TObjFunc
	var_210_int = 540019; // 0x6b PushI
	var_211_int = 41991; // 0x6c PushI
	var_212_int = 41990; // 0x6d PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6e TObjFunc
	var_213_bool = 0; var_214_object = Obj(); // 0x70 PushV
	var_214_object = var_1_object; // 0x71 MovT
	func_1013(var_214_object); // 0x72 NEW_2
	if(var_213_bool == 0) goto Label_122; // 0x74 JumpB
	var_219_int = 535545; // 0x75 PushI
	var_220_int = 42317; // 0x76 PushI
	var_221_int = 37228; // 0x77 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x78 TObjFunc
	
Label_122:
	var_222_bool = 0; var_223_object = Obj(); // 0x7a PushV
	var_223_object = var_1_object; // 0x7b MovT
	func_1025(var_223_object); // 0x7c NEW_2
	if(var_222_bool == 0) goto Label_132; // 0x7e JumpB
	var_228_int = 535559; // 0x7f PushI
	var_229_int = 37243; // 0x80 PushI
	var_230_int = 37242; // 0x81 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x82 TObjFunc
	
Label_132:
	var_231_int = 540276; // 0x84 PushI
	var_232_int = 42323; // 0x85 PushI
	var_233_int = 42256; // 0x86 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x87 TObjFunc
	goto Label_155; // 0x89 Jump
	
Label_155:
	var_234_bool = 0; // 0x9b PushV
	func_1155(var_234_bool); // 0x9c NEW_2
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
	func_850(var_236_string); // 0xa6 NEW_2
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
	var_253_int = 535564; // 0x8e PushI
	SetMessage(var_253_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_254_int = 535565; // 0x93 PushI
	var_255_int = -1; // 0x94 PushI
	var_256_int = 37248; // 0x95 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
}


func_850(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x352 PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x353 Func
	var_243_bool = var_240_bool; // 0x355 Push
	if(var_243_bool == 0) goto Label_861; // 0x356 JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x357 Func
	var_244_bool = 0; // 0x359 PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x35a Func
	goto Label_865; // 0x35c Jump
	
Label_865:
	return 6; // 0x361 Return
	
Label_861:
	var_245_string = "Can't find lsh animation : "; // 0x35d PushS
	var_246_int = var_245_string + var_236_string; // 0x35e Add
	Trace(var_246_int); // 0x35f Func
}


func_981()
{
	func_1037(); // 0x3d7 NEW_2
	return 0; // 0x3d9 Return
}


func_986()
{
	func_1076(); // 0x3dc NEW_2
	return 0; // 0x3de Return
}


func_991()
{
	func_1050(); // 0x3e1 NEW_2
	return 0; // 0x3e3 Return
}


func_866(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x362 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x363 Func
	var_203_bool = var_200_bool; // 0x365 Push
	if(var_203_bool == 0) goto Label_876; // 0x366 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x367 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x369 Func
	goto Label_880; // 0x36b Jump
	
Label_880:
	return 6; // 0x370 Return
	
Label_876:
	var_204_string = "Can't find lsh animation : "; // 0x36c PushS
	var_205_int = var_204_string + var_193_string; // 0x36d Add
	Trace(var_205_int); // 0x36e Func
}


func_996()
{
	func_1063(); // 0x3e6 NEW_2
	return 0; // 0x3e8 Return
}


func_1001(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x3ea PushV
	var_183_string = "game_final"; // 0x3eb MovS
	func_919(var_182_int, var_183_string); // 0x3ec NEW_2
	var_186_int = 0; // 0x3ee PushI
	var_187_bool = var_182_int != var_186_int; // 0x3ef Neq
	if(var_187_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_180_bool = 1; // 0x3f1 MovB
	return 0; // 0x3f2 Return
	
Label_1011:
	var_180_bool = 0; // 0x3f3 MovB
	return 0; // 0x3f4 Return
}


func_1130(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x46a PushV
	var_72_string = "branch"; // 0x46b PushS
	GetVariable(var_72_string, var_71_int); // 0x46c Func
	var_73_int = 0; // 0x46e PushI
	var_74_bool = var_71_int == var_73_int; // 0x46f Eq
	if(var_74_bool == 0) goto Label_1140; // 0x470 JumpB
	var_69_int = 1; // 0x471 MovI
	return 2; // 0x472 Return
	
Label_1140:
	var_75_int = 1; // 0x474 PushI
	var_76_bool = var_71_int == var_75_int; // 0x475 Eq
	if(var_76_bool == 0) goto Label_1145; // 0x476 JumpB
	var_69_int = 2; // 0x477 MovI
	return 2; // 0x478 Return
	
Label_1145:
	var_69_int = 3; // 0x479 MovI
	return 2; // 0x47a Return
}


func_625(var_8_bool)
{
	var_8_bool = 1; // 0x271 MovB
	return 0; // 0x272 Return
}


func_881(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x371 PushV
	var_116_bool = 0; // 0x372 PushV
	func_1155(var_116_bool); // 0x373 NEW_2
	if(var_116_bool == 0) goto Label_894; // 0x375 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x376 Func
	var_117_bool = var_115_bool; // 0x378 Push
	if(var_117_bool == 0) goto Label_894; // 0x379 JumpB
	lshPlaySpeech(var_113_string); // 0x37a Func
	var_112_bool = 1; // 0x37c MovB
	return 2; // 0x37d Return
	
Label_894:
	var_112_bool = 0; // 0x37e MovB
	return 2; // 0x37f Return
}


func_627(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x273 PushV
	GetPosition(var_31_cvector); // 0x274 ObjFunc
	GetEyesHeight(var_30_float); // 0x276 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x278 PushE
	var_39_float = var_39_float + var_30_float; // 0x279 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x27a PopE
	GetPosition(var_32_cvector); // 0x27b Func
	GetEyesHeight(var_30_float); // 0x27d Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x27f PushE
	var_40_float = var_40_float + var_30_float; // 0x280 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x281 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x282 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x283 PushE
	var_41_float = 0; // 0x284 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x285 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x286 Or
	var_43_float = sqrt(var_42_int); // 0x287 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x288 Div2
	var_34_cvector = -var_33_cvector; // 0x289 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x28a Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x28b PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x28c PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x28d Xor2
	func_909(var_45_cvector, var_46_cvector); // 0x28e NEW_2
	var_53_int = 25; // 0x290 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x291 Mult
	var_55_int = var_44_float + var_54_float; // 0x292 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x293 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x294 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x295 Add2
	IsOverrideActive(var_37_bool); // 0x296 Func
	var_57_bool = var_37_bool; // 0x298 Push
	if(var_57_bool == 0) goto Label_668; // 0x299 JumpB
	var_18_bool = 0; // 0x29a MovB
	return 18; // 0x29b Return
	
Label_668:
	StopWorld(); // 0x29c Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x29e Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x2a0 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x2a1 PushE
	Rotate(var_58_float, var_59_float); // 0x2a2 Func
	var_60_bool = 0; // 0x2a4 PushV
	func_1155(var_60_bool); // 0x2a5 NEW_2
	if(var_60_bool == 0) goto Label_681; // 0x2a7 JumpB
	goto Label_689; // 0x2a8 Jump
	
Label_689:
	CameraWaitForPlayFinish(); // 0x2b1 Func
	ResumeWorld(); // 0x2b3 Func
	var_18_bool = 1; // 0x2b5 MovB
	return 18; // 0x2b6 Return
	
Label_681:
	var_61_string = "head"; // 0x2a9 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x2aa Func
	var_62_bool = var_38_bool; // 0x2ac Push
	if(var_62_bool == 0) goto Label_689; // 0x2ad JumpB
	var_63_string = "head"; // 0x2ae PushS
	LookAsyncCamera(var_63_string); // 0x2af Func
}


func_1013(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x3f6 PushV
	var_216_string = "d12q01BurahInSobor"; // 0x3f7 MovS
	func_919(var_215_int, var_216_string); // 0x3f8 NEW_2
	var_217_int = 0; // 0x3fa PushI
	var_218_bool = var_215_int != var_217_int; // 0x3fb Neq
	if(var_218_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_213_bool = 1; // 0x3fd MovB
	return 0; // 0x3fe Return
	
Label_1023:
	var_213_bool = 0; // 0x3ff MovB
	return 0; // 0x400 Return
}


func_1147(var_66_int)
{
	var_66_int = 515532; // 0x47b MovI
	return 0; // 0x47c Return
}


func_1149(var_65_int)
{
	var_65_int = 514840; // 0x47d MovI
	return 0; // 0x47e Return
}


func_1151(var_67_string)
{
	var_67_string = "ui/NPC_Block.png"; // 0x47f MovS
	return 0; // 0x480 Return
}


