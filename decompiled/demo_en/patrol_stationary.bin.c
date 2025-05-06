task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x1b PushV
	func_3550(var_18_bool); // 0x1c NEW_2
	if(var_18_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_cvector, var_9_cvector, var_10_bool, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int)
{
	var_19_int = 1; // 0x10a PushI
	if(var_19_int == 0) goto Label_577; // 0x10b JumpB
	func_2550(); // 0x10d NEW_2
	var_21_int = 39797; // 0x10f PushI
	var_22_bool = var_18_int == var_21_int; // 0x110 Eq
	if(var_22_bool == 0) goto Label_279; // 0x111 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x112 PushV
	var_23_object = var_1_object; // 0x113 MovT
	var_24_object = var_0_bool; // 0x114 MovT
	func_2804(); // 0x115 NEW_2
	
Label_279:
	var_26_int = 39798; // 0x117 PushI
	var_27_bool = var_18_int == var_26_int; // 0x118 Eq
	if(var_27_bool == 0) goto Label_287; // 0x119 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x11a PushV
	var_28_object = var_1_object; // 0x11b MovT
	var_29_object = var_0_bool; // 0x11c MovT
	func_2804(); // 0x11d NEW_2
	
Label_287:
	var_30_int = 39796; // 0x11f PushI
	var_31_bool = var_17_float == var_30_int; // 0x120 Eq
	if(var_31_bool == 0) goto Label_381; // 0x121 JumpB
	var_32_string = ""; // 0x122 PushV
	var_32_string = "Neutral"; // 0x123 MovS
	func_243(var_18_int, var_32_string); // 0x124 NEW_2
	var_49_int = 537935; // 0x126 PushI
	SetMessage(var_49_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_50_bool = 0; var_51_object = Obj(); // 0x12b PushV
	var_51_object = var_1_object; // 0x12c MovT
	func_2821(var_51_object); // 0x12d NEW_2
	var_58_bool = var_50_bool == 0; // 0x12f Not
	if(var_58_bool == 0) goto Label_310; // 0x130 JumpB
	var_59_int = 537936; // 0x131 PushI
	var_60_int = -1; // 0x132 PushI
	var_61_int = 39797; // 0x133 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x134 TObjFunc
	
Label_310:
	var_62_bool = 0; var_63_object = Obj(); // 0x136 PushV
	var_63_object = var_1_object; // 0x137 MovT
	func_2821(var_63_object); // 0x138 NEW_2
	if(var_62_bool == 0) goto Label_320; // 0x13a JumpB
	var_64_int = 537937; // 0x13b PushI
	var_65_int = -1; // 0x13c PushI
	var_66_int = 39798; // 0x13d PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x13e TObjFunc
	
Label_320:
	var_67_bool = 0; var_68_object = Obj(); // 0x140 PushV
	var_68_object = var_1_object; // 0x141 MovT
	func_2809(var_68_object); // 0x142 NEW_2
	if(var_67_bool == 0) goto Label_330; // 0x144 JumpB
	var_73_int = 537938; // 0x145 PushI
	var_74_int = 39800; // 0x146 PushI
	var_75_int = 39799; // 0x147 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x148 TObjFunc
	
Label_330:
	var_76_bool = 0; var_77_object = Obj(); // 0x14a PushV
	var_77_object = var_1_object; // 0x14b MovT
	func_2821(var_77_object); // 0x14c NEW_2
	if(var_76_bool == 0) goto Label_340; // 0x14e JumpB
	var_78_int = 537951; // 0x14f PushI
	var_79_int = 39813; // 0x150 PushI
	var_80_int = 39812; // 0x151 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x152 TObjFunc
	
Label_340:
	var_81_bool = 0; var_82_object = Obj(); // 0x154 PushV
	var_82_object = var_1_object; // 0x155 MovT
	func_2833(var_82_object); // 0x156 NEW_2
	if(var_81_bool == 0) goto Label_350; // 0x158 JumpB
	var_87_int = 537964; // 0x159 PushI
	var_88_int = -1; // 0x15a PushI
	var_89_int = 39826; // 0x15b PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x15c TObjFunc
	
Label_350:
	var_90_bool = 0; var_91_object = Obj(); // 0x15e PushV
	var_91_object = var_1_object; // 0x15f MovT
	func_2809(var_91_object); // 0x160 NEW_2
	if(var_90_bool == 0) goto Label_360; // 0x162 JumpB
	var_92_int = 537965; // 0x163 PushI
	var_93_int = -1; // 0x164 PushI
	var_94_int = 39827; // 0x165 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x166 TObjFunc
	
Label_360:
	var_95_bool = 0; var_96_object = Obj(); // 0x168 PushV
	var_96_object = var_1_object; // 0x169 MovT
	func_2833(var_96_object); // 0x16a NEW_2
	if(var_95_bool == 0) goto Label_370; // 0x16c JumpB
	var_97_int = 537966; // 0x16d PushI
	var_98_int = -1; // 0x16e PushI
	var_99_int = 39828; // 0x16f PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x170 TObjFunc
	
Label_370:
	var_100_bool = 0; var_101_object = Obj(); // 0x172 PushV
	var_101_object = var_1_object; // 0x173 MovT
	func_2821(var_101_object); // 0x174 NEW_2
	if(var_100_bool == 0) goto Label_380; // 0x176 JumpB
	var_102_int = 537967; // 0x177 PushI
	var_103_int = -1; // 0x178 PushI
	var_104_int = 39829; // 0x179 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x17a TObjFunc
	
Label_380:
	return 0; // 0x17c Return
	
Label_381:
	var_105_int = 39813; // 0x17d PushI
	var_106_bool = var_17_float == var_105_int; // 0x17e Eq
	if(var_106_bool == 0) goto Label_404; // 0x17f JumpB
	var_107_string = ""; // 0x180 PushV
	var_107_string = "Neutral"; // 0x181 MovS
	func_243(var_18_int, var_107_string); // 0x182 NEW_2
	var_108_int = 537952; // 0x184 PushI
	SetMessage(var_108_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_109_int = 537953; // 0x189 PushI
	var_110_int = 39815; // 0x18a PushI
	var_111_int = 39814; // 0x18b PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x18c TObjFunc
	var_112_int = 537960; // 0x18e PushI
	var_113_int = 39823; // 0x18f PushI
	var_114_int = 39822; // 0x190 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_115_int = 39823; // 0x194 PushI
	var_116_bool = var_17_float == var_115_int; // 0x195 Eq
	if(var_116_bool == 0) goto Label_427; // 0x196 JumpB
	var_117_string = ""; // 0x197 PushV
	var_117_string = "Neutral"; // 0x198 MovS
	func_243(var_18_int, var_117_string); // 0x199 NEW_2
	var_118_int = 537961; // 0x19b PushI
	SetMessage(var_118_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_119_int = 537962; // 0x1a0 PushI
	var_120_int = -1; // 0x1a1 PushI
	var_121_int = 39824; // 0x1a2 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x1a3 TObjFunc
	var_122_int = 537963; // 0x1a5 PushI
	var_123_int = -1; // 0x1a6 PushI
	var_124_int = 39825; // 0x1a7 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_125_int = 39815; // 0x1ab PushI
	var_126_bool = var_17_float == var_125_int; // 0x1ac Eq
	if(var_126_bool == 0) goto Label_450; // 0x1ad JumpB
	var_127_string = ""; // 0x1ae PushV
	var_127_string = "Neutral"; // 0x1af MovS
	func_243(var_18_int, var_127_string); // 0x1b0 NEW_2
	var_128_int = 537954; // 0x1b2 PushI
	SetMessage(var_128_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_129_int = 537955; // 0x1b7 PushI
	var_130_int = 39817; // 0x1b8 PushI
	var_131_int = 39816; // 0x1b9 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1ba TObjFunc
	var_132_int = 537959; // 0x1bc PushI
	var_133_int = 39823; // 0x1bd PushI
	var_134_int = 39820; // 0x1be PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x1bf TObjFunc
	return 0; // 0x1c1 Return
	
Label_450:
	var_135_int = 39817; // 0x1c2 PushI
	var_136_bool = var_17_float == var_135_int; // 0x1c3 Eq
	if(var_136_bool == 0) goto Label_473; // 0x1c4 JumpB
	var_137_string = ""; // 0x1c5 PushV
	var_137_string = "Neutral"; // 0x1c6 MovS
	func_243(var_18_int, var_137_string); // 0x1c7 NEW_2
	var_138_int = 537956; // 0x1c9 PushI
	SetMessage(var_138_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_139_int = 537957; // 0x1ce PushI
	var_140_int = -1; // 0x1cf PushI
	var_141_int = 39818; // 0x1d0 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1d1 TObjFunc
	var_142_int = 537958; // 0x1d3 PushI
	var_143_int = -1; // 0x1d4 PushI
	var_144_int = 39819; // 0x1d5 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_145_int = 39800; // 0x1d9 PushI
	var_146_bool = var_17_float == var_145_int; // 0x1da Eq
	if(var_146_bool == 0) goto Label_496; // 0x1db JumpB
	var_147_string = ""; // 0x1dc PushV
	var_147_string = "Neutral"; // 0x1dd MovS
	func_243(var_18_int, var_147_string); // 0x1de NEW_2
	var_148_int = 537939; // 0x1e0 PushI
	SetMessage(var_148_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_149_int = 537940; // 0x1e5 PushI
	var_150_int = 39802; // 0x1e6 PushI
	var_151_int = 39801; // 0x1e7 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1e8 TObjFunc
	var_152_int = 537947; // 0x1ea PushI
	var_153_int = 39809; // 0x1eb PushI
	var_154_int = 39808; // 0x1ec PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_155_int = 39809; // 0x1f0 PushI
	var_156_bool = var_17_float == var_155_int; // 0x1f1 Eq
	if(var_156_bool == 0) goto Label_519; // 0x1f2 JumpB
	var_157_string = ""; // 0x1f3 PushV
	var_157_string = "Neutral"; // 0x1f4 MovS
	func_243(var_18_int, var_157_string); // 0x1f5 NEW_2
	var_158_int = 537948; // 0x1f7 PushI
	SetMessage(var_158_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_159_int = 537949; // 0x1fc PushI
	var_160_int = -1; // 0x1fd PushI
	var_161_int = 39810; // 0x1fe PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1ff TObjFunc
	var_162_int = 537950; // 0x201 PushI
	var_163_int = -1; // 0x202 PushI
	var_164_int = 39811; // 0x203 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_165_int = 39802; // 0x207 PushI
	var_166_bool = var_17_float == var_165_int; // 0x208 Eq
	if(var_166_bool == 0) goto Label_542; // 0x209 JumpB
	var_167_string = ""; // 0x20a PushV
	var_167_string = "Neutral"; // 0x20b MovS
	func_243(var_18_int, var_167_string); // 0x20c NEW_2
	var_168_int = 537941; // 0x20e PushI
	SetMessage(var_168_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_169_int = 537942; // 0x213 PushI
	var_170_int = 39804; // 0x214 PushI
	var_171_int = 39803; // 0x215 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x216 TObjFunc
	var_172_int = 537946; // 0x218 PushI
	var_173_int = -1; // 0x219 PushI
	var_174_int = 39807; // 0x21a PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_175_int = 39804; // 0x21e PushI
	var_176_bool = var_17_float == var_175_int; // 0x21f Eq
	if(var_176_bool == 0) goto Label_565; // 0x220 JumpB
	var_177_string = ""; // 0x221 PushV
	var_177_string = "Neutral"; // 0x222 MovS
	func_243(var_18_int, var_177_string); // 0x223 NEW_2
	var_178_int = 537943; // 0x225 PushI
	SetMessage(var_178_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_179_int = 537944; // 0x22a PushI
	var_180_int = -1; // 0x22b PushI
	var_181_int = 39805; // 0x22c PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x22d TObjFunc
	var_182_int = 537945; // 0x22f PushI
	var_183_int = -1; // 0x230 PushI
	var_184_int = 39806; // 0x231 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_3_object = 1; // 0x235 TMovB
	var_185_bool = 0; // 0x236 PushV
	func_3550(var_185_bool); // 0x237 NEW_2
	if(var_185_bool == 0) goto Label_573; // 0x239 JumpB
	lshStopAnimation(); // 0x23a Func
	goto Label_575; // 0x23c Jump
	
Label_575:
	return 0; // 0x23f Return
	
Label_573:
	StopAnimation(); // 0x23d Func
	
Label_577:
	return 0; // 0x241 Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_int, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_int = 1; // 0x24d PushI
	var_19_bool = var_17_int == var_18_int; // 0x24e Eq
	if(var_19_bool == 0) goto Label_594; // 0x24f JumpB
	ResetAAS(); // 0x250 Func
	
Label_594:
	return 0; // 0x252 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_595(); // 0x25c NEW_2
	var_19_object = Obj(); // 0x25e PushV
	var_19_object = var_17_int; // 0x25f Mov
	func_3510(); // 0x260 NEW_2
	return 0; // 0x262 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x264 PushV
	var_19_object = var_17_int; // 0x265 Mov
	func_3552(var_18_bool, var_19_object); // 0x266 NEW_2
	if(var_18_bool == 0) goto Label_618; // 0x268 JumpB
	return 0; // 0x269 Return
	
Label_618:
	func_595(); // 0x26b NEW_2
	var_140_int = 1000; // 0x26d PushI
	var_141_int = 0; var_142_object = Obj(); // 0x26e PushV
	var_142_object = var_17_int; // 0x26f Mov
	TaskCall(1); // 0x270 TaskCall
	func_40(var_143_object, var_141_int, var_142_object); // 0x271 NEW_2
	TaskReturn(); // 0x272 TaskReturn
	var_318_bool = var_140_int == var_143_object; // 0x274 Eq
	if(var_318_bool == 0) goto Label_634; // 0x275 JumpB
	var_319_object = Obj(); // 0x276 PushV
	var_319_object = var_17_int; // 0x277 Mov
	func_3357(var_319_object); // 0x278 NEW_2
	
Label_634:
	return 0; // 0x27a Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x282 PushV
	var_19_object = var_17_int; // 0x283 Mov
	func_3389(var_18_bool, var_19_object); // 0x284 NEW_2
	if(var_18_bool == 0) goto Label_654; // 0x286 JumpB
	func_595(); // 0x288 NEW_2
	var_142_object = Obj(); // 0x28a PushV
	var_142_object = var_17_int; // 0x28b Mov
	func_3396(var_142_object); // 0x28c NEW_2
	
Label_654:
	return 0; // 0x28e Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x290 PushV
	var_19_object = var_17_int; // 0x291 Mov
	func_3376(var_18_bool, var_19_object); // 0x292 NEW_2
	if(var_18_bool == 0) goto Label_680; // 0x294 JumpB
	func_595(); // 0x296 NEW_2
	var_142_bool = 0; var_143_object = Obj(); // 0x298 PushV
	var_143_object = var_17_int; // 0x299 Mov
	func_2072(var_142_bool, var_143_object); // 0x29a NEW_2
	if(var_142_bool == 0) goto Label_676; // 0x29c JumpB
	var_144_object = Obj(); // 0x29d PushV
	var_144_object = var_17_int; // 0x29e Mov
	TaskCall(7); // 0x29f TaskCall
	func_1950(var_144_object); // 0x2a0 NEW_2
	TaskReturn(); // 0x2a1 TaskReturn
	goto Label_680; // 0x2a3 Jump
	
Label_680:
	return 0; // 0x2a8 Return
	
Label_676:
	var_156_object = Obj(); // 0x2a4 PushV
	var_156_object = var_17_int; // 0x2a5 Mov
	func_3383(var_156_object); // 0x2a6 NEW_2
}


	task_3_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj(); // 0x2aa PushV
	var_108_object = var_106_object; // 0x2ab Mov
	func_2203(var_107_bool, var_108_object); // 0x2ac NEW_2
	var_135_bool = var_107_bool == 0; // 0x2ae Not
	if(var_135_bool == 0) goto Label_693; // 0x2af JumpB
	var_136_object = Obj(); // 0x2b0 PushV
	var_136_object = var_106_object; // 0x2b1 Mov
	func_3413(var_136_object); // 0x2b2 NEW_2
	return 0; // 0x2b4 Return
	
Label_693:
	func_595(); // 0x2b6 NEW_2
	var_152_object = Obj(); // 0x2b8 PushV
	var_152_object = var_106_object; // 0x2b9 Mov
	func_3437(var_152_object); // 0x2ba NEW_2
	return 0; // 0x2bc Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x2be PushV
	var_21_object = var_17_bool; // 0x2bf Mov
	var_22_object = var_18_float; // 0x2c0 Mov
	var_23_bool = var_19_int; // 0x2c1 Mov
	func_3516(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x2c2 NEW_2
	if(var_20_bool == 0) goto Label_713; // 0x2c4 JumpB
	var_106_object = Obj(); // 0x2c5 PushV
	var_106_object = var_17_bool; // 0x2c6 Mov
	func_681(); // 0x2c7 NEW_2
	
Label_713:
	return 0; // 0x2c9 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_object = Obj(); // 0x324 PushV
	var_18_object = var_17_int; // 0x325 Mov
	func_3413(var_18_object); // 0x326 NEW_2
	return 0; // 0x328 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x32a PushV
	var_21_object = var_17_bool; // 0x32b Mov
	var_22_object = var_18_float; // 0x32c Mov
	var_23_bool = var_19_int; // 0x32d Mov
	func_3516(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x32e NEW_2
	return 0; // 0x330 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_int = 1; // 0x363 PushI
	var_19_bool = var_17_int == var_18_int; // 0x364 Eq
	if(var_19_bool == 0) goto Label_875; // 0x365 JumpB
	var_20_object = Obj(); // 0x366 PushV
	var_20_object = var_1_object; // 0x367 MovT
	func_2784(var_20_object); // 0x368 NEW_2
	goto Label_879; // 0x36a Jump
	
Label_879:
	return 0; // 0x36f Return
	
Label_875:
	var_25_int = 0; // 0x36b PushV
	var_25_int = var_17_int; // 0x36c Mov
	func_1024(var_16_float, var_17_int, var_25_int); // 0x36d NEW_2
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x37e PushV
	var_18_bool = 0; // 0x37f MovB
	var_19_bool = var_1_object == var_17_int; // 0x380 Eq
	if(var_19_bool == 0) goto Label_901; // 0x381 JumpB
	var_20_bool = var_2_object == 0; // 0x382 Not
	if(var_20_bool == 0) goto Label_901; // 0x383 JumpB
	var_18_bool = 1; // 0x384 MovB
	
Label_901:
	if(var_18_bool == 0) goto Label_907; // 0x385 JumpB
	var_2_object = 1; // 0x386 TMovB
	var_21_object = Obj(); // 0x387 PushV
	var_21_object = var_17_int; // 0x388 Mov
	func_2539(var_21_object); // 0x389 NEW_2
	
Label_907:
	return 0; // 0x38b Return
}


task_4_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x38d PushV
	var_18_bool = 0; // 0x38e MovB
	var_19_bool = var_1_object == var_17_int; // 0x38f Eq
	if(var_19_bool == 0) goto Label_916; // 0x390 JumpB
	var_20_object = var_2_object; // 0x391 PushT
	if(var_20_object == 0) goto Label_916; // 0x392 JumpB
	var_18_bool = 1; // 0x393 MovB
	
Label_916:
	if(var_18_bool == 0) goto Label_921; // 0x394 JumpB
	var_2_object = 0; // 0x395 TMovB
	var_21_string = "head"; // 0x396 PushS
	UnlookAsync(var_21_string); // 0x397 Func
	
Label_921:
	return 0; // 0x399 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	RequestClearPath(var_17_int); // 0x413 Func
	return 0; // 0x415 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	func_880(var_17_int); // 0x41f NEW_2
	var_22_object = Obj(); // 0x421 PushV
	var_22_object = var_17_int; // 0x422 Mov
	func_3510(); // 0x423 NEW_2
	return 0; // 0x425 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0x440 PushV
	var_18_object = var_17_object; // 0x441 Mov
	func_3413(var_18_object); // 0x442 NEW_2
	return 0; // 0x444 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x446 PushV
	var_21_object = var_17_object; // 0x447 Mov
	var_22_object = var_18_object; // 0x448 Mov
	var_23_bool = var_19_bool; // 0x449 Mov
	func_3516(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x44a NEW_2
	return 0; // 0x44c Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0; // 0x719 PushV
	IsOverrideActive(var_19_bool); // 0x71a Func
	var_20_bool = var_19_bool == 0; // 0x71c Not
	if(var_20_bool == 0) goto Label_1826; // 0x71d JumpB
	var_21_object = Obj(); // 0x71e PushV
	var_21_object = var_17_object; // 0x71f Mov
	func_2868(var_21_object); // 0x720 NEW_2
	
Label_1826:
	return 2; // 0x722 Return
}


task_6_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0; // 0x799 Return
}


task_6_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	return 0; // 0x79b Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	return 0; // 0x79d Return
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	func_1962(); // 0x7b1 NEW_2
	var_18_object = Obj(); // 0x7b3 PushV
	var_18_object = var_17_object; // 0x7b4 Mov
	func_3510(); // 0x7b5 NEW_2
	return 0; // 0x7b7 Return
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x7b9 PushV
	var_19_object = var_17_object; // 0x7ba Mov
	func_3389(var_18_bool, var_19_object); // 0x7bb NEW_2
	if(var_18_bool == 0) goto Label_1989; // 0x7bd JumpB
	func_1962(); // 0x7bf NEW_2
	var_141_object = Obj(); // 0x7c1 PushV
	var_141_object = var_17_object; // 0x7c2 Mov
	func_3396(var_141_object); // 0x7c3 NEW_2
	
Label_1989:
	return 0; // 0x7c5 Return
}


task_7_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x7c7 PushV
	var_19_object = var_17_object; // 0x7c8 Mov
	func_3376(var_18_bool, var_19_object); // 0x7c9 NEW_2
	if(var_18_bool == 0) goto Label_2009; // 0x7cb JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x7cc PushV
	var_142_object = var_17_object; // 0x7cd Mov
	func_2072(var_141_bool, var_142_object); // 0x7ce NEW_2
	if(var_141_bool == 0) goto Label_2002; // 0x7d0 JumpB
	return 0; // 0x7d1 Return
	
Label_2002:
	func_1962(); // 0x7d3 NEW_2
	var_143_object = Obj(); // 0x7d5 PushV
	var_143_object = var_17_object; // 0x7d6 Mov
	func_3383(var_143_object); // 0x7d7 NEW_2
	
Label_2009:
	return 0; // 0x7d9 Return
}


	task_7_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool, var_106_object)
	{
	var_107_bool = 0; var_108_object = Obj(); // 0x7db PushV
	var_108_object = var_106_object; // 0x7dc Mov
	func_2203(var_107_bool, var_108_object); // 0x7dd NEW_2
	var_135_bool = var_107_bool == 0; // 0x7df Not
	if(var_135_bool == 0) goto Label_2022; // 0x7e0 JumpB
	var_136_object = Obj(); // 0x7e1 PushV
	var_136_object = var_106_object; // 0x7e2 Mov
	func_3413(var_136_object); // 0x7e3 NEW_2
	return 0; // 0x7e5 Return
	
Label_2022:
	func_1962(); // 0x7e7 NEW_2
	var_151_object = Obj(); // 0x7e9 PushV
	var_151_object = var_106_object; // 0x7ea Mov
	func_3437(var_151_object); // 0x7eb NEW_2
	return 0; // 0x7ed Return
	}


task_7_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x7ef PushV
	var_21_object = var_17_object; // 0x7f0 Mov
	var_22_object = var_18_object; // 0x7f1 Mov
	var_23_bool = var_19_bool; // 0x7f2 Mov
	func_3516(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x7f3 NEW_2
	if(var_20_bool == 0) goto Label_2042; // 0x7f5 JumpB
	var_106_object = Obj(); // 0x7f6 PushV
	var_106_object = var_17_object; // 0x7f7 Mov
	func_2010(); // 0x7f8 NEW_2
	
Label_2042:
	return 0; // 0x7fa Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0xd91 PushV
	var_21_object = var_17_object; // 0xd92 Mov
	var_22_int = var_18_int; // 0xd93 Mov
	var_23_float = var_19_float; // 0xd94 Mov
	func_2271(var_21_object, var_22_int, var_23_float); // 0xd95 NEW_2
	return 0; // 0xd97 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0xd99 PushV
	var_23_object = var_17_object; // 0xd9a Mov
	var_24_int = var_18_int; // 0xd9b Mov
	var_25_float = var_19_float; // 0xd9c Mov
	var_26_cvector = var_21_cvector; // 0xd9d Mov
	var_27_cvector = var_22_cvector; // 0xd9e Mov
	func_2339(var_25_float, var_26_cvector, var_27_cvector); // 0xd9f NEW_2
	return 0; // 0xda1 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0xda2 PushV
	var_21_string = "health"; // 0xda3 PushS
	var_22_bool = var_18_string == var_21_string; // 0xda4 Eq
	if(var_22_bool == 0) goto Label_3502; // 0xda5 JumpB
	var_23_string = "health"; // 0xda6 PushS
	GetProperty(var_23_string, var_20_float); // 0xda7 Func
	var_24_int = 0; // 0xda9 PushI
	var_25_bool = var_20_float <= var_24_int; // 0xdaa LE
	if(var_25_bool == 0) goto Label_3502; // 0xdab JumpB
	SignalDeath(var_17_object); // 0xdac Func
	
Label_3502:
	return 2; // 0xdae Return
}


event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_string = "prc"; // 0xdb0 PushS
	var_20_bool = var_18_string == var_19_string; // 0xdb1 Eq
	if(var_20_bool == 0) goto Label_3509; // 0xdb2 JumpB
	ResetAAS(); // 0xdb3 Func
	
Label_3509:
	return 0; // 0xdb5 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0xdb7 PushV
	var_18_object = var_17_object; // 0xdb8 Mov
	func_3452(var_18_object); // 0xdb9 NEW_2
	return 0; // 0xdbb Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	func_3350(); // 0x243 NEW_2
	func_3151(); // 0x246 NEW_2
	func_714(var_15_float, var_16_int); // 0x249 NEW_2
	return 0; // 0x24b Return
}


func_1024(var_0_bool, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x401 PushI
	var_27_bool = var_25_int != var_26_int; // 0x402 Neq
	if(var_27_bool == 0) goto Label_1029; // 0x403 JumpB
	return 0; // 0x404 Return
	
Label_1029:
	var_28_bool = 0; var_29_object = Obj(); // 0x405 PushV
	var_29_object = var_1_object; // 0x406 MovT
	func_1062(var_28_bool, var_29_object); // 0x407 NEW_2
	var_64_bool = var_28_bool == 0; // 0x409 Not
	if(var_64_bool == 0) goto Label_1036; // 0x40a JumpB
	var_0_bool = 1; // 0x40b TMovB
	
Label_1036:
	var_65_int = 0; // 0x40c PushI
	KillTimer(var_65_int); // 0x40d Func
	Stop(); // 0x40f Func
	return 0; // 0x411 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_354_bool = 0; // 0x4 PushV
	func_3550(var_354_bool); // 0x5 NEW_2
	if(var_354_bool == 0) goto Label_15; // 0x7 JumpB
	var_355_string = ""; // 0x8 PushV
	var_355_string = "Neutral"; // 0x9 MovS
	func_2508(var_355_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_356_bool = var_0_bool; // 0x15 PushT
	if(var_356_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_357_string = "all"; // 0x11 PushS
	var_358_string = "idle"; // 0x12 PushS
	PlayAnimation(var_357_string, var_358_string); // 0x13 Func
}


func_1541(var_584_bool, var_585_float)
{
	var_586_float = 0; var_587_bool = 0; var_588_float = 0; var_589_bool = 0; // 0x605 PushV
	rand(var_588_float); // 0x606 Func
	var_590_bool = var_588_float < var_585_float; // 0x608 LT
	if(var_590_bool == 0) goto Label_1561; // 0x609 JumpB
	
Label_1546:
	IsAnimationPlaying(var_589_bool); // 0x60a Func
	var_591_bool = var_589_bool == 0; // 0x60c Not
	if(var_591_bool == 0) goto Label_1551; // 0x60d JumpB
	goto Label_1560; // 0x60e Jump
	
Label_1560:
	goto Label_1566; // 0x618 Jump
	
Label_1566:
	var_584_bool = 0; // 0x61e MovB
	return 4; // 0x61f Return
	
Label_1551:
	var_592_bool = 0; // 0x60f PushV
	func_1639(var_592_bool); // 0x610 NEW_2
	if(var_592_bool == 0) goto Label_1557; // 0x612 JumpB
	var_584_bool = 1; // 0x613 MovB
	return 4; // 0x614 Return
	
Label_1557:
	sync(); // 0x615 Func
	goto Label_1546; // 0x617 Jump
	
Label_1561:
	WaitForAnimEnd(); // 0x619 Func
	func_1743(var_589_bool); // 0x61c NEW_2
}


func_3080()
{
	var_253_int = 0; var_254_bool = 0; var_255_int = 0; var_256_int = 0; var_257_bool = 0; var_258_int = 0; // 0xc08 PushV
	var_259_int = 0; // 0xc09 PushI
	ClearSubContainer(var_259_int); // 0xc0a Func
	var_260_int = 0; // 0xc0c PushV
	func_2775(var_260_int); // 0xc0d NEW_2
	var_258_int = var_260_int; // 0xc0e Mov
	var_261_int = 0; var_262_int = 0; // 0xc10 PushV
	var_261_int = 0; // 0xc11 MovI
	var_263_int = 10; // 0xc12 PushI
	var_264_int = 5; // 0xc13 PushI
	var_265_float = var_258_int * var_264_int; // 0xc14 Mult
	var_262_int = var_263_int + var_265_float; // 0xc15 Add2
	func_2881(var_261_int, var_262_int); // 0xc16 NEW_2
	var_266_string = ""; var_267_int = 0; var_268_int = 0; // 0xc18 PushV
	var_266_string = "bottle_water"; // 0xc19 MovS
	var_267_int = 1; // 0xc1a MovI
	var_268_int = 3; // 0xc1b MovI
	func_2557(var_266_string, var_267_int, var_268_int); // 0xc1c NEW_2
	var_269_string = ""; var_270_int = 0; var_271_int = 0; // 0xc1e PushV
	var_269_string = "rusk"; // 0xc1f MovS
	var_270_int = 1; // 0xc20 MovI
	var_271_int = 20; // 0xc21 MovI
	func_2557(var_269_string, var_270_int, var_271_int); // 0xc22 NEW_2
	var_272_string = ""; var_273_int = 0; var_274_int = 0; // 0xc24 PushV
	var_272_string = "hook"; // 0xc25 MovS
	var_273_int = 1; // 0xc26 MovI
	var_274_int = 30; // 0xc27 MovI
	func_2557(var_272_string, var_273_int, var_274_int); // 0xc28 NEW_2
	var_275_string = ""; var_276_int = 0; var_277_int = 0; // 0xc2a PushV
	var_275_string = "watch"; // 0xc2b MovS
	var_276_int = 1; // 0xc2c MovI
	var_277_int = 30; // 0xc2d MovI
	func_2557(var_275_string, var_276_int, var_277_int); // 0xc2e NEW_2
	var_278_int = 3; // 0xc30 PushI
	var_279_bool = var_258_int >= var_278_int; // 0xc31 GE
	if(var_279_bool == 0) goto Label_3130; // 0xc32 JumpB
	var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0; // 0xc33 PushV
	var_280_string = "alpha_pills"; // 0xc34 MovS
	var_281_int = 1; // 0xc35 MovI
	var_282_int = 4; // 0xc36 MovI
	var_283_int = 3; // 0xc37 MovI
	func_2568(var_280_string, var_281_int, var_282_int, var_283_int); // 0xc38 NEW_2
	
Label_3130:
	var_284_int = 4; // 0xc3a PushI
	var_285_bool = var_258_int >= var_284_int; // 0xc3b GE
	if(var_285_bool == 0) goto Label_3140; // 0xc3c JumpB
	var_286_string = ""; var_287_int = 0; var_288_int = 0; var_289_int = 0; // 0xc3d PushV
	var_286_string = "beta_pills"; // 0xc3e MovS
	var_287_int = 1; // 0xc3f MovI
	var_288_int = 8; // 0xc40 MovI
	var_289_int = 3; // 0xc41 MovI
	func_2568(var_286_string, var_287_int, var_288_int, var_289_int); // 0xc42 NEW_2
	
Label_3140:
	var_290_int = 6; // 0xc44 PushI
	var_291_bool = var_258_int >= var_290_int; // 0xc45 GE
	if(var_291_bool == 0) goto Label_3150; // 0xc46 JumpB
	var_292_string = ""; var_293_int = 0; var_294_int = 0; var_295_int = 0; // 0xc47 PushV
	var_292_string = "gamma_pills"; // 0xc48 MovS
	var_293_int = 1; // 0xc49 MovI
	var_294_int = 16; // 0xc4a MovI
	var_295_int = 3; // 0xc4b MovI
	func_2568(var_292_string, var_293_int, var_294_int, var_295_int); // 0xc4c NEW_2
	
Label_3150:
	return 6; // 0xc4e Return
}


func_2057(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x809 PushV
	GetPosition(var_55_cvector); // 0x80a Func
	GetPosition(var_56_cvector); // 0x80c ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x80e Sub2
	return 4; // 0x80f Return
}


func_2568(var_34_string, var_35_int, var_36_int, var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0xa08 PushV
	var_42_bool = 0; var_43_int = 0; var_44_int = 0; // 0xa09 PushV
	var_43_int = var_35_int; // 0xa0a Mov
	var_44_int = var_36_int; // 0xa0b Mov
	func_2749(var_42_bool, var_43_int, var_44_int); // 0xa0c NEW_2
	if(var_42_bool == 0) goto Label_2582; // 0xa0e JumpB
	irand(var_40_int, var_37_int); // 0xa0f Func
	var_47_int = 0; // 0xa11 PushI
	var_48_int = 1; // 0xa12 PushI
	var_49_int = var_40_int + var_48_int; // 0xa13 Add
	AddItem(var_41_bool, var_34_string, var_47_int, var_49_int); // 0xa14 Func
	
Label_2582:
	return 4; // 0xa16 Return
}


func_2064(var_96_float)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); // 0x810 PushV
	GetPosition(var_101_cvector); // 0x811 Func
	GetPosition(var_102_cvector); // 0x813 ObjFunc
	var_103_cvector = var_102_cvector - var_101_cvector; // 0x815 Sub2
	var_96_float = var_103_cvector | var_103_cvector; // 0x816 Or2
	return 6; // 0x817 Return
}


func_1046(var_0_bool)
{
	var_0_bool = 1; // 0x416 TMovB
	var_21_int = 0; // 0x417 PushI
	KillTimer(var_21_int); // 0x418 Func
	Stop(); // 0x41a Func
	return 0; // 0x41c Return
}


func_2583(var_194_string)
{
	var_195_bool = 0; var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0; var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_bool = 0; var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); // 0xa17 PushV
	IsExisting3DSound(var_203_bool, var_194_string); // 0xa18 Func
	var_211_bool = var_203_bool == 0; // 0xa1a Not
	if(var_211_bool == 0) goto Label_2608; // 0xa1b JumpB
	var_204_int = 0; // 0xa1c MovI
	
Label_2589:
	var_212_int = 1; // 0xa1d PushI
	var_213_int = var_204_int + var_212_int; // 0xa1e Add
	var_214_int = var_194_string + var_213_int; // 0xa1f Add
	IsExisting3DSound(var_205_bool, var_214_int); // 0xa20 Func
	var_215_bool = var_205_bool == 0; // 0xa22 Not
	if(var_215_bool == 0) goto Label_2597; // 0xa23 JumpB
	goto Label_2600; // 0xa24 Jump
	
Label_2600:
	var_216_bool = var_204_int == 0; // 0xa28 Not
	if(var_216_bool == 0) goto Label_2603; // 0xa29 JumpB
	return 16; // 0xa2a Return
	
Label_2603:
	irand(var_206_int, var_204_int); // 0xa2b Func
	var_217_int = 1; // 0xa2d PushI
	var_218_int = var_206_int + var_217_int; // 0xa2e Add
	var_194_string = var_194_string + var_218_int; // 0xa2f Add2
	
Label_2608:
	Is3DSoundLoaded(var_207_bool, var_194_string); // 0xa30 Func
	var_219_bool = var_207_bool; // 0xa32 Push
	if(var_219_bool == 0) goto Label_2623; // 0xa33 JumpB
	GetEyesHeight(var_208_float); // 0xa34 Func
	GetDirection(var_209_cvector); // 0xa36 Func
	var_220_int = 50; // 0xa38 PushI
	var_210_cvector = var_209_cvector * var_220_int; // 0xa39 Mult2
	var_221_float = GetByIndex(var_210_cvector, 1); // 0xa3a PushE
	var_221_float = var_221_float + var_208_float; // 0xa3b Add2
	SetByIndex(var_210_cvector, 1) = var_221_float; // 0xa3c PopE
	PlayGlobalSound(var_194_string, var_210_cvector); // 0xa3d Func
	
Label_2623:
	return 16; // 0xa3f Return
	
Label_2597:
	var_222_int = 1; // 0xa25 PushI
	var_204_int = var_204_int + var_222_int; // 0xa26 Add2
	goto Label_2589; // 0xa27 Jump
}


func_2072(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x818 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x819 Func
	var_19_bool = var_22_bool; // 0x81b Mov
	return 2; // 0x81c Return
}


func_2077(var_31_bool, var_32_object, var_33_string)
{
	var_34_bool = 0; var_35_bool = 0; // 0x81d PushV
	var_36_string = "HasProperty"; // 0x81e PushS
	var_37_int = 2; // 0x81f PushI
	var_38_bool = IsFuncExist(var_32_object, var_36_string, var_37_int); // 0x820 FuncExist
	var_39_bool = var_38_bool == 0; // 0x821 Not
	if(var_39_bool == 0) goto Label_2085; // 0x822 JumpB
	var_31_bool = 0; // 0x823 MovB
	return 2; // 0x824 Return
	
Label_2085:
	HasProperty(var_33_string, var_35_bool); // 0x825 ObjFunc
	var_31_bool = var_35_bool; // 0x827 Mov
	return 2; // 0x828 Return
}


func_1568(var_0_bool, var_385_bool, var_386_float)
{
	var_387_bool = 0; var_388_cvector = CVector(0,0,0); var_389_cvector = CVector(0,0,0); var_390_cvector = CVector(0,0,0); var_391_float = 0; var_392_bool = 0; var_393_cvector = CVector(0,0,0); var_394_cvector = CVector(0,0,0); var_395_cvector = CVector(0,0,0); var_396_float = 0; // 0x620 PushV
	
Label_1569:
	IsAnimationPlaying(var_392_bool); // 0x621 Func
	var_397_bool = var_392_bool == 0; // 0x623 Not
	if(var_397_bool == 0) goto Label_1574; // 0x624 JumpB
	goto Label_1606; // 0x625 Jump
	
Label_1606:
	func_1743(var_396_float); // 0x647 NEW_2
	var_385_bool = 0; // 0x649 MovB
	return 10; // 0x64a Return
	
Label_1574:
	var_398_bool = 0; // 0x626 PushV
	func_1639(var_398_bool); // 0x627 NEW_2
	if(var_398_bool == 0) goto Label_1580; // 0x629 JumpB
	var_385_bool = 1; // 0x62a MovB
	return 10; // 0x62b Return
	
Label_1580:
	var_441_bool = 0; var_442_object = Obj(); // 0x62c PushV
	var_442_object = var_0_bool; // 0x62d MovT
	func_2203(var_441_bool, var_442_object); // 0x62e NEW_2
	var_443_bool = var_441_bool == 0; // 0x630 Not
	if(var_443_bool == 0) goto Label_1588; // 0x631 JumpB
	var_385_bool = 0; // 0x632 MovB
	return 10; // 0x633 Return
	
Label_1588:
	GetPFPosition(var_393_cvector); // 0x634 TObjFunc
	GetPFPosition(var_394_cvector); // 0x636 Func
	var_395_cvector = var_393_cvector - var_394_cvector; // 0x638 Sub2
	var_396_float = var_395_cvector | var_395_cvector; // 0x639 Or2
	var_444_float = var_386_float * var_386_float; // 0x63a Mult
	var_445_bool = var_396_float < var_444_float; // 0x63b LT
	if(var_445_bool == 0) goto Label_1603; // 0x63c JumpB
	var_446_bool = 0; var_447_float = 0; // 0x63d PushV
	var_447_float = var_386_float; // 0x63e Mov
	func_1404(var_396_float, var_446_bool, var_447_float); // 0x63f NEW_2
	var_385_bool = 1; // 0x641 MovB
	return 10; // 0x642 Return
	
Label_1603:
	sync(); // 0x643 Func
	goto Label_1569; // 0x645 Jump
}


func_1062(var_279_bool, var_280_object)
{
	var_281_bool = 0; var_282_object = Obj(); // 0x427 PushV
	var_282_object = var_280_object; // 0x428 Mov
	func_2203(var_281_bool, var_282_object); // 0x429 NEW_2
	var_279_bool = var_281_bool; // 0x42a Mov
	return 0; // 0x42c Return
}


func_40(var_0_bool, var_141_int, var_142_object)
{
	var_144_object = Obj(); var_145_bool = 0; var_146_int = 0; var_147_bool = 0; var_148_object = Obj(); var_149_bool = 0; var_150_int = 0; var_151_bool = 0; // 0x28 PushV
	var_0_bool = var_142_object; // 0x29 TMov
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; // 0x2a PushV
	var_153_object = var_142_object; // 0x2b Mov
	var_154_float = 70.0; // 0x2c MovF
	func_2364(var_153_object, var_154_float); // 0x2d NEW_2
	var_198_bool = var_152_bool == 0; // 0x2f Not
	if(var_198_bool == 0) goto Label_51; // 0x30 JumpB
	var_141_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_148_object); // 0x33 Func
	var_199_int = 0; // 0x35 PushV
	func_3544(var_199_int); // 0x36 NEW_2
	SetNPCName(var_199_int); // 0x38 ObjFunc
	var_200_int = 0; // 0x3a PushV
	func_3542(var_200_int); // 0x3b NEW_2
	SetNPCDescription(var_200_int); // 0x3d ObjFunc
	var_201_string = ""; // 0x3f PushV
	func_3546(var_201_string); // 0x40 NEW_2
	SetPhoto(var_201_string); // 0x42 ObjFunc
	var_202_string = ""; // 0x44 PushV
	func_3548(var_202_string); // 0x45 NEW_2
	SetPhoto2(var_202_string); // 0x47 ObjFunc
	var_203_int = 0; // 0x49 PushV
	func_2845(var_203_int); // 0x4a NEW_2
	SetPlayerName(var_203_int); // 0x4c ObjFunc
	var_150_int = -1; // 0x4e MovI
	IsOverrideActive(var_149_bool); // 0x4f Func
	var_211_bool = var_149_bool; // 0x51 Push
	if(var_211_bool == 0) goto Label_85; // 0x52 JumpB
	var_141_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_148_object); // 0x55 Func
	var_212_object = Obj(); var_213_object = Obj(); // 0x57 PushV
	var_212_object = var_142_object; // 0x58 Mov
	var_213_object = var_148_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_151_bool); // 0x5e ObjFunc
	
Label_96:
	var_310_bool = var_151_bool == 0; // 0x60 Not
	if(var_310_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_151_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_311_object = Obj(); // 0x67 PushV
	var_311_object = var_142_object; // 0x68 Mov
	func_2432(); // 0x69 NEW_2
	StopDialog(var_148_object); // 0x6b Func
	GetReturnValue(var_150_int); // 0x6d ObjFunc
	var_141_int = var_150_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_2089(var_497_float, var_498_object, var_499_float, var_500_int)
{
	var_504_int = 0; var_505_string = ""; var_506_int = 0; var_507_float = 0; var_508_float = 0; var_509_float = 0; var_510_int = 0; var_511_string = ""; var_512_int = 0; var_513_float = 0; var_514_float = 0; var_515_float = 0; // 0x829 PushV
	var_516_bool = 0; var_517_object = Obj(); var_518_string = ""; // 0x82a PushV
	var_517_object = var_498_object; // 0x82b Mov
	var_518_string = "health"; // 0x82c MovS
	func_2077(var_516_bool, var_517_object, var_518_string); // 0x82d NEW_2
	var_519_bool = var_516_bool == 0; // 0x82f Not
	if(var_519_bool == 0) goto Label_2099; // 0x830 JumpB
	var_497_float = 0.0; // 0x831 MovF
	return 12; // 0x832 Return
	
Label_2099:
	var_520_bool = 0; var_521_object = Obj(); var_522_string = ""; // 0x833 PushV
	var_521_object = var_498_object; // 0x834 Mov
	var_522_string = "armor"; // 0x835 MovS
	func_2077(var_520_bool, var_521_object, var_522_string); // 0x836 NEW_2
	var_523_bool = var_520_bool == 0; // 0x838 Not
	if(var_523_bool == 0) goto Label_2108; // 0x839 JumpB
	var_510_int = 0; // 0x83a MovI
	goto Label_2111; // 0x83b Jump
	
Label_2111:
	var_524_string = "armor_"; // 0x83f PushS
	var_525_string = ""; var_526_int = 0; // 0x840 PushV
	var_526_int = var_500_int; // 0x841 Mov
	func_2043(var_525_string, var_526_int); // 0x842 NEW_2
	var_511_string = var_524_string + var_525_string; // 0x844 Add2
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0x845 PushV
	var_532_object = var_498_object; // 0x846 Mov
	var_533_string = var_511_string; // 0x847 Mov
	func_2077(var_531_bool, var_532_object, var_533_string); // 0x848 NEW_2
	var_534_bool = var_531_bool == 0; // 0x84a Not
	if(var_534_bool == 0) goto Label_2126; // 0x84b JumpB
	var_512_int = 0; // 0x84c MovI
	goto Label_2128; // 0x84d Jump
	
Label_2128:
	var_535_float = 0; var_536_float = 0; var_537_float = 0; // 0x850 PushV
	var_538_int = var_510_int + var_512_int; // 0x851 Add
	var_539_float = 100.0; // 0x852 PushF
	var_536_float = var_538_int / var_538_int; // 0x853 Div2
	var_537_float = 1; // 0x854 MovI
	func_2731(var_535_float, var_536_float, var_537_float); // 0x855 NEW_2
	var_513_float = var_535_float; // 0x856 Mov
	var_541_string = "health"; // 0x858 PushS
	GetProperty(var_541_string, var_514_float); // 0x859 ObjFunc
	var_542_int = 1; // 0x85b PushI
	var_543_int = var_542_int - var_513_float; // 0x85c Sub
	var_515_float = var_499_float * var_543_int; // 0x85d Mult2
	var_544_string = "health"; // 0x85e PushS
	var_545_float = 0; var_546_float = 0; var_547_float = 0; var_548_float = 0; // 0x85f PushV
	var_546_float = var_514_float - var_515_float; // 0x860 Sub2
	var_547_float = 0; // 0x861 MovI
	var_548_float = 1; // 0x862 MovI
	func_2738(var_545_float, var_546_float, var_547_float, var_548_float); // 0x863 NEW_2
	SetProperty(var_544_string, var_545_float); // 0x865 ObjFunc
	var_551_bool = 0; var_552_object = Obj(); // 0x867 PushV
	var_552_object = var_498_object; // 0x868 Mov
	func_2072(var_551_bool, var_552_object); // 0x869 NEW_2
	if(var_551_bool == 0) goto Label_2160; // 0x86b JumpB
	var_553_float = 0; // 0x86c PushV
	var_553_float = -var_515_float; // 0x86d Neg2
	func_2765(var_553_float); // 0x86e NEW_2
	
Label_2160:
	var_497_float = var_515_float; // 0x870 Mov
	return 12; // 0x871 Return
	
Label_2126:
	GetProperty(var_511_string, var_512_int); // 0x84e ObjFunc
	
Label_2108:
	var_557_string = "armor"; // 0x83c PushS
	GetProperty(var_557_string, var_510_int); // 0x83d ObjFunc
}


func_1069(var_297_string)
{
	var_297_string = "walk"; // 0x42d MovS
	return 0; // 0x42e Return
}


func_1071(var_298_string)
{
	var_298_string = "run"; // 0x42f MovS
	return 0; // 0x430 Return
}


func_1073(var_153_object, var_154_bool)
{
	var_161_object = Obj(); var_162_bool = 0; var_163_float = 0; // 0x432 PushV
	var_161_object = var_153_object; // 0x433 Mov
	var_162_bool = var_154_bool; // 0x434 Mov
	var_163_float = 180.0; // 0x435 MovF
	func_1101(var_158_bool, var_159_float, var_160_int, var_153_object, var_154_bool, var_161_object, var_162_bool, var_163_float); // 0x436 NEW_2
	return 0; // 0x438 Return
}


func_1081(var_494_float)
{
	var_494_float = 0.1; // 0x43a MovF
	return 0; // 0x43b Return
}


func_1084(var_501_int)
{
	var_501_int = 0; // 0x43d MovI
	return 0; // 0x43e Return
}


func_2624(var_86_bool, var_87_string)
{
	var_86_bool = 1; // 0xa41 MovB
	var_88_bool = 0; // 0xa42 PushV
	var_88_bool = 1; // 0xa43 MovB
	var_89_bool = 0; // 0xa44 PushV
	var_89_bool = 1; // 0xa45 MovB
	var_90_bool = 0; // 0xa46 PushV
	var_90_bool = 1; // 0xa47 MovB
	var_91_bool = 0; // 0xa48 PushV
	var_91_bool = 1; // 0xa49 MovB
	var_92_bool = 0; // 0xa4a PushV
	var_92_bool = 1; // 0xa4b MovB
	var_93_bool = 0; // 0xa4c PushV
	var_93_bool = 1; // 0xa4d MovB
	var_94_bool = 0; // 0xa4e PushV
	var_94_bool = 1; // 0xa4f MovB
	var_95_bool = 0; // 0xa50 PushV
	var_95_bool = 1; // 0xa51 MovB
	var_96_bool = 0; // 0xa52 PushV
	var_96_bool = 1; // 0xa53 MovB
	var_97_bool = 0; // 0xa54 PushV
	var_97_bool = 1; // 0xa55 MovB
	var_98_bool = 0; // 0xa56 PushV
	var_98_bool = 1; // 0xa57 MovB
	var_99_string = "woman"; // 0xa58 PushS
	var_100_bool = var_87_string == var_99_string; // 0xa59 Eq
	if(var_100_bool == 0) goto Label_2655; // 0xa5a JumpB
	var_101_string = "worker"; // 0xa5b PushS
	var_102_bool = var_87_string == var_101_string; // 0xa5c Eq
	if(var_102_bool == 0) goto Label_2655; // 0xa5d JumpB
	var_98_bool = 0; // 0xa5e MovB
	
Label_2655:
	if(var_98_bool == 0) goto Label_2660; // 0xa5f JumpB
	var_103_string = "butcher"; // 0xa60 PushS
	var_104_bool = var_87_string == var_103_string; // 0xa61 Eq
	if(var_104_bool == 0) goto Label_2660; // 0xa62 JumpB
	var_97_bool = 0; // 0xa63 MovB
	
Label_2660:
	if(var_97_bool == 0) goto Label_2665; // 0xa64 JumpB
	var_105_string = "wasted_girl"; // 0xa65 PushS
	var_106_bool = var_87_string == var_105_string; // 0xa66 Eq
	if(var_106_bool == 0) goto Label_2665; // 0xa67 JumpB
	var_96_bool = 0; // 0xa68 MovB
	
Label_2665:
	if(var_96_bool == 0) goto Label_2670; // 0xa69 JumpB
	var_107_string = "boy"; // 0xa6a PushS
	var_108_bool = var_87_string == var_107_string; // 0xa6b Eq
	if(var_108_bool == 0) goto Label_2670; // 0xa6c JumpB
	var_95_bool = 0; // 0xa6d MovB
	
Label_2670:
	if(var_95_bool == 0) goto Label_2675; // 0xa6e JumpB
	var_109_string = "vaxxabitka"; // 0xa6f PushS
	var_110_bool = var_87_string == var_109_string; // 0xa70 Eq
	if(var_110_bool == 0) goto Label_2675; // 0xa71 JumpB
	var_94_bool = 0; // 0xa72 MovB
	
Label_2675:
	if(var_94_bool == 0) goto Label_2680; // 0xa73 JumpB
	var_111_string = "unosha"; // 0xa74 PushS
	var_112_bool = var_87_string == var_111_string; // 0xa75 Eq
	if(var_112_bool == 0) goto Label_2680; // 0xa76 JumpB
	var_93_bool = 0; // 0xa77 MovB
	
Label_2680:
	if(var_93_bool == 0) goto Label_2685; // 0xa78 JumpB
	var_113_string = "wasted_male"; // 0xa79 PushS
	var_114_bool = var_87_string == var_113_string; // 0xa7a Eq
	if(var_114_bool == 0) goto Label_2685; // 0xa7b JumpB
	var_92_bool = 0; // 0xa7c MovB
	
Label_2685:
	if(var_92_bool == 0) goto Label_2690; // 0xa7d JumpB
	var_115_string = "alkash"; // 0xa7e PushS
	var_116_bool = var_87_string == var_115_string; // 0xa7f Eq
	if(var_116_bool == 0) goto Label_2690; // 0xa80 JumpB
	var_91_bool = 0; // 0xa81 MovB
	
Label_2690:
	if(var_91_bool == 0) goto Label_2695; // 0xa82 JumpB
	var_117_string = "dohodyaga"; // 0xa83 PushS
	var_118_bool = var_87_string == var_117_string; // 0xa84 Eq
	if(var_118_bool == 0) goto Label_2695; // 0xa85 JumpB
	var_90_bool = 0; // 0xa86 MovB
	
Label_2695:
	if(var_90_bool == 0) goto Label_2700; // 0xa87 JumpB
	var_119_string = "vaxxabit"; // 0xa88 PushS
	var_120_bool = var_87_string == var_119_string; // 0xa89 Eq
	if(var_120_bool == 0) goto Label_2700; // 0xa8a JumpB
	var_89_bool = 0; // 0xa8b MovB
	
Label_2700:
	if(var_89_bool == 0) goto Label_2705; // 0xa8c JumpB
	var_121_string = "nudegirl"; // 0xa8d PushS
	var_122_bool = var_87_string == var_121_string; // 0xa8e Eq
	if(var_122_bool == 0) goto Label_2705; // 0xa8f JumpB
	var_88_bool = 0; // 0xa90 MovB
	
Label_2705:
	if(var_88_bool == 0) goto Label_2710; // 0xa91 JumpB
	var_123_string = "morlok"; // 0xa92 PushS
	var_124_bool = var_87_string == var_123_string; // 0xa93 Eq
	if(var_124_bool == 0) goto Label_2710; // 0xa94 JumpB
	var_86_bool = 0; // 0xa95 MovB
	
Label_2710:
	return 0; // 0xa96 Return
}


func_1611(var_0_bool, var_400_bool)
{
	var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_float = 0; // 0x64b PushV
	var_411_bool = 0; var_412_object = Obj(); // 0x64c PushV
	var_412_object = var_0_bool; // 0x64d MovT
	func_2203(var_411_bool, var_412_object); // 0x64e NEW_2
	var_413_bool = var_411_bool == 0; // 0x650 Not
	if(var_413_bool == 0) goto Label_1620; // 0x651 JumpB
	var_400_bool = 0; // 0x652 MovB
	return 10; // 0x653 Return
	
Label_1620:
	var_414_bool = 0; // 0x654 PushV
	func_1700(var_410_float, var_414_bool); // 0x655 NEW_2
	if(var_414_bool == 0) goto Label_1637; // 0x657 JumpB
	GetPFPosition(var_406_cvector); // 0x658 TObjFunc
	GetPFPosition(var_407_cvector); // 0x65a Func
	var_408_cvector = var_406_cvector - var_407_cvector; // 0x65c Sub2
	var_409_float = var_408_cvector | var_408_cvector; // 0x65d Or2
	GetAttackDistance(var_410_float); // 0x65e TObjFunc
	var_415_int = 50; // 0x660 PushI
	var_410_float = var_410_float + var_415_int; // 0x661 Add2
	var_416_float = var_410_float * var_410_float; // 0x662 Mult
	var_400_bool = var_409_float <= var_416_float; // 0x663 LE2
	return 10; // 0x664 Return
	
Label_1637:
	var_400_bool = 0; // 0x665 MovB
	return 10; // 0x666 Return
}


func_1101(var_0_bool, var_3_object, var_5_bool, var_161_object, var_162_bool, var_163_float, var_236_bool, var_326_bool)
{
	var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_bool = 0; var_168_bool = 0; var_169_float = 0; var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_bool = 0; var_174_float = 0; var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_float = 0; var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_float = 0; // 0x44d PushV
	func_1330(var_183_cvector, var_184_bool, var_185_float); // 0x44f NEW_2
	var_5_bool = 0; // 0x451 TMovI
	var_208_string = "@GetAttackDistance"; // 0x452 PushS
	var_209_int = 1; // 0x453 PushI
	var_210_bool = IsFuncExist(var_161_object, var_208_string, var_209_int); // 0x454 FuncExist
	if(var_210_bool == 0) goto Label_1115; // 0x455 JumpB
	GetAttackDistance(var_175_float); // 0x456 ObjFunc
	var_211_int = 50; // 0x458 PushI
	var_175_float = var_175_float + var_211_int; // 0x459 Add2
	goto Label_1116; // 0x45a Jump
	
Label_1116:
	var_212_int = 150; // 0x45c PushI
	var_213_bool = var_175_float >= var_212_int; // 0x45d GE
	if(var_213_bool == 0) goto Label_1120; // 0x45e JumpB
	var_175_float = 150; // 0x45f MovI
	
Label_1120:
	var_3_object = 0; // 0x460 TMovB
	var_0_bool = var_161_object; // 0x461 TMov
	IsPlayerActor(var_0_bool, var_178_bool); // 0x462 Func
	var_214_bool = var_178_bool; // 0x464 Push
	if(var_214_bool == 0) goto Label_1134; // 0x465 JumpB
	var_215_string = "attack"; // 0x466 PushS
	PlayGlobalMusic(var_215_string); // 0x467 Func
	var_216_object = Obj(); // 0x469 PushV
	func_2711(var_216_object); // 0x46a NEW_2
	SendPlayerEnemy(var_161_object, var_216_object); // 0x46c Func
	
Label_1134:
	var_217_bool = var_162_bool; // 0x46e Push
	if(var_217_bool == 0) goto Label_1138; // 0x46f JumpB
	var_179_bool = 0; // 0x470 MovB
	goto Label_1139; // 0x471 Jump
	
Label_1139:
	var_218_float = 300.0; // 0x473 PushF
	var_180_float = var_218_float + var_175_float; // 0x474 Add2
	
Label_1141:
	var_219_bool = 0; // 0x475 PushV
	var_219_bool = 0; // 0x476 MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x477 PushV
	var_221_object = var_0_bool; // 0x478 MovT
	func_2203(var_220_bool, var_221_object); // 0x479 NEW_2
	if(var_220_bool == 0) goto Label_1151; // 0x47b JumpB
	var_222_bool = var_3_object == 0; // 0x47c Not
	if(var_222_bool == 0) goto Label_1151; // 0x47d JumpB
	var_219_bool = 1; // 0x47e MovB
	
Label_1151:
	if(var_219_bool == 0) goto Label_1313; // 0x47f JumpB
	func_1743(var_185_float); // 0x481 NEW_2
	GetPFPosition(var_176_cvector); // 0x483 TObjFunc
	GetPFPosition(var_177_cvector); // 0x485 Func
	var_181_cvector = var_176_cvector - var_177_cvector; // 0x487 Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x488 Or2
	var_228_float = var_180_float * var_180_float; // 0x489 Mult
	var_229_bool = var_182_float >= var_228_float; // 0x48a GE
	if(var_229_bool == 0) goto Label_1179; // 0x48b JumpB
	var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0; // 0x48c PushV
	var_231_object = var_0_bool; // 0x48d MovT
	var_232_float = var_175_float; // 0x48e Mov
	var_233_float = 3000.0; // 0x48f MovF
	var_234_bool = 1; // 0x490 MovB
	var_235_bool = 0; // 0x491 MovB
	TaskCall(4); // 0x492 TaskCall
	func_817(var_238_bool, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool); // 0x493 NEW_2
	TaskReturn(); // 0x494 TaskReturn
	var_311_bool = var_236_bool == 0; // 0x496 Not
	if(var_311_bool == 0) goto Label_1177; // 0x497 JumpB
	goto Label_1313; // 0x498 Jump
	
Label_1313:
	WaitForAnimEnd(); // 0x521 Func
	var_312_object = var_3_object; // 0x523 PushT
	if(var_312_object == 0) goto Label_1318; // 0x524 JumpB
	return 22; // 0x525 Return
	
Label_1318:
	var_313_string = "all"; // 0x526 PushS
	var_314_string = "attack_off"; // 0x527 PushS
	PlayAnimation(var_313_string, var_314_string); // 0x528 Func
	WaitForAnimEnd(); // 0x52a Func
	var_315_bool = var_178_bool; // 0x52c Push
	if(var_315_bool == 0) goto Label_1329; // 0x52d JumpB
	var_316_float = 2.0; // 0x52e PushF
	Sleep(var_316_float); // 0x52f Func
	
Label_1329:
	return 22; // 0x531 Return
	
Label_1177:
	var_179_bool = 0; // 0x499 MovB
	goto Label_1312; // 0x49a Jump
	
Label_1312:
	goto Label_1141; // 0x520 Jump
	
Label_1179:
	var_317_float = var_163_float * var_163_float; // 0x49b Mult
	var_318_bool = var_182_float >= var_317_float; // 0x49c GE
	if(var_318_bool == 0) goto Label_1304; // 0x49d JumpB
	GetPFPosition(var_183_cvector); // 0x49e TObjFunc
	CanReachByPF(var_184_bool, var_183_cvector); // 0x4a0 Func
	var_319_bool = var_184_bool == 0; // 0x4a2 Not
	if(var_319_bool == 0) goto Label_1203; // 0x4a3 JumpB
	var_320_bool = 0; var_321_object = Obj(); var_322_float = 0; var_323_float = 0; var_324_bool = 0; var_325_bool = 0; // 0x4a4 PushV
	var_321_object = var_0_bool; // 0x4a5 MovT
	var_322_float = var_175_float; // 0x4a6 Mov
	var_323_float = 3000.0; // 0x4a7 MovF
	var_324_bool = 1; // 0x4a8 MovB
	var_325_bool = 0; // 0x4a9 MovB
	TaskCall(4); // 0x4aa TaskCall
	func_817(var_328_bool, var_320_bool, var_321_object, var_322_float, var_323_float, var_324_bool, var_325_bool); // 0x4ab NEW_2
	TaskReturn(); // 0x4ac TaskReturn
	var_329_bool = var_326_bool == 0; // 0x4ae Not
	if(var_329_bool == 0) goto Label_1201; // 0x4af JumpB
	goto Label_1313; // 0x4b0 Jump
	
Label_1201:
	var_179_bool = 0; // 0x4b1 MovB
	goto Label_1141; // 0x4b2 Jump
	
Label_1203:
	var_330_bool = var_179_bool == 0; // 0x4b3 Not
	if(var_330_bool == 0) goto Label_1228; // 0x4b4 JumpB
	var_331_object = Obj(); // 0x4b5 PushV
	var_331_object = var_0_bool; // 0x4b6 MovT
	func_2353(); // 0x4b7 NEW_2
	var_340_string = "all"; // 0x4b9 PushS
	var_341_string = "attack_on"; // 0x4ba PushS
	PlayAnimation(var_340_string, var_341_string); // 0x4bb Func
	WaitForAnimEnd(); // 0x4bd Func
	func_1743(var_185_float); // 0x4c0 NEW_2
	StopAsync(); // 0x4c2 Func
	var_179_bool = 1; // 0x4c4 MovB
	var_342_bool = 0; var_343_object = Obj(); // 0x4c5 PushV
	var_343_object = var_0_bool; // 0x4c6 MovT
	func_2203(var_342_bool, var_343_object); // 0x4c7 NEW_2
	var_344_bool = var_342_bool == 0; // 0x4c9 Not
	if(var_344_bool == 0) goto Label_1228; // 0x4ca JumpB
	goto Label_1313; // 0x4cb Jump
	
Label_1228:
	rand(var_185_float); // 0x4cc Func
	var_345_bool = 0; // 0x4ce PushV
	var_345_bool = 1; // 0x4cf MovB
	var_346_float = 0.6; // 0x4d0 PushF
	var_347_bool = var_185_float < var_346_float; // 0x4d1 LT
	if(var_347_bool == 0) goto Label_1240; // 0x4d2 JumpB
	var_348_bool = 0; // 0x4d3 PushV
	func_1700(var_345_bool, var_348_bool); // 0x4d4 NEW_2
	if(var_348_bool == 0) goto Label_1240; // 0x4d6 JumpB
	var_345_bool = 0; // 0x4d7 MovB
	
Label_1240:
	if(var_345_bool == 0) goto Label_1257; // 0x4d8 JumpB
	Face(var_0_bool); // 0x4d9 Func
	func_1750(); // 0x4dc NEW_2
	var_383_string = "all"; // 0x4de PushS
	var_384_string = "attack_stay"; // 0x4df PushS
	PlayAnimation(var_383_string, var_384_string); // 0x4e0 Func
	var_385_bool = 0; var_386_float = 0; // 0x4e2 PushV
	var_386_float = var_163_float; // 0x4e3 Mov
	func_1568(var_185_float, var_385_bool, var_386_float); // 0x4e4 NEW_2
	StopAsync(); // 0x4e6 Func
	goto Label_1303; // 0x4e8 Jump
	
Label_1303:
	goto Label_1312; // 0x517 Jump
	
Label_1257:
	Face(var_0_bool); // 0x4e9 Func
	var_600_string = "all"; // 0x4eb PushS
	var_601_string = "fjump"; // 0x4ec PushS
	PlayAnimation(var_600_string, var_601_string); // 0x4ed Func
	WaitForAnimEnd(); // 0x4ef Func
	func_1743(var_185_float); // 0x4f2 NEW_2
	var_602_cvector = CVector(0.0, 0.0, 0.0); // 0x4f4 PushVec
	SetSpeed(var_602_cvector); // 0x4f5 Func
	Stop(); // 0x4f7 Func
	StopAsync(); // 0x4f9 Func
	var_603_bool = 0; // 0x4fb PushV
	func_1700(var_185_float, var_603_bool); // 0x4fc NEW_2
	var_604_bool = var_603_bool == 0; // 0x4fe Not
	if(var_604_bool == 0) goto Label_1303; // 0x4ff JumpB
	var_605_bool = 0; var_606_object = Obj(); // 0x500 PushV
	var_606_object = var_0_bool; // 0x501 MovT
	func_2203(var_605_bool, var_606_object); // 0x502 NEW_2
	var_607_bool = var_605_bool == 0; // 0x504 Not
	if(var_607_bool == 0) goto Label_1287; // 0x505 JumpB
	goto Label_1313; // 0x506 Jump
	
Label_1287:
	GetPFPosition(var_176_cvector); // 0x507 TObjFunc
	GetPFPosition(var_177_cvector); // 0x509 Func
	var_181_cvector = var_176_cvector - var_177_cvector; // 0x50b Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x50c Or2
	var_608_float = var_163_float * var_163_float; // 0x50d Mult
	var_609_bool = var_182_float < var_608_float; // 0x50e LT
	if(var_609_bool == 0) goto Label_1303; // 0x50f JumpB
	var_610_bool = 0; var_611_float = 0; // 0x510 PushV
	var_611_float = var_163_float; // 0x511 Mov
	func_1404(var_185_float, var_610_bool, var_611_float); // 0x512 NEW_2
	var_612_bool = var_610_bool == 0; // 0x514 Not
	if(var_612_bool == 0) goto Label_1303; // 0x515 JumpB
	goto Label_1313; // 0x516 Jump
	
Label_1304:
	var_613_bool = 0; var_614_float = 0; // 0x518 PushV
	var_614_float = var_163_float; // 0x519 Mov
	func_1404(var_185_float, var_613_bool, var_614_float); // 0x51a NEW_2
	var_615_bool = var_613_bool == 0; // 0x51c Not
	if(var_615_bool == 0) goto Label_1311; // 0x51d JumpB
	goto Label_1313; // 0x51e Jump
	
Label_1311:
	var_179_bool = 1; // 0x51f MovB
	
Label_1138:
	var_179_bool = 1; // 0x472 MovB
	
Label_1115:
	var_175_float = var_163_float; // 0x45b Mov
}


func_3151()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xc4f PushV
	var_27_int = 0; // 0xc50 PushI
	ClearSubContainer(var_27_int); // 0xc51 Func
	var_28_int = 0; // 0xc53 PushV
	func_2775(var_28_int); // 0xc54 NEW_2
	var_26_int = var_28_int; // 0xc55 Mov
	var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0xc57 PushV
	var_34_string = "fresh_meat"; // 0xc58 MovS
	var_35_int = 1; // 0xc59 MovI
	var_36_int = 4; // 0xc5a MovI
	var_37_int = 3; // 0xc5b MovI
	func_2568(var_34_string, var_35_int, var_36_int, var_37_int); // 0xc5c NEW_2
	var_50_string = ""; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0xc5e PushV
	var_50_string = "dried_meat"; // 0xc5f MovS
	var_51_int = 1; // 0xc60 MovI
	var_52_int = 4; // 0xc61 MovI
	var_53_int = 3; // 0xc62 MovI
	func_2568(var_50_string, var_51_int, var_52_int, var_53_int); // 0xc63 NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0; // 0xc65 PushV
	var_54_string = "smoked_meat"; // 0xc66 MovS
	var_55_int = 1; // 0xc67 MovI
	var_56_int = 4; // 0xc68 MovI
	var_57_int = 3; // 0xc69 MovI
	func_2568(var_54_string, var_55_int, var_56_int, var_57_int); // 0xc6a NEW_2
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0xc6c PushV
	var_58_string = "vegetables"; // 0xc6d MovS
	var_59_int = 1; // 0xc6e MovI
	var_60_int = 3; // 0xc6f MovI
	var_61_int = 3; // 0xc70 MovI
	func_2568(var_58_string, var_59_int, var_60_int, var_61_int); // 0xc71 NEW_2
	var_62_int = 3; // 0xc73 PushI
	var_63_bool = var_26_int >= var_62_int; // 0xc74 GE
	if(var_63_bool == 0) goto Label_3208; // 0xc75 JumpB
	var_64_string = ""; var_65_int = 0; var_66_int = 0; // 0xc76 PushV
	var_64_string = "revolver_ammo"; // 0xc77 MovS
	var_65_int = 1; // 0xc78 MovI
	var_66_int = 5; // 0xc79 MovI
	func_2557(var_64_string, var_65_int, var_66_int); // 0xc7a NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0xc7c PushV
	var_73_string = "rifle_ammo"; // 0xc7d MovS
	var_74_int = 1; // 0xc7e MovI
	var_75_int = 5; // 0xc7f MovI
	func_2557(var_73_string, var_74_int, var_75_int); // 0xc80 NEW_2
	var_76_string = ""; var_77_int = 0; var_78_int = 0; // 0xc82 PushV
	var_76_string = "samopal_ammo"; // 0xc83 MovS
	var_77_int = 1; // 0xc84 MovI
	var_78_int = 5; // 0xc85 MovI
	func_2557(var_76_string, var_77_int, var_78_int); // 0xc86 NEW_2
	
Label_3208:
	return 6; // 0xc88 Return
}


func_595()
{
	var_151_int = 1; // 0x253 PushI
	KillTimer(var_151_int); // 0x254 Func
	func_798(); // 0x257 NEW_2
	return 0; // 0x259 Return
}


func_1639(var_398_bool)
{
	var_399_bool = 0; // 0x667 PushV
	var_399_bool = 0; // 0x668 MovB
	var_400_bool = 0; // 0x669 PushV
	func_1611(var_399_bool, var_400_bool); // 0x66a NEW_2
	if(var_400_bool == 0) goto Label_1650; // 0x66c JumpB
	var_417_bool = 0; // 0x66d PushV
	func_1655(var_398_bool, var_399_bool, var_417_bool); // 0x66e NEW_2
	if(var_417_bool == 0) goto Label_1650; // 0x670 JumpB
	var_399_bool = 1; // 0x671 MovB
	
Label_1650:
	if(var_399_bool == 0) goto Label_1653; // 0x672 JumpB
	var_398_bool = 1; // 0x673 MovB
	return 0; // 0x674 Return
	
Label_1653:
	var_398_bool = 0; // 0x675 MovB
	return 0; // 0x676 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_212_object, var_213_object)
{
	var_0_bool = var_213_object; // 0x73 TMov
	var_1_object = var_212_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_218_int = 1; // 0x76 PushI
	if(var_218_int == 0) goto Label_213; // 0x77 JumpB
	var_219_string = ""; // 0x78 PushV
	var_219_string = "Neutral"; // 0x79 MovS
	func_243(var_213_object, var_219_string); // 0x7a NEW_2
	var_236_int = 537935; // 0x7c PushI
	SetMessage(var_236_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_237_bool = 0; var_238_object = Obj(); // 0x81 PushV
	var_238_object = var_1_object; // 0x82 MovT
	func_2821(var_238_object); // 0x83 NEW_2
	var_245_bool = var_237_bool == 0; // 0x85 Not
	if(var_245_bool == 0) goto Label_140; // 0x86 JumpB
	var_246_int = 537936; // 0x87 PushI
	var_247_int = -1; // 0x88 PushI
	var_248_int = 39797; // 0x89 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x8a TObjFunc
	
Label_140:
	var_249_bool = 0; var_250_object = Obj(); // 0x8c PushV
	var_250_object = var_1_object; // 0x8d MovT
	func_2821(var_250_object); // 0x8e NEW_2
	if(var_249_bool == 0) goto Label_150; // 0x90 JumpB
	var_251_int = 537937; // 0x91 PushI
	var_252_int = -1; // 0x92 PushI
	var_253_int = 39798; // 0x93 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x94 TObjFunc
	
Label_150:
	var_254_bool = 0; var_255_object = Obj(); // 0x96 PushV
	var_255_object = var_1_object; // 0x97 MovT
	func_2809(var_255_object); // 0x98 NEW_2
	if(var_254_bool == 0) goto Label_160; // 0x9a JumpB
	var_260_int = 537938; // 0x9b PushI
	var_261_int = 39800; // 0x9c PushI
	var_262_int = 39799; // 0x9d PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x9e TObjFunc
	
Label_160:
	var_263_bool = 0; var_264_object = Obj(); // 0xa0 PushV
	var_264_object = var_1_object; // 0xa1 MovT
	func_2821(var_264_object); // 0xa2 NEW_2
	if(var_263_bool == 0) goto Label_170; // 0xa4 JumpB
	var_265_int = 537951; // 0xa5 PushI
	var_266_int = 39813; // 0xa6 PushI
	var_267_int = 39812; // 0xa7 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xa8 TObjFunc
	
Label_170:
	var_268_bool = 0; var_269_object = Obj(); // 0xaa PushV
	var_269_object = var_1_object; // 0xab MovT
	func_2833(var_269_object); // 0xac NEW_2
	if(var_268_bool == 0) goto Label_180; // 0xae JumpB
	var_274_int = 537964; // 0xaf PushI
	var_275_int = -1; // 0xb0 PushI
	var_276_int = 39826; // 0xb1 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xb2 TObjFunc
	
Label_180:
	var_277_bool = 0; var_278_object = Obj(); // 0xb4 PushV
	var_278_object = var_1_object; // 0xb5 MovT
	func_2809(var_278_object); // 0xb6 NEW_2
	if(var_277_bool == 0) goto Label_190; // 0xb8 JumpB
	var_279_int = 537965; // 0xb9 PushI
	var_280_int = -1; // 0xba PushI
	var_281_int = 39827; // 0xbb PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xbc TObjFunc
	
Label_190:
	var_282_bool = 0; var_283_object = Obj(); // 0xbe PushV
	var_283_object = var_1_object; // 0xbf MovT
	func_2833(var_283_object); // 0xc0 NEW_2
	if(var_282_bool == 0) goto Label_200; // 0xc2 JumpB
	var_284_int = 537966; // 0xc3 PushI
	var_285_int = -1; // 0xc4 PushI
	var_286_int = 39828; // 0xc5 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xc6 TObjFunc
	
Label_200:
	var_287_bool = 0; var_288_object = Obj(); // 0xc8 PushV
	var_288_object = var_1_object; // 0xc9 MovT
	func_2821(var_288_object); // 0xca NEW_2
	if(var_287_bool == 0) goto Label_210; // 0xcc JumpB
	var_289_int = 537967; // 0xcd PushI
	var_290_int = -1; // 0xce PushI
	var_291_int = 39829; // 0xcf PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xd0 TObjFunc
	
Label_210:
	goto Label_213; // 0xd2 Jump
	
Label_213:
	var_292_bool = 0; // 0xd5 PushV
	func_3550(var_292_bool); // 0xd6 NEW_2
	if(var_292_bool == 0) goto Label_228; // 0xd8 JumpB
	
Label_217:
	lshWaitForAnimEnd(); // 0xd9 Func
	var_293_object = var_3_object; // 0xdb PushT
	if(var_293_object == 0) goto Label_222; // 0xdc JumpB
	goto Label_227; // 0xdd Jump
	
Label_227:
	goto Label_242; // 0xe3 Jump
	
Label_242:
	return 0; // 0xf2 Return
	
Label_222:
	var_294_string = ""; // 0xde PushV
	var_294_string = var_2_object; // 0xdf MovT
	func_2508(var_294_string); // 0xe0 NEW_2
	goto Label_217; // 0xe2 Jump
	
Label_228:
	var_305_string = "all"; // 0xe4 PushS
	var_306_string = "idle"; // 0xe5 PushS
	PlayAnimation(var_305_string, var_306_string); // 0xe6 Func
	
Label_232:
	WaitForAnimEnd(); // 0xe8 Func
	var_307_object = var_3_object; // 0xea PushT
	if(var_307_object == 0) goto Label_237; // 0xeb JumpB
	goto Label_242; // 0xec Jump
	
Label_237:
	var_308_string = "all"; // 0xed PushS
	var_309_string = "idle"; // 0xee PushS
	PlayAnimation(var_308_string, var_309_string); // 0xef Func
	goto Label_232; // 0xf1 Jump
}


func_2162(var_122_bool)
{
	var_124_bool = 0; var_125_bool = 0; // 0x872 PushV
	IsDead(var_125_bool); // 0x873 ObjFunc
	var_122_bool = var_125_bool; // 0x875 Mov
	return 2; // 0x876 Return
}


func_1655(var_0_bool, var_4_string, var_417_bool)
{
	var_418_object = Obj(); var_419_bool = 0; var_420_float = 0; var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_object = Obj(); var_424_bool = 0; var_425_float = 0; var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); // 0x677 PushV
	GetScene(var_423_object); // 0x678 Func
	var_424_bool = 0; // 0x67a MovB
	
Label_1659:
	var_428_cvector = CVector(0,0,0); var_429_object = Obj(); // 0x67b PushV
	var_429_object = var_0_bool; // 0x67c MovT
	func_2057(var_429_object); // 0x67d NEW_2
	var_434_int = -var_428_cvector; // 0x67f Neg
	FindDirLength(var_425_float, var_434_int, var_425_float); // 0x680 Func
	var_435_bool = var_425_float < var_4_string; // 0x682 LT
	if(var_435_bool == 0) goto Label_1669; // 0x683 JumpB
	goto Label_1697; // 0x684 Jump
	
Label_1697:
	var_417_bool = var_424_bool; // 0x6a1 Mov
	return 10; // 0x6a2 Return
	
Label_1669:
	Face(var_0_bool); // 0x685 Func
	var_436_string = "all"; // 0x687 PushS
	var_437_string = "bjump"; // 0x688 PushS
	PlayAnimation(var_436_string, var_437_string); // 0x689 Func
	GetPFPosition(var_426_cvector); // 0x68b TObjFunc
	GetPFPosition(var_427_cvector); // 0x68d Func
	WaitForAnimEnd(); // 0x68f Func
	func_1743(var_427_cvector); // 0x692 NEW_2
	StopAsync(); // 0x694 Func
	var_438_cvector = CVector(0.0, 0.0, 0.0); // 0x696 PushVec
	SetSpeed(var_438_cvector); // 0x697 Func
	var_424_bool = 1; // 0x699 MovB
	var_439_bool = 0; // 0x69a PushV
	func_1611(var_427_cvector, var_439_bool); // 0x69b NEW_2
	var_440_bool = var_439_bool == 0; // 0x69d Not
	if(var_440_bool == 0) goto Label_1696; // 0x69e JumpB
	goto Label_1697; // 0x69f Jump
	
Label_1696:
	goto Label_1659; // 0x6a0 Jump
}


func_2167(var_111_bool, var_112_object)
{
	var_113_object = Obj(); var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj(); // 0x877 PushV
	var_117_bool = var_112_object == 0; // 0x878 NullEq
	if(var_117_bool == 0) goto Label_2172; // 0x879 JumpB
	var_111_bool = 0; // 0x87a MovB
	return 4; // 0x87b Return
	
Label_2172:
	var_118_bool = 0; // 0x87c PushV
	var_118_bool = 0; // 0x87d MovB
	var_119_string = "IsDead"; // 0x87e PushS
	var_120_int = 1; // 0x87f PushI
	var_121_bool = IsFuncExist(var_112_object, var_119_string, var_120_int); // 0x880 FuncExist
	if(var_121_bool == 0) goto Label_2184; // 0x881 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x882 PushV
	var_123_object = var_112_object; // 0x883 Mov
	func_2162(var_123_object); // 0x884 NEW_2
	if(var_122_bool == 0) goto Label_2184; // 0x886 JumpB
	var_118_bool = 1; // 0x887 MovB
	
Label_2184:
	if(var_118_bool == 0) goto Label_2187; // 0x888 JumpB
	var_111_bool = 0; // 0x889 MovB
	return 4; // 0x88a Return
	
Label_2187:
	GetScene(var_115_object); // 0x88b Func
	var_126_bool = var_115_object == 0; // 0x88d NullEq
	if(var_126_bool == 0) goto Label_2193; // 0x88e JumpB
	var_111_bool = 0; // 0x88f MovB
	return 4; // 0x890 Return
	
Label_2193:
	GetScene(var_116_object); // 0x891 ObjFunc
	var_127_bool = var_115_object != var_116_object; // 0x893 Neq
	if(var_127_bool == 0) goto Label_2199; // 0x894 JumpB
	var_111_bool = 0; // 0x895 MovB
	return 4; // 0x896 Return
	
Label_2199:
	var_111_bool = 1; // 0x897 MovB
	return 4; // 0x898 Return
}


func_635()
{
	var_87_int = 1; // 0x27b PushI
	var_88_float = 2.0; // 0x27c PushF
	SetTimer(var_87_int, var_88_float); // 0x27d Func
	return 0; // 0x27f Return
}


func_640()
{
	return 0; // 0x280 Return
}


func_3209(var_66_int, var_67_string)
{
	var_68_int = 0; var_69_int = 0; // 0xc89 PushV
	GetInvItemByName(var_69_int, var_67_string); // 0xc8a Func
	var_66_int = var_69_int; // 0xc8c Mov
	return 2; // 0xc8d Return
}


func_3214(var_26_bool, var_27_object, var_28_bool)
{
	var_29_string = ""; var_30_string = ""; // 0xc8e PushV
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xc8f PushV
	var_32_object = var_27_object; // 0xc90 Mov
	var_33_string = "class"; // 0xc91 MovS
	func_2077(var_31_bool, var_32_object, var_33_string); // 0xc92 NEW_2
	var_40_bool = var_31_bool == 0; // 0xc94 Not
	if(var_40_bool == 0) goto Label_3224; // 0xc95 JumpB
	var_26_bool = 0; // 0xc96 MovB
	return 2; // 0xc97 Return
	
Label_3224:
	var_41_string = "class"; // 0xc98 PushS
	GetProperty(var_41_string, var_30_string); // 0xc99 ObjFunc
	var_42_bool = 0; // 0xc9b PushV
	var_42_bool = 1; // 0xc9c MovB
	var_43_bool = 0; // 0xc9d PushV
	var_43_bool = 1; // 0xc9e MovB
	var_44_bool = 0; // 0xc9f PushV
	var_44_bool = 1; // 0xca0 MovB
	var_45_bool = 0; // 0xca1 PushV
	var_45_bool = 1; // 0xca2 MovB
	var_46_bool = 0; // 0xca3 PushV
	var_46_bool = 1; // 0xca4 MovB
	var_47_bool = 0; // 0xca5 PushV
	var_47_bool = 1; // 0xca6 MovB
	var_48_bool = 0; // 0xca7 PushV
	var_48_bool = 1; // 0xca8 MovB
	var_49_bool = 0; // 0xca9 PushV
	var_49_bool = 1; // 0xcaa MovB
	var_50_bool = 0; // 0xcab PushV
	var_50_bool = 1; // 0xcac MovB
	var_51_bool = 0; // 0xcad PushV
	var_51_bool = 1; // 0xcae MovB
	var_52_string = "patrol"; // 0xcaf PushS
	var_53_bool = var_30_string == var_52_string; // 0xcb0 Eq
	if(var_53_bool == 0) goto Label_3254; // 0xcb1 JumpB
	var_54_string = "sanitar"; // 0xcb2 PushS
	var_55_bool = var_30_string == var_54_string; // 0xcb3 Eq
	if(var_55_bool == 0) goto Label_3254; // 0xcb4 JumpB
	var_51_bool = 0; // 0xcb5 MovB
	
Label_3254:
	if(var_51_bool == 0) goto Label_3259; // 0xcb6 JumpB
	var_56_string = "soldier"; // 0xcb7 PushS
	var_57_bool = var_30_string == var_56_string; // 0xcb8 Eq
	if(var_57_bool == 0) goto Label_3259; // 0xcb9 JumpB
	var_50_bool = 0; // 0xcba MovB
	
Label_3259:
	if(var_50_bool == 0) goto Label_3264; // 0xcbb JumpB
	var_58_string = "woman"; // 0xcbc PushS
	var_59_bool = var_30_string == var_58_string; // 0xcbd Eq
	if(var_59_bool == 0) goto Label_3264; // 0xcbe JumpB
	var_49_bool = 0; // 0xcbf MovB
	
Label_3264:
	if(var_49_bool == 0) goto Label_3269; // 0xcc0 JumpB
	var_60_string = "wasted_girl"; // 0xcc1 PushS
	var_61_bool = var_30_string == var_60_string; // 0xcc2 Eq
	if(var_61_bool == 0) goto Label_3269; // 0xcc3 JumpB
	var_48_bool = 0; // 0xcc4 MovB
	
Label_3269:
	if(var_48_bool == 0) goto Label_3274; // 0xcc5 JumpB
	var_62_string = "vaxxabitka"; // 0xcc6 PushS
	var_63_bool = var_30_string == var_62_string; // 0xcc7 Eq
	if(var_63_bool == 0) goto Label_3274; // 0xcc8 JumpB
	var_47_bool = 0; // 0xcc9 MovB
	
Label_3274:
	if(var_47_bool == 0) goto Label_3279; // 0xcca JumpB
	var_64_string = "vaxxabit"; // 0xccb PushS
	var_65_bool = var_30_string == var_64_string; // 0xccc Eq
	if(var_65_bool == 0) goto Label_3279; // 0xccd JumpB
	var_46_bool = 0; // 0xcce MovB
	
Label_3279:
	if(var_46_bool == 0) goto Label_3284; // 0xccf JumpB
	var_66_string = "little_girl"; // 0xcd0 PushS
	var_67_bool = var_30_string == var_66_string; // 0xcd1 Eq
	if(var_67_bool == 0) goto Label_3284; // 0xcd2 JumpB
	var_45_bool = 0; // 0xcd3 MovB
	
Label_3284:
	if(var_45_bool == 0) goto Label_3289; // 0xcd4 JumpB
	var_68_string = "girl"; // 0xcd5 PushS
	var_69_bool = var_30_string == var_68_string; // 0xcd6 Eq
	if(var_69_bool == 0) goto Label_3289; // 0xcd7 JumpB
	var_44_bool = 0; // 0xcd8 MovB
	
Label_3289:
	if(var_44_bool == 0) goto Label_3294; // 0xcd9 JumpB
	var_70_string = "dohodyaga"; // 0xcda PushS
	var_71_bool = var_30_string == var_70_string; // 0xcdb Eq
	if(var_71_bool == 0) goto Label_3294; // 0xcdc JumpB
	var_43_bool = 0; // 0xcdd MovB
	
Label_3294:
	if(var_43_bool == 0) goto Label_3299; // 0xcde JumpB
	var_72_string = "nudegirl"; // 0xcdf PushS
	var_73_bool = var_30_string == var_72_string; // 0xce0 Eq
	if(var_73_bool == 0) goto Label_3299; // 0xce1 JumpB
	var_42_bool = 0; // 0xce2 MovB
	
Label_3299:
	if(var_42_bool == 0) goto Label_3302; // 0xce3 JumpB
	var_26_bool = 1; // 0xce4 MovB
	return 2; // 0xce5 Return
	
Label_3302:
	var_74_bool = var_28_bool; // 0xce6 Push
	if(var_74_bool == 0) goto Label_3306; // 0xce7 JumpB
	var_26_bool = 0; // 0xce8 MovB
	return 2; // 0xce9 Return
	
Label_3306:
	var_26_bool = 1; // 0xcea MovB
	var_75_bool = 0; // 0xceb PushV
	var_75_bool = 1; // 0xcec MovB
	var_76_bool = 0; // 0xced PushV
	var_76_bool = 1; // 0xcee MovB
	var_77_bool = 0; // 0xcef PushV
	var_77_bool = 1; // 0xcf0 MovB
	var_78_bool = 0; // 0xcf1 PushV
	var_78_bool = 1; // 0xcf2 MovB
	var_79_bool = 0; // 0xcf3 PushV
	var_79_bool = 1; // 0xcf4 MovB
	var_80_string = "worker"; // 0xcf5 PushS
	var_81_bool = var_30_string == var_80_string; // 0xcf6 Eq
	if(var_81_bool == 0) goto Label_3324; // 0xcf7 JumpB
	var_82_string = "butcher"; // 0xcf8 PushS
	var_83_bool = var_30_string == var_82_string; // 0xcf9 Eq
	if(var_83_bool == 0) goto Label_3324; // 0xcfa JumpB
	var_79_bool = 0; // 0xcfb MovB
	
Label_3324:
	if(var_79_bool == 0) goto Label_3329; // 0xcfc JumpB
	var_84_string = "boy"; // 0xcfd PushS
	var_85_bool = var_30_string == var_84_string; // 0xcfe Eq
	if(var_85_bool == 0) goto Label_3329; // 0xcff JumpB
	var_78_bool = 0; // 0xd00 MovB
	
Label_3329:
	if(var_78_bool == 0) goto Label_3334; // 0xd01 JumpB
	var_86_string = "unosha"; // 0xd02 PushS
	var_87_bool = var_30_string == var_86_string; // 0xd03 Eq
	if(var_87_bool == 0) goto Label_3334; // 0xd04 JumpB
	var_77_bool = 0; // 0xd05 MovB
	
Label_3334:
	if(var_77_bool == 0) goto Label_3339; // 0xd06 JumpB
	var_88_string = "wasted_male"; // 0xd07 PushS
	var_89_bool = var_30_string == var_88_string; // 0xd08 Eq
	if(var_89_bool == 0) goto Label_3339; // 0xd09 JumpB
	var_76_bool = 0; // 0xd0a MovB
	
Label_3339:
	if(var_76_bool == 0) goto Label_3344; // 0xd0b JumpB
	var_90_string = "alkash"; // 0xd0c PushS
	var_91_bool = var_30_string == var_90_string; // 0xd0d Eq
	if(var_91_bool == 0) goto Label_3344; // 0xd0e JumpB
	var_75_bool = 0; // 0xd0f MovB
	
Label_3344:
	if(var_75_bool == 0) goto Label_3349; // 0xd10 JumpB
	var_92_string = "morlok"; // 0xd11 PushS
	var_93_bool = var_30_string == var_92_string; // 0xd12 Eq
	if(var_93_bool == 0) goto Label_3349; // 0xd13 JumpB
	var_26_bool = 0; // 0xd14 MovB
	
Label_3349:
	return 2; // 0xd15 Return
}


func_2711(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0xa97 PushV
	self(var_25_object); // 0xa98 Func
	var_23_object = var_25_object; // 0xa9a Mov
	return 2; // 0xa9b Return
}


func_2203(var_107_bool, var_108_object)
{
	var_109_int = 0; var_110_int = 0; // 0x89b PushV
	var_111_bool = 0; var_112_object = Obj(); // 0x89c PushV
	var_112_object = var_108_object; // 0x89d Mov
	func_2167(var_111_bool, var_112_object); // 0x89e NEW_2
	var_128_bool = var_111_bool == 0; // 0x8a0 Not
	if(var_128_bool == 0) goto Label_2212; // 0x8a1 JumpB
	var_107_bool = 0; // 0x8a2 MovB
	return 2; // 0x8a3 Return
	
Label_2212:
	var_129_bool = 0; var_130_object = Obj(); var_131_string = ""; // 0x8a4 PushV
	var_130_object = var_108_object; // 0x8a5 Mov
	var_131_string = "noaccess"; // 0x8a6 MovS
	func_2077(var_129_bool, var_130_object, var_131_string); // 0x8a7 NEW_2
	var_132_bool = var_129_bool == 0; // 0x8a9 Not
	if(var_132_bool == 0) goto Label_2221; // 0x8aa JumpB
	var_107_bool = 1; // 0x8ab MovB
	return 2; // 0x8ac Return
	
Label_2221:
	var_133_string = "noaccess"; // 0x8ad PushS
	GetProperty(var_133_string, var_110_int); // 0x8ae ObjFunc
	var_134_int = 0; // 0x8b0 PushI
	var_107_bool = var_110_int == var_134_int; // 0x8b1 Eq2
	return 2; // 0x8b2 Return
}


func_2717(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0xa9d PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0xa9e Or
	var_58_float = sqrt(var_59_int); // 0xa9f Sqrt2
	var_60_float = 0.0; // 0xaa0 PushF
	var_61_bool = var_58_float < var_60_float; // 0xaa1 LT
	if(var_61_bool == 0) goto Label_2725; // 0xaa2 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0xaa3 MovV
	return 2; // 0xaa4 Return
	
Label_2725:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0xaa5 Div2
	return 2; // 0xaa6 Return
}


func_1700(var_0_bool, var_348_bool)
{
	var_349_bool = 0; var_350_bool = 0; // 0x6a4 PushV
	var_351_string = "IsAttacking"; // 0x6a5 PushS
	var_352_int = 1; // 0x6a6 PushI
	var_353_bool = IsFuncExist(var_0_bool, var_351_string, var_352_int); // 0x6a7 FuncExist
	if(var_353_bool == 0) goto Label_1709; // 0x6a8 JumpB
	IsAttacking(var_350_bool); // 0x6a9 TObjFunc
	var_348_bool = var_350_bool; // 0x6ab Mov
	return 2; // 0x6ac Return
	
Label_1709:
	var_348_bool = 0; // 0x6ad MovB
	return 2; // 0x6ae Return
}


func_2727(var_93_float, var_94_cvector, var_95_cvector)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0xaa7 PushV
	var_97_cvector = var_95_cvector - var_94_cvector; // 0xaa8 Sub2
	var_93_float = var_97_cvector | var_97_cvector; // 0xaa9 Or2
	return 2; // 0xaaa Return
}


func_2731(var_535_float, var_536_float, var_537_float)
{
	var_540_bool = var_536_float < var_537_float; // 0xaac LT
	if(var_540_bool == 0) goto Label_2736; // 0xaad JumpB
	var_535_float = var_536_float; // 0xaae Mov
	goto Label_2737; // 0xaaf Jump
	
Label_2737:
	return 0; // 0xab1 Return
	
Label_2736:
	var_535_float = var_537_float; // 0xab0 Mov
}


func_1711(var_2_object, var_5_bool)
{
	var_465_float = 0; var_466_int = 0; var_467_float = 0; var_468_int = 0; // 0x6af PushV
	var_469_bool = var_2_object == 0; // 0x6b0 Not
	if(var_469_bool == 0) goto Label_1715; // 0x6b1 JumpB
	return 4; // 0x6b2 Return
	
Label_1715:
	var_470_bool = var_5_bool; // 0x6b3 PushT
	if(var_470_bool == 0) goto Label_1723; // 0x6b4 JumpB
	var_471_int = -1; // 0x6b5 PushI
	var_5_bool = var_5_bool + var_471_int; // 0x6b6 Add2
	var_472_int = 0; // 0x6b7 PushI
	var_473_bool = var_5_bool > var_472_int; // 0x6b8 GT
	if(var_473_bool == 0) goto Label_1723; // 0x6b9 JumpB
	return 4; // 0x6ba Return
	
Label_1723:
	rand(var_467_float); // 0x6bb Func
	var_474_float = 0; // 0x6bd PushV
	func_1761(var_474_float); // 0x6be NEW_2
	var_475_bool = var_467_float < var_474_float; // 0x6c0 LT
	if(var_475_bool == 0) goto Label_1742; // 0x6c1 JumpB
	irand(var_468_int, var_467_float); // 0x6c2 Func
	var_476_int = 1; // 0x6c4 PushI
	var_468_int = var_468_int + var_476_int; // 0x6c5 Add2
	var_477_string = "attack"; // 0x6c6 PushS
	var_478_int = var_477_string + var_468_int; // 0x6c7 Add
	Speak(var_478_int); // 0x6c8 Func
	var_479_int = 0; // 0x6ca PushV
	func_1759(var_479_int); // 0x6cb NEW_2
	var_5_bool = var_479_int; // 0x6cc TMov
	
Label_1742:
	return 4; // 0x6ce Return
}


func_2738(var_545_float, var_546_float, var_547_float, var_548_float)
{
	var_549_bool = var_546_float < var_547_float; // 0xab3 LT
	if(var_549_bool == 0) goto Label_2743; // 0xab4 JumpB
	var_545_float = var_547_float; // 0xab5 Mov
	return 0; // 0xab6 Return
	
Label_2743:
	var_550_bool = var_546_float > var_548_float; // 0xab7 GT
	if(var_550_bool == 0) goto Label_2747; // 0xab8 JumpB
	var_545_float = var_548_float; // 0xab9 Mov
	return 0; // 0xaba Return
	
Label_2747:
	var_545_float = var_546_float; // 0xabb Mov
	return 0; // 0xabc Return
}


func_2227(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x8b3 PushV
	var_49_bool = var_34_object == 0; // 0x8b4 NullEq
	if(var_49_bool == 0) goto Label_2231; // 0x8b5 JumpB
	return 14; // 0x8b6 Return
	
Label_2231:
	IsDead(var_42_bool); // 0x8b7 Func
	var_50_bool = var_42_bool; // 0x8b9 Push
	if(var_50_bool == 0) goto Label_2236; // 0x8ba JumpB
	return 14; // 0x8bb Return
	
Label_2236:
	GetSecondaryAnimationType(var_43_int); // 0x8bc Func
	var_51_int = 0; // 0x8be PushI
	var_52_bool = var_43_int < var_51_int; // 0x8bf LT
	if(var_52_bool == 0) goto Label_2242; // 0x8c0 JumpB
	return 14; // 0x8c1 Return
	
Label_2242:
	GetPosition(var_44_cvector); // 0x8c2 ObjFunc
	GetPosition(var_45_cvector); // 0x8c4 Func
	GetDirection(var_46_cvector); // 0x8c6 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x8c8 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x8c9 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x8ca PushE
	var_55_float = var_53_float * var_54_float; // 0x8cb Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x8cc PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x8cd PushE
	var_58_float = var_56_float * var_57_float; // 0x8ce Mult
	var_59_int = var_55_float + var_58_float; // 0x8cf Add
	var_60_int = 0; // 0x8d0 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x8d1 GE
	if(var_61_bool == 0) goto Label_2261; // 0x8d2 JumpB
	var_48_string = "fhit"; // 0x8d3 MovS
	goto Label_2262; // 0x8d4 Jump
	
Label_2262:
	var_62_string = "hit_react"; // 0x8d6 PushS
	var_63_string = "1"; // 0x8d7 PushS
	var_64_int = var_48_string + var_63_string; // 0x8d8 Add
	var_65_string = "2"; // 0x8d9 PushS
	var_66_int = var_48_string + var_65_string; // 0x8da Add
	var_67_int = -10; // 0x8db PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x8dc Func
	return 14; // 0x8de Return
	
Label_2261:
	var_48_string = "bhit"; // 0x8d5 MovS
}


func_2749(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; // 0xabd PushV
	irand(var_46_int, var_44_int); // 0xabe Func
	var_42_bool = var_46_int < var_43_int; // 0xac0 LT2
	return 2; // 0xac1 Return
}


func_2754(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0xac2 PushV
	CreateObjectSet(var_20_object); // 0xac3 Func
	var_18_object = var_20_object; // 0xac5 Mov
	return 2; // 0xac6 Return
}


func_2760(var_239_int, var_240_string)
{
	var_241_int = 0; var_242_int = 0; // 0xac8 PushV
	GetVariable(var_240_string, var_242_int); // 0xac9 Func
	var_239_int = var_242_int; // 0xacb Mov
	return 2; // 0xacc Return
}


func_714(var_0_bool, var_1_object)
{
	var_79_int = 0; var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_int = 0; var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); // 0x2ca PushV
	GetPFPosition(var_86_object); // 0x2cb Func
	GetDirection(var_0_bool); // 0x2cd Func
	
Label_719:
	func_635(); // 0x2d0 NEW_2
	var_89_int = 10; // 0x2d2 PushI
	irand(var_83_int, var_89_int); // 0x2d3 Func
	var_90_int = 5; // 0x2d5 PushI
	var_91_int = var_83_int + var_90_int; // 0x2d6 Add
	Sleep(var_91_int, var_84_bool); // 0x2d7 Func
	var_92_bool = var_84_bool; // 0x2d9 Push
	if(var_92_bool == 0) goto Label_735; // 0x2da JumpB
	func_640(); // 0x2dc NEW_2
	goto Label_796; // 0x2de Jump
	
Label_796:
	goto Label_719; // 0x31c Jump
	
Label_735:
	func_635(); // 0x2e0 NEW_2
	GetPFPosition(var_85_cvector); // 0x2e2 Func
	var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0x2e4 PushV
	var_94_cvector = var_1_object; // 0x2e5 MovT
	var_95_cvector = var_85_cvector; // 0x2e6 Mov
	func_2727(var_93_float, var_94_cvector, var_95_cvector); // 0x2e7 NEW_2
	var_98_int = 40000; // 0x2e9 PushI
	var_99_bool = var_93_float > var_98_int; // 0x2ea GT
	if(var_99_bool == 0) goto Label_782; // 0x2eb JumpB
	FindPathTo(var_86_object, var_86_object); // 0x2ec Func
	var_100_bool = var_86_object != 0; // 0x2ee NullNeq
	if(var_100_bool == 0) goto Label_777; // 0x2ef JumpB
	RotatePath(var_86_object, var_84_bool); // 0x2f0 Func
	var_101_bool = var_84_bool == 0; // 0x2f2 Not
	if(var_101_bool == 0) goto Label_757; // 0x2f3 JumpB
	goto Label_795; // 0x2f4 Jump
	
Label_795:
	goto Label_735; // 0x31b Jump
	
Label_757:
	var_102_bool = 0; // 0x2f5 PushB
	FollowPath(var_86_object, var_102_bool, var_84_bool); // 0x2f6 Func
	var_103_bool = var_84_bool == 0; // 0x2f8 Not
	if(var_103_bool == 0) goto Label_763; // 0x2f9 JumpB
	goto Label_795; // 0x2fa Jump
	
Label_763:
	var_104_float = GetByIndex(var_0_bool, 0); // 0x2fb PushE
	var_105_float = GetByIndex(var_0_bool, 2); // 0x2fc PushE
	Rotate(var_104_float, var_105_float, var_84_bool); // 0x2fd Func
	var_106_bool = var_84_bool == 0; // 0x2ff Not
	if(var_106_bool == 0) goto Label_770; // 0x300 JumpB
	goto Label_795; // 0x301 Jump
	
Label_770:
	WaitForAnimEnd(var_84_bool); // 0x302 Func
	var_107_bool = var_84_bool == 0; // 0x304 Not
	if(var_107_bool == 0) goto Label_775; // 0x305 JumpB
	goto Label_795; // 0x306 Jump
	
Label_775:
	goto Label_796; // 0x307 Jump
	
Label_777:
	var_108_int = 1; // 0x309 PushI
	Sleep(var_108_int); // 0x30a Func
	var_86_object = 0; // 0x30c SetNull
	goto Label_795; // 0x30d Jump
	
Label_782:
	var_109_float = GetByIndex(var_0_bool, 0); // 0x30e PushE
	var_110_float = GetByIndex(var_0_bool, 2); // 0x30f PushE
	Rotate(var_109_float, var_110_float, var_84_bool); // 0x310 Func
	var_111_bool = var_84_bool == 0; // 0x312 Not
	if(var_111_bool == 0) goto Label_789; // 0x313 JumpB
	goto Label_795; // 0x314 Jump
	
Label_789:
	WaitForAnimEnd(var_84_bool); // 0x315 Func
	var_112_bool = var_84_bool == 0; // 0x317 Not
	if(var_112_bool == 0) goto Label_794; // 0x318 JumpB
	goto Label_795; // 0x319 Jump
	
Label_794:
	goto Label_796; // 0x31a Jump
}


func_2765(var_553_float)
{
	var_554_object = Obj(); var_555_object = Obj(); // 0xacd PushV
	CreateFloatVector(var_555_object); // 0xace Func
	add(var_553_float); // 0xad0 ObjFunc
	var_556_int = 15; // 0xad2 PushI
	SendWorldWndMessage(var_556_int, var_555_object); // 0xad3 Func
	return 2; // 0xad5 Return
}


func_1743(var_0_bool)
{
	var_223_object = Obj(); // 0x6cf PushV
	var_223_object = var_0_bool; // 0x6d0 MovT
	func_2784(var_223_object); // 0x6d1 NEW_2
	return 0; // 0x6d3 Return
}


func_1748(var_558_int)
{
	var_558_int = 0; // 0x6d4 MovI
	return 0; // 0x6d5 Return
}


func_1750()
{
	var_354_string = ""; // 0x6d6 PushV
	var_354_string = "attack_stay"; // 0x6d7 MovS
	func_2583(var_354_string); // 0x6d8 NEW_2
	return 0; // 0x6da Return
}


func_2775(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0xad7 PushV
	GetGameTime(var_30_float); // 0xad8 Func
	var_31_int = 1; // 0xada PushI
	var_32_int = 0; // 0xadb PushV
	var_33_int = 24; // 0xadc PushI
	var_32_int = var_30_float / var_30_float; // 0xadd Div2
	var_28_int = var_31_int + var_32_int; // 0xade Add2
	return 2; // 0xadf Return
}


func_1755()
{
	return 0; // 0x6dc Return
}


func_1757(var_583_bool)
{
	var_583_bool = 1; // 0x6dd MovB
	return 0; // 0x6de Return
}


func_1759(var_479_int)
{
	var_479_int = 1; // 0x6df MovI
	return 0; // 0x6e0 Return
}


func_2784(var_223_object)
{
	var_224_bool = 0; var_225_bool = 0; // 0xae0 PushV
	IsPlayerActor(var_223_object, var_225_bool); // 0xae1 Func
	var_226_bool = var_225_bool; // 0xae3 Push
	if(var_226_bool == 0) goto Label_2792; // 0xae4 JumpB
	var_227_string = "attack"; // 0xae5 PushS
	PlayGlobalMusic(var_227_string); // 0xae6 Func
	
Label_2792:
	return 2; // 0xae8 Return
}


func_1761(var_474_float)
{
	var_474_float = 0.5; // 0x6e1 MovF
	return 0; // 0x6e2 Return
}


func_2271(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x8df PushV
	var_42_bool = 0; // 0x8e0 PushV
	var_42_bool = 0; // 0x8e1 MovB
	var_43_bool = 0; // 0x8e2 PushV
	var_43_bool = 0; // 0x8e3 MovB
	var_44_object = var_21_object; // 0x8e4 Push
	if(var_44_object == 0) goto Label_2282; // 0x8e5 JumpB
	var_45_int = 4; // 0x8e6 PushI
	var_46_bool = var_22_int != var_45_int; // 0x8e7 Neq
	if(var_46_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_43_bool = 1; // 0x8e9 MovB
	
Label_2282:
	if(var_43_bool == 0) goto Label_2287; // 0x8ea JumpB
	var_47_int = 5; // 0x8eb PushI
	var_48_bool = var_22_int != var_47_int; // 0x8ec Neq
	if(var_48_bool == 0) goto Label_2287; // 0x8ed JumpB
	var_42_bool = 1; // 0x8ee MovB
	
Label_2287:
	if(var_42_bool == 0) goto Label_2334; // 0x8ef JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x8f0 PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x8f1 PushV
	var_52_object = var_21_object; // 0x8f2 Mov
	func_2057(var_52_object); // 0x8f3 NEW_2
	var_50_cvector = var_51_cvector; // 0x8f4 Mov
	func_2717(var_49_cvector, var_50_cvector); // 0x8f6 NEW_2
	var_33_cvector = var_49_cvector; // 0x8f7 Mov
	CreateVectorVector(var_34_object); // 0x8f9 Func
	var_35_int = 1; // 0x8fb MovI
	
Label_2300:
	var_62_string = "hit"; // 0x8fc PushS
	var_63_int = var_62_string + var_35_int; // 0x8fd Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x8fe Func
	var_64_bool = var_36_bool == 0; // 0x900 Not
	if(var_64_bool == 0) goto Label_2307; // 0x901 JumpB
	goto Label_2316; // 0x902 Jump
	
Label_2316:
	size(var_39_int); // 0x90c ObjFunc
	var_65_int = var_39_int; // 0x90e Push
	if(var_65_int == 0) goto Label_2333; // 0x90f JumpB
	irand(var_40_int, var_39_int); // 0x910 Func
	get(var_41_cvector, var_40_int); // 0x912 ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x914 PushV
	var_66_object = var_21_object; // 0x915 Mov
	var_67_int = var_22_int; // 0x916 Mov
	var_68_float = var_23_float; // 0x917 Mov
	var_69_cvector = var_41_cvector; // 0x918 Mov
	var_70_cvector = -var_33_cvector; // 0x919 Neg2
	func_2339(var_68_float, var_69_cvector, var_70_cvector); // 0x91a NEW_2
	return 18; // 0x91c Return
	
Label_2333:
	var_34_object = 0; // 0x91d SetNull
	
Label_2334:
	var_111_object = Obj(); // 0x91e PushV
	var_111_object = var_21_object; // 0x91f Mov
	func_2227(var_111_object); // 0x920 NEW_2
	return 18; // 0x922 Return
	
Label_2307:
	var_112_int = var_38_cvector | var_33_cvector; // 0x903 Or
	var_113_float = 0.70711; // 0x904 PushF
	var_114_bool = var_112_int >= var_113_float; // 0x905 GE
	if(var_114_bool == 0) goto Label_2313; // 0x906 JumpB
	add(var_37_cvector); // 0x907 ObjFunc
	
Label_2313:
	var_115_int = 1; // 0x909 PushI
	var_35_int = var_35_int + var_115_int; // 0x90a Add2
	goto Label_2300; // 0x90b Jump
}


func_1763(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x6e3 PushV
	var_31_bool = 0; var_32_object = Obj(); // 0x6e4 PushV
	var_32_object = var_28_object; // 0x6e5 Mov
	func_2072(var_31_bool, var_32_object); // 0x6e6 NEW_2
	if(var_31_bool == 0) goto Label_1777; // 0x6e8 JumpB
	GetScene(var_30_object); // 0x6e9 Func
	var_33_object = Obj(); // 0x6eb PushV
	func_2711(var_33_object); // 0x6ec NEW_2
	RemoveStationaryActor(var_33_object); // 0x6ee ObjFunc
	var_30_object = 0; // 0x6f0 SetNull
	
Label_1777:
	var_34_object = Obj(); // 0x6f1 PushV
	var_34_object = var_28_object; // 0x6f2 Mov
	func_1782(var_34_object); // 0x6f3 NEW_2
	return 2; // 0x6f5 Return
}


func_2793()
{
	var_458_object = Obj(); var_459_object = Obj(); // 0xae9 PushV
	GetScene(var_459_object); // 0xaea Func
	var_460_string = "battle"; // 0xaec PushS
	var_461_object = Obj(); // 0xaed PushV
	func_2711(var_461_object); // 0xaee NEW_2
	BroadcastMessage(var_460_string, var_461_object, var_459_object); // 0xaf0 Func
	return 2; // 0xaf2 Return
}


func_243(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0xf4 PushV
	func_3550(var_220_bool); // 0xf5 NEW_2
	var_221_bool = var_220_bool == 0; // 0xf7 Not
	if(var_221_bool == 0) goto Label_250; // 0xf8 JumpB
	return 0; // 0xf9 Return
	
Label_250:
	var_222_bool = var_219_string == var_2_object; // 0xfa Eq
	if(var_222_bool == 0) goto Label_253; // 0xfb JumpB
	return 0; // 0xfc Return
	
Label_253:
	var_223_string = ""; var_224_bool = 0; // 0xfd PushV
	var_223_string = var_219_string; // 0xfe Mov
	var_225_string = ""; // 0xff PushS
	var_226_bool = var_219_string == var_225_string; // 0x100 Eq
	if(var_226_bool == 0) goto Label_260; // 0x101 JumpB
	var_224_bool = 0; // 0x102 MovB
	goto Label_261; // 0x103 Jump
	
Label_261:
	func_2524(var_223_string, var_224_bool); // 0x105 NEW_2
	var_2_object = var_219_string; // 0x107 TMov
	return 0; // 0x108 Return
	
Label_260:
	var_224_bool = 1; // 0x104 MovB
}


func_2804()
{
	var_25_int = 1000; // 0xaf5 PushI
	SetReturnValue(var_25_int); // 0xaf6 ObjFunc
	return 0; // 0xaf8 Return
}


func_1782(var_34_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x6f6 PushV
	IsPlayerActor(var_34_object, var_36_bool); // 0x6f7 Func
	var_37_bool = var_36_bool; // 0x6f9 Push
	if(var_37_bool == 0) goto Label_1791; // 0x6fa JumpB
	func_2953(); // 0x6fc NEW_2
	goto Label_1794; // 0x6fe Jump
	
Label_1794:
	func_2929(); // 0x703 NEW_2
	var_170_object = Obj(); // 0x705 PushV
	var_170_object = var_34_object; // 0x706 Mov
	func_1802(var_170_object); // 0x707 NEW_2
	return 2; // 0x709 Return
	
Label_1791:
	func_3080(); // 0x700 NEW_2
}


func_2809(var_254_bool)
{
	var_256_int = 0; var_257_string = ""; // 0xafa PushV
	var_257_string = "branch"; // 0xafb MovS
	func_2760(var_256_int, var_257_string); // 0xafc NEW_2
	var_258_int = 0; // 0xafe PushI
	var_259_bool = var_256_int == var_258_int; // 0xaff Eq
	if(var_259_bool == 0) goto Label_2819; // 0xb00 JumpB
	var_254_bool = 1; // 0xb01 MovB
	return 0; // 0xb02 Return
	
Label_2819:
	var_254_bool = 0; // 0xb03 MovB
	return 0; // 0xb04 Return
}


func_2821(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0xb06 PushV
	var_240_string = "branch"; // 0xb07 MovS
	func_2760(var_239_int, var_240_string); // 0xb08 NEW_2
	var_243_int = 1; // 0xb0a PushI
	var_244_bool = var_239_int == var_243_int; // 0xb0b Eq
	if(var_244_bool == 0) goto Label_2831; // 0xb0c JumpB
	var_237_bool = 1; // 0xb0d MovB
	return 0; // 0xb0e Return
	
Label_2831:
	var_237_bool = 0; // 0xb0f MovB
	return 0; // 0xb10 Return
}


func_1802(var_170_object)
{
	EventDisable(0); // 0x70b EventDisable
	var_171_object = Obj(); // 0x70c PushV
	var_171_object = var_170_object; // 0x70d Mov
	func_1827(var_171_object); // 0x70e NEW_2
	var_251_int = 50; // 0x710 PushI
	var_252_int = 40; // 0x711 PushI
	SetRTEnvelope(var_251_int, var_252_int); // 0x712 Func
	EventEnable(0); // 0x714 EventEnable
	
Label_1813:
	Hold(); // 0x715 Func
	goto Label_1813; // 0x717 Jump
}


func_2833(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0xb12 PushV
	var_271_string = "branch"; // 0xb13 MovS
	func_2760(var_270_int, var_271_string); // 0xb14 NEW_2
	var_272_int = 2; // 0xb16 PushI
	var_273_bool = var_270_int == var_272_int; // 0xb17 Eq
	if(var_273_bool == 0) goto Label_2843; // 0xb18 JumpB
	var_268_bool = 1; // 0xb19 MovB
	return 0; // 0xb1a Return
	
Label_2843:
	var_268_bool = 0; // 0xb1b MovB
	return 0; // 0xb1c Return
}


func_3350()
{
	var_17_object = GlobalVars[0]; // 0xd16 PushGE
	var_18_object = Obj(); // 0xd17 PushV
	func_2754(var_18_object); // 0xd18 NEW_2
	var_17_object = var_18_object; // 0xd19 Mov
	GlobalVars[0] = var_17_object; // 0xd1b PopGE
	return 0; // 0xd1c Return
}


func_2845(var_203_int)
{
	var_204_int = 0; var_205_int = 0; // 0xb1d PushV
	var_206_string = "branch"; // 0xb1e PushS
	GetVariable(var_206_string, var_205_int); // 0xb1f Func
	var_207_int = 0; // 0xb21 PushI
	var_208_bool = var_205_int == var_207_int; // 0xb22 Eq
	if(var_208_bool == 0) goto Label_2855; // 0xb23 JumpB
	var_203_int = 1; // 0xb24 MovI
	return 2; // 0xb25 Return
	
Label_2855:
	var_209_int = 1; // 0xb27 PushI
	var_210_bool = var_205_int == var_209_int; // 0xb28 Eq
	if(var_210_bool == 0) goto Label_2860; // 0xb29 JumpB
	var_203_int = 2; // 0xb2a MovI
	return 2; // 0xb2b Return
	
Label_2860:
	var_203_int = 3; // 0xb2c MovI
	return 2; // 0xb2d Return
}


func_798()
{
	StopGroup0(); // 0x31e Func
	Stop(); // 0x320 Func
	return 0; // 0x322 Return
}


func_3357(var_319_object)
{
	var_320_bool = 0; var_321_object = Obj(); // 0xd1e PushV
	var_321_object = var_319_object; // 0xd1f Mov
	func_2449(var_320_bool, var_321_object); // 0xd20 NEW_2
	var_351_bool = var_320_bool == 0; // 0xd22 Not
	if(var_351_bool == 0) goto Label_3365; // 0xd23 JumpB
	return 0; // 0xd24 Return
	
Label_3365:
	var_352_object = Obj(); // 0xd25 PushV
	var_352_object = var_319_object; // 0xd26 Mov
	TaskCall(0); // 0xd27 TaskCall
	func_0(var_352_object); // 0xd28 NEW_2
	TaskReturn(); // 0xd29 TaskReturn
	var_359_object = Obj(); // 0xd2b PushV
	var_359_object = var_319_object; // 0xd2c Mov
	func_2504(); // 0xd2d NEW_2
	return 0; // 0xd2f Return
}


func_1827(var_171_object)
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_string = ""; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_string = ""; var_187_object = Obj(); var_188_bool = 0; var_189_bool = 0; var_190_float = 0; var_191_cvector = CVector(0,0,0); // 0x723 PushV
	var_192_bool = var_171_object == 0; // 0x724 NullEq
	if(var_192_bool == 0) goto Label_1835; // 0x725 JumpB
	var_193_string = ""; // 0x726 PushV
	var_193_string = "fdie"; // 0x727 MovS
	func_1918(var_193_string); // 0x728 NEW_2
	goto Label_1917; // 0x72a Jump
	
Label_1917:
	return 20; // 0x77d Return
	
Label_1835:
	GetPosition(var_182_cvector); // 0x72b ObjFunc
	GetPosition(var_183_cvector); // 0x72d Func
	GetDirection(var_184_cvector); // 0x72f Func
	var_185_cvector = var_183_cvector - var_182_cvector; // 0x731 Sub2
	var_225_float = GetByIndex(var_185_cvector, 0); // 0x732 PushE
	var_226_float = GetByIndex(var_184_cvector, 0); // 0x733 PushE
	var_227_float = var_225_float * var_226_float; // 0x734 Mult
	var_228_float = GetByIndex(var_185_cvector, 2); // 0x735 PushE
	var_229_float = GetByIndex(var_184_cvector, 2); // 0x736 PushE
	var_230_float = var_228_float * var_229_float; // 0x737 Mult
	var_231_int = var_227_float + var_230_float; // 0x738 Add
	var_232_int = 0; // 0x739 PushI
	var_233_bool = var_231_int >= var_232_int; // 0x73a GE
	if(var_233_bool == 0) goto Label_1854; // 0x73b JumpB
	var_186_string = "fdie"; // 0x73c MovS
	goto Label_1855; // 0x73d Jump
	
Label_1855:
	RemoveRTEnvelope(); // 0x73f Func
	SetDeathState(); // 0x741 Func
	Stop(); // 0x743 Func
	StopAsync(); // 0x745 Func
	var_187_object = var_171_object; // 0x747 Mov
	var_234_string = "GetScriptProperty"; // 0x748 PushS
	var_235_int = 2; // 0x749 PushI
	var_236_bool = IsFuncExist(var_171_object, var_234_string, var_235_int); // 0x74a FuncExist
	if(var_236_bool == 0) goto Label_1879; // 0x74b JumpB
	var_237_string = "Owner"; // 0x74c PushS
	HasScriptProperty(var_188_bool, var_237_string); // 0x74d ObjFunc
	var_238_bool = var_188_bool; // 0x74f Push
	if(var_238_bool == 0) goto Label_1879; // 0x750 JumpB
	var_239_string = "Owner"; // 0x751 PushS
	GetScriptProperty(var_187_object, var_239_string); // 0x752 ObjFunc
	var_240_bool = var_187_object == 0; // 0x754 NullEq
	if(var_240_bool == 0) goto Label_1879; // 0x755 JumpB
	var_187_object = var_171_object; // 0x756 Mov
	
Label_1879:
	var_241_string = "@GetEyesHeight"; // 0x757 PushS
	var_242_int = 1; // 0x758 PushI
	var_243_bool = IsFuncExist(var_187_object, var_241_string, var_242_int); // 0x759 FuncExist
	if(var_243_bool == 0) goto Label_1894; // 0x75a JumpB
	GetEyesHeight(var_190_float); // 0x75b ObjFunc
	var_191_cvector = CVector(0.0, 0.0, 0.0); // 0x75d MovV
	var_244_float = GetByIndex(var_191_cvector, 1); // 0x75e PushE
	var_244_float = var_190_float; // 0x75f Mov
	SetByIndex(var_191_cvector, 1) = var_244_float; // 0x760 PopE
	var_245_string = "head"; // 0x761 PushS
	LookAsync(var_171_object, var_245_string, var_191_cvector); // 0x762 Func
	var_189_bool = 1; // 0x764 MovB
	goto Label_1895; // 0x765 Jump
	
Label_1895:
	var_246_string = ""; // 0x767 PushV
	var_246_string = var_186_string; // 0x768 Mov
	func_2583(var_246_string); // 0x769 NEW_2
	var_247_string = "all"; // 0x76b PushS
	PlayAnimation(var_247_string, var_186_string); // 0x76c Func
	WaitForAnimEnd(); // 0x76e Func
	var_248_bool = var_189_bool; // 0x770 Push
	if(var_248_bool == 0) goto Label_1911; // 0x771 JumpB
	StopAsync(); // 0x772 Func
	var_249_string = "head"; // 0x774 PushS
	UnlookAsync(var_249_string); // 0x775 Func
	
Label_1911:
	var_250_string = "all"; // 0x777 PushS
	LockAnimationEnd(var_250_string, var_186_string); // 0x778 Func
	RemoveEnvelope(); // 0x77a Func
	var_187_object = 0; // 0x77c SetNull
	
Label_1894:
	var_189_bool = 0; // 0x766 MovB
	
Label_1854:
	var_186_string = "bdie"; // 0x73e MovS
}


func_2339(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x923 PushV
	GetScene(var_30_object); // 0x924 Func
	var_32_string = "scripted"; // 0x926 PushS
	var_33_string = "blood_dir.xml"; // 0x927 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x928 Func
	var_34_object = Obj(); // 0x92a PushV
	var_34_object = var_23_object; // 0x92b Mov
	func_2227(var_34_object); // 0x92c NEW_2
	return 4; // 0x92e Return
}


func_2862(var_150_int)
{
	var_151_int = 0; var_152_int = 0; // 0xb2e PushV
	var_153_string = "branch"; // 0xb2f PushS
	GetVariable(var_153_string, var_152_int); // 0xb30 Func
	var_150_int = var_152_int; // 0xb32 Mov
	return 2; // 0xb33 Return
}


func_3376(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xd31 PushV
	var_21_object = var_19_object; // 0xd32 Mov
	func_3552(var_20_bool, var_21_object); // 0xd33 NEW_2
	var_18_bool = var_20_bool; // 0xd34 Mov
	return 0; // 0xd36 Return
}


func_817(var_2_object, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool)
{
	var_239_bool = 0; var_240_bool = 0; var_241_bool = 0; var_242_bool = 0; // 0x331 PushV
	var_243_object = Obj(); // 0x332 PushV
	var_243_object = var_231_object; // 0x333 Mov
	func_2784(var_243_object); // 0x334 NEW_2
	var_244_int = 1; // 0x336 PushI
	var_245_int = 5; // 0x337 PushI
	SetTimer(var_244_int, var_245_int); // 0x338 Func
	CanSee(var_241_bool, var_231_object); // 0x33a Func
	var_246_bool = var_241_bool; // 0x33c Push
	if(var_246_bool == 0) goto Label_836; // 0x33d JumpB
	var_2_object = 1; // 0x33e TMovB
	var_247_object = Obj(); // 0x33f PushV
	var_247_object = var_231_object; // 0x340 Mov
	func_2539(var_247_object); // 0x341 NEW_2
	goto Label_837; // 0x343 Jump
	
Label_837:
	var_254_bool = 0; var_255_object = Obj(); // 0x345 PushV
	var_255_object = var_231_object; // 0x346 Mov
	func_2072(var_254_bool, var_255_object); // 0x347 NEW_2
	if(var_254_bool == 0) goto Label_847; // 0x349 JumpB
	var_256_object = Obj(); // 0x34a PushV
	func_2711(var_256_object); // 0x34b NEW_2
	SendPlayerEnemy(var_231_object, var_256_object); // 0x34d Func
	
Label_847:
	var_257_bool = 0; var_258_object = Obj(); var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_bool = 0; // 0x34f PushV
	var_258_object = var_231_object; // 0x350 Mov
	var_259_float = var_232_float; // 0x351 Mov
	var_260_float = var_233_float; // 0x352 Mov
	var_261_bool = var_234_bool; // 0x353 Mov
	var_262_bool = var_235_bool; // 0x354 Mov
	func_922(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool); // 0x355 NEW_2
	var_242_bool = var_257_bool; // 0x356 Mov
	var_308_object = var_2_object; // 0x358 PushT
	if(var_308_object == 0) goto Label_861; // 0x359 JumpB
	var_309_string = "head"; // 0x35a PushS
	UnlookAsync(var_309_string); // 0x35b Func
	
Label_861:
	var_310_int = 1; // 0x35d PushI
	KillTimer(var_310_int); // 0x35e Func
	var_230_bool = var_242_bool; // 0x360 Mov
	return 4; // 0x361 Return
	
Label_836:
	var_2_object = 0; // 0x344 TMovB
}


func_1330(var_1_object, var_2_object, var_4_string)
{
	var_186_bool = 0; var_187_bool = 0; var_188_cvector = CVector(0,0,0); var_189_bool = 0; var_190_bool = 0; var_191_cvector = CVector(0,0,0); // 0x532 PushV
	var_1_object = 0; // 0x533 TMovI
	
Label_1332:
	var_192_string = "all"; // 0x534 PushS
	var_193_string = "attack_begin"; // 0x535 PushS
	var_194_int = 1; // 0x536 PushI
	var_195_int = var_1_object + var_194_int; // 0x537 Add
	var_196_int = var_193_string + var_195_int; // 0x538 Add
	HasAnimation(var_189_bool, var_192_string, var_196_int); // 0x539 Func
	var_197_bool = var_189_bool == 0; // 0x53b Not
	if(var_197_bool == 0) goto Label_1342; // 0x53c JumpB
	goto Label_1345; // 0x53d Jump
	
Label_1345:
	var_2_object = 0; // 0x541 TMovI
	
Label_1346:
	var_198_string = "attack"; // 0x542 PushS
	var_199_int = 1; // 0x543 PushI
	var_200_int = var_2_object + var_199_int; // 0x544 Add
	var_201_int = var_198_string + var_200_int; // 0x545 Add
	IsExisting3DSound(var_190_bool, var_201_int); // 0x546 Func
	var_202_bool = var_190_bool == 0; // 0x548 Not
	if(var_202_bool == 0) goto Label_1355; // 0x549 JumpB
	goto Label_1358; // 0x54a Jump
	
Label_1358:
	var_203_string = "all"; // 0x54e PushS
	var_204_string = "bjump"; // 0x54f PushS
	GetAnimationOffset(var_191_cvector, var_203_string, var_204_string); // 0x550 Func
	var_205_float = GetByIndex(var_191_cvector, 2); // 0x552 PushE
	var_4_string = -var_205_float; // 0x553 Neg2
	return 6; // 0x554 Return
	
Label_1355:
	var_206_int = 1; // 0x54b PushI
	var_2_object = var_2_object + var_206_int; // 0x54c Add2
	goto Label_1346; // 0x54d Jump
	
Label_1342:
	var_207_int = 1; // 0x53e PushI
	var_1_object = var_1_object + var_207_int; // 0x53f Add2
	goto Label_1332; // 0x540 Jump
}


func_2353()
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x931 PushV
	GetPosition(var_335_cvector); // 0x932 ObjFunc
	GetPosition(var_336_cvector); // 0x934 Func
	var_337_cvector = var_335_cvector - var_336_cvector; // 0x936 Sub2
	var_338_float = GetByIndex(var_337_cvector, 0); // 0x937 PushE
	var_339_float = GetByIndex(var_337_cvector, 2); // 0x938 PushE
	RotateAsync(var_338_float, var_339_float); // 0x939 Func
	return 6; // 0x93b Return
}


