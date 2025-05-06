task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xdd PushI
	if(var_28_int == 0) goto Label_549; // 0xde JumpB
	func_2154(); // 0xe0 NEW_2
	var_30_int = 19687; // 0xe2 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xe3 Eq
	if(var_31_bool == 0) goto Label_234; // 0xe4 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xe5 PushV
	var_32_object = var_1_object; // 0xe6 MovT
	var_33_object = var_0_object; // 0xe7 MovT
	func_2254(); // 0xe8 NEW_2
	
Label_234:
	var_79_int = 19689; // 0xea PushI
	var_80_bool = var_27_cvector == var_79_int; // 0xeb Eq
	if(var_80_bool == 0) goto Label_242; // 0xec JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0xed PushV
	var_81_object = var_1_object; // 0xee MovT
	var_82_object = var_0_object; // 0xef MovT
	func_2254(); // 0xf0 NEW_2
	
Label_242:
	var_83_int = 19693; // 0xf2 PushI
	var_84_bool = var_27_cvector == var_83_int; // 0xf3 Eq
	if(var_84_bool == 0) goto Label_250; // 0xf4 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0xf5 PushV
	var_85_object = var_1_object; // 0xf6 MovT
	var_86_object = var_0_object; // 0xf7 MovT
	func_2277(); // 0xf8 NEW_2
	
