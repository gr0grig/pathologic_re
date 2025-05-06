task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj(); // 0x24 PushV
	var_31_object = var_30_bool; // 0x25 Mov
	func_5099(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_4079(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xdd PushI
	if(var_32_int == 0) goto Label_420; // 0xde JumpB
	func_4174(); // 0xe0 Call
	var_34_int = 4274; // 0xe2 PushI
	var_35_bool = var_30_string == var_34_int; // 0xe3 Eq
	if(var_35_bool == 0) goto Label_283; // 0xe4 JumpB
	var_36_bool = 0; // 0xe5 PushV
	var_36_bool = 0; // 0xe6 MovB
	var_37_bool = 0; var_38_object = Obj(); // 0xe7 PushV
	var_38_object = var_1_object; // 0xe8 MovT
	func_4861(var_38_object); // 0xe9 Call
	if(var_37_bool == 0) goto Label_242; // 0xeb JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0xec PushV
	var_46_object = var_1_object; // 0xed MovT
	func_4885(var_46_object); // 0xee Call
	if(var_45_bool == 0) goto Label_242; // 0xf0 JumpB
	var_36_bool = 1; // 0xf1 MovB
	
Label_242:
	if(var_36_bool == 0) goto Label_268; // 0xf2 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0xf3 PushV
	var_51_object = var_1_object; // 0xf4 MovT
	var_52_object = var_0_object; // 0xf5 MovT
	func_4579(); // 0xf6 Call
	var_55_string = ""; // 0xf8 PushV
	var_55_string = "Neutral"; // 0xf9 MovS
	func_204(var_31_bool, var_55_string); // 0xfa Call
	var_70_int = 3926; // 0xfc PushI
	SetMessage(var_70_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_71_int = 3927; // 0x101 PushI
	var_72_int = 4276; // 0x102 PushI
	var_73_int = 4275; // 0x103 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x104 TObjFunc
	var_74_int = 3929; // 0x106 PushI
	var_75_int = 4278; // 0x107 PushI
	var_76_int = 4277; // 0x108 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_77_string = ""; // 0x10c PushV
	var_77_string = "Neutral"; // 0x10d MovS
	func_204(var_31_bool, var_77_string); // 0x10e Call
	var_78_int = 13718; // 0x110 PushI
	SetMessage(var_78_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_79_int = 13719; // 0x115 PushI
	var_80_int = -1; // 0x116 PushI
	var_81_int = 14985; // 0x117 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x118 TObjFunc
	return 0; // 0x11a Return
	
Label_283:
	var_82_int = 4278; // 0x11b PushI
	var_83_bool = var_30_string == var_82_int; // 0x11c Eq
	if(var_83_bool == 0) goto Label_311; // 0x11d JumpB
	var_84_string = ""; // 0x11e PushV
	var_84_string = "Neutral"; // 0x11f MovS
	func_204(var_31_bool, var_84_string); // 0x120 Call
	var_85_int = 3930; // 0x122 PushI
	SetMessage(var_85_int); // 0x123 TObjFunc
	ClearReplies(); // 0x125 TObjFunc
	var_86_int = 3931; // 0x127 PushI
	var_87_int = 4276; // 0x128 PushI
	var_88_int = 4279; // 0x129 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x12a TObjFunc
	var_89_int = 3932; // 0x12c PushI
	var_90_int = 4288; // 0x12d PushI
	var_91_int = 4280; // 0x12e PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x12f TObjFunc
	var_92_int = 3933; // 0x131 PushI
	var_93_int = -1; // 0x132 PushI
	var_94_int = 4281; // 0x133 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_95_int = 4276; // 0x137 PushI
	var_96_bool = var_30_string == var_95_int; // 0x138 Eq
	if(var_96_bool == 0) goto Label_334; // 0x139 JumpB
	var_97_string = ""; // 0x13a PushV
	var_97_string = "Neutral"; // 0x13b MovS
	func_204(var_31_bool, var_97_string); // 0x13c Call
	var_98_int = 3928; // 0x13e PushI
	SetMessage(var_98_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_99_int = 3937; // 0x143 PushI
	var_100_int = 4288; // 0x144 PushI
	var_101_int = 4286; // 0x145 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x146 TObjFunc
	var_102_int = 3938; // 0x148 PushI
	var_103_int = 4288; // 0x149 PushI
	var_104_int = 4287; // 0x14a PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_105_int = 4288; // 0x14e PushI
	var_106_bool = var_30_string == var_105_int; // 0x14f Eq
	if(var_106_bool == 0) goto Label_362; // 0x150 JumpB
	var_107_string = ""; // 0x151 PushV
	var_107_string = "Neutral"; // 0x152 MovS
	func_204(var_31_bool, var_107_string); // 0x153 Call
	var_108_int = 3939; // 0x155 PushI
	SetMessage(var_108_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_109_int = 3940; // 0x15a PushI
	var_110_int = 4297; // 0x15b PushI
	var_111_int = 4291; // 0x15c PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x15d TObjFunc
	var_112_int = 3941; // 0x15f PushI
	var_113_int = 4294; // 0x160 PushI
	var_114_int = 4292; // 0x161 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x162 TObjFunc
	var_115_int = 3942; // 0x164 PushI
	var_116_int = -1; // 0x165 PushI
	var_117_int = 4293; // 0x166 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_118_int = 4294; // 0x16a PushI
	var_119_bool = var_30_string == var_118_int; // 0x16b Eq
	if(var_119_bool == 0) goto Label_385; // 0x16c JumpB
	var_120_string = ""; // 0x16d PushV
	var_120_string = "Neutral"; // 0x16e MovS
	func_204(var_31_bool, var_120_string); // 0x16f Call
	var_121_int = 3943; // 0x171 PushI
	SetMessage(var_121_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_122_int = 3944; // 0x176 PushI
	var_123_int = -1; // 0x177 PushI
	var_124_int = 4295; // 0x178 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x179 TObjFunc
	var_125_int = 3945; // 0x17b PushI
	var_126_int = -1; // 0x17c PushI
	var_127_int = 4296; // 0x17d PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_128_int = 4297; // 0x181 PushI
	var_129_bool = var_30_string == var_128_int; // 0x182 Eq
	if(var_129_bool == 0) goto Label_408; // 0x183 JumpB
	var_130_string = ""; // 0x184 PushV
	var_130_string = "Neutral"; // 0x185 MovS
	func_204(var_31_bool, var_130_string); // 0x186 Call
	var_131_int = 3946; // 0x188 PushI
	SetMessage(var_131_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_132_int = 3947; // 0x18d PushI
	var_133_int = -1; // 0x18e PushI
	var_134_int = 4298; // 0x18f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x190 TObjFunc
	var_135_int = 3948; // 0x192 PushI
	var_136_int = -1; // 0x193 PushI
	var_137_int = 4299; // 0x194 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_3_string = 1; // 0x198 TMovB
	var_138_bool = 0; // 0x199 PushV
	func_4256(var_138_bool); // 0x19a Call
	if(var_138_bool == 0) goto Label_416; // 0x19c JumpB
	lshStopAnimation(); // 0x19d Func
	goto Label_418; // 0x19f Jump
	
Label_418:
	return 0; // 0x1a2 Return
	
Label_416:
	StopAnimation(); // 0x1a0 Func
	
Label_420:
	return 0; // 0x1a4 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x27f PushI
	if(var_32_int == 0) goto Label_1265; // 0x280 JumpB
	func_4174(); // 0x282 Call
	var_34_int = 4915; // 0x284 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x285 Eq
	if(var_35_bool == 0) goto Label_667; // 0x286 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x287 PushV
	var_36_object = var_1_object; // 0x288 MovT
	var_37_object = var_0_object; // 0x289 MovT
	func_4391(); // 0x28a Call
	var_48_object = Obj(); var_49_object = Obj(); // 0x28c PushV
	var_48_object = var_1_object; // 0x28d MovT
	var_49_object = var_0_object; // 0x28e MovT
	func_4519(); // 0x28f Call
	var_52_object = Obj(); var_53_object = Obj(); // 0x291 PushV
	var_52_object = var_1_object; // 0x292 MovT
	var_53_object = var_0_object; // 0x293 MovT
	func_4404(); // 0x294 Call
	var_80_object = Obj(); var_81_object = Obj(); // 0x296 PushV
	var_80_object = var_1_object; // 0x297 MovT
	var_81_object = var_0_object; // 0x298 MovT
	func_4300(); // 0x299 Call
	
Label_667:
	var_106_int = 4900; // 0x29b PushI
	var_107_bool = var_31_bool == var_106_int; // 0x29c Eq
	if(var_107_bool == 0) goto Label_690; // 0x29d JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x29e PushV
	var_108_object = var_1_object; // 0x29f MovT
	var_109_object = var_0_object; // 0x2a0 MovT
	func_4391(); // 0x2a1 Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x2a3 PushV
	var_110_object = var_1_object; // 0x2a4 MovT
	var_111_object = var_0_object; // 0x2a5 MovT
	func_4519(); // 0x2a6 Call
	var_112_object = Obj(); var_113_object = Obj(); // 0x2a8 PushV
	var_112_object = var_1_object; // 0x2a9 MovT
	var_113_object = var_0_object; // 0x2aa MovT
	func_4404(); // 0x2ab Call
	var_114_object = Obj(); var_115_object = Obj(); // 0x2ad PushV
	var_114_object = var_1_object; // 0x2ae MovT
	var_115_object = var_0_object; // 0x2af MovT
	func_4300(); // 0x2b0 Call
	
Label_690:
	var_116_int = 5020; // 0x2b2 PushI
	var_117_bool = var_31_bool == var_116_int; // 0x2b3 Eq
	if(var_117_bool == 0) goto Label_698; // 0x2b4 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0x2b5 PushV
	var_118_object = var_1_object; // 0x2b6 MovT
	var_119_object = var_0_object; // 0x2b7 MovT
	func_4549(); // 0x2b8 Call
	
Label_698:
	var_122_int = 5021; // 0x2ba PushI
	var_123_bool = var_31_bool == var_122_int; // 0x2bb Eq
	if(var_123_bool == 0) goto Label_706; // 0x2bc JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x2bd PushV
	var_124_object = var_1_object; // 0x2be MovT
	var_125_object = var_0_object; // 0x2bf MovT
	func_4549(); // 0x2c0 Call
	
Label_706:
	var_126_int = 4899; // 0x2c2 PushI
	var_127_bool = var_30_string == var_126_int; // 0x2c3 Eq
	if(var_127_bool == 0) goto Label_809; // 0x2c4 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x2c5 PushV
	var_129_object = var_1_object; // 0x2c6 MovT
	func_4669(var_129_object); // 0x2c7 Call
	if(var_128_bool == 0) goto Label_744; // 0x2c9 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x2ca PushV
	var_136_object = var_1_object; // 0x2cb MovT
	var_137_object = var_0_object; // 0x2cc MovT
	func_4567(); // 0x2cd Call
	var_140_string = ""; // 0x2cf PushV
	var_140_string = "Neutral"; // 0x2d0 MovS
	func_622(var_31_bool, var_140_string); // 0x2d1 Call
	var_155_int = 4496; // 0x2d3 PushI
	SetMessage(var_155_int); // 0x2d4 TObjFunc
	ClearReplies(); // 0x2d6 TObjFunc
	var_156_int = 4501; // 0x2d8 PushI
	var_157_int = 4905; // 0x2d9 PushI
	var_158_int = 4904; // 0x2da PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x2db TObjFunc
	var_159_int = 4517; // 0x2dd PushI
	var_160_int = 4923; // 0x2de PushI
	var_161_int = 4922; // 0x2df PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x2e0 TObjFunc
	var_162_int = 4521; // 0x2e2 PushI
	var_163_int = 4923; // 0x2e3 PushI
	var_164_int = 4928; // 0x2e4 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_165_bool = 0; var_166_object = Obj(); // 0x2e8 PushV
	var_166_object = var_1_object; // 0x2e9 MovT
	func_4717(var_166_object); // 0x2ea Call
	if(var_165_bool == 0) goto Label_779; // 0x2ec JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x2ed PushV
	var_171_object = var_1_object; // 0x2ee MovT
	var_172_object = var_0_object; // 0x2ef MovT
	func_4567(); // 0x2f0 Call
	var_173_string = ""; // 0x2f2 PushV
	var_173_string = "Neutral"; // 0x2f3 MovS
	func_622(var_31_bool, var_173_string); // 0x2f4 Call
	var_174_int = 4590; // 0x2f6 PushI
	SetMessage(var_174_int); // 0x2f7 TObjFunc
	ClearReplies(); // 0x2f9 TObjFunc
	var_175_int = 4591; // 0x2fb PushI
	var_176_int = 5013; // 0x2fc PushI
	var_177_int = 5012; // 0x2fd PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x2fe TObjFunc
	var_178_int = 4607; // 0x300 PushI
	var_179_int = 5015; // 0x301 PushI
	var_180_int = 5032; // 0x302 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x303 TObjFunc
	var_181_int = 4608; // 0x305 PushI
	var_182_int = 5015; // 0x306 PushI
	var_183_int = 5034; // 0x307 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x308 TObjFunc
	return 0; // 0x30a Return
	
Label_779:
	var_184_object = Obj(); var_185_object = Obj(); // 0x30b PushV
	var_184_object = var_1_object; // 0x30c MovT
	var_185_object = var_0_object; // 0x30d MovT
	func_4444(); // 0x30e Call
	var_188_object = Obj(); var_189_object = Obj(); // 0x310 PushV
	var_188_object = var_1_object; // 0x311 MovT
	var_189_object = var_0_object; // 0x312 MovT
	func_4567(); // 0x313 Call
	var_190_string = ""; // 0x315 PushV
	var_190_string = "Neutral"; // 0x316 MovS
	func_622(var_31_bool, var_190_string); // 0x317 Call
	var_191_int = 4568; // 0x319 PushI
	SetMessage(var_191_int); // 0x31a TObjFunc
	ClearReplies(); // 0x31c TObjFunc
	var_192_int = 4569; // 0x31e PushI
	var_193_int = 4989; // 0x31f PushI
	var_194_int = 4988; // 0x320 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x321 TObjFunc
	var_195_int = 4586; // 0x323 PushI
	var_196_int = 5007; // 0x324 PushI
	var_197_int = 5006; // 0x325 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x326 TObjFunc
	return 0; // 0x328 Return
	
Label_809:
	var_198_int = 5007; // 0x329 PushI
	var_199_bool = var_30_string == var_198_int; // 0x32a Eq
	if(var_199_bool == 0) goto Label_832; // 0x32b JumpB
	var_200_string = ""; // 0x32c PushV
	var_200_string = "Neutral"; // 0x32d MovS
	func_622(var_31_bool, var_200_string); // 0x32e Call
	var_201_int = 4587; // 0x330 PushI
	SetMessage(var_201_int); // 0x331 TObjFunc
	ClearReplies(); // 0x333 TObjFunc
	var_202_int = 4588; // 0x335 PushI
	var_203_int = 4993; // 0x336 PushI
	var_204_int = 5008; // 0x337 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x338 TObjFunc
	var_205_int = 4589; // 0x33a PushI
	var_206_int = 5001; // 0x33b PushI
	var_207_int = 5009; // 0x33c PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x33d TObjFunc
	return 0; // 0x33f Return
	
Label_832:
	var_208_int = 4989; // 0x340 PushI
	var_209_bool = var_30_string == var_208_int; // 0x341 Eq
	if(var_209_bool == 0) goto Label_855; // 0x342 JumpB
	var_210_string = ""; // 0x343 PushV
	var_210_string = "Neutral"; // 0x344 MovS
	func_622(var_31_bool, var_210_string); // 0x345 Call
	var_211_int = 4570; // 0x347 PushI
	SetMessage(var_211_int); // 0x348 TObjFunc
	ClearReplies(); // 0x34a TObjFunc
	var_212_int = 4571; // 0x34c PushI
	var_213_int = 4991; // 0x34d PushI
	var_214_int = 4990; // 0x34e PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x34f TObjFunc
	var_215_int = 4580; // 0x351 PushI
	var_216_int = 5001; // 0x352 PushI
	var_217_int = 5000; // 0x353 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_218_int = 5001; // 0x357 PushI
	var_219_bool = var_30_string == var_218_int; // 0x358 Eq
	if(var_219_bool == 0) goto Label_883; // 0x359 JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x35a PushV
	var_220_object = var_1_object; // 0x35b MovT
	var_221_object = var_0_object; // 0x35c MovT
	func_4525(); // 0x35d Call
	var_224_string = ""; // 0x35f PushV
	var_224_string = "Neutral"; // 0x360 MovS
	func_622(var_31_bool, var_224_string); // 0x361 Call
	var_225_int = 4581; // 0x363 PushI
	SetMessage(var_225_int); // 0x364 TObjFunc
	ClearReplies(); // 0x366 TObjFunc
	var_226_int = 4582; // 0x368 PushI
	var_227_int = 5003; // 0x369 PushI
	var_228_int = 5002; // 0x36a PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x36b TObjFunc
	var_229_int = 4585; // 0x36d PushI
	var_230_int = 4993; // 0x36e PushI
	var_231_int = 5005; // 0x36f PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x370 TObjFunc
	return 0; // 0x372 Return
	
Label_883:
	var_232_int = 5003; // 0x373 PushI
	var_233_bool = var_30_string == var_232_int; // 0x374 Eq
	if(var_233_bool == 0) goto Label_911; // 0x375 JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x376 PushV
	var_234_object = var_1_object; // 0x377 MovT
	var_235_object = var_0_object; // 0x378 MovT
	func_4346(); // 0x379 Call
	var_238_object = Obj(); var_239_object = Obj(); // 0x37b PushV
	var_238_object = var_1_object; // 0x37c MovT
	var_239_object = var_0_object; // 0x37d MovT
	func_4531(); // 0x37e Call
	var_242_string = ""; // 0x380 PushV
	var_242_string = "Neutral"; // 0x381 MovS
	func_622(var_31_bool, var_242_string); // 0x382 Call
	var_243_int = 4583; // 0x384 PushI
	SetMessage(var_243_int); // 0x385 TObjFunc
	ClearReplies(); // 0x387 TObjFunc
	var_244_int = 4584; // 0x389 PushI
	var_245_int = 4993; // 0x38a PushI
	var_246_int = 5004; // 0x38b PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x38c TObjFunc
	return 0; // 0x38e Return
	
Label_911:
	var_247_int = 4991; // 0x38f PushI
	var_248_bool = var_30_string == var_247_int; // 0x390 Eq
	if(var_248_bool == 0) goto Label_934; // 0x391 JumpB
	var_249_string = ""; // 0x392 PushV
	var_249_string = "Neutral"; // 0x393 MovS
	func_622(var_31_bool, var_249_string); // 0x394 Call
	var_250_int = 4572; // 0x396 PushI
	SetMessage(var_250_int); // 0x397 TObjFunc
	ClearReplies(); // 0x399 TObjFunc
	var_251_int = 4573; // 0x39b PushI
	var_252_int = 4993; // 0x39c PushI
	var_253_int = 4992; // 0x39d PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x39e TObjFunc
	var_254_int = 4579; // 0x3a0 PushI
	var_255_int = 4993; // 0x3a1 PushI
	var_256_int = 4998; // 0x3a2 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x3a3 TObjFunc
	return 0; // 0x3a5 Return
	
Label_934:
	var_257_int = 4993; // 0x3a6 PushI
	var_258_bool = var_30_string == var_257_int; // 0x3a7 Eq
	if(var_258_bool == 0) goto Label_957; // 0x3a8 JumpB
	var_259_string = ""; // 0x3a9 PushV
	var_259_string = "Neutral"; // 0x3aa MovS
	func_622(var_31_bool, var_259_string); // 0x3ab Call
	var_260_int = 4574; // 0x3ad PushI
	SetMessage(var_260_int); // 0x3ae TObjFunc
	ClearReplies(); // 0x3b0 TObjFunc
	var_261_int = 4575; // 0x3b2 PushI
	var_262_int = -1; // 0x3b3 PushI
	var_263_int = 4994; // 0x3b4 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x3b5 TObjFunc
	var_264_int = 4576; // 0x3b7 PushI
	var_265_int = 4996; // 0x3b8 PushI
	var_266_int = 4995; // 0x3b9 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x3ba TObjFunc
	return 0; // 0x3bc Return
	
Label_957:
	var_267_int = 4996; // 0x3bd PushI
	var_268_bool = var_30_string == var_267_int; // 0x3be Eq
	if(var_268_bool == 0) goto Label_975; // 0x3bf JumpB
	var_269_string = ""; // 0x3c0 PushV
	var_269_string = "Neutral"; // 0x3c1 MovS
	func_622(var_31_bool, var_269_string); // 0x3c2 Call
	var_270_int = 4577; // 0x3c4 PushI
	SetMessage(var_270_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_271_int = 4578; // 0x3c9 PushI
	var_272_int = -1; // 0x3ca PushI
	var_273_int = 4997; // 0x3cb PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x3cc TObjFunc
	return 0; // 0x3ce Return
	
Label_975:
	var_274_int = 5013; // 0x3cf PushI
	var_275_bool = var_30_string == var_274_int; // 0x3d0 Eq
	if(var_275_bool == 0) goto Label_998; // 0x3d1 JumpB
	var_276_string = ""; // 0x3d2 PushV
	var_276_string = "Neutral"; // 0x3d3 MovS
	func_622(var_31_bool, var_276_string); // 0x3d4 Call
	var_277_int = 4592; // 0x3d6 PushI
	SetMessage(var_277_int); // 0x3d7 TObjFunc
	ClearReplies(); // 0x3d9 TObjFunc
	var_278_int = 4593; // 0x3db PushI
	var_279_int = 5015; // 0x3dc PushI
	var_280_int = 5014; // 0x3dd PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x3de TObjFunc
	var_281_int = 4603; // 0x3e0 PushI
	var_282_int = 5027; // 0x3e1 PushI
	var_283_int = 5026; // 0x3e2 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x3e3 TObjFunc
	return 0; // 0x3e5 Return
	
Label_998:
	var_284_int = 5027; // 0x3e6 PushI
	var_285_bool = var_30_string == var_284_int; // 0x3e7 Eq
	if(var_285_bool == 0) goto Label_1021; // 0x3e8 JumpB
	var_286_string = ""; // 0x3e9 PushV
	var_286_string = "Neutral"; // 0x3ea MovS
	func_622(var_31_bool, var_286_string); // 0x3eb Call
	var_287_int = 4604; // 0x3ed PushI
	SetMessage(var_287_int); // 0x3ee TObjFunc
	ClearReplies(); // 0x3f0 TObjFunc
	var_288_int = 4605; // 0x3f2 PushI
	var_289_int = 5015; // 0x3f3 PushI
	var_290_int = 5028; // 0x3f4 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3f5 TObjFunc
	var_291_int = 4606; // 0x3f7 PushI
	var_292_int = 5015; // 0x3f8 PushI
	var_293_int = 5030; // 0x3f9 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x3fa TObjFunc
	return 0; // 0x3fc Return
	
Label_1021:
	var_294_int = 5015; // 0x3fd PushI
	var_295_bool = var_30_string == var_294_int; // 0x3fe Eq
	if(var_295_bool == 0) goto Label_1044; // 0x3ff JumpB
	var_296_string = ""; // 0x400 PushV
	var_296_string = "Neutral"; // 0x401 MovS
	func_622(var_31_bool, var_296_string); // 0x402 Call
	var_297_int = 4594; // 0x404 PushI
	SetMessage(var_297_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_298_int = 4595; // 0x409 PushI
	var_299_int = 5017; // 0x40a PushI
	var_300_int = 5016; // 0x40b PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x40c TObjFunc
	var_301_int = 4602; // 0x40e PushI
	var_302_int = 5019; // 0x40f PushI
	var_303_int = 5024; // 0x410 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x411 TObjFunc
	return 0; // 0x413 Return
	
Label_1044:
	var_304_int = 5017; // 0x414 PushI
	var_305_bool = var_30_string == var_304_int; // 0x415 Eq
	if(var_305_bool == 0) goto Label_1067; // 0x416 JumpB
	var_306_string = ""; // 0x417 PushV
	var_306_string = "Neutral"; // 0x418 MovS
	func_622(var_31_bool, var_306_string); // 0x419 Call
	var_307_int = 4596; // 0x41b PushI
	SetMessage(var_307_int); // 0x41c TObjFunc
	ClearReplies(); // 0x41e TObjFunc
	var_308_int = 4597; // 0x420 PushI
	var_309_int = 5019; // 0x421 PushI
	var_310_int = 5018; // 0x422 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x423 TObjFunc
	var_311_int = 4601; // 0x425 PushI
	var_312_int = 5019; // 0x426 PushI
	var_313_int = 5022; // 0x427 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_314_int = 5019; // 0x42b PushI
	var_315_bool = var_30_string == var_314_int; // 0x42c Eq
	if(var_315_bool == 0) goto Label_1090; // 0x42d JumpB
	var_316_string = ""; // 0x42e PushV
	var_316_string = "Neutral"; // 0x42f MovS
	func_622(var_31_bool, var_316_string); // 0x430 Call
	var_317_int = 4598; // 0x432 PushI
	SetMessage(var_317_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_318_int = 4599; // 0x437 PushI
	var_319_int = -1; // 0x438 PushI
	var_320_int = 5020; // 0x439 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x43a TObjFunc
	var_321_int = 4600; // 0x43c PushI
	var_322_int = -1; // 0x43d PushI
	var_323_int = 5021; // 0x43e PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x43f TObjFunc
	return 0; // 0x441 Return
	
Label_1090:
	var_324_int = 4923; // 0x442 PushI
	var_325_bool = var_30_string == var_324_int; // 0x443 Eq
	if(var_325_bool == 0) goto Label_1113; // 0x444 JumpB
	var_326_string = ""; // 0x445 PushV
	var_326_string = "Neutral"; // 0x446 MovS
	func_622(var_31_bool, var_326_string); // 0x447 Call
	var_327_int = 4518; // 0x449 PushI
	SetMessage(var_327_int); // 0x44a TObjFunc
	ClearReplies(); // 0x44c TObjFunc
	var_328_int = 4519; // 0x44e PushI
	var_329_int = 4907; // 0x44f PushI
	var_330_int = 4924; // 0x450 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x451 TObjFunc
	var_331_int = 4520; // 0x453 PushI
	var_332_int = 4907; // 0x454 PushI
	var_333_int = 4926; // 0x455 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x456 TObjFunc
	return 0; // 0x458 Return
	
Label_1113:
	var_334_int = 4905; // 0x459 PushI
	var_335_bool = var_30_string == var_334_int; // 0x45a Eq
	if(var_335_bool == 0) goto Label_1141; // 0x45b JumpB
	var_336_string = ""; // 0x45c PushV
	var_336_string = "Neutral"; // 0x45d MovS
	func_622(var_31_bool, var_336_string); // 0x45e Call
	var_337_int = 4502; // 0x460 PushI
	SetMessage(var_337_int); // 0x461 TObjFunc
	ClearReplies(); // 0x463 TObjFunc
	var_338_int = 4503; // 0x465 PushI
	var_339_int = 4907; // 0x466 PushI
	var_340_int = 4906; // 0x467 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x468 TObjFunc
	var_341_int = 4515; // 0x46a PushI
	var_342_int = 4923; // 0x46b PushI
	var_343_int = 4918; // 0x46c PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x46d TObjFunc
	var_344_int = 4516; // 0x46f PushI
	var_345_int = 4907; // 0x470 PushI
	var_346_int = 4920; // 0x471 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x472 TObjFunc
	return 0; // 0x474 Return
	
Label_1141:
	var_347_int = 4907; // 0x475 PushI
	var_348_bool = var_30_string == var_347_int; // 0x476 Eq
	if(var_348_bool == 0) goto Label_1159; // 0x477 JumpB
	var_349_string = ""; // 0x478 PushV
	var_349_string = "Neutral"; // 0x479 MovS
	func_622(var_31_bool, var_349_string); // 0x47a Call
	var_350_int = 4504; // 0x47c PushI
	SetMessage(var_350_int); // 0x47d TObjFunc
	ClearReplies(); // 0x47f TObjFunc
	var_351_int = 4505; // 0x481 PushI
	var_352_int = 4909; // 0x482 PushI
	var_353_int = 4908; // 0x483 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x484 TObjFunc
	return 0; // 0x486 Return
	
Label_1159:
	var_354_int = 4909; // 0x487 PushI
	var_355_bool = var_30_string == var_354_int; // 0x488 Eq
	if(var_355_bool == 0) goto Label_1182; // 0x489 JumpB
	var_356_string = ""; // 0x48a PushV
	var_356_string = "Neutral"; // 0x48b MovS
	func_622(var_31_bool, var_356_string); // 0x48c Call
	var_357_int = 4506; // 0x48e PushI
	SetMessage(var_357_int); // 0x48f TObjFunc
	ClearReplies(); // 0x491 TObjFunc
	var_358_int = 4507; // 0x493 PushI
	var_359_int = 4911; // 0x494 PushI
	var_360_int = 4910; // 0x495 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x496 TObjFunc
	var_361_int = 4514; // 0x498 PushI
	var_362_int = 4911; // 0x499 PushI
	var_363_int = 4917; // 0x49a PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x49b TObjFunc
	return 0; // 0x49d Return
	
Label_1182:
	var_364_int = 4911; // 0x49e PushI
	var_365_bool = var_30_string == var_364_int; // 0x49f Eq
	if(var_365_bool == 0) goto Label_1205; // 0x4a0 JumpB
	var_366_string = ""; // 0x4a1 PushV
	var_366_string = "Neutral"; // 0x4a2 MovS
	func_622(var_31_bool, var_366_string); // 0x4a3 Call
	var_367_int = 4508; // 0x4a5 PushI
	SetMessage(var_367_int); // 0x4a6 TObjFunc
	ClearReplies(); // 0x4a8 TObjFunc
	var_368_int = 4509; // 0x4aa PushI
	var_369_int = 4913; // 0x4ab PushI
	var_370_int = 4912; // 0x4ac PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x4ad TObjFunc
	var_371_int = 4513; // 0x4af PushI
	var_372_int = 4913; // 0x4b0 PushI
	var_373_int = 4916; // 0x4b1 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x4b2 TObjFunc
	return 0; // 0x4b4 Return
	
Label_1205:
	var_374_int = 4913; // 0x4b5 PushI
	var_375_bool = var_30_string == var_374_int; // 0x4b6 Eq
	if(var_375_bool == 0) goto Label_1253; // 0x4b7 JumpB
	var_376_object = Obj(); var_377_object = Obj(); // 0x4b8 PushV
	var_376_object = var_1_object; // 0x4b9 MovT
	var_377_object = var_0_object; // 0x4ba MovT
	func_4438(); // 0x4bb Call
	var_380_object = Obj(); var_381_object = Obj(); // 0x4bd PushV
	var_380_object = var_1_object; // 0x4be MovT
	var_381_object = var_0_object; // 0x4bf MovT
	func_4282(); // 0x4c0 Call
	var_384_object = Obj(); var_385_object = Obj(); // 0x4c2 PushV
	var_384_object = var_1_object; // 0x4c3 MovT
	var_385_object = var_0_object; // 0x4c4 MovT
	func_4585(); // 0x4c5 Call
	var_388_object = Obj(); var_389_object = Obj(); // 0x4c7 PushV
	var_388_object = var_1_object; // 0x4c8 MovT
	var_389_object = var_0_object; // 0x4c9 MovT
	func_4537(); // 0x4ca Call
	var_392_object = Obj(); var_393_object = Obj(); // 0x4cc PushV
	var_392_object = var_1_object; // 0x4cd MovT
	var_393_object = var_0_object; // 0x4ce MovT
	func_4573(); // 0x4cf Call
	var_396_string = ""; // 0x4d1 PushV
	var_396_string = "Neutral"; // 0x4d2 MovS
	func_622(var_31_bool, var_396_string); // 0x4d3 Call
	var_397_int = 4510; // 0x4d5 PushI
	SetMessage(var_397_int); // 0x4d6 TObjFunc
	ClearReplies(); // 0x4d8 TObjFunc
	var_398_int = 4512; // 0x4da PushI
	var_399_int = -1; // 0x4db PushI
	var_400_int = 4915; // 0x4dc PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x4dd TObjFunc
	var_401_int = 4497; // 0x4df PushI
	var_402_int = -1; // 0x4e0 PushI
	var_403_int = 4900; // 0x4e1 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x4e2 TObjFunc
	return 0; // 0x4e4 Return
	
Label_1253:
	var_3_string = 1; // 0x4e5 TMovB
	var_404_bool = 0; // 0x4e6 PushV
	func_4256(var_404_bool); // 0x4e7 Call
	if(var_404_bool == 0) goto Label_1261; // 0x4e9 JumpB
	lshStopAnimation(); // 0x4ea Func
	goto Label_1263; // 0x4ec Jump
	
Label_1263:
	return 0; // 0x4ef Return
	
Label_1261:
	StopAnimation(); // 0x4ed Func
	
Label_1265:
	return 0; // 0x4f1 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x5ce PushI
	if(var_32_int == 0) goto Label_2576; // 0x5cf JumpB
	func_4174(); // 0x5d1 Call
	var_34_int = 5094; // 0x5d3 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x5d4 Eq
	if(var_35_bool == 0) goto Label_1509; // 0x5d5 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x5d6 PushV
	var_36_object = var_1_object; // 0x5d7 MovT
	var_37_object = var_0_object; // 0x5d8 MovT
	func_4561(); // 0x5d9 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x5db PushV
	var_40_object = var_1_object; // 0x5dc MovT
	var_41_object = var_0_object; // 0x5dd MovT
	func_4466(); // 0x5de Call
	var_58_object = Obj(); var_59_object = Obj(); // 0x5e0 PushV
	var_58_object = var_1_object; // 0x5e1 MovT
	var_59_object = var_0_object; // 0x5e2 MovT
	func_4450(); // 0x5e3 Call
	
Label_1509:
	var_84_int = 5095; // 0x5e5 PushI
	var_85_bool = var_31_bool == var_84_int; // 0x5e6 Eq
	if(var_85_bool == 0) goto Label_1527; // 0x5e7 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x5e8 PushV
	var_86_object = var_1_object; // 0x5e9 MovT
	var_87_object = var_0_object; // 0x5ea MovT
	func_4561(); // 0x5eb Call
	var_88_object = Obj(); var_89_object = Obj(); // 0x5ed PushV
	var_88_object = var_1_object; // 0x5ee MovT
	var_89_object = var_0_object; // 0x5ef MovT
	func_4466(); // 0x5f0 Call
	var_90_object = Obj(); var_91_object = Obj(); // 0x5f2 PushV
	var_90_object = var_1_object; // 0x5f3 MovT
	var_91_object = var_0_object; // 0x5f4 MovT
	func_4450(); // 0x5f5 Call
	
Label_1527:
	var_92_int = 5096; // 0x5f7 PushI
	var_93_bool = var_31_bool == var_92_int; // 0x5f8 Eq
	if(var_93_bool == 0) goto Label_1545; // 0x5f9 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x5fa PushV
	var_94_object = var_1_object; // 0x5fb MovT
	var_95_object = var_0_object; // 0x5fc MovT
	func_4561(); // 0x5fd Call
	var_96_object = Obj(); var_97_object = Obj(); // 0x5ff PushV
	var_96_object = var_1_object; // 0x600 MovT
	var_97_object = var_0_object; // 0x601 MovT
	func_4466(); // 0x602 Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x604 PushV
	var_98_object = var_1_object; // 0x605 MovT
	var_99_object = var_0_object; // 0x606 MovT
	func_4450(); // 0x607 Call
	
Label_1545:
	var_100_int = 5051; // 0x609 PushI
	var_101_bool = var_31_bool == var_100_int; // 0x60a Eq
	if(var_101_bool == 0) goto Label_1553; // 0x60b JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x60c PushV
	var_102_object = var_1_object; // 0x60d MovT
	var_103_object = var_0_object; // 0x60e MovT
	func_4555(); // 0x60f Call
	
Label_1553:
	var_106_int = 5082; // 0x611 PushI
	var_107_bool = var_31_bool == var_106_int; // 0x612 Eq
	if(var_107_bool == 0) goto Label_1561; // 0x613 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x614 PushV
	var_108_object = var_1_object; // 0x615 MovT
	var_109_object = var_0_object; // 0x616 MovT
	func_4555(); // 0x617 Call
	
Label_1561:
	var_110_int = 5079; // 0x619 PushI
	var_111_bool = var_31_bool == var_110_int; // 0x61a Eq
	if(var_111_bool == 0) goto Label_1569; // 0x61b JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0x61c PushV
	var_112_object = var_1_object; // 0x61d MovT
	var_113_object = var_0_object; // 0x61e MovT
	func_4555(); // 0x61f Call
	
Label_1569:
	var_114_int = 5078; // 0x621 PushI
	var_115_bool = var_31_bool == var_114_int; // 0x622 Eq
	if(var_115_bool == 0) goto Label_1577; // 0x623 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x624 PushV
	var_116_object = var_1_object; // 0x625 MovT
	var_117_object = var_0_object; // 0x626 MovT
	func_4555(); // 0x627 Call
	
Label_1577:
	var_118_int = 5074; // 0x629 PushI
	var_119_bool = var_31_bool == var_118_int; // 0x62a Eq
	if(var_119_bool == 0) goto Label_1585; // 0x62b JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x62c PushV
	var_120_object = var_1_object; // 0x62d MovT
	var_121_object = var_0_object; // 0x62e MovT
	func_4555(); // 0x62f Call
	
Label_1585:
	var_122_int = 5075; // 0x631 PushI
	var_123_bool = var_31_bool == var_122_int; // 0x632 Eq
	if(var_123_bool == 0) goto Label_1593; // 0x633 JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x634 PushV
	var_124_object = var_1_object; // 0x635 MovT
	var_125_object = var_0_object; // 0x636 MovT
	func_4555(); // 0x637 Call
	
Label_1593:
	var_126_int = 5111; // 0x639 PushI
	var_127_bool = var_31_bool == var_126_int; // 0x63a Eq
	if(var_127_bool == 0) goto Label_1611; // 0x63b JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x63c PushV
	var_128_object = var_1_object; // 0x63d MovT
	var_129_object = var_0_object; // 0x63e MovT
	func_4258(); // 0x63f Call
	var_132_object = Obj(); var_133_object = Obj(); // 0x641 PushV
	var_132_object = var_1_object; // 0x642 MovT
	var_133_object = var_0_object; // 0x643 MovT
	func_4482(); // 0x644 Call
	var_147_object = Obj(); var_148_object = Obj(); // 0x646 PushV
	var_147_object = var_1_object; // 0x647 MovT
	var_148_object = var_0_object; // 0x648 MovT
	func_4513(); // 0x649 Call
	
Label_1611:
	var_151_int = 5116; // 0x64b PushI
	var_152_bool = var_31_bool == var_151_int; // 0x64c Eq
	if(var_152_bool == 0) goto Label_1629; // 0x64d JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x64e PushV
	var_153_object = var_1_object; // 0x64f MovT
	var_154_object = var_0_object; // 0x650 MovT
	func_4258(); // 0x651 Call
	var_155_object = Obj(); var_156_object = Obj(); // 0x653 PushV
	var_155_object = var_1_object; // 0x654 MovT
	var_156_object = var_0_object; // 0x655 MovT
	func_4482(); // 0x656 Call
	var_157_object = Obj(); var_158_object = Obj(); // 0x658 PushV
	var_157_object = var_1_object; // 0x659 MovT
	var_158_object = var_0_object; // 0x65a MovT
	func_4513(); // 0x65b Call
	
Label_1629:
	var_159_int = 5113; // 0x65d PushI
	var_160_bool = var_31_bool == var_159_int; // 0x65e Eq
	if(var_160_bool == 0) goto Label_1647; // 0x65f JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x660 PushV
	var_161_object = var_1_object; // 0x661 MovT
	var_162_object = var_0_object; // 0x662 MovT
	func_4258(); // 0x663 Call
	var_163_object = Obj(); var_164_object = Obj(); // 0x665 PushV
	var_163_object = var_1_object; // 0x666 MovT
	var_164_object = var_0_object; // 0x667 MovT
	func_4482(); // 0x668 Call
	var_165_object = Obj(); var_166_object = Obj(); // 0x66a PushV
	var_165_object = var_1_object; // 0x66b MovT
	var_166_object = var_0_object; // 0x66c MovT
	func_4513(); // 0x66d Call
	
Label_1647:
	var_167_int = 5320; // 0x66f PushI
	var_168_bool = var_31_bool == var_167_int; // 0x670 Eq
	if(var_168_bool == 0) goto Label_1655; // 0x671 JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x672 PushV
	var_169_object = var_1_object; // 0x673 MovT
	var_170_object = var_0_object; // 0x674 MovT
	func_4543(); // 0x675 Call
	
Label_1655:
	var_173_int = 6967; // 0x677 PushI
	var_174_bool = var_31_bool == var_173_int; // 0x678 Eq
	if(var_174_bool == 0) goto Label_1663; // 0x679 JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x67a PushV
	var_175_object = var_1_object; // 0x67b MovT
	var_176_object = var_0_object; // 0x67c MovT
	func_4288(); // 0x67d Call
	
Label_1663:
	var_179_int = 6968; // 0x67f PushI
	var_180_bool = var_31_bool == var_179_int; // 0x680 Eq
	if(var_180_bool == 0) goto Label_1671; // 0x681 JumpB
	var_181_object = Obj(); var_182_object = Obj(); // 0x682 PushV
	var_181_object = var_1_object; // 0x683 MovT
	var_182_object = var_0_object; // 0x684 MovT
	func_4288(); // 0x685 Call
	
Label_1671:
	var_183_int = 6977; // 0x687 PushI
	var_184_bool = var_31_bool == var_183_int; // 0x688 Eq
	if(var_184_bool == 0) goto Label_1679; // 0x689 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0x68a PushV
	var_185_object = var_1_object; // 0x68b MovT
	var_186_object = var_0_object; // 0x68c MovT
	func_4294(); // 0x68d Call
	
Label_1679:
	var_189_int = 5040; // 0x68f PushI
	var_190_bool = var_30_string == var_189_int; // 0x690 Eq
	if(var_190_bool == 0) goto Label_1784; // 0x691 JumpB
	var_191_string = ""; // 0x692 PushV
	var_191_string = "Neutral"; // 0x693 MovS
	func_1469(var_31_bool, var_191_string); // 0x694 Call
	var_206_int = 4610; // 0x696 PushI
	SetMessage(var_206_int); // 0x697 TObjFunc
	ClearReplies(); // 0x699 TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x69b PushV
	var_208_object = var_1_object; // 0x69c MovT
	func_4837(var_208_object); // 0x69d Call
	if(var_207_bool == 0) goto Label_1701; // 0x69f JumpB
	var_215_int = 4612; // 0x6a0 PushI
	var_216_int = 5058; // 0x6a1 PushI
	var_217_int = 5042; // 0x6a2 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x6a3 TObjFunc
	
Label_1701:
	var_218_bool = 0; var_219_object = Obj(); // 0x6a5 PushV
	var_219_object = var_1_object; // 0x6a6 MovT
	func_4813(var_219_object); // 0x6a7 Call
	if(var_218_bool == 0) goto Label_1711; // 0x6a9 JumpB
	var_224_int = 4611; // 0x6aa PushI
	var_225_int = 5056; // 0x6ab PushI
	var_226_int = 5041; // 0x6ac PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x6ad TObjFunc
	
Label_1711:
	var_227_bool = 0; var_228_object = Obj(); // 0x6af PushV
	var_228_object = var_1_object; // 0x6b0 MovT
	func_4873(var_228_object); // 0x6b1 Call
	if(var_227_bool == 0) goto Label_1721; // 0x6b3 JumpB
	var_233_int = 4613; // 0x6b4 PushI
	var_234_int = 5097; // 0x6b5 PushI
	var_235_int = 5043; // 0x6b6 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x6b7 TObjFunc
	
Label_1721:
	var_236_bool = 0; // 0x6b9 PushV
	var_236_bool = 0; // 0x6ba MovB
	var_237_bool = 0; var_238_object = Obj(); // 0x6bb PushV
	var_238_object = var_1_object; // 0x6bc MovT
	func_4825(var_238_object); // 0x6bd Call
	if(var_237_bool == 0) goto Label_1734; // 0x6bf JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x6c0 PushV
	var_244_object = var_1_object; // 0x6c1 MovT
	func_4681(var_244_object); // 0x6c2 Call
	if(var_243_bool == 0) goto Label_1734; // 0x6c4 JumpB
	var_236_bool = 1; // 0x6c5 MovB
	
Label_1734:
	if(var_236_bool == 0) goto Label_1740; // 0x6c6 JumpB
	var_249_int = 4846; // 0x6c7 PushI
	var_250_int = 5319; // 0x6c8 PushI
	var_251_int = 5318; // 0x6c9 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x6ca TObjFunc
	
Label_1740:
	var_252_bool = 0; // 0x6cc PushV
	var_252_bool = 0; // 0x6cd MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x6ce PushV
	var_254_object = var_1_object; // 0x6cf MovT
	func_4897(var_254_object); // 0x6d0 Call
	if(var_253_bool == 0) goto Label_1753; // 0x6d2 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x6d3 PushV
	var_260_object = var_1_object; // 0x6d4 MovT
	func_4693(var_260_object); // 0x6d5 Call
	if(var_259_bool == 0) goto Label_1753; // 0x6d7 JumpB
	var_252_bool = 1; // 0x6d8 MovB
	
Label_1753:
	if(var_252_bool == 0) goto Label_1759; // 0x6d9 JumpB
	var_265_int = 6299; // 0x6da PushI
	var_266_int = 6952; // 0x6db PushI
	var_267_int = 6951; // 0x6dc PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x6dd TObjFunc
	
Label_1759:
	var_268_bool = 0; // 0x6df PushV
	var_268_bool = 0; // 0x6e0 MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x6e1 PushV
	var_270_object = var_1_object; // 0x6e2 MovT
	func_4705(var_270_object); // 0x6e3 Call
	if(var_269_bool == 0) goto Label_1772; // 0x6e5 JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x6e6 PushV
	var_276_object = var_1_object; // 0x6e7 MovT
	func_4945(var_276_object); // 0x6e8 Call
	if(var_275_bool == 0) goto Label_1772; // 0x6ea JumpB
	var_268_bool = 1; // 0x6eb MovB
	
Label_1772:
	if(var_268_bool == 0) goto Label_1778; // 0x6ec JumpB
	var_281_int = 6314; // 0x6ed PushI
	var_282_int = 6970; // 0x6ee PushI
	var_283_int = 6969; // 0x6ef PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x6f0 TObjFunc
	
Label_1778:
	var_284_int = 4614; // 0x6f2 PushI
	var_285_int = -1; // 0x6f3 PushI
	var_286_int = 5044; // 0x6f4 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x6f5 TObjFunc
	return 0; // 0x6f7 Return
	
Label_1784:
	var_287_int = 6970; // 0x6f8 PushI
	var_288_bool = var_30_string == var_287_int; // 0x6f9 Eq
	if(var_288_bool == 0) goto Label_1802; // 0x6fa JumpB
	var_289_string = ""; // 0x6fb PushV
	var_289_string = "Neutral"; // 0x6fc MovS
	func_1469(var_31_bool, var_289_string); // 0x6fd Call
	var_290_int = 6315; // 0x6ff PushI
	SetMessage(var_290_int); // 0x700 TObjFunc
	ClearReplies(); // 0x702 TObjFunc
	var_291_int = 6316; // 0x704 PushI
	var_292_int = 6972; // 0x705 PushI
	var_293_int = 6971; // 0x706 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x707 TObjFunc
	return 0; // 0x709 Return
	
Label_1802:
	var_294_int = 6972; // 0x70a PushI
	var_295_bool = var_30_string == var_294_int; // 0x70b Eq
	if(var_295_bool == 0) goto Label_1825; // 0x70c JumpB
	var_296_object = Obj(); var_297_object = Obj(); // 0x70d PushV
	var_296_object = var_1_object; // 0x70e MovT
	var_297_object = var_0_object; // 0x70f MovT
	func_4663(); // 0x710 Call
	var_300_string = ""; // 0x712 PushV
	var_300_string = "Neutral"; // 0x713 MovS
	func_1469(var_31_bool, var_300_string); // 0x714 Call
	var_301_int = 6317; // 0x716 PushI
	SetMessage(var_301_int); // 0x717 TObjFunc
	ClearReplies(); // 0x719 TObjFunc
	var_302_int = 6318; // 0x71b PushI
	var_303_int = 6974; // 0x71c PushI
	var_304_int = 6973; // 0x71d PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x71e TObjFunc
	return 0; // 0x720 Return
	
Label_1825:
	var_305_int = 6974; // 0x721 PushI
	var_306_bool = var_30_string == var_305_int; // 0x722 Eq
	if(var_306_bool == 0) goto Label_1843; // 0x723 JumpB
	var_307_string = ""; // 0x724 PushV
	var_307_string = "Neutral"; // 0x725 MovS
	func_1469(var_31_bool, var_307_string); // 0x726 Call
	var_308_int = 6319; // 0x728 PushI
	SetMessage(var_308_int); // 0x729 TObjFunc
	ClearReplies(); // 0x72b TObjFunc
	var_309_int = 6320; // 0x72d PushI
	var_310_int = 6976; // 0x72e PushI
	var_311_int = 6975; // 0x72f PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x730 TObjFunc
	return 0; // 0x732 Return
	
Label_1843:
	var_312_int = 6976; // 0x733 PushI
	var_313_bool = var_30_string == var_312_int; // 0x734 Eq
	if(var_313_bool == 0) goto Label_1861; // 0x735 JumpB
	var_314_string = ""; // 0x736 PushV
	var_314_string = "Neutral"; // 0x737 MovS
	func_1469(var_31_bool, var_314_string); // 0x738 Call
	var_315_int = 6321; // 0x73a PushI
	SetMessage(var_315_int); // 0x73b TObjFunc
	ClearReplies(); // 0x73d TObjFunc
	var_316_int = 6322; // 0x73f PushI
	var_317_int = 5040; // 0x740 PushI
	var_318_int = 6977; // 0x741 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x742 TObjFunc
	return 0; // 0x744 Return
	
Label_1861:
	var_319_int = 6952; // 0x745 PushI
	var_320_bool = var_30_string == var_319_int; // 0x746 Eq
	if(var_320_bool == 0) goto Label_1889; // 0x747 JumpB
	var_321_string = ""; // 0x748 PushV
	var_321_string = "Neutral"; // 0x749 MovS
	func_1469(var_31_bool, var_321_string); // 0x74a Call
	var_322_int = 6300; // 0x74c PushI
	SetMessage(var_322_int); // 0x74d TObjFunc
	ClearReplies(); // 0x74f TObjFunc
	var_323_int = 6301; // 0x751 PushI
	var_324_int = 6956; // 0x752 PushI
	var_325_int = 6953; // 0x753 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x754 TObjFunc
	var_326_int = 6302; // 0x756 PushI
	var_327_int = 6956; // 0x757 PushI
	var_328_int = 6954; // 0x758 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x759 TObjFunc
	var_329_int = 6303; // 0x75b PushI
	var_330_int = 6956; // 0x75c PushI
	var_331_int = 6955; // 0x75d PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x75e TObjFunc
	return 0; // 0x760 Return
	
Label_1889:
	var_332_int = 6956; // 0x761 PushI
	var_333_bool = var_30_string == var_332_int; // 0x762 Eq
	if(var_333_bool == 0) goto Label_1912; // 0x763 JumpB
	var_334_string = ""; // 0x764 PushV
	var_334_string = "Neutral"; // 0x765 MovS
	func_1469(var_31_bool, var_334_string); // 0x766 Call
	var_335_int = 6304; // 0x768 PushI
	SetMessage(var_335_int); // 0x769 TObjFunc
	ClearReplies(); // 0x76b TObjFunc
	var_336_int = 6305; // 0x76d PushI
	var_337_int = 6963; // 0x76e PushI
	var_338_int = 6959; // 0x76f PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x770 TObjFunc
	var_339_int = 6306; // 0x772 PushI
	var_340_int = 6961; // 0x773 PushI
	var_341_int = 6960; // 0x774 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x775 TObjFunc
	return 0; // 0x777 Return
	
Label_1912:
	var_342_int = 6961; // 0x778 PushI
	var_343_bool = var_30_string == var_342_int; // 0x779 Eq
	if(var_343_bool == 0) goto Label_1930; // 0x77a JumpB
	var_344_string = ""; // 0x77b PushV
	var_344_string = "Neutral"; // 0x77c MovS
	func_1469(var_31_bool, var_344_string); // 0x77d Call
	var_345_int = 6307; // 0x77f PushI
	SetMessage(var_345_int); // 0x780 TObjFunc
	ClearReplies(); // 0x782 TObjFunc
	var_346_int = 6308; // 0x784 PushI
	var_347_int = 6963; // 0x785 PushI
	var_348_int = 6962; // 0x786 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x787 TObjFunc
	return 0; // 0x789 Return
	
Label_1930:
	var_349_int = 6963; // 0x78a PushI
	var_350_bool = var_30_string == var_349_int; // 0x78b Eq
	if(var_350_bool == 0) goto Label_1948; // 0x78c JumpB
	var_351_string = ""; // 0x78d PushV
	var_351_string = "Neutral"; // 0x78e MovS
	func_1469(var_31_bool, var_351_string); // 0x78f Call
	var_352_int = 6309; // 0x791 PushI
	SetMessage(var_352_int); // 0x792 TObjFunc
	ClearReplies(); // 0x794 TObjFunc
	var_353_int = 6310; // 0x796 PushI
	var_354_int = 6965; // 0x797 PushI
	var_355_int = 6964; // 0x798 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x799 TObjFunc
	return 0; // 0x79b Return
	
Label_1948:
	var_356_int = 6965; // 0x79c PushI
	var_357_bool = var_30_string == var_356_int; // 0x79d Eq
	if(var_357_bool == 0) goto Label_1971; // 0x79e JumpB
	var_358_string = ""; // 0x79f PushV
	var_358_string = "Neutral"; // 0x7a0 MovS
	func_1469(var_31_bool, var_358_string); // 0x7a1 Call
	var_359_int = 6311; // 0x7a3 PushI
	SetMessage(var_359_int); // 0x7a4 TObjFunc
	ClearReplies(); // 0x7a6 TObjFunc
	var_360_int = 6312; // 0x7a8 PushI
	var_361_int = 5040; // 0x7a9 PushI
	var_362_int = 6967; // 0x7aa PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x7ab TObjFunc
	var_363_int = 6313; // 0x7ad PushI
	var_364_int = 5040; // 0x7ae PushI
	var_365_int = 6968; // 0x7af PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x7b0 TObjFunc
	return 0; // 0x7b2 Return
	
Label_1971:
	var_366_int = 5319; // 0x7b3 PushI
	var_367_bool = var_30_string == var_366_int; // 0x7b4 Eq
	if(var_367_bool == 0) goto Label_1989; // 0x7b5 JumpB
	var_368_string = ""; // 0x7b6 PushV
	var_368_string = "Neutral"; // 0x7b7 MovS
	func_1469(var_31_bool, var_368_string); // 0x7b8 Call
	var_369_int = 4847; // 0x7ba PushI
	SetMessage(var_369_int); // 0x7bb TObjFunc
	ClearReplies(); // 0x7bd TObjFunc
	var_370_int = 6295; // 0x7bf PushI
	var_371_int = 6948; // 0x7c0 PushI
	var_372_int = 6947; // 0x7c1 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x7c2 TObjFunc
	return 0; // 0x7c4 Return
	
Label_1989:
	var_373_int = 6948; // 0x7c5 PushI
	var_374_bool = var_30_string == var_373_int; // 0x7c6 Eq
	if(var_374_bool == 0) goto Label_2012; // 0x7c7 JumpB
	var_375_string = ""; // 0x7c8 PushV
	var_375_string = "Neutral"; // 0x7c9 MovS
	func_1469(var_31_bool, var_375_string); // 0x7ca Call
	var_376_int = 6296; // 0x7cc PushI
	SetMessage(var_376_int); // 0x7cd TObjFunc
	ClearReplies(); // 0x7cf TObjFunc
	var_377_int = 6297; // 0x7d1 PushI
	var_378_int = 6950; // 0x7d2 PushI
	var_379_int = 6949; // 0x7d3 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x7d4 TObjFunc
	var_380_int = 6323; // 0x7d6 PushI
	var_381_int = 6950; // 0x7d7 PushI
	var_382_int = 6978; // 0x7d8 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x7d9 TObjFunc
	return 0; // 0x7db Return
	
Label_2012:
	var_383_int = 6950; // 0x7dc PushI
	var_384_bool = var_30_string == var_383_int; // 0x7dd Eq
	if(var_384_bool == 0) goto Label_2030; // 0x7de JumpB
	var_385_string = ""; // 0x7df PushV
	var_385_string = "Neutral"; // 0x7e0 MovS
	func_1469(var_31_bool, var_385_string); // 0x7e1 Call
	var_386_int = 6298; // 0x7e3 PushI
	SetMessage(var_386_int); // 0x7e4 TObjFunc
	ClearReplies(); // 0x7e6 TObjFunc
	var_387_int = 4848; // 0x7e8 PushI
	var_388_int = 5040; // 0x7e9 PushI
	var_389_int = 5320; // 0x7ea PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x7eb TObjFunc
	return 0; // 0x7ed Return
	
Label_2030:
	var_390_int = 5097; // 0x7ee PushI
	var_391_bool = var_30_string == var_390_int; // 0x7ef Eq
	if(var_391_bool == 0) goto Label_2053; // 0x7f0 JumpB
	var_392_string = ""; // 0x7f1 PushV
	var_392_string = "Neutral"; // 0x7f2 MovS
	func_1469(var_31_bool, var_392_string); // 0x7f3 Call
	var_393_int = 4661; // 0x7f5 PushI
	SetMessage(var_393_int); // 0x7f6 TObjFunc
	ClearReplies(); // 0x7f8 TObjFunc
	var_394_int = 4662; // 0x7fa PushI
	var_395_int = 5100; // 0x7fb PushI
	var_396_int = 5098; // 0x7fc PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x7fd TObjFunc
	var_397_int = 4663; // 0x7ff PushI
	var_398_int = 5100; // 0x800 PushI
	var_399_int = 5099; // 0x801 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x802 TObjFunc
	return 0; // 0x804 Return
	
Label_2053:
	var_400_int = 5100; // 0x805 PushI
	var_401_bool = var_30_string == var_400_int; // 0x806 Eq
	if(var_401_bool == 0) goto Label_2076; // 0x807 JumpB
	var_402_string = ""; // 0x808 PushV
	var_402_string = "Neutral"; // 0x809 MovS
	func_1469(var_31_bool, var_402_string); // 0x80a Call
	var_403_int = 4664; // 0x80c PushI
	SetMessage(var_403_int); // 0x80d TObjFunc
	ClearReplies(); // 0x80f TObjFunc
	var_404_int = 4665; // 0x811 PushI
	var_405_int = 5103; // 0x812 PushI
	var_406_int = 5102; // 0x813 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x814 TObjFunc
	var_407_int = 4667; // 0x816 PushI
	var_408_int = 5105; // 0x817 PushI
	var_409_int = 5104; // 0x818 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x819 TObjFunc
	return 0; // 0x81b Return
	
Label_2076:
	var_410_int = 5105; // 0x81c PushI
	var_411_bool = var_30_string == var_410_int; // 0x81d Eq
	if(var_411_bool == 0) goto Label_2094; // 0x81e JumpB
	var_412_string = ""; // 0x81f PushV
	var_412_string = "Neutral"; // 0x820 MovS
	func_1469(var_31_bool, var_412_string); // 0x821 Call
	var_413_int = 4668; // 0x823 PushI
	SetMessage(var_413_int); // 0x824 TObjFunc
	ClearReplies(); // 0x826 TObjFunc
	var_414_int = 4669; // 0x828 PushI
	var_415_int = 5103; // 0x829 PushI
	var_416_int = 5106; // 0x82a PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x82b TObjFunc
	return 0; // 0x82d Return
	
Label_2094:
	var_417_int = 5103; // 0x82e PushI
	var_418_bool = var_30_string == var_417_int; // 0x82f Eq
	if(var_418_bool == 0) goto Label_2117; // 0x830 JumpB
	var_419_string = ""; // 0x831 PushV
	var_419_string = "Neutral"; // 0x832 MovS
	func_1469(var_31_bool, var_419_string); // 0x833 Call
	var_420_int = 4666; // 0x835 PushI
	SetMessage(var_420_int); // 0x836 TObjFunc
	ClearReplies(); // 0x838 TObjFunc
	var_421_int = 4670; // 0x83a PushI
	var_422_int = 5108; // 0x83b PushI
	var_423_int = 5107; // 0x83c PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x83d TObjFunc
	var_424_int = 4675; // 0x83f PushI
	var_425_int = 5040; // 0x840 PushI
	var_426_int = 5113; // 0x841 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x842 TObjFunc
	return 0; // 0x844 Return
	
Label_2117:
	var_427_int = 5108; // 0x845 PushI
	var_428_bool = var_30_string == var_427_int; // 0x846 Eq
	if(var_428_bool == 0) goto Label_2150; // 0x847 JumpB
	var_429_object = Obj(); var_430_object = Obj(); // 0x848 PushV
	var_429_object = var_1_object; // 0x849 MovT
	var_430_object = var_0_object; // 0x84a MovT
	func_4264(); // 0x84b Call
	var_433_object = Obj(); var_434_object = Obj(); // 0x84d PushV
	var_433_object = var_1_object; // 0x84e MovT
	var_434_object = var_0_object; // 0x84f MovT
	func_4398(); // 0x850 Call
	var_437_string = ""; // 0x852 PushV
	var_437_string = "Neutral"; // 0x853 MovS
	func_1469(var_31_bool, var_437_string); // 0x854 Call
	var_438_int = 4671; // 0x856 PushI
	SetMessage(var_438_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_439_int = 4672; // 0x85b PushI
	var_440_int = 5110; // 0x85c PushI
	var_441_int = 5109; // 0x85d PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x85e TObjFunc
	var_442_int = 4676; // 0x860 PushI
	var_443_int = 5110; // 0x861 PushI
	var_444_int = 5114; // 0x862 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x863 TObjFunc
	return 0; // 0x865 Return
	
Label_2150:
	var_445_int = 5110; // 0x866 PushI
	var_446_bool = var_30_string == var_445_int; // 0x867 Eq
	if(var_446_bool == 0) goto Label_2178; // 0x868 JumpB
	var_447_object = Obj(); var_448_object = Obj(); // 0x869 PushV
	var_447_object = var_1_object; // 0x86a MovT
	var_448_object = var_0_object; // 0x86b MovT
	func_4270(); // 0x86c Call
	var_451_string = ""; // 0x86e PushV
	var_451_string = "Neutral"; // 0x86f MovS
	func_1469(var_31_bool, var_451_string); // 0x870 Call
	var_452_int = 4673; // 0x872 PushI
	SetMessage(var_452_int); // 0x873 TObjFunc
	ClearReplies(); // 0x875 TObjFunc
	var_453_int = 4674; // 0x877 PushI
	var_454_int = 5040; // 0x878 PushI
	var_455_int = 5111; // 0x879 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x87a TObjFunc
	var_456_int = 4677; // 0x87c PushI
	var_457_int = 5040; // 0x87d PushI
	var_458_int = 5116; // 0x87e PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x87f TObjFunc
	return 0; // 0x881 Return
	
Label_2178:
	var_459_int = 5056; // 0x882 PushI
	var_460_bool = var_30_string == var_459_int; // 0x883 Eq
	if(var_460_bool == 0) goto Label_2196; // 0x884 JumpB
	var_461_string = ""; // 0x885 PushV
	var_461_string = "Neutral"; // 0x886 MovS
	func_1469(var_31_bool, var_461_string); // 0x887 Call
	var_462_int = 4624; // 0x889 PushI
	SetMessage(var_462_int); // 0x88a TObjFunc
	ClearReplies(); // 0x88c TObjFunc
	var_463_int = 7659; // 0x88e PushI
	var_464_int = 8453; // 0x88f PushI
	var_465_int = 8452; // 0x890 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x891 TObjFunc
	return 0; // 0x893 Return
	
Label_2196:
	var_466_int = 8453; // 0x894 PushI
	var_467_bool = var_30_string == var_466_int; // 0x895 Eq
	if(var_467_bool == 0) goto Label_2219; // 0x896 JumpB
	var_468_string = ""; // 0x897 PushV
	var_468_string = "Neutral"; // 0x898 MovS
	func_1469(var_31_bool, var_468_string); // 0x899 Call
	var_469_int = 7660; // 0x89b PushI
	SetMessage(var_469_int); // 0x89c TObjFunc
	ClearReplies(); // 0x89e TObjFunc
	var_470_int = 7661; // 0x8a0 PushI
	var_471_int = 8458; // 0x8a1 PushI
	var_472_int = 8454; // 0x8a2 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x8a3 TObjFunc
	var_473_int = 7662; // 0x8a5 PushI
	var_474_int = 8458; // 0x8a6 PushI
	var_475_int = 8455; // 0x8a7 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x8a8 TObjFunc
	return 0; // 0x8aa Return
	
Label_2219:
	var_476_int = 8458; // 0x8ab PushI
	var_477_bool = var_30_string == var_476_int; // 0x8ac Eq
	if(var_477_bool == 0) goto Label_2237; // 0x8ad JumpB
	var_478_string = ""; // 0x8ae PushV
	var_478_string = "Neutral"; // 0x8af MovS
	func_1469(var_31_bool, var_478_string); // 0x8b0 Call
	var_479_int = 7664; // 0x8b2 PushI
	SetMessage(var_479_int); // 0x8b3 TObjFunc
	ClearReplies(); // 0x8b5 TObjFunc
	var_480_int = 7665; // 0x8b7 PushI
	var_481_int = 8456; // 0x8b8 PushI
	var_482_int = 8459; // 0x8b9 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x8ba TObjFunc
	return 0; // 0x8bc Return
	
Label_2237:
	var_483_int = 8456; // 0x8bd PushI
	var_484_bool = var_30_string == var_483_int; // 0x8be Eq
	if(var_484_bool == 0) goto Label_2260; // 0x8bf JumpB
	var_485_string = ""; // 0x8c0 PushV
	var_485_string = "Neutral"; // 0x8c1 MovS
	func_1469(var_31_bool, var_485_string); // 0x8c2 Call
	var_486_int = 7663; // 0x8c4 PushI
	SetMessage(var_486_int); // 0x8c5 TObjFunc
	ClearReplies(); // 0x8c7 TObjFunc
	var_487_int = 4625; // 0x8c9 PushI
	var_488_int = 5045; // 0x8ca PushI
	var_489_int = 5057; // 0x8cb PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x8cc TObjFunc
	var_490_int = 4635; // 0x8ce PushI
	var_491_int = 5069; // 0x8cf PushI
	var_492_int = 5068; // 0x8d0 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x8d1 TObjFunc
	return 0; // 0x8d3 Return
	
Label_2260:
	var_493_int = 5069; // 0x8d4 PushI
	var_494_bool = var_30_string == var_493_int; // 0x8d5 Eq
	if(var_494_bool == 0) goto Label_2283; // 0x8d6 JumpB
	var_495_string = ""; // 0x8d7 PushV
	var_495_string = "Neutral"; // 0x8d8 MovS
	func_1469(var_31_bool, var_495_string); // 0x8d9 Call
	var_496_int = 4636; // 0x8db PushI
	SetMessage(var_496_int); // 0x8dc TObjFunc
	ClearReplies(); // 0x8de TObjFunc
	var_497_int = 4637; // 0x8e0 PushI
	var_498_int = 5072; // 0x8e1 PushI
	var_499_int = 5070; // 0x8e2 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x8e3 TObjFunc
	var_500_int = 4638; // 0x8e5 PushI
	var_501_int = 5072; // 0x8e6 PushI
	var_502_int = 5071; // 0x8e7 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x8e8 TObjFunc
	return 0; // 0x8ea Return
	
Label_2283:
	var_503_int = 5072; // 0x8eb PushI
	var_504_bool = var_30_string == var_503_int; // 0x8ec Eq
	if(var_504_bool == 0) goto Label_2311; // 0x8ed JumpB
	var_505_string = ""; // 0x8ee PushV
	var_505_string = "Neutral"; // 0x8ef MovS
	func_1469(var_31_bool, var_505_string); // 0x8f0 Call
	var_506_int = 4639; // 0x8f2 PushI
	SetMessage(var_506_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_507_int = 4642; // 0x8f7 PushI
	var_508_int = 5077; // 0x8f8 PushI
	var_509_int = 5076; // 0x8f9 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x8fa TObjFunc
	var_510_int = 4640; // 0x8fc PushI
	var_511_int = 5040; // 0x8fd PushI
	var_512_int = 5074; // 0x8fe PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x8ff TObjFunc
	var_513_int = 4641; // 0x901 PushI
	var_514_int = 5040; // 0x902 PushI
	var_515_int = 5075; // 0x903 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x904 TObjFunc
	return 0; // 0x906 Return
	
Label_2311:
	var_516_int = 5077; // 0x907 PushI
	var_517_bool = var_30_string == var_516_int; // 0x908 Eq
	if(var_517_bool == 0) goto Label_2344; // 0x909 JumpB
	var_518_object = Obj(); var_519_object = Obj(); // 0x90a PushV
	var_518_object = var_1_object; // 0x90b MovT
	var_519_object = var_0_object; // 0x90c MovT
	func_4657(); // 0x90d Call
	var_522_string = ""; // 0x90f PushV
	var_522_string = "Neutral"; // 0x910 MovS
	func_1469(var_31_bool, var_522_string); // 0x911 Call
	var_523_int = 4643; // 0x913 PushI
	SetMessage(var_523_int); // 0x914 TObjFunc
	ClearReplies(); // 0x916 TObjFunc
	var_524_int = 4646; // 0x918 PushI
	var_525_int = 5081; // 0x919 PushI
	var_526_int = 5080; // 0x91a PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x91b TObjFunc
	var_527_int = 4645; // 0x91d PushI
	var_528_int = 5040; // 0x91e PushI
	var_529_int = 5079; // 0x91f PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x920 TObjFunc
	var_530_int = 4644; // 0x922 PushI
	var_531_int = 5040; // 0x923 PushI
	var_532_int = 5078; // 0x924 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x925 TObjFunc
	return 0; // 0x927 Return
	
Label_2344:
	var_533_int = 5081; // 0x928 PushI
	var_534_bool = var_30_string == var_533_int; // 0x929 Eq
	if(var_534_bool == 0) goto Label_2362; // 0x92a JumpB
	var_535_string = ""; // 0x92b PushV
	var_535_string = "Neutral"; // 0x92c MovS
	func_1469(var_31_bool, var_535_string); // 0x92d Call
	var_536_int = 4647; // 0x92f PushI
	SetMessage(var_536_int); // 0x930 TObjFunc
	ClearReplies(); // 0x932 TObjFunc
	var_537_int = 4648; // 0x934 PushI
	var_538_int = 5040; // 0x935 PushI
	var_539_int = 5082; // 0x936 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x937 TObjFunc
	return 0; // 0x939 Return
	
Label_2362:
	var_540_int = 5045; // 0x93a PushI
	var_541_bool = var_30_string == var_540_int; // 0x93b Eq
	if(var_541_bool == 0) goto Label_2385; // 0x93c JumpB
	var_542_string = ""; // 0x93d PushV
	var_542_string = "Neutral"; // 0x93e MovS
	func_1469(var_31_bool, var_542_string); // 0x93f Call
	var_543_int = 4615; // 0x941 PushI
	SetMessage(var_543_int); // 0x942 TObjFunc
	ClearReplies(); // 0x944 TObjFunc
	var_544_int = 4616; // 0x946 PushI
	var_545_int = 5047; // 0x947 PushI
	var_546_int = 5046; // 0x948 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x949 TObjFunc
	var_547_int = 4623; // 0x94b PushI
	var_548_int = 5047; // 0x94c PushI
	var_549_int = 5054; // 0x94d PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x94e TObjFunc
	return 0; // 0x950 Return
	
Label_2385:
	var_550_int = 5047; // 0x951 PushI
	var_551_bool = var_30_string == var_550_int; // 0x952 Eq
	if(var_551_bool == 0) goto Label_2408; // 0x953 JumpB
	var_552_string = ""; // 0x954 PushV
	var_552_string = "Neutral"; // 0x955 MovS
	func_1469(var_31_bool, var_552_string); // 0x956 Call
	var_553_int = 4617; // 0x958 PushI
	SetMessage(var_553_int); // 0x959 TObjFunc
	ClearReplies(); // 0x95b TObjFunc
	var_554_int = 4618; // 0x95d PushI
	var_555_int = 5049; // 0x95e PushI
	var_556_int = 5048; // 0x95f PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x960 TObjFunc
	var_557_int = 4622; // 0x962 PushI
	var_558_int = 5065; // 0x963 PushI
	var_559_int = 5052; // 0x964 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x965 TObjFunc
	return 0; // 0x967 Return
	
Label_2408:
	var_560_int = 5065; // 0x968 PushI
	var_561_bool = var_30_string == var_560_int; // 0x969 Eq
	if(var_561_bool == 0) goto Label_2426; // 0x96a JumpB
	var_562_string = ""; // 0x96b PushV
	var_562_string = "Neutral"; // 0x96c MovS
	func_1469(var_31_bool, var_562_string); // 0x96d Call
	var_563_int = 4633; // 0x96f PushI
	SetMessage(var_563_int); // 0x970 TObjFunc
	ClearReplies(); // 0x972 TObjFunc
	var_564_int = 4634; // 0x974 PushI
	var_565_int = 5049; // 0x975 PushI
	var_566_int = 5066; // 0x976 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x977 TObjFunc
	return 0; // 0x979 Return
	
Label_2426:
	var_567_int = 5049; // 0x97a PushI
	var_568_bool = var_30_string == var_567_int; // 0x97b Eq
	if(var_568_bool == 0) goto Label_2444; // 0x97c JumpB
	var_569_string = ""; // 0x97d PushV
	var_569_string = "Neutral"; // 0x97e MovS
	func_1469(var_31_bool, var_569_string); // 0x97f Call
	var_570_int = 4619; // 0x981 PushI
	SetMessage(var_570_int); // 0x982 TObjFunc
	ClearReplies(); // 0x984 TObjFunc
	var_571_int = 4621; // 0x986 PushI
	var_572_int = 5040; // 0x987 PushI
	var_573_int = 5051; // 0x988 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x989 TObjFunc
	return 0; // 0x98b Return
	
Label_2444:
	var_574_int = 5058; // 0x98c PushI
	var_575_bool = var_30_string == var_574_int; // 0x98d Eq
	if(var_575_bool == 0) goto Label_2472; // 0x98e JumpB
	var_576_object = Obj(); var_577_object = Obj(); // 0x98f PushV
	var_576_object = var_1_object; // 0x990 MovT
	var_577_object = var_0_object; // 0x991 MovT
	func_4591(); // 0x992 Call
	var_580_string = ""; // 0x994 PushV
	var_580_string = "Neutral"; // 0x995 MovS
	func_1469(var_31_bool, var_580_string); // 0x996 Call
	var_581_int = 4626; // 0x998 PushI
	SetMessage(var_581_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_582_int = 4627; // 0x99d PushI
	var_583_int = 5086; // 0x99e PushI
	var_584_int = 5059; // 0x99f PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x9a0 TObjFunc
	var_585_int = 4628; // 0x9a2 PushI
	var_586_int = 5061; // 0x9a3 PushI
	var_587_int = 5060; // 0x9a4 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0x9a5 TObjFunc
	return 0; // 0x9a7 Return
	
Label_2472:
	var_588_int = 5061; // 0x9a8 PushI
	var_589_bool = var_30_string == var_588_int; // 0x9a9 Eq
	if(var_589_bool == 0) goto Label_2490; // 0x9aa JumpB
	var_590_string = ""; // 0x9ab PushV
	var_590_string = "Neutral"; // 0x9ac MovS
	func_1469(var_31_bool, var_590_string); // 0x9ad Call
	var_591_int = 4629; // 0x9af PushI
	SetMessage(var_591_int); // 0x9b0 TObjFunc
	ClearReplies(); // 0x9b2 TObjFunc
	var_592_int = 4630; // 0x9b4 PushI
	var_593_int = 5086; // 0x9b5 PushI
	var_594_int = 5062; // 0x9b6 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0x9b7 TObjFunc
	return 0; // 0x9b9 Return
	
Label_2490:
	var_595_int = 5086; // 0x9ba PushI
	var_596_bool = var_30_string == var_595_int; // 0x9bb Eq
	if(var_596_bool == 0) goto Label_2518; // 0x9bc JumpB
	var_597_object = Obj(); var_598_object = Obj(); // 0x9bd PushV
	var_597_object = var_1_object; // 0x9be MovT
	var_598_object = var_0_object; // 0x9bf MovT
	func_4276(); // 0x9c0 Call
	var_601_string = ""; // 0x9c2 PushV
	var_601_string = "Neutral"; // 0x9c3 MovS
	func_1469(var_31_bool, var_601_string); // 0x9c4 Call
	var_602_int = 4652; // 0x9c6 PushI
	SetMessage(var_602_int); // 0x9c7 TObjFunc
	ClearReplies(); // 0x9c9 TObjFunc
	var_603_int = 4653; // 0x9cb PushI
	var_604_int = 5089; // 0x9cc PushI
	var_605_int = 5088; // 0x9cd PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x9ce TObjFunc
	var_606_int = 4655; // 0x9d0 PushI
	var_607_int = 5089; // 0x9d1 PushI
	var_608_int = 5090; // 0x9d2 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x9d3 TObjFunc
	return 0; // 0x9d5 Return
	
Label_2518:
	var_609_int = 5089; // 0x9d6 PushI
	var_610_bool = var_30_string == var_609_int; // 0x9d7 Eq
	if(var_610_bool == 0) goto Label_2541; // 0x9d8 JumpB
	var_611_string = ""; // 0x9d9 PushV
	var_611_string = "Neutral"; // 0x9da MovS
	func_1469(var_31_bool, var_611_string); // 0x9db Call
	var_612_int = 4654; // 0x9dd PushI
	SetMessage(var_612_int); // 0x9de TObjFunc
	ClearReplies(); // 0x9e0 TObjFunc
	var_613_int = 4656; // 0x9e2 PushI
	var_614_int = 5093; // 0x9e3 PushI
	var_615_int = 5092; // 0x9e4 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x9e5 TObjFunc
	var_616_int = 4660; // 0x9e7 PushI
	var_617_int = -1; // 0x9e8 PushI
	var_618_int = 5096; // 0x9e9 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x9ea TObjFunc
	return 0; // 0x9ec Return
	
Label_2541:
	var_619_int = 5093; // 0x9ed PushI
	var_620_bool = var_30_string == var_619_int; // 0x9ee Eq
	if(var_620_bool == 0) goto Label_2564; // 0x9ef JumpB
	var_621_string = ""; // 0x9f0 PushV
	var_621_string = "Neutral"; // 0x9f1 MovS
	func_1469(var_31_bool, var_621_string); // 0x9f2 Call
	var_622_int = 4657; // 0x9f4 PushI
	SetMessage(var_622_int); // 0x9f5 TObjFunc
	ClearReplies(); // 0x9f7 TObjFunc
	var_623_int = 4658; // 0x9f9 PushI
	var_624_int = -1; // 0x9fa PushI
	var_625_int = 5094; // 0x9fb PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x9fc TObjFunc
	var_626_int = 4659; // 0x9fe PushI
	var_627_int = -1; // 0x9ff PushI
	var_628_int = 5095; // 0xa00 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0xa01 TObjFunc
	return 0; // 0xa03 Return
	
Label_2564:
	var_3_string = 1; // 0xa04 TMovB
	var_629_bool = 0; // 0xa05 PushV
	func_4256(var_629_bool); // 0xa06 Call
	if(var_629_bool == 0) goto Label_2572; // 0xa08 JumpB
	lshStopAnimation(); // 0xa09 Func
	goto Label_2574; // 0xa0b Jump
	
Label_2574:
	return 0; // 0xa0e Return
	
Label_2572:
	StopAnimation(); // 0xa0c Func
	
Label_2576:
	return 0; // 0xa10 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xaf2 PushI
	if(var_32_int == 0) goto Label_3400; // 0xaf3 JumpB
	func_4174(); // 0xaf5 Call
	var_34_int = 8026; // 0xaf7 PushI
	var_35_bool = var_31_bool == var_34_int; // 0xaf8 Eq
	if(var_35_bool == 0) goto Label_2825; // 0xaf9 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xafa PushV
	var_36_object = var_1_object; // 0xafb MovT
	var_37_object = var_0_object; // 0xafc MovT
	func_4322(); // 0xafd Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xaff PushV
	var_40_object = var_1_object; // 0xb00 MovT
	var_41_object = var_0_object; // 0xb01 MovT
	func_4352(); // 0xb02 Call
	var_107_object = Obj(); var_108_object = Obj(); // 0xb04 PushV
	var_107_object = var_1_object; // 0xb05 MovT
	var_108_object = var_0_object; // 0xb06 MovT
	func_4597(); // 0xb07 Call
	
Label_2825:
	var_133_int = 8027; // 0xb09 PushI
	var_134_bool = var_31_bool == var_133_int; // 0xb0a Eq
	if(var_134_bool == 0) goto Label_2838; // 0xb0b JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0xb0c PushV
	var_135_object = var_1_object; // 0xb0d MovT
	var_136_object = var_0_object; // 0xb0e MovT
	func_4322(); // 0xb0f Call
	var_137_object = Obj(); var_138_object = Obj(); // 0xb11 PushV
	var_137_object = var_1_object; // 0xb12 MovT
	var_138_object = var_0_object; // 0xb13 MovT
	func_4352(); // 0xb14 Call
	
Label_2838:
	var_139_int = 8028; // 0xb16 PushI
	var_140_bool = var_31_bool == var_139_int; // 0xb17 Eq
	if(var_140_bool == 0) goto Label_2846; // 0xb18 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0xb19 PushV
	var_141_object = var_1_object; // 0xb1a MovT
	var_142_object = var_0_object; // 0xb1b MovT
	func_4322(); // 0xb1c Call
	
Label_2846:
	var_143_int = 8018; // 0xb1e PushI
	var_144_bool = var_31_bool == var_143_int; // 0xb1f Eq
	if(var_144_bool == 0) goto Label_2854; // 0xb20 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0xb21 PushV
	var_145_object = var_1_object; // 0xb22 MovT
	var_146_object = var_0_object; // 0xb23 MovT
	func_4322(); // 0xb24 Call
	
Label_2854:
	var_147_int = 8009; // 0xb26 PushI
	var_148_bool = var_31_bool == var_147_int; // 0xb27 Eq
	if(var_148_bool == 0) goto Label_2862; // 0xb28 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0xb29 PushV
	var_149_object = var_1_object; // 0xb2a MovT
	var_150_object = var_0_object; // 0xb2b MovT
	func_4322(); // 0xb2c Call
	
Label_2862:
	var_151_int = 8037; // 0xb2e PushI
	var_152_bool = var_31_bool == var_151_int; // 0xb2f Eq
	if(var_152_bool == 0) goto Label_2880; // 0xb30 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xb31 PushV
	var_153_object = var_1_object; // 0xb32 MovT
	var_154_object = var_0_object; // 0xb33 MovT
	func_4328(); // 0xb34 Call
	var_157_object = Obj(); var_158_object = Obj(); // 0xb36 PushV
	var_157_object = var_1_object; // 0xb37 MovT
	var_158_object = var_0_object; // 0xb38 MovT
	func_4613(); // 0xb39 Call
	var_167_object = Obj(); var_168_object = Obj(); // 0xb3b PushV
	var_167_object = var_1_object; // 0xb3c MovT
	var_168_object = var_0_object; // 0xb3d MovT
	func_4629(); // 0xb3e Call
	
Label_2880:
	var_174_int = 8033; // 0xb40 PushI
	var_175_bool = var_31_bool == var_174_int; // 0xb41 Eq
	if(var_175_bool == 0) goto Label_2888; // 0xb42 JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0xb43 PushV
	var_176_object = var_1_object; // 0xb44 MovT
	var_177_object = var_0_object; // 0xb45 MovT
	func_4328(); // 0xb46 Call
	
Label_2888:
	var_178_int = 8042; // 0xb48 PushI
	var_179_bool = var_31_bool == var_178_int; // 0xb49 Eq
	if(var_179_bool == 0) goto Label_2896; // 0xb4a JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0xb4b PushV
	var_180_object = var_1_object; // 0xb4c MovT
	var_181_object = var_0_object; // 0xb4d MovT
	func_4334(); // 0xb4e Call
	
Label_2896:
	var_184_int = 8045; // 0xb50 PushI
	var_185_bool = var_31_bool == var_184_int; // 0xb51 Eq
	if(var_185_bool == 0) goto Label_2904; // 0xb52 JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0xb53 PushV
	var_186_object = var_1_object; // 0xb54 MovT
	var_187_object = var_0_object; // 0xb55 MovT
	func_4340(); // 0xb56 Call
	
Label_2904:
	var_190_int = 8046; // 0xb58 PushI
	var_191_bool = var_31_bool == var_190_int; // 0xb59 Eq
	if(var_191_bool == 0) goto Label_2912; // 0xb5a JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0xb5b PushV
	var_192_object = var_1_object; // 0xb5c MovT
	var_193_object = var_0_object; // 0xb5d MovT
	func_4340(); // 0xb5e Call
	
Label_2912:
	var_194_int = 12591; // 0xb60 PushI
	var_195_bool = var_31_bool == var_194_int; // 0xb61 Eq
	if(var_195_bool == 0) goto Label_2925; // 0xb62 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0xb63 PushV
	var_196_object = var_1_object; // 0xb64 MovT
	var_197_object = var_0_object; // 0xb65 MovT
	func_4352(); // 0xb66 Call
	var_198_object = Obj(); var_199_object = Obj(); // 0xb68 PushV
	var_198_object = var_1_object; // 0xb69 MovT
	var_199_object = var_0_object; // 0xb6a MovT
	func_4597(); // 0xb6b Call
	
Label_2925:
	var_200_int = 7559; // 0xb6d PushI
	var_201_bool = var_30_string == var_200_int; // 0xb6e Eq
	if(var_201_bool == 0) goto Label_3035; // 0xb6f JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0xb70 PushV
	var_203_object = var_1_object; // 0xb71 MovT
	func_4729(var_203_object); // 0xb72 Call
	if(var_202_bool == 0) goto Label_2953; // 0xb74 JumpB
	var_210_string = ""; // 0xb75 PushV
	var_210_string = "Neutral"; // 0xb76 MovS
	func_2785(var_31_bool, var_210_string); // 0xb77 Call
	var_225_int = 6853; // 0xb79 PushI
	SetMessage(var_225_int); // 0xb7a TObjFunc
	ClearReplies(); // 0xb7c TObjFunc
	var_226_int = 6854; // 0xb7e PushI
	var_227_int = 7890; // 0xb7f PushI
	var_228_int = 7560; // 0xb80 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xb81 TObjFunc
	var_229_int = 7262; // 0xb83 PushI
	var_230_int = 7890; // 0xb84 PushI
	var_231_int = 8004; // 0xb85 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xb86 TObjFunc
	return 0; // 0xb88 Return
	
Label_2953:
	var_232_string = ""; // 0xb89 PushV
	var_232_string = "Neutral"; // 0xb8a MovS
	func_2785(var_31_bool, var_232_string); // 0xb8b Call
	var_233_int = 6855; // 0xb8d PushI
	SetMessage(var_233_int); // 0xb8e TObjFunc
	ClearReplies(); // 0xb90 TObjFunc
	var_234_bool = 0; // 0xb92 PushV
	var_234_bool = 0; // 0xb93 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0xb94 PushV
	var_236_object = var_1_object; // 0xb95 MovT
	func_4741(var_236_object); // 0xb96 Call
	if(var_235_bool == 0) goto Label_2975; // 0xb98 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xb99 PushV
	var_242_object = var_1_object; // 0xb9a MovT
	func_4789(var_242_object); // 0xb9b Call
	if(var_241_bool == 0) goto Label_2975; // 0xb9d JumpB
	var_234_bool = 1; // 0xb9e MovB
	
Label_2975:
	if(var_234_bool == 0) goto Label_2981; // 0xb9f JumpB
	var_247_int = 6856; // 0xba0 PushI
	var_248_int = 7563; // 0xba1 PushI
	var_249_int = 7562; // 0xba2 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xba3 TObjFunc
	
Label_2981:
	var_250_bool = 0; // 0xba5 PushV
	var_250_bool = 0; // 0xba6 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xba7 PushV
	var_252_object = var_1_object; // 0xba8 MovT
	func_4753(var_252_object); // 0xba9 Call
	if(var_251_bool == 0) goto Label_2994; // 0xbab JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0xbac PushV
	var_258_object = var_1_object; // 0xbad MovT
	func_4801(var_258_object); // 0xbae Call
	if(var_257_bool == 0) goto Label_2994; // 0xbb0 JumpB
	var_250_bool = 1; // 0xbb1 MovB
	
Label_2994:
	if(var_250_bool == 0) goto Label_3000; // 0xbb2 JumpB
	var_263_int = 6859; // 0xbb3 PushI
	var_264_int = 7566; // 0xbb4 PushI
	var_265_int = 7565; // 0xbb5 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xbb6 TObjFunc
	
Label_3000:
	var_266_bool = 0; // 0xbb8 PushV
	var_266_bool = 0; // 0xbb9 MovB
	var_267_bool = 0; var_268_object = Obj(); // 0xbba PushV
	var_268_object = var_1_object; // 0xbbb MovT
	func_4765(var_268_object); // 0xbbc Call
	if(var_267_bool == 0) goto Label_3013; // 0xbbe JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0xbbf PushV
	var_274_object = var_1_object; // 0xbc0 MovT
	func_4777(var_274_object); // 0xbc1 Call
	if(var_273_bool == 0) goto Label_3013; // 0xbc3 JumpB
	var_266_bool = 1; // 0xbc4 MovB
	
Label_3013:
	if(var_266_bool == 0) goto Label_3019; // 0xbc5 JumpB
	var_279_int = 6861; // 0xbc6 PushI
	var_280_int = 7568; // 0xbc7 PushI
	var_281_int = 7567; // 0xbc8 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xbc9 TObjFunc
	
Label_3019:
	var_282_bool = 0; var_283_object = Obj(); // 0xbcb PushV
	var_283_object = var_1_object; // 0xbcc MovT
	func_4849(var_283_object); // 0xbcd Call
	if(var_282_bool == 0) goto Label_3029; // 0xbcf JumpB
	var_288_int = 11392; // 0xbd0 PushI
	var_289_int = 12590; // 0xbd1 PushI
	var_290_int = 12589; // 0xbd2 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xbd3 TObjFunc
	
Label_3029:
	var_291_int = 7528; // 0xbd5 PushI
	var_292_int = -1; // 0xbd6 PushI
	var_293_int = 8310; // 0xbd7 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xbd8 TObjFunc
	return 0; // 0xbda Return
	
Label_3035:
	var_294_int = 12590; // 0xbdb PushI
	var_295_bool = var_30_string == var_294_int; // 0xbdc Eq
	if(var_295_bool == 0) goto Label_3053; // 0xbdd JumpB
	var_296_string = ""; // 0xbde PushV
	var_296_string = "Neutral"; // 0xbdf MovS
	func_2785(var_31_bool, var_296_string); // 0xbe0 Call
	var_297_int = 11393; // 0xbe2 PushI
	SetMessage(var_297_int); // 0xbe3 TObjFunc
	ClearReplies(); // 0xbe5 TObjFunc
	var_298_int = 11394; // 0xbe7 PushI
	var_299_int = -1; // 0xbe8 PushI
	var_300_int = 12591; // 0xbe9 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xbea TObjFunc
	return 0; // 0xbec Return
	
Label_3053:
	var_301_int = 7568; // 0xbed PushI
	var_302_bool = var_30_string == var_301_int; // 0xbee Eq
	if(var_302_bool == 0) goto Label_3071; // 0xbef JumpB
	var_303_string = ""; // 0xbf0 PushV
	var_303_string = "Neutral"; // 0xbf1 MovS
	func_2785(var_31_bool, var_303_string); // 0xbf2 Call
	var_304_int = 6862; // 0xbf4 PushI
	SetMessage(var_304_int); // 0xbf5 TObjFunc
	ClearReplies(); // 0xbf7 TObjFunc
	var_305_int = 7296; // 0xbf9 PushI
	var_306_int = 8044; // 0xbfa PushI
	var_307_int = 8043; // 0xbfb PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xbfc TObjFunc
	return 0; // 0xbfe Return
	
Label_3071:
	var_308_int = 8044; // 0xbff PushI
	var_309_bool = var_30_string == var_308_int; // 0xc00 Eq
	if(var_309_bool == 0) goto Label_3094; // 0xc01 JumpB
	var_310_string = ""; // 0xc02 PushV
	var_310_string = "Neutral"; // 0xc03 MovS
	func_2785(var_31_bool, var_310_string); // 0xc04 Call
	var_311_int = 7297; // 0xc06 PushI
	SetMessage(var_311_int); // 0xc07 TObjFunc
	ClearReplies(); // 0xc09 TObjFunc
	var_312_int = 7298; // 0xc0b PushI
	var_313_int = -1; // 0xc0c PushI
	var_314_int = 8045; // 0xc0d PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xc0e TObjFunc
	var_315_int = 7299; // 0xc10 PushI
	var_316_int = -1; // 0xc11 PushI
	var_317_int = 8046; // 0xc12 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xc13 TObjFunc
	return 0; // 0xc15 Return
	
Label_3094:
	var_318_int = 7566; // 0xc16 PushI
	var_319_bool = var_30_string == var_318_int; // 0xc17 Eq
	if(var_319_bool == 0) goto Label_3117; // 0xc18 JumpB
	var_320_object = Obj(); var_321_object = Obj(); // 0xc19 PushV
	var_320_object = var_1_object; // 0xc1a MovT
	var_321_object = var_0_object; // 0xc1b MovT
	func_4316(); // 0xc1c Call
	var_324_string = ""; // 0xc1e PushV
	var_324_string = "Neutral"; // 0xc1f MovS
	func_2785(var_31_bool, var_324_string); // 0xc20 Call
	var_325_int = 6860; // 0xc22 PushI
	SetMessage(var_325_int); // 0xc23 TObjFunc
	ClearReplies(); // 0xc25 TObjFunc
	var_326_int = 7295; // 0xc27 PushI
	var_327_int = -1; // 0xc28 PushI
	var_328_int = 8042; // 0xc29 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0xc2a TObjFunc
	return 0; // 0xc2c Return
	
Label_3117:
	var_329_int = 7563; // 0xc2d PushI
	var_330_bool = var_30_string == var_329_int; // 0xc2e Eq
	if(var_330_bool == 0) goto Label_3140; // 0xc2f JumpB
	var_331_string = ""; // 0xc30 PushV
	var_331_string = "Neutral"; // 0xc31 MovS
	func_2785(var_31_bool, var_331_string); // 0xc32 Call
	var_332_int = 6857; // 0xc34 PushI
	SetMessage(var_332_int); // 0xc35 TObjFunc
	ClearReplies(); // 0xc37 TObjFunc
	var_333_int = 6858; // 0xc39 PushI
	var_334_int = 8034; // 0xc3a PushI
	var_335_int = 7564; // 0xc3b PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0xc3c TObjFunc
	var_336_int = 7287; // 0xc3e PushI
	var_337_int = -1; // 0xc3f PushI
	var_338_int = 8033; // 0xc40 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xc41 TObjFunc
	return 0; // 0xc43 Return
	
Label_3140:
	var_339_int = 8034; // 0xc44 PushI
	var_340_bool = var_30_string == var_339_int; // 0xc45 Eq
	if(var_340_bool == 0) goto Label_3163; // 0xc46 JumpB
	var_341_string = ""; // 0xc47 PushV
	var_341_string = "Neutral"; // 0xc48 MovS
	func_2785(var_31_bool, var_341_string); // 0xc49 Call
	var_342_int = 7288; // 0xc4b PushI
	SetMessage(var_342_int); // 0xc4c TObjFunc
	ClearReplies(); // 0xc4e TObjFunc
	var_343_int = 7289; // 0xc50 PushI
	var_344_int = 8036; // 0xc51 PushI
	var_345_int = 8035; // 0xc52 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xc53 TObjFunc
	var_346_int = 7292; // 0xc55 PushI
	var_347_int = 8039; // 0xc56 PushI
	var_348_int = 8038; // 0xc57 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xc58 TObjFunc
	return 0; // 0xc5a Return
	
Label_3163:
	var_349_int = 8039; // 0xc5b PushI
	var_350_bool = var_30_string == var_349_int; // 0xc5c Eq
	if(var_350_bool == 0) goto Label_3181; // 0xc5d JumpB
	var_351_string = ""; // 0xc5e PushV
	var_351_string = "Neutral"; // 0xc5f MovS
	func_2785(var_31_bool, var_351_string); // 0xc60 Call
	var_352_int = 7293; // 0xc62 PushI
	SetMessage(var_352_int); // 0xc63 TObjFunc
	ClearReplies(); // 0xc65 TObjFunc
	var_353_int = 7294; // 0xc67 PushI
	var_354_int = 8036; // 0xc68 PushI
	var_355_int = 8040; // 0xc69 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xc6a TObjFunc
	return 0; // 0xc6c Return
	
Label_3181:
	var_356_int = 8036; // 0xc6d PushI
	var_357_bool = var_30_string == var_356_int; // 0xc6e Eq
	if(var_357_bool == 0) goto Label_3199; // 0xc6f JumpB
	var_358_string = ""; // 0xc70 PushV
	var_358_string = "Neutral"; // 0xc71 MovS
	func_2785(var_31_bool, var_358_string); // 0xc72 Call
	var_359_int = 7290; // 0xc74 PushI
	SetMessage(var_359_int); // 0xc75 TObjFunc
	ClearReplies(); // 0xc77 TObjFunc
	var_360_int = 7291; // 0xc79 PushI
	var_361_int = -1; // 0xc7a PushI
	var_362_int = 8037; // 0xc7b PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xc7c TObjFunc
	return 0; // 0xc7e Return
	
Label_3199:
	var_363_int = 7890; // 0xc7f PushI
	var_364_bool = var_30_string == var_363_int; // 0xc80 Eq
	if(var_364_bool == 0) goto Label_3227; // 0xc81 JumpB
	var_365_string = ""; // 0xc82 PushV
	var_365_string = "Neutral"; // 0xc83 MovS
	func_2785(var_31_bool, var_365_string); // 0xc84 Call
	var_366_int = 7162; // 0xc86 PushI
	SetMessage(var_366_int); // 0xc87 TObjFunc
	ClearReplies(); // 0xc89 TObjFunc
	var_367_int = 7264; // 0xc8b PushI
	var_368_int = 8010; // 0xc8c PushI
	var_369_int = 8007; // 0xc8d PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0xc8e TObjFunc
	var_370_int = 7265; // 0xc90 PushI
	var_371_int = 8010; // 0xc91 PushI
	var_372_int = 8008; // 0xc92 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0xc93 TObjFunc
	var_373_int = 7266; // 0xc95 PushI
	var_374_int = -1; // 0xc96 PushI
	var_375_int = 8009; // 0xc97 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0xc98 TObjFunc
	return 0; // 0xc9a Return
	
Label_3227:
	var_376_int = 8010; // 0xc9b PushI
	var_377_bool = var_30_string == var_376_int; // 0xc9c Eq
	if(var_377_bool == 0) goto Label_3250; // 0xc9d JumpB
	var_378_string = ""; // 0xc9e PushV
	var_378_string = "Neutral"; // 0xc9f MovS
	func_2785(var_31_bool, var_378_string); // 0xca0 Call
	var_379_int = 7267; // 0xca2 PushI
	SetMessage(var_379_int); // 0xca3 TObjFunc
	ClearReplies(); // 0xca5 TObjFunc
	var_380_int = 7268; // 0xca7 PushI
	var_381_int = 8015; // 0xca8 PushI
	var_382_int = 8012; // 0xca9 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0xcaa TObjFunc
	var_383_int = 7269; // 0xcac PushI
	var_384_int = 8014; // 0xcad PushI
	var_385_int = 8013; // 0xcae PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xcaf TObjFunc
	return 0; // 0xcb1 Return
	
Label_3250:
	var_386_int = 8014; // 0xcb2 PushI
	var_387_bool = var_30_string == var_386_int; // 0xcb3 Eq
	if(var_387_bool == 0) goto Label_3278; // 0xcb4 JumpB
	var_388_string = ""; // 0xcb5 PushV
	var_388_string = "Neutral"; // 0xcb6 MovS
	func_2785(var_31_bool, var_388_string); // 0xcb7 Call
	var_389_int = 7270; // 0xcb9 PushI
	SetMessage(var_389_int); // 0xcba TObjFunc
	ClearReplies(); // 0xcbc TObjFunc
	var_390_int = 7272; // 0xcbe PushI
	var_391_int = 8019; // 0xcbf PushI
	var_392_int = 8016; // 0xcc0 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xcc1 TObjFunc
	var_393_int = 7273; // 0xcc3 PushI
	var_394_int = 8015; // 0xcc4 PushI
	var_395_int = 8017; // 0xcc5 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xcc6 TObjFunc
	var_396_int = 7274; // 0xcc8 PushI
	var_397_int = -1; // 0xcc9 PushI
	var_398_int = 8018; // 0xcca PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0xccb TObjFunc
	return 0; // 0xccd Return
	
Label_3278:
	var_399_int = 8019; // 0xcce PushI
	var_400_bool = var_30_string == var_399_int; // 0xccf Eq
	if(var_400_bool == 0) goto Label_3296; // 0xcd0 JumpB
	var_401_string = ""; // 0xcd1 PushV
	var_401_string = "Neutral"; // 0xcd2 MovS
	func_2785(var_31_bool, var_401_string); // 0xcd3 Call
	var_402_int = 7275; // 0xcd5 PushI
	SetMessage(var_402_int); // 0xcd6 TObjFunc
	ClearReplies(); // 0xcd8 TObjFunc
	var_403_int = 7276; // 0xcda PushI
	var_404_int = 8015; // 0xcdb PushI
	var_405_int = 8020; // 0xcdc PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xcdd TObjFunc
	return 0; // 0xcdf Return
	
Label_3296:
	var_406_int = 8015; // 0xce0 PushI
	var_407_bool = var_30_string == var_406_int; // 0xce1 Eq
	if(var_407_bool == 0) goto Label_3324; // 0xce2 JumpB
	var_408_object = Obj(); var_409_object = Obj(); // 0xce3 PushV
	var_408_object = var_1_object; // 0xce4 MovT
	var_409_object = var_0_object; // 0xce5 MovT
	func_4507(); // 0xce6 Call
	var_412_string = ""; // 0xce8 PushV
	var_412_string = "Neutral"; // 0xce9 MovS
	func_2785(var_31_bool, var_412_string); // 0xcea Call
	var_413_int = 7271; // 0xcec PushI
	SetMessage(var_413_int); // 0xced TObjFunc
	ClearReplies(); // 0xcef TObjFunc
	var_414_int = 7277; // 0xcf1 PushI
	var_415_int = 8023; // 0xcf2 PushI
	var_416_int = 8022; // 0xcf3 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xcf4 TObjFunc
	var_417_int = 7284; // 0xcf6 PushI
	var_418_int = 8030; // 0xcf7 PushI
	var_419_int = 8029; // 0xcf8 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0xcf9 TObjFunc
	return 0; // 0xcfb Return
	
Label_3324:
	var_420_int = 8030; // 0xcfc PushI
	var_421_bool = var_30_string == var_420_int; // 0xcfd Eq
	if(var_421_bool == 0) goto Label_3342; // 0xcfe JumpB
	var_422_string = ""; // 0xcff PushV
	var_422_string = "Neutral"; // 0xd00 MovS
	func_2785(var_31_bool, var_422_string); // 0xd01 Call
	var_423_int = 7285; // 0xd03 PushI
	SetMessage(var_423_int); // 0xd04 TObjFunc
	ClearReplies(); // 0xd06 TObjFunc
	var_424_int = 7286; // 0xd08 PushI
	var_425_int = 8025; // 0xd09 PushI
	var_426_int = 8031; // 0xd0a PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xd0b TObjFunc
	return 0; // 0xd0d Return
	
Label_3342:
	var_427_int = 8023; // 0xd0e PushI
	var_428_bool = var_30_string == var_427_int; // 0xd0f Eq
	if(var_428_bool == 0) goto Label_3360; // 0xd10 JumpB
	var_429_string = ""; // 0xd11 PushV
	var_429_string = "Neutral"; // 0xd12 MovS
	func_2785(var_31_bool, var_429_string); // 0xd13 Call
	var_430_int = 7278; // 0xd15 PushI
	SetMessage(var_430_int); // 0xd16 TObjFunc
	ClearReplies(); // 0xd18 TObjFunc
	var_431_int = 7279; // 0xd1a PushI
	var_432_int = 8025; // 0xd1b PushI
	var_433_int = 8024; // 0xd1c PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xd1d TObjFunc
	return 0; // 0xd1f Return
	
Label_3360:
	var_434_int = 8025; // 0xd20 PushI
	var_435_bool = var_30_string == var_434_int; // 0xd21 Eq
	if(var_435_bool == 0) goto Label_3388; // 0xd22 JumpB
	var_436_string = ""; // 0xd23 PushV
	var_436_string = "Neutral"; // 0xd24 MovS
	func_2785(var_31_bool, var_436_string); // 0xd25 Call
	var_437_int = 7280; // 0xd27 PushI
	SetMessage(var_437_int); // 0xd28 TObjFunc
	ClearReplies(); // 0xd2a TObjFunc
	var_438_int = 7281; // 0xd2c PushI
	var_439_int = -1; // 0xd2d PushI
	var_440_int = 8026; // 0xd2e PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xd2f TObjFunc
	var_441_int = 7282; // 0xd31 PushI
	var_442_int = -1; // 0xd32 PushI
	var_443_int = 8027; // 0xd33 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0xd34 TObjFunc
	var_444_int = 7283; // 0xd36 PushI
	var_445_int = -1; // 0xd37 PushI
	var_446_int = 8028; // 0xd38 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0xd39 TObjFunc
	return 0; // 0xd3b Return
	
Label_3388:
	var_3_string = 1; // 0xd3c TMovB
	var_447_bool = 0; // 0xd3d PushV
	func_4256(var_447_bool); // 0xd3e Call
	if(var_447_bool == 0) goto Label_3396; // 0xd40 JumpB
	lshStopAnimation(); // 0xd41 Func
	goto Label_3398; // 0xd43 Jump
	
Label_3398:
	return 0; // 0xd46 Return
	
Label_3396:
	StopAnimation(); // 0xd44 Func
	
Label_3400:
	return 0; // 0xd48 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xdd8 PushI
	if(var_32_int == 0) goto Label_3717; // 0xdd9 JumpB
	func_4174(); // 0xddb Call
	var_34_int = 10840; // 0xddd PushI
	var_35_bool = var_31_bool == var_34_int; // 0xdde Eq
	if(var_35_bool == 0) goto Label_3557; // 0xddf JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xde0 PushV
	var_36_object = var_1_object; // 0xde1 MovT
	var_37_object = var_0_object; // 0xde2 MovT
	func_4645(); // 0xde3 Call
	
Label_3557:
	var_40_int = 10839; // 0xde5 PushI
	var_41_bool = var_30_string == var_40_int; // 0xde6 Eq
	if(var_41_bool == 0) goto Label_3585; // 0xde7 JumpB
	var_42_string = ""; // 0xde8 PushV
	var_42_string = "Neutral"; // 0xde9 MovS
	func_3527(var_31_bool, var_42_string); // 0xdea Call
	var_57_int = 9840; // 0xdec PushI
	SetMessage(var_57_int); // 0xded TObjFunc
	ClearReplies(); // 0xdef TObjFunc
	var_58_bool = 0; var_59_object = Obj(); // 0xdf1 PushV
	var_59_object = var_1_object; // 0xdf2 MovT
	func_4909(var_59_object); // 0xdf3 Call
	if(var_58_bool == 0) goto Label_3579; // 0xdf5 JumpB
	var_66_int = 9841; // 0xdf6 PushI
	var_67_int = 10821; // 0xdf7 PushI
	var_68_int = 10840; // 0xdf8 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xdf9 TObjFunc
	
Label_3579:
	var_69_int = 11259; // 0xdfb PushI
	var_70_int = -1; // 0xdfc PushI
	var_71_int = 12449; // 0xdfd PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xdfe TObjFunc
	return 0; // 0xe00 Return
	
Label_3585:
	var_72_int = 10821; // 0xe01 PushI
	var_73_bool = var_30_string == var_72_int; // 0xe02 Eq
	if(var_73_bool == 0) goto Label_3613; // 0xe03 JumpB
	var_74_string = ""; // 0xe04 PushV
	var_74_string = "Neutral"; // 0xe05 MovS
	func_3527(var_31_bool, var_74_string); // 0xe06 Call
	var_75_int = 9824; // 0xe08 PushI
	SetMessage(var_75_int); // 0xe09 TObjFunc
	ClearReplies(); // 0xe0b TObjFunc
	var_76_int = 9825; // 0xe0d PushI
	var_77_int = 10823; // 0xe0e PushI
	var_78_int = 10822; // 0xe0f PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xe10 TObjFunc
	var_79_int = 9829; // 0xe12 PushI
	var_80_int = 10828; // 0xe13 PushI
	var_81_int = 10827; // 0xe14 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xe15 TObjFunc
	var_82_int = 9836; // 0xe17 PushI
	var_83_int = 10835; // 0xe18 PushI
	var_84_int = 10834; // 0xe19 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe1a TObjFunc
	return 0; // 0xe1c Return
	
Label_3613:
	var_85_int = 10835; // 0xe1d PushI
	var_86_bool = var_30_string == var_85_int; // 0xe1e Eq
	if(var_86_bool == 0) goto Label_3636; // 0xe1f JumpB
	var_87_string = ""; // 0xe20 PushV
	var_87_string = "Neutral"; // 0xe21 MovS
	func_3527(var_31_bool, var_87_string); // 0xe22 Call
	var_88_int = 9837; // 0xe24 PushI
	SetMessage(var_88_int); // 0xe25 TObjFunc
	ClearReplies(); // 0xe27 TObjFunc
	var_89_int = 9839; // 0xe29 PushI
	var_90_int = 10828; // 0xe2a PushI
	var_91_int = 10837; // 0xe2b PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xe2c TObjFunc
	var_92_int = 9838; // 0xe2e PushI
	var_93_int = -1; // 0xe2f PushI
	var_94_int = 10836; // 0xe30 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xe31 TObjFunc
	return 0; // 0xe33 Return
	
Label_3636:
	var_95_int = 10828; // 0xe34 PushI
	var_96_bool = var_30_string == var_95_int; // 0xe35 Eq
	if(var_96_bool == 0) goto Label_3659; // 0xe36 JumpB
	var_97_string = ""; // 0xe37 PushV
	var_97_string = "Neutral"; // 0xe38 MovS
	func_3527(var_31_bool, var_97_string); // 0xe39 Call
	var_98_int = 9830; // 0xe3b PushI
	SetMessage(var_98_int); // 0xe3c TObjFunc
	ClearReplies(); // 0xe3e TObjFunc
	var_99_int = 9831; // 0xe40 PushI
	var_100_int = -1; // 0xe41 PushI
	var_101_int = 10829; // 0xe42 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xe43 TObjFunc
	var_102_int = 9832; // 0xe45 PushI
	var_103_int = 10831; // 0xe46 PushI
	var_104_int = 10830; // 0xe47 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xe48 TObjFunc
	return 0; // 0xe4a Return
	
Label_3659:
	var_105_int = 10831; // 0xe4b PushI
	var_106_bool = var_30_string == var_105_int; // 0xe4c Eq
	if(var_106_bool == 0) goto Label_3682; // 0xe4d JumpB
	var_107_string = ""; // 0xe4e PushV
	var_107_string = "Neutral"; // 0xe4f MovS
	func_3527(var_31_bool, var_107_string); // 0xe50 Call
	var_108_int = 9833; // 0xe52 PushI
	SetMessage(var_108_int); // 0xe53 TObjFunc
	ClearReplies(); // 0xe55 TObjFunc
	var_109_int = 9834; // 0xe57 PushI
	var_110_int = -1; // 0xe58 PushI
	var_111_int = 10832; // 0xe59 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xe5a TObjFunc
	var_112_int = 9835; // 0xe5c PushI
	var_113_int = -1; // 0xe5d PushI
	var_114_int = 10833; // 0xe5e PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xe5f TObjFunc
	return 0; // 0xe61 Return
	
Label_3682:
	var_115_int = 10823; // 0xe62 PushI
	var_116_bool = var_30_string == var_115_int; // 0xe63 Eq
	if(var_116_bool == 0) goto Label_3705; // 0xe64 JumpB
	var_117_string = ""; // 0xe65 PushV
	var_117_string = "Neutral"; // 0xe66 MovS
	func_3527(var_31_bool, var_117_string); // 0xe67 Call
	var_118_int = 9826; // 0xe69 PushI
	SetMessage(var_118_int); // 0xe6a TObjFunc
	ClearReplies(); // 0xe6c TObjFunc
	var_119_int = 9827; // 0xe6e PushI
	var_120_int = 10828; // 0xe6f PushI
	var_121_int = 10824; // 0xe70 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xe71 TObjFunc
	var_122_int = 9828; // 0xe73 PushI
	var_123_int = -1; // 0xe74 PushI
	var_124_int = 10826; // 0xe75 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xe76 TObjFunc
	return 0; // 0xe78 Return
	
Label_3705:
	var_3_string = 1; // 0xe79 TMovB
	var_125_bool = 0; // 0xe7a PushV
	func_4256(var_125_bool); // 0xe7b Call
	if(var_125_bool == 0) goto Label_3713; // 0xe7d JumpB
	lshStopAnimation(); // 0xe7e Func
	goto Label_3715; // 0xe80 Jump
	
Label_3715:
	return 0; // 0xe83 Return
	
Label_3713:
	StopAnimation(); // 0xe81 Func
	
Label_3717:
	return 0; // 0xe85 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0xf1e PushI
	if(var_32_int == 0) goto Label_4078; // 0xf1f JumpB
	func_4174(); // 0xf21 Call
	var_34_int = 12447; // 0xf23 PushI
	var_35_bool = var_31_int == var_34_int; // 0xf24 Eq
	if(var_35_bool == 0) goto Label_3883; // 0xf25 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xf26 PushV
	var_36_object = var_1_object; // 0xf27 MovT
	var_37_object = var_0_object; // 0xf28 MovT
	func_4651(); // 0xf29 Call
	
Label_3883:
	var_40_int = 12445; // 0xf2b PushI
	var_41_bool = var_30_int == var_40_int; // 0xf2c Eq
	if(var_41_bool == 0) goto Label_3920; // 0xf2d JumpB
	var_42_string = ""; // 0xf2e PushV
	var_42_string = "Neutral"; // 0xf2f MovS
	func_3853(var_31_int, var_42_string); // 0xf30 Call
	var_57_int = 11255; // 0xf32 PushI
	SetMessage(var_57_int); // 0xf33 TObjFunc
	ClearReplies(); // 0xf35 TObjFunc
	var_58_bool = 0; // 0xf37 PushV
	var_58_bool = 0; // 0xf38 MovB
	var_59_bool = 0; var_60_object = Obj(); // 0xf39 PushV
	var_60_object = var_1_object; // 0xf3a MovT
	func_4933(var_60_object); // 0xf3b Call
	if(var_59_bool == 0) goto Label_3908; // 0xf3d JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0xf3e PushV
	var_68_object = var_1_object; // 0xf3f MovT
	func_4921(var_68_object); // 0xf40 Call
	if(var_67_bool == 0) goto Label_3908; // 0xf42 JumpB
	var_58_bool = 1; // 0xf43 MovB
	
Label_3908:
	if(var_58_bool == 0) goto Label_3914; // 0xf44 JumpB
	var_73_int = 11257; // 0xf45 PushI
	var_74_int = 12448; // 0xf46 PushI
	var_75_int = 12447; // 0xf47 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf48 TObjFunc
	
Label_3914:
	var_76_int = 11256; // 0xf4a PushI
	var_77_int = -1; // 0xf4b PushI
	var_78_int = 12446; // 0xf4c PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf4d TObjFunc
	return 0; // 0xf4f Return
	
Label_3920:
	var_79_int = 12448; // 0xf50 PushI
	var_80_bool = var_30_int == var_79_int; // 0xf51 Eq
	if(var_80_bool == 0) goto Label_3943; // 0xf52 JumpB
	var_81_string = ""; // 0xf53 PushV
	var_81_string = "Neutral"; // 0xf54 MovS
	func_3853(var_31_int, var_81_string); // 0xf55 Call
	var_82_int = 11258; // 0xf57 PushI
	SetMessage(var_82_int); // 0xf58 TObjFunc
	ClearReplies(); // 0xf5a TObjFunc
	var_83_int = 11267; // 0xf5c PushI
	var_84_int = 12458; // 0xf5d PushI
	var_85_int = 12457; // 0xf5e PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xf5f TObjFunc
	var_86_int = 11260; // 0xf61 PushI
	var_87_int = 12451; // 0xf62 PushI
	var_88_int = 12450; // 0xf63 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xf64 TObjFunc
	return 0; // 0xf66 Return
	
Label_3943:
	var_89_int = 12451; // 0xf67 PushI
	var_90_bool = var_30_int == var_89_int; // 0xf68 Eq
	if(var_90_bool == 0) goto Label_3961; // 0xf69 JumpB
	var_91_string = ""; // 0xf6a PushV
	var_91_string = "Neutral"; // 0xf6b MovS
	func_3853(var_31_int, var_91_string); // 0xf6c Call
	var_92_int = 11261; // 0xf6e PushI
	SetMessage(var_92_int); // 0xf6f TObjFunc
	ClearReplies(); // 0xf71 TObjFunc
	var_93_int = 11262; // 0xf73 PushI
	var_94_int = 12453; // 0xf74 PushI
	var_95_int = 12452; // 0xf75 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf76 TObjFunc
	return 0; // 0xf78 Return
	
Label_3961:
	var_96_int = 12453; // 0xf79 PushI
	var_97_bool = var_30_int == var_96_int; // 0xf7a Eq
	if(var_97_bool == 0) goto Label_3979; // 0xf7b JumpB
	var_98_string = ""; // 0xf7c PushV
	var_98_string = "Neutral"; // 0xf7d MovS
	func_3853(var_31_int, var_98_string); // 0xf7e Call
	var_99_int = 11263; // 0xf80 PushI
	SetMessage(var_99_int); // 0xf81 TObjFunc
	ClearReplies(); // 0xf83 TObjFunc
	var_100_int = 11264; // 0xf85 PushI
	var_101_int = 12455; // 0xf86 PushI
	var_102_int = 12454; // 0xf87 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xf88 TObjFunc
	return 0; // 0xf8a Return
	
Label_3979:
	var_103_int = 12455; // 0xf8b PushI
	var_104_bool = var_30_int == var_103_int; // 0xf8c Eq
	if(var_104_bool == 0) goto Label_3997; // 0xf8d JumpB
	var_105_string = ""; // 0xf8e PushV
	var_105_string = "Neutral"; // 0xf8f MovS
	func_3853(var_31_int, var_105_string); // 0xf90 Call
	var_106_int = 11265; // 0xf92 PushI
	SetMessage(var_106_int); // 0xf93 TObjFunc
	ClearReplies(); // 0xf95 TObjFunc
	var_107_int = 11266; // 0xf97 PushI
	var_108_int = 12458; // 0xf98 PushI
	var_109_int = 12456; // 0xf99 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xf9a TObjFunc
	return 0; // 0xf9c Return
	
Label_3997:
	var_110_int = 12458; // 0xf9d PushI
	var_111_bool = var_30_int == var_110_int; // 0xf9e Eq
	if(var_111_bool == 0) goto Label_4020; // 0xf9f JumpB
	var_112_string = ""; // 0xfa0 PushV
	var_112_string = "Neutral"; // 0xfa1 MovS
	func_3853(var_31_int, var_112_string); // 0xfa2 Call
	var_113_int = 11268; // 0xfa4 PushI
	SetMessage(var_113_int); // 0xfa5 TObjFunc
	ClearReplies(); // 0xfa7 TObjFunc
	var_114_int = 11269; // 0xfa9 PushI
	var_115_int = 12463; // 0xfaa PushI
	var_116_int = 12459; // 0xfab PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xfac TObjFunc
	var_117_int = 11270; // 0xfae PushI
	var_118_int = 12461; // 0xfaf PushI
	var_119_int = 12460; // 0xfb0 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xfb1 TObjFunc
	return 0; // 0xfb3 Return
	
Label_4020:
	var_120_int = 12461; // 0xfb4 PushI
	var_121_bool = var_30_int == var_120_int; // 0xfb5 Eq
	if(var_121_bool == 0) goto Label_4043; // 0xfb6 JumpB
	var_122_string = ""; // 0xfb7 PushV
	var_122_string = "Neutral"; // 0xfb8 MovS
	func_3853(var_31_int, var_122_string); // 0xfb9 Call
	var_123_int = 11271; // 0xfbb PushI
	SetMessage(var_123_int); // 0xfbc TObjFunc
	ClearReplies(); // 0xfbe TObjFunc
	var_124_int = 11273; // 0xfc0 PushI
	var_125_int = 12463; // 0xfc1 PushI
	var_126_int = 12464; // 0xfc2 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xfc3 TObjFunc
	var_127_int = 11274; // 0xfc5 PushI
	var_128_int = -1; // 0xfc6 PushI
	var_129_int = 12465; // 0xfc7 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xfc8 TObjFunc
	return 0; // 0xfca Return
	
Label_4043:
	var_130_int = 12463; // 0xfcb PushI
	var_131_bool = var_30_int == var_130_int; // 0xfcc Eq
	if(var_131_bool == 0) goto Label_4066; // 0xfcd JumpB
	var_132_string = ""; // 0xfce PushV
	var_132_string = "Neutral"; // 0xfcf MovS
	func_3853(var_31_int, var_132_string); // 0xfd0 Call
	var_133_int = 11272; // 0xfd2 PushI
	SetMessage(var_133_int); // 0xfd3 TObjFunc
	ClearReplies(); // 0xfd5 TObjFunc
	var_134_int = 11275; // 0xfd7 PushI
	var_135_int = -1; // 0xfd8 PushI
	var_136_int = 12467; // 0xfd9 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xfda TObjFunc
	var_137_int = 11276; // 0xfdc PushI
	var_138_int = -1; // 0xfdd PushI
	var_139_int = 12468; // 0xfde PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xfdf TObjFunc
	return 0; // 0xfe1 Return
	
Label_4066:
	var_3_string = 1; // 0xfe2 TMovB
	var_140_bool = 0; // 0xfe3 PushV
	func_4256(var_140_bool); // 0xfe4 Call
	if(var_140_bool == 0) goto Label_4074; // 0xfe6 JumpB
	lshStopAnimation(); // 0xfe7 Func
	goto Label_4076; // 0xfe9 Jump
	
Label_4076:
	return 0; // 0xfec Return
	
Label_4074:
	StopAnimation(); // 0xfea Func
	
Label_4078:
	return 0; // 0xfee Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_5098(); // 0x7 Call
	var_30_bool = 0; // 0x9 PushV
	func_4091(var_30_bool); // 0xa Call
	var_33_bool = var_30_bool == 0; // 0xc Not
	if(var_33_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_34_string = ""; // 0x13 PushV
	var_34_string = "Neutral"; // 0x14 MovS
	func_4156(var_34_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_4096(var_57_bool)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; // 0x1000 PushV
	GetPosition(var_68_cvector); // 0x1001 ObjFunc
	GetEyesHeight(var_67_float); // 0x1003 ObjFunc
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x1005 PushE
	var_75_float = var_75_float + var_67_float; // 0x1006 Add2
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x1007 PopE
	GetPosition(var_69_cvector); // 0x1008 Func
	GetEyesHeight(var_67_float); // 0x100a Func
	var_76_float = GetByIndex(var_69_cvector, 1); // 0x100c PushE
	var_76_float = var_76_float + var_67_float; // 0x100d Add2
	SetByIndex(var_69_cvector, 1) = var_76_float; // 0x100e PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x100f Sub2
	var_77_float = GetByIndex(var_70_cvector, 1); // 0x1010 PushE
	var_77_float = 0; // 0x1011 MovI
	SetByIndex(var_70_cvector, 1) = var_77_float; // 0x1012 PopE
	var_78_int = var_70_cvector | var_70_cvector; // 0x1013 Or
	var_79_float = sqrt(var_78_int); // 0x1014 Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x1015 Div2
	var_71_cvector = -var_70_cvector; // 0x1016 Neg2
	var_80_int = 70; // 0x1017 PushI
	var_81_float = var_70_cvector * var_80_int; // 0x1018 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x1019 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x101a PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x101b Xor2
	func_4181(var_82_cvector, var_83_cvector); // 0x101c Call
	var_90_int = 25; // 0x101e PushI
	var_91_float = var_82_cvector * var_90_int; // 0x101f Mult
	var_92_int = var_81_float + var_91_float; // 0x1020 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x1021 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x1022 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x1023 Add2
	IsOverrideActive(var_74_bool); // 0x1024 Func
	var_94_bool = var_74_bool; // 0x1026 Push
	if(var_94_bool == 0) goto Label_4138; // 0x1027 JumpB
	var_57_bool = 0; // 0x1028 MovB
	return 16; // 0x1029 Return
	
Label_4138:
	StopWorld(); // 0x102a Func
	CameraTransit(var_73_cvector, var_71_cvector); // 0x102c Func
	var_95_float = GetByIndex(var_72_cvector, 0); // 0x102e PushE
	var_96_float = GetByIndex(var_72_cvector, 2); // 0x102f PushE
	Rotate(var_95_float, var_96_float); // 0x1030 Func
	CameraWaitForPlayFinish(); // 0x1032 Func
	ResumeWorld(); // 0x1034 Func
	var_57_bool = 1; // 0x1036 MovB
	return 16; // 0x1037 Return
}


func_4352()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1100 PushV
	var_44_string = "d2q02"; // 0x1101 PushS
	var_45_int = 1; // 0x1102 PushI
	SetVariable(var_44_string, var_45_int); // 0x1103 Func
	var_46_object = Obj(); // 0x1105 PushV
	func_4999(var_46_object); // 0x1106 Call
	var_43_object = var_46_object; // 0x1107 Mov
	var_53_string = "d2q02EvaGotoAndrei"; // 0x1109 PushS
	var_54_string = "pt_map_andrei"; // 0x110a PushS
	var_55_int = 0; // 0x110b PushI
	var_56_int = 15272; // 0x110c PushI
	var_57_float = 0; // 0x110d PushV
	func_4223(var_57_float); // 0x110e Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0x1110 ObjFunc
	var_60_string = "d2q02EvaGotoAndreiSelf"; // 0x1112 PushS
	var_61_string = "pt_map_eva"; // 0x1113 PushS
	var_62_int = 0; // 0x1114 PushI
	var_63_int = 15278; // 0x1115 PushI
	var_64_float = 0; // 0x1116 PushV
	func_4223(var_64_float); // 0x1117 Call
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1119 ObjFunc
	func_5066(); // 0x111c Call
	func_5082(); // 0x111f Call
	var_99_object = Obj(); var_100_string = ""; // 0x1121 PushV
	var_100_string = "quest_d2_02"; // 0x1122 MovS
	func_4196(var_99_object, var_100_string); // 0x1123 Call
	return 2; // 0x1125 Return
}


func_4613()
{
	var_159_object = Obj(); var_160_object = Obj(); // 0x1205 PushV
	var_161_object = Obj(); // 0x1206 PushV
	func_4999(var_161_object); // 0x1207 Call
	var_160_object = var_161_object; // 0x1208 Mov
	var_162_string = "d2q02EvaGotoMaria"; // 0x120a PushS
	var_163_string = "pt_map_maria"; // 0x120b PushS
	var_164_int = 0; // 0x120c PushI
	var_165_int = 15274; // 0x120d PushI
	var_166_float = 0; // 0x120e PushV
	func_4223(var_166_float); // 0x120f Call
	AddMark(var_162_string, var_163_string, var_164_int, var_165_int, var_166_float); // 0x1211 ObjFunc
	return 2; // 0x1213 Return
}


func_4873(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x130a PushV
	var_230_string = "ood1Eva3"; // 0x130b MovS
	func_4191(var_229_int, var_230_string); // 0x130c Call
	var_231_int = 0; // 0x130e PushI
	var_232_bool = var_229_int == var_231_int; // 0x130f Eq
	if(var_232_bool == 0) goto Label_4883; // 0x1310 JumpB
	var_227_bool = 1; // 0x1311 MovB
	return 0; // 0x1312 Return
	
Label_4883:
	var_227_bool = 0; // 0x1313 MovB
	return 0; // 0x1314 Return
}


func_3853(var_2_object, var_42_string)
{
	var_43_bool = 0; // 0xf0e PushV
	func_4256(var_43_bool); // 0xf0f Call
	var_44_bool = var_43_bool == 0; // 0xf11 Not
	if(var_44_bool == 0) goto Label_3860; // 0xf12 JumpB
	return 0; // 0xf13 Return
	
Label_3860:
	var_45_bool = var_42_string == var_2_object; // 0xf14 Eq
	if(var_45_bool == 0) goto Label_3863; // 0xf15 JumpB
	return 0; // 0xf16 Return
	
Label_3863:
	var_46_string = ""; // 0xf17 PushV
	var_46_string = var_42_string; // 0xf18 Mov
	func_4156(var_46_string); // 0xf19 Call
	var_2_object = var_42_string; // 0xf1b TMov
	return 0; // 0xf1c Return
}


func_2577(var_0_object, var_315_int, var_316_object)
{
	var_318_object = Obj(); var_319_bool = 0; var_320_int = 0; var_321_bool = 0; var_322_object = Obj(); var_323_bool = 0; var_324_int = 0; var_325_bool = 0; // 0xa11 PushV
	var_0_object = var_316_object; // 0xa12 TMov
	var_326_bool = 0; var_327_object = Obj(); // 0xa13 PushV
	var_327_object = var_316_object; // 0xa14 Mov
	func_4096(var_327_object); // 0xa15 Call
	var_328_bool = var_326_bool == 0; // 0xa17 Not
	if(var_328_bool == 0) goto Label_2587; // 0xa18 JumpB
	var_315_int = -2; // 0xa19 MovI
	return 8; // 0xa1a Return
	
Label_2587:
	CreateDialog(var_322_object); // 0xa1b Func
	var_329_int = 0; // 0xa1d PushV
	func_4252(var_329_int); // 0xa1e Call
	SetNPCName(var_329_int); // 0xa20 ObjFunc
	var_330_string = ""; // 0xa22 PushV
	func_4254(var_330_string); // 0xa23 Call
	SetPhoto(var_330_string); // 0xa25 ObjFunc
	var_331_int = 0; // 0xa27 PushV
	func_5049(var_331_int); // 0xa28 Call
	SetPlayerName(var_331_int); // 0xa2a ObjFunc
	var_324_int = -1; // 0xa2c MovI
	IsOverrideActive(var_323_bool); // 0xa2d Func
	var_332_bool = var_323_bool; // 0xa2f Push
	if(var_332_bool == 0) goto Label_2611; // 0xa30 JumpB
	var_315_int = -2; // 0xa31 MovI
	return 8; // 0xa32 Return
	
Label_2611:
	DoDialog(var_322_object); // 0xa33 Func
	var_333_object = Obj(); var_334_object = Obj(); // 0xa35 PushV
	var_333_object = var_316_object; // 0xa36 Mov
	var_334_object = var_322_object; // 0xa37 Mov
	TaskCall(9); // 0xa38 TaskCall
	func_2640(var_335_object, var_336_object, var_337_string, var_338_bool, var_333_object, var_334_object); // 0xa39 Call
	TaskReturn(); // 0xa3a TaskReturn
	IsDialogEnd(var_325_bool); // 0xa3c ObjFunc
	
Label_2622:
	var_428_bool = var_325_bool == 0; // 0xa3e Not
	if(var_428_bool == 0) goto Label_2629; // 0xa3f JumpB
	sync(); // 0xa40 Func
	IsDialogEnd(var_325_bool); // 0xa42 ObjFunc
	goto Label_2622; // 0xa44 Jump
	
Label_2629:
	var_429_object = Obj(); // 0xa45 PushV
	var_429_object = var_316_object; // 0xa46 Mov
	func_4152(); // 0xa47 Call
	StopDialog(var_322_object); // 0xa49 Func
	GetReturnValue(var_324_int); // 0xa4b ObjFunc
	var_315_int = var_324_int; // 0xa4d Mov
	return 8; // 0xa4e Return
}


func_4629()
{
	var_169_object = Obj(); var_170_string = ""; var_171_float = 0; // 0x1216 PushV
	var_172_object = Obj(); // 0x1217 PushV
	func_4999(var_172_object); // 0x1218 Call
	var_169_object = var_172_object; // 0x1219 Mov
	var_170_string = "pt_map_maria"; // 0x121b MovS
	var_171_float = 2; // 0x121c MovI
	func_5016(var_169_object, var_170_string, var_171_float); // 0x121d Call
	var_173_object = Obj(); // 0x121f PushV
	func_4999(var_173_object); // 0x1220 Call
	ShowMap(var_173_object); // 0x1222 ObjFunc
	return 0; // 0x1224 Return
}


func_4885(var_45_bool)
{
	var_47_int = 0; var_48_string = ""; // 0x1316 PushV
	var_48_string = "ood6Eva1"; // 0x1317 MovS
	func_4191(var_47_int, var_48_string); // 0x1318 Call
	var_49_int = 0; // 0x131a PushI
	var_50_bool = var_47_int == var_49_int; // 0x131b Eq
	if(var_50_bool == 0) goto Label_4895; // 0x131c JumpB
	var_45_bool = 1; // 0x131d MovB
	return 0; // 0x131e Return
	
Label_4895:
	var_45_bool = 0; // 0x131f MovB
	return 0; // 0x1320 Return
}


func_4897(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x1322 PushV
	var_256_string = "KnowJulia"; // 0x1323 MovS
	func_4191(var_255_int, var_256_string); // 0x1324 Call
	var_257_int = 1; // 0x1326 PushI
	var_258_bool = var_255_int == var_257_int; // 0x1327 Eq
	if(var_258_bool == 0) goto Label_4907; // 0x1328 JumpB
	var_253_bool = 1; // 0x1329 MovB
	return 0; // 0x132a Return
	
Label_4907:
	var_253_bool = 0; // 0x132b MovB
	return 0; // 0x132c Return
}


func_4645()
{
	var_38_string = "ood3Eva1"; // 0x1226 PushS
	var_39_int = 1; // 0x1227 PushI
	SetVariable(var_38_string, var_39_int); // 0x1228 Func
	return 0; // 0x122a Return
}


func_4391()
{
	var_38_string = ""; var_39_bool = 0; // 0x1128 PushV
	var_38_string = "icot_eva@door1"; // 0x1129 MovS
	var_39_bool = 0; // 0x112a MovB
	func_4207(var_38_string, var_39_bool); // 0x112b Call
	return 0; // 0x112d Return
}


func_4651()
{
	var_38_string = "ood4Eva1"; // 0x122c PushS
	var_39_int = 1; // 0x122d PushI
	SetVariable(var_38_string, var_39_int); // 0x122e Func
	return 0; // 0x1230 Return
}


func_4909(var_58_bool)
{
	var_60_int = 0; var_61_string = ""; // 0x132e PushV
	var_61_string = "ood3Eva1"; // 0x132f MovS
	func_4191(var_60_int, var_61_string); // 0x1330 Call
	var_64_int = 0; // 0x1332 PushI
	var_65_bool = var_60_int == var_64_int; // 0x1333 Eq
	if(var_65_bool == 0) goto Label_4919; // 0x1334 JumpB
	var_58_bool = 1; // 0x1335 MovB
	return 0; // 0x1336 Return
	
Label_4919:
	var_58_bool = 0; // 0x1337 MovB
	return 0; // 0x1338 Return
}


func_4398()
{
	var_435_string = "KnowDubilschikov"; // 0x112f PushS
	var_436_int = 1; // 0x1130 PushI
	SetVariable(var_435_string, var_436_int); // 0x1131 Func
	return 0; // 0x1133 Return
}


func_4657()
{
	var_520_string = "KnowStamatins"; // 0x1232 PushS
	var_521_int = 1; // 0x1233 PushI
	SetVariable(var_520_string, var_521_int); // 0x1234 Func
	return 0; // 0x1236 Return
}


func_49(var_0_object, var_549_int, var_550_object)
{
	var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0; // 0x31 PushV
	var_0_object = var_550_object; // 0x32 TMov
	var_560_bool = 0; var_561_object = Obj(); // 0x33 PushV
	var_561_object = var_550_object; // 0x34 Mov
	func_4096(var_561_object); // 0x35 Call
	var_562_bool = var_560_bool == 0; // 0x37 Not
	if(var_562_bool == 0) goto Label_59; // 0x38 JumpB
	var_549_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_556_object); // 0x3b Func
	var_563_int = 0; // 0x3d PushV
	func_4252(var_563_int); // 0x3e Call
	SetNPCName(var_563_int); // 0x40 ObjFunc
	var_564_string = ""; // 0x42 PushV
	func_4254(var_564_string); // 0x43 Call
	SetPhoto(var_564_string); // 0x45 ObjFunc
	var_565_int = 0; // 0x47 PushV
	func_5049(var_565_int); // 0x48 Call
	SetPlayerName(var_565_int); // 0x4a ObjFunc
	var_558_int = -1; // 0x4c MovI
	IsOverrideActive(var_557_bool); // 0x4d Func
	var_566_bool = var_557_bool; // 0x4f Push
	if(var_566_bool == 0) goto Label_83; // 0x50 JumpB
	var_549_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_556_object); // 0x53 Func
	var_567_object = Obj(); var_568_object = Obj(); // 0x55 PushV
	var_567_object = var_550_object; // 0x56 Mov
	var_568_object = var_556_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_559_bool); // 0x5c ObjFunc
	
Label_94:
	var_616_bool = var_559_bool == 0; // 0x5e Not
	if(var_616_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_559_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_617_object = Obj(); // 0x65 PushV
	var_617_object = var_550_object; // 0x66 Mov
	func_4152(); // 0x67 Call
	StopDialog(var_556_object); // 0x69 Func
	GetReturnValue(var_558_int); // 0x6b ObjFunc
	var_549_int = var_558_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1329(var_0_object, var_1_object, var_2_object, var_3_object, var_212_object, var_213_object)
{
	var_0_object = var_213_object; // 0x532 TMov
	var_1_object = var_212_object; // 0x533 TMov
	var_3_object = 0; // 0x534 TMovB
	var_218_int = 1; // 0x535 PushI
	if(var_218_int == 0) goto Label_1439; // 0x536 JumpB
	var_219_string = ""; // 0x537 PushV
	var_219_string = "Neutral"; // 0x538 MovS
	func_1469(var_213_object, var_219_string); // 0x539 Call
	var_224_int = 4610; // 0x53b PushI
	SetMessage(var_224_int); // 0x53c TObjFunc
	ClearReplies(); // 0x53e TObjFunc
	var_225_bool = 0; var_226_object = Obj(); // 0x540 PushV
	var_226_object = var_1_object; // 0x541 MovT
	func_4837(var_226_object); // 0x542 Call
	if(var_225_bool == 0) goto Label_1354; // 0x544 JumpB
	var_231_int = 4612; // 0x545 PushI
	var_232_int = 5058; // 0x546 PushI
	var_233_int = 5042; // 0x547 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x548 TObjFunc
	
Label_1354:
	var_234_bool = 0; var_235_object = Obj(); // 0x54a PushV
	var_235_object = var_1_object; // 0x54b MovT
	func_4813(var_235_object); // 0x54c Call
	if(var_234_bool == 0) goto Label_1364; // 0x54e JumpB
	var_240_int = 4611; // 0x54f PushI
	var_241_int = 5056; // 0x550 PushI
	var_242_int = 5041; // 0x551 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x552 TObjFunc
	
Label_1364:
	var_243_bool = 0; var_244_object = Obj(); // 0x554 PushV
	var_244_object = var_1_object; // 0x555 MovT
	func_4873(var_244_object); // 0x556 Call
	if(var_243_bool == 0) goto Label_1374; // 0x558 JumpB
	var_249_int = 4613; // 0x559 PushI
	var_250_int = 5097; // 0x55a PushI
	var_251_int = 5043; // 0x55b PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x55c TObjFunc
	
Label_1374:
	var_252_bool = 0; // 0x55e PushV
	var_252_bool = 0; // 0x55f MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x560 PushV
	var_254_object = var_1_object; // 0x561 MovT
	func_4825(var_254_object); // 0x562 Call
	if(var_253_bool == 0) goto Label_1387; // 0x564 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x565 PushV
	var_260_object = var_1_object; // 0x566 MovT
	func_4681(var_260_object); // 0x567 Call
	if(var_259_bool == 0) goto Label_1387; // 0x569 JumpB
	var_252_bool = 1; // 0x56a MovB
	
Label_1387:
	if(var_252_bool == 0) goto Label_1393; // 0x56b JumpB
	var_265_int = 4846; // 0x56c PushI
	var_266_int = 5319; // 0x56d PushI
	var_267_int = 5318; // 0x56e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x56f TObjFunc
	
Label_1393:
	var_268_bool = 0; // 0x571 PushV
	var_268_bool = 0; // 0x572 MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x573 PushV
	var_270_object = var_1_object; // 0x574 MovT
	func_4897(var_270_object); // 0x575 Call
	if(var_269_bool == 0) goto Label_1406; // 0x577 JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x578 PushV
	var_276_object = var_1_object; // 0x579 MovT
	func_4693(var_276_object); // 0x57a Call
	if(var_275_bool == 0) goto Label_1406; // 0x57c JumpB
	var_268_bool = 1; // 0x57d MovB
	
Label_1406:
	if(var_268_bool == 0) goto Label_1412; // 0x57e JumpB
	var_281_int = 6299; // 0x57f PushI
	var_282_int = 6952; // 0x580 PushI
	var_283_int = 6951; // 0x581 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x582 TObjFunc
	
Label_1412:
	var_284_bool = 0; // 0x584 PushV
	var_284_bool = 0; // 0x585 MovB
	var_285_bool = 0; var_286_object = Obj(); // 0x586 PushV
	var_286_object = var_1_object; // 0x587 MovT
	func_4705(var_286_object); // 0x588 Call
	if(var_285_bool == 0) goto Label_1425; // 0x58a JumpB
	var_291_bool = 0; var_292_object = Obj(); // 0x58b PushV
	var_292_object = var_1_object; // 0x58c MovT
	func_4945(var_292_object); // 0x58d Call
	if(var_291_bool == 0) goto Label_1425; // 0x58f JumpB
	var_284_bool = 1; // 0x590 MovB
	
Label_1425:
	if(var_284_bool == 0) goto Label_1431; // 0x591 JumpB
	var_297_int = 6314; // 0x592 PushI
	var_298_int = 6970; // 0x593 PushI
	var_299_int = 6969; // 0x594 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x595 TObjFunc
	
Label_1431:
	var_300_int = 4614; // 0x597 PushI
	var_301_int = -1; // 0x598 PushI
	var_302_int = 5044; // 0x599 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x59a TObjFunc
	goto Label_1439; // 0x59c Jump
	
Label_1439:
	var_303_bool = 0; // 0x59f PushV
	func_4256(var_303_bool); // 0x5a0 Call
	if(var_303_bool == 0) goto Label_1454; // 0x5a2 JumpB
	
Label_1443:
	lshWaitForAnimEnd(); // 0x5a3 Func
	var_304_object = var_3_object; // 0x5a5 PushT
	if(var_304_object == 0) goto Label_1448; // 0x5a6 JumpB
	goto Label_1453; // 0x5a7 Jump
	
Label_1453:
	goto Label_1468; // 0x5ad Jump
	
Label_1468:
	return 0; // 0x5bc Return
	
Label_1448:
	var_305_string = ""; // 0x5a8 PushV
	var_305_string = var_2_object; // 0x5a9 MovT
	func_4156(var_305_string); // 0x5aa Call
	goto Label_1443; // 0x5ac Jump
	
Label_1454:
	var_306_string = "all"; // 0x5ae PushS
	var_307_string = "idle"; // 0x5af PushS
	PlayAnimation(var_306_string, var_307_string); // 0x5b0 Func
	
Label_1458:
	WaitForAnimEnd(); // 0x5b2 Func
	var_308_object = var_3_object; // 0x5b4 PushT
	if(var_308_object == 0) goto Label_1463; // 0x5b5 JumpB
	goto Label_1468; // 0x5b6 Jump
	
Label_1463:
	var_309_string = "all"; // 0x5b7 PushS
	var_310_string = "idle"; // 0x5b8 PushS
	PlayAnimation(var_309_string, var_310_string); // 0x5b9 Func
	goto Label_1458; // 0x5bb Jump
}


func_4404()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1134 PushV
	var_56_object = Obj(); // 0x1135 PushV
	func_4999(var_56_object); // 0x1136 Call
	var_55_object = var_56_object; // 0x1137 Mov
	var_63_string = "d1q01EvaGotoSimon"; // 0x1139 PushS
	var_64_string = "pt_map_georg"; // 0x113a PushS
	var_65_int = 1; // 0x113b PushI
	var_66_int = 7778; // 0x113c PushI
	var_67_float = 0; // 0x113d PushV
	func_4223(var_67_float); // 0x113e Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0x1140 ObjFunc
	var_70_string = "d1EvaGotoMaria"; // 0x1142 PushS
	var_71_string = "pt_map_maria"; // 0x1143 PushS
	var_72_int = 3; // 0x1144 PushI
	var_73_int = 8628; // 0x1145 PushI
	var_74_float = 0; // 0x1146 PushV
	func_4223(var_74_float); // 0x1147 Call
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1149 ObjFunc
	var_75_string = "d1EvaInfo"; // 0x114b PushS
	var_76_string = "pt_map_eva"; // 0x114c PushS
	var_77_int = 3; // 0x114d PushI
	var_78_int = 8630; // 0x114e PushI
	var_79_float = 0; // 0x114f PushV
	func_4223(var_79_float); // 0x1150 Call
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x1152 ObjFunc
	return 2; // 0x1154 Return
}


func_4663()
{
	var_298_string = "KnowMnogogrannik"; // 0x1238 PushS
	var_299_int = 1; // 0x1239 PushI
	SetVariable(var_298_string, var_299_int); // 0x123a Func
	return 0; // 0x123c Return
}


func_4152()
{
	CameraSwitchToNormal(); // 0x1039 Func
	return 0; // 0x103b Return
}


func_4921(var_67_bool)
{
	var_69_int = 0; var_70_string = ""; // 0x133a PushV
	var_70_string = "d4q02"; // 0x133b MovS
	func_4191(var_69_int, var_70_string); // 0x133c Call
	var_71_int = 0; // 0x133e PushI
	var_72_bool = var_69_int == var_71_int; // 0x133f Eq
	if(var_72_bool == 0) goto Label_4931; // 0x1340 JumpB
	var_67_bool = 1; // 0x1341 MovB
	return 0; // 0x1342 Return
	
Label_4931:
	var_67_bool = 0; // 0x1343 MovB
	return 0; // 0x1344 Return
}


func_4156(var_34_string)
{
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; // 0x103c PushV
	var_39_string = "playing "; // 0x103d PushS
	var_40_int = var_39_string + var_34_string; // 0x103e Add
	Trace(var_40_int); // 0x103f Func
	lshGetAnimTimes(var_34_string, var_37_float, var_38_float); // 0x1041 Func
	lshPlayAnimation(var_37_float, var_38_float); // 0x1043 Func
	var_41_string = "start: "; // 0x1045 PushS
	var_42_int = var_41_string + var_37_float; // 0x1046 Add
	Trace(var_42_int); // 0x1047 Func
	var_43_string = "end: "; // 0x1049 PushS
	var_44_int = var_43_string + var_38_float; // 0x104a Add
	Trace(var_44_int); // 0x104b Func
	return 4; // 0x104d Return
}


func_4669(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x123e PushV
	var_131_string = "ood1EvaIntro1"; // 0x123f MovS
	func_4191(var_130_int, var_131_string); // 0x1240 Call
	var_134_int = 0; // 0x1242 PushI
	var_135_bool = var_130_int == var_134_int; // 0x1243 Eq
	if(var_135_bool == 0) goto Label_4679; // 0x1244 JumpB
	var_128_bool = 1; // 0x1245 MovB
	return 0; // 0x1246 Return
	
Label_4679:
	var_128_bool = 0; // 0x1247 MovB
	return 0; // 0x1248 Return
}


func_4933(var_59_bool)
{
	var_61_int = 0; var_62_string = ""; // 0x1346 PushV
	var_62_string = "ood4Eva1"; // 0x1347 MovS
	func_4191(var_61_int, var_62_string); // 0x1348 Call
	var_65_int = 0; // 0x134a PushI
	var_66_bool = var_61_int == var_65_int; // 0x134b Eq
	if(var_66_bool == 0) goto Label_4943; // 0x134c JumpB
	var_59_bool = 1; // 0x134d MovB
	return 0; // 0x134e Return
	
Label_4943:
	var_59_bool = 0; // 0x134f MovB
	return 0; // 0x1350 Return
}


func_4681(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0x124a PushV
	var_246_string = "d1q01FirstGeorgVisit"; // 0x124b MovS
	func_4191(var_245_int, var_246_string); // 0x124c Call
	var_247_int = 1; // 0x124e PushI
	var_248_bool = var_245_int == var_247_int; // 0x124f Eq
	if(var_248_bool == 0) goto Label_4691; // 0x1250 JumpB
	var_243_bool = 1; // 0x1251 MovB
	return 0; // 0x1252 Return
	
Label_4691:
	var_243_bool = 0; // 0x1253 MovB
	return 0; // 0x1254 Return
}


func_3401(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0; // 0xd49 PushV
	var_0_object = var_433_object; // 0xd4a TMov
	var_443_bool = 0; var_444_object = Obj(); // 0xd4b PushV
	var_444_object = var_433_object; // 0xd4c Mov
	func_4096(var_444_object); // 0xd4d Call
	var_445_bool = var_443_bool == 0; // 0xd4f Not
	if(var_445_bool == 0) goto Label_3411; // 0xd50 JumpB
	var_432_int = -2; // 0xd51 MovI
	return 8; // 0xd52 Return
	
Label_3411:
	CreateDialog(var_439_object); // 0xd53 Func
	var_446_int = 0; // 0xd55 PushV
	func_4252(var_446_int); // 0xd56 Call
	SetNPCName(var_446_int); // 0xd58 ObjFunc
	var_447_string = ""; // 0xd5a PushV
	func_4254(var_447_string); // 0xd5b Call
	SetPhoto(var_447_string); // 0xd5d ObjFunc
	var_448_int = 0; // 0xd5f PushV
	func_5049(var_448_int); // 0xd60 Call
	SetPlayerName(var_448_int); // 0xd62 ObjFunc
	var_441_int = -1; // 0xd64 MovI
	IsOverrideActive(var_440_bool); // 0xd65 Func
	var_449_bool = var_440_bool; // 0xd67 Push
	if(var_449_bool == 0) goto Label_3435; // 0xd68 JumpB
	var_432_int = -2; // 0xd69 MovI
	return 8; // 0xd6a Return
	
Label_3435:
	DoDialog(var_439_object); // 0xd6b Func
	var_450_object = Obj(); var_451_object = Obj(); // 0xd6d PushV
	var_450_object = var_433_object; // 0xd6e Mov
	var_451_object = var_439_object; // 0xd6f Mov
	TaskCall(11); // 0xd70 TaskCall
	func_3464(var_452_object, var_453_object, var_454_string, var_455_bool, var_450_object, var_451_object); // 0xd71 Call
	TaskReturn(); // 0xd72 TaskReturn
	IsDialogEnd(var_442_bool); // 0xd74 ObjFunc
	
Label_3446:
	var_483_bool = var_442_bool == 0; // 0xd76 Not
	if(var_483_bool == 0) goto Label_3453; // 0xd77 JumpB
	sync(); // 0xd78 Func
	IsDialogEnd(var_442_bool); // 0xd7a ObjFunc
	goto Label_3446; // 0xd7c Jump
	
Label_3453:
	var_484_object = Obj(); // 0xd7d PushV
	var_484_object = var_433_object; // 0xd7e Mov
	func_4152(); // 0xd7f Call
	StopDialog(var_439_object); // 0xd81 Func
	GetReturnValue(var_441_int); // 0xd83 ObjFunc
	var_432_int = var_441_int; // 0xd85 Mov
	return 8; // 0xd86 Return
}


func_4174()
{
	var_33_bool = 0; // 0x104e PushV
	func_4256(var_33_bool); // 0x104f Call
	if(var_33_bool == 0) goto Label_4180; // 0x1051 JumpB
	lshStopSpeech(); // 0x1052 Func
	
Label_4180:
	return 0; // 0x1054 Return
}


func_2640(var_0_object, var_1_object, var_2_object, var_3_object, var_333_object, var_334_object)
{
	var_0_object = var_334_object; // 0xa51 TMov
	var_1_object = var_333_object; // 0xa52 TMov
	var_3_object = 0; // 0xa53 TMovB
	var_339_int = 1; // 0xa54 PushI
	if(var_339_int == 0) goto Label_2755; // 0xa55 JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0xa56 PushV
	var_341_object = var_1_object; // 0xa57 MovT
	func_4729(var_341_object); // 0xa58 Call
	if(var_340_bool == 0) goto Label_2671; // 0xa5a JumpB
	var_346_string = ""; // 0xa5b PushV
	var_346_string = "Neutral"; // 0xa5c MovS
	func_2785(var_334_object, var_346_string); // 0xa5d Call
	var_351_int = 6853; // 0xa5f PushI
	SetMessage(var_351_int); // 0xa60 TObjFunc
	ClearReplies(); // 0xa62 TObjFunc
	var_352_int = 6854; // 0xa64 PushI
	var_353_int = 7890; // 0xa65 PushI
	var_354_int = 7560; // 0xa66 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xa67 TObjFunc
	var_355_int = 7262; // 0xa69 PushI
	var_356_int = 7890; // 0xa6a PushI
	var_357_int = 8004; // 0xa6b PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xa6c TObjFunc
	goto Label_2755; // 0xa6e Jump
	
Label_2755:
	var_358_bool = 0; // 0xac3 PushV
	func_4256(var_358_bool); // 0xac4 Call
	if(var_358_bool == 0) goto Label_2770; // 0xac6 JumpB
	
Label_2759:
	lshWaitForAnimEnd(); // 0xac7 Func
	var_359_object = var_3_object; // 0xac9 PushT
	if(var_359_object == 0) goto Label_2764; // 0xaca JumpB
	goto Label_2769; // 0xacb Jump
	
Label_2769:
	goto Label_2784; // 0xad1 Jump
	
Label_2784:
	return 0; // 0xae0 Return
	
Label_2764:
	var_360_string = ""; // 0xacc PushV
	var_360_string = var_2_object; // 0xacd MovT
	func_4156(var_360_string); // 0xace Call
	goto Label_2759; // 0xad0 Jump
	
Label_2770:
	var_361_string = "all"; // 0xad2 PushS
	var_362_string = "idle"; // 0xad3 PushS
	PlayAnimation(var_361_string, var_362_string); // 0xad4 Func
	
Label_2774:
	WaitForAnimEnd(); // 0xad6 Func
	var_363_object = var_3_object; // 0xad8 PushT
	if(var_363_object == 0) goto Label_2779; // 0xad9 JumpB
	goto Label_2784; // 0xada Jump
	
Label_2779:
	var_364_string = "all"; // 0xadb PushS
	var_365_string = "idle"; // 0xadc PushS
	PlayAnimation(var_364_string, var_365_string); // 0xadd Func
	goto Label_2774; // 0xadf Jump
	
Label_2671:
	var_366_string = ""; // 0xa6f PushV
	var_366_string = "Neutral"; // 0xa70 MovS
	func_2785(var_334_object, var_366_string); // 0xa71 Call
	var_367_int = 6855; // 0xa73 PushI
	SetMessage(var_367_int); // 0xa74 TObjFunc
	ClearReplies(); // 0xa76 TObjFunc
	var_368_bool = 0; // 0xa78 PushV
	var_368_bool = 0; // 0xa79 MovB
	var_369_bool = 0; var_370_object = Obj(); // 0xa7a PushV
	var_370_object = var_1_object; // 0xa7b MovT
	func_4741(var_370_object); // 0xa7c Call
	if(var_369_bool == 0) goto Label_2693; // 0xa7e JumpB
	var_375_bool = 0; var_376_object = Obj(); // 0xa7f PushV
	var_376_object = var_1_object; // 0xa80 MovT
	func_4789(var_376_object); // 0xa81 Call
	if(var_375_bool == 0) goto Label_2693; // 0xa83 JumpB
	var_368_bool = 1; // 0xa84 MovB
	
Label_2693:
	if(var_368_bool == 0) goto Label_2699; // 0xa85 JumpB
	var_381_int = 6856; // 0xa86 PushI
	var_382_int = 7563; // 0xa87 PushI
	var_383_int = 7562; // 0xa88 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xa89 TObjFunc
	
Label_2699:
	var_384_bool = 0; // 0xa8b PushV
	var_384_bool = 0; // 0xa8c MovB
	var_385_bool = 0; var_386_object = Obj(); // 0xa8d PushV
	var_386_object = var_1_object; // 0xa8e MovT
	func_4753(var_386_object); // 0xa8f Call
	if(var_385_bool == 0) goto Label_2712; // 0xa91 JumpB
	var_391_bool = 0; var_392_object = Obj(); // 0xa92 PushV
	var_392_object = var_1_object; // 0xa93 MovT
	func_4801(var_392_object); // 0xa94 Call
	if(var_391_bool == 0) goto Label_2712; // 0xa96 JumpB
	var_384_bool = 1; // 0xa97 MovB
	
Label_2712:
	if(var_384_bool == 0) goto Label_2718; // 0xa98 JumpB
	var_397_int = 6859; // 0xa99 PushI
	var_398_int = 7566; // 0xa9a PushI
	var_399_int = 7565; // 0xa9b PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0xa9c TObjFunc
	
Label_2718:
	var_400_bool = 0; // 0xa9e PushV
	var_400_bool = 0; // 0xa9f MovB
	var_401_bool = 0; var_402_object = Obj(); // 0xaa0 PushV
	var_402_object = var_1_object; // 0xaa1 MovT
	func_4765(var_402_object); // 0xaa2 Call
	if(var_401_bool == 0) goto Label_2731; // 0xaa4 JumpB
	var_407_bool = 0; var_408_object = Obj(); // 0xaa5 PushV
	var_408_object = var_1_object; // 0xaa6 MovT
	func_4777(var_408_object); // 0xaa7 Call
	if(var_407_bool == 0) goto Label_2731; // 0xaa9 JumpB
	var_400_bool = 1; // 0xaaa MovB
	
Label_2731:
	if(var_400_bool == 0) goto Label_2737; // 0xaab JumpB
	var_413_int = 6861; // 0xaac PushI
	var_414_int = 7568; // 0xaad PushI
	var_415_int = 7567; // 0xaae PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0xaaf TObjFunc
	
Label_2737:
	var_416_bool = 0; var_417_object = Obj(); // 0xab1 PushV
	var_417_object = var_1_object; // 0xab2 MovT
	func_4849(var_417_object); // 0xab3 Call
	if(var_416_bool == 0) goto Label_2747; // 0xab5 JumpB
	var_422_int = 11392; // 0xab6 PushI
	var_423_int = 12590; // 0xab7 PushI
	var_424_int = 12589; // 0xab8 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0xab9 TObjFunc
	
Label_2747:
	var_425_int = 7528; // 0xabb PushI
	var_426_int = -1; // 0xabc PushI
	var_427_int = 8310; // 0xabd PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xabe TObjFunc
	goto Label_2755; // 0xac0 Jump
}


func_4945(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x1352 PushV
	var_278_string = "KnowStamatins"; // 0x1353 MovS
	func_4191(var_277_int, var_278_string); // 0x1354 Call
	var_279_int = 1; // 0x1356 PushI
	var_280_bool = var_277_int == var_279_int; // 0x1357 Eq
	if(var_280_bool == 0) goto Label_4955; // 0x1358 JumpB
	var_275_bool = 1; // 0x1359 MovB
	return 0; // 0x135a Return
	
Label_4955:
	var_275_bool = 0; // 0x135b MovB
	return 0; // 0x135c Return
}


func_4693(var_259_bool)
{
	var_261_int = 0; var_262_string = ""; // 0x1256 PushV
	var_262_string = "ood1Eva5"; // 0x1257 MovS
	func_4191(var_261_int, var_262_string); // 0x1258 Call
	var_263_int = 0; // 0x125a PushI
	var_264_bool = var_261_int == var_263_int; // 0x125b Eq
	if(var_264_bool == 0) goto Label_4703; // 0x125c JumpB
	var_259_bool = 1; // 0x125d MovB
	return 0; // 0x125e Return
	
Label_4703:
	var_259_bool = 0; // 0x125f MovB
	return 0; // 0x1260 Return
}


func_4181(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0; // 0x1055 PushV
	var_87_int = var_83_cvector | var_83_cvector; // 0x1056 Or
	var_86_float = sqrt(var_87_int); // 0x1057 Sqrt2
	var_88_float = 0.0; // 0x1058 PushF
	var_89_bool = var_86_float < var_88_float; // 0x1059 LT
	if(var_89_bool == 0) goto Label_4189; // 0x105a JumpB
	var_82_cvector = CVector(0.0, 0.0, 0.0); // 0x105b MovV
	return 2; // 0x105c Return
	
Label_4189:
	var_82_cvector = var_83_cvector / var_83_cvector; // 0x105d Div2
	return 2; // 0x105e Return
}


func_4438()
{
	var_378_string = "KnowGorny"; // 0x1157 PushS
	var_379_int = 1; // 0x1158 PushI
	SetVariable(var_378_string, var_379_int); // 0x1159 Func
	return 0; // 0x115b Return
}


func_4444()
{
	var_186_string = "KnowSobor"; // 0x115d PushS
	var_187_int = 1; // 0x115e PushI
	SetVariable(var_186_string, var_187_int); // 0x115f Func
	return 0; // 0x1161 Return
}


func_4957(var_80_object)
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x135d PushV
	GetDiaryRoot(var_82_object); // 0x135e Func
	var_83_bool = var_82_object == 0; // 0x1360 Not
	if(var_83_bool == 0) goto Label_4967; // 0x1361 JumpB
	var_84_string = "Can't retrieve diary root"; // 0x1362 PushS
	Trace(var_84_string); // 0x1363 Func
	var_80_object = 0; // 0x1365 MovB
	return 2; // 0x1366 Return
	
Label_4967:
	var_80_object = var_82_object; // 0x1367 Mov
	return 2; // 0x1368 Return
}


func_4191(var_61_int, var_62_string)
{
	var_63_int = 0; var_64_int = 0; // 0x105f PushV
	GetVariable(var_62_string, var_64_int); // 0x1060 Func
	var_61_int = var_64_int; // 0x1062 Mov
	return 2; // 0x1063 Return
}


func_4705(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0x1262 PushV
	var_272_string = "ood1Eva6"; // 0x1263 MovS
	func_4191(var_271_int, var_272_string); // 0x1264 Call
	var_273_int = 0; // 0x1266 PushI
	var_274_bool = var_271_int == var_273_int; // 0x1267 Eq
	if(var_274_bool == 0) goto Label_4715; // 0x1268 JumpB
	var_269_bool = 1; // 0x1269 MovB
	return 0; // 0x126a Return
	
Label_4715:
	var_269_bool = 0; // 0x126b MovB
	return 0; // 0x126c Return
}


func_4450()
{
	var_60_object = Obj(); var_61_string = ""; var_62_float = 0; // 0x1163 PushV
	var_63_object = Obj(); // 0x1164 PushV
	func_4999(var_63_object); // 0x1165 Call
	var_60_object = var_63_object; // 0x1166 Mov
	var_61_string = "pt_map_theater"; // 0x1168 MovS
	var_62_float = 2; // 0x1169 MovI
	func_5016(var_60_object, var_61_string, var_62_float); // 0x116a Call
	var_83_object = Obj(); // 0x116c PushV
	func_4999(var_83_object); // 0x116d Call
	ShowMap(var_83_object); // 0x116f ObjFunc
	return 0; // 0x1171 Return
}


func_4196(var_99_object, var_100_string)
{
	var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); // 0x1064 PushV
	GetMainOutdoorScene(var_103_object); // 0x1065 Func
	var_105_string = ".bin"; // 0x1067 PushS
	var_106_int = var_100_string + var_105_string; // 0x1068 Add
	AddBlankActor(var_104_object, var_103_object, var_100_string, var_106_int); // 0x1069 Func
	var_99_object = var_104_object; // 0x106b Mov
	return 4; // 0x106c Return
}


func_4970(var_71_bool, var_72_object, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0; // 0x136a PushV
	var_80_object = Obj(); // 0x136b PushV
	func_4957(var_80_object); // 0x136c Call
	var_77_object = var_80_object; // 0x136d Mov
	Find(var_73_int, var_78_object); // 0x136f ObjFunc
	var_85_bool = var_78_object == 0; // 0x1371 Not
	if(var_85_bool == 0) goto Label_4985; // 0x1372 JumpB
	var_86_string = "Can't find diary parent with id: "; // 0x1373 PushS
	var_87_int = var_86_string + var_73_int; // 0x1374 Add
	Trace(var_87_int); // 0x1375 Func
	var_71_bool = 0; // 0x1377 MovB
	return 6; // 0x1378 Return
	
Label_4985:
	AddChild(var_72_object); // 0x1379 ObjFunc
	var_88_string = "player_diary"; // 0x137b PushS
	var_89_int = 1; // 0x137c PushI
	SetVariable(var_88_string, var_89_int); // 0x137d Func
	GetCategory(var_79_int); // 0x137f ObjFunc
	SetDiarySection(var_79_int); // 0x1381 Func
	var_71_bool = 0; // 0x1383 MovB
	return 6; // 0x1384 Return
}


func_4717(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x126e PushV
	var_168_string = "ood1EvaIntro2"; // 0x126f MovS
	func_4191(var_167_int, var_168_string); // 0x1270 Call
	var_169_int = 0; // 0x1272 PushI
	var_170_bool = var_167_int == var_169_int; // 0x1273 Eq
	if(var_170_bool == 0) goto Label_4727; // 0x1274 JumpB
	var_165_bool = 1; // 0x1275 MovB
	return 0; // 0x1276 Return
	
Label_4727:
	var_165_bool = 0; // 0x1277 MovB
	return 0; // 0x1278 Return
}


func_622(var_2_object, var_140_string)
{
	var_141_bool = 0; // 0x26f PushV
	func_4256(var_141_bool); // 0x270 Call
	var_142_bool = var_141_bool == 0; // 0x272 Not
	if(var_142_bool == 0) goto Label_629; // 0x273 JumpB
	return 0; // 0x274 Return
	
Label_629:
	var_143_bool = var_140_string == var_2_object; // 0x275 Eq
	if(var_143_bool == 0) goto Label_632; // 0x276 JumpB
	return 0; // 0x277 Return
	
Label_632:
	var_144_string = ""; // 0x278 PushV
	var_144_string = var_140_string; // 0x279 Mov
	func_4156(var_144_string); // 0x27a Call
	var_2_object = var_140_string; // 0x27c TMov
	return 0; // 0x27d Return
}


func_4207(var_38_string, var_39_bool)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x106f PushV
	FindActor(var_41_object, var_38_string); // 0x1070 Func
	var_42_bool = var_41_object == 0; // 0x1072 Not
	if(var_42_bool == 0) goto Label_4218; // 0x1073 JumpB
	var_43_string = "Door "; // 0x1074 PushS
	var_44_int = var_43_string + var_38_string; // 0x1075 Add
	var_45_string = " not found"; // 0x1076 PushS
	var_46_int = var_44_int + var_45_string; // 0x1077 Add
	Trace(var_46_int); // 0x1078 Func
	
Label_4218:
	var_47_string = "locked"; // 0x107a PushS
	SetProperty(var_47_string, var_39_bool); // 0x107b ObjFunc
	return 2; // 0x107d Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_567_object, var_568_object)
{
	var_0_object = var_568_object; // 0x71 TMov
	var_1_object = var_567_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_573_int = 1; // 0x74 PushI
	if(var_573_int == 0) goto Label_174; // 0x75 JumpB
	var_574_bool = 0; // 0x76 PushV
	var_574_bool = 0; // 0x77 MovB
	var_575_bool = 0; var_576_object = Obj(); // 0x78 PushV
	var_576_object = var_1_object; // 0x79 MovT
	func_4861(var_576_object); // 0x7a Call
	if(var_575_bool == 0) goto Label_131; // 0x7c JumpB
	var_581_bool = 0; var_582_object = Obj(); // 0x7d PushV
	var_582_object = var_1_object; // 0x7e MovT
	func_4885(var_582_object); // 0x7f Call
	if(var_581_bool == 0) goto Label_131; // 0x81 JumpB
	var_574_bool = 1; // 0x82 MovB
	
Label_131:
	if(var_574_bool == 0) goto Label_157; // 0x83 JumpB
	var_587_object = Obj(); var_588_object = Obj(); // 0x84 PushV
	var_587_object = var_1_object; // 0x85 MovT
	var_588_object = var_0_object; // 0x86 MovT
	func_4579(); // 0x87 Call
	var_591_string = ""; // 0x89 PushV
	var_591_string = "Neutral"; // 0x8a MovS
	func_204(var_568_object, var_591_string); // 0x8b Call
	var_596_int = 3926; // 0x8d PushI
	SetMessage(var_596_int); // 0x8e TObjFunc
	ClearReplies(); // 0x90 TObjFunc
	var_597_int = 3927; // 0x92 PushI
	var_598_int = 4276; // 0x93 PushI
	var_599_int = 4275; // 0x94 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x95 TObjFunc
	var_600_int = 3929; // 0x97 PushI
	var_601_int = 4278; // 0x98 PushI
	var_602_int = 4277; // 0x99 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x9a TObjFunc
	goto Label_174; // 0x9c Jump
	
Label_174:
	var_603_bool = 0; // 0xae PushV
	func_4256(var_603_bool); // 0xaf Call
	if(var_603_bool == 0) goto Label_189; // 0xb1 JumpB
	
Label_178:
	lshWaitForAnimEnd(); // 0xb2 Func
	var_604_object = var_3_object; // 0xb4 PushT
	if(var_604_object == 0) goto Label_183; // 0xb5 JumpB
	goto Label_188; // 0xb6 Jump
	
Label_188:
	goto Label_203; // 0xbc Jump
	
Label_203:
	return 0; // 0xcb Return
	
Label_183:
	var_605_string = ""; // 0xb7 PushV
	var_605_string = var_2_object; // 0xb8 MovT
	func_4156(var_605_string); // 0xb9 Call
	goto Label_178; // 0xbb Jump
	
Label_189:
	var_606_string = "all"; // 0xbd PushS
	var_607_string = "idle"; // 0xbe PushS
	PlayAnimation(var_606_string, var_607_string); // 0xbf Func
	
Label_193:
	WaitForAnimEnd(); // 0xc1 Func
	var_608_object = var_3_object; // 0xc3 PushT
	if(var_608_object == 0) goto Label_198; // 0xc4 JumpB
	goto Label_203; // 0xc5 Jump
	
Label_198:
	var_609_string = "all"; // 0xc6 PushS
	var_610_string = "idle"; // 0xc7 PushS
	PlayAnimation(var_609_string, var_610_string); // 0xc8 Func
	goto Label_193; // 0xca Jump
	
Label_157:
	var_611_string = ""; // 0x9d PushV
	var_611_string = "Neutral"; // 0x9e MovS
	func_204(var_568_object, var_611_string); // 0x9f Call
	var_612_int = 13718; // 0xa1 PushI
	SetMessage(var_612_int); // 0xa2 TObjFunc
	ClearReplies(); // 0xa4 TObjFunc
	var_613_int = 13719; // 0xa6 PushI
	var_614_int = -1; // 0xa7 PushI
	var_615_int = 14985; // 0xa8 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0xa9 TObjFunc
	goto Label_174; // 0xab Jump
}


func_4466()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1172 PushV
	var_44_object = Obj(); // 0x1173 PushV
	func_4999(var_44_object); // 0x1174 Call
	var_43_object = var_44_object; // 0x1175 Mov
	var_51_string = "d1q01EvaAboutMark"; // 0x1177 PushS
	var_52_string = "pt_map_theater"; // 0x1178 PushS
	var_53_int = 1; // 0x1179 PushI
	var_54_int = 8636; // 0x117a PushI
	var_55_float = 0; // 0x117b PushV
	func_4223(var_55_float); // 0x117c Call
	AddMark(var_51_string, var_52_string, var_53_int, var_54_int, var_55_float); // 0x117e ObjFunc
	return 2; // 0x1180 Return
}


func_4729(var_202_bool)
{
	var_204_int = 0; var_205_string = ""; // 0x127a PushV
	var_205_string = "ood2Eva1"; // 0x127b MovS
	func_4191(var_204_int, var_205_string); // 0x127c Call
	var_208_int = 0; // 0x127e PushI
	var_209_bool = var_204_int == var_208_int; // 0x127f Eq
	if(var_209_bool == 0) goto Label_4739; // 0x1280 JumpB
	var_202_bool = 1; // 0x1281 MovB
	return 0; // 0x1282 Return
	
Label_4739:
	var_202_bool = 0; // 0x1283 MovB
	return 0; // 0x1284 Return
}


func_4223(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0x107f PushV
	GetGameTime(var_59_float); // 0x1080 Func
	var_57_float = var_59_float; // 0x1082 Mov
	return 2; // 0x1083 Return
}


func_4482()
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x1182 PushV
	var_136_object = Obj(); // 0x1183 PushV
	func_4999(var_136_object); // 0x1184 Call
	var_135_object = var_136_object; // 0x1185 Mov
	var_137_string = "d1EvaAboutKapella"; // 0x1187 PushS
	var_138_string = "pt_map_kapella"; // 0x1188 PushS
	var_139_int = 3; // 0x1189 PushI
	var_140_int = 8637; // 0x118a PushI
	var_141_float = 0; // 0x118b PushV
	func_4223(var_141_float); // 0x118c Call
	AddMark(var_137_string, var_138_string, var_139_int, var_140_int, var_141_float); // 0x118e ObjFunc
	var_142_string = "d1EvaAboutKaterina"; // 0x1190 PushS
	var_143_string = "pt_map_katerina"; // 0x1191 PushS
	var_144_int = 3; // 0x1192 PushI
	var_145_int = 8639; // 0x1193 PushI
	var_146_float = 0; // 0x1194 PushV
	func_4223(var_146_float); // 0x1195 Call
	AddMark(var_142_string, var_143_string, var_144_int, var_145_int, var_146_float); // 0x1197 ObjFunc
	return 2; // 0x1199 Return
}


func_4228(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x1084 PushV
	GetGameTime(var_36_float); // 0x1085 Func
	var_37_int = 1; // 0x1087 PushI
	var_38_int = 0; // 0x1088 PushV
	var_39_int = 24; // 0x1089 PushI
	var_38_int = var_36_float / var_36_float; // 0x108a Div2
	var_34_int = var_37_int + var_38_int; // 0x108b Add2
	return 2; // 0x108c Return
}


func_4741(var_235_bool)
{
	var_237_int = 0; var_238_string = ""; // 0x1286 PushV
	var_238_string = "ood2Eva2"; // 0x1287 MovS
	func_4191(var_237_int, var_238_string); // 0x1288 Call
	var_239_int = 0; // 0x128a PushI
	var_240_bool = var_237_int == var_239_int; // 0x128b Eq
	if(var_240_bool == 0) goto Label_4751; // 0x128c JumpB
	var_235_bool = 1; // 0x128d MovB
	return 0; // 0x128e Return
	
Label_4751:
	var_235_bool = 0; // 0x128f MovB
	return 0; // 0x1290 Return
}


func_3718(var_0_object, var_487_int, var_488_object)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0; var_496_int = 0; var_497_bool = 0; // 0xe86 PushV
	var_0_object = var_488_object; // 0xe87 TMov
	var_498_bool = 0; var_499_object = Obj(); // 0xe88 PushV
	var_499_object = var_488_object; // 0xe89 Mov
	func_4096(var_499_object); // 0xe8a Call
	var_500_bool = var_498_bool == 0; // 0xe8c Not
	if(var_500_bool == 0) goto Label_3728; // 0xe8d JumpB
	var_487_int = -2; // 0xe8e MovI
	return 8; // 0xe8f Return
	
Label_3728:
	CreateDialog(var_494_object); // 0xe90 Func
	var_501_int = 0; // 0xe92 PushV
	func_4252(var_501_int); // 0xe93 Call
	SetNPCName(var_501_int); // 0xe95 ObjFunc
	var_502_string = ""; // 0xe97 PushV
	func_4254(var_502_string); // 0xe98 Call
	SetPhoto(var_502_string); // 0xe9a ObjFunc
	var_503_int = 0; // 0xe9c PushV
	func_5049(var_503_int); // 0xe9d Call
	SetPlayerName(var_503_int); // 0xe9f ObjFunc
	var_496_int = -1; // 0xea1 MovI
	IsOverrideActive(var_495_bool); // 0xea2 Func
	var_504_bool = var_495_bool; // 0xea4 Push
	if(var_504_bool == 0) goto Label_3752; // 0xea5 JumpB
	var_487_int = -2; // 0xea6 MovI
	return 8; // 0xea7 Return
	
Label_3752:
	DoDialog(var_494_object); // 0xea8 Func
	var_505_object = Obj(); var_506_object = Obj(); // 0xeaa PushV
	var_505_object = var_488_object; // 0xeab Mov
	var_506_object = var_494_object; // 0xeac Mov
	TaskCall(13); // 0xead TaskCall
	func_3781(var_507_object, var_508_object, var_509_string, var_510_bool, var_505_object, var_506_object); // 0xeae Call
	TaskReturn(); // 0xeaf TaskReturn
	IsDialogEnd(var_497_bool); // 0xeb1 ObjFunc
	
Label_3763:
	var_545_bool = var_497_bool == 0; // 0xeb3 Not
	if(var_545_bool == 0) goto Label_3770; // 0xeb4 JumpB
	sync(); // 0xeb5 Func
	IsDialogEnd(var_497_bool); // 0xeb7 ObjFunc
	goto Label_3763; // 0xeb9 Jump
	
Label_3770:
	var_546_object = Obj(); // 0xeba PushV
	var_546_object = var_488_object; // 0xebb Mov
	func_4152(); // 0xebc Call
	StopDialog(var_494_object); // 0xebe Func
	GetReturnValue(var_496_int); // 0xec0 ObjFunc
	var_487_int = var_496_int; // 0xec2 Mov
	return 8; // 0xec3 Return
}


func_4999(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); // 0x1387 PushV
	GetMainOutdoorScene(var_49_object); // 0x1388 Func
	var_51_bool = var_49_object == 0; // 0x138a NullEq
	if(var_51_bool == 0) goto Label_5010; // 0x138b JumpB
	var_52_string = "Can't find main outdoor scene"; // 0x138c PushS
	Trace(var_52_string); // 0x138d Func
	var_50_object = 0; // 0x138f SetNull
	var_46_object = var_50_object; // 0x1390 Mov
	return 4; // 0x1391 Return
	
Label_5010:
	GetMap(var_50_object); // 0x1392 ObjFunc
	var_46_object = var_50_object; // 0x1394 Mov
	return 4; // 0x1395 Return
}


func_3464(var_0_object, var_1_object, var_2_object, var_3_object, var_450_object, var_451_object)
{
	var_0_object = var_451_object; // 0xd89 TMov
	var_1_object = var_450_object; // 0xd8a TMov
	var_3_object = 0; // 0xd8b TMovB
	var_456_int = 1; // 0xd8c PushI
	if(var_456_int == 0) goto Label_3497; // 0xd8d JumpB
	var_457_string = ""; // 0xd8e PushV
	var_457_string = "Neutral"; // 0xd8f MovS
	func_3527(var_451_object, var_457_string); // 0xd90 Call
	var_462_int = 9840; // 0xd92 PushI
	SetMessage(var_462_int); // 0xd93 TObjFunc
	ClearReplies(); // 0xd95 TObjFunc
	var_463_bool = 0; var_464_object = Obj(); // 0xd97 PushV
	var_464_object = var_1_object; // 0xd98 MovT
	func_4909(var_464_object); // 0xd99 Call
	if(var_463_bool == 0) goto Label_3489; // 0xd9b JumpB
	var_469_int = 9841; // 0xd9c PushI
	var_470_int = 10821; // 0xd9d PushI
	var_471_int = 10840; // 0xd9e PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0xd9f TObjFunc
	
Label_3489:
	var_472_int = 11259; // 0xda1 PushI
	var_473_int = -1; // 0xda2 PushI
	var_474_int = 12449; // 0xda3 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0xda4 TObjFunc
	goto Label_3497; // 0xda6 Jump
	
Label_3497:
	var_475_bool = 0; // 0xda9 PushV
	func_4256(var_475_bool); // 0xdaa Call
	if(var_475_bool == 0) goto Label_3512; // 0xdac JumpB
	
Label_3501:
	lshWaitForAnimEnd(); // 0xdad Func
	var_476_object = var_3_object; // 0xdaf PushT
	if(var_476_object == 0) goto Label_3506; // 0xdb0 JumpB
	goto Label_3511; // 0xdb1 Jump
	
Label_3511:
	goto Label_3526; // 0xdb7 Jump
	
Label_3526:
	return 0; // 0xdc6 Return
	
Label_3506:
	var_477_string = ""; // 0xdb2 PushV
	var_477_string = var_2_object; // 0xdb3 MovT
	func_4156(var_477_string); // 0xdb4 Call
	goto Label_3501; // 0xdb6 Jump
	
Label_3512:
	var_478_string = "all"; // 0xdb8 PushS
	var_479_string = "idle"; // 0xdb9 PushS
	PlayAnimation(var_478_string, var_479_string); // 0xdba Func
	
Label_3516:
	WaitForAnimEnd(); // 0xdbc Func
	var_480_object = var_3_object; // 0xdbe PushT
	if(var_480_object == 0) goto Label_3521; // 0xdbf JumpB
	goto Label_3526; // 0xdc0 Jump
	
Label_3521:
	var_481_string = "all"; // 0xdc1 PushS
	var_482_string = "idle"; // 0xdc2 PushS
	PlayAnimation(var_481_string, var_482_string); // 0xdc3 Func
	goto Label_3516; // 0xdc5 Jump
}


func_4237(var_32_bool, var_33_int)
{
	var_34_int = 0; // 0x108e PushV
	func_4228(var_34_int); // 0x108f Call
	var_32_bool = var_34_int == var_33_int; // 0x1091 Eq2
	return 0; // 0x1092 Return
}


func_4753(var_251_bool)
{
	var_253_int = 0; var_254_string = ""; // 0x1292 PushV
	var_254_string = "ood2Eva3"; // 0x1293 MovS
	func_4191(var_253_int, var_254_string); // 0x1294 Call
	var_255_int = 0; // 0x1296 PushI
	var_256_bool = var_253_int == var_255_int; // 0x1297 Eq
	if(var_256_bool == 0) goto Label_4763; // 0x1298 JumpB
	var_251_bool = 1; // 0x1299 MovB
	return 0; // 0x129a Return
	
Label_4763:
	var_251_bool = 0; // 0x129b MovB
	return 0; // 0x129c Return
}


func_4243(var_618_bool)
{
	var_619_bool = 0; var_620_bool = 0; // 0x1093 PushV
	var_621_string = ""; // 0x1094 PushV
	var_621_string = "No"; // 0x1095 MovS
	func_4156(var_621_string); // 0x1096 Call
	lshWaitForAnimEnd(var_620_bool); // 0x1098 Func
	var_618_bool = var_620_bool; // 0x109a Mov
	return 2; // 0x109b Return
}


func_5016(var_109_object, var_110_string, var_111_float)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0; // 0x1398 PushV
	GetMainOutdoorScene(var_119_object); // 0x1399 Func
	var_121_bool = var_119_object == 0; // 0x139b NullEq
	if(var_121_bool == 0) goto Label_5025; // 0x139c JumpB
	var_122_string = "Can't find main outdoor scene"; // 0x139d PushS
	Trace(var_122_string); // 0x139e Func
	return 8; // 0x13a0 Return
	
Label_5025:
	GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector); // 0x13a1 ObjFunc
	var_123_bool = var_120_bool == 0; // 0x13a3 Not
	if(var_123_bool == 0) goto Label_5035; // 0x13a4 JumpB
	var_124_string = "Warning: outdoor scene locator "; // 0x13a5 PushS
	var_125_int = var_124_string + var_110_string; // 0x13a6 Add
	var_126_string = " doesnt exist"; // 0x13a7 PushS
	var_127_int = var_125_int + var_126_string; // 0x13a8 Add
	Trace(var_127_int); // 0x13a9 Func
	
Label_5035:
	GetMap(var_109_object); // 0x13ab ObjFunc
	var_128_bool = var_109_object == 0; // 0x13ad NullEq
	if(var_128_bool == 0) goto Label_5043; // 0x13ae JumpB
	var_129_string = "Can't find map"; // 0x13af PushS
	Trace(var_129_string); // 0x13b0 Func
	return 8; // 0x13b2 Return
	
Label_5043:
	var_130_float = GetByIndex(var_117_cvector, 0); // 0x13b3 PushE
	var_131_float = GetByIndex(var_117_cvector, 2); // 0x13b4 PushE
	SetMapParams(var_130_float, var_131_float, var_111_float); // 0x13b5 ObjFunc
	return 8; // 0x13b7 Return
}


func_4507()
{
	var_410_string = "KnowStation"; // 0x119c PushS
	var_411_int = 1; // 0x119d PushI
	SetVariable(var_410_string, var_411_int); // 0x119e Func
	return 0; // 0x11a0 Return
}


func_4252(var_98_int)
{
	var_98_int = 2858; // 0x109c MovI
	return 0; // 0x109d Return
}


func_4765(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0x129e PushV
	var_270_string = "ood2Eva4"; // 0x129f MovS
	func_4191(var_269_int, var_270_string); // 0x12a0 Call
	var_271_int = 0; // 0x12a2 PushI
	var_272_bool = var_269_int == var_271_int; // 0x12a3 Eq
	if(var_272_bool == 0) goto Label_4775; // 0x12a4 JumpB
	var_267_bool = 1; // 0x12a5 MovB
	return 0; // 0x12a6 Return
	
Label_4775:
	var_267_bool = 0; // 0x12a7 MovB
	return 0; // 0x12a8 Return
}


func_4254(var_99_string)
{
	var_99_string = "ui/NPC_Eva.png"; // 0x109e MovS
	return 0; // 0x109f Return
}


func_4256(var_33_bool)
{
	var_33_bool = 1; // 0x10a0 MovB
	return 0; // 0x10a1 Return
}


func_4513()
{
	var_149_string = "playsound"; // 0x11a2 PushS
	var_150_string = "mapmark"; // 0x11a3 PushS
	TriggerWorld(var_149_string, var_150_string); // 0x11a4 Func
	return 0; // 0x11a6 Return
}


func_4258()
{
	var_130_string = "ood1Eva3"; // 0x10a3 PushS
	var_131_int = 1; // 0x10a4 PushI
	SetVariable(var_130_string, var_131_int); // 0x10a5 Func
	return 0; // 0x10a7 Return
}


func_421(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; // 0x1a5 PushV
	var_0_object = var_47_object; // 0x1a6 TMov
	var_57_bool = 0; var_58_object = Obj(); // 0x1a7 PushV
	var_58_object = var_47_object; // 0x1a8 Mov
	func_4096(var_58_object); // 0x1a9 Call
	var_97_bool = var_57_bool == 0; // 0x1ab Not
	if(var_97_bool == 0) goto Label_431; // 0x1ac JumpB
	var_46_int = -2; // 0x1ad MovI
	return 8; // 0x1ae Return
	
Label_431:
	CreateDialog(var_53_object); // 0x1af Func
	var_98_int = 0; // 0x1b1 PushV
	func_4252(var_98_int); // 0x1b2 Call
	SetNPCName(var_98_int); // 0x1b4 ObjFunc
	var_99_string = ""; // 0x1b6 PushV
	func_4254(var_99_string); // 0x1b7 Call
	SetPhoto(var_99_string); // 0x1b9 ObjFunc
	var_100_int = 0; // 0x1bb PushV
	func_5049(var_100_int); // 0x1bc Call
	SetPlayerName(var_100_int); // 0x1be ObjFunc
	var_55_int = -1; // 0x1c0 MovI
	IsOverrideActive(var_54_bool); // 0x1c1 Func
	var_108_bool = var_54_bool; // 0x1c3 Push
	if(var_108_bool == 0) goto Label_455; // 0x1c4 JumpB
	var_46_int = -2; // 0x1c5 MovI
	return 8; // 0x1c6 Return
	
Label_455:
	DoDialog(var_53_object); // 0x1c7 Func
	var_109_object = Obj(); var_110_object = Obj(); // 0x1c9 PushV
	var_109_object = var_47_object; // 0x1ca Mov
	var_110_object = var_53_object; // 0x1cb Mov
	TaskCall(5); // 0x1cc TaskCall
	func_484(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object); // 0x1cd Call
	TaskReturn(); // 0x1ce TaskReturn
	IsDialogEnd(var_56_bool); // 0x1d0 ObjFunc
	
Label_466:
	var_192_bool = var_56_bool == 0; // 0x1d2 Not
	if(var_192_bool == 0) goto Label_473; // 0x1d3 JumpB
	sync(); // 0x1d4 Func
	IsDialogEnd(var_56_bool); // 0x1d6 ObjFunc
	goto Label_466; // 0x1d8 Jump
	
Label_473:
	var_193_object = Obj(); // 0x1d9 PushV
	var_193_object = var_47_object; // 0x1da Mov
	func_4152(); // 0x1db Call
	StopDialog(var_53_object); // 0x1dd Func
	GetReturnValue(var_55_int); // 0x1df ObjFunc
	var_46_int = var_55_int; // 0x1e1 Mov
	return 8; // 0x1e2 Return
}


func_4519()
{
	var_50_string = "ood1EvaIntro1"; // 0x11a8 PushS
	var_51_int = 1; // 0x11a9 PushI
	SetVariable(var_50_string, var_51_int); // 0x11aa Func
	return 0; // 0x11ac Return
}


func_4264()
{
	var_431_string = "KnowKaterina"; // 0x10a9 PushS
	var_432_int = 1; // 0x10aa PushI
	SetVariable(var_431_string, var_432_int); // 0x10ab Func
	return 0; // 0x10ad Return
}


func_4777(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x12aa PushV
	var_276_string = "d2q02"; // 0x12ab MovS
	func_4191(var_275_int, var_276_string); // 0x12ac Call
	var_277_int = 1000; // 0x12ae PushI
	var_278_bool = var_275_int == var_277_int; // 0x12af Eq
	if(var_278_bool == 0) goto Label_4787; // 0x12b0 JumpB
	var_273_bool = 1; // 0x12b1 MovB
	return 0; // 0x12b2 Return
	
Label_4787:
	var_273_bool = 0; // 0x12b3 MovB
	return 0; // 0x12b4 Return
}


func_4525()
{
	var_222_string = "KnowJulia"; // 0x11ae PushS
	var_223_int = 1; // 0x11af PushI
	SetVariable(var_222_string, var_223_int); // 0x11b0 Func
	return 0; // 0x11b2 Return
}


func_4270()
{
	var_449_string = "KnowKapella"; // 0x10af PushS
	var_450_int = 1; // 0x10b0 PushI
	SetVariable(var_449_string, var_450_int); // 0x10b1 Func
	return 0; // 0x10b3 Return
}


func_4531()
{
	var_240_string = "KnowNevod"; // 0x11b4 PushS
	var_241_int = 1; // 0x11b5 PushI
	SetVariable(var_240_string, var_241_int); // 0x11b6 Func
	return 0; // 0x11b8 Return
}


func_4276()
{
	var_599_string = "KnowTheater"; // 0x10b5 PushS
	var_600_int = 1; // 0x10b6 PushI
	SetVariable(var_599_string, var_600_int); // 0x10b7 Func
	return 0; // 0x10b9 Return
}


func_4789(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x12b6 PushV
	var_244_string = "d2q02"; // 0x12b7 MovS
	func_4191(var_243_int, var_244_string); // 0x12b8 Call
	var_245_int = 3; // 0x12ba PushI
	var_246_bool = var_243_int == var_245_int; // 0x12bb Eq
	if(var_246_bool == 0) goto Label_4799; // 0x12bc JumpB
	var_241_bool = 1; // 0x12bd MovB
	return 0; // 0x12be Return
	
Label_4799:
	var_241_bool = 0; // 0x12bf MovB
	return 0; // 0x12c0 Return
}


func_5049(var_100_int)
{
	var_101_int = 0; var_102_int = 0; // 0x13b9 PushV
	var_103_string = "player"; // 0x13ba PushS
	GetVariable(var_103_string, var_102_int); // 0x13bb Func
	var_104_int = 0; // 0x13bd PushI
	var_105_bool = var_102_int == var_104_int; // 0x13be Eq
	if(var_105_bool == 0) goto Label_5059; // 0x13bf JumpB
	var_100_int = 200001; // 0x13c0 MovI
	return 2; // 0x13c1 Return
	
Label_5059:
	var_106_int = 1; // 0x13c3 PushI
	var_107_bool = var_102_int == var_106_int; // 0x13c4 Eq
	if(var_107_bool == 0) goto Label_5064; // 0x13c5 JumpB
	var_100_int = 200002; // 0x13c6 MovI
	return 2; // 0x13c7 Return
	
Label_5064:
	var_100_int = 200003; // 0x13c8 MovI
	return 2; // 0x13c9 Return
}


func_4282()
{
	var_382_string = "KnowSquareMost"; // 0x10bb PushS
	var_383_int = 1; // 0x10bc PushI
	SetVariable(var_382_string, var_383_int); // 0x10bd Func
	return 0; // 0x10bf Return
}


func_4537()
{
	var_390_string = "KnowViktor"; // 0x11ba PushS
	var_391_int = 1; // 0x11bb PushI
	SetVariable(var_390_string, var_391_int); // 0x11bc Func
	return 0; // 0x11be Return
}


func_1469(var_2_object, var_191_string)
{
	var_192_bool = 0; // 0x5be PushV
	func_4256(var_192_bool); // 0x5bf Call
	var_193_bool = var_192_bool == 0; // 0x5c1 Not
	if(var_193_bool == 0) goto Label_1476; // 0x5c2 JumpB
	return 0; // 0x5c3 Return
	
Label_1476:
	var_194_bool = var_191_string == var_2_object; // 0x5c4 Eq
	if(var_194_bool == 0) goto Label_1479; // 0x5c5 JumpB
	return 0; // 0x5c6 Return
	
Label_1479:
	var_195_string = ""; // 0x5c7 PushV
	var_195_string = var_191_string; // 0x5c8 Mov
	func_4156(var_195_string); // 0x5c9 Call
	var_2_object = var_191_string; // 0x5cb TMov
	return 0; // 0x5cc Return
}


func_4543()
{
	var_171_string = "ood1Eva4"; // 0x11c0 PushS
	var_172_int = 1; // 0x11c1 PushI
	SetVariable(var_171_string, var_172_int); // 0x11c2 Func
	return 0; // 0x11c4 Return
}


func_4288()
{
	var_177_string = "ood1Eva5"; // 0x10c1 PushS
	var_178_int = 1; // 0x10c2 PushI
	SetVariable(var_177_string, var_178_int); // 0x10c3 Func
	return 0; // 0x10c5 Return
}


func_4801(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0x12c2 PushV
	var_260_string = "d2q02"; // 0x12c3 MovS
	func_4191(var_259_int, var_260_string); // 0x12c4 Call
	var_261_int = 5; // 0x12c6 PushI
	var_262_bool = var_259_int == var_261_int; // 0x12c7 Eq
	if(var_262_bool == 0) goto Label_4811; // 0x12c8 JumpB
	var_257_bool = 1; // 0x12c9 MovB
	return 0; // 0x12ca Return
	
Label_4811:
	var_257_bool = 0; // 0x12cb MovB
	return 0; // 0x12cc Return
}


func_3781(var_0_object, var_1_object, var_2_object, var_3_object, var_505_object, var_506_object)
{
	var_0_object = var_506_object; // 0xec6 TMov
	var_1_object = var_505_object; // 0xec7 TMov
	var_3_object = 0; // 0xec8 TMovB
	var_511_int = 1; // 0xec9 PushI
	if(var_511_int == 0) goto Label_3823; // 0xeca JumpB
	var_512_string = ""; // 0xecb PushV
	var_512_string = "Neutral"; // 0xecc MovS
	func_3853(var_506_object, var_512_string); // 0xecd Call
	var_517_int = 11255; // 0xecf PushI
	SetMessage(var_517_int); // 0xed0 TObjFunc
	ClearReplies(); // 0xed2 TObjFunc
	var_518_bool = 0; // 0xed4 PushV
	var_518_bool = 0; // 0xed5 MovB
	var_519_bool = 0; var_520_object = Obj(); // 0xed6 PushV
	var_520_object = var_1_object; // 0xed7 MovT
	func_4933(var_520_object); // 0xed8 Call
	if(var_519_bool == 0) goto Label_3809; // 0xeda JumpB
	var_525_bool = 0; var_526_object = Obj(); // 0xedb PushV
	var_526_object = var_1_object; // 0xedc MovT
	func_4921(var_526_object); // 0xedd Call
	if(var_525_bool == 0) goto Label_3809; // 0xedf JumpB
	var_518_bool = 1; // 0xee0 MovB
	
Label_3809:
	if(var_518_bool == 0) goto Label_3815; // 0xee1 JumpB
	var_531_int = 11257; // 0xee2 PushI
	var_532_int = 12448; // 0xee3 PushI
	var_533_int = 12447; // 0xee4 PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0xee5 TObjFunc
	
Label_3815:
	var_534_int = 11256; // 0xee7 PushI
	var_535_int = -1; // 0xee8 PushI
	var_536_int = 12446; // 0xee9 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0xeea TObjFunc
	goto Label_3823; // 0xeec Jump
	
Label_3823:
	var_537_bool = 0; // 0xeef PushV
	func_4256(var_537_bool); // 0xef0 Call
	if(var_537_bool == 0) goto Label_3838; // 0xef2 JumpB
	
Label_3827:
	lshWaitForAnimEnd(); // 0xef3 Func
	var_538_object = var_3_object; // 0xef5 PushT
	if(var_538_object == 0) goto Label_3832; // 0xef6 JumpB
	goto Label_3837; // 0xef7 Jump
	
Label_3837:
	goto Label_3852; // 0xefd Jump
	
Label_3852:
	return 0; // 0xf0c Return
	
Label_3832:
	var_539_string = ""; // 0xef8 PushV
	var_539_string = var_2_object; // 0xef9 MovT
	func_4156(var_539_string); // 0xefa Call
	goto Label_3827; // 0xefc Jump
	
Label_3838:
	var_540_string = "all"; // 0xefe PushS
	var_541_string = "idle"; // 0xeff PushS
	PlayAnimation(var_540_string, var_541_string); // 0xf00 Func
	
Label_3842:
	WaitForAnimEnd(); // 0xf02 Func
	var_542_object = var_3_object; // 0xf04 PushT
	if(var_542_object == 0) goto Label_3847; // 0xf05 JumpB
	goto Label_3852; // 0xf06 Jump
	
Label_3847:
	var_543_string = "all"; // 0xf07 PushS
	var_544_string = "idle"; // 0xf08 PushS
	PlayAnimation(var_543_string, var_544_string); // 0xf09 Func
	goto Label_3842; // 0xf0b Jump
}


func_4294()
{
	var_187_string = "ood1Eva6"; // 0x10c7 PushS
	var_188_int = 1; // 0x10c8 PushI
	SetVariable(var_187_string, var_188_int); // 0x10c9 Func
	return 0; // 0x10cb Return
}


func_4549()
{
	var_120_string = "ood1EvaIntro2"; // 0x11c6 PushS
	var_121_int = 1; // 0x11c7 PushI
	SetVariable(var_120_string, var_121_int); // 0x11c8 Func
	return 0; // 0x11ca Return
}


func_3527(var_2_object, var_42_string)
{
	var_43_bool = 0; // 0xdc8 PushV
	func_4256(var_43_bool); // 0xdc9 Call
	var_44_bool = var_43_bool == 0; // 0xdcb Not
	if(var_44_bool == 0) goto Label_3534; // 0xdcc JumpB
	return 0; // 0xdcd Return
	
Label_3534:
	var_45_bool = var_42_string == var_2_object; // 0xdce Eq
	if(var_45_bool == 0) goto Label_3537; // 0xdcf JumpB
	return 0; // 0xdd0 Return
	
Label_3537:
	var_46_string = ""; // 0xdd1 PushV
	var_46_string = var_42_string; // 0xdd2 Mov
	func_4156(var_46_string); // 0xdd3 Call
	var_2_object = var_42_string; // 0xdd5 TMov
	return 0; // 0xdd6 Return
}


func_5066()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x13ca PushV
	var_67_string = "Adding diary entry"; // 0x13cb PushS
	Trace(var_67_string); // 0x13cc Func
	var_68_int = 11; // 0x13ce PushI
	var_69_int = 2; // 0x13cf PushI
	var_70_int = 3095; // 0x13d0 PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x13d1 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x13d3 PushV
	var_72_object = var_66_object; // 0x13d4 Mov
	var_73_int = -1; // 0x13d5 MovI
	func_4970(var_71_bool, var_72_object, var_73_int); // 0x13d6 Call
	return 2; // 0x13d8 Return
}


func_4555()
{
	var_104_string = "ood1Eva1"; // 0x11cc PushS
	var_105_int = 1; // 0x11cd PushI
	SetVariable(var_104_string, var_105_int); // 0x11ce Func
	return 0; // 0x11d0 Return
}


func_204(var_2_object, var_55_string)
{
	var_56_bool = 0; // 0xcd PushV
	func_4256(var_56_bool); // 0xce Call
	var_57_bool = var_56_bool == 0; // 0xd0 Not
	if(var_57_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_58_bool = var_55_string == var_2_object; // 0xd3 Eq
	if(var_58_bool == 0) goto Label_214; // 0xd4 JumpB
	return 0; // 0xd5 Return
	
Label_214:
	var_59_string = ""; // 0xd6 PushV
	var_59_string = var_55_string; // 0xd7 Mov
	func_4156(var_59_string); // 0xd8 Call
	var_2_object = var_55_string; // 0xda TMov
	return 0; // 0xdb Return
}


func_4300()
{
	var_82_object = Obj(); var_83_string = ""; var_84_float = 0; // 0x10cd PushV
	var_85_object = Obj(); // 0x10ce PushV
	func_4999(var_85_object); // 0x10cf Call
	var_82_object = var_85_object; // 0x10d0 Mov
	var_83_string = "pt_map_georg"; // 0x10d2 MovS
	var_84_float = 2; // 0x10d3 MovI
	func_5016(var_82_object, var_83_string, var_84_float); // 0x10d4 Call
	var_105_object = Obj(); // 0x10d6 PushV
	func_4999(var_105_object); // 0x10d7 Call
	ShowMap(var_105_object); // 0x10d9 ObjFunc
	return 0; // 0x10db Return
}


func_4813(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x12ce PushV
	var_221_string = "ood1Eva1"; // 0x12cf MovS
	func_4191(var_220_int, var_221_string); // 0x12d0 Call
	var_222_int = 0; // 0x12d2 PushI
	var_223_bool = var_220_int == var_222_int; // 0x12d3 Eq
	if(var_223_bool == 0) goto Label_4823; // 0x12d4 JumpB
	var_218_bool = 1; // 0x12d5 MovB
	return 0; // 0x12d6 Return
	
Label_4823:
	var_218_bool = 0; // 0x12d7 MovB
	return 0; // 0x12d8 Return
}


func_4561()
{
	var_38_string = "ood1Eva2"; // 0x11d2 PushS
	var_39_int = 1; // 0x11d3 PushI
	SetVariable(var_38_string, var_39_int); // 0x11d4 Func
	return 0; // 0x11d6 Return
}


func_4567()
{
	var_138_string = "KnowEva"; // 0x11d8 PushS
	var_139_int = 1; // 0x11d9 PushI
	SetVariable(var_138_string, var_139_int); // 0x11da Func
	return 0; // 0x11dc Return
}


func_4825(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x12da PushV
	var_240_string = "ood1Eva4"; // 0x12db MovS
	func_4191(var_239_int, var_240_string); // 0x12dc Call
	var_241_int = 0; // 0x12de PushI
	var_242_bool = var_239_int == var_241_int; // 0x12df Eq
	if(var_242_bool == 0) goto Label_4835; // 0x12e0 JumpB
	var_237_bool = 1; // 0x12e1 MovB
	return 0; // 0x12e2 Return
	
Label_4835:
	var_237_bool = 0; // 0x12e3 MovB
	return 0; // 0x12e4 Return
}


func_5082()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x13da PushV
	var_92_string = "Adding diary entry"; // 0x13db PushS
	Trace(var_92_string); // 0x13dc Func
	var_93_int = 57; // 0x13de PushI
	var_94_int = 2; // 0x13df PushI
	var_95_int = 12139; // 0x13e0 PushI
	CreateDiaryEntry(var_91_object, var_93_int, var_94_int, var_95_int); // 0x13e1 Func
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0; // 0x13e3 PushV
	var_97_object = var_91_object; // 0x13e4 Mov
	var_98_int = 11; // 0x13e5 MovI
	func_4970(var_96_bool, var_97_object, var_98_int); // 0x13e6 Call
	return 2; // 0x13e8 Return
}


func_4316()
{
	var_322_string = "KnowUzly"; // 0x10dd PushS
	var_323_int = 1; // 0x10de PushI
	SetVariable(var_322_string, var_323_int); // 0x10df Func
	return 0; // 0x10e1 Return
}


func_4573()
{
	var_394_string = "KnowGeorg"; // 0x11de PushS
	var_395_int = 1; // 0x11df PushI
	SetVariable(var_394_string, var_395_int); // 0x11e0 Func
	return 0; // 0x11e2 Return
}


func_2785(var_2_object, var_210_string)
{
	var_211_bool = 0; // 0xae2 PushV
	func_4256(var_211_bool); // 0xae3 Call
	var_212_bool = var_211_bool == 0; // 0xae5 Not
	if(var_212_bool == 0) goto Label_2792; // 0xae6 JumpB
	return 0; // 0xae7 Return
	
Label_2792:
	var_213_bool = var_210_string == var_2_object; // 0xae8 Eq
	if(var_213_bool == 0) goto Label_2795; // 0xae9 JumpB
	return 0; // 0xaea Return
	
Label_2795:
	var_214_string = ""; // 0xaeb PushV
	var_214_string = var_210_string; // 0xaec Mov
	func_4156(var_214_string); // 0xaed Call
	var_2_object = var_210_string; // 0xaef TMov
	return 0; // 0xaf0 Return
}


func_4322()
{
	var_38_string = "ood2Eva1"; // 0x10e3 PushS
	var_39_int = 1; // 0x10e4 PushI
	SetVariable(var_38_string, var_39_int); // 0x10e5 Func
	return 0; // 0x10e7 Return
}


func_4579()
{
	var_53_string = "ood6Eva1"; // 0x11e4 PushS
	var_54_int = 1; // 0x11e5 PushI
	SetVariable(var_53_string, var_54_int); // 0x11e6 Func
	return 0; // 0x11e8 Return
}


func_484(var_0_object, var_1_object, var_2_object, var_3_object, var_109_object, var_110_object)
{
	var_0_object = var_110_object; // 0x1e5 TMov
	var_1_object = var_109_object; // 0x1e6 TMov
	var_3_object = 0; // 0x1e7 TMovB
	var_115_int = 1; // 0x1e8 PushI
	if(var_115_int == 0) goto Label_592; // 0x1e9 JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x1ea PushV
	var_117_object = var_1_object; // 0x1eb MovT
	func_4669(var_117_object); // 0x1ec Call
	if(var_116_bool == 0) goto Label_525; // 0x1ee JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x1ef PushV
	var_122_object = var_1_object; // 0x1f0 MovT
	var_123_object = var_0_object; // 0x1f1 MovT
	func_4567(); // 0x1f2 Call
	var_126_string = ""; // 0x1f4 PushV
	var_126_string = "Neutral"; // 0x1f5 MovS
	func_622(var_110_object, var_126_string); // 0x1f6 Call
	var_141_int = 4496; // 0x1f8 PushI
	SetMessage(var_141_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_142_int = 4501; // 0x1fd PushI
	var_143_int = 4905; // 0x1fe PushI
	var_144_int = 4904; // 0x1ff PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x200 TObjFunc
	var_145_int = 4517; // 0x202 PushI
	var_146_int = 4923; // 0x203 PushI
	var_147_int = 4922; // 0x204 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x205 TObjFunc
	var_148_int = 4521; // 0x207 PushI
	var_149_int = 4923; // 0x208 PushI
	var_150_int = 4928; // 0x209 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x20a TObjFunc
	goto Label_592; // 0x20c Jump
	
Label_592:
	var_151_bool = 0; // 0x250 PushV
	func_4256(var_151_bool); // 0x251 Call
	if(var_151_bool == 0) goto Label_607; // 0x253 JumpB
	
Label_596:
	lshWaitForAnimEnd(); // 0x254 Func
	var_152_object = var_3_object; // 0x256 PushT
	if(var_152_object == 0) goto Label_601; // 0x257 JumpB
	goto Label_606; // 0x258 Jump
	
Label_606:
	goto Label_621; // 0x25e Jump
	
Label_621:
	return 0; // 0x26d Return
	
Label_601:
	var_153_string = ""; // 0x259 PushV
	var_153_string = var_2_object; // 0x25a MovT
	func_4156(var_153_string); // 0x25b Call
	goto Label_596; // 0x25d Jump
	
Label_607:
	var_154_string = "all"; // 0x25f PushS
	var_155_string = "idle"; // 0x260 PushS
	PlayAnimation(var_154_string, var_155_string); // 0x261 Func
	
Label_611:
	WaitForAnimEnd(); // 0x263 Func
	var_156_object = var_3_object; // 0x265 PushT
	if(var_156_object == 0) goto Label_616; // 0x266 JumpB
	goto Label_621; // 0x267 Jump
	
Label_616:
	var_157_string = "all"; // 0x268 PushS
	var_158_string = "idle"; // 0x269 PushS
	PlayAnimation(var_157_string, var_158_string); // 0x26a Func
	goto Label_611; // 0x26c Jump
	
Label_525:
	var_159_bool = 0; var_160_object = Obj(); // 0x20d PushV
	var_160_object = var_1_object; // 0x20e MovT
	func_4717(var_160_object); // 0x20f Call
	if(var_159_bool == 0) goto Label_560; // 0x211 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x212 PushV
	var_165_object = var_1_object; // 0x213 MovT
	var_166_object = var_0_object; // 0x214 MovT
	func_4567(); // 0x215 Call
	var_167_string = ""; // 0x217 PushV
	var_167_string = "Neutral"; // 0x218 MovS
	func_622(var_110_object, var_167_string); // 0x219 Call
	var_168_int = 4590; // 0x21b PushI
	SetMessage(var_168_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_169_int = 4591; // 0x220 PushI
	var_170_int = 5013; // 0x221 PushI
	var_171_int = 5012; // 0x222 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x223 TObjFunc
	var_172_int = 4607; // 0x225 PushI
	var_173_int = 5015; // 0x226 PushI
	var_174_int = 5032; // 0x227 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x228 TObjFunc
	var_175_int = 4608; // 0x22a PushI
	var_176_int = 5015; // 0x22b PushI
	var_177_int = 5034; // 0x22c PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x22d TObjFunc
	goto Label_592; // 0x22f Jump
	
Label_560:
	var_178_object = Obj(); var_179_object = Obj(); // 0x230 PushV
	var_178_object = var_1_object; // 0x231 MovT
	var_179_object = var_0_object; // 0x232 MovT
	func_4444(); // 0x233 Call
	var_182_object = Obj(); var_183_object = Obj(); // 0x235 PushV
	var_182_object = var_1_object; // 0x236 MovT
	var_183_object = var_0_object; // 0x237 MovT
	func_4567(); // 0x238 Call
	var_184_string = ""; // 0x23a PushV
	var_184_string = "Neutral"; // 0x23b MovS
	func_622(var_110_object, var_184_string); // 0x23c Call
	var_185_int = 4568; // 0x23e PushI
	SetMessage(var_185_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_186_int = 4569; // 0x243 PushI
	var_187_int = 4989; // 0x244 PushI
	var_188_int = 4988; // 0x245 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x246 TObjFunc
	var_189_int = 4586; // 0x248 PushI
	var_190_int = 5007; // 0x249 PushI
	var_191_int = 5006; // 0x24a PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x24b TObjFunc
	goto Label_592; // 0x24d Jump
}


func_4837(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x12e6 PushV
	var_210_string = "ood1Eva2"; // 0x12e7 MovS
	func_4191(var_209_int, var_210_string); // 0x12e8 Call
	var_213_int = 0; // 0x12ea PushI
	var_214_bool = var_209_int == var_213_int; // 0x12eb Eq
	if(var_214_bool == 0) goto Label_4847; // 0x12ec JumpB
	var_207_bool = 1; // 0x12ed MovB
	return 0; // 0x12ee Return
	
Label_4847:
	var_207_bool = 0; // 0x12ef MovB
	return 0; // 0x12f0 Return
}


func_4328()
{
	var_155_string = "ood2Eva2"; // 0x10e9 PushS
	var_156_int = 1; // 0x10ea PushI
	SetVariable(var_155_string, var_156_int); // 0x10eb Func
	return 0; // 0x10ed Return
}


func_4585()
{
	var_386_string = "KnowMaria"; // 0x11ea PushS
	var_387_int = 1; // 0x11eb PushI
	SetVariable(var_386_string, var_387_int); // 0x11ec Func
	return 0; // 0x11ee Return
}


func_5098()
{
	return 0; // 0x13ea Return
}


func_5099(var_31_object)
{
	var_32_bool = 0; var_33_int = 0; // 0x13ec PushV
	var_33_int = 1; // 0x13ed MovI
	func_4237(var_32_bool, var_33_int); // 0x13ee Call
	if(var_32_bool == 0) goto Label_5126; // 0x13f0 JumpB
	var_40_int = 0; var_41_string = ""; // 0x13f1 PushV
	var_41_string = "d1q01"; // 0x13f2 MovS
	func_4191(var_40_int, var_41_string); // 0x13f3 Call
	var_44_int = 0; // 0x13f5 PushI
	var_45_bool = var_40_int == var_44_int; // 0x13f6 Eq
	if(var_45_bool == 0) goto Label_5119; // 0x13f7 JumpB
	var_46_int = 0; var_47_object = Obj(); // 0x13f8 PushV
	var_47_object = var_31_object; // 0x13f9 Mov
	TaskCall(4); // 0x13fa TaskCall
	func_421(var_48_object, var_46_int, var_47_object); // 0x13fb Call
	TaskReturn(); // 0x13fc TaskReturn
	return 0; // 0x13fe Return
	
Label_5119:
	var_194_int = 0; var_195_object = Obj(); // 0x13ff PushV
	var_195_object = var_31_object; // 0x1400 Mov
	TaskCall(6); // 0x1401 TaskCall
	func_1266(var_196_object, var_194_int, var_195_object); // 0x1402 Call
	TaskReturn(); // 0x1403 TaskReturn
	return 0; // 0x1405 Return
	
Label_5126:
	var_313_bool = 0; var_314_int = 0; // 0x1406 PushV
	var_314_int = 2; // 0x1407 MovI
	func_4237(var_313_bool, var_314_int); // 0x1408 Call
	if(var_313_bool == 0) goto Label_5138; // 0x140a JumpB
	var_315_int = 0; var_316_object = Obj(); // 0x140b PushV
	var_316_object = var_31_object; // 0x140c Mov
	TaskCall(8); // 0x140d TaskCall
	func_2577(var_317_object, var_315_int, var_316_object); // 0x140e Call
	TaskReturn(); // 0x140f TaskReturn
	return 0; // 0x1411 Return
	
Label_5138:
	var_430_bool = 0; var_431_int = 0; // 0x1412 PushV
	var_431_int = 3; // 0x1413 MovI
	func_4237(var_430_bool, var_431_int); // 0x1414 Call
	if(var_430_bool == 0) goto Label_5150; // 0x1416 JumpB
	var_432_int = 0; var_433_object = Obj(); // 0x1417 PushV
	var_433_object = var_31_object; // 0x1418 Mov
	TaskCall(10); // 0x1419 TaskCall
	func_3401(var_434_object, var_432_int, var_433_object); // 0x141a Call
	TaskReturn(); // 0x141b TaskReturn
	return 0; // 0x141d Return
	
Label_5150:
	var_485_bool = 0; var_486_int = 0; // 0x141e PushV
	var_486_int = 4; // 0x141f MovI
	func_4237(var_485_bool, var_486_int); // 0x1420 Call
	if(var_485_bool == 0) goto Label_5162; // 0x1422 JumpB
	var_487_int = 0; var_488_object = Obj(); // 0x1423 PushV
	var_488_object = var_31_object; // 0x1424 Mov
	TaskCall(12); // 0x1425 TaskCall
	func_3718(var_489_object, var_487_int, var_488_object); // 0x1426 Call
	TaskReturn(); // 0x1427 TaskReturn
	return 0; // 0x1429 Return
	
Label_5162:
	var_547_bool = 0; var_548_int = 0; // 0x142a PushV
	var_548_int = 6; // 0x142b MovI
	func_4237(var_547_bool, var_548_int); // 0x142c Call
	if(var_547_bool == 0) goto Label_5174; // 0x142e JumpB
	var_549_int = 0; var_550_object = Obj(); // 0x142f PushV
	var_550_object = var_31_object; // 0x1430 Mov
	TaskCall(2); // 0x1431 TaskCall
	func_49(var_551_object, var_549_int, var_550_object); // 0x1432 Call
	TaskReturn(); // 0x1433 TaskReturn
	return 0; // 0x1435 Return
	
Label_5174:
	var_618_bool = 0; // 0x1436 PushV
	func_4243(var_618_bool); // 0x1437 Call
	return 0; // 0x1439 Return
}


func_4334()
{
	var_182_string = "ood2Eva3"; // 0x10ef PushS
	var_183_int = 1; // 0x10f0 PushI
	SetVariable(var_182_string, var_183_int); // 0x10f1 Func
	return 0; // 0x10f3 Return
}


func_4079(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0xfef PushV
	GetPosition(var_37_cvector); // 0xff0 ObjFunc
	GetPosition(var_38_cvector); // 0xff2 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0xff4 Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0xff5 PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0xff6 PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0xff7 Func
	var_31_bool = var_40_bool; // 0xff9 Mov
	return 8; // 0xffa Return
}


func_4591()
{
	var_578_string = "KnowMark"; // 0x11f0 PushS
	var_579_int = 1; // 0x11f1 PushI
	SetVariable(var_578_string, var_579_int); // 0x11f2 Func
	return 0; // 0x11f4 Return
}


func_4849(var_282_bool)
{
	var_284_int = 0; var_285_string = ""; // 0x12f2 PushV
	var_285_string = "d2q02"; // 0x12f3 MovS
	func_4191(var_284_int, var_285_string); // 0x12f4 Call
	var_286_int = 0; // 0x12f6 PushI
	var_287_bool = var_284_int == var_286_int; // 0x12f7 Eq
	if(var_287_bool == 0) goto Label_4859; // 0x12f8 JumpB
	var_282_bool = 1; // 0x12f9 MovB
	return 0; // 0x12fa Return
	
Label_4859:
	var_282_bool = 0; // 0x12fb MovB
	return 0; // 0x12fc Return
}


func_1266(var_0_object, var_194_int, var_195_object)
{
	var_197_object = Obj(); var_198_bool = 0; var_199_int = 0; var_200_bool = 0; var_201_object = Obj(); var_202_bool = 0; var_203_int = 0; var_204_bool = 0; // 0x4f2 PushV
	var_0_object = var_195_object; // 0x4f3 TMov
	var_205_bool = 0; var_206_object = Obj(); // 0x4f4 PushV
	var_206_object = var_195_object; // 0x4f5 Mov
	func_4096(var_206_object); // 0x4f6 Call
	var_207_bool = var_205_bool == 0; // 0x4f8 Not
	if(var_207_bool == 0) goto Label_1276; // 0x4f9 JumpB
	var_194_int = -2; // 0x4fa MovI
	return 8; // 0x4fb Return
	
Label_1276:
	CreateDialog(var_201_object); // 0x4fc Func
	var_208_int = 0; // 0x4fe PushV
	func_4252(var_208_int); // 0x4ff Call
	SetNPCName(var_208_int); // 0x501 ObjFunc
	var_209_string = ""; // 0x503 PushV
	func_4254(var_209_string); // 0x504 Call
	SetPhoto(var_209_string); // 0x506 ObjFunc
	var_210_int = 0; // 0x508 PushV
	func_5049(var_210_int); // 0x509 Call
	SetPlayerName(var_210_int); // 0x50b ObjFunc
	var_203_int = -1; // 0x50d MovI
	IsOverrideActive(var_202_bool); // 0x50e Func
	var_211_bool = var_202_bool; // 0x510 Push
	if(var_211_bool == 0) goto Label_1300; // 0x511 JumpB
	var_194_int = -2; // 0x512 MovI
	return 8; // 0x513 Return
	
Label_1300:
	DoDialog(var_201_object); // 0x514 Func
	var_212_object = Obj(); var_213_object = Obj(); // 0x516 PushV
	var_212_object = var_195_object; // 0x517 Mov
	var_213_object = var_201_object; // 0x518 Mov
	TaskCall(7); // 0x519 TaskCall
	func_1329(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object); // 0x51a Call
	TaskReturn(); // 0x51b TaskReturn
	IsDialogEnd(var_204_bool); // 0x51d ObjFunc
	
Label_1311:
	var_311_bool = var_204_bool == 0; // 0x51f Not
	if(var_311_bool == 0) goto Label_1318; // 0x520 JumpB
	sync(); // 0x521 Func
	IsDialogEnd(var_204_bool); // 0x523 ObjFunc
	goto Label_1311; // 0x525 Jump
	
Label_1318:
	var_312_object = Obj(); // 0x526 PushV
	var_312_object = var_195_object; // 0x527 Mov
	func_4152(); // 0x528 Call
	StopDialog(var_201_object); // 0x52a Func
	GetReturnValue(var_203_int); // 0x52c ObjFunc
	var_194_int = var_203_int; // 0x52e Mov
	return 8; // 0x52f Return
}


func_4340()
{
	var_188_string = "ood2Eva4"; // 0x10f5 PushS
	var_189_int = 1; // 0x10f6 PushI
	SetVariable(var_188_string, var_189_int); // 0x10f7 Func
	return 0; // 0x10f9 Return
}


func_4597()
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0; // 0x11f6 PushV
	var_112_object = Obj(); // 0x11f7 PushV
	func_4999(var_112_object); // 0x11f8 Call
	var_109_object = var_112_object; // 0x11f9 Mov
	var_110_string = "pt_map_andrei"; // 0x11fb MovS
	var_111_float = 2; // 0x11fc MovI
	func_5016(var_109_object, var_110_string, var_111_float); // 0x11fd Call
	var_132_object = Obj(); // 0x11ff PushV
	func_4999(var_132_object); // 0x1200 Call
	ShowMap(var_132_object); // 0x1202 ObjFunc
	return 0; // 0x1204 Return
}


func_4346()
{
	var_236_string = "KnowRebro"; // 0x10fb PushS
	var_237_int = 1; // 0x10fc PushI
	SetVariable(var_236_string, var_237_int); // 0x10fd Func
	return 0; // 0x10ff Return
}


func_4091(var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0xffb PushV
	IsLoaded(var_32_bool); // 0xffc Func
	var_30_bool = var_32_bool; // 0xffe Mov
	return 2; // 0xfff Return
}


func_4861(var_37_bool)
{
	var_39_int = 0; var_40_string = ""; // 0x12fe PushV
	var_40_string = "d6q01"; // 0x12ff MovS
	func_4191(var_39_int, var_40_string); // 0x1300 Call
	var_43_int = 1; // 0x1302 PushI
	var_44_bool = var_39_int == var_43_int; // 0x1303 Eq
	if(var_44_bool == 0) goto Label_4871; // 0x1304 JumpB
	var_37_bool = 1; // 0x1305 MovB
	return 0; // 0x1306 Return
	
Label_4871:
	var_37_bool = 0; // 0x1307 MovB
	return 0; // 0x1308 Return
}


