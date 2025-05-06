task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xb9 PushI
	if(var_12_int == 0) goto Label_614; // 0xba JumpB
	func_943(); // 0xbc NEW_2
	var_14_int = 19421; // 0xbe PushI
	var_15_bool = var_11_object == var_14_int; // 0xbf Eq
	if(var_15_bool == 0) goto Label_198; // 0xc0 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xc1 PushV
	var_16_object = var_1_object; // 0xc2 MovT
	var_17_object = var_0_object; // 0xc3 MovT
	func_1022(); // 0xc4 NEW_2
	
Label_198:
	var_48_int = 19422; // 0xc6 PushI
	var_49_bool = var_11_object == var_48_int; // 0xc7 Eq
	if(var_49_bool == 0) goto Label_206; // 0xc8 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xc9 PushV
	var_50_object = var_1_object; // 0xca MovT
	var_51_object = var_0_object; // 0xcb MovT
	func_1022(); // 0xcc NEW_2
	
Label_206:
	var_52_int = 19238; // 0xce PushI
	var_53_bool = var_10_bool == var_52_int; // 0xcf Eq
	if(var_53_bool == 0) goto Label_259; // 0xd0 JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xd1 PushV
	var_55_object = var_1_object; // 0xd2 MovT
	func_1038(var_55_object); // 0xd3 NEW_2
	if(var_54_bool == 0) goto Label_239; // 0xd5 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xd6 PushV
	var_62_object = var_1_object; // 0xd7 MovT
	var_63_object = var_0_object; // 0xd8 MovT
	func_1011(); // 0xd9 NEW_2
	var_72_string = ""; // 0xdb PushV
	var_72_string = "Neutral"; // 0xdc MovS
	func_162(var_11_object, var_72_string); // 0xdd NEW_2
	var_89_int = 518119; // 0xdf PushI
	SetMessage(var_89_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_90_int = 518120; // 0xe4 PushI
	var_91_int = 19389; // 0xe5 PushI
	var_92_int = 19239; // 0xe6 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xe7 TObjFunc
	var_93_int = 518319; // 0xe9 PushI
	var_94_int = 19426; // 0xea PushI
	var_95_int = 19423; // 0xeb PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xec TObjFunc
	return 0; // 0xee Return
	
Label_239:
	var_96_string = ""; // 0xef PushV
	var_96_string = "Neutral"; // 0xf0 MovS
	func_162(var_11_object, var_96_string); // 0xf1 NEW_2
	var_97_int = 520033; // 0xf3 PushI
	SetMessage(var_97_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_98_int = 520034; // 0xf8 PushI
	var_99_int = -1; // 0xf9 PushI
	var_100_int = 21218; // 0xfa PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xfb TObjFunc
	var_101_int = 527016; // 0xfd PushI
	var_102_int = -1; // 0xfe PushI
	var_103_int = 28299; // 0xff PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_104_int = 19426; // 0x103 PushI
	var_105_bool = var_10_bool == var_104_int; // 0x104 Eq
	if(var_105_bool == 0) goto Label_282; // 0x105 JumpB
	var_106_string = ""; // 0x106 PushV
	var_106_string = "Neutral"; // 0x107 MovS
	func_162(var_11_object, var_106_string); // 0x108 NEW_2
	var_107_int = 518322; // 0x10a PushI
	SetMessage(var_107_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_108_int = 518323; // 0x10f PushI
	var_109_int = 19429; // 0x110 PushI
	var_110_int = 19427; // 0x111 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x112 TObjFunc
	var_111_int = 518328; // 0x114 PushI
	var_112_int = 28297; // 0x115 PushI
	var_113_int = 19433; // 0x116 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_114_int = 28297; // 0x11a PushI
	var_115_bool = var_10_bool == var_114_int; // 0x11b Eq
	if(var_115_bool == 0) goto Label_300; // 0x11c JumpB
	var_116_string = ""; // 0x11d PushV
	var_116_string = "Neutral"; // 0x11e MovS
	func_162(var_11_object, var_116_string); // 0x11f NEW_2
	var_117_int = 527014; // 0x121 PushI
	SetMessage(var_117_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_118_int = 527015; // 0x126 PushI
	var_119_int = 19389; // 0x127 PushI
	var_120_int = 28298; // 0x128 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_121_int = 19429; // 0x12c PushI
	var_122_bool = var_10_bool == var_121_int; // 0x12d Eq
	if(var_122_bool == 0) goto Label_318; // 0x12e JumpB
	var_123_string = ""; // 0x12f PushV
	var_123_string = "Neutral"; // 0x130 MovS
	func_162(var_11_object, var_123_string); // 0x131 NEW_2
	var_124_int = 518325; // 0x133 PushI
	SetMessage(var_124_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_125_int = 518326; // 0x138 PushI
	var_126_int = 19389; // 0x139 PushI
	var_127_int = 19430; // 0x13a PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_128_int = 19389; // 0x13e PushI
	var_129_bool = var_10_bool == var_128_int; // 0x13f Eq
	if(var_129_bool == 0) goto Label_346; // 0x140 JumpB
	var_130_string = ""; // 0x141 PushV
	var_130_string = "Neutral"; // 0x142 MovS
	func_162(var_11_object, var_130_string); // 0x143 NEW_2
	var_131_int = 518286; // 0x145 PushI
	SetMessage(var_131_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_132_int = 518287; // 0x14a PushI
	var_133_int = 19391; // 0x14b PushI
	var_134_int = 19390; // 0x14c PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x14d TObjFunc
	var_135_int = 518320; // 0x14f PushI
	var_136_int = 19391; // 0x150 PushI
	var_137_int = 19424; // 0x151 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x152 TObjFunc
	var_138_int = 518327; // 0x154 PushI
	var_139_int = 19391; // 0x155 PushI
	var_140_int = 19432; // 0x156 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_141_int = 19391; // 0x15a PushI
	var_142_bool = var_10_bool == var_141_int; // 0x15b Eq
	if(var_142_bool == 0) goto Label_369; // 0x15c JumpB
	var_143_string = ""; // 0x15d PushV
	var_143_string = "Neutral"; // 0x15e MovS
	func_162(var_11_object, var_143_string); // 0x15f NEW_2
	var_144_int = 518288; // 0x161 PushI
	SetMessage(var_144_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_145_int = 518307; // 0x166 PushI
	var_146_int = 19412; // 0x167 PushI
	var_147_int = 19411; // 0x168 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x169 TObjFunc
	var_148_int = 518321; // 0x16b PushI
	var_149_int = 19436; // 0x16c PushI
	var_150_int = 19425; // 0x16d PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_151_int = 19436; // 0x171 PushI
	var_152_bool = var_10_bool == var_151_int; // 0x172 Eq
	if(var_152_bool == 0) goto Label_392; // 0x173 JumpB
	var_153_string = ""; // 0x174 PushV
	var_153_string = "Neutral"; // 0x175 MovS
	func_162(var_11_object, var_153_string); // 0x176 NEW_2
	var_154_int = 518330; // 0x178 PushI
	SetMessage(var_154_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_155_int = 518332; // 0x17d PushI
	var_156_int = 19412; // 0x17e PushI
	var_157_int = 19440; // 0x17f PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x180 TObjFunc
	var_158_int = 518333; // 0x182 PushI
	var_159_int = -1; // 0x183 PushI
	var_160_int = 19441; // 0x184 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_161_int = 19412; // 0x188 PushI
	var_162_bool = var_10_bool == var_161_int; // 0x189 Eq
	if(var_162_bool == 0) goto Label_410; // 0x18a JumpB
	var_163_string = ""; // 0x18b PushV
	var_163_string = "Neutral"; // 0x18c MovS
	func_162(var_11_object, var_163_string); // 0x18d NEW_2
	var_164_int = 518308; // 0x18f PushI
	SetMessage(var_164_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_165_int = 518334; // 0x194 PushI
	var_166_int = 19444; // 0x195 PushI
	var_167_int = 19443; // 0x196 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_168_int = 19444; // 0x19a PushI
	var_169_bool = var_10_bool == var_168_int; // 0x19b Eq
	if(var_169_bool == 0) goto Label_433; // 0x19c JumpB
	var_170_string = ""; // 0x19d PushV
	var_170_string = "Neutral"; // 0x19e MovS
	func_162(var_11_object, var_170_string); // 0x19f NEW_2
	var_171_int = 518335; // 0x1a1 PushI
	SetMessage(var_171_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_172_int = 518309; // 0x1a6 PushI
	var_173_int = 19414; // 0x1a7 PushI
	var_174_int = 19413; // 0x1a8 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1a9 TObjFunc
	var_175_int = 518340; // 0x1ab PushI
	var_176_int = 19451; // 0x1ac PushI
	var_177_int = 19450; // 0x1ad PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_178_int = 19451; // 0x1b1 PushI
	var_179_bool = var_10_bool == var_178_int; // 0x1b2 Eq
	if(var_179_bool == 0) goto Label_451; // 0x1b3 JumpB
	var_180_string = ""; // 0x1b4 PushV
	var_180_string = "Neutral"; // 0x1b5 MovS
	func_162(var_11_object, var_180_string); // 0x1b6 NEW_2
	var_181_int = 518341; // 0x1b8 PushI
	SetMessage(var_181_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_182_int = 518342; // 0x1bd PushI
	var_183_int = 19414; // 0x1be PushI
	var_184_int = 19452; // 0x1bf PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1c0 TObjFunc
	return 0; // 0x1c2 Return
	
Label_451:
	var_185_int = 19414; // 0x1c3 PushI
	var_186_bool = var_10_bool == var_185_int; // 0x1c4 Eq
	if(var_186_bool == 0) goto Label_474; // 0x1c5 JumpB
	var_187_string = ""; // 0x1c6 PushV
	var_187_string = "Neutral"; // 0x1c7 MovS
	func_162(var_11_object, var_187_string); // 0x1c8 NEW_2
	var_188_int = 518310; // 0x1ca PushI
	SetMessage(var_188_int); // 0x1cb TObjFunc
	ClearReplies(); // 0x1cd TObjFunc
	var_189_int = 518311; // 0x1cf PushI
	var_190_int = 19417; // 0x1d0 PushI
	var_191_int = 19415; // 0x1d1 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1d2 TObjFunc
	var_192_int = 527138; // 0x1d4 PushI
	var_193_int = 19417; // 0x1d5 PushI
	var_194_int = 28436; // 0x1d6 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_195_int = 19417; // 0x1da PushI
	var_196_bool = var_10_bool == var_195_int; // 0x1db Eq
	if(var_196_bool == 0) goto Label_497; // 0x1dc JumpB
	var_197_string = ""; // 0x1dd PushV
	var_197_string = "Neutral"; // 0x1de MovS
	func_162(var_11_object, var_197_string); // 0x1df NEW_2
	var_198_int = 518313; // 0x1e1 PushI
	SetMessage(var_198_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_199_int = 527017; // 0x1e6 PushI
	var_200_int = 28301; // 0x1e7 PushI
	var_201_int = 28300; // 0x1e8 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1e9 TObjFunc
	var_202_int = 518343; // 0x1eb PushI
	var_203_int = 19455; // 0x1ec PushI
	var_204_int = 19454; // 0x1ed PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_205_int = 19455; // 0x1f1 PushI
	var_206_bool = var_10_bool == var_205_int; // 0x1f2 Eq
	if(var_206_bool == 0) goto Label_515; // 0x1f3 JumpB
	var_207_string = ""; // 0x1f4 PushV
	var_207_string = "Neutral"; // 0x1f5 MovS
	func_162(var_11_object, var_207_string); // 0x1f6 NEW_2
	var_208_int = 518344; // 0x1f8 PushI
	SetMessage(var_208_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_209_int = 518345; // 0x1fd PushI
	var_210_int = 19457; // 0x1fe PushI
	var_211_int = 19456; // 0x1ff PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_212_int = 19457; // 0x203 PushI
	var_213_bool = var_10_bool == var_212_int; // 0x204 Eq
	if(var_213_bool == 0) goto Label_538; // 0x205 JumpB
	var_214_string = ""; // 0x206 PushV
	var_214_string = "Neutral"; // 0x207 MovS
	func_162(var_11_object, var_214_string); // 0x208 NEW_2
	var_215_int = 518346; // 0x20a PushI
	SetMessage(var_215_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_216_int = 518347; // 0x20f PushI
	var_217_int = 19418; // 0x210 PushI
	var_218_int = 19458; // 0x211 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x212 TObjFunc
	var_219_int = 518348; // 0x214 PushI
	var_220_int = -1; // 0x215 PushI
	var_221_int = 19459; // 0x216 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x217 TObjFunc
	return 0; // 0x219 Return
	
Label_538:
	var_222_int = 28301; // 0x21a PushI
	var_223_bool = var_10_bool == var_222_int; // 0x21b Eq
	if(var_223_bool == 0) goto Label_556; // 0x21c JumpB
	var_224_string = ""; // 0x21d PushV
	var_224_string = "Neutral"; // 0x21e MovS
	func_162(var_11_object, var_224_string); // 0x21f NEW_2
	var_225_int = 527018; // 0x221 PushI
	SetMessage(var_225_int); // 0x222 TObjFunc
	ClearReplies(); // 0x224 TObjFunc
	var_226_int = 518312; // 0x226 PushI
	var_227_int = 19418; // 0x227 PushI
	var_228_int = 19416; // 0x228 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x229 TObjFunc
	return 0; // 0x22b Return
	
Label_556:
	var_229_int = 19418; // 0x22c PushI
	var_230_bool = var_10_bool == var_229_int; // 0x22d Eq
	if(var_230_bool == 0) goto Label_579; // 0x22e JumpB
	var_231_string = ""; // 0x22f PushV
	var_231_string = "Neutral"; // 0x230 MovS
	func_162(var_11_object, var_231_string); // 0x231 NEW_2
	var_232_int = 518314; // 0x233 PushI
	SetMessage(var_232_int); // 0x234 TObjFunc
	ClearReplies(); // 0x236 TObjFunc
	var_233_int = 518315; // 0x238 PushI
	var_234_int = 19420; // 0x239 PushI
	var_235_int = 19419; // 0x23a PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x23b TObjFunc
	var_236_int = 518339; // 0x23d PushI
	var_237_int = 19420; // 0x23e PushI
	var_238_int = 19449; // 0x23f PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_239_int = 19420; // 0x243 PushI
	var_240_bool = var_10_bool == var_239_int; // 0x244 Eq
	if(var_240_bool == 0) goto Label_602; // 0x245 JumpB
	var_241_string = ""; // 0x246 PushV
	var_241_string = "Neutral"; // 0x247 MovS
	func_162(var_11_object, var_241_string); // 0x248 NEW_2
	var_242_int = 518316; // 0x24a PushI
	SetMessage(var_242_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_243_int = 518317; // 0x24f PushI
	var_244_int = -1; // 0x250 PushI
	var_245_int = 19421; // 0x251 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x252 TObjFunc
	var_246_int = 518318; // 0x254 PushI
	var_247_int = -1; // 0x255 PushI
	var_248_int = 19422; // 0x256 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x257 TObjFunc
	return 0; // 0x259 Return
	
Label_602:
	var_3_string = 1; // 0x25a TMovB
	var_249_bool = 0; // 0x25b PushV
	func_985(var_249_bool); // 0x25c NEW_2
	if(var_249_bool == 0) goto Label_610; // 0x25e JumpB
	lshStopAnimation(); // 0x25f Func
	goto Label_612; // 0x261 Jump
	
Label_612:
	return 0; // 0x264 Return
	
Label_610:
	StopAnimation(); // 0x262 Func
	
Label_614:
	return 0; // 0x266 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_701(var_9_object, var_10_object); // 0x273 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x275 PushV
	var_15_object = var_10_object; // 0x276 Mov
	TaskCall(0); // 0x277 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x278 NEW_2
	TaskReturn(); // 0x279 TaskReturn
	return 0; // 0x27b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x2a7 PushI
	var_12_bool = var_10_int == var_11_int; // 0x2a8 Eq
	if(var_12_bool == 0) goto Label_700; // 0x2a9 JumpB
	var_13_bool = 0; // 0x2aa PushV
	func_663(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x2ab NEW_2
	if(var_13_bool == 0) goto Label_694; // 0x2ad JumpB
	var_26_bool = var_2_object == 0; // 0x2ae Not
	if(var_26_bool == 0) goto Label_693; // 0x2af JumpB
	var_27_object = Obj(); // 0x2b0 PushV
	var_27_object = var_4_bool; // 0x2b1 MovT
	func_932(var_27_object); // 0x2b2 NEW_2
	var_2_object = 1; // 0x2b4 TMovB
	
Label_693:
	goto Label_700; // 0x2b5 Jump
	
Label_700:
	return 0; // 0x2bc Return
	
Label_694:
	var_34_object = var_2_object; // 0x2b6 PushT
	if(var_34_object == 0) goto Label_700; // 0x2b7 JumpB
	var_35_string = "head"; // 0x2b8 PushS
	UnlookAsync(var_35_string); // 0x2b9 Func
	var_2_object = 0; // 0x2bb TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_615:
	var_10_float = 0; var_11_float = 0; // 0x267 PushV
	var_10_float = 300; // 0x268 MovI
	var_11_float = 100; // 0x269 MovI
	func_636(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x26a NEW_2
	var_72_int = 3; // 0x26c PushI
	Sleep(var_72_int); // 0x26d Func
	goto Label_615; // 0x26f Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_814(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_979(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_977(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_981(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_983(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1100(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_161_bool = var_24_bool == 0; // 0x38 Not
	if(var_161_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_162_object = Obj(); // 0x3f PushV
	var_162_object = var_15_object; // 0x40 Mov
	func_883(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_901(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x385 PushV
	lshHasAnimation(var_141_bool, var_137_string); // 0x386 Func
	var_144_bool = var_141_bool; // 0x388 Push
	if(var_144_bool == 0) goto Label_912; // 0x389 JumpB
	lshGetAnimTimes(var_137_string, var_142_float, var_143_float); // 0x38a Func
	var_145_bool = 0; // 0x38c PushB
	lshPlayAnimation(var_142_float, var_143_float, var_145_bool); // 0x38d Func
	goto Label_916; // 0x38f Jump
	
Label_916:
	return 6; // 0x394 Return
	
Label_912:
	var_146_string = "Can't find lsh animation : "; // 0x390 PushS
	var_147_int = var_146_string + var_137_string; // 0x391 Add
	Trace(var_147_int); // 0x392 Func
}


func_1038(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x40f PushV
	var_96_string = "oob1Birdmask1_1"; // 0x410 MovS
	func_960(var_95_int, var_96_string); // 0x411 NEW_2
	var_99_int = 0; // 0x413 PushI
	var_100_bool = var_95_int == var_99_int; // 0x414 Eq
	if(var_100_bool == 0) goto Label_1048; // 0x415 JumpB
	var_93_bool = 1; // 0x416 MovB
	return 0; // 0x417 Return
	
Label_1048:
	var_93_bool = 0; // 0x418 MovB
	return 0; // 0x419 Return
}


func_917(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x395 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x396 Func
	var_125_bool = var_122_bool; // 0x398 Push
	if(var_125_bool == 0) goto Label_927; // 0x399 JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x39a Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x39c Func
	goto Label_931; // 0x39e Jump
	
Label_931:
	return 6; // 0x3a3 Return
	
Label_927:
	var_126_string = "Can't find lsh animation : "; // 0x39f PushS
	var_127_int = var_126_string + var_115_string; // 0x3a0 Add
	Trace(var_127_int); // 0x3a1 Func
}


func_663(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x297 PushV
	var_16_bool = var_4_bool == 0; // 0x298 NullEq
	if(var_16_bool == 0) goto Label_668; // 0x299 JumpB
	var_13_bool = 0; // 0x29a MovB
	return 2; // 0x29b Return
	
Label_668:
	var_17_float = 0; var_18_object = Obj(); // 0x29c PushV
	var_18_object = var_4_bool; // 0x29d MovT
	func_801(var_18_object); // 0x29e NEW_2
	var_15_float = sqrt(var_17_float); // 0x2a0 Sqrt2
	var_25_object = var_2_object; // 0x2a1 PushT
	if(var_25_object == 0) goto Label_676; // 0x2a2 JumpB
	var_15_float = var_15_float - var_1_object; // 0x2a3 Sub2
	
Label_676:
	var_13_bool = var_15_float < var_0_object; // 0x2a4 LT2
	return 2; // 0x2a5 Return
}


func_1050(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x41a PushV
	GetMainOutdoorScene(var_24_object); // 0x41b Func
	var_26_bool = var_24_object == 0; // 0x41d NullEq
	if(var_26_bool == 0) goto Label_1061; // 0x41e JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x41f PushS
	Trace(var_27_string); // 0x420 Func
	var_25_object = 0; // 0x422 SetNull
	var_21_object = var_25_object; // 0x423 Mov
	return 4; // 0x424 Return
	
Label_1061:
	GetMap(var_25_object); // 0x425 ObjFunc
	var_21_object = var_25_object; // 0x427 Mov
	return 4; // 0x428 Return
}


func_794(var_60_bool)
{
	var_60_bool = 1; // 0x31a MovB
	return 0; // 0x31b Return
}


func_796()
{
	StopAnimation(); // 0x31c Func
	StopGroup0(); // 0x31e Func
	return 0; // 0x320 Return
}


func_801(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x321 PushV
	GetPosition(var_22_cvector); // 0x322 Func
	GetPosition(var_23_cvector); // 0x324 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x326 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x327 Or2
	return 6; // 0x328 Return
}


func_162(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0xa3 PushV
	func_985(var_112_bool); // 0xa4 NEW_2
	var_113_bool = var_112_bool == 0; // 0xa6 Not
	if(var_113_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_114_bool = var_111_string == var_2_object; // 0xa9 Eq
	if(var_114_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_115_string = ""; var_116_bool = 0; // 0xac PushV
	var_115_string = var_111_string; // 0xad Mov
	var_117_string = ""; // 0xae PushS
	var_118_bool = var_111_string == var_117_string; // 0xaf Eq
	if(var_118_bool == 0) goto Label_179; // 0xb0 JumpB
	var_116_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_917(var_115_string, var_116_bool); // 0xb4 NEW_2
	var_2_object = var_111_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_116_bool = 1; // 0xb3 MovB
}


func_932(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3a4 PushV
	GetEyesHeight(var_30_float); // 0x3a5 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3a7 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3a8 PushE
	var_32_float = var_30_float; // 0x3a9 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3aa PopE
	var_33_string = "head"; // 0x3ab PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3ac Func
	return 4; // 0x3ae Return
}


func_809(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x329 PushV
	IsLoaded(var_14_bool); // 0x32a Func
	var_12_bool = var_14_bool; // 0x32c Mov
	return 2; // 0x32d Return
}


func_1067(var_18_object, var_19_string, var_20_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; // 0x42b PushV
	GetMainOutdoorScene(var_34_object); // 0x42c Func
	var_36_bool = var_34_object == 0; // 0x42e NullEq
	if(var_36_bool == 0) goto Label_1076; // 0x42f JumpB
	var_37_string = "Can't find main outdoor scene"; // 0x430 PushS
	Trace(var_37_string); // 0x431 Func
	return 8; // 0x433 Return
	
Label_1076:
	GetLocator(var_19_string, var_35_bool, var_32_cvector, var_33_cvector); // 0x434 ObjFunc
	var_38_bool = var_35_bool == 0; // 0x436 Not
	if(var_38_bool == 0) goto Label_1086; // 0x437 JumpB
	var_39_string = "Warning: outdoor scene locator "; // 0x438 PushS
	var_40_int = var_39_string + var_19_string; // 0x439 Add
	var_41_string = " doesnt exist"; // 0x43a PushS
	var_42_int = var_40_int + var_41_string; // 0x43b Add
	Trace(var_42_int); // 0x43c Func
	
Label_1086:
	GetMap(var_18_object); // 0x43e ObjFunc
	var_43_bool = var_18_object == 0; // 0x440 NullEq
	if(var_43_bool == 0) goto Label_1094; // 0x441 JumpB
	var_44_string = "Can't find map"; // 0x442 PushS
	Trace(var_44_string); // 0x443 Func
	return 8; // 0x445 Return
	
Label_1094:
	var_45_float = GetByIndex(var_32_cvector, 0); // 0x446 PushE
	var_46_float = GetByIndex(var_32_cvector, 2); // 0x447 PushE
	SetMapParams(var_45_float, var_46_float, var_20_float); // 0x448 ObjFunc
	return 8; // 0x44a Return
}


func_814(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x32e PushV
	GetPosition(var_38_cvector); // 0x32f ObjFunc
	GetEyesHeight(var_37_float); // 0x331 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x333 PushE
	var_46_float = var_46_float + var_37_float; // 0x334 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x335 PopE
	GetPosition(var_39_cvector); // 0x336 Func
	GetEyesHeight(var_37_float); // 0x338 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x33a PushE
	var_47_float = var_47_float + var_37_float; // 0x33b Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x33c PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x33d Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x33e PushE
	var_48_float = 0; // 0x33f MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x340 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x341 Or
	var_50_float = sqrt(var_49_int); // 0x342 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x343 Div2
	var_41_cvector = -var_40_cvector; // 0x344 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x345 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x346 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x347 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x348 Xor2
	func_950(var_52_cvector, var_53_cvector); // 0x349 NEW_2
	var_60_int = 25; // 0x34b PushI
	var_61_float = var_52_cvector * var_60_int; // 0x34c Mult
	var_62_int = var_51_float + var_61_float; // 0x34d Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x34e PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x34f Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x350 Add2
	IsOverrideActive(var_44_bool); // 0x351 Func
	var_64_bool = var_44_bool; // 0x353 Push
	if(var_64_bool == 0) goto Label_855; // 0x354 JumpB
	var_25_bool = 0; // 0x355 MovB
	return 18; // 0x356 Return
	
Label_855:
	StopWorld(); // 0x357 Func
	var_65_bool = 1; // 0x359 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x35a Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x35c PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x35d PushE
	Rotate(var_66_float, var_67_float); // 0x35e Func
	var_68_bool = 0; // 0x360 PushV
	func_985(var_68_bool); // 0x361 NEW_2
	if(var_68_bool == 0) goto Label_869; // 0x363 JumpB
	goto Label_877; // 0x364 Jump
	
Label_877:
	CameraWaitForPlayFinish(); // 0x36d Func
	ResumeWorld(); // 0x36f Func
	var_25_bool = 1; // 0x371 MovB
	return 18; // 0x372 Return
	
Label_869:
	var_69_string = "head"; // 0x365 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x366 Func
	var_70_bool = var_45_bool; // 0x368 Push
	if(var_70_bool == 0) goto Label_877; // 0x369 JumpB
	var_71_string = "head"; // 0x36a PushS
	LookAsyncCamera(var_71_string); // 0x36b Func
}


func_943()
{
	var_13_bool = 0; // 0x3af PushV
	func_985(var_13_bool); // 0x3b0 NEW_2
	if(var_13_bool == 0) goto Label_949; // 0x3b2 JumpB
	lshStopSpeech(); // 0x3b3 Func
	
Label_949:
	return 0; // 0x3b5 Return
}


func_950(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x3b6 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x3b7 Or
	var_56_float = sqrt(var_57_int); // 0x3b8 Sqrt2
	var_58_float = 0.0; // 0x3b9 PushF
	var_59_bool = var_56_float < var_58_float; // 0x3ba LT
	if(var_59_bool == 0) goto Label_958; // 0x3bb JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x3bc MovV
	return 2; // 0x3bd Return
	
Label_958:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x3be Div2
	return 2; // 0x3bf Return
}


func_701(var_2_object, var_3_string)
{
	func_796(); // 0x2be NEW_2
	var_11_int = 10; // 0x2c0 PushI
	KillTimer(var_11_int); // 0x2c1 Func
	var_12_object = var_2_object; // 0x2c3 PushT
	if(var_12_object == 0) goto Label_713; // 0x2c4 JumpB
	var_13_string = "head"; // 0x2c5 PushS
	UnlookAsync(var_13_string); // 0x2c6 Func
	var_2_object = 0; // 0x2c8 TMovB
	
Label_713:
	var_3_string = 1; // 0x2c9 TMovB
	return 0; // 0x2ca Return
}


func_960(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x3c0 PushV
	GetVariable(var_96_string, var_98_int); // 0x3c1 Func
	var_95_int = var_98_int; // 0x3c3 Mov
	return 2; // 0x3c4 Return
}


func_965(var_105_bool, var_106_string, var_107_string)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x3c5 PushV
	FindActor(var_109_object, var_106_string); // 0x3c6 Func
	var_110_bool = var_109_object == 0; // 0x3c8 NullEq
	if(var_110_bool == 0) goto Label_972; // 0x3c9 JumpB
	var_105_bool = 0; // 0x3ca MovB
	return 2; // 0x3cb Return
	
Label_972:
	Trigger(var_109_object, var_107_string); // 0x3cc Func
	var_105_bool = 1; // 0x3ce MovB
	return 2; // 0x3cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_132; // 0x4f JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	func_1038(var_94_object); // 0x52 NEW_2
	if(var_93_bool == 0) goto Label_110; // 0x54 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x55 PushV
	var_101_object = var_1_object; // 0x56 MovT
	var_102_object = var_0_object; // 0x57 MovT
	func_1011(); // 0x58 NEW_2
	var_111_string = ""; // 0x5a PushV
	var_111_string = "Neutral"; // 0x5b MovS
	func_162(var_87_object, var_111_string); // 0x5c NEW_2
	var_128_int = 518119; // 0x5e PushI
	SetMessage(var_128_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_129_int = 518120; // 0x63 PushI
	var_130_int = 19389; // 0x64 PushI
	var_131_int = 19239; // 0x65 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x66 TObjFunc
	var_132_int = 518319; // 0x68 PushI
	var_133_int = 19426; // 0x69 PushI
	var_134_int = 19423; // 0x6a PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x6b TObjFunc
	goto Label_132; // 0x6d Jump
	
Label_132:
	var_135_bool = 0; // 0x84 PushV
	func_985(var_135_bool); // 0x85 NEW_2
	if(var_135_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_136_string = var_3_string; // 0x8a PushT
	if(var_136_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_137_string = ""; // 0x8d PushV
	var_137_string = var_2_object; // 0x8e MovT
	func_901(var_137_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_148_string = "all"; // 0x93 PushS
	var_149_string = "idle"; // 0x94 PushS
	PlayAnimation(var_148_string, var_149_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_150_string = var_3_string; // 0x99 PushT
	if(var_150_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_151_string = "all"; // 0x9c PushS
	var_152_string = "idle"; // 0x9d PushS
	PlayAnimation(var_151_string, var_152_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
	
Label_110:
	var_153_string = ""; // 0x6e PushV
	var_153_string = "Neutral"; // 0x6f MovS
	func_162(var_87_object, var_153_string); // 0x70 NEW_2
	var_154_int = 520033; // 0x72 PushI
	SetMessage(var_154_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_155_int = 520034; // 0x77 PushI
	var_156_int = -1; // 0x78 PushI
	var_157_int = 21218; // 0x79 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x7a TObjFunc
	var_158_int = 527016; // 0x7c PushI
	var_159_int = -1; // 0x7d PushI
	var_160_int = 28299; // 0x7e PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
}


func_715()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x2cb PushV
	WaitForAnimEnd(); // 0x2cc Func
	var_33_bool = 0; // 0x2ce PushV
	func_809(var_33_bool); // 0x2cf NEW_2
	var_34_bool = var_33_bool == 0; // 0x2d1 Not
	if(var_34_bool == 0) goto Label_724; // 0x2d2 JumpB
	return 14; // 0x2d3 Return
	
Label_724:
	var_35_int = 0; // 0x2d4 PushV
	func_994(var_35_int); // 0x2d5 NEW_2
	var_26_int = var_35_int; // 0x2d6 Mov
	var_27_int = 0; // 0x2d8 MovI
	
Label_729:
	var_48_bool = 0; // 0x2d9 PushV
	var_48_bool = 0; // 0x2da MovB
	var_49_int = 5; // 0x2db PushI
	var_50_bool = var_27_int < var_49_int; // 0x2dc LT
	if(var_50_bool == 0) goto Label_739; // 0x2dd JumpB
	var_51_bool = 0; // 0x2de PushV
	func_809(var_51_bool); // 0x2df NEW_2
	if(var_51_bool == 0) goto Label_739; // 0x2e1 JumpB
	var_48_bool = 1; // 0x2e2 MovB
	
Label_739:
	if(var_48_bool == 0) goto Label_791; // 0x2e3 JumpB
	var_52_int = 3; // 0x2e4 PushI
	irand(var_28_int, var_52_int); // 0x2e5 Func
	var_53_int = 0; // 0x2e7 PushI
	var_54_bool = var_28_int == var_53_int; // 0x2e8 Eq
	if(var_54_bool == 0) goto Label_763; // 0x2e9 JumpB
	var_55_int = var_26_int; // 0x2ea Push
	if(var_55_int == 0) goto Label_762; // 0x2eb JumpB
	irand(var_29_int, var_26_int); // 0x2ec Func
	var_56_string = "all"; // 0x2ee PushS
	var_57_string = ""; var_58_int = 0; // 0x2ef PushV
	var_58_int = var_29_int; // 0x2f0 Mov
	func_987(var_57_string, var_58_int); // 0x2f1 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x2f3 Func
	WaitForAnimEnd(var_30_bool); // 0x2f5 Func
	var_59_bool = var_30_bool == 0; // 0x2f7 Not
	if(var_59_bool == 0) goto Label_762; // 0x2f8 JumpB
	goto Label_791; // 0x2f9 Jump
	
Label_791:
	ResetAAS(); // 0x317 Func
	return 14; // 0x319 Return
	
Label_762:
	goto Label_780; // 0x2fa Jump
	
Label_780:
	var_60_bool = 0; // 0x30c PushV
	func_794(var_60_bool); // 0x30d NEW_2
	var_61_bool = var_60_bool == 0; // 0x30f Not
	if(var_61_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_791; // 0x311 Jump
	
Label_786:
	ResetAAS(); // 0x312 Func
	var_62_int = 1; // 0x314 PushI
	var_27_int = var_27_int + var_62_int; // 0x315 Add2
	goto Label_729; // 0x316 Jump
	
Label_763:
	var_63_int = 1; // 0x2fb PushI
	var_64_bool = var_28_int == var_63_int; // 0x2fc Eq
	if(var_64_bool == 0) goto Label_777; // 0x2fd JumpB
	var_65_int = 4; // 0x2fe PushI
	rand(var_31_float, var_65_int); // 0x2ff Func
	var_66_int = 1; // 0x301 PushI
	var_67_int = var_31_float + var_66_int; // 0x302 Add
	Sleep(var_67_int, var_32_bool); // 0x303 Func
	var_68_bool = var_32_bool == 0; // 0x305 Not
	if(var_68_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_791; // 0x307 Jump
	
Label_776:
	goto Label_780; // 0x308 Jump
	
Label_777:
	var_69_int = var_27_int; // 0x309 Push
	if(var_69_int == 0) goto Label_780; // 0x30a JumpB
	goto Label_791; // 0x30b Jump
}


func_1100(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x44c PushV
	var_80_string = "branch"; // 0x44d PushS
	GetVariable(var_80_string, var_79_int); // 0x44e Func
	var_81_int = 0; // 0x450 PushI
	var_82_bool = var_79_int == var_81_int; // 0x451 Eq
	if(var_82_bool == 0) goto Label_1110; // 0x452 JumpB
	var_77_int = 1; // 0x453 MovI
	return 2; // 0x454 Return
	
Label_1110:
	var_83_int = 1; // 0x456 PushI
	var_84_bool = var_79_int == var_83_int; // 0x457 Eq
	if(var_84_bool == 0) goto Label_1115; // 0x458 JumpB
	var_77_int = 2; // 0x459 MovI
	return 2; // 0x45a Return
	
Label_1115:
	var_77_int = 3; // 0x45b MovI
	return 2; // 0x45c Return
}


func_977(var_74_int)
{
	var_74_int = 515571; // 0x3d1 MovI
	return 0; // 0x3d2 Return
}


func_979(var_73_int)
{
	var_73_int = 504029; // 0x3d3 MovI
	return 0; // 0x3d4 Return
}


func_981(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png"; // 0x3d5 MovS
	return 0; // 0x3d6 Return
}


func_983(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png"; // 0x3d7 MovS
	return 0; // 0x3d8 Return
}


func_985(var_68_bool)
{
	var_68_bool = 0; // 0x3d9 MovB
	return 0; // 0x3da Return
}


func_987(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x3db PushV
	var_44_string = "idle"; // 0x3dc MovS
	var_45_int = var_42_int; // 0x3dd Push
	if(var_45_int == 0) goto Label_992; // 0x3de JumpB
	var_44_string = var_44_string + var_42_int; // 0x3df Add2
	
Label_992:
	var_41_string = var_44_string; // 0x3e0 Mov
	return 2; // 0x3e1 Return
}


func_994(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x3e2 PushV
	var_38_int = 0; // 0x3e3 MovI
	
Label_996:
	var_40_string = "all"; // 0x3e4 PushS
	var_41_string = ""; var_42_int = 0; // 0x3e5 PushV
	var_42_int = var_38_int; // 0x3e6 Mov
	func_987(var_41_string, var_42_int); // 0x3e7 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x3e9 Func
	var_46_bool = var_39_bool == 0; // 0x3eb Not
	if(var_46_bool == 0) goto Label_1006; // 0x3ec JumpB
	goto Label_1009; // 0x3ed Jump
	
Label_1009:
	var_35_int = var_38_int; // 0x3f1 Mov
	return 4; // 0x3f2 Return
	
Label_1006:
	var_47_int = 1; // 0x3ee PushI
	var_38_int = var_38_int + var_47_int; // 0x3ef Add2
	goto Label_996; // 0x3f0 Jump
}


func_883()
{
	var_163_bool = 0; var_164_bool = 0; // 0x373 PushV
	var_165_bool = 1; // 0x374 PushB
	CameraSwitchToNormal(var_165_bool); // 0x375 Func
	var_166_bool = 0; // 0x377 PushV
	func_985(var_166_bool); // 0x378 NEW_2
	if(var_166_bool == 0) goto Label_892; // 0x37a JumpB
	goto Label_900; // 0x37b Jump
	
Label_900:
	return 2; // 0x384 Return
	
Label_892:
	var_167_string = "head"; // 0x37c PushS
	HasAnimationTrack(var_164_bool, var_167_string); // 0x37d Func
	var_168_bool = var_164_bool; // 0x37f Push
	if(var_168_bool == 0) goto Label_900; // 0x380 JumpB
	var_169_string = "head"; // 0x381 PushS
	UnlookAsync(var_169_string); // 0x382 Func
}


func_1011()
{
	var_103_string = "oob1Birdmask1_1"; // 0x3f4 PushS
	var_104_int = 1; // 0x3f5 PushI
	SetVariable(var_103_string, var_104_int); // 0x3f6 Func
	var_105_bool = 0; var_106_string = ""; var_107_string = ""; // 0x3f8 PushV
	var_106_string = "quest_b1_01"; // 0x3f9 MovS
	var_107_string = "remove1"; // 0x3fa MovS
	func_965(var_105_bool, var_106_string, var_107_string); // 0x3fb NEW_2
	return 0; // 0x3fd Return
}


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x27d PushV
	func_809(var_12_bool); // 0x27e NEW_2
	var_15_bool = var_12_bool == 0; // 0x280 Not
	if(var_15_bool == 0) goto Label_643; // 0x281 JumpB
	return 0; // 0x282 Return
	
Label_643:
	var_16_string = "player"; // 0x283 PushS
	FindActor(var_9_object, var_16_string); // 0x284 Func
	var_2_object = 0; // 0x286 TMovB
	var_3_string = 0; // 0x287 TMovB
	var_0_object = var_10_float; // 0x288 TMov
	var_1_object = var_11_float; // 0x289 TMov
	var_17_int = 10; // 0x28a PushI
	var_18_float = 1.0; // 0x28b PushF
	SetTimer(var_17_int, var_18_float); // 0x28c Func
	func_715(); // 0x28f NEW_2
	var_70_bool = var_3_string == 0; // 0x291 Not
	if(var_70_bool == 0) goto Label_662; // 0x292 JumpB
	var_71_int = 10; // 0x293 PushI
	KillTimer(var_71_int); // 0x294 Func
	
Label_662:
	return 0; // 0x296 Return
}


func_1022()
{
	var_18_object = Obj(); var_19_string = ""; var_20_float = 0; // 0x3ff PushV
	var_21_object = Obj(); // 0x400 PushV
	func_1050(var_21_object); // 0x401 NEW_2
	var_18_object = var_21_object; // 0x402 Mov
	var_19_string = "pt_map_bigvlad"; // 0x404 MovS
	var_20_float = 2; // 0x405 MovI
	func_1067(var_18_object, var_19_string, var_20_float); // 0x406 NEW_2
	var_47_object = Obj(); // 0x408 PushV
	func_1050(var_47_object); // 0x409 NEW_2
	ShowMap(var_47_object); // 0x40b ObjFunc
	return 0; // 0x40d Return
}


