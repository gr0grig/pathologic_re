task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xd0 PushI
	if(var_8_int == 0) goto Label_564; // 0xd1 JumpB
	func_898(); // 0xd3 NEW_2
	var_10_int = 37241; // 0xd5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xd6 Eq
	if(var_11_bool == 0) goto Label_231; // 0xd7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xd8 PushV
	var_12_object = var_1_object; // 0xd9 MovT
	var_13_object = var_0_object; // 0xda MovT
	func_958(); // 0xdb NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xdd PushV
	var_16_object = var_1_object; // 0xde MovT
	var_17_object = var_0_object; // 0xdf MovT
	func_988(); // 0xe0 NEW_2
	var_41_object = Obj(); var_42_object = Obj(); // 0xe2 PushV
	var_41_object = var_1_object; // 0xe3 MovT
	var_42_object = var_0_object; // 0xe4 MovT
	func_970(); // 0xe5 NEW_2
	
Label_231:
	var_53_int = 37236; // 0xe7 PushI
	var_54_bool = var_7_bool == var_53_int; // 0xe8 Eq
	if(var_54_bool == 0) goto Label_249; // 0xe9 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xea PushV
	var_55_object = var_1_object; // 0xeb MovT
	var_56_object = var_0_object; // 0xec MovT
	func_952(); // 0xed NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xef PushV
	var_59_object = var_1_object; // 0xf0 MovT
	var_60_object = var_0_object; // 0xf1 MovT
	func_998(); // 0xf2 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0xf4 PushV
	var_69_object = var_1_object; // 0xf5 MovT
	var_70_object = var_0_object; // 0xf6 MovT
	func_970(); // 0xf7 NEW_2
	
Label_249:
	var_71_int = 37246; // 0xf9 PushI
	var_72_bool = var_7_bool == var_71_int; // 0xfa Eq
	if(var_72_bool == 0) goto Label_267; // 0xfb JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xfc PushV
	var_73_object = var_1_object; // 0xfd MovT
	var_74_object = var_0_object; // 0xfe MovT
	func_964(); // 0xff NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x101 PushV
	var_77_object = var_1_object; // 0x102 MovT
	var_78_object = var_0_object; // 0x103 MovT
	func_993(); // 0x104 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x106 PushV
	var_87_object = var_1_object; // 0x107 MovT
	var_88_object = var_0_object; // 0x108 MovT
	func_970(); // 0x109 NEW_2
	
Label_267:
	var_89_int = 42258; // 0x10b PushI
	var_90_bool = var_7_bool == var_89_int; // 0x10c Eq
	if(var_90_bool == 0) goto Label_285; // 0x10d JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0x10e PushV
	var_91_object = var_1_object; // 0x10f MovT
	var_92_object = var_0_object; // 0x110 MovT
	func_977(); // 0x111 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x113 PushV
	var_95_object = var_1_object; // 0x114 MovT
	var_96_object = var_0_object; // 0x115 MovT
	func_970(); // 0x116 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x118 PushV
	var_97_object = var_1_object; // 0x119 MovT
	var_98_object = var_0_object; // 0x11a MovT
	func_983(); // 0x11b NEW_2
	
Label_285:
	var_107_int = 37224; // 0x11d PushI
	var_108_bool = var_6_int == var_107_int; // 0x11e Eq
	if(var_108_bool == 0) goto Label_354; // 0x11f JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x120 PushV
	var_110_object = var_1_object; // 0x121 MovT
	func_1003(var_110_object); // 0x122 NEW_2
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
	func_1015(var_143_object); // 0x13b NEW_2
	if(var_142_bool == 0) goto Label_323; // 0x13d JumpB
	var_148_int = 535545; // 0x13e PushI
	var_149_int = 42317; // 0x13f PushI
	var_150_int = 37228; // 0x140 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x141 TObjFunc
	
Label_323:
	var_151_bool = 0; var_152_object = Obj(); // 0x143 PushV
	var_152_object = var_1_object; // 0x144 MovT
	func_1027(var_152_object); // 0x145 NEW_2
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
	func_1157(var_245_bool); // 0x22a NEW_2
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
	func_905(var_14_object); // 0x257 NEW_2
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
	func_905(var_9_object); // 0x26c NEW_2
	RemoveActor(var_9_object); // 0x26e Func
	
