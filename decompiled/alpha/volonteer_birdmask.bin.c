task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xb2 PushI
	if(var_7_int == 0) goto Label_348; // 0xb3 JumpB
	func_537(); // 0xb5 Call
	var_9_int = 15324; // 0xb7 PushI
	var_10_bool = var_6_int == var_9_int; // 0xb8 Eq
	if(var_10_bool == 0) goto Label_201; // 0xb9 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xba PushV
	var_11_object = var_1_object; // 0xbb MovT
	var_12_object = var_0_object; // 0xbc MovT
	func_621(); // 0xbd Call
	var_17_object = Obj(); var_18_object = Obj(); // 0xbf PushV
	var_17_object = var_1_object; // 0xc0 MovT
	var_18_object = var_0_object; // 0xc1 MovT
	func_627(); // 0xc2 Call
	var_29_object = Obj(); var_30_object = Obj(); // 0xc4 PushV
	var_29_object = var_1_object; // 0xc5 MovT
	var_30_object = var_0_object; // 0xc6 MovT
	func_597(); // 0xc7 Call
	
Label_201:
	var_33_int = 15327; // 0xc9 PushI
	var_34_bool = var_6_int == var_33_int; // 0xca Eq
	if(var_34_bool == 0) goto Label_219; // 0xcb JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0xcc PushV
	var_35_object = var_1_object; // 0xcd MovT
	var_36_object = var_0_object; // 0xce MovT
	func_615(); // 0xcf Call
	var_41_object = Obj(); var_42_object = Obj(); // 0xd1 PushV
	var_41_object = var_1_object; // 0xd2 MovT
	var_42_object = var_0_object; // 0xd3 MovT
	func_627(); // 0xd4 Call
	var_43_object = Obj(); var_44_object = Obj(); // 0xd6 PushV
	var_43_object = var_1_object; // 0xd7 MovT
	var_44_object = var_0_object; // 0xd8 MovT
	func_597(); // 0xd9 Call
	
Label_219:
	var_45_int = 15312; // 0xdb PushI
	var_46_bool = var_5_int == var_45_int; // 0xdc Eq
	if(var_46_bool == 0) goto Label_282; // 0xdd JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xde PushV
	var_48_object = var_1_object; // 0xdf MovT
	func_660(var_47_bool, var_48_object); // 0xe0 Call
	if(var_47_bool == 0) goto Label_247; // 0xe2 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xe3 PushV
	var_61_object = var_1_object; // 0xe4 MovT
	var_62_object = var_0_object; // 0xe5 MovT
	func_603(); // 0xe6 Call
	var_71_string = ""; // 0xe8 PushV
	var_71_string = "Neutral"; // 0xe9 MovS
	func_161(var_6_int, var_71_string); // 0xea Call
	var_86_int = 14075; // 0xec PushI
	SetMessage(var_86_int); // 0xed TObjFunc
	ClearReplies(); // 0xef TObjFunc
	var_87_int = 14076; // 0xf1 PushI
	var_88_int = 15314; // 0xf2 PushI
	var_89_int = 15313; // 0xf3 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_90_string = ""; // 0xf7 PushV
	var_90_string = "Neutral"; // 0xf8 MovS
	func_161(var_6_int, var_90_string); // 0xf9 Call
	var_91_int = 14079; // 0xfb PushI
	SetMessage(var_91_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_92_bool = 0; var_93_object = Obj(); // 0x100 PushV
	var_93_object = var_1_object; // 0x101 MovT
	func_638(var_92_bool, var_93_object); // 0x102 Call
	if(var_92_bool == 0) goto Label_266; // 0x104 JumpB
	var_101_int = 14080; // 0x105 PushI
	var_102_int = 15318; // 0x106 PushI
	var_103_int = 15317; // 0x107 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x108 TObjFunc
	
Label_266:
	var_104_bool = 0; var_105_object = Obj(); // 0x10a PushV
	var_105_object = var_1_object; // 0x10b MovT
	func_649(var_104_bool, var_105_object); // 0x10c Call
	if(var_104_bool == 0) goto Label_276; // 0x10e JumpB
	var_109_int = 14110; // 0x10f PushI
	var_110_int = 15326; // 0x110 PushI
	var_111_int = 15325; // 0x111 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x112 TObjFunc
	
Label_276:
	var_112_int = 14082; // 0x114 PushI
	var_113_int = -1; // 0x115 PushI
	var_114_int = 15319; // 0x116 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_115_int = 15326; // 0x11a PushI
	var_116_bool = var_5_int == var_115_int; // 0x11b Eq
	if(var_116_bool == 0) goto Label_300; // 0x11c JumpB
	var_117_string = ""; // 0x11d PushV
	var_117_string = "Neutral"; // 0x11e MovS
	func_161(var_6_int, var_117_string); // 0x11f Call
	var_118_int = 14111; // 0x121 PushI
	SetMessage(var_118_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_119_int = 14112; // 0x126 PushI
	var_120_int = -1; // 0x127 PushI
	var_121_int = 15327; // 0x128 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x129 TObjFunc
	return 0; // 0x12b Return
	
Label_300:
	var_122_int = 15318; // 0x12c PushI
	var_123_bool = var_5_int == var_122_int; // 0x12d Eq
	if(var_123_bool == 0) goto Label_318; // 0x12e JumpB
	var_124_string = ""; // 0x12f PushV
	var_124_string = "Neutral"; // 0x130 MovS
	func_161(var_6_int, var_124_string); // 0x131 Call
	var_125_int = 14081; // 0x133 PushI
	SetMessage(var_125_int); // 0x134 TObjFunc
	ClearReplies(); // 0x136 TObjFunc
	var_126_int = 14109; // 0x138 PushI
	var_127_int = -1; // 0x139 PushI
	var_128_int = 15324; // 0x13a PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x13b TObjFunc
	return 0; // 0x13d Return
	
Label_318:
	var_129_int = 15314; // 0x13e PushI
	var_130_bool = var_5_int == var_129_int; // 0x13f Eq
	if(var_130_bool == 0) goto Label_336; // 0x140 JumpB
	var_131_string = ""; // 0x141 PushV
	var_131_string = "Neutral"; // 0x142 MovS
	func_161(var_6_int, var_131_string); // 0x143 Call
	var_132_int = 14077; // 0x145 PushI
	SetMessage(var_132_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_133_int = 14078; // 0x14a PushI
	var_134_int = -1; // 0x14b PushI
	var_135_int = 15315; // 0x14c PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x14d TObjFunc
	return 0; // 0x14f Return
	
Label_336:
	var_3_string = 1; // 0x150 TMovB
	var_136_bool = 0; // 0x151 PushV
	func_1074(var_136_bool); // 0x152 Call
	if(var_136_bool == 0) goto Label_344; // 0x154 JumpB
	lshStopAnimation(); // 0x155 Func
	goto Label_346; // 0x157 Jump
	
Label_346:
	return 0; // 0x15a Return
	
Label_344:
	StopAnimation(); // 0x158 Func
	
Label_348:
	return 0; // 0x15c Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_string = ""; var_7_string = ""; // 0x165 PushV
	var_8_string = "npc"; // 0x166 PushS
	GetProperty(var_8_string, var_7_string); // 0x167 Func
	Trace(var_7_string); // 0x169 Func
	var_9_int = 0; var_10_string = ""; // 0x16b PushV
	var_10_string = var_7_string; // 0x16c Mov
	func_700(var_9_int, var_10_string); // 0x16d Call
	Trace(var_9_int); // 0x16f Func
	var_153_bool = 0; var_154_int = 0; // 0x171 PushV
	var_155_int = 0; var_156_string = ""; // 0x172 PushV
	var_156_string = var_7_string; // 0x173 Mov
	func_700(var_155_int, var_156_string); // 0x174 Call
	var_154_int = var_155_int; // 0x175 Mov
	func_1060(var_153_bool, var_154_int); // 0x177 Call
	if(var_153_bool == 0) goto Label_384; // 0x179 JumpB
	var_164_int = 0; var_165_object = Obj(); // 0x17a PushV
	var_165_object = var_5_object; // 0x17b Mov
	TaskCall(0); // 0x17c TaskCall
	func_0(var_166_object, var_164_int, var_165_object); // 0x17d Call
	TaskReturn(); // 0x17e TaskReturn
	
Label_384:
	return 2; // 0x180 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_349:
	var_5_int = 3; // 0x15d PushI
	Sleep(var_5_int); // 0x15e Func
	func_385(); // 0x161 Call
	goto Label_349; // 0x163 Jump
}


func_0(var_0_object, var_164_int, var_165_object)
{
	var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_object = Obj(); var_172_bool = 0; var_173_int = 0; var_174_bool = 0; // 0x0 PushV
	var_0_object = var_165_object; // 0x1 TMov
	var_175_bool = 0; var_176_object = Obj(); // 0x2 PushV
	var_176_object = var_165_object; // 0x3 Mov
	func_459(var_176_object); // 0x4 Call
	var_215_bool = var_175_bool == 0; // 0x6 Not
	if(var_215_bool == 0) goto Label_10; // 0x7 JumpB
	var_164_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_171_object); // 0xa Func
	var_216_int = 0; // 0xc PushV
	func_1070(var_216_int); // 0xd Call
	SetNPCName(var_216_int); // 0xf ObjFunc
	var_217_string = ""; // 0x11 PushV
	func_1072(var_217_string); // 0x12 Call
	SetPhoto(var_217_string); // 0x14 ObjFunc
	var_218_int = 0; // 0x16 PushV
	func_683(var_218_int); // 0x17 Call
	SetPlayerName(var_218_int); // 0x19 ObjFunc
	var_173_int = -1; // 0x1b MovI
	IsOverrideActive(var_172_bool); // 0x1c Func
	var_226_bool = var_172_bool; // 0x1e Push
	if(var_226_bool == 0) goto Label_34; // 0x1f JumpB
	var_164_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_171_object); // 0x22 Func
	var_227_object = Obj(); var_228_object = Obj(); // 0x24 PushV
	var_227_object = var_165_object; // 0x25 Mov
	var_228_object = var_171_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_174_bool); // 0x2b ObjFunc
	
