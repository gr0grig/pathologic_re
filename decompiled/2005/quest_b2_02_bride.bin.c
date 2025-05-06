task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xc7 PushI
	if(var_12_int == 0) goto Label_481; // 0xc8 JumpB
	func_807(); // 0xca NEW_2
	var_14_int = 19375; // 0xcc PushI
	var_15_bool = var_11_object == var_14_int; // 0xcd Eq
	if(var_15_bool == 0) goto Label_212; // 0xce JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xcf PushV
	var_16_object = var_1_object; // 0xd0 MovT
	var_17_object = var_0_object; // 0xd1 MovT
	func_919(); // 0xd2 NEW_2
	
Label_212:
	var_20_int = 29121; // 0xd4 PushI
	var_21_bool = var_11_object == var_20_int; // 0xd5 Eq
	if(var_21_bool == 0) goto Label_235; // 0xd6 JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0xd7 PushV
	var_22_object = var_1_object; // 0xd8 MovT
	var_23_object = var_0_object; // 0xd9 MovT
	func_960(var_23_object); // 0xda NEW_2
	var_46_object = Obj(); var_47_object = Obj(); // 0xdc PushV
	var_46_object = var_1_object; // 0xdd MovT
	var_47_object = var_0_object; // 0xde MovT
	func_949(var_47_object); // 0xdf NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0xe1 PushV
	var_52_object = var_1_object; // 0xe2 MovT
	var_53_object = var_0_object; // 0xe3 MovT
	func_971(); // 0xe4 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0xe6 PushV
	var_56_object = var_1_object; // 0xe7 MovT
	var_57_object = var_0_object; // 0xe8 MovT
	func_925(); // 0xe9 NEW_2
	
Label_235:
	var_87_int = 29122; // 0xeb PushI
	var_88_bool = var_11_object == var_87_int; // 0xec Eq
	if(var_88_bool == 0) goto Label_243; // 0xed JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xee PushV
	var_89_object = var_1_object; // 0xef MovT
	var_90_object = var_0_object; // 0xf0 MovT
	func_935(); // 0xf1 NEW_2
	
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
	func_1025(var_128_object); // 0x107 NEW_2
	if(var_127_bool == 0) goto Label_273; // 0x109 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x10a PushV
	var_136_object = var_1_object; // 0x10b MovT
	func_1001(var_136_object); // 0x10c NEW_2
	var_141_bool = var_135_bool == 0; // 0x10e Not
	if(var_141_bool == 0) goto Label_273; // 0x10f JumpB
	var_126_bool = 1; // 0x110 MovB
	
Label_273:
	if(var_126_bool == 0) goto Label_281; // 0x111 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x112 PushV
	var_143_object = var_1_object; // 0x113 MovT
	func_989(var_143_object); // 0x114 NEW_2
	var_148_bool = var_142_bool == 0; // 0x116 Not
	if(var_148_bool == 0) goto Label_281; // 0x117 JumpB
	var_125_bool = 1; // 0x118 MovB
	
