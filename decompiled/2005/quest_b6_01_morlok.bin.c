task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe5 PushI
	if(var_8_int == 0) goto Label_542; // 0xe6 JumpB
	func_922(); // 0xe8 NEW_2
	var_10_int = 21843; // 0xea PushI
	var_11_bool = var_7_bool == var_10_int; // 0xeb Eq
	if(var_11_bool == 0) goto Label_242; // 0xec JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xed PushV
	var_12_object = var_1_object; // 0xee MovT
	var_13_object = var_0_object; // 0xef MovT
	func_998(); // 0xf0 NEW_2
	
Label_242:
	var_15_int = 21844; // 0xf2 PushI
	var_16_bool = var_7_bool == var_15_int; // 0xf3 Eq
	if(var_16_bool == 0) goto Label_250; // 0xf4 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xf5 PushV
	var_17_object = var_1_object; // 0xf6 MovT
	var_18_object = var_0_object; // 0xf7 MovT
	func_998(); // 0xf8 NEW_2
	
Label_250:
	var_19_int = 21846; // 0xfa PushI
	var_20_bool = var_7_bool == var_19_int; // 0xfb Eq
	if(var_20_bool == 0) goto Label_258; // 0xfc JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xfd PushV
	var_21_object = var_1_object; // 0xfe MovT
	var_22_object = var_0_object; // 0xff MovT
	func_992(); // 0x100 NEW_2
	
Label_258:
	var_25_int = 21856; // 0x102 PushI
	var_26_bool = var_7_bool == var_25_int; // 0x103 Eq
	if(var_26_bool == 0) goto Label_266; // 0x104 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x105 PushV
	var_27_object = var_1_object; // 0x106 MovT
	var_28_object = var_0_object; // 0x107 MovT
	func_1003(); // 0x108 NEW_2
	
Label_266:
	var_52_int = 21861; // 0x10a PushI
	var_53_bool = var_7_bool == var_52_int; // 0x10b Eq
	if(var_53_bool == 0) goto Label_274; // 0x10c JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x10d PushV
	var_54_object = var_1_object; // 0x10e MovT
	var_55_object = var_0_object; // 0x10f MovT
	func_1003(); // 0x110 NEW_2
	