func_2868(var_21_object)
{
	var_22_int = 0; // 0xb35 PushV
	func_2862(var_22_int); // 0xb36 NEW_2
	var_26_int = 1; // 0xb38 PushI
	var_27_bool = var_22_int == var_26_int; // 0xb39 Eq
	if(var_27_bool == 0) goto Label_2878; // 0xb3a JumpB
	WorkWithCorpse(var_21_object); // 0xb3b Func
	goto Label_2880; // 0xb3d Jump
	
Label_2880:
	return 0; // 0xb40 Return
	
Label_2878:
	Barter(var_21_object); // 0xb3e Func
}


func_3383(var_143_object)
{
	var_144_object = Obj(); // 0xd38 PushV
	var_144_object = var_143_object; // 0xd39 Mov
	func_3402(var_144_object); // 0xd3a NEW_2
	return 0; // 0xd3c Return
}


func_2364(var_152_bool, var_154_float)
{
	var_155_float = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_bool = 0; var_163_bool = 0; var_164_float = 0; var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_bool = 0; // 0x93c PushV
	GetPosition(var_165_cvector); // 0x93d ObjFunc
	GetEyesHeight(var_164_float); // 0x93f ObjFunc
	var_173_float = GetByIndex(var_165_cvector, 1); // 0x941 PushE
	var_173_float = var_173_float + var_164_float; // 0x942 Add2
	SetByIndex(var_165_cvector, 1) = var_173_float; // 0x943 PopE
	GetPosition(var_166_cvector); // 0x944 Func
	GetEyesHeight(var_164_float); // 0x946 Func
	var_174_float = GetByIndex(var_166_cvector, 1); // 0x948 PushE
	var_174_float = var_174_float + var_164_float; // 0x949 Add2
	SetByIndex(var_166_cvector, 1) = var_174_float; // 0x94a PopE
	var_167_cvector = var_165_cvector - var_166_cvector; // 0x94b Sub2
	var_175_float = GetByIndex(var_167_cvector, 1); // 0x94c PushE
	var_175_float = 0; // 0x94d MovI
	SetByIndex(var_167_cvector, 1) = var_175_float; // 0x94e PopE
	var_176_int = var_167_cvector | var_167_cvector; // 0x94f Or
	var_177_float = sqrt(var_176_int); // 0x950 Sqrt
	var_167_cvector = var_167_cvector / var_167_cvector; // 0x951 Div2
	var_168_cvector = -var_167_cvector; // 0x952 Neg2
	var_178_float = var_167_cvector * var_154_float; // 0x953 Mult
	var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); // 0x954 PushV
	var_181_cvector = CVector(0.0, 1.0, 0.0); // 0x955 PushVec
	var_180_cvector = var_168_cvector ^ var_181_cvector; // 0x956 Xor2
	func_2717(var_179_cvector, var_180_cvector); // 0x957 NEW_2
	var_187_int = 25; // 0x959 PushI
	var_188_float = var_179_cvector * var_187_int; // 0x95a Mult
	var_189_int = var_178_float + var_188_float; // 0x95b Add
	var_190_cvector = CVector(0.0, 10.0, 0.0); // 0x95c PushVec
	var_169_cvector = var_189_int - var_190_cvector; // 0x95d Sub2
	var_170_cvector = var_166_cvector + var_169_cvector; // 0x95e Add2
	IsOverrideActive(var_171_bool); // 0x95f Func
	var_191_bool = var_171_bool; // 0x961 Push
	if(var_191_bool == 0) goto Label_2405; // 0x962 JumpB
	var_152_bool = 0; // 0x963 MovB
	return 18; // 0x964 Return
	
