task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool)
{
	var_9_int = 1; // 0xe7 PushI
	if(var_9_int == 0) goto Label_525; // 0xe8 JumpB
	func_711(); // 0xea NEW_2
	var_11_int = 15373; // 0xec PushI
	var_12_bool = var_8_bool == var_11_int; // 0xed Eq
	if(var_12_bool == 0) goto Label_244; // 0xee JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xef PushV
	var_13_object = var_1_object; // 0xf0 MovT
	var_14_object = var_0_object; // 0xf1 MovT
	func_818(); // 0xf2 NEW_2
	
Label_244:
	var_54_int = 15376; // 0xf4 PushI
	var_55_bool = var_8_bool == var_54_int; // 0xf5 Eq
	if(var_55_bool == 0) goto Label_252; // 0xf6 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xf7 PushV
	var_56_object = var_1_object; // 0xf8 MovT
	var_57_object = var_0_object; // 0xf9 MovT
	func_852(); // 0xfa NEW_2
	
Label_252:
	var_60_int = 15378; // 0xfc PushI
	var_61_bool = var_8_bool == var_60_int; // 0xfd Eq
	if(var_61_bool == 0) goto Label_275; // 0xfe JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xff PushV
	var_62_object = var_1_object; // 0x100 MovT
	var_63_object = var_0_object; // 0x101 MovT
	func_835(); // 0x102 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0x104 PushV
	var_81_object = var_1_object; // 0x105 MovT
	var_82_object = var_0_object; // 0x106 MovT
	func_801(var_82_object); // 0x107 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x109 PushV
	var_105_object = var_1_object; // 0x10a MovT
	var_106_object = var_0_object; // 0x10b MovT
	func_795(); // 0x10c NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x10e PushV
	var_109_object = var_1_object; // 0x10f MovT
	var_110_object = var_0_object; // 0x110 MovT
	func_858(); // 0x111 NEW_2
	
Label_275:
	var_112_int = 41554; // 0x113 PushI
	var_113_bool = var_8_bool == var_112_int; // 0x114 Eq
	if(var_113_bool == 0) goto Label_288; // 0x115 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x116 PushV
	var_114_object = var_1_object; // 0x117 MovT
	var_115_object = var_0_object; // 0x118 MovT
	func_835(); // 0x119 NEW_2
	var_116_object = Obj(); var_117_object = Obj(); // 0x11b PushV
	var_116_object = var_1_object; // 0x11c MovT
	var_117_object = var_0_object; // 0x11d MovT
	func_858(); // 0x11e NEW_2
	
Label_288:
	var_118_int = 15379; // 0x120 PushI
	var_119_bool = var_8_bool == var_118_int; // 0x121 Eq
	if(var_119_bool == 0) goto Label_296; // 0x122 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x123 PushV
	var_120_object = var_1_object; // 0x124 MovT
	var_121_object = var_0_object; // 0x125 MovT
	func_812(); // 0x126 NEW_2
	
Label_296:
	var_124_int = 15381; // 0x128 PushI
	var_125_bool = var_8_bool == var_124_int; // 0x129 Eq
	if(var_125_bool == 0) goto Label_304; // 0x12a JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x12b PushV
	var_126_object = var_1_object; // 0x12c MovT
	var_127_object = var_0_object; // 0x12d MovT
	func_858(); // 0x12e NEW_2
	
Label_304:
	var_128_int = 15370; // 0x130 PushI
	var_129_bool = var_7_bool == var_128_int; // 0x131 Eq
	if(var_129_bool == 0) goto Label_403; // 0x132 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x133 PushV
	var_131_object = var_1_object; // 0x134 MovT
	func_875(var_131_object); // 0x135 NEW_2
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
	func_887(var_165_object); // 0x15b NEW_2
	if(var_164_bool == 0) goto Label_356; // 0x15d JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x15e PushV
	var_171_object = var_1_object; // 0x15f MovT
	func_911(var_171_object); // 0x160 NEW_2
	if(var_170_bool == 0) goto Label_356; // 0x162 JumpB
	var_163_bool = 1; // 0x163 MovB
	
Label_356:
	if(var_163_bool == 0) goto Label_372; // 0x164 JumpB
	var_176_bool = 0; // 0x165 PushV
	var_176_bool = 0; // 0x166 MovB
	var_177_bool = 0; var_178_object = Obj(); // 0x167 PushV
	var_178_object = var_1_object; // 0x168 MovT
	func_923(var_178_object); // 0x169 NEW_2
	if(var_177_bool == 0) goto Label_370; // 0x16b JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x16c PushV
	var_184_object = var_1_object; // 0x16d MovT
	func_911(var_184_object); // 0x16e NEW_2
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
	func_899(var_190_object); // 0x17e NEW_2
	if(var_189_bool == 0) goto Label_391; // 0x180 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x181 PushV
	var_196_object = var_1_object; // 0x182 MovT
	func_863(var_196_object); // 0x183 NEW_2
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
	func_1040(var_254_bool); // 0x203 NEW_2
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
	var_192_int = 1000; // 0x21c PushI
	var_193_bool = var_11_object == var_192_int; // 0x21d Eq
	if(var_193_bool == 0) goto Label_544; // 0x21e JumpB
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
	func_718(var_15_object); // 0x237 NEW_2
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
	func_718(var_10_object); // 0x24c NEW_2
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
	var_66_bool = var_20_bool == 0; // 0x7 Not
	if(var_66_bool == 0) goto Label_11; // 0x8 JumpB
	var_9_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_16_object); // 0xb Func
	var_67_int = 0; // 0xd PushV
	func_1034(var_67_int); // 0xe NEW_2
	SetNPCName(var_67_int); // 0x10 ObjFunc
	var_68_int = 0; // 0x12 PushV
	func_1032(var_68_int); // 0x13 NEW_2
	SetNPCDescription(var_68_int); // 0x15 ObjFunc
	var_69_string = ""; // 0x17 PushV
	func_1036(var_69_string); // 0x18 NEW_2
	SetPhoto(var_69_string); // 0x1a ObjFunc
	var_70_string = ""; // 0x1c PushV
	func_1038(var_70_string); // 0x1d NEW_2
	SetPhoto2(var_70_string); // 0x1f ObjFunc
	var_71_int = 0; // 0x21 PushV
	func_1015(var_71_int); // 0x22 NEW_2
	SetPlayerName(var_71_int); // 0x24 ObjFunc
	var_18_int = -1; // 0x26 MovI
	IsOverrideActive(var_17_bool); // 0x27 Func
	var_79_bool = var_17_bool; // 0x29 Push
	if(var_79_bool == 0) goto Label_45; // 0x2a JumpB
	var_9_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_16_object); // 0x2d Func
	var_80_object = Obj(); var_81_object = Obj(); // 0x2f PushV
	var_80_object = var_10_object; // 0x30 Mov
	var_81_object = var_16_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_19_bool); // 0x36 ObjFunc
	
