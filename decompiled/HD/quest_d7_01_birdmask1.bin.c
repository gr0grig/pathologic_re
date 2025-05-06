task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe9 PushI
	if(var_7_int == 0) goto Label_618; // 0xea JumpB
	func_749(); // 0xec NEW_2
	var_9_int = 14419; // 0xee PushI
	var_10_bool = var_6_int == var_9_int; // 0xef Eq
	if(var_10_bool == 0) goto Label_256; // 0xf0 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf1 PushV
	var_11_object = var_1_object; // 0xf2 MovT
	var_12_object = var_0_object; // 0xf3 MovT
	func_833(); // 0xf4 NEW_2
	var_15_object = Obj(); var_16_object = Obj(); // 0xf6 PushV
	var_15_object = var_1_object; // 0xf7 MovT
	var_16_object = var_0_object; // 0xf8 MovT
	func_839(var_16_object); // 0xf9 NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xfb PushV
	var_39_object = var_1_object; // 0xfc MovT
	var_40_object = var_0_object; // 0xfd MovT
	func_827(); // 0xfe NEW_2
	
Label_256:
	var_43_int = 14487; // 0x100 PushI
	var_44_bool = var_6_int == var_43_int; // 0x101 Eq
	if(var_44_bool == 0) goto Label_264; // 0x102 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x103 PushV
	var_45_object = var_1_object; // 0x104 MovT
	var_46_object = var_0_object; // 0x105 MovT
	func_850(); // 0x106 NEW_2
	
Label_264:
	var_53_int = 14432; // 0x108 PushI
	var_54_bool = var_6_int == var_53_int; // 0x109 Eq
	if(var_54_bool == 0) goto Label_272; // 0x10a JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x10b PushV
	var_55_object = var_1_object; // 0x10c MovT
	var_56_object = var_0_object; // 0x10d MovT
	func_850(); // 0x10e NEW_2
	
Label_272:
	var_57_int = 14414; // 0x110 PushI
	var_58_bool = var_6_int == var_57_int; // 0x111 Eq
	if(var_58_bool == 0) goto Label_280; // 0x112 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x113 PushV
	var_59_object = var_1_object; // 0x114 MovT
	var_60_object = var_0_object; // 0x115 MovT
	func_850(); // 0x116 NEW_2
	
