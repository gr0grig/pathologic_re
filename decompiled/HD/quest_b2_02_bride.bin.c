task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xc7 PushI
	if(var_12_int == 0) goto Label_481; // 0xc8 JumpB
	func_809(); // 0xca NEW_2
	var_14_int = 19375; // 0xcc PushI
	var_15_bool = var_11_object == var_14_int; // 0xcd Eq
	if(var_15_bool == 0) goto Label_212; // 0xce JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xcf PushV
	var_16_object = var_1_object; // 0xd0 MovT
	var_17_object = var_0_object; // 0xd1 MovT
	func_921(); // 0xd2 NEW_2
	
Label_212:
	var_20_int = 29121; // 0xd4 PushI
	var_21_bool = var_11_object == var_20_int; // 0xd5 Eq
	if(var_21_bool == 0) goto Label_235; // 0xd6 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd7 PushV
	var_22_object = var_1_object; // 0xd8 MovT
	var_23_object = var_0_object; // 0xd9 MovT
	func_962(var_23_object); // 0xda NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0xdc PushV
	var_46_object = var_1_object; // 0xdd MovT
	var_47_object = var_0_object; // 0xde MovT
	func_951(var_47_object); // 0xdf NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0xe1 PushV
	var_52_object = var_1_object; // 0xe2 MovT
	var_53_object = var_0_object; // 0xe3 MovT
	func_973(); // 0xe4 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xe6 PushV
	var_56_object = var_1_object; // 0xe7 MovT
	var_57_object = var_0_object; // 0xe8 MovT
	func_927(); // 0xe9 NEW_2
	
Label_235:
	var_87_int = 29122; // 0xeb PushI
	var_88_bool = var_11_object == var_87_int; // 0xec Eq
	if(var_88_bool == 0) goto Label_243; // 0xed JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xee PushV
	var_89_object = var_1_object; // 0xef MovT
	var_90_object = var_0_object; // 0xf0 MovT
	func_937(); // 0xf1 NEW_2
	
Label_243:
	var_104_int = 19374; // 0xf3 PushI
	var_105_bool = var_10_bool == var_104_int; // 0xf4 Eq
	if(var_105_bool == 0) goto Label_310; // 0xf5 JumpB
	var_106_string = ""; // 0xf6 PushV
	var_106_string = "Neutral"; // 0xf7 MovS
	func_176(var_11_object, var_106_string); // 0xf8 NEW_2
	var_123_int = 518265; // 0xfa PushI
	SetMessage(var_123_int); // 0xfb TObjFunc
	ClearReplies(); // 0xfd TObjFunc
	var_124_bool = 0; // 0xff PushV
	var_124_bool = 0; // 0x100 MovB
	var_125_bool = 0; // 0x101 PushV
	var_125_bool = 0; // 0x102 MovB
	var_126_bool = 0; // 0x103 PushV
	var_126_bool = 0; // 0x104 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x105 PushV
	var_128_object = var_1_object; // 0x106 MovT
	func_1027(var_128_object); // 0x107 NEW_2
	if(var_127_bool == 0) goto Label_273; // 0x109 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x10a PushV
	var_136_object = var_1_object; // 0x10b MovT
	func_1003(var_136_object); // 0x10c NEW_2
	var_141_bool = var_135_bool == 0; // 0x10e Not
	if(var_141_bool == 0) goto Label_273; // 0x10f JumpB
	var_126_bool = 1; // 0x110 MovB
	
Label_273:
	if(var_126_bool == 0) goto Label_281; // 0x111 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x112 PushV
	var_143_object = var_1_object; // 0x113 MovT
	func_991(var_143_object); // 0x114 NEW_2
	var_148_bool = var_142_bool == 0; // 0x116 Not
	if(var_148_bool == 0) goto Label_281; // 0x117 JumpB
	var_125_bool = 1; // 0x118 MovB
	
Label_281:
	if(var_125_bool == 0) goto Label_288; // 0x119 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x11a PushV
	var_150_object = var_1_object; // 0x11b MovT
	func_1015(var_150_object); // 0x11c NEW_2
	if(var_149_bool == 0) goto Label_288; // 0x11e JumpB
	var_124_bool = 1; // 0x11f MovB
	
Label_288:
	if(var_124_bool == 0) goto Label_294; // 0x120 JumpB
	var_155_int = 518266; // 0x121 PushI
	var_156_int = 20687; // 0x122 PushI
	var_157_int = 19375; // 0x123 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x124 TObjFunc
	
Label_294:
	var_158_bool = 0; var_159_object = Obj(); // 0x126 PushV
	var_159_object = var_1_object; // 0x127 MovT
	func_979(var_159_object); // 0x128 NEW_2
	if(var_158_bool == 0) goto Label_304; // 0x12a JumpB
	var_164_int = 527751; // 0x12b PushI
	var_165_int = 29118; // 0x12c PushI
	var_166_int = 29108; // 0x12d PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x12e TObjFunc
	
