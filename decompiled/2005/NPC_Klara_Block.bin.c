task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xc0 PushI
	if(var_33_int == 0) goto Label_432; // 0xc1 JumpB
	func_3405(); // 0xc3 NEW_2
	var_35_int = 28260; // 0xc5 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0xc6 Eq
	if(var_36_bool == 0) goto Label_205; // 0xc7 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0xc8 PushV
	var_37_object = var_1_object; // 0xc9 MovT
	var_38_object = var_0_object; // 0xca MovT
	func_3628(); // 0xcb NEW_2
	
Label_205:
	var_73_int = 28272; // 0xcd PushI
	var_74_bool = var_32_cvector == var_73_int; // 0xce Eq
	if(var_74_bool == 0) goto Label_213; // 0xcf JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xd0 PushV
	var_75_object = var_1_object; // 0xd1 MovT
	var_76_object = var_0_object; // 0xd2 MovT
	func_3647(); // 0xd3 NEW_2
	
Label_213:
	var_90_int = 28257; // 0xd5 PushI
	var_91_bool = var_31_bool == var_90_int; // 0xd6 Eq
	if(var_91_bool == 0) goto Label_266; // 0xd7 JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0xd8 PushV
	var_93_object = var_1_object; // 0xd9 MovT
	func_3785(var_93_object); // 0xda NEW_2
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
	func_3797(var_124_object); // 0xf7 NEW_2
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
	func_3619(var_200_bool); // 0x1a6 NEW_2
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
	func_3405(); // 0x2cc NEW_2
	var_35_int = 28503; // 0x2ce PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x2cf Eq
	if(var_36_bool == 0) goto Label_726; // 0x2d0 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x2d1 PushV
	var_37_object = var_1_object; // 0x2d2 MovT
	var_38_object = var_0_object; // 0x2d3 MovT
	func_3661(); // 0x2d4 NEW_2
	
Label_726:
	var_73_int = 28614; // 0x2d6 PushI
	var_74_bool = var_32_cvector == var_73_int; // 0x2d7 Eq
	if(var_74_bool == 0) goto Label_734; // 0x2d8 JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0x2d9 PushV
	var_75_object = var_1_object; // 0x2da MovT
	var_76_object = var_0_object; // 0x2db MovT
	func_3661(); // 0x2dc NEW_2
	
