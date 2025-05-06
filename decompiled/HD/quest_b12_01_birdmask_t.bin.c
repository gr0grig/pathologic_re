task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xfa PushI
	if(var_12_int == 0) goto Label_516; // 0xfb JumpB
	func_852(); // 0xfd NEW_2
	var_14_int = 23339; // 0xff PushI
	var_15_bool = var_11_object == var_14_int; // 0x100 Eq
	if(var_15_bool == 0) goto Label_263; // 0x101 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x102 PushV
	var_16_object = var_1_object; // 0x103 MovT
	var_17_object = var_0_object; // 0x104 MovT
	func_933(); // 0x105 NEW_2
	
Label_263:
	var_20_int = 23898; // 0x107 PushI
	var_21_bool = var_11_object == var_20_int; // 0x108 Eq
	if(var_21_bool == 0) goto Label_271; // 0x109 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x10a PushV
	var_22_object = var_1_object; // 0x10b MovT
	var_23_object = var_0_object; // 0x10c MovT
	func_926(); // 0x10d NEW_2
	
Label_271:
	var_30_int = 23338; // 0x10f PushI
	var_31_bool = var_10_bool == var_30_int; // 0x110 Eq
	if(var_31_bool == 0) goto Label_389; // 0x111 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x112 PushV
	var_33_object = var_1_object; // 0x113 MovT
	func_939(var_32_bool, var_33_object); // 0x114 NEW_2
	var_144_bool = var_32_bool == 0; // 0x116 Not
	if(var_144_bool == 0) goto Label_305; // 0x117 JumpB
	var_145_string = ""; // 0x118 PushV
	var_145_string = "Neutral"; // 0x119 MovS
	func_227(var_11_object, var_145_string); // 0x11a NEW_2
	var_162_int = 522171; // 0x11c PushI
	SetMessage(var_162_int); // 0x11d TObjFunc
	ClearReplies(); // 0x11f TObjFunc
	var_163_bool = 0; var_164_object = Obj(); // 0x121 PushV
	var_164_object = var_1_object; // 0x122 MovT
	func_973(var_164_object); // 0x123 NEW_2
	if(var_163_bool == 0) goto Label_299; // 0x125 JumpB
	var_171_int = 522172; // 0x126 PushI
	var_172_int = 23999; // 0x127 PushI
	var_173_int = 23339; // 0x128 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x129 TObjFunc
	
Label_299:
	var_174_int = 523159; // 0x12b PushI
	var_175_int = -1; // 0x12c PushI
	var_176_int = 24361; // 0x12d PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_177_bool = 0; var_178_object = Obj(); // 0x131 PushV
	var_178_object = var_1_object; // 0x132 MovT
	func_961(var_178_object); // 0x133 NEW_2
	var_183_bool = var_177_bool == 0; // 0x135 Not
	if(var_183_bool == 0) goto Label_331; // 0x136 JumpB
	var_184_string = ""; // 0x137 PushV
	var_184_string = "Neutral"; // 0x138 MovS
	func_227(var_11_object, var_184_string); // 0x139 NEW_2
	var_185_int = 541621; // 0x13b PushI
	SetMessage(var_185_int); // 0x13c TObjFunc
	ClearReplies(); // 0x13e TObjFunc
	var_186_int = 541622; // 0x140 PushI
	var_187_int = 43795; // 0x141 PushI
	var_188_int = 43794; // 0x142 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x143 TObjFunc
	var_189_int = 541626; // 0x145 PushI
	var_190_int = -1; // 0x146 PushI
	var_191_int = 43798; // 0x147 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_192_bool = 0; // 0x14b PushV
	var_192_bool = 0; // 0x14c MovB
	var_193_bool = 0; // 0x14d PushV
	var_193_bool = 0; // 0x14e MovB
	var_194_bool = 0; var_195_object = Obj(); // 0x14f PushV
	var_195_object = var_1_object; // 0x150 MovT
	func_939(var_194_bool, var_195_object); // 0x151 NEW_2
	if(var_194_bool == 0) goto Label_346; // 0x153 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x154 PushV
	var_197_object = var_1_object; // 0x155 MovT
	func_949(var_197_object); // 0x156 NEW_2
	if(var_196_bool == 0) goto Label_346; // 0x158 JumpB
	var_193_bool = 1; // 0x159 MovB
	