Label_2405:
	StopWorld(); // 0x965 Func
	CameraTransit(var_170_cvector, var_168_cvector); // 0x967 Func
	var_192_float = GetByIndex(var_169_cvector, 0); // 0x969 PushE
	var_193_float = GetByIndex(var_169_cvector, 2); // 0x96a PushE
	Rotate(var_192_float, var_193_float); // 0x96b Func
	var_194_bool = 0; // 0x96d PushV
	func_3550(var_194_bool); // 0x96e NEW_2
	if(var_194_bool == 0) goto Label_2418; // 0x970 JumpB
	goto Label_2426; // 0x971 Jump
	
Label_2426:
	CameraWaitForPlayFinish(); // 0x97a Func
	ResumeWorld(); // 0x97c Func
	var_152_bool = 1; // 0x97e MovB
	return 18; // 0x97f Return
	
Label_2418:
	var_195_string = "head"; // 0x972 PushS
	HasAnimationTrack(var_172_bool, var_195_string); // 0x973 Func
	var_196_bool = var_172_bool; // 0x975 Push
	if(var_196_bool == 0) goto Label_2426; // 0x976 JumpB
	var_197_string = "head"; // 0x977 PushS
	LookAsyncCamera(var_197_string); // 0x978 Func
}


func_3389(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xd3e PushV
	var_21_object = var_19_object; // 0xd3f Mov
	func_3552(var_20_bool, var_21_object); // 0xd40 NEW_2
	var_18_bool = var_20_bool; // 0xd41 Mov
	return 0; // 0xd43 Return
}