Label_734:
	var_77_int = 28691; // 0x2de PushI
	var_78_bool = var_32_cvector == var_77_int; // 0x2df Eq
	if(var_78_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x2e1 PushV
	var_79_object = var_1_object; // 0x2e2 MovT
	var_80_object = var_0_object; // 0x2e3 MovT
	func_3680(); // 0x2e4 NEW_2
	
Label_742:
	var_93_int = 28692; // 0x2e6 PushI
	var_94_bool = var_32_cvector == var_93_int; // 0x2e7 Eq
	if(var_94_bool == 0) goto Label_750; // 0x2e8 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x2e9 PushV
	var_95_object = var_1_object; // 0x2ea MovT
	var_96_object = var_0_object; // 0x2eb MovT
	func_3680(); // 0x2ec NEW_2
	
Label_750:
	var_97_int = 28639; // 0x2ee PushI
	var_98_bool = var_32_cvector == var_97_int; // 0x2ef Eq
	if(var_98_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x2f1 PushV
	var_99_object = var_1_object; // 0x2f2 MovT
	var_100_object = var_0_object; // 0x2f3 MovT
	func_3693(); // 0x2f4 NEW_2
	
Label_758:
	var_112_int = 41813; // 0x2f6 PushI
	var_113_bool = var_32_cvector == var_112_int; // 0x2f7 Eq
	if(var_113_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x2f9 PushV
	var_114_object = var_1_object; // 0x2fa MovT
	var_115_object = var_0_object; // 0x2fb MovT
	func_3724(); // 0x2fc NEW_2
	
Label_766:
	var_118_int = 41816; // 0x2fe PushI
	var_119_bool = var_32_cvector == var_118_int; // 0x2ff Eq
	if(var_119_bool == 0) goto Label_774; // 0x300 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x301 PushV
	var_120_object = var_1_object; // 0x302 MovT
	var_121_object = var_0_object; // 0x303 MovT
	func_3730(); // 0x304 NEW_2
	
Label_774:
	var_124_int = 41818; // 0x306 PushI
	var_125_bool = var_32_cvector == var_124_int; // 0x307 Eq
	if(var_125_bool == 0) goto Label_802; // 0x308 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x309 PushV
	var_126_object = var_1_object; // 0x30a MovT
	var_127_object = var_0_object; // 0x30b MovT
	func_3719(); // 0x30c NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x30e PushV
	var_136_object = var_1_object; // 0x30f MovT
	var_137_object = var_0_object; // 0x310 MovT
	func_3754(var_137_object); // 0x311 NEW_2
	var_157_object = Obj(); var_158_object = Obj(); // 0x313 PushV
	var_157_object = var_1_object; // 0x314 MovT
	var_158_object = var_0_object; // 0x315 MovT
	func_3713(); // 0x316 NEW_2
	var_161_object = Obj(); var_162_object = Obj(); // 0x318 PushV
	var_161_object = var_1_object; // 0x319 MovT
	var_162_object = var_0_object; // 0x31a MovT
	func_3621(var_162_object); // 0x31b NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x31d PushV
	var_201_object = var_1_object; // 0x31e MovT
	var_202_object = var_0_object; // 0x31f MovT
	func_3764(var_202_object); // 0x320 NEW_2
	
Label_802:
	var_222_int = 41819; // 0x322 PushI
	var_223_bool = var_32_cvector == var_222_int; // 0x323 Eq
	if(var_223_bool == 0) goto Label_810; // 0x324 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x325 PushV
	var_224_object = var_1_object; // 0x326 MovT
	var_225_object = var_0_object; // 0x327 MovT
	func_3736(); // 0x328 NEW_2
	
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
	func_3809(var_249_object); // 0x338 NEW_2
	if(var_248_bool == 0) goto Label_832; // 0x33a JumpB
	var_256_int = 527191; // 0x33b PushI
	var_257_int = 28604; // 0x33c PushI
	var_258_int = 28499; // 0x33d PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x33e TObjFunc
	
Label_832:
	var_259_bool = 0; var_260_object = Obj(); // 0x340 PushV
	var_260_object = var_1_object; // 0x341 MovT
	func_3821(var_260_object); // 0x342 NEW_2
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
	func_3845(var_269_bool, var_270_object); // 0x34e NEW_2
	if(var_269_bool == 0) goto Label_855; // 0x350 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x351 PushV
	var_278_object = var_1_object; // 0x352 MovT
	func_3833(var_278_object); // 0x353 NEW_2
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
	func_3867(var_288_bool, var_289_object); // 0x363 NEW_2
	if(var_288_bool == 0) goto Label_876; // 0x365 JumpB
	var_303_bool = 0; var_304_object = Obj(); // 0x366 PushV
	var_304_object = var_1_object; // 0x367 MovT
	func_3877(var_303_bool, var_304_object); // 0x368 NEW_2
	if(var_303_bool == 0) goto Label_876; // 0x36a JumpB
	var_287_bool = 1; // 0x36b MovB
	
Label_876:
	if(var_287_bool == 0) goto Label_883; // 0x36c JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x36d PushV
	var_318_object = var_1_object; // 0x36e MovT
	func_3907(var_318_object); // 0x36f NEW_2
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
	func_3867(var_328_bool, var_329_object); // 0x37f NEW_2
	if(var_328_bool == 0) goto Label_904; // 0x381 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x382 PushV
	var_331_object = var_1_object; // 0x383 MovT
	func_3887(var_330_bool, var_331_object); // 0x384 NEW_2
	if(var_330_bool == 0) goto Label_904; // 0x386 JumpB
	var_327_bool = 1; // 0x387 MovB
	
Label_904:
	if(var_327_bool == 0) goto Label_911; // 0x388 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x389 PushV
	var_338_object = var_1_object; // 0x38a MovT
	func_3919(var_338_object); // 0x38b NEW_2
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
	func_3867(var_348_bool, var_349_object); // 0x39b NEW_2
	if(var_348_bool == 0) goto Label_932; // 0x39d JumpB
	var_350_bool = 0; var_351_object = Obj(); // 0x39e PushV
	var_351_object = var_1_object; // 0x39f MovT
	func_3897(var_350_bool, var_351_object); // 0x3a0 NEW_2
	if(var_350_bool == 0) goto Label_932; // 0x3a2 JumpB
	var_347_bool = 1; // 0x3a3 MovB
	
Label_932:
	if(var_347_bool == 0) goto Label_939; // 0x3a4 JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x3a5 PushV
	var_358_object = var_1_object; // 0x3a6 MovT
	func_3931(var_358_object); // 0x3a7 NEW_2
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
	func_3619(var_571_bool); // 0x5a8 NEW_2
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
	func_3405(); // 0x658 NEW_2
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
	func_3619(var_85_bool); // 0x6ae NEW_2
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
	func_3405(); // 0x77c NEW_2
	var_35_int = 31266; // 0x77e PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x77f Eq
	if(var_36_bool == 0) goto Label_1926; // 0x780 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x781 PushV
	var_37_object = var_1_object; // 0x782 MovT
	var_38_object = var_0_object; // 0x783 MovT
	func_3703(); // 0x784 NEW_2
	
Label_1926:
	var_68_int = 31267; // 0x786 PushI
	var_69_bool = var_32_cvector == var_68_int; // 0x787 Eq
	if(var_69_bool == 0) goto Label_1934; // 0x788 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x789 PushV
	var_70_object = var_1_object; // 0x78a MovT
	var_71_object = var_0_object; // 0x78b MovT
	func_3703(); // 0x78c NEW_2
	
Label_1934:
	var_72_int = 31212; // 0x78e PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x78f Eq
	if(var_73_bool == 0) goto Label_1942; // 0x790 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x791 PushV
	var_74_object = var_1_object; // 0x792 MovT
	var_75_object = var_0_object; // 0x793 MovT
	func_3742(); // 0x794 NEW_2
	
Label_1942:
	var_78_int = 31174; // 0x796 PushI
	var_79_bool = var_31_bool == var_78_int; // 0x797 Eq
	if(var_79_bool == 0) goto Label_1995; // 0x798 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0x799 PushV
	var_81_object = var_1_object; // 0x79a MovT
	func_3855(var_81_object); // 0x79b NEW_2
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
	func_3943(var_115_object); // 0x7bd NEW_2
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
	func_3619(var_209_bool); // 0x89d NEW_2
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
	func_3405(); // 0x96c NEW_2
	var_35_int = 45364; // 0x96e PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x96f Eq
	if(var_36_bool == 0) goto Label_2422; // 0x970 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x971 PushV
	var_37_object = var_1_object; // 0x972 MovT
	var_38_object = var_0_object; // 0x973 MovT
	func_3748(); // 0x974 NEW_2
	
Label_2422:
	var_41_int = 41191; // 0x976 PushI
	var_42_bool = var_31_bool == var_41_int; // 0x977 Eq
	if(var_42_bool == 0) goto Label_2476; // 0x978 JumpB
	var_43_bool = 0; var_44_object = Obj(); // 0x979 PushV
	var_44_object = var_1_object; // 0x97a MovT
	func_3775(var_43_bool, var_44_object); // 0x97b NEW_2
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
	func_3955(var_74_object); // 0x98a NEW_2
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
	func_3619(var_145_bool); // 0xa21 NEW_2
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
	func_3405(); // 0xad1 NEW_2
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
	func_3619(var_61_bool); // 0xaec NEW_2
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
	func_3412(var_77_object); // 0xb59 NEW_2
	var_76_object = var_77_object; // 0xb5a Mov
	func_3279(var_76_object); // 0xb5c NEW_2
	
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
	func_3359(var_32_string); // 0xb7c NEW_2
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
	func_3359(var_38_string); // 0xb8b NEW_2
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
	func_4201(var_49_object); // 0xb9e NEW_2
	var_744_string = ""; // 0xba0 PushV
	var_744_string = "Neutral"; // 0xba1 MovS
	func_3359(var_744_string); // 0xba2 NEW_2
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


func_0(var_0_object, var_282_int, var_283_object)
{
	var_285_object = Obj(); var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; // 0x0 PushV
	var_0_object = var_283_object; // 0x1 TMov
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; // 0x2 PushV
	var_294_object = var_283_object; // 0x3 Mov
	var_295_float = 70.0; // 0x4 MovF
	func_3136(var_294_object, var_295_float); // 0x5 NEW_2
	var_296_bool = var_293_bool == 0; // 0x7 Not
	if(var_296_bool == 0) goto Label_11; // 0x8 JumpB
	var_282_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_289_object); // 0xb Func
	var_297_int = 0; // 0xd PushV
	func_3613(var_297_int); // 0xe NEW_2
	SetNPCName(var_297_int); // 0x10 ObjFunc
	var_298_int = 0; // 0x12 PushV
	func_3611(var_298_int); // 0x13 NEW_2
	SetNPCDescription(var_298_int); // 0x15 ObjFunc
	var_299_string = ""; // 0x17 PushV
	func_3615(var_299_string); // 0x18 NEW_2
	SetPhoto(var_299_string); // 0x1a ObjFunc
	var_300_string = ""; // 0x1c PushV
	func_3617(var_300_string); // 0x1d NEW_2
	SetPhoto2(var_300_string); // 0x1f ObjFunc
	var_301_int = 0; // 0x21 PushV
	func_4141(var_301_int); // 0x22 NEW_2
	SetPlayerName(var_301_int); // 0x24 ObjFunc
	var_291_int = -1; // 0x26 MovI
	IsOverrideActive(var_290_bool); // 0x27 Func
	var_302_bool = var_290_bool; // 0x29 Push
	if(var_302_bool == 0) goto Label_45; // 0x2a JumpB
	var_282_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_289_object); // 0x2d Func
	var_303_bool = 0; var_304_object = Obj(); // 0x2f PushV
	var_305_object = Obj(); // 0x30 PushV
	func_3412(var_305_object); // 0x31 NEW_2
	var_304_object = var_305_object; // 0x32 Mov
	func_3221(var_303_bool, var_304_object); // 0x34 NEW_2
	var_306_object = Obj(); var_307_object = Obj(); // 0x36 PushV
	var_306_object = var_283_object; // 0x37 Mov
	var_307_object = var_289_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_292_bool); // 0x3d ObjFunc
	
Label_63:
	var_358_bool = var_292_bool == 0; // 0x3f Not
	if(var_358_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_292_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_359_object = Obj(); // 0x46 PushV
	var_359_object = var_283_object; // 0x47 Mov
	func_3204(); // 0x48 NEW_2
	StopDialog(var_289_object); // 0x4a Func
	GetReturnValue(var_291_int); // 0x4c ObjFunc
	var_282_int = var_291_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_514(var_0_object, var_1_object, var_2_object, var_3_string, var_464_object, var_465_object)
{
	var_0_object = var_465_object; // 0x203 TMov
	var_1_object = var_464_object; // 0x204 TMov
	var_3_string = 0; // 0x205 TMovB
	var_470_int = 1; // 0x206 PushI
	if(var_470_int == 0) goto Label_660; // 0x207 JumpB
	var_471_string = ""; // 0x208 PushV
	var_471_string = "Neutral"; // 0x209 MovS
	func_690(var_465_object, var_471_string); // 0x20a NEW_2
	var_479_int = 527190; // 0x20c PushI
	SetMessage(var_479_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_480_bool = 0; var_481_object = Obj(); // 0x211 PushV
	var_481_object = var_1_object; // 0x212 MovT
	func_3809(var_481_object); // 0x213 NEW_2
	if(var_480_bool == 0) goto Label_539; // 0x215 JumpB
	var_486_int = 527191; // 0x216 PushI
	var_487_int = 28604; // 0x217 PushI
	var_488_int = 28499; // 0x218 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x219 TObjFunc
	
Label_539:
	var_489_bool = 0; var_490_object = Obj(); // 0x21b PushV
	var_490_object = var_1_object; // 0x21c MovT
	func_3821(var_490_object); // 0x21d NEW_2
	if(var_489_bool == 0) goto Label_549; // 0x21f JumpB
	var_495_int = 527234; // 0x220 PushI
	var_496_int = 28615; // 0x221 PushI
	var_497_int = 28542; // 0x222 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x223 TObjFunc
	
Label_549:
	var_498_bool = 0; // 0x225 PushV
	var_498_bool = 0; // 0x226 MovB
	var_499_bool = 0; var_500_object = Obj(); // 0x227 PushV
	var_500_object = var_1_object; // 0x228 MovT
	func_3845(var_499_bool, var_500_object); // 0x229 NEW_2
	if(var_499_bool == 0) goto Label_562; // 0x22b JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x22c PushV
	var_508_object = var_1_object; // 0x22d MovT
	func_3833(var_508_object); // 0x22e NEW_2
	if(var_507_bool == 0) goto Label_562; // 0x230 JumpB
	var_498_bool = 1; // 0x231 MovB
	
Label_562:
	if(var_498_bool == 0) goto Label_568; // 0x232 JumpB
	var_513_int = 527310; // 0x233 PushI
	var_514_int = 28628; // 0x234 PushI
	var_515_int = 28627; // 0x235 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x236 TObjFunc
	
Label_568:
	var_516_bool = 0; // 0x238 PushV
	var_516_bool = 0; // 0x239 MovB
	var_517_bool = 0; // 0x23a PushV
	var_517_bool = 0; // 0x23b MovB
	var_518_bool = 0; var_519_object = Obj(); // 0x23c PushV
	var_519_object = var_1_object; // 0x23d MovT
	func_3867(var_518_bool, var_519_object); // 0x23e NEW_2
	if(var_518_bool == 0) goto Label_583; // 0x240 JumpB
	var_528_bool = 0; var_529_object = Obj(); // 0x241 PushV
	var_529_object = var_1_object; // 0x242 MovT
	func_3877(var_528_bool, var_529_object); // 0x243 NEW_2
	if(var_528_bool == 0) goto Label_583; // 0x245 JumpB
	var_517_bool = 1; // 0x246 MovB
	
Label_583:
	if(var_517_bool == 0) goto Label_590; // 0x247 JumpB
	var_542_bool = 0; var_543_object = Obj(); // 0x248 PushV
	var_543_object = var_1_object; // 0x249 MovT
	func_3907(var_543_object); // 0x24a NEW_2
	if(var_542_bool == 0) goto Label_590; // 0x24c JumpB
	var_516_bool = 1; // 0x24d MovB
	
Label_590:
	if(var_516_bool == 0) goto Label_596; // 0x24e JumpB
	var_548_int = 539861; // 0x24f PushI
	var_549_int = 41814; // 0x250 PushI
	var_550_int = 41813; // 0x251 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x252 TObjFunc
	
Label_596:
	var_551_bool = 0; // 0x254 PushV
	var_551_bool = 0; // 0x255 MovB
	var_552_bool = 0; // 0x256 PushV
	var_552_bool = 0; // 0x257 MovB
	var_553_bool = 0; var_554_object = Obj(); // 0x258 PushV
	var_554_object = var_1_object; // 0x259 MovT
	func_3867(var_553_bool, var_554_object); // 0x25a NEW_2
	if(var_553_bool == 0) goto Label_611; // 0x25c JumpB
	var_555_bool = 0; var_556_object = Obj(); // 0x25d PushV
	var_556_object = var_1_object; // 0x25e MovT
	func_3887(var_555_bool, var_556_object); // 0x25f NEW_2
	if(var_555_bool == 0) goto Label_611; // 0x261 JumpB
	var_552_bool = 1; // 0x262 MovB
	
Label_611:
	if(var_552_bool == 0) goto Label_618; // 0x263 JumpB
	var_562_bool = 0; var_563_object = Obj(); // 0x264 PushV
	var_563_object = var_1_object; // 0x265 MovT
	func_3919(var_563_object); // 0x266 NEW_2
	if(var_562_bool == 0) goto Label_618; // 0x268 JumpB
	var_551_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_551_bool == 0) goto Label_624; // 0x26a JumpB
	var_568_int = 539864; // 0x26b PushI
	var_569_int = 41817; // 0x26c PushI
	var_570_int = 41816; // 0x26d PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x26e TObjFunc
	
Label_624:
	var_571_bool = 0; // 0x270 PushV
	var_571_bool = 0; // 0x271 MovB
	var_572_bool = 0; // 0x272 PushV
	var_572_bool = 0; // 0x273 MovB
	var_573_bool = 0; var_574_object = Obj(); // 0x274 PushV
	var_574_object = var_1_object; // 0x275 MovT
	func_3867(var_573_bool, var_574_object); // 0x276 NEW_2
	if(var_573_bool == 0) goto Label_639; // 0x278 JumpB
	var_575_bool = 0; var_576_object = Obj(); // 0x279 PushV
	var_576_object = var_1_object; // 0x27a MovT
	func_3897(var_575_bool, var_576_object); // 0x27b NEW_2
	if(var_575_bool == 0) goto Label_639; // 0x27d JumpB
	var_572_bool = 1; // 0x27e MovB
	
Label_639:
	if(var_572_bool == 0) goto Label_646; // 0x27f JumpB
	var_582_bool = 0; var_583_object = Obj(); // 0x280 PushV
	var_583_object = var_1_object; // 0x281 MovT
	func_3931(var_583_object); // 0x282 NEW_2
	if(var_582_bool == 0) goto Label_646; // 0x284 JumpB
	var_571_bool = 1; // 0x285 MovB
	
Label_646:
	if(var_571_bool == 0) goto Label_652; // 0x286 JumpB
	var_588_int = 539867; // 0x287 PushI
	var_589_int = 41820; // 0x288 PushI
	var_590_int = 41819; // 0x289 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0x28a TObjFunc
	
Label_652:
	var_591_int = 527196; // 0x28c PushI
	var_592_int = -1; // 0x28d PushI
	var_593_int = 28504; // 0x28e PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x28f TObjFunc
	goto Label_660; // 0x291 Jump
	
Label_660:
	var_594_bool = 0; // 0x294 PushV
	func_3619(var_594_bool); // 0x295 NEW_2
	if(var_594_bool == 0) goto Label_675; // 0x297 JumpB
	
Label_664:
	lshWaitForAnimEnd(); // 0x298 Func
	var_595_string = var_3_string; // 0x29a PushT
	if(var_595_string == 0) goto Label_669; // 0x29b JumpB
	goto Label_674; // 0x29c Jump
	
Label_674:
	goto Label_689; // 0x2a2 Jump
	
Label_689:
	return 0; // 0x2b1 Return
	
Label_669:
	var_596_string = ""; // 0x29d PushV
	var_596_string = var_2_object; // 0x29e MovT
	func_3359(var_596_string); // 0x29f NEW_2
	goto Label_664; // 0x2a1 Jump
	
Label_675:
	var_597_string = "all"; // 0x2a3 PushS
	var_598_string = "idle"; // 0x2a4 PushS
	PlayAnimation(var_597_string, var_598_string); // 0x2a5 Func
	
Label_679:
	WaitForAnimEnd(); // 0x2a7 Func
	var_599_string = var_3_string; // 0x2a9 PushT
	if(var_599_string == 0) goto Label_684; // 0x2aa JumpB
	goto Label_689; // 0x2ab Jump
	
Label_684:
	var_600_string = "all"; // 0x2ac PushS
	var_601_string = "idle"; // 0x2ad PushS
	PlayAnimation(var_600_string, var_601_string); // 0x2ae Func
	goto Label_679; // 0x2b0 Jump
}


func_3587(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xe03 PushV
	var_58_string = "idle"; // 0xe04 MovS
	var_59_int = var_56_int; // 0xe05 Push
	if(var_59_int == 0) goto Label_3592; // 0xe06 JumpB
	var_58_string = var_58_string + var_56_int; // 0xe07 Add2
	
Label_3592:
	var_55_string = var_58_string; // 0xe08 Mov
	return 2; // 0xe09 Return
}


func_1540(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object; // 0x605 TMov
	var_1_object = var_220_object; // 0x606 TMov
	var_3_string = 0; // 0x607 TMovB
	var_226_int = 1; // 0x608 PushI
	if(var_226_int == 0) goto Label_1568; // 0x609 JumpB
	var_227_string = ""; // 0x60a PushV
	var_227_string = "Neutral"; // 0x60b MovS
	func_1598(var_221_object, var_227_string); // 0x60c NEW_2
	var_244_int = 528095; // 0x60e PushI
	SetMessage(var_244_int); // 0x60f TObjFunc
	ClearReplies(); // 0x611 TObjFunc
	var_245_int = 528096; // 0x613 PushI
	var_246_int = 29441; // 0x614 PushI
	var_247_int = 29440; // 0x615 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x616 TObjFunc
	var_248_int = 528105; // 0x618 PushI
	var_249_int = 29450; // 0x619 PushI
	var_250_int = 29449; // 0x61a PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x61b TObjFunc
	goto Label_1568; // 0x61d Jump
	
Label_1568:
	var_251_bool = 0; // 0x620 PushV
	func_3619(var_251_bool); // 0x621 NEW_2
	if(var_251_bool == 0) goto Label_1583; // 0x623 JumpB
	
Label_1572:
	lshWaitForAnimEnd(); // 0x624 Func
	var_252_string = var_3_string; // 0x626 PushT
	if(var_252_string == 0) goto Label_1577; // 0x627 JumpB
	goto Label_1582; // 0x628 Jump
	
Label_1582:
	goto Label_1597; // 0x62e Jump
	
Label_1597:
	return 0; // 0x63d Return
	
Label_1577:
	var_253_string = ""; // 0x629 PushV
	var_253_string = var_2_object; // 0x62a MovT
	func_3359(var_253_string); // 0x62b NEW_2
	goto Label_1572; // 0x62d Jump
	
Label_1583:
	var_264_string = "all"; // 0x62f PushS
	var_265_string = "idle"; // 0x630 PushS
	PlayAnimation(var_264_string, var_265_string); // 0x631 Func
	
Label_1587:
	WaitForAnimEnd(); // 0x633 Func
	var_266_string = var_3_string; // 0x635 PushT
	if(var_266_string == 0) goto Label_1592; // 0x636 JumpB
	goto Label_1597; // 0x637 Jump
	
Label_1592:
	var_267_string = "all"; // 0x638 PushS
	var_268_string = "idle"; // 0x639 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x63a Func
	goto Label_1587; // 0x63c Jump
}


func_4100(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1004 PushV
	GetDiaryRoot(var_55_object); // 0x1005 Func
	var_56_bool = var_55_object == 0; // 0x1007 Not
	if(var_56_bool == 0) goto Label_4110; // 0x1008 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x1009 PushS
	Trace(var_57_string); // 0x100a Func
	var_53_object = 0; // 0x100c MovB
	return 2; // 0x100d Return
	
Label_4110:
	var_53_object = var_55_object; // 0x100e Mov
	return 2; // 0x100f Return
}


func_3845(var_499_bool, var_500_object)
{
	var_501_bool = 0; var_502_object = Obj(); // 0xf06 PushV
	var_502_object = var_500_object; // 0xf07 Mov
	func_3978(var_502_object); // 0xf08 NEW_2
	if(var_501_bool == 0) goto Label_3853; // 0xf0a JumpB
	var_499_bool = 1; // 0xf0b MovB
	return 0; // 0xf0c Return
	
Label_3853:
	var_499_bool = 0; // 0xf0d MovB
	return 0; // 0xf0e Return
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


func_3594(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xe0a PushV
	var_52_int = 0; // 0xe0b MovI
	
Label_3596:
	var_54_string = "all"; // 0xe0c PushS
	var_55_string = ""; var_56_int = 0; // 0xe0d PushV
	var_56_int = var_52_int; // 0xe0e Mov
	func_3587(var_55_string, var_56_int); // 0xe0f NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xe11 Func
	var_60_bool = var_53_bool == 0; // 0xe13 Not
	if(var_60_bool == 0) goto Label_3606; // 0xe14 JumpB
	goto Label_3609; // 0xe15 Jump
	
Label_3609:
	var_49_int = var_52_int; // 0xe19 Mov
	return 4; // 0xe1a Return
	
Label_3606:
	var_61_int = 1; // 0xe16 PushI
	var_52_int = var_52_int + var_61_int; // 0xe17 Add2
	goto Label_3596; // 0xe18 Jump
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
	func_3428(var_192_float, var_193_float, var_194_float, var_195_float); // 0xc1b NEW_2
	SetProperty(var_176_string, var_192_float); // 0xc1d ObjFunc
	var_174_bool = 1; // 0xc1f MovB
	return 2; // 0xc20 Return
}


func_1802(var_0_object, var_1_object, var_2_object, var_3_string, var_386_object, var_387_object)
{
	var_0_object = var_387_object; // 0x70b TMov
	var_1_object = var_386_object; // 0x70c TMov
	var_3_string = 0; // 0x70d TMovB
	var_392_int = 1; // 0x70e PushI
	if(var_392_int == 0) goto Label_1860; // 0x70f JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0x710 PushV
	var_394_object = var_1_object; // 0x711 MovT
	func_3855(var_394_object); // 0x712 NEW_2
	if(var_393_bool == 0) goto Label_1833; // 0x714 JumpB
	var_399_string = ""; // 0x715 PushV
	var_399_string = "Doubt"; // 0x716 MovS
	func_1890(var_387_object, var_399_string); // 0x717 NEW_2
	var_407_int = 529720; // 0x719 PushI
	SetMessage(var_407_int); // 0x71a TObjFunc
	ClearReplies(); // 0x71c TObjFunc
	var_408_int = 529743; // 0x71e PushI
	var_409_int = 31200; // 0x71f PushI
	var_410_int = 31198; // 0x720 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x721 TObjFunc
	var_411_int = 529744; // 0x723 PushI
	var_412_int = 31206; // 0x724 PushI
	var_413_int = 31199; // 0x725 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x726 TObjFunc
	goto Label_1860; // 0x728 Jump
	
Label_1860:
	var_414_bool = 0; // 0x744 PushV
	func_3619(var_414_bool); // 0x745 NEW_2
	if(var_414_bool == 0) goto Label_1875; // 0x747 JumpB
	
Label_1864:
	lshWaitForAnimEnd(); // 0x748 Func
	var_415_string = var_3_string; // 0x74a PushT
	if(var_415_string == 0) goto Label_1869; // 0x74b JumpB
	goto Label_1874; // 0x74c Jump
	
Label_1874:
	goto Label_1889; // 0x752 Jump
	
Label_1889:
	return 0; // 0x761 Return
	
Label_1869:
	var_416_string = ""; // 0x74d PushV
	var_416_string = var_2_object; // 0x74e MovT
	func_3359(var_416_string); // 0x74f NEW_2
	goto Label_1864; // 0x751 Jump
	
Label_1875:
	var_417_string = "all"; // 0x753 PushS
	var_418_string = "idle"; // 0x754 PushS
	PlayAnimation(var_417_string, var_418_string); // 0x755 Func
	
Label_1879:
	WaitForAnimEnd(); // 0x757 Func
	var_419_string = var_3_string; // 0x759 PushT
	if(var_419_string == 0) goto Label_1884; // 0x75a JumpB
	goto Label_1889; // 0x75b Jump
	
Label_1884:
	var_420_string = "all"; // 0x75c PushS
	var_421_string = "idle"; // 0x75d PushS
	PlayAnimation(var_420_string, var_421_string); // 0x75e Func
	goto Label_1879; // 0x760 Jump
	
Label_1833:
	var_422_string = ""; // 0x729 PushV
	var_422_string = "Agression"; // 0x72a MovS
	func_1890(var_387_object, var_422_string); // 0x72b NEW_2
	var_423_int = 529758; // 0x72d PushI
	SetMessage(var_423_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_424_bool = 0; var_425_object = Obj(); // 0x732 PushV
	var_425_object = var_1_object; // 0x733 MovT
	func_3943(var_425_object); // 0x734 NEW_2
	if(var_424_bool == 0) goto Label_1852; // 0x736 JumpB
	var_430_int = 529756; // 0x737 PushI
	var_431_int = 31213; // 0x738 PushI
	var_432_int = 31212; // 0x739 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x73a TObjFunc
	
Label_1852:
	var_433_int = 529759; // 0x73c PushI
	var_434_int = -1; // 0x73d PushI
	var_435_int = 31215; // 0x73e PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x73f TObjFunc
	goto Label_1860; // 0x741 Jump
}


func_3855(var_393_bool)
{
	var_395_int = 0; var_396_string = ""; // 0xf10 PushV
	var_396_string = "k9q01"; // 0xf11 MovS
	func_3439(var_395_int, var_396_string); // 0xf12 NEW_2
	var_397_int = 8; // 0xf14 PushI
	var_398_bool = var_395_int == var_397_int; // 0xf15 Eq
	if(var_398_bool == 0) goto Label_3865; // 0xf16 JumpB
	var_393_bool = 1; // 0xf17 MovB
	return 0; // 0xf18 Return
	
Label_3865:
	var_393_bool = 0; // 0xf19 MovB
	return 0; // 0xf1a Return
}


func_4113(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x1011 PushV
	var_53_object = Obj(); // 0x1012 PushV
	func_4100(var_53_object); // 0x1013 NEW_2
	var_50_object = var_53_object; // 0x1014 Mov
	Find(var_46_int, var_51_object); // 0x1016 ObjFunc
	var_58_bool = var_51_object == 0; // 0x1018 Not
	if(var_58_bool == 0) goto Label_4128; // 0x1019 JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x101a PushS
	var_60_int = var_59_string + var_46_int; // 0x101b Add
	Trace(var_60_int); // 0x101c Func
	var_44_bool = 0; // 0x101e MovB
	return 6; // 0x101f Return
	
Label_4128:
	AddChild(var_45_object); // 0x1020 ObjFunc
	var_61_int = 7; // 0x1022 PushI
	SendWorldWndMessage(var_61_int); // 0x1023 Func
	GetCategory(var_52_int); // 0x1025 ObjFunc
	SetDiarySection(var_52_int); // 0x1027 Func
	var_44_bool = 0; // 0x1029 MovB
	return 6; // 0x102a Return
}


func_2840(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0xb18 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0xb19 PushE
	RotateAsync(var_108_float, var_109_float); // 0xb1a Func
	return 0; // 0xb1c Return
}


func_3611(var_113_int)
{
	var_113_int = 515532; // 0xe1b MovI
	return 0; // 0xe1c Return
}


func_3867(var_518_bool, var_519_object)
{
	var_520_bool = 0; var_521_object = Obj(); // 0xf1c PushV
	var_521_object = var_519_object; // 0xf1d Mov
	func_3985(var_521_object); // 0xf1e NEW_2
	if(var_520_bool == 0) goto Label_3875; // 0xf20 JumpB
	var_518_bool = 1; // 0xf21 MovB
	return 0; // 0xf22 Return
	
Label_3875:
	var_518_bool = 0; // 0xf23 MovB
	return 0; // 0xf24 Return
}


func_3613(var_112_int)
{
	var_112_int = 514840; // 0xe1d MovI
	return 0; // 0xe1e Return
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


func_3615(var_114_string)
{
	var_114_string = "ui/NPC_Block.png"; // 0xe1f MovS
	return 0; // 0xe20 Return
}


func_3359(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0xd1f PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0xd20 Func
	var_260_bool = var_257_bool; // 0xd22 Push
	if(var_260_bool == 0) goto Label_3370; // 0xd23 JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0xd24 Func
	var_261_bool = 0; // 0xd26 PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0xd27 Func
	goto Label_3374; // 0xd29 Jump
	
Label_3374:
	return 6; // 0xd2e Return
	
Label_3370:
	var_262_string = "Can't find lsh animation : "; // 0xd2a PushS
	var_263_int = var_262_string + var_253_string; // 0xd2b Add
	Trace(var_263_int); // 0xd2c Func
}


func_3617(var_115_string)
{
	var_115_string = "ui/NPC_Block_b.png"; // 0xe21 MovS
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


func_3619(var_107_bool)
{
	var_107_bool = 1; // 0xe23 MovB
	return 0; // 0xe24 Return
}


func_3621(var_161_object)
{
	var_163_bool = 0; var_164_object = Obj(); var_165_float = 0; // 0xe26 PushV
	var_164_object = var_161_object; // 0xe27 Mov
	var_165_float = 0.05; // 0xe28 MovF
	func_3507(var_163_bool, var_164_object, var_165_float); // 0xe29 NEW_2
	return 0; // 0xe2b Return
}


func_2297(var_0_object, var_1_object, var_2_object, var_3_string, var_630_object, var_631_object)
{
	var_0_object = var_631_object; // 0x8fa TMov
	var_1_object = var_630_object; // 0x8fb TMov
	var_3_string = 0; // 0x8fc TMovB
	var_636_int = 1; // 0x8fd PushI
	if(var_636_int == 0) goto Label_2356; // 0x8fe JumpB
	var_637_bool = 0; var_638_object = Obj(); // 0x8ff PushV
	var_638_object = var_1_object; // 0x900 MovT
	func_3775(var_637_bool, var_638_object); // 0x901 NEW_2
	var_648_bool = var_637_bool == 0; // 0x903 Not
	if(var_648_bool == 0) goto Label_2334; // 0x904 JumpB
	var_649_string = ""; // 0x905 PushV
	var_649_string = "Neutral"; // 0x906 MovS
	func_2386(var_631_object, var_649_string); // 0x907 NEW_2
	var_657_int = 539248; // 0x909 PushI
	SetMessage(var_657_int); // 0x90a TObjFunc
	ClearReplies(); // 0x90c TObjFunc
	var_658_bool = 0; var_659_object = Obj(); // 0x90e PushV
	var_659_object = var_1_object; // 0x90f MovT
	func_3955(var_659_object); // 0x910 NEW_2
	if(var_658_bool == 0) goto Label_2328; // 0x912 JumpB
	var_664_int = 542928; // 0x913 PushI
	var_665_int = 45365; // 0x914 PushI
	var_666_int = 45364; // 0x915 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x916 TObjFunc
	
Label_2328:
	var_667_int = 539249; // 0x918 PushI
	var_668_int = -1; // 0x919 PushI
	var_669_int = 41192; // 0x91a PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x91b TObjFunc
	goto Label_2356; // 0x91d Jump
	
Label_2356:
	var_670_bool = 0; // 0x934 PushV
	func_3619(var_670_bool); // 0x935 NEW_2
	if(var_670_bool == 0) goto Label_2371; // 0x937 JumpB
	
Label_2360:
	lshWaitForAnimEnd(); // 0x938 Func
	var_671_string = var_3_string; // 0x93a PushT
	if(var_671_string == 0) goto Label_2365; // 0x93b JumpB
	goto Label_2370; // 0x93c Jump
	
Label_2370:
	goto Label_2385; // 0x942 Jump
	
Label_2385:
	return 0; // 0x951 Return
	
Label_2365:
	var_672_string = ""; // 0x93d PushV
	var_672_string = var_2_object; // 0x93e MovT
	func_3359(var_672_string); // 0x93f NEW_2
	goto Label_2360; // 0x941 Jump
	
Label_2371:
	var_673_string = "all"; // 0x943 PushS
	var_674_string = "idle"; // 0x944 PushS
	PlayAnimation(var_673_string, var_674_string); // 0x945 Func
	
Label_2375:
	WaitForAnimEnd(); // 0x947 Func
	var_675_string = var_3_string; // 0x949 PushT
	if(var_675_string == 0) goto Label_2380; // 0x94a JumpB
	goto Label_2385; // 0x94b Jump
	
Label_2380:
	var_676_string = "all"; // 0x94c PushS
	var_677_string = "idle"; // 0x94d PushS
	PlayAnimation(var_676_string, var_677_string); // 0x94e Func
	goto Label_2375; // 0x950 Jump
	
Label_2334:
	var_678_string = ""; // 0x91e PushV
	var_678_string = "Neutral"; // 0x91f MovS
	func_2386(var_631_object, var_678_string); // 0x920 NEW_2
	var_679_int = 539250; // 0x922 PushI
	SetMessage(var_679_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_680_int = 539251; // 0x927 PushI
	var_681_int = -1; // 0x928 PushI
	var_682_int = 41194; // 0x929 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x92a TObjFunc
	var_683_int = 541515; // 0x92c PushI
	var_684_int = -1; // 0x92d PushI
	var_685_int = 43678; // 0x92e PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x92f TObjFunc
	goto Label_2356; // 0x931 Jump
}


func_3877(var_528_bool, var_529_object)
{
	var_530_bool = 0; var_531_object = Obj(); // 0xf26 PushV
	var_531_object = var_529_object; // 0xf27 Mov
	func_3991(var_531_object); // 0xf28 NEW_2
	if(var_530_bool == 0) goto Label_3885; // 0xf2a JumpB
	var_528_bool = 1; // 0xf2b MovB
	return 0; // 0xf2c Return
	
Label_3885:
	var_528_bool = 0; // 0xf2d MovB
	return 0; // 0xf2e Return
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


func_3628()
{
	var_39_string = "k10q01"; // 0xe2d PushS
	var_40_int = 3; // 0xe2e PushI
	SetVariable(var_39_string, var_40_int); // 0xe2f Func
	func_4009(); // 0xe32 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0xe34 PushV
	var_65_string = "quest_k10_01"; // 0xe35 MovS
	var_66_string = "remove_soldiers"; // 0xe36 MovS
	func_3552(var_64_bool, var_65_string, var_66_string); // 0xe37 NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xe39 PushV
	var_71_string = "quest_k10_01"; // 0xe3a MovS
	var_72_string = "init_prison"; // 0xe3b MovS
	func_3552(var_70_bool, var_71_string, var_72_string); // 0xe3c NEW_2
	return 0; // 0xe3e Return
}


func_4141(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0x102d PushV
	var_119_string = "branch"; // 0x102e PushS
	GetVariable(var_119_string, var_118_int); // 0x102f Func
	var_120_int = 0; // 0x1031 PushI
	var_121_bool = var_118_int == var_120_int; // 0x1032 Eq
	if(var_121_bool == 0) goto Label_4151; // 0x1033 JumpB
	var_116_int = 1; // 0x1034 MovI
	return 2; // 0x1035 Return
	
Label_4151:
	var_122_int = 1; // 0x1037 PushI
	var_123_bool = var_118_int == var_122_int; // 0x1038 Eq
	if(var_123_bool == 0) goto Label_4156; // 0x1039 JumpB
	var_116_int = 2; // 0x103a MovI
	return 2; // 0x103b Return
	
Label_4156:
	var_116_int = 3; // 0x103c MovI
	return 2; // 0x103d Return
}


func_2604(var_0_object, var_688_int, var_689_object)
{
	var_691_object = Obj(); var_692_bool = 0; var_693_int = 0; var_694_bool = 0; var_695_object = Obj(); var_696_bool = 0; var_697_int = 0; var_698_bool = 0; // 0xa2c PushV
	var_0_object = var_689_object; // 0xa2d TMov
	var_699_bool = 0; var_700_object = Obj(); var_701_float = 0; // 0xa2e PushV
	var_700_object = var_689_object; // 0xa2f Mov
	var_701_float = 70.0; // 0xa30 MovF
	func_3136(var_700_object, var_701_float); // 0xa31 NEW_2
	var_702_bool = var_699_bool == 0; // 0xa33 Not
	if(var_702_bool == 0) goto Label_2615; // 0xa34 JumpB
	var_688_int = -2; // 0xa35 MovI
	return 8; // 0xa36 Return
	
Label_2615:
	CreateDialog(var_695_object); // 0xa37 Func
	var_703_int = 0; // 0xa39 PushV
	func_3613(var_703_int); // 0xa3a NEW_2
	SetNPCName(var_703_int); // 0xa3c ObjFunc
	var_704_int = 0; // 0xa3e PushV
	func_3611(var_704_int); // 0xa3f NEW_2
	SetNPCDescription(var_704_int); // 0xa41 ObjFunc
	var_705_string = ""; // 0xa43 PushV
	func_3615(var_705_string); // 0xa44 NEW_2
	SetPhoto(var_705_string); // 0xa46 ObjFunc
	var_706_string = ""; // 0xa48 PushV
	func_3617(var_706_string); // 0xa49 NEW_2
	SetPhoto2(var_706_string); // 0xa4b ObjFunc
	var_707_int = 0; // 0xa4d PushV
	func_4141(var_707_int); // 0xa4e NEW_2
	SetPlayerName(var_707_int); // 0xa50 ObjFunc
	var_697_int = -1; // 0xa52 MovI
	IsOverrideActive(var_696_bool); // 0xa53 Func
	var_708_bool = var_696_bool; // 0xa55 Push
	if(var_708_bool == 0) goto Label_2649; // 0xa56 JumpB
	var_688_int = -2; // 0xa57 MovI
	return 8; // 0xa58 Return
	
Label_2649:
	DoDialog(var_695_object); // 0xa59 Func
	var_709_bool = 0; var_710_object = Obj(); // 0xa5b PushV
	var_711_object = Obj(); // 0xa5c PushV
	func_3412(var_711_object); // 0xa5d NEW_2
	var_710_object = var_711_object; // 0xa5e Mov
	func_3221(var_709_bool, var_710_object); // 0xa60 NEW_2
	var_712_object = Obj(); var_713_object = Obj(); // 0xa62 PushV
	var_712_object = var_689_object; // 0xa63 Mov
	var_713_object = var_695_object; // 0xa64 Mov
	TaskCall(11); // 0xa65 TaskCall
	func_2685(var_714_object, var_715_object, var_716_string, var_717_bool, var_712_object, var_713_object); // 0xa66 NEW_2
	TaskReturn(); // 0xa67 TaskReturn
	IsDialogEnd(var_698_bool); // 0xa69 ObjFunc
	
Label_2667:
	var_742_bool = var_698_bool == 0; // 0xa6b Not
	if(var_742_bool == 0) goto Label_2674; // 0xa6c JumpB
	sync(); // 0xa6d Func
	IsDialogEnd(var_698_bool); // 0xa6f ObjFunc
	goto Label_2667; // 0xa71 Jump
	
Label_2674:
	var_743_object = Obj(); // 0xa72 PushV
	var_743_object = var_689_object; // 0xa73 Mov
	func_3204(); // 0xa74 NEW_2
	StopDialog(var_695_object); // 0xa76 Func
	GetReturnValue(var_697_int); // 0xa78 ObjFunc
	var_688_int = var_697_int; // 0xa7a Mov
	return 8; // 0xa7b Return
}


func_3375(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0xd2f PushV
	lshHasAnimation(var_238_bool, var_231_string); // 0xd30 Func
	var_241_bool = var_238_bool; // 0xd32 Push
	if(var_241_bool == 0) goto Label_3385; // 0xd33 JumpB
	lshGetAnimTimes(var_231_string, var_239_float, var_240_float); // 0xd34 Func
	lshPlayAnimation(var_239_float, var_240_float, var_232_bool); // 0xd36 Func
	goto Label_3389; // 0xd38 Jump
	
Label_3389:
	return 6; // 0xd3d Return
	
Label_3385:
	var_242_string = "Can't find lsh animation : "; // 0xd39 PushS
	var_243_int = var_242_string + var_231_string; // 0xd3a Add
	Trace(var_243_int); // 0xd3b Func
}


func_3887(var_555_bool, var_556_object)
{
	var_557_bool = 0; var_558_object = Obj(); // 0xf30 PushV
	var_558_object = var_556_object; // 0xf31 Mov
	func_3997(var_558_object); // 0xf32 NEW_2
	if(var_557_bool == 0) goto Label_3895; // 0xf34 JumpB
	var_555_bool = 1; // 0xf35 MovB
	return 0; // 0xf36 Return
	
Label_3895:
	var_555_bool = 0; // 0xf37 MovB
	return 0; // 0xf38 Return
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


func_2867()
{
	var_746_float = 0; var_747_float = 0; // 0xb33 PushV
	var_748_int = 8; // 0xb34 PushI
	var_749_int = 16; // 0xb35 PushI
	rand(var_747_float, var_748_int, var_749_int); // 0xb36 Func
	var_750_int = 10; // 0xb38 PushI
	SetTimer(var_750_int, var_747_float); // 0xb39 Func
	return 2; // 0xb3b Return
}


func_3897(var_575_bool, var_576_object)
{
	var_577_bool = 0; var_578_object = Obj(); // 0xf3a PushV
	var_578_object = var_576_object; // 0xf3b Mov
	func_4003(var_578_object); // 0xf3c NEW_2
	if(var_577_bool == 0) goto Label_3905; // 0xf3e JumpB
	var_575_bool = 1; // 0xf3f MovB
	return 0; // 0xf40 Return
	
Label_3905:
	var_575_bool = 0; // 0xf41 MovB
	return 0; // 0xf42 Return
}


func_3131(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0xc3b PushV
	IsLoaded(var_33_bool); // 0xc3c Func
	var_31_bool = var_33_bool; // 0xc3e Mov
	return 2; // 0xc3f Return
}


func_2876()
{
	var_745_int = 10; // 0xb3c PushI
	KillTimer(var_745_int); // 0xb3d Func
	return 0; // 0xb3f Return
}


func_1598(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0x63f PushV
	func_3619(var_228_bool); // 0x640 NEW_2
	var_229_bool = var_228_bool == 0; // 0x642 Not
	if(var_229_bool == 0) goto Label_1605; // 0x643 JumpB
	return 0; // 0x644 Return
	
Label_1605:
	var_230_bool = var_227_string == var_2_object; // 0x645 Eq
	if(var_230_bool == 0) goto Label_1608; // 0x646 JumpB
	return 0; // 0x647 Return
	
Label_1608:
	var_231_string = ""; var_232_bool = 0; // 0x648 PushV
	var_231_string = var_227_string; // 0x649 Mov
	var_233_string = ""; // 0x64a PushS
	var_234_bool = var_227_string == var_233_string; // 0x64b Eq
	if(var_234_bool == 0) goto Label_1615; // 0x64c JumpB
	var_232_bool = 0; // 0x64d MovB
	goto Label_1616; // 0x64e Jump
	
Label_1616:
	func_3375(var_231_string, var_232_bool); // 0x650 NEW_2
	var_2_object = var_227_string; // 0x652 TMov
	return 0; // 0x653 Return
	
Label_1615:
	var_232_bool = 1; // 0x64f MovB
}


func_3647()
{
	var_77_string = "k10q01"; // 0xe40 PushS
	var_78_int = 5; // 0xe41 PushI
	SetVariable(var_77_string, var_78_int); // 0xe42 Func
	func_4022(); // 0xe45 NEW_2
	var_87_bool = 0; var_88_string = ""; var_89_string = ""; // 0xe47 PushV
	var_88_string = "quest_k10_01"; // 0xe48 MovS
	var_89_string = "free_prisoner"; // 0xe49 MovS
	func_3552(var_87_bool, var_88_string, var_89_string); // 0xe4a NEW_2
	return 0; // 0xe4c Return
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
	func_3418(var_92_cvector, var_93_cvector); // 0xc5b NEW_2
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
	CameraTransit(var_83_cvector, var_81_cvector); // 0xc6b Func
	var_105_float = GetByIndex(var_82_cvector, 0); // 0xc6d PushE
	var_106_float = GetByIndex(var_82_cvector, 2); // 0xc6e PushE
	Rotate(var_105_float, var_106_float); // 0xc6f Func
	var_107_bool = 0; // 0xc71 PushV
	func_3619(var_107_bool); // 0xc72 NEW_2
	if(var_107_bool == 0) goto Label_3190; // 0xc74 JumpB
	goto Label_3198; // 0xc75 Jump
	
Label_3198:
	CameraWaitForPlayFinish(); // 0xc7e Func
	ResumeWorld(); // 0xc80 Func
	var_65_bool = 1; // 0xc82 MovB
	return 18; // 0xc83 Return
	
Label_3190:
	var_108_string = "head"; // 0xc76 PushS
	HasAnimationTrack(var_85_bool, var_108_string); // 0xc77 Func
	var_109_bool = var_85_bool; // 0xc79 Push
	if(var_109_bool == 0) goto Label_3198; // 0xc7a JumpB
	var_110_string = "head"; // 0xc7b PushS
	LookAsyncCamera(var_110_string); // 0xc7c Func
}


func_4158(var_524_int)
{
	var_525_int = 0; var_526_int = 0; // 0x103e PushV
	var_527_string = "k2system_danko_day"; // 0x103f PushS
	GetVariable(var_527_string, var_526_int); // 0x1040 Func
	var_524_int = var_526_int; // 0x1042 Mov
	return 2; // 0x1043 Return
}


func_3390(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xd3e PushV
	var_163_bool = 0; // 0xd3f PushV
	func_3619(var_163_bool); // 0xd40 NEW_2
	if(var_163_bool == 0) goto Label_3403; // 0xd42 JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xd43 Func
	var_164_bool = var_162_bool; // 0xd45 Push
	if(var_164_bool == 0) goto Label_3403; // 0xd46 JumpB
	lshPlaySpeech(var_160_string); // 0xd47 Func
	var_159_bool = 1; // 0xd49 MovB
	return 2; // 0xd4a Return
	
Label_3403:
	var_159_bool = 0; // 0xd4b MovB
	return 2; // 0xd4c Return
}


func_3907(var_542_bool)
{
	var_544_int = 0; var_545_string = ""; // 0xf44 PushV
	var_545_string = "ook11Block1"; // 0xf45 MovS
	func_3439(var_544_int, var_545_string); // 0xf46 NEW_2
	var_546_int = 0; // 0xf48 PushI
	var_547_bool = var_544_int == var_546_int; // 0xf49 Eq
	if(var_547_bool == 0) goto Label_3917; // 0xf4a JumpB
	var_542_bool = 1; // 0xf4b MovB
	return 0; // 0xf4c Return
	
Label_3917:
	var_542_bool = 0; // 0xf4d MovB
	return 0; // 0xf4e Return
}


func_4164(var_533_int)
{
	var_534_int = 0; var_535_int = 0; var_536_int = 0; var_537_int = 0; // 0x1044 PushV
	var_538_int = 0; // 0x1045 PushV
	func_4158(var_538_int); // 0x1046 NEW_2
	var_536_int = var_538_int; // 0x1047 Mov
	var_539_string = "k2system_danko_state"; // 0x1049 PushS
	var_540_int = var_539_string + var_536_int; // 0x104a Add
	GetVariable(var_540_int, var_537_int); // 0x104b Func
	var_533_int = var_537_int; // 0x104d Mov
	return 4; // 0x104e Return
}


func_3661()
{
	var_39_string = "k11q01"; // 0xe4e PushS
	var_40_int = 2; // 0xe4f PushI
	SetVariable(var_39_string, var_40_int); // 0xe50 Func
	func_4035(); // 0xe53 NEW_2
	var_64_bool = 0; var_65_string = ""; var_66_string = ""; // 0xe55 PushV
	var_65_string = "quest_k11_01"; // 0xe56 MovS
	var_66_string = "init_kabak"; // 0xe57 MovS
	func_3552(var_64_bool, var_65_string, var_66_string); // 0xe58 NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xe5a PushV
	var_71_string = "quest_k11_01"; // 0xe5b MovS
	var_72_string = "init_gun"; // 0xe5c MovS
	func_3552(var_70_bool, var_71_string, var_72_string); // 0xe5d NEW_2
	return 0; // 0xe5f Return
}


func_3405()
{
	var_34_bool = 0; // 0xd4d PushV
	func_3619(var_34_bool); // 0xd4e NEW_2
	if(var_34_bool == 0) goto Label_3411; // 0xd50 JumpB
	lshStopSpeech(); // 0xd51 Func
	
Label_3411:
	return 0; // 0xd53 Return
}


func_4175(var_522_bool)
{
	var_523_int = 0; // 0x104f PushV
	func_3564(var_523_int); // 0x1050 NEW_2
	var_524_int = 0; // 0x1052 PushV
	func_4158(var_524_int); // 0x1053 NEW_2
	var_522_bool = var_523_int == var_524_int; // 0x1055 Eq2
	return 0; // 0x1056 Return
}


func_3919(var_562_bool)
{
	var_564_int = 0; var_565_string = ""; // 0xf50 PushV
	var_565_string = "ook11Block2"; // 0xf51 MovS
	func_3439(var_564_int, var_565_string); // 0xf52 NEW_2
	var_566_int = 0; // 0xf54 PushI
	var_567_bool = var_564_int == var_566_int; // 0xf55 Eq
	if(var_567_bool == 0) goto Label_3929; // 0xf56 JumpB
	var_562_bool = 1; // 0xf57 MovB
	return 0; // 0xf58 Return
	
Label_3929:
	var_562_bool = 0; // 0xf59 MovB
	return 0; // 0xf5a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_306_object, var_307_object)
{
	var_0_object = var_307_object; // 0x52 TMov
	var_1_object = var_306_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_312_int = 1; // 0x55 PushI
	if(var_312_int == 0) goto Label_139; // 0x56 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x57 PushV
	var_314_object = var_1_object; // 0x58 MovT
	func_3785(var_314_object); // 0x59 NEW_2
	if(var_313_bool == 0) goto Label_107; // 0x5b JumpB
	var_321_string = ""; // 0x5c PushV
	var_321_string = "Neutral"; // 0x5d MovS
	func_169(var_307_object, var_321_string); // 0x5e NEW_2
	var_329_int = 526965; // 0x60 PushI
	SetMessage(var_329_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_330_int = 528076; // 0x65 PushI
	var_331_int = 29419; // 0x66 PushI
	var_332_int = 29418; // 0x67 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x68 TObjFunc
	goto Label_139; // 0x6a Jump
	
Label_139:
	var_333_bool = 0; // 0x8b PushV
	func_3619(var_333_bool); // 0x8c NEW_2
	if(var_333_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_334_string = var_3_string; // 0x91 PushT
	if(var_334_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_335_string = ""; // 0x94 PushV
	var_335_string = var_2_object; // 0x95 MovT
	func_3359(var_335_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_336_string = "all"; // 0x9a PushS
	var_337_string = "idle"; // 0x9b PushS
	PlayAnimation(var_336_string, var_337_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_338_string = var_3_string; // 0xa0 PushT
	if(var_338_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_339_string = "all"; // 0xa3 PushS
	var_340_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_339_string, var_340_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_107:
	var_341_string = ""; // 0x6b PushV
	var_341_string = "Neutral"; // 0x6c MovS
	func_169(var_307_object, var_341_string); // 0x6d NEW_2
	var_342_int = 526969; // 0x6f PushI
	SetMessage(var_342_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_343_bool = 0; var_344_object = Obj(); // 0x74 PushV
	var_344_object = var_1_object; // 0x75 MovT
	func_3797(var_344_object); // 0x76 NEW_2
	if(var_343_bool == 0) goto Label_126; // 0x78 JumpB
	var_349_int = 526978; // 0x79 PushI
	var_350_int = 29424; // 0x7a PushI
	var_351_int = 28270; // 0x7b PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x7c TObjFunc
	
Label_126:
	var_352_int = 526970; // 0x7e PushI
	var_353_int = -1; // 0x7f PushI
	var_354_int = 28262; // 0x80 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x81 TObjFunc
	var_355_int = 528088; // 0x83 PushI
	var_356_int = -1; // 0x84 PushI
	var_357_int = 29431; // 0x85 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_2386(var_2_object, var_649_string)
{
	var_650_bool = 0; // 0x953 PushV
	func_3619(var_650_bool); // 0x954 NEW_2
	var_651_bool = var_650_bool == 0; // 0x956 Not
	if(var_651_bool == 0) goto Label_2393; // 0x957 JumpB
	return 0; // 0x958 Return
	
Label_2393:
	var_652_bool = var_649_string == var_2_object; // 0x959 Eq
	if(var_652_bool == 0) goto Label_2396; // 0x95a JumpB
	return 0; // 0x95b Return
	
Label_2396:
	var_653_string = ""; var_654_bool = 0; // 0x95c PushV
	var_653_string = var_649_string; // 0x95d Mov
	var_655_string = ""; // 0x95e PushS
	var_656_bool = var_649_string == var_655_string; // 0x95f Eq
	if(var_656_bool == 0) goto Label_2403; // 0x960 JumpB
	var_654_bool = 0; // 0x961 MovB
	goto Label_2404; // 0x962 Jump
	
Label_2404:
	func_3375(var_653_string, var_654_bool); // 0x964 NEW_2
	var_2_object = var_649_string; // 0x966 TMov
	return 0; // 0x967 Return
	
Label_2403:
	var_654_bool = 1; // 0x963 MovB
}


func_4087()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xff7 PushV
	var_41_int = 526; // 0xff8 PushI
	var_42_int = 1; // 0xff9 PushI
	var_43_int = 529818; // 0xffa PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0xffb Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0xffd PushV
	var_45_object = var_40_object; // 0xffe Mov
	var_46_int = 517; // 0xfff MovI
	func_4113(var_44_bool, var_45_object, var_46_int); // 0x1000 NEW_2
	return 2; // 0x1002 Return
}


func_3412(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xd54 PushV
	self(var_129_object); // 0xd55 Func
	var_127_object = var_129_object; // 0xd57 Mov
	return 2; // 0xd58 Return
}


func_4183(var_559_bool)
{
	var_560_int = 0; // 0x1057 PushV
	func_4164(var_560_int); // 0x1058 NEW_2
	var_561_int = 2; // 0x105a PushI
	var_559_bool = var_560_int == var_561_int; // 0x105b Eq2
	return 0; // 0x105c Return
}


func_3418(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xd5a PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xd5b Or
	var_96_float = sqrt(var_97_int); // 0xd5c Sqrt2
	var_98_float = 0.0; // 0xd5d PushF
	var_99_bool = var_96_float < var_98_float; // 0xd5e LT
	if(var_99_bool == 0) goto Label_3426; // 0xd5f JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xd60 MovV
	return 2; // 0xd61 Return
	
Label_3426:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xd62 Div2
	return 2; // 0xd63 Return
}


func_3931(var_582_bool)
{
	var_584_int = 0; var_585_string = ""; // 0xf5c PushV
	var_585_string = "ook11Block3"; // 0xf5d MovS
	func_3439(var_584_int, var_585_string); // 0xf5e NEW_2
	var_586_int = 0; // 0xf60 PushI
	var_587_bool = var_584_int == var_586_int; // 0xf61 Eq
	if(var_587_bool == 0) goto Label_3941; // 0xf62 JumpB
	var_582_bool = 1; // 0xf63 MovB
	return 0; // 0xf64 Return
	
Label_3941:
	var_582_bool = 0; // 0xf65 MovB
	return 0; // 0xf66 Return
}


func_4189(var_579_bool)
{
	var_580_int = 0; // 0x105d PushV
	func_4164(var_580_int); // 0x105e NEW_2
	var_581_int = 3; // 0x1060 PushI
	var_579_bool = var_580_int == var_581_int; // 0x1061 Eq2
	return 0; // 0x1062 Return
}


func_3680()
{
	var_81_string = "k11q01"; // 0xe61 PushS
	var_82_int = 9; // 0xe62 PushI
	SetVariable(var_81_string, var_82_int); // 0xe63 Func
	var_83_string = "k11q01SoulCount"; // 0xe65 PushS
	var_84_int = 1; // 0xe66 PushI
	SetVariable(var_83_string, var_84_int); // 0xe67 Func
	func_4048(); // 0xe6a NEW_2
	return 0; // 0xe6c Return
}


func_1890(var_2_object, var_399_string)
{
	var_400_bool = 0; // 0x763 PushV
	func_3619(var_400_bool); // 0x764 NEW_2
	var_401_bool = var_400_bool == 0; // 0x766 Not
	if(var_401_bool == 0) goto Label_1897; // 0x767 JumpB
	return 0; // 0x768 Return
	
Label_1897:
	var_402_bool = var_399_string == var_2_object; // 0x769 Eq
	if(var_402_bool == 0) goto Label_1900; // 0x76a JumpB
	return 0; // 0x76b Return
	
Label_1900:
	var_403_string = ""; var_404_bool = 0; // 0x76c PushV
	var_403_string = var_399_string; // 0x76d Mov
	var_405_string = ""; // 0x76e PushS
	var_406_bool = var_399_string == var_405_string; // 0x76f Eq
	if(var_406_bool == 0) goto Label_1907; // 0x770 JumpB
	var_404_bool = 0; // 0x771 MovB
	goto Label_1908; // 0x772 Jump
	
Label_1908:
	func_3375(var_403_string, var_404_bool); // 0x774 NEW_2
	var_2_object = var_399_string; // 0x776 TMov
	return 0; // 0x777 Return
	
Label_1907:
	var_404_bool = 1; // 0x773 MovB
}


func_4195(var_532_bool)
{
	var_533_int = 0; // 0x1063 PushV
	func_4164(var_533_int); // 0x1064 NEW_2
	var_541_int = 0; // 0x1066 PushI
	var_532_bool = var_533_int == var_541_int; // 0x1067 Eq2
	return 0; // 0x1068 Return
}


func_3428(var_192_float, var_193_float, var_194_float, var_195_float)
{
	var_196_bool = var_193_float < var_194_float; // 0xd65 LT
	if(var_196_bool == 0) goto Label_3433; // 0xd66 JumpB
	var_192_float = var_194_float; // 0xd67 Mov
	return 0; // 0xd68 Return
	
Label_3433:
	var_197_bool = var_193_float > var_195_float; // 0xd69 GT
	if(var_197_bool == 0) goto Label_3437; // 0xd6a JumpB
	var_192_float = var_195_float; // 0xd6b Mov
	return 0; // 0xd6c Return
	
Label_3437:
	var_192_float = var_193_float; // 0xd6d Mov
	return 0; // 0xd6e Return
}


func_3943(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0xf68 PushV
	var_427_string = "ook9Block1"; // 0xf69 MovS
	func_3439(var_426_int, var_427_string); // 0xf6a NEW_2
	var_428_int = 0; // 0xf6c PushI
	var_429_bool = var_426_int == var_428_int; // 0xf6d Eq
	if(var_429_bool == 0) goto Label_3953; // 0xf6e JumpB
	var_424_bool = 1; // 0xf6f MovB
	return 0; // 0xf70 Return
	
Label_3953:
	var_424_bool = 0; // 0xf71 MovB
	return 0; // 0xf72 Return
}


func_4201(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0x1069 PushV
	var_52_string = "mt_block"; // 0x106a PushS
	GetVariable(var_52_string, var_51_int); // 0x106b Func
	var_53_bool = var_51_int == 0; // 0x106d Not
	if(var_53_bool == 0) goto Label_4217; // 0x106e JumpB
	var_54_int = 0; var_55_object = Obj(); // 0x106f PushV
	var_55_object = var_49_object; // 0x1070 Mov
	TaskCall(4); // 0x1071 TaskCall
	func_1459(var_56_object, var_54_int, var_55_object); // 0x1072 NEW_2
	TaskReturn(); // 0x1073 TaskReturn
	var_277_string = "mt_block"; // 0x1075 PushS
	var_278_int = 1; // 0x1076 PushI
	SetVariable(var_277_string, var_278_int); // 0x1077 Func
	
Label_4217:
	var_279_bool = 0; var_280_int = 0; // 0x1079 PushV
	var_280_int = 10; // 0x107a MovI
	func_3581(var_279_bool, var_280_int); // 0x107b NEW_2
	if(var_279_bool == 0) goto Label_4229; // 0x107d JumpB
	var_282_int = 0; var_283_object = Obj(); // 0x107e PushV
	var_283_object = var_49_object; // 0x107f Mov
	TaskCall(0); // 0x1080 TaskCall
	func_0(var_284_object, var_282_int, var_283_object); // 0x1081 NEW_2
	TaskReturn(); // 0x1082 TaskReturn
	return 2; // 0x1084 Return
	
Label_4229:
	var_360_bool = 0; var_361_int = 0; // 0x1085 PushV
	var_361_int = 9; // 0x1086 MovI
	func_3581(var_360_bool, var_361_int); // 0x1087 NEW_2
	if(var_360_bool == 0) goto Label_4241; // 0x1089 JumpB
	var_362_int = 0; var_363_object = Obj(); // 0x108a PushV
	var_363_object = var_49_object; // 0x108b Mov
	TaskCall(6); // 0x108c TaskCall
	func_1721(var_364_object, var_362_int, var_363_object); // 0x108d NEW_2
	TaskReturn(); // 0x108e TaskReturn
	return 2; // 0x1090 Return
	
Label_4241:
	var_438_bool = 0; var_439_int = 0; // 0x1091 PushV
	var_439_int = 11; // 0x1092 MovI
	func_3581(var_438_bool, var_439_int); // 0x1093 NEW_2
	if(var_438_bool == 0) goto Label_4253; // 0x1095 JumpB
	var_440_int = 0; var_441_object = Obj(); // 0x1096 PushV
	var_441_object = var_49_object; // 0x1097 Mov
	TaskCall(2); // 0x1098 TaskCall
	func_433(var_442_object, var_440_int, var_441_object); // 0x1099 NEW_2
	TaskReturn(); // 0x109a TaskReturn
	return 2; // 0x109c Return
	
Label_4253:
	var_604_bool = 0; var_605_int = 0; // 0x109d PushV
	var_605_int = 12; // 0x109e MovI
	func_3581(var_604_bool, var_605_int); // 0x109f NEW_2
	if(var_604_bool == 0) goto Label_4265; // 0x10a1 JumpB
	var_606_int = 0; var_607_object = Obj(); // 0x10a2 PushV
	var_607_object = var_49_object; // 0x10a3 Mov
	TaskCall(8); // 0x10a4 TaskCall
	func_2216(var_608_object, var_606_int, var_607_object); // 0x10a5 NEW_2
	TaskReturn(); // 0x10a6 TaskReturn
	return 2; // 0x10a8 Return
	
Label_4265:
	var_688_int = 0; var_689_object = Obj(); // 0x10a9 PushV
	var_689_object = var_49_object; // 0x10aa Mov
	TaskCall(10); // 0x10ab TaskCall
	func_2604(var_690_object, var_688_int, var_689_object); // 0x10ac NEW_2
	TaskReturn(); // 0x10ad TaskReturn
	return 2; // 0x10af Return
}


func_3693()
{
	func_4061(); // 0xe6f NEW_2
	var_109_bool = 0; var_110_string = ""; var_111_string = ""; // 0xe71 PushV
	var_110_string = "quest_k11_01"; // 0xe72 MovS
	var_111_string = "completed"; // 0xe73 MovS
	func_3552(var_109_bool, var_110_string, var_111_string); // 0xe74 NEW_2
	return 0; // 0xe76 Return
}


func_3439(var_315_int, var_316_string)
{
	var_317_int = 0; var_318_int = 0; // 0xd6f PushV
	GetVariable(var_316_string, var_318_int); // 0xd70 Func
	var_315_int = var_318_int; // 0xd72 Mov
	return 2; // 0xd73 Return
}


func_3955(var_658_bool)
{
	var_660_int = 0; var_661_string = ""; // 0xf74 PushV
	var_661_string = "ook12Block1"; // 0xf75 MovS
	func_3439(var_660_int, var_661_string); // 0xf76 NEW_2
	var_662_int = 0; // 0xf78 PushI
	var_663_bool = var_660_int == var_662_int; // 0xf79 Eq
	if(var_663_bool == 0) goto Label_3965; // 0xf7a JumpB
	var_658_bool = 1; // 0xf7b MovB
	return 0; // 0xf7c Return
	
Label_3965:
	var_658_bool = 0; // 0xf7d MovB
	return 0; // 0xf7e Return
}


func_3444(var_152_int, var_153_int)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0xd74 PushV
	CreateIntVector(var_155_object); // 0xd75 Func
	add(var_152_int); // 0xd77 ObjFunc
	add(var_153_int); // 0xd79 ObjFunc
	var_156_int = 3; // 0xd7b PushI
	SendWorldWndMessage(var_156_int, var_155_object); // 0xd7c Func
	return 2; // 0xd7e Return
}


func_3703()
{
	func_4087(); // 0xe79 NEW_2
	var_62_bool = 0; var_63_string = ""; var_64_string = ""; // 0xe7b PushV
	var_63_string = "quest_k9_01"; // 0xe7c MovS
	var_64_string = "completed"; // 0xe7d MovS
	func_3552(var_62_bool, var_63_string, var_64_string); // 0xe7e NEW_2
	return 0; // 0xe80 Return
}


func_2685(var_0_object, var_1_object, var_2_object, var_3_string, var_712_object, var_713_object)
{
	var_0_object = var_713_object; // 0xa7e TMov
	var_1_object = var_712_object; // 0xa7f TMov
	var_3_string = 0; // 0xa80 TMovB
	var_718_int = 1; // 0xa81 PushI
	if(var_718_int == 0) goto Label_2713; // 0xa82 JumpB
	var_719_string = ""; // 0xa83 PushV
	var_719_string = "Neutral"; // 0xa84 MovS
	func_2743(var_713_object, var_719_string); // 0xa85 NEW_2
	var_727_int = 540545; // 0xa87 PushI
	SetMessage(var_727_int); // 0xa88 TObjFunc
	ClearReplies(); // 0xa8a TObjFunc
	var_728_int = 540546; // 0xa8c PushI
	var_729_int = -1; // 0xa8d PushI
	var_730_int = 42555; // 0xa8e PushI
	AddReply(var_728_int, var_729_int, var_730_int); // 0xa8f TObjFunc
	var_731_int = 540798; // 0xa91 PushI
	var_732_int = -1; // 0xa92 PushI
	var_733_int = 42847; // 0xa93 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xa94 TObjFunc
	goto Label_2713; // 0xa96 Jump
	
Label_2713:
	var_734_bool = 0; // 0xa99 PushV
	func_3619(var_734_bool); // 0xa9a NEW_2
	if(var_734_bool == 0) goto Label_2728; // 0xa9c JumpB
	
Label_2717:
	lshWaitForAnimEnd(); // 0xa9d Func
	var_735_string = var_3_string; // 0xa9f PushT
	if(var_735_string == 0) goto Label_2722; // 0xaa0 JumpB
	goto Label_2727; // 0xaa1 Jump
	
Label_2727:
	goto Label_2742; // 0xaa7 Jump
	
Label_2742:
	return 0; // 0xab6 Return
	
Label_2722:
	var_736_string = ""; // 0xaa2 PushV
	var_736_string = var_2_object; // 0xaa3 MovT
	func_3359(var_736_string); // 0xaa4 NEW_2
	goto Label_2717; // 0xaa6 Jump
	
Label_2728:
	var_737_string = "all"; // 0xaa8 PushS
	var_738_string = "idle"; // 0xaa9 PushS
	PlayAnimation(var_737_string, var_738_string); // 0xaaa Func
	
Label_2732:
	WaitForAnimEnd(); // 0xaac Func
	var_739_string = var_3_string; // 0xaae PushT
	if(var_739_string == 0) goto Label_2737; // 0xaaf JumpB
	goto Label_2742; // 0xab0 Jump
	
Label_2737:
	var_740_string = "all"; // 0xab1 PushS
	var_741_string = "idle"; // 0xab2 PushS
	PlayAnimation(var_740_string, var_741_string); // 0xab3 Func
	goto Label_2732; // 0xab5 Jump
}


func_3967(var_639_bool)
{
	var_641_int = 0; // 0xf80 PushV
	func_3573(var_641_int); // 0xf81 NEW_2
	var_646_int = 19; // 0xf83 PushI
	var_647_bool = var_641_int >= var_646_int; // 0xf84 GE
	if(var_647_bool == 0) goto Label_3976; // 0xf85 JumpB
	var_639_bool = 1; // 0xf86 MovB
	return 0; // 0xf87 Return
	
Label_3976:
	var_639_bool = 0; // 0xf88 MovB
	return 0; // 0xf89 Return
}


func_3456(var_139_object, var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0xd80 PushV
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0; // 0xd81 PushV
	var_143_object = var_139_object; // 0xd82 Mov
	var_144_string = "money"; // 0xd83 MovS
	var_145_int = var_140_int; // 0xd84 Mov
	func_3105(var_144_string, var_145_int); // 0xd85 NEW_2
	var_149_int = 0; // 0xd87 PushI
	var_150_bool = var_140_int > var_149_int; // 0xd88 GT
	if(var_150_bool == 0) goto Label_3474; // 0xd89 JumpB
	var_151_string = "Money"; // 0xd8a PushS
	GetInvItemByName(var_142_int, var_151_string); // 0xd8b Func
	var_152_int = 0; var_153_int = 0; // 0xd8d PushV
	var_152_int = var_142_int; // 0xd8e Mov
	var_153_int = var_140_int; // 0xd8f Mov
	func_3444(var_152_int, var_153_int); // 0xd90 NEW_2
	
Label_3474:
	return 2; // 0xd92 Return
}


func_3713()
{
	var_159_string = "playsound"; // 0xe82 PushS
	var_160_string = "giveitem"; // 0xe83 PushS
	TriggerWorld(var_159_string, var_160_string); // 0xe84 Func
	return 0; // 0xe86 Return
}


func_3204()
{
	var_271_bool = 0; var_272_bool = 0; // 0xc84 PushV
	CameraSwitchToNormal(); // 0xc85 Func
	var_273_bool = 0; // 0xc87 PushV
	func_3619(var_273_bool); // 0xc88 NEW_2
	if(var_273_bool == 0) goto Label_3212; // 0xc8a JumpB
	goto Label_3220; // 0xc8b Jump
	
Label_3220:
	return 2; // 0xc94 Return
	
Label_3212:
	var_274_string = "head"; // 0xc8c PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0xc8d Func
	var_275_bool = var_272_bool; // 0xc8f Push
	if(var_275_bool == 0) goto Label_3220; // 0xc90 JumpB
	var_276_string = "head"; // 0xc91 PushS
	UnlookAsync(var_276_string); // 0xc92 Func
}


func_3719()
{
	func_4074(); // 0xe89 NEW_2
	return 0; // 0xe8b Return
}


func_3978(var_501_bool)
{
	var_503_int = 0; var_504_int = 0; // 0xf8a PushV
	var_505_string = "k11q01SoulCount"; // 0xf8b PushS
	GetVariable(var_505_string, var_504_int); // 0xf8c Func
	var_506_int = 7; // 0xf8e PushI
	var_501_bool = var_504_int >= var_506_int; // 0xf8f GE2
	return 2; // 0xf90 Return
}


func_3724()
{
	var_116_string = "ook11Block1"; // 0xe8d PushS
	var_117_int = 1; // 0xe8e PushI
	SetVariable(var_116_string, var_117_int); // 0xe8f Func
	return 0; // 0xe91 Return
}


func_3985(var_520_bool)
{
	var_522_bool = 0; // 0xf92 PushV
	func_4175(var_522_bool); // 0xf93 NEW_2
	var_520_bool = var_522_bool; // 0xf94 Mov
	return 0; // 0xf96 Return
}


func_3730()
{
	var_122_string = "ook11Block2"; // 0xe93 PushS
	var_123_int = 1; // 0xe94 PushI
	SetVariable(var_122_string, var_123_int); // 0xe95 Func
	return 0; // 0xe97 Return
}


func_3475(var_210_object, var_211_int)
{
	var_212_int = 0; var_213_int = 0; var_214_bool = 0; var_215_int = 0; var_216_int = 0; var_217_bool = 0; // 0xd93 PushV
	GetItemID(var_215_int); // 0xd94 ObjFunc
	var_218_string = "Category"; // 0xd96 PushS
	GetInvItemProperty(var_216_int, var_215_int, var_218_string); // 0xd97 Func
	AddItem(var_217_bool, var_210_object, var_216_int, var_211_int); // 0xd99 ObjFunc
	var_219_bool = var_217_bool == 0; // 0xd9b Not
	if(var_219_bool == 0) goto Label_3488; // 0xd9c JumpB
	DropItems(var_210_object, var_211_int); // 0xd9d ObjFunc
	goto Label_3493; // 0xd9f Jump
	
Label_3493:
	return 6; // 0xda5 Return
	
Label_3488:
	var_220_int = 0; var_221_int = 0; // 0xda0 PushV
	var_220_int = var_215_int; // 0xda1 Mov
	var_221_int = var_211_int; // 0xda2 Mov
	func_3444(var_220_int, var_221_int); // 0xda3 NEW_2
}


func_3221(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xc95 PushV
	var_134_string = "voice_common"; // 0xc96 PushS
	GetVariable(var_134_string, var_132_int); // 0xc97 Func
	var_135_int = var_132_int; // 0xc99 Push
	if(var_135_int == 0) goto Label_3259; // 0xc9a JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xc9b PushV
	var_137_object = var_126_object; // 0xc9c Mov
	func_3279(var_137_object); // 0xc9d NEW_2
	var_166_bool = var_136_bool == 0; // 0xc9f Not
	if(var_166_bool == 0) goto Label_3241; // 0xca0 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xca1 PushV
	var_168_object = var_126_object; // 0xca2 Mov
	func_3316(var_168_object); // 0xca3 NEW_2
	var_202_bool = var_167_bool == 0; // 0xca5 Not
	if(var_202_bool == 0) goto Label_3241; // 0xca6 JumpB
	var_125_bool = 0; // 0xca7 MovB
	return 4; // 0xca8 Return
	
Label_3241:
	var_203_int = 2; // 0xca9 PushI
	irand(var_133_int, var_203_int); // 0xcaa Func
	var_204_int = var_133_int; // 0xcac Push
	if(var_204_int == 0) goto Label_3254; // 0xcad JumpB
	var_205_string = "voice_common"; // 0xcae PushS
	var_206_int = 1; // 0xcaf PushI
	var_207_int = var_132_int + var_206_int; // 0xcb0 Add
	var_208_int = 3; // 0xcb1 PushI
	var_209_int = var_207_int / var_208_int; // 0xcb2 Mod
	SetVariable(var_205_string, var_209_int); // 0xcb3 Func
	goto Label_3258; // 0xcb5 Jump
	
Label_3258:
	goto Label_3277; // 0xcba Jump
	
Label_3277:
	var_125_bool = 1; // 0xccd MovB
	return 4; // 0xcce Return
	
Label_3254:
	var_210_string = "voice_common"; // 0xcb6 PushS
	var_211_int = 0; // 0xcb7 PushI
	SetVariable(var_210_string, var_211_int); // 0xcb8 Func
	
Label_3259:
	var_212_bool = 0; var_213_object = Obj(); // 0xcbb PushV
	var_213_object = var_126_object; // 0xcbc Mov
	func_3316(var_213_object); // 0xcbd NEW_2
	var_214_bool = var_212_bool == 0; // 0xcbf Not
	if(var_214_bool == 0) goto Label_3273; // 0xcc0 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xcc1 PushV
	var_216_object = var_126_object; // 0xcc2 Mov
	func_3279(var_216_object); // 0xcc3 NEW_2
	var_217_bool = var_215_bool == 0; // 0xcc5 Not
	if(var_217_bool == 0) goto Label_3273; // 0xcc6 JumpB
	var_125_bool = 0; // 0xcc7 MovB
	return 4; // 0xcc8 Return
	
Label_3273:
	var_218_string = "voice_common"; // 0xcc9 PushS
	var_219_int = 1; // 0xcca PushI
	SetVariable(var_218_string, var_219_int); // 0xccb Func
}


func_3991(var_530_bool)
{
	var_532_bool = 0; // 0xf98 PushV
	func_4195(var_532_bool); // 0xf99 NEW_2
	var_530_bool = var_532_bool; // 0xf9a Mov
	return 0; // 0xf9c Return
}


func_3736()
{
	var_226_string = "ook11Block3"; // 0xe99 PushS
	var_227_int = 1; // 0xe9a PushI
	SetVariable(var_226_string, var_227_int); // 0xe9b Func
	return 0; // 0xe9d Return
}


func_3997(var_557_bool)
{
	var_559_bool = 0; // 0xf9e PushV
	func_4183(var_559_bool); // 0xf9f NEW_2
	var_557_bool = var_559_bool; // 0xfa0 Mov
	return 0; // 0xfa2 Return
}


func_3742()
{
	var_76_string = "ook9Block1"; // 0xe9f PushS
	var_77_int = 1; // 0xea0 PushI
	SetVariable(var_76_string, var_77_int); // 0xea1 Func
	return 0; // 0xea3 Return
}


func_4003(var_577_bool)
{
	var_579_bool = 0; // 0xfa4 PushV
	func_4189(var_579_bool); // 0xfa5 NEW_2
	var_577_bool = var_579_bool; // 0xfa6 Mov
	return 0; // 0xfa8 Return
}


func_3748()
{
	var_39_string = "ook12Block1"; // 0xea5 PushS
	var_40_int = 1; // 0xea6 PushI
	SetVariable(var_39_string, var_40_int); // 0xea7 Func
	return 0; // 0xea9 Return
}


func_3494(var_204_object, var_205_string, var_206_int)
{
	var_207_object = Obj(); var_208_object = Obj(); // 0xda6 PushV
	CreateInvItem(var_208_object); // 0xda7 Func
	SetItemName(var_205_string); // 0xda9 ObjFunc
	var_209_object = Obj(); var_210_object = Obj(); var_211_int = 0; // 0xdab PushV
	var_209_object = var_204_object; // 0xdac Mov
	var_210_object = var_208_object; // 0xdad Mov
	var_211_int = var_206_int; // 0xdae Mov
	func_3475(var_210_object, var_211_int); // 0xdaf NEW_2
	return 2; // 0xdb1 Return
}


func_2216(var_0_object, var_606_int, var_607_object)
{
	var_609_object = Obj(); var_610_bool = 0; var_611_int = 0; var_612_bool = 0; var_613_object = Obj(); var_614_bool = 0; var_615_int = 0; var_616_bool = 0; // 0x8a8 PushV
	var_0_object = var_607_object; // 0x8a9 TMov
	var_617_bool = 0; var_618_object = Obj(); var_619_float = 0; // 0x8aa PushV
	var_618_object = var_607_object; // 0x8ab Mov
	var_619_float = 70.0; // 0x8ac MovF
	func_3136(var_618_object, var_619_float); // 0x8ad NEW_2
	var_620_bool = var_617_bool == 0; // 0x8af Not
	if(var_620_bool == 0) goto Label_2227; // 0x8b0 JumpB
	var_606_int = -2; // 0x8b1 MovI
	return 8; // 0x8b2 Return
	
Label_2227:
	CreateDialog(var_613_object); // 0x8b3 Func
	var_621_int = 0; // 0x8b5 PushV
	func_3613(var_621_int); // 0x8b6 NEW_2
	SetNPCName(var_621_int); // 0x8b8 ObjFunc
	var_622_int = 0; // 0x8ba PushV
	func_3611(var_622_int); // 0x8bb NEW_2
	SetNPCDescription(var_622_int); // 0x8bd ObjFunc
	var_623_string = ""; // 0x8bf PushV
	func_3615(var_623_string); // 0x8c0 NEW_2
	SetPhoto(var_623_string); // 0x8c2 ObjFunc
	var_624_string = ""; // 0x8c4 PushV
	func_3617(var_624_string); // 0x8c5 NEW_2
	SetPhoto2(var_624_string); // 0x8c7 ObjFunc
	var_625_int = 0; // 0x8c9 PushV
	func_4141(var_625_int); // 0x8ca NEW_2
	SetPlayerName(var_625_int); // 0x8cc ObjFunc
	var_615_int = -1; // 0x8ce MovI
	IsOverrideActive(var_614_bool); // 0x8cf Func
	var_626_bool = var_614_bool; // 0x8d1 Push
	if(var_626_bool == 0) goto Label_2261; // 0x8d2 JumpB
	var_606_int = -2; // 0x8d3 MovI
	return 8; // 0x8d4 Return
	
Label_2261:
	DoDialog(var_613_object); // 0x8d5 Func
	var_627_bool = 0; var_628_object = Obj(); // 0x8d7 PushV
	var_629_object = Obj(); // 0x8d8 PushV
	func_3412(var_629_object); // 0x8d9 NEW_2
	var_628_object = var_629_object; // 0x8da Mov
	func_3221(var_627_bool, var_628_object); // 0x8dc NEW_2
	var_630_object = Obj(); var_631_object = Obj(); // 0x8de PushV
	var_630_object = var_607_object; // 0x8df Mov
	var_631_object = var_613_object; // 0x8e0 Mov
	TaskCall(9); // 0x8e1 TaskCall
	func_2297(var_632_object, var_633_object, var_634_string, var_635_bool, var_630_object, var_631_object); // 0x8e2 NEW_2
	TaskReturn(); // 0x8e3 TaskReturn
	IsDialogEnd(var_616_bool); // 0x8e5 ObjFunc
	
Label_2279:
	var_686_bool = var_616_bool == 0; // 0x8e7 Not
	if(var_686_bool == 0) goto Label_2286; // 0x8e8 JumpB
	sync(); // 0x8e9 Func
	IsDialogEnd(var_616_bool); // 0x8eb ObjFunc
	goto Label_2279; // 0x8ed Jump
	
Label_2286:
	var_687_object = Obj(); // 0x8ee PushV
	var_687_object = var_607_object; // 0x8ef Mov
	func_3204(); // 0x8f0 NEW_2
	StopDialog(var_613_object); // 0x8f2 Func
	GetReturnValue(var_615_int); // 0x8f4 ObjFunc
	var_606_int = var_615_int; // 0x8f6 Mov
	return 8; // 0x8f7 Return
}


func_169(var_2_object, var_321_string)
{
	var_322_bool = 0; // 0xaa PushV
	func_3619(var_322_bool); // 0xab NEW_2
	var_323_bool = var_322_bool == 0; // 0xad Not
	if(var_323_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_324_bool = var_321_string == var_2_object; // 0xb0 Eq
	if(var_324_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_325_string = ""; var_326_bool = 0; // 0xb3 PushV
	var_325_string = var_321_string; // 0xb4 Mov
	var_327_string = ""; // 0xb5 PushS
	var_328_bool = var_321_string == var_327_string; // 0xb6 Eq
	if(var_328_bool == 0) goto Label_186; // 0xb7 JumpB
	var_326_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_3375(var_325_string, var_326_bool); // 0xbb NEW_2
	var_2_object = var_321_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_326_bool = 1; // 0xba MovB
}


func_3754(var_136_object)
{
	var_138_string = "money 5000 is given"; // 0xeab PushS
	Trace(var_138_string); // 0xeac Func
	var_139_object = Obj(); var_140_int = 0; // 0xeae PushV
	var_139_object = var_136_object; // 0xeaf Mov
	var_140_int = 5000; // 0xeb0 MovI
	func_3456(var_139_object, var_140_int); // 0xeb1 NEW_2
	return 0; // 0xeb3 Return
}


func_4009()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xfa9 PushV
	var_43_int = 450; // 0xfaa PushI
	var_44_int = 1; // 0xfab PushI
	var_45_int = 527008; // 0xfac PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xfad Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xfaf PushV
	var_47_object = var_42_object; // 0xfb0 Mov
	var_48_int = 447; // 0xfb1 MovI
	func_4113(var_46_bool, var_47_object, var_48_int); // 0xfb2 NEW_2
	return 2; // 0xfb4 Return
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
	func_3594(var_49_int); // 0xbb5 NEW_2
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
	func_3587(var_76_string, var_77_int); // 0xbd9 NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0xbdb Func
	WaitForAnimEnd(var_46_bool); // 0xbdd Func
	var_78_bool = var_46_bool == 0; // 0xbdf Not
	if(var_78_bool == 0) goto Label_3042; // 0xbe0 JumpB
	goto Label_3053; // 0xbe1 Jump
}


func_433(var_0_object, var_440_int, var_441_object)
{
	var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0; var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0; // 0x1b1 PushV
	var_0_object = var_441_object; // 0x1b2 TMov
	var_451_bool = 0; var_452_object = Obj(); var_453_float = 0; // 0x1b3 PushV
	var_452_object = var_441_object; // 0x1b4 Mov
	var_453_float = 70.0; // 0x1b5 MovF
	func_3136(var_452_object, var_453_float); // 0x1b6 NEW_2
	var_454_bool = var_451_bool == 0; // 0x1b8 Not
	if(var_454_bool == 0) goto Label_444; // 0x1b9 JumpB
	var_440_int = -2; // 0x1ba MovI
	return 8; // 0x1bb Return
	
Label_444:
	CreateDialog(var_447_object); // 0x1bc Func
	var_455_int = 0; // 0x1be PushV
	func_3613(var_455_int); // 0x1bf NEW_2
	SetNPCName(var_455_int); // 0x1c1 ObjFunc
	var_456_int = 0; // 0x1c3 PushV
	func_3611(var_456_int); // 0x1c4 NEW_2
	SetNPCDescription(var_456_int); // 0x1c6 ObjFunc
	var_457_string = ""; // 0x1c8 PushV
	func_3615(var_457_string); // 0x1c9 NEW_2
	SetPhoto(var_457_string); // 0x1cb ObjFunc
	var_458_string = ""; // 0x1cd PushV
	func_3617(var_458_string); // 0x1ce NEW_2
	SetPhoto2(var_458_string); // 0x1d0 ObjFunc
	var_459_int = 0; // 0x1d2 PushV
	func_4141(var_459_int); // 0x1d3 NEW_2
	SetPlayerName(var_459_int); // 0x1d5 ObjFunc
	var_449_int = -1; // 0x1d7 MovI
	IsOverrideActive(var_448_bool); // 0x1d8 Func
	var_460_bool = var_448_bool; // 0x1da Push
	if(var_460_bool == 0) goto Label_478; // 0x1db JumpB
	var_440_int = -2; // 0x1dc MovI
	return 8; // 0x1dd Return
	
Label_478:
	DoDialog(var_447_object); // 0x1de Func
	var_461_bool = 0; var_462_object = Obj(); // 0x1e0 PushV
	var_463_object = Obj(); // 0x1e1 PushV
	func_3412(var_463_object); // 0x1e2 NEW_2
	var_462_object = var_463_object; // 0x1e3 Mov
	func_3221(var_461_bool, var_462_object); // 0x1e5 NEW_2
	var_464_object = Obj(); var_465_object = Obj(); // 0x1e7 PushV
	var_464_object = var_441_object; // 0x1e8 Mov
	var_465_object = var_447_object; // 0x1e9 Mov
	TaskCall(3); // 0x1ea TaskCall
	func_514(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object); // 0x1eb NEW_2
	TaskReturn(); // 0x1ec TaskReturn
	IsDialogEnd(var_450_bool); // 0x1ee ObjFunc
	
Label_496:
	var_602_bool = var_450_bool == 0; // 0x1f0 Not
	if(var_602_bool == 0) goto Label_503; // 0x1f1 JumpB
	sync(); // 0x1f2 Func
	IsDialogEnd(var_450_bool); // 0x1f4 ObjFunc
	goto Label_496; // 0x1f6 Jump
	
Label_503:
	var_603_object = Obj(); // 0x1f7 PushV
	var_603_object = var_441_object; // 0x1f8 Mov
	func_3204(); // 0x1f9 NEW_2
	StopDialog(var_447_object); // 0x1fb Func
	GetReturnValue(var_449_int); // 0x1fd ObjFunc
	var_440_int = var_449_int; // 0x1ff Mov
	return 8; // 0x200 Return
}


func_690(var_2_object, var_471_string)
{
	var_472_bool = 0; // 0x2b3 PushV
	func_3619(var_472_bool); // 0x2b4 NEW_2
	var_473_bool = var_472_bool == 0; // 0x2b6 Not
	if(var_473_bool == 0) goto Label_697; // 0x2b7 JumpB
	return 0; // 0x2b8 Return
	
Label_697:
	var_474_bool = var_471_string == var_2_object; // 0x2b9 Eq
	if(var_474_bool == 0) goto Label_700; // 0x2ba JumpB
	return 0; // 0x2bb Return
	
Label_700:
	var_475_string = ""; var_476_bool = 0; // 0x2bc PushV
	var_475_string = var_471_string; // 0x2bd Mov
	var_477_string = ""; // 0x2be PushS
	var_478_bool = var_471_string == var_477_string; // 0x2bf Eq
	if(var_478_bool == 0) goto Label_707; // 0x2c0 JumpB
	var_476_bool = 0; // 0x2c1 MovB
	goto Label_708; // 0x2c2 Jump
	
Label_708:
	func_3375(var_475_string, var_476_bool); // 0x2c4 NEW_2
	var_2_object = var_471_string; // 0x2c6 TMov
	return 0; // 0x2c7 Return
	
Label_707:
	var_476_bool = 1; // 0x2c3 MovB
}


func_3507(var_163_bool, var_164_object, var_165_float)
{
	var_166_bool = var_164_object == 0; // 0xdb4 Not
	if(var_166_bool == 0) goto Label_3512; // 0xdb5 JumpB
	var_163_bool = 0; // 0xdb6 MovB
	return 0; // 0xdb7 Return
	
Label_3512:
	var_167_int = 0; // 0xdb8 PushI
	var_168_bool = var_165_float > var_167_int; // 0xdb9 GT
	if(var_168_bool == 0) goto Label_3519; // 0xdba JumpB
	var_169_int = 8; // 0xdbb PushI
	SendWorldWndMessage(var_169_int); // 0xdbc Func
	goto Label_3528; // 0xdbe Jump
	
Label_3528:
	var_170_float = 0; // 0xdc8 PushV
	var_170_float = var_165_float; // 0xdc9 Mov
	func_3542(var_170_float); // 0xdca NEW_2
	var_174_bool = 0; var_175_object = Obj(); var_176_string = ""; var_177_float = 0; var_178_float = 0; var_179_float = 0; // 0xdcc PushV
	var_175_object = var_164_object; // 0xdcd Mov
	var_176_string = "reputation"; // 0xdce MovS
	var_177_float = var_165_float; // 0xdcf Mov
	var_178_float = 0; // 0xdd0 MovI
	var_179_float = 1; // 0xdd1 MovI
	func_3083(var_174_bool, var_175_object, var_176_string, var_177_float, var_178_float, var_179_float); // 0xdd2 NEW_2
	var_163_bool = 1; // 0xdd4 MovB
	return 0; // 0xdd5 Return
	
Label_3519:
	var_198_int = 0; // 0xdbf PushI
	var_199_bool = var_165_float < var_198_int; // 0xdc0 LT
	if(var_199_bool == 0) goto Label_3526; // 0xdc1 JumpB
	var_200_int = 9; // 0xdc2 PushI
	SendWorldWndMessage(var_200_int); // 0xdc3 Func
	goto Label_3528; // 0xdc5 Jump
	
Label_3526:
	var_163_bool = 0; // 0xdc6 MovB
	return 0; // 0xdc7 Return
}


func_3764(var_201_object)
{
	var_203_string = "delta_pills is given"; // 0xeb5 PushS
	Trace(var_203_string); // 0xeb6 Func
	var_204_object = Obj(); var_205_string = ""; var_206_int = 0; // 0xeb8 PushV
	var_204_object = var_201_object; // 0xeb9 Mov
	var_205_string = "delta_pills"; // 0xeba MovS
	var_206_int = 1; // 0xebb MovI
	func_3494(var_204_object, var_205_string, var_206_int); // 0xebc NEW_2
	return 0; // 0xebe Return
}


func_1459(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x5b3 PushV
	var_0_object = var_55_object; // 0x5b4 TMov
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0; // 0x5b5 PushV
	var_66_object = var_55_object; // 0x5b6 Mov
	var_67_float = 70.0; // 0x5b7 MovF
	func_3136(var_66_object, var_67_float); // 0x5b8 NEW_2
	var_111_bool = var_65_bool == 0; // 0x5ba Not
	if(var_111_bool == 0) goto Label_1470; // 0x5bb JumpB
	var_54_int = -2; // 0x5bc MovI
	return 8; // 0x5bd Return
	
Label_1470:
	CreateDialog(var_61_object); // 0x5be Func
	var_112_int = 0; // 0x5c0 PushV
	func_3613(var_112_int); // 0x5c1 NEW_2
	SetNPCName(var_112_int); // 0x5c3 ObjFunc
	var_113_int = 0; // 0x5c5 PushV
	func_3611(var_113_int); // 0x5c6 NEW_2
	SetNPCDescription(var_113_int); // 0x5c8 ObjFunc
	var_114_string = ""; // 0x5ca PushV
	func_3615(var_114_string); // 0x5cb NEW_2
	SetPhoto(var_114_string); // 0x5cd ObjFunc
	var_115_string = ""; // 0x5cf PushV
	func_3617(var_115_string); // 0x5d0 NEW_2
	SetPhoto2(var_115_string); // 0x5d2 ObjFunc
	var_116_int = 0; // 0x5d4 PushV
	func_4141(var_116_int); // 0x5d5 NEW_2
	SetPlayerName(var_116_int); // 0x5d7 ObjFunc
	var_63_int = -1; // 0x5d9 MovI
	IsOverrideActive(var_62_bool); // 0x5da Func
	var_124_bool = var_62_bool; // 0x5dc Push
	if(var_124_bool == 0) goto Label_1504; // 0x5dd JumpB
	var_54_int = -2; // 0x5de MovI
	return 8; // 0x5df Return
	
Label_1504:
	DoDialog(var_61_object); // 0x5e0 Func
	var_125_bool = 0; var_126_object = Obj(); // 0x5e2 PushV
	var_127_object = Obj(); // 0x5e3 PushV
	func_3412(var_127_object); // 0x5e4 NEW_2
	var_126_object = var_127_object; // 0x5e5 Mov
	func_3221(var_125_bool, var_126_object); // 0x5e7 NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x5e9 PushV
	var_220_object = var_55_object; // 0x5ea Mov
	var_221_object = var_61_object; // 0x5eb Mov
	TaskCall(5); // 0x5ec TaskCall
	func_1540(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object); // 0x5ed NEW_2
	TaskReturn(); // 0x5ee TaskReturn
	IsDialogEnd(var_64_bool); // 0x5f0 ObjFunc
	
Label_1522:
	var_269_bool = var_64_bool == 0; // 0x5f2 Not
	if(var_269_bool == 0) goto Label_1529; // 0x5f3 JumpB
	sync(); // 0x5f4 Func
	IsDialogEnd(var_64_bool); // 0x5f6 ObjFunc
	goto Label_1522; // 0x5f8 Jump
	
Label_1529:
	var_270_object = Obj(); // 0x5f9 PushV
	var_270_object = var_55_object; // 0x5fa Mov
	func_3204(); // 0x5fb NEW_2
	StopDialog(var_61_object); // 0x5fd Func
	GetReturnValue(var_63_int); // 0x5ff ObjFunc
	var_54_int = var_63_int; // 0x601 Mov
	return 8; // 0x602 Return
}


func_4022()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0xfb6 PushV
	var_81_int = 452; // 0xfb7 PushI
	var_82_int = 1; // 0xfb8 PushI
	var_83_int = 527010; // 0xfb9 PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0xfba Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0xfbc PushV
	var_85_object = var_80_object; // 0xfbd Mov
	var_86_int = 447; // 0xfbe MovI
	func_4113(var_84_bool, var_85_object, var_86_int); // 0xfbf NEW_2
	return 2; // 0xfc1 Return
}


func_2743(var_2_object, var_719_string)
{
	var_720_bool = 0; // 0xab8 PushV
	func_3619(var_720_bool); // 0xab9 NEW_2
	var_721_bool = var_720_bool == 0; // 0xabb Not
	if(var_721_bool == 0) goto Label_2750; // 0xabc JumpB
	return 0; // 0xabd Return
	
Label_2750:
	var_722_bool = var_719_string == var_2_object; // 0xabe Eq
	if(var_722_bool == 0) goto Label_2753; // 0xabf JumpB
	return 0; // 0xac0 Return
	
Label_2753:
	var_723_string = ""; var_724_bool = 0; // 0xac1 PushV
	var_723_string = var_719_string; // 0xac2 Mov
	var_725_string = ""; // 0xac3 PushS
	var_726_bool = var_719_string == var_725_string; // 0xac4 Eq
	if(var_726_bool == 0) goto Label_2760; // 0xac5 JumpB
	var_724_bool = 0; // 0xac6 MovB
	goto Label_2761; // 0xac7 Jump
	
Label_2761:
	func_3375(var_723_string, var_724_bool); // 0xac9 NEW_2
	var_2_object = var_719_string; // 0xacb TMov
	return 0; // 0xacc Return
	
Label_2760:
	var_724_bool = 1; // 0xac8 MovB
}


func_1721(var_0_object, var_362_int, var_363_object)
{
	var_365_object = Obj(); var_366_bool = 0; var_367_int = 0; var_368_bool = 0; var_369_object = Obj(); var_370_bool = 0; var_371_int = 0; var_372_bool = 0; // 0x6b9 PushV
	var_0_object = var_363_object; // 0x6ba TMov
	var_373_bool = 0; var_374_object = Obj(); var_375_float = 0; // 0x6bb PushV
	var_374_object = var_363_object; // 0x6bc Mov
	var_375_float = 70.0; // 0x6bd MovF
	func_3136(var_374_object, var_375_float); // 0x6be NEW_2
	var_376_bool = var_373_bool == 0; // 0x6c0 Not
	if(var_376_bool == 0) goto Label_1732; // 0x6c1 JumpB
	var_362_int = -2; // 0x6c2 MovI
	return 8; // 0x6c3 Return
	
Label_1732:
	CreateDialog(var_369_object); // 0x6c4 Func
	var_377_int = 0; // 0x6c6 PushV
	func_3613(var_377_int); // 0x6c7 NEW_2
	SetNPCName(var_377_int); // 0x6c9 ObjFunc
	var_378_int = 0; // 0x6cb PushV
	func_3611(var_378_int); // 0x6cc NEW_2
	SetNPCDescription(var_378_int); // 0x6ce ObjFunc
	var_379_string = ""; // 0x6d0 PushV
	func_3615(var_379_string); // 0x6d1 NEW_2
	SetPhoto(var_379_string); // 0x6d3 ObjFunc
	var_380_string = ""; // 0x6d5 PushV
	func_3617(var_380_string); // 0x6d6 NEW_2
	SetPhoto2(var_380_string); // 0x6d8 ObjFunc
	var_381_int = 0; // 0x6da PushV
	func_4141(var_381_int); // 0x6db NEW_2
	SetPlayerName(var_381_int); // 0x6dd ObjFunc
	var_371_int = -1; // 0x6df MovI
	IsOverrideActive(var_370_bool); // 0x6e0 Func
	var_382_bool = var_370_bool; // 0x6e2 Push
	if(var_382_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_362_int = -2; // 0x6e4 MovI
	return 8; // 0x6e5 Return
	
Label_1766:
	DoDialog(var_369_object); // 0x6e6 Func
	var_383_bool = 0; var_384_object = Obj(); // 0x6e8 PushV
	var_385_object = Obj(); // 0x6e9 PushV
	func_3412(var_385_object); // 0x6ea NEW_2
	var_384_object = var_385_object; // 0x6eb Mov
	func_3221(var_383_bool, var_384_object); // 0x6ed NEW_2
	var_386_object = Obj(); var_387_object = Obj(); // 0x6ef PushV
	var_386_object = var_363_object; // 0x6f0 Mov
	var_387_object = var_369_object; // 0x6f1 Mov
	TaskCall(7); // 0x6f2 TaskCall
	func_1802(var_388_object, var_389_object, var_390_string, var_391_bool, var_386_object, var_387_object); // 0x6f3 NEW_2
	TaskReturn(); // 0x6f4 TaskReturn
	IsDialogEnd(var_372_bool); // 0x6f6 ObjFunc
	
Label_1784:
	var_436_bool = var_372_bool == 0; // 0x6f8 Not
	if(var_436_bool == 0) goto Label_1791; // 0x6f9 JumpB
	sync(); // 0x6fa Func
	IsDialogEnd(var_372_bool); // 0x6fc ObjFunc
	goto Label_1784; // 0x6fe Jump
	
Label_1791:
	var_437_object = Obj(); // 0x6ff PushV
	var_437_object = var_363_object; // 0x700 Mov
	func_3204(); // 0x701 NEW_2
	StopDialog(var_369_object); // 0x703 Func
	GetReturnValue(var_371_int); // 0x705 ObjFunc
	var_362_int = var_371_int; // 0x707 Mov
	return 8; // 0x708 Return
}


func_3775(var_637_bool, var_638_object)
{
	var_639_bool = 0; var_640_object = Obj(); // 0xec0 PushV
	var_640_object = var_638_object; // 0xec1 Mov
	func_3967(var_640_object); // 0xec2 NEW_2
	if(var_639_bool == 0) goto Label_3783; // 0xec4 JumpB
	var_637_bool = 1; // 0xec5 MovB
	return 0; // 0xec6 Return
	
Label_3783:
	var_637_bool = 0; // 0xec7 MovB
	return 0; // 0xec8 Return
}


func_4035()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xfc3 PushV
	var_43_int = 483; // 0xfc4 PushI
	var_44_int = 1; // 0xfc5 PushI
	var_45_int = 528050; // 0xfc6 PushI
	CreateDiaryEntry(var_42_object, var_43_int, var_44_int, var_45_int); // 0xfc7 Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0xfc9 PushV
	var_47_object = var_42_object; // 0xfca Mov
	var_48_int = 480; // 0xfcb MovI
	func_4113(var_46_bool, var_47_object, var_48_int); // 0xfcc NEW_2
	return 2; // 0xfce Return
}


func_3785(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0xeca PushV
	var_316_string = "k10q01"; // 0xecb MovS
	func_3439(var_315_int, var_316_string); // 0xecc NEW_2
	var_319_int = 2; // 0xece PushI
	var_320_bool = var_315_int == var_319_int; // 0xecf Eq
	if(var_320_bool == 0) goto Label_3795; // 0xed0 JumpB
	var_313_bool = 1; // 0xed1 MovB
	return 0; // 0xed2 Return
	
Label_3795:
	var_313_bool = 0; // 0xed3 MovB
	return 0; // 0xed4 Return
}


func_3279(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0xccf PushV
	var_143_string = "c"; // 0xcd0 MovS
	var_144_int = 0; // 0xcd1 MovI
	
Label_3282:
	var_148_int = 1; // 0xcd2 PushI
	if(var_148_int == 0) goto Label_3295; // 0xcd3 JumpB
	var_149_int = 1; // 0xcd4 PushI
	var_150_int = var_144_int + var_149_int; // 0xcd5 Add
	var_151_int = var_143_string + var_150_int; // 0xcd6 Add
	HasProperty(var_151_int, var_145_bool); // 0xcd7 ObjFunc
	var_152_bool = var_145_bool == 0; // 0xcd9 Not
	if(var_152_bool == 0) goto Label_3292; // 0xcda JumpB
	goto Label_3295; // 0xcdb Jump
	
Label_3295:
	var_153_bool = var_144_int == 0; // 0xcdf Not
	if(var_153_bool == 0) goto Label_3299; // 0xce0 JumpB
	var_136_bool = 0; // 0xce1 MovB
	return 10; // 0xce2 Return
	
Label_3299:
	var_146_int = 0; // 0xce3 MovI
	var_154_int = 1; // 0xce4 PushI
	var_155_bool = var_144_int > var_154_int; // 0xce5 GT
	if(var_155_bool == 0) goto Label_3305; // 0xce6 JumpB
	irand(var_146_int, var_144_int); // 0xce7 Func
	
Label_3305:
	var_156_int = 1; // 0xce9 PushI
	var_157_int = var_146_int + var_156_int; // 0xcea Add
	var_158_int = var_143_string + var_157_int; // 0xceb Add
	GetProperty(var_158_int, var_147_string); // 0xcec ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xcee PushV
	var_160_string = var_147_string; // 0xcef Mov
	func_3390(var_159_bool, var_160_string); // 0xcf0 NEW_2
	var_136_bool = var_159_bool; // 0xcf1 Mov
	return 10; // 0xcf3 Return
	
Label_3292:
	var_165_int = 1; // 0xcdc PushI
	var_144_int = var_144_int + var_165_int; // 0xcdd Add2
	goto Label_3282; // 0xcde Jump
}


func_4048()
{
	var_85_object = Obj(); var_86_object = Obj(); // 0xfd0 PushV
	var_87_int = 492; // 0xfd1 PushI
	var_88_int = 1; // 0xfd2 PushI
	var_89_int = 528059; // 0xfd3 PushI
	CreateDiaryEntry(var_86_object, var_87_int, var_88_int, var_89_int); // 0xfd4 Func
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0; // 0xfd6 PushV
	var_91_object = var_86_object; // 0xfd7 Mov
	var_92_int = 480; // 0xfd8 MovI
	func_4113(var_90_bool, var_91_object, var_92_int); // 0xfd9 NEW_2
	return 2; // 0xfdb Return
}


func_3797(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0xed6 PushV
	var_346_string = "k10q01"; // 0xed7 MovS
	func_3439(var_345_int, var_346_string); // 0xed8 NEW_2
	var_347_int = 4; // 0xeda PushI
	var_348_bool = var_345_int == var_347_int; // 0xedb Eq
	if(var_348_bool == 0) goto Label_3807; // 0xedc JumpB
	var_343_bool = 1; // 0xedd MovB
	return 0; // 0xede Return
	
Label_3807:
	var_343_bool = 0; // 0xedf MovB
	return 0; // 0xee0 Return
}


func_3542(var_170_float)
{
	var_171_object = Obj(); var_172_object = Obj(); // 0xdd6 PushV
	CreateFloatVector(var_172_object); // 0xdd7 Func
	add(var_170_float); // 0xdd9 ObjFunc
	var_173_int = 16; // 0xddb PushI
	SendWorldWndMessage(var_173_int, var_172_object); // 0xddc Func
	return 2; // 0xdde Return
}


func_4061()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0xfdd PushV
	var_103_int = 499; // 0xfde PushI
	var_104_int = 1; // 0xfdf PushI
	var_105_int = 528066; // 0xfe0 PushI
	CreateDiaryEntry(var_102_object, var_103_int, var_104_int, var_105_int); // 0xfe1 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0xfe3 PushV
	var_107_object = var_102_object; // 0xfe4 Mov
	var_108_int = 480; // 0xfe5 MovI
	func_4113(var_106_bool, var_107_object, var_108_int); // 0xfe6 NEW_2
	return 2; // 0xfe8 Return
}


func_3552(var_62_bool, var_63_string, var_64_string)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xde0 PushV
	FindActor(var_66_object, var_63_string); // 0xde1 Func
	var_67_bool = var_66_object == 0; // 0xde3 NullEq
	if(var_67_bool == 0) goto Label_3559; // 0xde4 JumpB
	var_62_bool = 0; // 0xde5 MovB
	return 2; // 0xde6 Return
	
Label_3559:
	Trigger(var_66_object, var_64_string); // 0xde7 Func
	var_62_bool = 1; // 0xde9 MovB
	return 2; // 0xdea Return
}


func_3809(var_480_bool)
{
	var_482_int = 0; var_483_string = ""; // 0xee2 PushV
	var_483_string = "k11q01"; // 0xee3 MovS
	func_3439(var_482_int, var_483_string); // 0xee4 NEW_2
	var_484_int = 1; // 0xee6 PushI
	var_485_bool = var_482_int == var_484_int; // 0xee7 Eq
	if(var_485_bool == 0) goto Label_3819; // 0xee8 JumpB
	var_480_bool = 1; // 0xee9 MovB
	return 0; // 0xeea Return
	
Label_3819:
	var_480_bool = 0; // 0xeeb MovB
	return 0; // 0xeec Return
}


func_4074()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xfea PushV
	var_130_int = 762; // 0xfeb PushI
	var_131_int = 2; // 0xfec PushI
	var_132_int = 539747; // 0xfed PushI
	CreateDiaryEntry(var_129_object, var_130_int, var_131_int, var_132_int); // 0xfee Func
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0; // 0xff0 PushV
	var_134_object = var_129_object; // 0xff1 Mov
	var_135_int = 757; // 0xff2 MovI
	func_4113(var_133_bool, var_134_object, var_135_int); // 0xff3 NEW_2
	return 2; // 0xff5 Return
}


func_3564(var_180_int)
{
	var_181_float = 0; var_182_float = 0; // 0xdec PushV
	GetGameTime(var_182_float); // 0xded Func
	var_183_int = 1; // 0xdef PushI
	var_184_int = 0; // 0xdf0 PushV
	var_185_int = 24; // 0xdf1 PushI
	var_184_int = var_182_float / var_182_float; // 0xdf2 Div2
	var_180_int = var_183_int + var_184_int; // 0xdf3 Add2
	return 2; // 0xdf4 Return
}


func_3821(var_489_bool)
{
	var_491_int = 0; var_492_string = ""; // 0xeee PushV
	var_492_string = "k11q01"; // 0xeef MovS
	func_3439(var_491_int, var_492_string); // 0xef0 NEW_2
	var_493_int = 8; // 0xef2 PushI
	var_494_bool = var_491_int == var_493_int; // 0xef3 Eq
	if(var_494_bool == 0) goto Label_3831; // 0xef4 JumpB
	var_489_bool = 1; // 0xef5 MovB
	return 0; // 0xef6 Return
	
Label_3831:
	var_489_bool = 0; // 0xef7 MovB
	return 0; // 0xef8 Return
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


func_3316(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xcf4 PushV
	var_179_string = "d"; // 0xcf5 PushS
	var_180_int = 0; // 0xcf6 PushV
	func_3564(var_180_int); // 0xcf7 NEW_2
	var_186_int = var_179_string + var_180_int; // 0xcf9 Add
	var_187_string = "m"; // 0xcfa PushS
	var_174_string = var_186_int + var_187_string; // 0xcfb Add2
	var_175_int = 0; // 0xcfc MovI
	
Label_3325:
	var_188_int = 1; // 0xcfd PushI
	if(var_188_int == 0) goto Label_3338; // 0xcfe JumpB
	var_189_int = 1; // 0xcff PushI
	var_190_int = var_175_int + var_189_int; // 0xd00 Add
	var_191_int = var_174_string + var_190_int; // 0xd01 Add
	HasProperty(var_191_int, var_176_bool); // 0xd02 ObjFunc
	var_192_bool = var_176_bool == 0; // 0xd04 Not
	if(var_192_bool == 0) goto Label_3335; // 0xd05 JumpB
	goto Label_3338; // 0xd06 Jump
	
Label_3338:
	var_193_bool = var_175_int == 0; // 0xd0a Not
	if(var_193_bool == 0) goto Label_3342; // 0xd0b JumpB
	var_167_bool = 0; // 0xd0c MovB
	return 10; // 0xd0d Return
	
Label_3342:
	var_177_int = 0; // 0xd0e MovI
	var_194_int = 1; // 0xd0f PushI
	var_195_bool = var_175_int > var_194_int; // 0xd10 GT
	if(var_195_bool == 0) goto Label_3348; // 0xd11 JumpB
	irand(var_177_int, var_175_int); // 0xd12 Func
	
Label_3348:
	var_196_int = 1; // 0xd14 PushI
	var_197_int = var_177_int + var_196_int; // 0xd15 Add
	var_198_int = var_174_string + var_197_int; // 0xd16 Add
	GetProperty(var_198_int, var_178_string); // 0xd17 ObjFunc
	var_199_bool = 0; var_200_string = ""; // 0xd19 PushV
	var_200_string = var_178_string; // 0xd1a Mov
	func_3390(var_199_bool, var_200_string); // 0xd1b NEW_2
	var_167_bool = var_199_bool; // 0xd1c Mov
	return 10; // 0xd1e Return
	
Label_3335:
	var_201_int = 1; // 0xd07 PushI
	var_175_int = var_175_int + var_201_int; // 0xd08 Add2
	goto Label_3325; // 0xd09 Jump
}


func_3573(var_641_int)
{
	var_642_float = 0; var_643_float = 0; // 0xdf5 PushV
	GetGameTime(var_643_float); // 0xdf6 Func
	var_644_int = 0; // 0xdf8 PushV
	var_644_int = var_643_float; // 0xdf9 Mov
	var_645_int = 24; // 0xdfa PushI
	var_641_int = var_644_int % var_645_int; // 0xdfb Mod2
	return 2; // 0xdfc Return
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


func_3833(var_507_bool)
{
	var_509_int = 0; var_510_string = ""; // 0xefa PushV
	var_510_string = "k11q01"; // 0xefb MovS
	func_3439(var_509_int, var_510_string); // 0xefc NEW_2
	var_511_int = 9; // 0xefe PushI
	var_512_bool = var_509_int == var_511_int; // 0xeff Eq
	if(var_512_bool == 0) goto Label_3843; // 0xf00 JumpB
	var_507_bool = 1; // 0xf01 MovB
	return 0; // 0xf02 Return
	
Label_3843:
	var_507_bool = 0; // 0xf03 MovB
	return 0; // 0xf04 Return
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


func_3581(var_279_bool, var_280_int)
{
	var_281_int = 0; // 0xdfe PushV
	func_3564(var_281_int); // 0xdff NEW_2
	var_279_bool = var_281_int == var_280_int; // 0xe01 Eq2
	return 0; // 0xe02 Return
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