Label_45:
	var_310_bool = var_174_bool == 0; // 0x2d Not
	if(var_310_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_174_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_311_object = Obj(); // 0x34 PushV
	var_311_object = var_165_object; // 0x35 Mov
	func_515(); // 0x36 Call
	StopDialog(var_171_object); // 0x38 Func
	GetReturnValue(var_173_int); // 0x3a ObjFunc
	var_164_int = var_173_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_385()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0; // 0x181 PushV
	WaitForAnimEnd(); // 0x182 Func
	var_20_bool = 0; // 0x184 PushV
	func_454(var_20_bool); // 0x185 Call
	var_23_bool = var_20_bool == 0; // 0x187 Not
	if(var_23_bool == 0) goto Label_394; // 0x188 JumpB
	return 14; // 0x189 Return
	
Label_394:
	var_24_int = 0; // 0x18a PushV
	func_580(var_24_int); // 0x18b Call
	var_13_int = var_24_int; // 0x18c Mov
	var_14_int = 0; // 0x18e MovI
	
Label_399:
	var_37_bool = 0; // 0x18f PushV
	var_37_bool = 0; // 0x190 MovB
	var_38_int = 5; // 0x191 PushI
	var_39_bool = var_14_int < var_38_int; // 0x192 LT
	if(var_39_bool == 0) goto Label_409; // 0x193 JumpB
	var_40_bool = 0; // 0x194 PushV
	func_454(var_40_bool); // 0x195 Call
	if(var_40_bool == 0) goto Label_409; // 0x197 JumpB
	var_37_bool = 1; // 0x198 MovB
	
Label_409:
	if(var_37_bool == 0) goto Label_453; // 0x199 JumpB
	var_41_int = 3; // 0x19a PushI
	irand(var_15_int, var_41_int); // 0x19b Func
	var_42_int = 0; // 0x19d PushI
	var_43_bool = var_15_int == var_42_int; // 0x19e Eq
	if(var_43_bool == 0) goto Label_433; // 0x19f JumpB
	var_44_int = var_13_int; // 0x1a0 Push
	if(var_44_int == 0) goto Label_432; // 0x1a1 JumpB
	irand(var_16_int, var_13_int); // 0x1a2 Func
	var_45_string = "all"; // 0x1a4 PushS
	var_46_string = ""; var_47_int = 0; // 0x1a5 PushV
	var_47_int = var_16_int; // 0x1a6 Mov
	func_573(var_46_string, var_47_int); // 0x1a7 Call
	PlayAnimation(var_45_string, var_46_string); // 0x1a9 Func
	WaitForAnimEnd(var_17_bool); // 0x1ab Func
	var_48_bool = var_17_bool == 0; // 0x1ad Not
	if(var_48_bool == 0) goto Label_432; // 0x1ae JumpB
	goto Label_453; // 0x1af Jump
	
Label_453:
	return 14; // 0x1c5 Return
	
Label_432:
	goto Label_450; // 0x1b0 Jump
	
Label_450:
	var_49_int = 1; // 0x1c2 PushI
	var_14_int = var_14_int + var_49_int; // 0x1c3 Add2
	goto Label_399; // 0x1c4 Jump
	
Label_433:
	var_50_int = 1; // 0x1b1 PushI
	var_51_bool = var_15_int == var_50_int; // 0x1b2 Eq
	if(var_51_bool == 0) goto Label_447; // 0x1b3 JumpB
	var_52_int = 4; // 0x1b4 PushI
	rand(var_18_float, var_52_int); // 0x1b5 Func
	var_53_int = 1; // 0x1b7 PushI
	var_54_int = var_18_float + var_53_int; // 0x1b8 Add
	Sleep(var_54_int, var_19_bool); // 0x1b9 Func
	var_55_bool = var_19_bool == 0; // 0x1bb Not
	if(var_55_bool == 0) goto Label_446; // 0x1bc JumpB
	goto Label_453; // 0x1bd Jump
	
Label_446:
	goto Label_450; // 0x1be Jump
	
Label_447:
	var_56_int = var_14_int; // 0x1bf Push
	if(var_56_int == 0) goto Label_450; // 0x1c0 JumpB
	goto Label_453; // 0x1c1 Jump
}