func_2881(var_51_int, var_52_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0xb41 PushV
	var_60_bool = var_51_int > var_52_int; // 0xb42 GT
	if(var_60_bool == 0) goto Label_2888; // 0xb43 JumpB
	var_61_string = "GenerateMoney: iMin > iMax"; // 0xb44 PushS
	Trace(var_61_string); // 0xb45 Func
	return 4; // 0xb47 Return
	
Label_2888:
	var_58_int = 0; // 0xb48 MovI
	var_62_bool = var_51_int != var_52_int; // 0xb49 Neq
	if(var_62_bool == 0) goto Label_2895; // 0xb4a JumpB
	var_63_int = var_52_int - var_51_int; // 0xb4b Sub
	irand(var_58_int, var_63_int); // 0xb4c Func
	goto Label_2899; // 0xb4e Jump
	
Label_2899:
	var_58_int = var_58_int + var_51_int; // 0xb53 Add2
	var_64_int = 0; // 0xb54 PushI
	var_65_bool = var_58_int == var_64_int; // 0xb55 Eq
	if(var_65_bool == 0) goto Label_2904; // 0xb56 JumpB
	return 4; // 0xb57 Return
	
Label_2904:
	var_66_int = 0; var_67_string = ""; // 0xb58 PushV
	var_67_string = "Money"; // 0xb59 MovS
	func_3209(var_66_int, var_67_string); // 0xb5a NEW_2
	var_70_int = 0; // 0xb5c PushI
	AddItem(var_59_bool, var_66_int, var_70_int, var_58_int); // 0xb5d Func
	return 4; // 0xb5f Return
	
Label_2895:
	var_71_int = 0; // 0xb4f PushI
	var_72_bool = var_51_int == var_71_int; // 0xb50 Eq
	if(var_72_bool == 0) goto Label_2899; // 0xb51 JumpB
	return 4; // 0xb52 Return
}


