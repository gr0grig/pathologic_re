task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0xc2 PushI
	if(var_35_int == 0) goto Label_461; // 0xc3 JumpB
	func_2429(); // 0xc5 NEW_2
	var_37_int = 26947; // 0xc7 PushI
	var_38_bool = var_34_cvector == var_37_int; // 0xc8 Eq
	if(var_38_bool == 0) goto Label_207; // 0xc9 JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0xca PushV
	var_39_object = var_1_object; // 0xcb MovT
	var_40_object = var_0_object; // 0xcc MovT
	func_2588(); // 0xcd NEW_2
	
Label_207:
	var_43_int = 26951; // 0xcf PushI
	var_44_bool = var_34_cvector == var_43_int; // 0xd0 Eq
	if(var_44_bool == 0) goto Label_220; // 0xd1 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xd2 PushV
	var_45_object = var_1_object; // 0xd3 MovT
	var_46_object = var_0_object; // 0xd4 MovT
	func_2624(); // 0xd5 NEW_2
	var_49_object = Obj(); var_50_object = Obj(); // 0xd7 PushV
	var_49_object = var_1_object; // 0xd8 MovT
	var_50_object = var_0_object; // 0xd9 MovT
	func_2594(var_50_object); // 0xda NEW_2
	
Label_220:
	var_70_int = 43252; // 0xdc PushI
	var_71_bool = var_34_cvector == var_70_int; // 0xdd Eq
	if(var_71_bool == 0) goto Label_228; // 0xde JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0xdf PushV
	var_72_object = var_1_object; // 0xe0 MovT
	var_73_object = var_0_object; // 0xe1 MovT
	func_2581(var_73_object); // 0xe2 NEW_2
	
