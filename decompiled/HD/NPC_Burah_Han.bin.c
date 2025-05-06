task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa2 PushI
	if(var_23_int == 0) goto Label_225; // 0xa3 JumpB
	func_1792(); // 0xa5 NEW_2
	var_25_int = 19142; // 0xa7 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa8 Eq
	if(var_26_bool == 0) goto Label_190; // 0xa9 JumpB
	var_27_string = ""; // 0xaa PushV
	var_27_string = "Neutral"; // 0xab MovS
	func_139(var_22_cvector, var_27_string); // 0xac NEW_2
	var_44_int = 518009; // 0xae PushI
	SetMessage(var_44_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_45_int = 518010; // 0xb3 PushI
	var_46_int = 32920; // 0xb4 PushI
	var_47_int = 19143; // 0xb5 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb6 TObjFunc
	var_48_int = 531560; // 0xb8 PushI
	var_49_int = -1; // 0xb9 PushI
	var_50_int = 32919; // 0xba PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_51_int = 32920; // 0xbe PushI
	var_52_bool = var_21_bool == var_51_int; // 0xbf Eq
	if(var_52_bool == 0) goto Label_213; // 0xc0 JumpB
	var_53_string = ""; // 0xc1 PushV
	var_53_string = "Neutral"; // 0xc2 MovS
	func_139(var_22_cvector, var_53_string); // 0xc3 NEW_2
	var_54_int = 531561; // 0xc5 PushI
	SetMessage(var_54_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_55_int = 531562; // 0xca PushI
	var_56_int = -1; // 0xcb PushI
	var_57_int = 32921; // 0xcc PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xcd TObjFunc
	var_58_int = 531563; // 0xcf PushI
	var_59_int = -1; // 0xd0 PushI
	var_60_int = 32922; // 0xd1 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_61_bool = 0; // 0xd6 PushV
	func_1879(var_61_bool); // 0xd7 NEW_2
	if(var_61_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x196 PushI
	if(var_23_int == 0) goto Label_677; // 0x197 JumpB
	func_1792(); // 0x199 NEW_2
	var_25_int = 32444; // 0x19b PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x19c Eq
	if(var_26_bool == 0) goto Label_419; // 0x19d JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x19e PushV
	var_27_object = var_1_object; // 0x19f MovT
	var_28_object = var_0_object; // 0x1a0 MovT
	func_1881(); // 0x1a1 NEW_2
	
Label_419:
	var_54_int = 32756; // 0x1a3 PushI
	var_55_bool = var_22_cvector == var_54_int; // 0x1a4 Eq
	if(var_55_bool == 0) goto Label_427; // 0x1a5 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x1a6 PushV
	var_56_object = var_1_object; // 0x1a7 MovT
	var_57_object = var_0_object; // 0x1a8 MovT
	func_1881(); // 0x1a9 NEW_2
	
Label_427:
	var_58_int = 32750; // 0x1ab PushI
	var_59_bool = var_22_cvector == var_58_int; // 0x1ac Eq
	if(var_59_bool == 0) goto Label_435; // 0x1ad JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0x1ae PushV
	var_60_object = var_1_object; // 0x1af MovT
	var_61_object = var_0_object; // 0x1b0 MovT
	func_1890(); // 0x1b1 NEW_2
	
Label_435:
	var_76_int = 32441; // 0x1b3 PushI
	var_77_bool = var_21_bool == var_76_int; // 0x1b4 Eq
	if(var_77_bool == 0) goto Label_483; // 0x1b5 JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x1b6 PushV
	var_79_object = var_1_object; // 0x1b7 MovT
	func_1906(var_79_object); // 0x1b8 NEW_2
	if(var_78_bool == 0) goto Label_463; // 0x1ba JumpB
	var_86_string = ""; // 0x1bb PushV
	var_86_string = "Questioning"; // 0x1bc MovS
	func_383(var_22_cvector, var_86_string); // 0x1bd NEW_2
	var_103_int = 531123; // 0x1bf PushI
	SetMessage(var_103_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_104_int = 531124; // 0x1c4 PushI
	var_105_int = 32443; // 0x1c5 PushI
	var_106_int = 32442; // 0x1c6 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x1c7 TObjFunc
	var_107_int = 531403; // 0x1c9 PushI
	var_108_int = 32745; // 0x1ca PushI
	var_109_int = 32744; // 0x1cb PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_110_string = ""; // 0x1cf PushV
	var_110_string = "Neutral"; // 0x1d0 MovS
	func_383(var_22_cvector, var_110_string); // 0x1d1 NEW_2
	var_111_int = 531127; // 0x1d3 PushI
	SetMessage(var_111_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_112_int = 531128; // 0x1d8 PushI
	var_113_int = -1; // 0x1d9 PushI
	var_114_int = 32446; // 0x1da PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x1db TObjFunc
	var_115_int = 531398; // 0x1dd PushI
	var_116_int = -1; // 0x1de PushI
	var_117_int = 32739; // 0x1df PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x1e0 TObjFunc
	return 0; // 0x1e2 Return
	
Label_483:
	var_118_int = 32745; // 0x1e3 PushI
	var_119_bool = var_21_bool == var_118_int; // 0x1e4 Eq
	if(var_119_bool == 0) goto Label_506; // 0x1e5 JumpB
	var_120_string = ""; // 0x1e6 PushV
	var_120_string = "Grin"; // 0x1e7 MovS
	func_383(var_22_cvector, var_120_string); // 0x1e8 NEW_2
	var_121_int = 531404; // 0x1ea PushI
	SetMessage(var_121_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_122_int = 531405; // 0x1ef PushI
	var_123_int = 32749; // 0x1f0 PushI
	var_124_int = 32746; // 0x1f1 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x1f2 TObjFunc
	var_125_int = 531406; // 0x1f4 PushI
	var_126_int = 32443; // 0x1f5 PushI
	var_127_int = 32747; // 0x1f6 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_128_int = 32443; // 0x1fa PushI
	var_129_bool = var_21_bool == var_128_int; // 0x1fb Eq
	if(var_129_bool == 0) goto Label_524; // 0x1fc JumpB
	var_130_string = ""; // 0x1fd PushV
	var_130_string = "Suspicion"; // 0x1fe MovS
	func_383(var_22_cvector, var_130_string); // 0x1ff NEW_2
	var_131_int = 531125; // 0x201 PushI
	SetMessage(var_131_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_132_int = 531399; // 0x206 PushI
	var_133_int = 32741; // 0x207 PushI
	var_134_int = 32740; // 0x208 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_135_int = 32741; // 0x20c PushI
	var_136_bool = var_21_bool == var_135_int; // 0x20d Eq
	if(var_136_bool == 0) goto Label_547; // 0x20e JumpB
	var_137_string = ""; // 0x20f PushV
	var_137_string = "Suspicion"; // 0x210 MovS
	func_383(var_22_cvector, var_137_string); // 0x211 NEW_2
	var_138_int = 531400; // 0x213 PushI
	SetMessage(var_138_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_139_int = 531401; // 0x218 PushI
	var_140_int = 32757; // 0x219 PushI
	var_141_int = 32742; // 0x21a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x21b TObjFunc
	var_142_int = 531407; // 0x21d PushI
	var_143_int = 32749; // 0x21e PushI
	var_144_int = 32748; // 0x21f PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_145_int = 32749; // 0x223 PushI
	var_146_bool = var_21_bool == var_145_int; // 0x224 Eq
	if(var_146_bool == 0) goto Label_565; // 0x225 JumpB
	var_147_string = ""; // 0x226 PushV
	var_147_string = "Questioning"; // 0x227 MovS
	func_383(var_22_cvector, var_147_string); // 0x228 NEW_2
	var_148_int = 531408; // 0x22a PushI
	SetMessage(var_148_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_149_int = 531409; // 0x22f PushI
	var_150_int = -1; // 0x230 PushI
	var_151_int = 32750; // 0x231 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_152_int = 32757; // 0x235 PushI
	var_153_bool = var_21_bool == var_152_int; // 0x236 Eq
	if(var_153_bool == 0) goto Label_588; // 0x237 JumpB
	var_154_string = ""; // 0x238 PushV
	var_154_string = "Doubt"; // 0x239 MovS
	func_383(var_22_cvector, var_154_string); // 0x23a NEW_2
	var_155_int = 531415; // 0x23c PushI
	SetMessage(var_155_int); // 0x23d TObjFunc
	ClearReplies(); // 0x23f TObjFunc
	var_156_int = 531417; // 0x241 PushI
	var_157_int = 32760; // 0x242 PushI
	var_158_int = 32759; // 0x243 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x244 TObjFunc
	var_159_int = 531416; // 0x246 PushI
	var_160_int = 32743; // 0x247 PushI
	var_161_int = 32758; // 0x248 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x249 TObjFunc
	return 0; // 0x24b Return
	
Label_588:
	var_162_int = 32743; // 0x24c PushI
	var_163_bool = var_21_bool == var_162_int; // 0x24d Eq
	if(var_163_bool == 0) goto Label_611; // 0x24e JumpB
	var_164_string = ""; // 0x24f PushV
	var_164_string = "Grin"; // 0x250 MovS
	func_383(var_22_cvector, var_164_string); // 0x251 NEW_2
	var_165_int = 531402; // 0x253 PushI
	SetMessage(var_165_int); // 0x254 TObjFunc
	ClearReplies(); // 0x256 TObjFunc
	var_166_int = 531126; // 0x258 PushI
	var_167_int = -1; // 0x259 PushI
	var_168_int = 32444; // 0x25a PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x25b TObjFunc
	var_169_int = 531410; // 0x25d PushI
	var_170_int = 32753; // 0x25e PushI
	var_171_int = 32752; // 0x25f PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x260 TObjFunc
	return 0; // 0x262 Return
	
Label_611:
	var_172_int = 32753; // 0x263 PushI
	var_173_bool = var_21_bool == var_172_int; // 0x264 Eq
	if(var_173_bool == 0) goto Label_629; // 0x265 JumpB
	var_174_string = ""; // 0x266 PushV
	var_174_string = "Neutral"; // 0x267 MovS
	func_383(var_22_cvector, var_174_string); // 0x268 NEW_2
	var_175_int = 531411; // 0x26a PushI
	SetMessage(var_175_int); // 0x26b TObjFunc
	ClearReplies(); // 0x26d TObjFunc
	var_176_int = 531412; // 0x26f PushI
	var_177_int = 32755; // 0x270 PushI
	var_178_int = 32754; // 0x271 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x272 TObjFunc
	return 0; // 0x274 Return
	
Label_629:
	var_179_int = 32755; // 0x275 PushI
	var_180_bool = var_21_bool == var_179_int; // 0x276 Eq
	if(var_180_bool == 0) goto Label_647; // 0x277 JumpB
	var_181_string = ""; // 0x278 PushV
	var_181_string = "Grin"; // 0x279 MovS
	func_383(var_22_cvector, var_181_string); // 0x27a NEW_2
	var_182_int = 531413; // 0x27c PushI
	SetMessage(var_182_int); // 0x27d TObjFunc
	ClearReplies(); // 0x27f TObjFunc
	var_183_int = 531414; // 0x281 PushI
	var_184_int = -1; // 0x282 PushI
	var_185_int = 32756; // 0x283 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x284 TObjFunc
	return 0; // 0x286 Return
	
Label_647:
	var_186_int = 32760; // 0x287 PushI
	var_187_bool = var_21_bool == var_186_int; // 0x288 Eq
	if(var_187_bool == 0) goto Label_665; // 0x289 JumpB
	var_188_string = ""; // 0x28a PushV
	var_188_string = "Doubt"; // 0x28b MovS
	func_383(var_22_cvector, var_188_string); // 0x28c NEW_2
	var_189_int = 531418; // 0x28e PushI
	SetMessage(var_189_int); // 0x28f TObjFunc
	ClearReplies(); // 0x291 TObjFunc
	var_190_int = 531419; // 0x293 PushI
	var_191_int = 32743; // 0x294 PushI
	var_192_int = 32761; // 0x295 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x296 TObjFunc
	return 0; // 0x298 Return
	
Label_665:
	var_3_string = 1; // 0x299 TMovB
	var_193_bool = 0; // 0x29a PushV
	func_1879(var_193_bool); // 0x29b NEW_2
	if(var_193_bool == 0) goto Label_673; // 0x29d JumpB
	lshStopAnimation(); // 0x29e Func
	goto Label_675; // 0x2a0 Jump
	
Label_675:
	return 0; // 0x2a3 Return
	
Label_673:
	StopAnimation(); // 0x2a1 Func
	
Label_677:
	return 0; // 0x2a5 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x34d PushI
	if(var_23_int == 0) goto Label_1026; // 0x34e JumpB
	func_1792(); // 0x350 NEW_2
	var_25_int = 36944; // 0x352 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x353 Eq
	if(var_26_bool == 0) goto Label_858; // 0x354 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x355 PushV
	var_27_object = var_1_object; // 0x356 MovT
	var_28_object = var_0_object; // 0x357 MovT
	func_1900(); // 0x358 NEW_2
	
Label_858:
	var_31_int = 36943; // 0x35a PushI
	var_32_bool = var_21_bool == var_31_int; // 0x35b Eq
	if(var_32_bool == 0) goto Label_886; // 0x35c JumpB
	var_33_string = ""; // 0x35d PushV
	var_33_string = "Doubt"; // 0x35e MovS
	func_822(var_22_cvector, var_33_string); // 0x35f NEW_2
	var_50_int = 535268; // 0x361 PushI
	SetMessage(var_50_int); // 0x362 TObjFunc
	ClearReplies(); // 0x364 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0x366 PushV
	var_52_object = var_1_object; // 0x367 MovT
	func_1918(var_52_object); // 0x368 NEW_2
	if(var_51_bool == 0) goto Label_880; // 0x36a JumpB
	var_59_int = 535269; // 0x36b PushI
	var_60_int = 37004; // 0x36c PushI
	var_61_int = 36944; // 0x36d PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x36e TObjFunc
	
Label_880:
	var_62_int = 535322; // 0x370 PushI
	var_63_int = -1; // 0x371 PushI
	var_64_int = 37003; // 0x372 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x373 TObjFunc
	return 0; // 0x375 Return
	
Label_886:
	var_65_int = 37004; // 0x376 PushI
	var_66_bool = var_21_bool == var_65_int; // 0x377 Eq
	if(var_66_bool == 0) goto Label_909; // 0x378 JumpB
	var_67_string = ""; // 0x379 PushV
	var_67_string = "Doubt"; // 0x37a MovS
	func_822(var_22_cvector, var_67_string); // 0x37b NEW_2
	var_68_int = 535323; // 0x37d PushI
	SetMessage(var_68_int); // 0x37e TObjFunc
	ClearReplies(); // 0x380 TObjFunc
	var_69_int = 535325; // 0x382 PushI
	var_70_int = 37007; // 0x383 PushI
	var_71_int = 37006; // 0x384 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x385 TObjFunc
	var_72_int = 535324; // 0x387 PushI
	var_73_int = 37008; // 0x388 PushI
	var_74_int = 37005; // 0x389 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x38a TObjFunc
	return 0; // 0x38c Return
	
Label_909:
	var_75_int = 37008; // 0x38d PushI
	var_76_bool = var_21_bool == var_75_int; // 0x38e Eq
	if(var_76_bool == 0) goto Label_932; // 0x38f JumpB
	var_77_string = ""; // 0x390 PushV
	var_77_string = "Grin"; // 0x391 MovS
	func_822(var_22_cvector, var_77_string); // 0x392 NEW_2
	var_78_int = 535327; // 0x394 PushI
	SetMessage(var_78_int); // 0x395 TObjFunc
	ClearReplies(); // 0x397 TObjFunc
	var_79_int = 535328; // 0x399 PushI
	var_80_int = 37015; // 0x39a PushI
	var_81_int = 37009; // 0x39b PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x39c TObjFunc
	var_82_int = 535329; // 0x39e PushI
	var_83_int = 37011; // 0x39f PushI
	var_84_int = 37010; // 0x3a0 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x3a1 TObjFunc
	return 0; // 0x3a3 Return
	
Label_932:
	var_85_int = 37011; // 0x3a4 PushI
	var_86_bool = var_21_bool == var_85_int; // 0x3a5 Eq
	if(var_86_bool == 0) goto Label_950; // 0x3a6 JumpB
	var_87_string = ""; // 0x3a7 PushV
	var_87_string = "Grin"; // 0x3a8 MovS
	func_822(var_22_cvector, var_87_string); // 0x3a9 NEW_2
	var_88_int = 535330; // 0x3ab PushI
	SetMessage(var_88_int); // 0x3ac TObjFunc
	ClearReplies(); // 0x3ae TObjFunc
	var_89_int = 535331; // 0x3b0 PushI
	var_90_int = 37007; // 0x3b1 PushI
	var_91_int = 37012; // 0x3b2 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x3b3 TObjFunc
	return 0; // 0x3b5 Return
	
Label_950:
	var_92_int = 37015; // 0x3b6 PushI
	var_93_bool = var_21_bool == var_92_int; // 0x3b7 Eq
	if(var_93_bool == 0) goto Label_973; // 0x3b8 JumpB
	var_94_string = ""; // 0x3b9 PushV
	var_94_string = "Grin"; // 0x3ba MovS
	func_822(var_22_cvector, var_94_string); // 0x3bb NEW_2
	var_95_int = 535334; // 0x3bd PushI
	SetMessage(var_95_int); // 0x3be TObjFunc
	ClearReplies(); // 0x3c0 TObjFunc
	var_96_int = 535336; // 0x3c2 PushI
	var_97_int = -1; // 0x3c3 PushI
	var_98_int = 37017; // 0x3c4 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x3c5 TObjFunc
	var_99_int = 535335; // 0x3c7 PushI
	var_100_int = -1; // 0x3c8 PushI
	var_101_int = 37016; // 0x3c9 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x3ca TObjFunc
	return 0; // 0x3cc Return
	
Label_973:
	var_102_int = 37007; // 0x3cd PushI
	var_103_bool = var_21_bool == var_102_int; // 0x3ce Eq
	if(var_103_bool == 0) goto Label_991; // 0x3cf JumpB
	var_104_string = ""; // 0x3d0 PushV
	var_104_string = "Questioning"; // 0x3d1 MovS
	func_822(var_22_cvector, var_104_string); // 0x3d2 NEW_2
	var_105_int = 535326; // 0x3d4 PushI
	SetMessage(var_105_int); // 0x3d5 TObjFunc
	ClearReplies(); // 0x3d7 TObjFunc
	var_106_int = 535332; // 0x3d9 PushI
	var_107_int = 37014; // 0x3da PushI
	var_108_int = 37013; // 0x3db PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x3dc TObjFunc
	return 0; // 0x3de Return
	
Label_991:
	var_109_int = 37014; // 0x3df PushI
	var_110_bool = var_21_bool == var_109_int; // 0x3e0 Eq
	if(var_110_bool == 0) goto Label_1014; // 0x3e1 JumpB
	var_111_string = ""; // 0x3e2 PushV
	var_111_string = "Questioning"; // 0x3e3 MovS
	func_822(var_22_cvector, var_111_string); // 0x3e4 NEW_2
	var_112_int = 535333; // 0x3e6 PushI
	SetMessage(var_112_int); // 0x3e7 TObjFunc
	ClearReplies(); // 0x3e9 TObjFunc
	var_113_int = 535337; // 0x3eb PushI
	var_114_int = -1; // 0x3ec PushI
	var_115_int = 37019; // 0x3ed PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x3ee TObjFunc
	var_116_int = 535338; // 0x3f0 PushI
	var_117_int = -1; // 0x3f1 PushI
	var_118_int = 37020; // 0x3f2 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x3f3 TObjFunc
	return 0; // 0x3f5 Return
	
Label_1014:
	var_3_string = 1; // 0x3f6 TMovB
	var_119_bool = 0; // 0x3f7 PushV
	func_1879(var_119_bool); // 0x3f8 NEW_2
	if(var_119_bool == 0) goto Label_1022; // 0x3fa JumpB
	lshStopAnimation(); // 0x3fb Func
	goto Label_1024; // 0x3fd Jump
	
Label_1024:
	return 0; // 0x400 Return
	
Label_1022:
	StopAnimation(); // 0x3fe Func
	
Label_1026:
	return 0; // 0x402 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x4a5 PushI
	if(var_23_int == 0) goto Label_1229; // 0x4a6 JumpB
	func_1792(); // 0x4a8 NEW_2
	var_25_int = 42563; // 0x4aa PushI
	var_26_bool = var_21_int == var_25_int; // 0x4ab Eq
	if(var_26_bool == 0) goto Label_1217; // 0x4ac JumpB
	var_27_string = ""; // 0x4ad PushV
	var_27_string = "Neutral"; // 0x4ae MovS
	func_1166(var_22_cvector, var_27_string); // 0x4af NEW_2
	var_44_int = 540554; // 0x4b1 PushI
	SetMessage(var_44_int); // 0x4b2 TObjFunc
	ClearReplies(); // 0x4b4 TObjFunc
	var_45_int = 540555; // 0x4b6 PushI
	var_46_int = -1; // 0x4b7 PushI
	var_47_int = 42564; // 0x4b8 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x4b9 TObjFunc
	var_48_int = 540794; // 0x4bb PushI
	var_49_int = -1; // 0x4bc PushI
	var_50_int = 42843; // 0x4bd PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x4be TObjFunc
	return 0; // 0x4c0 Return
	
Label_1217:
	var_3_string = 1; // 0x4c1 TMovB
	var_51_bool = 0; // 0x4c2 PushV
	func_1879(var_51_bool); // 0x4c3 NEW_2
	if(var_51_bool == 0) goto Label_1225; // 0x4c5 JumpB
	lshStopAnimation(); // 0x4c6 Func
	goto Label_1227; // 0x4c8 Jump
	
Label_1227:
	return 0; // 0x4cb Return
	
Label_1225:
	StopAnimation(); // 0x4c9 Func
	
Label_1229:
	return 0; // 0x4cd Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x51b PushI
	var_23_bool = var_21_int == var_22_int; // 0x51c Eq
	if(var_23_bool == 0) goto Label_1343; // 0x51d JumpB
	func_1302(); // 0x51f NEW_2
	var_25_bool = 0; // 0x521 PushV
	var_25_bool = 0; // 0x522 MovB
	var_26_bool = 0; // 0x523 PushV
	func_1516(var_26_bool); // 0x524 NEW_2
	if(var_26_bool == 0) goto Label_1324; // 0x526 JumpB
	var_29_bool = 0; // 0x527 PushV
	func_1271(var_29_bool); // 0x528 NEW_2
	if(var_29_bool == 0) goto Label_1324; // 0x52a JumpB
	var_25_bool = 1; // 0x52b MovB
	
Label_1324:
	if(var_25_bool == 0) goto Label_1337; // 0x52c JumpB
	var_46_bool = 0; // 0x52d PushV
	func_1251(var_46_bool); // 0x52e NEW_2
	if(var_46_bool == 0) goto Label_1336; // 0x530 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x531 PushV
	var_67_object = Obj(); // 0x532 PushV
	func_1799(var_67_object); // 0x533 NEW_2
	var_66_object = var_67_object; // 0x534 Mov
	func_1666(var_66_object); // 0x536 NEW_2
	
Label_1336:
	goto Label_1343; // 0x538 Jump
	
Label_1343:
	return 0; // 0x53f Return
	
Label_1337:
	func_1266(var_21_int); // 0x53a NEW_2
	func_1293(); // 0x53d NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1484(); // 0x541 NEW_2
	func_1302(); // 0x544 NEW_2
	lshStopSpeech(); // 0x546 Func
	lshStopAnimation(); // 0x548 Func
	StopAsync(); // 0x54a Func
	Hold(); // 0x54c Func
	return 0; // 0x54e Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x54f Func
	func_1302(); // 0x552 NEW_2
	var_22_string = ""; // 0x554 PushV
	var_22_string = "Neutral"; // 0x555 MovS
	func_1746(var_22_string); // 0x556 NEW_2
	func_1293(); // 0x559 NEW_2
	return 0; // 0x55b Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x55d Push
	if(var_22_bool == 0) goto Label_1379; // 0x55e JumpB
	func_1293(); // 0x560 NEW_2
	goto Label_1383; // 0x562 Jump
	
Label_1383:
	return 0; // 0x567 Return
	
Label_1379:
	var_28_string = ""; // 0x563 PushV
	var_28_string = "Neutral"; // 0x564 MovS
	func_1746(var_28_string); // 0x565 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x568 PushV
	IsOverrideActive(var_23_bool); // 0x569 Func
	var_24_bool = var_23_bool == 0; // 0x56b Not
	if(var_24_bool == 0) goto Label_1412; // 0x56c JumpB
	EventDisable(0); // 0x56d EventDisable
	func_1484(); // 0x56f NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x571 PushV
	var_26_object = var_21_object; // 0x572 Mov
	func_1507(var_26_object); // 0x573 NEW_2
	EventEnable(0); // 0x575 EventEnable
	var_39_object = Obj(); // 0x576 PushV
	var_39_object = var_21_object; // 0x577 Mov
	func_2014(var_39_object); // 0x578 NEW_2
	var_460_string = ""; // 0x57a PushV
	var_460_string = "Neutral"; // 0x57b MovS
	func_1746(var_460_string); // 0x57c NEW_2
	func_1302(); // 0x57f NEW_2
	func_1293(); // 0x582 NEW_2
	
Label_1412:
	return 2; // 0x584 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x4ce PushGE
	var_21_bool = 0; // 0x4cf MovB
	GlobalVars[1] = var_21_bool; // 0x4d0 PopGE
	func_1237(var_20_cvector); // 0x4d2 NEW_2
	return 0; // 0x4d4 Return
}


func_1792()
{
	var_24_bool = 0; // 0x700 PushV
	func_1879(var_24_bool); // 0x701 NEW_2
	if(var_24_bool == 0) goto Label_1798; // 0x703 JumpB
	lshStopSpeech(); // 0x704 Func
	
Label_1798:
	return 0; // 0x706 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_1521(var_54_object, var_55_float); // 0x5 NEW_2
	var_100_bool = var_53_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_1873(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_1871(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_1875(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_1877(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_1997(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_113_bool = var_50_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_114_bool = 0; var_115_object = Obj(); // 0x2f PushV
	var_116_object = Obj(); // 0x30 PushV
	func_1799(var_116_object); // 0x31 NEW_2
	var_115_object = var_116_object; // 0x32 Mov
	func_1608(var_114_bool, var_115_object); // 0x34 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x36 PushV
	var_209_object = var_43_object; // 0x37 Mov
	var_210_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_258_bool = var_52_bool == 0; // 0x3f Not
	if(var_258_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_259_object = Obj(); // 0x46 PushV
	var_259_object = var_43_object; // 0x47 Mov
	func_1590(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1666(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x682 PushV
	var_132_string = "c"; // 0x683 MovS
	var_133_int = 0; // 0x684 MovI
	
Label_1669:
	var_137_int = 1; // 0x685 PushI
	if(var_137_int == 0) goto Label_1682; // 0x686 JumpB
	var_138_int = 1; // 0x687 PushI
	var_139_int = var_133_int + var_138_int; // 0x688 Add
	var_140_int = var_132_string + var_139_int; // 0x689 Add
	HasProperty(var_140_int, var_134_bool); // 0x68a ObjFunc
	var_141_bool = var_134_bool == 0; // 0x68c Not
	if(var_141_bool == 0) goto Label_1679; // 0x68d JumpB
	goto Label_1682; // 0x68e Jump
	
Label_1682:
	var_142_bool = var_133_int == 0; // 0x692 Not
	if(var_142_bool == 0) goto Label_1686; // 0x693 JumpB
	var_125_bool = 0; // 0x694 MovB
	return 10; // 0x695 Return
	
Label_1686:
	var_135_int = 0; // 0x696 MovI
	var_143_int = 1; // 0x697 PushI
	var_144_bool = var_133_int > var_143_int; // 0x698 GT
	if(var_144_bool == 0) goto Label_1692; // 0x699 JumpB
	irand(var_135_int, var_133_int); // 0x69a Func
	
Label_1692:
	var_145_int = 1; // 0x69c PushI
	var_146_int = var_135_int + var_145_int; // 0x69d Add
	var_147_int = var_132_string + var_146_int; // 0x69e Add
	GetProperty(var_147_int, var_136_string); // 0x69f ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x6a1 PushV
	var_149_string = var_136_string; // 0x6a2 Mov
	func_1777(var_148_bool, var_149_string); // 0x6a3 NEW_2
	var_125_bool = var_148_bool; // 0x6a4 Mov
	return 10; // 0x6a6 Return
	
Label_1679:
	var_154_int = 1; // 0x68f PushI
	var_133_int = var_133_int + var_154_int; // 0x690 Add2
	goto Label_1669; // 0x691 Jump
}


func_1027(var_0_object, var_404_int, var_405_object)
{
	var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; var_411_object = Obj(); var_412_bool = 0; var_413_int = 0; var_414_bool = 0; // 0x403 PushV
	var_0_object = var_405_object; // 0x404 TMov
	var_415_bool = 0; var_416_object = Obj(); var_417_float = 0; // 0x405 PushV
	var_416_object = var_405_object; // 0x406 Mov
	var_417_float = 70.0; // 0x407 MovF
	func_1521(var_416_object, var_417_float); // 0x408 NEW_2
	var_418_bool = var_415_bool == 0; // 0x40a Not
	if(var_418_bool == 0) goto Label_1038; // 0x40b JumpB
	var_404_int = -2; // 0x40c MovI
	return 8; // 0x40d Return
	
Label_1038:
	CreateDialog(var_411_object); // 0x40e Func
	var_419_int = 0; // 0x410 PushV
	func_1873(var_419_int); // 0x411 NEW_2
	SetNPCName(var_419_int); // 0x413 ObjFunc
	var_420_int = 0; // 0x415 PushV
	func_1871(var_420_int); // 0x416 NEW_2
	SetNPCDescription(var_420_int); // 0x418 ObjFunc
	var_421_string = ""; // 0x41a PushV
	func_1875(var_421_string); // 0x41b NEW_2
	SetPhoto(var_421_string); // 0x41d ObjFunc
	var_422_string = ""; // 0x41f PushV
	func_1877(var_422_string); // 0x420 NEW_2
	SetPhoto2(var_422_string); // 0x422 ObjFunc
	var_423_int = 0; // 0x424 PushV
	func_1997(var_423_int); // 0x425 NEW_2
	SetPlayerName(var_423_int); // 0x427 ObjFunc
	var_413_int = -1; // 0x429 MovI
	IsOverrideActive(var_412_bool); // 0x42a Func
	var_424_bool = var_412_bool; // 0x42c Push
	if(var_424_bool == 0) goto Label_1072; // 0x42d JumpB
	var_404_int = -2; // 0x42e MovI
	return 8; // 0x42f Return
	
Label_1072:
	DoDialog(var_411_object); // 0x430 Func
	var_425_bool = 0; var_426_object = Obj(); // 0x432 PushV
	var_427_object = Obj(); // 0x433 PushV
	func_1799(var_427_object); // 0x434 NEW_2
	var_426_object = var_427_object; // 0x435 Mov
	func_1608(var_425_bool, var_426_object); // 0x437 NEW_2
	var_428_object = Obj(); var_429_object = Obj(); // 0x439 PushV
	var_428_object = var_405_object; // 0x43a Mov
	var_429_object = var_411_object; // 0x43b Mov
	TaskCall(7); // 0x43c TaskCall
	func_1108(var_430_object, var_431_object, var_432_string, var_433_bool, var_428_object, var_429_object); // 0x43d NEW_2
	TaskReturn(); // 0x43e TaskReturn
	IsDialogEnd(var_414_bool); // 0x440 ObjFunc
	
Label_1090:
	var_458_bool = var_414_bool == 0; // 0x442 Not
	if(var_458_bool == 0) goto Label_1097; // 0x443 JumpB
	sync(); // 0x444 Func
	IsDialogEnd(var_414_bool); // 0x446 ObjFunc
	goto Label_1090; // 0x448 Jump
	
Label_1097:
	var_459_object = Obj(); // 0x449 PushV
	var_459_object = var_405_object; // 0x44a Mov
	func_1590(); // 0x44b NEW_2
	StopDialog(var_411_object); // 0x44d Func
	GetReturnValue(var_413_int); // 0x44f ObjFunc
	var_404_int = var_413_int; // 0x451 Mov
	return 8; // 0x452 Return
}


func_1413()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x585 PushV
	WaitForAnimEnd(); // 0x586 Func
	var_38_bool = 0; // 0x588 PushV
	func_1516(var_38_bool); // 0x589 NEW_2
	var_39_bool = var_38_bool == 0; // 0x58b Not
	if(var_39_bool == 0) goto Label_1422; // 0x58c JumpB
	return 12; // 0x58d Return
	
Label_1422:
	var_40_int = 0; // 0x58e PushV
	func_1854(var_40_int); // 0x58f NEW_2
	var_32_int = var_40_int; // 0x590 Mov
	var_33_int = 0; // 0x592 MovI
	
Label_1427:
	var_53_bool = 0; // 0x593 PushV
	var_53_bool = 0; // 0x594 MovB
	var_54_int = 5; // 0x595 PushI
	var_55_bool = var_33_int < var_54_int; // 0x596 LT
	if(var_55_bool == 0) goto Label_1437; // 0x597 JumpB
	var_56_bool = 0; // 0x598 PushV
	func_1516(var_56_bool); // 0x599 NEW_2
	if(var_56_bool == 0) goto Label_1437; // 0x59b JumpB
	var_53_bool = 1; // 0x59c MovB
	
Label_1437:
	if(var_53_bool == 0) goto Label_1479; // 0x59d JumpB
	var_57_bool = var_32_int == 0; // 0x59e Not
	if(var_57_bool == 0) goto Label_1447; // 0x59f JumpB
	var_58_int = 3; // 0x5a0 PushI
	Sleep(var_58_int, var_34_bool); // 0x5a1 Func
	var_59_bool = var_34_bool == 0; // 0x5a3 Not
	if(var_59_bool == 0) goto Label_1446; // 0x5a4 JumpB
	goto Label_1479; // 0x5a5 Jump
	
Label_1479:
	ResetAAS(); // 0x5c7 Func
	return 12; // 0x5c9 Return
	
Label_1446:
	goto Label_1468; // 0x5a6 Jump
	
Label_1468:
	var_60_bool = 0; // 0x5bc PushV
	func_1482(var_60_bool); // 0x5bd NEW_2
	var_61_bool = var_60_bool == 0; // 0x5bf Not
	if(var_61_bool == 0) goto Label_1474; // 0x5c0 JumpB
	goto Label_1479; // 0x5c1 Jump
	
Label_1474:
	ResetAAS(); // 0x5c2 Func
	var_62_int = 1; // 0x5c4 PushI
	var_33_int = var_33_int + var_62_int; // 0x5c5 Add2
	goto Label_1427; // 0x5c6 Jump
	
Label_1447:
	irand(var_35_int, var_32_int); // 0x5a7 Func
	var_63_int = 5; // 0x5a9 PushI
	irand(var_36_int, var_63_int); // 0x5aa Func
	var_64_int = 0; // 0x5ac PushI
	var_65_bool = var_36_int != var_64_int; // 0x5ad Neq
	if(var_65_bool == 0) goto Label_1456; // 0x5ae JumpB
	var_35_int = 0; // 0x5af MovI
	
Label_1456:
	var_66_string = "all"; // 0x5b0 PushS
	var_67_string = ""; var_68_int = 0; // 0x5b1 PushV
	var_68_int = var_35_int; // 0x5b2 Mov
	func_1847(var_67_string, var_68_int); // 0x5b3 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x5b5 Func
	WaitForAnimEnd(var_37_bool); // 0x5b7 Func
	var_69_bool = var_37_bool == 0; // 0x5b9 Not
	if(var_69_bool == 0) goto Label_1468; // 0x5ba JumpB
	goto Label_1479; // 0x5bb Jump
}


func_1799(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x707 PushV
	self(var_118_object); // 0x708 Func
	var_116_object = var_118_object; // 0x70a Mov
	return 2; // 0x70b Return
}


func_1930()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x78a PushV
	var_64_int = 611; // 0x78b PushI
	var_65_int = 2; // 0x78c PushI
	var_66_int = 531506; // 0x78d PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x78e Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x790 PushV
	var_68_object = var_63_object; // 0x791 Mov
	var_69_int = 598; // 0x792 MovI
	func_1969(var_67_bool, var_68_object, var_69_int); // 0x793 NEW_2
	return 2; // 0x795 Return
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x8c PushV
	func_1879(var_217_bool); // 0x8d NEW_2
	var_218_bool = var_217_bool == 0; // 0x8f Not
	if(var_218_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_219_bool = var_216_string == var_2_object; // 0x92 Eq
	if(var_219_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_220_string = ""; var_221_bool = 0; // 0x95 PushV
	var_220_string = var_216_string; // 0x96 Mov
	var_222_string = ""; // 0x97 PushS
	var_223_bool = var_216_string == var_222_string; // 0x98 Eq
	if(var_223_bool == 0) goto Label_156; // 0x99 JumpB
	var_221_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1762(var_220_string, var_221_bool); // 0x9d NEW_2
	var_2_object = var_216_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_221_bool = 1; // 0x9c MovB
}


func_1293()
{
	var_462_float = 0; var_463_float = 0; // 0x50d PushV
	var_464_int = 8; // 0x50e PushI
	var_465_int = 16; // 0x50f PushI
	rand(var_463_float, var_464_int, var_465_int); // 0x510 Func
	var_466_int = 10; // 0x512 PushI
	SetTimer(var_466_int, var_463_float); // 0x513 Func
	return 2; // 0x515 Return
}


func_1166(var_2_object, var_435_string)
{
	var_436_bool = 0; // 0x48f PushV
	func_1879(var_436_bool); // 0x490 NEW_2
	var_437_bool = var_436_bool == 0; // 0x492 Not
	if(var_437_bool == 0) goto Label_1173; // 0x493 JumpB
	return 0; // 0x494 Return
	
Label_1173:
	var_438_bool = var_435_string == var_2_object; // 0x495 Eq
	if(var_438_bool == 0) goto Label_1176; // 0x496 JumpB
	return 0; // 0x497 Return
	
Label_1176:
	var_439_string = ""; var_440_bool = 0; // 0x498 PushV
	var_439_string = var_435_string; // 0x499 Mov
	var_441_string = ""; // 0x49a PushS
	var_442_bool = var_435_string == var_441_string; // 0x49b Eq
	if(var_442_bool == 0) goto Label_1183; // 0x49c JumpB
	var_440_bool = 0; // 0x49d MovB
	goto Label_1184; // 0x49e Jump
	
Label_1184:
	func_1762(var_439_string, var_440_bool); // 0x4a0 NEW_2
	var_2_object = var_435_string; // 0x4a2 TMov
	return 0; // 0x4a3 Return
	
Label_1183:
	var_440_bool = 1; // 0x49f MovB
}


func_1805(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x70d PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x70e Or
	var_84_float = sqrt(var_85_int); // 0x70f Sqrt2
	var_86_float = 0.0; // 0x710 PushF
	var_87_bool = var_84_float < var_86_float; // 0x711 LT
	if(var_87_bool == 0) goto Label_1813; // 0x712 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x713 MovV
	return 2; // 0x714 Return
	
Label_1813:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x715 Div2
	return 2; // 0x716 Return
}


func_1302()
{
	var_461_int = 10; // 0x516 PushI
	KillTimer(var_461_int); // 0x517 Func
	return 0; // 0x519 Return
}


func_1815(var_301_int, var_302_string)
{
	var_303_int = 0; var_304_int = 0; // 0x717 PushV
	GetVariable(var_302_string, var_304_int); // 0x718 Func
	var_301_int = var_304_int; // 0x71a Mov
	return 2; // 0x71b Return
}


func_1943()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x797 PushV
	var_33_int = 601; // 0x798 PushI
	var_34_int = 2; // 0x799 PushI
	var_35_int = 531152; // 0x79a PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x79b Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x79d PushV
	var_37_object = var_32_object; // 0x79e Mov
	var_38_int = 598; // 0x79f MovI
	func_1969(var_36_bool, var_37_object, var_38_int); // 0x7a0 NEW_2
	return 2; // 0x7a2 Return
}


func_1820(var_70_bool, var_71_string, var_72_string)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x71c PushV
	FindActor(var_74_object, var_71_string); // 0x71d Func
	var_75_bool = var_74_object == 0; // 0x71f NullEq
	if(var_75_bool == 0) goto Label_1827; // 0x720 JumpB
	var_70_bool = 0; // 0x721 MovB
	return 2; // 0x722 Return
	
Label_1827:
	Trigger(var_74_object, var_72_string); // 0x723 Func
	var_70_bool = 1; // 0x725 MovB
	return 2; // 0x726 Return
}


func_1956(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x7a4 PushV
	GetDiaryRoot(var_47_object); // 0x7a5 Func
	var_48_bool = var_47_object == 0; // 0x7a7 Not
	if(var_48_bool == 0) goto Label_1966; // 0x7a8 JumpB
	var_49_string = "Can't retrieve diary root"; // 0x7a9 PushS
	Trace(var_49_string); // 0x7aa Func
	var_45_object = 0; // 0x7ac MovB
	return 2; // 0x7ad Return
	
Label_1966:
	var_45_object = var_47_object; // 0x7ae Mov
	return 2; // 0x7af Return
}


func_678(var_0_object, var_342_int, var_343_object)
{
	var_345_object = Obj(); var_346_bool = 0; var_347_int = 0; var_348_bool = 0; var_349_object = Obj(); var_350_bool = 0; var_351_int = 0; var_352_bool = 0; // 0x2a6 PushV
	var_0_object = var_343_object; // 0x2a7 TMov
	var_353_bool = 0; var_354_object = Obj(); var_355_float = 0; // 0x2a8 PushV
	var_354_object = var_343_object; // 0x2a9 Mov
	var_355_float = 70.0; // 0x2aa MovF
	func_1521(var_354_object, var_355_float); // 0x2ab NEW_2
	var_356_bool = var_353_bool == 0; // 0x2ad Not
	if(var_356_bool == 0) goto Label_689; // 0x2ae JumpB
	var_342_int = -2; // 0x2af MovI
	return 8; // 0x2b0 Return
	
Label_689:
	CreateDialog(var_349_object); // 0x2b1 Func
	var_357_int = 0; // 0x2b3 PushV
	func_1873(var_357_int); // 0x2b4 NEW_2
	SetNPCName(var_357_int); // 0x2b6 ObjFunc
	var_358_int = 0; // 0x2b8 PushV
	func_1871(var_358_int); // 0x2b9 NEW_2
	SetNPCDescription(var_358_int); // 0x2bb ObjFunc
	var_359_string = ""; // 0x2bd PushV
	func_1875(var_359_string); // 0x2be NEW_2
	SetPhoto(var_359_string); // 0x2c0 ObjFunc
	var_360_string = ""; // 0x2c2 PushV
	func_1877(var_360_string); // 0x2c3 NEW_2
	SetPhoto2(var_360_string); // 0x2c5 ObjFunc
	var_361_int = 0; // 0x2c7 PushV
	func_1997(var_361_int); // 0x2c8 NEW_2
	SetPlayerName(var_361_int); // 0x2ca ObjFunc
	var_351_int = -1; // 0x2cc MovI
	IsOverrideActive(var_350_bool); // 0x2cd Func
	var_362_bool = var_350_bool; // 0x2cf Push
	if(var_362_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_342_int = -2; // 0x2d1 MovI
	return 8; // 0x2d2 Return
	
Label_723:
	DoDialog(var_349_object); // 0x2d3 Func
	var_363_bool = 0; var_364_object = Obj(); // 0x2d5 PushV
	var_365_object = Obj(); // 0x2d6 PushV
	func_1799(var_365_object); // 0x2d7 NEW_2
	var_364_object = var_365_object; // 0x2d8 Mov
	func_1608(var_363_bool, var_364_object); // 0x2da NEW_2
	var_366_object = Obj(); var_367_object = Obj(); // 0x2dc PushV
	var_366_object = var_343_object; // 0x2dd Mov
	var_367_object = var_349_object; // 0x2de Mov
	TaskCall(5); // 0x2df TaskCall
	func_759(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object); // 0x2e0 NEW_2
	TaskReturn(); // 0x2e1 TaskReturn
	IsDialogEnd(var_352_bool); // 0x2e3 ObjFunc
	
Label_741:
	var_402_bool = var_352_bool == 0; // 0x2e5 Not
	if(var_402_bool == 0) goto Label_748; // 0x2e6 JumpB
	sync(); // 0x2e7 Func
	IsDialogEnd(var_352_bool); // 0x2e9 ObjFunc
	goto Label_741; // 0x2eb Jump
	
Label_748:
	var_403_object = Obj(); // 0x2ec PushV
	var_403_object = var_343_object; // 0x2ed Mov
	func_1590(); // 0x2ee NEW_2
	StopDialog(var_349_object); // 0x2f0 Func
	GetReturnValue(var_351_int); // 0x2f2 ObjFunc
	var_342_int = var_351_int; // 0x2f4 Mov
	return 8; // 0x2f5 Return
}


func_1703(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x6a7 PushV
	var_168_string = "d"; // 0x6a8 PushS
	var_169_int = 0; // 0x6a9 PushV
	func_1832(var_169_int); // 0x6aa NEW_2
	var_175_int = var_168_string + var_169_int; // 0x6ac Add
	var_176_string = "m"; // 0x6ad PushS
	var_163_string = var_175_int + var_176_string; // 0x6ae Add2
	var_164_int = 0; // 0x6af MovI
	
Label_1712:
	var_177_int = 1; // 0x6b0 PushI
	if(var_177_int == 0) goto Label_1725; // 0x6b1 JumpB
	var_178_int = 1; // 0x6b2 PushI
	var_179_int = var_164_int + var_178_int; // 0x6b3 Add
	var_180_int = var_163_string + var_179_int; // 0x6b4 Add
	HasProperty(var_180_int, var_165_bool); // 0x6b5 ObjFunc
	var_181_bool = var_165_bool == 0; // 0x6b7 Not
	if(var_181_bool == 0) goto Label_1722; // 0x6b8 JumpB
	goto Label_1725; // 0x6b9 Jump
	
Label_1725:
	var_182_bool = var_164_int == 0; // 0x6bd Not
	if(var_182_bool == 0) goto Label_1729; // 0x6be JumpB
	var_156_bool = 0; // 0x6bf MovB
	return 10; // 0x6c0 Return
	
Label_1729:
	var_166_int = 0; // 0x6c1 MovI
	var_183_int = 1; // 0x6c2 PushI
	var_184_bool = var_164_int > var_183_int; // 0x6c3 GT
	if(var_184_bool == 0) goto Label_1735; // 0x6c4 JumpB
	irand(var_166_int, var_164_int); // 0x6c5 Func
	
Label_1735:
	var_185_int = 1; // 0x6c7 PushI
	var_186_int = var_166_int + var_185_int; // 0x6c8 Add
	var_187_int = var_163_string + var_186_int; // 0x6c9 Add
	GetProperty(var_187_int, var_167_string); // 0x6ca ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x6cc PushV
	var_189_string = var_167_string; // 0x6cd Mov
	func_1777(var_188_bool, var_189_string); // 0x6ce NEW_2
	var_156_bool = var_188_bool; // 0x6cf Mov
	return 10; // 0x6d1 Return
	
Label_1722:
	var_190_int = 1; // 0x6ba PushI
	var_164_int = var_164_int + var_190_int; // 0x6bb Add2
	goto Label_1712; // 0x6bc Jump
}


func_1832(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x728 PushV
	GetGameTime(var_171_float); // 0x729 Func
	var_172_int = 1; // 0x72b PushI
	var_173_int = 0; // 0x72c PushV
	var_174_int = 24; // 0x72d PushI
	var_173_int = var_171_float / var_171_float; // 0x72e Div2
	var_169_int = var_172_int + var_173_int; // 0x72f Add2
	return 2; // 0x730 Return
}


func_300(var_0_object, var_1_object, var_2_object, var_3_string, var_292_object, var_293_object)
{
	var_0_object = var_293_object; // 0x12d TMov
	var_1_object = var_292_object; // 0x12e TMov
	var_3_string = 0; // 0x12f TMovB
	var_298_int = 1; // 0x130 PushI
	if(var_298_int == 0) goto Label_353; // 0x131 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x132 PushV
	var_300_object = var_1_object; // 0x133 MovT
	func_1906(var_300_object); // 0x134 NEW_2
	if(var_299_bool == 0) goto Label_331; // 0x136 JumpB
	var_307_string = ""; // 0x137 PushV
	var_307_string = "Questioning"; // 0x138 MovS
	func_383(var_293_object, var_307_string); // 0x139 NEW_2
	var_315_int = 531123; // 0x13b PushI
	SetMessage(var_315_int); // 0x13c TObjFunc
	ClearReplies(); // 0x13e TObjFunc
	var_316_int = 531124; // 0x140 PushI
	var_317_int = 32443; // 0x141 PushI
	var_318_int = 32442; // 0x142 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x143 TObjFunc
	var_319_int = 531403; // 0x145 PushI
	var_320_int = 32745; // 0x146 PushI
	var_321_int = 32744; // 0x147 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x148 TObjFunc
	goto Label_353; // 0x14a Jump
	
Label_353:
	var_322_bool = 0; // 0x161 PushV
	func_1879(var_322_bool); // 0x162 NEW_2
	if(var_322_bool == 0) goto Label_368; // 0x164 JumpB
	
Label_357:
	lshWaitForAnimEnd(); // 0x165 Func
	var_323_string = var_3_string; // 0x167 PushT
	if(var_323_string == 0) goto Label_362; // 0x168 JumpB
	goto Label_367; // 0x169 Jump
	
Label_367:
	goto Label_382; // 0x16f Jump
	
Label_382:
	return 0; // 0x17e Return
	
Label_362:
	var_324_string = ""; // 0x16a PushV
	var_324_string = var_2_object; // 0x16b MovT
	func_1746(var_324_string); // 0x16c NEW_2
	goto Label_357; // 0x16e Jump
	
Label_368:
	var_325_string = "all"; // 0x170 PushS
	var_326_string = "idle"; // 0x171 PushS
	PlayAnimation(var_325_string, var_326_string); // 0x172 Func
	
Label_372:
	WaitForAnimEnd(); // 0x174 Func
	var_327_string = var_3_string; // 0x176 PushT
	if(var_327_string == 0) goto Label_377; // 0x177 JumpB
	goto Label_382; // 0x178 Jump
	
Label_377:
	var_328_string = "all"; // 0x179 PushS
	var_329_string = "idle"; // 0x17a PushS
	PlayAnimation(var_328_string, var_329_string); // 0x17b Func
	goto Label_372; // 0x17d Jump
	
Label_331:
	var_330_string = ""; // 0x14b PushV
	var_330_string = "Neutral"; // 0x14c MovS
	func_383(var_293_object, var_330_string); // 0x14d NEW_2
	var_331_int = 531127; // 0x14f PushI
	SetMessage(var_331_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_332_int = 531128; // 0x154 PushI
	var_333_int = -1; // 0x155 PushI
	var_334_int = 32446; // 0x156 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x157 TObjFunc
	var_335_int = 531398; // 0x159 PushI
	var_336_int = -1; // 0x15a PushI
	var_337_int = 32739; // 0x15b PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x15c TObjFunc
	goto Label_353; // 0x15e Jump
}


func_1969(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x7b1 PushV
	var_45_object = Obj(); // 0x7b2 PushV
	func_1956(var_45_object); // 0x7b3 NEW_2
	var_42_object = var_45_object; // 0x7b4 Mov
	Find(var_38_int, var_43_object); // 0x7b6 ObjFunc
	var_50_bool = var_43_object == 0; // 0x7b8 Not
	if(var_50_bool == 0) goto Label_1984; // 0x7b9 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x7ba PushS
	var_52_int = var_51_string + var_38_int; // 0x7bb Add
	Trace(var_52_int); // 0x7bc Func
	var_36_bool = 0; // 0x7be MovB
	return 6; // 0x7bf Return
	
Label_1984:
	AddChild(var_37_object); // 0x7c0 ObjFunc
	var_53_int = 7; // 0x7c2 PushI
	SendWorldWndMessage(var_53_int); // 0x7c3 Func
	GetCategory(var_44_int); // 0x7c5 ObjFunc
	SetDiarySection(var_44_int); // 0x7c7 Func
	var_36_bool = 0; // 0x7c9 MovB
	return 6; // 0x7ca Return
}


func_1841(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x732 PushV
	func_1832(var_270_int); // 0x733 NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x735 Eq2
	return 0; // 0x736 Return
}


func_1590()
{
	var_260_bool = 0; var_261_bool = 0; // 0x636 PushV
	var_262_bool = 1; // 0x637 PushB
	CameraSwitchToNormal(var_262_bool); // 0x638 Func
	var_263_bool = 0; // 0x63a PushV
	func_1879(var_263_bool); // 0x63b NEW_2
	if(var_263_bool == 0) goto Label_1599; // 0x63d JumpB
	goto Label_1607; // 0x63e Jump
	
Label_1607:
	return 2; // 0x647 Return
	
Label_1599:
	var_264_string = "head"; // 0x63f PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x640 Func
	var_265_bool = var_261_bool; // 0x642 Push
	if(var_265_bool == 0) goto Label_1607; // 0x643 JumpB
	var_266_string = "head"; // 0x644 PushS
	UnlookAsync(var_266_string); // 0x645 Func
}


func_822(var_2_object, var_373_string)
{
	var_374_bool = 0; // 0x337 PushV
	func_1879(var_374_bool); // 0x338 NEW_2
	var_375_bool = var_374_bool == 0; // 0x33a Not
	if(var_375_bool == 0) goto Label_829; // 0x33b JumpB
	return 0; // 0x33c Return
	
Label_829:
	var_376_bool = var_373_string == var_2_object; // 0x33d Eq
	if(var_376_bool == 0) goto Label_832; // 0x33e JumpB
	return 0; // 0x33f Return
	
Label_832:
	var_377_string = ""; var_378_bool = 0; // 0x340 PushV
	var_377_string = var_373_string; // 0x341 Mov
	var_379_string = ""; // 0x342 PushS
	var_380_bool = var_373_string == var_379_string; // 0x343 Eq
	if(var_380_bool == 0) goto Label_839; // 0x344 JumpB
	var_378_bool = 0; // 0x345 MovB
	goto Label_840; // 0x346 Jump
	
Label_840:
	func_1762(var_377_string, var_378_bool); // 0x348 NEW_2
	var_2_object = var_373_string; // 0x34a TMov
	return 0; // 0x34b Return
	
Label_839:
	var_378_bool = 1; // 0x347 MovB
}


func_1847(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x737 PushV
	var_49_string = "idle"; // 0x738 MovS
	var_50_int = var_47_int; // 0x739 Push
	if(var_50_int == 0) goto Label_1852; // 0x73a JumpB
	var_49_string = var_49_string + var_47_int; // 0x73b Add2
	
Label_1852:
	var_46_string = var_49_string; // 0x73c Mov
	return 2; // 0x73d Return
}


func_1854(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x73e PushV
	var_43_int = 0; // 0x73f MovI
	
Label_1856:
	var_45_string = "all"; // 0x740 PushS
	var_46_string = ""; var_47_int = 0; // 0x741 PushV
	var_47_int = var_43_int; // 0x742 Mov
	func_1847(var_46_string, var_47_int); // 0x743 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x745 Func
	var_51_bool = var_44_bool == 0; // 0x747 Not
	if(var_51_bool == 0) goto Label_1866; // 0x748 JumpB
	goto Label_1869; // 0x749 Jump
	
Label_1869:
	var_40_int = var_43_int; // 0x74d Mov
	return 4; // 0x74e Return
	
Label_1866:
	var_52_int = 1; // 0x74a PushI
	var_43_int = var_43_int + var_52_int; // 0x74b Add2
	goto Label_1856; // 0x74c Jump
}


func_1608(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x648 PushV
	var_123_string = "voice_common"; // 0x649 PushS
	GetVariable(var_123_string, var_121_int); // 0x64a Func
	var_124_int = var_121_int; // 0x64c Push
	if(var_124_int == 0) goto Label_1646; // 0x64d JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x64e PushV
	var_126_object = var_115_object; // 0x64f Mov
	func_1666(var_126_object); // 0x650 NEW_2
	var_155_bool = var_125_bool == 0; // 0x652 Not
	if(var_155_bool == 0) goto Label_1628; // 0x653 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x654 PushV
	var_157_object = var_115_object; // 0x655 Mov
	func_1703(var_157_object); // 0x656 NEW_2
	var_191_bool = var_156_bool == 0; // 0x658 Not
	if(var_191_bool == 0) goto Label_1628; // 0x659 JumpB
	var_114_bool = 0; // 0x65a MovB
	return 4; // 0x65b Return
	
Label_1628:
	var_192_int = 2; // 0x65c PushI
	irand(var_122_int, var_192_int); // 0x65d Func
	var_193_int = var_122_int; // 0x65f Push
	if(var_193_int == 0) goto Label_1641; // 0x660 JumpB
	var_194_string = "voice_common"; // 0x661 PushS
	var_195_int = 1; // 0x662 PushI
	var_196_int = var_121_int + var_195_int; // 0x663 Add
	var_197_int = 3; // 0x664 PushI
	var_198_int = var_196_int / var_197_int; // 0x665 Mod
	SetVariable(var_194_string, var_198_int); // 0x666 Func
	goto Label_1645; // 0x668 Jump
	
Label_1645:
	goto Label_1664; // 0x66d Jump
	
Label_1664:
	var_114_bool = 1; // 0x680 MovB
	return 4; // 0x681 Return
	
Label_1641:
	var_199_string = "voice_common"; // 0x669 PushS
	var_200_int = 0; // 0x66a PushI
	SetVariable(var_199_string, var_200_int); // 0x66b Func
	
Label_1646:
	var_201_bool = 0; var_202_object = Obj(); // 0x66e PushV
	var_202_object = var_115_object; // 0x66f Mov
	func_1703(var_202_object); // 0x670 NEW_2
	var_203_bool = var_201_bool == 0; // 0x672 Not
	if(var_203_bool == 0) goto Label_1660; // 0x673 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x674 PushV
	var_205_object = var_115_object; // 0x675 Mov
	func_1666(var_205_object); // 0x676 NEW_2
	var_206_bool = var_204_bool == 0; // 0x678 Not
	if(var_206_bool == 0) goto Label_1660; // 0x679 JumpB
	var_114_bool = 0; // 0x67a MovB
	return 4; // 0x67b Return
	
Label_1660:
	var_207_string = "voice_common"; // 0x67c PushS
	var_208_int = 1; // 0x67d PushI
	SetVariable(var_207_string, var_208_int); // 0x67e Func
}


func_1482(var_60_bool)
{
	var_60_bool = 1; // 0x5ca MovB
	return 0; // 0x5cb Return
}


func_1484()
{
	StopAnimation(); // 0x5cc Func
	StopGroup0(); // 0x5ce Func
	return 0; // 0x5d0 Return
}


func_1997(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x7cd PushV
	var_108_string = "branch"; // 0x7ce PushS
	GetVariable(var_108_string, var_107_int); // 0x7cf Func
	var_109_int = 0; // 0x7d1 PushI
	var_110_bool = var_107_int == var_109_int; // 0x7d2 Eq
	if(var_110_bool == 0) goto Label_2007; // 0x7d3 JumpB
	var_105_int = 1; // 0x7d4 MovI
	return 2; // 0x7d5 Return
	
Label_2007:
	var_111_int = 1; // 0x7d7 PushI
	var_112_bool = var_107_int == var_111_int; // 0x7d8 Eq
	if(var_112_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_105_int = 2; // 0x7da MovI
	return 2; // 0x7db Return
	
Label_2012:
	var_105_int = 3; // 0x7dc MovI
	return 2; // 0x7dd Return
}


func_1871(var_102_int)
{
	var_102_int = 515536; // 0x74f MovI
	return 0; // 0x750 Return
}


func_1873(var_101_int)
{
	var_101_int = 502861; // 0x751 MovI
	return 0; // 0x752 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object; // 0x52 TMov
	var_1_object = var_209_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_215_int = 1; // 0x55 PushI
	if(var_215_int == 0) goto Label_109; // 0x56 JumpB
	var_216_string = ""; // 0x57 PushV
	var_216_string = "Neutral"; // 0x58 MovS
	func_139(var_210_object, var_216_string); // 0x59 NEW_2
	var_233_int = 518009; // 0x5b PushI
	SetMessage(var_233_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_234_int = 518010; // 0x60 PushI
	var_235_int = 32920; // 0x61 PushI
	var_236_int = 19143; // 0x62 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x63 TObjFunc
	var_237_int = 531560; // 0x65 PushI
	var_238_int = -1; // 0x66 PushI
	var_239_int = 32919; // 0x67 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_240_bool = 0; // 0x6d PushV
	func_1879(var_240_bool); // 0x6e NEW_2
	if(var_240_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_241_string = var_3_string; // 0x73 PushT
	if(var_241_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_242_string = ""; // 0x76 PushV
	var_242_string = var_2_object; // 0x77 MovT
	func_1746(var_242_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_253_string = "all"; // 0x7c PushS
	var_254_string = "idle"; // 0x7d PushS
	PlayAnimation(var_253_string, var_254_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_255_string = var_3_string; // 0x82 PushT
	if(var_255_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_256_string = "all"; // 0x85 PushS
	var_257_string = "idle"; // 0x86 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1875(var_103_string)
{
	var_103_string = "ui/NPC_Han.png"; // 0x753 MovS
	return 0; // 0x754 Return
}


func_1746(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x6d2 PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x6d3 Func
	var_249_bool = var_246_bool; // 0x6d5 Push
	if(var_249_bool == 0) goto Label_1757; // 0x6d6 JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x6d7 Func
	var_250_bool = 0; // 0x6d9 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x6da Func
	goto Label_1761; // 0x6dc Jump
	
Label_1761:
	return 6; // 0x6e1 Return
	
Label_1757:
	var_251_string = "Can't find lsh animation : "; // 0x6dd PushS
	var_252_int = var_251_string + var_242_string; // 0x6de Add
	Trace(var_252_int); // 0x6df Func
}


func_1877(var_104_string)
{
	var_104_string = "ui/NPC_Han_b.png"; // 0x755 MovS
	return 0; // 0x756 Return
}


func_1108(var_0_object, var_1_object, var_2_object, var_3_string, var_428_object, var_429_object)
{
	var_0_object = var_429_object; // 0x455 TMov
	var_1_object = var_428_object; // 0x456 TMov
	var_3_string = 0; // 0x457 TMovB
	var_434_int = 1; // 0x458 PushI
	if(var_434_int == 0) goto Label_1136; // 0x459 JumpB
	var_435_string = ""; // 0x45a PushV
	var_435_string = "Neutral"; // 0x45b MovS
	func_1166(var_429_object, var_435_string); // 0x45c NEW_2
	var_443_int = 540554; // 0x45e PushI
	SetMessage(var_443_int); // 0x45f TObjFunc
	ClearReplies(); // 0x461 TObjFunc
	var_444_int = 540555; // 0x463 PushI
	var_445_int = -1; // 0x464 PushI
	var_446_int = 42564; // 0x465 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x466 TObjFunc
	var_447_int = 540794; // 0x468 PushI
	var_448_int = -1; // 0x469 PushI
	var_449_int = 42843; // 0x46a PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x46b TObjFunc
	goto Label_1136; // 0x46d Jump
	
Label_1136:
	var_450_bool = 0; // 0x470 PushV
	func_1879(var_450_bool); // 0x471 NEW_2
	if(var_450_bool == 0) goto Label_1151; // 0x473 JumpB
	
Label_1140:
	lshWaitForAnimEnd(); // 0x474 Func
	var_451_string = var_3_string; // 0x476 PushT
	if(var_451_string == 0) goto Label_1145; // 0x477 JumpB
	goto Label_1150; // 0x478 Jump
	
Label_1150:
	goto Label_1165; // 0x47e Jump
	
Label_1165:
	return 0; // 0x48d Return
	
Label_1145:
	var_452_string = ""; // 0x479 PushV
	var_452_string = var_2_object; // 0x47a MovT
	func_1746(var_452_string); // 0x47b NEW_2
	goto Label_1140; // 0x47d Jump
	
Label_1151:
	var_453_string = "all"; // 0x47f PushS
	var_454_string = "idle"; // 0x480 PushS
	PlayAnimation(var_453_string, var_454_string); // 0x481 Func
	
Label_1155:
	WaitForAnimEnd(); // 0x483 Func
	var_455_string = var_3_string; // 0x485 PushT
	if(var_455_string == 0) goto Label_1160; // 0x486 JumpB
	goto Label_1165; // 0x487 Jump
	
Label_1160:
	var_456_string = "all"; // 0x488 PushS
	var_457_string = "idle"; // 0x489 PushS
	PlayAnimation(var_456_string, var_457_string); // 0x48a Func
	goto Label_1155; // 0x48c Jump
}


func_1879(var_96_bool)
{
	var_96_bool = 1; // 0x757 MovB
	return 0; // 0x758 Return
}


func_1237(var_0_object)
{
	var_22_bool = 0; // 0x4d5 PushV
	func_1516(var_22_bool); // 0x4d6 NEW_2
	var_25_bool = var_22_bool == 0; // 0x4d8 Not
	if(var_25_bool == 0) goto Label_1244; // 0x4d9 JumpB
	Hold(); // 0x4da Func
	
Label_1244:
	GetDirection(var_0_object); // 0x4dc Func
	
Label_1246:
	func_1413(); // 0x4df NEW_2
	goto Label_1246; // 0x4e1 Jump
}


func_1881()
{
	var_29_string = "b11q02"; // 0x75a PushS
	var_30_int = 4; // 0x75b PushI
	SetVariable(var_29_string, var_30_int); // 0x75c Func
	func_1943(); // 0x75f NEW_2
	return 0; // 0x761 Return
}


func_1489(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x5d1 PushV
	GetPosition(var_41_cvector); // 0x5d2 Func
	GetPosition(var_42_cvector); // 0x5d4 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x5d6 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x5d7 Or2
	return 6; // 0x5d8 Return
}


func_1497(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x5d9 PushV
	GetPosition(var_34_cvector); // 0x5da Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x5dc Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x5dd PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x5de PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x5df Func
	var_29_bool = var_36_bool; // 0x5e1 Mov
	return 6; // 0x5e2 Return
}


func_2014(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x7df PushGE
	var_41_bool = var_40_bool == 0; // 0x7e0 Not
	if(var_41_bool == 0) goto Label_2027; // 0x7e1 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x7e2 PushV
	var_43_object = var_39_object; // 0x7e3 Mov
	TaskCall(0); // 0x7e4 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x7e5 NEW_2
	TaskReturn(); // 0x7e6 TaskReturn
	var_267_bool = GlobalVars[1]; // 0x7e8 PushGE
	var_267_bool = 1; // 0x7e9 MovB
	GlobalVars[1] = var_267_bool; // 0x7ea PopGE
	
Label_2027:
	var_268_bool = 0; var_269_int = 0; // 0x7eb PushV
	var_269_int = 11; // 0x7ec MovI
	func_1841(var_268_bool, var_269_int); // 0x7ed NEW_2
	if(var_268_bool == 0) goto Label_2039; // 0x7ef JumpB
	var_271_int = 0; var_272_object = Obj(); // 0x7f0 PushV
	var_272_object = var_39_object; // 0x7f1 Mov
	TaskCall(2); // 0x7f2 TaskCall
	func_226(var_273_object, var_271_int, var_272_object); // 0x7f3 NEW_2
	TaskReturn(); // 0x7f4 TaskReturn
	return 0; // 0x7f6 Return
	
Label_2039:
	var_340_bool = 0; var_341_int = 0; // 0x7f7 PushV
	var_341_int = 12; // 0x7f8 MovI
	func_1841(var_340_bool, var_341_int); // 0x7f9 NEW_2
	if(var_340_bool == 0) goto Label_2051; // 0x7fb JumpB
	var_342_int = 0; var_343_object = Obj(); // 0x7fc PushV
	var_343_object = var_39_object; // 0x7fd Mov
	TaskCall(4); // 0x7fe TaskCall
	func_678(var_344_object, var_342_int, var_343_object); // 0x7ff NEW_2
	TaskReturn(); // 0x800 TaskReturn
	return 0; // 0x802 Return
	
Label_2051:
	var_404_int = 0; var_405_object = Obj(); // 0x803 PushV
	var_405_object = var_39_object; // 0x804 Mov
	TaskCall(6); // 0x805 TaskCall
	func_1027(var_406_object, var_404_int, var_405_object); // 0x806 NEW_2
	TaskReturn(); // 0x807 TaskReturn
	return 0; // 0x809 Return
}


func_1762(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x6e2 PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x6e3 Func
	var_230_bool = var_227_bool; // 0x6e5 Push
	if(var_230_bool == 0) goto Label_1772; // 0x6e6 JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x6e7 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x6e9 Func
	goto Label_1776; // 0x6eb Jump
	
Label_1776:
	return 6; // 0x6f0 Return
	
Label_1772:
	var_231_string = "Can't find lsh animation : "; // 0x6ec PushS
	var_232_int = var_231_string + var_220_string; // 0x6ed Add
	Trace(var_232_int); // 0x6ee Func
}


func_1890()
{
	func_1930(); // 0x764 NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0x766 PushV
	var_71_string = "quest_b11_02"; // 0x767 MovS
	var_72_string = "fail"; // 0x768 MovS
	func_1820(var_70_bool, var_71_string, var_72_string); // 0x769 NEW_2
	return 0; // 0x76b Return
}


func_1507(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5e3 PushV
	GetPosition(var_28_cvector); // 0x5e4 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x5e6 PushV
	var_30_cvector = var_28_cvector; // 0x5e7 Mov
	func_1497(var_29_bool, var_30_cvector); // 0x5e8 NEW_2
	var_25_bool = var_29_bool; // 0x5e9 Mov
	return 2; // 0x5eb Return
}


func_1251(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x4e3 PushV
	var_49_string = "player"; // 0x4e4 PushS
	FindActor(var_48_object, var_49_string); // 0x4e5 Func
	var_50_bool = var_48_object == 0; // 0x4e7 Not
	if(var_50_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_46_bool = 0; // 0x4e9 MovB
	return 2; // 0x4ea Return
	
Label_1259:
	var_51_bool = 0; var_52_object = Obj(); // 0x4eb PushV
	var_52_object = var_48_object; // 0x4ec Mov
	func_1507(var_52_object); // 0x4ed NEW_2
	var_46_bool = var_51_bool; // 0x4ee Mov
	return 2; // 0x4f0 Return
}


func_226(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0xe2 PushV
	var_0_object = var_272_object; // 0xe3 TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0xe4 PushV
	var_283_object = var_272_object; // 0xe5 Mov
	var_284_float = 70.0; // 0xe6 MovF
	func_1521(var_283_object, var_284_float); // 0xe7 NEW_2
	var_285_bool = var_282_bool == 0; // 0xe9 Not
	if(var_285_bool == 0) goto Label_237; // 0xea JumpB
	var_271_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_278_object); // 0xed Func
	var_286_int = 0; // 0xef PushV
	func_1873(var_286_int); // 0xf0 NEW_2
	SetNPCName(var_286_int); // 0xf2 ObjFunc
	var_287_int = 0; // 0xf4 PushV
	func_1871(var_287_int); // 0xf5 NEW_2
	SetNPCDescription(var_287_int); // 0xf7 ObjFunc
	var_288_string = ""; // 0xf9 PushV
	func_1875(var_288_string); // 0xfa NEW_2
	SetPhoto(var_288_string); // 0xfc ObjFunc
	var_289_string = ""; // 0xfe PushV
	func_1877(var_289_string); // 0xff NEW_2
	SetPhoto2(var_289_string); // 0x101 ObjFunc
	var_290_int = 0; // 0x103 PushV
	func_1997(var_290_int); // 0x104 NEW_2
	SetPlayerName(var_290_int); // 0x106 ObjFunc
	var_280_int = -1; // 0x108 MovI
	IsOverrideActive(var_279_bool); // 0x109 Func
	var_291_bool = var_279_bool; // 0x10b Push
	if(var_291_bool == 0) goto Label_271; // 0x10c JumpB
	var_271_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_278_object); // 0x10f Func
	var_292_object = Obj(); var_293_object = Obj(); // 0x111 PushV
	var_292_object = var_272_object; // 0x112 Mov
	var_293_object = var_278_object; // 0x113 Mov
	TaskCall(3); // 0x114 TaskCall
	func_300(var_294_object, var_295_object, var_296_string, var_297_bool, var_292_object, var_293_object); // 0x115 NEW_2
	TaskReturn(); // 0x116 TaskReturn
	IsDialogEnd(var_281_bool); // 0x118 ObjFunc
	
Label_282:
	var_338_bool = var_281_bool == 0; // 0x11a Not
	if(var_338_bool == 0) goto Label_289; // 0x11b JumpB
	sync(); // 0x11c Func
	IsDialogEnd(var_281_bool); // 0x11e ObjFunc
	goto Label_282; // 0x120 Jump
	
Label_289:
	var_339_object = Obj(); // 0x121 PushV
	var_339_object = var_272_object; // 0x122 Mov
	func_1590(); // 0x123 NEW_2
	StopDialog(var_278_object); // 0x125 Func
	GetReturnValue(var_280_int); // 0x127 ObjFunc
	var_271_int = var_280_int; // 0x129 Mov
	return 8; // 0x12a Return
}


func_1900()
{
	var_29_string = "oob12Han1"; // 0x76d PushS
	var_30_int = 1; // 0x76e PushI
	SetVariable(var_29_string, var_30_int); // 0x76f Func
	return 0; // 0x771 Return
}


func_1516(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5ec PushV
	IsLoaded(var_24_bool); // 0x5ed Func
	var_22_bool = var_24_bool; // 0x5ef Mov
	return 2; // 0x5f0 Return
}


func_1521(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x5f1 PushV
	GetPosition(var_66_cvector); // 0x5f2 ObjFunc
	GetEyesHeight(var_65_float); // 0x5f4 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x5f6 PushE
	var_74_float = var_74_float + var_65_float; // 0x5f7 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x5f8 PopE
	GetPosition(var_67_cvector); // 0x5f9 Func
	GetEyesHeight(var_65_float); // 0x5fb Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x5fd PushE
	var_75_float = var_75_float + var_65_float; // 0x5fe Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x5ff PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x600 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x601 PushE
	var_76_float = 0; // 0x602 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x603 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x604 Or
	var_78_float = sqrt(var_77_int); // 0x605 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x606 Div2
	var_69_cvector = -var_68_cvector; // 0x607 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x608 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x609 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x60a PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x60b Xor2
	func_1805(var_80_cvector, var_81_cvector); // 0x60c NEW_2
	var_88_int = 25; // 0x60e PushI
	var_89_float = var_80_cvector * var_88_int; // 0x60f Mult
	var_90_int = var_79_float + var_89_float; // 0x610 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x611 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x612 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x613 Add2
	IsOverrideActive(var_72_bool); // 0x614 Func
	var_92_bool = var_72_bool; // 0x616 Push
	if(var_92_bool == 0) goto Label_1562; // 0x617 JumpB
	var_53_bool = 0; // 0x618 MovB
	return 18; // 0x619 Return
	
Label_1562:
	StopWorld(); // 0x61a Func
	var_93_bool = 1; // 0x61c PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x61d Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x61f PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x620 PushE
	Rotate(var_94_float, var_95_float); // 0x621 Func
	var_96_bool = 0; // 0x623 PushV
	func_1879(var_96_bool); // 0x624 NEW_2
	if(var_96_bool == 0) goto Label_1576; // 0x626 JumpB
	goto Label_1584; // 0x627 Jump
	
Label_1584:
	CameraWaitForPlayFinish(); // 0x630 Func
	ResumeWorld(); // 0x632 Func
	var_53_bool = 1; // 0x634 MovB
	return 18; // 0x635 Return
	
Label_1576:
	var_97_string = "head"; // 0x628 PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x629 Func
	var_98_bool = var_73_bool; // 0x62b Push
	if(var_98_bool == 0) goto Label_1584; // 0x62c JumpB
	var_99_string = "head"; // 0x62d PushS
	LookAsyncCamera(var_99_string); // 0x62e Func
}


func_1906(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x773 PushV
	var_302_string = "b11q02"; // 0x774 MovS
	func_1815(var_301_int, var_302_string); // 0x775 NEW_2
	var_305_int = 3; // 0x777 PushI
	var_306_bool = var_301_int == var_305_int; // 0x778 Eq
	if(var_306_bool == 0) goto Label_1916; // 0x779 JumpB
	var_299_bool = 1; // 0x77a MovB
	return 0; // 0x77b Return
	
Label_1916:
	var_299_bool = 0; // 0x77c MovB
	return 0; // 0x77d Return
}


func_1266(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x4f2 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x4f3 PushE
	RotateAsync(var_98_float, var_99_float); // 0x4f4 Func
	return 0; // 0x4f6 Return
}


func_1777(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x6f1 PushV
	var_152_bool = 0; // 0x6f2 PushV
	func_1879(var_152_bool); // 0x6f3 NEW_2
	if(var_152_bool == 0) goto Label_1790; // 0x6f5 JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x6f6 Func
	var_153_bool = var_151_bool; // 0x6f8 Push
	if(var_153_bool == 0) goto Label_1790; // 0x6f9 JumpB
	lshPlaySpeech(var_149_string); // 0x6fa Func
	var_148_bool = 1; // 0x6fc MovB
	return 2; // 0x6fd Return
	
Label_1790:
	var_148_bool = 0; // 0x6fe MovB
	return 2; // 0x6ff Return
}


func_759(var_0_object, var_1_object, var_2_object, var_3_string, var_366_object, var_367_object)
{
	var_0_object = var_367_object; // 0x2f8 TMov
	var_1_object = var_366_object; // 0x2f9 TMov
	var_3_string = 0; // 0x2fa TMovB
	var_372_int = 1; // 0x2fb PushI
	if(var_372_int == 0) goto Label_792; // 0x2fc JumpB
	var_373_string = ""; // 0x2fd PushV
	var_373_string = "Doubt"; // 0x2fe MovS
	func_822(var_367_object, var_373_string); // 0x2ff NEW_2
	var_381_int = 535268; // 0x301 PushI
	SetMessage(var_381_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_382_bool = 0; var_383_object = Obj(); // 0x306 PushV
	var_383_object = var_1_object; // 0x307 MovT
	func_1918(var_383_object); // 0x308 NEW_2
	if(var_382_bool == 0) goto Label_784; // 0x30a JumpB
	var_388_int = 535269; // 0x30b PushI
	var_389_int = 37004; // 0x30c PushI
	var_390_int = 36944; // 0x30d PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x30e TObjFunc
	
Label_784:
	var_391_int = 535322; // 0x310 PushI
	var_392_int = -1; // 0x311 PushI
	var_393_int = 37003; // 0x312 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x313 TObjFunc
	goto Label_792; // 0x315 Jump
	
Label_792:
	var_394_bool = 0; // 0x318 PushV
	func_1879(var_394_bool); // 0x319 NEW_2
	if(var_394_bool == 0) goto Label_807; // 0x31b JumpB
	
Label_796:
	lshWaitForAnimEnd(); // 0x31c Func
	var_395_string = var_3_string; // 0x31e PushT
	if(var_395_string == 0) goto Label_801; // 0x31f JumpB
	goto Label_806; // 0x320 Jump
	
Label_806:
	goto Label_821; // 0x326 Jump
	
Label_821:
	return 0; // 0x335 Return
	
Label_801:
	var_396_string = ""; // 0x321 PushV
	var_396_string = var_2_object; // 0x322 MovT
	func_1746(var_396_string); // 0x323 NEW_2
	goto Label_796; // 0x325 Jump
	
Label_807:
	var_397_string = "all"; // 0x327 PushS
	var_398_string = "idle"; // 0x328 PushS
	PlayAnimation(var_397_string, var_398_string); // 0x329 Func
	
Label_811:
	WaitForAnimEnd(); // 0x32b Func
	var_399_string = var_3_string; // 0x32d PushT
	if(var_399_string == 0) goto Label_816; // 0x32e JumpB
	goto Label_821; // 0x32f Jump
	
Label_816:
	var_400_string = "all"; // 0x330 PushS
	var_401_string = "idle"; // 0x331 PushS
	PlayAnimation(var_400_string, var_401_string); // 0x332 Func
	goto Label_811; // 0x334 Jump
}


func_1271(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x4f7 PushV
	var_34_string = "player"; // 0x4f8 PushS
	FindActor(var_32_object, var_34_string); // 0x4f9 Func
	var_35_bool = var_32_object == 0; // 0x4fb Not
	if(var_35_bool == 0) goto Label_1279; // 0x4fc JumpB
	var_29_bool = 0; // 0x4fd MovB
	return 4; // 0x4fe Return
	
Label_1279:
	var_36_float = 0; var_37_object = Obj(); // 0x4ff PushV
	var_37_object = var_32_object; // 0x500 Mov
	func_1489(var_37_object); // 0x501 NEW_2
	var_44_float = 90000.0; // 0x503 PushF
	var_45_bool = var_36_float > var_44_float; // 0x504 GT
	if(var_45_bool == 0) goto Label_1288; // 0x505 JumpB
	var_29_bool = 0; // 0x506 MovB
	return 4; // 0x507 Return
	
Label_1288:
	CanSee(var_33_bool, var_32_object); // 0x508 Func
	var_29_bool = var_33_bool; // 0x50a Mov
	return 4; // 0x50b Return
}


func_1918(var_382_bool)
{
	var_384_int = 0; var_385_string = ""; // 0x77f PushV
	var_385_string = "oob12Han1"; // 0x780 MovS
	func_1815(var_384_int, var_385_string); // 0x781 NEW_2
	var_386_int = 0; // 0x783 PushI
	var_387_bool = var_384_int == var_386_int; // 0x784 Eq
	if(var_387_bool == 0) goto Label_1928; // 0x785 JumpB
	var_382_bool = 1; // 0x786 MovB
	return 0; // 0x787 Return
	
Label_1928:
	var_382_bool = 0; // 0x788 MovB
	return 0; // 0x789 Return
}


func_383(var_2_object, var_307_string)
{
	var_308_bool = 0; // 0x180 PushV
	func_1879(var_308_bool); // 0x181 NEW_2
	var_309_bool = var_308_bool == 0; // 0x183 Not
	if(var_309_bool == 0) goto Label_390; // 0x184 JumpB
	return 0; // 0x185 Return
	
Label_390:
	var_310_bool = var_307_string == var_2_object; // 0x186 Eq
	if(var_310_bool == 0) goto Label_393; // 0x187 JumpB
	return 0; // 0x188 Return
	
Label_393:
	var_311_string = ""; var_312_bool = 0; // 0x189 PushV
	var_311_string = var_307_string; // 0x18a Mov
	var_313_string = ""; // 0x18b PushS
	var_314_bool = var_307_string == var_313_string; // 0x18c Eq
	if(var_314_bool == 0) goto Label_400; // 0x18d JumpB
	var_312_bool = 0; // 0x18e MovB
	goto Label_401; // 0x18f Jump
	
Label_401:
	func_1762(var_311_string, var_312_bool); // 0x191 NEW_2
	var_2_object = var_307_string; // 0x193 TMov
	return 0; // 0x194 Return
	
Label_400:
	var_312_bool = 1; // 0x190 MovB
}


