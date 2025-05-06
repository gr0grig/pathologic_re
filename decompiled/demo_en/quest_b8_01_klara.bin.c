task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb1 PushI
	if(var_9_int == 0) goto Label_531; // 0xb2 JumpB
	func_1134(); // 0xb4 NEW_2
	var_11_int = 22583; // 0xb6 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb7 Eq
	if(var_12_bool == 0) goto Label_190; // 0xb8 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb9 PushV
	var_13_object = var_1_object; // 0xba MovT
	var_14_object = var_0_object; // 0xbb MovT
	func_1207(); // 0xbc NEW_2
	
Label_190:
	var_40_int = 25211; // 0xbe PushI
	var_41_bool = var_8_bool == var_40_int; // 0xbf Eq
	if(var_41_bool == 0) goto Label_198; // 0xc0 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xc1 PushV
	var_42_object = var_1_object; // 0xc2 MovT
	var_43_object = var_0_object; // 0xc3 MovT
	func_1207(); // 0xc4 NEW_2
	
Label_198:
	var_44_int = 25212; // 0xc6 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xc7 Eq
	if(var_45_bool == 0) goto Label_206; // 0xc8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc9 PushV
	var_46_object = var_1_object; // 0xca MovT
	var_47_object = var_0_object; // 0xcb MovT
	func_1207(); // 0xcc NEW_2
	
Label_206:
	var_48_int = 25197; // 0xce PushI
	var_49_bool = var_8_bool == var_48_int; // 0xcf Eq
	if(var_49_bool == 0) goto Label_214; // 0xd0 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xd1 PushV
	var_50_object = var_1_object; // 0xd2 MovT
	var_51_object = var_0_object; // 0xd3 MovT
	func_1216(); // 0xd4 NEW_2
	
Label_214:
	var_66_int = 25198; // 0xd6 PushI
	var_67_bool = var_8_bool == var_66_int; // 0xd7 Eq
	if(var_67_bool == 0) goto Label_222; // 0xd8 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xd9 PushV
	var_68_object = var_1_object; // 0xda MovT
	var_69_object = var_0_object; // 0xdb MovT
	func_1216(); // 0xdc NEW_2
	
Label_222:
	var_70_int = 25189; // 0xde PushI
	var_71_bool = var_8_bool == var_70_int; // 0xdf Eq
	if(var_71_bool == 0) goto Label_230; // 0xe0 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0xe1 PushV
	var_72_object = var_1_object; // 0xe2 MovT
	var_73_object = var_0_object; // 0xe3 MovT
	func_1216(); // 0xe4 NEW_2
	
