task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe5 PushI
	if(var_8_int == 0) goto Label_542; // 0xe6 JumpB
	func_924(); // 0xe8 NEW_2
	var_10_int = 21843; // 0xea PushI
	var_11_bool = var_7_bool == var_10_int; // 0xeb Eq
	if(var_11_bool == 0) goto Label_242; // 0xec JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xed PushV
	var_12_object = var_1_object; // 0xee MovT
	var_13_object = var_0_object; // 0xef MovT
	func_1000(); // 0xf0 NEW_2
	
Label_242:
	var_15_int = 21844; // 0xf2 PushI
	var_16_bool = var_7_bool == var_15_int; // 0xf3 Eq
	if(var_16_bool == 0) goto Label_250; // 0xf4 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xf5 PushV
	var_17_object = var_1_object; // 0xf6 MovT
	var_18_object = var_0_object; // 0xf7 MovT
	func_1000(); // 0xf8 NEW_2
	
Label_250:
	var_19_int = 21846; // 0xfa PushI
	var_20_bool = var_7_bool == var_19_int; // 0xfb Eq
	if(var_20_bool == 0) goto Label_258; // 0xfc JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xfd PushV
	var_21_object = var_1_object; // 0xfe MovT
	var_22_object = var_0_object; // 0xff MovT
	func_994(); // 0x100 NEW_2
	
Label_258:
	var_25_int = 21856; // 0x102 PushI
	var_26_bool = var_7_bool == var_25_int; // 0x103 Eq
	if(var_26_bool == 0) goto Label_266; // 0x104 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x105 PushV
	var_27_object = var_1_object; // 0x106 MovT
	var_28_object = var_0_object; // 0x107 MovT
	func_1005(); // 0x108 NEW_2
	
Label_266:
	var_52_int = 21861; // 0x10a PushI
	var_53_bool = var_7_bool == var_52_int; // 0x10b Eq
	if(var_53_bool == 0) goto Label_274; // 0x10c JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x10d PushV
	var_54_object = var_1_object; // 0x10e MovT
	var_55_object = var_0_object; // 0x10f MovT
	func_1005(); // 0x110 NEW_2
	
Label_274:
	var_56_int = 21840; // 0x112 PushI
	var_57_bool = var_6_int == var_56_int; // 0x113 Eq
	if(var_57_bool == 0) goto Label_371; // 0x114 JumpB
	var_58_bool = 0; // 0x115 PushV
	var_58_bool = 0; // 0x116 MovB
	var_59_bool = 0; var_60_object = Obj(); // 0x117 PushV
	var_60_object = var_1_object; // 0x118 MovT
	func_1032(var_60_object); // 0x119 NEW_2
	if(var_59_bool == 0) goto Label_290; // 0x11b JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x11c PushV
	var_68_object = var_1_object; // 0x11d MovT
	func_1010(var_67_bool, var_68_object); // 0x11e NEW_2
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
	func_1032(var_118_object); // 0x13b NEW_2
	if(var_117_bool == 0) goto Label_325; // 0x13d JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x13e PushV
	var_120_object = var_1_object; // 0x13f MovT
	func_1010(var_119_bool, var_120_object); // 0x140 NEW_2
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
	func_1020(var_125_object); // 0x151 NEW_2
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
	func_1155(var_209_bool); // 0x214 NEW_2
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
	var_223_int = 1; // 0x229 PushI
	var_224_bool = var_33_object == var_223_int; // 0x22a Eq
	if(var_224_bool == 0) goto Label_642; // 0x22b JumpB
	var_225_object = Obj(); // 0x22c PushV
	func_947(var_225_object); // 0x22d NEW_2
	var_19_object = var_225_object; // 0x22e Mov
	CreateIntVector(var_20_object); // 0x230 Func
	var_228_int = 4; // 0x232 PushI
	GetItemCount(var_21_int, var_228_int); // 0x233 ObjFunc
	var_22_int = 0; // 0x235 MovI
	
