task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xb1 PushI
	if(var_9_int == 0) goto Label_479; // 0xb2 JumpB
	func_1084(); // 0xb4 NEW_2
	var_11_int = 15199; // 0xb6 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb7 Eq
	if(var_12_bool == 0) goto Label_190; // 0xb8 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb9 PushV
	var_13_object = var_1_object; // 0xba MovT
	var_14_object = var_0_object; // 0xbb MovT
	func_1155(); // 0xbc NEW_2
	
Label_190:
	var_40_int = 40555; // 0xbe PushI
	var_41_bool = var_8_bool == var_40_int; // 0xbf Eq
	if(var_41_bool == 0) goto Label_198; // 0xc0 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xc1 PushV
	var_42_object = var_1_object; // 0xc2 MovT
	var_43_object = var_0_object; // 0xc3 MovT
	func_1155(); // 0xc4 NEW_2
	
Label_198:
	var_44_int = 40548; // 0xc6 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xc7 Eq
	if(var_45_bool == 0) goto Label_206; // 0xc8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc9 PushV
	var_46_object = var_1_object; // 0xca MovT
	var_47_object = var_0_object; // 0xcb MovT
	func_1155(); // 0xcc NEW_2
	
Label_206:
	var_48_int = 15212; // 0xce PushI
	var_49_bool = var_8_bool == var_48_int; // 0xcf Eq
	if(var_49_bool == 0) goto Label_214; // 0xd0 JumpB
	var_50_object = Obj(); var_51_object = Obj(); // 0xd1 PushV
	var_50_object = var_1_object; // 0xd2 MovT
	var_51_object = var_0_object; // 0xd3 MovT
	func_1164(); // 0xd4 NEW_2
	
Label_214:
	var_54_int = 15184; // 0xd6 PushI
	var_55_bool = var_7_cvector == var_54_int; // 0xd7 Eq
	if(var_55_bool == 0) goto Label_252; // 0xd8 JumpB
	var_56_string = ""; // 0xd9 PushV
	var_56_string = "Neutral"; // 0xda MovS
	func_154(var_8_bool, var_56_string); // 0xdb NEW_2
	var_73_int = 513949; // 0xdd PushI
	SetMessage(var_73_int); // 0xde TObjFunc
	ClearReplies(); // 0xe0 TObjFunc
	var_74_bool = 0; var_75_object = Obj(); // 0xe2 PushV
	var_75_object = var_1_object; // 0xe3 MovT
	func_1170(var_75_object); // 0xe4 NEW_2
	if(var_74_bool == 0) goto Label_236; // 0xe6 JumpB
	var_82_int = 513950; // 0xe7 PushI
	var_83_int = 15186; // 0xe8 PushI
	var_84_int = 15185; // 0xe9 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xea TObjFunc
	
Label_236:
	var_85_bool = 0; var_86_object = Obj(); // 0xec PushV
	var_86_object = var_1_object; // 0xed MovT
	func_1182(var_86_object); // 0xee NEW_2
	if(var_85_bool == 0) goto Label_246; // 0xf0 JumpB
	var_91_int = 513977; // 0xf1 PushI
	var_92_int = 15213; // 0xf2 PushI
	var_93_int = 15212; // 0xf3 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xf4 TObjFunc
	