Label_624:
	return 0; // 0x270 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_577(); // 0x236 NEW_2
	return 0; // 0x238 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_627(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1151(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1149(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1153(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1155(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1132(var_70_int); // 0x22 NEW_2
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
	func_905(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_714(var_79_bool, var_80_object); // 0x34 NEW_2
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
	func_696(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1153(var_68_string)
{
	var_68_string = "ui/NPC_Block.png"; // 0x481 MovS
	return 0; // 0x482 Return
}


func_898()
{
	var_9_bool = 0; // 0x382 PushV
	func_1157(var_9_bool); // 0x383 NEW_2
	if(var_9_bool == 0) goto Label_904; // 0x385 JumpB
	lshStopSpeech(); // 0x386 Func
	
Label_904:
	return 0; // 0x388 Return
}


func_1155(var_69_string)
{
	var_69_string = "ui/NPC_Block_b.png"; // 0x483 MovS
	return 0; // 0x484 Return
}


func_1027(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x404 PushV
	var_226_string = "d12q01KlaraInSobor"; // 0x405 MovS
	func_921(var_225_int, var_226_string); // 0x406 NEW_2
	var_227_int = 0; // 0x408 PushI
	var_228_bool = var_225_int != var_227_int; // 0x409 Neq
	if(var_228_bool == 0) goto Label_1037; // 0x40a JumpB
	var_223_bool = 1; // 0x40b MovB
	return 0; // 0x40c Return
	
Label_1037:
	var_223_bool = 0; // 0x40d MovB
	return 0; // 0x40e Return
}


func_1157(var_61_bool)
{
	var_61_bool = 1; // 0x485 MovB
	return 0; // 0x486 Return
}


func_772(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x304 PushV
	var_97_string = "c"; // 0x305 MovS
	var_98_int = 0; // 0x306 MovI
	
Label_775:
	var_102_int = 1; // 0x307 PushI
	if(var_102_int == 0) goto Label_788; // 0x308 JumpB
	var_103_int = 1; // 0x309 PushI
	var_104_int = var_98_int + var_103_int; // 0x30a Add
	var_105_int = var_97_string + var_104_int; // 0x30b Add
	HasProperty(var_105_int, var_99_bool); // 0x30c ObjFunc
	var_106_bool = var_99_bool == 0; // 0x30e Not
	if(var_106_bool == 0) goto Label_785; // 0x30f JumpB
	goto Label_788; // 0x310 Jump
	
Label_788:
	var_107_bool = var_98_int == 0; // 0x314 Not
	if(var_107_bool == 0) goto Label_792; // 0x315 JumpB
	var_90_bool = 0; // 0x316 MovB
	return 10; // 0x317 Return
	
Label_792:
	var_100_int = 0; // 0x318 MovI
	var_108_int = 1; // 0x319 PushI
	var_109_bool = var_98_int > var_108_int; // 0x31a GT
	if(var_109_bool == 0) goto Label_798; // 0x31b JumpB
	irand(var_100_int, var_98_int); // 0x31c Func
	
Label_798:
	var_110_int = 1; // 0x31e PushI
	var_111_int = var_100_int + var_110_int; // 0x31f Add
	var_112_int = var_97_string + var_111_int; // 0x320 Add
	GetProperty(var_112_int, var_101_string); // 0x321 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x323 PushV
	var_114_string = var_101_string; // 0x324 Mov
	func_883(var_113_bool, var_114_string); // 0x325 NEW_2
	var_90_bool = var_113_bool; // 0x326 Mov
	return 10; // 0x328 Return
	
Label_785:
	var_119_int = 1; // 0x311 PushI
	var_98_int = var_98_int + var_119_int; // 0x312 Add2
	goto Label_775; // 0x313 Jump
}


func_905(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x389 PushV
	self(var_11_object); // 0x38a Func
	var_9_object = var_11_object; // 0x38c Mov
	return 2; // 0x38d Return
}


func_911(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x38f PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x390 Or
	var_49_float = sqrt(var_50_int); // 0x391 Sqrt2
	var_51_float = 0.0; // 0x392 PushF
	var_52_bool = var_49_float < var_51_float; // 0x393 LT
	if(var_52_bool == 0) goto Label_919; // 0x394 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x395 MovV
	return 2; // 0x396 Return
	
Label_919:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x397 Div2
	return 2; // 0x398 Return
}


func_1039()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x40f PushV
	var_101_int = 773; // 0x410 PushI
	var_102_int = 1; // 0x411 PushI
	var_103_int = 540274; // 0x412 PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x413 Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x415 PushV
	var_105_object = var_100_object; // 0x416 Mov
	var_106_int = 699; // 0x417 MovI
	func_1104(var_104_bool, var_105_object, var_106_int); // 0x418 NEW_2
	return 2; // 0x41a Return
}


func_921(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x399 PushV
	GetVariable(var_184_string, var_186_int); // 0x39a Func
	var_183_int = var_186_int; // 0x39c Mov
	return 2; // 0x39d Return
}


func_1052()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x41c PushV
	var_81_int = 704; // 0x41d PushI
	var_82_int = 1; // 0x41e PushI
	var_83_int = 535687; // 0x41f PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0x420 Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0x422 PushV
	var_85_object = var_80_object; // 0x423 Mov
	var_86_int = 699; // 0x424 MovI
	func_1104(var_84_bool, var_85_object, var_86_int); // 0x425 NEW_2
	return 2; // 0x427 Return
}


