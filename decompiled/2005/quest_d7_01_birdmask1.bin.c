task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe9 PushI
	if(var_7_int == 0) goto Label_618; // 0xea JumpB
	func_747(); // 0xec NEW_2
	var_9_int = 14419; // 0xee PushI
	var_10_bool = var_6_int == var_9_int; // 0xef Eq
	if(var_10_bool == 0) goto Label_256; // 0xf0 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf1 PushV
	var_11_object = var_1_object; // 0xf2 MovT
	var_12_object = var_0_object; // 0xf3 MovT
	func_831(); // 0xf4 NEW_2
	var_15_object = Obj(); var_16_object = Obj(); // 0xf6 PushV
	var_15_object = var_1_object; // 0xf7 MovT
	var_16_object = var_0_object; // 0xf8 MovT
	func_837(var_16_object); // 0xf9 NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xfb PushV
	var_39_object = var_1_object; // 0xfc MovT
	var_40_object = var_0_object; // 0xfd MovT
	func_825(); // 0xfe NEW_2
	
Label_256:
	var_43_int = 14487; // 0x100 PushI
	var_44_bool = var_6_int == var_43_int; // 0x101 Eq
	if(var_44_bool == 0) goto Label_264; // 0x102 JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x103 PushV
	var_45_object = var_1_object; // 0x104 MovT
	var_46_object = var_0_object; // 0x105 MovT
	func_848(); // 0x106 NEW_2
	
Label_264:
	var_53_int = 14432; // 0x108 PushI
	var_54_bool = var_6_int == var_53_int; // 0x109 Eq
	if(var_54_bool == 0) goto Label_272; // 0x10a JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x10b PushV
	var_55_object = var_1_object; // 0x10c MovT
	var_56_object = var_0_object; // 0x10d MovT
	func_848(); // 0x10e NEW_2
	
Label_272:
	var_57_int = 14414; // 0x110 PushI
	var_58_bool = var_6_int == var_57_int; // 0x111 Eq
	if(var_58_bool == 0) goto Label_280; // 0x112 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x113 PushV
	var_59_object = var_1_object; // 0x114 MovT
	var_60_object = var_0_object; // 0x115 MovT
	func_848(); // 0x116 NEW_2
	
