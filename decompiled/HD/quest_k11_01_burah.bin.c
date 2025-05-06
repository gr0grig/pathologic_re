task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xa7 PushI
	if(var_9_int == 0) goto Label_451; // 0xa8 JumpB
	func_1056(); // 0xaa NEW_2
	var_11_int = 28869; // 0xac PushI
	var_12_bool = var_8_bool == var_11_int; // 0xad Eq
	if(var_12_bool == 0) goto Label_180; // 0xae JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xaf PushV
	var_13_object = var_1_object; // 0xb0 MovT
	var_14_object = var_0_object; // 0xb1 MovT
	func_1129(); // 0xb2 NEW_2
	
Label_180:
	var_40_int = 28870; // 0xb4 PushI
	var_41_bool = var_8_bool == var_40_int; // 0xb5 Eq
	if(var_41_bool == 0) goto Label_188; // 0xb6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xb7 PushV
	var_42_object = var_1_object; // 0xb8 MovT
	var_43_object = var_0_object; // 0xb9 MovT
	func_1129(); // 0xba NEW_2
	
Label_188:
	var_44_int = 28859; // 0xbc PushI
	var_45_bool = var_8_bool == var_44_int; // 0xbd Eq
	if(var_45_bool == 0) goto Label_196; // 0xbe JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xbf PushV
	var_46_object = var_1_object; // 0xc0 MovT
	var_47_object = var_0_object; // 0xc1 MovT
	func_1138(); // 0xc2 NEW_2
	
Label_196:
	var_62_int = 28528; // 0xc4 PushI
	var_63_bool = var_7_cvector == var_62_int; // 0xc5 Eq
	if(var_63_bool == 0) goto Label_224; // 0xc6 JumpB
	var_64_string = ""; // 0xc7 PushV
	var_64_string = "Neutral"; // 0xc8 MovS
	func_144(var_8_bool, var_64_string); // 0xc9 NEW_2
	var_81_int = 527220; // 0xcb PushI
	SetMessage(var_81_int); // 0xcc TObjFunc
	ClearReplies(); // 0xce TObjFunc
	var_82_bool = 0; var_83_object = Obj(); // 0xd0 PushV
	var_83_object = var_1_object; // 0xd1 MovT
	func_1148(var_83_object); // 0xd2 NEW_2
	if(var_82_bool == 0) goto Label_218; // 0xd4 JumpB
	var_90_int = 527221; // 0xd5 PushI
	var_91_int = 28839; // 0xd6 PushI
	var_92_int = 28529; // 0xd7 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0xd8 TObjFunc
	
Label_218:
	var_93_int = 527224; // 0xda PushI
	var_94_int = -1; // 0xdb PushI
	var_95_int = 28532; // 0xdc PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xdd TObjFunc
	return 0; // 0xdf Return
	
Label_224:
	var_96_int = 28839; // 0xe0 PushI
	var_97_bool = var_7_cvector == var_96_int; // 0xe1 Eq
	if(var_97_bool == 0) goto Label_247; // 0xe2 JumpB
	var_98_string = ""; // 0xe3 PushV
	var_98_string = "Doubt"; // 0xe4 MovS
	func_144(var_8_bool, var_98_string); // 0xe5 NEW_2
	var_99_int = 527507; // 0xe7 PushI
	SetMessage(var_99_int); // 0xe8 TObjFunc
	ClearReplies(); // 0xea TObjFunc
	var_100_int = 527508; // 0xec PushI
	var_101_int = 28842; // 0xed PushI
	var_102_int = 28840; // 0xee PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xef TObjFunc
	var_103_int = 527509; // 0xf1 PushI
	var_104_int = 28842; // 0xf2 PushI
	var_105_int = 28841; // 0xf3 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0xf4 TObjFunc
	return 0; // 0xf6 Return
	
Label_247:
	var_106_int = 28842; // 0xf7 PushI
	var_107_bool = var_7_cvector == var_106_int; // 0xf8 Eq
	if(var_107_bool == 0) goto Label_270; // 0xf9 JumpB
	var_108_string = ""; // 0xfa PushV
	var_108_string = "Sorrow"; // 0xfb MovS
	func_144(var_8_bool, var_108_string); // 0xfc NEW_2
	var_109_int = 527510; // 0xfe PushI
	SetMessage(var_109_int); // 0xff TObjFunc
	ClearReplies(); // 0x101 TObjFunc
	var_110_int = 527511; // 0x103 PushI
	var_111_int = 28845; // 0x104 PushI
	var_112_int = 28843; // 0x105 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x106 TObjFunc
	var_113_int = 527512; // 0x108 PushI
	var_114_int = 28845; // 0x109 PushI
	var_115_int = 28844; // 0x10a PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x10b TObjFunc
	return 0; // 0x10d Return
	
Label_270:
	var_116_int = 28845; // 0x10e PushI
	var_117_bool = var_7_cvector == var_116_int; // 0x10f Eq
	if(var_117_bool == 0) goto Label_288; // 0x110 JumpB
	var_118_string = ""; // 0x111 PushV
	var_118_string = "Sorrow"; // 0x112 MovS
	func_144(var_8_bool, var_118_string); // 0x113 NEW_2
	var_119_int = 527513; // 0x115 PushI
	SetMessage(var_119_int); // 0x116 TObjFunc
	ClearReplies(); // 0x118 TObjFunc
	var_120_int = 527514; // 0x11a PushI
	var_121_int = 28850; // 0x11b PushI
	var_122_int = 28846; // 0x11c PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_123_int = 28850; // 0x120 PushI
	var_124_bool = var_7_cvector == var_123_int; // 0x121 Eq
	if(var_124_bool == 0) goto Label_311; // 0x122 JumpB
	var_125_string = ""; // 0x123 PushV
	var_125_string = "Doubt"; // 0x124 MovS
	func_144(var_8_bool, var_125_string); // 0x125 NEW_2
	var_126_int = 527516; // 0x127 PushI
	SetMessage(var_126_int); // 0x128 TObjFunc
	ClearReplies(); // 0x12a TObjFunc
	var_127_int = 527517; // 0x12c PushI
	var_128_int = 28853; // 0x12d PushI
	var_129_int = 28851; // 0x12e PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x12f TObjFunc
	var_130_int = 527518; // 0x131 PushI
	var_131_int = 28853; // 0x132 PushI
	var_132_int = 28852; // 0x133 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x134 TObjFunc
	return 0; // 0x136 Return
	
