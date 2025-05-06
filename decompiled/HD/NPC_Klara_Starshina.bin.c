task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xa2 PushI
	if(var_23_int == 0) goto Label_202; // 0xa3 JumpB
	func_2273(); // 0xa5 NEW_2
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
	func_2360(var_51_bool); // 0xc0 NEW_2
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
	func_2273(); // 0x18e NEW_2
	var_25_int = 27712; // 0x190 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x191 Eq
	if(var_26_bool == 0) goto Label_408; // 0x192 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x193 PushV
	var_27_object = var_1_object; // 0x194 MovT
	var_28_object = var_0_object; // 0x195 MovT
	func_2362(); // 0x196 NEW_2
	
Label_408:
	var_54_int = 27732; // 0x198 PushI
	var_55_bool = var_22_cvector == var_54_int; // 0x199 Eq
	if(var_55_bool == 0) goto Label_416; // 0x19a JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x19b PushV
	var_56_object = var_1_object; // 0x19c MovT
	var_57_object = var_0_object; // 0x19d MovT
	func_2371(); // 0x19e NEW_2
	
Label_416:
	var_68_int = 27734; // 0x1a0 PushI
	var_69_bool = var_22_cvector == var_68_int; // 0x1a1 Eq
	if(var_69_bool == 0) goto Label_424; // 0x1a2 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x1a3 PushV
	var_70_object = var_1_object; // 0x1a4 MovT
	var_71_object = var_0_object; // 0x1a5 MovT
	func_2371(); // 0x1a6 NEW_2
	
Label_424:
	var_72_int = 27705; // 0x1a8 PushI
	var_73_bool = var_21_bool == var_72_int; // 0x1a9 Eq
	if(var_73_bool == 0) goto Label_477; // 0x1aa JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0x1ab PushV
	var_75_object = var_1_object; // 0x1ac MovT
	func_2416(var_75_object); // 0x1ad NEW_2
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
	func_2428(var_109_object); // 0x1cf NEW_2
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
	func_2360(var_216_bool); // 0x2cb NEW_2
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
	func_2273(); // 0x3c7 NEW_2
	var_25_int = 28709; // 0x3c9 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x3ca Eq
	if(var_26_bool == 0) goto Label_977; // 0x3cb JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x3cc PushV
	var_27_object = var_1_object; // 0x3cd MovT
	var_28_object = var_0_object; // 0x3ce MovT
	func_2386(); // 0x3cf NEW_2
	