Label_566:
	var_229_bool = var_22_int < var_21_int; // 0x236 LT
	if(var_229_bool == 0) goto Label_594; // 0x237 JumpB
	var_230_int = 4; // 0x238 PushI
	GetItem(var_23_object, var_22_int, var_230_int); // 0x239 ObjFunc
	GetItemID(var_24_int); // 0x23b ObjFunc
	var_231_string = "Microscope"; // 0x23d PushS
	HasInvItemProperty(var_25_bool, var_24_int, var_231_string); // 0x23e Func
	var_232_bool = var_25_bool == 0; // 0x240 Not
	if(var_232_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_591; // 0x242 Jump
	
Label_591:
	var_233_int = 1; // 0x24f PushI
	var_22_int = var_22_int + var_233_int; // 0x250 Add2
	goto Label_566; // 0x251 Jump
	
Label_579:
	var_234_string = "Microscope"; // 0x243 PushS
	GetInvItemProperty(var_26_int, var_24_int, var_234_string); // 0x244 Func
	var_235_int = 2; // 0x246 PushI
	var_236_bool = var_26_int != var_235_int; // 0x247 Neq
	if(var_236_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_591; // 0x249 Jump
	
Label_586:
	add(var_23_object); // 0x24a ObjFunc
	add(var_22_int); // 0x24c ObjFunc
	var_23_object = 0; // 0x24e SetNull
	
Label_594:
	size(var_21_int); // 0x252 ObjFunc
	var_237_int = 0; // 0x254 PushI
	var_238_bool = var_21_int == var_237_int; // 0x255 Eq
	if(var_238_bool == 0) goto Label_603; // 0x256 JumpB
	var_239_string = "b6q01 error, no blood to open bull"; // 0x257 PushS
	Trace(var_239_string); // 0x258 Func
	return 24; // 0x25a Return
	
Label_603:
	var_240_int = 1; // 0x25b PushI
	var_241_bool = var_21_int == var_240_int; // 0x25c Eq
	if(var_241_bool == 0) goto Label_608; // 0x25d JumpB
	var_27_int = 0; // 0x25e MovI
	goto Label_622; // 0x25f Jump
	
Label_622:
	get(var_29_object, var_27_int); // 0x26e ObjFunc
	get(var_30_int, var_27_int); // 0x270 ObjFunc
	var_242_int = 1; // 0x272 PushI
	var_243_int = 4; // 0x273 PushI
	RemoveItem(var_30_int, var_242_int, var_243_int); // 0x274 ObjFunc
	var_244_bool = 0; var_245_string = ""; var_246_string = ""; // 0x276 PushV
	var_245_string = "quest_b6_01"; // 0x277 MovS
	var_246_string = "sacrifice"; // 0x278 MovS
	func_958(var_244_bool, var_245_string, var_246_string); // 0x279 NEW_2
	var_250_string = "b6q01"; // 0x27b PushS
	var_251_int = 5; // 0x27c PushI
	SetVariable(var_250_string, var_251_int); // 0x27d Func
	var_29_object = 0; // 0x27f SetNull
	var_20_object = 0; // 0x280 SetNull
	var_19_object = 0; // 0x281 SetNull
	
Label_642:
	return 24; // 0x282 Return
	
Label_608:
	CreateIntVector(var_28_object); // 0x260 Func
	ChooseItem(var_19_object, var_28_object); // 0x262 Func
	size(var_21_int); // 0x264 ObjFunc
	var_252_int = var_21_int; // 0x266 Push
	if(var_252_int == 0) goto Label_620; // 0x267 JumpB
	var_253_int = 0; // 0x268 PushI
	get(var_27_int, var_253_int); // 0x269 ObjFunc
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
	func_931(var_9_object); // 0x2c4 NEW_2
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
	var_89_bool = var_42_bool == 0; // 0x7 Not
	if(var_89_bool == 0) goto Label_11; // 0x8 JumpB
	var_31_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_38_object); // 0xb Func
	var_90_int = 0; // 0xd PushV
	func_1149(var_90_int); // 0xe NEW_2
	SetNPCName(var_90_int); // 0x10 ObjFunc
	var_91_int = 0; // 0x12 PushV
	func_1147(var_91_int); // 0x13 NEW_2
	SetNPCDescription(var_91_int); // 0x15 ObjFunc
	var_92_string = ""; // 0x17 PushV
	func_1151(var_92_string); // 0x18 NEW_2
	SetPhoto(var_92_string); // 0x1a ObjFunc
	var_93_string = ""; // 0x1c PushV
	func_1153(var_93_string); // 0x1d NEW_2
	SetPhoto2(var_93_string); // 0x1f ObjFunc
	var_94_int = 0; // 0x21 PushV
	func_1130(var_94_int); // 0x22 NEW_2
	SetPlayerName(var_94_int); // 0x24 ObjFunc
	var_40_int = -1; // 0x26 MovI
	IsOverrideActive(var_39_bool); // 0x27 Func
	var_102_bool = var_39_bool; // 0x29 Push
	if(var_102_bool == 0) goto Label_45; // 0x2a JumpB
	var_31_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_38_object); // 0x2d Func
	var_103_object = Obj(); var_104_object = Obj(); // 0x2f PushV
	var_103_object = var_32_object; // 0x30 Mov
	var_104_object = var_38_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_41_bool); // 0x36 ObjFunc
	