Label_250:
	var_89_int = 19678; // 0xfa PushI
	var_90_bool = var_26_bool == var_89_int; // 0xfb Eq
	if(var_90_bool == 0) goto Label_332; // 0xfc JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xfd PushV
	var_92_object = var_1_object; // 0xfe MovT
	func_2328(var_92_object); // 0xff NEW_2
	if(var_91_bool == 0) goto Label_288; // 0x101 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x102 PushV
	var_99_object = var_1_object; // 0x103 MovT
	var_100_object = var_0_object; // 0x104 MovT
	func_2271(); // 0x105 NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x107 PushV
	var_103_object = var_1_object; // 0x108 MovT
	var_104_object = var_0_object; // 0x109 MovT
	func_2292(); // 0x10a NEW_2
	var_107_string = ""; // 0x10c PushV
	var_107_string = "Azart"; // 0x10d MovS
	func_198(var_27_cvector, var_107_string); // 0x10e NEW_2
	var_124_int = 518568; // 0x110 PushI
	SetMessage(var_124_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_125_int = 518572; // 0x115 PushI
	var_126_int = 20064; // 0x116 PushI
	var_127_int = 19682; // 0x117 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x118 TObjFunc
	var_128_int = 518950; // 0x11a PushI
	var_129_int = 20062; // 0x11b PushI
	var_130_int = 20061; // 0x11c PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_131_string = ""; // 0x120 PushV
	var_131_string = "Secret"; // 0x121 MovS
	func_198(var_27_cvector, var_131_string); // 0x122 NEW_2
	var_132_int = 518573; // 0x124 PushI
	SetMessage(var_132_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_133_bool = 0; var_134_object = Obj(); // 0x129 PushV
	var_134_object = var_1_object; // 0x12a MovT
	func_2340(var_134_object); // 0x12b NEW_2
	if(var_133_bool == 0) goto Label_307; // 0x12d JumpB
	var_139_int = 518574; // 0x12e PushI
	var_140_int = 19688; // 0x12f PushI
	var_141_int = 19684; // 0x130 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x131 TObjFunc
	
Label_307:
	var_142_bool = 0; // 0x133 PushV
	var_142_bool = 0; // 0x134 MovB
	var_143_bool = 0; var_144_object = Obj(); // 0x135 PushV
	var_144_object = var_1_object; // 0x136 MovT
	func_2352(var_144_object); // 0x137 NEW_2
	if(var_143_bool == 0) goto Label_320; // 0x139 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x13a PushV
	var_150_object = var_1_object; // 0x13b MovT
	func_2364(var_150_object); // 0x13c NEW_2
	if(var_149_bool == 0) goto Label_320; // 0x13e JumpB
	var_142_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_142_bool == 0) goto Label_326; // 0x140 JumpB
	var_155_int = 518586; // 0x141 PushI
	var_156_int = 19694; // 0x142 PushI
	var_157_int = 19693; // 0x143 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x144 TObjFunc
	
Label_326:
	var_158_int = 518575; // 0x146 PushI
	var_159_int = -1; // 0x147 PushI
	var_160_int = 19685; // 0x148 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_161_int = 19694; // 0x14c PushI
	var_162_bool = var_26_bool == var_161_int; // 0x14d Eq
	if(var_162_bool == 0) goto Label_355; // 0x14e JumpB
	var_163_string = ""; // 0x14f PushV
	var_163_string = "Secret"; // 0x150 MovS
	func_198(var_27_cvector, var_163_string); // 0x151 NEW_2
	var_164_int = 518587; // 0x153 PushI
	SetMessage(var_164_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_165_int = 518588; // 0x158 PushI
	var_166_int = 20052; // 0x159 PushI
	var_167_int = 19695; // 0x15a PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x15b TObjFunc
	var_168_int = 518942; // 0x15d PushI
	var_169_int = 20054; // 0x15e PushI
	var_170_int = 20053; // 0x15f PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_171_int = 20054; // 0x163 PushI
	var_172_bool = var_26_bool == var_171_int; // 0x164 Eq
	if(var_172_bool == 0) goto Label_378; // 0x165 JumpB
	var_173_string = ""; // 0x166 PushV
	var_173_string = "Serious"; // 0x167 MovS
	func_198(var_27_cvector, var_173_string); // 0x168 NEW_2
	var_174_int = 518943; // 0x16a PushI
	SetMessage(var_174_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_175_int = 518944; // 0x16f PushI
	var_176_int = 20057; // 0x170 PushI
	var_177_int = 20055; // 0x171 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x172 TObjFunc
	var_178_int = 518945; // 0x174 PushI
	var_179_int = -1; // 0x175 PushI
	var_180_int = 20056; // 0x176 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_181_int = 20057; // 0x17a PushI
	var_182_bool = var_26_bool == var_181_int; // 0x17b Eq
	if(var_182_bool == 0) goto Label_401; // 0x17c JumpB
	var_183_string = ""; // 0x17d PushV
	var_183_string = "Serious"; // 0x17e MovS
	func_198(var_27_cvector, var_183_string); // 0x17f NEW_2
	var_184_int = 518946; // 0x181 PushI
	SetMessage(var_184_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_185_int = 518947; // 0x186 PushI
	var_186_int = -1; // 0x187 PushI
	var_187_int = 20058; // 0x188 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x189 TObjFunc
	var_188_int = 518948; // 0x18b PushI
	var_189_int = -1; // 0x18c PushI
	var_190_int = 20059; // 0x18d PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_191_int = 20052; // 0x191 PushI
	var_192_bool = var_26_bool == var_191_int; // 0x192 Eq
	if(var_192_bool == 0) goto Label_419; // 0x193 JumpB
	var_193_string = ""; // 0x194 PushV
	var_193_string = "Secret"; // 0x195 MovS
	func_198(var_27_cvector, var_193_string); // 0x196 NEW_2
	var_194_int = 518941; // 0x198 PushI
	SetMessage(var_194_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_195_int = 518949; // 0x19d PushI
	var_196_int = -1; // 0x19e PushI
	var_197_int = 20060; // 0x19f PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1a0 TObjFunc
	return 0; // 0x1a2 Return
	
Label_419:
	var_198_int = 19688; // 0x1a3 PushI
	var_199_bool = var_26_bool == var_198_int; // 0x1a4 Eq
	if(var_199_bool == 0) goto Label_437; // 0x1a5 JumpB
	var_200_string = ""; // 0x1a6 PushV
	var_200_string = "Serious"; // 0x1a7 MovS
	func_198(var_27_cvector, var_200_string); // 0x1a8 NEW_2
	var_201_int = 518581; // 0x1aa PushI
	SetMessage(var_201_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_202_int = 518582; // 0x1af PushI
	var_203_int = -1; // 0x1b0 PushI
	var_204_int = 19689; // 0x1b1 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_205_int = 20062; // 0x1b5 PushI
	var_206_bool = var_26_bool == var_205_int; // 0x1b6 Eq
	if(var_206_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_207_string = ""; // 0x1b8 PushV
	var_207_string = "Azart"; // 0x1b9 MovS
	func_198(var_27_cvector, var_207_string); // 0x1ba NEW_2
	var_208_int = 518951; // 0x1bc PushI
	SetMessage(var_208_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_209_int = 518952; // 0x1c1 PushI
	var_210_int = 20069; // 0x1c2 PushI
	var_211_int = 20063; // 0x1c3 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_212_int = 20064; // 0x1c7 PushI
	var_213_bool = var_26_bool == var_212_int; // 0x1c8 Eq
	if(var_213_bool == 0) goto Label_473; // 0x1c9 JumpB
	var_214_string = ""; // 0x1ca PushV
	var_214_string = "Secret"; // 0x1cb MovS
	func_198(var_27_cvector, var_214_string); // 0x1cc NEW_2
	var_215_int = 518953; // 0x1ce PushI
	SetMessage(var_215_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_216_int = 518954; // 0x1d3 PushI
	var_217_int = 20066; // 0x1d4 PushI
	var_218_int = 20065; // 0x1d5 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_219_int = 20066; // 0x1d9 PushI
	var_220_bool = var_26_bool == var_219_int; // 0x1da Eq
	if(var_220_bool == 0) goto Label_496; // 0x1db JumpB
	var_221_string = ""; // 0x1dc PushV
	var_221_string = "Azart"; // 0x1dd MovS
	func_198(var_27_cvector, var_221_string); // 0x1de NEW_2
	var_222_int = 518955; // 0x1e0 PushI
	SetMessage(var_222_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_223_int = 518956; // 0x1e5 PushI
	var_224_int = 20069; // 0x1e6 PushI
	var_225_int = 20067; // 0x1e7 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1e8 TObjFunc
	var_226_int = 518957; // 0x1ea PushI
	var_227_int = -1; // 0x1eb PushI
	var_228_int = 20068; // 0x1ec PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_229_int = 20069; // 0x1f0 PushI
	var_230_bool = var_26_bool == var_229_int; // 0x1f1 Eq
	if(var_230_bool == 0) goto Label_519; // 0x1f2 JumpB
	var_231_string = ""; // 0x1f3 PushV
	var_231_string = "Secret"; // 0x1f4 MovS
	func_198(var_27_cvector, var_231_string); // 0x1f5 NEW_2
	var_232_int = 518958; // 0x1f7 PushI
	SetMessage(var_232_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_233_int = 518959; // 0x1fc PushI
	var_234_int = 19686; // 0x1fd PushI
	var_235_int = 20071; // 0x1fe PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1ff TObjFunc
	var_236_int = 518960; // 0x201 PushI
	var_237_int = -1; // 0x202 PushI
	var_238_int = 20072; // 0x203 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_239_int = 19686; // 0x207 PushI
	var_240_bool = var_26_bool == var_239_int; // 0x208 Eq
	if(var_240_bool == 0) goto Label_537; // 0x209 JumpB
	var_241_string = ""; // 0x20a PushV
	var_241_string = "Secret"; // 0x20b MovS
	func_198(var_27_cvector, var_241_string); // 0x20c NEW_2
	var_242_int = 518579; // 0x20e PushI
	SetMessage(var_242_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_243_int = 518580; // 0x213 PushI
	var_244_int = -1; // 0x214 PushI
	var_245_int = 19687; // 0x215 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x216 TObjFunc
	return 0; // 0x218 Return
	
Label_537:
	var_3_string = 1; // 0x219 TMovB
	var_246_bool = 0; // 0x21a PushV
	func_2252(var_246_bool); // 0x21b NEW_2
	if(var_246_bool == 0) goto Label_545; // 0x21d JumpB
	lshStopAnimation(); // 0x21e Func
	goto Label_547; // 0x220 Jump
	
Label_547:
	return 0; // 0x223 Return
	
Label_545:
	StopAnimation(); // 0x221 Func
	
Label_549:
	return 0; // 0x225 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x2c8 PushI
	if(var_28_int == 0) goto Label_788; // 0x2c9 JumpB
	func_2154(); // 0x2cb NEW_2
	var_30_int = 22020; // 0x2cd PushI
	var_31_bool = var_26_bool == var_30_int; // 0x2ce Eq
	if(var_31_bool == 0) goto Label_740; // 0x2cf JumpB
	var_32_string = ""; // 0x2d0 PushV
	var_32_string = "Neutral"; // 0x2d1 MovS
	func_689(var_27_cvector, var_32_string); // 0x2d2 NEW_2
	var_49_int = 520803; // 0x2d4 PushI
	SetMessage(var_49_int); // 0x2d5 TObjFunc
	ClearReplies(); // 0x2d7 TObjFunc
	var_50_int = 520804; // 0x2d9 PushI
	var_51_int = 29221; // 0x2da PushI
	var_52_int = 22021; // 0x2db PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x2dc TObjFunc
	var_53_int = 527876; // 0x2de PushI
	var_54_int = 29224; // 0x2df PushI
	var_55_int = 29223; // 0x2e0 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x2e1 TObjFunc
	return 0; // 0x2e3 Return
	
Label_740:
	var_56_int = 29224; // 0x2e4 PushI
	var_57_bool = var_26_bool == var_56_int; // 0x2e5 Eq
	if(var_57_bool == 0) goto Label_758; // 0x2e6 JumpB
	var_58_string = ""; // 0x2e7 PushV
	var_58_string = "Neutral"; // 0x2e8 MovS
	func_689(var_27_cvector, var_58_string); // 0x2e9 NEW_2
	var_59_int = 527877; // 0x2eb PushI
	SetMessage(var_59_int); // 0x2ec TObjFunc
	ClearReplies(); // 0x2ee TObjFunc
	var_60_int = 527878; // 0x2f0 PushI
	var_61_int = -1; // 0x2f1 PushI
	var_62_int = 29225; // 0x2f2 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x2f3 TObjFunc
	return 0; // 0x2f5 Return
	
Label_758:
	var_63_int = 29221; // 0x2f6 PushI
	var_64_bool = var_26_bool == var_63_int; // 0x2f7 Eq
	if(var_64_bool == 0) goto Label_776; // 0x2f8 JumpB
	var_65_string = ""; // 0x2f9 PushV
	var_65_string = "Neutral"; // 0x2fa MovS
	func_689(var_27_cvector, var_65_string); // 0x2fb NEW_2
	var_66_int = 527874; // 0x2fd PushI
	SetMessage(var_66_int); // 0x2fe TObjFunc
	ClearReplies(); // 0x300 TObjFunc
	var_67_int = 527875; // 0x302 PushI
	var_68_int = -1; // 0x303 PushI
	var_69_int = 29222; // 0x304 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x305 TObjFunc
	return 0; // 0x307 Return
	
Label_776:
	var_3_string = 1; // 0x308 TMovB
	var_70_bool = 0; // 0x309 PushV
	func_2252(var_70_bool); // 0x30a NEW_2
	if(var_70_bool == 0) goto Label_784; // 0x30c JumpB
	lshStopAnimation(); // 0x30d Func
	goto Label_786; // 0x30f Jump
	
Label_786:
	return 0; // 0x312 Return
	
Label_784:
	StopAnimation(); // 0x310 Func
	
Label_788:
	return 0; // 0x314 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x3bc PushI
	if(var_28_int == 0) goto Label_1068; // 0x3bd JumpB
	func_2154(); // 0x3bf NEW_2
	var_30_int = 31849; // 0x3c1 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x3c2 Eq
	if(var_31_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x3c4 PushV
	var_32_object = var_1_object; // 0x3c5 MovT
	var_33_object = var_0_object; // 0x3c6 MovT
	func_2283(); // 0x3c7 NEW_2
	
Label_969:
	var_59_int = 31845; // 0x3c9 PushI
	var_60_bool = var_26_bool == var_59_int; // 0x3ca Eq
	if(var_60_bool == 0) goto Label_997; // 0x3cb JumpB
	var_61_string = ""; // 0x3cc PushV
	var_61_string = "Serious"; // 0x3cd MovS
	func_933(var_27_cvector, var_61_string); // 0x3ce NEW_2
	var_78_int = 530479; // 0x3d0 PushI
	SetMessage(var_78_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_79_bool = 0; var_80_object = Obj(); // 0x3d5 PushV
	var_80_object = var_1_object; // 0x3d6 MovT
	func_2304(var_80_object); // 0x3d7 NEW_2
	if(var_79_bool == 0) goto Label_991; // 0x3d9 JumpB
	var_87_int = 530480; // 0x3da PushI
	var_88_int = 32848; // 0x3db PushI
	var_89_int = 31846; // 0x3dc PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x3dd TObjFunc
	
Label_991:
	var_90_int = 530481; // 0x3df PushI
	var_91_int = -1; // 0x3e0 PushI
	var_92_int = 31847; // 0x3e1 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_93_int = 32848; // 0x3e5 PushI
	var_94_bool = var_26_bool == var_93_int; // 0x3e6 Eq
	if(var_94_bool == 0) goto Label_1020; // 0x3e7 JumpB
	var_95_string = ""; // 0x3e8 PushV
	var_95_string = "Azart"; // 0x3e9 MovS
	func_933(var_27_cvector, var_95_string); // 0x3ea NEW_2
	var_96_int = 531491; // 0x3ec PushI
	SetMessage(var_96_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_97_int = 531493; // 0x3f1 PushI
	var_98_int = 31848; // 0x3f2 PushI
	var_99_int = 32850; // 0x3f3 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x3f4 TObjFunc
	var_100_int = 531492; // 0x3f6 PushI
	var_101_int = 31848; // 0x3f7 PushI
	var_102_int = 32849; // 0x3f8 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x3f9 TObjFunc
	return 0; // 0x3fb Return
	
Label_1020:
	var_103_int = 31848; // 0x3fc PushI
	var_104_bool = var_26_bool == var_103_int; // 0x3fd Eq
	if(var_104_bool == 0) goto Label_1038; // 0x3fe JumpB
	var_105_string = ""; // 0x3ff PushV
	var_105_string = "Azart"; // 0x400 MovS
	func_933(var_27_cvector, var_105_string); // 0x401 NEW_2
	var_106_int = 530482; // 0x403 PushI
	SetMessage(var_106_int); // 0x404 TObjFunc
	ClearReplies(); // 0x406 TObjFunc
	var_107_int = 531494; // 0x408 PushI
	var_108_int = 32853; // 0x409 PushI
	var_109_int = 32852; // 0x40a PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_110_int = 32853; // 0x40e PushI
	var_111_bool = var_26_bool == var_110_int; // 0x40f Eq
	if(var_111_bool == 0) goto Label_1056; // 0x410 JumpB
	var_112_string = ""; // 0x411 PushV
	var_112_string = "Azart"; // 0x412 MovS
	func_933(var_27_cvector, var_112_string); // 0x413 NEW_2
	var_113_int = 531495; // 0x415 PushI
	SetMessage(var_113_int); // 0x416 TObjFunc
	ClearReplies(); // 0x418 TObjFunc
	var_114_int = 530483; // 0x41a PushI
	var_115_int = -1; // 0x41b PushI
	var_116_int = 31849; // 0x41c PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x41d TObjFunc
	return 0; // 0x41f Return
	
Label_1056:
	var_3_string = 1; // 0x420 TMovB
	var_117_bool = 0; // 0x421 PushV
	func_2252(var_117_bool); // 0x422 NEW_2
	if(var_117_bool == 0) goto Label_1064; // 0x424 JumpB
	lshStopAnimation(); // 0x425 Func
	goto Label_1066; // 0x427 Jump
	
Label_1066:
	return 0; // 0x42a Return
	
Label_1064:
	StopAnimation(); // 0x428 Func
	
Label_1068:
	return 0; // 0x42c Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x4d9 PushI
	if(var_28_int == 0) goto Label_1391; // 0x4da JumpB
	func_2154(); // 0x4dc NEW_2
	var_30_int = 36924; // 0x4de PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x4df Eq
	if(var_31_bool == 0) goto Label_1254; // 0x4e0 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x4e1 PushV
	var_32_object = var_1_object; // 0x4e2 MovT
	var_33_object = var_0_object; // 0x4e3 MovT
	func_2298(); // 0x4e4 NEW_2
	
Label_1254:
	var_36_int = 36923; // 0x4e6 PushI
	var_37_bool = var_26_bool == var_36_int; // 0x4e7 Eq
	if(var_37_bool == 0) goto Label_1287; // 0x4e8 JumpB
	var_38_string = ""; // 0x4e9 PushV
	var_38_string = "Secret"; // 0x4ea MovS
	func_1218(var_27_cvector, var_38_string); // 0x4eb NEW_2
	var_55_int = 535248; // 0x4ed PushI
	SetMessage(var_55_int); // 0x4ee TObjFunc
	ClearReplies(); // 0x4f0 TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0x4f2 PushV
	var_57_object = var_1_object; // 0x4f3 MovT
	func_2316(var_57_object); // 0x4f4 NEW_2
	if(var_56_bool == 0) goto Label_1276; // 0x4f6 JumpB
	var_64_int = 535249; // 0x4f7 PushI
	var_65_int = 37070; // 0x4f8 PushI
	var_66_int = 36924; // 0x4f9 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x4fa TObjFunc
	
Label_1276:
	var_67_int = 535387; // 0x4fc PushI
	var_68_int = -1; // 0x4fd PushI
	var_69_int = 37072; // 0x4fe PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x4ff TObjFunc
	var_70_int = 535388; // 0x501 PushI
	var_71_int = -1; // 0x502 PushI
	var_72_int = 37073; // 0x503 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x504 TObjFunc
	return 0; // 0x506 Return
	
Label_1287:
	var_73_int = 37070; // 0x507 PushI
	var_74_bool = var_26_bool == var_73_int; // 0x508 Eq
	if(var_74_bool == 0) goto Label_1305; // 0x509 JumpB
	var_75_string = ""; // 0x50a PushV
	var_75_string = "Serious"; // 0x50b MovS
	func_1218(var_27_cvector, var_75_string); // 0x50c NEW_2
	var_76_int = 535385; // 0x50e PushI
	SetMessage(var_76_int); // 0x50f TObjFunc
	ClearReplies(); // 0x511 TObjFunc
	var_77_int = 535386; // 0x513 PushI
	var_78_int = 37074; // 0x514 PushI
	var_79_int = 37071; // 0x515 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x516 TObjFunc
	return 0; // 0x518 Return
	
Label_1305:
	var_80_int = 37074; // 0x519 PushI
	var_81_bool = var_26_bool == var_80_int; // 0x51a Eq
	if(var_81_bool == 0) goto Label_1328; // 0x51b JumpB
	var_82_string = ""; // 0x51c PushV
	var_82_string = "Serious"; // 0x51d MovS
	func_1218(var_27_cvector, var_82_string); // 0x51e NEW_2
	var_83_int = 535389; // 0x520 PushI
	SetMessage(var_83_int); // 0x521 TObjFunc
	ClearReplies(); // 0x523 TObjFunc
	var_84_int = 535390; // 0x525 PushI
	var_85_int = 37076; // 0x526 PushI
	var_86_int = 37075; // 0x527 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x528 TObjFunc
	var_87_int = 535393; // 0x52a PushI
	var_88_int = -1; // 0x52b PushI
	var_89_int = 37078; // 0x52c PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x52d TObjFunc
	return 0; // 0x52f Return
	
Label_1328:
	var_90_int = 37076; // 0x530 PushI
	var_91_bool = var_26_bool == var_90_int; // 0x531 Eq
	if(var_91_bool == 0) goto Label_1356; // 0x532 JumpB
	var_92_string = ""; // 0x533 PushV
	var_92_string = "Azart"; // 0x534 MovS
	func_1218(var_27_cvector, var_92_string); // 0x535 NEW_2
	var_93_int = 535391; // 0x537 PushI
	SetMessage(var_93_int); // 0x538 TObjFunc
	ClearReplies(); // 0x53a TObjFunc
	var_94_int = 535392; // 0x53c PushI
	var_95_int = 37079; // 0x53d PushI
	var_96_int = 37077; // 0x53e PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x53f TObjFunc
	var_97_int = 535396; // 0x541 PushI
	var_98_int = -1; // 0x542 PushI
	var_99_int = 37081; // 0x543 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x544 TObjFunc
	var_100_int = 535397; // 0x546 PushI
	var_101_int = -1; // 0x547 PushI
	var_102_int = 37082; // 0x548 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x549 TObjFunc
	return 0; // 0x54b Return
	
Label_1356:
	var_103_int = 37079; // 0x54c PushI
	var_104_bool = var_26_bool == var_103_int; // 0x54d Eq
	if(var_104_bool == 0) goto Label_1379; // 0x54e JumpB
	var_105_string = ""; // 0x54f PushV
	var_105_string = "Serious"; // 0x550 MovS
	func_1218(var_27_cvector, var_105_string); // 0x551 NEW_2
	var_106_int = 535394; // 0x553 PushI
	SetMessage(var_106_int); // 0x554 TObjFunc
	ClearReplies(); // 0x556 TObjFunc
	var_107_int = 535395; // 0x558 PushI
	var_108_int = -1; // 0x559 PushI
	var_109_int = 37080; // 0x55a PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x55b TObjFunc
	var_110_int = 535398; // 0x55d PushI
	var_111_int = -1; // 0x55e PushI
	var_112_int = 37083; // 0x55f PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x560 TObjFunc
	return 0; // 0x562 Return
	
Label_1379:
	var_3_string = 1; // 0x563 TMovB
	var_113_bool = 0; // 0x564 PushV
	func_2252(var_113_bool); // 0x565 NEW_2
	if(var_113_bool == 0) goto Label_1387; // 0x567 JumpB
	lshStopAnimation(); // 0x568 Func
	goto Label_1389; // 0x56a Jump
	
Label_1389:
	return 0; // 0x56d Return
	
Label_1387:
	StopAnimation(); // 0x56b Func
	
Label_1391:
	return 0; // 0x56f Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x612 PushI
	if(var_28_int == 0) goto Label_1594; // 0x613 JumpB
	func_2154(); // 0x615 NEW_2
	var_30_int = 42563; // 0x617 PushI
	var_31_bool = var_26_int == var_30_int; // 0x618 Eq
	if(var_31_bool == 0) goto Label_1582; // 0x619 JumpB
	var_32_string = ""; // 0x61a PushV
	var_32_string = "Neutral"; // 0x61b MovS
	func_1531(var_27_cvector, var_32_string); // 0x61c NEW_2
	var_49_int = 540554; // 0x61e PushI
	SetMessage(var_49_int); // 0x61f TObjFunc
	ClearReplies(); // 0x621 TObjFunc
	var_50_int = 540555; // 0x623 PushI
	var_51_int = -1; // 0x624 PushI
	var_52_int = 42564; // 0x625 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x626 TObjFunc
	var_53_int = 540794; // 0x628 PushI
	var_54_int = -1; // 0x629 PushI
	var_55_int = 42843; // 0x62a PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x62b TObjFunc
	return 0; // 0x62d Return
	
Label_1582:
	var_3_string = 1; // 0x62e TMovB
	var_56_bool = 0; // 0x62f PushV
	func_2252(var_56_bool); // 0x630 NEW_2
	if(var_56_bool == 0) goto Label_1590; // 0x632 JumpB
	lshStopAnimation(); // 0x633 Func
	goto Label_1592; // 0x635 Jump
	
Label_1592:
	return 0; // 0x638 Return
	
Label_1590:
	StopAnimation(); // 0x636 Func
	
Label_1594:
	return 0; // 0x63a Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x685 PushI
	var_28_bool = var_26_int == var_27_int; // 0x686 Eq
	if(var_28_bool == 0) goto Label_1705; // 0x687 JumpB
	func_1664(); // 0x689 NEW_2
	var_30_bool = 0; // 0x68b PushV
	var_30_bool = 0; // 0x68c MovB
	var_31_bool = 0; // 0x68d PushV
	func_1878(var_31_bool); // 0x68e NEW_2
	if(var_31_bool == 0) goto Label_1686; // 0x690 JumpB
	var_34_bool = 0; // 0x691 PushV
	func_1633(var_34_bool); // 0x692 NEW_2
	if(var_34_bool == 0) goto Label_1686; // 0x694 JumpB
	var_30_bool = 1; // 0x695 MovB
	
Label_1686:
	if(var_30_bool == 0) goto Label_1699; // 0x696 JumpB
	var_51_bool = 0; // 0x697 PushV
	func_1613(var_51_bool); // 0x698 NEW_2
	if(var_51_bool == 0) goto Label_1698; // 0x69a JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x69b PushV
	var_72_object = Obj(); // 0x69c PushV
	func_2161(var_72_object); // 0x69d NEW_2
	var_71_object = var_72_object; // 0x69e Mov
	func_2028(var_71_object); // 0x6a0 NEW_2
	
Label_1698:
	goto Label_1705; // 0x6a2 Jump
	
Label_1705:
	return 0; // 0x6a9 Return
	
Label_1699:
	func_1628(var_26_int); // 0x6a4 NEW_2
	func_1655(); // 0x6a7 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1846(); // 0x6ab NEW_2
	func_1664(); // 0x6ae NEW_2
	lshStopSpeech(); // 0x6b0 Func
	lshStopAnimation(); // 0x6b2 Func
	StopAsync(); // 0x6b4 Func
	Hold(); // 0x6b6 Func
	return 0; // 0x6b8 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x6b9 Func
	func_1664(); // 0x6bc NEW_2
	var_27_string = ""; // 0x6be PushV
	var_27_string = "Neutral"; // 0x6bf MovS
	func_2108(var_27_string); // 0x6c0 NEW_2
	func_1655(); // 0x6c3 NEW_2
	return 0; // 0x6c5 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x6c7 Push
	if(var_27_bool == 0) goto Label_1741; // 0x6c8 JumpB
	func_1655(); // 0x6ca NEW_2
	goto Label_1745; // 0x6cc Jump
	
Label_1745:
	return 0; // 0x6d1 Return
	
Label_1741:
	var_33_string = ""; // 0x6cd PushV
	var_33_string = "Neutral"; // 0x6ce MovS
	func_2108(var_33_string); // 0x6cf NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x6d2 PushV
	IsOverrideActive(var_28_bool); // 0x6d3 Func
	var_29_bool = var_28_bool == 0; // 0x6d5 Not
	if(var_29_bool == 0) goto Label_1774; // 0x6d6 JumpB
	EventDisable(0); // 0x6d7 EventDisable
	func_1846(); // 0x6d9 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x6db PushV
	var_31_object = var_26_object; // 0x6dc Mov
	func_1869(var_31_object); // 0x6dd NEW_2
	EventEnable(0); // 0x6df EventEnable
	var_44_object = Obj(); // 0x6e0 PushV
	var_44_object = var_26_object; // 0x6e1 Mov
	func_2490(var_44_object); // 0x6e2 NEW_2
	var_569_string = ""; // 0x6e4 PushV
	var_569_string = "Neutral"; // 0x6e5 MovS
	func_2108(var_569_string); // 0x6e6 NEW_2
	func_1664(); // 0x6e9 NEW_2
	func_1655(); // 0x6ec NEW_2
	
Label_1774:
	return 2; // 0x6ee Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1599(var_25_cvector); // 0x63c NEW_2
	return 0; // 0x63e Return
}


func_2304(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0x901 PushV
	var_427_string = "b10q04Spi4kaTalk"; // 0x902 MovS
	func_2177(var_426_int, var_427_string); // 0x903 NEW_2
	var_428_int = 1; // 0x905 PushI
	var_429_bool = var_426_int == var_428_int; // 0x906 Eq
	if(var_429_bool == 0) goto Label_2314; // 0x907 JumpB
	var_424_bool = 1; // 0x908 MovB
	return 0; // 0x909 Return
	
Label_2314:
	var_424_bool = 0; // 0x90a MovB
	return 0; // 0x90b Return
}


func_0(var_0_object, var_280_int, var_281_object)
{
	var_283_object = Obj(); var_284_bool = 0; var_285_int = 0; var_286_bool = 0; var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; // 0x0 PushV
	var_0_object = var_281_object; // 0x1 TMov
	var_291_bool = 0; var_292_object = Obj(); var_293_float = 0; // 0x2 PushV
	var_292_object = var_281_object; // 0x3 Mov
	var_293_float = 70.0; // 0x4 MovF
	func_1883(var_292_object, var_293_float); // 0x5 NEW_2
	var_294_bool = var_291_bool == 0; // 0x7 Not
	if(var_294_bool == 0) goto Label_11; // 0x8 JumpB
	var_280_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_287_object); // 0xb Func
	var_295_int = 0; // 0xd PushV
	func_2246(var_295_int); // 0xe NEW_2
	SetNPCName(var_295_int); // 0x10 ObjFunc
	var_296_int = 0; // 0x12 PushV
	func_2244(var_296_int); // 0x13 NEW_2
	SetNPCDescription(var_296_int); // 0x15 ObjFunc
	var_297_string = ""; // 0x17 PushV
	func_2248(var_297_string); // 0x18 NEW_2
	SetPhoto(var_297_string); // 0x1a ObjFunc
	var_298_string = ""; // 0x1c PushV
	func_2250(var_298_string); // 0x1d NEW_2
	SetPhoto2(var_298_string); // 0x1f ObjFunc
	var_299_int = 0; // 0x21 PushV
	func_2456(var_299_int); // 0x22 NEW_2
	SetPlayerName(var_299_int); // 0x24 ObjFunc
	var_289_int = -1; // 0x26 MovI
	IsOverrideActive(var_288_bool); // 0x27 Func
	var_300_bool = var_288_bool; // 0x29 Push
	if(var_300_bool == 0) goto Label_45; // 0x2a JumpB
	var_280_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_287_object); // 0x2d Func
	var_301_bool = 0; var_302_object = Obj(); // 0x2f PushV
	var_303_object = Obj(); // 0x30 PushV
	func_2161(var_303_object); // 0x31 NEW_2
	var_302_object = var_303_object; // 0x32 Mov
	func_1970(var_301_bool, var_302_object); // 0x34 NEW_2
	var_304_object = Obj(); var_305_object = Obj(); // 0x36 PushV
	var_304_object = var_281_object; // 0x37 Mov
	var_305_object = var_287_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_306_object, var_307_object, var_308_string, var_309_bool, var_304_object, var_305_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_290_bool); // 0x3d ObjFunc
	
Label_63:
	var_380_bool = var_290_bool == 0; // 0x3f Not
	if(var_380_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_290_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_381_object = Obj(); // 0x46 PushV
	var_381_object = var_281_object; // 0x47 Mov
	func_1952(); // 0x48 NEW_2
	StopDialog(var_287_object); // 0x4a Func
	GetReturnValue(var_289_int); // 0x4c ObjFunc
	var_280_int = var_289_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2316(var_488_bool)
{
	var_490_int = 0; var_491_string = ""; // 0x90d PushV
	var_491_string = "oob12Spi4ka1"; // 0x90e MovS
	func_2177(var_490_int, var_491_string); // 0x90f NEW_2
	var_492_int = 0; // 0x911 PushI
	var_493_bool = var_490_int == var_492_int; // 0x912 Eq
	if(var_493_bool == 0) goto Label_2326; // 0x913 JumpB
	var_488_bool = 1; // 0x914 MovB
	return 0; // 0x915 Return
	
Label_2326:
	var_488_bool = 0; // 0x916 MovB
	return 0; // 0x917 Return
}


func_2065(var_164_bool)
{
	var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = ""; // 0x811 PushV
	var_176_string = "d"; // 0x812 PushS
	var_177_int = 0; // 0x813 PushV
	func_2205(var_177_int); // 0x814 NEW_2
	var_183_int = var_176_string + var_177_int; // 0x816 Add
	var_184_string = "m"; // 0x817 PushS
	var_171_string = var_183_int + var_184_string; // 0x818 Add2
	var_172_int = 0; // 0x819 MovI
	
Label_2074:
	var_185_int = 1; // 0x81a PushI
	if(var_185_int == 0) goto Label_2087; // 0x81b JumpB
	var_186_int = 1; // 0x81c PushI
	var_187_int = var_172_int + var_186_int; // 0x81d Add
	var_188_int = var_171_string + var_187_int; // 0x81e Add
	HasProperty(var_188_int, var_173_bool); // 0x81f ObjFunc
	var_189_bool = var_173_bool == 0; // 0x821 Not
	if(var_189_bool == 0) goto Label_2084; // 0x822 JumpB
	goto Label_2087; // 0x823 Jump
	
Label_2087:
	var_190_bool = var_172_int == 0; // 0x827 Not
	if(var_190_bool == 0) goto Label_2091; // 0x828 JumpB
	var_164_bool = 0; // 0x829 MovB
	return 10; // 0x82a Return
	
Label_2091:
	var_174_int = 0; // 0x82b MovI
	var_191_int = 1; // 0x82c PushI
	var_192_bool = var_172_int > var_191_int; // 0x82d GT
	if(var_192_bool == 0) goto Label_2097; // 0x82e JumpB
	irand(var_174_int, var_172_int); // 0x82f Func
	
Label_2097:
	var_193_int = 1; // 0x831 PushI
	var_194_int = var_174_int + var_193_int; // 0x832 Add
	var_195_int = var_171_string + var_194_int; // 0x833 Add
	GetProperty(var_195_int, var_175_string); // 0x834 ObjFunc
	var_196_bool = 0; var_197_string = ""; // 0x836 PushV
	var_197_string = var_175_string; // 0x837 Mov
	func_2139(var_196_bool, var_197_string); // 0x838 NEW_2
	var_164_bool = var_196_bool; // 0x839 Mov
	return 10; // 0x83b Return
	
Label_2084:
	var_198_int = 1; // 0x824 PushI
	var_172_int = var_172_int + var_198_int; // 0x825 Add2
	goto Label_2074; // 0x826 Jump
}


func_789(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; // 0x315 PushV
	var_0_object = var_385_object; // 0x316 TMov
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0; // 0x317 PushV
	var_396_object = var_385_object; // 0x318 Mov
	var_397_float = 70.0; // 0x319 MovF
	func_1883(var_396_object, var_397_float); // 0x31a NEW_2
	var_398_bool = var_395_bool == 0; // 0x31c Not
	if(var_398_bool == 0) goto Label_800; // 0x31d JumpB
	var_384_int = -2; // 0x31e MovI
	return 8; // 0x31f Return
	
Label_800:
	CreateDialog(var_391_object); // 0x320 Func
	var_399_int = 0; // 0x322 PushV
	func_2246(var_399_int); // 0x323 NEW_2
	SetNPCName(var_399_int); // 0x325 ObjFunc
	var_400_int = 0; // 0x327 PushV
	func_2244(var_400_int); // 0x328 NEW_2
	SetNPCDescription(var_400_int); // 0x32a ObjFunc
	var_401_string = ""; // 0x32c PushV
	func_2248(var_401_string); // 0x32d NEW_2
	SetPhoto(var_401_string); // 0x32f ObjFunc
	var_402_string = ""; // 0x331 PushV
	func_2250(var_402_string); // 0x332 NEW_2
	SetPhoto2(var_402_string); // 0x334 ObjFunc
	var_403_int = 0; // 0x336 PushV
	func_2456(var_403_int); // 0x337 NEW_2
	SetPlayerName(var_403_int); // 0x339 ObjFunc
	var_393_int = -1; // 0x33b MovI
	IsOverrideActive(var_392_bool); // 0x33c Func
	var_404_bool = var_392_bool; // 0x33e Push
	if(var_404_bool == 0) goto Label_834; // 0x33f JumpB
	var_384_int = -2; // 0x340 MovI
	return 8; // 0x341 Return
	
Label_834:
	DoDialog(var_391_object); // 0x342 Func
	var_405_bool = 0; var_406_object = Obj(); // 0x344 PushV
	var_407_object = Obj(); // 0x345 PushV
	func_2161(var_407_object); // 0x346 NEW_2
	var_406_object = var_407_object; // 0x347 Mov
	func_1970(var_405_bool, var_406_object); // 0x349 NEW_2
	var_408_object = Obj(); var_409_object = Obj(); // 0x34b PushV
	var_408_object = var_385_object; // 0x34c Mov
	var_409_object = var_391_object; // 0x34d Mov
	TaskCall(5); // 0x34e TaskCall
	func_870(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object); // 0x34f NEW_2
	TaskReturn(); // 0x350 TaskReturn
	IsDialogEnd(var_394_bool); // 0x352 ObjFunc
	
Label_852:
	var_444_bool = var_394_bool == 0; // 0x354 Not
	if(var_444_bool == 0) goto Label_859; // 0x355 JumpB
	sync(); // 0x356 Func
	IsDialogEnd(var_394_bool); // 0x358 ObjFunc
	goto Label_852; // 0x35a Jump
	
Label_859:
	var_445_object = Obj(); // 0x35b PushV
	var_445_object = var_385_object; // 0x35c Mov
	func_1952(); // 0x35d NEW_2
	StopDialog(var_391_object); // 0x35f Func
	GetReturnValue(var_393_int); // 0x361 ObjFunc
	var_384_int = var_393_int; // 0x363 Mov
	return 8; // 0x364 Return
}


func_2328(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x919 PushV
	var_314_string = "oob4Spi4ka1"; // 0x91a MovS
	func_2177(var_313_int, var_314_string); // 0x91b NEW_2
	var_317_int = 0; // 0x91d PushI
	var_318_bool = var_313_int == var_317_int; // 0x91e Eq
	if(var_318_bool == 0) goto Label_2338; // 0x91f JumpB
	var_311_bool = 1; // 0x920 MovB
	return 0; // 0x921 Return
	
Label_2338:
	var_311_bool = 0; // 0x922 MovB
	return 0; // 0x923 Return
}


func_2340(var_352_bool)
{
	var_354_int = 0; var_355_string = ""; // 0x925 PushV
	var_355_string = "b4q02"; // 0x926 MovS
	func_2177(var_354_int, var_355_string); // 0x927 NEW_2
	var_356_int = 0; // 0x929 PushI
	var_357_bool = var_354_int == var_356_int; // 0x92a Eq
	if(var_357_bool == 0) goto Label_2350; // 0x92b JumpB
	var_352_bool = 1; // 0x92c MovB
	return 0; // 0x92d Return
	
Label_2350:
	var_352_bool = 0; // 0x92e MovB
	return 0; // 0x92f Return
}


func_550(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0x226 PushV
	var_0_object = var_51_object; // 0x227 TMov
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0; // 0x228 PushV
	var_62_object = var_51_object; // 0x229 Mov
	var_63_float = 70.0; // 0x22a MovF
	func_1883(var_62_object, var_63_float); // 0x22b NEW_2
	var_108_bool = var_61_bool == 0; // 0x22d Not
	if(var_108_bool == 0) goto Label_561; // 0x22e JumpB
	var_50_int = -2; // 0x22f MovI
	return 8; // 0x230 Return
	
Label_561:
	CreateDialog(var_57_object); // 0x231 Func
	var_109_int = 0; // 0x233 PushV
	func_2246(var_109_int); // 0x234 NEW_2
	SetNPCName(var_109_int); // 0x236 ObjFunc
	var_110_int = 0; // 0x238 PushV
	func_2244(var_110_int); // 0x239 NEW_2
	SetNPCDescription(var_110_int); // 0x23b ObjFunc
	var_111_string = ""; // 0x23d PushV
	func_2248(var_111_string); // 0x23e NEW_2
	SetPhoto(var_111_string); // 0x240 ObjFunc
	var_112_string = ""; // 0x242 PushV
	func_2250(var_112_string); // 0x243 NEW_2
	SetPhoto2(var_112_string); // 0x245 ObjFunc
	var_113_int = 0; // 0x247 PushV
	func_2456(var_113_int); // 0x248 NEW_2
	SetPlayerName(var_113_int); // 0x24a ObjFunc
	var_59_int = -1; // 0x24c MovI
	IsOverrideActive(var_58_bool); // 0x24d Func
	var_121_bool = var_58_bool; // 0x24f Push
	if(var_121_bool == 0) goto Label_595; // 0x250 JumpB
	var_50_int = -2; // 0x251 MovI
	return 8; // 0x252 Return
	
Label_595:
	DoDialog(var_57_object); // 0x253 Func
	var_122_bool = 0; var_123_object = Obj(); // 0x255 PushV
	var_124_object = Obj(); // 0x256 PushV
	func_2161(var_124_object); // 0x257 NEW_2
	var_123_object = var_124_object; // 0x258 Mov
	func_1970(var_122_bool, var_123_object); // 0x25a NEW_2
	var_217_object = Obj(); var_218_object = Obj(); // 0x25c PushV
	var_217_object = var_51_object; // 0x25d Mov
	var_218_object = var_57_object; // 0x25e Mov
	TaskCall(3); // 0x25f TaskCall
	func_631(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object); // 0x260 NEW_2
	TaskReturn(); // 0x261 TaskReturn
	IsDialogEnd(var_60_bool); // 0x263 ObjFunc
	
Label_613:
	var_266_bool = var_60_bool == 0; // 0x265 Not
	if(var_266_bool == 0) goto Label_620; // 0x266 JumpB
	sync(); // 0x267 Func
	IsDialogEnd(var_60_bool); // 0x269 ObjFunc
	goto Label_613; // 0x26b Jump
	
Label_620:
	var_267_object = Obj(); // 0x26c PushV
	var_267_object = var_51_object; // 0x26d Mov
	func_1952(); // 0x26e NEW_2
	StopDialog(var_57_object); // 0x270 Func
	GetReturnValue(var_59_int); // 0x272 ObjFunc
	var_50_int = var_59_int; // 0x274 Mov
	return 8; // 0x275 Return
}


func_1069(var_0_object, var_448_int, var_449_object)
{
	var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0; // 0x42d PushV
	var_0_object = var_449_object; // 0x42e TMov
	var_459_bool = 0; var_460_object = Obj(); var_461_float = 0; // 0x42f PushV
	var_460_object = var_449_object; // 0x430 Mov
	var_461_float = 70.0; // 0x431 MovF
	func_1883(var_460_object, var_461_float); // 0x432 NEW_2
	var_462_bool = var_459_bool == 0; // 0x434 Not
	if(var_462_bool == 0) goto Label_1080; // 0x435 JumpB
	var_448_int = -2; // 0x436 MovI
	return 8; // 0x437 Return
	
Label_1080:
	CreateDialog(var_455_object); // 0x438 Func
	var_463_int = 0; // 0x43a PushV
	func_2246(var_463_int); // 0x43b NEW_2
	SetNPCName(var_463_int); // 0x43d ObjFunc
	var_464_int = 0; // 0x43f PushV
	func_2244(var_464_int); // 0x440 NEW_2
	SetNPCDescription(var_464_int); // 0x442 ObjFunc
	var_465_string = ""; // 0x444 PushV
	func_2248(var_465_string); // 0x445 NEW_2
	SetPhoto(var_465_string); // 0x447 ObjFunc
	var_466_string = ""; // 0x449 PushV
	func_2250(var_466_string); // 0x44a NEW_2
	SetPhoto2(var_466_string); // 0x44c ObjFunc
	var_467_int = 0; // 0x44e PushV
	func_2456(var_467_int); // 0x44f NEW_2
	SetPlayerName(var_467_int); // 0x451 ObjFunc
	var_457_int = -1; // 0x453 MovI
	IsOverrideActive(var_456_bool); // 0x454 Func
	var_468_bool = var_456_bool; // 0x456 Push
	if(var_468_bool == 0) goto Label_1114; // 0x457 JumpB
	var_448_int = -2; // 0x458 MovI
	return 8; // 0x459 Return
	
Label_1114:
	DoDialog(var_455_object); // 0x45a Func
	var_469_bool = 0; var_470_object = Obj(); // 0x45c PushV
	var_471_object = Obj(); // 0x45d PushV
	func_2161(var_471_object); // 0x45e NEW_2
	var_470_object = var_471_object; // 0x45f Mov
	func_1970(var_469_bool, var_470_object); // 0x461 NEW_2
	var_472_object = Obj(); var_473_object = Obj(); // 0x463 PushV
	var_472_object = var_449_object; // 0x464 Mov
	var_473_object = var_455_object; // 0x465 Mov
	TaskCall(7); // 0x466 TaskCall
	func_1150(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object); // 0x467 NEW_2
	TaskReturn(); // 0x468 TaskReturn
	IsDialogEnd(var_458_bool); // 0x46a ObjFunc
	
Label_1132:
	var_511_bool = var_458_bool == 0; // 0x46c Not
	if(var_511_bool == 0) goto Label_1139; // 0x46d JumpB
	sync(); // 0x46e Func
	IsDialogEnd(var_458_bool); // 0x470 ObjFunc
	goto Label_1132; // 0x472 Jump
	
Label_1139:
	var_512_object = Obj(); // 0x473 PushV
	var_512_object = var_449_object; // 0x474 Mov
	func_1952(); // 0x475 NEW_2
	StopDialog(var_455_object); // 0x477 Func
	GetReturnValue(var_457_int); // 0x479 ObjFunc
	var_448_int = var_457_int; // 0x47b Mov
	return 8; // 0x47c Return
}


func_2352(var_362_bool)
{
	var_364_int = 0; var_365_string = ""; // 0x931 PushV
	var_365_string = "oob4Spi4ka2"; // 0x932 MovS
	func_2177(var_364_int, var_365_string); // 0x933 NEW_2
	var_366_int = 0; // 0x935 PushI
	var_367_bool = var_364_int == var_366_int; // 0x936 Eq
	if(var_367_bool == 0) goto Label_2362; // 0x937 JumpB
	var_362_bool = 1; // 0x938 MovB
	return 0; // 0x939 Return
	
Label_2362:
	var_362_bool = 0; // 0x93a MovB
	return 0; // 0x93b Return
}


func_1844(var_64_bool)
{
	var_64_bool = 1; // 0x734 MovB
	return 0; // 0x735 Return
}


func_1846()
{
	StopAnimation(); // 0x736 Func
	StopGroup0(); // 0x738 Func
	return 0; // 0x73a Return
}


func_1851(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x73b PushV
	GetPosition(var_46_cvector); // 0x73c Func
	GetPosition(var_47_cvector); // 0x73e ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x740 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x741 Or2
	return 6; // 0x742 Return
}


func_2108(var_250_string)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0; // 0x83c PushV
	lshHasAnimation(var_254_bool, var_250_string); // 0x83d Func
	var_257_bool = var_254_bool; // 0x83f Push
	if(var_257_bool == 0) goto Label_2119; // 0x840 JumpB
	lshGetAnimTimes(var_250_string, var_255_float, var_256_float); // 0x841 Func
	var_258_bool = 0; // 0x843 PushB
	lshPlayAnimation(var_255_float, var_256_float, var_258_bool); // 0x844 Func
	goto Label_2123; // 0x846 Jump
	
Label_2123:
	return 6; // 0x84b Return
	
Label_2119:
	var_259_string = "Can't find lsh animation : "; // 0x847 PushS
	var_260_int = var_259_string + var_250_string; // 0x848 Add
	Trace(var_260_int); // 0x849 Func
}


func_2364(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0x93d PushV
	var_371_string = "b4q02"; // 0x93e MovS
	func_2177(var_370_int, var_371_string); // 0x93f NEW_2
	var_372_int = 1000; // 0x941 PushI
	var_373_bool = var_370_int == var_372_int; // 0x942 Eq
	if(var_373_bool == 0) goto Label_2374; // 0x943 JumpB
	var_368_bool = 1; // 0x944 MovB
	return 0; // 0x945 Return
	
Label_2374:
	var_368_bool = 0; // 0x946 MovB
	return 0; // 0x947 Return
}


func_1599(var_0_object)
{
	var_26_bool = 0; // 0x63f PushV
	func_1878(var_26_bool); // 0x640 NEW_2
	var_29_bool = var_26_bool == 0; // 0x642 Not
	if(var_29_bool == 0) goto Label_1606; // 0x643 JumpB
	Hold(); // 0x644 Func
	
Label_1606:
	GetDirection(var_0_object); // 0x646 Func
	
Label_1608:
	func_1775(); // 0x649 NEW_2
	goto Label_1608; // 0x64b Jump
}


func_1859(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x743 PushV
	GetPosition(var_39_cvector); // 0x744 Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x746 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x747 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x748 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x749 Func
	var_34_bool = var_41_bool; // 0x74b Mov
	return 6; // 0x74c Return
}


func_2376()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x948 PushV
	var_38_int = 557; // 0x949 PushI
	var_39_int = 2; // 0x94a PushI
	var_40_int = 530536; // 0x94b PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x94c Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x94e PushV
	var_42_object = var_37_object; // 0x94f Mov
	var_43_int = 548; // 0x950 MovI
	func_2428(var_41_bool, var_42_object, var_43_int); // 0x951 NEW_2
	return 2; // 0x953 Return
}


func_2124(var_228_string, var_229_bool)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x84c PushV
	lshHasAnimation(var_235_bool, var_228_string); // 0x84d Func
	var_238_bool = var_235_bool; // 0x84f Push
	if(var_238_bool == 0) goto Label_2134; // 0x850 JumpB
	lshGetAnimTimes(var_228_string, var_236_float, var_237_float); // 0x851 Func
	lshPlayAnimation(var_236_float, var_237_float, var_229_bool); // 0x853 Func
	goto Label_2138; // 0x855 Jump
	
Label_2138:
	return 6; // 0x85a Return
	
Label_2134:
	var_239_string = "Can't find lsh animation : "; // 0x856 PushS
	var_240_int = var_239_string + var_228_string; // 0x857 Add
	Trace(var_240_int); // 0x858 Func
}


func_1869(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x74d PushV
	GetPosition(var_33_cvector); // 0x74e ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x750 PushV
	var_35_cvector = var_33_cvector; // 0x751 Mov
	func_1859(var_34_bool, var_35_cvector); // 0x752 NEW_2
	var_30_bool = var_34_bool; // 0x753 Mov
	return 2; // 0x755 Return
}


func_1613(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x64d PushV
	var_54_string = "player"; // 0x64e PushS
	FindActor(var_53_object, var_54_string); // 0x64f Func
	var_55_bool = var_53_object == 0; // 0x651 Not
	if(var_55_bool == 0) goto Label_1621; // 0x652 JumpB
	var_51_bool = 0; // 0x653 MovB
	return 2; // 0x654 Return
	
Label_1621:
	var_56_bool = 0; var_57_object = Obj(); // 0x655 PushV
	var_57_object = var_53_object; // 0x656 Mov
	func_1869(var_57_object); // 0x657 NEW_2
	var_51_bool = var_56_bool; // 0x658 Mov
	return 2; // 0x65a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_304_object, var_305_object)
{
	var_0_object = var_305_object; // 0x52 TMov
	var_1_object = var_304_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_310_int = 1; // 0x55 PushI
	if(var_310_int == 0) goto Label_168; // 0x56 JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0x57 PushV
	var_312_object = var_1_object; // 0x58 MovT
	func_2328(var_312_object); // 0x59 NEW_2
	if(var_311_bool == 0) goto Label_122; // 0x5b JumpB
	var_319_object = Obj(); var_320_object = Obj(); // 0x5c PushV
	var_319_object = var_1_object; // 0x5d MovT
	var_320_object = var_0_object; // 0x5e MovT
	func_2271(); // 0x5f NEW_2
	var_323_object = Obj(); var_324_object = Obj(); // 0x61 PushV
	var_323_object = var_1_object; // 0x62 MovT
	var_324_object = var_0_object; // 0x63 MovT
	func_2292(); // 0x64 NEW_2
	var_327_string = ""; // 0x66 PushV
	var_327_string = "Azart"; // 0x67 MovS
	func_198(var_305_object, var_327_string); // 0x68 NEW_2
	var_335_int = 518568; // 0x6a PushI
	SetMessage(var_335_int); // 0x6b TObjFunc
	ClearReplies(); // 0x6d TObjFunc
	var_336_int = 518572; // 0x6f PushI
	var_337_int = 20064; // 0x70 PushI
	var_338_int = 19682; // 0x71 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x72 TObjFunc
	var_339_int = 518950; // 0x74 PushI
	var_340_int = 20062; // 0x75 PushI
	var_341_int = 20061; // 0x76 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x77 TObjFunc
	goto Label_168; // 0x79 Jump
	
Label_168:
	var_342_bool = 0; // 0xa8 PushV
	func_2252(var_342_bool); // 0xa9 NEW_2
	if(var_342_bool == 0) goto Label_183; // 0xab JumpB
	
Label_172:
	lshWaitForAnimEnd(); // 0xac Func
	var_343_string = var_3_string; // 0xae PushT
	if(var_343_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_182:
	goto Label_197; // 0xb6 Jump
	
Label_197:
	return 0; // 0xc5 Return
	
Label_177:
	var_344_string = ""; // 0xb1 PushV
	var_344_string = var_2_object; // 0xb2 MovT
	func_2108(var_344_string); // 0xb3 NEW_2
	goto Label_172; // 0xb5 Jump
	
Label_183:
	var_345_string = "all"; // 0xb7 PushS
	var_346_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_345_string, var_346_string); // 0xb9 Func
	
Label_187:
	WaitForAnimEnd(); // 0xbb Func
	var_347_string = var_3_string; // 0xbd PushT
	if(var_347_string == 0) goto Label_192; // 0xbe JumpB
	goto Label_197; // 0xbf Jump
	
Label_192:
	var_348_string = "all"; // 0xc0 PushS
	var_349_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_348_string, var_349_string); // 0xc2 Func
	goto Label_187; // 0xc4 Jump
	
Label_122:
	var_350_string = ""; // 0x7a PushV
	var_350_string = "Secret"; // 0x7b MovS
	func_198(var_305_object, var_350_string); // 0x7c NEW_2
	var_351_int = 518573; // 0x7e PushI
	SetMessage(var_351_int); // 0x7f TObjFunc
	ClearReplies(); // 0x81 TObjFunc
	var_352_bool = 0; var_353_object = Obj(); // 0x83 PushV
	var_353_object = var_1_object; // 0x84 MovT
	func_2340(var_353_object); // 0x85 NEW_2
	if(var_352_bool == 0) goto Label_141; // 0x87 JumpB
	var_358_int = 518574; // 0x88 PushI
	var_359_int = 19688; // 0x89 PushI
	var_360_int = 19684; // 0x8a PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x8b TObjFunc
	
Label_141:
	var_361_bool = 0; // 0x8d PushV
	var_361_bool = 0; // 0x8e MovB
	var_362_bool = 0; var_363_object = Obj(); // 0x8f PushV
	var_363_object = var_1_object; // 0x90 MovT
	func_2352(var_363_object); // 0x91 NEW_2
	if(var_362_bool == 0) goto Label_154; // 0x93 JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x94 PushV
	var_369_object = var_1_object; // 0x95 MovT
	func_2364(var_369_object); // 0x96 NEW_2
	if(var_368_bool == 0) goto Label_154; // 0x98 JumpB
	var_361_bool = 1; // 0x99 MovB
	
Label_154:
	if(var_361_bool == 0) goto Label_160; // 0x9a JumpB
	var_374_int = 518586; // 0x9b PushI
	var_375_int = 19694; // 0x9c PushI
	var_376_int = 19693; // 0x9d PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x9e TObjFunc
	
Label_160:
	var_377_int = 518575; // 0xa0 PushI
	var_378_int = -1; // 0xa1 PushI
	var_379_int = 19685; // 0xa2 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0xa3 TObjFunc
	goto Label_168; // 0xa5 Jump
}


func_2389()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x955 PushV
	var_36_int = 213; // 0x956 PushI
	var_37_int = 2; // 0x957 PushI
	var_38_int = 518576; // 0x958 PushI
	CreateDiaryEntry(var_35_object, var_36_int, var_37_int, var_38_int); // 0x959 Func
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0; // 0x95b PushV
	var_40_object = var_35_object; // 0x95c Mov
	var_41_int = -1; // 0x95d MovI
	func_2428(var_39_bool, var_40_object, var_41_int); // 0x95e NEW_2
	return 2; // 0x960 Return
}


func_1878(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x756 PushV
	IsLoaded(var_28_bool); // 0x757 Func
	var_26_bool = var_28_bool; // 0x759 Mov
	return 2; // 0x75a Return
}


func_1883(var_61_bool, var_63_float)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; // 0x75b PushV
	GetPosition(var_74_cvector); // 0x75c ObjFunc
	GetEyesHeight(var_73_float); // 0x75e ObjFunc
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x760 PushE
	var_82_float = var_82_float + var_73_float; // 0x761 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x762 PopE
	GetPosition(var_75_cvector); // 0x763 Func
	GetEyesHeight(var_73_float); // 0x765 Func
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x767 PushE
	var_83_float = var_83_float + var_73_float; // 0x768 Add2
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x769 PopE
	var_76_cvector = var_74_cvector - var_75_cvector; // 0x76a Sub2
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x76b PushE
	var_84_float = 0; // 0x76c MovI
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x76d PopE
	var_85_int = var_76_cvector | var_76_cvector; // 0x76e Or
	var_86_float = sqrt(var_85_int); // 0x76f Sqrt
	var_76_cvector = var_76_cvector / var_76_cvector; // 0x770 Div2
	var_77_cvector = -var_76_cvector; // 0x771 Neg2
	var_87_float = var_76_cvector * var_63_float; // 0x772 Mult
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x773 PushV
	var_90_cvector = CVector(0.0, 1.0, 0.0); // 0x774 PushVec
	var_89_cvector = var_77_cvector ^ var_90_cvector; // 0x775 Xor2
	func_2167(var_88_cvector, var_89_cvector); // 0x776 NEW_2
	var_96_int = 25; // 0x778 PushI
	var_97_float = var_88_cvector * var_96_int; // 0x779 Mult
	var_98_int = var_87_float + var_97_float; // 0x77a Add
	var_99_cvector = CVector(0.0, 10.0, 0.0); // 0x77b PushVec
	var_78_cvector = var_98_int - var_99_cvector; // 0x77c Sub2
	var_79_cvector = var_75_cvector + var_78_cvector; // 0x77d Add2
	IsOverrideActive(var_80_bool); // 0x77e Func
	var_100_bool = var_80_bool; // 0x780 Push
	if(var_100_bool == 0) goto Label_1924; // 0x781 JumpB
	var_61_bool = 0; // 0x782 MovB
	return 18; // 0x783 Return
	
Label_1924:
	StopWorld(); // 0x784 Func
	var_101_bool = 1; // 0x786 PushB
	CameraTransit(var_79_cvector, var_77_cvector, var_101_bool); // 0x787 Func
	var_102_float = GetByIndex(var_78_cvector, 0); // 0x789 PushE
	var_103_float = GetByIndex(var_78_cvector, 2); // 0x78a PushE
	Rotate(var_102_float, var_103_float); // 0x78b Func
	var_104_bool = 0; // 0x78d PushV
	func_2252(var_104_bool); // 0x78e NEW_2
	if(var_104_bool == 0) goto Label_1938; // 0x790 JumpB
	goto Label_1946; // 0x791 Jump
	
Label_1946:
	CameraWaitForPlayFinish(); // 0x79a Func
	ResumeWorld(); // 0x79c Func
	var_61_bool = 1; // 0x79e MovB
	return 18; // 0x79f Return
	
Label_1938:
	var_105_string = "head"; // 0x792 PushS
	HasAnimationTrack(var_81_bool, var_105_string); // 0x793 Func
	var_106_bool = var_81_bool; // 0x795 Push
	if(var_106_bool == 0) goto Label_1946; // 0x796 JumpB
	var_107_string = "head"; // 0x797 PushS
	LookAsyncCamera(var_107_string); // 0x798 Func
}


func_1628(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x65c PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x65d PushE
	RotateAsync(var_103_float, var_104_float); // 0x65e Func
	return 0; // 0x660 Return
}


func_2139(var_156_bool, var_157_string)
{
	var_158_bool = 0; var_159_bool = 0; // 0x85b PushV
	var_160_bool = 0; // 0x85c PushV
	func_2252(var_160_bool); // 0x85d NEW_2
	if(var_160_bool == 0) goto Label_2152; // 0x85f JumpB
	lshHasSpeech(var_159_bool, var_157_string); // 0x860 Func
	var_161_bool = var_159_bool; // 0x862 Push
	if(var_161_bool == 0) goto Label_2152; // 0x863 JumpB
	lshPlaySpeech(var_157_string); // 0x864 Func
	var_156_bool = 1; // 0x866 MovB
	return 2; // 0x867 Return
	
Label_2152:
	var_156_bool = 0; // 0x868 MovB
	return 2; // 0x869 Return
}


func_1633(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x661 PushV
	var_39_string = "player"; // 0x662 PushS
	FindActor(var_37_object, var_39_string); // 0x663 Func
	var_40_bool = var_37_object == 0; // 0x665 Not
	if(var_40_bool == 0) goto Label_1641; // 0x666 JumpB
	var_34_bool = 0; // 0x667 MovB
	return 4; // 0x668 Return
	
Label_1641:
	var_41_float = 0; var_42_object = Obj(); // 0x669 PushV
	var_42_object = var_37_object; // 0x66a Mov
	func_1851(var_42_object); // 0x66b NEW_2
	var_49_float = 90000.0; // 0x66d PushF
	var_50_bool = var_41_float > var_49_float; // 0x66e GT
	if(var_50_bool == 0) goto Label_1650; // 0x66f JumpB
	var_34_bool = 0; // 0x670 MovB
	return 4; // 0x671 Return
	
Label_1650:
	CanSee(var_38_bool, var_37_object); // 0x672 Func
	var_34_bool = var_38_bool; // 0x674 Mov
	return 4; // 0x675 Return
}


func_2402()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x962 PushV
	var_59_int = 214; // 0x963 PushI
	var_60_int = 2; // 0x964 PushI
	var_61_int = 518577; // 0x965 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0x966 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0x968 PushV
	var_63_object = var_58_object; // 0x969 Mov
	var_64_int = 213; // 0x96a MovI
	func_2428(var_62_bool, var_63_object, var_64_int); // 0x96b NEW_2
	return 2; // 0x96d Return
}


func_870(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object; // 0x367 TMov
	var_1_object = var_408_object; // 0x368 TMov
	var_3_string = 0; // 0x369 TMovB
	var_414_int = 1; // 0x36a PushI
	if(var_414_int == 0) goto Label_903; // 0x36b JumpB
	var_415_string = ""; // 0x36c PushV
	var_415_string = "Serious"; // 0x36d MovS
	func_933(var_409_object, var_415_string); // 0x36e NEW_2
	var_423_int = 530479; // 0x370 PushI
	SetMessage(var_423_int); // 0x371 TObjFunc
	ClearReplies(); // 0x373 TObjFunc
	var_424_bool = 0; var_425_object = Obj(); // 0x375 PushV
	var_425_object = var_1_object; // 0x376 MovT
	func_2304(var_425_object); // 0x377 NEW_2
	if(var_424_bool == 0) goto Label_895; // 0x379 JumpB
	var_430_int = 530480; // 0x37a PushI
	var_431_int = 32848; // 0x37b PushI
	var_432_int = 31846; // 0x37c PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x37d TObjFunc
	
Label_895:
	var_433_int = 530481; // 0x37f PushI
	var_434_int = -1; // 0x380 PushI
	var_435_int = 31847; // 0x381 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x382 TObjFunc
	goto Label_903; // 0x384 Jump
	
Label_903:
	var_436_bool = 0; // 0x387 PushV
	func_2252(var_436_bool); // 0x388 NEW_2
	if(var_436_bool == 0) goto Label_918; // 0x38a JumpB
	
Label_907:
	lshWaitForAnimEnd(); // 0x38b Func
	var_437_string = var_3_string; // 0x38d PushT
	if(var_437_string == 0) goto Label_912; // 0x38e JumpB
	goto Label_917; // 0x38f Jump
	
Label_917:
	goto Label_932; // 0x395 Jump
	
Label_932:
	return 0; // 0x3a4 Return
	
Label_912:
	var_438_string = ""; // 0x390 PushV
	var_438_string = var_2_object; // 0x391 MovT
	func_2108(var_438_string); // 0x392 NEW_2
	goto Label_907; // 0x394 Jump
	
Label_918:
	var_439_string = "all"; // 0x396 PushS
	var_440_string = "idle"; // 0x397 PushS
	PlayAnimation(var_439_string, var_440_string); // 0x398 Func
	
Label_922:
	WaitForAnimEnd(); // 0x39a Func
	var_441_string = var_3_string; // 0x39c PushT
	if(var_441_string == 0) goto Label_927; // 0x39d JumpB
	goto Label_932; // 0x39e Jump
	
Label_927:
	var_442_string = "all"; // 0x39f PushS
	var_443_string = "idle"; // 0x3a0 PushS
	PlayAnimation(var_442_string, var_443_string); // 0x3a1 Func
	goto Label_922; // 0x3a3 Jump
}


func_2154()
{
	var_29_bool = 0; // 0x86a PushV
	func_2252(var_29_bool); // 0x86b NEW_2
	if(var_29_bool == 0) goto Label_2160; // 0x86d JumpB
	lshStopSpeech(); // 0x86e Func
	
Label_2160:
	return 0; // 0x870 Return
}


func_2415(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x96f PushV
	GetDiaryRoot(var_52_object); // 0x970 Func
	var_53_bool = var_52_object == 0; // 0x972 Not
	if(var_53_bool == 0) goto Label_2425; // 0x973 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x974 PushS
	Trace(var_54_string); // 0x975 Func
	var_50_object = 0; // 0x977 MovB
	return 2; // 0x978 Return
	
Label_2425:
	var_50_object = var_52_object; // 0x979 Mov
	return 2; // 0x97a Return
}


func_1392(var_0_object, var_513_int, var_514_object)
{
	var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0; // 0x570 PushV
	var_0_object = var_514_object; // 0x571 TMov
	var_524_bool = 0; var_525_object = Obj(); var_526_float = 0; // 0x572 PushV
	var_525_object = var_514_object; // 0x573 Mov
	var_526_float = 70.0; // 0x574 MovF
	func_1883(var_525_object, var_526_float); // 0x575 NEW_2
	var_527_bool = var_524_bool == 0; // 0x577 Not
	if(var_527_bool == 0) goto Label_1403; // 0x578 JumpB
	var_513_int = -2; // 0x579 MovI
	return 8; // 0x57a Return
	
Label_1403:
	CreateDialog(var_520_object); // 0x57b Func
	var_528_int = 0; // 0x57d PushV
	func_2246(var_528_int); // 0x57e NEW_2
	SetNPCName(var_528_int); // 0x580 ObjFunc
	var_529_int = 0; // 0x582 PushV
	func_2244(var_529_int); // 0x583 NEW_2
	SetNPCDescription(var_529_int); // 0x585 ObjFunc
	var_530_string = ""; // 0x587 PushV
	func_2248(var_530_string); // 0x588 NEW_2
	SetPhoto(var_530_string); // 0x58a ObjFunc
	var_531_string = ""; // 0x58c PushV
	func_2250(var_531_string); // 0x58d NEW_2
	SetPhoto2(var_531_string); // 0x58f ObjFunc
	var_532_int = 0; // 0x591 PushV
	func_2456(var_532_int); // 0x592 NEW_2
	SetPlayerName(var_532_int); // 0x594 ObjFunc
	var_522_int = -1; // 0x596 MovI
	IsOverrideActive(var_521_bool); // 0x597 Func
	var_533_bool = var_521_bool; // 0x599 Push
	if(var_533_bool == 0) goto Label_1437; // 0x59a JumpB
	var_513_int = -2; // 0x59b MovI
	return 8; // 0x59c Return
	
Label_1437:
	DoDialog(var_520_object); // 0x59d Func
	var_534_bool = 0; var_535_object = Obj(); // 0x59f PushV
	var_536_object = Obj(); // 0x5a0 PushV
	func_2161(var_536_object); // 0x5a1 NEW_2
	var_535_object = var_536_object; // 0x5a2 Mov
	func_1970(var_534_bool, var_535_object); // 0x5a4 NEW_2
	var_537_object = Obj(); var_538_object = Obj(); // 0x5a6 PushV
	var_537_object = var_514_object; // 0x5a7 Mov
	var_538_object = var_520_object; // 0x5a8 Mov
	TaskCall(9); // 0x5a9 TaskCall
	func_1473(var_539_object, var_540_object, var_541_string, var_542_bool, var_537_object, var_538_object); // 0x5aa NEW_2
	TaskReturn(); // 0x5ab TaskReturn
	IsDialogEnd(var_523_bool); // 0x5ad ObjFunc
	
Label_1455:
	var_567_bool = var_523_bool == 0; // 0x5af Not
	if(var_567_bool == 0) goto Label_1462; // 0x5b0 JumpB
	sync(); // 0x5b1 Func
	IsDialogEnd(var_523_bool); // 0x5b3 ObjFunc
	goto Label_1455; // 0x5b5 Jump
	
Label_1462:
	var_568_object = Obj(); // 0x5b6 PushV
	var_568_object = var_514_object; // 0x5b7 Mov
	func_1952(); // 0x5b8 NEW_2
	StopDialog(var_520_object); // 0x5ba Func
	GetReturnValue(var_522_int); // 0x5bc ObjFunc
	var_513_int = var_522_int; // 0x5be Mov
	return 8; // 0x5bf Return
}


func_2161(var_124_object)
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x871 PushV
	self(var_126_object); // 0x872 Func
	var_124_object = var_126_object; // 0x874 Mov
	return 2; // 0x875 Return
}


func_1655()
{
	var_571_float = 0; var_572_float = 0; // 0x677 PushV
	var_573_int = 8; // 0x678 PushI
	var_574_int = 16; // 0x679 PushI
	rand(var_572_float, var_573_int, var_574_int); // 0x67a Func
	var_575_int = 10; // 0x67c PushI
	SetTimer(var_575_int, var_572_float); // 0x67d Func
	return 2; // 0x67f Return
}


func_631(var_0_object, var_1_object, var_2_object, var_3_string, var_217_object, var_218_object)
{
	var_0_object = var_218_object; // 0x278 TMov
	var_1_object = var_217_object; // 0x279 TMov
	var_3_string = 0; // 0x27a TMovB
	var_223_int = 1; // 0x27b PushI
	if(var_223_int == 0) goto Label_659; // 0x27c JumpB
	var_224_string = ""; // 0x27d PushV
	var_224_string = "Neutral"; // 0x27e MovS
	func_689(var_218_object, var_224_string); // 0x27f NEW_2
	var_241_int = 520803; // 0x281 PushI
	SetMessage(var_241_int); // 0x282 TObjFunc
	ClearReplies(); // 0x284 TObjFunc
	var_242_int = 520804; // 0x286 PushI
	var_243_int = 29221; // 0x287 PushI
	var_244_int = 22021; // 0x288 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x289 TObjFunc
	var_245_int = 527876; // 0x28b PushI
	var_246_int = 29224; // 0x28c PushI
	var_247_int = 29223; // 0x28d PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x28e TObjFunc
	goto Label_659; // 0x290 Jump
	
Label_659:
	var_248_bool = 0; // 0x293 PushV
	func_2252(var_248_bool); // 0x294 NEW_2
	if(var_248_bool == 0) goto Label_674; // 0x296 JumpB
	
Label_663:
	lshWaitForAnimEnd(); // 0x297 Func
	var_249_string = var_3_string; // 0x299 PushT
	if(var_249_string == 0) goto Label_668; // 0x29a JumpB
	goto Label_673; // 0x29b Jump
	
Label_673:
	goto Label_688; // 0x2a1 Jump
	
Label_688:
	return 0; // 0x2b0 Return
	
Label_668:
	var_250_string = ""; // 0x29c PushV
	var_250_string = var_2_object; // 0x29d MovT
	func_2108(var_250_string); // 0x29e NEW_2
	goto Label_663; // 0x2a0 Jump
	
Label_674:
	var_261_string = "all"; // 0x2a2 PushS
	var_262_string = "idle"; // 0x2a3 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x2a4 Func
	
Label_678:
	WaitForAnimEnd(); // 0x2a6 Func
	var_263_string = var_3_string; // 0x2a8 PushT
	if(var_263_string == 0) goto Label_683; // 0x2a9 JumpB
	goto Label_688; // 0x2aa Jump
	
Label_683:
	var_264_string = "all"; // 0x2ab PushS
	var_265_string = "idle"; // 0x2ac PushS
	PlayAnimation(var_264_string, var_265_string); // 0x2ad Func
	goto Label_678; // 0x2af Jump
}


func_2167(var_88_cvector, var_89_cvector)
{
	var_91_float = 0; var_92_float = 0; // 0x877 PushV
	var_93_int = var_89_cvector | var_89_cvector; // 0x878 Or
	var_92_float = sqrt(var_93_int); // 0x879 Sqrt2
	var_94_float = 0.0; // 0x87a PushF
	var_95_bool = var_92_float < var_94_float; // 0x87b LT
	if(var_95_bool == 0) goto Label_2175; // 0x87c JumpB
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x87d MovV
	return 2; // 0x87e Return
	
Label_2175:
	var_88_cvector = var_89_cvector / var_89_cvector; // 0x87f Div2
	return 2; // 0x880 Return
}


func_2428(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x97c PushV
	var_50_object = Obj(); // 0x97d PushV
	func_2415(var_50_object); // 0x97e NEW_2
	var_47_object = var_50_object; // 0x97f Mov
	Find(var_43_int, var_48_object); // 0x981 ObjFunc
	var_55_bool = var_48_object == 0; // 0x983 Not
	if(var_55_bool == 0) goto Label_2443; // 0x984 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x985 PushS
	var_57_int = var_56_string + var_43_int; // 0x986 Add
	Trace(var_57_int); // 0x987 Func
	var_41_bool = 0; // 0x989 MovB
	return 6; // 0x98a Return
	
Label_2443:
	AddChild(var_42_object); // 0x98b ObjFunc
	var_58_int = 7; // 0x98d PushI
	SendWorldWndMessage(var_58_int); // 0x98e Func
	GetCategory(var_49_int); // 0x990 ObjFunc
	SetDiarySection(var_49_int); // 0x992 Func
	var_41_bool = 0; // 0x994 MovB
	return 6; // 0x995 Return
}


func_1150(var_0_object, var_1_object, var_2_object, var_3_string, var_472_object, var_473_object)
{
	var_0_object = var_473_object; // 0x47f TMov
	var_1_object = var_472_object; // 0x480 TMov
	var_3_string = 0; // 0x481 TMovB
	var_478_int = 1; // 0x482 PushI
	if(var_478_int == 0) goto Label_1188; // 0x483 JumpB
	var_479_string = ""; // 0x484 PushV
	var_479_string = "Secret"; // 0x485 MovS
	func_1218(var_473_object, var_479_string); // 0x486 NEW_2
	var_487_int = 535248; // 0x488 PushI
	SetMessage(var_487_int); // 0x489 TObjFunc
	ClearReplies(); // 0x48b TObjFunc
	var_488_bool = 0; var_489_object = Obj(); // 0x48d PushV
	var_489_object = var_1_object; // 0x48e MovT
	func_2316(var_489_object); // 0x48f NEW_2
	if(var_488_bool == 0) goto Label_1175; // 0x491 JumpB
	var_494_int = 535249; // 0x492 PushI
	var_495_int = 37070; // 0x493 PushI
	var_496_int = 36924; // 0x494 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x495 TObjFunc
	
Label_1175:
	var_497_int = 535387; // 0x497 PushI
	var_498_int = -1; // 0x498 PushI
	var_499_int = 37072; // 0x499 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x49a TObjFunc
	var_500_int = 535388; // 0x49c PushI
	var_501_int = -1; // 0x49d PushI
	var_502_int = 37073; // 0x49e PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x49f TObjFunc
	goto Label_1188; // 0x4a1 Jump
	
Label_1188:
	var_503_bool = 0; // 0x4a4 PushV
	func_2252(var_503_bool); // 0x4a5 NEW_2
	if(var_503_bool == 0) goto Label_1203; // 0x4a7 JumpB
	
Label_1192:
	lshWaitForAnimEnd(); // 0x4a8 Func
	var_504_string = var_3_string; // 0x4aa PushT
	if(var_504_string == 0) goto Label_1197; // 0x4ab JumpB
	goto Label_1202; // 0x4ac Jump
	
Label_1202:
	goto Label_1217; // 0x4b2 Jump
	
Label_1217:
	return 0; // 0x4c1 Return
	
Label_1197:
	var_505_string = ""; // 0x4ad PushV
	var_505_string = var_2_object; // 0x4ae MovT
	func_2108(var_505_string); // 0x4af NEW_2
	goto Label_1192; // 0x4b1 Jump
	
Label_1203:
	var_506_string = "all"; // 0x4b3 PushS
	var_507_string = "idle"; // 0x4b4 PushS
	PlayAnimation(var_506_string, var_507_string); // 0x4b5 Func
	
Label_1207:
	WaitForAnimEnd(); // 0x4b7 Func
	var_508_string = var_3_string; // 0x4b9 PushT
	if(var_508_string == 0) goto Label_1212; // 0x4ba JumpB
	goto Label_1217; // 0x4bb Jump
	
Label_1212:
	var_509_string = "all"; // 0x4bc PushS
	var_510_string = "idle"; // 0x4bd PushS
	PlayAnimation(var_509_string, var_510_string); // 0x4be Func
	goto Label_1207; // 0x4c0 Jump
}


func_1664()
{
	var_570_int = 10; // 0x680 PushI
	KillTimer(var_570_int); // 0x681 Func
	return 0; // 0x683 Return
}


func_2177(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0; // 0x881 PushV
	GetVariable(var_314_string, var_316_int); // 0x882 Func
	var_313_int = var_316_int; // 0x884 Mov
	return 2; // 0x885 Return
}


func_2182(var_65_object, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x886 PushV
	GetMainOutdoorScene(var_69_object); // 0x887 Func
	var_71_string = ".bin"; // 0x889 PushS
	var_72_int = var_66_string + var_71_string; // 0x88a Add
	AddBlankActor(var_70_object, var_69_object, var_66_string, var_72_int); // 0x88b Func
	var_65_object = var_70_object; // 0x88d Mov
	return 4; // 0x88e Return
}


func_2193(var_73_bool, var_74_string, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x891 PushV
	FindActor(var_77_object, var_74_string); // 0x892 Func
	var_78_bool = var_77_object == 0; // 0x894 NullEq
	if(var_78_bool == 0) goto Label_2200; // 0x895 JumpB
	var_73_bool = 0; // 0x896 MovB
	return 2; // 0x897 Return
	
Label_2200:
	Trigger(var_77_object, var_75_string); // 0x898 Func
	var_73_bool = 1; // 0x89a MovB
	return 2; // 0x89b Return
}


func_2456(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x998 PushV
	var_116_string = "branch"; // 0x999 PushS
	GetVariable(var_116_string, var_115_int); // 0x99a Func
	var_117_int = 0; // 0x99c PushI
	var_118_bool = var_115_int == var_117_int; // 0x99d Eq
	if(var_118_bool == 0) goto Label_2466; // 0x99e JumpB
	var_113_int = 1; // 0x99f MovI
	return 2; // 0x9a0 Return
	
Label_2466:
	var_119_int = 1; // 0x9a2 PushI
	var_120_bool = var_115_int == var_119_int; // 0x9a3 Eq
	if(var_120_bool == 0) goto Label_2471; // 0x9a4 JumpB
	var_113_int = 2; // 0x9a5 MovI
	return 2; // 0x9a6 Return
	
Label_2471:
	var_113_int = 3; // 0x9a7 MovI
	return 2; // 0x9a8 Return
}


func_2205(var_177_int)
{
	var_178_float = 0; var_179_float = 0; // 0x89d PushV
	GetGameTime(var_179_float); // 0x89e Func
	var_180_int = 1; // 0x8a0 PushI
	var_181_int = 0; // 0x8a1 PushV
	var_182_int = 24; // 0x8a2 PushI
	var_181_int = var_179_float / var_179_float; // 0x8a3 Div2
	var_177_int = var_180_int + var_181_int; // 0x8a4 Add2
	return 2; // 0x8a5 Return
}


func_1952()
{
	var_268_bool = 0; var_269_bool = 0; // 0x7a0 PushV
	var_270_bool = 1; // 0x7a1 PushB
	CameraSwitchToNormal(var_270_bool); // 0x7a2 Func
	var_271_bool = 0; // 0x7a4 PushV
	func_2252(var_271_bool); // 0x7a5 NEW_2
	if(var_271_bool == 0) goto Label_1961; // 0x7a7 JumpB
	goto Label_1969; // 0x7a8 Jump
	
Label_1969:
	return 2; // 0x7b1 Return
	
Label_1961:
	var_272_string = "head"; // 0x7a9 PushS
	HasAnimationTrack(var_269_bool, var_272_string); // 0x7aa Func
	var_273_bool = var_269_bool; // 0x7ac Push
	if(var_273_bool == 0) goto Label_1969; // 0x7ad JumpB
	var_274_string = "head"; // 0x7ae PushS
	UnlookAsync(var_274_string); // 0x7af Func
}


func_933(var_2_object, var_415_string)
{
	var_416_bool = 0; // 0x3a6 PushV
	func_2252(var_416_bool); // 0x3a7 NEW_2
	var_417_bool = var_416_bool == 0; // 0x3a9 Not
	if(var_417_bool == 0) goto Label_940; // 0x3aa JumpB
	return 0; // 0x3ab Return
	
Label_940:
	var_418_bool = var_415_string == var_2_object; // 0x3ac Eq
	if(var_418_bool == 0) goto Label_943; // 0x3ad JumpB
	return 0; // 0x3ae Return
	
Label_943:
	var_419_string = ""; var_420_bool = 0; // 0x3af PushV
	var_419_string = var_415_string; // 0x3b0 Mov
	var_421_string = ""; // 0x3b1 PushS
	var_422_bool = var_415_string == var_421_string; // 0x3b2 Eq
	if(var_422_bool == 0) goto Label_950; // 0x3b3 JumpB
	var_420_bool = 0; // 0x3b4 MovB
	goto Label_951; // 0x3b5 Jump
	
Label_951:
	func_2124(var_419_string, var_420_bool); // 0x3b7 NEW_2
	var_2_object = var_415_string; // 0x3b9 TMov
	return 0; // 0x3ba Return
	
Label_950:
	var_420_bool = 1; // 0x3b6 MovB
}


func_2214(var_277_bool, var_278_int)
{
	var_279_int = 0; // 0x8a7 PushV
	func_2205(var_279_int); // 0x8a8 NEW_2
	var_277_bool = var_279_int == var_278_int; // 0x8aa Eq2
	return 0; // 0x8ab Return
}


func_2473(var_45_object)
{
	var_46_int = 0; var_47_int = 0; // 0x9a9 PushV
	var_48_string = "mt_spi4ka"; // 0x9aa PushS
	GetVariable(var_48_string, var_47_int); // 0x9ab Func
	var_49_bool = var_47_int == 0; // 0x9ad Not
	if(var_49_bool == 0) goto Label_2489; // 0x9ae JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x9af PushV
	var_51_object = var_45_object; // 0x9b0 Mov
	TaskCall(2); // 0x9b1 TaskCall
	func_550(var_52_object, var_50_int, var_51_object); // 0x9b2 NEW_2
	TaskReturn(); // 0x9b3 TaskReturn
	var_275_string = "mt_spi4ka"; // 0x9b5 PushS
	var_276_int = 1; // 0x9b6 PushI
	SetVariable(var_275_string, var_276_int); // 0x9b7 Func
	
Label_2489:
	return 2; // 0x9b9 Return
}


func_2220(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0x8ac PushV
	var_53_string = "idle"; // 0x8ad MovS
	var_54_int = var_51_int; // 0x8ae Push
	if(var_54_int == 0) goto Label_2225; // 0x8af JumpB
	var_53_string = var_53_string + var_51_int; // 0x8b0 Add2
	
Label_2225:
	var_50_string = var_53_string; // 0x8b1 Mov
	return 2; // 0x8b2 Return
}


func_689(var_2_object, var_224_string)
{
	var_225_bool = 0; // 0x2b2 PushV
	func_2252(var_225_bool); // 0x2b3 NEW_2
	var_226_bool = var_225_bool == 0; // 0x2b5 Not
	if(var_226_bool == 0) goto Label_696; // 0x2b6 JumpB
	return 0; // 0x2b7 Return
	
Label_696:
	var_227_bool = var_224_string == var_2_object; // 0x2b8 Eq
	if(var_227_bool == 0) goto Label_699; // 0x2b9 JumpB
	return 0; // 0x2ba Return
	
Label_699:
	var_228_string = ""; var_229_bool = 0; // 0x2bb PushV
	var_228_string = var_224_string; // 0x2bc Mov
	var_230_string = ""; // 0x2bd PushS
	var_231_bool = var_224_string == var_230_string; // 0x2be Eq
	if(var_231_bool == 0) goto Label_706; // 0x2bf JumpB
	var_229_bool = 0; // 0x2c0 MovB
	goto Label_707; // 0x2c1 Jump
	
Label_707:
	func_2124(var_228_string, var_229_bool); // 0x2c3 NEW_2
	var_2_object = var_224_string; // 0x2c5 TMov
	return 0; // 0x2c6 Return
	
Label_706:
	var_229_bool = 1; // 0x2c2 MovB
}


func_1970(var_122_bool, var_123_object)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; // 0x7b2 PushV
	var_131_string = "voice_common"; // 0x7b3 PushS
	GetVariable(var_131_string, var_129_int); // 0x7b4 Func
	var_132_int = var_129_int; // 0x7b6 Push
	if(var_132_int == 0) goto Label_2008; // 0x7b7 JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x7b8 PushV
	var_134_object = var_123_object; // 0x7b9 Mov
	func_2028(var_134_object); // 0x7ba NEW_2
	var_163_bool = var_133_bool == 0; // 0x7bc Not
	if(var_163_bool == 0) goto Label_1990; // 0x7bd JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x7be PushV
	var_165_object = var_123_object; // 0x7bf Mov
	func_2065(var_165_object); // 0x7c0 NEW_2
	var_199_bool = var_164_bool == 0; // 0x7c2 Not
	if(var_199_bool == 0) goto Label_1990; // 0x7c3 JumpB
	var_122_bool = 0; // 0x7c4 MovB
	return 4; // 0x7c5 Return
	
Label_1990:
	var_200_int = 2; // 0x7c6 PushI
	irand(var_130_int, var_200_int); // 0x7c7 Func
	var_201_int = var_130_int; // 0x7c9 Push
	if(var_201_int == 0) goto Label_2003; // 0x7ca JumpB
	var_202_string = "voice_common"; // 0x7cb PushS
	var_203_int = 1; // 0x7cc PushI
	var_204_int = var_129_int + var_203_int; // 0x7cd Add
	var_205_int = 3; // 0x7ce PushI
	var_206_int = var_204_int / var_205_int; // 0x7cf Mod
	SetVariable(var_202_string, var_206_int); // 0x7d0 Func
	goto Label_2007; // 0x7d2 Jump
	
Label_2007:
	goto Label_2026; // 0x7d7 Jump
	
Label_2026:
	var_122_bool = 1; // 0x7ea MovB
	return 4; // 0x7eb Return
	
Label_2003:
	var_207_string = "voice_common"; // 0x7d3 PushS
	var_208_int = 0; // 0x7d4 PushI
	SetVariable(var_207_string, var_208_int); // 0x7d5 Func
	
Label_2008:
	var_209_bool = 0; var_210_object = Obj(); // 0x7d8 PushV
	var_210_object = var_123_object; // 0x7d9 Mov
	func_2065(var_210_object); // 0x7da NEW_2
	var_211_bool = var_209_bool == 0; // 0x7dc Not
	if(var_211_bool == 0) goto Label_2022; // 0x7dd JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x7de PushV
	var_213_object = var_123_object; // 0x7df Mov
	func_2028(var_213_object); // 0x7e0 NEW_2
	var_214_bool = var_212_bool == 0; // 0x7e2 Not
	if(var_214_bool == 0) goto Label_2022; // 0x7e3 JumpB
	var_122_bool = 0; // 0x7e4 MovB
	return 4; // 0x7e5 Return
	
Label_2022:
	var_215_string = "voice_common"; // 0x7e6 PushS
	var_216_int = 1; // 0x7e7 PushI
	SetVariable(var_215_string, var_216_int); // 0x7e8 Func
}


func_2227(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0x8b3 PushV
	var_47_int = 0; // 0x8b4 MovI
	
Label_2229:
	var_49_string = "all"; // 0x8b5 PushS
	var_50_string = ""; var_51_int = 0; // 0x8b6 PushV
	var_51_int = var_47_int; // 0x8b7 Mov
	func_2220(var_50_string, var_51_int); // 0x8b8 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0x8ba Func
	var_55_bool = var_48_bool == 0; // 0x8bc Not
	if(var_55_bool == 0) goto Label_2239; // 0x8bd JumpB
	goto Label_2242; // 0x8be Jump
	
Label_2242:
	var_44_int = var_47_int; // 0x8c2 Mov
	return 4; // 0x8c3 Return
	
Label_2239:
	var_56_int = 1; // 0x8bf PushI
	var_47_int = var_47_int + var_56_int; // 0x8c0 Add2
	goto Label_2229; // 0x8c1 Jump
}


func_2490(var_44_object)
{
	var_45_object = Obj(); // 0x9bb PushV
	var_45_object = var_44_object; // 0x9bc Mov
	func_2473(var_45_object); // 0x9bd NEW_2
	var_277_bool = 0; var_278_int = 0; // 0x9bf PushV
	var_278_int = 4; // 0x9c0 MovI
	func_2214(var_277_bool, var_278_int); // 0x9c1 NEW_2
	if(var_277_bool == 0) goto Label_2507; // 0x9c3 JumpB
	var_280_int = 0; var_281_object = Obj(); // 0x9c4 PushV
	var_281_object = var_44_object; // 0x9c5 Mov
	TaskCall(0); // 0x9c6 TaskCall
	func_0(var_282_object, var_280_int, var_281_object); // 0x9c7 NEW_2
	TaskReturn(); // 0x9c8 TaskReturn
	return 0; // 0x9ca Return
	
Label_2507:
	var_382_bool = 0; var_383_int = 0; // 0x9cb PushV
	var_383_int = 10; // 0x9cc MovI
	func_2214(var_382_bool, var_383_int); // 0x9cd NEW_2
	if(var_382_bool == 0) goto Label_2519; // 0x9cf JumpB
	var_384_int = 0; var_385_object = Obj(); // 0x9d0 PushV
	var_385_object = var_44_object; // 0x9d1 Mov
	TaskCall(4); // 0x9d2 TaskCall
	func_789(var_386_object, var_384_int, var_385_object); // 0x9d3 NEW_2
	TaskReturn(); // 0x9d4 TaskReturn
	return 0; // 0x9d6 Return
	
Label_2519:
	var_446_bool = 0; var_447_int = 0; // 0x9d7 PushV
	var_447_int = 12; // 0x9d8 MovI
	func_2214(var_446_bool, var_447_int); // 0x9d9 NEW_2
	if(var_446_bool == 0) goto Label_2531; // 0x9db JumpB
	var_448_int = 0; var_449_object = Obj(); // 0x9dc PushV
	var_449_object = var_44_object; // 0x9dd Mov
	TaskCall(6); // 0x9de TaskCall
	func_1069(var_450_object, var_448_int, var_449_object); // 0x9df NEW_2
	TaskReturn(); // 0x9e0 TaskReturn
	return 0; // 0x9e2 Return
	
Label_2531:
	var_513_int = 0; var_514_object = Obj(); // 0x9e3 PushV
	var_514_object = var_44_object; // 0x9e4 Mov
	TaskCall(8); // 0x9e5 TaskCall
	func_1392(var_515_object, var_513_int, var_514_object); // 0x9e6 NEW_2
	TaskReturn(); // 0x9e7 TaskReturn
	return 0; // 0x9e9 Return
}


func_1473(var_0_object, var_1_object, var_2_object, var_3_string, var_537_object, var_538_object)
{
	var_0_object = var_538_object; // 0x5c2 TMov
	var_1_object = var_537_object; // 0x5c3 TMov
	var_3_string = 0; // 0x5c4 TMovB
	var_543_int = 1; // 0x5c5 PushI
	if(var_543_int == 0) goto Label_1501; // 0x5c6 JumpB
	var_544_string = ""; // 0x5c7 PushV
	var_544_string = "Neutral"; // 0x5c8 MovS
	func_1531(var_538_object, var_544_string); // 0x5c9 NEW_2
	var_552_int = 540554; // 0x5cb PushI
	SetMessage(var_552_int); // 0x5cc TObjFunc
	ClearReplies(); // 0x5ce TObjFunc
	var_553_int = 540555; // 0x5d0 PushI
	var_554_int = -1; // 0x5d1 PushI
	var_555_int = 42564; // 0x5d2 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x5d3 TObjFunc
	var_556_int = 540794; // 0x5d5 PushI
	var_557_int = -1; // 0x5d6 PushI
	var_558_int = 42843; // 0x5d7 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x5d8 TObjFunc
	goto Label_1501; // 0x5da Jump
	
Label_1501:
	var_559_bool = 0; // 0x5dd PushV
	func_2252(var_559_bool); // 0x5de NEW_2
	if(var_559_bool == 0) goto Label_1516; // 0x5e0 JumpB
	
Label_1505:
	lshWaitForAnimEnd(); // 0x5e1 Func
	var_560_string = var_3_string; // 0x5e3 PushT
	if(var_560_string == 0) goto Label_1510; // 0x5e4 JumpB
	goto Label_1515; // 0x5e5 Jump
	
Label_1515:
	goto Label_1530; // 0x5eb Jump
	
Label_1530:
	return 0; // 0x5fa Return
	
Label_1510:
	var_561_string = ""; // 0x5e6 PushV
	var_561_string = var_2_object; // 0x5e7 MovT
	func_2108(var_561_string); // 0x5e8 NEW_2
	goto Label_1505; // 0x5ea Jump
	
Label_1516:
	var_562_string = "all"; // 0x5ec PushS
	var_563_string = "idle"; // 0x5ed PushS
	PlayAnimation(var_562_string, var_563_string); // 0x5ee Func
	
Label_1520:
	WaitForAnimEnd(); // 0x5f0 Func
	var_564_string = var_3_string; // 0x5f2 PushT
	if(var_564_string == 0) goto Label_1525; // 0x5f3 JumpB
	goto Label_1530; // 0x5f4 Jump
	
Label_1525:
	var_565_string = "all"; // 0x5f5 PushS
	var_566_string = "idle"; // 0x5f6 PushS
	PlayAnimation(var_565_string, var_566_string); // 0x5f7 Func
	goto Label_1520; // 0x5f9 Jump
}


func_1218(var_2_object, var_479_string)
{
	var_480_bool = 0; // 0x4c3 PushV
	func_2252(var_480_bool); // 0x4c4 NEW_2
	var_481_bool = var_480_bool == 0; // 0x4c6 Not
	if(var_481_bool == 0) goto Label_1225; // 0x4c7 JumpB
	return 0; // 0x4c8 Return
	
Label_1225:
	var_482_bool = var_479_string == var_2_object; // 0x4c9 Eq
	if(var_482_bool == 0) goto Label_1228; // 0x4ca JumpB
	return 0; // 0x4cb Return
	
Label_1228:
	var_483_string = ""; var_484_bool = 0; // 0x4cc PushV
	var_483_string = var_479_string; // 0x4cd Mov
	var_485_string = ""; // 0x4ce PushS
	var_486_bool = var_479_string == var_485_string; // 0x4cf Eq
	if(var_486_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_484_bool = 0; // 0x4d1 MovB
	goto Label_1236; // 0x4d2 Jump
	
Label_1236:
	func_2124(var_483_string, var_484_bool); // 0x4d4 NEW_2
	var_2_object = var_479_string; // 0x4d6 TMov
	return 0; // 0x4d7 Return
	
Label_1235:
	var_484_bool = 1; // 0x4d3 MovB
}


func_2244(var_110_int)
{
	var_110_int = 515552; // 0x8c4 MovI
	return 0; // 0x8c5 Return
}


func_2246(var_109_int)
{
	var_109_int = 502877; // 0x8c6 MovI
	return 0; // 0x8c7 Return
}


func_198(var_2_object, var_327_string)
{
	var_328_bool = 0; // 0xc7 PushV
	func_2252(var_328_bool); // 0xc8 NEW_2
	var_329_bool = var_328_bool == 0; // 0xca Not
	if(var_329_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_330_bool = var_327_string == var_2_object; // 0xcd Eq
	if(var_330_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_331_string = ""; var_332_bool = 0; // 0xd0 PushV
	var_331_string = var_327_string; // 0xd1 Mov
	var_333_string = ""; // 0xd2 PushS
	var_334_bool = var_327_string == var_333_string; // 0xd3 Eq
	if(var_334_bool == 0) goto Label_215; // 0xd4 JumpB
	var_332_bool = 0; // 0xd5 MovB
	goto Label_216; // 0xd6 Jump
	
Label_216:
	func_2124(var_331_string, var_332_bool); // 0xd8 NEW_2
	var_2_object = var_327_string; // 0xda TMov
	return 0; // 0xdb Return
	
Label_215:
	var_332_bool = 1; // 0xd7 MovB
}


func_2248(var_111_string)
{
	var_111_string = "ui/NPC_Spi4ka.png"; // 0x8c8 MovS
	return 0; // 0x8c9 Return
}


func_2250(var_112_string)
{
	var_112_string = "ui/NPC_Spi4ka_b.png"; // 0x8ca MovS
	return 0; // 0x8cb Return
}


func_2252(var_104_bool)
{
	var_104_bool = 1; // 0x8cc MovB
	return 0; // 0x8cd Return
}


func_2254()
{
	func_2389(); // 0x8d0 NEW_2
	func_2402(); // 0x8d3 NEW_2
	var_65_object = Obj(); var_66_string = ""; // 0x8d5 PushV
	var_66_string = "quest_b4_02"; // 0x8d6 MovS
	func_2182(var_65_object, var_66_string); // 0x8d7 NEW_2
	var_73_bool = 0; var_74_string = ""; var_75_string = ""; // 0x8d9 PushV
	var_74_string = "quest_b4_02"; // 0x8da MovS
	var_75_string = "place_boy"; // 0x8db MovS
	func_2193(var_73_bool, var_74_string, var_75_string); // 0x8dc NEW_2
	return 0; // 0x8de Return
}


func_2271()
{
	var_321_string = "oob4Spi4ka1"; // 0x8e0 PushS
	var_322_int = 1; // 0x8e1 PushI
	SetVariable(var_321_string, var_322_int); // 0x8e2 Func
	return 0; // 0x8e4 Return
}


func_2277()
{
	var_87_string = "oob4Spi4ka2"; // 0x8e6 PushS
	var_88_int = 1; // 0x8e7 PushI
	SetVariable(var_87_string, var_88_int); // 0x8e8 Func
	return 0; // 0x8ea Return
}


func_2283()
{
	var_34_string = "b10q04Spi4kaTalk"; // 0x8ec PushS
	var_35_int = 9; // 0x8ed PushI
	SetVariable(var_34_string, var_35_int); // 0x8ee Func
	func_2376(); // 0x8f1 NEW_2
	return 0; // 0x8f3 Return
}


func_2028(var_133_bool)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; // 0x7ec PushV
	var_140_string = "c"; // 0x7ed MovS
	var_141_int = 0; // 0x7ee MovI
	
Label_2031:
	var_145_int = 1; // 0x7ef PushI
	if(var_145_int == 0) goto Label_2044; // 0x7f0 JumpB
	var_146_int = 1; // 0x7f1 PushI
	var_147_int = var_141_int + var_146_int; // 0x7f2 Add
	var_148_int = var_140_string + var_147_int; // 0x7f3 Add
	HasProperty(var_148_int, var_142_bool); // 0x7f4 ObjFunc
	var_149_bool = var_142_bool == 0; // 0x7f6 Not
	if(var_149_bool == 0) goto Label_2041; // 0x7f7 JumpB
	goto Label_2044; // 0x7f8 Jump
	
Label_2044:
	var_150_bool = var_141_int == 0; // 0x7fc Not
	if(var_150_bool == 0) goto Label_2048; // 0x7fd JumpB
	var_133_bool = 0; // 0x7fe MovB
	return 10; // 0x7ff Return
	
Label_2048:
	var_143_int = 0; // 0x800 MovI
	var_151_int = 1; // 0x801 PushI
	var_152_bool = var_141_int > var_151_int; // 0x802 GT
	if(var_152_bool == 0) goto Label_2054; // 0x803 JumpB
	irand(var_143_int, var_141_int); // 0x804 Func
	
Label_2054:
	var_153_int = 1; // 0x806 PushI
	var_154_int = var_143_int + var_153_int; // 0x807 Add
	var_155_int = var_140_string + var_154_int; // 0x808 Add
	GetProperty(var_155_int, var_144_string); // 0x809 ObjFunc
	var_156_bool = 0; var_157_string = ""; // 0x80b PushV
	var_157_string = var_144_string; // 0x80c Mov
	func_2139(var_156_bool, var_157_string); // 0x80d NEW_2
	var_133_bool = var_156_bool; // 0x80e Mov
	return 10; // 0x810 Return
	
Label_2041:
	var_162_int = 1; // 0x7f9 PushI
	var_141_int = var_141_int + var_162_int; // 0x7fa Add2
	goto Label_2031; // 0x7fb Jump
}


func_1775()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x6ef PushV
	WaitForAnimEnd(); // 0x6f0 Func
	var_42_bool = 0; // 0x6f2 PushV
	func_1878(var_42_bool); // 0x6f3 NEW_2
	var_43_bool = var_42_bool == 0; // 0x6f5 Not
	if(var_43_bool == 0) goto Label_1784; // 0x6f6 JumpB
	return 12; // 0x6f7 Return
	
Label_1784:
	var_44_int = 0; // 0x6f8 PushV
	func_2227(var_44_int); // 0x6f9 NEW_2
	var_36_int = var_44_int; // 0x6fa Mov
	var_37_int = 0; // 0x6fc MovI
	
Label_1789:
	var_57_bool = 0; // 0x6fd PushV
	var_57_bool = 0; // 0x6fe MovB
	var_58_int = 5; // 0x6ff PushI
	var_59_bool = var_37_int < var_58_int; // 0x700 LT
	if(var_59_bool == 0) goto Label_1799; // 0x701 JumpB
	var_60_bool = 0; // 0x702 PushV
	func_1878(var_60_bool); // 0x703 NEW_2
	if(var_60_bool == 0) goto Label_1799; // 0x705 JumpB
	var_57_bool = 1; // 0x706 MovB
	
Label_1799:
	if(var_57_bool == 0) goto Label_1841; // 0x707 JumpB
	var_61_bool = var_36_int == 0; // 0x708 Not
	if(var_61_bool == 0) goto Label_1809; // 0x709 JumpB
	var_62_int = 3; // 0x70a PushI
	Sleep(var_62_int, var_38_bool); // 0x70b Func
	var_63_bool = var_38_bool == 0; // 0x70d Not
	if(var_63_bool == 0) goto Label_1808; // 0x70e JumpB
	goto Label_1841; // 0x70f Jump
	
Label_1841:
	ResetAAS(); // 0x731 Func
	return 12; // 0x733 Return
	
Label_1808:
	goto Label_1830; // 0x710 Jump
	
Label_1830:
	var_64_bool = 0; // 0x726 PushV
	func_1844(var_64_bool); // 0x727 NEW_2
	var_65_bool = var_64_bool == 0; // 0x729 Not
	if(var_65_bool == 0) goto Label_1836; // 0x72a JumpB
	goto Label_1841; // 0x72b Jump
	
Label_1836:
	ResetAAS(); // 0x72c Func
	var_66_int = 1; // 0x72e PushI
	var_37_int = var_37_int + var_66_int; // 0x72f Add2
	goto Label_1789; // 0x730 Jump
	
Label_1809:
	irand(var_39_int, var_36_int); // 0x711 Func
	var_67_int = 5; // 0x713 PushI
	irand(var_40_int, var_67_int); // 0x714 Func
	var_68_int = 0; // 0x716 PushI
	var_69_bool = var_40_int != var_68_int; // 0x717 Neq
	if(var_69_bool == 0) goto Label_1818; // 0x718 JumpB
	var_39_int = 0; // 0x719 MovI
	
Label_1818:
	var_70_string = "all"; // 0x71a PushS
	var_71_string = ""; var_72_int = 0; // 0x71b PushV
	var_72_int = var_39_int; // 0x71c Mov
	func_2220(var_71_string, var_72_int); // 0x71d NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x71f Func
	WaitForAnimEnd(var_41_bool); // 0x721 Func
	var_73_bool = var_41_bool == 0; // 0x723 Not
	if(var_73_bool == 0) goto Label_1830; // 0x724 JumpB
	goto Label_1841; // 0x725 Jump
}


func_2292()
{
	var_325_string = "b4Spi4kaVisit"; // 0x8f5 PushS
	var_326_int = 1; // 0x8f6 PushI
	SetVariable(var_325_string, var_326_int); // 0x8f7 Func
	return 0; // 0x8f9 Return
}


func_2298()
{
	var_34_string = "oob12Spi4ka1"; // 0x8fb PushS
	var_35_int = 1; // 0x8fc PushI
	SetVariable(var_34_string, var_35_int); // 0x8fd Func
	return 0; // 0x8ff Return
}


func_1531(var_2_object, var_544_string)
{
	var_545_bool = 0; // 0x5fc PushV
	func_2252(var_545_bool); // 0x5fd NEW_2
	var_546_bool = var_545_bool == 0; // 0x5ff Not
	if(var_546_bool == 0) goto Label_1538; // 0x600 JumpB
	return 0; // 0x601 Return
	
Label_1538:
	var_547_bool = var_544_string == var_2_object; // 0x602 Eq
	if(var_547_bool == 0) goto Label_1541; // 0x603 JumpB
	return 0; // 0x604 Return
	
Label_1541:
	var_548_string = ""; var_549_bool = 0; // 0x605 PushV
	var_548_string = var_544_string; // 0x606 Mov
	var_550_string = ""; // 0x607 PushS
	var_551_bool = var_544_string == var_550_string; // 0x608 Eq
	if(var_551_bool == 0) goto Label_1548; // 0x609 JumpB
	var_549_bool = 0; // 0x60a MovB
	goto Label_1549; // 0x60b Jump
	
Label_1549:
	func_2124(var_548_string, var_549_bool); // 0x60d NEW_2
	var_2_object = var_544_string; // 0x60f TMov
	return 0; // 0x610 Return
	
Label_1548:
	var_549_bool = 1; // 0x60c MovB
}