Label_228:
	var_112_int = 26946; // 0xe4 PushI
	var_113_bool = var_33_cvector == var_112_int; // 0xe5 Eq
	if(var_113_bool == 0) goto Label_270; // 0xe6 JumpB
	var_114_string = ""; // 0xe7 PushV
	var_114_string = "Confusion"; // 0xe8 MovS
	func_171(var_34_cvector, var_114_string); // 0xe9 NEW_2
	var_131_int = 525599; // 0xeb PushI
	SetMessage(var_131_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_132_bool = 0; // 0xf0 PushV
	var_132_bool = 0; // 0xf1 MovB
	var_133_bool = 0; var_134_object = Obj(); // 0xf2 PushV
	var_134_object = var_1_object; // 0xf3 MovT
	func_2630(var_134_object); // 0xf4 NEW_2
	if(var_133_bool == 0) goto Label_253; // 0xf6 JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0xf7 PushV
	var_142_object = var_1_object; // 0xf8 MovT
	func_2642(var_142_object); // 0xf9 NEW_2
	if(var_141_bool == 0) goto Label_253; // 0xfb JumpB
	var_132_bool = 1; // 0xfc MovB
	
Label_253:
	if(var_132_bool == 0) goto Label_259; // 0xfd JumpB
	var_147_int = 525600; // 0xfe PushI
	var_148_int = 26948; // 0xff PushI
	var_149_int = 26947; // 0x100 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x101 TObjFunc
	
Label_259:
	var_150_int = 525605; // 0x103 PushI
	var_151_int = -1; // 0x104 PushI
	var_152_int = 26952; // 0x105 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x106 TObjFunc
	var_153_int = 542220; // 0x108 PushI
	var_154_int = -1; // 0x109 PushI
	var_155_int = 44551; // 0x10a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_156_int = 26948; // 0x10e PushI
	var_157_bool = var_33_cvector == var_156_int; // 0x10f Eq
	if(var_157_bool == 0) goto Label_293; // 0x110 JumpB
	var_158_string = ""; // 0x111 PushV
	var_158_string = "Confusion"; // 0x112 MovS
	func_171(var_34_cvector, var_158_string); // 0x113 NEW_2
	var_159_int = 525601; // 0x115 PushI
	SetMessage(var_159_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_160_int = 542221; // 0x11a PushI
	var_161_int = 44554; // 0x11b PushI
	var_162_int = 44552; // 0x11c PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x11d TObjFunc
	var_163_int = 542222; // 0x11f PushI
	var_164_int = 44555; // 0x120 PushI
	var_165_int = 44553; // 0x121 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_166_int = 44555; // 0x125 PushI
	var_167_bool = var_33_cvector == var_166_int; // 0x126 Eq
	if(var_167_bool == 0) goto Label_316; // 0x127 JumpB
	var_168_string = ""; // 0x128 PushV
	var_168_string = "Anger"; // 0x129 MovS
	func_171(var_34_cvector, var_168_string); // 0x12a NEW_2
	var_169_int = 542224; // 0x12c PushI
	SetMessage(var_169_int); // 0x12d TObjFunc
	ClearReplies(); // 0x12f TObjFunc
	var_170_int = 542225; // 0x131 PushI
	var_171_int = 44554; // 0x132 PushI
	var_172_int = 44556; // 0x133 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x134 TObjFunc
	var_173_int = 542226; // 0x136 PushI
	var_174_int = 44560; // 0x137 PushI
	var_175_int = 44557; // 0x138 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_176_int = 44554; // 0x13c PushI
	var_177_bool = var_33_cvector == var_176_int; // 0x13d Eq
	if(var_177_bool == 0) goto Label_339; // 0x13e JumpB
	var_178_string = ""; // 0x13f PushV
	var_178_string = "Anger"; // 0x140 MovS
	func_171(var_34_cvector, var_178_string); // 0x141 NEW_2
	var_179_int = 542223; // 0x143 PushI
	SetMessage(var_179_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_180_int = 542227; // 0x148 PushI
	var_181_int = 44562; // 0x149 PushI
	var_182_int = 44559; // 0x14a PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x14b TObjFunc
	var_183_int = 542232; // 0x14d PushI
	var_184_int = 44562; // 0x14e PushI
	var_185_int = 44564; // 0x14f PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_186_int = 44562; // 0x153 PushI
	var_187_bool = var_33_cvector == var_186_int; // 0x154 Eq
	if(var_187_bool == 0) goto Label_362; // 0x155 JumpB
	var_188_string = ""; // 0x156 PushV
	var_188_string = "Surprise"; // 0x157 MovS
	func_171(var_34_cvector, var_188_string); // 0x158 NEW_2
	var_189_int = 542230; // 0x15a PushI
	SetMessage(var_189_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_190_int = 542231; // 0x15f PushI
	var_191_int = 44560; // 0x160 PushI
	var_192_int = 44563; // 0x161 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x162 TObjFunc
	var_193_int = 542229; // 0x164 PushI
	var_194_int = 44560; // 0x165 PushI
	var_195_int = 44561; // 0x166 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_196_int = 44560; // 0x16a PushI
	var_197_bool = var_33_cvector == var_196_int; // 0x16b Eq
	if(var_197_bool == 0) goto Label_385; // 0x16c JumpB
	var_198_string = ""; // 0x16d PushV
	var_198_string = "Surprise"; // 0x16e MovS
	func_171(var_34_cvector, var_198_string); // 0x16f NEW_2
	var_199_int = 542228; // 0x171 PushI
	SetMessage(var_199_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_200_int = 525602; // 0x176 PushI
	var_201_int = 26950; // 0x177 PushI
	var_202_int = 26949; // 0x178 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x179 TObjFunc
	var_203_int = 542238; // 0x17b PushI
	var_204_int = 44568; // 0x17c PushI
	var_205_int = 44573; // 0x17d PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_206_int = 26950; // 0x181 PushI
	var_207_bool = var_33_cvector == var_206_int; // 0x182 Eq
	if(var_207_bool == 0) goto Label_408; // 0x183 JumpB
	var_208_string = ""; // 0x184 PushV
	var_208_string = "Surprise"; // 0x185 MovS
	func_171(var_34_cvector, var_208_string); // 0x186 NEW_2
	var_209_int = 525603; // 0x188 PushI
	SetMessage(var_209_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_210_int = 542233; // 0x18d PushI
	var_211_int = 44568; // 0x18e PushI
	var_212_int = 44567; // 0x18f PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x190 TObjFunc
	var_213_int = 542235; // 0x192 PushI
	var_214_int = 44571; // 0x193 PushI
	var_215_int = 44569; // 0x194 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_216_int = 44568; // 0x198 PushI
	var_217_bool = var_33_cvector == var_216_int; // 0x199 Eq
	if(var_217_bool == 0) goto Label_426; // 0x19a JumpB
	var_218_string = ""; // 0x19b PushV
	var_218_string = "Neutral"; // 0x19c MovS
	func_171(var_34_cvector, var_218_string); // 0x19d NEW_2
	var_219_int = 542234; // 0x19f PushI
	SetMessage(var_219_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_220_int = 542236; // 0x1a4 PushI
	var_221_int = 44571; // 0x1a5 PushI
	var_222_int = 44570; // 0x1a6 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_223_int = 44571; // 0x1aa PushI
	var_224_bool = var_33_cvector == var_223_int; // 0x1ab Eq
	if(var_224_bool == 0) goto Label_449; // 0x1ac JumpB
	var_225_string = ""; // 0x1ad PushV
	var_225_string = "Neutral"; // 0x1ae MovS
	func_171(var_34_cvector, var_225_string); // 0x1af NEW_2
	var_226_int = 542237; // 0x1b1 PushI
	SetMessage(var_226_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_227_int = 525604; // 0x1b6 PushI
	var_228_int = -1; // 0x1b7 PushI
	var_229_int = 26951; // 0x1b8 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1b9 TObjFunc
	var_230_int = 541131; // 0x1bb PushI
	var_231_int = -1; // 0x1bc PushI
	var_232_int = 43252; // 0x1bd PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_3_string = 1; // 0x1c1 TMovB
	var_233_bool = 0; // 0x1c2 PushV
	func_2579(var_233_bool); // 0x1c3 NEW_2
	if(var_233_bool == 0) goto Label_457; // 0x1c5 JumpB
	lshStopAnimation(); // 0x1c6 Func
	goto Label_459; // 0x1c8 Jump
	
Label_459:
	return 0; // 0x1cb Return
	
Label_457:
	StopAnimation(); // 0x1c9 Func
	
Label_461:
	return 0; // 0x1cd Return
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0x270 PushI
	if(var_35_int == 0) goto Label_756; // 0x271 JumpB
	func_2429(); // 0x273 NEW_2
	var_37_int = 26887; // 0x275 PushI
	var_38_bool = var_33_cvector == var_37_int; // 0x276 Eq
	if(var_38_bool == 0) goto Label_652; // 0x277 JumpB
	var_39_string = ""; // 0x278 PushV
	var_39_string = "Neutral"; // 0x279 MovS
	func_601(var_34_cvector, var_39_string); // 0x27a NEW_2
	var_56_int = 525531; // 0x27c PushI
	SetMessage(var_56_int); // 0x27d TObjFunc
	ClearReplies(); // 0x27f TObjFunc
	var_57_int = 525532; // 0x281 PushI
	var_58_int = 44536; // 0x282 PushI
	var_59_int = 26888; // 0x283 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x284 TObjFunc
	var_60_int = 542207; // 0x286 PushI
	var_61_int = 44538; // 0x287 PushI
	var_62_int = 44535; // 0x288 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_63_int = 44536; // 0x28c PushI
	var_64_bool = var_33_cvector == var_63_int; // 0x28d Eq
	if(var_64_bool == 0) goto Label_675; // 0x28e JumpB
	var_65_string = ""; // 0x28f PushV
	var_65_string = "Neutral"; // 0x290 MovS
	func_601(var_34_cvector, var_65_string); // 0x291 NEW_2
	var_66_int = 542208; // 0x293 PushI
	SetMessage(var_66_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_67_int = 542209; // 0x298 PushI
	var_68_int = 44538; // 0x299 PushI
	var_69_int = 44537; // 0x29a PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x29b TObjFunc
	var_70_int = 542214; // 0x29d PushI
	var_71_int = 44538; // 0x29e PushI
	var_72_int = 44543; // 0x29f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_73_int = 44538; // 0x2a3 PushI
	var_74_bool = var_33_cvector == var_73_int; // 0x2a4 Eq
	if(var_74_bool == 0) goto Label_698; // 0x2a5 JumpB
	var_75_string = ""; // 0x2a6 PushV
	var_75_string = "Neutral"; // 0x2a7 MovS
	func_601(var_34_cvector, var_75_string); // 0x2a8 NEW_2
	var_76_int = 542210; // 0x2aa PushI
	SetMessage(var_76_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_77_int = 542211; // 0x2af PushI
	var_78_int = 44542; // 0x2b0 PushI
	var_79_int = 44539; // 0x2b1 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x2b2 TObjFunc
	var_80_int = 542212; // 0x2b4 PushI
	var_81_int = 44548; // 0x2b5 PushI
	var_82_int = 44541; // 0x2b6 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x2b7 TObjFunc
	return 0; // 0x2b9 Return
	
Label_698:
	var_83_int = 44548; // 0x2ba PushI
	var_84_bool = var_33_cvector == var_83_int; // 0x2bb Eq
	if(var_84_bool == 0) goto Label_721; // 0x2bc JumpB
	var_85_string = ""; // 0x2bd PushV
	var_85_string = "Neutral"; // 0x2be MovS
	func_601(var_34_cvector, var_85_string); // 0x2bf NEW_2
	var_86_int = 542217; // 0x2c1 PushI
	SetMessage(var_86_int); // 0x2c2 TObjFunc
	ClearReplies(); // 0x2c4 TObjFunc
	var_87_int = 542218; // 0x2c6 PushI
	var_88_int = 44542; // 0x2c7 PushI
	var_89_int = 44549; // 0x2c8 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x2c9 TObjFunc
	var_90_int = 542219; // 0x2cb PushI
	var_91_int = -1; // 0x2cc PushI
	var_92_int = 44550; // 0x2cd PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x2ce TObjFunc
	return 0; // 0x2d0 Return
	
Label_721:
	var_93_int = 44542; // 0x2d1 PushI
	var_94_bool = var_33_cvector == var_93_int; // 0x2d2 Eq
	if(var_94_bool == 0) goto Label_744; // 0x2d3 JumpB
	var_95_string = ""; // 0x2d4 PushV
	var_95_string = "Neutral"; // 0x2d5 MovS
	func_601(var_34_cvector, var_95_string); // 0x2d6 NEW_2
	var_96_int = 542213; // 0x2d8 PushI
	SetMessage(var_96_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_97_int = 542215; // 0x2dd PushI
	var_98_int = -1; // 0x2de PushI
	var_99_int = 44546; // 0x2df PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x2e0 TObjFunc
	var_100_int = 542216; // 0x2e2 PushI
	var_101_int = -1; // 0x2e3 PushI
	var_102_int = 44547; // 0x2e4 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_3_string = 1; // 0x2e8 TMovB
	var_103_bool = 0; // 0x2e9 PushV
	func_2579(var_103_bool); // 0x2ea NEW_2
	if(var_103_bool == 0) goto Label_752; // 0x2ec JumpB
	lshStopAnimation(); // 0x2ed Func
	goto Label_754; // 0x2ef Jump
	
Label_754:
	return 0; // 0x2f2 Return
	
Label_752:
	StopAnimation(); // 0x2f0 Func
	
Label_756:
	return 0; // 0x2f4 Return
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0x3b7 PushI
	if(var_35_int == 0) goto Label_1167; // 0x3b8 JumpB
	func_2429(); // 0x3ba NEW_2
	var_37_int = 28232; // 0x3bc PushI
	var_38_bool = var_34_cvector == var_37_int; // 0x3bd Eq
	if(var_38_bool == 0) goto Label_964; // 0x3be JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x3bf PushV
	var_39_object = var_1_object; // 0x3c0 MovT
	var_40_object = var_0_object; // 0x3c1 MovT
	func_2604(); // 0x3c2 NEW_2
	
Label_964:
	var_43_int = 28231; // 0x3c4 PushI
	var_44_bool = var_33_cvector == var_43_int; // 0x3c5 Eq
	if(var_44_bool == 0) goto Label_1019; // 0x3c6 JumpB
	var_45_string = ""; // 0x3c7 PushV
	var_45_string = "Fear"; // 0x3c8 MovS
	func_928(var_34_cvector, var_45_string); // 0x3c9 NEW_2
	var_62_int = 526939; // 0x3cb PushI
	SetMessage(var_62_int); // 0x3cc TObjFunc
	ClearReplies(); // 0x3ce TObjFunc
	var_63_bool = 0; // 0x3d0 PushV
	var_63_bool = 1; // 0x3d1 MovB
	var_64_bool = 0; // 0x3d2 PushV
	var_64_bool = 0; // 0x3d3 MovB
	var_65_bool = 0; var_66_object = Obj(); // 0x3d4 PushV
	var_66_object = var_1_object; // 0x3d5 MovT
	func_2654(var_66_object); // 0x3d6 NEW_2
	if(var_65_bool == 0) goto Label_991; // 0x3d8 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x3d9 PushV
	var_74_object = var_1_object; // 0x3da MovT
	func_2666(var_74_object); // 0x3db NEW_2
	if(var_73_bool == 0) goto Label_991; // 0x3dd JumpB
	var_64_bool = 1; // 0x3de MovB
	
Label_991:
	if(var_64_bool == 0) goto Label_1007; // 0x3df JumpB
	var_79_bool = 0; // 0x3e0 PushV
	var_79_bool = 0; // 0x3e1 MovB
	var_80_bool = 0; var_81_object = Obj(); // 0x3e2 PushV
	var_81_object = var_1_object; // 0x3e3 MovT
	func_2678(var_81_object); // 0x3e4 NEW_2
	if(var_80_bool == 0) goto Label_1005; // 0x3e6 JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x3e7 PushV
	var_87_object = var_1_object; // 0x3e8 MovT
	func_2666(var_87_object); // 0x3e9 NEW_2
	if(var_86_bool == 0) goto Label_1005; // 0x3eb JumpB
	var_79_bool = 1; // 0x3ec MovB
	
Label_1005:
	if(var_79_bool == 0) goto Label_1007; // 0x3ed JumpB
	var_63_bool = 0; // 0x3ee MovB
	
Label_1007:
	if(var_63_bool == 0) goto Label_1013; // 0x3ef JumpB
	var_88_int = 526940; // 0x3f0 PushI
	var_89_int = 28233; // 0x3f1 PushI
	var_90_int = 28232; // 0x3f2 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x3f3 TObjFunc
	
Label_1013:
	var_91_int = 526945; // 0x3f5 PushI
	var_92_int = -1; // 0x3f6 PushI
	var_93_int = 28237; // 0x3f7 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_94_int = 28233; // 0x3fb PushI
	var_95_bool = var_33_cvector == var_94_int; // 0x3fc Eq
	if(var_95_bool == 0) goto Label_1042; // 0x3fd JumpB
	var_96_string = ""; // 0x3fe PushV
	var_96_string = "Neutral"; // 0x3ff MovS
	func_928(var_34_cvector, var_96_string); // 0x400 NEW_2
	var_97_int = 526941; // 0x402 PushI
	SetMessage(var_97_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_98_int = 526942; // 0x407 PushI
	var_99_int = 28235; // 0x408 PushI
	var_100_int = 28234; // 0x409 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x40a TObjFunc
	var_101_int = 527965; // 0x40c PushI
	var_102_int = 29330; // 0x40d PushI
	var_103_int = 29322; // 0x40e PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x40f TObjFunc
	return 0; // 0x411 Return
	
Label_1042:
	var_104_int = 29330; // 0x412 PushI
	var_105_bool = var_33_cvector == var_104_int; // 0x413 Eq
	if(var_105_bool == 0) goto Label_1060; // 0x414 JumpB
	var_106_string = ""; // 0x415 PushV
	var_106_string = "Neutral"; // 0x416 MovS
	func_928(var_34_cvector, var_106_string); // 0x417 NEW_2
	var_107_int = 527973; // 0x419 PushI
	SetMessage(var_107_int); // 0x41a TObjFunc
	ClearReplies(); // 0x41c TObjFunc
	var_108_int = 527974; // 0x41e PushI
	var_109_int = 29332; // 0x41f PushI
	var_110_int = 29331; // 0x420 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_111_int = 29332; // 0x424 PushI
	var_112_bool = var_33_cvector == var_111_int; // 0x425 Eq
	if(var_112_bool == 0) goto Label_1078; // 0x426 JumpB
	var_113_string = ""; // 0x427 PushV
	var_113_string = "Neutral"; // 0x428 MovS
	func_928(var_34_cvector, var_113_string); // 0x429 NEW_2
	var_114_int = 527975; // 0x42b PushI
	SetMessage(var_114_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_115_int = 527976; // 0x430 PushI
	var_116_int = 29321; // 0x431 PushI
	var_117_int = 29333; // 0x432 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_118_int = 28235; // 0x436 PushI
	var_119_bool = var_33_cvector == var_118_int; // 0x437 Eq
	if(var_119_bool == 0) goto Label_1096; // 0x438 JumpB
	var_120_string = ""; // 0x439 PushV
	var_120_string = "Surprise"; // 0x43a MovS
	func_928(var_34_cvector, var_120_string); // 0x43b NEW_2
	var_121_int = 526943; // 0x43d PushI
	SetMessage(var_121_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_122_int = 526944; // 0x442 PushI
	var_123_int = 29321; // 0x443 PushI
	var_124_int = 28236; // 0x444 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_125_int = 29321; // 0x448 PushI
	var_126_bool = var_33_cvector == var_125_int; // 0x449 Eq
	if(var_126_bool == 0) goto Label_1114; // 0x44a JumpB
	var_127_string = ""; // 0x44b PushV
	var_127_string = "Surprise"; // 0x44c MovS
	func_928(var_34_cvector, var_127_string); // 0x44d NEW_2
	var_128_int = 527964; // 0x44f PushI
	SetMessage(var_128_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_129_int = 527966; // 0x454 PushI
	var_130_int = 29324; // 0x455 PushI
	var_131_int = 29323; // 0x456 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x457 TObjFunc
	return 0; // 0x459 Return
	
Label_1114:
	var_132_int = 29324; // 0x45a PushI
	var_133_bool = var_33_cvector == var_132_int; // 0x45b Eq
	if(var_133_bool == 0) goto Label_1137; // 0x45c JumpB
	var_134_string = ""; // 0x45d PushV
	var_134_string = "Confusion"; // 0x45e MovS
	func_928(var_34_cvector, var_134_string); // 0x45f NEW_2
	var_135_int = 527967; // 0x461 PushI
	SetMessage(var_135_int); // 0x462 TObjFunc
	ClearReplies(); // 0x464 TObjFunc
	var_136_int = 527969; // 0x466 PushI
	var_137_int = 29327; // 0x467 PushI
	var_138_int = 29326; // 0x468 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x469 TObjFunc
	var_139_int = 527968; // 0x46b PushI
	var_140_int = -1; // 0x46c PushI
	var_141_int = 29325; // 0x46d PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_142_int = 29327; // 0x471 PushI
	var_143_bool = var_33_cvector == var_142_int; // 0x472 Eq
	if(var_143_bool == 0) goto Label_1155; // 0x473 JumpB
	var_144_string = ""; // 0x474 PushV
	var_144_string = "Confusion"; // 0x475 MovS
	func_928(var_34_cvector, var_144_string); // 0x476 NEW_2
	var_145_int = 527970; // 0x478 PushI
	SetMessage(var_145_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_146_int = 527971; // 0x47d PushI
	var_147_int = -1; // 0x47e PushI
	var_148_int = 29328; // 0x47f PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x480 TObjFunc
	return 0; // 0x482 Return
	
Label_1155:
	var_3_string = 1; // 0x483 TMovB
	var_149_bool = 0; // 0x484 PushV
	func_2579(var_149_bool); // 0x485 NEW_2
	if(var_149_bool == 0) goto Label_1163; // 0x487 JumpB
	lshStopAnimation(); // 0x488 Func
	goto Label_1165; // 0x48a Jump
	
Label_1165:
	return 0; // 0x48d Return
	
Label_1163:
	StopAnimation(); // 0x48b Func
	
Label_1167:
	return 0; // 0x48f Return
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0x53c PushI
	if(var_35_int == 0) goto Label_1539; // 0x53d JumpB
	func_2429(); // 0x53f NEW_2
	var_37_int = 30380; // 0x541 PushI
	var_38_bool = var_34_cvector == var_37_int; // 0x542 Eq
	if(var_38_bool == 0) goto Label_1353; // 0x543 JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0x544 PushV
	var_39_object = var_1_object; // 0x545 MovT
	var_40_object = var_0_object; // 0x546 MovT
	func_2610(); // 0x547 NEW_2
	
Label_1353:
	var_72_int = 30373; // 0x549 PushI
	var_73_bool = var_33_cvector == var_72_int; // 0x54a Eq
	if(var_73_bool == 0) goto Label_1386; // 0x54b JumpB
	var_74_string = ""; // 0x54c PushV
	var_74_string = "Neutral"; // 0x54d MovS
	func_1317(var_34_cvector, var_74_string); // 0x54e NEW_2
	var_91_int = 528940; // 0x550 PushI
	SetMessage(var_91_int); // 0x551 TObjFunc
	ClearReplies(); // 0x553 TObjFunc
	var_92_bool = 0; var_93_object = Obj(); // 0x555 PushV
	var_93_object = var_1_object; // 0x556 MovT
	func_2690(var_93_object); // 0x557 NEW_2
	if(var_92_bool == 0) goto Label_1375; // 0x559 JumpB
	var_100_int = 528943; // 0x55a PushI
	var_101_int = 30377; // 0x55b PushI
	var_102_int = 30376; // 0x55c PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x55d TObjFunc
	
Label_1375:
	var_103_int = 528941; // 0x55f PushI
	var_104_int = -1; // 0x560 PushI
	var_105_int = 30374; // 0x561 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x562 TObjFunc
	var_106_int = 528942; // 0x564 PushI
	var_107_int = -1; // 0x565 PushI
	var_108_int = 30375; // 0x566 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x567 TObjFunc
	return 0; // 0x569 Return
	
Label_1386:
	var_109_int = 30377; // 0x56a PushI
	var_110_bool = var_33_cvector == var_109_int; // 0x56b Eq
	if(var_110_bool == 0) goto Label_1409; // 0x56c JumpB
	var_111_string = ""; // 0x56d PushV
	var_111_string = "Confusion"; // 0x56e MovS
	func_1317(var_34_cvector, var_111_string); // 0x56f NEW_2
	var_112_int = 528944; // 0x571 PushI
	SetMessage(var_112_int); // 0x572 TObjFunc
	ClearReplies(); // 0x574 TObjFunc
	var_113_int = 528945; // 0x576 PushI
	var_114_int = 30379; // 0x577 PushI
	var_115_int = 30378; // 0x578 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x579 TObjFunc
	var_116_int = 528948; // 0x57b PushI
	var_117_int = 30382; // 0x57c PushI
	var_118_int = 30381; // 0x57d PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x57e TObjFunc
	return 0; // 0x580 Return
	
Label_1409:
	var_119_int = 30382; // 0x581 PushI
	var_120_bool = var_33_cvector == var_119_int; // 0x582 Eq
	if(var_120_bool == 0) goto Label_1427; // 0x583 JumpB
	var_121_string = ""; // 0x584 PushV
	var_121_string = "Confusion"; // 0x585 MovS
	func_1317(var_34_cvector, var_121_string); // 0x586 NEW_2
	var_122_int = 528949; // 0x588 PushI
	SetMessage(var_122_int); // 0x589 TObjFunc
	ClearReplies(); // 0x58b TObjFunc
	var_123_int = 528950; // 0x58d PushI
	var_124_int = 30384; // 0x58e PushI
	var_125_int = 30383; // 0x58f PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x590 TObjFunc
	return 0; // 0x592 Return
	
Label_1427:
	var_126_int = 30384; // 0x593 PushI
	var_127_bool = var_33_cvector == var_126_int; // 0x594 Eq
	if(var_127_bool == 0) goto Label_1450; // 0x595 JumpB
	var_128_string = ""; // 0x596 PushV
	var_128_string = "Neutral"; // 0x597 MovS
	func_1317(var_34_cvector, var_128_string); // 0x598 NEW_2
	var_129_int = 528951; // 0x59a PushI
	SetMessage(var_129_int); // 0x59b TObjFunc
	ClearReplies(); // 0x59d TObjFunc
	var_130_int = 528952; // 0x59f PushI
	var_131_int = 30391; // 0x5a0 PushI
	var_132_int = 30385; // 0x5a1 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x5a2 TObjFunc
	var_133_int = 528954; // 0x5a4 PushI
	var_134_int = 30386; // 0x5a5 PushI
	var_135_int = 30387; // 0x5a6 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x5a7 TObjFunc
	return 0; // 0x5a9 Return
	
Label_1450:
	var_136_int = 30386; // 0x5aa PushI
	var_137_bool = var_33_cvector == var_136_int; // 0x5ab Eq
	if(var_137_bool == 0) goto Label_1473; // 0x5ac JumpB
	var_138_string = ""; // 0x5ad PushV
	var_138_string = "Surprise"; // 0x5ae MovS
	func_1317(var_34_cvector, var_138_string); // 0x5af NEW_2
	var_139_int = 528953; // 0x5b1 PushI
	SetMessage(var_139_int); // 0x5b2 TObjFunc
	ClearReplies(); // 0x5b4 TObjFunc
	var_140_int = 528955; // 0x5b6 PushI
	var_141_int = 30389; // 0x5b7 PushI
	var_142_int = 30388; // 0x5b8 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x5b9 TObjFunc
	var_143_int = 528957; // 0x5bb PushI
	var_144_int = 30389; // 0x5bc PushI
	var_145_int = 30390; // 0x5bd PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_146_int = 30389; // 0x5c1 PushI
	var_147_bool = var_33_cvector == var_146_int; // 0x5c2 Eq
	if(var_147_bool == 0) goto Label_1491; // 0x5c3 JumpB
	var_148_string = ""; // 0x5c4 PushV
	var_148_string = "Surprise"; // 0x5c5 MovS
	func_1317(var_34_cvector, var_148_string); // 0x5c6 NEW_2
	var_149_int = 528956; // 0x5c8 PushI
	SetMessage(var_149_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_150_int = 528960; // 0x5cd PushI
	var_151_int = 30379; // 0x5ce PushI
	var_152_int = 30394; // 0x5cf PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x5d0 TObjFunc
	return 0; // 0x5d2 Return
	
Label_1491:
	var_153_int = 30391; // 0x5d3 PushI
	var_154_bool = var_33_cvector == var_153_int; // 0x5d4 Eq
	if(var_154_bool == 0) goto Label_1509; // 0x5d5 JumpB
	var_155_string = ""; // 0x5d6 PushV
	var_155_string = "Neutral"; // 0x5d7 MovS
	func_1317(var_34_cvector, var_155_string); // 0x5d8 NEW_2
	var_156_int = 528958; // 0x5da PushI
	SetMessage(var_156_int); // 0x5db TObjFunc
	ClearReplies(); // 0x5dd TObjFunc
	var_157_int = 528959; // 0x5df PushI
	var_158_int = 30379; // 0x5e0 PushI
	var_159_int = 30392; // 0x5e1 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x5e2 TObjFunc
	return 0; // 0x5e4 Return
	
Label_1509:
	var_160_int = 30379; // 0x5e5 PushI
	var_161_bool = var_33_cvector == var_160_int; // 0x5e6 Eq
	if(var_161_bool == 0) goto Label_1527; // 0x5e7 JumpB
	var_162_string = ""; // 0x5e8 PushV
	var_162_string = "Neutral"; // 0x5e9 MovS
	func_1317(var_34_cvector, var_162_string); // 0x5ea NEW_2
	var_163_int = 528946; // 0x5ec PushI
	SetMessage(var_163_int); // 0x5ed TObjFunc
	ClearReplies(); // 0x5ef TObjFunc
	var_164_int = 528947; // 0x5f1 PushI
	var_165_int = -1; // 0x5f2 PushI
	var_166_int = 30380; // 0x5f3 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x5f4 TObjFunc
	return 0; // 0x5f6 Return
	
Label_1527:
	var_3_string = 1; // 0x5f7 TMovB
	var_167_bool = 0; // 0x5f8 PushV
	func_2579(var_167_bool); // 0x5f9 NEW_2
	if(var_167_bool == 0) goto Label_1535; // 0x5fb JumpB
	lshStopAnimation(); // 0x5fc Func
	goto Label_1537; // 0x5fe Jump
	
Label_1537:
	return 0; // 0x601 Return
	
Label_1535:
	StopAnimation(); // 0x5ff Func
	
Label_1539:
	return 0; // 0x603 Return
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0x6ab PushI
	if(var_35_int == 0) goto Label_1798; // 0x6ac JumpB
	func_2429(); // 0x6ae NEW_2
	var_37_int = 36906; // 0x6b0 PushI
	var_38_bool = var_33_cvector == var_37_int; // 0x6b1 Eq
	if(var_38_bool == 0) goto Label_1740; // 0x6b2 JumpB
	var_39_string = ""; // 0x6b3 PushV
	var_39_string = "Neutral"; // 0x6b4 MovS
	func_1684(var_34_cvector, var_39_string); // 0x6b5 NEW_2
	var_56_int = 535231; // 0x6b7 PushI
	SetMessage(var_56_int); // 0x6b8 TObjFunc
	ClearReplies(); // 0x6ba TObjFunc
	var_57_int = 535232; // 0x6bc PushI
	var_58_int = 36953; // 0x6bd PushI
	var_59_int = 36907; // 0x6be PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x6bf TObjFunc
	var_60_int = 535233; // 0x6c1 PushI
	var_61_int = -1; // 0x6c2 PushI
	var_62_int = 36908; // 0x6c3 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x6c4 TObjFunc
	var_63_int = 535280; // 0x6c6 PushI
	var_64_int = -1; // 0x6c7 PushI
	var_65_int = 36956; // 0x6c8 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x6c9 TObjFunc
	return 0; // 0x6cb Return
	
Label_1740:
	var_66_int = 36953; // 0x6cc PushI
	var_67_bool = var_33_cvector == var_66_int; // 0x6cd Eq
	if(var_67_bool == 0) goto Label_1763; // 0x6ce JumpB
	var_68_string = ""; // 0x6cf PushV
	var_68_string = "Neutral"; // 0x6d0 MovS
	func_1684(var_34_cvector, var_68_string); // 0x6d1 NEW_2
	var_69_int = 535277; // 0x6d3 PushI
	SetMessage(var_69_int); // 0x6d4 TObjFunc
	ClearReplies(); // 0x6d6 TObjFunc
	var_70_int = 535278; // 0x6d8 PushI
	var_71_int = 36957; // 0x6d9 PushI
	var_72_int = 36954; // 0x6da PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x6db TObjFunc
	var_73_int = 535279; // 0x6dd PushI
	var_74_int = 36957; // 0x6de PushI
	var_75_int = 36955; // 0x6df PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x6e0 TObjFunc
	return 0; // 0x6e2 Return
	
Label_1763:
	var_76_int = 36957; // 0x6e3 PushI
	var_77_bool = var_33_cvector == var_76_int; // 0x6e4 Eq
	if(var_77_bool == 0) goto Label_1786; // 0x6e5 JumpB
	var_78_string = ""; // 0x6e6 PushV
	var_78_string = "Neutral"; // 0x6e7 MovS
	func_1684(var_34_cvector, var_78_string); // 0x6e8 NEW_2
	var_79_int = 535281; // 0x6ea PushI
	SetMessage(var_79_int); // 0x6eb TObjFunc
	ClearReplies(); // 0x6ed TObjFunc
	var_80_int = 535282; // 0x6ef PushI
	var_81_int = -1; // 0x6f0 PushI
	var_82_int = 36958; // 0x6f1 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x6f2 TObjFunc
	var_83_int = 535283; // 0x6f4 PushI
	var_84_int = -1; // 0x6f5 PushI
	var_85_int = 36959; // 0x6f6 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x6f7 TObjFunc
	return 0; // 0x6f9 Return
	
Label_1786:
	var_3_string = 1; // 0x6fa TMovB
	var_86_bool = 0; // 0x6fb PushV
	func_2579(var_86_bool); // 0x6fc NEW_2
	if(var_86_bool == 0) goto Label_1794; // 0x6fe JumpB
	lshStopAnimation(); // 0x6ff Func
	goto Label_1796; // 0x701 Jump
	
Label_1796:
	return 0; // 0x704 Return
	
Label_1794:
	StopAnimation(); // 0x702 Func
	
Label_1798:
	return 0; // 0x706 Return
}


task_12_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_bool, var_33_cvector, var_34_cvector)
{
	var_35_int = 1; // 0x7a9 PushI
	if(var_35_int == 0) goto Label_2001; // 0x7aa JumpB
	func_2429(); // 0x7ac NEW_2
	var_37_int = 42554; // 0x7ae PushI
	var_38_bool = var_33_cvector == var_37_int; // 0x7af Eq
	if(var_38_bool == 0) goto Label_1989; // 0x7b0 JumpB
	var_39_string = ""; // 0x7b1 PushV
	var_39_string = "Neutral"; // 0x7b2 MovS
	func_1938(var_34_cvector, var_39_string); // 0x7b3 NEW_2
	var_56_int = 540545; // 0x7b5 PushI
	SetMessage(var_56_int); // 0x7b6 TObjFunc
	ClearReplies(); // 0x7b8 TObjFunc
	var_57_int = 540546; // 0x7ba PushI
	var_58_int = -1; // 0x7bb PushI
	var_59_int = 42555; // 0x7bc PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x7bd TObjFunc
	var_60_int = 540798; // 0x7bf PushI
	var_61_int = -1; // 0x7c0 PushI
	var_62_int = 42847; // 0x7c1 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x7c2 TObjFunc
	return 0; // 0x7c4 Return
	
Label_1989:
	var_3_string = 1; // 0x7c5 TMovB
	var_63_bool = 0; // 0x7c6 PushV
	func_2579(var_63_bool); // 0x7c7 NEW_2
	if(var_63_bool == 0) goto Label_1997; // 0x7c9 JumpB
	lshStopAnimation(); // 0x7ca Func
	goto Label_1999; // 0x7cc Jump
	
Label_1999:
	return 0; // 0x7cf Return
	
Label_1997:
	StopAnimation(); // 0x7cd Func
	
Label_2001:
	return 0; // 0x7d1 Return
}


task_13_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector, var_33_string)
{
	var_34_string = "icot_viktor_NPC_Trigger"; // 0x7da PushS
	var_35_bool = var_33_string == var_34_string; // 0x7db Eq
	if(var_35_bool == 0) goto Label_2016; // 0x7dc JumpB
	func_2056(var_33_string); // 0x7de NEW_2
	
Label_2016:
	return 0; // 0x7e0 Return
}


task_13_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	TaskCall(0); // 0x813 TaskCall
	func_0(); // 0x814 NEW_2
	TaskReturn(); // 0x815 TaskReturn
	func_2045(var_30_bool, var_31_cvector, var_32_cvector); // 0x818 NEW_2
	return 0; // 0x81a Return
}


task_13_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x81b PushV
	var_36_object = var_0_object; // 0x81c PushT
	if(var_36_object == 0) goto Label_2092; // 0x81d JumpB
	IsOverrideActive(var_35_bool); // 0x81e Func
	var_37_bool = var_35_bool == 0; // 0x820 Not
	if(var_37_bool == 0) goto Label_2092; // 0x821 JumpB
	EventDisable(0); // 0x822 EventDisable
	var_38_bool = 0; var_39_object = Obj(); // 0x823 PushV
	var_39_object = var_33_object; // 0x824 Mov
	func_2144(var_39_object); // 0x825 NEW_2
	EventEnable(0); // 0x827 EventEnable
	var_52_object = Obj(); // 0x828 PushV
	var_52_object = var_33_object; // 0x829 Mov
	func_2773(var_52_object); // 0x82a NEW_2
	
Label_2092:
	return 2; // 0x82c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	var_33_bool = GlobalVars[1]; // 0x7d2 PushGE
	var_33_bool = 1; // 0x7d3 MovB
	GlobalVars[1] = var_33_bool; // 0x7d4 PopGE
	func_2017(var_30_bool, var_31_cvector, var_32_cvector); // 0x7d6 NEW_2
	return 0; // 0x7d8 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_38_bool = 0; // 0x2 PushV
	func_2153(var_38_bool); // 0x3 NEW_2
	var_39_bool = var_38_bool == 0; // 0x5 Not
	if(var_39_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1540(var_0_object, var_508_int, var_509_object)
{
	var_511_object = Obj(); var_512_bool = 0; var_513_int = 0; var_514_bool = 0; var_515_object = Obj(); var_516_bool = 0; var_517_int = 0; var_518_bool = 0; // 0x604 PushV
	var_0_object = var_509_object; // 0x605 TMov
	var_519_bool = 0; var_520_object = Obj(); var_521_float = 0; // 0x606 PushV
	var_520_object = var_509_object; // 0x607 Mov
	var_521_float = 70.0; // 0x608 MovF
	func_2158(var_520_object, var_521_float); // 0x609 NEW_2
	var_522_bool = var_519_bool == 0; // 0x60b Not
	if(var_522_bool == 0) goto Label_1551; // 0x60c JumpB
	var_508_int = -2; // 0x60d MovI
	return 8; // 0x60e Return
	
Label_1551:
	CreateDialog(var_515_object); // 0x60f Func
	var_523_int = 0; // 0x611 PushV
	func_2573(var_523_int); // 0x612 NEW_2
	SetNPCName(var_523_int); // 0x614 ObjFunc
	var_524_int = 0; // 0x616 PushV
	func_2571(var_524_int); // 0x617 NEW_2
	SetNPCDescription(var_524_int); // 0x619 ObjFunc
	var_525_string = ""; // 0x61b PushV
	func_2575(var_525_string); // 0x61c NEW_2
	SetPhoto(var_525_string); // 0x61e ObjFunc
	var_526_string = ""; // 0x620 PushV
	func_2577(var_526_string); // 0x621 NEW_2
	SetPhoto2(var_526_string); // 0x623 ObjFunc
	var_527_int = 0; // 0x625 PushV
	func_2756(var_527_int); // 0x626 NEW_2
	SetPlayerName(var_527_int); // 0x628 ObjFunc
	var_517_int = -1; // 0x62a MovI
	IsOverrideActive(var_516_bool); // 0x62b Func
	var_528_bool = var_516_bool; // 0x62d Push
	if(var_528_bool == 0) goto Label_1585; // 0x62e JumpB
	var_508_int = -2; // 0x62f MovI
	return 8; // 0x630 Return
	
Label_1585:
	DoDialog(var_515_object); // 0x631 Func
	var_529_bool = 0; var_530_object = Obj(); // 0x633 PushV
	var_531_object = Obj(); // 0x634 PushV
	func_2436(var_531_object); // 0x635 NEW_2
	var_530_object = var_531_object; // 0x636 Mov
	func_2245(var_529_bool, var_530_object); // 0x638 NEW_2
	var_532_object = Obj(); var_533_object = Obj(); // 0x63a PushV
	var_532_object = var_509_object; // 0x63b Mov
	var_533_object = var_515_object; // 0x63c Mov
	TaskCall(10); // 0x63d TaskCall
	func_1621(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object); // 0x63e NEW_2
	TaskReturn(); // 0x63f TaskReturn
	IsDialogEnd(var_518_bool); // 0x641 ObjFunc
	
Label_1603:
	var_565_bool = var_518_bool == 0; // 0x643 Not
	if(var_565_bool == 0) goto Label_1610; // 0x644 JumpB
	sync(); // 0x645 Func
	IsDialogEnd(var_518_bool); // 0x647 ObjFunc
	goto Label_1603; // 0x649 Jump
	
Label_1610:
	var_566_object = Obj(); // 0x64a PushV
	var_566_object = var_509_object; // 0x64b Mov
	func_2227(); // 0x64c NEW_2
	StopDialog(var_515_object); // 0x64e Func
	GetReturnValue(var_517_int); // 0x650 ObjFunc
	var_508_int = var_517_int; // 0x652 Mov
	return 8; // 0x653 Return
}


func_2565(var_281_bool, var_282_int)
{
	var_283_int = 0; // 0xa06 PushV
	func_2556(var_283_int); // 0xa07 NEW_2
	var_281_bool = var_283_int == var_282_int; // 0xa09 Eq2
	return 0; // 0xa0a Return
}


func_1799(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; // 0x707 PushV
	var_0_object = var_568_object; // 0x708 TMov
	var_578_bool = 0; var_579_object = Obj(); var_580_float = 0; // 0x709 PushV
	var_579_object = var_568_object; // 0x70a Mov
	var_580_float = 70.0; // 0x70b MovF
	func_2158(var_579_object, var_580_float); // 0x70c NEW_2
	var_581_bool = var_578_bool == 0; // 0x70e Not
	if(var_581_bool == 0) goto Label_1810; // 0x70f JumpB
	var_567_int = -2; // 0x710 MovI
	return 8; // 0x711 Return
	
Label_1810:
	CreateDialog(var_574_object); // 0x712 Func
	var_582_int = 0; // 0x714 PushV
	func_2573(var_582_int); // 0x715 NEW_2
	SetNPCName(var_582_int); // 0x717 ObjFunc
	var_583_int = 0; // 0x719 PushV
	func_2571(var_583_int); // 0x71a NEW_2
	SetNPCDescription(var_583_int); // 0x71c ObjFunc
	var_584_string = ""; // 0x71e PushV
	func_2575(var_584_string); // 0x71f NEW_2
	SetPhoto(var_584_string); // 0x721 ObjFunc
	var_585_string = ""; // 0x723 PushV
	func_2577(var_585_string); // 0x724 NEW_2
	SetPhoto2(var_585_string); // 0x726 ObjFunc
	var_586_int = 0; // 0x728 PushV
	func_2756(var_586_int); // 0x729 NEW_2
	SetPlayerName(var_586_int); // 0x72b ObjFunc
	var_576_int = -1; // 0x72d MovI
	IsOverrideActive(var_575_bool); // 0x72e Func
	var_587_bool = var_575_bool; // 0x730 Push
	if(var_587_bool == 0) goto Label_1844; // 0x731 JumpB
	var_567_int = -2; // 0x732 MovI
	return 8; // 0x733 Return
	
Label_1844:
	DoDialog(var_574_object); // 0x734 Func
	var_588_bool = 0; var_589_object = Obj(); // 0x736 PushV
	var_590_object = Obj(); // 0x737 PushV
	func_2436(var_590_object); // 0x738 NEW_2
	var_589_object = var_590_object; // 0x739 Mov
	func_2245(var_588_bool, var_589_object); // 0x73b NEW_2
	var_591_object = Obj(); var_592_object = Obj(); // 0x73d PushV
	var_591_object = var_568_object; // 0x73e Mov
	var_592_object = var_574_object; // 0x73f Mov
	TaskCall(12); // 0x740 TaskCall
	func_1880(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object); // 0x741 NEW_2
	TaskReturn(); // 0x742 TaskReturn
	IsDialogEnd(var_577_bool); // 0x744 ObjFunc
	
Label_1862:
	var_621_bool = var_577_bool == 0; // 0x746 Not
	if(var_621_bool == 0) goto Label_1869; // 0x747 JumpB
	sync(); // 0x748 Func
	IsDialogEnd(var_577_bool); // 0x74a ObjFunc
	goto Label_1862; // 0x74c Jump
	
Label_1869:
	var_622_object = Obj(); // 0x74d PushV
	var_622_object = var_568_object; // 0x74e Mov
	func_2227(); // 0x74f NEW_2
	StopDialog(var_574_object); // 0x751 Func
	GetReturnValue(var_576_int); // 0x753 ObjFunc
	var_567_int = var_576_int; // 0x755 Mov
	return 8; // 0x756 Return
}


func_2056(var_0_object)
{
	var_36_bool = var_0_object == 0; // 0x808 Not
	if(var_36_bool == 0) goto Label_2065; // 0x809 JumpB
	var_0_object = 1; // 0x80a TMovB
	var_37_string = "all"; // 0x80b PushS
	var_38_string = "stand"; // 0x80c PushS
	PlayAnimation(var_37_string, var_38_string); // 0x80d Func
	WaitForAnimEnd(); // 0x80f Func
	
Label_2065:
	return 0; // 0x811 Return
}


func_2571(var_115_int)
{
	var_115_int = 515554; // 0xa0b MovI
	return 0; // 0xa0c Return
}


func_2573(var_114_int)
{
	var_114_int = 502879; // 0xa0d MovI
	return 0; // 0xa0e Return
}


func_13(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0xd PushV
	var_0_object = var_285_object; // 0xe TMov
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; // 0xf PushV
	var_296_object = var_285_object; // 0x10 Mov
	var_297_float = 70.0; // 0x11 MovF
	func_2158(var_296_object, var_297_float); // 0x12 NEW_2
	var_298_bool = var_295_bool == 0; // 0x14 Not
	if(var_298_bool == 0) goto Label_24; // 0x15 JumpB
	var_284_int = -2; // 0x16 MovI
	return 8; // 0x17 Return
	
Label_24:
	CreateDialog(var_291_object); // 0x18 Func
	var_299_int = 0; // 0x1a PushV
	func_2573(var_299_int); // 0x1b NEW_2
	SetNPCName(var_299_int); // 0x1d ObjFunc
	var_300_int = 0; // 0x1f PushV
	func_2571(var_300_int); // 0x20 NEW_2
	SetNPCDescription(var_300_int); // 0x22 ObjFunc
	var_301_string = ""; // 0x24 PushV
	func_2575(var_301_string); // 0x25 NEW_2
	SetPhoto(var_301_string); // 0x27 ObjFunc
	var_302_string = ""; // 0x29 PushV
	func_2577(var_302_string); // 0x2a NEW_2
	SetPhoto2(var_302_string); // 0x2c ObjFunc
	var_303_int = 0; // 0x2e PushV
	func_2756(var_303_int); // 0x2f NEW_2
	SetPlayerName(var_303_int); // 0x31 ObjFunc
	var_293_int = -1; // 0x33 MovI
	IsOverrideActive(var_292_bool); // 0x34 Func
	var_304_bool = var_292_bool; // 0x36 Push
	if(var_304_bool == 0) goto Label_58; // 0x37 JumpB
	var_284_int = -2; // 0x38 MovI
	return 8; // 0x39 Return
	
Label_58:
	DoDialog(var_291_object); // 0x3a Func
	var_305_bool = 0; var_306_object = Obj(); // 0x3c PushV
	var_307_object = Obj(); // 0x3d PushV
	func_2436(var_307_object); // 0x3e NEW_2
	var_306_object = var_307_object; // 0x3f Mov
	func_2245(var_305_bool, var_306_object); // 0x41 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x43 PushV
	var_308_object = var_285_object; // 0x44 Mov
	var_309_object = var_291_object; // 0x45 Mov
	TaskCall(2); // 0x46 TaskCall
	func_94(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	IsDialogEnd(var_294_bool); // 0x4a ObjFunc
	
Label_76:
	var_356_bool = var_294_bool == 0; // 0x4c Not
	if(var_356_bool == 0) goto Label_83; // 0x4d JumpB
	sync(); // 0x4e Func
	IsDialogEnd(var_294_bool); // 0x50 ObjFunc
	goto Label_76; // 0x52 Jump
	
Label_83:
	var_357_object = Obj(); // 0x53 PushV
	var_357_object = var_285_object; // 0x54 Mov
	func_2227(); // 0x55 NEW_2
	StopDialog(var_291_object); // 0x57 Func
	GetReturnValue(var_293_int); // 0x59 ObjFunc
	var_284_int = var_293_int; // 0x5b Mov
	return 8; // 0x5c Return
}


func_2575(var_116_string)
{
	var_116_string = "ui/NPC_Viktor.png"; // 0xa0f MovS
	return 0; // 0xa10 Return
}


func_2577(var_117_string)
{
	var_117_string = "ui/NPC_Viktor_b.png"; // 0xa11 MovS
	return 0; // 0xa12 Return
}


func_2579(var_109_bool)
{
	var_109_bool = 1; // 0xa13 MovB
	return 0; // 0xa14 Return
}


func_2581(var_72_object)
{
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0; // 0xa16 PushV
	var_75_object = var_72_object; // 0xa17 Mov
	var_76_float = 0.05; // 0xa18 MovF
	func_2499(var_74_bool, var_75_object, var_76_float); // 0xa19 NEW_2
	return 0; // 0xa1b Return
}


func_2588()
{
	var_41_string = "ook3Viktor1"; // 0xa1d PushS
	var_42_int = 1; // 0xa1e PushI
	SetVariable(var_41_string, var_42_int); // 0xa1f Func
	return 0; // 0xa21 Return
}


func_543(var_0_object, var_1_object, var_2_object, var_3_string, var_222_object, var_223_object)
{
	var_0_object = var_223_object; // 0x220 TMov
	var_1_object = var_222_object; // 0x221 TMov
	var_3_string = 0; // 0x222 TMovB
	var_228_int = 1; // 0x223 PushI
	if(var_228_int == 0) goto Label_571; // 0x224 JumpB
	var_229_string = ""; // 0x225 PushV
	var_229_string = "Neutral"; // 0x226 MovS
	func_601(var_223_object, var_229_string); // 0x227 NEW_2
	var_246_int = 525531; // 0x229 PushI
	SetMessage(var_246_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_247_int = 525532; // 0x22e PushI
	var_248_int = 44536; // 0x22f PushI
	var_249_int = 26888; // 0x230 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x231 TObjFunc
	var_250_int = 542207; // 0x233 PushI
	var_251_int = 44538; // 0x234 PushI
	var_252_int = 44535; // 0x235 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x236 TObjFunc
	goto Label_571; // 0x238 Jump
	
Label_571:
	var_253_bool = 0; // 0x23b PushV
	func_2579(var_253_bool); // 0x23c NEW_2
	if(var_253_bool == 0) goto Label_586; // 0x23e JumpB
	
Label_575:
	lshWaitForAnimEnd(); // 0x23f Func
	var_254_string = var_3_string; // 0x241 PushT
	if(var_254_string == 0) goto Label_580; // 0x242 JumpB
	goto Label_585; // 0x243 Jump
	
Label_585:
	goto Label_600; // 0x249 Jump
	
Label_600:
	return 0; // 0x258 Return
	
Label_580:
	var_255_string = ""; // 0x244 PushV
	var_255_string = var_2_object; // 0x245 MovT
	func_2383(var_255_string); // 0x246 NEW_2
	goto Label_575; // 0x248 Jump
	
Label_586:
	var_266_string = "all"; // 0x24a PushS
	var_267_string = "idle"; // 0x24b PushS
	PlayAnimation(var_266_string, var_267_string); // 0x24c Func
	
Label_590:
	WaitForAnimEnd(); // 0x24e Func
	var_268_string = var_3_string; // 0x250 PushT
	if(var_268_string == 0) goto Label_595; // 0x251 JumpB
	goto Label_600; // 0x252 Jump
	
Label_595:
	var_269_string = "all"; // 0x253 PushS
	var_270_string = "idle"; // 0x254 PushS
	PlayAnimation(var_269_string, var_270_string); // 0x255 Func
	goto Label_590; // 0x257 Jump
}


func_2594(var_49_object)
{
	var_51_string = "money2000 is given"; // 0xa23 PushS
	Trace(var_51_string); // 0xa24 Func
	var_52_object = Obj(); var_53_int = 0; // 0xa26 PushV
	var_52_object = var_49_object; // 0xa27 Mov
	var_53_int = 2000; // 0xa28 MovI
	func_2480(var_52_object, var_53_int); // 0xa29 NEW_2
	return 0; // 0xa2b Return
}


func_2340(var_169_bool)
{
	var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = ""; var_176_string = ""; var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_string = ""; // 0x924 PushV
	var_181_string = "d"; // 0x925 PushS
	var_182_int = 0; // 0x926 PushV
	func_2556(var_182_int); // 0x927 NEW_2
	var_188_int = var_181_string + var_182_int; // 0x929 Add
	var_189_string = "m"; // 0x92a PushS
	var_176_string = var_188_int + var_189_string; // 0x92b Add2
	var_177_int = 0; // 0x92c MovI
	
Label_2349:
	var_190_int = 1; // 0x92d PushI
	if(var_190_int == 0) goto Label_2362; // 0x92e JumpB
	var_191_int = 1; // 0x92f PushI
	var_192_int = var_177_int + var_191_int; // 0x930 Add
	var_193_int = var_176_string + var_192_int; // 0x931 Add
	HasProperty(var_193_int, var_178_bool); // 0x932 ObjFunc
	var_194_bool = var_178_bool == 0; // 0x934 Not
	if(var_194_bool == 0) goto Label_2359; // 0x935 JumpB
	goto Label_2362; // 0x936 Jump
	
Label_2362:
	var_195_bool = var_177_int == 0; // 0x93a Not
	if(var_195_bool == 0) goto Label_2366; // 0x93b JumpB
	var_169_bool = 0; // 0x93c MovB
	return 10; // 0x93d Return
	
Label_2366:
	var_179_int = 0; // 0x93e MovI
	var_196_int = 1; // 0x93f PushI
	var_197_bool = var_177_int > var_196_int; // 0x940 GT
	if(var_197_bool == 0) goto Label_2372; // 0x941 JumpB
	irand(var_179_int, var_177_int); // 0x942 Func
	
Label_2372:
	var_198_int = 1; // 0x944 PushI
	var_199_int = var_179_int + var_198_int; // 0x945 Add
	var_200_int = var_176_string + var_199_int; // 0x946 Add
	GetProperty(var_200_int, var_180_string); // 0x947 ObjFunc
	var_201_bool = 0; var_202_string = ""; // 0x949 PushV
	var_202_string = var_180_string; // 0x94a Mov
	func_2414(var_201_bool, var_202_string); // 0x94b NEW_2
	var_169_bool = var_201_bool; // 0x94c Mov
	return 10; // 0x94e Return
	
Label_2359:
	var_203_int = 1; // 0x937 PushI
	var_177_int = var_177_int + var_203_int; // 0x938 Add2
	goto Label_2349; // 0x939 Jump
}


func_1317(var_2_object, var_391_string)
{
	var_392_bool = 0; // 0x526 PushV
	func_2579(var_392_bool); // 0x527 NEW_2
	var_393_bool = var_392_bool == 0; // 0x529 Not
	if(var_393_bool == 0) goto Label_1324; // 0x52a JumpB
	return 0; // 0x52b Return
	
Label_1324:
	var_394_bool = var_391_string == var_2_object; // 0x52c Eq
	if(var_394_bool == 0) goto Label_1327; // 0x52d JumpB
	return 0; // 0x52e Return
	
Label_1327:
	var_395_string = ""; var_396_bool = 0; // 0x52f PushV
	var_395_string = var_391_string; // 0x530 Mov
	var_397_string = ""; // 0x531 PushS
	var_398_bool = var_391_string == var_397_string; // 0x532 Eq
	if(var_398_bool == 0) goto Label_1334; // 0x533 JumpB
	var_396_bool = 0; // 0x534 MovB
	goto Label_1335; // 0x535 Jump
	
Label_1335:
	func_2399(var_395_string, var_396_bool); // 0x537 NEW_2
	var_2_object = var_391_string; // 0x539 TMov
	return 0; // 0x53a Return
	
Label_1334:
	var_396_bool = 1; // 0x536 MovB
}


func_2604()
{
	var_41_string = "ook10Viktor1"; // 0xa2d PushS
	var_42_int = 1; // 0xa2e PushI
	SetVariable(var_41_string, var_42_int); // 0xa2f Func
	return 0; // 0xa31 Return
}


func_2093(var_93_bool, var_94_object, var_95_string)
{
	var_96_bool = 0; var_97_bool = 0; // 0x82d PushV
	var_98_string = "HasProperty"; // 0x82e PushS
	var_99_int = 2; // 0x82f PushI
	var_100_bool = IsFuncExist(var_94_object, var_98_string, var_99_int); // 0x830 FuncExist
	var_101_bool = var_100_bool == 0; // 0x831 Not
	if(var_101_bool == 0) goto Label_2101; // 0x832 JumpB
	var_93_bool = 0; // 0x833 MovB
	return 2; // 0x834 Return
	
Label_2101:
	HasProperty(var_95_string, var_97_bool); // 0x835 ObjFunc
	var_93_bool = var_97_bool; // 0x837 Mov
	return 2; // 0x838 Return
}


func_2610()
{
	var_41_string = "k9q01"; // 0xa33 PushS
	var_42_int = 5; // 0xa34 PushI
	SetVariable(var_41_string, var_42_int); // 0xa35 Func
	func_2702(); // 0xa38 NEW_2
	var_66_bool = 0; var_67_string = ""; var_68_string = ""; // 0xa3a PushV
	var_67_string = "quest_k9_01"; // 0xa3b MovS
	var_68_string = "init_mnogogrannik"; // 0xa3c MovS
	func_2544(var_66_bool, var_67_string, var_68_string); // 0xa3d NEW_2
	return 0; // 0xa3f Return
}


func_2105(var_85_bool, var_86_object, var_87_string, var_88_float, var_89_float, var_90_float)
{
	var_91_float = 0; var_92_float = 0; // 0x839 PushV
	var_93_bool = 0; var_94_object = Obj(); var_95_string = ""; // 0x83a PushV
	var_94_object = var_86_object; // 0x83b Mov
	var_95_string = var_87_string; // 0x83c Mov
	func_2093(var_93_bool, var_94_object, var_95_string); // 0x83d NEW_2
	var_102_bool = var_93_bool == 0; // 0x83f Not
	if(var_102_bool == 0) goto Label_2115; // 0x840 JumpB
	var_85_bool = 0; // 0x841 MovB
	return 2; // 0x842 Return
	
Label_2115:
	GetProperty(var_87_string, var_92_float); // 0x843 ObjFunc
	var_103_float = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0; // 0x845 PushV
	var_104_float = var_92_float + var_88_float; // 0x846 Add2
	var_105_float = var_89_float; // 0x847 Mov
	var_106_float = var_90_float; // 0x848 Mov
	func_2452(var_103_float, var_104_float, var_105_float, var_106_float); // 0x849 NEW_2
	SetProperty(var_87_string, var_103_float); // 0x84b ObjFunc
	var_85_bool = 1; // 0x84d MovB
	return 2; // 0x84e Return
}


func_2624()
{
	var_47_string = "playsound"; // 0xa41 PushS
	var_48_string = "givemoney"; // 0xa42 PushS
	TriggerWorld(var_47_string, var_48_string); // 0xa43 Func
	return 0; // 0xa45 Return
}


func_2630(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0xa47 PushV
	var_328_string = "k3q03"; // 0xa48 MovS
	func_2463(var_327_int, var_328_string); // 0xa49 NEW_2
	var_331_int = 1000; // 0xa4b PushI
	var_332_bool = var_327_int == var_331_int; // 0xa4c Eq
	if(var_332_bool == 0) goto Label_2640; // 0xa4d JumpB
	var_325_bool = 1; // 0xa4e MovB
	return 0; // 0xa4f Return
	
Label_2640:
	var_325_bool = 0; // 0xa50 MovB
	return 0; // 0xa51 Return
}


func_838(var_0_object, var_1_object, var_2_object, var_3_string, var_451_object, var_452_object)
{
	var_0_object = var_452_object; // 0x347 TMov
	var_1_object = var_451_object; // 0x348 TMov
	var_3_string = 0; // 0x349 TMovB
	var_457_int = 1; // 0x34a PushI
	if(var_457_int == 0) goto Label_898; // 0x34b JumpB
	var_458_string = ""; // 0x34c PushV
	var_458_string = "Fear"; // 0x34d MovS
	func_928(var_452_object, var_458_string); // 0x34e NEW_2
	var_466_int = 526939; // 0x350 PushI
	SetMessage(var_466_int); // 0x351 TObjFunc
	ClearReplies(); // 0x353 TObjFunc
	var_467_bool = 0; // 0x355 PushV
	var_467_bool = 1; // 0x356 MovB
	var_468_bool = 0; // 0x357 PushV
	var_468_bool = 0; // 0x358 MovB
	var_469_bool = 0; var_470_object = Obj(); // 0x359 PushV
	var_470_object = var_1_object; // 0x35a MovT
	func_2654(var_470_object); // 0x35b NEW_2
	if(var_469_bool == 0) goto Label_868; // 0x35d JumpB
	var_475_bool = 0; var_476_object = Obj(); // 0x35e PushV
	var_476_object = var_1_object; // 0x35f MovT
	func_2666(var_476_object); // 0x360 NEW_2
	if(var_475_bool == 0) goto Label_868; // 0x362 JumpB
	var_468_bool = 1; // 0x363 MovB
	
Label_868:
	if(var_468_bool == 0) goto Label_884; // 0x364 JumpB
	var_481_bool = 0; // 0x365 PushV
	var_481_bool = 0; // 0x366 MovB
	var_482_bool = 0; var_483_object = Obj(); // 0x367 PushV
	var_483_object = var_1_object; // 0x368 MovT
	func_2678(var_483_object); // 0x369 NEW_2
	if(var_482_bool == 0) goto Label_882; // 0x36b JumpB
	var_488_bool = 0; var_489_object = Obj(); // 0x36c PushV
	var_489_object = var_1_object; // 0x36d MovT
	func_2666(var_489_object); // 0x36e NEW_2
	if(var_488_bool == 0) goto Label_882; // 0x370 JumpB
	var_481_bool = 1; // 0x371 MovB
	
Label_882:
	if(var_481_bool == 0) goto Label_884; // 0x372 JumpB
	var_467_bool = 0; // 0x373 MovB
	
Label_884:
	if(var_467_bool == 0) goto Label_890; // 0x374 JumpB
	var_490_int = 526940; // 0x375 PushI
	var_491_int = 28233; // 0x376 PushI
	var_492_int = 28232; // 0x377 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x378 TObjFunc
	
Label_890:
	var_493_int = 526945; // 0x37a PushI
	var_494_int = -1; // 0x37b PushI
	var_495_int = 28237; // 0x37c PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x37d TObjFunc
	goto Label_898; // 0x37f Jump
	
Label_898:
	var_496_bool = 0; // 0x382 PushV
	func_2579(var_496_bool); // 0x383 NEW_2
	if(var_496_bool == 0) goto Label_913; // 0x385 JumpB
	
Label_902:
	lshWaitForAnimEnd(); // 0x386 Func
	var_497_string = var_3_string; // 0x388 PushT
	if(var_497_string == 0) goto Label_907; // 0x389 JumpB
	goto Label_912; // 0x38a Jump
	
Label_912:
	goto Label_927; // 0x390 Jump
	
Label_927:
	return 0; // 0x39f Return
	
Label_907:
	var_498_string = ""; // 0x38b PushV
	var_498_string = var_2_object; // 0x38c MovT
	func_2383(var_498_string); // 0x38d NEW_2
	goto Label_902; // 0x38f Jump
	
Label_913:
	var_499_string = "all"; // 0x391 PushS
	var_500_string = "idle"; // 0x392 PushS
	PlayAnimation(var_499_string, var_500_string); // 0x393 Func
	
Label_917:
	WaitForAnimEnd(); // 0x395 Func
	var_501_string = var_3_string; // 0x397 PushT
	if(var_501_string == 0) goto Label_922; // 0x398 JumpB
	goto Label_927; // 0x399 Jump
	
Label_922:
	var_502_string = "all"; // 0x39a PushS
	var_503_string = "idle"; // 0x39b PushS
	PlayAnimation(var_502_string, var_503_string); // 0x39c Func
	goto Label_917; // 0x39e Jump
}


func_2383(var_43_string)
{
	var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_bool = 0; var_48_float = 0; var_49_float = 0; // 0x94f PushV
	lshHasAnimation(var_47_bool, var_43_string); // 0x950 Func
	var_50_bool = var_47_bool; // 0x952 Push
	if(var_50_bool == 0) goto Label_2394; // 0x953 JumpB
	lshGetAnimTimes(var_43_string, var_48_float, var_49_float); // 0x954 Func
	var_51_bool = 0; // 0x956 PushB
	lshPlayAnimation(var_48_float, var_49_float, var_51_bool); // 0x957 Func
	goto Label_2398; // 0x959 Jump
	
Label_2398:
	return 6; // 0x95e Return
	
Label_2394:
	var_52_string = "Can't find lsh animation : "; // 0x95a PushS
	var_53_int = var_52_string + var_43_string; // 0x95b Add
	Trace(var_53_int); // 0x95c Func
}


func_2127(var_57_string, var_58_int)
{
	var_59_int = 0; var_60_int = 0; // 0x84f PushV
	GetProperty(var_57_string, var_60_int); // 0x850 ObjFunc
	var_61_int = var_60_int + var_58_int; // 0x852 Add
	SetProperty(var_57_string, var_61_int); // 0x853 ObjFunc
	return 2; // 0x855 Return
}


func_2642(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0xa53 PushV
	var_336_string = "ook3Viktor1"; // 0xa54 MovS
	func_2463(var_335_int, var_336_string); // 0xa55 NEW_2
	var_337_int = 0; // 0xa57 PushI
	var_338_bool = var_335_int == var_337_int; // 0xa58 Eq
	if(var_338_bool == 0) goto Label_2652; // 0xa59 JumpB
	var_333_bool = 1; // 0xa5a MovB
	return 0; // 0xa5b Return
	
Label_2652:
	var_333_bool = 0; // 0xa5c MovB
	return 0; // 0xa5d Return
}


func_1621(var_0_object, var_1_object, var_2_object, var_3_string, var_532_object, var_533_object)
{
	var_0_object = var_533_object; // 0x656 TMov
	var_1_object = var_532_object; // 0x657 TMov
	var_3_string = 0; // 0x658 TMovB
	var_538_int = 1; // 0x659 PushI
	if(var_538_int == 0) goto Label_1654; // 0x65a JumpB
	var_539_string = ""; // 0x65b PushV
	var_539_string = "Neutral"; // 0x65c MovS
	func_1684(var_533_object, var_539_string); // 0x65d NEW_2
	var_547_int = 535231; // 0x65f PushI
	SetMessage(var_547_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_548_int = 535232; // 0x664 PushI
	var_549_int = 36953; // 0x665 PushI
	var_550_int = 36907; // 0x666 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x667 TObjFunc
	var_551_int = 535233; // 0x669 PushI
	var_552_int = -1; // 0x66a PushI
	var_553_int = 36908; // 0x66b PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x66c TObjFunc
	var_554_int = 535280; // 0x66e PushI
	var_555_int = -1; // 0x66f PushI
	var_556_int = 36956; // 0x670 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x671 TObjFunc
	goto Label_1654; // 0x673 Jump
	
Label_1654:
	var_557_bool = 0; // 0x676 PushV
	func_2579(var_557_bool); // 0x677 NEW_2
	if(var_557_bool == 0) goto Label_1669; // 0x679 JumpB
	
Label_1658:
	lshWaitForAnimEnd(); // 0x67a Func
	var_558_string = var_3_string; // 0x67c PushT
	if(var_558_string == 0) goto Label_1663; // 0x67d JumpB
	goto Label_1668; // 0x67e Jump
	
Label_1668:
	goto Label_1683; // 0x684 Jump
	
Label_1683:
	return 0; // 0x693 Return
	
Label_1663:
	var_559_string = ""; // 0x67f PushV
	var_559_string = var_2_object; // 0x680 MovT
	func_2383(var_559_string); // 0x681 NEW_2
	goto Label_1658; // 0x683 Jump
	
Label_1669:
	var_560_string = "all"; // 0x685 PushS
	var_561_string = "idle"; // 0x686 PushS
	PlayAnimation(var_560_string, var_561_string); // 0x687 Func
	
Label_1673:
	WaitForAnimEnd(); // 0x689 Func
	var_562_string = var_3_string; // 0x68b PushT
	if(var_562_string == 0) goto Label_1678; // 0x68c JumpB
	goto Label_1683; // 0x68d Jump
	
Label_1678:
	var_563_string = "all"; // 0x68e PushS
	var_564_string = "idle"; // 0x68f PushS
	PlayAnimation(var_563_string, var_564_string); // 0x690 Func
	goto Label_1673; // 0x692 Jump
}


func_2134(var_42_bool, var_43_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; // 0x856 PushV
	GetPosition(var_47_cvector); // 0x857 Func
	var_48_cvector = var_43_cvector - var_47_cvector; // 0x859 Sub2
	var_50_float = GetByIndex(var_48_cvector, 0); // 0x85a PushE
	var_51_float = GetByIndex(var_48_cvector, 2); // 0x85b PushE
	Rotate(var_50_float, var_51_float, var_49_bool); // 0x85c Func
	var_42_bool = var_49_bool; // 0x85e Mov
	return 6; // 0x85f Return
}


func_1880(var_0_object, var_1_object, var_2_object, var_3_string, var_591_object, var_592_object)
{
	var_0_object = var_592_object; // 0x759 TMov
	var_1_object = var_591_object; // 0x75a TMov
	var_3_string = 0; // 0x75b TMovB
	var_597_int = 1; // 0x75c PushI
	if(var_597_int == 0) goto Label_1908; // 0x75d JumpB
	var_598_string = ""; // 0x75e PushV
	var_598_string = "Neutral"; // 0x75f MovS
	func_1938(var_592_object, var_598_string); // 0x760 NEW_2
	var_606_int = 540545; // 0x762 PushI
	SetMessage(var_606_int); // 0x763 TObjFunc
	ClearReplies(); // 0x765 TObjFunc
	var_607_int = 540546; // 0x767 PushI
	var_608_int = -1; // 0x768 PushI
	var_609_int = 42555; // 0x769 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x76a TObjFunc
	var_610_int = 540798; // 0x76c PushI
	var_611_int = -1; // 0x76d PushI
	var_612_int = 42847; // 0x76e PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x76f TObjFunc
	goto Label_1908; // 0x771 Jump
	
Label_1908:
	var_613_bool = 0; // 0x774 PushV
	func_2579(var_613_bool); // 0x775 NEW_2
	if(var_613_bool == 0) goto Label_1923; // 0x777 JumpB
	
Label_1912:
	lshWaitForAnimEnd(); // 0x778 Func
	var_614_string = var_3_string; // 0x77a PushT
	if(var_614_string == 0) goto Label_1917; // 0x77b JumpB
	goto Label_1922; // 0x77c Jump
	
Label_1922:
	goto Label_1937; // 0x782 Jump
	
Label_1937:
	return 0; // 0x791 Return
	
Label_1917:
	var_615_string = ""; // 0x77d PushV
	var_615_string = var_2_object; // 0x77e MovT
	func_2383(var_615_string); // 0x77f NEW_2
	goto Label_1912; // 0x781 Jump
	
Label_1923:
	var_616_string = "all"; // 0x783 PushS
	var_617_string = "idle"; // 0x784 PushS
	PlayAnimation(var_616_string, var_617_string); // 0x785 Func
	
Label_1927:
	WaitForAnimEnd(); // 0x787 Func
	var_618_string = var_3_string; // 0x789 PushT
	if(var_618_string == 0) goto Label_1932; // 0x78a JumpB
	goto Label_1937; // 0x78b Jump
	
Label_1932:
	var_619_string = "all"; // 0x78c PushS
	var_620_string = "idle"; // 0x78d PushS
	PlayAnimation(var_619_string, var_620_string); // 0x78e Func
	goto Label_1927; // 0x790 Jump
}


func_601(var_2_object, var_229_string)
{
	var_230_bool = 0; // 0x25a PushV
	func_2579(var_230_bool); // 0x25b NEW_2
	var_231_bool = var_230_bool == 0; // 0x25d Not
	if(var_231_bool == 0) goto Label_608; // 0x25e JumpB
	return 0; // 0x25f Return
	
Label_608:
	var_232_bool = var_229_string == var_2_object; // 0x260 Eq
	if(var_232_bool == 0) goto Label_611; // 0x261 JumpB
	return 0; // 0x262 Return
	
Label_611:
	var_233_string = ""; var_234_bool = 0; // 0x263 PushV
	var_233_string = var_229_string; // 0x264 Mov
	var_235_string = ""; // 0x265 PushS
	var_236_bool = var_229_string == var_235_string; // 0x266 Eq
	if(var_236_bool == 0) goto Label_618; // 0x267 JumpB
	var_234_bool = 0; // 0x268 MovB
	goto Label_619; // 0x269 Jump
	
Label_619:
	func_2399(var_233_string, var_234_bool); // 0x26b NEW_2
	var_2_object = var_229_string; // 0x26d TMov
	return 0; // 0x26e Return
	
Label_618:
	var_234_bool = 1; // 0x26a MovB
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x5f TMov
	var_1_object = var_308_object; // 0x60 TMov
	var_3_string = 0; // 0x61 TMovB
	var_314_int = 1; // 0x62 PushI
	if(var_314_int == 0) goto Label_141; // 0x63 JumpB
	var_315_string = ""; // 0x64 PushV
	var_315_string = "Confusion"; // 0x65 MovS
	func_171(var_309_object, var_315_string); // 0x66 NEW_2
	var_323_int = 525599; // 0x68 PushI
	SetMessage(var_323_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_324_bool = 0; // 0x6d PushV
	var_324_bool = 0; // 0x6e MovB
	var_325_bool = 0; var_326_object = Obj(); // 0x6f PushV
	var_326_object = var_1_object; // 0x70 MovT
	func_2630(var_326_object); // 0x71 NEW_2
	if(var_325_bool == 0) goto Label_122; // 0x73 JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x74 PushV
	var_334_object = var_1_object; // 0x75 MovT
	func_2642(var_334_object); // 0x76 NEW_2
	if(var_333_bool == 0) goto Label_122; // 0x78 JumpB
	var_324_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_324_bool == 0) goto Label_128; // 0x7a JumpB
	var_339_int = 525600; // 0x7b PushI
	var_340_int = 26948; // 0x7c PushI
	var_341_int = 26947; // 0x7d PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x7e TObjFunc
	
Label_128:
	var_342_int = 525605; // 0x80 PushI
	var_343_int = -1; // 0x81 PushI
	var_344_int = 26952; // 0x82 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x83 TObjFunc
	var_345_int = 542220; // 0x85 PushI
	var_346_int = -1; // 0x86 PushI
	var_347_int = 44551; // 0x87 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
	
Label_141:
	var_348_bool = 0; // 0x8d PushV
	func_2579(var_348_bool); // 0x8e NEW_2
	if(var_348_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_349_string = var_3_string; // 0x93 PushT
	if(var_349_string == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_350_string = ""; // 0x96 PushV
	var_350_string = var_2_object; // 0x97 MovT
	func_2383(var_350_string); // 0x98 NEW_2
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_351_string = "all"; // 0x9c PushS
	var_352_string = "idle"; // 0x9d PushS
	PlayAnimation(var_351_string, var_352_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_353_string = var_3_string; // 0xa2 PushT
	if(var_353_string == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_354_string = "all"; // 0xa5 PushS
	var_355_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_354_string, var_355_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
}


func_2399(var_233_string, var_234_bool)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x95f PushV
	lshHasAnimation(var_240_bool, var_233_string); // 0x960 Func
	var_243_bool = var_240_bool; // 0x962 Push
	if(var_243_bool == 0) goto Label_2409; // 0x963 JumpB
	lshGetAnimTimes(var_233_string, var_241_float, var_242_float); // 0x964 Func
	lshPlayAnimation(var_241_float, var_242_float, var_234_bool); // 0x966 Func
	goto Label_2413; // 0x968 Jump
	
Label_2413:
	return 6; // 0x96d Return
	
Label_2409:
	var_244_string = "Can't find lsh animation : "; // 0x969 PushS
	var_245_int = var_244_string + var_233_string; // 0x96a Add
	Trace(var_245_int); // 0x96b Func
}


func_2654(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0xa5f PushV
	var_472_string = "k10q01"; // 0xa60 MovS
	func_2463(var_471_int, var_472_string); // 0xa61 NEW_2
	var_473_int = 1; // 0xa63 PushI
	var_474_bool = var_471_int == var_473_int; // 0xa64 Eq
	if(var_474_bool == 0) goto Label_2664; // 0xa65 JumpB
	var_469_bool = 1; // 0xa66 MovB
	return 0; // 0xa67 Return
	
Label_2664:
	var_469_bool = 0; // 0xa68 MovB
	return 0; // 0xa69 Return
}


func_2144(var_38_bool)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x860 PushV
	GetPosition(var_41_cvector); // 0x861 ObjFunc
	var_42_bool = 0; var_43_cvector = CVector(0,0,0); // 0x863 PushV
	var_43_cvector = var_41_cvector; // 0x864 Mov
	func_2134(var_42_bool, var_43_cvector); // 0x865 NEW_2
	var_38_bool = var_42_bool; // 0x866 Mov
	return 2; // 0x868 Return
}


func_2153(var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0; // 0x869 PushV
	IsLoaded(var_36_bool); // 0x86a Func
	var_34_bool = var_36_bool; // 0x86c Mov
	return 2; // 0x86d Return
}


func_2666(var_475_bool)
{
	var_477_int = 0; var_478_string = ""; // 0xa6b PushV
	var_478_string = "ook10Viktor1"; // 0xa6c MovS
	func_2463(var_477_int, var_478_string); // 0xa6d NEW_2
	var_479_int = 0; // 0xa6f PushI
	var_480_bool = var_477_int == var_479_int; // 0xa70 Eq
	if(var_480_bool == 0) goto Label_2676; // 0xa71 JumpB
	var_475_bool = 1; // 0xa72 MovB
	return 0; // 0xa73 Return
	
Label_2676:
	var_475_bool = 0; // 0xa74 MovB
	return 0; // 0xa75 Return
}


func_2158(var_66_bool, var_68_float)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; // 0x86e PushV
	GetPosition(var_79_cvector); // 0x86f ObjFunc
	GetEyesHeight(var_78_float); // 0x871 ObjFunc
	var_87_float = GetByIndex(var_79_cvector, 1); // 0x873 PushE
	var_87_float = var_87_float + var_78_float; // 0x874 Add2
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0x875 PopE
	GetPosition(var_80_cvector); // 0x876 Func
	GetEyesHeight(var_78_float); // 0x878 Func
	var_88_float = GetByIndex(var_80_cvector, 1); // 0x87a PushE
	var_88_float = var_88_float + var_78_float; // 0x87b Add2
	SetByIndex(var_80_cvector, 1) = var_88_float; // 0x87c PopE
	var_81_cvector = var_79_cvector - var_80_cvector; // 0x87d Sub2
	var_89_float = GetByIndex(var_81_cvector, 1); // 0x87e PushE
	var_89_float = 0; // 0x87f MovI
	SetByIndex(var_81_cvector, 1) = var_89_float; // 0x880 PopE
	var_90_int = var_81_cvector | var_81_cvector; // 0x881 Or
	var_91_float = sqrt(var_90_int); // 0x882 Sqrt
	var_81_cvector = var_81_cvector / var_81_cvector; // 0x883 Div2
	var_82_cvector = -var_81_cvector; // 0x884 Neg2
	var_92_float = var_81_cvector * var_68_float; // 0x885 Mult
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); // 0x886 PushV
	var_95_cvector = CVector(0.0, 1.0, 0.0); // 0x887 PushVec
	var_94_cvector = var_82_cvector ^ var_95_cvector; // 0x888 Xor2
	func_2442(var_93_cvector, var_94_cvector); // 0x889 NEW_2
	var_101_int = 25; // 0x88b PushI
	var_102_float = var_93_cvector * var_101_int; // 0x88c Mult
	var_103_int = var_92_float + var_102_float; // 0x88d Add
	var_104_cvector = CVector(0.0, 10.0, 0.0); // 0x88e PushVec
	var_83_cvector = var_103_int - var_104_cvector; // 0x88f Sub2
	var_84_cvector = var_80_cvector + var_83_cvector; // 0x890 Add2
	IsOverrideActive(var_85_bool); // 0x891 Func
	var_105_bool = var_85_bool; // 0x893 Push
	if(var_105_bool == 0) goto Label_2199; // 0x894 JumpB
	var_66_bool = 0; // 0x895 MovB
	return 18; // 0x896 Return
	
Label_2199:
	StopWorld(); // 0x897 Func
	var_106_bool = 1; // 0x899 PushB
	CameraTransit(var_84_cvector, var_82_cvector, var_106_bool); // 0x89a Func
	var_107_float = GetByIndex(var_83_cvector, 0); // 0x89c PushE
	var_108_float = GetByIndex(var_83_cvector, 2); // 0x89d PushE
	Rotate(var_107_float, var_108_float); // 0x89e Func
	var_109_bool = 0; // 0x8a0 PushV
	func_2579(var_109_bool); // 0x8a1 NEW_2
	if(var_109_bool == 0) goto Label_2213; // 0x8a3 JumpB
	goto Label_2221; // 0x8a4 Jump
	
Label_2221:
	CameraWaitForPlayFinish(); // 0x8ad Func
	ResumeWorld(); // 0x8af Func
	var_66_bool = 1; // 0x8b1 MovB
	return 18; // 0x8b2 Return
	
Label_2213:
	var_110_string = "head"; // 0x8a5 PushS
	HasAnimationTrack(var_86_bool, var_110_string); // 0x8a6 Func
	var_111_bool = var_86_bool; // 0x8a8 Push
	if(var_111_bool == 0) goto Label_2221; // 0x8a9 JumpB
	var_112_string = "head"; // 0x8aa PushS
	LookAsyncCamera(var_112_string); // 0x8ab Func
}


func_2414(var_161_bool, var_162_string)
{
	var_163_bool = 0; var_164_bool = 0; // 0x96e PushV
	var_165_bool = 0; // 0x96f PushV
	func_2579(var_165_bool); // 0x970 NEW_2
	if(var_165_bool == 0) goto Label_2427; // 0x972 JumpB
	lshHasSpeech(var_164_bool, var_162_string); // 0x973 Func
	var_166_bool = var_164_bool; // 0x975 Push
	if(var_166_bool == 0) goto Label_2427; // 0x976 JumpB
	lshPlaySpeech(var_162_string); // 0x977 Func
	var_161_bool = 1; // 0x979 MovB
	return 2; // 0x97a Return
	
Label_2427:
	var_161_bool = 0; // 0x97b MovB
	return 2; // 0x97c Return
}


func_2678(var_482_bool)
{
	var_484_int = 0; var_485_string = ""; // 0xa77 PushV
	var_485_string = "k10q01"; // 0xa78 MovS
	func_2463(var_484_int, var_485_string); // 0xa79 NEW_2
	var_486_int = 2; // 0xa7b PushI
	var_487_bool = var_484_int == var_486_int; // 0xa7c Eq
	if(var_487_bool == 0) goto Label_2688; // 0xa7d JumpB
	var_482_bool = 1; // 0xa7e MovB
	return 0; // 0xa7f Return
	
Label_2688:
	var_482_bool = 0; // 0xa80 MovB
	return 0; // 0xa81 Return
}


func_2429()
{
	var_36_bool = 0; // 0x97d PushV
	func_2579(var_36_bool); // 0x97e NEW_2
	if(var_36_bool == 0) goto Label_2435; // 0x980 JumpB
	lshStopSpeech(); // 0x981 Func
	
Label_2435:
	return 0; // 0x983 Return
}


func_2690(var_400_bool)
{
	var_402_int = 0; var_403_string = ""; // 0xa83 PushV
	var_403_string = "k9q01"; // 0xa84 MovS
	func_2463(var_402_int, var_403_string); // 0xa85 NEW_2
	var_404_int = 4; // 0xa87 PushI
	var_405_bool = var_402_int == var_404_int; // 0xa88 Eq
	if(var_405_bool == 0) goto Label_2700; // 0xa89 JumpB
	var_400_bool = 1; // 0xa8a MovB
	return 0; // 0xa8b Return
	
Label_2700:
	var_400_bool = 0; // 0xa8c MovB
	return 0; // 0xa8d Return
}


func_2436(var_129_object)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x984 PushV
	self(var_131_object); // 0x985 Func
	var_129_object = var_131_object; // 0x987 Mov
	return 2; // 0x988 Return
}


func_2442(var_93_cvector, var_94_cvector)
{
	var_96_float = 0; var_97_float = 0; // 0x98a PushV
	var_98_int = var_94_cvector | var_94_cvector; // 0x98b Or
	var_97_float = sqrt(var_98_int); // 0x98c Sqrt2
	var_99_float = 0.0; // 0x98d PushF
	var_100_bool = var_97_float < var_99_float; // 0x98e LT
	if(var_100_bool == 0) goto Label_2450; // 0x98f JumpB
	var_93_cvector = CVector(0.0, 0.0, 0.0); // 0x990 MovV
	return 2; // 0x991 Return
	
Label_2450:
	var_93_cvector = var_94_cvector / var_94_cvector; // 0x992 Div2
	return 2; // 0x993 Return
}


func_2702()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xa8e PushV
	var_45_int = 522; // 0xa8f PushI
	var_46_int = 1; // 0xa90 PushI
	var_47_int = 529814; // 0xa91 PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0xa92 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0xa94 PushV
	var_49_object = var_44_object; // 0xa95 Mov
	var_50_int = 517; // 0xa96 MovI
	func_2728(var_48_bool, var_49_object, var_50_int); // 0xa97 NEW_2
	return 2; // 0xa99 Return
}


func_1168(var_0_object, var_360_int, var_361_object)
{
	var_363_object = Obj(); var_364_bool = 0; var_365_int = 0; var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0; // 0x490 PushV
	var_0_object = var_361_object; // 0x491 TMov
	var_371_bool = 0; var_372_object = Obj(); var_373_float = 0; // 0x492 PushV
	var_372_object = var_361_object; // 0x493 Mov
	var_373_float = 70.0; // 0x494 MovF
	func_2158(var_372_object, var_373_float); // 0x495 NEW_2
	var_374_bool = var_371_bool == 0; // 0x497 Not
	if(var_374_bool == 0) goto Label_1179; // 0x498 JumpB
	var_360_int = -2; // 0x499 MovI
	return 8; // 0x49a Return
	
Label_1179:
	CreateDialog(var_367_object); // 0x49b Func
	var_375_int = 0; // 0x49d PushV
	func_2573(var_375_int); // 0x49e NEW_2
	SetNPCName(var_375_int); // 0x4a0 ObjFunc
	var_376_int = 0; // 0x4a2 PushV
	func_2571(var_376_int); // 0x4a3 NEW_2
	SetNPCDescription(var_376_int); // 0x4a5 ObjFunc
	var_377_string = ""; // 0x4a7 PushV
	func_2575(var_377_string); // 0x4a8 NEW_2
	SetPhoto(var_377_string); // 0x4aa ObjFunc
	var_378_string = ""; // 0x4ac PushV
	func_2577(var_378_string); // 0x4ad NEW_2
	SetPhoto2(var_378_string); // 0x4af ObjFunc
	var_379_int = 0; // 0x4b1 PushV
	func_2756(var_379_int); // 0x4b2 NEW_2
	SetPlayerName(var_379_int); // 0x4b4 ObjFunc
	var_369_int = -1; // 0x4b6 MovI
	IsOverrideActive(var_368_bool); // 0x4b7 Func
	var_380_bool = var_368_bool; // 0x4b9 Push
	if(var_380_bool == 0) goto Label_1213; // 0x4ba JumpB
	var_360_int = -2; // 0x4bb MovI
	return 8; // 0x4bc Return
	
Label_1213:
	DoDialog(var_367_object); // 0x4bd Func
	var_381_bool = 0; var_382_object = Obj(); // 0x4bf PushV
	var_383_object = Obj(); // 0x4c0 PushV
	func_2436(var_383_object); // 0x4c1 NEW_2
	var_382_object = var_383_object; // 0x4c2 Mov
	func_2245(var_381_bool, var_382_object); // 0x4c4 NEW_2
	var_384_object = Obj(); var_385_object = Obj(); // 0x4c6 PushV
	var_384_object = var_361_object; // 0x4c7 Mov
	var_385_object = var_367_object; // 0x4c8 Mov
	TaskCall(8); // 0x4c9 TaskCall
	func_1249(var_386_object, var_387_object, var_388_string, var_389_bool, var_384_object, var_385_object); // 0x4ca NEW_2
	TaskReturn(); // 0x4cb TaskReturn
	IsDialogEnd(var_370_bool); // 0x4cd ObjFunc
	
Label_1231:
	var_423_bool = var_370_bool == 0; // 0x4cf Not
	if(var_423_bool == 0) goto Label_1238; // 0x4d0 JumpB
	sync(); // 0x4d1 Func
	IsDialogEnd(var_370_bool); // 0x4d3 ObjFunc
	goto Label_1231; // 0x4d5 Jump
	
Label_1238:
	var_424_object = Obj(); // 0x4d6 PushV
	var_424_object = var_361_object; // 0x4d7 Mov
	func_2227(); // 0x4d8 NEW_2
	StopDialog(var_367_object); // 0x4da Func
	GetReturnValue(var_369_int); // 0x4dc ObjFunc
	var_360_int = var_369_int; // 0x4de Mov
	return 8; // 0x4df Return
}


func_1938(var_2_object, var_598_string)
{
	var_599_bool = 0; // 0x793 PushV
	func_2579(var_599_bool); // 0x794 NEW_2
	var_600_bool = var_599_bool == 0; // 0x796 Not
	if(var_600_bool == 0) goto Label_1945; // 0x797 JumpB
	return 0; // 0x798 Return
	
Label_1945:
	var_601_bool = var_598_string == var_2_object; // 0x799 Eq
	if(var_601_bool == 0) goto Label_1948; // 0x79a JumpB
	return 0; // 0x79b Return
	
Label_1948:
	var_602_string = ""; var_603_bool = 0; // 0x79c PushV
	var_602_string = var_598_string; // 0x79d Mov
	var_604_string = ""; // 0x79e PushS
	var_605_bool = var_598_string == var_604_string; // 0x79f Eq
	if(var_605_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_603_bool = 0; // 0x7a1 MovB
	goto Label_1956; // 0x7a2 Jump
	
Label_1956:
	func_2399(var_602_string, var_603_bool); // 0x7a4 NEW_2
	var_2_object = var_598_string; // 0x7a6 TMov
	return 0; // 0x7a7 Return
	
Label_1955:
	var_603_bool = 1; // 0x7a3 MovB
}


func_1684(var_2_object, var_539_string)
{
	var_540_bool = 0; // 0x695 PushV
	func_2579(var_540_bool); // 0x696 NEW_2
	var_541_bool = var_540_bool == 0; // 0x698 Not
	if(var_541_bool == 0) goto Label_1691; // 0x699 JumpB
	return 0; // 0x69a Return
	
Label_1691:
	var_542_bool = var_539_string == var_2_object; // 0x69b Eq
	if(var_542_bool == 0) goto Label_1694; // 0x69c JumpB
	return 0; // 0x69d Return
	
Label_1694:
	var_543_string = ""; var_544_bool = 0; // 0x69e PushV
	var_543_string = var_539_string; // 0x69f Mov
	var_545_string = ""; // 0x6a0 PushS
	var_546_bool = var_539_string == var_545_string; // 0x6a1 Eq
	if(var_546_bool == 0) goto Label_1701; // 0x6a2 JumpB
	var_544_bool = 0; // 0x6a3 MovB
	goto Label_1702; // 0x6a4 Jump
	
Label_1702:
	func_2399(var_543_string, var_544_bool); // 0x6a6 NEW_2
	var_2_object = var_539_string; // 0x6a8 TMov
	return 0; // 0x6a9 Return
	
Label_1701:
	var_544_bool = 1; // 0x6a5 MovB
}


func_2452(var_103_float, var_104_float, var_105_float, var_106_float)
{
	var_107_bool = var_104_float < var_105_float; // 0x995 LT
	if(var_107_bool == 0) goto Label_2457; // 0x996 JumpB
	var_103_float = var_105_float; // 0x997 Mov
	return 0; // 0x998 Return
	
Label_2457:
	var_108_bool = var_104_float > var_106_float; // 0x999 GT
	if(var_108_bool == 0) goto Label_2461; // 0x99a JumpB
	var_103_float = var_106_float; // 0x99b Mov
	return 0; // 0x99c Return
	
Label_2461:
	var_103_float = var_104_float; // 0x99d Mov
	return 0; // 0x99e Return
}


func_2715(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0xa9b PushV
	GetDiaryRoot(var_59_object); // 0xa9c Func
	var_60_bool = var_59_object == 0; // 0xa9e Not
	if(var_60_bool == 0) goto Label_2725; // 0xa9f JumpB
	var_61_string = "Can't retrieve diary root"; // 0xaa0 PushS
	Trace(var_61_string); // 0xaa1 Func
	var_57_object = 0; // 0xaa3 MovB
	return 2; // 0xaa4 Return
	
Label_2725:
	var_57_object = var_59_object; // 0xaa5 Mov
	return 2; // 0xaa6 Return
}


func_2463(var_327_int, var_328_string)
{
	var_329_int = 0; var_330_int = 0; // 0x99f PushV
	GetVariable(var_328_string, var_330_int); // 0x9a0 Func
	var_327_int = var_330_int; // 0x9a2 Mov
	return 2; // 0x9a3 Return
}


func_928(var_2_object, var_458_string)
{
	var_459_bool = 0; // 0x3a1 PushV
	func_2579(var_459_bool); // 0x3a2 NEW_2
	var_460_bool = var_459_bool == 0; // 0x3a4 Not
	if(var_460_bool == 0) goto Label_935; // 0x3a5 JumpB
	return 0; // 0x3a6 Return
	
Label_935:
	var_461_bool = var_458_string == var_2_object; // 0x3a7 Eq
	if(var_461_bool == 0) goto Label_938; // 0x3a8 JumpB
	return 0; // 0x3a9 Return
	
Label_938:
	var_462_string = ""; var_463_bool = 0; // 0x3aa PushV
	var_462_string = var_458_string; // 0x3ab Mov
	var_464_string = ""; // 0x3ac PushS
	var_465_bool = var_458_string == var_464_string; // 0x3ad Eq
	if(var_465_bool == 0) goto Label_945; // 0x3ae JumpB
	var_463_bool = 0; // 0x3af MovB
	goto Label_946; // 0x3b0 Jump
	
Label_946:
	func_2399(var_462_string, var_463_bool); // 0x3b2 NEW_2
	var_2_object = var_458_string; // 0x3b4 TMov
	return 0; // 0x3b5 Return
	
Label_945:
	var_463_bool = 1; // 0x3b1 MovB
}


func_2468(var_65_int, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x9a4 PushV
	CreateIntVector(var_68_object); // 0x9a5 Func
	add(var_65_int); // 0x9a7 ObjFunc
	add(var_66_int); // 0x9a9 ObjFunc
	var_69_int = 3; // 0x9ab PushI
	SendWorldWndMessage(var_69_int, var_68_object); // 0x9ac Func
	return 2; // 0x9ae Return
}


func_2728(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0xaa8 PushV
	var_57_object = Obj(); // 0xaa9 PushV
	func_2715(var_57_object); // 0xaaa NEW_2
	var_54_object = var_57_object; // 0xaab Mov
	Find(var_50_int, var_55_object); // 0xaad ObjFunc
	var_62_bool = var_55_object == 0; // 0xaaf Not
	if(var_62_bool == 0) goto Label_2743; // 0xab0 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0xab1 PushS
	var_64_int = var_63_string + var_50_int; // 0xab2 Add
	Trace(var_64_int); // 0xab3 Func
	var_48_bool = 0; // 0xab5 MovB
	return 6; // 0xab6 Return
	
Label_2743:
	AddChild(var_49_object); // 0xab7 ObjFunc
	var_65_int = 7; // 0xab9 PushI
	SendWorldWndMessage(var_65_int); // 0xaba Func
	GetCategory(var_56_int); // 0xabc ObjFunc
	SetDiarySection(var_56_int); // 0xabe Func
	var_48_bool = 0; // 0xac0 MovB
	return 6; // 0xac1 Return
}


func_171(var_2_object, var_315_string)
{
	var_316_bool = 0; // 0xac PushV
	func_2579(var_316_bool); // 0xad NEW_2
	var_317_bool = var_316_bool == 0; // 0xaf Not
	if(var_317_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_318_bool = var_315_string == var_2_object; // 0xb2 Eq
	if(var_318_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_319_string = ""; var_320_bool = 0; // 0xb5 PushV
	var_319_string = var_315_string; // 0xb6 Mov
	var_321_string = ""; // 0xb7 PushS
	var_322_bool = var_315_string == var_321_string; // 0xb8 Eq
	if(var_322_bool == 0) goto Label_188; // 0xb9 JumpB
	var_320_bool = 0; // 0xba MovB
	goto Label_189; // 0xbb Jump
	
Label_189:
	func_2399(var_319_string, var_320_bool); // 0xbd NEW_2
	var_2_object = var_315_string; // 0xbf TMov
	return 0; // 0xc0 Return
	
Label_188:
	var_320_bool = 1; // 0xbc MovB
}


func_2480(var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; // 0x9b0 PushV
	var_56_object = Obj(); var_57_string = ""; var_58_int = 0; // 0x9b1 PushV
	var_56_object = var_52_object; // 0x9b2 Mov
	var_57_string = "money"; // 0x9b3 MovS
	var_58_int = var_53_int; // 0x9b4 Mov
	func_2127(var_57_string, var_58_int); // 0x9b5 NEW_2
	var_62_int = 0; // 0x9b7 PushI
	var_63_bool = var_53_int > var_62_int; // 0x9b8 GT
	if(var_63_bool == 0) goto Label_2498; // 0x9b9 JumpB
	var_64_string = "Money"; // 0x9ba PushS
	GetInvItemByName(var_55_int, var_64_string); // 0x9bb Func
	var_65_int = 0; var_66_int = 0; // 0x9bd PushV
	var_65_int = var_55_int; // 0x9be Mov
	var_66_int = var_53_int; // 0x9bf Mov
	func_2468(var_65_int, var_66_int); // 0x9c0 NEW_2
	
Label_2498:
	return 2; // 0x9c2 Return
}


func_2227()
{
	var_273_bool = 0; var_274_bool = 0; // 0x8b3 PushV
	var_275_bool = 1; // 0x8b4 PushB
	CameraSwitchToNormal(var_275_bool); // 0x8b5 Func
	var_276_bool = 0; // 0x8b7 PushV
	func_2579(var_276_bool); // 0x8b8 NEW_2
	if(var_276_bool == 0) goto Label_2236; // 0x8ba JumpB
	goto Label_2244; // 0x8bb Jump
	
Label_2244:
	return 2; // 0x8c4 Return
	
Label_2236:
	var_277_string = "head"; // 0x8bc PushS
	HasAnimationTrack(var_274_bool, var_277_string); // 0x8bd Func
	var_278_bool = var_274_bool; // 0x8bf Push
	if(var_278_bool == 0) goto Label_2244; // 0x8c0 JumpB
	var_279_string = "head"; // 0x8c1 PushS
	UnlookAsync(var_279_string); // 0x8c2 Func
}


func_2499(var_74_bool, var_75_object, var_76_float)
{
	var_77_bool = var_75_object == 0; // 0x9c4 Not
	if(var_77_bool == 0) goto Label_2504; // 0x9c5 JumpB
	var_74_bool = 0; // 0x9c6 MovB
	return 0; // 0x9c7 Return
	
Label_2504:
	var_78_int = 0; // 0x9c8 PushI
	var_79_bool = var_76_float > var_78_int; // 0x9c9 GT
	if(var_79_bool == 0) goto Label_2511; // 0x9ca JumpB
	var_80_int = 8; // 0x9cb PushI
	SendWorldWndMessage(var_80_int); // 0x9cc Func
	goto Label_2520; // 0x9ce Jump
	
Label_2520:
	var_81_float = 0; // 0x9d8 PushV
	var_81_float = var_76_float; // 0x9d9 Mov
	func_2534(var_81_float); // 0x9da NEW_2
	var_85_bool = 0; var_86_object = Obj(); var_87_string = ""; var_88_float = 0; var_89_float = 0; var_90_float = 0; // 0x9dc PushV
	var_86_object = var_75_object; // 0x9dd Mov
	var_87_string = "reputation"; // 0x9de MovS
	var_88_float = var_76_float; // 0x9df Mov
	var_89_float = 0; // 0x9e0 MovI
	var_90_float = 1; // 0x9e1 MovI
	func_2105(var_85_bool, var_86_object, var_87_string, var_88_float, var_89_float, var_90_float); // 0x9e2 NEW_2
	var_74_bool = 1; // 0x9e4 MovB
	return 0; // 0x9e5 Return
	
Label_2511:
	var_109_int = 0; // 0x9cf PushI
	var_110_bool = var_76_float < var_109_int; // 0x9d0 LT
	if(var_110_bool == 0) goto Label_2518; // 0x9d1 JumpB
	var_111_int = 9; // 0x9d2 PushI
	SendWorldWndMessage(var_111_int); // 0x9d3 Func
	goto Label_2520; // 0x9d5 Jump
	
Label_2518:
	var_74_bool = 0; // 0x9d6 MovB
	return 0; // 0x9d7 Return
}


func_2756(var_118_int)
{
	var_119_int = 0; var_120_int = 0; // 0xac4 PushV
	var_121_string = "branch"; // 0xac5 PushS
	GetVariable(var_121_string, var_120_int); // 0xac6 Func
	var_122_int = 0; // 0xac8 PushI
	var_123_bool = var_120_int == var_122_int; // 0xac9 Eq
	if(var_123_bool == 0) goto Label_2766; // 0xaca JumpB
	var_118_int = 1; // 0xacb MovI
	return 2; // 0xacc Return
	
Label_2766:
	var_124_int = 1; // 0xace PushI
	var_125_bool = var_120_int == var_124_int; // 0xacf Eq
	if(var_125_bool == 0) goto Label_2771; // 0xad0 JumpB
	var_118_int = 2; // 0xad1 MovI
	return 2; // 0xad2 Return
	
Label_2771:
	var_118_int = 3; // 0xad3 MovI
	return 2; // 0xad4 Return
}


func_2245(var_127_bool, var_128_object)
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; // 0x8c5 PushV
	var_136_string = "voice_common"; // 0x8c6 PushS
	GetVariable(var_136_string, var_134_int); // 0x8c7 Func
	var_137_int = var_134_int; // 0x8c9 Push
	if(var_137_int == 0) goto Label_2283; // 0x8ca JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x8cb PushV
	var_139_object = var_128_object; // 0x8cc Mov
	func_2303(var_139_object); // 0x8cd NEW_2
	var_168_bool = var_138_bool == 0; // 0x8cf Not
	if(var_168_bool == 0) goto Label_2265; // 0x8d0 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x8d1 PushV
	var_170_object = var_128_object; // 0x8d2 Mov
	func_2340(var_170_object); // 0x8d3 NEW_2
	var_204_bool = var_169_bool == 0; // 0x8d5 Not
	if(var_204_bool == 0) goto Label_2265; // 0x8d6 JumpB
	var_127_bool = 0; // 0x8d7 MovB
	return 4; // 0x8d8 Return
	
Label_2265:
	var_205_int = 2; // 0x8d9 PushI
	irand(var_135_int, var_205_int); // 0x8da Func
	var_206_int = var_135_int; // 0x8dc Push
	if(var_206_int == 0) goto Label_2278; // 0x8dd JumpB
	var_207_string = "voice_common"; // 0x8de PushS
	var_208_int = 1; // 0x8df PushI
	var_209_int = var_134_int + var_208_int; // 0x8e0 Add
	var_210_int = 3; // 0x8e1 PushI
	var_211_int = var_209_int / var_210_int; // 0x8e2 Mod
	SetVariable(var_207_string, var_211_int); // 0x8e3 Func
	goto Label_2282; // 0x8e5 Jump
	
Label_2282:
	goto Label_2301; // 0x8ea Jump
	
Label_2301:
	var_127_bool = 1; // 0x8fd MovB
	return 4; // 0x8fe Return
	
Label_2278:
	var_212_string = "voice_common"; // 0x8e6 PushS
	var_213_int = 0; // 0x8e7 PushI
	SetVariable(var_212_string, var_213_int); // 0x8e8 Func
	
Label_2283:
	var_214_bool = 0; var_215_object = Obj(); // 0x8eb PushV
	var_215_object = var_128_object; // 0x8ec Mov
	func_2340(var_215_object); // 0x8ed NEW_2
	var_216_bool = var_214_bool == 0; // 0x8ef Not
	if(var_216_bool == 0) goto Label_2297; // 0x8f0 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0x8f1 PushV
	var_218_object = var_128_object; // 0x8f2 Mov
	func_2303(var_218_object); // 0x8f3 NEW_2
	var_219_bool = var_217_bool == 0; // 0x8f5 Not
	if(var_219_bool == 0) goto Label_2297; // 0x8f6 JumpB
	var_127_bool = 0; // 0x8f7 MovB
	return 4; // 0x8f8 Return
	
Label_2297:
	var_220_string = "voice_common"; // 0x8f9 PushS
	var_221_int = 1; // 0x8fa PushI
	SetVariable(var_220_string, var_221_int); // 0x8fb Func
}


func_462(var_0_object, var_55_int, var_56_object)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; // 0x1ce PushV
	var_0_object = var_56_object; // 0x1cf TMov
	var_66_bool = 0; var_67_object = Obj(); var_68_float = 0; // 0x1d0 PushV
	var_67_object = var_56_object; // 0x1d1 Mov
	var_68_float = 70.0; // 0x1d2 MovF
	func_2158(var_67_object, var_68_float); // 0x1d3 NEW_2
	var_113_bool = var_66_bool == 0; // 0x1d5 Not
	if(var_113_bool == 0) goto Label_473; // 0x1d6 JumpB
	var_55_int = -2; // 0x1d7 MovI
	return 8; // 0x1d8 Return
	
Label_473:
	CreateDialog(var_62_object); // 0x1d9 Func
	var_114_int = 0; // 0x1db PushV
	func_2573(var_114_int); // 0x1dc NEW_2
	SetNPCName(var_114_int); // 0x1de ObjFunc
	var_115_int = 0; // 0x1e0 PushV
	func_2571(var_115_int); // 0x1e1 NEW_2
	SetNPCDescription(var_115_int); // 0x1e3 ObjFunc
	var_116_string = ""; // 0x1e5 PushV
	func_2575(var_116_string); // 0x1e6 NEW_2
	SetPhoto(var_116_string); // 0x1e8 ObjFunc
	var_117_string = ""; // 0x1ea PushV
	func_2577(var_117_string); // 0x1eb NEW_2
	SetPhoto2(var_117_string); // 0x1ed ObjFunc
	var_118_int = 0; // 0x1ef PushV
	func_2756(var_118_int); // 0x1f0 NEW_2
	SetPlayerName(var_118_int); // 0x1f2 ObjFunc
	var_64_int = -1; // 0x1f4 MovI
	IsOverrideActive(var_63_bool); // 0x1f5 Func
	var_126_bool = var_63_bool; // 0x1f7 Push
	if(var_126_bool == 0) goto Label_507; // 0x1f8 JumpB
	var_55_int = -2; // 0x1f9 MovI
	return 8; // 0x1fa Return
	
Label_507:
	DoDialog(var_62_object); // 0x1fb Func
	var_127_bool = 0; var_128_object = Obj(); // 0x1fd PushV
	var_129_object = Obj(); // 0x1fe PushV
	func_2436(var_129_object); // 0x1ff NEW_2
	var_128_object = var_129_object; // 0x200 Mov
	func_2245(var_127_bool, var_128_object); // 0x202 NEW_2
	var_222_object = Obj(); var_223_object = Obj(); // 0x204 PushV
	var_222_object = var_56_object; // 0x205 Mov
	var_223_object = var_62_object; // 0x206 Mov
	TaskCall(4); // 0x207 TaskCall
	func_543(var_224_object, var_225_object, var_226_string, var_227_bool, var_222_object, var_223_object); // 0x208 NEW_2
	TaskReturn(); // 0x209 TaskReturn
	IsDialogEnd(var_65_bool); // 0x20b ObjFunc
	
Label_525:
	var_271_bool = var_65_bool == 0; // 0x20d Not
	if(var_271_bool == 0) goto Label_532; // 0x20e JumpB
	sync(); // 0x20f Func
	IsDialogEnd(var_65_bool); // 0x211 ObjFunc
	goto Label_525; // 0x213 Jump
	
Label_532:
	var_272_object = Obj(); // 0x214 PushV
	var_272_object = var_56_object; // 0x215 Mov
	func_2227(); // 0x216 NEW_2
	StopDialog(var_62_object); // 0x218 Func
	GetReturnValue(var_64_int); // 0x21a ObjFunc
	var_55_int = var_64_int; // 0x21c Mov
	return 8; // 0x21d Return
}


func_2773(var_52_object)
{
	var_53_bool = GlobalVars[1]; // 0xad6 PushGE
	var_54_bool = var_53_bool == 0; // 0xad7 Not
	if(var_54_bool == 0) goto Label_2786; // 0xad8 JumpB
	var_55_int = 0; var_56_object = Obj(); // 0xad9 PushV
	var_56_object = var_52_object; // 0xada Mov
	TaskCall(3); // 0xadb TaskCall
	func_462(var_57_object, var_55_int, var_56_object); // 0xadc NEW_2
	TaskReturn(); // 0xadd TaskReturn
	var_280_bool = GlobalVars[1]; // 0xadf PushGE
	var_280_bool = 1; // 0xae0 MovB
	GlobalVars[1] = var_280_bool; // 0xae1 PopGE
	
Label_2786:
	var_281_bool = 0; var_282_int = 0; // 0xae2 PushV
	var_282_int = 3; // 0xae3 MovI
	func_2565(var_281_bool, var_282_int); // 0xae4 NEW_2
	if(var_281_bool == 0) goto Label_2798; // 0xae6 JumpB
	var_284_int = 0; var_285_object = Obj(); // 0xae7 PushV
	var_285_object = var_52_object; // 0xae8 Mov
	TaskCall(1); // 0xae9 TaskCall
	func_13(var_286_object, var_284_int, var_285_object); // 0xaea NEW_2
	TaskReturn(); // 0xaeb TaskReturn
	return 0; // 0xaed Return
	
Label_2798:
	var_358_bool = 0; var_359_int = 0; // 0xaee PushV
	var_359_int = 9; // 0xaef MovI
	func_2565(var_358_bool, var_359_int); // 0xaf0 NEW_2
	if(var_358_bool == 0) goto Label_2810; // 0xaf2 JumpB
	var_360_int = 0; var_361_object = Obj(); // 0xaf3 PushV
	var_361_object = var_52_object; // 0xaf4 Mov
	TaskCall(7); // 0xaf5 TaskCall
	func_1168(var_362_object, var_360_int, var_361_object); // 0xaf6 NEW_2
	TaskReturn(); // 0xaf7 TaskReturn
	return 0; // 0xaf9 Return
	
Label_2810:
	var_425_bool = 0; var_426_int = 0; // 0xafa PushV
	var_426_int = 10; // 0xafb MovI
	func_2565(var_425_bool, var_426_int); // 0xafc NEW_2
	if(var_425_bool == 0) goto Label_2822; // 0xafe JumpB
	var_427_int = 0; var_428_object = Obj(); // 0xaff PushV
	var_428_object = var_52_object; // 0xb00 Mov
	TaskCall(5); // 0xb01 TaskCall
	func_757(var_429_object, var_427_int, var_428_object); // 0xb02 NEW_2
	TaskReturn(); // 0xb03 TaskReturn
	return 0; // 0xb05 Return
	
Label_2822:
	var_506_bool = 0; var_507_int = 0; // 0xb06 PushV
	var_507_int = 12; // 0xb07 MovI
	func_2565(var_506_bool, var_507_int); // 0xb08 NEW_2
	if(var_506_bool == 0) goto Label_2834; // 0xb0a JumpB
	var_508_int = 0; var_509_object = Obj(); // 0xb0b PushV
	var_509_object = var_52_object; // 0xb0c Mov
	TaskCall(9); // 0xb0d TaskCall
	func_1540(var_510_object, var_508_int, var_509_object); // 0xb0e NEW_2
	TaskReturn(); // 0xb0f TaskReturn
	return 0; // 0xb11 Return
	
Label_2834:
	var_567_int = 0; var_568_object = Obj(); // 0xb12 PushV
	var_568_object = var_52_object; // 0xb13 Mov
	TaskCall(11); // 0xb14 TaskCall
	func_1799(var_569_object, var_567_int, var_568_object); // 0xb15 NEW_2
	TaskReturn(); // 0xb16 TaskReturn
	return 0; // 0xb18 Return
}


func_1249(var_0_object, var_1_object, var_2_object, var_3_string, var_384_object, var_385_object)
{
	var_0_object = var_385_object; // 0x4e2 TMov
	var_1_object = var_384_object; // 0x4e3 TMov
	var_3_string = 0; // 0x4e4 TMovB
	var_390_int = 1; // 0x4e5 PushI
	if(var_390_int == 0) goto Label_1287; // 0x4e6 JumpB
	var_391_string = ""; // 0x4e7 PushV
	var_391_string = "Neutral"; // 0x4e8 MovS
	func_1317(var_385_object, var_391_string); // 0x4e9 NEW_2
	var_399_int = 528940; // 0x4eb PushI
	SetMessage(var_399_int); // 0x4ec TObjFunc
	ClearReplies(); // 0x4ee TObjFunc
	var_400_bool = 0; var_401_object = Obj(); // 0x4f0 PushV
	var_401_object = var_1_object; // 0x4f1 MovT
	func_2690(var_401_object); // 0x4f2 NEW_2
	if(var_400_bool == 0) goto Label_1274; // 0x4f4 JumpB
	var_406_int = 528943; // 0x4f5 PushI
	var_407_int = 30377; // 0x4f6 PushI
	var_408_int = 30376; // 0x4f7 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x4f8 TObjFunc
	
Label_1274:
	var_409_int = 528941; // 0x4fa PushI
	var_410_int = -1; // 0x4fb PushI
	var_411_int = 30374; // 0x4fc PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x4fd TObjFunc
	var_412_int = 528942; // 0x4ff PushI
	var_413_int = -1; // 0x500 PushI
	var_414_int = 30375; // 0x501 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x502 TObjFunc
	goto Label_1287; // 0x504 Jump
	
Label_1287:
	var_415_bool = 0; // 0x507 PushV
	func_2579(var_415_bool); // 0x508 NEW_2
	if(var_415_bool == 0) goto Label_1302; // 0x50a JumpB
	
Label_1291:
	lshWaitForAnimEnd(); // 0x50b Func
	var_416_string = var_3_string; // 0x50d PushT
	if(var_416_string == 0) goto Label_1296; // 0x50e JumpB
	goto Label_1301; // 0x50f Jump
	
Label_1301:
	goto Label_1316; // 0x515 Jump
	
Label_1316:
	return 0; // 0x524 Return
	
Label_1296:
	var_417_string = ""; // 0x510 PushV
	var_417_string = var_2_object; // 0x511 MovT
	func_2383(var_417_string); // 0x512 NEW_2
	goto Label_1291; // 0x514 Jump
	
Label_1302:
	var_418_string = "all"; // 0x516 PushS
	var_419_string = "idle"; // 0x517 PushS
	PlayAnimation(var_418_string, var_419_string); // 0x518 Func
	
Label_1306:
	WaitForAnimEnd(); // 0x51a Func
	var_420_string = var_3_string; // 0x51c PushT
	if(var_420_string == 0) goto Label_1311; // 0x51d JumpB
	goto Label_1316; // 0x51e Jump
	
Label_1311:
	var_421_string = "all"; // 0x51f PushS
	var_422_string = "idle"; // 0x520 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x521 Func
	goto Label_1306; // 0x523 Jump
}


func_2017(var_0_object, var_31_cvector, var_32_cvector)
{
	GetPosition(var_32_cvector); // 0x7e1 Func
	GetDirection(var_31_cvector); // 0x7e3 Func
	var_0_object = 0; // 0x7e5 TMovB
	var_34_bool = 0; // 0x7e6 PushV
	func_2153(var_34_bool); // 0x7e7 NEW_2
	var_37_bool = var_34_bool == 0; // 0x7e9 Not
	if(var_37_bool == 0) goto Label_2035; // 0x7ea JumpB
	TaskCall(0); // 0x7ec TaskCall
	func_0(); // 0x7ed NEW_2
	TaskReturn(); // 0x7ee TaskReturn
	func_2045(var_30_bool, var_31_cvector, var_32_cvector); // 0x7f1 NEW_2
	
Label_2035:
	var_43_string = ""; // 0x7f3 PushV
	var_43_string = "Neutral"; // 0x7f4 MovS
	func_2383(var_43_string); // 0x7f5 NEW_2
	lshWaitForAnimEnd(); // 0x7f7 Func
	goto Label_2035; // 0x7f9 Jump
}


func_2534(var_81_float)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x9e6 PushV
	CreateFloatVector(var_83_object); // 0x9e7 Func
	add(var_81_float); // 0x9e9 ObjFunc
	var_84_int = 16; // 0x9eb PushI
	SendWorldWndMessage(var_84_int, var_83_object); // 0x9ec Func
	return 2; // 0x9ee Return
}


func_2544(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x9f0 PushV
	FindActor(var_70_object, var_67_string); // 0x9f1 Func
	var_71_bool = var_70_object == 0; // 0x9f3 NullEq
	if(var_71_bool == 0) goto Label_2551; // 0x9f4 JumpB
	var_66_bool = 0; // 0x9f5 MovB
	return 2; // 0x9f6 Return
	
Label_2551:
	Trigger(var_70_object, var_68_string); // 0x9f7 Func
	var_66_bool = 1; // 0x9f9 MovB
	return 2; // 0x9fa Return
}


func_757(var_0_object, var_427_int, var_428_object)
{
	var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0; var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; // 0x2f5 PushV
	var_0_object = var_428_object; // 0x2f6 TMov
	var_438_bool = 0; var_439_object = Obj(); var_440_float = 0; // 0x2f7 PushV
	var_439_object = var_428_object; // 0x2f8 Mov
	var_440_float = 70.0; // 0x2f9 MovF
	func_2158(var_439_object, var_440_float); // 0x2fa NEW_2
	var_441_bool = var_438_bool == 0; // 0x2fc Not
	if(var_441_bool == 0) goto Label_768; // 0x2fd JumpB
	var_427_int = -2; // 0x2fe MovI
	return 8; // 0x2ff Return
	
Label_768:
	CreateDialog(var_434_object); // 0x300 Func
	var_442_int = 0; // 0x302 PushV
	func_2573(var_442_int); // 0x303 NEW_2
	SetNPCName(var_442_int); // 0x305 ObjFunc
	var_443_int = 0; // 0x307 PushV
	func_2571(var_443_int); // 0x308 NEW_2
	SetNPCDescription(var_443_int); // 0x30a ObjFunc
	var_444_string = ""; // 0x30c PushV
	func_2575(var_444_string); // 0x30d NEW_2
	SetPhoto(var_444_string); // 0x30f ObjFunc
	var_445_string = ""; // 0x311 PushV
	func_2577(var_445_string); // 0x312 NEW_2
	SetPhoto2(var_445_string); // 0x314 ObjFunc
	var_446_int = 0; // 0x316 PushV
	func_2756(var_446_int); // 0x317 NEW_2
	SetPlayerName(var_446_int); // 0x319 ObjFunc
	var_436_int = -1; // 0x31b MovI
	IsOverrideActive(var_435_bool); // 0x31c Func
	var_447_bool = var_435_bool; // 0x31e Push
	if(var_447_bool == 0) goto Label_802; // 0x31f JumpB
	var_427_int = -2; // 0x320 MovI
	return 8; // 0x321 Return
	
Label_802:
	DoDialog(var_434_object); // 0x322 Func
	var_448_bool = 0; var_449_object = Obj(); // 0x324 PushV
	var_450_object = Obj(); // 0x325 PushV
	func_2436(var_450_object); // 0x326 NEW_2
	var_449_object = var_450_object; // 0x327 Mov
	func_2245(var_448_bool, var_449_object); // 0x329 NEW_2
	var_451_object = Obj(); var_452_object = Obj(); // 0x32b PushV
	var_451_object = var_428_object; // 0x32c Mov
	var_452_object = var_434_object; // 0x32d Mov
	TaskCall(6); // 0x32e TaskCall
	func_838(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object); // 0x32f NEW_2
	TaskReturn(); // 0x330 TaskReturn
	IsDialogEnd(var_437_bool); // 0x332 ObjFunc
	
Label_820:
	var_504_bool = var_437_bool == 0; // 0x334 Not
	if(var_504_bool == 0) goto Label_827; // 0x335 JumpB
	sync(); // 0x336 Func
	IsDialogEnd(var_437_bool); // 0x338 ObjFunc
	goto Label_820; // 0x33a Jump
	
Label_827:
	var_505_object = Obj(); // 0x33b PushV
	var_505_object = var_428_object; // 0x33c Mov
	func_2227(); // 0x33d NEW_2
	StopDialog(var_434_object); // 0x33f Func
	GetReturnValue(var_436_int); // 0x341 ObjFunc
	var_427_int = var_436_int; // 0x343 Mov
	return 8; // 0x344 Return
}


func_2556(var_182_int)
{
	var_183_float = 0; var_184_float = 0; // 0x9fc PushV
	GetGameTime(var_184_float); // 0x9fd Func
	var_185_int = 1; // 0x9ff PushI
	var_186_int = 0; // 0xa00 PushV
	var_187_int = 24; // 0xa01 PushI
	var_186_int = var_184_float / var_184_float; // 0xa02 Div2
	var_182_int = var_185_int + var_186_int; // 0xa03 Add2
	return 2; // 0xa04 Return
}


func_2045(var_0_object, var_31_cvector, var_32_cvector)
{
	SetPosition(var_32_cvector); // 0x7fd Func
	SetDirection(var_31_cvector); // 0x7ff Func
	var_0_object = 0; // 0x801 TMovB
	var_40_string = "all"; // 0x802 PushS
	var_41_string = "stand"; // 0x803 PushS
	var_42_int = 0; // 0x804 PushI
	LockAnimation(var_40_string, var_41_string, var_42_int); // 0x805 Func
	return 0; // 0x807 Return
}


func_2303(var_138_bool)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; // 0x8ff PushV
	var_145_string = "c"; // 0x900 MovS
	var_146_int = 0; // 0x901 MovI
	
Label_2306:
	var_150_int = 1; // 0x902 PushI
	if(var_150_int == 0) goto Label_2319; // 0x903 JumpB
	var_151_int = 1; // 0x904 PushI
	var_152_int = var_146_int + var_151_int; // 0x905 Add
	var_153_int = var_145_string + var_152_int; // 0x906 Add
	HasProperty(var_153_int, var_147_bool); // 0x907 ObjFunc
	var_154_bool = var_147_bool == 0; // 0x909 Not
	if(var_154_bool == 0) goto Label_2316; // 0x90a JumpB
	goto Label_2319; // 0x90b Jump
	
Label_2319:
	var_155_bool = var_146_int == 0; // 0x90f Not
	if(var_155_bool == 0) goto Label_2323; // 0x910 JumpB
	var_138_bool = 0; // 0x911 MovB
	return 10; // 0x912 Return
	
Label_2323:
	var_148_int = 0; // 0x913 MovI
	var_156_int = 1; // 0x914 PushI
	var_157_bool = var_146_int > var_156_int; // 0x915 GT
	if(var_157_bool == 0) goto Label_2329; // 0x916 JumpB
	irand(var_148_int, var_146_int); // 0x917 Func
	
Label_2329:
	var_158_int = 1; // 0x919 PushI
	var_159_int = var_148_int + var_158_int; // 0x91a Add
	var_160_int = var_145_string + var_159_int; // 0x91b Add
	GetProperty(var_160_int, var_149_string); // 0x91c ObjFunc
	var_161_bool = 0; var_162_string = ""; // 0x91e PushV
	var_162_string = var_149_string; // 0x91f Mov
	func_2414(var_161_bool, var_162_string); // 0x920 NEW_2
	var_138_bool = var_161_bool; // 0x921 Mov
	return 10; // 0x923 Return
	
Label_2316:
	var_167_int = 1; // 0x90c PushI
	var_146_int = var_146_int + var_167_int; // 0x90d Add2
	goto Label_2306; // 0x90e Jump
}