Label_56:
	var_214_bool = var_41_bool == 0; // 0x38 Not
	if(var_214_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_41_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_215_object = Obj(); // 0x3f PushV
	var_215_object = var_32_object; // 0x40 Mov
	func_875(); // 0x41 NEW_2
	StopDialog(var_38_object); // 0x43 Func
	GetReturnValue(var_40_int); // 0x45 ObjFunc
	var_31_int = var_40_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1153(var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png"; // 0x481 MovS
	return 0; // 0x482 Return
}


func_1155(var_85_bool)
{
	var_85_bool = 0; // 0x483 MovB
	return 0; // 0x484 Return
}


func_1032(var_111_bool)
{
	var_113_int = 0; var_114_string = ""; // 0x409 PushV
	var_114_string = "b6q01"; // 0x40a MovS
	func_953(var_113_int, var_114_string); // 0x40b NEW_2
	var_117_int = 4; // 0x40d PushI
	var_118_bool = var_113_int == var_117_int; // 0x40e Eq
	if(var_118_bool == 0) goto Label_1042; // 0x40f JumpB
	var_111_bool = 1; // 0x410 MovB
	return 0; // 0x411 Return
	
Label_1042:
	var_111_bool = 0; // 0x412 MovB
	return 0; // 0x413 Return
}


func_909(var_148_string, var_149_bool)
{
	var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_float = 0; var_157_float = 0; // 0x38d PushV
	lshHasAnimation(var_155_bool, var_148_string); // 0x38e Func
	var_158_bool = var_155_bool; // 0x390 Push
	if(var_158_bool == 0) goto Label_919; // 0x391 JumpB
	lshGetAnimTimes(var_148_string, var_156_float, var_157_float); // 0x392 Func
	lshPlayAnimation(var_156_float, var_157_float, var_149_bool); // 0x394 Func
	goto Label_923; // 0x396 Jump
	
Label_923:
	return 6; // 0x39b Return
	
Label_919:
	var_159_string = "Can't find lsh animation : "; // 0x397 PushS
	var_160_int = var_159_string + var_148_string; // 0x398 Add
	Trace(var_160_int); // 0x399 Func
}


func_893(var_170_string)
{
	var_171_bool = 0; var_172_float = 0; var_173_float = 0; var_174_bool = 0; var_175_float = 0; var_176_float = 0; // 0x37d PushV
	lshHasAnimation(var_174_bool, var_170_string); // 0x37e Func
	var_177_bool = var_174_bool; // 0x380 Push
	if(var_177_bool == 0) goto Label_904; // 0x381 JumpB
	lshGetAnimTimes(var_170_string, var_175_float, var_176_float); // 0x382 Func
	var_178_bool = 0; // 0x384 PushB
	lshPlayAnimation(var_175_float, var_176_float, var_178_bool); // 0x385 Func
	goto Label_908; // 0x387 Jump
	
Label_908:
	return 6; // 0x38c Return
	
Label_904:
	var_179_string = "Can't find lsh animation : "; // 0x388 PushS
	var_180_int = var_179_string + var_170_string; // 0x389 Add
	Trace(var_180_int); // 0x38a Func
}


func_1044(var_121_bool)
{
	var_123_int = 0; var_124_int = 0; var_125_object = Obj(); var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_object = Obj(); var_132_int = 0; var_133_bool = 0; var_134_int = 0; // 0x414 PushV
	var_135_int = 4; // 0x415 PushI
	GetItemCount(var_129_int, var_135_int); // 0x416 ObjFunc
	var_130_int = 0; // 0x418 MovI
	
Label_1049:
	var_136_bool = var_130_int < var_129_int; // 0x419 LT
	if(var_136_bool == 0) goto Label_1074; // 0x41a JumpB
	var_137_int = 4; // 0x41b PushI
	GetItem(var_131_object, var_130_int, var_137_int); // 0x41c ObjFunc
	GetItemID(var_132_int); // 0x41e ObjFunc
	var_138_string = "Microscope"; // 0x420 PushS
	HasInvItemProperty(var_133_bool, var_132_int, var_138_string); // 0x421 Func
	var_139_bool = var_133_bool == 0; // 0x423 Not
	if(var_139_bool == 0) goto Label_1062; // 0x424 JumpB
	goto Label_1071; // 0x425 Jump
	
Label_1071:
	var_140_int = 1; // 0x42f PushI
	var_130_int = var_130_int + var_140_int; // 0x430 Add2
	goto Label_1049; // 0x431 Jump
	
Label_1062:
	var_141_string = "Microscope"; // 0x426 PushS
	GetInvItemProperty(var_134_int, var_132_int, var_141_string); // 0x427 Func
	var_142_int = 2; // 0x429 PushI
	var_143_bool = var_134_int == var_142_int; // 0x42a Eq
	if(var_143_bool == 0) goto Label_1070; // 0x42b JumpB
	var_121_bool = 1; // 0x42c MovB
	return 12; // 0x42d Return
	
Label_1070:
	var_131_object = 0; // 0x42e SetNull
	
Label_1074:
	var_121_bool = 0; // 0x432 MovB
	return 12; // 0x433 Return
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
	func_931(var_14_object); // 0x2a7 NEW_2
	RemoveActor(var_14_object); // 0x2a9 Func
	
Label_683:
	return 2; // 0x2ab Return
}


func_794(var_56_bool)
{
	var_56_bool = 1; // 0x31a MovB
	return 0; // 0x31b Return
}


func_796()
{
	StopAnimation(); // 0x31c Func
	StopGroup0(); // 0x31e Func
	return 0; // 0x320 Return
}


func_924()
{
	var_9_bool = 0; // 0x39c PushV
	func_1155(var_9_bool); // 0x39d NEW_2
	if(var_9_bool == 0) goto Label_930; // 0x39f JumpB
	lshStopSpeech(); // 0x3a0 Func
	
Label_930:
	return 0; // 0x3a2 Return
}


func_801(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x321 PushV
	IsLoaded(var_10_bool); // 0x322 Func
	var_8_bool = var_10_bool; // 0x324 Mov
	return 2; // 0x325 Return
}


func_931(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3a3 PushV
	self(var_11_object); // 0x3a4 Func
	var_9_object = var_11_object; // 0x3a6 Mov
	return 2; // 0x3a7 Return
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
	func_937(var_69_cvector, var_70_cvector); // 0x341 NEW_2
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
	var_82_bool = 1; // 0x351 PushB
	CameraTransit(var_60_cvector, var_58_cvector, var_82_bool); // 0x352 Func
	var_83_float = GetByIndex(var_59_cvector, 0); // 0x354 PushE
	var_84_float = GetByIndex(var_59_cvector, 2); // 0x355 PushE
	Rotate(var_83_float, var_84_float); // 0x356 Func
	var_85_bool = 0; // 0x358 PushV
	func_1155(var_85_bool); // 0x359 NEW_2
	if(var_85_bool == 0) goto Label_861; // 0x35b JumpB
	goto Label_869; // 0x35c Jump
	
Label_869:
	CameraWaitForPlayFinish(); // 0x365 Func
	ResumeWorld(); // 0x367 Func
	var_42_bool = 1; // 0x369 MovB
	return 18; // 0x36a Return
	
Label_861:
	var_86_string = "head"; // 0x35d PushS
	HasAnimationTrack(var_62_bool, var_86_string); // 0x35e Func
	var_87_bool = var_62_bool; // 0x360 Push
	if(var_87_bool == 0) goto Label_869; // 0x361 JumpB
	var_88_string = "head"; // 0x362 PushS
	LookAsyncCamera(var_88_string); // 0x363 Func
}


func_937(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x3a9 PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x3aa Or
	var_73_float = sqrt(var_74_int); // 0x3ab Sqrt2
	var_75_float = 0.0; // 0x3ac PushF
	var_76_bool = var_73_float < var_75_float; // 0x3ad LT
	if(var_76_bool == 0) goto Label_945; // 0x3ae JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x3af MovV
	return 2; // 0x3b0 Return
	
Label_945:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x3b1 Div2
	return 2; // 0x3b2 Return
}


func_947(var_225_object)
{
	var_226_object = Obj(); var_227_object = Obj(); // 0x3b3 PushV
	CreateObjectVector(var_227_object); // 0x3b4 Func
	var_225_object = var_227_object; // 0x3b6 Mov
	return 2; // 0x3b7 Return
}


func_1076()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x434 PushV
	var_31_int = 365; // 0x435 PushI
	var_32_int = 1; // 0x436 PushI
	var_33_int = 525665; // 0x437 PushI
	CreateDiaryEntry(var_30_object, var_31_int, var_32_int, var_33_int); // 0x438 Func
	var_34_bool = 0; var_35_object = Obj(); var_36_int = 0; // 0x43a PushV
	var_35_object = var_30_object; // 0x43b Mov
	var_36_int = 265; // 0x43c MovI
	func_1102(var_34_bool, var_35_object, var_36_int); // 0x43d NEW_2
	return 2; // 0x43f Return
}