func_3396(var_141_object)
{
	var_142_object = Obj(); // 0xd45 PushV
	var_142_object = var_141_object; // 0xd46 Mov
	func_3402(var_142_object); // 0xd47 NEW_2
	return 0; // 0xd49 Return
}


func_3402(var_144_object)
{
	var_145_object = Obj(); var_146_bool = 0; // 0xd4b PushV
	var_145_object = var_144_object; // 0xd4c Mov
	var_146_bool = 1; // 0xd4d MovB
	TaskCall(5); // 0xd4e TaskCall
	func_1073(var_145_object, var_146_bool); // 0xd4f NEW_2
	TaskReturn(); // 0xd50 TaskReturn
	ResetAAS(); // 0xd52 Func
	return 0; // 0xd54 Return
}


func_3413(var_136_object)
{
	var_137_bool = 0; var_138_bool = 0; // 0xd55 PushV
	var_139_bool = var_136_object == 0; // 0xd56 NullEq
	if(var_139_bool == 0) goto Label_3417; // 0xd57 JumpB
	return 2; // 0xd58 Return
	
Label_3417:
	var_140_object = GlobalVars[0]; // 0xd59 PushGE
	in(var_138_bool, var_136_object); // 0xd5a ObjFunc
	var_141_bool = var_138_bool == 0; // 0xd5c Not
	if(var_141_bool == 0) goto Label_3425; // 0xd5d JumpB
	var_142_object = GlobalVars[0]; // 0xd5e PushGE
	add(var_136_object); // 0xd5f ObjFunc
	
Label_3425:
	var_143_bool = 0; var_144_object = Obj(); // 0xd61 PushV
	var_144_object = var_136_object; // 0xd62 Mov
	func_2072(var_143_bool, var_144_object); // 0xd63 NEW_2
	if(var_143_bool == 0) goto Label_3436; // 0xd65 JumpB
	var_147_object = Obj(); // 0xd66 PushV
	func_2711(var_147_object); // 0xd67 NEW_2
	var_150_float = -0.07; // 0xd69 PushF
	ReportReputationChange(var_136_object, var_147_object, var_150_float); // 0xd6a Func
	
Label_3436:
	return 2; // 0xd6c Return
}