Label_56:
	var_184_bool = var_19_bool == 0; // 0x38 Not
	if(var_184_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_19_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_185_object = Obj(); // 0x3f PushV
	var_185_object = var_10_object; // 0x40 Mov
	func_663(); // 0x41 NEW_2
	StopDialog(var_16_object); // 0x43 Func
	GetReturnValue(var_18_int); // 0x45 ObjFunc
	var_9_int = var_18_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_770(var_84_object, var_85_string, var_86_int)
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x302 PushV
	CreateInvItem(var_88_object); // 0x303 Func
	SetItemName(var_85_string); // 0x305 ObjFunc
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; // 0x307 PushV
	var_89_object = var_84_object; // 0x308 Mov
	var_90_object = var_88_object; // 0x309 Mov
	var_91_int = var_86_int; // 0x30a Mov
	func_751(var_90_object, var_91_int); // 0x30b NEW_2
	return 2; // 0x30d Return
}


func_899(var_166_bool)
{
	var_168_int = 0; var_169_string = ""; // 0x384 PushV
	var_169_string = "d11q02"; // 0x385 MovS
	func_734(var_168_int, var_169_string); // 0x386 NEW_2
	var_170_int = -1; // 0x388 PushI
	var_171_bool = var_168_int == var_170_int; // 0x389 Eq
	if(var_171_bool == 0) goto Label_909; // 0x38a JumpB
	var_166_bool = 1; // 0x38b MovB
	return 0; // 0x38c Return
	
Label_909:
	var_166_bool = 0; // 0x38d MovB
	return 0; // 0x38e Return
}