Label_246:
	var_94_int = 513980; // 0xf6 PushI
	var_95_int = -1; // 0xf7 PushI
	var_96_int = 15215; // 0xf8 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_97_int = 15213; // 0xfc PushI
	var_98_bool = var_7_cvector == var_97_int; // 0xfd Eq
	if(var_98_bool == 0) goto Label_275; // 0xfe JumpB
	var_99_string = ""; // 0xff PushV
	var_99_string = "Smile"; // 0x100 MovS
	func_154(var_8_bool, var_99_string); // 0x101 NEW_2
	var_100_int = 513978; // 0x103 PushI
	SetMessage(var_100_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_101_int = 513979; // 0x108 PushI
	var_102_int = -1; // 0x109 PushI
	var_103_int = 15214; // 0x10a PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x10b TObjFunc
	var_104_int = 538655; // 0x10d PushI
	var_105_int = -1; // 0x10e PushI
	var_106_int = 40549; // 0x10f PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_107_int = 15186; // 0x113 PushI
	var_108_bool = var_7_cvector == var_107_int; // 0x114 Eq
	if(var_108_bool == 0) goto Label_298; // 0x115 JumpB
	var_109_string = ""; // 0x116 PushV
	var_109_string = "Sorrow"; // 0x117 MovS
	func_154(var_8_bool, var_109_string); // 0x118 NEW_2
	var_110_int = 513951; // 0x11a PushI
	SetMessage(var_110_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_111_int = 513952; // 0x11f PushI
	var_112_int = 15188; // 0x120 PushI
	var_113_int = 15187; // 0x121 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x122 TObjFunc
	var_114_int = 538654; // 0x124 PushI
	var_115_int = -1; // 0x125 PushI
	var_116_int = 40548; // 0x126 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_117_int = 15188; // 0x12a PushI
	var_118_bool = var_7_cvector == var_117_int; // 0x12b Eq
	if(var_118_bool == 0) goto Label_316; // 0x12c JumpB
	var_119_string = ""; // 0x12d PushV
	var_119_string = "Sorrow"; // 0x12e MovS
	func_154(var_8_bool, var_119_string); // 0x12f NEW_2
	var_120_int = 513953; // 0x131 PushI
	SetMessage(var_120_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_121_int = 513954; // 0x136 PushI
	var_122_int = 15190; // 0x137 PushI
	var_123_int = 15189; // 0x138 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x139 TObjFunc
	return 0; // 0x13b Return
	
Label_316:
	var_124_int = 15190; // 0x13c PushI
	var_125_bool = var_7_cvector == var_124_int; // 0x13d Eq
	if(var_125_bool == 0) goto Label_339; // 0x13e JumpB
	var_126_string = ""; // 0x13f PushV
	var_126_string = "Neutral"; // 0x140 MovS
	func_154(var_8_bool, var_126_string); // 0x141 NEW_2
	var_127_int = 513955; // 0x143 PushI
	SetMessage(var_127_int); // 0x144 TObjFunc
	ClearReplies(); // 0x146 TObjFunc
	var_128_int = 538657; // 0x148 PushI
	var_129_int = 40553; // 0x149 PushI
	var_130_int = 40551; // 0x14a PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x14b TObjFunc
	var_131_int = 538658; // 0x14d PushI
	var_132_int = 40554; // 0x14e PushI
	var_133_int = 40552; // 0x14f PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x150 TObjFunc
	return 0; // 0x152 Return
	
Label_339:
	var_134_int = 40554; // 0x153 PushI
	var_135_bool = var_7_cvector == var_134_int; // 0x154 Eq
	if(var_135_bool == 0) goto Label_362; // 0x155 JumpB
	var_136_string = ""; // 0x156 PushV
	var_136_string = "Neutral"; // 0x157 MovS
	func_154(var_8_bool, var_136_string); // 0x158 NEW_2
	var_137_int = 538660; // 0x15a PushI
	SetMessage(var_137_int); // 0x15b TObjFunc
	ClearReplies(); // 0x15d TObjFunc
	var_138_int = 538661; // 0x15f PushI
	var_139_int = -1; // 0x160 PushI
	var_140_int = 40555; // 0x161 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x162 TObjFunc
	var_141_int = 538662; // 0x164 PushI
	var_142_int = 40553; // 0x165 PushI
	var_143_int = 40556; // 0x166 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x167 TObjFunc
	return 0; // 0x169 Return
	
Label_362:
	var_144_int = 40553; // 0x16a PushI
	var_145_bool = var_7_cvector == var_144_int; // 0x16b Eq
	if(var_145_bool == 0) goto Label_385; // 0x16c JumpB
	var_146_string = ""; // 0x16d PushV
	var_146_string = "Neutral"; // 0x16e MovS
	func_154(var_8_bool, var_146_string); // 0x16f NEW_2
	var_147_int = 538659; // 0x171 PushI
	SetMessage(var_147_int); // 0x172 TObjFunc
	ClearReplies(); // 0x174 TObjFunc
	var_148_int = 513956; // 0x176 PushI
	var_149_int = 15192; // 0x177 PushI
	var_150_int = 15191; // 0x178 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x179 TObjFunc
	var_151_int = 538663; // 0x17b PushI
	var_152_int = 15194; // 0x17c PushI
	var_153_int = 40558; // 0x17d PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x17e TObjFunc
	return 0; // 0x180 Return
	
Label_385:
	var_154_int = 15192; // 0x181 PushI
	var_155_bool = var_7_cvector == var_154_int; // 0x182 Eq
	if(var_155_bool == 0) goto Label_408; // 0x183 JumpB
	var_156_string = ""; // 0x184 PushV
	var_156_string = "Doubt"; // 0x185 MovS
	func_154(var_8_bool, var_156_string); // 0x186 NEW_2
	var_157_int = 513957; // 0x188 PushI
	SetMessage(var_157_int); // 0x189 TObjFunc
	ClearReplies(); // 0x18b TObjFunc
	var_158_int = 513958; // 0x18d PushI
	var_159_int = 15194; // 0x18e PushI
	var_160_int = 15193; // 0x18f PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x190 TObjFunc
	var_161_int = 538664; // 0x192 PushI
	var_162_int = 15196; // 0x193 PushI
	var_163_int = 40560; // 0x194 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_164_int = 15194; // 0x198 PushI
	var_165_bool = var_7_cvector == var_164_int; // 0x199 Eq
	if(var_165_bool == 0) goto Label_426; // 0x19a JumpB
	var_166_string = ""; // 0x19b PushV
	var_166_string = "Agression"; // 0x19c MovS
	func_154(var_8_bool, var_166_string); // 0x19d NEW_2
	var_167_int = 513959; // 0x19f PushI
	SetMessage(var_167_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_168_int = 513960; // 0x1a4 PushI
	var_169_int = 15196; // 0x1a5 PushI
	var_170_int = 15195; // 0x1a6 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_171_int = 15196; // 0x1aa PushI
	var_172_bool = var_7_cvector == var_171_int; // 0x1ab Eq
	if(var_172_bool == 0) goto Label_449; // 0x1ac JumpB
	var_173_string = ""; // 0x1ad PushV
	var_173_string = "Agression"; // 0x1ae MovS
	func_154(var_8_bool, var_173_string); // 0x1af NEW_2
	var_174_int = 513961; // 0x1b1 PushI
	SetMessage(var_174_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_175_int = 513962; // 0x1b6 PushI
	var_176_int = 15198; // 0x1b7 PushI
	var_177_int = 15197; // 0x1b8 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1b9 TObjFunc
	var_178_int = 538665; // 0x1bb PushI
	var_179_int = 15198; // 0x1bc PushI
	var_180_int = 40562; // 0x1bd PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_181_int = 15198; // 0x1c1 PushI
	var_182_bool = var_7_cvector == var_181_int; // 0x1c2 Eq
	if(var_182_bool == 0) goto Label_467; // 0x1c3 JumpB
	var_183_string = ""; // 0x1c4 PushV
	var_183_string = "Doubt"; // 0x1c5 MovS
	func_154(var_8_bool, var_183_string); // 0x1c6 NEW_2
	var_184_int = 513963; // 0x1c8 PushI
	SetMessage(var_184_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_185_int = 513964; // 0x1cd PushI
	var_186_int = -1; // 0x1ce PushI
	var_187_int = 15199; // 0x1cf PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_3_string = 1; // 0x1d3 TMovB
	var_188_bool = 0; // 0x1d4 PushV
	func_1153(var_188_bool); // 0x1d5 NEW_2
	if(var_188_bool == 0) goto Label_475; // 0x1d7 JumpB
	lshStopAnimation(); // 0x1d8 Func
	goto Label_477; // 0x1da Jump
	
Label_477:
	return 0; // 0x1dd Return
	
Label_475:
	StopAnimation(); // 0x1db Func
	
Label_479:
	return 0; // 0x1df Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x1ec PushV
	var_10_string = "cleanup"; // 0x1ed PushS
	var_11_bool = var_7_string == var_10_string; // 0x1ee Eq
	if(var_11_bool == 0) goto Label_507; // 0x1ef JumpB
	var_1_object = 1; // 0x1f0 TMovB
	IsLoaded(var_9_bool); // 0x1f1 Func
	var_12_bool = var_9_bool == 0; // 0x1f3 Not
	if(var_12_bool == 0) goto Label_506; // 0x1f4 JumpB
	var_13_object = Obj(); // 0x1f5 PushV
	func_1091(var_13_object); // 0x1f6 NEW_2
	RemoveActor(var_13_object); // 0x1f8 Func
	
Label_506:
	goto Label_511; // 0x1fa Jump
	
Label_511:
	return 2; // 0x1ff Return
	
Label_507:
	var_16_string = "restore"; // 0x1fb PushS
	var_17_bool = var_7_string == var_16_string; // 0x1fc Eq
	if(var_17_bool == 0) goto Label_511; // 0x1fd JumpB
	var_1_object = 0; // 0x1fe TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x200 PushT
	if(var_7_object == 0) goto Label_521; // 0x201 JumpB
	var_8_object = Obj(); // 0x202 PushV
	func_1091(var_8_object); // 0x203 NEW_2
	RemoveActor(var_8_object); // 0x205 Func
	Hold(); // 0x207 Func
	
Label_521:
	func_636(); // 0x20a NEW_2
	return 0; // 0x20c Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_651(); // 0x20e NEW_2
	return 0; // 0x210 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x257 PushI
	var_9_bool = var_7_int == var_8_int; // 0x258 Eq
	if(var_9_bool == 0) goto Label_635; // 0x259 JumpB
	func_594(); // 0x25b NEW_2
	var_11_bool = 0; // 0x25d PushV
	var_11_bool = 0; // 0x25e MovB
	var_12_bool = 0; // 0x25f PushV
	func_808(var_12_bool); // 0x260 NEW_2
	if(var_12_bool == 0) goto Label_616; // 0x262 JumpB
	var_15_bool = 0; // 0x263 PushV
	func_563(var_15_bool); // 0x264 NEW_2
	if(var_15_bool == 0) goto Label_616; // 0x266 JumpB
	var_11_bool = 1; // 0x267 MovB
	
Label_616:
	if(var_11_bool == 0) goto Label_629; // 0x268 JumpB
	var_32_bool = 0; // 0x269 PushV
	func_543(var_32_bool); // 0x26a NEW_2
	if(var_32_bool == 0) goto Label_628; // 0x26c JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x26d PushV
	var_53_object = Obj(); // 0x26e PushV
	func_1091(var_53_object); // 0x26f NEW_2
	var_52_object = var_53_object; // 0x270 Mov
	func_958(var_52_object); // 0x272 NEW_2
	
Label_628:
	goto Label_635; // 0x274 Jump
	
Label_635:
	return 0; // 0x27b Return
	
Label_629:
	func_558(var_7_int); // 0x276 NEW_2
	func_585(); // 0x279 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x299 Push
	if(var_8_bool == 0) goto Label_671; // 0x29a JumpB
	func_585(); // 0x29c NEW_2
	goto Label_675; // 0x29e Jump
	
Label_675:
	return 0; // 0x2a3 Return
	
Label_671:
	var_14_string = ""; // 0x29f PushV
	var_14_string = "Neutral"; // 0x2a0 MovS
	func_1038(var_14_string); // 0x2a1 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2a4 PushV
	IsOverrideActive(var_9_bool); // 0x2a5 Func
	var_10_bool = var_9_bool == 0; // 0x2a7 Not
	if(var_10_bool == 0) goto Label_704; // 0x2a8 JumpB
	EventDisable(0); // 0x2a9 EventDisable
	func_776(); // 0x2ab NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2ad PushV
	var_12_object = var_7_object; // 0x2ae Mov
	func_799(var_12_object); // 0x2af NEW_2
	EventEnable(0); // 0x2b1 EventEnable
	var_25_object = Obj(); // 0x2b2 PushV
	var_25_object = var_7_object; // 0x2b3 Mov
	func_480(var_25_object); // 0x2b4 NEW_2
	var_268_string = ""; // 0x2b6 PushV
	var_268_string = "Neutral"; // 0x2b7 MovS
	func_1038(var_268_string); // 0x2b8 NEW_2
	func_594(); // 0x2bb NEW_2
	func_585(); // 0x2be NEW_2
	
Label_704:
	return 2; // 0x2c0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_529(var_6_bool); // 0x1e9 NEW_2
	return 0; // 0x1eb Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_813(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1147(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1145(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1149(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1151(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1248(var_89_int); // 0x22 NEW_2
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
	func_1091(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_900(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_259_bool = var_36_bool == 0; // 0x3f Not
	if(var_259_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_260_object = Obj(); // 0x46 PushV
	var_260_object = var_27_object; // 0x47 Mov
	func_882(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1153(var_80_bool)
{
	var_80_bool = 1; // 0x481 MovB
	return 0; // 0x482 Return
}


func_1155()
{
	var_15_string = "d9q05"; // 0x484 PushS
	var_16_int = 2; // 0x485 PushI
	SetVariable(var_15_string, var_16_int); // 0x486 Func
	func_1194(); // 0x489 NEW_2
	return 0; // 0x48b Return
}


func_900(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x384 PushV
	var_107_string = "voice_common"; // 0x385 PushS
	GetVariable(var_107_string, var_105_int); // 0x386 Func
	var_108_int = var_105_int; // 0x388 Push
	if(var_108_int == 0) goto Label_938; // 0x389 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x38a PushV
	var_110_object = var_99_object; // 0x38b Mov
	func_958(var_110_object); // 0x38c NEW_2
	var_139_bool = var_109_bool == 0; // 0x38e Not
	if(var_139_bool == 0) goto Label_920; // 0x38f JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x390 PushV
	var_141_object = var_99_object; // 0x391 Mov
	func_995(var_141_object); // 0x392 NEW_2
	var_175_bool = var_140_bool == 0; // 0x394 Not
	if(var_175_bool == 0) goto Label_920; // 0x395 JumpB
	var_98_bool = 0; // 0x396 MovB
	return 4; // 0x397 Return
	
Label_920:
	var_176_int = 2; // 0x398 PushI
	irand(var_106_int, var_176_int); // 0x399 Func
	var_177_int = var_106_int; // 0x39b Push
	if(var_177_int == 0) goto Label_933; // 0x39c JumpB
	var_178_string = "voice_common"; // 0x39d PushS
	var_179_int = 1; // 0x39e PushI
	var_180_int = var_105_int + var_179_int; // 0x39f Add
	var_181_int = 3; // 0x3a0 PushI
	var_182_int = var_180_int / var_181_int; // 0x3a1 Mod
	SetVariable(var_178_string, var_182_int); // 0x3a2 Func
	goto Label_937; // 0x3a4 Jump
	
Label_937:
	goto Label_956; // 0x3a9 Jump
	
Label_956:
	var_98_bool = 1; // 0x3bc MovB
	return 4; // 0x3bd Return
	
Label_933:
	var_183_string = "voice_common"; // 0x3a5 PushS
	var_184_int = 0; // 0x3a6 PushI
	SetVariable(var_183_string, var_184_int); // 0x3a7 Func
	
Label_938:
	var_185_bool = 0; var_186_object = Obj(); // 0x3aa PushV
	var_186_object = var_99_object; // 0x3ab Mov
	func_995(var_186_object); // 0x3ac NEW_2
	var_187_bool = var_185_bool == 0; // 0x3ae Not
	if(var_187_bool == 0) goto Label_952; // 0x3af JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3b0 PushV
	var_189_object = var_99_object; // 0x3b1 Mov
	func_958(var_189_object); // 0x3b2 NEW_2
	var_190_bool = var_188_bool == 0; // 0x3b4 Not
	if(var_190_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_98_bool = 0; // 0x3b6 MovB
	return 4; // 0x3b7 Return
	
Label_952:
	var_191_string = "voice_common"; // 0x3b8 PushS
	var_192_int = 1; // 0x3b9 PushI
	SetVariable(var_191_string, var_192_int); // 0x3ba Func
}


func_774(var_45_bool)
{
	var_45_bool = 1; // 0x306 MovB
	return 0; // 0x307 Return
}


func_776()
{
	StopAnimation(); // 0x308 Func
	StopGroup0(); // 0x30a Func
	return 0; // 0x30c Return
}


func_651()
{
	StopGroup0(); // 0x28b Func
	func_594(); // 0x28e NEW_2
	var_8_string = ""; // 0x290 PushV
	var_8_string = "Neutral"; // 0x291 MovS
	func_1038(var_8_string); // 0x292 NEW_2
	func_585(); // 0x295 NEW_2
	return 0; // 0x297 Return
}


func_1164()
{
	var_52_string = "ood9Burah1"; // 0x48d PushS
	var_53_int = 1; // 0x48e PushI
	SetVariable(var_52_string, var_53_int); // 0x48f Func
	return 0; // 0x491 Return
}


func_781(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x30d PushV
	GetPosition(var_27_cvector); // 0x30e Func
	GetPosition(var_28_cvector); // 0x310 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x312 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x313 Or2
	return 6; // 0x314 Return
}


func_1038(var_243_string)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0; // 0x40e PushV
	lshHasAnimation(var_247_bool, var_243_string); // 0x40f Func
	var_250_bool = var_247_bool; // 0x411 Push
	if(var_250_bool == 0) goto Label_1049; // 0x412 JumpB
	lshGetAnimTimes(var_243_string, var_248_float, var_249_float); // 0x413 Func
	var_251_bool = 0; // 0x415 PushB
	lshPlayAnimation(var_248_float, var_249_float, var_251_bool); // 0x416 Func
	goto Label_1053; // 0x418 Jump
	
Label_1053:
	return 6; // 0x41d Return
	
Label_1049:
	var_252_string = "Can't find lsh animation : "; // 0x419 PushS
	var_253_int = var_252_string + var_243_string; // 0x41a Add
	Trace(var_253_int); // 0x41b Func
}


func_529(var_0_object)
{
	var_7_bool = 0; // 0x211 PushV
	func_808(var_7_bool); // 0x212 NEW_2
	var_10_bool = var_7_bool == 0; // 0x214 Not
	if(var_10_bool == 0) goto Label_536; // 0x215 JumpB
	Hold(); // 0x216 Func
	
Label_536:
	GetDirection(var_0_object); // 0x218 Func
	
Label_538:
	func_705(); // 0x21b NEW_2
	goto Label_538; // 0x21d Jump
}


func_1170(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x493 PushV
	var_221_string = "d9q05"; // 0x494 MovS
	func_1107(var_220_int, var_221_string); // 0x495 NEW_2
	var_224_int = 1; // 0x497 PushI
	var_225_bool = var_220_int == var_224_int; // 0x498 Eq
	if(var_225_bool == 0) goto Label_1180; // 0x499 JumpB
	var_218_bool = 1; // 0x49a MovB
	return 0; // 0x49b Return
	
Label_1180:
	var_218_bool = 0; // 0x49c MovB
	return 0; // 0x49d Return
}


func_789(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x315 PushV
	GetPosition(var_20_cvector); // 0x316 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x318 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x319 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x31a PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x31b Func
	var_15_bool = var_22_bool; // 0x31d Mov
	return 6; // 0x31e Return
}


func_154(var_2_object, var_200_string)
{
	var_201_bool = 0; // 0x9b PushV
	func_1153(var_201_bool); // 0x9c NEW_2
	var_202_bool = var_201_bool == 0; // 0x9e Not
	if(var_202_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_203_bool = var_200_string == var_2_object; // 0xa1 Eq
	if(var_203_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_204_string = ""; var_205_bool = 0; // 0xa4 PushV
	var_204_string = var_200_string; // 0xa5 Mov
	var_206_string = ""; // 0xa6 PushS
	var_207_bool = var_200_string == var_206_string; // 0xa7 Eq
	if(var_207_bool == 0) goto Label_171; // 0xa8 JumpB
	var_205_bool = 0; // 0xa9 MovB
	goto Label_172; // 0xaa Jump
	
Label_172:
	func_1054(var_204_string, var_205_bool); // 0xac NEW_2
	var_2_object = var_200_string; // 0xae TMov
	return 0; // 0xaf Return
	
Label_171:
	var_205_bool = 1; // 0xab MovB
}


func_1182(var_229_bool)
{
	var_231_int = 0; var_232_string = ""; // 0x49f PushV
	var_232_string = "ood9Burah1"; // 0x4a0 MovS
	func_1107(var_231_int, var_232_string); // 0x4a1 NEW_2
	var_233_int = 0; // 0x4a3 PushI
	var_234_bool = var_231_int == var_233_int; // 0x4a4 Eq
	if(var_234_bool == 0) goto Label_1192; // 0x4a5 JumpB
	var_229_bool = 1; // 0x4a6 MovB
	return 0; // 0x4a7 Return
	
Label_1192:
	var_229_bool = 0; // 0x4a8 MovB
	return 0; // 0x4a9 Return
}


func_543(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x21f PushV
	var_35_string = "player"; // 0x220 PushS
	FindActor(var_34_object, var_35_string); // 0x221 Func
	var_36_bool = var_34_object == 0; // 0x223 Not
	if(var_36_bool == 0) goto Label_551; // 0x224 JumpB
	var_32_bool = 0; // 0x225 MovB
	return 2; // 0x226 Return
	
Label_551:
	var_37_bool = 0; var_38_object = Obj(); // 0x227 PushV
	var_38_object = var_34_object; // 0x228 Mov
	func_799(var_38_object); // 0x229 NEW_2
	var_32_bool = var_37_bool; // 0x22a Mov
	return 2; // 0x22c Return
}


func_1054(var_204_string, var_205_bool)
{
	var_208_bool = 0; var_209_float = 0; var_210_float = 0; var_211_bool = 0; var_212_float = 0; var_213_float = 0; // 0x41e PushV
	lshHasAnimation(var_211_bool, var_204_string); // 0x41f Func
	var_214_bool = var_211_bool; // 0x421 Push
	if(var_214_bool == 0) goto Label_1064; // 0x422 JumpB
	lshGetAnimTimes(var_204_string, var_212_float, var_213_float); // 0x423 Func
	lshPlayAnimation(var_212_float, var_213_float, var_205_bool); // 0x425 Func
	goto Label_1068; // 0x427 Jump
	
Label_1068:
	return 6; // 0x42c Return
	
Label_1064:
	var_215_string = "Can't find lsh animation : "; // 0x428 PushS
	var_216_int = var_215_string + var_204_string; // 0x429 Add
	Trace(var_216_int); // 0x42a Func
}


func_799(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x31f PushV
	GetPosition(var_14_cvector); // 0x320 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x322 PushV
	var_16_cvector = var_14_cvector; // 0x323 Mov
	func_789(var_15_bool, var_16_cvector); // 0x324 NEW_2
	var_11_bool = var_15_bool; // 0x325 Mov
	return 2; // 0x327 Return
}


func_808(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x328 PushV
	IsLoaded(var_9_bool); // 0x329 Func
	var_7_bool = var_9_bool; // 0x32b Mov
	return 2; // 0x32c Return
}


func_1194()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4aa PushV
	var_19_int = 766; // 0x4ab PushI
	var_20_int = 2; // 0x4ac PushI
	var_21_int = 540063; // 0x4ad PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x4ae Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x4b0 PushV
	var_23_object = var_18_object; // 0x4b1 Mov
	var_24_int = 764; // 0x4b2 MovI
	func_1220(var_22_bool, var_23_object, var_24_int); // 0x4b3 NEW_2
	return 2; // 0x4b5 Return
}


func_813(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x32d PushV
	GetPosition(var_50_cvector); // 0x32e ObjFunc
	GetEyesHeight(var_49_float); // 0x330 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x332 PushE
	var_58_float = var_58_float + var_49_float; // 0x333 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x334 PopE
	GetPosition(var_51_cvector); // 0x335 Func
	GetEyesHeight(var_49_float); // 0x337 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x339 PushE
	var_59_float = var_59_float + var_49_float; // 0x33a Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x33b PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x33c Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x33d PushE
	var_60_float = 0; // 0x33e MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x33f PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x340 Or
	var_62_float = sqrt(var_61_int); // 0x341 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x342 Div2
	var_53_cvector = -var_52_cvector; // 0x343 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x344 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x345 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x346 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x347 Xor2
	func_1097(var_64_cvector, var_65_cvector); // 0x348 NEW_2
	var_72_int = 25; // 0x34a PushI
	var_73_float = var_64_cvector * var_72_int; // 0x34b Mult
	var_74_int = var_63_float + var_73_float; // 0x34c Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x34d PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x34e Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x34f Add2
	IsOverrideActive(var_56_bool); // 0x350 Func
	var_76_bool = var_56_bool; // 0x352 Push
	if(var_76_bool == 0) goto Label_854; // 0x353 JumpB
	var_37_bool = 0; // 0x354 MovB
	return 18; // 0x355 Return
	
Label_854:
	StopWorld(); // 0x356 Func
	var_77_bool = 1; // 0x358 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x359 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x35b PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x35c PushE
	Rotate(var_78_float, var_79_float); // 0x35d Func
	var_80_bool = 0; // 0x35f PushV
	func_1153(var_80_bool); // 0x360 NEW_2
	if(var_80_bool == 0) goto Label_868; // 0x362 JumpB
	goto Label_876; // 0x363 Jump
	
Label_876:
	CameraWaitForPlayFinish(); // 0x36c Func
	ResumeWorld(); // 0x36e Func
	var_37_bool = 1; // 0x370 MovB
	return 18; // 0x371 Return
	
Label_868:
	var_81_string = "head"; // 0x364 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x365 Func
	var_82_bool = var_57_bool; // 0x367 Push
	if(var_82_bool == 0) goto Label_876; // 0x368 JumpB
	var_83_string = "head"; // 0x369 PushS
	LookAsyncCamera(var_83_string); // 0x36a Func
}


func_558(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x22e PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x22f PushE
	RotateAsync(var_84_float, var_85_float); // 0x230 Func
	return 0; // 0x232 Return
}


func_1069(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x42d PushV
	var_136_bool = 0; // 0x42e PushV
	func_1153(var_136_bool); // 0x42f NEW_2
	if(var_136_bool == 0) goto Label_1082; // 0x431 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x432 Func
	var_137_bool = var_135_bool; // 0x434 Push
	if(var_137_bool == 0) goto Label_1082; // 0x435 JumpB
	lshPlaySpeech(var_133_string); // 0x436 Func
	var_132_bool = 1; // 0x438 MovB
	return 2; // 0x439 Return
	
Label_1082:
	var_132_bool = 0; // 0x43a MovB
	return 2; // 0x43b Return
}


func_563(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x233 PushV
	var_20_string = "player"; // 0x234 PushS
	FindActor(var_18_object, var_20_string); // 0x235 Func
	var_21_bool = var_18_object == 0; // 0x237 Not
	if(var_21_bool == 0) goto Label_571; // 0x238 JumpB
	var_15_bool = 0; // 0x239 MovB
	return 4; // 0x23a Return
	
Label_571:
	var_22_float = 0; var_23_object = Obj(); // 0x23b PushV
	var_23_object = var_18_object; // 0x23c Mov
	func_781(var_23_object); // 0x23d NEW_2
	var_30_float = 90000.0; // 0x23f PushF
	var_31_bool = var_22_float > var_30_float; // 0x240 GT
	if(var_31_bool == 0) goto Label_580; // 0x241 JumpB
	var_15_bool = 0; // 0x242 MovB
	return 4; // 0x243 Return
	
Label_580:
	CanSee(var_19_bool, var_18_object); // 0x244 Func
	var_15_bool = var_19_bool; // 0x246 Mov
	return 4; // 0x247 Return
}


func_1207(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4b7 PushV
	GetDiaryRoot(var_33_object); // 0x4b8 Func
	var_34_bool = var_33_object == 0; // 0x4ba Not
	if(var_34_bool == 0) goto Label_1217; // 0x4bb JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4bc PushS
	Trace(var_35_string); // 0x4bd Func
	var_31_object = 0; // 0x4bf MovB
	return 2; // 0x4c0 Return
	
Label_1217:
	var_31_object = var_33_object; // 0x4c1 Mov
	return 2; // 0x4c2 Return
}


func_1084()
{
	var_10_bool = 0; // 0x43c PushV
	func_1153(var_10_bool); // 0x43d NEW_2
	if(var_10_bool == 0) goto Label_1090; // 0x43f JumpB
	lshStopSpeech(); // 0x440 Func
	
Label_1090:
	return 0; // 0x442 Return
}


func_958(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3be PushV
	var_116_string = "c"; // 0x3bf MovS
	var_117_int = 0; // 0x3c0 MovI
	
Label_961:
	var_121_int = 1; // 0x3c1 PushI
	if(var_121_int == 0) goto Label_974; // 0x3c2 JumpB
	var_122_int = 1; // 0x3c3 PushI
	var_123_int = var_117_int + var_122_int; // 0x3c4 Add
	var_124_int = var_116_string + var_123_int; // 0x3c5 Add
	HasProperty(var_124_int, var_118_bool); // 0x3c6 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3c8 Not
	if(var_125_bool == 0) goto Label_971; // 0x3c9 JumpB
	goto Label_974; // 0x3ca Jump
	
Label_974:
	var_126_bool = var_117_int == 0; // 0x3ce Not
	if(var_126_bool == 0) goto Label_978; // 0x3cf JumpB
	var_109_bool = 0; // 0x3d0 MovB
	return 10; // 0x3d1 Return
	
Label_978:
	var_119_int = 0; // 0x3d2 MovI
	var_127_int = 1; // 0x3d3 PushI
	var_128_bool = var_117_int > var_127_int; // 0x3d4 GT
	if(var_128_bool == 0) goto Label_984; // 0x3d5 JumpB
	irand(var_119_int, var_117_int); // 0x3d6 Func
	
Label_984:
	var_129_int = 1; // 0x3d8 PushI
	var_130_int = var_119_int + var_129_int; // 0x3d9 Add
	var_131_int = var_116_string + var_130_int; // 0x3da Add
	GetProperty(var_131_int, var_120_string); // 0x3db ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x3dd PushV
	var_133_string = var_120_string; // 0x3de Mov
	func_1069(var_132_bool, var_133_string); // 0x3df NEW_2
	var_109_bool = var_132_bool; // 0x3e0 Mov
	return 10; // 0x3e2 Return
	
Label_971:
	var_138_int = 1; // 0x3cb PushI
	var_117_int = var_117_int + var_138_int; // 0x3cc Add2
	goto Label_961; // 0x3cd Jump
}


func_705()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2c1 PushV
	WaitForAnimEnd(); // 0x2c2 Func
	var_23_bool = 0; // 0x2c4 PushV
	func_808(var_23_bool); // 0x2c5 NEW_2
	var_24_bool = var_23_bool == 0; // 0x2c7 Not
	if(var_24_bool == 0) goto Label_714; // 0x2c8 JumpB
	return 12; // 0x2c9 Return
	
Label_714:
	var_25_int = 0; // 0x2ca PushV
	func_1128(var_25_int); // 0x2cb NEW_2
	var_17_int = var_25_int; // 0x2cc Mov
	var_18_int = 0; // 0x2ce MovI
	
Label_719:
	var_38_bool = 0; // 0x2cf PushV
	var_38_bool = 0; // 0x2d0 MovB
	var_39_int = 5; // 0x2d1 PushI
	var_40_bool = var_18_int < var_39_int; // 0x2d2 LT
	if(var_40_bool == 0) goto Label_729; // 0x2d3 JumpB
	var_41_bool = 0; // 0x2d4 PushV
	func_808(var_41_bool); // 0x2d5 NEW_2
	if(var_41_bool == 0) goto Label_729; // 0x2d7 JumpB
	var_38_bool = 1; // 0x2d8 MovB
	
Label_729:
	if(var_38_bool == 0) goto Label_771; // 0x2d9 JumpB
	var_42_bool = var_17_int == 0; // 0x2da Not
	if(var_42_bool == 0) goto Label_739; // 0x2db JumpB
	var_43_int = 3; // 0x2dc PushI
	Sleep(var_43_int, var_19_bool); // 0x2dd Func
	var_44_bool = var_19_bool == 0; // 0x2df Not
	if(var_44_bool == 0) goto Label_738; // 0x2e0 JumpB
	goto Label_771; // 0x2e1 Jump
	
Label_771:
	ResetAAS(); // 0x303 Func
	return 12; // 0x305 Return
	
Label_738:
	goto Label_760; // 0x2e2 Jump
	
Label_760:
	var_45_bool = 0; // 0x2f8 PushV
	func_774(var_45_bool); // 0x2f9 NEW_2
	var_46_bool = var_45_bool == 0; // 0x2fb Not
	if(var_46_bool == 0) goto Label_766; // 0x2fc JumpB
	goto Label_771; // 0x2fd Jump
	
Label_766:
	ResetAAS(); // 0x2fe Func
	var_47_int = 1; // 0x300 PushI
	var_18_int = var_18_int + var_47_int; // 0x301 Add2
	goto Label_719; // 0x302 Jump
	
Label_739:
	irand(var_20_int, var_17_int); // 0x2e3 Func
	var_48_int = 5; // 0x2e5 PushI
	irand(var_21_int, var_48_int); // 0x2e6 Func
	var_49_int = 0; // 0x2e8 PushI
	var_50_bool = var_21_int != var_49_int; // 0x2e9 Neq
	if(var_50_bool == 0) goto Label_748; // 0x2ea JumpB
	var_20_int = 0; // 0x2eb MovI
	
Label_748:
	var_51_string = "all"; // 0x2ec PushS
	var_52_string = ""; var_53_int = 0; // 0x2ed PushV
	var_53_int = var_20_int; // 0x2ee Mov
	func_1121(var_52_string, var_53_int); // 0x2ef NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x2f1 Func
	WaitForAnimEnd(var_22_bool); // 0x2f3 Func
	var_54_bool = var_22_bool == 0; // 0x2f5 Not
	if(var_54_bool == 0) goto Label_760; // 0x2f6 JumpB
	goto Label_771; // 0x2f7 Jump
}


func_1091(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x443 PushV
	self(var_102_object); // 0x444 Func
	var_100_object = var_102_object; // 0x446 Mov
	return 2; // 0x447 Return
}


func_1220(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4c4 PushV
	var_31_object = Obj(); // 0x4c5 PushV
	func_1207(var_31_object); // 0x4c6 NEW_2
	var_28_object = var_31_object; // 0x4c7 Mov
	Find(var_24_int, var_29_object); // 0x4c9 ObjFunc
	var_36_bool = var_29_object == 0; // 0x4cb Not
	if(var_36_bool == 0) goto Label_1235; // 0x4cc JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4cd PushS
	var_38_int = var_37_string + var_24_int; // 0x4ce Add
	Trace(var_38_int); // 0x4cf Func
	var_22_bool = 0; // 0x4d1 MovB
	return 6; // 0x4d2 Return
	
Label_1235:
	AddChild(var_23_object); // 0x4d3 ObjFunc
	var_39_int = 7; // 0x4d5 PushI
	SendWorldWndMessage(var_39_int); // 0x4d6 Func
	GetCategory(var_30_int); // 0x4d8 ObjFunc
	SetDiarySection(var_30_int); // 0x4da Func
	var_22_bool = 0; // 0x4dc MovB
	return 6; // 0x4dd Return
}


func_585()
{
	var_270_float = 0; var_271_float = 0; // 0x249 PushV
	var_272_int = 8; // 0x24a PushI
	var_273_int = 16; // 0x24b PushI
	rand(var_271_float, var_272_int, var_273_int); // 0x24c Func
	var_274_int = 10; // 0x24e PushI
	SetTimer(var_274_int, var_271_float); // 0x24f Func
	return 2; // 0x251 Return
}


func_1097(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x449 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x44a Or
	var_68_float = sqrt(var_69_int); // 0x44b Sqrt2
	var_70_float = 0.0; // 0x44c PushF
	var_71_bool = var_68_float < var_70_float; // 0x44d LT
	if(var_71_bool == 0) goto Label_1105; // 0x44e JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x44f MovV
	return 2; // 0x450 Return
	
Label_1105:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x451 Div2
	return 2; // 0x452 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_124; // 0x56 JumpB
	var_200_string = ""; // 0x57 PushV
	var_200_string = "Neutral"; // 0x58 MovS
	func_154(var_194_object, var_200_string); // 0x59 NEW_2
	var_217_int = 513949; // 0x5b PushI
	SetMessage(var_217_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x60 PushV
	var_219_object = var_1_object; // 0x61 MovT
	func_1170(var_219_object); // 0x62 NEW_2
	if(var_218_bool == 0) goto Label_106; // 0x64 JumpB
	var_226_int = 513950; // 0x65 PushI
	var_227_int = 15186; // 0x66 PushI
	var_228_int = 15185; // 0x67 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x68 TObjFunc
	
Label_106:
	var_229_bool = 0; var_230_object = Obj(); // 0x6a PushV
	var_230_object = var_1_object; // 0x6b MovT
	func_1182(var_230_object); // 0x6c NEW_2
	if(var_229_bool == 0) goto Label_116; // 0x6e JumpB
	var_235_int = 513977; // 0x6f PushI
	var_236_int = 15213; // 0x70 PushI
	var_237_int = 15212; // 0x71 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x72 TObjFunc
	
Label_116:
	var_238_int = 513980; // 0x74 PushI
	var_239_int = -1; // 0x75 PushI
	var_240_int = 15215; // 0x76 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x77 TObjFunc
	goto Label_124; // 0x79 Jump
	
Label_124:
	var_241_bool = 0; // 0x7c PushV
	func_1153(var_241_bool); // 0x7d NEW_2
	if(var_241_bool == 0) goto Label_139; // 0x7f JumpB
	
Label_128:
	lshWaitForAnimEnd(); // 0x80 Func
	var_242_string = var_3_string; // 0x82 PushT
	if(var_242_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_138:
	goto Label_153; // 0x8a Jump
	
Label_153:
	return 0; // 0x99 Return
	
Label_133:
	var_243_string = ""; // 0x85 PushV
	var_243_string = var_2_object; // 0x86 MovT
	func_1038(var_243_string); // 0x87 NEW_2
	goto Label_128; // 0x89 Jump
	
Label_139:
	var_254_string = "all"; // 0x8b PushS
	var_255_string = "idle"; // 0x8c PushS
	PlayAnimation(var_254_string, var_255_string); // 0x8d Func
	
Label_143:
	WaitForAnimEnd(); // 0x8f Func
	var_256_string = var_3_string; // 0x91 PushT
	if(var_256_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_148:
	var_257_string = "all"; // 0x94 PushS
	var_258_string = "idle"; // 0x95 PushS
	PlayAnimation(var_257_string, var_258_string); // 0x96 Func
	goto Label_143; // 0x98 Jump
}


func_594()
{
	var_269_int = 10; // 0x252 PushI
	KillTimer(var_269_int); // 0x253 Func
	return 0; // 0x255 Return
}


func_1107(var_220_int, var_221_string)
{
	var_222_int = 0; var_223_int = 0; // 0x453 PushV
	GetVariable(var_221_string, var_223_int); // 0x454 Func
	var_220_int = var_223_int; // 0x456 Mov
	return 2; // 0x457 Return
}


func_1112(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x458 PushV
	GetGameTime(var_155_float); // 0x459 Func
	var_156_int = 1; // 0x45b PushI
	var_157_int = 0; // 0x45c PushV
	var_158_int = 24; // 0x45d PushI
	var_157_int = var_155_float / var_155_float; // 0x45e Div2
	var_153_int = var_156_int + var_157_int; // 0x45f Add2
	return 2; // 0x460 Return
}


func_1248(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x4e0 PushV
	var_92_string = "branch"; // 0x4e1 PushS
	GetVariable(var_92_string, var_91_int); // 0x4e2 Func
	var_93_int = 0; // 0x4e4 PushI
	var_94_bool = var_91_int == var_93_int; // 0x4e5 Eq
	if(var_94_bool == 0) goto Label_1258; // 0x4e6 JumpB
	var_89_int = 1; // 0x4e7 MovI
	return 2; // 0x4e8 Return
	
Label_1258:
	var_95_int = 1; // 0x4ea PushI
	var_96_bool = var_91_int == var_95_int; // 0x4eb Eq
	if(var_96_bool == 0) goto Label_1263; // 0x4ec JumpB
	var_89_int = 2; // 0x4ed MovI
	return 2; // 0x4ee Return
	
Label_1263:
	var_89_int = 3; // 0x4ef MovI
	return 2; // 0x4f0 Return
}


func_480(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x1e1 PushV
	var_27_object = var_25_object; // 0x1e2 Mov
	TaskCall(0); // 0x1e3 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x1e4 NEW_2
	TaskReturn(); // 0x1e5 TaskReturn
	return 0; // 0x1e7 Return
}


func_1121(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x461 PushV
	var_34_string = "idle"; // 0x462 MovS
	var_35_int = var_32_int; // 0x463 Push
	if(var_35_int == 0) goto Label_1126; // 0x464 JumpB
	var_34_string = var_34_string + var_32_int; // 0x465 Add2
	
Label_1126:
	var_31_string = var_34_string; // 0x466 Mov
	return 2; // 0x467 Return
}


func_995(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x3e3 PushV
	var_152_string = "d"; // 0x3e4 PushS
	var_153_int = 0; // 0x3e5 PushV
	func_1112(var_153_int); // 0x3e6 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x3e8 Add
	var_160_string = "m"; // 0x3e9 PushS
	var_147_string = var_159_int + var_160_string; // 0x3ea Add2
	var_148_int = 0; // 0x3eb MovI
	
Label_1004:
	var_161_int = 1; // 0x3ec PushI
	if(var_161_int == 0) goto Label_1017; // 0x3ed JumpB
	var_162_int = 1; // 0x3ee PushI
	var_163_int = var_148_int + var_162_int; // 0x3ef Add
	var_164_int = var_147_string + var_163_int; // 0x3f0 Add
	HasProperty(var_164_int, var_149_bool); // 0x3f1 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x3f3 Not
	if(var_165_bool == 0) goto Label_1014; // 0x3f4 JumpB
	goto Label_1017; // 0x3f5 Jump
	
Label_1017:
	var_166_bool = var_148_int == 0; // 0x3f9 Not
	if(var_166_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_140_bool = 0; // 0x3fb MovB
	return 10; // 0x3fc Return
	
Label_1021:
	var_150_int = 0; // 0x3fd MovI
	var_167_int = 1; // 0x3fe PushI
	var_168_bool = var_148_int > var_167_int; // 0x3ff GT
	if(var_168_bool == 0) goto Label_1027; // 0x400 JumpB
	irand(var_150_int, var_148_int); // 0x401 Func
	
Label_1027:
	var_169_int = 1; // 0x403 PushI
	var_170_int = var_150_int + var_169_int; // 0x404 Add
	var_171_int = var_147_string + var_170_int; // 0x405 Add
	GetProperty(var_171_int, var_151_string); // 0x406 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x408 PushV
	var_173_string = var_151_string; // 0x409 Mov
	func_1069(var_172_bool, var_173_string); // 0x40a NEW_2
	var_140_bool = var_172_bool; // 0x40b Mov
	return 10; // 0x40d Return
	
Label_1014:
	var_174_int = 1; // 0x3f6 PushI
	var_148_int = var_148_int + var_174_int; // 0x3f7 Add2
	goto Label_1004; // 0x3f8 Jump
}


func_1128(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x468 PushV
	var_28_int = 0; // 0x469 MovI
	
Label_1130:
	var_30_string = "all"; // 0x46a PushS
	var_31_string = ""; var_32_int = 0; // 0x46b PushV
	var_32_int = var_28_int; // 0x46c Mov
	func_1121(var_31_string, var_32_int); // 0x46d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x46f Func
	var_36_bool = var_29_bool == 0; // 0x471 Not
	if(var_36_bool == 0) goto Label_1140; // 0x472 JumpB
	goto Label_1143; // 0x473 Jump
	
Label_1143:
	var_25_int = var_28_int; // 0x477 Mov
	return 4; // 0x478 Return
	
Label_1140:
	var_37_int = 1; // 0x474 PushI
	var_28_int = var_28_int + var_37_int; // 0x475 Add2
	goto Label_1130; // 0x476 Jump
}


func_882()
{
	var_261_bool = 0; var_262_bool = 0; // 0x372 PushV
	var_263_bool = 1; // 0x373 PushB
	CameraSwitchToNormal(var_263_bool); // 0x374 Func
	var_264_bool = 0; // 0x376 PushV
	func_1153(var_264_bool); // 0x377 NEW_2
	if(var_264_bool == 0) goto Label_891; // 0x379 JumpB
	goto Label_899; // 0x37a Jump
	
Label_899:
	return 2; // 0x383 Return
	
Label_891:
	var_265_string = "head"; // 0x37b PushS
	HasAnimationTrack(var_262_bool, var_265_string); // 0x37c Func
	var_266_bool = var_262_bool; // 0x37e Push
	if(var_266_bool == 0) goto Label_899; // 0x37f JumpB
	var_267_string = "head"; // 0x380 PushS
	UnlookAsync(var_267_string); // 0x381 Func
}


func_1145(var_86_int)
{
	var_86_int = 515592; // 0x479 MovI
	return 0; // 0x47a Return
}


func_1147(var_85_int)
{
	var_85_int = 511961; // 0x47b MovI
	return 0; // 0x47c Return
}


func_636()
{
	func_776(); // 0x27d NEW_2
	func_594(); // 0x280 NEW_2
	lshStopSpeech(); // 0x282 Func
	lshStopAnimation(); // 0x284 Func
	StopAsync(); // 0x286 Func
	Hold(); // 0x288 Func
	return 0; // 0x28a Return
}


func_1149(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png"; // 0x47d MovS
	return 0; // 0x47e Return
}


func_1151(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png"; // 0x47f MovS
	return 0; // 0x480 Return
}