func_1365(var_0_bool, var_483_float, var_484_int)
{
	var_485_object = Obj(); var_486_float = 0; var_487_float = 0; var_488_object = Obj(); var_489_float = 0; var_490_float = 0; // 0x555 PushV
	var_491_float = 0.9; // 0x556 PushF
	var_492_float = var_483_float * var_491_float; // 0x557 Mult
	GetVictim(var_492_float, var_488_object); // 0x558 Func
	ReportAttack(var_0_bool); // 0x55a Func
	var_493_bool = var_488_object == var_0_bool; // 0x55c Eq
	if(var_493_bool == 0) goto Label_1402; // 0x55d JumpB
	var_494_float = 0; var_495_object = Obj(); var_496_int = 0; // 0x55e PushV
	var_495_object = var_488_object; // 0x55f Mov
	var_496_int = var_484_int; // 0x560 Mov
	func_1081(var_496_int); // 0x561 NEW_2
	var_489_float = var_494_float; // 0x562 Mov
	var_497_float = 0; var_498_object = Obj(); var_499_float = 0; var_500_int = 0; // 0x564 PushV
	var_498_object = var_488_object; // 0x565 Mov
	var_499_float = var_489_float; // 0x566 Mov
	var_501_int = 0; var_502_object = Obj(); var_503_int = 0; // 0x567 PushV
	var_502_object = var_488_object; // 0x568 Mov
	var_503_int = var_484_int; // 0x569 Mov
	func_1084(var_503_int); // 0x56a NEW_2
	var_500_int = var_501_int; // 0x56b Mov
	func_2089(var_497_float, var_498_object, var_499_float, var_500_int); // 0x56d NEW_2
	var_490_float = var_497_float; // 0x56e Mov
	var_558_int = 0; // 0x570 PushV
	func_1748(var_558_int); // 0x571 NEW_2
	ReportHit(var_0_bool, var_558_int, var_490_float, var_489_float); // 0x573 Func
	var_559_object = Obj(); var_560_float = 0; // 0x575 PushV
	var_559_object = var_488_object; // 0x576 Mov
	var_560_float = var_490_float; // 0x577 Mov
	func_1755(); // 0x578 NEW_2
	
Label_1402:
	return 6; // 0x57a Return
}


