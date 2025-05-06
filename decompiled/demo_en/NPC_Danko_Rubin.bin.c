task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xac PushI
	if(var_38_int == 0) goto Label_382; // 0xad JumpB
	func_4868(); // 0xaf NEW_2
	var_40_int = 35688; // 0xb1 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xb2 Eq
	if(var_41_bool == 0) goto Label_190; // 0xb3 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xb4 PushV
	var_42_object = var_1_object; // 0xb5 MovT
	var_43_object = var_0_object; // 0xb6 MovT
	func_5055(); // 0xb7 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xb9 PushV
	var_85_object = var_1_object; // 0xba MovT
	var_86_object = var_0_object; // 0xbb MovT
	func_5377(); // 0xbc NEW_2
	
Label_190:
	var_111_int = 38195; // 0xbe PushI
	var_112_bool = var_37_cvector == var_111_int; // 0xbf Eq
	if(var_112_bool == 0) goto Label_203; // 0xc0 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0xc1 PushV
	var_113_object = var_1_object; // 0xc2 MovT
	var_114_object = var_0_object; // 0xc3 MovT
	func_5055(); // 0xc4 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0xc6 PushV
	var_115_object = var_1_object; // 0xc7 MovT
	var_116_object = var_0_object; // 0xc8 MovT
	func_5377(); // 0xc9 NEW_2
	
