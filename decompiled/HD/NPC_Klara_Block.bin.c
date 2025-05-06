task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xc0 PushI
	if(var_33_int == 0) goto Label_432; // 0xc1 JumpB
	func_3407(); // 0xc3 NEW_2
	var_35_int = 28260; // 0xc5 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xc6 Eq
	if(var_36_bool == 0) goto Label_205; // 0xc7 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xc8 PushV
	var_37_object = var_1_object; // 0xc9 MovT
	var_38_object = var_0_object; // 0xca MovT
	func_3630(); // 0xcb NEW_2
	
Label_205:
	var_73_int = 28272; // 0xcd PushI
	var_74_bool = var_32_cvector == var_73_int; // 0xce Eq
	if(var_74_bool == 0) goto Label_213; // 0xcf JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xd0 PushV
	var_75_object = var_1_object; // 0xd1 MovT
	var_76_object = var_0_object; // 0xd2 MovT
	func_3649(); // 0xd3 NEW_2
	
Label_213:
	var_90_int = 28257; // 0xd5 PushI
	var_91_bool = var_31_bool == var_90_int; // 0xd6 Eq
	if(var_91_bool == 0) goto Label_266; // 0xd7 JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0xd8 PushV
	var_93_object = var_1_object; // 0xd9 MovT
	func_3787(var_93_object); // 0xda NEW_2
	if(var_92_bool == 0) goto Label_236; // 0xdc JumpB
	var_100_string = ""; // 0xdd PushV
	var_100_string = "Neutral"; // 0xde MovS
	func_169(var_32_cvector, var_100_string); // 0xdf NEW_2
	var_117_int = 526965; // 0xe1 PushI
	SetMessage(var_117_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_118_int = 528076; // 0xe6 PushI
	var_119_int = 29419; // 0xe7 PushI
	var_120_int = 29418; // 0xe8 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_121_string = ""; // 0xec PushV
	var_121_string = "Neutral"; // 0xed MovS
	func_169(var_32_cvector, var_121_string); // 0xee NEW_2
	var_122_int = 526969; // 0xf0 PushI
	SetMessage(var_122_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0xf5 PushV
	var_124_object = var_1_object; // 0xf6 MovT
	func_3799(var_124_object); // 0xf7 NEW_2
	if(var_123_bool == 0) goto Label_255; // 0xf9 JumpB
	var_129_int = 526978; // 0xfa PushI
	var_130_int = 29424; // 0xfb PushI
	var_131_int = 28270; // 0xfc PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xfd TObjFunc
	
Label_255:
	var_132_int = 526970; // 0xff PushI
	var_133_int = -1; // 0x100 PushI
	var_134_int = 28262; // 0x101 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x102 TObjFunc
	var_135_int = 528088; // 0x104 PushI
	var_136_int = -1; // 0x105 PushI
	var_137_int = 29431; // 0x106 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_138_int = 29424; // 0x10a PushI
	var_139_bool = var_31_bool == var_138_int; // 0x10b Eq
	if(var_139_bool == 0) goto Label_284; // 0x10c JumpB
	var_140_string = ""; // 0x10d PushV
	var_140_string = "Untrust"; // 0x10e MovS
	func_169(var_32_cvector, var_140_string); // 0x10f NEW_2
	var_141_int = 528082; // 0x111 PushI
	SetMessage(var_141_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_142_int = 528083; // 0x116 PushI
	var_143_int = 29426; // 0x117 PushI
	var_144_int = 29425; // 0x118 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_145_int = 29426; // 0x11c PushI
	var_146_bool = var_31_bool == var_145_int; // 0x11d Eq
	if(var_146_bool == 0) goto Label_307; // 0x11e JumpB
	var_147_string = ""; // 0x11f PushV
	var_147_string = "Untrust"; // 0x120 MovS
	func_169(var_32_cvector, var_147_string); // 0x121 NEW_2
	var_148_int = 528084; // 0x123 PushI
	SetMessage(var_148_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_149_int = 528085; // 0x128 PushI
	var_150_int = 28271; // 0x129 PushI
	var_151_int = 29427; // 0x12a PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x12b TObjFunc
	var_152_int = 528086; // 0x12d PushI
	var_153_int = 28271; // 0x12e PushI
	var_154_int = 29428; // 0x12f PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_155_int = 28271; // 0x133 PushI
	var_156_bool = var_31_bool == var_155_int; // 0x134 Eq
	if(var_156_bool == 0) goto Label_325; // 0x135 JumpB
	var_157_string = ""; // 0x136 PushV
	var_157_string = "Neutral"; // 0x137 MovS
	func_169(var_32_cvector, var_157_string); // 0x138 NEW_2
	var_158_int = 526979; // 0x13a PushI
	SetMessage(var_158_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_159_int = 528089; // 0x13f PushI
	var_160_int = 29433; // 0x140 PushI
	var_161_int = 29432; // 0x141 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_162_int = 29433; // 0x145 PushI
	var_163_bool = var_31_bool == var_162_int; // 0x146 Eq
	if(var_163_bool == 0) goto Label_343; // 0x147 JumpB
	var_164_string = ""; // 0x148 PushV
	var_164_string = "Neutral"; // 0x149 MovS
	func_169(var_32_cvector, var_164_string); // 0x14a NEW_2
	var_165_int = 528090; // 0x14c PushI
	SetMessage(var_165_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_166_int = 526980; // 0x151 PushI
	var_167_int = -1; // 0x152 PushI
	var_168_int = 28272; // 0x153 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_169_int = 29419; // 0x157 PushI
	var_170_bool = var_31_bool == var_169_int; // 0x158 Eq
	if(var_170_bool == 0) goto Label_366; // 0x159 JumpB
	var_171_string = ""; // 0x15a PushV
	var_171_string = "Untrust"; // 0x15b MovS
	func_169(var_32_cvector, var_171_string); // 0x15c NEW_2
	var_172_int = 528077; // 0x15e PushI
	SetMessage(var_172_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_173_int = 528078; // 0x163 PushI
	var_174_int = 29421; // 0x164 PushI
	var_175_int = 29420; // 0x165 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x166 TObjFunc
	var_176_int = 528109; // 0x168 PushI
	var_177_int = 29456; // 0x169 PushI
	var_178_int = 29454; // 0x16a PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_179_int = 29456; // 0x16e PushI
	var_180_bool = var_31_bool == var_179_int; // 0x16f Eq
	if(var_180_bool == 0) goto Label_384; // 0x170 JumpB
	var_181_string = ""; // 0x171 PushV
	var_181_string = "Doubt"; // 0x172 MovS
	func_169(var_32_cvector, var_181_string); // 0x173 NEW_2
	var_182_int = 528110; // 0x175 PushI
	SetMessage(var_182_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_183_int = 528111; // 0x17a PushI
	var_184_int = 29421; // 0x17b PushI
	var_185_int = 29457; // 0x17c PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_186_int = 29421; // 0x180 PushI
	var_187_bool = var_31_bool == var_186_int; // 0x181 Eq
	if(var_187_bool == 0) goto Label_402; // 0x182 JumpB
	var_188_string = ""; // 0x183 PushV
	var_188_string = "Agression"; // 0x184 MovS
	func_169(var_32_cvector, var_188_string); // 0x185 NEW_2
	var_189_int = 528079; // 0x187 PushI
	SetMessage(var_189_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_190_int = 528080; // 0x18c PushI
	var_191_int = 29423; // 0x18d PushI
	var_192_int = 29422; // 0x18e PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_193_int = 29423; // 0x192 PushI
	var_194_bool = var_31_bool == var_193_int; // 0x193 Eq
	if(var_194_bool == 0) goto Label_420; // 0x194 JumpB
	var_195_string = ""; // 0x195 PushV
	var_195_string = "Neutral"; // 0x196 MovS
	func_169(var_32_cvector, var_195_string); // 0x197 NEW_2
	var_196_int = 528081; // 0x199 PushI
	SetMessage(var_196_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_197_int = 526968; // 0x19e PushI
	var_198_int = -1; // 0x19f PushI
	var_199_int = 28260; // 0x1a0 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_3_string = 1; // 0x1a4 TMovB
	var_200_bool = 0; // 0x1a5 PushV
	func_3621(var_200_bool); // 0x1a6 NEW_2
	if(var_200_bool == 0) goto Label_428; // 0x1a8 JumpB
	lshStopAnimation(); // 0x1a9 Func
	goto Label_430; // 0x1ab Jump
	
Label_430:
	return 0; // 0x1ae Return
	
Label_428:
	StopAnimation(); // 0x1ac Func
	
Label_432:
	return 0; // 0x1b0 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x2c9 PushI
	if(var_33_int == 0) goto Label_1458; // 0x2ca JumpB
	func_3407(); // 0x2cc NEW_2
	var_35_int = 28503; // 0x2ce PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x2cf Eq
	if(var_36_bool == 0) goto Label_726; // 0x2d0 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x2d1 PushV
	var_37_object = var_1_object; // 0x2d2 MovT
	var_38_object = var_0_object; // 0x2d3 MovT
	func_3663(); // 0x2d4 NEW_2
	
Label_726:
	var_73_int = 28614; // 0x2d6 PushI
	var_74_bool = var_32_cvector == var_73_int; // 0x2d7 Eq
	if(var_74_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x2d9 PushV
	var_75_object = var_1_object; // 0x2da MovT
	var_76_object = var_0_object; // 0x2db MovT
	func_3663(); // 0x2dc NEW_2
	
Label_734:
	var_77_int = 28691; // 0x2de PushI
	var_78_bool = var_32_cvector == var_77_int; // 0x2df Eq
	if(var_78_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x2e1 PushV
	var_79_object = var_1_object; // 0x2e2 MovT
	var_80_object = var_0_object; // 0x2e3 MovT
	func_3682(); // 0x2e4 NEW_2
	
Label_742:
	var_93_int = 28692; // 0x2e6 PushI
	var_94_bool = var_32_cvector == var_93_int; // 0x2e7 Eq
	if(var_94_bool == 0) goto Label_750; // 0x2e8 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x2e9 PushV
	var_95_object = var_1_object; // 0x2ea MovT
	var_96_object = var_0_object; // 0x2eb MovT
	func_3682(); // 0x2ec NEW_2
	
Label_750:
	var_97_int = 28639; // 0x2ee PushI
	var_98_bool = var_32_cvector == var_97_int; // 0x2ef Eq
	if(var_98_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x2f1 PushV
	var_99_object = var_1_object; // 0x2f2 MovT
	var_100_object = var_0_object; // 0x2f3 MovT
	func_3695(); // 0x2f4 NEW_2
	
Label_758:
	var_112_int = 41813; // 0x2f6 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x2f7 Eq
	if(var_113_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x2f9 PushV
	var_114_object = var_1_object; // 0x2fa MovT
	var_115_object = var_0_object; // 0x2fb MovT
	func_3726(); // 0x2fc NEW_2
	
Label_766:
	var_118_int = 41816; // 0x2fe PushI
	var_119_bool = var_32_cvector == var_118_int; // 0x2ff Eq
	if(var_119_bool == 0) goto Label_774; // 0x300 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x301 PushV
	var_120_object = var_1_object; // 0x302 MovT
	var_121_object = var_0_object; // 0x303 MovT
	func_3732(); // 0x304 NEW_2
	
Label_774:
	var_124_int = 41818; // 0x306 PushI
	var_125_bool = var_32_cvector == var_124_int; // 0x307 Eq
	if(var_125_bool == 0) goto Label_802; // 0x308 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x309 PushV
	var_126_object = var_1_object; // 0x30a MovT
	var_127_object = var_0_object; // 0x30b MovT
	func_3721(); // 0x30c NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x30e PushV
	var_136_object = var_1_object; // 0x30f MovT
	var_137_object = var_0_object; // 0x310 MovT
	func_3756(var_137_object); // 0x311 NEW_2
	var_157_object = Obj(); var_158_object = Obj(); // 0x313 PushV
	var_157_object = var_1_object; // 0x314 MovT
	var_158_object = var_0_object; // 0x315 MovT
	func_3715(); // 0x316 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); // 0x318 PushV
	var_161_object = var_1_object; // 0x319 MovT
	var_162_object = var_0_object; // 0x31a MovT
	func_3623(var_162_object); // 0x31b NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x31d PushV
	var_201_object = var_1_object; // 0x31e MovT
	var_202_object = var_0_object; // 0x31f MovT
	func_3766(var_202_object); // 0x320 NEW_2
	
Label_802:
	var_222_int = 41819; // 0x322 PushI
	var_223_bool = var_32_cvector == var_222_int; // 0x323 Eq
	if(var_223_bool == 0) goto Label_810; // 0x324 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x325 PushV
	var_224_object = var_1_object; // 0x326 MovT
	var_225_object = var_0_object; // 0x327 MovT
	func_3738(); // 0x328 NEW_2
	
Label_810:
	var_228_int = 28498; // 0x32a PushI
	var_229_bool = var_31_bool == var_228_int; // 0x32b Eq
	if(var_229_bool == 0) goto Label_951; // 0x32c JumpB
	var_230_string = ""; // 0x32d PushV
	var_230_string = "Neutral"; // 0x32e MovS
	func_690(var_32_cvector, var_230_string); // 0x32f NEW_2
	var_247_int = 527190; // 0x331 PushI
	SetMessage(var_247_int); // 0x332 TObjFunc
	ClearReplies(); // 0x334 TObjFunc
	var_248_bool = 0; var_249_object = Obj(); // 0x336 PushV
	var_249_object = var_1_object; // 0x337 MovT
	func_3811(var_249_object); // 0x338 NEW_2
	if(var_248_bool == 0) goto Label_832; // 0x33a JumpB
	var_256_int = 527191; // 0x33b PushI
	var_257_int = 28604; // 0x33c PushI
	var_258_int = 28499; // 0x33d PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x33e TObjFunc
	
Label_832:
	var_259_bool = 0; var_260_object = Obj(); // 0x340 PushV
	var_260_object = var_1_object; // 0x341 MovT
	func_3823(var_260_object); // 0x342 NEW_2
	if(var_259_bool == 0) goto Label_842; // 0x344 JumpB
	var_265_int = 527234; // 0x345 PushI
	var_266_int = 28615; // 0x346 PushI
	var_267_int = 28542; // 0x347 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x348 TObjFunc
	
Label_842:
	var_268_bool = 0; // 0x34a PushV
	var_268_bool = 0; // 0x34b MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x34c PushV
	var_270_object = var_1_object; // 0x34d MovT
	func_3847(var_269_bool, var_270_object); // 0x34e NEW_2
	if(var_269_bool == 0) goto Label_855; // 0x350 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x351 PushV
	var_278_object = var_1_object; // 0x352 MovT
	func_3835(var_278_object); // 0x353 NEW_2
	if(var_277_bool == 0) goto Label_855; // 0x355 JumpB
	var_268_bool = 1; // 0x356 MovB
	
Label_855:
	if(var_268_bool == 0) goto Label_861; // 0x357 JumpB
	var_283_int = 527310; // 0x358 PushI
	var_284_int = 28628; // 0x359 PushI
	var_285_int = 28627; // 0x35a PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x35b TObjFunc
	
Label_861:
	var_286_bool = 0; // 0x35d PushV
	var_286_bool = 0; // 0x35e MovB
	var_287_bool = 0; // 0x35f PushV
	var_287_bool = 0; // 0x360 MovB
	var_288_bool = 0; var_289_object = Obj(); // 0x361 PushV
	var_289_object = var_1_object; // 0x362 MovT
	func_3869(var_288_bool, var_289_object); // 0x363 NEW_2
	if(var_288_bool == 0) goto Label_876; // 0x365 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x366 PushV
	var_304_object = var_1_object; // 0x367 MovT
	func_3879(var_303_bool, var_304_object); // 0x368 NEW_2
	if(var_303_bool == 0) goto Label_876; // 0x36a JumpB
	var_287_bool = 1; // 0x36b MovB
	
Label_876:
	if(var_287_bool == 0) goto Label_883; // 0x36c JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x36d PushV
	var_318_object = var_1_object; // 0x36e MovT
	func_3909(var_318_object); // 0x36f NEW_2
	if(var_317_bool == 0) goto Label_883; // 0x371 JumpB
	var_286_bool = 1; // 0x372 MovB
	
Label_883:
	if(var_286_bool == 0) goto Label_889; // 0x373 JumpB
	var_323_int = 539861; // 0x374 PushI
	var_324_int = 41814; // 0x375 PushI
	var_325_int = 41813; // 0x376 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x377 TObjFunc
	
Label_889:
	var_326_bool = 0; // 0x379 PushV
	var_326_bool = 0; // 0x37a MovB
	var_327_bool = 0; // 0x37b PushV
	var_327_bool = 0; // 0x37c MovB
	var_328_bool = 0; var_329_object = Obj(); // 0x37d PushV
	var_329_object = var_1_object; // 0x37e MovT
	func_3869(var_328_bool, var_329_object); // 0x37f NEW_2
	if(var_328_bool == 0) goto Label_904; // 0x381 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x382 PushV
	var_331_object = var_1_object; // 0x383 MovT
	func_3889(var_330_bool, var_331_object); // 0x384 NEW_2
	if(var_330_bool == 0) goto Label_904; // 0x386 JumpB
	var_327_bool = 1; // 0x387 MovB
	
Label_904:
	if(var_327_bool == 0) goto Label_911; // 0x388 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x389 PushV
	var_338_object = var_1_object; // 0x38a MovT
	func_3921(var_338_object); // 0x38b NEW_2
	if(var_337_bool == 0) goto Label_911; // 0x38d JumpB
	var_326_bool = 1; // 0x38e MovB
	
Label_911:
	if(var_326_bool == 0) goto Label_917; // 0x38f JumpB
	var_343_int = 539864; // 0x390 PushI
	var_344_int = 41817; // 0x391 PushI
	var_345_int = 41816; // 0x392 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x393 TObjFunc
	
Label_917:
	var_346_bool = 0; // 0x395 PushV
	var_346_bool = 0; // 0x396 MovB
	var_347_bool = 0; // 0x397 PushV
	var_347_bool = 0; // 0x398 MovB
	var_348_bool = 0; var_349_object = Obj(); // 0x399 PushV
	var_349_object = var_1_object; // 0x39a MovT
	func_3869(var_348_bool, var_349_object); // 0x39b NEW_2
	if(var_348_bool == 0) goto Label_932; // 0x39d JumpB
	var_350_bool = 0; var_351_object = Obj(); // 0x39e PushV
	var_351_object = var_1_object; // 0x39f MovT
	func_3899(var_350_bool, var_351_object); // 0x3a0 NEW_2
	if(var_350_bool == 0) goto Label_932; // 0x3a2 JumpB
	var_347_bool = 1; // 0x3a3 MovB
	
Label_932:
	if(var_347_bool == 0) goto Label_939; // 0x3a4 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x3a5 PushV
	var_358_object = var_1_object; // 0x3a6 MovT
	func_3933(var_358_object); // 0x3a7 NEW_2
	if(var_357_bool == 0) goto Label_939; // 0x3a9 JumpB
	var_346_bool = 1; // 0x3aa MovB
	
Label_939:
	if(var_346_bool == 0) goto Label_945; // 0x3ab JumpB
	var_363_int = 539867; // 0x3ac PushI
	var_364_int = 41820; // 0x3ad PushI
	var_365_int = 41819; // 0x3ae PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x3af TObjFunc
	
Label_945:
	var_366_int = 527196; // 0x3b1 PushI
	var_367_int = -1; // 0x3b2 PushI
	var_368_int = 28504; // 0x3b3 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x3b4 TObjFunc
	return 0; // 0x3b6 Return
	
Label_951:
	var_369_int = 41820; // 0x3b7 PushI
	var_370_bool = var_31_bool == var_369_int; // 0x3b8 Eq
	if(var_370_bool == 0) goto Label_969; // 0x3b9 JumpB
	var_371_string = ""; // 0x3ba PushV
	var_371_string = "Doubt"; // 0x3bb MovS
	func_690(var_32_cvector, var_371_string); // 0x3bc NEW_2
	var_372_int = 539868; // 0x3be PushI
	SetMessage(var_372_int); // 0x3bf TObjFunc
	ClearReplies(); // 0x3c1 TObjFunc
	var_373_int = 539869; // 0x3c3 PushI
	var_374_int = -1; // 0x3c4 PushI
	var_375_int = 41821; // 0x3c5 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x3c6 TObjFunc
	return 0; // 0x3c8 Return
	
Label_969:
	var_376_int = 41817; // 0x3c9 PushI
	var_377_bool = var_31_bool == var_376_int; // 0x3ca Eq
	if(var_377_bool == 0) goto Label_987; // 0x3cb JumpB
	var_378_string = ""; // 0x3cc PushV
	var_378_string = "Neutral"; // 0x3cd MovS
	func_690(var_32_cvector, var_378_string); // 0x3ce NEW_2
	var_379_int = 539865; // 0x3d0 PushI
	SetMessage(var_379_int); // 0x3d1 TObjFunc
	ClearReplies(); // 0x3d3 TObjFunc
	var_380_int = 539866; // 0x3d5 PushI
	var_381_int = -1; // 0x3d6 PushI
	var_382_int = 41818; // 0x3d7 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x3d8 TObjFunc
	return 0; // 0x3da Return
	
Label_987:
	var_383_int = 41814; // 0x3db PushI
	var_384_bool = var_31_bool == var_383_int; // 0x3dc Eq
	if(var_384_bool == 0) goto Label_1005; // 0x3dd JumpB
	var_385_string = ""; // 0x3de PushV
	var_385_string = "Agression"; // 0x3df MovS
	func_690(var_32_cvector, var_385_string); // 0x3e0 NEW_2
	var_386_int = 539862; // 0x3e2 PushI
	SetMessage(var_386_int); // 0x3e3 TObjFunc
	ClearReplies(); // 0x3e5 TObjFunc
	var_387_int = 539863; // 0x3e7 PushI
	var_388_int = -1; // 0x3e8 PushI
	var_389_int = 41815; // 0x3e9 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x3ea TObjFunc
	return 0; // 0x3ec Return
	
Label_1005:
	var_390_int = 28628; // 0x3ed PushI
	var_391_bool = var_31_bool == var_390_int; // 0x3ee Eq
	if(var_391_bool == 0) goto Label_1028; // 0x3ef JumpB
	var_392_string = ""; // 0x3f0 PushV
	var_392_string = "Untrust"; // 0x3f1 MovS
	func_690(var_32_cvector, var_392_string); // 0x3f2 NEW_2
	var_393_int = 527311; // 0x3f4 PushI
	SetMessage(var_393_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_394_int = 527312; // 0x3f9 PushI
	var_395_int = 28632; // 0x3fa PushI
	var_396_int = 28629; // 0x3fb PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x3fc TObjFunc
	var_397_int = 527357; // 0x3fe PushI
	var_398_int = 28632; // 0x3ff PushI
	var_399_int = 28676; // 0x400 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_400_int = 28632; // 0x404 PushI
	var_401_bool = var_31_bool == var_400_int; // 0x405 Eq
	if(var_401_bool == 0) goto Label_1051; // 0x406 JumpB
	var_402_string = ""; // 0x407 PushV
	var_402_string = "Agression"; // 0x408 MovS
	func_690(var_32_cvector, var_402_string); // 0x409 NEW_2
	var_403_int = 527315; // 0x40b PushI
	SetMessage(var_403_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_404_int = 527316; // 0x410 PushI
	var_405_int = 28634; // 0x411 PushI
	var_406_int = 28633; // 0x412 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x413 TObjFunc
	var_407_int = 527358; // 0x415 PushI
	var_408_int = 28634; // 0x416 PushI
	var_409_int = 28678; // 0x417 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_410_int = 28634; // 0x41b PushI
	var_411_bool = var_31_bool == var_410_int; // 0x41c Eq
	if(var_411_bool == 0) goto Label_1074; // 0x41d JumpB
	var_412_string = ""; // 0x41e PushV
	var_412_string = "Neutral"; // 0x41f MovS
	func_690(var_32_cvector, var_412_string); // 0x420 NEW_2
	var_413_int = 527317; // 0x422 PushI
	SetMessage(var_413_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_414_int = 527318; // 0x427 PushI
	var_415_int = 28636; // 0x428 PushI
	var_416_int = 28635; // 0x429 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x42a TObjFunc
	var_417_int = 527359; // 0x42c PushI
	var_418_int = 28638; // 0x42d PushI
	var_419_int = 28680; // 0x42e PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_420_int = 28636; // 0x432 PushI
	var_421_bool = var_31_bool == var_420_int; // 0x433 Eq
	if(var_421_bool == 0) goto Label_1092; // 0x434 JumpB
	var_422_string = ""; // 0x435 PushV
	var_422_string = "Neutral"; // 0x436 MovS
	func_690(var_32_cvector, var_422_string); // 0x437 NEW_2
	var_423_int = 527319; // 0x439 PushI
	SetMessage(var_423_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_424_int = 527320; // 0x43e PushI
	var_425_int = 28638; // 0x43f PushI
	var_426_int = 28637; // 0x440 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x441 TObjFunc
	return 0; // 0x443 Return
	
Label_1092:
	var_427_int = 28638; // 0x444 PushI
	var_428_bool = var_31_bool == var_427_int; // 0x445 Eq
	if(var_428_bool == 0) goto Label_1110; // 0x446 JumpB
	var_429_string = ""; // 0x447 PushV
	var_429_string = "Neutral"; // 0x448 MovS
	func_690(var_32_cvector, var_429_string); // 0x449 NEW_2
	var_430_int = 527321; // 0x44b PushI
	SetMessage(var_430_int); // 0x44c TObjFunc
	ClearReplies(); // 0x44e TObjFunc
	var_431_int = 527322; // 0x450 PushI
	var_432_int = -1; // 0x451 PushI
	var_433_int = 28639; // 0x452 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x453 TObjFunc
	return 0; // 0x455 Return
	
Label_1110:
	var_434_int = 28615; // 0x456 PushI
	var_435_bool = var_31_bool == var_434_int; // 0x457 Eq
	if(var_435_bool == 0) goto Label_1128; // 0x458 JumpB
	var_436_string = ""; // 0x459 PushV
	var_436_string = "Agression"; // 0x45a MovS
	func_690(var_32_cvector, var_436_string); // 0x45b NEW_2
	var_437_int = 527299; // 0x45d PushI
	SetMessage(var_437_int); // 0x45e TObjFunc
	ClearReplies(); // 0x460 TObjFunc
	var_438_int = 527300; // 0x462 PushI
	var_439_int = 28617; // 0x463 PushI
	var_440_int = 28616; // 0x464 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x465 TObjFunc
	return 0; // 0x467 Return
	
Label_1128:
	var_441_int = 28617; // 0x468 PushI
	var_442_bool = var_31_bool == var_441_int; // 0x469 Eq
	if(var_442_bool == 0) goto Label_1146; // 0x46a JumpB
	var_443_string = ""; // 0x46b PushV
	var_443_string = "Neutral"; // 0x46c MovS
	func_690(var_32_cvector, var_443_string); // 0x46d NEW_2
	var_444_int = 527301; // 0x46f PushI
	SetMessage(var_444_int); // 0x470 TObjFunc
	ClearReplies(); // 0x472 TObjFunc
	var_445_int = 527302; // 0x474 PushI
	var_446_int = 28619; // 0x475 PushI
	var_447_int = 28618; // 0x476 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x477 TObjFunc
	return 0; // 0x479 Return
	
Label_1146:
	var_448_int = 28619; // 0x47a PushI
	var_449_bool = var_31_bool == var_448_int; // 0x47b Eq
	if(var_449_bool == 0) goto Label_1164; // 0x47c JumpB
	var_450_string = ""; // 0x47d PushV
	var_450_string = "Untrust"; // 0x47e MovS
	func_690(var_32_cvector, var_450_string); // 0x47f NEW_2
	var_451_int = 527303; // 0x481 PushI
	SetMessage(var_451_int); // 0x482 TObjFunc
	ClearReplies(); // 0x484 TObjFunc
	var_452_int = 527304; // 0x486 PushI
	var_453_int = 28543; // 0x487 PushI
	var_454_int = 28620; // 0x488 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x489 TObjFunc
	return 0; // 0x48b Return
	
Label_1164:
	var_455_int = 28543; // 0x48c PushI
	var_456_bool = var_31_bool == var_455_int; // 0x48d Eq
	if(var_456_bool == 0) goto Label_1182; // 0x48e JumpB
	var_457_string = ""; // 0x48f PushV
	var_457_string = "Doubt"; // 0x490 MovS
	func_690(var_32_cvector, var_457_string); // 0x491 NEW_2
	var_458_int = 527235; // 0x493 PushI
	SetMessage(var_458_int); // 0x494 TObjFunc
	ClearReplies(); // 0x496 TObjFunc
	var_459_int = 527236; // 0x498 PushI
	var_460_int = 28621; // 0x499 PushI
	var_461_int = 28544; // 0x49a PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x49b TObjFunc
	return 0; // 0x49d Return
	
Label_1182:
	var_462_int = 28621; // 0x49e PushI
	var_463_bool = var_31_bool == var_462_int; // 0x49f Eq
	if(var_463_bool == 0) goto Label_1200; // 0x4a0 JumpB
	var_464_string = ""; // 0x4a1 PushV
	var_464_string = "Neutral"; // 0x4a2 MovS
	func_690(var_32_cvector, var_464_string); // 0x4a3 NEW_2
	var_465_int = 527305; // 0x4a5 PushI
	SetMessage(var_465_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_466_int = 527306; // 0x4aa PushI
	var_467_int = 28623; // 0x4ab PushI
	var_468_int = 28622; // 0x4ac PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4ad TObjFunc
	return 0; // 0x4af Return
	
Label_1200:
	var_469_int = 28623; // 0x4b0 PushI
	var_470_bool = var_31_bool == var_469_int; // 0x4b1 Eq
	if(var_470_bool == 0) goto Label_1223; // 0x4b2 JumpB
	var_471_string = ""; // 0x4b3 PushV
	var_471_string = "Doubt"; // 0x4b4 MovS
	func_690(var_32_cvector, var_471_string); // 0x4b5 NEW_2
	var_472_int = 527307; // 0x4b7 PushI
	SetMessage(var_472_int); // 0x4b8 TObjFunc
	ClearReplies(); // 0x4ba TObjFunc
	var_473_int = 527308; // 0x4bc PushI
	var_474_int = 28545; // 0x4bd PushI
	var_475_int = 28624; // 0x4be PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x4bf TObjFunc
	var_476_int = 527309; // 0x4c1 PushI
	var_477_int = 28545; // 0x4c2 PushI
	var_478_int = 28625; // 0x4c3 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x4c4 TObjFunc
	return 0; // 0x4c6 Return
	
Label_1223:
	var_479_int = 28545; // 0x4c7 PushI
	var_480_bool = var_31_bool == var_479_int; // 0x4c8 Eq
	if(var_480_bool == 0) goto Label_1246; // 0x4c9 JumpB
	var_481_string = ""; // 0x4ca PushV
	var_481_string = "Neutral"; // 0x4cb MovS
	func_690(var_32_cvector, var_481_string); // 0x4cc NEW_2
	var_482_int = 527237; // 0x4ce PushI
	SetMessage(var_482_int); // 0x4cf TObjFunc
	ClearReplies(); // 0x4d1 TObjFunc
	var_483_int = 527360; // 0x4d3 PushI
	var_484_int = 28683; // 0x4d4 PushI
	var_485_int = 28682; // 0x4d5 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x4d6 TObjFunc
	var_486_int = 527238; // 0x4d8 PushI
	var_487_int = 28630; // 0x4d9 PushI
	var_488_int = 28546; // 0x4da PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x4db TObjFunc
	return 0; // 0x4dd Return
	
Label_1246:
	var_489_int = 28630; // 0x4de PushI
	var_490_bool = var_31_bool == var_489_int; // 0x4df Eq
	if(var_490_bool == 0) goto Label_1264; // 0x4e0 JumpB
	var_491_string = ""; // 0x4e1 PushV
	var_491_string = "Doubt"; // 0x4e2 MovS
	func_690(var_32_cvector, var_491_string); // 0x4e3 NEW_2
	var_492_int = 527313; // 0x4e5 PushI
	SetMessage(var_492_int); // 0x4e6 TObjFunc
	ClearReplies(); // 0x4e8 TObjFunc
	var_493_int = 527314; // 0x4ea PushI
	var_494_int = 28685; // 0x4eb PushI
	var_495_int = 28631; // 0x4ec PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x4ed TObjFunc
	return 0; // 0x4ef Return
	
Label_1264:
	var_496_int = 28683; // 0x4f0 PushI
	var_497_bool = var_31_bool == var_496_int; // 0x4f1 Eq
	if(var_497_bool == 0) goto Label_1282; // 0x4f2 JumpB
	var_498_string = ""; // 0x4f3 PushV
	var_498_string = "Untrust"; // 0x4f4 MovS
	func_690(var_32_cvector, var_498_string); // 0x4f5 NEW_2
	var_499_int = 527361; // 0x4f7 PushI
	SetMessage(var_499_int); // 0x4f8 TObjFunc
	ClearReplies(); // 0x4fa TObjFunc
	var_500_int = 527362; // 0x4fc PushI
	var_501_int = 28685; // 0x4fd PushI
	var_502_int = 28684; // 0x4fe PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_503_int = 28685; // 0x502 PushI
	var_504_bool = var_31_bool == var_503_int; // 0x503 Eq
	if(var_504_bool == 0) goto Label_1300; // 0x504 JumpB
	var_505_string = ""; // 0x505 PushV
	var_505_string = "Untrust"; // 0x506 MovS
	func_690(var_32_cvector, var_505_string); // 0x507 NEW_2
	var_506_int = 527363; // 0x509 PushI
	SetMessage(var_506_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_507_int = 527364; // 0x50e PushI
	var_508_int = 28687; // 0x50f PushI
	var_509_int = 28686; // 0x510 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_510_int = 28687; // 0x514 PushI
	var_511_bool = var_31_bool == var_510_int; // 0x515 Eq
	if(var_511_bool == 0) goto Label_1318; // 0x516 JumpB
	var_512_string = ""; // 0x517 PushV
	var_512_string = "Untrust"; // 0x518 MovS
	func_690(var_32_cvector, var_512_string); // 0x519 NEW_2
	var_513_int = 527365; // 0x51b PushI
	SetMessage(var_513_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_514_int = 527366; // 0x520 PushI
	var_515_int = 28689; // 0x521 PushI
	var_516_int = 28688; // 0x522 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x523 TObjFunc
	return 0; // 0x525 Return
	
Label_1318:
	var_517_int = 28689; // 0x526 PushI
	var_518_bool = var_31_bool == var_517_int; // 0x527 Eq
	if(var_518_bool == 0) goto Label_1341; // 0x528 JumpB
	var_519_string = ""; // 0x529 PushV
	var_519_string = "Untrust"; // 0x52a MovS
	func_690(var_32_cvector, var_519_string); // 0x52b NEW_2
	var_520_int = 527367; // 0x52d PushI
	SetMessage(var_520_int); // 0x52e TObjFunc
	ClearReplies(); // 0x530 TObjFunc
	var_521_int = 527368; // 0x532 PushI
	var_522_int = -1; // 0x533 PushI
	var_523_int = 28691; // 0x534 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x535 TObjFunc
	var_524_int = 527369; // 0x537 PushI
	var_525_int = -1; // 0x538 PushI
	var_526_int = 28692; // 0x539 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x53a TObjFunc
	return 0; // 0x53c Return
	
Label_1341:
	var_527_int = 28604; // 0x53d PushI
	var_528_bool = var_31_bool == var_527_int; // 0x53e Eq
	if(var_528_bool == 0) goto Label_1364; // 0x53f JumpB
	var_529_string = ""; // 0x540 PushV
	var_529_string = "Doubt"; // 0x541 MovS
	func_690(var_32_cvector, var_529_string); // 0x542 NEW_2
	var_530_int = 527290; // 0x544 PushI
	SetMessage(var_530_int); // 0x545 TObjFunc
	ClearReplies(); // 0x547 TObjFunc
	var_531_int = 527291; // 0x549 PushI
	var_532_int = 28500; // 0x54a PushI
	var_533_int = 28605; // 0x54b PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x54c TObjFunc
	var_534_int = 527296; // 0x54e PushI
	var_535_int = 28609; // 0x54f PushI
	var_536_int = 28610; // 0x550 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x551 TObjFunc
	return 0; // 0x553 Return
	
Label_1364:
	var_537_int = 28500; // 0x554 PushI
	var_538_bool = var_31_bool == var_537_int; // 0x555 Eq
	if(var_538_bool == 0) goto Label_1387; // 0x556 JumpB
	var_539_string = ""; // 0x557 PushV
	var_539_string = "Doubt"; // 0x558 MovS
	func_690(var_32_cvector, var_539_string); // 0x559 NEW_2
	var_540_int = 527192; // 0x55b PushI
	SetMessage(var_540_int); // 0x55c TObjFunc
	ClearReplies(); // 0x55e TObjFunc
	var_541_int = 527294; // 0x560 PushI
	var_542_int = 28609; // 0x561 PushI
	var_543_int = 28608; // 0x562 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x563 TObjFunc
	var_544_int = 527297; // 0x565 PushI
	var_545_int = 28609; // 0x566 PushI
	var_546_int = 28612; // 0x567 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x568 TObjFunc
	return 0; // 0x56a Return
	
Label_1387:
	var_547_int = 28609; // 0x56b PushI
	var_548_bool = var_31_bool == var_547_int; // 0x56c Eq
	if(var_548_bool == 0) goto Label_1410; // 0x56d JumpB
	var_549_string = ""; // 0x56e PushV
	var_549_string = "Agression"; // 0x56f MovS
	func_690(var_32_cvector, var_549_string); // 0x570 NEW_2
	var_550_int = 527295; // 0x572 PushI
	SetMessage(var_550_int); // 0x573 TObjFunc
	ClearReplies(); // 0x575 TObjFunc
	var_551_int = 527292; // 0x577 PushI
	var_552_int = 28607; // 0x578 PushI
	var_553_int = 28606; // 0x579 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x57a TObjFunc
	var_554_int = 527298; // 0x57c PushI
	var_555_int = -1; // 0x57d PushI
	var_556_int = 28614; // 0x57e PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x57f TObjFunc
	return 0; // 0x581 Return
	
Label_1410:
	var_557_int = 28607; // 0x582 PushI
	var_558_bool = var_31_bool == var_557_int; // 0x583 Eq
	if(var_558_bool == 0) goto Label_1428; // 0x584 JumpB
	var_559_string = ""; // 0x585 PushV
	var_559_string = "Agression"; // 0x586 MovS
	func_690(var_32_cvector, var_559_string); // 0x587 NEW_2
	var_560_int = 527293; // 0x589 PushI
	SetMessage(var_560_int); // 0x58a TObjFunc
	ClearReplies(); // 0x58c TObjFunc
	var_561_int = 527193; // 0x58e PushI
	var_562_int = 28502; // 0x58f PushI
	var_563_int = 28501; // 0x590 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x591 TObjFunc
	return 0; // 0x593 Return
	
Label_1428:
	var_564_int = 28502; // 0x594 PushI
	var_565_bool = var_31_bool == var_564_int; // 0x595 Eq
	if(var_565_bool == 0) goto Label_1446; // 0x596 JumpB
	var_566_string = ""; // 0x597 PushV
	var_566_string = "Neutral"; // 0x598 MovS
	func_690(var_32_cvector, var_566_string); // 0x599 NEW_2
	var_567_int = 527194; // 0x59b PushI
	SetMessage(var_567_int); // 0x59c TObjFunc
	ClearReplies(); // 0x59e TObjFunc
	var_568_int = 527195; // 0x5a0 PushI
	var_569_int = -1; // 0x5a1 PushI
	var_570_int = 28503; // 0x5a2 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x5a3 TObjFunc
	return 0; // 0x5a5 Return
	
Label_1446:
	var_3_string = 1; // 0x5a6 TMovB
	var_571_bool = 0; // 0x5a7 PushV
	func_3621(var_571_bool); // 0x5a8 NEW_2
	if(var_571_bool == 0) goto Label_1454; // 0x5aa JumpB
	lshStopAnimation(); // 0x5ab Func
	goto Label_1456; // 0x5ad Jump
	
Label_1456:
	return 0; // 0x5b0 Return
	
Label_1454:
	StopAnimation(); // 0x5ae Func
	
Label_1458:
	return 0; // 0x5b2 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x655 PushI
	if(var_33_int == 0) goto Label_1720; // 0x656 JumpB
	func_3407(); // 0x658 NEW_2
	var_35_int = 29439; // 0x65a PushI
	var_36_bool = var_31_bool == var_35_int; // 0x65b Eq
	if(var_36_bool == 0) goto Label_1649; // 0x65c JumpB
	var_37_string = ""; // 0x65d PushV
	var_37_string = "Neutral"; // 0x65e MovS
	func_1598(var_32_cvector, var_37_string); // 0x65f NEW_2
	var_54_int = 528095; // 0x661 PushI
	SetMessage(var_54_int); // 0x662 TObjFunc
	ClearReplies(); // 0x664 TObjFunc
	var_55_int = 528096; // 0x666 PushI
	var_56_int = 29441; // 0x667 PushI
	var_57_int = 29440; // 0x668 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x669 TObjFunc
	var_58_int = 528105; // 0x66b PushI
	var_59_int = 29450; // 0x66c PushI
	var_60_int = 29449; // 0x66d PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x66e TObjFunc
	return 0; // 0x670 Return
	
Label_1649:
	var_61_int = 29450; // 0x671 PushI
	var_62_bool = var_31_bool == var_61_int; // 0x672 Eq
	if(var_62_bool == 0) goto Label_1667; // 0x673 JumpB
	var_63_string = ""; // 0x674 PushV
	var_63_string = "Neutral"; // 0x675 MovS
	func_1598(var_32_cvector, var_63_string); // 0x676 NEW_2
	var_64_int = 528106; // 0x678 PushI
	SetMessage(var_64_int); // 0x679 TObjFunc
	ClearReplies(); // 0x67b TObjFunc
	var_65_int = 528107; // 0x67d PushI
	var_66_int = 29441; // 0x67e PushI
	var_67_int = 29451; // 0x67f PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x680 TObjFunc
	return 0; // 0x682 Return
	
Label_1667:
	var_68_int = 29441; // 0x683 PushI
	var_69_bool = var_31_bool == var_68_int; // 0x684 Eq
	if(var_69_bool == 0) goto Label_1690; // 0x685 JumpB
	var_70_string = ""; // 0x686 PushV
	var_70_string = "Neutral"; // 0x687 MovS
	func_1598(var_32_cvector, var_70_string); // 0x688 NEW_2
	var_71_int = 528097; // 0x68a PushI
	SetMessage(var_71_int); // 0x68b TObjFunc
	ClearReplies(); // 0x68d TObjFunc
	var_72_int = 528098; // 0x68f PushI
	var_73_int = 29443; // 0x690 PushI
	var_74_int = 29442; // 0x691 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x692 TObjFunc
	var_75_int = 528108; // 0x694 PushI
	var_76_int = -1; // 0x695 PushI
	var_77_int = 29453; // 0x696 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x697 TObjFunc
	return 0; // 0x699 Return
	
Label_1690:
	var_78_int = 29443; // 0x69a PushI
	var_79_bool = var_31_bool == var_78_int; // 0x69b Eq
	if(var_79_bool == 0) goto Label_1708; // 0x69c JumpB
	var_80_string = ""; // 0x69d PushV
	var_80_string = "Neutral"; // 0x69e MovS
	func_1598(var_32_cvector, var_80_string); // 0x69f NEW_2
	var_81_int = 528099; // 0x6a1 PushI
	SetMessage(var_81_int); // 0x6a2 TObjFunc
	ClearReplies(); // 0x6a4 TObjFunc
	var_82_int = 528100; // 0x6a6 PushI
	var_83_int = -1; // 0x6a7 PushI
	var_84_int = 29444; // 0x6a8 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x6a9 TObjFunc
	return 0; // 0x6ab Return
	
Label_1708:
	var_3_string = 1; // 0x6ac TMovB
	var_85_bool = 0; // 0x6ad PushV
	func_3621(var_85_bool); // 0x6ae NEW_2
	if(var_85_bool == 0) goto Label_1716; // 0x6b0 JumpB
	lshStopAnimation(); // 0x6b1 Func
	goto Label_1718; // 0x6b3 Jump
	
Label_1718:
	return 0; // 0x6b6 Return
	
Label_1716:
	StopAnimation(); // 0x6b4 Func
	
Label_1720:
	return 0; // 0x6b8 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x779 PushI
	if(var_33_int == 0) goto Label_2215; // 0x77a JumpB
	func_3407(); // 0x77c NEW_2
	var_35_int = 31266; // 0x77e PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x77f Eq
	if(var_36_bool == 0) goto Label_1926; // 0x780 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x781 PushV
	var_37_object = var_1_object; // 0x782 MovT
	var_38_object = var_0_object; // 0x783 MovT
	func_3705(); // 0x784 NEW_2
	
Label_1926:
	var_68_int = 31267; // 0x786 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x787 Eq
	if(var_69_bool == 0) goto Label_1934; // 0x788 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x789 PushV
	var_70_object = var_1_object; // 0x78a MovT
	var_71_object = var_0_object; // 0x78b MovT
	func_3705(); // 0x78c NEW_2
	
Label_1934:
	var_72_int = 31212; // 0x78e PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x78f Eq
	if(var_73_bool == 0) goto Label_1942; // 0x790 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x791 PushV
	var_74_object = var_1_object; // 0x792 MovT
	var_75_object = var_0_object; // 0x793 MovT
	func_3744(); // 0x794 NEW_2
	
Label_1942:
	var_78_int = 31174; // 0x796 PushI
	var_79_bool = var_31_bool == var_78_int; // 0x797 Eq
	if(var_79_bool == 0) goto Label_1995; // 0x798 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x799 PushV
	var_81_object = var_1_object; // 0x79a MovT
	func_3857(var_81_object); // 0x79b NEW_2
	if(var_80_bool == 0) goto Label_1970; // 0x79d JumpB
	var_88_string = ""; // 0x79e PushV
	var_88_string = "Doubt"; // 0x79f MovS
	func_1890(var_32_cvector, var_88_string); // 0x7a0 NEW_2
	var_105_int = 529720; // 0x7a2 PushI
	SetMessage(var_105_int); // 0x7a3 TObjFunc
	ClearReplies(); // 0x7a5 TObjFunc
	var_106_int = 529743; // 0x7a7 PushI
	var_107_int = 31200; // 0x7a8 PushI
	var_108_int = 31198; // 0x7a9 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x7aa TObjFunc
	var_109_int = 529744; // 0x7ac PushI
	var_110_int = 31206; // 0x7ad PushI
	var_111_int = 31199; // 0x7ae PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x7af TObjFunc
	return 0; // 0x7b1 Return
	
Label_1970:
	var_112_string = ""; // 0x7b2 PushV
	var_112_string = "Agression"; // 0x7b3 MovS
	func_1890(var_32_cvector, var_112_string); // 0x7b4 NEW_2
	var_113_int = 529758; // 0x7b6 PushI
	SetMessage(var_113_int); // 0x7b7 TObjFunc
	ClearReplies(); // 0x7b9 TObjFunc
	var_114_bool = 0; var_115_object = Obj(); // 0x7bb PushV
	var_115_object = var_1_object; // 0x7bc MovT
	func_3945(var_115_object); // 0x7bd NEW_2
	if(var_114_bool == 0) goto Label_1989; // 0x7bf JumpB
	var_120_int = 529756; // 0x7c0 PushI
	var_121_int = 31213; // 0x7c1 PushI
	var_122_int = 31212; // 0x7c2 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x7c3 TObjFunc
	
Label_1989:
	var_123_int = 529759; // 0x7c5 PushI
	var_124_int = -1; // 0x7c6 PushI
	var_125_int = 31215; // 0x7c7 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x7c8 TObjFunc
	return 0; // 0x7ca Return
	
Label_1995:
	var_126_int = 31213; // 0x7cb PushI
	var_127_bool = var_31_bool == var_126_int; // 0x7cc Eq
	if(var_127_bool == 0) goto Label_2013; // 0x7cd JumpB
	var_128_string = ""; // 0x7ce PushV
	var_128_string = "Agression"; // 0x7cf MovS
	func_1890(var_32_cvector, var_128_string); // 0x7d0 NEW_2
	var_129_int = 529757; // 0x7d2 PushI
	SetMessage(var_129_int); // 0x7d3 TObjFunc
	ClearReplies(); // 0x7d5 TObjFunc
	var_130_int = 529760; // 0x7d7 PushI
	var_131_int = 31217; // 0x7d8 PushI
	var_132_int = 31216; // 0x7d9 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x7da TObjFunc
	return 0; // 0x7dc Return
	
Label_2013:
	var_133_int = 31217; // 0x7dd PushI
	var_134_bool = var_31_bool == var_133_int; // 0x7de Eq
	if(var_134_bool == 0) goto Label_2031; // 0x7df JumpB
	var_135_string = ""; // 0x7e0 PushV
	var_135_string = "Neutral"; // 0x7e1 MovS
	func_1890(var_32_cvector, var_135_string); // 0x7e2 NEW_2
	var_136_int = 529761; // 0x7e4 PushI
	SetMessage(var_136_int); // 0x7e5 TObjFunc
	ClearReplies(); // 0x7e7 TObjFunc
	var_137_int = 529762; // 0x7e9 PushI
	var_138_int = 31219; // 0x7ea PushI
	var_139_int = 31218; // 0x7eb PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x7ec TObjFunc
	return 0; // 0x7ee Return
	
Label_2031:
	var_140_int = 31219; // 0x7ef PushI
	var_141_bool = var_31_bool == var_140_int; // 0x7f0 Eq
	if(var_141_bool == 0) goto Label_2049; // 0x7f1 JumpB
	var_142_string = ""; // 0x7f2 PushV
	var_142_string = "Untrust"; // 0x7f3 MovS
	func_1890(var_32_cvector, var_142_string); // 0x7f4 NEW_2
	var_143_int = 529763; // 0x7f6 PushI
	SetMessage(var_143_int); // 0x7f7 TObjFunc
	ClearReplies(); // 0x7f9 TObjFunc
	var_144_int = 529764; // 0x7fb PushI
	var_145_int = 31221; // 0x7fc PushI
	var_146_int = 31220; // 0x7fd PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7fe TObjFunc
	return 0; // 0x800 Return
	
Label_2049:
	var_147_int = 31221; // 0x801 PushI
	var_148_bool = var_31_bool == var_147_int; // 0x802 Eq
	if(var_148_bool == 0) goto Label_2072; // 0x803 JumpB
	var_149_string = ""; // 0x804 PushV
	var_149_string = "Neutral"; // 0x805 MovS
	func_1890(var_32_cvector, var_149_string); // 0x806 NEW_2
	var_150_int = 529765; // 0x808 PushI
	SetMessage(var_150_int); // 0x809 TObjFunc
	ClearReplies(); // 0x80b TObjFunc
	var_151_int = 529766; // 0x80d PushI
	var_152_int = -1; // 0x80e PushI
	var_153_int = 31222; // 0x80f PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x810 TObjFunc
	var_154_int = 529767; // 0x812 PushI
	var_155_int = -1; // 0x813 PushI
	var_156_int = 31223; // 0x814 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x815 TObjFunc
	return 0; // 0x817 Return
	
Label_2072:
	var_157_int = 31200; // 0x818 PushI
	var_158_bool = var_31_bool == var_157_int; // 0x819 Eq
	if(var_158_bool == 0) goto Label_2090; // 0x81a JumpB
	var_159_string = ""; // 0x81b PushV
	var_159_string = "Neutral"; // 0x81c MovS
	func_1890(var_32_cvector, var_159_string); // 0x81d NEW_2
	var_160_int = 529745; // 0x81f PushI
	SetMessage(var_160_int); // 0x820 TObjFunc
	ClearReplies(); // 0x822 TObjFunc
	var_161_int = 529749; // 0x824 PushI
	var_162_int = 31205; // 0x825 PushI
	var_163_int = 31204; // 0x826 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x827 TObjFunc
	return 0; // 0x829 Return
	
Label_2090:
	var_164_int = 31205; // 0x82a PushI
	var_165_bool = var_31_bool == var_164_int; // 0x82b Eq
	if(var_165_bool == 0) goto Label_2108; // 0x82c JumpB
	var_166_string = ""; // 0x82d PushV
	var_166_string = "Neutral"; // 0x82e MovS
	func_1890(var_32_cvector, var_166_string); // 0x82f NEW_2
	var_167_int = 529750; // 0x831 PushI
	SetMessage(var_167_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_168_int = 529746; // 0x836 PushI
	var_169_int = 31202; // 0x837 PushI
	var_170_int = 31201; // 0x838 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x839 TObjFunc
	return 0; // 0x83b Return
	
Label_2108:
	var_171_int = 31202; // 0x83c PushI
	var_172_bool = var_31_bool == var_171_int; // 0x83d Eq
	if(var_172_bool == 0) goto Label_2126; // 0x83e JumpB
	var_173_string = ""; // 0x83f PushV
	var_173_string = "Neutral"; // 0x840 MovS
	func_1890(var_32_cvector, var_173_string); // 0x841 NEW_2
	var_174_int = 529747; // 0x843 PushI
	SetMessage(var_174_int); // 0x844 TObjFunc
	ClearReplies(); // 0x846 TObjFunc
	var_175_int = 529748; // 0x848 PushI
	var_176_int = 31206; // 0x849 PushI
	var_177_int = 31203; // 0x84a PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x84b TObjFunc
	return 0; // 0x84d Return
	
Label_2126:
	var_178_int = 31206; // 0x84e PushI
	var_179_bool = var_31_bool == var_178_int; // 0x84f Eq
	if(var_179_bool == 0) goto Label_2144; // 0x850 JumpB
	var_180_string = ""; // 0x851 PushV
	var_180_string = "Doubt"; // 0x852 MovS
	func_1890(var_32_cvector, var_180_string); // 0x853 NEW_2
	var_181_int = 529751; // 0x855 PushI
	SetMessage(var_181_int); // 0x856 TObjFunc
	ClearReplies(); // 0x858 TObjFunc
	var_182_int = 529752; // 0x85a PushI
	var_183_int = 31209; // 0x85b PushI
	var_184_int = 31208; // 0x85c PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x85d TObjFunc
	return 0; // 0x85f Return
	
Label_2144:
	var_185_int = 31209; // 0x860 PushI
	var_186_bool = var_31_bool == var_185_int; // 0x861 Eq
	if(var_186_bool == 0) goto Label_2162; // 0x862 JumpB
	var_187_string = ""; // 0x863 PushV
	var_187_string = "Doubt"; // 0x864 MovS
	func_1890(var_32_cvector, var_187_string); // 0x865 NEW_2
	var_188_int = 529753; // 0x867 PushI
	SetMessage(var_188_int); // 0x868 TObjFunc
	ClearReplies(); // 0x86a TObjFunc
	var_189_int = 541110; // 0x86c PushI
	var_190_int = 43225; // 0x86d PushI
	var_191_int = 43224; // 0x86e PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x86f TObjFunc
	return 0; // 0x871 Return
	
Label_2162:
	var_192_int = 43225; // 0x872 PushI
	var_193_bool = var_31_bool == var_192_int; // 0x873 Eq
	if(var_193_bool == 0) goto Label_2180; // 0x874 JumpB
	var_194_string = ""; // 0x875 PushV
	var_194_string = "Doubt"; // 0x876 MovS
	func_1890(var_32_cvector, var_194_string); // 0x877 NEW_2
	var_195_int = 541111; // 0x879 PushI
	SetMessage(var_195_int); // 0x87a TObjFunc
	ClearReplies(); // 0x87c TObjFunc
	var_196_int = 529754; // 0x87e PushI
	var_197_int = 31211; // 0x87f PushI
	var_198_int = 31210; // 0x880 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x881 TObjFunc
	return 0; // 0x883 Return
	
Label_2180:
	var_199_int = 31211; // 0x884 PushI
	var_200_bool = var_31_bool == var_199_int; // 0x885 Eq
	if(var_200_bool == 0) goto Label_2203; // 0x886 JumpB
	var_201_string = ""; // 0x887 PushV
	var_201_string = "Neutral"; // 0x888 MovS
	func_1890(var_32_cvector, var_201_string); // 0x889 NEW_2
	var_202_int = 529755; // 0x88b PushI
	SetMessage(var_202_int); // 0x88c TObjFunc
	ClearReplies(); // 0x88e TObjFunc
	var_203_int = 529807; // 0x890 PushI
	var_204_int = -1; // 0x891 PushI
	var_205_int = 31266; // 0x892 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x893 TObjFunc
	var_206_int = 529808; // 0x895 PushI
	var_207_int = -1; // 0x896 PushI
	var_208_int = 31267; // 0x897 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x898 TObjFunc
	return 0; // 0x89a Return
	
Label_2203:
	var_3_string = 1; // 0x89b TMovB
	var_209_bool = 0; // 0x89c PushV
	func_3621(var_209_bool); // 0x89d NEW_2
	if(var_209_bool == 0) goto Label_2211; // 0x89f JumpB
	lshStopAnimation(); // 0x8a0 Func
	goto Label_2213; // 0x8a2 Jump
	
Label_2213:
	return 0; // 0x8a5 Return
	
Label_2211:
	StopAnimation(); // 0x8a3 Func
	
Label_2215:
	return 0; // 0x8a7 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x969 PushI
	if(var_33_int == 0) goto Label_2603; // 0x96a JumpB
	func_3407(); // 0x96c NEW_2
	var_35_int = 45364; // 0x96e PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x96f Eq
	if(var_36_bool == 0) goto Label_2422; // 0x970 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x971 PushV
	var_37_object = var_1_object; // 0x972 MovT
	var_38_object = var_0_object; // 0x973 MovT
	func_3750(); // 0x974 NEW_2
	
Label_2422:
	var_41_int = 41191; // 0x976 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x977 Eq
	if(var_42_bool == 0) goto Label_2476; // 0x978 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x979 PushV
	var_44_object = var_1_object; // 0x97a MovT
	func_3777(var_43_bool, var_44_object); // 0x97b NEW_2
	var_54_bool = var_43_bool == 0; // 0x97d Not
	if(var_54_bool == 0) goto Label_2456; // 0x97e JumpB
	var_55_string = ""; // 0x97f PushV
	var_55_string = "Neutral"; // 0x980 MovS
	func_2386(var_32_cvector, var_55_string); // 0x981 NEW_2
	var_72_int = 539248; // 0x983 PushI
	SetMessage(var_72_int); // 0x984 TObjFunc
	ClearReplies(); // 0x986 TObjFunc
	var_73_bool = 0; var_74_object = Obj(); // 0x988 PushV
	var_74_object = var_1_object; // 0x989 MovT
	func_3957(var_74_object); // 0x98a NEW_2
	if(var_73_bool == 0) goto Label_2450; // 0x98c JumpB
	var_81_int = 542928; // 0x98d PushI
	var_82_int = 45365; // 0x98e PushI
	var_83_int = 45364; // 0x98f PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x990 TObjFunc
	
Label_2450:
	var_84_int = 539249; // 0x992 PushI
	var_85_int = -1; // 0x993 PushI
	var_86_int = 41192; // 0x994 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x995 TObjFunc
	return 0; // 0x997 Return
	
Label_2456:
	var_87_string = ""; // 0x998 PushV
	var_87_string = "Neutral"; // 0x999 MovS
	func_2386(var_32_cvector, var_87_string); // 0x99a NEW_2
	var_88_int = 539250; // 0x99c PushI
	SetMessage(var_88_int); // 0x99d TObjFunc
	ClearReplies(); // 0x99f TObjFunc
	var_89_int = 539251; // 0x9a1 PushI
	var_90_int = -1; // 0x9a2 PushI
	var_91_int = 41194; // 0x9a3 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x9a4 TObjFunc
	var_92_int = 541515; // 0x9a6 PushI
	var_93_int = -1; // 0x9a7 PushI
	var_94_int = 43678; // 0x9a8 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x9a9 TObjFunc
	return 0; // 0x9ab Return
	
Label_2476:
	var_95_int = 45365; // 0x9ac PushI
	var_96_bool = var_31_bool == var_95_int; // 0x9ad Eq
	if(var_96_bool == 0) goto Label_2499; // 0x9ae JumpB
	var_97_string = ""; // 0x9af PushV
	var_97_string = "Untrust"; // 0x9b0 MovS
	func_2386(var_32_cvector, var_97_string); // 0x9b1 NEW_2
	var_98_int = 542929; // 0x9b3 PushI
	SetMessage(var_98_int); // 0x9b4 TObjFunc
	ClearReplies(); // 0x9b6 TObjFunc
	var_99_int = 542930; // 0x9b8 PushI
	var_100_int = 45368; // 0x9b9 PushI
	var_101_int = 45366; // 0x9ba PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x9bb TObjFunc
	var_102_int = 542931; // 0x9bd PushI
	var_103_int = 45369; // 0x9be PushI
	var_104_int = 45367; // 0x9bf PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x9c0 TObjFunc
	return 0; // 0x9c2 Return
	
Label_2499:
	var_105_int = 45369; // 0x9c3 PushI
	var_106_bool = var_31_bool == var_105_int; // 0x9c4 Eq
	if(var_106_bool == 0) goto Label_2522; // 0x9c5 JumpB
	var_107_string = ""; // 0x9c6 PushV
	var_107_string = "Doubt"; // 0x9c7 MovS
	func_2386(var_32_cvector, var_107_string); // 0x9c8 NEW_2
	var_108_int = 542933; // 0x9ca PushI
	SetMessage(var_108_int); // 0x9cb TObjFunc
	ClearReplies(); // 0x9cd TObjFunc
	var_109_int = 542934; // 0x9cf PushI
	var_110_int = 45371; // 0x9d0 PushI
	var_111_int = 45370; // 0x9d1 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x9d2 TObjFunc
	var_112_int = 542937; // 0x9d4 PushI
	var_113_int = 45368; // 0x9d5 PushI
	var_114_int = 45373; // 0x9d6 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x9d7 TObjFunc
	return 0; // 0x9d9 Return
	
Label_2522:
	var_115_int = 45371; // 0x9da PushI
	var_116_bool = var_31_bool == var_115_int; // 0x9db Eq
	if(var_116_bool == 0) goto Label_2545; // 0x9dc JumpB
	var_117_string = ""; // 0x9dd PushV
	var_117_string = "Doubt"; // 0x9de MovS
	func_2386(var_32_cvector, var_117_string); // 0x9df NEW_2
	var_118_int = 542935; // 0x9e1 PushI
	SetMessage(var_118_int); // 0x9e2 TObjFunc
	ClearReplies(); // 0x9e4 TObjFunc
	var_119_int = 542936; // 0x9e6 PushI
	var_120_int = 45375; // 0x9e7 PushI
	var_121_int = 45372; // 0x9e8 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x9e9 TObjFunc
	var_122_int = 542941; // 0x9eb PushI
	var_123_int = 45368; // 0x9ec PushI
	var_124_int = 45378; // 0x9ed PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x9ee TObjFunc
	return 0; // 0x9f0 Return
	
Label_2545:
	var_125_int = 45375; // 0x9f1 PushI
	var_126_bool = var_31_bool == var_125_int; // 0x9f2 Eq
	if(var_126_bool == 0) goto Label_2568; // 0x9f3 JumpB
	var_127_string = ""; // 0x9f4 PushV
	var_127_string = "Neutral"; // 0x9f5 MovS
	func_2386(var_32_cvector, var_127_string); // 0x9f6 NEW_2
	var_128_int = 542938; // 0x9f8 PushI
	SetMessage(var_128_int); // 0x9f9 TObjFunc
	ClearReplies(); // 0x9fb TObjFunc
	var_129_int = 542939; // 0x9fd PushI
	var_130_int = -1; // 0x9fe PushI
	var_131_int = 45376; // 0x9ff PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xa00 TObjFunc
	var_132_int = 542942; // 0xa02 PushI
	var_133_int = 45368; // 0xa03 PushI
	var_134_int = 45380; // 0xa04 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xa05 TObjFunc
	return 0; // 0xa07 Return
	
Label_2568:
	var_135_int = 45368; // 0xa08 PushI
	var_136_bool = var_31_bool == var_135_int; // 0xa09 Eq
	if(var_136_bool == 0) goto Label_2591; // 0xa0a JumpB
	var_137_string = ""; // 0xa0b PushV
	var_137_string = "Untrust"; // 0xa0c MovS
	func_2386(var_32_cvector, var_137_string); // 0xa0d NEW_2
	var_138_int = 542932; // 0xa0f PushI
	SetMessage(var_138_int); // 0xa10 TObjFunc
	ClearReplies(); // 0xa12 TObjFunc
	var_139_int = 542940; // 0xa14 PushI
	var_140_int = -1; // 0xa15 PushI
	var_141_int = 45377; // 0xa16 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0xa17 TObjFunc
	var_142_int = 542943; // 0xa19 PushI
	var_143_int = -1; // 0xa1a PushI
	var_144_int = 45382; // 0xa1b PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xa1c TObjFunc
	return 0; // 0xa1e Return
	
Label_2591:
	var_3_string = 1; // 0xa1f TMovB
	var_145_bool = 0; // 0xa20 PushV
	func_3621(var_145_bool); // 0xa21 NEW_2
	if(var_145_bool == 0) goto Label_2599; // 0xa23 JumpB
	lshStopAnimation(); // 0xa24 Func
	goto Label_2601; // 0xa26 Jump
	
Label_2601:
	return 0; // 0xa29 Return
	
Label_2599:
	StopAnimation(); // 0xa27 Func
	
Label_2603:
	return 0; // 0xa2b Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0xace PushI
	if(var_33_int == 0) goto Label_2806; // 0xacf JumpB
	func_3407(); // 0xad1 NEW_2
	var_35_int = 42554; // 0xad3 PushI
	var_36_bool = var_31_int == var_35_int; // 0xad4 Eq
	if(var_36_bool == 0) goto Label_2794; // 0xad5 JumpB
	var_37_string = ""; // 0xad6 PushV
	var_37_string = "Neutral"; // 0xad7 MovS
	func_2743(var_32_cvector, var_37_string); // 0xad8 NEW_2
	var_54_int = 540545; // 0xada PushI
	SetMessage(var_54_int); // 0xadb TObjFunc
	ClearReplies(); // 0xadd TObjFunc
	var_55_int = 540546; // 0xadf PushI
	var_56_int = -1; // 0xae0 PushI
	var_57_int = 42555; // 0xae1 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xae2 TObjFunc
	var_58_int = 540798; // 0xae4 PushI
	var_59_int = -1; // 0xae5 PushI
	var_60_int = 42847; // 0xae6 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xae7 TObjFunc
	return 0; // 0xae9 Return
	
Label_2794:
	var_3_string = 1; // 0xaea TMovB
	var_61_bool = 0; // 0xaeb PushV
	func_3621(var_61_bool); // 0xaec NEW_2
	if(var_61_bool == 0) goto Label_2802; // 0xaee JumpB
	lshStopAnimation(); // 0xaef Func
	goto Label_2804; // 0xaf1 Jump
	
Label_2804:
	return 0; // 0xaf4 Return
	
Label_2802:
	StopAnimation(); // 0xaf2 Func
	
Label_2806:
	return 0; // 0xaf6 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0xb41 PushI
	var_33_bool = var_31_int == var_32_int; // 0xb42 Eq
	if(var_33_bool == 0) goto Label_2917; // 0xb43 JumpB
	func_2876(); // 0xb45 NEW_2
	var_35_bool = 0; // 0xb47 PushV
	var_35_bool = 0; // 0xb48 MovB
	var_36_bool = 0; // 0xb49 PushV
	func_3131(var_36_bool); // 0xb4a NEW_2
	if(var_36_bool == 0) goto Label_2898; // 0xb4c JumpB
	var_39_bool = 0; // 0xb4d PushV
	func_2845(var_39_bool); // 0xb4e NEW_2
	if(var_39_bool == 0) goto Label_2898; // 0xb50 JumpB
	var_35_bool = 1; // 0xb51 MovB
	
Label_2898:
	if(var_35_bool == 0) goto Label_2911; // 0xb52 JumpB
	var_56_bool = 0; // 0xb53 PushV
	func_2825(var_56_bool); // 0xb54 NEW_2
	if(var_56_bool == 0) goto Label_2910; // 0xb56 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0xb57 PushV
	var_77_object = Obj(); // 0xb58 PushV
	func_3414(var_77_object); // 0xb59 NEW_2
	var_76_object = var_77_object; // 0xb5a Mov
	func_3281(var_76_object); // 0xb5c NEW_2
	
Label_2910:
	goto Label_2917; // 0xb5e Jump
	
Label_2917:
	return 0; // 0xb65 Return
	
Label_2911:
	func_2840(var_31_int); // 0xb60 NEW_2
	func_2867(); // 0xb63 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_3058(); // 0xb67 NEW_2
	func_2876(); // 0xb6a NEW_2
	lshStopSpeech(); // 0xb6c Func
	lshStopAnimation(); // 0xb6e Func
	StopAsync(); // 0xb70 Func
	Hold(); // 0xb72 Func
	return 0; // 0xb74 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0xb75 Func
	func_2876(); // 0xb78 NEW_2
	var_32_string = ""; // 0xb7a PushV
	var_32_string = "Neutral"; // 0xb7b MovS
	func_3361(var_32_string); // 0xb7c NEW_2
	func_2867(); // 0xb7f NEW_2
	return 0; // 0xb81 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0xb83 Push
	if(var_32_bool == 0) goto Label_2953; // 0xb84 JumpB
	func_2867(); // 0xb86 NEW_2
	goto Label_2957; // 0xb88 Jump
	
Label_2957:
	return 0; // 0xb8d Return
	
Label_2953:
	var_38_string = ""; // 0xb89 PushV
	var_38_string = "Neutral"; // 0xb8a MovS
	func_3361(var_38_string); // 0xb8b NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0xb8e PushV
	IsOverrideActive(var_33_bool); // 0xb8f Func
	var_34_bool = var_33_bool == 0; // 0xb91 Not
	if(var_34_bool == 0) goto Label_2986; // 0xb92 JumpB
	EventDisable(0); // 0xb93 EventDisable
	func_3058(); // 0xb95 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0xb97 PushV
	var_36_object = var_31_object; // 0xb98 Mov
	func_3122(var_36_object); // 0xb99 NEW_2
	EventEnable(0); // 0xb9b EventEnable
	var_49_object = Obj(); // 0xb9c PushV
	var_49_object = var_31_object; // 0xb9d Mov
	func_4203(var_49_object); // 0xb9e NEW_2
	var_746_string = ""; // 0xba0 PushV
	var_746_string = "Neutral"; // 0xba1 MovS
	func_3361(var_746_string); // 0xba2 NEW_2
	func_2876(); // 0xba5 NEW_2
	func_2867(); // 0xba8 NEW_2
	
Label_2986:
	return 2; // 0xbaa Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2811(var_30_cvector); // 0xaf8 NEW_2
	return 0; // 0xafa Return
}


func_0(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0x0 PushV
	var_0_object = var_285_object; // 0x1 TMov
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; // 0x2 PushV
	var_296_object = var_285_object; // 0x3 Mov
	var_297_float = 70.0; // 0x4 MovF
	func_3136(var_296_object, var_297_float); // 0x5 NEW_2
	var_298_bool = var_295_bool == 0; // 0x7 Not
	if(var_298_bool == 0) goto Label_11; // 0x8 JumpB
	var_284_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_291_object); // 0xb Func
	var_299_int = 0; // 0xd PushV
	func_3615(var_299_int); // 0xe NEW_2
	SetNPCName(var_299_int); // 0x10 ObjFunc
	var_300_int = 0; // 0x12 PushV
	func_3613(var_300_int); // 0x13 NEW_2
	SetNPCDescription(var_300_int); // 0x15 ObjFunc
	var_301_string = ""; // 0x17 PushV
	func_3617(var_301_string); // 0x18 NEW_2
	SetPhoto(var_301_string); // 0x1a ObjFunc
	var_302_string = ""; // 0x1c PushV
	func_3619(var_302_string); // 0x1d NEW_2
	SetPhoto2(var_302_string); // 0x1f ObjFunc
	var_303_int = 0; // 0x21 PushV
	func_4143(var_303_int); // 0x22 NEW_2
	SetPlayerName(var_303_int); // 0x24 ObjFunc
	var_293_int = -1; // 0x26 MovI
	IsOverrideActive(var_292_bool); // 0x27 Func
	var_304_bool = var_292_bool; // 0x29 Push
	if(var_304_bool == 0) goto Label_45; // 0x2a JumpB
	var_284_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_291_object); // 0x2d Func
	var_305_bool = 0; var_306_object = Obj(); // 0x2f PushV
	var_307_object = Obj(); // 0x30 PushV
	func_3414(var_307_object); // 0x31 NEW_2
	var_306_object = var_307_object; // 0x32 Mov
	func_3223(var_305_bool, var_306_object); // 0x34 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x36 PushV
	var_308_object = var_285_object; // 0x37 Mov
	var_309_object = var_291_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_294_bool); // 0x3d ObjFunc
	
Label_63:
	var_360_bool = var_294_bool == 0; // 0x3f Not
	if(var_360_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_294_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_361_object = Obj(); // 0x46 PushV
	var_361_object = var_285_object; // 0x47 Mov
	func_3205(); // 0x48 NEW_2
	StopDialog(var_291_object); // 0x4a Func
	GetReturnValue(var_293_int); // 0x4c ObjFunc
	var_284_int = var_293_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_514(var_0_object, var_1_object, var_2_object, var_3_string, var_466_object, var_467_object)
{
	var_0_object = var_467_object; // 0x203 TMov
	var_1_object = var_466_object; // 0x204 TMov
	var_3_string = 0; // 0x205 TMovB
	var_472_int = 1; // 0x206 PushI
	if(var_472_int == 0) goto Label_660; // 0x207 JumpB
	var_473_string = ""; // 0x208 PushV
	var_473_string = "Neutral"; // 0x209 MovS
	func_690(var_467_object, var_473_string); // 0x20a NEW_2
	var_481_int = 527190; // 0x20c PushI
	SetMessage(var_481_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_482_bool = 0; var_483_object = Obj(); // 0x211 PushV
	var_483_object = var_1_object; // 0x212 MovT
	func_3811(var_483_object); // 0x213 NEW_2
	if(var_482_bool == 0) goto Label_539; // 0x215 JumpB
	var_488_int = 527191; // 0x216 PushI
	var_489_int = 28604; // 0x217 PushI
	var_490_int = 28499; // 0x218 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x219 TObjFunc
	
Label_539:
	var_491_bool = 0; var_492_object = Obj(); // 0x21b PushV
	var_492_object = var_1_object; // 0x21c MovT
	func_3823(var_492_object); // 0x21d NEW_2
	if(var_491_bool == 0) goto Label_549; // 0x21f JumpB
	var_497_int = 527234; // 0x220 PushI
	var_498_int = 28615; // 0x221 PushI
	var_499_int = 28542; // 0x222 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x223 TObjFunc
	
Label_549:
	var_500_bool = 0; // 0x225 PushV
	var_500_bool = 0; // 0x226 MovB
	var_501_bool = 0; var_502_object = Obj(); // 0x227 PushV
	var_502_object = var_1_object; // 0x228 MovT
	func_3847(var_501_bool, var_502_object); // 0x229 NEW_2
	if(var_501_bool == 0) goto Label_562; // 0x22b JumpB
	var_509_bool = 0; var_510_object = Obj(); // 0x22c PushV
	var_510_object = var_1_object; // 0x22d MovT
	func_3835(var_510_object); // 0x22e NEW_2
	if(var_509_bool == 0) goto Label_562; // 0x230 JumpB
	var_500_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_500_bool == 0) goto Label_568; // 0x232 JumpB
	var_515_int = 527310; // 0x233 PushI
	var_516_int = 28628; // 0x234 PushI
	var_517_int = 28627; // 0x235 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x236 TObjFunc
	
Label_568:
	var_518_bool = 0; // 0x238 PushV
	var_518_bool = 0; // 0x239 MovB
	var_519_bool = 0; // 0x23a PushV
	var_519_bool = 0; // 0x23b MovB
	var_520_bool = 0; var_521_object = Obj(); // 0x23c PushV
	var_521_object = var_1_object; // 0x23d MovT
	func_3869(var_520_bool, var_521_object); // 0x23e NEW_2
	if(var_520_bool == 0) goto Label_583; // 0x240 JumpB
	var_530_bool = 0; var_531_object = Obj(); // 0x241 PushV
	var_531_object = var_1_object; // 0x242 MovT
	func_3879(var_530_bool, var_531_object); // 0x243 NEW_2
	if(var_530_bool == 0) goto Label_583; // 0x245 JumpB
	var_519_bool = 1; // 0x246 MovB
	
Label_583:
	if(var_519_bool == 0) goto Label_590; // 0x247 JumpB
	var_544_bool = 0; var_545_object = Obj(); // 0x248 PushV
	var_545_object = var_1_object; // 0x249 MovT
	func_3909(var_545_object); // 0x24a NEW_2
	if(var_544_bool == 0) goto Label_590; // 0x24c JumpB
	var_518_bool = 1; // 0x24d MovB
	
Label_590:
	if(var_518_bool == 0) goto Label_596; // 0x24e JumpB
	var_550_int = 539861; // 0x24f PushI
	var_551_int = 41814; // 0x250 PushI
	var_552_int = 41813; // 0x251 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x252 TObjFunc
	
Label_596:
	var_553_bool = 0; // 0x254 PushV
	var_553_bool = 0; // 0x255 MovB
	var_554_bool = 0; // 0x256 PushV
	var_554_bool = 0; // 0x257 MovB
	var_555_bool = 0; var_556_object = Obj(); // 0x258 PushV
	var_556_object = var_1_object; // 0x259 MovT
	func_3869(var_555_bool, var_556_object); // 0x25a NEW_2
	if(var_555_bool == 0) goto Label_611; // 0x25c JumpB
	var_557_bool = 0; var_558_object = Obj(); // 0x25d PushV
	var_558_object = var_1_object; // 0x25e MovT
	func_3889(var_557_bool, var_558_object); // 0x25f NEW_2
	if(var_557_bool == 0) goto Label_611; // 0x261 JumpB
	var_554_bool = 1; // 0x262 MovB
	
Label_611:
	if(var_554_bool == 0) goto Label_618; // 0x263 JumpB
	var_564_bool = 0; var_565_object = Obj(); // 0x264 PushV
	var_565_object = var_1_object; // 0x265 MovT
	func_3921(var_565_object); // 0x266 NEW_2
	if(var_564_bool == 0) goto Label_618; // 0x268 JumpB
	var_553_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_553_bool == 0) goto Label_624; // 0x26a JumpB
	var_570_int = 539864; // 0x26b PushI
	var_571_int = 41817; // 0x26c PushI
	var_572_int = 41816; // 0x26d PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x26e TObjFunc
	
Label_624:
	var_573_bool = 0; // 0x270 PushV
	var_573_bool = 0; // 0x271 MovB
	var_574_bool = 0; // 0x272 PushV
	var_574_bool = 0; // 0x273 MovB
	var_575_bool = 0; var_576_object = Obj(); // 0x274 PushV
	var_576_object = var_1_object; // 0x275 MovT
	func_3869(var_575_bool, var_576_object); // 0x276 NEW_2
	if(var_575_bool == 0) goto Label_639; // 0x278 JumpB
	var_577_bool = 0; var_578_object = Obj(); // 0x279 PushV
	var_578_object = var_1_object; // 0x27a MovT
	func_3899(var_577_bool, var_578_object); // 0x27b NEW_2
	if(var_577_bool == 0) goto Label_639; // 0x27d JumpB
	var_574_bool = 1; // 0x27e MovB
	
Label_639:
	if(var_574_bool == 0) goto Label_646; // 0x27f JumpB
	var_584_bool = 0; var_585_object = Obj(); // 0x280 PushV
	var_585_object = var_1_object; // 0x281 MovT
	func_3933(var_585_object); // 0x282 NEW_2
	if(var_584_bool == 0) goto Label_646; // 0x284 JumpB
	var_573_bool = 1; // 0x285 MovB
	
Label_646:
	if(var_573_bool == 0) goto Label_652; // 0x286 JumpB
	var_590_int = 539867; // 0x287 PushI
	var_591_int = 41820; // 0x288 PushI
	var_592_int = 41819; // 0x289 PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x28a TObjFunc
	
Label_652:
	var_593_int = 527196; // 0x28c PushI
	var_594_int = -1; // 0x28d PushI
	var_595_int = 28504; // 0x28e PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x28f TObjFunc
	goto Label_660; // 0x291 Jump
	
Label_660:
	var_596_bool = 0; // 0x294 PushV
	func_3621(var_596_bool); // 0x295 NEW_2
	if(var_596_bool == 0) goto Label_675; // 0x297 JumpB
	
Label_664:
	lshWaitForAnimEnd(); // 0x298 Func
	var_597_string = var_3_string; // 0x29a PushT
	if(var_597_string == 0) goto Label_669; // 0x29b JumpB
	goto Label_674; // 0x29c Jump
	
Label_674:
	goto Label_689; // 0x2a2 Jump
	
Label_689:
	return 0; // 0x2b1 Return
	
Label_669:
	var_598_string = ""; // 0x29d PushV
	var_598_string = var_2_object; // 0x29e MovT
	func_3361(var_598_string); // 0x29f NEW_2
	goto Label_664; // 0x2a1 Jump
	
Label_675:
	var_599_string = "all"; // 0x2a3 PushS
	var_600_string = "idle"; // 0x2a4 PushS
	PlayAnimation(var_599_string, var_600_string); // 0x2a5 Func
	
Label_679:
	WaitForAnimEnd(); // 0x2a7 Func
	var_601_string = var_3_string; // 0x2a9 PushT
	if(var_601_string == 0) goto Label_684; // 0x2aa JumpB
	goto Label_689; // 0x2ab Jump
	
Label_684:
	var_602_string = "all"; // 0x2ac PushS
	var_603_string = "idle"; // 0x2ad PushS
	PlayAnimation(var_602_string, var_603_string); // 0x2ae Func
	goto Label_679; // 0x2b0 Jump
}


func_1540(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object; // 0x605 TMov
	var_1_object = var_221_object; // 0x606 TMov
	var_3_string = 0; // 0x607 TMovB
	var_227_int = 1; // 0x608 PushI
	if(var_227_int == 0) goto Label_1568; // 0x609 JumpB
	var_228_string = ""; // 0x60a PushV
	var_228_string = "Neutral"; // 0x60b MovS
	func_1598(var_222_object, var_228_string); // 0x60c NEW_2
	var_245_int = 528095; // 0x60e PushI
	SetMessage(var_245_int); // 0x60f TObjFunc
	ClearReplies(); // 0x611 TObjFunc
	var_246_int = 528096; // 0x613 PushI
	var_247_int = 29441; // 0x614 PushI
	var_248_int = 29440; // 0x615 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x616 TObjFunc
	var_249_int = 528105; // 0x618 PushI
	var_250_int = 29450; // 0x619 PushI
	var_251_int = 29449; // 0x61a PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x61b TObjFunc
	goto Label_1568; // 0x61d Jump
	
Label_1568:
	var_252_bool = 0; // 0x620 PushV
	func_3621(var_252_bool); // 0x621 NEW_2
	if(var_252_bool == 0) goto Label_1583; // 0x623 JumpB
	
Label_1572:
	lshWaitForAnimEnd(); // 0x624 Func
	var_253_string = var_3_string; // 0x626 PushT
	if(var_253_string == 0) goto Label_1577; // 0x627 JumpB
	goto Label_1582; // 0x628 Jump
	
Label_1582:
	goto Label_1597; // 0x62e Jump
	
Label_1597:
	return 0; // 0x63d Return
	
Label_1577:
	var_254_string = ""; // 0x629 PushV
	var_254_string = var_2_object; // 0x62a MovT
	func_3361(var_254_string); // 0x62b NEW_2
	goto Label_1572; // 0x62d Jump
	
Label_1583:
	var_265_string = "all"; // 0x62f PushS
	var_266_string = "idle"; // 0x630 PushS
	PlayAnimation(var_265_string, var_266_string); // 0x631 Func
	
Label_1587:
	WaitForAnimEnd(); // 0x633 Func
	var_267_string = var_3_string; // 0x635 PushT
	if(var_267_string == 0) goto Label_1592; // 0x636 JumpB
	goto Label_1597; // 0x637 Jump
	
Label_1592:
	var_268_string = "all"; // 0x638 PushS
	var_269_string = "idle"; // 0x639 PushS
	PlayAnimation(var_268_string, var_269_string); // 0x63a Func
	goto Label_1587; // 0x63c Jump
}


func_3589(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xe05 PushV
	var_58_string = "idle"; // 0xe06 MovS
	var_59_int = var_56_int; // 0xe07 Push
	if(var_59_int == 0) goto Label_3594; // 0xe08 JumpB
	var_58_string = var_58_string + var_56_int; // 0xe09 Add2
	
Label_3594:
	var_55_string = var_58_string; // 0xe0a Mov
	return 2; // 0xe0b Return
}


func_4102(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1006 PushV
	GetDiaryRoot(var_55_object); // 0x1007 Func
	var_56_bool = var_55_object == 0; // 0x1009 Not
	if(var_56_bool == 0) goto Label_4112; // 0x100a JumpB
	var_57_string = "Can't retrieve diary root"; // 0x100b PushS
	Trace(var_57_string); // 0x100c Func
	var_53_object = 0; // 0x100e MovB
	return 2; // 0x100f Return
	
Label_4112:
	var_53_object = var_55_object; // 0x1010 Mov
	return 2; // 0x1011 Return
}


func_3847(var_501_bool, var_502_object)
{
	var_503_bool = 0; var_504_object = Obj(); // 0xf08 PushV
	var_504_object = var_502_object; // 0xf09 Mov
	func_3980(var_504_object); // 0xf0a NEW_2
	if(var_503_bool == 0) goto Label_3855; // 0xf0c JumpB
	var_501_bool = 1; // 0xf0d MovB
	return 0; // 0xf0e Return
	
Label_3855:
	var_501_bool = 0; // 0xf0f MovB
	return 0; // 0xf10 Return
}


func_2825(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xb09 PushV
	var_59_string = "player"; // 0xb0a PushS
	FindActor(var_58_object, var_59_string); // 0xb0b Func
	var_60_bool = var_58_object == 0; // 0xb0d Not
	if(var_60_bool == 0) goto Label_2833; // 0xb0e JumpB
	var_56_bool = 0; // 0xb0f MovB
	return 2; // 0xb10 Return
	
Label_2833:
	var_61_bool = 0; var_62_object = Obj(); // 0xb11 PushV
	var_62_object = var_58_object; // 0xb12 Mov
	func_3122(var_62_object); // 0xb13 NEW_2
	var_56_bool = var_61_bool; // 0xb14 Mov
	return 2; // 0xb16 Return
}


func_1802(var_0_object, var_1_object, var_2_object, var_3_string, var_388_object, var_389_object)
{
	var_0_object = var_389_object; // 0x70b TMov
	var_1_object = var_388_object; // 0x70c TMov
	var_3_string = 0; // 0x70d TMovB
	var_394_int = 1; // 0x70e PushI
	if(var_394_int == 0) goto Label_1860; // 0x70f JumpB
	var_395_bool = 0; var_396_object = Obj(); // 0x710 PushV
	var_396_object = var_1_object; // 0x711 MovT
	func_3857(var_396_object); // 0x712 NEW_2
	if(var_395_bool == 0) goto Label_1833; // 0x714 JumpB
	var_401_string = ""; // 0x715 PushV
	var_401_string = "Doubt"; // 0x716 MovS
	func_1890(var_389_object, var_401_string); // 0x717 NEW_2
	var_409_int = 529720; // 0x719 PushI
	SetMessage(var_409_int); // 0x71a TObjFunc
	ClearReplies(); // 0x71c TObjFunc
	var_410_int = 529743; // 0x71e PushI
	var_411_int = 31200; // 0x71f PushI
	var_412_int = 31198; // 0x720 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x721 TObjFunc
	var_413_int = 529744; // 0x723 PushI
	var_414_int = 31206; // 0x724 PushI
	var_415_int = 31199; // 0x725 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x726 TObjFunc
	goto Label_1860; // 0x728 Jump
	
Label_1860:
	var_416_bool = 0; // 0x744 PushV
	func_3621(var_416_bool); // 0x745 NEW_2
	if(var_416_bool == 0) goto Label_1875; // 0x747 JumpB
	
Label_1864:
	lshWaitForAnimEnd(); // 0x748 Func
	var_417_string = var_3_string; // 0x74a PushT
	if(var_417_string == 0) goto Label_1869; // 0x74b JumpB
	goto Label_1874; // 0x74c Jump
	
Label_1874:
	goto Label_1889; // 0x752 Jump
	
Label_1889:
	return 0; // 0x761 Return
	
Label_1869:
	var_418_string = ""; // 0x74d PushV
	var_418_string = var_2_object; // 0x74e MovT
	func_3361(var_418_string); // 0x74f NEW_2
	goto Label_1864; // 0x751 Jump
	
Label_1875:
	var_419_string = "all"; // 0x753 PushS
	var_420_string = "idle"; // 0x754 PushS
	PlayAnimation(var_419_string, var_420_string); // 0x755 Func
	
Label_1879:
	WaitForAnimEnd(); // 0x757 Func
	var_421_string = var_3_string; // 0x759 PushT
	if(var_421_string == 0) goto Label_1884; // 0x75a JumpB
	goto Label_1889; // 0x75b Jump
	
Label_1884:
	var_422_string = "all"; // 0x75c PushS
	var_423_string = "idle"; // 0x75d PushS
	PlayAnimation(var_422_string, var_423_string); // 0x75e Func
	goto Label_1879; // 0x760 Jump
	
Label_1833:
	var_424_string = ""; // 0x729 PushV
	var_424_string = "Agression"; // 0x72a MovS
	func_1890(var_389_object, var_424_string); // 0x72b NEW_2
	var_425_int = 529758; // 0x72d PushI
	SetMessage(var_425_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_426_bool = 0; var_427_object = Obj(); // 0x732 PushV
	var_427_object = var_1_object; // 0x733 MovT
	func_3945(var_427_object); // 0x734 NEW_2
	if(var_426_bool == 0) goto Label_1852; // 0x736 JumpB
	var_432_int = 529756; // 0x737 PushI
	var_433_int = 31213; // 0x738 PushI
	var_434_int = 31212; // 0x739 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x73a TObjFunc
	
Label_1852:
	var_435_int = 529759; // 0x73c PushI
	var_436_int = -1; // 0x73d PushI
	var_437_int = 31215; // 0x73e PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x73f TObjFunc
	goto Label_1860; // 0x741 Jump
}


func_3083(var_174_bool, var_175_object, var_176_string, var_177_float, var_178_float, var_179_float)
{
	var_180_float = 0; var_181_float = 0; // 0xc0b PushV
	var_182_bool = 0; var_183_object = Obj(); var_184_string = ""; // 0xc0c PushV
	var_183_object = var_175_object; // 0xc0d Mov
	var_184_string = var_176_string; // 0xc0e Mov
	func_3071(var_182_bool, var_183_object, var_184_string); // 0xc0f NEW_2
	var_191_bool = var_182_bool == 0; // 0xc11 Not
	if(var_191_bool == 0) goto Label_3093; // 0xc12 JumpB
	var_174_bool = 0; // 0xc13 MovB
	return 2; // 0xc14 Return
	
Label_3093:
	GetProperty(var_176_string, var_181_float); // 0xc15 ObjFunc
	var_192_float = 0; var_193_float = 0; var_194_float = 0; var_195_float = 0; // 0xc17 PushV
	var_193_float = var_181_float + var_177_float; // 0xc18 Add2
	var_194_float = var_178_float; // 0xc19 Mov
	var_195_float = var_179_float; // 0xc1a Mov
	func_3430(var_192_float, var_193_float, var_194_float, var_195_float); // 0xc1b NEW_2
	SetProperty(var_176_string, var_192_float); // 0xc1d ObjFunc
	var_174_bool = 1; // 0xc1f MovB
	return 2; // 0xc20 Return
}


func_3596(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xe0c PushV
	var_52_int = 0; // 0xe0d MovI
	
Label_3598:
	var_54_string = "all"; // 0xe0e PushS
	var_55_string = ""; var_56_int = 0; // 0xe0f PushV
	var_56_int = var_52_int; // 0xe10 Mov
	func_3589(var_55_string, var_56_int); // 0xe11 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xe13 Func
	var_60_bool = var_53_bool == 0; // 0xe15 Not
	if(var_60_bool == 0) goto Label_3608; // 0xe16 JumpB
	goto Label_3611; // 0xe17 Jump
	
Label_3611:
	var_49_int = var_52_int; // 0xe1b Mov
	return 4; // 0xe1c Return
	
Label_3608:
	var_61_int = 1; // 0xe18 PushI
	var_52_int = var_52_int + var_61_int; // 0xe19 Add2
	goto Label_3598; // 0xe1a Jump
}


func_3857(var_395_bool)
{
	var_397_int = 0; var_398_string = ""; // 0xf12 PushV
	var_398_string = "k9q01"; // 0xf13 MovS
	func_3441(var_397_int, var_398_string); // 0xf14 NEW_2
	var_399_int = 8; // 0xf16 PushI
	var_400_bool = var_397_int == var_399_int; // 0xf17 Eq
	if(var_400_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_395_bool = 1; // 0xf19 MovB
	return 0; // 0xf1a Return
	
Label_3867:
	var_395_bool = 0; // 0xf1b MovB
	return 0; // 0xf1c Return
}


func_4115(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x1013 PushV
	var_53_object = Obj(); // 0x1014 PushV
	func_4102(var_53_object); // 0x1015 NEW_2
	var_50_object = var_53_object; // 0x1016 Mov
	Find(var_46_int, var_51_object); // 0x1018 ObjFunc
	var_58_bool = var_51_object == 0; // 0x101a Not
	if(var_58_bool == 0) goto Label_4130; // 0x101b JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x101c PushS
	var_60_int = var_59_string + var_46_int; // 0x101d Add
	Trace(var_60_int); // 0x101e Func
	var_44_bool = 0; // 0x1020 MovB
	return 6; // 0x1021 Return
	
Label_4130:
	AddChild(var_45_object); // 0x1022 ObjFunc
	var_61_int = 7; // 0x1024 PushI
	SendWorldWndMessage(var_61_int); // 0x1025 Func
	GetCategory(var_52_int); // 0x1027 ObjFunc
	SetDiarySection(var_52_int); // 0x1029 Func
	var_44_bool = 0; // 0x102b MovB
	return 6; // 0x102c Return
}


func_2840(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0xb18 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0xb19 PushE
	RotateAsync(var_108_float, var_109_float); // 0xb1a Func
	return 0; // 0xb1c Return
}


func_3613(var_114_int)
{
	var_114_int = 515532; // 0xe1d MovI
	return 0; // 0xe1e Return
}


func_3869(var_520_bool, var_521_object)
{
	var_522_bool = 0; var_523_object = Obj(); // 0xf1e PushV
	var_523_object = var_521_object; // 0xf1f Mov
	func_3987(var_523_object); // 0xf20 NEW_2
	if(var_522_bool == 0) goto Label_3877; // 0xf22 JumpB
	var_520_bool = 1; // 0xf23 MovB
	return 0; // 0xf24 Return
	
Label_3877:
	var_520_bool = 0; // 0xf25 MovB
	return 0; // 0xf26 Return
}


func_3615(var_113_int)
{
	var_113_int = 514840; // 0xe1f MovI
	return 0; // 0xe20 Return
}


func_2845(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0xb1d PushV
	var_44_string = "player"; // 0xb1e PushS
	FindActor(var_42_object, var_44_string); // 0xb1f Func
	var_45_bool = var_42_object == 0; // 0xb21 Not
	if(var_45_bool == 0) goto Label_2853; // 0xb22 JumpB
	var_39_bool = 0; // 0xb23 MovB
	return 4; // 0xb24 Return
	
Label_2853:
	var_46_float = 0; var_47_object = Obj(); // 0xb25 PushV
	var_47_object = var_42_object; // 0xb26 Mov
	func_3063(var_47_object); // 0xb27 NEW_2
	var_54_float = 90000.0; // 0xb29 PushF
	var_55_bool = var_46_float > var_54_float; // 0xb2a GT
	if(var_55_bool == 0) goto Label_2862; // 0xb2b JumpB
	var_39_bool = 0; // 0xb2c MovB
	return 4; // 0xb2d Return
	
Label_2862:
	CanSee(var_43_bool, var_42_object); // 0xb2e Func
	var_39_bool = var_43_bool; // 0xb30 Mov
	return 4; // 0xb31 Return
}


func_3617(var_115_string)
{
	var_115_string = "ui/NPC_Block.png"; // 0xe21 MovS
	return 0; // 0xe22 Return
}


func_3105(var_144_string, var_145_int)
{
	var_146_int = 0; var_147_int = 0; // 0xc21 PushV
	GetProperty(var_144_string, var_147_int); // 0xc22 ObjFunc
	var_148_int = var_147_int + var_145_int; // 0xc24 Add
	SetProperty(var_144_string, var_148_int); // 0xc25 ObjFunc
	return 2; // 0xc27 Return
}


func_3619(var_116_string)
{
	var_116_string = "ui/NPC_Block_b.png"; // 0xe23 MovS
	return 0; // 0xe24 Return
}


func_3361(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0; // 0xd21 PushV
	lshHasAnimation(var_258_bool, var_254_string); // 0xd22 Func
	var_261_bool = var_258_bool; // 0xd24 Push
	if(var_261_bool == 0) goto Label_3372; // 0xd25 JumpB
	lshGetAnimTimes(var_254_string, var_259_float, var_260_float); // 0xd26 Func
	var_262_bool = 0; // 0xd28 PushB
	lshPlayAnimation(var_259_float, var_260_float, var_262_bool); // 0xd29 Func
	goto Label_3376; // 0xd2b Jump
	
Label_3376:
	return 6; // 0xd30 Return
	
Label_3372:
	var_263_string = "Can't find lsh animation : "; // 0xd2c PushS
	var_264_int = var_263_string + var_254_string; // 0xd2d Add
	Trace(var_264_int); // 0xd2e Func
}


func_3621(var_108_bool)
{
	var_108_bool = 1; // 0xe25 MovB
	return 0; // 0xe26 Return
}


func_3623(var_161_object)
{
	var_163_bool = 0; var_164_object = Obj(); var_165_float = 0; // 0xe28 PushV
	var_164_object = var_161_object; // 0xe29 Mov
	var_165_float = 0.05; // 0xe2a MovF
	func_3509(var_163_bool, var_164_object, var_165_float); // 0xe2b NEW_2
	return 0; // 0xe2d Return
}


func_3112(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0xc28 PushV
	GetPosition(var_44_cvector); // 0xc29 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0xc2b Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0xc2c PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0xc2d PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0xc2e Func
	var_39_bool = var_46_bool; // 0xc30 Mov
	return 6; // 0xc31 Return
}


func_3879(var_530_bool, var_531_object)
{
	var_532_bool = 0; var_533_object = Obj(); // 0xf28 PushV
	var_533_object = var_531_object; // 0xf29 Mov
	func_3993(var_533_object); // 0xf2a NEW_2
	if(var_532_bool == 0) goto Label_3887; // 0xf2c JumpB
	var_530_bool = 1; // 0xf2d MovB
	return 0; // 0xf2e Return
	
Label_3887:
	var_530_bool = 0; // 0xf2f MovB
	return 0; // 0xf30 Return
}


func_2604(var_0_object, var_690_int, var_691_object)
{
	var_693_object = Obj(); var_694_bool = 0; var_695_int = 0; var_696_bool = 0; var_697_object = Obj(); var_698_bool = 0; var_699_int = 0; var_700_bool = 0; // 0xa2c PushV
	var_0_object = var_691_object; // 0xa2d TMov
	var_701_bool = 0; var_702_object = Obj(); var_703_float = 0; // 0xa2e PushV
	var_702_object = var_691_object; // 0xa2f Mov
	var_703_float = 70.0; // 0xa30 MovF
	func_3136(var_702_object, var_703_float); // 0xa31 NEW_2
	var_704_bool = var_701_bool == 0; // 0xa33 Not
	if(var_704_bool == 0) goto Label_2615; // 0xa34 JumpB
	var_690_int = -2; // 0xa35 MovI
	return 8; // 0xa36 Return
	
Label_2615:
	CreateDialog(var_697_object); // 0xa37 Func
	var_705_int = 0; // 0xa39 PushV
	func_3615(var_705_int); // 0xa3a NEW_2
	SetNPCName(var_705_int); // 0xa3c ObjFunc
	var_706_int = 0; // 0xa3e PushV
	func_3613(var_706_int); // 0xa3f NEW_2
	SetNPCDescription(var_706_int); // 0xa41 ObjFunc
	var_707_string = ""; // 0xa43 PushV
	func_3617(var_707_string); // 0xa44 NEW_2
	SetPhoto(var_707_string); // 0xa46 ObjFunc
	var_708_string = ""; // 0xa48 PushV
	func_3619(var_708_string); // 0xa49 NEW_2
	SetPhoto2(var_708_string); // 0xa4b ObjFunc
	var_709_int = 0; // 0xa4d PushV
	func_4143(var_709_int); // 0xa4e NEW_2
	SetPlayerName(var_709_int); // 0xa50 ObjFunc
	var_699_int = -1; // 0xa52 MovI
	IsOverrideActive(var_698_bool); // 0xa53 Func
	var_710_bool = var_698_bool; // 0xa55 Push
	if(var_710_bool == 0) goto Label_2649; // 0xa56 JumpB
	var_690_int = -2; // 0xa57 MovI
	return 8; // 0xa58 Return
	
Label_2649:
	DoDialog(var_697_object); // 0xa59 Func
	var_711_bool = 0; var_712_object = Obj(); // 0xa5b PushV
	var_713_object = Obj(); // 0xa5c PushV
	func_3414(var_713_object); // 0xa5d NEW_2
	var_712_object = var_713_object; // 0xa5e Mov
	func_3223(var_711_bool, var_712_object); // 0xa60 NEW_2
	var_714_object = Obj(); var_715_object = Obj(); // 0xa62 PushV
	var_714_object = var_691_object; // 0xa63 Mov
	var_715_object = var_697_object; // 0xa64 Mov
	TaskCall(11); // 0xa65 TaskCall
	func_2685(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object); // 0xa66 NEW_2
	TaskReturn(); // 0xa67 TaskReturn
	IsDialogEnd(var_700_bool); // 0xa69 ObjFunc
	
Label_2667:
	var_744_bool = var_700_bool == 0; // 0xa6b Not
	if(var_744_bool == 0) goto Label_2674; // 0xa6c JumpB
	sync(); // 0xa6d Func
	IsDialogEnd(var_700_bool); // 0xa6f ObjFunc
	goto Label_2667; // 0xa71 Jump
	
Label_2674:
	var_745_object = Obj(); // 0xa72 PushV
	var_745_object = var_691_object; // 0xa73 Mov
	func_3205(); // 0xa74 NEW_2
	StopDialog(var_697_object); // 0xa76 Func
	GetReturnValue(var_699_int); // 0xa78 ObjFunc
	var_690_int = var_699_int; // 0xa7a Mov
	return 8; // 0xa7b Return
}


func_3630()
{
	var_39_string = "k10q01"; // 0xe2f PushS
	var_40_int = 3; // 0xe30 PushI
	SetVariable(var_39_string, var_40_int); // 0xe31 Func
	func_4011(); // 0xe34 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0xe36 PushV
	var_65_string = "quest_k10_01"; // 0xe37 MovS
	var_66_string = "remove_soldiers"; // 0xe38 MovS
	func_3554(var_64_bool, var_65_string, var_66_string); // 0xe39 NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xe3b PushV
	var_71_string = "quest_k10_01"; // 0xe3c MovS
	var_72_string = "init_prison"; // 0xe3d MovS
	func_3554(var_70_bool, var_71_string, var_72_string); // 0xe3e NEW_2
	return 0; // 0xe40 Return
}


func_4143(var_117_int)
{
	var_118_int = 0; var_119_int = 0; // 0x102f PushV
	var_120_string = "branch"; // 0x1030 PushS
	GetVariable(var_120_string, var_119_int); // 0x1031 Func
	var_121_int = 0; // 0x1033 PushI
	var_122_bool = var_119_int == var_121_int; // 0x1034 Eq
	if(var_122_bool == 0) goto Label_4153; // 0x1035 JumpB
	var_117_int = 1; // 0x1036 MovI
	return 2; // 0x1037 Return
	
Label_4153:
	var_123_int = 1; // 0x1039 PushI
	var_124_bool = var_119_int == var_123_int; // 0x103a Eq
	if(var_124_bool == 0) goto Label_4158; // 0x103b JumpB
	var_117_int = 2; // 0x103c MovI
	return 2; // 0x103d Return
	
Label_4158:
	var_117_int = 3; // 0x103e MovI
	return 2; // 0x103f Return
}


func_3377(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0; // 0xd31 PushV
	lshHasAnimation(var_239_bool, var_232_string); // 0xd32 Func
	var_242_bool = var_239_bool; // 0xd34 Push
	if(var_242_bool == 0) goto Label_3387; // 0xd35 JumpB
	lshGetAnimTimes(var_232_string, var_240_float, var_241_float); // 0xd36 Func
	lshPlayAnimation(var_240_float, var_241_float, var_233_bool); // 0xd38 Func
	goto Label_3391; // 0xd3a Jump
	
Label_3391:
	return 6; // 0xd3f Return
	
Label_3387:
	var_243_string = "Can't find lsh animation : "; // 0xd3b PushS
	var_244_int = var_243_string + var_232_string; // 0xd3c Add
	Trace(var_244_int); // 0xd3d Func
}


func_3122(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0xc32 PushV
	GetPosition(var_38_cvector); // 0xc33 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0xc35 PushV
	var_40_cvector = var_38_cvector; // 0xc36 Mov
	func_3112(var_39_bool, var_40_cvector); // 0xc37 NEW_2
	var_35_bool = var_39_bool; // 0xc38 Mov
	return 2; // 0xc3a Return
}


func_3889(var_557_bool, var_558_object)
{
	var_559_bool = 0; var_560_object = Obj(); // 0xf32 PushV
	var_560_object = var_558_object; // 0xf33 Mov
	func_3999(var_560_object); // 0xf34 NEW_2
	if(var_559_bool == 0) goto Label_3897; // 0xf36 JumpB
	var_557_bool = 1; // 0xf37 MovB
	return 0; // 0xf38 Return
	
Label_3897:
	var_557_bool = 0; // 0xf39 MovB
	return 0; // 0xf3a Return
}


func_2867()
{
	var_748_float = 0; var_749_float = 0; // 0xb33 PushV
	var_750_int = 8; // 0xb34 PushI
	var_751_int = 16; // 0xb35 PushI
	rand(var_749_float, var_750_int, var_751_int); // 0xb36 Func
	var_752_int = 10; // 0xb38 PushI
	SetTimer(var_752_int, var_749_float); // 0xb39 Func
	return 2; // 0xb3b Return
}


func_3131(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xc3b PushV
	IsLoaded(var_33_bool); // 0xc3c Func
	var_31_bool = var_33_bool; // 0xc3e Mov
	return 2; // 0xc3f Return
}


func_3899(var_577_bool, var_578_object)
{
	var_579_bool = 0; var_580_object = Obj(); // 0xf3c PushV
	var_580_object = var_578_object; // 0xf3d Mov
	func_4005(var_580_object); // 0xf3e NEW_2
	if(var_579_bool == 0) goto Label_3907; // 0xf40 JumpB
	var_577_bool = 1; // 0xf41 MovB
	return 0; // 0xf42 Return
	
Label_3907:
	var_577_bool = 0; // 0xf43 MovB
	return 0; // 0xf44 Return
}


func_2876()
{
	var_747_int = 10; // 0xb3c PushI
	KillTimer(var_747_int); // 0xb3d Func
	return 0; // 0xb3f Return
}


func_1598(var_2_object, var_228_string)
{
	var_229_bool = 0; // 0x63f PushV
	func_3621(var_229_bool); // 0x640 NEW_2
	var_230_bool = var_229_bool == 0; // 0x642 Not
	if(var_230_bool == 0) goto Label_1605; // 0x643 JumpB
	return 0; // 0x644 Return
	
Label_1605:
	var_231_bool = var_228_string == var_2_object; // 0x645 Eq
	if(var_231_bool == 0) goto Label_1608; // 0x646 JumpB
	return 0; // 0x647 Return
	
Label_1608:
	var_232_string = ""; var_233_bool = 0; // 0x648 PushV
	var_232_string = var_228_string; // 0x649 Mov
	var_234_string = ""; // 0x64a PushS
	var_235_bool = var_228_string == var_234_string; // 0x64b Eq
	if(var_235_bool == 0) goto Label_1615; // 0x64c JumpB
	var_233_bool = 0; // 0x64d MovB
	goto Label_1616; // 0x64e Jump
	
Label_1616:
	func_3377(var_232_string, var_233_bool); // 0x650 NEW_2
	var_2_object = var_228_string; // 0x652 TMov
	return 0; // 0x653 Return
	
Label_1615:
	var_233_bool = 1; // 0x64f MovB
}


func_2811(var_0_object)
{
	var_31_bool = 0; // 0xafb PushV
	func_3131(var_31_bool); // 0xafc NEW_2
	var_34_bool = var_31_bool == 0; // 0xafe Not
	if(var_34_bool == 0) goto Label_2818; // 0xaff JumpB
	Hold(); // 0xb00 Func
	
Label_2818:
	GetDirection(var_0_object); // 0xb02 Func
	
Label_2820:
	func_2987(); // 0xb05 NEW_2
	goto Label_2820; // 0xb07 Jump
}


func_3136(var_65_bool, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; // 0xc40 PushV
	GetPosition(var_78_cvector); // 0xc41 ObjFunc
	GetEyesHeight(var_77_float); // 0xc43 ObjFunc
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xc45 PushE
	var_86_float = var_86_float + var_77_float; // 0xc46 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xc47 PopE
	GetPosition(var_79_cvector); // 0xc48 Func
	GetEyesHeight(var_77_float); // 0xc4a Func
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xc4c PushE
	var_87_float = var_87_float + var_77_float; // 0xc4d Add2
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xc4e PopE
	var_80_cvector = var_78_cvector - var_79_cvector; // 0xc4f Sub2
	var_88_float = GetByIndex(var_80_cvector, 1); // 0xc50 PushE
	var_88_float = 0; // 0xc51 MovI
	SetByIndex(var_80_cvector, 1) = var_88_float; // 0xc52 PopE
	var_89_int = var_80_cvector | var_80_cvector; // 0xc53 Or
	var_90_float = sqrt(var_89_int); // 0xc54 Sqrt
	var_80_cvector = var_80_cvector / var_80_cvector; // 0xc55 Div2
	var_81_cvector = -var_80_cvector; // 0xc56 Neg2
	var_91_float = var_80_cvector * var_67_float; // 0xc57 Mult
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0xc58 PushV
	var_94_cvector = CVector(0.0, 1.0, 0.0); // 0xc59 PushVec
	var_93_cvector = var_81_cvector ^ var_94_cvector; // 0xc5a Xor2
	func_3420(var_92_cvector, var_93_cvector); // 0xc5b NEW_2
	var_100_int = 25; // 0xc5d PushI
	var_101_float = var_92_cvector * var_100_int; // 0xc5e Mult
	var_102_int = var_91_float + var_101_float; // 0xc5f Add
	var_103_cvector = CVector(0.0, 10.0, 0.0); // 0xc60 PushVec
	var_82_cvector = var_102_int - var_103_cvector; // 0xc61 Sub2
	var_83_cvector = var_79_cvector + var_82_cvector; // 0xc62 Add2
	IsOverrideActive(var_84_bool); // 0xc63 Func
	var_104_bool = var_84_bool; // 0xc65 Push
	if(var_104_bool == 0) goto Label_3177; // 0xc66 JumpB
	var_65_bool = 0; // 0xc67 MovB
	return 18; // 0xc68 Return
	
Label_3177:
	StopWorld(); // 0xc69 Func
	var_105_bool = 1; // 0xc6b PushB
	CameraTransit(var_83_cvector, var_81_cvector, var_105_bool); // 0xc6c Func
	var_106_float = GetByIndex(var_82_cvector, 0); // 0xc6e PushE
	var_107_float = GetByIndex(var_82_cvector, 2); // 0xc6f PushE
	Rotate(var_106_float, var_107_float); // 0xc70 Func
	var_108_bool = 0; // 0xc72 PushV
	func_3621(var_108_bool); // 0xc73 NEW_2
	if(var_108_bool == 0) goto Label_3191; // 0xc75 JumpB
	goto Label_3199; // 0xc76 Jump
	
Label_3199:
	CameraWaitForPlayFinish(); // 0xc7f Func
	ResumeWorld(); // 0xc81 Func
	var_65_bool = 1; // 0xc83 MovB
	return 18; // 0xc84 Return
	
Label_3191:
	var_109_string = "head"; // 0xc77 PushS
	HasAnimationTrack(var_85_bool, var_109_string); // 0xc78 Func
	var_110_bool = var_85_bool; // 0xc7a Push
	if(var_110_bool == 0) goto Label_3199; // 0xc7b JumpB
	var_111_string = "head"; // 0xc7c PushS
	LookAsyncCamera(var_111_string); // 0xc7d Func
}


func_3649()
{
	var_77_string = "k10q01"; // 0xe42 PushS
	var_78_int = 5; // 0xe43 PushI
	SetVariable(var_77_string, var_78_int); // 0xe44 Func
	func_4024(); // 0xe47 NEW_2
	var_87_bool = 0; var_88_string = ""; var_89_string = ""; // 0xe49 PushV
	var_88_string = "quest_k10_01"; // 0xe4a MovS
	var_89_string = "free_prisoner"; // 0xe4b MovS
	func_3554(var_87_bool, var_88_string, var_89_string); // 0xe4c NEW_2
	return 0; // 0xe4e Return
}


func_4160(var_526_int)
{
	var_527_int = 0; var_528_int = 0; // 0x1040 PushV
	var_529_string = "k2system_danko_day"; // 0x1041 PushS
	GetVariable(var_529_string, var_528_int); // 0x1042 Func
	var_526_int = var_528_int; // 0x1044 Mov
	return 2; // 0x1045 Return
}


func_3392(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0; // 0xd40 PushV
	var_164_bool = 0; // 0xd41 PushV
	func_3621(var_164_bool); // 0xd42 NEW_2
	if(var_164_bool == 0) goto Label_3405; // 0xd44 JumpB
	lshHasSpeech(var_163_bool, var_161_string); // 0xd45 Func
	var_165_bool = var_163_bool; // 0xd47 Push
	if(var_165_bool == 0) goto Label_3405; // 0xd48 JumpB
	lshPlaySpeech(var_161_string); // 0xd49 Func
	var_160_bool = 1; // 0xd4b MovB
	return 2; // 0xd4c Return
	
Label_3405:
	var_160_bool = 0; // 0xd4d MovB
	return 2; // 0xd4e Return
}


func_3575(var_643_int)
{
	var_644_float = 0; var_645_float = 0; // 0xdf7 PushV
	GetGameTime(var_645_float); // 0xdf8 Func
	var_646_int = 0; // 0xdfa PushV
	var_646_int = var_645_float; // 0xdfb Mov
	var_647_int = 24; // 0xdfc PushI
	var_643_int = var_646_int % var_647_int; // 0xdfd Mod2
	return 2; // 0xdfe Return
}


func_3909(var_544_bool)
{
	var_546_int = 0; var_547_string = ""; // 0xf46 PushV
	var_547_string = "ook11Block1"; // 0xf47 MovS
	func_3441(var_546_int, var_547_string); // 0xf48 NEW_2
	var_548_int = 0; // 0xf4a PushI
	var_549_bool = var_546_int == var_548_int; // 0xf4b Eq
	if(var_549_bool == 0) goto Label_3919; // 0xf4c JumpB
	var_544_bool = 1; // 0xf4d MovB
	return 0; // 0xf4e Return
	
Label_3919:
	var_544_bool = 0; // 0xf4f MovB
	return 0; // 0xf50 Return
}


func_4166(var_535_int)
{
	var_536_int = 0; var_537_int = 0; var_538_int = 0; var_539_int = 0; // 0x1046 PushV
	var_540_int = 0; // 0x1047 PushV
	func_4160(var_540_int); // 0x1048 NEW_2
	var_538_int = var_540_int; // 0x1049 Mov
	var_541_string = "k2system_danko_state"; // 0x104b PushS
	var_542_int = var_541_string + var_538_int; // 0x104c Add
	GetVariable(var_542_int, var_539_int); // 0x104d Func
	var_535_int = var_539_int; // 0x104f Mov
	return 4; // 0x1050 Return
}


func_3663()
{
	var_39_string = "k11q01"; // 0xe50 PushS
	var_40_int = 2; // 0xe51 PushI
	SetVariable(var_39_string, var_40_int); // 0xe52 Func
	func_4037(); // 0xe55 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0xe57 PushV
	var_65_string = "quest_k11_01"; // 0xe58 MovS
	var_66_string = "init_kabak"; // 0xe59 MovS
	func_3554(var_64_bool, var_65_string, var_66_string); // 0xe5a NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xe5c PushV
	var_71_string = "quest_k11_01"; // 0xe5d MovS
	var_72_string = "init_gun"; // 0xe5e MovS
	func_3554(var_70_bool, var_71_string, var_72_string); // 0xe5f NEW_2
	return 0; // 0xe61 Return
}


func_3407()
{
	var_34_bool = 0; // 0xd4f PushV
	func_3621(var_34_bool); // 0xd50 NEW_2
	if(var_34_bool == 0) goto Label_3413; // 0xd52 JumpB
	lshStopSpeech(); // 0xd53 Func
	
Label_3413:
	return 0; // 0xd55 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x52 TMov
	var_1_object = var_308_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_314_int = 1; // 0x55 PushI
	if(var_314_int == 0) goto Label_139; // 0x56 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x57 PushV
	var_316_object = var_1_object; // 0x58 MovT
	func_3787(var_316_object); // 0x59 NEW_2
	if(var_315_bool == 0) goto Label_107; // 0x5b JumpB
	var_323_string = ""; // 0x5c PushV
	var_323_string = "Neutral"; // 0x5d MovS
	func_169(var_309_object, var_323_string); // 0x5e NEW_2
	var_331_int = 526965; // 0x60 PushI
	SetMessage(var_331_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_332_int = 528076; // 0x65 PushI
	var_333_int = 29419; // 0x66 PushI
	var_334_int = 29418; // 0x67 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x68 TObjFunc
	goto Label_139; // 0x6a Jump
	
Label_139:
	var_335_bool = 0; // 0x8b PushV
	func_3621(var_335_bool); // 0x8c NEW_2
	if(var_335_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_336_string = var_3_string; // 0x91 PushT
	if(var_336_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_337_string = ""; // 0x94 PushV
	var_337_string = var_2_object; // 0x95 MovT
	func_3361(var_337_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_338_string = "all"; // 0x9a PushS
	var_339_string = "idle"; // 0x9b PushS
	PlayAnimation(var_338_string, var_339_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_340_string = var_3_string; // 0xa0 PushT
	if(var_340_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_341_string = "all"; // 0xa3 PushS
	var_342_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_341_string, var_342_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_107:
	var_343_string = ""; // 0x6b PushV
	var_343_string = "Neutral"; // 0x6c MovS
	func_169(var_309_object, var_343_string); // 0x6d NEW_2
	var_344_int = 526969; // 0x6f PushI
	SetMessage(var_344_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_345_bool = 0; var_346_object = Obj(); // 0x74 PushV
	var_346_object = var_1_object; // 0x75 MovT
	func_3799(var_346_object); // 0x76 NEW_2
	if(var_345_bool == 0) goto Label_126; // 0x78 JumpB
	var_351_int = 526978; // 0x79 PushI
	var_352_int = 29424; // 0x7a PushI
	var_353_int = 28270; // 0x7b PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x7c TObjFunc
	
Label_126:
	var_354_int = 526970; // 0x7e PushI
	var_355_int = -1; // 0x7f PushI
	var_356_int = 28262; // 0x80 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x81 TObjFunc
	var_357_int = 528088; // 0x83 PushI
	var_358_int = -1; // 0x84 PushI
	var_359_int = 29431; // 0x85 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_4177(var_524_bool)
{
	var_525_int = 0; // 0x1051 PushV
	func_3566(var_525_int); // 0x1052 NEW_2
	var_526_int = 0; // 0x1054 PushV
	func_4160(var_526_int); // 0x1055 NEW_2
	var_524_bool = var_525_int == var_526_int; // 0x1057 Eq2
	return 0; // 0x1058 Return
}


func_3921(var_564_bool)
{
	var_566_int = 0; var_567_string = ""; // 0xf52 PushV
	var_567_string = "ook11Block2"; // 0xf53 MovS
	func_3441(var_566_int, var_567_string); // 0xf54 NEW_2
	var_568_int = 0; // 0xf56 PushI
	var_569_bool = var_566_int == var_568_int; // 0xf57 Eq
	if(var_569_bool == 0) goto Label_3931; // 0xf58 JumpB
	var_564_bool = 1; // 0xf59 MovB
	return 0; // 0xf5a Return
	
Label_3931:
	var_564_bool = 0; // 0xf5b MovB
	return 0; // 0xf5c Return
}


func_2386(var_2_object, var_651_string)
{
	var_652_bool = 0; // 0x953 PushV
	func_3621(var_652_bool); // 0x954 NEW_2
	var_653_bool = var_652_bool == 0; // 0x956 Not
	if(var_653_bool == 0) goto Label_2393; // 0x957 JumpB
	return 0; // 0x958 Return
	
Label_2393:
	var_654_bool = var_651_string == var_2_object; // 0x959 Eq
	if(var_654_bool == 0) goto Label_2396; // 0x95a JumpB
	return 0; // 0x95b Return
	
Label_2396:
	var_655_string = ""; var_656_bool = 0; // 0x95c PushV
	var_655_string = var_651_string; // 0x95d Mov
	var_657_string = ""; // 0x95e PushS
	var_658_bool = var_651_string == var_657_string; // 0x95f Eq
	if(var_658_bool == 0) goto Label_2403; // 0x960 JumpB
	var_656_bool = 0; // 0x961 MovB
	goto Label_2404; // 0x962 Jump
	
Label_2404:
	func_3377(var_655_string, var_656_bool); // 0x964 NEW_2
	var_2_object = var_651_string; // 0x966 TMov
	return 0; // 0x967 Return
	
Label_2403:
	var_656_bool = 1; // 0x963 MovB
}


func_3414(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xd56 PushV
	self(var_130_object); // 0xd57 Func
	var_128_object = var_130_object; // 0xd59 Mov
	return 2; // 0xd5a Return
}


func_4185(var_561_bool)
{
	var_562_int = 0; // 0x1059 PushV
	func_4166(var_562_int); // 0x105a NEW_2
	var_563_int = 2; // 0x105c PushI
	var_561_bool = var_562_int == var_563_int; // 0x105d Eq2
	return 0; // 0x105e Return
}


func_3420(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xd5c PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xd5d Or
	var_96_float = sqrt(var_97_int); // 0xd5e Sqrt2
	var_98_float = 0.0; // 0xd5f PushF
	var_99_bool = var_96_float < var_98_float; // 0xd60 LT
	if(var_99_bool == 0) goto Label_3428; // 0xd61 JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xd62 MovV
	return 2; // 0xd63 Return
	
Label_3428:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xd64 Div2
	return 2; // 0xd65 Return
}


func_3933(var_584_bool)
{
	var_586_int = 0; var_587_string = ""; // 0xf5e PushV
	var_587_string = "ook11Block3"; // 0xf5f MovS
	func_3441(var_586_int, var_587_string); // 0xf60 NEW_2
	var_588_int = 0; // 0xf62 PushI
	var_589_bool = var_586_int == var_588_int; // 0xf63 Eq
	if(var_589_bool == 0) goto Label_3943; // 0xf64 JumpB
	var_584_bool = 1; // 0xf65 MovB
	return 0; // 0xf66 Return
	
Label_3943:
	var_584_bool = 0; // 0xf67 MovB
	return 0; // 0xf68 Return
}


func_4089()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xff9 PushV
	var_41_int = 526; // 0xffa PushI
	var_42_int = 1; // 0xffb PushI
	var_43_int = 529818; // 0xffc PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0xffd Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0xfff PushV
	var_45_object = var_40_object; // 0x1000 Mov
	var_46_int = 517; // 0x1001 MovI
	func_4115(var_44_bool, var_45_object, var_46_int); // 0x1002 NEW_2
	return 2; // 0x1004 Return
}


func_4191(var_581_bool)
{
	var_582_int = 0; // 0x105f PushV
	func_4166(var_582_int); // 0x1060 NEW_2
	var_583_int = 3; // 0x1062 PushI
	var_581_bool = var_582_int == var_583_int; // 0x1063 Eq2
	return 0; // 0x1064 Return
}


func_3682()
{
	var_81_string = "k11q01"; // 0xe63 PushS
	var_82_int = 9; // 0xe64 PushI
	SetVariable(var_81_string, var_82_int); // 0xe65 Func
	var_83_string = "k11q01SoulCount"; // 0xe67 PushS
	var_84_int = 1; // 0xe68 PushI
	SetVariable(var_83_string, var_84_int); // 0xe69 Func
	func_4050(); // 0xe6c NEW_2
	return 0; // 0xe6e Return
}


func_1890(var_2_object, var_401_string)
{
	var_402_bool = 0; // 0x763 PushV
	func_3621(var_402_bool); // 0x764 NEW_2
	var_403_bool = var_402_bool == 0; // 0x766 Not
	if(var_403_bool == 0) goto Label_1897; // 0x767 JumpB
	return 0; // 0x768 Return
	
Label_1897:
	var_404_bool = var_401_string == var_2_object; // 0x769 Eq
	if(var_404_bool == 0) goto Label_1900; // 0x76a JumpB
	return 0; // 0x76b Return
	
Label_1900:
	var_405_string = ""; var_406_bool = 0; // 0x76c PushV
	var_405_string = var_401_string; // 0x76d Mov
	var_407_string = ""; // 0x76e PushS
	var_408_bool = var_401_string == var_407_string; // 0x76f Eq
	if(var_408_bool == 0) goto Label_1907; // 0x770 JumpB
	var_406_bool = 0; // 0x771 MovB
	goto Label_1908; // 0x772 Jump
	
Label_1908:
	func_3377(var_405_string, var_406_bool); // 0x774 NEW_2
	var_2_object = var_401_string; // 0x776 TMov
	return 0; // 0x777 Return
	
Label_1907:
	var_406_bool = 1; // 0x773 MovB
}


func_4197(var_534_bool)
{
	var_535_int = 0; // 0x1065 PushV
	func_4166(var_535_int); // 0x1066 NEW_2
	var_543_int = 0; // 0x1068 PushI
	var_534_bool = var_535_int == var_543_int; // 0x1069 Eq2
	return 0; // 0x106a Return
}


func_3430(var_192_float, var_193_float, var_194_float, var_195_float)
{
	var_196_bool = var_193_float < var_194_float; // 0xd67 LT
	if(var_196_bool == 0) goto Label_3435; // 0xd68 JumpB
	var_192_float = var_194_float; // 0xd69 Mov
	return 0; // 0xd6a Return
	
Label_3435:
	var_197_bool = var_193_float > var_195_float; // 0xd6b GT
	if(var_197_bool == 0) goto Label_3439; // 0xd6c JumpB
	var_192_float = var_195_float; // 0xd6d Mov
	return 0; // 0xd6e Return
	
Label_3439:
	var_192_float = var_193_float; // 0xd6f Mov
	return 0; // 0xd70 Return
}


func_3945(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0xf6a PushV
	var_429_string = "ook9Block1"; // 0xf6b MovS
	func_3441(var_428_int, var_429_string); // 0xf6c NEW_2
	var_430_int = 0; // 0xf6e PushI
	var_431_bool = var_428_int == var_430_int; // 0xf6f Eq
	if(var_431_bool == 0) goto Label_3955; // 0xf70 JumpB
	var_426_bool = 1; // 0xf71 MovB
	return 0; // 0xf72 Return
	
Label_3955:
	var_426_bool = 0; // 0xf73 MovB
	return 0; // 0xf74 Return
}


func_4203(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0x106b PushV
	var_52_string = "mt_block"; // 0x106c PushS
	GetVariable(var_52_string, var_51_int); // 0x106d Func
	var_53_bool = var_51_int == 0; // 0x106f Not
	if(var_53_bool == 0) goto Label_4219; // 0x1070 JumpB
	var_54_int = 0; var_55_object = Obj(); // 0x1071 PushV
	var_55_object = var_49_object; // 0x1072 Mov
	TaskCall(4); // 0x1073 TaskCall
	func_1459(var_56_object, var_54_int, var_55_object); // 0x1074 NEW_2
	TaskReturn(); // 0x1075 TaskReturn
	var_279_string = "mt_block"; // 0x1077 PushS
	var_280_int = 1; // 0x1078 PushI
	SetVariable(var_279_string, var_280_int); // 0x1079 Func
	
Label_4219:
	var_281_bool = 0; var_282_int = 0; // 0x107b PushV
	var_282_int = 10; // 0x107c MovI
	func_3583(var_281_bool, var_282_int); // 0x107d NEW_2
	if(var_281_bool == 0) goto Label_4231; // 0x107f JumpB
	var_284_int = 0; var_285_object = Obj(); // 0x1080 PushV
	var_285_object = var_49_object; // 0x1081 Mov
	TaskCall(0); // 0x1082 TaskCall
	func_0(var_286_object, var_284_int, var_285_object); // 0x1083 NEW_2
	TaskReturn(); // 0x1084 TaskReturn
	return 2; // 0x1086 Return
	
Label_4231:
	var_362_bool = 0; var_363_int = 0; // 0x1087 PushV
	var_363_int = 9; // 0x1088 MovI
	func_3583(var_362_bool, var_363_int); // 0x1089 NEW_2
	if(var_362_bool == 0) goto Label_4243; // 0x108b JumpB
	var_364_int = 0; var_365_object = Obj(); // 0x108c PushV
	var_365_object = var_49_object; // 0x108d Mov
	TaskCall(6); // 0x108e TaskCall
	func_1721(var_366_object, var_364_int, var_365_object); // 0x108f NEW_2
	TaskReturn(); // 0x1090 TaskReturn
	return 2; // 0x1092 Return
	
Label_4243:
	var_440_bool = 0; var_441_int = 0; // 0x1093 PushV
	var_441_int = 11; // 0x1094 MovI
	func_3583(var_440_bool, var_441_int); // 0x1095 NEW_2
	if(var_440_bool == 0) goto Label_4255; // 0x1097 JumpB
	var_442_int = 0; var_443_object = Obj(); // 0x1098 PushV
	var_443_object = var_49_object; // 0x1099 Mov
	TaskCall(2); // 0x109a TaskCall
	func_433(var_444_object, var_442_int, var_443_object); // 0x109b NEW_2
	TaskReturn(); // 0x109c TaskReturn
	return 2; // 0x109e Return
	
Label_4255:
	var_606_bool = 0; var_607_int = 0; // 0x109f PushV
	var_607_int = 12; // 0x10a0 MovI
	func_3583(var_606_bool, var_607_int); // 0x10a1 NEW_2
	if(var_606_bool == 0) goto Label_4267; // 0x10a3 JumpB
	var_608_int = 0; var_609_object = Obj(); // 0x10a4 PushV
	var_609_object = var_49_object; // 0x10a5 Mov
	TaskCall(8); // 0x10a6 TaskCall
	func_2216(var_610_object, var_608_int, var_609_object); // 0x10a7 NEW_2
	TaskReturn(); // 0x10a8 TaskReturn
	return 2; // 0x10aa Return
	
Label_4267:
	var_690_int = 0; var_691_object = Obj(); // 0x10ab PushV
	var_691_object = var_49_object; // 0x10ac Mov
	TaskCall(10); // 0x10ad TaskCall
	func_2604(var_692_object, var_690_int, var_691_object); // 0x10ae NEW_2
	TaskReturn(); // 0x10af TaskReturn
	return 2; // 0x10b1 Return
}


func_3583(var_281_bool, var_282_int)
{
	var_283_int = 0; // 0xe00 PushV
	func_3566(var_283_int); // 0xe01 NEW_2
	var_281_bool = var_283_int == var_282_int; // 0xe03 Eq2
	return 0; // 0xe04 Return
}


func_3695()
{
	func_4063(); // 0xe71 NEW_2
	var_109_bool = 0; var_110_string = ""; var_111_string = ""; // 0xe73 PushV
	var_110_string = "quest_k11_01"; // 0xe74 MovS
	var_111_string = "completed"; // 0xe75 MovS
	func_3554(var_109_bool, var_110_string, var_111_string); // 0xe76 NEW_2
	return 0; // 0xe78 Return
}


func_3441(var_317_int, var_318_string)
{
	var_319_int = 0; var_320_int = 0; // 0xd71 PushV
	GetVariable(var_318_string, var_320_int); // 0xd72 Func
	var_317_int = var_320_int; // 0xd74 Mov
	return 2; // 0xd75 Return
}


func_3957(var_660_bool)
{
	var_662_int = 0; var_663_string = ""; // 0xf76 PushV
	var_663_string = "ook12Block1"; // 0xf77 MovS
	func_3441(var_662_int, var_663_string); // 0xf78 NEW_2
	var_664_int = 0; // 0xf7a PushI
	var_665_bool = var_662_int == var_664_int; // 0xf7b Eq
	if(var_665_bool == 0) goto Label_3967; // 0xf7c JumpB
	var_660_bool = 1; // 0xf7d MovB
	return 0; // 0xf7e Return
	
Label_3967:
	var_660_bool = 0; // 0xf7f MovB
	return 0; // 0xf80 Return
}


func_3446(var_152_int, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0xd76 PushV
	CreateIntVector(var_155_object); // 0xd77 Func
	add(var_152_int); // 0xd79 ObjFunc
	add(var_153_int); // 0xd7b ObjFunc
	var_156_int = 3; // 0xd7d PushI
	SendWorldWndMessage(var_156_int, var_155_object); // 0xd7e Func
	return 2; // 0xd80 Return
}


func_3705()
{
	func_4089(); // 0xe7b NEW_2
	var_62_bool = 0; var_63_string = ""; var_64_string = ""; // 0xe7d PushV
	var_63_string = "quest_k9_01"; // 0xe7e MovS
	var_64_string = "completed"; // 0xe7f MovS
	func_3554(var_62_bool, var_63_string, var_64_string); // 0xe80 NEW_2
	return 0; // 0xe82 Return
}


func_2685(var_0_object, var_1_object, var_2_object, var_3_string, var_714_object, var_715_object)
{
	var_0_object = var_715_object; // 0xa7e TMov
	var_1_object = var_714_object; // 0xa7f TMov
	var_3_string = 0; // 0xa80 TMovB
	var_720_int = 1; // 0xa81 PushI
	if(var_720_int == 0) goto Label_2713; // 0xa82 JumpB
	var_721_string = ""; // 0xa83 PushV
	var_721_string = "Neutral"; // 0xa84 MovS
	func_2743(var_715_object, var_721_string); // 0xa85 NEW_2
	var_729_int = 540545; // 0xa87 PushI
	SetMessage(var_729_int); // 0xa88 TObjFunc
	ClearReplies(); // 0xa8a TObjFunc
	var_730_int = 540546; // 0xa8c PushI
	var_731_int = -1; // 0xa8d PushI
	var_732_int = 42555; // 0xa8e PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0xa8f TObjFunc
	var_733_int = 540798; // 0xa91 PushI
	var_734_int = -1; // 0xa92 PushI
	var_735_int = 42847; // 0xa93 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0xa94 TObjFunc
	goto Label_2713; // 0xa96 Jump
	
Label_2713:
	var_736_bool = 0; // 0xa99 PushV
	func_3621(var_736_bool); // 0xa9a NEW_2
	if(var_736_bool == 0) goto Label_2728; // 0xa9c JumpB
	
Label_2717:
	lshWaitForAnimEnd(); // 0xa9d Func
	var_737_string = var_3_string; // 0xa9f PushT
	if(var_737_string == 0) goto Label_2722; // 0xaa0 JumpB
	goto Label_2727; // 0xaa1 Jump
	
Label_2727:
	goto Label_2742; // 0xaa7 Jump
	
Label_2742:
	return 0; // 0xab6 Return
	
Label_2722:
	var_738_string = ""; // 0xaa2 PushV
	var_738_string = var_2_object; // 0xaa3 MovT
	func_3361(var_738_string); // 0xaa4 NEW_2
	goto Label_2717; // 0xaa6 Jump
	
Label_2728:
	var_739_string = "all"; // 0xaa8 PushS
	var_740_string = "idle"; // 0xaa9 PushS
	PlayAnimation(var_739_string, var_740_string); // 0xaaa Func
	
Label_2732:
	WaitForAnimEnd(); // 0xaac Func
	var_741_string = var_3_string; // 0xaae PushT
	if(var_741_string == 0) goto Label_2737; // 0xaaf JumpB
	goto Label_2742; // 0xab0 Jump
	
Label_2737:
	var_742_string = "all"; // 0xab1 PushS
	var_743_string = "idle"; // 0xab2 PushS
	PlayAnimation(var_742_string, var_743_string); // 0xab3 Func
	goto Label_2732; // 0xab5 Jump
}


func_3969(var_641_bool)
{
	var_643_int = 0; // 0xf82 PushV
	func_3575(var_643_int); // 0xf83 NEW_2
	var_648_int = 19; // 0xf85 PushI
	var_649_bool = var_643_int >= var_648_int; // 0xf86 GE
	if(var_649_bool == 0) goto Label_3978; // 0xf87 JumpB
	var_641_bool = 1; // 0xf88 MovB
	return 0; // 0xf89 Return
	
Label_3978:
	var_641_bool = 0; // 0xf8a MovB
	return 0; // 0xf8b Return
}


func_3458(var_139_object, var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0xd82 PushV
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0; // 0xd83 PushV
	var_143_object = var_139_object; // 0xd84 Mov
	var_144_string = "money"; // 0xd85 MovS
	var_145_int = var_140_int; // 0xd86 Mov
	func_3105(var_144_string, var_145_int); // 0xd87 NEW_2
	var_149_int = 0; // 0xd89 PushI
	var_150_bool = var_140_int > var_149_int; // 0xd8a GT
	if(var_150_bool == 0) goto Label_3476; // 0xd8b JumpB
	var_151_string = "Money"; // 0xd8c PushS
	GetInvItemByName(var_142_int, var_151_string); // 0xd8d Func
	var_152_int = 0; var_153_int = 0; // 0xd8f PushV
	var_152_int = var_142_int; // 0xd90 Mov
	var_153_int = var_140_int; // 0xd91 Mov
	func_3446(var_152_int, var_153_int); // 0xd92 NEW_2
	
Label_3476:
	return 2; // 0xd94 Return
}


func_3715()
{
	var_159_string = "playsound"; // 0xe84 PushS
	var_160_string = "giveitem"; // 0xe85 PushS
	TriggerWorld(var_159_string, var_160_string); // 0xe86 Func
	return 0; // 0xe88 Return
}


func_3205()
{
	var_272_bool = 0; var_273_bool = 0; // 0xc85 PushV
	var_274_bool = 1; // 0xc86 PushB
	CameraSwitchToNormal(var_274_bool); // 0xc87 Func
	var_275_bool = 0; // 0xc89 PushV
	func_3621(var_275_bool); // 0xc8a NEW_2
	if(var_275_bool == 0) goto Label_3214; // 0xc8c JumpB
	goto Label_3222; // 0xc8d Jump
	
Label_3222:
	return 2; // 0xc96 Return
	
Label_3214:
	var_276_string = "head"; // 0xc8e PushS
	HasAnimationTrack(var_273_bool, var_276_string); // 0xc8f Func
	var_277_bool = var_273_bool; // 0xc91 Push
	if(var_277_bool == 0) goto Label_3222; // 0xc92 JumpB
	var_278_string = "head"; // 0xc93 PushS
	UnlookAsync(var_278_string); // 0xc94 Func
}


func_3721()
{
	func_4076(); // 0xe8b NEW_2
	return 0; // 0xe8d Return
}


func_3980(var_503_bool)
{
	var_505_int = 0; var_506_int = 0; // 0xf8c PushV
	var_507_string = "k11q01SoulCount"; // 0xf8d PushS
	GetVariable(var_507_string, var_506_int); // 0xf8e Func
	var_508_int = 7; // 0xf90 PushI
	var_503_bool = var_506_int >= var_508_int; // 0xf91 GE2
	return 2; // 0xf92 Return
}


func_3726()
{
	var_116_string = "ook11Block1"; // 0xe8f PushS
	var_117_int = 1; // 0xe90 PushI
	SetVariable(var_116_string, var_117_int); // 0xe91 Func
	return 0; // 0xe93 Return
}


func_3987(var_522_bool)
{
	var_524_bool = 0; // 0xf94 PushV
	func_4177(var_524_bool); // 0xf95 NEW_2
	var_522_bool = var_524_bool; // 0xf96 Mov
	return 0; // 0xf98 Return
}


func_3732()
{
	var_122_string = "ook11Block2"; // 0xe95 PushS
	var_123_int = 1; // 0xe96 PushI
	SetVariable(var_122_string, var_123_int); // 0xe97 Func
	return 0; // 0xe99 Return
}


func_3477(var_210_object, var_211_int)
{
	var_212_int = 0; var_213_int = 0; var_214_bool = 0; var_215_int = 0; var_216_int = 0; var_217_bool = 0; // 0xd95 PushV
	GetItemID(var_215_int); // 0xd96 ObjFunc
	var_218_string = "Category"; // 0xd98 PushS
	GetInvItemProperty(var_216_int, var_215_int, var_218_string); // 0xd99 Func
	AddItem(var_217_bool, var_210_object, var_216_int, var_211_int); // 0xd9b ObjFunc
	var_219_bool = var_217_bool == 0; // 0xd9d Not
	if(var_219_bool == 0) goto Label_3490; // 0xd9e JumpB
	DropItems(var_210_object, var_211_int); // 0xd9f ObjFunc
	goto Label_3495; // 0xda1 Jump
	
Label_3495:
	return 6; // 0xda7 Return
	
Label_3490:
	var_220_int = 0; var_221_int = 0; // 0xda2 PushV
	var_220_int = var_215_int; // 0xda3 Mov
	var_221_int = var_211_int; // 0xda4 Mov
	func_3446(var_220_int, var_221_int); // 0xda5 NEW_2
}


func_3223(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0; // 0xc97 PushV
	var_135_string = "voice_common"; // 0xc98 PushS
	GetVariable(var_135_string, var_133_int); // 0xc99 Func
	var_136_int = var_133_int; // 0xc9b Push
	if(var_136_int == 0) goto Label_3261; // 0xc9c JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0xc9d PushV
	var_138_object = var_127_object; // 0xc9e Mov
	func_3281(var_138_object); // 0xc9f NEW_2
	var_167_bool = var_137_bool == 0; // 0xca1 Not
	if(var_167_bool == 0) goto Label_3243; // 0xca2 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0xca3 PushV
	var_169_object = var_127_object; // 0xca4 Mov
	func_3318(var_169_object); // 0xca5 NEW_2
	var_203_bool = var_168_bool == 0; // 0xca7 Not
	if(var_203_bool == 0) goto Label_3243; // 0xca8 JumpB
	var_126_bool = 0; // 0xca9 MovB
	return 4; // 0xcaa Return
	
Label_3243:
	var_204_int = 2; // 0xcab PushI
	irand(var_134_int, var_204_int); // 0xcac Func
	var_205_int = var_134_int; // 0xcae Push
	if(var_205_int == 0) goto Label_3256; // 0xcaf JumpB
	var_206_string = "voice_common"; // 0xcb0 PushS
	var_207_int = 1; // 0xcb1 PushI
	var_208_int = var_133_int + var_207_int; // 0xcb2 Add
	var_209_int = 3; // 0xcb3 PushI
	var_210_int = var_208_int / var_209_int; // 0xcb4 Mod
	SetVariable(var_206_string, var_210_int); // 0xcb5 Func
	goto Label_3260; // 0xcb7 Jump
	
Label_3260:
	goto Label_3279; // 0xcbc Jump
	
Label_3279:
	var_126_bool = 1; // 0xccf MovB
	return 4; // 0xcd0 Return
	
Label_3256:
	var_211_string = "voice_common"; // 0xcb8 PushS
	var_212_int = 0; // 0xcb9 PushI
	SetVariable(var_211_string, var_212_int); // 0xcba Func
	
Label_3261:
	var_213_bool = 0; var_214_object = Obj(); // 0xcbd PushV
	var_214_object = var_127_object; // 0xcbe Mov
	func_3318(var_214_object); // 0xcbf NEW_2
	var_215_bool = var_213_bool == 0; // 0xcc1 Not
	if(var_215_bool == 0) goto Label_3275; // 0xcc2 JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0xcc3 PushV
	var_217_object = var_127_object; // 0xcc4 Mov
	func_3281(var_217_object); // 0xcc5 NEW_2
	var_218_bool = var_216_bool == 0; // 0xcc7 Not
	if(var_218_bool == 0) goto Label_3275; // 0xcc8 JumpB
	var_126_bool = 0; // 0xcc9 MovB
	return 4; // 0xcca Return
	
Label_3275:
	var_219_string = "voice_common"; // 0xccb PushS
	var_220_int = 1; // 0xccc PushI
	SetVariable(var_219_string, var_220_int); // 0xccd Func
}


func_3993(var_532_bool)
{
	var_534_bool = 0; // 0xf9a PushV
	func_4197(var_534_bool); // 0xf9b NEW_2
	var_532_bool = var_534_bool; // 0xf9c Mov
	return 0; // 0xf9e Return
}


func_3738()
{
	var_226_string = "ook11Block3"; // 0xe9b PushS
	var_227_int = 1; // 0xe9c PushI
	SetVariable(var_226_string, var_227_int); // 0xe9d Func
	return 0; // 0xe9f Return
}


func_3999(var_559_bool)
{
	var_561_bool = 0; // 0xfa0 PushV
	func_4185(var_561_bool); // 0xfa1 NEW_2
	var_559_bool = var_561_bool; // 0xfa2 Mov
	return 0; // 0xfa4 Return
}


func_3744()
{
	var_76_string = "ook9Block1"; // 0xea1 PushS
	var_77_int = 1; // 0xea2 PushI
	SetVariable(var_76_string, var_77_int); // 0xea3 Func
	return 0; // 0xea5 Return
}


func_4005(var_579_bool)
{
	var_581_bool = 0; // 0xfa6 PushV
	func_4191(var_581_bool); // 0xfa7 NEW_2
	var_579_bool = var_581_bool; // 0xfa8 Mov
	return 0; // 0xfaa Return
}


func_3750()
{
	var_39_string = "ook12Block1"; // 0xea7 PushS
	var_40_int = 1; // 0xea8 PushI
	SetVariable(var_39_string, var_40_int); // 0xea9 Func
	return 0; // 0xeab Return
}


func_2216(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0; // 0x8a8 PushV
	var_0_object = var_609_object; // 0x8a9 TMov
	var_619_bool = 0; var_620_object = Obj(); var_621_float = 0; // 0x8aa PushV
	var_620_object = var_609_object; // 0x8ab Mov
	var_621_float = 70.0; // 0x8ac MovF
	func_3136(var_620_object, var_621_float); // 0x8ad NEW_2
	var_622_bool = var_619_bool == 0; // 0x8af Not
	if(var_622_bool == 0) goto Label_2227; // 0x8b0 JumpB
	var_608_int = -2; // 0x8b1 MovI
	return 8; // 0x8b2 Return
	
Label_2227:
	CreateDialog(var_615_object); // 0x8b3 Func
	var_623_int = 0; // 0x8b5 PushV
	func_3615(var_623_int); // 0x8b6 NEW_2
	SetNPCName(var_623_int); // 0x8b8 ObjFunc
	var_624_int = 0; // 0x8ba PushV
	func_3613(var_624_int); // 0x8bb NEW_2
	SetNPCDescription(var_624_int); // 0x8bd ObjFunc
	var_625_string = ""; // 0x8bf PushV
	func_3617(var_625_string); // 0x8c0 NEW_2
	SetPhoto(var_625_string); // 0x8c2 ObjFunc
	var_626_string = ""; // 0x8c4 PushV
	func_3619(var_626_string); // 0x8c5 NEW_2
	SetPhoto2(var_626_string); // 0x8c7 ObjFunc
	var_627_int = 0; // 0x8c9 PushV
	func_4143(var_627_int); // 0x8ca NEW_2
	SetPlayerName(var_627_int); // 0x8cc ObjFunc
	var_617_int = -1; // 0x8ce MovI
	IsOverrideActive(var_616_bool); // 0x8cf Func
	var_628_bool = var_616_bool; // 0x8d1 Push
	if(var_628_bool == 0) goto Label_2261; // 0x8d2 JumpB
	var_608_int = -2; // 0x8d3 MovI
	return 8; // 0x8d4 Return
	
Label_2261:
	DoDialog(var_615_object); // 0x8d5 Func
	var_629_bool = 0; var_630_object = Obj(); // 0x8d7 PushV
	var_631_object = Obj(); // 0x8d8 PushV
	func_3414(var_631_object); // 0x8d9 NEW_2
	var_630_object = var_631_object; // 0x8da Mov
	func_3223(var_629_bool, var_630_object); // 0x8dc NEW_2
	var_632_object = Obj(); var_633_object = Obj(); // 0x8de PushV
	var_632_object = var_609_object; // 0x8df Mov
	var_633_object = var_615_object; // 0x8e0 Mov
	TaskCall(9); // 0x8e1 TaskCall
	func_2297(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object); // 0x8e2 NEW_2
	TaskReturn(); // 0x8e3 TaskReturn
	IsDialogEnd(var_618_bool); // 0x8e5 ObjFunc
	
Label_2279:
	var_688_bool = var_618_bool == 0; // 0x8e7 Not
	if(var_688_bool == 0) goto Label_2286; // 0x8e8 JumpB
	sync(); // 0x8e9 Func
	IsDialogEnd(var_618_bool); // 0x8eb ObjFunc
	goto Label_2279; // 0x8ed Jump
	
Label_2286:
	var_689_object = Obj(); // 0x8ee PushV
	var_689_object = var_609_object; // 0x8ef Mov
	func_3205(); // 0x8f0 NEW_2
	StopDialog(var_615_object); // 0x8f2 Func
	GetReturnValue(var_617_int); // 0x8f4 ObjFunc
	var_608_int = var_617_int; // 0x8f6 Mov
	return 8; // 0x8f7 Return
}


func_169(var_2_object, var_323_string)
{
	var_324_bool = 0; // 0xaa PushV
	func_3621(var_324_bool); // 0xab NEW_2
	var_325_bool = var_324_bool == 0; // 0xad Not
	if(var_325_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_326_bool = var_323_string == var_2_object; // 0xb0 Eq
	if(var_326_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_327_string = ""; var_328_bool = 0; // 0xb3 PushV
	var_327_string = var_323_string; // 0xb4 Mov
	var_329_string = ""; // 0xb5 PushS
	var_330_bool = var_323_string == var_329_string; // 0xb6 Eq
	if(var_330_bool == 0) goto Label_186; // 0xb7 JumpB
	var_328_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_3377(var_327_string, var_328_bool); // 0xbb NEW_2
	var_2_object = var_323_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_328_bool = 1; // 0xba MovB
}


func_3496(var_204_object, var_205_string, var_206_int)
{
	var_207_object = Obj(); var_208_object = Obj(); // 0xda8 PushV
	CreateInvItem(var_208_object); // 0xda9 Func
	SetItemName(var_205_string); // 0xdab ObjFunc
	var_209_object = Obj(); var_210_object = Obj(); var_211_int = 0; // 0xdad PushV
	var_209_object = var_204_object; // 0xdae Mov
	var_210_object = var_208_object; // 0xdaf Mov
	var_211_int = var_206_int; // 0xdb0 Mov
	func_3477(var_210_object, var_211_int); // 0xdb1 NEW_2
	return 2; // 0xdb3 Return
}


func_2987()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0xbab PushV
	WaitForAnimEnd(); // 0xbac Func
	var_47_bool = 0; // 0xbae PushV
	func_3131(var_47_bool); // 0xbaf NEW_2
	var_48_bool = var_47_bool == 0; // 0xbb1 Not
	if(var_48_bool == 0) goto Label_2996; // 0xbb2 JumpB
	return 12; // 0xbb3 Return
	
Label_2996:
	var_49_int = 0; // 0xbb4 PushV
	func_3596(var_49_int); // 0xbb5 NEW_2
	var_41_int = var_49_int; // 0xbb6 Mov
	var_42_int = 0; // 0xbb8 MovI
	
Label_3001:
	var_62_bool = 0; // 0xbb9 PushV
	var_62_bool = 0; // 0xbba MovB
	var_63_int = 5; // 0xbbb PushI
	var_64_bool = var_42_int < var_63_int; // 0xbbc LT
	if(var_64_bool == 0) goto Label_3011; // 0xbbd JumpB
	var_65_bool = 0; // 0xbbe PushV
	func_3131(var_65_bool); // 0xbbf NEW_2
	if(var_65_bool == 0) goto Label_3011; // 0xbc1 JumpB
	var_62_bool = 1; // 0xbc2 MovB
	
Label_3011:
	if(var_62_bool == 0) goto Label_3053; // 0xbc3 JumpB
	var_66_bool = var_41_int == 0; // 0xbc4 Not
	if(var_66_bool == 0) goto Label_3021; // 0xbc5 JumpB
	var_67_int = 3; // 0xbc6 PushI
	Sleep(var_67_int, var_43_bool); // 0xbc7 Func
	var_68_bool = var_43_bool == 0; // 0xbc9 Not
	if(var_68_bool == 0) goto Label_3020; // 0xbca JumpB
	goto Label_3053; // 0xbcb Jump
	
Label_3053:
	ResetAAS(); // 0xbed Func
	return 12; // 0xbef Return
	
Label_3020:
	goto Label_3042; // 0xbcc Jump
	
Label_3042:
	var_69_bool = 0; // 0xbe2 PushV
	func_3056(var_69_bool); // 0xbe3 NEW_2
	var_70_bool = var_69_bool == 0; // 0xbe5 Not
	if(var_70_bool == 0) goto Label_3048; // 0xbe6 JumpB
	goto Label_3053; // 0xbe7 Jump
	
Label_3048:
	ResetAAS(); // 0xbe8 Func
	var_71_int = 1; // 0xbea PushI
	var_42_int = var_42_int + var_71_int; // 0xbeb Add2
	goto Label_3001; // 0xbec Jump
	
Label_3021:
	irand(var_44_int, var_41_int); // 0xbcd Func
	var_72_int = 5; // 0xbcf PushI
	irand(var_45_int, var_72_int); // 0xbd0 Func
	var_73_int = 0; // 0xbd2 PushI
	var_74_bool = var_45_int != var_73_int; // 0xbd3 Neq
	if(var_74_bool == 0) goto Label_3030; // 0xbd4 JumpB
	var_44_int = 0; // 0xbd5 MovI
	
Label_3030:
	var_75_string = "all"; // 0xbd6 PushS
	var_76_string = ""; var_77_int = 0; // 0xbd7 PushV
	var_77_int = var_44_int; // 0xbd8 Mov
	func_3589(var_76_string, var_77_int); // 0xbd9 NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0xbdb Func
	WaitForAnimEnd(var_46_bool); // 0xbdd Func
	var_78_bool = var_46_bool == 0; // 0xbdf Not
	if(var_78_bool == 0) goto Label_3042; // 0xbe0 JumpB
	goto Label_3053; // 0xbe1 Jump
}


func_3756(var_136_object)
{
	var_138_string = "money 5000 is given"; // 0xead PushS
	Trace(var_138_string); // 0xeae Func
	var_139_object = Obj(); var_140_int = 0; // 0xeb0 PushV
	var_139_object = var_136_object; // 0xeb1 Mov
	var_140_int = 5000; // 0xeb2 MovI
	func_3458(var_139_object, var_140_int); // 0xeb3 NEW_2
	return 0; // 0xeb5 Return
}


func_4011()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xfab PushV
	var_43_int = 450; // 0xfac PushI
	var_44_int = 1; // 0xfad PushI
	var_45_int = 527008; // 0xfae PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xfaf Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xfb1 PushV
	var_47_object = var_42_object; // 0xfb2 Mov
	var_48_int = 447; // 0xfb3 MovI
	func_4115(var_46_bool, var_47_object, var_48_int); // 0xfb4 NEW_2
	return 2; // 0xfb6 Return
}


func_433(var_0_object, var_442_int, var_443_object)
{
	var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; var_449_object = Obj(); var_450_bool = 0; var_451_int = 0; var_452_bool = 0; // 0x1b1 PushV
	var_0_object = var_443_object; // 0x1b2 TMov
	var_453_bool = 0; var_454_object = Obj(); var_455_float = 0; // 0x1b3 PushV
	var_454_object = var_443_object; // 0x1b4 Mov
	var_455_float = 70.0; // 0x1b5 MovF
	func_3136(var_454_object, var_455_float); // 0x1b6 NEW_2
	var_456_bool = var_453_bool == 0; // 0x1b8 Not
	if(var_456_bool == 0) goto Label_444; // 0x1b9 JumpB
	var_442_int = -2; // 0x1ba MovI
	return 8; // 0x1bb Return
	
Label_444:
	CreateDialog(var_449_object); // 0x1bc Func
	var_457_int = 0; // 0x1be PushV
	func_3615(var_457_int); // 0x1bf NEW_2
	SetNPCName(var_457_int); // 0x1c1 ObjFunc
	var_458_int = 0; // 0x1c3 PushV
	func_3613(var_458_int); // 0x1c4 NEW_2
	SetNPCDescription(var_458_int); // 0x1c6 ObjFunc
	var_459_string = ""; // 0x1c8 PushV
	func_3617(var_459_string); // 0x1c9 NEW_2
	SetPhoto(var_459_string); // 0x1cb ObjFunc
	var_460_string = ""; // 0x1cd PushV
	func_3619(var_460_string); // 0x1ce NEW_2
	SetPhoto2(var_460_string); // 0x1d0 ObjFunc
	var_461_int = 0; // 0x1d2 PushV
	func_4143(var_461_int); // 0x1d3 NEW_2
	SetPlayerName(var_461_int); // 0x1d5 ObjFunc
	var_451_int = -1; // 0x1d7 MovI
	IsOverrideActive(var_450_bool); // 0x1d8 Func
	var_462_bool = var_450_bool; // 0x1da Push
	if(var_462_bool == 0) goto Label_478; // 0x1db JumpB
	var_442_int = -2; // 0x1dc MovI
	return 8; // 0x1dd Return
	
Label_478:
	DoDialog(var_449_object); // 0x1de Func
	var_463_bool = 0; var_464_object = Obj(); // 0x1e0 PushV
	var_465_object = Obj(); // 0x1e1 PushV
	func_3414(var_465_object); // 0x1e2 NEW_2
	var_464_object = var_465_object; // 0x1e3 Mov
	func_3223(var_463_bool, var_464_object); // 0x1e5 NEW_2
	var_466_object = Obj(); var_467_object = Obj(); // 0x1e7 PushV
	var_466_object = var_443_object; // 0x1e8 Mov
	var_467_object = var_449_object; // 0x1e9 Mov
	TaskCall(3); // 0x1ea TaskCall
	func_514(var_468_object, var_469_object, var_470_string, var_471_bool, var_466_object, var_467_object); // 0x1eb NEW_2
	TaskReturn(); // 0x1ec TaskReturn
	IsDialogEnd(var_452_bool); // 0x1ee ObjFunc
	
Label_496:
	var_604_bool = var_452_bool == 0; // 0x1f0 Not
	if(var_604_bool == 0) goto Label_503; // 0x1f1 JumpB
	sync(); // 0x1f2 Func
	IsDialogEnd(var_452_bool); // 0x1f4 ObjFunc
	goto Label_496; // 0x1f6 Jump
	
Label_503:
	var_605_object = Obj(); // 0x1f7 PushV
	var_605_object = var_443_object; // 0x1f8 Mov
	func_3205(); // 0x1f9 NEW_2
	StopDialog(var_449_object); // 0x1fb Func
	GetReturnValue(var_451_int); // 0x1fd ObjFunc
	var_442_int = var_451_int; // 0x1ff Mov
	return 8; // 0x200 Return
}


func_690(var_2_object, var_473_string)
{
	var_474_bool = 0; // 0x2b3 PushV
	func_3621(var_474_bool); // 0x2b4 NEW_2
	var_475_bool = var_474_bool == 0; // 0x2b6 Not
	if(var_475_bool == 0) goto Label_697; // 0x2b7 JumpB
	return 0; // 0x2b8 Return
	
Label_697:
	var_476_bool = var_473_string == var_2_object; // 0x2b9 Eq
	if(var_476_bool == 0) goto Label_700; // 0x2ba JumpB
	return 0; // 0x2bb Return
	
Label_700:
	var_477_string = ""; var_478_bool = 0; // 0x2bc PushV
	var_477_string = var_473_string; // 0x2bd Mov
	var_479_string = ""; // 0x2be PushS
	var_480_bool = var_473_string == var_479_string; // 0x2bf Eq
	if(var_480_bool == 0) goto Label_707; // 0x2c0 JumpB
	var_478_bool = 0; // 0x2c1 MovB
	goto Label_708; // 0x2c2 Jump
	
Label_708:
	func_3377(var_477_string, var_478_bool); // 0x2c4 NEW_2
	var_2_object = var_473_string; // 0x2c6 TMov
	return 0; // 0x2c7 Return
	
Label_707:
	var_478_bool = 1; // 0x2c3 MovB
}


func_1459(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x5b3 PushV
	var_0_object = var_55_object; // 0x5b4 TMov
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0; // 0x5b5 PushV
	var_66_object = var_55_object; // 0x5b6 Mov
	var_67_float = 70.0; // 0x5b7 MovF
	func_3136(var_66_object, var_67_float); // 0x5b8 NEW_2
	var_112_bool = var_65_bool == 0; // 0x5ba Not
	if(var_112_bool == 0) goto Label_1470; // 0x5bb JumpB
	var_54_int = -2; // 0x5bc MovI
	return 8; // 0x5bd Return
	
Label_1470:
	CreateDialog(var_61_object); // 0x5be Func
	var_113_int = 0; // 0x5c0 PushV
	func_3615(var_113_int); // 0x5c1 NEW_2
	SetNPCName(var_113_int); // 0x5c3 ObjFunc
	var_114_int = 0; // 0x5c5 PushV
	func_3613(var_114_int); // 0x5c6 NEW_2
	SetNPCDescription(var_114_int); // 0x5c8 ObjFunc
	var_115_string = ""; // 0x5ca PushV
	func_3617(var_115_string); // 0x5cb NEW_2
	SetPhoto(var_115_string); // 0x5cd ObjFunc
	var_116_string = ""; // 0x5cf PushV
	func_3619(var_116_string); // 0x5d0 NEW_2
	SetPhoto2(var_116_string); // 0x5d2 ObjFunc
	var_117_int = 0; // 0x5d4 PushV
	func_4143(var_117_int); // 0x5d5 NEW_2
	SetPlayerName(var_117_int); // 0x5d7 ObjFunc
	var_63_int = -1; // 0x5d9 MovI
	IsOverrideActive(var_62_bool); // 0x5da Func
	var_125_bool = var_62_bool; // 0x5dc Push
	if(var_125_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_54_int = -2; // 0x5de MovI
	return 8; // 0x5df Return
	
Label_1504:
	DoDialog(var_61_object); // 0x5e0 Func
	var_126_bool = 0; var_127_object = Obj(); // 0x5e2 PushV
	var_128_object = Obj(); // 0x5e3 PushV
	func_3414(var_128_object); // 0x5e4 NEW_2
	var_127_object = var_128_object; // 0x5e5 Mov
	func_3223(var_126_bool, var_127_object); // 0x5e7 NEW_2
	var_221_object = Obj(); var_222_object = Obj(); // 0x5e9 PushV
	var_221_object = var_55_object; // 0x5ea Mov
	var_222_object = var_61_object; // 0x5eb Mov
	TaskCall(5); // 0x5ec TaskCall
	func_1540(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object); // 0x5ed NEW_2
	TaskReturn(); // 0x5ee TaskReturn
	IsDialogEnd(var_64_bool); // 0x5f0 ObjFunc
	
Label_1522:
	var_270_bool = var_64_bool == 0; // 0x5f2 Not
	if(var_270_bool == 0) goto Label_1529; // 0x5f3 JumpB
	sync(); // 0x5f4 Func
	IsDialogEnd(var_64_bool); // 0x5f6 ObjFunc
	goto Label_1522; // 0x5f8 Jump
	
Label_1529:
	var_271_object = Obj(); // 0x5f9 PushV
	var_271_object = var_55_object; // 0x5fa Mov
	func_3205(); // 0x5fb NEW_2
	StopDialog(var_61_object); // 0x5fd Func
	GetReturnValue(var_63_int); // 0x5ff ObjFunc
	var_54_int = var_63_int; // 0x601 Mov
	return 8; // 0x602 Return
}


func_3509(var_163_bool, var_164_object, var_165_float)
{
	var_166_bool = var_164_object == 0; // 0xdb6 Not
	if(var_166_bool == 0) goto Label_3514; // 0xdb7 JumpB
	var_163_bool = 0; // 0xdb8 MovB
	return 0; // 0xdb9 Return
	
Label_3514:
	var_167_int = 0; // 0xdba PushI
	var_168_bool = var_165_float > var_167_int; // 0xdbb GT
	if(var_168_bool == 0) goto Label_3521; // 0xdbc JumpB
	var_169_int = 8; // 0xdbd PushI
	SendWorldWndMessage(var_169_int); // 0xdbe Func
	goto Label_3530; // 0xdc0 Jump
	
Label_3530:
	var_170_float = 0; // 0xdca PushV
	var_170_float = var_165_float; // 0xdcb Mov
	func_3544(var_170_float); // 0xdcc NEW_2
	var_174_bool = 0; var_175_object = Obj(); var_176_string = ""; var_177_float = 0; var_178_float = 0; var_179_float = 0; // 0xdce PushV
	var_175_object = var_164_object; // 0xdcf Mov
	var_176_string = "reputation"; // 0xdd0 MovS
	var_177_float = var_165_float; // 0xdd1 Mov
	var_178_float = 0; // 0xdd2 MovI
	var_179_float = 1; // 0xdd3 MovI
	func_3083(var_174_bool, var_175_object, var_176_string, var_177_float, var_178_float, var_179_float); // 0xdd4 NEW_2
	var_163_bool = 1; // 0xdd6 MovB
	return 0; // 0xdd7 Return
	
Label_3521:
	var_198_int = 0; // 0xdc1 PushI
	var_199_bool = var_165_float < var_198_int; // 0xdc2 LT
	if(var_199_bool == 0) goto Label_3528; // 0xdc3 JumpB
	var_200_int = 9; // 0xdc4 PushI
	SendWorldWndMessage(var_200_int); // 0xdc5 Func
	goto Label_3530; // 0xdc7 Jump
	
Label_3528:
	var_163_bool = 0; // 0xdc8 MovB
	return 0; // 0xdc9 Return
}


func_3766(var_201_object)
{
	var_203_string = "delta_pills is given"; // 0xeb7 PushS
	Trace(var_203_string); // 0xeb8 Func
	var_204_object = Obj(); var_205_string = ""; var_206_int = 0; // 0xeba PushV
	var_204_object = var_201_object; // 0xebb Mov
	var_205_string = "delta_pills"; // 0xebc MovS
	var_206_int = 1; // 0xebd MovI
	func_3496(var_204_object, var_205_string, var_206_int); // 0xebe NEW_2
	return 0; // 0xec0 Return
}


func_2743(var_2_object, var_721_string)
{
	var_722_bool = 0; // 0xab8 PushV
	func_3621(var_722_bool); // 0xab9 NEW_2
	var_723_bool = var_722_bool == 0; // 0xabb Not
	if(var_723_bool == 0) goto Label_2750; // 0xabc JumpB
	return 0; // 0xabd Return
	
Label_2750:
	var_724_bool = var_721_string == var_2_object; // 0xabe Eq
	if(var_724_bool == 0) goto Label_2753; // 0xabf JumpB
	return 0; // 0xac0 Return
	
Label_2753:
	var_725_string = ""; var_726_bool = 0; // 0xac1 PushV
	var_725_string = var_721_string; // 0xac2 Mov
	var_727_string = ""; // 0xac3 PushS
	var_728_bool = var_721_string == var_727_string; // 0xac4 Eq
	if(var_728_bool == 0) goto Label_2760; // 0xac5 JumpB
	var_726_bool = 0; // 0xac6 MovB
	goto Label_2761; // 0xac7 Jump
	
Label_2761:
	func_3377(var_725_string, var_726_bool); // 0xac9 NEW_2
	var_2_object = var_721_string; // 0xacb TMov
	return 0; // 0xacc Return
	
Label_2760:
	var_726_bool = 1; // 0xac8 MovB
}


func_4024()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0xfb8 PushV
	var_81_int = 452; // 0xfb9 PushI
	var_82_int = 1; // 0xfba PushI
	var_83_int = 527010; // 0xfbb PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0xfbc Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0xfbe PushV
	var_85_object = var_80_object; // 0xfbf Mov
	var_86_int = 447; // 0xfc0 MovI
	func_4115(var_84_bool, var_85_object, var_86_int); // 0xfc1 NEW_2
	return 2; // 0xfc3 Return
}


func_1721(var_0_object, var_364_int, var_365_object)
{
	var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0; var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0; // 0x6b9 PushV
	var_0_object = var_365_object; // 0x6ba TMov
	var_375_bool = 0; var_376_object = Obj(); var_377_float = 0; // 0x6bb PushV
	var_376_object = var_365_object; // 0x6bc Mov
	var_377_float = 70.0; // 0x6bd MovF
	func_3136(var_376_object, var_377_float); // 0x6be NEW_2
	var_378_bool = var_375_bool == 0; // 0x6c0 Not
	if(var_378_bool == 0) goto Label_1732; // 0x6c1 JumpB
	var_364_int = -2; // 0x6c2 MovI
	return 8; // 0x6c3 Return
	
Label_1732:
	CreateDialog(var_371_object); // 0x6c4 Func
	var_379_int = 0; // 0x6c6 PushV
	func_3615(var_379_int); // 0x6c7 NEW_2
	SetNPCName(var_379_int); // 0x6c9 ObjFunc
	var_380_int = 0; // 0x6cb PushV
	func_3613(var_380_int); // 0x6cc NEW_2
	SetNPCDescription(var_380_int); // 0x6ce ObjFunc
	var_381_string = ""; // 0x6d0 PushV
	func_3617(var_381_string); // 0x6d1 NEW_2
	SetPhoto(var_381_string); // 0x6d3 ObjFunc
	var_382_string = ""; // 0x6d5 PushV
	func_3619(var_382_string); // 0x6d6 NEW_2
	SetPhoto2(var_382_string); // 0x6d8 ObjFunc
	var_383_int = 0; // 0x6da PushV
	func_4143(var_383_int); // 0x6db NEW_2
	SetPlayerName(var_383_int); // 0x6dd ObjFunc
	var_373_int = -1; // 0x6df MovI
	IsOverrideActive(var_372_bool); // 0x6e0 Func
	var_384_bool = var_372_bool; // 0x6e2 Push
	if(var_384_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_364_int = -2; // 0x6e4 MovI
	return 8; // 0x6e5 Return
	
Label_1766:
	DoDialog(var_371_object); // 0x6e6 Func
	var_385_bool = 0; var_386_object = Obj(); // 0x6e8 PushV
	var_387_object = Obj(); // 0x6e9 PushV
	func_3414(var_387_object); // 0x6ea NEW_2
	var_386_object = var_387_object; // 0x6eb Mov
	func_3223(var_385_bool, var_386_object); // 0x6ed NEW_2
	var_388_object = Obj(); var_389_object = Obj(); // 0x6ef PushV
	var_388_object = var_365_object; // 0x6f0 Mov
	var_389_object = var_371_object; // 0x6f1 Mov
	TaskCall(7); // 0x6f2 TaskCall
	func_1802(var_390_object, var_391_object, var_392_string, var_393_bool, var_388_object, var_389_object); // 0x6f3 NEW_2
	TaskReturn(); // 0x6f4 TaskReturn
	IsDialogEnd(var_374_bool); // 0x6f6 ObjFunc
	
Label_1784:
	var_438_bool = var_374_bool == 0; // 0x6f8 Not
	if(var_438_bool == 0) goto Label_1791; // 0x6f9 JumpB
	sync(); // 0x6fa Func
	IsDialogEnd(var_374_bool); // 0x6fc ObjFunc
	goto Label_1784; // 0x6fe Jump
	
Label_1791:
	var_439_object = Obj(); // 0x6ff PushV
	var_439_object = var_365_object; // 0x700 Mov
	func_3205(); // 0x701 NEW_2
	StopDialog(var_371_object); // 0x703 Func
	GetReturnValue(var_373_int); // 0x705 ObjFunc
	var_364_int = var_373_int; // 0x707 Mov
	return 8; // 0x708 Return
}


func_3777(var_639_bool, var_640_object)
{
	var_641_bool = 0; var_642_object = Obj(); // 0xec2 PushV
	var_642_object = var_640_object; // 0xec3 Mov
	func_3969(var_642_object); // 0xec4 NEW_2
	if(var_641_bool == 0) goto Label_3785; // 0xec6 JumpB
	var_639_bool = 1; // 0xec7 MovB
	return 0; // 0xec8 Return
	
Label_3785:
	var_639_bool = 0; // 0xec9 MovB
	return 0; // 0xeca Return
}


func_4037()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xfc5 PushV
	var_43_int = 483; // 0xfc6 PushI
	var_44_int = 1; // 0xfc7 PushI
	var_45_int = 528050; // 0xfc8 PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xfc9 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xfcb PushV
	var_47_object = var_42_object; // 0xfcc Mov
	var_48_int = 480; // 0xfcd MovI
	func_4115(var_46_bool, var_47_object, var_48_int); // 0xfce NEW_2
	return 2; // 0xfd0 Return
}


func_3787(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0xecc PushV
	var_318_string = "k10q01"; // 0xecd MovS
	func_3441(var_317_int, var_318_string); // 0xece NEW_2
	var_321_int = 2; // 0xed0 PushI
	var_322_bool = var_317_int == var_321_int; // 0xed1 Eq
	if(var_322_bool == 0) goto Label_3797; // 0xed2 JumpB
	var_315_bool = 1; // 0xed3 MovB
	return 0; // 0xed4 Return
	
Label_3797:
	var_315_bool = 0; // 0xed5 MovB
	return 0; // 0xed6 Return
}


func_3281(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0xcd1 PushV
	var_144_string = "c"; // 0xcd2 MovS
	var_145_int = 0; // 0xcd3 MovI
	
Label_3284:
	var_149_int = 1; // 0xcd4 PushI
	if(var_149_int == 0) goto Label_3297; // 0xcd5 JumpB
	var_150_int = 1; // 0xcd6 PushI
	var_151_int = var_145_int + var_150_int; // 0xcd7 Add
	var_152_int = var_144_string + var_151_int; // 0xcd8 Add
	HasProperty(var_152_int, var_146_bool); // 0xcd9 ObjFunc
	var_153_bool = var_146_bool == 0; // 0xcdb Not
	if(var_153_bool == 0) goto Label_3294; // 0xcdc JumpB
	goto Label_3297; // 0xcdd Jump
	
Label_3297:
	var_154_bool = var_145_int == 0; // 0xce1 Not
	if(var_154_bool == 0) goto Label_3301; // 0xce2 JumpB
	var_137_bool = 0; // 0xce3 MovB
	return 10; // 0xce4 Return
	
Label_3301:
	var_147_int = 0; // 0xce5 MovI
	var_155_int = 1; // 0xce6 PushI
	var_156_bool = var_145_int > var_155_int; // 0xce7 GT
	if(var_156_bool == 0) goto Label_3307; // 0xce8 JumpB
	irand(var_147_int, var_145_int); // 0xce9 Func
	
Label_3307:
	var_157_int = 1; // 0xceb PushI
	var_158_int = var_147_int + var_157_int; // 0xcec Add
	var_159_int = var_144_string + var_158_int; // 0xced Add
	GetProperty(var_159_int, var_148_string); // 0xcee ObjFunc
	var_160_bool = 0; var_161_string = ""; // 0xcf0 PushV
	var_161_string = var_148_string; // 0xcf1 Mov
	func_3392(var_160_bool, var_161_string); // 0xcf2 NEW_2
	var_137_bool = var_160_bool; // 0xcf3 Mov
	return 10; // 0xcf5 Return
	
Label_3294:
	var_166_int = 1; // 0xcde PushI
	var_145_int = var_145_int + var_166_int; // 0xcdf Add2
	goto Label_3284; // 0xce0 Jump
}


func_4050()
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xfd2 PushV
	var_87_int = 492; // 0xfd3 PushI
	var_88_int = 1; // 0xfd4 PushI
	var_89_int = 528059; // 0xfd5 PushI
	CreateDiaryEntry(var_86_object, var_87_int, var_88_int, var_89_int); // 0xfd6 Func
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0; // 0xfd8 PushV
	var_91_object = var_86_object; // 0xfd9 Mov
	var_92_int = 480; // 0xfda MovI
	func_4115(var_90_bool, var_91_object, var_92_int); // 0xfdb NEW_2
	return 2; // 0xfdd Return
}


func_3799(var_345_bool)
{
	var_347_int = 0; var_348_string = ""; // 0xed8 PushV
	var_348_string = "k10q01"; // 0xed9 MovS
	func_3441(var_347_int, var_348_string); // 0xeda NEW_2
	var_349_int = 4; // 0xedc PushI
	var_350_bool = var_347_int == var_349_int; // 0xedd Eq
	if(var_350_bool == 0) goto Label_3809; // 0xede JumpB
	var_345_bool = 1; // 0xedf MovB
	return 0; // 0xee0 Return
	
Label_3809:
	var_345_bool = 0; // 0xee1 MovB
	return 0; // 0xee2 Return
}


func_3544(var_170_float)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0xdd8 PushV
	CreateFloatVector(var_172_object); // 0xdd9 Func
	add(var_170_float); // 0xddb ObjFunc
	var_173_int = 16; // 0xddd PushI
	SendWorldWndMessage(var_173_int, var_172_object); // 0xdde Func
	return 2; // 0xde0 Return
}


func_4063()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0xfdf PushV
	var_103_int = 499; // 0xfe0 PushI
	var_104_int = 1; // 0xfe1 PushI
	var_105_int = 528066; // 0xfe2 PushI
	CreateDiaryEntry(var_102_object, var_103_int, var_104_int, var_105_int); // 0xfe3 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0xfe5 PushV
	var_107_object = var_102_object; // 0xfe6 Mov
	var_108_int = 480; // 0xfe7 MovI
	func_4115(var_106_bool, var_107_object, var_108_int); // 0xfe8 NEW_2
	return 2; // 0xfea Return
}


func_3554(var_62_bool, var_63_string, var_64_string)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xde2 PushV
	FindActor(var_66_object, var_63_string); // 0xde3 Func
	var_67_bool = var_66_object == 0; // 0xde5 NullEq
	if(var_67_bool == 0) goto Label_3561; // 0xde6 JumpB
	var_62_bool = 0; // 0xde7 MovB
	return 2; // 0xde8 Return
	
Label_3561:
	Trigger(var_66_object, var_64_string); // 0xde9 Func
	var_62_bool = 1; // 0xdeb MovB
	return 2; // 0xdec Return
}


func_3811(var_482_bool)
{
	var_484_int = 0; var_485_string = ""; // 0xee4 PushV
	var_485_string = "k11q01"; // 0xee5 MovS
	func_3441(var_484_int, var_485_string); // 0xee6 NEW_2
	var_486_int = 1; // 0xee8 PushI
	var_487_bool = var_484_int == var_486_int; // 0xee9 Eq
	if(var_487_bool == 0) goto Label_3821; // 0xeea JumpB
	var_482_bool = 1; // 0xeeb MovB
	return 0; // 0xeec Return
	
Label_3821:
	var_482_bool = 0; // 0xeed MovB
	return 0; // 0xeee Return
}


func_4076()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xfec PushV
	var_130_int = 762; // 0xfed PushI
	var_131_int = 2; // 0xfee PushI
	var_132_int = 539747; // 0xfef PushI
	CreateDiaryEntry(var_129_object, var_130_int, var_131_int, var_132_int); // 0xff0 Func
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0; // 0xff2 PushV
	var_134_object = var_129_object; // 0xff3 Mov
	var_135_int = 757; // 0xff4 MovI
	func_4115(var_133_bool, var_134_object, var_135_int); // 0xff5 NEW_2
	return 2; // 0xff7 Return
}


func_3566(var_181_int)
{
	var_182_float = 0; var_183_float = 0; // 0xdee PushV
	GetGameTime(var_183_float); // 0xdef Func
	var_184_int = 1; // 0xdf1 PushI
	var_185_int = 0; // 0xdf2 PushV
	var_186_int = 24; // 0xdf3 PushI
	var_185_int = var_183_float / var_183_float; // 0xdf4 Div2
	var_181_int = var_184_int + var_185_int; // 0xdf5 Add2
	return 2; // 0xdf6 Return
}


func_3823(var_491_bool)
{
	var_493_int = 0; var_494_string = ""; // 0xef0 PushV
	var_494_string = "k11q01"; // 0xef1 MovS
	func_3441(var_493_int, var_494_string); // 0xef2 NEW_2
	var_495_int = 8; // 0xef4 PushI
	var_496_bool = var_493_int == var_495_int; // 0xef5 Eq
	if(var_496_bool == 0) goto Label_3833; // 0xef6 JumpB
	var_491_bool = 1; // 0xef7 MovB
	return 0; // 0xef8 Return
	
Label_3833:
	var_491_bool = 0; // 0xef9 MovB
	return 0; // 0xefa Return
}


func_3056(var_69_bool)
{
	var_69_bool = 1; // 0xbf0 MovB
	return 0; // 0xbf1 Return
}


func_3058()
{
	StopAnimation(); // 0xbf2 Func
	StopGroup0(); // 0xbf4 Func
	return 0; // 0xbf6 Return
}


func_3318(var_168_bool)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; // 0xcf6 PushV
	var_180_string = "d"; // 0xcf7 PushS
	var_181_int = 0; // 0xcf8 PushV
	func_3566(var_181_int); // 0xcf9 NEW_2
	var_187_int = var_180_string + var_181_int; // 0xcfb Add
	var_188_string = "m"; // 0xcfc PushS
	var_175_string = var_187_int + var_188_string; // 0xcfd Add2
	var_176_int = 0; // 0xcfe MovI
	
Label_3327:
	var_189_int = 1; // 0xcff PushI
	if(var_189_int == 0) goto Label_3340; // 0xd00 JumpB
	var_190_int = 1; // 0xd01 PushI
	var_191_int = var_176_int + var_190_int; // 0xd02 Add
	var_192_int = var_175_string + var_191_int; // 0xd03 Add
	HasProperty(var_192_int, var_177_bool); // 0xd04 ObjFunc
	var_193_bool = var_177_bool == 0; // 0xd06 Not
	if(var_193_bool == 0) goto Label_3337; // 0xd07 JumpB
	goto Label_3340; // 0xd08 Jump
	
Label_3340:
	var_194_bool = var_176_int == 0; // 0xd0c Not
	if(var_194_bool == 0) goto Label_3344; // 0xd0d JumpB
	var_168_bool = 0; // 0xd0e MovB
	return 10; // 0xd0f Return
	
Label_3344:
	var_178_int = 0; // 0xd10 MovI
	var_195_int = 1; // 0xd11 PushI
	var_196_bool = var_176_int > var_195_int; // 0xd12 GT
	if(var_196_bool == 0) goto Label_3350; // 0xd13 JumpB
	irand(var_178_int, var_176_int); // 0xd14 Func
	
Label_3350:
	var_197_int = 1; // 0xd16 PushI
	var_198_int = var_178_int + var_197_int; // 0xd17 Add
	var_199_int = var_175_string + var_198_int; // 0xd18 Add
	GetProperty(var_199_int, var_179_string); // 0xd19 ObjFunc
	var_200_bool = 0; var_201_string = ""; // 0xd1b PushV
	var_201_string = var_179_string; // 0xd1c Mov
	func_3392(var_200_bool, var_201_string); // 0xd1d NEW_2
	var_168_bool = var_200_bool; // 0xd1e Mov
	return 10; // 0xd20 Return
	
Label_3337:
	var_202_int = 1; // 0xd09 PushI
	var_176_int = var_176_int + var_202_int; // 0xd0a Add2
	goto Label_3327; // 0xd0b Jump
}


func_3063(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0xbf7 PushV
	GetPosition(var_51_cvector); // 0xbf8 Func
	GetPosition(var_52_cvector); // 0xbfa ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0xbfc Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0xbfd Or2
	return 6; // 0xbfe Return
}


func_2297(var_0_object, var_1_object, var_2_object, var_3_string, var_632_object, var_633_object)
{
	var_0_object = var_633_object; // 0x8fa TMov
	var_1_object = var_632_object; // 0x8fb TMov
	var_3_string = 0; // 0x8fc TMovB
	var_638_int = 1; // 0x8fd PushI
	if(var_638_int == 0) goto Label_2356; // 0x8fe JumpB
	var_639_bool = 0; var_640_object = Obj(); // 0x8ff PushV
	var_640_object = var_1_object; // 0x900 MovT
	func_3777(var_639_bool, var_640_object); // 0x901 NEW_2
	var_650_bool = var_639_bool == 0; // 0x903 Not
	if(var_650_bool == 0) goto Label_2334; // 0x904 JumpB
	var_651_string = ""; // 0x905 PushV
	var_651_string = "Neutral"; // 0x906 MovS
	func_2386(var_633_object, var_651_string); // 0x907 NEW_2
	var_659_int = 539248; // 0x909 PushI
	SetMessage(var_659_int); // 0x90a TObjFunc
	ClearReplies(); // 0x90c TObjFunc
	var_660_bool = 0; var_661_object = Obj(); // 0x90e PushV
	var_661_object = var_1_object; // 0x90f MovT
	func_3957(var_661_object); // 0x910 NEW_2
	if(var_660_bool == 0) goto Label_2328; // 0x912 JumpB
	var_666_int = 542928; // 0x913 PushI
	var_667_int = 45365; // 0x914 PushI
	var_668_int = 45364; // 0x915 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x916 TObjFunc
	
Label_2328:
	var_669_int = 539249; // 0x918 PushI
	var_670_int = -1; // 0x919 PushI
	var_671_int = 41192; // 0x91a PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x91b TObjFunc
	goto Label_2356; // 0x91d Jump
	
Label_2356:
	var_672_bool = 0; // 0x934 PushV
	func_3621(var_672_bool); // 0x935 NEW_2
	if(var_672_bool == 0) goto Label_2371; // 0x937 JumpB
	
Label_2360:
	lshWaitForAnimEnd(); // 0x938 Func
	var_673_string = var_3_string; // 0x93a PushT
	if(var_673_string == 0) goto Label_2365; // 0x93b JumpB
	goto Label_2370; // 0x93c Jump
	
Label_2370:
	goto Label_2385; // 0x942 Jump
	
Label_2385:
	return 0; // 0x951 Return
	
Label_2365:
	var_674_string = ""; // 0x93d PushV
	var_674_string = var_2_object; // 0x93e MovT
	func_3361(var_674_string); // 0x93f NEW_2
	goto Label_2360; // 0x941 Jump
	
Label_2371:
	var_675_string = "all"; // 0x943 PushS
	var_676_string = "idle"; // 0x944 PushS
	PlayAnimation(var_675_string, var_676_string); // 0x945 Func
	
Label_2375:
	WaitForAnimEnd(); // 0x947 Func
	var_677_string = var_3_string; // 0x949 PushT
	if(var_677_string == 0) goto Label_2380; // 0x94a JumpB
	goto Label_2385; // 0x94b Jump
	
Label_2380:
	var_678_string = "all"; // 0x94c PushS
	var_679_string = "idle"; // 0x94d PushS
	PlayAnimation(var_678_string, var_679_string); // 0x94e Func
	goto Label_2375; // 0x950 Jump
	
Label_2334:
	var_680_string = ""; // 0x91e PushV
	var_680_string = "Neutral"; // 0x91f MovS
	func_2386(var_633_object, var_680_string); // 0x920 NEW_2
	var_681_int = 539250; // 0x922 PushI
	SetMessage(var_681_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_682_int = 539251; // 0x927 PushI
	var_683_int = -1; // 0x928 PushI
	var_684_int = 41194; // 0x929 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x92a TObjFunc
	var_685_int = 541515; // 0x92c PushI
	var_686_int = -1; // 0x92d PushI
	var_687_int = 43678; // 0x92e PushI
	AddReply(var_685_int, var_686_int, var_687_int); // 0x92f TObjFunc
	goto Label_2356; // 0x931 Jump
}


func_3835(var_509_bool)
{
	var_511_int = 0; var_512_string = ""; // 0xefc PushV
	var_512_string = "k11q01"; // 0xefd MovS
	func_3441(var_511_int, var_512_string); // 0xefe NEW_2
	var_513_int = 9; // 0xf00 PushI
	var_514_bool = var_511_int == var_513_int; // 0xf01 Eq
	if(var_514_bool == 0) goto Label_3845; // 0xf02 JumpB
	var_509_bool = 1; // 0xf03 MovB
	return 0; // 0xf04 Return
	
Label_3845:
	var_509_bool = 0; // 0xf05 MovB
	return 0; // 0xf06 Return
}


func_3071(var_182_bool, var_183_object, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0; // 0xbff PushV
	var_187_string = "HasProperty"; // 0xc00 PushS
	var_188_int = 2; // 0xc01 PushI
	var_189_bool = IsFuncExist(var_183_object, var_187_string, var_188_int); // 0xc02 FuncExist
	var_190_bool = var_189_bool == 0; // 0xc03 Not
	if(var_190_bool == 0) goto Label_3079; // 0xc04 JumpB
	var_182_bool = 0; // 0xc05 MovB
	return 2; // 0xc06 Return
	
Label_3079:
	HasProperty(var_184_string, var_186_bool); // 0xc07 ObjFunc
	var_182_bool = var_186_bool; // 0xc09 Mov
	return 2; // 0xc0a Return
}


