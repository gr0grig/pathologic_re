task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; // 0x1b PushV
	func_3561(var_18_bool); // 0x1c NEW_2
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
	func_2554(); // 0x10d NEW_2
	var_21_int = 39797; // 0x10f PushI
	var_22_bool = var_18_int == var_21_int; // 0x110 Eq
	if(var_22_bool == 0) goto Label_279; // 0x111 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x112 PushV
	var_23_object = var_1_object; // 0x113 MovT
	var_24_object = var_0_bool; // 0x114 MovT
	func_2815(); // 0x115 NEW_2
	
Label_279:
	var_26_int = 39798; // 0x117 PushI
	var_27_bool = var_18_int == var_26_int; // 0x118 Eq
	if(var_27_bool == 0) goto Label_287; // 0x119 JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x11a PushV
	var_28_object = var_1_object; // 0x11b MovT
	var_29_object = var_0_bool; // 0x11c MovT
	func_2815(); // 0x11d NEW_2
	
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
	func_2832(var_51_object); // 0x12d NEW_2
	var_58_bool = var_50_bool == 0; // 0x12f Not
	if(var_58_bool == 0) goto Label_310; // 0x130 JumpB
	var_59_int = 537936; // 0x131 PushI
	var_60_int = -1; // 0x132 PushI
	var_61_int = 39797; // 0x133 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x134 TObjFunc
	
Label_310:
	var_62_bool = 0; var_63_object = Obj(); // 0x136 PushV
	var_63_object = var_1_object; // 0x137 MovT
	func_2832(var_63_object); // 0x138 NEW_2
	if(var_62_bool == 0) goto Label_320; // 0x13a JumpB
	var_64_int = 537937; // 0x13b PushI
	var_65_int = -1; // 0x13c PushI
	var_66_int = 39798; // 0x13d PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x13e TObjFunc
	
Label_320:
	var_67_bool = 0; var_68_object = Obj(); // 0x140 PushV
	var_68_object = var_1_object; // 0x141 MovT
	func_2820(var_68_object); // 0x142 NEW_2
	if(var_67_bool == 0) goto Label_330; // 0x144 JumpB
	var_73_int = 537938; // 0x145 PushI
	var_74_int = 39800; // 0x146 PushI
	var_75_int = 39799; // 0x147 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x148 TObjFunc
	
Label_330:
	var_76_bool = 0; var_77_object = Obj(); // 0x14a PushV
	var_77_object = var_1_object; // 0x14b MovT
	func_2832(var_77_object); // 0x14c NEW_2
	if(var_76_bool == 0) goto Label_340; // 0x14e JumpB
	var_78_int = 537951; // 0x14f PushI
	var_79_int = 39813; // 0x150 PushI
	var_80_int = 39812; // 0x151 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x152 TObjFunc
	
Label_340:
	var_81_bool = 0; var_82_object = Obj(); // 0x154 PushV
	var_82_object = var_1_object; // 0x155 MovT
	func_2844(var_82_object); // 0x156 NEW_2
	if(var_81_bool == 0) goto Label_350; // 0x158 JumpB
	var_87_int = 537964; // 0x159 PushI
	var_88_int = -1; // 0x15a PushI
	var_89_int = 39826; // 0x15b PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x15c TObjFunc
	
Label_350:
	var_90_bool = 0; var_91_object = Obj(); // 0x15e PushV
	var_91_object = var_1_object; // 0x15f MovT
	func_2820(var_91_object); // 0x160 NEW_2
	if(var_90_bool == 0) goto Label_360; // 0x162 JumpB
	var_92_int = 537965; // 0x163 PushI
	var_93_int = -1; // 0x164 PushI
	var_94_int = 39827; // 0x165 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x166 TObjFunc
	
Label_360:
	var_95_bool = 0; var_96_object = Obj(); // 0x168 PushV
	var_96_object = var_1_object; // 0x169 MovT
	func_2844(var_96_object); // 0x16a NEW_2
	if(var_95_bool == 0) goto Label_370; // 0x16c JumpB
	var_97_int = 537966; // 0x16d PushI
	var_98_int = -1; // 0x16e PushI
	var_99_int = 39828; // 0x16f PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x170 TObjFunc
	
Label_370:
	var_100_bool = 0; var_101_object = Obj(); // 0x172 PushV
	var_101_object = var_1_object; // 0x173 MovT
	func_2832(var_101_object); // 0x174 NEW_2
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
	func_3561(var_185_bool); // 0x237 NEW_2
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
	func_3521(); // 0x260 NEW_2
	return 0; // 0x262 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x264 PushV
	var_19_object = var_17_int; // 0x265 Mov
	func_3563(var_18_bool, var_19_object); // 0x266 NEW_2
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
	var_320_bool = var_140_int == var_143_object; // 0x274 Eq
	if(var_320_bool == 0) goto Label_634; // 0x275 JumpB
	var_321_object = Obj(); // 0x276 PushV
	var_321_object = var_17_int; // 0x277 Mov
	func_3368(var_321_object); // 0x278 NEW_2
	
Label_634:
	return 0; // 0x27a Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x282 PushV
	var_19_object = var_17_int; // 0x283 Mov
	func_3400(var_18_bool, var_19_object); // 0x284 NEW_2
	if(var_18_bool == 0) goto Label_654; // 0x286 JumpB
	func_595(); // 0x288 NEW_2
	var_142_object = Obj(); // 0x28a PushV
	var_142_object = var_17_int; // 0x28b Mov
	func_3407(var_142_object); // 0x28c NEW_2
	
Label_654:
	return 0; // 0x28e Return
}


task_3_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x290 PushV
	var_19_object = var_17_int; // 0x291 Mov
	func_3387(var_18_bool, var_19_object); // 0x292 NEW_2
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
	func_3394(var_156_object); // 0x2a6 NEW_2
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
	func_3424(var_136_object); // 0x2b2 NEW_2
	return 0; // 0x2b4 Return
	
Label_693:
	func_595(); // 0x2b6 NEW_2
	var_152_object = Obj(); // 0x2b8 PushV
	var_152_object = var_106_object; // 0x2b9 Mov
	func_3448(var_152_object); // 0x2ba NEW_2
	return 0; // 0x2bc Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_11_bool, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x2be PushV
	var_21_object = var_17_bool; // 0x2bf Mov
	var_22_object = var_18_float; // 0x2c0 Mov
	var_23_bool = var_19_int; // 0x2c1 Mov
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x2c2 NEW_2
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
	func_3424(var_18_object); // 0x326 NEW_2
	return 0; // 0x328 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_bool, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x32a PushV
	var_21_object = var_17_bool; // 0x32b Mov
	var_22_object = var_18_float; // 0x32c Mov
	var_23_bool = var_19_int; // 0x32d Mov
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x32e NEW_2
	return 0; // 0x330 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int)
{
	var_18_int = 1; // 0x363 PushI
	var_19_bool = var_17_int == var_18_int; // 0x364 Eq
	if(var_19_bool == 0) goto Label_875; // 0x365 JumpB
	var_20_object = Obj(); // 0x366 PushV
	var_20_object = var_1_object; // 0x367 MovT
	func_2795(var_20_object); // 0x368 NEW_2
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
	func_2543(var_21_object); // 0x389 NEW_2
	
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
	func_3521(); // 0x423 NEW_2
	return 0; // 0x425 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0x440 PushV
	var_18_object = var_17_object; // 0x441 Mov
	func_3424(var_18_object); // 0x442 NEW_2
	return 0; // 0x444 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x446 PushV
	var_21_object = var_17_object; // 0x447 Mov
	var_22_object = var_18_object; // 0x448 Mov
	var_23_bool = var_19_bool; // 0x449 Mov
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x44a NEW_2
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
	func_2879(var_21_object); // 0x720 NEW_2
	
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
	func_3521(); // 0x7b5 NEW_2
	return 0; // 0x7b7 Return
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x7b9 PushV
	var_19_object = var_17_object; // 0x7ba Mov
	func_3400(var_18_bool, var_19_object); // 0x7bb NEW_2
	if(var_18_bool == 0) goto Label_1989; // 0x7bd JumpB
	func_1962(); // 0x7bf NEW_2
	var_141_object = Obj(); // 0x7c1 PushV
	var_141_object = var_17_object; // 0x7c2 Mov
	func_3407(var_141_object); // 0x7c3 NEW_2
	
Label_1989:
	return 0; // 0x7c5 Return
}


task_7_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_bool = 0; var_19_object = Obj(); // 0x7c7 PushV
	var_19_object = var_17_object; // 0x7c8 Mov
	func_3387(var_18_bool, var_19_object); // 0x7c9 NEW_2
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
	func_3394(var_143_object); // 0x7d7 NEW_2
	
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
	func_3424(var_136_object); // 0x7e3 NEW_2
	return 0; // 0x7e5 Return
	
Label_2022:
	func_1962(); // 0x7e7 NEW_2
	var_151_object = Obj(); // 0x7e9 PushV
	var_151_object = var_106_object; // 0x7ea Mov
	func_3448(var_151_object); // 0x7eb NEW_2
	return 0; // 0x7ed Return
	}


task_7_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_bool = 0; // 0x7ef PushV
	var_21_object = var_17_object; // 0x7f0 Mov
	var_22_object = var_18_object; // 0x7f1 Mov
	var_23_bool = var_19_bool; // 0x7f2 Mov
	func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool); // 0x7f3 NEW_2
	if(var_20_bool == 0) goto Label_2042; // 0x7f5 JumpB
	var_106_object = Obj(); // 0x7f6 PushV
	var_106_object = var_17_object; // 0x7f7 Mov
	func_2010(); // 0x7f8 NEW_2
	
Label_2042:
	return 0; // 0x7fa Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0xd9c PushV
	var_21_object = var_17_object; // 0xd9d Mov
	var_22_int = var_18_int; // 0xd9e Mov
	var_23_float = var_19_float; // 0xd9f Mov
	func_2271(var_21_object, var_22_int, var_23_float); // 0xda0 NEW_2
	return 0; // 0xda2 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0xda4 PushV
	var_23_object = var_17_object; // 0xda5 Mov
	var_24_int = var_18_int; // 0xda6 Mov
	var_25_float = var_19_float; // 0xda7 Mov
	var_26_cvector = var_21_cvector; // 0xda8 Mov
	var_27_cvector = var_22_cvector; // 0xda9 Mov
	func_2339(var_25_float, var_26_cvector, var_27_cvector); // 0xdaa NEW_2
	return 0; // 0xdac Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0xdad PushV
	var_21_string = "health"; // 0xdae PushS
	var_22_bool = var_18_string == var_21_string; // 0xdaf Eq
	if(var_22_bool == 0) goto Label_3513; // 0xdb0 JumpB
	var_23_string = "health"; // 0xdb1 PushS
	GetProperty(var_23_string, var_20_float); // 0xdb2 Func
	var_24_int = 0; // 0xdb4 PushI
	var_25_bool = var_20_float <= var_24_int; // 0xdb5 LE
	if(var_25_bool == 0) goto Label_3513; // 0xdb6 JumpB
	SignalDeath(var_17_object); // 0xdb7 Func
	
Label_3513:
	return 2; // 0xdb9 Return
}