func_953(var_113_int, var_114_string)
{
	var_115_int = 0; var_116_int = 0; // 0x3b9 PushV
	GetVariable(var_114_string, var_116_int); // 0x3ba Func
	var_113_int = var_116_int; // 0x3bc Mov
	return 2; // 0x3bd Return
}


func_958(var_244_bool, var_245_string, var_246_string)
{
	var_247_object = Obj(); var_248_object = Obj(); // 0x3be PushV
	FindActor(var_248_object, var_245_string); // 0x3bf Func
	var_249_bool = var_248_object == 0; // 0x3c1 NullEq
	if(var_249_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_244_bool = 0; // 0x3c3 MovB
	return 2; // 0x3c4 Return
	
Label_965:
	Trigger(var_248_object, var_246_string); // 0x3c5 Func
	var_244_bool = 1; // 0x3c7 MovB
	return 2; // 0x3c8 Return
}


func_1089(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x441 PushV
	GetDiaryRoot(var_45_object); // 0x442 Func
	var_46_bool = var_45_object == 0; // 0x444 Not
	if(var_46_bool == 0) goto Label_1099; // 0x445 JumpB
	var_47_string = "Can't retrieve diary root"; // 0x446 PushS
	Trace(var_47_string); // 0x447 Func
	var_43_object = 0; // 0x449 MovB
	return 2; // 0x44a Return
	
Label_1099:
	var_43_object = var_45_object; // 0x44b Mov
	return 2; // 0x44c Return
}


func_713(var_8_bool)
{
	var_8_bool = 1; // 0x2c9 MovB
	return 0; // 0x2ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_103_object, var_104_object)
{
	var_0_object = var_104_object; // 0x4b TMov
	var_1_object = var_103_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_109_int = 1; // 0x4e PushI
	if(var_109_int == 0) goto Label_176; // 0x4f JumpB
	var_110_bool = 0; // 0x50 PushV
	var_110_bool = 0; // 0x51 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x52 PushV
	var_112_object = var_1_object; // 0x53 MovT
	func_1032(var_112_object); // 0x54 NEW_2
	if(var_111_bool == 0) goto Label_93; // 0x56 JumpB
	var_119_bool = 0; var_120_object = Obj(); // 0x57 PushV
	var_120_object = var_1_object; // 0x58 MovT
	func_1010(var_119_bool, var_120_object); // 0x59 NEW_2
	if(var_119_bool == 0) goto Label_93; // 0x5b JumpB
	var_110_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_110_bool == 0) goto Label_114; // 0x5d JumpB
	var_144_string = ""; // 0x5e PushV
	var_144_string = "Neutral"; // 0x5f MovS
	func_206(var_104_object, var_144_string); // 0x60 NEW_2
	var_161_int = 520631; // 0x62 PushI
	SetMessage(var_161_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_162_int = 520632; // 0x67 PushI
	var_163_int = 21842; // 0x68 PushI
	var_164_int = 21841; // 0x69 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x6a TObjFunc
	var_165_int = 520635; // 0x6c PushI
	var_166_int = -1; // 0x6d PushI
	var_167_int = 21844; // 0x6e PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x6f TObjFunc
	goto Label_176; // 0x71 Jump
	
Label_176:
	var_168_bool = 0; // 0xb0 PushV
	func_1155(var_168_bool); // 0xb1 NEW_2
	if(var_168_bool == 0) goto Label_191; // 0xb3 JumpB
	
Label_180:
	lshWaitForAnimEnd(); // 0xb4 Func
	var_169_string = var_3_string; // 0xb6 PushT
	if(var_169_string == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_190:
	goto Label_205; // 0xbe Jump
	
Label_205:
	return 0; // 0xcd Return
	
Label_185:
	var_170_string = ""; // 0xb9 PushV
	var_170_string = var_2_object; // 0xba MovT
	func_893(var_170_string); // 0xbb NEW_2
	goto Label_180; // 0xbd Jump
	
Label_191:
	var_181_string = "all"; // 0xbf PushS
	var_182_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_181_string, var_182_string); // 0xc1 Func
	
Label_195:
	WaitForAnimEnd(); // 0xc3 Func
	var_183_string = var_3_string; // 0xc5 PushT
	if(var_183_string == 0) goto Label_200; // 0xc6 JumpB
	goto Label_205; // 0xc7 Jump
	
Label_200:
	var_184_string = "all"; // 0xc8 PushS
	var_185_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_184_string, var_185_string); // 0xca Func
	goto Label_195; // 0xcc Jump
	
Label_114:
	var_186_bool = 0; // 0x72 PushV
	var_186_bool = 0; // 0x73 MovB
	var_187_bool = 0; var_188_object = Obj(); // 0x74 PushV
	var_188_object = var_1_object; // 0x75 MovT
	func_1032(var_188_object); // 0x76 NEW_2
	if(var_187_bool == 0) goto Label_128; // 0x78 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x79 PushV
	var_190_object = var_1_object; // 0x7a MovT
	func_1010(var_189_bool, var_190_object); // 0x7b NEW_2
	var_191_bool = var_189_bool == 0; // 0x7d Not
	if(var_191_bool == 0) goto Label_128; // 0x7e JumpB
	var_186_bool = 1; // 0x7f MovB
	
Label_128:
	if(var_186_bool == 0) goto Label_154; // 0x80 JumpB
	var_192_string = ""; // 0x81 PushV
	var_192_string = "Neutral"; // 0x82 MovS
	func_206(var_104_object, var_192_string); // 0x83 NEW_2
	var_193_int = 520636; // 0x85 PushI
	SetMessage(var_193_int); // 0x86 TObjFunc
	ClearReplies(); // 0x88 TObjFunc
	var_194_bool = 0; var_195_object = Obj(); // 0x8a PushV
	var_195_object = var_1_object; // 0x8b MovT
	func_1020(var_195_object); // 0x8c NEW_2
	if(var_194_bool == 0) goto Label_148; // 0x8e JumpB
	var_200_int = 520637; // 0x8f PushI
	var_201_int = 21847; // 0x90 PushI
	var_202_int = 21846; // 0x91 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x92 TObjFunc
	
Label_148:
	var_203_int = 520693; // 0x94 PushI
	var_204_int = -1; // 0x95 PushI
	var_205_int = 21903; // 0x96 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x97 TObjFunc
	goto Label_176; // 0x99 Jump
	
Label_154:
	var_206_string = ""; // 0x9a PushV
	var_206_string = "Neutral"; // 0x9b MovS
	func_206(var_104_object, var_206_string); // 0x9c NEW_2
	var_207_int = 520694; // 0x9e PushI
	SetMessage(var_207_int); // 0x9f TObjFunc
	ClearReplies(); // 0xa1 TObjFunc
	var_208_int = 520695; // 0xa3 PushI
	var_209_int = -1; // 0xa4 PushI
	var_210_int = 21905; // 0xa5 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xa6 TObjFunc
	var_211_int = 520696; // 0xa8 PushI
	var_212_int = -1; // 0xa9 PushI
	var_213_int = 21906; // 0xaa PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xab TObjFunc
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
	func_977(var_31_int); // 0x2d5 NEW_2
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
	func_970(var_53_string, var_54_int); // 0x2f1 NEW_2
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


func_970(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x3ca PushV
	var_40_string = "idle"; // 0x3cb MovS
	var_41_int = var_38_int; // 0x3cc Push
	if(var_41_int == 0) goto Label_975; // 0x3cd JumpB
	var_40_string = var_40_string + var_38_int; // 0x3ce Add2
	
Label_975:
	var_37_string = var_40_string; // 0x3cf Mov
	return 2; // 0x3d0 Return
}


func_206(var_2_object, var_144_string)
{
	var_145_bool = 0; // 0xcf PushV
	func_1155(var_145_bool); // 0xd0 NEW_2
	var_146_bool = var_145_bool == 0; // 0xd2 Not
	if(var_146_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_147_bool = var_144_string == var_2_object; // 0xd5 Eq
	if(var_147_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_148_string = ""; var_149_bool = 0; // 0xd8 PushV
	var_148_string = var_144_string; // 0xd9 Mov
	var_150_string = ""; // 0xda PushS
	var_151_bool = var_144_string == var_150_string; // 0xdb Eq
	if(var_151_bool == 0) goto Label_223; // 0xdc JumpB
	var_149_bool = 0; // 0xdd MovB
	goto Label_224; // 0xde Jump
	
Label_224:
	func_909(var_148_string, var_149_bool); // 0xe0 NEW_2
	var_2_object = var_144_string; // 0xe2 TMov
	return 0; // 0xe3 Return
	
Label_223:
	var_149_bool = 1; // 0xdf MovB
}


func_1102(var_34_bool, var_35_object, var_36_int)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; // 0x44e PushV
	var_43_object = Obj(); // 0x44f PushV
	func_1089(var_43_object); // 0x450 NEW_2
	var_40_object = var_43_object; // 0x451 Mov
	Find(var_36_int, var_41_object); // 0x453 ObjFunc
	var_48_bool = var_41_object == 0; // 0x455 Not
	if(var_48_bool == 0) goto Label_1117; // 0x456 JumpB
	var_49_string = "Can't find diary parent with id: "; // 0x457 PushS
	var_50_int = var_49_string + var_36_int; // 0x458 Add
	Trace(var_50_int); // 0x459 Func
	var_34_bool = 0; // 0x45b MovB
	return 6; // 0x45c Return
	
Label_1117:
	AddChild(var_35_object); // 0x45d ObjFunc
	var_51_int = 7; // 0x45f PushI
	SendWorldWndMessage(var_51_int); // 0x460 Func
	GetCategory(var_42_int); // 0x462 ObjFunc
	SetDiarySection(var_42_int); // 0x464 Func
	var_34_bool = 0; // 0x466 MovB
	return 6; // 0x467 Return
}


func_977(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x3d1 PushV
	var_34_int = 0; // 0x3d2 MovI
	
Label_979:
	var_36_string = "all"; // 0x3d3 PushS
	var_37_string = ""; var_38_int = 0; // 0x3d4 PushV
	var_38_int = var_34_int; // 0x3d5 Mov
	func_970(var_37_string, var_38_int); // 0x3d6 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x3d8 Func
	var_42_bool = var_35_bool == 0; // 0x3da Not
	if(var_42_bool == 0) goto Label_989; // 0x3db JumpB
	goto Label_992; // 0x3dc Jump
	
Label_992:
	var_31_int = var_34_int; // 0x3e0 Mov
	return 4; // 0x3e1 Return
	
Label_989:
	var_43_int = 1; // 0x3dd PushI
	var_34_int = var_34_int + var_43_int; // 0x3de Add2
	goto Label_979; // 0x3df Jump
}


func_994()
{
	var_23_string = "oob6Morlok1"; // 0x3e3 PushS
	var_24_int = 1; // 0x3e4 PushI
	SetVariable(var_23_string, var_24_int); // 0x3e5 Func
	return 0; // 0x3e7 Return
}


func_1000()
{
	var_14_int = 1; // 0x3e9 PushI
	SetReturnValue(var_14_int); // 0x3ea ObjFunc
	return 0; // 0x3ec Return
}


func_1130(var_94_int)
{
	var_95_int = 0; var_96_int = 0; // 0x46a PushV
	var_97_string = "branch"; // 0x46b PushS
	GetVariable(var_97_string, var_96_int); // 0x46c Func
	var_98_int = 0; // 0x46e PushI
	var_99_bool = var_96_int == var_98_int; // 0x46f Eq
	if(var_99_bool == 0) goto Label_1140; // 0x470 JumpB
	var_94_int = 1; // 0x471 MovI
	return 2; // 0x472 Return
	
Label_1140:
	var_100_int = 1; // 0x474 PushI
	var_101_bool = var_96_int == var_100_int; // 0x475 Eq
	if(var_101_bool == 0) goto Label_1145; // 0x476 JumpB
	var_94_int = 2; // 0x477 MovI
	return 2; // 0x478 Return
	
Label_1145:
	var_94_int = 3; // 0x479 MovI
	return 2; // 0x47a Return
}


func_875()
{
	var_216_bool = 0; var_217_bool = 0; // 0x36b PushV
	var_218_bool = 1; // 0x36c PushB
	CameraSwitchToNormal(var_218_bool); // 0x36d Func
	var_219_bool = 0; // 0x36f PushV
	func_1155(var_219_bool); // 0x370 NEW_2
	if(var_219_bool == 0) goto Label_884; // 0x372 JumpB
	goto Label_892; // 0x373 Jump
	
Label_892:
	return 2; // 0x37c Return
	
Label_884:
	var_220_string = "head"; // 0x374 PushS
	HasAnimationTrack(var_217_bool, var_220_string); // 0x375 Func
	var_221_bool = var_217_bool; // 0x377 Push
	if(var_221_bool == 0) goto Label_892; // 0x378 JumpB
	var_222_string = "head"; // 0x379 PushS
	UnlookAsync(var_222_string); // 0x37a Func
}


func_1005()
{
	func_1076(); // 0x3ef NEW_2
	return 0; // 0x3f1 Return
}


func_1010(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj(); // 0x3f3 PushV
	var_122_object = var_120_object; // 0x3f4 Mov
	func_1044(var_122_object); // 0x3f5 NEW_2
	if(var_121_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_119_bool = 1; // 0x3f8 MovB
	return 0; // 0x3f9 Return
	
Label_1018:
	var_119_bool = 0; // 0x3fa MovB
	return 0; // 0x3fb Return
}


func_1147(var_91_int)
{
	var_91_int = 521048; // 0x47b MovI
	return 0; // 0x47c Return
}


func_1020(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x3fd PushV
	var_197_string = "oob6Morlok1"; // 0x3fe MovS
	func_953(var_196_int, var_197_string); // 0x3ff NEW_2
	var_198_int = 0; // 0x401 PushI
	var_199_bool = var_196_int == var_198_int; // 0x402 Eq
	if(var_199_bool == 0) goto Label_1030; // 0x403 JumpB
	var_194_bool = 1; // 0x404 MovB
	return 0; // 0x405 Return
	
Label_1030:
	var_194_bool = 0; // 0x406 MovB
	return 0; // 0x407 Return
}


func_1149(var_90_int)
{
	var_90_int = 521047; // 0x47d MovI
	return 0; // 0x47e Return
}


func_1151(var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png"; // 0x47f MovS
	return 0; // 0x480 Return
}