Label_304:
	var_167_int = 518267; // 0x130 PushI
	var_168_int = -1; // 0x131 PushI
	var_169_int = 19376; // 0x132 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_170_int = 29118; // 0x136 PushI
	var_171_bool = var_10_bool == var_170_int; // 0x137 Eq
	if(var_171_bool == 0) goto Label_328; // 0x138 JumpB
	var_172_string = ""; // 0x139 PushV
	var_172_string = "Neutral"; // 0x13a MovS
	func_176(var_11_object, var_172_string); // 0x13b NEW_2
	var_173_int = 527761; // 0x13d PushI
	SetMessage(var_173_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_174_int = 527762; // 0x142 PushI
	var_175_int = 29120; // 0x143 PushI
	var_176_int = 29119; // 0x144 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_177_int = 29120; // 0x148 PushI
	var_178_bool = var_10_bool == var_177_int; // 0x149 Eq
	if(var_178_bool == 0) goto Label_351; // 0x14a JumpB
	var_179_string = ""; // 0x14b PushV
	var_179_string = "Neutral"; // 0x14c MovS
	func_176(var_11_object, var_179_string); // 0x14d NEW_2
	var_180_int = 527763; // 0x14f PushI
	SetMessage(var_180_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_181_int = 527764; // 0x154 PushI
	var_182_int = -1; // 0x155 PushI
	var_183_int = 29121; // 0x156 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x157 TObjFunc
	var_184_int = 527861; // 0x159 PushI
	var_185_int = 29203; // 0x15a PushI
	var_186_int = 29205; // 0x15b PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_187_int = 29203; // 0x15f PushI
	var_188_bool = var_10_bool == var_187_int; // 0x160 Eq
	if(var_188_bool == 0) goto Label_369; // 0x161 JumpB
	var_189_string = ""; // 0x162 PushV
	var_189_string = "Neutral"; // 0x163 MovS
	func_176(var_11_object, var_189_string); // 0x164 NEW_2
	var_190_int = 527859; // 0x166 PushI
	SetMessage(var_190_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_191_int = 527765; // 0x16b PushI
	var_192_int = -1; // 0x16c PushI
	var_193_int = 29122; // 0x16d PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_194_int = 20687; // 0x171 PushI
	var_195_bool = var_10_bool == var_194_int; // 0x172 Eq
	if(var_195_bool == 0) goto Label_387; // 0x173 JumpB
	var_196_string = ""; // 0x174 PushV
	var_196_string = "Neutral"; // 0x175 MovS
	func_176(var_11_object, var_196_string); // 0x176 NEW_2
	var_197_int = 519514; // 0x178 PushI
	SetMessage(var_197_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_198_int = 519515; // 0x17d PushI
	var_199_int = 20689; // 0x17e PushI
	var_200_int = 20688; // 0x17f PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_201_int = 20689; // 0x183 PushI
	var_202_bool = var_10_bool == var_201_int; // 0x184 Eq
	if(var_202_bool == 0) goto Label_405; // 0x185 JumpB
	var_203_string = ""; // 0x186 PushV
	var_203_string = "Neutral"; // 0x187 MovS
	func_176(var_11_object, var_203_string); // 0x188 NEW_2
	var_204_int = 519516; // 0x18a PushI
	SetMessage(var_204_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_205_int = 519517; // 0x18f PushI
	var_206_int = 20691; // 0x190 PushI
	var_207_int = 20690; // 0x191 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_208_int = 20691; // 0x195 PushI
	var_209_bool = var_10_bool == var_208_int; // 0x196 Eq
	if(var_209_bool == 0) goto Label_428; // 0x197 JumpB
	var_210_string = ""; // 0x198 PushV
	var_210_string = "Neutral"; // 0x199 MovS
	func_176(var_11_object, var_210_string); // 0x19a NEW_2
	var_211_int = 519518; // 0x19c PushI
	SetMessage(var_211_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_212_int = 519519; // 0x1a1 PushI
	var_213_int = 20693; // 0x1a2 PushI
	var_214_int = 20692; // 0x1a3 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1a4 TObjFunc
	var_215_int = 527857; // 0x1a6 PushI
	var_216_int = 20693; // 0x1a7 PushI
	var_217_int = 29200; // 0x1a8 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_218_int = 20693; // 0x1ac PushI
	var_219_bool = var_10_bool == var_218_int; // 0x1ad Eq
	if(var_219_bool == 0) goto Label_446; // 0x1ae JumpB
	var_220_string = ""; // 0x1af PushV
	var_220_string = "Neutral"; // 0x1b0 MovS
	func_176(var_11_object, var_220_string); // 0x1b1 NEW_2
	var_221_int = 519520; // 0x1b3 PushI
	SetMessage(var_221_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_222_int = 519521; // 0x1b8 PushI
	var_223_int = 20695; // 0x1b9 PushI
	var_224_int = 20694; // 0x1ba PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_225_int = 20695; // 0x1be PushI
	var_226_bool = var_10_bool == var_225_int; // 0x1bf Eq
	if(var_226_bool == 0) goto Label_469; // 0x1c0 JumpB
	var_227_string = ""; // 0x1c1 PushV
	var_227_string = "Neutral"; // 0x1c2 MovS
	func_176(var_11_object, var_227_string); // 0x1c3 NEW_2
	var_228_int = 519522; // 0x1c5 PushI
	SetMessage(var_228_int); // 0x1c6 TObjFunc
	ClearReplies(); // 0x1c8 TObjFunc
	var_229_int = 519523; // 0x1ca PushI
	var_230_int = -1; // 0x1cb PushI
	var_231_int = 20696; // 0x1cc PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1cd TObjFunc
	var_232_int = 527858; // 0x1cf PushI
	var_233_int = -1; // 0x1d0 PushI
	var_234_int = 29202; // 0x1d1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1d2 TObjFunc
	return 0; // 0x1d4 Return
	
Label_469:
	var_3_string = 1; // 0x1d5 TMovB
	var_235_bool = 0; // 0x1d6 PushV
	func_919(var_235_bool); // 0x1d7 NEW_2
	if(var_235_bool == 0) goto Label_477; // 0x1d9 JumpB
	lshStopAnimation(); // 0x1da Func
	goto Label_479; // 0x1dc Jump
	
Label_479:
	return 0; // 0x1df Return
	
Label_477:
	StopAnimation(); // 0x1dd Func
	
Label_481:
	return 0; // 0x1e1 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_567(var_9_object, var_10_object); // 0x1ed NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x1ef PushV
	var_15_object = var_10_object; // 0x1f0 Mov
	TaskCall(0); // 0x1f1 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x1f2 NEW_2
	TaskReturn(); // 0x1f3 TaskReturn
	return 0; // 0x1f5 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x221 PushI
	var_12_bool = var_10_int == var_11_int; // 0x222 Eq
	if(var_12_bool == 0) goto Label_566; // 0x223 JumpB
	var_13_bool = 0; // 0x224 PushV
	func_529(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x225 NEW_2
	if(var_13_bool == 0) goto Label_560; // 0x227 JumpB
	var_26_bool = var_2_object == 0; // 0x228 Not
	if(var_26_bool == 0) goto Label_559; // 0x229 JumpB
	var_27_object = Obj(); // 0x22a PushV
	var_27_object = var_4_bool; // 0x22b MovT
	func_798(var_27_object); // 0x22c NEW_2
	var_2_object = 1; // 0x22e TMovB
	
Label_559:
	goto Label_566; // 0x22f Jump
	
Label_566:
	return 0; // 0x236 Return
	
Label_560:
	var_34_object = var_2_object; // 0x230 PushT
	if(var_34_object == 0) goto Label_566; // 0x231 JumpB
	var_35_string = "head"; // 0x232 PushS
	UnlookAsync(var_35_string); // 0x233 Func
	var_2_object = 0; // 0x235 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_482:
	var_10_bool = 1; // 0x1e2 PushB
	if(var_10_bool == 0) goto Label_490; // 0x1e3 JumpB
	var_11_float = 0; var_12_float = 0; // 0x1e4 PushV
	var_11_float = 300; // 0x1e5 MovI
	var_12_float = 100; // 0x1e6 MovI
	func_502(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x1e7 NEW_2
	goto Label_482; // 0x1e9 Jump
	
Label_490:
	return 0; // 0x1ea Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_680(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_913(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_911(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_915(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_917(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1106(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_175_bool = var_24_bool == 0; // 0x38 Not
	if(var_175_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_176_object = Obj(); // 0x3f PushV
	var_176_object = var_15_object; // 0x40 Mov
	func_749(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1027(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0x404 PushV
	var_117_string = "oob2TravnikWife1"; // 0x405 MovS
	func_826(var_116_int, var_117_string); // 0x406 NEW_2
	var_120_int = 0; // 0x408 PushI
	var_121_bool = var_116_int == var_120_int; // 0x409 Eq
	if(var_121_bool == 0) goto Label_1037; // 0x40a JumpB
	var_114_bool = 1; // 0x40b MovB
	return 0; // 0x40c Return
	
Label_1037:
	var_114_bool = 0; // 0x40d MovB
	return 0; // 0x40e Return
}


func_911(var_74_int)
{
	var_74_int = 515596; // 0x38f MovI
	return 0; // 0x390 Return
}


func_783(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0; // 0x30f PushV
	lshHasAnimation(var_104_bool, var_97_string); // 0x310 Func
	var_107_bool = var_104_bool; // 0x312 Push
	if(var_107_bool == 0) goto Label_793; // 0x313 JumpB
	lshGetAnimTimes(var_97_string, var_105_float, var_106_float); // 0x314 Func
	lshPlayAnimation(var_105_float, var_106_float, var_98_bool); // 0x316 Func
	goto Label_797; // 0x318 Jump
	
Label_797:
	return 6; // 0x31d Return
	
Label_793:
	var_108_string = "Can't find lsh animation : "; // 0x319 PushS
	var_109_int = var_108_string + var_97_string; // 0x31a Add
	Trace(var_109_int); // 0x31b Func
}


func_913(var_73_int)
{
	var_73_int = 514839; // 0x391 MovI
	return 0; // 0x392 Return
}


func_529(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x211 PushV
	var_16_bool = var_4_bool == 0; // 0x212 NullEq
	if(var_16_bool == 0) goto Label_534; // 0x213 JumpB
	var_13_bool = 0; // 0x214 MovB
	return 2; // 0x215 Return
	
Label_534:
	var_17_float = 0; var_18_object = Obj(); // 0x216 PushV
	var_18_object = var_4_bool; // 0x217 MovT
	func_667(var_18_object); // 0x218 NEW_2
	var_15_float = sqrt(var_17_float); // 0x21a Sqrt2
	var_25_object = var_2_object; // 0x21b PushT
	if(var_25_object == 0) goto Label_542; // 0x21c JumpB
	var_15_float = var_15_float - var_1_object; // 0x21d Sub2
	
Label_542:
	var_13_bool = var_15_float < var_0_object; // 0x21e LT2
	return 2; // 0x21f Return
}


func_915(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png"; // 0x393 MovS
	return 0; // 0x394 Return
}


func_660(var_61_bool)
{
	var_61_bool = 1; // 0x294 MovB
	return 0; // 0x295 Return
}


func_917(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png"; // 0x395 MovS
	return 0; // 0x396 Return
}


func_662()
{
	StopAnimation(); // 0x296 Func
	StopGroup0(); // 0x298 Func
	return 0; // 0x29a Return
}


func_919(var_68_bool)
{
	var_68_bool = 0; // 0x397 MovB
	return 0; // 0x398 Return
}


func_1039()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x40f PushV
	var_95_int = 458; // 0x410 PushI
	var_96_int = 2; // 0x411 PushI
	var_97_int = 527774; // 0x412 PushI
	CreateDiaryEntry(var_94_object, var_95_int, var_96_int, var_97_int); // 0x413 Func
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0; // 0x415 PushV
	var_99_object = var_94_object; // 0x416 Mov
	var_100_int = 456; // 0x417 MovI
	func_1078(var_98_bool, var_99_object, var_100_int); // 0x418 NEW_2
	return 2; // 0x41a Return
}


func_921()
{
	var_18_string = "oob2TravnikWife1"; // 0x39a PushS
	var_19_int = 1; // 0x39b PushI
	SetVariable(var_18_string, var_19_int); // 0x39c Func
	return 0; // 0x39e Return
}


func_667(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x29b PushV
	GetPosition(var_22_cvector); // 0x29c Func
	GetPosition(var_23_cvector); // 0x29e ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x2a0 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x2a1 Or2
	return 6; // 0x2a2 Return
}


func_1052()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x41c PushV
	var_60_int = 460; // 0x41d PushI
	var_61_int = 2; // 0x41e PushI
	var_62_int = 527776; // 0x41f PushI
	CreateDiaryEntry(var_59_object, var_60_int, var_61_int, var_62_int); // 0x420 Func
	var_63_bool = 0; var_64_object = Obj(); var_65_int = 0; // 0x422 PushV
	var_64_object = var_59_object; // 0x423 Mov
	var_65_int = 456; // 0x424 MovI
	func_1078(var_63_bool, var_64_object, var_65_int); // 0x425 NEW_2
	return 2; // 0x427 Return
}


func_798(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x31e PushV
	GetEyesHeight(var_30_float); // 0x31f ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x321 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x322 PushE
	var_32_float = var_30_float; // 0x323 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x324 PopE
	var_33_string = "head"; // 0x325 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x326 Func
	return 4; // 0x328 Return
}


func_927()
{
	func_1052(); // 0x3a1 NEW_2
	var_81_bool = 0; var_82_string = ""; var_83_string = ""; // 0x3a3 PushV
	var_82_string = "quest_b2_02"; // 0x3a4 MovS
	var_83_string = "fail"; // 0x3a5 MovS
	func_875(var_81_bool, var_82_string, var_83_string); // 0x3a6 NEW_2
	return 0; // 0x3a8 Return
}


func_675(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2a3 PushV
	IsLoaded(var_15_bool); // 0x2a4 Func
	var_13_bool = var_15_bool; // 0x2a6 Mov
	return 2; // 0x2a7 Return
}


func_680(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x2a8 PushV
	GetPosition(var_38_cvector); // 0x2a9 ObjFunc
	GetEyesHeight(var_37_float); // 0x2ab ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2ad PushE
	var_46_float = var_46_float + var_37_float; // 0x2ae Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2af PopE
	GetPosition(var_39_cvector); // 0x2b0 Func
	GetEyesHeight(var_37_float); // 0x2b2 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2b4 PushE
	var_47_float = var_47_float + var_37_float; // 0x2b5 Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x2b6 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x2b7 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2b8 PushE
	var_48_float = 0; // 0x2b9 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2ba PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x2bb Or
	var_50_float = sqrt(var_49_int); // 0x2bc Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x2bd Div2
	var_41_cvector = -var_40_cvector; // 0x2be Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x2bf Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x2c0 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x2c1 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x2c2 Xor2
	func_816(var_52_cvector, var_53_cvector); // 0x2c3 NEW_2
	var_60_int = 25; // 0x2c5 PushI
	var_61_float = var_52_cvector * var_60_int; // 0x2c6 Mult
	var_62_int = var_51_float + var_61_float; // 0x2c7 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x2c8 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x2c9 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x2ca Add2
	IsOverrideActive(var_44_bool); // 0x2cb Func
	var_64_bool = var_44_bool; // 0x2cd Push
	if(var_64_bool == 0) goto Label_721; // 0x2ce JumpB
	var_25_bool = 0; // 0x2cf MovB
	return 18; // 0x2d0 Return
	
Label_721:
	StopWorld(); // 0x2d1 Func
	var_65_bool = 1; // 0x2d3 PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x2d4 Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x2d6 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x2d7 PushE
	Rotate(var_66_float, var_67_float); // 0x2d8 Func
	var_68_bool = 0; // 0x2da PushV
	func_919(var_68_bool); // 0x2db NEW_2
	if(var_68_bool == 0) goto Label_735; // 0x2dd JumpB
	goto Label_743; // 0x2de Jump
	
Label_743:
	CameraWaitForPlayFinish(); // 0x2e7 Func
	ResumeWorld(); // 0x2e9 Func
	var_25_bool = 1; // 0x2eb MovB
	return 18; // 0x2ec Return
	
Label_735:
	var_69_string = "head"; // 0x2df PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x2e0 Func
	var_70_bool = var_45_bool; // 0x2e2 Push
	if(var_70_bool == 0) goto Label_743; // 0x2e3 JumpB
	var_71_string = "head"; // 0x2e4 PushS
	LookAsyncCamera(var_71_string); // 0x2e5 Func
}


func_809()
{
	var_13_bool = 0; // 0x329 PushV
	func_919(var_13_bool); // 0x32a NEW_2
	if(var_13_bool == 0) goto Label_815; // 0x32c JumpB
	lshStopSpeech(); // 0x32d Func
	
Label_815:
	return 0; // 0x32f Return
}


func_937()
{
	var_91_string = "b2q02"; // 0x3aa PushS
	var_92_int = 2; // 0x3ab PushI
	SetVariable(var_91_string, var_92_int); // 0x3ac Func
	func_1039(); // 0x3af NEW_2
	var_101_bool = 0; var_102_string = ""; var_103_string = ""; // 0x3b1 PushV
	var_102_string = "quest_b2_02"; // 0x3b2 MovS
	var_103_string = "move_bride"; // 0x3b3 MovS
	func_875(var_101_bool, var_102_string, var_103_string); // 0x3b4 NEW_2
	return 0; // 0x3b6 Return
}


func_1065(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x429 PushV
	GetDiaryRoot(var_74_object); // 0x42a Func
	var_75_bool = var_74_object == 0; // 0x42c Not
	if(var_75_bool == 0) goto Label_1075; // 0x42d JumpB
	var_76_string = "Can't retrieve diary root"; // 0x42e PushS
	Trace(var_76_string); // 0x42f Func
	var_72_object = 0; // 0x431 MovB
	return 2; // 0x432 Return
	
Label_1075:
	var_72_object = var_74_object; // 0x433 Mov
	return 2; // 0x434 Return
}


func_176(var_2_object, var_93_string)
{
	var_94_bool = 0; // 0xb1 PushV
	func_919(var_94_bool); // 0xb2 NEW_2
	var_95_bool = var_94_bool == 0; // 0xb4 Not
	if(var_95_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_96_bool = var_93_string == var_2_object; // 0xb7 Eq
	if(var_96_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_97_string = ""; var_98_bool = 0; // 0xba PushV
	var_97_string = var_93_string; // 0xbb Mov
	var_99_string = ""; // 0xbc PushS
	var_100_bool = var_93_string == var_99_string; // 0xbd Eq
	if(var_100_bool == 0) goto Label_193; // 0xbe JumpB
	var_98_bool = 0; // 0xbf MovB
	goto Label_194; // 0xc0 Jump
	
Label_194:
	func_783(var_97_string, var_98_bool); // 0xc2 NEW_2
	var_2_object = var_93_string; // 0xc4 TMov
	return 0; // 0xc5 Return
	
Label_193:
	var_98_bool = 1; // 0xc1 MovB
}


func_816(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x330 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x331 Or
	var_56_float = sqrt(var_57_int); // 0x332 Sqrt2
	var_58_float = 0.0; // 0x333 PushF
	var_59_bool = var_56_float < var_58_float; // 0x334 LT
	if(var_59_bool == 0) goto Label_824; // 0x335 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x336 MovV
	return 2; // 0x337 Return
	
Label_824:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x338 Div2
	return 2; // 0x339 Return
}


func_1078(var_63_bool, var_64_object, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; // 0x436 PushV
	var_72_object = Obj(); // 0x437 PushV
	func_1065(var_72_object); // 0x438 NEW_2
	var_69_object = var_72_object; // 0x439 Mov
	Find(var_65_int, var_70_object); // 0x43b ObjFunc
	var_77_bool = var_70_object == 0; // 0x43d Not
	if(var_77_bool == 0) goto Label_1093; // 0x43e JumpB
	var_78_string = "Can't find diary parent with id: "; // 0x43f PushS
	var_79_int = var_78_string + var_65_int; // 0x440 Add
	Trace(var_79_int); // 0x441 Func
	var_63_bool = 0; // 0x443 MovB
	return 6; // 0x444 Return
	
Label_1093:
	AddChild(var_64_object); // 0x445 ObjFunc
	var_80_int = 7; // 0x447 PushI
	SendWorldWndMessage(var_80_int); // 0x448 Func
	GetCategory(var_71_int); // 0x44a ObjFunc
	SetDiarySection(var_71_int); // 0x44c Func
	var_63_bool = 0; // 0x44e MovB
	return 6; // 0x44f Return
}


func_951(var_46_object)
{
	var_48_string = "white plet 3 is given"; // 0x3b8 PushS
	Trace(var_48_string); // 0x3b9 Func
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0; // 0x3bb PushV
	var_49_object = var_46_object; // 0x3bc Mov
	var_50_string = "grass_white_plet"; // 0x3bd MovS
	var_51_int = 3; // 0x3be MovI
	func_862(var_49_object, var_50_string, var_51_int); // 0x3bf NEW_2
	return 0; // 0x3c1 Return
}


func_567(var_2_object, var_3_string)
{
	func_662(); // 0x238 NEW_2
	var_11_int = 10; // 0x23a PushI
	KillTimer(var_11_int); // 0x23b Func
	var_12_object = var_2_object; // 0x23d PushT
	if(var_12_object == 0) goto Label_579; // 0x23e JumpB
	var_13_string = "head"; // 0x23f PushS
	UnlookAsync(var_13_string); // 0x240 Func
	var_2_object = 0; // 0x242 TMovB
	
Label_579:
	var_3_string = 1; // 0x243 TMovB
	return 0; // 0x244 Return
}


func_826(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0x33a PushV
	GetVariable(var_117_string, var_119_int); // 0x33b Func
	var_116_int = var_119_int; // 0x33d Mov
	return 2; // 0x33e Return
}


func_831(var_41_int, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x33f PushV
	CreateIntVector(var_44_object); // 0x340 Func
	add(var_41_int); // 0x342 ObjFunc
	add(var_42_int); // 0x344 ObjFunc
	var_45_int = 3; // 0x346 PushI
	SendWorldWndMessage(var_45_int, var_44_object); // 0x347 Func
	return 2; // 0x349 Return
}


func_962(var_22_object)
{
	var_24_string = "savyur 3 is given"; // 0x3c3 PushS
	Trace(var_24_string); // 0x3c4 Func
	var_25_object = Obj(); var_26_string = ""; var_27_int = 0; // 0x3c6 PushV
	var_25_object = var_22_object; // 0x3c7 Mov
	var_26_string = "grass_savyur"; // 0x3c8 MovS
	var_27_int = 3; // 0x3c9 MovI
	func_862(var_25_object, var_26_string, var_27_int); // 0x3ca NEW_2
	return 0; // 0x3cc Return
}


func_581()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x245 PushV
	WaitForAnimEnd(); // 0x246 Func
	var_34_bool = 0; // 0x248 PushV
	func_675(var_34_bool); // 0x249 NEW_2
	var_35_bool = var_34_bool == 0; // 0x24b Not
	if(var_35_bool == 0) goto Label_590; // 0x24c JumpB
	return 14; // 0x24d Return
	
Label_590:
	var_36_int = 0; // 0x24e PushV
	func_894(var_36_int); // 0x24f NEW_2
	var_27_int = var_36_int; // 0x250 Mov
	var_28_int = 0; // 0x252 MovI
	
Label_595:
	var_49_bool = 0; // 0x253 PushV
	var_49_bool = 0; // 0x254 MovB
	var_50_int = 5; // 0x255 PushI
	var_51_bool = var_28_int < var_50_int; // 0x256 LT
	if(var_51_bool == 0) goto Label_605; // 0x257 JumpB
	var_52_bool = 0; // 0x258 PushV
	func_675(var_52_bool); // 0x259 NEW_2
	if(var_52_bool == 0) goto Label_605; // 0x25b JumpB
	var_49_bool = 1; // 0x25c MovB
	
Label_605:
	if(var_49_bool == 0) goto Label_657; // 0x25d JumpB
	var_53_int = 3; // 0x25e PushI
	irand(var_29_int, var_53_int); // 0x25f Func
	var_54_int = 0; // 0x261 PushI
	var_55_bool = var_29_int == var_54_int; // 0x262 Eq
	if(var_55_bool == 0) goto Label_629; // 0x263 JumpB
	var_56_int = var_27_int; // 0x264 Push
	if(var_56_int == 0) goto Label_628; // 0x265 JumpB
	irand(var_30_int, var_27_int); // 0x266 Func
	var_57_string = "all"; // 0x268 PushS
	var_58_string = ""; var_59_int = 0; // 0x269 PushV
	var_59_int = var_30_int; // 0x26a Mov
	func_887(var_58_string, var_59_int); // 0x26b NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x26d Func
	WaitForAnimEnd(var_31_bool); // 0x26f Func
	var_60_bool = var_31_bool == 0; // 0x271 Not
	if(var_60_bool == 0) goto Label_628; // 0x272 JumpB
	goto Label_657; // 0x273 Jump
	
Label_657:
	ResetAAS(); // 0x291 Func
	return 14; // 0x293 Return
	
Label_628:
	goto Label_646; // 0x274 Jump
	
Label_646:
	var_61_bool = 0; // 0x286 PushV
	func_660(var_61_bool); // 0x287 NEW_2
	var_62_bool = var_61_bool == 0; // 0x289 Not
	if(var_62_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_657; // 0x28b Jump
	
Label_652:
	ResetAAS(); // 0x28c Func
	var_63_int = 1; // 0x28e PushI
	var_28_int = var_28_int + var_63_int; // 0x28f Add2
	goto Label_595; // 0x290 Jump
	
Label_629:
	var_64_int = 1; // 0x275 PushI
	var_65_bool = var_29_int == var_64_int; // 0x276 Eq
	if(var_65_bool == 0) goto Label_643; // 0x277 JumpB
	var_66_int = 4; // 0x278 PushI
	rand(var_32_float, var_66_int); // 0x279 Func
	var_67_int = 1; // 0x27b PushI
	var_68_int = var_32_float + var_67_int; // 0x27c Add
	Sleep(var_68_int, var_33_bool); // 0x27d Func
	var_69_bool = var_33_bool == 0; // 0x27f Not
	if(var_69_bool == 0) goto Label_642; // 0x280 JumpB
	goto Label_657; // 0x281 Jump
	
Label_642:
	goto Label_646; // 0x282 Jump
	
Label_643:
	var_70_int = var_28_int; // 0x283 Push
	if(var_70_int == 0) goto Label_646; // 0x284 JumpB
	goto Label_657; // 0x285 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_146; // 0x4f JumpB
	var_93_string = ""; // 0x50 PushV
	var_93_string = "Neutral"; // 0x51 MovS
	func_176(var_87_object, var_93_string); // 0x52 NEW_2
	var_110_int = 518265; // 0x54 PushI
	SetMessage(var_110_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_111_bool = 0; // 0x59 PushV
	var_111_bool = 0; // 0x5a MovB
	var_112_bool = 0; // 0x5b PushV
	var_112_bool = 0; // 0x5c MovB
	var_113_bool = 0; // 0x5d PushV
	var_113_bool = 0; // 0x5e MovB
	var_114_bool = 0; var_115_object = Obj(); // 0x5f PushV
	var_115_object = var_1_object; // 0x60 MovT
	func_1027(var_115_object); // 0x61 NEW_2
	if(var_114_bool == 0) goto Label_107; // 0x63 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x64 PushV
	var_123_object = var_1_object; // 0x65 MovT
	func_1003(var_123_object); // 0x66 NEW_2
	var_128_bool = var_122_bool == 0; // 0x68 Not
	if(var_128_bool == 0) goto Label_107; // 0x69 JumpB
	var_113_bool = 1; // 0x6a MovB
	
Label_107:
	if(var_113_bool == 0) goto Label_115; // 0x6b JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x6c PushV
	var_130_object = var_1_object; // 0x6d MovT
	func_991(var_130_object); // 0x6e NEW_2
	var_135_bool = var_129_bool == 0; // 0x70 Not
	if(var_135_bool == 0) goto Label_115; // 0x71 JumpB
	var_112_bool = 1; // 0x72 MovB
	
Label_115:
	if(var_112_bool == 0) goto Label_122; // 0x73 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0x74 PushV
	var_137_object = var_1_object; // 0x75 MovT
	func_1015(var_137_object); // 0x76 NEW_2
	if(var_136_bool == 0) goto Label_122; // 0x78 JumpB
	var_111_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_111_bool == 0) goto Label_128; // 0x7a JumpB
	var_142_int = 518266; // 0x7b PushI
	var_143_int = 20687; // 0x7c PushI
	var_144_int = 19375; // 0x7d PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x7e TObjFunc
	
Label_128:
	var_145_bool = 0; var_146_object = Obj(); // 0x80 PushV
	var_146_object = var_1_object; // 0x81 MovT
	func_979(var_146_object); // 0x82 NEW_2
	if(var_145_bool == 0) goto Label_138; // 0x84 JumpB
	var_151_int = 527751; // 0x85 PushI
	var_152_int = 29118; // 0x86 PushI
	var_153_int = 29108; // 0x87 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x88 TObjFunc
	
Label_138:
	var_154_int = 518267; // 0x8a PushI
	var_155_int = -1; // 0x8b PushI
	var_156_int = 19376; // 0x8c PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x8d TObjFunc
	goto Label_146; // 0x8f Jump
	
Label_146:
	var_157_bool = 0; // 0x92 PushV
	func_919(var_157_bool); // 0x93 NEW_2
	if(var_157_bool == 0) goto Label_161; // 0x95 JumpB
	
Label_150:
	lshWaitForAnimEnd(); // 0x96 Func
	var_158_string = var_3_string; // 0x98 PushT
	if(var_158_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_160:
	goto Label_175; // 0xa0 Jump
	
Label_175:
	return 0; // 0xaf Return
	
Label_155:
	var_159_string = ""; // 0x9b PushV
	var_159_string = var_2_object; // 0x9c MovT
	func_767(var_159_string); // 0x9d NEW_2
	goto Label_150; // 0x9f Jump
	
Label_161:
	var_170_string = "all"; // 0xa1 PushS
	var_171_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_170_string, var_171_string); // 0xa3 Func
	
Label_165:
	WaitForAnimEnd(); // 0xa5 Func
	var_172_string = var_3_string; // 0xa7 PushT
	if(var_172_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_170:
	var_173_string = "all"; // 0xaa PushS
	var_174_string = "idle"; // 0xab PushS
	PlayAnimation(var_173_string, var_174_string); // 0xac Func
	goto Label_165; // 0xae Jump
}


func_843(var_31_object, var_32_int)
{
	var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x34b PushV
	GetItemID(var_36_int); // 0x34c ObjFunc
	var_39_string = "Category"; // 0x34e PushS
	GetInvItemProperty(var_37_int, var_36_int, var_39_string); // 0x34f Func
	AddItem(var_38_bool, var_31_object, var_37_int, var_32_int); // 0x351 ObjFunc
	var_40_bool = var_38_bool == 0; // 0x353 Not
	if(var_40_bool == 0) goto Label_856; // 0x354 JumpB
	DropItems(var_31_object, var_32_int); // 0x355 ObjFunc
	goto Label_861; // 0x357 Jump
	
Label_861:
	return 6; // 0x35d Return
	
Label_856:
	var_41_int = 0; var_42_int = 0; // 0x358 PushV
	var_41_int = var_36_int; // 0x359 Mov
	var_42_int = var_32_int; // 0x35a Mov
	func_831(var_41_int, var_42_int); // 0x35b NEW_2
}


func_973()
{
	var_54_string = "playsound"; // 0x3ce PushS
	var_55_string = "giveitem"; // 0x3cf PushS
	TriggerWorld(var_54_string, var_55_string); // 0x3d0 Func
	return 0; // 0x3d2 Return
}


func_1106(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x452 PushV
	var_80_string = "branch"; // 0x453 PushS
	GetVariable(var_80_string, var_79_int); // 0x454 Func
	var_81_int = 0; // 0x456 PushI
	var_82_bool = var_79_int == var_81_int; // 0x457 Eq
	if(var_82_bool == 0) goto Label_1116; // 0x458 JumpB
	var_77_int = 1; // 0x459 MovI
	return 2; // 0x45a Return
	
Label_1116:
	var_83_int = 1; // 0x45c PushI
	var_84_bool = var_79_int == var_83_int; // 0x45d Eq
	if(var_84_bool == 0) goto Label_1121; // 0x45e JumpB
	var_77_int = 2; // 0x45f MovI
	return 2; // 0x460 Return
	
Label_1121:
	var_77_int = 3; // 0x461 MovI
	return 2; // 0x462 Return
}


func_979(var_145_bool)
{
	var_147_int = 0; var_148_string = ""; // 0x3d4 PushV
	var_148_string = "b2q02"; // 0x3d5 MovS
	func_826(var_147_int, var_148_string); // 0x3d6 NEW_2
	var_149_int = 1; // 0x3d8 PushI
	var_150_bool = var_147_int == var_149_int; // 0x3d9 Eq
	if(var_150_bool == 0) goto Label_989; // 0x3da JumpB
	var_145_bool = 1; // 0x3db MovB
	return 0; // 0x3dc Return
	
Label_989:
	var_145_bool = 0; // 0x3dd MovB
	return 0; // 0x3de Return
}


func_862(var_25_object, var_26_string, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x35e PushV
	CreateInvItem(var_29_object); // 0x35f Func
	SetItemName(var_26_string); // 0x361 ObjFunc
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; // 0x363 PushV
	var_30_object = var_25_object; // 0x364 Mov
	var_31_object = var_29_object; // 0x365 Mov
	var_32_int = var_27_int; // 0x366 Mov
	func_843(var_31_object, var_32_int); // 0x367 NEW_2
	return 2; // 0x369 Return
}


func_991(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0x3e0 PushV
	var_132_string = "b2q02"; // 0x3e1 MovS
	func_826(var_131_int, var_132_string); // 0x3e2 NEW_2
	var_133_int = 2; // 0x3e4 PushI
	var_134_bool = var_131_int == var_133_int; // 0x3e5 Eq
	if(var_134_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_129_bool = 1; // 0x3e7 MovB
	return 0; // 0x3e8 Return
	
Label_1001:
	var_129_bool = 0; // 0x3e9 MovB
	return 0; // 0x3ea Return
}


func_1003(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x3ec PushV
	var_125_string = "b2q02"; // 0x3ed MovS
	func_826(var_124_int, var_125_string); // 0x3ee NEW_2
	var_126_int = -1; // 0x3f0 PushI
	var_127_bool = var_124_int == var_126_int; // 0x3f1 Eq
	if(var_127_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_122_bool = 1; // 0x3f3 MovB
	return 0; // 0x3f4 Return
	
Label_1013:
	var_122_bool = 0; // 0x3f5 MovB
	return 0; // 0x3f6 Return
}


func_875(var_81_bool, var_82_string, var_83_string)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x36b PushV
	FindActor(var_85_object, var_82_string); // 0x36c Func
	var_86_bool = var_85_object == 0; // 0x36e NullEq
	if(var_86_bool == 0) goto Label_882; // 0x36f JumpB
	var_81_bool = 0; // 0x370 MovB
	return 2; // 0x371 Return
	
Label_882:
	Trigger(var_85_object, var_83_string); // 0x372 Func
	var_81_bool = 1; // 0x374 MovB
	return 2; // 0x375 Return
}


func_749()
{
	var_177_bool = 0; var_178_bool = 0; // 0x2ed PushV
	var_179_bool = 1; // 0x2ee PushB
	CameraSwitchToNormal(var_179_bool); // 0x2ef Func
	var_180_bool = 0; // 0x2f1 PushV
	func_919(var_180_bool); // 0x2f2 NEW_2
	if(var_180_bool == 0) goto Label_758; // 0x2f4 JumpB
	goto Label_766; // 0x2f5 Jump
	
Label_766:
	return 2; // 0x2fe Return
	
Label_758:
	var_181_string = "head"; // 0x2f6 PushS
	HasAnimationTrack(var_178_bool, var_181_string); // 0x2f7 Func
	var_182_bool = var_178_bool; // 0x2f9 Push
	if(var_182_bool == 0) goto Label_766; // 0x2fa JumpB
	var_183_string = "head"; // 0x2fb PushS
	UnlookAsync(var_183_string); // 0x2fc Func
}


func_1015(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0x3f8 PushV
	var_139_string = "b2q02"; // 0x3f9 MovS
	func_826(var_138_int, var_139_string); // 0x3fa NEW_2
	var_140_int = 1000; // 0x3fc PushI
	var_141_bool = var_138_int == var_140_int; // 0x3fd Eq
	if(var_141_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_136_bool = 1; // 0x3ff MovB
	return 0; // 0x400 Return
	
Label_1025:
	var_136_bool = 0; // 0x401 MovB
	return 0; // 0x402 Return
}


func_502(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x1f7 PushV
	func_675(var_13_bool); // 0x1f8 NEW_2
	var_16_bool = var_13_bool == 0; // 0x1fa Not
	if(var_16_bool == 0) goto Label_509; // 0x1fb JumpB
	return 0; // 0x1fc Return
	
Label_509:
	var_17_string = "player"; // 0x1fd PushS
	FindActor(var_9_object, var_17_string); // 0x1fe Func
	var_2_object = 0; // 0x200 TMovB
	var_3_string = 0; // 0x201 TMovB
	var_0_object = var_11_float; // 0x202 TMov
	var_1_object = var_12_float; // 0x203 TMov
	var_18_int = 10; // 0x204 PushI
	var_19_float = 1.0; // 0x205 PushF
	SetTimer(var_18_int, var_19_float); // 0x206 Func
	func_581(); // 0x209 NEW_2
	var_71_bool = var_3_string == 0; // 0x20b Not
	if(var_71_bool == 0) goto Label_528; // 0x20c JumpB
	var_72_int = 10; // 0x20d PushI
	KillTimer(var_72_int); // 0x20e Func
	
Label_528:
	return 0; // 0x210 Return
}


func_887(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x377 PushV
	var_45_string = "idle"; // 0x378 MovS
	var_46_int = var_43_int; // 0x379 Push
	if(var_46_int == 0) goto Label_892; // 0x37a JumpB
	var_45_string = var_45_string + var_43_int; // 0x37b Add2
	
Label_892:
	var_42_string = var_45_string; // 0x37c Mov
	return 2; // 0x37d Return
}


func_894(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x37e PushV
	var_39_int = 0; // 0x37f MovI
	
Label_896:
	var_41_string = "all"; // 0x380 PushS
	var_42_string = ""; var_43_int = 0; // 0x381 PushV
	var_43_int = var_39_int; // 0x382 Mov
	func_887(var_42_string, var_43_int); // 0x383 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x385 Func
	var_47_bool = var_40_bool == 0; // 0x387 Not
	if(var_47_bool == 0) goto Label_906; // 0x388 JumpB
	goto Label_909; // 0x389 Jump
	
Label_909:
	var_36_int = var_39_int; // 0x38d Mov
	return 4; // 0x38e Return
	
Label_906:
	var_48_int = 1; // 0x38a PushI
	var_39_int = var_39_int + var_48_int; // 0x38b Add2
	goto Label_896; // 0x38c Jump
}


func_767(var_159_string)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0; // 0x2ff PushV
	lshHasAnimation(var_163_bool, var_159_string); // 0x300 Func
	var_166_bool = var_163_bool; // 0x302 Push
	if(var_166_bool == 0) goto Label_778; // 0x303 JumpB
	lshGetAnimTimes(var_159_string, var_164_float, var_165_float); // 0x304 Func
	var_167_bool = 0; // 0x306 PushB
	lshPlayAnimation(var_164_float, var_165_float, var_167_bool); // 0x307 Func
	goto Label_782; // 0x309 Jump
	
Label_782:
	return 6; // 0x30e Return
	
Label_778:
	var_168_string = "Can't find lsh animation : "; // 0x30a PushS
	var_169_int = var_168_string + var_159_string; // 0x30b Add
	Trace(var_169_int); // 0x30c Func
}


