task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xe7 PushI
	if(var_9_int == 0) goto Label_525; // 0xe8 JumpB
	func_713(); // 0xea NEW_2
	var_11_int = 15373; // 0xec PushI
	var_12_bool = var_8_bool == var_11_int; // 0xed Eq
	if(var_12_bool == 0) goto Label_244; // 0xee JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xef PushV
	var_13_object = var_1_object; // 0xf0 MovT
	var_14_object = var_0_object; // 0xf1 MovT
	func_820(); // 0xf2 NEW_2
	
Label_244:
	var_54_int = 15376; // 0xf4 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xf5 Eq
	if(var_55_bool == 0) goto Label_252; // 0xf6 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xf7 PushV
	var_56_object = var_1_object; // 0xf8 MovT
	var_57_object = var_0_object; // 0xf9 MovT
	func_854(); // 0xfa NEW_2
	
Label_252:
	var_60_int = 15378; // 0xfc PushI
	var_61_bool = var_8_bool == var_60_int; // 0xfd Eq
	if(var_61_bool == 0) goto Label_275; // 0xfe JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xff PushV
	var_62_object = var_1_object; // 0x100 MovT
	var_63_object = var_0_object; // 0x101 MovT
	func_837(); // 0x102 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x104 PushV
	var_81_object = var_1_object; // 0x105 MovT
	var_82_object = var_0_object; // 0x106 MovT
	func_803(var_82_object); // 0x107 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x109 PushV
	var_105_object = var_1_object; // 0x10a MovT
	var_106_object = var_0_object; // 0x10b MovT
	func_797(); // 0x10c NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x10e PushV
	var_109_object = var_1_object; // 0x10f MovT
	var_110_object = var_0_object; // 0x110 MovT
	func_860(); // 0x111 NEW_2
	
Label_275:
	var_112_int = 41554; // 0x113 PushI
	var_113_bool = var_8_bool == var_112_int; // 0x114 Eq
	if(var_113_bool == 0) goto Label_288; // 0x115 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x116 PushV
	var_114_object = var_1_object; // 0x117 MovT
	var_115_object = var_0_object; // 0x118 MovT
	func_837(); // 0x119 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x11b PushV
	var_116_object = var_1_object; // 0x11c MovT
	var_117_object = var_0_object; // 0x11d MovT
	func_860(); // 0x11e NEW_2
	
Label_288:
	var_118_int = 15379; // 0x120 PushI
	var_119_bool = var_8_bool == var_118_int; // 0x121 Eq
	if(var_119_bool == 0) goto Label_296; // 0x122 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x123 PushV
	var_120_object = var_1_object; // 0x124 MovT
	var_121_object = var_0_object; // 0x125 MovT
	func_814(); // 0x126 NEW_2
	
Label_296:
	var_124_int = 15381; // 0x128 PushI
	var_125_bool = var_8_bool == var_124_int; // 0x129 Eq
	if(var_125_bool == 0) goto Label_304; // 0x12a JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x12b PushV
	var_126_object = var_1_object; // 0x12c MovT
	var_127_object = var_0_object; // 0x12d MovT
	func_860(); // 0x12e NEW_2
	