Label_274:
	var_56_int = 21840; // 0x112 PushI
	var_57_bool = var_6_int == var_56_int; // 0x113 Eq
	if(var_57_bool == 0) goto Label_371; // 0x114 JumpB
	var_58_bool = 0; // 0x115 PushV
	var_58_bool = 0; // 0x116 MovB
	var_59_bool = 0; var_60_object = Obj(); // 0x117 PushV
	var_60_object = var_1_object; // 0x118 MovT
	func_1030(var_60_object); // 0x119 NEW_2
	if(var_59_bool == 0) goto Label_290; // 0x11b JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x11c PushV
	var_68_object = var_1_object; // 0x11d MovT
	func_1008(var_67_bool, var_68_object); // 0x11e NEW_2
	if(var_67_bool == 0) goto Label_290; // 0x120 JumpB
	var_58_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_58_bool == 0) goto Label_311; // 0x122 JumpB
	var_92_string = ""; // 0x123 PushV
	var_92_string = "Neutral"; // 0x124 MovS
	func_206(var_7_bool, var_92_string); // 0x125 NEW_2
	var_109_int = 520631; // 0x127 PushI
	SetMessage(var_109_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_110_int = 520632; // 0x12c PushI
	var_111_int = 21842; // 0x12d PushI
	var_112_int = 21841; // 0x12e PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x12f TObjFunc
	var_113_int = 520635; // 0x131 PushI
	var_114_int = -1; // 0x132 PushI
	var_115_int = 21844; // 0x133 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_116_bool = 0; // 0x137 PushV
	var_116_bool = 0; // 0x138 MovB
	var_117_bool = 0; var_118_object = Obj(); // 0x139 PushV
	var_118_object = var_1_object; // 0x13a MovT
	func_1030(var_118_object); // 0x13b NEW_2
	if(var_117_bool == 0) goto Label_325; // 0x13d JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x13e PushV
	var_120_object = var_1_object; // 0x13f MovT
	func_1008(var_119_bool, var_120_object); // 0x140 NEW_2
	var_121_bool = var_119_bool == 0; // 0x142 Not
	if(var_121_bool == 0) goto Label_325; // 0x143 JumpB
	var_116_bool = 1; // 0x144 MovB
	
Label_325:
	if(var_116_bool == 0) goto Label_351; // 0x145 JumpB
	var_122_string = ""; // 0x146 PushV
	var_122_string = "Neutral"; // 0x147 MovS
	func_206(var_7_bool, var_122_string); // 0x148 NEW_2
	var_123_int = 520636; // 0x14a PushI
	SetMessage(var_123_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x14f PushV
	var_125_object = var_1_object; // 0x150 MovT
	func_1018(var_125_object); // 0x151 NEW_2
	if(var_124_bool == 0) goto Label_345; // 0x153 JumpB
	var_130_int = 520637; // 0x154 PushI
	var_131_int = 21847; // 0x155 PushI
	var_132_int = 21846; // 0x156 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x157 TObjFunc
	
Label_345:
	var_133_int = 520693; // 0x159 PushI
	var_134_int = -1; // 0x15a PushI
	var_135_int = 21903; // 0x15b PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_136_string = ""; // 0x15f PushV
	var_136_string = "Neutral"; // 0x160 MovS
	func_206(var_7_bool, var_136_string); // 0x161 NEW_2
	var_137_int = 520694; // 0x163 PushI
	SetMessage(var_137_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_138_int = 520695; // 0x168 PushI
	var_139_int = -1; // 0x169 PushI
	var_140_int = 21905; // 0x16a PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x16b TObjFunc
	var_141_int = 520696; // 0x16d PushI
	var_142_int = -1; // 0x16e PushI
	var_143_int = 21906; // 0x16f PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_144_int = 21847; // 0x173 PushI
	var_145_bool = var_6_int == var_144_int; // 0x174 Eq
	if(var_145_bool == 0) goto Label_389; // 0x175 JumpB
	var_146_string = ""; // 0x176 PushV
	var_146_string = "Neutral"; // 0x177 MovS
	func_206(var_7_bool, var_146_string); // 0x178 NEW_2
	var_147_int = 520638; // 0x17a PushI
	SetMessage(var_147_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_148_int = 520639; // 0x17f PushI
	var_149_int = 21849; // 0x180 PushI
	var_150_int = 21848; // 0x181 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_151_int = 21849; // 0x185 PushI
	var_152_bool = var_6_int == var_151_int; // 0x186 Eq
	if(var_152_bool == 0) goto Label_412; // 0x187 JumpB
	var_153_string = ""; // 0x188 PushV
	var_153_string = "Neutral"; // 0x189 MovS
	func_206(var_7_bool, var_153_string); // 0x18a NEW_2
	var_154_int = 520640; // 0x18c PushI
	SetMessage(var_154_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_155_int = 520641; // 0x191 PushI
	var_156_int = 21851; // 0x192 PushI
	var_157_int = 21850; // 0x193 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x194 TObjFunc
	var_158_int = 520654; // 0x196 PushI
	var_159_int = 21858; // 0x197 PushI
	var_160_int = 21864; // 0x198 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_161_int = 21851; // 0x19c PushI
	var_162_bool = var_6_int == var_161_int; // 0x19d Eq
	if(var_162_bool == 0) goto Label_435; // 0x19e JumpB
	var_163_string = ""; // 0x19f PushV
	var_163_string = "Neutral"; // 0x1a0 MovS
	func_206(var_7_bool, var_163_string); // 0x1a1 NEW_2
	var_164_int = 520642; // 0x1a3 PushI
	SetMessage(var_164_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_165_int = 520643; // 0x1a8 PushI
	var_166_int = 21853; // 0x1a9 PushI
	var_167_int = 21852; // 0x1aa PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1ab TObjFunc
	var_168_int = 520653; // 0x1ad PushI
	var_169_int = 21858; // 0x1ae PushI
	var_170_int = 21862; // 0x1af PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_171_int = 21853; // 0x1b3 PushI
	var_172_bool = var_6_int == var_171_int; // 0x1b4 Eq
	if(var_172_bool == 0) goto Label_458; // 0x1b5 JumpB
	var_173_string = ""; // 0x1b6 PushV
	var_173_string = "Neutral"; // 0x1b7 MovS
	func_206(var_7_bool, var_173_string); // 0x1b8 NEW_2
	var_174_int = 520644; // 0x1ba PushI
	SetMessage(var_174_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_175_int = 520645; // 0x1bf PushI
	var_176_int = 21855; // 0x1c0 PushI
	var_177_int = 21854; // 0x1c1 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1c2 TObjFunc
	var_178_int = 520648; // 0x1c4 PushI
	var_179_int = 21858; // 0x1c5 PushI
	var_180_int = 21857; // 0x1c6 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_181_int = 21858; // 0x1ca PushI
	var_182_bool = var_6_int == var_181_int; // 0x1cb Eq
	if(var_182_bool == 0) goto Label_476; // 0x1cc JumpB
	var_183_string = ""; // 0x1cd PushV
	var_183_string = "Neutral"; // 0x1ce MovS
	func_206(var_7_bool, var_183_string); // 0x1cf NEW_2
	var_184_int = 520649; // 0x1d1 PushI
	SetMessage(var_184_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_185_int = 520650; // 0x1d6 PushI
	var_186_int = 21860; // 0x1d7 PushI
	var_187_int = 21859; // 0x1d8 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_188_int = 21860; // 0x1dc PushI
	var_189_bool = var_6_int == var_188_int; // 0x1dd Eq
	if(var_189_bool == 0) goto Label_494; // 0x1de JumpB
	var_190_string = ""; // 0x1df PushV
	var_190_string = "Neutral"; // 0x1e0 MovS
	func_206(var_7_bool, var_190_string); // 0x1e1 NEW_2
	var_191_int = 520651; // 0x1e3 PushI
	SetMessage(var_191_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_192_int = 520652; // 0x1e8 PushI
	var_193_int = -1; // 0x1e9 PushI
	var_194_int = 21861; // 0x1ea PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_195_int = 21855; // 0x1ee PushI
	var_196_bool = var_6_int == var_195_int; // 0x1ef Eq
	if(var_196_bool == 0) goto Label_512; // 0x1f0 JumpB
	var_197_string = ""; // 0x1f1 PushV
	var_197_string = "Neutral"; // 0x1f2 MovS
	func_206(var_7_bool, var_197_string); // 0x1f3 NEW_2
	var_198_int = 520646; // 0x1f5 PushI
	SetMessage(var_198_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_199_int = 520647; // 0x1fa PushI
	var_200_int = -1; // 0x1fb PushI
	var_201_int = 21856; // 0x1fc PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_202_int = 21842; // 0x200 PushI
	var_203_bool = var_6_int == var_202_int; // 0x201 Eq
	if(var_203_bool == 0) goto Label_530; // 0x202 JumpB
	var_204_string = ""; // 0x203 PushV
	var_204_string = "Neutral"; // 0x204 MovS
	func_206(var_7_bool, var_204_string); // 0x205 NEW_2
	var_205_int = 520633; // 0x207 PushI
	SetMessage(var_205_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_206_int = 520634; // 0x20c PushI
	var_207_int = -1; // 0x20d PushI
	var_208_int = 21843; // 0x20e PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_3_string = 1; // 0x212 TMovB
	var_209_bool = 0; // 0x213 PushV
	func_1153(var_209_bool); // 0x214 NEW_2
	if(var_209_bool == 0) goto Label_538; // 0x216 JumpB
	lshStopAnimation(); // 0x217 Func
	goto Label_540; // 0x219 Jump
	
Label_540:
	return 0; // 0x21c Return
	
Label_538:
	StopAnimation(); // 0x21a Func
	
Label_542:
	return 0; // 0x21e Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x21f PushV
	func_796(); // 0x221 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x223 PushV
	var_32_object = var_6_object; // 0x224 Mov
	TaskCall(0); // 0x225 TaskCall
	func_0(var_33_object, var_31_int, var_32_object); // 0x226 NEW_2
	TaskReturn(); // 0x227 TaskReturn
	var_221_int = 1; // 0x229 PushI
	var_222_bool = var_33_object == var_221_int; // 0x22a Eq
	if(var_222_bool == 0) goto Label_642; // 0x22b JumpB
	var_223_object = Obj(); // 0x22c PushV
	func_945(var_223_object); // 0x22d NEW_2
	var_19_object = var_223_object; // 0x22e Mov
	CreateIntVector(var_20_object); // 0x230 Func
	var_226_int = 4; // 0x232 PushI
	GetItemCount(var_21_int, var_226_int); // 0x233 ObjFunc
	var_22_int = 0; // 0x235 MovI
	
Label_566:
	var_227_bool = var_22_int < var_21_int; // 0x236 LT
	if(var_227_bool == 0) goto Label_594; // 0x237 JumpB
	var_228_int = 4; // 0x238 PushI
	GetItem(var_23_object, var_22_int, var_228_int); // 0x239 ObjFunc
	GetItemID(var_24_int); // 0x23b ObjFunc
	var_229_string = "Microscope"; // 0x23d PushS
	HasInvItemProperty(var_25_bool, var_24_int, var_229_string); // 0x23e Func
	var_230_bool = var_25_bool == 0; // 0x240 Not
	if(var_230_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_591; // 0x242 Jump
	
Label_591:
	var_231_int = 1; // 0x24f PushI
	var_22_int = var_22_int + var_231_int; // 0x250 Add2
	goto Label_566; // 0x251 Jump
	
Label_579:
	var_232_string = "Microscope"; // 0x243 PushS
	GetInvItemProperty(var_26_int, var_24_int, var_232_string); // 0x244 Func
	var_233_int = 2; // 0x246 PushI
	var_234_bool = var_26_int != var_233_int; // 0x247 Neq
	if(var_234_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_591; // 0x249 Jump
	
Label_586:
	add(var_23_object); // 0x24a ObjFunc
	add(var_22_int); // 0x24c ObjFunc
	var_23_object = 0; // 0x24e SetNull
	
Label_594:
	size(var_21_int); // 0x252 ObjFunc
	var_235_int = 0; // 0x254 PushI
	var_236_bool = var_21_int == var_235_int; // 0x255 Eq
	if(var_236_bool == 0) goto Label_603; // 0x256 JumpB
	var_237_string = "b6q01 error, no blood to open bull"; // 0x257 PushS
	Trace(var_237_string); // 0x258 Func
	return 24; // 0x25a Return
	
Label_603:
	var_238_int = 1; // 0x25b PushI
	var_239_bool = var_21_int == var_238_int; // 0x25c Eq
	if(var_239_bool == 0) goto Label_608; // 0x25d JumpB
	var_27_int = 0; // 0x25e MovI
	goto Label_622; // 0x25f Jump
	
Label_622:
	get(var_29_object, var_27_int); // 0x26e ObjFunc
	get(var_30_int, var_27_int); // 0x270 ObjFunc
	var_240_int = 1; // 0x272 PushI
	var_241_int = 4; // 0x273 PushI
	RemoveItem(var_30_int, var_240_int, var_241_int); // 0x274 ObjFunc
	var_242_bool = 0; var_243_string = ""; var_244_string = ""; // 0x276 PushV
	var_243_string = "quest_b6_01"; // 0x277 MovS
	var_244_string = "sacrifice"; // 0x278 MovS
	func_956(var_242_bool, var_243_string, var_244_string); // 0x279 NEW_2
	var_248_string = "b6q01"; // 0x27b PushS
	var_249_int = 5; // 0x27c PushI
	SetVariable(var_248_string, var_249_int); // 0x27d Func
	var_29_object = 0; // 0x27f SetNull
	var_20_object = 0; // 0x280 SetNull
	var_19_object = 0; // 0x281 SetNull
	
Label_642:
	return 24; // 0x282 Return
	
Label_608:
	CreateIntVector(var_28_object); // 0x260 Func
	ChooseItem(var_19_object, var_28_object); // 0x262 Func
	size(var_21_int); // 0x264 ObjFunc
	var_250_int = var_21_int; // 0x266 Push
	if(var_250_int == 0) goto Label_620; // 0x267 JumpB
	var_251_int = 0; // 0x268 PushI
	get(var_27_int, var_251_int); // 0x269 ObjFunc
	goto Label_621; // 0x26b Jump
	
Label_621:
	var_28_object = 0; // 0x26d SetNull
	
Label_620:
	return 24; // 0x26c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x2ad PushS
	var_8_bool = var_6_string == var_7_string; // 0x2ae Eq
	if(var_8_bool == 0) goto Label_691; // 0x2af JumpB
	func_664(var_6_string); // 0x2b1 NEW_2
	
Label_691:
	return 0; // 0x2b3 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x2b4 Func
	sync(); // 0x2b6 Func
	return 0; // 0x2b8 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2b9 PushV
	var_6_bool = 0; // 0x2ba MovB
	var_7_object = var_0_object; // 0x2bb PushT
	if(var_7_object == 0) goto Label_706; // 0x2bc JumpB
	var_8_bool = 0; // 0x2bd PushV
	func_713(var_8_bool); // 0x2be NEW_2
	if(var_8_bool == 0) goto Label_706; // 0x2c0 JumpB
	var_6_bool = 1; // 0x2c1 MovB
	
Label_706:
	if(var_6_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_9_object = Obj(); // 0x2c3 PushV
	func_929(var_9_object); // 0x2c4 NEW_2
	RemoveActor(var_9_object); // 0x2c6 Func
	
Label_712:
	return 0; // 0x2c8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x283 PushV
	
Label_644:
	var_8_bool = 0; // 0x284 PushV
	func_801(var_8_bool); // 0x285 NEW_2
	var_11_bool = var_8_bool == 0; // 0x287 Not
	if(var_11_bool == 0) goto Label_652; // 0x288 JumpB
	Hold(); // 0x289 Func
	goto Label_644; // 0x28b Jump
	
Label_652:
	var_12_int = 3; // 0x28c PushI
	rand(var_7_float, var_12_int); // 0x28d Func
	var_13_int = 3; // 0x28f PushI
	var_14_int = var_7_float + var_13_int; // 0x290 Add
	Sleep(var_14_int); // 0x291 Func
	func_715(); // 0x294 NEW_2
	goto Label_644; // 0x296 Jump
}


func_0(var_0_object, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x0 PushV
	var_0_object = var_32_object; // 0x1 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0x2 PushV
	var_43_object = var_32_object; // 0x3 Mov
	var_44_float = 110.0; // 0x4 MovF
	func_806(var_43_object, var_44_float); // 0x5 NEW_2
	var_88_bool = var_42_bool == 0; // 0x7 Not
	if(var_88_bool == 0) goto Label_11; // 0x8 JumpB
	var_31_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_38_object); // 0xb Func
	var_89_int = 0; // 0xd PushV
	func_1147(var_89_int); // 0xe NEW_2
	SetNPCName(var_89_int); // 0x10 ObjFunc
	var_90_int = 0; // 0x12 PushV
	func_1145(var_90_int); // 0x13 NEW_2
	SetNPCDescription(var_90_int); // 0x15 ObjFunc
	var_91_string = ""; // 0x17 PushV
	func_1149(var_91_string); // 0x18 NEW_2
	SetPhoto(var_91_string); // 0x1a ObjFunc
	var_92_string = ""; // 0x1c PushV
	func_1151(var_92_string); // 0x1d NEW_2
	SetPhoto2(var_92_string); // 0x1f ObjFunc
	var_93_int = 0; // 0x21 PushV
	func_1128(var_93_int); // 0x22 NEW_2
	SetPlayerName(var_93_int); // 0x24 ObjFunc
	var_40_int = -1; // 0x26 MovI
	IsOverrideActive(var_39_bool); // 0x27 Func
	var_101_bool = var_39_bool; // 0x29 Push
	if(var_101_bool == 0) goto Label_45; // 0x2a JumpB
	var_31_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_38_object); // 0x2d Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x2f PushV
	var_102_object = var_32_object; // 0x30 Mov
	var_103_object = var_38_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_41_bool); // 0x36 ObjFunc
	
Label_56:
	var_213_bool = var_41_bool == 0; // 0x38 Not
	if(var_213_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_41_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_214_object = Obj(); // 0x3f PushV
	var_214_object = var_32_object; // 0x40 Mov
	func_874(); // 0x41 NEW_2
	StopDialog(var_38_object); // 0x43 Func
	GetReturnValue(var_40_int); // 0x45 ObjFunc
	var_31_int = var_40_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1153(var_84_bool)
{
	var_84_bool = 0; // 0x481 MovB
	return 0; // 0x482 Return
}


func_891(var_169_string)
{
	var_170_bool = 0; var_171_float = 0; var_172_float = 0; var_173_bool = 0; var_174_float = 0; var_175_float = 0; // 0x37b PushV
	lshHasAnimation(var_173_bool, var_169_string); // 0x37c Func
	var_176_bool = var_173_bool; // 0x37e Push
	if(var_176_bool == 0) goto Label_902; // 0x37f JumpB
	lshGetAnimTimes(var_169_string, var_174_float, var_175_float); // 0x380 Func
	var_177_bool = 0; // 0x382 PushB
	lshPlayAnimation(var_174_float, var_175_float, var_177_bool); // 0x383 Func
	goto Label_906; // 0x385 Jump
	
Label_906:
	return 6; // 0x38a Return
	
Label_902:
	var_178_string = "Can't find lsh animation : "; // 0x386 PushS
	var_179_int = var_178_string + var_169_string; // 0x387 Add
	Trace(var_179_int); // 0x388 Func
}


func_1030(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x407 PushV
	var_113_string = "b6q01"; // 0x408 MovS
	func_951(var_112_int, var_113_string); // 0x409 NEW_2
	var_116_int = 4; // 0x40b PushI
	var_117_bool = var_112_int == var_116_int; // 0x40c Eq
	if(var_117_bool == 0) goto Label_1040; // 0x40d JumpB
	var_110_bool = 1; // 0x40e MovB
	return 0; // 0x40f Return
	
Label_1040:
	var_110_bool = 0; // 0x410 MovB
	return 0; // 0x411 Return
}


func_907(var_147_string, var_148_bool)
{
	var_151_bool = 0; var_152_float = 0; var_153_float = 0; var_154_bool = 0; var_155_float = 0; var_156_float = 0; // 0x38b PushV
	lshHasAnimation(var_154_bool, var_147_string); // 0x38c Func
	var_157_bool = var_154_bool; // 0x38e Push
	if(var_157_bool == 0) goto Label_917; // 0x38f JumpB
	lshGetAnimTimes(var_147_string, var_155_float, var_156_float); // 0x390 Func
	lshPlayAnimation(var_155_float, var_156_float, var_148_bool); // 0x392 Func
	goto Label_921; // 0x394 Jump
	
Label_921:
	return 6; // 0x399 Return
	
Label_917:
	var_158_string = "Can't find lsh animation : "; // 0x395 PushS
	var_159_int = var_158_string + var_147_string; // 0x396 Add
	Trace(var_159_int); // 0x397 Func
}


func_1042(var_120_bool)
{
	var_122_int = 0; var_123_int = 0; var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_int = 0; var_132_bool = 0; var_133_int = 0; // 0x412 PushV
	var_134_int = 4; // 0x413 PushI
	GetItemCount(var_128_int, var_134_int); // 0x414 ObjFunc
	var_129_int = 0; // 0x416 MovI
	
Label_1047:
	var_135_bool = var_129_int < var_128_int; // 0x417 LT
	if(var_135_bool == 0) goto Label_1072; // 0x418 JumpB
	var_136_int = 4; // 0x419 PushI
	GetItem(var_130_object, var_129_int, var_136_int); // 0x41a ObjFunc
	GetItemID(var_131_int); // 0x41c ObjFunc
	var_137_string = "Microscope"; // 0x41e PushS
	HasInvItemProperty(var_132_bool, var_131_int, var_137_string); // 0x41f Func
	var_138_bool = var_132_bool == 0; // 0x421 Not
	if(var_138_bool == 0) goto Label_1060; // 0x422 JumpB
	goto Label_1069; // 0x423 Jump
	
Label_1069:
	var_139_int = 1; // 0x42d PushI
	var_129_int = var_129_int + var_139_int; // 0x42e Add2
	goto Label_1047; // 0x42f Jump
	
Label_1060:
	var_140_string = "Microscope"; // 0x424 PushS
	GetInvItemProperty(var_133_int, var_131_int, var_140_string); // 0x425 Func
	var_141_int = 2; // 0x427 PushI
	var_142_bool = var_133_int == var_141_int; // 0x428 Eq
	if(var_142_bool == 0) goto Label_1068; // 0x429 JumpB
	var_120_bool = 1; // 0x42a MovB
	return 12; // 0x42b Return
	
Label_1068:
	var_130_object = 0; // 0x42c SetNull
	
Label_1072:
	var_120_bool = 0; // 0x430 MovB
	return 12; // 0x431 Return
}


func_664(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x298 PushV
	var_0_object = 1; // 0x299 TMovB
	IsLoaded(var_10_bool); // 0x29a Func
	var_11_bool = 0; // 0x29c PushV
	var_11_bool = 0; // 0x29d MovB
	var_12_bool = var_10_bool == 0; // 0x29e Not
	if(var_12_bool == 0) goto Label_677; // 0x29f JumpB
	var_13_bool = 0; // 0x2a0 PushV
	func_713(var_13_bool); // 0x2a1 NEW_2
	if(var_13_bool == 0) goto Label_677; // 0x2a3 JumpB
	var_11_bool = 1; // 0x2a4 MovB
	
Label_677:
	if(var_11_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_14_object = Obj(); // 0x2a6 PushV
	func_929(var_14_object); // 0x2a7 NEW_2
	RemoveActor(var_14_object); // 0x2a9 Func
	
Label_683:
	return 2; // 0x2ab Return
}


func_794(var_56_bool)
{
	var_56_bool = 1; // 0x31a MovB
	return 0; // 0x31b Return
}


func_922()
{
	var_9_bool = 0; // 0x39a PushV
	func_1153(var_9_bool); // 0x39b NEW_2
	if(var_9_bool == 0) goto Label_928; // 0x39d JumpB
	lshStopSpeech(); // 0x39e Func
	
Label_928:
	return 0; // 0x3a0 Return
}


func_796()
{
	StopAnimation(); // 0x31c Func
	StopGroup0(); // 0x31e Func
	return 0; // 0x320 Return
}


func_801(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x321 PushV
	IsLoaded(var_10_bool); // 0x322 Func
	var_8_bool = var_10_bool; // 0x324 Mov
	return 2; // 0x325 Return
}


func_929(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3a1 PushV
	self(var_11_object); // 0x3a2 Func
	var_9_object = var_11_object; // 0x3a4 Mov
	return 2; // 0x3a5 Return
}


func_806(var_42_bool, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0; // 0x326 PushV
	GetPosition(var_55_cvector); // 0x327 ObjFunc
	GetEyesHeight(var_54_float); // 0x329 ObjFunc
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x32b PushE
	var_63_float = var_63_float + var_54_float; // 0x32c Add2
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x32d PopE
	GetPosition(var_56_cvector); // 0x32e Func
	GetEyesHeight(var_54_float); // 0x330 Func
	var_64_float = GetByIndex(var_56_cvector, 1); // 0x332 PushE
	var_64_float = var_64_float + var_54_float; // 0x333 Add2
	SetByIndex(var_56_cvector, 1) = var_64_float; // 0x334 PopE
	var_57_cvector = var_55_cvector - var_56_cvector; // 0x335 Sub2
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x336 PushE
	var_65_float = 0; // 0x337 MovI
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x338 PopE
	var_66_int = var_57_cvector | var_57_cvector; // 0x339 Or
	var_67_float = sqrt(var_66_int); // 0x33a Sqrt
	var_57_cvector = var_57_cvector / var_57_cvector; // 0x33b Div2
	var_58_cvector = -var_57_cvector; // 0x33c Neg2
	var_68_float = var_57_cvector * var_44_float; // 0x33d Mult
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x33e PushV
	var_71_cvector = CVector(0.0, 1.0, 0.0); // 0x33f PushVec
	var_70_cvector = var_58_cvector ^ var_71_cvector; // 0x340 Xor2
	func_935(var_69_cvector, var_70_cvector); // 0x341 NEW_2
	var_77_int = 25; // 0x343 PushI
	var_78_float = var_69_cvector * var_77_int; // 0x344 Mult
	var_79_int = var_68_float + var_78_float; // 0x345 Add
	var_80_cvector = CVector(0.0, 10.0, 0.0); // 0x346 PushVec
	var_59_cvector = var_79_int - var_80_cvector; // 0x347 Sub2
	var_60_cvector = var_56_cvector + var_59_cvector; // 0x348 Add2
	IsOverrideActive(var_61_bool); // 0x349 Func
	var_81_bool = var_61_bool; // 0x34b Push
	if(var_81_bool == 0) goto Label_847; // 0x34c JumpB
	var_42_bool = 0; // 0x34d MovB
	return 18; // 0x34e Return
	
Label_847:
	StopWorld(); // 0x34f Func
	CameraTransit(var_60_cvector, var_58_cvector); // 0x351 Func
	var_82_float = GetByIndex(var_59_cvector, 0); // 0x353 PushE
	var_83_float = GetByIndex(var_59_cvector, 2); // 0x354 PushE
	Rotate(var_82_float, var_83_float); // 0x355 Func
	var_84_bool = 0; // 0x357 PushV
	func_1153(var_84_bool); // 0x358 NEW_2
	if(var_84_bool == 0) goto Label_860; // 0x35a JumpB
	goto Label_868; // 0x35b Jump
	
Label_868:
	CameraWaitForPlayFinish(); // 0x364 Func
	ResumeWorld(); // 0x366 Func
	var_42_bool = 1; // 0x368 MovB
	return 18; // 0x369 Return
	
Label_860:
	var_85_string = "head"; // 0x35c PushS
	HasAnimationTrack(var_62_bool, var_85_string); // 0x35d Func
	var_86_bool = var_62_bool; // 0x35f Push
	if(var_86_bool == 0) goto Label_868; // 0x360 JumpB
	var_87_string = "head"; // 0x361 PushS
	LookAsyncCamera(var_87_string); // 0x362 Func
}


func_935(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x3a7 PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x3a8 Or
	var_73_float = sqrt(var_74_int); // 0x3a9 Sqrt2
	var_75_float = 0.0; // 0x3aa PushF
	var_76_bool = var_73_float < var_75_float; // 0x3ab LT
	if(var_76_bool == 0) goto Label_943; // 0x3ac JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x3ad MovV
	return 2; // 0x3ae Return
	
Label_943:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x3af Div2
	return 2; // 0x3b0 Return
}


func_945(var_223_object)
{
	var_224_object = Obj(); var_225_object = Obj(); // 0x3b1 PushV
	CreateObjectVector(var_225_object); // 0x3b2 Func
	var_223_object = var_225_object; // 0x3b4 Mov
	return 2; // 0x3b5 Return
}


func_1074()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x432 PushV
	var_31_int = 365; // 0x433 PushI
	var_32_int = 1; // 0x434 PushI
	var_33_int = 525665; // 0x435 PushI
	CreateDiaryEntry(var_30_object, var_31_int, var_32_int, var_33_int); // 0x436 Func
	var_34_bool = 0; var_35_object = Obj(); var_36_int = 0; // 0x438 PushV
	var_35_object = var_30_object; // 0x439 Mov
	var_36_int = 265; // 0x43a MovI
	func_1100(var_34_bool, var_35_object, var_36_int); // 0x43b NEW_2
	return 2; // 0x43d Return
}


func_951(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x3b7 PushV
	GetVariable(var_113_string, var_115_int); // 0x3b8 Func
	var_112_int = var_115_int; // 0x3ba Mov
	return 2; // 0x3bb Return
}


func_956(var_242_bool, var_243_string, var_244_string)
{
	var_245_object = Obj(); var_246_object = Obj(); // 0x3bc PushV
	FindActor(var_246_object, var_243_string); // 0x3bd Func
	var_247_bool = var_246_object == 0; // 0x3bf NullEq
	if(var_247_bool == 0) goto Label_963; // 0x3c0 JumpB
	var_242_bool = 0; // 0x3c1 MovB
	return 2; // 0x3c2 Return
	
Label_963:
	Trigger(var_246_object, var_244_string); // 0x3c3 Func
	var_242_bool = 1; // 0x3c5 MovB
	return 2; // 0x3c6 Return
}


func_1087(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x43f PushV
	GetDiaryRoot(var_45_object); // 0x440 Func
	var_46_bool = var_45_object == 0; // 0x442 Not
	if(var_46_bool == 0) goto Label_1097; // 0x443 JumpB
	var_47_string = "Can't retrieve diary root"; // 0x444 PushS
	Trace(var_47_string); // 0x445 Func
	var_43_object = 0; // 0x447 MovB
	return 2; // 0x448 Return
	
Label_1097:
	var_43_object = var_45_object; // 0x449 Mov
	return 2; // 0x44a Return
}


func_968(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x3c8 PushV
	var_40_string = "idle"; // 0x3c9 MovS
	var_41_int = var_38_int; // 0x3ca Push
	if(var_41_int == 0) goto Label_973; // 0x3cb JumpB
	var_40_string = var_40_string + var_38_int; // 0x3cc Add2
	
Label_973:
	var_37_string = var_40_string; // 0x3cd Mov
	return 2; // 0x3ce Return
}


func_713(var_8_bool)
{
	var_8_bool = 1; // 0x2c9 MovB
	return 0; // 0x2ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x4b TMov
	var_1_object = var_102_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_108_int = 1; // 0x4e PushI
	if(var_108_int == 0) goto Label_176; // 0x4f JumpB
	var_109_bool = 0; // 0x50 PushV
	var_109_bool = 0; // 0x51 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x52 PushV
	var_111_object = var_1_object; // 0x53 MovT
	func_1030(var_111_object); // 0x54 NEW_2
	if(var_110_bool == 0) goto Label_93; // 0x56 JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0x57 PushV
	var_119_object = var_1_object; // 0x58 MovT
	func_1008(var_118_bool, var_119_object); // 0x59 NEW_2
	if(var_118_bool == 0) goto Label_93; // 0x5b JumpB
	var_109_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_109_bool == 0) goto Label_114; // 0x5d JumpB
	var_143_string = ""; // 0x5e PushV
	var_143_string = "Neutral"; // 0x5f MovS
	func_206(var_103_object, var_143_string); // 0x60 NEW_2
	var_160_int = 520631; // 0x62 PushI
	SetMessage(var_160_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_161_int = 520632; // 0x67 PushI
	var_162_int = 21842; // 0x68 PushI
	var_163_int = 21841; // 0x69 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x6a TObjFunc
	var_164_int = 520635; // 0x6c PushI
	var_165_int = -1; // 0x6d PushI
	var_166_int = 21844; // 0x6e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x6f TObjFunc
	goto Label_176; // 0x71 Jump
	
Label_176:
	var_167_bool = 0; // 0xb0 PushV
	func_1153(var_167_bool); // 0xb1 NEW_2
	if(var_167_bool == 0) goto Label_191; // 0xb3 JumpB
	
Label_180:
	lshWaitForAnimEnd(); // 0xb4 Func
	var_168_string = var_3_string; // 0xb6 PushT
	if(var_168_string == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_190:
	goto Label_205; // 0xbe Jump
	
Label_205:
	return 0; // 0xcd Return
	
Label_185:
	var_169_string = ""; // 0xb9 PushV
	var_169_string = var_2_object; // 0xba MovT
	func_891(var_169_string); // 0xbb NEW_2
	goto Label_180; // 0xbd Jump
	
Label_191:
	var_180_string = "all"; // 0xbf PushS
	var_181_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_180_string, var_181_string); // 0xc1 Func
	
Label_195:
	WaitForAnimEnd(); // 0xc3 Func
	var_182_string = var_3_string; // 0xc5 PushT
	if(var_182_string == 0) goto Label_200; // 0xc6 JumpB
	goto Label_205; // 0xc7 Jump
	
Label_200:
	var_183_string = "all"; // 0xc8 PushS
	var_184_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_183_string, var_184_string); // 0xca Func
	goto Label_195; // 0xcc Jump
	
Label_114:
	var_185_bool = 0; // 0x72 PushV
	var_185_bool = 0; // 0x73 MovB
	var_186_bool = 0; var_187_object = Obj(); // 0x74 PushV
	var_187_object = var_1_object; // 0x75 MovT
	func_1030(var_187_object); // 0x76 NEW_2
	if(var_186_bool == 0) goto Label_128; // 0x78 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x79 PushV
	var_189_object = var_1_object; // 0x7a MovT
	func_1008(var_188_bool, var_189_object); // 0x7b NEW_2
	var_190_bool = var_188_bool == 0; // 0x7d Not
	if(var_190_bool == 0) goto Label_128; // 0x7e JumpB
	var_185_bool = 1; // 0x7f MovB
	
Label_128:
	if(var_185_bool == 0) goto Label_154; // 0x80 JumpB
	var_191_string = ""; // 0x81 PushV
	var_191_string = "Neutral"; // 0x82 MovS
	func_206(var_103_object, var_191_string); // 0x83 NEW_2
	var_192_int = 520636; // 0x85 PushI
	SetMessage(var_192_int); // 0x86 TObjFunc
	ClearReplies(); // 0x88 TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x8a PushV
	var_194_object = var_1_object; // 0x8b MovT
	func_1018(var_194_object); // 0x8c NEW_2
	if(var_193_bool == 0) goto Label_148; // 0x8e JumpB
	var_199_int = 520637; // 0x8f PushI
	var_200_int = 21847; // 0x90 PushI
	var_201_int = 21846; // 0x91 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x92 TObjFunc
	
Label_148:
	var_202_int = 520693; // 0x94 PushI
	var_203_int = -1; // 0x95 PushI
	var_204_int = 21903; // 0x96 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x97 TObjFunc
	goto Label_176; // 0x99 Jump
	
Label_154:
	var_205_string = ""; // 0x9a PushV
	var_205_string = "Neutral"; // 0x9b MovS
	func_206(var_103_object, var_205_string); // 0x9c NEW_2
	var_206_int = 520694; // 0x9e PushI
	SetMessage(var_206_int); // 0x9f TObjFunc
	ClearReplies(); // 0xa1 TObjFunc
	var_207_int = 520695; // 0xa3 PushI
	var_208_int = -1; // 0xa4 PushI
	var_209_int = 21905; // 0xa5 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0xa6 TObjFunc
	var_210_int = 520696; // 0xa8 PushI
	var_211_int = -1; // 0xa9 PushI
	var_212_int = 21906; // 0xaa PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0xab TObjFunc
	goto Label_176; // 0xad Jump
}


func_715()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x2cb PushV
	WaitForAnimEnd(); // 0x2cc Func
	var_29_bool = 0; // 0x2ce PushV
	func_801(var_29_bool); // 0x2cf NEW_2
	var_30_bool = var_29_bool == 0; // 0x2d1 Not
	if(var_30_bool == 0) goto Label_724; // 0x2d2 JumpB
	return 14; // 0x2d3 Return
	
Label_724:
	var_31_int = 0; // 0x2d4 PushV
	func_975(var_31_int); // 0x2d5 NEW_2
	var_22_int = var_31_int; // 0x2d6 Mov
	var_23_int = 0; // 0x2d8 MovI
	
Label_729:
	var_44_bool = 0; // 0x2d9 PushV
	var_44_bool = 0; // 0x2da MovB
	var_45_int = 5; // 0x2db PushI
	var_46_bool = var_23_int < var_45_int; // 0x2dc LT
	if(var_46_bool == 0) goto Label_739; // 0x2dd JumpB
	var_47_bool = 0; // 0x2de PushV
	func_801(var_47_bool); // 0x2df NEW_2
	if(var_47_bool == 0) goto Label_739; // 0x2e1 JumpB
	var_44_bool = 1; // 0x2e2 MovB
	
Label_739:
	if(var_44_bool == 0) goto Label_791; // 0x2e3 JumpB
	var_48_int = 3; // 0x2e4 PushI
	irand(var_24_int, var_48_int); // 0x2e5 Func
	var_49_int = 0; // 0x2e7 PushI
	var_50_bool = var_24_int == var_49_int; // 0x2e8 Eq
	if(var_50_bool == 0) goto Label_763; // 0x2e9 JumpB
	var_51_int = var_22_int; // 0x2ea Push
	if(var_51_int == 0) goto Label_762; // 0x2eb JumpB
	irand(var_25_int, var_22_int); // 0x2ec Func
	var_52_string = "all"; // 0x2ee PushS
	var_53_string = ""; var_54_int = 0; // 0x2ef PushV
	var_54_int = var_25_int; // 0x2f0 Mov
	func_968(var_53_string, var_54_int); // 0x2f1 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x2f3 Func
	WaitForAnimEnd(var_26_bool); // 0x2f5 Func
	var_55_bool = var_26_bool == 0; // 0x2f7 Not
	if(var_55_bool == 0) goto Label_762; // 0x2f8 JumpB
	goto Label_791; // 0x2f9 Jump
	
Label_791:
	ResetAAS(); // 0x317 Func
	return 14; // 0x319 Return
	
Label_762:
	goto Label_780; // 0x2fa Jump
	
Label_780:
	var_56_bool = 0; // 0x30c PushV
	func_794(var_56_bool); // 0x30d NEW_2
	var_57_bool = var_56_bool == 0; // 0x30f Not
	if(var_57_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_791; // 0x311 Jump
	
Label_786:
	ResetAAS(); // 0x312 Func
	var_58_int = 1; // 0x314 PushI
	var_23_int = var_23_int + var_58_int; // 0x315 Add2
	goto Label_729; // 0x316 Jump
	
Label_763:
	var_59_int = 1; // 0x2fb PushI
	var_60_bool = var_24_int == var_59_int; // 0x2fc Eq
	if(var_60_bool == 0) goto Label_777; // 0x2fd JumpB
	var_61_int = 4; // 0x2fe PushI
	rand(var_27_float, var_61_int); // 0x2ff Func
	var_62_int = 1; // 0x301 PushI
	var_63_int = var_27_float + var_62_int; // 0x302 Add
	Sleep(var_63_int, var_28_bool); // 0x303 Func
	var_64_bool = var_28_bool == 0; // 0x305 Not
	if(var_64_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_791; // 0x307 Jump
	
Label_776:
	goto Label_780; // 0x308 Jump
	
Label_777:
	var_65_int = var_23_int; // 0x309 Push
	if(var_65_int == 0) goto Label_780; // 0x30a JumpB
	goto Label_791; // 0x30b Jump
}


func_1100(var_34_bool, var_35_object, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; // 0x44c PushV
	var_43_object = Obj(); // 0x44d PushV
	func_1087(var_43_object); // 0x44e NEW_2
	var_40_object = var_43_object; // 0x44f Mov
	Find(var_36_int, var_41_object); // 0x451 ObjFunc
	var_48_bool = var_41_object == 0; // 0x453 Not
	if(var_48_bool == 0) goto Label_1115; // 0x454 JumpB
	var_49_string = "Can't find diary parent with id: "; // 0x455 PushS
	var_50_int = var_49_string + var_36_int; // 0x456 Add
	Trace(var_50_int); // 0x457 Func
	var_34_bool = 0; // 0x459 MovB
	return 6; // 0x45a Return
	
Label_1115:
	AddChild(var_35_object); // 0x45b ObjFunc
	var_51_int = 7; // 0x45d PushI
	SendWorldWndMessage(var_51_int); // 0x45e Func
	GetCategory(var_42_int); // 0x460 ObjFunc
	SetDiarySection(var_42_int); // 0x462 Func
	var_34_bool = 0; // 0x464 MovB
	return 6; // 0x465 Return
}


func_206(var_2_object, var_143_string)
{
	var_144_bool = 0; // 0xcf PushV
	func_1153(var_144_bool); // 0xd0 NEW_2
	var_145_bool = var_144_bool == 0; // 0xd2 Not
	if(var_145_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_146_bool = var_143_string == var_2_object; // 0xd5 Eq
	if(var_146_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_147_string = ""; var_148_bool = 0; // 0xd8 PushV
	var_147_string = var_143_string; // 0xd9 Mov
	var_149_string = ""; // 0xda PushS
	var_150_bool = var_143_string == var_149_string; // 0xdb Eq
	if(var_150_bool == 0) goto Label_223; // 0xdc JumpB
	var_148_bool = 0; // 0xdd MovB
	goto Label_224; // 0xde Jump
	
Label_224:
	func_907(var_147_string, var_148_bool); // 0xe0 NEW_2
	var_2_object = var_143_string; // 0xe2 TMov
	return 0; // 0xe3 Return
	
Label_223:
	var_148_bool = 1; // 0xdf MovB
}


func_975(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x3cf PushV
	var_34_int = 0; // 0x3d0 MovI
	
Label_977:
	var_36_string = "all"; // 0x3d1 PushS
	var_37_string = ""; var_38_int = 0; // 0x3d2 PushV
	var_38_int = var_34_int; // 0x3d3 Mov
	func_968(var_37_string, var_38_int); // 0x3d4 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x3d6 Func
	var_42_bool = var_35_bool == 0; // 0x3d8 Not
	if(var_42_bool == 0) goto Label_987; // 0x3d9 JumpB
	goto Label_990; // 0x3da Jump
	
Label_990:
	var_31_int = var_34_int; // 0x3de Mov
	return 4; // 0x3df Return
	
Label_987:
	var_43_int = 1; // 0x3db PushI
	var_34_int = var_34_int + var_43_int; // 0x3dc Add2
	goto Label_977; // 0x3dd Jump
}


func_992()
{
	var_23_string = "oob6Morlok1"; // 0x3e1 PushS
	var_24_int = 1; // 0x3e2 PushI
	SetVariable(var_23_string, var_24_int); // 0x3e3 Func
	return 0; // 0x3e5 Return
}


func_998()
{
	var_14_int = 1; // 0x3e7 PushI
	SetReturnValue(var_14_int); // 0x3e8 ObjFunc
	return 0; // 0x3ea Return
}


func_1128(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x468 PushV
	var_96_string = "branch"; // 0x469 PushS
	GetVariable(var_96_string, var_95_int); // 0x46a Func
	var_97_int = 0; // 0x46c PushI
	var_98_bool = var_95_int == var_97_int; // 0x46d Eq
	if(var_98_bool == 0) goto Label_1138; // 0x46e JumpB
	var_93_int = 1; // 0x46f MovI
	return 2; // 0x470 Return
	
Label_1138:
	var_99_int = 1; // 0x472 PushI
	var_100_bool = var_95_int == var_99_int; // 0x473 Eq
	if(var_100_bool == 0) goto Label_1143; // 0x474 JumpB
	var_93_int = 2; // 0x475 MovI
	return 2; // 0x476 Return
	
Label_1143:
	var_93_int = 3; // 0x477 MovI
	return 2; // 0x478 Return
}


func_874()
{
	var_215_bool = 0; var_216_bool = 0; // 0x36a PushV
	CameraSwitchToNormal(); // 0x36b Func
	var_217_bool = 0; // 0x36d PushV
	func_1153(var_217_bool); // 0x36e NEW_2
	if(var_217_bool == 0) goto Label_882; // 0x370 JumpB
	goto Label_890; // 0x371 Jump
	
Label_890:
	return 2; // 0x37a Return
	
Label_882:
	var_218_string = "head"; // 0x372 PushS
	HasAnimationTrack(var_216_bool, var_218_string); // 0x373 Func
	var_219_bool = var_216_bool; // 0x375 Push
	if(var_219_bool == 0) goto Label_890; // 0x376 JumpB
	var_220_string = "head"; // 0x377 PushS
	UnlookAsync(var_220_string); // 0x378 Func
}


func_1003()
{
	func_1074(); // 0x3ed NEW_2
	return 0; // 0x3ef Return
}


func_1008(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj(); // 0x3f1 PushV
	var_121_object = var_119_object; // 0x3f2 Mov
	func_1042(var_121_object); // 0x3f3 NEW_2
	if(var_120_bool == 0) goto Label_1016; // 0x3f5 JumpB
	var_118_bool = 1; // 0x3f6 MovB
	return 0; // 0x3f7 Return
	
Label_1016:
	var_118_bool = 0; // 0x3f8 MovB
	return 0; // 0x3f9 Return
}


func_1145(var_90_int)
{
	var_90_int = 521048; // 0x479 MovI
	return 0; // 0x47a Return
}


func_1018(var_193_bool)
{
	var_195_int = 0; var_196_string = ""; // 0x3fb PushV
	var_196_string = "oob6Morlok1"; // 0x3fc MovS
	func_951(var_195_int, var_196_string); // 0x3fd NEW_2
	var_197_int = 0; // 0x3ff PushI
	var_198_bool = var_195_int == var_197_int; // 0x400 Eq
	if(var_198_bool == 0) goto Label_1028; // 0x401 JumpB
	var_193_bool = 1; // 0x402 MovB
	return 0; // 0x403 Return
	
Label_1028:
	var_193_bool = 0; // 0x404 MovB
	return 0; // 0x405 Return
}


func_1147(var_89_int)
{
	var_89_int = 521047; // 0x47b MovI
	return 0; // 0x47c Return
}


func_1149(var_91_string)
{
	var_91_string = "ui/NPC_Citizen2.png"; // 0x47d MovS
	return 0; // 0x47e Return
}


func_1151(var_92_string)
{
	var_92_string = "ui/NPC_Citizen2_b.png"; // 0x47f MovS
	return 0; // 0x480 Return
}


