task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_int)
{
	var_20_bool = 0; // 0x1b PushV
	func_1833(var_20_bool); // 0x1c NEW_2
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
	var_21_int = 1; // 0xd6 PushI
	if(var_21_int == 0) goto Label_464; // 0xd7 JumpB
	func_1486(); // 0xd9 NEW_2
	var_23_int = 26755; // 0xdb PushI
	var_24_bool = var_20_int == var_23_int; // 0xdc Eq
	if(var_24_bool == 0) goto Label_227; // 0xdd JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0xde PushV
	var_25_object = var_1_object; // 0xdf MovT
	var_26_object = var_0_bool; // 0xe0 MovT
	func_1574(); // 0xe1 NEW_2
	
Label_227:
	var_29_int = 40957; // 0xe3 PushI
	var_30_bool = var_20_int == var_29_int; // 0xe4 Eq
	if(var_30_bool == 0) goto Label_235; // 0xe5 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xe6 PushV
	var_31_object = var_1_object; // 0xe7 MovT
	var_32_object = var_0_bool; // 0xe8 MovT
	func_1580(); // 0xe9 NEW_2
	
Label_235:
	var_72_int = 40958; // 0xeb PushI
	var_73_bool = var_20_int == var_72_int; // 0xec Eq
	if(var_73_bool == 0) goto Label_243; // 0xed JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xee PushV
	var_74_object = var_1_object; // 0xef MovT
	var_75_object = var_0_bool; // 0xf0 MovT
	func_1580(); // 0xf1 NEW_2
	
Label_243:
	var_76_int = 40959; // 0xf3 PushI
	var_77_bool = var_20_int == var_76_int; // 0xf4 Eq
	if(var_77_bool == 0) goto Label_251; // 0xf5 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0xf6 PushV
	var_78_object = var_1_object; // 0xf7 MovT
	var_79_object = var_0_bool; // 0xf8 MovT
	func_1580(); // 0xf9 NEW_2
	
Label_251:
	var_80_int = 26757; // 0xfb PushI
	var_81_bool = var_20_int == var_80_int; // 0xfc Eq
	if(var_81_bool == 0) goto Label_259; // 0xfd JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0xfe PushV
	var_82_object = var_1_object; // 0xff MovT
	var_83_object = var_0_bool; // 0x100 MovT
	func_1580(); // 0x101 NEW_2
	
Label_259:
	var_84_int = 26753; // 0x103 PushI
	var_85_bool = var_19_bool == var_84_int; // 0x104 Eq
	if(var_85_bool == 0) goto Label_301; // 0x105 JumpB
	var_86_string = ""; // 0x106 PushV
	var_86_string = "Neutral"; // 0x107 MovS
	func_191(var_20_int, var_86_string); // 0x108 NEW_2
	var_103_int = 525385; // 0x10a PushI
	SetMessage(var_103_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_104_bool = 0; // 0x10f PushV
	var_104_bool = 0; // 0x110 MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x111 PushV
	var_106_object = var_1_object; // 0x112 MovT
	func_1616(var_106_object); // 0x113 NEW_2
	if(var_105_bool == 0) goto Label_284; // 0x115 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x116 PushV
	var_114_object = var_1_object; // 0x117 MovT
	func_1628(var_114_object); // 0x118 NEW_2
	if(var_113_bool == 0) goto Label_284; // 0x11a JumpB
	var_104_bool = 1; // 0x11b MovB
	
Label_284:
	if(var_104_bool == 0) goto Label_290; // 0x11c JumpB
	var_119_int = 525387; // 0x11d PushI
	var_120_int = 40946; // 0x11e PushI
	var_121_int = 26755; // 0x11f PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x120 TObjFunc
	
Label_290:
	var_122_int = 539023; // 0x122 PushI
	var_123_int = -1; // 0x123 PushI
	var_124_int = 40966; // 0x124 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x125 TObjFunc
	var_125_int = 539024; // 0x127 PushI
	var_126_int = -1; // 0x128 PushI
	var_127_int = 40967; // 0x129 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_128_int = 40946; // 0x12d PushI
	var_129_bool = var_19_bool == var_128_int; // 0x12e Eq
	if(var_129_bool == 0) goto Label_324; // 0x12f JumpB
	var_130_string = ""; // 0x130 PushV
	var_130_string = "Neutral"; // 0x131 MovS
	func_191(var_20_int, var_130_string); // 0x132 NEW_2
	var_131_int = 539004; // 0x134 PushI
	SetMessage(var_131_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_132_int = 539005; // 0x139 PushI
	var_133_int = 40948; // 0x13a PushI
	var_134_int = 40947; // 0x13b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x13c TObjFunc
	var_135_int = 539022; // 0x13e PushI
	var_136_int = 40948; // 0x13f PushI
	var_137_int = 40964; // 0x140 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_138_int = 40948; // 0x144 PushI
	var_139_bool = var_19_bool == var_138_int; // 0x145 Eq
	if(var_139_bool == 0) goto Label_342; // 0x146 JumpB
	var_140_string = ""; // 0x147 PushV
	var_140_string = "Neutral"; // 0x148 MovS
	func_191(var_20_int, var_140_string); // 0x149 NEW_2
	var_141_int = 539006; // 0x14b PushI
	SetMessage(var_141_int); // 0x14c TObjFunc
	ClearReplies(); // 0x14e TObjFunc
	var_142_int = 539007; // 0x150 PushI
	var_143_int = 40950; // 0x151 PushI
	var_144_int = 40949; // 0x152 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x153 TObjFunc
	return 0; // 0x155 Return
	
Label_342:
	var_145_int = 40950; // 0x156 PushI
	var_146_bool = var_19_bool == var_145_int; // 0x157 Eq
	if(var_146_bool == 0) goto Label_365; // 0x158 JumpB
	var_147_string = ""; // 0x159 PushV
	var_147_string = "Neutral"; // 0x15a MovS
	func_191(var_20_int, var_147_string); // 0x15b NEW_2
	var_148_int = 539008; // 0x15d PushI
	SetMessage(var_148_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_149_int = 539009; // 0x162 PushI
	var_150_int = 40952; // 0x163 PushI
	var_151_int = 40951; // 0x164 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x165 TObjFunc
	var_152_int = 539021; // 0x167 PushI
	var_153_int = -1; // 0x168 PushI
	var_154_int = 40963; // 0x169 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x16a TObjFunc
	return 0; // 0x16c Return
	
Label_365:
	var_155_int = 40952; // 0x16d PushI
	var_156_bool = var_19_bool == var_155_int; // 0x16e Eq
	if(var_156_bool == 0) goto Label_388; // 0x16f JumpB
	var_157_string = ""; // 0x170 PushV
	var_157_string = "Neutral"; // 0x171 MovS
	func_191(var_20_int, var_157_string); // 0x172 NEW_2
	var_158_int = 539010; // 0x174 PushI
	SetMessage(var_158_int); // 0x175 TObjFunc
	ClearReplies(); // 0x177 TObjFunc
	var_159_int = 539011; // 0x179 PushI
	var_160_int = 40954; // 0x17a PushI
	var_161_int = 40953; // 0x17b PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x17c TObjFunc
	var_162_int = 539018; // 0x17e PushI
	var_163_int = 40961; // 0x17f PushI
	var_164_int = 40960; // 0x180 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x181 TObjFunc
	return 0; // 0x183 Return
	
Label_388:
	var_165_int = 40961; // 0x184 PushI
	var_166_bool = var_19_bool == var_165_int; // 0x185 Eq
	if(var_166_bool == 0) goto Label_406; // 0x186 JumpB
	var_167_string = ""; // 0x187 PushV
	var_167_string = "Neutral"; // 0x188 MovS
	func_191(var_20_int, var_167_string); // 0x189 NEW_2
	var_168_int = 539019; // 0x18b PushI
	SetMessage(var_168_int); // 0x18c TObjFunc
	ClearReplies(); // 0x18e TObjFunc
	var_169_int = 525389; // 0x190 PushI
	var_170_int = -1; // 0x191 PushI
	var_171_int = 26757; // 0x192 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x193 TObjFunc
	return 0; // 0x195 Return
	
Label_406:
	var_172_int = 40954; // 0x196 PushI
	var_173_bool = var_19_bool == var_172_int; // 0x197 Eq
	if(var_173_bool == 0) goto Label_429; // 0x198 JumpB
	var_174_string = ""; // 0x199 PushV
	var_174_string = "Neutral"; // 0x19a MovS
	func_191(var_20_int, var_174_string); // 0x19b NEW_2
	var_175_int = 539012; // 0x19d PushI
	SetMessage(var_175_int); // 0x19e TObjFunc
	ClearReplies(); // 0x1a0 TObjFunc
	var_176_int = 539013; // 0x1a2 PushI
	var_177_int = 40956; // 0x1a3 PushI
	var_178_int = 40955; // 0x1a4 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1a5 TObjFunc
	var_179_int = 539017; // 0x1a7 PushI
	var_180_int = -1; // 0x1a8 PushI
	var_181_int = 40959; // 0x1a9 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1aa TObjFunc
	return 0; // 0x1ac Return
	
Label_429:
	var_182_int = 40956; // 0x1ad PushI
	var_183_bool = var_19_bool == var_182_int; // 0x1ae Eq
	if(var_183_bool == 0) goto Label_452; // 0x1af JumpB
	var_184_string = ""; // 0x1b0 PushV
	var_184_string = "Neutral"; // 0x1b1 MovS
	func_191(var_20_int, var_184_string); // 0x1b2 NEW_2
	var_185_int = 539014; // 0x1b4 PushI
	SetMessage(var_185_int); // 0x1b5 TObjFunc
	ClearReplies(); // 0x1b7 TObjFunc
	var_186_int = 539015; // 0x1b9 PushI
	var_187_int = -1; // 0x1ba PushI
	var_188_int = 40957; // 0x1bb PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1bc TObjFunc
	var_189_int = 539016; // 0x1be PushI
	var_190_int = -1; // 0x1bf PushI
	var_191_int = 40958; // 0x1c0 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1c1 TObjFunc
	return 0; // 0x1c3 Return
	
Label_452:
	var_3_object = 1; // 0x1c4 TMovB
	var_192_bool = 0; // 0x1c5 PushV
	func_1833(var_192_bool); // 0x1c6 NEW_2
	if(var_192_bool == 0) goto Label_460; // 0x1c8 JumpB
	lshStopAnimation(); // 0x1c9 Func
	goto Label_462; // 0x1cb Jump
	
Label_462:
	return 0; // 0x1ce Return
	
Label_460:
	StopAnimation(); // 0x1cc Func
	
Label_464:
	return 0; // 0x1d0 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	var_21_int = 1; // 0x2b8 PushI
	if(var_21_int == 0) goto Label_979; // 0x2b9 JumpB
	func_1486(); // 0x2bb NEW_2
	var_23_int = 19266; // 0x2bd PushI
	var_24_bool = var_20_int == var_23_int; // 0x2be Eq
	if(var_24_bool == 0) goto Label_714; // 0x2bf JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x2c0 PushV
	var_25_object = var_1_object; // 0x2c1 MovT
	var_26_object = var_0_bool; // 0x2c2 MovT
	func_1559(); // 0x2c3 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x2c5 PushV
	var_42_object = var_1_object; // 0x2c6 MovT
	var_43_object = var_0_bool; // 0x2c7 MovT
	func_1605(); // 0x2c8 NEW_2
	
Label_714:
	var_46_int = 19269; // 0x2ca PushI
	var_47_bool = var_20_int == var_46_int; // 0x2cb Eq
	if(var_47_bool == 0) goto Label_722; // 0x2cc JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x2cd PushV
	var_48_object = var_1_object; // 0x2ce MovT
	var_49_object = var_0_bool; // 0x2cf MovT
	func_1611(); // 0x2d0 NEW_2
	
Label_722:
	var_51_int = 19312; // 0x2d2 PushI
	var_52_bool = var_20_int == var_51_int; // 0x2d3 Eq
	if(var_52_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x2d5 PushV
	var_53_object = var_1_object; // 0x2d6 MovT
	var_54_object = var_0_bool; // 0x2d7 MovT
	func_1599(); // 0x2d8 NEW_2
	
Label_730:
	var_57_int = 19258; // 0x2da PushI
	var_58_bool = var_19_bool == var_57_int; // 0x2db Eq
	if(var_58_bool == 0) goto Label_829; // 0x2dc JumpB
	var_59_bool = 0; // 0x2dd PushV
	var_59_bool = 0; // 0x2de MovB
	var_60_bool = 0; var_61_object = Obj(); // 0x2df PushV
	var_61_object = var_1_object; // 0x2e0 MovT
	func_1663(var_60_bool, var_61_object); // 0x2e1 NEW_2
	var_72_bool = var_60_bool == 0; // 0x2e3 Not
	if(var_72_bool == 0) goto Label_748; // 0x2e4 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x2e5 PushV
	var_74_object = var_1_object; // 0x2e6 MovT
	func_1652(var_73_bool, var_74_object); // 0x2e7 NEW_2
	var_82_bool = var_73_bool == 0; // 0x2e9 Not
	if(var_82_bool == 0) goto Label_748; // 0x2ea JumpB
	var_59_bool = 1; // 0x2eb MovB
	
Label_748:
	if(var_59_bool == 0) goto Label_769; // 0x2ec JumpB
	var_83_string = ""; // 0x2ed PushV
	var_83_string = "Neutral"; // 0x2ee MovS
	func_673(var_20_int, var_83_string); // 0x2ef NEW_2
	var_100_int = 518145; // 0x2f1 PushI
	SetMessage(var_100_int); // 0x2f2 TObjFunc
	ClearReplies(); // 0x2f4 TObjFunc
	var_101_int = 518146; // 0x2f6 PushI
	var_102_int = 19260; // 0x2f7 PushI
	var_103_int = 19259; // 0x2f8 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x2f9 TObjFunc
	var_104_int = 529952; // 0x2fb PushI
	var_105_int = -1; // 0x2fc PushI
	var_106_int = 31336; // 0x2fd PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x2fe TObjFunc
	return 0; // 0x300 Return
	
Label_769:
	var_107_bool = 0; // 0x301 PushV
	var_107_bool = 0; // 0x302 MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x303 PushV
	var_109_object = var_1_object; // 0x304 MovT
	func_1652(var_108_bool, var_109_object); // 0x305 NEW_2
	if(var_108_bool == 0) goto Label_783; // 0x307 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x308 PushV
	var_111_object = var_1_object; // 0x309 MovT
	func_1663(var_110_bool, var_111_object); // 0x30a NEW_2
	var_112_bool = var_110_bool == 0; // 0x30c Not
	if(var_112_bool == 0) goto Label_783; // 0x30d JumpB
	var_107_bool = 1; // 0x30e MovB
	
Label_783:
	if(var_107_bool == 0) goto Label_799; // 0x30f JumpB
	var_113_string = ""; // 0x310 PushV
	var_113_string = "Neutral"; // 0x311 MovS
	func_673(var_20_int, var_113_string); // 0x312 NEW_2
	var_114_int = 518150; // 0x314 PushI
	SetMessage(var_114_int); // 0x315 TObjFunc
	ClearReplies(); // 0x317 TObjFunc
	var_115_int = 518151; // 0x319 PushI
	var_116_int = 19265; // 0x31a PushI
	var_117_int = 19264; // 0x31b PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_118_string = ""; // 0x31f PushV
	var_118_string = "Neutral"; // 0x320 MovS
	func_673(var_20_int, var_118_string); // 0x321 NEW_2
	var_119_int = 518155; // 0x323 PushI
	SetMessage(var_119_int); // 0x324 TObjFunc
	ClearReplies(); // 0x326 TObjFunc
	var_120_int = 518156; // 0x328 PushI
	var_121_int = -1; // 0x329 PushI
	var_122_int = 19269; // 0x32a PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x32b TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0x32d PushV
	var_124_object = var_1_object; // 0x32e MovT
	func_1640(var_124_object); // 0x32f NEW_2
	if(var_123_bool == 0) goto Label_823; // 0x331 JumpB
	var_131_int = 518199; // 0x332 PushI
	var_132_int = 19313; // 0x333 PushI
	var_133_int = 19312; // 0x334 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x335 TObjFunc
	
Label_823:
	var_134_int = 518157; // 0x337 PushI
	var_135_int = -1; // 0x338 PushI
	var_136_int = 19270; // 0x339 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_137_int = 19313; // 0x33d PushI
	var_138_bool = var_19_bool == var_137_int; // 0x33e Eq
	if(var_138_bool == 0) goto Label_852; // 0x33f JumpB
	var_139_string = ""; // 0x340 PushV
	var_139_string = "Neutral"; // 0x341 MovS
	func_673(var_20_int, var_139_string); // 0x342 NEW_2
	var_140_int = 518200; // 0x344 PushI
	SetMessage(var_140_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_141_int = 534598; // 0x349 PushI
	var_142_int = 36237; // 0x34a PushI
	var_143_int = 36236; // 0x34b PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x34c TObjFunc
	var_144_int = 518201; // 0x34e PushI
	var_145_int = -1; // 0x34f PushI
	var_146_int = 19314; // 0x350 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x351 TObjFunc
	return 0; // 0x353 Return
	
Label_852:
	var_147_int = 36237; // 0x354 PushI
	var_148_bool = var_19_bool == var_147_int; // 0x355 Eq
	if(var_148_bool == 0) goto Label_875; // 0x356 JumpB
	var_149_string = ""; // 0x357 PushV
	var_149_string = "Neutral"; // 0x358 MovS
	func_673(var_20_int, var_149_string); // 0x359 NEW_2
	var_150_int = 534599; // 0x35b PushI
	SetMessage(var_150_int); // 0x35c TObjFunc
	ClearReplies(); // 0x35e TObjFunc
	var_151_int = 534600; // 0x360 PushI
	var_152_int = -1; // 0x361 PushI
	var_153_int = 36238; // 0x362 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x363 TObjFunc
	var_154_int = 534601; // 0x365 PushI
	var_155_int = 36240; // 0x366 PushI
	var_156_int = 36239; // 0x367 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_157_int = 36240; // 0x36b PushI
	var_158_bool = var_19_bool == var_157_int; // 0x36c Eq
	if(var_158_bool == 0) goto Label_898; // 0x36d JumpB
	var_159_string = ""; // 0x36e PushV
	var_159_string = "Neutral"; // 0x36f MovS
	func_673(var_20_int, var_159_string); // 0x370 NEW_2
	var_160_int = 534602; // 0x372 PushI
	SetMessage(var_160_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_161_int = 534603; // 0x377 PushI
	var_162_int = -1; // 0x378 PushI
	var_163_int = 36241; // 0x379 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x37a TObjFunc
	var_164_int = 534604; // 0x37c PushI
	var_165_int = -1; // 0x37d PushI
	var_166_int = 36242; // 0x37e PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_167_int = 19265; // 0x382 PushI
	var_168_bool = var_19_bool == var_167_int; // 0x383 Eq
	if(var_168_bool == 0) goto Label_921; // 0x384 JumpB
	var_169_string = ""; // 0x385 PushV
	var_169_string = "Neutral"; // 0x386 MovS
	func_673(var_20_int, var_169_string); // 0x387 NEW_2
	var_170_int = 518152; // 0x389 PushI
	SetMessage(var_170_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_171_int = 518153; // 0x38e PushI
	var_172_int = -1; // 0x38f PushI
	var_173_int = 19266; // 0x390 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x391 TObjFunc
	var_174_int = 518154; // 0x393 PushI
	var_175_int = -1; // 0x394 PushI
	var_176_int = 19267; // 0x395 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_177_int = 19260; // 0x399 PushI
	var_178_bool = var_19_bool == var_177_int; // 0x39a Eq
	if(var_178_bool == 0) goto Label_944; // 0x39b JumpB
	var_179_string = ""; // 0x39c PushV
	var_179_string = "Neutral"; // 0x39d MovS
	func_673(var_20_int, var_179_string); // 0x39e NEW_2
	var_180_int = 518147; // 0x3a0 PushI
	SetMessage(var_180_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_181_int = 529953; // 0x3a5 PushI
	var_182_int = 31339; // 0x3a6 PushI
	var_183_int = 31337; // 0x3a7 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x3a8 TObjFunc
	var_184_int = 529954; // 0x3aa PushI
	var_185_int = -1; // 0x3ab PushI
	var_186_int = 31338; // 0x3ac PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_187_int = 31339; // 0x3b0 PushI
	var_188_bool = var_19_bool == var_187_int; // 0x3b1 Eq
	if(var_188_bool == 0) goto Label_967; // 0x3b2 JumpB
	var_189_string = ""; // 0x3b3 PushV
	var_189_string = "Neutral"; // 0x3b4 MovS
	func_673(var_20_int, var_189_string); // 0x3b5 NEW_2
	var_190_int = 529955; // 0x3b7 PushI
	SetMessage(var_190_int); // 0x3b8 TObjFunc
	ClearReplies(); // 0x3ba TObjFunc
	var_191_int = 518148; // 0x3bc PushI
	var_192_int = -1; // 0x3bd PushI
	var_193_int = 19261; // 0x3be PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x3bf TObjFunc
	var_194_int = 518162; // 0x3c1 PushI
	var_195_int = -1; // 0x3c2 PushI
	var_196_int = 19275; // 0x3c3 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_3_object = 1; // 0x3c7 TMovB
	var_197_bool = 0; // 0x3c8 PushV
	func_1833(var_197_bool); // 0x3c9 NEW_2
	if(var_197_bool == 0) goto Label_975; // 0x3cb JumpB
	lshStopAnimation(); // 0x3cc Func
	goto Label_977; // 0x3ce Jump
	
Label_977:
	return 0; // 0x3d1 Return
	
Label_975:
	StopAnimation(); // 0x3cf Func
	
Label_979:
	return 0; // 0x3d3 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_object)
{
	var_20_int = 0; var_21_int = 0; // 0x3e1 PushV
	func_1195(var_20_int, var_21_int); // 0x3e3 NEW_2
	var_25_int = 0; // 0x3e5 PushV
	func_1819(var_25_int); // 0x3e6 NEW_2
	var_29_int = 1; // 0x3e8 PushI
	var_30_bool = var_25_int == var_29_int; // 0x3e9 Eq
	if(var_30_bool == 0) goto Label_1011; // 0x3ea JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x3eb PushV
	var_32_object = var_19_object; // 0x3ec Mov
	TaskCall(3); // 0x3ed TaskCall
	func_465(var_33_object, var_31_int, var_32_object); // 0x3ee NEW_2
	TaskReturn(); // 0x3ef TaskReturn
	var_21_int = var_33_object; // 0x3f0 Mov
	goto Label_1026; // 0x3f2 Jump
	
Label_1026:
	var_218_int = 1000; // 0x402 PushI
	var_219_bool = var_218_int == var_21_int; // 0x403 Eq
	if(var_219_bool == 0) goto Label_1047; // 0x404 JumpB
	var_220_bool = 0; var_221_object = Obj(); var_222_float = 0; // 0x405 PushV
	var_221_object = var_19_object; // 0x406 Mov
	var_222_float = 110.0; // 0x407 MovF
	func_1393(var_221_object, var_222_float); // 0x408 NEW_2
	var_249_bool = var_220_bool == 0; // 0x40a Not
	if(var_249_bool == 0) goto Label_1037; // 0x40b JumpB
	return 2; // 0x40c Return
	
Label_1037:
	var_250_object = Obj(); // 0x40d PushV
	var_250_object = var_19_object; // 0x40e Mov
	TaskCall(0); // 0x40f TaskCall
	func_0(var_250_object); // 0x410 NEW_2
	TaskReturn(); // 0x411 TaskReturn
	var_257_object = Obj(); // 0x413 PushV
	var_257_object = var_19_object; // 0x414 Mov
	func_1440(); // 0x415 NEW_2
	
Label_1047:
	return 2; // 0x417 Return
	
Label_1011:
	var_258_int = 0; // 0x3f3 PushV
	func_1819(var_258_int); // 0x3f4 NEW_2
	var_259_int = 2; // 0x3f6 PushI
	var_260_bool = var_258_int == var_259_int; // 0x3f7 Eq
	if(var_260_bool == 0) goto Label_1025; // 0x3f8 JumpB
	var_261_int = 0; var_262_object = Obj(); // 0x3f9 PushV
	var_262_object = var_19_object; // 0x3fa Mov
	TaskCall(1); // 0x3fb TaskCall
	func_40(var_263_object, var_261_int, var_262_object); // 0x3fc NEW_2
	TaskReturn(); // 0x3fd TaskReturn
	var_21_int = var_263_object; // 0x3fe Mov
	goto Label_1026; // 0x400 Jump
	
Label_1025:
	return 2; // 0x401 Return
}


task_5_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x418 PushV
	func_1526(var_19_int); // 0x419 NEW_2
	var_25_bool = var_7_object != var_19_int; // 0x41b Neq
	if(var_25_bool == 0) goto Label_1060; // 0x41c JumpB
	func_1756(); // 0x41e NEW_2
	var_48_int = 0; // 0x420 PushV
	func_1526(var_48_int); // 0x421 NEW_2
	var_7_object = var_48_int; // 0x422 TMov
	
Label_1060:
	return 0; // 0x424 Return
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_string)
{
	var_20_string = "cleanup"; // 0x44c PushS
	var_21_bool = var_19_string == var_20_string; // 0x44d Eq
	if(var_21_bool == 0) goto Label_1106; // 0x44e JumpB
	func_1079(var_19_string); // 0x450 NEW_2
	
Label_1106:
	return 0; // 0x452 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_object = var_6_object; // 0x453 PushT
	if(var_19_object == 0) goto Label_1112; // 0x454 JumpB
	func_1195(var_17_bool, var_18_int); // 0x456 NEW_2
	
Label_1112:
	var_23_bool = 0; // 0x458 PushV
	var_23_bool = 0; // 0x459 MovB
	var_24_bool = var_5_bool; // 0x45a PushT
	if(var_24_bool == 0) goto Label_1121; // 0x45b JumpB
	var_25_bool = 0; // 0x45c PushV
	func_1128(var_25_bool); // 0x45d NEW_2
	if(var_25_bool == 0) goto Label_1121; // 0x45f JumpB
	var_23_bool = 1; // 0x460 MovB
	
Label_1121:
	if(var_23_bool == 0) goto Label_1127; // 0x461 JumpB
	var_26_object = Obj(); // 0x462 PushV
	func_1493(var_26_object); // 0x463 NEW_2
	RemoveActor(var_26_object); // 0x465 Func
	
Label_1127:
	return 0; // 0x467 Return
}


task_5_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_int)
{
	var_20_int = 10; // 0x495 PushI
	var_21_bool = var_19_int == var_20_int; // 0x496 Eq
	if(var_21_bool == 0) goto Label_1194; // 0x497 JumpB
	var_22_bool = 0; // 0x498 PushV
	func_1157(var_17_bool, var_18_int, var_19_int, var_22_bool); // 0x499 NEW_2
	if(var_22_bool == 0) goto Label_1188; // 0x49b JumpB
	var_35_bool = var_2_object == 0; // 0x49c Not
	if(var_35_bool == 0) goto Label_1187; // 0x49d JumpB
	var_36_object = Obj(); // 0x49e PushV
	var_36_object = var_4_string; // 0x49f MovT
	func_1475(var_36_object); // 0x4a0 NEW_2
	var_2_object = 1; // 0x4a2 TMovB
	
Label_1187:
	goto Label_1194; // 0x4a3 Jump
	
Label_1194:
	return 0; // 0x4aa Return
	
Label_1188:
	var_43_object = var_2_object; // 0x4a4 PushT
	if(var_43_object == 0) goto Label_1194; // 0x4a5 JumpB
	var_44_string = "head"; // 0x4a6 PushS
	UnlookAsync(var_44_string); // 0x4a7 Func
	var_2_object = 0; // 0x4a9 TMovB
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x3d4 PushV
	func_1526(var_19_int); // 0x3d5 NEW_2
	var_7_object = var_19_int; // 0x3d6 TMov
	func_1756(); // 0x3d9 NEW_2
	var_47_float = 0; var_48_float = 0; // 0x3db PushV
	var_47_float = 300; // 0x3dc MovI
	var_48_float = 100; // 0x3dd MovI
	func_1061(var_18_int, var_47_float, var_48_float); // 0x3de NEW_2
	return 0; // 0x3e0 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_252_bool = 0; // 0x4 PushV
	func_1833(var_252_bool); // 0x5 NEW_2
	if(var_252_bool == 0) goto Label_15; // 0x7 JumpB
	var_253_string = ""; // 0x8 PushV
	var_253_string = "Neutral"; // 0x9 MovS
	func_1444(var_253_string); // 0xa NEW_2
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


func_1797(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0; // 0x705 PushV
	GetInvItemByName(var_35_int, var_33_string); // 0x706 Func
	var_32_int = var_35_int; // 0x708 Mov
	return 2; // 0x709 Return
}


func_1157(var_0_bool, var_1_object, var_4_string, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x485 PushV
	var_25_bool = var_4_string == 0; // 0x486 NullEq
	if(var_25_bool == 0) goto Label_1162; // 0x487 JumpB
	var_22_bool = 0; // 0x488 MovB
	return 2; // 0x489 Return
	
Label_1162:
	var_26_float = 0; var_27_object = Obj(); // 0x48a PushV
	var_27_object = var_4_string; // 0x48b MovT
	func_1295(var_27_object); // 0x48c NEW_2
	var_24_float = sqrt(var_26_float); // 0x48e Sqrt2
	var_34_object = var_2_object; // 0x48f PushT
	if(var_34_object == 0) goto Label_1170; // 0x490 JumpB
	var_24_float = var_24_float - var_1_object; // 0x491 Sub2
	
Label_1170:
	var_22_bool = var_24_float < var_0_bool; // 0x492 LT2
	return 2; // 0x493 Return
}


func_1542(var_81_int)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0; // 0x606 PushV
	var_84_int = 0; // 0x607 MovI
	
Label_1544:
	var_86_string = "all"; // 0x608 PushS
	var_87_string = ""; var_88_int = 0; // 0x609 PushV
	var_88_int = var_84_int; // 0x60a Mov
	func_1535(var_87_string, var_88_int); // 0x60b NEW_2
	HasAnimation(var_85_bool, var_86_string, var_87_string); // 0x60d Func
	var_92_bool = var_85_bool == 0; // 0x60f Not
	if(var_92_bool == 0) goto Label_1554; // 0x610 JumpB
	goto Label_1557; // 0x611 Jump
	
Label_1557:
	var_81_int = var_84_int; // 0x615 Mov
	return 4; // 0x616 Return
	
Label_1554:
	var_93_int = 1; // 0x612 PushI
	var_84_int = var_84_int + var_93_int; // 0x613 Add2
	goto Label_1544; // 0x614 Jump
}


func_1288(var_106_bool)
{
	var_106_bool = 1; // 0x508 MovB
	return 0; // 0x509 Return
}


func_1673(var_112_bool)
{
	var_114_int = 0; var_115_int = 0; var_116_int = 0; var_117_int = 0; // 0x689 PushV
	var_118_int = 0; // 0x68a PushV
	func_1526(var_118_int); // 0x68b NEW_2
	var_116_int = var_118_int; // 0x68c Mov
	var_124_string = "Gatherer1_"; // 0x68e PushS
	var_125_int = var_124_string + var_116_int; // 0x68f Add
	GetVariable(var_125_int, var_117_int); // 0x690 Func
	var_126_int = 0; // 0x692 PushI
	var_112_bool = var_117_int != var_126_int; // 0x693 Neq2
	return 4; // 0x694 Return
}


func_1802(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x70a PushV
	var_96_string = "branch"; // 0x70b PushS
	GetVariable(var_96_string, var_95_int); // 0x70c Func
	var_97_int = 0; // 0x70e PushI
	var_98_bool = var_95_int == var_97_int; // 0x70f Eq
	if(var_98_bool == 0) goto Label_1812; // 0x710 JumpB
	var_93_int = 1; // 0x711 MovI
	return 2; // 0x712 Return
	
Label_1812:
	var_99_int = 1; // 0x714 PushI
	var_100_bool = var_95_int == var_99_int; // 0x715 Eq
	if(var_100_bool == 0) goto Label_1817; // 0x716 JumpB
	var_93_int = 2; // 0x717 MovI
	return 2; // 0x718 Return
	
Label_1817:
	var_93_int = 3; // 0x719 MovI
	return 2; // 0x71a Return
}


func_1290()
{
	StopAnimation(); // 0x50a Func
	StopGroup0(); // 0x50c Func
	return 0; // 0x50e Return
}


func_1295(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x50f PushV
	GetPosition(var_31_cvector); // 0x510 Func
	GetPosition(var_32_cvector); // 0x512 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x514 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x515 Or2
	return 6; // 0x516 Return
}


func_1685()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x695 PushV
	var_51_int = 511; // 0x696 PushI
	var_52_int = 2; // 0x697 PushI
	var_53_int = 529710; // 0x698 PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x699 Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x69b PushV
	var_55_object = var_50_object; // 0x69c Mov
	var_56_int = 507; // 0x69d MovI
	func_1711(var_54_bool, var_55_object, var_56_int); // 0x69e NEW_2
	return 2; // 0x6a0 Return
}


func_1559()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; // 0x617 PushV
	var_31_int = 0; // 0x618 PushV
	func_1526(var_31_int); // 0x619 NEW_2
	var_29_int = var_31_int; // 0x61a Mov
	var_37_string = "Gatherer1_"; // 0x61c PushS
	var_38_int = var_37_string + var_29_int; // 0x61d Add
	var_39_int = 1; // 0x61e PushI
	SetVariable(var_38_int, var_39_int); // 0x61f Func
	var_40_string = "blood"; // 0x621 PushS
	var_41_int = 1; // 0x622 PushI
	RemoveItemByType(var_30_int, var_40_string, var_41_int); // 0x623 ObjFunc
	return 4; // 0x625 Return
}


func_1303(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x517 PushV
	IsLoaded(var_60_bool); // 0x518 Func
	var_58_bool = var_60_bool; // 0x51a Mov
	return 2; // 0x51b Return
}


func_1819(var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0x71b PushV
	var_28_string = "branch"; // 0x71c PushS
	GetVariable(var_28_string, var_27_int); // 0x71d Func
	var_25_int = var_27_int; // 0x71f Mov
	return 2; // 0x720 Return
}


func_1308(var_42_bool, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0; // 0x51c PushV
	GetPosition(var_55_cvector); // 0x51d ObjFunc
	GetEyesHeight(var_54_float); // 0x51f ObjFunc
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x521 PushE
	var_63_float = var_63_float + var_54_float; // 0x522 Add2
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x523 PopE
	GetPosition(var_56_cvector); // 0x524 Func
	GetEyesHeight(var_54_float); // 0x526 Func
	var_64_float = GetByIndex(var_56_cvector, 1); // 0x528 PushE
	var_64_float = var_64_float + var_54_float; // 0x529 Add2
	SetByIndex(var_56_cvector, 1) = var_64_float; // 0x52a PopE
	var_57_cvector = var_55_cvector - var_56_cvector; // 0x52b Sub2
	var_65_float = GetByIndex(var_57_cvector, 1); // 0x52c PushE
	var_65_float = 0; // 0x52d MovI
	SetByIndex(var_57_cvector, 1) = var_65_float; // 0x52e PopE
	var_66_int = var_57_cvector | var_57_cvector; // 0x52f Or
	var_67_float = sqrt(var_66_int); // 0x530 Sqrt
	var_57_cvector = var_57_cvector / var_57_cvector; // 0x531 Div2
	var_58_cvector = -var_57_cvector; // 0x532 Neg2
	var_68_float = var_57_cvector * var_44_float; // 0x533 Mult
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x534 PushV
	var_71_cvector = CVector(0.0, 1.0, 0.0); // 0x535 PushVec
	var_70_cvector = var_58_cvector ^ var_71_cvector; // 0x536 Xor2
	func_1499(var_69_cvector, var_70_cvector); // 0x537 NEW_2
	var_77_int = 25; // 0x539 PushI
	var_78_float = var_69_cvector * var_77_int; // 0x53a Mult
	var_79_int = var_68_float + var_78_float; // 0x53b Add
	var_80_cvector = CVector(0.0, 10.0, 0.0); // 0x53c PushVec
	var_59_cvector = var_79_int - var_80_cvector; // 0x53d Sub2
	var_60_cvector = var_56_cvector + var_59_cvector; // 0x53e Add2
	IsOverrideActive(var_61_bool); // 0x53f Func
	var_81_bool = var_61_bool; // 0x541 Push
	if(var_81_bool == 0) goto Label_1349; // 0x542 JumpB
	var_42_bool = 0; // 0x543 MovB
	return 18; // 0x544 Return
	
Label_1349:
	StopWorld(); // 0x545 Func
	CameraTransit(var_60_cvector, var_58_cvector); // 0x547 Func
	var_82_float = GetByIndex(var_59_cvector, 0); // 0x549 PushE
	var_83_float = GetByIndex(var_59_cvector, 2); // 0x54a PushE
	Rotate(var_82_float, var_83_float); // 0x54b Func
	var_84_bool = 0; // 0x54d PushV
	func_1833(var_84_bool); // 0x54e NEW_2
	if(var_84_bool == 0) goto Label_1362; // 0x550 JumpB
	goto Label_1370; // 0x551 Jump
	
Label_1370:
	CameraWaitForPlayFinish(); // 0x55a Func
	ResumeWorld(); // 0x55c Func
	var_42_bool = 1; // 0x55e MovB
	return 18; // 0x55f Return
	
Label_1362:
	var_85_string = "head"; // 0x552 PushS
	HasAnimationTrack(var_62_bool, var_85_string); // 0x553 Func
	var_86_bool = var_62_bool; // 0x555 Push
	if(var_86_bool == 0) goto Label_1370; // 0x556 JumpB
	var_87_string = "head"; // 0x557 PushS
	LookAsyncCamera(var_87_string); // 0x558 Func
}


func_539(var_0_bool, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_bool = var_103_object; // 0x21c TMov
	var_1_object = var_102_object; // 0x21d TMov
	var_3_object = 0; // 0x21e TMovB
	var_108_int = 1; // 0x21f PushI
	if(var_108_int == 0) goto Label_643; // 0x220 JumpB
	var_109_bool = 0; // 0x221 PushV
	var_109_bool = 0; // 0x222 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x223 PushV
	var_111_object = var_1_object; // 0x224 MovT
	func_1663(var_110_bool, var_111_object); // 0x225 NEW_2
	var_127_bool = var_110_bool == 0; // 0x227 Not
	if(var_127_bool == 0) goto Label_560; // 0x228 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x229 PushV
	var_129_object = var_1_object; // 0x22a MovT
	func_1652(var_128_bool, var_129_object); // 0x22b NEW_2
	var_137_bool = var_128_bool == 0; // 0x22d Not
	if(var_137_bool == 0) goto Label_560; // 0x22e JumpB
	var_109_bool = 1; // 0x22f MovB
	
Label_560:
	if(var_109_bool == 0) goto Label_581; // 0x230 JumpB
	var_138_string = ""; // 0x231 PushV
	var_138_string = "Neutral"; // 0x232 MovS
	func_673(var_103_object, var_138_string); // 0x233 NEW_2
	var_155_int = 518145; // 0x235 PushI
	SetMessage(var_155_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_156_int = 518146; // 0x23a PushI
	var_157_int = 19260; // 0x23b PushI
	var_158_int = 19259; // 0x23c PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x23d TObjFunc
	var_159_int = 529952; // 0x23f PushI
	var_160_int = -1; // 0x240 PushI
	var_161_int = 31336; // 0x241 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x242 TObjFunc
	goto Label_643; // 0x244 Jump
	
Label_643:
	var_162_bool = 0; // 0x283 PushV
	func_1833(var_162_bool); // 0x284 NEW_2
	if(var_162_bool == 0) goto Label_658; // 0x286 JumpB
	
Label_647:
	lshWaitForAnimEnd(); // 0x287 Func
	var_163_object = var_3_object; // 0x289 PushT
	if(var_163_object == 0) goto Label_652; // 0x28a JumpB
	goto Label_657; // 0x28b Jump
	
Label_657:
	goto Label_672; // 0x291 Jump
	
Label_672:
	return 0; // 0x2a0 Return
	
Label_652:
	var_164_string = ""; // 0x28c PushV
	var_164_string = var_2_object; // 0x28d MovT
	func_1444(var_164_string); // 0x28e NEW_2
	goto Label_647; // 0x290 Jump
	
Label_658:
	var_175_string = "all"; // 0x292 PushS
	var_176_string = "idle"; // 0x293 PushS
	PlayAnimation(var_175_string, var_176_string); // 0x294 Func
	
Label_662:
	WaitForAnimEnd(); // 0x296 Func
	var_177_object = var_3_object; // 0x298 PushT
	if(var_177_object == 0) goto Label_667; // 0x299 JumpB
	goto Label_672; // 0x29a Jump
	
Label_667:
	var_178_string = "all"; // 0x29b PushS
	var_179_string = "idle"; // 0x29c PushS
	PlayAnimation(var_178_string, var_179_string); // 0x29d Func
	goto Label_662; // 0x29f Jump
	
Label_581:
	var_180_bool = 0; // 0x245 PushV
	var_180_bool = 0; // 0x246 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x247 PushV
	var_182_object = var_1_object; // 0x248 MovT
	func_1652(var_181_bool, var_182_object); // 0x249 NEW_2
	if(var_181_bool == 0) goto Label_595; // 0x24b JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x24c PushV
	var_184_object = var_1_object; // 0x24d MovT
	func_1663(var_183_bool, var_184_object); // 0x24e NEW_2
	var_185_bool = var_183_bool == 0; // 0x250 Not
	if(var_185_bool == 0) goto Label_595; // 0x251 JumpB
	var_180_bool = 1; // 0x252 MovB
	
Label_595:
	if(var_180_bool == 0) goto Label_611; // 0x253 JumpB
	var_186_string = ""; // 0x254 PushV
	var_186_string = "Neutral"; // 0x255 MovS
	func_673(var_103_object, var_186_string); // 0x256 NEW_2
	var_187_int = 518150; // 0x258 PushI
	SetMessage(var_187_int); // 0x259 TObjFunc
	ClearReplies(); // 0x25b TObjFunc
	var_188_int = 518151; // 0x25d PushI
	var_189_int = 19265; // 0x25e PushI
	var_190_int = 19264; // 0x25f PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x260 TObjFunc
	goto Label_643; // 0x262 Jump
	
Label_611:
	var_191_string = ""; // 0x263 PushV
	var_191_string = "Neutral"; // 0x264 MovS
	func_673(var_103_object, var_191_string); // 0x265 NEW_2
	var_192_int = 518155; // 0x267 PushI
	SetMessage(var_192_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_193_int = 518156; // 0x26c PushI
	var_194_int = -1; // 0x26d PushI
	var_195_int = 19269; // 0x26e PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x26f TObjFunc
	var_196_bool = 0; var_197_object = Obj(); // 0x271 PushV
	var_197_object = var_1_object; // 0x272 MovT
	func_1640(var_197_object); // 0x273 NEW_2
	if(var_196_bool == 0) goto Label_635; // 0x275 JumpB
	var_204_int = 518199; // 0x276 PushI
	var_205_int = 19313; // 0x277 PushI
	var_206_int = 19312; // 0x278 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x279 TObjFunc
	
Label_635:
	var_207_int = 518157; // 0x27b PushI
	var_208_int = -1; // 0x27c PushI
	var_209_int = 19270; // 0x27d PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x27e TObjFunc
	goto Label_643; // 0x280 Jump
}


func_1440()
{
	CameraSwitchToNormal(); // 0x5a1 Func
	return 0; // 0x5a3 Return
}


func_1825(var_90_int)
{
	var_90_int = 521048; // 0x721 MovI
	return 0; // 0x722 Return
}


func_673(var_2_object, var_138_string)
{
	var_139_bool = 0; // 0x2a2 PushV
	func_1833(var_139_bool); // 0x2a3 NEW_2
	var_140_bool = var_139_bool == 0; // 0x2a5 Not
	if(var_140_bool == 0) goto Label_680; // 0x2a6 JumpB
	return 0; // 0x2a7 Return
	
Label_680:
	var_141_bool = var_138_string == var_2_object; // 0x2a8 Eq
	if(var_141_bool == 0) goto Label_683; // 0x2a9 JumpB
	return 0; // 0x2aa Return
	
Label_683:
	var_142_string = ""; var_143_bool = 0; // 0x2ab PushV
	var_142_string = var_138_string; // 0x2ac Mov
	var_144_string = ""; // 0x2ad PushS
	var_145_bool = var_138_string == var_144_string; // 0x2ae Eq
	if(var_145_bool == 0) goto Label_690; // 0x2af JumpB
	var_143_bool = 0; // 0x2b0 MovB
	goto Label_691; // 0x2b1 Jump
	
Label_691:
	func_1460(var_142_string, var_143_bool); // 0x2b3 NEW_2
	var_2_object = var_138_string; // 0x2b5 TMov
	return 0; // 0x2b6 Return
	
Label_690:
	var_143_bool = 1; // 0x2b2 MovB
}


func_1827(var_89_int)
{
	var_89_int = 521047; // 0x723 MovI
	return 0; // 0x724 Return
}


func_1444(var_164_string)
{
	var_165_bool = 0; var_166_float = 0; var_167_float = 0; var_168_bool = 0; var_169_float = 0; var_170_float = 0; // 0x5a4 PushV
	lshHasAnimation(var_168_bool, var_164_string); // 0x5a5 Func
	var_171_bool = var_168_bool; // 0x5a7 Push
	if(var_171_bool == 0) goto Label_1455; // 0x5a8 JumpB
	lshGetAnimTimes(var_164_string, var_169_float, var_170_float); // 0x5a9 Func
	var_172_bool = 0; // 0x5ab PushB
	lshPlayAnimation(var_169_float, var_170_float, var_172_bool); // 0x5ac Func
	goto Label_1459; // 0x5ae Jump
	
Label_1459:
	return 6; // 0x5b3 Return
	
Label_1455:
	var_173_string = "Can't find lsh animation : "; // 0x5af PushS
	var_174_int = var_173_string + var_164_string; // 0x5b0 Add
	Trace(var_174_int); // 0x5b1 Func
}


func_1829(var_91_string)
{
	var_91_string = "ui/NPC_Citizen2.png"; // 0x725 MovS
	return 0; // 0x726 Return
}


func_1574()
{
	var_27_string = "ookGatherer1"; // 0x627 PushS
	var_28_int = 1; // 0x628 PushI
	SetVariable(var_27_string, var_28_int); // 0x629 Func
	return 0; // 0x62b Return
}


func_1831(var_92_string)
{
	var_92_string = "ui/NPC_Citizen2_b.png"; // 0x727 MovS
	return 0; // 0x728 Return
}


func_1061(var_6_object, var_47_float, var_48_float)
{
	var_49_float = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0; // 0x425 PushV
	var_6_object = 0; // 0x426 TMovB
	
Label_1063:
	var_53_int = 3; // 0x427 PushI
	rand(var_51_float, var_53_int); // 0x428 Func
	var_54_int = 3; // 0x42a PushI
	var_55_int = var_51_float + var_54_int; // 0x42b Add
	Sleep(var_55_int, var_52_bool); // 0x42c Func
	var_6_object = 1; // 0x42e TMovB
	var_56_float = 0; var_57_float = 0; // 0x42f PushV
	var_56_float = var_47_float; // 0x430 Mov
	var_57_float = var_48_float; // 0x431 Mov
	func_1130(var_48_float, var_49_float, var_50_bool, var_51_float, var_52_bool, var_56_float, var_57_float); // 0x432 NEW_2
	var_6_object = 0; // 0x434 TMovB
	goto Label_1063; // 0x435 Jump
}


func_1833(var_84_bool)
{
	var_84_bool = 0; // 0x729 MovB
	return 0; // 0x72a Return
}


func_40(var_0_bool, var_261_int, var_262_object)
{
	var_264_object = Obj(); var_265_bool = 0; var_266_int = 0; var_267_bool = 0; var_268_object = Obj(); var_269_bool = 0; var_270_int = 0; var_271_bool = 0; // 0x28 PushV
	var_0_bool = var_262_object; // 0x29 TMov
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; // 0x2a PushV
	var_273_object = var_262_object; // 0x2b Mov
	var_274_float = 110.0; // 0x2c MovF
	func_1308(var_273_object, var_274_float); // 0x2d NEW_2
	var_275_bool = var_272_bool == 0; // 0x2f Not
	if(var_275_bool == 0) goto Label_51; // 0x30 JumpB
	var_261_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_268_object); // 0x33 Func
	var_276_int = 0; // 0x35 PushV
	func_1827(var_276_int); // 0x36 NEW_2
	SetNPCName(var_276_int); // 0x38 ObjFunc
	var_277_int = 0; // 0x3a PushV
	func_1825(var_277_int); // 0x3b NEW_2
	SetNPCDescription(var_277_int); // 0x3d ObjFunc
	var_278_string = ""; // 0x3f PushV
	func_1829(var_278_string); // 0x40 NEW_2
	SetPhoto(var_278_string); // 0x42 ObjFunc
	var_279_string = ""; // 0x44 PushV
	func_1831(var_279_string); // 0x45 NEW_2
	SetPhoto2(var_279_string); // 0x47 ObjFunc
	var_280_int = 0; // 0x49 PushV
	func_1802(var_280_int); // 0x4a NEW_2
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
	var_328_bool = var_271_bool == 0; // 0x60 Not
	if(var_328_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_271_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_329_object = Obj(); // 0x67 PushV
	var_329_object = var_262_object; // 0x68 Mov
	func_1376(); // 0x69 NEW_2
	StopDialog(var_268_object); // 0x6b Func
	GetReturnValue(var_270_int); // 0x6d ObjFunc
	var_261_int = var_270_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_1195(var_2_object, var_3_object)
{
	func_1290(); // 0x4ac NEW_2
	var_20_int = 10; // 0x4ae PushI
	KillTimer(var_20_int); // 0x4af Func
	var_21_object = var_2_object; // 0x4b1 PushT
	if(var_21_object == 0) goto Label_1207; // 0x4b2 JumpB
	var_22_string = "head"; // 0x4b3 PushS
	UnlookAsync(var_22_string); // 0x4b4 Func
	var_2_object = 0; // 0x4b6 TMovB
	
Label_1207:
	var_3_object = 1; // 0x4b7 TMovB
	return 0; // 0x4b8 Return
}


func_1580()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x62c PushV
	var_35_object = Obj(); // 0x62d PushV
	func_1739(var_35_object); // 0x62e NEW_2
	var_34_object = var_35_object; // 0x62f Mov
	var_42_string = "k2q04MorlokGotoAndrei"; // 0x631 PushS
	var_43_string = "pt_map_andrei"; // 0x632 PushS
	var_44_int = 0; // 0x633 PushI
	var_45_int = 539378; // 0x634 PushI
	var_46_float = 0; // 0x635 PushV
	func_1521(var_46_float); // 0x636 NEW_2
	AddMark(var_42_string, var_43_string, var_44_int, var_45_int, var_46_float); // 0x638 ObjFunc
	func_1685(); // 0x63b NEW_2
	return 2; // 0x63d Return
}


func_1711(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x6af PushV
	var_63_object = Obj(); // 0x6b0 PushV
	func_1698(var_63_object); // 0x6b1 NEW_2
	var_60_object = var_63_object; // 0x6b2 Mov
	Find(var_56_int, var_61_object); // 0x6b4 ObjFunc
	var_68_bool = var_61_object == 0; // 0x6b6 Not
	if(var_68_bool == 0) goto Label_1726; // 0x6b7 JumpB
	var_69_string = "Can't find diary parent with id: "; // 0x6b8 PushS
	var_70_int = var_69_string + var_56_int; // 0x6b9 Add
	Trace(var_70_int); // 0x6ba Func
	var_54_bool = 0; // 0x6bc MovB
	return 6; // 0x6bd Return
	
Label_1726:
	AddChild(var_55_object); // 0x6be ObjFunc
	var_71_int = 7; // 0x6c0 PushI
	SendWorldWndMessage(var_71_int); // 0x6c1 Func
	GetCategory(var_62_int); // 0x6c3 ObjFunc
	SetDiarySection(var_62_int); // 0x6c5 Func
	var_54_bool = 0; // 0x6c7 MovB
	return 6; // 0x6c8 Return
}


func_1663(var_110_bool, var_111_object)
{
	var_112_bool = 0; var_113_object = Obj(); // 0x680 PushV
	var_113_object = var_111_object; // 0x681 Mov
	func_1673(var_113_object); // 0x682 NEW_2
	if(var_112_bool == 0) goto Label_1671; // 0x684 JumpB
	var_110_bool = 1; // 0x685 MovB
	return 0; // 0x686 Return
	
Label_1671:
	var_110_bool = 0; // 0x687 MovB
	return 0; // 0x688 Return
}


func_1460(var_142_string, var_143_bool)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0; // 0x5b4 PushV
	lshHasAnimation(var_149_bool, var_142_string); // 0x5b5 Func
	var_152_bool = var_149_bool; // 0x5b7 Push
	if(var_152_bool == 0) goto Label_1470; // 0x5b8 JumpB
	lshGetAnimTimes(var_142_string, var_150_float, var_151_float); // 0x5b9 Func
	lshPlayAnimation(var_150_float, var_151_float, var_143_bool); // 0x5bb Func
	goto Label_1474; // 0x5bd Jump
	
Label_1474:
	return 6; // 0x5c2 Return
	
Label_1470:
	var_153_string = "Can't find lsh animation : "; // 0x5be PushS
	var_154_int = var_153_string + var_142_string; // 0x5bf Add
	Trace(var_154_int); // 0x5c0 Func
}


func_1079(var_5_bool)
{
	var_5_bool = 1; // 0x437 TMovB
	var_22_bool = 0; // 0x438 PushV
	var_22_bool = 0; // 0x439 MovB
	var_23_bool = 0; // 0x43a PushV
	func_1303(var_23_bool); // 0x43b NEW_2
	var_26_bool = var_23_bool == 0; // 0x43d Not
	if(var_26_bool == 0) goto Label_1092; // 0x43e JumpB
	var_27_bool = 0; // 0x43f PushV
	func_1128(var_27_bool); // 0x440 NEW_2
	if(var_27_bool == 0) goto Label_1092; // 0x442 JumpB
	var_22_bool = 1; // 0x443 MovB
	
Label_1092:
	if(var_22_bool == 0) goto Label_1098; // 0x444 JumpB
	var_28_object = Obj(); // 0x445 PushV
	func_1493(var_28_object); // 0x446 NEW_2
	RemoveActor(var_28_object); // 0x448 Func
	
Label_1098:
	return 0; // 0x44a Return
}


func_1209()
{
	var_65_int = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_bool = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_float = 0; var_78_bool = 0; // 0x4b9 PushV
	WaitForAnimEnd(); // 0x4ba Func
	var_79_bool = 0; // 0x4bc PushV
	func_1303(var_79_bool); // 0x4bd NEW_2
	var_80_bool = var_79_bool == 0; // 0x4bf Not
	if(var_80_bool == 0) goto Label_1218; // 0x4c0 JumpB
	return 14; // 0x4c1 Return
	
Label_1218:
	var_81_int = 0; // 0x4c2 PushV
	func_1542(var_81_int); // 0x4c3 NEW_2
	var_72_int = var_81_int; // 0x4c4 Mov
	var_73_int = 0; // 0x4c6 MovI
	
Label_1223:
	var_94_bool = 0; // 0x4c7 PushV
	var_94_bool = 0; // 0x4c8 MovB
	var_95_int = 5; // 0x4c9 PushI
	var_96_bool = var_73_int < var_95_int; // 0x4ca LT
	if(var_96_bool == 0) goto Label_1233; // 0x4cb JumpB
	var_97_bool = 0; // 0x4cc PushV
	func_1303(var_97_bool); // 0x4cd NEW_2
	if(var_97_bool == 0) goto Label_1233; // 0x4cf JumpB
	var_94_bool = 1; // 0x4d0 MovB
	
Label_1233:
	if(var_94_bool == 0) goto Label_1285; // 0x4d1 JumpB
	var_98_int = 3; // 0x4d2 PushI
	irand(var_74_int, var_98_int); // 0x4d3 Func
	var_99_int = 0; // 0x4d5 PushI
	var_100_bool = var_74_int == var_99_int; // 0x4d6 Eq
	if(var_100_bool == 0) goto Label_1257; // 0x4d7 JumpB
	var_101_int = var_72_int; // 0x4d8 Push
	if(var_101_int == 0) goto Label_1256; // 0x4d9 JumpB
	irand(var_75_int, var_72_int); // 0x4da Func
	var_102_string = "all"; // 0x4dc PushS
	var_103_string = ""; var_104_int = 0; // 0x4dd PushV
	var_104_int = var_75_int; // 0x4de Mov
	func_1535(var_103_string, var_104_int); // 0x4df NEW_2
	PlayAnimation(var_102_string, var_103_string); // 0x4e1 Func
	WaitForAnimEnd(var_76_bool); // 0x4e3 Func
	var_105_bool = var_76_bool == 0; // 0x4e5 Not
	if(var_105_bool == 0) goto Label_1256; // 0x4e6 JumpB
	goto Label_1285; // 0x4e7 Jump
	
Label_1285:
	ResetAAS(); // 0x505 Func
	return 14; // 0x507 Return
	
Label_1256:
	goto Label_1274; // 0x4e8 Jump
	
Label_1274:
	var_106_bool = 0; // 0x4fa PushV
	func_1288(var_106_bool); // 0x4fb NEW_2
	var_107_bool = var_106_bool == 0; // 0x4fd Not
	if(var_107_bool == 0) goto Label_1280; // 0x4fe JumpB
	goto Label_1285; // 0x4ff Jump
	
Label_1280:
	ResetAAS(); // 0x500 Func
	var_108_int = 1; // 0x502 PushI
	var_73_int = var_73_int + var_108_int; // 0x503 Add2
	goto Label_1223; // 0x504 Jump
	
Label_1257:
	var_109_int = 1; // 0x4e9 PushI
	var_110_bool = var_74_int == var_109_int; // 0x4ea Eq
	if(var_110_bool == 0) goto Label_1271; // 0x4eb JumpB
	var_111_int = 4; // 0x4ec PushI
	rand(var_77_float, var_111_int); // 0x4ed Func
	var_112_int = 1; // 0x4ef PushI
	var_113_int = var_77_float + var_112_int; // 0x4f0 Add
	Sleep(var_113_int, var_78_bool); // 0x4f1 Func
	var_114_bool = var_78_bool == 0; // 0x4f3 Not
	if(var_114_bool == 0) goto Label_1270; // 0x4f4 JumpB
	goto Label_1285; // 0x4f5 Jump
	
Label_1270:
	goto Label_1274; // 0x4f6 Jump
	
Label_1271:
	var_115_int = var_73_int; // 0x4f7 Push
	if(var_115_int == 0) goto Label_1274; // 0x4f8 JumpB
	goto Label_1285; // 0x4f9 Jump
}


func_191(var_2_object, var_289_string)
{
	var_290_bool = 0; // 0xc0 PushV
	func_1833(var_290_bool); // 0xc1 NEW_2
	var_291_bool = var_290_bool == 0; // 0xc3 Not
	if(var_291_bool == 0) goto Label_198; // 0xc4 JumpB
	return 0; // 0xc5 Return
	
Label_198:
	var_292_bool = var_289_string == var_2_object; // 0xc6 Eq
	if(var_292_bool == 0) goto Label_201; // 0xc7 JumpB
	return 0; // 0xc8 Return
	
Label_201:
	var_293_string = ""; var_294_bool = 0; // 0xc9 PushV
	var_293_string = var_289_string; // 0xca Mov
	var_295_string = ""; // 0xcb PushS
	var_296_bool = var_289_string == var_295_string; // 0xcc Eq
	if(var_296_bool == 0) goto Label_208; // 0xcd JumpB
	var_294_bool = 0; // 0xce MovB
	goto Label_209; // 0xcf Jump
	
Label_209:
	func_1460(var_293_string, var_294_bool); // 0xd1 NEW_2
	var_2_object = var_289_string; // 0xd3 TMov
	return 0; // 0xd4 Return
	
Label_208:
	var_294_bool = 1; // 0xd0 MovB
}


func_1599()
{
	var_55_string = "oobSysGatherer1_1"; // 0x640 PushS
	var_56_int = 1; // 0x641 PushI
	SetVariable(var_55_string, var_56_int); // 0x642 Func
	return 0; // 0x644 Return
}


func_1475(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x5c3 PushV
	GetEyesHeight(var_39_float); // 0x5c4 ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5c6 MovV
	var_41_float = GetByIndex(var_40_cvector, 1); // 0x5c7 PushE
	var_41_float = var_39_float; // 0x5c8 Mov
	SetByIndex(var_40_cvector, 1) = var_41_float; // 0x5c9 PopE
	var_42_string = "head"; // 0x5ca PushS
	LookAsync(var_36_object, var_42_string, var_40_cvector); // 0x5cb Func
	return 4; // 0x5cd Return
}


func_1605()
{
	var_44_string = "playsound"; // 0x646 PushS
	var_45_string = "giveitem"; // 0x647 PushS
	TriggerWorld(var_44_string, var_45_string); // 0x648 Func
	return 0; // 0x64a Return
}


func_1611()
{
	var_50_int = 1000; // 0x64c PushI
	SetReturnValue(var_50_int); // 0x64d ObjFunc
	return 0; // 0x64f Return
}


func_1739(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x6cb PushV
	GetMainOutdoorScene(var_38_object); // 0x6cc Func
	var_40_bool = var_38_object == 0; // 0x6ce NullEq
	if(var_40_bool == 0) goto Label_1750; // 0x6cf JumpB
	var_41_string = "Can't find main outdoor scene"; // 0x6d0 PushS
	Trace(var_41_string); // 0x6d1 Func
	var_39_object = 0; // 0x6d3 SetNull
	var_35_object = var_39_object; // 0x6d4 Mov
	return 4; // 0x6d5 Return
	
Label_1750:
	GetMap(var_39_object); // 0x6d6 ObjFunc
	var_35_object = var_39_object; // 0x6d8 Mov
	return 4; // 0x6d9 Return
}


func_1486()
{
	var_22_bool = 0; // 0x5ce PushV
	func_1833(var_22_bool); // 0x5cf NEW_2
	if(var_22_bool == 0) goto Label_1492; // 0x5d1 JumpB
	lshStopSpeech(); // 0x5d2 Func
	
Label_1492:
	return 0; // 0x5d4 Return
}


func_1616(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x651 PushV
	var_302_string = "k2q04"; // 0x652 MovS
	func_1509(var_301_int, var_302_string); // 0x653 NEW_2
	var_303_int = 2; // 0x655 PushI
	var_304_bool = var_301_int == var_303_int; // 0x656 Eq
	if(var_304_bool == 0) goto Label_1626; // 0x657 JumpB
	var_299_bool = 1; // 0x658 MovB
	return 0; // 0x659 Return
	
Label_1626:
	var_299_bool = 0; // 0x65a MovB
	return 0; // 0x65b Return
}


func_465(var_0_bool, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x1d1 PushV
	var_0_bool = var_32_object; // 0x1d2 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0x1d3 PushV
	var_43_object = var_32_object; // 0x1d4 Mov
	var_44_float = 110.0; // 0x1d5 MovF
	func_1308(var_43_object, var_44_float); // 0x1d6 NEW_2
	var_88_bool = var_42_bool == 0; // 0x1d8 Not
	if(var_88_bool == 0) goto Label_476; // 0x1d9 JumpB
	var_31_int = -2; // 0x1da MovI
	return 8; // 0x1db Return
	
Label_476:
	CreateDialog(var_38_object); // 0x1dc Func
	var_89_int = 0; // 0x1de PushV
	func_1827(var_89_int); // 0x1df NEW_2
	SetNPCName(var_89_int); // 0x1e1 ObjFunc
	var_90_int = 0; // 0x1e3 PushV
	func_1825(var_90_int); // 0x1e4 NEW_2
	SetNPCDescription(var_90_int); // 0x1e6 ObjFunc
	var_91_string = ""; // 0x1e8 PushV
	func_1829(var_91_string); // 0x1e9 NEW_2
	SetPhoto(var_91_string); // 0x1eb ObjFunc
	var_92_string = ""; // 0x1ed PushV
	func_1831(var_92_string); // 0x1ee NEW_2
	SetPhoto2(var_92_string); // 0x1f0 ObjFunc
	var_93_int = 0; // 0x1f2 PushV
	func_1802(var_93_int); // 0x1f3 NEW_2
	SetPlayerName(var_93_int); // 0x1f5 ObjFunc
	var_40_int = -1; // 0x1f7 MovI
	IsOverrideActive(var_39_bool); // 0x1f8 Func
	var_101_bool = var_39_bool; // 0x1fa Push
	if(var_101_bool == 0) goto Label_510; // 0x1fb JumpB
	var_31_int = -2; // 0x1fc MovI
	return 8; // 0x1fd Return
	
Label_510:
	DoDialog(var_38_object); // 0x1fe Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x200 PushV
	var_102_object = var_32_object; // 0x201 Mov
	var_103_object = var_38_object; // 0x202 Mov
	TaskCall(4); // 0x203 TaskCall
	func_539(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x204 NEW_2
	TaskReturn(); // 0x205 TaskReturn
	IsDialogEnd(var_41_bool); // 0x207 ObjFunc
	
Label_521:
	var_210_bool = var_41_bool == 0; // 0x209 Not
	if(var_210_bool == 0) goto Label_528; // 0x20a JumpB
	sync(); // 0x20b Func
	IsDialogEnd(var_41_bool); // 0x20d ObjFunc
	goto Label_521; // 0x20f Jump
	
Label_528:
	var_211_object = Obj(); // 0x210 PushV
	var_211_object = var_32_object; // 0x211 Mov
	func_1376(); // 0x212 NEW_2
	StopDialog(var_38_object); // 0x214 Func
	GetReturnValue(var_40_int); // 0x216 ObjFunc
	var_31_int = var_40_int; // 0x218 Mov
	return 8; // 0x219 Return
}


func_1493(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x5d5 PushV
	self(var_28_object); // 0x5d6 Func
	var_26_object = var_28_object; // 0x5d8 Mov
	return 2; // 0x5d9 Return
}


func_1499(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x5db PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x5dc Or
	var_73_float = sqrt(var_74_int); // 0x5dd Sqrt2
	var_75_float = 0.0; // 0x5de PushF
	var_76_bool = var_73_float < var_75_float; // 0x5df LT
	if(var_76_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x5e1 MovV
	return 2; // 0x5e2 Return
	
Label_1507:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x5e3 Div2
	return 2; // 0x5e4 Return
}


func_1628(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0x65d PushV
	var_308_string = "ookGatherer1"; // 0x65e MovS
	func_1509(var_307_int, var_308_string); // 0x65f NEW_2
	var_309_int = 0; // 0x661 PushI
	var_310_bool = var_307_int == var_309_int; // 0x662 Eq
	if(var_310_bool == 0) goto Label_1638; // 0x663 JumpB
	var_305_bool = 1; // 0x664 MovB
	return 0; // 0x665 Return
	
Label_1638:
	var_305_bool = 0; // 0x666 MovB
	return 0; // 0x667 Return
}


func_1756()
{
	var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; // 0x6dc PushV
	var_29_int = 0; // 0x6dd PushI
	ClearSubContainer(var_29_int); // 0x6de Func
	var_30_int = 15; // 0x6e0 PushI
	irand(var_28_int, var_30_int); // 0x6e1 Func
	var_31_int = 5; // 0x6e3 PushI
	var_28_int = var_28_int + var_31_int; // 0x6e4 Add2
	var_32_int = 0; var_33_string = ""; // 0x6e5 PushV
	var_33_string = "grass_black_tvir"; // 0x6e6 MovS
	func_1797(var_32_int, var_33_string); // 0x6e7 NEW_2
	var_36_int = 0; // 0x6e9 PushI
	AddItem(var_27_bool, var_32_int, var_36_int, var_28_int); // 0x6ea Func
	var_37_int = 15; // 0x6ec PushI
	irand(var_28_int, var_37_int); // 0x6ed Func
	var_38_int = 5; // 0x6ef PushI
	var_28_int = var_28_int + var_38_int; // 0x6f0 Add2
	var_39_int = 0; var_40_string = ""; // 0x6f1 PushV
	var_40_string = "grass_blood_tvir"; // 0x6f2 MovS
	func_1797(var_39_int, var_40_string); // 0x6f3 NEW_2
	var_41_int = 0; // 0x6f5 PushI
	AddItem(var_27_bool, var_39_int, var_41_int, var_28_int); // 0x6f6 Func
	var_42_int = 15; // 0x6f8 PushI
	irand(var_28_int, var_42_int); // 0x6f9 Func
	var_43_int = 5; // 0x6fb PushI
	var_28_int = var_28_int + var_43_int; // 0x6fc Add2
	var_44_int = 0; var_45_string = ""; // 0x6fd PushV
	var_45_string = "grass_brown_tvir"; // 0x6fe MovS
	func_1797(var_44_int, var_45_string); // 0x6ff NEW_2
	var_46_int = 0; // 0x701 PushI
	AddItem(var_27_bool, var_44_int, var_46_int, var_28_int); // 0x702 Func
	return 4; // 0x704 Return
}


func_1376()
{
	var_212_bool = 0; var_213_bool = 0; // 0x560 PushV
	CameraSwitchToNormal(); // 0x561 Func
	var_214_bool = 0; // 0x563 PushV
	func_1833(var_214_bool); // 0x564 NEW_2
	if(var_214_bool == 0) goto Label_1384; // 0x566 JumpB
	goto Label_1392; // 0x567 Jump
	
Label_1392:
	return 2; // 0x570 Return
	
Label_1384:
	var_215_string = "head"; // 0x568 PushS
	HasAnimationTrack(var_213_bool, var_215_string); // 0x569 Func
	var_216_bool = var_213_bool; // 0x56b Push
	if(var_216_bool == 0) goto Label_1392; // 0x56c JumpB
	var_217_string = "head"; // 0x56d PushS
	UnlookAsync(var_217_string); // 0x56e Func
}


func_1698(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x6a2 PushV
	GetDiaryRoot(var_65_object); // 0x6a3 Func
	var_66_bool = var_65_object == 0; // 0x6a5 Not
	if(var_66_bool == 0) goto Label_1708; // 0x6a6 JumpB
	var_67_string = "Can't retrieve diary root"; // 0x6a7 PushS
	Trace(var_67_string); // 0x6a8 Func
	var_63_object = 0; // 0x6aa MovB
	return 2; // 0x6ab Return
	
Label_1708:
	var_63_object = var_65_object; // 0x6ac Mov
	return 2; // 0x6ad Return
}


func_1509(var_198_int, var_199_string)
{
	var_200_int = 0; var_201_int = 0; // 0x5e5 PushV
	GetVariable(var_199_string, var_201_int); // 0x5e6 Func
	var_198_int = var_201_int; // 0x5e8 Mov
	return 2; // 0x5e9 Return
}


func_1640(var_196_bool)
{
	var_198_int = 0; var_199_string = ""; // 0x669 PushV
	var_199_string = "oobSysGatherer1_1"; // 0x66a MovS
	func_1509(var_198_int, var_199_string); // 0x66b NEW_2
	var_202_int = 0; // 0x66d PushI
	var_203_bool = var_198_int == var_202_int; // 0x66e Eq
	if(var_203_bool == 0) goto Label_1650; // 0x66f JumpB
	var_196_bool = 1; // 0x670 MovB
	return 0; // 0x671 Return
	
Label_1650:
	var_196_bool = 0; // 0x672 MovB
	return 0; // 0x673 Return
}


func_1128(var_25_bool)
{
	var_25_bool = 1; // 0x468 MovB
	return 0; // 0x469 Return
}


func_1130(var_0_bool, var_1_object, var_2_object, var_3_object, var_52_bool, var_56_float, var_57_float)
{
	var_58_bool = 0; // 0x46b PushV
	func_1303(var_58_bool); // 0x46c NEW_2
	var_61_bool = var_58_bool == 0; // 0x46e Not
	if(var_61_bool == 0) goto Label_1137; // 0x46f JumpB
	return 0; // 0x470 Return
	
Label_1137:
	var_62_string = "player"; // 0x471 PushS
	FindActor(var_52_bool, var_62_string); // 0x472 Func
	var_2_object = 0; // 0x474 TMovB
	var_3_object = 0; // 0x475 TMovB
	var_0_bool = var_56_float; // 0x476 TMov
	var_1_object = var_57_float; // 0x477 TMov
	var_63_int = 10; // 0x478 PushI
	var_64_float = 1.0; // 0x479 PushF
	SetTimer(var_63_int, var_64_float); // 0x47a Func
	func_1209(); // 0x47d NEW_2
	var_116_bool = var_3_object == 0; // 0x47f Not
	if(var_116_bool == 0) goto Label_1156; // 0x480 JumpB
	var_117_int = 10; // 0x481 PushI
	KillTimer(var_117_int); // 0x482 Func
	
Label_1156:
	return 0; // 0x484 Return
}


func_1514(var_130_bool, var_132_string)
{
	var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_bool = 0; // 0x5ea PushV
	GetInvItemByName(var_135_int, var_132_string); // 0x5eb Func
	HasItem(var_135_int, var_136_bool); // 0x5ed ObjFunc
	var_130_bool = var_136_bool; // 0x5ef Mov
	return 4; // 0x5f0 Return
}


func_1393(var_220_bool, var_222_float)
{
	var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_bool = 0; var_231_float = 0; var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_bool = 0; // 0x571 PushV
	GetPosition(var_232_cvector); // 0x572 ObjFunc
	GetEyesHeight(var_231_float); // 0x574 ObjFunc
	var_239_float = GetByIndex(var_232_cvector, 1); // 0x576 PushE
	var_239_float = var_239_float + var_231_float; // 0x577 Add2
	SetByIndex(var_232_cvector, 1) = var_239_float; // 0x578 PopE
	GetPosition(var_233_cvector); // 0x579 Func
	GetEyesHeight(var_231_float); // 0x57b Func
	var_240_float = GetByIndex(var_233_cvector, 1); // 0x57d PushE
	var_240_float = var_240_float + var_231_float; // 0x57e Add2
	SetByIndex(var_233_cvector, 1) = var_240_float; // 0x57f PopE
	var_234_cvector = var_232_cvector - var_233_cvector; // 0x580 Sub2
	var_241_float = GetByIndex(var_234_cvector, 1); // 0x581 PushE
	var_241_float = 0; // 0x582 MovI
	SetByIndex(var_234_cvector, 1) = var_241_float; // 0x583 PopE
	var_242_int = var_234_cvector | var_234_cvector; // 0x584 Or
	var_243_float = sqrt(var_242_int); // 0x585 Sqrt
	var_234_cvector = var_234_cvector / var_234_cvector; // 0x586 Div2
	var_235_cvector = -var_234_cvector; // 0x587 Neg2
	var_244_float = var_234_cvector * var_222_float; // 0x588 Mult
	var_245_cvector = CVector(0.0, 10.0, 0.0); // 0x589 PushVec
	var_236_cvector = var_244_float - var_245_cvector; // 0x58a Sub2
	var_237_cvector = var_233_cvector + var_236_cvector; // 0x58b Add2
	IsOverrideActive(var_238_bool); // 0x58c Func
	var_246_bool = var_238_bool; // 0x58e Push
	if(var_246_bool == 0) goto Label_1426; // 0x58f JumpB
	var_220_bool = 0; // 0x590 MovB
	return 16; // 0x591 Return
	
Label_1426:
	StopWorld(); // 0x592 Func
	CameraTransit(var_237_cvector, var_235_cvector); // 0x594 Func
	var_247_float = GetByIndex(var_236_cvector, 0); // 0x596 PushE
	var_248_float = GetByIndex(var_236_cvector, 2); // 0x597 PushE
	Rotate(var_247_float, var_248_float); // 0x598 Func
	CameraWaitForPlayFinish(); // 0x59a Func
	ResumeWorld(); // 0x59c Func
	var_220_bool = 1; // 0x59e MovB
	return 16; // 0x59f Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_282_object, var_283_object)
{
	var_0_bool = var_283_object; // 0x73 TMov
	var_1_object = var_282_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_288_int = 1; // 0x76 PushI
	if(var_288_int == 0) goto Label_161; // 0x77 JumpB
	var_289_string = ""; // 0x78 PushV
	var_289_string = "Neutral"; // 0x79 MovS
	func_191(var_283_object, var_289_string); // 0x7a NEW_2
	var_297_int = 525385; // 0x7c PushI
	SetMessage(var_297_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_298_bool = 0; // 0x81 PushV
	var_298_bool = 0; // 0x82 MovB
	var_299_bool = 0; var_300_object = Obj(); // 0x83 PushV
	var_300_object = var_1_object; // 0x84 MovT
	func_1616(var_300_object); // 0x85 NEW_2
	if(var_299_bool == 0) goto Label_142; // 0x87 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x88 PushV
	var_306_object = var_1_object; // 0x89 MovT
	func_1628(var_306_object); // 0x8a NEW_2
	if(var_305_bool == 0) goto Label_142; // 0x8c JumpB
	var_298_bool = 1; // 0x8d MovB
	
Label_142:
	if(var_298_bool == 0) goto Label_148; // 0x8e JumpB
	var_311_int = 525387; // 0x8f PushI
	var_312_int = 40946; // 0x90 PushI
	var_313_int = 26755; // 0x91 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x92 TObjFunc
	
Label_148:
	var_314_int = 539023; // 0x94 PushI
	var_315_int = -1; // 0x95 PushI
	var_316_int = 40966; // 0x96 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x97 TObjFunc
	var_317_int = 539024; // 0x99 PushI
	var_318_int = -1; // 0x9a PushI
	var_319_int = 40967; // 0x9b PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x9c TObjFunc
	goto Label_161; // 0x9e Jump
	
Label_161:
	var_320_bool = 0; // 0xa1 PushV
	func_1833(var_320_bool); // 0xa2 NEW_2
	if(var_320_bool == 0) goto Label_176; // 0xa4 JumpB
	
Label_165:
	lshWaitForAnimEnd(); // 0xa5 Func
	var_321_object = var_3_object; // 0xa7 PushT
	if(var_321_object == 0) goto Label_170; // 0xa8 JumpB
	goto Label_175; // 0xa9 Jump
	
Label_175:
	goto Label_190; // 0xaf Jump
	
Label_190:
	return 0; // 0xbe Return
	
Label_170:
	var_322_string = ""; // 0xaa PushV
	var_322_string = var_2_object; // 0xab MovT
	func_1444(var_322_string); // 0xac NEW_2
	goto Label_165; // 0xae Jump
	
Label_176:
	var_323_string = "all"; // 0xb0 PushS
	var_324_string = "idle"; // 0xb1 PushS
	PlayAnimation(var_323_string, var_324_string); // 0xb2 Func
	
Label_180:
	WaitForAnimEnd(); // 0xb4 Func
	var_325_object = var_3_object; // 0xb6 PushT
	if(var_325_object == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_185:
	var_326_string = "all"; // 0xb9 PushS
	var_327_string = "idle"; // 0xba PushS
	PlayAnimation(var_326_string, var_327_string); // 0xbb Func
	goto Label_180; // 0xbd Jump
}


func_1521(var_46_float)
{
	var_47_float = 0; var_48_float = 0; // 0x5f1 PushV
	GetGameTime(var_48_float); // 0x5f2 Func
	var_46_float = var_48_float; // 0x5f4 Mov
	return 2; // 0x5f5 Return
}


func_1652(var_128_bool, var_129_object)
{
	var_130_bool = 0; var_131_object = Obj(); var_132_string = ""; // 0x675 PushV
	var_131_object = var_129_object; // 0x676 Mov
	var_132_string = "blood"; // 0x677 MovS
	func_1514(var_131_object, var_132_string); // 0x678 NEW_2
	if(var_130_bool == 0) goto Label_1661; // 0x67a JumpB
	var_128_bool = 1; // 0x67b MovB
	return 0; // 0x67c Return
	
Label_1661:
	var_128_bool = 0; // 0x67d MovB
	return 0; // 0x67e Return
}


func_1526(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0x5f6 PushV
	GetGameTime(var_21_float); // 0x5f7 Func
	var_22_int = 1; // 0x5f9 PushI
	var_23_int = 0; // 0x5fa PushV
	var_24_int = 24; // 0x5fb PushI
	var_23_int = var_21_float / var_21_float; // 0x5fc Div2
	var_19_int = var_22_int + var_23_int; // 0x5fd Add2
	return 2; // 0x5fe Return
}


func_1535(var_87_string, var_88_int)
{
	var_89_string = ""; var_90_string = ""; // 0x5ff PushV
	var_90_string = "idle"; // 0x600 MovS
	var_91_int = var_88_int; // 0x601 Push
	if(var_91_int == 0) goto Label_1540; // 0x602 JumpB
	var_90_string = var_90_string + var_88_int; // 0x603 Add2
	
Label_1540:
	var_87_string = var_90_string; // 0x604 Mov
	return 2; // 0x605 Return
}