func_926(var_43_string, var_44_bool)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x39e PushV
	FindActor(var_46_object, var_43_string); // 0x39f Func
	var_47_bool = var_46_object == 0; // 0x3a1 Not
	if(var_47_bool == 0) goto Label_938; // 0x3a2 JumpB
	var_48_string = "Door "; // 0x3a3 PushS
	var_49_int = var_48_string + var_43_string; // 0x3a4 Add
	var_50_string = " not found"; // 0x3a5 PushS
	var_51_int = var_49_int + var_50_string; // 0x3a6 Add
	Trace(var_51_int); // 0x3a7 Func
	goto Label_941; // 0x3a9 Jump
	
Label_941:
	return 2; // 0x3ad Return
	
Label_938:
	var_52_string = "locked"; // 0x3aa PushS
	SetProperty(var_52_string, var_44_bool); // 0x3ab ObjFunc
}


func_809(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x329 PushV
	var_133_string = "d"; // 0x32a PushS
	var_134_int = 0; // 0x32b PushV
	func_943(var_134_int); // 0x32c NEW_2
	var_140_int = var_133_string + var_134_int; // 0x32e Add
	var_141_string = "m"; // 0x32f PushS
	var_128_string = var_140_int + var_141_string; // 0x330 Add2
	var_129_int = 0; // 0x331 MovI
	
Label_818:
	var_142_int = 1; // 0x332 PushI
	if(var_142_int == 0) goto Label_831; // 0x333 JumpB
	var_143_int = 1; // 0x334 PushI
	var_144_int = var_129_int + var_143_int; // 0x335 Add
	var_145_int = var_128_string + var_144_int; // 0x336 Add
	HasProperty(var_145_int, var_130_bool); // 0x337 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x339 Not
	if(var_146_bool == 0) goto Label_828; // 0x33a JumpB
	goto Label_831; // 0x33b Jump
	
Label_831:
	var_147_bool = var_129_int == 0; // 0x33f Not
	if(var_147_bool == 0) goto Label_835; // 0x340 JumpB
	var_121_bool = 0; // 0x341 MovB
	return 10; // 0x342 Return
	
Label_835:
	var_131_int = 0; // 0x343 MovI
	var_148_int = 1; // 0x344 PushI
	var_149_bool = var_129_int > var_148_int; // 0x345 GT
	if(var_149_bool == 0) goto Label_841; // 0x346 JumpB
	irand(var_131_int, var_129_int); // 0x347 Func
	
Label_841:
	var_150_int = 1; // 0x349 PushI
	var_151_int = var_131_int + var_150_int; // 0x34a Add
	var_152_int = var_128_string + var_151_int; // 0x34b Add
	GetProperty(var_152_int, var_132_string); // 0x34c ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x34e PushV
	var_154_string = var_132_string; // 0x34f Mov
	func_883(var_153_bool, var_154_string); // 0x350 NEW_2
	var_121_bool = var_153_bool; // 0x351 Mov
	return 10; // 0x353 Return
	
Label_828:
	var_155_int = 1; // 0x33c PushI
	var_129_int = var_129_int + var_155_int; // 0x33d Add2
	goto Label_818; // 0x33e Jump
}


