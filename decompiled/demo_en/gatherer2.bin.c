task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_int)
{
	var_20_bool = 0; // 0x1b PushV
	func_1479(var_20_bool); // 0x1c NEW_2
	if(var_20_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	var_21_int = 1; // 0xc3 PushI
	if(var_21_int == 0) goto Label_235; // 0xc4 JumpB
	func_1257(); // 0xc6 NEW_2
	var_23_int = 26759; // 0xc8 PushI
	var_24_bool = var_19_bool == var_23_int; // 0xc9 Eq
	if(var_24_bool == 0) goto Label_223; // 0xca JumpB
	var_25_string = ""; // 0xcb PushV
	var_25_string = "Neutral"; // 0xcc MovS
	func_172(var_20_int, var_25_string); // 0xcd NEW_2
	var_42_int = 525391; // 0xcf PushI
	SetMessage(var_42_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_43_int = 525392; // 0xd4 PushI
	var_44_int = -1; // 0xd5 PushI
	var_45_int = 26760; // 0xd6 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xd7 TObjFunc
	var_46_int = 539025; // 0xd9 PushI
	var_47_int = -1; // 0xda PushI
	var_48_int = 40968; // 0xdb PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_3_object = 1; // 0xdf TMovB
	var_49_bool = 0; // 0xe0 PushV
	func_1479(var_49_bool); // 0xe1 NEW_2
	if(var_49_bool == 0) goto Label_231; // 0xe3 JumpB
	lshStopAnimation(); // 0xe4 Func
	goto Label_233; // 0xe6 Jump
	
Label_233:
	return 0; // 0xe9 Return
	
Label_231:
	StopAnimation(); // 0xe7 Func
	
Label_235:
	return 0; // 0xeb Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	var_21_int = 1; // 0x1d3 PushI
	if(var_21_int == 0) goto Label_750; // 0x1d4 JumpB
	func_1257(); // 0x1d6 NEW_2
	var_23_int = 19285; // 0x1d8 PushI
	var_24_bool = var_20_int == var_23_int; // 0x1d9 Eq
	if(var_24_bool == 0) goto Label_485; // 0x1da JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x1db PushV
	var_25_object = var_1_object; // 0x1dc MovT
	var_26_object = var_0_bool; // 0x1dd MovT
	func_1325(); // 0x1de NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x1e0 PushV
	var_42_object = var_1_object; // 0x1e1 MovT
	var_43_object = var_0_bool; // 0x1e2 MovT
	func_1346(); // 0x1e3 NEW_2
	
Label_485:
	var_46_int = 19288; // 0x1e5 PushI
	var_47_bool = var_20_int == var_46_int; // 0x1e6 Eq
	if(var_47_bool == 0) goto Label_493; // 0x1e7 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x1e8 PushV
	var_48_object = var_1_object; // 0x1e9 MovT
	var_49_object = var_0_bool; // 0x1ea MovT
	func_1352(); // 0x1eb NEW_2
	
Label_493:
	var_51_int = 36243; // 0x1ed PushI
	var_52_bool = var_20_int == var_51_int; // 0x1ee Eq
	if(var_52_bool == 0) goto Label_501; // 0x1ef JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x1f0 PushV
	var_53_object = var_1_object; // 0x1f1 MovT
	var_54_object = var_0_bool; // 0x1f2 MovT
	func_1340(); // 0x1f3 NEW_2
	
Label_501:
	var_57_int = 19277; // 0x1f5 PushI
	var_58_bool = var_19_bool == var_57_int; // 0x1f6 Eq
	if(var_58_bool == 0) goto Label_600; // 0x1f7 JumpB
	var_59_bool = 0; // 0x1f8 PushV
	var_59_bool = 0; // 0x1f9 MovB
	var_60_bool = 0; var_61_object = Obj(); // 0x1fa PushV
	var_61_object = var_1_object; // 0x1fb MovT
	func_1379(var_60_bool, var_61_object); // 0x1fc NEW_2
	var_69_bool = var_60_bool == 0; // 0x1fe Not
	if(var_69_bool == 0) goto Label_519; // 0x1ff JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x200 PushV
	var_71_object = var_1_object; // 0x201 MovT
	func_1369(var_70_bool, var_71_object); // 0x202 NEW_2
	var_82_bool = var_70_bool == 0; // 0x204 Not
	if(var_82_bool == 0) goto Label_519; // 0x205 JumpB
	var_59_bool = 1; // 0x206 MovB
	
Label_519:
	if(var_59_bool == 0) goto Label_540; // 0x207 JumpB
	var_83_string = ""; // 0x208 PushV
	var_83_string = "Neutral"; // 0x209 MovS
	func_444(var_20_int, var_83_string); // 0x20a NEW_2
	var_100_int = 518164; // 0x20c PushI
	SetMessage(var_100_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_101_int = 530150; // 0x211 PushI
	var_102_int = 31544; // 0x212 PushI
	var_103_int = 31543; // 0x213 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x214 TObjFunc
	var_104_int = 530158; // 0x216 PushI
	var_105_int = -1; // 0x217 PushI
	var_106_int = 31551; // 0x218 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_107_bool = 0; // 0x21c PushV
	var_107_bool = 0; // 0x21d MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x21e PushV
	var_109_object = var_1_object; // 0x21f MovT
	func_1379(var_108_bool, var_109_object); // 0x220 NEW_2
	if(var_108_bool == 0) goto Label_554; // 0x222 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x223 PushV
	var_111_object = var_1_object; // 0x224 MovT
	func_1369(var_110_bool, var_111_object); // 0x225 NEW_2
	var_112_bool = var_110_bool == 0; // 0x227 Not
	if(var_112_bool == 0) goto Label_554; // 0x228 JumpB
	var_107_bool = 1; // 0x229 MovB
	
Label_554:
	if(var_107_bool == 0) goto Label_570; // 0x22a JumpB
	var_113_string = ""; // 0x22b PushV
	var_113_string = "Neutral"; // 0x22c MovS
	func_444(var_20_int, var_113_string); // 0x22d NEW_2
	var_114_int = 518169; // 0x22f PushI
	SetMessage(var_114_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_115_int = 518170; // 0x234 PushI
	var_116_int = 19284; // 0x235 PushI
	var_117_int = 19283; // 0x236 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_118_string = ""; // 0x23a PushV
	var_118_string = "Neutral"; // 0x23b MovS
	func_444(var_20_int, var_118_string); // 0x23c NEW_2
	var_119_int = 518174; // 0x23e PushI
	SetMessage(var_119_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_120_int = 518175; // 0x243 PushI
	var_121_int = -1; // 0x244 PushI
	var_122_int = 19288; // 0x245 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x246 TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0x248 PushV
	var_124_object = var_1_object; // 0x249 MovT
	func_1357(var_124_object); // 0x24a NEW_2
	if(var_123_bool == 0) goto Label_594; // 0x24c JumpB
	var_131_int = 534605; // 0x24d PushI
	var_132_int = 36244; // 0x24e PushI
	var_133_int = 36243; // 0x24f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x250 TObjFunc
	
Label_594:
	var_134_int = 518179; // 0x252 PushI
	var_135_int = -1; // 0x253 PushI
	var_136_int = 19292; // 0x254 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x255 TObjFunc
	return 0; // 0x257 Return
	
Label_600:
	var_137_int = 36244; // 0x258 PushI
	var_138_bool = var_19_bool == var_137_int; // 0x259 Eq
	if(var_138_bool == 0) goto Label_623; // 0x25a JumpB
	var_139_string = ""; // 0x25b PushV
	var_139_string = "Neutral"; // 0x25c MovS
	func_444(var_20_int, var_139_string); // 0x25d NEW_2
	var_140_int = 534606; // 0x25f PushI
	SetMessage(var_140_int); // 0x260 TObjFunc
	ClearReplies(); // 0x262 TObjFunc
	var_141_int = 534607; // 0x264 PushI
	var_142_int = 36246; // 0x265 PushI
	var_143_int = 36245; // 0x266 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x267 TObjFunc
	var_144_int = 534614; // 0x269 PushI
	var_145_int = -1; // 0x26a PushI
	var_146_int = 36252; // 0x26b PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x26c TObjFunc
	return 0; // 0x26e Return
	
Label_623:
	var_147_int = 36246; // 0x26f PushI
	var_148_bool = var_19_bool == var_147_int; // 0x270 Eq
	if(var_148_bool == 0) goto Label_646; // 0x271 JumpB
	var_149_string = ""; // 0x272 PushV
	var_149_string = "Neutral"; // 0x273 MovS
	func_444(var_20_int, var_149_string); // 0x274 NEW_2
	var_150_int = 534608; // 0x276 PushI
	SetMessage(var_150_int); // 0x277 TObjFunc
	ClearReplies(); // 0x279 TObjFunc
	var_151_int = 534609; // 0x27b PushI
	var_152_int = -1; // 0x27c PushI
	var_153_int = 36247; // 0x27d PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x27e TObjFunc
	var_154_int = 534610; // 0x280 PushI
	var_155_int = 36249; // 0x281 PushI
	var_156_int = 36248; // 0x282 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x283 TObjFunc
	return 0; // 0x285 Return
	
Label_646:
	var_157_int = 36249; // 0x286 PushI
	var_158_bool = var_19_bool == var_157_int; // 0x287 Eq
	if(var_158_bool == 0) goto Label_669; // 0x288 JumpB
	var_159_string = ""; // 0x289 PushV
	var_159_string = "Neutral"; // 0x28a MovS
	func_444(var_20_int, var_159_string); // 0x28b NEW_2
	var_160_int = 534611; // 0x28d PushI
	SetMessage(var_160_int); // 0x28e TObjFunc
	ClearReplies(); // 0x290 TObjFunc
	var_161_int = 534612; // 0x292 PushI
	var_162_int = -1; // 0x293 PushI
	var_163_int = 36250; // 0x294 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x295 TObjFunc
	var_164_int = 534613; // 0x297 PushI
	var_165_int = -1; // 0x298 PushI
	var_166_int = 36251; // 0x299 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x29a TObjFunc
	return 0; // 0x29c Return
	
Label_669:
	var_167_int = 19284; // 0x29d PushI
	var_168_bool = var_19_bool == var_167_int; // 0x29e Eq
	if(var_168_bool == 0) goto Label_692; // 0x29f JumpB
	var_169_string = ""; // 0x2a0 PushV
	var_169_string = "Neutral"; // 0x2a1 MovS
	func_444(var_20_int, var_169_string); // 0x2a2 NEW_2
	var_170_int = 518171; // 0x2a4 PushI
	SetMessage(var_170_int); // 0x2a5 TObjFunc
	ClearReplies(); // 0x2a7 TObjFunc
	var_171_int = 518172; // 0x2a9 PushI
	var_172_int = -1; // 0x2aa PushI
	var_173_int = 19285; // 0x2ab PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x2ac TObjFunc
	var_174_int = 518173; // 0x2ae PushI
	var_175_int = -1; // 0x2af PushI
	var_176_int = 19286; // 0x2b0 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x2b1 TObjFunc
	return 0; // 0x2b3 Return
	
Label_692:
	var_177_int = 31544; // 0x2b4 PushI
	var_178_bool = var_19_bool == var_177_int; // 0x2b5 Eq
	if(var_178_bool == 0) goto Label_715; // 0x2b6 JumpB
	var_179_string = ""; // 0x2b7 PushV
	var_179_string = "Neutral"; // 0x2b8 MovS
	func_444(var_20_int, var_179_string); // 0x2b9 NEW_2
	var_180_int = 530151; // 0x2bb PushI
	SetMessage(var_180_int); // 0x2bc TObjFunc
	ClearReplies(); // 0x2be TObjFunc
	var_181_int = 530152; // 0x2c0 PushI
	var_182_int = 31546; // 0x2c1 PushI
	var_183_int = 31545; // 0x2c2 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x2c3 TObjFunc
	var_184_int = 530156; // 0x2c5 PushI
	var_185_int = -1; // 0x2c6 PushI
	var_186_int = 31549; // 0x2c7 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x2c8 TObjFunc
	return 0; // 0x2ca Return
	
Label_715:
	var_187_int = 31546; // 0x2cb PushI
	var_188_bool = var_19_bool == var_187_int; // 0x2cc Eq
	if(var_188_bool == 0) goto Label_738; // 0x2cd JumpB
	var_189_string = ""; // 0x2ce PushV
	var_189_string = "Neutral"; // 0x2cf MovS
	func_444(var_20_int, var_189_string); // 0x2d0 NEW_2
	var_190_int = 530153; // 0x2d2 PushI
	SetMessage(var_190_int); // 0x2d3 TObjFunc
	ClearReplies(); // 0x2d5 TObjFunc
	var_191_int = 530154; // 0x2d7 PushI
	var_192_int = -1; // 0x2d8 PushI
	var_193_int = 31547; // 0x2d9 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x2da TObjFunc
	var_194_int = 530155; // 0x2dc PushI
	var_195_int = -1; // 0x2dd PushI
	var_196_int = 31548; // 0x2de PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x2df TObjFunc
	return 0; // 0x2e1 Return
	
Label_738:
	var_3_object = 1; // 0x2e2 TMovB
	var_197_bool = 0; // 0x2e3 PushV
	func_1479(var_197_bool); // 0x2e4 NEW_2
	if(var_197_bool == 0) goto Label_746; // 0x2e6 JumpB
	lshStopAnimation(); // 0x2e7 Func
	goto Label_748; // 0x2e9 Jump
	
Label_748:
	return 0; // 0x2ec Return
	
Label_746:
	StopAnimation(); // 0x2ea Func
	
Label_750:
	return 0; // 0x2ee Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x2fc PushV
	func_966(var_20_int, var_21_int); // 0x2fe NEW_2
	var_25_int = 0; // 0x300 PushV
	func_1465(var_25_int); // 0x301 NEW_2
	var_29_int = 1; // 0x303 PushI
	var_30_bool = var_25_int == var_29_int; // 0x304 Eq
	if(var_30_bool == 0) goto Label_782; // 0x305 JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x306 PushV
	var_32_object = var_19_object; // 0x307 Mov
	TaskCall(3); // 0x308 TaskCall
	func_236(var_33_object, var_31_int, var_32_object); // 0x309 NEW_2
	TaskReturn(); // 0x30a TaskReturn
	var_21_int = var_33_object; // 0x30b Mov
	goto Label_797; // 0x30d Jump
	
Label_797:
	var_218_int = 1000; // 0x31d PushI
	var_219_bool = var_218_int == var_21_int; // 0x31e Eq
	if(var_219_bool == 0) goto Label_818; // 0x31f JumpB
	var_220_bool = 0; var_221_object = Obj(); var_222_float = 0; // 0x320 PushV
	var_221_object = var_19_object; // 0x321 Mov
	var_222_float = 110.0; // 0x322 MovF
	func_1164(var_221_object, var_222_float); // 0x323 NEW_2
	var_249_bool = var_220_bool == 0; // 0x325 Not
	if(var_249_bool == 0) goto Label_808; // 0x326 JumpB
	return 2; // 0x327 Return
	
Label_808:
	var_250_object = Obj(); // 0x328 PushV
	var_250_object = var_19_object; // 0x329 Mov
	TaskCall(0); // 0x32a TaskCall
	func_0(var_250_object); // 0x32b NEW_2
	TaskReturn(); // 0x32c TaskReturn
	var_257_object = Obj(); // 0x32e PushV
	var_257_object = var_19_object; // 0x32f Mov
	func_1211(); // 0x330 NEW_2
	
Label_818:
	return 2; // 0x332 Return
	
Label_782:
	var_258_int = 0; // 0x30e PushV
	func_1465(var_258_int); // 0x30f NEW_2
	var_259_int = 2; // 0x311 PushI
	var_260_bool = var_258_int == var_259_int; // 0x312 Eq
	if(var_260_bool == 0) goto Label_796; // 0x313 JumpB
	var_261_int = 0; var_262_object = Obj(); // 0x314 PushV
	var_262_object = var_19_object; // 0x315 Mov
	TaskCall(1); // 0x316 TaskCall
	func_40(var_263_object, var_261_int, var_262_object); // 0x317 NEW_2
	TaskReturn(); // 0x318 TaskReturn
	var_21_int = var_263_object; // 0x319 Mov
	goto Label_797; // 0x31b Jump
	
Label_796:
	return 2; // 0x31c Return
}


task_5_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x333 PushV
	func_1292(var_19_int); // 0x334 NEW_2
	var_25_bool = var_7_object != var_19_int; // 0x336 Neq
	if(var_25_bool == 0) goto Label_831; // 0x337 JumpB
	func_1402(); // 0x339 NEW_2
	var_48_int = 0; // 0x33b PushV
	func_1292(var_48_int); // 0x33c NEW_2
	var_7_object = var_48_int; // 0x33d TMov
	
Label_831:
	return 0; // 0x33f Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_string)
{
	var_20_string = "cleanup"; // 0x367 PushS
	var_21_bool = var_19_string == var_20_string; // 0x368 Eq
	if(var_21_bool == 0) goto Label_877; // 0x369 JumpB
	func_850(var_19_string); // 0x36b NEW_2
	
Label_877:
	return 0; // 0x36d Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_object = var_6_object; // 0x36e PushT
	if(var_19_object == 0) goto Label_883; // 0x36f JumpB
	func_966(var_17_bool, var_18_int); // 0x371 NEW_2
	
Label_883:
	var_23_bool = 0; // 0x373 PushV
	var_23_bool = 0; // 0x374 MovB
	var_24_bool = var_5_bool; // 0x375 PushT
	if(var_24_bool == 0) goto Label_892; // 0x376 JumpB
	var_25_bool = 0; // 0x377 PushV
	func_899(var_25_bool); // 0x378 NEW_2
	if(var_25_bool == 0) goto Label_892; // 0x37a JumpB
	var_23_bool = 1; // 0x37b MovB
	
Label_892:
	if(var_23_bool == 0) goto Label_898; // 0x37c JumpB
	var_26_object = Obj(); // 0x37d PushV
	func_1264(var_26_object); // 0x37e NEW_2
	RemoveActor(var_26_object); // 0x380 Func
	
Label_898:
	return 0; // 0x382 Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_int)
{
	var_20_int = 10; // 0x3b0 PushI
	var_21_bool = var_19_int == var_20_int; // 0x3b1 Eq
	if(var_21_bool == 0) goto Label_965; // 0x3b2 JumpB
	var_22_bool = 0; // 0x3b3 PushV
	func_928(var_17_bool, var_18_int, var_19_int, var_22_bool); // 0x3b4 NEW_2
	if(var_22_bool == 0) goto Label_959; // 0x3b6 JumpB
	var_35_bool = var_2_object == 0; // 0x3b7 Not
	if(var_35_bool == 0) goto Label_958; // 0x3b8 JumpB
	var_36_object = Obj(); // 0x3b9 PushV
	var_36_object = var_4_string; // 0x3ba MovT
	func_1246(var_36_object); // 0x3bb NEW_2
	var_2_object = 1; // 0x3bd TMovB
	
Label_958:
	goto Label_965; // 0x3be Jump
	
Label_965:
	return 0; // 0x3c5 Return
	
Label_959:
	var_43_object = var_2_object; // 0x3bf PushT
	if(var_43_object == 0) goto Label_965; // 0x3c0 JumpB
	var_44_string = "head"; // 0x3c1 PushS
	UnlookAsync(var_44_string); // 0x3c2 Func
	var_2_object = 0; // 0x3c4 TMovB
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x2ef PushV
	func_1292(var_19_int); // 0x2f0 NEW_2
	var_7_object = var_19_int; // 0x2f1 TMov
	func_1402(); // 0x2f4 NEW_2
	var_47_float = 0; var_48_float = 0; // 0x2f6 PushV
	var_47_float = 300; // 0x2f7 MovI
	var_48_float = 100; // 0x2f8 MovI
	func_832(var_18_int, var_47_float, var_48_float); // 0x2f9 NEW_2
	return 0; // 0x2fb Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_252_bool = 0; // 0x4 PushV
	func_1479(var_252_bool); // 0x5 NEW_2
	if(var_252_bool == 0) goto Label_15; // 0x7 JumpB
	var_253_string = ""; // 0x8 PushV
	var_253_string = "Neutral"; // 0x9 MovS
	func_1215(var_253_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_254_bool = var_0_bool; // 0x15 PushT
	if(var_254_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_255_string = "all"; // 0x11 PushS
	var_256_string = "idle"; // 0x12 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x13 Func
}


func_1280(var_198_int, var_199_string)
{
	var_200_int = 0; var_201_int = 0; // 0x500 PushV
	GetVariable(var_199_string, var_201_int); // 0x501 Func
	var_198_int = var_201_int; // 0x503 Mov
	return 2; // 0x504 Return
}


func_899(var_25_bool)
{
	var_25_bool = 1; // 0x383 MovB
	return 0; // 0x384 Return
}


func_1285(var_112_bool, var_114_string)
{
	var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; // 0x505 PushV
	GetInvItemByName(var_117_int, var_114_string); // 0x506 Func
	HasItem(var_117_int, var_118_bool); // 0x508 ObjFunc
	var_112_bool = var_118_bool; // 0x50a Mov
	return 4; // 0x50b Return
}


func_901(var_0_bool, var_1_object, var_2_object, var_3_object, var_52_bool, var_56_float, var_57_float)
{
	var_58_bool = 0; // 0x386 PushV
	func_1074(var_58_bool); // 0x387 NEW_2
	var_61_bool = var_58_bool == 0; // 0x389 Not
	if(var_61_bool == 0) goto Label_908; // 0x38a JumpB
	return 0; // 0x38b Return
	
Label_908:
	var_62_string = "player"; // 0x38c PushS
	FindActor(var_52_bool, var_62_string); // 0x38d Func
	var_2_object = 0; // 0x38f TMovB
	var_3_object = 0; // 0x390 TMovB
	var_0_bool = var_56_float; // 0x391 TMov
	var_1_object = var_57_float; // 0x392 TMov
	var_63_int = 10; // 0x393 PushI
	var_64_float = 1.0; // 0x394 PushF
	SetTimer(var_63_int, var_64_float); // 0x395 Func
	func_980(); // 0x398 NEW_2
	var_116_bool = var_3_object == 0; // 0x39a Not
	if(var_116_bool == 0) goto Label_927; // 0x39b JumpB
	var_117_int = 10; // 0x39c PushI
	KillTimer(var_117_int); // 0x39d Func
	
Label_927:
	return 0; // 0x39f Return
}


func_1292(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0x50c PushV
	GetGameTime(var_21_float); // 0x50d Func
	var_22_int = 1; // 0x50f PushI
	var_23_int = 0; // 0x510 PushV
	var_24_int = 24; // 0x511 PushI
	var_23_int = var_21_float / var_21_float; // 0x512 Div2
	var_19_int = var_22_int + var_23_int; // 0x513 Add2
	return 2; // 0x514 Return
}


func_1164(var_220_bool, var_222_float)
{
	var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_bool = 0; // 0x48c PushV
	GetPosition(var_232_cvector); // 0x48d ObjFunc
	GetEyesHeight(var_231_float); // 0x48f ObjFunc
	var_239_float = GetByIndex(var_232_cvector, 1); // 0x491 PushE
	var_239_float = var_239_float + var_231_float; // 0x492 Add2
	SetByIndex(var_232_cvector, 1) = var_239_float; // 0x493 PopE
	GetPosition(var_233_cvector); // 0x494 Func
	GetEyesHeight(var_231_float); // 0x496 Func
	var_240_float = GetByIndex(var_233_cvector, 1); // 0x498 PushE
	var_240_float = var_240_float + var_231_float; // 0x499 Add2
	SetByIndex(var_233_cvector, 1) = var_240_float; // 0x49a PopE
	var_234_cvector = var_232_cvector - var_233_cvector; // 0x49b Sub2
	var_241_float = GetByIndex(var_234_cvector, 1); // 0x49c PushE
	var_241_float = 0; // 0x49d MovI
	SetByIndex(var_234_cvector, 1) = var_241_float; // 0x49e PopE
	var_242_int = var_234_cvector | var_234_cvector; // 0x49f Or
	var_243_float = sqrt(var_242_int); // 0x4a0 Sqrt
	var_234_cvector = var_234_cvector / var_234_cvector; // 0x4a1 Div2
	var_235_cvector = -var_234_cvector; // 0x4a2 Neg2
	var_244_float = var_234_cvector * var_222_float; // 0x4a3 Mult
	var_245_cvector = CVector(0.0, 10.0, 0.0); // 0x4a4 PushVec
	var_236_cvector = var_244_float - var_245_cvector; // 0x4a5 Sub2
	var_237_cvector = var_233_cvector + var_236_cvector; // 0x4a6 Add2
	IsOverrideActive(var_238_bool); // 0x4a7 Func
	var_246_bool = var_238_bool; // 0x4a9 Push
	if(var_246_bool == 0) goto Label_1197; // 0x4aa JumpB
	var_220_bool = 0; // 0x4ab MovB
	return 16; // 0x4ac Return
	
Label_1197:
	StopWorld(); // 0x4ad Func
	CameraTransit(var_237_cvector, var_235_cvector); // 0x4af Func
	var_247_float = GetByIndex(var_236_cvector, 0); // 0x4b1 PushE
	var_248_float = GetByIndex(var_236_cvector, 2); // 0x4b2 PushE
	Rotate(var_247_float, var_248_float); // 0x4b3 Func
	CameraWaitForPlayFinish(); // 0x4b5 Func
	ResumeWorld(); // 0x4b7 Func
	var_220_bool = 1; // 0x4b9 MovB
	return 16; // 0x4ba Return
}


func_1301(var_87_string, var_88_int)
{
	var_89_string = ""; var_90_string = ""; // 0x515 PushV
	var_90_string = "idle"; // 0x516 MovS
	var_91_int = var_88_int; // 0x517 Push
	if(var_91_int == 0) goto Label_1306; // 0x518 JumpB
	var_90_string = var_90_string + var_88_int; // 0x519 Add2
	
Label_1306:
	var_87_string = var_90_string; // 0x51a Mov
	return 2; // 0x51b Return
}


func_1308(var_81_int)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0; // 0x51c PushV
	var_84_int = 0; // 0x51d MovI
	
Label_1310:
	var_86_string = "all"; // 0x51e PushS
	var_87_string = ""; var_88_int = 0; // 0x51f PushV
	var_88_int = var_84_int; // 0x520 Mov
	func_1301(var_87_string, var_88_int); // 0x521 NEW_2
	HasAnimation(var_85_bool, var_86_string, var_87_string); // 0x523 Func
	var_92_bool = var_85_bool == 0; // 0x525 Not
	if(var_92_bool == 0) goto Label_1320; // 0x526 JumpB
	goto Label_1323; // 0x527 Jump
	
Label_1323:
	var_81_int = var_84_int; // 0x52b Mov
	return 4; // 0x52c Return
	
Label_1320:
	var_93_int = 1; // 0x528 PushI
	var_84_int = var_84_int + var_93_int; // 0x529 Add2
	goto Label_1310; // 0x52a Jump
}


func_928(var_0_bool, var_1_object, var_4_string, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x3a0 PushV
	var_25_bool = var_4_string == 0; // 0x3a1 NullEq
	if(var_25_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_22_bool = 0; // 0x3a3 MovB
	return 2; // 0x3a4 Return
	
Label_933:
	var_26_float = 0; var_27_object = Obj(); // 0x3a5 PushV
	var_27_object = var_4_string; // 0x3a6 MovT
	func_1066(var_27_object); // 0x3a7 NEW_2
	var_24_float = sqrt(var_26_float); // 0x3a9 Sqrt2
	var_34_object = var_2_object; // 0x3aa PushT
	if(var_34_object == 0) goto Label_941; // 0x3ab JumpB
	var_24_float = var_24_float - var_1_object; // 0x3ac Sub2
	
Label_941:
	var_22_bool = var_24_float < var_0_bool; // 0x3ad LT2
	return 2; // 0x3ae Return
}


func_1059(var_106_bool)
{
	var_106_bool = 1; // 0x423 MovB
	return 0; // 0x424 Return
}


func_1443(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0; // 0x5a3 PushV
	GetInvItemByName(var_35_int, var_33_string); // 0x5a4 Func
	var_32_int = var_35_int; // 0x5a6 Mov
	return 2; // 0x5a7 Return
}


func_1061()
{
	StopAnimation(); // 0x425 Func
	StopGroup0(); // 0x427 Func
	return 0; // 0x429 Return
}


func_1448(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x5a8 PushV
	var_96_string = "branch"; // 0x5a9 PushS
	GetVariable(var_96_string, var_95_int); // 0x5aa Func
	var_97_int = 0; // 0x5ac PushI
	var_98_bool = var_95_int == var_97_int; // 0x5ad Eq
	if(var_98_bool == 0) goto Label_1458; // 0x5ae JumpB
	var_93_int = 1; // 0x5af MovI
	return 2; // 0x5b0 Return
	
Label_1458:
	var_99_int = 1; // 0x5b2 PushI
	var_100_bool = var_95_int == var_99_int; // 0x5b3 Eq
	if(var_100_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_93_int = 2; // 0x5b5 MovI
	return 2; // 0x5b6 Return
	
Label_1463:
	var_93_int = 3; // 0x5b7 MovI
	return 2; // 0x5b8 Return
}


func_40(var_0_bool, var_261_int, var_262_object)
{
	var_264_object = Obj(); var_265_bool = 0; var_266_int = 0; var_267_bool = 0; var_268_object = Obj(); var_269_bool = 0; var_270_int = 0; var_271_bool = 0; // 0x28 PushV
	var_0_bool = var_262_object; // 0x29 TMov
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; // 0x2a PushV
	var_273_object = var_262_object; // 0x2b Mov
	var_274_float = 110.0; // 0x2c MovF
	func_1079(var_273_object, var_274_float); // 0x2d NEW_2
	var_275_bool = var_272_bool == 0; // 0x2f Not
	if(var_275_bool == 0) goto Label_51; // 0x30 JumpB
	var_261_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_268_object); // 0x33 Func
	var_276_int = 0; // 0x35 PushV
	func_1473(var_276_int); // 0x36 NEW_2
	SetNPCName(var_276_int); // 0x38 ObjFunc
	var_277_int = 0; // 0x3a PushV
	func_1471(var_277_int); // 0x3b NEW_2
	SetNPCDescription(var_277_int); // 0x3d ObjFunc
	var_278_string = ""; // 0x3f PushV
	func_1475(var_278_string); // 0x40 NEW_2
	SetPhoto(var_278_string); // 0x42 ObjFunc
	var_279_string = ""; // 0x44 PushV
	func_1477(var_279_string); // 0x45 NEW_2
	SetPhoto2(var_279_string); // 0x47 ObjFunc
	var_280_int = 0; // 0x49 PushV
	func_1448(var_280_int); // 0x4a NEW_2
	SetPlayerName(var_280_int); // 0x4c ObjFunc
	var_270_int = -1; // 0x4e MovI
	IsOverrideActive(var_269_bool); // 0x4f Func
	var_281_bool = var_269_bool; // 0x51 Push
	if(var_281_bool == 0) goto Label_85; // 0x52 JumpB
	var_261_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_268_object); // 0x55 Func
	var_282_object = Obj(); var_283_object = Obj(); // 0x57 PushV
	var_282_object = var_262_object; // 0x58 Mov
	var_283_object = var_268_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_284_object, var_285_object, var_286_string, var_287_bool, var_282_object, var_283_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_271_bool); // 0x5e ObjFunc
	
Label_96:
	var_312_bool = var_271_bool == 0; // 0x60 Not
	if(var_312_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_271_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_313_object = Obj(); // 0x67 PushV
	var_313_object = var_262_object; // 0x68 Mov
	func_1147(); // 0x69 NEW_2
	StopDialog(var_268_object); // 0x6b Func
	GetReturnValue(var_270_int); // 0x6d ObjFunc
	var_261_int = var_270_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_1066(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x42a PushV
	GetPosition(var_31_cvector); // 0x42b Func
	GetPosition(var_32_cvector); // 0x42d ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x42f Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x430 Or2
	return 6; // 0x431 Return
}


func_172(var_2_object, var_289_string)
{
	var_290_bool = 0; // 0xad PushV
	func_1479(var_290_bool); // 0xae NEW_2
	var_291_bool = var_290_bool == 0; // 0xb0 Not
	if(var_291_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_292_bool = var_289_string == var_2_object; // 0xb3 Eq
	if(var_292_bool == 0) goto Label_182; // 0xb4 JumpB
	return 0; // 0xb5 Return
	
Label_182:
	var_293_string = ""; var_294_bool = 0; // 0xb6 PushV
	var_293_string = var_289_string; // 0xb7 Mov
	var_295_string = ""; // 0xb8 PushS
	var_296_bool = var_289_string == var_295_string; // 0xb9 Eq
	if(var_296_bool == 0) goto Label_189; // 0xba JumpB
	var_294_bool = 0; // 0xbb MovB
	goto Label_190; // 0xbc Jump
	
Label_190:
	func_1231(var_293_string, var_294_bool); // 0xbe NEW_2
	var_2_object = var_289_string; // 0xc0 TMov
	return 0; // 0xc1 Return
	
Label_189:
	var_294_bool = 1; // 0xbd MovB
}


func_1325()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; // 0x52d PushV
	var_31_int = 0; // 0x52e PushV
	func_1292(var_31_int); // 0x52f NEW_2
	var_29_int = var_31_int; // 0x530 Mov
	var_37_string = "Gatherer2_"; // 0x532 PushS
	var_38_int = var_37_string + var_29_int; // 0x533 Add
	var_39_int = 1; // 0x534 PushI
	SetVariable(var_38_int, var_39_int); // 0x535 Func
	var_40_string = "blood"; // 0x537 PushS
	var_41_int = 1; // 0x538 PushI
	RemoveItemByType(var_30_int, var_40_string, var_41_int); // 0x539 ObjFunc
	return 4; // 0x53b Return
}


func_1074(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x432 PushV
	IsLoaded(var_60_bool); // 0x433 Func
	var_58_bool = var_60_bool; // 0x435 Mov
	return 2; // 0x436 Return
}


func_310(var_0_bool, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_bool = var_103_object; // 0x137 TMov
	var_1_object = var_102_object; // 0x138 TMov
	var_3_object = 0; // 0x139 TMovB
	var_108_int = 1; // 0x13a PushI
	if(var_108_int == 0) goto Label_414; // 0x13b JumpB
	var_109_bool = 0; // 0x13c PushV
	var_109_bool = 0; // 0x13d MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x13e PushV
	var_111_object = var_1_object; // 0x13f MovT
	func_1379(var_110_bool, var_111_object); // 0x140 NEW_2
	var_119_bool = var_110_bool == 0; // 0x142 Not
	if(var_119_bool == 0) goto Label_331; // 0x143 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x144 PushV
	var_121_object = var_1_object; // 0x145 MovT
	func_1369(var_120_bool, var_121_object); // 0x146 NEW_2
	var_137_bool = var_120_bool == 0; // 0x148 Not
	if(var_137_bool == 0) goto Label_331; // 0x149 JumpB
	var_109_bool = 1; // 0x14a MovB
	
Label_331:
	if(var_109_bool == 0) goto Label_352; // 0x14b JumpB
	var_138_string = ""; // 0x14c PushV
	var_138_string = "Neutral"; // 0x14d MovS
	func_444(var_103_object, var_138_string); // 0x14e NEW_2
	var_155_int = 518164; // 0x150 PushI
	SetMessage(var_155_int); // 0x151 TObjFunc
	ClearReplies(); // 0x153 TObjFunc
	var_156_int = 530150; // 0x155 PushI
	var_157_int = 31544; // 0x156 PushI
	var_158_int = 31543; // 0x157 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x158 TObjFunc
	var_159_int = 530158; // 0x15a PushI
	var_160_int = -1; // 0x15b PushI
	var_161_int = 31551; // 0x15c PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x15d TObjFunc
	goto Label_414; // 0x15f Jump
	
Label_414:
	var_162_bool = 0; // 0x19e PushV
	func_1479(var_162_bool); // 0x19f NEW_2
	if(var_162_bool == 0) goto Label_429; // 0x1a1 JumpB
	
Label_418:
	lshWaitForAnimEnd(); // 0x1a2 Func
	var_163_object = var_3_object; // 0x1a4 PushT
	if(var_163_object == 0) goto Label_423; // 0x1a5 JumpB
	goto Label_428; // 0x1a6 Jump
	
Label_428:
	goto Label_443; // 0x1ac Jump
	
Label_443:
	return 0; // 0x1bb Return
	
Label_423:
	var_164_string = ""; // 0x1a7 PushV
	var_164_string = var_2_object; // 0x1a8 MovT
	func_1215(var_164_string); // 0x1a9 NEW_2
	goto Label_418; // 0x1ab Jump
	
Label_429:
	var_175_string = "all"; // 0x1ad PushS
	var_176_string = "idle"; // 0x1ae PushS
	PlayAnimation(var_175_string, var_176_string); // 0x1af Func
	
Label_433:
	WaitForAnimEnd(); // 0x1b1 Func
	var_177_object = var_3_object; // 0x1b3 PushT
	if(var_177_object == 0) goto Label_438; // 0x1b4 JumpB
	goto Label_443; // 0x1b5 Jump
	
Label_438:
	var_178_string = "all"; // 0x1b6 PushS
	var_179_string = "idle"; // 0x1b7 PushS
	PlayAnimation(var_178_string, var_179_string); // 0x1b8 Func
	goto Label_433; // 0x1ba Jump
	
Label_352:
	var_180_bool = 0; // 0x160 PushV
	var_180_bool = 0; // 0x161 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x162 PushV
	var_182_object = var_1_object; // 0x163 MovT
	func_1379(var_181_bool, var_182_object); // 0x164 NEW_2
	if(var_181_bool == 0) goto Label_366; // 0x166 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x167 PushV
	var_184_object = var_1_object; // 0x168 MovT
	func_1369(var_183_bool, var_184_object); // 0x169 NEW_2
	var_185_bool = var_183_bool == 0; // 0x16b Not
	if(var_185_bool == 0) goto Label_366; // 0x16c JumpB
	var_180_bool = 1; // 0x16d MovB
	
Label_366:
	if(var_180_bool == 0) goto Label_382; // 0x16e JumpB
	var_186_string = ""; // 0x16f PushV
	var_186_string = "Neutral"; // 0x170 MovS
	func_444(var_103_object, var_186_string); // 0x171 NEW_2
	var_187_int = 518169; // 0x173 PushI
	SetMessage(var_187_int); // 0x174 TObjFunc
	ClearReplies(); // 0x176 TObjFunc
	var_188_int = 518170; // 0x178 PushI
	var_189_int = 19284; // 0x179 PushI
	var_190_int = 19283; // 0x17a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x17b TObjFunc
	goto Label_414; // 0x17d Jump
	
Label_382:
	var_191_string = ""; // 0x17e PushV
	var_191_string = "Neutral"; // 0x17f MovS
	func_444(var_103_object, var_191_string); // 0x180 NEW_2
	var_192_int = 518174; // 0x182 PushI
	SetMessage(var_192_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_193_int = 518175; // 0x187 PushI
	var_194_int = -1; // 0x188 PushI
	var_195_int = 19288; // 0x189 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x18a TObjFunc
	var_196_bool = 0; var_197_object = Obj(); // 0x18c PushV
	var_197_object = var_1_object; // 0x18d MovT
	func_1357(var_197_object); // 0x18e NEW_2
	if(var_196_bool == 0) goto Label_406; // 0x190 JumpB
	var_204_int = 534605; // 0x191 PushI
	var_205_int = 36244; // 0x192 PushI
	var_206_int = 36243; // 0x193 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x194 TObjFunc
	
Label_406:
	var_207_int = 518179; // 0x196 PushI
	var_208_int = -1; // 0x197 PushI
	var_209_int = 19292; // 0x198 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x199 TObjFunc
	goto Label_414; // 0x19b Jump
}


func_1079(var_42_bool, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0; // 0x437 PushV
	GetPosition(var_55_cvector); // 0x438 ObjFunc
	GetEyesHeight(var_54_float); // 0x43a ObjFunc
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x43c PushE
	var_63_float = var_63_float + var_54_float; // 0x43d Add2
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x43e PopE
	GetPosition(var_56_cvector); // 0x43f Func
	GetEyesHeight(var_54_float); // 0x441 Func
	var_64_float = GetByIndex(var_56_cvector, 1); // 0x443 PushE
	var_64_float = var_64_float + var_54_float; // 0x444 Add2
	SetByIndex(var_56_cvector, 1) = var_64_float; // 0x445 PopE
	var_57_cvector = var_55_cvector - var_56_cvector; // 0x446 Sub2
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x447 PushE
	var_65_float = 0; // 0x448 MovI
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x449 PopE
	var_66_int = var_57_cvector | var_57_cvector; // 0x44a Or
	var_67_float = sqrt(var_66_int); // 0x44b Sqrt
	var_57_cvector = var_57_cvector / var_57_cvector; // 0x44c Div2
	var_58_cvector = -var_57_cvector; // 0x44d Neg2
	var_68_float = var_57_cvector * var_44_float; // 0x44e Mult
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x44f PushV
	var_71_cvector = CVector(0.0, 1.0, 0.0); // 0x450 PushVec
	var_70_cvector = var_58_cvector ^ var_71_cvector; // 0x451 Xor2
	func_1270(var_69_cvector, var_70_cvector); // 0x452 NEW_2
	var_77_int = 25; // 0x454 PushI
	var_78_float = var_69_cvector * var_77_int; // 0x455 Mult
	var_79_int = var_68_float + var_78_float; // 0x456 Add
	var_80_cvector = CVector(0.0, 10.0, 0.0); // 0x457 PushVec
	var_59_cvector = var_79_int - var_80_cvector; // 0x458 Sub2
	var_60_cvector = var_56_cvector + var_59_cvector; // 0x459 Add2
	IsOverrideActive(var_61_bool); // 0x45a Func
	var_81_bool = var_61_bool; // 0x45c Push
	if(var_81_bool == 0) goto Label_1120; // 0x45d JumpB
	var_42_bool = 0; // 0x45e MovB
	return 18; // 0x45f Return
	
Label_1120:
	StopWorld(); // 0x460 Func
	CameraTransit(var_60_cvector, var_58_cvector); // 0x462 Func
	var_82_float = GetByIndex(var_59_cvector, 0); // 0x464 PushE
	var_83_float = GetByIndex(var_59_cvector, 2); // 0x465 PushE
	Rotate(var_82_float, var_83_float); // 0x466 Func
	var_84_bool = 0; // 0x468 PushV
	func_1479(var_84_bool); // 0x469 NEW_2
	if(var_84_bool == 0) goto Label_1133; // 0x46b JumpB
	goto Label_1141; // 0x46c Jump
	
Label_1141:
	CameraWaitForPlayFinish(); // 0x475 Func
	ResumeWorld(); // 0x477 Func
	var_42_bool = 1; // 0x479 MovB
	return 18; // 0x47a Return
	
Label_1133:
	var_85_string = "head"; // 0x46d PushS
	HasAnimationTrack(var_62_bool, var_85_string); // 0x46e Func
	var_86_bool = var_62_bool; // 0x470 Push
	if(var_86_bool == 0) goto Label_1141; // 0x471 JumpB
	var_87_string = "head"; // 0x472 PushS
	LookAsyncCamera(var_87_string); // 0x473 Func
}


func_1465(var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0x5b9 PushV
	var_28_string = "branch"; // 0x5ba PushS
	GetVariable(var_28_string, var_27_int); // 0x5bb Func
	var_25_int = var_27_int; // 0x5bd Mov
	return 2; // 0x5be Return
}


func_1211()
{
	CameraSwitchToNormal(); // 0x4bc Func
	return 0; // 0x4be Return
}


func_444(var_2_object, var_138_string)
{
	var_139_bool = 0; // 0x1bd PushV
	func_1479(var_139_bool); // 0x1be NEW_2
	var_140_bool = var_139_bool == 0; // 0x1c0 Not
	if(var_140_bool == 0) goto Label_451; // 0x1c1 JumpB
	return 0; // 0x1c2 Return
	
Label_451:
	var_141_bool = var_138_string == var_2_object; // 0x1c3 Eq
	if(var_141_bool == 0) goto Label_454; // 0x1c4 JumpB
	return 0; // 0x1c5 Return
	
Label_454:
	var_142_string = ""; var_143_bool = 0; // 0x1c6 PushV
	var_142_string = var_138_string; // 0x1c7 Mov
	var_144_string = ""; // 0x1c8 PushS
	var_145_bool = var_138_string == var_144_string; // 0x1c9 Eq
	if(var_145_bool == 0) goto Label_461; // 0x1ca JumpB
	var_143_bool = 0; // 0x1cb MovB
	goto Label_462; // 0x1cc Jump
	
Label_462:
	func_1231(var_142_string, var_143_bool); // 0x1ce NEW_2
	var_2_object = var_138_string; // 0x1d0 TMov
	return 0; // 0x1d1 Return
	
Label_461:
	var_143_bool = 1; // 0x1cd MovB
}


func_1340()
{
	var_55_string = "oobSysGatherer2_1"; // 0x53d PushS
	var_56_int = 1; // 0x53e PushI
	SetVariable(var_55_string, var_56_int); // 0x53f Func
	return 0; // 0x541 Return
}


func_1471(var_90_int)
{
	var_90_int = 521048; // 0x5bf MovI
	return 0; // 0x5c0 Return
}


func_1215(var_164_string)
{
	var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_float = 0; var_170_float = 0; // 0x4bf PushV
	lshHasAnimation(var_168_bool, var_164_string); // 0x4c0 Func
	var_171_bool = var_168_bool; // 0x4c2 Push
	if(var_171_bool == 0) goto Label_1226; // 0x4c3 JumpB
	lshGetAnimTimes(var_164_string, var_169_float, var_170_float); // 0x4c4 Func
	var_172_bool = 0; // 0x4c6 PushB
	lshPlayAnimation(var_169_float, var_170_float, var_172_bool); // 0x4c7 Func
	goto Label_1230; // 0x4c9 Jump
	
Label_1230:
	return 6; // 0x4ce Return
	
Label_1226:
	var_173_string = "Can't find lsh animation : "; // 0x4ca PushS
	var_174_int = var_173_string + var_164_string; // 0x4cb Add
	Trace(var_174_int); // 0x4cc Func
}


func_1473(var_89_int)
{
	var_89_int = 521047; // 0x5c1 MovI
	return 0; // 0x5c2 Return
}


func_1346()
{
	var_44_string = "playsound"; // 0x543 PushS
	var_45_string = "giveitem"; // 0x544 PushS
	TriggerWorld(var_44_string, var_45_string); // 0x545 Func
	return 0; // 0x547 Return
}


func_1475(var_91_string)
{
	var_91_string = "ui/NPC_Citizen2.png"; // 0x5c3 MovS
	return 0; // 0x5c4 Return
}


func_832(var_6_object, var_47_float, var_48_float)
{
	var_49_float = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; // 0x340 PushV
	var_6_object = 0; // 0x341 TMovB
	
Label_834:
	var_53_int = 3; // 0x342 PushI
	rand(var_51_float, var_53_int); // 0x343 Func
	var_54_int = 3; // 0x345 PushI
	var_55_int = var_51_float + var_54_int; // 0x346 Add
	Sleep(var_55_int, var_52_bool); // 0x347 Func
	var_6_object = 1; // 0x349 TMovB
	var_56_float = 0; var_57_float = 0; // 0x34a PushV
	var_56_float = var_47_float; // 0x34b Mov
	var_57_float = var_48_float; // 0x34c Mov
	func_901(var_48_float, var_49_float, var_50_bool, var_51_float, var_52_bool, var_56_float, var_57_float); // 0x34d NEW_2
	var_6_object = 0; // 0x34f TMovB
	goto Label_834; // 0x350 Jump
}


func_1477(var_92_string)
{
	var_92_string = "ui/NPC_Citizen2_b.png"; // 0x5c5 MovS
	return 0; // 0x5c6 Return
}


func_966(var_2_object, var_3_object)
{
	func_1061(); // 0x3c7 NEW_2
	var_20_int = 10; // 0x3c9 PushI
	KillTimer(var_20_int); // 0x3ca Func
	var_21_object = var_2_object; // 0x3cc PushT
	if(var_21_object == 0) goto Label_978; // 0x3cd JumpB
	var_22_string = "head"; // 0x3ce PushS
	UnlookAsync(var_22_string); // 0x3cf Func
	var_2_object = 0; // 0x3d1 TMovB
	
Label_978:
	var_3_object = 1; // 0x3d2 TMovB
	return 0; // 0x3d3 Return
}


func_1479(var_84_bool)
{
	var_84_bool = 0; // 0x5c7 MovB
	return 0; // 0x5c8 Return
}


func_1352()
{
	var_50_int = 1000; // 0x549 PushI
	SetReturnValue(var_50_int); // 0x54a ObjFunc
	return 0; // 0x54c Return
}


func_1357(var_196_bool)
{
	var_198_int = 0; var_199_string = ""; // 0x54e PushV
	var_199_string = "oobSysGatherer2_1"; // 0x54f MovS
	func_1280(var_198_int, var_199_string); // 0x550 NEW_2
	var_202_int = 0; // 0x552 PushI
	var_203_bool = var_198_int == var_202_int; // 0x553 Eq
	if(var_203_bool == 0) goto Label_1367; // 0x554 JumpB
	var_196_bool = 1; // 0x555 MovB
	return 0; // 0x556 Return
	
Label_1367:
	var_196_bool = 0; // 0x557 MovB
	return 0; // 0x558 Return
}


func_1231(var_142_string, var_143_bool)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0; // 0x4cf PushV
	lshHasAnimation(var_149_bool, var_142_string); // 0x4d0 Func
	var_152_bool = var_149_bool; // 0x4d2 Push
	if(var_152_bool == 0) goto Label_1241; // 0x4d3 JumpB
	lshGetAnimTimes(var_142_string, var_150_float, var_151_float); // 0x4d4 Func
	lshPlayAnimation(var_150_float, var_151_float, var_143_bool); // 0x4d6 Func
	goto Label_1245; // 0x4d8 Jump
	
Label_1245:
	return 6; // 0x4dd Return
	
Label_1241:
	var_153_string = "Can't find lsh animation : "; // 0x4d9 PushS
	var_154_int = var_153_string + var_142_string; // 0x4da Add
	Trace(var_154_int); // 0x4db Func
}


func_850(var_5_bool)
{
	var_5_bool = 1; // 0x352 TMovB
	var_22_bool = 0; // 0x353 PushV
	var_22_bool = 0; // 0x354 MovB
	var_23_bool = 0; // 0x355 PushV
	func_1074(var_23_bool); // 0x356 NEW_2
	var_26_bool = var_23_bool == 0; // 0x358 Not
	if(var_26_bool == 0) goto Label_863; // 0x359 JumpB
	var_27_bool = 0; // 0x35a PushV
	func_899(var_27_bool); // 0x35b NEW_2
	if(var_27_bool == 0) goto Label_863; // 0x35d JumpB
	var_22_bool = 1; // 0x35e MovB
	
Label_863:
	if(var_22_bool == 0) goto Label_869; // 0x35f JumpB
	var_28_object = Obj(); // 0x360 PushV
	func_1264(var_28_object); // 0x361 NEW_2
	RemoveActor(var_28_object); // 0x363 Func
	
Label_869:
	return 0; // 0x365 Return
}


func_980()
{
	var_65_int = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_bool = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_float = 0; var_78_bool = 0; // 0x3d4 PushV
	WaitForAnimEnd(); // 0x3d5 Func
	var_79_bool = 0; // 0x3d7 PushV
	func_1074(var_79_bool); // 0x3d8 NEW_2
	var_80_bool = var_79_bool == 0; // 0x3da Not
	if(var_80_bool == 0) goto Label_989; // 0x3db JumpB
	return 14; // 0x3dc Return
	
Label_989:
	var_81_int = 0; // 0x3dd PushV
	func_1308(var_81_int); // 0x3de NEW_2
	var_72_int = var_81_int; // 0x3df Mov
	var_73_int = 0; // 0x3e1 MovI
	
Label_994:
	var_94_bool = 0; // 0x3e2 PushV
	var_94_bool = 0; // 0x3e3 MovB
	var_95_int = 5; // 0x3e4 PushI
	var_96_bool = var_73_int < var_95_int; // 0x3e5 LT
	if(var_96_bool == 0) goto Label_1004; // 0x3e6 JumpB
	var_97_bool = 0; // 0x3e7 PushV
	func_1074(var_97_bool); // 0x3e8 NEW_2
	if(var_97_bool == 0) goto Label_1004; // 0x3ea JumpB
	var_94_bool = 1; // 0x3eb MovB
	
Label_1004:
	if(var_94_bool == 0) goto Label_1056; // 0x3ec JumpB
	var_98_int = 3; // 0x3ed PushI
	irand(var_74_int, var_98_int); // 0x3ee Func
	var_99_int = 0; // 0x3f0 PushI
	var_100_bool = var_74_int == var_99_int; // 0x3f1 Eq
	if(var_100_bool == 0) goto Label_1028; // 0x3f2 JumpB
	var_101_int = var_72_int; // 0x3f3 Push
	if(var_101_int == 0) goto Label_1027; // 0x3f4 JumpB
	irand(var_75_int, var_72_int); // 0x3f5 Func
	var_102_string = "all"; // 0x3f7 PushS
	var_103_string = ""; var_104_int = 0; // 0x3f8 PushV
	var_104_int = var_75_int; // 0x3f9 Mov
	func_1301(var_103_string, var_104_int); // 0x3fa NEW_2
	PlayAnimation(var_102_string, var_103_string); // 0x3fc Func
	WaitForAnimEnd(var_76_bool); // 0x3fe Func
	var_105_bool = var_76_bool == 0; // 0x400 Not
	if(var_105_bool == 0) goto Label_1027; // 0x401 JumpB
	goto Label_1056; // 0x402 Jump
	
Label_1056:
	ResetAAS(); // 0x420 Func
	return 14; // 0x422 Return
	
Label_1027:
	goto Label_1045; // 0x403 Jump
	
Label_1045:
	var_106_bool = 0; // 0x415 PushV
	func_1059(var_106_bool); // 0x416 NEW_2
	var_107_bool = var_106_bool == 0; // 0x418 Not
	if(var_107_bool == 0) goto Label_1051; // 0x419 JumpB
	goto Label_1056; // 0x41a Jump
	
Label_1051:
	ResetAAS(); // 0x41b Func
	var_108_int = 1; // 0x41d PushI
	var_73_int = var_73_int + var_108_int; // 0x41e Add2
	goto Label_994; // 0x41f Jump
	
Label_1028:
	var_109_int = 1; // 0x404 PushI
	var_110_bool = var_74_int == var_109_int; // 0x405 Eq
	if(var_110_bool == 0) goto Label_1042; // 0x406 JumpB
	var_111_int = 4; // 0x407 PushI
	rand(var_77_float, var_111_int); // 0x408 Func
	var_112_int = 1; // 0x40a PushI
	var_113_int = var_77_float + var_112_int; // 0x40b Add
	Sleep(var_113_int, var_78_bool); // 0x40c Func
	var_114_bool = var_78_bool == 0; // 0x40e Not
	if(var_114_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1056; // 0x410 Jump
	
Label_1041:
	goto Label_1045; // 0x411 Jump
	
Label_1042:
	var_115_int = var_73_int; // 0x412 Push
	if(var_115_int == 0) goto Label_1045; // 0x413 JumpB
	goto Label_1056; // 0x414 Jump
}


func_1369(var_120_bool, var_121_object)
{
	var_122_bool = 0; var_123_object = Obj(); // 0x55a PushV
	var_123_object = var_121_object; // 0x55b Mov
	func_1390(var_123_object); // 0x55c NEW_2
	if(var_122_bool == 0) goto Label_1377; // 0x55e JumpB
	var_120_bool = 1; // 0x55f MovB
	return 0; // 0x560 Return
	
Label_1377:
	var_120_bool = 0; // 0x561 MovB
	return 0; // 0x562 Return
}


func_1246(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x4de PushV
	GetEyesHeight(var_39_float); // 0x4df ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x4e1 MovV
	var_41_float = GetByIndex(var_40_cvector, 1); // 0x4e2 PushE
	var_41_float = var_39_float; // 0x4e3 Mov
	SetByIndex(var_40_cvector, 1) = var_41_float; // 0x4e4 PopE
	var_42_string = "head"; // 0x4e5 PushS
	LookAsync(var_36_object, var_42_string, var_40_cvector); // 0x4e6 Func
	return 4; // 0x4e8 Return
}


func_1379(var_110_bool, var_111_object)
{
	var_112_bool = 0; var_113_object = Obj(); var_114_string = ""; // 0x564 PushV
	var_113_object = var_111_object; // 0x565 Mov
	var_114_string = "blood"; // 0x566 MovS
	func_1285(var_113_object, var_114_string); // 0x567 NEW_2
	if(var_112_bool == 0) goto Label_1388; // 0x569 JumpB
	var_110_bool = 1; // 0x56a MovB
	return 0; // 0x56b Return
	
Label_1388:
	var_110_bool = 0; // 0x56c MovB
	return 0; // 0x56d Return
}


func_1257()
{
	var_22_bool = 0; // 0x4e9 PushV
	func_1479(var_22_bool); // 0x4ea NEW_2
	if(var_22_bool == 0) goto Label_1263; // 0x4ec JumpB
	lshStopSpeech(); // 0x4ed Func
	
Label_1263:
	return 0; // 0x4ef Return
}


func_236(var_0_bool, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0xec PushV
	var_0_bool = var_32_object; // 0xed TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0xee PushV
	var_43_object = var_32_object; // 0xef Mov
	var_44_float = 110.0; // 0xf0 MovF
	func_1079(var_43_object, var_44_float); // 0xf1 NEW_2
	var_88_bool = var_42_bool == 0; // 0xf3 Not
	if(var_88_bool == 0) goto Label_247; // 0xf4 JumpB
	var_31_int = -2; // 0xf5 MovI
	return 8; // 0xf6 Return
	
Label_247:
	CreateDialog(var_38_object); // 0xf7 Func
	var_89_int = 0; // 0xf9 PushV
	func_1473(var_89_int); // 0xfa NEW_2
	SetNPCName(var_89_int); // 0xfc ObjFunc
	var_90_int = 0; // 0xfe PushV
	func_1471(var_90_int); // 0xff NEW_2
	SetNPCDescription(var_90_int); // 0x101 ObjFunc
	var_91_string = ""; // 0x103 PushV
	func_1475(var_91_string); // 0x104 NEW_2
	SetPhoto(var_91_string); // 0x106 ObjFunc
	var_92_string = ""; // 0x108 PushV
	func_1477(var_92_string); // 0x109 NEW_2
	SetPhoto2(var_92_string); // 0x10b ObjFunc
	var_93_int = 0; // 0x10d PushV
	func_1448(var_93_int); // 0x10e NEW_2
	SetPlayerName(var_93_int); // 0x110 ObjFunc
	var_40_int = -1; // 0x112 MovI
	IsOverrideActive(var_39_bool); // 0x113 Func
	var_101_bool = var_39_bool; // 0x115 Push
	if(var_101_bool == 0) goto Label_281; // 0x116 JumpB
	var_31_int = -2; // 0x117 MovI
	return 8; // 0x118 Return
	
Label_281:
	DoDialog(var_38_object); // 0x119 Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x11b PushV
	var_102_object = var_32_object; // 0x11c Mov
	var_103_object = var_38_object; // 0x11d Mov
	TaskCall(4); // 0x11e TaskCall
	func_310(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x11f NEW_2
	TaskReturn(); // 0x120 TaskReturn
	IsDialogEnd(var_41_bool); // 0x122 ObjFunc
	
Label_292:
	var_210_bool = var_41_bool == 0; // 0x124 Not
	if(var_210_bool == 0) goto Label_299; // 0x125 JumpB
	sync(); // 0x126 Func
	IsDialogEnd(var_41_bool); // 0x128 ObjFunc
	goto Label_292; // 0x12a Jump
	
Label_299:
	var_211_object = Obj(); // 0x12b PushV
	var_211_object = var_32_object; // 0x12c Mov
	func_1147(); // 0x12d NEW_2
	StopDialog(var_38_object); // 0x12f Func
	GetReturnValue(var_40_int); // 0x131 ObjFunc
	var_31_int = var_40_int; // 0x133 Mov
	return 8; // 0x134 Return
}


func_1390(var_122_bool)
{
	var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0x56e PushV
	var_128_int = 0; // 0x56f PushV
	func_1292(var_128_int); // 0x570 NEW_2
	var_126_int = var_128_int; // 0x571 Mov
	var_134_string = "Gatherer2_"; // 0x573 PushS
	var_135_int = var_134_string + var_126_int; // 0x574 Add
	GetVariable(var_135_int, var_127_int); // 0x575 Func
	var_136_int = 0; // 0x577 PushI
	var_122_bool = var_127_int != var_136_int; // 0x578 Neq2
	return 4; // 0x579 Return
}


func_1264(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x4f0 PushV
	self(var_28_object); // 0x4f1 Func
	var_26_object = var_28_object; // 0x4f3 Mov
	return 2; // 0x4f4 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_282_object, var_283_object)
{
	var_0_bool = var_283_object; // 0x73 TMov
	var_1_object = var_282_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_288_int = 1; // 0x76 PushI
	if(var_288_int == 0) goto Label_142; // 0x77 JumpB
	var_289_string = ""; // 0x78 PushV
	var_289_string = "Neutral"; // 0x79 MovS
	func_172(var_283_object, var_289_string); // 0x7a NEW_2
	var_297_int = 525391; // 0x7c PushI
	SetMessage(var_297_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_298_int = 525392; // 0x81 PushI
	var_299_int = -1; // 0x82 PushI
	var_300_int = 26760; // 0x83 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x84 TObjFunc
	var_301_int = 539025; // 0x86 PushI
	var_302_int = -1; // 0x87 PushI
	var_303_int = 40968; // 0x88 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x89 TObjFunc
	goto Label_142; // 0x8b Jump
	
Label_142:
	var_304_bool = 0; // 0x8e PushV
	func_1479(var_304_bool); // 0x8f NEW_2
	if(var_304_bool == 0) goto Label_157; // 0x91 JumpB
	
Label_146:
	lshWaitForAnimEnd(); // 0x92 Func
	var_305_object = var_3_object; // 0x94 PushT
	if(var_305_object == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_156:
	goto Label_171; // 0x9c Jump
	
Label_171:
	return 0; // 0xab Return
	
Label_151:
	var_306_string = ""; // 0x97 PushV
	var_306_string = var_2_object; // 0x98 MovT
	func_1215(var_306_string); // 0x99 NEW_2
	goto Label_146; // 0x9b Jump
	
Label_157:
	var_307_string = "all"; // 0x9d PushS
	var_308_string = "idle"; // 0x9e PushS
	PlayAnimation(var_307_string, var_308_string); // 0x9f Func
	
Label_161:
	WaitForAnimEnd(); // 0xa1 Func
	var_309_object = var_3_object; // 0xa3 PushT
	if(var_309_object == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_166:
	var_310_string = "all"; // 0xa6 PushS
	var_311_string = "idle"; // 0xa7 PushS
	PlayAnimation(var_310_string, var_311_string); // 0xa8 Func
	goto Label_161; // 0xaa Jump
}


func_1270(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x4f6 PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x4f7 Or
	var_73_float = sqrt(var_74_int); // 0x4f8 Sqrt2
	var_75_float = 0.0; // 0x4f9 PushF
	var_76_bool = var_73_float < var_75_float; // 0x4fa LT
	if(var_76_bool == 0) goto Label_1278; // 0x4fb JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x4fc MovV
	return 2; // 0x4fd Return
	
Label_1278:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x4fe Div2
	return 2; // 0x4ff Return
}


func_1402()
{
	var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; // 0x57a PushV
	var_29_int = 0; // 0x57b PushI
	ClearSubContainer(var_29_int); // 0x57c Func
	var_30_int = 15; // 0x57e PushI
	irand(var_28_int, var_30_int); // 0x57f Func
	var_31_int = 5; // 0x581 PushI
	var_28_int = var_28_int + var_31_int; // 0x582 Add2
	var_32_int = 0; var_33_string = ""; // 0x583 PushV
	var_33_string = "grass_black_tvir"; // 0x584 MovS
	func_1443(var_32_int, var_33_string); // 0x585 NEW_2
	var_36_int = 0; // 0x587 PushI
	AddItem(var_27_bool, var_32_int, var_36_int, var_28_int); // 0x588 Func
	var_37_int = 15; // 0x58a PushI
	irand(var_28_int, var_37_int); // 0x58b Func
	var_38_int = 5; // 0x58d PushI
	var_28_int = var_28_int + var_38_int; // 0x58e Add2
	var_39_int = 0; var_40_string = ""; // 0x58f PushV
	var_40_string = "grass_blood_tvir"; // 0x590 MovS
	func_1443(var_39_int, var_40_string); // 0x591 NEW_2
	var_41_int = 0; // 0x593 PushI
	AddItem(var_27_bool, var_39_int, var_41_int, var_28_int); // 0x594 Func
	var_42_int = 15; // 0x596 PushI
	irand(var_28_int, var_42_int); // 0x597 Func
	var_43_int = 5; // 0x599 PushI
	var_28_int = var_28_int + var_43_int; // 0x59a Add2
	var_44_int = 0; var_45_string = ""; // 0x59b PushV
	var_45_string = "grass_brown_tvir"; // 0x59c MovS
	func_1443(var_44_int, var_45_string); // 0x59d NEW_2
	var_46_int = 0; // 0x59f PushI
	AddItem(var_27_bool, var_44_int, var_46_int, var_28_int); // 0x5a0 Func
	return 4; // 0x5a2 Return
}


func_1147()
{
	var_212_bool = 0; var_213_bool = 0; // 0x47b PushV
	CameraSwitchToNormal(); // 0x47c Func
	var_214_bool = 0; // 0x47e PushV
	func_1479(var_214_bool); // 0x47f NEW_2
	if(var_214_bool == 0) goto Label_1155; // 0x481 JumpB
	goto Label_1163; // 0x482 Jump
	
Label_1163:
	return 2; // 0x48b Return
	
Label_1155:
	var_215_string = "head"; // 0x483 PushS
	HasAnimationTrack(var_213_bool, var_215_string); // 0x484 Func
	var_216_bool = var_213_bool; // 0x486 Push
	if(var_216_bool == 0) goto Label_1163; // 0x487 JumpB
	var_217_string = "head"; // 0x488 PushS
	UnlookAsync(var_217_string); // 0x489 Func
}