func_1032(var_68_int)
{
	var_68_int = 515561; // 0x408 MovI
	return 0; // 0x409 Return
}


func_1034(var_67_int)
{
	var_67_int = 503346; // 0x40a MovI
	return 0; // 0x40b Return
}


func_1036(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1.png"; // 0x40c MovS
	return 0; // 0x40d Return
}


func_1038(var_70_string)
{
	var_70_string = "ui/NPC_Citizen1_b.png"; // 0x40e MovS
	return 0; // 0x40f Return
}


func_911(var_147_bool)
{
	var_149_int = 0; var_150_string = ""; // 0x390 PushV
	var_150_string = "ood11ULittleGirl2"; // 0x391 MovS
	func_734(var_149_int, var_150_string); // 0x392 NEW_2
	var_151_int = 0; // 0x394 PushI
	var_152_bool = var_149_int == var_151_int; // 0x395 Eq
	if(var_152_bool == 0) goto Label_921; // 0x396 JumpB
	var_147_bool = 1; // 0x397 MovB
	return 0; // 0x398 Return
	
Label_921:
	var_147_bool = 0; // 0x399 MovB
	return 0; // 0x39a Return
}


func_1040(var_62_bool)
{
	var_62_bool = 0; // 0x410 MovB
	return 0; // 0x411 Return
}


func_783(var_48_bool, var_49_string, var_50_string)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x30f PushV
	FindActor(var_52_object, var_49_string); // 0x310 Func
	var_53_bool = var_52_object == 0; // 0x312 NullEq
	if(var_53_bool == 0) goto Label_790; // 0x313 JumpB
	var_48_bool = 0; // 0x314 MovB
	return 2; // 0x315 Return
	
Label_790:
	Trigger(var_52_object, var_50_string); // 0x316 Func
	var_48_bool = 1; // 0x318 MovB
	return 2; // 0x319 Return
}