Label_281:
	if(var_125_bool == 0) goto Label_288; // 0x119 JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x11a PushV
	var_150_object = var_1_object; // 0x11b MovT
	func_1013(var_150_object); // 0x11c NEW_2
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
	func_977(var_159_object); // 0x128 NEW_2
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
	func_917(var_235_bool); // 0x1d7 NEW_2
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
	func_796(var_27_object); // 0x22c NEW_2
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
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_911(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_909(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_913(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_915(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1104(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_174_bool = var_24_bool == 0; // 0x38 Not
	if(var_174_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_175_object = Obj(); // 0x3f PushV
	var_175_object = var_15_object; // 0x40 Mov
	func_748(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1025(var_113_bool)
{
	var_115_int = 0; var_116_string = ""; // 0x402 PushV
	var_116_string = "oob2TravnikWife1"; // 0x403 MovS
	func_824(var_115_int, var_116_string); // 0x404 NEW_2
	var_119_int = 0; // 0x406 PushI
	var_120_bool = var_115_int == var_119_int; // 0x407 Eq
	if(var_120_bool == 0) goto Label_1035; // 0x408 JumpB
	var_113_bool = 1; // 0x409 MovB
	return 0; // 0x40a Return
	
Label_1035:
	var_113_bool = 0; // 0x40b MovB
	return 0; // 0x40c Return
}


func_781(var_96_string, var_97_bool)
{
	var_100_bool = 0; var_101_float = 0; var_102_float = 0; var_103_bool = 0; var_104_float = 0; var_105_float = 0; // 0x30d PushV
	lshHasAnimation(var_103_bool, var_96_string); // 0x30e Func
	var_106_bool = var_103_bool; // 0x310 Push
	if(var_106_bool == 0) goto Label_791; // 0x311 JumpB
	lshGetAnimTimes(var_96_string, var_104_float, var_105_float); // 0x312 Func
	lshPlayAnimation(var_104_float, var_105_float, var_97_bool); // 0x314 Func
	goto Label_795; // 0x316 Jump
	
Label_795:
	return 6; // 0x31b Return
	
Label_791:
	var_107_string = "Can't find lsh animation : "; // 0x317 PushS
	var_108_int = var_107_string + var_96_string; // 0x318 Add
	Trace(var_108_int); // 0x319 Func
}


func_909(var_73_int)
{
	var_73_int = 515596; // 0x38d MovI
	return 0; // 0x38e Return
}


func_911(var_72_int)
{
	var_72_int = 514839; // 0x38f MovI
	return 0; // 0x390 Return
}


func_1037()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x40d PushV
	var_95_int = 458; // 0x40e PushI
	var_96_int = 2; // 0x40f PushI
	var_97_int = 527774; // 0x410 PushI
	CreateDiaryEntry(var_94_object, var_95_int, var_96_int, var_97_int); // 0x411 Func
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0; // 0x413 PushV
	var_99_object = var_94_object; // 0x414 Mov
	var_100_int = 456; // 0x415 MovI
	func_1076(var_98_bool, var_99_object, var_100_int); // 0x416 NEW_2
	return 2; // 0x418 Return
}


func_913(var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png"; // 0x391 MovS
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
	var_75_string = "ui/NPC_Citizen3_b.png"; // 0x393 MovS
	return 0; // 0x394 Return
}


func_660(var_61_bool)
{
	var_61_bool = 1; // 0x294 MovB
	return 0; // 0x295 Return
}


func_917(var_67_bool)
{
	var_67_bool = 0; // 0x395 MovB
	return 0; // 0x396 Return
}


func_662()
{
	StopAnimation(); // 0x296 Func
	StopGroup0(); // 0x298 Func
	return 0; // 0x29a Return
}


func_919()
{
	var_18_string = "oob2TravnikWife1"; // 0x398 PushS
	var_19_int = 1; // 0x399 PushI
	SetVariable(var_18_string, var_19_int); // 0x39a Func
	return 0; // 0x39c Return
}


func_1050()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x41a PushV
	var_60_int = 460; // 0x41b PushI
	var_61_int = 2; // 0x41c PushI
	var_62_int = 527776; // 0x41d PushI
	CreateDiaryEntry(var_59_object, var_60_int, var_61_int, var_62_int); // 0x41e Func
	var_63_bool = 0; var_64_object = Obj(); var_65_int = 0; // 0x420 PushV
	var_64_object = var_59_object; // 0x421 Mov
	var_65_int = 456; // 0x422 MovI
	func_1076(var_63_bool, var_64_object, var_65_int); // 0x423 NEW_2
	return 2; // 0x425 Return
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


func_796(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x31c PushV
	GetEyesHeight(var_30_float); // 0x31d ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x31f MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x320 PushE
	var_32_float = var_30_float; // 0x321 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x322 PopE
	var_33_string = "head"; // 0x323 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x324 Func
	return 4; // 0x326 Return
}


func_925()
{
	func_1050(); // 0x39f NEW_2
	var_81_bool = 0; var_82_string = ""; var_83_string = ""; // 0x3a1 PushV
	var_82_string = "quest_b2_02"; // 0x3a2 MovS
	var_83_string = "fail"; // 0x3a3 MovS
	func_873(var_81_bool, var_82_string, var_83_string); // 0x3a4 NEW_2
	return 0; // 0x3a6 Return
}


func_675(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2a3 PushV
	IsLoaded(var_15_bool); // 0x2a4 Func
	var_13_bool = var_15_bool; // 0x2a6 Mov
	return 2; // 0x2a7 Return
}


func_807()
{
	var_13_bool = 0; // 0x327 PushV
	func_917(var_13_bool); // 0x328 NEW_2
	if(var_13_bool == 0) goto Label_813; // 0x32a JumpB
	lshStopSpeech(); // 0x32b Func
	
Label_813:
	return 0; // 0x32d Return
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
	func_814(var_52_cvector, var_53_cvector); // 0x2c3 NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x2d3 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x2d5 PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x2d6 PushE
	Rotate(var_65_float, var_66_float); // 0x2d7 Func
	var_67_bool = 0; // 0x2d9 PushV
	func_917(var_67_bool); // 0x2da NEW_2
	if(var_67_bool == 0) goto Label_734; // 0x2dc JumpB
	goto Label_742; // 0x2dd Jump
	
Label_742:
	CameraWaitForPlayFinish(); // 0x2e6 Func
	ResumeWorld(); // 0x2e8 Func
	var_25_bool = 1; // 0x2ea MovB
	return 18; // 0x2eb Return
	
Label_734:
	var_68_string = "head"; // 0x2de PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x2df Func
	var_69_bool = var_45_bool; // 0x2e1 Push
	if(var_69_bool == 0) goto Label_742; // 0x2e2 JumpB
	var_70_string = "head"; // 0x2e3 PushS
	LookAsyncCamera(var_70_string); // 0x2e4 Func
}


func_935()
{
	var_91_string = "b2q02"; // 0x3a8 PushS
	var_92_int = 2; // 0x3a9 PushI
	SetVariable(var_91_string, var_92_int); // 0x3aa Func
	func_1037(); // 0x3ad NEW_2
	var_101_bool = 0; var_102_string = ""; var_103_string = ""; // 0x3af PushV
	var_102_string = "quest_b2_02"; // 0x3b0 MovS
	var_103_string = "move_bride"; // 0x3b1 MovS
	func_873(var_101_bool, var_102_string, var_103_string); // 0x3b2 NEW_2
	return 0; // 0x3b4 Return
}


func_1063(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x427 PushV
	GetDiaryRoot(var_74_object); // 0x428 Func
	var_75_bool = var_74_object == 0; // 0x42a Not
	if(var_75_bool == 0) goto Label_1073; // 0x42b JumpB
	var_76_string = "Can't retrieve diary root"; // 0x42c PushS
	Trace(var_76_string); // 0x42d Func
	var_72_object = 0; // 0x42f MovB
	return 2; // 0x430 Return
	
Label_1073:
	var_72_object = var_74_object; // 0x431 Mov
	return 2; // 0x432 Return
}


func_814(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x32e PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x32f Or
	var_56_float = sqrt(var_57_int); // 0x330 Sqrt2
	var_58_float = 0.0; // 0x331 PushF
	var_59_bool = var_56_float < var_58_float; // 0x332 LT
	if(var_59_bool == 0) goto Label_822; // 0x333 JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x334 MovV
	return 2; // 0x335 Return
	
Label_822:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x336 Div2
	return 2; // 0x337 Return
}


func_176(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0xb1 PushV
	func_917(var_93_bool); // 0xb2 NEW_2
	var_94_bool = var_93_bool == 0; // 0xb4 Not
	if(var_94_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_95_bool = var_92_string == var_2_object; // 0xb7 Eq
	if(var_95_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_96_string = ""; var_97_bool = 0; // 0xba PushV
	var_96_string = var_92_string; // 0xbb Mov
	var_98_string = ""; // 0xbc PushS
	var_99_bool = var_92_string == var_98_string; // 0xbd Eq
	if(var_99_bool == 0) goto Label_193; // 0xbe JumpB
	var_97_bool = 0; // 0xbf MovB
	goto Label_194; // 0xc0 Jump
	
Label_194:
	func_781(var_96_string, var_97_bool); // 0xc2 NEW_2
	var_2_object = var_92_string; // 0xc4 TMov
	return 0; // 0xc5 Return
	
Label_193:
	var_97_bool = 1; // 0xc1 MovB
}


func_1076(var_63_bool, var_64_object, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; // 0x434 PushV
	var_72_object = Obj(); // 0x435 PushV
	func_1063(var_72_object); // 0x436 NEW_2
	var_69_object = var_72_object; // 0x437 Mov
	Find(var_65_int, var_70_object); // 0x439 ObjFunc
	var_77_bool = var_70_object == 0; // 0x43b Not
	if(var_77_bool == 0) goto Label_1091; // 0x43c JumpB
	var_78_string = "Can't find diary parent with id: "; // 0x43d PushS
	var_79_int = var_78_string + var_65_int; // 0x43e Add
	Trace(var_79_int); // 0x43f Func
	var_63_bool = 0; // 0x441 MovB
	return 6; // 0x442 Return
	
Label_1091:
	AddChild(var_64_object); // 0x443 ObjFunc
	var_80_int = 7; // 0x445 PushI
	SendWorldWndMessage(var_80_int); // 0x446 Func
	GetCategory(var_71_int); // 0x448 ObjFunc
	SetDiarySection(var_71_int); // 0x44a Func
	var_63_bool = 0; // 0x44c MovB
	return 6; // 0x44d Return
}


func_949(var_46_object)
{
	var_48_string = "white plet 3 is given"; // 0x3b6 PushS
	Trace(var_48_string); // 0x3b7 Func
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0; // 0x3b9 PushV
	var_49_object = var_46_object; // 0x3ba Mov
	var_50_string = "grass_white_plet"; // 0x3bb MovS
	var_51_int = 3; // 0x3bc MovI
	func_860(var_49_object, var_50_string, var_51_int); // 0x3bd NEW_2
	return 0; // 0x3bf Return
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


func_824(var_115_int, var_116_string)
{
	var_117_int = 0; var_118_int = 0; // 0x338 PushV
	GetVariable(var_116_string, var_118_int); // 0x339 Func
	var_115_int = var_118_int; // 0x33b Mov
	return 2; // 0x33c Return
}


func_829(var_41_int, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x33d PushV
	CreateIntVector(var_44_object); // 0x33e Func
	add(var_41_int); // 0x340 ObjFunc
	add(var_42_int); // 0x342 ObjFunc
	var_45_int = 3; // 0x344 PushI
	SendWorldWndMessage(var_45_int, var_44_object); // 0x345 Func
	return 2; // 0x347 Return
}


func_960(var_22_object)
{
	var_24_string = "savyur 3 is given"; // 0x3c1 PushS
	Trace(var_24_string); // 0x3c2 Func
	var_25_object = Obj(); var_26_string = ""; var_27_int = 0; // 0x3c4 PushV
	var_25_object = var_22_object; // 0x3c5 Mov
	var_26_string = "grass_savyur"; // 0x3c6 MovS
	var_27_int = 3; // 0x3c7 MovI
	func_860(var_25_object, var_26_string, var_27_int); // 0x3c8 NEW_2
	return 0; // 0x3ca Return
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
	func_892(var_36_int); // 0x24f NEW_2
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
	func_885(var_58_string, var_59_int); // 0x26b NEW_2
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


func_841(var_31_object, var_32_int)
{
	var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; // 0x349 PushV
	GetItemID(var_36_int); // 0x34a ObjFunc
	var_39_string = "Category"; // 0x34c PushS
	GetInvItemProperty(var_37_int, var_36_int, var_39_string); // 0x34d Func
	AddItem(var_38_bool, var_31_object, var_37_int, var_32_int); // 0x34f ObjFunc
	var_40_bool = var_38_bool == 0; // 0x351 Not
	if(var_40_bool == 0) goto Label_854; // 0x352 JumpB
	DropItems(var_31_object, var_32_int); // 0x353 ObjFunc
	goto Label_859; // 0x355 Jump
	
Label_859:
	return 6; // 0x35b Return
	
Label_854:
	var_41_int = 0; var_42_int = 0; // 0x356 PushV
	var_41_int = var_36_int; // 0x357 Mov
	var_42_int = var_32_int; // 0x358 Mov
	func_829(var_41_int, var_42_int); // 0x359 NEW_2
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_146; // 0x4f JumpB
	var_92_string = ""; // 0x50 PushV
	var_92_string = "Neutral"; // 0x51 MovS
	func_176(var_86_object, var_92_string); // 0x52 NEW_2
	var_109_int = 518265; // 0x54 PushI
	SetMessage(var_109_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_110_bool = 0; // 0x59 PushV
	var_110_bool = 0; // 0x5a MovB
	var_111_bool = 0; // 0x5b PushV
	var_111_bool = 0; // 0x5c MovB
	var_112_bool = 0; // 0x5d PushV
	var_112_bool = 0; // 0x5e MovB
	var_113_bool = 0; var_114_object = Obj(); // 0x5f PushV
	var_114_object = var_1_object; // 0x60 MovT
	func_1025(var_114_object); // 0x61 NEW_2
	if(var_113_bool == 0) goto Label_107; // 0x63 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x64 PushV
	var_122_object = var_1_object; // 0x65 MovT
	func_1001(var_122_object); // 0x66 NEW_2
	var_127_bool = var_121_bool == 0; // 0x68 Not
	if(var_127_bool == 0) goto Label_107; // 0x69 JumpB
	var_112_bool = 1; // 0x6a MovB
	
Label_107:
	if(var_112_bool == 0) goto Label_115; // 0x6b JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x6c PushV
	var_129_object = var_1_object; // 0x6d MovT
	func_989(var_129_object); // 0x6e NEW_2
	var_134_bool = var_128_bool == 0; // 0x70 Not
	if(var_134_bool == 0) goto Label_115; // 0x71 JumpB
	var_111_bool = 1; // 0x72 MovB
	
Label_115:
	if(var_111_bool == 0) goto Label_122; // 0x73 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x74 PushV
	var_136_object = var_1_object; // 0x75 MovT
	func_1013(var_136_object); // 0x76 NEW_2
	if(var_135_bool == 0) goto Label_122; // 0x78 JumpB
	var_110_bool = 1; // 0x79 MovB
	
Label_122:
	if(var_110_bool == 0) goto Label_128; // 0x7a JumpB
	var_141_int = 518266; // 0x7b PushI
	var_142_int = 20687; // 0x7c PushI
	var_143_int = 19375; // 0x7d PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x7e TObjFunc
	
Label_128:
	var_144_bool = 0; var_145_object = Obj(); // 0x80 PushV
	var_145_object = var_1_object; // 0x81 MovT
	func_977(var_145_object); // 0x82 NEW_2
	if(var_144_bool == 0) goto Label_138; // 0x84 JumpB
	var_150_int = 527751; // 0x85 PushI
	var_151_int = 29118; // 0x86 PushI
	var_152_int = 29108; // 0x87 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x88 TObjFunc
	
Label_138:
	var_153_int = 518267; // 0x8a PushI
	var_154_int = -1; // 0x8b PushI
	var_155_int = 19376; // 0x8c PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x8d TObjFunc
	goto Label_146; // 0x8f Jump
	
Label_146:
	var_156_bool = 0; // 0x92 PushV
	func_917(var_156_bool); // 0x93 NEW_2
	if(var_156_bool == 0) goto Label_161; // 0x95 JumpB
	
Label_150:
	lshWaitForAnimEnd(); // 0x96 Func
	var_157_string = var_3_string; // 0x98 PushT
	if(var_157_string == 0) goto Label_155; // 0x99 JumpB
	goto Label_160; // 0x9a Jump
	
Label_160:
	goto Label_175; // 0xa0 Jump
	
Label_175:
	return 0; // 0xaf Return
	
Label_155:
	var_158_string = ""; // 0x9b PushV
	var_158_string = var_2_object; // 0x9c MovT
	func_765(var_158_string); // 0x9d NEW_2
	goto Label_150; // 0x9f Jump
	
Label_161:
	var_169_string = "all"; // 0xa1 PushS
	var_170_string = "idle"; // 0xa2 PushS
	PlayAnimation(var_169_string, var_170_string); // 0xa3 Func
	
Label_165:
	WaitForAnimEnd(); // 0xa5 Func
	var_171_string = var_3_string; // 0xa7 PushT
	if(var_171_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_170:
	var_172_string = "all"; // 0xaa PushS
	var_173_string = "idle"; // 0xab PushS
	PlayAnimation(var_172_string, var_173_string); // 0xac Func
	goto Label_165; // 0xae Jump
}


func_971()
{
	var_54_string = "playsound"; // 0x3cc PushS
	var_55_string = "giveitem"; // 0x3cd PushS
	TriggerWorld(var_54_string, var_55_string); // 0x3ce Func
	return 0; // 0x3d0 Return
}


func_1104(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x450 PushV
	var_79_string = "branch"; // 0x451 PushS
	GetVariable(var_79_string, var_78_int); // 0x452 Func
	var_80_int = 0; // 0x454 PushI
	var_81_bool = var_78_int == var_80_int; // 0x455 Eq
	if(var_81_bool == 0) goto Label_1114; // 0x456 JumpB
	var_76_int = 1; // 0x457 MovI
	return 2; // 0x458 Return
	
Label_1114:
	var_82_int = 1; // 0x45a PushI
	var_83_bool = var_78_int == var_82_int; // 0x45b Eq
	if(var_83_bool == 0) goto Label_1119; // 0x45c JumpB
	var_76_int = 2; // 0x45d MovI
	return 2; // 0x45e Return
	
Label_1119:
	var_76_int = 3; // 0x45f MovI
	return 2; // 0x460 Return
}


func_977(var_144_bool)
{
	var_146_int = 0; var_147_string = ""; // 0x3d2 PushV
	var_147_string = "b2q02"; // 0x3d3 MovS
	func_824(var_146_int, var_147_string); // 0x3d4 NEW_2
	var_148_int = 1; // 0x3d6 PushI
	var_149_bool = var_146_int == var_148_int; // 0x3d7 Eq
	if(var_149_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_144_bool = 1; // 0x3d9 MovB
	return 0; // 0x3da Return
	
Label_987:
	var_144_bool = 0; // 0x3db MovB
	return 0; // 0x3dc Return
}


func_860(var_25_object, var_26_string, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x35c PushV
	CreateInvItem(var_29_object); // 0x35d Func
	SetItemName(var_26_string); // 0x35f ObjFunc
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; // 0x361 PushV
	var_30_object = var_25_object; // 0x362 Mov
	var_31_object = var_29_object; // 0x363 Mov
	var_32_int = var_27_int; // 0x364 Mov
	func_841(var_31_object, var_32_int); // 0x365 NEW_2
	return 2; // 0x367 Return
}


func_989(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x3de PushV
	var_131_string = "b2q02"; // 0x3df MovS
	func_824(var_130_int, var_131_string); // 0x3e0 NEW_2
	var_132_int = 2; // 0x3e2 PushI
	var_133_bool = var_130_int == var_132_int; // 0x3e3 Eq
	if(var_133_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_128_bool = 1; // 0x3e5 MovB
	return 0; // 0x3e6 Return
	
Label_999:
	var_128_bool = 0; // 0x3e7 MovB
	return 0; // 0x3e8 Return
}


func_1001(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x3ea PushV
	var_124_string = "b2q02"; // 0x3eb MovS
	func_824(var_123_int, var_124_string); // 0x3ec NEW_2
	var_125_int = -1; // 0x3ee PushI
	var_126_bool = var_123_int == var_125_int; // 0x3ef Eq
	if(var_126_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_121_bool = 1; // 0x3f1 MovB
	return 0; // 0x3f2 Return
	
Label_1011:
	var_121_bool = 0; // 0x3f3 MovB
	return 0; // 0x3f4 Return
}


func_873(var_81_bool, var_82_string, var_83_string)
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x369 PushV
	FindActor(var_85_object, var_82_string); // 0x36a Func
	var_86_bool = var_85_object == 0; // 0x36c NullEq
	if(var_86_bool == 0) goto Label_880; // 0x36d JumpB
	var_81_bool = 0; // 0x36e MovB
	return 2; // 0x36f Return
	
Label_880:
	Trigger(var_85_object, var_83_string); // 0x370 Func
	var_81_bool = 1; // 0x372 MovB
	return 2; // 0x373 Return
}


func_748()
{
	var_176_bool = 0; var_177_bool = 0; // 0x2ec PushV
	CameraSwitchToNormal(); // 0x2ed Func
	var_178_bool = 0; // 0x2ef PushV
	func_917(var_178_bool); // 0x2f0 NEW_2
	if(var_178_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_764; // 0x2f3 Jump
	
Label_764:
	return 2; // 0x2fc Return
	
Label_756:
	var_179_string = "head"; // 0x2f4 PushS
	HasAnimationTrack(var_177_bool, var_179_string); // 0x2f5 Func
	var_180_bool = var_177_bool; // 0x2f7 Push
	if(var_180_bool == 0) goto Label_764; // 0x2f8 JumpB
	var_181_string = "head"; // 0x2f9 PushS
	UnlookAsync(var_181_string); // 0x2fa Func
}


func_1013(var_135_bool)
{
	var_137_int = 0; var_138_string = ""; // 0x3f6 PushV
	var_138_string = "b2q02"; // 0x3f7 MovS
	func_824(var_137_int, var_138_string); // 0x3f8 NEW_2
	var_139_int = 1000; // 0x3fa PushI
	var_140_bool = var_137_int == var_139_int; // 0x3fb Eq
	if(var_140_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_135_bool = 1; // 0x3fd MovB
	return 0; // 0x3fe Return
	
Label_1023:
	var_135_bool = 0; // 0x3ff MovB
	return 0; // 0x400 Return
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


func_885(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x375 PushV
	var_45_string = "idle"; // 0x376 MovS
	var_46_int = var_43_int; // 0x377 Push
	if(var_46_int == 0) goto Label_890; // 0x378 JumpB
	var_45_string = var_45_string + var_43_int; // 0x379 Add2
	
Label_890:
	var_42_string = var_45_string; // 0x37a Mov
	return 2; // 0x37b Return
}


func_892(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x37c PushV
	var_39_int = 0; // 0x37d MovI
	
Label_894:
	var_41_string = "all"; // 0x37e PushS
	var_42_string = ""; var_43_int = 0; // 0x37f PushV
	var_43_int = var_39_int; // 0x380 Mov
	func_885(var_42_string, var_43_int); // 0x381 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x383 Func
	var_47_bool = var_40_bool == 0; // 0x385 Not
	if(var_47_bool == 0) goto Label_904; // 0x386 JumpB
	goto Label_907; // 0x387 Jump
	
Label_907:
	var_36_int = var_39_int; // 0x38b Mov
	return 4; // 0x38c Return
	
Label_904:
	var_48_int = 1; // 0x388 PushI
	var_39_int = var_39_int + var_48_int; // 0x389 Add2
	goto Label_894; // 0x38a Jump
}


func_765(var_158_string)
{
	var_159_bool = 0; var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_float = 0; var_164_float = 0; // 0x2fd PushV
	lshHasAnimation(var_162_bool, var_158_string); // 0x2fe Func
	var_165_bool = var_162_bool; // 0x300 Push
	if(var_165_bool == 0) goto Label_776; // 0x301 JumpB
	lshGetAnimTimes(var_158_string, var_163_float, var_164_float); // 0x302 Func
	var_166_bool = 0; // 0x304 PushB
	lshPlayAnimation(var_163_float, var_164_float, var_166_bool); // 0x305 Func
	goto Label_780; // 0x307 Jump
	
Label_780:
	return 6; // 0x30c Return
	
Label_776:
	var_167_string = "Can't find lsh animation : "; // 0x308 PushS
	var_168_int = var_167_string + var_158_string; // 0x309 Add
	Trace(var_168_int); // 0x30a Func
}


