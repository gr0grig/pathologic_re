task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object)
{
	var_17_int = 1; // 0xa5 PushI
	if(var_17_int == 0) goto Label_246; // 0xa6 JumpB
	func_1102(); // 0xa8 NEW_2
	var_19_int = 40486; // 0xaa PushI
	var_20_bool = var_16_object == var_19_int; // 0xab Eq
	if(var_20_bool == 0) goto Label_178; // 0xac JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xad PushV
	var_21_object = var_1_object; // 0xae MovT
	var_22_object = var_0_object; // 0xaf MovT
	func_1164(); // 0xb0 NEW_2
	
Label_178:
	var_31_int = 40483; // 0xb2 PushI
	var_32_bool = var_15_bool == var_31_int; // 0xb3 Eq
	if(var_32_bool == 0) goto Label_211; // 0xb4 JumpB
	var_33_string = ""; // 0xb5 PushV
	var_33_string = "Neutral"; // 0xb6 MovS
	func_142(var_16_object, var_33_string); // 0xb7 NEW_2
	var_50_int = 538595; // 0xb9 PushI
	SetMessage(var_50_int); // 0xba TObjFunc
	ClearReplies(); // 0xbc TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0xbe PushV
	var_52_object = var_1_object; // 0xbf MovT
	func_1201(var_51_bool, var_52_object); // 0xc0 NEW_2
	if(var_51_bool == 0) goto Label_200; // 0xc2 JumpB
	var_66_int = 538598; // 0xc3 PushI
	var_67_int = 40487; // 0xc4 PushI
	var_68_int = 40486; // 0xc5 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xc6 TObjFunc
	
Label_200:
	var_69_int = 538596; // 0xc8 PushI
	var_70_int = -1; // 0xc9 PushI
	var_71_int = 40484; // 0xca PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xcb TObjFunc
	var_72_int = 538597; // 0xcd PushI
	var_73_int = -1; // 0xce PushI
	var_74_int = 40485; // 0xcf PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xd0 TObjFunc
	return 0; // 0xd2 Return
	
Label_211:
	var_75_int = 40487; // 0xd3 PushI
	var_76_bool = var_15_bool == var_75_int; // 0xd4 Eq
	if(var_76_bool == 0) goto Label_234; // 0xd5 JumpB
	var_77_string = ""; // 0xd6 PushV
	var_77_string = "Neutral"; // 0xd7 MovS
	func_142(var_16_object, var_77_string); // 0xd8 NEW_2
	var_78_int = 538599; // 0xda PushI
	SetMessage(var_78_int); // 0xdb TObjFunc
	ClearReplies(); // 0xdd TObjFunc
	var_79_int = 538600; // 0xdf PushI
	var_80_int = -1; // 0xe0 PushI
	var_81_int = 40488; // 0xe1 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xe2 TObjFunc
	var_82_int = 538601; // 0xe4 PushI
	var_83_int = -1; // 0xe5 PushI
	var_84_int = 40489; // 0xe6 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_3_string = 1; // 0xea TMovB
	var_85_bool = 0; // 0xeb PushV
	func_1354(var_85_bool); // 0xec NEW_2
	if(var_85_bool == 0) goto Label_242; // 0xee JumpB
	lshStopAnimation(); // 0xef Func
	goto Label_244; // 0xf1 Jump
	
Label_244:
	return 0; // 0xf4 Return
	
Label_242:
	StopAnimation(); // 0xf2 Func
	
Label_246:
	return 0; // 0xf6 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object)
{
	var_17_int = 1; // 0x1ce PushI
	if(var_17_int == 0) goto Label_742; // 0x1cf JumpB
	func_1102(); // 0x1d1 NEW_2
	var_19_int = 40508; // 0x1d3 PushI
	var_20_bool = var_16_object == var_19_int; // 0x1d4 Eq
	if(var_20_bool == 0) goto Label_480; // 0x1d5 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0x1d6 PushV
	var_21_object = var_1_object; // 0x1d7 MovT
	var_22_object = var_0_object; // 0x1d8 MovT
	func_1177(); // 0x1d9 NEW_2
	var_29_object = Obj(); var_30_object = Obj(); // 0x1db PushV
	var_29_object = var_1_object; // 0x1dc MovT
	var_30_object = var_0_object; // 0x1dd MovT
	func_1190(); // 0x1de NEW_2
	
Label_480:
	var_39_int = 40511; // 0x1e0 PushI
	var_40_bool = var_16_object == var_39_int; // 0x1e1 Eq
	if(var_40_bool == 0) goto Label_493; // 0x1e2 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1e3 PushV
	var_41_object = var_1_object; // 0x1e4 MovT
	var_42_object = var_0_object; // 0x1e5 MovT
	func_1190(); // 0x1e6 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0x1e8 PushV
	var_43_object = var_1_object; // 0x1e9 MovT
	var_44_object = var_0_object; // 0x1ea MovT
	func_1196(); // 0x1eb NEW_2
	
Label_493:
	var_68_int = 40507; // 0x1ed PushI
	var_69_bool = var_16_object == var_68_int; // 0x1ee Eq
	if(var_69_bool == 0) goto Label_501; // 0x1ef JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1f0 PushV
	var_70_object = var_1_object; // 0x1f1 MovT
	var_71_object = var_0_object; // 0x1f2 MovT
	func_1170(); // 0x1f3 NEW_2
	
Label_501:
	var_75_int = 40510; // 0x1f5 PushI
	var_76_bool = var_16_object == var_75_int; // 0x1f6 Eq
	if(var_76_bool == 0) goto Label_509; // 0x1f7 JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x1f8 PushV
	var_77_object = var_1_object; // 0x1f9 MovT
	var_78_object = var_0_object; // 0x1fa MovT
	func_1190(); // 0x1fb NEW_2
	
Label_509:
	var_79_int = 40491; // 0x1fd PushI
	var_80_bool = var_15_bool == var_79_int; // 0x1fe Eq
	if(var_80_bool == 0) goto Label_592; // 0x1ff JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x200 PushV
	var_82_object = var_1_object; // 0x201 MovT
	func_1211(var_81_bool, var_82_object); // 0x202 NEW_2
	if(var_81_bool == 0) goto Label_547; // 0x204 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x205 PushV
	var_96_object = var_1_object; // 0x206 MovT
	var_97_object = var_0_object; // 0x207 MovT
	func_1184(); // 0x208 NEW_2
	var_99_string = ""; // 0x20a PushV
	var_99_string = "Neutral"; // 0x20b MovS
	func_439(var_16_object, var_99_string); // 0x20c NEW_2
	var_116_int = 538603; // 0x20e PushI
	SetMessage(var_116_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_117_int = 538604; // 0x213 PushI
	var_118_int = 40494; // 0x214 PushI
	var_119_int = 40492; // 0x215 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x216 TObjFunc
	var_120_int = 538605; // 0x218 PushI
	var_121_int = 40496; // 0x219 PushI
	var_122_int = 40493; // 0x21a PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x21b TObjFunc
	var_123_int = 538621; // 0x21d PushI
	var_124_int = 40494; // 0x21e PushI
	var_125_int = 40512; // 0x21f PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_126_bool = 0; var_127_object = Obj(); // 0x223 PushV
	var_127_object = var_1_object; // 0x224 MovT
	func_1221(var_126_bool, var_127_object); // 0x225 NEW_2
	if(var_126_bool == 0) goto Label_572; // 0x227 JumpB
	var_132_string = ""; // 0x228 PushV
	var_132_string = "Neutral"; // 0x229 MovS
	func_439(var_16_object, var_132_string); // 0x22a NEW_2
	var_133_int = 538622; // 0x22c PushI
	SetMessage(var_133_int); // 0x22d TObjFunc
	ClearReplies(); // 0x22f TObjFunc
	var_134_int = 538623; // 0x231 PushI
	var_135_int = -1; // 0x232 PushI
	var_136_int = 40514; // 0x233 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x234 TObjFunc
	var_137_int = 538624; // 0x236 PushI
	var_138_int = -1; // 0x237 PushI
	var_139_int = 40515; // 0x238 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x239 TObjFunc
	return 0; // 0x23b Return
	
Label_572:
	var_140_string = ""; // 0x23c PushV
	var_140_string = "Neutral"; // 0x23d MovS
	func_439(var_16_object, var_140_string); // 0x23e NEW_2
	var_141_int = 538625; // 0x240 PushI
	SetMessage(var_141_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_142_int = 538626; // 0x245 PushI
	var_143_int = 40519; // 0x246 PushI
	var_144_int = 40517; // 0x247 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x248 TObjFunc
	var_145_int = 538627; // 0x24a PushI
	var_146_int = -1; // 0x24b PushI
	var_147_int = 40518; // 0x24c PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x24d TObjFunc
	return 0; // 0x24f Return
	
Label_592:
	var_148_int = 40519; // 0x250 PushI
	var_149_bool = var_15_bool == var_148_int; // 0x251 Eq
	if(var_149_bool == 0) goto Label_615; // 0x252 JumpB
	var_150_string = ""; // 0x253 PushV
	var_150_string = "Neutral"; // 0x254 MovS
	func_439(var_16_object, var_150_string); // 0x255 NEW_2
	var_151_int = 538628; // 0x257 PushI
	SetMessage(var_151_int); // 0x258 TObjFunc
	ClearReplies(); // 0x25a TObjFunc
	var_152_int = 538629; // 0x25c PushI
	var_153_int = -1; // 0x25d PushI
	var_154_int = 40520; // 0x25e PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x25f TObjFunc
	var_155_int = 538630; // 0x261 PushI
	var_156_int = -1; // 0x262 PushI
	var_157_int = 40521; // 0x263 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x264 TObjFunc
	return 0; // 0x266 Return
	
Label_615:
	var_158_int = 40496; // 0x267 PushI
	var_159_bool = var_15_bool == var_158_int; // 0x268 Eq
	if(var_159_bool == 0) goto Label_638; // 0x269 JumpB
	var_160_string = ""; // 0x26a PushV
	var_160_string = "Neutral"; // 0x26b MovS
	func_439(var_16_object, var_160_string); // 0x26c NEW_2
	var_161_int = 538608; // 0x26e PushI
	SetMessage(var_161_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_162_int = 538609; // 0x273 PushI
	var_163_int = 40501; // 0x274 PushI
	var_164_int = 40497; // 0x275 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x276 TObjFunc
	var_165_int = 538611; // 0x278 PushI
	var_166_int = 40500; // 0x279 PushI
	var_167_int = 40499; // 0x27a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x27b TObjFunc
	return 0; // 0x27d Return
	
Label_638:
	var_168_int = 40500; // 0x27e PushI
	var_169_bool = var_15_bool == var_168_int; // 0x27f Eq
	if(var_169_bool == 0) goto Label_661; // 0x280 JumpB
	var_170_string = ""; // 0x281 PushV
	var_170_string = "Neutral"; // 0x282 MovS
	func_439(var_16_object, var_170_string); // 0x283 NEW_2
	var_171_int = 538612; // 0x285 PushI
	SetMessage(var_171_int); // 0x286 TObjFunc
	ClearReplies(); // 0x288 TObjFunc
	var_172_int = 538614; // 0x28a PushI
	var_173_int = 40498; // 0x28b PushI
	var_174_int = 40502; // 0x28c PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x28d TObjFunc
	var_175_int = 538615; // 0x28f PushI
	var_176_int = 40501; // 0x290 PushI
	var_177_int = 40503; // 0x291 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x292 TObjFunc
	return 0; // 0x294 Return
	
Label_661:
	var_178_int = 40501; // 0x295 PushI
	var_179_bool = var_15_bool == var_178_int; // 0x296 Eq
	if(var_179_bool == 0) goto Label_684; // 0x297 JumpB
	var_180_string = ""; // 0x298 PushV
	var_180_string = "Neutral"; // 0x299 MovS
	func_439(var_16_object, var_180_string); // 0x29a NEW_2
	var_181_int = 538613; // 0x29c PushI
	SetMessage(var_181_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_182_int = 538617; // 0x2a1 PushI
	var_183_int = -1; // 0x2a2 PushI
	var_184_int = 40507; // 0x2a3 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x2a4 TObjFunc
	var_185_int = 538619; // 0x2a6 PushI
	var_186_int = -1; // 0x2a7 PushI
	var_187_int = 40510; // 0x2a8 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x2a9 TObjFunc
	return 0; // 0x2ab Return
	
Label_684:
	var_188_int = 40494; // 0x2ac PushI
	var_189_bool = var_15_bool == var_188_int; // 0x2ad Eq
	if(var_189_bool == 0) goto Label_707; // 0x2ae JumpB
	var_190_string = ""; // 0x2af PushV
	var_190_string = "Neutral"; // 0x2b0 MovS
	func_439(var_16_object, var_190_string); // 0x2b1 NEW_2
	var_191_int = 538606; // 0x2b3 PushI
	SetMessage(var_191_int); // 0x2b4 TObjFunc
	ClearReplies(); // 0x2b6 TObjFunc
	var_192_int = 538607; // 0x2b8 PushI
	var_193_int = 40498; // 0x2b9 PushI
	var_194_int = 40495; // 0x2ba PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x2bb TObjFunc
	var_195_int = 538616; // 0x2bd PushI
	var_196_int = 40500; // 0x2be PushI
	var_197_int = 40505; // 0x2bf PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x2c0 TObjFunc
	return 0; // 0x2c2 Return
	
Label_707:
	var_198_int = 40498; // 0x2c3 PushI
	var_199_bool = var_15_bool == var_198_int; // 0x2c4 Eq
	if(var_199_bool == 0) goto Label_730; // 0x2c5 JumpB
	var_200_string = ""; // 0x2c6 PushV
	var_200_string = "Neutral"; // 0x2c7 MovS
	func_439(var_16_object, var_200_string); // 0x2c8 NEW_2
	var_201_int = 538610; // 0x2ca PushI
	SetMessage(var_201_int); // 0x2cb TObjFunc
	ClearReplies(); // 0x2cd TObjFunc
	var_202_int = 538618; // 0x2cf PushI
	var_203_int = -1; // 0x2d0 PushI
	var_204_int = 40508; // 0x2d1 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2d2 TObjFunc
	var_205_int = 538620; // 0x2d4 PushI
	var_206_int = -1; // 0x2d5 PushI
	var_207_int = 40511; // 0x2d6 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x2d7 TObjFunc
	return 0; // 0x2d9 Return
	
Label_730:
	var_3_string = 1; // 0x2da TMovB
	var_208_bool = 0; // 0x2db PushV
	func_1354(var_208_bool); // 0x2dc NEW_2
	if(var_208_bool == 0) goto Label_738; // 0x2de JumpB
	lshStopAnimation(); // 0x2df Func
	goto Label_740; // 0x2e1 Jump
	
Label_740:
	return 0; // 0x2e4 Return
	
Label_738:
	StopAnimation(); // 0x2e2 Func
	
Label_742:
	return 0; // 0x2e6 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object)
{
	var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; // 0x2f1 PushV
	func_862(var_18_int, var_19_int); // 0x2f3 NEW_2
	var_23_string = "day"; // 0x2f5 PushS
	GetProperty(var_23_string, var_18_int); // 0x2f6 Func
	var_24_int = 0; // 0x2f8 PushV
	func_1131(var_24_int); // 0x2f9 NEW_2
	var_30_bool = var_18_int == var_24_int; // 0x2fb Eq
	if(var_30_bool == 0) goto Label_790; // 0x2fc JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x2fd PushV
	var_32_object = var_15_object; // 0x2fe Mov
	TaskCall(2); // 0x2ff TaskCall
	func_247(var_33_object, var_31_int, var_32_object); // 0x300 NEW_2
	TaskReturn(); // 0x301 TaskReturn
	var_19_int = var_33_object; // 0x302 Mov
	var_209_int = 1; // 0x304 PushI
	var_210_bool = var_19_int == var_209_int; // 0x305 Eq
	if(var_210_bool == 0) goto Label_781; // 0x306 JumpB
	var_211_bool = 0; var_212_string = ""; var_213_string = ""; // 0x307 PushV
	var_212_string = "klara2_svita_positioner"; // 0x308 MovS
	var_213_string = "wonder"; // 0x309 MovS
	func_1119(var_211_bool, var_212_string, var_213_string); // 0x30a NEW_2
	goto Label_789; // 0x30c Jump
	
Label_789:
	goto Label_796; // 0x315 Jump
	
Label_796:
	return 4; // 0x31c Return
	
Label_781:
	var_217_int = 2; // 0x30d PushI
	var_218_bool = var_19_int == var_217_int; // 0x30e Eq
	if(var_218_bool == 0) goto Label_789; // 0x30f JumpB
	var_219_bool = 0; var_220_string = ""; var_221_string = ""; // 0x310 PushV
	var_220_string = "klara2_svita_positioner"; // 0x311 MovS
	var_221_string = "wrong_wonder"; // 0x312 MovS
	func_1119(var_219_bool, var_220_string, var_221_string); // 0x313 NEW_2
	
Label_790:
	var_222_int = 0; var_223_object = Obj(); // 0x316 PushV
	var_223_object = var_15_object; // 0x317 Mov
	TaskCall(0); // 0x318 TaskCall
	func_0(var_224_object, var_222_int, var_223_object); // 0x319 NEW_2
	TaskReturn(); // 0x31a TaskReturn
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_int)
{
	var_16_int = 10; // 0x348 PushI
	var_17_bool = var_15_int == var_16_int; // 0x349 Eq
	if(var_17_bool == 0) goto Label_861; // 0x34a JumpB
	var_18_bool = 0; // 0x34b PushV
	func_824(var_13_bool, var_14_object, var_15_int, var_18_bool); // 0x34c NEW_2
	if(var_18_bool == 0) goto Label_855; // 0x34e JumpB
	var_31_bool = var_2_object == 0; // 0x34f Not
	if(var_31_bool == 0) goto Label_854; // 0x350 JumpB
	var_32_object = Obj(); // 0x351 PushV
	var_32_object = var_4_bool; // 0x352 MovT
	func_1091(var_32_object); // 0x353 NEW_2
	var_2_object = 1; // 0x355 TMovB
	
Label_854:
	goto Label_861; // 0x356 Jump
	
Label_861:
	return 0; // 0x35d Return
	
Label_855:
	var_39_object = var_2_object; // 0x357 PushT
	if(var_39_object == 0) goto Label_861; // 0x358 JumpB
	var_40_string = "head"; // 0x359 PushS
	UnlookAsync(var_40_string); // 0x35a Func
	var_2_object = 0; // 0x35c TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object)
{
	
Label_743:
	var_15_int = 1; // 0x2e7 PushI
	Sleep(var_15_int); // 0x2e8 Func
	var_16_float = 0; var_17_float = 0; // 0x2ea PushV
	var_16_float = 300; // 0x2eb MovI
	var_17_float = 100; // 0x2ec MovI
	func_797(var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_16_float, var_17_float); // 0x2ed NEW_2
	goto Label_743; // 0x2ef Jump
}


func_0(var_0_object, var_222_int, var_223_object)
{
	var_225_object = Obj(); var_226_bool = 0; var_227_int = 0; var_228_bool = 0; var_229_object = Obj(); var_230_bool = 0; var_231_int = 0; var_232_bool = 0; // 0x0 PushV
	var_0_object = var_223_object; // 0x1 TMov
	var_233_bool = 0; var_234_object = Obj(); var_235_float = 0; // 0x2 PushV
	var_234_object = var_223_object; // 0x3 Mov
	var_235_float = 70.0; // 0x4 MovF
	func_975(var_234_object, var_235_float); // 0x5 NEW_2
	var_236_bool = var_233_bool == 0; // 0x7 Not
	if(var_236_bool == 0) goto Label_11; // 0x8 JumpB
	var_222_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_229_object); // 0xb Func
	var_237_int = 0; // 0xd PushV
	func_1348(var_237_int); // 0xe NEW_2
	SetNPCName(var_237_int); // 0x10 ObjFunc
	var_238_int = 0; // 0x12 PushV
	func_1346(var_238_int); // 0x13 NEW_2
	SetNPCDescription(var_238_int); // 0x15 ObjFunc
	var_239_string = ""; // 0x17 PushV
	func_1350(var_239_string); // 0x18 NEW_2
	SetPhoto(var_239_string); // 0x1a ObjFunc
	var_240_string = ""; // 0x1c PushV
	func_1352(var_240_string); // 0x1d NEW_2
	SetPhoto2(var_240_string); // 0x1f ObjFunc
	var_241_int = 0; // 0x21 PushV
	func_1306(var_241_int); // 0x22 NEW_2
	SetPlayerName(var_241_int); // 0x24 ObjFunc
	var_231_int = -1; // 0x26 MovI
	IsOverrideActive(var_230_bool); // 0x27 Func
	var_242_bool = var_230_bool; // 0x29 Push
	if(var_242_bool == 0) goto Label_45; // 0x2a JumpB
	var_222_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_229_object); // 0x2d Func
	var_243_object = Obj(); var_244_object = Obj(); // 0x2f PushV
	var_243_object = var_223_object; // 0x30 Mov
	var_244_object = var_229_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_232_bool); // 0x36 ObjFunc
	
Label_56:
	var_282_bool = var_232_bool == 0; // 0x38 Not
	if(var_282_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_232_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_283_object = Obj(); // 0x3f PushV
	var_283_object = var_223_object; // 0x40 Mov
	func_1043(); // 0x41 NEW_2
	StopDialog(var_229_object); // 0x43 Func
	GetReturnValue(var_231_int); // 0x45 ObjFunc
	var_222_int = var_231_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1164()
{
	var_23_string = ""; // 0x48d PushV
	var_23_string = "AlbinosLate1"; // 0x48e MovS
	func_1323(var_23_string); // 0x48f NEW_2
	return 0; // 0x491 Return
}


func_142(var_2_object, var_250_string)
{
	var_251_bool = 0; // 0x8f PushV
	func_1354(var_251_bool); // 0x90 NEW_2
	var_252_bool = var_251_bool == 0; // 0x92 Not
	if(var_252_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_253_bool = var_250_string == var_2_object; // 0x95 Eq
	if(var_253_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_254_string = ""; var_255_bool = 0; // 0x98 PushV
	var_254_string = var_250_string; // 0x99 Mov
	var_256_string = ""; // 0x9a PushS
	var_257_bool = var_250_string == var_256_string; // 0x9b Eq
	if(var_257_bool == 0) goto Label_159; // 0x9c JumpB
	var_255_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_1076(var_254_string, var_255_bool); // 0xa0 NEW_2
	var_2_object = var_250_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_255_bool = 1; // 0x9f MovB
}


func_1170()
{
	var_72_bool = 0; var_73_string = ""; var_74_string = ""; // 0x493 PushV
	var_73_string = "klara2_svita_positioner"; // 0x494 MovS
	var_74_string = "wonder"; // 0x495 MovS
	func_1119(var_72_bool, var_73_string, var_74_string); // 0x496 NEW_2
	return 0; // 0x498 Return
}


func_1043()
{
	var_203_bool = 0; var_204_bool = 0; // 0x413 PushV
	CameraSwitchToNormal(); // 0x414 Func
	var_205_bool = 0; // 0x416 PushV
	func_1354(var_205_bool); // 0x417 NEW_2
	if(var_205_bool == 0) goto Label_1051; // 0x419 JumpB
	goto Label_1059; // 0x41a Jump
	
Label_1059:
	return 2; // 0x423 Return
	
Label_1051:
	var_206_string = "head"; // 0x41b PushS
	HasAnimationTrack(var_204_bool, var_206_string); // 0x41c Func
	var_207_bool = var_204_bool; // 0x41e Push
	if(var_207_bool == 0) goto Label_1059; // 0x41f JumpB
	var_208_string = "head"; // 0x420 PushS
	UnlookAsync(var_208_string); // 0x421 Func
}


func_1177()
{
	var_23_bool = 0; var_24_string = ""; var_25_string = ""; // 0x49a PushV
	var_24_string = "klara2_svita_positioner"; // 0x49b MovS
	var_25_string = "bad_wonder"; // 0x49c MovS
	func_1119(var_23_bool, var_24_string, var_25_string); // 0x49d NEW_2
	return 0; // 0x49f Return
}


func_1306(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x51a PushV
	var_96_string = "branch"; // 0x51b PushS
	GetVariable(var_96_string, var_95_int); // 0x51c Func
	var_97_int = 0; // 0x51e PushI
	var_98_bool = var_95_int == var_97_int; // 0x51f Eq
	if(var_98_bool == 0) goto Label_1316; // 0x520 JumpB
	var_93_int = 1; // 0x521 MovI
	return 2; // 0x522 Return
	
Label_1316:
	var_99_int = 1; // 0x524 PushI
	var_100_bool = var_95_int == var_99_int; // 0x525 Eq
	if(var_100_bool == 0) goto Label_1321; // 0x526 JumpB
	var_93_int = 2; // 0x527 MovI
	return 2; // 0x528 Return
	
Label_1321:
	var_93_int = 3; // 0x529 MovI
	return 2; // 0x52a Return
}


func_797(var_0_object, var_1_object, var_2_object, var_3_string, var_14_object, var_16_float, var_17_float)
{
	var_18_bool = 0; // 0x31e PushV
	func_970(var_18_bool); // 0x31f NEW_2
	var_21_bool = var_18_bool == 0; // 0x321 Not
	if(var_21_bool == 0) goto Label_804; // 0x322 JumpB
	return 0; // 0x323 Return
	
Label_804:
	var_22_string = "player"; // 0x324 PushS
	FindActor(var_14_object, var_22_string); // 0x325 Func
	var_2_object = 0; // 0x327 TMovB
	var_3_string = 0; // 0x328 TMovB
	var_0_object = var_16_float; // 0x329 TMov
	var_1_object = var_17_float; // 0x32a TMov
	var_23_int = 10; // 0x32b PushI
	var_24_float = 1.0; // 0x32c PushF
	SetTimer(var_23_int, var_24_float); // 0x32d Func
	func_876(); // 0x330 NEW_2
	var_76_bool = var_3_string == 0; // 0x332 Not
	if(var_76_bool == 0) goto Label_823; // 0x333 JumpB
	var_77_int = 10; // 0x334 PushI
	KillTimer(var_77_int); // 0x335 Func
	
Label_823:
	return 0; // 0x337 Return
}


func_1184()
{
	var_126_string = ""; // 0x4a1 PushV
	var_126_string = "Albinos1"; // 0x4a2 MovS
	func_1323(var_126_string); // 0x4a3 NEW_2
	return 0; // 0x4a5 Return
}


func_1060(var_163_string)
{
	var_164_bool = 0; var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_float = 0; var_169_float = 0; // 0x424 PushV
	lshHasAnimation(var_167_bool, var_163_string); // 0x425 Func
	var_170_bool = var_167_bool; // 0x427 Push
	if(var_170_bool == 0) goto Label_1071; // 0x428 JumpB
	lshGetAnimTimes(var_163_string, var_168_float, var_169_float); // 0x429 Func
	var_171_bool = 0; // 0x42b PushB
	lshPlayAnimation(var_168_float, var_169_float, var_171_bool); // 0x42c Func
	goto Label_1075; // 0x42e Jump
	
Label_1075:
	return 6; // 0x433 Return
	
Label_1071:
	var_172_string = "Can't find lsh animation : "; // 0x42f PushS
	var_173_int = var_172_string + var_163_string; // 0x430 Add
	Trace(var_173_int); // 0x431 Func
}


func_1190()
{
	var_31_string = ""; // 0x4a7 PushV
	var_31_string = "BadKlara"; // 0x4a8 MovS
	func_1323(var_31_string); // 0x4a9 NEW_2
	return 0; // 0x4ab Return
}


func_1323(var_126_string)
{
	var_127_int = 0; var_128_int = 0; // 0x52b PushV
	var_129_string = "day"; // 0x52c PushS
	GetProperty(var_129_string, var_128_int); // 0x52d Func
	var_130_string = "K2S_Klara2Svita"; // 0x52f PushS
	var_131_int = var_130_string + var_126_string; // 0x530 Add
	var_132_int = var_131_int + var_128_int; // 0x531 Add
	var_133_int = 1; // 0x532 PushI
	SetVariable(var_132_int, var_133_int); // 0x533 Func
	return 2; // 0x535 Return
}


func_1196()
{
	func_1252(); // 0x4ae NEW_2
	return 0; // 0x4b0 Return
}


func_1201(var_259_bool, var_260_object)
{
	var_261_bool = 0; var_262_object = Obj(); // 0x4b2 PushV
	var_262_object = var_260_object; // 0x4b3 Mov
	func_1231(var_262_object); // 0x4b4 NEW_2
	if(var_261_bool == 0) goto Label_1209; // 0x4b6 JumpB
	var_259_bool = 1; // 0x4b7 MovB
	return 0; // 0x4b8 Return
	
Label_1209:
	var_259_bool = 0; // 0x4b9 MovB
	return 0; // 0x4ba Return
}


func_1076(var_138_string, var_139_bool)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0; // 0x434 PushV
	lshHasAnimation(var_145_bool, var_138_string); // 0x435 Func
	var_148_bool = var_145_bool; // 0x437 Push
	if(var_148_bool == 0) goto Label_1086; // 0x438 JumpB
	lshGetAnimTimes(var_138_string, var_146_float, var_147_float); // 0x439 Func
	lshPlayAnimation(var_146_float, var_147_float, var_139_bool); // 0x43b Func
	goto Label_1090; // 0x43d Jump
	
Label_1090:
	return 6; // 0x442 Return
	
Label_1086:
	var_149_string = "Can't find lsh animation : "; // 0x43e PushS
	var_150_int = var_149_string + var_138_string; // 0x43f Add
	Trace(var_150_int); // 0x440 Func
}


func_1334(var_113_bool, var_114_string)
{
	var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; // 0x536 PushV
	var_119_string = "day"; // 0x537 PushS
	GetProperty(var_119_string, var_117_int); // 0x538 Func
	var_120_string = "K2S_Klara2Svita"; // 0x53a PushS
	var_121_int = var_120_string + var_114_string; // 0x53b Add
	var_122_int = var_121_int + var_117_int; // 0x53c Add
	GetVariable(var_122_int, var_118_int); // 0x53d Func
	var_123_int = 0; // 0x53f PushI
	var_113_bool = var_118_int == var_123_int; // 0x540 Eq2
	return 4; // 0x541 Return
}


func_439(var_2_object, var_134_string)
{
	var_135_bool = 0; // 0x1b8 PushV
	func_1354(var_135_bool); // 0x1b9 NEW_2
	var_136_bool = var_135_bool == 0; // 0x1bb Not
	if(var_136_bool == 0) goto Label_446; // 0x1bc JumpB
	return 0; // 0x1bd Return
	
Label_446:
	var_137_bool = var_134_string == var_2_object; // 0x1be Eq
	if(var_137_bool == 0) goto Label_449; // 0x1bf JumpB
	return 0; // 0x1c0 Return
	
Label_449:
	var_138_string = ""; var_139_bool = 0; // 0x1c1 PushV
	var_138_string = var_134_string; // 0x1c2 Mov
	var_140_string = ""; // 0x1c3 PushS
	var_141_bool = var_134_string == var_140_string; // 0x1c4 Eq
	if(var_141_bool == 0) goto Label_456; // 0x1c5 JumpB
	var_139_bool = 0; // 0x1c6 MovB
	goto Label_457; // 0x1c7 Jump
	
Label_457:
	func_1076(var_138_string, var_139_bool); // 0x1c9 NEW_2
	var_2_object = var_134_string; // 0x1cb TMov
	return 0; // 0x1cc Return
	
Label_456:
	var_139_bool = 1; // 0x1c8 MovB
}


func_824(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0; // 0x338 PushV
	var_21_bool = var_4_bool == 0; // 0x339 NullEq
	if(var_21_bool == 0) goto Label_829; // 0x33a JumpB
	var_18_bool = 0; // 0x33b MovB
	return 2; // 0x33c Return
	
Label_829:
	var_22_float = 0; var_23_object = Obj(); // 0x33d PushV
	var_23_object = var_4_bool; // 0x33e MovT
	func_962(var_23_object); // 0x33f NEW_2
	var_20_float = sqrt(var_22_float); // 0x341 Sqrt2
	var_30_object = var_2_object; // 0x342 PushT
	if(var_30_object == 0) goto Label_837; // 0x343 JumpB
	var_20_float = var_20_float - var_1_object; // 0x344 Sub2
	
Label_837:
	var_18_bool = var_20_float < var_0_object; // 0x345 LT2
	return 2; // 0x346 Return
}


func_1211(var_109_bool, var_110_object)
{
	var_111_bool = 0; var_112_object = Obj(); // 0x4bc PushV
	var_112_object = var_110_object; // 0x4bd Mov
	func_1238(var_112_object); // 0x4be NEW_2
	if(var_111_bool == 0) goto Label_1219; // 0x4c0 JumpB
	var_109_bool = 1; // 0x4c1 MovB
	return 0; // 0x4c2 Return
	
Label_1219:
	var_109_bool = 0; // 0x4c3 MovB
	return 0; // 0x4c4 Return
}


func_955(var_66_bool)
{
	var_66_bool = 1; // 0x3bb MovB
	return 0; // 0x3bc Return
}


func_957()
{
	StopAnimation(); // 0x3bd Func
	StopGroup0(); // 0x3bf Func
	return 0; // 0x3c1 Return
}


func_321(var_0_object, var_1_object, var_2_object, var_3_string, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x142 TMov
	var_1_object = var_102_object; // 0x143 TMov
	var_3_string = 0; // 0x144 TMovB
	var_108_int = 1; // 0x145 PushI
	if(var_108_int == 0) goto Label_409; // 0x146 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x147 PushV
	var_110_object = var_1_object; // 0x148 MovT
	func_1211(var_109_bool, var_110_object); // 0x149 NEW_2
	if(var_109_bool == 0) goto Label_362; // 0x14b JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x14c PushV
	var_124_object = var_1_object; // 0x14d MovT
	var_125_object = var_0_object; // 0x14e MovT
	func_1184(); // 0x14f NEW_2
	var_134_string = ""; // 0x151 PushV
	var_134_string = "Neutral"; // 0x152 MovS
	func_439(var_103_object, var_134_string); // 0x153 NEW_2
	var_151_int = 538603; // 0x155 PushI
	SetMessage(var_151_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_152_int = 538604; // 0x15a PushI
	var_153_int = 40494; // 0x15b PushI
	var_154_int = 40492; // 0x15c PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x15d TObjFunc
	var_155_int = 538605; // 0x15f PushI
	var_156_int = 40496; // 0x160 PushI
	var_157_int = 40493; // 0x161 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x162 TObjFunc
	var_158_int = 538621; // 0x164 PushI
	var_159_int = 40494; // 0x165 PushI
	var_160_int = 40512; // 0x166 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x167 TObjFunc
	goto Label_409; // 0x169 Jump
	
Label_409:
	var_161_bool = 0; // 0x199 PushV
	func_1354(var_161_bool); // 0x19a NEW_2
	if(var_161_bool == 0) goto Label_424; // 0x19c JumpB
	
Label_413:
	lshWaitForAnimEnd(); // 0x19d Func
	var_162_string = var_3_string; // 0x19f PushT
	if(var_162_string == 0) goto Label_418; // 0x1a0 JumpB
	goto Label_423; // 0x1a1 Jump
	
Label_423:
	goto Label_438; // 0x1a7 Jump
	
Label_438:
	return 0; // 0x1b6 Return
	
Label_418:
	var_163_string = ""; // 0x1a2 PushV
	var_163_string = var_2_object; // 0x1a3 MovT
	func_1060(var_163_string); // 0x1a4 NEW_2
	goto Label_413; // 0x1a6 Jump
	
Label_424:
	var_174_string = "all"; // 0x1a8 PushS
	var_175_string = "idle"; // 0x1a9 PushS
	PlayAnimation(var_174_string, var_175_string); // 0x1aa Func
	
Label_428:
	WaitForAnimEnd(); // 0x1ac Func
	var_176_string = var_3_string; // 0x1ae PushT
	if(var_176_string == 0) goto Label_433; // 0x1af JumpB
	goto Label_438; // 0x1b0 Jump
	
Label_433:
	var_177_string = "all"; // 0x1b1 PushS
	var_178_string = "idle"; // 0x1b2 PushS
	PlayAnimation(var_177_string, var_178_string); // 0x1b3 Func
	goto Label_428; // 0x1b5 Jump
	
Label_362:
	var_179_bool = 0; var_180_object = Obj(); // 0x16a PushV
	var_180_object = var_1_object; // 0x16b MovT
	func_1221(var_179_bool, var_180_object); // 0x16c NEW_2
	if(var_179_bool == 0) goto Label_387; // 0x16e JumpB
	var_185_string = ""; // 0x16f PushV
	var_185_string = "Neutral"; // 0x170 MovS
	func_439(var_103_object, var_185_string); // 0x171 NEW_2
	var_186_int = 538622; // 0x173 PushI
	SetMessage(var_186_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_187_int = 538623; // 0x178 PushI
	var_188_int = -1; // 0x179 PushI
	var_189_int = 40514; // 0x17a PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x17b TObjFunc
	var_190_int = 538624; // 0x17d PushI
	var_191_int = -1; // 0x17e PushI
	var_192_int = 40515; // 0x17f PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x180 TObjFunc
	goto Label_409; // 0x182 Jump
	
Label_387:
	var_193_string = ""; // 0x183 PushV
	var_193_string = "Neutral"; // 0x184 MovS
	func_439(var_103_object, var_193_string); // 0x185 NEW_2
	var_194_int = 538625; // 0x187 PushI
	SetMessage(var_194_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_195_int = 538626; // 0x18c PushI
	var_196_int = 40519; // 0x18d PushI
	var_197_int = 40517; // 0x18e PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x18f TObjFunc
	var_198_int = 538627; // 0x191 PushI
	var_199_int = -1; // 0x192 PushI
	var_200_int = 40518; // 0x193 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x194 TObjFunc
	goto Label_409; // 0x196 Jump
}


func_1346(var_90_int)
{
	var_90_int = 515595; // 0x542 MovI
	return 0; // 0x543 Return
}


func_962(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x3c2 PushV
	GetPosition(var_27_cvector); // 0x3c3 Func
	GetPosition(var_28_cvector); // 0x3c5 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x3c7 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x3c8 Or2
	return 6; // 0x3c9 Return
}


func_1348(var_89_int)
{
	var_89_int = 512611; // 0x544 MovI
	return 0; // 0x545 Return
}


func_1221(var_179_bool, var_180_object)
{
	var_181_bool = 0; var_182_object = Obj(); // 0x4c6 PushV
	var_182_object = var_180_object; // 0x4c7 Mov
	func_1245(var_182_object); // 0x4c8 NEW_2
	if(var_181_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_179_bool = 1; // 0x4cb MovB
	return 0; // 0x4cc Return
	
Label_1229:
	var_179_bool = 0; // 0x4cd MovB
	return 0; // 0x4ce Return
}


func_1350(var_91_string)
{
	var_91_string = "ui/NPC_Albinos.png"; // 0x546 MovS
	return 0; // 0x547 Return
}


func_1091(var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0x443 PushV
	GetEyesHeight(var_35_float); // 0x444 ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x446 MovV
	var_37_float = GetByIndex(var_36_cvector, 1); // 0x447 PushE
	var_37_float = var_35_float; // 0x448 Mov
	SetByIndex(var_36_cvector, 1) = var_37_float; // 0x449 PopE
	var_38_string = "head"; // 0x44a PushS
	LookAsync(var_32_object, var_38_string, var_36_cvector); // 0x44b Func
	return 4; // 0x44d Return
}


func_1352(var_92_string)
{
	var_92_string = "ui/NPC_Albinos_b.png"; // 0x548 MovS
	return 0; // 0x549 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_243_object, var_244_object)
{
	var_0_object = var_244_object; // 0x4b TMov
	var_1_object = var_243_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_249_int = 1; // 0x4e PushI
	if(var_249_int == 0) goto Label_112; // 0x4f JumpB
	var_250_string = ""; // 0x50 PushV
	var_250_string = "Neutral"; // 0x51 MovS
	func_142(var_244_object, var_250_string); // 0x52 NEW_2
	var_258_int = 538595; // 0x54 PushI
	SetMessage(var_258_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_259_bool = 0; var_260_object = Obj(); // 0x59 PushV
	var_260_object = var_1_object; // 0x5a MovT
	func_1201(var_259_bool, var_260_object); // 0x5b NEW_2
	if(var_259_bool == 0) goto Label_99; // 0x5d JumpB
	var_265_int = 538598; // 0x5e PushI
	var_266_int = 40487; // 0x5f PushI
	var_267_int = 40486; // 0x60 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x61 TObjFunc
	
Label_99:
	var_268_int = 538596; // 0x63 PushI
	var_269_int = -1; // 0x64 PushI
	var_270_int = 40484; // 0x65 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x66 TObjFunc
	var_271_int = 538597; // 0x68 PushI
	var_272_int = -1; // 0x69 PushI
	var_273_int = 40485; // 0x6a PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_274_bool = 0; // 0x70 PushV
	func_1354(var_274_bool); // 0x71 NEW_2
	if(var_274_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_275_string = var_3_string; // 0x76 PushT
	if(var_275_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_276_string = ""; // 0x79 PushV
	var_276_string = var_2_object; // 0x7a MovT
	func_1060(var_276_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_277_string = "all"; // 0x7f PushS
	var_278_string = "idle"; // 0x80 PushS
	PlayAnimation(var_277_string, var_278_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_279_string = var_3_string; // 0x85 PushT
	if(var_279_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_280_string = "all"; // 0x88 PushS
	var_281_string = "idle"; // 0x89 PushS
	PlayAnimation(var_280_string, var_281_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_1354(var_84_bool)
{
	var_84_bool = 0; // 0x54a MovB
	return 0; // 0x54b Return
}


func_970(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0x3ca PushV
	IsLoaded(var_20_bool); // 0x3cb Func
	var_18_bool = var_20_bool; // 0x3cd Mov
	return 2; // 0x3ce Return
}


func_1102()
{
	var_18_bool = 0; // 0x44e PushV
	func_1354(var_18_bool); // 0x44f NEW_2
	if(var_18_bool == 0) goto Label_1108; // 0x451 JumpB
	lshStopSpeech(); // 0x452 Func
	
Label_1108:
	return 0; // 0x454 Return
}


func_975(var_42_bool, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0; // 0x3cf PushV
	GetPosition(var_55_cvector); // 0x3d0 ObjFunc
	GetEyesHeight(var_54_float); // 0x3d2 ObjFunc
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x3d4 PushE
	var_63_float = var_63_float + var_54_float; // 0x3d5 Add2
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x3d6 PopE
	GetPosition(var_56_cvector); // 0x3d7 Func
	GetEyesHeight(var_54_float); // 0x3d9 Func
	var_64_float = GetByIndex(var_56_cvector, 1); // 0x3db PushE
	var_64_float = var_64_float + var_54_float; // 0x3dc Add2
	SetByIndex(var_56_cvector, 1) = var_64_float; // 0x3dd PopE
	var_57_cvector = var_55_cvector - var_56_cvector; // 0x3de Sub2
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x3df PushE
	var_65_float = 0; // 0x3e0 MovI
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x3e1 PopE
	var_66_int = var_57_cvector | var_57_cvector; // 0x3e2 Or
	var_67_float = sqrt(var_66_int); // 0x3e3 Sqrt
	var_57_cvector = var_57_cvector / var_57_cvector; // 0x3e4 Div2
	var_58_cvector = -var_57_cvector; // 0x3e5 Neg2
	var_68_float = var_57_cvector * var_44_float; // 0x3e6 Mult
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x3e7 PushV
	var_71_cvector = CVector(0.0, 1.0, 0.0); // 0x3e8 PushVec
	var_70_cvector = var_58_cvector ^ var_71_cvector; // 0x3e9 Xor2
	func_1109(var_69_cvector, var_70_cvector); // 0x3ea NEW_2
	var_77_int = 25; // 0x3ec PushI
	var_78_float = var_69_cvector * var_77_int; // 0x3ed Mult
	var_79_int = var_68_float + var_78_float; // 0x3ee Add
	var_80_cvector = CVector(0.0, 10.0, 0.0); // 0x3ef PushVec
	var_59_cvector = var_79_int - var_80_cvector; // 0x3f0 Sub2
	var_60_cvector = var_56_cvector + var_59_cvector; // 0x3f1 Add2
	IsOverrideActive(var_61_bool); // 0x3f2 Func
	var_81_bool = var_61_bool; // 0x3f4 Push
	if(var_81_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_42_bool = 0; // 0x3f6 MovB
	return 18; // 0x3f7 Return
	
Label_1016:
	StopWorld(); // 0x3f8 Func
	CameraTransit(var_60_cvector, var_58_cvector); // 0x3fa Func
	var_82_float = GetByIndex(var_59_cvector, 0); // 0x3fc PushE
	var_83_float = GetByIndex(var_59_cvector, 2); // 0x3fd PushE
	Rotate(var_82_float, var_83_float); // 0x3fe Func
	var_84_bool = 0; // 0x400 PushV
	func_1354(var_84_bool); // 0x401 NEW_2
	if(var_84_bool == 0) goto Label_1029; // 0x403 JumpB
	goto Label_1037; // 0x404 Jump
	
Label_1037:
	CameraWaitForPlayFinish(); // 0x40d Func
	ResumeWorld(); // 0x40f Func
	var_42_bool = 1; // 0x411 MovB
	return 18; // 0x412 Return
	
Label_1029:
	var_85_string = "head"; // 0x405 PushS
	HasAnimationTrack(var_62_bool, var_85_string); // 0x406 Func
	var_86_bool = var_62_bool; // 0x408 Push
	if(var_86_bool == 0) goto Label_1037; // 0x409 JumpB
	var_87_string = "head"; // 0x40a PushS
	LookAsyncCamera(var_87_string); // 0x40b Func
}


func_1231(var_261_bool)
{
	var_263_bool = 0; var_264_string = ""; // 0x4d0 PushV
	var_264_string = "AlbinosLate1"; // 0x4d1 MovS
	func_1334(var_263_bool, var_264_string); // 0x4d2 NEW_2
	var_261_bool = var_263_bool; // 0x4d3 Mov
	return 0; // 0x4d5 Return
}


func_1109(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x455 PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x456 Or
	var_73_float = sqrt(var_74_int); // 0x457 Sqrt2
	var_75_float = 0.0; // 0x458 PushF
	var_76_bool = var_73_float < var_75_float; // 0x459 LT
	if(var_76_bool == 0) goto Label_1117; // 0x45a JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x45b MovV
	return 2; // 0x45c Return
	
Label_1117:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x45d Div2
	return 2; // 0x45e Return
}


func_1238(var_111_bool)
{
	var_113_bool = 0; var_114_string = ""; // 0x4d7 PushV
	var_114_string = "Albinos1"; // 0x4d8 MovS
	func_1334(var_113_bool, var_114_string); // 0x4d9 NEW_2
	var_111_bool = var_113_bool; // 0x4da Mov
	return 0; // 0x4dc Return
}


func_1245(var_181_bool)
{
	var_183_bool = 0; var_184_string = ""; // 0x4de PushV
	var_184_string = "BadKlara"; // 0x4df MovS
	func_1334(var_183_bool, var_184_string); // 0x4e0 NEW_2
	var_181_bool = !var_183_bool; // 0x4e2 Not2
	return 0; // 0x4e3 Return
}


func_862(var_2_object, var_3_string)
{
	func_957(); // 0x35f NEW_2
	var_20_int = 10; // 0x361 PushI
	KillTimer(var_20_int); // 0x362 Func
	var_21_object = var_2_object; // 0x364 PushT
	if(var_21_object == 0) goto Label_874; // 0x365 JumpB
	var_22_string = "head"; // 0x366 PushS
	UnlookAsync(var_22_string); // 0x367 Func
	var_2_object = 0; // 0x369 TMovB
	
Label_874:
	var_3_string = 1; // 0x36a TMovB
	return 0; // 0x36b Return
}


func_1119(var_211_bool, var_212_string, var_213_string)
{
	var_214_object = Obj(); var_215_object = Obj(); // 0x45f PushV
	FindActor(var_215_object, var_212_string); // 0x460 Func
	var_216_bool = var_215_object == 0; // 0x462 NullEq
	if(var_216_bool == 0) goto Label_1126; // 0x463 JumpB
	var_211_bool = 0; // 0x464 MovB
	return 2; // 0x465 Return
	
Label_1126:
	Trigger(var_215_object, var_213_string); // 0x466 Func
	var_211_bool = 1; // 0x468 MovB
	return 2; // 0x469 Return
}


func_1252()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x4e4 PushV
	var_47_int = 785; // 0x4e5 PushI
	var_48_int = 2; // 0x4e6 PushI
	var_49_int = 542470; // 0x4e7 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0x4e8 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x4ea PushV
	var_51_object = var_46_object; // 0x4eb Mov
	var_52_int = 723; // 0x4ec MovI
	func_1278(var_50_bool, var_51_object, var_52_int); // 0x4ed NEW_2
	return 2; // 0x4ef Return
}


func_1131(var_24_int)
{
	var_25_float = 0; var_26_float = 0; // 0x46b PushV
	GetGameTime(var_26_float); // 0x46c Func
	var_27_int = 1; // 0x46e PushI
	var_28_int = 0; // 0x46f PushV
	var_29_int = 24; // 0x470 PushI
	var_28_int = var_26_float / var_26_float; // 0x471 Div2
	var_24_int = var_27_int + var_28_int; // 0x472 Add2
	return 2; // 0x473 Return
}


func_876()
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_bool = 0; // 0x36c PushV
	WaitForAnimEnd(); // 0x36d Func
	var_39_bool = 0; // 0x36f PushV
	func_970(var_39_bool); // 0x370 NEW_2
	var_40_bool = var_39_bool == 0; // 0x372 Not
	if(var_40_bool == 0) goto Label_885; // 0x373 JumpB
	return 14; // 0x374 Return
	
Label_885:
	var_41_int = 0; // 0x375 PushV
	func_1147(var_41_int); // 0x376 NEW_2
	var_32_int = var_41_int; // 0x377 Mov
	var_33_int = 0; // 0x379 MovI
	
Label_890:
	var_54_bool = 0; // 0x37a PushV
	var_54_bool = 0; // 0x37b MovB
	var_55_int = 5; // 0x37c PushI
	var_56_bool = var_33_int < var_55_int; // 0x37d LT
	if(var_56_bool == 0) goto Label_900; // 0x37e JumpB
	var_57_bool = 0; // 0x37f PushV
	func_970(var_57_bool); // 0x380 NEW_2
	if(var_57_bool == 0) goto Label_900; // 0x382 JumpB
	var_54_bool = 1; // 0x383 MovB
	
Label_900:
	if(var_54_bool == 0) goto Label_952; // 0x384 JumpB
	var_58_int = 3; // 0x385 PushI
	irand(var_34_int, var_58_int); // 0x386 Func
	var_59_int = 0; // 0x388 PushI
	var_60_bool = var_34_int == var_59_int; // 0x389 Eq
	if(var_60_bool == 0) goto Label_924; // 0x38a JumpB
	var_61_int = var_32_int; // 0x38b Push
	if(var_61_int == 0) goto Label_923; // 0x38c JumpB
	irand(var_35_int, var_32_int); // 0x38d Func
	var_62_string = "all"; // 0x38f PushS
	var_63_string = ""; var_64_int = 0; // 0x390 PushV
	var_64_int = var_35_int; // 0x391 Mov
	func_1140(var_63_string, var_64_int); // 0x392 NEW_2
	PlayAnimation(var_62_string, var_63_string); // 0x394 Func
	WaitForAnimEnd(var_36_bool); // 0x396 Func
	var_65_bool = var_36_bool == 0; // 0x398 Not
	if(var_65_bool == 0) goto Label_923; // 0x399 JumpB
	goto Label_952; // 0x39a Jump
	
Label_952:
	ResetAAS(); // 0x3b8 Func
	return 14; // 0x3ba Return
	
Label_923:
	goto Label_941; // 0x39b Jump
	
Label_941:
	var_66_bool = 0; // 0x3ad PushV
	func_955(var_66_bool); // 0x3ae NEW_2
	var_67_bool = var_66_bool == 0; // 0x3b0 Not
	if(var_67_bool == 0) goto Label_947; // 0x3b1 JumpB
	goto Label_952; // 0x3b2 Jump
	
Label_947:
	ResetAAS(); // 0x3b3 Func
	var_68_int = 1; // 0x3b5 PushI
	var_33_int = var_33_int + var_68_int; // 0x3b6 Add2
	goto Label_890; // 0x3b7 Jump
	
Label_924:
	var_69_int = 1; // 0x39c PushI
	var_70_bool = var_34_int == var_69_int; // 0x39d Eq
	if(var_70_bool == 0) goto Label_938; // 0x39e JumpB
	var_71_int = 4; // 0x39f PushI
	rand(var_37_float, var_71_int); // 0x3a0 Func
	var_72_int = 1; // 0x3a2 PushI
	var_73_int = var_37_float + var_72_int; // 0x3a3 Add
	Sleep(var_73_int, var_38_bool); // 0x3a4 Func
	var_74_bool = var_38_bool == 0; // 0x3a6 Not
	if(var_74_bool == 0) goto Label_937; // 0x3a7 JumpB
	goto Label_952; // 0x3a8 Jump
	
Label_937:
	goto Label_941; // 0x3a9 Jump
	
Label_938:
	var_75_int = var_33_int; // 0x3aa Push
	if(var_75_int == 0) goto Label_941; // 0x3ab JumpB
	goto Label_952; // 0x3ac Jump
}


func_1265(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x4f1 PushV
	GetDiaryRoot(var_61_object); // 0x4f2 Func
	var_62_bool = var_61_object == 0; // 0x4f4 Not
	if(var_62_bool == 0) goto Label_1275; // 0x4f5 JumpB
	var_63_string = "Can't retrieve diary root"; // 0x4f6 PushS
	Trace(var_63_string); // 0x4f7 Func
	var_59_object = 0; // 0x4f9 MovB
	return 2; // 0x4fa Return
	
Label_1275:
	var_59_object = var_61_object; // 0x4fb Mov
	return 2; // 0x4fc Return
}


func_1140(var_47_string, var_48_int)
{
	var_49_string = ""; var_50_string = ""; // 0x474 PushV
	var_50_string = "idle"; // 0x475 MovS
	var_51_int = var_48_int; // 0x476 Push
	if(var_51_int == 0) goto Label_1145; // 0x477 JumpB
	var_50_string = var_50_string + var_48_int; // 0x478 Add2
	
Label_1145:
	var_47_string = var_50_string; // 0x479 Mov
	return 2; // 0x47a Return
}


func_247(var_0_object, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0xf7 PushV
	var_0_object = var_32_object; // 0xf8 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0xf9 PushV
	var_43_object = var_32_object; // 0xfa Mov
	var_44_float = 70.0; // 0xfb MovF
	func_975(var_43_object, var_44_float); // 0xfc NEW_2
	var_88_bool = var_42_bool == 0; // 0xfe Not
	if(var_88_bool == 0) goto Label_258; // 0xff JumpB
	var_31_int = -2; // 0x100 MovI
	return 8; // 0x101 Return
	
Label_258:
	CreateDialog(var_38_object); // 0x102 Func
	var_89_int = 0; // 0x104 PushV
	func_1348(var_89_int); // 0x105 NEW_2
	SetNPCName(var_89_int); // 0x107 ObjFunc
	var_90_int = 0; // 0x109 PushV
	func_1346(var_90_int); // 0x10a NEW_2
	SetNPCDescription(var_90_int); // 0x10c ObjFunc
	var_91_string = ""; // 0x10e PushV
	func_1350(var_91_string); // 0x10f NEW_2
	SetPhoto(var_91_string); // 0x111 ObjFunc
	var_92_string = ""; // 0x113 PushV
	func_1352(var_92_string); // 0x114 NEW_2
	SetPhoto2(var_92_string); // 0x116 ObjFunc
	var_93_int = 0; // 0x118 PushV
	func_1306(var_93_int); // 0x119 NEW_2
	SetPlayerName(var_93_int); // 0x11b ObjFunc
	var_40_int = -1; // 0x11d MovI
	IsOverrideActive(var_39_bool); // 0x11e Func
	var_101_bool = var_39_bool; // 0x120 Push
	if(var_101_bool == 0) goto Label_292; // 0x121 JumpB
	var_31_int = -2; // 0x122 MovI
	return 8; // 0x123 Return
	
Label_292:
	DoDialog(var_38_object); // 0x124 Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x126 PushV
	var_102_object = var_32_object; // 0x127 Mov
	var_103_object = var_38_object; // 0x128 Mov
	TaskCall(3); // 0x129 TaskCall
	func_321(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x12a NEW_2
	TaskReturn(); // 0x12b TaskReturn
	IsDialogEnd(var_41_bool); // 0x12d ObjFunc
	
Label_303:
	var_201_bool = var_41_bool == 0; // 0x12f Not
	if(var_201_bool == 0) goto Label_310; // 0x130 JumpB
	sync(); // 0x131 Func
	IsDialogEnd(var_41_bool); // 0x133 ObjFunc
	goto Label_303; // 0x135 Jump
	
Label_310:
	var_202_object = Obj(); // 0x136 PushV
	var_202_object = var_32_object; // 0x137 Mov
	func_1043(); // 0x138 NEW_2
	StopDialog(var_38_object); // 0x13a Func
	GetReturnValue(var_40_int); // 0x13c ObjFunc
	var_31_int = var_40_int; // 0x13e Mov
	return 8; // 0x13f Return
}


func_1147(var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0; // 0x47b PushV
	var_44_int = 0; // 0x47c MovI
	
Label_1149:
	var_46_string = "all"; // 0x47d PushS
	var_47_string = ""; var_48_int = 0; // 0x47e PushV
	var_48_int = var_44_int; // 0x47f Mov
	func_1140(var_47_string, var_48_int); // 0x480 NEW_2
	HasAnimation(var_45_bool, var_46_string, var_47_string); // 0x482 Func
	var_52_bool = var_45_bool == 0; // 0x484 Not
	if(var_52_bool == 0) goto Label_1159; // 0x485 JumpB
	goto Label_1162; // 0x486 Jump
	
Label_1162:
	var_41_int = var_44_int; // 0x48a Mov
	return 4; // 0x48b Return
	
Label_1159:
	var_53_int = 1; // 0x487 PushI
	var_44_int = var_44_int + var_53_int; // 0x488 Add2
	goto Label_1149; // 0x489 Jump
}


func_1278(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x4fe PushV
	var_59_object = Obj(); // 0x4ff PushV
	func_1265(var_59_object); // 0x500 NEW_2
	var_56_object = var_59_object; // 0x501 Mov
	Find(var_52_int, var_57_object); // 0x503 ObjFunc
	var_64_bool = var_57_object == 0; // 0x505 Not
	if(var_64_bool == 0) goto Label_1293; // 0x506 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x507 PushS
	var_66_int = var_65_string + var_52_int; // 0x508 Add
	Trace(var_66_int); // 0x509 Func
	var_50_bool = 0; // 0x50b MovB
	return 6; // 0x50c Return
	
Label_1293:
	AddChild(var_51_object); // 0x50d ObjFunc
	var_67_int = 7; // 0x50f PushI
	SendWorldWndMessage(var_67_int); // 0x510 Func
	GetCategory(var_58_int); // 0x512 ObjFunc
	SetDiarySection(var_58_int); // 0x514 Func
	var_50_bool = 0; // 0x516 MovB
	return 6; // 0x517 Return
}