func_1065()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x429 PushV
	var_63_int = 702; // 0x42a PushI
	var_64_int = 1; // 0x42b PushI
	var_65_int = 535685; // 0x42c PushI
	CreateDiaryEntry(var_62_object, var_63_int, var_64_int, var_65_int); // 0x42d Func
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0; // 0x42f PushV
	var_67_object = var_62_object; // 0x430 Mov
	var_68_int = 699; // 0x431 MovI
	func_1104(var_66_bool, var_67_object, var_68_int); // 0x432 NEW_2
	return 2; // 0x434 Return
}


func_943(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x3af PushV
	GetGameTime(var_136_float); // 0x3b0 Func
	var_137_int = 1; // 0x3b2 PushI
	var_138_int = 0; // 0x3b3 PushV
	var_139_int = 24; // 0x3b4 PushI
	var_138_int = var_136_float / var_136_float; // 0x3b5 Div2
	var_134_int = var_137_int + var_138_int; // 0x3b6 Add2
	return 2; // 0x3b7 Return
}


func_1078()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x436 PushV
	var_20_int = 703; // 0x437 PushI
	var_21_int = 1; // 0x438 PushI
	var_22_int = 535686; // 0x439 PushI
	CreateDiaryEntry(var_19_object, var_20_int, var_21_int, var_22_int); // 0x43a Func
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0; // 0x43c PushV
	var_24_object = var_19_object; // 0x43d Mov
	var_25_int = 699; // 0x43e MovI
	func_1104(var_23_bool, var_24_object, var_25_int); // 0x43f NEW_2
	return 2; // 0x441 Return
}


func_696()
{
	var_260_bool = 0; var_261_bool = 0; // 0x2b8 PushV
	var_262_bool = 1; // 0x2b9 PushB
	CameraSwitchToNormal(var_262_bool); // 0x2ba Func
	var_263_bool = 0; // 0x2bc PushV
	func_1157(var_263_bool); // 0x2bd NEW_2
	if(var_263_bool == 0) goto Label_705; // 0x2bf JumpB
	goto Label_713; // 0x2c0 Jump
	
Label_713:
	return 2; // 0x2c9 Return
	
Label_705:
	var_264_string = "head"; // 0x2c1 PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x2c2 Func
	var_265_bool = var_261_bool; // 0x2c4 Push
	if(var_265_bool == 0) goto Label_713; // 0x2c5 JumpB
	var_266_string = "head"; // 0x2c6 PushS
	UnlookAsync(var_266_string); // 0x2c7 Func
}


func_185(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0xba PushV
	func_1157(var_191_bool); // 0xbb NEW_2
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
	func_868(var_194_string, var_195_bool); // 0xcb NEW_2
	var_2_object = var_190_string; // 0xcd TMov
	return 0; // 0xce Return
	
Label_202:
	var_195_bool = 1; // 0xca MovB
}


func_952()
{
	var_57_string = "game_final"; // 0x3b9 PushS
	var_58_int = 1; // 0x3ba PushI
	SetVariable(var_57_string, var_58_int); // 0x3bb Func
	return 0; // 0x3bd Return
}


func_958()
{
	var_14_string = "game_final"; // 0x3bf PushS
	var_15_int = 2; // 0x3c0 PushI
	SetVariable(var_14_string, var_15_int); // 0x3c1 Func
	return 0; // 0x3c3 Return
}


func_577()
{
	
Label_577:
	Hold(); // 0x241 Func
	goto Label_577; // 0x243 Jump
}


func_1091(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x443 PushV
	GetDiaryRoot(var_34_object); // 0x444 Func
	var_35_bool = var_34_object == 0; // 0x446 Not
	if(var_35_bool == 0) goto Label_1101; // 0x447 JumpB
	var_36_string = "Can't retrieve diary root"; // 0x448 PushS
	Trace(var_36_string); // 0x449 Func
	var_32_object = 0; // 0x44b MovB
	return 2; // 0x44c Return
	
Label_1101:
	var_32_object = var_34_object; // 0x44d Mov
	return 2; // 0x44e Return
}


func_964()
{
	var_75_string = "game_final"; // 0x3c5 PushS
	var_76_int = 3; // 0x3c6 PushI
	SetVariable(var_75_string, var_76_int); // 0x3c7 Func
	return 0; // 0x3c9 Return
}


