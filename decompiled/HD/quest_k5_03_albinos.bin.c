task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_int, var_14_object, var_15_cvector, var_16_bool)
{
	var_17_int = 1; // 0xa5 PushI
	if(var_17_int == 0) goto Label_453; // 0xa6 JumpB
	func_1531(); // 0xa8 NEW_2
	var_19_int = 27235; // 0xaa PushI
	var_20_bool = var_15_cvector == var_19_int; // 0xab Eq
	if(var_20_bool == 0) goto Label_203; // 0xac JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xad PushV
	var_21_object = var_1_object; // 0xae MovT
	var_22_object = var_0_object; // 0xaf MovT
	func_1729(); // 0xb0 NEW_2
	var_52_string = ""; // 0xb2 PushV
	var_52_string = "Neutral"; // 0xb3 MovS
	func_142(var_16_bool, var_52_string); // 0xb4 NEW_2
	var_69_int = 525951; // 0xb6 PushI
	SetMessage(var_69_int); // 0xb7 TObjFunc
	ClearReplies(); // 0xb9 TObjFunc
	var_70_int = 525952; // 0xbb PushI
	var_71_int = 27237; // 0xbc PushI
	var_72_int = 27236; // 0xbd PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xbe TObjFunc
	var_73_int = 542446; // 0xc0 PushI
	var_74_int = 27239; // 0xc1 PushI
	var_75_int = 44835; // 0xc2 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xc3 TObjFunc
	var_76_int = 542447; // 0xc5 PushI
	var_77_int = 27241; // 0xc6 PushI
	var_78_int = 44837; // 0xc7 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xc8 TObjFunc
	return 0; // 0xca Return
	
Label_203:
	var_79_int = 27237; // 0xcb PushI
	var_80_bool = var_15_cvector == var_79_int; // 0xcc Eq
	if(var_80_bool == 0) goto Label_226; // 0xcd JumpB
	var_81_string = ""; // 0xce PushV
	var_81_string = "Neutral"; // 0xcf MovS
	func_142(var_16_bool, var_81_string); // 0xd0 NEW_2
	var_82_int = 525953; // 0xd2 PushI
	SetMessage(var_82_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_83_int = 525954; // 0xd7 PushI
	var_84_int = 27239; // 0xd8 PushI
	var_85_int = 27238; // 0xd9 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xda TObjFunc
	var_86_int = 542448; // 0xdc PushI
	var_87_int = 44839; // 0xdd PushI
	var_88_int = 44838; // 0xde PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_89_int = 44839; // 0xe2 PushI
	var_90_bool = var_15_cvector == var_89_int; // 0xe3 Eq
	if(var_90_bool == 0) goto Label_244; // 0xe4 JumpB
	var_91_string = ""; // 0xe5 PushV
	var_91_string = "Neutral"; // 0xe6 MovS
	func_142(var_16_bool, var_91_string); // 0xe7 NEW_2
	var_92_int = 542449; // 0xe9 PushI
	SetMessage(var_92_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_93_int = 542450; // 0xee PushI
	var_94_int = 44841; // 0xef PushI
	var_95_int = 44840; // 0xf0 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_96_int = 44841; // 0xf4 PushI
	var_97_bool = var_15_cvector == var_96_int; // 0xf5 Eq
	if(var_97_bool == 0) goto Label_267; // 0xf6 JumpB
	var_98_string = ""; // 0xf7 PushV
	var_98_string = "Neutral"; // 0xf8 MovS
	func_142(var_16_bool, var_98_string); // 0xf9 NEW_2
	var_99_int = 542451; // 0xfb PushI
	SetMessage(var_99_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_100_int = 542452; // 0x100 PushI
	var_101_int = 27239; // 0x101 PushI
	var_102_int = 44842; // 0x102 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x103 TObjFunc
	var_103_int = 542453; // 0x105 PushI
	var_104_int = 27241; // 0x106 PushI
	var_105_int = 44844; // 0x107 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_106_int = 27239; // 0x10b PushI
	var_107_bool = var_15_cvector == var_106_int; // 0x10c Eq
	if(var_107_bool == 0) goto Label_290; // 0x10d JumpB
	var_108_string = ""; // 0x10e PushV
	var_108_string = "Neutral"; // 0x10f MovS
	func_142(var_16_bool, var_108_string); // 0x110 NEW_2
	var_109_int = 525955; // 0x112 PushI
	SetMessage(var_109_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_110_int = 525956; // 0x117 PushI
	var_111_int = 27241; // 0x118 PushI
	var_112_int = 27240; // 0x119 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x11a TObjFunc
	var_113_int = 529036; // 0x11c PushI
	var_114_int = 27241; // 0x11d PushI
	var_115_int = 30476; // 0x11e PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_116_int = 27241; // 0x122 PushI
	var_117_bool = var_15_cvector == var_116_int; // 0x123 Eq
	if(var_117_bool == 0) goto Label_313; // 0x124 JumpB
	var_118_string = ""; // 0x125 PushV
	var_118_string = "Neutral"; // 0x126 MovS
	func_142(var_16_bool, var_118_string); // 0x127 NEW_2
	var_119_int = 525957; // 0x129 PushI
	SetMessage(var_119_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_120_int = 525958; // 0x12e PushI
	var_121_int = 27243; // 0x12f PushI
	var_122_int = 27242; // 0x130 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x131 TObjFunc
	var_123_int = 542454; // 0x133 PushI
	var_124_int = 44847; // 0x134 PushI
	var_125_int = 44846; // 0x135 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_126_int = 44847; // 0x139 PushI
	var_127_bool = var_15_cvector == var_126_int; // 0x13a Eq
	if(var_127_bool == 0) goto Label_331; // 0x13b JumpB
	var_128_string = ""; // 0x13c PushV
	var_128_string = "Neutral"; // 0x13d MovS
	func_142(var_16_bool, var_128_string); // 0x13e NEW_2
	var_129_int = 542455; // 0x140 PushI
	SetMessage(var_129_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_130_int = 542456; // 0x145 PushI
	var_131_int = 27245; // 0x146 PushI
	var_132_int = 44848; // 0x147 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_133_int = 27243; // 0x14b PushI
	var_134_bool = var_15_cvector == var_133_int; // 0x14c Eq
	if(var_134_bool == 0) goto Label_349; // 0x14d JumpB
	var_135_string = ""; // 0x14e PushV
	var_135_string = "Neutral"; // 0x14f MovS
	func_142(var_16_bool, var_135_string); // 0x150 NEW_2
	var_136_int = 525959; // 0x152 PushI
	SetMessage(var_136_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_137_int = 525960; // 0x157 PushI
	var_138_int = 27245; // 0x158 PushI
	var_139_int = 27244; // 0x159 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_140_int = 27245; // 0x15d PushI
	var_141_bool = var_15_cvector == var_140_int; // 0x15e Eq
	if(var_141_bool == 0) goto Label_372; // 0x15f JumpB
	var_142_string = ""; // 0x160 PushV
	var_142_string = "Neutral"; // 0x161 MovS
	func_142(var_16_bool, var_142_string); // 0x162 NEW_2
	var_143_int = 525961; // 0x164 PushI
	SetMessage(var_143_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_144_int = 525962; // 0x169 PushI
	var_145_int = 27247; // 0x16a PushI
	var_146_int = 27246; // 0x16b PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x16c TObjFunc
	var_147_int = 542457; // 0x16e PushI
	var_148_int = -1; // 0x16f PushI
	var_149_int = 44850; // 0x170 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_150_int = 27247; // 0x174 PushI
	var_151_bool = var_15_cvector == var_150_int; // 0x175 Eq
	if(var_151_bool == 0) goto Label_395; // 0x176 JumpB
	var_152_string = ""; // 0x177 PushV
	var_152_string = "Neutral"; // 0x178 MovS
	func_142(var_16_bool, var_152_string); // 0x179 NEW_2
	var_153_int = 525963; // 0x17b PushI
	SetMessage(var_153_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_154_int = 525964; // 0x180 PushI
	var_155_int = 27249; // 0x181 PushI
	var_156_int = 27248; // 0x182 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x183 TObjFunc
	var_157_int = 542458; // 0x185 PushI
	var_158_int = 44852; // 0x186 PushI
	var_159_int = 44851; // 0x187 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_160_int = 44852; // 0x18b PushI
	var_161_bool = var_15_cvector == var_160_int; // 0x18c Eq
	if(var_161_bool == 0) goto Label_418; // 0x18d JumpB
	var_162_string = ""; // 0x18e PushV
	var_162_string = "Neutral"; // 0x18f MovS
	func_142(var_16_bool, var_162_string); // 0x190 NEW_2
	var_163_int = 542459; // 0x192 PushI
	SetMessage(var_163_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_164_int = 542460; // 0x197 PushI
	var_165_int = -1; // 0x198 PushI
	var_166_int = 44853; // 0x199 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x19a TObjFunc
	var_167_int = 542461; // 0x19c PushI
	var_168_int = -1; // 0x19d PushI
	var_169_int = 44854; // 0x19e PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x19f TObjFunc
	return 0; // 0x1a1 Return
	
Label_418:
	var_170_int = 27249; // 0x1a2 PushI
	var_171_bool = var_15_cvector == var_170_int; // 0x1a3 Eq
	if(var_171_bool == 0) goto Label_441; // 0x1a4 JumpB
	var_172_string = ""; // 0x1a5 PushV
	var_172_string = "Neutral"; // 0x1a6 MovS
	func_142(var_16_bool, var_172_string); // 0x1a7 NEW_2
	var_173_int = 525965; // 0x1a9 PushI
	SetMessage(var_173_int); // 0x1aa TObjFunc
	ClearReplies(); // 0x1ac TObjFunc
	var_174_int = 525966; // 0x1ae PushI
	var_175_int = -1; // 0x1af PushI
	var_176_int = 27250; // 0x1b0 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1b1 TObjFunc
	var_177_int = 542462; // 0x1b3 PushI
	var_178_int = -1; // 0x1b4 PushI
	var_179_int = 44855; // 0x1b5 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_3_string = 1; // 0x1b9 TMovB
	var_180_bool = 0; // 0x1ba PushV
	func_1703(var_180_bool); // 0x1bb NEW_2
	if(var_180_bool == 0) goto Label_449; // 0x1bd JumpB
	lshStopAnimation(); // 0x1be Func
	goto Label_451; // 0x1c0 Jump
	
Label_451:
	return 0; // 0x1c3 Return
	
Label_449:
	StopAnimation(); // 0x1c1 Func
	
Label_453:
	return 0; // 0x1c5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_566(var_14_cvector, var_15_bool); // 0x1d2 NEW_2
	var_19_int = 0; var_20_object = Obj(); // 0x1d4 PushV
	var_20_object = var_15_bool; // 0x1d5 Mov
	TaskCall(0); // 0x1d6 TaskCall
	func_0(var_21_object, var_19_int, var_20_object); // 0x1d7 NEW_2
	TaskReturn(); // 0x1d8 TaskReturn
	var_183_object = Obj(); var_184_bool = 0; // 0x1da PushV
	var_183_object = var_15_bool; // 0x1db Mov
	var_184_bool = 0; // 0x1dc MovB
	TaskCall(4); // 0x1dd TaskCall
	func_773(var_183_object, var_184_bool); // 0x1de NEW_2
	TaskReturn(); // 0x1df TaskReturn
	return 0; // 0x1e1 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	return 0; // 0x1e3 Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	func_566(var_14_cvector, var_15_bool); // 0x1e6 NEW_2
	var_19_object = Obj(); // 0x1e8 PushV
	var_19_object = var_15_bool; // 0x1e9 Mov
	func_1875(); // 0x1ea NEW_2
	return 0; // 0x1ec Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x1ed PushV
	var_16_string = "quest_k5_03"; // 0x1ee MovS
	var_17_string = "abinos_unload"; // 0x1ef MovS
	func_1683(var_15_bool, var_16_string, var_17_string); // 0x1f0 NEW_2
	Hold(); // 0x1f2 Func
	return 0; // 0x1f4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool)
{
	var_16_int = 10; // 0x220 PushI
	var_17_bool = var_15_bool == var_16_int; // 0x221 Eq
	if(var_17_bool == 0) goto Label_565; // 0x222 JumpB
	var_18_bool = 0; // 0x223 PushV
	func_528(var_13_object, var_14_cvector, var_15_bool, var_18_bool); // 0x224 NEW_2
	if(var_18_bool == 0) goto Label_559; // 0x226 JumpB
	var_31_bool = var_2_object == 0; // 0x227 Not
	if(var_31_bool == 0) goto Label_558; // 0x228 JumpB
	var_32_object = Obj(); // 0x229 PushV
	var_32_object = var_4_bool; // 0x22a MovT
	func_1520(var_32_object); // 0x22b NEW_2
	var_2_object = 1; // 0x22d TMovB
	
Label_558:
	goto Label_565; // 0x22e Jump
	
Label_565:
	return 0; // 0x235 Return
	
Label_559:
	var_39_object = var_2_object; // 0x22f PushT
	if(var_39_object == 0) goto Label_565; // 0x230 JumpB
	var_40_string = "head"; // 0x231 PushS
	UnlookAsync(var_40_string); // 0x232 Func
	var_2_object = 0; // 0x234 TMovB
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	return 0; // 0x2b6 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_object, var_14_cvector, var_15_bool)
{
	func_765(var_15_bool); // 0x2b9 NEW_2
	var_16_object = Obj(); // 0x2bb PushV
	var_16_object = var_15_bool; // 0x2bc Mov
	func_1875(); // 0x2bd NEW_2
	return 0; // 0x2bf Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x2c0 PushV
	var_16_string = "quest_k5_03"; // 0x2c1 MovS
	var_17_string = "abinos_unload"; // 0x2c2 MovS
	func_1683(var_15_bool, var_16_string, var_17_string); // 0x2c3 NEW_2
	Hold(); // 0x2c5 Func
	return 0; // 0x2c7 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_string = ""; var_17_string = ""; // 0x311 PushV
	var_16_string = "quest_k5_03"; // 0x312 MovS
	var_17_string = "albinos_retreated"; // 0x313 MovS
	func_1683(var_15_bool, var_16_string, var_17_string); // 0x314 NEW_2
	Hold(); // 0x316 Func
	return 0; // 0x318 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_int)
{
	var_16_int = 100; // 0x31a PushI
	var_17_bool = var_15_int == var_16_int; // 0x31b Eq
	if(var_17_bool == 0) goto Label_801; // 0x31c JumpB
	func_1810(); // 0x31e NEW_2
	goto Label_805; // 0x320 Jump
	
Label_805:
	return 0; // 0x325 Return
	
Label_801:
	var_106_int = 0; // 0x321 PushV
	var_106_int = var_15_int; // 0x322 Mov
	func_909(var_13_cvector, var_14_bool, var_15_int, var_106_int); // 0x323 NEW_2
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	func_961(var_15_object); // 0x3ca NEW_2
	var_17_object = Obj(); // 0x3cc PushV
	var_17_object = var_15_object; // 0x3cd Mov
	func_1875(); // 0x3ce NEW_2
	return 0; // 0x3d0 Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	return 0; // 0x460 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	return 0; // 0x462 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	return 0; // 0x464 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; // 0x735 PushV
	var_19_object = var_15_object; // 0x736 Mov
	var_20_int = var_16_int; // 0x737 Mov
	var_21_float = var_17_float; // 0x738 Mov
	func_1315(var_19_object, var_20_int, var_21_float); // 0x739 NEW_2
	return 0; // 0x73b Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_int, var_17_float, var_18_float, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x73d PushV
	var_21_object = var_15_object; // 0x73e Mov
	var_22_int = var_16_int; // 0x73f Mov
	var_23_float = var_17_float; // 0x740 Mov
	var_24_cvector = var_19_cvector; // 0x741 Mov
	var_25_cvector = var_20_cvector; // 0x742 Mov
	func_1383(var_23_float, var_24_cvector, var_25_cvector); // 0x743 NEW_2
	return 0; // 0x745 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object, var_16_string)
{
	var_17_float = 0; var_18_float = 0; // 0x746 PushV
	var_19_string = "health"; // 0x747 PushS
	var_20_bool = var_16_string == var_19_string; // 0x748 Eq
	if(var_20_bool == 0) goto Label_1874; // 0x749 JumpB
	var_21_string = "health"; // 0x74a PushS
	GetProperty(var_21_string, var_18_float); // 0x74b Func
	var_22_int = 0; // 0x74d PushI
	var_23_bool = var_18_float <= var_22_int; // 0x74e LE
	if(var_23_bool == 0) goto Label_1874; // 0x74f JumpB
	SignalDeath(var_15_object); // 0x750 Func
	
Label_1874:
	return 2; // 0x752 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x754 PushV
	var_17_object = var_15_object; // 0x755 Mov
	func_1159(var_16_bool, var_17_object); // 0x756 NEW_2
	if(var_16_bool == 0) goto Label_1886; // 0x758 JumpB
	var_20_bool = 0; var_21_object = Obj(); var_22_float = 0; // 0x759 PushV
	var_21_object = var_15_object; // 0x75a Mov
	var_22_float = -0.1; // 0x75b MovF
	func_1621(var_20_bool, var_21_object, var_22_float); // 0x75c NEW_2
	
Label_1886:
	var_58_object = Obj(); // 0x75e PushV
	var_58_object = var_15_object; // 0x75f Mov
	func_1836(var_58_object); // 0x760 NEW_2
	return 0; // 0x762 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_cvector, var_14_bool)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x29a PushV
	GetScene(var_16_object); // 0x29b Func
	var_17_object = Obj(); // 0x29d PushV
	func_1579(var_17_object); // 0x29e NEW_2
	RemoveStationaryActor(var_17_object); // 0x2a0 ObjFunc
	var_20_string = "pt_k5q03_albinos_path"; // 0x2a2 PushS
	GetVariable(var_20_string, var_20_string); // 0x2a3 Func
	var_21_int = -1; // 0x2a5 PushI
	var_22_bool = var_1_object != var_21_int; // 0x2a6 Neq
	if(var_22_bool == 0) goto Label_686; // 0x2a7 JumpB
	var_23_bool = 0; var_24_string = ""; var_25_int = 0; var_26_bool = 0; // 0x2a8 PushV
	var_24_string = "pt_k5q03_albinos_path"; // 0x2a9 MovS
	var_25_int = var_1_object; // 0x2aa MovT
	var_26_bool = 1; // 0x2ab MovB
	func_712(var_23_bool, var_24_string, var_25_int, var_26_bool); // 0x2ac NEW_2
	
Label_686:
	TaskCall(2); // 0x2af TaskCall
	func_454(); // 0x2b0 NEW_2
	TaskReturn(); // 0x2b1 TaskReturn
	return 2; // 0x2b3 Return
}


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x0 PushV
	var_0_object = var_20_object; // 0x1 TMov
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0; // 0x2 PushV
	var_31_object = var_20_object; // 0x3 Mov
	var_32_float = 70.0; // 0x4 MovF
	func_1402(var_31_object, var_32_float); // 0x5 NEW_2
	var_77_bool = var_30_bool == 0; // 0x7 Not
	if(var_77_bool == 0) goto Label_11; // 0x8 JumpB
	var_19_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_26_object); // 0xb Func
	var_78_int = 0; // 0xd PushV
	func_1697(var_78_int); // 0xe NEW_2
	SetNPCName(var_78_int); // 0x10 ObjFunc
	var_79_int = 0; // 0x12 PushV
	func_1695(var_79_int); // 0x13 NEW_2
	SetNPCDescription(var_79_int); // 0x15 ObjFunc
	var_80_string = ""; // 0x17 PushV
	func_1699(var_80_string); // 0x18 NEW_2
	SetPhoto(var_80_string); // 0x1a ObjFunc
	var_81_string = ""; // 0x1c PushV
	func_1701(var_81_string); // 0x1d NEW_2
	SetPhoto2(var_81_string); // 0x1f ObjFunc
	var_82_int = 0; // 0x21 PushV
	func_1793(var_82_int); // 0x22 NEW_2
	SetPlayerName(var_82_int); // 0x24 ObjFunc
	var_28_int = -1; // 0x26 MovI
	IsOverrideActive(var_27_bool); // 0x27 Func
	var_90_bool = var_27_bool; // 0x29 Push
	if(var_90_bool == 0) goto Label_45; // 0x2a JumpB
	var_19_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_26_object); // 0x2d Func
	var_91_object = Obj(); var_92_object = Obj(); // 0x2f PushV
	var_91_object = var_20_object; // 0x30 Mov
	var_92_object = var_26_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_29_bool); // 0x36 ObjFunc
	
Label_56:
	var_174_bool = var_29_bool == 0; // 0x38 Not
	if(var_174_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_29_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_175_object = Obj(); // 0x3f PushV
	var_175_object = var_20_object; // 0x40 Mov
	func_1471(); // 0x41 NEW_2
	StopDialog(var_26_object); // 0x43 Func
	GetReturnValue(var_28_int); // 0x45 ObjFunc
	var_19_int = var_28_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1793(var_82_int)
{
	var_83_int = 0; var_84_int = 0; // 0x701 PushV
	var_85_string = "branch"; // 0x702 PushS
	GetVariable(var_85_string, var_84_int); // 0x703 Func
	var_86_int = 0; // 0x705 PushI
	var_87_bool = var_84_int == var_86_int; // 0x706 Eq
	if(var_87_bool == 0) goto Label_1803; // 0x707 JumpB
	var_82_int = 1; // 0x708 MovI
	return 2; // 0x709 Return
	
Label_1803:
	var_88_int = 1; // 0x70b PushI
	var_89_bool = var_84_int == var_88_int; // 0x70c Eq
	if(var_89_bool == 0) goto Label_1808; // 0x70d JumpB
	var_82_int = 2; // 0x70e MovI
	return 2; // 0x70f Return
	
Label_1808:
	var_82_int = 3; // 0x710 MovI
	return 2; // 0x711 Return
}


func_1538(var_83_string)
{
	var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x602 PushV
	IsExisting3DSound(var_92_bool, var_83_string); // 0x603 Func
	var_100_bool = var_92_bool == 0; // 0x605 Not
	if(var_100_bool == 0) goto Label_1563; // 0x606 JumpB
	var_93_int = 0; // 0x607 MovI
	
Label_1544:
	var_101_int = 1; // 0x608 PushI
	var_102_int = var_93_int + var_101_int; // 0x609 Add
	var_103_int = var_83_string + var_102_int; // 0x60a Add
	IsExisting3DSound(var_94_bool, var_103_int); // 0x60b Func
	var_104_bool = var_94_bool == 0; // 0x60d Not
	if(var_104_bool == 0) goto Label_1552; // 0x60e JumpB
	goto Label_1555; // 0x60f Jump
	
Label_1555:
	var_105_bool = var_93_int == 0; // 0x613 Not
	if(var_105_bool == 0) goto Label_1558; // 0x614 JumpB
	return 16; // 0x615 Return
	
Label_1558:
	irand(var_95_int, var_93_int); // 0x616 Func
	var_106_int = 1; // 0x618 PushI
	var_107_int = var_95_int + var_106_int; // 0x619 Add
	var_83_string = var_83_string + var_107_int; // 0x61a Add2
	
Label_1563:
	Is3DSoundLoaded(var_96_bool, var_83_string); // 0x61b Func
	var_108_bool = var_96_bool; // 0x61d Push
	if(var_108_bool == 0) goto Label_1578; // 0x61e JumpB
	GetEyesHeight(var_97_float); // 0x61f Func
	GetDirection(var_98_cvector); // 0x621 Func
	var_109_int = 50; // 0x623 PushI
	var_99_cvector = var_98_cvector * var_109_int; // 0x624 Mult2
	var_110_float = GetByIndex(var_99_cvector, 1); // 0x625 PushE
	var_110_float = var_110_float + var_97_float; // 0x626 Add2
	SetByIndex(var_99_cvector, 1) = var_110_float; // 0x627 PopE
	PlayGlobalSound(var_83_string, var_99_cvector); // 0x628 Func
	
Label_1578:
	return 16; // 0x62a Return
	
Label_1552:
	var_111_int = 1; // 0x610 PushI
	var_93_int = var_93_int + var_111_int; // 0x611 Add2
	goto Label_1544; // 0x612 Jump
}


func_771()
{
	return 0; // 0x304 Return
}


func_773(var_183_object, var_184_bool)
{
	var_188_bool = var_184_bool; // 0x306 Push
	if(var_188_bool == 0) goto Label_780; // 0x307 JumpB
	var_189_int = 100; // 0x308 PushI
	var_190_float = 1.0; // 0x309 PushF
	SetTimer(var_189_int, var_190_float); // 0x30a Func
	
Label_780:
	var_191_object = Obj(); // 0x30c PushV
	var_191_object = var_183_object; // 0x30d Mov
	func_836(var_187_bool, var_183_object, var_184_bool, var_191_object); // 0x30e NEW_2
	return 0; // 0x310 Return
}


func_1159(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x487 PushV
	IsPlayerActor(var_17_object, var_19_bool); // 0x488 Func
	var_16_bool = var_19_bool; // 0x48a Mov
	return 2; // 0x48b Return
}


func_1673(var_27_float)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x689 PushV
	CreateFloatVector(var_29_object); // 0x68a Func
	add(var_27_float); // 0x68c ObjFunc
	var_30_int = 16; // 0x68e PushI
	SendWorldWndMessage(var_30_int, var_29_object); // 0x68f Func
	return 2; // 0x691 Return
}


func_1164(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x48c PushV
	var_44_string = "HasProperty"; // 0x48d PushS
	var_45_int = 2; // 0x48e PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x48f FuncExist
	var_47_bool = var_46_bool == 0; // 0x490 Not
	if(var_47_bool == 0) goto Label_1172; // 0x491 JumpB
	var_39_bool = 0; // 0x492 MovB
	return 2; // 0x493 Return
	
Label_1172:
	HasProperty(var_41_string, var_43_bool); // 0x494 ObjFunc
	var_39_bool = var_43_bool; // 0x496 Mov
	return 2; // 0x497 Return
}


func_909(var_0_object, var_1_object, var_2_object, var_106_int)
{
	var_107_cvector = CVector(0,0,0); var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; // 0x38d PushV
	var_115_int = 120; // 0x38e PushI
	var_116_bool = var_106_int != var_115_int; // 0x38f Neq
	if(var_116_bool == 0) goto Label_914; // 0x390 JumpB
	return 8; // 0x391 Return
	
Label_914:
	var_117_bool = var_0_object == 0; // 0x392 NullEq
	if(var_117_bool == 0) goto Label_923; // 0x393 JumpB
	Stop(); // 0x394 Func
	var_118_int = 1; // 0x396 PushI
	KillTimer(var_118_int); // 0x397 Func
	var_2_object = 1; // 0x399 TMovB
	goto Label_960; // 0x39a Jump
	
Label_960:
	return 8; // 0x3c0 Return
	
Label_923:
	GetDirection(var_111_cvector); // 0x39b Func
	var_119_float = 7000.0; // 0x39d PushF
	FindDirLength(var_112_float, var_111_cvector, var_119_float); // 0x39e Func
	var_120_cvector = CVector(0,0,0); var_121_float = 0; // 0x3a0 PushV
	var_121_float = 1.74533; // 0x3a1 MovF
	func_806(var_120_cvector, var_121_float); // 0x3a2 NEW_2
	var_113_cvector = var_120_cvector; // 0x3a3 Mov
	var_114_float = var_113_cvector | var_113_cvector; // 0x3a5 Or2
	var_150_bool = 0; // 0x3a6 PushV
	var_150_bool = 0; // 0x3a7 MovB
	var_151_float = 2500.0; // 0x3a8 PushF
	var_152_bool = var_114_float >= var_151_float; // 0x3a9 GE
	if(var_152_bool == 0) goto Label_953; // 0x3aa JumpB
	var_153_bool = 0; // 0x3ab PushV
	var_153_bool = 1; // 0x3ac MovB
	var_154_float = var_112_float * var_112_float; // 0x3ad Mult
	var_155_float = 2.25; // 0x3ae PushF
	var_156_float = var_154_float * var_155_float; // 0x3af Mult
	var_157_bool = var_114_float >= var_156_float; // 0x3b0 GE
	if(var_157_bool == 0) goto Label_951; // 0x3b1 JumpB
	var_158_bool = 0; // 0x3b2 PushV
	func_977(var_153_bool, var_158_bool); // 0x3b3 NEW_2
	if(var_158_bool == 0) goto Label_951; // 0x3b5 JumpB
	var_153_bool = 0; // 0x3b6 MovB
	
Label_951:
	if(var_153_bool == 0) goto Label_953; // 0x3b7 JumpB
	var_150_bool = 1; // 0x3b8 MovB
	
Label_953:
	if(var_150_bool == 0) goto Label_960; // 0x3b9 JumpB
	Stop(); // 0x3ba Func
	var_178_cvector = CVector(0,0,0); // 0x3bc PushV
	func_1139(var_178_cvector); // 0x3bd NEW_2
	var_1_object = var_178_cvector + var_113_cvector; // 0x3bf Add2
}


func_142(var_2_object, var_129_string)
{
	var_130_bool = 0; // 0x8f PushV
	func_1703(var_130_bool); // 0x90 NEW_2
	var_131_bool = var_130_bool == 0; // 0x92 Not
	if(var_131_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_132_bool = var_129_string == var_2_object; // 0x95 Eq
	if(var_132_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_133_string = ""; var_134_bool = 0; // 0x98 PushV
	var_133_string = var_129_string; // 0x99 Mov
	var_135_string = ""; // 0x9a PushS
	var_136_bool = var_129_string == var_135_string; // 0x9b Eq
	if(var_136_bool == 0) goto Label_159; // 0x9c JumpB
	var_134_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_1505(var_133_string, var_134_bool); // 0xa0 NEW_2
	var_2_object = var_129_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_134_bool = 1; // 0x9f MovB
}


func_528(var_0_object, var_1_object, var_4_bool, var_18_bool)
{
	var_19_float = 0; var_20_float = 0; // 0x210 PushV
	var_21_bool = var_4_bool == 0; // 0x211 NullEq
	if(var_21_bool == 0) goto Label_533; // 0x212 JumpB
	var_18_bool = 0; // 0x213 MovB
	return 2; // 0x214 Return
	
Label_533:
	var_22_float = 0; var_23_object = Obj(); // 0x215 PushV
	var_23_object = var_4_bool; // 0x216 MovT
	func_1151(var_23_object); // 0x217 NEW_2
	var_20_float = sqrt(var_22_float); // 0x219 Sqrt2
	var_30_object = var_2_object; // 0x21a PushT
	if(var_30_object == 0) goto Label_541; // 0x21b JumpB
	var_20_float = var_20_float - var_1_object; // 0x21c Sub2
	
Label_541:
	var_18_bool = var_20_float < var_0_object; // 0x21d LT2
	return 2; // 0x21e Return
}


func_1810()
{
	var_18_object = Obj(); var_19_float = 0; var_20_object = Obj(); var_21_float = 0; // 0x712 PushV
	var_22_string = "player"; // 0x713 PushS
	FindActor(var_20_object, var_22_string); // 0x714 Func
	var_23_object = var_20_object; // 0x716 Push
	if(var_23_object == 0) goto Label_1834; // 0x717 JumpB
	var_24_float = 0; var_25_object = Obj(); // 0x718 PushV
	var_25_object = var_20_object; // 0x719 Mov
	func_1151(var_25_object); // 0x71a NEW_2
	var_32_float = 640000.0; // 0x71c PushF
	var_33_bool = var_24_float <= var_32_float; // 0x71d LE
	if(var_33_bool == 0) goto Label_1834; // 0x71e JumpB
	var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0; // 0x71f PushV
	var_35_object = var_20_object; // 0x720 Mov
	var_36_float = 0.05; // 0x721 MovF
	var_37_int = 0; // 0x722 MovI
	func_1198(var_34_float, var_35_object, var_36_float, var_37_int); // 0x723 NEW_2
	var_21_float = var_34_float; // 0x724 Mov
	var_104_int = 6; // 0x726 PushI
	var_105_float = 0.05; // 0x727 PushF
	ReportHit(var_20_object, var_104_int, var_21_float, var_105_float); // 0x728 Func
	
Label_1834:
	return 4; // 0x72a Return
}


func_1683(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x693 PushV
	FindActor(var_19_object, var_16_string); // 0x694 Func
	var_20_bool = var_19_object == 0; // 0x696 NullEq
	if(var_20_bool == 0) goto Label_1690; // 0x697 JumpB
	var_15_bool = 0; // 0x698 MovB
	return 2; // 0x699 Return
	
Label_1690:
	Trigger(var_19_object, var_17_string); // 0x69a Func
	var_15_bool = 1; // 0x69c MovB
	return 2; // 0x69d Return
}


func_659(var_112_bool)
{
	var_112_bool = 1; // 0x293 MovB
	return 0; // 0x294 Return
}


func_661()
{
	StopAnimation(); // 0x295 Func
	StopGroup0(); // 0x297 Func
	return 0; // 0x299 Return
}


func_1176(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float)
{
	var_37_float = 0; var_38_float = 0; // 0x498 PushV
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x499 PushV
	var_40_object = var_32_object; // 0x49a Mov
	var_41_string = var_33_string; // 0x49b Mov
	func_1164(var_39_bool, var_40_object, var_41_string); // 0x49c NEW_2
	var_48_bool = var_39_bool == 0; // 0x49e Not
	if(var_48_bool == 0) goto Label_1186; // 0x49f JumpB
	var_31_bool = 0; // 0x4a0 MovB
	return 2; // 0x4a1 Return
	
Label_1186:
	GetProperty(var_33_string, var_38_float); // 0x4a2 ObjFunc
	var_49_float = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; // 0x4a4 PushV
	var_50_float = var_38_float + var_34_float; // 0x4a5 Add2
	var_51_float = var_35_float; // 0x4a6 Mov
	var_52_float = var_36_float; // 0x4a7 Mov
	func_1602(var_49_float, var_50_float, var_51_float, var_52_float); // 0x4a8 NEW_2
	SetProperty(var_33_string, var_49_float); // 0x4aa ObjFunc
	var_31_bool = 1; // 0x4ac MovB
	return 2; // 0x4ad Return
}


func_1695(var_79_int)
{
	var_79_int = 515595; // 0x69f MovI
	return 0; // 0x6a0 Return
}


func_1697(var_78_int)
{
	var_78_int = 512611; // 0x6a1 MovI
	return 0; // 0x6a2 Return
}


func_1699(var_80_string)
{
	var_80_string = "ui/NPC_Albinos.png"; // 0x6a3 MovS
	return 0; // 0x6a4 Return
}


func_1315(var_19_object, var_20_int, var_21_float)
{
	var_22_cvector = CVector(0,0,0); var_23_object = Obj(); var_24_int = 0; var_25_bool = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_int = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_object = Obj(); var_33_int = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_int = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); // 0x523 PushV
	var_40_bool = 0; // 0x524 PushV
	var_40_bool = 0; // 0x525 MovB
	var_41_bool = 0; // 0x526 PushV
	var_41_bool = 0; // 0x527 MovB
	var_42_object = var_19_object; // 0x528 Push
	if(var_42_object == 0) goto Label_1326; // 0x529 JumpB
	var_43_int = 4; // 0x52a PushI
	var_44_bool = var_20_int != var_43_int; // 0x52b Neq
	if(var_44_bool == 0) goto Label_1326; // 0x52c JumpB
	var_41_bool = 1; // 0x52d MovB
	
Label_1326:
	if(var_41_bool == 0) goto Label_1331; // 0x52e JumpB
	var_45_int = 5; // 0x52f PushI
	var_46_bool = var_20_int != var_45_int; // 0x530 Neq
	if(var_46_bool == 0) goto Label_1331; // 0x531 JumpB
	var_40_bool = 1; // 0x532 MovB
	
Label_1331:
	if(var_40_bool == 0) goto Label_1378; // 0x533 JumpB
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x534 PushV
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); // 0x535 PushV
	var_50_object = var_19_object; // 0x536 Mov
	func_1144(var_50_object); // 0x537 NEW_2
	var_48_cvector = var_49_cvector; // 0x538 Mov
	func_1585(var_47_cvector, var_48_cvector); // 0x53a NEW_2
	var_31_cvector = var_47_cvector; // 0x53b Mov
	CreateVectorVector(var_32_object); // 0x53d Func
	var_33_int = 1; // 0x53f MovI
	
Label_1344:
	var_60_string = "hit"; // 0x540 PushS
	var_61_int = var_60_string + var_33_int; // 0x541 Add
	GetGeometryLocator(var_61_int, var_34_bool, var_35_cvector, var_36_cvector); // 0x542 Func
	var_62_bool = var_34_bool == 0; // 0x544 Not
	if(var_62_bool == 0) goto Label_1351; // 0x545 JumpB
	goto Label_1360; // 0x546 Jump
	
Label_1360:
	size(var_37_int); // 0x550 ObjFunc
	var_63_int = var_37_int; // 0x552 Push
	if(var_63_int == 0) goto Label_1377; // 0x553 JumpB
	irand(var_38_int, var_37_int); // 0x554 Func
	get(var_39_cvector, var_38_int); // 0x556 ObjFunc
	var_64_object = Obj(); var_65_int = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x558 PushV
	var_64_object = var_19_object; // 0x559 Mov
	var_65_int = var_20_int; // 0x55a Mov
	var_66_float = var_21_float; // 0x55b Mov
	var_67_cvector = var_39_cvector; // 0x55c Mov
	var_68_cvector = -var_31_cvector; // 0x55d Neg2
	func_1383(var_66_float, var_67_cvector, var_68_cvector); // 0x55e NEW_2
	return 18; // 0x560 Return
	
Label_1377:
	var_32_object = 0; // 0x561 SetNull
	
Label_1378:
	var_109_object = Obj(); // 0x562 PushV
	var_109_object = var_19_object; // 0x563 Mov
	func_1271(var_109_object); // 0x564 NEW_2
	return 18; // 0x566 Return
	
Label_1351:
	var_110_int = var_36_cvector | var_31_cvector; // 0x547 Or
	var_111_float = 0.70711; // 0x548 PushF
	var_112_bool = var_110_int >= var_111_float; // 0x549 GE
	if(var_112_bool == 0) goto Label_1357; // 0x54a JumpB
	add(var_35_cvector); // 0x54b ObjFunc
	
Label_1357:
	var_113_int = 1; // 0x54d PushI
	var_33_int = var_33_int + var_113_int; // 0x54e Add2
	goto Label_1344; // 0x54f Jump
}


func_1701(var_81_string)
{
	var_81_string = "ui/NPC_Albinos_b.png"; // 0x6a5 MovS
	return 0; // 0x6a6 Return
}


func_806(var_120_cvector, var_121_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_float = 0; // 0x326 PushV
	GetPosition(var_128_cvector); // 0x327 Func
	GetPosition(var_129_cvector); // 0x329 TObjFunc
	GetDirection(var_130_cvector); // 0x32b Func
	var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); // 0x32d PushV
	var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); // 0x32e PushV
	var_137_cvector = var_128_cvector - var_129_cvector; // 0x32f Sub2
	func_1585(var_136_cvector, var_137_cvector); // 0x330 NEW_2
	var_143_float = 0.75; // 0x332 PushF
	var_144_float = var_130_cvector * var_143_float; // 0x333 Mult
	var_135_cvector = var_136_cvector + var_144_float; // 0x334 Add2
	func_1585(var_134_cvector, var_135_cvector); // 0x335 NEW_2
	var_131_cvector = var_134_cvector; // 0x336 Mov
	var_145_int = 32; // 0x338 PushI
	var_146_float = 7000.0; // 0x339 PushF
	FindLongestDir(var_132_cvector, var_133_float, var_131_cvector, var_121_float, var_145_int, var_146_float); // 0x33a Func
	var_147_int = 100; // 0x33c PushI
	var_133_float = var_133_float - var_147_int; // 0x33d Sub2
	var_148_int = 0; // 0x33e PushI
	var_149_bool = var_133_float < var_148_int; // 0x33f LT
	if(var_149_bool == 0) goto Label_834; // 0x340 JumpB
	var_133_float = 0; // 0x341 MovI
	
Label_834:
	var_120_cvector = var_132_cvector * var_133_float; // 0x342 Mult2
	return 12; // 0x343 Return
}


func_1703(var_73_bool)
{
	var_73_bool = 0; // 0x6a7 MovB
	return 0; // 0x6a8 Return
}


func_1705(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x6a9 PushV
	var_96_string = "idle"; // 0x6aa MovS
	var_97_int = var_94_int; // 0x6ab Push
	if(var_97_int == 0) goto Label_1710; // 0x6ac JumpB
	var_96_string = var_96_string + var_94_int; // 0x6ad Add2
	
Label_1710:
	var_93_string = var_96_string; // 0x6ae Mov
	return 2; // 0x6af Return
}


func_1579(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x62b PushV
	self(var_19_object); // 0x62c Func
	var_17_object = var_19_object; // 0x62e Mov
	return 2; // 0x62f Return
}


func_1836(var_58_object)
{
	var_59_object = Obj(); // 0x72d PushV
	var_59_object = var_58_object; // 0x72e Mov
	TaskCall(5); // 0x72f TaskCall
	func_993(var_59_object); // 0x730 NEW_2
	TaskReturn(); // 0x731 TaskReturn
	return 0; // 0x733 Return
}


func_1198(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x4ae PushV
	var_50_bool = 0; var_51_object = Obj(); var_52_string = ""; // 0x4af PushV
	var_51_object = var_35_object; // 0x4b0 Mov
	var_52_string = "health"; // 0x4b1 MovS
	func_1164(var_50_bool, var_51_object, var_52_string); // 0x4b2 NEW_2
	var_59_bool = var_50_bool == 0; // 0x4b4 Not
	if(var_59_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_34_float = 0.0; // 0x4b6 MovF
	return 12; // 0x4b7 Return
	
Label_1208:
	var_60_bool = 0; var_61_object = Obj(); var_62_string = ""; // 0x4b8 PushV
	var_61_object = var_35_object; // 0x4b9 Mov
	var_62_string = "armor"; // 0x4ba MovS
	func_1164(var_60_bool, var_61_object, var_62_string); // 0x4bb NEW_2
	var_63_bool = var_60_bool == 0; // 0x4bd Not
	if(var_63_bool == 0) goto Label_1217; // 0x4be JumpB
	var_44_int = 0; // 0x4bf MovI
	goto Label_1220; // 0x4c0 Jump
	
Label_1220:
	var_64_string = "armor_"; // 0x4c4 PushS
	var_65_string = ""; var_66_int = 0; // 0x4c5 PushV
	var_66_int = var_37_int; // 0x4c6 Mov
	func_1125(var_65_string, var_66_int); // 0x4c7 NEW_2
	var_45_string = var_64_string + var_65_string; // 0x4c9 Add2
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0x4ca PushV
	var_72_object = var_35_object; // 0x4cb Mov
	var_73_string = var_45_string; // 0x4cc Mov
	func_1164(var_71_bool, var_72_object, var_73_string); // 0x4cd NEW_2
	var_74_bool = var_71_bool == 0; // 0x4cf Not
	if(var_74_bool == 0) goto Label_1235; // 0x4d0 JumpB
	var_46_int = 0; // 0x4d1 MovI
	goto Label_1237; // 0x4d2 Jump
	
Label_1237:
	var_75_float = 0; var_76_float = 0; var_77_float = 0; // 0x4d5 PushV
	var_78_int = var_44_int + var_46_int; // 0x4d6 Add
	var_79_float = 100.0; // 0x4d7 PushF
	var_76_float = var_78_int / var_78_int; // 0x4d8 Div2
	var_77_float = 1; // 0x4d9 MovI
	func_1595(var_75_float, var_76_float, var_77_float); // 0x4da NEW_2
	var_47_float = var_75_float; // 0x4db Mov
	var_81_string = "health"; // 0x4dd PushS
	GetProperty(var_81_string, var_48_float); // 0x4de ObjFunc
	var_82_int = 1; // 0x4e0 PushI
	var_83_int = var_82_int - var_47_float; // 0x4e1 Sub
	var_49_float = var_36_float * var_83_int; // 0x4e2 Mult2
	var_84_string = "health"; // 0x4e3 PushS
	var_85_float = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0; // 0x4e4 PushV
	var_86_float = var_48_float - var_49_float; // 0x4e5 Sub2
	var_87_float = 0; // 0x4e6 MovI
	var_88_float = 1; // 0x4e7 MovI
	func_1602(var_85_float, var_86_float, var_87_float, var_88_float); // 0x4e8 NEW_2
	SetProperty(var_84_string, var_85_float); // 0x4ea ObjFunc
	var_91_bool = 0; var_92_object = Obj(); // 0x4ec PushV
	var_92_object = var_35_object; // 0x4ed Mov
	func_1159(var_91_bool, var_92_object); // 0x4ee NEW_2
	if(var_91_bool == 0) goto Label_1269; // 0x4f0 JumpB
	var_95_float = 0; // 0x4f1 PushV
	var_95_float = -var_49_float; // 0x4f2 Neg2
	func_1656(var_95_float); // 0x4f3 NEW_2
	
Label_1269:
	var_34_float = var_49_float; // 0x4f5 Mov
	return 12; // 0x4f6 Return
	
Label_1235:
	GetProperty(var_45_string, var_46_int); // 0x4d3 ObjFunc
	
Label_1217:
	var_103_string = "armor"; // 0x4c1 PushS
	GetProperty(var_103_string, var_44_int); // 0x4c2 ObjFunc
}


func_1712(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x6b0 PushV
	var_90_int = 0; // 0x6b1 MovI
	
Label_1714:
	var_92_string = "all"; // 0x6b2 PushS
	var_93_string = ""; var_94_int = 0; // 0x6b3 PushV
	var_94_int = var_90_int; // 0x6b4 Mov
	func_1705(var_93_string, var_94_int); // 0x6b5 NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x6b7 Func
	var_98_bool = var_91_bool == 0; // 0x6b9 Not
	if(var_98_bool == 0) goto Label_1724; // 0x6ba JumpB
	goto Label_1727; // 0x6bb Jump
	
Label_1727:
	var_87_int = var_90_int; // 0x6bf Mov
	return 4; // 0x6c0 Return
	
Label_1724:
	var_99_int = 1; // 0x6bc PushI
	var_90_int = var_90_int + var_99_int; // 0x6bd Add2
	goto Label_1714; // 0x6be Jump
}


func_1585(var_47_cvector, var_48_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x631 PushV
	var_57_int = var_48_cvector | var_48_cvector; // 0x632 Or
	var_56_float = sqrt(var_57_int); // 0x633 Sqrt2
	var_58_float = 0.0; // 0x634 PushF
	var_59_bool = var_56_float < var_58_float; // 0x635 LT
	if(var_59_bool == 0) goto Label_1593; // 0x636 JumpB
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x637 MovV
	return 2; // 0x638 Return
	
Label_1593:
	var_47_cvector = var_48_cvector / var_48_cvector; // 0x639 Div2
	return 2; // 0x63a Return
}


func_566(var_2_object, var_3_string)
{
	func_661(); // 0x237 NEW_2
	var_16_int = 10; // 0x239 PushI
	KillTimer(var_16_int); // 0x23a Func
	var_17_object = var_2_object; // 0x23c PushT
	if(var_17_object == 0) goto Label_578; // 0x23d JumpB
	var_18_string = "head"; // 0x23e PushS
	UnlookAsync(var_18_string); // 0x23f Func
	var_2_object = 0; // 0x241 TMovB
	
Label_578:
	var_3_string = 1; // 0x242 TMovB
	return 0; // 0x243 Return
}


func_1595(var_75_float, var_76_float, var_77_float)
{
	var_80_bool = var_76_float < var_77_float; // 0x63c LT
	if(var_80_bool == 0) goto Label_1600; // 0x63d JumpB
	var_75_float = var_76_float; // 0x63e Mov
	goto Label_1601; // 0x63f Jump
	
Label_1601:
	return 0; // 0x641 Return
	
Label_1600:
	var_75_float = var_77_float; // 0x640 Mov
}


func_1471()
{
	var_176_bool = 0; var_177_bool = 0; // 0x5bf PushV
	var_178_bool = 1; // 0x5c0 PushB
	CameraSwitchToNormal(var_178_bool); // 0x5c1 Func
	var_179_bool = 0; // 0x5c3 PushV
	func_1703(var_179_bool); // 0x5c4 NEW_2
	if(var_179_bool == 0) goto Label_1480; // 0x5c6 JumpB
	goto Label_1488; // 0x5c7 Jump
	
Label_1488:
	return 2; // 0x5d0 Return
	
Label_1480:
	var_180_string = "head"; // 0x5c8 PushS
	HasAnimationTrack(var_177_bool, var_180_string); // 0x5c9 Func
	var_181_bool = var_177_bool; // 0x5cb Push
	if(var_181_bool == 0) goto Label_1488; // 0x5cc JumpB
	var_182_string = "head"; // 0x5cd PushS
	UnlookAsync(var_182_string); // 0x5ce Func
}


func_1729()
{
	func_1739(); // 0x6c3 NEW_2
	var_123_bool = 0; var_124_string = ""; var_125_string = ""; // 0x6c5 PushV
	var_124_string = "quest_k5_03"; // 0x6c6 MovS
	var_125_string = "completed"; // 0x6c7 MovS
	func_1683(var_123_bool, var_124_string, var_125_string); // 0x6c8 NEW_2
	return 0; // 0x6ca Return
}


func_961(var_2_object)
{
	Stop(); // 0x3c1 Func
	var_16_int = 120; // 0x3c3 PushI
	KillTimer(var_16_int); // 0x3c4 Func
	var_2_object = 1; // 0x3c6 TMovB
	return 0; // 0x3c7 Return
}


func_1602(var_49_float, var_50_float, var_51_float, var_52_float)
{
	var_53_bool = var_50_float < var_51_float; // 0x643 LT
	if(var_53_bool == 0) goto Label_1607; // 0x644 JumpB
	var_49_float = var_51_float; // 0x645 Mov
	return 0; // 0x646 Return
	
Label_1607:
	var_54_bool = var_50_float > var_52_float; // 0x647 GT
	if(var_54_bool == 0) goto Label_1611; // 0x648 JumpB
	var_49_float = var_52_float; // 0x649 Mov
	return 0; // 0x64a Return
	
Label_1611:
	var_49_float = var_50_float; // 0x64b Mov
	return 0; // 0x64c Return
}


func_580()
{
	var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_bool = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_int = 0; var_82_bool = 0; var_83_float = 0; var_84_bool = 0; // 0x244 PushV
	WaitForAnimEnd(); // 0x245 Func
	var_85_bool = 0; // 0x247 PushV
	func_1397(var_85_bool); // 0x248 NEW_2
	var_86_bool = var_85_bool == 0; // 0x24a Not
	if(var_86_bool == 0) goto Label_589; // 0x24b JumpB
	return 14; // 0x24c Return
	
Label_589:
	var_87_int = 0; // 0x24d PushV
	func_1712(var_87_int); // 0x24e NEW_2
	var_78_int = var_87_int; // 0x24f Mov
	var_79_int = 0; // 0x251 MovI
	
Label_594:
	var_100_bool = 0; // 0x252 PushV
	var_100_bool = 0; // 0x253 MovB
	var_101_int = 5; // 0x254 PushI
	var_102_bool = var_79_int < var_101_int; // 0x255 LT
	if(var_102_bool == 0) goto Label_604; // 0x256 JumpB
	var_103_bool = 0; // 0x257 PushV
	func_1397(var_103_bool); // 0x258 NEW_2
	if(var_103_bool == 0) goto Label_604; // 0x25a JumpB
	var_100_bool = 1; // 0x25b MovB
	
Label_604:
	if(var_100_bool == 0) goto Label_656; // 0x25c JumpB
	var_104_int = 3; // 0x25d PushI
	irand(var_80_int, var_104_int); // 0x25e Func
	var_105_int = 0; // 0x260 PushI
	var_106_bool = var_80_int == var_105_int; // 0x261 Eq
	if(var_106_bool == 0) goto Label_628; // 0x262 JumpB
	var_107_int = var_78_int; // 0x263 Push
	if(var_107_int == 0) goto Label_627; // 0x264 JumpB
	irand(var_81_int, var_78_int); // 0x265 Func
	var_108_string = "all"; // 0x267 PushS
	var_109_string = ""; var_110_int = 0; // 0x268 PushV
	var_110_int = var_81_int; // 0x269 Mov
	func_1705(var_109_string, var_110_int); // 0x26a NEW_2
	PlayAnimation(var_108_string, var_109_string); // 0x26c Func
	WaitForAnimEnd(var_82_bool); // 0x26e Func
	var_111_bool = var_82_bool == 0; // 0x270 Not
	if(var_111_bool == 0) goto Label_627; // 0x271 JumpB
	goto Label_656; // 0x272 Jump
	
Label_656:
	ResetAAS(); // 0x290 Func
	return 14; // 0x292 Return
	
Label_627:
	goto Label_645; // 0x273 Jump
	
Label_645:
	var_112_bool = 0; // 0x285 PushV
	func_659(var_112_bool); // 0x286 NEW_2
	var_113_bool = var_112_bool == 0; // 0x288 Not
	if(var_113_bool == 0) goto Label_651; // 0x289 JumpB
	goto Label_656; // 0x28a Jump
	
Label_651:
	ResetAAS(); // 0x28b Func
	var_114_int = 1; // 0x28d PushI
	var_79_int = var_79_int + var_114_int; // 0x28e Add2
	goto Label_594; // 0x28f Jump
	
Label_628:
	var_115_int = 1; // 0x274 PushI
	var_116_bool = var_80_int == var_115_int; // 0x275 Eq
	if(var_116_bool == 0) goto Label_642; // 0x276 JumpB
	var_117_int = 4; // 0x277 PushI
	rand(var_83_float, var_117_int); // 0x278 Func
	var_118_int = 1; // 0x27a PushI
	var_119_int = var_83_float + var_118_int; // 0x27b Add
	Sleep(var_119_int, var_84_bool); // 0x27c Func
	var_120_bool = var_84_bool == 0; // 0x27e Not
	if(var_120_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_656; // 0x280 Jump
	
Label_641:
	goto Label_645; // 0x281 Jump
	
Label_642:
	var_121_int = var_79_int; // 0x282 Push
	if(var_121_int == 0) goto Label_645; // 0x283 JumpB
	goto Label_656; // 0x284 Jump
}


func_836(var_0_object, var_1_object, var_2_object, var_191_object)
{
	var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_bool = 0; var_195_cvector = CVector(0,0,0); var_196_float = 0; var_197_cvector = CVector(0,0,0); var_198_float = 0; var_199_bool = 0; var_200_cvector = CVector(0,0,0); var_201_float = 0; // 0x344 PushV
	var_0_object = var_191_object; // 0x345 TMov
	var_202_cvector = CVector(0,0,0); var_203_float = 0; // 0x346 PushV
	var_203_float = 1.74533; // 0x347 MovF
	func_806(var_202_cvector, var_203_float); // 0x348 NEW_2
	var_197_cvector = var_202_cvector; // 0x349 Mov
	var_198_float = var_197_cvector | var_197_cvector; // 0x34b Or2
	var_227_float = 2500.0; // 0x34c PushF
	var_228_bool = var_198_float < var_227_float; // 0x34d LT
	if(var_228_bool == 0) goto Label_865; // 0x34e JumpB
	var_229_cvector = CVector(0,0,0); var_230_float = 0; // 0x34f PushV
	var_230_float = 2.61799; // 0x350 MovF
	func_806(var_229_cvector, var_230_float); // 0x351 NEW_2
	var_197_cvector = var_229_cvector; // 0x352 Mov
	var_198_float = var_197_cvector | var_197_cvector; // 0x354 Or2
	var_231_float = 2500.0; // 0x355 PushF
	var_232_bool = var_198_float < var_231_float; // 0x356 LT
	if(var_232_bool == 0) goto Label_865; // 0x357 JumpB
	var_233_string = "Can't retreat, distance: "; // 0x358 PushS
	var_234_float = sqrt(var_198_float); // 0x359 Sqrt
	var_235_int = var_233_string + var_234_float; // 0x35a Add
	Trace(var_235_int); // 0x35b Func
	var_236_float = 0.5; // 0x35d PushF
	Sleep(var_236_float); // 0x35e Func
	return 10; // 0x360 Return
	
Label_865:
	var_237_float = GetByIndex(var_197_cvector, 0); // 0x361 PushE
	var_238_float = GetByIndex(var_197_cvector, 2); // 0x362 PushE
	Rotate(var_237_float, var_238_float); // 0x363 Func
	var_239_cvector = CVector(0,0,0); // 0x365 PushV
	func_1139(var_239_cvector); // 0x366 NEW_2
	var_1_object = var_239_cvector + var_197_cvector; // 0x368 Add2
	var_242_int = 120; // 0x369 PushI
	var_243_float = 0.5; // 0x36a PushF
	SetTimer(var_242_int, var_243_float); // 0x36b Func
	var_2_object = 0; // 0x36d TMovB
	
Label_878:
	var_244_int = 1; // 0x36e PushI
	MovePoint(var_244_int, var_244_int, var_199_bool); // 0x36f Func
	var_245_bool = var_199_bool; // 0x371 Push
	if(var_245_bool == 0) goto Label_906; // 0x372 JumpB
	var_246_bool = var_0_object == 0; // 0x373 NullEq
	if(var_246_bool == 0) goto Label_887; // 0x374 JumpB
	goto Label_908; // 0x375 Jump
	
Label_908:
	return 10; // 0x38c Return
	
Label_887:
	var_247_cvector = CVector(0,0,0); var_248_float = 0; // 0x377 PushV
	var_248_float = 2.61799; // 0x378 MovF
	func_806(var_247_cvector, var_248_float); // 0x379 NEW_2
	var_200_cvector = var_247_cvector; // 0x37a Mov
	var_201_float = var_200_cvector | var_200_cvector; // 0x37c Or2
	var_249_float = 2500.0; // 0x37d PushF
	var_250_bool = var_201_float >= var_249_float; // 0x37e GE
	if(var_250_bool == 0) goto Label_905; // 0x37f JumpB
	var_251_cvector = CVector(0,0,0); // 0x380 PushV
	func_1139(var_251_cvector); // 0x381 NEW_2
	var_1_object = var_251_cvector + var_200_cvector; // 0x383 Add2
	var_252_int = 120; // 0x384 PushI
	var_253_float = 0.5; // 0x385 PushF
	SetTimer(var_252_int, var_253_float); // 0x386 Func
	goto Label_906; // 0x388 Jump
	
Label_906:
	var_254_bool = var_2_object == 0; // 0x38a Not
	if(var_254_bool == 0) goto Label_878; // 0x38b JumpB
	
Label_905:
	goto Label_908; // 0x389 Jump
}


func_454()
{
	
Label_454:
	var_62_float = 0; var_63_float = 0; // 0x1c6 PushV
	var_62_float = 300; // 0x1c7 MovI
	var_63_float = 100; // 0x1c8 MovI
	func_501(var_57_int, var_58_int, var_59_bool, var_60_bool, var_61_object, var_62_float, var_63_float); // 0x1c9 NEW_2
	var_124_int = 3; // 0x1cb PushI
	Sleep(var_124_int); // 0x1cc Func
	goto Label_454; // 0x1ce Jump
}


func_1093(var_82_string)
{
	RemoveRTEnvelope(); // 0x446 Func
	SetDeathState(); // 0x448 Func
	Stop(); // 0x44a Func
	StopAsync(); // 0x44c Func
	StopSecondaryAnimation(); // 0x44e Func
	var_83_string = ""; // 0x450 PushV
	var_83_string = var_82_string; // 0x451 Mov
	func_1538(var_83_string); // 0x452 NEW_2
	var_112_string = "all"; // 0x454 PushS
	PlayAnimation(var_112_string, var_82_string); // 0x455 Func
	WaitForAnimEnd(); // 0x457 Func
	var_113_string = "all"; // 0x459 PushS
	LockAnimationEnd(var_113_string, var_82_string); // 0x45a Func
	RemoveEnvelope(); // 0x45c Func
	return 0; // 0x45e Return
}


func_712(var_23_bool, var_24_string, var_25_int, var_26_bool)
{
	var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0x2c8 PushV
	GetScene(var_34_object); // 0x2c9 Func
	
Label_715:
	var_41_int = 1; // 0x2cb PushI
	var_42_int = var_25_int + var_41_int; // 0x2cc Add
	var_43_int = var_24_string + var_42_int; // 0x2cd Add
	GetLocator(var_43_int, var_37_bool, var_38_cvector, var_39_cvector); // 0x2ce ObjFunc
	var_44_bool = var_37_bool == 0; // 0x2d0 Not
	if(var_44_bool == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_742; // 0x2d2 Jump
	
Label_742:
	WaitForAnimEnd(var_36_bool); // 0x2e6 Func
	var_45_bool = var_36_bool == 0; // 0x2e8 Not
	if(var_45_bool == 0) goto Label_750; // 0x2e9 JumpB
	var_46_object = var_0_object; // 0x2ea PushT
	if(var_46_object == 0) goto Label_750; // 0x2eb JumpB
	var_23_bool = 0; // 0x2ec MovB
	return 14; // 0x2ed Return
	
Label_750:
	var_47_float = GetByIndex(var_35_cvector, 0); // 0x2ee PushE
	var_48_float = GetByIndex(var_35_cvector, 2); // 0x2ef PushE
	Rotate(var_47_float, var_48_float, var_40_bool); // 0x2f0 Func
	var_49_bool = var_40_bool; // 0x2f2 Push
	if(var_49_bool == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_762; // 0x2f4 Jump
	
Label_762:
	var_23_bool = 1; // 0x2fa MovB
	return 14; // 0x2fb Return
	
Label_757:
	var_50_object = var_0_object; // 0x2f5 PushT
	if(var_50_object == 0) goto Label_761; // 0x2f6 JumpB
	var_23_bool = 0; // 0x2f7 MovB
	return 14; // 0x2f8 Return
	
Label_761:
	goto Label_750; // 0x2f9 Jump
	
Label_723:
	var_35_cvector = var_39_cvector; // 0x2d3 Mov
	MovePoint(var_38_cvector, var_26_bool, var_36_bool); // 0x2d4 Func
	var_51_bool = var_36_bool; // 0x2d6 Push
	if(var_51_bool == 0) goto Label_737; // 0x2d7 JumpB
	var_52_int = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x2d8 PushV
	var_52_int = var_25_int; // 0x2d9 Mov
	var_53_cvector = var_38_cvector; // 0x2da Mov
	var_54_cvector = var_39_cvector; // 0x2db Mov
	func_771(); // 0x2dc NEW_2
	var_55_int = 1; // 0x2de PushI
	var_25_int = var_25_int + var_55_int; // 0x2df Add2
	goto Label_741; // 0x2e0 Jump
	
Label_741:
	goto Label_715; // 0x2e5 Jump
	
Label_737:
	var_56_object = var_0_object; // 0x2e1 PushT
	if(var_56_object == 0) goto Label_741; // 0x2e2 JumpB
	var_23_bool = 0; // 0x2e3 MovB
	return 14; // 0x2e4 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object; // 0x4b TMov
	var_1_object = var_91_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_97_int = 1; // 0x4e PushI
	if(var_97_int == 0) goto Label_112; // 0x4f JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x50 PushV
	var_98_object = var_1_object; // 0x51 MovT
	var_99_object = var_0_object; // 0x52 MovT
	func_1729(); // 0x53 NEW_2
	var_129_string = ""; // 0x55 PushV
	var_129_string = "Neutral"; // 0x56 MovS
	func_142(var_92_object, var_129_string); // 0x57 NEW_2
	var_146_int = 525951; // 0x59 PushI
	SetMessage(var_146_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_147_int = 525952; // 0x5e PushI
	var_148_int = 27237; // 0x5f PushI
	var_149_int = 27236; // 0x60 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x61 TObjFunc
	var_150_int = 542446; // 0x63 PushI
	var_151_int = 27239; // 0x64 PushI
	var_152_int = 44835; // 0x65 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x66 TObjFunc
	var_153_int = 542447; // 0x68 PushI
	var_154_int = 27241; // 0x69 PushI
	var_155_int = 44837; // 0x6a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_156_bool = 0; // 0x70 PushV
	func_1703(var_156_bool); // 0x71 NEW_2
	if(var_156_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_157_string = var_3_string; // 0x76 PushT
	if(var_157_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_158_string = ""; // 0x79 PushV
	var_158_string = var_2_object; // 0x7a MovT
	func_1489(var_158_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_169_string = "all"; // 0x7f PushS
	var_170_string = "idle"; // 0x80 PushS
	PlayAnimation(var_169_string, var_170_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_171_string = var_3_string; // 0x85 PushT
	if(var_171_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_172_string = "all"; // 0x88 PushS
	var_173_string = "idle"; // 0x89 PushS
	PlayAnimation(var_172_string, var_173_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_1739()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x6cb PushV
	var_102_int = 407; // 0x6cc PushI
	var_103_int = 2; // 0x6cd PushI
	var_104_int = 526025; // 0x6ce PushI
	CreateDiaryEntry(var_101_object, var_102_int, var_103_int, var_104_int); // 0x6cf Func
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0; // 0x6d1 PushV
	var_106_object = var_101_object; // 0x6d2 Mov
	var_107_int = 405; // 0x6d3 MovI
	func_1765(var_105_bool, var_106_object, var_107_int); // 0x6d4 NEW_2
	return 2; // 0x6d6 Return
}


func_1613(var_169_float, var_170_cvector, var_171_cvector)
{
	var_172_int = var_170_cvector | var_171_cvector; // 0x64e Or
	var_173_int = var_170_cvector | var_170_cvector; // 0x64f Or
	var_174_int = var_171_cvector | var_171_cvector; // 0x650 Or
	var_175_float = var_173_int * var_174_int; // 0x651 Mult
	var_176_float = sqrt(var_175_float); // 0x652 Sqrt
	var_169_float = var_172_int / var_172_int; // 0x653 Div2
	return 0; // 0x654 Return
}


func_1489(var_158_string)
{
	var_159_bool = 0; var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_float = 0; var_164_float = 0; // 0x5d1 PushV
	lshHasAnimation(var_162_bool, var_158_string); // 0x5d2 Func
	var_165_bool = var_162_bool; // 0x5d4 Push
	if(var_165_bool == 0) goto Label_1500; // 0x5d5 JumpB
	lshGetAnimTimes(var_158_string, var_163_float, var_164_float); // 0x5d6 Func
	var_166_bool = 0; // 0x5d8 PushB
	lshPlayAnimation(var_163_float, var_164_float, var_166_bool); // 0x5d9 Func
	goto Label_1504; // 0x5db Jump
	
Label_1504:
	return 6; // 0x5e0 Return
	
Label_1500:
	var_167_string = "Can't find lsh animation : "; // 0x5dc PushS
	var_168_int = var_167_string + var_158_string; // 0x5dd Add
	Trace(var_168_int); // 0x5de Func
}


func_977(var_0_object, var_158_bool)
{
	var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); // 0x3d1 PushV
	GetDirection(var_161_cvector); // 0x3d2 Func
	var_163_cvector = CVector(0,0,0); var_164_object = Obj(); // 0x3d4 PushV
	var_164_object = var_0_object; // 0x3d5 MovT
	func_1144(var_164_object); // 0x3d6 NEW_2
	var_162_cvector = var_163_cvector; // 0x3d7 Mov
	var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); // 0x3d9 PushV
	var_170_cvector = var_161_cvector; // 0x3da Mov
	var_171_cvector = var_162_cvector; // 0x3db Mov
	func_1613(var_169_float, var_170_cvector, var_171_cvector); // 0x3dc NEW_2
	var_177_float = -0.34202; // 0x3de PushF
	var_158_bool = var_169_float >= var_177_float; // 0x3df GE2
	return 4; // 0x3e0 Return
}


func_1621(var_20_bool, var_21_object, var_22_float)
{
	var_23_bool = var_21_object == 0; // 0x656 Not
	if(var_23_bool == 0) goto Label_1626; // 0x657 JumpB
	var_20_bool = 0; // 0x658 MovB
	return 0; // 0x659 Return
	
Label_1626:
	var_24_int = 0; // 0x65a PushI
	var_25_bool = var_22_float > var_24_int; // 0x65b GT
	if(var_25_bool == 0) goto Label_1633; // 0x65c JumpB
	var_26_int = 8; // 0x65d PushI
	SendWorldWndMessage(var_26_int); // 0x65e Func
	goto Label_1642; // 0x660 Jump
	
Label_1642:
	var_27_float = 0; // 0x66a PushV
	var_27_float = var_22_float; // 0x66b Mov
	func_1673(var_27_float); // 0x66c NEW_2
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; var_34_float = 0; var_35_float = 0; var_36_float = 0; // 0x66e PushV
	var_32_object = var_21_object; // 0x66f Mov
	var_33_string = "reputation"; // 0x670 MovS
	var_34_float = var_22_float; // 0x671 Mov
	var_35_float = 0; // 0x672 MovI
	var_36_float = 1; // 0x673 MovI
	func_1176(var_31_bool, var_32_object, var_33_string, var_34_float, var_35_float, var_36_float); // 0x674 NEW_2
	var_20_bool = 1; // 0x676 MovB
	return 0; // 0x677 Return
	
Label_1633:
	var_55_int = 0; // 0x661 PushI
	var_56_bool = var_22_float < var_55_int; // 0x662 LT
	if(var_56_bool == 0) goto Label_1640; // 0x663 JumpB
	var_57_int = 9; // 0x664 PushI
	SendWorldWndMessage(var_57_int); // 0x665 Func
	goto Label_1642; // 0x667 Jump
	
Label_1640:
	var_20_bool = 0; // 0x668 MovB
	return 0; // 0x669 Return
}


func_1752(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x6d8 PushV
	GetDiaryRoot(var_116_object); // 0x6d9 Func
	var_117_bool = var_116_object == 0; // 0x6db Not
	if(var_117_bool == 0) goto Label_1762; // 0x6dc JumpB
	var_118_string = "Can't retrieve diary root"; // 0x6dd PushS
	Trace(var_118_string); // 0x6de Func
	var_114_object = 0; // 0x6e0 MovB
	return 2; // 0x6e1 Return
	
Label_1762:
	var_114_object = var_116_object; // 0x6e2 Mov
	return 2; // 0x6e3 Return
}


func_1505(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0; // 0x5e1 PushV
	lshHasAnimation(var_140_bool, var_133_string); // 0x5e2 Func
	var_143_bool = var_140_bool; // 0x5e4 Push
	if(var_143_bool == 0) goto Label_1515; // 0x5e5 JumpB
	lshGetAnimTimes(var_133_string, var_141_float, var_142_float); // 0x5e6 Func
	lshPlayAnimation(var_141_float, var_142_float, var_134_bool); // 0x5e8 Func
	goto Label_1519; // 0x5ea Jump
	
Label_1519:
	return 6; // 0x5ef Return
	
Label_1515:
	var_144_string = "Can't find lsh animation : "; // 0x5eb PushS
	var_145_int = var_144_string + var_133_string; // 0x5ec Add
	Trace(var_145_int); // 0x5ed Func
}


func_993(var_59_object)
{
	var_60_object = Obj(); // 0x3e2 PushV
	var_60_object = var_59_object; // 0x3e3 Mov
	func_1002(var_60_object); // 0x3e4 NEW_2
	
Label_998:
	Hold(); // 0x3e6 Func
	goto Label_998; // 0x3e8 Jump
}


func_1125(var_65_string, var_66_int)
{
	var_67_int = 2; // 0x466 PushI
	var_68_bool = var_66_int == var_67_int; // 0x467 Eq
	if(var_68_bool == 0) goto Label_1132; // 0x468 JumpB
	var_65_string = "fire"; // 0x469 MovS
	return 0; // 0x46a Return
	
Label_1132:
	var_69_int = 1; // 0x46c PushI
	var_70_bool = var_66_int == var_69_int; // 0x46d Eq
	if(var_70_bool == 0) goto Label_1137; // 0x46e JumpB
	var_65_string = "bullet"; // 0x46f MovS
	return 0; // 0x470 Return
	
Label_1137:
	var_65_string = "phys"; // 0x471 MovS
	return 0; // 0x472 Return
}


func_1765(var_105_bool, var_106_object, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0; var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0; // 0x6e5 PushV
	var_114_object = Obj(); // 0x6e6 PushV
	func_1752(var_114_object); // 0x6e7 NEW_2
	var_111_object = var_114_object; // 0x6e8 Mov
	Find(var_107_int, var_112_object); // 0x6ea ObjFunc
	var_119_bool = var_112_object == 0; // 0x6ec Not
	if(var_119_bool == 0) goto Label_1780; // 0x6ed JumpB
	var_120_string = "Can't find diary parent with id: "; // 0x6ee PushS
	var_121_int = var_120_string + var_107_int; // 0x6ef Add
	Trace(var_121_int); // 0x6f0 Func
	var_105_bool = 0; // 0x6f2 MovB
	return 6; // 0x6f3 Return
	
Label_1780:
	AddChild(var_106_object); // 0x6f4 ObjFunc
	var_122_int = 7; // 0x6f6 PushI
	SendWorldWndMessage(var_122_int); // 0x6f7 Func
	GetCategory(var_113_int); // 0x6f9 ObjFunc
	SetDiarySection(var_113_int); // 0x6fb Func
	var_105_bool = 0; // 0x6fd MovB
	return 6; // 0x6fe Return
}


func_1383(var_21_object, var_24_cvector, var_25_cvector)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x567 PushV
	GetScene(var_28_object); // 0x568 Func
	var_30_string = "scripted"; // 0x56a PushS
	var_31_string = "blood_dir.xml"; // 0x56b PushS
	AddActorByType(var_29_object, var_30_string, var_28_object, var_24_cvector, var_25_cvector, var_31_string); // 0x56c Func
	var_32_object = Obj(); // 0x56e PushV
	var_32_object = var_21_object; // 0x56f Mov
	func_1271(var_32_object); // 0x570 NEW_2
	return 4; // 0x572 Return
}


func_1002(var_60_object)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_string = ""; var_76_object = Obj(); var_77_bool = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x3ea PushV
	var_81_bool = var_60_object == 0; // 0x3eb NullEq
	if(var_81_bool == 0) goto Label_1010; // 0x3ec JumpB
	var_82_string = ""; // 0x3ed PushV
	var_82_string = "fdie"; // 0x3ee MovS
	func_1093(var_82_string); // 0x3ef NEW_2
	goto Label_1092; // 0x3f1 Jump
	
Label_1092:
	return 20; // 0x444 Return
	
Label_1010:
	GetPosition(var_71_cvector); // 0x3f2 ObjFunc
	GetPosition(var_72_cvector); // 0x3f4 Func
	GetDirection(var_73_cvector); // 0x3f6 Func
	var_74_cvector = var_72_cvector - var_71_cvector; // 0x3f8 Sub2
	var_114_float = GetByIndex(var_74_cvector, 0); // 0x3f9 PushE
	var_115_float = GetByIndex(var_73_cvector, 0); // 0x3fa PushE
	var_116_float = var_114_float * var_115_float; // 0x3fb Mult
	var_117_float = GetByIndex(var_74_cvector, 2); // 0x3fc PushE
	var_118_float = GetByIndex(var_73_cvector, 2); // 0x3fd PushE
	var_119_float = var_117_float * var_118_float; // 0x3fe Mult
	var_120_int = var_116_float + var_119_float; // 0x3ff Add
	var_121_int = 0; // 0x400 PushI
	var_122_bool = var_120_int >= var_121_int; // 0x401 GE
	if(var_122_bool == 0) goto Label_1029; // 0x402 JumpB
	var_75_string = "fdie"; // 0x403 MovS
	goto Label_1030; // 0x404 Jump
	
Label_1030:
	RemoveRTEnvelope(); // 0x406 Func
	SetDeathState(); // 0x408 Func
	Stop(); // 0x40a Func
	StopAsync(); // 0x40c Func
	var_76_object = var_60_object; // 0x40e Mov
	var_123_string = "GetScriptProperty"; // 0x40f PushS
	var_124_int = 2; // 0x410 PushI
	var_125_bool = IsFuncExist(var_60_object, var_123_string, var_124_int); // 0x411 FuncExist
	if(var_125_bool == 0) goto Label_1054; // 0x412 JumpB
	var_126_string = "Owner"; // 0x413 PushS
	HasScriptProperty(var_77_bool, var_126_string); // 0x414 ObjFunc
	var_127_bool = var_77_bool; // 0x416 Push
	if(var_127_bool == 0) goto Label_1054; // 0x417 JumpB
	var_128_string = "Owner"; // 0x418 PushS
	GetScriptProperty(var_76_object, var_128_string); // 0x419 ObjFunc
	var_129_bool = var_76_object == 0; // 0x41b NullEq
	if(var_129_bool == 0) goto Label_1054; // 0x41c JumpB
	var_76_object = var_60_object; // 0x41d Mov
	
Label_1054:
	var_130_string = "@GetEyesHeight"; // 0x41e PushS
	var_131_int = 1; // 0x41f PushI
	var_132_bool = IsFuncExist(var_76_object, var_130_string, var_131_int); // 0x420 FuncExist
	if(var_132_bool == 0) goto Label_1069; // 0x421 JumpB
	GetEyesHeight(var_79_float); // 0x422 ObjFunc
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x424 MovV
	var_133_float = GetByIndex(var_80_cvector, 1); // 0x425 PushE
	var_133_float = var_79_float; // 0x426 Mov
	SetByIndex(var_80_cvector, 1) = var_133_float; // 0x427 PopE
	var_134_string = "head"; // 0x428 PushS
	LookAsync(var_60_object, var_134_string, var_80_cvector); // 0x429 Func
	var_78_bool = 1; // 0x42b MovB
	goto Label_1070; // 0x42c Jump
	
Label_1070:
	var_135_string = ""; // 0x42e PushV
	var_135_string = var_75_string; // 0x42f Mov
	func_1538(var_135_string); // 0x430 NEW_2
	var_136_string = "all"; // 0x432 PushS
	PlayAnimation(var_136_string, var_75_string); // 0x433 Func
	WaitForAnimEnd(); // 0x435 Func
	var_137_bool = var_78_bool; // 0x437 Push
	if(var_137_bool == 0) goto Label_1086; // 0x438 JumpB
	StopAsync(); // 0x439 Func
	var_138_string = "head"; // 0x43b PushS
	UnlookAsync(var_138_string); // 0x43c Func
	
Label_1086:
	var_139_string = "all"; // 0x43e PushS
	LockAnimationEnd(var_139_string, var_75_string); // 0x43f Func
	RemoveEnvelope(); // 0x441 Func
	var_76_object = 0; // 0x443 SetNull
	
Label_1069:
	var_78_bool = 0; // 0x42d MovB
	
Label_1029:
	var_75_string = "bdie"; // 0x405 MovS
}


func_1520(var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_cvector = CVector(0,0,0); // 0x5f0 PushV
	GetEyesHeight(var_35_float); // 0x5f1 ObjFunc
	var_36_cvector = CVector(0.0, 0.0, 0.0); // 0x5f3 MovV
	var_37_float = GetByIndex(var_36_cvector, 1); // 0x5f4 PushE
	var_37_float = var_35_float; // 0x5f5 Mov
	SetByIndex(var_36_cvector, 1) = var_37_float; // 0x5f6 PopE
	var_38_string = "head"; // 0x5f7 PushS
	LookAsync(var_32_object, var_38_string, var_36_cvector); // 0x5f8 Func
	return 4; // 0x5fa Return
}


func_1139(var_178_cvector)
{
	var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); // 0x473 PushV
	GetPosition(var_180_cvector); // 0x474 Func
	var_178_cvector = var_180_cvector; // 0x476 Mov
	return 2; // 0x477 Return
}


func_501(var_0_object, var_1_object, var_2_object, var_3_string, var_61_object, var_62_float, var_63_float)
{
	var_64_bool = 0; // 0x1f6 PushV
	func_1397(var_64_bool); // 0x1f7 NEW_2
	var_67_bool = var_64_bool == 0; // 0x1f9 Not
	if(var_67_bool == 0) goto Label_508; // 0x1fa JumpB
	return 0; // 0x1fb Return
	
Label_508:
	var_68_string = "player"; // 0x1fc PushS
	FindActor(var_61_object, var_68_string); // 0x1fd Func
	var_2_object = 0; // 0x1ff TMovB
	var_3_string = 0; // 0x200 TMovB
	var_0_object = var_62_float; // 0x201 TMov
	var_1_object = var_63_float; // 0x202 TMov
	var_69_int = 10; // 0x203 PushI
	var_70_float = 1.0; // 0x204 PushF
	SetTimer(var_69_int, var_70_float); // 0x205 Func
	func_580(); // 0x208 NEW_2
	var_122_bool = var_3_string == 0; // 0x20a Not
	if(var_122_bool == 0) goto Label_527; // 0x20b JumpB
	var_123_int = 10; // 0x20c PushI
	KillTimer(var_123_int); // 0x20d Func
	
Label_527:
	return 0; // 0x20f Return
}


func_1397(var_64_bool)
{
	var_65_bool = 0; var_66_bool = 0; // 0x575 PushV
	IsLoaded(var_66_bool); // 0x576 Func
	var_64_bool = var_66_bool; // 0x578 Mov
	return 2; // 0x579 Return
}


func_1271(var_32_object)
{
	var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_bool = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_string = ""; // 0x4f7 PushV
	var_47_bool = var_32_object == 0; // 0x4f8 NullEq
	if(var_47_bool == 0) goto Label_1275; // 0x4f9 JumpB
	return 14; // 0x4fa Return
	
Label_1275:
	IsDead(var_40_bool); // 0x4fb Func
	var_48_bool = var_40_bool; // 0x4fd Push
	if(var_48_bool == 0) goto Label_1280; // 0x4fe JumpB
	return 14; // 0x4ff Return
	
Label_1280:
	GetSecondaryAnimationType(var_41_int); // 0x500 Func
	var_49_int = 0; // 0x502 PushI
	var_50_bool = var_41_int < var_49_int; // 0x503 LT
	if(var_50_bool == 0) goto Label_1286; // 0x504 JumpB
	return 14; // 0x505 Return
	
Label_1286:
	GetPosition(var_42_cvector); // 0x506 ObjFunc
	GetPosition(var_43_cvector); // 0x508 Func
	GetDirection(var_44_cvector); // 0x50a Func
	var_45_cvector = var_43_cvector - var_42_cvector; // 0x50c Sub2
	var_51_float = GetByIndex(var_45_cvector, 0); // 0x50d PushE
	var_52_float = GetByIndex(var_44_cvector, 0); // 0x50e PushE
	var_53_float = var_51_float * var_52_float; // 0x50f Mult
	var_54_float = GetByIndex(var_45_cvector, 2); // 0x510 PushE
	var_55_float = GetByIndex(var_44_cvector, 2); // 0x511 PushE
	var_56_float = var_54_float * var_55_float; // 0x512 Mult
	var_57_int = var_53_float + var_56_float; // 0x513 Add
	var_58_int = 0; // 0x514 PushI
	var_59_bool = var_57_int >= var_58_int; // 0x515 GE
	if(var_59_bool == 0) goto Label_1305; // 0x516 JumpB
	var_46_string = "fhit"; // 0x517 MovS
	goto Label_1306; // 0x518 Jump
	
Label_1306:
	var_60_string = "hit_react"; // 0x51a PushS
	var_61_string = "1"; // 0x51b PushS
	var_62_int = var_46_string + var_61_string; // 0x51c Add
	var_63_string = "2"; // 0x51d PushS
	var_64_int = var_46_string + var_63_string; // 0x51e Add
	var_65_int = -10; // 0x51f PushI
	FadeSecondaryAnimation(var_60_string, var_62_int, var_64_int, var_65_int); // 0x520 Func
	return 14; // 0x522 Return
	
Label_1305:
	var_46_string = "bhit"; // 0x519 MovS
}


func_1656(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x678 PushV
	CreateFloatVector(var_97_object); // 0x679 Func
	add(var_95_float); // 0x67b ObjFunc
	var_98_int = 0; // 0x67d PushI
	var_99_bool = var_95_float < var_98_int; // 0x67e LT
	if(var_99_bool == 0) goto Label_1668; // 0x67f JumpB
	var_100_float = 0.7; // 0x680 PushF
	var_101_int = 500; // 0x681 PushI
	RumblePlay(var_100_float, var_101_int); // 0x682 Func
	
Label_1668:
	var_102_int = 15; // 0x684 PushI
	SendWorldWndMessage(var_102_int, var_97_object); // 0x685 Func
	return 2; // 0x687 Return
}


func_1402(var_30_bool, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; // 0x57a PushV
	GetPosition(var_43_cvector); // 0x57b ObjFunc
	GetEyesHeight(var_42_float); // 0x57d ObjFunc
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x57f PushE
	var_51_float = var_51_float + var_42_float; // 0x580 Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x581 PopE
	GetPosition(var_44_cvector); // 0x582 Func
	GetEyesHeight(var_42_float); // 0x584 Func
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x586 PushE
	var_52_float = var_52_float + var_42_float; // 0x587 Add2
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x588 PopE
	var_45_cvector = var_43_cvector - var_44_cvector; // 0x589 Sub2
	var_53_float = GetByIndex(var_45_cvector, 1); // 0x58a PushE
	var_53_float = 0; // 0x58b MovI
	SetByIndex(var_45_cvector, 1) = var_53_float; // 0x58c PopE
	var_54_int = var_45_cvector | var_45_cvector; // 0x58d Or
	var_55_float = sqrt(var_54_int); // 0x58e Sqrt
	var_45_cvector = var_45_cvector / var_45_cvector; // 0x58f Div2
	var_46_cvector = -var_45_cvector; // 0x590 Neg2
	var_56_float = var_45_cvector * var_32_float; // 0x591 Mult
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x592 PushV
	var_59_cvector = CVector(0.0, 1.0, 0.0); // 0x593 PushVec
	var_58_cvector = var_46_cvector ^ var_59_cvector; // 0x594 Xor2
	func_1585(var_57_cvector, var_58_cvector); // 0x595 NEW_2
	var_65_int = 25; // 0x597 PushI
	var_66_float = var_57_cvector * var_65_int; // 0x598 Mult
	var_67_int = var_56_float + var_66_float; // 0x599 Add
	var_68_cvector = CVector(0.0, 10.0, 0.0); // 0x59a PushVec
	var_47_cvector = var_67_int - var_68_cvector; // 0x59b Sub2
	var_48_cvector = var_44_cvector + var_47_cvector; // 0x59c Add2
	IsOverrideActive(var_49_bool); // 0x59d Func
	var_69_bool = var_49_bool; // 0x59f Push
	if(var_69_bool == 0) goto Label_1443; // 0x5a0 JumpB
	var_30_bool = 0; // 0x5a1 MovB
	return 18; // 0x5a2 Return
	
Label_1443:
	StopWorld(); // 0x5a3 Func
	var_70_bool = 1; // 0x5a5 PushB
	CameraTransit(var_48_cvector, var_46_cvector, var_70_bool); // 0x5a6 Func
	var_71_float = GetByIndex(var_47_cvector, 0); // 0x5a8 PushE
	var_72_float = GetByIndex(var_47_cvector, 2); // 0x5a9 PushE
	Rotate(var_71_float, var_72_float); // 0x5aa Func
	var_73_bool = 0; // 0x5ac PushV
	func_1703(var_73_bool); // 0x5ad NEW_2
	if(var_73_bool == 0) goto Label_1457; // 0x5af JumpB
	goto Label_1465; // 0x5b0 Jump
	
Label_1465:
	CameraWaitForPlayFinish(); // 0x5b9 Func
	ResumeWorld(); // 0x5bb Func
	var_30_bool = 1; // 0x5bd MovB
	return 18; // 0x5be Return
	
Label_1457:
	var_74_string = "head"; // 0x5b1 PushS
	HasAnimationTrack(var_50_bool, var_74_string); // 0x5b2 Func
	var_75_bool = var_50_bool; // 0x5b4 Push
	if(var_75_bool == 0) goto Label_1465; // 0x5b5 JumpB
	var_76_string = "head"; // 0x5b6 PushS
	LookAsyncCamera(var_76_string); // 0x5b7 Func
}


func_1531()
{
	var_18_bool = 0; // 0x5fb PushV
	func_1703(var_18_bool); // 0x5fc NEW_2
	if(var_18_bool == 0) goto Label_1537; // 0x5fe JumpB
	lshStopSpeech(); // 0x5ff Func
	
Label_1537:
	return 0; // 0x601 Return
}


func_1144(var_49_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); // 0x478 PushV
	GetPosition(var_53_cvector); // 0x479 Func
	GetPosition(var_54_cvector); // 0x47b ObjFunc
	var_49_cvector = var_54_cvector - var_53_cvector; // 0x47d Sub2
	return 4; // 0x47e Return
}


func_765(var_0_object)
{
	Stop(); // 0x2fd Func
	StopAnimation(); // 0x2ff Func
	var_0_object = 1; // 0x301 TMovB
	return 0; // 0x302 Return
}


func_1151(var_24_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x47f PushV
	GetPosition(var_29_cvector); // 0x480 Func
	GetPosition(var_30_cvector); // 0x482 ObjFunc
	var_31_cvector = var_30_cvector - var_29_cvector; // 0x484 Sub2
	var_24_float = var_31_cvector | var_31_cvector; // 0x485 Or2
	return 6; // 0x486 Return
}