func_515()
{
	CameraSwitchToNormal(); // 0x204 Func
	return 0; // 0x206 Return
}


func_580(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x244 PushV
	var_27_int = 0; // 0x245 MovI
	
Label_582:
	var_29_string = "all"; // 0x246 PushS
	var_30_string = ""; var_31_int = 0; // 0x247 PushV
	var_31_int = var_27_int; // 0x248 Mov
	func_573(var_30_string, var_31_int); // 0x249 Call
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0x24b Func
	var_35_bool = var_28_bool == 0; // 0x24d Not
	if(var_35_bool == 0) goto Label_592; // 0x24e JumpB
	goto Label_595; // 0x24f Jump
	
Label_595:
	var_24_int = var_27_int; // 0x253 Mov
	return 4; // 0x254 Return
	
Label_592:
	var_36_int = 1; // 0x250 PushI
	var_27_int = var_27_int + var_36_int; // 0x251 Add2
	goto Label_582; // 0x252 Jump
}


func_454(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1c6 PushV
	IsLoaded(var_22_bool); // 0x1c7 Func
	var_20_bool = var_22_bool; // 0x1c9 Mov
	return 2; // 0x1ca Return
}


func_519(var_262_string)
{
	var_263_float = 0; var_264_float = 0; var_265_float = 0; var_266_float = 0; // 0x207 PushV
	var_267_string = "playing "; // 0x208 PushS
	var_268_int = var_267_string + var_262_string; // 0x209 Add
	Trace(var_268_int); // 0x20a Func
	lshGetAnimTimes(var_262_string, var_265_float, var_266_float); // 0x20c Func
	lshPlayAnimation(var_265_float, var_266_float); // 0x20e Func
	var_269_string = "start: "; // 0x210 PushS
	var_270_int = var_269_string + var_265_float; // 0x211 Add
	Trace(var_270_int); // 0x212 Func
	var_271_string = "end: "; // 0x214 PushS
	var_272_int = var_271_string + var_266_float; // 0x215 Add
	Trace(var_272_int); // 0x216 Func
	return 4; // 0x218 Return
}


func_649(var_299_bool, var_300_object)
{
	var_301_bool = 0; var_302_object = Obj(); var_303_string = ""; // 0x28a PushV
	var_302_object = var_300_object; // 0x28b Mov
	var_303_string = "powder"; // 0x28c MovS
	func_554(var_302_object, var_303_string); // 0x28d Call
	if(var_301_bool == 0) goto Label_658; // 0x28f JumpB
	var_299_bool = 1; // 0x290 MovB
	return 0; // 0x291 Return
	
Label_658:
	var_299_bool = 0; // 0x292 MovB
	return 0; // 0x293 Return
}


func_459(var_175_bool)
{
	var_177_float = 0; var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_bool = 0; // 0x1cb PushV
	GetPosition(var_186_cvector); // 0x1cc ObjFunc
	GetEyesHeight(var_185_float); // 0x1ce ObjFunc
	var_193_float = GetByIndex(var_186_cvector, 1); // 0x1d0 PushE
	var_193_float = var_193_float + var_185_float; // 0x1d1 Add2
	SetByIndex(var_186_cvector, 1) = var_193_float; // 0x1d2 PopE
	GetPosition(var_187_cvector); // 0x1d3 Func
	GetEyesHeight(var_185_float); // 0x1d5 Func
	var_194_float = GetByIndex(var_187_cvector, 1); // 0x1d7 PushE
	var_194_float = var_194_float + var_185_float; // 0x1d8 Add2
	SetByIndex(var_187_cvector, 1) = var_194_float; // 0x1d9 PopE
	var_188_cvector = var_186_cvector - var_187_cvector; // 0x1da Sub2
	var_195_float = GetByIndex(var_188_cvector, 1); // 0x1db PushE
	var_195_float = 0; // 0x1dc MovI
	SetByIndex(var_188_cvector, 1) = var_195_float; // 0x1dd PopE
	var_196_int = var_188_cvector | var_188_cvector; // 0x1de Or
	var_197_float = sqrt(var_196_int); // 0x1df Sqrt
	var_188_cvector = var_188_cvector / var_188_cvector; // 0x1e0 Div2
	var_189_cvector = -var_188_cvector; // 0x1e1 Neg2
	var_198_int = 70; // 0x1e2 PushI
	var_199_float = var_188_cvector * var_198_int; // 0x1e3 Mult
	var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); // 0x1e4 PushV
	var_202_cvector = CVector(0.0, 1.0, 0.0); // 0x1e5 PushVec
	var_201_cvector = var_189_cvector ^ var_202_cvector; // 0x1e6 Xor2
	func_544(var_200_cvector, var_201_cvector); // 0x1e7 Call
	var_208_int = 25; // 0x1e9 PushI
	var_209_float = var_200_cvector * var_208_int; // 0x1ea Mult
	var_210_int = var_199_float + var_209_float; // 0x1eb Add
	var_211_cvector = CVector(0.0, 10.0, 0.0); // 0x1ec PushVec
	var_190_cvector = var_210_int - var_211_cvector; // 0x1ed Sub2
	var_191_cvector = var_187_cvector + var_190_cvector; // 0x1ee Add2
	IsOverrideActive(var_192_bool); // 0x1ef Func
	var_212_bool = var_192_bool; // 0x1f1 Push
	if(var_212_bool == 0) goto Label_501; // 0x1f2 JumpB
	var_175_bool = 0; // 0x1f3 MovB
	return 16; // 0x1f4 Return
	
Label_501:
	StopWorld(); // 0x1f5 Func
	CameraTransit(var_191_cvector, var_189_cvector); // 0x1f7 Func
	var_213_float = GetByIndex(var_190_cvector, 0); // 0x1f9 PushE
	var_214_float = GetByIndex(var_190_cvector, 2); // 0x1fa PushE
	Rotate(var_213_float, var_214_float); // 0x1fb Func
	CameraWaitForPlayFinish(); // 0x1fd Func
	ResumeWorld(); // 0x1ff Func
	var_175_bool = 1; // 0x201 MovB
	return 16; // 0x202 Return
}


func_660(var_234_bool, var_235_object)
{
	var_236_bool = 0; var_237_object = Obj(); // 0x295 PushV
	var_237_object = var_235_object; // 0x296 Mov
	func_670(var_237_object); // 0x297 Call
	if(var_236_bool == 0) goto Label_668; // 0x299 JumpB
	var_234_bool = 1; // 0x29a MovB
	return 0; // 0x29b Return
	
Label_668:
	var_234_bool = 0; // 0x29c MovB
	return 0; // 0x29d Return
}


func_597()
{
	var_31_string = "playsound"; // 0x256 PushS
	var_32_string = "giveitem"; // 0x257 PushS
	TriggerWorld(var_31_string, var_32_string); // 0x258 Func
	return 0; // 0x25a Return
}


