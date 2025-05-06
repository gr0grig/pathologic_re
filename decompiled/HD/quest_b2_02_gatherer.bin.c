task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xd6 PushI
	if(var_12_int == 0) goto Label_555; // 0xd7 JumpB
	func_883(); // 0xd9 NEW_2
	var_14_int = 29111; // 0xdb PushI
	var_15_bool = var_11_object == var_14_int; // 0xdc Eq
	if(var_15_bool == 0) goto Label_227; // 0xdd JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xde PushV
	var_16_object = var_1_object; // 0xdf MovT
	var_17_object = var_0_object; // 0xe0 MovT
	func_1001(); // 0xe1 NEW_2
	
Label_227:
	var_51_int = 29116; // 0xe3 PushI
	var_52_bool = var_11_object == var_51_int; // 0xe4 Eq
	if(var_52_bool == 0) goto Label_235; // 0xe5 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xe6 PushV
	var_53_object = var_1_object; // 0xe7 MovT
	var_54_object = var_0_object; // 0xe8 MovT
	func_1001(); // 0xe9 NEW_2
	
Label_235:
	var_55_int = 29125; // 0xeb PushI
	var_56_bool = var_11_object == var_55_int; // 0xec Eq
	if(var_56_bool == 0) goto Label_253; // 0xed JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xee PushV
	var_57_object = var_1_object; // 0xef MovT
	var_58_object = var_0_object; // 0xf0 MovT
	func_1013(); // 0xf1 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0xf3 PushV
	var_73_object = var_1_object; // 0xf4 MovT
	var_74_object = var_0_object; // 0xf5 MovT
	func_1035(var_74_object); // 0xf6 NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0xf8 PushV
	var_97_object = var_1_object; // 0xf9 MovT
	var_98_object = var_0_object; // 0xfa MovT
	func_1029(); // 0xfb NEW_2
	
Label_253:
	var_101_int = 29126; // 0xfd PushI
	var_102_bool = var_11_object == var_101_int; // 0xfe Eq
	if(var_102_bool == 0) goto Label_261; // 0xff JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x100 PushV
	var_103_object = var_1_object; // 0x101 MovT
	var_104_object = var_0_object; // 0x102 MovT
	func_1023(); // 0x103 NEW_2
	
Label_261:
	var_107_int = 29110; // 0x105 PushI
	var_108_bool = var_10_bool == var_107_int; // 0x106 Eq
	if(var_108_bool == 0) goto Label_343; // 0x107 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x108 PushV
	var_110_object = var_1_object; // 0x109 MovT
	func_1046(var_110_object); // 0x10a NEW_2
	if(var_109_bool == 0) goto Label_289; // 0x10c JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x10d PushV
	var_117_object = var_1_object; // 0x10e MovT
	var_118_object = var_0_object; // 0x10f MovT
	func_995(); // 0x110 NEW_2
	var_121_string = ""; // 0x112 PushV
	var_121_string = "Neutral"; // 0x113 MovS
	func_191(var_11_object, var_121_string); // 0x114 NEW_2
	var_138_int = 527753; // 0x116 PushI
	SetMessage(var_138_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_139_int = 527848; // 0x11b PushI
	var_140_int = 29192; // 0x11c PushI
	var_141_int = 29191; // 0x11d PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_142_string = ""; // 0x121 PushV
	var_142_string = "Neutral"; // 0x122 MovS
	func_191(var_11_object, var_142_string); // 0x123 NEW_2
	var_143_int = 527756; // 0x125 PushI
	SetMessage(var_143_int); // 0x126 TObjFunc
	ClearReplies(); // 0x128 TObjFunc
	var_144_bool = 0; var_145_object = Obj(); // 0x12a PushV
	var_145_object = var_1_object; // 0x12b MovT
	func_1058(var_145_object); // 0x12c NEW_2
	if(var_144_bool == 0) goto Label_308; // 0x12e JumpB
	var_150_int = 527757; // 0x12f PushI
	var_151_int = 29115; // 0x130 PushI
	var_152_int = 29114; // 0x131 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x132 TObjFunc
	
Label_308:
	var_153_bool = 0; var_154_object = Obj(); // 0x134 PushV
	var_154_object = var_1_object; // 0x135 MovT
	func_1070(var_154_object); // 0x136 NEW_2
	if(var_153_bool == 0) goto Label_318; // 0x138 JumpB
	var_159_int = 527766; // 0x139 PushI
	var_160_int = 29124; // 0x13a PushI
	var_161_int = 29123; // 0x13b PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x13c TObjFunc
	
Label_318:
	var_162_bool = 0; // 0x13e PushV
	var_162_bool = 0; // 0x13f MovB
	var_163_bool = 0; var_164_object = Obj(); // 0x140 PushV
	var_164_object = var_1_object; // 0x141 MovT
	func_1082(var_164_object); // 0x142 NEW_2
	if(var_163_bool == 0) goto Label_331; // 0x144 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x145 PushV
	var_170_object = var_1_object; // 0x146 MovT
	func_1094(var_170_object); // 0x147 NEW_2
	if(var_169_bool == 0) goto Label_331; // 0x149 JumpB
	var_162_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_162_bool == 0) goto Label_337; // 0x14b JumpB
	var_175_int = 527769; // 0x14c PushI
	var_176_int = 29127; // 0x14d PushI
	var_177_int = 29126; // 0x14e PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x14f TObjFunc
	
