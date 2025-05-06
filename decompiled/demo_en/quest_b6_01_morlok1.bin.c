task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xe5 PushI
	if(var_8_int == 0) goto Label_542; // 0xe6 JumpB
	func_907(); // 0xe8 NEW_2
	var_10_int = 21843; // 0xea PushI
	var_11_bool = var_7_bool == var_10_int; // 0xeb Eq
	if(var_11_bool == 0) goto Label_242; // 0xec JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xed PushV
	var_12_object = var_1_object; // 0xee MovT
	var_13_object = var_0_object; // 0xef MovT
	func_983(); // 0xf0 NEW_2
	
Label_242:
	var_15_int = 21844; // 0xf2 PushI
	var_16_bool = var_7_bool == var_15_int; // 0xf3 Eq
	if(var_16_bool == 0) goto Label_250; // 0xf4 JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xf5 PushV
	var_17_object = var_1_object; // 0xf6 MovT
	var_18_object = var_0_object; // 0xf7 MovT
	func_983(); // 0xf8 NEW_2
	
Label_250:
	var_19_int = 21846; // 0xfa PushI
	var_20_bool = var_7_bool == var_19_int; // 0xfb Eq
	if(var_20_bool == 0) goto Label_258; // 0xfc JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xfd PushV
	var_21_object = var_1_object; // 0xfe MovT
	var_22_object = var_0_object; // 0xff MovT
	func_977(); // 0x100 NEW_2
	
Label_258:
	var_25_int = 21856; // 0x102 PushI
	var_26_bool = var_7_bool == var_25_int; // 0x103 Eq
	if(var_26_bool == 0) goto Label_266; // 0x104 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x105 PushV
	var_27_object = var_1_object; // 0x106 MovT
	var_28_object = var_0_object; // 0x107 MovT
	func_988(); // 0x108 NEW_2
	
Label_266:
	var_52_int = 21861; // 0x10a PushI
	var_53_bool = var_7_bool == var_52_int; // 0x10b Eq
	if(var_53_bool == 0) goto Label_274; // 0x10c JumpB
	var_54_object = Obj(); var_55_object = Obj(); // 0x10d PushV
	var_54_object = var_1_object; // 0x10e MovT
	var_55_object = var_0_object; // 0x10f MovT
	func_988(); // 0x110 NEW_2
	
Label_274:
	var_56_int = 21840; // 0x112 PushI
	var_57_bool = var_6_int == var_56_int; // 0x113 Eq
	if(var_57_bool == 0) goto Label_371; // 0x114 JumpB
	var_58_bool = 0; // 0x115 PushV
	var_58_bool = 0; // 0x116 MovB
	var_59_bool = 0; var_60_object = Obj(); // 0x117 PushV
	var_60_object = var_1_object; // 0x118 MovT
	func_1015(var_60_object); // 0x119 NEW_2
	if(var_59_bool == 0) goto Label_290; // 0x11b JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0x11c PushV
	var_68_object = var_1_object; // 0x11d MovT
	func_993(var_67_bool, var_68_object); // 0x11e NEW_2
	if(var_67_bool == 0) goto Label_290; // 0x120 JumpB
	var_58_bool = 1; // 0x121 MovB
	
