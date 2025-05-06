task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xbb PushI
	if(var_9_int == 0) goto Label_560; // 0xbc JumpB
	func_1165(); // 0xbe NEW_2
	var_11_int = 15565; // 0xc0 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xc1 Eq
	if(var_12_bool == 0) goto Label_205; // 0xc2 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xc3 PushV
	var_13_object = var_1_object; // 0xc4 MovT
	var_14_object = var_0_object; // 0xc5 MovT
	func_1226(); // 0xc6 NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xc8 PushV
	var_25_object = var_1_object; // 0xc9 MovT
	var_26_object = var_0_object; // 0xca MovT
	func_1243(); // 0xcb NEW_2
	
Label_205:
	var_57_int = 41689; // 0xcd PushI
	var_58_bool = var_8_bool == var_57_int; // 0xce Eq
	if(var_58_bool == 0) goto Label_218; // 0xcf JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xd0 PushV
	var_59_object = var_1_object; // 0xd1 MovT
	var_60_object = var_0_object; // 0xd2 MovT
	func_1226(); // 0xd3 NEW_2
	var_61_object = Obj(); var_62_object = Obj(); // 0xd5 PushV
	var_61_object = var_1_object; // 0xd6 MovT
	var_62_object = var_0_object; // 0xd7 MovT
	func_1243(); // 0xd8 NEW_2
	
