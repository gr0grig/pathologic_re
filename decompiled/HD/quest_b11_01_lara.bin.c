task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xee PushI
	if(var_7_int == 0) goto Label_636; // 0xef JumpB
	func_979(); // 0xf1 NEW_2
	var_9_int = 23190; // 0xf3 PushI
	var_10_bool = var_6_int == var_9_int; // 0xf4 Eq
	if(var_10_bool == 0) goto Label_261; // 0xf5 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf6 PushV
	var_11_object = var_1_object; // 0xf7 MovT
	var_12_object = var_0_object; // 0xf8 MovT
	func_1059(); // 0xf9 NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xfb PushV
	var_25_object = var_1_object; // 0xfc MovT
	var_26_object = var_0_object; // 0xfd MovT
	func_1084(); // 0xfe NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0x100 PushV
	var_35_object = var_1_object; // 0x101 MovT
	var_36_object = var_0_object; // 0x102 MovT
	func_1050(); // 0x103 NEW_2
	
Label_261:
	var_62_int = 23187; // 0x105 PushI
	var_63_bool = var_6_int == var_62_int; // 0x106 Eq
	if(var_63_bool == 0) goto Label_279; // 0x107 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x108 PushV
	var_64_object = var_1_object; // 0x109 MovT
	var_65_object = var_0_object; // 0x10a MovT
	func_1059(); // 0x10b NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x10d PushV
	var_66_object = var_1_object; // 0x10e MovT
	var_67_object = var_0_object; // 0x10f MovT
	func_1084(); // 0x110 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x112 PushV
	var_68_object = var_1_object; // 0x113 MovT
	var_69_object = var_0_object; // 0x114 MovT
	func_1050(); // 0x115 NEW_2
	