Label_290:
	if(var_58_bool == 0) goto Label_311; // 0x122 JumpB
	var_92_string = ""; // 0x123 PushV
	var_92_string = "Neutral"; // 0x124 MovS
	func_206(var_7_bool, var_92_string); // 0x125 NEW_2
	var_104_int = 520631; // 0x127 PushI
	SetMessage(var_104_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_105_int = 520632; // 0x12c PushI
	var_106_int = 21842; // 0x12d PushI
	var_107_int = 21841; // 0x12e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x12f TObjFunc
	var_108_int = 520635; // 0x131 PushI
	var_109_int = -1; // 0x132 PushI
	var_110_int = 21844; // 0x133 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_111_bool = 0; // 0x137 PushV
	var_111_bool = 0; // 0x138 MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x139 PushV
	var_113_object = var_1_object; // 0x13a MovT
	func_1015(var_113_object); // 0x13b NEW_2
	if(var_112_bool == 0) goto Label_325; // 0x13d JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x13e PushV
	var_115_object = var_1_object; // 0x13f MovT
	func_993(var_114_bool, var_115_object); // 0x140 NEW_2
	var_116_bool = var_114_bool == 0; // 0x142 Not
	if(var_116_bool == 0) goto Label_325; // 0x143 JumpB
	var_111_bool = 1; // 0x144 MovB
	
Label_325:
	if(var_111_bool == 0) goto Label_351; // 0x145 JumpB
	var_117_string = ""; // 0x146 PushV
	var_117_string = "Neutral"; // 0x147 MovS
	func_206(var_7_bool, var_117_string); // 0x148 NEW_2
	var_118_int = 520636; // 0x14a PushI
	SetMessage(var_118_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_119_bool = 0; var_120_object = Obj(); // 0x14f PushV
	var_120_object = var_1_object; // 0x150 MovT
	func_1003(var_120_object); // 0x151 NEW_2
	if(var_119_bool == 0) goto Label_345; // 0x153 JumpB
	var_125_int = 520637; // 0x154 PushI
	var_126_int = 21847; // 0x155 PushI
	var_127_int = 21846; // 0x156 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x157 TObjFunc
	
Label_345:
	var_128_int = 520693; // 0x159 PushI
	var_129_int = -1; // 0x15a PushI
	var_130_int = 21903; // 0x15b PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_131_string = ""; // 0x15f PushV
	var_131_string = "Neutral"; // 0x160 MovS
	func_206(var_7_bool, var_131_string); // 0x161 NEW_2
	var_132_int = 520694; // 0x163 PushI
	SetMessage(var_132_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_133_int = 520695; // 0x168 PushI
	var_134_int = -1; // 0x169 PushI
	var_135_int = 21905; // 0x16a PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x16b TObjFunc
	var_136_int = 520696; // 0x16d PushI
	var_137_int = -1; // 0x16e PushI
	var_138_int = 21906; // 0x16f PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_139_int = 21847; // 0x173 PushI
	var_140_bool = var_6_int == var_139_int; // 0x174 Eq
	if(var_140_bool == 0) goto Label_389; // 0x175 JumpB
	var_141_string = ""; // 0x176 PushV
	var_141_string = "Neutral"; // 0x177 MovS
	func_206(var_7_bool, var_141_string); // 0x178 NEW_2
	var_142_int = 520638; // 0x17a PushI
	SetMessage(var_142_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_143_int = 520639; // 0x17f PushI
	var_144_int = 21849; // 0x180 PushI
	var_145_int = 21848; // 0x181 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_146_int = 21849; // 0x185 PushI
	var_147_bool = var_6_int == var_146_int; // 0x186 Eq
	if(var_147_bool == 0) goto Label_412; // 0x187 JumpB
	var_148_string = ""; // 0x188 PushV
	var_148_string = "Neutral"; // 0x189 MovS
	func_206(var_7_bool, var_148_string); // 0x18a NEW_2
	var_149_int = 520640; // 0x18c PushI
	SetMessage(var_149_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_150_int = 520641; // 0x191 PushI
	var_151_int = 21851; // 0x192 PushI
	var_152_int = 21850; // 0x193 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x194 TObjFunc
	var_153_int = 520654; // 0x196 PushI
	var_154_int = 21858; // 0x197 PushI
	var_155_int = 21864; // 0x198 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_156_int = 21851; // 0x19c PushI
	var_157_bool = var_6_int == var_156_int; // 0x19d Eq
	if(var_157_bool == 0) goto Label_435; // 0x19e JumpB
	var_158_string = ""; // 0x19f PushV
	var_158_string = "Neutral"; // 0x1a0 MovS
	func_206(var_7_bool, var_158_string); // 0x1a1 NEW_2
	var_159_int = 520642; // 0x1a3 PushI
	SetMessage(var_159_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_160_int = 520643; // 0x1a8 PushI
	var_161_int = 21853; // 0x1a9 PushI
	var_162_int = 21852; // 0x1aa PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1ab TObjFunc
	var_163_int = 520653; // 0x1ad PushI
	var_164_int = 21858; // 0x1ae PushI
	var_165_int = 21862; // 0x1af PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_166_int = 21853; // 0x1b3 PushI
	var_167_bool = var_6_int == var_166_int; // 0x1b4 Eq
	if(var_167_bool == 0) goto Label_458; // 0x1b5 JumpB
	var_168_string = ""; // 0x1b6 PushV
	var_168_string = "Neutral"; // 0x1b7 MovS
	func_206(var_7_bool, var_168_string); // 0x1b8 NEW_2
	var_169_int = 520644; // 0x1ba PushI
	SetMessage(var_169_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_170_int = 520645; // 0x1bf PushI
	var_171_int = 21855; // 0x1c0 PushI
	var_172_int = 21854; // 0x1c1 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1c2 TObjFunc
	var_173_int = 520648; // 0x1c4 PushI
	var_174_int = 21858; // 0x1c5 PushI
	var_175_int = 21857; // 0x1c6 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_176_int = 21858; // 0x1ca PushI
	var_177_bool = var_6_int == var_176_int; // 0x1cb Eq
	if(var_177_bool == 0) goto Label_476; // 0x1cc JumpB
	var_178_string = ""; // 0x1cd PushV
	var_178_string = "Neutral"; // 0x1ce MovS
	func_206(var_7_bool, var_178_string); // 0x1cf NEW_2
	var_179_int = 520649; // 0x1d1 PushI
	SetMessage(var_179_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_180_int = 520650; // 0x1d6 PushI
	var_181_int = 21860; // 0x1d7 PushI
	var_182_int = 21859; // 0x1d8 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_183_int = 21860; // 0x1dc PushI
	var_184_bool = var_6_int == var_183_int; // 0x1dd Eq
	if(var_184_bool == 0) goto Label_494; // 0x1de JumpB
	var_185_string = ""; // 0x1df PushV
	var_185_string = "Neutral"; // 0x1e0 MovS
	func_206(var_7_bool, var_185_string); // 0x1e1 NEW_2
	var_186_int = 520651; // 0x1e3 PushI
	SetMessage(var_186_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_187_int = 520652; // 0x1e8 PushI
	var_188_int = -1; // 0x1e9 PushI
	var_189_int = 21861; // 0x1ea PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_190_int = 21855; // 0x1ee PushI
	var_191_bool = var_6_int == var_190_int; // 0x1ef Eq
	if(var_191_bool == 0) goto Label_512; // 0x1f0 JumpB
	var_192_string = ""; // 0x1f1 PushV
	var_192_string = "Neutral"; // 0x1f2 MovS
	func_206(var_7_bool, var_192_string); // 0x1f3 NEW_2
	var_193_int = 520646; // 0x1f5 PushI
	SetMessage(var_193_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_194_int = 520647; // 0x1fa PushI
	var_195_int = -1; // 0x1fb PushI
	var_196_int = 21856; // 0x1fc PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1fd TObjFunc
	return 0; // 0x1ff Return
	
Label_512:
	var_197_int = 21842; // 0x200 PushI
	var_198_bool = var_6_int == var_197_int; // 0x201 Eq
	if(var_198_bool == 0) goto Label_530; // 0x202 JumpB
	var_199_string = ""; // 0x203 PushV
	var_199_string = "Neutral"; // 0x204 MovS
	func_206(var_7_bool, var_199_string); // 0x205 NEW_2
	var_200_int = 520633; // 0x207 PushI
	SetMessage(var_200_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_201_int = 520634; // 0x20c PushI
	var_202_int = -1; // 0x20d PushI
	var_203_int = 21843; // 0x20e PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_3_string = 1; // 0x212 TMovB
	var_204_bool = 0; // 0x213 PushV
	func_1151(var_204_bool); // 0x214 NEW_2
	if(var_204_bool == 0) goto Label_538; // 0x216 JumpB
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
	func_799(); // 0x221 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x223 PushV
	var_32_object = var_6_object; // 0x224 Mov
	TaskCall(0); // 0x225 TaskCall
	func_0(var_33_object, var_31_int, var_32_object); // 0x226 NEW_2
	TaskReturn(); // 0x227 TaskReturn
	var_211_int = 1; // 0x229 PushI
	var_212_bool = var_33_object == var_211_int; // 0x22a Eq
	if(var_212_bool == 0) goto Label_645; // 0x22b JumpB
	var_213_object = Obj(); // 0x22c PushV
	func_930(var_213_object); // 0x22d NEW_2
	var_19_object = var_213_object; // 0x22e Mov
	CreateIntVector(var_20_object); // 0x230 Func
	var_216_int = 4; // 0x232 PushI
	GetItemCount(var_21_int, var_216_int); // 0x233 ObjFunc
	var_22_int = 0; // 0x235 MovI
	
Label_566:
	var_217_bool = var_22_int < var_21_int; // 0x236 LT
	if(var_217_bool == 0) goto Label_594; // 0x237 JumpB
	var_218_int = 4; // 0x238 PushI
	GetItem(var_23_object, var_22_int, var_218_int); // 0x239 ObjFunc
	GetItemID(var_24_int); // 0x23b ObjFunc
	var_219_string = "Microscope"; // 0x23d PushS
	HasInvItemProperty(var_25_bool, var_24_int, var_219_string); // 0x23e Func
	var_220_bool = var_25_bool == 0; // 0x240 Not
	if(var_220_bool == 0) goto Label_579; // 0x241 JumpB
	goto Label_591; // 0x242 Jump
	
Label_591:
	var_221_int = 1; // 0x24f PushI
	var_22_int = var_22_int + var_221_int; // 0x250 Add2
	goto Label_566; // 0x251 Jump
	
Label_579:
	var_222_string = "Microscope"; // 0x243 PushS
	GetInvItemProperty(var_26_int, var_24_int, var_222_string); // 0x244 Func
	var_223_int = 2; // 0x246 PushI
	var_224_bool = var_26_int != var_223_int; // 0x247 Neq
	if(var_224_bool == 0) goto Label_586; // 0x248 JumpB
	goto Label_591; // 0x249 Jump
	
Label_586:
	add(var_23_object); // 0x24a ObjFunc
	add(var_22_int); // 0x24c ObjFunc
	var_23_object = 0; // 0x24e SetNull
	
Label_594:
	size(var_21_int); // 0x252 ObjFunc
	var_225_int = 0; // 0x254 PushI
	var_226_bool = var_21_int == var_225_int; // 0x255 Eq
	if(var_226_bool == 0) goto Label_603; // 0x256 JumpB
	var_227_string = "b6q01 error, no blood to open bull"; // 0x257 PushS
	Trace(var_227_string); // 0x258 Func
	return 24; // 0x25a Return
	
Label_603:
	var_228_int = 1; // 0x25b PushI
	var_229_bool = var_21_int == var_228_int; // 0x25c Eq
	if(var_229_bool == 0) goto Label_608; // 0x25d JumpB
	var_27_int = 0; // 0x25e MovI
	goto Label_622; // 0x25f Jump
	
Label_622:
	get(var_29_object, var_27_int); // 0x26e ObjFunc
	get(var_30_int, var_27_int); // 0x270 ObjFunc
	var_230_int = 1; // 0x272 PushI
	var_231_int = 4; // 0x273 PushI
	RemoveItem(var_30_int, var_230_int, var_231_int); // 0x274 ObjFunc
	var_232_bool = 0; var_233_string = ""; var_234_string = ""; // 0x276 PushV
	var_233_string = "quest_b6_01"; // 0x277 MovS
	var_234_string = "sacrifice"; // 0x278 MovS
	func_941(var_232_bool, var_233_string, var_234_string); // 0x279 NEW_2
	var_238_string = "b6q01"; // 0x27b PushS
	var_239_int = 5; // 0x27c PushI
	SetVariable(var_238_string, var_239_int); // 0x27d Func
	func_1072(); // 0x280 NEW_2
	var_29_object = 0; // 0x282 SetNull
	var_20_object = 0; // 0x283 SetNull
	var_19_object = 0; // 0x284 SetNull
	
Label_645:
	return 24; // 0x285 Return
	
Label_608:
	CreateIntVector(var_28_object); // 0x260 Func
	ChooseItem(var_19_object, var_28_object); // 0x262 Func
	size(var_21_int); // 0x264 ObjFunc
	var_263_int = var_21_int; // 0x266 Push
	if(var_263_int == 0) goto Label_620; // 0x267 JumpB
	var_264_int = 0; // 0x268 PushI
	get(var_27_int, var_264_int); // 0x269 ObjFunc
	goto Label_621; // 0x26b Jump
	
Label_621:
	var_28_object = 0; // 0x26d SetNull
	
Label_620:
	return 24; // 0x26c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x2b0 PushS
	var_8_bool = var_6_string == var_7_string; // 0x2b1 Eq
	if(var_8_bool == 0) goto Label_694; // 0x2b2 JumpB
	func_667(var_6_string); // 0x2b4 NEW_2
	
Label_694:
	return 0; // 0x2b6 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x2b7 Func
	sync(); // 0x2b9 Func
	return 0; // 0x2bb Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2bc PushV
	var_6_bool = 0; // 0x2bd MovB
	var_7_object = var_0_object; // 0x2be PushT
	if(var_7_object == 0) goto Label_709; // 0x2bf JumpB
	var_8_bool = 0; // 0x2c0 PushV
	func_716(var_8_bool); // 0x2c1 NEW_2
	if(var_8_bool == 0) goto Label_709; // 0x2c3 JumpB
	var_6_bool = 1; // 0x2c4 MovB
	
Label_709:
	if(var_6_bool == 0) goto Label_715; // 0x2c5 JumpB
	var_9_object = Obj(); // 0x2c6 PushV
	func_914(var_9_object); // 0x2c7 NEW_2
	RemoveActor(var_9_object); // 0x2c9 Func
	
Label_715:
	return 0; // 0x2cb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x286 PushV
	
Label_647:
	var_8_bool = 0; // 0x287 PushV
	func_804(var_8_bool); // 0x288 NEW_2
	var_11_bool = var_8_bool == 0; // 0x28a Not
	if(var_11_bool == 0) goto Label_655; // 0x28b JumpB
	Hold(); // 0x28c Func
	goto Label_647; // 0x28e Jump
	
Label_655:
	var_12_int = 3; // 0x28f PushI
	rand(var_7_float, var_12_int); // 0x290 Func
	var_13_int = 3; // 0x292 PushI
	var_14_int = var_7_float + var_13_int; // 0x293 Add
	Sleep(var_14_int); // 0x294 Func
	func_718(); // 0x297 NEW_2
	goto Label_647; // 0x299 Jump
}


func_0(var_0_object, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x0 PushV
	var_0_object = var_32_object; // 0x1 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0x2 PushV
	var_43_object = var_32_object; // 0x3 Mov
	var_44_float = 110.0; // 0x4 MovF
	func_809(var_43_object, var_44_float); // 0x5 NEW_2
	var_88_bool = var_42_bool == 0; // 0x7 Not
	if(var_88_bool == 0) goto Label_11; // 0x8 JumpB
	var_31_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_38_object); // 0xb Func
	var_89_int = 0; // 0xd PushV
	func_1145(var_89_int); // 0xe NEW_2
	SetNPCName(var_89_int); // 0x10 ObjFunc
	var_90_int = 0; // 0x12 PushV
	func_1143(var_90_int); // 0x13 NEW_2
	SetNPCDescription(var_90_int); // 0x15 ObjFunc
	var_91_string = ""; // 0x17 PushV
	func_1147(var_91_string); // 0x18 NEW_2
	SetPhoto(var_91_string); // 0x1a ObjFunc
	var_92_string = ""; // 0x1c PushV
	func_1149(var_92_string); // 0x1d NEW_2
	SetPhoto2(var_92_string); // 0x1f ObjFunc
	var_93_int = 0; // 0x21 PushV
	func_1126(var_93_int); // 0x22 NEW_2
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
	var_203_bool = var_41_bool == 0; // 0x38 Not
	if(var_203_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_41_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_204_object = Obj(); // 0x3f PushV
	var_204_object = var_32_object; // 0x40 Mov
	func_877(); // 0x41 NEW_2
	StopDialog(var_38_object); // 0x43 Func
	GetReturnValue(var_40_int); // 0x45 ObjFunc
	var_31_int = var_40_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1027(var_120_bool)
{
	var_122_int = 0; var_123_int = 0; var_124_object = Obj(); var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_object = Obj(); var_131_int = 0; var_132_bool = 0; var_133_int = 0; // 0x403 PushV
	var_134_int = 4; // 0x404 PushI
	GetItemCount(var_128_int, var_134_int); // 0x405 ObjFunc
	var_129_int = 0; // 0x407 MovI
	
Label_1032:
	var_135_bool = var_129_int < var_128_int; // 0x408 LT
	if(var_135_bool == 0) goto Label_1057; // 0x409 JumpB
	var_136_int = 4; // 0x40a PushI
	GetItem(var_130_object, var_129_int, var_136_int); // 0x40b ObjFunc
	GetItemID(var_131_int); // 0x40d ObjFunc
	var_137_string = "Microscope"; // 0x40f PushS
	HasInvItemProperty(var_132_bool, var_131_int, var_137_string); // 0x410 Func
	var_138_bool = var_132_bool == 0; // 0x412 Not
	if(var_138_bool == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1054; // 0x414 Jump
	
Label_1054:
	var_139_int = 1; // 0x41e PushI
	var_129_int = var_129_int + var_139_int; // 0x41f Add2
	goto Label_1032; // 0x420 Jump
	
Label_1045:
	var_140_string = "Microscope"; // 0x415 PushS
	GetInvItemProperty(var_133_int, var_131_int, var_140_string); // 0x416 Func
	var_141_int = 2; // 0x418 PushI
	var_142_bool = var_133_int == var_141_int; // 0x419 Eq
	if(var_142_bool == 0) goto Label_1053; // 0x41a JumpB
	var_120_bool = 1; // 0x41b MovB
	return 12; // 0x41c Return
	
Label_1053:
	var_130_object = 0; // 0x41d SetNull
	
Label_1057:
	var_120_bool = 0; // 0x421 MovB
	return 12; // 0x422 Return
}


func_901(var_147_string, var_148_bool)
{
	var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; // 0x385 PushV
	lshGetAnimTimes(var_147_string, var_153_float, var_154_float); // 0x386 Func
	lshPlayAnimation(var_153_float, var_154_float, var_148_bool); // 0x388 Func
	return 4; // 0x38a Return
}


func_907()
{
	var_9_bool = 0; // 0x38b PushV
	func_1151(var_9_bool); // 0x38c NEW_2
	if(var_9_bool == 0) goto Label_913; // 0x38e JumpB
	lshStopSpeech(); // 0x38f Func
	
Label_913:
	return 0; // 0x391 Return
}


func_914(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x392 PushV
	self(var_11_object); // 0x393 Func
	var_9_object = var_11_object; // 0x395 Mov
	return 2; // 0x396 Return
}


func_920(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x398 PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x399 Or
	var_73_float = sqrt(var_74_int); // 0x39a Sqrt2
	var_75_float = 0.0; // 0x39b PushF
	var_76_bool = var_73_float < var_75_float; // 0x39c LT
	if(var_76_bool == 0) goto Label_928; // 0x39d JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x39e MovV
	return 2; // 0x39f Return
	
Label_928:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x3a0 Div2
	return 2; // 0x3a1 Return
}


func_667(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x29b PushV
	var_0_object = 1; // 0x29c TMovB
	IsLoaded(var_10_bool); // 0x29d Func
	var_11_bool = 0; // 0x29f PushV
	var_11_bool = 0; // 0x2a0 MovB
	var_12_bool = var_10_bool == 0; // 0x2a1 Not
	if(var_12_bool == 0) goto Label_680; // 0x2a2 JumpB
	var_13_bool = 0; // 0x2a3 PushV
	func_716(var_13_bool); // 0x2a4 NEW_2
	if(var_13_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_11_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_11_bool == 0) goto Label_686; // 0x2a8 JumpB
	var_14_object = Obj(); // 0x2a9 PushV
	func_914(var_14_object); // 0x2aa NEW_2
	RemoveActor(var_14_object); // 0x2ac Func
	
Label_686:
	return 2; // 0x2ae Return
}


func_797(var_56_bool)
{
	var_56_bool = 1; // 0x31d MovB
	return 0; // 0x31e Return
}


func_799()
{
	StopAnimation(); // 0x31f Func
	StopGroup0(); // 0x321 Func
	return 0; // 0x323 Return
}


func_930(var_213_object)
{
	var_214_object = Obj(); var_215_object = Obj(); // 0x3a2 PushV
	CreateObjectVector(var_215_object); // 0x3a3 Func
	var_213_object = var_215_object; // 0x3a5 Mov
	return 2; // 0x3a6 Return
}


func_1059()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x423 PushV
	var_31_int = 365; // 0x424 PushI
	var_32_int = 1; // 0x425 PushI
	var_33_int = 525665; // 0x426 PushI
	CreateDiaryEntry(var_30_object, var_31_int, var_32_int, var_33_int); // 0x427 Func
	var_34_bool = 0; var_35_object = Obj(); var_36_int = 0; // 0x429 PushV
	var_35_object = var_30_object; // 0x42a Mov
	var_36_int = 265; // 0x42b MovI
	func_1098(var_34_bool, var_35_object, var_36_int); // 0x42c NEW_2
	return 2; // 0x42e Return
}


func_804(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x324 PushV
	IsLoaded(var_10_bool); // 0x325 Func
	var_8_bool = var_10_bool; // 0x327 Mov
	return 2; // 0x328 Return
}


func_936(var_112_int, var_113_string)
{
	var_114_int = 0; var_115_int = 0; // 0x3a8 PushV
	GetVariable(var_113_string, var_115_int); // 0x3a9 Func
	var_112_int = var_115_int; // 0x3ab Mov
	return 2; // 0x3ac Return
}


func_809(var_42_bool, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0; // 0x329 PushV
	GetPosition(var_55_cvector); // 0x32a ObjFunc
	GetEyesHeight(var_54_float); // 0x32c ObjFunc
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x32e PushE
	var_63_float = var_63_float + var_54_float; // 0x32f Add2
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x330 PopE
	GetPosition(var_56_cvector); // 0x331 Func
	GetEyesHeight(var_54_float); // 0x333 Func
	var_64_float = GetByIndex(var_56_cvector, 1); // 0x335 PushE
	var_64_float = var_64_float + var_54_float; // 0x336 Add2
	SetByIndex(var_56_cvector, 1) = var_64_float; // 0x337 PopE
	var_57_cvector = var_55_cvector - var_56_cvector; // 0x338 Sub2
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x339 PushE
	var_65_float = 0; // 0x33a MovI
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x33b PopE
	var_66_int = var_57_cvector | var_57_cvector; // 0x33c Or
	var_67_float = sqrt(var_66_int); // 0x33d Sqrt
	var_57_cvector = var_57_cvector / var_57_cvector; // 0x33e Div2
	var_58_cvector = -var_57_cvector; // 0x33f Neg2
	var_68_float = var_57_cvector * var_44_float; // 0x340 Mult
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x341 PushV
	var_71_cvector = CVector(0.0, 1.0, 0.0); // 0x342 PushVec
	var_70_cvector = var_58_cvector ^ var_71_cvector; // 0x343 Xor2
	func_920(var_69_cvector, var_70_cvector); // 0x344 NEW_2
	var_77_int = 25; // 0x346 PushI
	var_78_float = var_69_cvector * var_77_int; // 0x347 Mult
	var_79_int = var_68_float + var_78_float; // 0x348 Add
	var_80_cvector = CVector(0.0, 10.0, 0.0); // 0x349 PushVec
	var_59_cvector = var_79_int - var_80_cvector; // 0x34a Sub2
	var_60_cvector = var_56_cvector + var_59_cvector; // 0x34b Add2
	IsOverrideActive(var_61_bool); // 0x34c Func
	var_81_bool = var_61_bool; // 0x34e Push
	if(var_81_bool == 0) goto Label_850; // 0x34f JumpB
	var_42_bool = 0; // 0x350 MovB
	return 18; // 0x351 Return
	
Label_850:
	StopWorld(); // 0x352 Func
	CameraTransit(var_60_cvector, var_58_cvector); // 0x354 Func
	var_82_float = GetByIndex(var_59_cvector, 0); // 0x356 PushE
	var_83_float = GetByIndex(var_59_cvector, 2); // 0x357 PushE
	Rotate(var_82_float, var_83_float); // 0x358 Func
	var_84_bool = 0; // 0x35a PushV
	func_1151(var_84_bool); // 0x35b NEW_2
	if(var_84_bool == 0) goto Label_863; // 0x35d JumpB
	goto Label_871; // 0x35e Jump
	
Label_871:
	CameraWaitForPlayFinish(); // 0x367 Func
	ResumeWorld(); // 0x369 Func
	var_42_bool = 1; // 0x36b MovB
	return 18; // 0x36c Return
	
Label_863:
	var_85_string = "head"; // 0x35f PushS
	HasAnimationTrack(var_62_bool, var_85_string); // 0x360 Func
	var_86_bool = var_62_bool; // 0x362 Push
	if(var_86_bool == 0) goto Label_871; // 0x363 JumpB
	var_87_string = "head"; // 0x364 PushS
	LookAsyncCamera(var_87_string); // 0x365 Func
}


func_941(var_232_bool, var_233_string, var_234_string)
{
	var_235_object = Obj(); var_236_object = Obj(); // 0x3ad PushV
	FindActor(var_236_object, var_233_string); // 0x3ae Func
	var_237_bool = var_236_object == 0; // 0x3b0 NullEq
	if(var_237_bool == 0) goto Label_948; // 0x3b1 JumpB
	var_232_bool = 0; // 0x3b2 MovB
	return 2; // 0x3b3 Return
	
Label_948:
	Trigger(var_236_object, var_234_string); // 0x3b4 Func
	var_232_bool = 1; // 0x3b6 MovB
	return 2; // 0x3b7 Return
}


func_1072()
{
	var_240_object = Obj(); var_241_object = Obj(); // 0x430 PushV
	var_242_int = 367; // 0x431 PushI
	var_243_int = 1; // 0x432 PushI
	var_244_int = 525667; // 0x433 PushI
	CreateDiaryEntry(var_241_object, var_242_int, var_243_int, var_244_int); // 0x434 Func
	var_245_bool = 0; var_246_object = Obj(); var_247_int = 0; // 0x436 PushV
	var_246_object = var_241_object; // 0x437 Mov
	var_247_int = 265; // 0x438 MovI
	func_1098(var_245_bool, var_246_object, var_247_int); // 0x439 NEW_2
	return 2; // 0x43b Return
}


func_953(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x3b9 PushV
	var_40_string = "idle"; // 0x3ba MovS
	var_41_int = var_38_int; // 0x3bb Push
	if(var_41_int == 0) goto Label_958; // 0x3bc JumpB
	var_40_string = var_40_string + var_38_int; // 0x3bd Add2
	
Label_958:
	var_37_string = var_40_string; // 0x3be Mov
	return 2; // 0x3bf Return
}


func_1085(var_254_object)
{
	var_255_object = Obj(); var_256_object = Obj(); // 0x43d PushV
	GetDiaryRoot(var_256_object); // 0x43e Func
	var_257_bool = var_256_object == 0; // 0x440 Not
	if(var_257_bool == 0) goto Label_1095; // 0x441 JumpB
	var_258_string = "Can't retrieve diary root"; // 0x442 PushS
	Trace(var_258_string); // 0x443 Func
	var_254_object = 0; // 0x445 MovB
	return 2; // 0x446 Return
	
Label_1095:
	var_254_object = var_256_object; // 0x447 Mov
	return 2; // 0x448 Return
}


func_960(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x3c0 PushV
	var_34_int = 0; // 0x3c1 MovI
	
Label_962:
	var_36_string = "all"; // 0x3c2 PushS
	var_37_string = ""; var_38_int = 0; // 0x3c3 PushV
	var_38_int = var_34_int; // 0x3c4 Mov
	func_953(var_37_string, var_38_int); // 0x3c5 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x3c7 Func
	var_42_bool = var_35_bool == 0; // 0x3c9 Not
	if(var_42_bool == 0) goto Label_972; // 0x3ca JumpB
	goto Label_975; // 0x3cb Jump
	
Label_975:
	var_31_int = var_34_int; // 0x3cf Mov
	return 4; // 0x3d0 Return
	
Label_972:
	var_43_int = 1; // 0x3cc PushI
	var_34_int = var_34_int + var_43_int; // 0x3cd Add2
	goto Label_962; // 0x3ce Jump
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
	func_1015(var_111_object); // 0x54 NEW_2
	if(var_110_bool == 0) goto Label_93; // 0x56 JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0x57 PushV
	var_119_object = var_1_object; // 0x58 MovT
	func_993(var_118_bool, var_119_object); // 0x59 NEW_2
	if(var_118_bool == 0) goto Label_93; // 0x5b JumpB
	var_109_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_109_bool == 0) goto Label_114; // 0x5d JumpB
	var_143_string = ""; // 0x5e PushV
	var_143_string = "Neutral"; // 0x5f MovS
	func_206(var_103_object, var_143_string); // 0x60 NEW_2
	var_155_int = 520631; // 0x62 PushI
	SetMessage(var_155_int); // 0x63 TObjFunc
	ClearReplies(); // 0x65 TObjFunc
	var_156_int = 520632; // 0x67 PushI
	var_157_int = 21842; // 0x68 PushI
	var_158_int = 21841; // 0x69 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x6a TObjFunc
	var_159_int = 520635; // 0x6c PushI
	var_160_int = -1; // 0x6d PushI
	var_161_int = 21844; // 0x6e PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x6f TObjFunc
	goto Label_176; // 0x71 Jump
	
Label_176:
	var_162_bool = 0; // 0xb0 PushV
	func_1151(var_162_bool); // 0xb1 NEW_2
	if(var_162_bool == 0) goto Label_191; // 0xb3 JumpB
	
Label_180:
	lshWaitForAnimEnd(); // 0xb4 Func
	var_163_string = var_3_string; // 0xb6 PushT
	if(var_163_string == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_190:
	goto Label_205; // 0xbe Jump
	
Label_205:
	return 0; // 0xcd Return
	
Label_185:
	var_164_string = ""; // 0xb9 PushV
	var_164_string = var_2_object; // 0xba MovT
	func_894(var_164_string); // 0xbb NEW_2
	goto Label_180; // 0xbd Jump
	
Label_191:
	var_170_string = "all"; // 0xbf PushS
	var_171_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_170_string, var_171_string); // 0xc1 Func
	
Label_195:
	WaitForAnimEnd(); // 0xc3 Func
	var_172_string = var_3_string; // 0xc5 PushT
	if(var_172_string == 0) goto Label_200; // 0xc6 JumpB
	goto Label_205; // 0xc7 Jump
	
Label_200:
	var_173_string = "all"; // 0xc8 PushS
	var_174_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_173_string, var_174_string); // 0xca Func
	goto Label_195; // 0xcc Jump
	
Label_114:
	var_175_bool = 0; // 0x72 PushV
	var_175_bool = 0; // 0x73 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0x74 PushV
	var_177_object = var_1_object; // 0x75 MovT
	func_1015(var_177_object); // 0x76 NEW_2
	if(var_176_bool == 0) goto Label_128; // 0x78 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x79 PushV
	var_179_object = var_1_object; // 0x7a MovT
	func_993(var_178_bool, var_179_object); // 0x7b NEW_2
	var_180_bool = var_178_bool == 0; // 0x7d Not
	if(var_180_bool == 0) goto Label_128; // 0x7e JumpB
	var_175_bool = 1; // 0x7f MovB
	
Label_128:
	if(var_175_bool == 0) goto Label_154; // 0x80 JumpB
	var_181_string = ""; // 0x81 PushV
	var_181_string = "Neutral"; // 0x82 MovS
	func_206(var_103_object, var_181_string); // 0x83 NEW_2
	var_182_int = 520636; // 0x85 PushI
	SetMessage(var_182_int); // 0x86 TObjFunc
	ClearReplies(); // 0x88 TObjFunc
	var_183_bool = 0; var_184_object = Obj(); // 0x8a PushV
	var_184_object = var_1_object; // 0x8b MovT
	func_1003(var_184_object); // 0x8c NEW_2
	if(var_183_bool == 0) goto Label_148; // 0x8e JumpB
	var_189_int = 520637; // 0x8f PushI
	var_190_int = 21847; // 0x90 PushI
	var_191_int = 21846; // 0x91 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x92 TObjFunc
	
Label_148:
	var_192_int = 520693; // 0x94 PushI
	var_193_int = -1; // 0x95 PushI
	var_194_int = 21903; // 0x96 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x97 TObjFunc
	goto Label_176; // 0x99 Jump
	
Label_154:
	var_195_string = ""; // 0x9a PushV
	var_195_string = "Neutral"; // 0x9b MovS
	func_206(var_103_object, var_195_string); // 0x9c NEW_2
	var_196_int = 520694; // 0x9e PushI
	SetMessage(var_196_int); // 0x9f TObjFunc
	ClearReplies(); // 0xa1 TObjFunc
	var_197_int = 520695; // 0xa3 PushI
	var_198_int = -1; // 0xa4 PushI
	var_199_int = 21905; // 0xa5 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xa6 TObjFunc
	var_200_int = 520696; // 0xa8 PushI
	var_201_int = -1; // 0xa9 PushI
	var_202_int = 21906; // 0xaa PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xab TObjFunc
	goto Label_176; // 0xad Jump
}


func_1098(var_245_bool, var_246_object, var_247_int)
{
	var_248_object = Obj(); var_249_object = Obj(); var_250_int = 0; var_251_object = Obj(); var_252_object = Obj(); var_253_int = 0; // 0x44a PushV
	var_254_object = Obj(); // 0x44b PushV
	func_1085(var_254_object); // 0x44c NEW_2
	var_251_object = var_254_object; // 0x44d Mov
	Find(var_247_int, var_252_object); // 0x44f ObjFunc
	var_259_bool = var_252_object == 0; // 0x451 Not
	if(var_259_bool == 0) goto Label_1113; // 0x452 JumpB
	var_260_string = "Can't find diary parent with id: "; // 0x453 PushS
	var_261_int = var_260_string + var_247_int; // 0x454 Add
	Trace(var_261_int); // 0x455 Func
	var_245_bool = 0; // 0x457 MovB
	return 6; // 0x458 Return
	
Label_1113:
	AddChild(var_246_object); // 0x459 ObjFunc
	var_262_int = 7; // 0x45b PushI
	SendWorldWndMessage(var_262_int); // 0x45c Func
	GetCategory(var_253_int); // 0x45e ObjFunc
	SetDiarySection(var_253_int); // 0x460 Func
	var_245_bool = 0; // 0x462 MovB
	return 6; // 0x463 Return
}


func_716(var_8_bool)
{
	var_8_bool = 1; // 0x2cc MovB
	return 0; // 0x2cd Return
}


func_206(var_2_object, var_143_string)
{
	var_144_bool = 0; // 0xcf PushV
	func_1151(var_144_bool); // 0xd0 NEW_2
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
	func_901(var_147_string, var_148_bool); // 0xe0 NEW_2
	var_2_object = var_143_string; // 0xe2 TMov
	return 0; // 0xe3 Return
	
Label_223:
	var_148_bool = 1; // 0xdf MovB
}


func_718()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x2ce PushV
	WaitForAnimEnd(); // 0x2cf Func
	var_29_bool = 0; // 0x2d1 PushV
	func_804(var_29_bool); // 0x2d2 NEW_2
	var_30_bool = var_29_bool == 0; // 0x2d4 Not
	if(var_30_bool == 0) goto Label_727; // 0x2d5 JumpB
	return 14; // 0x2d6 Return
	
Label_727:
	var_31_int = 0; // 0x2d7 PushV
	func_960(var_31_int); // 0x2d8 NEW_2
	var_22_int = var_31_int; // 0x2d9 Mov
	var_23_int = 0; // 0x2db MovI
	
Label_732:
	var_44_bool = 0; // 0x2dc PushV
	var_44_bool = 0; // 0x2dd MovB
	var_45_int = 5; // 0x2de PushI
	var_46_bool = var_23_int < var_45_int; // 0x2df LT
	if(var_46_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_47_bool = 0; // 0x2e1 PushV
	func_804(var_47_bool); // 0x2e2 NEW_2
	if(var_47_bool == 0) goto Label_742; // 0x2e4 JumpB
	var_44_bool = 1; // 0x2e5 MovB
	
Label_742:
	if(var_44_bool == 0) goto Label_794; // 0x2e6 JumpB
	var_48_int = 3; // 0x2e7 PushI
	irand(var_24_int, var_48_int); // 0x2e8 Func
	var_49_int = 0; // 0x2ea PushI
	var_50_bool = var_24_int == var_49_int; // 0x2eb Eq
	if(var_50_bool == 0) goto Label_766; // 0x2ec JumpB
	var_51_int = var_22_int; // 0x2ed Push
	if(var_51_int == 0) goto Label_765; // 0x2ee JumpB
	irand(var_25_int, var_22_int); // 0x2ef Func
	var_52_string = "all"; // 0x2f1 PushS
	var_53_string = ""; var_54_int = 0; // 0x2f2 PushV
	var_54_int = var_25_int; // 0x2f3 Mov
	func_953(var_53_string, var_54_int); // 0x2f4 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x2f6 Func
	WaitForAnimEnd(var_26_bool); // 0x2f8 Func
	var_55_bool = var_26_bool == 0; // 0x2fa Not
	if(var_55_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_794; // 0x2fc Jump
	
Label_794:
	ResetAAS(); // 0x31a Func
	return 14; // 0x31c Return
	
Label_765:
	goto Label_783; // 0x2fd Jump
	
Label_783:
	var_56_bool = 0; // 0x30f PushV
	func_797(var_56_bool); // 0x310 NEW_2
	var_57_bool = var_56_bool == 0; // 0x312 Not
	if(var_57_bool == 0) goto Label_789; // 0x313 JumpB
	goto Label_794; // 0x314 Jump
	
Label_789:
	ResetAAS(); // 0x315 Func
	var_58_int = 1; // 0x317 PushI
	var_23_int = var_23_int + var_58_int; // 0x318 Add2
	goto Label_732; // 0x319 Jump
	
Label_766:
	var_59_int = 1; // 0x2fe PushI
	var_60_bool = var_24_int == var_59_int; // 0x2ff Eq
	if(var_60_bool == 0) goto Label_780; // 0x300 JumpB
	var_61_int = 4; // 0x301 PushI
	rand(var_27_float, var_61_int); // 0x302 Func
	var_62_int = 1; // 0x304 PushI
	var_63_int = var_27_float + var_62_int; // 0x305 Add
	Sleep(var_63_int, var_28_bool); // 0x306 Func
	var_64_bool = var_28_bool == 0; // 0x308 Not
	if(var_64_bool == 0) goto Label_779; // 0x309 JumpB
	goto Label_794; // 0x30a Jump
	
Label_779:
	goto Label_783; // 0x30b Jump
	
Label_780:
	var_65_int = var_23_int; // 0x30c Push
	if(var_65_int == 0) goto Label_783; // 0x30d JumpB
	goto Label_794; // 0x30e Jump
}


func_977()
{
	var_23_string = "oob6Morlok1"; // 0x3d2 PushS
	var_24_int = 1; // 0x3d3 PushI
	SetVariable(var_23_string, var_24_int); // 0x3d4 Func
	return 0; // 0x3d6 Return
}


func_983()
{
	var_14_int = 1; // 0x3d8 PushI
	SetReturnValue(var_14_int); // 0x3d9 ObjFunc
	return 0; // 0x3db Return
}


func_988()
{
	func_1059(); // 0x3de NEW_2
	return 0; // 0x3e0 Return
}


func_993(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj(); // 0x3e2 PushV
	var_121_object = var_119_object; // 0x3e3 Mov
	func_1027(var_121_object); // 0x3e4 NEW_2
	if(var_120_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_118_bool = 1; // 0x3e7 MovB
	return 0; // 0x3e8 Return
	
Label_1001:
	var_118_bool = 0; // 0x3e9 MovB
	return 0; // 0x3ea Return
}


func_1126(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x466 PushV
	var_96_string = "branch"; // 0x467 PushS
	GetVariable(var_96_string, var_95_int); // 0x468 Func
	var_97_int = 0; // 0x46a PushI
	var_98_bool = var_95_int == var_97_int; // 0x46b Eq
	if(var_98_bool == 0) goto Label_1136; // 0x46c JumpB
	var_93_int = 1; // 0x46d MovI
	return 2; // 0x46e Return
	
Label_1136:
	var_99_int = 1; // 0x470 PushI
	var_100_bool = var_95_int == var_99_int; // 0x471 Eq
	if(var_100_bool == 0) goto Label_1141; // 0x472 JumpB
	var_93_int = 2; // 0x473 MovI
	return 2; // 0x474 Return
	
Label_1141:
	var_93_int = 3; // 0x475 MovI
	return 2; // 0x476 Return
}


func_1003(var_183_bool)
{
	var_185_int = 0; var_186_string = ""; // 0x3ec PushV
	var_186_string = "oob6Morlok1"; // 0x3ed MovS
	func_936(var_185_int, var_186_string); // 0x3ee NEW_2
	var_187_int = 0; // 0x3f0 PushI
	var_188_bool = var_185_int == var_187_int; // 0x3f1 Eq
	if(var_188_bool == 0) goto Label_1013; // 0x3f2 JumpB
	var_183_bool = 1; // 0x3f3 MovB
	return 0; // 0x3f4 Return
	
Label_1013:
	var_183_bool = 0; // 0x3f5 MovB
	return 0; // 0x3f6 Return
}


func_877()
{
	var_205_bool = 0; var_206_bool = 0; // 0x36d PushV
	CameraSwitchToNormal(); // 0x36e Func
	var_207_bool = 0; // 0x370 PushV
	func_1151(var_207_bool); // 0x371 NEW_2
	if(var_207_bool == 0) goto Label_885; // 0x373 JumpB
	goto Label_893; // 0x374 Jump
	
Label_893:
	return 2; // 0x37d Return
	
Label_885:
	var_208_string = "head"; // 0x375 PushS
	HasAnimationTrack(var_206_bool, var_208_string); // 0x376 Func
	var_209_bool = var_206_bool; // 0x378 Push
	if(var_209_bool == 0) goto Label_893; // 0x379 JumpB
	var_210_string = "head"; // 0x37a PushS
	UnlookAsync(var_210_string); // 0x37b Func
}


func_1015(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x3f8 PushV
	var_113_string = "b6q01"; // 0x3f9 MovS
	func_936(var_112_int, var_113_string); // 0x3fa NEW_2
	var_116_int = 4; // 0x3fc PushI
	var_117_bool = var_112_int == var_116_int; // 0x3fd Eq
	if(var_117_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_110_bool = 1; // 0x3ff MovB
	return 0; // 0x400 Return
	
Label_1025:
	var_110_bool = 0; // 0x401 MovB
	return 0; // 0x402 Return
}


func_1143(var_90_int)
{
	var_90_int = 521048; // 0x477 MovI
	return 0; // 0x478 Return
}


func_1145(var_89_int)
{
	var_89_int = 521047; // 0x479 MovI
	return 0; // 0x47a Return
}


func_1147(var_91_string)
{
	var_91_string = "ui/NPC_Black.png"; // 0x47b MovS
	return 0; // 0x47c Return
}


func_1149(var_92_string)
{
	var_92_string = "ui/NPC_Black_b.png"; // 0x47d MovS
	return 0; // 0x47e Return
}


func_894(var_164_string)
{
	var_165_float = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0; // 0x37e PushV
	lshGetAnimTimes(var_164_string, var_167_float, var_168_float); // 0x37f Func
	var_169_bool = 0; // 0x381 PushB
	lshPlayAnimation(var_167_float, var_168_float, var_169_bool); // 0x382 Func
	return 4; // 0x384 Return
}


func_1151(var_84_bool)
{
	var_84_bool = 0; // 0x47f MovB
	return 0; // 0x480 Return
}