Label_230:
	var_74_int = 22580; // 0xe6 PushI
	var_75_bool = var_7_cvector == var_74_int; // 0xe7 Eq
	if(var_75_bool == 0) goto Label_268; // 0xe8 JumpB
	var_76_string = ""; // 0xe9 PushV
	var_76_string = "Grin"; // 0xea MovS
	func_154(var_8_bool, var_76_string); // 0xeb NEW_2
	var_93_int = 521402; // 0xed PushI
	SetMessage(var_93_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_94_bool = 0; var_95_object = Obj(); // 0xf2 PushV
	var_95_object = var_1_object; // 0xf3 MovT
	func_1226(var_95_object); // 0xf4 NEW_2
	if(var_94_bool == 0) goto Label_252; // 0xf6 JumpB
	var_102_int = 523899; // 0xf7 PushI
	var_103_int = 25181; // 0xf8 PushI
	var_104_int = 25179; // 0xf9 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xfa TObjFunc
	
Label_252:
	var_105_bool = 0; var_106_object = Obj(); // 0xfc PushV
	var_106_object = var_1_object; // 0xfd MovT
	func_1226(var_106_object); // 0xfe NEW_2
	if(var_105_bool == 0) goto Label_262; // 0x100 JumpB
	var_107_int = 521403; // 0x101 PushI
	var_108_int = 22582; // 0x102 PushI
	var_109_int = 22581; // 0x103 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x104 TObjFunc
	
Label_262:
	var_110_int = 521406; // 0x106 PushI
	var_111_int = -1; // 0x107 PushI
	var_112_int = 22584; // 0x108 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_113_int = 22582; // 0x10c PushI
	var_114_bool = var_7_cvector == var_113_int; // 0x10d Eq
	if(var_114_bool == 0) goto Label_296; // 0x10e JumpB
	var_115_string = ""; // 0x10f PushV
	var_115_string = "Grin"; // 0x110 MovS
	func_154(var_8_bool, var_115_string); // 0x111 NEW_2
	var_116_int = 521404; // 0x113 PushI
	SetMessage(var_116_int); // 0x114 TObjFunc
	ClearReplies(); // 0x116 TObjFunc
	var_117_int = 523900; // 0x118 PushI
	var_118_int = 25190; // 0x119 PushI
	var_119_int = 25180; // 0x11a PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x11b TObjFunc
	var_120_int = 523911; // 0x11d PushI
	var_121_int = 25192; // 0x11e PushI
	var_122_int = 25191; // 0x11f PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x120 TObjFunc
	var_123_int = 523909; // 0x122 PushI
	var_124_int = -1; // 0x123 PushI
	var_125_int = 25189; // 0x124 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x125 TObjFunc
	return 0; // 0x127 Return
	
Label_296:
	var_126_int = 25192; // 0x128 PushI
	var_127_bool = var_7_cvector == var_126_int; // 0x129 Eq
	if(var_127_bool == 0) goto Label_314; // 0x12a JumpB
	var_128_string = ""; // 0x12b PushV
	var_128_string = "Sly"; // 0x12c MovS
	func_154(var_8_bool, var_128_string); // 0x12d NEW_2
	var_129_int = 523912; // 0x12f PushI
	SetMessage(var_129_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_130_int = 523913; // 0x134 PushI
	var_131_int = 25190; // 0x135 PushI
	var_132_int = 25193; // 0x136 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_133_int = 25190; // 0x13a PushI
	var_134_bool = var_7_cvector == var_133_int; // 0x13b Eq
	if(var_134_bool == 0) goto Label_332; // 0x13c JumpB
	var_135_string = ""; // 0x13d PushV
	var_135_string = "Grin"; // 0x13e MovS
	func_154(var_8_bool, var_135_string); // 0x13f NEW_2
	var_136_int = 523910; // 0x141 PushI
	SetMessage(var_136_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_137_int = 523914; // 0x146 PushI
	var_138_int = 25196; // 0x147 PushI
	var_139_int = 25195; // 0x148 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_140_int = 25196; // 0x14c PushI
	var_141_bool = var_7_cvector == var_140_int; // 0x14d Eq
	if(var_141_bool == 0) goto Label_355; // 0x14e JumpB
	var_142_string = ""; // 0x14f PushV
	var_142_string = "Smile"; // 0x150 MovS
	func_154(var_8_bool, var_142_string); // 0x151 NEW_2
	var_143_int = 523915; // 0x153 PushI
	SetMessage(var_143_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_144_int = 523916; // 0x158 PushI
	var_145_int = -1; // 0x159 PushI
	var_146_int = 25197; // 0x15a PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x15b TObjFunc
	var_147_int = 523917; // 0x15d PushI
	var_148_int = -1; // 0x15e PushI
	var_149_int = 25198; // 0x15f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_150_int = 25181; // 0x163 PushI
	var_151_bool = var_7_cvector == var_150_int; // 0x164 Eq
	if(var_151_bool == 0) goto Label_373; // 0x165 JumpB
	var_152_string = ""; // 0x166 PushV
	var_152_string = "Grin"; // 0x167 MovS
	func_154(var_8_bool, var_152_string); // 0x168 NEW_2
	var_153_int = 523901; // 0x16a PushI
	SetMessage(var_153_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_154_int = 523902; // 0x16f PushI
	var_155_int = 25183; // 0x170 PushI
	var_156_int = 25182; // 0x171 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_157_int = 25183; // 0x175 PushI
	var_158_bool = var_7_cvector == var_157_int; // 0x176 Eq
	if(var_158_bool == 0) goto Label_396; // 0x177 JumpB
	var_159_string = ""; // 0x178 PushV
	var_159_string = "Sly"; // 0x179 MovS
	func_154(var_8_bool, var_159_string); // 0x17a NEW_2
	var_160_int = 523903; // 0x17c PushI
	SetMessage(var_160_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_161_int = 523904; // 0x181 PushI
	var_162_int = 25185; // 0x182 PushI
	var_163_int = 25184; // 0x183 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x184 TObjFunc
	var_164_int = 523918; // 0x186 PushI
	var_165_int = 25200; // 0x187 PushI
	var_166_int = 25199; // 0x188 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_167_int = 25200; // 0x18c PushI
	var_168_bool = var_7_cvector == var_167_int; // 0x18d Eq
	if(var_168_bool == 0) goto Label_414; // 0x18e JumpB
	var_169_string = ""; // 0x18f PushV
	var_169_string = "Smile"; // 0x190 MovS
	func_154(var_8_bool, var_169_string); // 0x191 NEW_2
	var_170_int = 523919; // 0x193 PushI
	SetMessage(var_170_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_171_int = 523920; // 0x198 PushI
	var_172_int = 25196; // 0x199 PushI
	var_173_int = 25201; // 0x19a PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_174_int = 25185; // 0x19e PushI
	var_175_bool = var_7_cvector == var_174_int; // 0x19f Eq
	if(var_175_bool == 0) goto Label_437; // 0x1a0 JumpB
	var_176_string = ""; // 0x1a1 PushV
	var_176_string = "Sly"; // 0x1a2 MovS
	func_154(var_8_bool, var_176_string); // 0x1a3 NEW_2
	var_177_int = 523905; // 0x1a5 PushI
	SetMessage(var_177_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_178_int = 523906; // 0x1aa PushI
	var_179_int = 25187; // 0x1ab PushI
	var_180_int = 25186; // 0x1ac PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1ad TObjFunc
	var_181_int = 523921; // 0x1af PushI
	var_182_int = 25204; // 0x1b0 PushI
	var_183_int = 25203; // 0x1b1 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_184_int = 25204; // 0x1b5 PushI
	var_185_bool = var_7_cvector == var_184_int; // 0x1b6 Eq
	if(var_185_bool == 0) goto Label_455; // 0x1b7 JumpB
	var_186_string = ""; // 0x1b8 PushV
	var_186_string = "Grin"; // 0x1b9 MovS
	func_154(var_8_bool, var_186_string); // 0x1ba NEW_2
	var_187_int = 523922; // 0x1bc PushI
	SetMessage(var_187_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_188_int = 523923; // 0x1c1 PushI
	var_189_int = 25200; // 0x1c2 PushI
	var_190_int = 25205; // 0x1c3 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1c4 TObjFunc
	return 0; // 0x1c6 Return
	
Label_455:
	var_191_int = 25187; // 0x1c7 PushI
	var_192_bool = var_7_cvector == var_191_int; // 0x1c8 Eq
	if(var_192_bool == 0) goto Label_478; // 0x1c9 JumpB
	var_193_string = ""; // 0x1ca PushV
	var_193_string = "Grin"; // 0x1cb MovS
	func_154(var_8_bool, var_193_string); // 0x1cc NEW_2
	var_194_int = 523907; // 0x1ce PushI
	SetMessage(var_194_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_195_int = 523924; // 0x1d3 PushI
	var_196_int = 25208; // 0x1d4 PushI
	var_197_int = 25207; // 0x1d5 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1d6 TObjFunc
	var_198_int = 523926; // 0x1d8 PushI
	var_199_int = 25210; // 0x1d9 PushI
	var_200_int = 25209; // 0x1da PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_201_int = 25210; // 0x1de PushI
	var_202_bool = var_7_cvector == var_201_int; // 0x1df Eq
	if(var_202_bool == 0) goto Label_501; // 0x1e0 JumpB
	var_203_string = ""; // 0x1e1 PushV
	var_203_string = "Grin"; // 0x1e2 MovS
	func_154(var_8_bool, var_203_string); // 0x1e3 NEW_2
	var_204_int = 523927; // 0x1e5 PushI
	SetMessage(var_204_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_205_int = 523928; // 0x1ea PushI
	var_206_int = -1; // 0x1eb PushI
	var_207_int = 25211; // 0x1ec PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1ed TObjFunc
	var_208_int = 523929; // 0x1ef PushI
	var_209_int = -1; // 0x1f0 PushI
	var_210_int = 25212; // 0x1f1 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1f2 TObjFunc
	return 0; // 0x1f4 Return
	
Label_501:
	var_211_int = 25208; // 0x1f5 PushI
	var_212_bool = var_7_cvector == var_211_int; // 0x1f6 Eq
	if(var_212_bool == 0) goto Label_519; // 0x1f7 JumpB
	var_213_string = ""; // 0x1f8 PushV
	var_213_string = "Fear"; // 0x1f9 MovS
	func_154(var_8_bool, var_213_string); // 0x1fa NEW_2
	var_214_int = 523925; // 0x1fc PushI
	SetMessage(var_214_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_215_int = 521405; // 0x201 PushI
	var_216_int = -1; // 0x202 PushI
	var_217_int = 22583; // 0x203 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_3_string = 1; // 0x207 TMovB
	var_218_bool = 0; // 0x208 PushV
	func_1330(var_218_bool); // 0x209 NEW_2
	if(var_218_bool == 0) goto Label_527; // 0x20b JumpB
	lshStopAnimation(); // 0x20c Func
	goto Label_529; // 0x20e Jump
	
Label_529:
	return 0; // 0x211 Return
	
Label_527:
	StopAnimation(); // 0x20f Func
	
Label_531:
	return 0; // 0x213 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x220 PushV
	var_10_string = "cleanup"; // 0x221 PushS
	var_11_bool = var_7_string == var_10_string; // 0x222 Eq
	if(var_11_bool == 0) goto Label_559; // 0x223 JumpB
	var_1_object = 1; // 0x224 TMovB
	IsLoaded(var_9_bool); // 0x225 Func
	var_12_bool = var_9_bool == 0; // 0x227 Not
	if(var_12_bool == 0) goto Label_558; // 0x228 JumpB
	var_13_object = Obj(); // 0x229 PushV
	func_1141(var_13_object); // 0x22a NEW_2
	RemoveActor(var_13_object); // 0x22c Func
	
Label_558:
	goto Label_563; // 0x22e Jump
	
Label_563:
	return 2; // 0x233 Return
	
Label_559:
	var_16_string = "restore"; // 0x22f PushS
	var_17_bool = var_7_string == var_16_string; // 0x230 Eq
	if(var_17_bool == 0) goto Label_563; // 0x231 JumpB
	var_1_object = 0; // 0x232 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x234 PushT
	if(var_7_object == 0) goto Label_573; // 0x235 JumpB
	var_8_object = Obj(); // 0x236 PushV
	func_1141(var_8_object); // 0x237 NEW_2
	RemoveActor(var_8_object); // 0x239 Func
	Hold(); // 0x23b Func
	
Label_573:
	func_688(); // 0x23e NEW_2
	return 0; // 0x240 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_703(); // 0x242 NEW_2
	return 0; // 0x244 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x28b PushI
	var_9_bool = var_7_int == var_8_int; // 0x28c Eq
	if(var_9_bool == 0) goto Label_687; // 0x28d JumpB
	func_646(); // 0x28f NEW_2
	var_11_bool = 0; // 0x291 PushV
	var_11_bool = 0; // 0x292 MovB
	var_12_bool = 0; // 0x293 PushV
	func_860(var_12_bool); // 0x294 NEW_2
	if(var_12_bool == 0) goto Label_668; // 0x296 JumpB
	var_15_bool = 0; // 0x297 PushV
	func_615(var_15_bool); // 0x298 NEW_2
	if(var_15_bool == 0) goto Label_668; // 0x29a JumpB
	var_11_bool = 1; // 0x29b MovB
	
Label_668:
	if(var_11_bool == 0) goto Label_681; // 0x29c JumpB
	var_32_bool = 0; // 0x29d PushV
	func_595(var_32_bool); // 0x29e NEW_2
	if(var_32_bool == 0) goto Label_680; // 0x2a0 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2a1 PushV
	var_53_object = Obj(); // 0x2a2 PushV
	func_1141(var_53_object); // 0x2a3 NEW_2
	var_52_object = var_53_object; // 0x2a4 Mov
	func_1008(var_52_object); // 0x2a6 NEW_2
	
Label_680:
	goto Label_687; // 0x2a8 Jump
	
Label_687:
	return 0; // 0x2af Return
	
Label_681:
	func_610(var_7_int); // 0x2aa NEW_2
	func_637(); // 0x2ad NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2cd Push
	if(var_8_bool == 0) goto Label_723; // 0x2ce JumpB
	func_637(); // 0x2d0 NEW_2
	goto Label_727; // 0x2d2 Jump
	
Label_727:
	return 0; // 0x2d7 Return
	
Label_723:
	var_14_string = ""; // 0x2d3 PushV
	var_14_string = "Neutral"; // 0x2d4 MovS
	func_1088(var_14_string); // 0x2d5 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2d8 PushV
	IsOverrideActive(var_9_bool); // 0x2d9 Func
	var_10_bool = var_9_bool == 0; // 0x2db Not
	if(var_10_bool == 0) goto Label_756; // 0x2dc JumpB
	EventDisable(0); // 0x2dd EventDisable
	func_828(); // 0x2df NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2e1 PushV
	var_12_object = var_7_object; // 0x2e2 Mov
	func_851(var_12_object); // 0x2e3 NEW_2
	EventEnable(0); // 0x2e5 EventEnable
	var_25_object = Obj(); // 0x2e6 PushV
	var_25_object = var_7_object; // 0x2e7 Mov
	func_532(var_25_object); // 0x2e8 NEW_2
	var_262_string = ""; // 0x2ea PushV
	var_262_string = "Neutral"; // 0x2eb MovS
	func_1088(var_262_string); // 0x2ec NEW_2
	func_646(); // 0x2ef NEW_2
	func_637(); // 0x2f2 NEW_2
	
Label_756:
	return 2; // 0x2f4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_581(var_6_bool); // 0x21d NEW_2
	return 0; // 0x21f Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_865(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1324(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1322(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1326(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1328(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1305(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1141(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_950(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_254_bool = var_36_bool == 0; // 0x3f Not
	if(var_254_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_255_object = Obj(); // 0x46 PushV
	var_255_object = var_27_object; // 0x47 Mov
	func_933(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1157(var_219_int, var_220_string)
{
	var_221_int = 0; var_222_int = 0; // 0x485 PushV
	GetVariable(var_220_string, var_222_int); // 0x486 Func
	var_219_int = var_222_int; // 0x488 Mov
	return 2; // 0x489 Return
}


func_646()
{
	var_263_int = 10; // 0x286 PushI
	KillTimer(var_263_int); // 0x287 Func
	return 0; // 0x289 Return
}


func_637()
{
	var_264_float = 0; var_265_float = 0; // 0x27d PushV
	var_266_int = 8; // 0x27e PushI
	var_267_int = 16; // 0x27f PushI
	rand(var_265_float, var_266_int, var_267_int); // 0x280 Func
	var_268_int = 10; // 0x282 PushI
	SetTimer(var_268_int, var_265_float); // 0x283 Func
	return 2; // 0x285 Return
}


func_1162(var_60_bool, var_61_string, var_62_string)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0x48a PushV
	FindActor(var_64_object, var_61_string); // 0x48b Func
	var_65_bool = var_64_object == 0; // 0x48d NullEq
	if(var_65_bool == 0) goto Label_1169; // 0x48e JumpB
	var_60_bool = 0; // 0x48f MovB
	return 2; // 0x490 Return
	
Label_1169:
	Trigger(var_64_object, var_62_string); // 0x491 Func
	var_60_bool = 1; // 0x493 MovB
	return 2; // 0x494 Return
}


func_532(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x215 PushV
	var_27_object = var_25_object; // 0x216 Mov
	TaskCall(0); // 0x217 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x218 NEW_2
	TaskReturn(); // 0x219 TaskReturn
	return 0; // 0x21b Return
}


func_1045(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x415 PushV
	var_151_string = "d"; // 0x416 PushS
	var_152_int = 0; // 0x417 PushV
	func_1174(var_152_int); // 0x418 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x41a Add
	var_159_string = "m"; // 0x41b PushS
	var_146_string = var_158_int + var_159_string; // 0x41c Add2
	var_147_int = 0; // 0x41d MovI
	
Label_1054:
	var_160_int = 1; // 0x41e PushI
	if(var_160_int == 0) goto Label_1067; // 0x41f JumpB
	var_161_int = 1; // 0x420 PushI
	var_162_int = var_147_int + var_161_int; // 0x421 Add
	var_163_int = var_146_string + var_162_int; // 0x422 Add
	HasProperty(var_163_int, var_148_bool); // 0x423 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x425 Not
	if(var_164_bool == 0) goto Label_1064; // 0x426 JumpB
	goto Label_1067; // 0x427 Jump
	
Label_1067:
	var_165_bool = var_147_int == 0; // 0x42b Not
	if(var_165_bool == 0) goto Label_1071; // 0x42c JumpB
	var_139_bool = 0; // 0x42d MovB
	return 10; // 0x42e Return
	
Label_1071:
	var_149_int = 0; // 0x42f MovI
	var_166_int = 1; // 0x430 PushI
	var_167_bool = var_147_int > var_166_int; // 0x431 GT
	if(var_167_bool == 0) goto Label_1077; // 0x432 JumpB
	irand(var_149_int, var_147_int); // 0x433 Func
	
Label_1077:
	var_168_int = 1; // 0x435 PushI
	var_169_int = var_149_int + var_168_int; // 0x436 Add
	var_170_int = var_146_string + var_169_int; // 0x437 Add
	GetProperty(var_170_int, var_150_string); // 0x438 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x43a PushV
	var_172_string = var_150_string; // 0x43b Mov
	func_1119(var_171_bool, var_172_string); // 0x43c NEW_2
	var_139_bool = var_171_bool; // 0x43d Mov
	return 10; // 0x43f Return
	
Label_1064:
	var_173_int = 1; // 0x428 PushI
	var_147_int = var_147_int + var_173_int; // 0x429 Add2
	goto Label_1054; // 0x42a Jump
}


func_1174(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x496 PushV
	GetGameTime(var_154_float); // 0x497 Func
	var_155_int = 1; // 0x499 PushI
	var_156_int = 0; // 0x49a PushV
	var_157_int = 24; // 0x49b PushI
	var_156_int = var_154_float / var_154_float; // 0x49c Div2
	var_152_int = var_155_int + var_156_int; // 0x49d Add2
	return 2; // 0x49e Return
}


func_1305(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x519 PushV
	var_91_string = "branch"; // 0x51a PushS
	GetVariable(var_91_string, var_90_int); // 0x51b Func
	var_92_int = 0; // 0x51d PushI
	var_93_bool = var_90_int == var_92_int; // 0x51e Eq
	if(var_93_bool == 0) goto Label_1315; // 0x51f JumpB
	var_88_int = 1; // 0x520 MovI
	return 2; // 0x521 Return
	
Label_1315:
	var_94_int = 1; // 0x523 PushI
	var_95_bool = var_90_int == var_94_int; // 0x524 Eq
	if(var_95_bool == 0) goto Label_1320; // 0x525 JumpB
	var_88_int = 2; // 0x526 MovI
	return 2; // 0x527 Return
	
Label_1320:
	var_88_int = 3; // 0x528 MovI
	return 2; // 0x529 Return
}


func_154(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x9b PushV
	func_1330(var_200_bool); // 0x9c NEW_2
	var_201_bool = var_200_bool == 0; // 0x9e Not
	if(var_201_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_202_bool = var_199_string == var_2_object; // 0xa1 Eq
	if(var_202_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_203_string = ""; var_204_bool = 0; // 0xa4 PushV
	var_203_string = var_199_string; // 0xa5 Mov
	var_205_string = ""; // 0xa6 PushS
	var_206_bool = var_199_string == var_205_string; // 0xa7 Eq
	if(var_206_bool == 0) goto Label_171; // 0xa8 JumpB
	var_204_bool = 0; // 0xa9 MovB
	goto Label_172; // 0xaa Jump
	
Label_172:
	func_1104(var_203_string, var_204_bool); // 0xac NEW_2
	var_2_object = var_199_string; // 0xae TMov
	return 0; // 0xaf Return
	
Label_171:
	var_204_bool = 1; // 0xab MovB
}


func_1183(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x49f PushV
	var_34_string = "idle"; // 0x4a0 MovS
	var_35_int = var_32_int; // 0x4a1 Push
	if(var_35_int == 0) goto Label_1188; // 0x4a2 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4a3 Add2
	
Label_1188:
	var_31_string = var_34_string; // 0x4a4 Mov
	return 2; // 0x4a5 Return
}


func_933()
{
	var_256_bool = 0; var_257_bool = 0; // 0x3a5 PushV
	CameraSwitchToNormal(); // 0x3a6 Func
	var_258_bool = 0; // 0x3a8 PushV
	func_1330(var_258_bool); // 0x3a9 NEW_2
	if(var_258_bool == 0) goto Label_941; // 0x3ab JumpB
	goto Label_949; // 0x3ac Jump
	
Label_949:
	return 2; // 0x3b5 Return
	
Label_941:
	var_259_string = "head"; // 0x3ad PushS
	HasAnimationTrack(var_257_bool, var_259_string); // 0x3ae Func
	var_260_bool = var_257_bool; // 0x3b0 Push
	if(var_260_bool == 0) goto Label_949; // 0x3b1 JumpB
	var_261_string = "head"; // 0x3b2 PushS
	UnlookAsync(var_261_string); // 0x3b3 Func
}


func_1190(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4a6 PushV
	var_28_int = 0; // 0x4a7 MovI
	
Label_1192:
	var_30_string = "all"; // 0x4a8 PushS
	var_31_string = ""; var_32_int = 0; // 0x4a9 PushV
	var_32_int = var_28_int; // 0x4aa Mov
	func_1183(var_31_string, var_32_int); // 0x4ab NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4ad Func
	var_36_bool = var_29_bool == 0; // 0x4af Not
	if(var_36_bool == 0) goto Label_1202; // 0x4b0 JumpB
	goto Label_1205; // 0x4b1 Jump
	
Label_1205:
	var_25_int = var_28_int; // 0x4b5 Mov
	return 4; // 0x4b6 Return
	
Label_1202:
	var_37_int = 1; // 0x4b2 PushI
	var_28_int = var_28_int + var_37_int; // 0x4b3 Add2
	goto Label_1192; // 0x4b4 Jump
}


func_1322(var_85_int)
{
	var_85_int = 515540; // 0x52a MovI
	return 0; // 0x52b Return
}


func_1324(var_84_int)
{
	var_84_int = 502865; // 0x52c MovI
	return 0; // 0x52d Return
}


func_1326(var_86_string)
{
	var_86_string = "ui/NPC_Klara.png"; // 0x52e MovS
	return 0; // 0x52f Return
}


func_1328(var_87_string)
{
	var_87_string = "ui/NPC_Klara_b.png"; // 0x530 MovS
	return 0; // 0x531 Return
}


func_688()
{
	func_828(); // 0x2b1 NEW_2
	func_646(); // 0x2b4 NEW_2
	lshStopSpeech(); // 0x2b6 Func
	lshStopAnimation(); // 0x2b8 Func
	StopAsync(); // 0x2ba Func
	Hold(); // 0x2bc Func
	return 0; // 0x2be Return
}


func_1330(var_79_bool)
{
	var_79_bool = 1; // 0x532 MovB
	return 0; // 0x533 Return
}


func_950(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3b6 PushV
	var_106_string = "voice_common"; // 0x3b7 PushS
	GetVariable(var_106_string, var_104_int); // 0x3b8 Func
	var_107_int = var_104_int; // 0x3ba Push
	if(var_107_int == 0) goto Label_988; // 0x3bb JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3bc PushV
	var_109_object = var_98_object; // 0x3bd Mov
	func_1008(var_109_object); // 0x3be NEW_2
	var_138_bool = var_108_bool == 0; // 0x3c0 Not
	if(var_138_bool == 0) goto Label_970; // 0x3c1 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3c2 PushV
	var_140_object = var_98_object; // 0x3c3 Mov
	func_1045(var_140_object); // 0x3c4 NEW_2
	var_174_bool = var_139_bool == 0; // 0x3c6 Not
	if(var_174_bool == 0) goto Label_970; // 0x3c7 JumpB
	var_97_bool = 0; // 0x3c8 MovB
	return 4; // 0x3c9 Return
	
Label_970:
	var_175_int = 2; // 0x3ca PushI
	irand(var_105_int, var_175_int); // 0x3cb Func
	var_176_int = var_105_int; // 0x3cd Push
	if(var_176_int == 0) goto Label_983; // 0x3ce JumpB
	var_177_string = "voice_common"; // 0x3cf PushS
	var_178_int = 1; // 0x3d0 PushI
	var_179_int = var_104_int + var_178_int; // 0x3d1 Add
	var_180_int = 3; // 0x3d2 PushI
	var_181_int = var_179_int / var_180_int; // 0x3d3 Mod
	SetVariable(var_177_string, var_181_int); // 0x3d4 Func
	goto Label_987; // 0x3d6 Jump
	
Label_987:
	goto Label_1006; // 0x3db Jump
	
Label_1006:
	var_97_bool = 1; // 0x3ee MovB
	return 4; // 0x3ef Return
	
Label_983:
	var_182_string = "voice_common"; // 0x3d7 PushS
	var_183_int = 0; // 0x3d8 PushI
	SetVariable(var_182_string, var_183_int); // 0x3d9 Func
	
Label_988:
	var_184_bool = 0; var_185_object = Obj(); // 0x3dc PushV
	var_185_object = var_98_object; // 0x3dd Mov
	func_1045(var_185_object); // 0x3de NEW_2
	var_186_bool = var_184_bool == 0; // 0x3e0 Not
	if(var_186_bool == 0) goto Label_1002; // 0x3e1 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3e2 PushV
	var_188_object = var_98_object; // 0x3e3 Mov
	func_1008(var_188_object); // 0x3e4 NEW_2
	var_189_bool = var_187_bool == 0; // 0x3e6 Not
	if(var_189_bool == 0) goto Label_1002; // 0x3e7 JumpB
	var_97_bool = 0; // 0x3e8 MovB
	return 4; // 0x3e9 Return
	
Label_1002:
	var_190_string = "voice_common"; // 0x3ea PushS
	var_191_int = 1; // 0x3eb PushI
	SetVariable(var_190_string, var_191_int); // 0x3ec Func
}


func_1207()
{
	var_15_string = "b8q01"; // 0x4b8 PushS
	var_16_int = 3; // 0x4b9 PushI
	SetVariable(var_15_string, var_16_int); // 0x4ba Func
	func_1251(); // 0x4bd NEW_2
	return 0; // 0x4bf Return
}


func_826(var_45_bool)
{
	var_45_bool = 1; // 0x33a MovB
	return 0; // 0x33b Return
}


func_828()
{
	StopAnimation(); // 0x33c Func
	StopGroup0(); // 0x33e Func
	return 0; // 0x340 Return
}


func_703()
{
	StopGroup0(); // 0x2bf Func
	func_646(); // 0x2c2 NEW_2
	var_8_string = ""; // 0x2c4 PushV
	var_8_string = "Neutral"; // 0x2c5 MovS
	func_1088(var_8_string); // 0x2c6 NEW_2
	func_637(); // 0x2c9 NEW_2
	return 0; // 0x2cb Return
}


func_1088(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x440 PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x441 Func
	var_245_bool = var_242_bool; // 0x443 Push
	if(var_245_bool == 0) goto Label_1099; // 0x444 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x445 Func
	var_246_bool = 0; // 0x447 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x448 Func
	goto Label_1103; // 0x44a Jump
	
Label_1103:
	return 6; // 0x44f Return
	
Label_1099:
	var_247_string = "Can't find lsh animation : "; // 0x44b PushS
	var_248_int = var_247_string + var_238_string; // 0x44c Add
	Trace(var_248_int); // 0x44d Func
}


func_1216()
{
	func_1238(); // 0x4c2 NEW_2
	var_60_bool = 0; var_61_string = ""; var_62_string = ""; // 0x4c4 PushV
	var_61_string = "quest_b8_01"; // 0x4c5 MovS
	var_62_string = "fail"; // 0x4c6 MovS
	func_1162(var_60_bool, var_61_string, var_62_string); // 0x4c7 NEW_2
	return 0; // 0x4c9 Return
}


func_833(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x341 PushV
	GetPosition(var_27_cvector); // 0x342 Func
	GetPosition(var_28_cvector); // 0x344 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x346 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x347 Or2
	return 6; // 0x348 Return
}


func_581(var_0_object)
{
	var_7_bool = 0; // 0x245 PushV
	func_860(var_7_bool); // 0x246 NEW_2
	var_10_bool = var_7_bool == 0; // 0x248 Not
	if(var_10_bool == 0) goto Label_588; // 0x249 JumpB
	Hold(); // 0x24a Func
	
Label_588:
	GetDirection(var_0_object); // 0x24c Func
	
Label_590:
	func_757(); // 0x24f NEW_2
	goto Label_590; // 0x251 Jump
}


func_841(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x349 PushV
	GetPosition(var_20_cvector); // 0x34a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x34c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x34d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x34e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x34f Func
	var_15_bool = var_22_bool; // 0x351 Mov
	return 6; // 0x352 Return
}


func_1226(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x4cb PushV
	var_220_string = "b8q01"; // 0x4cc MovS
	func_1157(var_219_int, var_220_string); // 0x4cd NEW_2
	var_223_int = 2; // 0x4cf PushI
	var_224_bool = var_219_int == var_223_int; // 0x4d0 Eq
	if(var_224_bool == 0) goto Label_1236; // 0x4d1 JumpB
	var_217_bool = 1; // 0x4d2 MovB
	return 0; // 0x4d3 Return
	
Label_1236:
	var_217_bool = 0; // 0x4d4 MovB
	return 0; // 0x4d5 Return
}


func_1104(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x450 PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x451 Func
	var_213_bool = var_210_bool; // 0x453 Push
	if(var_213_bool == 0) goto Label_1114; // 0x454 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x455 Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x457 Func
	goto Label_1118; // 0x459 Jump
	
Label_1118:
	return 6; // 0x45e Return
	
Label_1114:
	var_214_string = "Can't find lsh animation : "; // 0x45a PushS
	var_215_int = var_214_string + var_203_string; // 0x45b Add
	Trace(var_215_int); // 0x45c Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_124; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Grin"; // 0x58 MovS
	func_154(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 521402; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; var_218_object = Obj(); // 0x60 PushV
	var_218_object = var_1_object; // 0x61 MovT
	func_1226(var_218_object); // 0x62 NEW_2
	if(var_217_bool == 0) goto Label_106; // 0x64 JumpB
	var_225_int = 523899; // 0x65 PushI
	var_226_int = 25181; // 0x66 PushI
	var_227_int = 25179; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	
Label_106:
	var_228_bool = 0; var_229_object = Obj(); // 0x6a PushV
	var_229_object = var_1_object; // 0x6b MovT
	func_1226(var_229_object); // 0x6c NEW_2
	if(var_228_bool == 0) goto Label_116; // 0x6e JumpB
	var_230_int = 521403; // 0x6f PushI
	var_231_int = 22582; // 0x70 PushI
	var_232_int = 22581; // 0x71 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x72 TObjFunc
	
Label_116:
	var_233_int = 521406; // 0x74 PushI
	var_234_int = -1; // 0x75 PushI
	var_235_int = 22584; // 0x76 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x77 TObjFunc
	goto Label_124; // 0x79 Jump
	
Label_124:
	var_236_bool = 0; // 0x7c PushV
	func_1330(var_236_bool); // 0x7d NEW_2
	if(var_236_bool == 0) goto Label_139; // 0x7f JumpB
	
Label_128:
	lshWaitForAnimEnd(); // 0x80 Func
	var_237_string = var_3_string; // 0x82 PushT
	if(var_237_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_138:
	goto Label_153; // 0x8a Jump
	
Label_153:
	return 0; // 0x99 Return
	
Label_133:
	var_238_string = ""; // 0x85 PushV
	var_238_string = var_2_object; // 0x86 MovT
	func_1088(var_238_string); // 0x87 NEW_2
	goto Label_128; // 0x89 Jump
	
Label_139:
	var_249_string = "all"; // 0x8b PushS
	var_250_string = "idle"; // 0x8c PushS
	PlayAnimation(var_249_string, var_250_string); // 0x8d Func
	
Label_143:
	WaitForAnimEnd(); // 0x8f Func
	var_251_string = var_3_string; // 0x91 PushT
	if(var_251_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_148:
	var_252_string = "all"; // 0x94 PushS
	var_253_string = "idle"; // 0x95 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x96 Func
	goto Label_143; // 0x98 Jump
}


func_851(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x353 PushV
	GetPosition(var_14_cvector); // 0x354 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x356 PushV
	var_16_cvector = var_14_cvector; // 0x357 Mov
	func_841(var_15_bool, var_16_cvector); // 0x358 NEW_2
	var_11_bool = var_15_bool; // 0x359 Mov
	return 2; // 0x35b Return
}


func_595(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x253 PushV
	var_35_string = "player"; // 0x254 PushS
	FindActor(var_34_object, var_35_string); // 0x255 Func
	var_36_bool = var_34_object == 0; // 0x257 Not
	if(var_36_bool == 0) goto Label_603; // 0x258 JumpB
	var_32_bool = 0; // 0x259 MovB
	return 2; // 0x25a Return
	
Label_603:
	var_37_bool = 0; var_38_object = Obj(); // 0x25b PushV
	var_38_object = var_34_object; // 0x25c Mov
	func_851(var_38_object); // 0x25d NEW_2
	var_32_bool = var_37_bool; // 0x25e Mov
	return 2; // 0x260 Return
}


func_1238()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x4d6 PushV
	var_54_int = 693; // 0x4d7 PushI
	var_55_int = 1; // 0x4d8 PushI
	var_56_int = 535229; // 0x4d9 PushI
	CreateDiaryEntry(var_53_object, var_54_int, var_55_int, var_56_int); // 0x4da Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x4dc PushV
	var_58_object = var_53_object; // 0x4dd Mov
	var_59_int = 284; // 0x4de MovI
	func_1277(var_57_bool, var_58_object, var_59_int); // 0x4df NEW_2
	return 2; // 0x4e1 Return
}


func_860(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x35c PushV
	IsLoaded(var_9_bool); // 0x35d Func
	var_7_bool = var_9_bool; // 0x35f Mov
	return 2; // 0x360 Return
}


func_1119(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x45f PushV
	var_135_bool = 0; // 0x460 PushV
	func_1330(var_135_bool); // 0x461 NEW_2
	if(var_135_bool == 0) goto Label_1132; // 0x463 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x464 Func
	var_136_bool = var_134_bool; // 0x466 Push
	if(var_136_bool == 0) goto Label_1132; // 0x467 JumpB
	lshPlaySpeech(var_132_string); // 0x468 Func
	var_131_bool = 1; // 0x46a MovB
	return 2; // 0x46b Return
	
Label_1132:
	var_131_bool = 0; // 0x46c MovB
	return 2; // 0x46d Return
}


func_865(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x361 PushV
	GetPosition(var_50_cvector); // 0x362 ObjFunc
	GetEyesHeight(var_49_float); // 0x364 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x366 PushE
	var_58_float = var_58_float + var_49_float; // 0x367 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x368 PopE
	GetPosition(var_51_cvector); // 0x369 Func
	GetEyesHeight(var_49_float); // 0x36b Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x36d PushE
	var_59_float = var_59_float + var_49_float; // 0x36e Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x36f PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x370 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x371 PushE
	var_60_float = 0; // 0x372 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x373 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x374 Or
	var_62_float = sqrt(var_61_int); // 0x375 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x376 Div2
	var_53_cvector = -var_52_cvector; // 0x377 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x378 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x379 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x37a PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x37b Xor2
	func_1147(var_64_cvector, var_65_cvector); // 0x37c NEW_2
	var_72_int = 25; // 0x37e PushI
	var_73_float = var_64_cvector * var_72_int; // 0x37f Mult
	var_74_int = var_63_float + var_73_float; // 0x380 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x381 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x382 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x383 Add2
	IsOverrideActive(var_56_bool); // 0x384 Func
	var_76_bool = var_56_bool; // 0x386 Push
	if(var_76_bool == 0) goto Label_906; // 0x387 JumpB
	var_37_bool = 0; // 0x388 MovB
	return 18; // 0x389 Return
	
Label_906:
	StopWorld(); // 0x38a Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x38c Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x38e PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x38f PushE
	Rotate(var_77_float, var_78_float); // 0x390 Func
	var_79_bool = 0; // 0x392 PushV
	func_1330(var_79_bool); // 0x393 NEW_2
	if(var_79_bool == 0) goto Label_919; // 0x395 JumpB
	goto Label_927; // 0x396 Jump
	
Label_927:
	CameraWaitForPlayFinish(); // 0x39f Func
	ResumeWorld(); // 0x3a1 Func
	var_37_bool = 1; // 0x3a3 MovB
	return 18; // 0x3a4 Return
	
Label_919:
	var_80_string = "head"; // 0x397 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x398 Func
	var_81_bool = var_57_bool; // 0x39a Push
	if(var_81_bool == 0) goto Label_927; // 0x39b JumpB
	var_82_string = "head"; // 0x39c PushS
	LookAsyncCamera(var_82_string); // 0x39d Func
}


func_610(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x262 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x263 PushE
	RotateAsync(var_84_float, var_85_float); // 0x264 Func
	return 0; // 0x266 Return
}


func_1251()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4e3 PushV
	var_19_int = 287; // 0x4e4 PushI
	var_20_int = 1; // 0x4e5 PushI
	var_21_int = 521458; // 0x4e6 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x4e7 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x4e9 PushV
	var_23_object = var_18_object; // 0x4ea Mov
	var_24_int = 284; // 0x4eb MovI
	func_1277(var_22_bool, var_23_object, var_24_int); // 0x4ec NEW_2
	return 2; // 0x4ee Return
}


func_615(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x267 PushV
	var_20_string = "player"; // 0x268 PushS
	FindActor(var_18_object, var_20_string); // 0x269 Func
	var_21_bool = var_18_object == 0; // 0x26b Not
	if(var_21_bool == 0) goto Label_623; // 0x26c JumpB
	var_15_bool = 0; // 0x26d MovB
	return 4; // 0x26e Return
	
Label_623:
	var_22_float = 0; var_23_object = Obj(); // 0x26f PushV
	var_23_object = var_18_object; // 0x270 Mov
	func_833(var_23_object); // 0x271 NEW_2
	var_30_float = 90000.0; // 0x273 PushF
	var_31_bool = var_22_float > var_30_float; // 0x274 GT
	if(var_31_bool == 0) goto Label_632; // 0x275 JumpB
	var_15_bool = 0; // 0x276 MovB
	return 4; // 0x277 Return
	
Label_632:
	CanSee(var_19_bool, var_18_object); // 0x278 Func
	var_15_bool = var_19_bool; // 0x27a Mov
	return 4; // 0x27b Return
}


func_1134()
{
	var_10_bool = 0; // 0x46e PushV
	func_1330(var_10_bool); // 0x46f NEW_2
	if(var_10_bool == 0) goto Label_1140; // 0x471 JumpB
	lshStopSpeech(); // 0x472 Func
	
Label_1140:
	return 0; // 0x474 Return
}


func_1008(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3f0 PushV
	var_115_string = "c"; // 0x3f1 MovS
	var_116_int = 0; // 0x3f2 MovI
	
Label_1011:
	var_120_int = 1; // 0x3f3 PushI
	if(var_120_int == 0) goto Label_1024; // 0x3f4 JumpB
	var_121_int = 1; // 0x3f5 PushI
	var_122_int = var_116_int + var_121_int; // 0x3f6 Add
	var_123_int = var_115_string + var_122_int; // 0x3f7 Add
	HasProperty(var_123_int, var_117_bool); // 0x3f8 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3fa Not
	if(var_124_bool == 0) goto Label_1021; // 0x3fb JumpB
	goto Label_1024; // 0x3fc Jump
	
Label_1024:
	var_125_bool = var_116_int == 0; // 0x400 Not
	if(var_125_bool == 0) goto Label_1028; // 0x401 JumpB
	var_108_bool = 0; // 0x402 MovB
	return 10; // 0x403 Return
	
Label_1028:
	var_118_int = 0; // 0x404 MovI
	var_126_int = 1; // 0x405 PushI
	var_127_bool = var_116_int > var_126_int; // 0x406 GT
	if(var_127_bool == 0) goto Label_1034; // 0x407 JumpB
	irand(var_118_int, var_116_int); // 0x408 Func
	
Label_1034:
	var_128_int = 1; // 0x40a PushI
	var_129_int = var_118_int + var_128_int; // 0x40b Add
	var_130_int = var_115_string + var_129_int; // 0x40c Add
	GetProperty(var_130_int, var_119_string); // 0x40d ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x40f PushV
	var_132_string = var_119_string; // 0x410 Mov
	func_1119(var_131_bool, var_132_string); // 0x411 NEW_2
	var_108_bool = var_131_bool; // 0x412 Mov
	return 10; // 0x414 Return
	
Label_1021:
	var_137_int = 1; // 0x3fd PushI
	var_116_int = var_116_int + var_137_int; // 0x3fe Add2
	goto Label_1011; // 0x3ff Jump
}


func_1264(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4f0 PushV
	GetDiaryRoot(var_33_object); // 0x4f1 Func
	var_34_bool = var_33_object == 0; // 0x4f3 Not
	if(var_34_bool == 0) goto Label_1274; // 0x4f4 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4f5 PushS
	Trace(var_35_string); // 0x4f6 Func
	var_31_object = 0; // 0x4f8 MovB
	return 2; // 0x4f9 Return
	
Label_1274:
	var_31_object = var_33_object; // 0x4fa Mov
	return 2; // 0x4fb Return
}


func_1141(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x475 PushV
	self(var_101_object); // 0x476 Func
	var_99_object = var_101_object; // 0x478 Mov
	return 2; // 0x479 Return
}


func_757()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2f5 PushV
	WaitForAnimEnd(); // 0x2f6 Func
	var_23_bool = 0; // 0x2f8 PushV
	func_860(var_23_bool); // 0x2f9 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2fb Not
	if(var_24_bool == 0) goto Label_766; // 0x2fc JumpB
	return 12; // 0x2fd Return
	
Label_766:
	var_25_int = 0; // 0x2fe PushV
	func_1190(var_25_int); // 0x2ff NEW_2
	var_17_int = var_25_int; // 0x300 Mov
	var_18_int = 0; // 0x302 MovI
	
Label_771:
	var_38_bool = 0; // 0x303 PushV
	var_38_bool = 0; // 0x304 MovB
	var_39_int = 5; // 0x305 PushI
	var_40_bool = var_18_int < var_39_int; // 0x306 LT
	if(var_40_bool == 0) goto Label_781; // 0x307 JumpB
	var_41_bool = 0; // 0x308 PushV
	func_860(var_41_bool); // 0x309 NEW_2
	if(var_41_bool == 0) goto Label_781; // 0x30b JumpB
	var_38_bool = 1; // 0x30c MovB
	
Label_781:
	if(var_38_bool == 0) goto Label_823; // 0x30d JumpB
	var_42_bool = var_17_int == 0; // 0x30e Not
	if(var_42_bool == 0) goto Label_791; // 0x30f JumpB
	var_43_int = 3; // 0x310 PushI
	Sleep(var_43_int, var_19_bool); // 0x311 Func
	var_44_bool = var_19_bool == 0; // 0x313 Not
	if(var_44_bool == 0) goto Label_790; // 0x314 JumpB
	goto Label_823; // 0x315 Jump
	
Label_823:
	ResetAAS(); // 0x337 Func
	return 12; // 0x339 Return
	
Label_790:
	goto Label_812; // 0x316 Jump
	
Label_812:
	var_45_bool = 0; // 0x32c PushV
	func_826(var_45_bool); // 0x32d NEW_2
	var_46_bool = var_45_bool == 0; // 0x32f Not
	if(var_46_bool == 0) goto Label_818; // 0x330 JumpB
	goto Label_823; // 0x331 Jump
	
Label_818:
	ResetAAS(); // 0x332 Func
	var_47_int = 1; // 0x334 PushI
	var_18_int = var_18_int + var_47_int; // 0x335 Add2
	goto Label_771; // 0x336 Jump
	
Label_791:
	irand(var_20_int, var_17_int); // 0x317 Func
	var_48_int = 5; // 0x319 PushI
	irand(var_21_int, var_48_int); // 0x31a Func
	var_49_int = 0; // 0x31c PushI
	var_50_bool = var_21_int != var_49_int; // 0x31d Neq
	if(var_50_bool == 0) goto Label_800; // 0x31e JumpB
	var_20_int = 0; // 0x31f MovI
	
Label_800:
	var_51_string = "all"; // 0x320 PushS
	var_52_string = ""; var_53_int = 0; // 0x321 PushV
	var_53_int = var_20_int; // 0x322 Mov
	func_1183(var_52_string, var_53_int); // 0x323 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x325 Func
	WaitForAnimEnd(var_22_bool); // 0x327 Func
	var_54_bool = var_22_bool == 0; // 0x329 Not
	if(var_54_bool == 0) goto Label_812; // 0x32a JumpB
	goto Label_823; // 0x32b Jump
}


func_1147(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x47b PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x47c Or
	var_68_float = sqrt(var_69_int); // 0x47d Sqrt2
	var_70_float = 0.0; // 0x47e PushF
	var_71_bool = var_68_float < var_70_float; // 0x47f LT
	if(var_71_bool == 0) goto Label_1155; // 0x480 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x481 MovV
	return 2; // 0x482 Return
	
Label_1155:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x483 Div2
	return 2; // 0x484 Return
}


func_1277(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4fd PushV
	var_31_object = Obj(); // 0x4fe PushV
	func_1264(var_31_object); // 0x4ff NEW_2
	var_28_object = var_31_object; // 0x500 Mov
	Find(var_24_int, var_29_object); // 0x502 ObjFunc
	var_36_bool = var_29_object == 0; // 0x504 Not
	if(var_36_bool == 0) goto Label_1292; // 0x505 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x506 PushS
	var_38_int = var_37_string + var_24_int; // 0x507 Add
	Trace(var_38_int); // 0x508 Func
	var_22_bool = 0; // 0x50a MovB
	return 6; // 0x50b Return
	
Label_1292:
	AddChild(var_23_object); // 0x50c ObjFunc
	var_39_int = 7; // 0x50e PushI
	SendWorldWndMessage(var_39_int); // 0x50f Func
	GetCategory(var_30_int); // 0x511 ObjFunc
	SetDiarySection(var_30_int); // 0x513 Func
	var_22_bool = 0; // 0x515 MovB
	return 6; // 0x516 Return
}