func_537()
{
	var_8_bool = 0; // 0x219 PushV
	func_1074(var_8_bool); // 0x21a Call
	if(var_8_bool == 0) goto Label_543; // 0x21c JumpB
	lshStopSpeech(); // 0x21d Func
	
Label_543:
	return 0; // 0x21f Return
}


func_603()
{
	var_250_string = ""; var_251_string = ""; // 0x25b PushV
	var_252_string = "npc"; // 0x25c PushS
	GetProperty(var_252_string, var_251_string); // 0x25d Func
	var_253_string = "oo"; // 0x25f PushS
	var_254_int = var_253_string + var_251_string; // 0x260 Add
	var_255_string = "1"; // 0x261 PushS
	var_256_int = var_254_int + var_255_string; // 0x262 Add
	var_257_int = 1; // 0x263 PushI
	SetVariable(var_256_int, var_257_int); // 0x264 Func
	return 2; // 0x266 Return
}


func_670(var_236_bool)
{
	var_238_string = ""; var_239_int = 0; var_240_string = ""; var_241_int = 0; // 0x29e PushV
	var_242_string = "npc"; // 0x29f PushS
	GetProperty(var_242_string, var_240_string); // 0x2a0 Func
	var_243_string = "oo"; // 0x2a2 PushS
	var_244_int = var_243_string + var_240_string; // 0x2a3 Add
	var_245_string = "1"; // 0x2a4 PushS
	var_246_int = var_244_int + var_245_string; // 0x2a5 Add
	GetVariable(var_246_int, var_241_int); // 0x2a6 Func
	var_247_int = 0; // 0x2a8 PushI
	var_236_bool = var_241_int == var_247_int; // 0x2a9 Eq2
	return 4; // 0x2aa Return
}


func_544(var_200_cvector, var_201_cvector)
{
	var_203_float = 0; var_204_float = 0; // 0x220 PushV
	var_205_int = var_201_cvector | var_201_cvector; // 0x221 Or
	var_204_float = sqrt(var_205_int); // 0x222 Sqrt2
	var_206_float = 0.0; // 0x223 PushF
	var_207_bool = var_204_float < var_206_float; // 0x224 LT
	if(var_207_bool == 0) goto Label_552; // 0x225 JumpB
	var_200_cvector = CVector(0.0, 0.0, 0.0); // 0x226 MovV
	return 2; // 0x227 Return
	
Label_552:
	var_200_cvector = var_201_cvector / var_201_cvector; // 0x228 Div2
	return 2; // 0x229 Return
}


