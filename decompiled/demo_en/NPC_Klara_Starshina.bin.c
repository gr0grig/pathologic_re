task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa2 PushI
	if(var_23_int == 0) goto Label_202; // 0xa3 JumpB
	func_2271(); // 0xa5 NEW_2
	var_25_int = 26884; // 0xa7 PushI
	var_26_bool = var_21_bool == var_25_int; // 0xa8 Eq
	if(var_26_bool == 0) goto Label_190; // 0xa9 JumpB
	var_27_string = ""; // 0xaa PushV
	var_27_string = "Neutral"; // 0xab MovS
	func_139(var_22_cvector, var_27_string); // 0xac NEW_2
	var_44_int = 525528; // 0xae PushI
	SetMessage(var_44_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_45_int = 525529; // 0xb3 PushI
	var_46_int = -1; // 0xb4 PushI
	var_47_int = 26885; // 0xb5 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0xb6 TObjFunc
	var_48_int = 529271; // 0xb8 PushI
	var_49_int = -1; // 0xb9 PushI
	var_50_int = 30724; // 0xba PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_3_string = 1; // 0xbe TMovB
	var_51_bool = 0; // 0xbf PushV
	func_2358(var_51_bool); // 0xc0 NEW_2
	if(var_51_bool == 0) goto Label_198; // 0xc2 JumpB
	lshStopAnimation(); // 0xc3 Func
	goto Label_200; // 0xc5 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_198:
	StopAnimation(); // 0xc6 Func
	
Label_202:
	return 0; // 0xca Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x18b PushI
	if(var_23_int == 0) goto Label_725; // 0x18c JumpB
	func_2271(); // 0x18e NEW_2
	var_25_int = 27712; // 0x190 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x191 Eq
	if(var_26_bool == 0) goto Label_408; // 0x192 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x193 PushV
	var_27_object = var_1_object; // 0x194 MovT
	var_28_object = var_0_object; // 0x195 MovT
	func_2360(); // 0x196 NEW_2
	
Label_408:
	var_54_int = 27732; // 0x198 PushI
	var_55_bool = var_22_cvector == var_54_int; // 0x199 Eq
	if(var_55_bool == 0) goto Label_416; // 0x19a JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x19b PushV
	var_56_object = var_1_object; // 0x19c MovT
	var_57_object = var_0_object; // 0x19d MovT
	func_2369(); // 0x19e NEW_2
	
Label_416:
	var_68_int = 27734; // 0x1a0 PushI
	var_69_bool = var_22_cvector == var_68_int; // 0x1a1 Eq
	if(var_69_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1a3 PushV
	var_70_object = var_1_object; // 0x1a4 MovT
	var_71_object = var_0_object; // 0x1a5 MovT
	func_2369(); // 0x1a6 NEW_2
	
Label_424:
	var_72_int = 27705; // 0x1a8 PushI
	var_73_bool = var_21_bool == var_72_int; // 0x1a9 Eq
	if(var_73_bool == 0) goto Label_477; // 0x1aa JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0x1ab PushV
	var_75_object = var_1_object; // 0x1ac MovT
	func_2414(var_75_object); // 0x1ad NEW_2
	if(var_74_bool == 0) goto Label_452; // 0x1af JumpB
	var_82_string = ""; // 0x1b0 PushV
	var_82_string = "Neutral"; // 0x1b1 MovS
	func_372(var_22_cvector, var_82_string); // 0x1b2 NEW_2
	var_99_int = 526430; // 0x1b4 PushI
	SetMessage(var_99_int); // 0x1b5 TObjFunc
	ClearReplies(); // 0x1b7 TObjFunc
	var_100_int = 526431; // 0x1b9 PushI
	var_101_int = 27707; // 0x1ba PushI
	var_102_int = 27706; // 0x1bb PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x1bc TObjFunc
	var_103_int = 529003; // 0x1be PushI
	var_104_int = 30441; // 0x1bf PushI
	var_105_int = 30440; // 0x1c0 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x1c1 TObjFunc
	return 0; // 0x1c3 Return
	
Label_452:
	var_106_string = ""; // 0x1c4 PushV
	var_106_string = "Neutral"; // 0x1c5 MovS
	func_372(var_22_cvector, var_106_string); // 0x1c6 NEW_2
	var_107_int = 526438; // 0x1c8 PushI
	SetMessage(var_107_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_108_bool = 0; var_109_object = Obj(); // 0x1cd PushV
	var_109_object = var_1_object; // 0x1ce MovT
	func_2426(var_109_object); // 0x1cf NEW_2
	if(var_108_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_114_int = 526450; // 0x1d2 PushI
	var_115_int = 27726; // 0x1d3 PushI
	var_116_int = 27725; // 0x1d4 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1d5 TObjFunc
	
Label_471:
	var_117_int = 526439; // 0x1d7 PushI
	var_118_int = -1; // 0x1d8 PushI
	var_119_int = 27714; // 0x1d9 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_120_int = 27726; // 0x1dd PushI
	var_121_bool = var_21_bool == var_120_int; // 0x1de Eq
	if(var_121_bool == 0) goto Label_500; // 0x1df JumpB
	var_122_string = ""; // 0x1e0 PushV
	var_122_string = "Neutral"; // 0x1e1 MovS
	func_372(var_22_cvector, var_122_string); // 0x1e2 NEW_2
	var_123_int = 526451; // 0x1e4 PushI
	SetMessage(var_123_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_124_int = 526452; // 0x1e9 PushI
	var_125_int = 30435; // 0x1ea PushI
	var_126_int = 27727; // 0x1eb PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1ec TObjFunc
	var_127_int = 528997; // 0x1ee PushI
	var_128_int = 30435; // 0x1ef PushI
	var_129_int = 30434; // 0x1f0 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_130_int = 30435; // 0x1f4 PushI
	var_131_bool = var_21_bool == var_130_int; // 0x1f5 Eq
	if(var_131_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_132_string = ""; // 0x1f7 PushV
	var_132_string = "Oracle"; // 0x1f8 MovS
	func_372(var_22_cvector, var_132_string); // 0x1f9 NEW_2
	var_133_int = 528998; // 0x1fb PushI
	SetMessage(var_133_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_134_int = 528999; // 0x200 PushI
	var_135_int = 27728; // 0x201 PushI
	var_136_int = 30436; // 0x202 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_137_int = 27728; // 0x206 PushI
	var_138_bool = var_21_bool == var_137_int; // 0x207 Eq
	if(var_138_bool == 0) goto Label_541; // 0x208 JumpB
	var_139_string = ""; // 0x209 PushV
	var_139_string = "Oracle"; // 0x20a MovS
	func_372(var_22_cvector, var_139_string); // 0x20b NEW_2
	var_140_int = 526453; // 0x20d PushI
	SetMessage(var_140_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_141_int = 526454; // 0x212 PushI
	var_142_int = 27731; // 0x213 PushI
	var_143_int = 27729; // 0x214 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x215 TObjFunc
	var_144_int = 526455; // 0x217 PushI
	var_145_int = 27733; // 0x218 PushI
	var_146_int = 27730; // 0x219 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_147_int = 27733; // 0x21d PushI
	var_148_bool = var_21_bool == var_147_int; // 0x21e Eq
	if(var_148_bool == 0) goto Label_559; // 0x21f JumpB
	var_149_string = ""; // 0x220 PushV
	var_149_string = "Neutral"; // 0x221 MovS
	func_372(var_22_cvector, var_149_string); // 0x222 NEW_2
	var_150_int = 526458; // 0x224 PushI
	SetMessage(var_150_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_151_int = 526459; // 0x229 PushI
	var_152_int = -1; // 0x22a PushI
	var_153_int = 27734; // 0x22b PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_154_int = 27731; // 0x22f PushI
	var_155_bool = var_21_bool == var_154_int; // 0x230 Eq
	if(var_155_bool == 0) goto Label_577; // 0x231 JumpB
	var_156_string = ""; // 0x232 PushV
	var_156_string = "Neutral"; // 0x233 MovS
	func_372(var_22_cvector, var_156_string); // 0x234 NEW_2
	var_157_int = 526456; // 0x236 PushI
	SetMessage(var_157_int); // 0x237 TObjFunc
	ClearReplies(); // 0x239 TObjFunc
	var_158_int = 529001; // 0x23b PushI
	var_159_int = 30439; // 0x23c PushI
	var_160_int = 30438; // 0x23d PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x23e TObjFunc
	return 0; // 0x240 Return
	
Label_577:
	var_161_int = 30439; // 0x241 PushI
	var_162_bool = var_21_bool == var_161_int; // 0x242 Eq
	if(var_162_bool == 0) goto Label_595; // 0x243 JumpB
	var_163_string = ""; // 0x244 PushV
	var_163_string = "Neutral"; // 0x245 MovS
	func_372(var_22_cvector, var_163_string); // 0x246 NEW_2
	var_164_int = 529002; // 0x248 PushI
	SetMessage(var_164_int); // 0x249 TObjFunc
	ClearReplies(); // 0x24b TObjFunc
	var_165_int = 526457; // 0x24d PushI
	var_166_int = -1; // 0x24e PushI
	var_167_int = 27732; // 0x24f PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_168_int = 30441; // 0x253 PushI
	var_169_bool = var_21_bool == var_168_int; // 0x254 Eq
	if(var_169_bool == 0) goto Label_618; // 0x255 JumpB
	var_170_string = ""; // 0x256 PushV
	var_170_string = "Neutral"; // 0x257 MovS
	func_372(var_22_cvector, var_170_string); // 0x258 NEW_2
	var_171_int = 529004; // 0x25a PushI
	SetMessage(var_171_int); // 0x25b TObjFunc
	ClearReplies(); // 0x25d TObjFunc
	var_172_int = 529005; // 0x25f PushI
	var_173_int = 27707; // 0x260 PushI
	var_174_int = 30442; // 0x261 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x262 TObjFunc
	var_175_int = 529006; // 0x264 PushI
	var_176_int = 30445; // 0x265 PushI
	var_177_int = 30444; // 0x266 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x267 TObjFunc
	return 0; // 0x269 Return
	
Label_618:
	var_178_int = 30445; // 0x26a PushI
	var_179_bool = var_21_bool == var_178_int; // 0x26b Eq
	if(var_179_bool == 0) goto Label_636; // 0x26c JumpB
	var_180_string = ""; // 0x26d PushV
	var_180_string = "Neutral"; // 0x26e MovS
	func_372(var_22_cvector, var_180_string); // 0x26f NEW_2
	var_181_int = 529007; // 0x271 PushI
	SetMessage(var_181_int); // 0x272 TObjFunc
	ClearReplies(); // 0x274 TObjFunc
	var_182_int = 529008; // 0x276 PushI
	var_183_int = 27707; // 0x277 PushI
	var_184_int = 30446; // 0x278 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x279 TObjFunc
	return 0; // 0x27b Return
	
Label_636:
	var_185_int = 27707; // 0x27c PushI
	var_186_bool = var_21_bool == var_185_int; // 0x27d Eq
	if(var_186_bool == 0) goto Label_654; // 0x27e JumpB
	var_187_string = ""; // 0x27f PushV
	var_187_string = "Refusal"; // 0x280 MovS
	func_372(var_22_cvector, var_187_string); // 0x281 NEW_2
	var_188_int = 526432; // 0x283 PushI
	SetMessage(var_188_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_189_int = 526433; // 0x288 PushI
	var_190_int = 27709; // 0x289 PushI
	var_191_int = 27708; // 0x28a PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x28b TObjFunc
	return 0; // 0x28d Return
	
Label_654:
	var_192_int = 27709; // 0x28e PushI
	var_193_bool = var_21_bool == var_192_int; // 0x28f Eq
	if(var_193_bool == 0) goto Label_677; // 0x290 JumpB
	var_194_string = ""; // 0x291 PushV
	var_194_string = "Neutral"; // 0x292 MovS
	func_372(var_22_cvector, var_194_string); // 0x293 NEW_2
	var_195_int = 526434; // 0x295 PushI
	SetMessage(var_195_int); // 0x296 TObjFunc
	ClearReplies(); // 0x298 TObjFunc
	var_196_int = 526435; // 0x29a PushI
	var_197_int = 27711; // 0x29b PushI
	var_198_int = 27710; // 0x29c PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x29d TObjFunc
	var_199_int = 529009; // 0x29f PushI
	var_200_int = 27711; // 0x2a0 PushI
	var_201_int = 30448; // 0x2a1 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2a2 TObjFunc
	return 0; // 0x2a4 Return
	
Label_677:
	var_202_int = 27711; // 0x2a5 PushI
	var_203_bool = var_21_bool == var_202_int; // 0x2a6 Eq
	if(var_203_bool == 0) goto Label_695; // 0x2a7 JumpB
	var_204_string = ""; // 0x2a8 PushV
	var_204_string = "Neutral"; // 0x2a9 MovS
	func_372(var_22_cvector, var_204_string); // 0x2aa NEW_2
	var_205_int = 526436; // 0x2ac PushI
	SetMessage(var_205_int); // 0x2ad TObjFunc
	ClearReplies(); // 0x2af TObjFunc
	var_206_int = 529010; // 0x2b1 PushI
	var_207_int = 30450; // 0x2b2 PushI
	var_208_int = 30449; // 0x2b3 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x2b4 TObjFunc
	return 0; // 0x2b6 Return
	
Label_695:
	var_209_int = 30450; // 0x2b7 PushI
	var_210_bool = var_21_bool == var_209_int; // 0x2b8 Eq
	if(var_210_bool == 0) goto Label_713; // 0x2b9 JumpB
	var_211_string = ""; // 0x2ba PushV
	var_211_string = "Oracle"; // 0x2bb MovS
	func_372(var_22_cvector, var_211_string); // 0x2bc NEW_2
	var_212_int = 529011; // 0x2be PushI
	SetMessage(var_212_int); // 0x2bf TObjFunc
	ClearReplies(); // 0x2c1 TObjFunc
	var_213_int = 526437; // 0x2c3 PushI
	var_214_int = -1; // 0x2c4 PushI
	var_215_int = 27712; // 0x2c5 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x2c6 TObjFunc
	return 0; // 0x2c8 Return
	
Label_713:
	var_3_string = 1; // 0x2c9 TMovB
	var_216_bool = 0; // 0x2ca PushV
	func_2358(var_216_bool); // 0x2cb NEW_2
	if(var_216_bool == 0) goto Label_721; // 0x2cd JumpB
	lshStopAnimation(); // 0x2ce Func
	goto Label_723; // 0x2d0 Jump
	
Label_723:
	return 0; // 0x2d3 Return
	
Label_721:
	StopAnimation(); // 0x2d1 Func
	
Label_725:
	return 0; // 0x2d5 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x3c4 PushI
	if(var_23_int == 0) goto Label_1428; // 0x3c5 JumpB
	func_2271(); // 0x3c7 NEW_2
	var_25_int = 28709; // 0x3c9 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x3ca Eq
	if(var_26_bool == 0) goto Label_977; // 0x3cb JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x3cc PushV
	var_27_object = var_1_object; // 0x3cd MovT
	var_28_object = var_0_object; // 0x3ce MovT
	func_2384(); // 0x3cf NEW_2
	
Label_977:
	var_60_int = 28711; // 0x3d1 PushI
	var_61_bool = var_22_cvector == var_60_int; // 0x3d2 Eq
	if(var_61_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x3d4 PushV
	var_62_object = var_1_object; // 0x3d5 MovT
	var_63_object = var_0_object; // 0x3d6 MovT
	func_2404(); // 0x3d7 NEW_2
	
Label_985:
	var_75_int = 28669; // 0x3d9 PushI
	var_76_bool = var_22_cvector == var_75_int; // 0x3da Eq
	if(var_76_bool == 0) goto Label_993; // 0x3db JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x3dc PushV
	var_77_object = var_1_object; // 0x3dd MovT
	var_78_object = var_0_object; // 0x3de MovT
	func_2384(); // 0x3df NEW_2
	
Label_993:
	var_79_int = 28696; // 0x3e1 PushI
	var_80_bool = var_22_cvector == var_79_int; // 0x3e2 Eq
	if(var_80_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x3e4 PushV
	var_81_object = var_1_object; // 0x3e5 MovT
	var_82_object = var_0_object; // 0x3e6 MovT
	func_2398(); // 0x3e7 NEW_2
	
Label_1001:
	var_85_int = 28699; // 0x3e9 PushI
	var_86_bool = var_21_bool == var_85_int; // 0x3ea Eq
	if(var_86_bool == 0) goto Label_1100; // 0x3eb JumpB
	var_87_bool = 0; // 0x3ec PushV
	var_87_bool = 0; // 0x3ed MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x3ee PushV
	var_89_object = var_1_object; // 0x3ef MovT
	func_2438(var_89_object); // 0x3f0 NEW_2
	if(var_88_bool == 0) goto Label_1017; // 0x3f2 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x3f3 PushV
	var_97_object = var_1_object; // 0x3f4 MovT
	func_2450(var_97_object); // 0x3f5 NEW_2
	if(var_96_bool == 0) goto Label_1017; // 0x3f7 JumpB
	var_87_bool = 1; // 0x3f8 MovB
	
Label_1017:
	if(var_87_bool == 0) goto Label_1038; // 0x3f9 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x3fa PushV
	var_102_object = var_1_object; // 0x3fb MovT
	var_103_object = var_0_object; // 0x3fc MovT
	func_2378(); // 0x3fd NEW_2
	var_106_string = ""; // 0x3ff PushV
	var_106_string = "Neutral"; // 0x400 MovS
	func_941(var_22_cvector, var_106_string); // 0x401 NEW_2
	var_123_int = 527376; // 0x403 PushI
	SetMessage(var_123_int); // 0x404 TObjFunc
	ClearReplies(); // 0x406 TObjFunc
	var_124_int = 527379; // 0x408 PushI
	var_125_int = 28703; // 0x409 PushI
	var_126_int = 28702; // 0x40a PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x40b TObjFunc
	return 0; // 0x40d Return
	
Label_1038:
	var_127_string = ""; // 0x40e PushV
	var_127_string = "Neutral"; // 0x40f MovS
	func_941(var_22_cvector, var_127_string); // 0x410 NEW_2
	var_128_int = 527212; // 0x412 PushI
	SetMessage(var_128_int); // 0x413 TObjFunc
	ClearReplies(); // 0x415 TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0x417 PushV
	var_130_object = var_1_object; // 0x418 MovT
	func_2438(var_130_object); // 0x419 NEW_2
	if(var_129_bool == 0) goto Label_1057; // 0x41b JumpB
	var_131_int = 527339; // 0x41c PushI
	var_132_int = 28658; // 0x41d PushI
	var_133_int = 28657; // 0x41e PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x41f TObjFunc
	
Label_1057:
	var_134_bool = 0; // 0x421 PushV
	var_134_bool = 1; // 0x422 MovB
	var_135_bool = 0; // 0x423 PushV
	var_135_bool = 0; // 0x424 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x425 PushV
	var_137_object = var_1_object; // 0x426 MovT
	func_2474(var_137_object); // 0x427 NEW_2
	if(var_136_bool == 0) goto Label_1072; // 0x429 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x42a PushV
	var_143_object = var_1_object; // 0x42b MovT
	func_2438(var_143_object); // 0x42c NEW_2
	if(var_142_bool == 0) goto Label_1072; // 0x42e JumpB
	var_135_bool = 1; // 0x42f MovB
	
Label_1072:
	if(var_135_bool == 0) goto Label_1088; // 0x430 JumpB
	var_144_bool = 0; // 0x431 PushV
	var_144_bool = 0; // 0x432 MovB
	var_145_bool = 0; var_146_object = Obj(); // 0x433 PushV
	var_146_object = var_1_object; // 0x434 MovT
	func_2462(var_146_object); // 0x435 NEW_2
	if(var_145_bool == 0) goto Label_1086; // 0x437 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x438 PushV
	var_152_object = var_1_object; // 0x439 MovT
	func_2474(var_152_object); // 0x43a NEW_2
	if(var_151_bool == 0) goto Label_1086; // 0x43c JumpB
	var_144_bool = 1; // 0x43d MovB
	
Label_1086:
	if(var_144_bool == 0) goto Label_1088; // 0x43e JumpB
	var_134_bool = 0; // 0x43f MovB
	
Label_1088:
	if(var_134_bool == 0) goto Label_1094; // 0x440 JumpB
	var_153_int = 527373; // 0x441 PushI
	var_154_int = 28707; // 0x442 PushI
	var_155_int = 28696; // 0x443 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x444 TObjFunc
	
Label_1094:
	var_156_int = 527218; // 0x446 PushI
	var_157_int = -1; // 0x447 PushI
	var_158_int = 28526; // 0x448 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x449 TObjFunc
	return 0; // 0x44b Return
	
Label_1100:
	var_159_int = 28707; // 0x44c PushI
	var_160_bool = var_21_bool == var_159_int; // 0x44d Eq
	if(var_160_bool == 0) goto Label_1118; // 0x44e JumpB
	var_161_string = ""; // 0x44f PushV
	var_161_string = "Refusal"; // 0x450 MovS
	func_941(var_22_cvector, var_161_string); // 0x451 NEW_2
	var_162_int = 527383; // 0x453 PushI
	SetMessage(var_162_int); // 0x454 TObjFunc
	ClearReplies(); // 0x456 TObjFunc
	var_163_int = 527384; // 0x458 PushI
	var_164_int = 28697; // 0x459 PushI
	var_165_int = 28708; // 0x45a PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x45b TObjFunc
	return 0; // 0x45d Return
	
Label_1118:
	var_166_int = 28697; // 0x45e PushI
	var_167_bool = var_21_bool == var_166_int; // 0x45f Eq
	if(var_167_bool == 0) goto Label_1136; // 0x460 JumpB
	var_168_string = ""; // 0x461 PushV
	var_168_string = "Refusal"; // 0x462 MovS
	func_941(var_22_cvector, var_168_string); // 0x463 NEW_2
	var_169_int = 527374; // 0x465 PushI
	SetMessage(var_169_int); // 0x466 TObjFunc
	ClearReplies(); // 0x468 TObjFunc
	var_170_int = 527375; // 0x46a PushI
	var_171_int = 28522; // 0x46b PushI
	var_172_int = 28698; // 0x46c PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x46d TObjFunc
	return 0; // 0x46f Return
	
Label_1136:
	var_173_int = 28522; // 0x470 PushI
	var_174_bool = var_21_bool == var_173_int; // 0x471 Eq
	if(var_174_bool == 0) goto Label_1154; // 0x472 JumpB
	var_175_string = ""; // 0x473 PushV
	var_175_string = "Neutral"; // 0x474 MovS
	func_941(var_22_cvector, var_175_string); // 0x475 NEW_2
	var_176_int = 527214; // 0x477 PushI
	SetMessage(var_176_int); // 0x478 TObjFunc
	ClearReplies(); // 0x47a TObjFunc
	var_177_int = 527215; // 0x47c PushI
	var_178_int = 28524; // 0x47d PushI
	var_179_int = 28523; // 0x47e PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x47f TObjFunc
	return 0; // 0x481 Return
	
Label_1154:
	var_180_int = 28524; // 0x482 PushI
	var_181_bool = var_21_bool == var_180_int; // 0x483 Eq
	if(var_181_bool == 0) goto Label_1172; // 0x484 JumpB
	var_182_string = ""; // 0x485 PushV
	var_182_string = "Neutral"; // 0x486 MovS
	func_941(var_22_cvector, var_182_string); // 0x487 NEW_2
	var_183_int = 527216; // 0x489 PushI
	SetMessage(var_183_int); // 0x48a TObjFunc
	ClearReplies(); // 0x48c TObjFunc
	var_184_int = 527217; // 0x48e PushI
	var_185_int = -1; // 0x48f PushI
	var_186_int = 28525; // 0x490 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x491 TObjFunc
	return 0; // 0x493 Return
	
Label_1172:
	var_187_int = 28658; // 0x494 PushI
	var_188_bool = var_21_bool == var_187_int; // 0x495 Eq
	if(var_188_bool == 0) goto Label_1190; // 0x496 JumpB
	var_189_string = ""; // 0x497 PushV
	var_189_string = "Neutral"; // 0x498 MovS
	func_941(var_22_cvector, var_189_string); // 0x499 NEW_2
	var_190_int = 527340; // 0x49b PushI
	SetMessage(var_190_int); // 0x49c TObjFunc
	ClearReplies(); // 0x49e TObjFunc
	var_191_int = 527355; // 0x4a0 PushI
	var_192_int = 28675; // 0x4a1 PushI
	var_193_int = 28674; // 0x4a2 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x4a3 TObjFunc
	return 0; // 0x4a5 Return
	
Label_1190:
	var_194_int = 28675; // 0x4a6 PushI
	var_195_bool = var_21_bool == var_194_int; // 0x4a7 Eq
	if(var_195_bool == 0) goto Label_1213; // 0x4a8 JumpB
	var_196_string = ""; // 0x4a9 PushV
	var_196_string = "Neutral"; // 0x4aa MovS
	func_941(var_22_cvector, var_196_string); // 0x4ab NEW_2
	var_197_int = 527356; // 0x4ad PushI
	SetMessage(var_197_int); // 0x4ae TObjFunc
	ClearReplies(); // 0x4b0 TObjFunc
	var_198_int = 527341; // 0x4b2 PushI
	var_199_int = 28660; // 0x4b3 PushI
	var_200_int = 28659; // 0x4b4 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x4b5 TObjFunc
	var_201_int = 527352; // 0x4b7 PushI
	var_202_int = 28671; // 0x4b8 PushI
	var_203_int = 28670; // 0x4b9 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x4ba TObjFunc
	return 0; // 0x4bc Return
	
Label_1213:
	var_204_int = 28671; // 0x4bd PushI
	var_205_bool = var_21_bool == var_204_int; // 0x4be Eq
	if(var_205_bool == 0) goto Label_1231; // 0x4bf JumpB
	var_206_string = ""; // 0x4c0 PushV
	var_206_string = "Neutral"; // 0x4c1 MovS
	func_941(var_22_cvector, var_206_string); // 0x4c2 NEW_2
	var_207_int = 527353; // 0x4c4 PushI
	SetMessage(var_207_int); // 0x4c5 TObjFunc
	ClearReplies(); // 0x4c7 TObjFunc
	var_208_int = 527354; // 0x4c9 PushI
	var_209_int = 28662; // 0x4ca PushI
	var_210_int = 28672; // 0x4cb PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x4cc TObjFunc
	return 0; // 0x4ce Return
	
Label_1231:
	var_211_int = 28660; // 0x4cf PushI
	var_212_bool = var_21_bool == var_211_int; // 0x4d0 Eq
	if(var_212_bool == 0) goto Label_1249; // 0x4d1 JumpB
	var_213_string = ""; // 0x4d2 PushV
	var_213_string = "Neutral"; // 0x4d3 MovS
	func_941(var_22_cvector, var_213_string); // 0x4d4 NEW_2
	var_214_int = 527342; // 0x4d6 PushI
	SetMessage(var_214_int); // 0x4d7 TObjFunc
	ClearReplies(); // 0x4d9 TObjFunc
	var_215_int = 527343; // 0x4db PushI
	var_216_int = 28662; // 0x4dc PushI
	var_217_int = 28661; // 0x4dd PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x4de TObjFunc
	return 0; // 0x4e0 Return
	
Label_1249:
	var_218_int = 28662; // 0x4e1 PushI
	var_219_bool = var_21_bool == var_218_int; // 0x4e2 Eq
	if(var_219_bool == 0) goto Label_1267; // 0x4e3 JumpB
	var_220_string = ""; // 0x4e4 PushV
	var_220_string = "Neutral"; // 0x4e5 MovS
	func_941(var_22_cvector, var_220_string); // 0x4e6 NEW_2
	var_221_int = 527344; // 0x4e8 PushI
	SetMessage(var_221_int); // 0x4e9 TObjFunc
	ClearReplies(); // 0x4eb TObjFunc
	var_222_int = 527345; // 0x4ed PushI
	var_223_int = 28664; // 0x4ee PushI
	var_224_int = 28663; // 0x4ef PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x4f0 TObjFunc
	return 0; // 0x4f2 Return
	
Label_1267:
	var_225_int = 28664; // 0x4f3 PushI
	var_226_bool = var_21_bool == var_225_int; // 0x4f4 Eq
	if(var_226_bool == 0) goto Label_1285; // 0x4f5 JumpB
	var_227_string = ""; // 0x4f6 PushV
	var_227_string = "Refusal"; // 0x4f7 MovS
	func_941(var_22_cvector, var_227_string); // 0x4f8 NEW_2
	var_228_int = 527346; // 0x4fa PushI
	SetMessage(var_228_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_229_int = 527347; // 0x4ff PushI
	var_230_int = 28666; // 0x500 PushI
	var_231_int = 28665; // 0x501 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x502 TObjFunc
	return 0; // 0x504 Return
	
Label_1285:
	var_232_int = 28666; // 0x505 PushI
	var_233_bool = var_21_bool == var_232_int; // 0x506 Eq
	if(var_233_bool == 0) goto Label_1303; // 0x507 JumpB
	var_234_string = ""; // 0x508 PushV
	var_234_string = "Oracle"; // 0x509 MovS
	func_941(var_22_cvector, var_234_string); // 0x50a NEW_2
	var_235_int = 527348; // 0x50c PushI
	SetMessage(var_235_int); // 0x50d TObjFunc
	ClearReplies(); // 0x50f TObjFunc
	var_236_int = 527349; // 0x511 PushI
	var_237_int = 28668; // 0x512 PushI
	var_238_int = 28667; // 0x513 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x514 TObjFunc
	return 0; // 0x516 Return
	
Label_1303:
	var_239_int = 28668; // 0x517 PushI
	var_240_bool = var_21_bool == var_239_int; // 0x518 Eq
	if(var_240_bool == 0) goto Label_1321; // 0x519 JumpB
	var_241_string = ""; // 0x51a PushV
	var_241_string = "Oracle"; // 0x51b MovS
	func_941(var_22_cvector, var_241_string); // 0x51c NEW_2
	var_242_int = 527350; // 0x51e PushI
	SetMessage(var_242_int); // 0x51f TObjFunc
	ClearReplies(); // 0x521 TObjFunc
	var_243_int = 527351; // 0x523 PushI
	var_244_int = -1; // 0x524 PushI
	var_245_int = 28669; // 0x525 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x526 TObjFunc
	return 0; // 0x528 Return
	
Label_1321:
	var_246_int = 28703; // 0x529 PushI
	var_247_bool = var_21_bool == var_246_int; // 0x52a Eq
	if(var_247_bool == 0) goto Label_1339; // 0x52b JumpB
	var_248_string = ""; // 0x52c PushV
	var_248_string = "Neutral"; // 0x52d MovS
	func_941(var_22_cvector, var_248_string); // 0x52e NEW_2
	var_249_int = 527380; // 0x530 PushI
	SetMessage(var_249_int); // 0x531 TObjFunc
	ClearReplies(); // 0x533 TObjFunc
	var_250_int = 527213; // 0x535 PushI
	var_251_int = 28693; // 0x536 PushI
	var_252_int = 28521; // 0x537 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x538 TObjFunc
	return 0; // 0x53a Return
	
Label_1339:
	var_253_int = 28693; // 0x53b PushI
	var_254_bool = var_21_bool == var_253_int; // 0x53c Eq
	if(var_254_bool == 0) goto Label_1357; // 0x53d JumpB
	var_255_string = ""; // 0x53e PushV
	var_255_string = "Neutral"; // 0x53f MovS
	func_941(var_22_cvector, var_255_string); // 0x540 NEW_2
	var_256_int = 527370; // 0x542 PushI
	SetMessage(var_256_int); // 0x543 TObjFunc
	ClearReplies(); // 0x545 TObjFunc
	var_257_int = 527371; // 0x547 PushI
	var_258_int = 28700; // 0x548 PushI
	var_259_int = 28694; // 0x549 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x54a TObjFunc
	return 0; // 0x54c Return
	
Label_1357:
	var_260_int = 28700; // 0x54d PushI
	var_261_bool = var_21_bool == var_260_int; // 0x54e Eq
	if(var_261_bool == 0) goto Label_1375; // 0x54f JumpB
	var_262_string = ""; // 0x550 PushV
	var_262_string = "Oracle"; // 0x551 MovS
	func_941(var_22_cvector, var_262_string); // 0x552 NEW_2
	var_263_int = 527377; // 0x554 PushI
	SetMessage(var_263_int); // 0x555 TObjFunc
	ClearReplies(); // 0x557 TObjFunc
	var_264_int = 527378; // 0x559 PushI
	var_265_int = 28695; // 0x55a PushI
	var_266_int = 28701; // 0x55b PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x55c TObjFunc
	return 0; // 0x55e Return
	
Label_1375:
	var_267_int = 28695; // 0x55f PushI
	var_268_bool = var_21_bool == var_267_int; // 0x560 Eq
	if(var_268_bool == 0) goto Label_1393; // 0x561 JumpB
	var_269_string = ""; // 0x562 PushV
	var_269_string = "Oracle"; // 0x563 MovS
	func_941(var_22_cvector, var_269_string); // 0x564 NEW_2
	var_270_int = 527372; // 0x566 PushI
	SetMessage(var_270_int); // 0x567 TObjFunc
	ClearReplies(); // 0x569 TObjFunc
	var_271_int = 527381; // 0x56b PushI
	var_272_int = 28706; // 0x56c PushI
	var_273_int = 28704; // 0x56d PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x56e TObjFunc
	return 0; // 0x570 Return
	
Label_1393:
	var_274_int = 28706; // 0x571 PushI
	var_275_bool = var_21_bool == var_274_int; // 0x572 Eq
	if(var_275_bool == 0) goto Label_1416; // 0x573 JumpB
	var_276_string = ""; // 0x574 PushV
	var_276_string = "Neutral"; // 0x575 MovS
	func_941(var_22_cvector, var_276_string); // 0x576 NEW_2
	var_277_int = 527382; // 0x578 PushI
	SetMessage(var_277_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_278_int = 527385; // 0x57d PushI
	var_279_int = -1; // 0x57e PushI
	var_280_int = 28709; // 0x57f PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x580 TObjFunc
	var_281_int = 527387; // 0x582 PushI
	var_282_int = -1; // 0x583 PushI
	var_283_int = 28711; // 0x584 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_3_string = 1; // 0x588 TMovB
	var_284_bool = 0; // 0x589 PushV
	func_2358(var_284_bool); // 0x58a NEW_2
	if(var_284_bool == 0) goto Label_1424; // 0x58c JumpB
	lshStopAnimation(); // 0x58d Func
	goto Label_1426; // 0x58f Jump
	
Label_1426:
	return 0; // 0x592 Return
	
Label_1424:
	StopAnimation(); // 0x590 Func
	
Label_1428:
	return 0; // 0x594 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x63c PushI
	if(var_23_int == 0) goto Label_1710; // 0x63d JumpB
	func_2271(); // 0x63f NEW_2
	var_25_int = 41258; // 0x641 PushI
	var_26_bool = var_21_int == var_25_int; // 0x642 Eq
	if(var_26_bool == 0) goto Label_1629; // 0x643 JumpB
	var_27_string = ""; // 0x644 PushV
	var_27_string = "Neutral"; // 0x645 MovS
	func_1573(var_22_cvector, var_27_string); // 0x646 NEW_2
	var_44_int = 539315; // 0x648 PushI
	SetMessage(var_44_int); // 0x649 TObjFunc
	ClearReplies(); // 0x64b TObjFunc
	var_45_int = 542623; // 0x64d PushI
	var_46_int = 45026; // 0x64e PushI
	var_47_int = 45025; // 0x64f PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x650 TObjFunc
	var_48_int = 542622; // 0x652 PushI
	var_49_int = -1; // 0x653 PushI
	var_50_int = 45024; // 0x654 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x655 TObjFunc
	var_51_int = 539316; // 0x657 PushI
	var_52_int = -1; // 0x658 PushI
	var_53_int = 41259; // 0x659 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x65a TObjFunc
	return 0; // 0x65c Return
	
Label_1629:
	var_54_int = 45026; // 0x65d PushI
	var_55_bool = var_21_int == var_54_int; // 0x65e Eq
	if(var_55_bool == 0) goto Label_1652; // 0x65f JumpB
	var_56_string = ""; // 0x660 PushV
	var_56_string = "Oracle"; // 0x661 MovS
	func_1573(var_22_cvector, var_56_string); // 0x662 NEW_2
	var_57_int = 542624; // 0x664 PushI
	SetMessage(var_57_int); // 0x665 TObjFunc
	ClearReplies(); // 0x667 TObjFunc
	var_58_int = 542629; // 0x669 PushI
	var_59_int = 45032; // 0x66a PushI
	var_60_int = 45031; // 0x66b PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x66c TObjFunc
	var_61_int = 542625; // 0x66e PushI
	var_62_int = 45028; // 0x66f PushI
	var_63_int = 45027; // 0x670 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x671 TObjFunc
	return 0; // 0x673 Return
	
Label_1652:
	var_64_int = 45028; // 0x674 PushI
	var_65_bool = var_21_int == var_64_int; // 0x675 Eq
	if(var_65_bool == 0) goto Label_1675; // 0x676 JumpB
	var_66_string = ""; // 0x677 PushV
	var_66_string = "Neutral"; // 0x678 MovS
	func_1573(var_22_cvector, var_66_string); // 0x679 NEW_2
	var_67_int = 542626; // 0x67b PushI
	SetMessage(var_67_int); // 0x67c TObjFunc
	ClearReplies(); // 0x67e TObjFunc
	var_68_int = 542627; // 0x680 PushI
	var_69_int = -1; // 0x681 PushI
	var_70_int = 45029; // 0x682 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x683 TObjFunc
	var_71_int = 542628; // 0x685 PushI
	var_72_int = -1; // 0x686 PushI
	var_73_int = 45030; // 0x687 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x688 TObjFunc
	return 0; // 0x68a Return
	
Label_1675:
	var_74_int = 45032; // 0x68b PushI
	var_75_bool = var_21_int == var_74_int; // 0x68c Eq
	if(var_75_bool == 0) goto Label_1698; // 0x68d JumpB
	var_76_string = ""; // 0x68e PushV
	var_76_string = "Oracle"; // 0x68f MovS
	func_1573(var_22_cvector, var_76_string); // 0x690 NEW_2
	var_77_int = 542630; // 0x692 PushI
	SetMessage(var_77_int); // 0x693 TObjFunc
	ClearReplies(); // 0x695 TObjFunc
	var_78_int = 542631; // 0x697 PushI
	var_79_int = -1; // 0x698 PushI
	var_80_int = 45033; // 0x699 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x69a TObjFunc
	var_81_int = 542632; // 0x69c PushI
	var_82_int = -1; // 0x69d PushI
	var_83_int = 45034; // 0x69e PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x69f TObjFunc
	return 0; // 0x6a1 Return
	
Label_1698:
	var_3_string = 1; // 0x6a2 TMovB
	var_84_bool = 0; // 0x6a3 PushV
	func_2358(var_84_bool); // 0x6a4 NEW_2
	if(var_84_bool == 0) goto Label_1706; // 0x6a6 JumpB
	lshStopAnimation(); // 0x6a7 Func
	goto Label_1708; // 0x6a9 Jump
	
Label_1708:
	return 0; // 0x6ac Return
	
Label_1706:
	StopAnimation(); // 0x6aa Func
	
Label_1710:
	return 0; // 0x6ae Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x6fc PushI
	var_23_bool = var_21_int == var_22_int; // 0x6fd Eq
	if(var_23_bool == 0) goto Label_1824; // 0x6fe JumpB
	func_1783(); // 0x700 NEW_2
	var_25_bool = 0; // 0x702 PushV
	var_25_bool = 0; // 0x703 MovB
	var_26_bool = 0; // 0x704 PushV
	func_1997(var_26_bool); // 0x705 NEW_2
	if(var_26_bool == 0) goto Label_1805; // 0x707 JumpB
	var_29_bool = 0; // 0x708 PushV
	func_1752(var_29_bool); // 0x709 NEW_2
	if(var_29_bool == 0) goto Label_1805; // 0x70b JumpB
	var_25_bool = 1; // 0x70c MovB
	
Label_1805:
	if(var_25_bool == 0) goto Label_1818; // 0x70d JumpB
	var_46_bool = 0; // 0x70e PushV
	func_1732(var_46_bool); // 0x70f NEW_2
	if(var_46_bool == 0) goto Label_1817; // 0x711 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x712 PushV
	var_67_object = Obj(); // 0x713 PushV
	func_2278(var_67_object); // 0x714 NEW_2
	var_66_object = var_67_object; // 0x715 Mov
	func_2145(var_66_object); // 0x717 NEW_2
	
Label_1817:
	goto Label_1824; // 0x719 Jump
	
Label_1824:
	return 0; // 0x720 Return
	
Label_1818:
	func_1747(var_21_int); // 0x71b NEW_2
	func_1774(); // 0x71e NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1965(); // 0x722 NEW_2
	func_1783(); // 0x725 NEW_2
	lshStopSpeech(); // 0x727 Func
	lshStopAnimation(); // 0x729 Func
	StopAsync(); // 0x72b Func
	Hold(); // 0x72d Func
	return 0; // 0x72f Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x730 Func
	func_1783(); // 0x733 NEW_2
	var_22_string = ""; // 0x735 PushV
	var_22_string = "Neutral"; // 0x736 MovS
	func_2225(var_22_string); // 0x737 NEW_2
	func_1774(); // 0x73a NEW_2
	return 0; // 0x73c Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x73e Push
	if(var_22_bool == 0) goto Label_1860; // 0x73f JumpB
	func_1774(); // 0x741 NEW_2
	goto Label_1864; // 0x743 Jump
	
Label_1864:
	return 0; // 0x748 Return
	
Label_1860:
	var_28_string = ""; // 0x744 PushV
	var_28_string = "Neutral"; // 0x745 MovS
	func_2225(var_28_string); // 0x746 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x749 PushV
	IsOverrideActive(var_23_bool); // 0x74a Func
	var_24_bool = var_23_bool == 0; // 0x74c Not
	if(var_24_bool == 0) goto Label_1893; // 0x74d JumpB
	EventDisable(0); // 0x74e EventDisable
	func_1965(); // 0x750 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x752 PushV
	var_26_object = var_21_object; // 0x753 Mov
	func_1988(var_26_object); // 0x754 NEW_2
	EventEnable(0); // 0x756 EventEnable
	var_39_object = Obj(); // 0x757 PushV
	var_39_object = var_21_object; // 0x758 Mov
	func_2596(var_39_object); // 0x759 NEW_2
	var_512_string = ""; // 0x75b PushV
	var_512_string = "Neutral"; // 0x75c MovS
	func_2225(var_512_string); // 0x75d NEW_2
	func_1783(); // 0x760 NEW_2
	func_1774(); // 0x763 NEW_2
	
Label_1893:
	return 2; // 0x765 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x6af PushGE
	var_21_bool = 0; // 0x6b0 MovB
	GlobalVars[1] = var_21_bool; // 0x6b1 PopGE
	func_1718(var_20_cvector); // 0x6b3 NEW_2
	return 0; // 0x6b5 Return
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 130.0; // 0x4 MovF
	func_2002(var_54_object, var_55_float); // 0x5 NEW_2
	var_99_bool = var_53_bool == 0; // 0x7 Not
	if(var_99_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_100_int = 0; // 0xd PushV
	func_2352(var_100_int); // 0xe NEW_2
	SetNPCName(var_100_int); // 0x10 ObjFunc
	var_101_int = 0; // 0x12 PushV
	func_2350(var_101_int); // 0x13 NEW_2
	SetNPCDescription(var_101_int); // 0x15 ObjFunc
	var_102_string = ""; // 0x17 PushV
	func_2354(var_102_string); // 0x18 NEW_2
	SetPhoto(var_102_string); // 0x1a ObjFunc
	var_103_string = ""; // 0x1c PushV
	func_2356(var_103_string); // 0x1d NEW_2
	SetPhoto2(var_103_string); // 0x1f ObjFunc
	var_104_int = 0; // 0x21 PushV
	func_2579(var_104_int); // 0x22 NEW_2
	SetPlayerName(var_104_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_112_bool = var_50_bool; // 0x29 Push
	if(var_112_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_113_bool = 0; var_114_object = Obj(); // 0x2f PushV
	var_115_object = Obj(); // 0x30 PushV
	func_2278(var_115_object); // 0x31 NEW_2
	var_114_object = var_115_object; // 0x32 Mov
	func_2087(var_113_bool, var_114_object); // 0x34 NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x36 PushV
	var_208_object = var_43_object; // 0x37 Mov
	var_209_object = var_49_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_52_bool); // 0x3d ObjFunc
	
Label_63:
	var_257_bool = var_52_bool == 0; // 0x3f Not
	if(var_257_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_52_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_258_object = Obj(); // 0x46 PushV
	var_258_object = var_43_object; // 0x47 Mov
	func_2070(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2311(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x907 PushV
	GetGameTime(var_170_float); // 0x908 Func
	var_171_int = 1; // 0x90a PushI
	var_172_int = 0; // 0x90b PushV
	var_173_int = 24; // 0x90c PushI
	var_172_int = var_170_float / var_170_float; // 0x90d Div2
	var_168_int = var_171_int + var_172_int; // 0x90e Add2
	return 2; // 0x90f Return
}


func_2320(var_266_bool, var_267_int)
{
	var_268_int = 0; // 0x911 PushV
	func_2311(var_268_int); // 0x912 NEW_2
	var_266_bool = var_268_int == var_267_int; // 0x914 Eq2
	return 0; // 0x915 Return
}


func_2579(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0xa13 PushV
	var_107_string = "branch"; // 0xa14 PushS
	GetVariable(var_107_string, var_106_int); // 0xa15 Func
	var_108_int = 0; // 0xa17 PushI
	var_109_bool = var_106_int == var_108_int; // 0xa18 Eq
	if(var_109_bool == 0) goto Label_2589; // 0xa19 JumpB
	var_104_int = 1; // 0xa1a MovI
	return 2; // 0xa1b Return
	
Label_2589:
	var_110_int = 1; // 0xa1d PushI
	var_111_bool = var_106_int == var_110_int; // 0xa1e Eq
	if(var_111_bool == 0) goto Label_2594; // 0xa1f JumpB
	var_104_int = 2; // 0xa20 MovI
	return 2; // 0xa21 Return
	
Label_2594:
	var_104_int = 3; // 0xa22 MovI
	return 2; // 0xa23 Return
}


func_2070()
{
	var_259_bool = 0; var_260_bool = 0; // 0x816 PushV
	CameraSwitchToNormal(); // 0x817 Func
	var_261_bool = 0; // 0x819 PushV
	func_2358(var_261_bool); // 0x81a NEW_2
	if(var_261_bool == 0) goto Label_2078; // 0x81c JumpB
	goto Label_2086; // 0x81d Jump
	
Label_2086:
	return 2; // 0x826 Return
	
Label_2078:
	var_262_string = "head"; // 0x81e PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x81f Func
	var_263_bool = var_260_bool; // 0x821 Push
	if(var_263_bool == 0) goto Label_2086; // 0x822 JumpB
	var_264_string = "head"; // 0x823 PushS
	UnlookAsync(var_264_string); // 0x824 Func
}


func_2326(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x916 PushV
	var_49_string = "idle"; // 0x917 MovS
	var_50_int = var_47_int; // 0x918 Push
	if(var_50_int == 0) goto Label_2331; // 0x919 JumpB
	var_49_string = var_49_string + var_47_int; // 0x91a Add2
	
Label_2331:
	var_46_string = var_49_string; // 0x91b Mov
	return 2; // 0x91c Return
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object; // 0x11d TMov
	var_1_object = var_293_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_299_int = 1; // 0x120 PushI
	if(var_299_int == 0) goto Label_342; // 0x121 JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x122 PushV
	var_301_object = var_1_object; // 0x123 MovT
	func_2414(var_301_object); // 0x124 NEW_2
	if(var_300_bool == 0) goto Label_315; // 0x126 JumpB
	var_308_string = ""; // 0x127 PushV
	var_308_string = "Neutral"; // 0x128 MovS
	func_372(var_294_object, var_308_string); // 0x129 NEW_2
	var_316_int = 526430; // 0x12b PushI
	SetMessage(var_316_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_317_int = 526431; // 0x130 PushI
	var_318_int = 27707; // 0x131 PushI
	var_319_int = 27706; // 0x132 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x133 TObjFunc
	var_320_int = 529003; // 0x135 PushI
	var_321_int = 30441; // 0x136 PushI
	var_322_int = 30440; // 0x137 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x138 TObjFunc
	goto Label_342; // 0x13a Jump
	
Label_342:
	var_323_bool = 0; // 0x156 PushV
	func_2358(var_323_bool); // 0x157 NEW_2
	if(var_323_bool == 0) goto Label_357; // 0x159 JumpB
	
Label_346:
	lshWaitForAnimEnd(); // 0x15a Func
	var_324_string = var_3_string; // 0x15c PushT
	if(var_324_string == 0) goto Label_351; // 0x15d JumpB
	goto Label_356; // 0x15e Jump
	
Label_356:
	goto Label_371; // 0x164 Jump
	
Label_371:
	return 0; // 0x173 Return
	
Label_351:
	var_325_string = ""; // 0x15f PushV
	var_325_string = var_2_object; // 0x160 MovT
	func_2225(var_325_string); // 0x161 NEW_2
	goto Label_346; // 0x163 Jump
	
Label_357:
	var_326_string = "all"; // 0x165 PushS
	var_327_string = "idle"; // 0x166 PushS
	PlayAnimation(var_326_string, var_327_string); // 0x167 Func
	
Label_361:
	WaitForAnimEnd(); // 0x169 Func
	var_328_string = var_3_string; // 0x16b PushT
	if(var_328_string == 0) goto Label_366; // 0x16c JumpB
	goto Label_371; // 0x16d Jump
	
Label_366:
	var_329_string = "all"; // 0x16e PushS
	var_330_string = "idle"; // 0x16f PushS
	PlayAnimation(var_329_string, var_330_string); // 0x170 Func
	goto Label_361; // 0x172 Jump
	
Label_315:
	var_331_string = ""; // 0x13b PushV
	var_331_string = "Neutral"; // 0x13c MovS
	func_372(var_294_object, var_331_string); // 0x13d NEW_2
	var_332_int = 526438; // 0x13f PushI
	SetMessage(var_332_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_333_bool = 0; var_334_object = Obj(); // 0x144 PushV
	var_334_object = var_1_object; // 0x145 MovT
	func_2426(var_334_object); // 0x146 NEW_2
	if(var_333_bool == 0) goto Label_334; // 0x148 JumpB
	var_339_int = 526450; // 0x149 PushI
	var_340_int = 27726; // 0x14a PushI
	var_341_int = 27725; // 0x14b PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x14c TObjFunc
	
Label_334:
	var_342_int = 526439; // 0x14e PushI
	var_343_int = -1; // 0x14f PushI
	var_344_int = 27714; // 0x150 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x151 TObjFunc
	goto Label_342; // 0x153 Jump
}


func_2333(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x91d PushV
	var_43_int = 0; // 0x91e MovI
	
Label_2335:
	var_45_string = "all"; // 0x91f PushS
	var_46_string = ""; var_47_int = 0; // 0x920 PushV
	var_47_int = var_43_int; // 0x921 Mov
	func_2326(var_46_string, var_47_int); // 0x922 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x924 Func
	var_51_bool = var_44_bool == 0; // 0x926 Not
	if(var_51_bool == 0) goto Label_2345; // 0x927 JumpB
	goto Label_2348; // 0x928 Jump
	
Label_2348:
	var_40_int = var_43_int; // 0x92c Mov
	return 4; // 0x92d Return
	
Label_2345:
	var_52_int = 1; // 0x929 PushI
	var_43_int = var_43_int + var_52_int; // 0x92a Add2
	goto Label_2335; // 0x92b Jump
}


func_2551(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x9f7 PushV
	var_45_object = Obj(); // 0x9f8 PushV
	func_2538(var_45_object); // 0x9f9 NEW_2
	var_42_object = var_45_object; // 0x9fa Mov
	Find(var_38_int, var_43_object); // 0x9fc ObjFunc
	var_50_bool = var_43_object == 0; // 0x9fe Not
	if(var_50_bool == 0) goto Label_2566; // 0x9ff JumpB
	var_51_string = "Can't find diary parent with id: "; // 0xa00 PushS
	var_52_int = var_51_string + var_38_int; // 0xa01 Add
	Trace(var_52_int); // 0xa02 Func
	var_36_bool = 0; // 0xa04 MovB
	return 6; // 0xa05 Return
	
Label_2566:
	AddChild(var_37_object); // 0xa06 ObjFunc
	var_53_int = 7; // 0xa08 PushI
	SendWorldWndMessage(var_53_int); // 0xa09 Func
	GetCategory(var_44_int); // 0xa0b ObjFunc
	SetDiarySection(var_44_int); // 0xa0d Func
	var_36_bool = 0; // 0xa0f MovB
	return 6; // 0xa10 Return
}


func_2596(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0xa25 PushGE
	var_41_bool = var_40_bool == 0; // 0xa26 Not
	if(var_41_bool == 0) goto Label_2609; // 0xa27 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0xa28 PushV
	var_43_object = var_39_object; // 0xa29 Mov
	TaskCall(0); // 0xa2a TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0xa2b NEW_2
	TaskReturn(); // 0xa2c TaskReturn
	var_265_bool = GlobalVars[1]; // 0xa2e PushGE
	var_265_bool = 1; // 0xa2f MovB
	GlobalVars[1] = var_265_bool; // 0xa30 PopGE
	
Label_2609:
	var_266_bool = 0; var_267_int = 0; // 0xa31 PushV
	var_267_int = 8; // 0xa32 MovI
	func_2320(var_266_bool, var_267_int); // 0xa33 NEW_2
	if(var_266_bool == 0) goto Label_2621; // 0xa35 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0xa36 PushV
	var_270_object = var_39_object; // 0xa37 Mov
	TaskCall(2); // 0xa38 TaskCall
	func_203(var_271_object, var_269_int, var_270_object); // 0xa39 NEW_2
	TaskReturn(); // 0xa3a TaskReturn
	return 0; // 0xa3c Return
	
Label_2621:
	var_347_bool = 0; var_348_int = 0; // 0xa3d PushV
	var_348_int = 11; // 0xa3e MovI
	func_2320(var_347_bool, var_348_int); // 0xa3f NEW_2
	if(var_347_bool == 0) goto Label_2633; // 0xa41 JumpB
	var_349_int = 0; var_350_object = Obj(); // 0xa42 PushV
	var_350_object = var_39_object; // 0xa43 Mov
	TaskCall(4); // 0xa44 TaskCall
	func_726(var_351_object, var_349_int, var_350_object); // 0xa45 NEW_2
	TaskReturn(); // 0xa46 TaskReturn
	return 0; // 0xa48 Return
	
Label_2633:
	var_451_bool = 0; var_452_int = 0; // 0xa49 PushV
	var_452_int = 12; // 0xa4a MovI
	func_2320(var_451_bool, var_452_int); // 0xa4b NEW_2
	if(var_451_bool == 0) goto Label_2645; // 0xa4d JumpB
	var_453_int = 0; var_454_object = Obj(); // 0xa4e PushV
	var_454_object = var_39_object; // 0xa4f Mov
	TaskCall(6); // 0xa50 TaskCall
	func_1429(var_455_object, var_453_int, var_454_object); // 0xa51 NEW_2
	TaskReturn(); // 0xa52 TaskReturn
	return 0; // 0xa54 Return
	
Label_2645:
	return 0; // 0xa55 Return
}


func_1573(var_2_object, var_484_string)
{
	var_485_bool = 0; // 0x626 PushV
	func_2358(var_485_bool); // 0x627 NEW_2
	var_486_bool = var_485_bool == 0; // 0x629 Not
	if(var_486_bool == 0) goto Label_1580; // 0x62a JumpB
	return 0; // 0x62b Return
	
Label_1580:
	var_487_bool = var_484_string == var_2_object; // 0x62c Eq
	if(var_487_bool == 0) goto Label_1583; // 0x62d JumpB
	return 0; // 0x62e Return
	
Label_1583:
	var_488_string = ""; var_489_bool = 0; // 0x62f PushV
	var_488_string = var_484_string; // 0x630 Mov
	var_490_string = ""; // 0x631 PushS
	var_491_bool = var_484_string == var_490_string; // 0x632 Eq
	if(var_491_bool == 0) goto Label_1590; // 0x633 JumpB
	var_489_bool = 0; // 0x634 MovB
	goto Label_1591; // 0x635 Jump
	
Label_1591:
	func_2241(var_488_string, var_489_bool); // 0x637 NEW_2
	var_2_object = var_484_string; // 0x639 TMov
	return 0; // 0x63a Return
	
Label_1590:
	var_489_bool = 1; // 0x636 MovB
}


func_2087(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x827 PushV
	var_122_string = "voice_common"; // 0x828 PushS
	GetVariable(var_122_string, var_120_int); // 0x829 Func
	var_123_int = var_120_int; // 0x82b Push
	if(var_123_int == 0) goto Label_2125; // 0x82c JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x82d PushV
	var_125_object = var_114_object; // 0x82e Mov
	func_2145(var_125_object); // 0x82f NEW_2
	var_154_bool = var_124_bool == 0; // 0x831 Not
	if(var_154_bool == 0) goto Label_2107; // 0x832 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x833 PushV
	var_156_object = var_114_object; // 0x834 Mov
	func_2182(var_156_object); // 0x835 NEW_2
	var_190_bool = var_155_bool == 0; // 0x837 Not
	if(var_190_bool == 0) goto Label_2107; // 0x838 JumpB
	var_113_bool = 0; // 0x839 MovB
	return 4; // 0x83a Return
	
Label_2107:
	var_191_int = 2; // 0x83b PushI
	irand(var_121_int, var_191_int); // 0x83c Func
	var_192_int = var_121_int; // 0x83e Push
	if(var_192_int == 0) goto Label_2120; // 0x83f JumpB
	var_193_string = "voice_common"; // 0x840 PushS
	var_194_int = 1; // 0x841 PushI
	var_195_int = var_120_int + var_194_int; // 0x842 Add
	var_196_int = 3; // 0x843 PushI
	var_197_int = var_195_int / var_196_int; // 0x844 Mod
	SetVariable(var_193_string, var_197_int); // 0x845 Func
	goto Label_2124; // 0x847 Jump
	
Label_2124:
	goto Label_2143; // 0x84c Jump
	
Label_2143:
	var_113_bool = 1; // 0x85f MovB
	return 4; // 0x860 Return
	
Label_2120:
	var_198_string = "voice_common"; // 0x848 PushS
	var_199_int = 0; // 0x849 PushI
	SetVariable(var_198_string, var_199_int); // 0x84a Func
	
Label_2125:
	var_200_bool = 0; var_201_object = Obj(); // 0x84d PushV
	var_201_object = var_114_object; // 0x84e Mov
	func_2182(var_201_object); // 0x84f NEW_2
	var_202_bool = var_200_bool == 0; // 0x851 Not
	if(var_202_bool == 0) goto Label_2139; // 0x852 JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x853 PushV
	var_204_object = var_114_object; // 0x854 Mov
	func_2145(var_204_object); // 0x855 NEW_2
	var_205_bool = var_203_bool == 0; // 0x857 Not
	if(var_205_bool == 0) goto Label_2139; // 0x858 JumpB
	var_113_bool = 0; // 0x859 MovB
	return 4; // 0x85a Return
	
Label_2139:
	var_206_string = "voice_common"; // 0x85b PushS
	var_207_int = 1; // 0x85c PushI
	SetVariable(var_206_string, var_207_int); // 0x85d Func
}


func_807(var_0_object, var_1_object, var_2_object, var_3_string, var_373_object, var_374_object)
{
	var_0_object = var_374_object; // 0x328 TMov
	var_1_object = var_373_object; // 0x329 TMov
	var_3_string = 0; // 0x32a TMovB
	var_379_int = 1; // 0x32b PushI
	if(var_379_int == 0) goto Label_911; // 0x32c JumpB
	var_380_bool = 0; // 0x32d PushV
	var_380_bool = 0; // 0x32e MovB
	var_381_bool = 0; var_382_object = Obj(); // 0x32f PushV
	var_382_object = var_1_object; // 0x330 MovT
	func_2438(var_382_object); // 0x331 NEW_2
	if(var_381_bool == 0) goto Label_826; // 0x333 JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x334 PushV
	var_388_object = var_1_object; // 0x335 MovT
	func_2450(var_388_object); // 0x336 NEW_2
	if(var_387_bool == 0) goto Label_826; // 0x338 JumpB
	var_380_bool = 1; // 0x339 MovB
	
Label_826:
	if(var_380_bool == 0) goto Label_847; // 0x33a JumpB
	var_393_object = Obj(); var_394_object = Obj(); // 0x33b PushV
	var_393_object = var_1_object; // 0x33c MovT
	var_394_object = var_0_object; // 0x33d MovT
	func_2378(); // 0x33e NEW_2
	var_397_string = ""; // 0x340 PushV
	var_397_string = "Neutral"; // 0x341 MovS
	func_941(var_374_object, var_397_string); // 0x342 NEW_2
	var_405_int = 527376; // 0x344 PushI
	SetMessage(var_405_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_406_int = 527379; // 0x349 PushI
	var_407_int = 28703; // 0x34a PushI
	var_408_int = 28702; // 0x34b PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x34c TObjFunc
	goto Label_911; // 0x34e Jump
	
Label_911:
	var_409_bool = 0; // 0x38f PushV
	func_2358(var_409_bool); // 0x390 NEW_2
	if(var_409_bool == 0) goto Label_926; // 0x392 JumpB
	
Label_915:
	lshWaitForAnimEnd(); // 0x393 Func
	var_410_string = var_3_string; // 0x395 PushT
	if(var_410_string == 0) goto Label_920; // 0x396 JumpB
	goto Label_925; // 0x397 Jump
	
Label_925:
	goto Label_940; // 0x39d Jump
	
Label_940:
	return 0; // 0x3ac Return
	
Label_920:
	var_411_string = ""; // 0x398 PushV
	var_411_string = var_2_object; // 0x399 MovT
	func_2225(var_411_string); // 0x39a NEW_2
	goto Label_915; // 0x39c Jump
	
Label_926:
	var_412_string = "all"; // 0x39e PushS
	var_413_string = "idle"; // 0x39f PushS
	PlayAnimation(var_412_string, var_413_string); // 0x3a0 Func
	
Label_930:
	WaitForAnimEnd(); // 0x3a2 Func
	var_414_string = var_3_string; // 0x3a4 PushT
	if(var_414_string == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_940; // 0x3a6 Jump
	
Label_935:
	var_415_string = "all"; // 0x3a7 PushS
	var_416_string = "idle"; // 0x3a8 PushS
	PlayAnimation(var_415_string, var_416_string); // 0x3a9 Func
	goto Label_930; // 0x3ab Jump
	
Label_847:
	var_417_string = ""; // 0x34f PushV
	var_417_string = "Neutral"; // 0x350 MovS
	func_941(var_374_object, var_417_string); // 0x351 NEW_2
	var_418_int = 527212; // 0x353 PushI
	SetMessage(var_418_int); // 0x354 TObjFunc
	ClearReplies(); // 0x356 TObjFunc
	var_419_bool = 0; var_420_object = Obj(); // 0x358 PushV
	var_420_object = var_1_object; // 0x359 MovT
	func_2438(var_420_object); // 0x35a NEW_2
	if(var_419_bool == 0) goto Label_866; // 0x35c JumpB
	var_421_int = 527339; // 0x35d PushI
	var_422_int = 28658; // 0x35e PushI
	var_423_int = 28657; // 0x35f PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x360 TObjFunc
	
Label_866:
	var_424_bool = 0; // 0x362 PushV
	var_424_bool = 1; // 0x363 MovB
	var_425_bool = 0; // 0x364 PushV
	var_425_bool = 0; // 0x365 MovB
	var_426_bool = 0; var_427_object = Obj(); // 0x366 PushV
	var_427_object = var_1_object; // 0x367 MovT
	func_2474(var_427_object); // 0x368 NEW_2
	if(var_426_bool == 0) goto Label_881; // 0x36a JumpB
	var_432_bool = 0; var_433_object = Obj(); // 0x36b PushV
	var_433_object = var_1_object; // 0x36c MovT
	func_2438(var_433_object); // 0x36d NEW_2
	if(var_432_bool == 0) goto Label_881; // 0x36f JumpB
	var_425_bool = 1; // 0x370 MovB
	
Label_881:
	if(var_425_bool == 0) goto Label_897; // 0x371 JumpB
	var_434_bool = 0; // 0x372 PushV
	var_434_bool = 0; // 0x373 MovB
	var_435_bool = 0; var_436_object = Obj(); // 0x374 PushV
	var_436_object = var_1_object; // 0x375 MovT
	func_2462(var_436_object); // 0x376 NEW_2
	if(var_435_bool == 0) goto Label_895; // 0x378 JumpB
	var_441_bool = 0; var_442_object = Obj(); // 0x379 PushV
	var_442_object = var_1_object; // 0x37a MovT
	func_2474(var_442_object); // 0x37b NEW_2
	if(var_441_bool == 0) goto Label_895; // 0x37d JumpB
	var_434_bool = 1; // 0x37e MovB
	
Label_895:
	if(var_434_bool == 0) goto Label_897; // 0x37f JumpB
	var_424_bool = 0; // 0x380 MovB
	
Label_897:
	if(var_424_bool == 0) goto Label_903; // 0x381 JumpB
	var_443_int = 527373; // 0x382 PushI
	var_444_int = 28707; // 0x383 PushI
	var_445_int = 28696; // 0x384 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x385 TObjFunc
	
Label_903:
	var_446_int = 527218; // 0x387 PushI
	var_447_int = -1; // 0x388 PushI
	var_448_int = 28526; // 0x389 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x38a TObjFunc
	goto Label_911; // 0x38c Jump
}


func_2350(var_101_int)
{
	var_101_int = 515553; // 0x92e MovI
	return 0; // 0x92f Return
}


func_2352(var_100_int)
{
	var_100_int = 502878; // 0x930 MovI
	return 0; // 0x931 Return
}


func_2354(var_102_string)
{
	var_102_string = "ui/NPC_Starshina.png"; // 0x932 MovS
	return 0; // 0x933 Return
}


func_2356(var_103_string)
{
	var_103_string = "ui/NPC_Starshina_b.png"; // 0x934 MovS
	return 0; // 0x935 Return
}


func_2358(var_95_bool)
{
	var_95_bool = 1; // 0x936 MovB
	return 0; // 0x937 Return
}


func_2360()
{
	var_29_string = "k8q01"; // 0x939 PushS
	var_30_int = 5; // 0x93a PushI
	SetVariable(var_29_string, var_30_int); // 0x93b Func
	func_2525(); // 0x93e NEW_2
	return 0; // 0x940 Return
}


func_2369()
{
	var_58_string = "k8q01"; // 0x942 PushS
	var_59_int = 7; // 0x943 PushI
	SetVariable(var_58_string, var_59_int); // 0x944 Func
	func_2512(); // 0x947 NEW_2
	return 0; // 0x949 Return
}


func_2378()
{
	var_395_string = "ook11Starshina1"; // 0x94b PushS
	var_396_int = 1; // 0x94c PushI
	SetVariable(var_395_string, var_396_int); // 0x94d Func
	return 0; // 0x94f Return
}


func_2384()
{
	var_29_string = "k11q01"; // 0x951 PushS
	var_30_int = 6; // 0x952 PushI
	SetVariable(var_29_string, var_30_int); // 0x953 Func
	func_2499(); // 0x956 NEW_2
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x958 PushV
	var_55_string = "quest_k11_01"; // 0x959 MovS
	var_56_string = "place_burah"; // 0x95a MovS
	func_2299(var_54_bool, var_55_string, var_56_string); // 0x95b NEW_2
	return 0; // 0x95d Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x52 TMov
	var_1_object = var_208_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_214_int = 1; // 0x55 PushI
	if(var_214_int == 0) goto Label_109; // 0x56 JumpB
	var_215_string = ""; // 0x57 PushV
	var_215_string = "Neutral"; // 0x58 MovS
	func_139(var_209_object, var_215_string); // 0x59 NEW_2
	var_232_int = 525528; // 0x5b PushI
	SetMessage(var_232_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_233_int = 525529; // 0x60 PushI
	var_234_int = -1; // 0x61 PushI
	var_235_int = 26885; // 0x62 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x63 TObjFunc
	var_236_int = 529271; // 0x65 PushI
	var_237_int = -1; // 0x66 PushI
	var_238_int = 30724; // 0x67 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_239_bool = 0; // 0x6d PushV
	func_2358(var_239_bool); // 0x6e NEW_2
	if(var_239_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_240_string = var_3_string; // 0x73 PushT
	if(var_240_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_241_string = ""; // 0x76 PushV
	var_241_string = var_2_object; // 0x77 MovT
	func_2225(var_241_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_252_string = "all"; // 0x7c PushS
	var_253_string = "idle"; // 0x7d PushS
	PlayAnimation(var_252_string, var_253_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_254_string = var_3_string; // 0x82 PushT
	if(var_254_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_255_string = "all"; // 0x85 PushS
	var_256_string = "idle"; // 0x86 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2398()
{
	var_83_string = "ook11Starshina2"; // 0x95f PushS
	var_84_int = 1; // 0x960 PushI
	SetVariable(var_83_string, var_84_int); // 0x961 Func
	return 0; // 0x963 Return
}


func_2145(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x861 PushV
	var_131_string = "c"; // 0x862 MovS
	var_132_int = 0; // 0x863 MovI
	
Label_2148:
	var_136_int = 1; // 0x864 PushI
	if(var_136_int == 0) goto Label_2161; // 0x865 JumpB
	var_137_int = 1; // 0x866 PushI
	var_138_int = var_132_int + var_137_int; // 0x867 Add
	var_139_int = var_131_string + var_138_int; // 0x868 Add
	HasProperty(var_139_int, var_133_bool); // 0x869 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x86b Not
	if(var_140_bool == 0) goto Label_2158; // 0x86c JumpB
	goto Label_2161; // 0x86d Jump
	
Label_2161:
	var_141_bool = var_132_int == 0; // 0x871 Not
	if(var_141_bool == 0) goto Label_2165; // 0x872 JumpB
	var_124_bool = 0; // 0x873 MovB
	return 10; // 0x874 Return
	
Label_2165:
	var_134_int = 0; // 0x875 MovI
	var_142_int = 1; // 0x876 PushI
	var_143_bool = var_132_int > var_142_int; // 0x877 GT
	if(var_143_bool == 0) goto Label_2171; // 0x878 JumpB
	irand(var_134_int, var_132_int); // 0x879 Func
	
Label_2171:
	var_144_int = 1; // 0x87b PushI
	var_145_int = var_134_int + var_144_int; // 0x87c Add
	var_146_int = var_131_string + var_145_int; // 0x87d Add
	GetProperty(var_146_int, var_135_string); // 0x87e ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x880 PushV
	var_148_string = var_135_string; // 0x881 Mov
	func_2256(var_147_bool, var_148_string); // 0x882 NEW_2
	var_124_bool = var_147_bool; // 0x883 Mov
	return 10; // 0x885 Return
	
Label_2158:
	var_153_int = 1; // 0x86e PushI
	var_132_int = var_132_int + var_153_int; // 0x86f Add2
	goto Label_2148; // 0x870 Jump
}


func_2404()
{
	func_2486(); // 0x966 NEW_2
	var_72_bool = 0; var_73_string = ""; var_74_string = ""; // 0x968 PushV
	var_73_string = "quest_k11_01"; // 0x969 MovS
	var_74_string = "fail"; // 0x96a MovS
	func_2299(var_72_bool, var_73_string, var_74_string); // 0x96b NEW_2
	return 0; // 0x96d Return
}


func_1894()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x766 PushV
	WaitForAnimEnd(); // 0x767 Func
	var_38_bool = 0; // 0x769 PushV
	func_1997(var_38_bool); // 0x76a NEW_2
	var_39_bool = var_38_bool == 0; // 0x76c Not
	if(var_39_bool == 0) goto Label_1903; // 0x76d JumpB
	return 12; // 0x76e Return
	
Label_1903:
	var_40_int = 0; // 0x76f PushV
	func_2333(var_40_int); // 0x770 NEW_2
	var_32_int = var_40_int; // 0x771 Mov
	var_33_int = 0; // 0x773 MovI
	
Label_1908:
	var_53_bool = 0; // 0x774 PushV
	var_53_bool = 0; // 0x775 MovB
	var_54_int = 5; // 0x776 PushI
	var_55_bool = var_33_int < var_54_int; // 0x777 LT
	if(var_55_bool == 0) goto Label_1918; // 0x778 JumpB
	var_56_bool = 0; // 0x779 PushV
	func_1997(var_56_bool); // 0x77a NEW_2
	if(var_56_bool == 0) goto Label_1918; // 0x77c JumpB
	var_53_bool = 1; // 0x77d MovB
	
Label_1918:
	if(var_53_bool == 0) goto Label_1960; // 0x77e JumpB
	var_57_bool = var_32_int == 0; // 0x77f Not
	if(var_57_bool == 0) goto Label_1928; // 0x780 JumpB
	var_58_int = 3; // 0x781 PushI
	Sleep(var_58_int, var_34_bool); // 0x782 Func
	var_59_bool = var_34_bool == 0; // 0x784 Not
	if(var_59_bool == 0) goto Label_1927; // 0x785 JumpB
	goto Label_1960; // 0x786 Jump
	
Label_1960:
	ResetAAS(); // 0x7a8 Func
	return 12; // 0x7aa Return
	
Label_1927:
	goto Label_1949; // 0x787 Jump
	
Label_1949:
	var_60_bool = 0; // 0x79d PushV
	func_1963(var_60_bool); // 0x79e NEW_2
	var_61_bool = var_60_bool == 0; // 0x7a0 Not
	if(var_61_bool == 0) goto Label_1955; // 0x7a1 JumpB
	goto Label_1960; // 0x7a2 Jump
	
Label_1955:
	ResetAAS(); // 0x7a3 Func
	var_62_int = 1; // 0x7a5 PushI
	var_33_int = var_33_int + var_62_int; // 0x7a6 Add2
	goto Label_1908; // 0x7a7 Jump
	
Label_1928:
	irand(var_35_int, var_32_int); // 0x788 Func
	var_63_int = 5; // 0x78a PushI
	irand(var_36_int, var_63_int); // 0x78b Func
	var_64_int = 0; // 0x78d PushI
	var_65_bool = var_36_int != var_64_int; // 0x78e Neq
	if(var_65_bool == 0) goto Label_1937; // 0x78f JumpB
	var_35_int = 0; // 0x790 MovI
	
Label_1937:
	var_66_string = "all"; // 0x791 PushS
	var_67_string = ""; var_68_int = 0; // 0x792 PushV
	var_68_int = var_35_int; // 0x793 Mov
	func_2326(var_67_string, var_68_int); // 0x794 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x796 Func
	WaitForAnimEnd(var_37_bool); // 0x798 Func
	var_69_bool = var_37_bool == 0; // 0x79a Not
	if(var_69_bool == 0) goto Label_1949; // 0x79b JumpB
	goto Label_1960; // 0x79c Jump
}


func_2414(var_300_bool)
{
	var_302_int = 0; var_303_string = ""; // 0x96f PushV
	var_303_string = "k8q01"; // 0x970 MovS
	func_2294(var_302_int, var_303_string); // 0x971 NEW_2
	var_306_int = 4; // 0x973 PushI
	var_307_bool = var_302_int == var_306_int; // 0x974 Eq
	if(var_307_bool == 0) goto Label_2424; // 0x975 JumpB
	var_300_bool = 1; // 0x976 MovB
	return 0; // 0x977 Return
	
Label_2424:
	var_300_bool = 0; // 0x978 MovB
	return 0; // 0x979 Return
}


func_372(var_2_object, var_308_string)
{
	var_309_bool = 0; // 0x175 PushV
	func_2358(var_309_bool); // 0x176 NEW_2
	var_310_bool = var_309_bool == 0; // 0x178 Not
	if(var_310_bool == 0) goto Label_379; // 0x179 JumpB
	return 0; // 0x17a Return
	
Label_379:
	var_311_bool = var_308_string == var_2_object; // 0x17b Eq
	if(var_311_bool == 0) goto Label_382; // 0x17c JumpB
	return 0; // 0x17d Return
	
Label_382:
	var_312_string = ""; var_313_bool = 0; // 0x17e PushV
	var_312_string = var_308_string; // 0x17f Mov
	var_314_string = ""; // 0x180 PushS
	var_315_bool = var_308_string == var_314_string; // 0x181 Eq
	if(var_315_bool == 0) goto Label_389; // 0x182 JumpB
	var_313_bool = 0; // 0x183 MovB
	goto Label_390; // 0x184 Jump
	
Label_390:
	func_2241(var_312_string, var_313_bool); // 0x186 NEW_2
	var_2_object = var_308_string; // 0x188 TMov
	return 0; // 0x189 Return
	
Label_389:
	var_313_bool = 1; // 0x185 MovB
}


func_2426(var_333_bool)
{
	var_335_int = 0; var_336_string = ""; // 0x97b PushV
	var_336_string = "k8q01"; // 0x97c MovS
	func_2294(var_335_int, var_336_string); // 0x97d NEW_2
	var_337_int = 6; // 0x97f PushI
	var_338_bool = var_335_int == var_337_int; // 0x980 Eq
	if(var_338_bool == 0) goto Label_2436; // 0x981 JumpB
	var_333_bool = 1; // 0x982 MovB
	return 0; // 0x983 Return
	
Label_2436:
	var_333_bool = 0; // 0x984 MovB
	return 0; // 0x985 Return
}


func_2182(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x886 PushV
	var_167_string = "d"; // 0x887 PushS
	var_168_int = 0; // 0x888 PushV
	func_2311(var_168_int); // 0x889 NEW_2
	var_174_int = var_167_string + var_168_int; // 0x88b Add
	var_175_string = "m"; // 0x88c PushS
	var_162_string = var_174_int + var_175_string; // 0x88d Add2
	var_163_int = 0; // 0x88e MovI
	
Label_2191:
	var_176_int = 1; // 0x88f PushI
	if(var_176_int == 0) goto Label_2204; // 0x890 JumpB
	var_177_int = 1; // 0x891 PushI
	var_178_int = var_163_int + var_177_int; // 0x892 Add
	var_179_int = var_162_string + var_178_int; // 0x893 Add
	HasProperty(var_179_int, var_164_bool); // 0x894 ObjFunc
	var_180_bool = var_164_bool == 0; // 0x896 Not
	if(var_180_bool == 0) goto Label_2201; // 0x897 JumpB
	goto Label_2204; // 0x898 Jump
	
Label_2204:
	var_181_bool = var_163_int == 0; // 0x89c Not
	if(var_181_bool == 0) goto Label_2208; // 0x89d JumpB
	var_155_bool = 0; // 0x89e MovB
	return 10; // 0x89f Return
	
Label_2208:
	var_165_int = 0; // 0x8a0 MovI
	var_182_int = 1; // 0x8a1 PushI
	var_183_bool = var_163_int > var_182_int; // 0x8a2 GT
	if(var_183_bool == 0) goto Label_2214; // 0x8a3 JumpB
	irand(var_165_int, var_163_int); // 0x8a4 Func
	
Label_2214:
	var_184_int = 1; // 0x8a6 PushI
	var_185_int = var_165_int + var_184_int; // 0x8a7 Add
	var_186_int = var_162_string + var_185_int; // 0x8a8 Add
	GetProperty(var_186_int, var_166_string); // 0x8a9 ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x8ab PushV
	var_188_string = var_166_string; // 0x8ac Mov
	func_2256(var_187_bool, var_188_string); // 0x8ad NEW_2
	var_155_bool = var_187_bool; // 0x8ae Mov
	return 10; // 0x8b0 Return
	
Label_2201:
	var_189_int = 1; // 0x899 PushI
	var_163_int = var_163_int + var_189_int; // 0x89a Add2
	goto Label_2191; // 0x89b Jump
}


func_2438(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0x987 PushV
	var_384_string = "k11q01"; // 0x988 MovS
	func_2294(var_383_int, var_384_string); // 0x989 NEW_2
	var_385_int = 5; // 0x98b PushI
	var_386_bool = var_383_int == var_385_int; // 0x98c Eq
	if(var_386_bool == 0) goto Label_2448; // 0x98d JumpB
	var_381_bool = 1; // 0x98e MovB
	return 0; // 0x98f Return
	
Label_2448:
	var_381_bool = 0; // 0x990 MovB
	return 0; // 0x991 Return
}


func_139(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x8c PushV
	func_2358(var_216_bool); // 0x8d NEW_2
	var_217_bool = var_216_bool == 0; // 0x8f Not
	if(var_217_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_218_bool = var_215_string == var_2_object; // 0x92 Eq
	if(var_218_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_219_string = ""; var_220_bool = 0; // 0x95 PushV
	var_219_string = var_215_string; // 0x96 Mov
	var_221_string = ""; // 0x97 PushS
	var_222_bool = var_215_string == var_221_string; // 0x98 Eq
	if(var_222_bool == 0) goto Label_156; // 0x99 JumpB
	var_220_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2241(var_219_string, var_220_bool); // 0x9d NEW_2
	var_2_object = var_215_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_220_bool = 1; // 0x9c MovB
}


func_2450(var_387_bool)
{
	var_389_int = 0; var_390_string = ""; // 0x993 PushV
	var_390_string = "ook11Starshina1"; // 0x994 MovS
	func_2294(var_389_int, var_390_string); // 0x995 NEW_2
	var_391_int = 0; // 0x997 PushI
	var_392_bool = var_389_int == var_391_int; // 0x998 Eq
	if(var_392_bool == 0) goto Label_2460; // 0x999 JumpB
	var_387_bool = 1; // 0x99a MovB
	return 0; // 0x99b Return
	
Label_2460:
	var_387_bool = 0; // 0x99c MovB
	return 0; // 0x99d Return
}


func_1429(var_0_object, var_453_int, var_454_object)
{
	var_456_object = Obj(); var_457_bool = 0; var_458_int = 0; var_459_bool = 0; var_460_object = Obj(); var_461_bool = 0; var_462_int = 0; var_463_bool = 0; // 0x595 PushV
	var_0_object = var_454_object; // 0x596 TMov
	var_464_bool = 0; var_465_object = Obj(); var_466_float = 0; // 0x597 PushV
	var_465_object = var_454_object; // 0x598 Mov
	var_466_float = 130.0; // 0x599 MovF
	func_2002(var_465_object, var_466_float); // 0x59a NEW_2
	var_467_bool = var_464_bool == 0; // 0x59c Not
	if(var_467_bool == 0) goto Label_1440; // 0x59d JumpB
	var_453_int = -2; // 0x59e MovI
	return 8; // 0x59f Return
	
Label_1440:
	CreateDialog(var_460_object); // 0x5a0 Func
	var_468_int = 0; // 0x5a2 PushV
	func_2352(var_468_int); // 0x5a3 NEW_2
	SetNPCName(var_468_int); // 0x5a5 ObjFunc
	var_469_int = 0; // 0x5a7 PushV
	func_2350(var_469_int); // 0x5a8 NEW_2
	SetNPCDescription(var_469_int); // 0x5aa ObjFunc
	var_470_string = ""; // 0x5ac PushV
	func_2354(var_470_string); // 0x5ad NEW_2
	SetPhoto(var_470_string); // 0x5af ObjFunc
	var_471_string = ""; // 0x5b1 PushV
	func_2356(var_471_string); // 0x5b2 NEW_2
	SetPhoto2(var_471_string); // 0x5b4 ObjFunc
	var_472_int = 0; // 0x5b6 PushV
	func_2579(var_472_int); // 0x5b7 NEW_2
	SetPlayerName(var_472_int); // 0x5b9 ObjFunc
	var_462_int = -1; // 0x5bb MovI
	IsOverrideActive(var_461_bool); // 0x5bc Func
	var_473_bool = var_461_bool; // 0x5be Push
	if(var_473_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_453_int = -2; // 0x5c0 MovI
	return 8; // 0x5c1 Return
	
Label_1474:
	DoDialog(var_460_object); // 0x5c2 Func
	var_474_bool = 0; var_475_object = Obj(); // 0x5c4 PushV
	var_476_object = Obj(); // 0x5c5 PushV
	func_2278(var_476_object); // 0x5c6 NEW_2
	var_475_object = var_476_object; // 0x5c7 Mov
	func_2087(var_474_bool, var_475_object); // 0x5c9 NEW_2
	var_477_object = Obj(); var_478_object = Obj(); // 0x5cb PushV
	var_477_object = var_454_object; // 0x5cc Mov
	var_478_object = var_460_object; // 0x5cd Mov
	TaskCall(7); // 0x5ce TaskCall
	func_1510(var_479_object, var_480_object, var_481_string, var_482_bool, var_477_object, var_478_object); // 0x5cf NEW_2
	TaskReturn(); // 0x5d0 TaskReturn
	IsDialogEnd(var_463_bool); // 0x5d2 ObjFunc
	
Label_1492:
	var_510_bool = var_463_bool == 0; // 0x5d4 Not
	if(var_510_bool == 0) goto Label_1499; // 0x5d5 JumpB
	sync(); // 0x5d6 Func
	IsDialogEnd(var_463_bool); // 0x5d8 ObjFunc
	goto Label_1492; // 0x5da Jump
	
Label_1499:
	var_511_object = Obj(); // 0x5db PushV
	var_511_object = var_454_object; // 0x5dc Mov
	func_2070(); // 0x5dd NEW_2
	StopDialog(var_460_object); // 0x5df Func
	GetReturnValue(var_462_int); // 0x5e1 ObjFunc
	var_453_int = var_462_int; // 0x5e3 Mov
	return 8; // 0x5e4 Return
}


func_2462(var_435_bool)
{
	var_437_int = 0; var_438_string = ""; // 0x99f PushV
	var_438_string = "k11q01"; // 0x9a0 MovS
	func_2294(var_437_int, var_438_string); // 0x9a1 NEW_2
	var_439_int = 6; // 0x9a3 PushI
	var_440_bool = var_437_int == var_439_int; // 0x9a4 Eq
	if(var_440_bool == 0) goto Label_2472; // 0x9a5 JumpB
	var_435_bool = 1; // 0x9a6 MovB
	return 0; // 0x9a7 Return
	
Label_2472:
	var_435_bool = 0; // 0x9a8 MovB
	return 0; // 0x9a9 Return
}


func_2474(var_426_bool)
{
	var_428_int = 0; var_429_string = ""; // 0x9ab PushV
	var_429_string = "ook11Starshina2"; // 0x9ac MovS
	func_2294(var_428_int, var_429_string); // 0x9ad NEW_2
	var_430_int = 0; // 0x9af PushI
	var_431_bool = var_428_int == var_430_int; // 0x9b0 Eq
	if(var_431_bool == 0) goto Label_2484; // 0x9b1 JumpB
	var_426_bool = 1; // 0x9b2 MovB
	return 0; // 0x9b3 Return
	
Label_2484:
	var_426_bool = 0; // 0x9b4 MovB
	return 0; // 0x9b5 Return
}


func_1963(var_60_bool)
{
	var_60_bool = 1; // 0x7ab MovB
	return 0; // 0x7ac Return
}


func_941(var_2_object, var_397_string)
{
	var_398_bool = 0; // 0x3ae PushV
	func_2358(var_398_bool); // 0x3af NEW_2
	var_399_bool = var_398_bool == 0; // 0x3b1 Not
	if(var_399_bool == 0) goto Label_948; // 0x3b2 JumpB
	return 0; // 0x3b3 Return
	
Label_948:
	var_400_bool = var_397_string == var_2_object; // 0x3b4 Eq
	if(var_400_bool == 0) goto Label_951; // 0x3b5 JumpB
	return 0; // 0x3b6 Return
	
Label_951:
	var_401_string = ""; var_402_bool = 0; // 0x3b7 PushV
	var_401_string = var_397_string; // 0x3b8 Mov
	var_403_string = ""; // 0x3b9 PushS
	var_404_bool = var_397_string == var_403_string; // 0x3ba Eq
	if(var_404_bool == 0) goto Label_958; // 0x3bb JumpB
	var_402_bool = 0; // 0x3bc MovB
	goto Label_959; // 0x3bd Jump
	
Label_959:
	func_2241(var_401_string, var_402_bool); // 0x3bf NEW_2
	var_2_object = var_397_string; // 0x3c1 TMov
	return 0; // 0x3c2 Return
	
Label_958:
	var_402_bool = 1; // 0x3be MovB
}


func_1965()
{
	StopAnimation(); // 0x7ad Func
	StopGroup0(); // 0x7af Func
	return 0; // 0x7b1 Return
}


func_2225(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x8b1 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x8b2 Func
	var_248_bool = var_245_bool; // 0x8b4 Push
	if(var_248_bool == 0) goto Label_2236; // 0x8b5 JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x8b6 Func
	var_249_bool = 0; // 0x8b8 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x8b9 Func
	goto Label_2240; // 0x8bb Jump
	
Label_2240:
	return 6; // 0x8c0 Return
	
Label_2236:
	var_250_string = "Can't find lsh animation : "; // 0x8bc PushS
	var_251_int = var_250_string + var_241_string; // 0x8bd Add
	Trace(var_251_int); // 0x8be Func
}


func_1970(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x7b2 PushV
	GetPosition(var_41_cvector); // 0x7b3 Func
	GetPosition(var_42_cvector); // 0x7b5 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x7b7 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x7b8 Or2
	return 6; // 0x7b9 Return
}


func_1718(var_0_object)
{
	var_22_bool = 0; // 0x6b6 PushV
	func_1997(var_22_bool); // 0x6b7 NEW_2
	var_25_bool = var_22_bool == 0; // 0x6b9 Not
	if(var_25_bool == 0) goto Label_1725; // 0x6ba JumpB
	Hold(); // 0x6bb Func
	
Label_1725:
	GetDirection(var_0_object); // 0x6bd Func
	
Label_1727:
	func_1894(); // 0x6c0 NEW_2
	goto Label_1727; // 0x6c2 Jump
}


func_2486()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x9b6 PushV
	var_66_int = 788; // 0x9b7 PushI
	var_67_int = 1; // 0x9b8 PushI
	var_68_int = 542507; // 0x9b9 PushI
	CreateDiaryEntry(var_65_object, var_66_int, var_67_int, var_68_int); // 0x9ba Func
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0; // 0x9bc PushV
	var_70_object = var_65_object; // 0x9bd Mov
	var_71_int = 480; // 0x9be MovI
	func_2551(var_69_bool, var_70_object, var_71_int); // 0x9bf NEW_2
	return 2; // 0x9c1 Return
}


func_1978(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x7ba PushV
	GetPosition(var_34_cvector); // 0x7bb Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x7bd Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x7be PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x7bf PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x7c0 Func
	var_29_bool = var_36_bool; // 0x7c2 Mov
	return 6; // 0x7c3 Return
}


func_2241(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x8c1 PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x8c2 Func
	var_229_bool = var_226_bool; // 0x8c4 Push
	if(var_229_bool == 0) goto Label_2251; // 0x8c5 JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x8c6 Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x8c8 Func
	goto Label_2255; // 0x8ca Jump
	
Label_2255:
	return 6; // 0x8cf Return
	
Label_2251:
	var_230_string = "Can't find lsh animation : "; // 0x8cb PushS
	var_231_int = var_230_string + var_219_string; // 0x8cc Add
	Trace(var_231_int); // 0x8cd Func
}


func_2499()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x9c3 PushV
	var_33_int = 489; // 0x9c4 PushI
	var_34_int = 1; // 0x9c5 PushI
	var_35_int = 528056; // 0x9c6 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x9c7 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x9c9 PushV
	var_37_object = var_32_object; // 0x9ca Mov
	var_38_int = 480; // 0x9cb MovI
	func_2551(var_36_bool, var_37_object, var_38_int); // 0x9cc NEW_2
	return 2; // 0x9ce Return
}


func_1988(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x7c4 PushV
	GetPosition(var_28_cvector); // 0x7c5 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x7c7 PushV
	var_30_cvector = var_28_cvector; // 0x7c8 Mov
	func_1978(var_29_bool, var_30_cvector); // 0x7c9 NEW_2
	var_25_bool = var_29_bool; // 0x7ca Mov
	return 2; // 0x7cc Return
}


func_1732(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x6c4 PushV
	var_49_string = "player"; // 0x6c5 PushS
	FindActor(var_48_object, var_49_string); // 0x6c6 Func
	var_50_bool = var_48_object == 0; // 0x6c8 Not
	if(var_50_bool == 0) goto Label_1740; // 0x6c9 JumpB
	var_46_bool = 0; // 0x6ca MovB
	return 2; // 0x6cb Return
	
Label_1740:
	var_51_bool = 0; var_52_object = Obj(); // 0x6cc PushV
	var_52_object = var_48_object; // 0x6cd Mov
	func_1988(var_52_object); // 0x6ce NEW_2
	var_46_bool = var_51_bool; // 0x6cf Mov
	return 2; // 0x6d1 Return
}


func_203(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0xcb PushV
	var_0_object = var_270_object; // 0xcc TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0xcd PushV
	var_281_object = var_270_object; // 0xce Mov
	var_282_float = 130.0; // 0xcf MovF
	func_2002(var_281_object, var_282_float); // 0xd0 NEW_2
	var_283_bool = var_280_bool == 0; // 0xd2 Not
	if(var_283_bool == 0) goto Label_214; // 0xd3 JumpB
	var_269_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_276_object); // 0xd6 Func
	var_284_int = 0; // 0xd8 PushV
	func_2352(var_284_int); // 0xd9 NEW_2
	SetNPCName(var_284_int); // 0xdb ObjFunc
	var_285_int = 0; // 0xdd PushV
	func_2350(var_285_int); // 0xde NEW_2
	SetNPCDescription(var_285_int); // 0xe0 ObjFunc
	var_286_string = ""; // 0xe2 PushV
	func_2354(var_286_string); // 0xe3 NEW_2
	SetPhoto(var_286_string); // 0xe5 ObjFunc
	var_287_string = ""; // 0xe7 PushV
	func_2356(var_287_string); // 0xe8 NEW_2
	SetPhoto2(var_287_string); // 0xea ObjFunc
	var_288_int = 0; // 0xec PushV
	func_2579(var_288_int); // 0xed NEW_2
	SetPlayerName(var_288_int); // 0xef ObjFunc
	var_278_int = -1; // 0xf1 MovI
	IsOverrideActive(var_277_bool); // 0xf2 Func
	var_289_bool = var_277_bool; // 0xf4 Push
	if(var_289_bool == 0) goto Label_248; // 0xf5 JumpB
	var_269_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_276_object); // 0xf8 Func
	var_290_bool = 0; var_291_object = Obj(); // 0xfa PushV
	var_292_object = Obj(); // 0xfb PushV
	func_2278(var_292_object); // 0xfc NEW_2
	var_291_object = var_292_object; // 0xfd Mov
	func_2087(var_290_bool, var_291_object); // 0xff NEW_2
	var_293_object = Obj(); var_294_object = Obj(); // 0x101 PushV
	var_293_object = var_270_object; // 0x102 Mov
	var_294_object = var_276_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_279_bool); // 0x108 ObjFunc
	
Label_266:
	var_345_bool = var_279_bool == 0; // 0x10a Not
	if(var_345_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_279_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_346_object = Obj(); // 0x111 PushV
	var_346_object = var_270_object; // 0x112 Mov
	func_2070(); // 0x113 NEW_2
	StopDialog(var_276_object); // 0x115 Func
	GetReturnValue(var_278_int); // 0x117 ObjFunc
	var_269_int = var_278_int; // 0x119 Mov
	return 8; // 0x11a Return
}


func_1997(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x7cd PushV
	IsLoaded(var_24_bool); // 0x7ce Func
	var_22_bool = var_24_bool; // 0x7d0 Mov
	return 2; // 0x7d1 Return
}


func_2256(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x8d0 PushV
	var_151_bool = 0; // 0x8d1 PushV
	func_2358(var_151_bool); // 0x8d2 NEW_2
	if(var_151_bool == 0) goto Label_2269; // 0x8d4 JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x8d5 Func
	var_152_bool = var_150_bool; // 0x8d7 Push
	if(var_152_bool == 0) goto Label_2269; // 0x8d8 JumpB
	lshPlaySpeech(var_148_string); // 0x8d9 Func
	var_147_bool = 1; // 0x8db MovB
	return 2; // 0x8dc Return
	
Label_2269:
	var_147_bool = 0; // 0x8dd MovB
	return 2; // 0x8de Return
}


func_2512()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x9d0 PushV
	var_62_int = 445; // 0x9d1 PushI
	var_63_int = 1; // 0x9d2 PushI
	var_64_int = 526470; // 0x9d3 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x9d4 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x9d6 PushV
	var_66_object = var_61_object; // 0x9d7 Mov
	var_67_int = 438; // 0x9d8 MovI
	func_2551(var_65_bool, var_66_object, var_67_int); // 0x9d9 NEW_2
	return 2; // 0x9db Return
}


func_2002(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x7d2 PushV
	GetPosition(var_66_cvector); // 0x7d3 ObjFunc
	GetEyesHeight(var_65_float); // 0x7d5 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x7d7 PushE
	var_74_float = var_74_float + var_65_float; // 0x7d8 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x7d9 PopE
	GetPosition(var_67_cvector); // 0x7da Func
	GetEyesHeight(var_65_float); // 0x7dc Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x7de PushE
	var_75_float = var_75_float + var_65_float; // 0x7df Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x7e0 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x7e1 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x7e2 PushE
	var_76_float = 0; // 0x7e3 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x7e4 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x7e5 Or
	var_78_float = sqrt(var_77_int); // 0x7e6 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x7e7 Div2
	var_69_cvector = -var_68_cvector; // 0x7e8 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x7e9 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x7ea PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x7eb PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x7ec Xor2
	func_2284(var_80_cvector, var_81_cvector); // 0x7ed NEW_2
	var_88_int = 25; // 0x7ef PushI
	var_89_float = var_80_cvector * var_88_int; // 0x7f0 Mult
	var_90_int = var_79_float + var_89_float; // 0x7f1 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x7f2 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x7f3 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x7f4 Add2
	IsOverrideActive(var_72_bool); // 0x7f5 Func
	var_92_bool = var_72_bool; // 0x7f7 Push
	if(var_92_bool == 0) goto Label_2043; // 0x7f8 JumpB
	var_53_bool = 0; // 0x7f9 MovB
	return 18; // 0x7fa Return
	
Label_2043:
	StopWorld(); // 0x7fb Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x7fd Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x7ff PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x800 PushE
	Rotate(var_93_float, var_94_float); // 0x801 Func
	var_95_bool = 0; // 0x803 PushV
	func_2358(var_95_bool); // 0x804 NEW_2
	if(var_95_bool == 0) goto Label_2056; // 0x806 JumpB
	goto Label_2064; // 0x807 Jump
	
Label_2064:
	CameraWaitForPlayFinish(); // 0x810 Func
	ResumeWorld(); // 0x812 Func
	var_53_bool = 1; // 0x814 MovB
	return 18; // 0x815 Return
	
Label_2056:
	var_96_string = "head"; // 0x808 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x809 Func
	var_97_bool = var_73_bool; // 0x80b Push
	if(var_97_bool == 0) goto Label_2064; // 0x80c JumpB
	var_98_string = "head"; // 0x80d PushS
	LookAsyncCamera(var_98_string); // 0x80e Func
}


func_1747(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x6d3 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x6d4 PushE
	RotateAsync(var_98_float, var_99_float); // 0x6d5 Func
	return 0; // 0x6d7 Return
}


func_726(var_0_object, var_349_int, var_350_object)
{
	var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0; var_356_object = Obj(); var_357_bool = 0; var_358_int = 0; var_359_bool = 0; // 0x2d6 PushV
	var_0_object = var_350_object; // 0x2d7 TMov
	var_360_bool = 0; var_361_object = Obj(); var_362_float = 0; // 0x2d8 PushV
	var_361_object = var_350_object; // 0x2d9 Mov
	var_362_float = 130.0; // 0x2da MovF
	func_2002(var_361_object, var_362_float); // 0x2db NEW_2
	var_363_bool = var_360_bool == 0; // 0x2dd Not
	if(var_363_bool == 0) goto Label_737; // 0x2de JumpB
	var_349_int = -2; // 0x2df MovI
	return 8; // 0x2e0 Return
	
Label_737:
	CreateDialog(var_356_object); // 0x2e1 Func
	var_364_int = 0; // 0x2e3 PushV
	func_2352(var_364_int); // 0x2e4 NEW_2
	SetNPCName(var_364_int); // 0x2e6 ObjFunc
	var_365_int = 0; // 0x2e8 PushV
	func_2350(var_365_int); // 0x2e9 NEW_2
	SetNPCDescription(var_365_int); // 0x2eb ObjFunc
	var_366_string = ""; // 0x2ed PushV
	func_2354(var_366_string); // 0x2ee NEW_2
	SetPhoto(var_366_string); // 0x2f0 ObjFunc
	var_367_string = ""; // 0x2f2 PushV
	func_2356(var_367_string); // 0x2f3 NEW_2
	SetPhoto2(var_367_string); // 0x2f5 ObjFunc
	var_368_int = 0; // 0x2f7 PushV
	func_2579(var_368_int); // 0x2f8 NEW_2
	SetPlayerName(var_368_int); // 0x2fa ObjFunc
	var_358_int = -1; // 0x2fc MovI
	IsOverrideActive(var_357_bool); // 0x2fd Func
	var_369_bool = var_357_bool; // 0x2ff Push
	if(var_369_bool == 0) goto Label_771; // 0x300 JumpB
	var_349_int = -2; // 0x301 MovI
	return 8; // 0x302 Return
	
Label_771:
	DoDialog(var_356_object); // 0x303 Func
	var_370_bool = 0; var_371_object = Obj(); // 0x305 PushV
	var_372_object = Obj(); // 0x306 PushV
	func_2278(var_372_object); // 0x307 NEW_2
	var_371_object = var_372_object; // 0x308 Mov
	func_2087(var_370_bool, var_371_object); // 0x30a NEW_2
	var_373_object = Obj(); var_374_object = Obj(); // 0x30c PushV
	var_373_object = var_350_object; // 0x30d Mov
	var_374_object = var_356_object; // 0x30e Mov
	TaskCall(5); // 0x30f TaskCall
	func_807(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object); // 0x310 NEW_2
	TaskReturn(); // 0x311 TaskReturn
	IsDialogEnd(var_359_bool); // 0x313 ObjFunc
	
Label_789:
	var_449_bool = var_359_bool == 0; // 0x315 Not
	if(var_449_bool == 0) goto Label_796; // 0x316 JumpB
	sync(); // 0x317 Func
	IsDialogEnd(var_359_bool); // 0x319 ObjFunc
	goto Label_789; // 0x31b Jump
	
Label_796:
	var_450_object = Obj(); // 0x31c PushV
	var_450_object = var_350_object; // 0x31d Mov
	func_2070(); // 0x31e NEW_2
	StopDialog(var_356_object); // 0x320 Func
	GetReturnValue(var_358_int); // 0x322 ObjFunc
	var_349_int = var_358_int; // 0x324 Mov
	return 8; // 0x325 Return
}


func_1752(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x6d8 PushV
	var_34_string = "player"; // 0x6d9 PushS
	FindActor(var_32_object, var_34_string); // 0x6da Func
	var_35_bool = var_32_object == 0; // 0x6dc Not
	if(var_35_bool == 0) goto Label_1760; // 0x6dd JumpB
	var_29_bool = 0; // 0x6de MovB
	return 4; // 0x6df Return
	
Label_1760:
	var_36_float = 0; var_37_object = Obj(); // 0x6e0 PushV
	var_37_object = var_32_object; // 0x6e1 Mov
	func_1970(var_37_object); // 0x6e2 NEW_2
	var_44_float = 90000.0; // 0x6e4 PushF
	var_45_bool = var_36_float > var_44_float; // 0x6e5 GT
	if(var_45_bool == 0) goto Label_1769; // 0x6e6 JumpB
	var_29_bool = 0; // 0x6e7 MovB
	return 4; // 0x6e8 Return
	
Label_1769:
	CanSee(var_33_bool, var_32_object); // 0x6e9 Func
	var_29_bool = var_33_bool; // 0x6eb Mov
	return 4; // 0x6ec Return
}


func_2525()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x9dd PushV
	var_33_int = 443; // 0x9de PushI
	var_34_int = 1; // 0x9df PushI
	var_35_int = 526468; // 0x9e0 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x9e1 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x9e3 PushV
	var_37_object = var_32_object; // 0x9e4 Mov
	var_38_int = 438; // 0x9e5 MovI
	func_2551(var_36_bool, var_37_object, var_38_int); // 0x9e6 NEW_2
	return 2; // 0x9e8 Return
}


func_2271()
{
	var_24_bool = 0; // 0x8df PushV
	func_2358(var_24_bool); // 0x8e0 NEW_2
	if(var_24_bool == 0) goto Label_2277; // 0x8e2 JumpB
	lshStopSpeech(); // 0x8e3 Func
	
Label_2277:
	return 0; // 0x8e5 Return
}


func_2278(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x8e6 PushV
	self(var_117_object); // 0x8e7 Func
	var_115_object = var_117_object; // 0x8e9 Mov
	return 2; // 0x8ea Return
}


func_1510(var_0_object, var_1_object, var_2_object, var_3_string, var_477_object, var_478_object)
{
	var_0_object = var_478_object; // 0x5e7 TMov
	var_1_object = var_477_object; // 0x5e8 TMov
	var_3_string = 0; // 0x5e9 TMovB
	var_483_int = 1; // 0x5ea PushI
	if(var_483_int == 0) goto Label_1543; // 0x5eb JumpB
	var_484_string = ""; // 0x5ec PushV
	var_484_string = "Neutral"; // 0x5ed MovS
	func_1573(var_478_object, var_484_string); // 0x5ee NEW_2
	var_492_int = 539315; // 0x5f0 PushI
	SetMessage(var_492_int); // 0x5f1 TObjFunc
	ClearReplies(); // 0x5f3 TObjFunc
	var_493_int = 542623; // 0x5f5 PushI
	var_494_int = 45026; // 0x5f6 PushI
	var_495_int = 45025; // 0x5f7 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x5f8 TObjFunc
	var_496_int = 542622; // 0x5fa PushI
	var_497_int = -1; // 0x5fb PushI
	var_498_int = 45024; // 0x5fc PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x5fd TObjFunc
	var_499_int = 539316; // 0x5ff PushI
	var_500_int = -1; // 0x600 PushI
	var_501_int = 41259; // 0x601 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x602 TObjFunc
	goto Label_1543; // 0x604 Jump
	
Label_1543:
	var_502_bool = 0; // 0x607 PushV
	func_2358(var_502_bool); // 0x608 NEW_2
	if(var_502_bool == 0) goto Label_1558; // 0x60a JumpB
	
Label_1547:
	lshWaitForAnimEnd(); // 0x60b Func
	var_503_string = var_3_string; // 0x60d PushT
	if(var_503_string == 0) goto Label_1552; // 0x60e JumpB
	goto Label_1557; // 0x60f Jump
	
Label_1557:
	goto Label_1572; // 0x615 Jump
	
Label_1572:
	return 0; // 0x624 Return
	
Label_1552:
	var_504_string = ""; // 0x610 PushV
	var_504_string = var_2_object; // 0x611 MovT
	func_2225(var_504_string); // 0x612 NEW_2
	goto Label_1547; // 0x614 Jump
	
Label_1558:
	var_505_string = "all"; // 0x616 PushS
	var_506_string = "idle"; // 0x617 PushS
	PlayAnimation(var_505_string, var_506_string); // 0x618 Func
	
Label_1562:
	WaitForAnimEnd(); // 0x61a Func
	var_507_string = var_3_string; // 0x61c PushT
	if(var_507_string == 0) goto Label_1567; // 0x61d JumpB
	goto Label_1572; // 0x61e Jump
	
Label_1567:
	var_508_string = "all"; // 0x61f PushS
	var_509_string = "idle"; // 0x620 PushS
	PlayAnimation(var_508_string, var_509_string); // 0x621 Func
	goto Label_1562; // 0x623 Jump
}


func_2538(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x9ea PushV
	GetDiaryRoot(var_47_object); // 0x9eb Func
	var_48_bool = var_47_object == 0; // 0x9ed Not
	if(var_48_bool == 0) goto Label_2548; // 0x9ee JumpB
	var_49_string = "Can't retrieve diary root"; // 0x9ef PushS
	Trace(var_49_string); // 0x9f0 Func
	var_45_object = 0; // 0x9f2 MovB
	return 2; // 0x9f3 Return
	
Label_2548:
	var_45_object = var_47_object; // 0x9f4 Mov
	return 2; // 0x9f5 Return
}


func_2284(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x8ec PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x8ed Or
	var_84_float = sqrt(var_85_int); // 0x8ee Sqrt2
	var_86_float = 0.0; // 0x8ef PushF
	var_87_bool = var_84_float < var_86_float; // 0x8f0 LT
	if(var_87_bool == 0) goto Label_2292; // 0x8f1 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x8f2 MovV
	return 2; // 0x8f3 Return
	
Label_2292:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x8f4 Div2
	return 2; // 0x8f5 Return
}


func_1774()
{
	var_514_float = 0; var_515_float = 0; // 0x6ee PushV
	var_516_int = 8; // 0x6ef PushI
	var_517_int = 16; // 0x6f0 PushI
	rand(var_515_float, var_516_int, var_517_int); // 0x6f1 Func
	var_518_int = 10; // 0x6f3 PushI
	SetTimer(var_518_int, var_515_float); // 0x6f4 Func
	return 2; // 0x6f6 Return
}


func_2294(var_302_int, var_303_string)
{
	var_304_int = 0; var_305_int = 0; // 0x8f6 PushV
	GetVariable(var_303_string, var_305_int); // 0x8f7 Func
	var_302_int = var_305_int; // 0x8f9 Mov
	return 2; // 0x8fa Return
}


func_1783()
{
	var_513_int = 10; // 0x6f7 PushI
	KillTimer(var_513_int); // 0x6f8 Func
	return 0; // 0x6fa Return
}


func_2299(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x8fb PushV
	FindActor(var_58_object, var_55_string); // 0x8fc Func
	var_59_bool = var_58_object == 0; // 0x8fe NullEq
	if(var_59_bool == 0) goto Label_2306; // 0x8ff JumpB
	var_54_bool = 0; // 0x900 MovB
	return 2; // 0x901 Return
	
Label_2306:
	Trigger(var_58_object, var_56_string); // 0x902 Func
	var_54_bool = 1; // 0x904 MovB
	return 2; // 0x905 Return
}