Label_346:
	if(var_193_bool == 0) goto Label_353; // 0x15a JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x15b PushV
	var_203_object = var_1_object; // 0x15c MovT
	func_961(var_203_object); // 0x15d NEW_2
	if(var_202_bool == 0) goto Label_353; // 0x15f JumpB
	var_192_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_192_bool == 0) goto Label_374; // 0x161 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x162 PushV
	var_204_object = var_1_object; // 0x163 MovT
	var_205_object = var_0_object; // 0x164 MovT
	func_920(); // 0x165 NEW_2
	var_208_string = ""; // 0x167 PushV
	var_208_string = "Neutral"; // 0x168 MovS
	func_227(var_11_object, var_208_string); // 0x169 NEW_2
	var_209_int = 522704; // 0x16b PushI
	SetMessage(var_209_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_210_int = 522705; // 0x170 PushI
	var_211_int = -1; // 0x171 PushI
	var_212_int = 23898; // 0x172 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_213_string = ""; // 0x176 PushV
	var_213_string = "Neutral"; // 0x177 MovS
	func_227(var_11_object, var_213_string); // 0x178 NEW_2
	var_214_int = 522706; // 0x17a PushI
	SetMessage(var_214_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_215_int = 522707; // 0x17f PushI
	var_216_int = -1; // 0x180 PushI
	var_217_int = 23900; // 0x181 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_218_int = 43795; // 0x185 PushI
	var_219_bool = var_10_bool == var_218_int; // 0x186 Eq
	if(var_219_bool == 0) goto Label_412; // 0x187 JumpB
	var_220_string = ""; // 0x188 PushV
	var_220_string = "Neutral"; // 0x189 MovS
	func_227(var_11_object, var_220_string); // 0x18a NEW_2
	var_221_int = 541623; // 0x18c PushI
	SetMessage(var_221_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_222_int = 541624; // 0x191 PushI
	var_223_int = -1; // 0x192 PushI
	var_224_int = 43796; // 0x193 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x194 TObjFunc
	var_225_int = 541627; // 0x196 PushI
	var_226_int = -1; // 0x197 PushI
	var_227_int = 43799; // 0x198 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_228_int = 23999; // 0x19c PushI
	var_229_bool = var_10_bool == var_228_int; // 0x19d Eq
	if(var_229_bool == 0) goto Label_435; // 0x19e JumpB
	var_230_string = ""; // 0x19f PushV
	var_230_string = "Neutral"; // 0x1a0 MovS
	func_227(var_11_object, var_230_string); // 0x1a1 NEW_2
	var_231_int = 522816; // 0x1a3 PushI
	SetMessage(var_231_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_232_int = 522817; // 0x1a8 PushI
	var_233_int = 24001; // 0x1a9 PushI
	var_234_int = 24000; // 0x1aa PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1ab TObjFunc
	var_235_int = 522819; // 0x1ad PushI
	var_236_int = 24003; // 0x1ae PushI
	var_237_int = 24002; // 0x1af PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_238_int = 24003; // 0x1b3 PushI
	var_239_bool = var_10_bool == var_238_int; // 0x1b4 Eq
	if(var_239_bool == 0) goto Label_458; // 0x1b5 JumpB
	var_240_string = ""; // 0x1b6 PushV
	var_240_string = "Neutral"; // 0x1b7 MovS
	func_227(var_11_object, var_240_string); // 0x1b8 NEW_2
	var_241_int = 522820; // 0x1ba PushI
	SetMessage(var_241_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_242_int = 522821; // 0x1bf PushI
	var_243_int = 24006; // 0x1c0 PushI
	var_244_int = 24004; // 0x1c1 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1c2 TObjFunc
	var_245_int = 522822; // 0x1c4 PushI
	var_246_int = -1; // 0x1c5 PushI
	var_247_int = 24005; // 0x1c6 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_248_int = 24006; // 0x1ca PushI
	var_249_bool = var_10_bool == var_248_int; // 0x1cb Eq
	if(var_249_bool == 0) goto Label_481; // 0x1cc JumpB
	var_250_string = ""; // 0x1cd PushV
	var_250_string = "Neutral"; // 0x1ce MovS
	func_227(var_11_object, var_250_string); // 0x1cf NEW_2
	var_251_int = 522823; // 0x1d1 PushI
	SetMessage(var_251_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_252_int = 522824; // 0x1d6 PushI
	var_253_int = -1; // 0x1d7 PushI
	var_254_int = 24007; // 0x1d8 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1d9 TObjFunc
	var_255_int = 522825; // 0x1db PushI
	var_256_int = -1; // 0x1dc PushI
	var_257_int = 24008; // 0x1dd PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_258_int = 24001; // 0x1e1 PushI
	var_259_bool = var_10_bool == var_258_int; // 0x1e2 Eq
	if(var_259_bool == 0) goto Label_504; // 0x1e3 JumpB
	var_260_string = ""; // 0x1e4 PushV
	var_260_string = "Neutral"; // 0x1e5 MovS
	func_227(var_11_object, var_260_string); // 0x1e6 NEW_2
	var_261_int = 522818; // 0x1e8 PushI
	SetMessage(var_261_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_262_int = 522826; // 0x1ed PushI
	var_263_int = -1; // 0x1ee PushI
	var_264_int = 24009; // 0x1ef PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x1f0 TObjFunc
	var_265_int = 522827; // 0x1f2 PushI
	var_266_int = -1; // 0x1f3 PushI
	var_267_int = 24010; // 0x1f4 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_3_string = 1; // 0x1f8 TMovB
	var_268_bool = 0; // 0x1f9 PushV
	func_918(var_268_bool); // 0x1fa NEW_2
	if(var_268_bool == 0) goto Label_512; // 0x1fc JumpB
	lshStopAnimation(); // 0x1fd Func
	goto Label_514; // 0x1ff Jump
	
Label_514:
	return 0; // 0x202 Return
	
Label_512:
	StopAnimation(); // 0x200 Func
	
Label_516:
	return 0; // 0x204 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x211 PushV
	var_13_string = "b12q01TheaterIsVisited"; // 0x212 PushS
	GetVariable(var_13_string, var_12_int); // 0x213 Func
	var_14_bool = var_12_int == 0; // 0x215 Not
	if(var_14_bool == 0) goto Label_544; // 0x216 JumpB
	func_610(var_11_int, var_12_int); // 0x218 NEW_2
	var_18_int = 0; var_19_object = Obj(); // 0x21a PushV
	var_19_object = var_10_object; // 0x21b Mov
	TaskCall(0); // 0x21c TaskCall
	func_0(var_20_object, var_18_int, var_19_object); // 0x21d NEW_2
	TaskReturn(); // 0x21e TaskReturn
	
Label_544:
	return 2; // 0x220 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x24c PushI
	var_12_bool = var_10_int == var_11_int; // 0x24d Eq
	if(var_12_bool == 0) goto Label_609; // 0x24e JumpB
	var_13_bool = 0; // 0x24f PushV
	func_572(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x250 NEW_2
	if(var_13_bool == 0) goto Label_603; // 0x252 JumpB
	var_26_bool = var_2_object == 0; // 0x253 Not
	if(var_26_bool == 0) goto Label_602; // 0x254 JumpB
	var_27_object = Obj(); // 0x255 PushV
	var_27_object = var_4_bool; // 0x256 MovT
	func_841(var_27_object); // 0x257 NEW_2
	var_2_object = 1; // 0x259 TMovB
	
Label_602:
	goto Label_609; // 0x25a Jump
	
Label_609:
	return 0; // 0x261 Return
	
Label_603:
	var_34_object = var_2_object; // 0x25b PushT
	if(var_34_object == 0) goto Label_609; // 0x25c JumpB
	var_35_string = "head"; // 0x25d PushS
	UnlookAsync(var_35_string); // 0x25e Func
	var_2_object = 0; // 0x260 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_517:
	var_10_bool = 1; // 0x205 PushB
	if(var_10_bool == 0) goto Label_528; // 0x206 JumpB
	var_11_float = 0; var_12_float = 0; // 0x207 PushV
	var_11_float = 300; // 0x208 MovI
	var_12_float = 100; // 0x209 MovI
	func_545(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x20a NEW_2
	var_73_int = 1; // 0x20c PushI
	Sleep(var_73_int); // 0x20d Func
	goto Label_517; // 0x20f Jump
	
Label_528:
	return 0; // 0x210 Return
}


func_0(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x0 PushV
	var_0_object = var_19_object; // 0x1 TMov
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x2 PushV
	var_30_object = var_19_object; // 0x3 Mov
	var_31_float = 130.0; // 0x4 MovF
	func_723(var_30_object, var_31_float); // 0x5 NEW_2
	var_76_bool = var_29_bool == 0; // 0x7 Not
	if(var_76_bool == 0) goto Label_11; // 0x8 JumpB
	var_18_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_25_object); // 0xb Func
	var_77_int = 0; // 0xd PushV
	func_912(var_77_int); // 0xe NEW_2
	SetNPCName(var_77_int); // 0x10 ObjFunc
	var_78_int = 0; // 0x12 PushV
	func_910(var_78_int); // 0x13 NEW_2
	SetNPCDescription(var_78_int); // 0x15 ObjFunc
	var_79_string = ""; // 0x17 PushV
	func_914(var_79_string); // 0x18 NEW_2
	SetPhoto(var_79_string); // 0x1a ObjFunc
	var_80_string = ""; // 0x1c PushV
	func_916(var_80_string); // 0x1d NEW_2
	SetPhoto2(var_80_string); // 0x1f ObjFunc
	var_81_int = 0; // 0x21 PushV
	func_991(var_81_int); // 0x22 NEW_2
	SetPlayerName(var_81_int); // 0x24 ObjFunc
	var_27_int = -1; // 0x26 MovI
	IsOverrideActive(var_26_bool); // 0x27 Func
	var_89_bool = var_26_bool; // 0x29 Push
	if(var_89_bool == 0) goto Label_45; // 0x2a JumpB
	var_18_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_25_object); // 0x2d Func
	var_90_object = Obj(); var_91_object = Obj(); // 0x2f PushV
	var_90_object = var_19_object; // 0x30 Mov
	var_91_object = var_25_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_28_bool); // 0x36 ObjFunc
	
Label_56:
	var_301_bool = var_28_bool == 0; // 0x38 Not
	if(var_301_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_28_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_302_object = Obj(); // 0x3f PushV
	var_302_object = var_19_object; // 0x40 Mov
	func_792(); // 0x41 NEW_2
	StopDialog(var_25_object); // 0x43 Func
	GetReturnValue(var_27_int); // 0x45 ObjFunc
	var_18_int = var_27_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1164(var_147_bool)
{
	var_148_object = Obj(); var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_object = Obj(); var_153_int = 0; var_154_int = 0; var_155_int = 0; // 0x48c PushV
	CreateIntVector(var_152_object); // 0x48d Func
	var_156_object = Obj(); var_157_bool = 0; var_158_int = 0; // 0x48f PushV
	var_156_object = var_152_object; // 0x490 Mov
	var_157_bool = 0; // 0x491 MovB
	var_158_int = -1; // 0x492 MovI
	func_1041(var_157_bool, var_158_int); // 0x493 NEW_2
	size(var_153_int); // 0x495 ObjFunc
	var_154_int = 0; // 0x497 MovI
	
Label_1176:
	var_171_bool = var_154_int < var_153_int; // 0x498 LT
	if(var_171_bool == 0) goto Label_1199; // 0x499 JumpB
	get(var_155_int, var_154_int); // 0x49a ObjFunc
	var_172_bool = 0; // 0x49c PushV
	var_172_bool = 1; // 0x49d MovB
	var_173_bool = 0; var_174_int = 0; // 0x49e PushV
	var_174_int = var_155_int; // 0x49f Mov
	func_1116(var_173_bool, var_174_int); // 0x4a0 NEW_2
	if(var_173_bool == 0) goto Label_1193; // 0x4a2 JumpB
	var_175_bool = 0; var_176_int = 0; // 0x4a3 PushV
	var_176_int = var_155_int; // 0x4a4 Mov
	func_1106(var_175_bool, var_176_int); // 0x4a5 NEW_2
	if(var_175_bool == 0) goto Label_1193; // 0x4a7 JumpB
	var_172_bool = 0; // 0x4a8 MovB
	
Label_1193:
	if(var_172_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_147_bool = 0; // 0x4aa MovB
	return 8; // 0x4ab Return
	
Label_1196:
	var_177_int = 1; // 0x4ac PushI
	var_154_int = var_154_int + var_177_int; // 0x4ad Add2
	goto Label_1176; // 0x4ae Jump
	
Label_1199:
	var_147_bool = 1; // 0x4af MovB
	return 8; // 0x4b0 Return
}


func_910(var_78_int)
{
	var_78_int = 515571; // 0x38e MovI
	return 0; // 0x38f Return
}


func_912(var_77_int)
{
	var_77_int = 504029; // 0x390 MovI
	return 0; // 0x391 Return
}


func_1041(var_157_bool, var_158_int)
{
	var_159_int = 6; // 0x412 PushI
	add(var_159_int); // 0x413 ObjFunc
	var_160_int = 26; // 0x415 PushI
	add(var_160_int); // 0x416 ObjFunc
	var_161_int = 2; // 0x418 PushI
	add(var_161_int); // 0x419 ObjFunc
	var_162_int = 22; // 0x41b PushI
	add(var_162_int); // 0x41c ObjFunc
	var_163_bool = 0; // 0x41e PushB
	var_164_bool = var_157_bool == var_163_bool; // 0x41f Eq
	if(var_164_bool == 0) goto Label_1067; // 0x420 JumpB
	var_165_int = 15; // 0x421 PushI
	add(var_165_int); // 0x422 ObjFunc
	var_166_int = 5; // 0x424 PushI
	add(var_166_int); // 0x425 ObjFunc
	var_167_int = 16; // 0x427 PushI
	add(var_167_int); // 0x428 ObjFunc
	goto Label_1073; // 0x42a Jump
	
Label_1073:
	return 0; // 0x431 Return
	
Label_1067:
	var_168_int = 0; // 0x42b PushI
	var_169_bool = var_158_int != var_168_int; // 0x42c Neq
	if(var_169_bool == 0) goto Label_1073; // 0x42d JumpB
	var_170_int = 15; // 0x42e PushI
	add(var_170_int); // 0x42f ObjFunc
}


func_914(var_79_string)
{
	var_79_string = "ui/NPC_bmask.png"; // 0x392 MovS
	return 0; // 0x393 Return
}


func_916(var_80_string)
{
	var_80_string = "ui/NPC_bmask_b.png"; // 0x394 MovS
	return 0; // 0x395 Return
}


func_918(var_72_bool)
{
	var_72_bool = 0; // 0x396 MovB
	return 0; // 0x397 Return
}


func_792()
{
	var_303_bool = 0; var_304_bool = 0; // 0x318 PushV
	var_305_bool = 1; // 0x319 PushB
	CameraSwitchToNormal(var_305_bool); // 0x31a Func
	var_306_bool = 0; // 0x31c PushV
	func_918(var_306_bool); // 0x31d NEW_2
	if(var_306_bool == 0) goto Label_801; // 0x31f JumpB
	goto Label_809; // 0x320 Jump
	
Label_809:
	return 2; // 0x329 Return
	
Label_801:
	var_307_string = "head"; // 0x321 PushS
	HasAnimationTrack(var_304_bool, var_307_string); // 0x322 Func
	var_308_bool = var_304_bool; // 0x324 Push
	if(var_308_bool == 0) goto Label_809; // 0x325 JumpB
	var_309_string = "head"; // 0x326 PushS
	UnlookAsync(var_309_string); // 0x327 Func
}


func_920()
{
	var_289_string = "oob12BirdmaskT1"; // 0x399 PushS
	var_290_int = 1; // 0x39a PushI
	SetVariable(var_289_string, var_290_int); // 0x39b Func
	return 0; // 0x39d Return
}


func_926()
{
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0x39f PushV
	var_25_string = "quest_b12_01"; // 0x3a0 MovS
	var_26_string = "init_theater"; // 0x3a1 MovS
	func_874(var_24_bool, var_25_string, var_26_string); // 0x3a2 NEW_2
	return 0; // 0x3a4 Return
}


func_545(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x222 PushV
	func_718(var_13_bool); // 0x223 NEW_2
	var_16_bool = var_13_bool == 0; // 0x225 Not
	if(var_16_bool == 0) goto Label_552; // 0x226 JumpB
	return 0; // 0x227 Return
	
Label_552:
	var_17_string = "player"; // 0x228 PushS
	FindActor(var_9_object, var_17_string); // 0x229 Func
	var_2_object = 0; // 0x22b TMovB
	var_3_string = 0; // 0x22c TMovB
	var_0_object = var_11_float; // 0x22d TMov
	var_1_object = var_12_float; // 0x22e TMov
	var_18_int = 10; // 0x22f PushI
	var_19_float = 1.0; // 0x230 PushF
	SetTimer(var_18_int, var_19_float); // 0x231 Func
	func_624(); // 0x234 NEW_2
	var_71_bool = var_3_string == 0; // 0x236 Not
	if(var_71_bool == 0) goto Label_571; // 0x237 JumpB
	var_72_int = 10; // 0x238 PushI
	KillTimer(var_72_int); // 0x239 Func
	
Label_571:
	return 0; // 0x23b Return
}


func_933()
{
	var_18_string = "oob12BirdmaskT2"; // 0x3a6 PushS
	var_19_int = 1; // 0x3a7 PushI
	SetVariable(var_18_string, var_19_int); // 0x3a8 Func
	return 0; // 0x3aa Return
}


func_810(var_244_string)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0; // 0x32a PushV
	lshHasAnimation(var_248_bool, var_244_string); // 0x32b Func
	var_251_bool = var_248_bool; // 0x32d Push
	if(var_251_bool == 0) goto Label_821; // 0x32e JumpB
	lshGetAnimTimes(var_244_string, var_249_float, var_250_float); // 0x32f Func
	var_252_bool = 0; // 0x331 PushB
	lshPlayAnimation(var_249_float, var_250_float, var_252_bool); // 0x332 Func
	goto Label_825; // 0x334 Jump
	
Label_825:
	return 6; // 0x339 Return
	
Label_821:
	var_253_string = "Can't find lsh animation : "; // 0x335 PushS
	var_254_int = var_253_string + var_244_string; // 0x336 Add
	Trace(var_254_int); // 0x337 Func
}


func_939(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0x3ac PushV
	var_100_object = var_98_object; // 0x3ad Mov
	func_985(var_100_object); // 0x3ae NEW_2
	if(var_99_bool == 0) goto Label_947; // 0x3b0 JumpB
	var_97_bool = 1; // 0x3b1 MovB
	return 0; // 0x3b2 Return
	
Label_947:
	var_97_bool = 0; // 0x3b3 MovB
	return 0; // 0x3b4 Return
}


func_1074(var_113_bool)
{
	var_115_int = 7; // 0x433 PushI
	add(var_115_int); // 0x434 ObjFunc
	var_116_int = 23; // 0x436 PushI
	add(var_116_int); // 0x437 ObjFunc
	var_117_int = 21; // 0x439 PushI
	add(var_117_int); // 0x43a ObjFunc
	var_118_int = 9; // 0x43c PushI
	add(var_118_int); // 0x43d ObjFunc
	var_119_int = 3; // 0x43f PushI
	add(var_119_int); // 0x440 ObjFunc
	var_120_int = 1; // 0x442 PushI
	add(var_120_int); // 0x443 ObjFunc
	var_121_int = 11; // 0x445 PushI
	add(var_121_int); // 0x446 ObjFunc
	var_122_int = 13; // 0x448 PushI
	add(var_122_int); // 0x449 ObjFunc
	var_123_bool = 0; // 0x44b PushB
	var_124_bool = var_113_bool == var_123_bool; // 0x44c Eq
	if(var_124_bool == 0) goto Label_1105; // 0x44d JumpB
	var_125_int = 25; // 0x44e PushI
	add(var_125_int); // 0x44f ObjFunc
	
Label_1105:
	return 0; // 0x451 Return
}


func_1202(var_103_bool)
{
	var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_int = 0; var_110_int = 0; var_111_int = 0; // 0x4b2 PushV
	CreateIntVector(var_108_object); // 0x4b3 Func
	var_112_object = Obj(); var_113_bool = 0; var_114_int = 0; // 0x4b5 PushV
	var_112_object = var_108_object; // 0x4b6 Mov
	var_113_bool = 0; // 0x4b7 MovB
	var_114_int = -1; // 0x4b8 MovI
	func_1074(var_114_int); // 0x4b9 NEW_2
	size(var_109_int); // 0x4bb ObjFunc
	var_110_int = 0; // 0x4bd MovI
	
Label_1214:
	var_126_bool = var_110_int < var_109_int; // 0x4be LT
	if(var_126_bool == 0) goto Label_1237; // 0x4bf JumpB
	get(var_111_int, var_110_int); // 0x4c0 ObjFunc
	var_127_bool = 0; // 0x4c2 PushV
	var_127_bool = 1; // 0x4c3 MovB
	var_128_bool = 0; var_129_int = 0; // 0x4c4 PushV
	var_129_int = var_111_int; // 0x4c5 Mov
	func_1116(var_128_bool, var_129_int); // 0x4c6 NEW_2
	if(var_128_bool == 0) goto Label_1231; // 0x4c8 JumpB
	var_137_bool = 0; var_138_int = 0; // 0x4c9 PushV
	var_138_int = var_111_int; // 0x4ca Mov
	func_1106(var_137_bool, var_138_int); // 0x4cb NEW_2
	if(var_137_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_127_bool = 0; // 0x4ce MovB
	
Label_1231:
	if(var_127_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_103_bool = 0; // 0x4d0 MovB
	return 8; // 0x4d1 Return
	
Label_1234:
	var_146_int = 1; // 0x4d2 PushI
	var_110_int = var_110_int + var_146_int; // 0x4d3 Add2
	goto Label_1214; // 0x4d4 Jump
	
Label_1237:
	var_103_bool = 1; // 0x4d5 MovB
	return 8; // 0x4d6 Return
}


func_949(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x3b6 PushV
	var_282_string = "oob12BirdmaskT1"; // 0x3b7 MovS
	func_869(var_281_int, var_282_string); // 0x3b8 NEW_2
	var_283_int = 0; // 0x3ba PushI
	var_284_bool = var_281_int == var_283_int; // 0x3bb Eq
	if(var_284_bool == 0) goto Label_959; // 0x3bc JumpB
	var_279_bool = 1; // 0x3bd MovB
	return 0; // 0x3be Return
	
Label_959:
	var_279_bool = 0; // 0x3bf MovB
	return 0; // 0x3c0 Return
}


func_826(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x33a PushV
	lshHasAnimation(var_221_bool, var_214_string); // 0x33b Func
	var_224_bool = var_221_bool; // 0x33d Push
	if(var_224_bool == 0) goto Label_836; // 0x33e JumpB
	lshGetAnimTimes(var_214_string, var_222_float, var_223_float); // 0x33f Func
	lshPlayAnimation(var_222_float, var_223_float, var_215_bool); // 0x341 Func
	goto Label_840; // 0x343 Jump
	
Label_840:
	return 6; // 0x348 Return
	
Label_836:
	var_225_string = "Can't find lsh animation : "; // 0x344 PushS
	var_226_int = var_225_string + var_214_string; // 0x345 Add
	Trace(var_226_int); // 0x346 Func
}


func_572(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x23c PushV
	var_16_bool = var_4_bool == 0; // 0x23d NullEq
	if(var_16_bool == 0) goto Label_577; // 0x23e JumpB
	var_13_bool = 0; // 0x23f MovB
	return 2; // 0x240 Return
	
Label_577:
	var_17_float = 0; var_18_object = Obj(); // 0x241 PushV
	var_18_object = var_4_bool; // 0x242 MovT
	func_710(var_18_object); // 0x243 NEW_2
	var_15_float = sqrt(var_17_float); // 0x245 Sqrt2
	var_25_object = var_2_object; // 0x246 PushT
	if(var_25_object == 0) goto Label_585; // 0x247 JumpB
	var_15_float = var_15_float - var_1_object; // 0x248 Sub2
	
Label_585:
	var_13_bool = var_15_float < var_0_object; // 0x249 LT2
	return 2; // 0x24a Return
}


func_703(var_61_bool)
{
	var_61_bool = 1; // 0x2bf MovB
	return 0; // 0x2c0 Return
}


func_961(var_260_bool)
{
	var_262_int = 0; var_263_string = ""; // 0x3c2 PushV
	var_263_string = "b12q01ChildsAreVisited"; // 0x3c3 MovS
	func_869(var_262_int, var_263_string); // 0x3c4 NEW_2
	var_264_int = 0; // 0x3c6 PushI
	var_265_bool = var_262_int != var_264_int; // 0x3c7 Neq
	if(var_265_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_260_bool = 1; // 0x3c9 MovB
	return 0; // 0x3ca Return
	
Label_971:
	var_260_bool = 0; // 0x3cb MovB
	return 0; // 0x3cc Return
}


func_705()
{
	StopAnimation(); // 0x2c1 Func
	StopGroup0(); // 0x2c3 Func
	return 0; // 0x2c5 Return
}


func_710(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x2c6 PushV
	GetPosition(var_22_cvector); // 0x2c7 Func
	GetPosition(var_23_cvector); // 0x2c9 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x2cb Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x2cc Or2
	return 6; // 0x2cd Return
}


func_841(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x349 PushV
	GetEyesHeight(var_30_float); // 0x34a ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x34c MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x34d PushE
	var_32_float = var_30_float; // 0x34e Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x34f PopE
	var_33_string = "head"; // 0x350 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x351 Func
	return 4; // 0x353 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object; // 0x4b TMov
	var_1_object = var_90_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_96_int = 1; // 0x4e PushI
	if(var_96_int == 0) goto Label_197; // 0x4f JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x50 PushV
	var_98_object = var_1_object; // 0x51 MovT
	func_939(var_97_bool, var_98_object); // 0x52 NEW_2
	var_209_bool = var_97_bool == 0; // 0x54 Not
	if(var_209_bool == 0) goto Label_111; // 0x55 JumpB
	var_210_string = ""; // 0x56 PushV
	var_210_string = "Neutral"; // 0x57 MovS
	func_227(var_91_object, var_210_string); // 0x58 NEW_2
	var_227_int = 522171; // 0x5a PushI
	SetMessage(var_227_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_228_bool = 0; var_229_object = Obj(); // 0x5f PushV
	var_229_object = var_1_object; // 0x60 MovT
	func_973(var_229_object); // 0x61 NEW_2
	if(var_228_bool == 0) goto Label_105; // 0x63 JumpB
	var_236_int = 522172; // 0x64 PushI
	var_237_int = 23999; // 0x65 PushI
	var_238_int = 23339; // 0x66 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x67 TObjFunc
	
Label_105:
	var_239_int = 523159; // 0x69 PushI
	var_240_int = -1; // 0x6a PushI
	var_241_int = 24361; // 0x6b PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x6c TObjFunc
	goto Label_197; // 0x6e Jump
	
Label_197:
	var_242_bool = 0; // 0xc5 PushV
	func_918(var_242_bool); // 0xc6 NEW_2
	if(var_242_bool == 0) goto Label_212; // 0xc8 JumpB
	
Label_201:
	lshWaitForAnimEnd(); // 0xc9 Func
	var_243_string = var_3_string; // 0xcb PushT
	if(var_243_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_211:
	goto Label_226; // 0xd3 Jump
	
Label_226:
	return 0; // 0xe2 Return
	
Label_206:
	var_244_string = ""; // 0xce PushV
	var_244_string = var_2_object; // 0xcf MovT
	func_810(var_244_string); // 0xd0 NEW_2
	goto Label_201; // 0xd2 Jump
	
Label_212:
	var_255_string = "all"; // 0xd4 PushS
	var_256_string = "idle"; // 0xd5 PushS
	PlayAnimation(var_255_string, var_256_string); // 0xd6 Func
	
Label_216:
	WaitForAnimEnd(); // 0xd8 Func
	var_257_string = var_3_string; // 0xda PushT
	if(var_257_string == 0) goto Label_221; // 0xdb JumpB
	goto Label_226; // 0xdc Jump
	
Label_221:
	var_258_string = "all"; // 0xdd PushS
	var_259_string = "idle"; // 0xde PushS
	PlayAnimation(var_258_string, var_259_string); // 0xdf Func
	goto Label_216; // 0xe1 Jump
	
Label_111:
	var_260_bool = 0; var_261_object = Obj(); // 0x6f PushV
	var_261_object = var_1_object; // 0x70 MovT
	func_961(var_261_object); // 0x71 NEW_2
	var_266_bool = var_260_bool == 0; // 0x73 Not
	if(var_266_bool == 0) goto Label_137; // 0x74 JumpB
	var_267_string = ""; // 0x75 PushV
	var_267_string = "Neutral"; // 0x76 MovS
	func_227(var_91_object, var_267_string); // 0x77 NEW_2
	var_268_int = 541621; // 0x79 PushI
	SetMessage(var_268_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_269_int = 541622; // 0x7e PushI
	var_270_int = 43795; // 0x7f PushI
	var_271_int = 43794; // 0x80 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x81 TObjFunc
	var_272_int = 541626; // 0x83 PushI
	var_273_int = -1; // 0x84 PushI
	var_274_int = 43798; // 0x85 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x86 TObjFunc
	goto Label_197; // 0x88 Jump
	
Label_137:
	var_275_bool = 0; // 0x89 PushV
	var_275_bool = 0; // 0x8a MovB
	var_276_bool = 0; // 0x8b PushV
	var_276_bool = 0; // 0x8c MovB
	var_277_bool = 0; var_278_object = Obj(); // 0x8d PushV
	var_278_object = var_1_object; // 0x8e MovT
	func_939(var_277_bool, var_278_object); // 0x8f NEW_2
	if(var_277_bool == 0) goto Label_152; // 0x91 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x92 PushV
	var_280_object = var_1_object; // 0x93 MovT
	func_949(var_280_object); // 0x94 NEW_2
	if(var_279_bool == 0) goto Label_152; // 0x96 JumpB
	var_276_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_276_bool == 0) goto Label_159; // 0x98 JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x99 PushV
	var_286_object = var_1_object; // 0x9a MovT
	func_961(var_286_object); // 0x9b NEW_2
	if(var_285_bool == 0) goto Label_159; // 0x9d JumpB
	var_275_bool = 1; // 0x9e MovB
	
Label_159:
	if(var_275_bool == 0) goto Label_180; // 0x9f JumpB
	var_287_object = Obj(); var_288_object = Obj(); // 0xa0 PushV
	var_287_object = var_1_object; // 0xa1 MovT
	var_288_object = var_0_object; // 0xa2 MovT
	func_920(); // 0xa3 NEW_2
	var_291_string = ""; // 0xa5 PushV
	var_291_string = "Neutral"; // 0xa6 MovS
	func_227(var_91_object, var_291_string); // 0xa7 NEW_2
	var_292_int = 522704; // 0xa9 PushI
	SetMessage(var_292_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_293_int = 522705; // 0xae PushI
	var_294_int = -1; // 0xaf PushI
	var_295_int = 23898; // 0xb0 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xb1 TObjFunc
	goto Label_197; // 0xb3 Jump
	
Label_180:
	var_296_string = ""; // 0xb4 PushV
	var_296_string = "Neutral"; // 0xb5 MovS
	func_227(var_91_object, var_296_string); // 0xb6 NEW_2
	var_297_int = 522706; // 0xb8 PushI
	SetMessage(var_297_int); // 0xb9 TObjFunc
	ClearReplies(); // 0xbb TObjFunc
	var_298_int = 522707; // 0xbd PushI
	var_299_int = -1; // 0xbe PushI
	var_300_int = 23900; // 0xbf PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xc0 TObjFunc
	goto Label_197; // 0xc2 Jump
}


func_973(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x3ce PushV
	var_231_string = "oob12BirdmaskT2"; // 0x3cf MovS
	func_869(var_230_int, var_231_string); // 0x3d0 NEW_2
	var_234_int = 0; // 0x3d2 PushI
	var_235_bool = var_230_int == var_234_int; // 0x3d3 Eq
	if(var_235_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_228_bool = 1; // 0x3d5 MovB
	return 0; // 0x3d6 Return
	
Label_983:
	var_228_bool = 0; // 0x3d7 MovB
	return 0; // 0x3d8 Return
}


func_718(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2ce PushV
	IsLoaded(var_15_bool); // 0x2cf Func
	var_13_bool = var_15_bool; // 0x2d1 Mov
	return 2; // 0x2d2 Return
}


func_1106(var_137_bool, var_138_int)
{
	var_139_int = 0; var_140_int = 0; // 0x452 PushV
	var_141_string = "vol_"; // 0x453 PushS
	var_142_int = var_141_string + var_138_int; // 0x454 Add
	GetVariable(var_142_int, var_140_int); // 0x455 Func
	var_143_int = 4; // 0x457 PushI
	var_144_int = var_140_int & var_143_int; // 0x458 And
	var_145_int = 0; // 0x459 PushI
	var_137_bool = var_144_int != var_145_int; // 0x45a Neq2
	return 2; // 0x45b Return
}


func_723(var_29_bool, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; // 0x2d3 PushV
	GetPosition(var_42_cvector); // 0x2d4 ObjFunc
	GetEyesHeight(var_41_float); // 0x2d6 ObjFunc
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2d8 PushE
	var_50_float = var_50_float + var_41_float; // 0x2d9 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2da PopE
	GetPosition(var_43_cvector); // 0x2db Func
	GetEyesHeight(var_41_float); // 0x2dd Func
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x2df PushE
	var_51_float = var_51_float + var_41_float; // 0x2e0 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x2e1 PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x2e2 Sub2
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x2e3 PushE
	var_52_float = 0; // 0x2e4 MovI
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x2e5 PopE
	var_53_int = var_44_cvector | var_44_cvector; // 0x2e6 Or
	var_54_float = sqrt(var_53_int); // 0x2e7 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x2e8 Div2
	var_45_cvector = -var_44_cvector; // 0x2e9 Neg2
	var_55_float = var_44_cvector * var_31_float; // 0x2ea Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x2eb PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x2ec PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x2ed Xor2
	func_859(var_56_cvector, var_57_cvector); // 0x2ee NEW_2
	var_64_int = 25; // 0x2f0 PushI
	var_65_float = var_56_cvector * var_64_int; // 0x2f1 Mult
	var_66_int = var_55_float + var_65_float; // 0x2f2 Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x2f3 PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x2f4 Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x2f5 Add2
	IsOverrideActive(var_48_bool); // 0x2f6 Func
	var_68_bool = var_48_bool; // 0x2f8 Push
	if(var_68_bool == 0) goto Label_764; // 0x2f9 JumpB
	var_29_bool = 0; // 0x2fa MovB
	return 18; // 0x2fb Return
	
Label_764:
	StopWorld(); // 0x2fc Func
	var_69_bool = 1; // 0x2fe PushB
	CameraTransit(var_47_cvector, var_45_cvector, var_69_bool); // 0x2ff Func
	var_70_float = GetByIndex(var_46_cvector, 0); // 0x301 PushE
	var_71_float = GetByIndex(var_46_cvector, 2); // 0x302 PushE
	Rotate(var_70_float, var_71_float); // 0x303 Func
	var_72_bool = 0; // 0x305 PushV
	func_918(var_72_bool); // 0x306 NEW_2
	if(var_72_bool == 0) goto Label_778; // 0x308 JumpB
	goto Label_786; // 0x309 Jump
	
Label_786:
	CameraWaitForPlayFinish(); // 0x312 Func
	ResumeWorld(); // 0x314 Func
	var_29_bool = 1; // 0x316 MovB
	return 18; // 0x317 Return
	
Label_778:
	var_73_string = "head"; // 0x30a PushS
	HasAnimationTrack(var_49_bool, var_73_string); // 0x30b Func
	var_74_bool = var_49_bool; // 0x30d Push
	if(var_74_bool == 0) goto Label_786; // 0x30e JumpB
	var_75_string = "head"; // 0x30f PushS
	LookAsyncCamera(var_75_string); // 0x310 Func
}


func_852()
{
	var_13_bool = 0; // 0x354 PushV
	func_918(var_13_bool); // 0x355 NEW_2
	if(var_13_bool == 0) goto Label_858; // 0x357 JumpB
	lshStopSpeech(); // 0x358 Func
	
Label_858:
	return 0; // 0x35a Return
}


func_1240(var_101_bool)
{
	var_101_bool = 0; // 0x4d8 MovB
	var_102_bool = 0; // 0x4d9 PushV
	var_102_bool = 0; // 0x4da MovB
	var_103_bool = 0; // 0x4db PushV
	func_1202(var_103_bool); // 0x4dc NEW_2
	if(var_103_bool == 0) goto Label_1252; // 0x4de JumpB
	var_147_bool = 0; // 0x4df PushV
	func_1164(var_147_bool); // 0x4e0 NEW_2
	if(var_147_bool == 0) goto Label_1252; // 0x4e2 JumpB
	var_102_bool = 1; // 0x4e3 MovB
	
Label_1252:
	if(var_102_bool == 0) goto Label_1258; // 0x4e4 JumpB
	var_178_bool = 0; // 0x4e5 PushV
	func_1126(var_178_bool); // 0x4e6 NEW_2
	if(var_178_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_101_bool = 1; // 0x4e9 MovB
	
Label_1258:
	return 0; // 0x4ea Return
}


func_985(var_99_bool)
{
	var_101_bool = 0; // 0x3da PushV
	func_1240(var_101_bool); // 0x3db NEW_2
	var_99_bool = var_101_bool; // 0x3dc Mov
	return 0; // 0x3de Return
}


func_859(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x35b PushV
	var_61_int = var_57_cvector | var_57_cvector; // 0x35c Or
	var_60_float = sqrt(var_61_int); // 0x35d Sqrt2
	var_62_float = 0.0; // 0x35e PushF
	var_63_bool = var_60_float < var_62_float; // 0x35f LT
	if(var_63_bool == 0) goto Label_867; // 0x360 JumpB
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x361 MovV
	return 2; // 0x362 Return
	
Label_867:
	var_56_cvector = var_57_cvector / var_57_cvector; // 0x363 Div2
	return 2; // 0x364 Return
}


func_1116(var_128_bool, var_129_int)
{
	var_130_int = 0; var_131_int = 0; // 0x45c PushV
	var_132_string = "vol_"; // 0x45d PushS
	var_133_int = var_132_string + var_129_int; // 0x45e Add
	GetVariable(var_133_int, var_131_int); // 0x45f Func
	var_134_int = 16; // 0x461 PushI
	var_135_int = var_131_int & var_134_int; // 0x462 And
	var_136_int = 0; // 0x463 PushI
	var_128_bool = var_135_int != var_136_int; // 0x464 Neq2
	return 2; // 0x465 Return
}


func_991(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0x3df PushV
	var_84_string = "branch"; // 0x3e0 PushS
	GetVariable(var_84_string, var_83_int); // 0x3e1 Func
	var_85_int = 0; // 0x3e3 PushI
	var_86_bool = var_83_int == var_85_int; // 0x3e4 Eq
	if(var_86_bool == 0) goto Label_1001; // 0x3e5 JumpB
	var_81_int = 1; // 0x3e6 MovI
	return 2; // 0x3e7 Return
	
Label_1001:
	var_87_int = 1; // 0x3e9 PushI
	var_88_bool = var_83_int == var_87_int; // 0x3ea Eq
	if(var_88_bool == 0) goto Label_1006; // 0x3eb JumpB
	var_81_int = 2; // 0x3ec MovI
	return 2; // 0x3ed Return
	
Label_1006:
	var_81_int = 3; // 0x3ee MovI
	return 2; // 0x3ef Return
}


func_610(var_2_object, var_3_string)
{
	func_705(); // 0x263 NEW_2
	var_15_int = 10; // 0x265 PushI
	KillTimer(var_15_int); // 0x266 Func
	var_16_object = var_2_object; // 0x268 PushT
	if(var_16_object == 0) goto Label_622; // 0x269 JumpB
	var_17_string = "head"; // 0x26a PushS
	UnlookAsync(var_17_string); // 0x26b Func
	var_2_object = 0; // 0x26d TMovB
	
Label_622:
	var_3_string = 1; // 0x26e TMovB
	return 0; // 0x26f Return
}


func_227(var_2_object, var_210_string)
{
	var_211_bool = 0; // 0xe4 PushV
	func_918(var_211_bool); // 0xe5 NEW_2
	var_212_bool = var_211_bool == 0; // 0xe7 Not
	if(var_212_bool == 0) goto Label_234; // 0xe8 JumpB
	return 0; // 0xe9 Return
	
Label_234:
	var_213_bool = var_210_string == var_2_object; // 0xea Eq
	if(var_213_bool == 0) goto Label_237; // 0xeb JumpB
	return 0; // 0xec Return
	
Label_237:
	var_214_string = ""; var_215_bool = 0; // 0xed PushV
	var_214_string = var_210_string; // 0xee Mov
	var_216_string = ""; // 0xef PushS
	var_217_bool = var_210_string == var_216_string; // 0xf0 Eq
	if(var_217_bool == 0) goto Label_244; // 0xf1 JumpB
	var_215_bool = 0; // 0xf2 MovB
	goto Label_245; // 0xf3 Jump
	
Label_245:
	func_826(var_214_string, var_215_bool); // 0xf5 NEW_2
	var_2_object = var_210_string; // 0xf7 TMov
	return 0; // 0xf8 Return
	
Label_244:
	var_215_bool = 1; // 0xf4 MovB
}


func_869(var_230_int, var_231_string)
{
	var_232_int = 0; var_233_int = 0; // 0x365 PushV
	GetVariable(var_231_string, var_233_int); // 0x366 Func
	var_230_int = var_233_int; // 0x368 Mov
	return 2; // 0x369 Return
}


func_1126(var_178_bool)
{
	var_179_object = Obj(); var_180_int = 0; var_181_int = 0; var_182_int = 0; var_183_object = Obj(); var_184_int = 0; var_185_int = 0; var_186_int = 0; // 0x466 PushV
	CreateIntVector(var_183_object); // 0x467 Func
	var_187_object = Obj(); var_188_bool = 0; var_189_int = 0; // 0x469 PushV
	var_187_object = var_183_object; // 0x46a Mov
	var_188_bool = 0; // 0x46b MovB
	var_189_int = -1; // 0x46c MovI
	func_1008(var_188_bool, var_189_int); // 0x46d NEW_2
	size(var_184_int); // 0x46f ObjFunc
	var_185_int = 0; // 0x471 MovI
	
Label_1138:
	var_202_bool = var_185_int < var_184_int; // 0x472 LT
	if(var_202_bool == 0) goto Label_1161; // 0x473 JumpB
	get(var_186_int, var_185_int); // 0x474 ObjFunc
	var_203_bool = 0; // 0x476 PushV
	var_203_bool = 1; // 0x477 MovB
	var_204_bool = 0; var_205_int = 0; // 0x478 PushV
	var_205_int = var_186_int; // 0x479 Mov
	func_1116(var_204_bool, var_205_int); // 0x47a NEW_2
	if(var_204_bool == 0) goto Label_1155; // 0x47c JumpB
	var_206_bool = 0; var_207_int = 0; // 0x47d PushV
	var_207_int = var_186_int; // 0x47e Mov
	func_1106(var_206_bool, var_207_int); // 0x47f NEW_2
	if(var_206_bool == 0) goto Label_1155; // 0x481 JumpB
	var_203_bool = 0; // 0x482 MovB
	
Label_1155:
	if(var_203_bool == 0) goto Label_1158; // 0x483 JumpB
	var_178_bool = 0; // 0x484 MovB
	return 8; // 0x485 Return
	
Label_1158:
	var_208_int = 1; // 0x486 PushI
	var_185_int = var_185_int + var_208_int; // 0x487 Add2
	goto Label_1138; // 0x488 Jump
	
Label_1161:
	var_178_bool = 1; // 0x489 MovB
	return 8; // 0x48a Return
}


func_874(var_24_bool, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x36a PushV
	FindActor(var_28_object, var_25_string); // 0x36b Func
	var_29_bool = var_28_object == 0; // 0x36d NullEq
	if(var_29_bool == 0) goto Label_881; // 0x36e JumpB
	var_24_bool = 0; // 0x36f MovB
	return 2; // 0x370 Return
	
Label_881:
	Trigger(var_28_object, var_26_string); // 0x371 Func
	var_24_bool = 1; // 0x373 MovB
	return 2; // 0x374 Return
}


func_624()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x270 PushV
	WaitForAnimEnd(); // 0x271 Func
	var_34_bool = 0; // 0x273 PushV
	func_718(var_34_bool); // 0x274 NEW_2
	var_35_bool = var_34_bool == 0; // 0x276 Not
	if(var_35_bool == 0) goto Label_633; // 0x277 JumpB
	return 14; // 0x278 Return
	
Label_633:
	var_36_int = 0; // 0x279 PushV
	func_893(var_36_int); // 0x27a NEW_2
	var_27_int = var_36_int; // 0x27b Mov
	var_28_int = 0; // 0x27d MovI
	
Label_638:
	var_49_bool = 0; // 0x27e PushV
	var_49_bool = 0; // 0x27f MovB
	var_50_int = 5; // 0x280 PushI
	var_51_bool = var_28_int < var_50_int; // 0x281 LT
	if(var_51_bool == 0) goto Label_648; // 0x282 JumpB
	var_52_bool = 0; // 0x283 PushV
	func_718(var_52_bool); // 0x284 NEW_2
	if(var_52_bool == 0) goto Label_648; // 0x286 JumpB
	var_49_bool = 1; // 0x287 MovB
	
Label_648:
	if(var_49_bool == 0) goto Label_700; // 0x288 JumpB
	var_53_int = 3; // 0x289 PushI
	irand(var_29_int, var_53_int); // 0x28a Func
	var_54_int = 0; // 0x28c PushI
	var_55_bool = var_29_int == var_54_int; // 0x28d Eq
	if(var_55_bool == 0) goto Label_672; // 0x28e JumpB
	var_56_int = var_27_int; // 0x28f Push
	if(var_56_int == 0) goto Label_671; // 0x290 JumpB
	irand(var_30_int, var_27_int); // 0x291 Func
	var_57_string = "all"; // 0x293 PushS
	var_58_string = ""; var_59_int = 0; // 0x294 PushV
	var_59_int = var_30_int; // 0x295 Mov
	func_886(var_58_string, var_59_int); // 0x296 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x298 Func
	WaitForAnimEnd(var_31_bool); // 0x29a Func
	var_60_bool = var_31_bool == 0; // 0x29c Not
	if(var_60_bool == 0) goto Label_671; // 0x29d JumpB
	goto Label_700; // 0x29e Jump
	
Label_700:
	ResetAAS(); // 0x2bc Func
	return 14; // 0x2be Return
	
Label_671:
	goto Label_689; // 0x29f Jump
	
Label_689:
	var_61_bool = 0; // 0x2b1 PushV
	func_703(var_61_bool); // 0x2b2 NEW_2
	var_62_bool = var_61_bool == 0; // 0x2b4 Not
	if(var_62_bool == 0) goto Label_695; // 0x2b5 JumpB
	goto Label_700; // 0x2b6 Jump
	
Label_695:
	ResetAAS(); // 0x2b7 Func
	var_63_int = 1; // 0x2b9 PushI
	var_28_int = var_28_int + var_63_int; // 0x2ba Add2
	goto Label_638; // 0x2bb Jump
	
Label_672:
	var_64_int = 1; // 0x2a0 PushI
	var_65_bool = var_29_int == var_64_int; // 0x2a1 Eq
	if(var_65_bool == 0) goto Label_686; // 0x2a2 JumpB
	var_66_int = 4; // 0x2a3 PushI
	rand(var_32_float, var_66_int); // 0x2a4 Func
	var_67_int = 1; // 0x2a6 PushI
	var_68_int = var_32_float + var_67_int; // 0x2a7 Add
	Sleep(var_68_int, var_33_bool); // 0x2a8 Func
	var_69_bool = var_33_bool == 0; // 0x2aa Not
	if(var_69_bool == 0) goto Label_685; // 0x2ab JumpB
	goto Label_700; // 0x2ac Jump
	
Label_685:
	goto Label_689; // 0x2ad Jump
	
Label_686:
	var_70_int = var_28_int; // 0x2ae Push
	if(var_70_int == 0) goto Label_689; // 0x2af JumpB
	goto Label_700; // 0x2b0 Jump
}


func_1008(var_188_bool, var_189_int)
{
	var_190_int = 18; // 0x3f1 PushI
	add(var_190_int); // 0x3f2 ObjFunc
	var_191_int = 24; // 0x3f4 PushI
	add(var_191_int); // 0x3f5 ObjFunc
	var_192_int = 20; // 0x3f7 PushI
	add(var_192_int); // 0x3f8 ObjFunc
	var_193_int = 14; // 0x3fa PushI
	add(var_193_int); // 0x3fb ObjFunc
	var_194_bool = 0; // 0x3fd PushB
	var_195_bool = var_188_bool == var_194_bool; // 0x3fe Eq
	if(var_195_bool == 0) goto Label_1034; // 0x3ff JumpB
	var_196_int = 10; // 0x400 PushI
	add(var_196_int); // 0x401 ObjFunc
	var_197_int = 17; // 0x403 PushI
	add(var_197_int); // 0x404 ObjFunc
	var_198_int = 8; // 0x406 PushI
	add(var_198_int); // 0x407 ObjFunc
	goto Label_1040; // 0x409 Jump
	
Label_1040:
	return 0; // 0x410 Return
	
Label_1034:
	var_199_int = 1; // 0x40a PushI
	var_200_bool = var_189_int != var_199_int; // 0x40b Neq
	if(var_200_bool == 0) goto Label_1040; // 0x40c JumpB
	var_201_int = 10; // 0x40d PushI
	add(var_201_int); // 0x40e ObjFunc
}


func_886(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x376 PushV
	var_45_string = "idle"; // 0x377 MovS
	var_46_int = var_43_int; // 0x378 Push
	if(var_46_int == 0) goto Label_891; // 0x379 JumpB
	var_45_string = var_45_string + var_43_int; // 0x37a Add2
	
Label_891:
	var_42_string = var_45_string; // 0x37b Mov
	return 2; // 0x37c Return
}


func_893(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x37d PushV
	var_39_int = 0; // 0x37e MovI
	
Label_895:
	var_41_string = "all"; // 0x37f PushS
	var_42_string = ""; var_43_int = 0; // 0x380 PushV
	var_43_int = var_39_int; // 0x381 Mov
	func_886(var_42_string, var_43_int); // 0x382 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x384 Func
	var_47_bool = var_40_bool == 0; // 0x386 Not
	if(var_47_bool == 0) goto Label_905; // 0x387 JumpB
	goto Label_908; // 0x388 Jump
	
Label_908:
	var_36_int = var_39_int; // 0x38c Mov
	return 4; // 0x38d Return
	
Label_905:
	var_48_int = 1; // 0x389 PushI
	var_39_int = var_39_int + var_48_int; // 0x38a Add2
	goto Label_895; // 0x38b Jump
}