Label_280:
	var_61_int = 13343; // 0x118 PushI
	var_62_bool = var_5_int == var_61_int; // 0x119 Eq
	if(var_62_bool == 0) goto Label_381; // 0x11a JumpB
	var_63_bool = 0; // 0x11b PushV
	var_63_bool = 0; // 0x11c MovB
	var_64_bool = 0; var_65_object = Obj(); // 0x11d PushV
	var_65_object = var_1_object; // 0x11e MovT
	func_869(var_65_object); // 0x11f NEW_2
	if(var_64_bool == 0) goto Label_296; // 0x121 JumpB
	var_72_bool = 0; var_73_object = Obj(); // 0x122 PushV
	var_73_object = var_1_object; // 0x123 MovT
	func_891(var_73_object); // 0x124 NEW_2
	if(var_72_bool == 0) goto Label_296; // 0x126 JumpB
	var_63_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_63_bool == 0) goto Label_312; // 0x128 JumpB
	var_78_string = ""; // 0x129 PushV
	var_78_string = "Neutral"; // 0x12a MovS
	func_210(var_6_int, var_78_string); // 0x12b NEW_2
	var_95_int = 512188; // 0x12d PushI
	SetMessage(var_95_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_96_int = 512189; // 0x132 PushI
	var_97_int = 14396; // 0x133 PushI
	var_98_int = 13344; // 0x134 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x135 TObjFunc
	return 0; // 0x137 Return
	
Label_312:
	var_99_bool = 0; // 0x138 PushV
	var_99_bool = 0; // 0x139 MovB
	var_100_bool = 0; var_101_object = Obj(); // 0x13a PushV
	var_101_object = var_1_object; // 0x13b MovT
	func_881(var_100_bool, var_101_object); // 0x13c NEW_2
	if(var_100_bool == 0) goto Label_325; // 0x13e JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x13f PushV
	var_139_object = var_1_object; // 0x140 MovT
	func_857(var_139_object); // 0x141 NEW_2
	if(var_138_bool == 0) goto Label_325; // 0x143 JumpB
	var_99_bool = 1; // 0x144 MovB
	
Label_325:
	if(var_99_bool == 0) goto Label_351; // 0x145 JumpB
	var_144_string = ""; // 0x146 PushV
	var_144_string = "Neutral"; // 0x147 MovS
	func_210(var_6_int, var_144_string); // 0x148 NEW_2
	var_145_int = 513197; // 0x14a PushI
	SetMessage(var_145_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_146_int = 513198; // 0x14f PushI
	var_147_int = 14433; // 0x150 PushI
	var_148_int = 14421; // 0x151 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x152 TObjFunc
	var_149_int = 513199; // 0x154 PushI
	var_150_int = 14428; // 0x155 PushI
	var_151_int = 14422; // 0x156 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x157 TObjFunc
	var_152_int = 513200; // 0x159 PushI
	var_153_int = 14424; // 0x15a PushI
	var_154_int = 14423; // 0x15b PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_155_bool = 0; var_156_object = Obj(); // 0x15f PushV
	var_156_object = var_1_object; // 0x160 MovT
	func_857(var_156_object); // 0x161 NEW_2
	if(var_155_bool == 0) goto Label_381; // 0x163 JumpB
	var_157_string = ""; // 0x164 PushV
	var_157_string = "Neutral"; // 0x165 MovS
	func_210(var_6_int, var_157_string); // 0x166 NEW_2
	var_158_int = 513175; // 0x168 PushI
	SetMessage(var_158_int); // 0x169 TObjFunc
	ClearReplies(); // 0x16b TObjFunc
	var_159_int = 513177; // 0x16d PushI
	var_160_int = 14398; // 0x16e PushI
	var_161_int = 14397; // 0x16f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x170 TObjFunc
	var_162_int = 513195; // 0x172 PushI
	var_163_int = 14411; // 0x173 PushI
	var_164_int = 14417; // 0x174 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x175 TObjFunc
	var_165_int = 513193; // 0x177 PushI
	var_166_int = -1; // 0x178 PushI
	var_167_int = 14415; // 0x179 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_168_int = 14398; // 0x17d PushI
	var_169_bool = var_5_int == var_168_int; // 0x17e Eq
	if(var_169_bool == 0) goto Label_409; // 0x17f JumpB
	var_170_string = ""; // 0x180 PushV
	var_170_string = "Neutral"; // 0x181 MovS
	func_210(var_6_int, var_170_string); // 0x182 NEW_2
	var_171_int = 513178; // 0x184 PushI
	SetMessage(var_171_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_172_int = 513179; // 0x189 PushI
	var_173_int = 14402; // 0x18a PushI
	var_174_int = 14399; // 0x18b PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x18c TObjFunc
	var_175_int = 513180; // 0x18e PushI
	var_176_int = 14403; // 0x18f PushI
	var_177_int = 14400; // 0x190 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x191 TObjFunc
	var_178_int = 513181; // 0x193 PushI
	var_179_int = 14404; // 0x194 PushI
	var_180_int = 14401; // 0x195 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_181_int = 14404; // 0x199 PushI
	var_182_bool = var_5_int == var_181_int; // 0x19a Eq
	if(var_182_bool == 0) goto Label_432; // 0x19b JumpB
	var_183_string = ""; // 0x19c PushV
	var_183_string = "Neutral"; // 0x19d MovS
	func_210(var_6_int, var_183_string); // 0x19e NEW_2
	var_184_int = 513184; // 0x1a0 PushI
	SetMessage(var_184_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_185_int = 513189; // 0x1a5 PushI
	var_186_int = -1; // 0x1a6 PushI
	var_187_int = 14409; // 0x1a7 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1a8 TObjFunc
	var_188_int = 513190; // 0x1aa PushI
	var_189_int = 14411; // 0x1ab PushI
	var_190_int = 14410; // 0x1ac PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1ad TObjFunc
	return 0; // 0x1af Return
	
Label_432:
	var_191_int = 14403; // 0x1b0 PushI
	var_192_bool = var_5_int == var_191_int; // 0x1b1 Eq
	if(var_192_bool == 0) goto Label_455; // 0x1b2 JumpB
	var_193_string = ""; // 0x1b3 PushV
	var_193_string = "Neutral"; // 0x1b4 MovS
	func_210(var_6_int, var_193_string); // 0x1b5 NEW_2
	var_194_int = 513183; // 0x1b7 PushI
	SetMessage(var_194_int); // 0x1b8 TObjFunc
	ClearReplies(); // 0x1ba TObjFunc
	var_195_int = 513187; // 0x1bc PushI
	var_196_int = -1; // 0x1bd PushI
	var_197_int = 14407; // 0x1be PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1bf TObjFunc
	var_198_int = 513188; // 0x1c1 PushI
	var_199_int = 14411; // 0x1c2 PushI
	var_200_int = 14408; // 0x1c3 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_201_int = 14402; // 0x1c7 PushI
	var_202_bool = var_5_int == var_201_int; // 0x1c8 Eq
	if(var_202_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_203_string = ""; // 0x1ca PushV
	var_203_string = "Neutral"; // 0x1cb MovS
	func_210(var_6_int, var_203_string); // 0x1cc NEW_2
	var_204_int = 513182; // 0x1ce PushI
	SetMessage(var_204_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_205_int = 513185; // 0x1d3 PushI
	var_206_int = 14411; // 0x1d4 PushI
	var_207_int = 14405; // 0x1d5 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1d6 TObjFunc
	var_208_int = 513186; // 0x1d8 PushI
	var_209_int = -1; // 0x1d9 PushI
	var_210_int = 14406; // 0x1da PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_211_int = 14411; // 0x1de PushI
	var_212_bool = var_5_int == var_211_int; // 0x1df Eq
	if(var_212_bool == 0) goto Label_496; // 0x1e0 JumpB
	var_213_string = ""; // 0x1e1 PushV
	var_213_string = "Neutral"; // 0x1e2 MovS
	func_210(var_6_int, var_213_string); // 0x1e3 NEW_2
	var_214_int = 513191; // 0x1e5 PushI
	SetMessage(var_214_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_215_int = 513192; // 0x1ea PushI
	var_216_int = -1; // 0x1eb PushI
	var_217_int = 14414; // 0x1ec PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_218_int = 14424; // 0x1f0 PushI
	var_219_bool = var_5_int == var_218_int; // 0x1f1 Eq
	if(var_219_bool == 0) goto Label_524; // 0x1f2 JumpB
	var_220_string = ""; // 0x1f3 PushV
	var_220_string = "Neutral"; // 0x1f4 MovS
	func_210(var_6_int, var_220_string); // 0x1f5 NEW_2
	var_221_int = 513201; // 0x1f7 PushI
	SetMessage(var_221_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_222_int = 513202; // 0x1fc PushI
	var_223_int = 14429; // 0x1fd PushI
	var_224_int = 14425; // 0x1fe PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1ff TObjFunc
	var_225_int = 513203; // 0x201 PushI
	var_226_int = 14433; // 0x202 PushI
	var_227_int = 14426; // 0x203 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x204 TObjFunc
	var_228_int = 513204; // 0x206 PushI
	var_229_int = 14428; // 0x207 PushI
	var_230_int = 14427; // 0x208 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_231_int = 14429; // 0x20c PushI
	var_232_bool = var_5_int == var_231_int; // 0x20d Eq
	if(var_232_bool == 0) goto Label_542; // 0x20e JumpB
	var_233_string = ""; // 0x20f PushV
	var_233_string = "Neutral"; // 0x210 MovS
	func_210(var_6_int, var_233_string); // 0x211 NEW_2
	var_234_int = 513206; // 0x213 PushI
	SetMessage(var_234_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_235_int = 513207; // 0x218 PushI
	var_236_int = -1; // 0x219 PushI
	var_237_int = 14430; // 0x21a PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_238_int = 14428; // 0x21e PushI
	var_239_bool = var_5_int == var_238_int; // 0x21f Eq
	if(var_239_bool == 0) goto Label_565; // 0x220 JumpB
	var_240_string = ""; // 0x221 PushV
	var_240_string = "Neutral"; // 0x222 MovS
	func_210(var_6_int, var_240_string); // 0x223 NEW_2
	var_241_int = 513205; // 0x225 PushI
	SetMessage(var_241_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_242_int = 513209; // 0x22a PushI
	var_243_int = -1; // 0x22b PushI
	var_244_int = 14432; // 0x22c PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x22d TObjFunc
	var_245_int = 541590; // 0x22f PushI
	var_246_int = -1; // 0x230 PushI
	var_247_int = 43759; // 0x231 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_248_int = 14433; // 0x235 PushI
	var_249_bool = var_5_int == var_248_int; // 0x236 Eq
	if(var_249_bool == 0) goto Label_588; // 0x237 JumpB
	var_250_string = ""; // 0x238 PushV
	var_250_string = "Neutral"; // 0x239 MovS
	func_210(var_6_int, var_250_string); // 0x23a NEW_2
	var_251_int = 513210; // 0x23c PushI
	SetMessage(var_251_int); // 0x23d TObjFunc
	ClearReplies(); // 0x23f TObjFunc
	var_252_int = 513211; // 0x241 PushI
	var_253_int = -1; // 0x242 PushI
	var_254_int = 14434; // 0x243 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x244 TObjFunc
	var_255_int = 513260; // 0x246 PushI
	var_256_int = -1; // 0x247 PushI
	var_257_int = 14487; // 0x248 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x249 TObjFunc
	return 0; // 0x24b Return
	
Label_588:
	var_258_int = 14396; // 0x24c PushI
	var_259_bool = var_5_int == var_258_int; // 0x24d Eq
	if(var_259_bool == 0) goto Label_606; // 0x24e JumpB
	var_260_string = ""; // 0x24f PushV
	var_260_string = "Neutral"; // 0x250 MovS
	func_210(var_6_int, var_260_string); // 0x251 NEW_2
	var_261_int = 513176; // 0x253 PushI
	SetMessage(var_261_int); // 0x254 TObjFunc
	ClearReplies(); // 0x256 TObjFunc
	var_262_int = 513196; // 0x258 PushI
	var_263_int = -1; // 0x259 PushI
	var_264_int = 14419; // 0x25a PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_3_string = 1; // 0x25e TMovB
	var_265_bool = 0; // 0x25f PushV
	func_976(var_265_bool); // 0x260 NEW_2
	if(var_265_bool == 0) goto Label_614; // 0x262 JumpB
	lshStopAnimation(); // 0x263 Func
	goto Label_616; // 0x265 Jump
	
Label_616:
	return 0; // 0x268 Return
	
Label_614:
	StopAnimation(); // 0x266 Func
	
Label_618:
	return 0; // 0x26a Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x270 PushV
	var_7_object = var_5_object; // 0x271 Mov
	TaskCall(0); // 0x272 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x273 NEW_2
	TaskReturn(); // 0x274 TaskReturn
	return 0; // 0x276 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_619:
	Hold(); // 0x26b Func
	goto Label_619; // 0x26d Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	var_19_float = 130.0; // 0x4 MovF
	func_631(var_18_object, var_19_float); // 0x5 NEW_2
	var_64_bool = var_17_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_970(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_968(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_972(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_974(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_951(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_77_bool = var_14_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f PushV
	var_78_object = var_7_object; // 0x30 Mov
	var_79_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_208_bool = var_16_bool == 0; // 0x38 Not
	if(var_208_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_209_object = Obj(); // 0x3f PushV
	var_209_object = var_7_object; // 0x40 Mov
	func_700(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_833()
{
	var_13_string = "ood7UBirdmask1"; // 0x342 PushS
	var_14_int = 1; // 0x343 PushI
	SetVariable(var_13_string, var_14_int); // 0x344 Func
	return 0; // 0x346 Return
}


func_771(var_34_int, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x303 PushV
	CreateIntVector(var_37_object); // 0x304 Func
	add(var_34_int); // 0x306 ObjFunc
	add(var_35_int); // 0x308 ObjFunc
	var_38_int = 3; // 0x30a PushI
	SendWorldWndMessage(var_38_int, var_37_object); // 0x30b Func
	return 2; // 0x30d Return
}


func_891(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x37c PushV
	var_97_string = "ood7UBirdmask1"; // 0x37d MovS
	func_766(var_96_int, var_97_string); // 0x37e NEW_2
	var_98_int = 0; // 0x380 PushI
	var_99_bool = var_96_int == var_98_int; // 0x381 Eq
	if(var_99_bool == 0) goto Label_901; // 0x382 JumpB
	var_94_bool = 1; // 0x383 MovB
	return 0; // 0x384 Return
	
Label_901:
	var_94_bool = 0; // 0x385 MovB
	return 0; // 0x386 Return
}


func_903(var_142_bool)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_bool = 0; var_149_int = 0; var_150_object = Obj(); var_151_int = 0; var_152_bool = 0; var_153_bool = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_bool = 0; var_158_bool = 0; var_159_int = 0; var_160_object = Obj(); var_161_int = 0; var_162_bool = 0; var_163_bool = 0; // 0x387 PushV
	var_164_int = 1; // 0x388 PushI
	GetItemCount(var_154_int, var_164_int); // 0x389 ObjFunc
	var_165_string = "bird_mask"; // 0x38b PushS
	GetInvItemByName(var_155_int, var_165_string); // 0x38c Func
	var_166_string = "bird_balahon"; // 0x38e PushS
	GetInvItemByName(var_156_int, var_166_string); // 0x38f Func
	var_157_bool = 0; // 0x391 MovB
	var_158_bool = 0; // 0x392 MovB
	var_159_int = 0; // 0x393 MovI
	
Label_916:
	var_167_bool = var_159_int < var_154_int; // 0x394 LT
	if(var_167_bool == 0) goto Label_944; // 0x395 JumpB
	var_168_int = 1; // 0x396 PushI
	GetItem(var_160_object, var_159_int, var_168_int); // 0x397 ObjFunc
	GetItemID(var_161_int); // 0x399 ObjFunc
	var_169_bool = var_161_int == var_155_int; // 0x39b Eq
	if(var_169_bool == 0) goto Label_932; // 0x39c JumpB
	var_170_int = 1; // 0x39d PushI
	IsItemSelected(var_162_bool, var_159_int, var_170_int); // 0x39e ObjFunc
	var_171_bool = var_162_bool; // 0x3a0 Push
	if(var_171_bool == 0) goto Label_931; // 0x3a1 JumpB
	var_157_bool = 1; // 0x3a2 MovB
	
Label_931:
	goto Label_940; // 0x3a3 Jump
	
Label_940:
	var_160_object = 0; // 0x3ac SetNull
	var_172_int = 1; // 0x3ad PushI
	var_159_int = var_159_int + var_172_int; // 0x3ae Add2
	goto Label_916; // 0x3af Jump
	
Label_932:
	var_173_bool = var_161_int == var_156_int; // 0x3a4 Eq
	if(var_173_bool == 0) goto Label_940; // 0x3a5 JumpB
	var_174_int = 1; // 0x3a6 PushI
	IsItemSelected(var_163_bool, var_159_int, var_174_int); // 0x3a7 ObjFunc
	var_175_bool = var_163_bool; // 0x3a9 Push
	if(var_175_bool == 0) goto Label_940; // 0x3aa JumpB
	var_158_bool = 1; // 0x3ab MovB
	
Label_944:
	var_142_bool = 0; // 0x3b0 MovB
	var_176_bool = var_157_bool; // 0x3b1 Push
	if(var_176_bool == 0) goto Label_950; // 0x3b2 JumpB
	var_177_bool = var_158_bool; // 0x3b3 Push
	if(var_177_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_142_bool = 1; // 0x3b5 MovB
	
Label_950:
	return 20; // 0x3b6 Return
}


func_839(var_15_object)
{
	var_17_string = "ureport is given"; // 0x348 PushS
	Trace(var_17_string); // 0x349 Func
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0; // 0x34b PushV
	var_18_object = var_15_object; // 0x34c Mov
	var_19_string = "d7q01_ureport"; // 0x34d MovS
	var_20_int = 1; // 0x34e MovI
	func_802(var_18_object, var_19_string, var_20_int); // 0x34f NEW_2
	return 0; // 0x351 Return
}


func_968(var_66_int)
{
	var_66_int = 515571; // 0x3c8 MovI
	return 0; // 0x3c9 Return
}


func_970(var_65_int)
{
	var_65_int = 504029; // 0x3ca MovI
	return 0; // 0x3cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object; // 0x4b TMov
	var_1_object = var_78_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_84_int = 1; // 0x4e PushI
	if(var_84_int == 0) goto Label_180; // 0x4f JumpB
	var_85_bool = 0; // 0x50 PushV
	var_85_bool = 0; // 0x51 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x52 PushV
	var_87_object = var_1_object; // 0x53 MovT
	func_869(var_87_object); // 0x54 NEW_2
	if(var_86_bool == 0) goto Label_93; // 0x56 JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x57 PushV
	var_95_object = var_1_object; // 0x58 MovT
	func_891(var_95_object); // 0x59 NEW_2
	if(var_94_bool == 0) goto Label_93; // 0x5b JumpB
	var_85_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_85_bool == 0) goto Label_109; // 0x5d JumpB
	var_100_string = ""; // 0x5e PushV
	var_100_string = "Neutral"; // 0x5f MovS
	func_210(var_79_object, var_100_string); // 0x60 NEW_2
	var_117_int = 512188; // 0x62 PushI
	SetMessage(var_117_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_118_int = 512189; // 0x67 PushI
	var_119_int = 14396; // 0x68 PushI
	var_120_int = 13344; // 0x69 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x6a TObjFunc
	goto Label_180; // 0x6c Jump
	
Label_180:
	var_121_bool = 0; // 0xb4 PushV
	func_976(var_121_bool); // 0xb5 NEW_2
	if(var_121_bool == 0) goto Label_195; // 0xb7 JumpB
	
Label_184:
	lshWaitForAnimEnd(); // 0xb8 Func
	var_122_string = var_3_string; // 0xba PushT
	if(var_122_string == 0) goto Label_189; // 0xbb JumpB
	goto Label_194; // 0xbc Jump
	
Label_194:
	goto Label_209; // 0xc2 Jump
	
Label_209:
	return 0; // 0xd1 Return
	
Label_189:
	var_123_string = ""; // 0xbd PushV
	var_123_string = var_2_object; // 0xbe MovT
	func_718(var_123_string); // 0xbf NEW_2
	goto Label_184; // 0xc1 Jump
	
Label_195:
	var_134_string = "all"; // 0xc3 PushS
	var_135_string = "idle"; // 0xc4 PushS
	PlayAnimation(var_134_string, var_135_string); // 0xc5 Func
	
Label_199:
	WaitForAnimEnd(); // 0xc7 Func
	var_136_string = var_3_string; // 0xc9 PushT
	if(var_136_string == 0) goto Label_204; // 0xca JumpB
	goto Label_209; // 0xcb Jump
	
Label_204:
	var_137_string = "all"; // 0xcc PushS
	var_138_string = "idle"; // 0xcd PushS
	PlayAnimation(var_137_string, var_138_string); // 0xce Func
	goto Label_199; // 0xd0 Jump
	
Label_109:
	var_139_bool = 0; // 0x6d PushV
	var_139_bool = 0; // 0x6e MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x6f PushV
	var_141_object = var_1_object; // 0x70 MovT
	func_881(var_140_bool, var_141_object); // 0x71 NEW_2
	if(var_140_bool == 0) goto Label_122; // 0x73 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x74 PushV
	var_179_object = var_1_object; // 0x75 MovT
	func_857(var_179_object); // 0x76 NEW_2
	if(var_178_bool == 0) goto Label_122; // 0x78 JumpB
	var_139_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_139_bool == 0) goto Label_148; // 0x7a JumpB
	var_184_string = ""; // 0x7b PushV
	var_184_string = "Neutral"; // 0x7c MovS
	func_210(var_79_object, var_184_string); // 0x7d NEW_2
	var_185_int = 513197; // 0x7f PushI
	SetMessage(var_185_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_186_int = 513198; // 0x84 PushI
	var_187_int = 14433; // 0x85 PushI
	var_188_int = 14421; // 0x86 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x87 TObjFunc
	var_189_int = 513199; // 0x89 PushI
	var_190_int = 14428; // 0x8a PushI
	var_191_int = 14422; // 0x8b PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x8c TObjFunc
	var_192_int = 513200; // 0x8e PushI
	var_193_int = 14424; // 0x8f PushI
	var_194_int = 14423; // 0x90 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x91 TObjFunc
	goto Label_180; // 0x93 Jump
	
Label_148:
	var_195_bool = 0; var_196_object = Obj(); // 0x94 PushV
	var_196_object = var_1_object; // 0x95 MovT
	func_857(var_196_object); // 0x96 NEW_2
	if(var_195_bool == 0) goto Label_178; // 0x98 JumpB
	var_197_string = ""; // 0x99 PushV
	var_197_string = "Neutral"; // 0x9a MovS
	func_210(var_79_object, var_197_string); // 0x9b NEW_2
	var_198_int = 513175; // 0x9d PushI
	SetMessage(var_198_int); // 0x9e TObjFunc
	ClearReplies(); // 0xa0 TObjFunc
	var_199_int = 513177; // 0xa2 PushI
	var_200_int = 14398; // 0xa3 PushI
	var_201_int = 14397; // 0xa4 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xa5 TObjFunc
	var_202_int = 513195; // 0xa7 PushI
	var_203_int = 14411; // 0xa8 PushI
	var_204_int = 14417; // 0xa9 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0xaa TObjFunc
	var_205_int = 513193; // 0xac PushI
	var_206_int = -1; // 0xad PushI
	var_207_int = 14415; // 0xae PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xaf TObjFunc
	goto Label_180; // 0xb1 Jump
	
Label_178:
	return 0; // 0xb2 Return
}


func_972(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png"; // 0x3cc MovS
	return 0; // 0x3cd Return
}


func_974(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png"; // 0x3ce MovS
	return 0; // 0x3cf Return
}


func_783(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x30f PushV
	GetItemID(var_29_int); // 0x310 ObjFunc
	var_32_string = "Category"; // 0x312 PushS
	GetInvItemProperty(var_30_int, var_29_int, var_32_string); // 0x313 Func
	AddItem(var_31_bool, var_24_object, var_30_int, var_25_int); // 0x315 ObjFunc
	var_33_bool = var_31_bool == 0; // 0x317 Not
	if(var_33_bool == 0) goto Label_796; // 0x318 JumpB
	DropItems(var_24_object, var_25_int); // 0x319 ObjFunc
	goto Label_801; // 0x31b Jump
	
Label_801:
	return 6; // 0x321 Return
	
Label_796:
	var_34_int = 0; var_35_int = 0; // 0x31c PushV
	var_34_int = var_29_int; // 0x31d Mov
	var_35_int = var_25_int; // 0x31e Mov
	func_771(var_34_int, var_35_int); // 0x31f NEW_2
}


func_718(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0; // 0x2ce PushV
	lshHasAnimation(var_127_bool, var_123_string); // 0x2cf Func
	var_130_bool = var_127_bool; // 0x2d1 Push
	if(var_130_bool == 0) goto Label_729; // 0x2d2 JumpB
	lshGetAnimTimes(var_123_string, var_128_float, var_129_float); // 0x2d3 Func
	var_131_bool = 0; // 0x2d5 PushB
	lshPlayAnimation(var_128_float, var_129_float, var_131_bool); // 0x2d6 Func
	goto Label_733; // 0x2d8 Jump
	
Label_733:
	return 6; // 0x2dd Return
	
Label_729:
	var_132_string = "Can't find lsh animation : "; // 0x2d9 PushS
	var_133_int = var_132_string + var_123_string; // 0x2da Add
	Trace(var_133_int); // 0x2db Func
}


func_976(var_60_bool)
{
	var_60_bool = 0; // 0x3d0 MovB
	return 0; // 0x3d1 Return
}


func_210(var_2_object, var_100_string)
{
	var_101_bool = 0; // 0xd3 PushV
	func_976(var_101_bool); // 0xd4 NEW_2
	var_102_bool = var_101_bool == 0; // 0xd6 Not
	if(var_102_bool == 0) goto Label_217; // 0xd7 JumpB
	return 0; // 0xd8 Return
	
Label_217:
	var_103_bool = var_100_string == var_2_object; // 0xd9 Eq
	if(var_103_bool == 0) goto Label_220; // 0xda JumpB
	return 0; // 0xdb Return
	
Label_220:
	var_104_string = ""; var_105_bool = 0; // 0xdc PushV
	var_104_string = var_100_string; // 0xdd Mov
	var_106_string = ""; // 0xde PushS
	var_107_bool = var_100_string == var_106_string; // 0xdf Eq
	if(var_107_bool == 0) goto Label_227; // 0xe0 JumpB
	var_105_bool = 0; // 0xe1 MovB
	goto Label_228; // 0xe2 Jump
	
Label_228:
	func_734(var_104_string, var_105_bool); // 0xe4 NEW_2
	var_2_object = var_100_string; // 0xe6 TMov
	return 0; // 0xe7 Return
	
Label_227:
	var_105_bool = 1; // 0xe3 MovB
}


func_850()
{
	var_47_bool = 0; var_48_string = ""; var_49_string = ""; // 0x353 PushV
	var_48_string = "quest_d7_01"; // 0x354 MovS
	var_49_string = "kill_player"; // 0x355 MovS
	func_815(var_47_bool, var_48_string, var_49_string); // 0x356 NEW_2
	return 0; // 0x358 Return
}


func_857(var_178_bool)
{
	var_180_int = 0; var_181_string = ""; // 0x35a PushV
	var_181_string = "d7q01"; // 0x35b MovS
	func_766(var_180_int, var_181_string); // 0x35c NEW_2
	var_182_int = 2; // 0x35e PushI
	var_183_bool = var_180_int == var_182_int; // 0x35f Eq
	if(var_183_bool == 0) goto Label_867; // 0x360 JumpB
	var_178_bool = 1; // 0x361 MovB
	return 0; // 0x362 Return
	
Label_867:
	var_178_bool = 0; // 0x363 MovB
	return 0; // 0x364 Return
}


func_734(var_104_string, var_105_bool)
{
	var_108_bool = 0; var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_float = 0; var_113_float = 0; // 0x2de PushV
	lshHasAnimation(var_111_bool, var_104_string); // 0x2df Func
	var_114_bool = var_111_bool; // 0x2e1 Push
	if(var_114_bool == 0) goto Label_744; // 0x2e2 JumpB
	lshGetAnimTimes(var_104_string, var_112_float, var_113_float); // 0x2e3 Func
	lshPlayAnimation(var_112_float, var_113_float, var_105_bool); // 0x2e5 Func
	goto Label_748; // 0x2e7 Jump
	
Label_748:
	return 6; // 0x2ec Return
	
Label_744:
	var_115_string = "Can't find lsh animation : "; // 0x2e8 PushS
	var_116_int = var_115_string + var_104_string; // 0x2e9 Add
	Trace(var_116_int); // 0x2ea Func
}


func_802(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x322 PushV
	CreateInvItem(var_22_object); // 0x323 Func
	SetItemName(var_19_string); // 0x325 ObjFunc
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0x327 PushV
	var_23_object = var_18_object; // 0x328 Mov
	var_24_object = var_22_object; // 0x329 Mov
	var_25_int = var_20_int; // 0x32a Mov
	func_783(var_24_object, var_25_int); // 0x32b NEW_2
	return 2; // 0x32d Return
}


func_869(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x366 PushV
	var_89_string = "d7q01"; // 0x367 MovS
	func_766(var_88_int, var_89_string); // 0x368 NEW_2
	var_92_int = 1; // 0x36a PushI
	var_93_bool = var_88_int == var_92_int; // 0x36b Eq
	if(var_93_bool == 0) goto Label_879; // 0x36c JumpB
	var_86_bool = 1; // 0x36d MovB
	return 0; // 0x36e Return
	
Label_879:
	var_86_bool = 0; // 0x36f MovB
	return 0; // 0x370 Return
}


func_631(var_17_bool, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; // 0x277 PushV
	GetPosition(var_30_cvector); // 0x278 ObjFunc
	GetEyesHeight(var_29_float); // 0x27a ObjFunc
	var_38_float = GetByIndex(var_30_cvector, 1); // 0x27c PushE
	var_38_float = var_38_float + var_29_float; // 0x27d Add2
	SetByIndex(var_30_cvector, 1) = var_38_float; // 0x27e PopE
	GetPosition(var_31_cvector); // 0x27f Func
	GetEyesHeight(var_29_float); // 0x281 Func
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x283 PushE
	var_39_float = var_39_float + var_29_float; // 0x284 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x285 PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x286 Sub2
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x287 PushE
	var_40_float = 0; // 0x288 MovI
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x289 PopE
	var_41_int = var_32_cvector | var_32_cvector; // 0x28a Or
	var_42_float = sqrt(var_41_int); // 0x28b Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x28c Div2
	var_33_cvector = -var_32_cvector; // 0x28d Neg2
	var_43_float = var_32_cvector * var_19_float; // 0x28e Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x28f PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x290 PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x291 Xor2
	func_756(var_44_cvector, var_45_cvector); // 0x292 NEW_2
	var_52_int = 25; // 0x294 PushI
	var_53_float = var_44_cvector * var_52_int; // 0x295 Mult
	var_54_int = var_43_float + var_53_float; // 0x296 Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x297 PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x298 Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x299 Add2
	IsOverrideActive(var_36_bool); // 0x29a Func
	var_56_bool = var_36_bool; // 0x29c Push
	if(var_56_bool == 0) goto Label_672; // 0x29d JumpB
	var_17_bool = 0; // 0x29e MovB
	return 18; // 0x29f Return
	
Label_672:
	StopWorld(); // 0x2a0 Func
	var_57_bool = 1; // 0x2a2 PushB
	CameraTransit(var_35_cvector, var_33_cvector, var_57_bool); // 0x2a3 Func
	var_58_float = GetByIndex(var_34_cvector, 0); // 0x2a5 PushE
	var_59_float = GetByIndex(var_34_cvector, 2); // 0x2a6 PushE
	Rotate(var_58_float, var_59_float); // 0x2a7 Func
	var_60_bool = 0; // 0x2a9 PushV
	func_976(var_60_bool); // 0x2aa NEW_2
	if(var_60_bool == 0) goto Label_686; // 0x2ac JumpB
	goto Label_694; // 0x2ad Jump
	
Label_694:
	CameraWaitForPlayFinish(); // 0x2b6 Func
	ResumeWorld(); // 0x2b8 Func
	var_17_bool = 1; // 0x2ba MovB
	return 18; // 0x2bb Return
	
Label_686:
	var_61_string = "head"; // 0x2ae PushS
	HasAnimationTrack(var_37_bool, var_61_string); // 0x2af Func
	var_62_bool = var_37_bool; // 0x2b1 Push
	if(var_62_bool == 0) goto Label_694; // 0x2b2 JumpB
	var_63_string = "head"; // 0x2b3 PushS
	LookAsyncCamera(var_63_string); // 0x2b4 Func
}


func_749()
{
	var_8_bool = 0; // 0x2ed PushV
	func_976(var_8_bool); // 0x2ee NEW_2
	if(var_8_bool == 0) goto Label_755; // 0x2f0 JumpB
	lshStopSpeech(); // 0x2f1 Func
	
Label_755:
	return 0; // 0x2f3 Return
}


func_815(var_47_bool, var_48_string, var_49_string)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x32f PushV
	FindActor(var_51_object, var_48_string); // 0x330 Func
	var_52_bool = var_51_object == 0; // 0x332 NullEq
	if(var_52_bool == 0) goto Label_822; // 0x333 JumpB
	var_47_bool = 0; // 0x334 MovB
	return 2; // 0x335 Return
	
Label_822:
	Trigger(var_51_object, var_49_string); // 0x336 Func
	var_47_bool = 1; // 0x338 MovB
	return 2; // 0x339 Return
}


func_881(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0x372 PushV
	var_143_object = var_141_object; // 0x373 Mov
	func_903(var_143_object); // 0x374 NEW_2
	if(var_142_bool == 0) goto Label_889; // 0x376 JumpB
	var_140_bool = 1; // 0x377 MovB
	return 0; // 0x378 Return
	
Label_889:
	var_140_bool = 0; // 0x379 MovB
	return 0; // 0x37a Return
}


func_756(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x2f4 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x2f5 Or
	var_48_float = sqrt(var_49_int); // 0x2f6 Sqrt2
	var_50_float = 0.0; // 0x2f7 PushF
	var_51_bool = var_48_float < var_50_float; // 0x2f8 LT
	if(var_51_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x2fa MovV
	return 2; // 0x2fb Return
	
Label_764:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x2fc Div2
	return 2; // 0x2fd Return
}


func_951(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3b7 PushV
	var_72_string = "branch"; // 0x3b8 PushS
	GetVariable(var_72_string, var_71_int); // 0x3b9 Func
	var_73_int = 0; // 0x3bb PushI
	var_74_bool = var_71_int == var_73_int; // 0x3bc Eq
	if(var_74_bool == 0) goto Label_961; // 0x3bd JumpB
	var_69_int = 1; // 0x3be MovI
	return 2; // 0x3bf Return
	
Label_961:
	var_75_int = 1; // 0x3c1 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3c2 Eq
	if(var_76_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_69_int = 2; // 0x3c4 MovI
	return 2; // 0x3c5 Return
	
Label_966:
	var_69_int = 3; // 0x3c6 MovI
	return 2; // 0x3c7 Return
}


func_827()
{
	var_41_string = "playsound"; // 0x33c PushS
	var_42_string = "giveitem"; // 0x33d PushS
	TriggerWorld(var_41_string, var_42_string); // 0x33e Func
	return 0; // 0x340 Return
}


func_700()
{
	var_210_bool = 0; var_211_bool = 0; // 0x2bc PushV
	var_212_bool = 1; // 0x2bd PushB
	CameraSwitchToNormal(var_212_bool); // 0x2be Func
	var_213_bool = 0; // 0x2c0 PushV
	func_976(var_213_bool); // 0x2c1 NEW_2
	if(var_213_bool == 0) goto Label_709; // 0x2c3 JumpB
	goto Label_717; // 0x2c4 Jump
	
Label_717:
	return 2; // 0x2cd Return
	
Label_709:
	var_214_string = "head"; // 0x2c5 PushS
	HasAnimationTrack(var_211_bool, var_214_string); // 0x2c6 Func
	var_215_bool = var_211_bool; // 0x2c8 Push
	if(var_215_bool == 0) goto Label_717; // 0x2c9 JumpB
	var_216_string = "head"; // 0x2ca PushS
	UnlookAsync(var_216_string); // 0x2cb Func
}


func_766(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0; // 0x2fe PushV
	GetVariable(var_89_string, var_91_int); // 0x2ff Func
	var_88_int = var_91_int; // 0x301 Mov
	return 2; // 0x302 Return
}