Label_304:
	var_128_int = 15370; // 0x130 PushI
	var_129_bool = var_7_bool == var_128_int; // 0x131 Eq
	if(var_129_bool == 0) goto Label_403; // 0x132 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x133 PushV
	var_131_object = var_1_object; // 0x134 MovT
	func_877(var_131_object); // 0x135 NEW_2
	if(var_130_bool == 0) goto Label_332; // 0x137 JumpB
	var_136_string = ""; // 0x138 PushV
	var_136_string = "Neutral"; // 0x139 MovS
	func_208(var_8_bool, var_136_string); // 0x13a NEW_2
	var_153_int = 514156; // 0x13c PushI
	SetMessage(var_153_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_154_int = 514169; // 0x141 PushI
	var_155_int = 15384; // 0x142 PushI
	var_156_int = 15383; // 0x143 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x144 TObjFunc
	var_157_int = 539603; // 0x146 PushI
	var_158_int = 15384; // 0x147 PushI
	var_159_int = 41547; // 0x148 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_160_string = ""; // 0x14c PushV
	var_160_string = "Neutral"; // 0x14d MovS
	func_208(var_8_bool, var_160_string); // 0x14e NEW_2
	var_161_int = 514161; // 0x150 PushI
	SetMessage(var_161_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_162_bool = 0; // 0x155 PushV
	var_162_bool = 1; // 0x156 MovB
	var_163_bool = 0; // 0x157 PushV
	var_163_bool = 0; // 0x158 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x159 PushV
	var_165_object = var_1_object; // 0x15a MovT
	func_889(var_165_object); // 0x15b NEW_2
	if(var_164_bool == 0) goto Label_356; // 0x15d JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x15e PushV
	var_171_object = var_1_object; // 0x15f MovT
	func_913(var_171_object); // 0x160 NEW_2
	if(var_170_bool == 0) goto Label_356; // 0x162 JumpB
	var_163_bool = 1; // 0x163 MovB
	
Label_356:
	if(var_163_bool == 0) goto Label_372; // 0x164 JumpB
	var_176_bool = 0; // 0x165 PushV
	var_176_bool = 0; // 0x166 MovB
	var_177_bool = 0; var_178_object = Obj(); // 0x167 PushV
	var_178_object = var_1_object; // 0x168 MovT
	func_925(var_178_object); // 0x169 NEW_2
	if(var_177_bool == 0) goto Label_370; // 0x16b JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x16c PushV
	var_184_object = var_1_object; // 0x16d MovT
	func_913(var_184_object); // 0x16e NEW_2
	if(var_183_bool == 0) goto Label_370; // 0x170 JumpB
	var_176_bool = 1; // 0x171 MovB
	
Label_370:
	if(var_176_bool == 0) goto Label_372; // 0x172 JumpB
	var_162_bool = 0; // 0x173 MovB
	
Label_372:
	if(var_162_bool == 0) goto Label_378; // 0x174 JumpB
	var_185_int = 514162; // 0x175 PushI
	var_186_int = 15377; // 0x176 PushI
	var_187_int = 15376; // 0x177 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x178 TObjFunc
	
Label_378:
	var_188_bool = 0; // 0x17a PushV
	var_188_bool = 0; // 0x17b MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x17c PushV
	var_190_object = var_1_object; // 0x17d MovT
	func_901(var_190_object); // 0x17e NEW_2
	if(var_189_bool == 0) goto Label_391; // 0x180 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x181 PushV
	var_196_object = var_1_object; // 0x182 MovT
	func_865(var_196_object); // 0x183 NEW_2
	if(var_195_bool == 0) goto Label_391; // 0x185 JumpB
	var_188_bool = 1; // 0x186 MovB
	
Label_391:
	if(var_188_bool == 0) goto Label_397; // 0x187 JumpB
	var_201_int = 514165; // 0x188 PushI
	var_202_int = 15380; // 0x189 PushI
	var_203_int = 15379; // 0x18a PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x18b TObjFunc
	
Label_397:
	var_204_int = 514168; // 0x18d PushI
	var_205_int = -1; // 0x18e PushI
	var_206_int = 15382; // 0x18f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x190 TObjFunc
	return 0; // 0x192 Return
	
Label_403:
	var_207_int = 15380; // 0x193 PushI
	var_208_bool = var_7_bool == var_207_int; // 0x194 Eq
	if(var_208_bool == 0) goto Label_421; // 0x195 JumpB
	var_209_string = ""; // 0x196 PushV
	var_209_string = "Neutral"; // 0x197 MovS
	func_208(var_8_bool, var_209_string); // 0x198 NEW_2
	var_210_int = 514166; // 0x19a PushI
	SetMessage(var_210_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_211_int = 514167; // 0x19f PushI
	var_212_int = -1; // 0x1a0 PushI
	var_213_int = 15381; // 0x1a1 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1a2 TObjFunc
	return 0; // 0x1a4 Return
	
Label_421:
	var_214_int = 15377; // 0x1a5 PushI
	var_215_bool = var_7_bool == var_214_int; // 0x1a6 Eq
	if(var_215_bool == 0) goto Label_444; // 0x1a7 JumpB
	var_216_string = ""; // 0x1a8 PushV
	var_216_string = "Neutral"; // 0x1a9 MovS
	func_208(var_8_bool, var_216_string); // 0x1aa NEW_2
	var_217_int = 514163; // 0x1ac PushI
	SetMessage(var_217_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_218_int = 514164; // 0x1b1 PushI
	var_219_int = -1; // 0x1b2 PushI
	var_220_int = 15378; // 0x1b3 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1b4 TObjFunc
	var_221_int = 539608; // 0x1b6 PushI
	var_222_int = -1; // 0x1b7 PushI
	var_223_int = 41554; // 0x1b8 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_224_int = 15384; // 0x1bc PushI
	var_225_bool = var_7_bool == var_224_int; // 0x1bd Eq
	if(var_225_bool == 0) goto Label_467; // 0x1be JumpB
	var_226_string = ""; // 0x1bf PushV
	var_226_string = "Neutral"; // 0x1c0 MovS
	func_208(var_8_bool, var_226_string); // 0x1c1 NEW_2
	var_227_int = 514170; // 0x1c3 PushI
	SetMessage(var_227_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_228_int = 514157; // 0x1c8 PushI
	var_229_int = 15372; // 0x1c9 PushI
	var_230_int = 15371; // 0x1ca PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1cb TObjFunc
	var_231_int = 539604; // 0x1cd PushI
	var_232_int = 41550; // 0x1ce PushI
	var_233_int = 41549; // 0x1cf PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_234_int = 41550; // 0x1d3 PushI
	var_235_bool = var_7_bool == var_234_int; // 0x1d4 Eq
	if(var_235_bool == 0) goto Label_490; // 0x1d5 JumpB
	var_236_string = ""; // 0x1d6 PushV
	var_236_string = "Neutral"; // 0x1d7 MovS
	func_208(var_8_bool, var_236_string); // 0x1d8 NEW_2
	var_237_int = 539605; // 0x1da PushI
	SetMessage(var_237_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_238_int = 539606; // 0x1df PushI
	var_239_int = 15372; // 0x1e0 PushI
	var_240_int = 41551; // 0x1e1 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1e2 TObjFunc
	var_241_int = 539609; // 0x1e4 PushI
	var_242_int = -1; // 0x1e5 PushI
	var_243_int = 41555; // 0x1e6 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_244_int = 15372; // 0x1ea PushI
	var_245_bool = var_7_bool == var_244_int; // 0x1eb Eq
	if(var_245_bool == 0) goto Label_513; // 0x1ec JumpB
	var_246_string = ""; // 0x1ed PushV
	var_246_string = "Neutral"; // 0x1ee MovS
	func_208(var_8_bool, var_246_string); // 0x1ef NEW_2
	var_247_int = 514158; // 0x1f1 PushI
	SetMessage(var_247_int); // 0x1f2 TObjFunc
	ClearReplies(); // 0x1f4 TObjFunc
	var_248_int = 514159; // 0x1f6 PushI
	var_249_int = -1; // 0x1f7 PushI
	var_250_int = 15373; // 0x1f8 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1f9 TObjFunc
	var_251_int = 514160; // 0x1fb PushI
	var_252_int = -1; // 0x1fc PushI
	var_253_int = 15374; // 0x1fd PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x1fe TObjFunc
	return 0; // 0x200 Return
	
Label_513:
	var_3_string = 1; // 0x201 TMovB
	var_254_bool = 0; // 0x202 PushV
	func_1042(var_254_bool); // 0x203 NEW_2
	if(var_254_bool == 0) goto Label_521; // 0x205 JumpB
	lshStopAnimation(); // 0x206 Func
	goto Label_523; // 0x208 Jump
	
Label_523:
	return 0; // 0x20b Return
	
Label_521:
	StopAnimation(); // 0x209 Func
	
Label_525:
	return 0; // 0x20d Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object)
{
	var_8_object = var_1_object; // 0x214 PushT
	if(var_8_object == 0) goto Label_544; // 0x215 JumpB
	var_9_int = 0; var_10_object = Obj(); // 0x216 PushV
	var_10_object = var_7_object; // 0x217 Mov
	TaskCall(0); // 0x218 TaskCall
	func_0(var_11_object, var_9_int, var_10_object); // 0x219 NEW_2
	TaskReturn(); // 0x21a TaskReturn
	var_194_int = 1000; // 0x21c PushI
	var_195_bool = var_11_object == var_194_int; // 0x21d Eq
	if(var_195_bool == 0) goto Label_544; // 0x21e JumpB
	var_1_object = 0; // 0x21f TMovB
	
Label_544:
	return 0; // 0x220 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x225 PushV
	var_10_string = "cleanup"; // 0x226 PushS
	var_11_bool = var_7_string == var_10_string; // 0x227 Eq
	if(var_11_bool == 0) goto Label_572; // 0x228 JumpB
	var_0_object = 1; // 0x229 TMovB
	IsLoaded(var_9_bool); // 0x22a Func
	var_12_bool = 0; // 0x22c PushV
	var_12_bool = 0; // 0x22d MovB
	var_13_bool = var_9_bool == 0; // 0x22e Not
	if(var_13_bool == 0) goto Label_565; // 0x22f JumpB
	var_14_bool = 0; // 0x230 PushV
	func_593(var_14_bool); // 0x231 NEW_2
	if(var_14_bool == 0) goto Label_565; // 0x233 JumpB
	var_12_bool = 1; // 0x234 MovB
	
Label_565:
	if(var_12_bool == 0) goto Label_571; // 0x235 JumpB
	var_15_object = Obj(); // 0x236 PushV
	func_720(var_15_object); // 0x237 NEW_2
	RemoveActor(var_15_object); // 0x239 Func
	
Label_571:
	goto Label_576; // 0x23b Jump
	
Label_576:
	return 2; // 0x240 Return
	
Label_572:
	var_18_string = "restore"; // 0x23c PushS
	var_19_bool = var_7_string == var_18_string; // 0x23d Eq
	if(var_19_bool == 0) goto Label_576; // 0x23e JumpB
	var_0_object = 0; // 0x23f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_7_bool = 0; // 0x241 PushV
	var_7_bool = 0; // 0x242 MovB
	var_8_object = var_0_object; // 0x243 PushT
	if(var_8_object == 0) goto Label_586; // 0x244 JumpB
	var_9_bool = 0; // 0x245 PushV
	func_593(var_9_bool); // 0x246 NEW_2
	if(var_9_bool == 0) goto Label_586; // 0x248 JumpB
	var_7_bool = 1; // 0x249 MovB
	
Label_586:
	if(var_7_bool == 0) goto Label_592; // 0x24a JumpB
	var_10_object = Obj(); // 0x24b PushV
	func_720(var_10_object); // 0x24c NEW_2
	RemoveActor(var_10_object); // 0x24e Func
	
Label_592:
	return 0; // 0x250 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool)
{
	var_1_object = 1; // 0x20e TMovB
	func_545(); // 0x210 NEW_2
	return 0; // 0x212 Return
}


func_0(var_0_object, var_9_int, var_10_object)
{
	var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; // 0x0 PushV
	var_0_object = var_10_object; // 0x1 TMov
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x2 PushV
	var_21_object = var_10_object; // 0x3 Mov
	var_22_float = 70.0; // 0x4 MovF
	func_595(var_21_object, var_22_float); // 0x5 NEW_2
	var_67_bool = var_20_bool == 0; // 0x7 Not
	if(var_67_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_68_int = 0; // 0xd PushV
	func_1036(var_68_int); // 0xe NEW_2
	SetNPCName(var_68_int); // 0x10 ObjFunc
	var_69_int = 0; // 0x12 PushV
	func_1034(var_69_int); // 0x13 NEW_2
	SetNPCDescription(var_69_int); // 0x15 ObjFunc
	var_70_string = ""; // 0x17 PushV
	func_1038(var_70_string); // 0x18 NEW_2
	SetPhoto(var_70_string); // 0x1a ObjFunc
	var_71_string = ""; // 0x1c PushV
	func_1040(var_71_string); // 0x1d NEW_2
	SetPhoto2(var_71_string); // 0x1f ObjFunc
	var_72_int = 0; // 0x21 PushV
	func_1017(var_72_int); // 0x22 NEW_2
	SetPlayerName(var_72_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_80_bool = var_17_bool; // 0x29 Push
	if(var_80_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_81_object = Obj(); var_82_object = Obj(); // 0x2f PushV
	var_81_object = var_10_object; // 0x30 Mov
	var_82_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_185_bool = var_19_bool == 0; // 0x38 Not
	if(var_185_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_186_object = Obj(); // 0x3f PushV
	var_186_object = var_10_object; // 0x40 Mov
	func_664(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_772(var_84_object, var_85_string, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x304 PushV
	CreateInvItem(var_88_object); // 0x305 Func
	SetItemName(var_85_string); // 0x307 ObjFunc
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; // 0x309 PushV
	var_89_object = var_84_object; // 0x30a Mov
	var_90_object = var_88_object; // 0x30b Mov
	var_91_int = var_86_int; // 0x30c Mov
	func_753(var_90_object, var_91_int); // 0x30d NEW_2
	return 2; // 0x30f Return
}


func_901(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x386 PushV
	var_170_string = "d11q02"; // 0x387 MovS
	func_736(var_169_int, var_170_string); // 0x388 NEW_2
	var_171_int = -1; // 0x38a PushI
	var_172_bool = var_169_int == var_171_int; // 0x38b Eq
	if(var_172_bool == 0) goto Label_911; // 0x38c JumpB
	var_167_bool = 1; // 0x38d MovB
	return 0; // 0x38e Return
	
Label_911:
	var_167_bool = 0; // 0x38f MovB
	return 0; // 0x390 Return
}


func_1034(var_69_int)
{
	var_69_int = 515561; // 0x40a MovI
	return 0; // 0x40b Return
}


func_1036(var_68_int)
{
	var_68_int = 503346; // 0x40c MovI
	return 0; // 0x40d Return
}


func_1038(var_70_string)
{
	var_70_string = "ui/NPC_Citizen1.png"; // 0x40e MovS
	return 0; // 0x40f Return
}


func_1040(var_71_string)
{
	var_71_string = "ui/NPC_Citizen1_b.png"; // 0x410 MovS
	return 0; // 0x411 Return
}


func_913(var_148_bool)
{
	var_150_int = 0; var_151_string = ""; // 0x392 PushV
	var_151_string = "ood11ULittleGirl2"; // 0x393 MovS
	func_736(var_150_int, var_151_string); // 0x394 NEW_2
	var_152_int = 0; // 0x396 PushI
	var_153_bool = var_150_int == var_152_int; // 0x397 Eq
	if(var_153_bool == 0) goto Label_923; // 0x398 JumpB
	var_148_bool = 1; // 0x399 MovB
	return 0; // 0x39a Return
	
Label_923:
	var_148_bool = 0; // 0x39b MovB
	return 0; // 0x39c Return
}


func_1042(var_63_bool)
{
	var_63_bool = 0; // 0x412 MovB
	return 0; // 0x413 Return
}


func_785(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x311 PushV
	FindActor(var_52_object, var_49_string); // 0x312 Func
	var_53_bool = var_52_object == 0; // 0x314 NullEq
	if(var_53_bool == 0) goto Label_792; // 0x315 JumpB
	var_48_bool = 0; // 0x316 MovB
	return 2; // 0x317 Return
	
Label_792:
	Trigger(var_52_object, var_50_string); // 0x318 Func
	var_48_bool = 1; // 0x31a MovB
	return 2; // 0x31b Return
}


func_664()
{
	var_187_bool = 0; var_188_bool = 0; // 0x298 PushV
	var_189_bool = 1; // 0x299 PushB
	CameraSwitchToNormal(var_189_bool); // 0x29a Func
	var_190_bool = 0; // 0x29c PushV
	func_1042(var_190_bool); // 0x29d NEW_2
	if(var_190_bool == 0) goto Label_673; // 0x29f JumpB
	goto Label_681; // 0x2a0 Jump
	
Label_681:
	return 2; // 0x2a9 Return
	
Label_673:
	var_191_string = "head"; // 0x2a1 PushS
	HasAnimationTrack(var_188_bool, var_191_string); // 0x2a2 Func
	var_192_bool = var_188_bool; // 0x2a4 Push
	if(var_192_bool == 0) goto Label_681; // 0x2a5 JumpB
	var_193_string = "head"; // 0x2a6 PushS
	UnlookAsync(var_193_string); // 0x2a7 Func
}


func_797()
{
	var_107_string = "playsound"; // 0x31e PushS
	var_108_string = "giveitem"; // 0x31f PushS
	TriggerWorld(var_107_string, var_108_string); // 0x320 Func
	return 0; // 0x322 Return
}


func_925(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x39e PushV
	var_158_string = "d11q02"; // 0x39f MovS
	func_736(var_157_int, var_158_string); // 0x3a0 NEW_2
	var_159_int = 1000; // 0x3a2 PushI
	var_160_bool = var_157_int == var_159_int; // 0x3a3 Eq
	if(var_160_bool == 0) goto Label_935; // 0x3a4 JumpB
	var_155_bool = 1; // 0x3a5 MovB
	return 0; // 0x3a6 Return
	
Label_935:
	var_155_bool = 0; // 0x3a7 MovB
	return 0; // 0x3a8 Return
}


func_545()
{
	
Label_545:
	Hold(); // 0x221 Func
	goto Label_545; // 0x223 Jump
}


func_803(var_81_object)
{
	var_83_string = "powder is given"; // 0x324 PushS
	Trace(var_83_string); // 0x325 Func
	var_84_object = Obj(); var_85_string = ""; var_86_int = 0; // 0x327 PushV
	var_84_object = var_81_object; // 0x328 Mov
	var_85_string = "powder"; // 0x329 MovS
	var_86_int = 1; // 0x32a MovI
	func_772(var_84_object, var_85_string, var_86_int); // 0x32b NEW_2
	return 0; // 0x32d Return
}


func_937()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x3a9 PushV
	var_19_int = 197; // 0x3aa PushI
	var_20_int = 2; // 0x3ab PushI
	var_21_int = 515485; // 0x3ac PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x3ad Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x3af PushV
	var_23_object = var_18_object; // 0x3b0 Mov
	var_24_int = -1; // 0x3b1 MovI
	func_989(var_22_bool, var_23_object, var_24_int); // 0x3b2 NEW_2
	return 2; // 0x3b4 Return
}


func_682(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0; // 0x2aa PushV
	lshHasAnimation(var_126_bool, var_122_string); // 0x2ab Func
	var_129_bool = var_126_bool; // 0x2ad Push
	if(var_129_bool == 0) goto Label_693; // 0x2ae JumpB
	lshGetAnimTimes(var_122_string, var_127_float, var_128_float); // 0x2af Func
	var_130_bool = 0; // 0x2b1 PushB
	lshPlayAnimation(var_127_float, var_128_float, var_130_bool); // 0x2b2 Func
	goto Label_697; // 0x2b4 Jump
	
Label_697:
	return 6; // 0x2b9 Return
	
Label_693:
	var_131_string = "Can't find lsh animation : "; // 0x2b5 PushS
	var_132_int = var_131_string + var_122_string; // 0x2b6 Add
	Trace(var_132_int); // 0x2b7 Func
}


func_814()
{
	var_122_string = "ood11ULittleGirl1"; // 0x32f PushS
	var_123_int = 1; // 0x330 PushI
	SetVariable(var_122_string, var_123_int); // 0x331 Func
	return 0; // 0x333 Return
}


func_820()
{
	var_15_string = "d11q02"; // 0x335 PushS
	var_16_int = 1; // 0x336 PushI
	SetVariable(var_15_string, var_16_int); // 0x337 Func
	func_937(); // 0x33a NEW_2
	func_963(); // 0x33d NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x33f PushV
	var_49_string = "quest_d11_02"; // 0x340 MovS
	var_50_string = "init_graveyard"; // 0x341 MovS
	func_785(var_48_bool, var_49_string, var_50_string); // 0x342 NEW_2
	return 0; // 0x344 Return
}


func_950()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x3b6 PushV
	var_72_int = 198; // 0x3b7 PushI
	var_73_int = 2; // 0x3b8 PushI
	var_74_int = 515486; // 0x3b9 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x3ba Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x3bc PushV
	var_76_object = var_71_object; // 0x3bd Mov
	var_77_int = 197; // 0x3be MovI
	func_989(var_75_bool, var_76_object, var_77_int); // 0x3bf NEW_2
	return 2; // 0x3c1 Return
}


func_698(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x2ba PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x2bb Func
	var_110_bool = var_107_bool; // 0x2bd Push
	if(var_110_bool == 0) goto Label_708; // 0x2be JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x2bf Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x2c1 Func
	goto Label_712; // 0x2c3 Jump
	
Label_712:
	return 6; // 0x2c8 Return
	
Label_708:
	var_111_string = "Can't find lsh animation : "; // 0x2c4 PushS
	var_112_int = var_111_string + var_100_string; // 0x2c5 Add
	Trace(var_112_int); // 0x2c6 Func
}


func_963()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x3c3 PushV
	var_42_int = 199; // 0x3c4 PushI
	var_43_int = 2; // 0x3c5 PushI
	var_44_int = 515487; // 0x3c6 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x3c7 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x3c9 PushV
	var_46_object = var_41_object; // 0x3ca Mov
	var_47_int = 197; // 0x3cb MovI
	func_989(var_45_bool, var_46_object, var_47_int); // 0x3cc NEW_2
	return 2; // 0x3ce Return
}


func_837()
{
	var_64_int = 0; var_65_string = ""; // 0x346 PushV
	var_65_string = "d11q02"; // 0x347 MovS
	func_736(var_64_int, var_65_string); // 0x348 NEW_2
	var_68_int = 1000; // 0x34a PushI
	var_69_bool = var_64_int != var_68_int; // 0x34b Neq
	if(var_69_bool == 0) goto Label_853; // 0x34c JumpB
	func_950(); // 0x34e NEW_2
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x350 PushV
	var_79_string = "quest_d11_02"; // 0x351 MovS
	var_80_string = "completed"; // 0x352 MovS
	func_785(var_78_bool, var_79_string, var_80_string); // 0x353 NEW_2
	
Label_853:
	return 0; // 0x355 Return
}


func_713()
{
	var_10_bool = 0; // 0x2c9 PushV
	func_1042(var_10_bool); // 0x2ca NEW_2
	if(var_10_bool == 0) goto Label_719; // 0x2cc JumpB
	lshStopSpeech(); // 0x2cd Func
	
Label_719:
	return 0; // 0x2cf Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_81_object, var_82_object)
{
	var_0_object = var_82_object; // 0x4b TMov
	var_1_object = var_81_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_87_int = 1; // 0x4e PushI
	if(var_87_int == 0) goto Label_178; // 0x4f JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0x50 PushV
	var_89_object = var_1_object; // 0x51 MovT
	func_877(var_89_object); // 0x52 NEW_2
	if(var_88_bool == 0) goto Label_105; // 0x54 JumpB
	var_96_string = ""; // 0x55 PushV
	var_96_string = "Neutral"; // 0x56 MovS
	func_208(var_82_object, var_96_string); // 0x57 NEW_2
	var_113_int = 514156; // 0x59 PushI
	SetMessage(var_113_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_114_int = 514169; // 0x5e PushI
	var_115_int = 15384; // 0x5f PushI
	var_116_int = 15383; // 0x60 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x61 TObjFunc
	var_117_int = 539603; // 0x63 PushI
	var_118_int = 15384; // 0x64 PushI
	var_119_int = 41547; // 0x65 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x66 TObjFunc
	goto Label_178; // 0x68 Jump
	
Label_178:
	var_120_bool = 0; // 0xb2 PushV
	func_1042(var_120_bool); // 0xb3 NEW_2
	if(var_120_bool == 0) goto Label_193; // 0xb5 JumpB
	
Label_182:
	lshWaitForAnimEnd(); // 0xb6 Func
	var_121_string = var_3_string; // 0xb8 PushT
	if(var_121_string == 0) goto Label_187; // 0xb9 JumpB
	goto Label_192; // 0xba Jump
	
Label_192:
	goto Label_207; // 0xc0 Jump
	
Label_207:
	return 0; // 0xcf Return
	
Label_187:
	var_122_string = ""; // 0xbb PushV
	var_122_string = var_2_object; // 0xbc MovT
	func_682(var_122_string); // 0xbd NEW_2
	goto Label_182; // 0xbf Jump
	
Label_193:
	var_133_string = "all"; // 0xc1 PushS
	var_134_string = "idle"; // 0xc2 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xc3 Func
	
Label_197:
	WaitForAnimEnd(); // 0xc5 Func
	var_135_string = var_3_string; // 0xc7 PushT
	if(var_135_string == 0) goto Label_202; // 0xc8 JumpB
	goto Label_207; // 0xc9 Jump
	
Label_202:
	var_136_string = "all"; // 0xca PushS
	var_137_string = "idle"; // 0xcb PushS
	PlayAnimation(var_136_string, var_137_string); // 0xcc Func
	goto Label_197; // 0xce Jump
	
Label_105:
	var_138_string = ""; // 0x69 PushV
	var_138_string = "Neutral"; // 0x6a MovS
	func_208(var_82_object, var_138_string); // 0x6b NEW_2
	var_139_int = 514161; // 0x6d PushI
	SetMessage(var_139_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_140_bool = 0; // 0x72 PushV
	var_140_bool = 1; // 0x73 MovB
	var_141_bool = 0; // 0x74 PushV
	var_141_bool = 0; // 0x75 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x76 PushV
	var_143_object = var_1_object; // 0x77 MovT
	func_889(var_143_object); // 0x78 NEW_2
	if(var_142_bool == 0) goto Label_129; // 0x7a JumpB
	var_148_bool = 0; var_149_object = Obj(); // 0x7b PushV
	var_149_object = var_1_object; // 0x7c MovT
	func_913(var_149_object); // 0x7d NEW_2
	if(var_148_bool == 0) goto Label_129; // 0x7f JumpB
	var_141_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_141_bool == 0) goto Label_145; // 0x81 JumpB
	var_154_bool = 0; // 0x82 PushV
	var_154_bool = 0; // 0x83 MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x84 PushV
	var_156_object = var_1_object; // 0x85 MovT
	func_925(var_156_object); // 0x86 NEW_2
	if(var_155_bool == 0) goto Label_143; // 0x88 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x89 PushV
	var_162_object = var_1_object; // 0x8a MovT
	func_913(var_162_object); // 0x8b NEW_2
	if(var_161_bool == 0) goto Label_143; // 0x8d JumpB
	var_154_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_154_bool == 0) goto Label_145; // 0x8f JumpB
	var_140_bool = 0; // 0x90 MovB
	
Label_145:
	if(var_140_bool == 0) goto Label_151; // 0x91 JumpB
	var_163_int = 514162; // 0x92 PushI
	var_164_int = 15377; // 0x93 PushI
	var_165_int = 15376; // 0x94 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x95 TObjFunc
	
Label_151:
	var_166_bool = 0; // 0x97 PushV
	var_166_bool = 0; // 0x98 MovB
	var_167_bool = 0; var_168_object = Obj(); // 0x99 PushV
	var_168_object = var_1_object; // 0x9a MovT
	func_901(var_168_object); // 0x9b NEW_2
	if(var_167_bool == 0) goto Label_164; // 0x9d JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0x9e PushV
	var_174_object = var_1_object; // 0x9f MovT
	func_865(var_174_object); // 0xa0 NEW_2
	if(var_173_bool == 0) goto Label_164; // 0xa2 JumpB
	var_166_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_166_bool == 0) goto Label_170; // 0xa4 JumpB
	var_179_int = 514165; // 0xa5 PushI
	var_180_int = 15380; // 0xa6 PushI
	var_181_int = 15379; // 0xa7 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xa8 TObjFunc
	
Label_170:
	var_182_int = 514168; // 0xaa PushI
	var_183_int = -1; // 0xab PushI
	var_184_int = 15382; // 0xac PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xad TObjFunc
	goto Label_178; // 0xaf Jump
}


func_208(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0xd1 PushV
	func_1042(var_97_bool); // 0xd2 NEW_2
	var_98_bool = var_97_bool == 0; // 0xd4 Not
	if(var_98_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_99_bool = var_96_string == var_2_object; // 0xd7 Eq
	if(var_99_bool == 0) goto Label_218; // 0xd8 JumpB
	return 0; // 0xd9 Return
	
Label_218:
	var_100_string = ""; var_101_bool = 0; // 0xda PushV
	var_100_string = var_96_string; // 0xdb Mov
	var_102_string = ""; // 0xdc PushS
	var_103_bool = var_96_string == var_102_string; // 0xdd Eq
	if(var_103_bool == 0) goto Label_225; // 0xde JumpB
	var_101_bool = 0; // 0xdf MovB
	goto Label_226; // 0xe0 Jump
	
Label_226:
	func_698(var_100_string, var_101_bool); // 0xe2 NEW_2
	var_2_object = var_96_string; // 0xe4 TMov
	return 0; // 0xe5 Return
	
Label_225:
	var_101_bool = 1; // 0xe1 MovB
}


func_593(var_9_bool)
{
	var_9_bool = 1; // 0x251 MovB
	return 0; // 0x252 Return
}


func_720(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x2d0 PushV
	self(var_12_object); // 0x2d1 Func
	var_10_object = var_12_object; // 0x2d3 Mov
	return 2; // 0x2d4 Return
}


func_595(var_20_bool, var_22_float)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; // 0x253 PushV
	GetPosition(var_33_cvector); // 0x254 ObjFunc
	GetEyesHeight(var_32_float); // 0x256 ObjFunc
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x258 PushE
	var_41_float = var_41_float + var_32_float; // 0x259 Add2
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x25a PopE
	GetPosition(var_34_cvector); // 0x25b Func
	GetEyesHeight(var_32_float); // 0x25d Func
	var_42_float = GetByIndex(var_34_cvector, 1); // 0x25f PushE
	var_42_float = var_42_float + var_32_float; // 0x260 Add2
	SetByIndex(var_34_cvector, 1) = var_42_float; // 0x261 PopE
	var_35_cvector = var_33_cvector - var_34_cvector; // 0x262 Sub2
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x263 PushE
	var_43_float = 0; // 0x264 MovI
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x265 PopE
	var_44_int = var_35_cvector | var_35_cvector; // 0x266 Or
	var_45_float = sqrt(var_44_int); // 0x267 Sqrt
	var_35_cvector = var_35_cvector / var_35_cvector; // 0x268 Div2
	var_36_cvector = -var_35_cvector; // 0x269 Neg2
	var_46_float = var_35_cvector * var_22_float; // 0x26a Mult
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x26b PushV
	var_49_cvector = CVector(0.0, 1.0, 0.0); // 0x26c PushVec
	var_48_cvector = var_36_cvector ^ var_49_cvector; // 0x26d Xor2
	func_726(var_47_cvector, var_48_cvector); // 0x26e NEW_2
	var_55_int = 25; // 0x270 PushI
	var_56_float = var_47_cvector * var_55_int; // 0x271 Mult
	var_57_int = var_46_float + var_56_float; // 0x272 Add
	var_58_cvector = CVector(0.0, 10.0, 0.0); // 0x273 PushVec
	var_37_cvector = var_57_int - var_58_cvector; // 0x274 Sub2
	var_38_cvector = var_34_cvector + var_37_cvector; // 0x275 Add2
	IsOverrideActive(var_39_bool); // 0x276 Func
	var_59_bool = var_39_bool; // 0x278 Push
	if(var_59_bool == 0) goto Label_636; // 0x279 JumpB
	var_20_bool = 0; // 0x27a MovB
	return 18; // 0x27b Return
	
Label_636:
	StopWorld(); // 0x27c Func
	var_60_bool = 1; // 0x27e PushB
	CameraTransit(var_38_cvector, var_36_cvector, var_60_bool); // 0x27f Func
	var_61_float = GetByIndex(var_37_cvector, 0); // 0x281 PushE
	var_62_float = GetByIndex(var_37_cvector, 2); // 0x282 PushE
	Rotate(var_61_float, var_62_float); // 0x283 Func
	var_63_bool = 0; // 0x285 PushV
	func_1042(var_63_bool); // 0x286 NEW_2
	if(var_63_bool == 0) goto Label_650; // 0x288 JumpB
	goto Label_658; // 0x289 Jump
	
Label_658:
	CameraWaitForPlayFinish(); // 0x292 Func
	ResumeWorld(); // 0x294 Func
	var_20_bool = 1; // 0x296 MovB
	return 18; // 0x297 Return
	
Label_650:
	var_64_string = "head"; // 0x28a PushS
	HasAnimationTrack(var_40_bool, var_64_string); // 0x28b Func
	var_65_bool = var_40_bool; // 0x28d Push
	if(var_65_bool == 0) goto Label_658; // 0x28e JumpB
	var_66_string = "head"; // 0x28f PushS
	LookAsyncCamera(var_66_string); // 0x290 Func
}


func_976(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3d0 PushV
	GetDiaryRoot(var_33_object); // 0x3d1 Func
	var_34_bool = var_33_object == 0; // 0x3d3 Not
	if(var_34_bool == 0) goto Label_986; // 0x3d4 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x3d5 PushS
	Trace(var_35_string); // 0x3d6 Func
	var_31_object = 0; // 0x3d8 MovB
	return 2; // 0x3d9 Return
	
Label_986:
	var_31_object = var_33_object; // 0x3da Mov
	return 2; // 0x3db Return
}


func_854()
{
	var_58_string = "ood11ULittleGirl2"; // 0x357 PushS
	var_59_int = 1; // 0x358 PushI
	SetVariable(var_58_string, var_59_int); // 0x359 Func
	return 0; // 0x35b Return
}


func_726(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x2d6 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x2d7 Or
	var_51_float = sqrt(var_52_int); // 0x2d8 Sqrt2
	var_53_float = 0.0; // 0x2d9 PushF
	var_54_bool = var_51_float < var_53_float; // 0x2da LT
	if(var_54_bool == 0) goto Label_734; // 0x2db JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x2dc MovV
	return 2; // 0x2dd Return
	
Label_734:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x2de Div2
	return 2; // 0x2df Return
}


func_860()
{
	var_111_int = 1000; // 0x35d PushI
	SetReturnValue(var_111_int); // 0x35e ObjFunc
	return 0; // 0x360 Return
}


func_989(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x3dd PushV
	var_31_object = Obj(); // 0x3de PushV
	func_976(var_31_object); // 0x3df NEW_2
	var_28_object = var_31_object; // 0x3e0 Mov
	Find(var_24_int, var_29_object); // 0x3e2 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3e4 Not
	if(var_36_bool == 0) goto Label_1004; // 0x3e5 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3e6 PushS
	var_38_int = var_37_string + var_24_int; // 0x3e7 Add
	Trace(var_38_int); // 0x3e8 Func
	var_22_bool = 0; // 0x3ea MovB
	return 6; // 0x3eb Return
	
Label_1004:
	AddChild(var_23_object); // 0x3ec ObjFunc
	var_39_int = 7; // 0x3ee PushI
	SendWorldWndMessage(var_39_int); // 0x3ef Func
	GetCategory(var_30_int); // 0x3f1 ObjFunc
	SetDiarySection(var_30_int); // 0x3f3 Func
	var_22_bool = 0; // 0x3f5 MovB
	return 6; // 0x3f6 Return
}


func_736(var_90_int, var_91_string)
{
	var_92_int = 0; var_93_int = 0; // 0x2e0 PushV
	GetVariable(var_91_string, var_93_int); // 0x2e1 Func
	var_90_int = var_93_int; // 0x2e3 Mov
	return 2; // 0x2e4 Return
}


func_865(var_173_bool)
{
	var_175_int = 0; var_176_string = ""; // 0x362 PushV
	var_176_string = "ood11ULittleGirl1"; // 0x363 MovS
	func_736(var_175_int, var_176_string); // 0x364 NEW_2
	var_177_int = 0; // 0x366 PushI
	var_178_bool = var_175_int == var_177_int; // 0x367 Eq
	if(var_178_bool == 0) goto Label_875; // 0x368 JumpB
	var_173_bool = 1; // 0x369 MovB
	return 0; // 0x36a Return
	
Label_875:
	var_173_bool = 0; // 0x36b MovB
	return 0; // 0x36c Return
}


func_741(var_100_int, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x2e5 PushV
	CreateIntVector(var_103_object); // 0x2e6 Func
	add(var_100_int); // 0x2e8 ObjFunc
	add(var_101_int); // 0x2ea ObjFunc
	var_104_int = 3; // 0x2ec PushI
	SendWorldWndMessage(var_104_int, var_103_object); // 0x2ed Func
	return 2; // 0x2ef Return
}


func_877(var_88_bool)
{
	var_90_int = 0; var_91_string = ""; // 0x36e PushV
	var_91_string = "d11q02"; // 0x36f MovS
	func_736(var_90_int, var_91_string); // 0x370 NEW_2
	var_94_int = 0; // 0x372 PushI
	var_95_bool = var_90_int == var_94_int; // 0x373 Eq
	if(var_95_bool == 0) goto Label_887; // 0x374 JumpB
	var_88_bool = 1; // 0x375 MovB
	return 0; // 0x376 Return
	
Label_887:
	var_88_bool = 0; // 0x377 MovB
	return 0; // 0x378 Return
}


func_753(var_90_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; // 0x2f1 PushV
	GetItemID(var_95_int); // 0x2f2 ObjFunc
	var_98_string = "Category"; // 0x2f4 PushS
	GetInvItemProperty(var_96_int, var_95_int, var_98_string); // 0x2f5 Func
	AddItem(var_97_bool, var_90_object, var_96_int, var_91_int); // 0x2f7 ObjFunc
	var_99_bool = var_97_bool == 0; // 0x2f9 Not
	if(var_99_bool == 0) goto Label_766; // 0x2fa JumpB
	DropItems(var_90_object, var_91_int); // 0x2fb ObjFunc
	goto Label_771; // 0x2fd Jump
	
Label_771:
	return 6; // 0x303 Return
	
Label_766:
	var_100_int = 0; var_101_int = 0; // 0x2fe PushV
	var_100_int = var_95_int; // 0x2ff Mov
	var_101_int = var_91_int; // 0x300 Mov
	func_741(var_100_int, var_101_int); // 0x301 NEW_2
}


func_889(var_142_bool)
{
	var_144_int = 0; var_145_string = ""; // 0x37a PushV
	var_145_string = "d11q02"; // 0x37b MovS
	func_736(var_144_int, var_145_string); // 0x37c NEW_2
	var_146_int = 2; // 0x37e PushI
	var_147_bool = var_144_int == var_146_int; // 0x37f Eq
	if(var_147_bool == 0) goto Label_899; // 0x380 JumpB
	var_142_bool = 1; // 0x381 MovB
	return 0; // 0x382 Return
	
Label_899:
	var_142_bool = 0; // 0x383 MovB
	return 0; // 0x384 Return
}


func_1017(var_72_int)
{
	var_73_int = 0; var_74_int = 0; // 0x3f9 PushV
	var_75_string = "branch"; // 0x3fa PushS
	GetVariable(var_75_string, var_74_int); // 0x3fb Func
	var_76_int = 0; // 0x3fd PushI
	var_77_bool = var_74_int == var_76_int; // 0x3fe Eq
	if(var_77_bool == 0) goto Label_1027; // 0x3ff JumpB
	var_72_int = 1; // 0x400 MovI
	return 2; // 0x401 Return
	
Label_1027:
	var_78_int = 1; // 0x403 PushI
	var_79_bool = var_74_int == var_78_int; // 0x404 Eq
	if(var_79_bool == 0) goto Label_1032; // 0x405 JumpB
	var_72_int = 2; // 0x406 MovI
	return 2; // 0x407 Return
	
Label_1032:
	var_72_int = 3; // 0x408 MovI
	return 2; // 0x409 Return
}


