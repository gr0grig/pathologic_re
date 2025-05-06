task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 1; // 0x9b PushI
	if(var_12_int == 0) goto Label_421; // 0x9c JumpB
	func_1319(); // 0x9e NEW_2
	var_14_int = 12062; // 0xa0 PushI
	var_15_bool = var_11_bool == var_14_int; // 0xa1 Eq
	if(var_15_bool == 0) goto Label_178; // 0xa2 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0xa3 PushV
	var_16_object = var_1_object; // 0xa4 MovT
	var_17_object = var_0_object; // 0xa5 MovT
	func_1471(); // 0xa6 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0xa8 PushV
	var_50_object = var_1_object; // 0xa9 MovT
	var_51_object = var_0_object; // 0xaa MovT
	func_1490(var_51_object); // 0xab NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0xad PushV
	var_74_object = var_1_object; // 0xae MovT
	var_75_object = var_0_object; // 0xaf MovT
	func_1465(); // 0xb0 NEW_2
	
Label_178:
	var_78_int = 35869; // 0xb2 PushI
	var_79_bool = var_11_bool == var_78_int; // 0xb3 Eq
	if(var_79_bool == 0) goto Label_186; // 0xb4 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xb5 PushV
	var_80_object = var_1_object; // 0xb6 MovT
	var_81_object = var_0_object; // 0xb7 MovT
	func_1501(); // 0xb8 NEW_2
	
Label_186:
	var_96_int = 35746; // 0xba PushI
	var_97_bool = var_11_bool == var_96_int; // 0xbb Eq
	if(var_97_bool == 0) goto Label_194; // 0xbc JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xbd PushV
	var_98_object = var_1_object; // 0xbe MovT
	var_99_object = var_0_object; // 0xbf MovT
	func_1501(); // 0xc0 NEW_2
	
Label_194:
	var_100_int = 12052; // 0xc2 PushI
	var_101_bool = var_10_cvector == var_100_int; // 0xc3 Eq
	if(var_101_bool == 0) goto Label_217; // 0xc4 JumpB
	var_102_string = ""; // 0xc5 PushV
	var_102_string = "Neutral"; // 0xc6 MovS
	func_132(var_11_bool, var_102_string); // 0xc7 NEW_2
	var_119_int = 510904; // 0xc9 PushI
	SetMessage(var_119_int); // 0xca TObjFunc
	ClearReplies(); // 0xcc TObjFunc
	var_120_int = 510905; // 0xce PushI
	var_121_int = 35745; // 0xcf PushI
	var_122_int = 12053; // 0xd0 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xd1 TObjFunc
	var_123_int = 534166; // 0xd3 PushI
	var_124_int = -1; // 0xd4 PushI
	var_125_int = 35746; // 0xd5 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xd6 TObjFunc
	return 0; // 0xd8 Return
	
Label_217:
	var_126_int = 35745; // 0xd9 PushI
	var_127_bool = var_10_cvector == var_126_int; // 0xda Eq
	if(var_127_bool == 0) goto Label_240; // 0xdb JumpB
	var_128_string = ""; // 0xdc PushV
	var_128_string = "Neutral"; // 0xdd MovS
	func_132(var_11_bool, var_128_string); // 0xde NEW_2
	var_129_int = 534165; // 0xe0 PushI
	SetMessage(var_129_int); // 0xe1 TObjFunc
	ClearReplies(); // 0xe3 TObjFunc
	var_130_int = 534167; // 0xe5 PushI
	var_131_int = 12054; // 0xe6 PushI
	var_132_int = 35747; // 0xe7 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xe8 TObjFunc
	var_133_int = 534169; // 0xea PushI
	var_134_int = 35750; // 0xeb PushI
	var_135_int = 35749; // 0xec PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xed TObjFunc
	return 0; // 0xef Return
	
