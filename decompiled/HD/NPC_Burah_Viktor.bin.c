task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0xaf PushI
	if(var_30_int == 0) goto Label_261; // 0xb0 JumpB
	func_2001(); // 0xb2 NEW_2
	var_32_int = 19184; // 0xb4 PushI
	var_33_bool = var_28_cvector == var_32_int; // 0xb5 Eq
	if(var_33_bool == 0) goto Label_203; // 0xb6 JumpB
	var_34_string = ""; // 0xb7 PushV
	var_34_string = "Neutral"; // 0xb8 MovS
	func_152(var_29_cvector, var_34_string); // 0xb9 NEW_2
	var_51_int = 518051; // 0xbb PushI
	SetMessage(var_51_int); // 0xbc TObjFunc
	ClearReplies(); // 0xbe TObjFunc
	var_52_int = 518052; // 0xc0 PushI
	var_53_int = 29827; // 0xc1 PushI
	var_54_int = 19185; // 0xc2 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xc3 TObjFunc
	var_55_int = 528440; // 0xc5 PushI
	var_56_int = -1; // 0xc6 PushI
	var_57_int = 29826; // 0xc7 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xc8 TObjFunc
	return 0; // 0xca Return
	
Label_203:
	var_58_int = 29827; // 0xcb PushI
	var_59_bool = var_28_cvector == var_58_int; // 0xcc Eq
	if(var_59_bool == 0) goto Label_226; // 0xcd JumpB
	var_60_string = ""; // 0xce PushV
	var_60_string = "Neutral"; // 0xcf MovS
	func_152(var_29_cvector, var_60_string); // 0xd0 NEW_2
	var_61_int = 528441; // 0xd2 PushI
	SetMessage(var_61_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_62_int = 528442; // 0xd7 PushI
	var_63_int = 29830; // 0xd8 PushI
	var_64_int = 29828; // 0xd9 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xda TObjFunc
	var_65_int = 528443; // 0xdc PushI
	var_66_int = -1; // 0xdd PushI
	var_67_int = 29829; // 0xde PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_68_int = 29830; // 0xe2 PushI
	var_69_bool = var_28_cvector == var_68_int; // 0xe3 Eq
	if(var_69_bool == 0) goto Label_249; // 0xe4 JumpB
	var_70_string = ""; // 0xe5 PushV
	var_70_string = "Neutral"; // 0xe6 MovS
	func_152(var_29_cvector, var_70_string); // 0xe7 NEW_2
	var_71_int = 528444; // 0xe9 PushI
	SetMessage(var_71_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_72_int = 528445; // 0xee PushI
	var_73_int = -1; // 0xef PushI
	var_74_int = 29831; // 0xf0 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xf1 TObjFunc
	var_75_int = 528446; // 0xf3 PushI
	var_76_int = -1; // 0xf4 PushI
	var_77_int = 29832; // 0xf5 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_3_string = 1; // 0xf9 TMovB
	var_78_bool = 0; // 0xfa PushV
	func_2086(var_78_bool); // 0xfb NEW_2
	if(var_78_bool == 0) goto Label_257; // 0xfd JumpB
	lshStopAnimation(); // 0xfe Func
	goto Label_259; // 0x100 Jump
	
Label_259:
	return 0; // 0x103 Return
	
Label_257:
	StopAnimation(); // 0x101 Func
	
Label_261:
	return 0; // 0x105 Return
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x1bc PushI
	if(var_30_int == 0) goto Label_720; // 0x1bd JumpB
	func_2001(); // 0x1bf NEW_2
	var_32_int = 22234; // 0x1c1 PushI
	var_33_bool = var_29_cvector == var_32_int; // 0x1c2 Eq
	if(var_33_bool == 0) goto Label_457; // 0x1c3 JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x1c4 PushV
	var_34_object = var_1_object; // 0x1c5 MovT
	var_35_object = var_0_object; // 0x1c6 MovT
	func_2088(); // 0x1c7 NEW_2
	
Label_457:
	var_83_int = 22233; // 0x1c9 PushI
	var_84_bool = var_28_cvector == var_83_int; // 0x1ca Eq
	if(var_84_bool == 0) goto Label_500; // 0x1cb JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x1cc PushV
	var_86_object = var_1_object; // 0x1cd MovT
	func_2181(var_86_object); // 0x1ce NEW_2
	if(var_85_bool == 0) goto Label_485; // 0x1d0 JumpB
	var_93_string = ""; // 0x1d1 PushV
	var_93_string = "Anger"; // 0x1d2 MovS
	func_421(var_29_cvector, var_93_string); // 0x1d3 NEW_2
	var_110_int = 521037; // 0x1d5 PushI
	SetMessage(var_110_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_111_int = 528490; // 0x1da PushI
	var_112_int = 29880; // 0x1db PushI
	var_113_int = 29879; // 0x1dc PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x1dd TObjFunc
	var_114_int = 528510; // 0x1df PushI
	var_115_int = 29882; // 0x1e0 PushI
	var_116_int = 29899; // 0x1e1 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1e2 TObjFunc
	return 0; // 0x1e4 Return
	
Label_485:
	var_117_string = ""; // 0x1e5 PushV
	var_117_string = "Neutral"; // 0x1e6 MovS
	func_421(var_29_cvector, var_117_string); // 0x1e7 NEW_2
	var_118_int = 521039; // 0x1e9 PushI
	SetMessage(var_118_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_119_int = 521040; // 0x1ee PushI
	var_120_int = -1; // 0x1ef PushI
	var_121_int = 22236; // 0x1f0 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_122_int = 29880; // 0x1f4 PushI
	var_123_bool = var_28_cvector == var_122_int; // 0x1f5 Eq
	if(var_123_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_124_string = ""; // 0x1f7 PushV
	var_124_string = "Anger"; // 0x1f8 MovS
	func_421(var_29_cvector, var_124_string); // 0x1f9 NEW_2
	var_125_int = 528491; // 0x1fb PushI
	SetMessage(var_125_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_126_int = 528492; // 0x200 PushI
	var_127_int = 29882; // 0x201 PushI
	var_128_int = 29881; // 0x202 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_129_int = 29882; // 0x206 PushI
	var_130_bool = var_28_cvector == var_129_int; // 0x207 Eq
	if(var_130_bool == 0) goto Label_541; // 0x208 JumpB
	var_131_string = ""; // 0x209 PushV
	var_131_string = "Confusion"; // 0x20a MovS
	func_421(var_29_cvector, var_131_string); // 0x20b NEW_2
	var_132_int = 528493; // 0x20d PushI
	SetMessage(var_132_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_133_int = 528494; // 0x212 PushI
	var_134_int = 29884; // 0x213 PushI
	var_135_int = 29883; // 0x214 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x215 TObjFunc
	var_136_int = 528511; // 0x217 PushI
	var_137_int = 29902; // 0x218 PushI
	var_138_int = 29901; // 0x219 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_139_int = 29902; // 0x21d PushI
	var_140_bool = var_28_cvector == var_139_int; // 0x21e Eq
	if(var_140_bool == 0) goto Label_559; // 0x21f JumpB
	var_141_string = ""; // 0x220 PushV
	var_141_string = "Fear"; // 0x221 MovS
	func_421(var_29_cvector, var_141_string); // 0x222 NEW_2
	var_142_int = 528512; // 0x224 PushI
	SetMessage(var_142_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_143_int = 528513; // 0x229 PushI
	var_144_int = 29904; // 0x22a PushI
	var_145_int = 29903; // 0x22b PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_146_int = 29904; // 0x22f PushI
	var_147_bool = var_28_cvector == var_146_int; // 0x230 Eq
	if(var_147_bool == 0) goto Label_577; // 0x231 JumpB
	var_148_string = ""; // 0x232 PushV
	var_148_string = "Fear"; // 0x233 MovS
	func_421(var_29_cvector, var_148_string); // 0x234 NEW_2
	var_149_int = 528514; // 0x236 PushI
	SetMessage(var_149_int); // 0x237 TObjFunc
	ClearReplies(); // 0x239 TObjFunc
	var_150_int = 528515; // 0x23b PushI
	var_151_int = 29886; // 0x23c PushI
	var_152_int = 29905; // 0x23d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x23e TObjFunc
	return 0; // 0x240 Return
	
Label_577:
	var_153_int = 29884; // 0x241 PushI
	var_154_bool = var_28_cvector == var_153_int; // 0x242 Eq
	if(var_154_bool == 0) goto Label_595; // 0x243 JumpB
	var_155_string = ""; // 0x244 PushV
	var_155_string = "Confusion"; // 0x245 MovS
	func_421(var_29_cvector, var_155_string); // 0x246 NEW_2
	var_156_int = 528495; // 0x248 PushI
	SetMessage(var_156_int); // 0x249 TObjFunc
	ClearReplies(); // 0x24b TObjFunc
	var_157_int = 528496; // 0x24d PushI
	var_158_int = 29886; // 0x24e PushI
	var_159_int = 29885; // 0x24f PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_160_int = 29886; // 0x253 PushI
	var_161_bool = var_28_cvector == var_160_int; // 0x254 Eq
	if(var_161_bool == 0) goto Label_613; // 0x255 JumpB
	var_162_string = ""; // 0x256 PushV
	var_162_string = "Fear"; // 0x257 MovS
	func_421(var_29_cvector, var_162_string); // 0x258 NEW_2
	var_163_int = 528497; // 0x25a PushI
	SetMessage(var_163_int); // 0x25b TObjFunc
	ClearReplies(); // 0x25d TObjFunc
	var_164_int = 528498; // 0x25f PushI
	var_165_int = 29888; // 0x260 PushI
	var_166_int = 29887; // 0x261 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x262 TObjFunc
	return 0; // 0x264 Return
	
Label_613:
	var_167_int = 29888; // 0x265 PushI
	var_168_bool = var_28_cvector == var_167_int; // 0x266 Eq
	if(var_168_bool == 0) goto Label_631; // 0x267 JumpB
	var_169_string = ""; // 0x268 PushV
	var_169_string = "Fear"; // 0x269 MovS
	func_421(var_29_cvector, var_169_string); // 0x26a NEW_2
	var_170_int = 528499; // 0x26c PushI
	SetMessage(var_170_int); // 0x26d TObjFunc
	ClearReplies(); // 0x26f TObjFunc
	var_171_int = 528500; // 0x271 PushI
	var_172_int = 29890; // 0x272 PushI
	var_173_int = 29889; // 0x273 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_174_int = 29890; // 0x277 PushI
	var_175_bool = var_28_cvector == var_174_int; // 0x278 Eq
	if(var_175_bool == 0) goto Label_654; // 0x279 JumpB
	var_176_string = ""; // 0x27a PushV
	var_176_string = "Neutral"; // 0x27b MovS
	func_421(var_29_cvector, var_176_string); // 0x27c NEW_2
	var_177_int = 528501; // 0x27e PushI
	SetMessage(var_177_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_178_int = 528504; // 0x283 PushI
	var_179_int = 29894; // 0x284 PushI
	var_180_int = 29893; // 0x285 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x286 TObjFunc
	var_181_int = 528517; // 0x288 PushI
	var_182_int = 29896; // 0x289 PushI
	var_183_int = 29908; // 0x28a PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x28b TObjFunc
	return 0; // 0x28d Return
	
Label_654:
	var_184_int = 29894; // 0x28e PushI
	var_185_bool = var_28_cvector == var_184_int; // 0x28f Eq
	if(var_185_bool == 0) goto Label_672; // 0x290 JumpB
	var_186_string = ""; // 0x291 PushV
	var_186_string = "Neutral"; // 0x292 MovS
	func_421(var_29_cvector, var_186_string); // 0x293 NEW_2
	var_187_int = 528505; // 0x295 PushI
	SetMessage(var_187_int); // 0x296 TObjFunc
	ClearReplies(); // 0x298 TObjFunc
	var_188_int = 528506; // 0x29a PushI
	var_189_int = 29896; // 0x29b PushI
	var_190_int = 29895; // 0x29c PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x29d TObjFunc
	return 0; // 0x29f Return
	
Label_672:
	var_191_int = 29896; // 0x2a0 PushI
	var_192_bool = var_28_cvector == var_191_int; // 0x2a1 Eq
	if(var_192_bool == 0) goto Label_690; // 0x2a2 JumpB
	var_193_string = ""; // 0x2a3 PushV
	var_193_string = "Surprise"; // 0x2a4 MovS
	func_421(var_29_cvector, var_193_string); // 0x2a5 NEW_2
	var_194_int = 528507; // 0x2a7 PushI
	SetMessage(var_194_int); // 0x2a8 TObjFunc
	ClearReplies(); // 0x2aa TObjFunc
	var_195_int = 528508; // 0x2ac PushI
	var_196_int = 29898; // 0x2ad PushI
	var_197_int = 29897; // 0x2ae PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_198_int = 29898; // 0x2b2 PushI
	var_199_bool = var_28_cvector == var_198_int; // 0x2b3 Eq
	if(var_199_bool == 0) goto Label_708; // 0x2b4 JumpB
	var_200_string = ""; // 0x2b5 PushV
	var_200_string = "Surprise"; // 0x2b6 MovS
	func_421(var_29_cvector, var_200_string); // 0x2b7 NEW_2
	var_201_int = 528509; // 0x2b9 PushI
	SetMessage(var_201_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_202_int = 521038; // 0x2be PushI
	var_203_int = -1; // 0x2bf PushI
	var_204_int = 22234; // 0x2c0 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_3_string = 1; // 0x2c4 TMovB
	var_205_bool = 0; // 0x2c5 PushV
	func_2086(var_205_bool); // 0x2c6 NEW_2
	if(var_205_bool == 0) goto Label_716; // 0x2c8 JumpB
	lshStopAnimation(); // 0x2c9 Func
	goto Label_718; // 0x2cb Jump
	
Label_718:
	return 0; // 0x2ce Return
	
Label_716:
	StopAnimation(); // 0x2cc Func
	
Label_720:
	return 0; // 0x2d0 Return
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x396 PushI
	if(var_30_int == 0) goto Label_1152; // 0x397 JumpB
	func_2001(); // 0x399 NEW_2
	var_32_int = 22516; // 0x39b PushI
	var_33_bool = var_29_cvector == var_32_int; // 0x39c Eq
	if(var_33_bool == 0) goto Label_941; // 0x39d JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x39e PushV
	var_34_object = var_1_object; // 0x39f MovT
	var_35_object = var_0_object; // 0x3a0 MovT
	func_2122(); // 0x3a1 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x3a3 PushV
	var_52_object = var_1_object; // 0x3a4 MovT
	var_53_object = var_0_object; // 0x3a5 MovT
	func_2151(); // 0x3a6 NEW_2
	var_56_object = Obj(); var_57_object = Obj(); // 0x3a8 PushV
	var_56_object = var_1_object; // 0x3a9 MovT
	var_57_object = var_0_object; // 0x3aa MovT
	func_2138(); // 0x3ab NEW_2
	
Label_941:
	var_68_int = 29846; // 0x3ad PushI
	var_69_bool = var_29_cvector == var_68_int; // 0x3ae Eq
	if(var_69_bool == 0) goto Label_959; // 0x3af JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x3b0 PushV
	var_70_object = var_1_object; // 0x3b1 MovT
	var_71_object = var_0_object; // 0x3b2 MovT
	func_2122(); // 0x3b3 NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0x3b5 PushV
	var_72_object = var_1_object; // 0x3b6 MovT
	var_73_object = var_0_object; // 0x3b7 MovT
	func_2151(); // 0x3b8 NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0x3ba PushV
	var_74_object = var_1_object; // 0x3bb MovT
	var_75_object = var_0_object; // 0x3bc MovT
	func_2138(); // 0x3bd NEW_2
	
Label_959:
	var_76_int = 22515; // 0x3bf PushI
	var_77_bool = var_29_cvector == var_76_int; // 0x3c0 Eq
	if(var_77_bool == 0) goto Label_977; // 0x3c1 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x3c2 PushV
	var_78_object = var_1_object; // 0x3c3 MovT
	var_79_object = var_0_object; // 0x3c4 MovT
	func_2122(); // 0x3c5 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x3c7 PushV
	var_80_object = var_1_object; // 0x3c8 MovT
	var_81_object = var_0_object; // 0x3c9 MovT
	func_2151(); // 0x3ca NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0x3cc PushV
	var_82_object = var_1_object; // 0x3cd MovT
	var_83_object = var_0_object; // 0x3ce MovT
	func_2138(); // 0x3cf NEW_2
	
Label_977:
	var_84_int = 22514; // 0x3d1 PushI
	var_85_bool = var_28_cvector == var_84_int; // 0x3d2 Eq
	if(var_85_bool == 0) goto Label_1035; // 0x3d3 JumpB
	var_86_bool = 0; // 0x3d4 PushV
	var_86_bool = 0; // 0x3d5 MovB
	var_87_bool = 0; var_88_object = Obj(); // 0x3d6 PushV
	var_88_object = var_1_object; // 0x3d7 MovT
	func_2157(var_88_object); // 0x3d8 NEW_2
	var_95_bool = var_87_bool == 0; // 0x3da Not
	if(var_95_bool == 0) goto Label_994; // 0x3db JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x3dc PushV
	var_97_object = var_1_object; // 0x3dd MovT
	func_2169(var_97_object); // 0x3de NEW_2
	if(var_96_bool == 0) goto Label_994; // 0x3e0 JumpB
	var_86_bool = 1; // 0x3e1 MovB
	
Label_994:
	if(var_86_bool == 0) goto Label_1020; // 0x3e2 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x3e3 PushV
	var_102_object = var_1_object; // 0x3e4 MovT
	var_103_object = var_0_object; // 0x3e5 MovT
	func_2116(); // 0x3e6 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x3e8 PushV
	var_106_object = var_1_object; // 0x3e9 MovT
	var_107_object = var_0_object; // 0x3ea MovT
	func_2145(); // 0x3eb NEW_2
	var_110_string = ""; // 0x3ed PushV
	var_110_string = "Neutral"; // 0x3ee MovS
	func_895(var_29_cvector, var_110_string); // 0x3ef NEW_2
	var_127_int = 521320; // 0x3f1 PushI
	SetMessage(var_127_int); // 0x3f2 TObjFunc
	ClearReplies(); // 0x3f4 TObjFunc
	var_128_int = 528448; // 0x3f6 PushI
	var_129_int = 29835; // 0x3f7 PushI
	var_130_int = 29834; // 0x3f8 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x3f9 TObjFunc
	return 0; // 0x3fb Return
	
Label_1020:
	var_131_string = ""; // 0x3fc PushV
	var_131_string = "Neutral"; // 0x3fd MovS
	func_895(var_29_cvector, var_131_string); // 0x3fe NEW_2
	var_132_int = 521323; // 0x400 PushI
	SetMessage(var_132_int); // 0x401 TObjFunc
	ClearReplies(); // 0x403 TObjFunc
	var_133_int = 521324; // 0x405 PushI
	var_134_int = -1; // 0x406 PushI
	var_135_int = 22518; // 0x407 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x408 TObjFunc
	return 0; // 0x40a Return
	
Label_1035:
	var_136_int = 29835; // 0x40b PushI
	var_137_bool = var_28_cvector == var_136_int; // 0x40c Eq
	if(var_137_bool == 0) goto Label_1053; // 0x40d JumpB
	var_138_string = ""; // 0x40e PushV
	var_138_string = "Neutral"; // 0x40f MovS
	func_895(var_29_cvector, var_138_string); // 0x410 NEW_2
	var_139_int = 528449; // 0x412 PushI
	SetMessage(var_139_int); // 0x413 TObjFunc
	ClearReplies(); // 0x415 TObjFunc
	var_140_int = 528450; // 0x417 PushI
	var_141_int = 29837; // 0x418 PushI
	var_142_int = 29836; // 0x419 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x41a TObjFunc
	return 0; // 0x41c Return
	
Label_1053:
	var_143_int = 29837; // 0x41d PushI
	var_144_bool = var_28_cvector == var_143_int; // 0x41e Eq
	if(var_144_bool == 0) goto Label_1076; // 0x41f JumpB
	var_145_string = ""; // 0x420 PushV
	var_145_string = "Neutral"; // 0x421 MovS
	func_895(var_29_cvector, var_145_string); // 0x422 NEW_2
	var_146_int = 528451; // 0x424 PushI
	SetMessage(var_146_int); // 0x425 TObjFunc
	ClearReplies(); // 0x427 TObjFunc
	var_147_int = 528452; // 0x429 PushI
	var_148_int = 29840; // 0x42a PushI
	var_149_int = 29838; // 0x42b PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x42c TObjFunc
	var_150_int = 528453; // 0x42e PushI
	var_151_int = 29840; // 0x42f PushI
	var_152_int = 29839; // 0x430 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x431 TObjFunc
	return 0; // 0x433 Return
	
Label_1076:
	var_153_int = 29840; // 0x434 PushI
	var_154_bool = var_28_cvector == var_153_int; // 0x435 Eq
	if(var_154_bool == 0) goto Label_1099; // 0x436 JumpB
	var_155_string = ""; // 0x437 PushV
	var_155_string = "Neutral"; // 0x438 MovS
	func_895(var_29_cvector, var_155_string); // 0x439 NEW_2
	var_156_int = 528454; // 0x43b PushI
	SetMessage(var_156_int); // 0x43c TObjFunc
	ClearReplies(); // 0x43e TObjFunc
	var_157_int = 528455; // 0x440 PushI
	var_158_int = 29842; // 0x441 PushI
	var_159_int = 29841; // 0x442 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x443 TObjFunc
	var_160_int = 521321; // 0x445 PushI
	var_161_int = -1; // 0x446 PushI
	var_162_int = 22515; // 0x447 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x448 TObjFunc
	return 0; // 0x44a Return
	
Label_1099:
	var_163_int = 29842; // 0x44b PushI
	var_164_bool = var_28_cvector == var_163_int; // 0x44c Eq
	if(var_164_bool == 0) goto Label_1117; // 0x44d JumpB
	var_165_string = ""; // 0x44e PushV
	var_165_string = "Neutral"; // 0x44f MovS
	func_895(var_29_cvector, var_165_string); // 0x450 NEW_2
	var_166_int = 528456; // 0x452 PushI
	SetMessage(var_166_int); // 0x453 TObjFunc
	ClearReplies(); // 0x455 TObjFunc
	var_167_int = 528457; // 0x457 PushI
	var_168_int = 29845; // 0x458 PushI
	var_169_int = 29844; // 0x459 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x45a TObjFunc
	return 0; // 0x45c Return
	
Label_1117:
	var_170_int = 29845; // 0x45d PushI
	var_171_bool = var_28_cvector == var_170_int; // 0x45e Eq
	if(var_171_bool == 0) goto Label_1140; // 0x45f JumpB
	var_172_string = ""; // 0x460 PushV
	var_172_string = "Neutral"; // 0x461 MovS
	func_895(var_29_cvector, var_172_string); // 0x462 NEW_2
	var_173_int = 528458; // 0x464 PushI
	SetMessage(var_173_int); // 0x465 TObjFunc
	ClearReplies(); // 0x467 TObjFunc
	var_174_int = 521322; // 0x469 PushI
	var_175_int = -1; // 0x46a PushI
	var_176_int = 22516; // 0x46b PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x46c TObjFunc
	var_177_int = 528459; // 0x46e PushI
	var_178_int = -1; // 0x46f PushI
	var_179_int = 29846; // 0x470 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x471 TObjFunc
	return 0; // 0x473 Return
	
Label_1140:
	var_3_string = 1; // 0x474 TMovB
	var_180_bool = 0; // 0x475 PushV
	func_2086(var_180_bool); // 0x476 NEW_2
	if(var_180_bool == 0) goto Label_1148; // 0x478 JumpB
	lshStopAnimation(); // 0x479 Func
	goto Label_1150; // 0x47b Jump
	
Label_1150:
	return 0; // 0x47e Return
	
Label_1148:
	StopAnimation(); // 0x47c Func
	
Label_1152:
	return 0; // 0x480 Return
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x528 PushI
	if(var_30_int == 0) goto Label_1411; // 0x529 JumpB
	func_2001(); // 0x52b NEW_2
	var_32_int = 36906; // 0x52d PushI
	var_33_bool = var_28_cvector == var_32_int; // 0x52e Eq
	if(var_33_bool == 0) goto Label_1353; // 0x52f JumpB
	var_34_string = ""; // 0x530 PushV
	var_34_string = "Neutral"; // 0x531 MovS
	func_1297(var_29_cvector, var_34_string); // 0x532 NEW_2
	var_51_int = 535231; // 0x534 PushI
	SetMessage(var_51_int); // 0x535 TObjFunc
	ClearReplies(); // 0x537 TObjFunc
	var_52_int = 535232; // 0x539 PushI
	var_53_int = 36953; // 0x53a PushI
	var_54_int = 36907; // 0x53b PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x53c TObjFunc
	var_55_int = 535233; // 0x53e PushI
	var_56_int = -1; // 0x53f PushI
	var_57_int = 36908; // 0x540 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x541 TObjFunc
	var_58_int = 535280; // 0x543 PushI
	var_59_int = -1; // 0x544 PushI
	var_60_int = 36956; // 0x545 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x546 TObjFunc
	return 0; // 0x548 Return
	
Label_1353:
	var_61_int = 36953; // 0x549 PushI
	var_62_bool = var_28_cvector == var_61_int; // 0x54a Eq
	if(var_62_bool == 0) goto Label_1376; // 0x54b JumpB
	var_63_string = ""; // 0x54c PushV
	var_63_string = "Neutral"; // 0x54d MovS
	func_1297(var_29_cvector, var_63_string); // 0x54e NEW_2
	var_64_int = 535277; // 0x550 PushI
	SetMessage(var_64_int); // 0x551 TObjFunc
	ClearReplies(); // 0x553 TObjFunc
	var_65_int = 535278; // 0x555 PushI
	var_66_int = 36957; // 0x556 PushI
	var_67_int = 36954; // 0x557 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x558 TObjFunc
	var_68_int = 535279; // 0x55a PushI
	var_69_int = 36957; // 0x55b PushI
	var_70_int = 36955; // 0x55c PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x55d TObjFunc
	return 0; // 0x55f Return
	
Label_1376:
	var_71_int = 36957; // 0x560 PushI
	var_72_bool = var_28_cvector == var_71_int; // 0x561 Eq
	if(var_72_bool == 0) goto Label_1399; // 0x562 JumpB
	var_73_string = ""; // 0x563 PushV
	var_73_string = "Neutral"; // 0x564 MovS
	func_1297(var_29_cvector, var_73_string); // 0x565 NEW_2
	var_74_int = 535281; // 0x567 PushI
	SetMessage(var_74_int); // 0x568 TObjFunc
	ClearReplies(); // 0x56a TObjFunc
	var_75_int = 535282; // 0x56c PushI
	var_76_int = -1; // 0x56d PushI
	var_77_int = 36958; // 0x56e PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x56f TObjFunc
	var_78_int = 535283; // 0x571 PushI
	var_79_int = -1; // 0x572 PushI
	var_80_int = 36959; // 0x573 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x574 TObjFunc
	return 0; // 0x576 Return
	
Label_1399:
	var_3_string = 1; // 0x577 TMovB
	var_81_bool = 0; // 0x578 PushV
	func_2086(var_81_bool); // 0x579 NEW_2
	if(var_81_bool == 0) goto Label_1407; // 0x57b JumpB
	lshStopAnimation(); // 0x57c Func
	goto Label_1409; // 0x57e Jump
	
Label_1409:
	return 0; // 0x581 Return
	
Label_1407:
	StopAnimation(); // 0x57f Func
	
Label_1411:
	return 0; // 0x583 Return
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_bool, var_28_cvector, var_29_cvector)
{
	var_30_int = 1; // 0x626 PushI
	if(var_30_int == 0) goto Label_1614; // 0x627 JumpB
	func_2001(); // 0x629 NEW_2
	var_32_int = 42563; // 0x62b PushI
	var_33_bool = var_28_cvector == var_32_int; // 0x62c Eq
	if(var_33_bool == 0) goto Label_1602; // 0x62d JumpB
	var_34_string = ""; // 0x62e PushV
	var_34_string = "Neutral"; // 0x62f MovS
	func_1551(var_29_cvector, var_34_string); // 0x630 NEW_2
	var_51_int = 540554; // 0x632 PushI
	SetMessage(var_51_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_52_int = 540555; // 0x637 PushI
	var_53_int = -1; // 0x638 PushI
	var_54_int = 42564; // 0x639 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x63a TObjFunc
	var_55_int = 540794; // 0x63c PushI
	var_56_int = -1; // 0x63d PushI
	var_57_int = 42843; // 0x63e PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x63f TObjFunc
	return 0; // 0x641 Return
	
Label_1602:
	var_3_string = 1; // 0x642 TMovB
	var_58_bool = 0; // 0x643 PushV
	func_2086(var_58_bool); // 0x644 NEW_2
	if(var_58_bool == 0) goto Label_1610; // 0x646 JumpB
	lshStopAnimation(); // 0x647 Func
	goto Label_1612; // 0x649 Jump
	
Label_1612:
	return 0; // 0x64c Return
	
Label_1610:
	StopAnimation(); // 0x64a Func
	
Label_1614:
	return 0; // 0x64e Return
}


task_11_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_string)
{
	var_29_string = "icot_viktor_NPC_Trigger"; // 0x657 PushS
	var_30_bool = var_28_string == var_29_string; // 0x658 Eq
	if(var_30_bool == 0) goto Label_1629; // 0x659 JumpB
	func_1669(var_28_string); // 0x65b NEW_2
	
Label_1629:
	return 0; // 0x65d Return
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	TaskCall(0); // 0x690 TaskCall
	func_0(); // 0x691 NEW_2
	TaskReturn(); // 0x692 TaskReturn
	func_1658(var_25_bool, var_26_cvector, var_27_cvector); // 0x695 NEW_2
	return 0; // 0x697 Return
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x698 PushV
	var_31_object = var_0_object; // 0x699 PushT
	if(var_31_object == 0) goto Label_1705; // 0x69a JumpB
	IsOverrideActive(var_30_bool); // 0x69b Func
	var_32_bool = var_30_bool == 0; // 0x69d Not
	if(var_32_bool == 0) goto Label_1705; // 0x69e JumpB
	EventDisable(0); // 0x69f EventDisable
	var_33_bool = 0; var_34_object = Obj(); // 0x6a0 PushV
	var_34_object = var_28_object; // 0x6a1 Mov
	func_1716(var_34_object); // 0x6a2 NEW_2
	EventEnable(0); // 0x6a4 EventEnable
	var_47_object = Obj(); // 0x6a5 PushV
	var_47_object = var_28_object; // 0x6a6 Mov
	func_2281(var_47_object); // 0x6a7 NEW_2
	
Label_1705:
	return 2; // 0x6a9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_bool, var_26_cvector, var_27_cvector)
{
	var_28_bool = GlobalVars[1]; // 0x64f PushGE
	var_28_bool = 1; // 0x650 MovB
	GlobalVars[1] = var_28_bool; // 0x651 PopGE
	func_1630(var_25_bool, var_26_cvector, var_27_cvector); // 0x653 NEW_2
	return 0; // 0x655 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_33_bool = 0; // 0x2 PushV
	func_1725(var_33_bool); // 0x3 NEW_2
	var_34_bool = var_33_bool == 0; // 0x5 Not
	if(var_34_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1153(var_0_object, var_435_int, var_436_object)
{
	var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; // 0x481 PushV
	var_0_object = var_436_object; // 0x482 TMov
	var_446_bool = 0; var_447_object = Obj(); var_448_float = 0; // 0x483 PushV
	var_447_object = var_436_object; // 0x484 Mov
	var_448_float = 70.0; // 0x485 MovF
	func_1730(var_447_object, var_448_float); // 0x486 NEW_2
	var_449_bool = var_446_bool == 0; // 0x488 Not
	if(var_449_bool == 0) goto Label_1164; // 0x489 JumpB
	var_435_int = -2; // 0x48a MovI
	return 8; // 0x48b Return
	
Label_1164:
	CreateDialog(var_442_object); // 0x48c Func
	var_450_int = 0; // 0x48e PushV
	func_2080(var_450_int); // 0x48f NEW_2
	SetNPCName(var_450_int); // 0x491 ObjFunc
	var_451_int = 0; // 0x493 PushV
	func_2078(var_451_int); // 0x494 NEW_2
	SetNPCDescription(var_451_int); // 0x496 ObjFunc
	var_452_string = ""; // 0x498 PushV
	func_2082(var_452_string); // 0x499 NEW_2
	SetPhoto(var_452_string); // 0x49b ObjFunc
	var_453_string = ""; // 0x49d PushV
	func_2084(var_453_string); // 0x49e NEW_2
	SetPhoto2(var_453_string); // 0x4a0 ObjFunc
	var_454_int = 0; // 0x4a2 PushV
	func_2264(var_454_int); // 0x4a3 NEW_2
	SetPlayerName(var_454_int); // 0x4a5 ObjFunc
	var_444_int = -1; // 0x4a7 MovI
	IsOverrideActive(var_443_bool); // 0x4a8 Func
	var_455_bool = var_443_bool; // 0x4aa Push
	if(var_455_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_435_int = -2; // 0x4ac MovI
	return 8; // 0x4ad Return
	
Label_1198:
	DoDialog(var_442_object); // 0x4ae Func
	var_456_bool = 0; var_457_object = Obj(); // 0x4b0 PushV
	var_458_object = Obj(); // 0x4b1 PushV
	func_2008(var_458_object); // 0x4b2 NEW_2
	var_457_object = var_458_object; // 0x4b3 Mov
	func_1817(var_456_bool, var_457_object); // 0x4b5 NEW_2
	var_459_object = Obj(); var_460_object = Obj(); // 0x4b7 PushV
	var_459_object = var_436_object; // 0x4b8 Mov
	var_460_object = var_442_object; // 0x4b9 Mov
	TaskCall(8); // 0x4ba TaskCall
	func_1234(var_461_object, var_462_object, var_463_string, var_464_bool, var_459_object, var_460_object); // 0x4bb NEW_2
	TaskReturn(); // 0x4bc TaskReturn
	IsDialogEnd(var_445_bool); // 0x4be ObjFunc
	
Label_1216:
	var_492_bool = var_445_bool == 0; // 0x4c0 Not
	if(var_492_bool == 0) goto Label_1223; // 0x4c1 JumpB
	sync(); // 0x4c2 Func
	IsDialogEnd(var_445_bool); // 0x4c4 ObjFunc
	goto Label_1216; // 0x4c6 Jump
	
Label_1223:
	var_493_object = Obj(); // 0x4c7 PushV
	var_493_object = var_436_object; // 0x4c8 Mov
	func_1799(); // 0x4c9 NEW_2
	StopDialog(var_442_object); // 0x4cb Func
	GetReturnValue(var_444_int); // 0x4cd ObjFunc
	var_435_int = var_444_int; // 0x4cf Mov
	return 8; // 0x4d0 Return
}


func_1412(var_0_object, var_495_int, var_496_object)
{
	var_498_object = Obj(); var_499_bool = 0; var_500_int = 0; var_501_bool = 0; var_502_object = Obj(); var_503_bool = 0; var_504_int = 0; var_505_bool = 0; // 0x584 PushV
	var_0_object = var_496_object; // 0x585 TMov
	var_506_bool = 0; var_507_object = Obj(); var_508_float = 0; // 0x586 PushV
	var_507_object = var_496_object; // 0x587 Mov
	var_508_float = 70.0; // 0x588 MovF
	func_1730(var_507_object, var_508_float); // 0x589 NEW_2
	var_509_bool = var_506_bool == 0; // 0x58b Not
	if(var_509_bool == 0) goto Label_1423; // 0x58c JumpB
	var_495_int = -2; // 0x58d MovI
	return 8; // 0x58e Return
	
Label_1423:
	CreateDialog(var_502_object); // 0x58f Func
	var_510_int = 0; // 0x591 PushV
	func_2080(var_510_int); // 0x592 NEW_2
	SetNPCName(var_510_int); // 0x594 ObjFunc
	var_511_int = 0; // 0x596 PushV
	func_2078(var_511_int); // 0x597 NEW_2
	SetNPCDescription(var_511_int); // 0x599 ObjFunc
	var_512_string = ""; // 0x59b PushV
	func_2082(var_512_string); // 0x59c NEW_2
	SetPhoto(var_512_string); // 0x59e ObjFunc
	var_513_string = ""; // 0x5a0 PushV
	func_2084(var_513_string); // 0x5a1 NEW_2
	SetPhoto2(var_513_string); // 0x5a3 ObjFunc
	var_514_int = 0; // 0x5a5 PushV
	func_2264(var_514_int); // 0x5a6 NEW_2
	SetPlayerName(var_514_int); // 0x5a8 ObjFunc
	var_504_int = -1; // 0x5aa MovI
	IsOverrideActive(var_503_bool); // 0x5ab Func
	var_515_bool = var_503_bool; // 0x5ad Push
	if(var_515_bool == 0) goto Label_1457; // 0x5ae JumpB
	var_495_int = -2; // 0x5af MovI
	return 8; // 0x5b0 Return
	
Label_1457:
	DoDialog(var_502_object); // 0x5b1 Func
	var_516_bool = 0; var_517_object = Obj(); // 0x5b3 PushV
	var_518_object = Obj(); // 0x5b4 PushV
	func_2008(var_518_object); // 0x5b5 NEW_2
	var_517_object = var_518_object; // 0x5b6 Mov
	func_1817(var_516_bool, var_517_object); // 0x5b8 NEW_2
	var_519_object = Obj(); var_520_object = Obj(); // 0x5ba PushV
	var_519_object = var_496_object; // 0x5bb Mov
	var_520_object = var_502_object; // 0x5bc Mov
	TaskCall(10); // 0x5bd TaskCall
	func_1493(var_521_object, var_522_object, var_523_string, var_524_bool, var_519_object, var_520_object); // 0x5be NEW_2
	TaskReturn(); // 0x5bf TaskReturn
	IsDialogEnd(var_505_bool); // 0x5c1 ObjFunc
	
Label_1475:
	var_549_bool = var_505_bool == 0; // 0x5c3 Not
	if(var_549_bool == 0) goto Label_1482; // 0x5c4 JumpB
	sync(); // 0x5c5 Func
	IsDialogEnd(var_505_bool); // 0x5c7 ObjFunc
	goto Label_1475; // 0x5c9 Jump
	
Label_1482:
	var_550_object = Obj(); // 0x5ca PushV
	var_550_object = var_496_object; // 0x5cb Mov
	func_1799(); // 0x5cc NEW_2
	StopDialog(var_502_object); // 0x5ce Func
	GetReturnValue(var_504_int); // 0x5d0 ObjFunc
	var_495_int = var_504_int; // 0x5d2 Mov
	return 8; // 0x5d3 Return
}


func_2181(var_394_bool)
{
	var_396_int = 0; var_397_string = ""; // 0x886 PushV
	var_397_string = "b7q01"; // 0x887 MovS
	func_2024(var_396_int, var_397_string); // 0x888 NEW_2
	var_398_int = 5; // 0x88a PushI
	var_399_bool = var_396_int == var_398_int; // 0x88b Eq
	if(var_399_bool == 0) goto Label_2191; // 0x88c JumpB
	var_394_bool = 1; // 0x88d MovB
	return 0; // 0x88e Return
	
Label_2191:
	var_394_bool = 0; // 0x88f MovB
	return 0; // 0x890 Return
}


func_1669(var_0_object)
{
	var_31_bool = var_0_object == 0; // 0x685 Not
	if(var_31_bool == 0) goto Label_1678; // 0x686 JumpB
	var_0_object = 1; // 0x687 TMovB
	var_32_string = "all"; // 0x688 PushS
	var_33_string = "stand"; // 0x689 PushS
	PlayAnimation(var_32_string, var_33_string); // 0x68a Func
	WaitForAnimEnd(); // 0x68c Func
	
Label_1678:
	return 0; // 0x68e Return
}


func_1799()
{
	var_268_bool = 0; var_269_bool = 0; // 0x707 PushV
	var_270_bool = 1; // 0x708 PushB
	CameraSwitchToNormal(var_270_bool); // 0x709 Func
	var_271_bool = 0; // 0x70b PushV
	func_2086(var_271_bool); // 0x70c NEW_2
	if(var_271_bool == 0) goto Label_1808; // 0x70e JumpB
	goto Label_1816; // 0x70f Jump
	
Label_1816:
	return 2; // 0x718 Return
	
Label_1808:
	var_272_string = "head"; // 0x710 PushS
	HasAnimationTrack(var_269_bool, var_272_string); // 0x711 Func
	var_273_bool = var_269_bool; // 0x713 Push
	if(var_273_bool == 0) goto Label_1816; // 0x714 JumpB
	var_274_string = "head"; // 0x715 PushS
	UnlookAsync(var_274_string); // 0x716 Func
}


func_262(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x106 PushV
	var_0_object = var_364_object; // 0x107 TMov
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0; // 0x108 PushV
	var_375_object = var_364_object; // 0x109 Mov
	var_376_float = 70.0; // 0x10a MovF
	func_1730(var_375_object, var_376_float); // 0x10b NEW_2
	var_377_bool = var_374_bool == 0; // 0x10d Not
	if(var_377_bool == 0) goto Label_273; // 0x10e JumpB
	var_363_int = -2; // 0x10f MovI
	return 8; // 0x110 Return
	
Label_273:
	CreateDialog(var_370_object); // 0x111 Func
	var_378_int = 0; // 0x113 PushV
	func_2080(var_378_int); // 0x114 NEW_2
	SetNPCName(var_378_int); // 0x116 ObjFunc
	var_379_int = 0; // 0x118 PushV
	func_2078(var_379_int); // 0x119 NEW_2
	SetNPCDescription(var_379_int); // 0x11b ObjFunc
	var_380_string = ""; // 0x11d PushV
	func_2082(var_380_string); // 0x11e NEW_2
	SetPhoto(var_380_string); // 0x120 ObjFunc
	var_381_string = ""; // 0x122 PushV
	func_2084(var_381_string); // 0x123 NEW_2
	SetPhoto2(var_381_string); // 0x125 ObjFunc
	var_382_int = 0; // 0x127 PushV
	func_2264(var_382_int); // 0x128 NEW_2
	SetPlayerName(var_382_int); // 0x12a ObjFunc
	var_372_int = -1; // 0x12c MovI
	IsOverrideActive(var_371_bool); // 0x12d Func
	var_383_bool = var_371_bool; // 0x12f Push
	if(var_383_bool == 0) goto Label_307; // 0x130 JumpB
	var_363_int = -2; // 0x131 MovI
	return 8; // 0x132 Return
	
Label_307:
	DoDialog(var_370_object); // 0x133 Func
	var_384_bool = 0; var_385_object = Obj(); // 0x135 PushV
	var_386_object = Obj(); // 0x136 PushV
	func_2008(var_386_object); // 0x137 NEW_2
	var_385_object = var_386_object; // 0x138 Mov
	func_1817(var_384_bool, var_385_object); // 0x13a NEW_2
	var_387_object = Obj(); var_388_object = Obj(); // 0x13c PushV
	var_387_object = var_364_object; // 0x13d Mov
	var_388_object = var_370_object; // 0x13e Mov
	TaskCall(4); // 0x13f TaskCall
	func_343(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object); // 0x140 NEW_2
	TaskReturn(); // 0x141 TaskReturn
	IsDialogEnd(var_373_bool); // 0x143 ObjFunc
	
Label_325:
	var_428_bool = var_373_bool == 0; // 0x145 Not
	if(var_428_bool == 0) goto Label_332; // 0x146 JumpB
	sync(); // 0x147 Func
	IsDialogEnd(var_373_bool); // 0x149 ObjFunc
	goto Label_325; // 0x14b Jump
	
Label_332:
	var_429_object = Obj(); // 0x14c PushV
	var_429_object = var_364_object; // 0x14d Mov
	func_1799(); // 0x14e NEW_2
	StopDialog(var_370_object); // 0x150 Func
	GetReturnValue(var_372_int); // 0x152 ObjFunc
	var_363_int = var_372_int; // 0x154 Mov
	return 8; // 0x155 Return
}


func_2058(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0x80a PushV
	GetGameTime(var_51_float); // 0x80b Func
	var_49_float = var_51_float; // 0x80d Mov
	return 2; // 0x80e Return
}


func_13(var_0_object, var_50_int, var_51_object)
{
	var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; // 0xd PushV
	var_0_object = var_51_object; // 0xe TMov
	var_61_bool = 0; var_62_object = Obj(); var_63_float = 0; // 0xf PushV
	var_62_object = var_51_object; // 0x10 Mov
	var_63_float = 70.0; // 0x11 MovF
	func_1730(var_62_object, var_63_float); // 0x12 NEW_2
	var_108_bool = var_61_bool == 0; // 0x14 Not
	if(var_108_bool == 0) goto Label_24; // 0x15 JumpB
	var_50_int = -2; // 0x16 MovI
	return 8; // 0x17 Return
	
Label_24:
	CreateDialog(var_57_object); // 0x18 Func
	var_109_int = 0; // 0x1a PushV
	func_2080(var_109_int); // 0x1b NEW_2
	SetNPCName(var_109_int); // 0x1d ObjFunc
	var_110_int = 0; // 0x1f PushV
	func_2078(var_110_int); // 0x20 NEW_2
	SetNPCDescription(var_110_int); // 0x22 ObjFunc
	var_111_string = ""; // 0x24 PushV
	func_2082(var_111_string); // 0x25 NEW_2
	SetPhoto(var_111_string); // 0x27 ObjFunc
	var_112_string = ""; // 0x29 PushV
	func_2084(var_112_string); // 0x2a NEW_2
	SetPhoto2(var_112_string); // 0x2c ObjFunc
	var_113_int = 0; // 0x2e PushV
	func_2264(var_113_int); // 0x2f NEW_2
	SetPlayerName(var_113_int); // 0x31 ObjFunc
	var_59_int = -1; // 0x33 MovI
	IsOverrideActive(var_58_bool); // 0x34 Func
	var_121_bool = var_58_bool; // 0x36 Push
	if(var_121_bool == 0) goto Label_58; // 0x37 JumpB
	var_50_int = -2; // 0x38 MovI
	return 8; // 0x39 Return
	
Label_58:
	DoDialog(var_57_object); // 0x3a Func
	var_122_bool = 0; var_123_object = Obj(); // 0x3c PushV
	var_124_object = Obj(); // 0x3d PushV
	func_2008(var_124_object); // 0x3e NEW_2
	var_123_object = var_124_object; // 0x3f Mov
	func_1817(var_122_bool, var_123_object); // 0x41 NEW_2
	var_217_object = Obj(); var_218_object = Obj(); // 0x43 PushV
	var_217_object = var_51_object; // 0x44 Mov
	var_218_object = var_57_object; // 0x45 Mov
	TaskCall(2); // 0x46 TaskCall
	func_94(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	IsDialogEnd(var_60_bool); // 0x4a ObjFunc
	
Label_76:
	var_266_bool = var_60_bool == 0; // 0x4c Not
	if(var_266_bool == 0) goto Label_83; // 0x4d JumpB
	sync(); // 0x4e Func
	IsDialogEnd(var_60_bool); // 0x50 ObjFunc
	goto Label_76; // 0x52 Jump
	
Label_83:
	var_267_object = Obj(); // 0x53 PushV
	var_267_object = var_51_object; // 0x54 Mov
	func_1799(); // 0x55 NEW_2
	StopDialog(var_57_object); // 0x57 Func
	GetReturnValue(var_59_int); // 0x59 ObjFunc
	var_50_int = var_59_int; // 0x5b Mov
	return 8; // 0x5c Return
}


func_1551(var_2_object, var_526_string)
{
	var_527_bool = 0; // 0x610 PushV
	func_2086(var_527_bool); // 0x611 NEW_2
	var_528_bool = var_527_bool == 0; // 0x613 Not
	if(var_528_bool == 0) goto Label_1558; // 0x614 JumpB
	return 0; // 0x615 Return
	
Label_1558:
	var_529_bool = var_526_string == var_2_object; // 0x616 Eq
	if(var_529_bool == 0) goto Label_1561; // 0x617 JumpB
	return 0; // 0x618 Return
	
Label_1561:
	var_530_string = ""; var_531_bool = 0; // 0x619 PushV
	var_530_string = var_526_string; // 0x61a Mov
	var_532_string = ""; // 0x61b PushS
	var_533_bool = var_526_string == var_532_string; // 0x61c Eq
	if(var_533_bool == 0) goto Label_1568; // 0x61d JumpB
	var_531_bool = 0; // 0x61e MovB
	goto Label_1569; // 0x61f Jump
	
Label_1569:
	func_1971(var_530_string, var_531_bool); // 0x621 NEW_2
	var_2_object = var_526_string; // 0x623 TMov
	return 0; // 0x624 Return
	
Label_1568:
	var_531_bool = 1; // 0x620 MovB
}


func_2063(var_177_int)
{
	var_178_float = 0; var_179_float = 0; // 0x80f PushV
	GetGameTime(var_179_float); // 0x810 Func
	var_180_int = 1; // 0x812 PushI
	var_181_int = 0; // 0x813 PushV
	var_182_int = 24; // 0x814 PushI
	var_181_int = var_179_float / var_179_float; // 0x815 Div2
	var_177_int = var_180_int + var_181_int; // 0x816 Add2
	return 2; // 0x817 Return
}


func_1297(var_2_object, var_466_string)
{
	var_467_bool = 0; // 0x512 PushV
	func_2086(var_467_bool); // 0x513 NEW_2
	var_468_bool = var_467_bool == 0; // 0x515 Not
	if(var_468_bool == 0) goto Label_1304; // 0x516 JumpB
	return 0; // 0x517 Return
	
Label_1304:
	var_469_bool = var_466_string == var_2_object; // 0x518 Eq
	if(var_469_bool == 0) goto Label_1307; // 0x519 JumpB
	return 0; // 0x51a Return
	
Label_1307:
	var_470_string = ""; var_471_bool = 0; // 0x51b PushV
	var_470_string = var_466_string; // 0x51c Mov
	var_472_string = ""; // 0x51d PushS
	var_473_bool = var_466_string == var_472_string; // 0x51e Eq
	if(var_473_bool == 0) goto Label_1314; // 0x51f JumpB
	var_471_bool = 0; // 0x520 MovB
	goto Label_1315; // 0x521 Jump
	
Label_1315:
	func_1971(var_470_string, var_471_bool); // 0x523 NEW_2
	var_2_object = var_466_string; // 0x525 TMov
	return 0; // 0x526 Return
	
Label_1314:
	var_471_bool = 1; // 0x522 MovB
}


func_2193()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x891 PushV
	var_56_int = 262; // 0x892 PushI
	var_57_int = 1; // 0x893 PushI
	var_58_int = 521035; // 0x894 PushI
	CreateDiaryEntry(var_55_object, var_56_int, var_57_int, var_58_int); // 0x895 Func
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; // 0x897 PushV
	var_60_object = var_55_object; // 0x898 Mov
	var_61_int = 253; // 0x899 MovI
	func_2219(var_59_bool, var_60_object, var_61_int); // 0x89a NEW_2
	return 2; // 0x89c Return
}


func_2072(var_276_bool, var_277_int)
{
	var_278_int = 0; // 0x819 PushV
	func_2063(var_278_int); // 0x81a NEW_2
	var_276_bool = var_278_int == var_277_int; // 0x81c Eq2
	return 0; // 0x81d Return
}


func_152(var_2_object, var_224_string)
{
	var_225_bool = 0; // 0x99 PushV
	func_2086(var_225_bool); // 0x9a NEW_2
	var_226_bool = var_225_bool == 0; // 0x9c Not
	if(var_226_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_227_bool = var_224_string == var_2_object; // 0x9f Eq
	if(var_227_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_228_string = ""; var_229_bool = 0; // 0xa2 PushV
	var_228_string = var_224_string; // 0xa3 Mov
	var_230_string = ""; // 0xa4 PushS
	var_231_bool = var_224_string == var_230_string; // 0xa5 Eq
	if(var_231_bool == 0) goto Label_169; // 0xa6 JumpB
	var_229_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_1971(var_228_string, var_229_bool); // 0xaa NEW_2
	var_2_object = var_224_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_229_bool = 1; // 0xa9 MovB
}


func_1817(var_122_bool, var_123_object)
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; // 0x719 PushV
	var_131_string = "voice_common"; // 0x71a PushS
	GetVariable(var_131_string, var_129_int); // 0x71b Func
	var_132_int = var_129_int; // 0x71d Push
	if(var_132_int == 0) goto Label_1855; // 0x71e JumpB
	var_133_bool = 0; var_134_object = Obj(); // 0x71f PushV
	var_134_object = var_123_object; // 0x720 Mov
	func_1875(var_134_object); // 0x721 NEW_2
	var_163_bool = var_133_bool == 0; // 0x723 Not
	if(var_163_bool == 0) goto Label_1837; // 0x724 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x725 PushV
	var_165_object = var_123_object; // 0x726 Mov
	func_1912(var_165_object); // 0x727 NEW_2
	var_199_bool = var_164_bool == 0; // 0x729 Not
	if(var_199_bool == 0) goto Label_1837; // 0x72a JumpB
	var_122_bool = 0; // 0x72b MovB
	return 4; // 0x72c Return
	
Label_1837:
	var_200_int = 2; // 0x72d PushI
	irand(var_130_int, var_200_int); // 0x72e Func
	var_201_int = var_130_int; // 0x730 Push
	if(var_201_int == 0) goto Label_1850; // 0x731 JumpB
	var_202_string = "voice_common"; // 0x732 PushS
	var_203_int = 1; // 0x733 PushI
	var_204_int = var_129_int + var_203_int; // 0x734 Add
	var_205_int = 3; // 0x735 PushI
	var_206_int = var_204_int / var_205_int; // 0x736 Mod
	SetVariable(var_202_string, var_206_int); // 0x737 Func
	goto Label_1854; // 0x739 Jump
	
Label_1854:
	goto Label_1873; // 0x73e Jump
	
Label_1873:
	var_122_bool = 1; // 0x751 MovB
	return 4; // 0x752 Return
	
Label_1850:
	var_207_string = "voice_common"; // 0x73a PushS
	var_208_int = 0; // 0x73b PushI
	SetVariable(var_207_string, var_208_int); // 0x73c Func
	
Label_1855:
	var_209_bool = 0; var_210_object = Obj(); // 0x73f PushV
	var_210_object = var_123_object; // 0x740 Mov
	func_1912(var_210_object); // 0x741 NEW_2
	var_211_bool = var_209_bool == 0; // 0x743 Not
	if(var_211_bool == 0) goto Label_1869; // 0x744 JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x745 PushV
	var_213_object = var_123_object; // 0x746 Mov
	func_1875(var_213_object); // 0x747 NEW_2
	var_214_bool = var_212_bool == 0; // 0x749 Not
	if(var_214_bool == 0) goto Label_1869; // 0x74a JumpB
	var_122_bool = 0; // 0x74b MovB
	return 4; // 0x74c Return
	
Label_1869:
	var_215_string = "voice_common"; // 0x74d PushS
	var_216_int = 1; // 0x74e PushI
	SetVariable(var_215_string, var_216_int); // 0x74f Func
}


func_2206(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); // 0x89e PushV
	GetDiaryRoot(var_70_object); // 0x89f Func
	var_71_bool = var_70_object == 0; // 0x8a1 Not
	if(var_71_bool == 0) goto Label_2216; // 0x8a2 JumpB
	var_72_string = "Can't retrieve diary root"; // 0x8a3 PushS
	Trace(var_72_string); // 0x8a4 Func
	var_68_object = 0; // 0x8a6 MovB
	return 2; // 0x8a7 Return
	
Label_2216:
	var_68_object = var_70_object; // 0x8a8 Mov
	return 2; // 0x8a9 Return
}


func_2078(var_110_int)
{
	var_110_int = 515554; // 0x81e MovI
	return 0; // 0x81f Return
}


func_2080(var_109_int)
{
	var_109_int = 502879; // 0x820 MovI
	return 0; // 0x821 Return
}


func_2082(var_111_string)
{
	var_111_string = "ui/NPC_Viktor.png"; // 0x822 MovS
	return 0; // 0x823 Return
}


func_1955(var_38_string)
{
	var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_bool = 0; var_43_float = 0; var_44_float = 0; // 0x7a3 PushV
	lshHasAnimation(var_42_bool, var_38_string); // 0x7a4 Func
	var_45_bool = var_42_bool; // 0x7a6 Push
	if(var_45_bool == 0) goto Label_1966; // 0x7a7 JumpB
	lshGetAnimTimes(var_38_string, var_43_float, var_44_float); // 0x7a8 Func
	var_46_bool = 0; // 0x7aa PushB
	lshPlayAnimation(var_43_float, var_44_float, var_46_bool); // 0x7ab Func
	goto Label_1970; // 0x7ad Jump
	
Label_1970:
	return 6; // 0x7b2 Return
	
Label_1966:
	var_47_string = "Can't find lsh animation : "; // 0x7ae PushS
	var_48_int = var_47_string + var_38_string; // 0x7af Add
	Trace(var_48_int); // 0x7b0 Func
}


func_2084(var_112_string)
{
	var_112_string = "ui/NPC_Viktor_b.png"; // 0x824 MovS
	return 0; // 0x825 Return
}


func_421(var_2_object, var_400_string)
{
	var_401_bool = 0; // 0x1a6 PushV
	func_2086(var_401_bool); // 0x1a7 NEW_2
	var_402_bool = var_401_bool == 0; // 0x1a9 Not
	if(var_402_bool == 0) goto Label_428; // 0x1aa JumpB
	return 0; // 0x1ab Return
	
Label_428:
	var_403_bool = var_400_string == var_2_object; // 0x1ac Eq
	if(var_403_bool == 0) goto Label_431; // 0x1ad JumpB
	return 0; // 0x1ae Return
	
Label_431:
	var_404_string = ""; var_405_bool = 0; // 0x1af PushV
	var_404_string = var_400_string; // 0x1b0 Mov
	var_406_string = ""; // 0x1b1 PushS
	var_407_bool = var_400_string == var_406_string; // 0x1b2 Eq
	if(var_407_bool == 0) goto Label_438; // 0x1b3 JumpB
	var_405_bool = 0; // 0x1b4 MovB
	goto Label_439; // 0x1b5 Jump
	
Label_439:
	func_1971(var_404_string, var_405_bool); // 0x1b7 NEW_2
	var_2_object = var_400_string; // 0x1b9 TMov
	return 0; // 0x1ba Return
	
Label_438:
	var_405_bool = 1; // 0x1b6 MovB
}


func_2086(var_104_bool)
{
	var_104_bool = 1; // 0x826 MovB
	return 0; // 0x827 Return
}


func_802(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object; // 0x323 TMov
	var_1_object = var_303_object; // 0x324 TMov
	var_3_string = 0; // 0x325 TMovB
	var_309_int = 1; // 0x326 PushI
	if(var_309_int == 0) goto Label_865; // 0x327 JumpB
	var_310_bool = 0; // 0x328 PushV
	var_310_bool = 0; // 0x329 MovB
	var_311_bool = 0; var_312_object = Obj(); // 0x32a PushV
	var_312_object = var_1_object; // 0x32b MovT
	func_2157(var_312_object); // 0x32c NEW_2
	var_319_bool = var_311_bool == 0; // 0x32e Not
	if(var_319_bool == 0) goto Label_822; // 0x32f JumpB
	var_320_bool = 0; var_321_object = Obj(); // 0x330 PushV
	var_321_object = var_1_object; // 0x331 MovT
	func_2169(var_321_object); // 0x332 NEW_2
	if(var_320_bool == 0) goto Label_822; // 0x334 JumpB
	var_310_bool = 1; // 0x335 MovB
	
Label_822:
	if(var_310_bool == 0) goto Label_848; // 0x336 JumpB
	var_326_object = Obj(); var_327_object = Obj(); // 0x337 PushV
	var_326_object = var_1_object; // 0x338 MovT
	var_327_object = var_0_object; // 0x339 MovT
	func_2116(); // 0x33a NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x33c PushV
	var_330_object = var_1_object; // 0x33d MovT
	var_331_object = var_0_object; // 0x33e MovT
	func_2145(); // 0x33f NEW_2
	var_334_string = ""; // 0x341 PushV
	var_334_string = "Neutral"; // 0x342 MovS
	func_895(var_304_object, var_334_string); // 0x343 NEW_2
	var_342_int = 521320; // 0x345 PushI
	SetMessage(var_342_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_343_int = 528448; // 0x34a PushI
	var_344_int = 29835; // 0x34b PushI
	var_345_int = 29834; // 0x34c PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x34d TObjFunc
	goto Label_865; // 0x34f Jump
	
Label_865:
	var_346_bool = 0; // 0x361 PushV
	func_2086(var_346_bool); // 0x362 NEW_2
	if(var_346_bool == 0) goto Label_880; // 0x364 JumpB
	
Label_869:
	lshWaitForAnimEnd(); // 0x365 Func
	var_347_string = var_3_string; // 0x367 PushT
	if(var_347_string == 0) goto Label_874; // 0x368 JumpB
	goto Label_879; // 0x369 Jump
	
Label_879:
	goto Label_894; // 0x36f Jump
	
Label_894:
	return 0; // 0x37e Return
	
Label_874:
	var_348_string = ""; // 0x36a PushV
	var_348_string = var_2_object; // 0x36b MovT
	func_1955(var_348_string); // 0x36c NEW_2
	goto Label_869; // 0x36e Jump
	
Label_880:
	var_349_string = "all"; // 0x370 PushS
	var_350_string = "idle"; // 0x371 PushS
	PlayAnimation(var_349_string, var_350_string); // 0x372 Func
	
Label_884:
	WaitForAnimEnd(); // 0x374 Func
	var_351_string = var_3_string; // 0x376 PushT
	if(var_351_string == 0) goto Label_889; // 0x377 JumpB
	goto Label_894; // 0x378 Jump
	
Label_889:
	var_352_string = "all"; // 0x379 PushS
	var_353_string = "idle"; // 0x37a PushS
	PlayAnimation(var_352_string, var_353_string); // 0x37b Func
	goto Label_884; // 0x37d Jump
	
Label_848:
	var_354_string = ""; // 0x350 PushV
	var_354_string = "Neutral"; // 0x351 MovS
	func_895(var_304_object, var_354_string); // 0x352 NEW_2
	var_355_int = 521323; // 0x354 PushI
	SetMessage(var_355_int); // 0x355 TObjFunc
	ClearReplies(); // 0x357 TObjFunc
	var_356_int = 521324; // 0x359 PushI
	var_357_int = -1; // 0x35a PushI
	var_358_int = 22518; // 0x35b PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x35c TObjFunc
	goto Label_865; // 0x35e Jump
}


func_2088()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x828 PushV
	var_38_string = "b7q01"; // 0x829 PushS
	var_39_int = 6; // 0x82a PushI
	SetVariable(var_38_string, var_39_int); // 0x82b Func
	var_40_object = Obj(); // 0x82d PushV
	func_2247(var_40_object); // 0x82e NEW_2
	var_37_object = var_40_object; // 0x82f Mov
	var_47_string = "b7q01DankoGotoSobor"; // 0x831 PushS
	var_48_string = "pt_map_aglaja"; // 0x832 PushS
	var_49_int = 1; // 0x833 PushI
	var_50_int = 521021; // 0x834 PushI
	var_51_float = 0; // 0x835 PushV
	func_2058(var_51_float); // 0x836 NEW_2
	AddMark(var_47_string, var_48_string, var_49_int, var_50_int, var_51_float); // 0x838 ObjFunc
	func_2193(); // 0x83b NEW_2
	var_77_bool = 0; var_78_string = ""; var_79_string = ""; // 0x83d PushV
	var_78_string = "quest_b7_01"; // 0x83e MovS
	var_79_string = "place_aglaja"; // 0x83f MovS
	func_2046(var_77_bool, var_78_string, var_79_string); // 0x840 NEW_2
	return 2; // 0x842 Return
}


func_1706(var_37_bool, var_38_cvector)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; // 0x6aa PushV
	GetPosition(var_42_cvector); // 0x6ab Func
	var_43_cvector = var_38_cvector - var_42_cvector; // 0x6ad Sub2
	var_45_float = GetByIndex(var_43_cvector, 0); // 0x6ae PushE
	var_46_float = GetByIndex(var_43_cvector, 2); // 0x6af PushE
	Rotate(var_45_float, var_46_float, var_44_bool); // 0x6b0 Func
	var_37_bool = var_44_bool; // 0x6b2 Mov
	return 6; // 0x6b3 Return
}


func_2219(var_59_bool, var_60_object, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; // 0x8ab PushV
	var_68_object = Obj(); // 0x8ac PushV
	func_2206(var_68_object); // 0x8ad NEW_2
	var_65_object = var_68_object; // 0x8ae Mov
	Find(var_61_int, var_66_object); // 0x8b0 ObjFunc
	var_73_bool = var_66_object == 0; // 0x8b2 Not
	if(var_73_bool == 0) goto Label_2234; // 0x8b3 JumpB
	var_74_string = "Can't find diary parent with id: "; // 0x8b4 PushS
	var_75_int = var_74_string + var_61_int; // 0x8b5 Add
	Trace(var_75_int); // 0x8b6 Func
	var_59_bool = 0; // 0x8b8 MovB
	return 6; // 0x8b9 Return
	
Label_2234:
	AddChild(var_60_object); // 0x8ba ObjFunc
	var_76_int = 7; // 0x8bc PushI
	SendWorldWndMessage(var_76_int); // 0x8bd Func
	GetCategory(var_67_int); // 0x8bf ObjFunc
	SetDiarySection(var_67_int); // 0x8c1 Func
	var_59_bool = 0; // 0x8c3 MovB
	return 6; // 0x8c4 Return
}


func_1971(var_228_string, var_229_bool)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x7b3 PushV
	lshHasAnimation(var_235_bool, var_228_string); // 0x7b4 Func
	var_238_bool = var_235_bool; // 0x7b6 Push
	if(var_238_bool == 0) goto Label_1981; // 0x7b7 JumpB
	lshGetAnimTimes(var_228_string, var_236_float, var_237_float); // 0x7b8 Func
	lshPlayAnimation(var_236_float, var_237_float, var_229_bool); // 0x7ba Func
	goto Label_1985; // 0x7bc Jump
	
Label_1985:
	return 6; // 0x7c1 Return
	
Label_1981:
	var_239_string = "Can't find lsh animation : "; // 0x7bd PushS
	var_240_int = var_239_string + var_228_string; // 0x7be Add
	Trace(var_240_int); // 0x7bf Func
}


func_1716(var_33_bool)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x6b4 PushV
	GetPosition(var_36_cvector); // 0x6b5 ObjFunc
	var_37_bool = 0; var_38_cvector = CVector(0,0,0); // 0x6b7 PushV
	var_38_cvector = var_36_cvector; // 0x6b8 Mov
	func_1706(var_37_bool, var_38_cvector); // 0x6b9 NEW_2
	var_33_bool = var_37_bool; // 0x6ba Mov
	return 2; // 0x6bc Return
}


func_1725(var_29_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x6bd PushV
	IsLoaded(var_31_bool); // 0x6be Func
	var_29_bool = var_31_bool; // 0x6c0 Mov
	return 2; // 0x6c1 Return
}


func_1730(var_61_bool, var_63_float)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; // 0x6c2 PushV
	GetPosition(var_74_cvector); // 0x6c3 ObjFunc
	GetEyesHeight(var_73_float); // 0x6c5 ObjFunc
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x6c7 PushE
	var_82_float = var_82_float + var_73_float; // 0x6c8 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x6c9 PopE
	GetPosition(var_75_cvector); // 0x6ca Func
	GetEyesHeight(var_73_float); // 0x6cc Func
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x6ce PushE
	var_83_float = var_83_float + var_73_float; // 0x6cf Add2
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x6d0 PopE
	var_76_cvector = var_74_cvector - var_75_cvector; // 0x6d1 Sub2
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x6d2 PushE
	var_84_float = 0; // 0x6d3 MovI
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x6d4 PopE
	var_85_int = var_76_cvector | var_76_cvector; // 0x6d5 Or
	var_86_float = sqrt(var_85_int); // 0x6d6 Sqrt
	var_76_cvector = var_76_cvector / var_76_cvector; // 0x6d7 Div2
	var_77_cvector = -var_76_cvector; // 0x6d8 Neg2
	var_87_float = var_76_cvector * var_63_float; // 0x6d9 Mult
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x6da PushV
	var_90_cvector = CVector(0.0, 1.0, 0.0); // 0x6db PushVec
	var_89_cvector = var_77_cvector ^ var_90_cvector; // 0x6dc Xor2
	func_2014(var_88_cvector, var_89_cvector); // 0x6dd NEW_2
	var_96_int = 25; // 0x6df PushI
	var_97_float = var_88_cvector * var_96_int; // 0x6e0 Mult
	var_98_int = var_87_float + var_97_float; // 0x6e1 Add
	var_99_cvector = CVector(0.0, 10.0, 0.0); // 0x6e2 PushVec
	var_78_cvector = var_98_int - var_99_cvector; // 0x6e3 Sub2
	var_79_cvector = var_75_cvector + var_78_cvector; // 0x6e4 Add2
	IsOverrideActive(var_80_bool); // 0x6e5 Func
	var_100_bool = var_80_bool; // 0x6e7 Push
	if(var_100_bool == 0) goto Label_1771; // 0x6e8 JumpB
	var_61_bool = 0; // 0x6e9 MovB
	return 18; // 0x6ea Return
	
Label_1771:
	StopWorld(); // 0x6eb Func
	var_101_bool = 1; // 0x6ed PushB
	CameraTransit(var_79_cvector, var_77_cvector, var_101_bool); // 0x6ee Func
	var_102_float = GetByIndex(var_78_cvector, 0); // 0x6f0 PushE
	var_103_float = GetByIndex(var_78_cvector, 2); // 0x6f1 PushE
	Rotate(var_102_float, var_103_float); // 0x6f2 Func
	var_104_bool = 0; // 0x6f4 PushV
	func_2086(var_104_bool); // 0x6f5 NEW_2
	if(var_104_bool == 0) goto Label_1785; // 0x6f7 JumpB
	goto Label_1793; // 0x6f8 Jump
	
Label_1793:
	CameraWaitForPlayFinish(); // 0x701 Func
	ResumeWorld(); // 0x703 Func
	var_61_bool = 1; // 0x705 MovB
	return 18; // 0x706 Return
	
Label_1785:
	var_105_string = "head"; // 0x6f9 PushS
	HasAnimationTrack(var_81_bool, var_105_string); // 0x6fa Func
	var_106_bool = var_81_bool; // 0x6fc Push
	if(var_106_bool == 0) goto Label_1793; // 0x6fd JumpB
	var_107_string = "head"; // 0x6fe PushS
	LookAsyncCamera(var_107_string); // 0x6ff Func
}


func_1986(var_156_bool, var_157_string)
{
	var_158_bool = 0; var_159_bool = 0; // 0x7c2 PushV
	var_160_bool = 0; // 0x7c3 PushV
	func_2086(var_160_bool); // 0x7c4 NEW_2
	if(var_160_bool == 0) goto Label_1999; // 0x7c6 JumpB
	lshHasSpeech(var_159_bool, var_157_string); // 0x7c7 Func
	var_161_bool = var_159_bool; // 0x7c9 Push
	if(var_161_bool == 0) goto Label_1999; // 0x7ca JumpB
	lshPlaySpeech(var_157_string); // 0x7cb Func
	var_156_bool = 1; // 0x7cd MovB
	return 2; // 0x7ce Return
	
Label_1999:
	var_156_bool = 0; // 0x7cf MovB
	return 2; // 0x7d0 Return
}


func_2116()
{
	var_328_string = "oob6Viktor1"; // 0x845 PushS
	var_329_int = 1; // 0x846 PushI
	SetVariable(var_328_string, var_329_int); // 0x847 Func
	return 0; // 0x849 Return
}


func_2247(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0x8c7 PushV
	GetMainOutdoorScene(var_41_object); // 0x8c8 Func
	var_43_bool = var_41_object == 0; // 0x8ca NullEq
	if(var_43_bool == 0) goto Label_2258; // 0x8cb JumpB
	var_44_string = "Can't find main outdoor scene"; // 0x8cc PushS
	Trace(var_44_string); // 0x8cd Func
	var_42_object = 0; // 0x8cf SetNull
	var_38_object = var_42_object; // 0x8d0 Mov
	return 4; // 0x8d1 Return
	
Label_2258:
	GetMap(var_42_object); // 0x8d2 ObjFunc
	var_38_object = var_42_object; // 0x8d4 Mov
	return 4; // 0x8d5 Return
}


func_2122()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x84a PushV
	var_38_object = Obj(); // 0x84b PushV
	func_2247(var_38_object); // 0x84c NEW_2
	var_37_object = var_38_object; // 0x84d Mov
	var_45_string = "b6q03ViktorGotoMaria"; // 0x84f PushS
	var_46_string = "pt_map_maria"; // 0x850 PushS
	var_47_int = 3; // 0x851 PushI
	var_48_int = 521341; // 0x852 PushI
	var_49_float = 0; // 0x853 PushV
	func_2058(var_49_float); // 0x854 NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0x856 ObjFunc
	return 2; // 0x858 Return
}


func_2001()
{
	var_31_bool = 0; // 0x7d1 PushV
	func_2086(var_31_bool); // 0x7d2 NEW_2
	if(var_31_bool == 0) goto Label_2007; // 0x7d4 JumpB
	lshStopSpeech(); // 0x7d5 Func
	
Label_2007:
	return 0; // 0x7d7 Return
}


func_1234(var_0_object, var_1_object, var_2_object, var_3_string, var_459_object, var_460_object)
{
	var_0_object = var_460_object; // 0x4d3 TMov
	var_1_object = var_459_object; // 0x4d4 TMov
	var_3_string = 0; // 0x4d5 TMovB
	var_465_int = 1; // 0x4d6 PushI
	if(var_465_int == 0) goto Label_1267; // 0x4d7 JumpB
	var_466_string = ""; // 0x4d8 PushV
	var_466_string = "Neutral"; // 0x4d9 MovS
	func_1297(var_460_object, var_466_string); // 0x4da NEW_2
	var_474_int = 535231; // 0x4dc PushI
	SetMessage(var_474_int); // 0x4dd TObjFunc
	ClearReplies(); // 0x4df TObjFunc
	var_475_int = 535232; // 0x4e1 PushI
	var_476_int = 36953; // 0x4e2 PushI
	var_477_int = 36907; // 0x4e3 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x4e4 TObjFunc
	var_478_int = 535233; // 0x4e6 PushI
	var_479_int = -1; // 0x4e7 PushI
	var_480_int = 36908; // 0x4e8 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x4e9 TObjFunc
	var_481_int = 535280; // 0x4eb PushI
	var_482_int = -1; // 0x4ec PushI
	var_483_int = 36956; // 0x4ed PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x4ee TObjFunc
	goto Label_1267; // 0x4f0 Jump
	
Label_1267:
	var_484_bool = 0; // 0x4f3 PushV
	func_2086(var_484_bool); // 0x4f4 NEW_2
	if(var_484_bool == 0) goto Label_1282; // 0x4f6 JumpB
	
Label_1271:
	lshWaitForAnimEnd(); // 0x4f7 Func
	var_485_string = var_3_string; // 0x4f9 PushT
	if(var_485_string == 0) goto Label_1276; // 0x4fa JumpB
	goto Label_1281; // 0x4fb Jump
	
Label_1281:
	goto Label_1296; // 0x501 Jump
	
Label_1296:
	return 0; // 0x510 Return
	
Label_1276:
	var_486_string = ""; // 0x4fc PushV
	var_486_string = var_2_object; // 0x4fd MovT
	func_1955(var_486_string); // 0x4fe NEW_2
	goto Label_1271; // 0x500 Jump
	
Label_1282:
	var_487_string = "all"; // 0x502 PushS
	var_488_string = "idle"; // 0x503 PushS
	PlayAnimation(var_487_string, var_488_string); // 0x504 Func
	
Label_1286:
	WaitForAnimEnd(); // 0x506 Func
	var_489_string = var_3_string; // 0x508 PushT
	if(var_489_string == 0) goto Label_1291; // 0x509 JumpB
	goto Label_1296; // 0x50a Jump
	
Label_1291:
	var_490_string = "all"; // 0x50b PushS
	var_491_string = "idle"; // 0x50c PushS
	PlayAnimation(var_490_string, var_491_string); // 0x50d Func
	goto Label_1286; // 0x50f Jump
}


func_1875(var_133_bool)
{
	var_135_string = ""; var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_string = ""; var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; // 0x753 PushV
	var_140_string = "c"; // 0x754 MovS
	var_141_int = 0; // 0x755 MovI
	
Label_1878:
	var_145_int = 1; // 0x756 PushI
	if(var_145_int == 0) goto Label_1891; // 0x757 JumpB
	var_146_int = 1; // 0x758 PushI
	var_147_int = var_141_int + var_146_int; // 0x759 Add
	var_148_int = var_140_string + var_147_int; // 0x75a Add
	HasProperty(var_148_int, var_142_bool); // 0x75b ObjFunc
	var_149_bool = var_142_bool == 0; // 0x75d Not
	if(var_149_bool == 0) goto Label_1888; // 0x75e JumpB
	goto Label_1891; // 0x75f Jump
	
Label_1891:
	var_150_bool = var_141_int == 0; // 0x763 Not
	if(var_150_bool == 0) goto Label_1895; // 0x764 JumpB
	var_133_bool = 0; // 0x765 MovB
	return 10; // 0x766 Return
	
Label_1895:
	var_143_int = 0; // 0x767 MovI
	var_151_int = 1; // 0x768 PushI
	var_152_bool = var_141_int > var_151_int; // 0x769 GT
	if(var_152_bool == 0) goto Label_1901; // 0x76a JumpB
	irand(var_143_int, var_141_int); // 0x76b Func
	
Label_1901:
	var_153_int = 1; // 0x76d PushI
	var_154_int = var_143_int + var_153_int; // 0x76e Add
	var_155_int = var_140_string + var_154_int; // 0x76f Add
	GetProperty(var_155_int, var_144_string); // 0x770 ObjFunc
	var_156_bool = 0; var_157_string = ""; // 0x772 PushV
	var_157_string = var_144_string; // 0x773 Mov
	func_1986(var_156_bool, var_157_string); // 0x774 NEW_2
	var_133_bool = var_156_bool; // 0x775 Mov
	return 10; // 0x777 Return
	
Label_1888:
	var_162_int = 1; // 0x760 PushI
	var_141_int = var_141_int + var_162_int; // 0x761 Add2
	goto Label_1878; // 0x762 Jump
}


func_721(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0; // 0x2d1 PushV
	var_0_object = var_280_object; // 0x2d2 TMov
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0; // 0x2d3 PushV
	var_291_object = var_280_object; // 0x2d4 Mov
	var_292_float = 70.0; // 0x2d5 MovF
	func_1730(var_291_object, var_292_float); // 0x2d6 NEW_2
	var_293_bool = var_290_bool == 0; // 0x2d8 Not
	if(var_293_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_279_int = -2; // 0x2da MovI
	return 8; // 0x2db Return
	
Label_732:
	CreateDialog(var_286_object); // 0x2dc Func
	var_294_int = 0; // 0x2de PushV
	func_2080(var_294_int); // 0x2df NEW_2
	SetNPCName(var_294_int); // 0x2e1 ObjFunc
	var_295_int = 0; // 0x2e3 PushV
	func_2078(var_295_int); // 0x2e4 NEW_2
	SetNPCDescription(var_295_int); // 0x2e6 ObjFunc
	var_296_string = ""; // 0x2e8 PushV
	func_2082(var_296_string); // 0x2e9 NEW_2
	SetPhoto(var_296_string); // 0x2eb ObjFunc
	var_297_string = ""; // 0x2ed PushV
	func_2084(var_297_string); // 0x2ee NEW_2
	SetPhoto2(var_297_string); // 0x2f0 ObjFunc
	var_298_int = 0; // 0x2f2 PushV
	func_2264(var_298_int); // 0x2f3 NEW_2
	SetPlayerName(var_298_int); // 0x2f5 ObjFunc
	var_288_int = -1; // 0x2f7 MovI
	IsOverrideActive(var_287_bool); // 0x2f8 Func
	var_299_bool = var_287_bool; // 0x2fa Push
	if(var_299_bool == 0) goto Label_766; // 0x2fb JumpB
	var_279_int = -2; // 0x2fc MovI
	return 8; // 0x2fd Return
	
Label_766:
	DoDialog(var_286_object); // 0x2fe Func
	var_300_bool = 0; var_301_object = Obj(); // 0x300 PushV
	var_302_object = Obj(); // 0x301 PushV
	func_2008(var_302_object); // 0x302 NEW_2
	var_301_object = var_302_object; // 0x303 Mov
	func_1817(var_300_bool, var_301_object); // 0x305 NEW_2
	var_303_object = Obj(); var_304_object = Obj(); // 0x307 PushV
	var_303_object = var_280_object; // 0x308 Mov
	var_304_object = var_286_object; // 0x309 Mov
	TaskCall(6); // 0x30a TaskCall
	func_802(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object); // 0x30b NEW_2
	TaskReturn(); // 0x30c TaskReturn
	IsDialogEnd(var_289_bool); // 0x30e ObjFunc
	
Label_784:
	var_359_bool = var_289_bool == 0; // 0x310 Not
	if(var_359_bool == 0) goto Label_791; // 0x311 JumpB
	sync(); // 0x312 Func
	IsDialogEnd(var_289_bool); // 0x314 ObjFunc
	goto Label_784; // 0x316 Jump
	
Label_791:
	var_360_object = Obj(); // 0x317 PushV
	var_360_object = var_280_object; // 0x318 Mov
	func_1799(); // 0x319 NEW_2
	StopDialog(var_286_object); // 0x31b Func
	GetReturnValue(var_288_int); // 0x31d ObjFunc
	var_279_int = var_288_int; // 0x31f Mov
	return 8; // 0x320 Return
}


func_1493(var_0_object, var_1_object, var_2_object, var_3_string, var_519_object, var_520_object)
{
	var_0_object = var_520_object; // 0x5d6 TMov
	var_1_object = var_519_object; // 0x5d7 TMov
	var_3_string = 0; // 0x5d8 TMovB
	var_525_int = 1; // 0x5d9 PushI
	if(var_525_int == 0) goto Label_1521; // 0x5da JumpB
	var_526_string = ""; // 0x5db PushV
	var_526_string = "Neutral"; // 0x5dc MovS
	func_1551(var_520_object, var_526_string); // 0x5dd NEW_2
	var_534_int = 540554; // 0x5df PushI
	SetMessage(var_534_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_535_int = 540555; // 0x5e4 PushI
	var_536_int = -1; // 0x5e5 PushI
	var_537_int = 42564; // 0x5e6 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x5e7 TObjFunc
	var_538_int = 540794; // 0x5e9 PushI
	var_539_int = -1; // 0x5ea PushI
	var_540_int = 42843; // 0x5eb PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x5ec TObjFunc
	goto Label_1521; // 0x5ee Jump
	
Label_1521:
	var_541_bool = 0; // 0x5f1 PushV
	func_2086(var_541_bool); // 0x5f2 NEW_2
	if(var_541_bool == 0) goto Label_1536; // 0x5f4 JumpB
	
Label_1525:
	lshWaitForAnimEnd(); // 0x5f5 Func
	var_542_string = var_3_string; // 0x5f7 PushT
	if(var_542_string == 0) goto Label_1530; // 0x5f8 JumpB
	goto Label_1535; // 0x5f9 Jump
	
Label_1535:
	goto Label_1550; // 0x5ff Jump
	
Label_1550:
	return 0; // 0x60e Return
	
Label_1530:
	var_543_string = ""; // 0x5fa PushV
	var_543_string = var_2_object; // 0x5fb MovT
	func_1955(var_543_string); // 0x5fc NEW_2
	goto Label_1525; // 0x5fe Jump
	
Label_1536:
	var_544_string = "all"; // 0x600 PushS
	var_545_string = "idle"; // 0x601 PushS
	PlayAnimation(var_544_string, var_545_string); // 0x602 Func
	
Label_1540:
	WaitForAnimEnd(); // 0x604 Func
	var_546_string = var_3_string; // 0x606 PushT
	if(var_546_string == 0) goto Label_1545; // 0x607 JumpB
	goto Label_1550; // 0x608 Jump
	
Label_1545:
	var_547_string = "all"; // 0x609 PushS
	var_548_string = "idle"; // 0x60a PushS
	PlayAnimation(var_547_string, var_548_string); // 0x60b Func
	goto Label_1540; // 0x60d Jump
}


func_343(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object; // 0x158 TMov
	var_1_object = var_387_object; // 0x159 TMov
	var_3_string = 0; // 0x15a TMovB
	var_393_int = 1; // 0x15b PushI
	if(var_393_int == 0) goto Label_391; // 0x15c JumpB
	var_394_bool = 0; var_395_object = Obj(); // 0x15d PushV
	var_395_object = var_1_object; // 0x15e MovT
	func_2181(var_395_object); // 0x15f NEW_2
	if(var_394_bool == 0) goto Label_374; // 0x161 JumpB
	var_400_string = ""; // 0x162 PushV
	var_400_string = "Anger"; // 0x163 MovS
	func_421(var_388_object, var_400_string); // 0x164 NEW_2
	var_408_int = 521037; // 0x166 PushI
	SetMessage(var_408_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_409_int = 528490; // 0x16b PushI
	var_410_int = 29880; // 0x16c PushI
	var_411_int = 29879; // 0x16d PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x16e TObjFunc
	var_412_int = 528510; // 0x170 PushI
	var_413_int = 29882; // 0x171 PushI
	var_414_int = 29899; // 0x172 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x173 TObjFunc
	goto Label_391; // 0x175 Jump
	
Label_391:
	var_415_bool = 0; // 0x187 PushV
	func_2086(var_415_bool); // 0x188 NEW_2
	if(var_415_bool == 0) goto Label_406; // 0x18a JumpB
	
Label_395:
	lshWaitForAnimEnd(); // 0x18b Func
	var_416_string = var_3_string; // 0x18d PushT
	if(var_416_string == 0) goto Label_400; // 0x18e JumpB
	goto Label_405; // 0x18f Jump
	
Label_405:
	goto Label_420; // 0x195 Jump
	
Label_420:
	return 0; // 0x1a4 Return
	
Label_400:
	var_417_string = ""; // 0x190 PushV
	var_417_string = var_2_object; // 0x191 MovT
	func_1955(var_417_string); // 0x192 NEW_2
	goto Label_395; // 0x194 Jump
	
Label_406:
	var_418_string = "all"; // 0x196 PushS
	var_419_string = "idle"; // 0x197 PushS
	PlayAnimation(var_418_string, var_419_string); // 0x198 Func
	
Label_410:
	WaitForAnimEnd(); // 0x19a Func
	var_420_string = var_3_string; // 0x19c PushT
	if(var_420_string == 0) goto Label_415; // 0x19d JumpB
	goto Label_420; // 0x19e Jump
	
Label_415:
	var_421_string = "all"; // 0x19f PushS
	var_422_string = "idle"; // 0x1a0 PushS
	PlayAnimation(var_421_string, var_422_string); // 0x1a1 Func
	goto Label_410; // 0x1a3 Jump
	
Label_374:
	var_423_string = ""; // 0x176 PushV
	var_423_string = "Neutral"; // 0x177 MovS
	func_421(var_388_object, var_423_string); // 0x178 NEW_2
	var_424_int = 521039; // 0x17a PushI
	SetMessage(var_424_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_425_int = 521040; // 0x17f PushI
	var_426_int = -1; // 0x180 PushI
	var_427_int = 22236; // 0x181 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x182 TObjFunc
	goto Label_391; // 0x184 Jump
}


func_2008(var_124_object)
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x7d8 PushV
	self(var_126_object); // 0x7d9 Func
	var_124_object = var_126_object; // 0x7db Mov
	return 2; // 0x7dc Return
}


func_2264(var_113_int)
{
	var_114_int = 0; var_115_int = 0; // 0x8d8 PushV
	var_116_string = "branch"; // 0x8d9 PushS
	GetVariable(var_116_string, var_115_int); // 0x8da Func
	var_117_int = 0; // 0x8dc PushI
	var_118_bool = var_115_int == var_117_int; // 0x8dd Eq
	if(var_118_bool == 0) goto Label_2274; // 0x8de JumpB
	var_113_int = 1; // 0x8df MovI
	return 2; // 0x8e0 Return
	
Label_2274:
	var_119_int = 1; // 0x8e2 PushI
	var_120_bool = var_115_int == var_119_int; // 0x8e3 Eq
	if(var_120_bool == 0) goto Label_2279; // 0x8e4 JumpB
	var_113_int = 2; // 0x8e5 MovI
	return 2; // 0x8e6 Return
	
Label_2279:
	var_113_int = 3; // 0x8e7 MovI
	return 2; // 0x8e8 Return
}


func_2138()
{
	var_58_string = ""; var_59_bool = 0; // 0x85b PushV
	var_58_string = "cot_maria@door1"; // 0x85c MovS
	var_59_bool = 0; // 0x85d MovB
	func_2029(var_58_string, var_59_bool); // 0x85e NEW_2
	return 0; // 0x860 Return
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_217_object, var_218_object)
{
	var_0_object = var_218_object; // 0x5f TMov
	var_1_object = var_217_object; // 0x60 TMov
	var_3_string = 0; // 0x61 TMovB
	var_223_int = 1; // 0x62 PushI
	if(var_223_int == 0) goto Label_122; // 0x63 JumpB
	var_224_string = ""; // 0x64 PushV
	var_224_string = "Neutral"; // 0x65 MovS
	func_152(var_218_object, var_224_string); // 0x66 NEW_2
	var_241_int = 518051; // 0x68 PushI
	SetMessage(var_241_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_242_int = 518052; // 0x6d PushI
	var_243_int = 29827; // 0x6e PushI
	var_244_int = 19185; // 0x6f PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x70 TObjFunc
	var_245_int = 528440; // 0x72 PushI
	var_246_int = -1; // 0x73 PushI
	var_247_int = 29826; // 0x74 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
	
Label_122:
	var_248_bool = 0; // 0x7a PushV
	func_2086(var_248_bool); // 0x7b NEW_2
	if(var_248_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_249_string = var_3_string; // 0x80 PushT
	if(var_249_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_250_string = ""; // 0x83 PushV
	var_250_string = var_2_object; // 0x84 MovT
	func_1955(var_250_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_261_string = "all"; // 0x89 PushS
	var_262_string = "idle"; // 0x8a PushS
	PlayAnimation(var_261_string, var_262_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_263_string = var_3_string; // 0x8f PushT
	if(var_263_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_264_string = "all"; // 0x92 PushS
	var_265_string = "idle"; // 0x93 PushS
	PlayAnimation(var_264_string, var_265_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
}


func_1630(var_0_object, var_26_cvector, var_27_cvector)
{
	GetPosition(var_27_cvector); // 0x65e Func
	GetDirection(var_26_cvector); // 0x660 Func
	var_0_object = 0; // 0x662 TMovB
	var_29_bool = 0; // 0x663 PushV
	func_1725(var_29_bool); // 0x664 NEW_2
	var_32_bool = var_29_bool == 0; // 0x666 Not
	if(var_32_bool == 0) goto Label_1648; // 0x667 JumpB
	TaskCall(0); // 0x669 TaskCall
	func_0(); // 0x66a NEW_2
	TaskReturn(); // 0x66b TaskReturn
	func_1658(var_25_bool, var_26_cvector, var_27_cvector); // 0x66e NEW_2
	
Label_1648:
	var_38_string = ""; // 0x670 PushV
	var_38_string = "Neutral"; // 0x671 MovS
	func_1955(var_38_string); // 0x672 NEW_2
	lshWaitForAnimEnd(); // 0x674 Func
	goto Label_1648; // 0x676 Jump
}


func_2014(var_88_cvector, var_89_cvector)
{
	var_91_float = 0; var_92_float = 0; // 0x7de PushV
	var_93_int = var_89_cvector | var_89_cvector; // 0x7df Or
	var_92_float = sqrt(var_93_int); // 0x7e0 Sqrt2
	var_94_float = 0.0; // 0x7e1 PushF
	var_95_bool = var_92_float < var_94_float; // 0x7e2 LT
	if(var_95_bool == 0) goto Label_2022; // 0x7e3 JumpB
	var_88_cvector = CVector(0.0, 0.0, 0.0); // 0x7e4 MovV
	return 2; // 0x7e5 Return
	
Label_2022:
	var_88_cvector = var_89_cvector / var_89_cvector; // 0x7e6 Div2
	return 2; // 0x7e7 Return
}


func_2145()
{
	var_332_string = "b6ViktorVisit"; // 0x862 PushS
	var_333_int = 1; // 0x863 PushI
	SetVariable(var_332_string, var_333_int); // 0x864 Func
	return 0; // 0x866 Return
}


func_2151()
{
	var_54_string = "playsound"; // 0x868 PushS
	var_55_string = "mapmark"; // 0x869 PushS
	TriggerWorld(var_54_string, var_55_string); // 0x86a Func
	return 0; // 0x86c Return
}


func_2024(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0; // 0x7e8 PushV
	GetVariable(var_314_string, var_316_int); // 0x7e9 Func
	var_313_int = var_316_int; // 0x7eb Mov
	return 2; // 0x7ec Return
}


func_2281(var_47_object)
{
	var_48_bool = GlobalVars[1]; // 0x8ea PushGE
	var_49_bool = var_48_bool == 0; // 0x8eb Not
	if(var_49_bool == 0) goto Label_2294; // 0x8ec JumpB
	var_50_int = 0; var_51_object = Obj(); // 0x8ed PushV
	var_51_object = var_47_object; // 0x8ee Mov
	TaskCall(1); // 0x8ef TaskCall
	func_13(var_52_object, var_50_int, var_51_object); // 0x8f0 NEW_2
	TaskReturn(); // 0x8f1 TaskReturn
	var_275_bool = GlobalVars[1]; // 0x8f3 PushGE
	var_275_bool = 1; // 0x8f4 MovB
	GlobalVars[1] = var_275_bool; // 0x8f5 PopGE
	
Label_2294:
	var_276_bool = 0; var_277_int = 0; // 0x8f6 PushV
	var_277_int = 6; // 0x8f7 MovI
	func_2072(var_276_bool, var_277_int); // 0x8f8 NEW_2
	if(var_276_bool == 0) goto Label_2306; // 0x8fa JumpB
	var_279_int = 0; var_280_object = Obj(); // 0x8fb PushV
	var_280_object = var_47_object; // 0x8fc Mov
	TaskCall(5); // 0x8fd TaskCall
	func_721(var_281_object, var_279_int, var_280_object); // 0x8fe NEW_2
	TaskReturn(); // 0x8ff TaskReturn
	return 0; // 0x901 Return
	
Label_2306:
	var_361_bool = 0; var_362_int = 0; // 0x902 PushV
	var_362_int = 7; // 0x903 MovI
	func_2072(var_361_bool, var_362_int); // 0x904 NEW_2
	if(var_361_bool == 0) goto Label_2318; // 0x906 JumpB
	var_363_int = 0; var_364_object = Obj(); // 0x907 PushV
	var_364_object = var_47_object; // 0x908 Mov
	TaskCall(3); // 0x909 TaskCall
	func_262(var_365_object, var_363_int, var_364_object); // 0x90a NEW_2
	TaskReturn(); // 0x90b TaskReturn
	return 0; // 0x90d Return
	
Label_2318:
	var_430_bool = 0; // 0x90e PushV
	var_430_bool = 0; // 0x90f MovB
	var_431_bool = 0; var_432_int = 0; // 0x910 PushV
	var_432_int = 12; // 0x911 MovI
	func_2072(var_431_bool, var_432_int); // 0x912 NEW_2
	if(var_431_bool == 0) goto Label_2329; // 0x914 JumpB
	var_433_bool = GlobalVars[2]; // 0x915 PushGE
	var_434_bool = var_433_bool == 0; // 0x916 Not
	if(var_434_bool == 0) goto Label_2329; // 0x917 JumpB
	var_430_bool = 1; // 0x918 MovB
	
Label_2329:
	if(var_430_bool == 0) goto Label_2340; // 0x919 JumpB
	var_435_int = 0; var_436_object = Obj(); // 0x91a PushV
	var_436_object = var_47_object; // 0x91b Mov
	TaskCall(7); // 0x91c TaskCall
	func_1153(var_437_object, var_435_int, var_436_object); // 0x91d NEW_2
	TaskReturn(); // 0x91e TaskReturn
	var_494_bool = GlobalVars[2]; // 0x920 PushGE
	var_494_bool = 1; // 0x921 MovB
	GlobalVars[2] = var_494_bool; // 0x922 PopGE
	return 0; // 0x923 Return
	
Label_2340:
	var_495_int = 0; var_496_object = Obj(); // 0x924 PushV
	var_496_object = var_47_object; // 0x925 Mov
	TaskCall(9); // 0x926 TaskCall
	func_1412(var_497_object, var_495_int, var_496_object); // 0x927 NEW_2
	TaskReturn(); // 0x928 TaskReturn
	return 0; // 0x92a Return
}


func_2157(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x86e PushV
	var_314_string = "b6q03NinaTalk"; // 0x86f MovS
	func_2024(var_313_int, var_314_string); // 0x870 NEW_2
	var_317_int = 0; // 0x872 PushI
	var_318_bool = var_313_int != var_317_int; // 0x873 Neq
	if(var_318_bool == 0) goto Label_2167; // 0x874 JumpB
	var_311_bool = 1; // 0x875 MovB
	return 0; // 0x876 Return
	
Label_2167:
	var_311_bool = 0; // 0x877 MovB
	return 0; // 0x878 Return
}


func_2029(var_58_string, var_59_bool)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x7ed PushV
	FindActor(var_61_object, var_58_string); // 0x7ee Func
	var_62_bool = var_61_object == 0; // 0x7f0 Not
	if(var_62_bool == 0) goto Label_2041; // 0x7f1 JumpB
	var_63_string = "Door "; // 0x7f2 PushS
	var_64_int = var_63_string + var_58_string; // 0x7f3 Add
	var_65_string = " not found"; // 0x7f4 PushS
	var_66_int = var_64_int + var_65_string; // 0x7f5 Add
	Trace(var_66_int); // 0x7f6 Func
	goto Label_2044; // 0x7f8 Jump
	
Label_2044:
	return 2; // 0x7fc Return
	
Label_2041:
	var_67_string = "locked"; // 0x7f9 PushS
	SetProperty(var_67_string, var_59_bool); // 0x7fa ObjFunc
}


func_1912(var_164_bool)
{
	var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = ""; // 0x778 PushV
	var_176_string = "d"; // 0x779 PushS
	var_177_int = 0; // 0x77a PushV
	func_2063(var_177_int); // 0x77b NEW_2
	var_183_int = var_176_string + var_177_int; // 0x77d Add
	var_184_string = "m"; // 0x77e PushS
	var_171_string = var_183_int + var_184_string; // 0x77f Add2
	var_172_int = 0; // 0x780 MovI
	
Label_1921:
	var_185_int = 1; // 0x781 PushI
	if(var_185_int == 0) goto Label_1934; // 0x782 JumpB
	var_186_int = 1; // 0x783 PushI
	var_187_int = var_172_int + var_186_int; // 0x784 Add
	var_188_int = var_171_string + var_187_int; // 0x785 Add
	HasProperty(var_188_int, var_173_bool); // 0x786 ObjFunc
	var_189_bool = var_173_bool == 0; // 0x788 Not
	if(var_189_bool == 0) goto Label_1931; // 0x789 JumpB
	goto Label_1934; // 0x78a Jump
	
Label_1934:
	var_190_bool = var_172_int == 0; // 0x78e Not
	if(var_190_bool == 0) goto Label_1938; // 0x78f JumpB
	var_164_bool = 0; // 0x790 MovB
	return 10; // 0x791 Return
	
Label_1938:
	var_174_int = 0; // 0x792 MovI
	var_191_int = 1; // 0x793 PushI
	var_192_bool = var_172_int > var_191_int; // 0x794 GT
	if(var_192_bool == 0) goto Label_1944; // 0x795 JumpB
	irand(var_174_int, var_172_int); // 0x796 Func
	
Label_1944:
	var_193_int = 1; // 0x798 PushI
	var_194_int = var_174_int + var_193_int; // 0x799 Add
	var_195_int = var_171_string + var_194_int; // 0x79a Add
	GetProperty(var_195_int, var_175_string); // 0x79b ObjFunc
	var_196_bool = 0; var_197_string = ""; // 0x79d PushV
	var_197_string = var_175_string; // 0x79e Mov
	func_1986(var_196_bool, var_197_string); // 0x79f NEW_2
	var_164_bool = var_196_bool; // 0x7a0 Mov
	return 10; // 0x7a2 Return
	
Label_1931:
	var_198_int = 1; // 0x78b PushI
	var_172_int = var_172_int + var_198_int; // 0x78c Add2
	goto Label_1921; // 0x78d Jump
}


func_2169(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0x87a PushV
	var_323_string = "oob6Viktor1"; // 0x87b MovS
	func_2024(var_322_int, var_323_string); // 0x87c NEW_2
	var_324_int = 0; // 0x87e PushI
	var_325_bool = var_322_int == var_324_int; // 0x87f Eq
	if(var_325_bool == 0) goto Label_2179; // 0x880 JumpB
	var_320_bool = 1; // 0x881 MovB
	return 0; // 0x882 Return
	
Label_2179:
	var_320_bool = 0; // 0x883 MovB
	return 0; // 0x884 Return
}


func_1658(var_0_object, var_26_cvector, var_27_cvector)
{
	SetPosition(var_27_cvector); // 0x67a Func
	SetDirection(var_26_cvector); // 0x67c Func
	var_0_object = 0; // 0x67e TMovB
	var_35_string = "all"; // 0x67f PushS
	var_36_string = "stand"; // 0x680 PushS
	var_37_int = 0; // 0x681 PushI
	LockAnimation(var_35_string, var_36_string, var_37_int); // 0x682 Func
	return 0; // 0x684 Return
}


func_2046(var_77_bool, var_78_string, var_79_string)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x7fe PushV
	FindActor(var_81_object, var_78_string); // 0x7ff Func
	var_82_bool = var_81_object == 0; // 0x801 NullEq
	if(var_82_bool == 0) goto Label_2053; // 0x802 JumpB
	var_77_bool = 0; // 0x803 MovB
	return 2; // 0x804 Return
	
Label_2053:
	Trigger(var_81_object, var_79_string); // 0x805 Func
	var_77_bool = 1; // 0x807 MovB
	return 2; // 0x808 Return
}


func_895(var_2_object, var_334_string)
{
	var_335_bool = 0; // 0x380 PushV
	func_2086(var_335_bool); // 0x381 NEW_2
	var_336_bool = var_335_bool == 0; // 0x383 Not
	if(var_336_bool == 0) goto Label_902; // 0x384 JumpB
	return 0; // 0x385 Return
	
Label_902:
	var_337_bool = var_334_string == var_2_object; // 0x386 Eq
	if(var_337_bool == 0) goto Label_905; // 0x387 JumpB
	return 0; // 0x388 Return
	
Label_905:
	var_338_string = ""; var_339_bool = 0; // 0x389 PushV
	var_338_string = var_334_string; // 0x38a Mov
	var_340_string = ""; // 0x38b PushS
	var_341_bool = var_334_string == var_340_string; // 0x38c Eq
	if(var_341_bool == 0) goto Label_912; // 0x38d JumpB
	var_339_bool = 0; // 0x38e MovB
	goto Label_913; // 0x38f Jump
	
Label_913:
	func_1971(var_338_string, var_339_bool); // 0x391 NEW_2
	var_2_object = var_334_string; // 0x393 TMov
	return 0; // 0x394 Return
	
Label_912:
	var_339_bool = 1; // 0x390 MovB
}