Label_280:
	var_61_int = 13343; // 0x118 PushI
	var_62_bool = var_5_int == var_61_int; // 0x119 Eq
	if(var_62_bool == 0) goto Label_381; // 0x11a JumpB
	var_63_bool = 0; // 0x11b PushV
	var_63_bool = 0; // 0x11c MovB
	var_64_bool = 0; var_65_object = Obj(); // 0x11d PushV
	var_65_object = var_1_object; // 0x11e MovT
	func_867(var_65_object); // 0x11f NEW_2
	if(var_64_bool == 0) goto Label_296; // 0x121 JumpB
	var_72_bool = 0; var_73_object = Obj(); // 0x122 PushV
	var_73_object = var_1_object; // 0x123 MovT
	func_889(var_73_object); // 0x124 NEW_2
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
	func_879(var_100_bool, var_101_object); // 0x13c NEW_2
	if(var_100_bool == 0) goto Label_325; // 0x13e JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x13f PushV
	var_139_object = var_1_object; // 0x140 MovT
	func_855(var_139_object); // 0x141 NEW_2
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
	func_855(var_156_object); // 0x161 NEW_2
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
	func_974(var_265_bool); // 0x260 NEW_2
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
	var_63_bool = var_17_bool == 0; // 0x7 Not
	if(var_63_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_64_int = 0; // 0xd PushV
	func_968(var_64_int); // 0xe NEW_2
	SetNPCName(var_64_int); // 0x10 ObjFunc
	var_65_int = 0; // 0x12 PushV
	func_966(var_65_int); // 0x13 NEW_2
	SetNPCDescription(var_65_int); // 0x15 ObjFunc
	var_66_string = ""; // 0x17 PushV
	func_970(var_66_string); // 0x18 NEW_2
	SetPhoto(var_66_string); // 0x1a ObjFunc
	var_67_string = ""; // 0x1c PushV
	func_972(var_67_string); // 0x1d NEW_2
	SetPhoto2(var_67_string); // 0x1f ObjFunc
	var_68_int = 0; // 0x21 PushV
	func_949(var_68_int); // 0x22 NEW_2
	SetPlayerName(var_68_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_76_bool = var_14_bool; // 0x29 Push
	if(var_76_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x2f PushV
	var_77_object = var_7_object; // 0x30 Mov
	var_78_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_207_bool = var_16_bool == 0; // 0x38 Not
	if(var_207_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_208_object = Obj(); // 0x3f PushV
	var_208_object = var_7_object; // 0x40 Mov
	func_699(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_769(var_34_int, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x301 PushV
	CreateIntVector(var_37_object); // 0x302 Func
	add(var_34_int); // 0x304 ObjFunc
	add(var_35_int); // 0x306 ObjFunc
	var_38_int = 3; // 0x308 PushI
	SendWorldWndMessage(var_38_int, var_37_object); // 0x309 Func
	return 2; // 0x30b Return
}


func_901(var_141_bool)
{
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_bool = 0; var_147_bool = 0; var_148_int = 0; var_149_object = Obj(); var_150_int = 0; var_151_bool = 0; var_152_bool = 0; var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_bool = 0; var_158_int = 0; var_159_object = Obj(); var_160_int = 0; var_161_bool = 0; var_162_bool = 0; // 0x385 PushV
	var_163_int = 1; // 0x386 PushI
	GetItemCount(var_153_int, var_163_int); // 0x387 ObjFunc
	var_164_string = "bird_mask"; // 0x389 PushS
	GetInvItemByName(var_154_int, var_164_string); // 0x38a Func
	var_165_string = "bird_balahon"; // 0x38c PushS
	GetInvItemByName(var_155_int, var_165_string); // 0x38d Func
	var_156_bool = 0; // 0x38f MovB
	var_157_bool = 0; // 0x390 MovB
	var_158_int = 0; // 0x391 MovI
	
Label_914:
	var_166_bool = var_158_int < var_153_int; // 0x392 LT
	if(var_166_bool == 0) goto Label_942; // 0x393 JumpB
	var_167_int = 1; // 0x394 PushI
	GetItem(var_159_object, var_158_int, var_167_int); // 0x395 ObjFunc
	GetItemID(var_160_int); // 0x397 ObjFunc
	var_168_bool = var_160_int == var_154_int; // 0x399 Eq
	if(var_168_bool == 0) goto Label_930; // 0x39a JumpB
	var_169_int = 1; // 0x39b PushI
	IsItemSelected(var_161_bool, var_158_int, var_169_int); // 0x39c ObjFunc
	var_170_bool = var_161_bool; // 0x39e Push
	if(var_170_bool == 0) goto Label_929; // 0x39f JumpB
	var_156_bool = 1; // 0x3a0 MovB
	
Label_929:
	goto Label_938; // 0x3a1 Jump
	
Label_938:
	var_159_object = 0; // 0x3aa SetNull
	var_171_int = 1; // 0x3ab PushI
	var_158_int = var_158_int + var_171_int; // 0x3ac Add2
	goto Label_914; // 0x3ad Jump
	
Label_930:
	var_172_bool = var_160_int == var_155_int; // 0x3a2 Eq
	if(var_172_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_173_int = 1; // 0x3a4 PushI
	IsItemSelected(var_162_bool, var_158_int, var_173_int); // 0x3a5 ObjFunc
	var_174_bool = var_162_bool; // 0x3a7 Push
	if(var_174_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_157_bool = 1; // 0x3a9 MovB
	
Label_942:
	var_141_bool = 0; // 0x3ae MovB
	var_175_bool = var_156_bool; // 0x3af Push
	if(var_175_bool == 0) goto Label_948; // 0x3b0 JumpB
	var_176_bool = var_157_bool; // 0x3b1 Push
	if(var_176_bool == 0) goto Label_948; // 0x3b2 JumpB
	var_141_bool = 1; // 0x3b3 MovB
	
Label_948:
	return 20; // 0x3b4 Return
}


func_837(var_15_object)
{
	var_17_string = "ureport is given"; // 0x346 PushS
	Trace(var_17_string); // 0x347 Func
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0; // 0x349 PushV
	var_18_object = var_15_object; // 0x34a Mov
	var_19_string = "d7q01_ureport"; // 0x34b MovS
	var_20_int = 1; // 0x34c MovI
	func_800(var_18_object, var_19_string, var_20_int); // 0x34d NEW_2
	return 0; // 0x34f Return
}


func_966(var_65_int)
{
	var_65_int = 515571; // 0x3c6 MovI
	return 0; // 0x3c7 Return
}


func_968(var_64_int)
{
	var_64_int = 504029; // 0x3c8 MovI
	return 0; // 0x3c9 Return
}


func_970(var_66_string)
{
	var_66_string = "ui/NPC_bmask.png"; // 0x3ca MovS
	return 0; // 0x3cb Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x4b TMov
	var_1_object = var_77_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_83_int = 1; // 0x4e PushI
	if(var_83_int == 0) goto Label_180; // 0x4f JumpB
	var_84_bool = 0; // 0x50 PushV
	var_84_bool = 0; // 0x51 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x52 PushV
	var_86_object = var_1_object; // 0x53 MovT
	func_867(var_86_object); // 0x54 NEW_2
	if(var_85_bool == 0) goto Label_93; // 0x56 JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x57 PushV
	var_94_object = var_1_object; // 0x58 MovT
	func_889(var_94_object); // 0x59 NEW_2
	if(var_93_bool == 0) goto Label_93; // 0x5b JumpB
	var_84_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_84_bool == 0) goto Label_109; // 0x5d JumpB
	var_99_string = ""; // 0x5e PushV
	var_99_string = "Neutral"; // 0x5f MovS
	func_210(var_78_object, var_99_string); // 0x60 NEW_2
	var_116_int = 512188; // 0x62 PushI
	SetMessage(var_116_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_117_int = 512189; // 0x67 PushI
	var_118_int = 14396; // 0x68 PushI
	var_119_int = 13344; // 0x69 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x6a TObjFunc
	goto Label_180; // 0x6c Jump
	
Label_180:
	var_120_bool = 0; // 0xb4 PushV
	func_974(var_120_bool); // 0xb5 NEW_2
	if(var_120_bool == 0) goto Label_195; // 0xb7 JumpB
	
Label_184:
	lshWaitForAnimEnd(); // 0xb8 Func
	var_121_string = var_3_string; // 0xba PushT
	if(var_121_string == 0) goto Label_189; // 0xbb JumpB
	goto Label_194; // 0xbc Jump
	
Label_194:
	goto Label_209; // 0xc2 Jump
	
Label_209:
	return 0; // 0xd1 Return
	
Label_189:
	var_122_string = ""; // 0xbd PushV
	var_122_string = var_2_object; // 0xbe MovT
	func_716(var_122_string); // 0xbf NEW_2
	goto Label_184; // 0xc1 Jump
	
Label_195:
	var_133_string = "all"; // 0xc3 PushS
	var_134_string = "idle"; // 0xc4 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xc5 Func
	
Label_199:
	WaitForAnimEnd(); // 0xc7 Func
	var_135_string = var_3_string; // 0xc9 PushT
	if(var_135_string == 0) goto Label_204; // 0xca JumpB
	goto Label_209; // 0xcb Jump
	
Label_204:
	var_136_string = "all"; // 0xcc PushS
	var_137_string = "idle"; // 0xcd PushS
	PlayAnimation(var_136_string, var_137_string); // 0xce Func
	goto Label_199; // 0xd0 Jump
	
Label_109:
	var_138_bool = 0; // 0x6d PushV
	var_138_bool = 0; // 0x6e MovB
	var_139_bool = 0; var_140_object = Obj(); // 0x6f PushV
	var_140_object = var_1_object; // 0x70 MovT
	func_879(var_139_bool, var_140_object); // 0x71 NEW_2
	if(var_139_bool == 0) goto Label_122; // 0x73 JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x74 PushV
	var_178_object = var_1_object; // 0x75 MovT
	func_855(var_178_object); // 0x76 NEW_2
	if(var_177_bool == 0) goto Label_122; // 0x78 JumpB
	var_138_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_138_bool == 0) goto Label_148; // 0x7a JumpB
	var_183_string = ""; // 0x7b PushV
	var_183_string = "Neutral"; // 0x7c MovS
	func_210(var_78_object, var_183_string); // 0x7d NEW_2
	var_184_int = 513197; // 0x7f PushI
	SetMessage(var_184_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_185_int = 513198; // 0x84 PushI
	var_186_int = 14433; // 0x85 PushI
	var_187_int = 14421; // 0x86 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x87 TObjFunc
	var_188_int = 513199; // 0x89 PushI
	var_189_int = 14428; // 0x8a PushI
	var_190_int = 14422; // 0x8b PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x8c TObjFunc
	var_191_int = 513200; // 0x8e PushI
	var_192_int = 14424; // 0x8f PushI
	var_193_int = 14423; // 0x90 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x91 TObjFunc
	goto Label_180; // 0x93 Jump
	
Label_148:
	var_194_bool = 0; var_195_object = Obj(); // 0x94 PushV
	var_195_object = var_1_object; // 0x95 MovT
	func_855(var_195_object); // 0x96 NEW_2
	if(var_194_bool == 0) goto Label_178; // 0x98 JumpB
	var_196_string = ""; // 0x99 PushV
	var_196_string = "Neutral"; // 0x9a MovS
	func_210(var_78_object, var_196_string); // 0x9b NEW_2
	var_197_int = 513175; // 0x9d PushI
	SetMessage(var_197_int); // 0x9e TObjFunc
	ClearReplies(); // 0xa0 TObjFunc
	var_198_int = 513177; // 0xa2 PushI
	var_199_int = 14398; // 0xa3 PushI
	var_200_int = 14397; // 0xa4 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xa5 TObjFunc
	var_201_int = 513195; // 0xa7 PushI
	var_202_int = 14411; // 0xa8 PushI
	var_203_int = 14417; // 0xa9 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xaa TObjFunc
	var_204_int = 513193; // 0xac PushI
	var_205_int = -1; // 0xad PushI
	var_206_int = 14415; // 0xae PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xaf TObjFunc
	goto Label_180; // 0xb1 Jump
	
Label_178:
	return 0; // 0xb2 Return
}


func_972(var_67_string)
{
	var_67_string = "ui/NPC_bmask_b.png"; // 0x3cc MovS
	return 0; // 0x3cd Return
}


func_781(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x30d PushV
	GetItemID(var_29_int); // 0x30e ObjFunc
	var_32_string = "Category"; // 0x310 PushS
	GetInvItemProperty(var_30_int, var_29_int, var_32_string); // 0x311 Func
	AddItem(var_31_bool, var_24_object, var_30_int, var_25_int); // 0x313 ObjFunc
	var_33_bool = var_31_bool == 0; // 0x315 Not
	if(var_33_bool == 0) goto Label_794; // 0x316 JumpB
	DropItems(var_24_object, var_25_int); // 0x317 ObjFunc
	goto Label_799; // 0x319 Jump
	
Label_799:
	return 6; // 0x31f Return
	
Label_794:
	var_34_int = 0; var_35_int = 0; // 0x31a PushV
	var_34_int = var_29_int; // 0x31b Mov
	var_35_int = var_25_int; // 0x31c Mov
	func_769(var_34_int, var_35_int); // 0x31d NEW_2
}


func_716(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x2cc PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x2cd Func
	var_129_bool = var_126_bool; // 0x2cf Push
	if(var_129_bool == 0) goto Label_727; // 0x2d0 JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x2d1 Func
	var_130_bool = 0; // 0x2d3 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x2d4 Func
	goto Label_731; // 0x2d6 Jump
	
Label_731:
	return 6; // 0x2db Return
	
Label_727:
	var_131_string = "Can't find lsh animation : "; // 0x2d7 PushS
	var_132_int = var_131_string + var_122_string; // 0x2d8 Add
	Trace(var_132_int); // 0x2d9 Func
}


func_974(var_59_bool)
{
	var_59_bool = 0; // 0x3ce MovB
	return 0; // 0x3cf Return
}


func_848()
{
	var_47_bool = 0; var_48_string = ""; var_49_string = ""; // 0x351 PushV
	var_48_string = "quest_d7_01"; // 0x352 MovS
	var_49_string = "kill_player"; // 0x353 MovS
	func_813(var_47_bool, var_48_string, var_49_string); // 0x354 NEW_2
	return 0; // 0x356 Return
}


func_210(var_2_object, var_99_string)
{
	var_100_bool = 0; // 0xd3 PushV
	func_974(var_100_bool); // 0xd4 NEW_2
	var_101_bool = var_100_bool == 0; // 0xd6 Not
	if(var_101_bool == 0) goto Label_217; // 0xd7 JumpB
	return 0; // 0xd8 Return
	
Label_217:
	var_102_bool = var_99_string == var_2_object; // 0xd9 Eq
	if(var_102_bool == 0) goto Label_220; // 0xda JumpB
	return 0; // 0xdb Return
	
Label_220:
	var_103_string = ""; var_104_bool = 0; // 0xdc PushV
	var_103_string = var_99_string; // 0xdd Mov
	var_105_string = ""; // 0xde PushS
	var_106_bool = var_99_string == var_105_string; // 0xdf Eq
	if(var_106_bool == 0) goto Label_227; // 0xe0 JumpB
	var_104_bool = 0; // 0xe1 MovB
	goto Label_228; // 0xe2 Jump
	
Label_228:
	func_732(var_103_string, var_104_bool); // 0xe4 NEW_2
	var_2_object = var_99_string; // 0xe6 TMov
	return 0; // 0xe7 Return
	
Label_227:
	var_104_bool = 1; // 0xe3 MovB
}


func_855(var_177_bool)
{
	var_179_int = 0; var_180_string = ""; // 0x358 PushV
	var_180_string = "d7q01"; // 0x359 MovS
	func_764(var_179_int, var_180_string); // 0x35a NEW_2
	var_181_int = 2; // 0x35c PushI
	var_182_bool = var_179_int == var_181_int; // 0x35d Eq
	if(var_182_bool == 0) goto Label_865; // 0x35e JumpB
	var_177_bool = 1; // 0x35f MovB
	return 0; // 0x360 Return
	
Label_865:
	var_177_bool = 0; // 0x361 MovB
	return 0; // 0x362 Return
}


func_732(var_103_string, var_104_bool)
{
	var_107_bool = 0; var_108_float = 0; var_109_float = 0; var_110_bool = 0; var_111_float = 0; var_112_float = 0; // 0x2dc PushV
	lshHasAnimation(var_110_bool, var_103_string); // 0x2dd Func
	var_113_bool = var_110_bool; // 0x2df Push
	if(var_113_bool == 0) goto Label_742; // 0x2e0 JumpB
	lshGetAnimTimes(var_103_string, var_111_float, var_112_float); // 0x2e1 Func
	lshPlayAnimation(var_111_float, var_112_float, var_104_bool); // 0x2e3 Func
	goto Label_746; // 0x2e5 Jump
	
Label_746:
	return 6; // 0x2ea Return
	
Label_742:
	var_114_string = "Can't find lsh animation : "; // 0x2e6 PushS
	var_115_int = var_114_string + var_103_string; // 0x2e7 Add
	Trace(var_115_int); // 0x2e8 Func
}


func_889(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x37a PushV
	var_96_string = "ood7UBirdmask1"; // 0x37b MovS
	func_764(var_95_int, var_96_string); // 0x37c NEW_2
	var_97_int = 0; // 0x37e PushI
	var_98_bool = var_95_int == var_97_int; // 0x37f Eq
	if(var_98_bool == 0) goto Label_899; // 0x380 JumpB
	var_93_bool = 1; // 0x381 MovB
	return 0; // 0x382 Return
	
Label_899:
	var_93_bool = 0; // 0x383 MovB
	return 0; // 0x384 Return
}


func_800(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x320 PushV
	CreateInvItem(var_22_object); // 0x321 Func
	SetItemName(var_19_string); // 0x323 ObjFunc
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; // 0x325 PushV
	var_23_object = var_18_object; // 0x326 Mov
	var_24_object = var_22_object; // 0x327 Mov
	var_25_int = var_20_int; // 0x328 Mov
	func_781(var_24_object, var_25_int); // 0x329 NEW_2
	return 2; // 0x32b Return
}


func_867(var_85_bool)
{
	var_87_int = 0; var_88_string = ""; // 0x364 PushV
	var_88_string = "d7q01"; // 0x365 MovS
	func_764(var_87_int, var_88_string); // 0x366 NEW_2
	var_91_int = 1; // 0x368 PushI
	var_92_bool = var_87_int == var_91_int; // 0x369 Eq
	if(var_92_bool == 0) goto Label_877; // 0x36a JumpB
	var_85_bool = 1; // 0x36b MovB
	return 0; // 0x36c Return
	
Label_877:
	var_85_bool = 0; // 0x36d MovB
	return 0; // 0x36e Return
}


func_747()
{
	var_8_bool = 0; // 0x2eb PushV
	func_974(var_8_bool); // 0x2ec NEW_2
	if(var_8_bool == 0) goto Label_753; // 0x2ee JumpB
	lshStopSpeech(); // 0x2ef Func
	
Label_753:
	return 0; // 0x2f1 Return
}


func_813(var_47_bool, var_48_string, var_49_string)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x32d PushV
	FindActor(var_51_object, var_48_string); // 0x32e Func
	var_52_bool = var_51_object == 0; // 0x330 NullEq
	if(var_52_bool == 0) goto Label_820; // 0x331 JumpB
	var_47_bool = 0; // 0x332 MovB
	return 2; // 0x333 Return
	
Label_820:
	Trigger(var_51_object, var_49_string); // 0x334 Func
	var_47_bool = 1; // 0x336 MovB
	return 2; // 0x337 Return
}


func_879(var_139_bool, var_140_object)
{
	var_141_bool = 0; var_142_object = Obj(); // 0x370 PushV
	var_142_object = var_140_object; // 0x371 Mov
	func_901(var_142_object); // 0x372 NEW_2
	if(var_141_bool == 0) goto Label_887; // 0x374 JumpB
	var_139_bool = 1; // 0x375 MovB
	return 0; // 0x376 Return
	
Label_887:
	var_139_bool = 0; // 0x377 MovB
	return 0; // 0x378 Return
}


func_754(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x2f2 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x2f3 Or
	var_48_float = sqrt(var_49_int); // 0x2f4 Sqrt2
	var_50_float = 0.0; // 0x2f5 PushF
	var_51_bool = var_48_float < var_50_float; // 0x2f6 LT
	if(var_51_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x2f8 MovV
	return 2; // 0x2f9 Return
	
Label_762:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x2fa Div2
	return 2; // 0x2fb Return
}


func_949(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x3b5 PushV
	var_71_string = "branch"; // 0x3b6 PushS
	GetVariable(var_71_string, var_70_int); // 0x3b7 Func
	var_72_int = 0; // 0x3b9 PushI
	var_73_bool = var_70_int == var_72_int; // 0x3ba Eq
	if(var_73_bool == 0) goto Label_959; // 0x3bb JumpB
	var_68_int = 1; // 0x3bc MovI
	return 2; // 0x3bd Return
	
Label_959:
	var_74_int = 1; // 0x3bf PushI
	var_75_bool = var_70_int == var_74_int; // 0x3c0 Eq
	if(var_75_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_68_int = 2; // 0x3c2 MovI
	return 2; // 0x3c3 Return
	
Label_964:
	var_68_int = 3; // 0x3c4 MovI
	return 2; // 0x3c5 Return
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
	func_754(var_44_cvector, var_45_cvector); // 0x292 NEW_2
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
	CameraTransit(var_35_cvector, var_33_cvector); // 0x2a2 Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x2a4 PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x2a5 PushE
	Rotate(var_57_float, var_58_float); // 0x2a6 Func
	var_59_bool = 0; // 0x2a8 PushV
	func_974(var_59_bool); // 0x2a9 NEW_2
	if(var_59_bool == 0) goto Label_685; // 0x2ab JumpB
	goto Label_693; // 0x2ac Jump
	
Label_693:
	CameraWaitForPlayFinish(); // 0x2b5 Func
	ResumeWorld(); // 0x2b7 Func
	var_17_bool = 1; // 0x2b9 MovB
	return 18; // 0x2ba Return
	
Label_685:
	var_60_string = "head"; // 0x2ad PushS
	HasAnimationTrack(var_37_bool, var_60_string); // 0x2ae Func
	var_61_bool = var_37_bool; // 0x2b0 Push
	if(var_61_bool == 0) goto Label_693; // 0x2b1 JumpB
	var_62_string = "head"; // 0x2b2 PushS
	LookAsyncCamera(var_62_string); // 0x2b3 Func
}


func_825()
{
	var_41_string = "playsound"; // 0x33a PushS
	var_42_string = "giveitem"; // 0x33b PushS
	TriggerWorld(var_41_string, var_42_string); // 0x33c Func
	return 0; // 0x33e Return
}


func_699()
{
	var_209_bool = 0; var_210_bool = 0; // 0x2bb PushV
	CameraSwitchToNormal(); // 0x2bc Func
	var_211_bool = 0; // 0x2be PushV
	func_974(var_211_bool); // 0x2bf NEW_2
	if(var_211_bool == 0) goto Label_707; // 0x2c1 JumpB
	goto Label_715; // 0x2c2 Jump
	
Label_715:
	return 2; // 0x2cb Return
	
Label_707:
	var_212_string = "head"; // 0x2c3 PushS
	HasAnimationTrack(var_210_bool, var_212_string); // 0x2c4 Func
	var_213_bool = var_210_bool; // 0x2c6 Push
	if(var_213_bool == 0) goto Label_715; // 0x2c7 JumpB
	var_214_string = "head"; // 0x2c8 PushS
	UnlookAsync(var_214_string); // 0x2c9 Func
}


func_764(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0; // 0x2fc PushV
	GetVariable(var_88_string, var_90_int); // 0x2fd Func
	var_87_int = var_90_int; // 0x2ff Mov
	return 2; // 0x300 Return
}


func_831()
{
	var_13_string = "ood7UBirdmask1"; // 0x340 PushS
	var_14_int = 1; // 0x341 PushI
	SetVariable(var_13_string, var_14_int); // 0x342 Func
	return 0; // 0x344 Return
}