func_2912(var_156_string)
{
	var_157_object = Obj(); var_158_int = 0; var_159_bool = 0; var_160_object = Obj(); var_161_int = 0; var_162_bool = 0; // 0xb60 PushV
	CreateInvItem(var_160_object); // 0xb61 Func
	SetItemName(var_156_string); // 0xb63 ObjFunc
	var_163_string = "Organ"; // 0xb65 PushS
	var_164_int = 1; // 0xb66 PushI
	SetProperty(var_163_string, var_164_int); // 0xb67 ObjFunc
	GetItemID(var_161_int); // 0xb69 ObjFunc
	var_165_int = 0; // 0xb6b PushI
	var_166_int = 1; // 0xb6c PushI
	AddItem(var_162_bool, var_160_object, var_165_int, var_166_int); // 0xb6d Func
	return 6; // 0xb6f Return
}


func_3437(var_151_object)
{
	var_152_object = Obj(); // 0xd6e PushV
	var_152_object = var_151_object; // 0xd6f Mov
	func_3413(var_152_object); // 0xd70 NEW_2
	var_153_object = Obj(); var_154_bool = 0; // 0xd72 PushV
	var_153_object = var_151_object; // 0xd73 Mov
	var_154_bool = 1; // 0xd74 MovB
	TaskCall(5); // 0xd75 TaskCall
	func_1073(var_153_object, var_154_bool); // 0xd76 NEW_2
	TaskReturn(); // 0xd77 TaskReturn
	ResetAAS(); // 0xd79 Func
	return 0; // 0xd7b Return
}


func_880(var_2_object)
{
	var_18_int = 1; // 0x370 PushI
	KillTimer(var_18_int); // 0x371 Func
	var_19_object = var_2_object; // 0x373 PushT
	if(var_19_object == 0) goto Label_889; // 0x374 JumpB
	var_2_object = 0; // 0x375 TMovB
	var_20_string = "head"; // 0x376 PushS
	UnlookAsync(var_20_string); // 0x377 Func
	
Label_889:
	func_1046(var_17_int); // 0x37a NEW_2
	return 0; // 0x37c Return
}


func_2929()
{
	var_150_int = 0; // 0xb71 PushV
	func_2862(var_150_int); // 0xb72 NEW_2
	var_154_int = 1; // 0xb74 PushI
	var_155_bool = var_150_int != var_154_int; // 0xb75 Neq
	if(var_155_bool == 0) goto Label_2936; // 0xb76 JumpB
	return 0; // 0xb77 Return
	
Label_2936:
	var_156_string = ""; // 0xb78 PushV
	var_156_string = "liver"; // 0xb79 MovS
	func_2912(var_156_string); // 0xb7a NEW_2
	var_167_string = ""; // 0xb7c PushV
	var_167_string = "kidney"; // 0xb7d MovS
	func_2912(var_167_string); // 0xb7e NEW_2
	var_168_string = ""; // 0xb80 PushV
	var_168_string = "heart"; // 0xb81 MovS
	func_2912(var_168_string); // 0xb82 NEW_2
	var_169_string = ""; // 0xb84 PushV
	var_169_string = "blood"; // 0xb85 MovS
	func_2912(var_169_string); // 0xb86 NEW_2
	return 0; // 0xb88 Return
}


func_1404(var_0_bool, var_446_bool, var_447_float)
{
	var_448_int = 0; var_449_bool = 0; var_450_int = 0; var_451_string = ""; var_452_int = 0; var_453_bool = 0; var_454_int = 0; var_455_string = ""; // 0x57c PushV
	func_1743(var_455_string); // 0x57e NEW_2
	irand(var_452_int, var_455_string); // 0x580 Func
	var_456_int = 1; // 0x582 PushI
	var_452_int = var_452_int + var_456_int; // 0x583 Add2
	Face(var_0_bool); // 0x584 Func
	var_457_bool = 1; // 0x586 PushB
	SetAttackState(var_457_bool); // 0x587 Func
	func_2793(); // 0x58a NEW_2
	var_462_string = "all"; // 0x58c PushS
	var_463_string = "attack_begin"; // 0x58d PushS
	var_464_int = var_463_string + var_452_int; // 0x58e Add
	PlayAnimation(var_462_string, var_464_int); // 0x58f Func
	WaitForAnimEnd(); // 0x591 Func
	func_1711(var_454_int, var_455_string); // 0x594 NEW_2
	var_480_bool = 0; var_481_object = Obj(); // 0x596 PushV
	var_481_object = var_0_bool; // 0x597 MovT
	func_2203(var_480_bool, var_481_object); // 0x598 NEW_2
	var_482_bool = var_480_bool == 0; // 0x59a Not
	if(var_482_bool == 0) goto Label_1440; // 0x59b JumpB
	StopAsync(); // 0x59c Func
	var_446_bool = 0; // 0x59e MovB
	return 8; // 0x59f Return
	
Label_1440:
	var_483_float = 0; var_484_int = 0; // 0x5a0 PushV
	var_483_float = var_447_float; // 0x5a1 Mov
	var_484_int = var_452_int; // 0x5a2 Mov
	func_1365(var_455_string, var_483_float, var_484_int); // 0x5a3 NEW_2
	var_561_string = "all"; // 0x5a5 PushS
	var_562_string = "attack_middle"; // 0x5a6 PushS
	var_563_int = var_562_string + var_452_int; // 0x5a7 Add
	HasAnimation(var_453_bool, var_561_string, var_563_int); // 0x5a8 Func
	var_564_bool = var_453_bool; // 0x5aa Push
	if(var_564_bool == 0) goto Label_1521; // 0x5ab JumpB
	func_2793(); // 0x5ad NEW_2
	var_565_string = "all"; // 0x5af PushS
	var_566_string = "attack_middle"; // 0x5b0 PushS
	var_567_int = var_566_string + var_452_int; // 0x5b1 Add
	PlayAnimation(var_565_string, var_567_int); // 0x5b2 Func
	WaitForAnimEnd(); // 0x5b4 Func
	func_1743(var_455_string); // 0x5b7 NEW_2
	var_568_bool = 0; var_569_object = Obj(); // 0x5b9 PushV
	var_569_object = var_0_bool; // 0x5ba MovT
	func_2203(var_568_bool, var_569_object); // 0x5bb NEW_2
	var_570_bool = var_568_bool == 0; // 0x5bd Not
	if(var_570_bool == 0) goto Label_1475; // 0x5be JumpB
	StopAsync(); // 0x5bf Func
	var_446_bool = 0; // 0x5c1 MovB
	return 8; // 0x5c2 Return
	
Label_1475:
	var_571_float = 0; var_572_int = 0; // 0x5c3 PushV
	var_571_float = var_447_float; // 0x5c4 Mov
	var_572_int = var_452_int; // 0x5c5 Mov
	func_1365(var_455_string, var_571_float, var_572_int); // 0x5c6 NEW_2
	var_454_int = 1; // 0x5c8 MovI
	
Label_1481:
	var_573_string = "attack_middle"; // 0x5c9 PushS
	var_574_int = var_573_string + var_452_int; // 0x5ca Add
	var_575_string = "_"; // 0x5cb PushS
	var_576_int = var_574_int + var_575_string; // 0x5cc Add
	var_455_string = var_576_int + var_454_int; // 0x5cd Add2
	var_577_string = "all"; // 0x5ce PushS
	HasAnimation(var_453_bool, var_577_string, var_455_string); // 0x5cf Func
	var_578_bool = var_453_bool == 0; // 0x5d1 Not
	if(var_578_bool == 0) goto Label_1492; // 0x5d2 JumpB
	goto Label_1521; // 0x5d3 Jump
	
Label_1521:
	var_579_bool = 0; // 0x5f1 PushB
	SetAttackState(var_579_bool); // 0x5f2 Func
	var_580_string = "all"; // 0x5f4 PushS
	var_581_string = "attack_end"; // 0x5f5 PushS
	var_582_int = var_581_string + var_452_int; // 0x5f6 Add
	PlayAnimation(var_580_string, var_582_int); // 0x5f7 Func
	var_583_bool = 0; // 0x5f9 PushV
	func_1757(var_583_bool); // 0x5fa NEW_2
	if(var_583_bool == 0) goto Label_1539; // 0x5fc JumpB
	var_584_bool = 0; var_585_float = 0; // 0x5fd PushV
	var_585_float = 0.75; // 0x5fe MovF
	func_1541(var_584_bool, var_585_float); // 0x5ff NEW_2
	StopAsync(); // 0x601 Func
	
Label_1539:
	var_446_bool = 1; // 0x603 MovB
	return 8; // 0x604 Return
	
Label_1492:
	func_2793(); // 0x5d5 NEW_2
	var_593_string = "all"; // 0x5d7 PushS
	PlayAnimation(var_593_string, var_455_string); // 0x5d8 Func
	WaitForAnimEnd(); // 0x5da Func
	func_1743(var_455_string); // 0x5dd NEW_2
	var_594_bool = 0; var_595_object = Obj(); // 0x5df PushV
	var_595_object = var_0_bool; // 0x5e0 MovT
	func_2203(var_594_bool, var_595_object); // 0x5e1 NEW_2
	var_596_bool = var_594_bool == 0; // 0x5e3 Not
	if(var_596_bool == 0) goto Label_1513; // 0x5e4 JumpB
	StopAsync(); // 0x5e5 Func
	var_446_bool = 0; // 0x5e7 MovB
	return 8; // 0x5e8 Return
	
Label_1513:
	var_597_float = 0; var_598_int = 0; // 0x5e9 PushV
	var_597_float = var_447_float; // 0x5ea Mov
	var_598_int = var_452_int; // 0x5eb Mov
	func_1365(var_455_string, var_597_float, var_598_int); // 0x5ec NEW_2
	var_599_int = 1; // 0x5ee PushI
	var_454_int = var_454_int + var_599_int; // 0x5ef Add2
	goto Label_1481; // 0x5f0 Jump
}


func_3452(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xd7d PushV
	var_20_object = var_18_object; // 0xd7e Mov
	func_2072(var_19_bool, var_20_object); // 0xd7f NEW_2
	if(var_19_bool == 0) goto Label_3465; // 0xd81 JumpB
	var_23_object = Obj(); // 0xd82 PushV
	func_2711(var_23_object); // 0xd83 NEW_2
	var_26_float = -0.13; // 0xd85 PushF
	var_27_bool = 1; // 0xd86 PushB
	ReportReputationChange(var_18_object, var_23_object, var_26_float, var_27_bool); // 0xd87 Func
	
Label_3465:
	var_28_object = Obj(); // 0xd89 PushV
	var_28_object = var_18_object; // 0xd8a Mov
	TaskCall(6); // 0xd8b TaskCall
	func_1763(var_28_object); // 0xd8c NEW_2
	TaskReturn(); // 0xd8d TaskReturn
	return 0; // 0xd8f Return
}


func_1918(var_193_string)
{
	RemoveRTEnvelope(); // 0x77f Func
	SetDeathState(); // 0x781 Func
	Stop(); // 0x783 Func
	StopAsync(); // 0x785 Func
	StopSecondaryAnimation(); // 0x787 Func
	var_194_string = ""; // 0x789 PushV
	var_194_string = var_193_string; // 0x78a Mov
	func_2583(var_194_string); // 0x78b NEW_2
	var_223_string = "all"; // 0x78d PushS
	PlayAnimation(var_223_string, var_193_string); // 0x78e Func
	WaitForAnimEnd(); // 0x790 Func
	var_224_string = "all"; // 0x792 PushS
	LockAnimationEnd(var_224_string, var_193_string); // 0x793 Func
	RemoveEnvelope(); // 0x795 Func
	return 0; // 0x797 Return
}


func_2432()
{
	var_312_bool = 0; var_313_bool = 0; // 0x980 PushV
	CameraSwitchToNormal(); // 0x981 Func
	var_314_bool = 0; // 0x983 PushV
	func_3550(var_314_bool); // 0x984 NEW_2
	if(var_314_bool == 0) goto Label_2440; // 0x986 JumpB
	goto Label_2448; // 0x987 Jump
	
Label_2448:
	return 2; // 0x990 Return
	
Label_2440:
	var_315_string = "head"; // 0x988 PushS
	HasAnimationTrack(var_313_bool, var_315_string); // 0x989 Func
	var_316_bool = var_313_bool; // 0x98b Push
	if(var_316_bool == 0) goto Label_2448; // 0x98c JumpB
	var_317_string = "head"; // 0x98d PushS
	UnlookAsync(var_317_string); // 0x98e Func
}


func_2953()
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; // 0xb89 PushV
	var_44_int = 0; // 0xb8a PushI
	ClearSubContainer(var_44_int); // 0xb8b Func
	var_45_int = 0; // 0xb8d PushV
	func_2775(var_45_int); // 0xb8e NEW_2
	var_43_int = var_45_int; // 0xb8f Mov
	var_51_int = 0; var_52_int = 0; // 0xb91 PushV
	var_51_int = 0; // 0xb92 MovI
	var_53_int = 100; // 0xb93 PushI
	var_54_int = 100; // 0xb94 PushI
	var_55_float = var_43_int * var_54_int; // 0xb95 Mult
	var_52_int = var_53_int + var_55_float; // 0xb96 Add2
	func_2881(var_51_int, var_52_int); // 0xb97 NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0xb99 PushV
	var_73_string = "tourniquet"; // 0xb9a MovS
	var_74_int = 1; // 0xb9b MovI
	var_75_int = 7; // 0xb9c MovI
	func_2557(var_73_string, var_74_int, var_75_int); // 0xb9d NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0xb9f PushV
	var_84_string = "bandage"; // 0xba0 MovS
	var_85_int = 1; // 0xba1 MovI
	var_86_int = 7; // 0xba2 MovI
	func_2557(var_84_string, var_85_int, var_86_int); // 0xba3 NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0xba5 PushV
	var_87_string = "packet"; // 0xba6 MovS
	var_88_int = 1; // 0xba7 MovI
	var_89_int = 10; // 0xba8 MovI
	func_2557(var_87_string, var_88_int, var_89_int); // 0xba9 NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; // 0xbab PushV
	var_90_string = "bottle_water"; // 0xbac MovS
	var_91_int = 1; // 0xbad MovI
	var_92_int = 3; // 0xbae MovI
	func_2557(var_90_string, var_91_int, var_92_int); // 0xbaf NEW_2
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0xbb1 PushV
	var_93_string = "rusk"; // 0xbb2 MovS
	var_94_int = 1; // 0xbb3 MovI
	var_95_int = 3; // 0xbb4 MovI
	var_96_int = 4; // 0xbb5 MovI
	func_2568(var_93_string, var_94_int, var_95_int, var_96_int); // 0xbb6 NEW_2
	var_107_string = ""; var_108_int = 0; var_109_int = 0; // 0xbb8 PushV
	var_107_string = "hook"; // 0xbb9 MovS
	var_108_int = 1; // 0xbba MovI
	var_109_int = 20; // 0xbbb MovI
	func_2557(var_107_string, var_108_int, var_109_int); // 0xbbc NEW_2
	var_110_string = ""; var_111_int = 0; var_112_int = 0; // 0xbbe PushV
	var_110_string = "watch"; // 0xbbf MovS
	var_111_int = 1; // 0xbc0 MovI
	var_112_int = 20; // 0xbc1 MovI
	func_2557(var_110_string, var_111_int, var_112_int); // 0xbc2 NEW_2
	var_113_bool = 0; // 0xbc4 PushV
	var_113_bool = 0; // 0xbc5 MovB
	var_114_int = 3; // 0xbc6 PushI
	var_115_bool = var_43_int >= var_114_int; // 0xbc7 GE
	if(var_115_bool == 0) goto Label_3021; // 0xbc8 JumpB
	var_116_int = 6; // 0xbc9 PushI
	var_117_bool = var_43_int < var_116_int; // 0xbca LT
	if(var_117_bool == 0) goto Label_3021; // 0xbcb JumpB
	var_113_bool = 1; // 0xbcc MovB
	
Label_3021:
	if(var_113_bool == 0) goto Label_3029; // 0xbcd JumpB
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0xbce PushV
	var_118_string = "alpha_pills"; // 0xbcf MovS
	var_119_int = 1; // 0xbd0 MovI
	var_120_int = 2; // 0xbd1 MovI
	var_121_int = 3; // 0xbd2 MovI
	func_2568(var_118_string, var_119_int, var_120_int, var_121_int); // 0xbd3 NEW_2
	
Label_3029:
	var_122_int = 4; // 0xbd5 PushI
	var_123_bool = var_43_int >= var_122_int; // 0xbd6 GE
	if(var_123_bool == 0) goto Label_3039; // 0xbd7 JumpB
	var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0xbd8 PushV
	var_124_string = "beta_pills"; // 0xbd9 MovS
	var_125_int = 1; // 0xbda MovI
	var_126_int = 4; // 0xbdb MovI
	var_127_int = 3; // 0xbdc MovI
	func_2568(var_124_string, var_125_int, var_126_int, var_127_int); // 0xbdd NEW_2
	
Label_3039:
	var_128_int = 6; // 0xbdf PushI
	var_129_bool = var_43_int >= var_128_int; // 0xbe0 GE
	if(var_129_bool == 0) goto Label_3056; // 0xbe1 JumpB
	var_130_string = ""; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xbe2 PushV
	var_130_string = "alpha_pills"; // 0xbe3 MovS
	var_131_int = 1; // 0xbe4 MovI
	var_132_int = 2; // 0xbe5 MovI
	var_133_int = 8; // 0xbe6 MovI
	func_2568(var_130_string, var_131_int, var_132_int, var_133_int); // 0xbe7 NEW_2
	var_134_string = ""; var_135_int = 0; var_136_int = 0; var_137_int = 0; // 0xbe9 PushV
	var_134_string = "gamma_pills"; // 0xbea MovS
	var_135_int = 1; // 0xbeb MovI
	var_136_int = 8; // 0xbec MovI
	var_137_int = 3; // 0xbed MovI
	func_2568(var_134_string, var_135_int, var_136_int, var_137_int); // 0xbee NEW_2
	