Label_337:
	var_178_int = 527760; // 0x151 PushI
	var_179_int = -1; // 0x152 PushI
	var_180_int = 29117; // 0x153 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_181_int = 29127; // 0x157 PushI
	var_182_bool = var_10_bool == var_181_int; // 0x158 Eq
	if(var_182_bool == 0) goto Label_366; // 0x159 JumpB
	var_183_string = ""; // 0x15a PushV
	var_183_string = "Neutral"; // 0x15b MovS
	func_191(var_11_object, var_183_string); // 0x15c NEW_2
	var_184_int = 527770; // 0x15e PushI
	SetMessage(var_184_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_185_int = 527771; // 0x163 PushI
	var_186_int = 29188; // 0x164 PushI
	var_187_int = 29128; // 0x165 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x166 TObjFunc
	var_188_int = 527844; // 0x168 PushI
	var_189_int = -1; // 0x169 PushI
	var_190_int = 29187; // 0x16a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_191_int = 29188; // 0x16e PushI
	var_192_bool = var_10_bool == var_191_int; // 0x16f Eq
	if(var_192_bool == 0) goto Label_389; // 0x170 JumpB
	var_193_string = ""; // 0x171 PushV
	var_193_string = "Neutral"; // 0x172 MovS
	func_191(var_11_object, var_193_string); // 0x173 NEW_2
	var_194_int = 527845; // 0x175 PushI
	SetMessage(var_194_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_195_int = 527846; // 0x17a PushI
	var_196_int = -1; // 0x17b PushI
	var_197_int = 29189; // 0x17c PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x17d TObjFunc
	var_198_int = 527847; // 0x17f PushI
	var_199_int = -1; // 0x180 PushI
	var_200_int = 29190; // 0x181 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_201_int = 29124; // 0x185 PushI
	var_202_bool = var_10_bool == var_201_int; // 0x186 Eq
	if(var_202_bool == 0) goto Label_407; // 0x187 JumpB
	var_203_string = ""; // 0x188 PushV
	var_203_string = "Neutral"; // 0x189 MovS
	func_191(var_11_object, var_203_string); // 0x18a NEW_2
	var_204_int = 527767; // 0x18c PushI
	SetMessage(var_204_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_205_int = 527842; // 0x191 PushI
	var_206_int = 29186; // 0x192 PushI
	var_207_int = 29185; // 0x193 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_208_int = 29186; // 0x197 PushI
	var_209_bool = var_10_bool == var_208_int; // 0x198 Eq
	if(var_209_bool == 0) goto Label_425; // 0x199 JumpB
	var_210_string = ""; // 0x19a PushV
	var_210_string = "Neutral"; // 0x19b MovS
	func_191(var_11_object, var_210_string); // 0x19c NEW_2
	var_211_int = 527843; // 0x19e PushI
	SetMessage(var_211_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_212_int = 527768; // 0x1a3 PushI
	var_213_int = -1; // 0x1a4 PushI
	var_214_int = 29125; // 0x1a5 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_215_int = 29115; // 0x1a9 PushI
	var_216_bool = var_10_bool == var_215_int; // 0x1aa Eq
	if(var_216_bool == 0) goto Label_443; // 0x1ab JumpB
	var_217_string = ""; // 0x1ac PushV
	var_217_string = "Neutral"; // 0x1ad MovS
	func_191(var_11_object, var_217_string); // 0x1ae NEW_2
	var_218_int = 527758; // 0x1b0 PushI
	SetMessage(var_218_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_219_int = 527840; // 0x1b5 PushI
	var_220_int = 29184; // 0x1b6 PushI
	var_221_int = 29183; // 0x1b7 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_222_int = 29184; // 0x1bb PushI
	var_223_bool = var_10_bool == var_222_int; // 0x1bc Eq
	if(var_223_bool == 0) goto Label_461; // 0x1bd JumpB
	var_224_string = ""; // 0x1be PushV
	var_224_string = "Neutral"; // 0x1bf MovS
	func_191(var_11_object, var_224_string); // 0x1c0 NEW_2
	var_225_int = 527841; // 0x1c2 PushI
	SetMessage(var_225_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_226_int = 527759; // 0x1c7 PushI
	var_227_int = -1; // 0x1c8 PushI
	var_228_int = 29116; // 0x1c9 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_229_int = 29192; // 0x1cd PushI
	var_230_bool = var_10_bool == var_229_int; // 0x1ce Eq
	if(var_230_bool == 0) goto Label_479; // 0x1cf JumpB
	var_231_string = ""; // 0x1d0 PushV
	var_231_string = "Neutral"; // 0x1d1 MovS
	func_191(var_11_object, var_231_string); // 0x1d2 NEW_2
	var_232_int = 527849; // 0x1d4 PushI
	SetMessage(var_232_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_233_int = 527850; // 0x1d9 PushI
	var_234_int = 29195; // 0x1da PushI
	var_235_int = 29193; // 0x1db PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_236_int = 29195; // 0x1df PushI
	var_237_bool = var_10_bool == var_236_int; // 0x1e0 Eq
	if(var_237_bool == 0) goto Label_502; // 0x1e1 JumpB
	var_238_string = ""; // 0x1e2 PushV
	var_238_string = "Neutral"; // 0x1e3 MovS
	func_191(var_11_object, var_238_string); // 0x1e4 NEW_2
	var_239_int = 527852; // 0x1e6 PushI
	SetMessage(var_239_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_240_int = 527853; // 0x1eb PushI
	var_241_int = 29194; // 0x1ec PushI
	var_242_int = 29196; // 0x1ed PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x1ee TObjFunc
	var_243_int = 527854; // 0x1f0 PushI
	var_244_int = -1; // 0x1f1 PushI
	var_245_int = 29197; // 0x1f2 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_246_int = 29194; // 0x1f6 PushI
	var_247_bool = var_10_bool == var_246_int; // 0x1f7 Eq
	if(var_247_bool == 0) goto Label_520; // 0x1f8 JumpB
	var_248_string = ""; // 0x1f9 PushV
	var_248_string = "Neutral"; // 0x1fa MovS
	func_191(var_11_object, var_248_string); // 0x1fb NEW_2
	var_249_int = 527851; // 0x1fd PushI
	SetMessage(var_249_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_250_int = 527855; // 0x202 PushI
	var_251_int = 29199; // 0x203 PushI
	var_252_int = 29198; // 0x204 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_253_int = 29199; // 0x208 PushI
	var_254_bool = var_10_bool == var_253_int; // 0x209 Eq
	if(var_254_bool == 0) goto Label_543; // 0x20a JumpB
	var_255_string = ""; // 0x20b PushV
	var_255_string = "Neutral"; // 0x20c MovS
	func_191(var_11_object, var_255_string); // 0x20d NEW_2
	var_256_int = 527856; // 0x20f PushI
	SetMessage(var_256_int); // 0x210 TObjFunc
	ClearReplies(); // 0x212 TObjFunc
	var_257_int = 527754; // 0x214 PushI
	var_258_int = -1; // 0x215 PushI
	var_259_int = 29111; // 0x216 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x217 TObjFunc
	var_260_int = 527755; // 0x219 PushI
	var_261_int = -1; // 0x21a PushI
	var_262_int = 29112; // 0x21b PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x21c TObjFunc
	return 0; // 0x21e Return
	
Label_543:
	var_3_string = 1; // 0x21f TMovB
	var_263_bool = 0; // 0x220 PushV
	func_993(var_263_bool); // 0x221 NEW_2
	if(var_263_bool == 0) goto Label_551; // 0x223 JumpB
	lshStopAnimation(); // 0x224 Func
	goto Label_553; // 0x226 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_551:
	StopAnimation(); // 0x227 Func
	
Label_555:
	return 0; // 0x22b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_641(var_9_object, var_10_object); // 0x237 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x239 PushV
	var_15_object = var_10_object; // 0x23a Mov
	TaskCall(0); // 0x23b TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x23c NEW_2
	TaskReturn(); // 0x23d TaskReturn
	return 0; // 0x23f Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x26b PushI
	var_12_bool = var_10_int == var_11_int; // 0x26c Eq
	if(var_12_bool == 0) goto Label_640; // 0x26d JumpB
	var_13_bool = 0; // 0x26e PushV
	func_603(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x26f NEW_2
	if(var_13_bool == 0) goto Label_634; // 0x271 JumpB
	var_26_bool = var_2_object == 0; // 0x272 Not
	if(var_26_bool == 0) goto Label_633; // 0x273 JumpB
	var_27_object = Obj(); // 0x274 PushV
	var_27_object = var_4_bool; // 0x275 MovT
	func_872(var_27_object); // 0x276 NEW_2
	var_2_object = 1; // 0x278 TMovB
	
Label_633:
	goto Label_640; // 0x279 Jump
	
Label_640:
	return 0; // 0x280 Return
	
Label_634:
	var_34_object = var_2_object; // 0x27a PushT
	if(var_34_object == 0) goto Label_640; // 0x27b JumpB
	var_35_string = "head"; // 0x27c PushS
	UnlookAsync(var_35_string); // 0x27d Func
	var_2_object = 0; // 0x27f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_556:
	var_10_bool = 1; // 0x22c PushB
	if(var_10_bool == 0) goto Label_564; // 0x22d JumpB
	var_11_float = 0; var_12_float = 0; // 0x22e PushV
	var_11_float = 300; // 0x22f MovI
	var_12_float = 100; // 0x230 MovI
	func_576(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x231 NEW_2
	goto Label_556; // 0x233 Jump
	
Label_564:
	return 0; // 0x234 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 110.0; // 0x4 MovF
	func_754(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_987(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_985(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_989(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_991(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1186(var_77_int); // 0x22 NEW_2
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
	var_183_bool = var_24_bool == 0; // 0x38 Not
	if(var_183_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_184_object = Obj(); // 0x3f PushV
	var_184_object = var_15_object; // 0x40 Mov
	func_823(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_641(var_2_object, var_3_string)
{
	func_736(); // 0x282 NEW_2
	var_11_int = 10; // 0x284 PushI
	KillTimer(var_11_int); // 0x285 Func
	var_12_object = var_2_object; // 0x287 PushT
	if(var_12_object == 0) goto Label_653; // 0x288 JumpB
	var_13_string = "head"; // 0x289 PushS
	UnlookAsync(var_13_string); // 0x28a Func
	var_2_object = 0; // 0x28c TMovB
	
Label_653:
	var_3_string = 1; // 0x28d TMovB
	return 0; // 0x28e Return
}


func_900(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x384 PushV
	GetVariable(var_96_string, var_98_int); // 0x385 Func
	var_95_int = var_98_int; // 0x387 Mov
	return 2; // 0x388 Return
}


func_1029()
{
	var_99_string = "playsound"; // 0x406 PushS
	var_100_string = "giveitem"; // 0x407 PushS
	TriggerWorld(var_99_string, var_100_string); // 0x408 Func
	return 0; // 0x40a Return
}


func_1158(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x486 PushV
	var_34_object = Obj(); // 0x487 PushV
	func_1145(var_34_object); // 0x488 NEW_2
	var_31_object = var_34_object; // 0x489 Mov
	Find(var_27_int, var_32_object); // 0x48b ObjFunc
	var_39_bool = var_32_object == 0; // 0x48d Not
	if(var_39_bool == 0) goto Label_1173; // 0x48e JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x48f PushS
	var_41_int = var_40_string + var_27_int; // 0x490 Add
	Trace(var_41_int); // 0x491 Func
	var_25_bool = 0; // 0x493 MovB
	return 6; // 0x494 Return
	
Label_1173:
	AddChild(var_26_object); // 0x495 ObjFunc
	var_42_int = 7; // 0x497 PushI
	SendWorldWndMessage(var_42_int); // 0x498 Func
	GetCategory(var_33_int); // 0x49a ObjFunc
	SetDiarySection(var_33_int); // 0x49c Func
	var_25_bool = 0; // 0x49e MovB
	return 6; // 0x49f Return
}


func_905(var_92_int, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x389 PushV
	CreateIntVector(var_95_object); // 0x38a Func
	add(var_92_int); // 0x38c ObjFunc
	add(var_93_int); // 0x38e ObjFunc
	var_96_int = 3; // 0x390 PushI
	SendWorldWndMessage(var_96_int, var_95_object); // 0x391 Func
	return 2; // 0x393 Return
}


func_1035(var_73_object)
{
	var_75_string = "recipe9 is given"; // 0x40c PushS
	Trace(var_75_string); // 0x40d Func
	var_76_object = Obj(); var_77_string = ""; var_78_int = 0; // 0x40f PushV
	var_76_object = var_73_object; // 0x410 Mov
	var_77_string = "recipe9"; // 0x411 MovS
	var_78_int = 1; // 0x412 MovI
	func_936(var_76_object, var_77_string, var_78_int); // 0x413 NEW_2
	return 0; // 0x415 Return
}


func_655()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x28f PushV
	WaitForAnimEnd(); // 0x290 Func
	var_34_bool = 0; // 0x292 PushV
	func_749(var_34_bool); // 0x293 NEW_2
	var_35_bool = var_34_bool == 0; // 0x295 Not
	if(var_35_bool == 0) goto Label_664; // 0x296 JumpB
	return 14; // 0x297 Return
	
Label_664:
	var_36_int = 0; // 0x298 PushV
	func_968(var_36_int); // 0x299 NEW_2
	var_27_int = var_36_int; // 0x29a Mov
	var_28_int = 0; // 0x29c MovI
	
Label_669:
	var_49_bool = 0; // 0x29d PushV
	var_49_bool = 0; // 0x29e MovB
	var_50_int = 5; // 0x29f PushI
	var_51_bool = var_28_int < var_50_int; // 0x2a0 LT
	if(var_51_bool == 0) goto Label_679; // 0x2a1 JumpB
	var_52_bool = 0; // 0x2a2 PushV
	func_749(var_52_bool); // 0x2a3 NEW_2
	if(var_52_bool == 0) goto Label_679; // 0x2a5 JumpB
	var_49_bool = 1; // 0x2a6 MovB
	
Label_679:
	if(var_49_bool == 0) goto Label_731; // 0x2a7 JumpB
	var_53_int = 3; // 0x2a8 PushI
	irand(var_29_int, var_53_int); // 0x2a9 Func
	var_54_int = 0; // 0x2ab PushI
	var_55_bool = var_29_int == var_54_int; // 0x2ac Eq
	if(var_55_bool == 0) goto Label_703; // 0x2ad JumpB
	var_56_int = var_27_int; // 0x2ae Push
	if(var_56_int == 0) goto Label_702; // 0x2af JumpB
	irand(var_30_int, var_27_int); // 0x2b0 Func
	var_57_string = "all"; // 0x2b2 PushS
	var_58_string = ""; var_59_int = 0; // 0x2b3 PushV
	var_59_int = var_30_int; // 0x2b4 Mov
	func_961(var_58_string, var_59_int); // 0x2b5 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x2b7 Func
	WaitForAnimEnd(var_31_bool); // 0x2b9 Func
	var_60_bool = var_31_bool == 0; // 0x2bb Not
	if(var_60_bool == 0) goto Label_702; // 0x2bc JumpB
	goto Label_731; // 0x2bd Jump
	
Label_731:
	ResetAAS(); // 0x2db Func
	return 14; // 0x2dd Return
	
Label_702:
	goto Label_720; // 0x2be Jump
	
Label_720:
	var_61_bool = 0; // 0x2d0 PushV
	func_734(var_61_bool); // 0x2d1 NEW_2
	var_62_bool = var_61_bool == 0; // 0x2d3 Not
	if(var_62_bool == 0) goto Label_726; // 0x2d4 JumpB
	goto Label_731; // 0x2d5 Jump
	
Label_726:
	ResetAAS(); // 0x2d6 Func
	var_63_int = 1; // 0x2d8 PushI
	var_28_int = var_28_int + var_63_int; // 0x2d9 Add2
	goto Label_669; // 0x2da Jump
	
Label_703:
	var_64_int = 1; // 0x2bf PushI
	var_65_bool = var_29_int == var_64_int; // 0x2c0 Eq
	if(var_65_bool == 0) goto Label_717; // 0x2c1 JumpB
	var_66_int = 4; // 0x2c2 PushI
	rand(var_32_float, var_66_int); // 0x2c3 Func
	var_67_int = 1; // 0x2c5 PushI
	var_68_int = var_32_float + var_67_int; // 0x2c6 Add
	Sleep(var_68_int, var_33_bool); // 0x2c7 Func
	var_69_bool = var_33_bool == 0; // 0x2c9 Not
	if(var_69_bool == 0) goto Label_716; // 0x2ca JumpB
	goto Label_731; // 0x2cb Jump
	
Label_716:
	goto Label_720; // 0x2cc Jump
	
Label_717:
	var_70_int = var_28_int; // 0x2cd Push
	if(var_70_int == 0) goto Label_720; // 0x2ce JumpB
	goto Label_731; // 0x2cf Jump
}


func_917(var_82_object, var_83_int)
{
	var_84_int = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_int = 0; var_89_bool = 0; // 0x395 PushV
	GetItemID(var_87_int); // 0x396 ObjFunc
	var_90_string = "Category"; // 0x398 PushS
	GetInvItemProperty(var_88_int, var_87_int, var_90_string); // 0x399 Func
	AddItem(var_89_bool, var_82_object, var_88_int, var_83_int); // 0x39b ObjFunc
	var_91_bool = var_89_bool == 0; // 0x39d Not
	if(var_91_bool == 0) goto Label_930; // 0x39e JumpB
	DropItems(var_82_object, var_83_int); // 0x39f ObjFunc
	goto Label_935; // 0x3a1 Jump
	
Label_935:
	return 6; // 0x3a7 Return
	
Label_930:
	var_92_int = 0; var_93_int = 0; // 0x3a2 PushV
	var_92_int = var_87_int; // 0x3a3 Mov
	var_93_int = var_83_int; // 0x3a4 Mov
	func_905(var_92_int, var_93_int); // 0x3a5 NEW_2
}


func_1046(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x417 PushV
	var_96_string = "oob2Gatherer1"; // 0x418 MovS
	func_900(var_95_int, var_96_string); // 0x419 NEW_2
	var_99_int = 0; // 0x41b PushI
	var_100_bool = var_95_int == var_99_int; // 0x41c Eq
	if(var_100_bool == 0) goto Label_1056; // 0x41d JumpB
	var_93_bool = 1; // 0x41e MovB
	return 0; // 0x41f Return
	
Label_1056:
	var_93_bool = 0; // 0x420 MovB
	return 0; // 0x421 Return
}


func_1186(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x4a2 PushV
	var_80_string = "branch"; // 0x4a3 PushS
	GetVariable(var_80_string, var_79_int); // 0x4a4 Func
	var_81_int = 0; // 0x4a6 PushI
	var_82_bool = var_79_int == var_81_int; // 0x4a7 Eq
	if(var_82_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_77_int = 1; // 0x4a9 MovI
	return 2; // 0x4aa Return
	
Label_1196:
	var_83_int = 1; // 0x4ac PushI
	var_84_bool = var_79_int == var_83_int; // 0x4ad Eq
	if(var_84_bool == 0) goto Label_1201; // 0x4ae JumpB
	var_77_int = 2; // 0x4af MovI
	return 2; // 0x4b0 Return
	
Label_1201:
	var_77_int = 3; // 0x4b1 MovI
	return 2; // 0x4b2 Return
}


func_1058(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x423 PushV
	var_149_string = "b2q02"; // 0x424 MovS
	func_900(var_148_int, var_149_string); // 0x425 NEW_2
	var_150_int = 0; // 0x427 PushI
	var_151_bool = var_148_int == var_150_int; // 0x428 Eq
	if(var_151_bool == 0) goto Label_1068; // 0x429 JumpB
	var_146_bool = 1; // 0x42a MovB
	return 0; // 0x42b Return
	
Label_1068:
	var_146_bool = 0; // 0x42c MovB
	return 0; // 0x42d Return
}


func_936(var_76_object, var_77_string, var_78_int)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x3a8 PushV
	CreateInvItem(var_80_object); // 0x3a9 Func
	SetItemName(var_77_string); // 0x3ab ObjFunc
	var_81_object = Obj(); var_82_object = Obj(); var_83_int = 0; // 0x3ad PushV
	var_81_object = var_76_object; // 0x3ae Mov
	var_82_object = var_80_object; // 0x3af Mov
	var_83_int = var_78_int; // 0x3b0 Mov
	func_917(var_82_object, var_83_int); // 0x3b1 NEW_2
	return 2; // 0x3b3 Return
}


func_1070(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x42f PushV
	var_158_string = "b2q02"; // 0x430 MovS
	func_900(var_157_int, var_158_string); // 0x431 NEW_2
	var_159_int = 2; // 0x433 PushI
	var_160_bool = var_157_int == var_159_int; // 0x434 Eq
	if(var_160_bool == 0) goto Label_1080; // 0x435 JumpB
	var_155_bool = 1; // 0x436 MovB
	return 0; // 0x437 Return
	
Label_1080:
	var_155_bool = 0; // 0x438 MovB
	return 0; // 0x439 Return
}


func_949(var_67_bool, var_68_string, var_69_string)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x3b5 PushV
	FindActor(var_71_object, var_68_string); // 0x3b6 Func
	var_72_bool = var_71_object == 0; // 0x3b8 NullEq
	if(var_72_bool == 0) goto Label_956; // 0x3b9 JumpB
	var_67_bool = 0; // 0x3ba MovB
	return 2; // 0x3bb Return
	
Label_956:
	Trigger(var_71_object, var_69_string); // 0x3bc Func
	var_67_bool = 1; // 0x3be MovB
	return 2; // 0x3bf Return
}


func_823()
{
	var_185_bool = 0; var_186_bool = 0; // 0x337 PushV
	var_187_bool = 1; // 0x338 PushB
	CameraSwitchToNormal(var_187_bool); // 0x339 Func
	var_188_bool = 0; // 0x33b PushV
	func_993(var_188_bool); // 0x33c NEW_2
	if(var_188_bool == 0) goto Label_832; // 0x33e JumpB
	goto Label_840; // 0x33f Jump
	
Label_840:
	return 2; // 0x348 Return
	
Label_832:
	var_189_string = "head"; // 0x340 PushS
	HasAnimationTrack(var_186_bool, var_189_string); // 0x341 Func
	var_190_bool = var_186_bool; // 0x343 Push
	if(var_190_bool == 0) goto Label_840; // 0x344 JumpB
	var_191_string = "head"; // 0x345 PushS
	UnlookAsync(var_191_string); // 0x346 Func
}


func_1082(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x43b PushV
	var_168_string = "b2q02"; // 0x43c MovS
	func_900(var_167_int, var_168_string); // 0x43d NEW_2
	var_169_int = -1; // 0x43f PushI
	var_170_bool = var_167_int == var_169_int; // 0x440 Eq
	if(var_170_bool == 0) goto Label_1092; // 0x441 JumpB
	var_165_bool = 1; // 0x442 MovB
	return 0; // 0x443 Return
	
Label_1092:
	var_165_bool = 0; // 0x444 MovB
	return 0; // 0x445 Return
}


func_191(var_2_object, var_105_string)
{
	var_106_bool = 0; // 0xc0 PushV
	func_993(var_106_bool); // 0xc1 NEW_2
	var_107_bool = var_106_bool == 0; // 0xc3 Not
	if(var_107_bool == 0) goto Label_198; // 0xc4 JumpB
	return 0; // 0xc5 Return
	
Label_198:
	var_108_bool = var_105_string == var_2_object; // 0xc6 Eq
	if(var_108_bool == 0) goto Label_201; // 0xc7 JumpB
	return 0; // 0xc8 Return
	
Label_201:
	var_109_string = ""; var_110_bool = 0; // 0xc9 PushV
	var_109_string = var_105_string; // 0xca Mov
	var_111_string = ""; // 0xcb PushS
	var_112_bool = var_105_string == var_111_string; // 0xcc Eq
	if(var_112_bool == 0) goto Label_208; // 0xcd JumpB
	var_110_bool = 0; // 0xce MovB
	goto Label_209; // 0xcf Jump
	
Label_209:
	func_857(var_109_string, var_110_bool); // 0xd1 NEW_2
	var_2_object = var_105_string; // 0xd3 TMov
	return 0; // 0xd4 Return
	
Label_208:
	var_110_bool = 1; // 0xd0 MovB
}


func_576(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x241 PushV
	func_749(var_13_bool); // 0x242 NEW_2
	var_16_bool = var_13_bool == 0; // 0x244 Not
	if(var_16_bool == 0) goto Label_583; // 0x245 JumpB
	return 0; // 0x246 Return
	
Label_583:
	var_17_string = "player"; // 0x247 PushS
	FindActor(var_9_object, var_17_string); // 0x248 Func
	var_2_object = 0; // 0x24a TMovB
	var_3_string = 0; // 0x24b TMovB
	var_0_object = var_11_float; // 0x24c TMov
	var_1_object = var_12_float; // 0x24d TMov
	var_18_int = 10; // 0x24e PushI
	var_19_float = 1.0; // 0x24f PushF
	SetTimer(var_18_int, var_19_float); // 0x250 Func
	func_655(); // 0x253 NEW_2
	var_71_bool = var_3_string == 0; // 0x255 Not
	if(var_71_bool == 0) goto Label_602; // 0x256 JumpB
	var_72_int = 10; // 0x257 PushI
	KillTimer(var_72_int); // 0x258 Func
	
Label_602:
	return 0; // 0x25a Return
}


func_961(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x3c1 PushV
	var_45_string = "idle"; // 0x3c2 MovS
	var_46_int = var_43_int; // 0x3c3 Push
	if(var_46_int == 0) goto Label_966; // 0x3c4 JumpB
	var_45_string = var_45_string + var_43_int; // 0x3c5 Add2
	
Label_966:
	var_42_string = var_45_string; // 0x3c6 Mov
	return 2; // 0x3c7 Return
}


func_1094(var_171_bool)
{
	var_173_int = 0; var_174_string = ""; // 0x447 PushV
	var_174_string = "oob2Gatherer2"; // 0x448 MovS
	func_900(var_173_int, var_174_string); // 0x449 NEW_2
	var_175_int = 0; // 0x44b PushI
	var_176_bool = var_173_int == var_175_int; // 0x44c Eq
	if(var_176_bool == 0) goto Label_1104; // 0x44d JumpB
	var_171_bool = 1; // 0x44e MovB
	return 0; // 0x44f Return
	
Label_1104:
	var_171_bool = 0; // 0x450 MovB
	return 0; // 0x451 Return
}


func_968(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x3c8 PushV
	var_39_int = 0; // 0x3c9 MovI
	
Label_970:
	var_41_string = "all"; // 0x3ca PushS
	var_42_string = ""; var_43_int = 0; // 0x3cb PushV
	var_43_int = var_39_int; // 0x3cc Mov
	func_961(var_42_string, var_43_int); // 0x3cd NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x3cf Func
	var_47_bool = var_40_bool == 0; // 0x3d1 Not
	if(var_47_bool == 0) goto Label_980; // 0x3d2 JumpB
	goto Label_983; // 0x3d3 Jump
	
Label_983:
	var_36_int = var_39_int; // 0x3d7 Mov
	return 4; // 0x3d8 Return
	
Label_980:
	var_48_int = 1; // 0x3d4 PushI
	var_39_int = var_39_int + var_48_int; // 0x3d5 Add2
	goto Label_970; // 0x3d6 Jump
}


func_841(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x349 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x34a Func
	var_135_bool = var_132_bool; // 0x34c Push
	if(var_135_bool == 0) goto Label_852; // 0x34d JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x34e Func
	var_136_bool = 0; // 0x350 PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x351 Func
	goto Label_856; // 0x353 Jump
	
Label_856:
	return 6; // 0x358 Return
	
Label_852:
	var_137_string = "Can't find lsh animation : "; // 0x354 PushS
	var_138_int = var_137_string + var_128_string; // 0x355 Add
	Trace(var_138_int); // 0x356 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_161; // 0x4f JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	func_1046(var_94_object); // 0x52 NEW_2
	if(var_93_bool == 0) goto Label_105; // 0x54 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x55 PushV
	var_101_object = var_1_object; // 0x56 MovT
	var_102_object = var_0_object; // 0x57 MovT
	func_995(); // 0x58 NEW_2
	var_105_string = ""; // 0x5a PushV
	var_105_string = "Neutral"; // 0x5b MovS
	func_191(var_87_object, var_105_string); // 0x5c NEW_2
	var_122_int = 527753; // 0x5e PushI
	SetMessage(var_122_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_123_int = 527848; // 0x63 PushI
	var_124_int = 29192; // 0x64 PushI
	var_125_int = 29191; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_161; // 0x68 Jump
	
Label_161:
	var_126_bool = 0; // 0xa1 PushV
	func_993(var_126_bool); // 0xa2 NEW_2
	if(var_126_bool == 0) goto Label_176; // 0xa4 JumpB
	
Label_165:
	lshWaitForAnimEnd(); // 0xa5 Func
	var_127_string = var_3_string; // 0xa7 PushT
	if(var_127_string == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_175:
	goto Label_190; // 0xaf Jump
	
Label_190:
	return 0; // 0xbe Return
	
Label_170:
	var_128_string = ""; // 0xaa PushV
	var_128_string = var_2_object; // 0xab MovT
	func_841(var_128_string); // 0xac NEW_2
	goto Label_165; // 0xae Jump
	
Label_176:
	var_139_string = "all"; // 0xb0 PushS
	var_140_string = "idle"; // 0xb1 PushS
	PlayAnimation(var_139_string, var_140_string); // 0xb2 Func
	
Label_180:
	WaitForAnimEnd(); // 0xb4 Func
	var_141_string = var_3_string; // 0xb6 PushT
	if(var_141_string == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_185:
	var_142_string = "all"; // 0xb9 PushS
	var_143_string = "idle"; // 0xba PushS
	PlayAnimation(var_142_string, var_143_string); // 0xbb Func
	goto Label_180; // 0xbd Jump
	
Label_105:
	var_144_string = ""; // 0x69 PushV
	var_144_string = "Neutral"; // 0x6a MovS
	func_191(var_87_object, var_144_string); // 0x6b NEW_2
	var_145_int = 527756; // 0x6d PushI
	SetMessage(var_145_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_146_bool = 0; var_147_object = Obj(); // 0x72 PushV
	var_147_object = var_1_object; // 0x73 MovT
	func_1058(var_147_object); // 0x74 NEW_2
	if(var_146_bool == 0) goto Label_124; // 0x76 JumpB
	var_152_int = 527757; // 0x77 PushI
	var_153_int = 29115; // 0x78 PushI
	var_154_int = 29114; // 0x79 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x7a TObjFunc
	
Label_124:
	var_155_bool = 0; var_156_object = Obj(); // 0x7c PushV
	var_156_object = var_1_object; // 0x7d MovT
	func_1070(var_156_object); // 0x7e NEW_2
	if(var_155_bool == 0) goto Label_134; // 0x80 JumpB
	var_161_int = 527766; // 0x81 PushI
	var_162_int = 29124; // 0x82 PushI
	var_163_int = 29123; // 0x83 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x84 TObjFunc
	
Label_134:
	var_164_bool = 0; // 0x86 PushV
	var_164_bool = 0; // 0x87 MovB
	var_165_bool = 0; var_166_object = Obj(); // 0x88 PushV
	var_166_object = var_1_object; // 0x89 MovT
	func_1082(var_166_object); // 0x8a NEW_2
	if(var_165_bool == 0) goto Label_147; // 0x8c JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x8d PushV
	var_172_object = var_1_object; // 0x8e MovT
	func_1094(var_172_object); // 0x8f NEW_2
	if(var_171_bool == 0) goto Label_147; // 0x91 JumpB
	var_164_bool = 1; // 0x92 MovB
	
Label_147:
	if(var_164_bool == 0) goto Label_153; // 0x93 JumpB
	var_177_int = 527769; // 0x94 PushI
	var_178_int = 29127; // 0x95 PushI
	var_179_int = 29126; // 0x96 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x97 TObjFunc
	
Label_153:
	var_180_int = 527760; // 0x99 PushI
	var_181_int = -1; // 0x9a PushI
	var_182_int = 29117; // 0x9b PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x9c TObjFunc
	goto Label_161; // 0x9e Jump
}


func_1106()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x452 PushV
	var_22_int = 456; // 0x453 PushI
	var_23_int = 2; // 0x454 PushI
	var_24_int = 527772; // 0x455 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x456 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x458 PushV
	var_26_object = var_21_object; // 0x459 Mov
	var_27_int = -1; // 0x45a MovI
	func_1158(var_25_bool, var_26_object, var_27_int); // 0x45b NEW_2
	return 2; // 0x45d Return
}


func_857(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x359 PushV
	lshHasAnimation(var_116_bool, var_109_string); // 0x35a Func
	var_119_bool = var_116_bool; // 0x35c Push
	if(var_119_bool == 0) goto Label_867; // 0x35d JumpB
	lshGetAnimTimes(var_109_string, var_117_float, var_118_float); // 0x35e Func
	lshPlayAnimation(var_117_float, var_118_float, var_110_bool); // 0x360 Func
	goto Label_871; // 0x362 Jump
	
Label_871:
	return 6; // 0x367 Return
	
Label_867:
	var_120_string = "Can't find lsh animation : "; // 0x363 PushS
	var_121_int = var_120_string + var_109_string; // 0x364 Add
	Trace(var_121_int); // 0x365 Func
}


func_985(var_74_int)
{
	var_74_int = 521048; // 0x3d9 MovI
	return 0; // 0x3da Return
}


func_987(var_73_int)
{
	var_73_int = 521047; // 0x3db MovI
	return 0; // 0x3dc Return
}


func_603(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x25b PushV
	var_16_bool = var_4_bool == 0; // 0x25c NullEq
	if(var_16_bool == 0) goto Label_608; // 0x25d JumpB
	var_13_bool = 0; // 0x25e MovB
	return 2; // 0x25f Return
	
Label_608:
	var_17_float = 0; var_18_object = Obj(); // 0x260 PushV
	var_18_object = var_4_bool; // 0x261 MovT
	func_741(var_18_object); // 0x262 NEW_2
	var_15_float = sqrt(var_17_float); // 0x264 Sqrt2
	var_25_object = var_2_object; // 0x265 PushT
	if(var_25_object == 0) goto Label_616; // 0x266 JumpB
	var_15_float = var_15_float - var_1_object; // 0x267 Sub2
	
Label_616:
	var_13_bool = var_15_float < var_0_object; // 0x268 LT2
	return 2; // 0x269 Return
}


func_989(var_75_string)
{
	var_75_string = "ui/NPC_Morlok.png"; // 0x3dd MovS
	return 0; // 0x3de Return
}


func_734(var_61_bool)
{
	var_61_bool = 1; // 0x2de MovB
	return 0; // 0x2df Return
}


func_991(var_76_string)
{
	var_76_string = "ui/NPC_Morlok_b.png"; // 0x3df MovS
	return 0; // 0x3e0 Return
}


func_736()
{
	StopAnimation(); // 0x2e0 Func
	StopGroup0(); // 0x2e2 Func
	return 0; // 0x2e4 Return
}


func_993(var_68_bool)
{
	var_68_bool = 0; // 0x3e1 MovB
	return 0; // 0x3e2 Return
}


func_1119()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x45f PushV
	var_45_int = 457; // 0x460 PushI
	var_46_int = 2; // 0x461 PushI
	var_47_int = 527773; // 0x462 PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x463 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x465 PushV
	var_49_object = var_44_object; // 0x466 Mov
	var_50_int = 456; // 0x467 MovI
	func_1158(var_48_bool, var_49_object, var_50_int); // 0x468 NEW_2
	return 2; // 0x46a Return
}


func_995()
{
	var_103_string = "oob2Gatherer1"; // 0x3e4 PushS
	var_104_int = 1; // 0x3e5 PushI
	SetVariable(var_103_string, var_104_int); // 0x3e6 Func
	return 0; // 0x3e8 Return
}


func_741(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x2e5 PushV
	GetPosition(var_22_cvector); // 0x2e6 Func
	GetPosition(var_23_cvector); // 0x2e8 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x2ea Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x2eb Or2
	return 6; // 0x2ec Return
}


func_872(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x368 PushV
	GetEyesHeight(var_30_float); // 0x369 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x36b MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x36c PushE
	var_32_float = var_30_float; // 0x36d Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x36e PopE
	var_33_string = "head"; // 0x36f PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x370 Func
	return 4; // 0x372 Return
}


func_1001()
{
	var_18_string = "b2q02"; // 0x3ea PushS
	var_19_int = 1; // 0x3eb PushI
	SetVariable(var_18_string, var_19_int); // 0x3ec Func
	func_1106(); // 0x3ef NEW_2
	func_1119(); // 0x3f2 NEW_2
	return 0; // 0x3f4 Return
}


func_1132()
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x46c PushV
	var_61_int = 459; // 0x46d PushI
	var_62_int = 2; // 0x46e PushI
	var_63_int = 527775; // 0x46f PushI
	CreateDiaryEntry(var_60_object, var_61_int, var_62_int, var_63_int); // 0x470 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x472 PushV
	var_65_object = var_60_object; // 0x473 Mov
	var_66_int = 456; // 0x474 MovI
	func_1158(var_64_bool, var_65_object, var_66_int); // 0x475 NEW_2
	return 2; // 0x477 Return
}


func_749(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2ed PushV
	IsLoaded(var_15_bool); // 0x2ee Func
	var_13_bool = var_15_bool; // 0x2f0 Mov
	return 2; // 0x2f1 Return
}


func_754(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x2f2 PushV
	GetPosition(var_38_cvector); // 0x2f3 ObjFunc
	GetEyesHeight(var_37_float); // 0x2f5 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x2f7 PushE
	var_46_float = var_46_float + var_37_float; // 0x2f8 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x2f9 PopE
	GetPosition(var_39_cvector); // 0x2fa Func
	GetEyesHeight(var_37_float); // 0x2fc Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x2fe PushE
	var_47_float = var_47_float + var_37_float; // 0x2ff Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x300 PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x301 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x302 PushE
	var_48_float = 0; // 0x303 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x304 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x305 Or
	var_50_float = sqrt(var_49_int); // 0x306 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x307 Div2
	var_41_cvector = -var_40_cvector; // 0x308 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x309 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x30a PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x30b PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x30c Xor2
	func_890(var_52_cvector, var_53_cvector); // 0x30d NEW_2
	var_60_int = 25; // 0x30f PushI
	var_61_float = var_52_cvector * var_60_int; // 0x310 Mult
	var_62_int = var_51_float + var_61_float; // 0x311 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x312 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x313 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x314 Add2
	IsOverrideActive(var_44_bool); // 0x315 Func
	var_64_bool = var_44_bool; // 0x317 Push
	if(var_64_bool == 0) goto Label_795; // 0x318 JumpB
	var_25_bool = 0; // 0x319 MovB
	return 18; // 0x31a Return
	
Label_795:
	StopWorld(); // 0x31b Func
	var_65_bool = 1; // 0x31d PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x31e Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x320 PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x321 PushE
	Rotate(var_66_float, var_67_float); // 0x322 Func
	var_68_bool = 0; // 0x324 PushV
	func_993(var_68_bool); // 0x325 NEW_2
	if(var_68_bool == 0) goto Label_809; // 0x327 JumpB
	goto Label_817; // 0x328 Jump
	
Label_817:
	CameraWaitForPlayFinish(); // 0x331 Func
	ResumeWorld(); // 0x333 Func
	var_25_bool = 1; // 0x335 MovB
	return 18; // 0x336 Return
	
Label_809:
	var_69_string = "head"; // 0x329 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x32a Func
	var_70_bool = var_45_bool; // 0x32c Push
	if(var_70_bool == 0) goto Label_817; // 0x32d JumpB
	var_71_string = "head"; // 0x32e PushS
	LookAsyncCamera(var_71_string); // 0x32f Func
}


func_883()
{
	var_13_bool = 0; // 0x373 PushV
	func_993(var_13_bool); // 0x374 NEW_2
	if(var_13_bool == 0) goto Label_889; // 0x376 JumpB
	lshStopSpeech(); // 0x377 Func
	
Label_889:
	return 0; // 0x379 Return
}


func_1013()
{
	func_1132(); // 0x3f7 NEW_2
	var_67_bool = 0; var_68_string = ""; var_69_string = ""; // 0x3f9 PushV
	var_68_string = "quest_b2_02"; // 0x3fa MovS
	var_69_string = "completed"; // 0x3fb MovS
	func_949(var_67_bool, var_68_string, var_69_string); // 0x3fc NEW_2
	return 0; // 0x3fe Return
}


func_1145(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x479 PushV
	GetDiaryRoot(var_36_object); // 0x47a Func
	var_37_bool = var_36_object == 0; // 0x47c Not
	if(var_37_bool == 0) goto Label_1155; // 0x47d JumpB
	var_38_string = "Can't retrieve diary root"; // 0x47e PushS
	Trace(var_38_string); // 0x47f Func
	var_34_object = 0; // 0x481 MovB
	return 2; // 0x482 Return
	
Label_1155:
	var_34_object = var_36_object; // 0x483 Mov
	return 2; // 0x484 Return
}


func_890(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x37a PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x37b Or
	var_56_float = sqrt(var_57_int); // 0x37c Sqrt2
	var_58_float = 0.0; // 0x37d PushF
	var_59_bool = var_56_float < var_58_float; // 0x37e LT
	if(var_59_bool == 0) goto Label_898; // 0x37f JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x380 MovV
	return 2; // 0x381 Return
	
Label_898:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x382 Div2
	return 2; // 0x383 Return
}


func_1023()
{
	var_105_string = "oob2Gatherer2"; // 0x400 PushS
	var_106_int = 1; // 0x401 PushI
	SetVariable(var_105_string, var_106_int); // 0x402 Func
	return 0; // 0x404 Return
}