Label_977:
	var_60_int = 28711; // 0x3d1 PushI
	var_61_bool = var_22_cvector == var_60_int; // 0x3d2 Eq
	if(var_61_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x3d4 PushV
	var_62_object = var_1_object; // 0x3d5 MovT
	var_63_object = var_0_object; // 0x3d6 MovT
	func_2406(); // 0x3d7 NEW_2
	
Label_985:
	var_75_int = 28669; // 0x3d9 PushI
	var_76_bool = var_22_cvector == var_75_int; // 0x3da Eq
	if(var_76_bool == 0) goto Label_993; // 0x3db JumpB
	var_77_object = Obj(); var_78_object = Obj(); // 0x3dc PushV
	var_77_object = var_1_object; // 0x3dd MovT
	var_78_object = var_0_object; // 0x3de MovT
	func_2386(); // 0x3df NEW_2
	
Label_993:
	var_79_int = 28696; // 0x3e1 PushI
	var_80_bool = var_22_cvector == var_79_int; // 0x3e2 Eq
	if(var_80_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x3e4 PushV
	var_81_object = var_1_object; // 0x3e5 MovT
	var_82_object = var_0_object; // 0x3e6 MovT
	func_2400(); // 0x3e7 NEW_2
	
Label_1001:
	var_85_int = 28699; // 0x3e9 PushI
	var_86_bool = var_21_bool == var_85_int; // 0x3ea Eq
	if(var_86_bool == 0) goto Label_1100; // 0x3eb JumpB
	var_87_bool = 0; // 0x3ec PushV
	var_87_bool = 0; // 0x3ed MovB
	var_88_bool = 0; var_89_object = Obj(); // 0x3ee PushV
	var_89_object = var_1_object; // 0x3ef MovT
	func_2440(var_89_object); // 0x3f0 NEW_2
	if(var_88_bool == 0) goto Label_1017; // 0x3f2 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x3f3 PushV
	var_97_object = var_1_object; // 0x3f4 MovT
	func_2452(var_97_object); // 0x3f5 NEW_2
	if(var_96_bool == 0) goto Label_1017; // 0x3f7 JumpB
	var_87_bool = 1; // 0x3f8 MovB
	
Label_1017:
	if(var_87_bool == 0) goto Label_1038; // 0x3f9 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x3fa PushV
	var_102_object = var_1_object; // 0x3fb MovT
	var_103_object = var_0_object; // 0x3fc MovT
	func_2380(); // 0x3fd NEW_2
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
	func_2440(var_130_object); // 0x419 NEW_2
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
	func_2476(var_137_object); // 0x427 NEW_2
	if(var_136_bool == 0) goto Label_1072; // 0x429 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x42a PushV
	var_143_object = var_1_object; // 0x42b MovT
	func_2440(var_143_object); // 0x42c NEW_2
	if(var_142_bool == 0) goto Label_1072; // 0x42e JumpB
	var_135_bool = 1; // 0x42f MovB
	
Label_1072:
	if(var_135_bool == 0) goto Label_1088; // 0x430 JumpB
	var_144_bool = 0; // 0x431 PushV
	var_144_bool = 0; // 0x432 MovB
	var_145_bool = 0; var_146_object = Obj(); // 0x433 PushV
	var_146_object = var_1_object; // 0x434 MovT
	func_2464(var_146_object); // 0x435 NEW_2
	if(var_145_bool == 0) goto Label_1086; // 0x437 JumpB
	var_151_bool = 0; var_152_object = Obj(); // 0x438 PushV
	var_152_object = var_1_object; // 0x439 MovT
	func_2476(var_152_object); // 0x43a NEW_2
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
	func_2360(var_284_bool); // 0x58a NEW_2
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
	func_2273(); // 0x63f NEW_2
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
	func_2360(var_84_bool); // 0x6a4 NEW_2
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
	func_2280(var_67_object); // 0x714 NEW_2
	var_66_object = var_67_object; // 0x715 Mov
	func_2147(var_66_object); // 0x717 NEW_2
	
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
	func_2227(var_22_string); // 0x737 NEW_2
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
	func_2227(var_28_string); // 0x746 NEW_2
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
	func_2598(var_39_object); // 0x759 NEW_2
	var_514_string = ""; // 0x75b PushV
	var_514_string = "Neutral"; // 0x75c MovS
	func_2227(var_514_string); // 0x75d NEW_2
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
	var_100_bool = var_53_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_2354(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_2352(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_2356(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_2358(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_2581(var_105_int); // 0x22 NEW_2
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
	func_2280(var_116_object); // 0x31 NEW_2
	var_115_object = var_116_object; // 0x32 Mov
	func_2089(var_114_bool, var_115_object); // 0x34 NEW_2
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
	func_2071(); // 0x48 NEW_2
	StopDialog(var_49_object); // 0x4a Func
	GetReturnValue(var_51_int); // 0x4c ObjFunc
	var_42_int = var_51_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2313(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x909 PushV
	GetGameTime(var_171_float); // 0x90a Func
	var_172_int = 1; // 0x90c PushI
	var_173_int = 0; // 0x90d PushV
	var_174_int = 24; // 0x90e PushI
	var_173_int = var_171_float / var_171_float; // 0x90f Div2
	var_169_int = var_172_int + var_173_int; // 0x910 Add2
	return 2; // 0x911 Return
}


func_2322(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x913 PushV
	func_2313(var_270_int); // 0x914 NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x916 Eq2
	return 0; // 0x917 Return
}


func_2581(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0xa15 PushV
	var_108_string = "branch"; // 0xa16 PushS
	GetVariable(var_108_string, var_107_int); // 0xa17 Func
	var_109_int = 0; // 0xa19 PushI
	var_110_bool = var_107_int == var_109_int; // 0xa1a Eq
	if(var_110_bool == 0) goto Label_2591; // 0xa1b JumpB
	var_105_int = 1; // 0xa1c MovI
	return 2; // 0xa1d Return
	
Label_2591:
	var_111_int = 1; // 0xa1f PushI
	var_112_bool = var_107_int == var_111_int; // 0xa20 Eq
	if(var_112_bool == 0) goto Label_2596; // 0xa21 JumpB
	var_105_int = 2; // 0xa22 MovI
	return 2; // 0xa23 Return
	
Label_2596:
	var_105_int = 3; // 0xa24 MovI
	return 2; // 0xa25 Return
}


func_2071()
{
	var_260_bool = 0; var_261_bool = 0; // 0x817 PushV
	var_262_bool = 1; // 0x818 PushB
	CameraSwitchToNormal(var_262_bool); // 0x819 Func
	var_263_bool = 0; // 0x81b PushV
	func_2360(var_263_bool); // 0x81c NEW_2
	if(var_263_bool == 0) goto Label_2080; // 0x81e JumpB
	goto Label_2088; // 0x81f Jump
	
Label_2088:
	return 2; // 0x828 Return
	
Label_2080:
	var_264_string = "head"; // 0x820 PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x821 Func
	var_265_bool = var_261_bool; // 0x823 Push
	if(var_265_bool == 0) goto Label_2088; // 0x824 JumpB
	var_266_string = "head"; // 0x825 PushS
	UnlookAsync(var_266_string); // 0x826 Func
}


func_2328(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x918 PushV
	var_49_string = "idle"; // 0x919 MovS
	var_50_int = var_47_int; // 0x91a Push
	if(var_50_int == 0) goto Label_2333; // 0x91b JumpB
	var_49_string = var_49_string + var_47_int; // 0x91c Add2
	
Label_2333:
	var_46_string = var_49_string; // 0x91d Mov
	return 2; // 0x91e Return
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object; // 0x11d TMov
	var_1_object = var_295_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_301_int = 1; // 0x120 PushI
	if(var_301_int == 0) goto Label_342; // 0x121 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x122 PushV
	var_303_object = var_1_object; // 0x123 MovT
	func_2416(var_303_object); // 0x124 NEW_2
	if(var_302_bool == 0) goto Label_315; // 0x126 JumpB
	var_310_string = ""; // 0x127 PushV
	var_310_string = "Neutral"; // 0x128 MovS
	func_372(var_296_object, var_310_string); // 0x129 NEW_2
	var_318_int = 526430; // 0x12b PushI
	SetMessage(var_318_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_319_int = 526431; // 0x130 PushI
	var_320_int = 27707; // 0x131 PushI
	var_321_int = 27706; // 0x132 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x133 TObjFunc
	var_322_int = 529003; // 0x135 PushI
	var_323_int = 30441; // 0x136 PushI
	var_324_int = 30440; // 0x137 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x138 TObjFunc
	goto Label_342; // 0x13a Jump
	
Label_342:
	var_325_bool = 0; // 0x156 PushV
	func_2360(var_325_bool); // 0x157 NEW_2
	if(var_325_bool == 0) goto Label_357; // 0x159 JumpB
	
Label_346:
	lshWaitForAnimEnd(); // 0x15a Func
	var_326_string = var_3_string; // 0x15c PushT
	if(var_326_string == 0) goto Label_351; // 0x15d JumpB
	goto Label_356; // 0x15e Jump
	
Label_356:
	goto Label_371; // 0x164 Jump
	
Label_371:
	return 0; // 0x173 Return
	
Label_351:
	var_327_string = ""; // 0x15f PushV
	var_327_string = var_2_object; // 0x160 MovT
	func_2227(var_327_string); // 0x161 NEW_2
	goto Label_346; // 0x163 Jump
	
Label_357:
	var_328_string = "all"; // 0x165 PushS
	var_329_string = "idle"; // 0x166 PushS
	PlayAnimation(var_328_string, var_329_string); // 0x167 Func
	
Label_361:
	WaitForAnimEnd(); // 0x169 Func
	var_330_string = var_3_string; // 0x16b PushT
	if(var_330_string == 0) goto Label_366; // 0x16c JumpB
	goto Label_371; // 0x16d Jump
	
Label_366:
	var_331_string = "all"; // 0x16e PushS
	var_332_string = "idle"; // 0x16f PushS
	PlayAnimation(var_331_string, var_332_string); // 0x170 Func
	goto Label_361; // 0x172 Jump
	
Label_315:
	var_333_string = ""; // 0x13b PushV
	var_333_string = "Neutral"; // 0x13c MovS
	func_372(var_296_object, var_333_string); // 0x13d NEW_2
	var_334_int = 526438; // 0x13f PushI
	SetMessage(var_334_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_335_bool = 0; var_336_object = Obj(); // 0x144 PushV
	var_336_object = var_1_object; // 0x145 MovT
	func_2428(var_336_object); // 0x146 NEW_2
	if(var_335_bool == 0) goto Label_334; // 0x148 JumpB
	var_341_int = 526450; // 0x149 PushI
	var_342_int = 27726; // 0x14a PushI
	var_343_int = 27725; // 0x14b PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x14c TObjFunc
	
Label_334:
	var_344_int = 526439; // 0x14e PushI
	var_345_int = -1; // 0x14f PushI
	var_346_int = 27714; // 0x150 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x151 TObjFunc
	goto Label_342; // 0x153 Jump
}


func_2335(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x91f PushV
	var_43_int = 0; // 0x920 MovI
	
Label_2337:
	var_45_string = "all"; // 0x921 PushS
	var_46_string = ""; var_47_int = 0; // 0x922 PushV
	var_47_int = var_43_int; // 0x923 Mov
	func_2328(var_46_string, var_47_int); // 0x924 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x926 Func
	var_51_bool = var_44_bool == 0; // 0x928 Not
	if(var_51_bool == 0) goto Label_2347; // 0x929 JumpB
	goto Label_2350; // 0x92a Jump
	
Label_2350:
	var_40_int = var_43_int; // 0x92e Mov
	return 4; // 0x92f Return
	
Label_2347:
	var_52_int = 1; // 0x92b PushI
	var_43_int = var_43_int + var_52_int; // 0x92c Add2
	goto Label_2337; // 0x92d Jump
}


func_1573(var_2_object, var_486_string)
{
	var_487_bool = 0; // 0x626 PushV
	func_2360(var_487_bool); // 0x627 NEW_2
	var_488_bool = var_487_bool == 0; // 0x629 Not
	if(var_488_bool == 0) goto Label_1580; // 0x62a JumpB
	return 0; // 0x62b Return
	
Label_1580:
	var_489_bool = var_486_string == var_2_object; // 0x62c Eq
	if(var_489_bool == 0) goto Label_1583; // 0x62d JumpB
	return 0; // 0x62e Return
	
Label_1583:
	var_490_string = ""; var_491_bool = 0; // 0x62f PushV
	var_490_string = var_486_string; // 0x630 Mov
	var_492_string = ""; // 0x631 PushS
	var_493_bool = var_486_string == var_492_string; // 0x632 Eq
	if(var_493_bool == 0) goto Label_1590; // 0x633 JumpB
	var_491_bool = 0; // 0x634 MovB
	goto Label_1591; // 0x635 Jump
	
Label_1591:
	func_2243(var_490_string, var_491_bool); // 0x637 NEW_2
	var_2_object = var_486_string; // 0x639 TMov
	return 0; // 0x63a Return
	
Label_1590:
	var_491_bool = 1; // 0x636 MovB
}


func_2598(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0xa27 PushGE
	var_41_bool = var_40_bool == 0; // 0xa28 Not
	if(var_41_bool == 0) goto Label_2611; // 0xa29 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0xa2a PushV
	var_43_object = var_39_object; // 0xa2b Mov
	TaskCall(0); // 0xa2c TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0xa2d NEW_2
	TaskReturn(); // 0xa2e TaskReturn
	var_267_bool = GlobalVars[1]; // 0xa30 PushGE
	var_267_bool = 1; // 0xa31 MovB
	GlobalVars[1] = var_267_bool; // 0xa32 PopGE
	
Label_2611:
	var_268_bool = 0; var_269_int = 0; // 0xa33 PushV
	var_269_int = 8; // 0xa34 MovI
	func_2322(var_268_bool, var_269_int); // 0xa35 NEW_2
	if(var_268_bool == 0) goto Label_2623; // 0xa37 JumpB
	var_271_int = 0; var_272_object = Obj(); // 0xa38 PushV
	var_272_object = var_39_object; // 0xa39 Mov
	TaskCall(2); // 0xa3a TaskCall
	func_203(var_273_object, var_271_int, var_272_object); // 0xa3b NEW_2
	TaskReturn(); // 0xa3c TaskReturn
	return 0; // 0xa3e Return
	
Label_2623:
	var_349_bool = 0; var_350_int = 0; // 0xa3f PushV
	var_350_int = 11; // 0xa40 MovI
	func_2322(var_349_bool, var_350_int); // 0xa41 NEW_2
	if(var_349_bool == 0) goto Label_2635; // 0xa43 JumpB
	var_351_int = 0; var_352_object = Obj(); // 0xa44 PushV
	var_352_object = var_39_object; // 0xa45 Mov
	TaskCall(4); // 0xa46 TaskCall
	func_726(var_353_object, var_351_int, var_352_object); // 0xa47 NEW_2
	TaskReturn(); // 0xa48 TaskReturn
	return 0; // 0xa4a Return
	
Label_2635:
	var_453_bool = 0; var_454_int = 0; // 0xa4b PushV
	var_454_int = 12; // 0xa4c MovI
	func_2322(var_453_bool, var_454_int); // 0xa4d NEW_2
	if(var_453_bool == 0) goto Label_2647; // 0xa4f JumpB
	var_455_int = 0; var_456_object = Obj(); // 0xa50 PushV
	var_456_object = var_39_object; // 0xa51 Mov
	TaskCall(6); // 0xa52 TaskCall
	func_1429(var_457_object, var_455_int, var_456_object); // 0xa53 NEW_2
	TaskReturn(); // 0xa54 TaskReturn
	return 0; // 0xa56 Return
	
Label_2647:
	return 0; // 0xa57 Return
}


func_807(var_0_object, var_1_object, var_2_object, var_3_string, var_375_object, var_376_object)
{
	var_0_object = var_376_object; // 0x328 TMov
	var_1_object = var_375_object; // 0x329 TMov
	var_3_string = 0; // 0x32a TMovB
	var_381_int = 1; // 0x32b PushI
	if(var_381_int == 0) goto Label_911; // 0x32c JumpB
	var_382_bool = 0; // 0x32d PushV
	var_382_bool = 0; // 0x32e MovB
	var_383_bool = 0; var_384_object = Obj(); // 0x32f PushV
	var_384_object = var_1_object; // 0x330 MovT
	func_2440(var_384_object); // 0x331 NEW_2
	if(var_383_bool == 0) goto Label_826; // 0x333 JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0x334 PushV
	var_390_object = var_1_object; // 0x335 MovT
	func_2452(var_390_object); // 0x336 NEW_2
	if(var_389_bool == 0) goto Label_826; // 0x338 JumpB
	var_382_bool = 1; // 0x339 MovB
	
Label_826:
	if(var_382_bool == 0) goto Label_847; // 0x33a JumpB
	var_395_object = Obj(); var_396_object = Obj(); // 0x33b PushV
	var_395_object = var_1_object; // 0x33c MovT
	var_396_object = var_0_object; // 0x33d MovT
	func_2380(); // 0x33e NEW_2
	var_399_string = ""; // 0x340 PushV
	var_399_string = "Neutral"; // 0x341 MovS
	func_941(var_376_object, var_399_string); // 0x342 NEW_2
	var_407_int = 527376; // 0x344 PushI
	SetMessage(var_407_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_408_int = 527379; // 0x349 PushI
	var_409_int = 28703; // 0x34a PushI
	var_410_int = 28702; // 0x34b PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x34c TObjFunc
	goto Label_911; // 0x34e Jump
	
Label_911:
	var_411_bool = 0; // 0x38f PushV
	func_2360(var_411_bool); // 0x390 NEW_2
	if(var_411_bool == 0) goto Label_926; // 0x392 JumpB
	
Label_915:
	lshWaitForAnimEnd(); // 0x393 Func
	var_412_string = var_3_string; // 0x395 PushT
	if(var_412_string == 0) goto Label_920; // 0x396 JumpB
	goto Label_925; // 0x397 Jump
	
Label_925:
	goto Label_940; // 0x39d Jump
	
Label_940:
	return 0; // 0x3ac Return
	
Label_920:
	var_413_string = ""; // 0x398 PushV
	var_413_string = var_2_object; // 0x399 MovT
	func_2227(var_413_string); // 0x39a NEW_2
	goto Label_915; // 0x39c Jump
	
Label_926:
	var_414_string = "all"; // 0x39e PushS
	var_415_string = "idle"; // 0x39f PushS
	PlayAnimation(var_414_string, var_415_string); // 0x3a0 Func
	
Label_930:
	WaitForAnimEnd(); // 0x3a2 Func
	var_416_string = var_3_string; // 0x3a4 PushT
	if(var_416_string == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_940; // 0x3a6 Jump
	
Label_935:
	var_417_string = "all"; // 0x3a7 PushS
	var_418_string = "idle"; // 0x3a8 PushS
	PlayAnimation(var_417_string, var_418_string); // 0x3a9 Func
	goto Label_930; // 0x3ab Jump
	
Label_847:
	var_419_string = ""; // 0x34f PushV
	var_419_string = "Neutral"; // 0x350 MovS
	func_941(var_376_object, var_419_string); // 0x351 NEW_2
	var_420_int = 527212; // 0x353 PushI
	SetMessage(var_420_int); // 0x354 TObjFunc
	ClearReplies(); // 0x356 TObjFunc
	var_421_bool = 0; var_422_object = Obj(); // 0x358 PushV
	var_422_object = var_1_object; // 0x359 MovT
	func_2440(var_422_object); // 0x35a NEW_2
	if(var_421_bool == 0) goto Label_866; // 0x35c JumpB
	var_423_int = 527339; // 0x35d PushI
	var_424_int = 28658; // 0x35e PushI
	var_425_int = 28657; // 0x35f PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x360 TObjFunc
	
Label_866:
	var_426_bool = 0; // 0x362 PushV
	var_426_bool = 1; // 0x363 MovB
	var_427_bool = 0; // 0x364 PushV
	var_427_bool = 0; // 0x365 MovB
	var_428_bool = 0; var_429_object = Obj(); // 0x366 PushV
	var_429_object = var_1_object; // 0x367 MovT
	func_2476(var_429_object); // 0x368 NEW_2
	if(var_428_bool == 0) goto Label_881; // 0x36a JumpB
	var_434_bool = 0; var_435_object = Obj(); // 0x36b PushV
	var_435_object = var_1_object; // 0x36c MovT
	func_2440(var_435_object); // 0x36d NEW_2
	if(var_434_bool == 0) goto Label_881; // 0x36f JumpB
	var_427_bool = 1; // 0x370 MovB
	
Label_881:
	if(var_427_bool == 0) goto Label_897; // 0x371 JumpB
	var_436_bool = 0; // 0x372 PushV
	var_436_bool = 0; // 0x373 MovB
	var_437_bool = 0; var_438_object = Obj(); // 0x374 PushV
	var_438_object = var_1_object; // 0x375 MovT
	func_2464(var_438_object); // 0x376 NEW_2
	if(var_437_bool == 0) goto Label_895; // 0x378 JumpB
	var_443_bool = 0; var_444_object = Obj(); // 0x379 PushV
	var_444_object = var_1_object; // 0x37a MovT
	func_2476(var_444_object); // 0x37b NEW_2
	if(var_443_bool == 0) goto Label_895; // 0x37d JumpB
	var_436_bool = 1; // 0x37e MovB
	
Label_895:
	if(var_436_bool == 0) goto Label_897; // 0x37f JumpB
	var_426_bool = 0; // 0x380 MovB
	
Label_897:
	if(var_426_bool == 0) goto Label_903; // 0x381 JumpB
	var_445_int = 527373; // 0x382 PushI
	var_446_int = 28707; // 0x383 PushI
	var_447_int = 28696; // 0x384 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x385 TObjFunc
	
Label_903:
	var_448_int = 527218; // 0x387 PushI
	var_449_int = -1; // 0x388 PushI
	var_450_int = 28526; // 0x389 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x38a TObjFunc
	goto Label_911; // 0x38c Jump
}


func_2089(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x829 PushV
	var_123_string = "voice_common"; // 0x82a PushS
	GetVariable(var_123_string, var_121_int); // 0x82b Func
	var_124_int = var_121_int; // 0x82d Push
	if(var_124_int == 0) goto Label_2127; // 0x82e JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x82f PushV
	var_126_object = var_115_object; // 0x830 Mov
	func_2147(var_126_object); // 0x831 NEW_2
	var_155_bool = var_125_bool == 0; // 0x833 Not
	if(var_155_bool == 0) goto Label_2109; // 0x834 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x835 PushV
	var_157_object = var_115_object; // 0x836 Mov
	func_2184(var_157_object); // 0x837 NEW_2
	var_191_bool = var_156_bool == 0; // 0x839 Not
	if(var_191_bool == 0) goto Label_2109; // 0x83a JumpB
	var_114_bool = 0; // 0x83b MovB
	return 4; // 0x83c Return
	
Label_2109:
	var_192_int = 2; // 0x83d PushI
	irand(var_122_int, var_192_int); // 0x83e Func
	var_193_int = var_122_int; // 0x840 Push
	if(var_193_int == 0) goto Label_2122; // 0x841 JumpB
	var_194_string = "voice_common"; // 0x842 PushS
	var_195_int = 1; // 0x843 PushI
	var_196_int = var_121_int + var_195_int; // 0x844 Add
	var_197_int = 3; // 0x845 PushI
	var_198_int = var_196_int / var_197_int; // 0x846 Mod
	SetVariable(var_194_string, var_198_int); // 0x847 Func
	goto Label_2126; // 0x849 Jump
	
Label_2126:
	goto Label_2145; // 0x84e Jump
	
Label_2145:
	var_114_bool = 1; // 0x861 MovB
	return 4; // 0x862 Return
	
Label_2122:
	var_199_string = "voice_common"; // 0x84a PushS
	var_200_int = 0; // 0x84b PushI
	SetVariable(var_199_string, var_200_int); // 0x84c Func
	
Label_2127:
	var_201_bool = 0; var_202_object = Obj(); // 0x84f PushV
	var_202_object = var_115_object; // 0x850 Mov
	func_2184(var_202_object); // 0x851 NEW_2
	var_203_bool = var_201_bool == 0; // 0x853 Not
	if(var_203_bool == 0) goto Label_2141; // 0x854 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x855 PushV
	var_205_object = var_115_object; // 0x856 Mov
	func_2147(var_205_object); // 0x857 NEW_2
	var_206_bool = var_204_bool == 0; // 0x859 Not
	if(var_206_bool == 0) goto Label_2141; // 0x85a JumpB
	var_114_bool = 0; // 0x85b MovB
	return 4; // 0x85c Return
	
Label_2141:
	var_207_string = "voice_common"; // 0x85d PushS
	var_208_int = 1; // 0x85e PushI
	SetVariable(var_207_string, var_208_int); // 0x85f Func
}


func_2352(var_102_int)
{
	var_102_int = 515553; // 0x930 MovI
	return 0; // 0x931 Return
}


func_2354(var_101_int)
{
	var_101_int = 502878; // 0x932 MovI
	return 0; // 0x933 Return
}


func_2356(var_103_string)
{
	var_103_string = "ui/NPC_Starshina.png"; // 0x934 MovS
	return 0; // 0x935 Return
}


func_2358(var_104_string)
{
	var_104_string = "ui/NPC_Starshina_b.png"; // 0x936 MovS
	return 0; // 0x937 Return
}


func_2360(var_96_bool)
{
	var_96_bool = 1; // 0x938 MovB
	return 0; // 0x939 Return
}


func_2362()
{
	var_29_string = "k8q01"; // 0x93b PushS
	var_30_int = 5; // 0x93c PushI
	SetVariable(var_29_string, var_30_int); // 0x93d Func
	func_2527(); // 0x940 NEW_2
	return 0; // 0x942 Return
}


func_2371()
{
	var_58_string = "k8q01"; // 0x944 PushS
	var_59_int = 7; // 0x945 PushI
	SetVariable(var_58_string, var_59_int); // 0x946 Func
	func_2514(); // 0x949 NEW_2
	return 0; // 0x94b Return
}


func_2380()
{
	var_397_string = "ook11Starshina1"; // 0x94d PushS
	var_398_int = 1; // 0x94e PushI
	SetVariable(var_397_string, var_398_int); // 0x94f Func
	return 0; // 0x951 Return
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
	var_233_int = 525528; // 0x5b PushI
	SetMessage(var_233_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_234_int = 525529; // 0x60 PushI
	var_235_int = -1; // 0x61 PushI
	var_236_int = 26885; // 0x62 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x63 TObjFunc
	var_237_int = 529271; // 0x65 PushI
	var_238_int = -1; // 0x66 PushI
	var_239_int = 30724; // 0x67 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_240_bool = 0; // 0x6d PushV
	func_2360(var_240_bool); // 0x6e NEW_2
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
	func_2227(var_242_string); // 0x78 NEW_2
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


func_2386()
{
	var_29_string = "k11q01"; // 0x953 PushS
	var_30_int = 6; // 0x954 PushI
	SetVariable(var_29_string, var_30_int); // 0x955 Func
	func_2501(); // 0x958 NEW_2
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x95a PushV
	var_55_string = "quest_k11_01"; // 0x95b MovS
	var_56_string = "place_burah"; // 0x95c MovS
	func_2301(var_54_bool, var_55_string, var_56_string); // 0x95d NEW_2
	return 0; // 0x95f Return
}


func_2400()
{
	var_83_string = "ook11Starshina2"; // 0x961 PushS
	var_84_int = 1; // 0x962 PushI
	SetVariable(var_83_string, var_84_int); // 0x963 Func
	return 0; // 0x965 Return
}


func_2147(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x863 PushV
	var_132_string = "c"; // 0x864 MovS
	var_133_int = 0; // 0x865 MovI
	
Label_2150:
	var_137_int = 1; // 0x866 PushI
	if(var_137_int == 0) goto Label_2163; // 0x867 JumpB
	var_138_int = 1; // 0x868 PushI
	var_139_int = var_133_int + var_138_int; // 0x869 Add
	var_140_int = var_132_string + var_139_int; // 0x86a Add
	HasProperty(var_140_int, var_134_bool); // 0x86b ObjFunc
	var_141_bool = var_134_bool == 0; // 0x86d Not
	if(var_141_bool == 0) goto Label_2160; // 0x86e JumpB
	goto Label_2163; // 0x86f Jump
	
Label_2163:
	var_142_bool = var_133_int == 0; // 0x873 Not
	if(var_142_bool == 0) goto Label_2167; // 0x874 JumpB
	var_125_bool = 0; // 0x875 MovB
	return 10; // 0x876 Return
	
Label_2167:
	var_135_int = 0; // 0x877 MovI
	var_143_int = 1; // 0x878 PushI
	var_144_bool = var_133_int > var_143_int; // 0x879 GT
	if(var_144_bool == 0) goto Label_2173; // 0x87a JumpB
	irand(var_135_int, var_133_int); // 0x87b Func
	
Label_2173:
	var_145_int = 1; // 0x87d PushI
	var_146_int = var_135_int + var_145_int; // 0x87e Add
	var_147_int = var_132_string + var_146_int; // 0x87f Add
	GetProperty(var_147_int, var_136_string); // 0x880 ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x882 PushV
	var_149_string = var_136_string; // 0x883 Mov
	func_2258(var_148_bool, var_149_string); // 0x884 NEW_2
	var_125_bool = var_148_bool; // 0x885 Mov
	return 10; // 0x887 Return
	
Label_2160:
	var_154_int = 1; // 0x870 PushI
	var_133_int = var_133_int + var_154_int; // 0x871 Add2
	goto Label_2150; // 0x872 Jump
}


func_2406()
{
	func_2488(); // 0x968 NEW_2
	var_72_bool = 0; var_73_string = ""; var_74_string = ""; // 0x96a PushV
	var_73_string = "quest_k11_01"; // 0x96b MovS
	var_74_string = "fail"; // 0x96c MovS
	func_2301(var_72_bool, var_73_string, var_74_string); // 0x96d NEW_2
	return 0; // 0x96f Return
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
	func_2335(var_40_int); // 0x770 NEW_2
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
	func_2328(var_67_string, var_68_int); // 0x794 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x796 Func
	WaitForAnimEnd(var_37_bool); // 0x798 Func
	var_69_bool = var_37_bool == 0; // 0x79a Not
	if(var_69_bool == 0) goto Label_1949; // 0x79b JumpB
	goto Label_1960; // 0x79c Jump
}


func_2416(var_302_bool)
{
	var_304_int = 0; var_305_string = ""; // 0x971 PushV
	var_305_string = "k8q01"; // 0x972 MovS
	func_2296(var_304_int, var_305_string); // 0x973 NEW_2
	var_308_int = 4; // 0x975 PushI
	var_309_bool = var_304_int == var_308_int; // 0x976 Eq
	if(var_309_bool == 0) goto Label_2426; // 0x977 JumpB
	var_302_bool = 1; // 0x978 MovB
	return 0; // 0x979 Return
	
Label_2426:
	var_302_bool = 0; // 0x97a MovB
	return 0; // 0x97b Return
}


func_372(var_2_object, var_310_string)
{
	var_311_bool = 0; // 0x175 PushV
	func_2360(var_311_bool); // 0x176 NEW_2
	var_312_bool = var_311_bool == 0; // 0x178 Not
	if(var_312_bool == 0) goto Label_379; // 0x179 JumpB
	return 0; // 0x17a Return
	
Label_379:
	var_313_bool = var_310_string == var_2_object; // 0x17b Eq
	if(var_313_bool == 0) goto Label_382; // 0x17c JumpB
	return 0; // 0x17d Return
	
Label_382:
	var_314_string = ""; var_315_bool = 0; // 0x17e PushV
	var_314_string = var_310_string; // 0x17f Mov
	var_316_string = ""; // 0x180 PushS
	var_317_bool = var_310_string == var_316_string; // 0x181 Eq
	if(var_317_bool == 0) goto Label_389; // 0x182 JumpB
	var_315_bool = 0; // 0x183 MovB
	goto Label_390; // 0x184 Jump
	
Label_390:
	func_2243(var_314_string, var_315_bool); // 0x186 NEW_2
	var_2_object = var_310_string; // 0x188 TMov
	return 0; // 0x189 Return
	
Label_389:
	var_315_bool = 1; // 0x185 MovB
}


func_2428(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0x97d PushV
	var_338_string = "k8q01"; // 0x97e MovS
	func_2296(var_337_int, var_338_string); // 0x97f NEW_2
	var_339_int = 6; // 0x981 PushI
	var_340_bool = var_337_int == var_339_int; // 0x982 Eq
	if(var_340_bool == 0) goto Label_2438; // 0x983 JumpB
	var_335_bool = 1; // 0x984 MovB
	return 0; // 0x985 Return
	
Label_2438:
	var_335_bool = 0; // 0x986 MovB
	return 0; // 0x987 Return
}


func_2184(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x888 PushV
	var_168_string = "d"; // 0x889 PushS
	var_169_int = 0; // 0x88a PushV
	func_2313(var_169_int); // 0x88b NEW_2
	var_175_int = var_168_string + var_169_int; // 0x88d Add
	var_176_string = "m"; // 0x88e PushS
	var_163_string = var_175_int + var_176_string; // 0x88f Add2
	var_164_int = 0; // 0x890 MovI
	
Label_2193:
	var_177_int = 1; // 0x891 PushI
	if(var_177_int == 0) goto Label_2206; // 0x892 JumpB
	var_178_int = 1; // 0x893 PushI
	var_179_int = var_164_int + var_178_int; // 0x894 Add
	var_180_int = var_163_string + var_179_int; // 0x895 Add
	HasProperty(var_180_int, var_165_bool); // 0x896 ObjFunc
	var_181_bool = var_165_bool == 0; // 0x898 Not
	if(var_181_bool == 0) goto Label_2203; // 0x899 JumpB
	goto Label_2206; // 0x89a Jump
	
Label_2206:
	var_182_bool = var_164_int == 0; // 0x89e Not
	if(var_182_bool == 0) goto Label_2210; // 0x89f JumpB
	var_156_bool = 0; // 0x8a0 MovB
	return 10; // 0x8a1 Return
	
Label_2210:
	var_166_int = 0; // 0x8a2 MovI
	var_183_int = 1; // 0x8a3 PushI
	var_184_bool = var_164_int > var_183_int; // 0x8a4 GT
	if(var_184_bool == 0) goto Label_2216; // 0x8a5 JumpB
	irand(var_166_int, var_164_int); // 0x8a6 Func
	
Label_2216:
	var_185_int = 1; // 0x8a8 PushI
	var_186_int = var_166_int + var_185_int; // 0x8a9 Add
	var_187_int = var_163_string + var_186_int; // 0x8aa Add
	GetProperty(var_187_int, var_167_string); // 0x8ab ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x8ad PushV
	var_189_string = var_167_string; // 0x8ae Mov
	func_2258(var_188_bool, var_189_string); // 0x8af NEW_2
	var_156_bool = var_188_bool; // 0x8b0 Mov
	return 10; // 0x8b2 Return
	
Label_2203:
	var_190_int = 1; // 0x89b PushI
	var_164_int = var_164_int + var_190_int; // 0x89c Add2
	goto Label_2193; // 0x89d Jump
}


func_2440(var_383_bool)
{
	var_385_int = 0; var_386_string = ""; // 0x989 PushV
	var_386_string = "k11q01"; // 0x98a MovS
	func_2296(var_385_int, var_386_string); // 0x98b NEW_2
	var_387_int = 5; // 0x98d PushI
	var_388_bool = var_385_int == var_387_int; // 0x98e Eq
	if(var_388_bool == 0) goto Label_2450; // 0x98f JumpB
	var_383_bool = 1; // 0x990 MovB
	return 0; // 0x991 Return
	
Label_2450:
	var_383_bool = 0; // 0x992 MovB
	return 0; // 0x993 Return
}


func_139(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x8c PushV
	func_2360(var_217_bool); // 0x8d NEW_2
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
	func_2243(var_220_string, var_221_bool); // 0x9d NEW_2
	var_2_object = var_216_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_221_bool = 1; // 0x9c MovB
}


func_2452(var_389_bool)
{
	var_391_int = 0; var_392_string = ""; // 0x995 PushV
	var_392_string = "ook11Starshina1"; // 0x996 MovS
	func_2296(var_391_int, var_392_string); // 0x997 NEW_2
	var_393_int = 0; // 0x999 PushI
	var_394_bool = var_391_int == var_393_int; // 0x99a Eq
	if(var_394_bool == 0) goto Label_2462; // 0x99b JumpB
	var_389_bool = 1; // 0x99c MovB
	return 0; // 0x99d Return
	
Label_2462:
	var_389_bool = 0; // 0x99e MovB
	return 0; // 0x99f Return
}


func_1429(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; // 0x595 PushV
	var_0_object = var_456_object; // 0x596 TMov
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0; // 0x597 PushV
	var_467_object = var_456_object; // 0x598 Mov
	var_468_float = 130.0; // 0x599 MovF
	func_2002(var_467_object, var_468_float); // 0x59a NEW_2
	var_469_bool = var_466_bool == 0; // 0x59c Not
	if(var_469_bool == 0) goto Label_1440; // 0x59d JumpB
	var_455_int = -2; // 0x59e MovI
	return 8; // 0x59f Return
	
Label_1440:
	CreateDialog(var_462_object); // 0x5a0 Func
	var_470_int = 0; // 0x5a2 PushV
	func_2354(var_470_int); // 0x5a3 NEW_2
	SetNPCName(var_470_int); // 0x5a5 ObjFunc
	var_471_int = 0; // 0x5a7 PushV
	func_2352(var_471_int); // 0x5a8 NEW_2
	SetNPCDescription(var_471_int); // 0x5aa ObjFunc
	var_472_string = ""; // 0x5ac PushV
	func_2356(var_472_string); // 0x5ad NEW_2
	SetPhoto(var_472_string); // 0x5af ObjFunc
	var_473_string = ""; // 0x5b1 PushV
	func_2358(var_473_string); // 0x5b2 NEW_2
	SetPhoto2(var_473_string); // 0x5b4 ObjFunc
	var_474_int = 0; // 0x5b6 PushV
	func_2581(var_474_int); // 0x5b7 NEW_2
	SetPlayerName(var_474_int); // 0x5b9 ObjFunc
	var_464_int = -1; // 0x5bb MovI
	IsOverrideActive(var_463_bool); // 0x5bc Func
	var_475_bool = var_463_bool; // 0x5be Push
	if(var_475_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_455_int = -2; // 0x5c0 MovI
	return 8; // 0x5c1 Return
	
Label_1474:
	DoDialog(var_462_object); // 0x5c2 Func
	var_476_bool = 0; var_477_object = Obj(); // 0x5c4 PushV
	var_478_object = Obj(); // 0x5c5 PushV
	func_2280(var_478_object); // 0x5c6 NEW_2
	var_477_object = var_478_object; // 0x5c7 Mov
	func_2089(var_476_bool, var_477_object); // 0x5c9 NEW_2
	var_479_object = Obj(); var_480_object = Obj(); // 0x5cb PushV
	var_479_object = var_456_object; // 0x5cc Mov
	var_480_object = var_462_object; // 0x5cd Mov
	TaskCall(7); // 0x5ce TaskCall
	func_1510(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object); // 0x5cf NEW_2
	TaskReturn(); // 0x5d0 TaskReturn
	IsDialogEnd(var_465_bool); // 0x5d2 ObjFunc
	
Label_1492:
	var_512_bool = var_465_bool == 0; // 0x5d4 Not
	if(var_512_bool == 0) goto Label_1499; // 0x5d5 JumpB
	sync(); // 0x5d6 Func
	IsDialogEnd(var_465_bool); // 0x5d8 ObjFunc
	goto Label_1492; // 0x5da Jump
	
Label_1499:
	var_513_object = Obj(); // 0x5db PushV
	var_513_object = var_456_object; // 0x5dc Mov
	func_2071(); // 0x5dd NEW_2
	StopDialog(var_462_object); // 0x5df Func
	GetReturnValue(var_464_int); // 0x5e1 ObjFunc
	var_455_int = var_464_int; // 0x5e3 Mov
	return 8; // 0x5e4 Return
}


func_2464(var_437_bool)
{
	var_439_int = 0; var_440_string = ""; // 0x9a1 PushV
	var_440_string = "k11q01"; // 0x9a2 MovS
	func_2296(var_439_int, var_440_string); // 0x9a3 NEW_2
	var_441_int = 6; // 0x9a5 PushI
	var_442_bool = var_439_int == var_441_int; // 0x9a6 Eq
	if(var_442_bool == 0) goto Label_2474; // 0x9a7 JumpB
	var_437_bool = 1; // 0x9a8 MovB
	return 0; // 0x9a9 Return
	
Label_2474:
	var_437_bool = 0; // 0x9aa MovB
	return 0; // 0x9ab Return
}


func_1963(var_60_bool)
{
	var_60_bool = 1; // 0x7ab MovB
	return 0; // 0x7ac Return
}


func_2476(var_428_bool)
{
	var_430_int = 0; var_431_string = ""; // 0x9ad PushV
	var_431_string = "ook11Starshina2"; // 0x9ae MovS
	func_2296(var_430_int, var_431_string); // 0x9af NEW_2
	var_432_int = 0; // 0x9b1 PushI
	var_433_bool = var_430_int == var_432_int; // 0x9b2 Eq
	if(var_433_bool == 0) goto Label_2486; // 0x9b3 JumpB
	var_428_bool = 1; // 0x9b4 MovB
	return 0; // 0x9b5 Return
	
Label_2486:
	var_428_bool = 0; // 0x9b6 MovB
	return 0; // 0x9b7 Return
}


func_941(var_2_object, var_399_string)
{
	var_400_bool = 0; // 0x3ae PushV
	func_2360(var_400_bool); // 0x3af NEW_2
	var_401_bool = var_400_bool == 0; // 0x3b1 Not
	if(var_401_bool == 0) goto Label_948; // 0x3b2 JumpB
	return 0; // 0x3b3 Return
	
Label_948:
	var_402_bool = var_399_string == var_2_object; // 0x3b4 Eq
	if(var_402_bool == 0) goto Label_951; // 0x3b5 JumpB
	return 0; // 0x3b6 Return
	
Label_951:
	var_403_string = ""; var_404_bool = 0; // 0x3b7 PushV
	var_403_string = var_399_string; // 0x3b8 Mov
	var_405_string = ""; // 0x3b9 PushS
	var_406_bool = var_399_string == var_405_string; // 0x3ba Eq
	if(var_406_bool == 0) goto Label_958; // 0x3bb JumpB
	var_404_bool = 0; // 0x3bc MovB
	goto Label_959; // 0x3bd Jump
	
Label_959:
	func_2243(var_403_string, var_404_bool); // 0x3bf NEW_2
	var_2_object = var_399_string; // 0x3c1 TMov
	return 0; // 0x3c2 Return
	
Label_958:
	var_404_bool = 1; // 0x3be MovB
}


func_1965()
{
	StopAnimation(); // 0x7ad Func
	StopGroup0(); // 0x7af Func
	return 0; // 0x7b1 Return
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


func_2227(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x8b3 PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x8b4 Func
	var_249_bool = var_246_bool; // 0x8b6 Push
	if(var_249_bool == 0) goto Label_2238; // 0x8b7 JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x8b8 Func
	var_250_bool = 0; // 0x8ba PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x8bb Func
	goto Label_2242; // 0x8bd Jump
	
Label_2242:
	return 6; // 0x8c2 Return
	
Label_2238:
	var_251_string = "Can't find lsh animation : "; // 0x8be PushS
	var_252_int = var_251_string + var_242_string; // 0x8bf Add
	Trace(var_252_int); // 0x8c0 Func
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


func_2488()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x9b8 PushV
	var_66_int = 788; // 0x9b9 PushI
	var_67_int = 1; // 0x9ba PushI
	var_68_int = 542507; // 0x9bb PushI
	CreateDiaryEntry(var_65_object, var_66_int, var_67_int, var_68_int); // 0x9bc Func
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0; // 0x9be PushV
	var_70_object = var_65_object; // 0x9bf Mov
	var_71_int = 480; // 0x9c0 MovI
	func_2553(var_69_bool, var_70_object, var_71_int); // 0x9c1 NEW_2
	return 2; // 0x9c3 Return
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


func_2243(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x8c3 PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x8c4 Func
	var_230_bool = var_227_bool; // 0x8c6 Push
	if(var_230_bool == 0) goto Label_2253; // 0x8c7 JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x8c8 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x8ca Func
	goto Label_2257; // 0x8cc Jump
	
Label_2257:
	return 6; // 0x8d1 Return
	
Label_2253:
	var_231_string = "Can't find lsh animation : "; // 0x8cd PushS
	var_232_int = var_231_string + var_220_string; // 0x8ce Add
	Trace(var_232_int); // 0x8cf Func
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


func_2501()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x9c5 PushV
	var_33_int = 489; // 0x9c6 PushI
	var_34_int = 1; // 0x9c7 PushI
	var_35_int = 528056; // 0x9c8 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x9c9 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x9cb PushV
	var_37_object = var_32_object; // 0x9cc Mov
	var_38_int = 480; // 0x9cd MovI
	func_2553(var_36_bool, var_37_object, var_38_int); // 0x9ce NEW_2
	return 2; // 0x9d0 Return
}


func_203(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0xcb PushV
	var_0_object = var_272_object; // 0xcc TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0xcd PushV
	var_283_object = var_272_object; // 0xce Mov
	var_284_float = 130.0; // 0xcf MovF
	func_2002(var_283_object, var_284_float); // 0xd0 NEW_2
	var_285_bool = var_282_bool == 0; // 0xd2 Not
	if(var_285_bool == 0) goto Label_214; // 0xd3 JumpB
	var_271_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_278_object); // 0xd6 Func
	var_286_int = 0; // 0xd8 PushV
	func_2354(var_286_int); // 0xd9 NEW_2
	SetNPCName(var_286_int); // 0xdb ObjFunc
	var_287_int = 0; // 0xdd PushV
	func_2352(var_287_int); // 0xde NEW_2
	SetNPCDescription(var_287_int); // 0xe0 ObjFunc
	var_288_string = ""; // 0xe2 PushV
	func_2356(var_288_string); // 0xe3 NEW_2
	SetPhoto(var_288_string); // 0xe5 ObjFunc
	var_289_string = ""; // 0xe7 PushV
	func_2358(var_289_string); // 0xe8 NEW_2
	SetPhoto2(var_289_string); // 0xea ObjFunc
	var_290_int = 0; // 0xec PushV
	func_2581(var_290_int); // 0xed NEW_2
	SetPlayerName(var_290_int); // 0xef ObjFunc
	var_280_int = -1; // 0xf1 MovI
	IsOverrideActive(var_279_bool); // 0xf2 Func
	var_291_bool = var_279_bool; // 0xf4 Push
	if(var_291_bool == 0) goto Label_248; // 0xf5 JumpB
	var_271_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_278_object); // 0xf8 Func
	var_292_bool = 0; var_293_object = Obj(); // 0xfa PushV
	var_294_object = Obj(); // 0xfb PushV
	func_2280(var_294_object); // 0xfc NEW_2
	var_293_object = var_294_object; // 0xfd Mov
	func_2089(var_292_bool, var_293_object); // 0xff NEW_2
	var_295_object = Obj(); var_296_object = Obj(); // 0x101 PushV
	var_295_object = var_272_object; // 0x102 Mov
	var_296_object = var_278_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_281_bool); // 0x108 ObjFunc
	
Label_266:
	var_347_bool = var_281_bool == 0; // 0x10a Not
	if(var_347_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_281_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_348_object = Obj(); // 0x111 PushV
	var_348_object = var_272_object; // 0x112 Mov
	func_2071(); // 0x113 NEW_2
	StopDialog(var_278_object); // 0x115 Func
	GetReturnValue(var_280_int); // 0x117 ObjFunc
	var_271_int = var_280_int; // 0x119 Mov
	return 8; // 0x11a Return
}


func_1997(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x7cd PushV
	IsLoaded(var_24_bool); // 0x7ce Func
	var_22_bool = var_24_bool; // 0x7d0 Mov
	return 2; // 0x7d1 Return
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
	func_2286(var_80_cvector, var_81_cvector); // 0x7ed NEW_2
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
	var_93_bool = 1; // 0x7fd PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x7fe Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x800 PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x801 PushE
	Rotate(var_94_float, var_95_float); // 0x802 Func
	var_96_bool = 0; // 0x804 PushV
	func_2360(var_96_bool); // 0x805 NEW_2
	if(var_96_bool == 0) goto Label_2057; // 0x807 JumpB
	goto Label_2065; // 0x808 Jump
	
Label_2065:
	CameraWaitForPlayFinish(); // 0x811 Func
	ResumeWorld(); // 0x813 Func
	var_53_bool = 1; // 0x815 MovB
	return 18; // 0x816 Return
	
Label_2057:
	var_97_string = "head"; // 0x809 PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x80a Func
	var_98_bool = var_73_bool; // 0x80c Push
	if(var_98_bool == 0) goto Label_2065; // 0x80d JumpB
	var_99_string = "head"; // 0x80e PushS
	LookAsyncCamera(var_99_string); // 0x80f Func
}


func_1747(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x6d3 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x6d4 PushE
	RotateAsync(var_98_float, var_99_float); // 0x6d5 Func
	return 0; // 0x6d7 Return
}


func_2258(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x8d2 PushV
	var_152_bool = 0; // 0x8d3 PushV
	func_2360(var_152_bool); // 0x8d4 NEW_2
	if(var_152_bool == 0) goto Label_2271; // 0x8d6 JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x8d7 Func
	var_153_bool = var_151_bool; // 0x8d9 Push
	if(var_153_bool == 0) goto Label_2271; // 0x8da JumpB
	lshPlaySpeech(var_149_string); // 0x8db Func
	var_148_bool = 1; // 0x8dd MovB
	return 2; // 0x8de Return
	
Label_2271:
	var_148_bool = 0; // 0x8df MovB
	return 2; // 0x8e0 Return
}


func_2514()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x9d2 PushV
	var_62_int = 445; // 0x9d3 PushI
	var_63_int = 1; // 0x9d4 PushI
	var_64_int = 526470; // 0x9d5 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0x9d6 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0x9d8 PushV
	var_66_object = var_61_object; // 0x9d9 Mov
	var_67_int = 438; // 0x9da MovI
	func_2553(var_65_bool, var_66_object, var_67_int); // 0x9db NEW_2
	return 2; // 0x9dd Return
}


func_726(var_0_object, var_351_int, var_352_object)
{
	var_354_object = Obj(); var_355_bool = 0; var_356_int = 0; var_357_bool = 0; var_358_object = Obj(); var_359_bool = 0; var_360_int = 0; var_361_bool = 0; // 0x2d6 PushV
	var_0_object = var_352_object; // 0x2d7 TMov
	var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; // 0x2d8 PushV
	var_363_object = var_352_object; // 0x2d9 Mov
	var_364_float = 130.0; // 0x2da MovF
	func_2002(var_363_object, var_364_float); // 0x2db NEW_2
	var_365_bool = var_362_bool == 0; // 0x2dd Not
	if(var_365_bool == 0) goto Label_737; // 0x2de JumpB
	var_351_int = -2; // 0x2df MovI
	return 8; // 0x2e0 Return
	
Label_737:
	CreateDialog(var_358_object); // 0x2e1 Func
	var_366_int = 0; // 0x2e3 PushV
	func_2354(var_366_int); // 0x2e4 NEW_2
	SetNPCName(var_366_int); // 0x2e6 ObjFunc
	var_367_int = 0; // 0x2e8 PushV
	func_2352(var_367_int); // 0x2e9 NEW_2
	SetNPCDescription(var_367_int); // 0x2eb ObjFunc
	var_368_string = ""; // 0x2ed PushV
	func_2356(var_368_string); // 0x2ee NEW_2
	SetPhoto(var_368_string); // 0x2f0 ObjFunc
	var_369_string = ""; // 0x2f2 PushV
	func_2358(var_369_string); // 0x2f3 NEW_2
	SetPhoto2(var_369_string); // 0x2f5 ObjFunc
	var_370_int = 0; // 0x2f7 PushV
	func_2581(var_370_int); // 0x2f8 NEW_2
	SetPlayerName(var_370_int); // 0x2fa ObjFunc
	var_360_int = -1; // 0x2fc MovI
	IsOverrideActive(var_359_bool); // 0x2fd Func
	var_371_bool = var_359_bool; // 0x2ff Push
	if(var_371_bool == 0) goto Label_771; // 0x300 JumpB
	var_351_int = -2; // 0x301 MovI
	return 8; // 0x302 Return
	
Label_771:
	DoDialog(var_358_object); // 0x303 Func
	var_372_bool = 0; var_373_object = Obj(); // 0x305 PushV
	var_374_object = Obj(); // 0x306 PushV
	func_2280(var_374_object); // 0x307 NEW_2
	var_373_object = var_374_object; // 0x308 Mov
	func_2089(var_372_bool, var_373_object); // 0x30a NEW_2
	var_375_object = Obj(); var_376_object = Obj(); // 0x30c PushV
	var_375_object = var_352_object; // 0x30d Mov
	var_376_object = var_358_object; // 0x30e Mov
	TaskCall(5); // 0x30f TaskCall
	func_807(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object); // 0x310 NEW_2
	TaskReturn(); // 0x311 TaskReturn
	IsDialogEnd(var_361_bool); // 0x313 ObjFunc
	
Label_789:
	var_451_bool = var_361_bool == 0; // 0x315 Not
	if(var_451_bool == 0) goto Label_796; // 0x316 JumpB
	sync(); // 0x317 Func
	IsDialogEnd(var_361_bool); // 0x319 ObjFunc
	goto Label_789; // 0x31b Jump
	
Label_796:
	var_452_object = Obj(); // 0x31c PushV
	var_452_object = var_352_object; // 0x31d Mov
	func_2071(); // 0x31e NEW_2
	StopDialog(var_358_object); // 0x320 Func
	GetReturnValue(var_360_int); // 0x322 ObjFunc
	var_351_int = var_360_int; // 0x324 Mov
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


func_2527()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x9df PushV
	var_33_int = 443; // 0x9e0 PushI
	var_34_int = 1; // 0x9e1 PushI
	var_35_int = 526468; // 0x9e2 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x9e3 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x9e5 PushV
	var_37_object = var_32_object; // 0x9e6 Mov
	var_38_int = 438; // 0x9e7 MovI
	func_2553(var_36_bool, var_37_object, var_38_int); // 0x9e8 NEW_2
	return 2; // 0x9ea Return
}


func_2273()
{
	var_24_bool = 0; // 0x8e1 PushV
	func_2360(var_24_bool); // 0x8e2 NEW_2
	if(var_24_bool == 0) goto Label_2279; // 0x8e4 JumpB
	lshStopSpeech(); // 0x8e5 Func
	
Label_2279:
	return 0; // 0x8e7 Return
}


func_1510(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object; // 0x5e7 TMov
	var_1_object = var_479_object; // 0x5e8 TMov
	var_3_string = 0; // 0x5e9 TMovB
	var_485_int = 1; // 0x5ea PushI
	if(var_485_int == 0) goto Label_1543; // 0x5eb JumpB
	var_486_string = ""; // 0x5ec PushV
	var_486_string = "Neutral"; // 0x5ed MovS
	func_1573(var_480_object, var_486_string); // 0x5ee NEW_2
	var_494_int = 539315; // 0x5f0 PushI
	SetMessage(var_494_int); // 0x5f1 TObjFunc
	ClearReplies(); // 0x5f3 TObjFunc
	var_495_int = 542623; // 0x5f5 PushI
	var_496_int = 45026; // 0x5f6 PushI
	var_497_int = 45025; // 0x5f7 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x5f8 TObjFunc
	var_498_int = 542622; // 0x5fa PushI
	var_499_int = -1; // 0x5fb PushI
	var_500_int = 45024; // 0x5fc PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x5fd TObjFunc
	var_501_int = 539316; // 0x5ff PushI
	var_502_int = -1; // 0x600 PushI
	var_503_int = 41259; // 0x601 PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x602 TObjFunc
	goto Label_1543; // 0x604 Jump
	
Label_1543:
	var_504_bool = 0; // 0x607 PushV
	func_2360(var_504_bool); // 0x608 NEW_2
	if(var_504_bool == 0) goto Label_1558; // 0x60a JumpB
	
Label_1547:
	lshWaitForAnimEnd(); // 0x60b Func
	var_505_string = var_3_string; // 0x60d PushT
	if(var_505_string == 0) goto Label_1552; // 0x60e JumpB
	goto Label_1557; // 0x60f Jump
	
Label_1557:
	goto Label_1572; // 0x615 Jump
	
Label_1572:
	return 0; // 0x624 Return
	
Label_1552:
	var_506_string = ""; // 0x610 PushV
	var_506_string = var_2_object; // 0x611 MovT
	func_2227(var_506_string); // 0x612 NEW_2
	goto Label_1547; // 0x614 Jump
	
Label_1558:
	var_507_string = "all"; // 0x616 PushS
	var_508_string = "idle"; // 0x617 PushS
	PlayAnimation(var_507_string, var_508_string); // 0x618 Func
	
Label_1562:
	WaitForAnimEnd(); // 0x61a Func
	var_509_string = var_3_string; // 0x61c PushT
	if(var_509_string == 0) goto Label_1567; // 0x61d JumpB
	goto Label_1572; // 0x61e Jump
	
Label_1567:
	var_510_string = "all"; // 0x61f PushS
	var_511_string = "idle"; // 0x620 PushS
	PlayAnimation(var_510_string, var_511_string); // 0x621 Func
	goto Label_1562; // 0x623 Jump
}


func_2280(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x8e8 PushV
	self(var_118_object); // 0x8e9 Func
	var_116_object = var_118_object; // 0x8eb Mov
	return 2; // 0x8ec Return
}


func_2540(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x9ec PushV
	GetDiaryRoot(var_47_object); // 0x9ed Func
	var_48_bool = var_47_object == 0; // 0x9ef Not
	if(var_48_bool == 0) goto Label_2550; // 0x9f0 JumpB
	var_49_string = "Can't retrieve diary root"; // 0x9f1 PushS
	Trace(var_49_string); // 0x9f2 Func
	var_45_object = 0; // 0x9f4 MovB
	return 2; // 0x9f5 Return
	
Label_2550:
	var_45_object = var_47_object; // 0x9f6 Mov
	return 2; // 0x9f7 Return
}


func_1774()
{
	var_516_float = 0; var_517_float = 0; // 0x6ee PushV
	var_518_int = 8; // 0x6ef PushI
	var_519_int = 16; // 0x6f0 PushI
	rand(var_517_float, var_518_int, var_519_int); // 0x6f1 Func
	var_520_int = 10; // 0x6f3 PushI
	SetTimer(var_520_int, var_517_float); // 0x6f4 Func
	return 2; // 0x6f6 Return
}


func_2286(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x8ee PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x8ef Or
	var_84_float = sqrt(var_85_int); // 0x8f0 Sqrt2
	var_86_float = 0.0; // 0x8f1 PushF
	var_87_bool = var_84_float < var_86_float; // 0x8f2 LT
	if(var_87_bool == 0) goto Label_2294; // 0x8f3 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x8f4 MovV
	return 2; // 0x8f5 Return
	
Label_2294:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x8f6 Div2
	return 2; // 0x8f7 Return
}


func_1783()
{
	var_515_int = 10; // 0x6f7 PushI
	KillTimer(var_515_int); // 0x6f8 Func
	return 0; // 0x6fa Return
}


func_2296(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0; // 0x8f8 PushV
	GetVariable(var_305_string, var_307_int); // 0x8f9 Func
	var_304_int = var_307_int; // 0x8fb Mov
	return 2; // 0x8fc Return
}


func_2553(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x9f9 PushV
	var_45_object = Obj(); // 0x9fa PushV
	func_2540(var_45_object); // 0x9fb NEW_2
	var_42_object = var_45_object; // 0x9fc Mov
	Find(var_38_int, var_43_object); // 0x9fe ObjFunc
	var_50_bool = var_43_object == 0; // 0xa00 Not
	if(var_50_bool == 0) goto Label_2568; // 0xa01 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0xa02 PushS
	var_52_int = var_51_string + var_38_int; // 0xa03 Add
	Trace(var_52_int); // 0xa04 Func
	var_36_bool = 0; // 0xa06 MovB
	return 6; // 0xa07 Return
	
Label_2568:
	AddChild(var_37_object); // 0xa08 ObjFunc
	var_53_int = 7; // 0xa0a PushI
	SendWorldWndMessage(var_53_int); // 0xa0b Func
	GetCategory(var_44_int); // 0xa0d ObjFunc
	SetDiarySection(var_44_int); // 0xa0f Func
	var_36_bool = 0; // 0xa11 MovB
	return 6; // 0xa12 Return
}


func_2301(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x8fd PushV
	FindActor(var_58_object, var_55_string); // 0x8fe Func
	var_59_bool = var_58_object == 0; // 0x900 NullEq
	if(var_59_bool == 0) goto Label_2308; // 0x901 JumpB
	var_54_bool = 0; // 0x902 MovB
	return 2; // 0x903 Return
	
Label_2308:
	Trigger(var_58_object, var_56_string); // 0x904 Func
	var_54_bool = 1; // 0x906 MovB
	return 2; // 0x907 Return
}


