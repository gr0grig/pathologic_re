task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xac PushI
	if(var_9_int == 0) goto Label_579; // 0xad JumpB
	func_1184(); // 0xaf NEW_2
	var_11_int = 28833; // 0xb1 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb2 Eq
	if(var_12_bool == 0) goto Label_185; // 0xb3 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb4 PushV
	var_13_object = var_1_object; // 0xb5 MovT
	var_14_object = var_0_object; // 0xb6 MovT
	func_1245(); // 0xb7 NEW_2
	
Label_185:
	var_40_int = 28836; // 0xb9 PushI
	var_41_bool = var_8_bool == var_40_int; // 0xba Eq
	if(var_41_bool == 0) goto Label_193; // 0xbb JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xbc PushV
	var_42_object = var_1_object; // 0xbd MovT
	var_43_object = var_0_object; // 0xbe MovT
	func_1245(); // 0xbf NEW_2
	
Label_193:
	var_44_int = 28837; // 0xc1 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xc2 Eq
	if(var_45_bool == 0) goto Label_201; // 0xc3 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc4 PushV
	var_46_object = var_1_object; // 0xc5 MovT
	var_47_object = var_0_object; // 0xc6 MovT
	func_1245(); // 0xc7 NEW_2
	
Label_201:
	var_48_int = 28506; // 0xc9 PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xca Eq
	if(var_49_bool == 0) goto Label_234; // 0xcb JumpB
	var_50_string = ""; // 0xcc PushV
	var_50_string = "Neutral"; // 0xcd MovS
	func_149(var_8_bool, var_50_string); // 0xce NEW_2
	var_67_int = 527198; // 0xd0 PushI
	SetMessage(var_67_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_68_bool = 0; var_69_object = Obj(); // 0xd5 PushV
	var_69_object = var_1_object; // 0xd6 MovT
	func_1254(var_69_object); // 0xd7 NEW_2
	if(var_68_bool == 0) goto Label_223; // 0xd9 JumpB
	var_76_int = 527199; // 0xda PushI
	var_77_int = 28789; // 0xdb PushI
	var_78_int = 28507; // 0xdc PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xdd TObjFunc
	
Label_223:
	var_79_int = 527202; // 0xdf PushI
	var_80_int = -1; // 0xe0 PushI
	var_81_int = 28510; // 0xe1 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xe2 TObjFunc
	var_82_int = 527506; // 0xe4 PushI
	var_83_int = -1; // 0xe5 PushI
	var_84_int = 28838; // 0xe6 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_85_int = 28789; // 0xea PushI
	var_86_bool = var_7_cvector == var_85_int; // 0xeb Eq
	if(var_86_bool == 0) goto Label_257; // 0xec JumpB
	var_87_string = ""; // 0xed PushV
	var_87_string = "Sorrow"; // 0xee MovS
	func_149(var_8_bool, var_87_string); // 0xef NEW_2
	var_88_int = 527465; // 0xf1 PushI
	SetMessage(var_88_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_89_int = 527466; // 0xf6 PushI
	var_90_int = 28792; // 0xf7 PushI
	var_91_int = 28791; // 0xf8 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf9 TObjFunc
	var_92_int = 527468; // 0xfb PushI
	var_93_int = 28792; // 0xfc PushI
	var_94_int = 28793; // 0xfd PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_95_int = 28792; // 0x101 PushI
	var_96_bool = var_7_cvector == var_95_int; // 0x102 Eq
	if(var_96_bool == 0) goto Label_275; // 0x103 JumpB
	var_97_string = ""; // 0x104 PushV
	var_97_string = "Sorrow"; // 0x105 MovS
	func_149(var_8_bool, var_97_string); // 0x106 NEW_2
	var_98_int = 527467; // 0x108 PushI
	SetMessage(var_98_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_99_int = 527469; // 0x10d PushI
	var_100_int = 28796; // 0x10e PushI
	var_101_int = 28795; // 0x10f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_102_int = 28796; // 0x113 PushI
	var_103_bool = var_7_cvector == var_102_int; // 0x114 Eq
	if(var_103_bool == 0) goto Label_298; // 0x115 JumpB
	var_104_string = ""; // 0x116 PushV
	var_104_string = "Menace"; // 0x117 MovS
	func_149(var_8_bool, var_104_string); // 0x118 NEW_2
	var_105_int = 527470; // 0x11a PushI
	SetMessage(var_105_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_106_int = 527477; // 0x11f PushI
	var_107_int = 28804; // 0x120 PushI
	var_108_int = 28803; // 0x121 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x122 TObjFunc
	var_109_int = 527471; // 0x124 PushI
	var_110_int = 28798; // 0x125 PushI
	var_111_int = 28797; // 0x126 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_112_int = 28798; // 0x12a PushI
	var_113_bool = var_7_cvector == var_112_int; // 0x12b Eq
	if(var_113_bool == 0) goto Label_316; // 0x12c JumpB
	var_114_string = ""; // 0x12d PushV
	var_114_string = "Menace"; // 0x12e MovS
	func_149(var_8_bool, var_114_string); // 0x12f NEW_2
	var_115_int = 527472; // 0x131 PushI
	SetMessage(var_115_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_116_int = 527473; // 0x136 PushI
	var_117_int = 28800; // 0x137 PushI
	var_118_int = 28799; // 0x138 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_119_int = 28800; // 0x13c PushI
	var_120_bool = var_7_cvector == var_119_int; // 0x13d Eq
	if(var_120_bool == 0) goto Label_334; // 0x13e JumpB
	var_121_string = ""; // 0x13f PushV
	var_121_string = "Menace"; // 0x140 MovS
	func_149(var_8_bool, var_121_string); // 0x141 NEW_2
	var_122_int = 527474; // 0x143 PushI
	SetMessage(var_122_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_123_int = 527475; // 0x148 PushI
	var_124_int = 28802; // 0x149 PushI
	var_125_int = 28801; // 0x14a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_126_int = 28802; // 0x14e PushI
	var_127_bool = var_7_cvector == var_126_int; // 0x14f Eq
	if(var_127_bool == 0) goto Label_352; // 0x150 JumpB
	var_128_string = ""; // 0x151 PushV
	var_128_string = "Untrust"; // 0x152 MovS
	func_149(var_8_bool, var_128_string); // 0x153 NEW_2
	var_129_int = 527476; // 0x155 PushI
	SetMessage(var_129_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_130_int = 527491; // 0x15a PushI
	var_131_int = 28804; // 0x15b PushI
	var_132_int = 28818; // 0x15c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_133_int = 28804; // 0x160 PushI
	var_134_bool = var_7_cvector == var_133_int; // 0x161 Eq
	if(var_134_bool == 0) goto Label_375; // 0x162 JumpB
	var_135_string = ""; // 0x163 PushV
	var_135_string = "Menace"; // 0x164 MovS
	func_149(var_8_bool, var_135_string); // 0x165 NEW_2
	var_136_int = 527478; // 0x167 PushI
	SetMessage(var_136_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_137_int = 527479; // 0x16c PushI
	var_138_int = 28806; // 0x16d PushI
	var_139_int = 28805; // 0x16e PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x16f TObjFunc
	var_140_int = 527493; // 0x171 PushI
	var_141_int = 28806; // 0x172 PushI
	var_142_int = 28822; // 0x173 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_143_int = 28806; // 0x177 PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x178 Eq
	if(var_144_bool == 0) goto Label_398; // 0x179 JumpB
	var_145_string = ""; // 0x17a PushV
	var_145_string = "Sorrow"; // 0x17b MovS
	func_149(var_8_bool, var_145_string); // 0x17c NEW_2
	var_146_int = 527480; // 0x17e PushI
	SetMessage(var_146_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_147_int = 527481; // 0x183 PushI
	var_148_int = 28808; // 0x184 PushI
	var_149_int = 28807; // 0x185 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x186 TObjFunc
	var_150_int = 527494; // 0x188 PushI
	var_151_int = 28808; // 0x189 PushI
	var_152_int = 28824; // 0x18a PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_153_int = 28808; // 0x18e PushI
	var_154_bool = var_7_cvector == var_153_int; // 0x18f Eq
	if(var_154_bool == 0) goto Label_421; // 0x190 JumpB
	var_155_string = ""; // 0x191 PushV
	var_155_string = "Neutral"; // 0x192 MovS
	func_149(var_8_bool, var_155_string); // 0x193 NEW_2
	var_156_int = 527482; // 0x195 PushI
	SetMessage(var_156_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_157_int = 527483; // 0x19a PushI
	var_158_int = 28810; // 0x19b PushI
	var_159_int = 28809; // 0x19c PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x19d TObjFunc
	var_160_int = 527492; // 0x19f PushI
	var_161_int = 28810; // 0x1a0 PushI
	var_162_int = 28820; // 0x1a1 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1a2 TObjFunc
	return 0; // 0x1a4 Return
	
Label_421:
	var_163_int = 28810; // 0x1a5 PushI
	var_164_bool = var_7_cvector == var_163_int; // 0x1a6 Eq
	if(var_164_bool == 0) goto Label_444; // 0x1a7 JumpB
	var_165_string = ""; // 0x1a8 PushV
	var_165_string = "Neutral"; // 0x1a9 MovS
	func_149(var_8_bool, var_165_string); // 0x1aa NEW_2
	var_166_int = 527484; // 0x1ac PushI
	SetMessage(var_166_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_167_int = 527485; // 0x1b1 PushI
	var_168_int = 28813; // 0x1b2 PushI
	var_169_int = 28811; // 0x1b3 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1b4 TObjFunc
	var_170_int = 527486; // 0x1b6 PushI
	var_171_int = 28813; // 0x1b7 PushI
	var_172_int = 28812; // 0x1b8 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_173_int = 28813; // 0x1bc PushI
	var_174_bool = var_7_cvector == var_173_int; // 0x1bd Eq
	if(var_174_bool == 0) goto Label_462; // 0x1be JumpB
	var_175_string = ""; // 0x1bf PushV
	var_175_string = "Neutral"; // 0x1c0 MovS
	func_149(var_8_bool, var_175_string); // 0x1c1 NEW_2
	var_176_int = 527487; // 0x1c3 PushI
	SetMessage(var_176_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_177_int = 527488; // 0x1c8 PushI
	var_178_int = 28816; // 0x1c9 PushI
	var_179_int = 28815; // 0x1ca PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_180_int = 28816; // 0x1ce PushI
	var_181_bool = var_7_cvector == var_180_int; // 0x1cf Eq
	if(var_181_bool == 0) goto Label_485; // 0x1d0 JumpB
	var_182_string = ""; // 0x1d1 PushV
	var_182_string = "Smile"; // 0x1d2 MovS
	func_149(var_8_bool, var_182_string); // 0x1d3 NEW_2
	var_183_int = 527489; // 0x1d5 PushI
	SetMessage(var_183_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_184_int = 527490; // 0x1da PushI
	var_185_int = 28827; // 0x1db PushI
	var_186_int = 28817; // 0x1dc PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1dd TObjFunc
	var_187_int = 527495; // 0x1df PushI
	var_188_int = 28827; // 0x1e0 PushI
	var_189_int = 28826; // 0x1e1 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_190_int = 28827; // 0x1e5 PushI
	var_191_bool = var_7_cvector == var_190_int; // 0x1e6 Eq
	if(var_191_bool == 0) goto Label_503; // 0x1e7 JumpB
	var_192_string = ""; // 0x1e8 PushV
	var_192_string = "Neutral"; // 0x1e9 MovS
	func_149(var_8_bool, var_192_string); // 0x1ea NEW_2
	var_193_int = 527496; // 0x1ec PushI
	SetMessage(var_193_int); // 0x1ed TObjFunc
	ClearReplies(); // 0x1ef TObjFunc
	var_194_int = 527497; // 0x1f1 PushI
	var_195_int = 28829; // 0x1f2 PushI
	var_196_int = 28828; // 0x1f3 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1f4 TObjFunc
	return 0; // 0x1f6 Return
	
Label_503:
	var_197_int = 28829; // 0x1f7 PushI
	var_198_bool = var_7_cvector == var_197_int; // 0x1f8 Eq
	if(var_198_bool == 0) goto Label_521; // 0x1f9 JumpB
	var_199_string = ""; // 0x1fa PushV
	var_199_string = "Neutral"; // 0x1fb MovS
	func_149(var_8_bool, var_199_string); // 0x1fc NEW_2
	var_200_int = 527498; // 0x1fe PushI
	SetMessage(var_200_int); // 0x1ff TObjFunc
	ClearReplies(); // 0x201 TObjFunc
	var_201_int = 527499; // 0x203 PushI
	var_202_int = 28832; // 0x204 PushI
	var_203_int = 28831; // 0x205 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x206 TObjFunc
	return 0; // 0x208 Return
	
Label_521:
	var_204_int = 28832; // 0x209 PushI
	var_205_bool = var_7_cvector == var_204_int; // 0x20a Eq
	if(var_205_bool == 0) goto Label_544; // 0x20b JumpB
	var_206_string = ""; // 0x20c PushV
	var_206_string = "Neutral"; // 0x20d MovS
	func_149(var_8_bool, var_206_string); // 0x20e NEW_2
	var_207_int = 527500; // 0x210 PushI
	SetMessage(var_207_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_208_int = 527501; // 0x215 PushI
	var_209_int = -1; // 0x216 PushI
	var_210_int = 28833; // 0x217 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x218 TObjFunc
	var_211_int = 527502; // 0x21a PushI
	var_212_int = 28835; // 0x21b PushI
	var_213_int = 28834; // 0x21c PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x21d TObjFunc
	return 0; // 0x21f Return
	
Label_544:
	var_214_int = 28835; // 0x220 PushI
	var_215_bool = var_7_cvector == var_214_int; // 0x221 Eq
	if(var_215_bool == 0) goto Label_567; // 0x222 JumpB
	var_216_string = ""; // 0x223 PushV
	var_216_string = "Menace"; // 0x224 MovS
	func_149(var_8_bool, var_216_string); // 0x225 NEW_2
	var_217_int = 527503; // 0x227 PushI
	SetMessage(var_217_int); // 0x228 TObjFunc
	ClearReplies(); // 0x22a TObjFunc
	var_218_int = 527504; // 0x22c PushI
	var_219_int = -1; // 0x22d PushI
	var_220_int = 28836; // 0x22e PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x22f TObjFunc
	var_221_int = 527505; // 0x231 PushI
	var_222_int = -1; // 0x232 PushI
	var_223_int = 28837; // 0x233 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x234 TObjFunc
	return 0; // 0x236 Return
	
Label_567:
	var_3_string = 1; // 0x237 TMovB
	var_224_bool = 0; // 0x238 PushV
	func_1345(var_224_bool); // 0x239 NEW_2
	if(var_224_bool == 0) goto Label_575; // 0x23b JumpB
	lshStopAnimation(); // 0x23c Func
	goto Label_577; // 0x23e Jump
	
Label_577:
	return 0; // 0x241 Return
	
Label_575:
	StopAnimation(); // 0x23f Func
	
Label_579:
	return 0; // 0x243 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x250 PushV
	var_10_string = "cleanup"; // 0x251 PushS
	var_11_bool = var_7_string == var_10_string; // 0x252 Eq
	if(var_11_bool == 0) goto Label_607; // 0x253 JumpB
	var_1_object = 1; // 0x254 TMovB
	IsLoaded(var_9_bool); // 0x255 Func
	var_12_bool = var_9_bool == 0; // 0x257 Not
	if(var_12_bool == 0) goto Label_606; // 0x258 JumpB
	var_13_object = Obj(); // 0x259 PushV
	func_1191(var_13_object); // 0x25a NEW_2
	RemoveActor(var_13_object); // 0x25c Func
	
Label_606:
	goto Label_611; // 0x25e Jump
	
Label_611:
	return 2; // 0x263 Return
	
Label_607:
	var_16_string = "restore"; // 0x25f PushS
	var_17_bool = var_7_string == var_16_string; // 0x260 Eq
	if(var_17_bool == 0) goto Label_611; // 0x261 JumpB
	var_1_object = 0; // 0x262 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x264 PushT
	if(var_7_object == 0) goto Label_621; // 0x265 JumpB
	var_8_object = Obj(); // 0x266 PushV
	func_1191(var_8_object); // 0x267 NEW_2
	RemoveActor(var_8_object); // 0x269 Func
	Hold(); // 0x26b Func
	
Label_621:
	func_736(); // 0x26e NEW_2
	return 0; // 0x270 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_751(); // 0x272 NEW_2
	return 0; // 0x274 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2bb PushI
	var_9_bool = var_7_int == var_8_int; // 0x2bc Eq
	if(var_9_bool == 0) goto Label_735; // 0x2bd JumpB
	func_694(); // 0x2bf NEW_2
	var_11_bool = 0; // 0x2c1 PushV
	var_11_bool = 0; // 0x2c2 MovB
	var_12_bool = 0; // 0x2c3 PushV
	func_908(var_12_bool); // 0x2c4 NEW_2
	if(var_12_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_15_bool = 0; // 0x2c7 PushV
	func_663(var_15_bool); // 0x2c8 NEW_2
	if(var_15_bool == 0) goto Label_716; // 0x2ca JumpB
	var_11_bool = 1; // 0x2cb MovB
	
Label_716:
	if(var_11_bool == 0) goto Label_729; // 0x2cc JumpB
	var_32_bool = 0; // 0x2cd PushV
	func_643(var_32_bool); // 0x2ce NEW_2
	if(var_32_bool == 0) goto Label_728; // 0x2d0 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2d1 PushV
	var_53_object = Obj(); // 0x2d2 PushV
	func_1191(var_53_object); // 0x2d3 NEW_2
	var_52_object = var_53_object; // 0x2d4 Mov
	func_1058(var_52_object); // 0x2d6 NEW_2
	
Label_728:
	goto Label_735; // 0x2d8 Jump
	
Label_735:
	return 0; // 0x2df Return
	
Label_729:
	func_658(var_7_int); // 0x2da NEW_2
	func_685(); // 0x2dd NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2fd Push
	if(var_8_bool == 0) goto Label_771; // 0x2fe JumpB
	func_685(); // 0x300 NEW_2
	goto Label_775; // 0x302 Jump
	
Label_775:
	return 0; // 0x307 Return
	
Label_771:
	var_14_string = ""; // 0x303 PushV
	var_14_string = "Neutral"; // 0x304 MovS
	func_1138(var_14_string); // 0x305 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x308 PushV
	IsOverrideActive(var_9_bool); // 0x309 Func
	var_10_bool = var_9_bool == 0; // 0x30b Not
	if(var_10_bool == 0) goto Label_804; // 0x30c JumpB
	EventDisable(0); // 0x30d EventDisable
	func_876(); // 0x30f NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x311 PushV
	var_12_object = var_7_object; // 0x312 Mov
	func_899(var_12_object); // 0x313 NEW_2
	EventEnable(0); // 0x315 EventEnable
	var_25_object = Obj(); // 0x316 PushV
	var_25_object = var_7_object; // 0x317 Mov
	func_580(var_25_object); // 0x318 NEW_2
	var_262_string = ""; // 0x31a PushV
	var_262_string = "Neutral"; // 0x31b MovS
	func_1138(var_262_string); // 0x31c NEW_2
	func_694(); // 0x31f NEW_2
	func_685(); // 0x322 NEW_2
	
Label_804:
	return 2; // 0x324 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_629(var_6_bool); // 0x24d NEW_2
	return 0; // 0x24f Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_913(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1339(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1337(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1341(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1343(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1320(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1191(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1000(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_253_bool = var_36_bool == 0; // 0x3f Not
	if(var_253_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_254_object = Obj(); // 0x46 PushV
	var_254_object = var_27_object; // 0x47 Mov
	func_982(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1154(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x482 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x483 Func
	var_214_bool = var_211_bool; // 0x485 Push
	if(var_214_bool == 0) goto Label_1164; // 0x486 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x487 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x489 Func
	goto Label_1168; // 0x48b Jump
	
Label_1168:
	return 6; // 0x490 Return
	
Label_1164:
	var_215_string = "Can't find lsh animation : "; // 0x48c PushS
	var_216_int = var_215_string + var_204_string; // 0x48d Add
	Trace(var_216_int); // 0x48e Func
}


func_899(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x383 PushV
	GetPosition(var_14_cvector); // 0x384 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x386 PushV
	var_16_cvector = var_14_cvector; // 0x387 Mov
	func_889(var_15_bool, var_16_cvector); // 0x388 NEW_2
	var_11_bool = var_15_bool; // 0x389 Mov
	return 2; // 0x38b Return
}


func_643(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x283 PushV
	var_35_string = "player"; // 0x284 PushS
	FindActor(var_34_object, var_35_string); // 0x285 Func
	var_36_bool = var_34_object == 0; // 0x287 Not
	if(var_36_bool == 0) goto Label_651; // 0x288 JumpB
	var_32_bool = 0; // 0x289 MovB
	return 2; // 0x28a Return
	
Label_651:
	var_37_bool = 0; var_38_object = Obj(); // 0x28b PushV
	var_38_object = var_34_object; // 0x28c Mov
	func_899(var_38_object); // 0x28d NEW_2
	var_32_bool = var_37_bool; // 0x28e Mov
	return 2; // 0x290 Return
}


func_908(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x38c PushV
	IsLoaded(var_9_bool); // 0x38d Func
	var_7_bool = var_9_bool; // 0x38f Mov
	return 2; // 0x390 Return
}


func_1292(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x50c PushV
	var_31_object = Obj(); // 0x50d PushV
	func_1279(var_31_object); // 0x50e NEW_2
	var_28_object = var_31_object; // 0x50f Mov
	Find(var_24_int, var_29_object); // 0x511 ObjFunc
	var_36_bool = var_29_object == 0; // 0x513 Not
	if(var_36_bool == 0) goto Label_1307; // 0x514 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x515 PushS
	var_38_int = var_37_string + var_24_int; // 0x516 Add
	Trace(var_38_int); // 0x517 Func
	var_22_bool = 0; // 0x519 MovB
	return 6; // 0x51a Return
	
Label_1307:
	AddChild(var_23_object); // 0x51b ObjFunc
	var_39_int = 7; // 0x51d PushI
	SendWorldWndMessage(var_39_int); // 0x51e Func
	GetCategory(var_30_int); // 0x520 ObjFunc
	SetDiarySection(var_30_int); // 0x522 Func
	var_22_bool = 0; // 0x524 MovB
	return 6; // 0x525 Return
}


func_913(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x391 PushV
	GetPosition(var_50_cvector); // 0x392 ObjFunc
	GetEyesHeight(var_49_float); // 0x394 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x396 PushE
	var_58_float = var_58_float + var_49_float; // 0x397 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x398 PopE
	GetPosition(var_51_cvector); // 0x399 Func
	GetEyesHeight(var_49_float); // 0x39b Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x39d PushE
	var_59_float = var_59_float + var_49_float; // 0x39e Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x39f PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3a0 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3a1 PushE
	var_60_float = 0; // 0x3a2 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3a3 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3a4 Or
	var_62_float = sqrt(var_61_int); // 0x3a5 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x3a6 Div2
	var_53_cvector = -var_52_cvector; // 0x3a7 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x3a8 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3a9 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x3aa PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x3ab Xor2
	func_1197(var_64_cvector, var_65_cvector); // 0x3ac NEW_2
	var_72_int = 25; // 0x3ae PushI
	var_73_float = var_64_cvector * var_72_int; // 0x3af Mult
	var_74_int = var_63_float + var_73_float; // 0x3b0 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x3b1 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x3b2 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3b3 Add2
	IsOverrideActive(var_56_bool); // 0x3b4 Func
	var_76_bool = var_56_bool; // 0x3b6 Push
	if(var_76_bool == 0) goto Label_954; // 0x3b7 JumpB
	var_37_bool = 0; // 0x3b8 MovB
	return 18; // 0x3b9 Return
	
Label_954:
	StopWorld(); // 0x3ba Func
	var_77_bool = 1; // 0x3bc PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x3bd Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x3bf PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x3c0 PushE
	Rotate(var_78_float, var_79_float); // 0x3c1 Func
	var_80_bool = 0; // 0x3c3 PushV
	func_1345(var_80_bool); // 0x3c4 NEW_2
	if(var_80_bool == 0) goto Label_968; // 0x3c6 JumpB
	goto Label_976; // 0x3c7 Jump
	
Label_976:
	CameraWaitForPlayFinish(); // 0x3d0 Func
	ResumeWorld(); // 0x3d2 Func
	var_37_bool = 1; // 0x3d4 MovB
	return 18; // 0x3d5 Return
	
Label_968:
	var_81_string = "head"; // 0x3c8 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x3c9 Func
	var_82_bool = var_57_bool; // 0x3cb Push
	if(var_82_bool == 0) goto Label_976; // 0x3cc JumpB
	var_83_string = "head"; // 0x3cd PushS
	LookAsyncCamera(var_83_string); // 0x3ce Func
}


func_658(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x292 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x293 PushE
	RotateAsync(var_84_float, var_85_float); // 0x294 Func
	return 0; // 0x296 Return
}


func_1169(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x491 PushV
	var_136_bool = 0; // 0x492 PushV
	func_1345(var_136_bool); // 0x493 NEW_2
	if(var_136_bool == 0) goto Label_1182; // 0x495 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x496 Func
	var_137_bool = var_135_bool; // 0x498 Push
	if(var_137_bool == 0) goto Label_1182; // 0x499 JumpB
	lshPlaySpeech(var_133_string); // 0x49a Func
	var_132_bool = 1; // 0x49c MovB
	return 2; // 0x49d Return
	
Label_1182:
	var_132_bool = 0; // 0x49e MovB
	return 2; // 0x49f Return
}


func_149(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x96 PushV
	func_1345(var_201_bool); // 0x97 NEW_2
	var_202_bool = var_201_bool == 0; // 0x99 Not
	if(var_202_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_203_bool = var_200_string == var_2_object; // 0x9c Eq
	if(var_203_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_204_string = ""; var_205_bool = 0; // 0x9f PushV
	var_204_string = var_200_string; // 0xa0 Mov
	var_206_string = ""; // 0xa1 PushS
	var_207_bool = var_200_string == var_206_string; // 0xa2 Eq
	if(var_207_bool == 0) goto Label_166; // 0xa3 JumpB
	var_205_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_1154(var_204_string, var_205_bool); // 0xa7 NEW_2
	var_2_object = var_200_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_205_bool = 1; // 0xa6 MovB
}


func_663(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x297 PushV
	var_20_string = "player"; // 0x298 PushS
	FindActor(var_18_object, var_20_string); // 0x299 Func
	var_21_bool = var_18_object == 0; // 0x29b Not
	if(var_21_bool == 0) goto Label_671; // 0x29c JumpB
	var_15_bool = 0; // 0x29d MovB
	return 4; // 0x29e Return
	
Label_671:
	var_22_float = 0; var_23_object = Obj(); // 0x29f PushV
	var_23_object = var_18_object; // 0x2a0 Mov
	func_881(var_23_object); // 0x2a1 NEW_2
	var_30_float = 90000.0; // 0x2a3 PushF
	var_31_bool = var_22_float > var_30_float; // 0x2a4 GT
	if(var_31_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_15_bool = 0; // 0x2a6 MovB
	return 4; // 0x2a7 Return
	
Label_680:
	CanSee(var_19_bool, var_18_object); // 0x2a8 Func
	var_15_bool = var_19_bool; // 0x2aa Mov
	return 4; // 0x2ab Return
}


func_1184()
{
	var_10_bool = 0; // 0x4a0 PushV
	func_1345(var_10_bool); // 0x4a1 NEW_2
	if(var_10_bool == 0) goto Label_1190; // 0x4a3 JumpB
	lshStopSpeech(); // 0x4a4 Func
	
Label_1190:
	return 0; // 0x4a6 Return
}


func_1058(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x422 PushV
	var_116_string = "c"; // 0x423 MovS
	var_117_int = 0; // 0x424 MovI
	
Label_1061:
	var_121_int = 1; // 0x425 PushI
	if(var_121_int == 0) goto Label_1074; // 0x426 JumpB
	var_122_int = 1; // 0x427 PushI
	var_123_int = var_117_int + var_122_int; // 0x428 Add
	var_124_int = var_116_string + var_123_int; // 0x429 Add
	HasProperty(var_124_int, var_118_bool); // 0x42a ObjFunc
	var_125_bool = var_118_bool == 0; // 0x42c Not
	if(var_125_bool == 0) goto Label_1071; // 0x42d JumpB
	goto Label_1074; // 0x42e Jump
	
Label_1074:
	var_126_bool = var_117_int == 0; // 0x432 Not
	if(var_126_bool == 0) goto Label_1078; // 0x433 JumpB
	var_109_bool = 0; // 0x434 MovB
	return 10; // 0x435 Return
	
Label_1078:
	var_119_int = 0; // 0x436 MovI
	var_127_int = 1; // 0x437 PushI
	var_128_bool = var_117_int > var_127_int; // 0x438 GT
	if(var_128_bool == 0) goto Label_1084; // 0x439 JumpB
	irand(var_119_int, var_117_int); // 0x43a Func
	
Label_1084:
	var_129_int = 1; // 0x43c PushI
	var_130_int = var_119_int + var_129_int; // 0x43d Add
	var_131_int = var_116_string + var_130_int; // 0x43e Add
	GetProperty(var_131_int, var_120_string); // 0x43f ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x441 PushV
	var_133_string = var_120_string; // 0x442 Mov
	func_1169(var_132_bool, var_133_string); // 0x443 NEW_2
	var_109_bool = var_132_bool; // 0x444 Mov
	return 10; // 0x446 Return
	
Label_1071:
	var_138_int = 1; // 0x42f PushI
	var_117_int = var_117_int + var_138_int; // 0x430 Add2
	goto Label_1061; // 0x431 Jump
}


func_805()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x325 PushV
	WaitForAnimEnd(); // 0x326 Func
	var_23_bool = 0; // 0x328 PushV
	func_908(var_23_bool); // 0x329 NEW_2
	var_24_bool = var_23_bool == 0; // 0x32b Not
	if(var_24_bool == 0) goto Label_814; // 0x32c JumpB
	return 12; // 0x32d Return
	
Label_814:
	var_25_int = 0; // 0x32e PushV
	func_1228(var_25_int); // 0x32f NEW_2
	var_17_int = var_25_int; // 0x330 Mov
	var_18_int = 0; // 0x332 MovI
	
Label_819:
	var_38_bool = 0; // 0x333 PushV
	var_38_bool = 0; // 0x334 MovB
	var_39_int = 5; // 0x335 PushI
	var_40_bool = var_18_int < var_39_int; // 0x336 LT
	if(var_40_bool == 0) goto Label_829; // 0x337 JumpB
	var_41_bool = 0; // 0x338 PushV
	func_908(var_41_bool); // 0x339 NEW_2
	if(var_41_bool == 0) goto Label_829; // 0x33b JumpB
	var_38_bool = 1; // 0x33c MovB
	
Label_829:
	if(var_38_bool == 0) goto Label_871; // 0x33d JumpB
	var_42_bool = var_17_int == 0; // 0x33e Not
	if(var_42_bool == 0) goto Label_839; // 0x33f JumpB
	var_43_int = 3; // 0x340 PushI
	Sleep(var_43_int, var_19_bool); // 0x341 Func
	var_44_bool = var_19_bool == 0; // 0x343 Not
	if(var_44_bool == 0) goto Label_838; // 0x344 JumpB
	goto Label_871; // 0x345 Jump
	
Label_871:
	ResetAAS(); // 0x367 Func
	return 12; // 0x369 Return
	
Label_838:
	goto Label_860; // 0x346 Jump
	
Label_860:
	var_45_bool = 0; // 0x35c PushV
	func_874(var_45_bool); // 0x35d NEW_2
	var_46_bool = var_45_bool == 0; // 0x35f Not
	if(var_46_bool == 0) goto Label_866; // 0x360 JumpB
	goto Label_871; // 0x361 Jump
	
Label_866:
	ResetAAS(); // 0x362 Func
	var_47_int = 1; // 0x364 PushI
	var_18_int = var_18_int + var_47_int; // 0x365 Add2
	goto Label_819; // 0x366 Jump
	
Label_839:
	irand(var_20_int, var_17_int); // 0x347 Func
	var_48_int = 5; // 0x349 PushI
	irand(var_21_int, var_48_int); // 0x34a Func
	var_49_int = 0; // 0x34c PushI
	var_50_bool = var_21_int != var_49_int; // 0x34d Neq
	if(var_50_bool == 0) goto Label_848; // 0x34e JumpB
	var_20_int = 0; // 0x34f MovI
	
Label_848:
	var_51_string = "all"; // 0x350 PushS
	var_52_string = ""; var_53_int = 0; // 0x351 PushV
	var_53_int = var_20_int; // 0x352 Mov
	func_1221(var_52_string, var_53_int); // 0x353 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x355 Func
	WaitForAnimEnd(var_22_bool); // 0x357 Func
	var_54_bool = var_22_bool == 0; // 0x359 Not
	if(var_54_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_871; // 0x35b Jump
}


func_1191(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x4a7 PushV
	self(var_102_object); // 0x4a8 Func
	var_100_object = var_102_object; // 0x4aa Mov
	return 2; // 0x4ab Return
}


func_1320(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x528 PushV
	var_92_string = "branch"; // 0x529 PushS
	GetVariable(var_92_string, var_91_int); // 0x52a Func
	var_93_int = 0; // 0x52c PushI
	var_94_bool = var_91_int == var_93_int; // 0x52d Eq
	if(var_94_bool == 0) goto Label_1330; // 0x52e JumpB
	var_89_int = 1; // 0x52f MovI
	return 2; // 0x530 Return
	
Label_1330:
	var_95_int = 1; // 0x532 PushI
	var_96_bool = var_91_int == var_95_int; // 0x533 Eq
	if(var_96_bool == 0) goto Label_1335; // 0x534 JumpB
	var_89_int = 2; // 0x535 MovI
	return 2; // 0x536 Return
	
Label_1335:
	var_89_int = 3; // 0x537 MovI
	return 2; // 0x538 Return
}


func_685()
{
	var_264_float = 0; var_265_float = 0; // 0x2ad PushV
	var_266_int = 8; // 0x2ae PushI
	var_267_int = 16; // 0x2af PushI
	rand(var_265_float, var_266_int, var_267_int); // 0x2b0 Func
	var_268_int = 10; // 0x2b2 PushI
	SetTimer(var_268_int, var_265_float); // 0x2b3 Func
	return 2; // 0x2b5 Return
}


func_1197(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x4ad PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x4ae Or
	var_68_float = sqrt(var_69_int); // 0x4af Sqrt2
	var_70_float = 0.0; // 0x4b0 PushF
	var_71_bool = var_68_float < var_70_float; // 0x4b1 LT
	if(var_71_bool == 0) goto Label_1205; // 0x4b2 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4b3 MovV
	return 2; // 0x4b4 Return
	
Label_1205:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4b5 Div2
	return 2; // 0x4b6 Return
}


func_694()
{
	var_263_int = 10; // 0x2b6 PushI
	KillTimer(var_263_int); // 0x2b7 Func
	return 0; // 0x2b9 Return
}


func_1207(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x4b7 PushV
	GetVariable(var_221_string, var_223_int); // 0x4b8 Func
	var_220_int = var_223_int; // 0x4ba Mov
	return 2; // 0x4bb Return
}


func_1337(var_86_int)
{
	var_86_int = 515573; // 0x539 MovI
	return 0; // 0x53a Return
}


func_1339(var_85_int)
{
	var_85_int = 504032; // 0x53b MovI
	return 0; // 0x53c Return
}


func_1212(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x4bc PushV
	GetGameTime(var_155_float); // 0x4bd Func
	var_156_int = 1; // 0x4bf PushI
	var_157_int = 0; // 0x4c0 PushV
	var_158_int = 24; // 0x4c1 PushI
	var_157_int = var_155_float / var_155_float; // 0x4c2 Div2
	var_153_int = var_156_int + var_157_int; // 0x4c3 Add2
	return 2; // 0x4c4 Return
}


func_1341(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png"; // 0x53d MovS
	return 0; // 0x53e Return
}


func_1343(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png"; // 0x53f MovS
	return 0; // 0x540 Return
}


func_1345(var_80_bool)
{
	var_80_bool = 1; // 0x541 MovB
	return 0; // 0x542 Return
}


func_580(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x245 PushV
	var_27_object = var_25_object; // 0x246 Mov
	TaskCall(0); // 0x247 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x248 NEW_2
	TaskReturn(); // 0x249 TaskReturn
	return 0; // 0x24b Return
}


func_1221(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4c5 PushV
	var_34_string = "idle"; // 0x4c6 MovS
	var_35_int = var_32_int; // 0x4c7 Push
	if(var_35_int == 0) goto Label_1226; // 0x4c8 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4c9 Add2
	
Label_1226:
	var_31_string = var_34_string; // 0x4ca Mov
	return 2; // 0x4cb Return
}


func_1095(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x447 PushV
	var_152_string = "d"; // 0x448 PushS
	var_153_int = 0; // 0x449 PushV
	func_1212(var_153_int); // 0x44a NEW_2
	var_159_int = var_152_string + var_153_int; // 0x44c Add
	var_160_string = "m"; // 0x44d PushS
	var_147_string = var_159_int + var_160_string; // 0x44e Add2
	var_148_int = 0; // 0x44f MovI
	
Label_1104:
	var_161_int = 1; // 0x450 PushI
	if(var_161_int == 0) goto Label_1117; // 0x451 JumpB
	var_162_int = 1; // 0x452 PushI
	var_163_int = var_148_int + var_162_int; // 0x453 Add
	var_164_int = var_147_string + var_163_int; // 0x454 Add
	HasProperty(var_164_int, var_149_bool); // 0x455 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x457 Not
	if(var_165_bool == 0) goto Label_1114; // 0x458 JumpB
	goto Label_1117; // 0x459 Jump
	
Label_1117:
	var_166_bool = var_148_int == 0; // 0x45d Not
	if(var_166_bool == 0) goto Label_1121; // 0x45e JumpB
	var_140_bool = 0; // 0x45f MovB
	return 10; // 0x460 Return
	
Label_1121:
	var_150_int = 0; // 0x461 MovI
	var_167_int = 1; // 0x462 PushI
	var_168_bool = var_148_int > var_167_int; // 0x463 GT
	if(var_168_bool == 0) goto Label_1127; // 0x464 JumpB
	irand(var_150_int, var_148_int); // 0x465 Func
	
Label_1127:
	var_169_int = 1; // 0x467 PushI
	var_170_int = var_150_int + var_169_int; // 0x468 Add
	var_171_int = var_147_string + var_170_int; // 0x469 Add
	GetProperty(var_171_int, var_151_string); // 0x46a ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x46c PushV
	var_173_string = var_151_string; // 0x46d Mov
	func_1169(var_172_bool, var_173_string); // 0x46e NEW_2
	var_140_bool = var_172_bool; // 0x46f Mov
	return 10; // 0x471 Return
	
Label_1114:
	var_174_int = 1; // 0x45a PushI
	var_148_int = var_148_int + var_174_int; // 0x45b Add2
	goto Label_1104; // 0x45c Jump
}


func_1228(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4cc PushV
	var_28_int = 0; // 0x4cd MovI
	
Label_1230:
	var_30_string = "all"; // 0x4ce PushS
	var_31_string = ""; var_32_int = 0; // 0x4cf PushV
	var_32_int = var_28_int; // 0x4d0 Mov
	func_1221(var_31_string, var_32_int); // 0x4d1 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4d3 Func
	var_36_bool = var_29_bool == 0; // 0x4d5 Not
	if(var_36_bool == 0) goto Label_1240; // 0x4d6 JumpB
	goto Label_1243; // 0x4d7 Jump
	
Label_1243:
	var_25_int = var_28_int; // 0x4db Mov
	return 4; // 0x4dc Return
	
Label_1240:
	var_37_int = 1; // 0x4d8 PushI
	var_28_int = var_28_int + var_37_int; // 0x4d9 Add2
	goto Label_1230; // 0x4da Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_119; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_149(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 527198; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1254(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 527199; // 0x65 PushI
	var_227_int = 28789; // 0x66 PushI
	var_228_int = 28507; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_int = 527202; // 0x6a PushI
	var_230_int = -1; // 0x6b PushI
	var_231_int = 28510; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 527506; // 0x6f PushI
	var_233_int = -1; // 0x70 PushI
	var_234_int = 28838; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_235_bool = 0; // 0x77 PushV
	func_1345(var_235_bool); // 0x78 NEW_2
	if(var_235_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_236_string = var_3_string; // 0x7d PushT
	if(var_236_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_237_string = ""; // 0x80 PushV
	var_237_string = var_2_object; // 0x81 MovT
	func_1138(var_237_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_248_string = "all"; // 0x86 PushS
	var_249_string = "idle"; // 0x87 PushS
	PlayAnimation(var_248_string, var_249_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_250_string = var_3_string; // 0x8c PushT
	if(var_250_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_251_string = "all"; // 0x8f PushS
	var_252_string = "idle"; // 0x90 PushS
	PlayAnimation(var_251_string, var_252_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_982()
{
	var_255_bool = 0; var_256_bool = 0; // 0x3d6 PushV
	var_257_bool = 1; // 0x3d7 PushB
	CameraSwitchToNormal(var_257_bool); // 0x3d8 Func
	var_258_bool = 0; // 0x3da PushV
	func_1345(var_258_bool); // 0x3db NEW_2
	if(var_258_bool == 0) goto Label_991; // 0x3dd JumpB
	goto Label_999; // 0x3de Jump
	
Label_999:
	return 2; // 0x3e7 Return
	
Label_991:
	var_259_string = "head"; // 0x3df PushS
	HasAnimationTrack(var_256_bool, var_259_string); // 0x3e0 Func
	var_260_bool = var_256_bool; // 0x3e2 Push
	if(var_260_bool == 0) goto Label_999; // 0x3e3 JumpB
	var_261_string = "head"; // 0x3e4 PushS
	UnlookAsync(var_261_string); // 0x3e5 Func
}


func_1245()
{
	var_15_string = "k11q01"; // 0x4de PushS
	var_16_int = 4; // 0x4df PushI
	SetVariable(var_15_string, var_16_int); // 0x4e0 Func
	func_1266(); // 0x4e3 NEW_2
	return 0; // 0x4e5 Return
}


func_736()
{
	func_876(); // 0x2e1 NEW_2
	func_694(); // 0x2e4 NEW_2
	lshStopSpeech(); // 0x2e6 Func
	lshStopAnimation(); // 0x2e8 Func
	StopAsync(); // 0x2ea Func
	Hold(); // 0x2ec Func
	return 0; // 0x2ee Return
}


func_1254(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x4e7 PushV
	var_221_string = "k11q01"; // 0x4e8 MovS
	func_1207(var_220_int, var_221_string); // 0x4e9 NEW_2
	var_224_int = 3; // 0x4eb PushI
	var_225_bool = var_220_int == var_224_int; // 0x4ec Eq
	if(var_225_bool == 0) goto Label_1264; // 0x4ed JumpB
	var_218_bool = 1; // 0x4ee MovB
	return 0; // 0x4ef Return
	
Label_1264:
	var_218_bool = 0; // 0x4f0 MovB
	return 0; // 0x4f1 Return
}


func_1000(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x3e8 PushV
	var_107_string = "voice_common"; // 0x3e9 PushS
	GetVariable(var_107_string, var_105_int); // 0x3ea Func
	var_108_int = var_105_int; // 0x3ec Push
	if(var_108_int == 0) goto Label_1038; // 0x3ed JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x3ee PushV
	var_110_object = var_99_object; // 0x3ef Mov
	func_1058(var_110_object); // 0x3f0 NEW_2
	var_139_bool = var_109_bool == 0; // 0x3f2 Not
	if(var_139_bool == 0) goto Label_1020; // 0x3f3 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x3f4 PushV
	var_141_object = var_99_object; // 0x3f5 Mov
	func_1095(var_141_object); // 0x3f6 NEW_2
	var_175_bool = var_140_bool == 0; // 0x3f8 Not
	if(var_175_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_98_bool = 0; // 0x3fa MovB
	return 4; // 0x3fb Return
	
Label_1020:
	var_176_int = 2; // 0x3fc PushI
	irand(var_106_int, var_176_int); // 0x3fd Func
	var_177_int = var_106_int; // 0x3ff Push
	if(var_177_int == 0) goto Label_1033; // 0x400 JumpB
	var_178_string = "voice_common"; // 0x401 PushS
	var_179_int = 1; // 0x402 PushI
	var_180_int = var_105_int + var_179_int; // 0x403 Add
	var_181_int = 3; // 0x404 PushI
	var_182_int = var_180_int / var_181_int; // 0x405 Mod
	SetVariable(var_178_string, var_182_int); // 0x406 Func
	goto Label_1037; // 0x408 Jump
	
Label_1037:
	goto Label_1056; // 0x40d Jump
	
Label_1056:
	var_98_bool = 1; // 0x420 MovB
	return 4; // 0x421 Return
	
Label_1033:
	var_183_string = "voice_common"; // 0x409 PushS
	var_184_int = 0; // 0x40a PushI
	SetVariable(var_183_string, var_184_int); // 0x40b Func
	
Label_1038:
	var_185_bool = 0; var_186_object = Obj(); // 0x40e PushV
	var_186_object = var_99_object; // 0x40f Mov
	func_1095(var_186_object); // 0x410 NEW_2
	var_187_bool = var_185_bool == 0; // 0x412 Not
	if(var_187_bool == 0) goto Label_1052; // 0x413 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x414 PushV
	var_189_object = var_99_object; // 0x415 Mov
	func_1058(var_189_object); // 0x416 NEW_2
	var_190_bool = var_188_bool == 0; // 0x418 Not
	if(var_190_bool == 0) goto Label_1052; // 0x419 JumpB
	var_98_bool = 0; // 0x41a MovB
	return 4; // 0x41b Return
	
Label_1052:
	var_191_string = "voice_common"; // 0x41c PushS
	var_192_int = 1; // 0x41d PushI
	SetVariable(var_191_string, var_192_int); // 0x41e Func
}


func_874(var_45_bool)
{
	var_45_bool = 1; // 0x36a MovB
	return 0; // 0x36b Return
}


func_876()
{
	StopAnimation(); // 0x36c Func
	StopGroup0(); // 0x36e Func
	return 0; // 0x370 Return
}


func_751()
{
	StopGroup0(); // 0x2ef Func
	func_694(); // 0x2f2 NEW_2
	var_8_string = ""; // 0x2f4 PushV
	var_8_string = "Neutral"; // 0x2f5 MovS
	func_1138(var_8_string); // 0x2f6 NEW_2
	func_685(); // 0x2f9 NEW_2
	return 0; // 0x2fb Return
}


func_881(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x371 PushV
	GetPosition(var_27_cvector); // 0x372 Func
	GetPosition(var_28_cvector); // 0x374 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x376 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x377 Or2
	return 6; // 0x378 Return
}


func_1138(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x472 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x473 Func
	var_244_bool = var_241_bool; // 0x475 Push
	if(var_244_bool == 0) goto Label_1149; // 0x476 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x477 Func
	var_245_bool = 0; // 0x479 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x47a Func
	goto Label_1153; // 0x47c Jump
	
Label_1153:
	return 6; // 0x481 Return
	
Label_1149:
	var_246_string = "Can't find lsh animation : "; // 0x47d PushS
	var_247_int = var_246_string + var_237_string; // 0x47e Add
	Trace(var_247_int); // 0x47f Func
}


func_1266()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4f2 PushV
	var_19_int = 487; // 0x4f3 PushI
	var_20_int = 1; // 0x4f4 PushI
	var_21_int = 528054; // 0x4f5 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x4f6 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x4f8 PushV
	var_23_object = var_18_object; // 0x4f9 Mov
	var_24_int = 480; // 0x4fa MovI
	func_1292(var_22_bool, var_23_object, var_24_int); // 0x4fb NEW_2
	return 2; // 0x4fd Return
}


func_629(var_0_object)
{
	var_7_bool = 0; // 0x275 PushV
	func_908(var_7_bool); // 0x276 NEW_2
	var_10_bool = var_7_bool == 0; // 0x278 Not
	if(var_10_bool == 0) goto Label_636; // 0x279 JumpB
	Hold(); // 0x27a Func
	
Label_636:
	GetDirection(var_0_object); // 0x27c Func
	
Label_638:
	func_805(); // 0x27f NEW_2
	goto Label_638; // 0x281 Jump
}


func_889(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x379 PushV
	GetPosition(var_20_cvector); // 0x37a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x37c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x37d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x37e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x37f Func
	var_15_bool = var_22_bool; // 0x381 Mov
	return 6; // 0x382 Return
}


func_1279(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4ff PushV
	GetDiaryRoot(var_33_object); // 0x500 Func
	var_34_bool = var_33_object == 0; // 0x502 Not
	if(var_34_bool == 0) goto Label_1289; // 0x503 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x504 PushS
	Trace(var_35_string); // 0x505 Func
	var_31_object = 0; // 0x507 MovB
	return 2; // 0x508 Return
	
Label_1289:
	var_31_object = var_33_object; // 0x509 Mov
	return 2; // 0x50a Return
}