func_663()
{
	var_186_bool = 0; var_187_bool = 0; // 0x297 PushV
	CameraSwitchToNormal(); // 0x298 Func
	var_188_bool = 0; // 0x29a PushV
	func_1040(var_188_bool); // 0x29b NEW_2
	if(var_188_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_679; // 0x29e Jump
	
Label_679:
	return 2; // 0x2a7 Return
	
Label_671:
	var_189_string = "head"; // 0x29f PushS
	HasAnimationTrack(var_187_bool, var_189_string); // 0x2a0 Func
	var_190_bool = var_187_bool; // 0x2a2 Push
	if(var_190_bool == 0) goto Label_679; // 0x2a3 JumpB
	var_191_string = "head"; // 0x2a4 PushS
	UnlookAsync(var_191_string); // 0x2a5 Func
}


func_795()
{
	var_107_string = "playsound"; // 0x31c PushS
	var_108_string = "giveitem"; // 0x31d PushS
	TriggerWorld(var_107_string, var_108_string); // 0x31e Func
	return 0; // 0x320 Return
}


func_923(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x39c PushV
	var_157_string = "d11q02"; // 0x39d MovS
	func_734(var_156_int, var_157_string); // 0x39e NEW_2
	var_158_int = 1000; // 0x3a0 PushI
	var_159_bool = var_156_int == var_158_int; // 0x3a1 Eq
	if(var_159_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_154_bool = 1; // 0x3a3 MovB
	return 0; // 0x3a4 Return
	
Label_933:
	var_154_bool = 0; // 0x3a5 MovB
	return 0; // 0x3a6 Return
}


func_801(var_81_object)
{
	var_83_string = "powder is given"; // 0x322 PushS
	Trace(var_83_string); // 0x323 Func
	var_84_object = Obj(); var_85_string = ""; var_86_int = 0; // 0x325 PushV
	var_84_object = var_81_object; // 0x326 Mov
	var_85_string = "powder"; // 0x327 MovS
	var_86_int = 1; // 0x328 MovI
	func_770(var_84_object, var_85_string, var_86_int); // 0x329 NEW_2
	return 0; // 0x32b Return
}


func_545()
{
	
Label_545:
	Hold(); // 0x221 Func
	goto Label_545; // 0x223 Jump
}


func_935()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x3a7 PushV
	var_19_int = 197; // 0x3a8 PushI
	var_20_int = 2; // 0x3a9 PushI
	var_21_int = 515485; // 0x3aa PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x3ab Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x3ad PushV
	var_23_object = var_18_object; // 0x3ae Mov
	var_24_int = -1; // 0x3af MovI
	func_987(var_22_bool, var_23_object, var_24_int); // 0x3b0 NEW_2
	return 2; // 0x3b2 Return
}


func_680(var_121_string)
{
	var_122_bool = 0; var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_float = 0; var_127_float = 0; // 0x2a8 PushV
	lshHasAnimation(var_125_bool, var_121_string); // 0x2a9 Func
	var_128_bool = var_125_bool; // 0x2ab Push
	if(var_128_bool == 0) goto Label_691; // 0x2ac JumpB
	lshGetAnimTimes(var_121_string, var_126_float, var_127_float); // 0x2ad Func
	var_129_bool = 0; // 0x2af PushB
	lshPlayAnimation(var_126_float, var_127_float, var_129_bool); // 0x2b0 Func
	goto Label_695; // 0x2b2 Jump
	
Label_695:
	return 6; // 0x2b7 Return
	
Label_691:
	var_130_string = "Can't find lsh animation : "; // 0x2b3 PushS
	var_131_int = var_130_string + var_121_string; // 0x2b4 Add
	Trace(var_131_int); // 0x2b5 Func
}


func_812()
{
	var_122_string = "ood11ULittleGirl1"; // 0x32d PushS
	var_123_int = 1; // 0x32e PushI
	SetVariable(var_122_string, var_123_int); // 0x32f Func
	return 0; // 0x331 Return
}


func_818()
{
	var_15_string = "d11q02"; // 0x333 PushS
	var_16_int = 1; // 0x334 PushI
	SetVariable(var_15_string, var_16_int); // 0x335 Func
	func_935(); // 0x338 NEW_2
	func_961(); // 0x33b NEW_2
	var_48_bool = 0; var_49_string = ""; var_50_string = ""; // 0x33d PushV
	var_49_string = "quest_d11_02"; // 0x33e MovS
	var_50_string = "init_graveyard"; // 0x33f MovS
	func_783(var_48_bool, var_49_string, var_50_string); // 0x340 NEW_2
	return 0; // 0x342 Return
}


func_948()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x3b4 PushV
	var_72_int = 198; // 0x3b5 PushI
	var_73_int = 2; // 0x3b6 PushI
	var_74_int = 515486; // 0x3b7 PushI
	CreateDiaryEntry(var_71_object, var_72_int, var_73_int, var_74_int); // 0x3b8 Func
	var_75_bool = 0; var_76_object = Obj(); var_77_int = 0; // 0x3ba PushV
	var_76_object = var_71_object; // 0x3bb Mov
	var_77_int = 197; // 0x3bc MovI
	func_987(var_75_bool, var_76_object, var_77_int); // 0x3bd NEW_2
	return 2; // 0x3bf Return
}


func_696(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0; // 0x2b8 PushV
	lshHasAnimation(var_106_bool, var_99_string); // 0x2b9 Func
	var_109_bool = var_106_bool; // 0x2bb Push
	if(var_109_bool == 0) goto Label_706; // 0x2bc JumpB
	lshGetAnimTimes(var_99_string, var_107_float, var_108_float); // 0x2bd Func
	lshPlayAnimation(var_107_float, var_108_float, var_100_bool); // 0x2bf Func
	goto Label_710; // 0x2c1 Jump
	
Label_710:
	return 6; // 0x2c6 Return
	
Label_706:
	var_110_string = "Can't find lsh animation : "; // 0x2c2 PushS
	var_111_int = var_110_string + var_99_string; // 0x2c3 Add
	Trace(var_111_int); // 0x2c4 Func
}


func_961()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x3c1 PushV
	var_42_int = 199; // 0x3c2 PushI
	var_43_int = 2; // 0x3c3 PushI
	var_44_int = 515487; // 0x3c4 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x3c5 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x3c7 PushV
	var_46_object = var_41_object; // 0x3c8 Mov
	var_47_int = 197; // 0x3c9 MovI
	func_987(var_45_bool, var_46_object, var_47_int); // 0x3ca NEW_2
	return 2; // 0x3cc Return
}


