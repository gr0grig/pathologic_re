task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xfa PushI
	if(var_12_int == 0) goto Label_516; // 0xfb JumpB
	func_850(); // 0xfd NEW_2
	var_14_int = 23339; // 0xff PushI
	var_15_bool = var_11_object == var_14_int; // 0x100 Eq
	if(var_15_bool == 0) goto Label_263; // 0x101 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x102 PushV
	var_16_object = var_1_object; // 0x103 MovT
	var_17_object = var_0_object; // 0x104 MovT
	func_931(); // 0x105 NEW_2
	
Label_263:
	var_20_int = 23898; // 0x107 PushI
	var_21_bool = var_11_object == var_20_int; // 0x108 Eq
	if(var_21_bool == 0) goto Label_271; // 0x109 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x10a PushV
	var_22_object = var_1_object; // 0x10b MovT
	var_23_object = var_0_object; // 0x10c MovT
	func_924(); // 0x10d NEW_2
	
Label_271:
	var_30_int = 23338; // 0x10f PushI
	var_31_bool = var_10_bool == var_30_int; // 0x110 Eq
	if(var_31_bool == 0) goto Label_389; // 0x111 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x112 PushV
	var_33_object = var_1_object; // 0x113 MovT
	func_937(var_32_bool, var_33_object); // 0x114 NEW_2
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
	func_971(var_164_object); // 0x123 NEW_2
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
	func_959(var_178_object); // 0x133 NEW_2
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
	func_937(var_194_bool, var_195_object); // 0x151 NEW_2
	if(var_194_bool == 0) goto Label_346; // 0x153 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x154 PushV
	var_197_object = var_1_object; // 0x155 MovT
	func_947(var_197_object); // 0x156 NEW_2
	if(var_196_bool == 0) goto Label_346; // 0x158 JumpB
	var_193_bool = 1; // 0x159 MovB
	
Label_346:
	if(var_193_bool == 0) goto Label_353; // 0x15a JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x15b PushV
	var_203_object = var_1_object; // 0x15c MovT
	func_959(var_203_object); // 0x15d NEW_2
	if(var_202_bool == 0) goto Label_353; // 0x15f JumpB
	var_192_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_192_bool == 0) goto Label_374; // 0x161 JumpB
	var_204_object = Obj(); var_205_object = Obj(); // 0x162 PushV
	var_204_object = var_1_object; // 0x163 MovT
	var_205_object = var_0_object; // 0x164 MovT
	func_918(); // 0x165 NEW_2
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
	func_916(var_268_bool); // 0x1fa NEW_2
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
	func_839(var_27_object); // 0x257 NEW_2
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
	var_75_bool = var_29_bool == 0; // 0x7 Not
	if(var_75_bool == 0) goto Label_11; // 0x8 JumpB
	var_18_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_25_object); // 0xb Func
	var_76_int = 0; // 0xd PushV
	func_910(var_76_int); // 0xe NEW_2
	SetNPCName(var_76_int); // 0x10 ObjFunc
	var_77_int = 0; // 0x12 PushV
	func_908(var_77_int); // 0x13 NEW_2
	SetNPCDescription(var_77_int); // 0x15 ObjFunc
	var_78_string = ""; // 0x17 PushV
	func_912(var_78_string); // 0x18 NEW_2
	SetPhoto(var_78_string); // 0x1a ObjFunc
	var_79_string = ""; // 0x1c PushV
	func_914(var_79_string); // 0x1d NEW_2
	SetPhoto2(var_79_string); // 0x1f ObjFunc
	var_80_int = 0; // 0x21 PushV
	func_989(var_80_int); // 0x22 NEW_2
	SetPlayerName(var_80_int); // 0x24 ObjFunc
	var_27_int = -1; // 0x26 MovI
	IsOverrideActive(var_26_bool); // 0x27 Func
	var_88_bool = var_26_bool; // 0x29 Push
	if(var_88_bool == 0) goto Label_45; // 0x2a JumpB
	var_18_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_25_object); // 0x2d Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x2f PushV
	var_89_object = var_19_object; // 0x30 Mov
	var_90_object = var_25_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_28_bool); // 0x36 ObjFunc
	