Label_3056:
	var_138_int = 8; // 0xbf0 PushI
	var_139_bool = var_43_int >= var_138_int; // 0xbf1 GE
	if(var_139_bool == 0) goto Label_3071; // 0xbf2 JumpB
	var_140_string = ""; var_141_int = 0; var_142_int = 0; // 0xbf3 PushV
	var_140_string = "revolver_ammo"; // 0xbf4 MovS
	var_141_int = 1; // 0xbf5 MovI
	var_142_int = 3; // 0xbf6 MovI
	func_2557(var_140_string, var_141_int, var_142_int); // 0xbf7 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0xbf9 PushV
	var_143_string = "rifle_ammo"; // 0xbfa MovS
	var_144_int = 1; // 0xbfb MovI
	var_145_int = 3; // 0xbfc MovI
	func_2557(var_143_string, var_144_int, var_145_int); // 0xbfd NEW_2
	
Label_3071:
	var_146_int = 0; var_147_string = ""; // 0xbff PushV
	var_147_string = "patrol_mark"; // 0xc00 MovS
	func_3209(var_146_int, var_147_string); // 0xc01 NEW_2
	var_148_int = 0; // 0xc03 PushI
	var_149_int = 1; // 0xc04 PushI
	AddItem(var_42_bool, var_146_int, var_148_int, var_149_int); // 0xc05 Func
	return 6; // 0xc07 Return
}


func_2449(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj(); var_324_float = 0; // 0x992 PushV
	var_323_object = var_321_object; // 0x993 Mov
	var_324_float = 70; // 0x994 MovI
	func_2457(var_323_object, var_324_float); // 0x995 NEW_2
	var_320_bool = var_322_bool; // 0x996 Mov
	return 0; // 0x998 Return
}


func_2457(var_322_bool, var_324_float)
{
	var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_bool = 0; var_333_float = 0; var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_bool = 0; // 0x999 PushV
	GetPosition(var_334_cvector); // 0x99a ObjFunc
	GetEyesHeight(var_333_float); // 0x99c ObjFunc
	var_341_float = GetByIndex(var_334_cvector, 1); // 0x99e PushE
	var_341_float = var_341_float + var_333_float; // 0x99f Add2
	SetByIndex(var_334_cvector, 1) = var_341_float; // 0x9a0 PopE
	GetPosition(var_335_cvector); // 0x9a1 Func
	GetEyesHeight(var_333_float); // 0x9a3 Func
	var_342_float = GetByIndex(var_335_cvector, 1); // 0x9a5 PushE
	var_342_float = var_342_float + var_333_float; // 0x9a6 Add2
	SetByIndex(var_335_cvector, 1) = var_342_float; // 0x9a7 PopE
	var_336_cvector = var_334_cvector - var_335_cvector; // 0x9a8 Sub2
	var_343_float = GetByIndex(var_336_cvector, 1); // 0x9a9 PushE
	var_343_float = 0; // 0x9aa MovI
	SetByIndex(var_336_cvector, 1) = var_343_float; // 0x9ab PopE
	var_344_int = var_336_cvector | var_336_cvector; // 0x9ac Or
	var_345_float = sqrt(var_344_int); // 0x9ad Sqrt
	var_336_cvector = var_336_cvector / var_336_cvector; // 0x9ae Div2
	var_337_cvector = -var_336_cvector; // 0x9af Neg2
	var_346_float = var_336_cvector * var_324_float; // 0x9b0 Mult
	var_347_cvector = CVector(0.0, 10.0, 0.0); // 0x9b1 PushVec
	var_338_cvector = var_346_float - var_347_cvector; // 0x9b2 Sub2
	var_339_cvector = var_335_cvector + var_338_cvector; // 0x9b3 Add2
	IsOverrideActive(var_340_bool); // 0x9b4 Func
	var_348_bool = var_340_bool; // 0x9b6 Push
	if(var_348_bool == 0) goto Label_2490; // 0x9b7 JumpB
	var_322_bool = 0; // 0x9b8 MovB
	return 16; // 0x9b9 Return
	
Label_2490:
	StopWorld(); // 0x9ba Func
	CameraTransit(var_339_cvector, var_337_cvector); // 0x9bc Func
	var_349_float = GetByIndex(var_338_cvector, 0); // 0x9be PushE
	var_350_float = GetByIndex(var_338_cvector, 2); // 0x9bf PushE
	Rotate(var_349_float, var_350_float); // 0x9c0 Func
	CameraWaitForPlayFinish(); // 0x9c2 Func
	ResumeWorld(); // 0x9c4 Func
	var_322_bool = 1; // 0x9c6 MovB
	return 16; // 0x9c7 Return
}


func_922(var_0_bool, var_1_object, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool)
{
	var_263_bool = 0; var_264_bool = 0; var_265_object = Obj(); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_float = 0; var_270_object = Obj(); var_271_bool = 0; var_272_bool = 0; var_273_object = Obj(); var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0); var_276_cvector = CVector(0,0,0); var_277_float = 0; var_278_object = Obj(); // 0x39a PushV
	var_0_bool = 0; // 0x39b TMovB
	var_1_object = var_258_object; // 0x39c TMov
	var_272_bool = var_262_bool; // 0x39d Mov
	
Label_926:
	var_279_bool = 0; var_280_object = Obj(); // 0x39e PushV
	var_280_object = var_258_object; // 0x39f Mov
	func_1062(var_279_bool, var_280_object); // 0x3a0 NEW_2
	var_283_bool = var_279_bool == 0; // 0x3a2 Not
	if(var_283_bool == 0) goto Label_934; // 0x3a3 JumpB
	var_257_bool = 0; // 0x3a4 MovB
	return 16; // 0x3a5 Return
	
Label_934:
	GetPosition(var_274_cvector); // 0x3a6 ObjFunc
	GetPosition(var_275_cvector); // 0x3a8 Func
	var_276_cvector = var_274_cvector - var_275_cvector; // 0x3aa Sub2
	var_277_float = var_276_cvector | var_276_cvector; // 0x3ab Or2
	var_284_bool = 0; // 0x3ac PushV
	var_284_bool = 0; // 0x3ad MovB
	var_285_int = 0; // 0x3ae PushI
	var_286_bool = var_260_float > var_285_int; // 0x3af GT
	if(var_286_bool == 0) goto Label_949; // 0x3b0 JumpB
	var_287_float = var_260_float * var_260_float; // 0x3b1 Mult
	var_288_bool = var_277_float > var_287_float; // 0x3b2 GT
	if(var_288_bool == 0) goto Label_949; // 0x3b3 JumpB
	var_284_bool = 1; // 0x3b4 MovB
	
Label_949:
	if(var_284_bool == 0) goto Label_954; // 0x3b5 JumpB
	Stop(); // 0x3b6 Func
	var_257_bool = 0; // 0x3b8 MovB
	return 16; // 0x3b9 Return
	
Label_954:
	var_289_float = var_259_float * var_259_float; // 0x3ba Mult
	var_290_bool = var_277_float > var_289_float; // 0x3bb GT
	if(var_290_bool == 0) goto Label_1016; // 0x3bc JumpB
	GetPFPosition(var_274_cvector); // 0x3bd ObjFunc
	FindPathTo(var_278_object, var_274_cvector); // 0x3bf Func
	var_291_bool = var_278_object != 0; // 0x3c1 NullNeq
	if(var_291_bool == 0) goto Label_965; // 0x3c2 JumpB
	var_273_object = var_278_object; // 0x3c3 Mov
	var_278_object = 0; // 0x3c4 SetNull
	
Label_965:
	var_292_bool = var_273_object != 0; // 0x3c5 NullNeq
	if(var_292_bool == 0) goto Label_998; // 0x3c6 JumpB
	var_293_bool = var_272_bool; // 0x3c7 Push
	if(var_293_bool == 0) goto Label_975; // 0x3c8 JumpB
	var_272_bool = 0; // 0x3c9 MovB
	RotatePath(var_273_object, var_271_bool); // 0x3ca Func
	var_294_bool = var_271_bool == 0; // 0x3cc Not
	if(var_294_bool == 0) goto Label_975; // 0x3cd JumpB
	goto Label_1022; // 0x3ce Jump
	
Label_1022:
	var_257_bool = !var_0_bool; // 0x3fe Not2
	return 16; // 0x3ff Return
	
Label_975:
	var_295_int = 0; // 0x3cf PushI
	var_296_float = 0.3; // 0x3d0 PushF
	SetTimer(var_295_int, var_296_float); // 0x3d1 Func
	var_297_string = ""; // 0x3d3 PushV
	func_1069(var_297_string); // 0x3d4 NEW_2
	var_298_string = ""; // 0x3d6 PushV
	func_1071(var_298_string); // 0x3d7 NEW_2
	FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string); // 0x3d9 Func
	var_299_bool = var_271_bool == 0; // 0x3db Not
	if(var_299_bool == 0) goto Label_996; // 0x3dc JumpB
	var_300_bool = var_0_bool; // 0x3dd PushT
	if(var_300_bool == 0) goto Label_994; // 0x3de JumpB
	var_273_object = 0; // 0x3df SetNull
	goto Label_1022; // 0x3e0 Jump
	
Label_994:
	goto Label_1021; // 0x3e2 Jump
	
Label_1021:
	goto Label_926; // 0x3fd Jump
	
Label_996:
	var_273_object = 0; // 0x3e4 SetNull
	goto Label_1014; // 0x3e5 Jump
	
Label_1014:
	var_278_object = 0; // 0x3f6 SetNull
	goto Label_1020; // 0x3f7 Jump
	
Label_1020:
	var_273_object = 0; // 0x3fc SetNull
	
Label_998:
	var_301_int = 0; // 0x3e6 PushI
	KillTimer(var_301_int); // 0x3e7 Func
	var_302_float = 0.5; // 0x3e9 PushF
	Sleep(var_302_float, var_271_bool); // 0x3ea Func
	var_303_bool = var_271_bool == 0; // 0x3ec Not
	if(var_303_bool == 0) goto Label_1010; // 0x3ed JumpB
	var_304_bool = var_0_bool; // 0x3ee PushT
	if(var_304_bool == 0) goto Label_1010; // 0x3ef JumpB
	var_273_object = 0; // 0x3f0 SetNull
	goto Label_1022; // 0x3f1 Jump
	
Label_1010:
	var_305_int = 0; // 0x3f2 PushI
	var_306_float = 0.3; // 0x3f3 PushF
	SetTimer(var_305_int, var_306_float); // 0x3f4 Func
	
Label_1016:
	var_307_int = 0; // 0x3f8 PushI
	KillTimer(var_307_int); // 0x3f9 Func
	goto Label_1022; // 0x3fb Jump
}


func_1950(var_144_object)
{
	var_145_object = Obj(); // 0x79f PushV
	var_145_object = var_144_object; // 0x7a0 Mov
	func_2353(); // 0x7a1 NEW_2
	var_154_string = "all"; // 0x7a3 PushS
	var_155_string = "hunt"; // 0x7a4 PushS
	PlayAnimation(var_154_string, var_155_string); // 0x7a5 Func
	WaitForAnimEnd(); // 0x7a7 Func
	return 0; // 0x7a9 Return
}


func_1962()
{
	StopAnimation(); // 0x7aa Func
	StopAsync(); // 0x7ac Func
	return 0; // 0x7ae Return
}


func_3516(var_20_bool, var_21_object, var_22_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0xdbc PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0xdbd PushV
	var_27_object = var_22_object; // 0xdbe Mov
	var_28_bool = !var_23_bool; // 0xdbf Not2
	func_3214(var_26_bool, var_27_object, var_28_bool); // 0xdc0 NEW_2
	if(var_26_bool == 0) goto Label_3540; // 0xdc2 JumpB
	CanSee(var_25_bool, var_21_object); // 0xdc3 Func
	var_94_bool = 0; // 0xdc5 PushV
	var_94_bool = 1; // 0xdc6 MovB
	var_95_bool = var_25_bool; // 0xdc7 Push
	if(var_95_bool == 0) goto Label_3537; // 0xdc8 JumpB
	var_96_float = 0; var_97_object = Obj(); // 0xdc9 PushV
	var_97_object = var_21_object; // 0xdca Mov
	func_2064(var_97_object); // 0xdcb NEW_2
	var_104_float = 160000.0; // 0xdcd PushF
	var_105_bool = var_96_float <= var_104_float; // 0xdce LE
	if(var_105_bool == 0) goto Label_3537; // 0xdcf JumpB
	var_94_bool = 0; // 0xdd0 MovB
	
Label_3537:
	if(var_94_bool == 0) goto Label_3540; // 0xdd1 JumpB
	var_20_bool = 1; // 0xdd2 MovB
	return 2; // 0xdd3 Return
	
Label_3540:
	var_20_bool = 0; // 0xdd4 MovB
	return 2; // 0xdd5 Return
}


func_2504()
{
	CameraSwitchToNormal(); // 0x9c9 Func
	return 0; // 0x9cb Return
}


func_2508(var_294_string)
{
	var_295_bool = 0; var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_float = 0; var_300_float = 0; // 0x9cc PushV
	lshHasAnimation(var_298_bool, var_294_string); // 0x9cd Func
	var_301_bool = var_298_bool; // 0x9cf Push
	if(var_301_bool == 0) goto Label_2519; // 0x9d0 JumpB
	lshGetAnimTimes(var_294_string, var_299_float, var_300_float); // 0x9d1 Func
	var_302_bool = 0; // 0x9d3 PushB
	lshPlayAnimation(var_299_float, var_300_float, var_302_bool); // 0x9d4 Func
	goto Label_2523; // 0x9d6 Jump
	
Label_2523:
	return 6; // 0x9db Return
	
Label_2519:
	var_303_string = "Can't find lsh animation : "; // 0x9d7 PushS
	var_304_int = var_303_string + var_294_string; // 0x9d8 Add
	Trace(var_304_int); // 0x9d9 Func
}


func_3542(var_200_int)
{
	var_200_int = 515572; // 0xdd6 MovI
	return 0; // 0xdd7 Return
}


func_3544(var_199_int)
{
	var_199_int = 504031; // 0xdd8 MovI
	return 0; // 0xdd9 Return
}


func_3546(var_201_string)
{
	var_201_string = "ui/NPC_Citizen2.png"; // 0xdda MovS
	return 0; // 0xddb Return
}


func_2524(var_223_string, var_224_bool)
{
	var_227_bool = 0; var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_float = 0; var_232_float = 0; // 0x9dc PushV
	lshHasAnimation(var_230_bool, var_223_string); // 0x9dd Func
	var_233_bool = var_230_bool; // 0x9df Push
	if(var_233_bool == 0) goto Label_2534; // 0x9e0 JumpB
	lshGetAnimTimes(var_223_string, var_231_float, var_232_float); // 0x9e1 Func
	lshPlayAnimation(var_231_float, var_232_float, var_224_bool); // 0x9e3 Func
	goto Label_2538; // 0x9e5 Jump
	
Label_2538:
	return 6; // 0x9ea Return
	
Label_2534:
	var_234_string = "Can't find lsh animation : "; // 0x9e6 PushS
	var_235_int = var_234_string + var_223_string; // 0x9e7 Add
	Trace(var_235_int); // 0x9e8 Func
}


func_3548(var_202_string)
{
	var_202_string = "ui/NPC_Citizen2_b.png"; // 0xddc MovS
	return 0; // 0xddd Return
}


func_3550(var_194_bool)
{
	var_194_bool = 0; // 0xdde MovB
	return 0; // 0xddf Return
}


func_3552(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_string = ""; var_25_float = 0; var_26_bool = 0; var_27_float = 0; var_28_string = ""; var_29_float = 0; // 0xde0 PushV
	var_30_bool = 0; var_31_object = Obj(); // 0xde1 PushV
	var_31_object = var_21_object; // 0xde2 Mov
	func_2203(var_30_bool, var_31_object); // 0xde3 NEW_2
	var_64_bool = var_30_bool == 0; // 0xde5 Not
	if(var_64_bool == 0) goto Label_3561; // 0xde6 JumpB
	var_20_bool = 0; // 0xde7 MovB
	return 8; // 0xde8 Return
	
Label_3561:
	var_65_object = GlobalVars[0]; // 0xde9 PushGE
	in(var_26_bool, var_21_object); // 0xdea ObjFunc
	var_66_bool = var_26_bool; // 0xdec Push
	if(var_66_bool == 0) goto Label_3568; // 0xded JumpB
	var_20_bool = 1; // 0xdee MovB
	return 8; // 0xdef Return
	
Label_3568:
	var_67_bool = 0; var_68_object = Obj(); // 0xdf0 PushV
	var_68_object = var_21_object; // 0xdf1 Mov
	func_2072(var_67_bool, var_68_object); // 0xdf2 NEW_2
	if(var_67_bool == 0) goto Label_3579; // 0xdf4 JumpB
	var_71_string = "reputation"; // 0xdf5 PushS
	GetProperty(var_71_string, var_27_float); // 0xdf6 ObjFunc
	var_72_float = 0.33; // 0xdf8 PushF
	var_20_bool = var_27_float < var_72_float; // 0xdf9 LT2
	return 8; // 0xdfa Return
	
Label_3579:
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; // 0xdfb PushV
	var_74_object = var_21_object; // 0xdfc Mov
	var_75_string = "class"; // 0xdfd MovS
	func_2077(var_73_bool, var_74_object, var_75_string); // 0xdfe NEW_2
	if(var_73_bool == 0) goto Label_3638; // 0xe00 JumpB
	var_76_string = "class"; // 0xe01 PushS
	GetProperty(var_76_string, var_28_string); // 0xe02 ObjFunc
	var_77_bool = 0; // 0xe04 PushV
	var_77_bool = 1; // 0xe05 MovB
	var_78_bool = 0; // 0xe06 PushV
	var_78_bool = 1; // 0xe07 MovB
	var_79_string = "bomber"; // 0xe08 PushS
	var_80_bool = var_28_string == var_79_string; // 0xe09 Eq
	if(var_80_bool == 0) goto Label_3599; // 0xe0a JumpB
	var_81_string = "hunter"; // 0xe0b PushS
	var_82_bool = var_28_string == var_81_string; // 0xe0c Eq
	if(var_82_bool == 0) goto Label_3599; // 0xe0d JumpB
	var_78_bool = 0; // 0xe0e MovB
	
Label_3599:
	if(var_78_bool == 0) goto Label_3604; // 0xe0f JumpB
	var_83_string = "grabitel"; // 0xe10 PushS
	var_84_bool = var_28_string == var_83_string; // 0xe11 Eq
	if(var_84_bool == 0) goto Label_3604; // 0xe12 JumpB
	var_77_bool = 0; // 0xe13 MovB
	
Label_3604:
	if(var_77_bool == 0) goto Label_3607; // 0xe14 JumpB
	var_20_bool = 1; // 0xe15 MovB
	return 8; // 0xe16 Return
	
Label_3607:
	var_85_bool = 0; // 0xe17 PushV
	var_85_bool = 0; // 0xe18 MovB
	var_86_bool = 0; var_87_string = ""; // 0xe19 PushV
	var_87_string = var_28_string; // 0xe1a Mov
	func_2624(var_86_bool, var_87_string); // 0xe1b NEW_2
	if(var_86_bool == 0) goto Label_3621; // 0xe1d JumpB
	var_125_bool = 0; var_126_object = Obj(); var_127_string = ""; // 0xe1e PushV
	var_126_object = var_21_object; // 0xe1f Mov
	var_127_string = "disease"; // 0xe20 MovS
	func_2077(var_125_bool, var_126_object, var_127_string); // 0xe21 NEW_2
	if(var_125_bool == 0) goto Label_3621; // 0xe23 JumpB
	var_85_bool = 1; // 0xe24 MovB
	
Label_3621:
	if(var_85_bool == 0) goto Label_3638; // 0xe25 JumpB
	var_128_string = "disease"; // 0xe26 PushS
	GetProperty(var_128_string, var_29_float); // 0xe27 ObjFunc
	var_20_bool = 0; // 0xe29 MovB
	var_129_int = 0; // 0xe2a PushI
	var_130_bool = var_29_float > var_129_int; // 0xe2b GT
	if(var_130_bool == 0) goto Label_3637; // 0xe2c JumpB
	var_131_float = 0; var_132_object = Obj(); // 0xe2d PushV
	var_132_object = var_21_object; // 0xe2e Mov
	func_2064(var_132_object); // 0xe2f NEW_2
	var_139_float = 490000.0; // 0xe31 PushF
	var_140_bool = var_131_float <= var_139_float; // 0xe32 LE
	if(var_140_bool == 0) goto Label_3637; // 0xe33 JumpB
	var_20_bool = 1; // 0xe34 MovB
	
Label_3637:
	return 8; // 0xe35 Return
	
Label_3638:
	var_20_bool = 0; // 0xe36 MovB
	return 8; // 0xe37 Return
}


func_2539(var_247_object)
{
	var_248_float = 0; var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_cvector = CVector(0,0,0); // 0x9eb PushV
	GetEyesHeight(var_250_float); // 0x9ec ObjFunc
	var_251_cvector = CVector(0.0, 0.0, 0.0); // 0x9ee MovV
	var_252_float = GetByIndex(var_251_cvector, 1); // 0x9ef PushE
	var_252_float = var_250_float; // 0x9f0 Mov
	SetByIndex(var_251_cvector, 1) = var_252_float; // 0x9f1 PopE
	var_253_string = "head"; // 0x9f2 PushS
	LookAsync(var_247_object, var_253_string, var_251_cvector); // 0x9f3 Func
	return 4; // 0x9f5 Return
}


func_2550()
{
	var_20_bool = 0; // 0x9f6 PushV
	func_3550(var_20_bool); // 0x9f7 NEW_2
	if(var_20_bool == 0) goto Label_2556; // 0x9f9 JumpB
	lshStopSpeech(); // 0x9fa Func
	
Label_2556:
	return 0; // 0x9fc Return
}


func_2043(var_525_string, var_526_int)
{
	var_527_int = 2; // 0x7fc PushI
	var_528_bool = var_526_int == var_527_int; // 0x7fd Eq
	if(var_528_bool == 0) goto Label_2050; // 0x7fe JumpB
	var_525_string = "fire"; // 0x7ff MovS
	return 0; // 0x800 Return
	
Label_2050:
	var_529_int = 1; // 0x802 PushI
	var_530_bool = var_526_int == var_529_int; // 0x803 Eq
	if(var_530_bool == 0) goto Label_2055; // 0x804 JumpB
	var_525_string = "bullet"; // 0x805 MovS
	return 0; // 0x806 Return
	
Label_2055:
	var_525_string = "phys"; // 0x807 MovS
	return 0; // 0x808 Return
}


func_2557(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0; // 0x9fd PushV
	var_69_bool = 0; var_70_int = 0; var_71_int = 0; // 0x9fe PushV
	var_70_int = var_65_int; // 0x9ff Mov
	var_71_int = var_66_int; // 0xa00 Mov
	func_2749(var_69_bool, var_70_int, var_71_int); // 0xa01 NEW_2
	if(var_69_bool == 0) goto Label_2567; // 0xa03 JumpB
	var_72_int = 0; // 0xa04 PushI
	AddItem(var_68_bool, var_64_string, var_72_int); // 0xa05 Func
	
Label_2567:
	return 2; // 0xa07 Return
}