Label_218:
	var_63_int = 15548; // 0xda PushI
	var_64_bool = var_7_cvector == var_63_int; // 0xdb Eq
	if(var_64_bool == 0) goto Label_266; // 0xdc JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0xdd PushV
	var_66_object = var_1_object; // 0xde MovT
	func_1265(var_66_object); // 0xdf NEW_2
	if(var_65_bool == 0) goto Label_246; // 0xe1 JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xe2 PushV
	var_71_object = var_1_object; // 0xe3 MovT
	var_72_object = var_0_object; // 0xe4 MovT
	func_1259(); // 0xe5 NEW_2
	var_75_string = ""; // 0xe7 PushV
	var_75_string = "Neutral"; // 0xe8 MovS
	func_164(var_8_bool, var_75_string); // 0xe9 NEW_2
	var_92_int = 514326; // 0xeb PushI
	SetMessage(var_92_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_93_int = 514327; // 0xf0 PushI
	var_94_int = 15550; // 0xf1 PushI
	var_95_int = 15549; // 0xf2 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_96_string = ""; // 0xf6 PushV
	var_96_string = "Neutral"; // 0xf7 MovS
	func_164(var_8_bool, var_96_string); // 0xf8 NEW_2
	var_97_int = 514532; // 0xfa PushI
	SetMessage(var_97_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_98_int = 514533; // 0xff PushI
	var_99_int = -1; // 0x100 PushI
	var_100_int = 15764; // 0x101 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x102 TObjFunc
	var_101_int = 539713; // 0x104 PushI
	var_102_int = -1; // 0x105 PushI
	var_103_int = 41672; // 0x106 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_104_int = 15550; // 0x10a PushI
	var_105_bool = var_7_cvector == var_104_int; // 0x10b Eq
	if(var_105_bool == 0) goto Label_289; // 0x10c JumpB
	var_106_string = ""; // 0x10d PushV
	var_106_string = "Sorrow"; // 0x10e MovS
	func_164(var_8_bool, var_106_string); // 0x10f NEW_2
	var_107_int = 514328; // 0x111 PushI
	SetMessage(var_107_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_108_int = 514329; // 0x116 PushI
	var_109_int = 15552; // 0x117 PushI
	var_110_int = 15551; // 0x118 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x119 TObjFunc
	var_111_int = 539714; // 0x11b PushI
	var_112_int = 41674; // 0x11c PushI
	var_113_int = 41673; // 0x11d PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_114_int = 41674; // 0x121 PushI
	var_115_bool = var_7_cvector == var_114_int; // 0x122 Eq
	if(var_115_bool == 0) goto Label_307; // 0x123 JumpB
	var_116_string = ""; // 0x124 PushV
	var_116_string = "Neutral"; // 0x125 MovS
	func_164(var_8_bool, var_116_string); // 0x126 NEW_2
	var_117_int = 539715; // 0x128 PushI
	SetMessage(var_117_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_118_int = 539716; // 0x12d PushI
	var_119_int = 15552; // 0x12e PushI
	var_120_int = 41675; // 0x12f PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_121_int = 15552; // 0x133 PushI
	var_122_bool = var_7_cvector == var_121_int; // 0x134 Eq
	if(var_122_bool == 0) goto Label_330; // 0x135 JumpB
	var_123_string = ""; // 0x136 PushV
	var_123_string = "Sorrow"; // 0x137 MovS
	func_164(var_8_bool, var_123_string); // 0x138 NEW_2
	var_124_int = 514330; // 0x13a PushI
	SetMessage(var_124_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_125_int = 514331; // 0x13f PushI
	var_126_int = 15554; // 0x140 PushI
	var_127_int = 15553; // 0x141 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x142 TObjFunc
	var_128_int = 514344; // 0x144 PushI
	var_129_int = 15567; // 0x145 PushI
	var_130_int = 15566; // 0x146 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_131_int = 15567; // 0x14a PushI
	var_132_bool = var_7_cvector == var_131_int; // 0x14b Eq
	if(var_132_bool == 0) goto Label_348; // 0x14c JumpB
	var_133_string = ""; // 0x14d PushV
	var_133_string = "Sorrow"; // 0x14e MovS
	func_164(var_8_bool, var_133_string); // 0x14f NEW_2
	var_134_int = 514345; // 0x151 PushI
	SetMessage(var_134_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_135_int = 514346; // 0x156 PushI
	var_136_int = 15569; // 0x157 PushI
	var_137_int = 15568; // 0x158 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_138_int = 15569; // 0x15c PushI
	var_139_bool = var_7_cvector == var_138_int; // 0x15d Eq
	if(var_139_bool == 0) goto Label_366; // 0x15e JumpB
	var_140_string = ""; // 0x15f PushV
	var_140_string = "Sorrow"; // 0x160 MovS
	func_164(var_8_bool, var_140_string); // 0x161 NEW_2
	var_141_int = 514347; // 0x163 PushI
	SetMessage(var_141_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_142_int = 514348; // 0x168 PushI
	var_143_int = 15554; // 0x169 PushI
	var_144_int = 15570; // 0x16a PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_145_int = 15554; // 0x16e PushI
	var_146_bool = var_7_cvector == var_145_int; // 0x16f Eq
	if(var_146_bool == 0) goto Label_389; // 0x170 JumpB
	var_147_string = ""; // 0x171 PushV
	var_147_string = "Sorrow"; // 0x172 MovS
	func_164(var_8_bool, var_147_string); // 0x173 NEW_2
	var_148_int = 514332; // 0x175 PushI
	SetMessage(var_148_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_149_int = 514333; // 0x17a PushI
	var_150_int = 15556; // 0x17b PushI
	var_151_int = 15555; // 0x17c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x17d TObjFunc
	var_152_int = 539717; // 0x17f PushI
	var_153_int = 41678; // 0x180 PushI
	var_154_int = 41677; // 0x181 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_155_int = 41678; // 0x185 PushI
	var_156_bool = var_7_cvector == var_155_int; // 0x186 Eq
	if(var_156_bool == 0) goto Label_407; // 0x187 JumpB
	var_157_string = ""; // 0x188 PushV
	var_157_string = "Neutral"; // 0x189 MovS
	func_164(var_8_bool, var_157_string); // 0x18a NEW_2
	var_158_int = 539718; // 0x18c PushI
	SetMessage(var_158_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_159_int = 539719; // 0x191 PushI
	var_160_int = 41680; // 0x192 PushI
	var_161_int = 41679; // 0x193 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_162_int = 41680; // 0x197 PushI
	var_163_bool = var_7_cvector == var_162_int; // 0x198 Eq
	if(var_163_bool == 0) goto Label_425; // 0x199 JumpB
	var_164_string = ""; // 0x19a PushV
	var_164_string = "Neutral"; // 0x19b MovS
	func_164(var_8_bool, var_164_string); // 0x19c NEW_2
	var_165_int = 539720; // 0x19e PushI
	SetMessage(var_165_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_166_int = 539721; // 0x1a3 PushI
	var_167_int = 15560; // 0x1a4 PushI
	var_168_int = 41681; // 0x1a5 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_169_int = 15556; // 0x1a9 PushI
	var_170_bool = var_7_cvector == var_169_int; // 0x1aa Eq
	if(var_170_bool == 0) goto Label_443; // 0x1ab JumpB
	var_171_string = ""; // 0x1ac PushV
	var_171_string = "Smile"; // 0x1ad MovS
	func_164(var_8_bool, var_171_string); // 0x1ae NEW_2
	var_172_int = 514334; // 0x1b0 PushI
	SetMessage(var_172_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_173_int = 514335; // 0x1b5 PushI
	var_174_int = 15558; // 0x1b6 PushI
	var_175_int = 15557; // 0x1b7 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_176_int = 15558; // 0x1bb PushI
	var_177_bool = var_7_cvector == var_176_int; // 0x1bc Eq
	if(var_177_bool == 0) goto Label_461; // 0x1bd JumpB
	var_178_string = ""; // 0x1be PushV
	var_178_string = "Neutral"; // 0x1bf MovS
	func_164(var_8_bool, var_178_string); // 0x1c0 NEW_2
	var_179_int = 514336; // 0x1c2 PushI
	SetMessage(var_179_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_180_int = 514337; // 0x1c7 PushI
	var_181_int = 15560; // 0x1c8 PushI
	var_182_int = 15559; // 0x1c9 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_183_int = 15560; // 0x1cd PushI
	var_184_bool = var_7_cvector == var_183_int; // 0x1ce Eq
	if(var_184_bool == 0) goto Label_484; // 0x1cf JumpB
	var_185_string = ""; // 0x1d0 PushV
	var_185_string = "Doubt"; // 0x1d1 MovS
	func_164(var_8_bool, var_185_string); // 0x1d2 NEW_2
	var_186_int = 514338; // 0x1d4 PushI
	SetMessage(var_186_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_187_int = 514339; // 0x1d9 PushI
	var_188_int = 15562; // 0x1da PushI
	var_189_int = 15561; // 0x1db PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1dc TObjFunc
	var_190_int = 539722; // 0x1de PushI
	var_191_int = 41684; // 0x1df PushI
	var_192_int = 41683; // 0x1e0 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1e1 TObjFunc
	return 0; // 0x1e3 Return
	
Label_484:
	var_193_int = 41684; // 0x1e4 PushI
	var_194_bool = var_7_cvector == var_193_int; // 0x1e5 Eq
	if(var_194_bool == 0) goto Label_502; // 0x1e6 JumpB
	var_195_string = ""; // 0x1e7 PushV
	var_195_string = "Neutral"; // 0x1e8 MovS
	func_164(var_8_bool, var_195_string); // 0x1e9 NEW_2
	var_196_int = 539723; // 0x1eb PushI
	SetMessage(var_196_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_197_int = 539724; // 0x1f0 PushI
	var_198_int = 15562; // 0x1f1 PushI
	var_199_int = 41685; // 0x1f2 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_200_int = 15562; // 0x1f6 PushI
	var_201_bool = var_7_cvector == var_200_int; // 0x1f7 Eq
	if(var_201_bool == 0) goto Label_525; // 0x1f8 JumpB
	var_202_string = ""; // 0x1f9 PushV
	var_202_string = "Agression"; // 0x1fa MovS
	func_164(var_8_bool, var_202_string); // 0x1fb NEW_2
	var_203_int = 514340; // 0x1fd PushI
	SetMessage(var_203_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_204_int = 514341; // 0x202 PushI
	var_205_int = 15564; // 0x203 PushI
	var_206_int = 15563; // 0x204 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x205 TObjFunc
	var_207_int = 539725; // 0x207 PushI
	var_208_int = 15564; // 0x208 PushI
	var_209_int = 41687; // 0x209 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x20a TObjFunc
	return 0; // 0x20c Return
	
Label_525:
	var_210_int = 15564; // 0x20d PushI
	var_211_bool = var_7_cvector == var_210_int; // 0x20e Eq
	if(var_211_bool == 0) goto Label_548; // 0x20f JumpB
	var_212_string = ""; // 0x210 PushV
	var_212_string = "Neutral"; // 0x211 MovS
	func_164(var_8_bool, var_212_string); // 0x212 NEW_2
	var_213_int = 514342; // 0x214 PushI
	SetMessage(var_213_int); // 0x215 TObjFunc
	ClearReplies(); // 0x217 TObjFunc
	var_214_int = 514343; // 0x219 PushI
	var_215_int = -1; // 0x21a PushI
	var_216_int = 15565; // 0x21b PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x21c TObjFunc
	var_217_int = 539726; // 0x21e PushI
	var_218_int = -1; // 0x21f PushI
	var_219_int = 41689; // 0x220 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x221 TObjFunc
	return 0; // 0x223 Return
	
Label_548:
	var_3_string = 1; // 0x224 TMovB
	var_220_bool = 0; // 0x225 PushV
	func_1352(var_220_bool); // 0x226 NEW_2
	if(var_220_bool == 0) goto Label_556; // 0x228 JumpB
	lshStopAnimation(); // 0x229 Func
	goto Label_558; // 0x22b Jump
	
Label_558:
	return 0; // 0x22e Return
	
Label_556:
	StopAnimation(); // 0x22c Func
	
Label_560:
	return 0; // 0x230 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x23d PushV
	var_10_string = "cleanup"; // 0x23e PushS
	var_11_bool = var_7_string == var_10_string; // 0x23f Eq
	if(var_11_bool == 0) goto Label_588; // 0x240 JumpB
	var_1_object = 1; // 0x241 TMovB
	IsLoaded(var_9_bool); // 0x242 Func
	var_12_bool = var_9_bool == 0; // 0x244 Not
	if(var_12_bool == 0) goto Label_587; // 0x245 JumpB
	var_13_object = Obj(); // 0x246 PushV
	func_1172(var_13_object); // 0x247 NEW_2
	RemoveActor(var_13_object); // 0x249 Func
	
Label_587:
	goto Label_592; // 0x24b Jump
	
Label_592:
	return 2; // 0x250 Return
	
Label_588:
	var_16_string = "restore"; // 0x24c PushS
	var_17_bool = var_7_string == var_16_string; // 0x24d Eq
	if(var_17_bool == 0) goto Label_592; // 0x24e JumpB
	var_1_object = 0; // 0x24f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x251 PushT
	if(var_7_object == 0) goto Label_602; // 0x252 JumpB
	var_8_object = Obj(); // 0x253 PushV
	func_1172(var_8_object); // 0x254 NEW_2
	RemoveActor(var_8_object); // 0x256 Func
	Hold(); // 0x258 Func
	
Label_602:
	func_717(); // 0x25b NEW_2
	return 0; // 0x25d Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_732(); // 0x25f NEW_2
	return 0; // 0x261 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2a8 PushI
	var_9_bool = var_7_int == var_8_int; // 0x2a9 Eq
	if(var_9_bool == 0) goto Label_716; // 0x2aa JumpB
	func_675(); // 0x2ac NEW_2
	var_11_bool = 0; // 0x2ae PushV
	var_11_bool = 0; // 0x2af MovB
	var_12_bool = 0; // 0x2b0 PushV
	func_889(var_12_bool); // 0x2b1 NEW_2
	if(var_12_bool == 0) goto Label_697; // 0x2b3 JumpB
	var_15_bool = 0; // 0x2b4 PushV
	func_644(var_15_bool); // 0x2b5 NEW_2
	if(var_15_bool == 0) goto Label_697; // 0x2b7 JumpB
	var_11_bool = 1; // 0x2b8 MovB
	
Label_697:
	if(var_11_bool == 0) goto Label_710; // 0x2b9 JumpB
	var_32_bool = 0; // 0x2ba PushV
	func_624(var_32_bool); // 0x2bb NEW_2
	if(var_32_bool == 0) goto Label_709; // 0x2bd JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2be PushV
	var_53_object = Obj(); // 0x2bf PushV
	func_1172(var_53_object); // 0x2c0 NEW_2
	var_52_object = var_53_object; // 0x2c1 Mov
	func_1039(var_52_object); // 0x2c3 NEW_2
	
Label_709:
	goto Label_716; // 0x2c5 Jump
	
Label_716:
	return 0; // 0x2cc Return
	
Label_710:
	func_639(var_7_int); // 0x2c7 NEW_2
	func_666(); // 0x2ca NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2ea Push
	if(var_8_bool == 0) goto Label_752; // 0x2eb JumpB
	func_666(); // 0x2ed NEW_2
	goto Label_756; // 0x2ef Jump
	
Label_756:
	return 0; // 0x2f4 Return
	
Label_752:
	var_14_string = ""; // 0x2f0 PushV
	var_14_string = "Neutral"; // 0x2f1 MovS
	func_1119(var_14_string); // 0x2f2 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2f5 PushV
	IsOverrideActive(var_9_bool); // 0x2f6 Func
	var_10_bool = var_9_bool == 0; // 0x2f8 Not
	if(var_10_bool == 0) goto Label_785; // 0x2f9 JumpB
	EventDisable(0); // 0x2fa EventDisable
	func_857(); // 0x2fc NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2fe PushV
	var_12_object = var_7_object; // 0x2ff Mov
	func_880(var_12_object); // 0x300 NEW_2
	EventEnable(0); // 0x302 EventEnable
	var_25_object = Obj(); // 0x303 PushV
	var_25_object = var_7_object; // 0x304 Mov
	func_561(var_25_object); // 0x305 NEW_2
	var_268_string = ""; // 0x307 PushV
	var_268_string = "Neutral"; // 0x308 MovS
	func_1119(var_268_string); // 0x309 NEW_2
	func_675(); // 0x30c NEW_2
	func_666(); // 0x30f NEW_2
	
Label_785:
	return 2; // 0x311 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_610(var_6_bool); // 0x23a NEW_2
	return 0; // 0x23c Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_894(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1346(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1344(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1348(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1350(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1327(var_89_int); // 0x22 NEW_2
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
	func_1172(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_981(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_259_bool = var_36_bool == 0; // 0x3f Not
	if(var_259_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_260_object = Obj(); // 0x46 PushV
	var_260_object = var_27_object; // 0x47 Mov
	func_963(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_644(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x284 PushV
	var_20_string = "player"; // 0x285 PushS
	FindActor(var_18_object, var_20_string); // 0x286 Func
	var_21_bool = var_18_object == 0; // 0x288 Not
	if(var_21_bool == 0) goto Label_652; // 0x289 JumpB
	var_15_bool = 0; // 0x28a MovB
	return 4; // 0x28b Return
	
Label_652:
	var_22_float = 0; var_23_object = Obj(); // 0x28c PushV
	var_23_object = var_18_object; // 0x28d Mov
	func_862(var_23_object); // 0x28e NEW_2
	var_30_float = 90000.0; // 0x290 PushF
	var_31_bool = var_22_float > var_30_float; // 0x291 GT
	if(var_31_bool == 0) goto Label_661; // 0x292 JumpB
	var_15_bool = 0; // 0x293 MovB
	return 4; // 0x294 Return
	
Label_661:
	CanSee(var_19_bool, var_18_object); // 0x295 Func
	var_15_bool = var_19_bool; // 0x297 Mov
	return 4; // 0x298 Return
}


func_1165()
{
	var_10_bool = 0; // 0x48d PushV
	func_1352(var_10_bool); // 0x48e NEW_2
	if(var_10_bool == 0) goto Label_1171; // 0x490 JumpB
	lshStopSpeech(); // 0x491 Func
	
Label_1171:
	return 0; // 0x493 Return
}


func_1294(var_27_object, var_28_string, var_29_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj(); var_44_bool = 0; // 0x50e PushV
	GetMainOutdoorScene(var_43_object); // 0x50f Func
	var_45_bool = var_43_object == 0; // 0x511 NullEq
	if(var_45_bool == 0) goto Label_1303; // 0x512 JumpB
	var_46_string = "Can't find main outdoor scene"; // 0x513 PushS
	Trace(var_46_string); // 0x514 Func
	return 8; // 0x516 Return
	
Label_1303:
	GetLocator(var_28_string, var_44_bool, var_41_cvector, var_42_cvector); // 0x517 ObjFunc
	var_47_bool = var_44_bool == 0; // 0x519 Not
	if(var_47_bool == 0) goto Label_1313; // 0x51a JumpB
	var_48_string = "Warning: outdoor scene locator "; // 0x51b PushS
	var_49_int = var_48_string + var_28_string; // 0x51c Add
	var_50_string = " doesnt exist"; // 0x51d PushS
	var_51_int = var_49_int + var_50_string; // 0x51e Add
	Trace(var_51_int); // 0x51f Func
	
Label_1313:
	GetMap(var_27_object); // 0x521 ObjFunc
	var_52_bool = var_27_object == 0; // 0x523 NullEq
	if(var_52_bool == 0) goto Label_1321; // 0x524 JumpB
	var_53_string = "Can't find map"; // 0x525 PushS
	Trace(var_53_string); // 0x526 Func
	return 8; // 0x528 Return
	
Label_1321:
	var_54_float = GetByIndex(var_41_cvector, 0); // 0x529 PushE
	var_55_float = GetByIndex(var_41_cvector, 2); // 0x52a PushE
	SetMapParams(var_54_float, var_55_float, var_29_float); // 0x52b ObjFunc
	return 8; // 0x52d Return
}


func_1039(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x40f PushV
	var_116_string = "c"; // 0x410 MovS
	var_117_int = 0; // 0x411 MovI
	
Label_1042:
	var_121_int = 1; // 0x412 PushI
	if(var_121_int == 0) goto Label_1055; // 0x413 JumpB
	var_122_int = 1; // 0x414 PushI
	var_123_int = var_117_int + var_122_int; // 0x415 Add
	var_124_int = var_116_string + var_123_int; // 0x416 Add
	HasProperty(var_124_int, var_118_bool); // 0x417 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x419 Not
	if(var_125_bool == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1055; // 0x41b Jump
	
Label_1055:
	var_126_bool = var_117_int == 0; // 0x41f Not
	if(var_126_bool == 0) goto Label_1059; // 0x420 JumpB
	var_109_bool = 0; // 0x421 MovB
	return 10; // 0x422 Return
	
Label_1059:
	var_119_int = 0; // 0x423 MovI
	var_127_int = 1; // 0x424 PushI
	var_128_bool = var_117_int > var_127_int; // 0x425 GT
	if(var_128_bool == 0) goto Label_1065; // 0x426 JumpB
	irand(var_119_int, var_117_int); // 0x427 Func
	
Label_1065:
	var_129_int = 1; // 0x429 PushI
	var_130_int = var_119_int + var_129_int; // 0x42a Add
	var_131_int = var_116_string + var_130_int; // 0x42b Add
	GetProperty(var_131_int, var_120_string); // 0x42c ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x42e PushV
	var_133_string = var_120_string; // 0x42f Mov
	func_1150(var_132_bool, var_133_string); // 0x430 NEW_2
	var_109_bool = var_132_bool; // 0x431 Mov
	return 10; // 0x433 Return
	
Label_1052:
	var_138_int = 1; // 0x41c PushI
	var_117_int = var_117_int + var_138_int; // 0x41d Add2
	goto Label_1042; // 0x41e Jump
}


func_786()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x312 PushV
	WaitForAnimEnd(); // 0x313 Func
	var_23_bool = 0; // 0x315 PushV
	func_889(var_23_bool); // 0x316 NEW_2
	var_24_bool = var_23_bool == 0; // 0x318 Not
	if(var_24_bool == 0) goto Label_795; // 0x319 JumpB
	return 12; // 0x31a Return
	
Label_795:
	var_25_int = 0; // 0x31b PushV
	func_1209(var_25_int); // 0x31c NEW_2
	var_17_int = var_25_int; // 0x31d Mov
	var_18_int = 0; // 0x31f MovI
	
Label_800:
	var_38_bool = 0; // 0x320 PushV
	var_38_bool = 0; // 0x321 MovB
	var_39_int = 5; // 0x322 PushI
	var_40_bool = var_18_int < var_39_int; // 0x323 LT
	if(var_40_bool == 0) goto Label_810; // 0x324 JumpB
	var_41_bool = 0; // 0x325 PushV
	func_889(var_41_bool); // 0x326 NEW_2
	if(var_41_bool == 0) goto Label_810; // 0x328 JumpB
	var_38_bool = 1; // 0x329 MovB
	
Label_810:
	if(var_38_bool == 0) goto Label_852; // 0x32a JumpB
	var_42_bool = var_17_int == 0; // 0x32b Not
	if(var_42_bool == 0) goto Label_820; // 0x32c JumpB
	var_43_int = 3; // 0x32d PushI
	Sleep(var_43_int, var_19_bool); // 0x32e Func
	var_44_bool = var_19_bool == 0; // 0x330 Not
	if(var_44_bool == 0) goto Label_819; // 0x331 JumpB
	goto Label_852; // 0x332 Jump
	
Label_852:
	ResetAAS(); // 0x354 Func
	return 12; // 0x356 Return
	
Label_819:
	goto Label_841; // 0x333 Jump
	
Label_841:
	var_45_bool = 0; // 0x349 PushV
	func_855(var_45_bool); // 0x34a NEW_2
	var_46_bool = var_45_bool == 0; // 0x34c Not
	if(var_46_bool == 0) goto Label_847; // 0x34d JumpB
	goto Label_852; // 0x34e Jump
	
Label_847:
	ResetAAS(); // 0x34f Func
	var_47_int = 1; // 0x351 PushI
	var_18_int = var_18_int + var_47_int; // 0x352 Add2
	goto Label_800; // 0x353 Jump
	
Label_820:
	irand(var_20_int, var_17_int); // 0x334 Func
	var_48_int = 5; // 0x336 PushI
	irand(var_21_int, var_48_int); // 0x337 Func
	var_49_int = 0; // 0x339 PushI
	var_50_bool = var_21_int != var_49_int; // 0x33a Neq
	if(var_50_bool == 0) goto Label_829; // 0x33b JumpB
	var_20_int = 0; // 0x33c MovI
	
Label_829:
	var_51_string = "all"; // 0x33d PushS
	var_52_string = ""; var_53_int = 0; // 0x33e PushV
	var_53_int = var_20_int; // 0x33f Mov
	func_1202(var_52_string, var_53_int); // 0x340 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x342 Func
	WaitForAnimEnd(var_22_bool); // 0x344 Func
	var_54_bool = var_22_bool == 0; // 0x346 Not
	if(var_54_bool == 0) goto Label_841; // 0x347 JumpB
	goto Label_852; // 0x348 Jump
}


func_894(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x37e PushV
	GetPosition(var_50_cvector); // 0x37f ObjFunc
	GetEyesHeight(var_49_float); // 0x381 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x383 PushE
	var_58_float = var_58_float + var_49_float; // 0x384 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x385 PopE
	GetPosition(var_51_cvector); // 0x386 Func
	GetEyesHeight(var_49_float); // 0x388 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x38a PushE
	var_59_float = var_59_float + var_49_float; // 0x38b Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x38c PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x38d Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x38e PushE
	var_60_float = 0; // 0x38f MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x390 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x391 Or
	var_62_float = sqrt(var_61_int); // 0x392 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x393 Div2
	var_53_cvector = -var_52_cvector; // 0x394 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x395 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x396 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x397 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x398 Xor2
	func_1178(var_64_cvector, var_65_cvector); // 0x399 NEW_2
	var_72_int = 25; // 0x39b PushI
	var_73_float = var_64_cvector * var_72_int; // 0x39c Mult
	var_74_int = var_63_float + var_73_float; // 0x39d Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x39e PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x39f Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x3a0 Add2
	IsOverrideActive(var_56_bool); // 0x3a1 Func
	var_76_bool = var_56_bool; // 0x3a3 Push
	if(var_76_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_37_bool = 0; // 0x3a5 MovB
	return 18; // 0x3a6 Return
	
Label_935:
	StopWorld(); // 0x3a7 Func
	var_77_bool = 1; // 0x3a9 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x3aa Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x3ac PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x3ad PushE
	Rotate(var_78_float, var_79_float); // 0x3ae Func
	var_80_bool = 0; // 0x3b0 PushV
	func_1352(var_80_bool); // 0x3b1 NEW_2
	if(var_80_bool == 0) goto Label_949; // 0x3b3 JumpB
	goto Label_957; // 0x3b4 Jump
	
Label_957:
	CameraWaitForPlayFinish(); // 0x3bd Func
	ResumeWorld(); // 0x3bf Func
	var_37_bool = 1; // 0x3c1 MovB
	return 18; // 0x3c2 Return
	
Label_949:
	var_81_string = "head"; // 0x3b5 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x3b6 Func
	var_82_bool = var_57_bool; // 0x3b8 Push
	if(var_82_bool == 0) goto Label_957; // 0x3b9 JumpB
	var_83_string = "head"; // 0x3ba PushS
	LookAsyncCamera(var_83_string); // 0x3bb Func
}


func_1172(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x494 PushV
	self(var_102_object); // 0x495 Func
	var_100_object = var_102_object; // 0x497 Mov
	return 2; // 0x498 Return
}


func_1178(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x49a PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x49b Or
	var_68_float = sqrt(var_69_int); // 0x49c Sqrt2
	var_70_float = 0.0; // 0x49d PushF
	var_71_bool = var_68_float < var_70_float; // 0x49e LT
	if(var_71_bool == 0) goto Label_1186; // 0x49f JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x4a0 MovV
	return 2; // 0x4a1 Return
	
Label_1186:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x4a2 Div2
	return 2; // 0x4a3 Return
}


func_666()
{
	var_270_float = 0; var_271_float = 0; // 0x29a PushV
	var_272_int = 8; // 0x29b PushI
	var_273_int = 16; // 0x29c PushI
	rand(var_271_float, var_272_int, var_273_int); // 0x29d Func
	var_274_int = 10; // 0x29f PushI
	SetTimer(var_274_int, var_271_float); // 0x2a0 Func
	return 2; // 0x2a2 Return
}


func_675()
{
	var_269_int = 10; // 0x2a3 PushI
	KillTimer(var_269_int); // 0x2a4 Func
	return 0; // 0x2a6 Return
}


func_164(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xa5 PushV
	func_1352(var_213_bool); // 0xa6 NEW_2
	var_214_bool = var_213_bool == 0; // 0xa8 Not
	if(var_214_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_215_bool = var_212_string == var_2_object; // 0xab Eq
	if(var_215_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_216_string = ""; var_217_bool = 0; // 0xae PushV
	var_216_string = var_212_string; // 0xaf Mov
	var_218_string = ""; // 0xb0 PushS
	var_219_bool = var_212_string == var_218_string; // 0xb1 Eq
	if(var_219_bool == 0) goto Label_181; // 0xb2 JumpB
	var_217_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_1135(var_216_string, var_217_bool); // 0xb6 NEW_2
	var_2_object = var_212_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_217_bool = 1; // 0xb5 MovB
}


func_1188(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x4a4 PushV
	GetVariable(var_203_string, var_205_int); // 0x4a5 Func
	var_202_int = var_205_int; // 0x4a7 Mov
	return 2; // 0x4a8 Return
}


func_1193(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x4a9 PushV
	GetGameTime(var_155_float); // 0x4aa Func
	var_156_int = 1; // 0x4ac PushI
	var_157_int = 0; // 0x4ad PushV
	var_158_int = 24; // 0x4ae PushI
	var_157_int = var_155_float / var_155_float; // 0x4af Div2
	var_153_int = var_156_int + var_157_int; // 0x4b0 Add2
	return 2; // 0x4b1 Return
}


func_1327(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x52f PushV
	var_92_string = "branch"; // 0x530 PushS
	GetVariable(var_92_string, var_91_int); // 0x531 Func
	var_93_int = 0; // 0x533 PushI
	var_94_bool = var_91_int == var_93_int; // 0x534 Eq
	if(var_94_bool == 0) goto Label_1337; // 0x535 JumpB
	var_89_int = 1; // 0x536 MovI
	return 2; // 0x537 Return
	
Label_1337:
	var_95_int = 1; // 0x539 PushI
	var_96_bool = var_91_int == var_95_int; // 0x53a Eq
	if(var_96_bool == 0) goto Label_1342; // 0x53b JumpB
	var_89_int = 2; // 0x53c MovI
	return 2; // 0x53d Return
	
Label_1342:
	var_89_int = 3; // 0x53e MovI
	return 2; // 0x53f Return
}


func_561(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x232 PushV
	var_27_object = var_25_object; // 0x233 Mov
	TaskCall(0); // 0x234 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x235 NEW_2
	TaskReturn(); // 0x236 TaskReturn
	return 0; // 0x238 Return
}


func_1202(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4b2 PushV
	var_34_string = "idle"; // 0x4b3 MovS
	var_35_int = var_32_int; // 0x4b4 Push
	if(var_35_int == 0) goto Label_1207; // 0x4b5 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4b6 Add2
	
Label_1207:
	var_31_string = var_34_string; // 0x4b7 Mov
	return 2; // 0x4b8 Return
}


func_1076(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x434 PushV
	var_152_string = "d"; // 0x435 PushS
	var_153_int = 0; // 0x436 PushV
	func_1193(var_153_int); // 0x437 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x439 Add
	var_160_string = "m"; // 0x43a PushS
	var_147_string = var_159_int + var_160_string; // 0x43b Add2
	var_148_int = 0; // 0x43c MovI
	
Label_1085:
	var_161_int = 1; // 0x43d PushI
	if(var_161_int == 0) goto Label_1098; // 0x43e JumpB
	var_162_int = 1; // 0x43f PushI
	var_163_int = var_148_int + var_162_int; // 0x440 Add
	var_164_int = var_147_string + var_163_int; // 0x441 Add
	HasProperty(var_164_int, var_149_bool); // 0x442 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x444 Not
	if(var_165_bool == 0) goto Label_1095; // 0x445 JumpB
	goto Label_1098; // 0x446 Jump
	
Label_1098:
	var_166_bool = var_148_int == 0; // 0x44a Not
	if(var_166_bool == 0) goto Label_1102; // 0x44b JumpB
	var_140_bool = 0; // 0x44c MovB
	return 10; // 0x44d Return
	
Label_1102:
	var_150_int = 0; // 0x44e MovI
	var_167_int = 1; // 0x44f PushI
	var_168_bool = var_148_int > var_167_int; // 0x450 GT
	if(var_168_bool == 0) goto Label_1108; // 0x451 JumpB
	irand(var_150_int, var_148_int); // 0x452 Func
	
Label_1108:
	var_169_int = 1; // 0x454 PushI
	var_170_int = var_150_int + var_169_int; // 0x455 Add
	var_171_int = var_147_string + var_170_int; // 0x456 Add
	GetProperty(var_171_int, var_151_string); // 0x457 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x459 PushV
	var_173_string = var_151_string; // 0x45a Mov
	func_1150(var_172_bool, var_173_string); // 0x45b NEW_2
	var_140_bool = var_172_bool; // 0x45c Mov
	return 10; // 0x45e Return
	
Label_1095:
	var_174_int = 1; // 0x447 PushI
	var_148_int = var_148_int + var_174_int; // 0x448 Add2
	goto Label_1085; // 0x449 Jump
}


func_1209(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4b9 PushV
	var_28_int = 0; // 0x4ba MovI
	
Label_1211:
	var_30_string = "all"; // 0x4bb PushS
	var_31_string = ""; var_32_int = 0; // 0x4bc PushV
	var_32_int = var_28_int; // 0x4bd Mov
	func_1202(var_31_string, var_32_int); // 0x4be NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4c0 Func
	var_36_bool = var_29_bool == 0; // 0x4c2 Not
	if(var_36_bool == 0) goto Label_1221; // 0x4c3 JumpB
	goto Label_1224; // 0x4c4 Jump
	
Label_1224:
	var_25_int = var_28_int; // 0x4c8 Mov
	return 4; // 0x4c9 Return
	
Label_1221:
	var_37_int = 1; // 0x4c5 PushI
	var_28_int = var_28_int + var_37_int; // 0x4c6 Add2
	goto Label_1211; // 0x4c7 Jump
}


func_1344(var_86_int)
{
	var_86_int = 515592; // 0x540 MovI
	return 0; // 0x541 Return
}


func_1346(var_85_int)
{
	var_85_int = 511961; // 0x542 MovI
	return 0; // 0x543 Return
}


func_963()
{
	var_261_bool = 0; var_262_bool = 0; // 0x3c3 PushV
	var_263_bool = 1; // 0x3c4 PushB
	CameraSwitchToNormal(var_263_bool); // 0x3c5 Func
	var_264_bool = 0; // 0x3c7 PushV
	func_1352(var_264_bool); // 0x3c8 NEW_2
	if(var_264_bool == 0) goto Label_972; // 0x3ca JumpB
	goto Label_980; // 0x3cb Jump
	
Label_980:
	return 2; // 0x3d4 Return
	
Label_972:
	var_265_string = "head"; // 0x3cc PushS
	HasAnimationTrack(var_262_bool, var_265_string); // 0x3cd Func
	var_266_bool = var_262_bool; // 0x3cf Push
	if(var_266_bool == 0) goto Label_980; // 0x3d0 JumpB
	var_267_string = "head"; // 0x3d1 PushS
	UnlookAsync(var_267_string); // 0x3d2 Func
}


func_1348(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x544 MovS
	return 0; // 0x545 Return
}


func_1350(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x546 MovS
	return 0; // 0x547 Return
}


func_1352(var_80_bool)
{
	var_80_bool = 1; // 0x548 MovB
	return 0; // 0x549 Return
}


func_1226()
{
	var_15_int = 0; var_16_string = ""; // 0x4cb PushV
	var_16_string = "map_chertez_state"; // 0x4cc MovS
	func_1188(var_15_int, var_16_string); // 0x4cd NEW_2
	var_19_int = 5; // 0x4cf PushI
	var_20_bool = var_15_int <= var_19_int; // 0x4d0 LE
	if(var_20_bool == 0) goto Label_1242; // 0x4d1 JumpB
	var_21_string = "map_chertez_state"; // 0x4d2 PushS
	var_22_int = 5; // 0x4d3 PushI
	SetVariable(var_21_string, var_22_int); // 0x4d4 Func
	var_23_string = "map_chertez_force"; // 0x4d6 PushS
	var_24_int = 1; // 0x4d7 PushI
	SetVariable(var_23_string, var_24_int); // 0x4d8 Func
	
Label_1242:
	return 0; // 0x4da Return
}


func_717()
{
	func_857(); // 0x2ce NEW_2
	func_675(); // 0x2d1 NEW_2
	lshStopSpeech(); // 0x2d3 Func
	lshStopAnimation(); // 0x2d5 Func
	StopAsync(); // 0x2d7 Func
	Hold(); // 0x2d9 Func
	return 0; // 0x2db Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_134; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1265(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_112; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1259(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Neutral"; // 0x62 MovS
	func_164(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 514326; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 514327; // 0x6a PushI
	var_231_int = 15550; // 0x6b PushI
	var_232_int = 15549; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_233_bool = 0; // 0x86 PushV
	func_1352(var_233_bool); // 0x87 NEW_2
	if(var_233_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_234_string = var_3_string; // 0x8c PushT
	if(var_234_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_235_string = ""; // 0x8f PushV
	var_235_string = var_2_object; // 0x90 MovT
	func_1119(var_235_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_246_string = "all"; // 0x95 PushS
	var_247_string = "idle"; // 0x96 PushS
	PlayAnimation(var_246_string, var_247_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_248_string = var_3_string; // 0x9b PushT
	if(var_248_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_249_string = "all"; // 0x9e PushS
	var_250_string = "idle"; // 0x9f PushS
	PlayAnimation(var_249_string, var_250_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_251_string = ""; // 0x70 PushV
	var_251_string = "Neutral"; // 0x71 MovS
	func_164(var_194_object, var_251_string); // 0x72 NEW_2
	var_252_int = 514532; // 0x74 PushI
	SetMessage(var_252_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_253_int = 514533; // 0x79 PushI
	var_254_int = -1; // 0x7a PushI
	var_255_int = 15764; // 0x7b PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x7c TObjFunc
	var_256_int = 539713; // 0x7e PushI
	var_257_int = -1; // 0x7f PushI
	var_258_int = 41672; // 0x80 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_981(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x3d5 PushV
	var_107_string = "voice_common"; // 0x3d6 PushS
	GetVariable(var_107_string, var_105_int); // 0x3d7 Func
	var_108_int = var_105_int; // 0x3d9 Push
	if(var_108_int == 0) goto Label_1019; // 0x3da JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x3db PushV
	var_110_object = var_99_object; // 0x3dc Mov
	func_1039(var_110_object); // 0x3dd NEW_2
	var_139_bool = var_109_bool == 0; // 0x3df Not
	if(var_139_bool == 0) goto Label_1001; // 0x3e0 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x3e1 PushV
	var_141_object = var_99_object; // 0x3e2 Mov
	func_1076(var_141_object); // 0x3e3 NEW_2
	var_175_bool = var_140_bool == 0; // 0x3e5 Not
	if(var_175_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_98_bool = 0; // 0x3e7 MovB
	return 4; // 0x3e8 Return
	
Label_1001:
	var_176_int = 2; // 0x3e9 PushI
	irand(var_106_int, var_176_int); // 0x3ea Func
	var_177_int = var_106_int; // 0x3ec Push
	if(var_177_int == 0) goto Label_1014; // 0x3ed JumpB
	var_178_string = "voice_common"; // 0x3ee PushS
	var_179_int = 1; // 0x3ef PushI
	var_180_int = var_105_int + var_179_int; // 0x3f0 Add
	var_181_int = 3; // 0x3f1 PushI
	var_182_int = var_180_int / var_181_int; // 0x3f2 Mod
	SetVariable(var_178_string, var_182_int); // 0x3f3 Func
	goto Label_1018; // 0x3f5 Jump
	
Label_1018:
	goto Label_1037; // 0x3fa Jump
	
Label_1037:
	var_98_bool = 1; // 0x40d MovB
	return 4; // 0x40e Return
	
Label_1014:
	var_183_string = "voice_common"; // 0x3f6 PushS
	var_184_int = 0; // 0x3f7 PushI
	SetVariable(var_183_string, var_184_int); // 0x3f8 Func
	
Label_1019:
	var_185_bool = 0; var_186_object = Obj(); // 0x3fb PushV
	var_186_object = var_99_object; // 0x3fc Mov
	func_1076(var_186_object); // 0x3fd NEW_2
	var_187_bool = var_185_bool == 0; // 0x3ff Not
	if(var_187_bool == 0) goto Label_1033; // 0x400 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x401 PushV
	var_189_object = var_99_object; // 0x402 Mov
	func_1039(var_189_object); // 0x403 NEW_2
	var_190_bool = var_188_bool == 0; // 0x405 Not
	if(var_190_bool == 0) goto Label_1033; // 0x406 JumpB
	var_98_bool = 0; // 0x407 MovB
	return 4; // 0x408 Return
	
Label_1033:
	var_191_string = "voice_common"; // 0x409 PushS
	var_192_int = 1; // 0x40a PushI
	SetVariable(var_191_string, var_192_int); // 0x40b Func
}


func_855(var_45_bool)
{
	var_45_bool = 1; // 0x357 MovB
	return 0; // 0x358 Return
}


func_857()
{
	StopAnimation(); // 0x359 Func
	StopGroup0(); // 0x35b Func
	return 0; // 0x35d Return
}


func_1243()
{
	var_27_object = Obj(); var_28_string = ""; var_29_float = 0; // 0x4dc PushV
	var_30_object = Obj(); // 0x4dd PushV
	func_1277(var_30_object); // 0x4de NEW_2
	var_27_object = var_30_object; // 0x4df Mov
	var_28_string = "pt_map_aglaja"; // 0x4e1 MovS
	var_29_float = -1; // 0x4e2 MovI
	func_1294(var_27_object, var_28_string, var_29_float); // 0x4e3 NEW_2
	var_56_object = Obj(); // 0x4e5 PushV
	func_1277(var_56_object); // 0x4e6 NEW_2
	ShowMap(var_56_object); // 0x4e8 ObjFunc
	return 0; // 0x4ea Return
}


func_732()
{
	StopGroup0(); // 0x2dc Func
	func_675(); // 0x2df NEW_2
	var_8_string = ""; // 0x2e1 PushV
	var_8_string = "Neutral"; // 0x2e2 MovS
	func_1119(var_8_string); // 0x2e3 NEW_2
	func_666(); // 0x2e6 NEW_2
	return 0; // 0x2e8 Return
}


func_862(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x35e PushV
	GetPosition(var_27_cvector); // 0x35f Func
	GetPosition(var_28_cvector); // 0x361 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x363 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x364 Or2
	return 6; // 0x365 Return
}


func_1119(var_235_string)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0; // 0x45f PushV
	lshHasAnimation(var_239_bool, var_235_string); // 0x460 Func
	var_242_bool = var_239_bool; // 0x462 Push
	if(var_242_bool == 0) goto Label_1130; // 0x463 JumpB
	lshGetAnimTimes(var_235_string, var_240_float, var_241_float); // 0x464 Func
	var_243_bool = 0; // 0x466 PushB
	lshPlayAnimation(var_240_float, var_241_float, var_243_bool); // 0x467 Func
	goto Label_1134; // 0x469 Jump
	
Label_1134:
	return 6; // 0x46e Return
	
Label_1130:
	var_244_string = "Can't find lsh animation : "; // 0x46a PushS
	var_245_int = var_244_string + var_235_string; // 0x46b Add
	Trace(var_245_int); // 0x46c Func
}


func_610(var_0_object)
{
	var_7_bool = 0; // 0x262 PushV
	func_889(var_7_bool); // 0x263 NEW_2
	var_10_bool = var_7_bool == 0; // 0x265 Not
	if(var_10_bool == 0) goto Label_617; // 0x266 JumpB
	Hold(); // 0x267 Func
	
Label_617:
	GetDirection(var_0_object); // 0x269 Func
	
Label_619:
	func_786(); // 0x26c NEW_2
	goto Label_619; // 0x26e Jump
}


func_870(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x366 PushV
	GetPosition(var_20_cvector); // 0x367 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x369 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x36a PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x36b PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x36c Func
	var_15_bool = var_22_bool; // 0x36e Mov
	return 6; // 0x36f Return
}


func_1259()
{
	var_210_string = "ood11Burah1"; // 0x4ec PushS
	var_211_int = 1; // 0x4ed PushI
	SetVariable(var_210_string, var_211_int); // 0x4ee Func
	return 0; // 0x4f0 Return
}


func_1135(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x46f PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x470 Func
	var_226_bool = var_223_bool; // 0x472 Push
	if(var_226_bool == 0) goto Label_1145; // 0x473 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x474 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x476 Func
	goto Label_1149; // 0x478 Jump
	
Label_1149:
	return 6; // 0x47d Return
	
Label_1145:
	var_227_string = "Can't find lsh animation : "; // 0x479 PushS
	var_228_int = var_227_string + var_216_string; // 0x47a Add
	Trace(var_228_int); // 0x47b Func
}


func_880(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x370 PushV
	GetPosition(var_14_cvector); // 0x371 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x373 PushV
	var_16_cvector = var_14_cvector; // 0x374 Mov
	func_870(var_15_bool, var_16_cvector); // 0x375 NEW_2
	var_11_bool = var_15_bool; // 0x376 Mov
	return 2; // 0x378 Return
}


func_1265(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x4f2 PushV
	var_203_string = "ood11Burah1"; // 0x4f3 MovS
	func_1188(var_202_int, var_203_string); // 0x4f4 NEW_2
	var_206_int = 0; // 0x4f6 PushI
	var_207_bool = var_202_int == var_206_int; // 0x4f7 Eq
	if(var_207_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_200_bool = 1; // 0x4f9 MovB
	return 0; // 0x4fa Return
	
Label_1275:
	var_200_bool = 0; // 0x4fb MovB
	return 0; // 0x4fc Return
}


func_624(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x270 PushV
	var_35_string = "player"; // 0x271 PushS
	FindActor(var_34_object, var_35_string); // 0x272 Func
	var_36_bool = var_34_object == 0; // 0x274 Not
	if(var_36_bool == 0) goto Label_632; // 0x275 JumpB
	var_32_bool = 0; // 0x276 MovB
	return 2; // 0x277 Return
	
Label_632:
	var_37_bool = 0; var_38_object = Obj(); // 0x278 PushV
	var_38_object = var_34_object; // 0x279 Mov
	func_880(var_38_object); // 0x27a NEW_2
	var_32_bool = var_37_bool; // 0x27b Mov
	return 2; // 0x27d Return
}


func_889(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x379 PushV
	IsLoaded(var_9_bool); // 0x37a Func
	var_7_bool = var_9_bool; // 0x37c Mov
	return 2; // 0x37d Return
}


func_1277(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x4fd PushV
	GetMainOutdoorScene(var_33_object); // 0x4fe Func
	var_35_bool = var_33_object == 0; // 0x500 NullEq
	if(var_35_bool == 0) goto Label_1288; // 0x501 JumpB
	var_36_string = "Can't find main outdoor scene"; // 0x502 PushS
	Trace(var_36_string); // 0x503 Func
	var_34_object = 0; // 0x505 SetNull
	var_30_object = var_34_object; // 0x506 Mov
	return 4; // 0x507 Return
	
Label_1288:
	GetMap(var_34_object); // 0x508 ObjFunc
	var_30_object = var_34_object; // 0x50a Mov
	return 4; // 0x50b Return
}


func_1150(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x47e PushV
	var_136_bool = 0; // 0x47f PushV
	func_1352(var_136_bool); // 0x480 NEW_2
	if(var_136_bool == 0) goto Label_1163; // 0x482 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x483 Func
	var_137_bool = var_135_bool; // 0x485 Push
	if(var_137_bool == 0) goto Label_1163; // 0x486 JumpB
	lshPlaySpeech(var_133_string); // 0x487 Func
	var_132_bool = 1; // 0x489 MovB
	return 2; // 0x48a Return
	
Label_1163:
	var_132_bool = 0; // 0x48b MovB
	return 2; // 0x48c Return
}


func_639(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x27f PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x280 PushE
	RotateAsync(var_84_float, var_85_float); // 0x281 Func
	return 0; // 0x283 Return
}