func_161(var_2_object, var_258_string)
{
	var_259_bool = 0; // 0xa2 PushV
	func_1074(var_259_bool); // 0xa3 Call
	var_260_bool = var_259_bool == 0; // 0xa5 Not
	if(var_260_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_261_bool = var_258_string == var_2_object; // 0xa8 Eq
	if(var_261_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_262_string = ""; // 0xab PushV
	var_262_string = var_258_string; // 0xac Mov
	func_519(var_262_string); // 0xad Call
	var_2_object = var_258_string; // 0xaf TMov
	return 0; // 0xb0 Return
}


func_1060(var_153_bool, var_154_int)
{
	var_157_int = 0; var_158_int = 0; // 0x424 PushV
	var_159_string = "vol_"; // 0x425 PushS
	var_160_int = var_159_string + var_154_int; // 0x426 Add
	GetVariable(var_160_int, var_158_int); // 0x427 Func
	var_161_int = 4; // 0x429 PushI
	var_162_int = var_158_int & var_161_int; // 0x42a And
	var_163_int = 0; // 0x42b PushI
	var_153_bool = var_162_int != var_163_int; // 0x42c Neq2
	return 2; // 0x42d Return
}


func_615()
{
	var_37_int = 0; var_38_int = 0; // 0x267 PushV
	var_39_string = "powder"; // 0x268 PushS
	var_40_int = 1; // 0x269 PushI
	RemoveItemByType(var_38_int, var_39_string, var_40_int); // 0x26a ObjFunc
	return 2; // 0x26c Return
}


func_554(var_289_bool, var_291_string)
{
	var_292_int = 0; var_293_bool = 0; var_294_int = 0; var_295_bool = 0; // 0x22a PushV
	GetInvItemByName(var_294_int, var_291_string); // 0x22b Func
	HasItem(var_294_int, var_295_bool); // 0x22d ObjFunc
	var_289_bool = var_295_bool; // 0x22f Mov
	return 4; // 0x230 Return
}


func_683(var_218_int)
{
	var_219_int = 0; var_220_int = 0; // 0x2ab PushV
	var_221_string = "player"; // 0x2ac PushS
	GetVariable(var_221_string, var_220_int); // 0x2ad Func
	var_222_int = 0; // 0x2af PushI
	var_223_bool = var_220_int == var_222_int; // 0x2b0 Eq
	if(var_223_bool == 0) goto Label_693; // 0x2b1 JumpB
	var_218_int = 200001; // 0x2b2 MovI
	return 2; // 0x2b3 Return
	
Label_693:
	var_224_int = 1; // 0x2b5 PushI
	var_225_bool = var_220_int == var_224_int; // 0x2b6 Eq
	if(var_225_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_218_int = 200002; // 0x2b8 MovI
	return 2; // 0x2b9 Return
	
Label_698:
	var_218_int = 200003; // 0x2ba MovI
	return 2; // 0x2bb Return
}


func_621()
{
	var_13_int = 0; var_14_int = 0; // 0x26d PushV
	var_15_string = "burah_serum"; // 0x26e PushS
	var_16_int = 1; // 0x26f PushI
	RemoveItemByType(var_14_int, var_15_string, var_16_int); // 0x270 ObjFunc
	return 2; // 0x272 Return
}


func_1070(var_216_int)
{
	var_216_int = 4029; // 0x42e MovI
	return 0; // 0x42f Return
}


func_1072(var_217_string)
{
	var_217_string = "ui/NPC_Black.png"; // 0x430 MovS
	return 0; // 0x431 Return
}


func_561(var_22_bool, var_23_string, var_24_string, var_25_string)
{
	var_26_object = Obj(); var_27_object = Obj(); // 0x231 PushV
	FindActor(var_27_object, var_23_string); // 0x232 Func
	var_28_bool = var_27_object == 0; // 0x234 NullEq
	if(var_28_bool == 0) goto Label_568; // 0x235 JumpB
	var_22_bool = 0; // 0x236 MovB
	return 2; // 0x237 Return
	
Label_568:
	Trigger(var_27_object, var_24_string, var_25_string); // 0x238 Func
	var_22_bool = 1; // 0x23a MovB
	return 2; // 0x23b Return
}


func_1074(var_259_bool)
{
	var_259_bool = 0; // 0x432 MovB
	return 0; // 0x433 Return
}


func_627()
{
	var_19_string = ""; var_20_string = ""; // 0x273 PushV
	var_21_string = "npc"; // 0x274 PushS
	GetProperty(var_21_string, var_20_string); // 0x275 Func
	var_22_bool = 0; var_23_string = ""; var_24_string = ""; var_25_string = ""; // 0x277 PushV
	var_23_string = "volonteers_danko"; // 0x278 MovS
	var_24_string = "rescue"; // 0x279 MovS
	var_25_string = var_20_string; // 0x27a Mov
	func_561(var_22_bool, var_23_string, var_24_string, var_25_string); // 0x27b Call
	return 2; // 0x27d Return
}


func_700(var_9_int, var_10_string)
{
	_strlwr(var_10_string); // 0x2bd Func
	var_11_string = "alexandr"; // 0x2bf PushS
	var_12_bool = var_10_string == var_11_string; // 0x2c0 Eq
	if(var_12_bool == 0) goto Label_708; // 0x2c1 JumpB
	var_9_int = 1; // 0x2c2 MovI
	return 0; // 0x2c3 Return
	
Label_708:
	var_13_string = "andrei"; // 0x2c4 PushS
	var_14_bool = var_10_string == var_13_string; // 0x2c5 Eq
	if(var_14_bool == 0) goto Label_713; // 0x2c6 JumpB
	var_9_int = 2; // 0x2c7 MovI
	return 0; // 0x2c8 Return
	
Label_713:
	var_15_string = "anna"; // 0x2c9 PushS
	var_16_bool = var_10_string == var_15_string; // 0x2ca Eq
	if(var_16_bool == 0) goto Label_718; // 0x2cb JumpB
	var_9_int = 3; // 0x2cc MovI
	return 0; // 0x2cd Return
	
Label_718:
	var_17_string = "bigvlad"; // 0x2ce PushS
	var_18_bool = var_10_string == var_17_string; // 0x2cf Eq
	if(var_18_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_9_int = 4; // 0x2d1 MovI
	return 0; // 0x2d2 Return
	
Label_723:
	var_19_string = "eva"; // 0x2d3 PushS
	var_20_bool = var_10_string == var_19_string; // 0x2d4 Eq
	if(var_20_bool == 0) goto Label_728; // 0x2d5 JumpB
	var_9_int = 5; // 0x2d6 MovI
	return 0; // 0x2d7 Return
	
Label_728:
	var_21_string = "georg"; // 0x2d8 PushS
	var_22_bool = var_10_string == var_21_string; // 0x2d9 Eq
	if(var_22_bool == 0) goto Label_733; // 0x2da JumpB
	var_9_int = 6; // 0x2db MovI
	return 0; // 0x2dc Return
	
Label_733:
	var_23_string = "grif"; // 0x2dd PushS
	var_24_bool = var_10_string == var_23_string; // 0x2de Eq
	if(var_24_bool == 0) goto Label_738; // 0x2df JumpB
	var_9_int = 7; // 0x2e0 MovI
	return 0; // 0x2e1 Return
	
Label_738:
	var_25_string = "han"; // 0x2e2 PushS
	var_26_bool = var_10_string == var_25_string; // 0x2e3 Eq
	if(var_26_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_9_int = 8; // 0x2e5 MovI
	return 0; // 0x2e6 Return
	
Label_743:
	var_27_string = "julia"; // 0x2e7 PushS
	var_28_bool = var_10_string == var_27_string; // 0x2e8 Eq
	if(var_28_bool == 0) goto Label_748; // 0x2e9 JumpB
	var_9_int = 9; // 0x2ea MovI
	return 0; // 0x2eb Return
	
Label_748:
	var_29_string = "kapella"; // 0x2ec PushS
	var_30_bool = var_10_string == var_29_string; // 0x2ed Eq
	if(var_30_bool == 0) goto Label_753; // 0x2ee JumpB
	var_9_int = 10; // 0x2ef MovI
	return 0; // 0x2f0 Return
	
Label_753:
	var_31_string = "katerina"; // 0x2f1 PushS
	var_32_bool = var_10_string == var_31_string; // 0x2f2 Eq
	if(var_32_bool == 0) goto Label_758; // 0x2f3 JumpB
	var_9_int = 11; // 0x2f4 MovI
	return 0; // 0x2f5 Return
	
Label_758:
	var_33_string = "klara"; // 0x2f6 PushS
	var_34_bool = var_10_string == var_33_string; // 0x2f7 Eq
	if(var_34_bool == 0) goto Label_763; // 0x2f8 JumpB
	var_9_int = 12; // 0x2f9 MovI
	return 0; // 0x2fa Return
	
Label_763:
	var_35_string = "lara"; // 0x2fb PushS
	var_36_bool = var_10_string == var_35_string; // 0x2fc Eq
	if(var_36_bool == 0) goto Label_768; // 0x2fd JumpB
	var_9_int = 13; // 0x2fe MovI
	return 0; // 0x2ff Return
	
Label_768:
	var_37_string = "laska"; // 0x300 PushS
	var_38_bool = var_10_string == var_37_string; // 0x301 Eq
	if(var_38_bool == 0) goto Label_773; // 0x302 JumpB
	var_9_int = 14; // 0x303 MovI
	return 0; // 0x304 Return
	
Label_773:
	var_39_string = "maria"; // 0x305 PushS
	var_40_bool = var_10_string == var_39_string; // 0x306 Eq
	if(var_40_bool == 0) goto Label_778; // 0x307 JumpB
	var_9_int = 15; // 0x308 MovI
	return 0; // 0x309 Return
	
Label_778:
	var_41_string = "mark"; // 0x30a PushS
	var_42_bool = var_10_string == var_41_string; // 0x30b Eq
	if(var_42_bool == 0) goto Label_783; // 0x30c JumpB
	var_9_int = 16; // 0x30d MovI
	return 0; // 0x30e Return
	
Label_783:
	var_43_string = "mat"; // 0x30f PushS
	var_44_bool = var_10_string == var_43_string; // 0x310 Eq
	if(var_44_bool == 0) goto Label_788; // 0x311 JumpB
	var_9_int = 17; // 0x312 MovI
	return 0; // 0x313 Return
	
Label_788:
	var_45_string = "mishka"; // 0x314 PushS
	var_46_bool = var_10_string == var_45_string; // 0x315 Eq
	if(var_46_bool == 0) goto Label_793; // 0x316 JumpB
	var_9_int = 18; // 0x317 MovI
	return 0; // 0x318 Return
	
Label_793:
	var_47_string = "mladvlad"; // 0x319 PushS
	var_48_bool = var_10_string == var_47_string; // 0x31a Eq
	if(var_48_bool == 0) goto Label_798; // 0x31b JumpB
	var_9_int = 19; // 0x31c MovI
	return 0; // 0x31d Return
	
Label_798:
	var_49_string = "notkin"; // 0x31e PushS
	var_50_bool = var_10_string == var_49_string; // 0x31f Eq
	if(var_50_bool == 0) goto Label_803; // 0x320 JumpB
	var_9_int = 20; // 0x321 MovI
	return 0; // 0x322 Return
	
Label_803:
	var_51_string = "ospina"; // 0x323 PushS
	var_52_bool = var_10_string == var_51_string; // 0x324 Eq
	if(var_52_bool == 0) goto Label_808; // 0x325 JumpB
	var_9_int = 21; // 0x326 MovI
	return 0; // 0x327 Return
	
Label_808:
	var_53_string = "petr"; // 0x328 PushS
	var_54_bool = var_10_string == var_53_string; // 0x329 Eq
	if(var_54_bool == 0) goto Label_813; // 0x32a JumpB
	var_9_int = 22; // 0x32b MovI
	return 0; // 0x32c Return
	
Label_813:
	var_55_string = "rubin"; // 0x32d PushS
	var_56_bool = var_10_string == var_55_string; // 0x32e Eq
	if(var_56_bool == 0) goto Label_818; // 0x32f JumpB
	var_9_int = 23; // 0x330 MovI
	return 0; // 0x331 Return
	
Label_818:
	var_57_string = "spi4ka"; // 0x332 PushS
	var_58_bool = var_10_string == var_57_string; // 0x333 Eq
	if(var_58_bool == 0) goto Label_823; // 0x334 JumpB
	var_9_int = 24; // 0x335 MovI
	return 0; // 0x336 Return
	
Label_823:
	var_59_string = "starshina"; // 0x337 PushS
	var_60_bool = var_10_string == var_59_string; // 0x338 Eq
	if(var_60_bool == 0) goto Label_828; // 0x339 JumpB
	var_9_int = 25; // 0x33a MovI
	return 0; // 0x33b Return
	
Label_828:
	var_61_string = "viktor"; // 0x33c PushS
	var_62_bool = var_10_string == var_61_string; // 0x33d Eq
	if(var_62_bool == 0) goto Label_833; // 0x33e JumpB
	var_9_int = 26; // 0x33f MovI
	return 0; // 0x340 Return
	
Label_833:
	var_63_string = "wasted_woman"; // 0x341 PushS
	var_64_bool = var_10_string == var_63_string; // 0x342 Eq
	if(var_64_bool == 0) goto Label_838; // 0x343 JumpB
	var_9_int = 27; // 0x344 MovI
	return 0; // 0x345 Return
	
Label_838:
	var_65_string = "wasted_male"; // 0x346 PushS
	var_66_bool = var_10_string == var_65_string; // 0x347 Eq
	if(var_66_bool == 0) goto Label_843; // 0x348 JumpB
	var_9_int = 28; // 0x349 MovI
	return 0; // 0x34a Return
	
Label_843:
	var_67_string = "alkash"; // 0x34b PushS
	var_68_bool = var_10_string == var_67_string; // 0x34c Eq
	if(var_68_bool == 0) goto Label_848; // 0x34d JumpB
	var_9_int = 29; // 0x34e MovI
	return 0; // 0x34f Return
	
Label_848:
	var_69_string = "boy"; // 0x350 PushS
	var_70_bool = var_10_string == var_69_string; // 0x351 Eq
	if(var_70_bool == 0) goto Label_853; // 0x352 JumpB
	var_9_int = 30; // 0x353 MovI
	return 0; // 0x354 Return
	
Label_853:
	var_71_string = "girl"; // 0x355 PushS
	var_72_bool = var_10_string == var_71_string; // 0x356 Eq
	if(var_72_bool == 0) goto Label_858; // 0x357 JumpB
	var_9_int = 31; // 0x358 MovI
	return 0; // 0x359 Return
	
Label_858:
	var_73_string = "littleboy"; // 0x35a PushS
	var_74_bool = var_10_string == var_73_string; // 0x35b Eq
	if(var_74_bool == 0) goto Label_863; // 0x35c JumpB
	var_9_int = 32; // 0x35d MovI
	return 0; // 0x35e Return
	
Label_863:
	var_75_string = "littlegirl"; // 0x35f PushS
	var_76_bool = var_10_string == var_75_string; // 0x360 Eq
	if(var_76_bool == 0) goto Label_868; // 0x361 JumpB
	var_9_int = 33; // 0x362 MovI
	return 0; // 0x363 Return
	
Label_868:
	var_77_string = "butcher"; // 0x364 PushS
	var_78_bool = var_10_string == var_77_string; // 0x365 Eq
	if(var_78_bool == 0) goto Label_873; // 0x366 JumpB
	var_9_int = 34; // 0x367 MovI
	return 0; // 0x368 Return
	
Label_873:
	var_79_string = "dohodyaga"; // 0x369 PushS
	var_80_bool = var_10_string == var_79_string; // 0x36a Eq
	if(var_80_bool == 0) goto Label_878; // 0x36b JumpB
	var_9_int = 35; // 0x36c MovI
	return 0; // 0x36d Return
	
Label_878:
	var_81_string = "unosha"; // 0x36e PushS
	var_82_bool = var_10_string == var_81_string; // 0x36f Eq
	if(var_82_bool == 0) goto Label_883; // 0x370 JumpB
	var_9_int = 36; // 0x371 MovI
	return 0; // 0x372 Return
	
Label_883:
	var_83_string = "vaxxabit"; // 0x373 PushS
	var_84_bool = var_10_string == var_83_string; // 0x374 Eq
	if(var_84_bool == 0) goto Label_888; // 0x375 JumpB
	var_9_int = 37; // 0x376 MovI
	return 0; // 0x377 Return
	
Label_888:
	var_85_string = "vaxxabitka"; // 0x378 PushS
	var_86_bool = var_10_string == var_85_string; // 0x379 Eq
	if(var_86_bool == 0) goto Label_893; // 0x37a JumpB
	var_9_int = 38; // 0x37b MovI
	return 0; // 0x37c Return
	
Label_893:
	var_87_string = "woman"; // 0x37d PushS
	var_88_bool = var_10_string == var_87_string; // 0x37e Eq
	if(var_88_bool == 0) goto Label_898; // 0x37f JumpB
	var_9_int = 39; // 0x380 MovI
	return 0; // 0x381 Return
	
Label_898:
	var_89_string = "worker"; // 0x382 PushS
	var_90_bool = var_10_string == var_89_string; // 0x383 Eq
	if(var_90_bool == 0) goto Label_903; // 0x384 JumpB
	var_9_int = 40; // 0x385 MovI
	return 0; // 0x386 Return
	
Label_903:
	var_91_string = "whitemask"; // 0x387 PushS
	var_92_bool = var_10_string == var_91_string; // 0x388 Eq
	if(var_92_bool == 0) goto Label_908; // 0x389 JumpB
	var_9_int = 42; // 0x38a MovI
	return 0; // 0x38b Return
	
Label_908:
	var_93_string = "birdmask"; // 0x38c PushS
	var_94_bool = var_10_string == var_93_string; // 0x38d Eq
	if(var_94_bool == 0) goto Label_913; // 0x38e JumpB
	var_9_int = 43; // 0x38f MovI
	return 0; // 0x390 Return
	
Label_913:
	var_95_string = "birdmask"; // 0x391 PushS
	var_96_bool = var_10_string == var_95_string; // 0x392 Eq
	if(var_96_bool == 0) goto Label_918; // 0x393 JumpB
	var_9_int = 44; // 0x394 MovI
	return 0; // 0x395 Return
	
Label_918:
	var_97_string = "patrol"; // 0x396 PushS
	var_98_bool = var_10_string == var_97_string; // 0x397 Eq
	if(var_98_bool == 0) goto Label_923; // 0x398 JumpB
	var_9_int = 46; // 0x399 MovI
	return 0; // 0x39a Return
	
Label_923:
	var_99_string = "danko"; // 0x39b PushS
	var_100_bool = var_10_string == var_99_string; // 0x39c Eq
	if(var_100_bool == 0) goto Label_928; // 0x39d JumpB
	var_9_int = 47; // 0x39e MovI
	return 0; // 0x39f Return
	
Label_928:
	var_101_string = "alkash_d"; // 0x3a0 PushS
	var_102_bool = var_10_string == var_101_string; // 0x3a1 Eq
	if(var_102_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_9_int = 48; // 0x3a3 MovI
	return 0; // 0x3a4 Return
	
Label_933:
	var_103_string = "boy_d"; // 0x3a5 PushS
	var_104_bool = var_10_string == var_103_string; // 0x3a6 Eq
	if(var_104_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_9_int = 49; // 0x3a8 MovI
	return 0; // 0x3a9 Return
	
Label_938:
	var_105_string = "butcher_d"; // 0x3aa PushS
	var_106_bool = var_10_string == var_105_string; // 0x3ab Eq
	if(var_106_bool == 0) goto Label_943; // 0x3ac JumpB
	var_9_int = 50; // 0x3ad MovI
	return 0; // 0x3ae Return
	
Label_943:
	var_107_string = "dohodyaga_d"; // 0x3af PushS
	var_108_bool = var_10_string == var_107_string; // 0x3b0 Eq
	if(var_108_bool == 0) goto Label_948; // 0x3b1 JumpB
	var_9_int = 51; // 0x3b2 MovI
	return 0; // 0x3b3 Return
	
Label_948:
	var_109_string = "girl_d"; // 0x3b4 PushS
	var_110_bool = var_10_string == var_109_string; // 0x3b5 Eq
	if(var_110_bool == 0) goto Label_953; // 0x3b6 JumpB
	var_9_int = 52; // 0x3b7 MovI
	return 0; // 0x3b8 Return
	
Label_953:
	var_111_string = "littleboy_d"; // 0x3b9 PushS
	var_112_bool = var_10_string == var_111_string; // 0x3ba Eq
	if(var_112_bool == 0) goto Label_958; // 0x3bb JumpB
	var_9_int = 53; // 0x3bc MovI
	return 0; // 0x3bd Return
	
Label_958:
	var_113_string = "littlegirl_d"; // 0x3be PushS
	var_114_bool = var_10_string == var_113_string; // 0x3bf Eq
	if(var_114_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_9_int = 54; // 0x3c1 MovI
	return 0; // 0x3c2 Return
	
Label_963:
	var_115_string = "unosha2"; // 0x3c3 PushS
	var_116_bool = var_10_string == var_115_string; // 0x3c4 Eq
	if(var_116_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_9_int = 55; // 0x3c6 MovI
	return 0; // 0x3c7 Return
	
Label_968:
	var_117_string = "unosha_d"; // 0x3c8 PushS
	var_118_bool = var_10_string == var_117_string; // 0x3c9 Eq
	if(var_118_bool == 0) goto Label_973; // 0x3ca JumpB
	var_9_int = 56; // 0x3cb MovI
	return 0; // 0x3cc Return
	
Label_973:
	var_119_string = "unosha2_d"; // 0x3cd PushS
	var_120_bool = var_10_string == var_119_string; // 0x3ce Eq
	if(var_120_bool == 0) goto Label_978; // 0x3cf JumpB
	var_9_int = 57; // 0x3d0 MovI
	return 0; // 0x3d1 Return
	
Label_978:
	var_121_string = "vaxxabit_d"; // 0x3d2 PushS
	var_122_bool = var_10_string == var_121_string; // 0x3d3 Eq
	if(var_122_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_9_int = 58; // 0x3d5 MovI
	return 0; // 0x3d6 Return
	
Label_983:
	var_123_string = "vaxxabitka_d"; // 0x3d7 PushS
	var_124_bool = var_10_string == var_123_string; // 0x3d8 Eq
	if(var_124_bool == 0) goto Label_988; // 0x3d9 JumpB
	var_9_int = 59; // 0x3da MovI
	return 0; // 0x3db Return
	
Label_988:
	var_125_string = "wasted_male_d"; // 0x3dc PushS
	var_126_bool = var_10_string == var_125_string; // 0x3dd Eq
	if(var_126_bool == 0) goto Label_993; // 0x3de JumpB
	var_9_int = 60; // 0x3df MovI
	return 0; // 0x3e0 Return
	
Label_993:
	var_127_string = "wasted_woman_d"; // 0x3e1 PushS
	var_128_bool = var_10_string == var_127_string; // 0x3e2 Eq
	if(var_128_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_9_int = 61; // 0x3e4 MovI
	return 0; // 0x3e5 Return
	
Label_998:
	var_129_string = "woman_d"; // 0x3e6 PushS
	var_130_bool = var_10_string == var_129_string; // 0x3e7 Eq
	if(var_130_bool == 0) goto Label_1003; // 0x3e8 JumpB
	var_9_int = 62; // 0x3e9 MovI
	return 0; // 0x3ea Return
	
Label_1003:
	var_131_string = "worker2"; // 0x3eb PushS
	var_132_bool = var_10_string == var_131_string; // 0x3ec Eq
	if(var_132_bool == 0) goto Label_1008; // 0x3ed JumpB
	var_9_int = 63; // 0x3ee MovI
	return 0; // 0x3ef Return
	
Label_1008:
	var_133_string = "worker_d"; // 0x3f0 PushS
	var_134_bool = var_10_string == var_133_string; // 0x3f1 Eq
	if(var_134_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_9_int = 64; // 0x3f3 MovI
	return 0; // 0x3f4 Return
	
Label_1013:
	var_135_string = "worker2_d"; // 0x3f5 PushS
	var_136_bool = var_10_string == var_135_string; // 0x3f6 Eq
	if(var_136_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_9_int = 65; // 0x3f8 MovI
	return 0; // 0x3f9 Return
	
Label_1018:
	var_137_string = "burah"; // 0x3fa PushS
	var_138_bool = var_10_string == var_137_string; // 0x3fb Eq
	if(var_138_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_9_int = 66; // 0x3fd MovI
	return 0; // 0x3fe Return
	
Label_1023:
	var_139_string = "gorbun_daughter"; // 0x3ff PushS
	var_140_bool = var_10_string == var_139_string; // 0x400 Eq
	if(var_140_bool == 0) goto Label_1028; // 0x401 JumpB
	var_9_int = 67; // 0x402 MovI
	return 0; // 0x403 Return
	
Label_1028:
	var_141_string = "gorbun"; // 0x404 PushS
	var_142_bool = var_10_string == var_141_string; // 0x405 Eq
	if(var_142_bool == 0) goto Label_1033; // 0x406 JumpB
	var_9_int = 68; // 0x407 MovI
	return 0; // 0x408 Return
	
Label_1033:
	var_143_string = "albinos"; // 0x409 PushS
	var_144_bool = var_10_string == var_143_string; // 0x40a Eq
	if(var_144_bool == 0) goto Label_1038; // 0x40b JumpB
	var_9_int = 69; // 0x40c MovI
	return 0; // 0x40d Return
	
Label_1038:
	var_145_string = "aglaja"; // 0x40e PushS
	var_146_bool = var_10_string == var_145_string; // 0x40f Eq
	if(var_146_bool == 0) goto Label_1043; // 0x410 JumpB
	var_9_int = 70; // 0x411 MovI
	return 0; // 0x412 Return
	
Label_1043:
	var_147_string = "nude"; // 0x413 PushS
	var_148_bool = var_10_string == var_147_string; // 0x414 Eq
	if(var_148_bool == 0) goto Label_1048; // 0x415 JumpB
	var_9_int = 71; // 0x416 MovI
	return 0; // 0x417 Return
	
Label_1048:
	var_149_string = "block"; // 0x418 PushS
	var_150_bool = var_10_string == var_149_string; // 0x419 Eq
	if(var_150_bool == 0) goto Label_1053; // 0x41a JumpB
	var_9_int = 72; // 0x41b MovI
	return 0; // 0x41c Return
	
Label_1053:
	var_151_string = "officer"; // 0x41d PushS
	var_152_bool = var_10_string == var_151_string; // 0x41e Eq
	if(var_152_bool == 0) goto Label_1058; // 0x41f JumpB
	var_9_int = 73; // 0x420 MovI
	return 0; // 0x421 Return
	
Label_1058:
	var_9_int = -1; // 0x422 MovI
	return 0; // 0x423 Return
}


func_573(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = ""; // 0x23d PushV
	var_33_string = "idle"; // 0x23e MovS
	var_34_int = var_31_int; // 0x23f Push
	if(var_34_int == 0) goto Label_578; // 0x240 JumpB
	var_33_string = var_33_string + var_31_int; // 0x241 Add2
	
Label_578:
	var_30_string = var_33_string; // 0x242 Mov
	return 2; // 0x243 Return
}


func_638(var_287_bool, var_288_object)
{
	var_289_bool = 0; var_290_object = Obj(); var_291_string = ""; // 0x27f PushV
	var_290_object = var_288_object; // 0x280 Mov
	var_291_string = "burah_serum"; // 0x281 MovS
	func_554(var_290_object, var_291_string); // 0x282 Call
	if(var_289_bool == 0) goto Label_647; // 0x284 JumpB
	var_287_bool = 1; // 0x285 MovB
	return 0; // 0x286 Return
	
Label_647:
	var_287_bool = 0; // 0x287 MovB
	return 0; // 0x288 Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_227_object, var_228_object)
{
	var_0_object = var_228_object; // 0x40 TMov
	var_1_object = var_227_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_233_int = 1; // 0x43 PushI
	if(var_233_int == 0) goto Label_131; // 0x44 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x45 PushV
	var_235_object = var_1_object; // 0x46 MovT
	func_660(var_234_bool, var_235_object); // 0x47 Call
	if(var_234_bool == 0) goto Label_94; // 0x49 JumpB
	var_248_object = Obj(); var_249_object = Obj(); // 0x4a PushV
	var_248_object = var_1_object; // 0x4b MovT
	var_249_object = var_0_object; // 0x4c MovT
	func_603(); // 0x4d Call
	var_258_string = ""; // 0x4f PushV
	var_258_string = "Neutral"; // 0x50 MovS
	func_161(var_228_object, var_258_string); // 0x51 Call
	var_273_int = 14075; // 0x53 PushI
	SetMessage(var_273_int); // 0x54 TObjFunc
	ClearReplies(); // 0x56 TObjFunc
	var_274_int = 14076; // 0x58 PushI
	var_275_int = 15314; // 0x59 PushI
	var_276_int = 15313; // 0x5a PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x5b TObjFunc
	goto Label_131; // 0x5d Jump
	
Label_131:
	var_277_bool = 0; // 0x83 PushV
	func_1074(var_277_bool); // 0x84 Call
	if(var_277_bool == 0) goto Label_146; // 0x86 JumpB
	
Label_135:
	lshWaitForAnimEnd(); // 0x87 Func
	var_278_string = var_3_string; // 0x89 PushT
	if(var_278_string == 0) goto Label_140; // 0x8a JumpB
	goto Label_145; // 0x8b Jump
	
Label_145:
	goto Label_160; // 0x91 Jump
	
Label_160:
	return 0; // 0xa0 Return
	
Label_140:
	var_279_string = ""; // 0x8c PushV
	var_279_string = var_2_object; // 0x8d MovT
	func_519(var_279_string); // 0x8e Call
	goto Label_135; // 0x90 Jump
	
Label_146:
	var_280_string = "all"; // 0x92 PushS
	var_281_string = "idle"; // 0x93 PushS
	PlayAnimation(var_280_string, var_281_string); // 0x94 Func
	
Label_150:
	WaitForAnimEnd(); // 0x96 Func
	var_282_string = var_3_string; // 0x98 PushT
	if(var_282_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_155:
	var_283_string = "all"; // 0x9b PushS
	var_284_string = "idle"; // 0x9c PushS
	PlayAnimation(var_283_string, var_284_string); // 0x9d Func
	goto Label_150; // 0x9f Jump
	
Label_94:
	var_285_string = ""; // 0x5e PushV
	var_285_string = "Neutral"; // 0x5f MovS
	func_161(var_228_object, var_285_string); // 0x60 Call
	var_286_int = 14079; // 0x62 PushI
	SetMessage(var_286_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_287_bool = 0; var_288_object = Obj(); // 0x67 PushV
	var_288_object = var_1_object; // 0x68 MovT
	func_638(var_287_bool, var_288_object); // 0x69 Call
	if(var_287_bool == 0) goto Label_113; // 0x6b JumpB
	var_296_int = 14080; // 0x6c PushI
	var_297_int = 15318; // 0x6d PushI
	var_298_int = 15317; // 0x6e PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x6f TObjFunc
	
Label_113:
	var_299_bool = 0; var_300_object = Obj(); // 0x71 PushV
	var_300_object = var_1_object; // 0x72 MovT
	func_649(var_299_bool, var_300_object); // 0x73 Call
	if(var_299_bool == 0) goto Label_123; // 0x75 JumpB
	var_304_int = 14110; // 0x76 PushI
	var_305_int = 15326; // 0x77 PushI
	var_306_int = 15325; // 0x78 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x79 TObjFunc
	
Label_123:
	var_307_int = 14082; // 0x7b PushI
	var_308_int = -1; // 0x7c PushI
	var_309_int = 15319; // 0x7d PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x7e TObjFunc
	goto Label_131; // 0x80 Jump
}


