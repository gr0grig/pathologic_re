task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_bool)
{
	var_13_int = 1; // 0xb6 PushI
	if(var_13_int == 0) goto Label_499; // 0xb7 JumpB
	func_1070(); // 0xb9 NEW_2
	var_15_int = 32262; // 0xbb PushI
	var_16_bool = var_12_bool == var_15_int; // 0xbc Eq
	if(var_16_bool == 0) goto Label_205; // 0xbd JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xbe PushV
	var_17_object = var_1_object; // 0xbf MovT
	var_18_object = var_0_object; // 0xc0 MovT
	func_1147(); // 0xc1 NEW_2
	var_69_object = Obj(); var_70_object = Obj(); // 0xc3 PushV
	var_69_object = var_1_object; // 0xc4 MovT
	var_70_object = var_0_object; // 0xc5 MovT
	func_1212(); // 0xc6 NEW_2
	var_81_object = Obj(); var_82_object = Obj(); // 0xc8 PushV
	var_81_object = var_1_object; // 0xc9 MovT
	var_82_object = var_0_object; // 0xca MovT
	func_1180(); // 0xcb NEW_2
	
Label_205:
	var_107_int = 32312; // 0xcd PushI
	var_108_bool = var_12_bool == var_107_int; // 0xce Eq
	if(var_108_bool == 0) goto Label_223; // 0xcf JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0xd0 PushV
	var_109_object = var_1_object; // 0xd1 MovT
	var_110_object = var_0_object; // 0xd2 MovT
	func_1147(); // 0xd3 NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0xd5 PushV
	var_111_object = var_1_object; // 0xd6 MovT
	var_112_object = var_0_object; // 0xd7 MovT
	func_1212(); // 0xd8 NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0xda PushV
	var_113_object = var_1_object; // 0xdb MovT
	var_114_object = var_0_object; // 0xdc MovT
	func_1196(); // 0xdd NEW_2
	
Label_223:
	var_120_int = 32255; // 0xdf PushI
	var_121_bool = var_11_bool == var_120_int; // 0xe0 Eq
	if(var_121_bool == 0) goto Label_266; // 0xe1 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0xe2 PushV
	var_123_object = var_1_object; // 0xe3 MovT
	func_1219(var_123_object); // 0xe4 NEW_2
	if(var_122_bool == 0) goto Label_251; // 0xe6 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0xe7 PushV
	var_130_object = var_1_object; // 0xe8 MovT
	var_131_object = var_0_object; // 0xe9 MovT
	func_1141(); // 0xea NEW_2
	var_134_string = ""; // 0xec PushV
	var_134_string = "Fear"; // 0xed MovS
	func_159(var_12_bool, var_134_string); // 0xee NEW_2
	var_151_int = 530928; // 0xf0 PushI
	SetMessage(var_151_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_152_int = 530929; // 0xf5 PushI
	var_153_int = 32288; // 0xf6 PushI
	var_154_int = 32256; // 0xf7 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_155_string = ""; // 0xfb PushV
	var_155_string = "Neutral"; // 0xfc MovS
	func_159(var_12_bool, var_155_string); // 0xfd NEW_2
	var_156_int = 530936; // 0xff PushI
	SetMessage(var_156_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_157_int = 530937; // 0x104 PushI
	var_158_int = -1; // 0x105 PushI
	var_159_int = 32264; // 0x106 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_160_int = 32288; // 0x10a PushI
	var_161_bool = var_11_bool == var_160_int; // 0x10b Eq
	if(var_161_bool == 0) goto Label_284; // 0x10c JumpB
	var_162_string = ""; // 0x10d PushV
	var_162_string = "Fear"; // 0x10e MovS
	func_159(var_12_bool, var_162_string); // 0x10f NEW_2
	var_163_int = 530967; // 0x111 PushI
	SetMessage(var_163_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_164_int = 530968; // 0x116 PushI
	var_165_int = 32291; // 0x117 PushI
	var_166_int = 32289; // 0x118 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_167_int = 32294; // 0x11c PushI
	var_168_bool = var_11_bool == var_167_int; // 0x11d Eq
	if(var_168_bool == 0) goto Label_287; // 0x11e JumpB
	
Label_287:
	var_169_int = 32296; // 0x11f PushI
	var_170_bool = var_11_bool == var_169_int; // 0x120 Eq
	if(var_170_bool == 0) goto Label_305; // 0x121 JumpB
	var_171_string = ""; // 0x122 PushV
	var_171_string = "Azart"; // 0x123 MovS
	func_159(var_12_bool, var_171_string); // 0x124 NEW_2
	var_172_int = 530975; // 0x126 PushI
	SetMessage(var_172_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_173_int = 530977; // 0x12b PushI
	var_174_int = 32291; // 0x12c PushI
	var_175_int = 32298; // 0x12d PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_176_int = 32291; // 0x131 PushI
	var_177_bool = var_11_bool == var_176_int; // 0x132 Eq
	if(var_177_bool == 0) goto Label_328; // 0x133 JumpB
	var_178_string = ""; // 0x134 PushV
	var_178_string = "Azart"; // 0x135 MovS
	func_159(var_12_bool, var_178_string); // 0x136 NEW_2
	var_179_int = 530970; // 0x138 PushI
	SetMessage(var_179_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_180_int = 530971; // 0x13d PushI
	var_181_int = 32293; // 0x13e PushI
	var_182_int = 32292; // 0x13f PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x140 TObjFunc
	var_183_int = 530989; // 0x142 PushI
	var_184_int = 32315; // 0x143 PushI
	var_185_int = 32314; // 0x144 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_186_int = 32315; // 0x148 PushI
	var_187_bool = var_11_bool == var_186_int; // 0x149 Eq
	if(var_187_bool == 0) goto Label_346; // 0x14a JumpB
	var_188_string = ""; // 0x14b PushV
	var_188_string = "Serious"; // 0x14c MovS
	func_159(var_12_bool, var_188_string); // 0x14d NEW_2
	var_189_int = 530990; // 0x14f PushI
	SetMessage(var_189_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_190_int = 530991; // 0x154 PushI
	var_191_int = 32293; // 0x155 PushI
	var_192_int = 32316; // 0x156 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_193_int = 32293; // 0x15a PushI
	var_194_bool = var_11_bool == var_193_int; // 0x15b Eq
	if(var_194_bool == 0) goto Label_364; // 0x15c JumpB
	var_195_string = ""; // 0x15d PushV
	var_195_string = "Azart"; // 0x15e MovS
	func_159(var_12_bool, var_195_string); // 0x15f NEW_2
	var_196_int = 530972; // 0x161 PushI
	SetMessage(var_196_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_197_int = 530978; // 0x166 PushI
	var_198_int = 32302; // 0x167 PushI
	var_199_int = 32300; // 0x168 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x169 TObjFunc
	return 0; // 0x16b Return
	
Label_364:
	var_200_int = 32302; // 0x16c PushI
	var_201_bool = var_11_bool == var_200_int; // 0x16d Eq
	if(var_201_bool == 0) goto Label_387; // 0x16e JumpB
	var_202_string = ""; // 0x16f PushV
	var_202_string = "Serious"; // 0x170 MovS
	func_159(var_12_bool, var_202_string); // 0x171 NEW_2
	var_203_int = 530980; // 0x173 PushI
	SetMessage(var_203_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_204_int = 530981; // 0x178 PushI
	var_205_int = 32301; // 0x179 PushI
	var_206_int = 32303; // 0x17a PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x17b TObjFunc
	var_207_int = 530987; // 0x17d PushI
	var_208_int = 32301; // 0x17e PushI
	var_209_int = 32310; // 0x17f PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_210_int = 32301; // 0x183 PushI
	var_211_bool = var_11_bool == var_210_int; // 0x184 Eq
	if(var_211_bool == 0) goto Label_405; // 0x185 JumpB
	var_212_string = ""; // 0x186 PushV
	var_212_string = "Serious"; // 0x187 MovS
	func_159(var_12_bool, var_212_string); // 0x188 NEW_2
	var_213_int = 530979; // 0x18a PushI
	SetMessage(var_213_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_214_int = 530982; // 0x18f PushI
	var_215_int = 32305; // 0x190 PushI
	var_216_int = 32304; // 0x191 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_217_int = 32305; // 0x195 PushI
	var_218_bool = var_11_bool == var_217_int; // 0x196 Eq
	if(var_218_bool == 0) goto Label_428; // 0x197 JumpB
	var_219_string = ""; // 0x198 PushV
	var_219_string = "Azart"; // 0x199 MovS
	func_159(var_12_bool, var_219_string); // 0x19a NEW_2
	var_220_int = 530983; // 0x19c PushI
	SetMessage(var_220_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_221_int = 530931; // 0x1a1 PushI
	var_222_int = 32259; // 0x1a2 PushI
	var_223_int = 32258; // 0x1a3 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1a4 TObjFunc
	var_224_int = 530984; // 0x1a6 PushI
	var_225_int = 32307; // 0x1a7 PushI
	var_226_int = 32306; // 0x1a8 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_227_int = 32307; // 0x1ac PushI
	var_228_bool = var_11_bool == var_227_int; // 0x1ad Eq
	if(var_228_bool == 0) goto Label_446; // 0x1ae JumpB
	var_229_string = ""; // 0x1af PushV
	var_229_string = "Azart"; // 0x1b0 MovS
	func_159(var_12_bool, var_229_string); // 0x1b1 NEW_2
	var_230_int = 530985; // 0x1b3 PushI
	SetMessage(var_230_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_231_int = 530986; // 0x1b8 PushI
	var_232_int = 32259; // 0x1b9 PushI
	var_233_int = 32308; // 0x1ba PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_234_int = 32259; // 0x1be PushI
	var_235_bool = var_11_bool == var_234_int; // 0x1bf Eq
	if(var_235_bool == 0) goto Label_469; // 0x1c0 JumpB
	var_236_string = ""; // 0x1c1 PushV
	var_236_string = "Serious"; // 0x1c2 MovS
	func_159(var_12_bool, var_236_string); // 0x1c3 NEW_2
	var_237_int = 530932; // 0x1c5 PushI
	SetMessage(var_237_int); // 0x1c6 TObjFunc
	ClearReplies(); // 0x1c8 TObjFunc
	var_238_int = 530933; // 0x1ca PushI
	var_239_int = 32261; // 0x1cb PushI
	var_240_int = 32260; // 0x1cc PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1cd TObjFunc
	var_241_int = 530988; // 0x1cf PushI
	var_242_int = -1; // 0x1d0 PushI
	var_243_int = 32312; // 0x1d1 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1d2 TObjFunc
	return 0; // 0x1d4 Return
	
Label_469:
	var_244_int = 32261; // 0x1d5 PushI
	var_245_bool = var_11_bool == var_244_int; // 0x1d6 Eq
	if(var_245_bool == 0) goto Label_487; // 0x1d7 JumpB
	var_246_string = ""; // 0x1d8 PushV
	var_246_string = "Serious"; // 0x1d9 MovS
	func_159(var_12_bool, var_246_string); // 0x1da NEW_2
	var_247_int = 530934; // 0x1dc PushI
	SetMessage(var_247_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_248_int = 530935; // 0x1e1 PushI
	var_249_int = -1; // 0x1e2 PushI
	var_250_int = 32262; // 0x1e3 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1e4 TObjFunc
	return 0; // 0x1e6 Return
	
Label_487:
	var_3_string = 1; // 0x1e7 TMovB
	var_251_bool = 0; // 0x1e8 PushV
	func_1377(var_251_bool); // 0x1e9 NEW_2
	if(var_251_bool == 0) goto Label_495; // 0x1eb JumpB
	lshStopAnimation(); // 0x1ec Func
	goto Label_497; // 0x1ee Jump
	
Label_497:
	return 0; // 0x1f1 Return
	
Label_495:
	StopAnimation(); // 0x1ef Func
	
Label_499:
	return 0; // 0x1f3 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool)
{
	var_13_int = 1; // 0x296 PushI
	if(var_13_int == 0) goto Label_738; // 0x297 JumpB
	func_1070(); // 0x299 NEW_2
	var_15_int = 22020; // 0x29b PushI
	var_16_bool = var_11_int == var_15_int; // 0x29c Eq
	if(var_16_bool == 0) goto Label_690; // 0x29d JumpB
	var_17_string = ""; // 0x29e PushV
	var_17_string = "Neutral"; // 0x29f MovS
	func_639(var_12_bool, var_17_string); // 0x2a0 NEW_2
	var_34_int = 520803; // 0x2a2 PushI
	SetMessage(var_34_int); // 0x2a3 TObjFunc
	ClearReplies(); // 0x2a5 TObjFunc
	var_35_int = 520804; // 0x2a7 PushI
	var_36_int = 29221; // 0x2a8 PushI
	var_37_int = 22021; // 0x2a9 PushI
	AddReply(var_35_int, var_36_int, var_37_int); // 0x2aa TObjFunc
	var_38_int = 527876; // 0x2ac PushI
	var_39_int = 29224; // 0x2ad PushI
	var_40_int = 29223; // 0x2ae PushI
	AddReply(var_38_int, var_39_int, var_40_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_41_int = 29224; // 0x2b2 PushI
	var_42_bool = var_11_int == var_41_int; // 0x2b3 Eq
	if(var_42_bool == 0) goto Label_708; // 0x2b4 JumpB
	var_43_string = ""; // 0x2b5 PushV
	var_43_string = "Neutral"; // 0x2b6 MovS
	func_639(var_12_bool, var_43_string); // 0x2b7 NEW_2
	var_44_int = 527877; // 0x2b9 PushI
	SetMessage(var_44_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_45_int = 527878; // 0x2be PushI
	var_46_int = -1; // 0x2bf PushI
	var_47_int = 29225; // 0x2c0 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_48_int = 29221; // 0x2c4 PushI
	var_49_bool = var_11_int == var_48_int; // 0x2c5 Eq
	if(var_49_bool == 0) goto Label_726; // 0x2c6 JumpB
	var_50_string = ""; // 0x2c7 PushV
	var_50_string = "Neutral"; // 0x2c8 MovS
	func_639(var_12_bool, var_50_string); // 0x2c9 NEW_2
	var_51_int = 527874; // 0x2cb PushI
	SetMessage(var_51_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_52_int = 527875; // 0x2d0 PushI
	var_53_int = -1; // 0x2d1 PushI
	var_54_int = 29222; // 0x2d2 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_3_string = 1; // 0x2d6 TMovB
	var_55_bool = 0; // 0x2d7 PushV
	func_1377(var_55_bool); // 0x2d8 NEW_2
	if(var_55_bool == 0) goto Label_734; // 0x2da JumpB
	lshStopAnimation(); // 0x2db Func
	goto Label_736; // 0x2dd Jump
	
Label_736:
	return 0; // 0x2e0 Return
	
Label_734:
	StopAnimation(); // 0x2de Func
	
Label_738:
	return 0; // 0x2e2 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_object)
{
	var_12_object = Obj(); // 0x2e4 PushV
	var_12_object = var_11_object; // 0x2e5 Mov
	func_1352(var_12_object); // 0x2e6 NEW_2
	var_242_int = 0; var_243_object = Obj(); // 0x2e8 PushV
	var_243_object = var_11_object; // 0x2e9 Mov
	TaskCall(0); // 0x2ea TaskCall
	func_0(var_244_object, var_242_int, var_243_object); // 0x2eb NEW_2
	TaskReturn(); // 0x2ec TaskReturn
	return 0; // 0x2ee Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool, var_11_string)
{
	var_12_bool = 0; var_13_bool = 0; // 0x2f3 PushV
	var_14_string = "cleanup"; // 0x2f4 PushS
	var_15_bool = var_11_string == var_14_string; // 0x2f5 Eq
	if(var_15_bool == 0) goto Label_778; // 0x2f6 JumpB
	var_0_object = 1; // 0x2f7 TMovB
	IsLoaded(var_13_bool); // 0x2f8 Func
	var_16_bool = 0; // 0x2fa PushV
	var_16_bool = 0; // 0x2fb MovB
	var_17_bool = var_13_bool == 0; // 0x2fc Not
	if(var_17_bool == 0) goto Label_771; // 0x2fd JumpB
	var_18_bool = 0; // 0x2fe PushV
	func_799(var_18_bool); // 0x2ff NEW_2
	if(var_18_bool == 0) goto Label_771; // 0x301 JumpB
	var_16_bool = 1; // 0x302 MovB
	
Label_771:
	if(var_16_bool == 0) goto Label_777; // 0x303 JumpB
	var_19_object = Obj(); // 0x304 PushV
	func_1077(var_19_object); // 0x305 NEW_2
	RemoveActor(var_19_object); // 0x307 Func
	
Label_777:
	goto Label_782; // 0x309 Jump
	
Label_782:
	return 2; // 0x30e Return
	
Label_778:
	var_22_string = "restore"; // 0x30a PushS
	var_23_bool = var_11_string == var_22_string; // 0x30b Eq
	if(var_23_bool == 0) goto Label_782; // 0x30c JumpB
	var_0_object = 0; // 0x30d TMovB
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	var_11_bool = 0; // 0x30f PushV
	var_11_bool = 0; // 0x310 MovB
	var_12_object = var_0_object; // 0x311 PushT
	if(var_12_object == 0) goto Label_792; // 0x312 JumpB
	var_13_bool = 0; // 0x313 PushV
	func_799(var_13_bool); // 0x314 NEW_2
	if(var_13_bool == 0) goto Label_792; // 0x316 JumpB
	var_11_bool = 1; // 0x317 MovB
	
Label_792:
	if(var_11_bool == 0) goto Label_798; // 0x318 JumpB
	var_14_object = Obj(); // 0x319 PushV
	func_1077(var_14_object); // 0x31a NEW_2
	RemoveActor(var_14_object); // 0x31c Func
	
Label_798:
	return 0; // 0x31e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_bool)
{
	
Label_751:
	Hold(); // 0x2ef Func
	goto Label_751; // 0x2f1 Jump
}


func_1024(var_216_string)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x400 PushV
	lshHasAnimation(var_220_bool, var_216_string); // 0x401 Func
	var_223_bool = var_220_bool; // 0x403 Push
	if(var_223_bool == 0) goto Label_1035; // 0x404 JumpB
	lshGetAnimTimes(var_216_string, var_221_float, var_222_float); // 0x405 Func
	var_224_bool = 0; // 0x407 PushB
	lshPlayAnimation(var_221_float, var_222_float, var_224_bool); // 0x408 Func
	goto Label_1039; // 0x40a Jump
	
Label_1039:
	return 6; // 0x40f Return
	
Label_1035:
	var_225_string = "Can't find lsh animation : "; // 0x40b PushS
	var_226_int = var_225_string + var_216_string; // 0x40c Add
	Trace(var_226_int); // 0x40d Func
}


func_0(var_0_object, var_242_int, var_243_object)
{
	var_245_object = Obj(); var_246_bool = 0; var_247_int = 0; var_248_bool = 0; var_249_object = Obj(); var_250_bool = 0; var_251_int = 0; var_252_bool = 0; // 0x0 PushV
	var_0_object = var_243_object; // 0x1 TMov
	var_253_bool = 0; var_254_object = Obj(); var_255_float = 0; // 0x2 PushV
	var_254_object = var_243_object; // 0x3 Mov
	var_255_float = 70.0; // 0x4 MovF
	func_801(var_254_object, var_255_float); // 0x5 NEW_2
	var_256_bool = var_253_bool == 0; // 0x7 Not
	if(var_256_bool == 0) goto Label_11; // 0x8 JumpB
	var_242_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_249_object); // 0xb Func
	var_257_int = 0; // 0xd PushV
	func_1371(var_257_int); // 0xe NEW_2
	SetNPCName(var_257_int); // 0x10 ObjFunc
	var_258_int = 0; // 0x12 PushV
	func_1369(var_258_int); // 0x13 NEW_2
	SetNPCDescription(var_258_int); // 0x15 ObjFunc
	var_259_string = ""; // 0x17 PushV
	func_1373(var_259_string); // 0x18 NEW_2
	SetPhoto(var_259_string); // 0x1a ObjFunc
	var_260_string = ""; // 0x1c PushV
	func_1375(var_260_string); // 0x1d NEW_2
	SetPhoto2(var_260_string); // 0x1f ObjFunc
	var_261_int = 0; // 0x21 PushV
	func_1335(var_261_int); // 0x22 NEW_2
	SetPlayerName(var_261_int); // 0x24 ObjFunc
	var_251_int = -1; // 0x26 MovI
	IsOverrideActive(var_250_bool); // 0x27 Func
	var_262_bool = var_250_bool; // 0x29 Push
	if(var_262_bool == 0) goto Label_45; // 0x2a JumpB
	var_242_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_249_object); // 0x2d Func
	var_263_bool = 0; var_264_object = Obj(); // 0x2f PushV
	var_265_object = Obj(); // 0x30 PushV
	func_1077(var_265_object); // 0x31 NEW_2
	var_264_object = var_265_object; // 0x32 Mov
	func_886(var_263_bool, var_264_object); // 0x34 NEW_2
	var_266_object = Obj(); var_267_object = Obj(); // 0x36 PushV
	var_266_object = var_243_object; // 0x37 Mov
	var_267_object = var_249_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_268_object, var_269_object, var_270_string, var_271_bool, var_266_object, var_267_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_252_bool); // 0x3d ObjFunc
	
Label_63:
	var_310_bool = var_252_bool == 0; // 0x3f Not
	if(var_310_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_252_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_311_object = Obj(); // 0x46 PushV
	var_311_object = var_243_object; // 0x47 Mov
	func_869(); // 0x48 NEW_2
	StopDialog(var_249_object); // 0x4a Func
	GetReturnValue(var_251_int); // 0x4c ObjFunc
	var_242_int = var_251_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1285(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); // 0x505 PushV
	GetMainOutdoorScene(var_24_object); // 0x506 Func
	var_26_bool = var_24_object == 0; // 0x508 NullEq
	if(var_26_bool == 0) goto Label_1296; // 0x509 JumpB
	var_27_string = "Can't find main outdoor scene"; // 0x50a PushS
	Trace(var_27_string); // 0x50b Func
	var_25_object = 0; // 0x50d SetNull
	var_21_object = var_25_object; // 0x50e Mov
	return 4; // 0x50f Return
	
Label_1296:
	GetMap(var_25_object); // 0x510 ObjFunc
	var_21_object = var_25_object; // 0x512 Mov
	return 4; // 0x513 Return
}


func_1040(var_194_string, var_195_bool)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0; // 0x410 PushV
	lshHasAnimation(var_201_bool, var_194_string); // 0x411 Func
	var_204_bool = var_201_bool; // 0x413 Push
	if(var_204_bool == 0) goto Label_1050; // 0x414 JumpB
	lshGetAnimTimes(var_194_string, var_202_float, var_203_float); // 0x415 Func
	lshPlayAnimation(var_202_float, var_203_float, var_195_bool); // 0x417 Func
	goto Label_1054; // 0x419 Jump
	
Label_1054:
	return 6; // 0x41e Return
	
Label_1050:
	var_205_string = "Can't find lsh animation : "; // 0x41a PushS
	var_206_int = var_205_string + var_194_string; // 0x41b Add
	Trace(var_206_int); // 0x41c Func
}


func_1302(var_83_object, var_84_string, var_85_float)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; // 0x516 PushV
	GetMainOutdoorScene(var_93_object); // 0x517 Func
	var_95_bool = var_93_object == 0; // 0x519 NullEq
	if(var_95_bool == 0) goto Label_1311; // 0x51a JumpB
	var_96_string = "Can't find main outdoor scene"; // 0x51b PushS
	Trace(var_96_string); // 0x51c Func
	return 8; // 0x51e Return
	
Label_1311:
	GetLocator(var_84_string, var_94_bool, var_91_cvector, var_92_cvector); // 0x51f ObjFunc
	var_97_bool = var_94_bool == 0; // 0x521 Not
	if(var_97_bool == 0) goto Label_1321; // 0x522 JumpB
	var_98_string = "Warning: outdoor scene locator "; // 0x523 PushS
	var_99_int = var_98_string + var_84_string; // 0x524 Add
	var_100_string = " doesnt exist"; // 0x525 PushS
	var_101_int = var_99_int + var_100_string; // 0x526 Add
	Trace(var_101_int); // 0x527 Func
	
Label_1321:
	GetMap(var_83_object); // 0x529 ObjFunc
	var_102_bool = var_83_object == 0; // 0x52b NullEq
	if(var_102_bool == 0) goto Label_1329; // 0x52c JumpB
	var_103_string = "Can't find map"; // 0x52d PushS
	Trace(var_103_string); // 0x52e Func
	return 8; // 0x530 Return
	
Label_1329:
	var_104_float = GetByIndex(var_91_cvector, 0); // 0x531 PushE
	var_105_float = GetByIndex(var_91_cvector, 2); // 0x532 PushE
	SetMapParams(var_104_float, var_105_float, var_85_float); // 0x533 ObjFunc
	return 8; // 0x535 Return
}


func_1180()
{
	var_83_object = Obj(); var_84_string = ""; var_85_float = 0; // 0x49d PushV
	var_86_object = Obj(); // 0x49e PushV
	func_1285(var_86_object); // 0x49f NEW_2
	var_83_object = var_86_object; // 0x4a0 Mov
	var_84_string = "pt_map_laska"; // 0x4a2 MovS
	var_85_float = 2; // 0x4a3 MovI
	func_1302(var_83_object, var_84_string, var_85_float); // 0x4a4 NEW_2
	var_106_object = Obj(); // 0x4a6 PushV
	func_1285(var_106_object); // 0x4a7 NEW_2
	ShowMap(var_106_object); // 0x4a9 ObjFunc
	return 0; // 0x4ab Return
}


func_1055(var_122_bool, var_123_string)
{
	var_124_bool = 0; var_125_bool = 0; // 0x41f PushV
	var_126_bool = 0; // 0x420 PushV
	func_1377(var_126_bool); // 0x421 NEW_2
	if(var_126_bool == 0) goto Label_1068; // 0x423 JumpB
	lshHasSpeech(var_125_bool, var_123_string); // 0x424 Func
	var_127_bool = var_125_bool; // 0x426 Push
	if(var_127_bool == 0) goto Label_1068; // 0x427 JumpB
	lshPlaySpeech(var_123_string); // 0x428 Func
	var_122_bool = 1; // 0x42a MovB
	return 2; // 0x42b Return
	
Label_1068:
	var_122_bool = 0; // 0x42c MovB
	return 2; // 0x42d Return
}


func_799(var_13_bool)
{
	var_13_bool = 1; // 0x31f MovB
	return 0; // 0x320 Return
}


func_801(var_28_bool, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; // 0x321 PushV
	GetPosition(var_41_cvector); // 0x322 ObjFunc
	GetEyesHeight(var_40_float); // 0x324 ObjFunc
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x326 PushE
	var_49_float = var_49_float + var_40_float; // 0x327 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x328 PopE
	GetPosition(var_42_cvector); // 0x329 Func
	GetEyesHeight(var_40_float); // 0x32b Func
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x32d PushE
	var_50_float = var_50_float + var_40_float; // 0x32e Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x32f PopE
	var_43_cvector = var_41_cvector - var_42_cvector; // 0x330 Sub2
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x331 PushE
	var_51_float = 0; // 0x332 MovI
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x333 PopE
	var_52_int = var_43_cvector | var_43_cvector; // 0x334 Or
	var_53_float = sqrt(var_52_int); // 0x335 Sqrt
	var_43_cvector = var_43_cvector / var_43_cvector; // 0x336 Div2
	var_44_cvector = -var_43_cvector; // 0x337 Neg2
	var_54_float = var_43_cvector * var_30_float; // 0x338 Mult
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x339 PushV
	var_57_cvector = CVector(0.0, 1.0, 0.0); // 0x33a PushVec
	var_56_cvector = var_44_cvector ^ var_57_cvector; // 0x33b Xor2
	func_1083(var_55_cvector, var_56_cvector); // 0x33c NEW_2
	var_63_int = 25; // 0x33e PushI
	var_64_float = var_55_cvector * var_63_int; // 0x33f Mult
	var_65_int = var_54_float + var_64_float; // 0x340 Add
	var_66_cvector = CVector(0.0, 10.0, 0.0); // 0x341 PushVec
	var_45_cvector = var_65_int - var_66_cvector; // 0x342 Sub2
	var_46_cvector = var_42_cvector + var_45_cvector; // 0x343 Add2
	IsOverrideActive(var_47_bool); // 0x344 Func
	var_67_bool = var_47_bool; // 0x346 Push
	if(var_67_bool == 0) goto Label_842; // 0x347 JumpB
	var_28_bool = 0; // 0x348 MovB
	return 18; // 0x349 Return
	
Label_842:
	StopWorld(); // 0x34a Func
	CameraTransit(var_46_cvector, var_44_cvector); // 0x34c Func
	var_68_float = GetByIndex(var_45_cvector, 0); // 0x34e PushE
	var_69_float = GetByIndex(var_45_cvector, 2); // 0x34f PushE
	Rotate(var_68_float, var_69_float); // 0x350 Func
	var_70_bool = 0; // 0x352 PushV
	func_1377(var_70_bool); // 0x353 NEW_2
	if(var_70_bool == 0) goto Label_855; // 0x355 JumpB
	goto Label_863; // 0x356 Jump
	
Label_863:
	CameraWaitForPlayFinish(); // 0x35f Func
	ResumeWorld(); // 0x361 Func
	var_28_bool = 1; // 0x363 MovB
	return 18; // 0x364 Return
	
Label_855:
	var_71_string = "head"; // 0x357 PushS
	HasAnimationTrack(var_48_bool, var_71_string); // 0x358 Func
	var_72_bool = var_48_bool; // 0x35a Push
	if(var_72_bool == 0) goto Label_863; // 0x35b JumpB
	var_73_string = "head"; // 0x35c PushS
	LookAsyncCamera(var_73_string); // 0x35d Func
}


func_159(var_2_object, var_285_string)
{
	var_286_bool = 0; // 0xa0 PushV
	func_1377(var_286_bool); // 0xa1 NEW_2
	var_287_bool = var_286_bool == 0; // 0xa3 Not
	if(var_287_bool == 0) goto Label_166; // 0xa4 JumpB
	return 0; // 0xa5 Return
	
Label_166:
	var_288_bool = var_285_string == var_2_object; // 0xa6 Eq
	if(var_288_bool == 0) goto Label_169; // 0xa7 JumpB
	return 0; // 0xa8 Return
	
Label_169:
	var_289_string = ""; var_290_bool = 0; // 0xa9 PushV
	var_289_string = var_285_string; // 0xaa Mov
	var_291_string = ""; // 0xab PushS
	var_292_bool = var_285_string == var_291_string; // 0xac Eq
	if(var_292_bool == 0) goto Label_176; // 0xad JumpB
	var_290_bool = 0; // 0xae MovB
	goto Label_177; // 0xaf Jump
	
Label_177:
	func_1040(var_289_string, var_290_bool); // 0xb1 NEW_2
	var_2_object = var_285_string; // 0xb3 TMov
	return 0; // 0xb4 Return
	
Label_176:
	var_290_bool = 1; // 0xb0 MovB
}


func_1196()
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0; // 0x4ad PushV
	var_118_object = Obj(); // 0x4ae PushV
	func_1285(var_118_object); // 0x4af NEW_2
	var_115_object = var_118_object; // 0x4b0 Mov
	var_116_string = "pt_map_mishka"; // 0x4b2 MovS
	var_117_float = 2; // 0x4b3 MovI
	func_1302(var_115_object, var_116_string, var_117_float); // 0x4b4 NEW_2
	var_119_object = Obj(); // 0x4b6 PushV
	func_1285(var_119_object); // 0x4b7 NEW_2
	ShowMap(var_119_object); // 0x4b9 ObjFunc
	return 0; // 0x4bb Return
}


func_1070()
{
	var_14_bool = 0; // 0x42e PushV
	func_1377(var_14_bool); // 0x42f NEW_2
	if(var_14_bool == 0) goto Label_1076; // 0x431 JumpB
	lshStopSpeech(); // 0x432 Func
	
Label_1076:
	return 0; // 0x434 Return
}


func_944(var_99_bool)
{
	var_101_string = ""; var_102_int = 0; var_103_bool = 0; var_104_int = 0; var_105_string = ""; var_106_string = ""; var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_string = ""; // 0x3b0 PushV
	var_106_string = "c"; // 0x3b1 MovS
	var_107_int = 0; // 0x3b2 MovI
	
Label_947:
	var_111_int = 1; // 0x3b3 PushI
	if(var_111_int == 0) goto Label_960; // 0x3b4 JumpB
	var_112_int = 1; // 0x3b5 PushI
	var_113_int = var_107_int + var_112_int; // 0x3b6 Add
	var_114_int = var_106_string + var_113_int; // 0x3b7 Add
	HasProperty(var_114_int, var_108_bool); // 0x3b8 ObjFunc
	var_115_bool = var_108_bool == 0; // 0x3ba Not
	if(var_115_bool == 0) goto Label_957; // 0x3bb JumpB
	goto Label_960; // 0x3bc Jump
	
Label_960:
	var_116_bool = var_107_int == 0; // 0x3c0 Not
	if(var_116_bool == 0) goto Label_964; // 0x3c1 JumpB
	var_99_bool = 0; // 0x3c2 MovB
	return 10; // 0x3c3 Return
	
Label_964:
	var_109_int = 0; // 0x3c4 MovI
	var_117_int = 1; // 0x3c5 PushI
	var_118_bool = var_107_int > var_117_int; // 0x3c6 GT
	if(var_118_bool == 0) goto Label_970; // 0x3c7 JumpB
	irand(var_109_int, var_107_int); // 0x3c8 Func
	
Label_970:
	var_119_int = 1; // 0x3ca PushI
	var_120_int = var_109_int + var_119_int; // 0x3cb Add
	var_121_int = var_106_string + var_120_int; // 0x3cc Add
	GetProperty(var_121_int, var_110_string); // 0x3cd ObjFunc
	var_122_bool = 0; var_123_string = ""; // 0x3cf PushV
	var_123_string = var_110_string; // 0x3d0 Mov
	func_1055(var_122_bool, var_123_string); // 0x3d1 NEW_2
	var_99_bool = var_122_bool; // 0x3d2 Mov
	return 10; // 0x3d4 Return
	
Label_957:
	var_128_int = 1; // 0x3bd PushI
	var_107_int = var_107_int + var_128_int; // 0x3be Add2
	goto Label_947; // 0x3bf Jump
}


func_1077(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x435 PushV
	self(var_16_object); // 0x436 Func
	var_14_object = var_16_object; // 0x438 Mov
	return 2; // 0x439 Return
}


func_1335(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x537 PushV
	var_82_string = "branch"; // 0x538 PushS
	GetVariable(var_82_string, var_81_int); // 0x539 Func
	var_83_int = 0; // 0x53b PushI
	var_84_bool = var_81_int == var_83_int; // 0x53c Eq
	if(var_84_bool == 0) goto Label_1345; // 0x53d JumpB
	var_79_int = 1; // 0x53e MovI
	return 2; // 0x53f Return
	
Label_1345:
	var_85_int = 1; // 0x541 PushI
	var_86_bool = var_81_int == var_85_int; // 0x542 Eq
	if(var_86_bool == 0) goto Label_1350; // 0x543 JumpB
	var_79_int = 2; // 0x544 MovI
	return 2; // 0x545 Return
	
Label_1350:
	var_79_int = 3; // 0x546 MovI
	return 2; // 0x547 Return
}


func_1083(var_55_cvector, var_56_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x43b PushV
	var_60_int = var_56_cvector | var_56_cvector; // 0x43c Or
	var_59_float = sqrt(var_60_int); // 0x43d Sqrt2
	var_61_float = 0.0; // 0x43e PushF
	var_62_bool = var_59_float < var_61_float; // 0x43f LT
	if(var_62_bool == 0) goto Label_1091; // 0x440 JumpB
	var_55_cvector = CVector(0.0, 0.0, 0.0); // 0x441 MovV
	return 2; // 0x442 Return
	
Label_1091:
	var_55_cvector = var_56_cvector / var_56_cvector; // 0x443 Div2
	return 2; // 0x444 Return
}


func_1212()
{
	var_71_string = ""; var_72_bool = 0; // 0x4bd PushV
	var_71_string = "vagon_mishka@door1"; // 0x4be MovS
	var_72_bool = 0; // 0x4bf MovB
	func_1098(var_71_string, var_72_bool); // 0x4c0 NEW_2
	return 0; // 0x4c2 Return
}


func_1219(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x4c4 PushV
	var_276_string = "oob1Spi4ka1"; // 0x4c5 MovS
	func_1093(var_275_int, var_276_string); // 0x4c6 NEW_2
	var_279_int = 0; // 0x4c8 PushI
	var_280_bool = var_275_int == var_279_int; // 0x4c9 Eq
	if(var_280_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_273_bool = 1; // 0x4cb MovB
	return 0; // 0x4cc Return
	
Label_1229:
	var_273_bool = 0; // 0x4cd MovB
	return 0; // 0x4ce Return
}


func_581(var_0_object, var_1_object, var_2_object, var_3_string, var_183_object, var_184_object)
{
	var_0_object = var_184_object; // 0x246 TMov
	var_1_object = var_183_object; // 0x247 TMov
	var_3_string = 0; // 0x248 TMovB
	var_189_int = 1; // 0x249 PushI
	if(var_189_int == 0) goto Label_609; // 0x24a JumpB
	var_190_string = ""; // 0x24b PushV
	var_190_string = "Neutral"; // 0x24c MovS
	func_639(var_184_object, var_190_string); // 0x24d NEW_2
	var_207_int = 520803; // 0x24f PushI
	SetMessage(var_207_int); // 0x250 TObjFunc
	ClearReplies(); // 0x252 TObjFunc
	var_208_int = 520804; // 0x254 PushI
	var_209_int = 29221; // 0x255 PushI
	var_210_int = 22021; // 0x256 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x257 TObjFunc
	var_211_int = 527876; // 0x259 PushI
	var_212_int = 29224; // 0x25a PushI
	var_213_int = 29223; // 0x25b PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x25c TObjFunc
	goto Label_609; // 0x25e Jump
	
Label_609:
	var_214_bool = 0; // 0x261 PushV
	func_1377(var_214_bool); // 0x262 NEW_2
	if(var_214_bool == 0) goto Label_624; // 0x264 JumpB
	
Label_613:
	lshWaitForAnimEnd(); // 0x265 Func
	var_215_string = var_3_string; // 0x267 PushT
	if(var_215_string == 0) goto Label_618; // 0x268 JumpB
	goto Label_623; // 0x269 Jump
	
Label_623:
	goto Label_638; // 0x26f Jump
	
Label_638:
	return 0; // 0x27e Return
	
Label_618:
	var_216_string = ""; // 0x26a PushV
	var_216_string = var_2_object; // 0x26b MovT
	func_1024(var_216_string); // 0x26c NEW_2
	goto Label_613; // 0x26e Jump
	
Label_624:
	var_227_string = "all"; // 0x270 PushS
	var_228_string = "idle"; // 0x271 PushS
	PlayAnimation(var_227_string, var_228_string); // 0x272 Func
	
Label_628:
	WaitForAnimEnd(); // 0x274 Func
	var_229_string = var_3_string; // 0x276 PushT
	if(var_229_string == 0) goto Label_633; // 0x277 JumpB
	goto Label_638; // 0x278 Jump
	
Label_633:
	var_230_string = "all"; // 0x279 PushS
	var_231_string = "idle"; // 0x27a PushS
	PlayAnimation(var_230_string, var_231_string); // 0x27b Func
	goto Label_628; // 0x27d Jump
}


func_1093(var_275_int, var_276_string)
{
	var_277_int = 0; var_278_int = 0; // 0x445 PushV
	GetVariable(var_276_string, var_278_int); // 0x446 Func
	var_275_int = var_278_int; // 0x448 Mov
	return 2; // 0x449 Return
}


func_1352(var_12_object)
{
	var_13_int = 0; var_14_int = 0; // 0x548 PushV
	var_15_string = "mt_spi4ka"; // 0x549 PushS
	GetVariable(var_15_string, var_14_int); // 0x54a Func
	var_16_bool = var_14_int == 0; // 0x54c Not
	if(var_16_bool == 0) goto Label_1368; // 0x54d JumpB
	var_17_int = 0; var_18_object = Obj(); // 0x54e PushV
	var_18_object = var_12_object; // 0x54f Mov
	TaskCall(2); // 0x550 TaskCall
	func_500(var_19_object, var_17_int, var_18_object); // 0x551 NEW_2
	TaskReturn(); // 0x552 TaskReturn
	var_240_string = "mt_spi4ka"; // 0x554 PushS
	var_241_int = 1; // 0x555 PushI
	SetVariable(var_240_string, var_241_int); // 0x556 Func
	
Label_1368:
	return 2; // 0x558 Return
}


func_1098(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x44a PushV
	FindActor(var_74_object, var_71_string); // 0x44b Func
	var_75_bool = var_74_object == 0; // 0x44d Not
	if(var_75_bool == 0) goto Label_1110; // 0x44e JumpB
	var_76_string = "Door "; // 0x44f PushS
	var_77_int = var_76_string + var_71_string; // 0x450 Add
	var_78_string = " not found"; // 0x451 PushS
	var_79_int = var_77_int + var_78_string; // 0x452 Add
	Trace(var_79_int); // 0x453 Func
	goto Label_1113; // 0x455 Jump
	
Label_1113:
	return 2; // 0x459 Return
	
Label_1110:
	var_80_string = "locked"; // 0x456 PushS
	SetProperty(var_80_string, var_72_bool); // 0x457 ObjFunc
}


func_1231()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x4cf PushV
	var_42_int = 584; // 0x4d0 PushI
	var_43_int = 2; // 0x4d1 PushI
	var_44_int = 530953; // 0x4d2 PushI
	CreateDiaryEntry(var_41_object, var_42_int, var_43_int, var_44_int); // 0x4d3 Func
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0; // 0x4d5 PushV
	var_46_object = var_41_object; // 0x4d6 Mov
	var_47_int = 582; // 0x4d7 MovI
	func_1257(var_45_bool, var_46_object, var_47_int); // 0x4d8 NEW_2
	return 2; // 0x4da Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_266_object, var_267_object)
{
	var_0_object = var_267_object; // 0x52 TMov
	var_1_object = var_266_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_272_int = 1; // 0x55 PushI
	if(var_272_int == 0) goto Label_129; // 0x56 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x57 PushV
	var_274_object = var_1_object; // 0x58 MovT
	func_1219(var_274_object); // 0x59 NEW_2
	if(var_273_bool == 0) goto Label_112; // 0x5b JumpB
	var_281_object = Obj(); var_282_object = Obj(); // 0x5c PushV
	var_281_object = var_1_object; // 0x5d MovT
	var_282_object = var_0_object; // 0x5e MovT
	func_1141(); // 0x5f NEW_2
	var_285_string = ""; // 0x61 PushV
	var_285_string = "Fear"; // 0x62 MovS
	func_159(var_267_object, var_285_string); // 0x63 NEW_2
	var_293_int = 530928; // 0x65 PushI
	SetMessage(var_293_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_294_int = 530929; // 0x6a PushI
	var_295_int = 32288; // 0x6b PushI
	var_296_int = 32256; // 0x6c PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x6d TObjFunc
	goto Label_129; // 0x6f Jump
	
Label_129:
	var_297_bool = 0; // 0x81 PushV
	func_1377(var_297_bool); // 0x82 NEW_2
	if(var_297_bool == 0) goto Label_144; // 0x84 JumpB
	
Label_133:
	lshWaitForAnimEnd(); // 0x85 Func
	var_298_string = var_3_string; // 0x87 PushT
	if(var_298_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_143:
	goto Label_158; // 0x8f Jump
	
Label_158:
	return 0; // 0x9e Return
	
Label_138:
	var_299_string = ""; // 0x8a PushV
	var_299_string = var_2_object; // 0x8b MovT
	func_1024(var_299_string); // 0x8c NEW_2
	goto Label_133; // 0x8e Jump
	
Label_144:
	var_300_string = "all"; // 0x90 PushS
	var_301_string = "idle"; // 0x91 PushS
	PlayAnimation(var_300_string, var_301_string); // 0x92 Func
	
Label_148:
	WaitForAnimEnd(); // 0x94 Func
	var_302_string = var_3_string; // 0x96 PushT
	if(var_302_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_153:
	var_303_string = "all"; // 0x99 PushS
	var_304_string = "idle"; // 0x9a PushS
	PlayAnimation(var_303_string, var_304_string); // 0x9b Func
	goto Label_148; // 0x9d Jump
	
Label_112:
	var_305_string = ""; // 0x70 PushV
	var_305_string = "Neutral"; // 0x71 MovS
	func_159(var_267_object, var_305_string); // 0x72 NEW_2
	var_306_int = 530936; // 0x74 PushI
	SetMessage(var_306_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_307_int = 530937; // 0x79 PushI
	var_308_int = -1; // 0x7a PushI
	var_309_int = 32264; // 0x7b PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x7c TObjFunc
	goto Label_129; // 0x7e Jump
}


func_981(var_130_bool)
{
	var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; // 0x3d5 PushV
	var_142_string = "d"; // 0x3d6 PushS
	var_143_int = 0; // 0x3d7 PushV
	func_1132(var_143_int); // 0x3d8 NEW_2
	var_149_int = var_142_string + var_143_int; // 0x3da Add
	var_150_string = "m"; // 0x3db PushS
	var_137_string = var_149_int + var_150_string; // 0x3dc Add2
	var_138_int = 0; // 0x3dd MovI
	
Label_990:
	var_151_int = 1; // 0x3de PushI
	if(var_151_int == 0) goto Label_1003; // 0x3df JumpB
	var_152_int = 1; // 0x3e0 PushI
	var_153_int = var_138_int + var_152_int; // 0x3e1 Add
	var_154_int = var_137_string + var_153_int; // 0x3e2 Add
	HasProperty(var_154_int, var_139_bool); // 0x3e3 ObjFunc
	var_155_bool = var_139_bool == 0; // 0x3e5 Not
	if(var_155_bool == 0) goto Label_1000; // 0x3e6 JumpB
	goto Label_1003; // 0x3e7 Jump
	
Label_1003:
	var_156_bool = var_138_int == 0; // 0x3eb Not
	if(var_156_bool == 0) goto Label_1007; // 0x3ec JumpB
	var_130_bool = 0; // 0x3ed MovB
	return 10; // 0x3ee Return
	
Label_1007:
	var_140_int = 0; // 0x3ef MovI
	var_157_int = 1; // 0x3f0 PushI
	var_158_bool = var_138_int > var_157_int; // 0x3f1 GT
	if(var_158_bool == 0) goto Label_1013; // 0x3f2 JumpB
	irand(var_140_int, var_138_int); // 0x3f3 Func
	
Label_1013:
	var_159_int = 1; // 0x3f5 PushI
	var_160_int = var_140_int + var_159_int; // 0x3f6 Add
	var_161_int = var_137_string + var_160_int; // 0x3f7 Add
	GetProperty(var_161_int, var_141_string); // 0x3f8 ObjFunc
	var_162_bool = 0; var_163_string = ""; // 0x3fa PushV
	var_163_string = var_141_string; // 0x3fb Mov
	func_1055(var_162_bool, var_163_string); // 0x3fc NEW_2
	var_130_bool = var_162_bool; // 0x3fd Mov
	return 10; // 0x3ff Return
	
Label_1000:
	var_164_int = 1; // 0x3e8 PushI
	var_138_int = var_138_int + var_164_int; // 0x3e9 Add2
	goto Label_990; // 0x3ea Jump
}


func_1369(var_76_int)
{
	var_76_int = 515552; // 0x559 MovI
	return 0; // 0x55a Return
}


func_1371(var_75_int)
{
	var_75_int = 502877; // 0x55b MovI
	return 0; // 0x55c Return
}


func_1115(var_63_bool, var_64_string, var_65_string)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x45b PushV
	FindActor(var_67_object, var_64_string); // 0x45c Func
	var_68_bool = var_67_object == 0; // 0x45e NullEq
	if(var_68_bool == 0) goto Label_1122; // 0x45f JumpB
	var_63_bool = 0; // 0x460 MovB
	return 2; // 0x461 Return
	
Label_1122:
	Trigger(var_67_object, var_65_string); // 0x462 Func
	var_63_bool = 1; // 0x464 MovB
	return 2; // 0x465 Return
}


func_1373(var_77_string)
{
	var_77_string = "ui/NPC_Spi4ka.png"; // 0x55d MovS
	return 0; // 0x55e Return
}


func_1244(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x4dc PushV
	GetDiaryRoot(var_56_object); // 0x4dd Func
	var_57_bool = var_56_object == 0; // 0x4df Not
	if(var_57_bool == 0) goto Label_1254; // 0x4e0 JumpB
	var_58_string = "Can't retrieve diary root"; // 0x4e1 PushS
	Trace(var_58_string); // 0x4e2 Func
	var_54_object = 0; // 0x4e4 MovB
	return 2; // 0x4e5 Return
	
Label_1254:
	var_54_object = var_56_object; // 0x4e6 Mov
	return 2; // 0x4e7 Return
}


func_1375(var_78_string)
{
	var_78_string = "ui/NPC_Spi4ka_b.png"; // 0x55f MovS
	return 0; // 0x560 Return
}


func_1377(var_70_bool)
{
	var_70_bool = 1; // 0x561 MovB
	return 0; // 0x562 Return
}


func_869()
{
	var_234_bool = 0; var_235_bool = 0; // 0x365 PushV
	CameraSwitchToNormal(); // 0x366 Func
	var_236_bool = 0; // 0x368 PushV
	func_1377(var_236_bool); // 0x369 NEW_2
	if(var_236_bool == 0) goto Label_877; // 0x36b JumpB
	goto Label_885; // 0x36c Jump
	
Label_885:
	return 2; // 0x375 Return
	
Label_877:
	var_237_string = "head"; // 0x36d PushS
	HasAnimationTrack(var_235_bool, var_237_string); // 0x36e Func
	var_238_bool = var_235_bool; // 0x370 Push
	if(var_238_bool == 0) goto Label_885; // 0x371 JumpB
	var_239_string = "head"; // 0x372 PushS
	UnlookAsync(var_239_string); // 0x373 Func
}


func_1127(var_32_float)
{
	var_33_float = 0; var_34_float = 0; // 0x467 PushV
	GetGameTime(var_34_float); // 0x468 Func
	var_32_float = var_34_float; // 0x46a Mov
	return 2; // 0x46b Return
}


func_1257(var_45_bool, var_46_object, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; // 0x4e9 PushV
	var_54_object = Obj(); // 0x4ea PushV
	func_1244(var_54_object); // 0x4eb NEW_2
	var_51_object = var_54_object; // 0x4ec Mov
	Find(var_47_int, var_52_object); // 0x4ee ObjFunc
	var_59_bool = var_52_object == 0; // 0x4f0 Not
	if(var_59_bool == 0) goto Label_1272; // 0x4f1 JumpB
	var_60_string = "Can't find diary parent with id: "; // 0x4f2 PushS
	var_61_int = var_60_string + var_47_int; // 0x4f3 Add
	Trace(var_61_int); // 0x4f4 Func
	var_45_bool = 0; // 0x4f6 MovB
	return 6; // 0x4f7 Return
	
Label_1272:
	AddChild(var_46_object); // 0x4f8 ObjFunc
	var_62_int = 7; // 0x4fa PushI
	SendWorldWndMessage(var_62_int); // 0x4fb Func
	GetCategory(var_53_int); // 0x4fd ObjFunc
	SetDiarySection(var_53_int); // 0x4ff Func
	var_45_bool = 0; // 0x501 MovB
	return 6; // 0x502 Return
}


func_1132(var_143_int)
{
	var_144_float = 0; var_145_float = 0; // 0x46c PushV
	GetGameTime(var_145_float); // 0x46d Func
	var_146_int = 1; // 0x46f PushI
	var_147_int = 0; // 0x470 PushV
	var_148_int = 24; // 0x471 PushI
	var_147_int = var_145_float / var_145_float; // 0x472 Div2
	var_143_int = var_146_int + var_147_int; // 0x473 Add2
	return 2; // 0x474 Return
}


func_500(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x1f4 PushV
	var_0_object = var_18_object; // 0x1f5 TMov
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0; // 0x1f6 PushV
	var_29_object = var_18_object; // 0x1f7 Mov
	var_30_float = 70.0; // 0x1f8 MovF
	func_801(var_29_object, var_30_float); // 0x1f9 NEW_2
	var_74_bool = var_28_bool == 0; // 0x1fb Not
	if(var_74_bool == 0) goto Label_511; // 0x1fc JumpB
	var_17_int = -2; // 0x1fd MovI
	return 8; // 0x1fe Return
	
Label_511:
	CreateDialog(var_24_object); // 0x1ff Func
	var_75_int = 0; // 0x201 PushV
	func_1371(var_75_int); // 0x202 NEW_2
	SetNPCName(var_75_int); // 0x204 ObjFunc
	var_76_int = 0; // 0x206 PushV
	func_1369(var_76_int); // 0x207 NEW_2
	SetNPCDescription(var_76_int); // 0x209 ObjFunc
	var_77_string = ""; // 0x20b PushV
	func_1373(var_77_string); // 0x20c NEW_2
	SetPhoto(var_77_string); // 0x20e ObjFunc
	var_78_string = ""; // 0x210 PushV
	func_1375(var_78_string); // 0x211 NEW_2
	SetPhoto2(var_78_string); // 0x213 ObjFunc
	var_79_int = 0; // 0x215 PushV
	func_1335(var_79_int); // 0x216 NEW_2
	SetPlayerName(var_79_int); // 0x218 ObjFunc
	var_26_int = -1; // 0x21a MovI
	IsOverrideActive(var_25_bool); // 0x21b Func
	var_87_bool = var_25_bool; // 0x21d Push
	if(var_87_bool == 0) goto Label_545; // 0x21e JumpB
	var_17_int = -2; // 0x21f MovI
	return 8; // 0x220 Return
	
Label_545:
	DoDialog(var_24_object); // 0x221 Func
	var_88_bool = 0; var_89_object = Obj(); // 0x223 PushV
	var_90_object = Obj(); // 0x224 PushV
	func_1077(var_90_object); // 0x225 NEW_2
	var_89_object = var_90_object; // 0x226 Mov
	func_886(var_88_bool, var_89_object); // 0x228 NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0x22a PushV
	var_183_object = var_18_object; // 0x22b Mov
	var_184_object = var_24_object; // 0x22c Mov
	TaskCall(3); // 0x22d TaskCall
	func_581(var_185_object, var_186_object, var_187_string, var_188_bool, var_183_object, var_184_object); // 0x22e NEW_2
	TaskReturn(); // 0x22f TaskReturn
	IsDialogEnd(var_27_bool); // 0x231 ObjFunc
	
Label_563:
	var_232_bool = var_27_bool == 0; // 0x233 Not
	if(var_232_bool == 0) goto Label_570; // 0x234 JumpB
	sync(); // 0x235 Func
	IsDialogEnd(var_27_bool); // 0x237 ObjFunc
	goto Label_563; // 0x239 Jump
	
Label_570:
	var_233_object = Obj(); // 0x23a PushV
	var_233_object = var_18_object; // 0x23b Mov
	func_869(); // 0x23c NEW_2
	StopDialog(var_24_object); // 0x23e Func
	GetReturnValue(var_26_int); // 0x240 ObjFunc
	var_17_int = var_26_int; // 0x242 Mov
	return 8; // 0x243 Return
}


func_1141()
{
	var_283_string = "oob1Spi4ka1"; // 0x476 PushS
	var_284_int = 1; // 0x477 PushI
	SetVariable(var_283_string, var_284_int); // 0x478 Func
	return 0; // 0x47a Return
}


func_886(var_88_bool, var_89_object)
{
	var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0x376 PushV
	var_97_string = "voice_common"; // 0x377 PushS
	GetVariable(var_97_string, var_95_int); // 0x378 Func
	var_98_int = var_95_int; // 0x37a Push
	if(var_98_int == 0) goto Label_924; // 0x37b JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x37c PushV
	var_100_object = var_89_object; // 0x37d Mov
	func_944(var_100_object); // 0x37e NEW_2
	var_129_bool = var_99_bool == 0; // 0x380 Not
	if(var_129_bool == 0) goto Label_906; // 0x381 JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x382 PushV
	var_131_object = var_89_object; // 0x383 Mov
	func_981(var_131_object); // 0x384 NEW_2
	var_165_bool = var_130_bool == 0; // 0x386 Not
	if(var_165_bool == 0) goto Label_906; // 0x387 JumpB
	var_88_bool = 0; // 0x388 MovB
	return 4; // 0x389 Return
	
Label_906:
	var_166_int = 2; // 0x38a PushI
	irand(var_96_int, var_166_int); // 0x38b Func
	var_167_int = var_96_int; // 0x38d Push
	if(var_167_int == 0) goto Label_919; // 0x38e JumpB
	var_168_string = "voice_common"; // 0x38f PushS
	var_169_int = 1; // 0x390 PushI
	var_170_int = var_95_int + var_169_int; // 0x391 Add
	var_171_int = 3; // 0x392 PushI
	var_172_int = var_170_int / var_171_int; // 0x393 Mod
	SetVariable(var_168_string, var_172_int); // 0x394 Func
	goto Label_923; // 0x396 Jump
	
Label_923:
	goto Label_942; // 0x39b Jump
	
Label_942:
	var_88_bool = 1; // 0x3ae MovB
	return 4; // 0x3af Return
	
Label_919:
	var_173_string = "voice_common"; // 0x397 PushS
	var_174_int = 0; // 0x398 PushI
	SetVariable(var_173_string, var_174_int); // 0x399 Func
	
Label_924:
	var_175_bool = 0; var_176_object = Obj(); // 0x39c PushV
	var_176_object = var_89_object; // 0x39d Mov
	func_981(var_176_object); // 0x39e NEW_2
	var_177_bool = var_175_bool == 0; // 0x3a0 Not
	if(var_177_bool == 0) goto Label_938; // 0x3a1 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x3a2 PushV
	var_179_object = var_89_object; // 0x3a3 Mov
	func_944(var_179_object); // 0x3a4 NEW_2
	var_180_bool = var_178_bool == 0; // 0x3a6 Not
	if(var_180_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_88_bool = 0; // 0x3a8 MovB
	return 4; // 0x3a9 Return
	
Label_938:
	var_181_string = "voice_common"; // 0x3aa PushS
	var_182_int = 1; // 0x3ab PushI
	SetVariable(var_181_string, var_182_int); // 0x3ac Func
}


func_1147()
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x47b PushV
	var_21_object = Obj(); // 0x47c PushV
	func_1285(var_21_object); // 0x47d NEW_2
	var_20_object = var_21_object; // 0x47e Mov
	var_28_string = "b1q05Spi4kaGotoLaska"; // 0x480 PushS
	var_29_string = "pt_map_laska"; // 0x481 PushS
	var_30_int = 3; // 0x482 PushI
	var_31_int = 530954; // 0x483 PushI
	var_32_float = 0; // 0x484 PushV
	func_1127(var_32_float); // 0x485 NEW_2
	AddMark(var_28_string, var_29_string, var_30_int, var_31_int, var_32_float); // 0x487 ObjFunc
	var_35_string = "b1q05Spi4kaGotoMishka"; // 0x489 PushS
	var_36_string = "pt_map_mishka"; // 0x48a PushS
	var_37_int = 3; // 0x48b PushI
	var_38_int = 530955; // 0x48c PushI
	var_39_float = 0; // 0x48d PushV
	func_1127(var_39_float); // 0x48e NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x490 ObjFunc
	func_1231(); // 0x493 NEW_2
	var_63_bool = 0; var_64_string = ""; var_65_string = ""; // 0x495 PushV
	var_64_string = "quest_b1_05"; // 0x496 MovS
	var_65_string = "completed"; // 0x497 MovS
	func_1115(var_63_bool, var_64_string, var_65_string); // 0x498 NEW_2
	return 2; // 0x49a Return
}


func_639(var_2_object, var_190_string)
{
	var_191_bool = 0; // 0x280 PushV
	func_1377(var_191_bool); // 0x281 NEW_2
	var_192_bool = var_191_bool == 0; // 0x283 Not
	if(var_192_bool == 0) goto Label_646; // 0x284 JumpB
	return 0; // 0x285 Return
	
Label_646:
	var_193_bool = var_190_string == var_2_object; // 0x286 Eq
	if(var_193_bool == 0) goto Label_649; // 0x287 JumpB
	return 0; // 0x288 Return
	
Label_649:
	var_194_string = ""; var_195_bool = 0; // 0x289 PushV
	var_194_string = var_190_string; // 0x28a Mov
	var_196_string = ""; // 0x28b PushS
	var_197_bool = var_190_string == var_196_string; // 0x28c Eq
	if(var_197_bool == 0) goto Label_656; // 0x28d JumpB
	var_195_bool = 0; // 0x28e MovB
	goto Label_657; // 0x28f Jump
	
Label_657:
	func_1040(var_194_string, var_195_bool); // 0x291 NEW_2
	var_2_object = var_190_string; // 0x293 TMov
	return 0; // 0x294 Return
	
Label_656:
	var_195_bool = 1; // 0x290 MovB
}