Label_56:
	var_300_bool = var_28_bool == 0; // 0x38 Not
	if(var_300_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_28_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_301_object = Obj(); // 0x3f PushV
	var_301_object = var_19_object; // 0x40 Mov
	func_791(); // 0x41 NEW_2
	StopDialog(var_25_object); // 0x43 Func
	GetReturnValue(var_27_int); // 0x45 ObjFunc
	var_18_int = var_27_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1162(var_146_bool)
{
	var_147_object = Obj(); var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_object = Obj(); var_152_int = 0; var_153_int = 0; var_154_int = 0; // 0x48a PushV
	CreateIntVector(var_151_object); // 0x48b Func
	var_155_object = Obj(); var_156_bool = 0; var_157_int = 0; // 0x48d PushV
	var_155_object = var_151_object; // 0x48e Mov
	var_156_bool = 0; // 0x48f MovB
	var_157_int = -1; // 0x490 MovI
	func_1039(var_156_bool, var_157_int); // 0x491 NEW_2
	size(var_152_int); // 0x493 ObjFunc
	var_153_int = 0; // 0x495 MovI
	
Label_1174:
	var_170_bool = var_153_int < var_152_int; // 0x496 LT
	if(var_170_bool == 0) goto Label_1197; // 0x497 JumpB
	get(var_154_int, var_153_int); // 0x498 ObjFunc
	var_171_bool = 0; // 0x49a PushV
	var_171_bool = 1; // 0x49b MovB
	var_172_bool = 0; var_173_int = 0; // 0x49c PushV
	var_173_int = var_154_int; // 0x49d Mov
	func_1114(var_172_bool, var_173_int); // 0x49e NEW_2
	if(var_172_bool == 0) goto Label_1191; // 0x4a0 JumpB
	var_174_bool = 0; var_175_int = 0; // 0x4a1 PushV
	var_175_int = var_154_int; // 0x4a2 Mov
	func_1104(var_174_bool, var_175_int); // 0x4a3 NEW_2
	if(var_174_bool == 0) goto Label_1191; // 0x4a5 JumpB
	var_171_bool = 0; // 0x4a6 MovB
	
Label_1191:
	if(var_171_bool == 0) goto Label_1194; // 0x4a7 JumpB
	var_146_bool = 0; // 0x4a8 MovB
	return 8; // 0x4a9 Return
	
Label_1194:
	var_176_int = 1; // 0x4aa PushI
	var_153_int = var_153_int + var_176_int; // 0x4ab Add2
	goto Label_1174; // 0x4ac Jump
	
Label_1197:
	var_146_bool = 1; // 0x4ad MovB
	return 8; // 0x4ae Return
}


func_908(var_77_int)
{
	var_77_int = 515571; // 0x38c MovI
	return 0; // 0x38d Return
}


func_910(var_76_int)
{
	var_76_int = 504029; // 0x38e MovI
	return 0; // 0x38f Return
}


func_1039(var_156_bool, var_157_int)
{
	var_158_int = 6; // 0x410 PushI
	add(var_158_int); // 0x411 ObjFunc
	var_159_int = 26; // 0x413 PushI
	add(var_159_int); // 0x414 ObjFunc
	var_160_int = 2; // 0x416 PushI
	add(var_160_int); // 0x417 ObjFunc
	var_161_int = 22; // 0x419 PushI
	add(var_161_int); // 0x41a ObjFunc
	var_162_bool = 0; // 0x41c PushB
	var_163_bool = var_156_bool == var_162_bool; // 0x41d Eq
	if(var_163_bool == 0) goto Label_1065; // 0x41e JumpB
	var_164_int = 15; // 0x41f PushI
	add(var_164_int); // 0x420 ObjFunc
	var_165_int = 5; // 0x422 PushI
	add(var_165_int); // 0x423 ObjFunc
	var_166_int = 16; // 0x425 PushI
	add(var_166_int); // 0x426 ObjFunc
	goto Label_1071; // 0x428 Jump
	
Label_1071:
	return 0; // 0x42f Return
	
Label_1065:
	var_167_int = 0; // 0x429 PushI
	var_168_bool = var_157_int != var_167_int; // 0x42a Neq
	if(var_168_bool == 0) goto Label_1071; // 0x42b JumpB
	var_169_int = 15; // 0x42c PushI
	add(var_169_int); // 0x42d ObjFunc
}


func_912(var_78_string)
{
	var_78_string = "ui/NPC_bmask.png"; // 0x390 MovS
	return 0; // 0x391 Return
}


func_914(var_79_string)
{
	var_79_string = "ui/NPC_bmask_b.png"; // 0x392 MovS
	return 0; // 0x393 Return
}


func_916(var_71_bool)
{
	var_71_bool = 0; // 0x394 MovB
	return 0; // 0x395 Return
}


func_918()
{
	var_288_string = "oob12BirdmaskT1"; // 0x397 PushS
	var_289_int = 1; // 0x398 PushI
	SetVariable(var_288_string, var_289_int); // 0x399 Func
	return 0; // 0x39b Return
}


func_791()
{
	var_302_bool = 0; var_303_bool = 0; // 0x317 PushV
	CameraSwitchToNormal(); // 0x318 Func
	var_304_bool = 0; // 0x31a PushV
	func_916(var_304_bool); // 0x31b NEW_2
	if(var_304_bool == 0) goto Label_799; // 0x31d JumpB
	goto Label_807; // 0x31e Jump
	
Label_807:
	return 2; // 0x327 Return
	
Label_799:
	var_305_string = "head"; // 0x31f PushS
	HasAnimationTrack(var_303_bool, var_305_string); // 0x320 Func
	var_306_bool = var_303_bool; // 0x322 Push
	if(var_306_bool == 0) goto Label_807; // 0x323 JumpB
	var_307_string = "head"; // 0x324 PushS
	UnlookAsync(var_307_string); // 0x325 Func
}


func_924()
{
	var_24_bool = 0; var_25_string = ""; var_26_string = ""; // 0x39d PushV
	var_25_string = "quest_b12_01"; // 0x39e MovS
	var_26_string = "init_theater"; // 0x39f MovS
	func_872(var_24_bool, var_25_string, var_26_string); // 0x3a0 NEW_2
	return 0; // 0x3a2 Return
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


func_931()
{
	var_18_string = "oob12BirdmaskT2"; // 0x3a4 PushS
	var_19_int = 1; // 0x3a5 PushI
	SetVariable(var_18_string, var_19_int); // 0x3a6 Func
	return 0; // 0x3a8 Return
}


func_808(var_243_string)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0; // 0x328 PushV
	lshHasAnimation(var_247_bool, var_243_string); // 0x329 Func
	var_250_bool = var_247_bool; // 0x32b Push
	if(var_250_bool == 0) goto Label_819; // 0x32c JumpB
	lshGetAnimTimes(var_243_string, var_248_float, var_249_float); // 0x32d Func
	var_251_bool = 0; // 0x32f PushB
	lshPlayAnimation(var_248_float, var_249_float, var_251_bool); // 0x330 Func
	goto Label_823; // 0x332 Jump
	
Label_823:
	return 6; // 0x337 Return
	
Label_819:
	var_252_string = "Can't find lsh animation : "; // 0x333 PushS
	var_253_int = var_252_string + var_243_string; // 0x334 Add
	Trace(var_253_int); // 0x335 Func
}


func_937(var_96_bool, var_97_object)
{
	var_98_bool = 0; var_99_object = Obj(); // 0x3aa PushV
	var_99_object = var_97_object; // 0x3ab Mov
	func_983(var_99_object); // 0x3ac NEW_2
	if(var_98_bool == 0) goto Label_945; // 0x3ae JumpB
	var_96_bool = 1; // 0x3af MovB
	return 0; // 0x3b0 Return
	
Label_945:
	var_96_bool = 0; // 0x3b1 MovB
	return 0; // 0x3b2 Return
}


func_1072(var_112_bool)
{
	var_114_int = 7; // 0x431 PushI
	add(var_114_int); // 0x432 ObjFunc
	var_115_int = 23; // 0x434 PushI
	add(var_115_int); // 0x435 ObjFunc
	var_116_int = 21; // 0x437 PushI
	add(var_116_int); // 0x438 ObjFunc
	var_117_int = 9; // 0x43a PushI
	add(var_117_int); // 0x43b ObjFunc
	var_118_int = 3; // 0x43d PushI
	add(var_118_int); // 0x43e ObjFunc
	var_119_int = 1; // 0x440 PushI
	add(var_119_int); // 0x441 ObjFunc
	var_120_int = 11; // 0x443 PushI
	add(var_120_int); // 0x444 ObjFunc
	var_121_int = 13; // 0x446 PushI
	add(var_121_int); // 0x447 ObjFunc
	var_122_bool = 0; // 0x449 PushB
	var_123_bool = var_112_bool == var_122_bool; // 0x44a Eq
	if(var_123_bool == 0) goto Label_1103; // 0x44b JumpB
	var_124_int = 25; // 0x44c PushI
	add(var_124_int); // 0x44d ObjFunc
	
Label_1103:
	return 0; // 0x44f Return
}


func_1200(var_102_bool)
{
	var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; // 0x4b0 PushV
	CreateIntVector(var_107_object); // 0x4b1 Func
	var_111_object = Obj(); var_112_bool = 0; var_113_int = 0; // 0x4b3 PushV
	var_111_object = var_107_object; // 0x4b4 Mov
	var_112_bool = 0; // 0x4b5 MovB
	var_113_int = -1; // 0x4b6 MovI
	func_1072(var_113_int); // 0x4b7 NEW_2
	size(var_108_int); // 0x4b9 ObjFunc
	var_109_int = 0; // 0x4bb MovI
	
Label_1212:
	var_125_bool = var_109_int < var_108_int; // 0x4bc LT
	if(var_125_bool == 0) goto Label_1235; // 0x4bd JumpB
	get(var_110_int, var_109_int); // 0x4be ObjFunc
	var_126_bool = 0; // 0x4c0 PushV
	var_126_bool = 1; // 0x4c1 MovB
	var_127_bool = 0; var_128_int = 0; // 0x4c2 PushV
	var_128_int = var_110_int; // 0x4c3 Mov
	func_1114(var_127_bool, var_128_int); // 0x4c4 NEW_2
	if(var_127_bool == 0) goto Label_1229; // 0x4c6 JumpB
	var_136_bool = 0; var_137_int = 0; // 0x4c7 PushV
	var_137_int = var_110_int; // 0x4c8 Mov
	func_1104(var_136_bool, var_137_int); // 0x4c9 NEW_2
	if(var_136_bool == 0) goto Label_1229; // 0x4cb JumpB
	var_126_bool = 0; // 0x4cc MovB
	
Label_1229:
	if(var_126_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_102_bool = 0; // 0x4ce MovB
	return 8; // 0x4cf Return
	
Label_1232:
	var_145_int = 1; // 0x4d0 PushI
	var_109_int = var_109_int + var_145_int; // 0x4d1 Add2
	goto Label_1212; // 0x4d2 Jump
	
Label_1235:
	var_102_bool = 1; // 0x4d3 MovB
	return 8; // 0x4d4 Return
}


func_947(var_278_bool)
{
	var_280_int = 0; var_281_string = ""; // 0x3b4 PushV
	var_281_string = "oob12BirdmaskT1"; // 0x3b5 MovS
	func_867(var_280_int, var_281_string); // 0x3b6 NEW_2
	var_282_int = 0; // 0x3b8 PushI
	var_283_bool = var_280_int == var_282_int; // 0x3b9 Eq
	if(var_283_bool == 0) goto Label_957; // 0x3ba JumpB
	var_278_bool = 1; // 0x3bb MovB
	return 0; // 0x3bc Return
	
Label_957:
	var_278_bool = 0; // 0x3bd MovB
	return 0; // 0x3be Return
}


func_824(var_213_string, var_214_bool)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x338 PushV
	lshHasAnimation(var_220_bool, var_213_string); // 0x339 Func
	var_223_bool = var_220_bool; // 0x33b Push
	if(var_223_bool == 0) goto Label_834; // 0x33c JumpB
	lshGetAnimTimes(var_213_string, var_221_float, var_222_float); // 0x33d Func
	lshPlayAnimation(var_221_float, var_222_float, var_214_bool); // 0x33f Func
	goto Label_838; // 0x341 Jump
	
Label_838:
	return 6; // 0x346 Return
	
Label_834:
	var_224_string = "Can't find lsh animation : "; // 0x342 PushS
	var_225_int = var_224_string + var_213_string; // 0x343 Add
	Trace(var_225_int); // 0x344 Func
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


func_959(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x3c0 PushV
	var_262_string = "b12q01ChildsAreVisited"; // 0x3c1 MovS
	func_867(var_261_int, var_262_string); // 0x3c2 NEW_2
	var_263_int = 0; // 0x3c4 PushI
	var_264_bool = var_261_int != var_263_int; // 0x3c5 Neq
	if(var_264_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_259_bool = 1; // 0x3c7 MovB
	return 0; // 0x3c8 Return
	
Label_969:
	var_259_bool = 0; // 0x3c9 MovB
	return 0; // 0x3ca Return
}


func_703(var_61_bool)
{
	var_61_bool = 1; // 0x2bf MovB
	return 0; // 0x2c0 Return
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


func_839(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x347 PushV
	GetEyesHeight(var_30_float); // 0x348 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x34a MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x34b PushE
	var_32_float = var_30_float; // 0x34c Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x34d PopE
	var_33_string = "head"; // 0x34e PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x34f Func
	return 4; // 0x351 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x4b TMov
	var_1_object = var_89_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_95_int = 1; // 0x4e PushI
	if(var_95_int == 0) goto Label_197; // 0x4f JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x50 PushV
	var_97_object = var_1_object; // 0x51 MovT
	func_937(var_96_bool, var_97_object); // 0x52 NEW_2
	var_208_bool = var_96_bool == 0; // 0x54 Not
	if(var_208_bool == 0) goto Label_111; // 0x55 JumpB
	var_209_string = ""; // 0x56 PushV
	var_209_string = "Neutral"; // 0x57 MovS
	func_227(var_90_object, var_209_string); // 0x58 NEW_2
	var_226_int = 522171; // 0x5a PushI
	SetMessage(var_226_int); // 0x5b TObjFunc
	ClearReplies(); // 0x5d TObjFunc
	var_227_bool = 0; var_228_object = Obj(); // 0x5f PushV
	var_228_object = var_1_object; // 0x60 MovT
	func_971(var_228_object); // 0x61 NEW_2
	if(var_227_bool == 0) goto Label_105; // 0x63 JumpB
	var_235_int = 522172; // 0x64 PushI
	var_236_int = 23999; // 0x65 PushI
	var_237_int = 23339; // 0x66 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x67 TObjFunc
	
Label_105:
	var_238_int = 523159; // 0x69 PushI
	var_239_int = -1; // 0x6a PushI
	var_240_int = 24361; // 0x6b PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x6c TObjFunc
	goto Label_197; // 0x6e Jump
	
Label_197:
	var_241_bool = 0; // 0xc5 PushV
	func_916(var_241_bool); // 0xc6 NEW_2
	if(var_241_bool == 0) goto Label_212; // 0xc8 JumpB
	
Label_201:
	lshWaitForAnimEnd(); // 0xc9 Func
	var_242_string = var_3_string; // 0xcb PushT
	if(var_242_string == 0) goto Label_206; // 0xcc JumpB
	goto Label_211; // 0xcd Jump
	
Label_211:
	goto Label_226; // 0xd3 Jump
	
Label_226:
	return 0; // 0xe2 Return
	
Label_206:
	var_243_string = ""; // 0xce PushV
	var_243_string = var_2_object; // 0xcf MovT
	func_808(var_243_string); // 0xd0 NEW_2
	goto Label_201; // 0xd2 Jump
	
Label_212:
	var_254_string = "all"; // 0xd4 PushS
	var_255_string = "idle"; // 0xd5 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xd6 Func
	
Label_216:
	WaitForAnimEnd(); // 0xd8 Func
	var_256_string = var_3_string; // 0xda PushT
	if(var_256_string == 0) goto Label_221; // 0xdb JumpB
	goto Label_226; // 0xdc Jump
	
Label_221:
	var_257_string = "all"; // 0xdd PushS
	var_258_string = "idle"; // 0xde PushS
	PlayAnimation(var_257_string, var_258_string); // 0xdf Func
	goto Label_216; // 0xe1 Jump
	
Label_111:
	var_259_bool = 0; var_260_object = Obj(); // 0x6f PushV
	var_260_object = var_1_object; // 0x70 MovT
	func_959(var_260_object); // 0x71 NEW_2
	var_265_bool = var_259_bool == 0; // 0x73 Not
	if(var_265_bool == 0) goto Label_137; // 0x74 JumpB
	var_266_string = ""; // 0x75 PushV
	var_266_string = "Neutral"; // 0x76 MovS
	func_227(var_90_object, var_266_string); // 0x77 NEW_2
	var_267_int = 541621; // 0x79 PushI
	SetMessage(var_267_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_268_int = 541622; // 0x7e PushI
	var_269_int = 43795; // 0x7f PushI
	var_270_int = 43794; // 0x80 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x81 TObjFunc
	var_271_int = 541626; // 0x83 PushI
	var_272_int = -1; // 0x84 PushI
	var_273_int = 43798; // 0x85 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x86 TObjFunc
	goto Label_197; // 0x88 Jump
	
Label_137:
	var_274_bool = 0; // 0x89 PushV
	var_274_bool = 0; // 0x8a MovB
	var_275_bool = 0; // 0x8b PushV
	var_275_bool = 0; // 0x8c MovB
	var_276_bool = 0; var_277_object = Obj(); // 0x8d PushV
	var_277_object = var_1_object; // 0x8e MovT
	func_937(var_276_bool, var_277_object); // 0x8f NEW_2
	if(var_276_bool == 0) goto Label_152; // 0x91 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x92 PushV
	var_279_object = var_1_object; // 0x93 MovT
	func_947(var_279_object); // 0x94 NEW_2
	if(var_278_bool == 0) goto Label_152; // 0x96 JumpB
	var_275_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_275_bool == 0) goto Label_159; // 0x98 JumpB
	var_284_bool = 0; var_285_object = Obj(); // 0x99 PushV
	var_285_object = var_1_object; // 0x9a MovT
	func_959(var_285_object); // 0x9b NEW_2
	if(var_284_bool == 0) goto Label_159; // 0x9d JumpB
	var_274_bool = 1; // 0x9e MovB
	
Label_159:
	if(var_274_bool == 0) goto Label_180; // 0x9f JumpB
	var_286_object = Obj(); var_287_object = Obj(); // 0xa0 PushV
	var_286_object = var_1_object; // 0xa1 MovT
	var_287_object = var_0_object; // 0xa2 MovT
	func_918(); // 0xa3 NEW_2
	var_290_string = ""; // 0xa5 PushV
	var_290_string = "Neutral"; // 0xa6 MovS
	func_227(var_90_object, var_290_string); // 0xa7 NEW_2
	var_291_int = 522704; // 0xa9 PushI
	SetMessage(var_291_int); // 0xaa TObjFunc
	ClearReplies(); // 0xac TObjFunc
	var_292_int = 522705; // 0xae PushI
	var_293_int = -1; // 0xaf PushI
	var_294_int = 23898; // 0xb0 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xb1 TObjFunc
	goto Label_197; // 0xb3 Jump
	
Label_180:
	var_295_string = ""; // 0xb4 PushV
	var_295_string = "Neutral"; // 0xb5 MovS
	func_227(var_90_object, var_295_string); // 0xb6 NEW_2
	var_296_int = 522706; // 0xb8 PushI
	SetMessage(var_296_int); // 0xb9 TObjFunc
	ClearReplies(); // 0xbb TObjFunc
	var_297_int = 522707; // 0xbd PushI
	var_298_int = -1; // 0xbe PushI
	var_299_int = 23900; // 0xbf PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xc0 TObjFunc
	goto Label_197; // 0xc2 Jump
}


func_971(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x3cc PushV
	var_230_string = "oob12BirdmaskT2"; // 0x3cd MovS
	func_867(var_229_int, var_230_string); // 0x3ce NEW_2
	var_233_int = 0; // 0x3d0 PushI
	var_234_bool = var_229_int == var_233_int; // 0x3d1 Eq
	if(var_234_bool == 0) goto Label_981; // 0x3d2 JumpB
	var_227_bool = 1; // 0x3d3 MovB
	return 0; // 0x3d4 Return
	
Label_981:
	var_227_bool = 0; // 0x3d5 MovB
	return 0; // 0x3d6 Return
}


func_718(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2ce PushV
	IsLoaded(var_15_bool); // 0x2cf Func
	var_13_bool = var_15_bool; // 0x2d1 Mov
	return 2; // 0x2d2 Return
}


func_1104(var_136_bool, var_137_int)
{
	var_138_int = 0; var_139_int = 0; // 0x450 PushV
	var_140_string = "vol_"; // 0x451 PushS
	var_141_int = var_140_string + var_137_int; // 0x452 Add
	GetVariable(var_141_int, var_139_int); // 0x453 Func
	var_142_int = 4; // 0x455 PushI
	var_143_int = var_139_int & var_142_int; // 0x456 And
	var_144_int = 0; // 0x457 PushI
	var_136_bool = var_143_int != var_144_int; // 0x458 Neq2
	return 2; // 0x459 Return
}


func_850()
{
	var_13_bool = 0; // 0x352 PushV
	func_916(var_13_bool); // 0x353 NEW_2
	if(var_13_bool == 0) goto Label_856; // 0x355 JumpB
	lshStopSpeech(); // 0x356 Func
	
Label_856:
	return 0; // 0x358 Return
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
	func_857(var_56_cvector, var_57_cvector); // 0x2ee NEW_2
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
	CameraTransit(var_47_cvector, var_45_cvector); // 0x2fe Func
	var_69_float = GetByIndex(var_46_cvector, 0); // 0x300 PushE
	var_70_float = GetByIndex(var_46_cvector, 2); // 0x301 PushE
	Rotate(var_69_float, var_70_float); // 0x302 Func
	var_71_bool = 0; // 0x304 PushV
	func_916(var_71_bool); // 0x305 NEW_2
	if(var_71_bool == 0) goto Label_777; // 0x307 JumpB
	goto Label_785; // 0x308 Jump
	
Label_785:
	CameraWaitForPlayFinish(); // 0x311 Func
	ResumeWorld(); // 0x313 Func
	var_29_bool = 1; // 0x315 MovB
	return 18; // 0x316 Return
	
Label_777:
	var_72_string = "head"; // 0x309 PushS
	HasAnimationTrack(var_49_bool, var_72_string); // 0x30a Func
	var_73_bool = var_49_bool; // 0x30c Push
	if(var_73_bool == 0) goto Label_785; // 0x30d JumpB
	var_74_string = "head"; // 0x30e PushS
	LookAsyncCamera(var_74_string); // 0x30f Func
}


func_1238(var_100_bool)
{
	var_100_bool = 0; // 0x4d6 MovB
	var_101_bool = 0; // 0x4d7 PushV
	var_101_bool = 0; // 0x4d8 MovB
	var_102_bool = 0; // 0x4d9 PushV
	func_1200(var_102_bool); // 0x4da NEW_2
	if(var_102_bool == 0) goto Label_1250; // 0x4dc JumpB
	var_146_bool = 0; // 0x4dd PushV
	func_1162(var_146_bool); // 0x4de NEW_2
	if(var_146_bool == 0) goto Label_1250; // 0x4e0 JumpB
	var_101_bool = 1; // 0x4e1 MovB
	
Label_1250:
	if(var_101_bool == 0) goto Label_1256; // 0x4e2 JumpB
	var_177_bool = 0; // 0x4e3 PushV
	func_1124(var_177_bool); // 0x4e4 NEW_2
	if(var_177_bool == 0) goto Label_1256; // 0x4e6 JumpB
	var_100_bool = 1; // 0x4e7 MovB
	
Label_1256:
	return 0; // 0x4e8 Return
}


func_983(var_98_bool)
{
	var_100_bool = 0; // 0x3d8 PushV
	func_1238(var_100_bool); // 0x3d9 NEW_2
	var_98_bool = var_100_bool; // 0x3da Mov
	return 0; // 0x3dc Return
}


func_857(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x359 PushV
	var_61_int = var_57_cvector | var_57_cvector; // 0x35a Or
	var_60_float = sqrt(var_61_int); // 0x35b Sqrt2
	var_62_float = 0.0; // 0x35c PushF
	var_63_bool = var_60_float < var_62_float; // 0x35d LT
	if(var_63_bool == 0) goto Label_865; // 0x35e JumpB
	var_56_cvector = CVector(0.0, 0.0, 0.0); // 0x35f MovV
	return 2; // 0x360 Return
	
Label_865:
	var_56_cvector = var_57_cvector / var_57_cvector; // 0x361 Div2
	return 2; // 0x362 Return
}


func_1114(var_127_bool, var_128_int)
{
	var_129_int = 0; var_130_int = 0; // 0x45a PushV
	var_131_string = "vol_"; // 0x45b PushS
	var_132_int = var_131_string + var_128_int; // 0x45c Add
	GetVariable(var_132_int, var_130_int); // 0x45d Func
	var_133_int = 16; // 0x45f PushI
	var_134_int = var_130_int & var_133_int; // 0x460 And
	var_135_int = 0; // 0x461 PushI
	var_127_bool = var_134_int != var_135_int; // 0x462 Neq2
	return 2; // 0x463 Return
}


func_989(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x3dd PushV
	var_83_string = "branch"; // 0x3de PushS
	GetVariable(var_83_string, var_82_int); // 0x3df Func
	var_84_int = 0; // 0x3e1 PushI
	var_85_bool = var_82_int == var_84_int; // 0x3e2 Eq
	if(var_85_bool == 0) goto Label_999; // 0x3e3 JumpB
	var_80_int = 1; // 0x3e4 MovI
	return 2; // 0x3e5 Return
	
Label_999:
	var_86_int = 1; // 0x3e7 PushI
	var_87_bool = var_82_int == var_86_int; // 0x3e8 Eq
	if(var_87_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_80_int = 2; // 0x3ea MovI
	return 2; // 0x3eb Return
	
Label_1004:
	var_80_int = 3; // 0x3ec MovI
	return 2; // 0x3ed Return
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


func_227(var_2_object, var_209_string)
{
	var_210_bool = 0; // 0xe4 PushV
	func_916(var_210_bool); // 0xe5 NEW_2
	var_211_bool = var_210_bool == 0; // 0xe7 Not
	if(var_211_bool == 0) goto Label_234; // 0xe8 JumpB
	return 0; // 0xe9 Return
	
Label_234:
	var_212_bool = var_209_string == var_2_object; // 0xea Eq
	if(var_212_bool == 0) goto Label_237; // 0xeb JumpB
	return 0; // 0xec Return
	
Label_237:
	var_213_string = ""; var_214_bool = 0; // 0xed PushV
	var_213_string = var_209_string; // 0xee Mov
	var_215_string = ""; // 0xef PushS
	var_216_bool = var_209_string == var_215_string; // 0xf0 Eq
	if(var_216_bool == 0) goto Label_244; // 0xf1 JumpB
	var_214_bool = 0; // 0xf2 MovB
	goto Label_245; // 0xf3 Jump
	
Label_245:
	func_824(var_213_string, var_214_bool); // 0xf5 NEW_2
	var_2_object = var_209_string; // 0xf7 TMov
	return 0; // 0xf8 Return
	
Label_244:
	var_214_bool = 1; // 0xf4 MovB
}


func_867(var_229_int, var_230_string)
{
	var_231_int = 0; var_232_int = 0; // 0x363 PushV
	GetVariable(var_230_string, var_232_int); // 0x364 Func
	var_229_int = var_232_int; // 0x366 Mov
	return 2; // 0x367 Return
}


func_1124(var_177_bool)
{
	var_178_object = Obj(); var_179_int = 0; var_180_int = 0; var_181_int = 0; var_182_object = Obj(); var_183_int = 0; var_184_int = 0; var_185_int = 0; // 0x464 PushV
	CreateIntVector(var_182_object); // 0x465 Func
	var_186_object = Obj(); var_187_bool = 0; var_188_int = 0; // 0x467 PushV
	var_186_object = var_182_object; // 0x468 Mov
	var_187_bool = 0; // 0x469 MovB
	var_188_int = -1; // 0x46a MovI
	func_1006(var_187_bool, var_188_int); // 0x46b NEW_2
	size(var_183_int); // 0x46d ObjFunc
	var_184_int = 0; // 0x46f MovI
	
Label_1136:
	var_201_bool = var_184_int < var_183_int; // 0x470 LT
	if(var_201_bool == 0) goto Label_1159; // 0x471 JumpB
	get(var_185_int, var_184_int); // 0x472 ObjFunc
	var_202_bool = 0; // 0x474 PushV
	var_202_bool = 1; // 0x475 MovB
	var_203_bool = 0; var_204_int = 0; // 0x476 PushV
	var_204_int = var_185_int; // 0x477 Mov
	func_1114(var_203_bool, var_204_int); // 0x478 NEW_2
	if(var_203_bool == 0) goto Label_1153; // 0x47a JumpB
	var_205_bool = 0; var_206_int = 0; // 0x47b PushV
	var_206_int = var_185_int; // 0x47c Mov
	func_1104(var_205_bool, var_206_int); // 0x47d NEW_2
	if(var_205_bool == 0) goto Label_1153; // 0x47f JumpB
	var_202_bool = 0; // 0x480 MovB
	
Label_1153:
	if(var_202_bool == 0) goto Label_1156; // 0x481 JumpB
	var_177_bool = 0; // 0x482 MovB
	return 8; // 0x483 Return
	
Label_1156:
	var_207_int = 1; // 0x484 PushI
	var_184_int = var_184_int + var_207_int; // 0x485 Add2
	goto Label_1136; // 0x486 Jump
	
Label_1159:
	var_177_bool = 1; // 0x487 MovB
	return 8; // 0x488 Return
}


func_872(var_24_bool, var_25_string, var_26_string)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x368 PushV
	FindActor(var_28_object, var_25_string); // 0x369 Func
	var_29_bool = var_28_object == 0; // 0x36b NullEq
	if(var_29_bool == 0) goto Label_879; // 0x36c JumpB
	var_24_bool = 0; // 0x36d MovB
	return 2; // 0x36e Return
	
Label_879:
	Trigger(var_28_object, var_26_string); // 0x36f Func
	var_24_bool = 1; // 0x371 MovB
	return 2; // 0x372 Return
}


func_1006(var_187_bool, var_188_int)
{
	var_189_int = 18; // 0x3ef PushI
	add(var_189_int); // 0x3f0 ObjFunc
	var_190_int = 24; // 0x3f2 PushI
	add(var_190_int); // 0x3f3 ObjFunc
	var_191_int = 20; // 0x3f5 PushI
	add(var_191_int); // 0x3f6 ObjFunc
	var_192_int = 14; // 0x3f8 PushI
	add(var_192_int); // 0x3f9 ObjFunc
	var_193_bool = 0; // 0x3fb PushB
	var_194_bool = var_187_bool == var_193_bool; // 0x3fc Eq
	if(var_194_bool == 0) goto Label_1032; // 0x3fd JumpB
	var_195_int = 10; // 0x3fe PushI
	add(var_195_int); // 0x3ff ObjFunc
	var_196_int = 17; // 0x401 PushI
	add(var_196_int); // 0x402 ObjFunc
	var_197_int = 8; // 0x404 PushI
	add(var_197_int); // 0x405 ObjFunc
	goto Label_1038; // 0x407 Jump
	
Label_1038:
	return 0; // 0x40e Return
	
Label_1032:
	var_198_int = 1; // 0x408 PushI
	var_199_bool = var_188_int != var_198_int; // 0x409 Neq
	if(var_199_bool == 0) goto Label_1038; // 0x40a JumpB
	var_200_int = 10; // 0x40b PushI
	add(var_200_int); // 0x40c ObjFunc
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
	func_891(var_36_int); // 0x27a NEW_2
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
	func_884(var_58_string, var_59_int); // 0x296 NEW_2
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


func_884(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x374 PushV
	var_45_string = "idle"; // 0x375 MovS
	var_46_int = var_43_int; // 0x376 Push
	if(var_46_int == 0) goto Label_889; // 0x377 JumpB
	var_45_string = var_45_string + var_43_int; // 0x378 Add2
	
Label_889:
	var_42_string = var_45_string; // 0x379 Mov
	return 2; // 0x37a Return
}


func_891(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x37b PushV
	var_39_int = 0; // 0x37c MovI
	
Label_893:
	var_41_string = "all"; // 0x37d PushS
	var_42_string = ""; var_43_int = 0; // 0x37e PushV
	var_43_int = var_39_int; // 0x37f Mov
	func_884(var_42_string, var_43_int); // 0x380 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x382 Func
	var_47_bool = var_40_bool == 0; // 0x384 Not
	if(var_47_bool == 0) goto Label_903; // 0x385 JumpB
	goto Label_906; // 0x386 Jump
	
Label_906:
	var_36_int = var_39_int; // 0x38a Mov
	return 4; // 0x38b Return
	
Label_903:
	var_48_int = 1; // 0x387 PushI
	var_39_int = var_39_int + var_48_int; // 0x388 Add2
	goto Label_893; // 0x389 Jump
}