Label_279:
	var_70_int = 23182; // 0x117 PushI
	var_71_bool = var_5_int == var_70_int; // 0x118 Eq
	if(var_71_bool == 0) goto Label_378; // 0x119 JumpB
	var_72_bool = 0; // 0x11a PushV
	var_72_bool = 0; // 0x11b MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x11c PushV
	var_74_object = var_1_object; // 0x11d MovT
	func_1095(var_74_object); // 0x11e NEW_2
	var_81_bool = var_73_bool == 0; // 0x120 Not
	if(var_81_bool == 0) goto Label_296; // 0x121 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x122 PushV
	var_83_object = var_1_object; // 0x123 MovT
	func_1107(var_83_object); // 0x124 NEW_2
	if(var_82_bool == 0) goto Label_296; // 0x126 JumpB
	var_72_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_72_bool == 0) goto Label_317; // 0x128 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x129 PushV
	var_88_object = var_1_object; // 0x12a MovT
	var_89_object = var_0_object; // 0x12b MovT
	func_1078(); // 0x12c NEW_2
	var_92_string = ""; // 0x12e PushV
	var_92_string = "Tiredness"; // 0x12f MovS
	func_215(var_6_int, var_92_string); // 0x130 NEW_2
	var_109_int = 522012; // 0x132 PushI
	SetMessage(var_109_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_110_int = 523423; // 0x137 PushI
	var_111_int = 24645; // 0x138 PushI
	var_112_int = 24644; // 0x139 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_113_bool = 0; var_114_object = Obj(); // 0x13d PushV
	var_114_object = var_1_object; // 0x13e MovT
	func_1095(var_114_object); // 0x13f NEW_2
	var_115_bool = var_113_bool == 0; // 0x141 Not
	if(var_115_bool == 0) goto Label_343; // 0x142 JumpB
	var_116_string = ""; // 0x143 PushV
	var_116_string = "Neutral"; // 0x144 MovS
	func_215(var_6_int, var_116_string); // 0x145 NEW_2
	var_117_int = 522016; // 0x147 PushI
	SetMessage(var_117_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_118_int = 522017; // 0x14c PushI
	var_119_int = -1; // 0x14d PushI
	var_120_int = 23187; // 0x14e PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x14f TObjFunc
	var_121_int = 522018; // 0x151 PushI
	var_122_int = -1; // 0x152 PushI
	var_123_int = 23188; // 0x153 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_124_string = ""; // 0x157 PushV
	var_124_string = "Neutral"; // 0x158 MovS
	func_215(var_6_int, var_124_string); // 0x159 NEW_2
	var_125_int = 522014; // 0x15b PushI
	SetMessage(var_125_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_126_int = 523455; // 0x160 PushI
	var_127_int = -1; // 0x161 PushI
	var_128_int = 24681; // 0x162 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x163 TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0x165 PushV
	var_130_object = var_1_object; // 0x166 MovT
	func_1119(var_130_object); // 0x167 NEW_2
	if(var_129_bool == 0) goto Label_367; // 0x169 JumpB
	var_135_int = 522015; // 0x16a PushI
	var_136_int = -1; // 0x16b PushI
	var_137_int = 23185; // 0x16c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x16d TObjFunc
	
Label_367:
	var_138_bool = 0; var_139_object = Obj(); // 0x16f PushV
	var_139_object = var_1_object; // 0x170 MovT
	func_1119(var_139_object); // 0x171 NEW_2
	if(var_138_bool == 0) goto Label_377; // 0x173 JumpB
	var_140_int = 523456; // 0x174 PushI
	var_141_int = -1; // 0x175 PushI
	var_142_int = 24682; // 0x176 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x177 TObjFunc
	
Label_377:
	return 0; // 0x179 Return
	
Label_378:
	var_143_int = 24645; // 0x17a PushI
	var_144_bool = var_5_int == var_143_int; // 0x17b Eq
	if(var_144_bool == 0) goto Label_406; // 0x17c JumpB
	var_145_string = ""; // 0x17d PushV
	var_145_string = "Tiredness"; // 0x17e MovS
	func_215(var_6_int, var_145_string); // 0x17f NEW_2
	var_146_int = 523424; // 0x181 PushI
	SetMessage(var_146_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_147_int = 523425; // 0x186 PushI
	var_148_int = 24647; // 0x187 PushI
	var_149_int = 24646; // 0x188 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x189 TObjFunc
	var_150_int = 523435; // 0x18b PushI
	var_151_int = 24659; // 0x18c PushI
	var_152_int = 24656; // 0x18d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x18e TObjFunc
	var_153_int = 523444; // 0x190 PushI
	var_154_int = 24669; // 0x191 PushI
	var_155_int = 24668; // 0x192 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_156_int = 24669; // 0x196 PushI
	var_157_bool = var_5_int == var_156_int; // 0x197 Eq
	if(var_157_bool == 0) goto Label_429; // 0x198 JumpB
	var_158_string = ""; // 0x199 PushV
	var_158_string = "Tiredness"; // 0x19a MovS
	func_215(var_6_int, var_158_string); // 0x19b NEW_2
	var_159_int = 523445; // 0x19d PushI
	SetMessage(var_159_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_160_int = 523446; // 0x1a2 PushI
	var_161_int = 24671; // 0x1a3 PushI
	var_162_int = 24670; // 0x1a4 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1a5 TObjFunc
	var_163_int = 541844; // 0x1a7 PushI
	var_164_int = 24674; // 0x1a8 PushI
	var_165_int = 44062; // 0x1a9 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1aa TObjFunc
	return 0; // 0x1ac Return
	
Label_429:
	var_166_int = 24674; // 0x1ad PushI
	var_167_bool = var_5_int == var_166_int; // 0x1ae Eq
	if(var_167_bool == 0) goto Label_447; // 0x1af JumpB
	var_168_string = ""; // 0x1b0 PushV
	var_168_string = "Tiredness"; // 0x1b1 MovS
	func_215(var_6_int, var_168_string); // 0x1b2 NEW_2
	var_169_int = 523449; // 0x1b4 PushI
	SetMessage(var_169_int); // 0x1b5 TObjFunc
	ClearReplies(); // 0x1b7 TObjFunc
	var_170_int = 523459; // 0x1b9 PushI
	var_171_int = 24686; // 0x1ba PushI
	var_172_int = 24685; // 0x1bb PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_173_int = 24686; // 0x1bf PushI
	var_174_bool = var_5_int == var_173_int; // 0x1c0 Eq
	if(var_174_bool == 0) goto Label_465; // 0x1c1 JumpB
	var_175_string = ""; // 0x1c2 PushV
	var_175_string = "Tiredness"; // 0x1c3 MovS
	func_215(var_6_int, var_175_string); // 0x1c4 NEW_2
	var_176_int = 523460; // 0x1c6 PushI
	SetMessage(var_176_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_177_int = 523450; // 0x1cb PushI
	var_178_int = 24663; // 0x1cc PushI
	var_179_int = 24675; // 0x1cd PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_180_int = 24671; // 0x1d1 PushI
	var_181_bool = var_5_int == var_180_int; // 0x1d2 Eq
	if(var_181_bool == 0) goto Label_483; // 0x1d3 JumpB
	var_182_string = ""; // 0x1d4 PushV
	var_182_string = "Tiredness"; // 0x1d5 MovS
	func_215(var_6_int, var_182_string); // 0x1d6 NEW_2
	var_183_int = 523447; // 0x1d8 PushI
	SetMessage(var_183_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_184_int = 523457; // 0x1dd PushI
	var_185_int = 24684; // 0x1de PushI
	var_186_int = 24683; // 0x1df PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1e0 TObjFunc
	return 0; // 0x1e2 Return
	
Label_483:
	var_187_int = 24684; // 0x1e3 PushI
	var_188_bool = var_5_int == var_187_int; // 0x1e4 Eq
	if(var_188_bool == 0) goto Label_501; // 0x1e5 JumpB
	var_189_string = ""; // 0x1e6 PushV
	var_189_string = "Tiredness"; // 0x1e7 MovS
	func_215(var_6_int, var_189_string); // 0x1e8 NEW_2
	var_190_int = 523458; // 0x1ea PushI
	SetMessage(var_190_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_191_int = 523461; // 0x1ef PushI
	var_192_int = 24688; // 0x1f0 PushI
	var_193_int = 24687; // 0x1f1 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1f2 TObjFunc
	return 0; // 0x1f4 Return
	
Label_501:
	var_194_int = 24688; // 0x1f5 PushI
	var_195_bool = var_5_int == var_194_int; // 0x1f6 Eq
	if(var_195_bool == 0) goto Label_519; // 0x1f7 JumpB
	var_196_string = ""; // 0x1f8 PushV
	var_196_string = "Tiredness"; // 0x1f9 MovS
	func_215(var_6_int, var_196_string); // 0x1fa NEW_2
	var_197_int = 523462; // 0x1fc PushI
	SetMessage(var_197_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_198_int = 523448; // 0x201 PushI
	var_199_int = 24663; // 0x202 PushI
	var_200_int = 24672; // 0x203 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_201_int = 24659; // 0x207 PushI
	var_202_bool = var_5_int == var_201_int; // 0x208 Eq
	if(var_202_bool == 0) goto Label_542; // 0x209 JumpB
	var_203_string = ""; // 0x20a PushV
	var_203_string = "Tiredness"; // 0x20b MovS
	func_215(var_6_int, var_203_string); // 0x20c NEW_2
	var_204_int = 523438; // 0x20e PushI
	SetMessage(var_204_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_205_int = 523439; // 0x213 PushI
	var_206_int = 24651; // 0x214 PushI
	var_207_int = 24660; // 0x215 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x216 TObjFunc
	var_208_int = 523440; // 0x218 PushI
	var_209_int = 24663; // 0x219 PushI
	var_210_int = 24662; // 0x21a PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_211_int = 24663; // 0x21e PushI
	var_212_bool = var_5_int == var_211_int; // 0x21f Eq
	if(var_212_bool == 0) goto Label_565; // 0x220 JumpB
	var_213_string = ""; // 0x221 PushV
	var_213_string = "Tiredness"; // 0x222 MovS
	func_215(var_6_int, var_213_string); // 0x223 NEW_2
	var_214_int = 523441; // 0x225 PushI
	SetMessage(var_214_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_215_int = 523442; // 0x22a PushI
	var_216_int = 24651; // 0x22b PushI
	var_217_int = 24664; // 0x22c PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x22d TObjFunc
	var_218_int = 523443; // 0x22f PushI
	var_219_int = 24651; // 0x230 PushI
	var_220_int = 24666; // 0x231 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_221_int = 24647; // 0x235 PushI
	var_222_bool = var_5_int == var_221_int; // 0x236 Eq
	if(var_222_bool == 0) goto Label_583; // 0x237 JumpB
	var_223_string = ""; // 0x238 PushV
	var_223_string = "Tiredness"; // 0x239 MovS
	func_215(var_6_int, var_223_string); // 0x23a NEW_2
	var_224_int = 523426; // 0x23c PushI
	SetMessage(var_224_int); // 0x23d TObjFunc
	ClearReplies(); // 0x23f TObjFunc
	var_225_int = 523427; // 0x241 PushI
	var_226_int = 24649; // 0x242 PushI
	var_227_int = 24648; // 0x243 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_228_int = 24649; // 0x247 PushI
	var_229_bool = var_5_int == var_228_int; // 0x248 Eq
	if(var_229_bool == 0) goto Label_601; // 0x249 JumpB
	var_230_string = ""; // 0x24a PushV
	var_230_string = "Tiredness"; // 0x24b MovS
	func_215(var_6_int, var_230_string); // 0x24c NEW_2
	var_231_int = 523428; // 0x24e PushI
	SetMessage(var_231_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_232_int = 523429; // 0x253 PushI
	var_233_int = 24651; // 0x254 PushI
	var_234_int = 24650; // 0x255 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x256 TObjFunc
	return 0; // 0x258 Return
	
Label_601:
	var_235_int = 24651; // 0x259 PushI
	var_236_bool = var_5_int == var_235_int; // 0x25a Eq
	if(var_236_bool == 0) goto Label_624; // 0x25b JumpB
	var_237_string = ""; // 0x25c PushV
	var_237_string = "Tiredness"; // 0x25d MovS
	func_215(var_6_int, var_237_string); // 0x25e NEW_2
	var_238_int = 523430; // 0x260 PushI
	SetMessage(var_238_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_239_int = 522020; // 0x265 PushI
	var_240_int = -1; // 0x266 PushI
	var_241_int = 23190; // 0x267 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x268 TObjFunc
	var_242_int = 523434; // 0x26a PushI
	var_243_int = -1; // 0x26b PushI
	var_244_int = 24655; // 0x26c PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x26d TObjFunc
	return 0; // 0x26f Return
	
Label_624:
	var_3_string = 1; // 0x270 TMovB
	var_245_bool = 0; // 0x271 PushV
	func_1048(var_245_bool); // 0x272 NEW_2
	if(var_245_bool == 0) goto Label_632; // 0x274 JumpB
	lshStopAnimation(); // 0x275 Func
	goto Label_634; // 0x277 Jump
	
Label_634:
	return 0; // 0x27a Return
	
Label_632:
	StopAnimation(); // 0x278 Func
	
Label_636:
	return 0; // 0x27c Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x296 Func
	return 0; // 0x298 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x299 Func
	return 0; // 0x29b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x29c PushV
	IsOverrideActive(var_7_bool); // 0x29d Func
	var_8_bool = var_7_bool == 0; // 0x29f Not
	if(var_8_bool == 0) goto Label_683; // 0x2a0 JumpB
	EventDisable(0); // 0x2a1 EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x2a2 PushV
	var_10_object = var_5_object; // 0x2a3 Mov
	func_694(var_10_object); // 0x2a4 NEW_2
	EventEnable(0); // 0x2a6 EventEnable
	var_23_object = Obj(); // 0x2a7 PushV
	var_23_object = var_5_object; // 0x2a8 Mov
	func_637(var_23_object); // 0x2a9 NEW_2
	
Label_683:
	return 2; // 0x2ab Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x285 PushV
	func_703(var_5_bool); // 0x286 NEW_2
	var_8_bool = var_5_bool == 0; // 0x288 Not
	if(var_8_bool == 0) goto Label_652; // 0x289 JumpB
	Hold(); // 0x28a Func
	
Label_652:
	var_9_string = ""; // 0x28c PushV
	var_9_string = "Neutral"; // 0x28d MovS
	func_933(var_9_string); // 0x28e NEW_2
	lshWaitForAnimEnd(); // 0x290 Func
	goto Label_652; // 0x292 Jump
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_708(var_36_object, var_37_float); // 0x5 NEW_2
	var_82_bool = var_35_bool == 0; // 0x7 Not
	if(var_82_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_83_int = 0; // 0xd PushV
	func_1042(var_83_int); // 0xe NEW_2
	SetNPCName(var_83_int); // 0x10 ObjFunc
	var_84_int = 0; // 0x12 PushV
	func_1040(var_84_int); // 0x13 NEW_2
	SetNPCDescription(var_84_int); // 0x15 ObjFunc
	var_85_string = ""; // 0x17 PushV
	func_1044(var_85_string); // 0x18 NEW_2
	SetPhoto(var_85_string); // 0x1a ObjFunc
	var_86_string = ""; // 0x1c PushV
	func_1046(var_86_string); // 0x1d NEW_2
	SetPhoto2(var_86_string); // 0x1f ObjFunc
	var_87_int = 0; // 0x21 PushV
	func_1185(var_87_int); // 0x22 NEW_2
	SetPlayerName(var_87_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_95_bool = var_32_bool; // 0x29 Push
	if(var_95_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_96_bool = 0; var_97_object = Obj(); // 0x2f PushV
	var_98_object = Obj(); // 0x30 PushV
	func_986(var_98_object); // 0x31 NEW_2
	var_97_object = var_98_object; // 0x32 Mov
	func_795(var_96_bool, var_97_object); // 0x34 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x36 PushV
	var_191_object = var_25_object; // 0x37 Mov
	var_192_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_287_bool = var_34_bool == 0; // 0x3f Not
	if(var_287_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_288_object = Obj(); // 0x46 PushV
	var_288_object = var_25_object; // 0x47 Mov
	func_777(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1157(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x485 PushV
	var_53_object = Obj(); // 0x486 PushV
	func_1144(var_53_object); // 0x487 NEW_2
	var_50_object = var_53_object; // 0x488 Mov
	Find(var_46_int, var_51_object); // 0x48a ObjFunc
	var_58_bool = var_51_object == 0; // 0x48c Not
	if(var_58_bool == 0) goto Label_1172; // 0x48d JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x48e PushS
	var_60_int = var_59_string + var_46_int; // 0x48f Add
	Trace(var_60_int); // 0x490 Func
	var_44_bool = 0; // 0x492 MovB
	return 6; // 0x493 Return
	
Label_1172:
	AddChild(var_45_object); // 0x494 ObjFunc
	var_61_int = 7; // 0x496 PushI
	SendWorldWndMessage(var_61_int); // 0x497 Func
	GetCategory(var_52_int); // 0x499 ObjFunc
	SetDiarySection(var_52_int); // 0x49b Func
	var_44_bool = 0; // 0x49d MovB
	return 6; // 0x49e Return
}


func_1031(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x407 PushV
	GetGameTime(var_153_float); // 0x408 Func
	var_154_int = 1; // 0x40a PushI
	var_155_int = 0; // 0x40b PushV
	var_156_int = 24; // 0x40c PushI
	var_155_int = var_153_float / var_153_float; // 0x40d Div2
	var_151_int = var_154_int + var_155_int; // 0x40e Add2
	return 2; // 0x40f Return
}


func_777()
{
	var_289_bool = 0; var_290_bool = 0; // 0x309 PushV
	var_291_bool = 1; // 0x30a PushB
	CameraSwitchToNormal(var_291_bool); // 0x30b Func
	var_292_bool = 0; // 0x30d PushV
	func_1048(var_292_bool); // 0x30e NEW_2
	if(var_292_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_794; // 0x311 Jump
	
Label_794:
	return 2; // 0x31a Return
	
Label_786:
	var_293_string = "head"; // 0x312 PushS
	HasAnimationTrack(var_290_bool, var_293_string); // 0x313 Func
	var_294_bool = var_290_bool; // 0x315 Push
	if(var_294_bool == 0) goto Label_794; // 0x316 JumpB
	var_295_string = "head"; // 0x317 PushS
	UnlookAsync(var_295_string); // 0x318 Func
}


func_1040(var_84_int)
{
	var_84_int = 515541; // 0x410 MovI
	return 0; // 0x411 Return
}


func_1042(var_83_int)
{
	var_83_int = 502866; // 0x412 MovI
	return 0; // 0x413 Return
}


func_1044(var_85_string)
{
	var_85_string = "ui/NPC_Lara.png"; // 0x414 MovS
	return 0; // 0x415 Return
}


func_1046(var_86_string)
{
	var_86_string = "ui/NPC_Lara_b.png"; // 0x416 MovS
	return 0; // 0x417 Return
}


func_1048(var_78_bool)
{
	var_78_bool = 1; // 0x418 MovB
	return 0; // 0x419 Return
}


func_1050()
{
	var_37_string = "b11q01KnowWhoKilled"; // 0x41b PushS
	var_38_int = 1; // 0x41c PushI
	SetVariable(var_37_string, var_38_int); // 0x41d Func
	func_1131(); // 0x420 NEW_2
	return 0; // 0x422 Return
}


func_795(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x31b PushV
	var_105_string = "voice_common"; // 0x31c PushS
	GetVariable(var_105_string, var_103_int); // 0x31d Func
	var_106_int = var_103_int; // 0x31f Push
	if(var_106_int == 0) goto Label_833; // 0x320 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x321 PushV
	var_108_object = var_97_object; // 0x322 Mov
	func_853(var_108_object); // 0x323 NEW_2
	var_137_bool = var_107_bool == 0; // 0x325 Not
	if(var_137_bool == 0) goto Label_815; // 0x326 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x327 PushV
	var_139_object = var_97_object; // 0x328 Mov
	func_890(var_139_object); // 0x329 NEW_2
	var_173_bool = var_138_bool == 0; // 0x32b Not
	if(var_173_bool == 0) goto Label_815; // 0x32c JumpB
	var_96_bool = 0; // 0x32d MovB
	return 4; // 0x32e Return
	
Label_815:
	var_174_int = 2; // 0x32f PushI
	irand(var_104_int, var_174_int); // 0x330 Func
	var_175_int = var_104_int; // 0x332 Push
	if(var_175_int == 0) goto Label_828; // 0x333 JumpB
	var_176_string = "voice_common"; // 0x334 PushS
	var_177_int = 1; // 0x335 PushI
	var_178_int = var_103_int + var_177_int; // 0x336 Add
	var_179_int = 3; // 0x337 PushI
	var_180_int = var_178_int / var_179_int; // 0x338 Mod
	SetVariable(var_176_string, var_180_int); // 0x339 Func
	goto Label_832; // 0x33b Jump
	
Label_832:
	goto Label_851; // 0x340 Jump
	
Label_851:
	var_96_bool = 1; // 0x353 MovB
	return 4; // 0x354 Return
	
Label_828:
	var_181_string = "voice_common"; // 0x33c PushS
	var_182_int = 0; // 0x33d PushI
	SetVariable(var_181_string, var_182_int); // 0x33e Func
	
Label_833:
	var_183_bool = 0; var_184_object = Obj(); // 0x341 PushV
	var_184_object = var_97_object; // 0x342 Mov
	func_890(var_184_object); // 0x343 NEW_2
	var_185_bool = var_183_bool == 0; // 0x345 Not
	if(var_185_bool == 0) goto Label_847; // 0x346 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x347 PushV
	var_187_object = var_97_object; // 0x348 Mov
	func_853(var_187_object); // 0x349 NEW_2
	var_188_bool = var_186_bool == 0; // 0x34b Not
	if(var_188_bool == 0) goto Label_847; // 0x34c JumpB
	var_96_bool = 0; // 0x34d MovB
	return 4; // 0x34e Return
	
Label_847:
	var_189_string = "voice_common"; // 0x34f PushS
	var_190_int = 1; // 0x350 PushI
	SetVariable(var_189_string, var_190_int); // 0x351 Func
}


func_1185(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x4a1 PushV
	var_90_string = "branch"; // 0x4a2 PushS
	GetVariable(var_90_string, var_89_int); // 0x4a3 Func
	var_91_int = 0; // 0x4a5 PushI
	var_92_bool = var_89_int == var_91_int; // 0x4a6 Eq
	if(var_92_bool == 0) goto Label_1195; // 0x4a7 JumpB
	var_87_int = 1; // 0x4a8 MovI
	return 2; // 0x4a9 Return
	
Label_1195:
	var_93_int = 1; // 0x4ab PushI
	var_94_bool = var_89_int == var_93_int; // 0x4ac Eq
	if(var_94_bool == 0) goto Label_1200; // 0x4ad JumpB
	var_87_int = 2; // 0x4ae MovI
	return 2; // 0x4af Return
	
Label_1200:
	var_87_int = 3; // 0x4b0 MovI
	return 2; // 0x4b1 Return
}


func_1059()
{
	var_13_string = "b11q01VictimChoosed"; // 0x424 PushS
	var_14_int = 1; // 0x425 PushI
	SetVariable(var_13_string, var_14_int); // 0x426 Func
	var_15_string = "b11q01KillLara"; // 0x428 PushS
	var_16_int = 1; // 0x429 PushI
	SetVariable(var_15_string, var_16_int); // 0x42a Func
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x42c PushV
	var_18_string = "volonteers_burah"; // 0x42d MovS
	var_19_string = "disease"; // 0x42e MovS
	var_20_string = "lara"; // 0x42f MovS
	func_1019(var_17_bool, var_18_string, var_19_string, var_20_string); // 0x430 NEW_2
	var_24_string = "Lara is diseased"; // 0x432 PushS
	Trace(var_24_string); // 0x433 Func
	return 0; // 0x435 Return
}


func_933(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x3a5 PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x3a6 Func
	var_16_bool = var_13_bool; // 0x3a8 Push
	if(var_16_bool == 0) goto Label_944; // 0x3a9 JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x3aa Func
	var_17_bool = 0; // 0x3ac PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x3ad Func
	goto Label_948; // 0x3af Jump
	
Label_948:
	return 6; // 0x3b4 Return
	
Label_944:
	var_18_string = "Can't find lsh animation : "; // 0x3b0 PushS
	var_19_int = var_18_string + var_9_string; // 0x3b1 Add
	Trace(var_19_int); // 0x3b2 Func
}


func_684(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x2ac PushV
	GetPosition(var_18_cvector); // 0x2ad Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x2af Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x2b0 PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x2b1 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x2b2 Func
	var_13_bool = var_20_bool; // 0x2b4 Mov
	return 6; // 0x2b5 Return
}


func_949(var_222_string, var_223_bool)
{
	var_226_bool = 0; var_227_float = 0; var_228_float = 0; var_229_bool = 0; var_230_float = 0; var_231_float = 0; // 0x3b5 PushV
	lshHasAnimation(var_229_bool, var_222_string); // 0x3b6 Func
	var_232_bool = var_229_bool; // 0x3b8 Push
	if(var_232_bool == 0) goto Label_959; // 0x3b9 JumpB
	lshGetAnimTimes(var_222_string, var_230_float, var_231_float); // 0x3ba Func
	lshPlayAnimation(var_230_float, var_231_float, var_223_bool); // 0x3bc Func
	goto Label_963; // 0x3be Jump
	
Label_963:
	return 6; // 0x3c3 Return
	
Label_959:
	var_233_string = "Can't find lsh animation : "; // 0x3bf PushS
	var_234_int = var_233_string + var_222_string; // 0x3c0 Add
	Trace(var_234_int); // 0x3c1 Func
}


func_1078()
{
	var_216_string = "oob11Lara1"; // 0x437 PushS
	var_217_int = 1; // 0x438 PushI
	SetVariable(var_216_string, var_217_int); // 0x439 Func
	return 0; // 0x43b Return
}


func_694(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x2b6 PushV
	GetPosition(var_12_cvector); // 0x2b7 ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x2b9 PushV
	var_14_cvector = var_12_cvector; // 0x2ba Mov
	func_684(var_13_bool, var_14_cvector); // 0x2bb NEW_2
	var_9_bool = var_13_bool; // 0x2bc Mov
	return 2; // 0x2be Return
}


func_1084()
{
	var_27_string = "b11q01"; // 0x43d PushS
	var_28_int = 2; // 0x43e PushI
	SetVariable(var_27_string, var_28_int); // 0x43f Func
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x441 PushV
	var_30_string = "quest_b11_01"; // 0x442 MovS
	var_31_string = "open_well_exit"; // 0x443 MovS
	func_1007(var_29_bool, var_30_string, var_31_string); // 0x444 NEW_2
	return 0; // 0x446 Return
}


func_703(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x2bf PushV
	IsLoaded(var_7_bool); // 0x2c0 Func
	var_5_bool = var_7_bool; // 0x2c2 Mov
	return 2; // 0x2c3 Return
}


func_708(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x2c4 PushV
	GetPosition(var_48_cvector); // 0x2c5 ObjFunc
	GetEyesHeight(var_47_float); // 0x2c7 ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x2c9 PushE
	var_56_float = var_56_float + var_47_float; // 0x2ca Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x2cb PopE
	GetPosition(var_49_cvector); // 0x2cc Func
	GetEyesHeight(var_47_float); // 0x2ce Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x2d0 PushE
	var_57_float = var_57_float + var_47_float; // 0x2d1 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x2d2 PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x2d3 Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2d4 PushE
	var_58_float = 0; // 0x2d5 MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2d6 PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x2d7 Or
	var_60_float = sqrt(var_59_int); // 0x2d8 Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x2d9 Div2
	var_51_cvector = -var_50_cvector; // 0x2da Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x2db Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x2dc PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x2dd PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x2de Xor2
	func_992(var_62_cvector, var_63_cvector); // 0x2df NEW_2
	var_70_int = 25; // 0x2e1 PushI
	var_71_float = var_62_cvector * var_70_int; // 0x2e2 Mult
	var_72_int = var_61_float + var_71_float; // 0x2e3 Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x2e4 PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x2e5 Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x2e6 Add2
	IsOverrideActive(var_54_bool); // 0x2e7 Func
	var_74_bool = var_54_bool; // 0x2e9 Push
	if(var_74_bool == 0) goto Label_749; // 0x2ea JumpB
	var_35_bool = 0; // 0x2eb MovB
	return 18; // 0x2ec Return
	
Label_749:
	StopWorld(); // 0x2ed Func
	var_75_bool = 1; // 0x2ef PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x2f0 Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x2f2 PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x2f3 PushE
	Rotate(var_76_float, var_77_float); // 0x2f4 Func
	var_78_bool = 0; // 0x2f6 PushV
	func_1048(var_78_bool); // 0x2f7 NEW_2
	if(var_78_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_771; // 0x2fa Jump
	
Label_771:
	CameraWaitForPlayFinish(); // 0x303 Func
	ResumeWorld(); // 0x305 Func
	var_35_bool = 1; // 0x307 MovB
	return 18; // 0x308 Return
	
Label_763:
	var_79_string = "head"; // 0x2fb PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x2fc Func
	var_80_bool = var_55_bool; // 0x2fe Push
	if(var_80_bool == 0) goto Label_771; // 0x2ff JumpB
	var_81_string = "head"; // 0x300 PushS
	LookAsyncCamera(var_81_string); // 0x301 Func
}


func_964(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0; // 0x3c4 PushV
	var_134_bool = 0; // 0x3c5 PushV
	func_1048(var_134_bool); // 0x3c6 NEW_2
	if(var_134_bool == 0) goto Label_977; // 0x3c8 JumpB
	lshHasSpeech(var_133_bool, var_131_string); // 0x3c9 Func
	var_135_bool = var_133_bool; // 0x3cb Push
	if(var_135_bool == 0) goto Label_977; // 0x3cc JumpB
	lshPlaySpeech(var_131_string); // 0x3cd Func
	var_130_bool = 1; // 0x3cf MovB
	return 2; // 0x3d0 Return
	
Label_977:
	var_130_bool = 0; // 0x3d1 MovB
	return 2; // 0x3d2 Return
}


func_1095(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x448 PushV
	var_202_string = "b11q01VictimChoosed"; // 0x449 MovS
	func_1002(var_201_int, var_202_string); // 0x44a NEW_2
	var_205_int = 0; // 0x44c PushI
	var_206_bool = var_201_int != var_205_int; // 0x44d Neq
	if(var_206_bool == 0) goto Label_1105; // 0x44e JumpB
	var_199_bool = 1; // 0x44f MovB
	return 0; // 0x450 Return
	
Label_1105:
	var_199_bool = 0; // 0x451 MovB
	return 0; // 0x452 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object; // 0x52 TMov
	var_1_object = var_191_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_197_int = 1; // 0x55 PushI
	if(var_197_int == 0) goto Label_185; // 0x56 JumpB
	var_198_bool = 0; // 0x57 PushV
	var_198_bool = 0; // 0x58 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x59 PushV
	var_200_object = var_1_object; // 0x5a MovT
	func_1095(var_200_object); // 0x5b NEW_2
	var_207_bool = var_199_bool == 0; // 0x5d Not
	if(var_207_bool == 0) goto Label_101; // 0x5e JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x5f PushV
	var_209_object = var_1_object; // 0x60 MovT
	func_1107(var_209_object); // 0x61 NEW_2
	if(var_208_bool == 0) goto Label_101; // 0x63 JumpB
	var_198_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_198_bool == 0) goto Label_122; // 0x65 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x66 PushV
	var_214_object = var_1_object; // 0x67 MovT
	var_215_object = var_0_object; // 0x68 MovT
	func_1078(); // 0x69 NEW_2
	var_218_string = ""; // 0x6b PushV
	var_218_string = "Tiredness"; // 0x6c MovS
	func_215(var_192_object, var_218_string); // 0x6d NEW_2
	var_235_int = 522012; // 0x6f PushI
	SetMessage(var_235_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_236_int = 523423; // 0x74 PushI
	var_237_int = 24645; // 0x75 PushI
	var_238_int = 24644; // 0x76 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x77 TObjFunc
	goto Label_185; // 0x79 Jump
	
Label_185:
	var_239_bool = 0; // 0xb9 PushV
	func_1048(var_239_bool); // 0xba NEW_2
	if(var_239_bool == 0) goto Label_200; // 0xbc JumpB
	
Label_189:
	lshWaitForAnimEnd(); // 0xbd Func
	var_240_string = var_3_string; // 0xbf PushT
	if(var_240_string == 0) goto Label_194; // 0xc0 JumpB
	goto Label_199; // 0xc1 Jump
	
Label_199:
	goto Label_214; // 0xc7 Jump
	
Label_214:
	return 0; // 0xd6 Return
	
Label_194:
	var_241_string = ""; // 0xc2 PushV
	var_241_string = var_2_object; // 0xc3 MovT
	func_933(var_241_string); // 0xc4 NEW_2
	goto Label_189; // 0xc6 Jump
	
Label_200:
	var_252_string = "all"; // 0xc8 PushS
	var_253_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xca Func
	
Label_204:
	WaitForAnimEnd(); // 0xcc Func
	var_254_string = var_3_string; // 0xce PushT
	if(var_254_string == 0) goto Label_209; // 0xcf JumpB
	goto Label_214; // 0xd0 Jump
	
Label_209:
	var_255_string = "all"; // 0xd1 PushS
	var_256_string = "idle"; // 0xd2 PushS
	PlayAnimation(var_255_string, var_256_string); // 0xd3 Func
	goto Label_204; // 0xd5 Jump
	
Label_122:
	var_257_bool = 0; var_258_object = Obj(); // 0x7a PushV
	var_258_object = var_1_object; // 0x7b MovT
	func_1095(var_258_object); // 0x7c NEW_2
	var_259_bool = var_257_bool == 0; // 0x7e Not
	if(var_259_bool == 0) goto Label_148; // 0x7f JumpB
	var_260_string = ""; // 0x80 PushV
	var_260_string = "Neutral"; // 0x81 MovS
	func_215(var_192_object, var_260_string); // 0x82 NEW_2
	var_261_int = 522016; // 0x84 PushI
	SetMessage(var_261_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_262_int = 522017; // 0x89 PushI
	var_263_int = -1; // 0x8a PushI
	var_264_int = 23187; // 0x8b PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x8c TObjFunc
	var_265_int = 522018; // 0x8e PushI
	var_266_int = -1; // 0x8f PushI
	var_267_int = 23188; // 0x90 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x91 TObjFunc
	goto Label_185; // 0x93 Jump
	
Label_148:
	var_268_string = ""; // 0x94 PushV
	var_268_string = "Neutral"; // 0x95 MovS
	func_215(var_192_object, var_268_string); // 0x96 NEW_2
	var_269_int = 522014; // 0x98 PushI
	SetMessage(var_269_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_270_int = 523455; // 0x9d PushI
	var_271_int = -1; // 0x9e PushI
	var_272_int = 24681; // 0x9f PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xa0 TObjFunc
	var_273_bool = 0; var_274_object = Obj(); // 0xa2 PushV
	var_274_object = var_1_object; // 0xa3 MovT
	func_1119(var_274_object); // 0xa4 NEW_2
	if(var_273_bool == 0) goto Label_172; // 0xa6 JumpB
	var_279_int = 522015; // 0xa7 PushI
	var_280_int = -1; // 0xa8 PushI
	var_281_int = 23185; // 0xa9 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xaa TObjFunc
	
Label_172:
	var_282_bool = 0; var_283_object = Obj(); // 0xac PushV
	var_283_object = var_1_object; // 0xad MovT
	func_1119(var_283_object); // 0xae NEW_2
	if(var_282_bool == 0) goto Label_182; // 0xb0 JumpB
	var_284_int = 523456; // 0xb1 PushI
	var_285_int = -1; // 0xb2 PushI
	var_286_int = 24682; // 0xb3 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xb4 TObjFunc
	
Label_182:
	goto Label_185; // 0xb6 Jump
}


func_1107(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x454 PushV
	var_211_string = "oob11Lara1"; // 0x455 MovS
	func_1002(var_210_int, var_211_string); // 0x456 NEW_2
	var_212_int = 0; // 0x458 PushI
	var_213_bool = var_210_int == var_212_int; // 0x459 Eq
	if(var_213_bool == 0) goto Label_1117; // 0x45a JumpB
	var_208_bool = 1; // 0x45b MovB
	return 0; // 0x45c Return
	
Label_1117:
	var_208_bool = 0; // 0x45d MovB
	return 0; // 0x45e Return
}


func_979()
{
	var_8_bool = 0; // 0x3d3 PushV
	func_1048(var_8_bool); // 0x3d4 NEW_2
	if(var_8_bool == 0) goto Label_985; // 0x3d6 JumpB
	lshStopSpeech(); // 0x3d7 Func
	
Label_985:
	return 0; // 0x3d9 Return
}


func_853(var_107_bool)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = ""; // 0x355 PushV
	var_114_string = "c"; // 0x356 MovS
	var_115_int = 0; // 0x357 MovI
	
Label_856:
	var_119_int = 1; // 0x358 PushI
	if(var_119_int == 0) goto Label_869; // 0x359 JumpB
	var_120_int = 1; // 0x35a PushI
	var_121_int = var_115_int + var_120_int; // 0x35b Add
	var_122_int = var_114_string + var_121_int; // 0x35c Add
	HasProperty(var_122_int, var_116_bool); // 0x35d ObjFunc
	var_123_bool = var_116_bool == 0; // 0x35f Not
	if(var_123_bool == 0) goto Label_866; // 0x360 JumpB
	goto Label_869; // 0x361 Jump
	
Label_869:
	var_124_bool = var_115_int == 0; // 0x365 Not
	if(var_124_bool == 0) goto Label_873; // 0x366 JumpB
	var_107_bool = 0; // 0x367 MovB
	return 10; // 0x368 Return
	
Label_873:
	var_117_int = 0; // 0x369 MovI
	var_125_int = 1; // 0x36a PushI
	var_126_bool = var_115_int > var_125_int; // 0x36b GT
	if(var_126_bool == 0) goto Label_879; // 0x36c JumpB
	irand(var_117_int, var_115_int); // 0x36d Func
	
Label_879:
	var_127_int = 1; // 0x36f PushI
	var_128_int = var_117_int + var_127_int; // 0x370 Add
	var_129_int = var_114_string + var_128_int; // 0x371 Add
	GetProperty(var_129_int, var_118_string); // 0x372 ObjFunc
	var_130_bool = 0; var_131_string = ""; // 0x374 PushV
	var_131_string = var_118_string; // 0x375 Mov
	func_964(var_130_bool, var_131_string); // 0x376 NEW_2
	var_107_bool = var_130_bool; // 0x377 Mov
	return 10; // 0x379 Return
	
Label_866:
	var_136_int = 1; // 0x362 PushI
	var_115_int = var_115_int + var_136_int; // 0x363 Add2
	goto Label_856; // 0x364 Jump
}


func_215(var_2_object, var_218_string)
{
	var_219_bool = 0; // 0xd8 PushV
	func_1048(var_219_bool); // 0xd9 NEW_2
	var_220_bool = var_219_bool == 0; // 0xdb Not
	if(var_220_bool == 0) goto Label_222; // 0xdc JumpB
	return 0; // 0xdd Return
	
Label_222:
	var_221_bool = var_218_string == var_2_object; // 0xde Eq
	if(var_221_bool == 0) goto Label_225; // 0xdf JumpB
	return 0; // 0xe0 Return
	
Label_225:
	var_222_string = ""; var_223_bool = 0; // 0xe1 PushV
	var_222_string = var_218_string; // 0xe2 Mov
	var_224_string = ""; // 0xe3 PushS
	var_225_bool = var_218_string == var_224_string; // 0xe4 Eq
	if(var_225_bool == 0) goto Label_232; // 0xe5 JumpB
	var_223_bool = 0; // 0xe6 MovB
	goto Label_233; // 0xe7 Jump
	
Label_233:
	func_949(var_222_string, var_223_bool); // 0xe9 NEW_2
	var_2_object = var_218_string; // 0xeb TMov
	return 0; // 0xec Return
	
Label_232:
	var_223_bool = 1; // 0xe8 MovB
}


func_986(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x3da PushV
	self(var_100_object); // 0x3db Func
	var_98_object = var_100_object; // 0x3dd Mov
	return 2; // 0x3de Return
}


func_1119(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x460 PushV
	var_276_string = "b11q01KillLara"; // 0x461 MovS
	func_1002(var_275_int, var_276_string); // 0x462 NEW_2
	var_277_int = 0; // 0x464 PushI
	var_278_bool = var_275_int != var_277_int; // 0x465 Neq
	if(var_278_bool == 0) goto Label_1129; // 0x466 JumpB
	var_273_bool = 1; // 0x467 MovB
	return 0; // 0x468 Return
	
Label_1129:
	var_273_bool = 0; // 0x469 MovB
	return 0; // 0x46a Return
}


func_992(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x3e0 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x3e1 Or
	var_66_float = sqrt(var_67_int); // 0x3e2 Sqrt2
	var_68_float = 0.0; // 0x3e3 PushF
	var_69_bool = var_66_float < var_68_float; // 0x3e4 LT
	if(var_69_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x3e6 MovV
	return 2; // 0x3e7 Return
	
Label_1000:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x3e8 Div2
	return 2; // 0x3e9 Return
}


func_1002(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x3ea PushV
	GetVariable(var_202_string, var_204_int); // 0x3eb Func
	var_201_int = var_204_int; // 0x3ed Mov
	return 2; // 0x3ee Return
}


func_1131()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x46b PushV
	var_41_int = 315; // 0x46c PushI
	var_42_int = 1; // 0x46d PushI
	var_43_int = 522057; // 0x46e PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x46f Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x471 PushV
	var_45_object = var_40_object; // 0x472 Mov
	var_46_int = 313; // 0x473 MovI
	func_1157(var_44_bool, var_45_object, var_46_int); // 0x474 NEW_2
	return 2; // 0x476 Return
}


func_1007(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3ef PushV
	FindActor(var_33_object, var_30_string); // 0x3f0 Func
	var_34_bool = var_33_object == 0; // 0x3f2 NullEq
	if(var_34_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_29_bool = 0; // 0x3f4 MovB
	return 2; // 0x3f5 Return
	
Label_1014:
	Trigger(var_33_object, var_31_string); // 0x3f6 Func
	var_29_bool = 1; // 0x3f8 MovB
	return 2; // 0x3f9 Return
}


func_1144(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x478 PushV
	GetDiaryRoot(var_55_object); // 0x479 Func
	var_56_bool = var_55_object == 0; // 0x47b Not
	if(var_56_bool == 0) goto Label_1154; // 0x47c JumpB
	var_57_string = "Can't retrieve diary root"; // 0x47d PushS
	Trace(var_57_string); // 0x47e Func
	var_53_object = 0; // 0x480 MovB
	return 2; // 0x481 Return
	
Label_1154:
	var_53_object = var_55_object; // 0x482 Mov
	return 2; // 0x483 Return
}


func_890(var_138_bool)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; // 0x37a PushV
	var_150_string = "d"; // 0x37b PushS
	var_151_int = 0; // 0x37c PushV
	func_1031(var_151_int); // 0x37d NEW_2
	var_157_int = var_150_string + var_151_int; // 0x37f Add
	var_158_string = "m"; // 0x380 PushS
	var_145_string = var_157_int + var_158_string; // 0x381 Add2
	var_146_int = 0; // 0x382 MovI
	
Label_899:
	var_159_int = 1; // 0x383 PushI
	if(var_159_int == 0) goto Label_912; // 0x384 JumpB
	var_160_int = 1; // 0x385 PushI
	var_161_int = var_146_int + var_160_int; // 0x386 Add
	var_162_int = var_145_string + var_161_int; // 0x387 Add
	HasProperty(var_162_int, var_147_bool); // 0x388 ObjFunc
	var_163_bool = var_147_bool == 0; // 0x38a Not
	if(var_163_bool == 0) goto Label_909; // 0x38b JumpB
	goto Label_912; // 0x38c Jump
	
Label_912:
	var_164_bool = var_146_int == 0; // 0x390 Not
	if(var_164_bool == 0) goto Label_916; // 0x391 JumpB
	var_138_bool = 0; // 0x392 MovB
	return 10; // 0x393 Return
	
Label_916:
	var_148_int = 0; // 0x394 MovI
	var_165_int = 1; // 0x395 PushI
	var_166_bool = var_146_int > var_165_int; // 0x396 GT
	if(var_166_bool == 0) goto Label_922; // 0x397 JumpB
	irand(var_148_int, var_146_int); // 0x398 Func
	
Label_922:
	var_167_int = 1; // 0x39a PushI
	var_168_int = var_148_int + var_167_int; // 0x39b Add
	var_169_int = var_145_string + var_168_int; // 0x39c Add
	GetProperty(var_169_int, var_149_string); // 0x39d ObjFunc
	var_170_bool = 0; var_171_string = ""; // 0x39f PushV
	var_171_string = var_149_string; // 0x3a0 Mov
	func_964(var_170_bool, var_171_string); // 0x3a1 NEW_2
	var_138_bool = var_170_bool; // 0x3a2 Mov
	return 10; // 0x3a4 Return
	
Label_909:
	var_172_int = 1; // 0x38d PushI
	var_146_int = var_146_int + var_172_int; // 0x38e Add2
	goto Label_899; // 0x38f Jump
}


func_1019(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x3fb PushV
	FindActor(var_22_object, var_18_string); // 0x3fc Func
	var_23_bool = var_22_object == 0; // 0x3fe NullEq
	if(var_23_bool == 0) goto Label_1026; // 0x3ff JumpB
	var_17_bool = 0; // 0x400 MovB
	return 2; // 0x401 Return
	
Label_1026:
	Trigger(var_22_object, var_19_string, var_20_string); // 0x402 Func
	var_17_bool = 1; // 0x404 MovB
	return 2; // 0x405 Return
}


func_637(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x27e PushV
	var_25_object = var_23_object; // 0x27f Mov
	TaskCall(0); // 0x280 TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x281 NEW_2
	TaskReturn(); // 0x282 TaskReturn
	return 0; // 0x284 Return
}


