task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xaf PushI
	if(var_23_int == 0) goto Label_421; // 0xb0 JumpB
	func_1735(); // 0xb2 NEW_2
	var_25_int = 32444; // 0xb4 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xb5 Eq
	if(var_26_bool == 0) goto Label_188; // 0xb6 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xb7 PushV
	var_27_object = var_1_object; // 0xb8 MovT
	var_28_object = var_0_object; // 0xb9 MovT
	func_1824(); // 0xba NEW_2
	
Label_188:
	var_54_int = 32756; // 0xbc PushI
	var_55_bool = var_22_cvector == var_54_int; // 0xbd Eq
	if(var_55_bool == 0) goto Label_196; // 0xbe JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xbf PushV
	var_56_object = var_1_object; // 0xc0 MovT
	var_57_object = var_0_object; // 0xc1 MovT
	func_1824(); // 0xc2 NEW_2
	
Label_196:
	var_58_int = 32750; // 0xc4 PushI
	var_59_bool = var_22_cvector == var_58_int; // 0xc5 Eq
	if(var_59_bool == 0) goto Label_204; // 0xc6 JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0xc7 PushV
	var_60_object = var_1_object; // 0xc8 MovT
	var_61_object = var_0_object; // 0xc9 MovT
	func_1833(); // 0xca NEW_2
	
Label_204:
	var_76_int = 32441; // 0xcc PushI
	var_77_bool = var_21_bool == var_76_int; // 0xcd Eq
	if(var_77_bool == 0) goto Label_247; // 0xce JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0xcf PushV
	var_79_object = var_1_object; // 0xd0 MovT
	func_1849(var_79_object); // 0xd1 NEW_2
	if(var_78_bool == 0) goto Label_227; // 0xd3 JumpB
	var_86_string = ""; // 0xd4 PushV
	var_86_string = "Questioning"; // 0xd5 MovS
	func_152(var_22_cvector, var_86_string); // 0xd6 NEW_2
	var_103_int = 531123; // 0xd8 PushI
	SetMessage(var_103_int); // 0xd9 TObjFunc
	ClearReplies(); // 0xdb TObjFunc
	var_104_int = 531124; // 0xdd PushI
	var_105_int = 32443; // 0xde PushI
	var_106_int = 32442; // 0xdf PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe0 TObjFunc
	return 0; // 0xe2 Return
	