func_714(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2ca PushV
	var_88_string = "voice_common"; // 0x2cb PushS
	GetVariable(var_88_string, var_86_int); // 0x2cc Func
	var_89_int = var_86_int; // 0x2ce Push
	if(var_89_int == 0) goto Label_752; // 0x2cf JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2d0 PushV
	var_91_object = var_80_object; // 0x2d1 Mov
	func_772(var_91_object); // 0x2d2 NEW_2
	var_120_bool = var_90_bool == 0; // 0x2d4 Not
	if(var_120_bool == 0) goto Label_734; // 0x2d5 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2d6 PushV
	var_122_object = var_80_object; // 0x2d7 Mov
	func_809(var_122_object); // 0x2d8 NEW_2
	var_156_bool = var_121_bool == 0; // 0x2da Not
	if(var_156_bool == 0) goto Label_734; // 0x2db JumpB
	var_79_bool = 0; // 0x2dc MovB
	return 4; // 0x2dd Return
	
Label_734:
	var_157_int = 2; // 0x2de PushI
	irand(var_87_int, var_157_int); // 0x2df Func
	var_158_int = var_87_int; // 0x2e1 Push
	if(var_158_int == 0) goto Label_747; // 0x2e2 JumpB
	var_159_string = "voice_common"; // 0x2e3 PushS
	var_160_int = 1; // 0x2e4 PushI
	var_161_int = var_86_int + var_160_int; // 0x2e5 Add
	var_162_int = 3; // 0x2e6 PushI
	var_163_int = var_161_int / var_162_int; // 0x2e7 Mod
	SetVariable(var_159_string, var_163_int); // 0x2e8 Func
	goto Label_751; // 0x2ea Jump
	
Label_751:
	goto Label_770; // 0x2ef Jump
	
Label_770:
	var_79_bool = 1; // 0x302 MovB
	return 4; // 0x303 Return
	
Label_747:
	var_164_string = "voice_common"; // 0x2eb PushS
	var_165_int = 0; // 0x2ec PushI
	SetVariable(var_164_string, var_165_int); // 0x2ed Func
	
Label_752:
	var_166_bool = 0; var_167_object = Obj(); // 0x2f0 PushV
	var_167_object = var_80_object; // 0x2f1 Mov
	func_809(var_167_object); // 0x2f2 NEW_2
	var_168_bool = var_166_bool == 0; // 0x2f4 Not
	if(var_168_bool == 0) goto Label_766; // 0x2f5 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2f6 PushV
	var_170_object = var_80_object; // 0x2f7 Mov
	func_772(var_170_object); // 0x2f8 NEW_2
	var_171_bool = var_169_bool == 0; // 0x2fa Not
	if(var_171_bool == 0) goto Label_766; // 0x2fb JumpB
	var_79_bool = 0; // 0x2fc MovB
	return 4; // 0x2fd Return
	
Label_766:
	var_172_string = "voice_common"; // 0x2fe PushS
	var_173_int = 1; // 0x2ff PushI
	SetVariable(var_172_string, var_173_int); // 0x300 Func
}


func_970()
{
	var_43_string = ""; var_44_bool = 0; // 0x3cb PushV
	var_43_string = "isobor@door1"; // 0x3cc MovS
	var_44_bool = 0; // 0x3cd MovB
	func_926(var_43_string, var_44_bool); // 0x3ce NEW_2
	return 0; // 0x3d0 Return
}