Label_203:
	var_117_int = 35685; // 0xcb PushI
	var_118_bool = var_36_bool == var_117_int; // 0xcc Eq
	if(var_118_bool == 0) goto Label_236; // 0xcd JumpB
	var_119_string = ""; // 0xce PushV
	var_119_string = "Confusion"; // 0xcf MovS
	func_149(var_37_cvector, var_119_string); // 0xd0 NEW_2
	var_136_int = 534092; // 0xd2 PushI
	SetMessage(var_136_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0xd7 PushV
	var_138_object = var_1_object; // 0xd8 MovT
	func_5411(var_138_object); // 0xd9 NEW_2
	if(var_137_bool == 0) goto Label_225; // 0xdb JumpB
	var_145_int = 534093; // 0xdc PushI
	var_146_int = 38177; // 0xdd PushI
	var_147_int = 35686; // 0xde PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0xdf TObjFunc
	
Label_225:
	var_148_int = 536401; // 0xe1 PushI
	var_149_int = -1; // 0xe2 PushI
	var_150_int = 38180; // 0xe3 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xe4 TObjFunc
	var_151_int = 536402; // 0xe6 PushI
	var_152_int = -1; // 0xe7 PushI
	var_153_int = 38181; // 0xe8 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_154_int = 38177; // 0xec PushI
	var_155_bool = var_36_bool == var_154_int; // 0xed Eq
	if(var_155_bool == 0) goto Label_254; // 0xee JumpB
	var_156_string = ""; // 0xef PushV
	var_156_string = "Confusion"; // 0xf0 MovS
	func_149(var_37_cvector, var_156_string); // 0xf1 NEW_2
	var_157_int = 536398; // 0xf3 PushI
	SetMessage(var_157_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_158_int = 536399; // 0xf8 PushI
	var_159_int = 38179; // 0xf9 PushI
	var_160_int = 38178; // 0xfa PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xfb TObjFunc
	return 0; // 0xfd Return
	
Label_254:
	var_161_int = 38190; // 0xfe PushI
	var_162_bool = var_36_bool == var_161_int; // 0xff Eq
	if(var_162_bool == 0) goto Label_257; // 0x100 JumpB
	
Label_257:
	var_163_int = 38192; // 0x101 PushI
	var_164_bool = var_36_bool == var_163_int; // 0x102 Eq
	if(var_164_bool == 0) goto Label_275; // 0x103 JumpB
	var_165_string = ""; // 0x104 PushV
	var_165_string = "Rage"; // 0x105 MovS
	func_149(var_37_cvector, var_165_string); // 0x106 NEW_2
	var_166_int = 536413; // 0x108 PushI
	SetMessage(var_166_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_167_int = 536414; // 0x10d PushI
	var_168_int = 38189; // 0x10e PushI
	var_169_int = 38193; // 0x10f PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_170_int = 38179; // 0x113 PushI
	var_171_bool = var_36_bool == var_170_int; // 0x114 Eq
	if(var_171_bool == 0) goto Label_298; // 0x115 JumpB
	var_172_string = ""; // 0x116 PushV
	var_172_string = "Confusion"; // 0x117 MovS
	func_149(var_37_cvector, var_172_string); // 0x118 NEW_2
	var_173_int = 536400; // 0x11a PushI
	SetMessage(var_173_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_174_int = 536409; // 0x11f PushI
	var_175_int = 38189; // 0x120 PushI
	var_176_int = 38188; // 0x121 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x122 TObjFunc
	var_177_int = 536415; // 0x124 PushI
	var_178_int = -1; // 0x125 PushI
	var_179_int = 38195; // 0x126 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_180_int = 38189; // 0x12a PushI
	var_181_bool = var_36_bool == var_180_int; // 0x12b Eq
	if(var_181_bool == 0) goto Label_316; // 0x12c JumpB
	var_182_string = ""; // 0x12d PushV
	var_182_string = "Confusion"; // 0x12e MovS
	func_149(var_37_cvector, var_182_string); // 0x12f NEW_2
	var_183_int = 536410; // 0x131 PushI
	SetMessage(var_183_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_184_int = 536403; // 0x136 PushI
	var_185_int = 38183; // 0x137 PushI
	var_186_int = 38182; // 0x138 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_187_int = 38183; // 0x13c PushI
	var_188_bool = var_36_bool == var_187_int; // 0x13d Eq
	if(var_188_bool == 0) goto Label_334; // 0x13e JumpB
	var_189_string = ""; // 0x13f PushV
	var_189_string = "Rage"; // 0x140 MovS
	func_149(var_37_cvector, var_189_string); // 0x141 NEW_2
	var_190_int = 536404; // 0x143 PushI
	SetMessage(var_190_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_191_int = 536405; // 0x148 PushI
	var_192_int = 38185; // 0x149 PushI
	var_193_int = 38184; // 0x14a PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_194_int = 38185; // 0x14e PushI
	var_195_bool = var_36_bool == var_194_int; // 0x14f Eq
	if(var_195_bool == 0) goto Label_352; // 0x150 JumpB
	var_196_string = ""; // 0x151 PushV
	var_196_string = "Rage"; // 0x152 MovS
	func_149(var_37_cvector, var_196_string); // 0x153 NEW_2
	var_197_int = 536406; // 0x155 PushI
	SetMessage(var_197_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_198_int = 536407; // 0x15a PushI
	var_199_int = 35687; // 0x15b PushI
	var_200_int = 38186; // 0x15c PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_201_int = 35687; // 0x160 PushI
	var_202_bool = var_36_bool == var_201_int; // 0x161 Eq
	if(var_202_bool == 0) goto Label_370; // 0x162 JumpB
	var_203_string = ""; // 0x163 PushV
	var_203_string = "Warning"; // 0x164 MovS
	func_149(var_37_cvector, var_203_string); // 0x165 NEW_2
	var_204_int = 534094; // 0x167 PushI
	SetMessage(var_204_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_205_int = 534095; // 0x16c PushI
	var_206_int = -1; // 0x16d PushI
	var_207_int = 35688; // 0x16e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x16f TObjFunc
	return 0; // 0x171 Return
	
Label_370:
	var_3_string = 1; // 0x172 TMovB
	var_208_bool = 0; // 0x173 PushV
	func_5040(var_208_bool); // 0x174 NEW_2
	if(var_208_bool == 0) goto Label_378; // 0x176 JumpB
	lshStopAnimation(); // 0x177 Func
	goto Label_380; // 0x179 Jump
	
Label_380:
	return 0; // 0x17c Return
	
Label_378:
	StopAnimation(); // 0x17a Func
	
Label_382:
	return 0; // 0x17e Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x226 PushI
	if(var_38_int == 0) goto Label_641; // 0x227 JumpB
	func_4868(); // 0x229 NEW_2
	var_40_int = 36971; // 0x22b PushI
	var_41_bool = var_36_bool == var_40_int; // 0x22c Eq
	if(var_41_bool == 0) goto Label_583; // 0x22d JumpB
	var_42_string = ""; // 0x22e PushV
	var_42_string = "Neutral"; // 0x22f MovS
	func_527(var_37_cvector, var_42_string); // 0x230 NEW_2
	var_59_int = 535294; // 0x232 PushI
	SetMessage(var_59_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_60_int = 535295; // 0x237 PushI
	var_61_int = 36973; // 0x238 PushI
	var_62_int = 36972; // 0x239 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x23a TObjFunc
	var_63_int = 535302; // 0x23c PushI
	var_64_int = -1; // 0x23d PushI
	var_65_int = 36980; // 0x23e PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x23f TObjFunc
	var_66_int = 535303; // 0x241 PushI
	var_67_int = -1; // 0x242 PushI
	var_68_int = 36981; // 0x243 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_69_int = 36973; // 0x247 PushI
	var_70_bool = var_36_bool == var_69_int; // 0x248 Eq
	if(var_70_bool == 0) goto Label_606; // 0x249 JumpB
	var_71_string = ""; // 0x24a PushV
	var_71_string = "Neutral"; // 0x24b MovS
	func_527(var_37_cvector, var_71_string); // 0x24c NEW_2
	var_72_int = 535296; // 0x24e PushI
	SetMessage(var_72_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_73_int = 535297; // 0x253 PushI
	var_74_int = 36975; // 0x254 PushI
	var_75_int = 36974; // 0x255 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x256 TObjFunc
	var_76_int = 535301; // 0x258 PushI
	var_77_int = 36975; // 0x259 PushI
	var_78_int = 36978; // 0x25a PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_79_int = 36975; // 0x25e PushI
	var_80_bool = var_36_bool == var_79_int; // 0x25f Eq
	if(var_80_bool == 0) goto Label_629; // 0x260 JumpB
	var_81_string = ""; // 0x261 PushV
	var_81_string = "Neutral"; // 0x262 MovS
	func_527(var_37_cvector, var_81_string); // 0x263 NEW_2
	var_82_int = 535298; // 0x265 PushI
	SetMessage(var_82_int); // 0x266 TObjFunc
	ClearReplies(); // 0x268 TObjFunc
	var_83_int = 535299; // 0x26a PushI
	var_84_int = -1; // 0x26b PushI
	var_85_int = 36976; // 0x26c PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x26d TObjFunc
	var_86_int = 535300; // 0x26f PushI
	var_87_int = -1; // 0x270 PushI
	var_88_int = 36977; // 0x271 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x272 TObjFunc
	return 0; // 0x274 Return
	
Label_629:
	var_3_string = 1; // 0x275 TMovB
	var_89_bool = 0; // 0x276 PushV
	func_5040(var_89_bool); // 0x277 NEW_2
	if(var_89_bool == 0) goto Label_637; // 0x279 JumpB
	lshStopAnimation(); // 0x27a Func
	goto Label_639; // 0x27c Jump
	
Label_639:
	return 0; // 0x27f Return
	
Label_637:
	StopAnimation(); // 0x27d Func
	
Label_641:
	return 0; // 0x281 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x3af PushI
	if(var_38_int == 0) goto Label_2211; // 0x3b0 JumpB
	func_4868(); // 0x3b2 NEW_2
	var_40_int = 9647; // 0x3b4 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x3b5 Eq
	if(var_41_bool == 0) goto Label_966; // 0x3b6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x3b7 PushV
	var_42_object = var_1_object; // 0x3b8 MovT
	var_43_object = var_0_object; // 0x3b9 MovT
	func_5150(); // 0x3ba NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0x3bc PushV
	var_46_object = var_1_object; // 0x3bd MovT
	var_47_object = var_0_object; // 0x3be MovT
	func_5124(); // 0x3bf NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x3c1 PushV
	var_97_object = var_1_object; // 0x3c2 MovT
	var_98_object = var_0_object; // 0x3c3 MovT
	func_5168(); // 0x3c4 NEW_2
	
Label_966:
	var_123_int = 9649; // 0x3c6 PushI
	var_124_bool = var_37_cvector == var_123_int; // 0x3c7 Eq
	if(var_124_bool == 0) goto Label_974; // 0x3c8 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x3c9 PushV
	var_125_object = var_1_object; // 0x3ca MovT
	var_126_object = var_0_object; // 0x3cb MovT
	func_5150(); // 0x3cc NEW_2
	
Label_974:
	var_127_int = 9639; // 0x3ce PushI
	var_128_bool = var_37_cvector == var_127_int; // 0x3cf Eq
	if(var_128_bool == 0) goto Label_992; // 0x3d0 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x3d1 PushV
	var_129_object = var_1_object; // 0x3d2 MovT
	var_130_object = var_0_object; // 0x3d3 MovT
	func_5150(); // 0x3d4 NEW_2
	var_131_object = Obj(); var_132_object = Obj(); // 0x3d6 PushV
	var_131_object = var_1_object; // 0x3d7 MovT
	var_132_object = var_0_object; // 0x3d8 MovT
	func_5124(); // 0x3d9 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x3db PushV
	var_133_object = var_1_object; // 0x3dc MovT
	var_134_object = var_0_object; // 0x3dd MovT
	func_5168(); // 0x3de NEW_2
	
Label_992:
	var_135_int = 9594; // 0x3e0 PushI
	var_136_bool = var_37_cvector == var_135_int; // 0x3e1 Eq
	if(var_136_bool == 0) goto Label_1010; // 0x3e2 JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x3e3 PushV
	var_137_object = var_1_object; // 0x3e4 MovT
	var_138_object = var_0_object; // 0x3e5 MovT
	func_5150(); // 0x3e6 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x3e8 PushV
	var_139_object = var_1_object; // 0x3e9 MovT
	var_140_object = var_0_object; // 0x3ea MovT
	func_5124(); // 0x3eb NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x3ed PushV
	var_141_object = var_1_object; // 0x3ee MovT
	var_142_object = var_0_object; // 0x3ef MovT
	func_5168(); // 0x3f0 NEW_2
	
Label_1010:
	var_143_int = 9963; // 0x3f2 PushI
	var_144_bool = var_37_cvector == var_143_int; // 0x3f3 Eq
	if(var_144_bool == 0) goto Label_1033; // 0x3f4 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x3f5 PushV
	var_145_object = var_1_object; // 0x3f6 MovT
	var_146_object = var_0_object; // 0x3f7 MovT
	func_5200(); // 0x3f8 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); // 0x3fa PushV
	var_161_object = var_1_object; // 0x3fb MovT
	var_162_object = var_0_object; // 0x3fc MovT
	func_5048(var_162_object); // 0x3fd NEW_2
	var_179_object = Obj(); var_180_object = Obj(); // 0x3ff PushV
	var_179_object = var_1_object; // 0x400 MovT
	var_180_object = var_0_object; // 0x401 MovT
	func_5118(); // 0x402 NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0x404 PushV
	var_183_object = var_1_object; // 0x405 MovT
	var_184_object = var_0_object; // 0x406 MovT
	func_5101(var_184_object); // 0x407 NEW_2
	
Label_1033:
	var_207_int = 12332; // 0x409 PushI
	var_208_bool = var_37_cvector == var_207_int; // 0x40a Eq
	if(var_208_bool == 0) goto Label_1046; // 0x40b JumpB
	var_209_object = Obj(); var_210_object = Obj(); // 0x40c PushV
	var_209_object = var_1_object; // 0x40d MovT
	var_210_object = var_0_object; // 0x40e MovT
	func_5124(); // 0x40f NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0x411 PushV
	var_211_object = var_1_object; // 0x412 MovT
	var_212_object = var_0_object; // 0x413 MovT
	func_5168(); // 0x414 NEW_2
	
Label_1046:
	var_213_int = 9684; // 0x416 PushI
	var_214_bool = var_37_cvector == var_213_int; // 0x417 Eq
	if(var_214_bool == 0) goto Label_1054; // 0x418 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x419 PushV
	var_215_object = var_1_object; // 0x41a MovT
	var_216_object = var_0_object; // 0x41b MovT
	func_5156(); // 0x41c NEW_2
	
Label_1054:
	var_219_int = 9627; // 0x41e PushI
	var_220_bool = var_37_cvector == var_219_int; // 0x41f Eq
	if(var_220_bool == 0) goto Label_1062; // 0x420 JumpB
	var_221_object = Obj(); var_222_object = Obj(); // 0x421 PushV
	var_221_object = var_1_object; // 0x422 MovT
	var_222_object = var_0_object; // 0x423 MovT
	func_5210(); // 0x424 NEW_2
	
Label_1062:
	var_225_int = 9672; // 0x426 PushI
	var_226_bool = var_37_cvector == var_225_int; // 0x427 Eq
	if(var_226_bool == 0) goto Label_1070; // 0x428 JumpB
	var_227_object = Obj(); var_228_object = Obj(); // 0x429 PushV
	var_227_object = var_1_object; // 0x42a MovT
	var_228_object = var_0_object; // 0x42b MovT
	func_5162(); // 0x42c NEW_2
	
Label_1070:
	var_231_int = 9678; // 0x42e PushI
	var_232_bool = var_37_cvector == var_231_int; // 0x42f Eq
	if(var_232_bool == 0) goto Label_1078; // 0x430 JumpB
	var_233_object = Obj(); var_234_object = Obj(); // 0x431 PushV
	var_233_object = var_1_object; // 0x432 MovT
	var_234_object = var_0_object; // 0x433 MovT
	func_5162(); // 0x434 NEW_2
	
Label_1078:
	var_235_int = 9679; // 0x436 PushI
	var_236_bool = var_37_cvector == var_235_int; // 0x437 Eq
	if(var_236_bool == 0) goto Label_1086; // 0x438 JumpB
	var_237_object = Obj(); var_238_object = Obj(); // 0x439 PushV
	var_237_object = var_1_object; // 0x43a MovT
	var_238_object = var_0_object; // 0x43b MovT
	func_5162(); // 0x43c NEW_2
	
Label_1086:
	var_239_int = 9667; // 0x43e PushI
	var_240_bool = var_37_cvector == var_239_int; // 0x43f Eq
	if(var_240_bool == 0) goto Label_1094; // 0x440 JumpB
	var_241_object = Obj(); var_242_object = Obj(); // 0x441 PushV
	var_241_object = var_1_object; // 0x442 MovT
	var_242_object = var_0_object; // 0x443 MovT
	func_5162(); // 0x444 NEW_2
	
Label_1094:
	var_243_int = 9574; // 0x446 PushI
	var_244_bool = var_36_bool == var_243_int; // 0x447 Eq
	if(var_244_bool == 0) goto Label_1256; // 0x448 JumpB
	var_245_bool = 0; // 0x449 PushV
	var_245_bool = 0; // 0x44a MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x44b PushV
	var_247_object = var_1_object; // 0x44c MovT
	func_5471(var_247_object); // 0x44d NEW_2
	if(var_246_bool == 0) goto Label_1110; // 0x44f JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0x450 PushV
	var_255_object = var_1_object; // 0x451 MovT
	func_5483(var_255_object); // 0x452 NEW_2
	if(var_254_bool == 0) goto Label_1110; // 0x454 JumpB
	var_245_bool = 1; // 0x455 MovB
	
Label_1110:
	if(var_245_bool == 0) goto Label_1136; // 0x456 JumpB
	var_260_object = Obj(); var_261_object = Obj(); // 0x457 PushV
	var_260_object = var_1_object; // 0x458 MovT
	var_261_object = var_0_object; // 0x459 MovT
	func_5393(); // 0x45a NEW_2
	var_264_string = ""; // 0x45c PushV
	var_264_string = "Neutral"; // 0x45d MovS
	func_920(var_37_cvector, var_264_string); // 0x45e NEW_2
	var_281_int = 508737; // 0x460 PushI
	SetMessage(var_281_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_282_int = 508777; // 0x465 PushI
	var_283_int = 9633; // 0x466 PushI
	var_284_int = 9624; // 0x467 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x468 TObjFunc
	var_285_int = 508781; // 0x46a PushI
	var_286_int = 9629; // 0x46b PushI
	var_287_int = 9628; // 0x46c PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x46d TObjFunc
	return 0; // 0x46f Return
	
Label_1136:
	var_288_bool = 0; // 0x470 PushV
	var_288_bool = 0; // 0x471 MovB
	var_289_bool = 0; // 0x472 PushV
	var_289_bool = 0; // 0x473 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0x474 PushV
	var_291_object = var_1_object; // 0x475 MovT
	func_5531(var_290_bool, var_291_object); // 0x476 NEW_2
	if(var_290_bool == 0) goto Label_1152; // 0x478 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x479 PushV
	var_300_object = var_1_object; // 0x47a MovT
	func_5519(var_300_object); // 0x47b NEW_2
	var_305_bool = var_299_bool == 0; // 0x47d Not
	if(var_305_bool == 0) goto Label_1152; // 0x47e JumpB
	var_289_bool = 1; // 0x47f MovB
	
Label_1152:
	if(var_289_bool == 0) goto Label_1160; // 0x480 JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x481 PushV
	var_307_object = var_1_object; // 0x482 MovT
	func_5423(var_307_object); // 0x483 NEW_2
	var_312_bool = var_306_bool == 0; // 0x485 Not
	if(var_312_bool == 0) goto Label_1160; // 0x486 JumpB
	var_288_bool = 1; // 0x487 MovB
	
Label_1160:
	if(var_288_bool == 0) goto Label_1181; // 0x488 JumpB
	var_313_string = ""; // 0x489 PushV
	var_313_string = "Neutral"; // 0x48a MovS
	func_920(var_37_cvector, var_313_string); // 0x48b NEW_2
	var_314_int = 536148; // 0x48d PushI
	SetMessage(var_314_int); // 0x48e TObjFunc
	ClearReplies(); // 0x490 TObjFunc
	var_315_int = 536149; // 0x492 PushI
	var_316_int = 37916; // 0x493 PushI
	var_317_int = 37914; // 0x494 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x495 TObjFunc
	var_318_int = 536150; // 0x497 PushI
	var_319_int = 37916; // 0x498 PushI
	var_320_int = 37915; // 0x499 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x49a TObjFunc
	return 0; // 0x49c Return
	
Label_1181:
	var_321_bool = 0; // 0x49d PushV
	var_321_bool = 0; // 0x49e MovB
	var_322_bool = 0; var_323_object = Obj(); // 0x49f PushV
	var_323_object = var_1_object; // 0x4a0 MovT
	func_5531(var_322_bool, var_323_object); // 0x4a1 NEW_2
	if(var_322_bool == 0) goto Label_1195; // 0x4a3 JumpB
	var_324_bool = 0; var_325_object = Obj(); // 0x4a4 PushV
	var_325_object = var_1_object; // 0x4a5 MovT
	func_5519(var_325_object); // 0x4a6 NEW_2
	var_326_bool = var_324_bool == 0; // 0x4a8 Not
	if(var_326_bool == 0) goto Label_1195; // 0x4a9 JumpB
	var_321_bool = 1; // 0x4aa MovB
	
Label_1195:
	if(var_321_bool == 0) goto Label_1211; // 0x4ab JumpB
	var_327_string = ""; // 0x4ac PushV
	var_327_string = "Neutral"; // 0x4ad MovS
	func_920(var_37_cvector, var_327_string); // 0x4ae NEW_2
	var_328_int = 509078; // 0x4b0 PushI
	SetMessage(var_328_int); // 0x4b1 TObjFunc
	ClearReplies(); // 0x4b3 TObjFunc
	var_329_int = 509079; // 0x4b5 PushI
	var_330_int = 9958; // 0x4b6 PushI
	var_331_int = 9957; // 0x4b7 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_332_string = ""; // 0x4bb PushV
	var_332_string = "Neutral"; // 0x4bc MovS
	func_920(var_37_cvector, var_332_string); // 0x4bd NEW_2
	var_333_int = 508778; // 0x4bf PushI
	SetMessage(var_333_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_334_bool = 0; var_335_object = Obj(); // 0x4c4 PushV
	var_335_object = var_1_object; // 0x4c5 MovT
	func_5471(var_335_object); // 0x4c6 NEW_2
	if(var_334_bool == 0) goto Label_1230; // 0x4c8 JumpB
	var_336_int = 511141; // 0x4c9 PushI
	var_337_int = 12331; // 0x4ca PushI
	var_338_int = 12330; // 0x4cb PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x4cc TObjFunc
	
Label_1230:
	var_339_bool = 0; var_340_object = Obj(); // 0x4ce PushV
	var_340_object = var_1_object; // 0x4cf MovT
	func_5495(var_340_object); // 0x4d0 NEW_2
	if(var_339_bool == 0) goto Label_1240; // 0x4d2 JumpB
	var_345_int = 508779; // 0x4d3 PushI
	var_346_int = 9681; // 0x4d4 PushI
	var_347_int = 9626; // 0x4d5 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x4d6 TObjFunc
	
Label_1240:
	var_348_bool = 0; var_349_object = Obj(); // 0x4d8 PushV
	var_349_object = var_1_object; // 0x4d9 MovT
	func_5507(var_349_object); // 0x4da NEW_2
	if(var_348_bool == 0) goto Label_1250; // 0x4dc JumpB
	var_354_int = 508780; // 0x4dd PushI
	var_355_int = 9669; // 0x4de PushI
	var_356_int = 9627; // 0x4df PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x4e0 TObjFunc
	
Label_1250:
	var_357_int = 511140; // 0x4e2 PushI
	var_358_int = -1; // 0x4e3 PushI
	var_359_int = 12329; // 0x4e4 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x4e5 TObjFunc
	return 0; // 0x4e7 Return
	
Label_1256:
	var_360_int = 9651; // 0x4e8 PushI
	var_361_bool = var_36_bool == var_360_int; // 0x4e9 Eq
	if(var_361_bool == 0) goto Label_1259; // 0x4ea JumpB
	
Label_1259:
	var_362_int = 9640; // 0x4eb PushI
	var_363_bool = var_36_bool == var_362_int; // 0x4ec Eq
	if(var_363_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_364_string = ""; // 0x4ee PushV
	var_364_string = "Rage"; // 0x4ef MovS
	func_920(var_37_cvector, var_364_string); // 0x4f0 NEW_2
	var_365_int = 508793; // 0x4f2 PushI
	SetMessage(var_365_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_366_int = 508795; // 0x4f7 PushI
	var_367_int = 9643; // 0x4f8 PushI
	var_368_int = 9642; // 0x4f9 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x4fa TObjFunc
	var_369_int = 508794; // 0x4fc PushI
	var_370_int = -1; // 0x4fd PushI
	var_371_int = 9641; // 0x4fe PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_372_int = 9643; // 0x502 PushI
	var_373_bool = var_36_bool == var_372_int; // 0x503 Eq
	if(var_373_bool == 0) goto Label_1300; // 0x504 JumpB
	var_374_string = ""; // 0x505 PushV
	var_374_string = "Rage"; // 0x506 MovS
	func_920(var_37_cvector, var_374_string); // 0x507 NEW_2
	var_375_int = 508796; // 0x509 PushI
	SetMessage(var_375_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_376_int = 508797; // 0x50e PushI
	var_377_int = -1; // 0x50f PushI
	var_378_int = 9644; // 0x510 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_379_int = 9669; // 0x514 PushI
	var_380_bool = var_36_bool == var_379_int; // 0x515 Eq
	if(var_380_bool == 0) goto Label_1328; // 0x516 JumpB
	var_381_string = ""; // 0x517 PushV
	var_381_string = "Confusion"; // 0x518 MovS
	func_920(var_37_cvector, var_381_string); // 0x519 NEW_2
	var_382_int = 508818; // 0x51b PushI
	SetMessage(var_382_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_383_int = 508819; // 0x520 PushI
	var_384_int = 9666; // 0x521 PushI
	var_385_int = 9670; // 0x522 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x523 TObjFunc
	var_386_bool = 0; var_387_object = Obj(); // 0x525 PushV
	var_387_object = var_1_object; // 0x526 MovT
	func_5519(var_387_object); // 0x527 NEW_2
	if(var_386_bool == 0) goto Label_1327; // 0x529 JumpB
	var_388_int = 536147; // 0x52a PushI
	var_389_int = 9616; // 0x52b PushI
	var_390_int = 37912; // 0x52c PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x52d TObjFunc
	
Label_1327:
	return 0; // 0x52f Return
	
Label_1328:
	var_391_int = 9616; // 0x530 PushI
	var_392_bool = var_36_bool == var_391_int; // 0x531 Eq
	if(var_392_bool == 0) goto Label_1351; // 0x532 JumpB
	var_393_string = ""; // 0x533 PushV
	var_393_string = "Warning"; // 0x534 MovS
	func_920(var_37_cvector, var_393_string); // 0x535 NEW_2
	var_394_int = 508769; // 0x537 PushI
	SetMessage(var_394_int); // 0x538 TObjFunc
	ClearReplies(); // 0x53a TObjFunc
	var_395_int = 508770; // 0x53c PushI
	var_396_int = 9621; // 0x53d PushI
	var_397_int = 9617; // 0x53e PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x53f TObjFunc
	var_398_int = 508771; // 0x541 PushI
	var_399_int = 9619; // 0x542 PushI
	var_400_int = 9618; // 0x543 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x544 TObjFunc
	return 0; // 0x546 Return
	
Label_1351:
	var_401_int = 9619; // 0x547 PushI
	var_402_bool = var_36_bool == var_401_int; // 0x548 Eq
	if(var_402_bool == 0) goto Label_1374; // 0x549 JumpB
	var_403_string = ""; // 0x54a PushV
	var_403_string = "Neutral"; // 0x54b MovS
	func_920(var_37_cvector, var_403_string); // 0x54c NEW_2
	var_404_int = 508772; // 0x54e PushI
	SetMessage(var_404_int); // 0x54f TObjFunc
	ClearReplies(); // 0x551 TObjFunc
	var_405_int = 508773; // 0x553 PushI
	var_406_int = 9621; // 0x554 PushI
	var_407_int = 9620; // 0x555 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x556 TObjFunc
	var_408_int = 508814; // 0x558 PushI
	var_409_int = -1; // 0x559 PushI
	var_410_int = 9663; // 0x55a PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_411_int = 9621; // 0x55e PushI
	var_412_bool = var_36_bool == var_411_int; // 0x55f Eq
	if(var_412_bool == 0) goto Label_1397; // 0x560 JumpB
	var_413_string = ""; // 0x561 PushV
	var_413_string = "Warning"; // 0x562 MovS
	func_920(var_37_cvector, var_413_string); // 0x563 NEW_2
	var_414_int = 508774; // 0x565 PushI
	SetMessage(var_414_int); // 0x566 TObjFunc
	ClearReplies(); // 0x568 TObjFunc
	var_415_int = 508775; // 0x56a PushI
	var_416_int = 9623; // 0x56b PushI
	var_417_int = 9622; // 0x56c PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x56d TObjFunc
	var_418_int = 510448; // 0x56f PushI
	var_419_int = 9623; // 0x570 PushI
	var_420_int = 11518; // 0x571 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_421_int = 9623; // 0x575 PushI
	var_422_bool = var_36_bool == var_421_int; // 0x576 Eq
	if(var_422_bool == 0) goto Label_1425; // 0x577 JumpB
	var_423_string = ""; // 0x578 PushV
	var_423_string = "Warning"; // 0x579 MovS
	func_920(var_37_cvector, var_423_string); // 0x57a NEW_2
	var_424_int = 508776; // 0x57c PushI
	SetMessage(var_424_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_425_int = 508739; // 0x581 PushI
	var_426_int = 9577; // 0x582 PushI
	var_427_int = 9576; // 0x583 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x584 TObjFunc
	var_428_int = 508764; // 0x586 PushI
	var_429_int = 9577; // 0x587 PushI
	var_430_int = 9608; // 0x588 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x589 TObjFunc
	var_431_int = 508765; // 0x58b PushI
	var_432_int = 9611; // 0x58c PushI
	var_433_int = 9610; // 0x58d PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x58e TObjFunc
	return 0; // 0x590 Return
	
Label_1425:
	var_434_int = 9611; // 0x591 PushI
	var_435_bool = var_36_bool == var_434_int; // 0x592 Eq
	if(var_435_bool == 0) goto Label_1448; // 0x593 JumpB
	var_436_string = ""; // 0x594 PushV
	var_436_string = "Neutral"; // 0x595 MovS
	func_920(var_37_cvector, var_436_string); // 0x596 NEW_2
	var_437_int = 508766; // 0x598 PushI
	SetMessage(var_437_int); // 0x599 TObjFunc
	ClearReplies(); // 0x59b TObjFunc
	var_438_int = 508767; // 0x59d PushI
	var_439_int = 9587; // 0x59e PushI
	var_440_int = 9612; // 0x59f PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x5a0 TObjFunc
	var_441_int = 508768; // 0x5a2 PushI
	var_442_int = 9587; // 0x5a3 PushI
	var_443_int = 9614; // 0x5a4 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_444_int = 9577; // 0x5a8 PushI
	var_445_bool = var_36_bool == var_444_int; // 0x5a9 Eq
	if(var_445_bool == 0) goto Label_1466; // 0x5aa JumpB
	var_446_string = ""; // 0x5ab PushV
	var_446_string = "Warning"; // 0x5ac MovS
	func_920(var_37_cvector, var_446_string); // 0x5ad NEW_2
	var_447_int = 508740; // 0x5af PushI
	SetMessage(var_447_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_448_int = 508746; // 0x5b4 PushI
	var_449_int = 9587; // 0x5b5 PushI
	var_450_int = 9586; // 0x5b6 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_451_int = 9587; // 0x5ba PushI
	var_452_bool = var_36_bool == var_451_int; // 0x5bb Eq
	if(var_452_bool == 0) goto Label_1494; // 0x5bc JumpB
	var_453_string = ""; // 0x5bd PushV
	var_453_string = "Warning"; // 0x5be MovS
	func_920(var_37_cvector, var_453_string); // 0x5bf NEW_2
	var_454_int = 508747; // 0x5c1 PushI
	SetMessage(var_454_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_455_int = 508748; // 0x5c6 PushI
	var_456_int = 9589; // 0x5c7 PushI
	var_457_int = 9588; // 0x5c8 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x5c9 TObjFunc
	var_458_int = 508762; // 0x5cb PushI
	var_459_int = -1; // 0x5cc PushI
	var_460_int = 9604; // 0x5cd PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x5ce TObjFunc
	var_461_int = 508763; // 0x5d0 PushI
	var_462_int = 9589; // 0x5d1 PushI
	var_463_int = 9606; // 0x5d2 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x5d3 TObjFunc
	return 0; // 0x5d5 Return
	
Label_1494:
	var_464_int = 9589; // 0x5d6 PushI
	var_465_bool = var_36_bool == var_464_int; // 0x5d7 Eq
	if(var_465_bool == 0) goto Label_1517; // 0x5d8 JumpB
	var_466_string = ""; // 0x5d9 PushV
	var_466_string = "Warning"; // 0x5da MovS
	func_920(var_37_cvector, var_466_string); // 0x5db NEW_2
	var_467_int = 508749; // 0x5dd PushI
	SetMessage(var_467_int); // 0x5de TObjFunc
	ClearReplies(); // 0x5e0 TObjFunc
	var_468_int = 508761; // 0x5e2 PushI
	var_469_int = -1; // 0x5e3 PushI
	var_470_int = 9603; // 0x5e4 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x5e5 TObjFunc
	var_471_int = 536153; // 0x5e7 PushI
	var_472_int = -1; // 0x5e8 PushI
	var_473_int = 37918; // 0x5e9 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x5ea TObjFunc
	return 0; // 0x5ec Return
	
Label_1517:
	var_474_int = 9666; // 0x5ed PushI
	var_475_bool = var_36_bool == var_474_int; // 0x5ee Eq
	if(var_475_bool == 0) goto Label_1540; // 0x5ef JumpB
	var_476_string = ""; // 0x5f0 PushV
	var_476_string = "Confusion"; // 0x5f1 MovS
	func_920(var_37_cvector, var_476_string); // 0x5f2 NEW_2
	var_477_int = 508815; // 0x5f4 PushI
	SetMessage(var_477_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_478_int = 508817; // 0x5f9 PushI
	var_479_int = 9671; // 0x5fa PushI
	var_480_int = 9668; // 0x5fb PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x5fc TObjFunc
	var_481_int = 508816; // 0x5fe PushI
	var_482_int = -1; // 0x5ff PushI
	var_483_int = 9667; // 0x600 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x601 TObjFunc
	return 0; // 0x603 Return
	
Label_1540:
	var_484_int = 9671; // 0x604 PushI
	var_485_bool = var_36_bool == var_484_int; // 0x605 Eq
	if(var_485_bool == 0) goto Label_1563; // 0x606 JumpB
	var_486_string = ""; // 0x607 PushV
	var_486_string = "Confusion"; // 0x608 MovS
	func_920(var_37_cvector, var_486_string); // 0x609 NEW_2
	var_487_int = 508820; // 0x60b PushI
	SetMessage(var_487_int); // 0x60c TObjFunc
	ClearReplies(); // 0x60e TObjFunc
	var_488_int = 508821; // 0x610 PushI
	var_489_int = -1; // 0x611 PushI
	var_490_int = 9672; // 0x612 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x613 TObjFunc
	var_491_int = 508822; // 0x615 PushI
	var_492_int = 9674; // 0x616 PushI
	var_493_int = 9673; // 0x617 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x618 TObjFunc
	return 0; // 0x61a Return
	
Label_1563:
	var_494_int = 9674; // 0x61b PushI
	var_495_bool = var_36_bool == var_494_int; // 0x61c Eq
	if(var_495_bool == 0) goto Label_1581; // 0x61d JumpB
	var_496_string = ""; // 0x61e PushV
	var_496_string = "Warning"; // 0x61f MovS
	func_920(var_37_cvector, var_496_string); // 0x620 NEW_2
	var_497_int = 508823; // 0x622 PushI
	SetMessage(var_497_int); // 0x623 TObjFunc
	ClearReplies(); // 0x625 TObjFunc
	var_498_int = 508824; // 0x627 PushI
	var_499_int = 9677; // 0x628 PushI
	var_500_int = 9675; // 0x629 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_501_int = 9677; // 0x62d PushI
	var_502_bool = var_36_bool == var_501_int; // 0x62e Eq
	if(var_502_bool == 0) goto Label_1604; // 0x62f JumpB
	var_503_string = ""; // 0x630 PushV
	var_503_string = "Warning"; // 0x631 MovS
	func_920(var_37_cvector, var_503_string); // 0x632 NEW_2
	var_504_int = 508826; // 0x634 PushI
	SetMessage(var_504_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_505_int = 508827; // 0x639 PushI
	var_506_int = -1; // 0x63a PushI
	var_507_int = 9678; // 0x63b PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x63c TObjFunc
	var_508_int = 508828; // 0x63e PushI
	var_509_int = -1; // 0x63f PushI
	var_510_int = 9679; // 0x640 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_511_int = 9681; // 0x644 PushI
	var_512_bool = var_36_bool == var_511_int; // 0x645 Eq
	if(var_512_bool == 0) goto Label_1622; // 0x646 JumpB
	var_513_string = ""; // 0x647 PushV
	var_513_string = "Rage"; // 0x648 MovS
	func_920(var_37_cvector, var_513_string); // 0x649 NEW_2
	var_514_int = 508829; // 0x64b PushI
	SetMessage(var_514_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_515_int = 508830; // 0x650 PushI
	var_516_int = 9683; // 0x651 PushI
	var_517_int = 9682; // 0x652 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_518_int = 9683; // 0x656 PushI
	var_519_bool = var_36_bool == var_518_int; // 0x657 Eq
	if(var_519_bool == 0) goto Label_1640; // 0x658 JumpB
	var_520_string = ""; // 0x659 PushV
	var_520_string = "Warning"; // 0x65a MovS
	func_920(var_37_cvector, var_520_string); // 0x65b NEW_2
	var_521_int = 508831; // 0x65d PushI
	SetMessage(var_521_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_522_int = 508832; // 0x662 PushI
	var_523_int = -1; // 0x663 PushI
	var_524_int = 9684; // 0x664 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x665 TObjFunc
	return 0; // 0x667 Return
	
Label_1640:
	var_525_int = 12331; // 0x668 PushI
	var_526_bool = var_36_bool == var_525_int; // 0x669 Eq
	if(var_526_bool == 0) goto Label_1658; // 0x66a JumpB
	var_527_string = ""; // 0x66b PushV
	var_527_string = "Neutral"; // 0x66c MovS
	func_920(var_37_cvector, var_527_string); // 0x66d NEW_2
	var_528_int = 511142; // 0x66f PushI
	SetMessage(var_528_int); // 0x670 TObjFunc
	ClearReplies(); // 0x672 TObjFunc
	var_529_int = 511143; // 0x674 PushI
	var_530_int = -1; // 0x675 PushI
	var_531_int = 12332; // 0x676 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x677 TObjFunc
	return 0; // 0x679 Return
	
Label_1658:
	var_532_int = 9958; // 0x67a PushI
	var_533_bool = var_36_bool == var_532_int; // 0x67b Eq
	if(var_533_bool == 0) goto Label_1676; // 0x67c JumpB
	var_534_string = ""; // 0x67d PushV
	var_534_string = "Rage"; // 0x67e MovS
	func_920(var_37_cvector, var_534_string); // 0x67f NEW_2
	var_535_int = 509080; // 0x681 PushI
	SetMessage(var_535_int); // 0x682 TObjFunc
	ClearReplies(); // 0x684 TObjFunc
	var_536_int = 509081; // 0x686 PushI
	var_537_int = 11530; // 0x687 PushI
	var_538_int = 9959; // 0x688 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x689 TObjFunc
	return 0; // 0x68b Return
	
Label_1676:
	var_539_int = 10799; // 0x68c PushI
	var_540_bool = var_36_bool == var_539_int; // 0x68d Eq
	if(var_540_bool == 0) goto Label_1679; // 0x68e JumpB
	
Label_1679:
	var_541_int = 10801; // 0x68f PushI
	var_542_bool = var_36_bool == var_541_int; // 0x690 Eq
	if(var_542_bool == 0) goto Label_1702; // 0x691 JumpB
	var_543_string = ""; // 0x692 PushV
	var_543_string = "Confusion"; // 0x693 MovS
	func_920(var_37_cvector, var_543_string); // 0x694 NEW_2
	var_544_int = 509807; // 0x696 PushI
	SetMessage(var_544_int); // 0x697 TObjFunc
	ClearReplies(); // 0x699 TObjFunc
	var_545_int = 509808; // 0x69b PushI
	var_546_int = 10803; // 0x69c PushI
	var_547_int = 10802; // 0x69d PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x69e TObjFunc
	var_548_int = 509821; // 0x6a0 PushI
	var_549_int = 10803; // 0x6a1 PushI
	var_550_int = 10816; // 0x6a2 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x6a3 TObjFunc
	return 0; // 0x6a5 Return
	
Label_1702:
	var_551_int = 10803; // 0x6a6 PushI
	var_552_bool = var_36_bool == var_551_int; // 0x6a7 Eq
	if(var_552_bool == 0) goto Label_1730; // 0x6a8 JumpB
	var_553_string = ""; // 0x6a9 PushV
	var_553_string = "Confusion"; // 0x6aa MovS
	func_920(var_37_cvector, var_553_string); // 0x6ab NEW_2
	var_554_int = 509809; // 0x6ad PushI
	SetMessage(var_554_int); // 0x6ae TObjFunc
	ClearReplies(); // 0x6b0 TObjFunc
	var_555_int = 509810; // 0x6b2 PushI
	var_556_int = 10805; // 0x6b3 PushI
	var_557_int = 10804; // 0x6b4 PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x6b5 TObjFunc
	var_558_int = 509814; // 0x6b7 PushI
	var_559_int = 10809; // 0x6b8 PushI
	var_560_int = 10808; // 0x6b9 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x6ba TObjFunc
	var_561_int = 509820; // 0x6bc PushI
	var_562_int = 10809; // 0x6bd PushI
	var_563_int = 10814; // 0x6be PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x6bf TObjFunc
	return 0; // 0x6c1 Return
	
Label_1730:
	var_564_int = 10809; // 0x6c2 PushI
	var_565_bool = var_36_bool == var_564_int; // 0x6c3 Eq
	if(var_565_bool == 0) goto Label_1748; // 0x6c4 JumpB
	var_566_string = ""; // 0x6c5 PushV
	var_566_string = "Confusion"; // 0x6c6 MovS
	func_920(var_37_cvector, var_566_string); // 0x6c7 NEW_2
	var_567_int = 509815; // 0x6c9 PushI
	SetMessage(var_567_int); // 0x6ca TObjFunc
	ClearReplies(); // 0x6cc TObjFunc
	var_568_int = 509816; // 0x6ce PushI
	var_569_int = 10811; // 0x6cf PushI
	var_570_int = 10810; // 0x6d0 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x6d1 TObjFunc
	return 0; // 0x6d3 Return
	
Label_1748:
	var_571_int = 10811; // 0x6d4 PushI
	var_572_bool = var_36_bool == var_571_int; // 0x6d5 Eq
	if(var_572_bool == 0) goto Label_1771; // 0x6d6 JumpB
	var_573_string = ""; // 0x6d7 PushV
	var_573_string = "Confusion"; // 0x6d8 MovS
	func_920(var_37_cvector, var_573_string); // 0x6d9 NEW_2
	var_574_int = 509817; // 0x6db PushI
	SetMessage(var_574_int); // 0x6dc TObjFunc
	ClearReplies(); // 0x6de TObjFunc
	var_575_int = 509818; // 0x6e0 PushI
	var_576_int = 11530; // 0x6e1 PushI
	var_577_int = 10812; // 0x6e2 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x6e3 TObjFunc
	var_578_int = 509819; // 0x6e5 PushI
	var_579_int = 11530; // 0x6e6 PushI
	var_580_int = 10813; // 0x6e7 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x6e8 TObjFunc
	return 0; // 0x6ea Return
	
Label_1771:
	var_581_int = 10805; // 0x6eb PushI
	var_582_bool = var_36_bool == var_581_int; // 0x6ec Eq
	if(var_582_bool == 0) goto Label_1794; // 0x6ed JumpB
	var_583_string = ""; // 0x6ee PushV
	var_583_string = "Confusion"; // 0x6ef MovS
	func_920(var_37_cvector, var_583_string); // 0x6f0 NEW_2
	var_584_int = 509811; // 0x6f2 PushI
	SetMessage(var_584_int); // 0x6f3 TObjFunc
	ClearReplies(); // 0x6f5 TObjFunc
	var_585_int = 509812; // 0x6f7 PushI
	var_586_int = 11530; // 0x6f8 PushI
	var_587_int = 10806; // 0x6f9 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x6fa TObjFunc
	var_588_int = 509813; // 0x6fc PushI
	var_589_int = 11530; // 0x6fd PushI
	var_590_int = 10807; // 0x6fe PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x6ff TObjFunc
	return 0; // 0x701 Return
	
Label_1794:
	var_591_int = 11530; // 0x702 PushI
	var_592_bool = var_36_bool == var_591_int; // 0x703 Eq
	if(var_592_bool == 0) goto Label_1812; // 0x704 JumpB
	var_593_string = ""; // 0x705 PushV
	var_593_string = "Neutral"; // 0x706 MovS
	func_920(var_37_cvector, var_593_string); // 0x707 NEW_2
	var_594_int = 510457; // 0x709 PushI
	SetMessage(var_594_int); // 0x70a TObjFunc
	ClearReplies(); // 0x70c TObjFunc
	var_595_int = 510458; // 0x70e PushI
	var_596_int = 11532; // 0x70f PushI
	var_597_int = 11531; // 0x710 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0x711 TObjFunc
	return 0; // 0x713 Return
	
Label_1812:
	var_598_int = 11532; // 0x714 PushI
	var_599_bool = var_36_bool == var_598_int; // 0x715 Eq
	if(var_599_bool == 0) goto Label_1830; // 0x716 JumpB
	var_600_string = ""; // 0x717 PushV
	var_600_string = "Neutral"; // 0x718 MovS
	func_920(var_37_cvector, var_600_string); // 0x719 NEW_2
	var_601_int = 510459; // 0x71b PushI
	SetMessage(var_601_int); // 0x71c TObjFunc
	ClearReplies(); // 0x71e TObjFunc
	var_602_int = 510460; // 0x720 PushI
	var_603_int = 11534; // 0x721 PushI
	var_604_int = 11533; // 0x722 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x723 TObjFunc
	return 0; // 0x725 Return
	
Label_1830:
	var_605_int = 11534; // 0x726 PushI
	var_606_bool = var_36_bool == var_605_int; // 0x727 Eq
	if(var_606_bool == 0) goto Label_1848; // 0x728 JumpB
	var_607_string = ""; // 0x729 PushV
	var_607_string = "Neutral"; // 0x72a MovS
	func_920(var_37_cvector, var_607_string); // 0x72b NEW_2
	var_608_int = 510461; // 0x72d PushI
	SetMessage(var_608_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_609_int = 510462; // 0x732 PushI
	var_610_int = 9960; // 0x733 PushI
	var_611_int = 11535; // 0x734 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x735 TObjFunc
	return 0; // 0x737 Return
	
Label_1848:
	var_612_int = 9960; // 0x738 PushI
	var_613_bool = var_36_bool == var_612_int; // 0x739 Eq
	if(var_613_bool == 0) goto Label_1866; // 0x73a JumpB
	var_614_string = ""; // 0x73b PushV
	var_614_string = "Neutral"; // 0x73c MovS
	func_920(var_37_cvector, var_614_string); // 0x73d NEW_2
	var_615_int = 509082; // 0x73f PushI
	SetMessage(var_615_int); // 0x740 TObjFunc
	ClearReplies(); // 0x742 TObjFunc
	var_616_int = 509083; // 0x744 PushI
	var_617_int = 9962; // 0x745 PushI
	var_618_int = 9961; // 0x746 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x747 TObjFunc
	return 0; // 0x749 Return
	
Label_1866:
	var_619_int = 9962; // 0x74a PushI
	var_620_bool = var_36_bool == var_619_int; // 0x74b Eq
	if(var_620_bool == 0) goto Label_1884; // 0x74c JumpB
	var_621_string = ""; // 0x74d PushV
	var_621_string = "Neutral"; // 0x74e MovS
	func_920(var_37_cvector, var_621_string); // 0x74f NEW_2
	var_622_int = 509084; // 0x751 PushI
	SetMessage(var_622_int); // 0x752 TObjFunc
	ClearReplies(); // 0x754 TObjFunc
	var_623_int = 509085; // 0x756 PushI
	var_624_int = -1; // 0x757 PushI
	var_625_int = 9963; // 0x758 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x759 TObjFunc
	return 0; // 0x75b Return
	
Label_1884:
	var_626_int = 37916; // 0x75c PushI
	var_627_bool = var_36_bool == var_626_int; // 0x75d Eq
	if(var_627_bool == 0) goto Label_1902; // 0x75e JumpB
	var_628_string = ""; // 0x75f PushV
	var_628_string = "Neutral"; // 0x760 MovS
	func_920(var_37_cvector, var_628_string); // 0x761 NEW_2
	var_629_int = 536151; // 0x763 PushI
	SetMessage(var_629_int); // 0x764 TObjFunc
	ClearReplies(); // 0x766 TObjFunc
	var_630_int = 536152; // 0x768 PushI
	var_631_int = -1; // 0x769 PushI
	var_632_int = 37917; // 0x76a PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x76b TObjFunc
	return 0; // 0x76d Return
	
Label_1902:
	var_633_int = 9629; // 0x76e PushI
	var_634_bool = var_36_bool == var_633_int; // 0x76f Eq
	if(var_634_bool == 0) goto Label_1930; // 0x770 JumpB
	var_635_object = Obj(); var_636_object = Obj(); // 0x771 PushV
	var_635_object = var_1_object; // 0x772 MovT
	var_636_object = var_0_object; // 0x773 MovT
	func_5210(); // 0x774 NEW_2
	var_637_string = ""; // 0x776 PushV
	var_637_string = "Confusion"; // 0x777 MovS
	func_920(var_37_cvector, var_637_string); // 0x778 NEW_2
	var_638_int = 508782; // 0x77a PushI
	SetMessage(var_638_int); // 0x77b TObjFunc
	ClearReplies(); // 0x77d TObjFunc
	var_639_int = 508783; // 0x77f PushI
	var_640_int = 9631; // 0x780 PushI
	var_641_int = 9630; // 0x781 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x782 TObjFunc
	var_642_int = 510447; // 0x784 PushI
	var_643_int = 9631; // 0x785 PushI
	var_644_int = 11516; // 0x786 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x787 TObjFunc
	return 0; // 0x789 Return
	
Label_1930:
	var_645_int = 9631; // 0x78a PushI
	var_646_bool = var_36_bool == var_645_int; // 0x78b Eq
	if(var_646_bool == 0) goto Label_1948; // 0x78c JumpB
	var_647_string = ""; // 0x78d PushV
	var_647_string = "Confusion"; // 0x78e MovS
	func_920(var_37_cvector, var_647_string); // 0x78f NEW_2
	var_648_int = 508784; // 0x791 PushI
	SetMessage(var_648_int); // 0x792 TObjFunc
	ClearReplies(); // 0x794 TObjFunc
	var_649_int = 508785; // 0x796 PushI
	var_650_int = 9591; // 0x797 PushI
	var_651_int = 9632; // 0x798 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x799 TObjFunc
	return 0; // 0x79b Return
	
Label_1948:
	var_652_int = 9633; // 0x79c PushI
	var_653_bool = var_36_bool == var_652_int; // 0x79d Eq
	if(var_653_bool == 0) goto Label_1966; // 0x79e JumpB
	var_654_string = ""; // 0x79f PushV
	var_654_string = "Warning"; // 0x7a0 MovS
	func_920(var_37_cvector, var_654_string); // 0x7a1 NEW_2
	var_655_int = 508786; // 0x7a3 PushI
	SetMessage(var_655_int); // 0x7a4 TObjFunc
	ClearReplies(); // 0x7a6 TObjFunc
	var_656_int = 508787; // 0x7a8 PushI
	var_657_int = 9591; // 0x7a9 PushI
	var_658_int = 9634; // 0x7aa PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x7ab TObjFunc
	return 0; // 0x7ad Return
	
Label_1966:
	var_659_int = 9591; // 0x7ae PushI
	var_660_bool = var_36_bool == var_659_int; // 0x7af Eq
	if(var_660_bool == 0) goto Label_1989; // 0x7b0 JumpB
	var_661_string = ""; // 0x7b1 PushV
	var_661_string = "Warning"; // 0x7b2 MovS
	func_920(var_37_cvector, var_661_string); // 0x7b3 NEW_2
	var_662_int = 508751; // 0x7b5 PushI
	SetMessage(var_662_int); // 0x7b6 TObjFunc
	ClearReplies(); // 0x7b8 TObjFunc
	var_663_int = 508752; // 0x7ba PushI
	var_664_int = 9657; // 0x7bb PushI
	var_665_int = 9592; // 0x7bc PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x7bd TObjFunc
	var_666_int = 508757; // 0x7bf PushI
	var_667_int = 9598; // 0x7c0 PushI
	var_668_int = 9597; // 0x7c1 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x7c2 TObjFunc
	return 0; // 0x7c4 Return
	
Label_1989:
	var_669_int = 9598; // 0x7c5 PushI
	var_670_bool = var_36_bool == var_669_int; // 0x7c6 Eq
	if(var_670_bool == 0) goto Label_2012; // 0x7c7 JumpB
	var_671_string = ""; // 0x7c8 PushV
	var_671_string = "Rage"; // 0x7c9 MovS
	func_920(var_37_cvector, var_671_string); // 0x7ca NEW_2
	var_672_int = 508758; // 0x7cc PushI
	SetMessage(var_672_int); // 0x7cd TObjFunc
	ClearReplies(); // 0x7cf TObjFunc
	var_673_int = 508759; // 0x7d1 PushI
	var_674_int = 9593; // 0x7d2 PushI
	var_675_int = 9599; // 0x7d3 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x7d4 TObjFunc
	var_676_int = 508760; // 0x7d6 PushI
	var_677_int = 9593; // 0x7d7 PushI
	var_678_int = 9601; // 0x7d8 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x7d9 TObjFunc
	return 0; // 0x7db Return
	
Label_2012:
	var_679_int = 9657; // 0x7dc PushI
	var_680_bool = var_36_bool == var_679_int; // 0x7dd Eq
	if(var_680_bool == 0) goto Label_2035; // 0x7de JumpB
	var_681_string = ""; // 0x7df PushV
	var_681_string = "Warning"; // 0x7e0 MovS
	func_920(var_37_cvector, var_681_string); // 0x7e1 NEW_2
	var_682_int = 508808; // 0x7e3 PushI
	SetMessage(var_682_int); // 0x7e4 TObjFunc
	ClearReplies(); // 0x7e6 TObjFunc
	var_683_int = 508809; // 0x7e8 PushI
	var_684_int = 9659; // 0x7e9 PushI
	var_685_int = 9658; // 0x7ea PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x7eb TObjFunc
	var_686_int = 510449; // 0x7ed PushI
	var_687_int = 11521; // 0x7ee PushI
	var_688_int = 11520; // 0x7ef PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0x7f0 TObjFunc
	return 0; // 0x7f2 Return
	
Label_2035:
	var_689_int = 11521; // 0x7f3 PushI
	var_690_bool = var_36_bool == var_689_int; // 0x7f4 Eq
	if(var_690_bool == 0) goto Label_2053; // 0x7f5 JumpB
	var_691_string = ""; // 0x7f6 PushV
	var_691_string = "Confusion"; // 0x7f7 MovS
	func_920(var_37_cvector, var_691_string); // 0x7f8 NEW_2
	var_692_int = 510450; // 0x7fa PushI
	SetMessage(var_692_int); // 0x7fb TObjFunc
	ClearReplies(); // 0x7fd TObjFunc
	var_693_int = 510451; // 0x7ff PushI
	var_694_int = 11523; // 0x800 PushI
	var_695_int = 11522; // 0x801 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x802 TObjFunc
	return 0; // 0x804 Return
	
Label_2053:
	var_696_int = 11523; // 0x805 PushI
	var_697_bool = var_36_bool == var_696_int; // 0x806 Eq
	if(var_697_bool == 0) goto Label_2071; // 0x807 JumpB
	var_698_string = ""; // 0x808 PushV
	var_698_string = "Warning"; // 0x809 MovS
	func_920(var_37_cvector, var_698_string); // 0x80a NEW_2
	var_699_int = 510452; // 0x80c PushI
	SetMessage(var_699_int); // 0x80d TObjFunc
	ClearReplies(); // 0x80f TObjFunc
	var_700_int = 510453; // 0x811 PushI
	var_701_int = 9659; // 0x812 PushI
	var_702_int = 11524; // 0x813 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x814 TObjFunc
	return 0; // 0x816 Return
	
Label_2071:
	var_703_int = 9659; // 0x817 PushI
	var_704_bool = var_36_bool == var_703_int; // 0x818 Eq
	if(var_704_bool == 0) goto Label_2094; // 0x819 JumpB
	var_705_string = ""; // 0x81a PushV
	var_705_string = "Warning"; // 0x81b MovS
	func_920(var_37_cvector, var_705_string); // 0x81c NEW_2
	var_706_int = 508810; // 0x81e PushI
	SetMessage(var_706_int); // 0x81f TObjFunc
	ClearReplies(); // 0x821 TObjFunc
	var_707_int = 508811; // 0x823 PushI
	var_708_int = 9661; // 0x824 PushI
	var_709_int = 9660; // 0x825 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x826 TObjFunc
	var_710_int = 510454; // 0x828 PushI
	var_711_int = 11527; // 0x829 PushI
	var_712_int = 11526; // 0x82a PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x82b TObjFunc
	return 0; // 0x82d Return
	
Label_2094:
	var_713_int = 11527; // 0x82e PushI
	var_714_bool = var_36_bool == var_713_int; // 0x82f Eq
	if(var_714_bool == 0) goto Label_2112; // 0x830 JumpB
	var_715_string = ""; // 0x831 PushV
	var_715_string = "Warning"; // 0x832 MovS
	func_920(var_37_cvector, var_715_string); // 0x833 NEW_2
	var_716_int = 510455; // 0x835 PushI
	SetMessage(var_716_int); // 0x836 TObjFunc
	ClearReplies(); // 0x838 TObjFunc
	var_717_int = 510456; // 0x83a PushI
	var_718_int = 9593; // 0x83b PushI
	var_719_int = 11528; // 0x83c PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x83d TObjFunc
	return 0; // 0x83f Return
	
Label_2112:
	var_720_int = 9661; // 0x840 PushI
	var_721_bool = var_36_bool == var_720_int; // 0x841 Eq
	if(var_721_bool == 0) goto Label_2130; // 0x842 JumpB
	var_722_string = ""; // 0x843 PushV
	var_722_string = "Rage"; // 0x844 MovS
	func_920(var_37_cvector, var_722_string); // 0x845 NEW_2
	var_723_int = 508812; // 0x847 PushI
	SetMessage(var_723_int); // 0x848 TObjFunc
	ClearReplies(); // 0x84a TObjFunc
	var_724_int = 508813; // 0x84c PushI
	var_725_int = 9593; // 0x84d PushI
	var_726_int = 9662; // 0x84e PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x84f TObjFunc
	return 0; // 0x851 Return
	
Label_2130:
	var_727_int = 9593; // 0x852 PushI
	var_728_bool = var_36_bool == var_727_int; // 0x853 Eq
	if(var_728_bool == 0) goto Label_2153; // 0x854 JumpB
	var_729_string = ""; // 0x855 PushV
	var_729_string = "Neutral"; // 0x856 MovS
	func_920(var_37_cvector, var_729_string); // 0x857 NEW_2
	var_730_int = 508753; // 0x859 PushI
	SetMessage(var_730_int); // 0x85a TObjFunc
	ClearReplies(); // 0x85c TObjFunc
	var_731_int = 508790; // 0x85e PushI
	var_732_int = 9638; // 0x85f PushI
	var_733_int = 9637; // 0x860 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0x861 TObjFunc
	var_734_int = 508754; // 0x863 PushI
	var_735_int = -1; // 0x864 PushI
	var_736_int = 9594; // 0x865 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x866 TObjFunc
	return 0; // 0x868 Return
	
Label_2153:
	var_737_int = 9638; // 0x869 PushI
	var_738_bool = var_36_bool == var_737_int; // 0x86a Eq
	if(var_738_bool == 0) goto Label_2176; // 0x86b JumpB
	var_739_string = ""; // 0x86c PushV
	var_739_string = "Neutral"; // 0x86d MovS
	func_920(var_37_cvector, var_739_string); // 0x86e NEW_2
	var_740_int = 508791; // 0x870 PushI
	SetMessage(var_740_int); // 0x871 TObjFunc
	ClearReplies(); // 0x873 TObjFunc
	var_741_int = 508798; // 0x875 PushI
	var_742_int = 9646; // 0x876 PushI
	var_743_int = 9645; // 0x877 PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0x878 TObjFunc
	var_744_int = 508792; // 0x87a PushI
	var_745_int = -1; // 0x87b PushI
	var_746_int = 9639; // 0x87c PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x87d TObjFunc
	return 0; // 0x87f Return
	
Label_2176:
	var_747_int = 9646; // 0x880 PushI
	var_748_bool = var_36_bool == var_747_int; // 0x881 Eq
	if(var_748_bool == 0) goto Label_2199; // 0x882 JumpB
	var_749_string = ""; // 0x883 PushV
	var_749_string = "Neutral"; // 0x884 MovS
	func_920(var_37_cvector, var_749_string); // 0x885 NEW_2
	var_750_int = 508799; // 0x887 PushI
	SetMessage(var_750_int); // 0x888 TObjFunc
	ClearReplies(); // 0x88a TObjFunc
	var_751_int = 508800; // 0x88c PushI
	var_752_int = -1; // 0x88d PushI
	var_753_int = 9647; // 0x88e PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x88f TObjFunc
	var_754_int = 508801; // 0x891 PushI
	var_755_int = -1; // 0x892 PushI
	var_756_int = 9649; // 0x893 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0x894 TObjFunc
	return 0; // 0x896 Return
	
Label_2199:
	var_3_string = 1; // 0x897 TMovB
	var_757_bool = 0; // 0x898 PushV
	func_5040(var_757_bool); // 0x899 NEW_2
	if(var_757_bool == 0) goto Label_2207; // 0x89b JumpB
	lshStopAnimation(); // 0x89c Func
	goto Label_2209; // 0x89e Jump
	
Label_2209:
	return 0; // 0x8a1 Return
	
Label_2207:
	StopAnimation(); // 0x89f Func
	
Label_2211:
	return 0; // 0x8a3 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x9b6 PushI
	if(var_38_int == 0) goto Label_3406; // 0x9b7 JumpB
	func_4868(); // 0x9b9 NEW_2
	var_40_int = 11563; // 0x9bb PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x9bc Eq
	if(var_41_bool == 0) goto Label_2504; // 0x9bd JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x9be PushV
	var_42_object = var_1_object; // 0x9bf MovT
	var_43_object = var_0_object; // 0x9c0 MovT
	func_5222(); // 0x9c1 NEW_2
	var_98_object = Obj(); var_99_object = Obj(); // 0x9c3 PushV
	var_98_object = var_1_object; // 0x9c4 MovT
	var_99_object = var_0_object; // 0x9c5 MovT
	func_5184(); // 0x9c6 NEW_2
	
Label_2504:
	var_124_int = 11566; // 0x9c8 PushI
	var_125_bool = var_37_cvector == var_124_int; // 0x9c9 Eq
	if(var_125_bool == 0) goto Label_2517; // 0x9ca JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x9cb PushV
	var_126_object = var_1_object; // 0x9cc MovT
	var_127_object = var_0_object; // 0x9cd MovT
	func_5222(); // 0x9ce NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0x9d0 PushV
	var_128_object = var_1_object; // 0x9d1 MovT
	var_129_object = var_0_object; // 0x9d2 MovT
	func_5184(); // 0x9d3 NEW_2
	
Label_2517:
	var_130_int = 11569; // 0x9d5 PushI
	var_131_bool = var_37_cvector == var_130_int; // 0x9d6 Eq
	if(var_131_bool == 0) goto Label_2535; // 0x9d7 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x9d8 PushV
	var_132_object = var_1_object; // 0x9d9 MovT
	var_133_object = var_0_object; // 0x9da MovT
	func_5216(); // 0x9db NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x9dd PushV
	var_136_object = var_1_object; // 0x9de MovT
	var_137_object = var_0_object; // 0x9df MovT
	func_5222(); // 0x9e0 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x9e2 PushV
	var_138_object = var_1_object; // 0x9e3 MovT
	var_139_object = var_0_object; // 0x9e4 MovT
	func_5184(); // 0x9e5 NEW_2
	
Label_2535:
	var_140_int = 11599; // 0x9e7 PushI
	var_141_bool = var_37_cvector == var_140_int; // 0x9e8 Eq
	if(var_141_bool == 0) goto Label_2543; // 0x9e9 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x9ea PushV
	var_142_object = var_1_object; // 0x9eb MovT
	var_143_object = var_0_object; // 0x9ec MovT
	func_5263(); // 0x9ed NEW_2
	
Label_2543:
	var_187_int = 11600; // 0x9ef PushI
	var_188_bool = var_37_cvector == var_187_int; // 0x9f0 Eq
	if(var_188_bool == 0) goto Label_2551; // 0x9f1 JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x9f2 PushV
	var_189_object = var_1_object; // 0x9f3 MovT
	var_190_object = var_0_object; // 0x9f4 MovT
	func_5263(); // 0x9f5 NEW_2
	
Label_2551:
	var_191_int = 11601; // 0x9f7 PushI
	var_192_bool = var_37_cvector == var_191_int; // 0x9f8 Eq
	if(var_192_bool == 0) goto Label_2559; // 0x9f9 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x9fa PushV
	var_193_object = var_1_object; // 0x9fb MovT
	var_194_object = var_0_object; // 0x9fc MovT
	func_5263(); // 0x9fd NEW_2
	
Label_2559:
	var_195_int = 11583; // 0x9ff PushI
	var_196_bool = var_37_cvector == var_195_int; // 0xa00 Eq
	if(var_196_bool == 0) goto Label_2567; // 0xa01 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0xa02 PushV
	var_197_object = var_1_object; // 0xa03 MovT
	var_198_object = var_0_object; // 0xa04 MovT
	func_5405(); // 0xa05 NEW_2
	
Label_2567:
	var_201_int = 11570; // 0xa07 PushI
	var_202_bool = var_37_cvector == var_201_int; // 0xa08 Eq
	if(var_202_bool == 0) goto Label_2580; // 0xa09 JumpB
	var_203_object = Obj(); var_204_object = Obj(); // 0xa0a PushV
	var_203_object = var_1_object; // 0xa0b MovT
	var_204_object = var_0_object; // 0xa0c MovT
	func_5222(); // 0xa0d NEW_2
	var_205_object = Obj(); var_206_object = Obj(); // 0xa0f PushV
	var_205_object = var_1_object; // 0xa10 MovT
	var_206_object = var_0_object; // 0xa11 MovT
	func_5184(); // 0xa12 NEW_2
	
Label_2580:
	var_207_int = 12720; // 0xa14 PushI
	var_208_bool = var_36_bool == var_207_int; // 0xa15 Eq
	if(var_208_bool == 0) goto Label_2715; // 0xa16 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0xa17 PushV
	var_210_object = var_1_object; // 0xa18 MovT
	func_5542(var_210_object); // 0xa19 NEW_2
	if(var_209_bool == 0) goto Label_2613; // 0xa1b JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0xa1c PushV
	var_217_object = var_1_object; // 0xa1d MovT
	var_218_object = var_0_object; // 0xa1e MovT
	func_5399(); // 0xa1f NEW_2
	var_221_object = Obj(); var_222_object = Obj(); // 0xa21 PushV
	var_221_object = var_1_object; // 0xa22 MovT
	var_222_object = var_0_object; // 0xa23 MovT
	func_5216(); // 0xa24 NEW_2
	var_223_string = ""; // 0xa26 PushV
	var_223_string = "Rage"; // 0xa27 MovS
	func_2463(var_37_cvector, var_223_string); // 0xa28 NEW_2
	var_240_int = 511527; // 0xa2a PushI
	SetMessage(var_240_int); // 0xa2b TObjFunc
	ClearReplies(); // 0xa2d TObjFunc
	var_241_int = 511528; // 0xa2f PushI
	var_242_int = 12722; // 0xa30 PushI
	var_243_int = 12721; // 0xa31 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xa32 TObjFunc
	return 0; // 0xa34 Return
	
Label_2613:
	var_244_bool = 0; // 0xa35 PushV
	var_244_bool = 0; // 0xa36 MovB
	var_245_bool = 0; // 0xa37 PushV
	var_245_bool = 0; // 0xa38 MovB
	var_246_bool = 0; var_247_object = Obj(); // 0xa39 PushV
	var_247_object = var_1_object; // 0xa3a MovT
	func_5566(var_247_object); // 0xa3b NEW_2
	if(var_246_bool == 0) goto Label_2628; // 0xa3d JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0xa3e PushV
	var_253_object = var_1_object; // 0xa3f MovT
	func_5554(var_253_object); // 0xa40 NEW_2
	if(var_252_bool == 0) goto Label_2628; // 0xa42 JumpB
	var_245_bool = 1; // 0xa43 MovB
	
Label_2628:
	if(var_245_bool == 0) goto Label_2635; // 0xa44 JumpB
	var_258_bool = 0; var_259_object = Obj(); // 0xa45 PushV
	var_259_object = var_1_object; // 0xa46 MovT
	func_5578(var_258_bool, var_259_object); // 0xa47 NEW_2
	if(var_258_bool == 0) goto Label_2635; // 0xa49 JumpB
	var_244_bool = 1; // 0xa4a MovB
	
Label_2635:
	if(var_244_bool == 0) goto Label_2661; // 0xa4b JumpB
	var_267_object = Obj(); var_268_object = Obj(); // 0xa4c PushV
	var_267_object = var_1_object; // 0xa4d MovT
	var_268_object = var_0_object; // 0xa4e MovT
	func_5257(); // 0xa4f NEW_2
	var_271_string = ""; // 0xa51 PushV
	var_271_string = "Neutral"; // 0xa52 MovS
	func_2463(var_37_cvector, var_271_string); // 0xa53 NEW_2
	var_272_int = 510510; // 0xa55 PushI
	SetMessage(var_272_int); // 0xa56 TObjFunc
	ClearReplies(); // 0xa58 TObjFunc
	var_273_int = 510511; // 0xa5a PushI
	var_274_int = 11594; // 0xa5b PushI
	var_275_int = 11593; // 0xa5c PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xa5d TObjFunc
	var_276_int = 510521; // 0xa5f PushI
	var_277_int = 11594; // 0xa60 PushI
	var_278_int = 11604; // 0xa61 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0xa62 TObjFunc
	return 0; // 0xa64 Return
	
Label_2661:
	var_279_string = ""; // 0xa65 PushV
	var_279_string = "Neutral"; // 0xa66 MovS
	func_2463(var_37_cvector, var_279_string); // 0xa67 NEW_2
	var_280_int = 510500; // 0xa69 PushI
	SetMessage(var_280_int); // 0xa6a TObjFunc
	ClearReplies(); // 0xa6c TObjFunc
	var_281_bool = 0; var_282_object = Obj(); // 0xa6e PushV
	var_282_object = var_1_object; // 0xa6f MovT
	func_5625(var_282_object); // 0xa70 NEW_2
	if(var_281_bool == 0) goto Label_2680; // 0xa72 JumpB
	var_297_int = 510509; // 0xa73 PushI
	var_298_int = 16679; // 0xa74 PushI
	var_299_int = 11591; // 0xa75 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xa76 TObjFunc
	
Label_2680:
	var_300_bool = 0; // 0xa78 PushV
	var_300_bool = 0; // 0xa79 MovB
	var_301_bool = 0; var_302_object = Obj(); // 0xa7a PushV
	var_302_object = var_1_object; // 0xa7b MovT
	func_5613(var_302_object); // 0xa7c NEW_2
	if(var_301_bool == 0) goto Label_2693; // 0xa7e JumpB
	var_307_bool = 0; var_308_object = Obj(); // 0xa7f PushV
	var_308_object = var_1_object; // 0xa80 MovT
	func_5625(var_308_object); // 0xa81 NEW_2
	if(var_307_bool == 0) goto Label_2693; // 0xa83 JumpB
	var_300_bool = 1; // 0xa84 MovB
	
Label_2693:
	if(var_300_bool == 0) goto Label_2699; // 0xa85 JumpB
	var_309_int = 510501; // 0xa86 PushI
	var_310_int = 11584; // 0xa87 PushI
	var_311_int = 11583; // 0xa88 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0xa89 TObjFunc
	
Label_2699:
	var_312_bool = 0; var_313_object = Obj(); // 0xa8b PushV
	var_313_object = var_1_object; // 0xa8c MovT
	func_5601(var_313_object); // 0xa8d NEW_2
	if(var_312_bool == 0) goto Label_2709; // 0xa8f JumpB
	var_318_int = 515653; // 0xa90 PushI
	var_319_int = 16690; // 0xa91 PushI
	var_320_int = 16689; // 0xa92 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xa93 TObjFunc
	
Label_2709:
	var_321_int = 515647; // 0xa95 PushI
	var_322_int = -1; // 0xa96 PushI
	var_323_int = 16682; // 0xa97 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xa98 TObjFunc
	return 0; // 0xa9a Return
	
Label_2715:
	var_324_int = 16690; // 0xa9b PushI
	var_325_bool = var_36_bool == var_324_int; // 0xa9c Eq
	if(var_325_bool == 0) goto Label_2733; // 0xa9d JumpB
	var_326_string = ""; // 0xa9e PushV
	var_326_string = "Neutral"; // 0xa9f MovS
	func_2463(var_37_cvector, var_326_string); // 0xaa0 NEW_2
	var_327_int = 515654; // 0xaa2 PushI
	SetMessage(var_327_int); // 0xaa3 TObjFunc
	ClearReplies(); // 0xaa5 TObjFunc
	var_328_int = 510492; // 0xaa7 PushI
	var_329_int = -1; // 0xaa8 PushI
	var_330_int = 11570; // 0xaa9 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xaaa TObjFunc
	return 0; // 0xaac Return
	
Label_2733:
	var_331_int = 11584; // 0xaad PushI
	var_332_bool = var_36_bool == var_331_int; // 0xaae Eq
	if(var_332_bool == 0) goto Label_2756; // 0xaaf JumpB
	var_333_string = ""; // 0xab0 PushV
	var_333_string = "Neutral"; // 0xab1 MovS
	func_2463(var_37_cvector, var_333_string); // 0xab2 NEW_2
	var_334_int = 510502; // 0xab4 PushI
	SetMessage(var_334_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_335_int = 510504; // 0xab9 PushI
	var_336_int = -1; // 0xaba PushI
	var_337_int = 11586; // 0xabb PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xabc TObjFunc
	var_338_int = 510505; // 0xabe PushI
	var_339_int = 11588; // 0xabf PushI
	var_340_int = 11587; // 0xac0 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0xac1 TObjFunc
	return 0; // 0xac3 Return
	
Label_2756:
	var_341_int = 11588; // 0xac4 PushI
	var_342_bool = var_36_bool == var_341_int; // 0xac5 Eq
	if(var_342_bool == 0) goto Label_2779; // 0xac6 JumpB
	var_343_string = ""; // 0xac7 PushV
	var_343_string = "Neutral"; // 0xac8 MovS
	func_2463(var_37_cvector, var_343_string); // 0xac9 NEW_2
	var_344_int = 510506; // 0xacb PushI
	SetMessage(var_344_int); // 0xacc TObjFunc
	ClearReplies(); // 0xace TObjFunc
	var_345_int = 510508; // 0xad0 PushI
	var_346_int = -1; // 0xad1 PushI
	var_347_int = 11590; // 0xad2 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xad3 TObjFunc
	var_348_int = 510507; // 0xad5 PushI
	var_349_int = -1; // 0xad6 PushI
	var_350_int = 11589; // 0xad7 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xad8 TObjFunc
	return 0; // 0xada Return
	
Label_2779:
	var_351_int = 16679; // 0xadb PushI
	var_352_bool = var_36_bool == var_351_int; // 0xadc Eq
	if(var_352_bool == 0) goto Label_2797; // 0xadd JumpB
	var_353_string = ""; // 0xade PushV
	var_353_string = "Rage"; // 0xadf MovS
	func_2463(var_37_cvector, var_353_string); // 0xae0 NEW_2
	var_354_int = 515644; // 0xae2 PushI
	SetMessage(var_354_int); // 0xae3 TObjFunc
	ClearReplies(); // 0xae5 TObjFunc
	var_355_int = 515645; // 0xae7 PushI
	var_356_int = -1; // 0xae8 PushI
	var_357_int = 16680; // 0xae9 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xaea TObjFunc
	return 0; // 0xaec Return
	
Label_2797:
	var_358_int = 11594; // 0xaed PushI
	var_359_bool = var_36_bool == var_358_int; // 0xaee Eq
	if(var_359_bool == 0) goto Label_2820; // 0xaef JumpB
	var_360_string = ""; // 0xaf0 PushV
	var_360_string = "Neutral"; // 0xaf1 MovS
	func_2463(var_37_cvector, var_360_string); // 0xaf2 NEW_2
	var_361_int = 510512; // 0xaf4 PushI
	SetMessage(var_361_int); // 0xaf5 TObjFunc
	ClearReplies(); // 0xaf7 TObjFunc
	var_362_int = 510513; // 0xaf9 PushI
	var_363_int = 11596; // 0xafa PushI
	var_364_int = 11595; // 0xafb PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xafc TObjFunc
	var_365_int = 510520; // 0xafe PushI
	var_366_int = 11598; // 0xaff PushI
	var_367_int = 11602; // 0xb00 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xb01 TObjFunc
	return 0; // 0xb03 Return
	
Label_2820:
	var_368_int = 11596; // 0xb04 PushI
	var_369_bool = var_36_bool == var_368_int; // 0xb05 Eq
	if(var_369_bool == 0) goto Label_2843; // 0xb06 JumpB
	var_370_string = ""; // 0xb07 PushV
	var_370_string = "Neutral"; // 0xb08 MovS
	func_2463(var_37_cvector, var_370_string); // 0xb09 NEW_2
	var_371_int = 510514; // 0xb0b PushI
	SetMessage(var_371_int); // 0xb0c TObjFunc
	ClearReplies(); // 0xb0e TObjFunc
	var_372_int = 510515; // 0xb10 PushI
	var_373_int = 11598; // 0xb11 PushI
	var_374_int = 11597; // 0xb12 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xb13 TObjFunc
	var_375_int = 515650; // 0xb15 PushI
	var_376_int = 11598; // 0xb16 PushI
	var_377_int = 16685; // 0xb17 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xb18 TObjFunc
	return 0; // 0xb1a Return
	
Label_2843:
	var_378_int = 11598; // 0xb1b PushI
	var_379_bool = var_36_bool == var_378_int; // 0xb1c Eq
	if(var_379_bool == 0) goto Label_2866; // 0xb1d JumpB
	var_380_string = ""; // 0xb1e PushV
	var_380_string = "Neutral"; // 0xb1f MovS
	func_2463(var_37_cvector, var_380_string); // 0xb20 NEW_2
	var_381_int = 510516; // 0xb22 PushI
	SetMessage(var_381_int); // 0xb23 TObjFunc
	ClearReplies(); // 0xb25 TObjFunc
	var_382_int = 511550; // 0xb27 PushI
	var_383_int = 12745; // 0xb28 PushI
	var_384_int = 12744; // 0xb29 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xb2a TObjFunc
	var_385_int = 510519; // 0xb2c PushI
	var_386_int = -1; // 0xb2d PushI
	var_387_int = 11601; // 0xb2e PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0xb2f TObjFunc
	return 0; // 0xb31 Return
	
Label_2866:
	var_388_int = 12745; // 0xb32 PushI
	var_389_bool = var_36_bool == var_388_int; // 0xb33 Eq
	if(var_389_bool == 0) goto Label_2884; // 0xb34 JumpB
	var_390_string = ""; // 0xb35 PushV
	var_390_string = "Neutral"; // 0xb36 MovS
	func_2463(var_37_cvector, var_390_string); // 0xb37 NEW_2
	var_391_int = 511551; // 0xb39 PushI
	SetMessage(var_391_int); // 0xb3a TObjFunc
	ClearReplies(); // 0xb3c TObjFunc
	var_392_int = 511552; // 0xb3e PushI
	var_393_int = 12747; // 0xb3f PushI
	var_394_int = 12746; // 0xb40 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xb41 TObjFunc
	return 0; // 0xb43 Return
	
Label_2884:
	var_395_int = 12747; // 0xb44 PushI
	var_396_bool = var_36_bool == var_395_int; // 0xb45 Eq
	if(var_396_bool == 0) goto Label_2907; // 0xb46 JumpB
	var_397_string = ""; // 0xb47 PushV
	var_397_string = "Neutral"; // 0xb48 MovS
	func_2463(var_37_cvector, var_397_string); // 0xb49 NEW_2
	var_398_int = 511553; // 0xb4b PushI
	SetMessage(var_398_int); // 0xb4c TObjFunc
	ClearReplies(); // 0xb4e TObjFunc
	var_399_int = 511554; // 0xb50 PushI
	var_400_int = 12749; // 0xb51 PushI
	var_401_int = 12748; // 0xb52 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xb53 TObjFunc
	var_402_int = 510518; // 0xb55 PushI
	var_403_int = -1; // 0xb56 PushI
	var_404_int = 11600; // 0xb57 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xb58 TObjFunc
	return 0; // 0xb5a Return
	
Label_2907:
	var_405_int = 12749; // 0xb5b PushI
	var_406_bool = var_36_bool == var_405_int; // 0xb5c Eq
	if(var_406_bool == 0) goto Label_2925; // 0xb5d JumpB
	var_407_string = ""; // 0xb5e PushV
	var_407_string = "Neutral"; // 0xb5f MovS
	func_2463(var_37_cvector, var_407_string); // 0xb60 NEW_2
	var_408_int = 511555; // 0xb62 PushI
	SetMessage(var_408_int); // 0xb63 TObjFunc
	ClearReplies(); // 0xb65 TObjFunc
	var_409_int = 510517; // 0xb67 PushI
	var_410_int = -1; // 0xb68 PushI
	var_411_int = 11599; // 0xb69 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xb6a TObjFunc
	return 0; // 0xb6c Return
	
Label_2925:
	var_412_int = 16625; // 0xb6d PushI
	var_413_bool = var_36_bool == var_412_int; // 0xb6e Eq
	if(var_413_bool == 0) goto Label_2928; // 0xb6f JumpB
	
Label_2928:
	var_414_int = 16627; // 0xb70 PushI
	var_415_bool = var_36_bool == var_414_int; // 0xb71 Eq
	if(var_415_bool == 0) goto Label_2946; // 0xb72 JumpB
	var_416_string = ""; // 0xb73 PushV
	var_416_string = "Confusion"; // 0xb74 MovS
	func_2463(var_37_cvector, var_416_string); // 0xb75 NEW_2
	var_417_int = 515601; // 0xb77 PushI
	SetMessage(var_417_int); // 0xb78 TObjFunc
	ClearReplies(); // 0xb7a TObjFunc
	var_418_int = 515602; // 0xb7c PushI
	var_419_int = 12722; // 0xb7d PushI
	var_420_int = 16628; // 0xb7e PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xb7f TObjFunc
	return 0; // 0xb81 Return
	
Label_2946:
	var_421_int = 12722; // 0xb82 PushI
	var_422_bool = var_36_bool == var_421_int; // 0xb83 Eq
	if(var_422_bool == 0) goto Label_2969; // 0xb84 JumpB
	var_423_string = ""; // 0xb85 PushV
	var_423_string = "Rage"; // 0xb86 MovS
	func_2463(var_37_cvector, var_423_string); // 0xb87 NEW_2
	var_424_int = 511529; // 0xb89 PushI
	SetMessage(var_424_int); // 0xb8a TObjFunc
	ClearReplies(); // 0xb8c TObjFunc
	var_425_int = 511530; // 0xb8e PushI
	var_426_int = 11554; // 0xb8f PushI
	var_427_int = 12723; // 0xb90 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xb91 TObjFunc
	var_428_int = 515603; // 0xb93 PushI
	var_429_int = 16631; // 0xb94 PushI
	var_430_int = 16630; // 0xb95 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xb96 TObjFunc
	return 0; // 0xb98 Return
	
Label_2969:
	var_431_int = 16631; // 0xb99 PushI
	var_432_bool = var_36_bool == var_431_int; // 0xb9a Eq
	if(var_432_bool == 0) goto Label_2987; // 0xb9b JumpB
	var_433_string = ""; // 0xb9c PushV
	var_433_string = "Confusion"; // 0xb9d MovS
	func_2463(var_37_cvector, var_433_string); // 0xb9e NEW_2
	var_434_int = 515604; // 0xba0 PushI
	SetMessage(var_434_int); // 0xba1 TObjFunc
	ClearReplies(); // 0xba3 TObjFunc
	var_435_int = 515605; // 0xba5 PushI
	var_436_int = 16633; // 0xba6 PushI
	var_437_int = 16632; // 0xba7 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xba8 TObjFunc
	return 0; // 0xbaa Return
	
Label_2987:
	var_438_int = 16633; // 0xbab PushI
	var_439_bool = var_36_bool == var_438_int; // 0xbac Eq
	if(var_439_bool == 0) goto Label_3010; // 0xbad JumpB
	var_440_string = ""; // 0xbae PushV
	var_440_string = "Warning"; // 0xbaf MovS
	func_2463(var_37_cvector, var_440_string); // 0xbb0 NEW_2
	var_441_int = 515606; // 0xbb2 PushI
	SetMessage(var_441_int); // 0xbb3 TObjFunc
	ClearReplies(); // 0xbb5 TObjFunc
	var_442_int = 515607; // 0xbb7 PushI
	var_443_int = 11554; // 0xbb8 PushI
	var_444_int = 16634; // 0xbb9 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xbba TObjFunc
	var_445_int = 515608; // 0xbbc PushI
	var_446_int = 11554; // 0xbbd PushI
	var_447_int = 16636; // 0xbbe PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xbbf TObjFunc
	return 0; // 0xbc1 Return
	
Label_3010:
	var_448_int = 11554; // 0xbc2 PushI
	var_449_bool = var_36_bool == var_448_int; // 0xbc3 Eq
	if(var_449_bool == 0) goto Label_3028; // 0xbc4 JumpB
	var_450_string = ""; // 0xbc5 PushV
	var_450_string = "Warning"; // 0xbc6 MovS
	func_2463(var_37_cvector, var_450_string); // 0xbc7 NEW_2
	var_451_int = 510476; // 0xbc9 PushI
	SetMessage(var_451_int); // 0xbca TObjFunc
	ClearReplies(); // 0xbcc TObjFunc
	var_452_int = 510477; // 0xbce PushI
	var_453_int = 11556; // 0xbcf PushI
	var_454_int = 11555; // 0xbd0 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xbd1 TObjFunc
	return 0; // 0xbd3 Return
	
Label_3028:
	var_455_int = 11556; // 0xbd4 PushI
	var_456_bool = var_36_bool == var_455_int; // 0xbd5 Eq
	if(var_456_bool == 0) goto Label_3051; // 0xbd6 JumpB
	var_457_string = ""; // 0xbd7 PushV
	var_457_string = "Warning"; // 0xbd8 MovS
	func_2463(var_37_cvector, var_457_string); // 0xbd9 NEW_2
	var_458_int = 510478; // 0xbdb PushI
	SetMessage(var_458_int); // 0xbdc TObjFunc
	ClearReplies(); // 0xbde TObjFunc
	var_459_int = 510479; // 0xbe0 PushI
	var_460_int = 11558; // 0xbe1 PushI
	var_461_int = 11557; // 0xbe2 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xbe3 TObjFunc
	var_462_int = 515610; // 0xbe5 PushI
	var_463_int = 16640; // 0xbe6 PushI
	var_464_int = 16639; // 0xbe7 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0xbe8 TObjFunc
	return 0; // 0xbea Return
	
Label_3051:
	var_465_int = 16640; // 0xbeb PushI
	var_466_bool = var_36_bool == var_465_int; // 0xbec Eq
	if(var_466_bool == 0) goto Label_3074; // 0xbed JumpB
	var_467_string = ""; // 0xbee PushV
	var_467_string = "Rage"; // 0xbef MovS
	func_2463(var_37_cvector, var_467_string); // 0xbf0 NEW_2
	var_468_int = 515611; // 0xbf2 PushI
	SetMessage(var_468_int); // 0xbf3 TObjFunc
	ClearReplies(); // 0xbf5 TObjFunc
	var_469_int = 515614; // 0xbf7 PushI
	var_470_int = 16644; // 0xbf8 PushI
	var_471_int = 16643; // 0xbf9 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0xbfa TObjFunc
	var_472_int = 515612; // 0xbfc PushI
	var_473_int = 16642; // 0xbfd PushI
	var_474_int = 16641; // 0xbfe PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0xbff TObjFunc
	return 0; // 0xc01 Return
	
Label_3074:
	var_475_int = 16642; // 0xc02 PushI
	var_476_bool = var_36_bool == var_475_int; // 0xc03 Eq
	if(var_476_bool == 0) goto Label_3092; // 0xc04 JumpB
	var_477_string = ""; // 0xc05 PushV
	var_477_string = "Neutral"; // 0xc06 MovS
	func_2463(var_37_cvector, var_477_string); // 0xc07 NEW_2
	var_478_int = 515613; // 0xc09 PushI
	SetMessage(var_478_int); // 0xc0a TObjFunc
	ClearReplies(); // 0xc0c TObjFunc
	var_479_int = 515616; // 0xc0e PushI
	var_480_int = 16644; // 0xc0f PushI
	var_481_int = 16645; // 0xc10 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0xc11 TObjFunc
	return 0; // 0xc13 Return
	
Label_3092:
	var_482_int = 16644; // 0xc14 PushI
	var_483_bool = var_36_bool == var_482_int; // 0xc15 Eq
	if(var_483_bool == 0) goto Label_3115; // 0xc16 JumpB
	var_484_string = ""; // 0xc17 PushV
	var_484_string = "Warning"; // 0xc18 MovS
	func_2463(var_37_cvector, var_484_string); // 0xc19 NEW_2
	var_485_int = 515615; // 0xc1b PushI
	SetMessage(var_485_int); // 0xc1c TObjFunc
	ClearReplies(); // 0xc1e TObjFunc
	var_486_int = 515618; // 0xc20 PushI
	var_487_int = 11558; // 0xc21 PushI
	var_488_int = 16648; // 0xc22 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0xc23 TObjFunc
	var_489_int = 515617; // 0xc25 PushI
	var_490_int = -1; // 0xc26 PushI
	var_491_int = 16647; // 0xc27 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0xc28 TObjFunc
	return 0; // 0xc2a Return
	
Label_3115:
	var_492_int = 11558; // 0xc2b PushI
	var_493_bool = var_36_bool == var_492_int; // 0xc2c Eq
	if(var_493_bool == 0) goto Label_3138; // 0xc2d JumpB
	var_494_string = ""; // 0xc2e PushV
	var_494_string = "Confusion"; // 0xc2f MovS
	func_2463(var_37_cvector, var_494_string); // 0xc30 NEW_2
	var_495_int = 510480; // 0xc32 PushI
	SetMessage(var_495_int); // 0xc33 TObjFunc
	ClearReplies(); // 0xc35 TObjFunc
	var_496_int = 515623; // 0xc37 PushI
	var_497_int = 16655; // 0xc38 PushI
	var_498_int = 16654; // 0xc39 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0xc3a TObjFunc
	var_499_int = 515628; // 0xc3c PushI
	var_500_int = 16661; // 0xc3d PushI
	var_501_int = 16660; // 0xc3e PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0xc3f TObjFunc
	return 0; // 0xc41 Return
	
Label_3138:
	var_502_int = 16661; // 0xc42 PushI
	var_503_bool = var_36_bool == var_502_int; // 0xc43 Eq
	if(var_503_bool == 0) goto Label_3156; // 0xc44 JumpB
	var_504_string = ""; // 0xc45 PushV
	var_504_string = "Confusion"; // 0xc46 MovS
	func_2463(var_37_cvector, var_504_string); // 0xc47 NEW_2
	var_505_int = 515629; // 0xc49 PushI
	SetMessage(var_505_int); // 0xc4a TObjFunc
	ClearReplies(); // 0xc4c TObjFunc
	var_506_int = 515630; // 0xc4e PushI
	var_507_int = 16655; // 0xc4f PushI
	var_508_int = 16662; // 0xc50 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0xc51 TObjFunc
	return 0; // 0xc53 Return
	
Label_3156:
	var_509_int = 16655; // 0xc54 PushI
	var_510_bool = var_36_bool == var_509_int; // 0xc55 Eq
	if(var_510_bool == 0) goto Label_3179; // 0xc56 JumpB
	var_511_string = ""; // 0xc57 PushV
	var_511_string = "Confusion"; // 0xc58 MovS
	func_2463(var_37_cvector, var_511_string); // 0xc59 NEW_2
	var_512_int = 515624; // 0xc5b PushI
	SetMessage(var_512_int); // 0xc5c TObjFunc
	ClearReplies(); // 0xc5e TObjFunc
	var_513_int = 510481; // 0xc60 PushI
	var_514_int = 11560; // 0xc61 PushI
	var_515_int = 11559; // 0xc62 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xc63 TObjFunc
	var_516_int = 515626; // 0xc65 PushI
	var_517_int = 16665; // 0xc66 PushI
	var_518_int = 16657; // 0xc67 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0xc68 TObjFunc
	return 0; // 0xc6a Return
	
Label_3179:
	var_519_int = 16665; // 0xc6b PushI
	var_520_bool = var_36_bool == var_519_int; // 0xc6c Eq
	if(var_520_bool == 0) goto Label_3197; // 0xc6d JumpB
	var_521_string = ""; // 0xc6e PushV
	var_521_string = "Rage"; // 0xc6f MovS
	func_2463(var_37_cvector, var_521_string); // 0xc70 NEW_2
	var_522_int = 515632; // 0xc72 PushI
	SetMessage(var_522_int); // 0xc73 TObjFunc
	ClearReplies(); // 0xc75 TObjFunc
	var_523_int = 515633; // 0xc77 PushI
	var_524_int = 11560; // 0xc78 PushI
	var_525_int = 16666; // 0xc79 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xc7a TObjFunc
	return 0; // 0xc7c Return
	
Label_3197:
	var_526_int = 11560; // 0xc7d PushI
	var_527_bool = var_36_bool == var_526_int; // 0xc7e Eq
	if(var_527_bool == 0) goto Label_3225; // 0xc7f JumpB
	var_528_string = ""; // 0xc80 PushV
	var_528_string = "Confusion"; // 0xc81 MovS
	func_2463(var_37_cvector, var_528_string); // 0xc82 NEW_2
	var_529_int = 510482; // 0xc84 PushI
	SetMessage(var_529_int); // 0xc85 TObjFunc
	ClearReplies(); // 0xc87 TObjFunc
	var_530_int = 510483; // 0xc89 PushI
	var_531_int = 11562; // 0xc8a PushI
	var_532_int = 11561; // 0xc8b PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0xc8c TObjFunc
	var_533_int = 510494; // 0xc8e PushI
	var_534_int = 16650; // 0xc8f PushI
	var_535_int = 11572; // 0xc90 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0xc91 TObjFunc
	var_536_int = 515627; // 0xc93 PushI
	var_537_int = 16650; // 0xc94 PushI
	var_538_int = 16658; // 0xc95 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0xc96 TObjFunc
	return 0; // 0xc98 Return
	
Label_3225:
	var_539_int = 16650; // 0xc99 PushI
	var_540_bool = var_36_bool == var_539_int; // 0xc9a Eq
	if(var_540_bool == 0) goto Label_3243; // 0xc9b JumpB
	var_541_string = ""; // 0xc9c PushV
	var_541_string = "Warning"; // 0xc9d MovS
	func_2463(var_37_cvector, var_541_string); // 0xc9e NEW_2
	var_542_int = 515619; // 0xca0 PushI
	SetMessage(var_542_int); // 0xca1 TObjFunc
	ClearReplies(); // 0xca3 TObjFunc
	var_543_int = 515620; // 0xca5 PushI
	var_544_int = 16652; // 0xca6 PushI
	var_545_int = 16651; // 0xca7 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0xca8 TObjFunc
	return 0; // 0xcaa Return
	
Label_3243:
	var_546_int = 16652; // 0xcab PushI
	var_547_bool = var_36_bool == var_546_int; // 0xcac Eq
	if(var_547_bool == 0) goto Label_3261; // 0xcad JumpB
	var_548_string = ""; // 0xcae PushV
	var_548_string = "Warning"; // 0xcaf MovS
	func_2463(var_37_cvector, var_548_string); // 0xcb0 NEW_2
	var_549_int = 515621; // 0xcb2 PushI
	SetMessage(var_549_int); // 0xcb3 TObjFunc
	ClearReplies(); // 0xcb5 TObjFunc
	var_550_int = 510489; // 0xcb7 PushI
	var_551_int = 11568; // 0xcb8 PushI
	var_552_int = 11567; // 0xcb9 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0xcba TObjFunc
	return 0; // 0xcbc Return
	
Label_3261:
	var_553_int = 11568; // 0xcbd PushI
	var_554_bool = var_36_bool == var_553_int; // 0xcbe Eq
	if(var_554_bool == 0) goto Label_3284; // 0xcbf JumpB
	var_555_string = ""; // 0xcc0 PushV
	var_555_string = "Confusion"; // 0xcc1 MovS
	func_2463(var_37_cvector, var_555_string); // 0xcc2 NEW_2
	var_556_int = 510490; // 0xcc4 PushI
	SetMessage(var_556_int); // 0xcc5 TObjFunc
	ClearReplies(); // 0xcc7 TObjFunc
	var_557_int = 510491; // 0xcc9 PushI
	var_558_int = -1; // 0xcca PushI
	var_559_int = 11569; // 0xccb PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0xccc TObjFunc
	var_560_int = 515655; // 0xcce PushI
	var_561_int = -1; // 0xccf PushI
	var_562_int = 16691; // 0xcd0 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0xcd1 TObjFunc
	return 0; // 0xcd3 Return
	
Label_3284:
	var_563_int = 11562; // 0xcd4 PushI
	var_564_bool = var_36_bool == var_563_int; // 0xcd5 Eq
	if(var_564_bool == 0) goto Label_3312; // 0xcd6 JumpB
	var_565_string = ""; // 0xcd7 PushV
	var_565_string = "Neutral"; // 0xcd8 MovS
	func_2463(var_37_cvector, var_565_string); // 0xcd9 NEW_2
	var_566_int = 510484; // 0xcdb PushI
	SetMessage(var_566_int); // 0xcdc TObjFunc
	ClearReplies(); // 0xcde TObjFunc
	var_567_int = 515635; // 0xce0 PushI
	var_568_int = 16670; // 0xce1 PushI
	var_569_int = 16669; // 0xce2 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0xce3 TObjFunc
	var_570_int = 515641; // 0xce5 PushI
	var_571_int = 16676; // 0xce6 PushI
	var_572_int = 16675; // 0xce7 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0xce8 TObjFunc
	var_573_int = 510486; // 0xcea PushI
	var_574_int = 11565; // 0xceb PushI
	var_575_int = 11564; // 0xcec PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0xced TObjFunc
	return 0; // 0xcef Return
	
Label_3312:
	var_576_int = 11565; // 0xcf0 PushI
	var_577_bool = var_36_bool == var_576_int; // 0xcf1 Eq
	if(var_577_bool == 0) goto Label_3335; // 0xcf2 JumpB
	var_578_string = ""; // 0xcf3 PushV
	var_578_string = "Rage"; // 0xcf4 MovS
	func_2463(var_37_cvector, var_578_string); // 0xcf5 NEW_2
	var_579_int = 510487; // 0xcf7 PushI
	SetMessage(var_579_int); // 0xcf8 TObjFunc
	ClearReplies(); // 0xcfa TObjFunc
	var_580_int = 510488; // 0xcfc PushI
	var_581_int = -1; // 0xcfd PushI
	var_582_int = 11566; // 0xcfe PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0xcff TObjFunc
	var_583_int = 515643; // 0xd01 PushI
	var_584_int = -1; // 0xd02 PushI
	var_585_int = 16678; // 0xd03 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0xd04 TObjFunc
	return 0; // 0xd06 Return
	
Label_3335:
	var_586_int = 16676; // 0xd07 PushI
	var_587_bool = var_36_bool == var_586_int; // 0xd08 Eq
	if(var_587_bool == 0) goto Label_3353; // 0xd09 JumpB
	var_588_string = ""; // 0xd0a PushV
	var_588_string = "Rage"; // 0xd0b MovS
	func_2463(var_37_cvector, var_588_string); // 0xd0c NEW_2
	var_589_int = 515642; // 0xd0e PushI
	SetMessage(var_589_int); // 0xd0f TObjFunc
	ClearReplies(); // 0xd11 TObjFunc
	var_590_int = 515637; // 0xd13 PushI
	var_591_int = 16672; // 0xd14 PushI
	var_592_int = 16671; // 0xd15 PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0xd16 TObjFunc
	return 0; // 0xd18 Return
	
Label_3353:
	var_593_int = 16672; // 0xd19 PushI
	var_594_bool = var_36_bool == var_593_int; // 0xd1a Eq
	if(var_594_bool == 0) goto Label_3376; // 0xd1b JumpB
	var_595_string = ""; // 0xd1c PushV
	var_595_string = "Warning"; // 0xd1d MovS
	func_2463(var_37_cvector, var_595_string); // 0xd1e NEW_2
	var_596_int = 515638; // 0xd20 PushI
	SetMessage(var_596_int); // 0xd21 TObjFunc
	ClearReplies(); // 0xd23 TObjFunc
	var_597_int = 515640; // 0xd25 PushI
	var_598_int = 16670; // 0xd26 PushI
	var_599_int = 16674; // 0xd27 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0xd28 TObjFunc
	var_600_int = 515639; // 0xd2a PushI
	var_601_int = -1; // 0xd2b PushI
	var_602_int = 16673; // 0xd2c PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0xd2d TObjFunc
	return 0; // 0xd2f Return
	
Label_3376:
	var_603_int = 16670; // 0xd30 PushI
	var_604_bool = var_36_bool == var_603_int; // 0xd31 Eq
	if(var_604_bool == 0) goto Label_3394; // 0xd32 JumpB
	var_605_string = ""; // 0xd33 PushV
	var_605_string = "Neutral"; // 0xd34 MovS
	func_2463(var_37_cvector, var_605_string); // 0xd35 NEW_2
	var_606_int = 515636; // 0xd37 PushI
	SetMessage(var_606_int); // 0xd38 TObjFunc
	ClearReplies(); // 0xd3a TObjFunc
	var_607_int = 510485; // 0xd3c PushI
	var_608_int = -1; // 0xd3d PushI
	var_609_int = 11563; // 0xd3e PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0xd3f TObjFunc
	return 0; // 0xd41 Return
	
Label_3394:
	var_3_string = 1; // 0xd42 TMovB
	var_610_bool = 0; // 0xd43 PushV
	func_5040(var_610_bool); // 0xd44 NEW_2
	if(var_610_bool == 0) goto Label_3402; // 0xd46 JumpB
	lshStopAnimation(); // 0xd47 Func
	goto Label_3404; // 0xd49 Jump
	
Label_3404:
	return 0; // 0xd4c Return
	
Label_3402:
	StopAnimation(); // 0xd4a Func
	
Label_3406:
	return 0; // 0xd4e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xe05 PushI
	if(var_38_int == 0) goto Label_3755; // 0xe06 JumpB
	func_4868(); // 0xe08 NEW_2
	var_40_int = 12312; // 0xe0a PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xe0b Eq
	if(var_41_bool == 0) goto Label_3602; // 0xe0c JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xe0d PushV
	var_42_object = var_1_object; // 0xe0e MovT
	var_43_object = var_0_object; // 0xe0f MovT
	func_5089(); // 0xe10 NEW_2
	
Label_3602:
	var_46_int = 12313; // 0xe12 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0xe13 Eq
	if(var_47_bool == 0) goto Label_3610; // 0xe14 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xe15 PushV
	var_48_object = var_1_object; // 0xe16 MovT
	var_49_object = var_0_object; // 0xe17 MovT
	func_5095(); // 0xe18 NEW_2
	
Label_3610:
	var_52_int = 12315; // 0xe1a PushI
	var_53_bool = var_37_cvector == var_52_int; // 0xe1b Eq
	if(var_53_bool == 0) goto Label_3623; // 0xe1c JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0xe1d PushV
	var_54_object = var_1_object; // 0xe1e MovT
	var_55_object = var_0_object; // 0xe1f MovT
	func_5078(var_55_object); // 0xe20 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0xe22 PushV
	var_78_object = var_1_object; // 0xe23 MovT
	var_79_object = var_0_object; // 0xe24 MovT
	func_5118(); // 0xe25 NEW_2
	
Label_3623:
	var_82_int = 12311; // 0xe27 PushI
	var_83_bool = var_36_bool == var_82_int; // 0xe28 Eq
	if(var_83_bool == 0) goto Label_3666; // 0xe29 JumpB
	var_84_string = ""; // 0xe2a PushV
	var_84_string = "Neutral"; // 0xe2b MovS
	func_3566(var_37_cvector, var_84_string); // 0xe2c NEW_2
	var_101_int = 511122; // 0xe2e PushI
	SetMessage(var_101_int); // 0xe2f TObjFunc
	ClearReplies(); // 0xe31 TObjFunc
	var_102_bool = 0; var_103_object = Obj(); // 0xe33 PushV
	var_103_object = var_1_object; // 0xe34 MovT
	func_5435(var_103_object); // 0xe35 NEW_2
	if(var_102_bool == 0) goto Label_3645; // 0xe37 JumpB
	var_110_int = 511123; // 0xe38 PushI
	var_111_int = 12316; // 0xe39 PushI
	var_112_int = 12312; // 0xe3a PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0xe3b TObjFunc
	
Label_3645:
	var_113_bool = 0; var_114_object = Obj(); // 0xe3d PushV
	var_114_object = var_1_object; // 0xe3e MovT
	func_5447(var_114_object); // 0xe3f NEW_2
	if(var_113_bool == 0) goto Label_3655; // 0xe41 JumpB
	var_119_int = 511124; // 0xe42 PushI
	var_120_int = 12314; // 0xe43 PushI
	var_121_int = 12313; // 0xe44 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xe45 TObjFunc
	
Label_3655:
	var_122_int = 536267; // 0xe47 PushI
	var_123_int = -1; // 0xe48 PushI
	var_124_int = 38051; // 0xe49 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xe4a TObjFunc
	var_125_int = 536268; // 0xe4c PushI
	var_126_int = -1; // 0xe4d PushI
	var_127_int = 38052; // 0xe4e PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xe4f TObjFunc
	return 0; // 0xe51 Return
	
Label_3666:
	var_128_int = 12314; // 0xe52 PushI
	var_129_bool = var_36_bool == var_128_int; // 0xe53 Eq
	if(var_129_bool == 0) goto Label_3684; // 0xe54 JumpB
	var_130_string = ""; // 0xe55 PushV
	var_130_string = "Warning"; // 0xe56 MovS
	func_3566(var_37_cvector, var_130_string); // 0xe57 NEW_2
	var_131_int = 511125; // 0xe59 PushI
	SetMessage(var_131_int); // 0xe5a TObjFunc
	ClearReplies(); // 0xe5c TObjFunc
	var_132_int = 511126; // 0xe5e PushI
	var_133_int = -1; // 0xe5f PushI
	var_134_int = 12315; // 0xe60 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xe61 TObjFunc
	return 0; // 0xe63 Return
	
Label_3684:
	var_135_int = 12316; // 0xe64 PushI
	var_136_bool = var_36_bool == var_135_int; // 0xe65 Eq
	if(var_136_bool == 0) goto Label_3702; // 0xe66 JumpB
	var_137_string = ""; // 0xe67 PushV
	var_137_string = "Neutral"; // 0xe68 MovS
	func_3566(var_37_cvector, var_137_string); // 0xe69 NEW_2
	var_138_int = 511127; // 0xe6b PushI
	SetMessage(var_138_int); // 0xe6c TObjFunc
	ClearReplies(); // 0xe6e TObjFunc
	var_139_int = 511128; // 0xe70 PushI
	var_140_int = 12318; // 0xe71 PushI
	var_141_int = 12317; // 0xe72 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xe73 TObjFunc
	return 0; // 0xe75 Return
	
Label_3702:
	var_142_int = 12318; // 0xe76 PushI
	var_143_bool = var_36_bool == var_142_int; // 0xe77 Eq
	if(var_143_bool == 0) goto Label_3720; // 0xe78 JumpB
	var_144_string = ""; // 0xe79 PushV
	var_144_string = "Neutral"; // 0xe7a MovS
	func_3566(var_37_cvector, var_144_string); // 0xe7b NEW_2
	var_145_int = 511129; // 0xe7d PushI
	SetMessage(var_145_int); // 0xe7e TObjFunc
	ClearReplies(); // 0xe80 TObjFunc
	var_146_int = 511130; // 0xe82 PushI
	var_147_int = 12320; // 0xe83 PushI
	var_148_int = 12319; // 0xe84 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xe85 TObjFunc
	return 0; // 0xe87 Return
	
Label_3720:
	var_149_int = 12320; // 0xe88 PushI
	var_150_bool = var_36_bool == var_149_int; // 0xe89 Eq
	if(var_150_bool == 0) goto Label_3743; // 0xe8a JumpB
	var_151_string = ""; // 0xe8b PushV
	var_151_string = "Warning"; // 0xe8c MovS
	func_3566(var_37_cvector, var_151_string); // 0xe8d NEW_2
	var_152_int = 511131; // 0xe8f PushI
	SetMessage(var_152_int); // 0xe90 TObjFunc
	ClearReplies(); // 0xe92 TObjFunc
	var_153_int = 511132; // 0xe94 PushI
	var_154_int = -1; // 0xe95 PushI
	var_155_int = 12321; // 0xe96 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xe97 TObjFunc
	var_156_int = 541854; // 0xe99 PushI
	var_157_int = -1; // 0xe9a PushI
	var_158_int = 44078; // 0xe9b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xe9c TObjFunc
	return 0; // 0xe9e Return
	
Label_3743:
	var_3_string = 1; // 0xe9f TMovB
	var_159_bool = 0; // 0xea0 PushV
	func_5040(var_159_bool); // 0xea1 NEW_2
	if(var_159_bool == 0) goto Label_3751; // 0xea3 JumpB
	lshStopAnimation(); // 0xea4 Func
	goto Label_3753; // 0xea6 Jump
	
Label_3753:
	return 0; // 0xea9 Return
	
Label_3751:
	StopAnimation(); // 0xea7 Func
	
Label_3755:
	return 0; // 0xeab Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xf76 PushI
	if(var_38_int == 0) goto Label_4107; // 0xf77 JumpB
	func_4868(); // 0xf79 NEW_2
	var_40_int = 13243; // 0xf7b PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xf7c Eq
	if(var_41_bool == 0) goto Label_3986; // 0xf7d JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xf7e PushV
	var_42_object = var_1_object; // 0xf7f MovT
	var_43_object = var_0_object; // 0xf80 MovT
	func_5353(); // 0xf81 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0xf83 PushV
	var_50_object = var_1_object; // 0xf84 MovT
	var_51_object = var_0_object; // 0xf85 MovT
	func_5366(var_51_object); // 0xf86 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xf88 PushV
	var_74_object = var_1_object; // 0xf89 MovT
	var_75_object = var_0_object; // 0xf8a MovT
	func_5042(); // 0xf8b NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0xf8d PushV
	var_78_object = var_1_object; // 0xf8e MovT
	var_79_object = var_0_object; // 0xf8f MovT
	func_5101(var_79_object); // 0xf90 NEW_2
	
Label_3986:
	var_84_int = 13238; // 0xf92 PushI
	var_85_bool = var_36_bool == var_84_int; // 0xf93 Eq
	if(var_85_bool == 0) goto Label_4049; // 0xf94 JumpB
	var_86_bool = 0; // 0xf95 PushV
	var_86_bool = 0; // 0xf96 MovB
	var_87_bool = 0; var_88_object = Obj(); // 0xf97 PushV
	var_88_object = var_1_object; // 0xf98 MovT
	func_5589(var_88_object); // 0xf99 NEW_2
	var_95_bool = var_87_bool == 0; // 0xf9b Not
	if(var_95_bool == 0) goto Label_4003; // 0xf9c JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0xf9d PushV
	var_97_object = var_1_object; // 0xf9e MovT
	func_5459(var_97_object); // 0xf9f NEW_2
	if(var_96_bool == 0) goto Label_4003; // 0xfa1 JumpB
	var_86_bool = 1; // 0xfa2 MovB
	
Label_4003:
	if(var_86_bool == 0) goto Label_4024; // 0xfa3 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xfa4 PushV
	var_102_object = var_1_object; // 0xfa5 MovT
	var_103_object = var_0_object; // 0xfa6 MovT
	func_5112(); // 0xfa7 NEW_2
	var_106_string = ""; // 0xfa9 PushV
	var_106_string = "Warning"; // 0xfaa MovS
	func_3935(var_37_cvector, var_106_string); // 0xfab NEW_2
	var_123_int = 512020; // 0xfad PushI
	SetMessage(var_123_int); // 0xfae TObjFunc
	ClearReplies(); // 0xfb0 TObjFunc
	var_124_int = 512021; // 0xfb2 PushI
	var_125_int = 13240; // 0xfb3 PushI
	var_126_int = 13239; // 0xfb4 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xfb5 TObjFunc
	return 0; // 0xfb7 Return
	
Label_4024:
	var_127_string = ""; // 0xfb8 PushV
	var_127_string = "Neutral"; // 0xfb9 MovS
	func_3935(var_37_cvector, var_127_string); // 0xfba NEW_2
	var_128_int = 513723; // 0xfbc PushI
	SetMessage(var_128_int); // 0xfbd TObjFunc
	ClearReplies(); // 0xfbf TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0xfc1 PushV
	var_130_object = var_1_object; // 0xfc2 MovT
	func_5589(var_130_object); // 0xfc3 NEW_2
	if(var_129_bool == 0) goto Label_4043; // 0xfc5 JumpB
	var_131_int = 541857; // 0xfc6 PushI
	var_132_int = -1; // 0xfc7 PushI
	var_133_int = 44082; // 0xfc8 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xfc9 TObjFunc
	
Label_4043:
	var_134_int = 513724; // 0xfcb PushI
	var_135_int = -1; // 0xfcc PushI
	var_136_int = 14990; // 0xfcd PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xfce TObjFunc
	return 0; // 0xfd0 Return
	
Label_4049:
	var_137_int = 13240; // 0xfd1 PushI
	var_138_bool = var_36_bool == var_137_int; // 0xfd2 Eq
	if(var_138_bool == 0) goto Label_4072; // 0xfd3 JumpB
	var_139_string = ""; // 0xfd4 PushV
	var_139_string = "Warning"; // 0xfd5 MovS
	func_3935(var_37_cvector, var_139_string); // 0xfd6 NEW_2
	var_140_int = 512022; // 0xfd8 PushI
	SetMessage(var_140_int); // 0xfd9 TObjFunc
	ClearReplies(); // 0xfdb TObjFunc
	var_141_int = 512023; // 0xfdd PushI
	var_142_int = 13242; // 0xfde PushI
	var_143_int = 13241; // 0xfdf PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xfe0 TObjFunc
	var_144_int = 541856; // 0xfe2 PushI
	var_145_int = 13242; // 0xfe3 PushI
	var_146_int = 44080; // 0xfe4 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xfe5 TObjFunc
	return 0; // 0xfe7 Return
	
Label_4072:
	var_147_int = 13242; // 0xfe8 PushI
	var_148_bool = var_36_bool == var_147_int; // 0xfe9 Eq
	if(var_148_bool == 0) goto Label_4095; // 0xfea JumpB
	var_149_string = ""; // 0xfeb PushV
	var_149_string = "Warning"; // 0xfec MovS
	func_3935(var_37_cvector, var_149_string); // 0xfed NEW_2
	var_150_int = 512024; // 0xfef PushI
	SetMessage(var_150_int); // 0xff0 TObjFunc
	ClearReplies(); // 0xff2 TObjFunc
	var_151_int = 512025; // 0xff4 PushI
	var_152_int = -1; // 0xff5 PushI
	var_153_int = 13243; // 0xff6 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xff7 TObjFunc
	var_154_int = 541855; // 0xff9 PushI
	var_155_int = -1; // 0xffa PushI
	var_156_int = 44079; // 0xffb PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xffc TObjFunc
	return 0; // 0xffe Return
	
Label_4095:
	var_3_string = 1; // 0xfff TMovB
	var_157_bool = 0; // 0x1000 PushV
	func_5040(var_157_bool); // 0x1001 NEW_2
	if(var_157_bool == 0) goto Label_4103; // 0x1003 JumpB
	lshStopAnimation(); // 0x1004 Func
	goto Label_4105; // 0x1006 Jump
	
Label_4105:
	return 0; // 0x1009 Return
	
Label_4103:
	StopAnimation(); // 0x1007 Func
	
Label_4107:
	return 0; // 0x100b Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0x10ae PushI
	if(var_38_int == 0) goto Label_4310; // 0x10af JumpB
	func_4868(); // 0x10b1 NEW_2
	var_40_int = 42551; // 0x10b3 PushI
	var_41_bool = var_36_int == var_40_int; // 0x10b4 Eq
	if(var_41_bool == 0) goto Label_4298; // 0x10b5 JumpB
	var_42_string = ""; // 0x10b6 PushV
	var_42_string = "Neutral"; // 0x10b7 MovS
	func_4247(var_37_cvector, var_42_string); // 0x10b8 NEW_2
	var_59_int = 540542; // 0x10ba PushI
	SetMessage(var_59_int); // 0x10bb TObjFunc
	ClearReplies(); // 0x10bd TObjFunc
	var_60_int = 540543; // 0x10bf PushI
	var_61_int = -1; // 0x10c0 PushI
	var_62_int = 42552; // 0x10c1 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x10c2 TObjFunc
	var_63_int = 540796; // 0x10c4 PushI
	var_64_int = -1; // 0x10c5 PushI
	var_65_int = 42845; // 0x10c6 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x10c7 TObjFunc
	return 0; // 0x10c9 Return
	
Label_4298:
	var_3_string = 1; // 0x10ca TMovB
	var_66_bool = 0; // 0x10cb PushV
	func_5040(var_66_bool); // 0x10cc NEW_2
	if(var_66_bool == 0) goto Label_4306; // 0x10ce JumpB
	lshStopAnimation(); // 0x10cf Func
	goto Label_4308; // 0x10d1 Jump
	
Label_4308:
	return 0; // 0x10d4 Return
	
Label_4306:
	StopAnimation(); // 0x10d2 Func
	
Label_4310:
	return 0; // 0x10d6 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0x1121 PushI
	var_38_bool = var_36_int == var_37_int; // 0x1122 Eq
	if(var_38_bool == 0) goto Label_4421; // 0x1123 JumpB
	func_4380(); // 0x1125 NEW_2
	var_40_bool = 0; // 0x1127 PushV
	var_40_bool = 0; // 0x1128 MovB
	var_41_bool = 0; // 0x1129 PushV
	func_4594(var_41_bool); // 0x112a NEW_2
	if(var_41_bool == 0) goto Label_4402; // 0x112c JumpB
	var_44_bool = 0; // 0x112d PushV
	func_4349(var_44_bool); // 0x112e NEW_2
	if(var_44_bool == 0) goto Label_4402; // 0x1130 JumpB
	var_40_bool = 1; // 0x1131 MovB
	
Label_4402:
	if(var_40_bool == 0) goto Label_4415; // 0x1132 JumpB
	var_61_bool = 0; // 0x1133 PushV
	func_4329(var_61_bool); // 0x1134 NEW_2
	if(var_61_bool == 0) goto Label_4414; // 0x1136 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x1137 PushV
	var_82_object = Obj(); // 0x1138 PushV
	func_4875(var_82_object); // 0x1139 NEW_2
	var_81_object = var_82_object; // 0x113a Mov
	func_4742(var_81_object); // 0x113c NEW_2
	
Label_4414:
	goto Label_4421; // 0x113e Jump
	
Label_4421:
	return 0; // 0x1145 Return
	
Label_4415:
	func_4344(var_36_int); // 0x1140 NEW_2
	func_4371(); // 0x1143 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4562(); // 0x1147 NEW_2
	func_4380(); // 0x114a NEW_2
	lshStopSpeech(); // 0x114c Func
	lshStopAnimation(); // 0x114e Func
	StopAsync(); // 0x1150 Func
	Hold(); // 0x1152 Func
	return 0; // 0x1154 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0x1155 Func
	func_4380(); // 0x1158 NEW_2
	var_37_string = ""; // 0x115a PushV
	var_37_string = "Neutral"; // 0x115b MovS
	func_4822(var_37_string); // 0x115c NEW_2
	func_4371(); // 0x115f NEW_2
	return 0; // 0x1161 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0x1163 Push
	if(var_37_bool == 0) goto Label_4457; // 0x1164 JumpB
	func_4371(); // 0x1166 NEW_2
	goto Label_4461; // 0x1168 Jump
	
Label_4461:
	return 0; // 0x116d Return
	
Label_4457:
	var_43_string = ""; // 0x1169 PushV
	var_43_string = "Neutral"; // 0x116a MovS
	func_4822(var_43_string); // 0x116b NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0x116e PushV
	IsOverrideActive(var_38_bool); // 0x116f Func
	var_39_bool = var_38_bool == 0; // 0x1171 Not
	if(var_39_bool == 0) goto Label_4490; // 0x1172 JumpB
	EventDisable(0); // 0x1173 EventDisable
	func_4562(); // 0x1175 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0x1177 PushV
	var_41_object = var_36_object; // 0x1178 Mov
	func_4585(var_41_object); // 0x1179 NEW_2
	EventEnable(0); // 0x117b EventEnable
	var_54_object = Obj(); // 0x117c PushV
	var_54_object = var_36_object; // 0x117d Mov
	func_5858(var_54_object); // 0x117e NEW_2
	var_860_string = ""; // 0x1180 PushV
	var_860_string = "Neutral"; // 0x1181 MovS
	func_4822(var_860_string); // 0x1182 NEW_2
	func_4380(); // 0x1185 NEW_2
	func_4371(); // 0x1188 NEW_2
	
Label_4490:
	return 2; // 0x118a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_4315(var_35_cvector); // 0x10d8 NEW_2
	return 0; // 0x10da Return
}


func_0(var_0_object, var_678_int, var_679_object)
{
	var_681_object = Obj(); var_682_bool = 0; var_683_int = 0; var_684_bool = 0; var_685_object = Obj(); var_686_bool = 0; var_687_int = 0; var_688_bool = 0; // 0x0 PushV
	var_0_object = var_679_object; // 0x1 TMov
	var_689_bool = 0; var_690_object = Obj(); var_691_float = 0; // 0x2 PushV
	var_690_object = var_679_object; // 0x3 Mov
	var_691_float = 70.0; // 0x4 MovF
	func_4599(var_690_object, var_691_float); // 0x5 NEW_2
	var_692_bool = var_689_bool == 0; // 0x7 Not
	if(var_692_bool == 0) goto Label_11; // 0x8 JumpB
	var_678_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_685_object); // 0xb Func
	var_693_int = 0; // 0xd PushV
	func_5034(var_693_int); // 0xe NEW_2
	SetNPCName(var_693_int); // 0x10 ObjFunc
	var_694_int = 0; // 0x12 PushV
	func_5032(var_694_int); // 0x13 NEW_2
	SetNPCDescription(var_694_int); // 0x15 ObjFunc
	var_695_string = ""; // 0x17 PushV
	func_5036(var_695_string); // 0x18 NEW_2
	SetPhoto(var_695_string); // 0x1a ObjFunc
	var_696_string = ""; // 0x1c PushV
	func_5038(var_696_string); // 0x1d NEW_2
	SetPhoto2(var_696_string); // 0x1f ObjFunc
	var_697_int = 0; // 0x21 PushV
	func_5841(var_697_int); // 0x22 NEW_2
	SetPlayerName(var_697_int); // 0x24 ObjFunc
	var_687_int = -1; // 0x26 MovI
	IsOverrideActive(var_686_bool); // 0x27 Func
	var_698_bool = var_686_bool; // 0x29 Push
	if(var_698_bool == 0) goto Label_45; // 0x2a JumpB
	var_678_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_685_object); // 0x2d Func
	var_699_bool = 0; var_700_object = Obj(); // 0x2f PushV
	var_701_object = Obj(); // 0x30 PushV
	func_4875(var_701_object); // 0x31 NEW_2
	var_700_object = var_701_object; // 0x32 Mov
	func_4684(var_699_bool, var_700_object); // 0x34 NEW_2
	var_702_object = Obj(); var_703_object = Obj(); // 0x36 PushV
	var_702_object = var_679_object; // 0x37 Mov
	var_703_object = var_685_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_704_object, var_705_object, var_706_string, var_707_bool, var_702_object, var_703_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_688_bool); // 0x3d ObjFunc
	
Label_63:
	var_741_bool = var_688_bool == 0; // 0x3f Not
	if(var_741_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_688_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_742_object = Obj(); // 0x46 PushV
	var_742_object = var_679_object; // 0x47 Mov
	func_4667(); // 0x48 NEW_2
	StopDialog(var_685_object); // 0x4a Func
	GetReturnValue(var_687_int); // 0x4c ObjFunc
	var_678_int = var_687_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_5377()
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0; // 0x1502 PushV
	var_90_object = Obj(); // 0x1503 PushV
	func_5791(var_90_object); // 0x1504 NEW_2
	var_87_object = var_90_object; // 0x1505 Mov
	var_88_string = "pt_map_maria"; // 0x1507 MovS
	var_89_float = 2; // 0x1508 MovI
	func_5808(var_87_object, var_88_string, var_89_float); // 0x1509 NEW_2
	var_110_object = Obj(); // 0x150b PushV
	func_5791(var_110_object); // 0x150c NEW_2
	ShowMap(var_110_object); // 0x150e ObjFunc
	return 0; // 0x1510 Return
}


func_5124()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1404 PushV
	var_50_string = "d3q01"; // 0x1405 PushS
	var_51_int = 1; // 0x1406 PushI
	SetVariable(var_50_string, var_51_int); // 0x1407 Func
	var_52_object = Obj(); // 0x1409 PushV
	func_5791(var_52_object); // 0x140a NEW_2
	var_49_object = var_52_object; // 0x140b Mov
	var_59_string = "d3q01RubinGotoAlexandr"; // 0x140d PushS
	var_60_string = "pt_map_alexandr"; // 0x140e PushS
	var_61_int = 1; // 0x140f PushI
	var_62_int = 511151; // 0x1410 PushI
	var_63_float = 0; // 0x1411 PushV
	func_4988(var_63_float); // 0x1412 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x1414 ObjFunc
	func_5672(); // 0x1417 NEW_2
	func_5685(); // 0x141a NEW_2
	return 2; // 0x141c Return
}


func_4868()
{
	var_39_bool = 0; // 0x1304 PushV
	func_5040(var_39_bool); // 0x1305 NEW_2
	if(var_39_bool == 0) goto Label_4874; // 0x1307 JumpB
	lshStopSpeech(); // 0x1308 Func
	
Label_4874:
	return 0; // 0x130a Return
}


func_4875(var_136_object)
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x130b PushV
	self(var_138_object); // 0x130c Func
	var_136_object = var_138_object; // 0x130e Mov
	return 2; // 0x130f Return
}


func_4108(var_0_object, var_804_int, var_805_object)
{
	var_807_object = Obj(); var_808_bool = 0; var_809_int = 0; var_810_bool = 0; var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; // 0x100c PushV
	var_0_object = var_805_object; // 0x100d TMov
	var_815_bool = 0; var_816_object = Obj(); var_817_float = 0; // 0x100e PushV
	var_816_object = var_805_object; // 0x100f Mov
	var_817_float = 70.0; // 0x1010 MovF
	func_4599(var_816_object, var_817_float); // 0x1011 NEW_2
	var_818_bool = var_815_bool == 0; // 0x1013 Not
	if(var_818_bool == 0) goto Label_4119; // 0x1014 JumpB
	var_804_int = -2; // 0x1015 MovI
	return 8; // 0x1016 Return
	
Label_4119:
	CreateDialog(var_811_object); // 0x1017 Func
	var_819_int = 0; // 0x1019 PushV
	func_5034(var_819_int); // 0x101a NEW_2
	SetNPCName(var_819_int); // 0x101c ObjFunc
	var_820_int = 0; // 0x101e PushV
	func_5032(var_820_int); // 0x101f NEW_2
	SetNPCDescription(var_820_int); // 0x1021 ObjFunc
	var_821_string = ""; // 0x1023 PushV
	func_5036(var_821_string); // 0x1024 NEW_2
	SetPhoto(var_821_string); // 0x1026 ObjFunc
	var_822_string = ""; // 0x1028 PushV
	func_5038(var_822_string); // 0x1029 NEW_2
	SetPhoto2(var_822_string); // 0x102b ObjFunc
	var_823_int = 0; // 0x102d PushV
	func_5841(var_823_int); // 0x102e NEW_2
	SetPlayerName(var_823_int); // 0x1030 ObjFunc
	var_813_int = -1; // 0x1032 MovI
	IsOverrideActive(var_812_bool); // 0x1033 Func
	var_824_bool = var_812_bool; // 0x1035 Push
	if(var_824_bool == 0) goto Label_4153; // 0x1036 JumpB
	var_804_int = -2; // 0x1037 MovI
	return 8; // 0x1038 Return
	
Label_4153:
	DoDialog(var_811_object); // 0x1039 Func
	var_825_bool = 0; var_826_object = Obj(); // 0x103b PushV
	var_827_object = Obj(); // 0x103c PushV
	func_4875(var_827_object); // 0x103d NEW_2
	var_826_object = var_827_object; // 0x103e Mov
	func_4684(var_825_bool, var_826_object); // 0x1040 NEW_2
	var_828_object = Obj(); var_829_object = Obj(); // 0x1042 PushV
	var_828_object = var_805_object; // 0x1043 Mov
	var_829_object = var_811_object; // 0x1044 Mov
	TaskCall(13); // 0x1045 TaskCall
	func_4189(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object); // 0x1046 NEW_2
	TaskReturn(); // 0x1047 TaskReturn
	IsDialogEnd(var_814_bool); // 0x1049 ObjFunc
	
Label_4171:
	var_858_bool = var_814_bool == 0; // 0x104b Not
	if(var_858_bool == 0) goto Label_4178; // 0x104c JumpB
	sync(); // 0x104d Func
	IsDialogEnd(var_814_bool); // 0x104f ObjFunc
	goto Label_4171; // 0x1051 Jump
	
Label_4178:
	var_859_object = Obj(); // 0x1052 PushV
	var_859_object = var_805_object; // 0x1053 Mov
	func_4667(); // 0x1054 NEW_2
	StopDialog(var_811_object); // 0x1056 Func
	GetReturnValue(var_813_int); // 0x1058 ObjFunc
	var_804_int = var_813_int; // 0x105a Mov
	return 8; // 0x105b Return
}


func_527(var_2_object, var_776_string)
{
	var_777_bool = 0; // 0x210 PushV
	func_5040(var_777_bool); // 0x211 NEW_2
	var_778_bool = var_777_bool == 0; // 0x213 Not
	if(var_778_bool == 0) goto Label_534; // 0x214 JumpB
	return 0; // 0x215 Return
	
Label_534:
	var_779_bool = var_776_string == var_2_object; // 0x216 Eq
	if(var_779_bool == 0) goto Label_537; // 0x217 JumpB
	return 0; // 0x218 Return
	
Label_537:
	var_780_string = ""; var_781_bool = 0; // 0x219 PushV
	var_780_string = var_776_string; // 0x21a Mov
	var_782_string = ""; // 0x21b PushS
	var_783_bool = var_776_string == var_782_string; // 0x21c Eq
	if(var_783_bool == 0) goto Label_544; // 0x21d JumpB
	var_781_bool = 0; // 0x21e MovB
	goto Label_545; // 0x21f Jump
	
Label_545:
	func_4838(var_780_string, var_781_bool); // 0x221 NEW_2
	var_2_object = var_776_string; // 0x223 TMov
	return 0; // 0x224 Return
	
Label_544:
	var_781_bool = 1; // 0x220 MovB
}


func_5393()
{
	var_248_string = "d3RubinVisit"; // 0x1512 PushS
	var_249_int = 1; // 0x1513 PushI
	SetVariable(var_248_string, var_249_int); // 0x1514 Func
	return 0; // 0x1516 Return
}


func_4881(var_101_cvector, var_102_cvector)
{
	var_104_float = 0; var_105_float = 0; // 0x1311 PushV
	var_106_int = var_102_cvector | var_102_cvector; // 0x1312 Or
	var_105_float = sqrt(var_106_int); // 0x1313 Sqrt2
	var_107_float = 0.0; // 0x1314 PushF
	var_108_bool = var_105_float < var_107_float; // 0x1315 LT
	if(var_108_bool == 0) goto Label_4889; // 0x1316 JumpB
	var_101_cvector = CVector(0.0, 0.0, 0.0); // 0x1317 MovV
	return 2; // 0x1318 Return
	
Label_4889:
	var_101_cvector = var_102_cvector / var_102_cvector; // 0x1319 Div2
	return 2; // 0x131a Return
}


func_4371()
{
	var_862_float = 0; var_863_float = 0; // 0x1113 PushV
	var_864_int = 8; // 0x1114 PushI
	var_865_int = 16; // 0x1115 PushI
	rand(var_863_float, var_864_int, var_865_int); // 0x1116 Func
	var_866_int = 10; // 0x1118 PushI
	SetTimer(var_866_int, var_863_float); // 0x1119 Func
	return 2; // 0x111b Return
}


func_5399()
{
	var_489_string = "d5RubinVisit"; // 0x1518 PushS
	var_490_int = 1; // 0x1519 PushI
	SetVariable(var_489_string, var_490_int); // 0x151a Func
	return 0; // 0x151c Return
}


func_5659()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x161b PushV
	var_64_int = 668; // 0x161c PushI
	var_65_int = 2; // 0x161d PushI
	var_66_int = 534122; // 0x161e PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x161f Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x1621 PushV
	var_68_object = var_63_object; // 0x1622 Mov
	var_69_int = 666; // 0x1623 MovI
	func_5763(var_67_bool, var_68_object, var_69_int); // 0x1624 NEW_2
	return 2; // 0x1626 Return
}


func_4891(var_234_int, var_235_string)
{
	var_236_int = 0; var_237_int = 0; // 0x131b PushV
	GetVariable(var_235_string, var_237_int); // 0x131c Func
	var_234_int = var_237_int; // 0x131e Mov
	return 2; // 0x131f Return
}


func_4380()
{
	var_861_int = 10; // 0x111c PushI
	KillTimer(var_861_int); // 0x111d Func
	return 0; // 0x111f Return
}


func_5150()
{
	var_44_string = "ood3Rubin1"; // 0x141f PushS
	var_45_int = 1; // 0x1420 PushI
	SetVariable(var_44_string, var_45_int); // 0x1421 Func
	return 0; // 0x1423 Return
}


func_5405()
{
	var_199_string = "ood5Rubin3"; // 0x151e PushS
	var_200_int = 1; // 0x151f PushI
	SetVariable(var_199_string, var_200_int); // 0x1520 Func
	return 0; // 0x1522 Return
}


func_4896(var_69_int, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x1320 PushV
	CreateIntVector(var_72_object); // 0x1321 Func
	add(var_69_int); // 0x1323 ObjFunc
	add(var_70_int); // 0x1325 ObjFunc
	var_73_int = 3; // 0x1327 PushI
	SendWorldWndMessage(var_73_int, var_72_object); // 0x1328 Func
	return 2; // 0x132a Return
}


func_5411(var_718_bool)
{
	var_720_int = 0; var_721_string = ""; // 0x1524 PushV
	var_721_string = "d10q02"; // 0x1525 MovS
	func_4891(var_720_int, var_721_string); // 0x1526 NEW_2
	var_722_int = 1; // 0x1528 PushI
	var_723_bool = var_720_int == var_722_int; // 0x1529 Eq
	if(var_723_bool == 0) goto Label_5421; // 0x152a JumpB
	var_718_bool = 1; // 0x152b MovB
	return 0; // 0x152c Return
	
Label_5421:
	var_718_bool = 0; // 0x152d MovB
	return 0; // 0x152e Return
}


func_5156()
{
	var_217_string = "ood3Rubin2"; // 0x1425 PushS
	var_218_int = 1; // 0x1426 PushI
	SetVariable(var_217_string, var_218_int); // 0x1427 Func
	return 0; // 0x1429 Return
}


func_5672()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1628 PushV
	var_68_int = 25; // 0x1629 PushI
	var_69_int = 1; // 0x162a PushI
	var_70_int = 503365; // 0x162b PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x162c Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x162e PushV
	var_72_object = var_67_object; // 0x162f Mov
	var_73_int = -1; // 0x1630 MovI
	func_5763(var_71_bool, var_72_object, var_73_int); // 0x1631 NEW_2
	return 2; // 0x1633 Return
}


func_5162()
{
	var_229_string = "ood3Rubin3"; // 0x142b PushS
	var_230_int = 1; // 0x142c PushI
	SetVariable(var_229_string, var_230_int); // 0x142d Func
	return 0; // 0x142f Return
}


func_4908(var_174_int, var_175_int)
{
	var_176_object = Obj(); var_177_object = Obj(); // 0x132c PushV
	CreateIntVector(var_177_object); // 0x132d Func
	add(var_174_int); // 0x132f ObjFunc
	add(var_175_int); // 0x1331 ObjFunc
	var_178_int = 4; // 0x1333 PushI
	SendWorldWndMessage(var_178_int, var_177_object); // 0x1334 Func
	return 2; // 0x1336 Return
}


func_5423(var_310_bool)
{
	var_312_int = 0; var_313_string = ""; // 0x1530 PushV
	var_313_string = "microscope_d3q01_blood"; // 0x1531 MovS
	func_4891(var_312_int, var_313_string); // 0x1532 NEW_2
	var_314_int = 0; // 0x1534 PushI
	var_315_bool = var_312_int != var_314_int; // 0x1535 Neq
	if(var_315_bool == 0) goto Label_5433; // 0x1536 JumpB
	var_310_bool = 1; // 0x1537 MovB
	return 0; // 0x1538 Return
	
Label_5433:
	var_310_bool = 0; // 0x1539 MovB
	return 0; // 0x153a Return
}


func_5168()
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0; // 0x1431 PushV
	var_102_object = Obj(); // 0x1432 PushV
	func_5791(var_102_object); // 0x1433 NEW_2
	var_99_object = var_102_object; // 0x1434 Mov
	var_100_string = "pt_map_alexandr"; // 0x1436 MovS
	var_101_float = 2; // 0x1437 MovI
	func_5808(var_99_object, var_100_string, var_101_float); // 0x1438 NEW_2
	var_122_object = Obj(); // 0x143a PushV
	func_5791(var_122_object); // 0x143b NEW_2
	ShowMap(var_122_object); // 0x143d ObjFunc
	return 0; // 0x143f Return
}


func_5685()
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x1635 PushV
	var_91_int = 68; // 0x1636 PushI
	var_92_int = 1; // 0x1637 PushI
	var_93_int = 512150; // 0x1638 PushI
	CreateDiaryEntry(var_90_object, var_91_int, var_92_int, var_93_int); // 0x1639 Func
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; // 0x163b PushV
	var_95_object = var_90_object; // 0x163c Mov
	var_96_int = 25; // 0x163d MovI
	func_5763(var_94_bool, var_95_object, var_96_int); // 0x163e NEW_2
	return 2; // 0x1640 Return
}


func_4920(var_59_object, var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; // 0x1338 PushV
	GetItemID(var_64_int); // 0x1339 ObjFunc
	var_67_string = "Category"; // 0x133b PushS
	GetInvItemProperty(var_65_int, var_64_int, var_67_string); // 0x133c Func
	AddItem(var_66_bool, var_59_object, var_65_int, var_60_int); // 0x133e ObjFunc
	var_68_bool = var_66_bool == 0; // 0x1340 Not
	if(var_68_bool == 0) goto Label_4933; // 0x1341 JumpB
	DropItems(var_59_object, var_60_int); // 0x1342 ObjFunc
	goto Label_4938; // 0x1344 Jump
	
Label_4938:
	return 6; // 0x134a Return
	
Label_4933:
	var_69_int = 0; var_70_int = 0; // 0x1345 PushV
	var_69_int = var_64_int; // 0x1346 Mov
	var_70_int = var_60_int; // 0x1347 Mov
	func_4896(var_69_int, var_70_int); // 0x1348 NEW_2
}


func_4667()
{
	var_366_bool = 0; var_367_bool = 0; // 0x123b PushV
	CameraSwitchToNormal(); // 0x123c Func
	var_368_bool = 0; // 0x123e PushV
	func_5040(var_368_bool); // 0x123f NEW_2
	if(var_368_bool == 0) goto Label_4675; // 0x1241 JumpB
	goto Label_4683; // 0x1242 Jump
	
Label_4683:
	return 2; // 0x124b Return
	
Label_4675:
	var_369_string = "head"; // 0x1243 PushS
	HasAnimationTrack(var_367_bool, var_369_string); // 0x1244 Func
	var_370_bool = var_367_bool; // 0x1246 Push
	if(var_370_bool == 0) goto Label_4683; // 0x1247 JumpB
	var_371_string = "head"; // 0x1248 PushS
	UnlookAsync(var_371_string); // 0x1249 Func
}


func_5435(var_414_bool)
{
	var_416_int = 0; var_417_string = ""; // 0x153c PushV
	var_417_string = "ood4Rubin1"; // 0x153d MovS
	func_4891(var_416_int, var_417_string); // 0x153e NEW_2
	var_418_int = 0; // 0x1540 PushI
	var_419_bool = var_416_int == var_418_int; // 0x1541 Eq
	if(var_419_bool == 0) goto Label_5445; // 0x1542 JumpB
	var_414_bool = 1; // 0x1543 MovB
	return 0; // 0x1544 Return
	
Label_5445:
	var_414_bool = 0; // 0x1545 MovB
	return 0; // 0x1546 Return
}


func_5184()
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0; // 0x1441 PushV
	var_103_object = Obj(); // 0x1442 PushV
	func_5791(var_103_object); // 0x1443 NEW_2
	var_100_object = var_103_object; // 0x1444 Mov
	var_101_string = "pt_map_bigvlad"; // 0x1446 MovS
	var_102_float = 2; // 0x1447 MovI
	func_5808(var_100_object, var_101_string, var_102_float); // 0x1448 NEW_2
	var_123_object = Obj(); // 0x144a PushV
	func_5791(var_123_object); // 0x144b NEW_2
	ShowMap(var_123_object); // 0x144d ObjFunc
	return 0; // 0x144f Return
}


func_5698()
{
	var_147_object = Obj(); var_148_object = Obj(); // 0x1642 PushV
	var_149_int = 74; // 0x1643 PushI
	var_150_int = 1; // 0x1644 PushI
	var_151_int = 512156; // 0x1645 PushI
	CreateDiaryEntry(var_148_object, var_149_int, var_150_int, var_151_int); // 0x1646 Func
	var_152_bool = 0; var_153_object = Obj(); var_154_int = 0; // 0x1648 PushV
	var_153_object = var_148_object; // 0x1649 Mov
	var_154_int = 25; // 0x164a MovI
	func_5763(var_152_bool, var_153_object, var_154_int); // 0x164b NEW_2
	return 2; // 0x164d Return
}


func_5447(var_423_bool)
{
	var_425_int = 0; var_426_string = ""; // 0x1548 PushV
	var_426_string = "ood4Rubin2"; // 0x1549 MovS
	func_4891(var_425_int, var_426_string); // 0x154a NEW_2
	var_427_int = 0; // 0x154c PushI
	var_428_bool = var_425_int == var_427_int; // 0x154d Eq
	if(var_428_bool == 0) goto Label_5457; // 0x154e JumpB
	var_423_bool = 1; // 0x154f MovB
	return 0; // 0x1550 Return
	
Label_5457:
	var_423_bool = 0; // 0x1551 MovB
	return 0; // 0x1552 Return
}


func_4939(var_53_object, var_54_string, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x134b PushV
	CreateInvItem(var_57_object); // 0x134c Func
	SetItemName(var_54_string); // 0x134e ObjFunc
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x1350 PushV
	var_58_object = var_53_object; // 0x1351 Mov
	var_59_object = var_57_object; // 0x1352 Mov
	var_60_int = var_55_int; // 0x1353 Mov
	func_4920(var_59_object, var_60_int); // 0x1354 NEW_2
	return 2; // 0x1356 Return
}


func_4684(var_134_bool, var_135_object)
{
	var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; // 0x124c PushV
	var_143_string = "voice_common"; // 0x124d PushS
	GetVariable(var_143_string, var_141_int); // 0x124e Func
	var_144_int = var_141_int; // 0x1250 Push
	if(var_144_int == 0) goto Label_4722; // 0x1251 JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x1252 PushV
	var_146_object = var_135_object; // 0x1253 Mov
	func_4742(var_146_object); // 0x1254 NEW_2
	var_175_bool = var_145_bool == 0; // 0x1256 Not
	if(var_175_bool == 0) goto Label_4704; // 0x1257 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x1258 PushV
	var_177_object = var_135_object; // 0x1259 Mov
	func_4779(var_177_object); // 0x125a NEW_2
	var_206_bool = var_176_bool == 0; // 0x125c Not
	if(var_206_bool == 0) goto Label_4704; // 0x125d JumpB
	var_134_bool = 0; // 0x125e MovB
	return 4; // 0x125f Return
	
Label_4704:
	var_207_int = 2; // 0x1260 PushI
	irand(var_142_int, var_207_int); // 0x1261 Func
	var_208_int = var_142_int; // 0x1263 Push
	if(var_208_int == 0) goto Label_4717; // 0x1264 JumpB
	var_209_string = "voice_common"; // 0x1265 PushS
	var_210_int = 1; // 0x1266 PushI
	var_211_int = var_141_int + var_210_int; // 0x1267 Add
	var_212_int = 3; // 0x1268 PushI
	var_213_int = var_211_int / var_212_int; // 0x1269 Mod
	SetVariable(var_209_string, var_213_int); // 0x126a Func
	goto Label_4721; // 0x126c Jump
	
Label_4721:
	goto Label_4740; // 0x1271 Jump
	
Label_4740:
	var_134_bool = 1; // 0x1284 MovB
	return 4; // 0x1285 Return
	
Label_4717:
	var_214_string = "voice_common"; // 0x126d PushS
	var_215_int = 0; // 0x126e PushI
	SetVariable(var_214_string, var_215_int); // 0x126f Func
	
Label_4722:
	var_216_bool = 0; var_217_object = Obj(); // 0x1272 PushV
	var_217_object = var_135_object; // 0x1273 Mov
	func_4779(var_217_object); // 0x1274 NEW_2
	var_218_bool = var_216_bool == 0; // 0x1276 Not
	if(var_218_bool == 0) goto Label_4736; // 0x1277 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x1278 PushV
	var_220_object = var_135_object; // 0x1279 Mov
	func_4742(var_220_object); // 0x127a NEW_2
	var_221_bool = var_219_bool == 0; // 0x127c Not
	if(var_221_bool == 0) goto Label_4736; // 0x127d JumpB
	var_134_bool = 0; // 0x127e MovB
	return 4; // 0x127f Return
	
Label_4736:
	var_222_string = "voice_common"; // 0x1280 PushS
	var_223_int = 1; // 0x1281 PushI
	SetVariable(var_222_string, var_223_int); // 0x1282 Func
}


func_5711()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x164f PushV
	var_69_int = 139; // 0x1650 PushI
	var_70_int = 1; // 0x1651 PushI
	var_71_int = 515339; // 0x1652 PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x1653 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1655 PushV
	var_73_object = var_68_object; // 0x1656 Mov
	var_74_int = -1; // 0x1657 MovI
	func_5763(var_72_bool, var_73_object, var_74_int); // 0x1658 NEW_2
	return 2; // 0x165a Return
}


func_5200()
{
	func_5698(); // 0x1452 NEW_2
	var_155_bool = 0; var_156_string = ""; var_157_string = ""; // 0x1454 PushV
	var_156_string = "quest_d3_01"; // 0x1455 MovS
	var_157_string = "completed"; // 0x1456 MovS
	func_4976(var_155_bool, var_156_string, var_157_string); // 0x1457 NEW_2
	return 0; // 0x1459 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_702_object, var_703_object)
{
	var_0_object = var_703_object; // 0x52 TMov
	var_1_object = var_702_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_708_int = 1; // 0x55 PushI
	if(var_708_int == 0) goto Label_119; // 0x56 JumpB
	var_709_string = ""; // 0x57 PushV
	var_709_string = "Confusion"; // 0x58 MovS
	func_149(var_703_object, var_709_string); // 0x59 NEW_2
	var_717_int = 534092; // 0x5b PushI
	SetMessage(var_717_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_718_bool = 0; var_719_object = Obj(); // 0x60 PushV
	var_719_object = var_1_object; // 0x61 MovT
	func_5411(var_719_object); // 0x62 NEW_2
	if(var_718_bool == 0) goto Label_106; // 0x64 JumpB
	var_724_int = 534093; // 0x65 PushI
	var_725_int = 38177; // 0x66 PushI
	var_726_int = 35686; // 0x67 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x68 TObjFunc
	
Label_106:
	var_727_int = 536401; // 0x6a PushI
	var_728_int = -1; // 0x6b PushI
	var_729_int = 38180; // 0x6c PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x6d TObjFunc
	var_730_int = 536402; // 0x6f PushI
	var_731_int = -1; // 0x70 PushI
	var_732_int = 38181; // 0x71 PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_733_bool = 0; // 0x77 PushV
	func_5040(var_733_bool); // 0x78 NEW_2
	if(var_733_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_734_string = var_3_string; // 0x7d PushT
	if(var_734_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_735_string = ""; // 0x80 PushV
	var_735_string = var_2_object; // 0x81 MovT
	func_4822(var_735_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_736_string = "all"; // 0x86 PushS
	var_737_string = "idle"; // 0x87 PushS
	PlayAnimation(var_736_string, var_737_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_738_string = var_3_string; // 0x8c PushT
	if(var_738_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_739_string = "all"; // 0x8f PushS
	var_740_string = "idle"; // 0x90 PushS
	PlayAnimation(var_739_string, var_740_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_3407(var_0_object, var_374_int, var_375_object)
{
	var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0; // 0xd4f PushV
	var_0_object = var_375_object; // 0xd50 TMov
	var_385_bool = 0; var_386_object = Obj(); var_387_float = 0; // 0xd51 PushV
	var_386_object = var_375_object; // 0xd52 Mov
	var_387_float = 70.0; // 0xd53 MovF
	func_4599(var_386_object, var_387_float); // 0xd54 NEW_2
	var_388_bool = var_385_bool == 0; // 0xd56 Not
	if(var_388_bool == 0) goto Label_3418; // 0xd57 JumpB
	var_374_int = -2; // 0xd58 MovI
	return 8; // 0xd59 Return
	
Label_3418:
	CreateDialog(var_381_object); // 0xd5a Func
	var_389_int = 0; // 0xd5c PushV
	func_5034(var_389_int); // 0xd5d NEW_2
	SetNPCName(var_389_int); // 0xd5f ObjFunc
	var_390_int = 0; // 0xd61 PushV
	func_5032(var_390_int); // 0xd62 NEW_2
	SetNPCDescription(var_390_int); // 0xd64 ObjFunc
	var_391_string = ""; // 0xd66 PushV
	func_5036(var_391_string); // 0xd67 NEW_2
	SetPhoto(var_391_string); // 0xd69 ObjFunc
	var_392_string = ""; // 0xd6b PushV
	func_5038(var_392_string); // 0xd6c NEW_2
	SetPhoto2(var_392_string); // 0xd6e ObjFunc
	var_393_int = 0; // 0xd70 PushV
	func_5841(var_393_int); // 0xd71 NEW_2
	SetPlayerName(var_393_int); // 0xd73 ObjFunc
	var_383_int = -1; // 0xd75 MovI
	IsOverrideActive(var_382_bool); // 0xd76 Func
	var_394_bool = var_382_bool; // 0xd78 Push
	if(var_394_bool == 0) goto Label_3452; // 0xd79 JumpB
	var_374_int = -2; // 0xd7a MovI
	return 8; // 0xd7b Return
	
Label_3452:
	DoDialog(var_381_object); // 0xd7c Func
	var_395_bool = 0; var_396_object = Obj(); // 0xd7e PushV
	var_397_object = Obj(); // 0xd7f PushV
	func_4875(var_397_object); // 0xd80 NEW_2
	var_396_object = var_397_object; // 0xd81 Mov
	func_4684(var_395_bool, var_396_object); // 0xd83 NEW_2
	var_398_object = Obj(); var_399_object = Obj(); // 0xd85 PushV
	var_398_object = var_375_object; // 0xd86 Mov
	var_399_object = var_381_object; // 0xd87 Mov
	TaskCall(9); // 0xd88 TaskCall
	func_3488(var_400_object, var_401_object, var_402_string, var_403_bool, var_398_object, var_399_object); // 0xd89 NEW_2
	TaskReturn(); // 0xd8a TaskReturn
	IsDialogEnd(var_384_bool); // 0xd8c ObjFunc
	
Label_3470:
	var_446_bool = var_384_bool == 0; // 0xd8e Not
	if(var_446_bool == 0) goto Label_3477; // 0xd8f JumpB
	sync(); // 0xd90 Func
	IsDialogEnd(var_384_bool); // 0xd92 ObjFunc
	goto Label_3470; // 0xd94 Jump
	
Label_3477:
	var_447_object = Obj(); // 0xd95 PushV
	var_447_object = var_375_object; // 0xd96 Mov
	func_4667(); // 0xd97 NEW_2
	StopDialog(var_381_object); // 0xd99 Func
	GetReturnValue(var_383_int); // 0xd9b ObjFunc
	var_374_int = var_383_int; // 0xd9d Mov
	return 8; // 0xd9e Return
}


func_5459(var_634_bool)
{
	var_636_int = 0; var_637_string = ""; // 0x1554 PushV
	var_637_string = "ood6Rubin1"; // 0x1555 MovS
	func_4891(var_636_int, var_637_string); // 0x1556 NEW_2
	var_638_int = 0; // 0x1558 PushI
	var_639_bool = var_636_int == var_638_int; // 0x1559 Eq
	if(var_639_bool == 0) goto Label_5469; // 0x155a JumpB
	var_634_bool = 1; // 0x155b MovB
	return 0; // 0x155c Return
	
Label_5469:
	var_634_bool = 0; // 0x155d MovB
	return 0; // 0x155e Return
}


func_4952(var_296_bool, var_298_string)
{
	var_299_int = 0; var_300_bool = 0; var_301_int = 0; var_302_bool = 0; // 0x1358 PushV
	GetInvItemByName(var_301_int, var_298_string); // 0x1359 Func
	HasItem(var_301_int, var_302_bool); // 0x135b ObjFunc
	var_296_bool = var_302_bool; // 0x135d Mov
	return 4; // 0x135e Return
}


func_5210()
{
	var_223_string = "d3RubinToldWhereIsSimon"; // 0x145b PushS
	var_224_int = 1; // 0x145c PushI
	SetVariable(var_223_string, var_224_int); // 0x145d Func
	return 0; // 0x145f Return
}


func_5724()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x165c PushV
	var_92_int = 140; // 0x165d PushI
	var_93_int = 1; // 0x165e PushI
	var_94_int = 515340; // 0x165f PushI
	CreateDiaryEntry(var_91_object, var_92_int, var_93_int, var_94_int); // 0x1660 Func
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0; // 0x1662 PushV
	var_96_object = var_91_object; // 0x1663 Mov
	var_97_int = 139; // 0x1664 MovI
	func_5763(var_95_bool, var_96_object, var_97_int); // 0x1665 NEW_2
	return 2; // 0x1667 Return
}


func_4189(var_0_object, var_1_object, var_2_object, var_3_string, var_828_object, var_829_object)
{
	var_0_object = var_829_object; // 0x105e TMov
	var_1_object = var_828_object; // 0x105f TMov
	var_3_string = 0; // 0x1060 TMovB
	var_834_int = 1; // 0x1061 PushI
	if(var_834_int == 0) goto Label_4217; // 0x1062 JumpB
	var_835_string = ""; // 0x1063 PushV
	var_835_string = "Neutral"; // 0x1064 MovS
	func_4247(var_829_object, var_835_string); // 0x1065 NEW_2
	var_843_int = 540542; // 0x1067 PushI
	SetMessage(var_843_int); // 0x1068 TObjFunc
	ClearReplies(); // 0x106a TObjFunc
	var_844_int = 540543; // 0x106c PushI
	var_845_int = -1; // 0x106d PushI
	var_846_int = 42552; // 0x106e PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0x106f TObjFunc
	var_847_int = 540796; // 0x1071 PushI
	var_848_int = -1; // 0x1072 PushI
	var_849_int = 42845; // 0x1073 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0x1074 TObjFunc
	goto Label_4217; // 0x1076 Jump
	
Label_4217:
	var_850_bool = 0; // 0x1079 PushV
	func_5040(var_850_bool); // 0x107a NEW_2
	if(var_850_bool == 0) goto Label_4232; // 0x107c JumpB
	
Label_4221:
	lshWaitForAnimEnd(); // 0x107d Func
	var_851_string = var_3_string; // 0x107f PushT
	if(var_851_string == 0) goto Label_4226; // 0x1080 JumpB
	goto Label_4231; // 0x1081 Jump
	
Label_4231:
	goto Label_4246; // 0x1087 Jump
	
Label_4246:
	return 0; // 0x1096 Return
	
Label_4226:
	var_852_string = ""; // 0x1082 PushV
	var_852_string = var_2_object; // 0x1083 MovT
	func_4822(var_852_string); // 0x1084 NEW_2
	goto Label_4221; // 0x1086 Jump
	
Label_4232:
	var_853_string = "all"; // 0x1088 PushS
	var_854_string = "idle"; // 0x1089 PushS
	PlayAnimation(var_853_string, var_854_string); // 0x108a Func
	
Label_4236:
	WaitForAnimEnd(); // 0x108c Func
	var_855_string = var_3_string; // 0x108e PushT
	if(var_855_string == 0) goto Label_4241; // 0x108f JumpB
	goto Label_4246; // 0x1090 Jump
	
Label_4241:
	var_856_string = "all"; // 0x1091 PushS
	var_857_string = "idle"; // 0x1092 PushS
	PlayAnimation(var_856_string, var_857_string); // 0x1093 Func
	goto Label_4236; // 0x1095 Jump
}


func_5471(var_232_bool)
{
	var_234_int = 0; var_235_string = ""; // 0x1560 PushV
	var_235_string = "d3q01"; // 0x1561 MovS
	func_4891(var_234_int, var_235_string); // 0x1562 NEW_2
	var_238_int = 0; // 0x1564 PushI
	var_239_bool = var_234_int == var_238_int; // 0x1565 Eq
	if(var_239_bool == 0) goto Label_5481; // 0x1566 JumpB
	var_232_bool = 1; // 0x1567 MovB
	return 0; // 0x1568 Return
	
Label_5481:
	var_232_bool = 0; // 0x1569 MovB
	return 0; // 0x156a Return
}


func_5216()
{
	var_493_string = "ood5Rubin1"; // 0x1461 PushS
	var_494_int = 1; // 0x1462 PushI
	SetVariable(var_493_string, var_494_int); // 0x1463 Func
	return 0; // 0x1465 Return
}


func_3935(var_2_object, var_644_string)
{
	var_645_bool = 0; // 0xf60 PushV
	func_5040(var_645_bool); // 0xf61 NEW_2
	var_646_bool = var_645_bool == 0; // 0xf63 Not
	if(var_646_bool == 0) goto Label_3942; // 0xf64 JumpB
	return 0; // 0xf65 Return
	
Label_3942:
	var_647_bool = var_644_string == var_2_object; // 0xf66 Eq
	if(var_647_bool == 0) goto Label_3945; // 0xf67 JumpB
	return 0; // 0xf68 Return
	
Label_3945:
	var_648_string = ""; var_649_bool = 0; // 0xf69 PushV
	var_648_string = var_644_string; // 0xf6a Mov
	var_650_string = ""; // 0xf6b PushS
	var_651_bool = var_644_string == var_650_string; // 0xf6c Eq
	if(var_651_bool == 0) goto Label_3952; // 0xf6d JumpB
	var_649_bool = 0; // 0xf6e MovB
	goto Label_3953; // 0xf6f Jump
	
Label_3953:
	func_4838(var_648_string, var_649_bool); // 0xf71 NEW_2
	var_2_object = var_644_string; // 0xf73 TMov
	return 0; // 0xf74 Return
	
Label_3952:
	var_649_bool = 1; // 0xf70 MovB
}


func_4959(var_163_bool, var_165_string)
{
	var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_int = 0; var_171_bool = 0; // 0x135f PushV
	GetInvItemByName(var_169_int, var_165_string); // 0x1360 Func
	var_172_string = "Category"; // 0x1362 PushS
	GetInvItemProperty(var_170_int, var_169_int, var_172_string); // 0x1363 Func
	RemoveItemByType(var_171_bool, var_169_int, var_170_int); // 0x1365 ObjFunc
	var_173_bool = var_171_bool; // 0x1367 Push
	if(var_173_bool == 0) goto Label_4974; // 0x1368 JumpB
	var_174_int = 0; var_175_int = 0; // 0x1369 PushV
	var_174_int = var_169_int; // 0x136a Mov
	var_175_int = 1; // 0x136b MovI
	func_4908(var_174_int, var_175_int); // 0x136c NEW_2
	
Label_4974:
	var_163_bool = var_171_bool; // 0x136e Mov
	return 6; // 0x136f Return
}


func_4599(var_74_bool, var_76_float)
{
	var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; // 0x11f7 PushV
	GetPosition(var_87_cvector); // 0x11f8 ObjFunc
	GetEyesHeight(var_86_float); // 0x11fa ObjFunc
	var_95_float = GetByIndex(var_87_cvector, 1); // 0x11fc PushE
	var_95_float = var_95_float + var_86_float; // 0x11fd Add2
	SetByIndex(var_87_cvector, 1) = var_95_float; // 0x11fe PopE
	GetPosition(var_88_cvector); // 0x11ff Func
	GetEyesHeight(var_86_float); // 0x1201 Func
	var_96_float = GetByIndex(var_88_cvector, 1); // 0x1203 PushE
	var_96_float = var_96_float + var_86_float; // 0x1204 Add2
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0x1205 PopE
	var_89_cvector = var_87_cvector - var_88_cvector; // 0x1206 Sub2
	var_97_float = GetByIndex(var_89_cvector, 1); // 0x1207 PushE
	var_97_float = 0; // 0x1208 MovI
	SetByIndex(var_89_cvector, 1) = var_97_float; // 0x1209 PopE
	var_98_int = var_89_cvector | var_89_cvector; // 0x120a Or
	var_99_float = sqrt(var_98_int); // 0x120b Sqrt
	var_89_cvector = var_89_cvector / var_89_cvector; // 0x120c Div2
	var_90_cvector = -var_89_cvector; // 0x120d Neg2
	var_100_float = var_89_cvector * var_76_float; // 0x120e Mult
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); // 0x120f PushV
	var_103_cvector = CVector(0.0, 1.0, 0.0); // 0x1210 PushVec
	var_102_cvector = var_90_cvector ^ var_103_cvector; // 0x1211 Xor2
	func_4881(var_101_cvector, var_102_cvector); // 0x1212 NEW_2
	var_109_int = 25; // 0x1214 PushI
	var_110_float = var_101_cvector * var_109_int; // 0x1215 Mult
	var_111_int = var_100_float + var_110_float; // 0x1216 Add
	var_112_cvector = CVector(0.0, 10.0, 0.0); // 0x1217 PushVec
	var_91_cvector = var_111_int - var_112_cvector; // 0x1218 Sub2
	var_92_cvector = var_88_cvector + var_91_cvector; // 0x1219 Add2
	IsOverrideActive(var_93_bool); // 0x121a Func
	var_113_bool = var_93_bool; // 0x121c Push
	if(var_113_bool == 0) goto Label_4640; // 0x121d JumpB
	var_74_bool = 0; // 0x121e MovB
	return 18; // 0x121f Return
	
Label_4640:
	StopWorld(); // 0x1220 Func
	CameraTransit(var_92_cvector, var_90_cvector); // 0x1222 Func
	var_114_float = GetByIndex(var_91_cvector, 0); // 0x1224 PushE
	var_115_float = GetByIndex(var_91_cvector, 2); // 0x1225 PushE
	Rotate(var_114_float, var_115_float); // 0x1226 Func
	var_116_bool = 0; // 0x1228 PushV
	func_5040(var_116_bool); // 0x1229 NEW_2
	if(var_116_bool == 0) goto Label_4653; // 0x122b JumpB
	goto Label_4661; // 0x122c Jump
	
Label_4661:
	CameraWaitForPlayFinish(); // 0x1235 Func
	ResumeWorld(); // 0x1237 Func
	var_74_bool = 1; // 0x1239 MovB
	return 18; // 0x123a Return
	
Label_4653:
	var_117_string = "head"; // 0x122d PushS
	HasAnimationTrack(var_94_bool, var_117_string); // 0x122e Func
	var_118_bool = var_94_bool; // 0x1230 Push
	if(var_118_bool == 0) goto Label_4661; // 0x1231 JumpB
	var_119_string = "head"; // 0x1232 PushS
	LookAsyncCamera(var_119_string); // 0x1233 Func
}


func_5222()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1466 PushV
	var_46_string = "d5q01"; // 0x1467 PushS
	var_47_int = 1; // 0x1468 PushI
	SetVariable(var_46_string, var_47_int); // 0x1469 Func
	var_48_object = Obj(); // 0x146b PushV
	func_5791(var_48_object); // 0x146c NEW_2
	var_45_object = var_48_object; // 0x146d Mov
	var_55_string = "d5q01RubinGotoBigVlad"; // 0x146f PushS
	var_56_string = "pt_map_bigvlad"; // 0x1470 PushS
	var_57_int = 1; // 0x1471 PushI
	var_58_int = 511956; // 0x1472 PushI
	var_59_float = 0; // 0x1473 PushV
	func_4988(var_59_float); // 0x1474 NEW_2
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x1476 ObjFunc
	var_62_string = "d5q01RubinGotoBigVladSelf"; // 0x1478 PushS
	var_63_string = "pt_map_rubin"; // 0x1479 PushS
	var_64_int = 1; // 0x147a PushI
	var_65_int = 515348; // 0x147b PushI
	var_66_float = 0; // 0x147c PushV
	func_4988(var_66_float); // 0x147d NEW_2
	AddMark(var_62_string, var_63_string, var_64_int, var_65_int, var_66_float); // 0x147f ObjFunc
	func_5711(); // 0x1482 NEW_2
	func_5724(); // 0x1485 NEW_2
	return 2; // 0x1487 Return
}


func_5737()
{
	var_171_object = Obj(); var_172_object = Obj(); // 0x1669 PushV
	var_173_int = 147; // 0x166a PushI
	var_174_int = 1; // 0x166b PushI
	var_175_int = 515347; // 0x166c PushI
	CreateDiaryEntry(var_172_object, var_173_int, var_174_int, var_175_int); // 0x166d Func
	var_176_bool = 0; var_177_object = Obj(); var_178_int = 0; // 0x166f PushV
	var_177_object = var_172_object; // 0x1670 Mov
	var_178_int = 139; // 0x1671 MovI
	func_5763(var_176_bool, var_177_object, var_178_int); // 0x1672 NEW_2
	return 2; // 0x1674 Return
}


func_3837(var_0_object, var_1_object, var_2_object, var_3_string, var_619_object, var_620_object)
{
	var_0_object = var_620_object; // 0xefe TMov
	var_1_object = var_619_object; // 0xeff TMov
	var_3_string = 0; // 0xf00 TMovB
	var_625_int = 1; // 0xf01 PushI
	if(var_625_int == 0) goto Label_3905; // 0xf02 JumpB
	var_626_bool = 0; // 0xf03 PushV
	var_626_bool = 0; // 0xf04 MovB
	var_627_bool = 0; var_628_object = Obj(); // 0xf05 PushV
	var_628_object = var_1_object; // 0xf06 MovT
	func_5589(var_628_object); // 0xf07 NEW_2
	var_633_bool = var_627_bool == 0; // 0xf09 Not
	if(var_633_bool == 0) goto Label_3857; // 0xf0a JumpB
	var_634_bool = 0; var_635_object = Obj(); // 0xf0b PushV
	var_635_object = var_1_object; // 0xf0c MovT
	func_5459(var_635_object); // 0xf0d NEW_2
	if(var_634_bool == 0) goto Label_3857; // 0xf0f JumpB
	var_626_bool = 1; // 0xf10 MovB
	
Label_3857:
	if(var_626_bool == 0) goto Label_3878; // 0xf11 JumpB
	var_640_object = Obj(); var_641_object = Obj(); // 0xf12 PushV
	var_640_object = var_1_object; // 0xf13 MovT
	var_641_object = var_0_object; // 0xf14 MovT
	func_5112(); // 0xf15 NEW_2
	var_644_string = ""; // 0xf17 PushV
	var_644_string = "Warning"; // 0xf18 MovS
	func_3935(var_620_object, var_644_string); // 0xf19 NEW_2
	var_652_int = 512020; // 0xf1b PushI
	SetMessage(var_652_int); // 0xf1c TObjFunc
	ClearReplies(); // 0xf1e TObjFunc
	var_653_int = 512021; // 0xf20 PushI
	var_654_int = 13240; // 0xf21 PushI
	var_655_int = 13239; // 0xf22 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xf23 TObjFunc
	goto Label_3905; // 0xf25 Jump
	
Label_3905:
	var_656_bool = 0; // 0xf41 PushV
	func_5040(var_656_bool); // 0xf42 NEW_2
	if(var_656_bool == 0) goto Label_3920; // 0xf44 JumpB
	
Label_3909:
	lshWaitForAnimEnd(); // 0xf45 Func
	var_657_string = var_3_string; // 0xf47 PushT
	if(var_657_string == 0) goto Label_3914; // 0xf48 JumpB
	goto Label_3919; // 0xf49 Jump
	
Label_3919:
	goto Label_3934; // 0xf4f Jump
	
Label_3934:
	return 0; // 0xf5e Return
	
Label_3914:
	var_658_string = ""; // 0xf4a PushV
	var_658_string = var_2_object; // 0xf4b MovT
	func_4822(var_658_string); // 0xf4c NEW_2
	goto Label_3909; // 0xf4e Jump
	
Label_3920:
	var_659_string = "all"; // 0xf50 PushS
	var_660_string = "idle"; // 0xf51 PushS
	PlayAnimation(var_659_string, var_660_string); // 0xf52 Func
	
Label_3924:
	WaitForAnimEnd(); // 0xf54 Func
	var_661_string = var_3_string; // 0xf56 PushT
	if(var_661_string == 0) goto Label_3929; // 0xf57 JumpB
	goto Label_3934; // 0xf58 Jump
	
Label_3929:
	var_662_string = "all"; // 0xf59 PushS
	var_663_string = "idle"; // 0xf5a PushS
	PlayAnimation(var_662_string, var_663_string); // 0xf5b Func
	goto Label_3924; // 0xf5d Jump
	
Label_3878:
	var_664_string = ""; // 0xf26 PushV
	var_664_string = "Neutral"; // 0xf27 MovS
	func_3935(var_620_object, var_664_string); // 0xf28 NEW_2
	var_665_int = 513723; // 0xf2a PushI
	SetMessage(var_665_int); // 0xf2b TObjFunc
	ClearReplies(); // 0xf2d TObjFunc
	var_666_bool = 0; var_667_object = Obj(); // 0xf2f PushV
	var_667_object = var_1_object; // 0xf30 MovT
	func_5589(var_667_object); // 0xf31 NEW_2
	if(var_666_bool == 0) goto Label_3897; // 0xf33 JumpB
	var_668_int = 541857; // 0xf34 PushI
	var_669_int = -1; // 0xf35 PushI
	var_670_int = 44082; // 0xf36 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0xf37 TObjFunc
	
Label_3897:
	var_671_int = 513724; // 0xf39 PushI
	var_672_int = -1; // 0xf3a PushI
	var_673_int = 14990; // 0xf3b PushI
	AddReply(var_671_int, var_672_int, var_673_int); // 0xf3c TObjFunc
	goto Label_3905; // 0xf3e Jump
}


func_5483(var_240_bool)
{
	var_242_int = 0; var_243_string = ""; // 0x156c PushV
	var_243_string = "ood3Rubin1"; // 0x156d MovS
	func_4891(var_242_int, var_243_string); // 0x156e NEW_2
	var_244_int = 0; // 0x1570 PushI
	var_245_bool = var_242_int == var_244_int; // 0x1571 Eq
	if(var_245_bool == 0) goto Label_5493; // 0x1572 JumpB
	var_240_bool = 1; // 0x1573 MovB
	return 0; // 0x1574 Return
	
Label_5493:
	var_240_bool = 0; // 0x1575 MovB
	return 0; // 0x1576 Return
}


func_4976(var_181_bool, var_182_string, var_183_string)
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x1370 PushV
	FindActor(var_185_object, var_182_string); // 0x1371 Func
	var_186_bool = var_185_object == 0; // 0x1373 NullEq
	if(var_186_bool == 0) goto Label_4983; // 0x1374 JumpB
	var_181_bool = 0; // 0x1375 MovB
	return 2; // 0x1376 Return
	
Label_4983:
	Trigger(var_185_object, var_183_string); // 0x1377 Func
	var_181_bool = 1; // 0x1379 MovB
	return 2; // 0x137a Return
}


func_5750(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1676 PushV
	GetDiaryRoot(var_83_object); // 0x1677 Func
	var_84_bool = var_83_object == 0; // 0x1679 Not
	if(var_84_bool == 0) goto Label_5760; // 0x167a JumpB
	var_85_string = "Can't retrieve diary root"; // 0x167b PushS
	Trace(var_85_string); // 0x167c Func
	var_81_object = 0; // 0x167e MovB
	return 2; // 0x167f Return
	
Label_5760:
	var_81_object = var_83_object; // 0x1680 Mov
	return 2; // 0x1681 Return
}


func_5495(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x1578 PushV
	var_346_string = "ood3Rubin2"; // 0x1579 MovS
	func_4891(var_345_int, var_346_string); // 0x157a NEW_2
	var_347_int = 0; // 0x157c PushI
	var_348_bool = var_345_int == var_347_int; // 0x157d Eq
	if(var_348_bool == 0) goto Label_5505; // 0x157e JumpB
	var_343_bool = 1; // 0x157f MovB
	return 0; // 0x1580 Return
	
Label_5505:
	var_343_bool = 0; // 0x1581 MovB
	return 0; // 0x1582 Return
}


func_5112()
{
	var_642_string = "ood6Rubin1"; // 0x13f9 PushS
	var_643_int = 1; // 0x13fa PushI
	SetVariable(var_642_string, var_643_int); // 0x13fb Func
	return 0; // 0x13fd Return
}


func_4988(var_59_float)
{
	var_60_float = 0; var_61_float = 0; // 0x137c PushV
	GetGameTime(var_61_float); // 0x137d Func
	var_59_float = var_61_float; // 0x137f Mov
	return 2; // 0x1380 Return
}


func_383(var_0_object, var_745_int, var_746_object)
{
	var_748_object = Obj(); var_749_bool = 0; var_750_int = 0; var_751_bool = 0; var_752_object = Obj(); var_753_bool = 0; var_754_int = 0; var_755_bool = 0; // 0x17f PushV
	var_0_object = var_746_object; // 0x180 TMov
	var_756_bool = 0; var_757_object = Obj(); var_758_float = 0; // 0x181 PushV
	var_757_object = var_746_object; // 0x182 Mov
	var_758_float = 70.0; // 0x183 MovF
	func_4599(var_757_object, var_758_float); // 0x184 NEW_2
	var_759_bool = var_756_bool == 0; // 0x186 Not
	if(var_759_bool == 0) goto Label_394; // 0x187 JumpB
	var_745_int = -2; // 0x188 MovI
	return 8; // 0x189 Return
	
Label_394:
	CreateDialog(var_752_object); // 0x18a Func
	var_760_int = 0; // 0x18c PushV
	func_5034(var_760_int); // 0x18d NEW_2
	SetNPCName(var_760_int); // 0x18f ObjFunc
	var_761_int = 0; // 0x191 PushV
	func_5032(var_761_int); // 0x192 NEW_2
	SetNPCDescription(var_761_int); // 0x194 ObjFunc
	var_762_string = ""; // 0x196 PushV
	func_5036(var_762_string); // 0x197 NEW_2
	SetPhoto(var_762_string); // 0x199 ObjFunc
	var_763_string = ""; // 0x19b PushV
	func_5038(var_763_string); // 0x19c NEW_2
	SetPhoto2(var_763_string); // 0x19e ObjFunc
	var_764_int = 0; // 0x1a0 PushV
	func_5841(var_764_int); // 0x1a1 NEW_2
	SetPlayerName(var_764_int); // 0x1a3 ObjFunc
	var_754_int = -1; // 0x1a5 MovI
	IsOverrideActive(var_753_bool); // 0x1a6 Func
	var_765_bool = var_753_bool; // 0x1a8 Push
	if(var_765_bool == 0) goto Label_428; // 0x1a9 JumpB
	var_745_int = -2; // 0x1aa MovI
	return 8; // 0x1ab Return
	
Label_428:
	DoDialog(var_752_object); // 0x1ac Func
	var_766_bool = 0; var_767_object = Obj(); // 0x1ae PushV
	var_768_object = Obj(); // 0x1af PushV
	func_4875(var_768_object); // 0x1b0 NEW_2
	var_767_object = var_768_object; // 0x1b1 Mov
	func_4684(var_766_bool, var_767_object); // 0x1b3 NEW_2
	var_769_object = Obj(); var_770_object = Obj(); // 0x1b5 PushV
	var_769_object = var_746_object; // 0x1b6 Mov
	var_770_object = var_752_object; // 0x1b7 Mov
	TaskCall(3); // 0x1b8 TaskCall
	func_464(var_771_object, var_772_object, var_773_string, var_774_bool, var_769_object, var_770_object); // 0x1b9 NEW_2
	TaskReturn(); // 0x1ba TaskReturn
	IsDialogEnd(var_755_bool); // 0x1bc ObjFunc
	
Label_446:
	var_802_bool = var_755_bool == 0; // 0x1be Not
	if(var_802_bool == 0) goto Label_453; // 0x1bf JumpB
	sync(); // 0x1c0 Func
	IsDialogEnd(var_755_bool); // 0x1c2 ObjFunc
	goto Label_446; // 0x1c4 Jump
	
Label_453:
	var_803_object = Obj(); // 0x1c5 PushV
	var_803_object = var_746_object; // 0x1c6 Mov
	func_4667(); // 0x1c7 NEW_2
	StopDialog(var_752_object); // 0x1c9 Func
	GetReturnValue(var_754_int); // 0x1cb ObjFunc
	var_745_int = var_754_int; // 0x1cd Mov
	return 8; // 0x1ce Return
}


func_4993(var_57_int)
{
	var_58_float = 0; var_59_float = 0; // 0x1381 PushV
	GetGameTime(var_59_float); // 0x1382 Func
	var_60_int = 1; // 0x1384 PushI
	var_61_int = 0; // 0x1385 PushV
	var_62_int = 24; // 0x1386 PushI
	var_61_int = var_59_float / var_59_float; // 0x1387 Div2
	var_57_int = var_60_int + var_61_int; // 0x1388 Add2
	return 2; // 0x1389 Return
}


func_642(var_0_object, var_63_int, var_64_object)
{
	var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; // 0x282 PushV
	var_0_object = var_64_object; // 0x283 TMov
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0; // 0x284 PushV
	var_75_object = var_64_object; // 0x285 Mov
	var_76_float = 70.0; // 0x286 MovF
	func_4599(var_75_object, var_76_float); // 0x287 NEW_2
	var_120_bool = var_74_bool == 0; // 0x289 Not
	if(var_120_bool == 0) goto Label_653; // 0x28a JumpB
	var_63_int = -2; // 0x28b MovI
	return 8; // 0x28c Return
	
Label_653:
	CreateDialog(var_70_object); // 0x28d Func
	var_121_int = 0; // 0x28f PushV
	func_5034(var_121_int); // 0x290 NEW_2
	SetNPCName(var_121_int); // 0x292 ObjFunc
	var_122_int = 0; // 0x294 PushV
	func_5032(var_122_int); // 0x295 NEW_2
	SetNPCDescription(var_122_int); // 0x297 ObjFunc
	var_123_string = ""; // 0x299 PushV
	func_5036(var_123_string); // 0x29a NEW_2
	SetPhoto(var_123_string); // 0x29c ObjFunc
	var_124_string = ""; // 0x29e PushV
	func_5038(var_124_string); // 0x29f NEW_2
	SetPhoto2(var_124_string); // 0x2a1 ObjFunc
	var_125_int = 0; // 0x2a3 PushV
	func_5841(var_125_int); // 0x2a4 NEW_2
	SetPlayerName(var_125_int); // 0x2a6 ObjFunc
	var_72_int = -1; // 0x2a8 MovI
	IsOverrideActive(var_71_bool); // 0x2a9 Func
	var_133_bool = var_71_bool; // 0x2ab Push
	if(var_133_bool == 0) goto Label_687; // 0x2ac JumpB
	var_63_int = -2; // 0x2ad MovI
	return 8; // 0x2ae Return
	
Label_687:
	DoDialog(var_70_object); // 0x2af Func
	var_134_bool = 0; var_135_object = Obj(); // 0x2b1 PushV
	var_136_object = Obj(); // 0x2b2 PushV
	func_4875(var_136_object); // 0x2b3 NEW_2
	var_135_object = var_136_object; // 0x2b4 Mov
	func_4684(var_134_bool, var_135_object); // 0x2b6 NEW_2
	var_224_object = Obj(); var_225_object = Obj(); // 0x2b8 PushV
	var_224_object = var_64_object; // 0x2b9 Mov
	var_225_object = var_70_object; // 0x2ba Mov
	TaskCall(5); // 0x2bb TaskCall
	func_723(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object); // 0x2bc NEW_2
	TaskReturn(); // 0x2bd TaskReturn
	IsDialogEnd(var_73_bool); // 0x2bf ObjFunc
	
Label_705:
	var_364_bool = var_73_bool == 0; // 0x2c1 Not
	if(var_364_bool == 0) goto Label_712; // 0x2c2 JumpB
	sync(); // 0x2c3 Func
	IsDialogEnd(var_73_bool); // 0x2c5 ObjFunc
	goto Label_705; // 0x2c7 Jump
	
Label_712:
	var_365_object = Obj(); // 0x2c8 PushV
	var_365_object = var_64_object; // 0x2c9 Mov
	func_4667(); // 0x2ca NEW_2
	StopDialog(var_70_object); // 0x2cc Func
	GetReturnValue(var_72_int); // 0x2ce ObjFunc
	var_63_int = var_72_int; // 0x2d0 Mov
	return 8; // 0x2d1 Return
}


func_5763(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0; // 0x1683 PushV
	var_81_object = Obj(); // 0x1684 PushV
	func_5750(var_81_object); // 0x1685 NEW_2
	var_78_object = var_81_object; // 0x1686 Mov
	Find(var_74_int, var_79_object); // 0x1688 ObjFunc
	var_86_bool = var_79_object == 0; // 0x168a Not
	if(var_86_bool == 0) goto Label_5778; // 0x168b JumpB
	var_87_string = "Can't find diary parent with id: "; // 0x168c PushS
	var_88_int = var_87_string + var_74_int; // 0x168d Add
	Trace(var_88_int); // 0x168e Func
	var_72_bool = 0; // 0x1690 MovB
	return 6; // 0x1691 Return
	
Label_5778:
	AddChild(var_73_object); // 0x1692 ObjFunc
	var_89_int = 7; // 0x1694 PushI
	SendWorldWndMessage(var_89_int); // 0x1695 Func
	GetCategory(var_80_int); // 0x1697 ObjFunc
	SetDiarySection(var_80_int); // 0x1699 Func
	var_72_bool = 0; // 0x169b MovB
	return 6; // 0x169c Return
}


func_5507(var_352_bool)
{
	var_354_int = 0; var_355_string = ""; // 0x1584 PushV
	var_355_string = "ood3Rubin3"; // 0x1585 MovS
	func_4891(var_354_int, var_355_string); // 0x1586 NEW_2
	var_356_int = 0; // 0x1588 PushI
	var_357_bool = var_354_int == var_356_int; // 0x1589 Eq
	if(var_357_bool == 0) goto Label_5517; // 0x158a JumpB
	var_352_bool = 1; // 0x158b MovB
	return 0; // 0x158c Return
	
Label_5517:
	var_352_bool = 0; // 0x158d MovB
	return 0; // 0x158e Return
}


func_4742(var_145_bool)
{
	var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; // 0x1286 PushV
	var_152_string = "c"; // 0x1287 MovS
	var_153_int = 0; // 0x1288 MovI
	
Label_4745:
	var_157_int = 1; // 0x1289 PushI
	if(var_157_int == 0) goto Label_4758; // 0x128a JumpB
	var_158_int = 1; // 0x128b PushI
	var_159_int = var_153_int + var_158_int; // 0x128c Add
	var_160_int = var_152_string + var_159_int; // 0x128d Add
	HasProperty(var_160_int, var_154_bool); // 0x128e ObjFunc
	var_161_bool = var_154_bool == 0; // 0x1290 Not
	if(var_161_bool == 0) goto Label_4755; // 0x1291 JumpB
	goto Label_4758; // 0x1292 Jump
	
Label_4758:
	var_162_bool = var_153_int == 0; // 0x1296 Not
	if(var_162_bool == 0) goto Label_4762; // 0x1297 JumpB
	var_145_bool = 0; // 0x1298 MovB
	return 10; // 0x1299 Return
	
Label_4762:
	var_155_int = 0; // 0x129a MovI
	var_163_int = 1; // 0x129b PushI
	var_164_bool = var_153_int > var_163_int; // 0x129c GT
	if(var_164_bool == 0) goto Label_4768; // 0x129d JumpB
	irand(var_155_int, var_153_int); // 0x129e Func
	
Label_4768:
	var_165_int = 1; // 0x12a0 PushI
	var_166_int = var_155_int + var_165_int; // 0x12a1 Add
	var_167_int = var_152_string + var_166_int; // 0x12a2 Add
	GetProperty(var_167_int, var_156_string); // 0x12a3 ObjFunc
	var_168_bool = 0; var_169_string = ""; // 0x12a5 PushV
	var_169_string = var_156_string; // 0x12a6 Mov
	func_4853(var_168_bool, var_169_string); // 0x12a7 NEW_2
	var_145_bool = var_168_bool; // 0x12a8 Mov
	return 10; // 0x12aa Return
	
Label_4755:
	var_174_int = 1; // 0x1293 PushI
	var_153_int = var_153_int + var_174_int; // 0x1294 Add2
	goto Label_4745; // 0x1295 Jump
}


func_5257()
{
	var_536_string = "ood5Rubin2"; // 0x148a PushS
	var_537_int = 1; // 0x148b PushI
	SetVariable(var_536_string, var_537_int); // 0x148c Func
	return 0; // 0x148e Return
}


func_5002(var_55_bool, var_56_int)
{
	var_57_int = 0; // 0x138b PushV
	func_4993(var_57_int); // 0x138c NEW_2
	var_55_bool = var_57_int == var_56_int; // 0x138e Eq2
	return 0; // 0x138f Return
}


func_4491()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0x118b PushV
	WaitForAnimEnd(); // 0x118c Func
	var_52_bool = 0; // 0x118e PushV
	func_4594(var_52_bool); // 0x118f NEW_2
	var_53_bool = var_52_bool == 0; // 0x1191 Not
	if(var_53_bool == 0) goto Label_4500; // 0x1192 JumpB
	return 12; // 0x1193 Return
	
Label_4500:
	var_54_int = 0; // 0x1194 PushV
	func_5015(var_54_int); // 0x1195 NEW_2
	var_46_int = var_54_int; // 0x1196 Mov
	var_47_int = 0; // 0x1198 MovI
	
Label_4505:
	var_67_bool = 0; // 0x1199 PushV
	var_67_bool = 0; // 0x119a MovB
	var_68_int = 5; // 0x119b PushI
	var_69_bool = var_47_int < var_68_int; // 0x119c LT
	if(var_69_bool == 0) goto Label_4515; // 0x119d JumpB
	var_70_bool = 0; // 0x119e PushV
	func_4594(var_70_bool); // 0x119f NEW_2
	if(var_70_bool == 0) goto Label_4515; // 0x11a1 JumpB
	var_67_bool = 1; // 0x11a2 MovB
	
Label_4515:
	if(var_67_bool == 0) goto Label_4557; // 0x11a3 JumpB
	var_71_bool = var_46_int == 0; // 0x11a4 Not
	if(var_71_bool == 0) goto Label_4525; // 0x11a5 JumpB
	var_72_int = 3; // 0x11a6 PushI
	Sleep(var_72_int, var_48_bool); // 0x11a7 Func
	var_73_bool = var_48_bool == 0; // 0x11a9 Not
	if(var_73_bool == 0) goto Label_4524; // 0x11aa JumpB
	goto Label_4557; // 0x11ab Jump
	
Label_4557:
	ResetAAS(); // 0x11cd Func
	return 12; // 0x11cf Return
	
Label_4524:
	goto Label_4546; // 0x11ac Jump
	
Label_4546:
	var_74_bool = 0; // 0x11c2 PushV
	func_4560(var_74_bool); // 0x11c3 NEW_2
	var_75_bool = var_74_bool == 0; // 0x11c5 Not
	if(var_75_bool == 0) goto Label_4552; // 0x11c6 JumpB
	goto Label_4557; // 0x11c7 Jump
	
Label_4552:
	ResetAAS(); // 0x11c8 Func
	var_76_int = 1; // 0x11ca PushI
	var_47_int = var_47_int + var_76_int; // 0x11cb Add2
	goto Label_4505; // 0x11cc Jump
	
Label_4525:
	irand(var_49_int, var_46_int); // 0x11ad Func
	var_77_int = 5; // 0x11af PushI
	irand(var_50_int, var_77_int); // 0x11b0 Func
	var_78_int = 0; // 0x11b2 PushI
	var_79_bool = var_50_int != var_78_int; // 0x11b3 Neq
	if(var_79_bool == 0) goto Label_4534; // 0x11b4 JumpB
	var_49_int = 0; // 0x11b5 MovI
	
Label_4534:
	var_80_string = "all"; // 0x11b6 PushS
	var_81_string = ""; var_82_int = 0; // 0x11b7 PushV
	var_82_int = var_49_int; // 0x11b8 Mov
	func_5008(var_81_string, var_82_int); // 0x11b9 NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0x11bb Func
	WaitForAnimEnd(var_51_bool); // 0x11bd Func
	var_83_bool = var_51_bool == 0; // 0x11bf Not
	if(var_83_bool == 0) goto Label_4546; // 0x11c0 JumpB
	goto Label_4557; // 0x11c1 Jump
}


func_5263()
{
	var_144_object = Obj(); var_145_object = Obj(); var_146_int = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_int = 0; // 0x148f PushV
	var_150_object = Obj(); // 0x1490 PushV
	func_5791(var_150_object); // 0x1491 NEW_2
	var_147_object = var_150_object; // 0x1492 Mov
	var_151_string = "d5q01AlexandrGotoKaterina"; // 0x1494 PushS
	FindMark(var_148_object, var_151_string); // 0x1495 ObjFunc
	var_152_object = var_148_object; // 0x1497 Push
	if(var_152_object == 0) goto Label_5275; // 0x1498 JumpB
	Remove(); // 0x1499 ObjFunc
	
Label_5275:
	var_153_string = "d5q01BigVladGotoAlexandr"; // 0x149b PushS
	FindMark(var_148_object, var_153_string); // 0x149c ObjFunc
	var_154_object = var_148_object; // 0x149e Push
	if(var_154_object == 0) goto Label_5282; // 0x149f JumpB
	Remove(); // 0x14a0 ObjFunc
	
Label_5282:
	var_155_string = "d5q01BurahMeeting"; // 0x14a2 PushS
	FindMark(var_148_object, var_155_string); // 0x14a3 ObjFunc
	var_156_object = var_148_object; // 0x14a5 Push
	if(var_156_object == 0) goto Label_5289; // 0x14a6 JumpB
	Remove(); // 0x14a7 ObjFunc
	
Label_5289:
	var_157_string = "d7q04NudeGotoAndrei"; // 0x14a9 PushS
	FindMark(var_148_object, var_157_string); // 0x14aa ObjFunc
	var_158_object = var_148_object; // 0x14ac Push
	if(var_158_object == 0) goto Label_5296; // 0x14ad JumpB
	Remove(); // 0x14ae ObjFunc
	
Label_5296:
	var_159_string = "d5q01GrifWantsMoney"; // 0x14b0 PushS
	FindMark(var_148_object, var_159_string); // 0x14b1 ObjFunc
	var_160_object = var_148_object; // 0x14b3 Push
	if(var_160_object == 0) goto Label_5303; // 0x14b4 JumpB
	Remove(); // 0x14b5 ObjFunc
	
Label_5303:
	var_161_string = "d5q01GrifWillHelp"; // 0x14b7 PushS
	FindMark(var_148_object, var_161_string); // 0x14b8 ObjFunc
	var_162_object = var_148_object; // 0x14ba Push
	if(var_162_object == 0) goto Label_5310; // 0x14bb JumpB
	Remove(); // 0x14bc ObjFunc
	
Label_5310:
	var_163_string = "d5q01BigVladGotoLara"; // 0x14be PushS
	FindMark(var_148_object, var_163_string); // 0x14bf ObjFunc
	var_164_object = var_148_object; // 0x14c1 Push
	if(var_164_object == 0) goto Label_5317; // 0x14c2 JumpB
	Remove(); // 0x14c3 ObjFunc
	
Label_5317:
	var_165_string = "d5q01PatrolGotoGrif"; // 0x14c5 PushS
	FindMark(var_148_object, var_165_string); // 0x14c6 ObjFunc
	var_166_object = var_148_object; // 0x14c8 Push
	if(var_166_object == 0) goto Label_5324; // 0x14c9 JumpB
	Remove(); // 0x14ca ObjFunc
	
Label_5324:
	var_167_string = "d5q01RubinGotoBigVlad"; // 0x14cc PushS
	FindMark(var_148_object, var_167_string); // 0x14cd ObjFunc
	var_168_object = var_148_object; // 0x14cf Push
	if(var_168_object == 0) goto Label_5331; // 0x14d0 JumpB
	Remove(); // 0x14d1 ObjFunc
	
Label_5331:
	var_169_string = "d5q01RubinGotoBigVladSelf"; // 0x14d3 PushS
	FindMark(var_148_object, var_169_string); // 0x14d4 ObjFunc
	var_170_object = var_148_object; // 0x14d6 Push
	if(var_170_object == 0) goto Label_5338; // 0x14d7 JumpB
	Remove(); // 0x14d8 ObjFunc
	
Label_5338:
	func_5737(); // 0x14db NEW_2
	var_179_string = "d5q01_heart"; // 0x14dd PushS
	var_180_int = 1; // 0x14de PushI
	RemoveItemByType(var_149_int, var_179_string, var_180_int); // 0x14df ObjFunc
	var_181_bool = 0; var_182_string = ""; var_183_string = ""; // 0x14e1 PushV
	var_182_string = "quest_d5_01"; // 0x14e2 MovS
	var_183_string = "completed"; // 0x14e3 MovS
	func_4976(var_181_bool, var_182_string, var_183_string); // 0x14e4 NEW_2
	return 6; // 0x14e6 Return
}


func_5519(var_303_bool)
{
	var_305_int = 0; var_306_string = ""; // 0x1590 PushV
	var_306_string = "d3q01"; // 0x1591 MovS
	func_4891(var_305_int, var_306_string); // 0x1592 NEW_2
	var_307_int = 1000; // 0x1594 PushI
	var_308_bool = var_305_int == var_307_int; // 0x1595 Eq
	if(var_308_bool == 0) goto Label_5529; // 0x1596 JumpB
	var_303_bool = 1; // 0x1597 MovB
	return 0; // 0x1598 Return
	
Label_5529:
	var_303_bool = 0; // 0x1599 MovB
	return 0; // 0x159a Return
}


func_5008(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0x1390 PushV
	var_63_string = "idle"; // 0x1391 MovS
	var_64_int = var_61_int; // 0x1392 Push
	if(var_64_int == 0) goto Label_5013; // 0x1393 JumpB
	var_63_string = var_63_string + var_61_int; // 0x1394 Add2
	
Label_5013:
	var_60_string = var_63_string; // 0x1395 Mov
	return 2; // 0x1396 Return
}


func_149(var_2_object, var_709_string)
{
	var_710_bool = 0; // 0x96 PushV
	func_5040(var_710_bool); // 0x97 NEW_2
	var_711_bool = var_710_bool == 0; // 0x99 Not
	if(var_711_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_712_bool = var_709_string == var_2_object; // 0x9c Eq
	if(var_712_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_713_string = ""; var_714_bool = 0; // 0x9f PushV
	var_713_string = var_709_string; // 0xa0 Mov
	var_715_string = ""; // 0xa1 PushS
	var_716_bool = var_709_string == var_715_string; // 0xa2 Eq
	if(var_716_bool == 0) goto Label_166; // 0xa3 JumpB
	var_714_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_4838(var_713_string, var_714_bool); // 0xa7 NEW_2
	var_2_object = var_709_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_714_bool = 1; // 0xa6 MovB
}


func_4247(var_2_object, var_835_string)
{
	var_836_bool = 0; // 0x1098 PushV
	func_5040(var_836_bool); // 0x1099 NEW_2
	var_837_bool = var_836_bool == 0; // 0x109b Not
	if(var_837_bool == 0) goto Label_4254; // 0x109c JumpB
	return 0; // 0x109d Return
	
Label_4254:
	var_838_bool = var_835_string == var_2_object; // 0x109e Eq
	if(var_838_bool == 0) goto Label_4257; // 0x109f JumpB
	return 0; // 0x10a0 Return
	
Label_4257:
	var_839_string = ""; var_840_bool = 0; // 0x10a1 PushV
	var_839_string = var_835_string; // 0x10a2 Mov
	var_841_string = ""; // 0x10a3 PushS
	var_842_bool = var_835_string == var_841_string; // 0x10a4 Eq
	if(var_842_bool == 0) goto Label_4264; // 0x10a5 JumpB
	var_840_bool = 0; // 0x10a6 MovB
	goto Label_4265; // 0x10a7 Jump
	
Label_4265:
	func_4838(var_839_string, var_840_bool); // 0x10a9 NEW_2
	var_2_object = var_835_string; // 0x10ab TMov
	return 0; // 0x10ac Return
	
Label_4264:
	var_840_bool = 1; // 0x10a8 MovB
}


func_5015(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0x1397 PushV
	var_57_int = 0; // 0x1398 MovI
	
Label_5017:
	var_59_string = "all"; // 0x1399 PushS
	var_60_string = ""; var_61_int = 0; // 0x139a PushV
	var_61_int = var_57_int; // 0x139b Mov
	func_5008(var_60_string, var_61_int); // 0x139c NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0x139e Func
	var_65_bool = var_58_bool == 0; // 0x13a0 Not
	if(var_65_bool == 0) goto Label_5027; // 0x13a1 JumpB
	goto Label_5030; // 0x13a2 Jump
	
Label_5030:
	var_54_int = var_57_int; // 0x13a6 Mov
	return 4; // 0x13a7 Return
	
Label_5027:
	var_66_int = 1; // 0x13a3 PushI
	var_57_int = var_57_int + var_66_int; // 0x13a4 Add2
	goto Label_5017; // 0x13a5 Jump
}


func_920(var_2_object, var_250_string)
{
	var_251_bool = 0; // 0x399 PushV
	func_5040(var_251_bool); // 0x39a NEW_2
	var_252_bool = var_251_bool == 0; // 0x39c Not
	if(var_252_bool == 0) goto Label_927; // 0x39d JumpB
	return 0; // 0x39e Return
	
Label_927:
	var_253_bool = var_250_string == var_2_object; // 0x39f Eq
	if(var_253_bool == 0) goto Label_930; // 0x3a0 JumpB
	return 0; // 0x3a1 Return
	
Label_930:
	var_254_string = ""; var_255_bool = 0; // 0x3a2 PushV
	var_254_string = var_250_string; // 0x3a3 Mov
	var_256_string = ""; // 0x3a4 PushS
	var_257_bool = var_250_string == var_256_string; // 0x3a5 Eq
	if(var_257_bool == 0) goto Label_937; // 0x3a6 JumpB
	var_255_bool = 0; // 0x3a7 MovB
	goto Label_938; // 0x3a8 Jump
	
Label_938:
	func_4838(var_254_string, var_255_bool); // 0x3aa NEW_2
	var_2_object = var_250_string; // 0x3ac TMov
	return 0; // 0x3ad Return
	
Label_937:
	var_255_bool = 1; // 0x3a9 MovB
}


func_5531(var_294_bool, var_295_object)
{
	var_296_bool = 0; var_297_object = Obj(); var_298_string = ""; // 0x159c PushV
	var_297_object = var_295_object; // 0x159d Mov
	var_298_string = "d3q01_blood"; // 0x159e MovS
	func_4952(var_297_object, var_298_string); // 0x159f NEW_2
	if(var_296_bool == 0) goto Label_5540; // 0x15a1 JumpB
	var_294_bool = 1; // 0x15a2 MovB
	return 0; // 0x15a3 Return
	
Label_5540:
	var_294_bool = 0; // 0x15a4 MovB
	return 0; // 0x15a5 Return
}


func_5791(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj(); // 0x169f PushV
	GetMainOutdoorScene(var_51_object); // 0x16a0 Func
	var_53_bool = var_51_object == 0; // 0x16a2 NullEq
	if(var_53_bool == 0) goto Label_5802; // 0x16a3 JumpB
	var_54_string = "Can't find main outdoor scene"; // 0x16a4 PushS
	Trace(var_54_string); // 0x16a5 Func
	var_52_object = 0; // 0x16a7 SetNull
	var_48_object = var_52_object; // 0x16a8 Mov
	return 4; // 0x16a9 Return
	
Label_5802:
	GetMap(var_52_object); // 0x16aa ObjFunc
	var_48_object = var_52_object; // 0x16ac Mov
	return 4; // 0x16ad Return
}


func_2463(var_2_object, var_495_string)
{
	var_496_bool = 0; // 0x9a0 PushV
	func_5040(var_496_bool); // 0x9a1 NEW_2
	var_497_bool = var_496_bool == 0; // 0x9a3 Not
	if(var_497_bool == 0) goto Label_2470; // 0x9a4 JumpB
	return 0; // 0x9a5 Return
	
Label_2470:
	var_498_bool = var_495_string == var_2_object; // 0x9a6 Eq
	if(var_498_bool == 0) goto Label_2473; // 0x9a7 JumpB
	return 0; // 0x9a8 Return
	
Label_2473:
	var_499_string = ""; var_500_bool = 0; // 0x9a9 PushV
	var_499_string = var_495_string; // 0x9aa Mov
	var_501_string = ""; // 0x9ab PushS
	var_502_bool = var_495_string == var_501_string; // 0x9ac Eq
	if(var_502_bool == 0) goto Label_2480; // 0x9ad JumpB
	var_500_bool = 0; // 0x9ae MovB
	goto Label_2481; // 0x9af Jump
	
Label_2481:
	func_4838(var_499_string, var_500_bool); // 0x9b1 NEW_2
	var_2_object = var_495_string; // 0x9b3 TMov
	return 0; // 0x9b4 Return
	
Label_2480:
	var_500_bool = 1; // 0x9b0 MovB
}


func_3488(var_0_object, var_1_object, var_2_object, var_3_string, var_398_object, var_399_object)
{
	var_0_object = var_399_object; // 0xda1 TMov
	var_1_object = var_398_object; // 0xda2 TMov
	var_3_string = 0; // 0xda3 TMovB
	var_404_int = 1; // 0xda4 PushI
	if(var_404_int == 0) goto Label_3536; // 0xda5 JumpB
	var_405_string = ""; // 0xda6 PushV
	var_405_string = "Neutral"; // 0xda7 MovS
	func_3566(var_399_object, var_405_string); // 0xda8 NEW_2
	var_413_int = 511122; // 0xdaa PushI
	SetMessage(var_413_int); // 0xdab TObjFunc
	ClearReplies(); // 0xdad TObjFunc
	var_414_bool = 0; var_415_object = Obj(); // 0xdaf PushV
	var_415_object = var_1_object; // 0xdb0 MovT
	func_5435(var_415_object); // 0xdb1 NEW_2
	if(var_414_bool == 0) goto Label_3513; // 0xdb3 JumpB
	var_420_int = 511123; // 0xdb4 PushI
	var_421_int = 12316; // 0xdb5 PushI
	var_422_int = 12312; // 0xdb6 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xdb7 TObjFunc
	
Label_3513:
	var_423_bool = 0; var_424_object = Obj(); // 0xdb9 PushV
	var_424_object = var_1_object; // 0xdba MovT
	func_5447(var_424_object); // 0xdbb NEW_2
	if(var_423_bool == 0) goto Label_3523; // 0xdbd JumpB
	var_429_int = 511124; // 0xdbe PushI
	var_430_int = 12314; // 0xdbf PushI
	var_431_int = 12313; // 0xdc0 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xdc1 TObjFunc
	
Label_3523:
	var_432_int = 536267; // 0xdc3 PushI
	var_433_int = -1; // 0xdc4 PushI
	var_434_int = 38051; // 0xdc5 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0xdc6 TObjFunc
	var_435_int = 536268; // 0xdc8 PushI
	var_436_int = -1; // 0xdc9 PushI
	var_437_int = 38052; // 0xdca PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xdcb TObjFunc
	goto Label_3536; // 0xdcd Jump
	
Label_3536:
	var_438_bool = 0; // 0xdd0 PushV
	func_5040(var_438_bool); // 0xdd1 NEW_2
	if(var_438_bool == 0) goto Label_3551; // 0xdd3 JumpB
	
Label_3540:
	lshWaitForAnimEnd(); // 0xdd4 Func
	var_439_string = var_3_string; // 0xdd6 PushT
	if(var_439_string == 0) goto Label_3545; // 0xdd7 JumpB
	goto Label_3550; // 0xdd8 Jump
	
Label_3550:
	goto Label_3565; // 0xdde Jump
	
Label_3565:
	return 0; // 0xded Return
	
Label_3545:
	var_440_string = ""; // 0xdd9 PushV
	var_440_string = var_2_object; // 0xdda MovT
	func_4822(var_440_string); // 0xddb NEW_2
	goto Label_3540; // 0xddd Jump
	
Label_3551:
	var_441_string = "all"; // 0xddf PushS
	var_442_string = "idle"; // 0xde0 PushS
	PlayAnimation(var_441_string, var_442_string); // 0xde1 Func
	
Label_3555:
	WaitForAnimEnd(); // 0xde3 Func
	var_443_string = var_3_string; // 0xde5 PushT
	if(var_443_string == 0) goto Label_3560; // 0xde6 JumpB
	goto Label_3565; // 0xde7 Jump
	
Label_3560:
	var_444_string = "all"; // 0xde8 PushS
	var_445_string = "idle"; // 0xde9 PushS
	PlayAnimation(var_444_string, var_445_string); // 0xdea Func
	goto Label_3555; // 0xdec Jump
}


func_2212(var_0_object, var_450_int, var_451_object)
{
	var_453_object = Obj(); var_454_bool = 0; var_455_int = 0; var_456_bool = 0; var_457_object = Obj(); var_458_bool = 0; var_459_int = 0; var_460_bool = 0; // 0x8a4 PushV
	var_0_object = var_451_object; // 0x8a5 TMov
	var_461_bool = 0; var_462_object = Obj(); var_463_float = 0; // 0x8a6 PushV
	var_462_object = var_451_object; // 0x8a7 Mov
	var_463_float = 70.0; // 0x8a8 MovF
	func_4599(var_462_object, var_463_float); // 0x8a9 NEW_2
	var_464_bool = var_461_bool == 0; // 0x8ab Not
	if(var_464_bool == 0) goto Label_2223; // 0x8ac JumpB
	var_450_int = -2; // 0x8ad MovI
	return 8; // 0x8ae Return
	
Label_2223:
	CreateDialog(var_457_object); // 0x8af Func
	var_465_int = 0; // 0x8b1 PushV
	func_5034(var_465_int); // 0x8b2 NEW_2
	SetNPCName(var_465_int); // 0x8b4 ObjFunc
	var_466_int = 0; // 0x8b6 PushV
	func_5032(var_466_int); // 0x8b7 NEW_2
	SetNPCDescription(var_466_int); // 0x8b9 ObjFunc
	var_467_string = ""; // 0x8bb PushV
	func_5036(var_467_string); // 0x8bc NEW_2
	SetPhoto(var_467_string); // 0x8be ObjFunc
	var_468_string = ""; // 0x8c0 PushV
	func_5038(var_468_string); // 0x8c1 NEW_2
	SetPhoto2(var_468_string); // 0x8c3 ObjFunc
	var_469_int = 0; // 0x8c5 PushV
	func_5841(var_469_int); // 0x8c6 NEW_2
	SetPlayerName(var_469_int); // 0x8c8 ObjFunc
	var_459_int = -1; // 0x8ca MovI
	IsOverrideActive(var_458_bool); // 0x8cb Func
	var_470_bool = var_458_bool; // 0x8cd Push
	if(var_470_bool == 0) goto Label_2257; // 0x8ce JumpB
	var_450_int = -2; // 0x8cf MovI
	return 8; // 0x8d0 Return
	
Label_2257:
	DoDialog(var_457_object); // 0x8d1 Func
	var_471_bool = 0; var_472_object = Obj(); // 0x8d3 PushV
	var_473_object = Obj(); // 0x8d4 PushV
	func_4875(var_473_object); // 0x8d5 NEW_2
	var_472_object = var_473_object; // 0x8d6 Mov
	func_4684(var_471_bool, var_472_object); // 0x8d8 NEW_2
	var_474_object = Obj(); var_475_object = Obj(); // 0x8da PushV
	var_474_object = var_451_object; // 0x8db Mov
	var_475_object = var_457_object; // 0x8dc Mov
	TaskCall(7); // 0x8dd TaskCall
	func_2293(var_476_object, var_477_object, var_478_string, var_479_bool, var_474_object, var_475_object); // 0x8de NEW_2
	TaskReturn(); // 0x8df TaskReturn
	IsDialogEnd(var_460_bool); // 0x8e1 ObjFunc
	
Label_2275:
	var_591_bool = var_460_bool == 0; // 0x8e3 Not
	if(var_591_bool == 0) goto Label_2282; // 0x8e4 JumpB
	sync(); // 0x8e5 Func
	IsDialogEnd(var_460_bool); // 0x8e7 ObjFunc
	goto Label_2275; // 0x8e9 Jump
	
Label_2282:
	var_592_object = Obj(); // 0x8ea PushV
	var_592_object = var_451_object; // 0x8eb Mov
	func_4667(); // 0x8ec NEW_2
	StopDialog(var_457_object); // 0x8ee Func
	GetReturnValue(var_459_int); // 0x8f0 ObjFunc
	var_450_int = var_459_int; // 0x8f2 Mov
	return 8; // 0x8f3 Return
}


func_5542(var_481_bool)
{
	var_483_int = 0; var_484_string = ""; // 0x15a7 PushV
	var_484_string = "ood5Rubin1"; // 0x15a8 MovS
	func_4891(var_483_int, var_484_string); // 0x15a9 NEW_2
	var_485_int = 0; // 0x15ab PushI
	var_486_bool = var_483_int == var_485_int; // 0x15ac Eq
	if(var_486_bool == 0) goto Label_5552; // 0x15ad JumpB
	var_481_bool = 1; // 0x15ae MovB
	return 0; // 0x15af Return
	
Label_5552:
	var_481_bool = 0; // 0x15b0 MovB
	return 0; // 0x15b1 Return
}


func_5032(var_122_int)
{
	var_122_int = 515551; // 0x13a8 MovI
	return 0; // 0x13a9 Return
}


func_5034(var_121_int)
{
	var_121_int = 502876; // 0x13aa MovI
	return 0; // 0x13ab Return
}


func_4779(var_176_bool)
{
	var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; // 0x12ab PushV
	var_188_string = "d"; // 0x12ac PushS
	var_189_int = 0; // 0x12ad PushV
	func_4993(var_189_int); // 0x12ae NEW_2
	var_190_int = var_188_string + var_189_int; // 0x12b0 Add
	var_191_string = "m"; // 0x12b1 PushS
	var_183_string = var_190_int + var_191_string; // 0x12b2 Add2
	var_184_int = 0; // 0x12b3 MovI
	
Label_4788:
	var_192_int = 1; // 0x12b4 PushI
	if(var_192_int == 0) goto Label_4801; // 0x12b5 JumpB
	var_193_int = 1; // 0x12b6 PushI
	var_194_int = var_184_int + var_193_int; // 0x12b7 Add
	var_195_int = var_183_string + var_194_int; // 0x12b8 Add
	HasProperty(var_195_int, var_185_bool); // 0x12b9 ObjFunc
	var_196_bool = var_185_bool == 0; // 0x12bb Not
	if(var_196_bool == 0) goto Label_4798; // 0x12bc JumpB
	goto Label_4801; // 0x12bd Jump
	
Label_4801:
	var_197_bool = var_184_int == 0; // 0x12c1 Not
	if(var_197_bool == 0) goto Label_4805; // 0x12c2 JumpB
	var_176_bool = 0; // 0x12c3 MovB
	return 10; // 0x12c4 Return
	
Label_4805:
	var_186_int = 0; // 0x12c5 MovI
	var_198_int = 1; // 0x12c6 PushI
	var_199_bool = var_184_int > var_198_int; // 0x12c7 GT
	if(var_199_bool == 0) goto Label_4811; // 0x12c8 JumpB
	irand(var_186_int, var_184_int); // 0x12c9 Func
	
Label_4811:
	var_200_int = 1; // 0x12cb PushI
	var_201_int = var_186_int + var_200_int; // 0x12cc Add
	var_202_int = var_183_string + var_201_int; // 0x12cd Add
	GetProperty(var_202_int, var_187_string); // 0x12ce ObjFunc
	var_203_bool = 0; var_204_string = ""; // 0x12d0 PushV
	var_204_string = var_187_string; // 0x12d1 Mov
	func_4853(var_203_bool, var_204_string); // 0x12d2 NEW_2
	var_176_bool = var_203_bool; // 0x12d3 Mov
	return 10; // 0x12d5 Return
	
Label_4798:
	var_205_int = 1; // 0x12be PushI
	var_184_int = var_184_int + var_205_int; // 0x12bf Add2
	goto Label_4788; // 0x12c0 Jump
}


func_3756(var_0_object, var_595_int, var_596_object)
{
	var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0; var_602_object = Obj(); var_603_bool = 0; var_604_int = 0; var_605_bool = 0; // 0xeac PushV
	var_0_object = var_596_object; // 0xead TMov
	var_606_bool = 0; var_607_object = Obj(); var_608_float = 0; // 0xeae PushV
	var_607_object = var_596_object; // 0xeaf Mov
	var_608_float = 70.0; // 0xeb0 MovF
	func_4599(var_607_object, var_608_float); // 0xeb1 NEW_2
	var_609_bool = var_606_bool == 0; // 0xeb3 Not
	if(var_609_bool == 0) goto Label_3767; // 0xeb4 JumpB
	var_595_int = -2; // 0xeb5 MovI
	return 8; // 0xeb6 Return
	
Label_3767:
	CreateDialog(var_602_object); // 0xeb7 Func
	var_610_int = 0; // 0xeb9 PushV
	func_5034(var_610_int); // 0xeba NEW_2
	SetNPCName(var_610_int); // 0xebc ObjFunc
	var_611_int = 0; // 0xebe PushV
	func_5032(var_611_int); // 0xebf NEW_2
	SetNPCDescription(var_611_int); // 0xec1 ObjFunc
	var_612_string = ""; // 0xec3 PushV
	func_5036(var_612_string); // 0xec4 NEW_2
	SetPhoto(var_612_string); // 0xec6 ObjFunc
	var_613_string = ""; // 0xec8 PushV
	func_5038(var_613_string); // 0xec9 NEW_2
	SetPhoto2(var_613_string); // 0xecb ObjFunc
	var_614_int = 0; // 0xecd PushV
	func_5841(var_614_int); // 0xece NEW_2
	SetPlayerName(var_614_int); // 0xed0 ObjFunc
	var_604_int = -1; // 0xed2 MovI
	IsOverrideActive(var_603_bool); // 0xed3 Func
	var_615_bool = var_603_bool; // 0xed5 Push
	if(var_615_bool == 0) goto Label_3801; // 0xed6 JumpB
	var_595_int = -2; // 0xed7 MovI
	return 8; // 0xed8 Return
	
Label_3801:
	DoDialog(var_602_object); // 0xed9 Func
	var_616_bool = 0; var_617_object = Obj(); // 0xedb PushV
	var_618_object = Obj(); // 0xedc PushV
	func_4875(var_618_object); // 0xedd NEW_2
	var_617_object = var_618_object; // 0xede Mov
	func_4684(var_616_bool, var_617_object); // 0xee0 NEW_2
	var_619_object = Obj(); var_620_object = Obj(); // 0xee2 PushV
	var_619_object = var_596_object; // 0xee3 Mov
	var_620_object = var_602_object; // 0xee4 Mov
	TaskCall(11); // 0xee5 TaskCall
	func_3837(var_621_object, var_622_object, var_623_string, var_624_bool, var_619_object, var_620_object); // 0xee6 NEW_2
	TaskReturn(); // 0xee7 TaskReturn
	IsDialogEnd(var_605_bool); // 0xee9 ObjFunc
	
Label_3819:
	var_674_bool = var_605_bool == 0; // 0xeeb Not
	if(var_674_bool == 0) goto Label_3826; // 0xeec JumpB
	sync(); // 0xeed Func
	IsDialogEnd(var_605_bool); // 0xeef ObjFunc
	goto Label_3819; // 0xef1 Jump
	
Label_3826:
	var_675_object = Obj(); // 0xef2 PushV
	var_675_object = var_596_object; // 0xef3 Mov
	func_4667(); // 0xef4 NEW_2
	StopDialog(var_602_object); // 0xef6 Func
	GetReturnValue(var_604_int); // 0xef8 ObjFunc
	var_595_int = var_604_int; // 0xefa Mov
	return 8; // 0xefb Return
}


func_5036(var_123_string)
{
	var_123_string = "ui/NPC_Rubin.png"; // 0x13ac MovS
	return 0; // 0x13ad Return
}


func_5038(var_124_string)
{
	var_124_string = "ui/NPC_Rubin_b.png"; // 0x13ae MovS
	return 0; // 0x13af Return
}


func_5808(var_100_object, var_101_string, var_102_float)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; // 0x16b0 PushV
	GetMainOutdoorScene(var_110_object); // 0x16b1 Func
	var_112_bool = var_110_object == 0; // 0x16b3 NullEq
	if(var_112_bool == 0) goto Label_5817; // 0x16b4 JumpB
	var_113_string = "Can't find main outdoor scene"; // 0x16b5 PushS
	Trace(var_113_string); // 0x16b6 Func
	return 8; // 0x16b8 Return
	
Label_5817:
	GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector); // 0x16b9 ObjFunc
	var_114_bool = var_111_bool == 0; // 0x16bb Not
	if(var_114_bool == 0) goto Label_5827; // 0x16bc JumpB
	var_115_string = "Warning: outdoor scene locator "; // 0x16bd PushS
	var_116_int = var_115_string + var_101_string; // 0x16be Add
	var_117_string = " doesnt exist"; // 0x16bf PushS
	var_118_int = var_116_int + var_117_string; // 0x16c0 Add
	Trace(var_118_int); // 0x16c1 Func
	
Label_5827:
	GetMap(var_100_object); // 0x16c3 ObjFunc
	var_119_bool = var_100_object == 0; // 0x16c5 NullEq
	if(var_119_bool == 0) goto Label_5835; // 0x16c6 JumpB
	var_120_string = "Can't find map"; // 0x16c7 PushS
	Trace(var_120_string); // 0x16c8 Func
	return 8; // 0x16ca Return
	
Label_5835:
	var_121_float = GetByIndex(var_108_cvector, 0); // 0x16cb PushE
	var_122_float = GetByIndex(var_108_cvector, 2); // 0x16cc PushE
	SetMapParams(var_121_float, var_122_float, var_102_float); // 0x16cd ObjFunc
	return 8; // 0x16cf Return
}


func_5040(var_116_bool)
{
	var_116_bool = 1; // 0x13b0 MovB
	return 0; // 0x13b1 Return
}


func_5554(var_523_bool)
{
	var_525_int = 0; var_526_string = ""; // 0x15b3 PushV
	var_526_string = "d5q01"; // 0x15b4 MovS
	func_4891(var_525_int, var_526_string); // 0x15b5 NEW_2
	var_527_int = 7; // 0x15b7 PushI
	var_528_bool = var_525_int == var_527_int; // 0x15b8 Eq
	if(var_528_bool == 0) goto Label_5564; // 0x15b9 JumpB
	var_523_bool = 1; // 0x15ba MovB
	return 0; // 0x15bb Return
	
Label_5564:
	var_523_bool = 0; // 0x15bc MovB
	return 0; // 0x15bd Return
}


func_5042()
{
	var_76_string = "playsound"; // 0x13b3 PushS
	var_77_string = "giveitem"; // 0x13b4 PushS
	TriggerWorld(var_76_string, var_77_string); // 0x13b5 Func
	return 0; // 0x13b7 Return
}


func_5048(var_161_object)
{
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; // 0x13b9 PushV
	var_164_object = var_161_object; // 0x13ba Mov
	var_165_string = "d3q01_blood"; // 0x13bb MovS
	func_4959(var_164_object, var_165_string); // 0x13bc NEW_2
	return 0; // 0x13be Return
}


func_5566(var_517_bool)
{
	var_519_int = 0; var_520_string = ""; // 0x15bf PushV
	var_520_string = "ood5Rubin2"; // 0x15c0 MovS
	func_4891(var_519_int, var_520_string); // 0x15c1 NEW_2
	var_521_int = 0; // 0x15c3 PushI
	var_522_bool = var_519_int == var_521_int; // 0x15c4 Eq
	if(var_522_bool == 0) goto Label_5576; // 0x15c5 JumpB
	var_517_bool = 1; // 0x15c6 MovB
	return 0; // 0x15c7 Return
	
Label_5576:
	var_517_bool = 0; // 0x15c8 MovB
	return 0; // 0x15c9 Return
}


func_5055()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x13bf PushV
	var_46_string = "d10q02"; // 0x13c0 PushS
	var_47_int = 2; // 0x13c1 PushI
	SetVariable(var_46_string, var_47_int); // 0x13c2 Func
	var_48_object = Obj(); // 0x13c4 PushV
	func_5791(var_48_object); // 0x13c5 NEW_2
	var_45_object = var_48_object; // 0x13c6 Mov
	var_55_string = "d10q02RubinGotoMaria"; // 0x13c8 PushS
	var_56_string = "pt_map_maria"; // 0x13c9 PushS
	var_57_int = 0; // 0x13ca PushI
	var_58_int = 515297; // 0x13cb PushI
	var_59_float = 0; // 0x13cc PushV
	func_4988(var_59_float); // 0x13cd NEW_2
	AddMark(var_55_string, var_56_string, var_57_int, var_58_int, var_59_float); // 0x13cf ObjFunc
	func_5659(); // 0x13d2 NEW_2
	return 2; // 0x13d4 Return
}


func_5578(var_529_bool, var_530_object)
{
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0x15cb PushV
	var_532_object = var_530_object; // 0x15cc Mov
	var_533_string = "d5q01_heart"; // 0x15cd MovS
	func_4952(var_532_object, var_533_string); // 0x15ce NEW_2
	if(var_531_bool == 0) goto Label_5587; // 0x15d0 JumpB
	var_529_bool = 1; // 0x15d1 MovB
	return 0; // 0x15d2 Return
	
Label_5587:
	var_529_bool = 0; // 0x15d3 MovB
	return 0; // 0x15d4 Return
}


func_464(var_0_object, var_1_object, var_2_object, var_3_string, var_769_object, var_770_object)
{
	var_0_object = var_770_object; // 0x1d1 TMov
	var_1_object = var_769_object; // 0x1d2 TMov
	var_3_string = 0; // 0x1d3 TMovB
	var_775_int = 1; // 0x1d4 PushI
	if(var_775_int == 0) goto Label_497; // 0x1d5 JumpB
	var_776_string = ""; // 0x1d6 PushV
	var_776_string = "Neutral"; // 0x1d7 MovS
	func_527(var_770_object, var_776_string); // 0x1d8 NEW_2
	var_784_int = 535294; // 0x1da PushI
	SetMessage(var_784_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_785_int = 535295; // 0x1df PushI
	var_786_int = 36973; // 0x1e0 PushI
	var_787_int = 36972; // 0x1e1 PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0x1e2 TObjFunc
	var_788_int = 535302; // 0x1e4 PushI
	var_789_int = -1; // 0x1e5 PushI
	var_790_int = 36980; // 0x1e6 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x1e7 TObjFunc
	var_791_int = 535303; // 0x1e9 PushI
	var_792_int = -1; // 0x1ea PushI
	var_793_int = 36981; // 0x1eb PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x1ec TObjFunc
	goto Label_497; // 0x1ee Jump
	
Label_497:
	var_794_bool = 0; // 0x1f1 PushV
	func_5040(var_794_bool); // 0x1f2 NEW_2
	if(var_794_bool == 0) goto Label_512; // 0x1f4 JumpB
	
Label_501:
	lshWaitForAnimEnd(); // 0x1f5 Func
	var_795_string = var_3_string; // 0x1f7 PushT
	if(var_795_string == 0) goto Label_506; // 0x1f8 JumpB
	goto Label_511; // 0x1f9 Jump
	
Label_511:
	goto Label_526; // 0x1ff Jump
	
Label_526:
	return 0; // 0x20e Return
	
Label_506:
	var_796_string = ""; // 0x1fa PushV
	var_796_string = var_2_object; // 0x1fb MovT
	func_4822(var_796_string); // 0x1fc NEW_2
	goto Label_501; // 0x1fe Jump
	
Label_512:
	var_797_string = "all"; // 0x200 PushS
	var_798_string = "idle"; // 0x201 PushS
	PlayAnimation(var_797_string, var_798_string); // 0x202 Func
	
Label_516:
	WaitForAnimEnd(); // 0x204 Func
	var_799_string = var_3_string; // 0x206 PushT
	if(var_799_string == 0) goto Label_521; // 0x207 JumpB
	goto Label_526; // 0x208 Jump
	
Label_521:
	var_800_string = "all"; // 0x209 PushS
	var_801_string = "idle"; // 0x20a PushS
	PlayAnimation(var_800_string, var_801_string); // 0x20b Func
	goto Label_516; // 0x20d Jump
}


func_5841(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x16d1 PushV
	var_128_string = "branch"; // 0x16d2 PushS
	GetVariable(var_128_string, var_127_int); // 0x16d3 Func
	var_129_int = 0; // 0x16d5 PushI
	var_130_bool = var_127_int == var_129_int; // 0x16d6 Eq
	if(var_130_bool == 0) goto Label_5851; // 0x16d7 JumpB
	var_125_int = 1; // 0x16d8 MovI
	return 2; // 0x16d9 Return
	
Label_5851:
	var_131_int = 1; // 0x16db PushI
	var_132_bool = var_127_int == var_131_int; // 0x16dc Eq
	if(var_132_bool == 0) goto Label_5856; // 0x16dd JumpB
	var_125_int = 2; // 0x16de MovI
	return 2; // 0x16df Return
	
Label_5856:
	var_125_int = 3; // 0x16e0 MovI
	return 2; // 0x16e1 Return
}


func_4560(var_74_bool)
{
	var_74_bool = 1; // 0x11d0 MovB
	return 0; // 0x11d1 Return
}


func_723(var_0_object, var_1_object, var_2_object, var_3_string, var_224_object, var_225_object)
{
	var_0_object = var_225_object; // 0x2d4 TMov
	var_1_object = var_224_object; // 0x2d5 TMov
	var_3_string = 0; // 0x2d6 TMovB
	var_230_int = 1; // 0x2d7 PushI
	if(var_230_int == 0) goto Label_890; // 0x2d8 JumpB
	var_231_bool = 0; // 0x2d9 PushV
	var_231_bool = 0; // 0x2da MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x2db PushV
	var_233_object = var_1_object; // 0x2dc MovT
	func_5471(var_233_object); // 0x2dd NEW_2
	if(var_232_bool == 0) goto Label_742; // 0x2df JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0x2e0 PushV
	var_241_object = var_1_object; // 0x2e1 MovT
	func_5483(var_241_object); // 0x2e2 NEW_2
	if(var_240_bool == 0) goto Label_742; // 0x2e4 JumpB
	var_231_bool = 1; // 0x2e5 MovB
	
Label_742:
	if(var_231_bool == 0) goto Label_768; // 0x2e6 JumpB
	var_246_object = Obj(); var_247_object = Obj(); // 0x2e7 PushV
	var_246_object = var_1_object; // 0x2e8 MovT
	var_247_object = var_0_object; // 0x2e9 MovT
	func_5393(); // 0x2ea NEW_2
	var_250_string = ""; // 0x2ec PushV
	var_250_string = "Neutral"; // 0x2ed MovS
	func_920(var_225_object, var_250_string); // 0x2ee NEW_2
	var_267_int = 508737; // 0x2f0 PushI
	SetMessage(var_267_int); // 0x2f1 TObjFunc
	ClearReplies(); // 0x2f3 TObjFunc
	var_268_int = 508777; // 0x2f5 PushI
	var_269_int = 9633; // 0x2f6 PushI
	var_270_int = 9624; // 0x2f7 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x2f8 TObjFunc
	var_271_int = 508781; // 0x2fa PushI
	var_272_int = 9629; // 0x2fb PushI
	var_273_int = 9628; // 0x2fc PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x2fd TObjFunc
	goto Label_890; // 0x2ff Jump
	
Label_890:
	var_274_bool = 0; // 0x37a PushV
	func_5040(var_274_bool); // 0x37b NEW_2
	if(var_274_bool == 0) goto Label_905; // 0x37d JumpB
	
Label_894:
	lshWaitForAnimEnd(); // 0x37e Func
	var_275_string = var_3_string; // 0x380 PushT
	if(var_275_string == 0) goto Label_899; // 0x381 JumpB
	goto Label_904; // 0x382 Jump
	
Label_904:
	goto Label_919; // 0x388 Jump
	
Label_919:
	return 0; // 0x397 Return
	
Label_899:
	var_276_string = ""; // 0x383 PushV
	var_276_string = var_2_object; // 0x384 MovT
	func_4822(var_276_string); // 0x385 NEW_2
	goto Label_894; // 0x387 Jump
	
Label_905:
	var_287_string = "all"; // 0x389 PushS
	var_288_string = "idle"; // 0x38a PushS
	PlayAnimation(var_287_string, var_288_string); // 0x38b Func
	
Label_909:
	WaitForAnimEnd(); // 0x38d Func
	var_289_string = var_3_string; // 0x38f PushT
	if(var_289_string == 0) goto Label_914; // 0x390 JumpB
	goto Label_919; // 0x391 Jump
	
Label_914:
	var_290_string = "all"; // 0x392 PushS
	var_291_string = "idle"; // 0x393 PushS
	PlayAnimation(var_290_string, var_291_string); // 0x394 Func
	goto Label_909; // 0x396 Jump
	
Label_768:
	var_292_bool = 0; // 0x300 PushV
	var_292_bool = 0; // 0x301 MovB
	var_293_bool = 0; // 0x302 PushV
	var_293_bool = 0; // 0x303 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x304 PushV
	var_295_object = var_1_object; // 0x305 MovT
	func_5531(var_294_bool, var_295_object); // 0x306 NEW_2
	if(var_294_bool == 0) goto Label_784; // 0x308 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x309 PushV
	var_304_object = var_1_object; // 0x30a MovT
	func_5519(var_304_object); // 0x30b NEW_2
	var_309_bool = var_303_bool == 0; // 0x30d Not
	if(var_309_bool == 0) goto Label_784; // 0x30e JumpB
	var_293_bool = 1; // 0x30f MovB
	
Label_784:
	if(var_293_bool == 0) goto Label_792; // 0x310 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x311 PushV
	var_311_object = var_1_object; // 0x312 MovT
	func_5423(var_311_object); // 0x313 NEW_2
	var_316_bool = var_310_bool == 0; // 0x315 Not
	if(var_316_bool == 0) goto Label_792; // 0x316 JumpB
	var_292_bool = 1; // 0x317 MovB
	
Label_792:
	if(var_292_bool == 0) goto Label_813; // 0x318 JumpB
	var_317_string = ""; // 0x319 PushV
	var_317_string = "Neutral"; // 0x31a MovS
	func_920(var_225_object, var_317_string); // 0x31b NEW_2
	var_318_int = 536148; // 0x31d PushI
	SetMessage(var_318_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_319_int = 536149; // 0x322 PushI
	var_320_int = 37916; // 0x323 PushI
	var_321_int = 37914; // 0x324 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x325 TObjFunc
	var_322_int = 536150; // 0x327 PushI
	var_323_int = 37916; // 0x328 PushI
	var_324_int = 37915; // 0x329 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x32a TObjFunc
	goto Label_890; // 0x32c Jump
	
Label_813:
	var_325_bool = 0; // 0x32d PushV
	var_325_bool = 0; // 0x32e MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x32f PushV
	var_327_object = var_1_object; // 0x330 MovT
	func_5531(var_326_bool, var_327_object); // 0x331 NEW_2
	if(var_326_bool == 0) goto Label_827; // 0x333 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x334 PushV
	var_329_object = var_1_object; // 0x335 MovT
	func_5519(var_329_object); // 0x336 NEW_2
	var_330_bool = var_328_bool == 0; // 0x338 Not
	if(var_330_bool == 0) goto Label_827; // 0x339 JumpB
	var_325_bool = 1; // 0x33a MovB
	
Label_827:
	if(var_325_bool == 0) goto Label_843; // 0x33b JumpB
	var_331_string = ""; // 0x33c PushV
	var_331_string = "Neutral"; // 0x33d MovS
	func_920(var_225_object, var_331_string); // 0x33e NEW_2
	var_332_int = 509078; // 0x340 PushI
	SetMessage(var_332_int); // 0x341 TObjFunc
	ClearReplies(); // 0x343 TObjFunc
	var_333_int = 509079; // 0x345 PushI
	var_334_int = 9958; // 0x346 PushI
	var_335_int = 9957; // 0x347 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x348 TObjFunc
	goto Label_890; // 0x34a Jump
	
Label_843:
	var_336_string = ""; // 0x34b PushV
	var_336_string = "Neutral"; // 0x34c MovS
	func_920(var_225_object, var_336_string); // 0x34d NEW_2
	var_337_int = 508778; // 0x34f PushI
	SetMessage(var_337_int); // 0x350 TObjFunc
	ClearReplies(); // 0x352 TObjFunc
	var_338_bool = 0; var_339_object = Obj(); // 0x354 PushV
	var_339_object = var_1_object; // 0x355 MovT
	func_5471(var_339_object); // 0x356 NEW_2
	if(var_338_bool == 0) goto Label_862; // 0x358 JumpB
	var_340_int = 511141; // 0x359 PushI
	var_341_int = 12331; // 0x35a PushI
	var_342_int = 12330; // 0x35b PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x35c TObjFunc
	
Label_862:
	var_343_bool = 0; var_344_object = Obj(); // 0x35e PushV
	var_344_object = var_1_object; // 0x35f MovT
	func_5495(var_344_object); // 0x360 NEW_2
	if(var_343_bool == 0) goto Label_872; // 0x362 JumpB
	var_349_int = 508779; // 0x363 PushI
	var_350_int = 9681; // 0x364 PushI
	var_351_int = 9626; // 0x365 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x366 TObjFunc
	
Label_872:
	var_352_bool = 0; var_353_object = Obj(); // 0x368 PushV
	var_353_object = var_1_object; // 0x369 MovT
	func_5507(var_353_object); // 0x36a NEW_2
	if(var_352_bool == 0) goto Label_882; // 0x36c JumpB
	var_358_int = 508780; // 0x36d PushI
	var_359_int = 9669; // 0x36e PushI
	var_360_int = 9627; // 0x36f PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x370 TObjFunc
	
Label_882:
	var_361_int = 511140; // 0x372 PushI
	var_362_int = -1; // 0x373 PushI
	var_363_int = 12329; // 0x374 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x375 TObjFunc
	goto Label_890; // 0x377 Jump
}


func_4562()
{
	StopAnimation(); // 0x11d2 Func
	StopGroup0(); // 0x11d4 Func
	return 0; // 0x11d6 Return
}


func_5589(var_627_bool)
{
	var_629_int = 0; var_630_string = ""; // 0x15d6 PushV
	var_630_string = "d6RubinGoesToGeorg"; // 0x15d7 MovS
	func_4891(var_629_int, var_630_string); // 0x15d8 NEW_2
	var_631_int = 0; // 0x15da PushI
	var_632_bool = var_629_int != var_631_int; // 0x15db Neq
	if(var_632_bool == 0) goto Label_5599; // 0x15dc JumpB
	var_627_bool = 1; // 0x15dd MovB
	return 0; // 0x15de Return
	
Label_5599:
	var_627_bool = 0; // 0x15df MovB
	return 0; // 0x15e0 Return
}


func_4822(var_276_string)
{
	var_277_bool = 0; var_278_float = 0; var_279_float = 0; var_280_bool = 0; var_281_float = 0; var_282_float = 0; // 0x12d6 PushV
	lshHasAnimation(var_280_bool, var_276_string); // 0x12d7 Func
	var_283_bool = var_280_bool; // 0x12d9 Push
	if(var_283_bool == 0) goto Label_4833; // 0x12da JumpB
	lshGetAnimTimes(var_276_string, var_281_float, var_282_float); // 0x12db Func
	var_284_bool = 0; // 0x12dd PushB
	lshPlayAnimation(var_281_float, var_282_float, var_284_bool); // 0x12de Func
	goto Label_4837; // 0x12e0 Jump
	
Label_4837:
	return 6; // 0x12e5 Return
	
Label_4833:
	var_285_string = "Can't find lsh animation : "; // 0x12e1 PushS
	var_286_int = var_285_string + var_276_string; // 0x12e2 Add
	Trace(var_286_int); // 0x12e3 Func
}


func_5078(var_54_object)
{
	var_56_string = "bluevaccine is given"; // 0x13d7 PushS
	Trace(var_56_string); // 0x13d8 Func
	var_57_object = Obj(); var_58_string = ""; var_59_int = 0; // 0x13da PushV
	var_57_object = var_54_object; // 0x13db Mov
	var_58_string = "blue_vaccine"; // 0x13dc MovS
	var_59_int = 1; // 0x13dd MovI
	func_4939(var_57_object, var_58_string, var_59_int); // 0x13de NEW_2
	return 0; // 0x13e0 Return
}


func_4567(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x11d7 PushV
	GetPosition(var_56_cvector); // 0x11d8 Func
	GetPosition(var_57_cvector); // 0x11da ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0x11dc Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0x11dd Or2
	return 6; // 0x11de Return
}


func_4315(var_0_object)
{
	var_36_bool = 0; // 0x10db PushV
	func_4594(var_36_bool); // 0x10dc NEW_2
	var_39_bool = var_36_bool == 0; // 0x10de Not
	if(var_39_bool == 0) goto Label_4322; // 0x10df JumpB
	Hold(); // 0x10e0 Func
	
Label_4322:
	GetDirection(var_0_object); // 0x10e2 Func
	
Label_4324:
	func_4491(); // 0x10e5 NEW_2
	goto Label_4324; // 0x10e7 Jump
}


func_4575(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0x11df PushV
	GetPosition(var_49_cvector); // 0x11e0 Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0x11e2 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0x11e3 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0x11e4 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0x11e5 Func
	var_44_bool = var_51_bool; // 0x11e7 Mov
	return 6; // 0x11e8 Return
}


func_5601(var_579_bool)
{
	var_581_int = 0; var_582_string = ""; // 0x15e2 PushV
	var_582_string = "d5q01"; // 0x15e3 MovS
	func_4891(var_581_int, var_582_string); // 0x15e4 NEW_2
	var_583_int = 0; // 0x15e6 PushI
	var_584_bool = var_581_int == var_583_int; // 0x15e7 Eq
	if(var_584_bool == 0) goto Label_5611; // 0x15e8 JumpB
	var_579_bool = 1; // 0x15e9 MovB
	return 0; // 0x15ea Return
	
Label_5611:
	var_579_bool = 0; // 0x15eb MovB
	return 0; // 0x15ec Return
}


func_5858(var_54_object)
{
	var_55_bool = 0; var_56_int = 0; // 0x16e3 PushV
	var_56_int = 3; // 0x16e4 MovI
	func_5002(var_55_bool, var_56_int); // 0x16e5 NEW_2
	if(var_55_bool == 0) goto Label_5871; // 0x16e7 JumpB
	var_63_int = 0; var_64_object = Obj(); // 0x16e8 PushV
	var_64_object = var_54_object; // 0x16e9 Mov
	TaskCall(4); // 0x16ea TaskCall
	func_642(var_65_object, var_63_int, var_64_object); // 0x16eb NEW_2
	TaskReturn(); // 0x16ec TaskReturn
	return 0; // 0x16ee Return
	
Label_5871:
	var_372_bool = 0; var_373_int = 0; // 0x16ef PushV
	var_373_int = 4; // 0x16f0 MovI
	func_5002(var_372_bool, var_373_int); // 0x16f1 NEW_2
	if(var_372_bool == 0) goto Label_5883; // 0x16f3 JumpB
	var_374_int = 0; var_375_object = Obj(); // 0x16f4 PushV
	var_375_object = var_54_object; // 0x16f5 Mov
	TaskCall(8); // 0x16f6 TaskCall
	func_3407(var_376_object, var_374_int, var_375_object); // 0x16f7 NEW_2
	TaskReturn(); // 0x16f8 TaskReturn
	return 0; // 0x16fa Return
	
Label_5883:
	var_448_bool = 0; var_449_int = 0; // 0x16fb PushV
	var_449_int = 5; // 0x16fc MovI
	func_5002(var_448_bool, var_449_int); // 0x16fd NEW_2
	if(var_448_bool == 0) goto Label_5895; // 0x16ff JumpB
	var_450_int = 0; var_451_object = Obj(); // 0x1700 PushV
	var_451_object = var_54_object; // 0x1701 Mov
	TaskCall(6); // 0x1702 TaskCall
	func_2212(var_452_object, var_450_int, var_451_object); // 0x1703 NEW_2
	TaskReturn(); // 0x1704 TaskReturn
	return 0; // 0x1706 Return
	
Label_5895:
	var_593_bool = 0; var_594_int = 0; // 0x1707 PushV
	var_594_int = 6; // 0x1708 MovI
	func_5002(var_593_bool, var_594_int); // 0x1709 NEW_2
	if(var_593_bool == 0) goto Label_5907; // 0x170b JumpB
	var_595_int = 0; var_596_object = Obj(); // 0x170c PushV
	var_596_object = var_54_object; // 0x170d Mov
	TaskCall(10); // 0x170e TaskCall
	func_3756(var_597_object, var_595_int, var_596_object); // 0x170f NEW_2
	TaskReturn(); // 0x1710 TaskReturn
	return 0; // 0x1712 Return
	
Label_5907:
	var_676_bool = 0; var_677_int = 0; // 0x1713 PushV
	var_677_int = 10; // 0x1714 MovI
	func_5002(var_676_bool, var_677_int); // 0x1715 NEW_2
	if(var_676_bool == 0) goto Label_5919; // 0x1717 JumpB
	var_678_int = 0; var_679_object = Obj(); // 0x1718 PushV
	var_679_object = var_54_object; // 0x1719 Mov
	TaskCall(0); // 0x171a TaskCall
	func_0(var_680_object, var_678_int, var_679_object); // 0x171b NEW_2
	TaskReturn(); // 0x171c TaskReturn
	return 0; // 0x171e Return
	
Label_5919:
	var_743_bool = 0; var_744_int = 0; // 0x171f PushV
	var_744_int = 12; // 0x1720 MovI
	func_5002(var_743_bool, var_744_int); // 0x1721 NEW_2
	if(var_743_bool == 0) goto Label_5931; // 0x1723 JumpB
	var_745_int = 0; var_746_object = Obj(); // 0x1724 PushV
	var_746_object = var_54_object; // 0x1725 Mov
	TaskCall(2); // 0x1726 TaskCall
	func_383(var_747_object, var_745_int, var_746_object); // 0x1727 NEW_2
	TaskReturn(); // 0x1728 TaskReturn
	return 0; // 0x172a Return
	
Label_5931:
	var_804_int = 0; var_805_object = Obj(); // 0x172b PushV
	var_805_object = var_54_object; // 0x172c Mov
	TaskCall(12); // 0x172d TaskCall
	func_4108(var_806_object, var_804_int, var_805_object); // 0x172e NEW_2
	TaskReturn(); // 0x172f TaskReturn
	return 0; // 0x1731 Return
}


func_5089()
{
	var_44_string = "ood4Rubin1"; // 0x13e2 PushS
	var_45_int = 1; // 0x13e3 PushI
	SetVariable(var_44_string, var_45_int); // 0x13e4 Func
	return 0; // 0x13e6 Return
}


func_4838(var_254_string, var_255_bool)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0; // 0x12e6 PushV
	lshHasAnimation(var_261_bool, var_254_string); // 0x12e7 Func
	var_264_bool = var_261_bool; // 0x12e9 Push
	if(var_264_bool == 0) goto Label_4848; // 0x12ea JumpB
	lshGetAnimTimes(var_254_string, var_262_float, var_263_float); // 0x12eb Func
	lshPlayAnimation(var_262_float, var_263_float, var_255_bool); // 0x12ed Func
	goto Label_4852; // 0x12ef Jump
	
Label_4852:
	return 6; // 0x12f4 Return
	
Label_4848:
	var_265_string = "Can't find lsh animation : "; // 0x12f0 PushS
	var_266_int = var_265_string + var_254_string; // 0x12f1 Add
	Trace(var_266_int); // 0x12f2 Func
}


func_5095()
{
	var_50_string = "ood4Rubin2"; // 0x13e8 PushS
	var_51_int = 1; // 0x13e9 PushI
	SetVariable(var_50_string, var_51_int); // 0x13ea Func
	return 0; // 0x13ec Return
}


func_5353()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x14e9 PushV
	var_46_string = "d6RubinGoesToGeorg"; // 0x14ea PushS
	var_47_int = 1; // 0x14eb PushI
	SetVariable(var_46_string, var_47_int); // 0x14ec Func
	var_48_string = "warehouse_rubin"; // 0x14ee PushS
	GetSceneByName(var_45_object, var_48_string); // 0x14ef Func
	var_49_string = "norubin"; // 0x14f1 PushS
	Trigger(var_45_object, var_49_string); // 0x14f2 Func
	return 2; // 0x14f4 Return
}


func_4329(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x10e9 PushV
	var_64_string = "player"; // 0x10ea PushS
	FindActor(var_63_object, var_64_string); // 0x10eb Func
	var_65_bool = var_63_object == 0; // 0x10ed Not
	if(var_65_bool == 0) goto Label_4337; // 0x10ee JumpB
	var_61_bool = 0; // 0x10ef MovB
	return 2; // 0x10f0 Return
	
Label_4337:
	var_66_bool = 0; var_67_object = Obj(); // 0x10f1 PushV
	var_67_object = var_63_object; // 0x10f2 Mov
	func_4585(var_67_object); // 0x10f3 NEW_2
	var_61_bool = var_66_bool; // 0x10f4 Mov
	return 2; // 0x10f6 Return
}


func_4585(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x11e9 PushV
	GetPosition(var_43_cvector); // 0x11ea ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0x11ec PushV
	var_45_cvector = var_43_cvector; // 0x11ed Mov
	func_4575(var_44_bool, var_45_cvector); // 0x11ee NEW_2
	var_40_bool = var_44_bool; // 0x11ef Mov
	return 2; // 0x11f1 Return
}


func_5101(var_78_object)
{
	var_80_string = "lens is given"; // 0x13ee PushS
	Trace(var_80_string); // 0x13ef Func
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x13f1 PushV
	var_81_object = var_78_object; // 0x13f2 Mov
	var_82_string = "lens"; // 0x13f3 MovS
	var_83_int = 1; // 0x13f4 MovI
	func_4939(var_81_object, var_82_string, var_83_int); // 0x13f5 NEW_2
	return 0; // 0x13f7 Return
}


func_5613(var_568_bool)
{
	var_570_int = 0; var_571_string = ""; // 0x15ee PushV
	var_571_string = "ood5Rubin3"; // 0x15ef MovS
	func_4891(var_570_int, var_571_string); // 0x15f0 NEW_2
	var_572_int = 0; // 0x15f2 PushI
	var_573_bool = var_570_int == var_572_int; // 0x15f3 Eq
	if(var_573_bool == 0) goto Label_5623; // 0x15f4 JumpB
	var_568_bool = 1; // 0x15f5 MovB
	return 0; // 0x15f6 Return
	
Label_5623:
	var_568_bool = 0; // 0x15f7 MovB
	return 0; // 0x15f8 Return
}


func_3566(var_2_object, var_405_string)
{
	var_406_bool = 0; // 0xdef PushV
	func_5040(var_406_bool); // 0xdf0 NEW_2
	var_407_bool = var_406_bool == 0; // 0xdf2 Not
	if(var_407_bool == 0) goto Label_3573; // 0xdf3 JumpB
	return 0; // 0xdf4 Return
	
Label_3573:
	var_408_bool = var_405_string == var_2_object; // 0xdf5 Eq
	if(var_408_bool == 0) goto Label_3576; // 0xdf6 JumpB
	return 0; // 0xdf7 Return
	
Label_3576:
	var_409_string = ""; var_410_bool = 0; // 0xdf8 PushV
	var_409_string = var_405_string; // 0xdf9 Mov
	var_411_string = ""; // 0xdfa PushS
	var_412_bool = var_405_string == var_411_string; // 0xdfb Eq
	if(var_412_bool == 0) goto Label_3583; // 0xdfc JumpB
	var_410_bool = 0; // 0xdfd MovB
	goto Label_3584; // 0xdfe Jump
	
Label_3584:
	func_4838(var_409_string, var_410_bool); // 0xe00 NEW_2
	var_2_object = var_405_string; // 0xe02 TMov
	return 0; // 0xe03 Return
	
Label_3583:
	var_410_bool = 1; // 0xdff MovB
}


func_4594(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x11f2 PushV
	IsLoaded(var_38_bool); // 0x11f3 Func
	var_36_bool = var_38_bool; // 0x11f5 Mov
	return 2; // 0x11f6 Return
}


func_2293(var_0_object, var_1_object, var_2_object, var_3_string, var_474_object, var_475_object)
{
	var_0_object = var_475_object; // 0x8f6 TMov
	var_1_object = var_474_object; // 0x8f7 TMov
	var_3_string = 0; // 0x8f8 TMovB
	var_480_int = 1; // 0x8f9 PushI
	if(var_480_int == 0) goto Label_2433; // 0x8fa JumpB
	var_481_bool = 0; var_482_object = Obj(); // 0x8fb PushV
	var_482_object = var_1_object; // 0x8fc MovT
	func_5542(var_482_object); // 0x8fd NEW_2
	if(var_481_bool == 0) goto Label_2329; // 0x8ff JumpB
	var_487_object = Obj(); var_488_object = Obj(); // 0x900 PushV
	var_487_object = var_1_object; // 0x901 MovT
	var_488_object = var_0_object; // 0x902 MovT
	func_5399(); // 0x903 NEW_2
	var_491_object = Obj(); var_492_object = Obj(); // 0x905 PushV
	var_491_object = var_1_object; // 0x906 MovT
	var_492_object = var_0_object; // 0x907 MovT
	func_5216(); // 0x908 NEW_2
	var_495_string = ""; // 0x90a PushV
	var_495_string = "Rage"; // 0x90b MovS
	func_2463(var_475_object, var_495_string); // 0x90c NEW_2
	var_503_int = 511527; // 0x90e PushI
	SetMessage(var_503_int); // 0x90f TObjFunc
	ClearReplies(); // 0x911 TObjFunc
	var_504_int = 511528; // 0x913 PushI
	var_505_int = 12722; // 0x914 PushI
	var_506_int = 12721; // 0x915 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x916 TObjFunc
	goto Label_2433; // 0x918 Jump
	
Label_2433:
	var_507_bool = 0; // 0x981 PushV
	func_5040(var_507_bool); // 0x982 NEW_2
	if(var_507_bool == 0) goto Label_2448; // 0x984 JumpB
	
Label_2437:
	lshWaitForAnimEnd(); // 0x985 Func
	var_508_string = var_3_string; // 0x987 PushT
	if(var_508_string == 0) goto Label_2442; // 0x988 JumpB
	goto Label_2447; // 0x989 Jump
	
Label_2447:
	goto Label_2462; // 0x98f Jump
	
Label_2462:
	return 0; // 0x99e Return
	
Label_2442:
	var_509_string = ""; // 0x98a PushV
	var_509_string = var_2_object; // 0x98b MovT
	func_4822(var_509_string); // 0x98c NEW_2
	goto Label_2437; // 0x98e Jump
	
Label_2448:
	var_510_string = "all"; // 0x990 PushS
	var_511_string = "idle"; // 0x991 PushS
	PlayAnimation(var_510_string, var_511_string); // 0x992 Func
	
Label_2452:
	WaitForAnimEnd(); // 0x994 Func
	var_512_string = var_3_string; // 0x996 PushT
	if(var_512_string == 0) goto Label_2457; // 0x997 JumpB
	goto Label_2462; // 0x998 Jump
	
Label_2457:
	var_513_string = "all"; // 0x999 PushS
	var_514_string = "idle"; // 0x99a PushS
	PlayAnimation(var_513_string, var_514_string); // 0x99b Func
	goto Label_2452; // 0x99d Jump
	
Label_2329:
	var_515_bool = 0; // 0x919 PushV
	var_515_bool = 0; // 0x91a MovB
	var_516_bool = 0; // 0x91b PushV
	var_516_bool = 0; // 0x91c MovB
	var_517_bool = 0; var_518_object = Obj(); // 0x91d PushV
	var_518_object = var_1_object; // 0x91e MovT
	func_5566(var_518_object); // 0x91f NEW_2
	if(var_517_bool == 0) goto Label_2344; // 0x921 JumpB
	var_523_bool = 0; var_524_object = Obj(); // 0x922 PushV
	var_524_object = var_1_object; // 0x923 MovT
	func_5554(var_524_object); // 0x924 NEW_2
	if(var_523_bool == 0) goto Label_2344; // 0x926 JumpB
	var_516_bool = 1; // 0x927 MovB
	
Label_2344:
	if(var_516_bool == 0) goto Label_2351; // 0x928 JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x929 PushV
	var_530_object = var_1_object; // 0x92a MovT
	func_5578(var_529_bool, var_530_object); // 0x92b NEW_2
	if(var_529_bool == 0) goto Label_2351; // 0x92d JumpB
	var_515_bool = 1; // 0x92e MovB
	
Label_2351:
	if(var_515_bool == 0) goto Label_2377; // 0x92f JumpB
	var_534_object = Obj(); var_535_object = Obj(); // 0x930 PushV
	var_534_object = var_1_object; // 0x931 MovT
	var_535_object = var_0_object; // 0x932 MovT
	func_5257(); // 0x933 NEW_2
	var_538_string = ""; // 0x935 PushV
	var_538_string = "Neutral"; // 0x936 MovS
	func_2463(var_475_object, var_538_string); // 0x937 NEW_2
	var_539_int = 510510; // 0x939 PushI
	SetMessage(var_539_int); // 0x93a TObjFunc
	ClearReplies(); // 0x93c TObjFunc
	var_540_int = 510511; // 0x93e PushI
	var_541_int = 11594; // 0x93f PushI
	var_542_int = 11593; // 0x940 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x941 TObjFunc
	var_543_int = 510521; // 0x943 PushI
	var_544_int = 11594; // 0x944 PushI
	var_545_int = 11604; // 0x945 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x946 TObjFunc
	goto Label_2433; // 0x948 Jump
	
Label_2377:
	var_546_string = ""; // 0x949 PushV
	var_546_string = "Neutral"; // 0x94a MovS
	func_2463(var_475_object, var_546_string); // 0x94b NEW_2
	var_547_int = 510500; // 0x94d PushI
	SetMessage(var_547_int); // 0x94e TObjFunc
	ClearReplies(); // 0x950 TObjFunc
	var_548_bool = 0; var_549_object = Obj(); // 0x952 PushV
	var_549_object = var_1_object; // 0x953 MovT
	func_5625(var_549_object); // 0x954 NEW_2
	if(var_548_bool == 0) goto Label_2396; // 0x956 JumpB
	var_564_int = 510509; // 0x957 PushI
	var_565_int = 16679; // 0x958 PushI
	var_566_int = 11591; // 0x959 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x95a TObjFunc
	
Label_2396:
	var_567_bool = 0; // 0x95c PushV
	var_567_bool = 0; // 0x95d MovB
	var_568_bool = 0; var_569_object = Obj(); // 0x95e PushV
	var_569_object = var_1_object; // 0x95f MovT
	func_5613(var_569_object); // 0x960 NEW_2
	if(var_568_bool == 0) goto Label_2409; // 0x962 JumpB
	var_574_bool = 0; var_575_object = Obj(); // 0x963 PushV
	var_575_object = var_1_object; // 0x964 MovT
	func_5625(var_575_object); // 0x965 NEW_2
	if(var_574_bool == 0) goto Label_2409; // 0x967 JumpB
	var_567_bool = 1; // 0x968 MovB
	
Label_2409:
	if(var_567_bool == 0) goto Label_2415; // 0x969 JumpB
	var_576_int = 510501; // 0x96a PushI
	var_577_int = 11584; // 0x96b PushI
	var_578_int = 11583; // 0x96c PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x96d TObjFunc
	
Label_2415:
	var_579_bool = 0; var_580_object = Obj(); // 0x96f PushV
	var_580_object = var_1_object; // 0x970 MovT
	func_5601(var_580_object); // 0x971 NEW_2
	if(var_579_bool == 0) goto Label_2425; // 0x973 JumpB
	var_585_int = 515653; // 0x974 PushI
	var_586_int = 16690; // 0x975 PushI
	var_587_int = 16689; // 0x976 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x977 TObjFunc
	
Label_2425:
	var_588_int = 515647; // 0x979 PushI
	var_589_int = -1; // 0x97a PushI
	var_590_int = 16682; // 0x97b PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x97c TObjFunc
	goto Label_2433; // 0x97e Jump
}


func_5366(var_50_object)
{
	var_52_string = "whitevaccine is given"; // 0x14f7 PushS
	Trace(var_52_string); // 0x14f8 Func
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0; // 0x14fa PushV
	var_53_object = var_50_object; // 0x14fb Mov
	var_54_string = "white_vaccine"; // 0x14fc MovS
	var_55_int = 1; // 0x14fd MovI
	func_4939(var_53_object, var_54_string, var_55_int); // 0x14fe NEW_2
	return 0; // 0x1500 Return
}


func_4853(var_168_bool, var_169_string)
{
	var_170_bool = 0; var_171_bool = 0; // 0x12f5 PushV
	var_172_bool = 0; // 0x12f6 PushV
	func_5040(var_172_bool); // 0x12f7 NEW_2
	if(var_172_bool == 0) goto Label_4866; // 0x12f9 JumpB
	lshHasSpeech(var_171_bool, var_169_string); // 0x12fa Func
	var_173_bool = var_171_bool; // 0x12fc Push
	if(var_173_bool == 0) goto Label_4866; // 0x12fd JumpB
	lshPlaySpeech(var_169_string); // 0x12fe Func
	var_168_bool = 1; // 0x1300 MovB
	return 2; // 0x1301 Return
	
Label_4866:
	var_168_bool = 0; // 0x1302 MovB
	return 2; // 0x1303 Return
}


func_4344(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0x10f8 PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0x10f9 PushE
	RotateAsync(var_113_float, var_114_float); // 0x10fa Func
	return 0; // 0x10fc Return
}


func_5625(var_548_bool)
{
	var_550_bool = 0; // 0x15fa PushV
	var_550_bool = 0; // 0x15fb MovB
	var_551_bool = 0; // 0x15fc PushV
	var_551_bool = 0; // 0x15fd MovB
	var_552_int = 0; var_553_string = ""; // 0x15fe PushV
	var_553_string = "d5q01"; // 0x15ff MovS
	func_4891(var_552_int, var_553_string); // 0x1600 NEW_2
	var_554_int = 0; // 0x1602 PushI
	var_555_bool = var_552_int != var_554_int; // 0x1603 Neq
	if(var_555_bool == 0) goto Label_5645; // 0x1604 JumpB
	var_556_int = 0; var_557_string = ""; // 0x1605 PushV
	var_557_string = "d5q01"; // 0x1606 MovS
	func_4891(var_556_int, var_557_string); // 0x1607 NEW_2
	var_558_int = -1; // 0x1609 PushI
	var_559_bool = var_556_int != var_558_int; // 0x160a Neq
	if(var_559_bool == 0) goto Label_5645; // 0x160b JumpB
	var_551_bool = 1; // 0x160c MovB
	
Label_5645:
	if(var_551_bool == 0) goto Label_5654; // 0x160d JumpB
	var_560_int = 0; var_561_string = ""; // 0x160e PushV
	var_561_string = "d5q01"; // 0x160f MovS
	func_4891(var_560_int, var_561_string); // 0x1610 NEW_2
	var_562_int = 1000; // 0x1612 PushI
	var_563_bool = var_560_int != var_562_int; // 0x1613 Neq
	if(var_563_bool == 0) goto Label_5654; // 0x1614 JumpB
	var_550_bool = 1; // 0x1615 MovB
	
Label_5654:
	if(var_550_bool == 0) goto Label_5657; // 0x1616 JumpB
	var_548_bool = 1; // 0x1617 MovB
	return 0; // 0x1618 Return
	
Label_5657:
	var_548_bool = 0; // 0x1619 MovB
	return 0; // 0x161a Return
}


func_4349(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0x10fd PushV
	var_49_string = "player"; // 0x10fe PushS
	FindActor(var_47_object, var_49_string); // 0x10ff Func
	var_50_bool = var_47_object == 0; // 0x1101 Not
	if(var_50_bool == 0) goto Label_4357; // 0x1102 JumpB
	var_44_bool = 0; // 0x1103 MovB
	return 4; // 0x1104 Return
	
Label_4357:
	var_51_float = 0; var_52_object = Obj(); // 0x1105 PushV
	var_52_object = var_47_object; // 0x1106 Mov
	func_4567(var_52_object); // 0x1107 NEW_2
	var_59_float = 90000.0; // 0x1109 PushF
	var_60_bool = var_51_float > var_59_float; // 0x110a GT
	if(var_60_bool == 0) goto Label_4366; // 0x110b JumpB
	var_44_bool = 0; // 0x110c MovB
	return 4; // 0x110d Return
	
Label_4366:
	CanSee(var_48_bool, var_47_object); // 0x110e Func
	var_44_bool = var_48_bool; // 0x1110 Mov
	return 4; // 0x1111 Return
}


func_5118()
{
	var_80_string = "playsound"; // 0x13ff PushS
	var_81_string = "giveitem"; // 0x1400 PushS
	TriggerWorld(var_80_string, var_81_string); // 0x1401 Func
	return 0; // 0x1403 Return
}