Label_227:
	var_107_string = ""; // 0xe3 PushV
	var_107_string = "Neutral"; // 0xe4 MovS
	func_152(var_22_cvector, var_107_string); // 0xe5 NEW_2
	var_108_int = 531127; // 0xe7 PushI
	SetMessage(var_108_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_109_int = 531128; // 0xec PushI
	var_110_int = -1; // 0xed PushI
	var_111_int = 32446; // 0xee PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0xef TObjFunc
	var_112_int = 531398; // 0xf1 PushI
	var_113_int = -1; // 0xf2 PushI
	var_114_int = 32739; // 0xf3 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_115_int = 32745; // 0xf7 PushI
	var_116_bool = var_21_bool == var_115_int; // 0xf8 Eq
	if(var_116_bool == 0) goto Label_250; // 0xf9 JumpB
	
Label_250:
	var_117_int = 32443; // 0xfa PushI
	var_118_bool = var_21_bool == var_117_int; // 0xfb Eq
	if(var_118_bool == 0) goto Label_268; // 0xfc JumpB
	var_119_string = ""; // 0xfd PushV
	var_119_string = "Suspicion"; // 0xfe MovS
	func_152(var_22_cvector, var_119_string); // 0xff NEW_2
	var_120_int = 531125; // 0x101 PushI
	SetMessage(var_120_int); // 0x102 TObjFunc
	ClearReplies(); // 0x104 TObjFunc
	var_121_int = 531399; // 0x106 PushI
	var_122_int = 32741; // 0x107 PushI
	var_123_int = 32740; // 0x108 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_124_int = 32741; // 0x10c PushI
	var_125_bool = var_21_bool == var_124_int; // 0x10d Eq
	if(var_125_bool == 0) goto Label_291; // 0x10e JumpB
	var_126_string = ""; // 0x10f PushV
	var_126_string = "Suspicion"; // 0x110 MovS
	func_152(var_22_cvector, var_126_string); // 0x111 NEW_2
	var_127_int = 531400; // 0x113 PushI
	SetMessage(var_127_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_128_int = 531401; // 0x118 PushI
	var_129_int = 32757; // 0x119 PushI
	var_130_int = 32742; // 0x11a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x11b TObjFunc
	var_131_int = 531407; // 0x11d PushI
	var_132_int = 32749; // 0x11e PushI
	var_133_int = 32748; // 0x11f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x120 TObjFunc
	return 0; // 0x122 Return
	
Label_291:
	var_134_int = 32749; // 0x123 PushI
	var_135_bool = var_21_bool == var_134_int; // 0x124 Eq
	if(var_135_bool == 0) goto Label_309; // 0x125 JumpB
	var_136_string = ""; // 0x126 PushV
	var_136_string = "Questioning"; // 0x127 MovS
	func_152(var_22_cvector, var_136_string); // 0x128 NEW_2
	var_137_int = 531408; // 0x12a PushI
	SetMessage(var_137_int); // 0x12b TObjFunc
	ClearReplies(); // 0x12d TObjFunc
	var_138_int = 531409; // 0x12f PushI
	var_139_int = -1; // 0x130 PushI
	var_140_int = 32750; // 0x131 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_141_int = 32757; // 0x135 PushI
	var_142_bool = var_21_bool == var_141_int; // 0x136 Eq
	if(var_142_bool == 0) goto Label_332; // 0x137 JumpB
	var_143_string = ""; // 0x138 PushV
	var_143_string = "Doubt"; // 0x139 MovS
	func_152(var_22_cvector, var_143_string); // 0x13a NEW_2
	var_144_int = 531415; // 0x13c PushI
	SetMessage(var_144_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_145_int = 531417; // 0x141 PushI
	var_146_int = 32760; // 0x142 PushI
	var_147_int = 32759; // 0x143 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x144 TObjFunc
	var_148_int = 531416; // 0x146 PushI
	var_149_int = 32743; // 0x147 PushI
	var_150_int = 32758; // 0x148 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_151_int = 32743; // 0x14c PushI
	var_152_bool = var_21_bool == var_151_int; // 0x14d Eq
	if(var_152_bool == 0) goto Label_355; // 0x14e JumpB
	var_153_string = ""; // 0x14f PushV
	var_153_string = "Grin"; // 0x150 MovS
	func_152(var_22_cvector, var_153_string); // 0x151 NEW_2
	var_154_int = 531402; // 0x153 PushI
	SetMessage(var_154_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_155_int = 531126; // 0x158 PushI
	var_156_int = -1; // 0x159 PushI
	var_157_int = 32444; // 0x15a PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x15b TObjFunc
	var_158_int = 531410; // 0x15d PushI
	var_159_int = 32753; // 0x15e PushI
	var_160_int = 32752; // 0x15f PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_161_int = 32753; // 0x163 PushI
	var_162_bool = var_21_bool == var_161_int; // 0x164 Eq
	if(var_162_bool == 0) goto Label_373; // 0x165 JumpB
	var_163_string = ""; // 0x166 PushV
	var_163_string = "Neutral"; // 0x167 MovS
	func_152(var_22_cvector, var_163_string); // 0x168 NEW_2
	var_164_int = 531411; // 0x16a PushI
	SetMessage(var_164_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_165_int = 531412; // 0x16f PushI
	var_166_int = 32755; // 0x170 PushI
	var_167_int = 32754; // 0x171 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_168_int = 32755; // 0x175 PushI
	var_169_bool = var_21_bool == var_168_int; // 0x176 Eq
	if(var_169_bool == 0) goto Label_391; // 0x177 JumpB
	var_170_string = ""; // 0x178 PushV
	var_170_string = "Grin"; // 0x179 MovS
	func_152(var_22_cvector, var_170_string); // 0x17a NEW_2
	var_171_int = 531413; // 0x17c PushI
	SetMessage(var_171_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_172_int = 531414; // 0x181 PushI
	var_173_int = -1; // 0x182 PushI
	var_174_int = 32756; // 0x183 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_175_int = 32760; // 0x187 PushI
	var_176_bool = var_21_bool == var_175_int; // 0x188 Eq
	if(var_176_bool == 0) goto Label_409; // 0x189 JumpB
	var_177_string = ""; // 0x18a PushV
	var_177_string = "Doubt"; // 0x18b MovS
	func_152(var_22_cvector, var_177_string); // 0x18c NEW_2
	var_178_int = 531418; // 0x18e PushI
	SetMessage(var_178_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_179_int = 531419; // 0x193 PushI
	var_180_int = 32743; // 0x194 PushI
	var_181_int = 32761; // 0x195 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_3_string = 1; // 0x199 TMovB
	var_182_bool = 0; // 0x19a PushV
	func_1822(var_182_bool); // 0x19b NEW_2
	if(var_182_bool == 0) goto Label_417; // 0x19d JumpB
	lshStopAnimation(); // 0x19e Func
	goto Label_419; // 0x1a0 Jump
	
Label_419:
	return 0; // 0x1a3 Return
	
Label_417:
	StopAnimation(); // 0x1a1 Func
	
Label_421:
	return 0; // 0x1a5 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x24d PushI
	if(var_23_int == 0) goto Label_745; // 0x24e JumpB
	func_1735(); // 0x250 NEW_2
	var_25_int = 36944; // 0x252 PushI
	var_26_bool = var_22_cvector == var_25_int; // 0x253 Eq
	if(var_26_bool == 0) goto Label_602; // 0x254 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0x255 PushV
	var_27_object = var_1_object; // 0x256 MovT
	var_28_object = var_0_object; // 0x257 MovT
	func_1843(); // 0x258 NEW_2
	
Label_602:
	var_31_int = 36943; // 0x25a PushI
	var_32_bool = var_21_bool == var_31_int; // 0x25b Eq
	if(var_32_bool == 0) goto Label_630; // 0x25c JumpB
	var_33_string = ""; // 0x25d PushV
	var_33_string = "Doubt"; // 0x25e MovS
	func_566(var_22_cvector, var_33_string); // 0x25f NEW_2
	var_50_int = 535268; // 0x261 PushI
	SetMessage(var_50_int); // 0x262 TObjFunc
	ClearReplies(); // 0x264 TObjFunc
	var_51_bool = 0; var_52_object = Obj(); // 0x266 PushV
	var_52_object = var_1_object; // 0x267 MovT
	func_1861(var_52_object); // 0x268 NEW_2
	if(var_51_bool == 0) goto Label_624; // 0x26a JumpB
	var_59_int = 535269; // 0x26b PushI
	var_60_int = 37004; // 0x26c PushI
	var_61_int = 36944; // 0x26d PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x26e TObjFunc
	
Label_624:
	var_62_int = 535322; // 0x270 PushI
	var_63_int = -1; // 0x271 PushI
	var_64_int = 37003; // 0x272 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x273 TObjFunc
	return 0; // 0x275 Return
	
Label_630:
	var_65_int = 37004; // 0x276 PushI
	var_66_bool = var_21_bool == var_65_int; // 0x277 Eq
	if(var_66_bool == 0) goto Label_648; // 0x278 JumpB
	var_67_string = ""; // 0x279 PushV
	var_67_string = "Doubt"; // 0x27a MovS
	func_566(var_22_cvector, var_67_string); // 0x27b NEW_2
	var_68_int = 535323; // 0x27d PushI
	SetMessage(var_68_int); // 0x27e TObjFunc
	ClearReplies(); // 0x280 TObjFunc
	var_69_int = 535325; // 0x282 PushI
	var_70_int = 37007; // 0x283 PushI
	var_71_int = 37006; // 0x284 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x285 TObjFunc
	return 0; // 0x287 Return
	
Label_648:
	var_72_int = 37008; // 0x288 PushI
	var_73_bool = var_21_bool == var_72_int; // 0x289 Eq
	if(var_73_bool == 0) goto Label_651; // 0x28a JumpB
	
Label_651:
	var_74_int = 37011; // 0x28b PushI
	var_75_bool = var_21_bool == var_74_int; // 0x28c Eq
	if(var_75_bool == 0) goto Label_669; // 0x28d JumpB
	var_76_string = ""; // 0x28e PushV
	var_76_string = "Grin"; // 0x28f MovS
	func_566(var_22_cvector, var_76_string); // 0x290 NEW_2
	var_77_int = 535330; // 0x292 PushI
	SetMessage(var_77_int); // 0x293 TObjFunc
	ClearReplies(); // 0x295 TObjFunc
	var_78_int = 535331; // 0x297 PushI
	var_79_int = 37007; // 0x298 PushI
	var_80_int = 37012; // 0x299 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x29a TObjFunc
	return 0; // 0x29c Return
	
Label_669:
	var_81_int = 37015; // 0x29d PushI
	var_82_bool = var_21_bool == var_81_int; // 0x29e Eq
	if(var_82_bool == 0) goto Label_692; // 0x29f JumpB
	var_83_string = ""; // 0x2a0 PushV
	var_83_string = "Grin"; // 0x2a1 MovS
	func_566(var_22_cvector, var_83_string); // 0x2a2 NEW_2
	var_84_int = 535334; // 0x2a4 PushI
	SetMessage(var_84_int); // 0x2a5 TObjFunc
	ClearReplies(); // 0x2a7 TObjFunc
	var_85_int = 535336; // 0x2a9 PushI
	var_86_int = -1; // 0x2aa PushI
	var_87_int = 37017; // 0x2ab PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x2ac TObjFunc
	var_88_int = 535335; // 0x2ae PushI
	var_89_int = -1; // 0x2af PushI
	var_90_int = 37016; // 0x2b0 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x2b1 TObjFunc
	return 0; // 0x2b3 Return
	
Label_692:
	var_91_int = 37007; // 0x2b4 PushI
	var_92_bool = var_21_bool == var_91_int; // 0x2b5 Eq
	if(var_92_bool == 0) goto Label_710; // 0x2b6 JumpB
	var_93_string = ""; // 0x2b7 PushV
	var_93_string = "Questioning"; // 0x2b8 MovS
	func_566(var_22_cvector, var_93_string); // 0x2b9 NEW_2
	var_94_int = 535326; // 0x2bb PushI
	SetMessage(var_94_int); // 0x2bc TObjFunc
	ClearReplies(); // 0x2be TObjFunc
	var_95_int = 535332; // 0x2c0 PushI
	var_96_int = 37014; // 0x2c1 PushI
	var_97_int = 37013; // 0x2c2 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x2c3 TObjFunc
	return 0; // 0x2c5 Return
	
Label_710:
	var_98_int = 37014; // 0x2c6 PushI
	var_99_bool = var_21_bool == var_98_int; // 0x2c7 Eq
	if(var_99_bool == 0) goto Label_733; // 0x2c8 JumpB
	var_100_string = ""; // 0x2c9 PushV
	var_100_string = "Questioning"; // 0x2ca MovS
	func_566(var_22_cvector, var_100_string); // 0x2cb NEW_2
	var_101_int = 535333; // 0x2cd PushI
	SetMessage(var_101_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_102_int = 535337; // 0x2d2 PushI
	var_103_int = -1; // 0x2d3 PushI
	var_104_int = 37019; // 0x2d4 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x2d5 TObjFunc
	var_105_int = 535338; // 0x2d7 PushI
	var_106_int = -1; // 0x2d8 PushI
	var_107_int = 37020; // 0x2d9 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x2da TObjFunc
	return 0; // 0x2dc Return
	
Label_733:
	var_3_string = 1; // 0x2dd TMovB
	var_108_bool = 0; // 0x2de PushV
	func_1822(var_108_bool); // 0x2df NEW_2
	if(var_108_bool == 0) goto Label_741; // 0x2e1 JumpB
	lshStopAnimation(); // 0x2e2 Func
	goto Label_743; // 0x2e4 Jump
	
Label_743:
	return 0; // 0x2e7 Return
	
Label_741:
	StopAnimation(); // 0x2e5 Func
	
Label_745:
	return 0; // 0x2e9 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x38c PushI
	if(var_23_int == 0) goto Label_971; // 0x38d JumpB
	func_1735(); // 0x38f NEW_2
	var_25_int = 19142; // 0x391 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x392 Eq
	if(var_26_bool == 0) goto Label_936; // 0x393 JumpB
	var_27_string = ""; // 0x394 PushV
	var_27_string = "Neutral"; // 0x395 MovS
	func_885(var_22_cvector, var_27_string); // 0x396 NEW_2
	var_44_int = 518009; // 0x398 PushI
	SetMessage(var_44_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_45_int = 518010; // 0x39d PushI
	var_46_int = 32920; // 0x39e PushI
	var_47_int = 19143; // 0x39f PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3a0 TObjFunc
	var_48_int = 531560; // 0x3a2 PushI
	var_49_int = -1; // 0x3a3 PushI
	var_50_int = 32919; // 0x3a4 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x3a5 TObjFunc
	return 0; // 0x3a7 Return
	
Label_936:
	var_51_int = 32920; // 0x3a8 PushI
	var_52_bool = var_21_bool == var_51_int; // 0x3a9 Eq
	if(var_52_bool == 0) goto Label_959; // 0x3aa JumpB
	var_53_string = ""; // 0x3ab PushV
	var_53_string = "Neutral"; // 0x3ac MovS
	func_885(var_22_cvector, var_53_string); // 0x3ad NEW_2
	var_54_int = 531561; // 0x3af PushI
	SetMessage(var_54_int); // 0x3b0 TObjFunc
	ClearReplies(); // 0x3b2 TObjFunc
	var_55_int = 531562; // 0x3b4 PushI
	var_56_int = -1; // 0x3b5 PushI
	var_57_int = 32921; // 0x3b6 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x3b7 TObjFunc
	var_58_int = 531563; // 0x3b9 PushI
	var_59_int = -1; // 0x3ba PushI
	var_60_int = 32922; // 0x3bb PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x3bc TObjFunc
	return 0; // 0x3be Return
	
Label_959:
	var_3_string = 1; // 0x3bf TMovB
	var_61_bool = 0; // 0x3c0 PushV
	func_1822(var_61_bool); // 0x3c1 NEW_2
	if(var_61_bool == 0) goto Label_967; // 0x3c3 JumpB
	lshStopAnimation(); // 0x3c4 Func
	goto Label_969; // 0x3c6 Jump
	
Label_969:
	return 0; // 0x3c9 Return
	
Label_967:
	StopAnimation(); // 0x3c7 Func
	
Label_971:
	return 0; // 0x3cb Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x46e PushI
	if(var_23_int == 0) goto Label_1174; // 0x46f JumpB
	func_1735(); // 0x471 NEW_2
	var_25_int = 42563; // 0x473 PushI
	var_26_bool = var_21_int == var_25_int; // 0x474 Eq
	if(var_26_bool == 0) goto Label_1162; // 0x475 JumpB
	var_27_string = ""; // 0x476 PushV
	var_27_string = "Neutral"; // 0x477 MovS
	func_1111(var_22_cvector, var_27_string); // 0x478 NEW_2
	var_44_int = 540554; // 0x47a PushI
	SetMessage(var_44_int); // 0x47b TObjFunc
	ClearReplies(); // 0x47d TObjFunc
	var_45_int = 540555; // 0x47f PushI
	var_46_int = -1; // 0x480 PushI
	var_47_int = 42564; // 0x481 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x482 TObjFunc
	var_48_int = 540794; // 0x484 PushI
	var_49_int = -1; // 0x485 PushI
	var_50_int = 42843; // 0x486 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_3_string = 1; // 0x48a TMovB
	var_51_bool = 0; // 0x48b PushV
	func_1822(var_51_bool); // 0x48c NEW_2
	if(var_51_bool == 0) goto Label_1170; // 0x48e JumpB
	lshStopAnimation(); // 0x48f Func
	goto Label_1172; // 0x491 Jump
	
Label_1172:
	return 0; // 0x494 Return
	
Label_1170:
	StopAnimation(); // 0x492 Func
	
Label_1174:
	return 0; // 0x496 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x4e4 PushI
	var_23_bool = var_21_int == var_22_int; // 0x4e5 Eq
	if(var_23_bool == 0) goto Label_1288; // 0x4e6 JumpB
	func_1247(); // 0x4e8 NEW_2
	var_25_bool = 0; // 0x4ea PushV
	var_25_bool = 0; // 0x4eb MovB
	var_26_bool = 0; // 0x4ec PushV
	func_1461(var_26_bool); // 0x4ed NEW_2
	if(var_26_bool == 0) goto Label_1269; // 0x4ef JumpB
	var_29_bool = 0; // 0x4f0 PushV
	func_1216(var_29_bool); // 0x4f1 NEW_2
	if(var_29_bool == 0) goto Label_1269; // 0x4f3 JumpB
	var_25_bool = 1; // 0x4f4 MovB
	
Label_1269:
	if(var_25_bool == 0) goto Label_1282; // 0x4f5 JumpB
	var_46_bool = 0; // 0x4f6 PushV
	func_1196(var_46_bool); // 0x4f7 NEW_2
	if(var_46_bool == 0) goto Label_1281; // 0x4f9 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x4fa PushV
	var_67_object = Obj(); // 0x4fb PushV
	func_1742(var_67_object); // 0x4fc NEW_2
	var_66_object = var_67_object; // 0x4fd Mov
	func_1609(var_66_object); // 0x4ff NEW_2
	
Label_1281:
	goto Label_1288; // 0x501 Jump
	
Label_1288:
	return 0; // 0x508 Return
	
Label_1282:
	func_1211(var_21_int); // 0x503 NEW_2
	func_1238(); // 0x506 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1429(); // 0x50a NEW_2
	func_1247(); // 0x50d NEW_2
	lshStopSpeech(); // 0x50f Func
	lshStopAnimation(); // 0x511 Func
	StopAsync(); // 0x513 Func
	Hold(); // 0x515 Func
	return 0; // 0x517 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x518 Func
	func_1247(); // 0x51b NEW_2
	var_22_string = ""; // 0x51d PushV
	var_22_string = "Neutral"; // 0x51e MovS
	func_1689(var_22_string); // 0x51f NEW_2
	func_1238(); // 0x522 NEW_2
	return 0; // 0x524 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x526 Push
	if(var_22_bool == 0) goto Label_1324; // 0x527 JumpB
	func_1238(); // 0x529 NEW_2
	goto Label_1328; // 0x52b Jump
	
Label_1328:
	return 0; // 0x530 Return
	
Label_1324:
	var_28_string = ""; // 0x52c PushV
	var_28_string = "Neutral"; // 0x52d MovS
	func_1689(var_28_string); // 0x52e NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x531 PushV
	IsOverrideActive(var_23_bool); // 0x532 Func
	var_24_bool = var_23_bool == 0; // 0x534 Not
	if(var_24_bool == 0) goto Label_1357; // 0x535 JumpB
	EventDisable(0); // 0x536 EventDisable
	func_1429(); // 0x538 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x53a PushV
	var_26_object = var_21_object; // 0x53b Mov
	func_1452(var_26_object); // 0x53c NEW_2
	EventEnable(0); // 0x53e EventEnable
	var_39_object = Obj(); // 0x53f PushV
	var_39_object = var_21_object; // 0x540 Mov
	func_1957(var_39_object); // 0x541 NEW_2
	var_455_string = ""; // 0x543 PushV
	var_455_string = "Neutral"; // 0x544 MovS
	func_1689(var_455_string); // 0x545 NEW_2
	func_1247(); // 0x548 NEW_2
	func_1238(); // 0x54b NEW_2
	
Label_1357:
	return 2; // 0x54d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x497 PushGE
	var_21_bool = 0; // 0x498 MovB
	GlobalVars[1] = var_21_bool; // 0x499 PopGE
	func_1182(var_20_cvector); // 0x49b NEW_2
	return 0; // 0x49d Return
}


func_0(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0x0 PushV
	var_0_object = var_270_object; // 0x1 TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0x2 PushV
	var_281_object = var_270_object; // 0x3 Mov
	var_282_float = 70.0; // 0x4 MovF
	func_1466(var_281_object, var_282_float); // 0x5 NEW_2
	var_283_bool = var_280_bool == 0; // 0x7 Not
	if(var_283_bool == 0) goto Label_11; // 0x8 JumpB
	var_269_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_276_object); // 0xb Func
	var_284_int = 0; // 0xd PushV
	func_1816(var_284_int); // 0xe NEW_2
	SetNPCName(var_284_int); // 0x10 ObjFunc
	var_285_int = 0; // 0x12 PushV
	func_1814(var_285_int); // 0x13 NEW_2
	SetNPCDescription(var_285_int); // 0x15 ObjFunc
	var_286_string = ""; // 0x17 PushV
	func_1818(var_286_string); // 0x18 NEW_2
	SetPhoto(var_286_string); // 0x1a ObjFunc
	var_287_string = ""; // 0x1c PushV
	func_1820(var_287_string); // 0x1d NEW_2
	SetPhoto2(var_287_string); // 0x1f ObjFunc
	var_288_int = 0; // 0x21 PushV
	func_1940(var_288_int); // 0x22 NEW_2
	SetPlayerName(var_288_int); // 0x24 ObjFunc
	var_278_int = -1; // 0x26 MovI
	IsOverrideActive(var_277_bool); // 0x27 Func
	var_289_bool = var_277_bool; // 0x29 Push
	if(var_289_bool == 0) goto Label_45; // 0x2a JumpB
	var_269_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_276_object); // 0x2d Func
	var_290_object = Obj(); var_291_object = Obj(); // 0x2f PushV
	var_290_object = var_270_object; // 0x30 Mov
	var_291_object = var_276_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_292_object, var_293_object, var_294_string, var_295_bool, var_290_object, var_291_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_279_bool); // 0x36 ObjFunc
	
Label_56:
	var_333_bool = var_279_bool == 0; // 0x38 Not
	if(var_333_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_279_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_334_object = Obj(); // 0x3f PushV
	var_334_object = var_270_object; // 0x40 Mov
	func_1534(); // 0x41 NEW_2
	StopDialog(var_276_object); // 0x43 Func
	GetReturnValue(var_278_int); // 0x45 ObjFunc
	var_269_int = var_278_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1797(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x705 PushV
	var_43_int = 0; // 0x706 MovI
	
Label_1799:
	var_45_string = "all"; // 0x707 PushS
	var_46_string = ""; var_47_int = 0; // 0x708 PushV
	var_47_int = var_43_int; // 0x709 Mov
	func_1790(var_46_string, var_47_int); // 0x70a NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x70c Func
	var_51_bool = var_44_bool == 0; // 0x70e Not
	if(var_51_bool == 0) goto Label_1809; // 0x70f JumpB
	goto Label_1812; // 0x710 Jump
	
Label_1812:
	var_40_int = var_43_int; // 0x714 Mov
	return 4; // 0x715 Return
	
Label_1809:
	var_52_int = 1; // 0x711 PushI
	var_43_int = var_43_int + var_52_int; // 0x712 Add2
	goto Label_1799; // 0x713 Jump
}


func_1551(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x60f PushV
	var_122_string = "voice_common"; // 0x610 PushS
	GetVariable(var_122_string, var_120_int); // 0x611 Func
	var_123_int = var_120_int; // 0x613 Push
	if(var_123_int == 0) goto Label_1589; // 0x614 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x615 PushV
	var_125_object = var_114_object; // 0x616 Mov
	func_1609(var_125_object); // 0x617 NEW_2
	var_154_bool = var_124_bool == 0; // 0x619 Not
	if(var_154_bool == 0) goto Label_1571; // 0x61a JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x61b PushV
	var_156_object = var_114_object; // 0x61c Mov
	func_1646(var_156_object); // 0x61d NEW_2
	var_190_bool = var_155_bool == 0; // 0x61f Not
	if(var_190_bool == 0) goto Label_1571; // 0x620 JumpB
	var_113_bool = 0; // 0x621 MovB
	return 4; // 0x622 Return
	
Label_1571:
	var_191_int = 2; // 0x623 PushI
	irand(var_121_int, var_191_int); // 0x624 Func
	var_192_int = var_121_int; // 0x626 Push
	if(var_192_int == 0) goto Label_1584; // 0x627 JumpB
	var_193_string = "voice_common"; // 0x628 PushS
	var_194_int = 1; // 0x629 PushI
	var_195_int = var_120_int + var_194_int; // 0x62a Add
	var_196_int = 3; // 0x62b PushI
	var_197_int = var_195_int / var_196_int; // 0x62c Mod
	SetVariable(var_193_string, var_197_int); // 0x62d Func
	goto Label_1588; // 0x62f Jump
	
Label_1588:
	goto Label_1607; // 0x634 Jump
	
Label_1607:
	var_113_bool = 1; // 0x647 MovB
	return 4; // 0x648 Return
	
Label_1584:
	var_198_string = "voice_common"; // 0x630 PushS
	var_199_int = 0; // 0x631 PushI
	SetVariable(var_198_string, var_199_int); // 0x632 Func
	
Label_1589:
	var_200_bool = 0; var_201_object = Obj(); // 0x635 PushV
	var_201_object = var_114_object; // 0x636 Mov
	func_1646(var_201_object); // 0x637 NEW_2
	var_202_bool = var_200_bool == 0; // 0x639 Not
	if(var_202_bool == 0) goto Label_1603; // 0x63a JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x63b PushV
	var_204_object = var_114_object; // 0x63c Mov
	func_1609(var_204_object); // 0x63d NEW_2
	var_205_bool = var_203_bool == 0; // 0x63f Not
	if(var_205_bool == 0) goto Label_1603; // 0x640 JumpB
	var_113_bool = 0; // 0x641 MovB
	return 4; // 0x642 Return
	
Label_1603:
	var_206_string = "voice_common"; // 0x643 PushS
	var_207_int = 1; // 0x644 PushI
	SetVariable(var_206_string, var_207_int); // 0x645 Func
}


func_1427(var_60_bool)
{
	var_60_bool = 1; // 0x593 MovB
	return 0; // 0x594 Return
}


func_1940(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x794 PushV
	var_107_string = "branch"; // 0x795 PushS
	GetVariable(var_107_string, var_106_int); // 0x796 Func
	var_108_int = 0; // 0x798 PushI
	var_109_bool = var_106_int == var_108_int; // 0x799 Eq
	if(var_109_bool == 0) goto Label_1950; // 0x79a JumpB
	var_104_int = 1; // 0x79b MovI
	return 2; // 0x79c Return
	
Label_1950:
	var_110_int = 1; // 0x79e PushI
	var_111_bool = var_106_int == var_110_int; // 0x79f Eq
	if(var_111_bool == 0) goto Label_1955; // 0x7a0 JumpB
	var_104_int = 2; // 0x7a1 MovI
	return 2; // 0x7a2 Return
	
Label_1955:
	var_104_int = 3; // 0x7a3 MovI
	return 2; // 0x7a4 Return
}


func_1429()
{
	StopAnimation(); // 0x595 Func
	StopGroup0(); // 0x597 Func
	return 0; // 0x599 Return
}


func_1814(var_101_int)
{
	var_101_int = 515536; // 0x716 MovI
	return 0; // 0x717 Return
}


func_1912(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0x778 PushV
	var_45_object = Obj(); // 0x779 PushV
	func_1899(var_45_object); // 0x77a NEW_2
	var_42_object = var_45_object; // 0x77b Mov
	Find(var_38_int, var_43_object); // 0x77d ObjFunc
	var_50_bool = var_43_object == 0; // 0x77f Not
	if(var_50_bool == 0) goto Label_1927; // 0x780 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0x781 PushS
	var_52_int = var_51_string + var_38_int; // 0x782 Add
	Trace(var_52_int); // 0x783 Func
	var_36_bool = 0; // 0x785 MovB
	return 6; // 0x786 Return
	
Label_1927:
	AddChild(var_37_object); // 0x787 ObjFunc
	var_53_int = 7; // 0x789 PushI
	SendWorldWndMessage(var_53_int); // 0x78a Func
	GetCategory(var_44_int); // 0x78c ObjFunc
	SetDiarySection(var_44_int); // 0x78e Func
	var_36_bool = 0; // 0x790 MovB
	return 6; // 0x791 Return
}


func_1816(var_100_int)
{
	var_100_int = 502861; // 0x718 MovI
	return 0; // 0x719 Return
}


func_1689(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x699 PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x69a Func
	var_248_bool = var_245_bool; // 0x69c Push
	if(var_248_bool == 0) goto Label_1700; // 0x69d JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x69e Func
	var_249_bool = 0; // 0x6a0 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x6a1 Func
	goto Label_1704; // 0x6a3 Jump
	
Label_1704:
	return 6; // 0x6a8 Return
	
Label_1700:
	var_250_string = "Can't find lsh animation : "; // 0x6a4 PushS
	var_251_int = var_250_string + var_241_string; // 0x6a5 Add
	Trace(var_251_int); // 0x6a6 Func
}


func_1434(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x59a PushV
	GetPosition(var_41_cvector); // 0x59b Func
	GetPosition(var_42_cvector); // 0x59d ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x59f Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x5a0 Or2
	return 6; // 0x5a1 Return
}


func_1818(var_102_string)
{
	var_102_string = "ui/NPC_Han.png"; // 0x71a MovS
	return 0; // 0x71b Return
}


func_1820(var_103_string)
{
	var_103_string = "ui/NPC_Han_b.png"; // 0x71c MovS
	return 0; // 0x71d Return
}


func_1053(var_0_object, var_1_object, var_2_object, var_3_string, var_423_object, var_424_object)
{
	var_0_object = var_424_object; // 0x41e TMov
	var_1_object = var_423_object; // 0x41f TMov
	var_3_string = 0; // 0x420 TMovB
	var_429_int = 1; // 0x421 PushI
	if(var_429_int == 0) goto Label_1081; // 0x422 JumpB
	var_430_string = ""; // 0x423 PushV
	var_430_string = "Neutral"; // 0x424 MovS
	func_1111(var_424_object, var_430_string); // 0x425 NEW_2
	var_438_int = 540554; // 0x427 PushI
	SetMessage(var_438_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_439_int = 540555; // 0x42c PushI
	var_440_int = -1; // 0x42d PushI
	var_441_int = 42564; // 0x42e PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x42f TObjFunc
	var_442_int = 540794; // 0x431 PushI
	var_443_int = -1; // 0x432 PushI
	var_444_int = 42843; // 0x433 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x434 TObjFunc
	goto Label_1081; // 0x436 Jump
	
Label_1081:
	var_445_bool = 0; // 0x439 PushV
	func_1822(var_445_bool); // 0x43a NEW_2
	if(var_445_bool == 0) goto Label_1096; // 0x43c JumpB
	
Label_1085:
	lshWaitForAnimEnd(); // 0x43d Func
	var_446_string = var_3_string; // 0x43f PushT
	if(var_446_string == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1095; // 0x441 Jump
	
Label_1095:
	goto Label_1110; // 0x447 Jump
	
Label_1110:
	return 0; // 0x456 Return
	
Label_1090:
	var_447_string = ""; // 0x442 PushV
	var_447_string = var_2_object; // 0x443 MovT
	func_1689(var_447_string); // 0x444 NEW_2
	goto Label_1085; // 0x446 Jump
	
Label_1096:
	var_448_string = "all"; // 0x448 PushS
	var_449_string = "idle"; // 0x449 PushS
	PlayAnimation(var_448_string, var_449_string); // 0x44a Func
	
Label_1100:
	WaitForAnimEnd(); // 0x44c Func
	var_450_string = var_3_string; // 0x44e PushT
	if(var_450_string == 0) goto Label_1105; // 0x44f JumpB
	goto Label_1110; // 0x450 Jump
	
Label_1105:
	var_451_string = "all"; // 0x451 PushS
	var_452_string = "idle"; // 0x452 PushS
	PlayAnimation(var_451_string, var_452_string); // 0x453 Func
	goto Label_1100; // 0x455 Jump
}


func_1182(var_0_object)
{
	var_22_bool = 0; // 0x49e PushV
	func_1461(var_22_bool); // 0x49f NEW_2
	var_25_bool = var_22_bool == 0; // 0x4a1 Not
	if(var_25_bool == 0) goto Label_1189; // 0x4a2 JumpB
	Hold(); // 0x4a3 Func
	
Label_1189:
	GetDirection(var_0_object); // 0x4a5 Func
	
Label_1191:
	func_1358(); // 0x4a8 NEW_2
	goto Label_1191; // 0x4aa Jump
}


func_152(var_2_object, var_305_string)
{
	var_306_bool = 0; // 0x99 PushV
	func_1822(var_306_bool); // 0x9a NEW_2
	var_307_bool = var_306_bool == 0; // 0x9c Not
	if(var_307_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_308_bool = var_305_string == var_2_object; // 0x9f Eq
	if(var_308_bool == 0) goto Label_162; // 0xa0 JumpB
	return 0; // 0xa1 Return
	
Label_162:
	var_309_string = ""; var_310_bool = 0; // 0xa2 PushV
	var_309_string = var_305_string; // 0xa3 Mov
	var_311_string = ""; // 0xa4 PushS
	var_312_bool = var_305_string == var_311_string; // 0xa5 Eq
	if(var_312_bool == 0) goto Label_169; // 0xa6 JumpB
	var_310_bool = 0; // 0xa7 MovB
	goto Label_170; // 0xa8 Jump
	
Label_170:
	func_1705(var_309_string, var_310_bool); // 0xaa NEW_2
	var_2_object = var_305_string; // 0xac TMov
	return 0; // 0xad Return
	
Label_169:
	var_310_bool = 1; // 0xa9 MovB
}


func_1824()
{
	var_29_string = "b11q02"; // 0x721 PushS
	var_30_int = 4; // 0x722 PushI
	SetVariable(var_29_string, var_30_int); // 0x723 Func
	func_1886(); // 0x726 NEW_2
	return 0; // 0x728 Return
}


func_1822(var_95_bool)
{
	var_95_bool = 1; // 0x71e MovB
	return 0; // 0x71f Return
}


func_1442(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x5a2 PushV
	GetPosition(var_34_cvector); // 0x5a3 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x5a5 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x5a6 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x5a7 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x5a8 Func
	var_29_bool = var_36_bool; // 0x5aa Mov
	return 6; // 0x5ab Return
}


func_1957(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x7a6 PushGE
	var_41_bool = var_40_bool == 0; // 0x7a7 Not
	if(var_41_bool == 0) goto Label_1970; // 0x7a8 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x7a9 PushV
	var_43_object = var_39_object; // 0x7aa Mov
	TaskCall(4); // 0x7ab TaskCall
	func_746(var_44_object, var_42_int, var_43_object); // 0x7ac NEW_2
	TaskReturn(); // 0x7ad TaskReturn
	var_265_bool = GlobalVars[1]; // 0x7af PushGE
	var_265_bool = 1; // 0x7b0 MovB
	GlobalVars[1] = var_265_bool; // 0x7b1 PopGE
	
Label_1970:
	var_266_bool = 0; var_267_int = 0; // 0x7b2 PushV
	var_267_int = 11; // 0x7b3 MovI
	func_1784(var_266_bool, var_267_int); // 0x7b4 NEW_2
	if(var_266_bool == 0) goto Label_1982; // 0x7b6 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0x7b7 PushV
	var_270_object = var_39_object; // 0x7b8 Mov
	TaskCall(0); // 0x7b9 TaskCall
	func_0(var_271_object, var_269_int, var_270_object); // 0x7ba NEW_2
	TaskReturn(); // 0x7bb TaskReturn
	return 0; // 0x7bd Return
	
Label_1982:
	var_335_bool = 0; var_336_int = 0; // 0x7be PushV
	var_336_int = 12; // 0x7bf MovI
	func_1784(var_335_bool, var_336_int); // 0x7c0 NEW_2
	if(var_335_bool == 0) goto Label_1994; // 0x7c2 JumpB
	var_337_int = 0; var_338_object = Obj(); // 0x7c3 PushV
	var_338_object = var_39_object; // 0x7c4 Mov
	TaskCall(2); // 0x7c5 TaskCall
	func_422(var_339_object, var_337_int, var_338_object); // 0x7c6 NEW_2
	TaskReturn(); // 0x7c7 TaskReturn
	return 0; // 0x7c9 Return
	
Label_1994:
	var_399_int = 0; var_400_object = Obj(); // 0x7ca PushV
	var_400_object = var_39_object; // 0x7cb Mov
	TaskCall(6); // 0x7cc TaskCall
	func_972(var_401_object, var_399_int, var_400_object); // 0x7cd NEW_2
	TaskReturn(); // 0x7ce TaskReturn
	return 0; // 0x7d0 Return
}


func_422(var_0_object, var_337_int, var_338_object)
{
	var_340_object = Obj(); var_341_bool = 0; var_342_int = 0; var_343_bool = 0; var_344_object = Obj(); var_345_bool = 0; var_346_int = 0; var_347_bool = 0; // 0x1a6 PushV
	var_0_object = var_338_object; // 0x1a7 TMov
	var_348_bool = 0; var_349_object = Obj(); var_350_float = 0; // 0x1a8 PushV
	var_349_object = var_338_object; // 0x1a9 Mov
	var_350_float = 70.0; // 0x1aa MovF
	func_1466(var_349_object, var_350_float); // 0x1ab NEW_2
	var_351_bool = var_348_bool == 0; // 0x1ad Not
	if(var_351_bool == 0) goto Label_433; // 0x1ae JumpB
	var_337_int = -2; // 0x1af MovI
	return 8; // 0x1b0 Return
	
Label_433:
	CreateDialog(var_344_object); // 0x1b1 Func
	var_352_int = 0; // 0x1b3 PushV
	func_1816(var_352_int); // 0x1b4 NEW_2
	SetNPCName(var_352_int); // 0x1b6 ObjFunc
	var_353_int = 0; // 0x1b8 PushV
	func_1814(var_353_int); // 0x1b9 NEW_2
	SetNPCDescription(var_353_int); // 0x1bb ObjFunc
	var_354_string = ""; // 0x1bd PushV
	func_1818(var_354_string); // 0x1be NEW_2
	SetPhoto(var_354_string); // 0x1c0 ObjFunc
	var_355_string = ""; // 0x1c2 PushV
	func_1820(var_355_string); // 0x1c3 NEW_2
	SetPhoto2(var_355_string); // 0x1c5 ObjFunc
	var_356_int = 0; // 0x1c7 PushV
	func_1940(var_356_int); // 0x1c8 NEW_2
	SetPlayerName(var_356_int); // 0x1ca ObjFunc
	var_346_int = -1; // 0x1cc MovI
	IsOverrideActive(var_345_bool); // 0x1cd Func
	var_357_bool = var_345_bool; // 0x1cf Push
	if(var_357_bool == 0) goto Label_467; // 0x1d0 JumpB
	var_337_int = -2; // 0x1d1 MovI
	return 8; // 0x1d2 Return
	
Label_467:
	DoDialog(var_344_object); // 0x1d3 Func
	var_358_bool = 0; var_359_object = Obj(); // 0x1d5 PushV
	var_360_object = Obj(); // 0x1d6 PushV
	func_1742(var_360_object); // 0x1d7 NEW_2
	var_359_object = var_360_object; // 0x1d8 Mov
	func_1551(var_358_bool, var_359_object); // 0x1da NEW_2
	var_361_object = Obj(); var_362_object = Obj(); // 0x1dc PushV
	var_361_object = var_338_object; // 0x1dd Mov
	var_362_object = var_344_object; // 0x1de Mov
	TaskCall(3); // 0x1df TaskCall
	func_503(var_363_object, var_364_object, var_365_string, var_366_bool, var_361_object, var_362_object); // 0x1e0 NEW_2
	TaskReturn(); // 0x1e1 TaskReturn
	IsDialogEnd(var_347_bool); // 0x1e3 ObjFunc
	
Label_485:
	var_397_bool = var_347_bool == 0; // 0x1e5 Not
	if(var_397_bool == 0) goto Label_492; // 0x1e6 JumpB
	sync(); // 0x1e7 Func
	IsDialogEnd(var_347_bool); // 0x1e9 ObjFunc
	goto Label_485; // 0x1eb Jump
	
Label_492:
	var_398_object = Obj(); // 0x1ec PushV
	var_398_object = var_338_object; // 0x1ed Mov
	func_1534(); // 0x1ee NEW_2
	StopDialog(var_344_object); // 0x1f0 Func
	GetReturnValue(var_346_int); // 0x1f2 ObjFunc
	var_337_int = var_346_int; // 0x1f4 Mov
	return 8; // 0x1f5 Return
}


func_1534()
{
	var_259_bool = 0; var_260_bool = 0; // 0x5fe PushV
	CameraSwitchToNormal(); // 0x5ff Func
	var_261_bool = 0; // 0x601 PushV
	func_1822(var_261_bool); // 0x602 NEW_2
	if(var_261_bool == 0) goto Label_1542; // 0x604 JumpB
	goto Label_1550; // 0x605 Jump
	
Label_1550:
	return 2; // 0x60e Return
	
Label_1542:
	var_262_string = "head"; // 0x606 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x607 Func
	var_263_bool = var_260_bool; // 0x609 Push
	if(var_263_bool == 0) goto Label_1550; // 0x60a JumpB
	var_264_string = "head"; // 0x60b PushS
	UnlookAsync(var_264_string); // 0x60c Func
}


func_1705(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x6a9 PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x6aa Func
	var_229_bool = var_226_bool; // 0x6ac Push
	if(var_229_bool == 0) goto Label_1715; // 0x6ad JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x6ae Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x6b0 Func
	goto Label_1719; // 0x6b2 Jump
	
Label_1719:
	return 6; // 0x6b7 Return
	
Label_1715:
	var_230_string = "Can't find lsh animation : "; // 0x6b3 PushS
	var_231_int = var_230_string + var_219_string; // 0x6b4 Add
	Trace(var_231_int); // 0x6b5 Func
}


func_1833()
{
	func_1873(); // 0x72b NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0x72d PushV
	var_71_string = "quest_b11_02"; // 0x72e MovS
	var_72_string = "fail"; // 0x72f MovS
	func_1763(var_70_bool, var_71_string, var_72_string); // 0x730 NEW_2
	return 0; // 0x732 Return
}


func_1452(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5ac PushV
	GetPosition(var_28_cvector); // 0x5ad ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x5af PushV
	var_30_cvector = var_28_cvector; // 0x5b0 Mov
	func_1442(var_29_bool, var_30_cvector); // 0x5b1 NEW_2
	var_25_bool = var_29_bool; // 0x5b2 Mov
	return 2; // 0x5b4 Return
}


func_1196(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x4ac PushV
	var_49_string = "player"; // 0x4ad PushS
	FindActor(var_48_object, var_49_string); // 0x4ae Func
	var_50_bool = var_48_object == 0; // 0x4b0 Not
	if(var_50_bool == 0) goto Label_1204; // 0x4b1 JumpB
	var_46_bool = 0; // 0x4b2 MovB
	return 2; // 0x4b3 Return
	
Label_1204:
	var_51_bool = 0; var_52_object = Obj(); // 0x4b4 PushV
	var_52_object = var_48_object; // 0x4b5 Mov
	func_1452(var_52_object); // 0x4b6 NEW_2
	var_46_bool = var_51_bool; // 0x4b7 Mov
	return 2; // 0x4b9 Return
}


func_1843()
{
	var_29_string = "oob12Han1"; // 0x734 PushS
	var_30_int = 1; // 0x735 PushI
	SetVariable(var_29_string, var_30_int); // 0x736 Func
	return 0; // 0x738 Return
}


func_1461(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5b5 PushV
	IsLoaded(var_24_bool); // 0x5b6 Func
	var_22_bool = var_24_bool; // 0x5b8 Mov
	return 2; // 0x5b9 Return
}


func_566(var_2_object, var_368_string)
{
	var_369_bool = 0; // 0x237 PushV
	func_1822(var_369_bool); // 0x238 NEW_2
	var_370_bool = var_369_bool == 0; // 0x23a Not
	if(var_370_bool == 0) goto Label_573; // 0x23b JumpB
	return 0; // 0x23c Return
	
Label_573:
	var_371_bool = var_368_string == var_2_object; // 0x23d Eq
	if(var_371_bool == 0) goto Label_576; // 0x23e JumpB
	return 0; // 0x23f Return
	
Label_576:
	var_372_string = ""; var_373_bool = 0; // 0x240 PushV
	var_372_string = var_368_string; // 0x241 Mov
	var_374_string = ""; // 0x242 PushS
	var_375_bool = var_368_string == var_374_string; // 0x243 Eq
	if(var_375_bool == 0) goto Label_583; // 0x244 JumpB
	var_373_bool = 0; // 0x245 MovB
	goto Label_584; // 0x246 Jump
	
Label_584:
	func_1705(var_372_string, var_373_bool); // 0x248 NEW_2
	var_2_object = var_368_string; // 0x24a TMov
	return 0; // 0x24b Return
	
Label_583:
	var_373_bool = 1; // 0x247 MovB
}


func_1720(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6b8 PushV
	var_151_bool = 0; // 0x6b9 PushV
	func_1822(var_151_bool); // 0x6ba NEW_2
	if(var_151_bool == 0) goto Label_1733; // 0x6bc JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x6bd Func
	var_152_bool = var_150_bool; // 0x6bf Push
	if(var_152_bool == 0) goto Label_1733; // 0x6c0 JumpB
	lshPlaySpeech(var_148_string); // 0x6c1 Func
	var_147_bool = 1; // 0x6c3 MovB
	return 2; // 0x6c4 Return
	
Label_1733:
	var_147_bool = 0; // 0x6c5 MovB
	return 2; // 0x6c6 Return
}


func_1849(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x73a PushV
	var_300_string = "b11q02"; // 0x73b MovS
	func_1758(var_299_int, var_300_string); // 0x73c NEW_2
	var_303_int = 3; // 0x73e PushI
	var_304_bool = var_299_int == var_303_int; // 0x73f Eq
	if(var_304_bool == 0) goto Label_1859; // 0x740 JumpB
	var_297_bool = 1; // 0x741 MovB
	return 0; // 0x742 Return
	
Label_1859:
	var_297_bool = 0; // 0x743 MovB
	return 0; // 0x744 Return
}


func_1466(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x5ba PushV
	GetPosition(var_66_cvector); // 0x5bb ObjFunc
	GetEyesHeight(var_65_float); // 0x5bd ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x5bf PushE
	var_74_float = var_74_float + var_65_float; // 0x5c0 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x5c1 PopE
	GetPosition(var_67_cvector); // 0x5c2 Func
	GetEyesHeight(var_65_float); // 0x5c4 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x5c6 PushE
	var_75_float = var_75_float + var_65_float; // 0x5c7 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x5c8 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x5c9 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x5ca PushE
	var_76_float = 0; // 0x5cb MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x5cc PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x5cd Or
	var_78_float = sqrt(var_77_int); // 0x5ce Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x5cf Div2
	var_69_cvector = -var_68_cvector; // 0x5d0 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x5d1 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x5d2 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x5d3 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x5d4 Xor2
	func_1748(var_80_cvector, var_81_cvector); // 0x5d5 NEW_2
	var_88_int = 25; // 0x5d7 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x5d8 Mult
	var_90_int = var_79_float + var_89_float; // 0x5d9 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x5da PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x5db Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x5dc Add2
	IsOverrideActive(var_72_bool); // 0x5dd Func
	var_92_bool = var_72_bool; // 0x5df Push
	if(var_92_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_53_bool = 0; // 0x5e1 MovB
	return 18; // 0x5e2 Return
	
Label_1507:
	StopWorld(); // 0x5e3 Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x5e5 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x5e7 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x5e8 PushE
	Rotate(var_93_float, var_94_float); // 0x5e9 Func
	var_95_bool = 0; // 0x5eb PushV
	func_1822(var_95_bool); // 0x5ec NEW_2
	if(var_95_bool == 0) goto Label_1520; // 0x5ee JumpB
	goto Label_1528; // 0x5ef Jump
	
Label_1528:
	CameraWaitForPlayFinish(); // 0x5f8 Func
	ResumeWorld(); // 0x5fa Func
	var_53_bool = 1; // 0x5fc MovB
	return 18; // 0x5fd Return
	
Label_1520:
	var_96_string = "head"; // 0x5f0 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x5f1 Func
	var_97_bool = var_73_bool; // 0x5f3 Push
	if(var_97_bool == 0) goto Label_1528; // 0x5f4 JumpB
	var_98_string = "head"; // 0x5f5 PushS
	LookAsyncCamera(var_98_string); // 0x5f6 Func
}


func_827(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x33c TMov
	var_1_object = var_208_object; // 0x33d TMov
	var_3_string = 0; // 0x33e TMovB
	var_214_int = 1; // 0x33f PushI
	if(var_214_int == 0) goto Label_855; // 0x340 JumpB
	var_215_string = ""; // 0x341 PushV
	var_215_string = "Neutral"; // 0x342 MovS
	func_885(var_209_object, var_215_string); // 0x343 NEW_2
	var_232_int = 518009; // 0x345 PushI
	SetMessage(var_232_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_233_int = 518010; // 0x34a PushI
	var_234_int = 32920; // 0x34b PushI
	var_235_int = 19143; // 0x34c PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x34d TObjFunc
	var_236_int = 531560; // 0x34f PushI
	var_237_int = -1; // 0x350 PushI
	var_238_int = 32919; // 0x351 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x352 TObjFunc
	goto Label_855; // 0x354 Jump
	
Label_855:
	var_239_bool = 0; // 0x357 PushV
	func_1822(var_239_bool); // 0x358 NEW_2
	if(var_239_bool == 0) goto Label_870; // 0x35a JumpB
	
Label_859:
	lshWaitForAnimEnd(); // 0x35b Func
	var_240_string = var_3_string; // 0x35d PushT
	if(var_240_string == 0) goto Label_864; // 0x35e JumpB
	goto Label_869; // 0x35f Jump
	
Label_869:
	goto Label_884; // 0x365 Jump
	
Label_884:
	return 0; // 0x374 Return
	
Label_864:
	var_241_string = ""; // 0x360 PushV
	var_241_string = var_2_object; // 0x361 MovT
	func_1689(var_241_string); // 0x362 NEW_2
	goto Label_859; // 0x364 Jump
	
Label_870:
	var_252_string = "all"; // 0x366 PushS
	var_253_string = "idle"; // 0x367 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x368 Func
	
Label_874:
	WaitForAnimEnd(); // 0x36a Func
	var_254_string = var_3_string; // 0x36c PushT
	if(var_254_string == 0) goto Label_879; // 0x36d JumpB
	goto Label_884; // 0x36e Jump
	
Label_879:
	var_255_string = "all"; // 0x36f PushS
	var_256_string = "idle"; // 0x370 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x371 Func
	goto Label_874; // 0x373 Jump
}


func_1211(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x4bb PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x4bc PushE
	RotateAsync(var_98_float, var_99_float); // 0x4bd Func
	return 0; // 0x4bf Return
}


func_1216(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x4c0 PushV
	var_34_string = "player"; // 0x4c1 PushS
	FindActor(var_32_object, var_34_string); // 0x4c2 Func
	var_35_bool = var_32_object == 0; // 0x4c4 Not
	if(var_35_bool == 0) goto Label_1224; // 0x4c5 JumpB
	var_29_bool = 0; // 0x4c6 MovB
	return 4; // 0x4c7 Return
	
Label_1224:
	var_36_float = 0; var_37_object = Obj(); // 0x4c8 PushV
	var_37_object = var_32_object; // 0x4c9 Mov
	func_1434(var_37_object); // 0x4ca NEW_2
	var_44_float = 90000.0; // 0x4cc PushF
	var_45_bool = var_36_float > var_44_float; // 0x4cd GT
	if(var_45_bool == 0) goto Label_1233; // 0x4ce JumpB
	var_29_bool = 0; // 0x4cf MovB
	return 4; // 0x4d0 Return
	
Label_1233:
	CanSee(var_33_bool, var_32_object); // 0x4d1 Func
	var_29_bool = var_33_bool; // 0x4d3 Mov
	return 4; // 0x4d4 Return
}


func_1861(var_377_bool)
{
	var_379_int = 0; var_380_string = ""; // 0x746 PushV
	var_380_string = "oob12Han1"; // 0x747 MovS
	func_1758(var_379_int, var_380_string); // 0x748 NEW_2
	var_381_int = 0; // 0x74a PushI
	var_382_bool = var_379_int == var_381_int; // 0x74b Eq
	if(var_382_bool == 0) goto Label_1871; // 0x74c JumpB
	var_377_bool = 1; // 0x74d MovB
	return 0; // 0x74e Return
	
Label_1871:
	var_377_bool = 0; // 0x74f MovB
	return 0; // 0x750 Return
}


func_1735()
{
	var_24_bool = 0; // 0x6c7 PushV
	func_1822(var_24_bool); // 0x6c8 NEW_2
	if(var_24_bool == 0) goto Label_1741; // 0x6ca JumpB
	lshStopSpeech(); // 0x6cb Func
	
Label_1741:
	return 0; // 0x6cd Return
}


func_1609(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x649 PushV
	var_131_string = "c"; // 0x64a MovS
	var_132_int = 0; // 0x64b MovI
	
Label_1612:
	var_136_int = 1; // 0x64c PushI
	if(var_136_int == 0) goto Label_1625; // 0x64d JumpB
	var_137_int = 1; // 0x64e PushI
	var_138_int = var_132_int + var_137_int; // 0x64f Add
	var_139_int = var_131_string + var_138_int; // 0x650 Add
	HasProperty(var_139_int, var_133_bool); // 0x651 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x653 Not
	if(var_140_bool == 0) goto Label_1622; // 0x654 JumpB
	goto Label_1625; // 0x655 Jump
	
Label_1625:
	var_141_bool = var_132_int == 0; // 0x659 Not
	if(var_141_bool == 0) goto Label_1629; // 0x65a JumpB
	var_124_bool = 0; // 0x65b MovB
	return 10; // 0x65c Return
	
Label_1629:
	var_134_int = 0; // 0x65d MovI
	var_142_int = 1; // 0x65e PushI
	var_143_bool = var_132_int > var_142_int; // 0x65f GT
	if(var_143_bool == 0) goto Label_1635; // 0x660 JumpB
	irand(var_134_int, var_132_int); // 0x661 Func
	
Label_1635:
	var_144_int = 1; // 0x663 PushI
	var_145_int = var_134_int + var_144_int; // 0x664 Add
	var_146_int = var_131_string + var_145_int; // 0x665 Add
	GetProperty(var_146_int, var_135_string); // 0x666 ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x668 PushV
	var_148_string = var_135_string; // 0x669 Mov
	func_1720(var_147_bool, var_148_string); // 0x66a NEW_2
	var_124_bool = var_147_bool; // 0x66b Mov
	return 10; // 0x66d Return
	
Label_1622:
	var_153_int = 1; // 0x656 PushI
	var_132_int = var_132_int + var_153_int; // 0x657 Add2
	goto Label_1612; // 0x658 Jump
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_290_object, var_291_object)
{
	var_0_object = var_291_object; // 0x4b TMov
	var_1_object = var_290_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_296_int = 1; // 0x4e PushI
	if(var_296_int == 0) goto Label_122; // 0x4f JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x50 PushV
	var_298_object = var_1_object; // 0x51 MovT
	func_1849(var_298_object); // 0x52 NEW_2
	if(var_297_bool == 0) goto Label_100; // 0x54 JumpB
	var_305_string = ""; // 0x55 PushV
	var_305_string = "Questioning"; // 0x56 MovS
	func_152(var_291_object, var_305_string); // 0x57 NEW_2
	var_313_int = 531123; // 0x59 PushI
	SetMessage(var_313_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_314_int = 531124; // 0x5e PushI
	var_315_int = 32443; // 0x5f PushI
	var_316_int = 32442; // 0x60 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x61 TObjFunc
	goto Label_122; // 0x63 Jump
	
Label_122:
	var_317_bool = 0; // 0x7a PushV
	func_1822(var_317_bool); // 0x7b NEW_2
	if(var_317_bool == 0) goto Label_137; // 0x7d JumpB
	
Label_126:
	lshWaitForAnimEnd(); // 0x7e Func
	var_318_string = var_3_string; // 0x80 PushT
	if(var_318_string == 0) goto Label_131; // 0x81 JumpB
	goto Label_136; // 0x82 Jump
	
Label_136:
	goto Label_151; // 0x88 Jump
	
Label_151:
	return 0; // 0x97 Return
	
Label_131:
	var_319_string = ""; // 0x83 PushV
	var_319_string = var_2_object; // 0x84 MovT
	func_1689(var_319_string); // 0x85 NEW_2
	goto Label_126; // 0x87 Jump
	
Label_137:
	var_320_string = "all"; // 0x89 PushS
	var_321_string = "idle"; // 0x8a PushS
	PlayAnimation(var_320_string, var_321_string); // 0x8b Func
	
Label_141:
	WaitForAnimEnd(); // 0x8d Func
	var_322_string = var_3_string; // 0x8f PushT
	if(var_322_string == 0) goto Label_146; // 0x90 JumpB
	goto Label_151; // 0x91 Jump
	
Label_146:
	var_323_string = "all"; // 0x92 PushS
	var_324_string = "idle"; // 0x93 PushS
	PlayAnimation(var_323_string, var_324_string); // 0x94 Func
	goto Label_141; // 0x96 Jump
	
Label_100:
	var_325_string = ""; // 0x64 PushV
	var_325_string = "Neutral"; // 0x65 MovS
	func_152(var_291_object, var_325_string); // 0x66 NEW_2
	var_326_int = 531127; // 0x68 PushI
	SetMessage(var_326_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_327_int = 531128; // 0x6d PushI
	var_328_int = -1; // 0x6e PushI
	var_329_int = 32446; // 0x6f PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x70 TObjFunc
	var_330_int = 531398; // 0x72 PushI
	var_331_int = -1; // 0x73 PushI
	var_332_int = 32739; // 0x74 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x75 TObjFunc
	goto Label_122; // 0x77 Jump
}


func_972(var_0_object, var_399_int, var_400_object)
{
	var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; // 0x3cc PushV
	var_0_object = var_400_object; // 0x3cd TMov
	var_410_bool = 0; var_411_object = Obj(); var_412_float = 0; // 0x3ce PushV
	var_411_object = var_400_object; // 0x3cf Mov
	var_412_float = 70.0; // 0x3d0 MovF
	func_1466(var_411_object, var_412_float); // 0x3d1 NEW_2
	var_413_bool = var_410_bool == 0; // 0x3d3 Not
	if(var_413_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_399_int = -2; // 0x3d5 MovI
	return 8; // 0x3d6 Return
	
Label_983:
	CreateDialog(var_406_object); // 0x3d7 Func
	var_414_int = 0; // 0x3d9 PushV
	func_1816(var_414_int); // 0x3da NEW_2
	SetNPCName(var_414_int); // 0x3dc ObjFunc
	var_415_int = 0; // 0x3de PushV
	func_1814(var_415_int); // 0x3df NEW_2
	SetNPCDescription(var_415_int); // 0x3e1 ObjFunc
	var_416_string = ""; // 0x3e3 PushV
	func_1818(var_416_string); // 0x3e4 NEW_2
	SetPhoto(var_416_string); // 0x3e6 ObjFunc
	var_417_string = ""; // 0x3e8 PushV
	func_1820(var_417_string); // 0x3e9 NEW_2
	SetPhoto2(var_417_string); // 0x3eb ObjFunc
	var_418_int = 0; // 0x3ed PushV
	func_1940(var_418_int); // 0x3ee NEW_2
	SetPlayerName(var_418_int); // 0x3f0 ObjFunc
	var_408_int = -1; // 0x3f2 MovI
	IsOverrideActive(var_407_bool); // 0x3f3 Func
	var_419_bool = var_407_bool; // 0x3f5 Push
	if(var_419_bool == 0) goto Label_1017; // 0x3f6 JumpB
	var_399_int = -2; // 0x3f7 MovI
	return 8; // 0x3f8 Return
	
Label_1017:
	DoDialog(var_406_object); // 0x3f9 Func
	var_420_bool = 0; var_421_object = Obj(); // 0x3fb PushV
	var_422_object = Obj(); // 0x3fc PushV
	func_1742(var_422_object); // 0x3fd NEW_2
	var_421_object = var_422_object; // 0x3fe Mov
	func_1551(var_420_bool, var_421_object); // 0x400 NEW_2
	var_423_object = Obj(); var_424_object = Obj(); // 0x402 PushV
	var_423_object = var_400_object; // 0x403 Mov
	var_424_object = var_406_object; // 0x404 Mov
	TaskCall(7); // 0x405 TaskCall
	func_1053(var_425_object, var_426_object, var_427_string, var_428_bool, var_423_object, var_424_object); // 0x406 NEW_2
	TaskReturn(); // 0x407 TaskReturn
	IsDialogEnd(var_409_bool); // 0x409 ObjFunc
	
Label_1035:
	var_453_bool = var_409_bool == 0; // 0x40b Not
	if(var_453_bool == 0) goto Label_1042; // 0x40c JumpB
	sync(); // 0x40d Func
	IsDialogEnd(var_409_bool); // 0x40f ObjFunc
	goto Label_1035; // 0x411 Jump
	
Label_1042:
	var_454_object = Obj(); // 0x412 PushV
	var_454_object = var_400_object; // 0x413 Mov
	func_1534(); // 0x414 NEW_2
	StopDialog(var_406_object); // 0x416 Func
	GetReturnValue(var_408_int); // 0x418 ObjFunc
	var_399_int = var_408_int; // 0x41a Mov
	return 8; // 0x41b Return
}


func_1742(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x6ce PushV
	self(var_117_object); // 0x6cf Func
	var_115_object = var_117_object; // 0x6d1 Mov
	return 2; // 0x6d2 Return
}


func_1358()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x54e PushV
	WaitForAnimEnd(); // 0x54f Func
	var_38_bool = 0; // 0x551 PushV
	func_1461(var_38_bool); // 0x552 NEW_2
	var_39_bool = var_38_bool == 0; // 0x554 Not
	if(var_39_bool == 0) goto Label_1367; // 0x555 JumpB
	return 12; // 0x556 Return
	
Label_1367:
	var_40_int = 0; // 0x557 PushV
	func_1797(var_40_int); // 0x558 NEW_2
	var_32_int = var_40_int; // 0x559 Mov
	var_33_int = 0; // 0x55b MovI
	
Label_1372:
	var_53_bool = 0; // 0x55c PushV
	var_53_bool = 0; // 0x55d MovB
	var_54_int = 5; // 0x55e PushI
	var_55_bool = var_33_int < var_54_int; // 0x55f LT
	if(var_55_bool == 0) goto Label_1382; // 0x560 JumpB
	var_56_bool = 0; // 0x561 PushV
	func_1461(var_56_bool); // 0x562 NEW_2
	if(var_56_bool == 0) goto Label_1382; // 0x564 JumpB
	var_53_bool = 1; // 0x565 MovB
	
Label_1382:
	if(var_53_bool == 0) goto Label_1424; // 0x566 JumpB
	var_57_bool = var_32_int == 0; // 0x567 Not
	if(var_57_bool == 0) goto Label_1392; // 0x568 JumpB
	var_58_int = 3; // 0x569 PushI
	Sleep(var_58_int, var_34_bool); // 0x56a Func
	var_59_bool = var_34_bool == 0; // 0x56c Not
	if(var_59_bool == 0) goto Label_1391; // 0x56d JumpB
	goto Label_1424; // 0x56e Jump
	
Label_1424:
	ResetAAS(); // 0x590 Func
	return 12; // 0x592 Return
	
Label_1391:
	goto Label_1413; // 0x56f Jump
	
Label_1413:
	var_60_bool = 0; // 0x585 PushV
	func_1427(var_60_bool); // 0x586 NEW_2
	var_61_bool = var_60_bool == 0; // 0x588 Not
	if(var_61_bool == 0) goto Label_1419; // 0x589 JumpB
	goto Label_1424; // 0x58a Jump
	
Label_1419:
	ResetAAS(); // 0x58b Func
	var_62_int = 1; // 0x58d PushI
	var_33_int = var_33_int + var_62_int; // 0x58e Add2
	goto Label_1372; // 0x58f Jump
	
Label_1392:
	irand(var_35_int, var_32_int); // 0x570 Func
	var_63_int = 5; // 0x572 PushI
	irand(var_36_int, var_63_int); // 0x573 Func
	var_64_int = 0; // 0x575 PushI
	var_65_bool = var_36_int != var_64_int; // 0x576 Neq
	if(var_65_bool == 0) goto Label_1401; // 0x577 JumpB
	var_35_int = 0; // 0x578 MovI
	
Label_1401:
	var_66_string = "all"; // 0x579 PushS
	var_67_string = ""; var_68_int = 0; // 0x57a PushV
	var_68_int = var_35_int; // 0x57b Mov
	func_1790(var_67_string, var_68_int); // 0x57c NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x57e Func
	WaitForAnimEnd(var_37_bool); // 0x580 Func
	var_69_bool = var_37_bool == 0; // 0x582 Not
	if(var_69_bool == 0) goto Label_1413; // 0x583 JumpB
	goto Label_1424; // 0x584 Jump
}


func_1873()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x751 PushV
	var_64_int = 611; // 0x752 PushI
	var_65_int = 2; // 0x753 PushI
	var_66_int = 531506; // 0x754 PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x755 Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x757 PushV
	var_68_object = var_63_object; // 0x758 Mov
	var_69_int = 598; // 0x759 MovI
	func_1912(var_67_bool, var_68_object, var_69_int); // 0x75a NEW_2
	return 2; // 0x75c Return
}


func_1748(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x6d4 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x6d5 Or
	var_84_float = sqrt(var_85_int); // 0x6d6 Sqrt2
	var_86_float = 0.0; // 0x6d7 PushF
	var_87_bool = var_84_float < var_86_float; // 0x6d8 LT
	if(var_87_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x6da MovV
	return 2; // 0x6db Return
	
Label_1756:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x6dc Div2
	return 2; // 0x6dd Return
}


func_1238()
{
	var_457_float = 0; var_458_float = 0; // 0x4d6 PushV
	var_459_int = 8; // 0x4d7 PushI
	var_460_int = 16; // 0x4d8 PushI
	rand(var_458_float, var_459_int, var_460_int); // 0x4d9 Func
	var_461_int = 10; // 0x4db PushI
	SetTimer(var_461_int, var_458_float); // 0x4dc Func
	return 2; // 0x4de Return
}


func_1111(var_2_object, var_430_string)
{
	var_431_bool = 0; // 0x458 PushV
	func_1822(var_431_bool); // 0x459 NEW_2
	var_432_bool = var_431_bool == 0; // 0x45b Not
	if(var_432_bool == 0) goto Label_1118; // 0x45c JumpB
	return 0; // 0x45d Return
	
Label_1118:
	var_433_bool = var_430_string == var_2_object; // 0x45e Eq
	if(var_433_bool == 0) goto Label_1121; // 0x45f JumpB
	return 0; // 0x460 Return
	
Label_1121:
	var_434_string = ""; var_435_bool = 0; // 0x461 PushV
	var_434_string = var_430_string; // 0x462 Mov
	var_436_string = ""; // 0x463 PushS
	var_437_bool = var_430_string == var_436_string; // 0x464 Eq
	if(var_437_bool == 0) goto Label_1128; // 0x465 JumpB
	var_435_bool = 0; // 0x466 MovB
	goto Label_1129; // 0x467 Jump
	
Label_1129:
	func_1705(var_434_string, var_435_bool); // 0x469 NEW_2
	var_2_object = var_430_string; // 0x46b TMov
	return 0; // 0x46c Return
	
Label_1128:
	var_435_bool = 1; // 0x468 MovB
}


func_1886()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x75e PushV
	var_33_int = 601; // 0x75f PushI
	var_34_int = 2; // 0x760 PushI
	var_35_int = 531152; // 0x761 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0x762 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0x764 PushV
	var_37_object = var_32_object; // 0x765 Mov
	var_38_int = 598; // 0x766 MovI
	func_1912(var_36_bool, var_37_object, var_38_int); // 0x767 NEW_2
	return 2; // 0x769 Return
}


func_1247()
{
	var_456_int = 10; // 0x4df PushI
	KillTimer(var_456_int); // 0x4e0 Func
	return 0; // 0x4e2 Return
}


func_1758(var_299_int, var_300_string)
{
	var_301_int = 0; var_302_int = 0; // 0x6de PushV
	GetVariable(var_300_string, var_302_int); // 0x6df Func
	var_299_int = var_302_int; // 0x6e1 Mov
	return 2; // 0x6e2 Return
}


func_1763(var_70_bool, var_71_string, var_72_string)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x6e3 PushV
	FindActor(var_74_object, var_71_string); // 0x6e4 Func
	var_75_bool = var_74_object == 0; // 0x6e6 NullEq
	if(var_75_bool == 0) goto Label_1770; // 0x6e7 JumpB
	var_70_bool = 0; // 0x6e8 MovB
	return 2; // 0x6e9 Return
	
Label_1770:
	Trigger(var_74_object, var_72_string); // 0x6ea Func
	var_70_bool = 1; // 0x6ec MovB
	return 2; // 0x6ed Return
}


func_746(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x2ea PushV
	var_0_object = var_43_object; // 0x2eb TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2ec PushV
	var_54_object = var_43_object; // 0x2ed Mov
	var_55_float = 70.0; // 0x2ee MovF
	func_1466(var_54_object, var_55_float); // 0x2ef NEW_2
	var_99_bool = var_53_bool == 0; // 0x2f1 Not
	if(var_99_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_42_int = -2; // 0x2f3 MovI
	return 8; // 0x2f4 Return
	
Label_757:
	CreateDialog(var_49_object); // 0x2f5 Func
	var_100_int = 0; // 0x2f7 PushV
	func_1816(var_100_int); // 0x2f8 NEW_2
	SetNPCName(var_100_int); // 0x2fa ObjFunc
	var_101_int = 0; // 0x2fc PushV
	func_1814(var_101_int); // 0x2fd NEW_2
	SetNPCDescription(var_101_int); // 0x2ff ObjFunc
	var_102_string = ""; // 0x301 PushV
	func_1818(var_102_string); // 0x302 NEW_2
	SetPhoto(var_102_string); // 0x304 ObjFunc
	var_103_string = ""; // 0x306 PushV
	func_1820(var_103_string); // 0x307 NEW_2
	SetPhoto2(var_103_string); // 0x309 ObjFunc
	var_104_int = 0; // 0x30b PushV
	func_1940(var_104_int); // 0x30c NEW_2
	SetPlayerName(var_104_int); // 0x30e ObjFunc
	var_51_int = -1; // 0x310 MovI
	IsOverrideActive(var_50_bool); // 0x311 Func
	var_112_bool = var_50_bool; // 0x313 Push
	if(var_112_bool == 0) goto Label_791; // 0x314 JumpB
	var_42_int = -2; // 0x315 MovI
	return 8; // 0x316 Return
	
Label_791:
	DoDialog(var_49_object); // 0x317 Func
	var_113_bool = 0; var_114_object = Obj(); // 0x319 PushV
	var_115_object = Obj(); // 0x31a PushV
	func_1742(var_115_object); // 0x31b NEW_2
	var_114_object = var_115_object; // 0x31c Mov
	func_1551(var_113_bool, var_114_object); // 0x31e NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x320 PushV
	var_208_object = var_43_object; // 0x321 Mov
	var_209_object = var_49_object; // 0x322 Mov
	TaskCall(5); // 0x323 TaskCall
	func_827(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x324 NEW_2
	TaskReturn(); // 0x325 TaskReturn
	IsDialogEnd(var_52_bool); // 0x327 ObjFunc
	
Label_809:
	var_257_bool = var_52_bool == 0; // 0x329 Not
	if(var_257_bool == 0) goto Label_816; // 0x32a JumpB
	sync(); // 0x32b Func
	IsDialogEnd(var_52_bool); // 0x32d ObjFunc
	goto Label_809; // 0x32f Jump
	
Label_816:
	var_258_object = Obj(); // 0x330 PushV
	var_258_object = var_43_object; // 0x331 Mov
	func_1534(); // 0x332 NEW_2
	StopDialog(var_49_object); // 0x334 Func
	GetReturnValue(var_51_int); // 0x336 ObjFunc
	var_42_int = var_51_int; // 0x338 Mov
	return 8; // 0x339 Return
}


func_1899(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x76b PushV
	GetDiaryRoot(var_47_object); // 0x76c Func
	var_48_bool = var_47_object == 0; // 0x76e Not
	if(var_48_bool == 0) goto Label_1909; // 0x76f JumpB
	var_49_string = "Can't retrieve diary root"; // 0x770 PushS
	Trace(var_49_string); // 0x771 Func
	var_45_object = 0; // 0x773 MovB
	return 2; // 0x774 Return
	
Label_1909:
	var_45_object = var_47_object; // 0x775 Mov
	return 2; // 0x776 Return
}


func_1646(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x66e PushV
	var_167_string = "d"; // 0x66f PushS
	var_168_int = 0; // 0x670 PushV
	func_1775(var_168_int); // 0x671 NEW_2
	var_174_int = var_167_string + var_168_int; // 0x673 Add
	var_175_string = "m"; // 0x674 PushS
	var_162_string = var_174_int + var_175_string; // 0x675 Add2
	var_163_int = 0; // 0x676 MovI
	
Label_1655:
	var_176_int = 1; // 0x677 PushI
	if(var_176_int == 0) goto Label_1668; // 0x678 JumpB
	var_177_int = 1; // 0x679 PushI
	var_178_int = var_163_int + var_177_int; // 0x67a Add
	var_179_int = var_162_string + var_178_int; // 0x67b Add
	HasProperty(var_179_int, var_164_bool); // 0x67c ObjFunc
	var_180_bool = var_164_bool == 0; // 0x67e Not
	if(var_180_bool == 0) goto Label_1665; // 0x67f JumpB
	goto Label_1668; // 0x680 Jump
	
Label_1668:
	var_181_bool = var_163_int == 0; // 0x684 Not
	if(var_181_bool == 0) goto Label_1672; // 0x685 JumpB
	var_155_bool = 0; // 0x686 MovB
	return 10; // 0x687 Return
	
Label_1672:
	var_165_int = 0; // 0x688 MovI
	var_182_int = 1; // 0x689 PushI
	var_183_bool = var_163_int > var_182_int; // 0x68a GT
	if(var_183_bool == 0) goto Label_1678; // 0x68b JumpB
	irand(var_165_int, var_163_int); // 0x68c Func
	
Label_1678:
	var_184_int = 1; // 0x68e PushI
	var_185_int = var_165_int + var_184_int; // 0x68f Add
	var_186_int = var_162_string + var_185_int; // 0x690 Add
	GetProperty(var_186_int, var_166_string); // 0x691 ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x693 PushV
	var_188_string = var_166_string; // 0x694 Mov
	func_1720(var_187_bool, var_188_string); // 0x695 NEW_2
	var_155_bool = var_187_bool; // 0x696 Mov
	return 10; // 0x698 Return
	
Label_1665:
	var_189_int = 1; // 0x681 PushI
	var_163_int = var_163_int + var_189_int; // 0x682 Add2
	goto Label_1655; // 0x683 Jump
}


func_1775(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x6ef PushV
	GetGameTime(var_170_float); // 0x6f0 Func
	var_171_int = 1; // 0x6f2 PushI
	var_172_int = 0; // 0x6f3 PushV
	var_173_int = 24; // 0x6f4 PushI
	var_172_int = var_170_float / var_170_float; // 0x6f5 Div2
	var_168_int = var_171_int + var_172_int; // 0x6f6 Add2
	return 2; // 0x6f7 Return
}


func_885(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x376 PushV
	func_1822(var_216_bool); // 0x377 NEW_2
	var_217_bool = var_216_bool == 0; // 0x379 Not
	if(var_217_bool == 0) goto Label_892; // 0x37a JumpB
	return 0; // 0x37b Return
	
Label_892:
	var_218_bool = var_215_string == var_2_object; // 0x37c Eq
	if(var_218_bool == 0) goto Label_895; // 0x37d JumpB
	return 0; // 0x37e Return
	
Label_895:
	var_219_string = ""; var_220_bool = 0; // 0x37f PushV
	var_219_string = var_215_string; // 0x380 Mov
	var_221_string = ""; // 0x381 PushS
	var_222_bool = var_215_string == var_221_string; // 0x382 Eq
	if(var_222_bool == 0) goto Label_902; // 0x383 JumpB
	var_220_bool = 0; // 0x384 MovB
	goto Label_903; // 0x385 Jump
	
Label_903:
	func_1705(var_219_string, var_220_bool); // 0x387 NEW_2
	var_2_object = var_215_string; // 0x389 TMov
	return 0; // 0x38a Return
	
Label_902:
	var_220_bool = 1; // 0x386 MovB
}


func_503(var_0_object, var_1_object, var_2_object, var_3_string, var_361_object, var_362_object)
{
	var_0_object = var_362_object; // 0x1f8 TMov
	var_1_object = var_361_object; // 0x1f9 TMov
	var_3_string = 0; // 0x1fa TMovB
	var_367_int = 1; // 0x1fb PushI
	if(var_367_int == 0) goto Label_536; // 0x1fc JumpB
	var_368_string = ""; // 0x1fd PushV
	var_368_string = "Doubt"; // 0x1fe MovS
	func_566(var_362_object, var_368_string); // 0x1ff NEW_2
	var_376_int = 535268; // 0x201 PushI
	SetMessage(var_376_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_377_bool = 0; var_378_object = Obj(); // 0x206 PushV
	var_378_object = var_1_object; // 0x207 MovT
	func_1861(var_378_object); // 0x208 NEW_2
	if(var_377_bool == 0) goto Label_528; // 0x20a JumpB
	var_383_int = 535269; // 0x20b PushI
	var_384_int = 37004; // 0x20c PushI
	var_385_int = 36944; // 0x20d PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x20e TObjFunc
	
Label_528:
	var_386_int = 535322; // 0x210 PushI
	var_387_int = -1; // 0x211 PushI
	var_388_int = 37003; // 0x212 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x213 TObjFunc
	goto Label_536; // 0x215 Jump
	
Label_536:
	var_389_bool = 0; // 0x218 PushV
	func_1822(var_389_bool); // 0x219 NEW_2
	if(var_389_bool == 0) goto Label_551; // 0x21b JumpB
	
Label_540:
	lshWaitForAnimEnd(); // 0x21c Func
	var_390_string = var_3_string; // 0x21e PushT
	if(var_390_string == 0) goto Label_545; // 0x21f JumpB
	goto Label_550; // 0x220 Jump
	
Label_550:
	goto Label_565; // 0x226 Jump
	
Label_565:
	return 0; // 0x235 Return
	
Label_545:
	var_391_string = ""; // 0x221 PushV
	var_391_string = var_2_object; // 0x222 MovT
	func_1689(var_391_string); // 0x223 NEW_2
	goto Label_540; // 0x225 Jump
	
Label_551:
	var_392_string = "all"; // 0x227 PushS
	var_393_string = "idle"; // 0x228 PushS
	PlayAnimation(var_392_string, var_393_string); // 0x229 Func
	
Label_555:
	WaitForAnimEnd(); // 0x22b Func
	var_394_string = var_3_string; // 0x22d PushT
	if(var_394_string == 0) goto Label_560; // 0x22e JumpB
	goto Label_565; // 0x22f Jump
	
Label_560:
	var_395_string = "all"; // 0x230 PushS
	var_396_string = "idle"; // 0x231 PushS
	PlayAnimation(var_395_string, var_396_string); // 0x232 Func
	goto Label_555; // 0x234 Jump
}


func_1784(var_266_bool, var_267_int)
{
	var_268_int = 0; // 0x6f9 PushV
	func_1775(var_268_int); // 0x6fa NEW_2
	var_266_bool = var_268_int == var_267_int; // 0x6fc Eq2
	return 0; // 0x6fd Return
}


func_1790(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x6fe PushV
	var_49_string = "idle"; // 0x6ff MovS
	var_50_int = var_47_int; // 0x700 Push
	if(var_50_int == 0) goto Label_1795; // 0x701 JumpB
	var_49_string = var_49_string + var_47_int; // 0x702 Add2
	
Label_1795:
	var_46_string = var_49_string; // 0x703 Mov
	return 2; // 0x704 Return
}