event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_18_string)
{
	var_19_string = "prc"; // 0xdbb PushS
	var_20_bool = var_18_string == var_19_string; // 0xdbc Eq
	if(var_20_bool == 0) goto Label_3520; // 0xdbd JumpB
	ResetAAS(); // 0xdbe Func
	
Label_3520:
	return 0; // 0xdc0 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object)
{
	var_18_object = Obj(); // 0xdc2 PushV
	var_18_object = var_17_object; // 0xdc3 Mov
	func_3463(var_18_object); // 0xdc4 NEW_2
	return 0; // 0xdc6 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int)
{
	func_3361(); // 0x243 NEW_2
	func_3162(); // 0x246 NEW_2
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


func_2561(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0; // 0xa01 PushV
	var_69_bool = 0; var_70_int = 0; var_71_int = 0; // 0xa02 PushV
	var_70_int = var_65_int; // 0xa03 Mov
	var_71_int = var_66_int; // 0xa04 Mov
	func_2753(var_69_bool, var_70_int, var_71_int); // 0xa05 NEW_2
	if(var_69_bool == 0) goto Label_2571; // 0xa07 JumpB
	var_72_int = 0; // 0xa08 PushI
	AddItem(var_68_bool, var_64_string, var_72_int); // 0xa09 Func
	
Label_2571:
	return 2; // 0xa0b Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_357_bool = 0; // 0x4 PushV
	func_3561(var_357_bool); // 0x5 NEW_2
	if(var_357_bool == 0) goto Label_15; // 0x7 JumpB
	var_358_string = ""; // 0x8 PushV
	var_358_string = "Neutral"; // 0x9 MovS
	func_2512(var_358_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_359_bool = var_0_bool; // 0x15 PushT
	if(var_359_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_360_string = "all"; // 0x11 PushS
	var_361_string = "idle"; // 0x12 PushS
	PlayAnimation(var_360_string, var_361_string); // 0x13 Func
}


func_1541(var_588_bool, var_589_float)
{
	var_590_float = 0; var_591_bool = 0; var_592_float = 0; var_593_bool = 0; // 0x605 PushV
	rand(var_592_float); // 0x606 Func
	var_594_bool = var_592_float < var_589_float; // 0x608 LT
	if(var_594_bool == 0) goto Label_1561; // 0x609 JumpB
	
Label_1546:
	IsAnimationPlaying(var_593_bool); // 0x60a Func
	var_595_bool = var_593_bool == 0; // 0x60c Not
	if(var_595_bool == 0) goto Label_1551; // 0x60d JumpB
	goto Label_1560; // 0x60e Jump
	
Label_1560:
	goto Label_1566; // 0x618 Jump
	
Label_1566:
	var_588_bool = 0; // 0x61e MovB
	return 4; // 0x61f Return
	
Label_1551:
	var_596_bool = 0; // 0x60f PushV
	func_1639(var_596_bool); // 0x610 NEW_2
	if(var_596_bool == 0) goto Label_1557; // 0x612 JumpB
	var_588_bool = 1; // 0x613 MovB
	return 4; // 0x614 Return
	
Label_1557:
	sync(); // 0x615 Func
	goto Label_1546; // 0x617 Jump
	
Label_1561:
	WaitForAnimEnd(); // 0x619 Func
	func_1743(var_593_bool); // 0x61c NEW_2
}


func_2057(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x809 PushV
	GetPosition(var_55_cvector); // 0x80a Func
	GetPosition(var_56_cvector); // 0x80c ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x80e Sub2
	return 4; // 0x80f Return
}


func_2572(var_34_string, var_35_int, var_36_int, var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0xa0c PushV
	var_42_bool = 0; var_43_int = 0; var_44_int = 0; // 0xa0d PushV
	var_43_int = var_35_int; // 0xa0e Mov
	var_44_int = var_36_int; // 0xa0f Mov
	func_2753(var_42_bool, var_43_int, var_44_int); // 0xa10 NEW_2
	if(var_42_bool == 0) goto Label_2586; // 0xa12 JumpB
	irand(var_40_int, var_37_int); // 0xa13 Func
	var_47_int = 0; // 0xa15 PushI
	var_48_int = 1; // 0xa16 PushI
	var_49_int = var_40_int + var_48_int; // 0xa17 Add
	AddItem(var_41_bool, var_34_string, var_47_int, var_49_int); // 0xa18 Func
	
Label_2586:
	return 4; // 0xa1a Return
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


func_3091()
{
	var_253_int = 0; var_254_bool = 0; var_255_int = 0; var_256_int = 0; var_257_bool = 0; var_258_int = 0; // 0xc13 PushV
	var_259_int = 0; // 0xc14 PushI
	ClearSubContainer(var_259_int); // 0xc15 Func
	var_260_int = 0; // 0xc17 PushV
	func_2786(var_260_int); // 0xc18 NEW_2
	var_258_int = var_260_int; // 0xc19 Mov
	var_261_int = 0; var_262_int = 0; // 0xc1b PushV
	var_261_int = 0; // 0xc1c MovI
	var_263_int = 10; // 0xc1d PushI
	var_264_int = 5; // 0xc1e PushI
	var_265_float = var_258_int * var_264_int; // 0xc1f Mult
	var_262_int = var_263_int + var_265_float; // 0xc20 Add2
	func_2892(var_261_int, var_262_int); // 0xc21 NEW_2
	var_266_string = ""; var_267_int = 0; var_268_int = 0; // 0xc23 PushV
	var_266_string = "bottle_water"; // 0xc24 MovS
	var_267_int = 1; // 0xc25 MovI
	var_268_int = 3; // 0xc26 MovI
	func_2561(var_266_string, var_267_int, var_268_int); // 0xc27 NEW_2
	var_269_string = ""; var_270_int = 0; var_271_int = 0; // 0xc29 PushV
	var_269_string = "rusk"; // 0xc2a MovS
	var_270_int = 1; // 0xc2b MovI
	var_271_int = 20; // 0xc2c MovI
	func_2561(var_269_string, var_270_int, var_271_int); // 0xc2d NEW_2
	var_272_string = ""; var_273_int = 0; var_274_int = 0; // 0xc2f PushV
	var_272_string = "hook"; // 0xc30 MovS
	var_273_int = 1; // 0xc31 MovI
	var_274_int = 30; // 0xc32 MovI
	func_2561(var_272_string, var_273_int, var_274_int); // 0xc33 NEW_2
	var_275_string = ""; var_276_int = 0; var_277_int = 0; // 0xc35 PushV
	var_275_string = "watch"; // 0xc36 MovS
	var_276_int = 1; // 0xc37 MovI
	var_277_int = 30; // 0xc38 MovI
	func_2561(var_275_string, var_276_int, var_277_int); // 0xc39 NEW_2
	var_278_int = 3; // 0xc3b PushI
	var_279_bool = var_258_int >= var_278_int; // 0xc3c GE
	if(var_279_bool == 0) goto Label_3141; // 0xc3d JumpB
	var_280_string = ""; var_281_int = 0; var_282_int = 0; var_283_int = 0; // 0xc3e PushV
	var_280_string = "alpha_pills"; // 0xc3f MovS
	var_281_int = 1; // 0xc40 MovI
	var_282_int = 4; // 0xc41 MovI
	var_283_int = 3; // 0xc42 MovI
	func_2572(var_280_string, var_281_int, var_282_int, var_283_int); // 0xc43 NEW_2
	
Label_3141:
	var_284_int = 4; // 0xc45 PushI
	var_285_bool = var_258_int >= var_284_int; // 0xc46 GE
	if(var_285_bool == 0) goto Label_3151; // 0xc47 JumpB
	var_286_string = ""; var_287_int = 0; var_288_int = 0; var_289_int = 0; // 0xc48 PushV
	var_286_string = "beta_pills"; // 0xc49 MovS
	var_287_int = 1; // 0xc4a MovI
	var_288_int = 8; // 0xc4b MovI
	var_289_int = 3; // 0xc4c MovI
	func_2572(var_286_string, var_287_int, var_288_int, var_289_int); // 0xc4d NEW_2
	
Label_3151:
	var_290_int = 6; // 0xc4f PushI
	var_291_bool = var_258_int >= var_290_int; // 0xc50 GE
	if(var_291_bool == 0) goto Label_3161; // 0xc51 JumpB
	var_292_string = ""; var_293_int = 0; var_294_int = 0; var_295_int = 0; // 0xc52 PushV
	var_292_string = "gamma_pills"; // 0xc53 MovS
	var_293_int = 1; // 0xc54 MovI
	var_294_int = 16; // 0xc55 MovI
	var_295_int = 3; // 0xc56 MovI
	func_2572(var_292_string, var_293_int, var_294_int, var_295_int); // 0xc57 NEW_2
	
Label_3161:
	return 6; // 0xc59 Return
}


func_1046(var_0_bool)
{
	var_0_bool = 1; // 0x416 TMovB
	var_21_int = 0; // 0x417 PushI
	KillTimer(var_21_int); // 0x418 Func
	Stop(); // 0x41a Func
	return 0; // 0x41c Return
}


func_2072(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x818 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x819 Func
	var_19_bool = var_22_bool; // 0x81b Mov
	return 2; // 0x81c Return
}


func_2587(var_194_string)
{
	var_195_bool = 0; var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0; var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_bool = 0; var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); // 0xa1b PushV
	IsExisting3DSound(var_203_bool, var_194_string); // 0xa1c Func
	var_211_bool = var_203_bool == 0; // 0xa1e Not
	if(var_211_bool == 0) goto Label_2612; // 0xa1f JumpB
	var_204_int = 0; // 0xa20 MovI
	
Label_2593:
	var_212_int = 1; // 0xa21 PushI
	var_213_int = var_204_int + var_212_int; // 0xa22 Add
	var_214_int = var_194_string + var_213_int; // 0xa23 Add
	IsExisting3DSound(var_205_bool, var_214_int); // 0xa24 Func
	var_215_bool = var_205_bool == 0; // 0xa26 Not
	if(var_215_bool == 0) goto Label_2601; // 0xa27 JumpB
	goto Label_2604; // 0xa28 Jump
	
Label_2604:
	var_216_bool = var_204_int == 0; // 0xa2c Not
	if(var_216_bool == 0) goto Label_2607; // 0xa2d JumpB
	return 16; // 0xa2e Return
	
Label_2607:
	irand(var_206_int, var_204_int); // 0xa2f Func
	var_217_int = 1; // 0xa31 PushI
	var_218_int = var_206_int + var_217_int; // 0xa32 Add
	var_194_string = var_194_string + var_218_int; // 0xa33 Add2
	
Label_2612:
	Is3DSoundLoaded(var_207_bool, var_194_string); // 0xa34 Func
	var_219_bool = var_207_bool; // 0xa36 Push
	if(var_219_bool == 0) goto Label_2627; // 0xa37 JumpB
	GetEyesHeight(var_208_float); // 0xa38 Func
	GetDirection(var_209_cvector); // 0xa3a Func
	var_220_int = 50; // 0xa3c PushI
	var_210_cvector = var_209_cvector * var_220_int; // 0xa3d Mult2
	var_221_float = GetByIndex(var_210_cvector, 1); // 0xa3e PushE
	var_221_float = var_221_float + var_208_float; // 0xa3f Add2
	SetByIndex(var_210_cvector, 1) = var_221_float; // 0xa40 PopE
	PlayGlobalSound(var_194_string, var_210_cvector); // 0xa41 Func
	
Label_2627:
	return 16; // 0xa43 Return
	
Label_2601:
	var_222_int = 1; // 0xa29 PushI
	var_204_int = var_204_int + var_222_int; // 0xa2a Add2
	goto Label_2593; // 0xa2b Jump
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
	var_199_bool = var_152_bool == 0; // 0x2f Not
	if(var_199_bool == 0) goto Label_51; // 0x30 JumpB
	var_141_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_148_object); // 0x33 Func
	var_200_int = 0; // 0x35 PushV
	func_3555(var_200_int); // 0x36 NEW_2
	SetNPCName(var_200_int); // 0x38 ObjFunc
	var_201_int = 0; // 0x3a PushV
	func_3553(var_201_int); // 0x3b NEW_2
	SetNPCDescription(var_201_int); // 0x3d ObjFunc
	var_202_string = ""; // 0x3f PushV
	func_3557(var_202_string); // 0x40 NEW_2
	SetPhoto(var_202_string); // 0x42 ObjFunc
	var_203_string = ""; // 0x44 PushV
	func_3559(var_203_string); // 0x45 NEW_2
	SetPhoto2(var_203_string); // 0x47 ObjFunc
	var_204_int = 0; // 0x49 PushV
	func_2856(var_204_int); // 0x4a NEW_2
	SetPlayerName(var_204_int); // 0x4c ObjFunc
	var_150_int = -1; // 0x4e MovI
	IsOverrideActive(var_149_bool); // 0x4f Func
	var_212_bool = var_149_bool; // 0x51 Push
	if(var_212_bool == 0) goto Label_85; // 0x52 JumpB
	var_141_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_148_object); // 0x55 Func
	var_213_object = Obj(); var_214_object = Obj(); // 0x57 PushV
	var_213_object = var_142_object; // 0x58 Mov
	var_214_object = var_148_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_151_bool); // 0x5e ObjFunc
	
Label_96:
	var_311_bool = var_151_bool == 0; // 0x60 Not
	if(var_311_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_151_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_312_object = Obj(); // 0x67 PushV
	var_312_object = var_142_object; // 0x68 Mov
	func_2433(); // 0x69 NEW_2
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
	func_2735(var_535_float, var_536_float, var_537_float); // 0x855 NEW_2
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
	func_2742(var_545_float, var_546_float, var_547_float, var_548_float); // 0x863 NEW_2
	SetProperty(var_544_string, var_545_float); // 0x865 ObjFunc
	var_551_bool = 0; var_552_object = Obj(); // 0x867 PushV
	var_552_object = var_498_object; // 0x868 Mov
	func_2072(var_551_bool, var_552_object); // 0x869 NEW_2
	if(var_551_bool == 0) goto Label_2160; // 0x86b JumpB
	var_553_float = 0; // 0x86c PushV
	var_553_float = -var_515_float; // 0x86d Neg2
	func_2769(var_553_float); // 0x86e NEW_2
	
Label_2160:
	var_497_float = var_515_float; // 0x870 Mov
	return 12; // 0x871 Return
	
Label_2126:
	GetProperty(var_511_string, var_512_int); // 0x84e ObjFunc
	
Label_2108:
	var_561_string = "armor"; // 0x83c PushS
	GetProperty(var_561_string, var_510_int); // 0x83d ObjFunc
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


func_2628(var_86_bool, var_87_string)
{
	var_86_bool = 1; // 0xa45 MovB
	var_88_bool = 0; // 0xa46 PushV
	var_88_bool = 1; // 0xa47 MovB
	var_89_bool = 0; // 0xa48 PushV
	var_89_bool = 1; // 0xa49 MovB
	var_90_bool = 0; // 0xa4a PushV
	var_90_bool = 1; // 0xa4b MovB
	var_91_bool = 0; // 0xa4c PushV
	var_91_bool = 1; // 0xa4d MovB
	var_92_bool = 0; // 0xa4e PushV
	var_92_bool = 1; // 0xa4f MovB
	var_93_bool = 0; // 0xa50 PushV
	var_93_bool = 1; // 0xa51 MovB
	var_94_bool = 0; // 0xa52 PushV
	var_94_bool = 1; // 0xa53 MovB
	var_95_bool = 0; // 0xa54 PushV
	var_95_bool = 1; // 0xa55 MovB
	var_96_bool = 0; // 0xa56 PushV
	var_96_bool = 1; // 0xa57 MovB
	var_97_bool = 0; // 0xa58 PushV
	var_97_bool = 1; // 0xa59 MovB
	var_98_bool = 0; // 0xa5a PushV
	var_98_bool = 1; // 0xa5b MovB
	var_99_string = "woman"; // 0xa5c PushS
	var_100_bool = var_87_string == var_99_string; // 0xa5d Eq
	if(var_100_bool == 0) goto Label_2659; // 0xa5e JumpB
	var_101_string = "worker"; // 0xa5f PushS
	var_102_bool = var_87_string == var_101_string; // 0xa60 Eq
	if(var_102_bool == 0) goto Label_2659; // 0xa61 JumpB
	var_98_bool = 0; // 0xa62 MovB
	
Label_2659:
	if(var_98_bool == 0) goto Label_2664; // 0xa63 JumpB
	var_103_string = "butcher"; // 0xa64 PushS
	var_104_bool = var_87_string == var_103_string; // 0xa65 Eq
	if(var_104_bool == 0) goto Label_2664; // 0xa66 JumpB
	var_97_bool = 0; // 0xa67 MovB
	
Label_2664:
	if(var_97_bool == 0) goto Label_2669; // 0xa68 JumpB
	var_105_string = "wasted_girl"; // 0xa69 PushS
	var_106_bool = var_87_string == var_105_string; // 0xa6a Eq
	if(var_106_bool == 0) goto Label_2669; // 0xa6b JumpB
	var_96_bool = 0; // 0xa6c MovB
	
Label_2669:
	if(var_96_bool == 0) goto Label_2674; // 0xa6d JumpB
	var_107_string = "boy"; // 0xa6e PushS
	var_108_bool = var_87_string == var_107_string; // 0xa6f Eq
	if(var_108_bool == 0) goto Label_2674; // 0xa70 JumpB
	var_95_bool = 0; // 0xa71 MovB
	
Label_2674:
	if(var_95_bool == 0) goto Label_2679; // 0xa72 JumpB
	var_109_string = "vaxxabitka"; // 0xa73 PushS
	var_110_bool = var_87_string == var_109_string; // 0xa74 Eq
	if(var_110_bool == 0) goto Label_2679; // 0xa75 JumpB
	var_94_bool = 0; // 0xa76 MovB
	
Label_2679:
	if(var_94_bool == 0) goto Label_2684; // 0xa77 JumpB
	var_111_string = "unosha"; // 0xa78 PushS
	var_112_bool = var_87_string == var_111_string; // 0xa79 Eq
	if(var_112_bool == 0) goto Label_2684; // 0xa7a JumpB
	var_93_bool = 0; // 0xa7b MovB
	
Label_2684:
	if(var_93_bool == 0) goto Label_2689; // 0xa7c JumpB
	var_113_string = "wasted_male"; // 0xa7d PushS
	var_114_bool = var_87_string == var_113_string; // 0xa7e Eq
	if(var_114_bool == 0) goto Label_2689; // 0xa7f JumpB
	var_92_bool = 0; // 0xa80 MovB
	
Label_2689:
	if(var_92_bool == 0) goto Label_2694; // 0xa81 JumpB
	var_115_string = "alkash"; // 0xa82 PushS
	var_116_bool = var_87_string == var_115_string; // 0xa83 Eq
	if(var_116_bool == 0) goto Label_2694; // 0xa84 JumpB
	var_91_bool = 0; // 0xa85 MovB
	
Label_2694:
	if(var_91_bool == 0) goto Label_2699; // 0xa86 JumpB
	var_117_string = "dohodyaga"; // 0xa87 PushS
	var_118_bool = var_87_string == var_117_string; // 0xa88 Eq
	if(var_118_bool == 0) goto Label_2699; // 0xa89 JumpB
	var_90_bool = 0; // 0xa8a MovB
	
Label_2699:
	if(var_90_bool == 0) goto Label_2704; // 0xa8b JumpB
	var_119_string = "vaxxabit"; // 0xa8c PushS
	var_120_bool = var_87_string == var_119_string; // 0xa8d Eq
	if(var_120_bool == 0) goto Label_2704; // 0xa8e JumpB
	var_89_bool = 0; // 0xa8f MovB
	
Label_2704:
	if(var_89_bool == 0) goto Label_2709; // 0xa90 JumpB
	var_121_string = "nudegirl"; // 0xa91 PushS
	var_122_bool = var_87_string == var_121_string; // 0xa92 Eq
	if(var_122_bool == 0) goto Label_2709; // 0xa93 JumpB
	var_88_bool = 0; // 0xa94 MovB
	
Label_2709:
	if(var_88_bool == 0) goto Label_2714; // 0xa95 JumpB
	var_123_string = "morlok"; // 0xa96 PushS
	var_124_bool = var_87_string == var_123_string; // 0xa97 Eq
	if(var_124_bool == 0) goto Label_2714; // 0xa98 JumpB
	var_86_bool = 0; // 0xa99 MovB
	
Label_2714:
	return 0; // 0xa9a Return
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
	func_2715(var_216_object); // 0x46a NEW_2
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
	var_604_string = "all"; // 0x4eb PushS
	var_605_string = "fjump"; // 0x4ec PushS
	PlayAnimation(var_604_string, var_605_string); // 0x4ed Func
	WaitForAnimEnd(); // 0x4ef Func
	func_1743(var_185_float); // 0x4f2 NEW_2
	var_606_cvector = CVector(0.0, 0.0, 0.0); // 0x4f4 PushVec
	SetSpeed(var_606_cvector); // 0x4f5 Func
	Stop(); // 0x4f7 Func
	StopAsync(); // 0x4f9 Func
	var_607_bool = 0; // 0x4fb PushV
	func_1700(var_185_float, var_607_bool); // 0x4fc NEW_2
	var_608_bool = var_607_bool == 0; // 0x4fe Not
	if(var_608_bool == 0) goto Label_1303; // 0x4ff JumpB
	var_609_bool = 0; var_610_object = Obj(); // 0x500 PushV
	var_610_object = var_0_bool; // 0x501 MovT
	func_2203(var_609_bool, var_610_object); // 0x502 NEW_2
	var_611_bool = var_609_bool == 0; // 0x504 Not
	if(var_611_bool == 0) goto Label_1287; // 0x505 JumpB
	goto Label_1313; // 0x506 Jump
	
Label_1287:
	GetPFPosition(var_176_cvector); // 0x507 TObjFunc
	GetPFPosition(var_177_cvector); // 0x509 Func
	var_181_cvector = var_176_cvector - var_177_cvector; // 0x50b Sub2
	var_182_float = var_181_cvector | var_181_cvector; // 0x50c Or2
	var_612_float = var_163_float * var_163_float; // 0x50d Mult
	var_613_bool = var_182_float < var_612_float; // 0x50e LT
	if(var_613_bool == 0) goto Label_1303; // 0x50f JumpB
	var_614_bool = 0; var_615_float = 0; // 0x510 PushV
	var_615_float = var_163_float; // 0x511 Mov
	func_1404(var_185_float, var_614_bool, var_615_float); // 0x512 NEW_2
	var_616_bool = var_614_bool == 0; // 0x514 Not
	if(var_616_bool == 0) goto Label_1303; // 0x515 JumpB
	goto Label_1313; // 0x516 Jump
	
Label_1304:
	var_617_bool = 0; var_618_float = 0; // 0x518 PushV
	var_618_float = var_163_float; // 0x519 Mov
	func_1404(var_185_float, var_617_bool, var_618_float); // 0x51a NEW_2
	var_619_bool = var_617_bool == 0; // 0x51c Not
	if(var_619_bool == 0) goto Label_1311; // 0x51d JumpB
	goto Label_1313; // 0x51e Jump
	
Label_1311:
	var_179_bool = 1; // 0x51f MovB
	
Label_1138:
	var_179_bool = 1; // 0x472 MovB
	
Label_1115:
	var_175_float = var_163_float; // 0x45b Mov
}


func_595()
{
	var_151_int = 1; // 0x253 PushI
	KillTimer(var_151_int); // 0x254 Func
	func_798(); // 0x257 NEW_2
	return 0; // 0x259 Return
}


func_3162()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; // 0xc5a PushV
	var_27_int = 0; // 0xc5b PushI
	ClearSubContainer(var_27_int); // 0xc5c Func
	var_28_int = 0; // 0xc5e PushV
	func_2786(var_28_int); // 0xc5f NEW_2
	var_26_int = var_28_int; // 0xc60 Mov
	var_34_string = ""; var_35_int = 0; var_36_int = 0; var_37_int = 0; // 0xc62 PushV
	var_34_string = "fresh_meat"; // 0xc63 MovS
	var_35_int = 1; // 0xc64 MovI
	var_36_int = 4; // 0xc65 MovI
	var_37_int = 3; // 0xc66 MovI
	func_2572(var_34_string, var_35_int, var_36_int, var_37_int); // 0xc67 NEW_2
	var_50_string = ""; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0xc69 PushV
	var_50_string = "dried_meat"; // 0xc6a MovS
	var_51_int = 1; // 0xc6b MovI
	var_52_int = 4; // 0xc6c MovI
	var_53_int = 3; // 0xc6d MovI
	func_2572(var_50_string, var_51_int, var_52_int, var_53_int); // 0xc6e NEW_2
	var_54_string = ""; var_55_int = 0; var_56_int = 0; var_57_int = 0; // 0xc70 PushV
	var_54_string = "smoked_meat"; // 0xc71 MovS
	var_55_int = 1; // 0xc72 MovI
	var_56_int = 4; // 0xc73 MovI
	var_57_int = 3; // 0xc74 MovI
	func_2572(var_54_string, var_55_int, var_56_int, var_57_int); // 0xc75 NEW_2
	var_58_string = ""; var_59_int = 0; var_60_int = 0; var_61_int = 0; // 0xc77 PushV
	var_58_string = "vegetables"; // 0xc78 MovS
	var_59_int = 1; // 0xc79 MovI
	var_60_int = 3; // 0xc7a MovI
	var_61_int = 3; // 0xc7b MovI
	func_2572(var_58_string, var_59_int, var_60_int, var_61_int); // 0xc7c NEW_2
	var_62_int = 3; // 0xc7e PushI
	var_63_bool = var_26_int >= var_62_int; // 0xc7f GE
	if(var_63_bool == 0) goto Label_3219; // 0xc80 JumpB
	var_64_string = ""; var_65_int = 0; var_66_int = 0; // 0xc81 PushV
	var_64_string = "revolver_ammo"; // 0xc82 MovS
	var_65_int = 1; // 0xc83 MovI
	var_66_int = 5; // 0xc84 MovI
	func_2561(var_64_string, var_65_int, var_66_int); // 0xc85 NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0xc87 PushV
	var_73_string = "rifle_ammo"; // 0xc88 MovS
	var_74_int = 1; // 0xc89 MovI
	var_75_int = 5; // 0xc8a MovI
	func_2561(var_73_string, var_74_int, var_75_int); // 0xc8b NEW_2
	var_76_string = ""; var_77_int = 0; var_78_int = 0; // 0xc8d PushV
	var_76_string = "samopal_ammo"; // 0xc8e MovS
	var_77_int = 1; // 0xc8f MovI
	var_78_int = 5; // 0xc90 MovI
	func_2561(var_76_string, var_77_int, var_78_int); // 0xc91 NEW_2
	
Label_3219:
	return 6; // 0xc93 Return
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


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_213_object, var_214_object)
{
	var_0_bool = var_214_object; // 0x73 TMov
	var_1_object = var_213_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_219_int = 1; // 0x76 PushI
	if(var_219_int == 0) goto Label_213; // 0x77 JumpB
	var_220_string = ""; // 0x78 PushV
	var_220_string = "Neutral"; // 0x79 MovS
	func_243(var_214_object, var_220_string); // 0x7a NEW_2
	var_237_int = 537935; // 0x7c PushI
	SetMessage(var_237_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_238_bool = 0; var_239_object = Obj(); // 0x81 PushV
	var_239_object = var_1_object; // 0x82 MovT
	func_2832(var_239_object); // 0x83 NEW_2
	var_246_bool = var_238_bool == 0; // 0x85 Not
	if(var_246_bool == 0) goto Label_140; // 0x86 JumpB
	var_247_int = 537936; // 0x87 PushI
	var_248_int = -1; // 0x88 PushI
	var_249_int = 39797; // 0x89 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x8a TObjFunc
	
Label_140:
	var_250_bool = 0; var_251_object = Obj(); // 0x8c PushV
	var_251_object = var_1_object; // 0x8d MovT
	func_2832(var_251_object); // 0x8e NEW_2
	if(var_250_bool == 0) goto Label_150; // 0x90 JumpB
	var_252_int = 537937; // 0x91 PushI
	var_253_int = -1; // 0x92 PushI
	var_254_int = 39798; // 0x93 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x94 TObjFunc
	
Label_150:
	var_255_bool = 0; var_256_object = Obj(); // 0x96 PushV
	var_256_object = var_1_object; // 0x97 MovT
	func_2820(var_256_object); // 0x98 NEW_2
	if(var_255_bool == 0) goto Label_160; // 0x9a JumpB
	var_261_int = 537938; // 0x9b PushI
	var_262_int = 39800; // 0x9c PushI
	var_263_int = 39799; // 0x9d PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x9e TObjFunc
	
Label_160:
	var_264_bool = 0; var_265_object = Obj(); // 0xa0 PushV
	var_265_object = var_1_object; // 0xa1 MovT
	func_2832(var_265_object); // 0xa2 NEW_2
	if(var_264_bool == 0) goto Label_170; // 0xa4 JumpB
	var_266_int = 537951; // 0xa5 PushI
	var_267_int = 39813; // 0xa6 PushI
	var_268_int = 39812; // 0xa7 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa8 TObjFunc
	
Label_170:
	var_269_bool = 0; var_270_object = Obj(); // 0xaa PushV
	var_270_object = var_1_object; // 0xab MovT
	func_2844(var_270_object); // 0xac NEW_2
	if(var_269_bool == 0) goto Label_180; // 0xae JumpB
	var_275_int = 537964; // 0xaf PushI
	var_276_int = -1; // 0xb0 PushI
	var_277_int = 39826; // 0xb1 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xb2 TObjFunc
	
Label_180:
	var_278_bool = 0; var_279_object = Obj(); // 0xb4 PushV
	var_279_object = var_1_object; // 0xb5 MovT
	func_2820(var_279_object); // 0xb6 NEW_2
	if(var_278_bool == 0) goto Label_190; // 0xb8 JumpB
	var_280_int = 537965; // 0xb9 PushI
	var_281_int = -1; // 0xba PushI
	var_282_int = 39827; // 0xbb PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xbc TObjFunc
	
Label_190:
	var_283_bool = 0; var_284_object = Obj(); // 0xbe PushV
	var_284_object = var_1_object; // 0xbf MovT
	func_2844(var_284_object); // 0xc0 NEW_2
	if(var_283_bool == 0) goto Label_200; // 0xc2 JumpB
	var_285_int = 537966; // 0xc3 PushI
	var_286_int = -1; // 0xc4 PushI
	var_287_int = 39828; // 0xc5 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xc6 TObjFunc
	
Label_200:
	var_288_bool = 0; var_289_object = Obj(); // 0xc8 PushV
	var_289_object = var_1_object; // 0xc9 MovT
	func_2832(var_289_object); // 0xca NEW_2
	if(var_288_bool == 0) goto Label_210; // 0xcc JumpB
	var_290_int = 537967; // 0xcd PushI
	var_291_int = -1; // 0xce PushI
	var_292_int = 39829; // 0xcf PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xd0 TObjFunc
	
Label_210:
	goto Label_213; // 0xd2 Jump
	
Label_213:
	var_293_bool = 0; // 0xd5 PushV
	func_3561(var_293_bool); // 0xd6 NEW_2
	if(var_293_bool == 0) goto Label_228; // 0xd8 JumpB
	
Label_217:
	lshWaitForAnimEnd(); // 0xd9 Func
	var_294_object = var_3_object; // 0xdb PushT
	if(var_294_object == 0) goto Label_222; // 0xdc JumpB
	goto Label_227; // 0xdd Jump
	
Label_227:
	goto Label_242; // 0xe3 Jump
	
Label_242:
	return 0; // 0xf2 Return
	
Label_222:
	var_295_string = ""; // 0xde PushV
	var_295_string = var_2_object; // 0xdf MovT
	func_2512(var_295_string); // 0xe0 NEW_2
	goto Label_217; // 0xe2 Jump
	
Label_228:
	var_306_string = "all"; // 0xe4 PushS
	var_307_string = "idle"; // 0xe5 PushS
	PlayAnimation(var_306_string, var_307_string); // 0xe6 Func
	
Label_232:
	WaitForAnimEnd(); // 0xe8 Func
	var_308_object = var_3_object; // 0xea PushT
	if(var_308_object == 0) goto Label_237; // 0xeb JumpB
	goto Label_242; // 0xec Jump
	
Label_237:
	var_309_string = "all"; // 0xed PushS
	var_310_string = "idle"; // 0xee PushS
	PlayAnimation(var_309_string, var_310_string); // 0xef Func
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


func_3220(var_66_int, var_67_string)
{
	var_68_int = 0; var_69_int = 0; // 0xc94 PushV
	GetInvItemByName(var_69_int, var_67_string); // 0xc95 Func
	var_66_int = var_69_int; // 0xc97 Mov
	return 2; // 0xc98 Return
}


func_3225(var_26_bool, var_27_object, var_28_bool)
{
	var_29_string = ""; var_30_string = ""; // 0xc99 PushV
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0xc9a PushV
	var_32_object = var_27_object; // 0xc9b Mov
	var_33_string = "class"; // 0xc9c MovS
	func_2077(var_31_bool, var_32_object, var_33_string); // 0xc9d NEW_2
	var_40_bool = var_31_bool == 0; // 0xc9f Not
	if(var_40_bool == 0) goto Label_3235; // 0xca0 JumpB
	var_26_bool = 0; // 0xca1 MovB
	return 2; // 0xca2 Return
	
Label_3235:
	var_41_string = "class"; // 0xca3 PushS
	GetProperty(var_41_string, var_30_string); // 0xca4 ObjFunc
	var_42_bool = 0; // 0xca6 PushV
	var_42_bool = 1; // 0xca7 MovB
	var_43_bool = 0; // 0xca8 PushV
	var_43_bool = 1; // 0xca9 MovB
	var_44_bool = 0; // 0xcaa PushV
	var_44_bool = 1; // 0xcab MovB
	var_45_bool = 0; // 0xcac PushV
	var_45_bool = 1; // 0xcad MovB
	var_46_bool = 0; // 0xcae PushV
	var_46_bool = 1; // 0xcaf MovB
	var_47_bool = 0; // 0xcb0 PushV
	var_47_bool = 1; // 0xcb1 MovB
	var_48_bool = 0; // 0xcb2 PushV
	var_48_bool = 1; // 0xcb3 MovB
	var_49_bool = 0; // 0xcb4 PushV
	var_49_bool = 1; // 0xcb5 MovB
	var_50_bool = 0; // 0xcb6 PushV
	var_50_bool = 1; // 0xcb7 MovB
	var_51_bool = 0; // 0xcb8 PushV
	var_51_bool = 1; // 0xcb9 MovB
	var_52_string = "patrol"; // 0xcba PushS
	var_53_bool = var_30_string == var_52_string; // 0xcbb Eq
	if(var_53_bool == 0) goto Label_3265; // 0xcbc JumpB
	var_54_string = "sanitar"; // 0xcbd PushS
	var_55_bool = var_30_string == var_54_string; // 0xcbe Eq
	if(var_55_bool == 0) goto Label_3265; // 0xcbf JumpB
	var_51_bool = 0; // 0xcc0 MovB
	
Label_3265:
	if(var_51_bool == 0) goto Label_3270; // 0xcc1 JumpB
	var_56_string = "soldier"; // 0xcc2 PushS
	var_57_bool = var_30_string == var_56_string; // 0xcc3 Eq
	if(var_57_bool == 0) goto Label_3270; // 0xcc4 JumpB
	var_50_bool = 0; // 0xcc5 MovB
	
Label_3270:
	if(var_50_bool == 0) goto Label_3275; // 0xcc6 JumpB
	var_58_string = "woman"; // 0xcc7 PushS
	var_59_bool = var_30_string == var_58_string; // 0xcc8 Eq
	if(var_59_bool == 0) goto Label_3275; // 0xcc9 JumpB
	var_49_bool = 0; // 0xcca MovB
	
Label_3275:
	if(var_49_bool == 0) goto Label_3280; // 0xccb JumpB
	var_60_string = "wasted_girl"; // 0xccc PushS
	var_61_bool = var_30_string == var_60_string; // 0xccd Eq
	if(var_61_bool == 0) goto Label_3280; // 0xcce JumpB
	var_48_bool = 0; // 0xccf MovB
	
Label_3280:
	if(var_48_bool == 0) goto Label_3285; // 0xcd0 JumpB
	var_62_string = "vaxxabitka"; // 0xcd1 PushS
	var_63_bool = var_30_string == var_62_string; // 0xcd2 Eq
	if(var_63_bool == 0) goto Label_3285; // 0xcd3 JumpB
	var_47_bool = 0; // 0xcd4 MovB
	
Label_3285:
	if(var_47_bool == 0) goto Label_3290; // 0xcd5 JumpB
	var_64_string = "vaxxabit"; // 0xcd6 PushS
	var_65_bool = var_30_string == var_64_string; // 0xcd7 Eq
	if(var_65_bool == 0) goto Label_3290; // 0xcd8 JumpB
	var_46_bool = 0; // 0xcd9 MovB
	
Label_3290:
	if(var_46_bool == 0) goto Label_3295; // 0xcda JumpB
	var_66_string = "little_girl"; // 0xcdb PushS
	var_67_bool = var_30_string == var_66_string; // 0xcdc Eq
	if(var_67_bool == 0) goto Label_3295; // 0xcdd JumpB
	var_45_bool = 0; // 0xcde MovB
	
Label_3295:
	if(var_45_bool == 0) goto Label_3300; // 0xcdf JumpB
	var_68_string = "girl"; // 0xce0 PushS
	var_69_bool = var_30_string == var_68_string; // 0xce1 Eq
	if(var_69_bool == 0) goto Label_3300; // 0xce2 JumpB
	var_44_bool = 0; // 0xce3 MovB
	
Label_3300:
	if(var_44_bool == 0) goto Label_3305; // 0xce4 JumpB
	var_70_string = "dohodyaga"; // 0xce5 PushS
	var_71_bool = var_30_string == var_70_string; // 0xce6 Eq
	if(var_71_bool == 0) goto Label_3305; // 0xce7 JumpB
	var_43_bool = 0; // 0xce8 MovB
	
Label_3305:
	if(var_43_bool == 0) goto Label_3310; // 0xce9 JumpB
	var_72_string = "nudegirl"; // 0xcea PushS
	var_73_bool = var_30_string == var_72_string; // 0xceb Eq
	if(var_73_bool == 0) goto Label_3310; // 0xcec JumpB
	var_42_bool = 0; // 0xced MovB
	
Label_3310:
	if(var_42_bool == 0) goto Label_3313; // 0xcee JumpB
	var_26_bool = 1; // 0xcef MovB
	return 2; // 0xcf0 Return
	
Label_3313:
	var_74_bool = var_28_bool; // 0xcf1 Push
	if(var_74_bool == 0) goto Label_3317; // 0xcf2 JumpB
	var_26_bool = 0; // 0xcf3 MovB
	return 2; // 0xcf4 Return
	
Label_3317:
	var_26_bool = 1; // 0xcf5 MovB
	var_75_bool = 0; // 0xcf6 PushV
	var_75_bool = 1; // 0xcf7 MovB
	var_76_bool = 0; // 0xcf8 PushV
	var_76_bool = 1; // 0xcf9 MovB
	var_77_bool = 0; // 0xcfa PushV
	var_77_bool = 1; // 0xcfb MovB
	var_78_bool = 0; // 0xcfc PushV
	var_78_bool = 1; // 0xcfd MovB
	var_79_bool = 0; // 0xcfe PushV
	var_79_bool = 1; // 0xcff MovB
	var_80_string = "worker"; // 0xd00 PushS
	var_81_bool = var_30_string == var_80_string; // 0xd01 Eq
	if(var_81_bool == 0) goto Label_3335; // 0xd02 JumpB
	var_82_string = "butcher"; // 0xd03 PushS
	var_83_bool = var_30_string == var_82_string; // 0xd04 Eq
	if(var_83_bool == 0) goto Label_3335; // 0xd05 JumpB
	var_79_bool = 0; // 0xd06 MovB
	
Label_3335:
	if(var_79_bool == 0) goto Label_3340; // 0xd07 JumpB
	var_84_string = "boy"; // 0xd08 PushS
	var_85_bool = var_30_string == var_84_string; // 0xd09 Eq
	if(var_85_bool == 0) goto Label_3340; // 0xd0a JumpB
	var_78_bool = 0; // 0xd0b MovB
	
Label_3340:
	if(var_78_bool == 0) goto Label_3345; // 0xd0c JumpB
	var_86_string = "unosha"; // 0xd0d PushS
	var_87_bool = var_30_string == var_86_string; // 0xd0e Eq
	if(var_87_bool == 0) goto Label_3345; // 0xd0f JumpB
	var_77_bool = 0; // 0xd10 MovB
	
Label_3345:
	if(var_77_bool == 0) goto Label_3350; // 0xd11 JumpB
	var_88_string = "wasted_male"; // 0xd12 PushS
	var_89_bool = var_30_string == var_88_string; // 0xd13 Eq
	if(var_89_bool == 0) goto Label_3350; // 0xd14 JumpB
	var_76_bool = 0; // 0xd15 MovB
	
Label_3350:
	if(var_76_bool == 0) goto Label_3355; // 0xd16 JumpB
	var_90_string = "alkash"; // 0xd17 PushS
	var_91_bool = var_30_string == var_90_string; // 0xd18 Eq
	if(var_91_bool == 0) goto Label_3355; // 0xd19 JumpB
	var_75_bool = 0; // 0xd1a MovB
	
Label_3355:
	if(var_75_bool == 0) goto Label_3360; // 0xd1b JumpB
	var_92_string = "morlok"; // 0xd1c PushS
	var_93_bool = var_30_string == var_92_string; // 0xd1d Eq
	if(var_93_bool == 0) goto Label_3360; // 0xd1e JumpB
	var_26_bool = 0; // 0xd1f MovB
	
Label_3360:
	return 2; // 0xd20 Return
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


func_2715(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0xa9b PushV
	self(var_25_object); // 0xa9c Func
	var_23_object = var_25_object; // 0xa9e Mov
	return 2; // 0xa9f Return
}


func_2721(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0xaa1 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0xaa2 Or
	var_58_float = sqrt(var_59_int); // 0xaa3 Sqrt2
	var_60_float = 0.0; // 0xaa4 PushF
	var_61_bool = var_58_float < var_60_float; // 0xaa5 LT
	if(var_61_bool == 0) goto Label_2729; // 0xaa6 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0xaa7 MovV
	return 2; // 0xaa8 Return
	
Label_2729:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0xaa9 Div2
	return 2; // 0xaaa Return
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


func_2731(var_93_float, var_94_cvector, var_95_cvector)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); // 0xaab PushV
	var_97_cvector = var_95_cvector - var_94_cvector; // 0xaac Sub2
	var_93_float = var_97_cvector | var_97_cvector; // 0xaad Or2
	return 2; // 0xaae Return
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


func_2735(var_535_float, var_536_float, var_537_float)
{
	var_540_bool = var_536_float < var_537_float; // 0xab0 LT
	if(var_540_bool == 0) goto Label_2740; // 0xab1 JumpB
	var_535_float = var_536_float; // 0xab2 Mov
	goto Label_2741; // 0xab3 Jump
	
Label_2741:
	return 0; // 0xab5 Return
	
Label_2740:
	var_535_float = var_537_float; // 0xab4 Mov
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


func_2742(var_545_float, var_546_float, var_547_float, var_548_float)
{
	var_549_bool = var_546_float < var_547_float; // 0xab7 LT
	if(var_549_bool == 0) goto Label_2747; // 0xab8 JumpB
	var_545_float = var_547_float; // 0xab9 Mov
	return 0; // 0xaba Return
	
Label_2747:
	var_550_bool = var_546_float > var_548_float; // 0xabb GT
	if(var_550_bool == 0) goto Label_2751; // 0xabc JumpB
	var_545_float = var_548_float; // 0xabd Mov
	return 0; // 0xabe Return
	
Label_2751:
	var_545_float = var_546_float; // 0xabf Mov
	return 0; // 0xac0 Return
}


func_2753(var_42_bool, var_43_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; // 0xac1 PushV
	irand(var_46_int, var_44_int); // 0xac2 Func
	var_42_bool = var_46_int < var_43_int; // 0xac4 LT2
	return 2; // 0xac5 Return
}


func_2758(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0xac6 PushV
	CreateObjectSet(var_20_object); // 0xac7 Func
	var_18_object = var_20_object; // 0xac9 Mov
	return 2; // 0xaca Return
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
	func_2731(var_93_float, var_94_cvector, var_95_cvector); // 0x2e7 NEW_2
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


func_2764(var_240_int, var_241_string)
{
	var_242_int = 0; var_243_int = 0; // 0xacc PushV
	GetVariable(var_241_string, var_243_int); // 0xacd Func
	var_240_int = var_243_int; // 0xacf Mov
	return 2; // 0xad0 Return
}


func_1743(var_0_bool)
{
	var_223_object = Obj(); // 0x6cf PushV
	var_223_object = var_0_bool; // 0x6d0 MovT
	func_2795(var_223_object); // 0x6d1 NEW_2
	return 0; // 0x6d3 Return
}


func_2769(var_553_float)
{
	var_554_object = Obj(); var_555_object = Obj(); // 0xad1 PushV
	CreateFloatVector(var_555_object); // 0xad2 Func
	add(var_553_float); // 0xad4 ObjFunc
	var_556_int = 0; // 0xad6 PushI
	var_557_bool = var_553_float < var_556_int; // 0xad7 LT
	if(var_557_bool == 0) goto Label_2781; // 0xad8 JumpB
	var_558_float = 0.7; // 0xad9 PushF
	var_559_int = 500; // 0xada PushI
	RumblePlay(var_558_float, var_559_int); // 0xadb Func
	
Label_2781:
	var_560_int = 15; // 0xadd PushI
	SendWorldWndMessage(var_560_int, var_555_object); // 0xade Func
	return 2; // 0xae0 Return
}


func_1748(var_562_int)
{
	var_562_int = 0; // 0x6d4 MovI
	return 0; // 0x6d5 Return
}


func_1750()
{
	var_354_string = ""; // 0x6d6 PushV
	var_354_string = "attack_stay"; // 0x6d7 MovS
	func_2587(var_354_string); // 0x6d8 NEW_2
	return 0; // 0x6da Return
}


func_1755()
{
	return 0; // 0x6dc Return
}


func_1757(var_587_bool)
{
	var_587_bool = 1; // 0x6dd MovB
	return 0; // 0x6de Return
}


func_1759(var_479_int)
{
	var_479_int = 1; // 0x6df MovI
	return 0; // 0x6e0 Return
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
	func_2721(var_49_cvector, var_50_cvector); // 0x8f6 NEW_2
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


func_1761(var_474_float)
{
	var_474_float = 0.5; // 0x6e1 MovF
	return 0; // 0x6e2 Return
}


func_2786(var_28_int)
{
	var_29_float = 0; var_30_float = 0; // 0xae2 PushV
	GetGameTime(var_30_float); // 0xae3 Func
	var_31_int = 1; // 0xae5 PushI
	var_32_int = 0; // 0xae6 PushV
	var_33_int = 24; // 0xae7 PushI
	var_32_int = var_30_float / var_30_float; // 0xae8 Div2
	var_28_int = var_31_int + var_32_int; // 0xae9 Add2
	return 2; // 0xaea Return
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
	func_2715(var_33_object); // 0x6ec NEW_2
	RemoveStationaryActor(var_33_object); // 0x6ee ObjFunc
	var_30_object = 0; // 0x6f0 SetNull
	
Label_1777:
	var_34_object = Obj(); // 0x6f1 PushV
	var_34_object = var_28_object; // 0x6f2 Mov
	func_1782(var_34_object); // 0x6f3 NEW_2
	return 2; // 0x6f5 Return
}


func_2795(var_223_object)
{
	var_224_bool = 0; var_225_bool = 0; // 0xaeb PushV
	IsPlayerActor(var_223_object, var_225_bool); // 0xaec Func
	var_226_bool = var_225_bool; // 0xaee Push
	if(var_226_bool == 0) goto Label_2803; // 0xaef JumpB
	var_227_string = "attack"; // 0xaf0 PushS
	PlayGlobalMusic(var_227_string); // 0xaf1 Func
	
Label_2803:
	return 2; // 0xaf3 Return
}


func_243(var_2_object, var_220_string)
{
	var_221_bool = 0; // 0xf4 PushV
	func_3561(var_221_bool); // 0xf5 NEW_2
	var_222_bool = var_221_bool == 0; // 0xf7 Not
	if(var_222_bool == 0) goto Label_250; // 0xf8 JumpB
	return 0; // 0xf9 Return
	
Label_250:
	var_223_bool = var_220_string == var_2_object; // 0xfa Eq
	if(var_223_bool == 0) goto Label_253; // 0xfb JumpB
	return 0; // 0xfc Return
	
Label_253:
	var_224_string = ""; var_225_bool = 0; // 0xfd PushV
	var_224_string = var_220_string; // 0xfe Mov
	var_226_string = ""; // 0xff PushS
	var_227_bool = var_220_string == var_226_string; // 0x100 Eq
	if(var_227_bool == 0) goto Label_260; // 0x101 JumpB
	var_225_bool = 0; // 0x102 MovB
	goto Label_261; // 0x103 Jump
	
Label_261:
	func_2528(var_224_string, var_225_bool); // 0x105 NEW_2
	var_2_object = var_220_string; // 0x107 TMov
	return 0; // 0x108 Return
	
Label_260:
	var_225_bool = 1; // 0x104 MovB
}


func_2804()
{
	var_458_object = Obj(); var_459_object = Obj(); // 0xaf4 PushV
	GetScene(var_459_object); // 0xaf5 Func
	var_460_string = "battle"; // 0xaf7 PushS
	var_461_object = Obj(); // 0xaf8 PushV
	func_2715(var_461_object); // 0xaf9 NEW_2
	BroadcastMessage(var_460_string, var_461_object, var_459_object); // 0xafb Func
	return 2; // 0xafd Return
}


func_1782(var_34_object)
{
	var_35_bool = 0; var_36_bool = 0; // 0x6f6 PushV
	IsPlayerActor(var_34_object, var_36_bool); // 0x6f7 Func
	var_37_bool = var_36_bool; // 0x6f9 Push
	if(var_37_bool == 0) goto Label_1791; // 0x6fa JumpB
	func_2964(); // 0x6fc NEW_2
	goto Label_1794; // 0x6fe Jump
	
Label_1794:
	func_2940(); // 0x703 NEW_2
	var_170_object = Obj(); // 0x705 PushV
	var_170_object = var_34_object; // 0x706 Mov
	func_1802(var_170_object); // 0x707 NEW_2
	return 2; // 0x709 Return
	
Label_1791:
	func_3091(); // 0x700 NEW_2
}


func_2815()
{
	var_25_int = 1000; // 0xb00 PushI
	SetReturnValue(var_25_int); // 0xb01 ObjFunc
	return 0; // 0xb03 Return
}


func_2820(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0xb05 PushV
	var_258_string = "branch"; // 0xb06 MovS
	func_2764(var_257_int, var_258_string); // 0xb07 NEW_2
	var_259_int = 0; // 0xb09 PushI
	var_260_bool = var_257_int == var_259_int; // 0xb0a Eq
	if(var_260_bool == 0) goto Label_2830; // 0xb0b JumpB
	var_255_bool = 1; // 0xb0c MovB
	return 0; // 0xb0d Return
	
Label_2830:
	var_255_bool = 0; // 0xb0e MovB
	return 0; // 0xb0f Return
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


func_2832(var_238_bool)
{
	var_240_int = 0; var_241_string = ""; // 0xb11 PushV
	var_241_string = "branch"; // 0xb12 MovS
	func_2764(var_240_int, var_241_string); // 0xb13 NEW_2
	var_244_int = 1; // 0xb15 PushI
	var_245_bool = var_240_int == var_244_int; // 0xb16 Eq
	if(var_245_bool == 0) goto Label_2842; // 0xb17 JumpB
	var_238_bool = 1; // 0xb18 MovB
	return 0; // 0xb19 Return
	
Label_2842:
	var_238_bool = 0; // 0xb1a MovB
	return 0; // 0xb1b Return
}


func_2844(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0xb1d PushV
	var_272_string = "branch"; // 0xb1e MovS
	func_2764(var_271_int, var_272_string); // 0xb1f NEW_2
	var_273_int = 2; // 0xb21 PushI
	var_274_bool = var_271_int == var_273_int; // 0xb22 Eq
	if(var_274_bool == 0) goto Label_2854; // 0xb23 JumpB
	var_269_bool = 1; // 0xb24 MovB
	return 0; // 0xb25 Return
	
Label_2854:
	var_269_bool = 0; // 0xb26 MovB
	return 0; // 0xb27 Return
}


func_798()
{
	StopGroup0(); // 0x31e Func
	Stop(); // 0x320 Func
	return 0; // 0x322 Return
}


func_3361()
{
	var_17_object = GlobalVars[0]; // 0xd21 PushGE
	var_18_object = Obj(); // 0xd22 PushV
	func_2758(var_18_object); // 0xd23 NEW_2
	var_17_object = var_18_object; // 0xd24 Mov
	GlobalVars[0] = var_17_object; // 0xd26 PopGE
	return 0; // 0xd27 Return
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
	func_2587(var_246_string); // 0x769 NEW_2
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


func_2856(var_204_int)
{
	var_205_int = 0; var_206_int = 0; // 0xb28 PushV
	var_207_string = "branch"; // 0xb29 PushS
	GetVariable(var_207_string, var_206_int); // 0xb2a Func
	var_208_int = 0; // 0xb2c PushI
	var_209_bool = var_206_int == var_208_int; // 0xb2d Eq
	if(var_209_bool == 0) goto Label_2866; // 0xb2e JumpB
	var_204_int = 1; // 0xb2f MovI
	return 2; // 0xb30 Return
	
Label_2866:
	var_210_int = 1; // 0xb32 PushI
	var_211_bool = var_206_int == var_210_int; // 0xb33 Eq
	if(var_211_bool == 0) goto Label_2871; // 0xb34 JumpB
	var_204_int = 2; // 0xb35 MovI
	return 2; // 0xb36 Return
	
Label_2871:
	var_204_int = 3; // 0xb37 MovI
	return 2; // 0xb38 Return
}


func_3368(var_321_object)
{
	var_322_bool = 0; var_323_object = Obj(); // 0xd29 PushV
	var_323_object = var_321_object; // 0xd2a Mov
	func_2451(var_322_bool, var_323_object); // 0xd2b NEW_2
	var_354_bool = var_322_bool == 0; // 0xd2d Not
	if(var_354_bool == 0) goto Label_3376; // 0xd2e JumpB
	return 0; // 0xd2f Return
	
Label_3376:
	var_355_object = Obj(); // 0xd30 PushV
	var_355_object = var_321_object; // 0xd31 Mov
	TaskCall(0); // 0xd32 TaskCall
	func_0(var_355_object); // 0xd33 NEW_2
	TaskReturn(); // 0xd34 TaskReturn
	var_362_object = Obj(); // 0xd36 PushV
	var_362_object = var_321_object; // 0xd37 Mov
	func_2507(); // 0xd38 NEW_2
	return 0; // 0xd3a Return
}


func_817(var_2_object, var_230_bool, var_231_object, var_232_float, var_233_float, var_234_bool, var_235_bool)
{
	var_239_bool = 0; var_240_bool = 0; var_241_bool = 0; var_242_bool = 0; // 0x331 PushV
	var_243_object = Obj(); // 0x332 PushV
	var_243_object = var_231_object; // 0x333 Mov
	func_2795(var_243_object); // 0x334 NEW_2
	var_244_int = 1; // 0x336 PushI
	var_245_int = 5; // 0x337 PushI
	SetTimer(var_244_int, var_245_int); // 0x338 Func
	CanSee(var_241_bool, var_231_object); // 0x33a Func
	var_246_bool = var_241_bool; // 0x33c Push
	if(var_246_bool == 0) goto Label_836; // 0x33d JumpB
	var_2_object = 1; // 0x33e TMovB
	var_247_object = Obj(); // 0x33f PushV
	var_247_object = var_231_object; // 0x340 Mov
	func_2543(var_247_object); // 0x341 NEW_2
	goto Label_837; // 0x343 Jump
	
Label_837:
	var_254_bool = 0; var_255_object = Obj(); // 0x345 PushV
	var_255_object = var_231_object; // 0x346 Mov
	func_2072(var_254_bool, var_255_object); // 0x347 NEW_2
	if(var_254_bool == 0) goto Label_847; // 0x349 JumpB
	var_256_object = Obj(); // 0x34a PushV
	func_2715(var_256_object); // 0x34b NEW_2
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


func_2873(var_150_int)
{
	var_151_int = 0; var_152_int = 0; // 0xb39 PushV
	var_153_string = "branch"; // 0xb3a PushS
	GetVariable(var_153_string, var_152_int); // 0xb3b Func
	var_150_int = var_152_int; // 0xb3d Mov
	return 2; // 0xb3e Return
}


func_3387(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xd3c PushV
	var_21_object = var_19_object; // 0xd3d Mov
	func_3563(var_20_bool, var_21_object); // 0xd3e NEW_2
	var_18_bool = var_20_bool; // 0xd3f Mov
	return 0; // 0xd41 Return
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
	func_2721(var_179_cvector, var_180_cvector); // 0x957 NEW_2
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
	var_192_bool = 1; // 0x967 PushB
	CameraTransit(var_170_cvector, var_168_cvector, var_192_bool); // 0x968 Func
	var_193_float = GetByIndex(var_169_cvector, 0); // 0x96a PushE
	var_194_float = GetByIndex(var_169_cvector, 2); // 0x96b PushE
	Rotate(var_193_float, var_194_float); // 0x96c Func
	var_195_bool = 0; // 0x96e PushV
	func_3561(var_195_bool); // 0x96f NEW_2
	if(var_195_bool == 0) goto Label_2419; // 0x971 JumpB
	goto Label_2427; // 0x972 Jump
	
Label_2427:
	CameraWaitForPlayFinish(); // 0x97b Func
	ResumeWorld(); // 0x97d Func
	var_152_bool = 1; // 0x97f MovB
	return 18; // 0x980 Return
	
Label_2419:
	var_196_string = "head"; // 0x973 PushS
	HasAnimationTrack(var_172_bool, var_196_string); // 0x974 Func
	var_197_bool = var_172_bool; // 0x976 Push
	if(var_197_bool == 0) goto Label_2427; // 0x977 JumpB
	var_198_string = "head"; // 0x978 PushS
	LookAsyncCamera(var_198_string); // 0x979 Func
}


func_2879(var_21_object)
{
	var_22_int = 0; // 0xb40 PushV
	func_2873(var_22_int); // 0xb41 NEW_2
	var_26_int = 1; // 0xb43 PushI
	var_27_bool = var_22_int == var_26_int; // 0xb44 Eq
	if(var_27_bool == 0) goto Label_2889; // 0xb45 JumpB
	WorkWithCorpse(var_21_object); // 0xb46 Func
	goto Label_2891; // 0xb48 Jump
	
Label_2891:
	return 0; // 0xb4b Return
	
Label_2889:
	Barter(var_21_object); // 0xb49 Func
}


func_3394(var_143_object)
{
	var_144_object = Obj(); // 0xd43 PushV
	var_144_object = var_143_object; // 0xd44 Mov
	func_3413(var_144_object); // 0xd45 NEW_2
	return 0; // 0xd47 Return
}


func_3400(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xd49 PushV
	var_21_object = var_19_object; // 0xd4a Mov
	func_3563(var_20_bool, var_21_object); // 0xd4b NEW_2
	var_18_bool = var_20_bool; // 0xd4c Mov
	return 0; // 0xd4e Return
}


func_2892(var_51_int, var_52_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0xb4c PushV
	var_60_bool = var_51_int > var_52_int; // 0xb4d GT
	if(var_60_bool == 0) goto Label_2899; // 0xb4e JumpB
	var_61_string = "GenerateMoney: iMin > iMax"; // 0xb4f PushS
	Trace(var_61_string); // 0xb50 Func
	return 4; // 0xb52 Return
	
Label_2899:
	var_58_int = 0; // 0xb53 MovI
	var_62_bool = var_51_int != var_52_int; // 0xb54 Neq
	if(var_62_bool == 0) goto Label_2906; // 0xb55 JumpB
	var_63_int = var_52_int - var_51_int; // 0xb56 Sub
	irand(var_58_int, var_63_int); // 0xb57 Func
	goto Label_2910; // 0xb59 Jump
	
Label_2910:
	var_58_int = var_58_int + var_51_int; // 0xb5e Add2
	var_64_int = 0; // 0xb5f PushI
	var_65_bool = var_58_int == var_64_int; // 0xb60 Eq
	if(var_65_bool == 0) goto Label_2915; // 0xb61 JumpB
	return 4; // 0xb62 Return
	
Label_2915:
	var_66_int = 0; var_67_string = ""; // 0xb63 PushV
	var_67_string = "Money"; // 0xb64 MovS
	func_3220(var_66_int, var_67_string); // 0xb65 NEW_2
	var_70_int = 0; // 0xb67 PushI
	AddItem(var_59_bool, var_66_int, var_70_int, var_58_int); // 0xb68 Func
	return 4; // 0xb6a Return
	
Label_2906:
	var_71_int = 0; // 0xb5a PushI
	var_72_bool = var_51_int == var_71_int; // 0xb5b Eq
	if(var_72_bool == 0) goto Label_2910; // 0xb5c JumpB
	return 4; // 0xb5d Return
}


func_3407(var_141_object)
{
	var_142_object = Obj(); // 0xd50 PushV
	var_142_object = var_141_object; // 0xd51 Mov
	func_3413(var_142_object); // 0xd52 NEW_2
	return 0; // 0xd54 Return
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
	var_562_int = 0; // 0x570 PushV
	func_1748(var_562_int); // 0x571 NEW_2
	ReportHit(var_0_bool, var_562_int, var_490_float, var_489_float); // 0x573 Func
	var_563_object = Obj(); var_564_float = 0; // 0x575 PushV
	var_563_object = var_488_object; // 0x576 Mov
	var_564_float = var_490_float; // 0x577 Mov
	func_1755(); // 0x578 NEW_2
	
Label_1402:
	return 6; // 0x57a Return
}


func_3413(var_144_object)
{
	var_145_object = Obj(); var_146_bool = 0; // 0xd56 PushV
	var_145_object = var_144_object; // 0xd57 Mov
	var_146_bool = 1; // 0xd58 MovB
	TaskCall(5); // 0xd59 TaskCall
	func_1073(var_145_object, var_146_bool); // 0xd5a NEW_2
	TaskReturn(); // 0xd5b TaskReturn
	ResetAAS(); // 0xd5d Func
	return 0; // 0xd5f Return
}


func_3424(var_136_object)
{
	var_137_bool = 0; var_138_bool = 0; // 0xd60 PushV
	var_139_bool = var_136_object == 0; // 0xd61 NullEq
	if(var_139_bool == 0) goto Label_3428; // 0xd62 JumpB
	return 2; // 0xd63 Return
	
Label_3428:
	var_140_object = GlobalVars[0]; // 0xd64 PushGE
	in(var_138_bool, var_136_object); // 0xd65 ObjFunc
	var_141_bool = var_138_bool == 0; // 0xd67 Not
	if(var_141_bool == 0) goto Label_3436; // 0xd68 JumpB
	var_142_object = GlobalVars[0]; // 0xd69 PushGE
	add(var_136_object); // 0xd6a ObjFunc
	
Label_3436:
	var_143_bool = 0; var_144_object = Obj(); // 0xd6c PushV
	var_144_object = var_136_object; // 0xd6d Mov
	func_2072(var_143_bool, var_144_object); // 0xd6e NEW_2
	if(var_143_bool == 0) goto Label_3447; // 0xd70 JumpB
	var_147_object = Obj(); // 0xd71 PushV
	func_2715(var_147_object); // 0xd72 NEW_2
	var_150_float = -0.07; // 0xd74 PushF
	ReportReputationChange(var_136_object, var_147_object, var_150_float); // 0xd75 Func
	
Label_3447:
	return 2; // 0xd77 Return
}


func_2923(var_156_string)
{
	var_157_object = Obj(); var_158_int = 0; var_159_bool = 0; var_160_object = Obj(); var_161_int = 0; var_162_bool = 0; // 0xb6b PushV
	CreateInvItem(var_160_object); // 0xb6c Func
	SetItemName(var_156_string); // 0xb6e ObjFunc
	var_163_string = "Organ"; // 0xb70 PushS
	var_164_int = 1; // 0xb71 PushI
	SetProperty(var_163_string, var_164_int); // 0xb72 ObjFunc
	GetItemID(var_161_int); // 0xb74 ObjFunc
	var_165_int = 0; // 0xb76 PushI
	var_166_int = 1; // 0xb77 PushI
	AddItem(var_162_bool, var_160_object, var_165_int, var_166_int); // 0xb78 Func
	return 6; // 0xb7a Return
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


func_3448(var_151_object)
{
	var_152_object = Obj(); // 0xd79 PushV
	var_152_object = var_151_object; // 0xd7a Mov
	func_3424(var_152_object); // 0xd7b NEW_2
	var_153_object = Obj(); var_154_bool = 0; // 0xd7d PushV
	var_153_object = var_151_object; // 0xd7e Mov
	var_154_bool = 1; // 0xd7f MovB
	TaskCall(5); // 0xd80 TaskCall
	func_1073(var_153_object, var_154_bool); // 0xd81 NEW_2
	TaskReturn(); // 0xd82 TaskReturn
	ResetAAS(); // 0xd84 Func
	return 0; // 0xd86 Return
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
	func_2804(); // 0x58a NEW_2
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
	var_565_string = "all"; // 0x5a5 PushS
	var_566_string = "attack_middle"; // 0x5a6 PushS
	var_567_int = var_566_string + var_452_int; // 0x5a7 Add
	HasAnimation(var_453_bool, var_565_string, var_567_int); // 0x5a8 Func
	var_568_bool = var_453_bool; // 0x5aa Push
	if(var_568_bool == 0) goto Label_1521; // 0x5ab JumpB
	func_2804(); // 0x5ad NEW_2
	var_569_string = "all"; // 0x5af PushS
	var_570_string = "attack_middle"; // 0x5b0 PushS
	var_571_int = var_570_string + var_452_int; // 0x5b1 Add
	PlayAnimation(var_569_string, var_571_int); // 0x5b2 Func
	WaitForAnimEnd(); // 0x5b4 Func
	func_1743(var_455_string); // 0x5b7 NEW_2
	var_572_bool = 0; var_573_object = Obj(); // 0x5b9 PushV
	var_573_object = var_0_bool; // 0x5ba MovT
	func_2203(var_572_bool, var_573_object); // 0x5bb NEW_2
	var_574_bool = var_572_bool == 0; // 0x5bd Not
	if(var_574_bool == 0) goto Label_1475; // 0x5be JumpB
	StopAsync(); // 0x5bf Func
	var_446_bool = 0; // 0x5c1 MovB
	return 8; // 0x5c2 Return
	
Label_1475:
	var_575_float = 0; var_576_int = 0; // 0x5c3 PushV
	var_575_float = var_447_float; // 0x5c4 Mov
	var_576_int = var_452_int; // 0x5c5 Mov
	func_1365(var_455_string, var_575_float, var_576_int); // 0x5c6 NEW_2
	var_454_int = 1; // 0x5c8 MovI
	
Label_1481:
	var_577_string = "attack_middle"; // 0x5c9 PushS
	var_578_int = var_577_string + var_452_int; // 0x5ca Add
	var_579_string = "_"; // 0x5cb PushS
	var_580_int = var_578_int + var_579_string; // 0x5cc Add
	var_455_string = var_580_int + var_454_int; // 0x5cd Add2
	var_581_string = "all"; // 0x5ce PushS
	HasAnimation(var_453_bool, var_581_string, var_455_string); // 0x5cf Func
	var_582_bool = var_453_bool == 0; // 0x5d1 Not
	if(var_582_bool == 0) goto Label_1492; // 0x5d2 JumpB
	goto Label_1521; // 0x5d3 Jump
	
Label_1521:
	var_583_bool = 0; // 0x5f1 PushB
	SetAttackState(var_583_bool); // 0x5f2 Func
	var_584_string = "all"; // 0x5f4 PushS
	var_585_string = "attack_end"; // 0x5f5 PushS
	var_586_int = var_585_string + var_452_int; // 0x5f6 Add
	PlayAnimation(var_584_string, var_586_int); // 0x5f7 Func
	var_587_bool = 0; // 0x5f9 PushV
	func_1757(var_587_bool); // 0x5fa NEW_2
	if(var_587_bool == 0) goto Label_1539; // 0x5fc JumpB
	var_588_bool = 0; var_589_float = 0; // 0x5fd PushV
	var_589_float = 0.75; // 0x5fe MovF
	func_1541(var_588_bool, var_589_float); // 0x5ff NEW_2
	StopAsync(); // 0x601 Func
	
Label_1539:
	var_446_bool = 1; // 0x603 MovB
	return 8; // 0x604 Return
	
Label_1492:
	func_2804(); // 0x5d5 NEW_2
	var_597_string = "all"; // 0x5d7 PushS
	PlayAnimation(var_597_string, var_455_string); // 0x5d8 Func
	WaitForAnimEnd(); // 0x5da Func
	func_1743(var_455_string); // 0x5dd NEW_2
	var_598_bool = 0; var_599_object = Obj(); // 0x5df PushV
	var_599_object = var_0_bool; // 0x5e0 MovT
	func_2203(var_598_bool, var_599_object); // 0x5e1 NEW_2
	var_600_bool = var_598_bool == 0; // 0x5e3 Not
	if(var_600_bool == 0) goto Label_1513; // 0x5e4 JumpB
	StopAsync(); // 0x5e5 Func
	var_446_bool = 0; // 0x5e7 MovB
	return 8; // 0x5e8 Return
	
Label_1513:
	var_601_float = 0; var_602_int = 0; // 0x5e9 PushV
	var_601_float = var_447_float; // 0x5ea Mov
	var_602_int = var_452_int; // 0x5eb Mov
	func_1365(var_455_string, var_601_float, var_602_int); // 0x5ec NEW_2
	var_603_int = 1; // 0x5ee PushI
	var_454_int = var_454_int + var_603_int; // 0x5ef Add2
	goto Label_1481; // 0x5f0 Jump
}


func_2940()
{
	var_150_int = 0; // 0xb7c PushV
	func_2873(var_150_int); // 0xb7d NEW_2
	var_154_int = 1; // 0xb7f PushI
	var_155_bool = var_150_int != var_154_int; // 0xb80 Neq
	if(var_155_bool == 0) goto Label_2947; // 0xb81 JumpB
	return 0; // 0xb82 Return
	
Label_2947:
	var_156_string = ""; // 0xb83 PushV
	var_156_string = "liver"; // 0xb84 MovS
	func_2923(var_156_string); // 0xb85 NEW_2
	var_167_string = ""; // 0xb87 PushV
	var_167_string = "kidney"; // 0xb88 MovS
	func_2923(var_167_string); // 0xb89 NEW_2
	var_168_string = ""; // 0xb8b PushV
	var_168_string = "heart"; // 0xb8c MovS
	func_2923(var_168_string); // 0xb8d NEW_2
	var_169_string = ""; // 0xb8f PushV
	var_169_string = "blood"; // 0xb90 MovS
	func_2923(var_169_string); // 0xb91 NEW_2
	return 0; // 0xb93 Return
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
	func_2587(var_194_string); // 0x78b NEW_2
	var_223_string = "all"; // 0x78d PushS
	PlayAnimation(var_223_string, var_193_string); // 0x78e Func
	WaitForAnimEnd(); // 0x790 Func
	var_224_string = "all"; // 0x792 PushS
	LockAnimationEnd(var_224_string, var_193_string); // 0x793 Func
	RemoveEnvelope(); // 0x795 Func
	return 0; // 0x797 Return
}


func_2433()
{
	var_313_bool = 0; var_314_bool = 0; // 0x981 PushV
	var_315_bool = 1; // 0x982 PushB
	CameraSwitchToNormal(var_315_bool); // 0x983 Func
	var_316_bool = 0; // 0x985 PushV
	func_3561(var_316_bool); // 0x986 NEW_2
	if(var_316_bool == 0) goto Label_2442; // 0x988 JumpB
	goto Label_2450; // 0x989 Jump
	
Label_2450:
	return 2; // 0x992 Return
	
Label_2442:
	var_317_string = "head"; // 0x98a PushS
	HasAnimationTrack(var_314_bool, var_317_string); // 0x98b Func
	var_318_bool = var_314_bool; // 0x98d Push
	if(var_318_bool == 0) goto Label_2450; // 0x98e JumpB
	var_319_string = "head"; // 0x98f PushS
	UnlookAsync(var_319_string); // 0x990 Func
}


func_3463(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xd88 PushV
	var_20_object = var_18_object; // 0xd89 Mov
	func_2072(var_19_bool, var_20_object); // 0xd8a NEW_2
	if(var_19_bool == 0) goto Label_3476; // 0xd8c JumpB
	var_23_object = Obj(); // 0xd8d PushV
	func_2715(var_23_object); // 0xd8e NEW_2
	var_26_float = -0.13; // 0xd90 PushF
	var_27_bool = 1; // 0xd91 PushB
	ReportReputationChange(var_18_object, var_23_object, var_26_float, var_27_bool); // 0xd92 Func
	
Label_3476:
	var_28_object = Obj(); // 0xd94 PushV
	var_28_object = var_18_object; // 0xd95 Mov
	TaskCall(6); // 0xd96 TaskCall
	func_1763(var_28_object); // 0xd97 NEW_2
	TaskReturn(); // 0xd98 TaskReturn
	return 0; // 0xd9a Return
}


func_2451(var_322_bool, var_323_object)
{
	var_324_bool = 0; var_325_object = Obj(); var_326_float = 0; // 0x994 PushV
	var_325_object = var_323_object; // 0x995 Mov
	var_326_float = 70; // 0x996 MovI
	func_2459(var_325_object, var_326_float); // 0x997 NEW_2
	var_322_bool = var_324_bool; // 0x998 Mov
	return 0; // 0x99a Return
}


func_2964()
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; // 0xb94 PushV
	var_44_int = 0; // 0xb95 PushI
	ClearSubContainer(var_44_int); // 0xb96 Func
	var_45_int = 0; // 0xb98 PushV
	func_2786(var_45_int); // 0xb99 NEW_2
	var_43_int = var_45_int; // 0xb9a Mov
	var_51_int = 0; var_52_int = 0; // 0xb9c PushV
	var_51_int = 0; // 0xb9d MovI
	var_53_int = 100; // 0xb9e PushI
	var_54_int = 100; // 0xb9f PushI
	var_55_float = var_43_int * var_54_int; // 0xba0 Mult
	var_52_int = var_53_int + var_55_float; // 0xba1 Add2
	func_2892(var_51_int, var_52_int); // 0xba2 NEW_2
	var_73_string = ""; var_74_int = 0; var_75_int = 0; // 0xba4 PushV
	var_73_string = "tourniquet"; // 0xba5 MovS
	var_74_int = 1; // 0xba6 MovI
	var_75_int = 7; // 0xba7 MovI
	func_2561(var_73_string, var_74_int, var_75_int); // 0xba8 NEW_2
	var_84_string = ""; var_85_int = 0; var_86_int = 0; // 0xbaa PushV
	var_84_string = "bandage"; // 0xbab MovS
	var_85_int = 1; // 0xbac MovI
	var_86_int = 7; // 0xbad MovI
	func_2561(var_84_string, var_85_int, var_86_int); // 0xbae NEW_2
	var_87_string = ""; var_88_int = 0; var_89_int = 0; // 0xbb0 PushV
	var_87_string = "packet"; // 0xbb1 MovS
	var_88_int = 1; // 0xbb2 MovI
	var_89_int = 10; // 0xbb3 MovI
	func_2561(var_87_string, var_88_int, var_89_int); // 0xbb4 NEW_2
	var_90_string = ""; var_91_int = 0; var_92_int = 0; // 0xbb6 PushV
	var_90_string = "bottle_water"; // 0xbb7 MovS
	var_91_int = 1; // 0xbb8 MovI
	var_92_int = 3; // 0xbb9 MovI
	func_2561(var_90_string, var_91_int, var_92_int); // 0xbba NEW_2
	var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; // 0xbbc PushV
	var_93_string = "rusk"; // 0xbbd MovS
	var_94_int = 1; // 0xbbe MovI
	var_95_int = 3; // 0xbbf MovI
	var_96_int = 4; // 0xbc0 MovI
	func_2572(var_93_string, var_94_int, var_95_int, var_96_int); // 0xbc1 NEW_2
	var_107_string = ""; var_108_int = 0; var_109_int = 0; // 0xbc3 PushV
	var_107_string = "hook"; // 0xbc4 MovS
	var_108_int = 1; // 0xbc5 MovI
	var_109_int = 20; // 0xbc6 MovI
	func_2561(var_107_string, var_108_int, var_109_int); // 0xbc7 NEW_2
	var_110_string = ""; var_111_int = 0; var_112_int = 0; // 0xbc9 PushV
	var_110_string = "watch"; // 0xbca MovS
	var_111_int = 1; // 0xbcb MovI
	var_112_int = 20; // 0xbcc MovI
	func_2561(var_110_string, var_111_int, var_112_int); // 0xbcd NEW_2
	var_113_bool = 0; // 0xbcf PushV
	var_113_bool = 0; // 0xbd0 MovB
	var_114_int = 3; // 0xbd1 PushI
	var_115_bool = var_43_int >= var_114_int; // 0xbd2 GE
	if(var_115_bool == 0) goto Label_3032; // 0xbd3 JumpB
	var_116_int = 6; // 0xbd4 PushI
	var_117_bool = var_43_int < var_116_int; // 0xbd5 LT
	if(var_117_bool == 0) goto Label_3032; // 0xbd6 JumpB
	var_113_bool = 1; // 0xbd7 MovB
	
Label_3032:
	if(var_113_bool == 0) goto Label_3040; // 0xbd8 JumpB
	var_118_string = ""; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0xbd9 PushV
	var_118_string = "alpha_pills"; // 0xbda MovS
	var_119_int = 1; // 0xbdb MovI
	var_120_int = 2; // 0xbdc MovI
	var_121_int = 3; // 0xbdd MovI
	func_2572(var_118_string, var_119_int, var_120_int, var_121_int); // 0xbde NEW_2
	
Label_3040:
	var_122_int = 4; // 0xbe0 PushI
	var_123_bool = var_43_int >= var_122_int; // 0xbe1 GE
	if(var_123_bool == 0) goto Label_3050; // 0xbe2 JumpB
	var_124_string = ""; var_125_int = 0; var_126_int = 0; var_127_int = 0; // 0xbe3 PushV
	var_124_string = "beta_pills"; // 0xbe4 MovS
	var_125_int = 1; // 0xbe5 MovI
	var_126_int = 4; // 0xbe6 MovI
	var_127_int = 3; // 0xbe7 MovI
	func_2572(var_124_string, var_125_int, var_126_int, var_127_int); // 0xbe8 NEW_2
	
Label_3050:
	var_128_int = 6; // 0xbea PushI
	var_129_bool = var_43_int >= var_128_int; // 0xbeb GE
	if(var_129_bool == 0) goto Label_3067; // 0xbec JumpB
	var_130_string = ""; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xbed PushV
	var_130_string = "alpha_pills"; // 0xbee MovS
	var_131_int = 1; // 0xbef MovI
	var_132_int = 2; // 0xbf0 MovI
	var_133_int = 8; // 0xbf1 MovI
	func_2572(var_130_string, var_131_int, var_132_int, var_133_int); // 0xbf2 NEW_2
	var_134_string = ""; var_135_int = 0; var_136_int = 0; var_137_int = 0; // 0xbf4 PushV
	var_134_string = "gamma_pills"; // 0xbf5 MovS
	var_135_int = 1; // 0xbf6 MovI
	var_136_int = 8; // 0xbf7 MovI
	var_137_int = 3; // 0xbf8 MovI
	func_2572(var_134_string, var_135_int, var_136_int, var_137_int); // 0xbf9 NEW_2
	
Label_3067:
	var_138_int = 8; // 0xbfb PushI
	var_139_bool = var_43_int >= var_138_int; // 0xbfc GE
	if(var_139_bool == 0) goto Label_3082; // 0xbfd JumpB
	var_140_string = ""; var_141_int = 0; var_142_int = 0; // 0xbfe PushV
	var_140_string = "revolver_ammo"; // 0xbff MovS
	var_141_int = 1; // 0xc00 MovI
	var_142_int = 3; // 0xc01 MovI
	func_2561(var_140_string, var_141_int, var_142_int); // 0xc02 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0xc04 PushV
	var_143_string = "rifle_ammo"; // 0xc05 MovS
	var_144_int = 1; // 0xc06 MovI
	var_145_int = 3; // 0xc07 MovI
	func_2561(var_143_string, var_144_int, var_145_int); // 0xc08 NEW_2
	
Label_3082:
	var_146_int = 0; var_147_string = ""; // 0xc0a PushV
	var_147_string = "patrol_mark"; // 0xc0b MovS
	func_3220(var_146_int, var_147_string); // 0xc0c NEW_2
	var_148_int = 0; // 0xc0e PushI
	var_149_int = 1; // 0xc0f PushI
	AddItem(var_42_bool, var_146_int, var_148_int, var_149_int); // 0xc10 Func
	return 6; // 0xc12 Return
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


func_2459(var_324_bool, var_326_float)
{
	var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_bool = 0; // 0x99b PushV
	GetPosition(var_336_cvector); // 0x99c ObjFunc
	GetEyesHeight(var_335_float); // 0x99e ObjFunc
	var_343_float = GetByIndex(var_336_cvector, 1); // 0x9a0 PushE
	var_343_float = var_343_float + var_335_float; // 0x9a1 Add2
	SetByIndex(var_336_cvector, 1) = var_343_float; // 0x9a2 PopE
	GetPosition(var_337_cvector); // 0x9a3 Func
	GetEyesHeight(var_335_float); // 0x9a5 Func
	var_344_float = GetByIndex(var_337_cvector, 1); // 0x9a7 PushE
	var_344_float = var_344_float + var_335_float; // 0x9a8 Add2
	SetByIndex(var_337_cvector, 1) = var_344_float; // 0x9a9 PopE
	var_338_cvector = var_336_cvector - var_337_cvector; // 0x9aa Sub2
	var_345_float = GetByIndex(var_338_cvector, 1); // 0x9ab PushE
	var_345_float = 0; // 0x9ac MovI
	SetByIndex(var_338_cvector, 1) = var_345_float; // 0x9ad PopE
	var_346_int = var_338_cvector | var_338_cvector; // 0x9ae Or
	var_347_float = sqrt(var_346_int); // 0x9af Sqrt
	var_338_cvector = var_338_cvector / var_338_cvector; // 0x9b0 Div2
	var_339_cvector = -var_338_cvector; // 0x9b1 Neg2
	var_348_float = var_338_cvector * var_326_float; // 0x9b2 Mult
	var_349_cvector = CVector(0.0, 10.0, 0.0); // 0x9b3 PushVec
	var_340_cvector = var_348_float - var_349_cvector; // 0x9b4 Sub2
	var_341_cvector = var_337_cvector + var_340_cvector; // 0x9b5 Add2
	IsOverrideActive(var_342_bool); // 0x9b6 Func
	var_350_bool = var_342_bool; // 0x9b8 Push
	if(var_350_bool == 0) goto Label_2492; // 0x9b9 JumpB
	var_324_bool = 0; // 0x9ba MovB
	return 16; // 0x9bb Return
	
Label_2492:
	StopWorld(); // 0x9bc Func
	var_351_bool = 1; // 0x9be PushB
	CameraTransit(var_341_cvector, var_339_cvector, var_351_bool); // 0x9bf Func
	var_352_float = GetByIndex(var_340_cvector, 0); // 0x9c1 PushE
	var_353_float = GetByIndex(var_340_cvector, 2); // 0x9c2 PushE
	Rotate(var_352_float, var_353_float); // 0x9c3 Func
	CameraWaitForPlayFinish(); // 0x9c5 Func
	ResumeWorld(); // 0x9c7 Func
	var_324_bool = 1; // 0x9c9 MovB
	return 16; // 0x9ca Return
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


func_3527(var_20_bool, var_21_object, var_22_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0xdc7 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0xdc8 PushV
	var_27_object = var_22_object; // 0xdc9 Mov
	var_28_bool = !var_23_bool; // 0xdca Not2
	func_3225(var_26_bool, var_27_object, var_28_bool); // 0xdcb NEW_2
	if(var_26_bool == 0) goto Label_3551; // 0xdcd JumpB
	CanSee(var_25_bool, var_21_object); // 0xdce Func
	var_94_bool = 0; // 0xdd0 PushV
	var_94_bool = 1; // 0xdd1 MovB
	var_95_bool = var_25_bool; // 0xdd2 Push
	if(var_95_bool == 0) goto Label_3548; // 0xdd3 JumpB
	var_96_float = 0; var_97_object = Obj(); // 0xdd4 PushV
	var_97_object = var_21_object; // 0xdd5 Mov
	func_2064(var_97_object); // 0xdd6 NEW_2
	var_104_float = 160000.0; // 0xdd8 PushF
	var_105_bool = var_96_float <= var_104_float; // 0xdd9 LE
	if(var_105_bool == 0) goto Label_3548; // 0xdda JumpB
	var_94_bool = 0; // 0xddb MovB
	
Label_3548:
	if(var_94_bool == 0) goto Label_3551; // 0xddc JumpB
	var_20_bool = 1; // 0xddd MovB
	return 2; // 0xdde Return
	
Label_3551:
	var_20_bool = 0; // 0xddf MovB
	return 2; // 0xde0 Return
}


func_2507()
{
	var_363_bool = 1; // 0x9cc PushB
	CameraSwitchToNormal(var_363_bool); // 0x9cd Func
	return 0; // 0x9cf Return
}


func_2512(var_295_string)
{
	var_296_bool = 0; var_297_float = 0; var_298_float = 0; var_299_bool = 0; var_300_float = 0; var_301_float = 0; // 0x9d0 PushV
	lshHasAnimation(var_299_bool, var_295_string); // 0x9d1 Func
	var_302_bool = var_299_bool; // 0x9d3 Push
	if(var_302_bool == 0) goto Label_2523; // 0x9d4 JumpB
	lshGetAnimTimes(var_295_string, var_300_float, var_301_float); // 0x9d5 Func
	var_303_bool = 0; // 0x9d7 PushB
	lshPlayAnimation(var_300_float, var_301_float, var_303_bool); // 0x9d8 Func
	goto Label_2527; // 0x9da Jump
	
Label_2527:
	return 6; // 0x9df Return
	
Label_2523:
	var_304_string = "Can't find lsh animation : "; // 0x9db PushS
	var_305_int = var_304_string + var_295_string; // 0x9dc Add
	Trace(var_305_int); // 0x9dd Func
}


func_2528(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0; // 0x9e0 PushV
	lshHasAnimation(var_231_bool, var_224_string); // 0x9e1 Func
	var_234_bool = var_231_bool; // 0x9e3 Push
	if(var_234_bool == 0) goto Label_2538; // 0x9e4 JumpB
	lshGetAnimTimes(var_224_string, var_232_float, var_233_float); // 0x9e5 Func
	lshPlayAnimation(var_232_float, var_233_float, var_225_bool); // 0x9e7 Func
	goto Label_2542; // 0x9e9 Jump
	
Label_2542:
	return 6; // 0x9ee Return
	
Label_2538:
	var_235_string = "Can't find lsh animation : "; // 0x9ea PushS
	var_236_int = var_235_string + var_224_string; // 0x9eb Add
	Trace(var_236_int); // 0x9ec Func
}


func_3553(var_201_int)
{
	var_201_int = 515572; // 0xde1 MovI
	return 0; // 0xde2 Return
}


func_3555(var_200_int)
{
	var_200_int = 504031; // 0xde3 MovI
	return 0; // 0xde4 Return
}


func_3557(var_202_string)
{
	var_202_string = "ui/NPC_Citizen2.png"; // 0xde5 MovS
	return 0; // 0xde6 Return
}


func_3559(var_203_string)
{
	var_203_string = "ui/NPC_Citizen2_b.png"; // 0xde7 MovS
	return 0; // 0xde8 Return
}


func_3561(var_195_bool)
{
	var_195_bool = 0; // 0xde9 MovB
	return 0; // 0xdea Return
}


func_3563(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_string = ""; var_25_float = 0; var_26_bool = 0; var_27_float = 0; var_28_string = ""; var_29_float = 0; // 0xdeb PushV
	var_30_bool = 0; var_31_object = Obj(); // 0xdec PushV
	var_31_object = var_21_object; // 0xded Mov
	func_2203(var_30_bool, var_31_object); // 0xdee NEW_2
	var_64_bool = var_30_bool == 0; // 0xdf0 Not
	if(var_64_bool == 0) goto Label_3572; // 0xdf1 JumpB
	var_20_bool = 0; // 0xdf2 MovB
	return 8; // 0xdf3 Return
	
Label_3572:
	var_65_object = GlobalVars[0]; // 0xdf4 PushGE
	in(var_26_bool, var_21_object); // 0xdf5 ObjFunc
	var_66_bool = var_26_bool; // 0xdf7 Push
	if(var_66_bool == 0) goto Label_3579; // 0xdf8 JumpB
	var_20_bool = 1; // 0xdf9 MovB
	return 8; // 0xdfa Return
	
Label_3579:
	var_67_bool = 0; var_68_object = Obj(); // 0xdfb PushV
	var_68_object = var_21_object; // 0xdfc Mov
	func_2072(var_67_bool, var_68_object); // 0xdfd NEW_2
	if(var_67_bool == 0) goto Label_3590; // 0xdff JumpB
	var_71_string = "reputation"; // 0xe00 PushS
	GetProperty(var_71_string, var_27_float); // 0xe01 ObjFunc
	var_72_float = 0.33; // 0xe03 PushF
	var_20_bool = var_27_float < var_72_float; // 0xe04 LT2
	return 8; // 0xe05 Return
	
Label_3590:
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; // 0xe06 PushV
	var_74_object = var_21_object; // 0xe07 Mov
	var_75_string = "class"; // 0xe08 MovS
	func_2077(var_73_bool, var_74_object, var_75_string); // 0xe09 NEW_2
	if(var_73_bool == 0) goto Label_3649; // 0xe0b JumpB
	var_76_string = "class"; // 0xe0c PushS
	GetProperty(var_76_string, var_28_string); // 0xe0d ObjFunc
	var_77_bool = 0; // 0xe0f PushV
	var_77_bool = 1; // 0xe10 MovB
	var_78_bool = 0; // 0xe11 PushV
	var_78_bool = 1; // 0xe12 MovB
	var_79_string = "bomber"; // 0xe13 PushS
	var_80_bool = var_28_string == var_79_string; // 0xe14 Eq
	if(var_80_bool == 0) goto Label_3610; // 0xe15 JumpB
	var_81_string = "hunter"; // 0xe16 PushS
	var_82_bool = var_28_string == var_81_string; // 0xe17 Eq
	if(var_82_bool == 0) goto Label_3610; // 0xe18 JumpB
	var_78_bool = 0; // 0xe19 MovB
	
Label_3610:
	if(var_78_bool == 0) goto Label_3615; // 0xe1a JumpB
	var_83_string = "grabitel"; // 0xe1b PushS
	var_84_bool = var_28_string == var_83_string; // 0xe1c Eq
	if(var_84_bool == 0) goto Label_3615; // 0xe1d JumpB
	var_77_bool = 0; // 0xe1e MovB
	
Label_3615:
	if(var_77_bool == 0) goto Label_3618; // 0xe1f JumpB
	var_20_bool = 1; // 0xe20 MovB
	return 8; // 0xe21 Return
	
Label_3618:
	var_85_bool = 0; // 0xe22 PushV
	var_85_bool = 0; // 0xe23 MovB
	var_86_bool = 0; var_87_string = ""; // 0xe24 PushV
	var_87_string = var_28_string; // 0xe25 Mov
	func_2628(var_86_bool, var_87_string); // 0xe26 NEW_2
	if(var_86_bool == 0) goto Label_3632; // 0xe28 JumpB
	var_125_bool = 0; var_126_object = Obj(); var_127_string = ""; // 0xe29 PushV
	var_126_object = var_21_object; // 0xe2a Mov
	var_127_string = "disease"; // 0xe2b MovS
	func_2077(var_125_bool, var_126_object, var_127_string); // 0xe2c NEW_2
	if(var_125_bool == 0) goto Label_3632; // 0xe2e JumpB
	var_85_bool = 1; // 0xe2f MovB
	
Label_3632:
	if(var_85_bool == 0) goto Label_3649; // 0xe30 JumpB
	var_128_string = "disease"; // 0xe31 PushS
	GetProperty(var_128_string, var_29_float); // 0xe32 ObjFunc
	var_20_bool = 0; // 0xe34 MovB
	var_129_int = 0; // 0xe35 PushI
	var_130_bool = var_29_float > var_129_int; // 0xe36 GT
	if(var_130_bool == 0) goto Label_3648; // 0xe37 JumpB
	var_131_float = 0; var_132_object = Obj(); // 0xe38 PushV
	var_132_object = var_21_object; // 0xe39 Mov
	func_2064(var_132_object); // 0xe3a NEW_2
	var_139_float = 490000.0; // 0xe3c PushF
	var_140_bool = var_131_float <= var_139_float; // 0xe3d LE
	if(var_140_bool == 0) goto Label_3648; // 0xe3e JumpB
	var_20_bool = 1; // 0xe3f MovB
	
Label_3648:
	return 8; // 0xe40 Return
	
Label_3649:
	var_20_bool = 0; // 0xe41 MovB
	return 8; // 0xe42 Return
}


func_2543(var_247_object)
{
	var_248_float = 0; var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_cvector = CVector(0,0,0); // 0x9ef PushV
	GetEyesHeight(var_250_float); // 0x9f0 ObjFunc
	var_251_cvector = CVector(0.0, 0.0, 0.0); // 0x9f2 MovV
	var_252_float = GetByIndex(var_251_cvector, 1); // 0x9f3 PushE
	var_252_float = var_250_float; // 0x9f4 Mov
	SetByIndex(var_251_cvector, 1) = var_252_float; // 0x9f5 PopE
	var_253_string = "head"; // 0x9f6 PushS
	LookAsync(var_247_object, var_253_string, var_251_cvector); // 0x9f7 Func
	return 4; // 0x9f9 Return
}


func_2554()
{
	var_20_bool = 0; // 0x9fa PushV
	func_3561(var_20_bool); // 0x9fb NEW_2
	if(var_20_bool == 0) goto Label_2560; // 0x9fd JumpB
	lshStopSpeech(); // 0x9fe Func
	
Label_2560:
	return 0; // 0xa00 Return
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