func_1104(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; // 0x450 PushV
	var_32_object = Obj(); // 0x451 PushV
	func_1091(var_32_object); // 0x452 NEW_2
	var_29_object = var_32_object; // 0x453 Mov
	Find(var_25_int, var_30_object); // 0x455 ObjFunc
	var_37_bool = var_30_object == 0; // 0x457 Not
	if(var_37_bool == 0) goto Label_1119; // 0x458 JumpB
	var_38_string = "Can't find diary parent with id: "; // 0x459 PushS
	var_39_int = var_38_string + var_25_int; // 0x45a Add
	Trace(var_39_int); // 0x45b Func
	var_23_bool = 0; // 0x45d MovB
	return 6; // 0x45e Return
	
Label_1119:
	AddChild(var_24_object); // 0x45f ObjFunc
	var_40_int = 7; // 0x461 PushI
	SendWorldWndMessage(var_40_int); // 0x462 Func
	GetCategory(var_31_int); // 0x464 ObjFunc
	SetDiarySection(var_31_int); // 0x466 Func
	var_23_bool = 0; // 0x468 MovB
	return 6; // 0x469 Return
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
	func_1003(var_182_object); // 0x59 NEW_2
	var_189_bool = var_181_bool == 0; // 0x5b Not
	if(var_189_bool == 0) goto Label_138; // 0x5c JumpB
	var_190_string = ""; // 0x5d PushV
	var_190_string = "Neutral"; // 0x5e MovS
	func_185(var_175_object, var_190_string); // 0x5f NEW_2
	var_207_int = 535541; // 0x61 PushI
	SetMessage(var_207_int); // 0x62 TObjFunc
	ClearReplies(); // 0x64 TObjFunc
	var_208_int = 535542; // 0x66 PushI
	var_209_int = 37226; // 0x67 PushI
	var_210_int = 37225; // 0x68 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x69 TObjFunc
	var_211_int = 540019; // 0x6b PushI
	var_212_int = 41991; // 0x6c PushI
	var_213_int = 41990; // 0x6d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x6e TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x70 PushV
	var_215_object = var_1_object; // 0x71 MovT
	func_1015(var_215_object); // 0x72 NEW_2
	if(var_214_bool == 0) goto Label_122; // 0x74 JumpB
	var_220_int = 535545; // 0x75 PushI
	var_221_int = 42317; // 0x76 PushI
	var_222_int = 37228; // 0x77 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x78 TObjFunc
	
Label_122:
	var_223_bool = 0; var_224_object = Obj(); // 0x7a PushV
	var_224_object = var_1_object; // 0x7b MovT
	func_1027(var_224_object); // 0x7c NEW_2
	if(var_223_bool == 0) goto Label_132; // 0x7e JumpB
	var_229_int = 535559; // 0x7f PushI
	var_230_int = 37243; // 0x80 PushI
	var_231_int = 37242; // 0x81 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x82 TObjFunc
	
Label_132:
	var_232_int = 540276; // 0x84 PushI
	var_233_int = 42323; // 0x85 PushI
	var_234_int = 42256; // 0x86 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x87 TObjFunc
	goto Label_155; // 0x89 Jump
	
Label_155:
	var_235_bool = 0; // 0x9b PushV
	func_1157(var_235_bool); // 0x9c NEW_2
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
	func_852(var_237_string); // 0xa6 NEW_2
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
	var_254_int = 535564; // 0x8e PushI
	SetMessage(var_254_int); // 0x8f TObjFunc
	ClearReplies(); // 0x91 TObjFunc
	var_255_int = 535565; // 0x93 PushI
	var_256_int = -1; // 0x94 PushI
	var_257_int = 37248; // 0x95 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x96 TObjFunc
	goto Label_155; // 0x98 Jump
}


func_977()
{
	var_93_string = "game_final"; // 0x3d2 PushS
	var_94_int = 4; // 0x3d3 PushI
	SetVariable(var_93_string, var_94_int); // 0x3d4 Func
	return 0; // 0x3d6 Return
}


func_852(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x354 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x355 Func
	var_244_bool = var_241_bool; // 0x357 Push
	if(var_244_bool == 0) goto Label_863; // 0x358 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x359 Func
	var_245_bool = 0; // 0x35b PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x35c Func
	goto Label_867; // 0x35e Jump
	
Label_867:
	return 6; // 0x363 Return
	
Label_863:
	var_246_string = "Can't find lsh animation : "; // 0x35f PushS
	var_247_int = var_246_string + var_237_string; // 0x360 Add
	Trace(var_247_int); // 0x361 Func
}


func_983()
{
	func_1039(); // 0x3d9 NEW_2
	return 0; // 0x3db Return
}


func_988()
{
	func_1078(); // 0x3de NEW_2
	return 0; // 0x3e0 Return
}


func_993()
{
	func_1052(); // 0x3e3 NEW_2
	return 0; // 0x3e5 Return
}


func_868(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x364 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x365 Func
	var_204_bool = var_201_bool; // 0x367 Push
	if(var_204_bool == 0) goto Label_878; // 0x368 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x369 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x36b Func
	goto Label_882; // 0x36d Jump
	
Label_882:
	return 6; // 0x372 Return
	
Label_878:
	var_205_string = "Can't find lsh animation : "; // 0x36e PushS
	var_206_int = var_205_string + var_194_string; // 0x36f Add
	Trace(var_206_int); // 0x370 Func
}


