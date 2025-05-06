task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb9 PushI
	if(var_14_int == 0) goto Label_1016; // 0xba JumpB
	func_1408(); // 0xbc NEW_2
	var_16_int = 43493; // 0xbe PushI
	var_17_bool = var_13_bool == var_16_int; // 0xbf Eq
	if(var_17_bool == 0) goto Label_198; // 0xc0 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xc1 PushV
	var_18_object = var_1_object; // 0xc2 MovT
	var_19_object = var_0_object; // 0xc3 MovT
	func_1484(); // 0xc4 NEW_2
	
Label_198:
	var_22_int = 45156; // 0xc6 PushI
	var_23_bool = var_13_bool == var_22_int; // 0xc7 Eq
	if(var_23_bool == 0) goto Label_206; // 0xc8 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xc9 PushV
	var_24_object = var_1_object; // 0xca MovT
	var_25_object = var_0_object; // 0xcb MovT
	func_1490(); // 0xcc NEW_2
	
Label_206:
	var_28_int = 43100; // 0xce PushI
	var_29_bool = var_12_bool == var_28_int; // 0xcf Eq
	if(var_29_bool == 0) goto Label_259; // 0xd0 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xd1 PushV
	var_30_object = var_1_object; // 0xd2 MovT
	var_31_object = var_0_object; // 0xd3 MovT
	func_1477(); // 0xd4 NEW_2
	var_42_string = ""; // 0xd6 PushV
	var_42_string = "Neutral"; // 0xd7 MovS
	func_162(var_13_bool, var_42_string); // 0xd8 NEW_2
	var_59_int = 541007; // 0xda PushI
	SetMessage(var_59_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_60_bool = 0; var_61_object = Obj(); // 0xdf PushV
	var_61_object = var_1_object; // 0xe0 MovT
	func_1508(var_61_object); // 0xe1 NEW_2
	if(var_60_bool == 0) goto Label_233; // 0xe3 JumpB
	var_68_int = 541347; // 0xe4 PushI
	var_69_int = 43494; // 0xe5 PushI
	var_70_int = 43493; // 0xe6 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xe7 TObjFunc
	
Label_233:
	var_71_bool = 0; // 0xe9 PushV
	var_71_bool = 0; // 0xea MovB
	var_72_bool = 0; var_73_object = Obj(); // 0xeb PushV
	var_73_object = var_1_object; // 0xec MovT
	func_1520(var_73_object); // 0xed NEW_2
	if(var_72_bool == 0) goto Label_247; // 0xef JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xf0 PushV
	var_79_object = var_1_object; // 0xf1 MovT
	func_1508(var_79_object); // 0xf2 NEW_2
	var_80_bool = var_78_bool == 0; // 0xf4 Not
	if(var_80_bool == 0) goto Label_247; // 0xf5 JumpB
	var_71_bool = 1; // 0xf6 MovB
	
Label_247:
	if(var_71_bool == 0) goto Label_253; // 0xf7 JumpB
	var_81_int = 542740; // 0xf8 PushI
	var_82_int = 45157; // 0xf9 PushI
	var_83_int = 45156; // 0xfa PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xfb TObjFunc
	
Label_253:
	var_84_int = 541034; // 0xfd PushI
	var_85_int = -1; // 0xfe PushI
	var_86_int = 43128; // 0xff PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_87_int = 45157; // 0x103 PushI
	var_88_bool = var_12_bool == var_87_int; // 0x104 Eq
	if(var_88_bool == 0) goto Label_282; // 0x105 JumpB
	var_89_string = ""; // 0x106 PushV
	var_89_string = "Neutral"; // 0x107 MovS
	func_162(var_13_bool, var_89_string); // 0x108 NEW_2
	var_90_int = 542741; // 0x10a PushI
	SetMessage(var_90_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_91_int = 542742; // 0x10f PushI
	var_92_int = 45163; // 0x110 PushI
	var_93_int = 45158; // 0x111 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x112 TObjFunc
	var_94_int = 542743; // 0x114 PushI
	var_95_int = 45160; // 0x115 PushI
	var_96_int = 45159; // 0x116 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_97_int = 45160; // 0x11a PushI
	var_98_bool = var_12_bool == var_97_int; // 0x11b Eq
	if(var_98_bool == 0) goto Label_305; // 0x11c JumpB
	var_99_string = ""; // 0x11d PushV
	var_99_string = "Neutral"; // 0x11e MovS
	func_162(var_13_bool, var_99_string); // 0x11f NEW_2
	var_100_int = 542744; // 0x121 PushI
	SetMessage(var_100_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_101_int = 542745; // 0x126 PushI
	var_102_int = 45169; // 0x127 PushI
	var_103_int = 45161; // 0x128 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x129 TObjFunc
	var_104_int = 542746; // 0x12b PushI
	var_105_int = -1; // 0x12c PushI
	var_106_int = 45162; // 0x12d PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_107_int = 45163; // 0x131 PushI
	var_108_bool = var_12_bool == var_107_int; // 0x132 Eq
	if(var_108_bool == 0) goto Label_328; // 0x133 JumpB
	var_109_string = ""; // 0x134 PushV
	var_109_string = "Neutral"; // 0x135 MovS
	func_162(var_13_bool, var_109_string); // 0x136 NEW_2
	var_110_int = 542747; // 0x138 PushI
	SetMessage(var_110_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_111_int = 542748; // 0x13d PushI
	var_112_int = 45166; // 0x13e PushI
	var_113_int = 45165; // 0x13f PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x140 TObjFunc
	var_114_int = 542751; // 0x142 PushI
	var_115_int = 45169; // 0x143 PushI
	var_116_int = 45168; // 0x144 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_117_int = 45166; // 0x148 PushI
	var_118_bool = var_12_bool == var_117_int; // 0x149 Eq
	if(var_118_bool == 0) goto Label_346; // 0x14a JumpB
	var_119_string = ""; // 0x14b PushV
	var_119_string = "Neutral"; // 0x14c MovS
	func_162(var_13_bool, var_119_string); // 0x14d NEW_2
	var_120_int = 542749; // 0x14f PushI
	SetMessage(var_120_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_121_int = 542750; // 0x154 PushI
	var_122_int = 45169; // 0x155 PushI
	var_123_int = 45167; // 0x156 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_124_int = 45169; // 0x15a PushI
	var_125_bool = var_12_bool == var_124_int; // 0x15b Eq
	if(var_125_bool == 0) goto Label_364; // 0x15c JumpB
	var_126_string = ""; // 0x15d PushV
	var_126_string = "Neutral"; // 0x15e MovS
	func_162(var_13_bool, var_126_string); // 0x15f NEW_2
	var_127_int = 542752; // 0x161 PushI
	SetMessage(var_127_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_128_int = 542753; // 0x166 PushI
	var_129_int = 45173; // 0x167 PushI
	var_130_int = 45172; // 0x168 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_131_int = 45173; // 0x16c PushI
	var_132_bool = var_12_bool == var_131_int; // 0x16d Eq
	if(var_132_bool == 0) goto Label_392; // 0x16e JumpB
	var_133_string = ""; // 0x16f PushV
	var_133_string = "Neutral"; // 0x170 MovS
	func_162(var_13_bool, var_133_string); // 0x171 NEW_2
	var_134_int = 542754; // 0x173 PushI
	SetMessage(var_134_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_135_int = 542755; // 0x178 PushI
	var_136_int = 45177; // 0x179 PushI
	var_137_int = 45174; // 0x17a PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x17b TObjFunc
	var_138_int = 542756; // 0x17d PushI
	var_139_int = 45178; // 0x17e PushI
	var_140_int = 45175; // 0x17f PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x180 TObjFunc
	var_141_int = 542757; // 0x182 PushI
	var_142_int = -1; // 0x183 PushI
	var_143_int = 45176; // 0x184 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_144_int = 45178; // 0x188 PushI
	var_145_bool = var_12_bool == var_144_int; // 0x189 Eq
	if(var_145_bool == 0) goto Label_415; // 0x18a JumpB
	var_146_string = ""; // 0x18b PushV
	var_146_string = "Neutral"; // 0x18c MovS
	func_162(var_13_bool, var_146_string); // 0x18d NEW_2
	var_147_int = 542759; // 0x18f PushI
	SetMessage(var_147_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_148_int = 542760; // 0x194 PushI
	var_149_int = -1; // 0x195 PushI
	var_150_int = 45179; // 0x196 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x197 TObjFunc
	var_151_int = 542761; // 0x199 PushI
	var_152_int = 45177; // 0x19a PushI
	var_153_int = 45180; // 0x19b PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x19c TObjFunc
	return 0; // 0x19e Return
	
Label_415:
	var_154_int = 45177; // 0x19f PushI
	var_155_bool = var_12_bool == var_154_int; // 0x1a0 Eq
	if(var_155_bool == 0) goto Label_433; // 0x1a1 JumpB
	var_156_string = ""; // 0x1a2 PushV
	var_156_string = "Neutral"; // 0x1a3 MovS
	func_162(var_13_bool, var_156_string); // 0x1a4 NEW_2
	var_157_int = 542758; // 0x1a6 PushI
	SetMessage(var_157_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_158_int = 542762; // 0x1ab PushI
	var_159_int = -1; // 0x1ac PushI
	var_160_int = 45182; // 0x1ad PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_161_int = 43494; // 0x1b1 PushI
	var_162_bool = var_12_bool == var_161_int; // 0x1b2 Eq
	if(var_162_bool == 0) goto Label_451; // 0x1b3 JumpB
	var_163_string = ""; // 0x1b4 PushV
	var_163_string = "Neutral"; // 0x1b5 MovS
	func_162(var_13_bool, var_163_string); // 0x1b6 NEW_2
	var_164_int = 541348; // 0x1b8 PushI
	SetMessage(var_164_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_165_int = 541349; // 0x1bd PushI
	var_166_int = 43496; // 0x1be PushI
	var_167_int = 43495; // 0x1bf PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1c0 TObjFunc
	return 0; // 0x1c2 Return
	
Label_451:
	var_168_int = 43496; // 0x1c3 PushI
	var_169_bool = var_12_bool == var_168_int; // 0x1c4 Eq
	if(var_169_bool == 0) goto Label_474; // 0x1c5 JumpB
	var_170_string = ""; // 0x1c6 PushV
	var_170_string = "Neutral"; // 0x1c7 MovS
	func_162(var_13_bool, var_170_string); // 0x1c8 NEW_2
	var_171_int = 541350; // 0x1ca PushI
	SetMessage(var_171_int); // 0x1cb TObjFunc
	ClearReplies(); // 0x1cd TObjFunc
	var_172_int = 541351; // 0x1cf PushI
	var_173_int = 43498; // 0x1d0 PushI
	var_174_int = 43497; // 0x1d1 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1d2 TObjFunc
	var_175_int = 541356; // 0x1d4 PushI
	var_176_int = 43503; // 0x1d5 PushI
	var_177_int = 43502; // 0x1d6 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_178_int = 43503; // 0x1da PushI
	var_179_bool = var_12_bool == var_178_int; // 0x1db Eq
	if(var_179_bool == 0) goto Label_497; // 0x1dc JumpB
	var_180_string = ""; // 0x1dd PushV
	var_180_string = "Neutral"; // 0x1de MovS
	func_162(var_13_bool, var_180_string); // 0x1df NEW_2
	var_181_int = 541357; // 0x1e1 PushI
	SetMessage(var_181_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_182_int = 541358; // 0x1e6 PushI
	var_183_int = 43505; // 0x1e7 PushI
	var_184_int = 43504; // 0x1e8 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1e9 TObjFunc
	var_185_int = 541361; // 0x1eb PushI
	var_186_int = 43508; // 0x1ec PushI
	var_187_int = 43507; // 0x1ed PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_188_int = 43508; // 0x1f1 PushI
	var_189_bool = var_12_bool == var_188_int; // 0x1f2 Eq
	if(var_189_bool == 0) goto Label_515; // 0x1f3 JumpB
	var_190_string = ""; // 0x1f4 PushV
	var_190_string = "Neutral"; // 0x1f5 MovS
	func_162(var_13_bool, var_190_string); // 0x1f6 NEW_2
	var_191_int = 541362; // 0x1f8 PushI
	SetMessage(var_191_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_192_int = 541363; // 0x1fd PushI
	var_193_int = 43498; // 0x1fe PushI
	var_194_int = 43509; // 0x1ff PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_195_int = 43505; // 0x203 PushI
	var_196_bool = var_12_bool == var_195_int; // 0x204 Eq
	if(var_196_bool == 0) goto Label_533; // 0x205 JumpB
	var_197_string = ""; // 0x206 PushV
	var_197_string = "Neutral"; // 0x207 MovS
	func_162(var_13_bool, var_197_string); // 0x208 NEW_2
	var_198_int = 541359; // 0x20a PushI
	SetMessage(var_198_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_199_int = 541360; // 0x20f PushI
	var_200_int = 43498; // 0x210 PushI
	var_201_int = 43506; // 0x211 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x212 TObjFunc
	return 0; // 0x214 Return
	
Label_533:
	var_202_int = 43498; // 0x215 PushI
	var_203_bool = var_12_bool == var_202_int; // 0x216 Eq
	if(var_203_bool == 0) goto Label_556; // 0x217 JumpB
	var_204_string = ""; // 0x218 PushV
	var_204_string = "Neutral"; // 0x219 MovS
	func_162(var_13_bool, var_204_string); // 0x21a NEW_2
	var_205_int = 541352; // 0x21c PushI
	SetMessage(var_205_int); // 0x21d TObjFunc
	ClearReplies(); // 0x21f TObjFunc
	var_206_int = 541353; // 0x221 PushI
	var_207_int = 43500; // 0x222 PushI
	var_208_int = 43499; // 0x223 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x224 TObjFunc
	var_209_int = 541364; // 0x226 PushI
	var_210_int = -1; // 0x227 PushI
	var_211_int = 43510; // 0x228 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x229 TObjFunc
	return 0; // 0x22b Return
	
Label_556:
	var_212_int = 43500; // 0x22c PushI
	var_213_bool = var_12_bool == var_212_int; // 0x22d Eq
	if(var_213_bool == 0) goto Label_579; // 0x22e JumpB
	var_214_string = ""; // 0x22f PushV
	var_214_string = "Neutral"; // 0x230 MovS
	func_162(var_13_bool, var_214_string); // 0x231 NEW_2
	var_215_int = 541354; // 0x233 PushI
	SetMessage(var_215_int); // 0x234 TObjFunc
	ClearReplies(); // 0x236 TObjFunc
	var_216_int = 541355; // 0x238 PushI
	var_217_int = 43513; // 0x239 PushI
	var_218_int = 43501; // 0x23a PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x23b TObjFunc
	var_219_int = 541368; // 0x23d PushI
	var_220_int = 43517; // 0x23e PushI
	var_221_int = 43516; // 0x23f PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_222_int = 43517; // 0x243 PushI
	var_223_bool = var_12_bool == var_222_int; // 0x244 Eq
	if(var_223_bool == 0) goto Label_607; // 0x245 JumpB
	var_224_string = ""; // 0x246 PushV
	var_224_string = "Neutral"; // 0x247 MovS
	func_162(var_13_bool, var_224_string); // 0x248 NEW_2
	var_225_int = 541369; // 0x24a PushI
	SetMessage(var_225_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_226_int = 541370; // 0x24f PushI
	var_227_int = 43515; // 0x250 PushI
	var_228_int = 43518; // 0x251 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x252 TObjFunc
	var_229_int = 541373; // 0x254 PushI
	var_230_int = 43523; // 0x255 PushI
	var_231_int = 43522; // 0x256 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x257 TObjFunc
	var_232_int = 542700; // 0x259 PushI
	var_233_int = 45109; // 0x25a PushI
	var_234_int = 45108; // 0x25b PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x25c TObjFunc
	return 0; // 0x25e Return
	
Label_607:
	var_235_int = 45109; // 0x25f PushI
	var_236_bool = var_12_bool == var_235_int; // 0x260 Eq
	if(var_236_bool == 0) goto Label_625; // 0x261 JumpB
	var_237_string = ""; // 0x262 PushV
	var_237_string = "Neutral"; // 0x263 MovS
	func_162(var_13_bool, var_237_string); // 0x264 NEW_2
	var_238_int = 542701; // 0x266 PushI
	SetMessage(var_238_int); // 0x267 TObjFunc
	ClearReplies(); // 0x269 TObjFunc
	var_239_int = 542702; // 0x26b PushI
	var_240_int = 45111; // 0x26c PushI
	var_241_int = 45110; // 0x26d PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x26e TObjFunc
	return 0; // 0x270 Return
	
Label_625:
	var_242_int = 45111; // 0x271 PushI
	var_243_bool = var_12_bool == var_242_int; // 0x272 Eq
	if(var_243_bool == 0) goto Label_653; // 0x273 JumpB
	var_244_string = ""; // 0x274 PushV
	var_244_string = "Neutral"; // 0x275 MovS
	func_162(var_13_bool, var_244_string); // 0x276 NEW_2
	var_245_int = 542703; // 0x278 PushI
	SetMessage(var_245_int); // 0x279 TObjFunc
	ClearReplies(); // 0x27b TObjFunc
	var_246_bool = 0; var_247_object = Obj(); // 0x27d PushV
	var_247_object = var_1_object; // 0x27e MovT
	func_1496(var_247_object); // 0x27f NEW_2
	if(var_246_bool == 0) goto Label_647; // 0x281 JumpB
	var_252_int = 542704; // 0x282 PushI
	var_253_int = 45117; // 0x283 PushI
	var_254_int = 45112; // 0x284 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x285 TObjFunc
	
Label_647:
	var_255_int = 542705; // 0x287 PushI
	var_256_int = 45114; // 0x288 PushI
	var_257_int = 45113; // 0x289 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x28a TObjFunc
	return 0; // 0x28c Return
	
Label_653:
	var_258_int = 45114; // 0x28d PushI
	var_259_bool = var_12_bool == var_258_int; // 0x28e Eq
	if(var_259_bool == 0) goto Label_671; // 0x28f JumpB
	var_260_string = ""; // 0x290 PushV
	var_260_string = "Neutral"; // 0x291 MovS
	func_162(var_13_bool, var_260_string); // 0x292 NEW_2
	var_261_int = 542706; // 0x294 PushI
	SetMessage(var_261_int); // 0x295 TObjFunc
	ClearReplies(); // 0x297 TObjFunc
	var_262_int = 542707; // 0x299 PushI
	var_263_int = 43523; // 0x29a PushI
	var_264_int = 45115; // 0x29b PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x29c TObjFunc
	return 0; // 0x29e Return
	
Label_671:
	var_265_int = 45117; // 0x29f PushI
	var_266_bool = var_12_bool == var_265_int; // 0x2a0 Eq
	if(var_266_bool == 0) goto Label_689; // 0x2a1 JumpB
	var_267_string = ""; // 0x2a2 PushV
	var_267_string = "Neutral"; // 0x2a3 MovS
	func_162(var_13_bool, var_267_string); // 0x2a4 NEW_2
	var_268_int = 542708; // 0x2a6 PushI
	SetMessage(var_268_int); // 0x2a7 TObjFunc
	ClearReplies(); // 0x2a9 TObjFunc
	var_269_int = 542709; // 0x2ab PushI
	var_270_int = 45119; // 0x2ac PushI
	var_271_int = 45118; // 0x2ad PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x2ae TObjFunc
	return 0; // 0x2b0 Return
	
Label_689:
	var_272_int = 45119; // 0x2b1 PushI
	var_273_bool = var_12_bool == var_272_int; // 0x2b2 Eq
	if(var_273_bool == 0) goto Label_712; // 0x2b3 JumpB
	var_274_string = ""; // 0x2b4 PushV
	var_274_string = "Neutral"; // 0x2b5 MovS
	func_162(var_13_bool, var_274_string); // 0x2b6 NEW_2
	var_275_int = 542710; // 0x2b8 PushI
	SetMessage(var_275_int); // 0x2b9 TObjFunc
	ClearReplies(); // 0x2bb TObjFunc
	var_276_int = 542711; // 0x2bd PushI
	var_277_int = 45122; // 0x2be PushI
	var_278_int = 45120; // 0x2bf PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x2c0 TObjFunc
	var_279_int = 542712; // 0x2c2 PushI
	var_280_int = 45122; // 0x2c3 PushI
	var_281_int = 45121; // 0x2c4 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x2c5 TObjFunc
	return 0; // 0x2c7 Return
	
Label_712:
	var_282_int = 45122; // 0x2c8 PushI
	var_283_bool = var_12_bool == var_282_int; // 0x2c9 Eq
	if(var_283_bool == 0) goto Label_730; // 0x2ca JumpB
	var_284_string = ""; // 0x2cb PushV
	var_284_string = "Neutral"; // 0x2cc MovS
	func_162(var_13_bool, var_284_string); // 0x2cd NEW_2
	var_285_int = 542713; // 0x2cf PushI
	SetMessage(var_285_int); // 0x2d0 TObjFunc
	ClearReplies(); // 0x2d2 TObjFunc
	var_286_int = 542714; // 0x2d4 PushI
	var_287_int = 45125; // 0x2d5 PushI
	var_288_int = 45123; // 0x2d6 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x2d7 TObjFunc
	return 0; // 0x2d9 Return
	
Label_730:
	var_289_int = 45125; // 0x2da PushI
	var_290_bool = var_12_bool == var_289_int; // 0x2db Eq
	if(var_290_bool == 0) goto Label_753; // 0x2dc JumpB
	var_291_string = ""; // 0x2dd PushV
	var_291_string = "Neutral"; // 0x2de MovS
	func_162(var_13_bool, var_291_string); // 0x2df NEW_2
	var_292_int = 542715; // 0x2e1 PushI
	SetMessage(var_292_int); // 0x2e2 TObjFunc
	ClearReplies(); // 0x2e4 TObjFunc
	var_293_int = 542716; // 0x2e6 PushI
	var_294_int = 43523; // 0x2e7 PushI
	var_295_int = 45126; // 0x2e8 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x2e9 TObjFunc
	var_296_int = 542717; // 0x2eb PushI
	var_297_int = -1; // 0x2ec PushI
	var_298_int = 45127; // 0x2ed PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x2ee TObjFunc
	return 0; // 0x2f0 Return
	
Label_753:
	var_299_int = 43513; // 0x2f1 PushI
	var_300_bool = var_12_bool == var_299_int; // 0x2f2 Eq
	if(var_300_bool == 0) goto Label_781; // 0x2f3 JumpB
	var_301_string = ""; // 0x2f4 PushV
	var_301_string = "Neutral"; // 0x2f5 MovS
	func_162(var_13_bool, var_301_string); // 0x2f6 NEW_2
	var_302_int = 541365; // 0x2f8 PushI
	SetMessage(var_302_int); // 0x2f9 TObjFunc
	ClearReplies(); // 0x2fb TObjFunc
	var_303_int = 541366; // 0x2fd PushI
	var_304_int = 43515; // 0x2fe PushI
	var_305_int = 43514; // 0x2ff PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x300 TObjFunc
	var_306_int = 541372; // 0x302 PushI
	var_307_int = 43523; // 0x303 PushI
	var_308_int = 43521; // 0x304 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x305 TObjFunc
	var_309_int = 542718; // 0x307 PushI
	var_310_int = 45130; // 0x308 PushI
	var_311_int = 45129; // 0x309 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x30a TObjFunc
	return 0; // 0x30c Return
	
Label_781:
	var_312_int = 45130; // 0x30d PushI
	var_313_bool = var_12_bool == var_312_int; // 0x30e Eq
	if(var_313_bool == 0) goto Label_799; // 0x30f JumpB
	var_314_string = ""; // 0x310 PushV
	var_314_string = "Neutral"; // 0x311 MovS
	func_162(var_13_bool, var_314_string); // 0x312 NEW_2
	var_315_int = 542719; // 0x314 PushI
	SetMessage(var_315_int); // 0x315 TObjFunc
	ClearReplies(); // 0x317 TObjFunc
	var_316_int = 542736; // 0x319 PushI
	var_317_int = 45151; // 0x31a PushI
	var_318_int = 45150; // 0x31b PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_319_int = 45151; // 0x31f PushI
	var_320_bool = var_12_bool == var_319_int; // 0x320 Eq
	if(var_320_bool == 0) goto Label_817; // 0x321 JumpB
	var_321_string = ""; // 0x322 PushV
	var_321_string = "Neutral"; // 0x323 MovS
	func_162(var_13_bool, var_321_string); // 0x324 NEW_2
	var_322_int = 542737; // 0x326 PushI
	SetMessage(var_322_int); // 0x327 TObjFunc
	ClearReplies(); // 0x329 TObjFunc
	var_323_int = 542738; // 0x32b PushI
	var_324_int = 45153; // 0x32c PushI
	var_325_int = 45152; // 0x32d PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x32e TObjFunc
	return 0; // 0x330 Return
	
Label_817:
	var_326_int = 45153; // 0x331 PushI
	var_327_bool = var_12_bool == var_326_int; // 0x332 Eq
	if(var_327_bool == 0) goto Label_835; // 0x333 JumpB
	var_328_string = ""; // 0x334 PushV
	var_328_string = "Neutral"; // 0x335 MovS
	func_162(var_13_bool, var_328_string); // 0x336 NEW_2
	var_329_int = 542739; // 0x338 PushI
	SetMessage(var_329_int); // 0x339 TObjFunc
	ClearReplies(); // 0x33b TObjFunc
	var_330_int = 542720; // 0x33d PushI
	var_331_int = 45132; // 0x33e PushI
	var_332_int = 45131; // 0x33f PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x340 TObjFunc
	return 0; // 0x342 Return
	
Label_835:
	var_333_int = 45132; // 0x343 PushI
	var_334_bool = var_12_bool == var_333_int; // 0x344 Eq
	if(var_334_bool == 0) goto Label_863; // 0x345 JumpB
	var_335_string = ""; // 0x346 PushV
	var_335_string = "Neutral"; // 0x347 MovS
	func_162(var_13_bool, var_335_string); // 0x348 NEW_2
	var_336_int = 542721; // 0x34a PushI
	SetMessage(var_336_int); // 0x34b TObjFunc
	ClearReplies(); // 0x34d TObjFunc
	var_337_bool = 0; var_338_object = Obj(); // 0x34f PushV
	var_338_object = var_1_object; // 0x350 MovT
	func_1532(var_338_object); // 0x351 NEW_2
	if(var_337_bool == 0) goto Label_857; // 0x353 JumpB
	var_343_int = 542722; // 0x354 PushI
	var_344_int = 45134; // 0x355 PushI
	var_345_int = 45133; // 0x356 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x357 TObjFunc
	
Label_857:
	var_346_int = 542733; // 0x359 PushI
	var_347_int = 45147; // 0x35a PushI
	var_348_int = 45146; // 0x35b PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x35c TObjFunc
	return 0; // 0x35e Return
	
Label_863:
	var_349_int = 45147; // 0x35f PushI
	var_350_bool = var_12_bool == var_349_int; // 0x360 Eq
	if(var_350_bool == 0) goto Label_881; // 0x361 JumpB
	var_351_string = ""; // 0x362 PushV
	var_351_string = "Neutral"; // 0x363 MovS
	func_162(var_13_bool, var_351_string); // 0x364 NEW_2
	var_352_int = 542734; // 0x366 PushI
	SetMessage(var_352_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_353_int = 542735; // 0x36b PushI
	var_354_int = 43523; // 0x36c PushI
	var_355_int = 45148; // 0x36d PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x36e TObjFunc
	return 0; // 0x370 Return
	
Label_881:
	var_356_int = 45134; // 0x371 PushI
	var_357_bool = var_12_bool == var_356_int; // 0x372 Eq
	if(var_357_bool == 0) goto Label_899; // 0x373 JumpB
	var_358_string = ""; // 0x374 PushV
	var_358_string = "Neutral"; // 0x375 MovS
	func_162(var_13_bool, var_358_string); // 0x376 NEW_2
	var_359_int = 542723; // 0x378 PushI
	SetMessage(var_359_int); // 0x379 TObjFunc
	ClearReplies(); // 0x37b TObjFunc
	var_360_int = 542724; // 0x37d PushI
	var_361_int = 45136; // 0x37e PushI
	var_362_int = 45135; // 0x37f PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x380 TObjFunc
	return 0; // 0x382 Return
	
Label_899:
	var_363_int = 45136; // 0x383 PushI
	var_364_bool = var_12_bool == var_363_int; // 0x384 Eq
	if(var_364_bool == 0) goto Label_922; // 0x385 JumpB
	var_365_string = ""; // 0x386 PushV
	var_365_string = "Neutral"; // 0x387 MovS
	func_162(var_13_bool, var_365_string); // 0x388 NEW_2
	var_366_int = 542725; // 0x38a PushI
	SetMessage(var_366_int); // 0x38b TObjFunc
	ClearReplies(); // 0x38d TObjFunc
	var_367_int = 542726; // 0x38f PushI
	var_368_int = 45138; // 0x390 PushI
	var_369_int = 45137; // 0x391 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x392 TObjFunc
	var_370_int = 542732; // 0x394 PushI
	var_371_int = 45138; // 0x395 PushI
	var_372_int = 45144; // 0x396 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x397 TObjFunc
	return 0; // 0x399 Return
	
Label_922:
	var_373_int = 45138; // 0x39a PushI
	var_374_bool = var_12_bool == var_373_int; // 0x39b Eq
	if(var_374_bool == 0) goto Label_940; // 0x39c JumpB
	var_375_string = ""; // 0x39d PushV
	var_375_string = "Neutral"; // 0x39e MovS
	func_162(var_13_bool, var_375_string); // 0x39f NEW_2
	var_376_int = 542727; // 0x3a1 PushI
	SetMessage(var_376_int); // 0x3a2 TObjFunc
	ClearReplies(); // 0x3a4 TObjFunc
	var_377_int = 542728; // 0x3a6 PushI
	var_378_int = 45140; // 0x3a7 PushI
	var_379_int = 45139; // 0x3a8 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x3a9 TObjFunc
	return 0; // 0x3ab Return
	
Label_940:
	var_380_int = 45140; // 0x3ac PushI
	var_381_bool = var_12_bool == var_380_int; // 0x3ad Eq
	if(var_381_bool == 0) goto Label_963; // 0x3ae JumpB
	var_382_string = ""; // 0x3af PushV
	var_382_string = "Neutral"; // 0x3b0 MovS
	func_162(var_13_bool, var_382_string); // 0x3b1 NEW_2
	var_383_int = 542729; // 0x3b3 PushI
	SetMessage(var_383_int); // 0x3b4 TObjFunc
	ClearReplies(); // 0x3b6 TObjFunc
	var_384_int = 542730; // 0x3b8 PushI
	var_385_int = 43523; // 0x3b9 PushI
	var_386_int = 45141; // 0x3ba PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x3bb TObjFunc
	var_387_int = 542731; // 0x3bd PushI
	var_388_int = -1; // 0x3be PushI
	var_389_int = 45143; // 0x3bf PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_390_int = 43523; // 0x3c3 PushI
	var_391_bool = var_12_bool == var_390_int; // 0x3c4 Eq
	if(var_391_bool == 0) goto Label_986; // 0x3c5 JumpB
	var_392_string = ""; // 0x3c6 PushV
	var_392_string = "Neutral"; // 0x3c7 MovS
	func_162(var_13_bool, var_392_string); // 0x3c8 NEW_2
	var_393_int = 541374; // 0x3ca PushI
	SetMessage(var_393_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_394_int = 541375; // 0x3cf PushI
	var_395_int = -1; // 0x3d0 PushI
	var_396_int = 43525; // 0x3d1 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x3d2 TObjFunc
	var_397_int = 541376; // 0x3d4 PushI
	var_398_int = -1; // 0x3d5 PushI
	var_399_int = 43526; // 0x3d6 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x3d7 TObjFunc
	return 0; // 0x3d9 Return
	
Label_986:
	var_400_int = 43515; // 0x3da PushI
	var_401_bool = var_12_bool == var_400_int; // 0x3db Eq
	if(var_401_bool == 0) goto Label_1004; // 0x3dc JumpB
	var_402_string = ""; // 0x3dd PushV
	var_402_string = "Neutral"; // 0x3de MovS
	func_162(var_13_bool, var_402_string); // 0x3df NEW_2
	var_403_int = 541367; // 0x3e1 PushI
	SetMessage(var_403_int); // 0x3e2 TObjFunc
	ClearReplies(); // 0x3e4 TObjFunc
	var_404_int = 541371; // 0x3e6 PushI
	var_405_int = -1; // 0x3e7 PushI
	var_406_int = 43520; // 0x3e8 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x3e9 TObjFunc
	return 0; // 0x3eb Return
	
Label_1004:
	var_3_string = 1; // 0x3ec TMovB
	var_407_bool = 0; // 0x3ed PushV
	func_1569(var_407_bool); // 0x3ee NEW_2
	if(var_407_bool == 0) goto Label_1012; // 0x3f0 JumpB
	lshStopAnimation(); // 0x3f1 Func
	goto Label_1014; // 0x3f3 Jump
	
Label_1014:
	return 0; // 0x3f6 Return
	
Label_1012:
	StopAnimation(); // 0x3f4 Func
	
Label_1016:
	return 0; // 0x3f8 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_1168(var_11_bool, var_12_object); // 0x401 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x403 PushV
	var_17_object = var_12_object; // 0x404 Mov
	TaskCall(0); // 0x405 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x406 NEW_2
	TaskReturn(); // 0x407 TaskReturn
	return 0; // 0x409 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x431 PushS
	var_14_bool = var_12_string == var_13_string; // 0x432 Eq
	if(var_14_bool == 0) goto Label_1079; // 0x433 JumpB
	func_1052(var_12_string); // 0x435 NEW_2
	
Label_1079:
	return 0; // 0x437 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x438 PushT
	if(var_12_int == 0) goto Label_1085; // 0x439 JumpB
	func_1168(var_10_bool, var_11_bool); // 0x43b NEW_2
	
Label_1085:
	var_16_bool = 0; // 0x43d PushV
	var_16_bool = 0; // 0x43e MovB
	var_17_int = var_5_int; // 0x43f PushT
	if(var_17_int == 0) goto Label_1094; // 0x440 JumpB
	var_18_bool = 0; // 0x441 PushV
	func_1101(var_18_bool); // 0x442 NEW_2
	if(var_18_bool == 0) goto Label_1094; // 0x444 JumpB
	var_16_bool = 1; // 0x445 MovB
	
Label_1094:
	if(var_16_bool == 0) goto Label_1100; // 0x446 JumpB
	var_19_object = Obj(); // 0x447 PushV
	func_1415(var_19_object); // 0x448 NEW_2
	RemoveActor(var_19_object); // 0x44a Func
	
Label_1100:
	return 0; // 0x44c Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x47a PushI
	var_14_bool = var_12_int == var_13_int; // 0x47b Eq
	if(var_14_bool == 0) goto Label_1167; // 0x47c JumpB
	var_15_bool = 0; // 0x47d PushV
	func_1130(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x47e NEW_2
	if(var_15_bool == 0) goto Label_1161; // 0x480 JumpB
	var_28_bool = var_2_object == 0; // 0x481 Not
	if(var_28_bool == 0) goto Label_1160; // 0x482 JumpB
	var_29_object = Obj(); // 0x483 PushV
	var_29_object = var_4_bool; // 0x484 MovT
	func_1397(var_29_object); // 0x485 NEW_2
	var_2_object = 1; // 0x487 TMovB
	
Label_1160:
	goto Label_1167; // 0x488 Jump
	
Label_1167:
	return 0; // 0x48f Return
	
Label_1161:
	var_36_object = var_2_object; // 0x489 PushT
	if(var_36_object == 0) goto Label_1167; // 0x48a JumpB
	var_37_string = "head"; // 0x48b PushS
	UnlookAsync(var_37_string); // 0x48c Func
	var_2_object = 0; // 0x48e TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x3f9 PushV
	var_12_float = 300; // 0x3fa MovI
	var_13_float = 100; // 0x3fb MovI
	func_1034(var_11_bool, var_12_float, var_13_float); // 0x3fc NEW_2
	return 0; // 0x3fe Return
}


func_1408()
{
	var_15_bool = 0; // 0x580 PushV
	func_1569(var_15_bool); // 0x581 NEW_2
	if(var_15_bool == 0) goto Label_1414; // 0x583 JumpB
	lshStopSpeech(); // 0x584 Func
	
Label_1414:
	return 0; // 0x586 Return
}


func_1281(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x501 PushV
	GetPosition(var_40_cvector); // 0x502 ObjFunc
	GetEyesHeight(var_39_float); // 0x504 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x506 PushE
	var_48_float = var_48_float + var_39_float; // 0x507 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x508 PopE
	GetPosition(var_41_cvector); // 0x509 Func
	GetEyesHeight(var_39_float); // 0x50b Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x50d PushE
	var_49_float = var_49_float + var_39_float; // 0x50e Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x50f PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x510 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x511 PushE
	var_50_float = 0; // 0x512 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x513 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x514 Or
	var_52_float = sqrt(var_51_int); // 0x515 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x516 Div2
	var_43_cvector = -var_42_cvector; // 0x517 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x518 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x519 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x51a PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x51b Xor2
	func_1421(var_54_cvector, var_55_cvector); // 0x51c NEW_2
	var_62_int = 25; // 0x51e PushI
	var_63_float = var_54_cvector * var_62_int; // 0x51f Mult
	var_64_int = var_53_float + var_63_float; // 0x520 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x521 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x522 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x523 Add2
	IsOverrideActive(var_46_bool); // 0x524 Func
	var_66_bool = var_46_bool; // 0x526 Push
	if(var_66_bool == 0) goto Label_1322; // 0x527 JumpB
	var_27_bool = 0; // 0x528 MovB
	return 18; // 0x529 Return
	
Label_1322:
	StopWorld(); // 0x52a Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x52c Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x52e PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x52f PushE
	Rotate(var_67_float, var_68_float); // 0x530 Func
	var_69_bool = 0; // 0x532 PushV
	func_1569(var_69_bool); // 0x533 NEW_2
	if(var_69_bool == 0) goto Label_1335; // 0x535 JumpB
	goto Label_1343; // 0x536 Jump
	
Label_1343:
	CameraWaitForPlayFinish(); // 0x53f Func
	ResumeWorld(); // 0x541 Func
	var_27_bool = 1; // 0x543 MovB
	return 18; // 0x544 Return
	
Label_1335:
	var_70_string = "head"; // 0x537 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x538 Func
	var_71_bool = var_47_bool; // 0x53a Push
	if(var_71_bool == 0) goto Label_1343; // 0x53b JumpB
	var_72_string = "head"; // 0x53c PushS
	LookAsyncCamera(var_72_string); // 0x53d Func
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 130.0; // 0x4 MovF
	func_1281(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_1563(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_1561(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_1565(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_1567(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_1544(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_169_bool = var_26_bool == 0; // 0x38 Not
	if(var_169_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_170_object = Obj(); // 0x3f PushV
	var_170_object = var_17_object; // 0x40 Mov
	func_1349(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1415(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x587 PushV
	self(var_21_object); // 0x588 Func
	var_19_object = var_21_object; // 0x58a Mov
	return 2; // 0x58b Return
}


func_1544(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x608 PushV
	var_81_string = "branch"; // 0x609 PushS
	GetVariable(var_81_string, var_80_int); // 0x60a Func
	var_82_int = 0; // 0x60c PushI
	var_83_bool = var_80_int == var_82_int; // 0x60d Eq
	if(var_83_bool == 0) goto Label_1554; // 0x60e JumpB
	var_78_int = 1; // 0x60f MovI
	return 2; // 0x610 Return
	
Label_1554:
	var_84_int = 1; // 0x612 PushI
	var_85_bool = var_80_int == var_84_int; // 0x613 Eq
	if(var_85_bool == 0) goto Label_1559; // 0x614 JumpB
	var_78_int = 2; // 0x615 MovI
	return 2; // 0x616 Return
	
Label_1559:
	var_78_int = 3; // 0x617 MovI
	return 2; // 0x618 Return
}


func_1034(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x40a PushV
	var_6_int = 0; // 0x40b TMovB
	
Label_1036:
	var_18_int = 3; // 0x40c PushI
	rand(var_16_float, var_18_int); // 0x40d Func
	var_19_int = 3; // 0x40f PushI
	var_20_int = var_16_float + var_19_int; // 0x410 Add
	Sleep(var_20_int, var_17_bool); // 0x411 Func
	var_6_int = 1; // 0x413 TMovB
	var_21_float = 0; var_22_float = 0; // 0x414 PushV
	var_21_float = var_12_float; // 0x415 Mov
	var_22_float = var_13_float; // 0x416 Mov
	func_1103(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x417 NEW_2
	var_6_int = 0; // 0x419 TMovB
	goto Label_1036; // 0x41a Jump
}


func_1421(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x58d PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x58e Or
	var_58_float = sqrt(var_59_int); // 0x58f Sqrt2
	var_60_float = 0.0; // 0x590 PushF
	var_61_bool = var_58_float < var_60_float; // 0x591 LT
	if(var_61_bool == 0) goto Label_1429; // 0x592 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x593 MovV
	return 2; // 0x594 Return
	
Label_1429:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x595 Div2
	return 2; // 0x596 Return
}


func_1168(var_2_object, var_3_string)
{
	func_1263(); // 0x491 NEW_2
	var_13_int = 10; // 0x493 PushI
	KillTimer(var_13_int); // 0x494 Func
	var_14_object = var_2_object; // 0x496 PushT
	if(var_14_object == 0) goto Label_1180; // 0x497 JumpB
	var_15_string = "head"; // 0x498 PushS
	UnlookAsync(var_15_string); // 0x499 Func
	var_2_object = 0; // 0x49b TMovB
	
Label_1180:
	var_3_string = 1; // 0x49c TMovB
	return 0; // 0x49d Return
}


func_1431(var_126_int, var_127_string)
{
	var_128_int = 0; var_129_int = 0; // 0x597 PushV
	GetVariable(var_127_string, var_129_int); // 0x598 Func
	var_126_int = var_129_int; // 0x59a Mov
	return 2; // 0x59b Return
}


func_1561(var_75_int)
{
	var_75_int = 515571; // 0x619 MovI
	return 0; // 0x61a Return
}


func_1563(var_74_int)
{
	var_74_int = 504029; // 0x61b MovI
	return 0; // 0x61c Return
}


func_1052(var_5_int)
{
	var_5_int = 1; // 0x41c TMovB
	var_15_bool = 0; // 0x41d PushV
	var_15_bool = 0; // 0x41e MovB
	var_16_bool = 0; // 0x41f PushV
	func_1276(var_16_bool); // 0x420 NEW_2
	var_19_bool = var_16_bool == 0; // 0x422 Not
	if(var_19_bool == 0) goto Label_1065; // 0x423 JumpB
	var_20_bool = 0; // 0x424 PushV
	func_1101(var_20_bool); // 0x425 NEW_2
	if(var_20_bool == 0) goto Label_1065; // 0x427 JumpB
	var_15_bool = 1; // 0x428 MovB
	
Label_1065:
	if(var_15_bool == 0) goto Label_1071; // 0x429 JumpB
	var_21_object = Obj(); // 0x42a PushV
	func_1415(var_21_object); // 0x42b NEW_2
	RemoveActor(var_21_object); // 0x42d Func
	
Label_1071:
	return 0; // 0x42f Return
}


func_1436(var_96_string, var_97_bool)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x59c PushV
	FindActor(var_99_object, var_96_string); // 0x59d Func
	var_100_bool = var_99_object == 0; // 0x59f Not
	if(var_100_bool == 0) goto Label_1448; // 0x5a0 JumpB
	var_101_string = "Door "; // 0x5a1 PushS
	var_102_int = var_101_string + var_96_string; // 0x5a2 Add
	var_103_string = " not found"; // 0x5a3 PushS
	var_104_int = var_102_int + var_103_string; // 0x5a4 Add
	Trace(var_104_int); // 0x5a5 Func
	goto Label_1451; // 0x5a7 Jump
	
Label_1451:
	return 2; // 0x5ab Return
	
Label_1448:
	var_105_string = "locked"; // 0x5a8 PushS
	SetProperty(var_105_string, var_97_bool); // 0x5a9 ObjFunc
}


func_1565(var_76_string)
{
	var_76_string = "ui/NPC_bmask.png"; // 0x61d MovS
	return 0; // 0x61e Return
}


func_1182()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x49e PushV
	WaitForAnimEnd(); // 0x49f Func
	var_44_bool = 0; // 0x4a1 PushV
	func_1276(var_44_bool); // 0x4a2 NEW_2
	var_45_bool = var_44_bool == 0; // 0x4a4 Not
	if(var_45_bool == 0) goto Label_1191; // 0x4a5 JumpB
	return 14; // 0x4a6 Return
	
Label_1191:
	var_46_int = 0; // 0x4a7 PushV
	func_1460(var_46_int); // 0x4a8 NEW_2
	var_37_int = var_46_int; // 0x4a9 Mov
	var_38_int = 0; // 0x4ab MovI
	
Label_1196:
	var_59_bool = 0; // 0x4ac PushV
	var_59_bool = 0; // 0x4ad MovB
	var_60_int = 5; // 0x4ae PushI
	var_61_bool = var_38_int < var_60_int; // 0x4af LT
	if(var_61_bool == 0) goto Label_1206; // 0x4b0 JumpB
	var_62_bool = 0; // 0x4b1 PushV
	func_1276(var_62_bool); // 0x4b2 NEW_2
	if(var_62_bool == 0) goto Label_1206; // 0x4b4 JumpB
	var_59_bool = 1; // 0x4b5 MovB
	
Label_1206:
	if(var_59_bool == 0) goto Label_1258; // 0x4b6 JumpB
	var_63_int = 3; // 0x4b7 PushI
	irand(var_39_int, var_63_int); // 0x4b8 Func
	var_64_int = 0; // 0x4ba PushI
	var_65_bool = var_39_int == var_64_int; // 0x4bb Eq
	if(var_65_bool == 0) goto Label_1230; // 0x4bc JumpB
	var_66_int = var_37_int; // 0x4bd Push
	if(var_66_int == 0) goto Label_1229; // 0x4be JumpB
	irand(var_40_int, var_37_int); // 0x4bf Func
	var_67_string = "all"; // 0x4c1 PushS
	var_68_string = ""; var_69_int = 0; // 0x4c2 PushV
	var_69_int = var_40_int; // 0x4c3 Mov
	func_1453(var_68_string, var_69_int); // 0x4c4 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x4c6 Func
	WaitForAnimEnd(var_41_bool); // 0x4c8 Func
	var_70_bool = var_41_bool == 0; // 0x4ca Not
	if(var_70_bool == 0) goto Label_1229; // 0x4cb JumpB
	goto Label_1258; // 0x4cc Jump
	
Label_1258:
	ResetAAS(); // 0x4ea Func
	return 14; // 0x4ec Return
	
Label_1229:
	goto Label_1247; // 0x4cd Jump
	
Label_1247:
	var_71_bool = 0; // 0x4df PushV
	func_1261(var_71_bool); // 0x4e0 NEW_2
	var_72_bool = var_71_bool == 0; // 0x4e2 Not
	if(var_72_bool == 0) goto Label_1253; // 0x4e3 JumpB
	goto Label_1258; // 0x4e4 Jump
	
Label_1253:
	ResetAAS(); // 0x4e5 Func
	var_73_int = 1; // 0x4e7 PushI
	var_38_int = var_38_int + var_73_int; // 0x4e8 Add2
	goto Label_1196; // 0x4e9 Jump
	
Label_1230:
	var_74_int = 1; // 0x4ce PushI
	var_75_bool = var_39_int == var_74_int; // 0x4cf Eq
	if(var_75_bool == 0) goto Label_1244; // 0x4d0 JumpB
	var_76_int = 4; // 0x4d1 PushI
	rand(var_42_float, var_76_int); // 0x4d2 Func
	var_77_int = 1; // 0x4d4 PushI
	var_78_int = var_42_float + var_77_int; // 0x4d5 Add
	Sleep(var_78_int, var_43_bool); // 0x4d6 Func
	var_79_bool = var_43_bool == 0; // 0x4d8 Not
	if(var_79_bool == 0) goto Label_1243; // 0x4d9 JumpB
	goto Label_1258; // 0x4da Jump
	
Label_1243:
	goto Label_1247; // 0x4db Jump
	
Label_1244:
	var_80_int = var_38_int; // 0x4dc Push
	if(var_80_int == 0) goto Label_1247; // 0x4dd JumpB
	goto Label_1258; // 0x4de Jump
}


func_1567(var_77_string)
{
	var_77_string = "ui/NPC_bmask_b.png"; // 0x61f MovS
	return 0; // 0x620 Return
}


func_1569(var_69_bool)
{
	var_69_bool = 0; // 0x621 MovB
	return 0; // 0x622 Return
}


func_162(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0xa3 PushV
	func_1569(var_107_bool); // 0xa4 NEW_2
	var_108_bool = var_107_bool == 0; // 0xa6 Not
	if(var_108_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_109_bool = var_106_string == var_2_object; // 0xa9 Eq
	if(var_109_bool == 0) goto Label_172; // 0xaa JumpB
	return 0; // 0xab Return
	
Label_172:
	var_110_string = ""; var_111_bool = 0; // 0xac PushV
	var_110_string = var_106_string; // 0xad Mov
	var_112_string = ""; // 0xae PushS
	var_113_bool = var_106_string == var_112_string; // 0xaf Eq
	if(var_113_bool == 0) goto Label_179; // 0xb0 JumpB
	var_111_bool = 0; // 0xb1 MovB
	goto Label_180; // 0xb2 Jump
	
Label_180:
	func_1382(var_110_string, var_111_bool); // 0xb4 NEW_2
	var_2_object = var_106_string; // 0xb6 TMov
	return 0; // 0xb7 Return
	
Label_179:
	var_111_bool = 1; // 0xb3 MovB
}


func_1532(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0x5fd PushV
	var_340_string = "k12BurahVisit"; // 0x5fe MovS
	func_1431(var_339_int, var_340_string); // 0x5ff NEW_2
	var_341_int = 0; // 0x601 PushI
	var_342_bool = var_339_int != var_341_int; // 0x602 Neq
	if(var_342_bool == 0) goto Label_1542; // 0x603 JumpB
	var_337_bool = 1; // 0x604 MovB
	return 0; // 0x605 Return
	
Label_1542:
	var_337_bool = 0; // 0x606 MovB
	return 0; // 0x607 Return
}


func_1453(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x5ad PushV
	var_55_string = "idle"; // 0x5ae MovS
	var_56_int = var_53_int; // 0x5af Push
	if(var_56_int == 0) goto Label_1458; // 0x5b0 JumpB
	var_55_string = var_55_string + var_53_int; // 0x5b1 Add2
	
Label_1458:
	var_52_string = var_55_string; // 0x5b2 Mov
	return 2; // 0x5b3 Return
}


func_1460(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x5b4 PushV
	var_49_int = 0; // 0x5b5 MovI
	
Label_1462:
	var_51_string = "all"; // 0x5b6 PushS
	var_52_string = ""; var_53_int = 0; // 0x5b7 PushV
	var_53_int = var_49_int; // 0x5b8 Mov
	func_1453(var_52_string, var_53_int); // 0x5b9 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x5bb Func
	var_57_bool = var_50_bool == 0; // 0x5bd Not
	if(var_57_bool == 0) goto Label_1472; // 0x5be JumpB
	goto Label_1475; // 0x5bf Jump
	
Label_1475:
	var_46_int = var_49_int; // 0x5c3 Mov
	return 4; // 0x5c4 Return
	
Label_1472:
	var_58_int = 1; // 0x5c0 PushI
	var_49_int = var_49_int + var_58_int; // 0x5c1 Add2
	goto Label_1462; // 0x5c2 Jump
}


func_1349()
{
	var_171_bool = 0; var_172_bool = 0; // 0x545 PushV
	CameraSwitchToNormal(); // 0x546 Func
	var_173_bool = 0; // 0x548 PushV
	func_1569(var_173_bool); // 0x549 NEW_2
	if(var_173_bool == 0) goto Label_1357; // 0x54b JumpB
	goto Label_1365; // 0x54c Jump
	
Label_1365:
	return 2; // 0x555 Return
	
Label_1357:
	var_174_string = "head"; // 0x54d PushS
	HasAnimationTrack(var_172_bool, var_174_string); // 0x54e Func
	var_175_bool = var_172_bool; // 0x550 Push
	if(var_175_bool == 0) goto Label_1365; // 0x551 JumpB
	var_176_string = "head"; // 0x552 PushS
	UnlookAsync(var_176_string); // 0x553 Func
}


func_1477()
{
	var_96_string = ""; var_97_bool = 0; // 0x5c6 PushV
	var_96_string = "itheater@door1"; // 0x5c7 MovS
	var_97_bool = 0; // 0x5c8 MovB
	func_1436(var_96_string, var_97_bool); // 0x5c9 NEW_2
	return 0; // 0x5cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_132; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_1477(); // 0x53 NEW_2
	var_106_string = ""; // 0x55 PushV
	var_106_string = "Neutral"; // 0x56 MovS
	func_162(var_88_object, var_106_string); // 0x57 NEW_2
	var_123_int = 541007; // 0x59 PushI
	SetMessage(var_123_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x5e PushV
	var_125_object = var_1_object; // 0x5f MovT
	func_1508(var_125_object); // 0x60 NEW_2
	if(var_124_bool == 0) goto Label_104; // 0x62 JumpB
	var_132_int = 541347; // 0x63 PushI
	var_133_int = 43494; // 0x64 PushI
	var_134_int = 43493; // 0x65 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x66 TObjFunc
	
Label_104:
	var_135_bool = 0; // 0x68 PushV
	var_135_bool = 0; // 0x69 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x6a PushV
	var_137_object = var_1_object; // 0x6b MovT
	func_1520(var_137_object); // 0x6c NEW_2
	if(var_136_bool == 0) goto Label_118; // 0x6e JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x6f PushV
	var_143_object = var_1_object; // 0x70 MovT
	func_1508(var_143_object); // 0x71 NEW_2
	var_144_bool = var_142_bool == 0; // 0x73 Not
	if(var_144_bool == 0) goto Label_118; // 0x74 JumpB
	var_135_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_135_bool == 0) goto Label_124; // 0x76 JumpB
	var_145_int = 542740; // 0x77 PushI
	var_146_int = 45157; // 0x78 PushI
	var_147_int = 45156; // 0x79 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x7a TObjFunc
	
Label_124:
	var_148_int = 541034; // 0x7c PushI
	var_149_int = -1; // 0x7d PushI
	var_150_int = 43128; // 0x7e PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x7f TObjFunc
	goto Label_132; // 0x81 Jump
	
Label_132:
	var_151_bool = 0; // 0x84 PushV
	func_1569(var_151_bool); // 0x85 NEW_2
	if(var_151_bool == 0) goto Label_147; // 0x87 JumpB
	
Label_136:
	lshWaitForAnimEnd(); // 0x88 Func
	var_152_string = var_3_string; // 0x8a PushT
	if(var_152_string == 0) goto Label_141; // 0x8b JumpB
	goto Label_146; // 0x8c Jump
	
Label_146:
	goto Label_161; // 0x92 Jump
	
Label_161:
	return 0; // 0xa1 Return
	
Label_141:
	var_153_string = ""; // 0x8d PushV
	var_153_string = var_2_object; // 0x8e MovT
	func_1366(var_153_string); // 0x8f NEW_2
	goto Label_136; // 0x91 Jump
	
Label_147:
	var_164_string = "all"; // 0x93 PushS
	var_165_string = "idle"; // 0x94 PushS
	PlayAnimation(var_164_string, var_165_string); // 0x95 Func
	
Label_151:
	WaitForAnimEnd(); // 0x97 Func
	var_166_string = var_3_string; // 0x99 PushT
	if(var_166_string == 0) goto Label_156; // 0x9a JumpB
	goto Label_161; // 0x9b Jump
	
Label_156:
	var_167_string = "all"; // 0x9c PushS
	var_168_string = "idle"; // 0x9d PushS
	PlayAnimation(var_167_string, var_168_string); // 0x9e Func
	goto Label_151; // 0xa0 Jump
}


func_1484()
{
	var_20_string = "ook12TBirdmask1"; // 0x5cd PushS
	var_21_int = 1; // 0x5ce PushI
	SetVariable(var_20_string, var_21_int); // 0x5cf Func
	return 0; // 0x5d1 Return
}


func_1101(var_18_bool)
{
	var_18_bool = 1; // 0x44d MovB
	return 0; // 0x44e Return
}


func_1103(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x450 PushV
	func_1276(var_23_bool); // 0x451 NEW_2
	var_26_bool = var_23_bool == 0; // 0x453 Not
	if(var_26_bool == 0) goto Label_1110; // 0x454 JumpB
	return 0; // 0x455 Return
	
Label_1110:
	var_27_string = "player"; // 0x456 PushS
	FindActor(var_17_bool, var_27_string); // 0x457 Func
	var_2_object = 0; // 0x459 TMovB
	var_3_string = 0; // 0x45a TMovB
	var_0_object = var_21_float; // 0x45b TMov
	var_1_object = var_22_float; // 0x45c TMov
	var_28_int = 10; // 0x45d PushI
	var_29_float = 1.0; // 0x45e PushF
	SetTimer(var_28_int, var_29_float); // 0x45f Func
	func_1182(); // 0x462 NEW_2
	var_81_bool = var_3_string == 0; // 0x464 Not
	if(var_81_bool == 0) goto Label_1129; // 0x465 JumpB
	var_82_int = 10; // 0x466 PushI
	KillTimer(var_82_int); // 0x467 Func
	
Label_1129:
	return 0; // 0x469 Return
}


func_1490()
{
	var_26_string = "ook12TBirdmask2"; // 0x5d3 PushS
	var_27_int = 1; // 0x5d4 PushI
	SetVariable(var_26_string, var_27_int); // 0x5d5 Func
	return 0; // 0x5d7 Return
}


func_1366(var_153_string)
{
	var_154_bool = 0; var_155_float = 0; var_156_float = 0; var_157_bool = 0; var_158_float = 0; var_159_float = 0; // 0x556 PushV
	lshHasAnimation(var_157_bool, var_153_string); // 0x557 Func
	var_160_bool = var_157_bool; // 0x559 Push
	if(var_160_bool == 0) goto Label_1377; // 0x55a JumpB
	lshGetAnimTimes(var_153_string, var_158_float, var_159_float); // 0x55b Func
	var_161_bool = 0; // 0x55d PushB
	lshPlayAnimation(var_158_float, var_159_float, var_161_bool); // 0x55e Func
	goto Label_1381; // 0x560 Jump
	
Label_1381:
	return 6; // 0x565 Return
	
Label_1377:
	var_162_string = "Can't find lsh animation : "; // 0x561 PushS
	var_163_int = var_162_string + var_153_string; // 0x562 Add
	Trace(var_163_int); // 0x563 Func
}


func_1496(var_246_bool)
{
	var_248_int = 0; var_249_string = ""; // 0x5d9 PushV
	var_249_string = "k12DankoVisit"; // 0x5da MovS
	func_1431(var_248_int, var_249_string); // 0x5db NEW_2
	var_250_int = 0; // 0x5dd PushI
	var_251_bool = var_248_int != var_250_int; // 0x5de Neq
	if(var_251_bool == 0) goto Label_1506; // 0x5df JumpB
	var_246_bool = 1; // 0x5e0 MovB
	return 0; // 0x5e1 Return
	
Label_1506:
	var_246_bool = 0; // 0x5e2 MovB
	return 0; // 0x5e3 Return
}


func_1508(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x5e5 PushV
	var_127_string = "ook12TBirdmask1"; // 0x5e6 MovS
	func_1431(var_126_int, var_127_string); // 0x5e7 NEW_2
	var_130_int = 0; // 0x5e9 PushI
	var_131_bool = var_126_int == var_130_int; // 0x5ea Eq
	if(var_131_bool == 0) goto Label_1518; // 0x5eb JumpB
	var_124_bool = 1; // 0x5ec MovB
	return 0; // 0x5ed Return
	
Label_1518:
	var_124_bool = 0; // 0x5ee MovB
	return 0; // 0x5ef Return
}


func_1382(var_110_string, var_111_bool)
{
	var_114_bool = 0; var_115_float = 0; var_116_float = 0; var_117_bool = 0; var_118_float = 0; var_119_float = 0; // 0x566 PushV
	lshHasAnimation(var_117_bool, var_110_string); // 0x567 Func
	var_120_bool = var_117_bool; // 0x569 Push
	if(var_120_bool == 0) goto Label_1392; // 0x56a JumpB
	lshGetAnimTimes(var_110_string, var_118_float, var_119_float); // 0x56b Func
	lshPlayAnimation(var_118_float, var_119_float, var_111_bool); // 0x56d Func
	goto Label_1396; // 0x56f Jump
	
Label_1396:
	return 6; // 0x574 Return
	
Label_1392:
	var_121_string = "Can't find lsh animation : "; // 0x570 PushS
	var_122_int = var_121_string + var_110_string; // 0x571 Add
	Trace(var_122_int); // 0x572 Func
}


func_1130(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x46a PushV
	var_18_bool = var_4_bool == 0; // 0x46b NullEq
	if(var_18_bool == 0) goto Label_1135; // 0x46c JumpB
	var_15_bool = 0; // 0x46d MovB
	return 2; // 0x46e Return
	
Label_1135:
	var_19_float = 0; var_20_object = Obj(); // 0x46f PushV
	var_20_object = var_4_bool; // 0x470 MovT
	func_1268(var_20_object); // 0x471 NEW_2
	var_17_float = sqrt(var_19_float); // 0x473 Sqrt2
	var_27_object = var_2_object; // 0x474 PushT
	if(var_27_object == 0) goto Label_1143; // 0x475 JumpB
	var_17_float = var_17_float - var_1_object; // 0x476 Sub2
	
Label_1143:
	var_15_bool = var_17_float < var_0_object; // 0x477 LT2
	return 2; // 0x478 Return
}


func_1261(var_71_bool)
{
	var_71_bool = 1; // 0x4ed MovB
	return 0; // 0x4ee Return
}


func_1263()
{
	StopAnimation(); // 0x4ef Func
	StopGroup0(); // 0x4f1 Func
	return 0; // 0x4f3 Return
}


func_1520(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0x5f1 PushV
	var_139_string = "ook12TBirdmask2"; // 0x5f2 MovS
	func_1431(var_138_int, var_139_string); // 0x5f3 NEW_2
	var_140_int = 0; // 0x5f5 PushI
	var_141_bool = var_138_int == var_140_int; // 0x5f6 Eq
	if(var_141_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_136_bool = 1; // 0x5f8 MovB
	return 0; // 0x5f9 Return
	
Label_1530:
	var_136_bool = 0; // 0x5fa MovB
	return 0; // 0x5fb Return
}


func_1268(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x4f4 PushV
	GetPosition(var_24_cvector); // 0x4f5 Func
	GetPosition(var_25_cvector); // 0x4f7 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x4f9 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x4fa Or2
	return 6; // 0x4fb Return
}


func_1397(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x575 PushV
	GetEyesHeight(var_32_float); // 0x576 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x578 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x579 PushE
	var_34_float = var_32_float; // 0x57a Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x57b PopE
	var_35_string = "head"; // 0x57c PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x57d Func
	return 4; // 0x57f Return
}


func_1276(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x4fc PushV
	IsLoaded(var_25_bool); // 0x4fd Func
	var_23_bool = var_25_bool; // 0x4ff Mov
	return 2; // 0x500 Return
}


