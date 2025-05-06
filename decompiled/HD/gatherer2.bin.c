task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_int)
{
	var_20_bool = 0; // 0x1b PushV
	func_1483(var_20_bool); // 0x1c NEW_2
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
	var_21_int = 1; // 0x10f PushI
	if(var_21_int == 0) goto Label_554; // 0x110 JumpB
	func_1261(); // 0x112 NEW_2
	var_23_int = 19285; // 0x114 PushI
	var_24_bool = var_20_int == var_23_int; // 0x115 Eq
	if(var_24_bool == 0) goto Label_289; // 0x116 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x117 PushV
	var_25_object = var_1_object; // 0x118 MovT
	var_26_object = var_0_bool; // 0x119 MovT
	func_1329(); // 0x11a NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x11c PushV
	var_42_object = var_1_object; // 0x11d MovT
	var_43_object = var_0_bool; // 0x11e MovT
	func_1350(); // 0x11f NEW_2
	
Label_289:
	var_46_int = 19288; // 0x121 PushI
	var_47_bool = var_20_int == var_46_int; // 0x122 Eq
	if(var_47_bool == 0) goto Label_297; // 0x123 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x124 PushV
	var_48_object = var_1_object; // 0x125 MovT
	var_49_object = var_0_bool; // 0x126 MovT
	func_1356(); // 0x127 NEW_2
	
Label_297:
	var_51_int = 36243; // 0x129 PushI
	var_52_bool = var_20_int == var_51_int; // 0x12a Eq
	if(var_52_bool == 0) goto Label_305; // 0x12b JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x12c PushV
	var_53_object = var_1_object; // 0x12d MovT
	var_54_object = var_0_bool; // 0x12e MovT
	func_1344(); // 0x12f NEW_2
	
Label_305:
	var_57_int = 19277; // 0x131 PushI
	var_58_bool = var_19_bool == var_57_int; // 0x132 Eq
	if(var_58_bool == 0) goto Label_404; // 0x133 JumpB
	var_59_bool = 0; // 0x134 PushV
	var_59_bool = 0; // 0x135 MovB
	var_60_bool = 0; var_61_object = Obj(); // 0x136 PushV
	var_61_object = var_1_object; // 0x137 MovT
	func_1383(var_60_bool, var_61_object); // 0x138 NEW_2
	var_69_bool = var_60_bool == 0; // 0x13a Not
	if(var_69_bool == 0) goto Label_323; // 0x13b JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x13c PushV
	var_71_object = var_1_object; // 0x13d MovT
	func_1373(var_70_bool, var_71_object); // 0x13e NEW_2
	var_82_bool = var_70_bool == 0; // 0x140 Not
	if(var_82_bool == 0) goto Label_323; // 0x141 JumpB
	var_59_bool = 1; // 0x142 MovB
	
Label_323:
	if(var_59_bool == 0) goto Label_344; // 0x143 JumpB
	var_83_string = ""; // 0x144 PushV
	var_83_string = "Neutral"; // 0x145 MovS
	func_248(var_20_int, var_83_string); // 0x146 NEW_2
	var_100_int = 518164; // 0x148 PushI
	SetMessage(var_100_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_101_int = 530150; // 0x14d PushI
	var_102_int = 31544; // 0x14e PushI
	var_103_int = 31543; // 0x14f PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x150 TObjFunc
	var_104_int = 530158; // 0x152 PushI
	var_105_int = -1; // 0x153 PushI
	var_106_int = 31551; // 0x154 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_107_bool = 0; // 0x158 PushV
	var_107_bool = 0; // 0x159 MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x15a PushV
	var_109_object = var_1_object; // 0x15b MovT
	func_1383(var_108_bool, var_109_object); // 0x15c NEW_2
	if(var_108_bool == 0) goto Label_358; // 0x15e JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x15f PushV
	var_111_object = var_1_object; // 0x160 MovT
	func_1373(var_110_bool, var_111_object); // 0x161 NEW_2
	var_112_bool = var_110_bool == 0; // 0x163 Not
	if(var_112_bool == 0) goto Label_358; // 0x164 JumpB
	var_107_bool = 1; // 0x165 MovB
	
Label_358:
	if(var_107_bool == 0) goto Label_374; // 0x166 JumpB
	var_113_string = ""; // 0x167 PushV
	var_113_string = "Neutral"; // 0x168 MovS
	func_248(var_20_int, var_113_string); // 0x169 NEW_2
	var_114_int = 518169; // 0x16b PushI
	SetMessage(var_114_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_115_int = 518170; // 0x170 PushI
	var_116_int = 19284; // 0x171 PushI
	var_117_int = 19283; // 0x172 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_118_string = ""; // 0x176 PushV
	var_118_string = "Neutral"; // 0x177 MovS
	func_248(var_20_int, var_118_string); // 0x178 NEW_2
	var_119_int = 518174; // 0x17a PushI
	SetMessage(var_119_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_120_int = 518175; // 0x17f PushI
	var_121_int = -1; // 0x180 PushI
	var_122_int = 19288; // 0x181 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x182 TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0x184 PushV
	var_124_object = var_1_object; // 0x185 MovT
	func_1361(var_124_object); // 0x186 NEW_2
	if(var_123_bool == 0) goto Label_398; // 0x188 JumpB
	var_131_int = 534605; // 0x189 PushI
	var_132_int = 36244; // 0x18a PushI
	var_133_int = 36243; // 0x18b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x18c TObjFunc
	
Label_398:
	var_134_int = 518179; // 0x18e PushI
	var_135_int = -1; // 0x18f PushI
	var_136_int = 19292; // 0x190 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_137_int = 36244; // 0x194 PushI
	var_138_bool = var_19_bool == var_137_int; // 0x195 Eq
	if(var_138_bool == 0) goto Label_427; // 0x196 JumpB
	var_139_string = ""; // 0x197 PushV
	var_139_string = "Neutral"; // 0x198 MovS
	func_248(var_20_int, var_139_string); // 0x199 NEW_2
	var_140_int = 534606; // 0x19b PushI
	SetMessage(var_140_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_141_int = 534607; // 0x1a0 PushI
	var_142_int = 36246; // 0x1a1 PushI
	var_143_int = 36245; // 0x1a2 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1a3 TObjFunc
	var_144_int = 534614; // 0x1a5 PushI
	var_145_int = -1; // 0x1a6 PushI
	var_146_int = 36252; // 0x1a7 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_147_int = 36246; // 0x1ab PushI
	var_148_bool = var_19_bool == var_147_int; // 0x1ac Eq
	if(var_148_bool == 0) goto Label_450; // 0x1ad JumpB
	var_149_string = ""; // 0x1ae PushV
	var_149_string = "Neutral"; // 0x1af MovS
	func_248(var_20_int, var_149_string); // 0x1b0 NEW_2
	var_150_int = 534608; // 0x1b2 PushI
	SetMessage(var_150_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_151_int = 534609; // 0x1b7 PushI
	var_152_int = -1; // 0x1b8 PushI
	var_153_int = 36247; // 0x1b9 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1ba TObjFunc
	var_154_int = 534610; // 0x1bc PushI
	var_155_int = 36249; // 0x1bd PushI
	var_156_int = 36248; // 0x1be PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1bf TObjFunc
	return 0; // 0x1c1 Return
	
Label_450:
	var_157_int = 36249; // 0x1c2 PushI
	var_158_bool = var_19_bool == var_157_int; // 0x1c3 Eq
	if(var_158_bool == 0) goto Label_473; // 0x1c4 JumpB
	var_159_string = ""; // 0x1c5 PushV
	var_159_string = "Neutral"; // 0x1c6 MovS
	func_248(var_20_int, var_159_string); // 0x1c7 NEW_2
	var_160_int = 534611; // 0x1c9 PushI
	SetMessage(var_160_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_161_int = 534612; // 0x1ce PushI
	var_162_int = -1; // 0x1cf PushI
	var_163_int = 36250; // 0x1d0 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1d1 TObjFunc
	var_164_int = 534613; // 0x1d3 PushI
	var_165_int = -1; // 0x1d4 PushI
	var_166_int = 36251; // 0x1d5 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_167_int = 19284; // 0x1d9 PushI
	var_168_bool = var_19_bool == var_167_int; // 0x1da Eq
	if(var_168_bool == 0) goto Label_496; // 0x1db JumpB
	var_169_string = ""; // 0x1dc PushV
	var_169_string = "Neutral"; // 0x1dd MovS
	func_248(var_20_int, var_169_string); // 0x1de NEW_2
	var_170_int = 518171; // 0x1e0 PushI
	SetMessage(var_170_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_171_int = 518172; // 0x1e5 PushI
	var_172_int = -1; // 0x1e6 PushI
	var_173_int = 19285; // 0x1e7 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1e8 TObjFunc
	var_174_int = 518173; // 0x1ea PushI
	var_175_int = -1; // 0x1eb PushI
	var_176_int = 19286; // 0x1ec PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_177_int = 31544; // 0x1f0 PushI
	var_178_bool = var_19_bool == var_177_int; // 0x1f1 Eq
	if(var_178_bool == 0) goto Label_519; // 0x1f2 JumpB
	var_179_string = ""; // 0x1f3 PushV
	var_179_string = "Neutral"; // 0x1f4 MovS
	func_248(var_20_int, var_179_string); // 0x1f5 NEW_2
	var_180_int = 530151; // 0x1f7 PushI
	SetMessage(var_180_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_181_int = 530152; // 0x1fc PushI
	var_182_int = 31546; // 0x1fd PushI
	var_183_int = 31545; // 0x1fe PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1ff TObjFunc
	var_184_int = 530156; // 0x201 PushI
	var_185_int = -1; // 0x202 PushI
	var_186_int = 31549; // 0x203 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_187_int = 31546; // 0x207 PushI
	var_188_bool = var_19_bool == var_187_int; // 0x208 Eq
	if(var_188_bool == 0) goto Label_542; // 0x209 JumpB
	var_189_string = ""; // 0x20a PushV
	var_189_string = "Neutral"; // 0x20b MovS
	func_248(var_20_int, var_189_string); // 0x20c NEW_2
	var_190_int = 530153; // 0x20e PushI
	SetMessage(var_190_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_191_int = 530154; // 0x213 PushI
	var_192_int = -1; // 0x214 PushI
	var_193_int = 31547; // 0x215 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x216 TObjFunc
	var_194_int = 530155; // 0x218 PushI
	var_195_int = -1; // 0x219 PushI
	var_196_int = 31548; // 0x21a PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_3_object = 1; // 0x21e TMovB
	var_197_bool = 0; // 0x21f PushV
	func_1483(var_197_bool); // 0x220 NEW_2
	if(var_197_bool == 0) goto Label_550; // 0x222 JumpB
	lshStopAnimation(); // 0x223 Func
	goto Label_552; // 0x225 Jump
	
Label_552:
	return 0; // 0x228 Return
	
Label_550:
	StopAnimation(); // 0x226 Func
	
Label_554:
	return 0; // 0x22a Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	var_21_int = 1; // 0x2c6 PushI
	if(var_21_int == 0) goto Label_750; // 0x2c7 JumpB
	func_1261(); // 0x2c9 NEW_2
	var_23_int = 26759; // 0x2cb PushI
	var_24_bool = var_19_bool == var_23_int; // 0x2cc Eq
	if(var_24_bool == 0) goto Label_738; // 0x2cd JumpB
	var_25_string = ""; // 0x2ce PushV
	var_25_string = "Neutral"; // 0x2cf MovS
	func_687(var_20_int, var_25_string); // 0x2d0 NEW_2
	var_42_int = 525391; // 0x2d2 PushI
	SetMessage(var_42_int); // 0x2d3 TObjFunc
	ClearReplies(); // 0x2d5 TObjFunc
	var_43_int = 525392; // 0x2d7 PushI
	var_44_int = -1; // 0x2d8 PushI
	var_45_int = 26760; // 0x2d9 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x2da TObjFunc
	var_46_int = 539025; // 0x2dc PushI
	var_47_int = -1; // 0x2dd PushI
	var_48_int = 40968; // 0x2de PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0x2df TObjFunc
	return 0; // 0x2e1 Return
	
Label_738:
	var_3_object = 1; // 0x2e2 TMovB
	var_49_bool = 0; // 0x2e3 PushV
	func_1483(var_49_bool); // 0x2e4 NEW_2
	if(var_49_bool == 0) goto Label_746; // 0x2e6 JumpB
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
	func_1469(var_25_int); // 0x301 NEW_2
	var_29_int = 1; // 0x303 PushI
	var_30_bool = var_25_int == var_29_int; // 0x304 Eq
	if(var_30_bool == 0) goto Label_782; // 0x305 JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x306 PushV
	var_32_object = var_19_object; // 0x307 Mov
	TaskCall(1); // 0x308 TaskCall
	func_40(var_33_object, var_31_int, var_32_object); // 0x309 NEW_2
	TaskReturn(); // 0x30a TaskReturn
	var_21_int = var_33_object; // 0x30b Mov
	goto Label_797; // 0x30d Jump
	
Label_797:
	var_220_int = 1000; // 0x31d PushI
	var_221_bool = var_220_int == var_21_int; // 0x31e Eq
	if(var_221_bool == 0) goto Label_818; // 0x31f JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; // 0x320 PushV
	var_223_object = var_19_object; // 0x321 Mov
	var_224_float = 110.0; // 0x322 MovF
	func_1166(var_223_object, var_224_float); // 0x323 NEW_2
	var_252_bool = var_222_bool == 0; // 0x325 Not
	if(var_252_bool == 0) goto Label_808; // 0x326 JumpB
	return 2; // 0x327 Return
	
Label_808:
	var_253_object = Obj(); // 0x328 PushV
	var_253_object = var_19_object; // 0x329 Mov
	TaskCall(0); // 0x32a TaskCall
	func_0(var_253_object); // 0x32b NEW_2
	TaskReturn(); // 0x32c TaskReturn
	var_260_object = Obj(); // 0x32e PushV
	var_260_object = var_19_object; // 0x32f Mov
	func_1214(); // 0x330 NEW_2
	
Label_818:
	return 2; // 0x332 Return
	
Label_782:
	var_262_int = 0; // 0x30e PushV
	func_1469(var_262_int); // 0x30f NEW_2
	var_263_int = 2; // 0x311 PushI
	var_264_bool = var_262_int == var_263_int; // 0x312 Eq
	if(var_264_bool == 0) goto Label_796; // 0x313 JumpB
	var_265_int = 0; var_266_object = Obj(); // 0x314 PushV
	var_266_object = var_19_object; // 0x315 Mov
	TaskCall(3); // 0x316 TaskCall
	func_555(var_267_object, var_265_int, var_266_object); // 0x317 NEW_2
	TaskReturn(); // 0x318 TaskReturn
	var_21_int = var_267_object; // 0x319 Mov
	goto Label_797; // 0x31b Jump
	
Label_796:
	return 2; // 0x31c Return
}


task_5_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x333 PushV
	func_1296(var_19_int); // 0x334 NEW_2
	var_25_bool = var_7_object != var_19_int; // 0x336 Neq
	if(var_25_bool == 0) goto Label_831; // 0x337 JumpB
	func_1406(); // 0x339 NEW_2
	var_48_int = 0; // 0x33b PushV
	func_1296(var_48_int); // 0x33c NEW_2
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
	func_1268(var_26_object); // 0x37e NEW_2
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
	func_1250(var_36_object); // 0x3bb NEW_2
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
	func_1296(var_19_int); // 0x2f0 NEW_2
	var_7_object = var_19_int; // 0x2f1 TMov
	func_1406(); // 0x2f4 NEW_2
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
	var_255_bool = 0; // 0x4 PushV
	func_1483(var_255_bool); // 0x5 NEW_2
	if(var_255_bool == 0) goto Label_15; // 0x7 JumpB
	var_256_string = ""; // 0x8 PushV
	var_256_string = "Neutral"; // 0x9 MovS
	func_1219(var_256_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_257_bool = var_0_bool; // 0x15 PushT
	if(var_257_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_258_string = "all"; // 0x11 PushS
	var_259_string = "idle"; // 0x12 PushS
	PlayAnimation(var_258_string, var_259_string); // 0x13 Func
}


func_899(var_25_bool)
{
	var_25_bool = 1; // 0x383 MovB
	return 0; // 0x384 Return
}


func_1284(var_199_int, var_200_string)
{
	var_201_int = 0; var_202_int = 0; // 0x504 PushV
	GetVariable(var_200_string, var_202_int); // 0x505 Func
	var_199_int = var_202_int; // 0x507 Mov
	return 2; // 0x508 Return
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


func_1289(var_113_bool, var_115_string)
{
	var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_bool = 0; // 0x509 PushV
	GetInvItemByName(var_118_int, var_115_string); // 0x50a Func
	HasItem(var_118_int, var_119_bool); // 0x50c ObjFunc
	var_113_bool = var_119_bool; // 0x50e Mov
	return 4; // 0x50f Return
}


func_1166(var_222_bool, var_224_float)
{
	var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_float = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_bool = 0; // 0x48e PushV
	GetPosition(var_234_cvector); // 0x48f ObjFunc
	GetEyesHeight(var_233_float); // 0x491 ObjFunc
	var_241_float = GetByIndex(var_234_cvector, 1); // 0x493 PushE
	var_241_float = var_241_float + var_233_float; // 0x494 Add2
	SetByIndex(var_234_cvector, 1) = var_241_float; // 0x495 PopE
	GetPosition(var_235_cvector); // 0x496 Func
	GetEyesHeight(var_233_float); // 0x498 Func
	var_242_float = GetByIndex(var_235_cvector, 1); // 0x49a PushE
	var_242_float = var_242_float + var_233_float; // 0x49b Add2
	SetByIndex(var_235_cvector, 1) = var_242_float; // 0x49c PopE
	var_236_cvector = var_234_cvector - var_235_cvector; // 0x49d Sub2
	var_243_float = GetByIndex(var_236_cvector, 1); // 0x49e PushE
	var_243_float = 0; // 0x49f MovI
	SetByIndex(var_236_cvector, 1) = var_243_float; // 0x4a0 PopE
	var_244_int = var_236_cvector | var_236_cvector; // 0x4a1 Or
	var_245_float = sqrt(var_244_int); // 0x4a2 Sqrt
	var_236_cvector = var_236_cvector / var_236_cvector; // 0x4a3 Div2
	var_237_cvector = -var_236_cvector; // 0x4a4 Neg2
	var_246_float = var_236_cvector * var_224_float; // 0x4a5 Mult
	var_247_cvector = CVector(0.0, 10.0, 0.0); // 0x4a6 PushVec
	var_238_cvector = var_246_float - var_247_cvector; // 0x4a7 Sub2
	var_239_cvector = var_235_cvector + var_238_cvector; // 0x4a8 Add2
	IsOverrideActive(var_240_bool); // 0x4a9 Func
	var_248_bool = var_240_bool; // 0x4ab Push
	if(var_248_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_222_bool = 0; // 0x4ad MovB
	return 16; // 0x4ae Return
	
Label_1199:
	StopWorld(); // 0x4af Func
	var_249_bool = 1; // 0x4b1 PushB
	CameraTransit(var_239_cvector, var_237_cvector, var_249_bool); // 0x4b2 Func
	var_250_float = GetByIndex(var_238_cvector, 0); // 0x4b4 PushE
	var_251_float = GetByIndex(var_238_cvector, 2); // 0x4b5 PushE
	Rotate(var_250_float, var_251_float); // 0x4b6 Func
	CameraWaitForPlayFinish(); // 0x4b8 Func
	ResumeWorld(); // 0x4ba Func
	var_222_bool = 1; // 0x4bc MovB
	return 16; // 0x4bd Return
}


func_1296(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0x510 PushV
	GetGameTime(var_21_float); // 0x511 Func
	var_22_int = 1; // 0x513 PushI
	var_23_int = 0; // 0x514 PushV
	var_24_int = 24; // 0x515 PushI
	var_23_int = var_21_float / var_21_float; // 0x516 Div2
	var_19_int = var_22_int + var_23_int; // 0x517 Add2
	return 2; // 0x518 Return
}


func_1305(var_87_string, var_88_int)
{
	var_89_string = ""; var_90_string = ""; // 0x519 PushV
	var_90_string = "idle"; // 0x51a MovS
	var_91_int = var_88_int; // 0x51b Push
	if(var_91_int == 0) goto Label_1310; // 0x51c JumpB
	var_90_string = var_90_string + var_88_int; // 0x51d Add2
	
Label_1310:
	var_87_string = var_90_string; // 0x51e Mov
	return 2; // 0x51f Return
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


func_1312(var_81_int)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0; // 0x520 PushV
	var_84_int = 0; // 0x521 MovI
	
Label_1314:
	var_86_string = "all"; // 0x522 PushS
	var_87_string = ""; var_88_int = 0; // 0x523 PushV
	var_88_int = var_84_int; // 0x524 Mov
	func_1305(var_87_string, var_88_int); // 0x525 NEW_2
	HasAnimation(var_85_bool, var_86_string, var_87_string); // 0x527 Func
	var_92_bool = var_85_bool == 0; // 0x529 Not
	if(var_92_bool == 0) goto Label_1324; // 0x52a JumpB
	goto Label_1327; // 0x52b Jump
	
Label_1327:
	var_81_int = var_84_int; // 0x52f Mov
	return 4; // 0x530 Return
	
Label_1324:
	var_93_int = 1; // 0x52c PushI
	var_84_int = var_84_int + var_93_int; // 0x52d Add2
	goto Label_1314; // 0x52e Jump
}


func_1059(var_106_bool)
{
	var_106_bool = 1; // 0x423 MovB
	return 0; // 0x424 Return
}


func_1061()
{
	StopAnimation(); // 0x425 Func
	StopGroup0(); // 0x427 Func
	return 0; // 0x429 Return
}


func_1447(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0; // 0x5a7 PushV
	GetInvItemByName(var_35_int, var_33_string); // 0x5a8 Func
	var_32_int = var_35_int; // 0x5aa Mov
	return 2; // 0x5ab Return
}


func_40(var_0_bool, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x28 PushV
	var_0_bool = var_32_object; // 0x29 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0x2a PushV
	var_43_object = var_32_object; // 0x2b Mov
	var_44_float = 110.0; // 0x2c MovF
	func_1079(var_43_object, var_44_float); // 0x2d NEW_2
	var_89_bool = var_42_bool == 0; // 0x2f Not
	if(var_89_bool == 0) goto Label_51; // 0x30 JumpB
	var_31_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_38_object); // 0x33 Func
	var_90_int = 0; // 0x35 PushV
	func_1477(var_90_int); // 0x36 NEW_2
	SetNPCName(var_90_int); // 0x38 ObjFunc
	var_91_int = 0; // 0x3a PushV
	func_1475(var_91_int); // 0x3b NEW_2
	SetNPCDescription(var_91_int); // 0x3d ObjFunc
	var_92_string = ""; // 0x3f PushV
	func_1479(var_92_string); // 0x40 NEW_2
	SetPhoto(var_92_string); // 0x42 ObjFunc
	var_93_string = ""; // 0x44 PushV
	func_1481(var_93_string); // 0x45 NEW_2
	SetPhoto2(var_93_string); // 0x47 ObjFunc
	var_94_int = 0; // 0x49 PushV
	func_1452(var_94_int); // 0x4a NEW_2
	SetPlayerName(var_94_int); // 0x4c ObjFunc
	var_40_int = -1; // 0x4e MovI
	IsOverrideActive(var_39_bool); // 0x4f Func
	var_102_bool = var_39_bool; // 0x51 Push
	if(var_102_bool == 0) goto Label_85; // 0x52 JumpB
	var_31_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_38_object); // 0x55 Func
	var_103_object = Obj(); var_104_object = Obj(); // 0x57 PushV
	var_103_object = var_32_object; // 0x58 Mov
	var_104_object = var_38_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_41_bool); // 0x5e ObjFunc
	
Label_96:
	var_211_bool = var_41_bool == 0; // 0x60 Not
	if(var_211_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_41_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_212_object = Obj(); // 0x67 PushV
	var_212_object = var_32_object; // 0x68 Mov
	func_1148(); // 0x69 NEW_2
	StopDialog(var_38_object); // 0x6b Func
	GetReturnValue(var_40_int); // 0x6d ObjFunc
	var_31_int = var_40_int; // 0x6f Mov
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


func_555(var_0_bool, var_265_int, var_266_object)
{
	var_268_object = Obj(); var_269_bool = 0; var_270_int = 0; var_271_bool = 0; var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; // 0x22b PushV
	var_0_bool = var_266_object; // 0x22c TMov
	var_276_bool = 0; var_277_object = Obj(); var_278_float = 0; // 0x22d PushV
	var_277_object = var_266_object; // 0x22e Mov
	var_278_float = 110.0; // 0x22f MovF
	func_1079(var_277_object, var_278_float); // 0x230 NEW_2
	var_279_bool = var_276_bool == 0; // 0x232 Not
	if(var_279_bool == 0) goto Label_566; // 0x233 JumpB
	var_265_int = -2; // 0x234 MovI
	return 8; // 0x235 Return
	
Label_566:
	CreateDialog(var_272_object); // 0x236 Func
	var_280_int = 0; // 0x238 PushV
	func_1477(var_280_int); // 0x239 NEW_2
	SetNPCName(var_280_int); // 0x23b ObjFunc
	var_281_int = 0; // 0x23d PushV
	func_1475(var_281_int); // 0x23e NEW_2
	SetNPCDescription(var_281_int); // 0x240 ObjFunc
	var_282_string = ""; // 0x242 PushV
	func_1479(var_282_string); // 0x243 NEW_2
	SetPhoto(var_282_string); // 0x245 ObjFunc
	var_283_string = ""; // 0x247 PushV
	func_1481(var_283_string); // 0x248 NEW_2
	SetPhoto2(var_283_string); // 0x24a ObjFunc
	var_284_int = 0; // 0x24c PushV
	func_1452(var_284_int); // 0x24d NEW_2
	SetPlayerName(var_284_int); // 0x24f ObjFunc
	var_274_int = -1; // 0x251 MovI
	IsOverrideActive(var_273_bool); // 0x252 Func
	var_285_bool = var_273_bool; // 0x254 Push
	if(var_285_bool == 0) goto Label_600; // 0x255 JumpB
	var_265_int = -2; // 0x256 MovI
	return 8; // 0x257 Return
	
Label_600:
	DoDialog(var_272_object); // 0x258 Func
	var_286_object = Obj(); var_287_object = Obj(); // 0x25a PushV
	var_286_object = var_266_object; // 0x25b Mov
	var_287_object = var_272_object; // 0x25c Mov
	TaskCall(4); // 0x25d TaskCall
	func_629(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object); // 0x25e NEW_2
	TaskReturn(); // 0x25f TaskReturn
	IsDialogEnd(var_275_bool); // 0x261 ObjFunc
	
Label_611:
	var_316_bool = var_275_bool == 0; // 0x263 Not
	if(var_316_bool == 0) goto Label_618; // 0x264 JumpB
	sync(); // 0x265 Func
	IsDialogEnd(var_275_bool); // 0x267 ObjFunc
	goto Label_611; // 0x269 Jump
	
Label_618:
	var_317_object = Obj(); // 0x26a PushV
	var_317_object = var_266_object; // 0x26b Mov
	func_1148(); // 0x26c NEW_2
	StopDialog(var_272_object); // 0x26e Func
	GetReturnValue(var_274_int); // 0x270 ObjFunc
	var_265_int = var_274_int; // 0x272 Mov
	return 8; // 0x273 Return
}


func_1452(var_94_int)
{
	var_95_int = 0; var_96_int = 0; // 0x5ac PushV
	var_97_string = "branch"; // 0x5ad PushS
	GetVariable(var_97_string, var_96_int); // 0x5ae Func
	var_98_int = 0; // 0x5b0 PushI
	var_99_bool = var_96_int == var_98_int; // 0x5b1 Eq
	if(var_99_bool == 0) goto Label_1462; // 0x5b2 JumpB
	var_94_int = 1; // 0x5b3 MovI
	return 2; // 0x5b4 Return
	
Label_1462:
	var_100_int = 1; // 0x5b6 PushI
	var_101_bool = var_96_int == var_100_int; // 0x5b7 Eq
	if(var_101_bool == 0) goto Label_1467; // 0x5b8 JumpB
	var_94_int = 2; // 0x5b9 MovI
	return 2; // 0x5ba Return
	
Label_1467:
	var_94_int = 3; // 0x5bb MovI
	return 2; // 0x5bc Return
}


func_687(var_2_object, var_293_string)
{
	var_294_bool = 0; // 0x2b0 PushV
	func_1483(var_294_bool); // 0x2b1 NEW_2
	var_295_bool = var_294_bool == 0; // 0x2b3 Not
	if(var_295_bool == 0) goto Label_694; // 0x2b4 JumpB
	return 0; // 0x2b5 Return
	
Label_694:
	var_296_bool = var_293_string == var_2_object; // 0x2b6 Eq
	if(var_296_bool == 0) goto Label_697; // 0x2b7 JumpB
	return 0; // 0x2b8 Return
	
Label_697:
	var_297_string = ""; var_298_bool = 0; // 0x2b9 PushV
	var_297_string = var_293_string; // 0x2ba Mov
	var_299_string = ""; // 0x2bb PushS
	var_300_bool = var_293_string == var_299_string; // 0x2bc Eq
	if(var_300_bool == 0) goto Label_704; // 0x2bd JumpB
	var_298_bool = 0; // 0x2be MovB
	goto Label_705; // 0x2bf Jump
	
Label_705:
	func_1235(var_297_string, var_298_bool); // 0x2c1 NEW_2
	var_2_object = var_293_string; // 0x2c3 TMov
	return 0; // 0x2c4 Return
	
Label_704:
	var_298_bool = 1; // 0x2c0 MovB
}


func_1329()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; // 0x531 PushV
	var_31_int = 0; // 0x532 PushV
	func_1296(var_31_int); // 0x533 NEW_2
	var_29_int = var_31_int; // 0x534 Mov
	var_37_string = "Gatherer2_"; // 0x536 PushS
	var_38_int = var_37_string + var_29_int; // 0x537 Add
	var_39_int = 1; // 0x538 PushI
	SetVariable(var_38_int, var_39_int); // 0x539 Func
	var_40_string = "blood"; // 0x53b PushS
	var_41_int = 1; // 0x53c PushI
	RemoveItemByType(var_30_int, var_40_string, var_41_int); // 0x53d ObjFunc
	return 4; // 0x53f Return
}


func_1074(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x432 PushV
	IsLoaded(var_60_bool); // 0x433 Func
	var_58_bool = var_60_bool; // 0x435 Mov
	return 2; // 0x436 Return
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
	func_1274(var_69_cvector, var_70_cvector); // 0x452 NEW_2
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
	var_82_bool = 1; // 0x462 PushB
	CameraTransit(var_60_cvector, var_58_cvector, var_82_bool); // 0x463 Func
	var_83_float = GetByIndex(var_59_cvector, 0); // 0x465 PushE
	var_84_float = GetByIndex(var_59_cvector, 2); // 0x466 PushE
	Rotate(var_83_float, var_84_float); // 0x467 Func
	var_85_bool = 0; // 0x469 PushV
	func_1483(var_85_bool); // 0x46a NEW_2
	if(var_85_bool == 0) goto Label_1134; // 0x46c JumpB
	goto Label_1142; // 0x46d Jump
	
Label_1142:
	CameraWaitForPlayFinish(); // 0x476 Func
	ResumeWorld(); // 0x478 Func
	var_42_bool = 1; // 0x47a MovB
	return 18; // 0x47b Return
	
Label_1134:
	var_86_string = "head"; // 0x46e PushS
	HasAnimationTrack(var_62_bool, var_86_string); // 0x46f Func
	var_87_bool = var_62_bool; // 0x471 Push
	if(var_87_bool == 0) goto Label_1142; // 0x472 JumpB
	var_88_string = "head"; // 0x473 PushS
	LookAsyncCamera(var_88_string); // 0x474 Func
}


func_1469(var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0x5bd PushV
	var_28_string = "branch"; // 0x5be PushS
	GetVariable(var_28_string, var_27_int); // 0x5bf Func
	var_25_int = var_27_int; // 0x5c1 Mov
	return 2; // 0x5c2 Return
}


func_1214()
{
	var_261_bool = 1; // 0x4bf PushB
	CameraSwitchToNormal(var_261_bool); // 0x4c0 Func
	return 0; // 0x4c2 Return
}


func_1344()
{
	var_55_string = "oobSysGatherer2_1"; // 0x541 PushS
	var_56_int = 1; // 0x542 PushI
	SetVariable(var_55_string, var_56_int); // 0x543 Func
	return 0; // 0x545 Return
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


func_1475(var_91_int)
{
	var_91_int = 521048; // 0x5c3 MovI
	return 0; // 0x5c4 Return
}


func_1219(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0; // 0x4c3 PushV
	lshHasAnimation(var_169_bool, var_165_string); // 0x4c4 Func
	var_172_bool = var_169_bool; // 0x4c6 Push
	if(var_172_bool == 0) goto Label_1230; // 0x4c7 JumpB
	lshGetAnimTimes(var_165_string, var_170_float, var_171_float); // 0x4c8 Func
	var_173_bool = 0; // 0x4ca PushB
	lshPlayAnimation(var_170_float, var_171_float, var_173_bool); // 0x4cb Func
	goto Label_1234; // 0x4cd Jump
	
Label_1234:
	return 6; // 0x4d2 Return
	
Label_1230:
	var_174_string = "Can't find lsh animation : "; // 0x4ce PushS
	var_175_int = var_174_string + var_165_string; // 0x4cf Add
	Trace(var_175_int); // 0x4d0 Func
}


func_1477(var_90_int)
{
	var_90_int = 521047; // 0x5c5 MovI
	return 0; // 0x5c6 Return
}


func_1350()
{
	var_44_string = "playsound"; // 0x547 PushS
	var_45_string = "giveitem"; // 0x548 PushS
	TriggerWorld(var_44_string, var_45_string); // 0x549 Func
	return 0; // 0x54b Return
}


func_1479(var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png"; // 0x5c7 MovS
	return 0; // 0x5c8 Return
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


func_1481(var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png"; // 0x5c9 MovS
	return 0; // 0x5ca Return
}


func_1483(var_85_bool)
{
	var_85_bool = 0; // 0x5cb MovB
	return 0; // 0x5cc Return
}


func_1356()
{
	var_50_int = 1000; // 0x54d PushI
	SetReturnValue(var_50_int); // 0x54e ObjFunc
	return 0; // 0x550 Return
}


func_1361(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x552 PushV
	var_200_string = "oobSysGatherer2_1"; // 0x553 MovS
	func_1284(var_199_int, var_200_string); // 0x554 NEW_2
	var_203_int = 0; // 0x556 PushI
	var_204_bool = var_199_int == var_203_int; // 0x557 Eq
	if(var_204_bool == 0) goto Label_1371; // 0x558 JumpB
	var_197_bool = 1; // 0x559 MovB
	return 0; // 0x55a Return
	
Label_1371:
	var_197_bool = 0; // 0x55b MovB
	return 0; // 0x55c Return
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
	func_1268(var_28_object); // 0x361 NEW_2
	RemoveActor(var_28_object); // 0x363 Func
	
Label_869:
	return 0; // 0x365 Return
}


func_1235(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x4d3 PushV
	lshHasAnimation(var_150_bool, var_143_string); // 0x4d4 Func
	var_153_bool = var_150_bool; // 0x4d6 Push
	if(var_153_bool == 0) goto Label_1245; // 0x4d7 JumpB
	lshGetAnimTimes(var_143_string, var_151_float, var_152_float); // 0x4d8 Func
	lshPlayAnimation(var_151_float, var_152_float, var_144_bool); // 0x4da Func
	goto Label_1249; // 0x4dc Jump
	
Label_1249:
	return 6; // 0x4e1 Return
	
Label_1245:
	var_154_string = "Can't find lsh animation : "; // 0x4dd PushS
	var_155_int = var_154_string + var_143_string; // 0x4de Add
	Trace(var_155_int); // 0x4df Func
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
	func_1312(var_81_int); // 0x3de NEW_2
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
	func_1305(var_103_string, var_104_int); // 0x3fa NEW_2
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


func_1373(var_121_bool, var_122_object)
{
	var_123_bool = 0; var_124_object = Obj(); // 0x55e PushV
	var_124_object = var_122_object; // 0x55f Mov
	func_1394(var_124_object); // 0x560 NEW_2
	if(var_123_bool == 0) goto Label_1381; // 0x562 JumpB
	var_121_bool = 1; // 0x563 MovB
	return 0; // 0x564 Return
	
Label_1381:
	var_121_bool = 0; // 0x565 MovB
	return 0; // 0x566 Return
}


func_1250(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x4e2 PushV
	GetEyesHeight(var_39_float); // 0x4e3 ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x4e5 MovV
	var_41_float = GetByIndex(var_40_cvector, 1); // 0x4e6 PushE
	var_41_float = var_39_float; // 0x4e7 Mov
	SetByIndex(var_40_cvector, 1) = var_41_float; // 0x4e8 PopE
	var_42_string = "head"; // 0x4e9 PushS
	LookAsync(var_36_object, var_42_string, var_40_cvector); // 0x4ea Func
	return 4; // 0x4ec Return
}


func_1383(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj(); var_115_string = ""; // 0x568 PushV
	var_114_object = var_112_object; // 0x569 Mov
	var_115_string = "blood"; // 0x56a MovS
	func_1289(var_114_object, var_115_string); // 0x56b NEW_2
	if(var_113_bool == 0) goto Label_1392; // 0x56d JumpB
	var_111_bool = 1; // 0x56e MovB
	return 0; // 0x56f Return
	
Label_1392:
	var_111_bool = 0; // 0x570 MovB
	return 0; // 0x571 Return
}


func_1261()
{
	var_22_bool = 0; // 0x4ed PushV
	func_1483(var_22_bool); // 0x4ee NEW_2
	if(var_22_bool == 0) goto Label_1267; // 0x4f0 JumpB
	lshStopSpeech(); // 0x4f1 Func
	
Label_1267:
	return 0; // 0x4f3 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_103_object, var_104_object)
{
	var_0_bool = var_104_object; // 0x73 TMov
	var_1_object = var_103_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_109_int = 1; // 0x76 PushI
	if(var_109_int == 0) goto Label_218; // 0x77 JumpB
	var_110_bool = 0; // 0x78 PushV
	var_110_bool = 0; // 0x79 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x7a PushV
	var_112_object = var_1_object; // 0x7b MovT
	func_1383(var_111_bool, var_112_object); // 0x7c NEW_2
	var_120_bool = var_111_bool == 0; // 0x7e Not
	if(var_120_bool == 0) goto Label_135; // 0x7f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x80 PushV
	var_122_object = var_1_object; // 0x81 MovT
	func_1373(var_121_bool, var_122_object); // 0x82 NEW_2
	var_138_bool = var_121_bool == 0; // 0x84 Not
	if(var_138_bool == 0) goto Label_135; // 0x85 JumpB
	var_110_bool = 1; // 0x86 MovB
	
Label_135:
	if(var_110_bool == 0) goto Label_156; // 0x87 JumpB
	var_139_string = ""; // 0x88 PushV
	var_139_string = "Neutral"; // 0x89 MovS
	func_248(var_104_object, var_139_string); // 0x8a NEW_2
	var_156_int = 518164; // 0x8c PushI
	SetMessage(var_156_int); // 0x8d TObjFunc
	ClearReplies(); // 0x8f TObjFunc
	var_157_int = 530150; // 0x91 PushI
	var_158_int = 31544; // 0x92 PushI
	var_159_int = 31543; // 0x93 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x94 TObjFunc
	var_160_int = 530158; // 0x96 PushI
	var_161_int = -1; // 0x97 PushI
	var_162_int = 31551; // 0x98 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x99 TObjFunc
	goto Label_218; // 0x9b Jump
	
Label_218:
	var_163_bool = 0; // 0xda PushV
	func_1483(var_163_bool); // 0xdb NEW_2
	if(var_163_bool == 0) goto Label_233; // 0xdd JumpB
	
Label_222:
	lshWaitForAnimEnd(); // 0xde Func
	var_164_object = var_3_object; // 0xe0 PushT
	if(var_164_object == 0) goto Label_227; // 0xe1 JumpB
	goto Label_232; // 0xe2 Jump
	
Label_232:
	goto Label_247; // 0xe8 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_227:
	var_165_string = ""; // 0xe3 PushV
	var_165_string = var_2_object; // 0xe4 MovT
	func_1219(var_165_string); // 0xe5 NEW_2
	goto Label_222; // 0xe7 Jump
	
Label_233:
	var_176_string = "all"; // 0xe9 PushS
	var_177_string = "idle"; // 0xea PushS
	PlayAnimation(var_176_string, var_177_string); // 0xeb Func
	
Label_237:
	WaitForAnimEnd(); // 0xed Func
	var_178_object = var_3_object; // 0xef PushT
	if(var_178_object == 0) goto Label_242; // 0xf0 JumpB
	goto Label_247; // 0xf1 Jump
	
Label_242:
	var_179_string = "all"; // 0xf2 PushS
	var_180_string = "idle"; // 0xf3 PushS
	PlayAnimation(var_179_string, var_180_string); // 0xf4 Func
	goto Label_237; // 0xf6 Jump
	
Label_156:
	var_181_bool = 0; // 0x9c PushV
	var_181_bool = 0; // 0x9d MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x9e PushV
	var_183_object = var_1_object; // 0x9f MovT
	func_1383(var_182_bool, var_183_object); // 0xa0 NEW_2
	if(var_182_bool == 0) goto Label_170; // 0xa2 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0xa3 PushV
	var_185_object = var_1_object; // 0xa4 MovT
	func_1373(var_184_bool, var_185_object); // 0xa5 NEW_2
	var_186_bool = var_184_bool == 0; // 0xa7 Not
	if(var_186_bool == 0) goto Label_170; // 0xa8 JumpB
	var_181_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_181_bool == 0) goto Label_186; // 0xaa JumpB
	var_187_string = ""; // 0xab PushV
	var_187_string = "Neutral"; // 0xac MovS
	func_248(var_104_object, var_187_string); // 0xad NEW_2
	var_188_int = 518169; // 0xaf PushI
	SetMessage(var_188_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_189_int = 518170; // 0xb4 PushI
	var_190_int = 19284; // 0xb5 PushI
	var_191_int = 19283; // 0xb6 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xb7 TObjFunc
	goto Label_218; // 0xb9 Jump
	
Label_186:
	var_192_string = ""; // 0xba PushV
	var_192_string = "Neutral"; // 0xbb MovS
	func_248(var_104_object, var_192_string); // 0xbc NEW_2
	var_193_int = 518174; // 0xbe PushI
	SetMessage(var_193_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_194_int = 518175; // 0xc3 PushI
	var_195_int = -1; // 0xc4 PushI
	var_196_int = 19288; // 0xc5 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xc6 TObjFunc
	var_197_bool = 0; var_198_object = Obj(); // 0xc8 PushV
	var_198_object = var_1_object; // 0xc9 MovT
	func_1361(var_198_object); // 0xca NEW_2
	if(var_197_bool == 0) goto Label_210; // 0xcc JumpB
	var_205_int = 534605; // 0xcd PushI
	var_206_int = 36244; // 0xce PushI
	var_207_int = 36243; // 0xcf PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xd0 TObjFunc
	
Label_210:
	var_208_int = 518179; // 0xd2 PushI
	var_209_int = -1; // 0xd3 PushI
	var_210_int = 19292; // 0xd4 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xd5 TObjFunc
	goto Label_218; // 0xd7 Jump
}


func_1394(var_123_bool)
{
	var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x572 PushV
	var_129_int = 0; // 0x573 PushV
	func_1296(var_129_int); // 0x574 NEW_2
	var_127_int = var_129_int; // 0x575 Mov
	var_135_string = "Gatherer2_"; // 0x577 PushS
	var_136_int = var_135_string + var_127_int; // 0x578 Add
	GetVariable(var_136_int, var_128_int); // 0x579 Func
	var_137_int = 0; // 0x57b PushI
	var_123_bool = var_128_int != var_137_int; // 0x57c Neq2
	return 4; // 0x57d Return
}


func_1268(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x4f4 PushV
	self(var_28_object); // 0x4f5 Func
	var_26_object = var_28_object; // 0x4f7 Mov
	return 2; // 0x4f8 Return
}


func_629(var_0_bool, var_1_object, var_2_object, var_3_object, var_286_object, var_287_object)
{
	var_0_bool = var_287_object; // 0x276 TMov
	var_1_object = var_286_object; // 0x277 TMov
	var_3_object = 0; // 0x278 TMovB
	var_292_int = 1; // 0x279 PushI
	if(var_292_int == 0) goto Label_657; // 0x27a JumpB
	var_293_string = ""; // 0x27b PushV
	var_293_string = "Neutral"; // 0x27c MovS
	func_687(var_287_object, var_293_string); // 0x27d NEW_2
	var_301_int = 525391; // 0x27f PushI
	SetMessage(var_301_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_302_int = 525392; // 0x284 PushI
	var_303_int = -1; // 0x285 PushI
	var_304_int = 26760; // 0x286 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x287 TObjFunc
	var_305_int = 539025; // 0x289 PushI
	var_306_int = -1; // 0x28a PushI
	var_307_int = 40968; // 0x28b PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x28c TObjFunc
	goto Label_657; // 0x28e Jump
	
Label_657:
	var_308_bool = 0; // 0x291 PushV
	func_1483(var_308_bool); // 0x292 NEW_2
	if(var_308_bool == 0) goto Label_672; // 0x294 JumpB
	
Label_661:
	lshWaitForAnimEnd(); // 0x295 Func
	var_309_object = var_3_object; // 0x297 PushT
	if(var_309_object == 0) goto Label_666; // 0x298 JumpB
	goto Label_671; // 0x299 Jump
	
Label_671:
	goto Label_686; // 0x29f Jump
	
Label_686:
	return 0; // 0x2ae Return
	
Label_666:
	var_310_string = ""; // 0x29a PushV
	var_310_string = var_2_object; // 0x29b MovT
	func_1219(var_310_string); // 0x29c NEW_2
	goto Label_661; // 0x29e Jump
	
Label_672:
	var_311_string = "all"; // 0x2a0 PushS
	var_312_string = "idle"; // 0x2a1 PushS
	PlayAnimation(var_311_string, var_312_string); // 0x2a2 Func
	
Label_676:
	WaitForAnimEnd(); // 0x2a4 Func
	var_313_object = var_3_object; // 0x2a6 PushT
	if(var_313_object == 0) goto Label_681; // 0x2a7 JumpB
	goto Label_686; // 0x2a8 Jump
	
Label_681:
	var_314_string = "all"; // 0x2a9 PushS
	var_315_string = "idle"; // 0x2aa PushS
	PlayAnimation(var_314_string, var_315_string); // 0x2ab Func
	goto Label_676; // 0x2ad Jump
}


func_248(var_2_object, var_139_string)
{
	var_140_bool = 0; // 0xf9 PushV
	func_1483(var_140_bool); // 0xfa NEW_2
	var_141_bool = var_140_bool == 0; // 0xfc Not
	if(var_141_bool == 0) goto Label_255; // 0xfd JumpB
	return 0; // 0xfe Return
	
Label_255:
	var_142_bool = var_139_string == var_2_object; // 0xff Eq
	if(var_142_bool == 0) goto Label_258; // 0x100 JumpB
	return 0; // 0x101 Return
	
Label_258:
	var_143_string = ""; var_144_bool = 0; // 0x102 PushV
	var_143_string = var_139_string; // 0x103 Mov
	var_145_string = ""; // 0x104 PushS
	var_146_bool = var_139_string == var_145_string; // 0x105 Eq
	if(var_146_bool == 0) goto Label_265; // 0x106 JumpB
	var_144_bool = 0; // 0x107 MovB
	goto Label_266; // 0x108 Jump
	
Label_266:
	func_1235(var_143_string, var_144_bool); // 0x10a NEW_2
	var_2_object = var_139_string; // 0x10c TMov
	return 0; // 0x10d Return
	
Label_265:
	var_144_bool = 1; // 0x109 MovB
}


func_1274(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x4fa PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x4fb Or
	var_73_float = sqrt(var_74_int); // 0x4fc Sqrt2
	var_75_float = 0.0; // 0x4fd PushF
	var_76_bool = var_73_float < var_75_float; // 0x4fe LT
	if(var_76_bool == 0) goto Label_1282; // 0x4ff JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x500 MovV
	return 2; // 0x501 Return
	
Label_1282:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x502 Div2
	return 2; // 0x503 Return
}


func_1148()
{
	var_213_bool = 0; var_214_bool = 0; // 0x47c PushV
	var_215_bool = 1; // 0x47d PushB
	CameraSwitchToNormal(var_215_bool); // 0x47e Func
	var_216_bool = 0; // 0x480 PushV
	func_1483(var_216_bool); // 0x481 NEW_2
	if(var_216_bool == 0) goto Label_1157; // 0x483 JumpB
	goto Label_1165; // 0x484 Jump
	
Label_1165:
	return 2; // 0x48d Return
	
Label_1157:
	var_217_string = "head"; // 0x485 PushS
	HasAnimationTrack(var_214_bool, var_217_string); // 0x486 Func
	var_218_bool = var_214_bool; // 0x488 Push
	if(var_218_bool == 0) goto Label_1165; // 0x489 JumpB
	var_219_string = "head"; // 0x48a PushS
	UnlookAsync(var_219_string); // 0x48b Func
}


func_1406()
{
	var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; // 0x57e PushV
	var_29_int = 0; // 0x57f PushI
	ClearSubContainer(var_29_int); // 0x580 Func
	var_30_int = 15; // 0x582 PushI
	irand(var_28_int, var_30_int); // 0x583 Func
	var_31_int = 5; // 0x585 PushI
	var_28_int = var_28_int + var_31_int; // 0x586 Add2
	var_32_int = 0; var_33_string = ""; // 0x587 PushV
	var_33_string = "grass_black_tvir"; // 0x588 MovS
	func_1447(var_32_int, var_33_string); // 0x589 NEW_2
	var_36_int = 0; // 0x58b PushI
	AddItem(var_27_bool, var_32_int, var_36_int, var_28_int); // 0x58c Func
	var_37_int = 15; // 0x58e PushI
	irand(var_28_int, var_37_int); // 0x58f Func
	var_38_int = 5; // 0x591 PushI
	var_28_int = var_28_int + var_38_int; // 0x592 Add2
	var_39_int = 0; var_40_string = ""; // 0x593 PushV
	var_40_string = "grass_blood_tvir"; // 0x594 MovS
	func_1447(var_39_int, var_40_string); // 0x595 NEW_2
	var_41_int = 0; // 0x597 PushI
	AddItem(var_27_bool, var_39_int, var_41_int, var_28_int); // 0x598 Func
	var_42_int = 15; // 0x59a PushI
	irand(var_28_int, var_42_int); // 0x59b Func
	var_43_int = 5; // 0x59d PushI
	var_28_int = var_28_int + var_43_int; // 0x59e Add2
	var_44_int = 0; var_45_string = ""; // 0x59f PushV
	var_45_string = "grass_brown_tvir"; // 0x5a0 MovS
	func_1447(var_44_int, var_45_string); // 0x5a1 NEW_2
	var_46_int = 0; // 0x5a3 PushI
	AddItem(var_27_bool, var_44_int, var_46_int, var_28_int); // 0x5a4 Func
	return 4; // 0x5a6 Return
}


