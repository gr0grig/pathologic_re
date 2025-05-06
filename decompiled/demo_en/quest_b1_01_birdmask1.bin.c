task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xb4 PushI
	if(var_12_int == 0) goto Label_584; // 0xb5 JumpB
	func_911(); // 0xb7 NEW_2
	var_14_int = 19421; // 0xb9 PushI
	var_15_bool = var_11_object == var_14_int; // 0xba Eq
	if(var_15_bool == 0) goto Label_193; // 0xbb JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xbc PushV
	var_16_object = var_1_object; // 0xbd MovT
	var_17_object = var_0_object; // 0xbe MovT
	func_990(); // 0xbf NEW_2
	
Label_193:
	var_48_int = 19422; // 0xc1 PushI
	var_49_bool = var_11_object == var_48_int; // 0xc2 Eq
	if(var_49_bool == 0) goto Label_201; // 0xc3 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xc4 PushV
	var_50_object = var_1_object; // 0xc5 MovT
	var_51_object = var_0_object; // 0xc6 MovT
	func_990(); // 0xc7 NEW_2
	
Label_201:
	var_52_int = 19238; // 0xc9 PushI
	var_53_bool = var_10_bool == var_52_int; // 0xca Eq
	if(var_53_bool == 0) goto Label_249; // 0xcb JumpB
	var_54_bool = 0; var_55_object = Obj(); // 0xcc PushV
	var_55_object = var_1_object; // 0xcd MovT
	func_1006(var_55_object); // 0xce NEW_2
	if(var_54_bool == 0) goto Label_229; // 0xd0 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xd1 PushV
	var_62_object = var_1_object; // 0xd2 MovT
	var_63_object = var_0_object; // 0xd3 MovT
	func_979(); // 0xd4 NEW_2
	var_72_string = ""; // 0xd6 PushV
	var_72_string = "Neutral"; // 0xd7 MovS
	func_157(var_11_object, var_72_string); // 0xd8 NEW_2
	var_89_int = 518119; // 0xda PushI
	SetMessage(var_89_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_90_int = 518120; // 0xdf PushI
	var_91_int = 19389; // 0xe0 PushI
	var_92_int = 19239; // 0xe1 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_93_string = ""; // 0xe5 PushV
	var_93_string = "Neutral"; // 0xe6 MovS
	func_157(var_11_object, var_93_string); // 0xe7 NEW_2
	var_94_int = 520033; // 0xe9 PushI
	SetMessage(var_94_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_95_int = 520034; // 0xee PushI
	var_96_int = -1; // 0xef PushI
	var_97_int = 21218; // 0xf0 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xf1 TObjFunc
	var_98_int = 527016; // 0xf3 PushI
	var_99_int = -1; // 0xf4 PushI
	var_100_int = 28299; // 0xf5 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_101_int = 19426; // 0xf9 PushI
	var_102_bool = var_10_bool == var_101_int; // 0xfa Eq
	if(var_102_bool == 0) goto Label_252; // 0xfb JumpB
	
Label_252:
	var_103_int = 28297; // 0xfc PushI
	var_104_bool = var_10_bool == var_103_int; // 0xfd Eq
	if(var_104_bool == 0) goto Label_270; // 0xfe JumpB
	var_105_string = ""; // 0xff PushV
	var_105_string = "Neutral"; // 0x100 MovS
	func_157(var_11_object, var_105_string); // 0x101 NEW_2
	var_106_int = 527014; // 0x103 PushI
	SetMessage(var_106_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_107_int = 527015; // 0x108 PushI
	var_108_int = 19389; // 0x109 PushI
	var_109_int = 28298; // 0x10a PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_110_int = 19429; // 0x10e PushI
	var_111_bool = var_10_bool == var_110_int; // 0x10f Eq
	if(var_111_bool == 0) goto Label_288; // 0x110 JumpB
	var_112_string = ""; // 0x111 PushV
	var_112_string = "Neutral"; // 0x112 MovS
	func_157(var_11_object, var_112_string); // 0x113 NEW_2
	var_113_int = 518325; // 0x115 PushI
	SetMessage(var_113_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_114_int = 518326; // 0x11a PushI
	var_115_int = 19389; // 0x11b PushI
	var_116_int = 19430; // 0x11c PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_117_int = 19389; // 0x120 PushI
	var_118_bool = var_10_bool == var_117_int; // 0x121 Eq
	if(var_118_bool == 0) goto Label_316; // 0x122 JumpB
	var_119_string = ""; // 0x123 PushV
	var_119_string = "Neutral"; // 0x124 MovS
	func_157(var_11_object, var_119_string); // 0x125 NEW_2
	var_120_int = 518286; // 0x127 PushI
	SetMessage(var_120_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_121_int = 518287; // 0x12c PushI
	var_122_int = 19391; // 0x12d PushI
	var_123_int = 19390; // 0x12e PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x12f TObjFunc
	var_124_int = 518320; // 0x131 PushI
	var_125_int = 19391; // 0x132 PushI
	var_126_int = 19424; // 0x133 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x134 TObjFunc
	var_127_int = 518327; // 0x136 PushI
	var_128_int = 19391; // 0x137 PushI
	var_129_int = 19432; // 0x138 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_130_int = 19391; // 0x13c PushI
	var_131_bool = var_10_bool == var_130_int; // 0x13d Eq
	if(var_131_bool == 0) goto Label_339; // 0x13e JumpB
	var_132_string = ""; // 0x13f PushV
	var_132_string = "Neutral"; // 0x140 MovS
	func_157(var_11_object, var_132_string); // 0x141 NEW_2
	var_133_int = 518288; // 0x143 PushI
	SetMessage(var_133_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_134_int = 518307; // 0x148 PushI
	var_135_int = 19412; // 0x149 PushI
	var_136_int = 19411; // 0x14a PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x14b TObjFunc
	var_137_int = 518321; // 0x14d PushI
	var_138_int = 19436; // 0x14e PushI
	var_139_int = 19425; // 0x14f PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_140_int = 19436; // 0x153 PushI
	var_141_bool = var_10_bool == var_140_int; // 0x154 Eq
	if(var_141_bool == 0) goto Label_362; // 0x155 JumpB
	var_142_string = ""; // 0x156 PushV
	var_142_string = "Neutral"; // 0x157 MovS
	func_157(var_11_object, var_142_string); // 0x158 NEW_2
	var_143_int = 518330; // 0x15a PushI
	SetMessage(var_143_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_144_int = 518332; // 0x15f PushI
	var_145_int = 19412; // 0x160 PushI
	var_146_int = 19440; // 0x161 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x162 TObjFunc
	var_147_int = 518333; // 0x164 PushI
	var_148_int = -1; // 0x165 PushI
	var_149_int = 19441; // 0x166 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_150_int = 19412; // 0x16a PushI
	var_151_bool = var_10_bool == var_150_int; // 0x16b Eq
	if(var_151_bool == 0) goto Label_380; // 0x16c JumpB
	var_152_string = ""; // 0x16d PushV
	var_152_string = "Neutral"; // 0x16e MovS
	func_157(var_11_object, var_152_string); // 0x16f NEW_2
	var_153_int = 518308; // 0x171 PushI
	SetMessage(var_153_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_154_int = 518334; // 0x176 PushI
	var_155_int = 19444; // 0x177 PushI
	var_156_int = 19443; // 0x178 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_157_int = 19444; // 0x17c PushI
	var_158_bool = var_10_bool == var_157_int; // 0x17d Eq
	if(var_158_bool == 0) goto Label_403; // 0x17e JumpB
	var_159_string = ""; // 0x17f PushV
	var_159_string = "Neutral"; // 0x180 MovS
	func_157(var_11_object, var_159_string); // 0x181 NEW_2
	var_160_int = 518335; // 0x183 PushI
	SetMessage(var_160_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_161_int = 518309; // 0x188 PushI
	var_162_int = 19414; // 0x189 PushI
	var_163_int = 19413; // 0x18a PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x18b TObjFunc
	var_164_int = 518340; // 0x18d PushI
	var_165_int = 19451; // 0x18e PushI
	var_166_int = 19450; // 0x18f PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x190 TObjFunc
	return 0; // 0x192 Return
	
Label_403:
	var_167_int = 19451; // 0x193 PushI
	var_168_bool = var_10_bool == var_167_int; // 0x194 Eq
	if(var_168_bool == 0) goto Label_421; // 0x195 JumpB
	var_169_string = ""; // 0x196 PushV
	var_169_string = "Neutral"; // 0x197 MovS
	func_157(var_11_object, var_169_string); // 0x198 NEW_2
	var_170_int = 518341; // 0x19a PushI
	SetMessage(var_170_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_171_int = 518342; // 0x19f PushI
	var_172_int = 19414; // 0x1a0 PushI
	var_173_int = 19452; // 0x1a1 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1a2 TObjFunc
	return 0; // 0x1a4 Return
	
Label_421:
	var_174_int = 19414; // 0x1a5 PushI
	var_175_bool = var_10_bool == var_174_int; // 0x1a6 Eq
	if(var_175_bool == 0) goto Label_444; // 0x1a7 JumpB
	var_176_string = ""; // 0x1a8 PushV
	var_176_string = "Neutral"; // 0x1a9 MovS
	func_157(var_11_object, var_176_string); // 0x1aa NEW_2
	var_177_int = 518310; // 0x1ac PushI
	SetMessage(var_177_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_178_int = 518311; // 0x1b1 PushI
	var_179_int = 19417; // 0x1b2 PushI
	var_180_int = 19415; // 0x1b3 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1b4 TObjFunc
	var_181_int = 527138; // 0x1b6 PushI
	var_182_int = 19417; // 0x1b7 PushI
	var_183_int = 28436; // 0x1b8 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_184_int = 19417; // 0x1bc PushI
	var_185_bool = var_10_bool == var_184_int; // 0x1bd Eq
	if(var_185_bool == 0) goto Label_467; // 0x1be JumpB
	var_186_string = ""; // 0x1bf PushV
	var_186_string = "Neutral"; // 0x1c0 MovS
	func_157(var_11_object, var_186_string); // 0x1c1 NEW_2
	var_187_int = 518313; // 0x1c3 PushI
	SetMessage(var_187_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_188_int = 527017; // 0x1c8 PushI
	var_189_int = 28301; // 0x1c9 PushI
	var_190_int = 28300; // 0x1ca PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1cb TObjFunc
	var_191_int = 518343; // 0x1cd PushI
	var_192_int = 19455; // 0x1ce PushI
	var_193_int = 19454; // 0x1cf PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_194_int = 19455; // 0x1d3 PushI
	var_195_bool = var_10_bool == var_194_int; // 0x1d4 Eq
	if(var_195_bool == 0) goto Label_485; // 0x1d5 JumpB
	var_196_string = ""; // 0x1d6 PushV
	var_196_string = "Neutral"; // 0x1d7 MovS
	func_157(var_11_object, var_196_string); // 0x1d8 NEW_2
	var_197_int = 518344; // 0x1da PushI
	SetMessage(var_197_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_198_int = 518345; // 0x1df PushI
	var_199_int = 19457; // 0x1e0 PushI
	var_200_int = 19456; // 0x1e1 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_201_int = 19457; // 0x1e5 PushI
	var_202_bool = var_10_bool == var_201_int; // 0x1e6 Eq
	if(var_202_bool == 0) goto Label_508; // 0x1e7 JumpB
	var_203_string = ""; // 0x1e8 PushV
	var_203_string = "Neutral"; // 0x1e9 MovS
	func_157(var_11_object, var_203_string); // 0x1ea NEW_2
	var_204_int = 518346; // 0x1ec PushI
	SetMessage(var_204_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_205_int = 518347; // 0x1f1 PushI
	var_206_int = 19418; // 0x1f2 PushI
	var_207_int = 19458; // 0x1f3 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1f4 TObjFunc
	var_208_int = 518348; // 0x1f6 PushI
	var_209_int = -1; // 0x1f7 PushI
	var_210_int = 19459; // 0x1f8 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_211_int = 28301; // 0x1fc PushI
	var_212_bool = var_10_bool == var_211_int; // 0x1fd Eq
	if(var_212_bool == 0) goto Label_526; // 0x1fe JumpB
	var_213_string = ""; // 0x1ff PushV
	var_213_string = "Neutral"; // 0x200 MovS
	func_157(var_11_object, var_213_string); // 0x201 NEW_2
	var_214_int = 527018; // 0x203 PushI
	SetMessage(var_214_int); // 0x204 TObjFunc
	ClearReplies(); // 0x206 TObjFunc
	var_215_int = 518312; // 0x208 PushI
	var_216_int = 19418; // 0x209 PushI
	var_217_int = 19416; // 0x20a PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x20b TObjFunc
	return 0; // 0x20d Return
	
Label_526:
	var_218_int = 19418; // 0x20e PushI
	var_219_bool = var_10_bool == var_218_int; // 0x20f Eq
	if(var_219_bool == 0) goto Label_549; // 0x210 JumpB
	var_220_string = ""; // 0x211 PushV
	var_220_string = "Neutral"; // 0x212 MovS
	func_157(var_11_object, var_220_string); // 0x213 NEW_2
	var_221_int = 518314; // 0x215 PushI
	SetMessage(var_221_int); // 0x216 TObjFunc
	ClearReplies(); // 0x218 TObjFunc
	var_222_int = 518315; // 0x21a PushI
	var_223_int = 19420; // 0x21b PushI
	var_224_int = 19419; // 0x21c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x21d TObjFunc
	var_225_int = 518339; // 0x21f PushI
	var_226_int = 19420; // 0x220 PushI
	var_227_int = 19449; // 0x221 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_228_int = 19420; // 0x225 PushI
	var_229_bool = var_10_bool == var_228_int; // 0x226 Eq
	if(var_229_bool == 0) goto Label_572; // 0x227 JumpB
	var_230_string = ""; // 0x228 PushV
	var_230_string = "Neutral"; // 0x229 MovS
	func_157(var_11_object, var_230_string); // 0x22a NEW_2
	var_231_int = 518316; // 0x22c PushI
	SetMessage(var_231_int); // 0x22d TObjFunc
	ClearReplies(); // 0x22f TObjFunc
	var_232_int = 518317; // 0x231 PushI
	var_233_int = -1; // 0x232 PushI
	var_234_int = 19421; // 0x233 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x234 TObjFunc
	var_235_int = 518318; // 0x236 PushI
	var_236_int = -1; // 0x237 PushI
	var_237_int = 19422; // 0x238 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x239 TObjFunc
	return 0; // 0x23b Return
	
Label_572:
	var_3_string = 1; // 0x23c TMovB
	var_238_bool = 0; // 0x23d PushV
	func_953(var_238_bool); // 0x23e NEW_2
	if(var_238_bool == 0) goto Label_580; // 0x240 JumpB
	lshStopAnimation(); // 0x241 Func
	goto Label_582; // 0x243 Jump
	
Label_582:
	return 0; // 0x246 Return
	
Label_580:
	StopAnimation(); // 0x244 Func
	
Label_584:
	return 0; // 0x248 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_671(var_9_object, var_10_object); // 0x255 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x257 PushV
	var_15_object = var_10_object; // 0x258 Mov
	TaskCall(0); // 0x259 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x25a NEW_2
	TaskReturn(); // 0x25b TaskReturn
	return 0; // 0x25d Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x289 PushI
	var_12_bool = var_10_int == var_11_int; // 0x28a Eq
	if(var_12_bool == 0) goto Label_670; // 0x28b JumpB
	var_13_bool = 0; // 0x28c PushV
	func_633(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x28d NEW_2
	if(var_13_bool == 0) goto Label_664; // 0x28f JumpB
	var_26_bool = var_2_object == 0; // 0x290 Not
	if(var_26_bool == 0) goto Label_663; // 0x291 JumpB
	var_27_object = Obj(); // 0x292 PushV
	var_27_object = var_4_bool; // 0x293 MovT
	func_900(var_27_object); // 0x294 NEW_2
	var_2_object = 1; // 0x296 TMovB
	
Label_663:
	goto Label_670; // 0x297 Jump
	
Label_670:
	return 0; // 0x29e Return
	
Label_664:
	var_34_object = var_2_object; // 0x298 PushT
	if(var_34_object == 0) goto Label_670; // 0x299 JumpB
	var_35_string = "head"; // 0x29a PushS
	UnlookAsync(var_35_string); // 0x29b Func
	var_2_object = 0; // 0x29d TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_585:
	var_10_float = 0; var_11_float = 0; // 0x249 PushV
	var_10_float = 300; // 0x24a MovI
	var_11_float = 100; // 0x24b MovI
	func_606(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x24c NEW_2
	var_72_int = 3; // 0x24e PushI
	Sleep(var_72_int); // 0x24f Func
	goto Label_585; // 0x251 Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_784(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_947(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_945(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_949(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_951(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1068(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_157_bool = var_24_bool == 0; // 0x38 Not
	if(var_157_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_158_object = Obj(); // 0x3f PushV
	var_158_object = var_15_object; // 0x40 Mov
	func_852(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_771(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x303 PushV
	GetPosition(var_22_cvector); // 0x304 Func
	GetPosition(var_23_cvector); // 0x306 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x308 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x309 Or2
	return 6; // 0x30a Return
}


func_900(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x384 PushV
	GetEyesHeight(var_30_float); // 0x385 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x387 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x388 PushE
	var_32_float = var_30_float; // 0x389 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x38a PopE
	var_33_string = "head"; // 0x38b PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x38c Func
	return 4; // 0x38e Return
}


func_779(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x30b PushV
	IsLoaded(var_14_bool); // 0x30c Func
	var_12_bool = var_14_bool; // 0x30e Mov
	return 2; // 0x30f Return
}


func_1035(var_18_object, var_19_string, var_20_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_bool = 0; // 0x40b PushV
	GetMainOutdoorScene(var_34_object); // 0x40c Func
	var_36_bool = var_34_object == 0; // 0x40e NullEq
	if(var_36_bool == 0) goto Label_1044; // 0x40f JumpB
	var_37_string = "Can't find main outdoor scene"; // 0x410 PushS
	Trace(var_37_string); // 0x411 Func
	return 8; // 0x413 Return
	
Label_1044:
	GetLocator(var_19_string, var_35_bool, var_32_cvector, var_33_cvector); // 0x414 ObjFunc
	var_38_bool = var_35_bool == 0; // 0x416 Not
	if(var_38_bool == 0) goto Label_1054; // 0x417 JumpB
	var_39_string = "Warning: outdoor scene locator "; // 0x418 PushS
	var_40_int = var_39_string + var_19_string; // 0x419 Add
	var_41_string = " doesnt exist"; // 0x41a PushS
	var_42_int = var_40_int + var_41_string; // 0x41b Add
	Trace(var_42_int); // 0x41c Func
	
Label_1054:
	GetMap(var_18_object); // 0x41e ObjFunc
	var_43_bool = var_18_object == 0; // 0x420 NullEq
	if(var_43_bool == 0) goto Label_1062; // 0x421 JumpB
	var_44_string = "Can't find map"; // 0x422 PushS
	Trace(var_44_string); // 0x423 Func
	return 8; // 0x425 Return
	
Label_1062:
	var_45_float = GetByIndex(var_32_cvector, 0); // 0x426 PushE
	var_46_float = GetByIndex(var_32_cvector, 2); // 0x427 PushE
	SetMapParams(var_45_float, var_46_float, var_20_float); // 0x428 ObjFunc
	return 8; // 0x42a Return
}


func_911()
{
	var_13_bool = 0; // 0x38f PushV
	func_953(var_13_bool); // 0x390 NEW_2
	if(var_13_bool == 0) goto Label_917; // 0x392 JumpB
	lshStopSpeech(); // 0x393 Func
	
Label_917:
	return 0; // 0x395 Return
}


func_784(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x310 PushV
	GetPosition(var_38_cvector); // 0x311 ObjFunc
	GetEyesHeight(var_37_float); // 0x313 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x315 PushE
	var_46_float = var_46_float + var_37_float; // 0x316 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x317 PopE
	GetPosition(var_39_cvector); // 0x318 Func
	GetEyesHeight(var_37_float); // 0x31a Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x31c PushE
	var_47_float = var_47_float + var_37_float; // 0x31d Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x31e PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x31f Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x320 PushE
	var_48_float = 0; // 0x321 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x322 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x323 Or
	var_50_float = sqrt(var_49_int); // 0x324 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x325 Div2
	var_41_cvector = -var_40_cvector; // 0x326 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x327 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x328 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x329 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x32a Xor2
	func_918(var_52_cvector, var_53_cvector); // 0x32b NEW_2
	var_60_int = 25; // 0x32d PushI
	var_61_float = var_52_cvector * var_60_int; // 0x32e Mult
	var_62_int = var_51_float + var_61_float; // 0x32f Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x330 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x331 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x332 Add2
	IsOverrideActive(var_44_bool); // 0x333 Func
	var_64_bool = var_44_bool; // 0x335 Push
	if(var_64_bool == 0) goto Label_825; // 0x336 JumpB
	var_25_bool = 0; // 0x337 MovB
	return 18; // 0x338 Return
	
Label_825:
	StopWorld(); // 0x339 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x33b Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x33d PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x33e PushE
	Rotate(var_65_float, var_66_float); // 0x33f Func
	var_67_bool = 0; // 0x341 PushV
	func_953(var_67_bool); // 0x342 NEW_2
	if(var_67_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_846; // 0x345 Jump
	
Label_846:
	CameraWaitForPlayFinish(); // 0x34e Func
	ResumeWorld(); // 0x350 Func
	var_25_bool = 1; // 0x352 MovB
	return 18; // 0x353 Return
	
Label_838:
	var_68_string = "head"; // 0x346 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x347 Func
	var_69_bool = var_45_bool; // 0x349 Push
	if(var_69_bool == 0) goto Label_846; // 0x34a JumpB
	var_70_string = "head"; // 0x34b PushS
	LookAsyncCamera(var_70_string); // 0x34c Func
}


func_918(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x396 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x397 Or
	var_56_float = sqrt(var_57_int); // 0x398 Sqrt2
	var_58_float = 0.0; // 0x399 PushF
	var_59_bool = var_56_float < var_58_float; // 0x39a LT
	if(var_59_bool == 0) goto Label_926; // 0x39b JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x39c MovV
	return 2; // 0x39d Return
	
Label_926:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x39e Div2
	return 2; // 0x39f Return
}


func_157(var_2_object, var_110_string)
{
	var_111_bool = 0; // 0x9e PushV
	func_953(var_111_bool); // 0x9f NEW_2
	var_112_bool = var_111_bool == 0; // 0xa1 Not
	if(var_112_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_113_bool = var_110_string == var_2_object; // 0xa4 Eq
	if(var_113_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_114_string = ""; var_115_bool = 0; // 0xa7 PushV
	var_114_string = var_110_string; // 0xa8 Mov
	var_116_string = ""; // 0xa9 PushS
	var_117_bool = var_110_string == var_116_string; // 0xaa Eq
	if(var_117_bool == 0) goto Label_174; // 0xab JumpB
	var_115_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_885(var_114_string, var_115_bool); // 0xaf NEW_2
	var_2_object = var_110_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_115_bool = 1; // 0xae MovB
}


func_671(var_2_object, var_3_string)
{
	func_766(); // 0x2a0 NEW_2
	var_11_int = 10; // 0x2a2 PushI
	KillTimer(var_11_int); // 0x2a3 Func
	var_12_object = var_2_object; // 0x2a5 PushT
	if(var_12_object == 0) goto Label_683; // 0x2a6 JumpB
	var_13_string = "head"; // 0x2a7 PushS
	UnlookAsync(var_13_string); // 0x2a8 Func
	var_2_object = 0; // 0x2aa TMovB
	
Label_683:
	var_3_string = 1; // 0x2ab TMovB
	return 0; // 0x2ac Return
}


func_928(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x3a0 PushV
	GetVariable(var_95_string, var_97_int); // 0x3a1 Func
	var_94_int = var_97_int; // 0x3a3 Mov
	return 2; // 0x3a4 Return
}


func_933(var_104_bool, var_105_string, var_106_string)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x3a5 PushV
	FindActor(var_108_object, var_105_string); // 0x3a6 Func
	var_109_bool = var_108_object == 0; // 0x3a8 NullEq
	if(var_109_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_104_bool = 0; // 0x3aa MovB
	return 2; // 0x3ab Return
	
Label_940:
	Trigger(var_108_object, var_106_string); // 0x3ac Func
	var_104_bool = 1; // 0x3ae MovB
	return 2; // 0x3af Return
}


func_1068(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x42c PushV
	var_79_string = "branch"; // 0x42d PushS
	GetVariable(var_79_string, var_78_int); // 0x42e Func
	var_80_int = 0; // 0x430 PushI
	var_81_bool = var_78_int == var_80_int; // 0x431 Eq
	if(var_81_bool == 0) goto Label_1078; // 0x432 JumpB
	var_76_int = 1; // 0x433 MovI
	return 2; // 0x434 Return
	
Label_1078:
	var_82_int = 1; // 0x436 PushI
	var_83_bool = var_78_int == var_82_int; // 0x437 Eq
	if(var_83_bool == 0) goto Label_1083; // 0x438 JumpB
	var_76_int = 2; // 0x439 MovI
	return 2; // 0x43a Return
	
Label_1083:
	var_76_int = 3; // 0x43b MovI
	return 2; // 0x43c Return
}


func_685()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x2ad PushV
	WaitForAnimEnd(); // 0x2ae Func
	var_33_bool = 0; // 0x2b0 PushV
	func_779(var_33_bool); // 0x2b1 NEW_2
	var_34_bool = var_33_bool == 0; // 0x2b3 Not
	if(var_34_bool == 0) goto Label_694; // 0x2b4 JumpB
	return 14; // 0x2b5 Return
	
Label_694:
	var_35_int = 0; // 0x2b6 PushV
	func_962(var_35_int); // 0x2b7 NEW_2
	var_26_int = var_35_int; // 0x2b8 Mov
	var_27_int = 0; // 0x2ba MovI
	
Label_699:
	var_48_bool = 0; // 0x2bb PushV
	var_48_bool = 0; // 0x2bc MovB
	var_49_int = 5; // 0x2bd PushI
	var_50_bool = var_27_int < var_49_int; // 0x2be LT
	if(var_50_bool == 0) goto Label_709; // 0x2bf JumpB
	var_51_bool = 0; // 0x2c0 PushV
	func_779(var_51_bool); // 0x2c1 NEW_2
	if(var_51_bool == 0) goto Label_709; // 0x2c3 JumpB
	var_48_bool = 1; // 0x2c4 MovB
	
Label_709:
	if(var_48_bool == 0) goto Label_761; // 0x2c5 JumpB
	var_52_int = 3; // 0x2c6 PushI
	irand(var_28_int, var_52_int); // 0x2c7 Func
	var_53_int = 0; // 0x2c9 PushI
	var_54_bool = var_28_int == var_53_int; // 0x2ca Eq
	if(var_54_bool == 0) goto Label_733; // 0x2cb JumpB
	var_55_int = var_26_int; // 0x2cc Push
	if(var_55_int == 0) goto Label_732; // 0x2cd JumpB
	irand(var_29_int, var_26_int); // 0x2ce Func
	var_56_string = "all"; // 0x2d0 PushS
	var_57_string = ""; var_58_int = 0; // 0x2d1 PushV
	var_58_int = var_29_int; // 0x2d2 Mov
	func_955(var_57_string, var_58_int); // 0x2d3 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x2d5 Func
	WaitForAnimEnd(var_30_bool); // 0x2d7 Func
	var_59_bool = var_30_bool == 0; // 0x2d9 Not
	if(var_59_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_761; // 0x2db Jump
	
Label_761:
	ResetAAS(); // 0x2f9 Func
	return 14; // 0x2fb Return
	
Label_732:
	goto Label_750; // 0x2dc Jump
	
Label_750:
	var_60_bool = 0; // 0x2ee PushV
	func_764(var_60_bool); // 0x2ef NEW_2
	var_61_bool = var_60_bool == 0; // 0x2f1 Not
	if(var_61_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_761; // 0x2f3 Jump
	
Label_756:
	ResetAAS(); // 0x2f4 Func
	var_62_int = 1; // 0x2f6 PushI
	var_27_int = var_27_int + var_62_int; // 0x2f7 Add2
	goto Label_699; // 0x2f8 Jump
	
Label_733:
	var_63_int = 1; // 0x2dd PushI
	var_64_bool = var_28_int == var_63_int; // 0x2de Eq
	if(var_64_bool == 0) goto Label_747; // 0x2df JumpB
	var_65_int = 4; // 0x2e0 PushI
	rand(var_31_float, var_65_int); // 0x2e1 Func
	var_66_int = 1; // 0x2e3 PushI
	var_67_int = var_31_float + var_66_int; // 0x2e4 Add
	Sleep(var_67_int, var_32_bool); // 0x2e5 Func
	var_68_bool = var_32_bool == 0; // 0x2e7 Not
	if(var_68_bool == 0) goto Label_746; // 0x2e8 JumpB
	goto Label_761; // 0x2e9 Jump
	
Label_746:
	goto Label_750; // 0x2ea Jump
	
Label_747:
	var_69_int = var_27_int; // 0x2eb Push
	if(var_69_int == 0) goto Label_750; // 0x2ec JumpB
	goto Label_761; // 0x2ed Jump
}


func_945(var_73_int)
{
	var_73_int = 515571; // 0x3b1 MovI
	return 0; // 0x3b2 Return
}


func_947(var_72_int)
{
	var_72_int = 504029; // 0x3b3 MovI
	return 0; // 0x3b4 Return
}


func_949(var_74_string)
{
	var_74_string = "ui/NPC_bmask.png"; // 0x3b5 MovS
	return 0; // 0x3b6 Return
}


func_951(var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png"; // 0x3b7 MovS
	return 0; // 0x3b8 Return
}


func_953(var_67_bool)
{
	var_67_bool = 0; // 0x3b9 MovB
	return 0; // 0x3ba Return
}


func_955(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x3bb PushV
	var_44_string = "idle"; // 0x3bc MovS
	var_45_int = var_42_int; // 0x3bd Push
	if(var_45_int == 0) goto Label_960; // 0x3be JumpB
	var_44_string = var_44_string + var_42_int; // 0x3bf Add2
	
Label_960:
	var_41_string = var_44_string; // 0x3c0 Mov
	return 2; // 0x3c1 Return
}


func_962(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x3c2 PushV
	var_38_int = 0; // 0x3c3 MovI
	
Label_964:
	var_40_string = "all"; // 0x3c4 PushS
	var_41_string = ""; var_42_int = 0; // 0x3c5 PushV
	var_42_int = var_38_int; // 0x3c6 Mov
	func_955(var_41_string, var_42_int); // 0x3c7 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x3c9 Func
	var_46_bool = var_39_bool == 0; // 0x3cb Not
	if(var_46_bool == 0) goto Label_974; // 0x3cc JumpB
	goto Label_977; // 0x3cd Jump
	
Label_977:
	var_35_int = var_38_int; // 0x3d1 Mov
	return 4; // 0x3d2 Return
	
Label_974:
	var_47_int = 1; // 0x3ce PushI
	var_38_int = var_38_int + var_47_int; // 0x3cf Add2
	goto Label_964; // 0x3d0 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_127; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_1006(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_105; // 0x54 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x55 PushV
	var_100_object = var_1_object; // 0x56 MovT
	var_101_object = var_0_object; // 0x57 MovT
	func_979(); // 0x58 NEW_2
	var_110_string = ""; // 0x5a PushV
	var_110_string = "Neutral"; // 0x5b MovS
	func_157(var_86_object, var_110_string); // 0x5c NEW_2
	var_127_int = 518119; // 0x5e PushI
	SetMessage(var_127_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_128_int = 518120; // 0x63 PushI
	var_129_int = 19389; // 0x64 PushI
	var_130_int = 19239; // 0x65 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_131_bool = 0; // 0x7f PushV
	func_953(var_131_bool); // 0x80 NEW_2
	if(var_131_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_132_string = var_3_string; // 0x85 PushT
	if(var_132_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_133_string = ""; // 0x88 PushV
	var_133_string = var_2_object; // 0x89 MovT
	func_869(var_133_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_144_string = "all"; // 0x8e PushS
	var_145_string = "idle"; // 0x8f PushS
	PlayAnimation(var_144_string, var_145_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_146_string = var_3_string; // 0x94 PushT
	if(var_146_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_147_string = "all"; // 0x97 PushS
	var_148_string = "idle"; // 0x98 PushS
	PlayAnimation(var_147_string, var_148_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_149_string = ""; // 0x69 PushV
	var_149_string = "Neutral"; // 0x6a MovS
	func_157(var_86_object, var_149_string); // 0x6b NEW_2
	var_150_int = 520033; // 0x6d PushI
	SetMessage(var_150_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_151_int = 520034; // 0x72 PushI
	var_152_int = -1; // 0x73 PushI
	var_153_int = 21218; // 0x74 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x75 TObjFunc
	var_154_int = 527016; // 0x77 PushI
	var_155_int = -1; // 0x78 PushI
	var_156_int = 28299; // 0x79 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_979()
{
	var_102_string = "oob1Birdmask1_1"; // 0x3d4 PushS
	var_103_int = 1; // 0x3d5 PushI
	SetVariable(var_102_string, var_103_int); // 0x3d6 Func
	var_104_bool = 0; var_105_string = ""; var_106_string = ""; // 0x3d8 PushV
	var_105_string = "quest_b1_01"; // 0x3d9 MovS
	var_106_string = "remove1"; // 0x3da MovS
	func_933(var_104_bool, var_105_string, var_106_string); // 0x3db NEW_2
	return 0; // 0x3dd Return
}


func_852()
{
	var_159_bool = 0; var_160_bool = 0; // 0x354 PushV
	CameraSwitchToNormal(); // 0x355 Func
	var_161_bool = 0; // 0x357 PushV
	func_953(var_161_bool); // 0x358 NEW_2
	if(var_161_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_868; // 0x35b Jump
	
Label_868:
	return 2; // 0x364 Return
	
Label_860:
	var_162_string = "head"; // 0x35c PushS
	HasAnimationTrack(var_160_bool, var_162_string); // 0x35d Func
	var_163_bool = var_160_bool; // 0x35f Push
	if(var_163_bool == 0) goto Label_868; // 0x360 JumpB
	var_164_string = "head"; // 0x361 PushS
	UnlookAsync(var_164_string); // 0x362 Func
}


func_606(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x25f PushV
	func_779(var_12_bool); // 0x260 NEW_2
	var_15_bool = var_12_bool == 0; // 0x262 Not
	if(var_15_bool == 0) goto Label_613; // 0x263 JumpB
	return 0; // 0x264 Return
	
Label_613:
	var_16_string = "player"; // 0x265 PushS
	FindActor(var_9_object, var_16_string); // 0x266 Func
	var_2_object = 0; // 0x268 TMovB
	var_3_string = 0; // 0x269 TMovB
	var_0_object = var_10_float; // 0x26a TMov
	var_1_object = var_11_float; // 0x26b TMov
	var_17_int = 10; // 0x26c PushI
	var_18_float = 1.0; // 0x26d PushF
	SetTimer(var_17_int, var_18_float); // 0x26e Func
	func_685(); // 0x271 NEW_2
	var_70_bool = var_3_string == 0; // 0x273 Not
	if(var_70_bool == 0) goto Label_632; // 0x274 JumpB
	var_71_int = 10; // 0x275 PushI
	KillTimer(var_71_int); // 0x276 Func
	
Label_632:
	return 0; // 0x278 Return
}


func_990()
{
	var_18_object = Obj(); var_19_string = ""; var_20_float = 0; // 0x3df PushV
	var_21_object = Obj(); // 0x3e0 PushV
	func_1018(var_21_object); // 0x3e1 NEW_2
	var_18_object = var_21_object; // 0x3e2 Mov
	var_19_string = "pt_map_bigvlad"; // 0x3e4 MovS
	var_20_float = 2; // 0x3e5 MovI
	func_1035(var_18_object, var_19_string, var_20_float); // 0x3e6 NEW_2
	var_47_object = Obj(); // 0x3e8 PushV
	func_1018(var_47_object); // 0x3e9 NEW_2
	ShowMap(var_47_object); // 0x3eb ObjFunc
	return 0; // 0x3ed Return
}


func_869(var_133_string)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0x365 PushV
	lshHasAnimation(var_137_bool, var_133_string); // 0x366 Func
	var_140_bool = var_137_bool; // 0x368 Push
	if(var_140_bool == 0) goto Label_880; // 0x369 JumpB
	lshGetAnimTimes(var_133_string, var_138_float, var_139_float); // 0x36a Func
	var_141_bool = 0; // 0x36c PushB
	lshPlayAnimation(var_138_float, var_139_float, var_141_bool); // 0x36d Func
	goto Label_884; // 0x36f Jump
	
Label_884:
	return 6; // 0x374 Return
	
Label_880:
	var_142_string = "Can't find lsh animation : "; // 0x370 PushS
	var_143_int = var_142_string + var_133_string; // 0x371 Add
	Trace(var_143_int); // 0x372 Func
}


func_1006(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x3ef PushV
	var_95_string = "oob1Birdmask1_1"; // 0x3f0 MovS
	func_928(var_94_int, var_95_string); // 0x3f1 NEW_2
	var_98_int = 0; // 0x3f3 PushI
	var_99_bool = var_94_int == var_98_int; // 0x3f4 Eq
	if(var_99_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_92_bool = 1; // 0x3f6 MovB
	return 0; // 0x3f7 Return
	
Label_1016:
	var_92_bool = 0; // 0x3f8 MovB
	return 0; // 0x3f9 Return
}


func_885(var_114_string, var_115_bool)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0; // 0x375 PushV
	lshHasAnimation(var_121_bool, var_114_string); // 0x376 Func
	var_124_bool = var_121_bool; // 0x378 Push
	if(var_124_bool == 0) goto Label_895; // 0x379 JumpB
	lshGetAnimTimes(var_114_string, var_122_float, var_123_float); // 0x37a Func
	lshPlayAnimation(var_122_float, var_123_float, var_115_bool); // 0x37c Func
	goto Label_899; // 0x37e Jump
	
Label_899:
	return 6; // 0x383 Return
	
Label_895:
	var_125_string = "Can't find lsh animation : "; // 0x37f PushS
	var_126_int = var_125_string + var_114_string; // 0x380 Add
	Trace(var_126_int); // 0x381 Func
}


func_633(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x279 PushV
	var_16_bool = var_4_bool == 0; // 0x27a NullEq
	if(var_16_bool == 0) goto Label_638; // 0x27b JumpB
	var_13_bool = 0; // 0x27c MovB
	return 2; // 0x27d Return
	
Label_638:
	var_17_float = 0; var_18_object = Obj(); // 0x27e PushV
	var_18_object = var_4_bool; // 0x27f MovT
	func_771(var_18_object); // 0x280 NEW_2
	var_15_float = sqrt(var_17_float); // 0x282 Sqrt2
	var_25_object = var_2_object; // 0x283 PushT
	if(var_25_object == 0) goto Label_646; // 0x284 JumpB
	var_15_float = var_15_float - var_1_object; // 0x285 Sub2
	
Label_646:
	var_13_bool = var_15_float < var_0_object; // 0x286 LT2
	return 2; // 0x287 Return
}


func_1018(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x3fa PushV
	GetMainOutdoorScene(var_24_object); // 0x3fb Func
	var_26_bool = var_24_object == 0; // 0x3fd NullEq
	if(var_26_bool == 0) goto Label_1029; // 0x3fe JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x3ff PushS
	Trace(var_27_string); // 0x400 Func
	var_25_object = 0; // 0x402 SetNull
	var_21_object = var_25_object; // 0x403 Mov
	return 4; // 0x404 Return
	
Label_1029:
	GetMap(var_25_object); // 0x405 ObjFunc
	var_21_object = var_25_object; // 0x407 Mov
	return 4; // 0x408 Return
}


func_764(var_60_bool)
{
	var_60_bool = 1; // 0x2fc MovB
	return 0; // 0x2fd Return
}


func_766()
{
	StopAnimation(); // 0x2fe Func
	StopGroup0(); // 0x300 Func
	return 0; // 0x302 Return
}


