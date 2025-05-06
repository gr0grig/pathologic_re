task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_object = Obj(); // 0x24 PushV
	var_11_object = var_10_bool; // 0x25 Mov
	func_1905(var_11_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x2a PushV
	var_12_object = var_10_bool; // 0x2b Mov
	func_1519(var_12_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_12_int = 1; // 0xe2 PushI
	if(var_12_int == 0) goto Label_867; // 0xe3 JumpB
	func_1614(); // 0xe5 Call
	var_14_int = 15137; // 0xe7 PushI
	var_15_bool = var_11_bool == var_14_int; // 0xe8 Eq
	if(var_15_bool == 0) goto Label_239; // 0xe9 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xea PushV
	var_16_object = var_1_object; // 0xeb MovT
	var_17_object = var_0_object; // 0xec MovT
	func_1704(); // 0xed Call
	
Label_239:
	var_20_int = 15149; // 0xef PushI
	var_21_bool = var_11_bool == var_20_int; // 0xf0 Eq
	if(var_21_bool == 0) goto Label_257; // 0xf1 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xf2 PushV
	var_22_object = var_1_object; // 0xf3 MovT
	var_23_object = var_0_object; // 0xf4 MovT
	func_1710(var_23_object); // 0xf5 Call
	var_41_object = Obj(); var_42_object = Obj(); // 0xf7 PushV
	var_41_object = var_1_object; // 0xf8 MovT
	var_42_object = var_0_object; // 0xf9 MovT
	func_1692(); // 0xfa Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xfc PushV
	var_45_object = var_1_object; // 0xfd MovT
	var_46_object = var_0_object; // 0xfe MovT
	func_1749(var_46_object); // 0xff Call
	
Label_257:
	var_56_int = 15150; // 0x101 PushI
	var_57_bool = var_11_bool == var_56_int; // 0x102 Eq
	if(var_57_bool == 0) goto Label_275; // 0x103 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x104 PushV
	var_58_object = var_1_object; // 0x105 MovT
	var_59_object = var_0_object; // 0x106 MovT
	func_1710(var_59_object); // 0x107 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0x109 PushV
	var_60_object = var_1_object; // 0x10a MovT
	var_61_object = var_0_object; // 0x10b MovT
	func_1692(); // 0x10c Call
	var_62_object = Obj(); var_63_object = Obj(); // 0x10e PushV
	var_62_object = var_1_object; // 0x10f MovT
	var_63_object = var_0_object; // 0x110 MovT
	func_1749(var_63_object); // 0x111 Call
	
Label_275:
	var_64_int = 15155; // 0x113 PushI
	var_65_bool = var_11_bool == var_64_int; // 0x114 Eq
	if(var_65_bool == 0) goto Label_283; // 0x115 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0x116 PushV
	var_66_object = var_1_object; // 0x117 MovT
	var_67_object = var_0_object; // 0x118 MovT
	func_1760(); // 0x119 Call
	
Label_283:
	var_70_int = 15109; // 0x11b PushI
	var_71_bool = var_10_string == var_70_int; // 0x11c Eq
	if(var_71_bool == 0) goto Label_345; // 0x11d JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x11e PushV
	var_72_object = var_1_object; // 0x11f MovT
	var_73_object = var_0_object; // 0x120 MovT
	func_1698(); // 0x121 Call
	var_76_string = ""; // 0x123 PushV
	var_76_string = "Neutral"; // 0x124 MovS
	func_209(var_11_bool, var_76_string); // 0x125 Call
	var_91_int = 13882; // 0x127 PushI
	SetMessage(var_91_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_92_bool = 0; var_93_object = Obj(); // 0x12c PushV
	var_93_object = var_1_object; // 0x12d MovT
	func_1766(var_92_bool, var_93_object); // 0x12e Call
	if(var_92_bool == 0) goto Label_310; // 0x130 JumpB
	var_96_int = 13883; // 0x131 PushI
	var_97_int = 15111; // 0x132 PushI
	var_98_int = 15110; // 0x133 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x134 TObjFunc
	
Label_310:
	var_99_bool = 0; // 0x136 PushV
	var_99_bool = 0; // 0x137 MovB
	var_100_bool = 0; var_101_object = Obj(); // 0x138 PushV
	var_101_object = var_1_object; // 0x139 MovT
	func_1776(var_101_object); // 0x13a Call
	if(var_100_bool == 0) goto Label_323; // 0x13c JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x13d PushV
	var_109_object = var_1_object; // 0x13e MovT
	func_1788(var_109_object); // 0x13f Call
	if(var_108_bool == 0) goto Label_323; // 0x141 JumpB
	var_99_bool = 1; // 0x142 MovB
	
Label_323:
	if(var_99_bool == 0) goto Label_329; // 0x143 JumpB
	var_114_int = 13906; // 0x144 PushI
	var_115_int = 15138; // 0x145 PushI
	var_116_int = 15137; // 0x146 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x147 TObjFunc
	
Label_329:
	var_117_bool = 0; var_118_object = Obj(); // 0x149 PushV
	var_118_object = var_1_object; // 0x14a MovT
	func_1872(var_118_object); // 0x14b Call
	if(var_117_bool == 0) goto Label_339; // 0x14d JumpB
	var_123_int = 13924; // 0x14e PushI
	var_124_int = 15156; // 0x14f PushI
	var_125_int = 15155; // 0x150 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x151 TObjFunc
	
Label_339:
	var_126_int = 13947; // 0x153 PushI
	var_127_int = -1; // 0x154 PushI
	var_128_int = 15182; // 0x155 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x156 TObjFunc
	return 0; // 0x158 Return
	
Label_345:
	var_129_int = 15156; // 0x159 PushI
	var_130_bool = var_10_string == var_129_int; // 0x15a Eq
	if(var_130_bool == 0) goto Label_368; // 0x15b JumpB
	var_131_string = ""; // 0x15c PushV
	var_131_string = "Neutral"; // 0x15d MovS
	func_209(var_11_bool, var_131_string); // 0x15e Call
	var_132_int = 13925; // 0x160 PushI
	SetMessage(var_132_int); // 0x161 TObjFunc
	ClearReplies(); // 0x163 TObjFunc
	var_133_int = 13926; // 0x165 PushI
	var_134_int = 15158; // 0x166 PushI
	var_135_int = 15157; // 0x167 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x168 TObjFunc
	var_136_int = 13946; // 0x16a PushI
	var_137_int = 15158; // 0x16b PushI
	var_138_int = 15180; // 0x16c PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x16d TObjFunc
	return 0; // 0x16f Return
	
Label_368:
	var_139_int = 15158; // 0x170 PushI
	var_140_bool = var_10_string == var_139_int; // 0x171 Eq
	if(var_140_bool == 0) goto Label_391; // 0x172 JumpB
	var_141_string = ""; // 0x173 PushV
	var_141_string = "Neutral"; // 0x174 MovS
	func_209(var_11_bool, var_141_string); // 0x175 Call
	var_142_int = 13927; // 0x177 PushI
	SetMessage(var_142_int); // 0x178 TObjFunc
	ClearReplies(); // 0x17a TObjFunc
	var_143_int = 13928; // 0x17c PushI
	var_144_int = 15160; // 0x17d PushI
	var_145_int = 15159; // 0x17e PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x17f TObjFunc
	var_146_int = 13945; // 0x181 PushI
	var_147_int = 15160; // 0x182 PushI
	var_148_int = 15178; // 0x183 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_149_int = 15160; // 0x187 PushI
	var_150_bool = var_10_string == var_149_int; // 0x188 Eq
	if(var_150_bool == 0) goto Label_414; // 0x189 JumpB
	var_151_string = ""; // 0x18a PushV
	var_151_string = "Neutral"; // 0x18b MovS
	func_209(var_11_bool, var_151_string); // 0x18c Call
	var_152_int = 13929; // 0x18e PushI
	SetMessage(var_152_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_153_int = 13930; // 0x193 PushI
	var_154_int = 15162; // 0x194 PushI
	var_155_int = 15161; // 0x195 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x196 TObjFunc
	var_156_int = 13944; // 0x198 PushI
	var_157_int = 15162; // 0x199 PushI
	var_158_int = 15176; // 0x19a PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_159_int = 15162; // 0x19e PushI
	var_160_bool = var_10_string == var_159_int; // 0x19f Eq
	if(var_160_bool == 0) goto Label_437; // 0x1a0 JumpB
	var_161_string = ""; // 0x1a1 PushV
	var_161_string = "Neutral"; // 0x1a2 MovS
	func_209(var_11_bool, var_161_string); // 0x1a3 Call
	var_162_int = 13931; // 0x1a5 PushI
	SetMessage(var_162_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_163_int = 13932; // 0x1aa PushI
	var_164_int = 15164; // 0x1ab PushI
	var_165_int = 15163; // 0x1ac PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1ad TObjFunc
	var_166_int = 13941; // 0x1af PushI
	var_167_int = 15173; // 0x1b0 PushI
	var_168_int = 15172; // 0x1b1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_169_int = 15173; // 0x1b5 PushI
	var_170_bool = var_10_string == var_169_int; // 0x1b6 Eq
	if(var_170_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_171_string = ""; // 0x1b8 PushV
	var_171_string = "Neutral"; // 0x1b9 MovS
	func_209(var_11_bool, var_171_string); // 0x1ba Call
	var_172_int = 13942; // 0x1bc PushI
	SetMessage(var_172_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_173_int = 13943; // 0x1c1 PushI
	var_174_int = 15166; // 0x1c2 PushI
	var_175_int = 15174; // 0x1c3 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_176_int = 15164; // 0x1c7 PushI
	var_177_bool = var_10_string == var_176_int; // 0x1c8 Eq
	if(var_177_bool == 0) goto Label_473; // 0x1c9 JumpB
	var_178_string = ""; // 0x1ca PushV
	var_178_string = "Neutral"; // 0x1cb MovS
	func_209(var_11_bool, var_178_string); // 0x1cc Call
	var_179_int = 13933; // 0x1ce PushI
	SetMessage(var_179_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_180_int = 13934; // 0x1d3 PushI
	var_181_int = 15166; // 0x1d4 PushI
	var_182_int = 15165; // 0x1d5 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_183_int = 15166; // 0x1d9 PushI
	var_184_bool = var_10_string == var_183_int; // 0x1da Eq
	if(var_184_bool == 0) goto Label_491; // 0x1db JumpB
	var_185_string = ""; // 0x1dc PushV
	var_185_string = "Neutral"; // 0x1dd MovS
	func_209(var_11_bool, var_185_string); // 0x1de Call
	var_186_int = 13935; // 0x1e0 PushI
	SetMessage(var_186_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_187_int = 13936; // 0x1e5 PushI
	var_188_int = 15168; // 0x1e6 PushI
	var_189_int = 15167; // 0x1e7 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_190_int = 15168; // 0x1eb PushI
	var_191_bool = var_10_string == var_190_int; // 0x1ec Eq
	if(var_191_bool == 0) goto Label_509; // 0x1ed JumpB
	var_192_string = ""; // 0x1ee PushV
	var_192_string = "Neutral"; // 0x1ef MovS
	func_209(var_11_bool, var_192_string); // 0x1f0 Call
	var_193_int = 13937; // 0x1f2 PushI
	SetMessage(var_193_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_194_int = 13938; // 0x1f7 PushI
	var_195_int = 15170; // 0x1f8 PushI
	var_196_int = 15169; // 0x1f9 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_197_int = 15170; // 0x1fd PushI
	var_198_bool = var_10_string == var_197_int; // 0x1fe Eq
	if(var_198_bool == 0) goto Label_527; // 0x1ff JumpB
	var_199_string = ""; // 0x200 PushV
	var_199_string = "Neutral"; // 0x201 MovS
	func_209(var_11_bool, var_199_string); // 0x202 Call
	var_200_int = 13939; // 0x204 PushI
	SetMessage(var_200_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_201_int = 13940; // 0x209 PushI
	var_202_int = -1; // 0x20a PushI
	var_203_int = 15171; // 0x20b PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x20c TObjFunc
	return 0; // 0x20e Return
	
Label_527:
	var_204_int = 15138; // 0x20f PushI
	var_205_bool = var_10_string == var_204_int; // 0x210 Eq
	if(var_205_bool == 0) goto Label_545; // 0x211 JumpB
	var_206_string = ""; // 0x212 PushV
	var_206_string = "Neutral"; // 0x213 MovS
	func_209(var_11_bool, var_206_string); // 0x214 Call
	var_207_int = 13907; // 0x216 PushI
	SetMessage(var_207_int); // 0x217 TObjFunc
	ClearReplies(); // 0x219 TObjFunc
	var_208_int = 13908; // 0x21b PushI
	var_209_int = 15140; // 0x21c PushI
	var_210_int = 15139; // 0x21d PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_211_int = 15140; // 0x221 PushI
	var_212_bool = var_10_string == var_211_int; // 0x222 Eq
	if(var_212_bool == 0) goto Label_563; // 0x223 JumpB
	var_213_string = ""; // 0x224 PushV
	var_213_string = "Neutral"; // 0x225 MovS
	func_209(var_11_bool, var_213_string); // 0x226 Call
	var_214_int = 13909; // 0x228 PushI
	SetMessage(var_214_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_215_int = 13910; // 0x22d PushI
	var_216_int = 15142; // 0x22e PushI
	var_217_int = 15141; // 0x22f PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x230 TObjFunc
	return 0; // 0x232 Return
	
Label_563:
	var_218_int = 15142; // 0x233 PushI
	var_219_bool = var_10_string == var_218_int; // 0x234 Eq
	if(var_219_bool == 0) goto Label_586; // 0x235 JumpB
	var_220_string = ""; // 0x236 PushV
	var_220_string = "Neutral"; // 0x237 MovS
	func_209(var_11_bool, var_220_string); // 0x238 Call
	var_221_int = 13911; // 0x23a PushI
	SetMessage(var_221_int); // 0x23b TObjFunc
	ClearReplies(); // 0x23d TObjFunc
	var_222_int = 13912; // 0x23f PushI
	var_223_int = 15144; // 0x240 PushI
	var_224_int = 15143; // 0x241 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x242 TObjFunc
	var_225_int = 13920; // 0x244 PushI
	var_226_int = 15152; // 0x245 PushI
	var_227_int = 15151; // 0x246 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x247 TObjFunc
	return 0; // 0x249 Return
	
Label_586:
	var_228_int = 15152; // 0x24a PushI
	var_229_bool = var_10_string == var_228_int; // 0x24b Eq
	if(var_229_bool == 0) goto Label_604; // 0x24c JumpB
	var_230_string = ""; // 0x24d PushV
	var_230_string = "Neutral"; // 0x24e MovS
	func_209(var_11_bool, var_230_string); // 0x24f Call
	var_231_int = 13921; // 0x251 PushI
	SetMessage(var_231_int); // 0x252 TObjFunc
	ClearReplies(); // 0x254 TObjFunc
	var_232_int = 13922; // 0x256 PushI
	var_233_int = 15154; // 0x257 PushI
	var_234_int = 15153; // 0x258 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x259 TObjFunc
	return 0; // 0x25b Return
	
Label_604:
	var_235_int = 15154; // 0x25c PushI
	var_236_bool = var_10_string == var_235_int; // 0x25d Eq
	if(var_236_bool == 0) goto Label_622; // 0x25e JumpB
	var_237_string = ""; // 0x25f PushV
	var_237_string = "Neutral"; // 0x260 MovS
	func_209(var_11_bool, var_237_string); // 0x261 Call
	var_238_int = 13923; // 0x263 PushI
	SetMessage(var_238_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_239_int = 14067; // 0x268 PushI
	var_240_int = -1; // 0x269 PushI
	var_241_int = 15304; // 0x26a PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_242_int = 15144; // 0x26e PushI
	var_243_bool = var_10_string == var_242_int; // 0x26f Eq
	if(var_243_bool == 0) goto Label_645; // 0x270 JumpB
	var_244_string = ""; // 0x271 PushV
	var_244_string = "Neutral"; // 0x272 MovS
	func_209(var_11_bool, var_244_string); // 0x273 Call
	var_245_int = 13913; // 0x275 PushI
	SetMessage(var_245_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_246_int = 13914; // 0x27a PushI
	var_247_int = 15146; // 0x27b PushI
	var_248_int = 15145; // 0x27c PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x27d TObjFunc
	var_249_int = 13919; // 0x27f PushI
	var_250_int = -1; // 0x280 PushI
	var_251_int = 15150; // 0x281 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_252_int = 15146; // 0x285 PushI
	var_253_bool = var_10_string == var_252_int; // 0x286 Eq
	if(var_253_bool == 0) goto Label_663; // 0x287 JumpB
	var_254_string = ""; // 0x288 PushV
	var_254_string = "Neutral"; // 0x289 MovS
	func_209(var_11_bool, var_254_string); // 0x28a Call
	var_255_int = 13915; // 0x28c PushI
	SetMessage(var_255_int); // 0x28d TObjFunc
	ClearReplies(); // 0x28f TObjFunc
	var_256_int = 13916; // 0x291 PushI
	var_257_int = 15148; // 0x292 PushI
	var_258_int = 15147; // 0x293 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_259_int = 15148; // 0x297 PushI
	var_260_bool = var_10_string == var_259_int; // 0x298 Eq
	if(var_260_bool == 0) goto Label_681; // 0x299 JumpB
	var_261_string = ""; // 0x29a PushV
	var_261_string = "Neutral"; // 0x29b MovS
	func_209(var_11_bool, var_261_string); // 0x29c Call
	var_262_int = 13917; // 0x29e PushI
	SetMessage(var_262_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_263_int = 13918; // 0x2a3 PushI
	var_264_int = -1; // 0x2a4 PushI
	var_265_int = 15149; // 0x2a5 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2a6 TObjFunc
	return 0; // 0x2a8 Return
	
Label_681:
	var_266_int = 15111; // 0x2a9 PushI
	var_267_bool = var_10_string == var_266_int; // 0x2aa Eq
	if(var_267_bool == 0) goto Label_704; // 0x2ab JumpB
	var_268_string = ""; // 0x2ac PushV
	var_268_string = "Neutral"; // 0x2ad MovS
	func_209(var_11_bool, var_268_string); // 0x2ae Call
	var_269_int = 13884; // 0x2b0 PushI
	SetMessage(var_269_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_270_int = 13885; // 0x2b5 PushI
	var_271_int = 15113; // 0x2b6 PushI
	var_272_int = 15112; // 0x2b7 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x2b8 TObjFunc
	var_273_int = 13905; // 0x2ba PushI
	var_274_int = 15113; // 0x2bb PushI
	var_275_int = 15135; // 0x2bc PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_276_int = 15113; // 0x2c0 PushI
	var_277_bool = var_10_string == var_276_int; // 0x2c1 Eq
	if(var_277_bool == 0) goto Label_727; // 0x2c2 JumpB
	var_278_string = ""; // 0x2c3 PushV
	var_278_string = "Neutral"; // 0x2c4 MovS
	func_209(var_11_bool, var_278_string); // 0x2c5 Call
	var_279_int = 13886; // 0x2c7 PushI
	SetMessage(var_279_int); // 0x2c8 TObjFunc
	ClearReplies(); // 0x2ca TObjFunc
	var_280_int = 13887; // 0x2cc PushI
	var_281_int = 15115; // 0x2cd PushI
	var_282_int = 15114; // 0x2ce PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x2cf TObjFunc
	var_283_int = 13899; // 0x2d1 PushI
	var_284_int = 15128; // 0x2d2 PushI
	var_285_int = 15127; // 0x2d3 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_286_int = 15128; // 0x2d7 PushI
	var_287_bool = var_10_string == var_286_int; // 0x2d8 Eq
	if(var_287_bool == 0) goto Label_750; // 0x2d9 JumpB
	var_288_string = ""; // 0x2da PushV
	var_288_string = "Neutral"; // 0x2db MovS
	func_209(var_11_bool, var_288_string); // 0x2dc Call
	var_289_int = 13900; // 0x2de PushI
	SetMessage(var_289_int); // 0x2df TObjFunc
	ClearReplies(); // 0x2e1 TObjFunc
	var_290_int = 13901; // 0x2e3 PushI
	var_291_int = 15130; // 0x2e4 PushI
	var_292_int = 15129; // 0x2e5 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x2e6 TObjFunc
	var_293_int = 13904; // 0x2e8 PushI
	var_294_int = 15115; // 0x2e9 PushI
	var_295_int = 15133; // 0x2ea PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x2eb TObjFunc
	return 0; // 0x2ed Return
	
Label_750:
	var_296_int = 15130; // 0x2ee PushI
	var_297_bool = var_10_string == var_296_int; // 0x2ef Eq
	if(var_297_bool == 0) goto Label_768; // 0x2f0 JumpB
	var_298_string = ""; // 0x2f1 PushV
	var_298_string = "Neutral"; // 0x2f2 MovS
	func_209(var_11_bool, var_298_string); // 0x2f3 Call
	var_299_int = 13902; // 0x2f5 PushI
	SetMessage(var_299_int); // 0x2f6 TObjFunc
	ClearReplies(); // 0x2f8 TObjFunc
	var_300_int = 13903; // 0x2fa PushI
	var_301_int = 15121; // 0x2fb PushI
	var_302_int = 15131; // 0x2fc PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x2fd TObjFunc
	return 0; // 0x2ff Return
	
Label_768:
	var_303_int = 15115; // 0x300 PushI
	var_304_bool = var_10_string == var_303_int; // 0x301 Eq
	if(var_304_bool == 0) goto Label_791; // 0x302 JumpB
	var_305_string = ""; // 0x303 PushV
	var_305_string = "Neutral"; // 0x304 MovS
	func_209(var_11_bool, var_305_string); // 0x305 Call
	var_306_int = 13888; // 0x307 PushI
	SetMessage(var_306_int); // 0x308 TObjFunc
	ClearReplies(); // 0x30a TObjFunc
	var_307_int = 13889; // 0x30c PushI
	var_308_int = 15117; // 0x30d PushI
	var_309_int = 15116; // 0x30e PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x30f TObjFunc
	var_310_int = 13898; // 0x311 PushI
	var_311_int = 15117; // 0x312 PushI
	var_312_int = 15125; // 0x313 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x314 TObjFunc
	return 0; // 0x316 Return
	
Label_791:
	var_313_int = 15117; // 0x317 PushI
	var_314_bool = var_10_string == var_313_int; // 0x318 Eq
	if(var_314_bool == 0) goto Label_814; // 0x319 JumpB
	var_315_string = ""; // 0x31a PushV
	var_315_string = "Neutral"; // 0x31b MovS
	func_209(var_11_bool, var_315_string); // 0x31c Call
	var_316_int = 13890; // 0x31e PushI
	SetMessage(var_316_int); // 0x31f TObjFunc
	ClearReplies(); // 0x321 TObjFunc
	var_317_int = 13891; // 0x323 PushI
	var_318_int = 15119; // 0x324 PushI
	var_319_int = 15118; // 0x325 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x326 TObjFunc
	var_320_int = 13897; // 0x328 PushI
	var_321_int = -1; // 0x329 PushI
	var_322_int = 15124; // 0x32a PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x32b TObjFunc
	return 0; // 0x32d Return
	
Label_814:
	var_323_int = 15119; // 0x32e PushI
	var_324_bool = var_10_string == var_323_int; // 0x32f Eq
	if(var_324_bool == 0) goto Label_832; // 0x330 JumpB
	var_325_string = ""; // 0x331 PushV
	var_325_string = "Neutral"; // 0x332 MovS
	func_209(var_11_bool, var_325_string); // 0x333 Call
	var_326_int = 13892; // 0x335 PushI
	SetMessage(var_326_int); // 0x336 TObjFunc
	ClearReplies(); // 0x338 TObjFunc
	var_327_int = 13893; // 0x33a PushI
	var_328_int = 15121; // 0x33b PushI
	var_329_int = 15120; // 0x33c PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x33d TObjFunc
	return 0; // 0x33f Return
	
Label_832:
	var_330_int = 15121; // 0x340 PushI
	var_331_bool = var_10_string == var_330_int; // 0x341 Eq
	if(var_331_bool == 0) goto Label_855; // 0x342 JumpB
	var_332_string = ""; // 0x343 PushV
	var_332_string = "Neutral"; // 0x344 MovS
	func_209(var_11_bool, var_332_string); // 0x345 Call
	var_333_int = 13894; // 0x347 PushI
	SetMessage(var_333_int); // 0x348 TObjFunc
	ClearReplies(); // 0x34a TObjFunc
	var_334_int = 13895; // 0x34c PushI
	var_335_int = -1; // 0x34d PushI
	var_336_int = 15122; // 0x34e PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x34f TObjFunc
	var_337_int = 13896; // 0x351 PushI
	var_338_int = -1; // 0x352 PushI
	var_339_int = 15123; // 0x353 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_3_string = 1; // 0x357 TMovB
	var_340_bool = 0; // 0x358 PushV
	func_1690(var_340_bool); // 0x359 Call
	if(var_340_bool == 0) goto Label_863; // 0x35b JumpB
	lshStopAnimation(); // 0x35c Func
	goto Label_865; // 0x35e Jump
	
Label_865:
	return 0; // 0x361 Return
	
Label_863:
	StopAnimation(); // 0x35f Func
	
Label_867:
	return 0; // 0x363 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int)
{
	var_12_int = 1; // 0x422 PushI
	if(var_12_int == 0) goto Label_1518; // 0x423 JumpB
	func_1614(); // 0x425 Call
	var_14_int = 15501; // 0x427 PushI
	var_15_bool = var_11_int == var_14_int; // 0x428 Eq
	if(var_15_bool == 0) goto Label_1071; // 0x429 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x42a PushV
	var_16_object = var_1_object; // 0x42b MovT
	var_17_object = var_0_object; // 0x42c MovT
	func_1731(); // 0x42d Call
	
Label_1071:
	var_20_int = 15528; // 0x42f PushI
	var_21_bool = var_11_int == var_20_int; // 0x430 Eq
	if(var_21_bool == 0) goto Label_1079; // 0x431 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x432 PushV
	var_22_object = var_1_object; // 0x433 MovT
	var_23_object = var_0_object; // 0x434 MovT
	func_1737(); // 0x435 Call
	
Label_1079:
	var_26_int = 15539; // 0x437 PushI
	var_27_bool = var_11_int == var_26_int; // 0x438 Eq
	if(var_27_bool == 0) goto Label_1087; // 0x439 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x43a PushV
	var_28_object = var_1_object; // 0x43b MovT
	var_29_object = var_0_object; // 0x43c MovT
	func_1743(); // 0x43d Call
	
Label_1087:
	var_32_int = 15500; // 0x43f PushI
	var_33_bool = var_10_int == var_32_int; // 0x440 Eq
	if(var_33_bool == 0) goto Label_1162; // 0x441 JumpB
	var_34_string = ""; // 0x442 PushV
	var_34_string = "Neutral"; // 0x443 MovS
	func_1041(var_11_int, var_34_string); // 0x444 Call
	var_49_int = 14280; // 0x446 PushI
	SetMessage(var_49_int); // 0x447 TObjFunc
	ClearReplies(); // 0x449 TObjFunc
	var_50_bool = 0; // 0x44b PushV
	var_50_bool = 0; // 0x44c MovB
	var_51_bool = 0; var_52_object = Obj(); // 0x44d PushV
	var_52_object = var_1_object; // 0x44e MovT
	func_1812(var_52_object); // 0x44f Call
	if(var_51_bool == 0) goto Label_1112; // 0x451 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x452 PushV
	var_60_object = var_1_object; // 0x453 MovT
	func_1824(var_60_object); // 0x454 Call
	if(var_59_bool == 0) goto Label_1112; // 0x456 JumpB
	var_50_bool = 1; // 0x457 MovB
	
Label_1112:
	if(var_50_bool == 0) goto Label_1118; // 0x458 JumpB
	var_65_int = 14281; // 0x459 PushI
	var_66_int = 15502; // 0x45a PushI
	var_67_int = 15501; // 0x45b PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x45c TObjFunc
	
Label_1118:
	var_68_bool = 0; // 0x45e PushV
	var_68_bool = 0; // 0x45f MovB
	var_69_bool = 0; var_70_object = Obj(); // 0x460 PushV
	var_70_object = var_1_object; // 0x461 MovT
	func_1836(var_70_object); // 0x462 Call
	if(var_69_bool == 0) goto Label_1131; // 0x464 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x465 PushV
	var_76_object = var_1_object; // 0x466 MovT
	func_1848(var_76_object); // 0x467 Call
	if(var_75_bool == 0) goto Label_1131; // 0x469 JumpB
	var_68_bool = 1; // 0x46a MovB
	
Label_1131:
	if(var_68_bool == 0) goto Label_1137; // 0x46b JumpB
	var_81_int = 14306; // 0x46c PushI
	var_82_int = 15529; // 0x46d PushI
	var_83_int = 15528; // 0x46e PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x46f TObjFunc
	
Label_1137:
	var_84_bool = 0; // 0x471 PushV
	var_84_bool = 0; // 0x472 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x473 PushV
	var_86_object = var_1_object; // 0x474 MovT
	func_1800(var_86_object); // 0x475 Call
	if(var_85_bool == 0) goto Label_1150; // 0x477 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x478 PushV
	var_92_object = var_1_object; // 0x479 MovT
	func_1860(var_92_object); // 0x47a Call
	if(var_91_bool == 0) goto Label_1150; // 0x47c JumpB
	var_84_bool = 1; // 0x47d MovB
	
Label_1150:
	if(var_84_bool == 0) goto Label_1156; // 0x47e JumpB
	var_97_int = 14317; // 0x47f PushI
	var_98_int = 15540; // 0x480 PushI
	var_99_int = 15539; // 0x481 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x482 TObjFunc
	
Label_1156:
	var_100_int = 14324; // 0x484 PushI
	var_101_int = -1; // 0x485 PushI
	var_102_int = 15546; // 0x486 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_103_int = 15540; // 0x48a PushI
	var_104_bool = var_10_int == var_103_int; // 0x48b Eq
	if(var_104_bool == 0) goto Label_1180; // 0x48c JumpB
	var_105_string = ""; // 0x48d PushV
	var_105_string = "Neutral"; // 0x48e MovS
	func_1041(var_11_int, var_105_string); // 0x48f Call
	var_106_int = 14318; // 0x491 PushI
	SetMessage(var_106_int); // 0x492 TObjFunc
	ClearReplies(); // 0x494 TObjFunc
	var_107_int = 14319; // 0x496 PushI
	var_108_int = 15542; // 0x497 PushI
	var_109_int = 15541; // 0x498 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x499 TObjFunc
	return 0; // 0x49b Return
	
Label_1180:
	var_110_int = 15542; // 0x49c PushI
	var_111_bool = var_10_int == var_110_int; // 0x49d Eq
	if(var_111_bool == 0) goto Label_1198; // 0x49e JumpB
	var_112_string = ""; // 0x49f PushV
	var_112_string = "Neutral"; // 0x4a0 MovS
	func_1041(var_11_int, var_112_string); // 0x4a1 Call
	var_113_int = 14320; // 0x4a3 PushI
	SetMessage(var_113_int); // 0x4a4 TObjFunc
	ClearReplies(); // 0x4a6 TObjFunc
	var_114_int = 14321; // 0x4a8 PushI
	var_115_int = 15544; // 0x4a9 PushI
	var_116_int = 15543; // 0x4aa PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x4ab TObjFunc
	return 0; // 0x4ad Return
	
Label_1198:
	var_117_int = 15544; // 0x4ae PushI
	var_118_bool = var_10_int == var_117_int; // 0x4af Eq
	if(var_118_bool == 0) goto Label_1216; // 0x4b0 JumpB
	var_119_string = ""; // 0x4b1 PushV
	var_119_string = "Neutral"; // 0x4b2 MovS
	func_1041(var_11_int, var_119_string); // 0x4b3 Call
	var_120_int = 14322; // 0x4b5 PushI
	SetMessage(var_120_int); // 0x4b6 TObjFunc
	ClearReplies(); // 0x4b8 TObjFunc
	var_121_int = 14323; // 0x4ba PushI
	var_122_int = -1; // 0x4bb PushI
	var_123_int = 15545; // 0x4bc PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x4bd TObjFunc
	return 0; // 0x4bf Return
	
Label_1216:
	var_124_int = 15529; // 0x4c0 PushI
	var_125_bool = var_10_int == var_124_int; // 0x4c1 Eq
	if(var_125_bool == 0) goto Label_1234; // 0x4c2 JumpB
	var_126_string = ""; // 0x4c3 PushV
	var_126_string = "Neutral"; // 0x4c4 MovS
	func_1041(var_11_int, var_126_string); // 0x4c5 Call
	var_127_int = 14307; // 0x4c7 PushI
	SetMessage(var_127_int); // 0x4c8 TObjFunc
	ClearReplies(); // 0x4ca TObjFunc
	var_128_int = 14308; // 0x4cc PushI
	var_129_int = 15531; // 0x4cd PushI
	var_130_int = 15530; // 0x4ce PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x4cf TObjFunc
	return 0; // 0x4d1 Return
	
Label_1234:
	var_131_int = 15531; // 0x4d2 PushI
	var_132_bool = var_10_int == var_131_int; // 0x4d3 Eq
	if(var_132_bool == 0) goto Label_1252; // 0x4d4 JumpB
	var_133_string = ""; // 0x4d5 PushV
	var_133_string = "Neutral"; // 0x4d6 MovS
	func_1041(var_11_int, var_133_string); // 0x4d7 Call
	var_134_int = 14309; // 0x4d9 PushI
	SetMessage(var_134_int); // 0x4da TObjFunc
	ClearReplies(); // 0x4dc TObjFunc
	var_135_int = 14310; // 0x4de PushI
	var_136_int = 15533; // 0x4df PushI
	var_137_int = 15532; // 0x4e0 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x4e1 TObjFunc
	return 0; // 0x4e3 Return
	
Label_1252:
	var_138_int = 15533; // 0x4e4 PushI
	var_139_bool = var_10_int == var_138_int; // 0x4e5 Eq
	if(var_139_bool == 0) goto Label_1270; // 0x4e6 JumpB
	var_140_string = ""; // 0x4e7 PushV
	var_140_string = "Neutral"; // 0x4e8 MovS
	func_1041(var_11_int, var_140_string); // 0x4e9 Call
	var_141_int = 14311; // 0x4eb PushI
	SetMessage(var_141_int); // 0x4ec TObjFunc
	ClearReplies(); // 0x4ee TObjFunc
	var_142_int = 14312; // 0x4f0 PushI
	var_143_int = 15535; // 0x4f1 PushI
	var_144_int = 15534; // 0x4f2 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x4f3 TObjFunc
	return 0; // 0x4f5 Return
	
Label_1270:
	var_145_int = 15535; // 0x4f6 PushI
	var_146_bool = var_10_int == var_145_int; // 0x4f7 Eq
	if(var_146_bool == 0) goto Label_1288; // 0x4f8 JumpB
	var_147_string = ""; // 0x4f9 PushV
	var_147_string = "Neutral"; // 0x4fa MovS
	func_1041(var_11_int, var_147_string); // 0x4fb Call
	var_148_int = 14313; // 0x4fd PushI
	SetMessage(var_148_int); // 0x4fe TObjFunc
	ClearReplies(); // 0x500 TObjFunc
	var_149_int = 14314; // 0x502 PushI
	var_150_int = 15537; // 0x503 PushI
	var_151_int = 15536; // 0x504 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x505 TObjFunc
	return 0; // 0x507 Return
	
Label_1288:
	var_152_int = 15537; // 0x508 PushI
	var_153_bool = var_10_int == var_152_int; // 0x509 Eq
	if(var_153_bool == 0) goto Label_1306; // 0x50a JumpB
	var_154_string = ""; // 0x50b PushV
	var_154_string = "Neutral"; // 0x50c MovS
	func_1041(var_11_int, var_154_string); // 0x50d Call
	var_155_int = 14315; // 0x50f PushI
	SetMessage(var_155_int); // 0x510 TObjFunc
	ClearReplies(); // 0x512 TObjFunc
	var_156_int = 14316; // 0x514 PushI
	var_157_int = -1; // 0x515 PushI
	var_158_int = 15538; // 0x516 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x517 TObjFunc
	return 0; // 0x519 Return
	
Label_1306:
	var_159_int = 15502; // 0x51a PushI
	var_160_bool = var_10_int == var_159_int; // 0x51b Eq
	if(var_160_bool == 0) goto Label_1324; // 0x51c JumpB
	var_161_string = ""; // 0x51d PushV
	var_161_string = "Neutral"; // 0x51e MovS
	func_1041(var_11_int, var_161_string); // 0x51f Call
	var_162_int = 14282; // 0x521 PushI
	SetMessage(var_162_int); // 0x522 TObjFunc
	ClearReplies(); // 0x524 TObjFunc
	var_163_int = 14283; // 0x526 PushI
	var_164_int = 15504; // 0x527 PushI
	var_165_int = 15503; // 0x528 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_166_int = 15504; // 0x52c PushI
	var_167_bool = var_10_int == var_166_int; // 0x52d Eq
	if(var_167_bool == 0) goto Label_1347; // 0x52e JumpB
	var_168_string = ""; // 0x52f PushV
	var_168_string = "Neutral"; // 0x530 MovS
	func_1041(var_11_int, var_168_string); // 0x531 Call
	var_169_int = 14284; // 0x533 PushI
	SetMessage(var_169_int); // 0x534 TObjFunc
	ClearReplies(); // 0x536 TObjFunc
	var_170_int = 14285; // 0x538 PushI
	var_171_int = 15506; // 0x539 PushI
	var_172_int = 15505; // 0x53a PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x53b TObjFunc
	var_173_int = 14290; // 0x53d PushI
	var_174_int = 15511; // 0x53e PushI
	var_175_int = 15510; // 0x53f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x540 TObjFunc
	return 0; // 0x542 Return
	
Label_1347:
	var_176_int = 15511; // 0x543 PushI
	var_177_bool = var_10_int == var_176_int; // 0x544 Eq
	if(var_177_bool == 0) goto Label_1370; // 0x545 JumpB
	var_178_string = ""; // 0x546 PushV
	var_178_string = "Neutral"; // 0x547 MovS
	func_1041(var_11_int, var_178_string); // 0x548 Call
	var_179_int = 14291; // 0x54a PushI
	SetMessage(var_179_int); // 0x54b TObjFunc
	ClearReplies(); // 0x54d TObjFunc
	var_180_int = 14292; // 0x54f PushI
	var_181_int = 15513; // 0x550 PushI
	var_182_int = 15512; // 0x551 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x552 TObjFunc
	var_183_int = 14299; // 0x554 PushI
	var_184_int = 15520; // 0x555 PushI
	var_185_int = 15519; // 0x556 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x557 TObjFunc
	return 0; // 0x559 Return
	
Label_1370:
	var_186_int = 15520; // 0x55a PushI
	var_187_bool = var_10_int == var_186_int; // 0x55b Eq
	if(var_187_bool == 0) goto Label_1393; // 0x55c JumpB
	var_188_string = ""; // 0x55d PushV
	var_188_string = "Neutral"; // 0x55e MovS
	func_1041(var_11_int, var_188_string); // 0x55f Call
	var_189_int = 14300; // 0x561 PushI
	SetMessage(var_189_int); // 0x562 TObjFunc
	ClearReplies(); // 0x564 TObjFunc
	var_190_int = 14301; // 0x566 PushI
	var_191_int = 15513; // 0x567 PushI
	var_192_int = 15521; // 0x568 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x569 TObjFunc
	var_193_int = 14302; // 0x56b PushI
	var_194_int = 15524; // 0x56c PushI
	var_195_int = 15523; // 0x56d PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x56e TObjFunc
	return 0; // 0x570 Return
	
Label_1393:
	var_196_int = 15524; // 0x571 PushI
	var_197_bool = var_10_int == var_196_int; // 0x572 Eq
	if(var_197_bool == 0) goto Label_1416; // 0x573 JumpB
	var_198_string = ""; // 0x574 PushV
	var_198_string = "Neutral"; // 0x575 MovS
	func_1041(var_11_int, var_198_string); // 0x576 Call
	var_199_int = 14303; // 0x578 PushI
	SetMessage(var_199_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_200_int = 14304; // 0x57d PushI
	var_201_int = 15513; // 0x57e PushI
	var_202_int = 15525; // 0x57f PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x580 TObjFunc
	var_203_int = 14305; // 0x582 PushI
	var_204_int = -1; // 0x583 PushI
	var_205_int = 15527; // 0x584 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_206_int = 15513; // 0x588 PushI
	var_207_bool = var_10_int == var_206_int; // 0x589 Eq
	if(var_207_bool == 0) goto Label_1434; // 0x58a JumpB
	var_208_string = ""; // 0x58b PushV
	var_208_string = "Neutral"; // 0x58c MovS
	func_1041(var_11_int, var_208_string); // 0x58d Call
	var_209_int = 14293; // 0x58f PushI
	SetMessage(var_209_int); // 0x590 TObjFunc
	ClearReplies(); // 0x592 TObjFunc
	var_210_int = 14294; // 0x594 PushI
	var_211_int = 15515; // 0x595 PushI
	var_212_int = 15514; // 0x596 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x597 TObjFunc
	return 0; // 0x599 Return
	
Label_1434:
	var_213_int = 15515; // 0x59a PushI
	var_214_bool = var_10_int == var_213_int; // 0x59b Eq
	if(var_214_bool == 0) goto Label_1452; // 0x59c JumpB
	var_215_string = ""; // 0x59d PushV
	var_215_string = "Neutral"; // 0x59e MovS
	func_1041(var_11_int, var_215_string); // 0x59f Call
	var_216_int = 14295; // 0x5a1 PushI
	SetMessage(var_216_int); // 0x5a2 TObjFunc
	ClearReplies(); // 0x5a4 TObjFunc
	var_217_int = 14296; // 0x5a6 PushI
	var_218_int = 15517; // 0x5a7 PushI
	var_219_int = 15516; // 0x5a8 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x5a9 TObjFunc
	return 0; // 0x5ab Return
	
Label_1452:
	var_220_int = 15517; // 0x5ac PushI
	var_221_bool = var_10_int == var_220_int; // 0x5ad Eq
	if(var_221_bool == 0) goto Label_1470; // 0x5ae JumpB
	var_222_string = ""; // 0x5af PushV
	var_222_string = "Neutral"; // 0x5b0 MovS
	func_1041(var_11_int, var_222_string); // 0x5b1 Call
	var_223_int = 14297; // 0x5b3 PushI
	SetMessage(var_223_int); // 0x5b4 TObjFunc
	ClearReplies(); // 0x5b6 TObjFunc
	var_224_int = 14298; // 0x5b8 PushI
	var_225_int = -1; // 0x5b9 PushI
	var_226_int = 15518; // 0x5ba PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x5bb TObjFunc
	return 0; // 0x5bd Return
	
Label_1470:
	var_227_int = 15506; // 0x5be PushI
	var_228_bool = var_10_int == var_227_int; // 0x5bf Eq
	if(var_228_bool == 0) goto Label_1488; // 0x5c0 JumpB
	var_229_string = ""; // 0x5c1 PushV
	var_229_string = "Neutral"; // 0x5c2 MovS
	func_1041(var_11_int, var_229_string); // 0x5c3 Call
	var_230_int = 14286; // 0x5c5 PushI
	SetMessage(var_230_int); // 0x5c6 TObjFunc
	ClearReplies(); // 0x5c8 TObjFunc
	var_231_int = 14287; // 0x5ca PushI
	var_232_int = 15508; // 0x5cb PushI
	var_233_int = 15507; // 0x5cc PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x5cd TObjFunc
	return 0; // 0x5cf Return
	
Label_1488:
	var_234_int = 15508; // 0x5d0 PushI
	var_235_bool = var_10_int == var_234_int; // 0x5d1 Eq
	if(var_235_bool == 0) goto Label_1506; // 0x5d2 JumpB
	var_236_string = ""; // 0x5d3 PushV
	var_236_string = "Neutral"; // 0x5d4 MovS
	func_1041(var_11_int, var_236_string); // 0x5d5 Call
	var_237_int = 14288; // 0x5d7 PushI
	SetMessage(var_237_int); // 0x5d8 TObjFunc
	ClearReplies(); // 0x5da TObjFunc
	var_238_int = 14289; // 0x5dc PushI
	var_239_int = -1; // 0x5dd PushI
	var_240_int = 15509; // 0x5de PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x5df TObjFunc
	return 0; // 0x5e1 Return
	
Label_1506:
	var_3_string = 1; // 0x5e2 TMovB
	var_241_bool = 0; // 0x5e3 PushV
	func_1690(var_241_bool); // 0x5e4 Call
	if(var_241_bool == 0) goto Label_1514; // 0x5e6 JumpB
	lshStopAnimation(); // 0x5e7 Func
	goto Label_1516; // 0x5e9 Jump
	
Label_1516:
	return 0; // 0x5ec Return
	
Label_1514:
	StopAnimation(); // 0x5ea Func
	
Label_1518:
	return 0; // 0x5ee Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	func_1904(); // 0x7 Call
	var_10_bool = 0; // 0x9 PushV
	func_1531(var_10_bool); // 0xa Call
	var_13_bool = var_10_bool == 0; // 0xc Not
	if(var_13_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_14_string = ""; // 0x13 PushV
	var_14_string = "Neutral"; // 0x14 MovS
	func_1596(var_14_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_1536(var_31_bool)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; // 0x600 PushV
	GetPosition(var_42_cvector); // 0x601 ObjFunc
	GetEyesHeight(var_41_float); // 0x603 ObjFunc
	var_49_float = GetByIndex(var_42_cvector, 1); // 0x605 PushE
	var_49_float = var_49_float + var_41_float; // 0x606 Add2
	SetByIndex(var_42_cvector, 1) = var_49_float; // 0x607 PopE
	GetPosition(var_43_cvector); // 0x608 Func
	GetEyesHeight(var_41_float); // 0x60a Func
	var_50_float = GetByIndex(var_43_cvector, 1); // 0x60c PushE
	var_50_float = var_50_float + var_41_float; // 0x60d Add2
	SetByIndex(var_43_cvector, 1) = var_50_float; // 0x60e PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x60f Sub2
	var_51_float = GetByIndex(var_44_cvector, 1); // 0x610 PushE
	var_51_float = 0; // 0x611 MovI
	SetByIndex(var_44_cvector, 1) = var_51_float; // 0x612 PopE
	var_52_int = var_44_cvector | var_44_cvector; // 0x613 Or
	var_53_float = sqrt(var_52_int); // 0x614 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x615 Div2
	var_45_cvector = -var_44_cvector; // 0x616 Neg2
	var_54_int = 70; // 0x617 PushI
	var_55_float = var_44_cvector * var_54_int; // 0x618 Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x619 PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x61a PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x61b Xor2
	func_1621(var_56_cvector, var_57_cvector); // 0x61c Call
	var_64_int = 25; // 0x61e PushI
	var_65_float = var_56_cvector * var_64_int; // 0x61f Mult
	var_66_int = var_55_float + var_65_float; // 0x620 Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x621 PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x622 Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x623 Add2
	IsOverrideActive(var_48_bool); // 0x624 Func
	var_68_bool = var_48_bool; // 0x626 Push
	if(var_68_bool == 0) goto Label_1578; // 0x627 JumpB
	var_31_bool = 0; // 0x628 MovB
	return 16; // 0x629 Return
	
Label_1578:
	StopWorld(); // 0x62a Func
	CameraTransit(var_47_cvector, var_45_cvector); // 0x62c Func
	var_69_float = GetByIndex(var_46_cvector, 0); // 0x62e PushE
	var_70_float = GetByIndex(var_46_cvector, 2); // 0x62f PushE
	Rotate(var_69_float, var_70_float); // 0x630 Func
	CameraWaitForPlayFinish(); // 0x632 Func
	ResumeWorld(); // 0x634 Func
	var_31_bool = 1; // 0x636 MovB
	return 16; // 0x637 Return
}


func_1671(var_12_bool, var_13_int)
{
	var_14_int = 0; // 0x688 PushV
	func_1662(var_14_int); // 0x689 Call
	var_12_bool = var_14_int == var_13_int; // 0x68b Eq2
	return 0; // 0x68c Return
}


func_1800(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x709 PushV
	var_88_string = "d11q02"; // 0x70a MovS
	func_1631(var_87_int, var_88_string); // 0x70b Call
	var_89_int = 1; // 0x70d PushI
	var_90_bool = var_87_int == var_89_int; // 0x70e Eq
	if(var_90_bool == 0) goto Label_1810; // 0x70f JumpB
	var_85_bool = 1; // 0x710 MovB
	return 0; // 0x711 Return
	
Label_1810:
	var_85_bool = 0; // 0x712 MovB
	return 0; // 0x713 Return
}


func_1677(var_251_bool)
{
	var_252_bool = 0; var_253_bool = 0; // 0x68d PushV
	var_254_string = ""; // 0x68e PushV
	var_254_string = "No"; // 0x68f MovS
	func_1596(var_254_string); // 0x690 Call
	lshWaitForAnimEnd(var_253_bool); // 0x692 Func
	var_251_bool = var_253_bool; // 0x694 Mov
	return 2; // 0x695 Return
}


func_1041(var_2_object, var_34_string)
{
	var_35_bool = 0; // 0x412 PushV
	func_1690(var_35_bool); // 0x413 Call
	var_36_bool = var_35_bool == 0; // 0x415 Not
	if(var_36_bool == 0) goto Label_1048; // 0x416 JumpB
	return 0; // 0x417 Return
	
Label_1048:
	var_37_bool = var_34_string == var_2_object; // 0x418 Eq
	if(var_37_bool == 0) goto Label_1051; // 0x419 JumpB
	return 0; // 0x41a Return
	
Label_1051:
	var_38_string = ""; // 0x41b PushV
	var_38_string = var_34_string; // 0x41c Mov
	func_1596(var_38_string); // 0x41d Call
	var_2_object = var_34_string; // 0x41f TMov
	return 0; // 0x420 Return
}


func_1812(var_51_bool)
{
	var_53_int = 0; var_54_string = ""; // 0x715 PushV
	var_54_string = "d11q01"; // 0x716 MovS
	func_1631(var_53_int, var_54_string); // 0x717 Call
	var_57_int = 2; // 0x719 PushI
	var_58_bool = var_53_int == var_57_int; // 0x71a Eq
	if(var_58_bool == 0) goto Label_1822; // 0x71b JumpB
	var_51_bool = 1; // 0x71c MovB
	return 0; // 0x71d Return
	
Label_1822:
	var_51_bool = 0; // 0x71e MovB
	return 0; // 0x71f Return
}


func_1686(var_72_int)
{
	var_72_int = 11961; // 0x696 MovI
	return 0; // 0x697 Return
}


func_1688(var_73_string)
{
	var_73_string = "ui/NPC_Burah.png"; // 0x698 MovS
	return 0; // 0x699 Return
}


func_1690(var_13_bool)
{
	var_13_bool = 1; // 0x69a MovB
	return 0; // 0x69b Return
}


func_1692()
{
	var_43_string = "playsound"; // 0x69d PushS
	var_44_string = "giveitem"; // 0x69e PushS
	TriggerWorld(var_43_string, var_44_string); // 0x69f Func
	return 0; // 0x6a1 Return
}


func_1824(var_59_bool)
{
	var_61_int = 0; var_62_string = ""; // 0x721 PushV
	var_62_string = "ood11Block1"; // 0x722 MovS
	func_1631(var_61_int, var_62_string); // 0x723 Call
	var_63_int = 0; // 0x725 PushI
	var_64_bool = var_61_int == var_63_int; // 0x726 Eq
	if(var_64_bool == 0) goto Label_1834; // 0x727 JumpB
	var_59_bool = 1; // 0x728 MovB
	return 0; // 0x729 Return
	
Label_1834:
	var_59_bool = 0; // 0x72a MovB
	return 0; // 0x72b Return
}


func_1698()
{
	var_74_string = "d9TalkToPolkovodec"; // 0x6a3 PushS
	var_75_int = 1; // 0x6a4 PushI
	SetVariable(var_74_string, var_75_int); // 0x6a5 Func
	return 0; // 0x6a7 Return
}


func_931(var_0_object, var_1_object, var_2_object, var_3_object, var_177_object, var_178_object)
{
	var_0_object = var_178_object; // 0x3a4 TMov
	var_1_object = var_177_object; // 0x3a5 TMov
	var_3_object = 0; // 0x3a6 TMovB
	var_183_int = 1; // 0x3a7 PushI
	if(var_183_int == 0) goto Label_1011; // 0x3a8 JumpB
	var_184_string = ""; // 0x3a9 PushV
	var_184_string = "Neutral"; // 0x3aa MovS
	func_1041(var_178_object, var_184_string); // 0x3ab Call
	var_189_int = 14280; // 0x3ad PushI
	SetMessage(var_189_int); // 0x3ae TObjFunc
	ClearReplies(); // 0x3b0 TObjFunc
	var_190_bool = 0; // 0x3b2 PushV
	var_190_bool = 0; // 0x3b3 MovB
	var_191_bool = 0; var_192_object = Obj(); // 0x3b4 PushV
	var_192_object = var_1_object; // 0x3b5 MovT
	func_1812(var_192_object); // 0x3b6 Call
	if(var_191_bool == 0) goto Label_959; // 0x3b8 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x3b9 PushV
	var_198_object = var_1_object; // 0x3ba MovT
	func_1824(var_198_object); // 0x3bb Call
	if(var_197_bool == 0) goto Label_959; // 0x3bd JumpB
	var_190_bool = 1; // 0x3be MovB
	
Label_959:
	if(var_190_bool == 0) goto Label_965; // 0x3bf JumpB
	var_203_int = 14281; // 0x3c0 PushI
	var_204_int = 15502; // 0x3c1 PushI
	var_205_int = 15501; // 0x3c2 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x3c3 TObjFunc
	
Label_965:
	var_206_bool = 0; // 0x3c5 PushV
	var_206_bool = 0; // 0x3c6 MovB
	var_207_bool = 0; var_208_object = Obj(); // 0x3c7 PushV
	var_208_object = var_1_object; // 0x3c8 MovT
	func_1836(var_208_object); // 0x3c9 Call
	if(var_207_bool == 0) goto Label_978; // 0x3cb JumpB
	var_213_bool = 0; var_214_object = Obj(); // 0x3cc PushV
	var_214_object = var_1_object; // 0x3cd MovT
	func_1848(var_214_object); // 0x3ce Call
	if(var_213_bool == 0) goto Label_978; // 0x3d0 JumpB
	var_206_bool = 1; // 0x3d1 MovB
	
Label_978:
	if(var_206_bool == 0) goto Label_984; // 0x3d2 JumpB
	var_219_int = 14306; // 0x3d3 PushI
	var_220_int = 15529; // 0x3d4 PushI
	var_221_int = 15528; // 0x3d5 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x3d6 TObjFunc
	
Label_984:
	var_222_bool = 0; // 0x3d8 PushV
	var_222_bool = 0; // 0x3d9 MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x3da PushV
	var_224_object = var_1_object; // 0x3db MovT
	func_1800(var_224_object); // 0x3dc Call
	if(var_223_bool == 0) goto Label_997; // 0x3de JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x3df PushV
	var_230_object = var_1_object; // 0x3e0 MovT
	func_1860(var_230_object); // 0x3e1 Call
	if(var_229_bool == 0) goto Label_997; // 0x3e3 JumpB
	var_222_bool = 1; // 0x3e4 MovB
	
Label_997:
	if(var_222_bool == 0) goto Label_1003; // 0x3e5 JumpB
	var_235_int = 14317; // 0x3e6 PushI
	var_236_int = 15540; // 0x3e7 PushI
	var_237_int = 15539; // 0x3e8 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x3e9 TObjFunc
	
Label_1003:
	var_238_int = 14324; // 0x3eb PushI
	var_239_int = -1; // 0x3ec PushI
	var_240_int = 15546; // 0x3ed PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x3ee TObjFunc
	goto Label_1011; // 0x3f0 Jump
	
Label_1011:
	var_241_bool = 0; // 0x3f3 PushV
	func_1690(var_241_bool); // 0x3f4 Call
	if(var_241_bool == 0) goto Label_1026; // 0x3f6 JumpB
	
Label_1015:
	lshWaitForAnimEnd(); // 0x3f7 Func
	var_242_object = var_3_object; // 0x3f9 PushT
	if(var_242_object == 0) goto Label_1020; // 0x3fa JumpB
	goto Label_1025; // 0x3fb Jump
	
Label_1025:
	goto Label_1040; // 0x401 Jump
	
Label_1040:
	return 0; // 0x410 Return
	
Label_1020:
	var_243_string = ""; // 0x3fc PushV
	var_243_string = var_2_object; // 0x3fd MovT
	func_1596(var_243_string); // 0x3fe Call
	goto Label_1015; // 0x400 Jump
	
Label_1026:
	var_244_string = "all"; // 0x402 PushS
	var_245_string = "idle"; // 0x403 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x404 Func
	
Label_1030:
	WaitForAnimEnd(); // 0x406 Func
	var_246_object = var_3_object; // 0x408 PushT
	if(var_246_object == 0) goto Label_1035; // 0x409 JumpB
	goto Label_1040; // 0x40a Jump
	
Label_1035:
	var_247_string = "all"; // 0x40b PushS
	var_248_string = "idle"; // 0x40c PushS
	PlayAnimation(var_247_string, var_248_string); // 0x40d Func
	goto Label_1030; // 0x40f Jump
}


func_1704()
{
	var_18_string = "ood9Block1"; // 0x6a9 PushS
	var_19_int = 1; // 0x6aa PushI
	SetVariable(var_18_string, var_19_int); // 0x6ab Func
	return 0; // 0x6ad Return
}


func_1836(var_69_bool)
{
	var_71_int = 0; var_72_string = ""; // 0x72d PushV
	var_72_string = "d11q01"; // 0x72e MovS
	func_1631(var_71_int, var_72_string); // 0x72f Call
	var_73_int = 3; // 0x731 PushI
	var_74_bool = var_71_int >= var_73_int; // 0x732 GE
	if(var_74_bool == 0) goto Label_1846; // 0x733 JumpB
	var_69_bool = 1; // 0x734 MovB
	return 0; // 0x735 Return
	
Label_1846:
	var_69_bool = 0; // 0x736 MovB
	return 0; // 0x737 Return
}


func_1710(var_22_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x6ae PushV
	var_26_string = "Rifle is given"; // 0x6af PushS
	Trace(var_26_string); // 0x6b0 Func
	CreateInvItem(var_25_object); // 0x6b2 Func
	var_27_string = "Rifle"; // 0x6b4 PushS
	SetItemName(var_27_string); // 0x6b5 ObjFunc
	var_28_string = "durability"; // 0x6b7 PushS
	var_29_int = 100; // 0x6b8 PushI
	SetProperty(var_28_string, var_29_int); // 0x6b9 ObjFunc
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; // 0x6bb PushV
	var_30_object = var_22_object; // 0x6bc Mov
	var_31_object = var_25_object; // 0x6bd Mov
	var_32_int = 1; // 0x6be MovI
	func_1636(var_31_object, var_32_int); // 0x6bf Call
	return 2; // 0x6c1 Return
}


func_49(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x31 PushV
	var_0_object = var_21_object; // 0x32 TMov
	var_31_bool = 0; var_32_object = Obj(); // 0x33 PushV
	var_32_object = var_21_object; // 0x34 Mov
	func_1536(var_32_object); // 0x35 Call
	var_71_bool = var_31_bool == 0; // 0x37 Not
	if(var_71_bool == 0) goto Label_59; // 0x38 JumpB
	var_20_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_27_object); // 0x3b Func
	var_72_int = 0; // 0x3d PushV
	func_1686(var_72_int); // 0x3e Call
	SetNPCName(var_72_int); // 0x40 ObjFunc
	var_73_string = ""; // 0x42 PushV
	func_1688(var_73_string); // 0x43 Call
	SetPhoto(var_73_string); // 0x45 ObjFunc
	var_74_int = 0; // 0x47 PushV
	func_1887(var_74_int); // 0x48 Call
	SetPlayerName(var_74_int); // 0x4a ObjFunc
	var_29_int = -1; // 0x4c MovI
	IsOverrideActive(var_28_bool); // 0x4d Func
	var_82_bool = var_28_bool; // 0x4f Push
	if(var_82_bool == 0) goto Label_83; // 0x50 JumpB
	var_20_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_27_object); // 0x53 Func
	var_83_object = Obj(); var_84_object = Obj(); // 0x55 PushV
	var_83_object = var_21_object; // 0x56 Mov
	var_84_object = var_27_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_30_bool); // 0x5c ObjFunc
	
Label_94:
	var_155_bool = var_30_bool == 0; // 0x5e Not
	if(var_155_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_30_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_156_object = Obj(); // 0x65 PushV
	var_156_object = var_21_object; // 0x66 Mov
	func_1592(); // 0x67 Call
	StopDialog(var_27_object); // 0x69 Func
	GetReturnValue(var_29_int); // 0x6b ObjFunc
	var_20_int = var_29_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1592()
{
	CameraSwitchToNormal(); // 0x639 Func
	return 0; // 0x63b Return
}


func_1848(var_75_bool)
{
	var_77_int = 0; var_78_string = ""; // 0x739 PushV
	var_78_string = "ood11Block2"; // 0x73a MovS
	func_1631(var_77_int, var_78_string); // 0x73b Call
	var_79_int = 0; // 0x73d PushI
	var_80_bool = var_77_int == var_79_int; // 0x73e Eq
	if(var_80_bool == 0) goto Label_1858; // 0x73f JumpB
	var_75_bool = 1; // 0x740 MovB
	return 0; // 0x741 Return
	
Label_1858:
	var_75_bool = 0; // 0x742 MovB
	return 0; // 0x743 Return
}


func_1596(var_14_string)
{
	var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; // 0x63c PushV
	var_19_string = "playing "; // 0x63d PushS
	var_20_int = var_19_string + var_14_string; // 0x63e Add
	Trace(var_20_int); // 0x63f Func
	lshGetAnimTimes(var_14_string, var_17_float, var_18_float); // 0x641 Func
	lshPlayAnimation(var_17_float, var_18_float); // 0x643 Func
	var_21_string = "start: "; // 0x645 PushS
	var_22_int = var_21_string + var_17_float; // 0x646 Add
	Trace(var_22_int); // 0x647 Func
	var_23_string = "end: "; // 0x649 PushS
	var_24_int = var_23_string + var_18_float; // 0x64a Add
	Trace(var_24_int); // 0x64b Func
	return 4; // 0x64d Return
}


func_1731()
{
	var_18_string = "ood11Block1"; // 0x6c4 PushS
	var_19_int = 1; // 0x6c5 PushI
	SetVariable(var_18_string, var_19_int); // 0x6c6 Func
	return 0; // 0x6c8 Return
}


func_1860(var_91_bool)
{
	var_93_int = 0; var_94_string = ""; // 0x745 PushV
	var_94_string = "ood11Block3"; // 0x746 MovS
	func_1631(var_93_int, var_94_string); // 0x747 Call
	var_95_int = 0; // 0x749 PushI
	var_96_bool = var_93_int == var_95_int; // 0x74a Eq
	if(var_96_bool == 0) goto Label_1870; // 0x74b JumpB
	var_91_bool = 1; // 0x74c MovB
	return 0; // 0x74d Return
	
Label_1870:
	var_91_bool = 0; // 0x74e MovB
	return 0; // 0x74f Return
}


func_1737()
{
	var_24_string = "ood11Block2"; // 0x6ca PushS
	var_25_int = 1; // 0x6cb PushI
	SetVariable(var_24_string, var_25_int); // 0x6cc Func
	return 0; // 0x6ce Return
}


func_1614()
{
	var_13_bool = 0; // 0x64e PushV
	func_1690(var_13_bool); // 0x64f Call
	if(var_13_bool == 0) goto Label_1620; // 0x651 JumpB
	lshStopSpeech(); // 0x652 Func
	
Label_1620:
	return 0; // 0x654 Return
}


func_1743()
{
	var_30_string = "ood11Block3"; // 0x6d0 PushS
	var_31_int = 1; // 0x6d1 PushI
	SetVariable(var_30_string, var_31_int); // 0x6d2 Func
	return 0; // 0x6d4 Return
}


func_1872(var_117_bool)
{
	var_119_int = 0; var_120_string = ""; // 0x751 PushV
	var_120_string = "ood9Block2"; // 0x752 MovS
	func_1631(var_119_int, var_120_string); // 0x753 Call
	var_121_int = 0; // 0x755 PushI
	var_122_bool = var_119_int == var_121_int; // 0x756 Eq
	if(var_122_bool == 0) goto Label_1882; // 0x757 JumpB
	var_117_bool = 1; // 0x758 MovB
	return 0; // 0x759 Return
	
Label_1882:
	var_117_bool = 0; // 0x75a MovB
	return 0; // 0x75b Return
}


func_209(var_2_object, var_76_string)
{
	var_77_bool = 0; // 0xd2 PushV
	func_1690(var_77_bool); // 0xd3 Call
	var_78_bool = var_77_bool == 0; // 0xd5 Not
	if(var_78_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_79_bool = var_76_string == var_2_object; // 0xd8 Eq
	if(var_79_bool == 0) goto Label_219; // 0xd9 JumpB
	return 0; // 0xda Return
	
Label_219:
	var_80_string = ""; // 0xdb PushV
	var_80_string = var_76_string; // 0xdc Mov
	func_1596(var_80_string); // 0xdd Call
	var_2_object = var_76_string; // 0xdf TMov
	return 0; // 0xe0 Return
}


func_1749(var_45_object)
{
	var_47_string = "rifle ammo10 is given"; // 0x6d6 PushS
	Trace(var_47_string); // 0x6d7 Func
	var_48_object = Obj(); var_49_string = ""; var_50_int = 0; // 0x6d9 PushV
	var_48_object = var_45_object; // 0x6da Mov
	var_49_string = "rifle_ammo"; // 0x6db MovS
	var_50_int = 10; // 0x6dc MovI
	func_1649(var_48_object, var_49_string, var_50_int); // 0x6dd Call
	return 0; // 0x6df Return
}


func_1621(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x655 PushV
	var_61_int = var_57_cvector | var_57_cvector; // 0x656 Or
	var_60_float = sqrt(var_61_int); // 0x657 Sqrt2
	var_62_float = 0.0; // 0x658 PushF
	var_63_bool = var_60_float < var_62_float; // 0x659 LT
	if(var_63_bool == 0) goto Label_1629; // 0x65a JumpB
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x65b MovV
	return 2; // 0x65c Return
	
Label_1629:
	var_56_cvector = var_57_cvector / var_57_cvector; // 0x65d Div2
	return 2; // 0x65e Return
}


func_1884(var_94_bool)
{
	var_94_bool = 0; // 0x75d MovB
	return 0; // 0x75e Return
}


func_1887(var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x75f PushV
	var_77_string = "player"; // 0x760 PushS
	GetVariable(var_77_string, var_76_int); // 0x761 Func
	var_78_int = 0; // 0x763 PushI
	var_79_bool = var_76_int == var_78_int; // 0x764 Eq
	if(var_79_bool == 0) goto Label_1897; // 0x765 JumpB
	var_74_int = 200001; // 0x766 MovI
	return 2; // 0x767 Return
	
Label_1897:
	var_80_int = 1; // 0x769 PushI
	var_81_bool = var_76_int == var_80_int; // 0x76a Eq
	if(var_81_bool == 0) goto Label_1902; // 0x76b JumpB
	var_74_int = 200002; // 0x76c MovI
	return 2; // 0x76d Return
	
Label_1902:
	var_74_int = 200003; // 0x76e MovI
	return 2; // 0x76f Return
}


func_1760()
{
	var_68_string = "ood9Block2"; // 0x6e1 PushS
	var_69_int = 1; // 0x6e2 PushI
	SetVariable(var_68_string, var_69_int); // 0x6e3 Func
	return 0; // 0x6e5 Return
}


func_1631(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0; // 0x65f PushV
	GetVariable(var_54_string, var_56_int); // 0x660 Func
	var_53_int = var_56_int; // 0x662 Mov
	return 2; // 0x663 Return
}


func_1636(var_31_object, var_32_int)
{
	var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x664 PushV
	GetItemID(var_36_int); // 0x665 ObjFunc
	var_39_string = "Category"; // 0x667 PushS
	GetInvItemProperty(var_37_int, var_36_int, var_39_string); // 0x668 Func
	AddItem(var_38_bool, var_31_object, var_37_int, var_32_int); // 0x66a ObjFunc
	var_40_bool = var_38_bool == 0; // 0x66c Not
	if(var_40_bool == 0) goto Label_1648; // 0x66d JumpB
	DropItems(var_31_object, var_32_int); // 0x66e ObjFunc
	
Label_1648:
	return 6; // 0x670 Return
}


func_868(var_0_object, var_159_int, var_160_object)
{
	var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0; // 0x364 PushV
	var_0_object = var_160_object; // 0x365 TMov
	var_170_bool = 0; var_171_object = Obj(); // 0x366 PushV
	var_171_object = var_160_object; // 0x367 Mov
	func_1536(var_171_object); // 0x368 Call
	var_172_bool = var_170_bool == 0; // 0x36a Not
	if(var_172_bool == 0) goto Label_878; // 0x36b JumpB
	var_159_int = -2; // 0x36c MovI
	return 8; // 0x36d Return
	
Label_878:
	CreateDialog(var_166_object); // 0x36e Func
	var_173_int = 0; // 0x370 PushV
	func_1686(var_173_int); // 0x371 Call
	SetNPCName(var_173_int); // 0x373 ObjFunc
	var_174_string = ""; // 0x375 PushV
	func_1688(var_174_string); // 0x376 Call
	SetPhoto(var_174_string); // 0x378 ObjFunc
	var_175_int = 0; // 0x37a PushV
	func_1887(var_175_int); // 0x37b Call
	SetPlayerName(var_175_int); // 0x37d ObjFunc
	var_168_int = -1; // 0x37f MovI
	IsOverrideActive(var_167_bool); // 0x380 Func
	var_176_bool = var_167_bool; // 0x382 Push
	if(var_176_bool == 0) goto Label_902; // 0x383 JumpB
	var_159_int = -2; // 0x384 MovI
	return 8; // 0x385 Return
	
Label_902:
	DoDialog(var_166_object); // 0x386 Func
	var_177_object = Obj(); var_178_object = Obj(); // 0x388 PushV
	var_177_object = var_160_object; // 0x389 Mov
	var_178_object = var_166_object; // 0x38a Mov
	TaskCall(5); // 0x38b TaskCall
	func_931(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object); // 0x38c Call
	TaskReturn(); // 0x38d TaskReturn
	IsDialogEnd(var_169_bool); // 0x38f ObjFunc
	
Label_913:
	var_249_bool = var_169_bool == 0; // 0x391 Not
	if(var_249_bool == 0) goto Label_920; // 0x392 JumpB
	sync(); // 0x393 Func
	IsDialogEnd(var_169_bool); // 0x395 ObjFunc
	goto Label_913; // 0x397 Jump
	
Label_920:
	var_250_object = Obj(); // 0x398 PushV
	var_250_object = var_160_object; // 0x399 Mov
	func_1592(); // 0x39a Call
	StopDialog(var_166_object); // 0x39c Func
	GetReturnValue(var_168_int); // 0x39e ObjFunc
	var_159_int = var_168_int; // 0x3a0 Mov
	return 8; // 0x3a1 Return
}


func_1766(var_92_bool, var_93_object)
{
	var_94_bool = 0; var_95_object = Obj(); // 0x6e7 PushV
	var_95_object = var_93_object; // 0x6e8 Mov
	func_1884(var_95_object); // 0x6e9 Call
	if(var_94_bool == 0) goto Label_1774; // 0x6eb JumpB
	var_92_bool = 1; // 0x6ec MovB
	return 0; // 0x6ed Return
	
Label_1774:
	var_92_bool = 0; // 0x6ee MovB
	return 0; // 0x6ef Return
}


func_1519(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x5ef PushV
	GetPosition(var_17_cvector); // 0x5f0 ObjFunc
	GetPosition(var_18_cvector); // 0x5f2 Func
	var_19_cvector = var_17_cvector - var_18_cvector; // 0x5f4 Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x5f5 PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x5f6 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x5f7 Func
	var_11_bool = var_20_bool; // 0x5f9 Mov
	return 8; // 0x5fa Return
}


func_1904()
{
	return 0; // 0x770 Return
}


func_1905(var_11_object)
{
	var_12_bool = 0; var_13_int = 0; // 0x772 PushV
	var_13_int = 9; // 0x773 MovI
	func_1671(var_12_bool, var_13_int); // 0x774 Call
	if(var_12_bool == 0) goto Label_1918; // 0x776 JumpB
	var_20_int = 0; var_21_object = Obj(); // 0x777 PushV
	var_21_object = var_11_object; // 0x778 Mov
	TaskCall(2); // 0x779 TaskCall
	func_49(var_22_object, var_20_int, var_21_object); // 0x77a Call
	TaskReturn(); // 0x77b TaskReturn
	return 0; // 0x77d Return
	
Label_1918:
	var_157_bool = 0; var_158_int = 0; // 0x77e PushV
	var_158_int = 11; // 0x77f MovI
	func_1671(var_157_bool, var_158_int); // 0x780 Call
	if(var_157_bool == 0) goto Label_1930; // 0x782 JumpB
	var_159_int = 0; var_160_object = Obj(); // 0x783 PushV
	var_160_object = var_11_object; // 0x784 Mov
	TaskCall(4); // 0x785 TaskCall
	func_868(var_161_object, var_159_int, var_160_object); // 0x786 Call
	TaskReturn(); // 0x787 TaskReturn
	return 0; // 0x789 Return
	
Label_1930:
	var_251_bool = 0; // 0x78a PushV
	func_1677(var_251_bool); // 0x78b Call
	return 0; // 0x78d Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_83_object, var_84_object)
{
	var_0_object = var_84_object; // 0x71 TMov
	var_1_object = var_83_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_89_int = 1; // 0x74 PushI
	if(var_89_int == 0) goto Label_179; // 0x75 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x76 PushV
	var_90_object = var_1_object; // 0x77 MovT
	var_91_object = var_0_object; // 0x78 MovT
	func_1698(); // 0x79 Call
	var_94_string = ""; // 0x7b PushV
	var_94_string = "Neutral"; // 0x7c MovS
	func_209(var_84_object, var_94_string); // 0x7d Call
	var_109_int = 13882; // 0x7f PushI
	SetMessage(var_109_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_110_bool = 0; var_111_object = Obj(); // 0x84 PushV
	var_111_object = var_1_object; // 0x85 MovT
	func_1766(var_110_bool, var_111_object); // 0x86 Call
	if(var_110_bool == 0) goto Label_142; // 0x88 JumpB
	var_114_int = 13883; // 0x89 PushI
	var_115_int = 15111; // 0x8a PushI
	var_116_int = 15110; // 0x8b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x8c TObjFunc
	
Label_142:
	var_117_bool = 0; // 0x8e PushV
	var_117_bool = 0; // 0x8f MovB
	var_118_bool = 0; var_119_object = Obj(); // 0x90 PushV
	var_119_object = var_1_object; // 0x91 MovT
	func_1776(var_119_object); // 0x92 Call
	if(var_118_bool == 0) goto Label_155; // 0x94 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x95 PushV
	var_127_object = var_1_object; // 0x96 MovT
	func_1788(var_127_object); // 0x97 Call
	if(var_126_bool == 0) goto Label_155; // 0x99 JumpB
	var_117_bool = 1; // 0x9a MovB
	
Label_155:
	if(var_117_bool == 0) goto Label_161; // 0x9b JumpB
	var_132_int = 13906; // 0x9c PushI
	var_133_int = 15138; // 0x9d PushI
	var_134_int = 15137; // 0x9e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x9f TObjFunc
	
Label_161:
	var_135_bool = 0; var_136_object = Obj(); // 0xa1 PushV
	var_136_object = var_1_object; // 0xa2 MovT
	func_1872(var_136_object); // 0xa3 Call
	if(var_135_bool == 0) goto Label_171; // 0xa5 JumpB
	var_141_int = 13924; // 0xa6 PushI
	var_142_int = 15156; // 0xa7 PushI
	var_143_int = 15155; // 0xa8 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xa9 TObjFunc
	
Label_171:
	var_144_int = 13947; // 0xab PushI
	var_145_int = -1; // 0xac PushI
	var_146_int = 15182; // 0xad PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xae TObjFunc
	goto Label_179; // 0xb0 Jump
	
Label_179:
	var_147_bool = 0; // 0xb3 PushV
	func_1690(var_147_bool); // 0xb4 Call
	if(var_147_bool == 0) goto Label_194; // 0xb6 JumpB
	
Label_183:
	lshWaitForAnimEnd(); // 0xb7 Func
	var_148_object = var_3_object; // 0xb9 PushT
	if(var_148_object == 0) goto Label_188; // 0xba JumpB
	goto Label_193; // 0xbb Jump
	
Label_193:
	goto Label_208; // 0xc1 Jump
	
Label_208:
	return 0; // 0xd0 Return
	
Label_188:
	var_149_string = ""; // 0xbc PushV
	var_149_string = var_2_object; // 0xbd MovT
	func_1596(var_149_string); // 0xbe Call
	goto Label_183; // 0xc0 Jump
	
Label_194:
	var_150_string = "all"; // 0xc2 PushS
	var_151_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_150_string, var_151_string); // 0xc4 Func
	
Label_198:
	WaitForAnimEnd(); // 0xc6 Func
	var_152_object = var_3_object; // 0xc8 PushT
	if(var_152_object == 0) goto Label_203; // 0xc9 JumpB
	goto Label_208; // 0xca Jump
	
Label_203:
	var_153_string = "all"; // 0xcb PushS
	var_154_string = "idle"; // 0xcc PushS
	PlayAnimation(var_153_string, var_154_string); // 0xcd Func
	goto Label_198; // 0xcf Jump
}


func_1776(var_100_bool)
{
	var_102_int = 0; var_103_string = ""; // 0x6f1 PushV
	var_103_string = "d9q01"; // 0x6f2 MovS
	func_1631(var_102_int, var_103_string); // 0x6f3 Call
	var_106_int = 2; // 0x6f5 PushI
	var_107_bool = var_102_int == var_106_int; // 0x6f6 Eq
	if(var_107_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_100_bool = 1; // 0x6f8 MovB
	return 0; // 0x6f9 Return
	
Label_1786:
	var_100_bool = 0; // 0x6fa MovB
	return 0; // 0x6fb Return
}


func_1649(var_48_object, var_49_string, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x671 PushV
	CreateInvItem(var_52_object); // 0x672 Func
	SetItemName(var_49_string); // 0x674 ObjFunc
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; // 0x676 PushV
	var_53_object = var_48_object; // 0x677 Mov
	var_54_object = var_52_object; // 0x678 Mov
	var_55_int = var_50_int; // 0x679 Mov
	func_1636(var_54_object, var_55_int); // 0x67a Call
	return 2; // 0x67c Return
}


func_1531(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; // 0x5fb PushV
	IsLoaded(var_12_bool); // 0x5fc Func
	var_10_bool = var_12_bool; // 0x5fe Mov
	return 2; // 0x5ff Return
}


func_1788(var_108_bool)
{
	var_110_int = 0; var_111_string = ""; // 0x6fd PushV
	var_111_string = "ood9Block1"; // 0x6fe MovS
	func_1631(var_110_int, var_111_string); // 0x6ff Call
	var_112_int = 0; // 0x701 PushI
	var_113_bool = var_110_int == var_112_int; // 0x702 Eq
	if(var_113_bool == 0) goto Label_1798; // 0x703 JumpB
	var_108_bool = 1; // 0x704 MovB
	return 0; // 0x705 Return
	
Label_1798:
	var_108_bool = 0; // 0x706 MovB
	return 0; // 0x707 Return
}


func_1662(var_14_int)
{
	var_15_float = 0; var_16_float = 0; // 0x67e PushV
	GetGameTime(var_16_float); // 0x67f Func
	var_17_int = 1; // 0x681 PushI
	var_18_int = 0; // 0x682 PushV
	var_19_int = 24; // 0x683 PushI
	var_18_int = var_16_float / var_16_float; // 0x684 Div2
	var_14_int = var_17_int + var_18_int; // 0x685 Add2
	return 2; // 0x686 Return
}