func_835()
{
	var_64_int = 0; var_65_string = ""; // 0x344 PushV
	var_65_string = "d11q02"; // 0x345 MovS
	func_734(var_64_int, var_65_string); // 0x346 NEW_2
	var_68_int = 1000; // 0x348 PushI
	var_69_bool = var_64_int != var_68_int; // 0x349 Neq
	if(var_69_bool == 0) goto Label_851; // 0x34a JumpB
	func_948(); // 0x34c NEW_2
	var_78_bool = 0; var_79_string = ""; var_80_string = ""; // 0x34e PushV
	var_79_string = "quest_d11_02"; // 0x34f MovS
	var_80_string = "completed"; // 0x350 MovS
	func_783(var_78_bool, var_79_string, var_80_string); // 0x351 NEW_2
	
Label_851:
	return 0; // 0x353 Return
}


func_711()
{
	var_10_bool = 0; // 0x2c7 PushV
	func_1040(var_10_bool); // 0x2c8 NEW_2
	if(var_10_bool == 0) goto Label_717; // 0x2ca JumpB
	lshStopSpeech(); // 0x2cb Func
	
Label_717:
	return 0; // 0x2cd Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_80_object, var_81_object)
{
	var_0_object = var_81_object; // 0x4b TMov
	var_1_object = var_80_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_86_int = 1; // 0x4e PushI
	if(var_86_int == 0) goto Label_178; // 0x4f JumpB
	var_87_bool = 0; var_88_object = Obj(); // 0x50 PushV
	var_88_object = var_1_object; // 0x51 MovT
	func_875(var_88_object); // 0x52 NEW_2
	if(var_87_bool == 0) goto Label_105; // 0x54 JumpB
	var_95_string = ""; // 0x55 PushV
	var_95_string = "Neutral"; // 0x56 MovS
	func_208(var_81_object, var_95_string); // 0x57 NEW_2
	var_112_int = 514156; // 0x59 PushI
	SetMessage(var_112_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_113_int = 514169; // 0x5e PushI
	var_114_int = 15384; // 0x5f PushI
	var_115_int = 15383; // 0x60 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x61 TObjFunc
	var_116_int = 539603; // 0x63 PushI
	var_117_int = 15384; // 0x64 PushI
	var_118_int = 41547; // 0x65 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x66 TObjFunc
	goto Label_178; // 0x68 Jump
	
Label_178:
	var_119_bool = 0; // 0xb2 PushV
	func_1040(var_119_bool); // 0xb3 NEW_2
	if(var_119_bool == 0) goto Label_193; // 0xb5 JumpB
	
Label_182:
	lshWaitForAnimEnd(); // 0xb6 Func
	var_120_string = var_3_string; // 0xb8 PushT
	if(var_120_string == 0) goto Label_187; // 0xb9 JumpB
	goto Label_192; // 0xba Jump
	
Label_192:
	goto Label_207; // 0xc0 Jump
	
Label_207:
	return 0; // 0xcf Return
	
Label_187:
	var_121_string = ""; // 0xbb PushV
	var_121_string = var_2_object; // 0xbc MovT
	func_680(var_121_string); // 0xbd NEW_2
	goto Label_182; // 0xbf Jump
	
Label_193:
	var_132_string = "all"; // 0xc1 PushS
	var_133_string = "idle"; // 0xc2 PushS
	PlayAnimation(var_132_string, var_133_string); // 0xc3 Func
	
Label_197:
	WaitForAnimEnd(); // 0xc5 Func
	var_134_string = var_3_string; // 0xc7 PushT
	if(var_134_string == 0) goto Label_202; // 0xc8 JumpB
	goto Label_207; // 0xc9 Jump
	
Label_202:
	var_135_string = "all"; // 0xca PushS
	var_136_string = "idle"; // 0xcb PushS
	PlayAnimation(var_135_string, var_136_string); // 0xcc Func
	goto Label_197; // 0xce Jump
	
Label_105:
	var_137_string = ""; // 0x69 PushV
	var_137_string = "Neutral"; // 0x6a MovS
	func_208(var_81_object, var_137_string); // 0x6b NEW_2
	var_138_int = 514161; // 0x6d PushI
	SetMessage(var_138_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_139_bool = 0; // 0x72 PushV
	var_139_bool = 1; // 0x73 MovB
	var_140_bool = 0; // 0x74 PushV
	var_140_bool = 0; // 0x75 MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x76 PushV
	var_142_object = var_1_object; // 0x77 MovT
	func_887(var_142_object); // 0x78 NEW_2
	if(var_141_bool == 0) goto Label_129; // 0x7a JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x7b PushV
	var_148_object = var_1_object; // 0x7c MovT
	func_911(var_148_object); // 0x7d NEW_2
	if(var_147_bool == 0) goto Label_129; // 0x7f JumpB
	var_140_bool = 1; // 0x80 MovB
	
Label_129:
	if(var_140_bool == 0) goto Label_145; // 0x81 JumpB
	var_153_bool = 0; // 0x82 PushV
	var_153_bool = 0; // 0x83 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x84 PushV
	var_155_object = var_1_object; // 0x85 MovT
	func_923(var_155_object); // 0x86 NEW_2
	if(var_154_bool == 0) goto Label_143; // 0x88 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x89 PushV
	var_161_object = var_1_object; // 0x8a MovT
	func_911(var_161_object); // 0x8b NEW_2
	if(var_160_bool == 0) goto Label_143; // 0x8d JumpB
	var_153_bool = 1; // 0x8e MovB
	
Label_143:
	if(var_153_bool == 0) goto Label_145; // 0x8f JumpB
	var_139_bool = 0; // 0x90 MovB
	
Label_145:
	if(var_139_bool == 0) goto Label_151; // 0x91 JumpB
	var_162_int = 514162; // 0x92 PushI
	var_163_int = 15377; // 0x93 PushI
	var_164_int = 15376; // 0x94 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x95 TObjFunc
	
Label_151:
	var_165_bool = 0; // 0x97 PushV
	var_165_bool = 0; // 0x98 MovB
	var_166_bool = 0; var_167_object = Obj(); // 0x99 PushV
	var_167_object = var_1_object; // 0x9a MovT
	func_899(var_167_object); // 0x9b NEW_2
	if(var_166_bool == 0) goto Label_164; // 0x9d JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x9e PushV
	var_173_object = var_1_object; // 0x9f MovT
	func_863(var_173_object); // 0xa0 NEW_2
	if(var_172_bool == 0) goto Label_164; // 0xa2 JumpB
	var_165_bool = 1; // 0xa3 MovB
	
Label_164:
	if(var_165_bool == 0) goto Label_170; // 0xa4 JumpB
	var_178_int = 514165; // 0xa5 PushI
	var_179_int = 15380; // 0xa6 PushI
	var_180_int = 15379; // 0xa7 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xa8 TObjFunc
	
Label_170:
	var_181_int = 514168; // 0xaa PushI
	var_182_int = -1; // 0xab PushI
	var_183_int = 15382; // 0xac PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0xad TObjFunc
	goto Label_178; // 0xaf Jump
}


func_718(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj(); // 0x2ce PushV
	self(var_12_object); // 0x2cf Func
	var_10_object = var_12_object; // 0x2d1 Mov
	return 2; // 0x2d2 Return
}


func_974(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3ce PushV
	GetDiaryRoot(var_33_object); // 0x3cf Func
	var_34_bool = var_33_object == 0; // 0x3d1 Not
	if(var_34_bool == 0) goto Label_984; // 0x3d2 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x3d3 PushS
	Trace(var_35_string); // 0x3d4 Func
	var_31_object = 0; // 0x3d6 MovB
	return 2; // 0x3d7 Return
	
Label_984:
	var_31_object = var_33_object; // 0x3d8 Mov
	return 2; // 0x3d9 Return
}


func_208(var_2_object, var_95_string)
{
	var_96_bool = 0; // 0xd1 PushV
	func_1040(var_96_bool); // 0xd2 NEW_2
	var_97_bool = var_96_bool == 0; // 0xd4 Not
	if(var_97_bool == 0) goto Label_215; // 0xd5 JumpB
	return 0; // 0xd6 Return
	
Label_215:
	var_98_bool = var_95_string == var_2_object; // 0xd7 Eq
	if(var_98_bool == 0) goto Label_218; // 0xd8 JumpB
	return 0; // 0xd9 Return
	
Label_218:
	var_99_string = ""; var_100_bool = 0; // 0xda PushV
	var_99_string = var_95_string; // 0xdb Mov
	var_101_string = ""; // 0xdc PushS
	var_102_bool = var_95_string == var_101_string; // 0xdd Eq
	if(var_102_bool == 0) goto Label_225; // 0xde JumpB
	var_100_bool = 0; // 0xdf MovB
	goto Label_226; // 0xe0 Jump
	
Label_226:
	func_696(var_99_string, var_100_bool); // 0xe2 NEW_2
	var_2_object = var_95_string; // 0xe4 TMov
	return 0; // 0xe5 Return
	
Label_225:
	var_100_bool = 1; // 0xe1 MovB
}


func_593(var_9_bool)
{
	var_9_bool = 1; // 0x251 MovB
	return 0; // 0x252 Return
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
	func_724(var_47_cvector, var_48_cvector); // 0x26e NEW_2
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
	CameraTransit(var_38_cvector, var_36_cvector); // 0x27e Func
	var_60_float = GetByIndex(var_37_cvector, 0); // 0x280 PushE
	var_61_float = GetByIndex(var_37_cvector, 2); // 0x281 PushE
	Rotate(var_60_float, var_61_float); // 0x282 Func
	var_62_bool = 0; // 0x284 PushV
	func_1040(var_62_bool); // 0x285 NEW_2
	if(var_62_bool == 0) goto Label_649; // 0x287 JumpB
	goto Label_657; // 0x288 Jump
	
Label_657:
	CameraWaitForPlayFinish(); // 0x291 Func
	ResumeWorld(); // 0x293 Func
	var_20_bool = 1; // 0x295 MovB
	return 18; // 0x296 Return
	
Label_649:
	var_63_string = "head"; // 0x289 PushS
	HasAnimationTrack(var_40_bool, var_63_string); // 0x28a Func
	var_64_bool = var_40_bool; // 0x28c Push
	if(var_64_bool == 0) goto Label_657; // 0x28d JumpB
	var_65_string = "head"; // 0x28e PushS
	LookAsyncCamera(var_65_string); // 0x28f Func
}


func_852()
{
	var_58_string = "ood11ULittleGirl2"; // 0x355 PushS
	var_59_int = 1; // 0x356 PushI
	SetVariable(var_58_string, var_59_int); // 0x357 Func
	return 0; // 0x359 Return
}


func_724(var_47_cvector, var_48_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x2d4 PushV
	var_52_int = var_48_cvector | var_48_cvector; // 0x2d5 Or
	var_51_float = sqrt(var_52_int); // 0x2d6 Sqrt2
	var_53_float = 0.0; // 0x2d7 PushF
	var_54_bool = var_51_float < var_53_float; // 0x2d8 LT
	if(var_54_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x2da MovV
	return 2; // 0x2db Return
	
Label_732:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x2dc Div2
	return 2; // 0x2dd Return
}


func_858()
{
	var_111_int = 1000; // 0x35b PushI
	SetReturnValue(var_111_int); // 0x35c ObjFunc
	return 0; // 0x35e Return
}


func_987(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x3db PushV
	var_31_object = Obj(); // 0x3dc PushV
	func_974(var_31_object); // 0x3dd NEW_2
	var_28_object = var_31_object; // 0x3de Mov
	Find(var_24_int, var_29_object); // 0x3e0 ObjFunc
	var_36_bool = var_29_object == 0; // 0x3e2 Not
	if(var_36_bool == 0) goto Label_1002; // 0x3e3 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x3e4 PushS
	var_38_int = var_37_string + var_24_int; // 0x3e5 Add
	Trace(var_38_int); // 0x3e6 Func
	var_22_bool = 0; // 0x3e8 MovB
	return 6; // 0x3e9 Return
	
Label_1002:
	AddChild(var_23_object); // 0x3ea ObjFunc
	var_39_int = 7; // 0x3ec PushI
	SendWorldWndMessage(var_39_int); // 0x3ed Func
	GetCategory(var_30_int); // 0x3ef ObjFunc
	SetDiarySection(var_30_int); // 0x3f1 Func
	var_22_bool = 0; // 0x3f3 MovB
	return 6; // 0x3f4 Return
}


func_734(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x2de PushV
	GetVariable(var_90_string, var_92_int); // 0x2df Func
	var_89_int = var_92_int; // 0x2e1 Mov
	return 2; // 0x2e2 Return
}


func_863(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x360 PushV
	var_175_string = "ood11ULittleGirl1"; // 0x361 MovS
	func_734(var_174_int, var_175_string); // 0x362 NEW_2
	var_176_int = 0; // 0x364 PushI
	var_177_bool = var_174_int == var_176_int; // 0x365 Eq
	if(var_177_bool == 0) goto Label_873; // 0x366 JumpB
	var_172_bool = 1; // 0x367 MovB
	return 0; // 0x368 Return
	
Label_873:
	var_172_bool = 0; // 0x369 MovB
	return 0; // 0x36a Return
}


func_739(var_100_int, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x2e3 PushV
	CreateIntVector(var_103_object); // 0x2e4 Func
	add(var_100_int); // 0x2e6 ObjFunc
	add(var_101_int); // 0x2e8 ObjFunc
	var_104_int = 3; // 0x2ea PushI
	SendWorldWndMessage(var_104_int, var_103_object); // 0x2eb Func
	return 2; // 0x2ed Return
}


func_875(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x36c PushV
	var_90_string = "d11q02"; // 0x36d MovS
	func_734(var_89_int, var_90_string); // 0x36e NEW_2
	var_93_int = 0; // 0x370 PushI
	var_94_bool = var_89_int == var_93_int; // 0x371 Eq
	if(var_94_bool == 0) goto Label_885; // 0x372 JumpB
	var_87_bool = 1; // 0x373 MovB
	return 0; // 0x374 Return
	
Label_885:
	var_87_bool = 0; // 0x375 MovB
	return 0; // 0x376 Return
}


func_751(var_90_object, var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_bool = 0; // 0x2ef PushV
	GetItemID(var_95_int); // 0x2f0 ObjFunc
	var_98_string = "Category"; // 0x2f2 PushS
	GetInvItemProperty(var_96_int, var_95_int, var_98_string); // 0x2f3 Func
	AddItem(var_97_bool, var_90_object, var_96_int, var_91_int); // 0x2f5 ObjFunc
	var_99_bool = var_97_bool == 0; // 0x2f7 Not
	if(var_99_bool == 0) goto Label_764; // 0x2f8 JumpB
	DropItems(var_90_object, var_91_int); // 0x2f9 ObjFunc
	goto Label_769; // 0x2fb Jump
	
Label_769:
	return 6; // 0x301 Return
	
Label_764:
	var_100_int = 0; var_101_int = 0; // 0x2fc PushV
	var_100_int = var_95_int; // 0x2fd Mov
	var_101_int = var_91_int; // 0x2fe Mov
	func_739(var_100_int, var_101_int); // 0x2ff NEW_2
}


func_887(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x378 PushV
	var_144_string = "d11q02"; // 0x379 MovS
	func_734(var_143_int, var_144_string); // 0x37a NEW_2
	var_145_int = 2; // 0x37c PushI
	var_146_bool = var_143_int == var_145_int; // 0x37d Eq
	if(var_146_bool == 0) goto Label_897; // 0x37e JumpB
	var_141_bool = 1; // 0x37f MovB
	return 0; // 0x380 Return
	
Label_897:
	var_141_bool = 0; // 0x381 MovB
	return 0; // 0x382 Return
}


func_1015(var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x3f7 PushV
	var_74_string = "branch"; // 0x3f8 PushS
	GetVariable(var_74_string, var_73_int); // 0x3f9 Func
	var_75_int = 0; // 0x3fb PushI
	var_76_bool = var_73_int == var_75_int; // 0x3fc Eq
	if(var_76_bool == 0) goto Label_1025; // 0x3fd JumpB
	var_71_int = 1; // 0x3fe MovI
	return 2; // 0x3ff Return
	
Label_1025:
	var_77_int = 1; // 0x401 PushI
	var_78_bool = var_73_int == var_77_int; // 0x402 Eq
	if(var_78_bool == 0) goto Label_1030; // 0x403 JumpB
	var_71_int = 2; // 0x404 MovI
	return 2; // 0x405 Return
	
Label_1030:
	var_71_int = 3; // 0x406 MovI
	return 2; // 0x407 Return
}