Label_311:
	var_133_int = 28853; // 0x137 PushI
	var_134_bool = var_7_cvector == var_133_int; // 0x138 Eq
	if(var_134_bool == 0) goto Label_334; // 0x139 JumpB
	var_135_string = ""; // 0x13a PushV
	var_135_string = "Doubt"; // 0x13b MovS
	func_144(var_8_bool, var_135_string); // 0x13c NEW_2
	var_136_int = 527519; // 0x13e PushI
	SetMessage(var_136_int); // 0x13f TObjFunc
	ClearReplies(); // 0x141 TObjFunc
	var_137_int = 527520; // 0x143 PushI
	var_138_int = 28530; // 0x144 PushI
	var_139_int = 28855; // 0x145 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x146 TObjFunc
	var_140_int = 527521; // 0x148 PushI
	var_141_int = 28530; // 0x149 PushI
	var_142_int = 28856; // 0x14a PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x14b TObjFunc
	return 0; // 0x14d Return
	
Label_334:
	var_143_int = 28530; // 0x14e PushI
	var_144_bool = var_7_cvector == var_143_int; // 0x14f Eq
	if(var_144_bool == 0) goto Label_357; // 0x150 JumpB
	var_145_string = ""; // 0x151 PushV
	var_145_string = "Doubt"; // 0x152 MovS
	func_144(var_8_bool, var_145_string); // 0x153 NEW_2
	var_146_int = 527222; // 0x155 PushI
	SetMessage(var_146_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_147_int = 527223; // 0x15a PushI
	var_148_int = 28863; // 0x15b PushI
	var_149_int = 28531; // 0x15c PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x15d TObjFunc
	var_150_int = 527523; // 0x15f PushI
	var_151_int = -1; // 0x160 PushI
	var_152_int = 28859; // 0x161 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x162 TObjFunc
	return 0; // 0x164 Return
	
Label_357:
	var_153_int = 28863; // 0x165 PushI
	var_154_bool = var_7_cvector == var_153_int; // 0x166 Eq
	if(var_154_bool == 0) goto Label_380; // 0x167 JumpB
	var_155_string = ""; // 0x168 PushV
	var_155_string = "Sorrow"; // 0x169 MovS
	func_144(var_8_bool, var_155_string); // 0x16a NEW_2
	var_156_int = 527526; // 0x16c PushI
	SetMessage(var_156_int); // 0x16d TObjFunc
	ClearReplies(); // 0x16f TObjFunc
	var_157_int = 527527; // 0x171 PushI
	var_158_int = 28866; // 0x172 PushI
	var_159_int = 28864; // 0x173 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x174 TObjFunc
	var_160_int = 527528; // 0x176 PushI
	var_161_int = 28866; // 0x177 PushI
	var_162_int = 28865; // 0x178 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x179 TObjFunc
	return 0; // 0x17b Return
	
Label_380:
	var_163_int = 28866; // 0x17c PushI
	var_164_bool = var_7_cvector == var_163_int; // 0x17d Eq
	if(var_164_bool == 0) goto Label_398; // 0x17e JumpB
	var_165_string = ""; // 0x17f PushV
	var_165_string = "Sorrow"; // 0x180 MovS
	func_144(var_8_bool, var_165_string); // 0x181 NEW_2
	var_166_int = 527529; // 0x183 PushI
	SetMessage(var_166_int); // 0x184 TObjFunc
	ClearReplies(); // 0x186 TObjFunc
	var_167_int = 527530; // 0x188 PushI
	var_168_int = 28858; // 0x189 PushI
	var_169_int = 28867; // 0x18a PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_170_int = 28858; // 0x18e PushI
	var_171_bool = var_7_cvector == var_170_int; // 0x18f Eq
	if(var_171_bool == 0) goto Label_416; // 0x190 JumpB
	var_172_string = ""; // 0x191 PushV
	var_172_string = "Neutral"; // 0x192 MovS
	func_144(var_8_bool, var_172_string); // 0x193 NEW_2
	var_173_int = 527522; // 0x195 PushI
	SetMessage(var_173_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_174_int = 527524; // 0x19a PushI
	var_175_int = 28862; // 0x19b PushI
	var_176_int = 28861; // 0x19c PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x19d TObjFunc
	return 0; // 0x19f Return
	
Label_416:
	var_177_int = 28862; // 0x1a0 PushI
	var_178_bool = var_7_cvector == var_177_int; // 0x1a1 Eq
	if(var_178_bool == 0) goto Label_439; // 0x1a2 JumpB
	var_179_string = ""; // 0x1a3 PushV
	var_179_string = "Neutral"; // 0x1a4 MovS
	func_144(var_8_bool, var_179_string); // 0x1a5 NEW_2
	var_180_int = 527525; // 0x1a7 PushI
	SetMessage(var_180_int); // 0x1a8 TObjFunc
	ClearReplies(); // 0x1aa TObjFunc
	var_181_int = 527531; // 0x1ac PushI
	var_182_int = -1; // 0x1ad PushI
	var_183_int = 28869; // 0x1ae PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1af TObjFunc
	var_184_int = 527532; // 0x1b1 PushI
	var_185_int = -1; // 0x1b2 PushI
	var_186_int = 28870; // 0x1b3 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1b4 TObjFunc
	return 0; // 0x1b6 Return
	
Label_439:
	var_3_string = 1; // 0x1b7 TMovB
	var_187_bool = 0; // 0x1b8 PushV
	func_1252(var_187_bool); // 0x1b9 NEW_2
	if(var_187_bool == 0) goto Label_447; // 0x1bb JumpB
	lshStopAnimation(); // 0x1bc Func
	goto Label_449; // 0x1be Jump
	
Label_449:
	return 0; // 0x1c1 Return
	
Label_447:
	StopAnimation(); // 0x1bf Func
	
Label_451:
	return 0; // 0x1c3 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1d0 PushV
	var_10_string = "cleanup"; // 0x1d1 PushS
	var_11_bool = var_7_string == var_10_string; // 0x1d2 Eq
	if(var_11_bool == 0) goto Label_479; // 0x1d3 JumpB
	var_1_object = 1; // 0x1d4 TMovB
	IsLoaded(var_9_bool); // 0x1d5 Func
	var_12_bool = var_9_bool == 0; // 0x1d7 Not
	if(var_12_bool == 0) goto Label_478; // 0x1d8 JumpB
	var_13_object = Obj(); // 0x1d9 PushV
	func_1063(var_13_object); // 0x1da NEW_2
	RemoveActor(var_13_object); // 0x1dc Func
	
Label_478:
	goto Label_483; // 0x1de Jump
	
Label_483:
	return 2; // 0x1e3 Return
	
Label_479:
	var_16_string = "restore"; // 0x1df PushS
	var_17_bool = var_7_string == var_16_string; // 0x1e0 Eq
	if(var_17_bool == 0) goto Label_483; // 0x1e1 JumpB
	var_1_object = 0; // 0x1e2 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x1e4 PushT
	if(var_7_object == 0) goto Label_493; // 0x1e5 JumpB
	var_8_object = Obj(); // 0x1e6 PushV
	func_1063(var_8_object); // 0x1e7 NEW_2
	RemoveActor(var_8_object); // 0x1e9 Func
	Hold(); // 0x1eb Func
	
Label_493:
	func_608(); // 0x1ee NEW_2
	return 0; // 0x1f0 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_623(); // 0x1f2 NEW_2
	return 0; // 0x1f4 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x23b PushI
	var_9_bool = var_7_int == var_8_int; // 0x23c Eq
	if(var_9_bool == 0) goto Label_607; // 0x23d JumpB
	func_566(); // 0x23f NEW_2
	var_11_bool = 0; // 0x241 PushV
	var_11_bool = 0; // 0x242 MovB
	var_12_bool = 0; // 0x243 PushV
	func_780(var_12_bool); // 0x244 NEW_2
	if(var_12_bool == 0) goto Label_588; // 0x246 JumpB
	var_15_bool = 0; // 0x247 PushV
	func_535(var_15_bool); // 0x248 NEW_2
	if(var_15_bool == 0) goto Label_588; // 0x24a JumpB
	var_11_bool = 1; // 0x24b MovB
	
Label_588:
	if(var_11_bool == 0) goto Label_601; // 0x24c JumpB
	var_32_bool = 0; // 0x24d PushV
	func_515(var_32_bool); // 0x24e NEW_2
	if(var_32_bool == 0) goto Label_600; // 0x250 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x251 PushV
	var_53_object = Obj(); // 0x252 PushV
	func_1063(var_53_object); // 0x253 NEW_2
	var_52_object = var_53_object; // 0x254 Mov
	func_930(var_52_object); // 0x256 NEW_2
	
Label_600:
	goto Label_607; // 0x258 Jump
	
Label_607:
	return 0; // 0x25f Return
	
Label_601:
	func_530(var_7_int); // 0x25a NEW_2
	func_557(); // 0x25d NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x27d Push
	if(var_8_bool == 0) goto Label_643; // 0x27e JumpB
	func_557(); // 0x280 NEW_2
	goto Label_647; // 0x282 Jump
	
Label_647:
	return 0; // 0x287 Return
	
Label_643:
	var_14_string = ""; // 0x283 PushV
	var_14_string = "Neutral"; // 0x284 MovS
	func_1010(var_14_string); // 0x285 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x288 PushV
	IsOverrideActive(var_9_bool); // 0x289 Func
	var_10_bool = var_9_bool == 0; // 0x28b Not
	if(var_10_bool == 0) goto Label_676; // 0x28c JumpB
	EventDisable(0); // 0x28d EventDisable
	func_748(); // 0x28f NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x291 PushV
	var_12_object = var_7_object; // 0x292 Mov
	func_771(var_12_object); // 0x293 NEW_2
	EventEnable(0); // 0x295 EventEnable
	var_25_object = Obj(); // 0x296 PushV
	var_25_object = var_7_object; // 0x297 Mov
	func_452(var_25_object); // 0x298 NEW_2
	var_259_string = ""; // 0x29a PushV
	var_259_string = "Neutral"; // 0x29b MovS
	func_1010(var_259_string); // 0x29c NEW_2
	func_566(); // 0x29f NEW_2
	func_557(); // 0x2a2 NEW_2
	
Label_676:
	return 2; // 0x2a4 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_501(var_6_bool); // 0x1cd NEW_2
	return 0; // 0x1cf Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_785(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1246(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1244(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1248(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1250(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1227(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1063(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_872(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_250_bool = var_36_bool == 0; // 0x3f Not
	if(var_250_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_251_object = Obj(); // 0x46 PushV
	var_251_object = var_27_object; // 0x47 Mov
	func_854(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1026(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x402 PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x403 Func
	var_214_bool = var_211_bool; // 0x405 Push
	if(var_214_bool == 0) goto Label_1036; // 0x406 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x407 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x409 Func
	goto Label_1040; // 0x40b Jump
	
Label_1040:
	return 6; // 0x410 Return
	
Label_1036:
	var_215_string = "Can't find lsh animation : "; // 0x40c PushS
	var_216_int = var_215_string + var_204_string; // 0x40d Add
	Trace(var_216_int); // 0x40e Func
}


func_515(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x203 PushV
	var_35_string = "player"; // 0x204 PushS
	FindActor(var_34_object, var_35_string); // 0x205 Func
	var_36_bool = var_34_object == 0; // 0x207 Not
	if(var_36_bool == 0) goto Label_523; // 0x208 JumpB
	var_32_bool = 0; // 0x209 MovB
	return 2; // 0x20a Return
	
Label_523:
	var_37_bool = 0; var_38_object = Obj(); // 0x20b PushV
	var_38_object = var_34_object; // 0x20c Mov
	func_771(var_38_object); // 0x20d NEW_2
	var_32_bool = var_37_bool; // 0x20e Mov
	return 2; // 0x210 Return
}


func_771(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x303 PushV
	GetPosition(var_14_cvector); // 0x304 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x306 PushV
	var_16_cvector = var_14_cvector; // 0x307 Mov
	func_761(var_15_bool, var_16_cvector); // 0x308 NEW_2
	var_11_bool = var_15_bool; // 0x309 Mov
	return 2; // 0x30b Return
}


func_1160()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x488 PushV
	var_50_int = 778; // 0x489 PushI
	var_51_int = 1; // 0x48a PushI
	var_52_int = 541642; // 0x48b PushI
	CreateDiaryEntry(var_49_object, var_50_int, var_51_int, var_52_int); // 0x48c Func
	var_53_bool = 0; var_54_object = Obj(); var_55_int = 0; // 0x48e PushV
	var_54_object = var_49_object; // 0x48f Mov
	var_55_int = 480; // 0x490 MovI
	func_1199(var_53_bool, var_54_object, var_55_int); // 0x491 NEW_2
	return 2; // 0x493 Return
}


func_780(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x30c PushV
	IsLoaded(var_9_bool); // 0x30d Func
	var_7_bool = var_9_bool; // 0x30f Mov
	return 2; // 0x310 Return
}


func_144(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x91 PushV
	func_1252(var_201_bool); // 0x92 NEW_2
	var_202_bool = var_201_bool == 0; // 0x94 Not
	if(var_202_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_203_bool = var_200_string == var_2_object; // 0x97 Eq
	if(var_203_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_204_string = ""; var_205_bool = 0; // 0x9a PushV
	var_204_string = var_200_string; // 0x9b Mov
	var_206_string = ""; // 0x9c PushS
	var_207_bool = var_200_string == var_206_string; // 0x9d Eq
	if(var_207_bool == 0) goto Label_161; // 0x9e JumpB
	var_205_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_1026(var_204_string, var_205_bool); // 0xa2 NEW_2
	var_2_object = var_200_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_205_bool = 1; // 0xa1 MovB
}


func_785(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x311 PushV
	GetPosition(var_50_cvector); // 0x312 ObjFunc
	GetEyesHeight(var_49_float); // 0x314 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x316 PushE
	var_58_float = var_58_float + var_49_float; // 0x317 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x318 PopE
	GetPosition(var_51_cvector); // 0x319 Func
	GetEyesHeight(var_49_float); // 0x31b Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x31d PushE
	var_59_float = var_59_float + var_49_float; // 0x31e Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x31f PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x320 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x321 PushE
	var_60_float = 0; // 0x322 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x323 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x324 Or
	var_62_float = sqrt(var_61_int); // 0x325 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x326 Div2
	var_53_cvector = -var_52_cvector; // 0x327 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x328 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x329 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x32a PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x32b Xor2
	func_1069(var_64_cvector, var_65_cvector); // 0x32c NEW_2
	var_72_int = 25; // 0x32e PushI
	var_73_float = var_64_cvector * var_72_int; // 0x32f Mult
	var_74_int = var_63_float + var_73_float; // 0x330 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x331 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x332 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x333 Add2
	IsOverrideActive(var_56_bool); // 0x334 Func
	var_76_bool = var_56_bool; // 0x336 Push
	if(var_76_bool == 0) goto Label_826; // 0x337 JumpB
	var_37_bool = 0; // 0x338 MovB
	return 18; // 0x339 Return
	
Label_826:
	StopWorld(); // 0x33a Func
	var_77_bool = 1; // 0x33c PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x33d Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x33f PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x340 PushE
	Rotate(var_78_float, var_79_float); // 0x341 Func
	var_80_bool = 0; // 0x343 PushV
	func_1252(var_80_bool); // 0x344 NEW_2
	if(var_80_bool == 0) goto Label_840; // 0x346 JumpB
	goto Label_848; // 0x347 Jump
	
Label_848:
	CameraWaitForPlayFinish(); // 0x350 Func
	ResumeWorld(); // 0x352 Func
	var_37_bool = 1; // 0x354 MovB
	return 18; // 0x355 Return
	
Label_840:
	var_81_string = "head"; // 0x348 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x349 Func
	var_82_bool = var_57_bool; // 0x34b Push
	if(var_82_bool == 0) goto Label_848; // 0x34c JumpB
	var_83_string = "head"; // 0x34d PushS
	LookAsyncCamera(var_83_string); // 0x34e Func
}


func_530(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x212 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x213 PushE
	RotateAsync(var_84_float, var_85_float); // 0x214 Func
	return 0; // 0x216 Return
}


func_1041(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x411 PushV
	var_136_bool = 0; // 0x412 PushV
	func_1252(var_136_bool); // 0x413 NEW_2
	if(var_136_bool == 0) goto Label_1054; // 0x415 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x416 Func
	var_137_bool = var_135_bool; // 0x418 Push
	if(var_137_bool == 0) goto Label_1054; // 0x419 JumpB
	lshPlaySpeech(var_133_string); // 0x41a Func
	var_132_bool = 1; // 0x41c MovB
	return 2; // 0x41d Return
	
Label_1054:
	var_132_bool = 0; // 0x41e MovB
	return 2; // 0x41f Return
}


func_1173()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x495 PushV
	var_19_int = 490; // 0x496 PushI
	var_20_int = 1; // 0x497 PushI
	var_21_int = 528057; // 0x498 PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x499 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x49b PushV
	var_23_object = var_18_object; // 0x49c Mov
	var_24_int = 480; // 0x49d MovI
	func_1199(var_22_bool, var_23_object, var_24_int); // 0x49e NEW_2
	return 2; // 0x4a0 Return
}


func_535(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x217 PushV
	var_20_string = "player"; // 0x218 PushS
	FindActor(var_18_object, var_20_string); // 0x219 Func
	var_21_bool = var_18_object == 0; // 0x21b Not
	if(var_21_bool == 0) goto Label_543; // 0x21c JumpB
	var_15_bool = 0; // 0x21d MovB
	return 4; // 0x21e Return
	
Label_543:
	var_22_float = 0; var_23_object = Obj(); // 0x21f PushV
	var_23_object = var_18_object; // 0x220 Mov
	func_753(var_23_object); // 0x221 NEW_2
	var_30_float = 90000.0; // 0x223 PushF
	var_31_bool = var_22_float > var_30_float; // 0x224 GT
	if(var_31_bool == 0) goto Label_552; // 0x225 JumpB
	var_15_bool = 0; // 0x226 MovB
	return 4; // 0x227 Return
	
Label_552:
	CanSee(var_19_bool, var_18_object); // 0x228 Func
	var_15_bool = var_19_bool; // 0x22a Mov
	return 4; // 0x22b Return
}


func_1056()
{
	var_10_bool = 0; // 0x420 PushV
	func_1252(var_10_bool); // 0x421 NEW_2
	if(var_10_bool == 0) goto Label_1062; // 0x423 JumpB
	lshStopSpeech(); // 0x424 Func
	
Label_1062:
	return 0; // 0x426 Return
}


func_930(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3a2 PushV
	var_116_string = "c"; // 0x3a3 MovS
	var_117_int = 0; // 0x3a4 MovI
	
Label_933:
	var_121_int = 1; // 0x3a5 PushI
	if(var_121_int == 0) goto Label_946; // 0x3a6 JumpB
	var_122_int = 1; // 0x3a7 PushI
	var_123_int = var_117_int + var_122_int; // 0x3a8 Add
	var_124_int = var_116_string + var_123_int; // 0x3a9 Add
	HasProperty(var_124_int, var_118_bool); // 0x3aa ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3ac Not
	if(var_125_bool == 0) goto Label_943; // 0x3ad JumpB
	goto Label_946; // 0x3ae Jump
	
Label_946:
	var_126_bool = var_117_int == 0; // 0x3b2 Not
	if(var_126_bool == 0) goto Label_950; // 0x3b3 JumpB
	var_109_bool = 0; // 0x3b4 MovB
	return 10; // 0x3b5 Return
	
Label_950:
	var_119_int = 0; // 0x3b6 MovI
	var_127_int = 1; // 0x3b7 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3b8 GT
	if(var_128_bool == 0) goto Label_956; // 0x3b9 JumpB
	irand(var_119_int, var_117_int); // 0x3ba Func
	
Label_956:
	var_129_int = 1; // 0x3bc PushI
	var_130_int = var_119_int + var_129_int; // 0x3bd Add
	var_131_int = var_116_string + var_130_int; // 0x3be Add
	GetProperty(var_131_int, var_120_string); // 0x3bf ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3c1 PushV
	var_133_string = var_120_string; // 0x3c2 Mov
	func_1041(var_132_bool, var_133_string); // 0x3c3 NEW_2
	var_109_bool = var_132_bool; // 0x3c4 Mov
	return 10; // 0x3c6 Return
	
Label_943:
	var_138_int = 1; // 0x3af PushI
	var_117_int = var_117_int + var_138_int; // 0x3b0 Add2
	goto Label_933; // 0x3b1 Jump
}


func_1186(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4a2 PushV
	GetDiaryRoot(var_33_object); // 0x4a3 Func
	var_34_bool = var_33_object == 0; // 0x4a5 Not
	if(var_34_bool == 0) goto Label_1196; // 0x4a6 JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4a7 PushS
	Trace(var_35_string); // 0x4a8 Func
	var_31_object = 0; // 0x4aa MovB
	return 2; // 0x4ab Return
	
Label_1196:
	var_31_object = var_33_object; // 0x4ac Mov
	return 2; // 0x4ad Return
}


func_677()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2a5 PushV
	WaitForAnimEnd(); // 0x2a6 Func
	var_23_bool = 0; // 0x2a8 PushV
	func_780(var_23_bool); // 0x2a9 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2ab Not
	if(var_24_bool == 0) goto Label_686; // 0x2ac JumpB
	return 12; // 0x2ad Return
	
Label_686:
	var_25_int = 0; // 0x2ae PushV
	func_1112(var_25_int); // 0x2af NEW_2
	var_17_int = var_25_int; // 0x2b0 Mov
	var_18_int = 0; // 0x2b2 MovI
	
Label_691:
	var_38_bool = 0; // 0x2b3 PushV
	var_38_bool = 0; // 0x2b4 MovB
	var_39_int = 5; // 0x2b5 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2b6 LT
	if(var_40_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_41_bool = 0; // 0x2b8 PushV
	func_780(var_41_bool); // 0x2b9 NEW_2
	if(var_41_bool == 0) goto Label_701; // 0x2bb JumpB
	var_38_bool = 1; // 0x2bc MovB
	
Label_701:
	if(var_38_bool == 0) goto Label_743; // 0x2bd JumpB
	var_42_bool = var_17_int == 0; // 0x2be Not
	if(var_42_bool == 0) goto Label_711; // 0x2bf JumpB
	var_43_int = 3; // 0x2c0 PushI
	Sleep(var_43_int, var_19_bool); // 0x2c1 Func
	var_44_bool = var_19_bool == 0; // 0x2c3 Not
	if(var_44_bool == 0) goto Label_710; // 0x2c4 JumpB
	goto Label_743; // 0x2c5 Jump
	
Label_743:
	ResetAAS(); // 0x2e7 Func
	return 12; // 0x2e9 Return
	
Label_710:
	goto Label_732; // 0x2c6 Jump
	
Label_732:
	var_45_bool = 0; // 0x2dc PushV
	func_746(var_45_bool); // 0x2dd NEW_2
	var_46_bool = var_45_bool == 0; // 0x2df Not
	if(var_46_bool == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_743; // 0x2e1 Jump
	
Label_738:
	ResetAAS(); // 0x2e2 Func
	var_47_int = 1; // 0x2e4 PushI
	var_18_int = var_18_int + var_47_int; // 0x2e5 Add2
	goto Label_691; // 0x2e6 Jump
	
Label_711:
	irand(var_20_int, var_17_int); // 0x2c7 Func
	var_48_int = 5; // 0x2c9 PushI
	irand(var_21_int, var_48_int); // 0x2ca Func
	var_49_int = 0; // 0x2cc PushI
	var_50_bool = var_21_int != var_49_int; // 0x2cd Neq
	if(var_50_bool == 0) goto Label_720; // 0x2ce JumpB
	var_20_int = 0; // 0x2cf MovI
	
Label_720:
	var_51_string = "all"; // 0x2d0 PushS
	var_52_string = ""; var_53_int = 0; // 0x2d1 PushV
	var_53_int = var_20_int; // 0x2d2 Mov
	func_1105(var_52_string, var_53_int); // 0x2d3 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2d5 Func
	WaitForAnimEnd(var_22_bool); // 0x2d7 Func
	var_54_bool = var_22_bool == 0; // 0x2d9 Not
	if(var_54_bool == 0) goto Label_732; // 0x2da JumpB
	goto Label_743; // 0x2db Jump
}


func_1063(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x427 PushV
	self(var_102_object); // 0x428 Func
	var_100_object = var_102_object; // 0x42a Mov
	return 2; // 0x42b Return
}


func_557()
{
	var_261_float = 0; var_262_float = 0; // 0x22d PushV
	var_263_int = 8; // 0x22e PushI
	var_264_int = 16; // 0x22f PushI
	rand(var_262_float, var_263_int, var_264_int); // 0x230 Func
	var_265_int = 10; // 0x232 PushI
	SetTimer(var_265_int, var_262_float); // 0x233 Func
	return 2; // 0x235 Return
}


func_1069(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x42d PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x42e Or
	var_68_float = sqrt(var_69_int); // 0x42f Sqrt2
	var_70_float = 0.0; // 0x430 PushF
	var_71_bool = var_68_float < var_70_float; // 0x431 LT
	if(var_71_bool == 0) goto Label_1077; // 0x432 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x433 MovV
	return 2; // 0x434 Return
	
Label_1077:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x435 Div2
	return 2; // 0x436 Return
}


func_1199(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4af PushV
	var_31_object = Obj(); // 0x4b0 PushV
	func_1186(var_31_object); // 0x4b1 NEW_2
	var_28_object = var_31_object; // 0x4b2 Mov
	Find(var_24_int, var_29_object); // 0x4b4 ObjFunc
	var_36_bool = var_29_object == 0; // 0x4b6 Not
	if(var_36_bool == 0) goto Label_1214; // 0x4b7 JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4b8 PushS
	var_38_int = var_37_string + var_24_int; // 0x4b9 Add
	Trace(var_38_int); // 0x4ba Func
	var_22_bool = 0; // 0x4bc MovB
	return 6; // 0x4bd Return
	
Label_1214:
	AddChild(var_23_object); // 0x4be ObjFunc
	var_39_int = 7; // 0x4c0 PushI
	SendWorldWndMessage(var_39_int); // 0x4c1 Func
	GetCategory(var_30_int); // 0x4c3 ObjFunc
	SetDiarySection(var_30_int); // 0x4c5 Func
	var_22_bool = 0; // 0x4c7 MovB
	return 6; // 0x4c8 Return
}


func_566()
{
	var_260_int = 10; // 0x236 PushI
	KillTimer(var_260_int); // 0x237 Func
	return 0; // 0x239 Return
}


func_1079(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x437 PushV
	GetVariable(var_221_string, var_223_int); // 0x438 Func
	var_220_int = var_223_int; // 0x43a Mov
	return 2; // 0x43b Return
}


func_1084(var_56_bool, var_57_string, var_58_string)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x43c PushV
	FindActor(var_60_object, var_57_string); // 0x43d Func
	var_61_bool = var_60_object == 0; // 0x43f NullEq
	if(var_61_bool == 0) goto Label_1091; // 0x440 JumpB
	var_56_bool = 0; // 0x441 MovB
	return 2; // 0x442 Return
	
Label_1091:
	Trigger(var_60_object, var_58_string); // 0x443 Func
	var_56_bool = 1; // 0x445 MovB
	return 2; // 0x446 Return
}


func_452(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1c5 PushV
	var_27_object = var_25_object; // 0x1c6 Mov
	TaskCall(0); // 0x1c7 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1c8 NEW_2
	TaskReturn(); // 0x1c9 TaskReturn
	return 0; // 0x1cb Return
}


func_967(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3c7 PushV
	var_152_string = "d"; // 0x3c8 PushS
	var_153_int = 0; // 0x3c9 PushV
	func_1096(var_153_int); // 0x3ca NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3cc Add
	var_160_string = "m"; // 0x3cd PushS
	var_147_string = var_159_int + var_160_string; // 0x3ce Add2
	var_148_int = 0; // 0x3cf MovI
	
Label_976:
	var_161_int = 1; // 0x3d0 PushI
	if(var_161_int == 0) goto Label_989; // 0x3d1 JumpB
	var_162_int = 1; // 0x3d2 PushI
	var_163_int = var_148_int + var_162_int; // 0x3d3 Add
	var_164_int = var_147_string + var_163_int; // 0x3d4 Add
	HasProperty(var_164_int, var_149_bool); // 0x3d5 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3d7 Not
	if(var_165_bool == 0) goto Label_986; // 0x3d8 JumpB
	goto Label_989; // 0x3d9 Jump
	
Label_989:
	var_166_bool = var_148_int == 0; // 0x3dd Not
	if(var_166_bool == 0) goto Label_993; // 0x3de JumpB
	var_140_bool = 0; // 0x3df MovB
	return 10; // 0x3e0 Return
	
Label_993:
	var_150_int = 0; // 0x3e1 MovI
	var_167_int = 1; // 0x3e2 PushI
	var_168_bool = var_148_int > var_167_int; // 0x3e3 GT
	if(var_168_bool == 0) goto Label_999; // 0x3e4 JumpB
	irand(var_150_int, var_148_int); // 0x3e5 Func
	
Label_999:
	var_169_int = 1; // 0x3e7 PushI
	var_170_int = var_150_int + var_169_int; // 0x3e8 Add
	var_171_int = var_147_string + var_170_int; // 0x3e9 Add
	GetProperty(var_171_int, var_151_string); // 0x3ea ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x3ec PushV
	var_173_string = var_151_string; // 0x3ed Mov
	func_1041(var_172_bool, var_173_string); // 0x3ee NEW_2
	var_140_bool = var_172_bool; // 0x3ef Mov
	return 10; // 0x3f1 Return
	
Label_986:
	var_174_int = 1; // 0x3da PushI
	var_148_int = var_148_int + var_174_int; // 0x3db Add2
	goto Label_976; // 0x3dc Jump
}


func_1096(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x448 PushV
	GetGameTime(var_155_float); // 0x449 Func
	var_156_int = 1; // 0x44b PushI
	var_157_int = 0; // 0x44c PushV
	var_158_int = 24; // 0x44d PushI
	var_157_int = var_155_float / var_155_float; // 0x44e Div2
	var_153_int = var_156_int + var_157_int; // 0x44f Add2
	return 2; // 0x450 Return
}


func_1227(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4cb PushV
	var_92_string = "branch"; // 0x4cc PushS
	GetVariable(var_92_string, var_91_int); // 0x4cd Func
	var_93_int = 0; // 0x4cf PushI
	var_94_bool = var_91_int == var_93_int; // 0x4d0 Eq
	if(var_94_bool == 0) goto Label_1237; // 0x4d1 JumpB
	var_89_int = 1; // 0x4d2 MovI
	return 2; // 0x4d3 Return
	
Label_1237:
	var_95_int = 1; // 0x4d5 PushI
	var_96_bool = var_91_int == var_95_int; // 0x4d6 Eq
	if(var_96_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_89_int = 2; // 0x4d8 MovI
	return 2; // 0x4d9 Return
	
Label_1242:
	var_89_int = 3; // 0x4da MovI
	return 2; // 0x4db Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_114; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_144(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 527220; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1148(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 527221; // 0x65 PushI
	var_227_int = 28839; // 0x66 PushI
	var_228_int = 28529; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_int = 527224; // 0x6a PushI
	var_230_int = -1; // 0x6b PushI
	var_231_int = 28532; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_232_bool = 0; // 0x72 PushV
	func_1252(var_232_bool); // 0x73 NEW_2
	if(var_232_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_233_string = var_3_string; // 0x78 PushT
	if(var_233_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_234_string = ""; // 0x7b PushV
	var_234_string = var_2_object; // 0x7c MovT
	func_1010(var_234_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_245_string = "all"; // 0x81 PushS
	var_246_string = "idle"; // 0x82 PushS
	PlayAnimation(var_245_string, var_246_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_247_string = var_3_string; // 0x87 PushT
	if(var_247_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_248_string = "all"; // 0x8a PushS
	var_249_string = "idle"; // 0x8b PushS
	PlayAnimation(var_248_string, var_249_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_1105(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x451 PushV
	var_34_string = "idle"; // 0x452 MovS
	var_35_int = var_32_int; // 0x453 Push
	if(var_35_int == 0) goto Label_1110; // 0x454 JumpB
	var_34_string = var_34_string + var_32_int; // 0x455 Add2
	
Label_1110:
	var_31_string = var_34_string; // 0x456 Mov
	return 2; // 0x457 Return
}


func_854()
{
	var_252_bool = 0; var_253_bool = 0; // 0x356 PushV
	var_254_bool = 1; // 0x357 PushB
	CameraSwitchToNormal(var_254_bool); // 0x358 Func
	var_255_bool = 0; // 0x35a PushV
	func_1252(var_255_bool); // 0x35b NEW_2
	if(var_255_bool == 0) goto Label_863; // 0x35d JumpB
	goto Label_871; // 0x35e Jump
	
Label_871:
	return 2; // 0x367 Return
	
Label_863:
	var_256_string = "head"; // 0x35f PushS
	HasAnimationTrack(var_253_bool, var_256_string); // 0x360 Func
	var_257_bool = var_253_bool; // 0x362 Push
	if(var_257_bool == 0) goto Label_871; // 0x363 JumpB
	var_258_string = "head"; // 0x364 PushS
	UnlookAsync(var_258_string); // 0x365 Func
}


func_1112(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x458 PushV
	var_28_int = 0; // 0x459 MovI
	
Label_1114:
	var_30_string = "all"; // 0x45a PushS
	var_31_string = ""; var_32_int = 0; // 0x45b PushV
	var_32_int = var_28_int; // 0x45c Mov
	func_1105(var_31_string, var_32_int); // 0x45d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x45f Func
	var_36_bool = var_29_bool == 0; // 0x461 Not
	if(var_36_bool == 0) goto Label_1124; // 0x462 JumpB
	goto Label_1127; // 0x463 Jump
	
Label_1127:
	var_25_int = var_28_int; // 0x467 Mov
	return 4; // 0x468 Return
	
Label_1124:
	var_37_int = 1; // 0x464 PushI
	var_28_int = var_28_int + var_37_int; // 0x465 Add2
	goto Label_1114; // 0x466 Jump
}


func_1244(var_86_int)
{
	var_86_int = 515592; // 0x4dc MovI
	return 0; // 0x4dd Return
}


func_1246(var_85_int)
{
	var_85_int = 511961; // 0x4de MovI
	return 0; // 0x4df Return
}


func_1248(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x4e0 MovS
	return 0; // 0x4e1 Return
}


func_608()
{
	func_748(); // 0x261 NEW_2
	func_566(); // 0x264 NEW_2
	lshStopSpeech(); // 0x266 Func
	lshStopAnimation(); // 0x268 Func
	StopAsync(); // 0x26a Func
	Hold(); // 0x26c Func
	return 0; // 0x26e Return
}


func_1250(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x4e2 MovS
	return 0; // 0x4e3 Return
}


func_1252(var_80_bool)
{
	var_80_bool = 1; // 0x4e4 MovB
	return 0; // 0x4e5 Return
}


func_872(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x368 PushV
	var_107_string = "voice_common"; // 0x369 PushS
	GetVariable(var_107_string, var_105_int); // 0x36a Func
	var_108_int = var_105_int; // 0x36c Push
	if(var_108_int == 0) goto Label_910; // 0x36d JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x36e PushV
	var_110_object = var_99_object; // 0x36f Mov
	func_930(var_110_object); // 0x370 NEW_2
	var_139_bool = var_109_bool == 0; // 0x372 Not
	if(var_139_bool == 0) goto Label_892; // 0x373 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x374 PushV
	var_141_object = var_99_object; // 0x375 Mov
	func_967(var_141_object); // 0x376 NEW_2
	var_175_bool = var_140_bool == 0; // 0x378 Not
	if(var_175_bool == 0) goto Label_892; // 0x379 JumpB
	var_98_bool = 0; // 0x37a MovB
	return 4; // 0x37b Return
	
Label_892:
	var_176_int = 2; // 0x37c PushI
	irand(var_106_int, var_176_int); // 0x37d Func
	var_177_int = var_106_int; // 0x37f Push
	if(var_177_int == 0) goto Label_905; // 0x380 JumpB
	var_178_string = "voice_common"; // 0x381 PushS
	var_179_int = 1; // 0x382 PushI
	var_180_int = var_105_int + var_179_int; // 0x383 Add
	var_181_int = 3; // 0x384 PushI
	var_182_int = var_180_int / var_181_int; // 0x385 Mod
	SetVariable(var_178_string, var_182_int); // 0x386 Func
	goto Label_909; // 0x388 Jump
	
Label_909:
	goto Label_928; // 0x38d Jump
	
Label_928:
	var_98_bool = 1; // 0x3a0 MovB
	return 4; // 0x3a1 Return
	
Label_905:
	var_183_string = "voice_common"; // 0x389 PushS
	var_184_int = 0; // 0x38a PushI
	SetVariable(var_183_string, var_184_int); // 0x38b Func
	
Label_910:
	var_185_bool = 0; var_186_object = Obj(); // 0x38e PushV
	var_186_object = var_99_object; // 0x38f Mov
	func_967(var_186_object); // 0x390 NEW_2
	var_187_bool = var_185_bool == 0; // 0x392 Not
	if(var_187_bool == 0) goto Label_924; // 0x393 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x394 PushV
	var_189_object = var_99_object; // 0x395 Mov
	func_930(var_189_object); // 0x396 NEW_2
	var_190_bool = var_188_bool == 0; // 0x398 Not
	if(var_190_bool == 0) goto Label_924; // 0x399 JumpB
	var_98_bool = 0; // 0x39a MovB
	return 4; // 0x39b Return
	
Label_924:
	var_191_string = "voice_common"; // 0x39c PushS
	var_192_int = 1; // 0x39d PushI
	SetVariable(var_191_string, var_192_int); // 0x39e Func
}


func_1129()
{
	var_15_string = "k11q01"; // 0x46a PushS
	var_16_int = 7; // 0x46b PushI
	SetVariable(var_15_string, var_16_int); // 0x46c Func
	func_1173(); // 0x46f NEW_2
	return 0; // 0x471 Return
}


func_746(var_45_bool)
{
	var_45_bool = 1; // 0x2ea MovB
	return 0; // 0x2eb Return
}


func_748()
{
	StopAnimation(); // 0x2ec Func
	StopGroup0(); // 0x2ee Func
	return 0; // 0x2f0 Return
}


func_623()
{
	StopGroup0(); // 0x26f Func
	func_566(); // 0x272 NEW_2
	var_8_string = ""; // 0x274 PushV
	var_8_string = "Neutral"; // 0x275 MovS
	func_1010(var_8_string); // 0x276 NEW_2
	func_557(); // 0x279 NEW_2
	return 0; // 0x27b Return
}


func_753(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x2f1 PushV
	GetPosition(var_27_cvector); // 0x2f2 Func
	GetPosition(var_28_cvector); // 0x2f4 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x2f6 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x2f7 Or2
	return 6; // 0x2f8 Return
}


func_1010(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x3f2 PushV
	lshHasAnimation(var_238_bool, var_234_string); // 0x3f3 Func
	var_241_bool = var_238_bool; // 0x3f5 Push
	if(var_241_bool == 0) goto Label_1021; // 0x3f6 JumpB
	lshGetAnimTimes(var_234_string, var_239_float, var_240_float); // 0x3f7 Func
	var_242_bool = 0; // 0x3f9 PushB
	lshPlayAnimation(var_239_float, var_240_float, var_242_bool); // 0x3fa Func
	goto Label_1025; // 0x3fc Jump
	
Label_1025:
	return 6; // 0x401 Return
	
Label_1021:
	var_243_string = "Can't find lsh animation : "; // 0x3fd PushS
	var_244_int = var_243_string + var_234_string; // 0x3fe Add
	Trace(var_244_int); // 0x3ff Func
}


func_1138()
{
	func_1160(); // 0x474 NEW_2
	var_56_bool = 0; var_57_string = ""; var_58_string = ""; // 0x476 PushV
	var_57_string = "quest_k11_01"; // 0x477 MovS
	var_58_string = "fail"; // 0x478 MovS
	func_1084(var_56_bool, var_57_string, var_58_string); // 0x479 NEW_2
	return 0; // 0x47b Return
}


func_501(var_0_object)
{
	var_7_bool = 0; // 0x1f5 PushV
	func_780(var_7_bool); // 0x1f6 NEW_2
	var_10_bool = var_7_bool == 0; // 0x1f8 Not
	if(var_10_bool == 0) goto Label_508; // 0x1f9 JumpB
	Hold(); // 0x1fa Func
	
Label_508:
	GetDirection(var_0_object); // 0x1fc Func
	
Label_510:
	func_677(); // 0x1ff NEW_2
	goto Label_510; // 0x201 Jump
}


func_761(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x2f9 PushV
	GetPosition(var_20_cvector); // 0x2fa Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x2fc Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x2fd PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x2fe PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x2ff Func
	var_15_bool = var_22_bool; // 0x301 Mov
	return 6; // 0x302 Return
}


func_1148(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x47d PushV
	var_221_string = "k11q01"; // 0x47e MovS
	func_1079(var_220_int, var_221_string); // 0x47f NEW_2
	var_224_int = 6; // 0x481 PushI
	var_225_bool = var_220_int == var_224_int; // 0x482 Eq
	if(var_225_bool == 0) goto Label_1158; // 0x483 JumpB
	var_218_bool = 1; // 0x484 MovB
	return 0; // 0x485 Return
	
Label_1158:
	var_218_bool = 0; // 0x486 MovB
	return 0; // 0x487 Return
}