func_998()
{
	func_1065(); // 0x3e8 NEW_2
	return 0; // 0x3ea Return
}


func_1003(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x3ec PushV
	var_184_string = "game_final"; // 0x3ed MovS
	func_921(var_183_int, var_184_string); // 0x3ee NEW_2
	var_187_int = 0; // 0x3f0 PushI
	var_188_bool = var_183_int != var_187_int; // 0x3f1 Neq
	if(var_188_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_181_bool = 1; // 0x3f3 MovB
	return 0; // 0x3f4 Return
	
Label_1013:
	var_181_bool = 0; // 0x3f5 MovB
	return 0; // 0x3f6 Return
}


func_1132(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x46c PushV
	var_73_string = "branch"; // 0x46d PushS
	GetVariable(var_73_string, var_72_int); // 0x46e Func
	var_74_int = 0; // 0x470 PushI
	var_75_bool = var_72_int == var_74_int; // 0x471 Eq
	if(var_75_bool == 0) goto Label_1142; // 0x472 JumpB
	var_70_int = 1; // 0x473 MovI
	return 2; // 0x474 Return
	
Label_1142:
	var_76_int = 1; // 0x476 PushI
	var_77_bool = var_72_int == var_76_int; // 0x477 Eq
	if(var_77_bool == 0) goto Label_1147; // 0x478 JumpB
	var_70_int = 2; // 0x479 MovI
	return 2; // 0x47a Return
	
Label_1147:
	var_70_int = 3; // 0x47b MovI
	return 2; // 0x47c Return
}


func_625(var_8_bool)
{
	var_8_bool = 1; // 0x271 MovB
	return 0; // 0x272 Return
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
	func_911(var_45_cvector, var_46_cvector); // 0x28e NEW_2
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
	var_58_bool = 1; // 0x29e PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x29f Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x2a1 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x2a2 PushE
	Rotate(var_59_float, var_60_float); // 0x2a3 Func
	var_61_bool = 0; // 0x2a5 PushV
	func_1157(var_61_bool); // 0x2a6 NEW_2
	if(var_61_bool == 0) goto Label_682; // 0x2a8 JumpB
	goto Label_690; // 0x2a9 Jump
	
Label_690:
	CameraWaitForPlayFinish(); // 0x2b2 Func
	ResumeWorld(); // 0x2b4 Func
	var_18_bool = 1; // 0x2b6 MovB
	return 18; // 0x2b7 Return
	
Label_682:
	var_62_string = "head"; // 0x2aa PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x2ab Func
	var_63_bool = var_38_bool; // 0x2ad Push
	if(var_63_bool == 0) goto Label_690; // 0x2ae JumpB
	var_64_string = "head"; // 0x2af PushS
	LookAsyncCamera(var_64_string); // 0x2b0 Func
}


func_883(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x373 PushV
	var_117_bool = 0; // 0x374 PushV
	func_1157(var_117_bool); // 0x375 NEW_2
	if(var_117_bool == 0) goto Label_896; // 0x377 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x378 Func
	var_118_bool = var_116_bool; // 0x37a Push
	if(var_118_bool == 0) goto Label_896; // 0x37b JumpB
	lshPlaySpeech(var_114_string); // 0x37c Func
	var_113_bool = 1; // 0x37e MovB
	return 2; // 0x37f Return
	
Label_896:
	var_113_bool = 0; // 0x380 MovB
	return 2; // 0x381 Return
}


func_1015(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x3f8 PushV
	var_217_string = "d12q01BurahInSobor"; // 0x3f9 MovS
	func_921(var_216_int, var_217_string); // 0x3fa NEW_2
	var_218_int = 0; // 0x3fc PushI
	var_219_bool = var_216_int != var_218_int; // 0x3fd Neq
	if(var_219_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_214_bool = 1; // 0x3ff MovB
	return 0; // 0x400 Return
	
Label_1025:
	var_214_bool = 0; // 0x401 MovB
	return 0; // 0x402 Return
}


func_1149(var_67_int)
{
	var_67_int = 515532; // 0x47d MovI
	return 0; // 0x47e Return
}


func_1151(var_66_int)
{
	var_66_int = 514840; // 0x47f MovI
	return 0; // 0x480 Return
}


