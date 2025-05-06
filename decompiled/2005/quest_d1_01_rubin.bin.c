task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_599; // 0xbc JumpB
	func_1202(); // 0xbe NEW_2
	var_11_int = 10088; // 0xc0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_200; // 0xc2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc3 PushV
	var_13_object = var_1_object; // 0xc4 MovT
	var_14_object = var_0_object; // 0xc5 MovT
	func_1263(); // 0xc6 NEW_2
	
Label_200:
	var_40_int = 34358; // 0xc8 PushI
	var_41_bool = var_8_bool == var_40_int; // 0xc9 Eq
	if(var_41_bool == 0) goto Label_208; // 0xca JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xcb PushV
	var_42_object = var_1_object; // 0xcc MovT
	var_43_object = var_0_object; // 0xcd MovT
	func_1263(); // 0xce NEW_2
	
Label_208:
	var_44_int = 10081; // 0xd0 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xd1 Eq
	if(var_45_bool == 0) goto Label_216; // 0xd2 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xd3 PushV
	var_46_object = var_1_object; // 0xd4 MovT
	var_47_object = var_0_object; // 0xd5 MovT
	func_1263(); // 0xd6 NEW_2
	
Label_216:
	var_48_int = 10054; // 0xd8 PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xd9 Eq
	if(var_49_bool == 0) goto Label_264; // 0xda JumpB
	var_50_bool = 0; var_51_object = Obj(); // 0xdb PushV
	var_51_object = var_1_object; // 0xdc MovT
	func_1272(var_51_object); // 0xdd NEW_2
	if(var_50_bool == 0) goto Label_244; // 0xdf JumpB
	var_58_string = ""; // 0xe0 PushV
	var_58_string = "Neutral"; // 0xe1 MovS
	func_164(var_8_bool, var_58_string); // 0xe2 NEW_2
	var_75_int = 509170; // 0xe4 PushI
	SetMessage(var_75_int); // 0xe5 TObjFunc
	ClearReplies(); // 0xe7 TObjFunc
	var_76_int = 509175; // 0xe9 PushI
	var_77_int = 10062; // 0xea PushI
	var_78_int = 10061; // 0xeb PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xec TObjFunc
	var_79_int = 509187; // 0xee PushI
	var_80_int = 10077; // 0xef PushI
	var_81_int = 10076; // 0xf0 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_82_string = ""; // 0xf4 PushV
	var_82_string = "Warning"; // 0xf5 MovS
	func_164(var_8_bool, var_82_string); // 0xf6 NEW_2
	var_83_int = 531961; // 0xf8 PushI
	SetMessage(var_83_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_84_int = 532856; // 0xfd PushI
	var_85_int = -1; // 0xfe PushI
	var_86_int = 34341; // 0xff PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x100 TObjFunc
	var_87_int = 531962; // 0x102 PushI
	var_88_int = -1; // 0x103 PushI
	var_89_int = 33366; // 0x104 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_90_int = 10077; // 0x108 PushI
	var_91_bool = var_7_cvector == var_90_int; // 0x109 Eq
	if(var_91_bool == 0) goto Label_287; // 0x10a JumpB
	var_92_string = ""; // 0x10b PushV
	var_92_string = "Warning"; // 0x10c MovS
	func_164(var_8_bool, var_92_string); // 0x10d NEW_2
	var_93_int = 509188; // 0x10f PushI
	SetMessage(var_93_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_94_int = 509190; // 0x114 PushI
	var_95_int = 10080; // 0x115 PushI
	var_96_int = 10079; // 0x116 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x117 TObjFunc
	var_97_int = 509189; // 0x119 PushI
	var_98_int = -1; // 0x11a PushI
	var_99_int = 10078; // 0x11b PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_100_int = 10080; // 0x11f PushI
	var_101_bool = var_7_cvector == var_100_int; // 0x120 Eq
	if(var_101_bool == 0) goto Label_310; // 0x121 JumpB
	var_102_string = ""; // 0x122 PushV
	var_102_string = "Warning"; // 0x123 MovS
	func_164(var_8_bool, var_102_string); // 0x124 NEW_2
	var_103_int = 509191; // 0x126 PushI
	SetMessage(var_103_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_104_int = 509193; // 0x12b PushI
	var_105_int = 10083; // 0x12c PushI
	var_106_int = 10082; // 0x12d PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x12e TObjFunc
	var_107_int = 509192; // 0x130 PushI
	var_108_int = -1; // 0x131 PushI
	var_109_int = 10081; // 0x132 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_110_int = 10083; // 0x136 PushI
	var_111_bool = var_7_cvector == var_110_int; // 0x137 Eq
	if(var_111_bool == 0) goto Label_333; // 0x138 JumpB
	var_112_string = ""; // 0x139 PushV
	var_112_string = "Warning"; // 0x13a MovS
	func_164(var_8_bool, var_112_string); // 0x13b NEW_2
	var_113_int = 509194; // 0x13d PushI
	SetMessage(var_113_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_114_int = 509195; // 0x142 PushI
	var_115_int = 10085; // 0x143 PushI
	var_116_int = 10084; // 0x144 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x145 TObjFunc
	var_117_int = 509202; // 0x147 PushI
	var_118_int = 10085; // 0x148 PushI
	var_119_int = 10093; // 0x149 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_120_int = 10085; // 0x14d PushI
	var_121_bool = var_7_cvector == var_120_int; // 0x14e Eq
	if(var_121_bool == 0) goto Label_361; // 0x14f JumpB
	var_122_string = ""; // 0x150 PushV
	var_122_string = "Warning"; // 0x151 MovS
	func_164(var_8_bool, var_122_string); // 0x152 NEW_2
	var_123_int = 509196; // 0x154 PushI
	SetMessage(var_123_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_124_int = 509197; // 0x159 PushI
	var_125_int = 10087; // 0x15a PushI
	var_126_int = 10086; // 0x15b PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x15c TObjFunc
	var_127_int = 509200; // 0x15e PushI
	var_128_int = 34347; // 0x15f PushI
	var_129_int = 10089; // 0x160 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x161 TObjFunc
	var_130_int = 509201; // 0x163 PushI
	var_131_int = 34339; // 0x164 PushI
	var_132_int = 10091; // 0x165 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_133_int = 34339; // 0x169 PushI
	var_134_bool = var_7_cvector == var_133_int; // 0x16a Eq
	if(var_134_bool == 0) goto Label_379; // 0x16b JumpB
	var_135_string = ""; // 0x16c PushV
	var_135_string = "Rage"; // 0x16d MovS
	func_164(var_8_bool, var_135_string); // 0x16e NEW_2
	var_136_int = 532854; // 0x170 PushI
	SetMessage(var_136_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_137_int = 532855; // 0x175 PushI
	var_138_int = 10087; // 0x176 PushI
	var_139_int = 34340; // 0x177 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_140_int = 34347; // 0x17b PushI
	var_141_bool = var_7_cvector == var_140_int; // 0x17c Eq
	if(var_141_bool == 0) goto Label_402; // 0x17d JumpB
	var_142_string = ""; // 0x17e PushV
	var_142_string = "Confusion"; // 0x17f MovS
	func_164(var_8_bool, var_142_string); // 0x180 NEW_2
	var_143_int = 532861; // 0x182 PushI
	SetMessage(var_143_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_144_int = 532862; // 0x187 PushI
	var_145_int = 34349; // 0x188 PushI
	var_146_int = 34348; // 0x189 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x18a TObjFunc
	var_147_int = 532865; // 0x18c PushI
	var_148_int = 34352; // 0x18d PushI
	var_149_int = 34351; // 0x18e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_150_int = 34352; // 0x192 PushI
	var_151_bool = var_7_cvector == var_150_int; // 0x193 Eq
	if(var_151_bool == 0) goto Label_420; // 0x194 JumpB
	var_152_string = ""; // 0x195 PushV
	var_152_string = "Confusion"; // 0x196 MovS
	func_164(var_8_bool, var_152_string); // 0x197 NEW_2
	var_153_int = 532866; // 0x199 PushI
	SetMessage(var_153_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_154_int = 532867; // 0x19e PushI
	var_155_int = 34354; // 0x19f PushI
	var_156_int = 34353; // 0x1a0 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_157_int = 34349; // 0x1a4 PushI
	var_158_bool = var_7_cvector == var_157_int; // 0x1a5 Eq
	if(var_158_bool == 0) goto Label_438; // 0x1a6 JumpB
	var_159_string = ""; // 0x1a7 PushV
	var_159_string = "Warning"; // 0x1a8 MovS
	func_164(var_8_bool, var_159_string); // 0x1a9 NEW_2
	var_160_int = 532863; // 0x1ab PushI
	SetMessage(var_160_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_161_int = 532864; // 0x1b0 PushI
	var_162_int = 34354; // 0x1b1 PushI
	var_163_int = 34350; // 0x1b2 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_164_int = 34354; // 0x1b6 PushI
	var_165_bool = var_7_cvector == var_164_int; // 0x1b7 Eq
	if(var_165_bool == 0) goto Label_456; // 0x1b8 JumpB
	var_166_string = ""; // 0x1b9 PushV
	var_166_string = "Warning"; // 0x1ba MovS
	func_164(var_8_bool, var_166_string); // 0x1bb NEW_2
	var_167_int = 532868; // 0x1bd PushI
	SetMessage(var_167_int); // 0x1be TObjFunc
	ClearReplies(); // 0x1c0 TObjFunc
	var_168_int = 532869; // 0x1c2 PushI
	var_169_int = 10087; // 0x1c3 PushI
	var_170_int = 34356; // 0x1c4 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_171_int = 10087; // 0x1c8 PushI
	var_172_bool = var_7_cvector == var_171_int; // 0x1c9 Eq
	if(var_172_bool == 0) goto Label_479; // 0x1ca JumpB
	var_173_string = ""; // 0x1cb PushV
	var_173_string = "Rage"; // 0x1cc MovS
	func_164(var_8_bool, var_173_string); // 0x1cd NEW_2
	var_174_int = 509198; // 0x1cf PushI
	SetMessage(var_174_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_175_int = 509199; // 0x1d4 PushI
	var_176_int = -1; // 0x1d5 PushI
	var_177_int = 10088; // 0x1d6 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1d7 TObjFunc
	var_178_int = 532870; // 0x1d9 PushI
	var_179_int = -1; // 0x1da PushI
	var_180_int = 34358; // 0x1db PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_181_int = 10062; // 0x1df PushI
	var_182_bool = var_7_cvector == var_181_int; // 0x1e0 Eq
	if(var_182_bool == 0) goto Label_497; // 0x1e1 JumpB
	var_183_string = ""; // 0x1e2 PushV
	var_183_string = "Neutral"; // 0x1e3 MovS
	func_164(var_8_bool, var_183_string); // 0x1e4 NEW_2
	var_184_int = 509176; // 0x1e6 PushI
	SetMessage(var_184_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_185_int = 509177; // 0x1eb PushI
	var_186_int = 10064; // 0x1ec PushI
	var_187_int = 10063; // 0x1ed PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_188_int = 10064; // 0x1f1 PushI
	var_189_bool = var_7_cvector == var_188_int; // 0x1f2 Eq
	if(var_189_bool == 0) goto Label_520; // 0x1f3 JumpB
	var_190_string = ""; // 0x1f4 PushV
	var_190_string = "Confusion"; // 0x1f5 MovS
	func_164(var_8_bool, var_190_string); // 0x1f6 NEW_2
	var_191_int = 509178; // 0x1f8 PushI
	SetMessage(var_191_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_192_int = 509179; // 0x1fd PushI
	var_193_int = 10066; // 0x1fe PushI
	var_194_int = 10065; // 0x1ff PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x200 TObjFunc
	var_195_int = 509185; // 0x202 PushI
	var_196_int = 10066; // 0x203 PushI
	var_197_int = 10073; // 0x204 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_198_int = 10066; // 0x208 PushI
	var_199_bool = var_7_cvector == var_198_int; // 0x209 Eq
	if(var_199_bool == 0) goto Label_543; // 0x20a JumpB
	var_200_string = ""; // 0x20b PushV
	var_200_string = "Confusion"; // 0x20c MovS
	func_164(var_8_bool, var_200_string); // 0x20d NEW_2
	var_201_int = 509180; // 0x20f PushI
	SetMessage(var_201_int); // 0x210 TObjFunc
	ClearReplies(); // 0x212 TObjFunc
	var_202_int = 509181; // 0x214 PushI
	var_203_int = 10068; // 0x215 PushI
	var_204_int = 10067; // 0x216 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x217 TObjFunc
	var_205_int = 509184; // 0x219 PushI
	var_206_int = 10068; // 0x21a PushI
	var_207_int = 10071; // 0x21b PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_208_int = 10068; // 0x21f PushI
	var_209_bool = var_7_cvector == var_208_int; // 0x220 Eq
	if(var_209_bool == 0) goto Label_561; // 0x221 JumpB
	var_210_string = ""; // 0x222 PushV
	var_210_string = "Confusion"; // 0x223 MovS
	func_164(var_8_bool, var_210_string); // 0x224 NEW_2
	var_211_int = 509182; // 0x226 PushI
	SetMessage(var_211_int); // 0x227 TObjFunc
	ClearReplies(); // 0x229 TObjFunc
	var_212_int = 509183; // 0x22b PushI
	var_213_int = 10085; // 0x22c PushI
	var_214_int = 10069; // 0x22d PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x22e TObjFunc
	return 0; // 0x230 Return
	
Label_561:
	var_215_int = 10056; // 0x231 PushI
	var_216_bool = var_7_cvector == var_215_int; // 0x232 Eq
	if(var_216_bool == 0) goto Label_564; // 0x233 JumpB
	
Label_564:
	var_217_int = 34342; // 0x234 PushI
	var_218_bool = var_7_cvector == var_217_int; // 0x235 Eq
	if(var_218_bool == 0) goto Label_587; // 0x236 JumpB
	var_219_string = ""; // 0x237 PushV
	var_219_string = "Warning"; // 0x238 MovS
	func_164(var_8_bool, var_219_string); // 0x239 NEW_2
	var_220_int = 532857; // 0x23b PushI
	SetMessage(var_220_int); // 0x23c TObjFunc
	ClearReplies(); // 0x23e TObjFunc
	var_221_int = 532858; // 0x240 PushI
	var_222_int = 10064; // 0x241 PushI
	var_223_int = 34343; // 0x242 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x243 TObjFunc
	var_224_int = 532860; // 0x245 PushI
	var_225_int = 10064; // 0x246 PushI
	var_226_int = 34345; // 0x247 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x248 TObjFunc
	return 0; // 0x24a Return
	
Label_587:
	var_3_string = 1; // 0x24b TMovB
	var_227_bool = 0; // 0x24c PushV
	func_1363(var_227_bool); // 0x24d NEW_2
	if(var_227_bool == 0) goto Label_595; // 0x24f JumpB
	lshStopAnimation(); // 0x250 Func
	goto Label_597; // 0x252 Jump
	
Label_597:
	return 0; // 0x255 Return
	
Label_595:
	StopAnimation(); // 0x253 Func
	
Label_599:
	return 0; // 0x257 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x264 PushV
	var_10_string = "cleanup"; // 0x265 PushS
	var_11_bool = var_7_string == var_10_string; // 0x266 Eq
	if(var_11_bool == 0) goto Label_627; // 0x267 JumpB
	var_1_object = 1; // 0x268 TMovB
	IsLoaded(var_9_bool); // 0x269 Func
	var_12_bool = var_9_bool == 0; // 0x26b Not
	if(var_12_bool == 0) goto Label_626; // 0x26c JumpB
	var_13_object = Obj(); // 0x26d PushV
	func_1209(var_13_object); // 0x26e NEW_2
	RemoveActor(var_13_object); // 0x270 Func
	
Label_626:
	goto Label_631; // 0x272 Jump
	
Label_631:
	return 2; // 0x277 Return
	
Label_627:
	var_16_string = "restore"; // 0x273 PushS
	var_17_bool = var_7_string == var_16_string; // 0x274 Eq
	if(var_17_bool == 0) goto Label_631; // 0x275 JumpB
	var_1_object = 0; // 0x276 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x278 PushT
	if(var_7_object == 0) goto Label_641; // 0x279 JumpB
	var_8_object = Obj(); // 0x27a PushV
	func_1209(var_8_object); // 0x27b NEW_2
	RemoveActor(var_8_object); // 0x27d Func
	Hold(); // 0x27f Func
	
Label_641:
	func_756(); // 0x282 NEW_2
	return 0; // 0x284 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_771(); // 0x286 NEW_2
	return 0; // 0x288 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2cf PushI
	var_9_bool = var_7_int == var_8_int; // 0x2d0 Eq
	if(var_9_bool == 0) goto Label_755; // 0x2d1 JumpB
	func_714(); // 0x2d3 NEW_2
	var_11_bool = 0; // 0x2d5 PushV
	var_11_bool = 0; // 0x2d6 MovB
	var_12_bool = 0; // 0x2d7 PushV
	func_928(var_12_bool); // 0x2d8 NEW_2
	if(var_12_bool == 0) goto Label_736; // 0x2da JumpB
	var_15_bool = 0; // 0x2db PushV
	func_683(var_15_bool); // 0x2dc NEW_2
	if(var_15_bool == 0) goto Label_736; // 0x2de JumpB
	var_11_bool = 1; // 0x2df MovB
	
Label_736:
	if(var_11_bool == 0) goto Label_749; // 0x2e0 JumpB
	var_32_bool = 0; // 0x2e1 PushV
	func_663(var_32_bool); // 0x2e2 NEW_2
	if(var_32_bool == 0) goto Label_748; // 0x2e4 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2e5 PushV
	var_53_object = Obj(); // 0x2e6 PushV
	func_1209(var_53_object); // 0x2e7 NEW_2
	var_52_object = var_53_object; // 0x2e8 Mov
	func_1076(var_52_object); // 0x2ea NEW_2
	
Label_748:
	goto Label_755; // 0x2ec Jump
	
Label_755:
	return 0; // 0x2f3 Return
	
Label_749:
	func_678(var_7_int); // 0x2ee NEW_2
	func_705(); // 0x2f1 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x311 Push
	if(var_8_bool == 0) goto Label_791; // 0x312 JumpB
	func_705(); // 0x314 NEW_2
	goto Label_795; // 0x316 Jump
	
Label_795:
	return 0; // 0x31b Return
	
Label_791:
	var_14_string = ""; // 0x317 PushV
	var_14_string = "Neutral"; // 0x318 MovS
	func_1156(var_14_string); // 0x319 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x31c PushV
	IsOverrideActive(var_9_bool); // 0x31d Func
	var_10_bool = var_9_bool == 0; // 0x31f Not
	if(var_10_bool == 0) goto Label_824; // 0x320 JumpB
	EventDisable(0); // 0x321 EventDisable
	func_896(); // 0x323 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x325 PushV
	var_12_object = var_7_object; // 0x326 Mov
	func_919(var_12_object); // 0x327 NEW_2
	EventEnable(0); // 0x329 EventEnable
	var_25_object = Obj(); // 0x32a PushV
	var_25_object = var_7_object; // 0x32b Mov
	func_600(var_25_object); // 0x32c NEW_2
	var_265_string = ""; // 0x32e PushV
	var_265_string = "Neutral"; // 0x32f MovS
	func_1156(var_265_string); // 0x330 NEW_2
	func_714(); // 0x333 NEW_2
	func_705(); // 0x336 NEW_2
	
Label_824:
	return 2; // 0x338 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_649(var_6_bool); // 0x261 NEW_2
	return 0; // 0x263 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_933(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1357(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1355(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1359(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1361(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1338(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1209(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_1018(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_36_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_27_object; // 0x47 Mov
	func_1001(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_896()
{
	StopAnimation(); // 0x380 Func
	StopGroup0(); // 0x382 Func
	return 0; // 0x384 Return
}


func_771()
{
	StopGroup0(); // 0x303 Func
	func_714(); // 0x306 NEW_2
	var_8_string = ""; // 0x308 PushV
	var_8_string = "Neutral"; // 0x309 MovS
	func_1156(var_8_string); // 0x30a NEW_2
	func_705(); // 0x30d NEW_2
	return 0; // 0x30f Return
}


func_1156(var_233_string)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x484 PushV
	lshHasAnimation(var_237_bool, var_233_string); // 0x485 Func
	var_240_bool = var_237_bool; // 0x487 Push
	if(var_240_bool == 0) goto Label_1167; // 0x488 JumpB
	lshGetAnimTimes(var_233_string, var_238_float, var_239_float); // 0x489 Func
	var_241_bool = 0; // 0x48b PushB
	lshPlayAnimation(var_238_float, var_239_float, var_241_bool); // 0x48c Func
	goto Label_1171; // 0x48e Jump
	
Label_1171:
	return 6; // 0x493 Return
	
Label_1167:
	var_242_string = "Can't find lsh animation : "; // 0x48f PushS
	var_243_int = var_242_string + var_233_string; // 0x490 Add
	Trace(var_243_int); // 0x491 Func
}


func_901(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x385 PushV
	GetPosition(var_27_cvector); // 0x386 Func
	GetPosition(var_28_cvector); // 0x388 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x38a Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x38b Or2
	return 6; // 0x38c Return
}


func_1284()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x504 PushV
	var_19_int = 621; // 0x505 PushI
	var_20_int = 1; // 0x506 PushI
	var_21_int = 532195; // 0x507 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x508 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x50a PushV
	var_23_object = var_18_object; // 0x50b Mov
	var_24_int = 2; // 0x50c MovI
	func_1310(var_22_bool, var_23_object, var_24_int); // 0x50d NEW_2
	return 2; // 0x50f Return
}


func_649(var_0_object)
{
	var_7_bool = 0; // 0x289 PushV
	func_928(var_7_bool); // 0x28a NEW_2
	var_10_bool = var_7_bool == 0; // 0x28c Not
	if(var_10_bool == 0) goto Label_656; // 0x28d JumpB
	Hold(); // 0x28e Func
	
Label_656:
	GetDirection(var_0_object); // 0x290 Func
	
Label_658:
	func_825(); // 0x293 NEW_2
	goto Label_658; // 0x295 Jump
}


func_909(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x38d PushV
	GetPosition(var_20_cvector); // 0x38e Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x390 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x391 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x392 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x393 Func
	var_15_bool = var_22_bool; // 0x395 Mov
	return 6; // 0x396 Return
}


func_1297(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x511 PushV
	GetDiaryRoot(var_33_object); // 0x512 Func
	var_34_bool = var_33_object == 0; // 0x514 Not
	if(var_34_bool == 0) goto Label_1307; // 0x515 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x516 PushS
	Trace(var_35_string); // 0x517 Func
	var_31_object = 0; // 0x519 MovB
	return 2; // 0x51a Return
	
Label_1307:
	var_31_object = var_33_object; // 0x51b Mov
	return 2; // 0x51c Return
}


func_1172(var_211_string, var_212_bool)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x494 PushV
	lshHasAnimation(var_218_bool, var_211_string); // 0x495 Func
	var_221_bool = var_218_bool; // 0x497 Push
	if(var_221_bool == 0) goto Label_1182; // 0x498 JumpB
	lshGetAnimTimes(var_211_string, var_219_float, var_220_float); // 0x499 Func
	lshPlayAnimation(var_219_float, var_220_float, var_212_bool); // 0x49b Func
	goto Label_1186; // 0x49d Jump
	
Label_1186:
	return 6; // 0x4a2 Return
	
Label_1182:
	var_222_string = "Can't find lsh animation : "; // 0x49e PushS
	var_223_int = var_222_string + var_211_string; // 0x49f Add
	Trace(var_223_int); // 0x4a0 Func
}


func_663(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x297 PushV
	var_35_string = "player"; // 0x298 PushS
	FindActor(var_34_object, var_35_string); // 0x299 Func
	var_36_bool = var_34_object == 0; // 0x29b Not
	if(var_36_bool == 0) goto Label_671; // 0x29c JumpB
	var_32_bool = 0; // 0x29d MovB
	return 2; // 0x29e Return
	
Label_671:
	var_37_bool = 0; var_38_object = Obj(); // 0x29f PushV
	var_38_object = var_34_object; // 0x2a0 Mov
	func_919(var_38_object); // 0x2a1 NEW_2
	var_32_bool = var_37_bool; // 0x2a2 Mov
	return 2; // 0x2a4 Return
}


func_919(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x397 PushV
	GetPosition(var_14_cvector); // 0x398 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x39a PushV
	var_16_cvector = var_14_cvector; // 0x39b Mov
	func_909(var_15_bool, var_16_cvector); // 0x39c NEW_2
	var_11_bool = var_15_bool; // 0x39d Mov
	return 2; // 0x39f Return
}


func_1310(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x51e PushV
	var_31_object = Obj(); // 0x51f PushV
	func_1297(var_31_object); // 0x520 NEW_2
	var_28_object = var_31_object; // 0x521 Mov
	Find(var_24_int, var_29_object); // 0x523 ObjFunc
	var_36_bool = var_29_object == 0; // 0x525 Not
	if(var_36_bool == 0) goto Label_1325; // 0x526 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x527 PushS
	var_38_int = var_37_string + var_24_int; // 0x528 Add
	Trace(var_38_int); // 0x529 Func
	var_22_bool = 0; // 0x52b MovB
	return 6; // 0x52c Return
	
Label_1325:
	AddChild(var_23_object); // 0x52d ObjFunc
	var_39_int = 7; // 0x52f PushI
	SendWorldWndMessage(var_39_int); // 0x530 Func
	GetCategory(var_30_int); // 0x532 ObjFunc
	SetDiarySection(var_30_int); // 0x534 Func
	var_22_bool = 0; // 0x536 MovB
	return 6; // 0x537 Return
}


func_928(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x3a0 PushV
	IsLoaded(var_9_bool); // 0x3a1 Func
	var_7_bool = var_9_bool; // 0x3a3 Mov
	return 2; // 0x3a4 Return
}


func_1187(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x4a3 PushV
	var_135_bool = 0; // 0x4a4 PushV
	func_1363(var_135_bool); // 0x4a5 NEW_2
	if(var_135_bool == 0) goto Label_1200; // 0x4a7 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x4a8 Func
	var_136_bool = var_134_bool; // 0x4aa Push
	if(var_136_bool == 0) goto Label_1200; // 0x4ab JumpB
	lshPlaySpeech(var_132_string); // 0x4ac Func
	var_131_bool = 1; // 0x4ae MovB
	return 2; // 0x4af Return
	
Label_1200:
	var_131_bool = 0; // 0x4b0 MovB
	return 2; // 0x4b1 Return
}


func_164(var_2_object, var_207_string)
{
	var_208_bool = 0; // 0xa5 PushV
	func_1363(var_208_bool); // 0xa6 NEW_2
	var_209_bool = var_208_bool == 0; // 0xa8 Not
	if(var_209_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_210_bool = var_207_string == var_2_object; // 0xab Eq
	if(var_210_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_211_string = ""; var_212_bool = 0; // 0xae PushV
	var_211_string = var_207_string; // 0xaf Mov
	var_213_string = ""; // 0xb0 PushS
	var_214_bool = var_207_string == var_213_string; // 0xb1 Eq
	if(var_214_bool == 0) goto Label_181; // 0xb2 JumpB
	var_212_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_1172(var_211_string, var_212_bool); // 0xb6 NEW_2
	var_2_object = var_207_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_212_bool = 1; // 0xb5 MovB
}


func_933(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x3a5 PushV
	GetPosition(var_50_cvector); // 0x3a6 ObjFunc
	GetEyesHeight(var_49_float); // 0x3a8 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x3aa PushE
	var_58_float = var_58_float + var_49_float; // 0x3ab Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x3ac PopE
	GetPosition(var_51_cvector); // 0x3ad Func
	GetEyesHeight(var_49_float); // 0x3af Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x3b1 PushE
	var_59_float = var_59_float + var_49_float; // 0x3b2 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x3b3 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3b4 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3b5 PushE
	var_60_float = 0; // 0x3b6 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3b7 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3b8 Or
	var_62_float = sqrt(var_61_int); // 0x3b9 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x3ba Div2
	var_53_cvector = -var_52_cvector; // 0x3bb Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x3bc Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x3bd PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x3be PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x3bf Xor2
	func_1215(var_64_cvector, var_65_cvector); // 0x3c0 NEW_2
	var_72_int = 25; // 0x3c2 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x3c3 Mult
	var_74_int = var_63_float + var_73_float; // 0x3c4 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x3c5 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x3c6 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3c7 Add2
	IsOverrideActive(var_56_bool); // 0x3c8 Func
	var_76_bool = var_56_bool; // 0x3ca Push
	if(var_76_bool == 0) goto Label_974; // 0x3cb JumpB
	var_37_bool = 0; // 0x3cc MovB
	return 18; // 0x3cd Return
	
Label_974:
	StopWorld(); // 0x3ce Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x3d0 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x3d2 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x3d3 PushE
	Rotate(var_77_float, var_78_float); // 0x3d4 Func
	var_79_bool = 0; // 0x3d6 PushV
	func_1363(var_79_bool); // 0x3d7 NEW_2
	if(var_79_bool == 0) goto Label_987; // 0x3d9 JumpB
	goto Label_995; // 0x3da Jump
	
Label_995:
	CameraWaitForPlayFinish(); // 0x3e3 Func
	ResumeWorld(); // 0x3e5 Func
	var_37_bool = 1; // 0x3e7 MovB
	return 18; // 0x3e8 Return
	
Label_987:
	var_80_string = "head"; // 0x3db PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x3dc Func
	var_81_bool = var_57_bool; // 0x3de Push
	if(var_81_bool == 0) goto Label_995; // 0x3df JumpB
	var_82_string = "head"; // 0x3e0 PushS
	LookAsyncCamera(var_82_string); // 0x3e1 Func
}


func_678(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x2a6 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x2a7 PushE
	RotateAsync(var_84_float, var_85_float); // 0x2a8 Func
	return 0; // 0x2aa Return
}


func_683(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x2ab PushV
	var_20_string = "player"; // 0x2ac PushS
	FindActor(var_18_object, var_20_string); // 0x2ad Func
	var_21_bool = var_18_object == 0; // 0x2af Not
	if(var_21_bool == 0) goto Label_691; // 0x2b0 JumpB
	var_15_bool = 0; // 0x2b1 MovB
	return 4; // 0x2b2 Return
	
Label_691:
	var_22_float = 0; var_23_object = Obj(); // 0x2b3 PushV
	var_23_object = var_18_object; // 0x2b4 Mov
	func_901(var_23_object); // 0x2b5 NEW_2
	var_30_float = 90000.0; // 0x2b7 PushF
	var_31_bool = var_22_float > var_30_float; // 0x2b8 GT
	if(var_31_bool == 0) goto Label_700; // 0x2b9 JumpB
	var_15_bool = 0; // 0x2ba MovB
	return 4; // 0x2bb Return
	
Label_700:
	CanSee(var_19_bool, var_18_object); // 0x2bc Func
	var_15_bool = var_19_bool; // 0x2be Mov
	return 4; // 0x2bf Return
}


func_1202()
{
	var_10_bool = 0; // 0x4b2 PushV
	func_1363(var_10_bool); // 0x4b3 NEW_2
	if(var_10_bool == 0) goto Label_1208; // 0x4b5 JumpB
	lshStopSpeech(); // 0x4b6 Func
	
Label_1208:
	return 0; // 0x4b8 Return
}


func_1076(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x434 PushV
	var_115_string = "c"; // 0x435 MovS
	var_116_int = 0; // 0x436 MovI
	
Label_1079:
	var_120_int = 1; // 0x437 PushI
	if(var_120_int == 0) goto Label_1092; // 0x438 JumpB
	var_121_int = 1; // 0x439 PushI
	var_122_int = var_116_int + var_121_int; // 0x43a Add
	var_123_int = var_115_string + var_122_int; // 0x43b Add
	HasProperty(var_123_int, var_117_bool); // 0x43c ObjFunc
	var_124_bool = var_117_bool == 0; // 0x43e Not
	if(var_124_bool == 0) goto Label_1089; // 0x43f JumpB
	goto Label_1092; // 0x440 Jump
	
Label_1092:
	var_125_bool = var_116_int == 0; // 0x444 Not
	if(var_125_bool == 0) goto Label_1096; // 0x445 JumpB
	var_108_bool = 0; // 0x446 MovB
	return 10; // 0x447 Return
	
Label_1096:
	var_118_int = 0; // 0x448 MovI
	var_126_int = 1; // 0x449 PushI
	var_127_bool = var_116_int > var_126_int; // 0x44a GT
	if(var_127_bool == 0) goto Label_1102; // 0x44b JumpB
	irand(var_118_int, var_116_int); // 0x44c Func
	
Label_1102:
	var_128_int = 1; // 0x44e PushI
	var_129_int = var_118_int + var_128_int; // 0x44f Add
	var_130_int = var_115_string + var_129_int; // 0x450 Add
	GetProperty(var_130_int, var_119_string); // 0x451 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x453 PushV
	var_132_string = var_119_string; // 0x454 Mov
	func_1187(var_131_bool, var_132_string); // 0x455 NEW_2
	var_108_bool = var_131_bool; // 0x456 Mov
	return 10; // 0x458 Return
	
Label_1089:
	var_137_int = 1; // 0x441 PushI
	var_116_int = var_116_int + var_137_int; // 0x442 Add2
	goto Label_1079; // 0x443 Jump
}


func_1209(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x4b9 PushV
	self(var_101_object); // 0x4ba Func
	var_99_object = var_101_object; // 0x4bc Mov
	return 2; // 0x4bd Return
}


func_1338(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x53a PushV
	var_91_string = "branch"; // 0x53b PushS
	GetVariable(var_91_string, var_90_int); // 0x53c Func
	var_92_int = 0; // 0x53e PushI
	var_93_bool = var_90_int == var_92_int; // 0x53f Eq
	if(var_93_bool == 0) goto Label_1348; // 0x540 JumpB
	var_88_int = 1; // 0x541 MovI
	return 2; // 0x542 Return
	
Label_1348:
	var_94_int = 1; // 0x544 PushI
	var_95_bool = var_90_int == var_94_int; // 0x545 Eq
	if(var_95_bool == 0) goto Label_1353; // 0x546 JumpB
	var_88_int = 2; // 0x547 MovI
	return 2; // 0x548 Return
	
Label_1353:
	var_88_int = 3; // 0x549 MovI
	return 2; // 0x54a Return
}


func_825()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x339 PushV
	WaitForAnimEnd(); // 0x33a Func
	var_23_bool = 0; // 0x33c PushV
	func_928(var_23_bool); // 0x33d NEW_2
	var_24_bool = var_23_bool == 0; // 0x33f Not
	if(var_24_bool == 0) goto Label_834; // 0x340 JumpB
	return 12; // 0x341 Return
	
Label_834:
	var_25_int = 0; // 0x342 PushV
	func_1246(var_25_int); // 0x343 NEW_2
	var_17_int = var_25_int; // 0x344 Mov
	var_18_int = 0; // 0x346 MovI
	
Label_839:
	var_38_bool = 0; // 0x347 PushV
	var_38_bool = 0; // 0x348 MovB
	var_39_int = 5; // 0x349 PushI
	var_40_bool = var_18_int < var_39_int; // 0x34a LT
	if(var_40_bool == 0) goto Label_849; // 0x34b JumpB
	var_41_bool = 0; // 0x34c PushV
	func_928(var_41_bool); // 0x34d NEW_2
	if(var_41_bool == 0) goto Label_849; // 0x34f JumpB
	var_38_bool = 1; // 0x350 MovB
	
Label_849:
	if(var_38_bool == 0) goto Label_891; // 0x351 JumpB
	var_42_bool = var_17_int == 0; // 0x352 Not
	if(var_42_bool == 0) goto Label_859; // 0x353 JumpB
	var_43_int = 3; // 0x354 PushI
	Sleep(var_43_int, var_19_bool); // 0x355 Func
	var_44_bool = var_19_bool == 0; // 0x357 Not
	if(var_44_bool == 0) goto Label_858; // 0x358 JumpB
	goto Label_891; // 0x359 Jump
	
Label_891:
	ResetAAS(); // 0x37b Func
	return 12; // 0x37d Return
	
Label_858:
	goto Label_880; // 0x35a Jump
	
Label_880:
	var_45_bool = 0; // 0x370 PushV
	func_894(var_45_bool); // 0x371 NEW_2
	var_46_bool = var_45_bool == 0; // 0x373 Not
	if(var_46_bool == 0) goto Label_886; // 0x374 JumpB
	goto Label_891; // 0x375 Jump
	
Label_886:
	ResetAAS(); // 0x376 Func
	var_47_int = 1; // 0x378 PushI
	var_18_int = var_18_int + var_47_int; // 0x379 Add2
	goto Label_839; // 0x37a Jump
	
Label_859:
	irand(var_20_int, var_17_int); // 0x35b Func
	var_48_int = 5; // 0x35d PushI
	irand(var_21_int, var_48_int); // 0x35e Func
	var_49_int = 0; // 0x360 PushI
	var_50_bool = var_21_int != var_49_int; // 0x361 Neq
	if(var_50_bool == 0) goto Label_868; // 0x362 JumpB
	var_20_int = 0; // 0x363 MovI
	
Label_868:
	var_51_string = "all"; // 0x364 PushS
	var_52_string = ""; var_53_int = 0; // 0x365 PushV
	var_53_int = var_20_int; // 0x366 Mov
	func_1239(var_52_string, var_53_int); // 0x367 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x369 Func
	WaitForAnimEnd(var_22_bool); // 0x36b Func
	var_54_bool = var_22_bool == 0; // 0x36d Not
	if(var_54_bool == 0) goto Label_880; // 0x36e JumpB
	goto Label_891; // 0x36f Jump
}


func_1215(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x4bf PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x4c0 Or
	var_68_float = sqrt(var_69_int); // 0x4c1 Sqrt2
	var_70_float = 0.0; // 0x4c2 PushF
	var_71_bool = var_68_float < var_70_float; // 0x4c3 LT
	if(var_71_bool == 0) goto Label_1223; // 0x4c4 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4c5 MovV
	return 2; // 0x4c6 Return
	
Label_1223:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4c7 Div2
	return 2; // 0x4c8 Return
}


func_705()
{
	var_267_float = 0; var_268_float = 0; // 0x2c1 PushV
	var_269_int = 8; // 0x2c2 PushI
	var_270_int = 16; // 0x2c3 PushI
	rand(var_268_float, var_269_int, var_270_int); // 0x2c4 Func
	var_271_int = 10; // 0x2c6 PushI
	SetTimer(var_271_int, var_268_float); // 0x2c7 Func
	return 2; // 0x2c9 Return
}


func_1225(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x4c9 PushV
	GetVariable(var_202_string, var_204_int); // 0x4ca Func
	var_201_int = var_204_int; // 0x4cc Mov
	return 2; // 0x4cd Return
}


func_714()
{
	var_266_int = 10; // 0x2ca PushI
	KillTimer(var_266_int); // 0x2cb Func
	return 0; // 0x2cd Return
}


func_1355(var_85_int)
{
	var_85_int = 515551; // 0x54b MovI
	return 0; // 0x54c Return
}


func_1357(var_84_int)
{
	var_84_int = 502876; // 0x54d MovI
	return 0; // 0x54e Return
}


func_1230(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x4ce PushV
	GetGameTime(var_154_float); // 0x4cf Func
	var_155_int = 1; // 0x4d1 PushI
	var_156_int = 0; // 0x4d2 PushV
	var_157_int = 24; // 0x4d3 PushI
	var_156_int = var_154_float / var_154_float; // 0x4d4 Div2
	var_152_int = var_155_int + var_156_int; // 0x4d5 Add2
	return 2; // 0x4d6 Return
}


func_1359(var_86_string)
{
	var_86_string = "ui/NPC_Rubin.png"; // 0x54f MovS
	return 0; // 0x550 Return
}


func_1361(var_87_string)
{
	var_87_string = "ui/NPC_Rubin_b.png"; // 0x551 MovS
	return 0; // 0x552 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_134; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1272(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_112; // 0x5b JumpB
	var_207_string = ""; // 0x5c PushV
	var_207_string = "Neutral"; // 0x5d MovS
	func_164(var_193_object, var_207_string); // 0x5e NEW_2
	var_224_int = 509170; // 0x60 PushI
	SetMessage(var_224_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_225_int = 509175; // 0x65 PushI
	var_226_int = 10062; // 0x66 PushI
	var_227_int = 10061; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	var_228_int = 509187; // 0x6a PushI
	var_229_int = 10077; // 0x6b PushI
	var_230_int = 10076; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_231_bool = 0; // 0x86 PushV
	func_1363(var_231_bool); // 0x87 NEW_2
	if(var_231_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_232_string = var_3_string; // 0x8c PushT
	if(var_232_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_233_string = ""; // 0x8f PushV
	var_233_string = var_2_object; // 0x90 MovT
	func_1156(var_233_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_244_string = "all"; // 0x95 PushS
	var_245_string = "idle"; // 0x96 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_246_string = var_3_string; // 0x9b PushT
	if(var_246_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_247_string = "all"; // 0x9e PushS
	var_248_string = "idle"; // 0x9f PushS
	PlayAnimation(var_247_string, var_248_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_249_string = ""; // 0x70 PushV
	var_249_string = "Warning"; // 0x71 MovS
	func_164(var_193_object, var_249_string); // 0x72 NEW_2
	var_250_int = 531961; // 0x74 PushI
	SetMessage(var_250_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_251_int = 532856; // 0x79 PushI
	var_252_int = -1; // 0x7a PushI
	var_253_int = 34341; // 0x7b PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x7c TObjFunc
	var_254_int = 531962; // 0x7e PushI
	var_255_int = -1; // 0x7f PushI
	var_256_int = 33366; // 0x80 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_1363(var_79_bool)
{
	var_79_bool = 1; // 0x553 MovB
	return 0; // 0x554 Return
}


func_1239(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4d7 PushV
	var_34_string = "idle"; // 0x4d8 MovS
	var_35_int = var_32_int; // 0x4d9 Push
	if(var_35_int == 0) goto Label_1244; // 0x4da JumpB
	var_34_string = var_34_string + var_32_int; // 0x4db Add2
	
Label_1244:
	var_31_string = var_34_string; // 0x4dc Mov
	return 2; // 0x4dd Return
}


func_600(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x259 PushV
	var_27_object = var_25_object; // 0x25a Mov
	TaskCall(0); // 0x25b TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x25c NEW_2
	TaskReturn(); // 0x25d TaskReturn
	return 0; // 0x25f Return
}


func_1113(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x459 PushV
	var_151_string = "d"; // 0x45a PushS
	var_152_int = 0; // 0x45b PushV
	func_1230(var_152_int); // 0x45c NEW_2
	var_158_int = var_151_string + var_152_int; // 0x45e Add
	var_159_string = "m"; // 0x45f PushS
	var_146_string = var_158_int + var_159_string; // 0x460 Add2
	var_147_int = 0; // 0x461 MovI
	
Label_1122:
	var_160_int = 1; // 0x462 PushI
	if(var_160_int == 0) goto Label_1135; // 0x463 JumpB
	var_161_int = 1; // 0x464 PushI
	var_162_int = var_147_int + var_161_int; // 0x465 Add
	var_163_int = var_146_string + var_162_int; // 0x466 Add
	HasProperty(var_163_int, var_148_bool); // 0x467 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x469 Not
	if(var_164_bool == 0) goto Label_1132; // 0x46a JumpB
	goto Label_1135; // 0x46b Jump
	
Label_1135:
	var_165_bool = var_147_int == 0; // 0x46f Not
	if(var_165_bool == 0) goto Label_1139; // 0x470 JumpB
	var_139_bool = 0; // 0x471 MovB
	return 10; // 0x472 Return
	
Label_1139:
	var_149_int = 0; // 0x473 MovI
	var_166_int = 1; // 0x474 PushI
	var_167_bool = var_147_int > var_166_int; // 0x475 GT
	if(var_167_bool == 0) goto Label_1145; // 0x476 JumpB
	irand(var_149_int, var_147_int); // 0x477 Func
	
Label_1145:
	var_168_int = 1; // 0x479 PushI
	var_169_int = var_149_int + var_168_int; // 0x47a Add
	var_170_int = var_146_string + var_169_int; // 0x47b Add
	GetProperty(var_170_int, var_150_string); // 0x47c ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x47e PushV
	var_172_string = var_150_string; // 0x47f Mov
	func_1187(var_171_bool, var_172_string); // 0x480 NEW_2
	var_139_bool = var_171_bool; // 0x481 Mov
	return 10; // 0x483 Return
	
Label_1132:
	var_173_int = 1; // 0x46c PushI
	var_147_int = var_147_int + var_173_int; // 0x46d Add2
	goto Label_1122; // 0x46e Jump
}


func_1246(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4de PushV
	var_28_int = 0; // 0x4df MovI
	
Label_1248:
	var_30_string = "all"; // 0x4e0 PushS
	var_31_string = ""; var_32_int = 0; // 0x4e1 PushV
	var_32_int = var_28_int; // 0x4e2 Mov
	func_1239(var_31_string, var_32_int); // 0x4e3 NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4e5 Func
	var_36_bool = var_29_bool == 0; // 0x4e7 Not
	if(var_36_bool == 0) goto Label_1258; // 0x4e8 JumpB
	goto Label_1261; // 0x4e9 Jump
	
Label_1261:
	var_25_int = var_28_int; // 0x4ed Mov
	return 4; // 0x4ee Return
	
Label_1258:
	var_37_int = 1; // 0x4ea PushI
	var_28_int = var_28_int + var_37_int; // 0x4eb Add2
	goto Label_1248; // 0x4ec Jump
}


func_1001()
{
	var_259_bool = 0; var_260_bool = 0; // 0x3e9 PushV
	CameraSwitchToNormal(); // 0x3ea Func
	var_261_bool = 0; // 0x3ec PushV
	func_1363(var_261_bool); // 0x3ed NEW_2
	if(var_261_bool == 0) goto Label_1009; // 0x3ef JumpB
	goto Label_1017; // 0x3f0 Jump
	
Label_1017:
	return 2; // 0x3f9 Return
	
Label_1009:
	var_262_string = "head"; // 0x3f1 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x3f2 Func
	var_263_bool = var_260_bool; // 0x3f4 Push
	if(var_263_bool == 0) goto Label_1017; // 0x3f5 JumpB
	var_264_string = "head"; // 0x3f6 PushS
	UnlookAsync(var_264_string); // 0x3f7 Func
}


func_1263()
{
	var_15_string = "d1q01"; // 0x4f0 PushS
	var_16_int = 8; // 0x4f1 PushI
	SetVariable(var_15_string, var_16_int); // 0x4f2 Func
	func_1284(); // 0x4f5 NEW_2
	return 0; // 0x4f7 Return
}


func_756()
{
	func_896(); // 0x2f5 NEW_2
	func_714(); // 0x2f8 NEW_2
	lshStopSpeech(); // 0x2fa Func
	lshStopAnimation(); // 0x2fc Func
	StopAsync(); // 0x2fe Func
	Hold(); // 0x300 Func
	return 0; // 0x302 Return
}


func_1272(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x4f9 PushV
	var_202_string = "d1q01"; // 0x4fa MovS
	func_1225(var_201_int, var_202_string); // 0x4fb NEW_2
	var_205_int = 7; // 0x4fd PushI
	var_206_bool = var_201_int == var_205_int; // 0x4fe Eq
	if(var_206_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_199_bool = 1; // 0x500 MovB
	return 0; // 0x501 Return
	
Label_1282:
	var_199_bool = 0; // 0x502 MovB
	return 0; // 0x503 Return
}


func_1018(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3fa PushV
	var_106_string = "voice_common"; // 0x3fb PushS
	GetVariable(var_106_string, var_104_int); // 0x3fc Func
	var_107_int = var_104_int; // 0x3fe Push
	if(var_107_int == 0) goto Label_1056; // 0x3ff JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x400 PushV
	var_109_object = var_98_object; // 0x401 Mov
	func_1076(var_109_object); // 0x402 NEW_2
	var_138_bool = var_108_bool == 0; // 0x404 Not
	if(var_138_bool == 0) goto Label_1038; // 0x405 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x406 PushV
	var_140_object = var_98_object; // 0x407 Mov
	func_1113(var_140_object); // 0x408 NEW_2
	var_174_bool = var_139_bool == 0; // 0x40a Not
	if(var_174_bool == 0) goto Label_1038; // 0x40b JumpB
	var_97_bool = 0; // 0x40c MovB
	return 4; // 0x40d Return
	
Label_1038:
	var_175_int = 2; // 0x40e PushI
	irand(var_105_int, var_175_int); // 0x40f Func
	var_176_int = var_105_int; // 0x411 Push
	if(var_176_int == 0) goto Label_1051; // 0x412 JumpB
	var_177_string = "voice_common"; // 0x413 PushS
	var_178_int = 1; // 0x414 PushI
	var_179_int = var_104_int + var_178_int; // 0x415 Add
	var_180_int = 3; // 0x416 PushI
	var_181_int = var_179_int / var_180_int; // 0x417 Mod
	SetVariable(var_177_string, var_181_int); // 0x418 Func
	goto Label_1055; // 0x41a Jump
	
Label_1055:
	goto Label_1074; // 0x41f Jump
	
Label_1074:
	var_97_bool = 1; // 0x432 MovB
	return 4; // 0x433 Return
	
Label_1051:
	var_182_string = "voice_common"; // 0x41b PushS
	var_183_int = 0; // 0x41c PushI
	SetVariable(var_182_string, var_183_int); // 0x41d Func
	
Label_1056:
	var_184_bool = 0; var_185_object = Obj(); // 0x420 PushV
	var_185_object = var_98_object; // 0x421 Mov
	func_1113(var_185_object); // 0x422 NEW_2
	var_186_bool = var_184_bool == 0; // 0x424 Not
	if(var_186_bool == 0) goto Label_1070; // 0x425 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x426 PushV
	var_188_object = var_98_object; // 0x427 Mov
	func_1076(var_188_object); // 0x428 NEW_2
	var_189_bool = var_187_bool == 0; // 0x42a Not
	if(var_189_bool == 0) goto Label_1070; // 0x42b JumpB
	var_97_bool = 0; // 0x42c MovB
	return 4; // 0x42d Return
	
Label_1070:
	var_190_string = "voice_common"; // 0x42e PushS
	var_191_int = 1; // 0x42f PushI
	SetVariable(var_190_string, var_191_int); // 0x430 Func
}


func_894(var_45_bool)
{
	var_45_bool = 1; // 0x37e MovB
	return 0; // 0x37f Return
}