Label_240:
	var_136_int = 35750; // 0xf0 PushI
	var_137_bool = var_10_cvector == var_136_int; // 0xf1 Eq
	if(var_137_bool == 0) goto Label_258; // 0xf2 JumpB
	var_138_string = ""; // 0xf3 PushV
	var_138_string = "Neutral"; // 0xf4 MovS
	func_132(var_11_bool, var_138_string); // 0xf5 NEW_2
	var_139_int = 534170; // 0xf7 PushI
	SetMessage(var_139_int); // 0xf8 TObjFunc
	ClearReplies(); // 0xfa TObjFunc
	var_140_int = 534272; // 0xfc PushI
	var_141_int = 35857; // 0xfd PushI
	var_142_int = 35861; // 0xfe PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_143_int = 12054; // 0x102 PushI
	var_144_bool = var_10_cvector == var_143_int; // 0x103 Eq
	if(var_144_bool == 0) goto Label_276; // 0x104 JumpB
	var_145_string = ""; // 0x105 PushV
	var_145_string = "Neutral"; // 0x106 MovS
	func_132(var_11_bool, var_145_string); // 0x107 NEW_2
	var_146_int = 510906; // 0x109 PushI
	SetMessage(var_146_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_147_int = 510907; // 0x10e PushI
	var_148_int = 12056; // 0x10f PushI
	var_149_int = 12055; // 0x110 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_150_int = 12056; // 0x114 PushI
	var_151_bool = var_10_cvector == var_150_int; // 0x115 Eq
	if(var_151_bool == 0) goto Label_299; // 0x116 JumpB
	var_152_string = ""; // 0x117 PushV
	var_152_string = "Neutral"; // 0x118 MovS
	func_132(var_11_bool, var_152_string); // 0x119 NEW_2
	var_153_int = 510908; // 0x11b PushI
	SetMessage(var_153_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_154_int = 510909; // 0x120 PushI
	var_155_int = 12058; // 0x121 PushI
	var_156_int = 12057; // 0x122 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x123 TObjFunc
	var_157_int = 534168; // 0x125 PushI
	var_158_int = 35857; // 0x126 PushI
	var_159_int = 35748; // 0x127 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_160_int = 12058; // 0x12b PushI
	var_161_bool = var_10_cvector == var_160_int; // 0x12c Eq
	if(var_161_bool == 0) goto Label_322; // 0x12d JumpB
	var_162_string = ""; // 0x12e PushV
	var_162_string = "Neutral"; // 0x12f MovS
	func_132(var_11_bool, var_162_string); // 0x130 NEW_2
	var_163_int = 510910; // 0x132 PushI
	SetMessage(var_163_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_164_int = 534268; // 0x137 PushI
	var_165_int = 35857; // 0x138 PushI
	var_166_int = 35856; // 0x139 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x13a TObjFunc
	var_167_int = 534270; // 0x13c PushI
	var_168_int = 35860; // 0x13d PushI
	var_169_int = 35859; // 0x13e PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_170_int = 35860; // 0x142 PushI
	var_171_bool = var_10_cvector == var_170_int; // 0x143 Eq
	if(var_171_bool == 0) goto Label_340; // 0x144 JumpB
	var_172_string = ""; // 0x145 PushV
	var_172_string = "Neutral"; // 0x146 MovS
	func_132(var_11_bool, var_172_string); // 0x147 NEW_2
	var_173_int = 534271; // 0x149 PushI
	SetMessage(var_173_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_174_int = 534276; // 0x14e PushI
	var_175_int = 12061; // 0x14f PushI
	var_176_int = 35865; // 0x150 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_177_int = 35857; // 0x154 PushI
	var_178_bool = var_10_cvector == var_177_int; // 0x155 Eq
	if(var_178_bool == 0) goto Label_363; // 0x156 JumpB
	var_179_string = ""; // 0x157 PushV
	var_179_string = "Neutral"; // 0x158 MovS
	func_132(var_11_bool, var_179_string); // 0x159 NEW_2
	var_180_int = 534269; // 0x15b PushI
	SetMessage(var_180_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_181_int = 510911; // 0x160 PushI
	var_182_int = 12061; // 0x161 PushI
	var_183_int = 12059; // 0x162 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x163 TObjFunc
	var_184_int = 510912; // 0x165 PushI
	var_185_int = 12061; // 0x166 PushI
	var_186_int = 12060; // 0x167 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_187_int = 12061; // 0x16b PushI
	var_188_bool = var_10_cvector == var_187_int; // 0x16c Eq
	if(var_188_bool == 0) goto Label_386; // 0x16d JumpB
	var_189_string = ""; // 0x16e PushV
	var_189_string = "Neutral"; // 0x16f MovS
	func_132(var_11_bool, var_189_string); // 0x170 NEW_2
	var_190_int = 510913; // 0x172 PushI
	SetMessage(var_190_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_191_int = 534273; // 0x177 PushI
	var_192_int = 35864; // 0x178 PushI
	var_193_int = 35862; // 0x179 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x17a TObjFunc
	var_194_int = 534274; // 0x17c PushI
	var_195_int = 35864; // 0x17d PushI
	var_196_int = 35863; // 0x17e PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_197_int = 35864; // 0x182 PushI
	var_198_bool = var_10_cvector == var_197_int; // 0x183 Eq
	if(var_198_bool == 0) goto Label_409; // 0x184 JumpB
	var_199_string = ""; // 0x185 PushV
	var_199_string = "Neutral"; // 0x186 MovS
	func_132(var_11_bool, var_199_string); // 0x187 NEW_2
	var_200_int = 534275; // 0x189 PushI
	SetMessage(var_200_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_201_int = 510914; // 0x18e PushI
	var_202_int = -1; // 0x18f PushI
	var_203_int = 12062; // 0x190 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x191 TObjFunc
	var_204_int = 534277; // 0x193 PushI
	var_205_int = -1; // 0x194 PushI
	var_206_int = 35869; // 0x195 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_3_string = 1; // 0x199 TMovB
	var_207_bool = 0; // 0x19a PushV
	func_1603(var_207_bool); // 0x19b NEW_2
	if(var_207_bool == 0) goto Label_417; // 0x19d JumpB
	lshStopAnimation(); // 0x19e Func
	goto Label_419; // 0x1a0 Jump
	
Label_419:
	return 0; // 0x1a3 Return
	
Label_417:
	StopAnimation(); // 0x1a1 Func
	
Label_421:
	return 0; // 0x1a5 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_object = Obj(); // 0x1ab PushV
	var_12_object = var_10_bool; // 0x1ac Mov
	TaskCall(0); // 0x1ad TaskCall
	func_0(var_13_object, var_11_int, var_12_object); // 0x1ae NEW_2
	TaskReturn(); // 0x1af TaskReturn
	TaskCall(3); // 0x1b2 TaskCall
	func_439(); // 0x1b3 NEW_2
	TaskReturn(); // 0x1b4 TaskReturn
	return 0; // 0x1b6 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x1c8 PushV
	var_12_object = var_10_bool; // 0x1c9 Mov
	func_1650(var_11_bool, var_12_object); // 0x1ca NEW_2
	if(var_11_bool == 0) goto Label_468; // 0x1cc JumpB
	func_540(var_9_cvector, var_10_bool); // 0x1ce NEW_2
	var_47_object = Obj(); // 0x1d0 PushV
	var_47_object = var_10_bool; // 0x1d1 Mov
	func_1657(var_47_object); // 0x1d2 NEW_2
	
Label_468:
	return 0; // 0x1d4 Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool); // 0x216 Func
	return 0; // 0x218 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop(); // 0x219 Func
	return 0; // 0x21b Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_540(var_9_cvector, var_10_bool); // 0x225 NEW_2
	var_11_object = Obj(); // 0x227 PushV
	var_11_object = var_10_bool; // 0x228 Mov
	func_1644(); // 0x229 NEW_2
	return 0; // 0x22b Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x233 PushV
	var_12_object = var_10_bool; // 0x234 Mov
	func_1650(var_11_bool, var_12_object); // 0x235 NEW_2
	if(var_11_bool == 0) goto Label_575; // 0x237 JumpB
	func_657(); // 0x239 NEW_2
	var_47_object = Obj(); // 0x23b PushV
	var_47_object = var_10_bool; // 0x23c Mov
	func_1657(var_47_object); // 0x23d NEW_2
	
Label_575:
	return 0; // 0x23f Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; // 0x2fd PushV
	var_19_int = 120; // 0x2fe PushI
	var_20_bool = var_10_int != var_19_int; // 0x2ff Neq
	if(var_20_bool == 0) goto Label_770; // 0x300 JumpB
	return 8; // 0x301 Return
	
Label_770:
	var_21_bool = var_0_object == 0; // 0x302 NullEq
	if(var_21_bool == 0) goto Label_779; // 0x303 JumpB
	Stop(); // 0x304 Func
	var_22_int = 1; // 0x306 PushI
	KillTimer(var_22_int); // 0x307 Func
	var_2_object = 1; // 0x309 TMovB
	goto Label_816; // 0x30a Jump
	
Label_816:
	return 8; // 0x330 Return
	
Label_779:
	GetDirection(var_15_cvector); // 0x30b Func
	var_23_float = 7000.0; // 0x30d PushF
	FindDirLength(var_16_float, var_15_cvector, var_23_float); // 0x30e Func
	var_24_cvector = CVector(0,0,0); var_25_float = 0; // 0x310 PushV
	var_25_float = 1.74533; // 0x311 MovF
	func_662(var_24_cvector, var_25_float); // 0x312 NEW_2
	var_17_cvector = var_24_cvector; // 0x313 Mov
	var_18_float = var_17_cvector | var_17_cvector; // 0x315 Or2
	var_54_bool = 0; // 0x316 PushV
	var_54_bool = 0; // 0x317 MovB
	var_55_float = 2500.0; // 0x318 PushF
	var_56_bool = var_18_float >= var_55_float; // 0x319 GE
	if(var_56_bool == 0) goto Label_809; // 0x31a JumpB
	var_57_bool = 0; // 0x31b PushV
	var_57_bool = 1; // 0x31c MovB
	var_58_float = var_16_float * var_16_float; // 0x31d Mult
	var_59_float = 2.25; // 0x31e PushF
	var_60_float = var_58_float * var_59_float; // 0x31f Mult
	var_61_bool = var_18_float >= var_60_float; // 0x320 GE
	if(var_61_bool == 0) goto Label_807; // 0x321 JumpB
	var_62_bool = 0; // 0x322 PushV
	func_833(var_57_bool, var_62_bool); // 0x323 NEW_2
	if(var_62_bool == 0) goto Label_807; // 0x325 JumpB
	var_57_bool = 0; // 0x326 MovB
	
Label_807:
	if(var_57_bool == 0) goto Label_809; // 0x327 JumpB
	var_54_bool = 1; // 0x328 MovB
	
Label_809:
	if(var_54_bool == 0) goto Label_816; // 0x329 JumpB
	Stop(); // 0x32a Func
	var_82_cvector = CVector(0,0,0); // 0x32c PushV
	func_981(var_82_cvector); // 0x32d NEW_2
	var_1_object = var_82_cvector + var_17_cvector; // 0x32f Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_817(var_10_object); // 0x33a NEW_2
	var_12_object = Obj(); // 0x33c PushV
	var_12_object = var_10_object; // 0x33d Mov
	func_1644(); // 0x33e NEW_2
	return 0; // 0x340 Return
}


task_6_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x3d0 Return
}


task_6_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	return 0; // 0x3d2 Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	return 0; // 0x3d4 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x64e PushV
	var_14_object = var_10_object; // 0x64f Mov
	var_15_int = var_11_int; // 0x650 Mov
	var_16_float = var_12_float; // 0x651 Mov
	func_1114(var_14_object, var_15_int, var_16_float); // 0x652 NEW_2
	return 0; // 0x654 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x656 PushV
	var_16_object = var_10_object; // 0x657 Mov
	var_17_int = var_11_int; // 0x658 Mov
	var_18_float = var_12_float; // 0x659 Mov
	var_19_cvector = var_14_cvector; // 0x65a Mov
	var_20_cvector = var_15_cvector; // 0x65b Mov
	func_1182(var_18_float, var_19_cvector, var_20_cvector); // 0x65c NEW_2
	return 0; // 0x65e Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x65f PushV
	var_14_string = "health"; // 0x660 PushS
	var_15_bool = var_11_string == var_14_string; // 0x661 Eq
	if(var_15_bool == 0) goto Label_1643; // 0x662 JumpB
	var_16_string = "health"; // 0x663 PushS
	GetProperty(var_16_string, var_13_float); // 0x664 Func
	var_17_int = 0; // 0x666 PushI
	var_18_bool = var_13_float <= var_17_int; // 0x667 LE
	if(var_18_bool == 0) goto Label_1643; // 0x668 JumpB
	SignalDeath(var_10_object); // 0x669 Func
	
Label_1643:
	return 2; // 0x66b Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj(); // 0x66d PushV
	var_11_object = var_10_object; // 0x66e Mov
	func_1605(var_11_object); // 0x66f NEW_2
	return 0; // 0x671 Return
}


event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x681 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x682 Func
	var_13_bool = var_12_bool; // 0x684 Push
	if(var_13_bool == 0) goto Label_1675; // 0x685 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x686 PushV
	var_15_string = "quest_d3_03"; // 0x687 MovS
	var_16_string = "boy_attacked"; // 0x688 MovS
	func_1429(var_14_bool, var_15_string, var_16_string); // 0x689 NEW_2
	
Label_1675:
	return 2; // 0x68b Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	
Label_422:
	Hold(); // 0x1a6 Func
	goto Label_422; // 0x1a8 Jump
}


func_0(var_0_object, var_11_int, var_12_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; // 0x0 PushV
	var_0_object = var_12_object; // 0x1 TMov
	var_22_bool = 0; var_23_object = Obj(); var_24_float = 0; // 0x2 PushV
	var_23_object = var_12_object; // 0x3 Mov
	var_24_float = 70.0; // 0x4 MovF
	func_1201(var_23_object, var_24_float); // 0x5 NEW_2
	var_69_bool = var_22_bool == 0; // 0x7 Not
	if(var_69_bool == 0) goto Label_11; // 0x8 JumpB
	var_11_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_18_object); // 0xb Func
	var_70_int = 0; // 0xd PushV
	func_1597(var_70_int); // 0xe NEW_2
	SetNPCName(var_70_int); // 0x10 ObjFunc
	var_71_int = 0; // 0x12 PushV
	func_1595(var_71_int); // 0x13 NEW_2
	SetNPCDescription(var_71_int); // 0x15 ObjFunc
	var_72_string = ""; // 0x17 PushV
	func_1599(var_72_string); // 0x18 NEW_2
	SetPhoto(var_72_string); // 0x1a ObjFunc
	var_73_string = ""; // 0x1c PushV
	func_1601(var_73_string); // 0x1d NEW_2
	SetPhoto2(var_73_string); // 0x1f ObjFunc
	var_74_int = 0; // 0x21 PushV
	func_1578(var_74_int); // 0x22 NEW_2
	SetPlayerName(var_74_int); // 0x24 ObjFunc
	var_20_int = -1; // 0x26 MovI
	IsOverrideActive(var_19_bool); // 0x27 Func
	var_82_bool = var_19_bool; // 0x29 Push
	if(var_82_bool == 0) goto Label_45; // 0x2a JumpB
	var_11_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_18_object); // 0x2d Func
	var_83_object = Obj(); var_84_object = Obj(); // 0x2f PushV
	var_83_object = var_12_object; // 0x30 Mov
	var_84_object = var_18_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_21_bool); // 0x36 ObjFunc
	
Label_56:
	var_132_bool = var_21_bool == 0; // 0x38 Not
	if(var_132_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_21_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_133_object = Obj(); // 0x3f PushV
	var_133_object = var_12_object; // 0x40 Mov
	func_1270(); // 0x41 NEW_2
	StopDialog(var_18_object); // 0x43 Func
	GetReturnValue(var_20_int); // 0x45 ObjFunc
	var_11_int = var_20_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1537(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x601 PushV
	GetDiaryRoot(var_38_object); // 0x602 Func
	var_39_bool = var_38_object == 0; // 0x604 Not
	if(var_39_bool == 0) goto Label_1547; // 0x605 JumpB
	var_40_string = "Can't retrieve diary root"; // 0x606 PushS
	Trace(var_40_string); // 0x607 Func
	var_36_object = 0; // 0x609 MovB
	return 2; // 0x60a Return
	
Label_1547:
	var_36_object = var_38_object; // 0x60b Mov
	return 2; // 0x60c Return
}


func_132(var_2_object, var_90_string)
{
	var_91_bool = 0; // 0x85 PushV
	func_1603(var_91_bool); // 0x86 NEW_2
	var_92_bool = var_91_bool == 0; // 0x88 Not
	if(var_92_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_93_bool = var_90_string == var_2_object; // 0x8b Eq
	if(var_93_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_94_string = ""; var_95_bool = 0; // 0x8e PushV
	var_94_string = var_90_string; // 0x8f Mov
	var_96_string = ""; // 0x90 PushS
	var_97_bool = var_90_string == var_96_string; // 0x91 Eq
	if(var_97_bool == 0) goto Label_149; // 0x92 JumpB
	var_95_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1304(var_94_string, var_95_bool); // 0x96 NEW_2
	var_2_object = var_90_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_95_bool = 1; // 0x95 MovB
}


func_1416(var_53_object, var_54_string, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x588 PushV
	CreateInvItem(var_57_object); // 0x589 Func
	SetItemName(var_54_string); // 0x58b ObjFunc
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x58d PushV
	var_58_object = var_53_object; // 0x58e Mov
	var_59_object = var_57_object; // 0x58f Mov
	var_60_int = var_55_int; // 0x590 Mov
	func_1397(var_59_object, var_60_int); // 0x591 NEW_2
	return 2; // 0x593 Return
}


func_1288(var_116_string)
{
	var_117_bool = 0; var_118_float = 0; var_119_float = 0; var_120_bool = 0; var_121_float = 0; var_122_float = 0; // 0x508 PushV
	lshHasAnimation(var_120_bool, var_116_string); // 0x509 Func
	var_123_bool = var_120_bool; // 0x50b Push
	if(var_123_bool == 0) goto Label_1299; // 0x50c JumpB
	lshGetAnimTimes(var_116_string, var_121_float, var_122_float); // 0x50d Func
	var_124_bool = 0; // 0x50f PushB
	lshPlayAnimation(var_121_float, var_122_float, var_124_bool); // 0x510 Func
	goto Label_1303; // 0x512 Jump
	
Label_1303:
	return 6; // 0x517 Return
	
Label_1299:
	var_125_string = "Can't find lsh animation : "; // 0x513 PushS
	var_126_int = var_125_string + var_116_string; // 0x514 Add
	Trace(var_126_int); // 0x515 Func
}


func_1550(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x60e PushV
	var_36_object = Obj(); // 0x60f PushV
	func_1537(var_36_object); // 0x610 NEW_2
	var_33_object = var_36_object; // 0x611 Mov
	Find(var_29_int, var_34_object); // 0x613 ObjFunc
	var_41_bool = var_34_object == 0; // 0x615 Not
	if(var_41_bool == 0) goto Label_1565; // 0x616 JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x617 PushS
	var_43_int = var_42_string + var_29_int; // 0x618 Add
	Trace(var_43_int); // 0x619 Func
	var_27_bool = 0; // 0x61b MovB
	return 6; // 0x61c Return
	
Label_1565:
	AddChild(var_28_object); // 0x61d ObjFunc
	var_44_int = 7; // 0x61f PushI
	SendWorldWndMessage(var_44_int); // 0x620 Func
	GetCategory(var_35_int); // 0x622 ObjFunc
	SetDiarySection(var_35_int); // 0x624 Func
	var_27_bool = 0; // 0x626 MovB
	return 6; // 0x627 Return
}


func_655(var_221_bool)
{
	var_221_bool = 1; // 0x28f MovB
	return 0; // 0x290 Return
}


func_528(var_166_float)
{
	var_167_float = 0; var_168_float = 0; // 0x210 PushV
	GetCameraFarDistance(var_168_float); // 0x211 Func
	var_166_float = var_168_float; // 0x213 Mov
	return 2; // 0x214 Return
}


func_657()
{
	StopAnimation(); // 0x291 Func
	StopGroup0(); // 0x293 Func
	return 0; // 0x295 Return
}


func_1429(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x595 PushV
	FindActor(var_18_object, var_15_string); // 0x596 Func
	var_19_bool = var_18_object == 0; // 0x598 NullEq
	if(var_19_bool == 0) goto Label_1436; // 0x599 JumpB
	var_14_bool = 0; // 0x59a MovB
	return 2; // 0x59b Return
	
Label_1436:
	Trigger(var_18_object, var_16_string); // 0x59c Func
	var_14_bool = 1; // 0x59e MovB
	return 2; // 0x59f Return
}


func_662(var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; // 0x296 PushV
	GetPosition(var_32_cvector); // 0x297 Func
	GetPosition(var_33_cvector); // 0x299 TObjFunc
	GetDirection(var_34_cvector); // 0x29b Func
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x29d PushV
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); // 0x29e PushV
	var_41_cvector = var_32_cvector - var_33_cvector; // 0x29f Sub2
	func_1367(var_40_cvector, var_41_cvector); // 0x2a0 NEW_2
	var_47_float = 0.75; // 0x2a2 PushF
	var_48_float = var_34_cvector * var_47_float; // 0x2a3 Mult
	var_39_cvector = var_40_cvector + var_48_float; // 0x2a4 Add2
	func_1367(var_38_cvector, var_39_cvector); // 0x2a5 NEW_2
	var_35_cvector = var_38_cvector; // 0x2a6 Mov
	var_49_int = 32; // 0x2a8 PushI
	var_50_float = 7000.0; // 0x2a9 PushF
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, var_49_int, var_50_float); // 0x2aa Func
	var_51_int = 100; // 0x2ac PushI
	var_37_float = var_37_float - var_51_int; // 0x2ad Sub2
	var_52_int = 0; // 0x2ae PushI
	var_53_bool = var_37_float < var_52_int; // 0x2af LT
	if(var_53_bool == 0) goto Label_690; // 0x2b0 JumpB
	var_37_float = 0; // 0x2b1 MovI
	
Label_690:
	var_24_cvector = var_36_cvector * var_37_float; // 0x2b2 Mult2
	return 12; // 0x2b3 Return
}


func_1046(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0; // 0x416 PushV
	var_17_bool = 0; var_18_object = Obj(); // 0x417 PushV
	var_18_object = var_14_object; // 0x418 Mov
	func_1010(var_17_bool, var_18_object); // 0x419 NEW_2
	var_34_bool = var_17_bool == 0; // 0x41b Not
	if(var_34_bool == 0) goto Label_1055; // 0x41c JumpB
	var_13_bool = 0; // 0x41d MovB
	return 2; // 0x41e Return
	
Label_1055:
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; // 0x41f PushV
	var_36_object = var_14_object; // 0x420 Mov
	var_37_string = "noaccess"; // 0x421 MovS
	func_993(var_35_bool, var_36_object, var_37_string); // 0x422 NEW_2
	var_44_bool = var_35_bool == 0; // 0x424 Not
	if(var_44_bool == 0) goto Label_1064; // 0x425 JumpB
	var_13_bool = 1; // 0x426 MovB
	return 2; // 0x427 Return
	
Label_1064:
	var_45_string = "noaccess"; // 0x428 PushS
	GetProperty(var_45_string, var_16_int); // 0x429 ObjFunc
	var_46_int = 0; // 0x42b PushI
	var_13_bool = var_16_int == var_46_int; // 0x42c Eq2
	return 2; // 0x42d Return
}


func_1304(var_94_string, var_95_bool)
{
	var_98_bool = 0; var_99_float = 0; var_100_float = 0; var_101_bool = 0; var_102_float = 0; var_103_float = 0; // 0x518 PushV
	lshHasAnimation(var_101_bool, var_94_string); // 0x519 Func
	var_104_bool = var_101_bool; // 0x51b Push
	if(var_104_bool == 0) goto Label_1314; // 0x51c JumpB
	lshGetAnimTimes(var_94_string, var_102_float, var_103_float); // 0x51d Func
	lshPlayAnimation(var_102_float, var_103_float, var_95_bool); // 0x51f Func
	goto Label_1318; // 0x521 Jump
	
Label_1318:
	return 6; // 0x526 Return
	
Label_1314:
	var_105_string = "Can't find lsh animation : "; // 0x522 PushS
	var_106_int = var_105_string + var_94_string; // 0x523 Add
	Trace(var_106_int); // 0x524 Func
}


func_540(var_0_object, var_1_object)
{
	var_0_object = 1; // 0x21c TMovB
	var_1_object = 0; // 0x21d TMovB
	Stop(); // 0x21e Func
	StopGroup0(); // 0x220 Func
	return 0; // 0x222 Return
}


func_1182(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x49e PushV
	GetScene(var_23_object); // 0x49f Func
	var_25_string = "scripted"; // 0x4a1 PushS
	var_26_string = "blood_dir.xml"; // 0x4a2 PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x4a3 Func
	var_27_object = Obj(); // 0x4a5 PushV
	var_27_object = var_16_object; // 0x4a6 Mov
	func_1070(var_27_object); // 0x4a7 NEW_2
	return 4; // 0x4a9 Return
}


func_1441(var_202_string, var_203_int)
{
	var_204_string = ""; var_205_string = ""; // 0x5a1 PushV
	var_205_string = "idle"; // 0x5a2 MovS
	var_206_int = var_203_int; // 0x5a3 Push
	if(var_206_int == 0) goto Label_1446; // 0x5a4 JumpB
	var_205_string = var_205_string + var_203_int; // 0x5a5 Add2
	
Label_1446:
	var_202_string = var_205_string; // 0x5a6 Mov
	return 2; // 0x5a7 Return
}


func_1319()
{
	var_13_bool = 0; // 0x527 PushV
	func_1603(var_13_bool); // 0x528 NEW_2
	if(var_13_bool == 0) goto Label_1325; // 0x52a JumpB
	lshStopSpeech(); // 0x52b Func
	
Label_1325:
	return 0; // 0x52d Return
}


func_1448(var_196_int)
{
	var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_bool = 0; // 0x5a8 PushV
	var_199_int = 0; // 0x5a9 MovI
	
Label_1450:
	var_201_string = "all"; // 0x5aa PushS
	var_202_string = ""; var_203_int = 0; // 0x5ab PushV
	var_203_int = var_199_int; // 0x5ac Mov
	func_1441(var_202_string, var_203_int); // 0x5ad NEW_2
	HasAnimation(var_200_bool, var_201_string, var_202_string); // 0x5af Func
	var_207_bool = var_200_bool == 0; // 0x5b1 Not
	if(var_207_bool == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1463; // 0x5b3 Jump
	
Label_1463:
	var_196_int = var_199_int; // 0x5b7 Mov
	return 4; // 0x5b8 Return
	
Label_1460:
	var_208_int = 1; // 0x5b4 PushI
	var_199_int = var_199_int + var_208_int; // 0x5b5 Add2
	goto Label_1450; // 0x5b6 Jump
}


func_1578(var_74_int)
{
	var_75_int = 0; var_76_int = 0; // 0x62a PushV
	var_77_string = "branch"; // 0x62b PushS
	GetVariable(var_77_string, var_76_int); // 0x62c Func
	var_78_int = 0; // 0x62e PushI
	var_79_bool = var_76_int == var_78_int; // 0x62f Eq
	if(var_79_bool == 0) goto Label_1588; // 0x630 JumpB
	var_74_int = 1; // 0x631 MovI
	return 2; // 0x632 Return
	
Label_1588:
	var_80_int = 1; // 0x634 PushI
	var_81_bool = var_76_int == var_80_int; // 0x635 Eq
	if(var_81_bool == 0) goto Label_1593; // 0x636 JumpB
	var_74_int = 2; // 0x637 MovI
	return 2; // 0x638 Return
	
Label_1593:
	var_74_int = 3; // 0x639 MovI
	return 2; // 0x63a Return
}


func_556(var_170_object, var_171_cvector)
{
	var_172_object = Obj(); var_173_object = Obj(); // 0x22c PushV
	FindShiftedPathTo(var_173_object, var_171_cvector); // 0x22d Func
	var_170_object = var_173_object; // 0x22f Mov
	return 2; // 0x230 Return
}


func_1196(var_192_bool)
{
	var_193_bool = 0; var_194_bool = 0; // 0x4ac PushV
	IsLoaded(var_194_bool); // 0x4ad Func
	var_192_bool = var_194_bool; // 0x4af Mov
	return 2; // 0x4b0 Return
}


func_1326(var_36_string)
{
	var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x52e PushV
	IsExisting3DSound(var_45_bool, var_36_string); // 0x52f Func
	var_53_bool = var_45_bool == 0; // 0x531 Not
	if(var_53_bool == 0) goto Label_1351; // 0x532 JumpB
	var_46_int = 0; // 0x533 MovI
	
Label_1332:
	var_54_int = 1; // 0x534 PushI
	var_55_int = var_46_int + var_54_int; // 0x535 Add
	var_56_int = var_36_string + var_55_int; // 0x536 Add
	IsExisting3DSound(var_47_bool, var_56_int); // 0x537 Func
	var_57_bool = var_47_bool == 0; // 0x539 Not
	if(var_57_bool == 0) goto Label_1340; // 0x53a JumpB
	goto Label_1343; // 0x53b Jump
	
Label_1343:
	var_58_bool = var_46_int == 0; // 0x53f Not
	if(var_58_bool == 0) goto Label_1346; // 0x540 JumpB
	return 16; // 0x541 Return
	
Label_1346:
	irand(var_48_int, var_46_int); // 0x542 Func
	var_59_int = 1; // 0x544 PushI
	var_60_int = var_48_int + var_59_int; // 0x545 Add
	var_36_string = var_36_string + var_60_int; // 0x546 Add2
	
Label_1351:
	Is3DSoundLoaded(var_49_bool, var_36_string); // 0x547 Func
	var_61_bool = var_49_bool; // 0x549 Push
	if(var_61_bool == 0) goto Label_1366; // 0x54a JumpB
	GetEyesHeight(var_50_float); // 0x54b Func
	GetDirection(var_51_cvector); // 0x54d Func
	var_62_int = 50; // 0x54f PushI
	var_52_cvector = var_51_cvector * var_62_int; // 0x550 Mult2
	var_63_float = GetByIndex(var_52_cvector, 1); // 0x551 PushE
	var_63_float = var_63_float + var_50_float; // 0x552 Add2
	SetByIndex(var_52_cvector, 1) = var_63_float; // 0x553 PopE
	PlayGlobalSound(var_36_string, var_52_cvector); // 0x554 Func
	
Label_1366:
	return 16; // 0x556 Return
	
Label_1340:
	var_64_int = 1; // 0x53c PushI
	var_46_int = var_46_int + var_64_int; // 0x53d Add2
	goto Label_1332; // 0x53e Jump
}


func_1070(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x42e PushV
	var_42_bool = var_27_object == 0; // 0x42f NullEq
	if(var_42_bool == 0) goto Label_1074; // 0x430 JumpB
	return 14; // 0x431 Return
	
Label_1074:
	IsDead(var_35_bool); // 0x432 Func
	var_43_bool = var_35_bool; // 0x434 Push
	if(var_43_bool == 0) goto Label_1079; // 0x435 JumpB
	return 14; // 0x436 Return
	
Label_1079:
	GetSecondaryAnimationType(var_36_int); // 0x437 Func
	var_44_int = 0; // 0x439 PushI
	var_45_bool = var_36_int < var_44_int; // 0x43a LT
	if(var_45_bool == 0) goto Label_1085; // 0x43b JumpB
	return 14; // 0x43c Return
	
Label_1085:
	GetPosition(var_37_cvector); // 0x43d ObjFunc
	GetPosition(var_38_cvector); // 0x43f Func
	GetDirection(var_39_cvector); // 0x441 Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x443 Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x444 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x445 PushE
	var_48_float = var_46_float * var_47_float; // 0x446 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x447 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x448 PushE
	var_51_float = var_49_float * var_50_float; // 0x449 Mult
	var_52_int = var_48_float + var_51_float; // 0x44a Add
	var_53_int = 0; // 0x44b PushI
	var_54_bool = var_52_int >= var_53_int; // 0x44c GE
	if(var_54_bool == 0) goto Label_1104; // 0x44d JumpB
	var_41_string = "fhit"; // 0x44e MovS
	goto Label_1105; // 0x44f Jump
	
Label_1105:
	var_55_string = "hit_react"; // 0x451 PushS
	var_56_string = "1"; // 0x452 PushS
	var_57_int = var_41_string + var_56_string; // 0x453 Add
	var_58_string = "2"; // 0x454 PushS
	var_59_int = var_41_string + var_58_string; // 0x455 Add
	var_60_int = -10; // 0x456 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x457 Func
	return 14; // 0x459 Return
	
Label_1104:
	var_41_string = "bhit"; // 0x450 MovS
}


func_1201(var_22_bool, var_24_float)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; // 0x4b1 PushV
	GetPosition(var_35_cvector); // 0x4b2 ObjFunc
	GetEyesHeight(var_34_float); // 0x4b4 ObjFunc
	var_43_float = GetByIndex(var_35_cvector, 1); // 0x4b6 PushE
	var_43_float = var_43_float + var_34_float; // 0x4b7 Add2
	SetByIndex(var_35_cvector, 1) = var_43_float; // 0x4b8 PopE
	GetPosition(var_36_cvector); // 0x4b9 Func
	GetEyesHeight(var_34_float); // 0x4bb Func
	var_44_float = GetByIndex(var_36_cvector, 1); // 0x4bd PushE
	var_44_float = var_44_float + var_34_float; // 0x4be Add2
	SetByIndex(var_36_cvector, 1) = var_44_float; // 0x4bf PopE
	var_37_cvector = var_35_cvector - var_36_cvector; // 0x4c0 Sub2
	var_45_float = GetByIndex(var_37_cvector, 1); // 0x4c1 PushE
	var_45_float = 0; // 0x4c2 MovI
	SetByIndex(var_37_cvector, 1) = var_45_float; // 0x4c3 PopE
	var_46_int = var_37_cvector | var_37_cvector; // 0x4c4 Or
	var_47_float = sqrt(var_46_int); // 0x4c5 Sqrt
	var_37_cvector = var_37_cvector / var_37_cvector; // 0x4c6 Div2
	var_38_cvector = -var_37_cvector; // 0x4c7 Neg2
	var_48_float = var_37_cvector * var_24_float; // 0x4c8 Mult
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x4c9 PushV
	var_51_cvector = CVector(0.0, 1.0, 0.0); // 0x4ca PushVec
	var_50_cvector = var_38_cvector ^ var_51_cvector; // 0x4cb Xor2
	func_1367(var_49_cvector, var_50_cvector); // 0x4cc NEW_2
	var_57_int = 25; // 0x4ce PushI
	var_58_float = var_49_cvector * var_57_int; // 0x4cf Mult
	var_59_int = var_48_float + var_58_float; // 0x4d0 Add
	var_60_cvector = CVector(0.0, 10.0, 0.0); // 0x4d1 PushVec
	var_39_cvector = var_59_int - var_60_cvector; // 0x4d2 Sub2
	var_40_cvector = var_36_cvector + var_39_cvector; // 0x4d3 Add2
	IsOverrideActive(var_41_bool); // 0x4d4 Func
	var_61_bool = var_41_bool; // 0x4d6 Push
	if(var_61_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_22_bool = 0; // 0x4d8 MovB
	return 18; // 0x4d9 Return
	
Label_1242:
	StopWorld(); // 0x4da Func
	var_62_bool = 1; // 0x4dc PushB
	CameraTransit(var_40_cvector, var_38_cvector, var_62_bool); // 0x4dd Func
	var_63_float = GetByIndex(var_39_cvector, 0); // 0x4df PushE
	var_64_float = GetByIndex(var_39_cvector, 2); // 0x4e0 PushE
	Rotate(var_63_float, var_64_float); // 0x4e1 Func
	var_65_bool = 0; // 0x4e3 PushV
	func_1603(var_65_bool); // 0x4e4 NEW_2
	if(var_65_bool == 0) goto Label_1256; // 0x4e6 JumpB
	goto Label_1264; // 0x4e7 Jump
	
Label_1264:
	CameraWaitForPlayFinish(); // 0x4f0 Func
	ResumeWorld(); // 0x4f2 Func
	var_22_bool = 1; // 0x4f4 MovB
	return 18; // 0x4f5 Return
	
Label_1256:
	var_66_string = "head"; // 0x4e8 PushS
	HasAnimationTrack(var_42_bool, var_66_string); // 0x4e9 Func
	var_67_bool = var_42_bool; // 0x4eb Push
	if(var_67_bool == 0) goto Label_1264; // 0x4ec JumpB
	var_68_string = "head"; // 0x4ed PushS
	LookAsyncCamera(var_68_string); // 0x4ee Func
}


func_817(var_2_object)
{
	Stop(); // 0x331 Func
	var_11_int = 120; // 0x333 PushI
	KillTimer(var_11_int); // 0x334 Func
	var_2_object = 1; // 0x336 TMovB
	return 0; // 0x337 Return
}


func_692(var_0_object, var_1_object, var_2_object, var_48_object)
{
	var_52_cvector = CVector(0,0,0); var_53_float = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_float = 0; // 0x2b4 PushV
	var_0_object = var_48_object; // 0x2b5 TMov
	var_62_cvector = CVector(0,0,0); var_63_float = 0; // 0x2b6 PushV
	var_63_float = 1.74533; // 0x2b7 MovF
	func_662(var_62_cvector, var_63_float); // 0x2b8 NEW_2
	var_57_cvector = var_62_cvector; // 0x2b9 Mov
	var_58_float = var_57_cvector | var_57_cvector; // 0x2bb Or2
	var_92_float = 2500.0; // 0x2bc PushF
	var_93_bool = var_58_float < var_92_float; // 0x2bd LT
	if(var_93_bool == 0) goto Label_721; // 0x2be JumpB
	var_94_cvector = CVector(0,0,0); var_95_float = 0; // 0x2bf PushV
	var_95_float = 2.61799; // 0x2c0 MovF
	func_662(var_94_cvector, var_95_float); // 0x2c1 NEW_2
	var_57_cvector = var_94_cvector; // 0x2c2 Mov
	var_58_float = var_57_cvector | var_57_cvector; // 0x2c4 Or2
	var_96_float = 2500.0; // 0x2c5 PushF
	var_97_bool = var_58_float < var_96_float; // 0x2c6 LT
	if(var_97_bool == 0) goto Label_721; // 0x2c7 JumpB
	var_98_string = "Can't retreat, distance: "; // 0x2c8 PushS
	var_99_float = sqrt(var_58_float); // 0x2c9 Sqrt
	var_100_int = var_98_string + var_99_float; // 0x2ca Add
	Trace(var_100_int); // 0x2cb Func
	var_101_float = 0.5; // 0x2cd PushF
	Sleep(var_101_float); // 0x2ce Func
	return 10; // 0x2d0 Return
	
Label_721:
	var_102_float = GetByIndex(var_57_cvector, 0); // 0x2d1 PushE
	var_103_float = GetByIndex(var_57_cvector, 2); // 0x2d2 PushE
	Rotate(var_102_float, var_103_float); // 0x2d3 Func
	var_104_cvector = CVector(0,0,0); // 0x2d5 PushV
	func_981(var_104_cvector); // 0x2d6 NEW_2
	var_1_object = var_104_cvector + var_57_cvector; // 0x2d8 Add2
	var_107_int = 120; // 0x2d9 PushI
	var_108_float = 0.5; // 0x2da PushF
	SetTimer(var_107_int, var_108_float); // 0x2db Func
	var_2_object = 0; // 0x2dd TMovB
	
Label_734:
	var_109_int = 1; // 0x2de PushI
	MovePoint(var_109_int, var_109_int, var_59_bool); // 0x2df Func
	var_110_bool = var_59_bool; // 0x2e1 Push
	if(var_110_bool == 0) goto Label_762; // 0x2e2 JumpB
	var_111_bool = var_0_object == 0; // 0x2e3 NullEq
	if(var_111_bool == 0) goto Label_743; // 0x2e4 JumpB
	goto Label_764; // 0x2e5 Jump
	
Label_764:
	return 10; // 0x2fc Return
	
Label_743:
	var_112_cvector = CVector(0,0,0); var_113_float = 0; // 0x2e7 PushV
	var_113_float = 2.61799; // 0x2e8 MovF
	func_662(var_112_cvector, var_113_float); // 0x2e9 NEW_2
	var_60_cvector = var_112_cvector; // 0x2ea Mov
	var_61_float = var_60_cvector | var_60_cvector; // 0x2ec Or2
	var_114_float = 2500.0; // 0x2ed PushF
	var_115_bool = var_61_float >= var_114_float; // 0x2ee GE
	if(var_115_bool == 0) goto Label_761; // 0x2ef JumpB
	var_116_cvector = CVector(0,0,0); // 0x2f0 PushV
	func_981(var_116_cvector); // 0x2f1 NEW_2
	var_1_object = var_116_cvector + var_60_cvector; // 0x2f3 Add2
	var_117_int = 120; // 0x2f4 PushI
	var_118_float = 0.5; // 0x2f5 PushF
	SetTimer(var_117_int, var_118_float); // 0x2f6 Func
	goto Label_762; // 0x2f8 Jump
	
Label_762:
	var_119_bool = var_2_object == 0; // 0x2fa Not
	if(var_119_bool == 0) goto Label_734; // 0x2fb JumpB
	
Label_761:
	goto Label_764; // 0x2f9 Jump
}


func_949(var_35_string)
{
	RemoveRTEnvelope(); // 0x3b6 Func
	SetDeathState(); // 0x3b8 Func
	Stop(); // 0x3ba Func
	StopAsync(); // 0x3bc Func
	StopSecondaryAnimation(); // 0x3be Func
	var_36_string = ""; // 0x3c0 PushV
	var_36_string = var_35_string; // 0x3c1 Mov
	func_1326(var_36_string); // 0x3c2 NEW_2
	var_65_string = "all"; // 0x3c4 PushS
	PlayAnimation(var_65_string, var_35_string); // 0x3c5 Func
	WaitForAnimEnd(); // 0x3c7 Func
	var_66_string = "all"; // 0x3c9 PushS
	LockAnimationEnd(var_66_string, var_35_string); // 0x3ca Func
	RemoveEnvelope(); // 0x3cc Func
	return 0; // 0x3ce Return
}


func_439()
{
	var_143_bool = 0; var_144_string = ""; var_145_string = ""; // 0x1b7 PushV
	var_144_string = "quest_d3_03"; // 0x1b8 MovS
	var_145_string = "boy_free"; // 0x1b9 MovS
	func_1429(var_143_bool, var_144_string, var_145_string); // 0x1ba NEW_2
	var_149_string = "noaccess"; // 0x1bc PushS
	var_150_int = 0; // 0x1bd PushI
	SetProperty(var_149_string, var_150_int); // 0x1be Func
	
Label_448:
	func_469(var_141_bool, var_142_bool); // 0x1c1 NEW_2
	goto Label_448; // 0x1c3 Jump
}


func_1465()
{
	var_76_string = "playsound"; // 0x5ba PushS
	var_77_string = "giveitem"; // 0x5bb PushS
	TriggerWorld(var_76_string, var_77_string); // 0x5bc Func
	return 0; // 0x5be Return
}


func_1595(var_71_int)
{
	var_71_int = 515560; // 0x63b MovI
	return 0; // 0x63c Return
}


func_1597(var_70_int)
{
	var_70_int = 503345; // 0x63d MovI
	return 0; // 0x63e Return
}


func_1471()
{
	var_18_float = 0; var_19_float = 0; // 0x5bf PushV
	var_20_string = "d3q03"; // 0x5c0 PushS
	var_21_int = 2; // 0x5c1 PushI
	SetVariable(var_20_string, var_21_int); // 0x5c2 Func
	func_1511(); // 0x5c5 NEW_2
	var_45_string = "disease"; // 0x5c7 PushS
	GetProperty(var_45_string, var_19_float); // 0x5c8 ObjFunc
	var_46_float = 0.5; // 0x5ca PushF
	var_47_bool = var_19_float < var_46_float; // 0x5cb LT
	if(var_47_bool == 0) goto Label_1489; // 0x5cc JumpB
	var_48_string = "disease"; // 0x5cd PushS
	var_49_float = 0.5; // 0x5ce PushF
	SetProperty(var_48_string, var_49_float); // 0x5cf ObjFunc
	
Label_1489:
	return 2; // 0x5d1 Return
}


func_1599(var_72_string)
{
	var_72_string = "ui/NPC_Citizen3.png"; // 0x63f MovS
	return 0; // 0x640 Return
}


func_1601(var_73_string)
{
	var_73_string = "ui/NPC_Citizen3_b.png"; // 0x641 MovS
	return 0; // 0x642 Return
}


func_576()
{
	var_178_int = 0; var_179_int = 0; var_180_int = 0; var_181_int = 0; var_182_bool = 0; var_183_float = 0; var_184_bool = 0; var_185_int = 0; var_186_int = 0; var_187_int = 0; var_188_int = 0; var_189_bool = 0; var_190_float = 0; var_191_bool = 0; // 0x240 PushV
	WaitForAnimEnd(); // 0x241 Func
	var_192_bool = 0; // 0x243 PushV
	func_1196(var_192_bool); // 0x244 NEW_2
	var_195_bool = var_192_bool == 0; // 0x246 Not
	if(var_195_bool == 0) goto Label_585; // 0x247 JumpB
	return 14; // 0x248 Return
	
Label_585:
	var_196_int = 0; // 0x249 PushV
	func_1448(var_196_int); // 0x24a NEW_2
	var_185_int = var_196_int; // 0x24b Mov
	var_186_int = 0; // 0x24d MovI
	
Label_590:
	var_209_bool = 0; // 0x24e PushV
	var_209_bool = 0; // 0x24f MovB
	var_210_int = 5; // 0x250 PushI
	var_211_bool = var_186_int < var_210_int; // 0x251 LT
	if(var_211_bool == 0) goto Label_600; // 0x252 JumpB
	var_212_bool = 0; // 0x253 PushV
	func_1196(var_212_bool); // 0x254 NEW_2
	if(var_212_bool == 0) goto Label_600; // 0x256 JumpB
	var_209_bool = 1; // 0x257 MovB
	
Label_600:
	if(var_209_bool == 0) goto Label_652; // 0x258 JumpB
	var_213_int = 3; // 0x259 PushI
	irand(var_187_int, var_213_int); // 0x25a Func
	var_214_int = 0; // 0x25c PushI
	var_215_bool = var_187_int == var_214_int; // 0x25d Eq
	if(var_215_bool == 0) goto Label_624; // 0x25e JumpB
	var_216_int = var_185_int; // 0x25f Push
	if(var_216_int == 0) goto Label_623; // 0x260 JumpB
	irand(var_188_int, var_185_int); // 0x261 Func
	var_217_string = "all"; // 0x263 PushS
	var_218_string = ""; var_219_int = 0; // 0x264 PushV
	var_219_int = var_188_int; // 0x265 Mov
	func_1441(var_218_string, var_219_int); // 0x266 NEW_2
	PlayAnimation(var_217_string, var_218_string); // 0x268 Func
	WaitForAnimEnd(var_189_bool); // 0x26a Func
	var_220_bool = var_189_bool == 0; // 0x26c Not
	if(var_220_bool == 0) goto Label_623; // 0x26d JumpB
	goto Label_652; // 0x26e Jump
	
Label_652:
	ResetAAS(); // 0x28c Func
	return 14; // 0x28e Return
	
Label_623:
	goto Label_641; // 0x26f Jump
	
Label_641:
	var_221_bool = 0; // 0x281 PushV
	func_655(var_221_bool); // 0x282 NEW_2
	var_222_bool = var_221_bool == 0; // 0x284 Not
	if(var_222_bool == 0) goto Label_647; // 0x285 JumpB
	goto Label_652; // 0x286 Jump
	
Label_647:
	ResetAAS(); // 0x287 Func
	var_223_int = 1; // 0x289 PushI
	var_186_int = var_186_int + var_223_int; // 0x28a Add2
	goto Label_590; // 0x28b Jump
	
Label_624:
	var_224_int = 1; // 0x270 PushI
	var_225_bool = var_187_int == var_224_int; // 0x271 Eq
	if(var_225_bool == 0) goto Label_638; // 0x272 JumpB
	var_226_int = 4; // 0x273 PushI
	rand(var_190_float, var_226_int); // 0x274 Func
	var_227_int = 1; // 0x276 PushI
	var_228_int = var_190_float + var_227_int; // 0x277 Add
	Sleep(var_228_int, var_191_bool); // 0x278 Func
	var_229_bool = var_191_bool == 0; // 0x27a Not
	if(var_229_bool == 0) goto Label_637; // 0x27b JumpB
	goto Label_652; // 0x27c Jump
	
Label_637:
	goto Label_641; // 0x27d Jump
	
Label_638:
	var_230_int = var_186_int; // 0x27e Push
	if(var_230_int == 0) goto Label_641; // 0x27f JumpB
	goto Label_652; // 0x280 Jump
}


func_1603(var_65_bool)
{
	var_65_bool = 0; // 0x643 MovB
	return 0; // 0x644 Return
}


func_833(var_0_object, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x341 PushV
	GetDirection(var_65_cvector); // 0x342 Func
	var_67_cvector = CVector(0,0,0); var_68_object = Obj(); // 0x344 PushV
	var_68_object = var_0_object; // 0x345 MovT
	func_986(var_68_object); // 0x346 NEW_2
	var_66_cvector = var_67_cvector; // 0x347 Mov
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x349 PushV
	var_74_cvector = var_65_cvector; // 0x34a Mov
	var_75_cvector = var_66_cvector; // 0x34b Mov
	func_1377(var_73_float, var_74_cvector, var_75_cvector); // 0x34c NEW_2
	var_81_float = -0.34202; // 0x34e PushF
	var_62_bool = var_73_float >= var_81_float; // 0x34f GE2
	return 4; // 0x350 Return
}


func_453(var_176_bool)
{
	var_176_bool = 1; // 0x1c5 MovB
	return 0; // 0x1c6 Return
}


func_1605(var_11_object)
{
	var_12_object = Obj(); // 0x646 PushV
	var_12_object = var_11_object; // 0x647 Mov
	TaskCall(6); // 0x648 TaskCall
	func_849(var_12_object); // 0x649 NEW_2
	TaskReturn(); // 0x64a TaskReturn
	return 0; // 0x64c Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_83_object, var_84_object)
{
	var_0_object = var_84_object; // 0x4b TMov
	var_1_object = var_83_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_89_int = 1; // 0x4e PushI
	if(var_89_int == 0) goto Label_102; // 0x4f JumpB
	var_90_string = ""; // 0x50 PushV
	var_90_string = "Neutral"; // 0x51 MovS
	func_132(var_84_object, var_90_string); // 0x52 NEW_2
	var_107_int = 510904; // 0x54 PushI
	SetMessage(var_107_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_108_int = 510905; // 0x59 PushI
	var_109_int = 35745; // 0x5a PushI
	var_110_int = 12053; // 0x5b PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x5c TObjFunc
	var_111_int = 534166; // 0x5e PushI
	var_112_int = -1; // 0x5f PushI
	var_113_int = 35746; // 0x60 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_114_bool = 0; // 0x66 PushV
	func_1603(var_114_bool); // 0x67 NEW_2
	if(var_114_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_115_string = var_3_string; // 0x6c PushT
	if(var_115_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_116_string = ""; // 0x6f PushV
	var_116_string = var_2_object; // 0x70 MovT
	func_1288(var_116_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_127_string = "all"; // 0x75 PushS
	var_128_string = "idle"; // 0x76 PushS
	PlayAnimation(var_127_string, var_128_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_129_string = var_3_string; // 0x7b PushT
	if(var_129_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_130_string = "all"; // 0x7e PushS
	var_131_string = "idle"; // 0x7f PushS
	PlayAnimation(var_130_string, var_131_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_849(var_12_object)
{
	var_13_object = Obj(); // 0x352 PushV
	var_13_object = var_12_object; // 0x353 Mov
	func_858(var_13_object); // 0x354 NEW_2
	
Label_854:
	Hold(); // 0x356 Func
	goto Label_854; // 0x358 Jump
}


func_1490(var_50_object)
{
	var_52_string = "powder is given"; // 0x5d3 PushS
	Trace(var_52_string); // 0x5d4 Func
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0; // 0x5d6 PushV
	var_53_object = var_50_object; // 0x5d7 Mov
	var_54_string = "powder"; // 0x5d8 MovS
	var_55_int = 1; // 0x5d9 MovI
	func_1416(var_53_object, var_54_string, var_55_int); // 0x5da NEW_2
	return 0; // 0x5dc Return
}


func_469(var_0_object, var_1_object)
{
	var_151_float = 0; var_152_cvector = CVector(0,0,0); var_153_cvector = CVector(0,0,0); var_154_bool = 0; var_155_object = Obj(); var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_bool = 0; var_161_object = Obj(); var_162_bool = 0; // 0x1d5 PushV
	var_0_object = 0; // 0x1d6 TMovB
	var_1_object = 0; // 0x1d7 TMovB
	var_163_float = 0.5; // 0x1d8 PushF
	rand(var_157_float, var_163_float); // 0x1d9 Func
	Sleep(var_157_float); // 0x1db Func
	
Label_477:
	var_164_bool = var_0_object == 0; // 0x1dd Not
	if(var_164_bool == 0) goto Label_527; // 0x1de JumpB
	var_165_bool = var_1_object == 0; // 0x1df Not
	if(var_165_bool == 0) goto Label_496; // 0x1e0 JumpB
	
Label_481:
	GetPosition(var_159_cvector); // 0x1e1 Func
	var_166_float = 0; // 0x1e3 PushV
	func_528(var_166_float); // 0x1e4 NEW_2
	GetRandomPFPointInCircle(var_158_cvector, var_159_cvector, var_166_float, var_160_bool); // 0x1e6 Func
	var_169_bool = var_160_bool; // 0x1e8 Push
	if(var_169_bool == 0) goto Label_491; // 0x1e9 JumpB
	goto Label_495; // 0x1ea Jump
	
Label_495:
	goto Label_497; // 0x1ef Jump
	
Label_497:
	var_170_object = Obj(); var_171_cvector = CVector(0,0,0); // 0x1f1 PushV
	var_171_cvector = var_158_cvector; // 0x1f2 Mov
	func_556(var_170_object, var_171_cvector); // 0x1f3 NEW_2
	var_161_object = var_170_object; // 0x1f4 Mov
	var_174_bool = var_161_object != 0; // 0x1f6 NullNeq
	if(var_174_bool == 0) goto Label_522; // 0x1f7 JumpB
	RotatePath(var_161_object, var_162_bool); // 0x1f8 Func
	var_175_bool = var_162_bool; // 0x1fa Push
	if(var_175_bool == 0) goto Label_521; // 0x1fb JumpB
	var_176_bool = 0; // 0x1fc PushV
	func_453(var_176_bool); // 0x1fd NEW_2
	FollowPath(var_161_object, var_176_bool, var_162_bool); // 0x1ff Func
	var_161_object = 0; // 0x201 SetNull
	var_177_bool = var_162_bool; // 0x202 Push
	if(var_177_bool == 0) goto Label_521; // 0x203 JumpB
	TaskCall(4); // 0x205 TaskCall
	func_576(); // 0x206 NEW_2
	TaskReturn(); // 0x207 TaskReturn
	
Label_521:
	goto Label_525; // 0x209 Jump
	
Label_525:
	var_161_object = 0; // 0x20d SetNull
	goto Label_477; // 0x20e Jump
	
Label_522:
	var_231_int = 1; // 0x20a PushI
	Sleep(var_231_int); // 0x20b Func
	
Label_491:
	var_232_int = 1; // 0x1eb PushI
	Sleep(var_232_int); // 0x1ec Func
	goto Label_481; // 0x1ee Jump
	
Label_496:
	var_1_object = 0; // 0x1f0 TMovB
	
Label_527:
	return 12; // 0x20f Return
}


func_981(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0x3d5 PushV
	GetPosition(var_84_cvector); // 0x3d6 Func
	var_82_cvector = var_84_cvector; // 0x3d8 Mov
	return 2; // 0x3d9 Return
}


func_1367(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x557 PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x558 Or
	var_51_float = sqrt(var_52_int); // 0x559 Sqrt2
	var_53_float = 0.0; // 0x55a PushF
	var_54_bool = var_51_float < var_53_float; // 0x55b LT
	if(var_54_bool == 0) goto Label_1375; // 0x55c JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x55d MovV
	return 2; // 0x55e Return
	
Label_1375:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x55f Div2
	return 2; // 0x560 Return
}


func_986(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x3da PushV
	GetPosition(var_48_cvector); // 0x3db Func
	GetPosition(var_49_cvector); // 0x3dd ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x3df Sub2
	return 4; // 0x3e0 Return
}


func_858(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x35a PushV
	var_34_bool = var_13_object == 0; // 0x35b NullEq
	if(var_34_bool == 0) goto Label_866; // 0x35c JumpB
	var_35_string = ""; // 0x35d PushV
	var_35_string = "fdie"; // 0x35e MovS
	func_949(var_35_string); // 0x35f NEW_2
	goto Label_948; // 0x361 Jump
	
Label_948:
	return 20; // 0x3b4 Return
	
Label_866:
	GetPosition(var_24_cvector); // 0x362 ObjFunc
	GetPosition(var_25_cvector); // 0x364 Func
	GetDirection(var_26_cvector); // 0x366 Func
	var_27_cvector = var_25_cvector - var_24_cvector; // 0x368 Sub2
	var_67_float = GetByIndex(var_27_cvector, 0); // 0x369 PushE
	var_68_float = GetByIndex(var_26_cvector, 0); // 0x36a PushE
	var_69_float = var_67_float * var_68_float; // 0x36b Mult
	var_70_float = GetByIndex(var_27_cvector, 2); // 0x36c PushE
	var_71_float = GetByIndex(var_26_cvector, 2); // 0x36d PushE
	var_72_float = var_70_float * var_71_float; // 0x36e Mult
	var_73_int = var_69_float + var_72_float; // 0x36f Add
	var_74_int = 0; // 0x370 PushI
	var_75_bool = var_73_int >= var_74_int; // 0x371 GE
	if(var_75_bool == 0) goto Label_885; // 0x372 JumpB
	var_28_string = "fdie"; // 0x373 MovS
	goto Label_886; // 0x374 Jump
	
Label_886:
	RemoveRTEnvelope(); // 0x376 Func
	SetDeathState(); // 0x378 Func
	Stop(); // 0x37a Func
	StopAsync(); // 0x37c Func
	var_29_object = var_13_object; // 0x37e Mov
	var_76_string = "GetScriptProperty"; // 0x37f PushS
	var_77_int = 2; // 0x380 PushI
	var_78_bool = IsFuncExist(var_13_object, var_76_string, var_77_int); // 0x381 FuncExist
	if(var_78_bool == 0) goto Label_910; // 0x382 JumpB
	var_79_string = "Owner"; // 0x383 PushS
	HasScriptProperty(var_30_bool, var_79_string); // 0x384 ObjFunc
	var_80_bool = var_30_bool; // 0x386 Push
	if(var_80_bool == 0) goto Label_910; // 0x387 JumpB
	var_81_string = "Owner"; // 0x388 PushS
	GetScriptProperty(var_29_object, var_81_string); // 0x389 ObjFunc
	var_82_bool = var_29_object == 0; // 0x38b NullEq
	if(var_82_bool == 0) goto Label_910; // 0x38c JumpB
	var_29_object = var_13_object; // 0x38d Mov
	
Label_910:
	var_83_string = "@GetEyesHeight"; // 0x38e PushS
	var_84_int = 1; // 0x38f PushI
	var_85_bool = IsFuncExist(var_29_object, var_83_string, var_84_int); // 0x390 FuncExist
	if(var_85_bool == 0) goto Label_925; // 0x391 JumpB
	GetEyesHeight(var_32_float); // 0x392 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x394 MovV
	var_86_float = GetByIndex(var_33_cvector, 1); // 0x395 PushE
	var_86_float = var_32_float; // 0x396 Mov
	SetByIndex(var_33_cvector, 1) = var_86_float; // 0x397 PopE
	var_87_string = "head"; // 0x398 PushS
	LookAsync(var_13_object, var_87_string, var_33_cvector); // 0x399 Func
	var_31_bool = 1; // 0x39b MovB
	goto Label_926; // 0x39c Jump
	
Label_926:
	var_88_string = ""; // 0x39e PushV
	var_88_string = var_28_string; // 0x39f Mov
	func_1326(var_88_string); // 0x3a0 NEW_2
	var_89_string = "all"; // 0x3a2 PushS
	PlayAnimation(var_89_string, var_28_string); // 0x3a3 Func
	WaitForAnimEnd(); // 0x3a5 Func
	var_90_bool = var_31_bool; // 0x3a7 Push
	if(var_90_bool == 0) goto Label_942; // 0x3a8 JumpB
	StopAsync(); // 0x3a9 Func
	var_91_string = "head"; // 0x3ab PushS
	UnlookAsync(var_91_string); // 0x3ac Func
	
Label_942:
	var_92_string = "all"; // 0x3ae PushS
	LockAnimationEnd(var_92_string, var_28_string); // 0x3af Func
	RemoveEnvelope(); // 0x3b1 Func
	var_29_object = 0; // 0x3b3 SetNull
	
Label_925:
	var_31_bool = 0; // 0x39d MovB
	
Label_885:
	var_28_string = "bdie"; // 0x375 MovS
}


func_1114(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x45a PushV
	var_35_bool = 0; // 0x45b PushV
	var_35_bool = 0; // 0x45c MovB
	var_36_bool = 0; // 0x45d PushV
	var_36_bool = 0; // 0x45e MovB
	var_37_object = var_14_object; // 0x45f Push
	if(var_37_object == 0) goto Label_1125; // 0x460 JumpB
	var_38_int = 4; // 0x461 PushI
	var_39_bool = var_15_int != var_38_int; // 0x462 Neq
	if(var_39_bool == 0) goto Label_1125; // 0x463 JumpB
	var_36_bool = 1; // 0x464 MovB
	
Label_1125:
	if(var_36_bool == 0) goto Label_1130; // 0x465 JumpB
	var_40_int = 5; // 0x466 PushI
	var_41_bool = var_15_int != var_40_int; // 0x467 Neq
	if(var_41_bool == 0) goto Label_1130; // 0x468 JumpB
	var_35_bool = 1; // 0x469 MovB
	
Label_1130:
	if(var_35_bool == 0) goto Label_1177; // 0x46a JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x46b PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x46c PushV
	var_45_object = var_14_object; // 0x46d Mov
	func_986(var_45_object); // 0x46e NEW_2
	var_43_cvector = var_44_cvector; // 0x46f Mov
	func_1367(var_42_cvector, var_43_cvector); // 0x471 NEW_2
	var_26_cvector = var_42_cvector; // 0x472 Mov
	CreateVectorVector(var_27_object); // 0x474 Func
	var_28_int = 1; // 0x476 MovI
	
Label_1143:
	var_55_string = "hit"; // 0x477 PushS
	var_56_int = var_55_string + var_28_int; // 0x478 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x479 Func
	var_57_bool = var_29_bool == 0; // 0x47b Not
	if(var_57_bool == 0) goto Label_1150; // 0x47c JumpB
	goto Label_1159; // 0x47d Jump
	
Label_1159:
	size(var_32_int); // 0x487 ObjFunc
	var_58_int = var_32_int; // 0x489 Push
	if(var_58_int == 0) goto Label_1176; // 0x48a JumpB
	irand(var_33_int, var_32_int); // 0x48b Func
	get(var_34_cvector, var_33_int); // 0x48d ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x48f PushV
	var_59_object = var_14_object; // 0x490 Mov
	var_60_int = var_15_int; // 0x491 Mov
	var_61_float = var_16_float; // 0x492 Mov
	var_62_cvector = var_34_cvector; // 0x493 Mov
	var_63_cvector = -var_26_cvector; // 0x494 Neg2
	func_1182(var_61_float, var_62_cvector, var_63_cvector); // 0x495 NEW_2
	return 18; // 0x497 Return
	
Label_1176:
	var_27_object = 0; // 0x498 SetNull
	
Label_1177:
	var_104_object = Obj(); // 0x499 PushV
	var_104_object = var_14_object; // 0x49a Mov
	func_1070(var_104_object); // 0x49b NEW_2
	return 18; // 0x49d Return
	
Label_1150:
	var_105_int = var_31_cvector | var_26_cvector; // 0x47e Or
	var_106_float = 0.70711; // 0x47f PushF
	var_107_bool = var_105_int >= var_106_float; // 0x480 GE
	if(var_107_bool == 0) goto Label_1156; // 0x481 JumpB
	add(var_30_cvector); // 0x482 ObjFunc
	
Label_1156:
	var_108_int = 1; // 0x484 PushI
	var_28_int = var_28_int + var_108_int; // 0x485 Add2
	goto Label_1143; // 0x486 Jump
}


func_1501()
{
	func_1524(); // 0x5df NEW_2
	var_90_bool = 0; var_91_string = ""; var_92_string = ""; // 0x5e1 PushV
	var_91_string = "quest_d3_03"; // 0x5e2 MovS
	var_92_string = "fail"; // 0x5e3 MovS
	func_1429(var_90_bool, var_91_string, var_92_string); // 0x5e4 NEW_2
	return 0; // 0x5e6 Return
}


func_1377(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector; // 0x562 Or
	var_77_int = var_74_cvector | var_74_cvector; // 0x563 Or
	var_78_int = var_75_cvector | var_75_cvector; // 0x564 Or
	var_79_float = var_77_int * var_78_int; // 0x565 Mult
	var_80_float = sqrt(var_79_float); // 0x566 Sqrt
	var_73_float = var_76_int / var_76_int; // 0x567 Div2
	return 0; // 0x568 Return
}


func_993(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0; // 0x3e1 PushV
	var_40_string = "HasProperty"; // 0x3e2 PushS
	var_41_int = 2; // 0x3e3 PushI
	var_42_bool = IsFuncExist(var_36_object, var_40_string, var_41_int); // 0x3e4 FuncExist
	var_43_bool = var_42_bool == 0; // 0x3e5 Not
	if(var_43_bool == 0) goto Label_1001; // 0x3e6 JumpB
	var_35_bool = 0; // 0x3e7 MovB
	return 2; // 0x3e8 Return
	
Label_1001:
	HasProperty(var_37_string, var_39_bool); // 0x3e9 ObjFunc
	var_35_bool = var_39_bool; // 0x3eb Mov
	return 2; // 0x3ec Return
}


func_1511()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x5e7 PushV
	var_24_int = 84; // 0x5e8 PushI
	var_25_int = 2; // 0x5e9 PushI
	var_26_int = 512166; // 0x5ea PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x5eb Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x5ed PushV
	var_28_object = var_23_object; // 0x5ee Mov
	var_29_int = 27; // 0x5ef MovI
	func_1550(var_27_bool, var_28_object, var_29_int); // 0x5f0 NEW_2
	return 2; // 0x5f2 Return
}


func_1385(var_69_int, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x569 PushV
	CreateIntVector(var_72_object); // 0x56a Func
	add(var_69_int); // 0x56c ObjFunc
	add(var_70_int); // 0x56e ObjFunc
	var_73_int = 3; // 0x570 PushI
	SendWorldWndMessage(var_73_int, var_72_object); // 0x571 Func
	return 2; // 0x573 Return
}


func_1005(var_28_bool)
{
	var_30_bool = 0; var_31_bool = 0; // 0x3ed PushV
	IsDead(var_31_bool); // 0x3ee ObjFunc
	var_28_bool = var_31_bool; // 0x3f0 Mov
	return 2; // 0x3f1 Return
}


func_1650(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x673 PushV
	var_14_object = var_12_object; // 0x674 Mov
	func_1046(var_13_bool, var_14_object); // 0x675 NEW_2
	var_11_bool = var_13_bool; // 0x676 Mov
	return 0; // 0x678 Return
}


func_1010(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x3f2 PushV
	var_23_bool = var_18_object == 0; // 0x3f3 NullEq
	if(var_23_bool == 0) goto Label_1015; // 0x3f4 JumpB
	var_17_bool = 0; // 0x3f5 MovB
	return 4; // 0x3f6 Return
	
Label_1015:
	var_24_bool = 0; // 0x3f7 PushV
	var_24_bool = 0; // 0x3f8 MovB
	var_25_string = "IsDead"; // 0x3f9 PushS
	var_26_int = 1; // 0x3fa PushI
	var_27_bool = IsFuncExist(var_18_object, var_25_string, var_26_int); // 0x3fb FuncExist
	if(var_27_bool == 0) goto Label_1027; // 0x3fc JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x3fd PushV
	var_29_object = var_18_object; // 0x3fe Mov
	func_1005(var_29_object); // 0x3ff NEW_2
	if(var_28_bool == 0) goto Label_1027; // 0x401 JumpB
	var_24_bool = 1; // 0x402 MovB
	
Label_1027:
	if(var_24_bool == 0) goto Label_1030; // 0x403 JumpB
	var_17_bool = 0; // 0x404 MovB
	return 4; // 0x405 Return
	
Label_1030:
	GetScene(var_21_object); // 0x406 Func
	var_32_bool = var_21_object == 0; // 0x408 NullEq
	if(var_32_bool == 0) goto Label_1036; // 0x409 JumpB
	var_17_bool = 0; // 0x40a MovB
	return 4; // 0x40b Return
	
Label_1036:
	GetScene(var_22_object); // 0x40c ObjFunc
	var_33_bool = var_21_object != var_22_object; // 0x40e Neq
	if(var_33_bool == 0) goto Label_1042; // 0x40f JumpB
	var_17_bool = 0; // 0x410 MovB
	return 4; // 0x411 Return
	
Label_1042:
	var_17_bool = 1; // 0x412 MovB
	return 4; // 0x413 Return
}


func_1524()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x5f4 PushV
	var_84_int = 86; // 0x5f5 PushI
	var_85_int = 2; // 0x5f6 PushI
	var_86_int = 512168; // 0x5f7 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x5f8 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x5fa PushV
	var_88_object = var_83_object; // 0x5fb Mov
	var_89_int = 27; // 0x5fc MovI
	func_1550(var_87_bool, var_88_object, var_89_int); // 0x5fd NEW_2
	return 2; // 0x5ff Return
}


func_1397(var_59_object, var_60_int)
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; // 0x575 PushV
	GetItemID(var_64_int); // 0x576 ObjFunc
	var_67_string = "Category"; // 0x578 PushS
	GetInvItemProperty(var_65_int, var_64_int, var_67_string); // 0x579 Func
	AddItem(var_66_bool, var_59_object, var_65_int, var_60_int); // 0x57b ObjFunc
	var_68_bool = var_66_bool == 0; // 0x57d Not
	if(var_68_bool == 0) goto Label_1410; // 0x57e JumpB
	DropItems(var_59_object, var_60_int); // 0x57f ObjFunc
	goto Label_1415; // 0x581 Jump
	
Label_1415:
	return 6; // 0x587 Return
	
Label_1410:
	var_69_int = 0; var_70_int = 0; // 0x582 PushV
	var_69_int = var_64_int; // 0x583 Mov
	var_70_int = var_60_int; // 0x584 Mov
	func_1385(var_69_int, var_70_int); // 0x585 NEW_2
}


func_1270()
{
	var_134_bool = 0; var_135_bool = 0; // 0x4f6 PushV
	var_136_bool = 1; // 0x4f7 PushB
	CameraSwitchToNormal(var_136_bool); // 0x4f8 Func
	var_137_bool = 0; // 0x4fa PushV
	func_1603(var_137_bool); // 0x4fb NEW_2
	if(var_137_bool == 0) goto Label_1279; // 0x4fd JumpB
	goto Label_1287; // 0x4fe Jump
	
Label_1287:
	return 2; // 0x507 Return
	
Label_1279:
	var_138_string = "head"; // 0x4ff PushS
	HasAnimationTrack(var_135_bool, var_138_string); // 0x500 Func
	var_139_bool = var_135_bool; // 0x502 Push
	if(var_139_bool == 0) goto Label_1287; // 0x503 JumpB
	var_140_string = "head"; // 0x504 PushS
	UnlookAsync(var_140_string); // 0x505 Func
}


func_1657(var_47_object)
{
	var_48_object = Obj(); // 0x67a PushV
	var_48_object = var_47_object; // 0x67b Mov
	TaskCall(5); // 0x67c TaskCall
	func_692(var_49_object, var_50_cvector, var_51_bool, var_48_object); // 0x67d NEW_2
	TaskReturn(); // 0x67e TaskReturn
	return 0; // 0x680 Return
}


