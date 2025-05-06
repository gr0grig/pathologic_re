task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_int)
{
	var_20_bool = 0; // 0x1b PushV
	func_1837(var_20_bool); // 0x1c NEW_2
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
	var_21_int = 1; // 0x10f PushI
	if(var_21_int == 0) goto Label_554; // 0x110 JumpB
	func_1490(); // 0x112 NEW_2
	var_23_int = 19266; // 0x114 PushI
	var_24_bool = var_20_int == var_23_int; // 0x115 Eq
	if(var_24_bool == 0) goto Label_289; // 0x116 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x117 PushV
	var_25_object = var_1_object; // 0x118 MovT
	var_26_object = var_0_bool; // 0x119 MovT
	func_1563(); // 0x11a NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x11c PushV
	var_42_object = var_1_object; // 0x11d MovT
	var_43_object = var_0_bool; // 0x11e MovT
	func_1609(); // 0x11f NEW_2
	
Label_289:
	var_46_int = 19269; // 0x121 PushI
	var_47_bool = var_20_int == var_46_int; // 0x122 Eq
	if(var_47_bool == 0) goto Label_297; // 0x123 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x124 PushV
	var_48_object = var_1_object; // 0x125 MovT
	var_49_object = var_0_bool; // 0x126 MovT
	func_1615(); // 0x127 NEW_2
	
Label_297:
	var_51_int = 19312; // 0x129 PushI
	var_52_bool = var_20_int == var_51_int; // 0x12a Eq
	if(var_52_bool == 0) goto Label_305; // 0x12b JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x12c PushV
	var_53_object = var_1_object; // 0x12d MovT
	var_54_object = var_0_bool; // 0x12e MovT
	func_1603(); // 0x12f NEW_2
	
Label_305:
	var_57_int = 19258; // 0x131 PushI
	var_58_bool = var_19_bool == var_57_int; // 0x132 Eq
	if(var_58_bool == 0) goto Label_404; // 0x133 JumpB
	var_59_bool = 0; // 0x134 PushV
	var_59_bool = 0; // 0x135 MovB
	var_60_bool = 0; var_61_object = Obj(); // 0x136 PushV
	var_61_object = var_1_object; // 0x137 MovT
	func_1667(var_60_bool, var_61_object); // 0x138 NEW_2
	var_72_bool = var_60_bool == 0; // 0x13a Not
	if(var_72_bool == 0) goto Label_323; // 0x13b JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x13c PushV
	var_74_object = var_1_object; // 0x13d MovT
	func_1656(var_73_bool, var_74_object); // 0x13e NEW_2
	var_82_bool = var_73_bool == 0; // 0x140 Not
	if(var_82_bool == 0) goto Label_323; // 0x141 JumpB
	var_59_bool = 1; // 0x142 MovB
	
Label_323:
	if(var_59_bool == 0) goto Label_344; // 0x143 JumpB
	var_83_string = ""; // 0x144 PushV
	var_83_string = "Neutral"; // 0x145 MovS
	func_248(var_20_int, var_83_string); // 0x146 NEW_2
	var_100_int = 518145; // 0x148 PushI
	SetMessage(var_100_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_101_int = 518146; // 0x14d PushI
	var_102_int = 19260; // 0x14e PushI
	var_103_int = 19259; // 0x14f PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x150 TObjFunc
	var_104_int = 529952; // 0x152 PushI
	var_105_int = -1; // 0x153 PushI
	var_106_int = 31336; // 0x154 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_107_bool = 0; // 0x158 PushV
	var_107_bool = 0; // 0x159 MovB
	var_108_bool = 0; var_109_object = Obj(); // 0x15a PushV
	var_109_object = var_1_object; // 0x15b MovT
	func_1656(var_108_bool, var_109_object); // 0x15c NEW_2
	if(var_108_bool == 0) goto Label_358; // 0x15e JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x15f PushV
	var_111_object = var_1_object; // 0x160 MovT
	func_1667(var_110_bool, var_111_object); // 0x161 NEW_2
	var_112_bool = var_110_bool == 0; // 0x163 Not
	if(var_112_bool == 0) goto Label_358; // 0x164 JumpB
	var_107_bool = 1; // 0x165 MovB
	
Label_358:
	if(var_107_bool == 0) goto Label_374; // 0x166 JumpB
	var_113_string = ""; // 0x167 PushV
	var_113_string = "Neutral"; // 0x168 MovS
	func_248(var_20_int, var_113_string); // 0x169 NEW_2
	var_114_int = 518150; // 0x16b PushI
	SetMessage(var_114_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_115_int = 518151; // 0x170 PushI
	var_116_int = 19265; // 0x171 PushI
	var_117_int = 19264; // 0x172 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_118_string = ""; // 0x176 PushV
	var_118_string = "Neutral"; // 0x177 MovS
	func_248(var_20_int, var_118_string); // 0x178 NEW_2
	var_119_int = 518155; // 0x17a PushI
	SetMessage(var_119_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_120_int = 518156; // 0x17f PushI
	var_121_int = -1; // 0x180 PushI
	var_122_int = 19269; // 0x181 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x182 TObjFunc
	var_123_bool = 0; var_124_object = Obj(); // 0x184 PushV
	var_124_object = var_1_object; // 0x185 MovT
	func_1644(var_124_object); // 0x186 NEW_2
	if(var_123_bool == 0) goto Label_398; // 0x188 JumpB
	var_131_int = 518199; // 0x189 PushI
	var_132_int = 19313; // 0x18a PushI
	var_133_int = 19312; // 0x18b PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x18c TObjFunc
	
Label_398:
	var_134_int = 518157; // 0x18e PushI
	var_135_int = -1; // 0x18f PushI
	var_136_int = 19270; // 0x190 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_137_int = 19313; // 0x194 PushI
	var_138_bool = var_19_bool == var_137_int; // 0x195 Eq
	if(var_138_bool == 0) goto Label_427; // 0x196 JumpB
	var_139_string = ""; // 0x197 PushV
	var_139_string = "Neutral"; // 0x198 MovS
	func_248(var_20_int, var_139_string); // 0x199 NEW_2
	var_140_int = 518200; // 0x19b PushI
	SetMessage(var_140_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_141_int = 534598; // 0x1a0 PushI
	var_142_int = 36237; // 0x1a1 PushI
	var_143_int = 36236; // 0x1a2 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x1a3 TObjFunc
	var_144_int = 518201; // 0x1a5 PushI
	var_145_int = -1; // 0x1a6 PushI
	var_146_int = 19314; // 0x1a7 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_147_int = 36237; // 0x1ab PushI
	var_148_bool = var_19_bool == var_147_int; // 0x1ac Eq
	if(var_148_bool == 0) goto Label_450; // 0x1ad JumpB
	var_149_string = ""; // 0x1ae PushV
	var_149_string = "Neutral"; // 0x1af MovS
	func_248(var_20_int, var_149_string); // 0x1b0 NEW_2
	var_150_int = 534599; // 0x1b2 PushI
	SetMessage(var_150_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_151_int = 534600; // 0x1b7 PushI
	var_152_int = -1; // 0x1b8 PushI
	var_153_int = 36238; // 0x1b9 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x1ba TObjFunc
	var_154_int = 534601; // 0x1bc PushI
	var_155_int = 36240; // 0x1bd PushI
	var_156_int = 36239; // 0x1be PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1bf TObjFunc
	return 0; // 0x1c1 Return
	
Label_450:
	var_157_int = 36240; // 0x1c2 PushI
	var_158_bool = var_19_bool == var_157_int; // 0x1c3 Eq
	if(var_158_bool == 0) goto Label_473; // 0x1c4 JumpB
	var_159_string = ""; // 0x1c5 PushV
	var_159_string = "Neutral"; // 0x1c6 MovS
	func_248(var_20_int, var_159_string); // 0x1c7 NEW_2
	var_160_int = 534602; // 0x1c9 PushI
	SetMessage(var_160_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_161_int = 534603; // 0x1ce PushI
	var_162_int = -1; // 0x1cf PushI
	var_163_int = 36241; // 0x1d0 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1d1 TObjFunc
	var_164_int = 534604; // 0x1d3 PushI
	var_165_int = -1; // 0x1d4 PushI
	var_166_int = 36242; // 0x1d5 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1d6 TObjFunc
	return 0; // 0x1d8 Return
	
Label_473:
	var_167_int = 19265; // 0x1d9 PushI
	var_168_bool = var_19_bool == var_167_int; // 0x1da Eq
	if(var_168_bool == 0) goto Label_496; // 0x1db JumpB
	var_169_string = ""; // 0x1dc PushV
	var_169_string = "Neutral"; // 0x1dd MovS
	func_248(var_20_int, var_169_string); // 0x1de NEW_2
	var_170_int = 518152; // 0x1e0 PushI
	SetMessage(var_170_int); // 0x1e1 TObjFunc
	ClearReplies(); // 0x1e3 TObjFunc
	var_171_int = 518153; // 0x1e5 PushI
	var_172_int = -1; // 0x1e6 PushI
	var_173_int = 19266; // 0x1e7 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1e8 TObjFunc
	var_174_int = 518154; // 0x1ea PushI
	var_175_int = -1; // 0x1eb PushI
	var_176_int = 19267; // 0x1ec PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1ed TObjFunc
	return 0; // 0x1ef Return
	
Label_496:
	var_177_int = 19260; // 0x1f0 PushI
	var_178_bool = var_19_bool == var_177_int; // 0x1f1 Eq
	if(var_178_bool == 0) goto Label_519; // 0x1f2 JumpB
	var_179_string = ""; // 0x1f3 PushV
	var_179_string = "Neutral"; // 0x1f4 MovS
	func_248(var_20_int, var_179_string); // 0x1f5 NEW_2
	var_180_int = 518147; // 0x1f7 PushI
	SetMessage(var_180_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_181_int = 529953; // 0x1fc PushI
	var_182_int = 31339; // 0x1fd PushI
	var_183_int = 31337; // 0x1fe PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1ff TObjFunc
	var_184_int = 529954; // 0x201 PushI
	var_185_int = -1; // 0x202 PushI
	var_186_int = 31338; // 0x203 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_187_int = 31339; // 0x207 PushI
	var_188_bool = var_19_bool == var_187_int; // 0x208 Eq
	if(var_188_bool == 0) goto Label_542; // 0x209 JumpB
	var_189_string = ""; // 0x20a PushV
	var_189_string = "Neutral"; // 0x20b MovS
	func_248(var_20_int, var_189_string); // 0x20c NEW_2
	var_190_int = 529955; // 0x20e PushI
	SetMessage(var_190_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_191_int = 518148; // 0x213 PushI
	var_192_int = -1; // 0x214 PushI
	var_193_int = 19261; // 0x215 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x216 TObjFunc
	var_194_int = 518162; // 0x218 PushI
	var_195_int = -1; // 0x219 PushI
	var_196_int = 19275; // 0x21a PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_3_object = 1; // 0x21e TMovB
	var_197_bool = 0; // 0x21f PushV
	func_1837(var_197_bool); // 0x220 NEW_2
	if(var_197_bool == 0) goto Label_550; // 0x222 JumpB
	lshStopAnimation(); // 0x223 Func
	goto Label_552; // 0x225 Jump
	
Label_552:
	return 0; // 0x228 Return
	
Label_550:
	StopAnimation(); // 0x226 Func
	
Label_554:
	return 0; // 0x22a Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	var_21_int = 1; // 0x2d9 PushI
	if(var_21_int == 0) goto Label_979; // 0x2da JumpB
	func_1490(); // 0x2dc NEW_2
	var_23_int = 26755; // 0x2de PushI
	var_24_bool = var_20_int == var_23_int; // 0x2df Eq
	if(var_24_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x2e1 PushV
	var_25_object = var_1_object; // 0x2e2 MovT
	var_26_object = var_0_bool; // 0x2e3 MovT
	func_1578(); // 0x2e4 NEW_2
	
Label_742:
	var_29_int = 40957; // 0x2e6 PushI
	var_30_bool = var_20_int == var_29_int; // 0x2e7 Eq
	if(var_30_bool == 0) goto Label_750; // 0x2e8 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0x2e9 PushV
	var_31_object = var_1_object; // 0x2ea MovT
	var_32_object = var_0_bool; // 0x2eb MovT
	func_1584(); // 0x2ec NEW_2
	
Label_750:
	var_72_int = 40958; // 0x2ee PushI
	var_73_bool = var_20_int == var_72_int; // 0x2ef Eq
	if(var_73_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x2f1 PushV
	var_74_object = var_1_object; // 0x2f2 MovT
	var_75_object = var_0_bool; // 0x2f3 MovT
	func_1584(); // 0x2f4 NEW_2
	
Label_758:
	var_76_int = 40959; // 0x2f6 PushI
	var_77_bool = var_20_int == var_76_int; // 0x2f7 Eq
	if(var_77_bool == 0) goto Label_766; // 0x2f8 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x2f9 PushV
	var_78_object = var_1_object; // 0x2fa MovT
	var_79_object = var_0_bool; // 0x2fb MovT
	func_1584(); // 0x2fc NEW_2
	
Label_766:
	var_80_int = 26757; // 0x2fe PushI
	var_81_bool = var_20_int == var_80_int; // 0x2ff Eq
	if(var_81_bool == 0) goto Label_774; // 0x300 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x301 PushV
	var_82_object = var_1_object; // 0x302 MovT
	var_83_object = var_0_bool; // 0x303 MovT
	func_1584(); // 0x304 NEW_2
	
Label_774:
	var_84_int = 26753; // 0x306 PushI
	var_85_bool = var_19_bool == var_84_int; // 0x307 Eq
	if(var_85_bool == 0) goto Label_816; // 0x308 JumpB
	var_86_string = ""; // 0x309 PushV
	var_86_string = "Neutral"; // 0x30a MovS
	func_706(var_20_int, var_86_string); // 0x30b NEW_2
	var_103_int = 525385; // 0x30d PushI
	SetMessage(var_103_int); // 0x30e TObjFunc
	ClearReplies(); // 0x310 TObjFunc
	var_104_bool = 0; // 0x312 PushV
	var_104_bool = 0; // 0x313 MovB
	var_105_bool = 0; var_106_object = Obj(); // 0x314 PushV
	var_106_object = var_1_object; // 0x315 MovT
	func_1620(var_106_object); // 0x316 NEW_2
	if(var_105_bool == 0) goto Label_799; // 0x318 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x319 PushV
	var_114_object = var_1_object; // 0x31a MovT
	func_1632(var_114_object); // 0x31b NEW_2
	if(var_113_bool == 0) goto Label_799; // 0x31d JumpB
	var_104_bool = 1; // 0x31e MovB
	
Label_799:
	if(var_104_bool == 0) goto Label_805; // 0x31f JumpB
	var_119_int = 525387; // 0x320 PushI
	var_120_int = 40946; // 0x321 PushI
	var_121_int = 26755; // 0x322 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x323 TObjFunc
	
Label_805:
	var_122_int = 539023; // 0x325 PushI
	var_123_int = -1; // 0x326 PushI
	var_124_int = 40966; // 0x327 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x328 TObjFunc
	var_125_int = 539024; // 0x32a PushI
	var_126_int = -1; // 0x32b PushI
	var_127_int = 40967; // 0x32c PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_128_int = 40946; // 0x330 PushI
	var_129_bool = var_19_bool == var_128_int; // 0x331 Eq
	if(var_129_bool == 0) goto Label_839; // 0x332 JumpB
	var_130_string = ""; // 0x333 PushV
	var_130_string = "Neutral"; // 0x334 MovS
	func_706(var_20_int, var_130_string); // 0x335 NEW_2
	var_131_int = 539004; // 0x337 PushI
	SetMessage(var_131_int); // 0x338 TObjFunc
	ClearReplies(); // 0x33a TObjFunc
	var_132_int = 539005; // 0x33c PushI
	var_133_int = 40948; // 0x33d PushI
	var_134_int = 40947; // 0x33e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x33f TObjFunc
	var_135_int = 539022; // 0x341 PushI
	var_136_int = 40948; // 0x342 PushI
	var_137_int = 40964; // 0x343 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x344 TObjFunc
	return 0; // 0x346 Return
	
Label_839:
	var_138_int = 40948; // 0x347 PushI
	var_139_bool = var_19_bool == var_138_int; // 0x348 Eq
	if(var_139_bool == 0) goto Label_857; // 0x349 JumpB
	var_140_string = ""; // 0x34a PushV
	var_140_string = "Neutral"; // 0x34b MovS
	func_706(var_20_int, var_140_string); // 0x34c NEW_2
	var_141_int = 539006; // 0x34e PushI
	SetMessage(var_141_int); // 0x34f TObjFunc
	ClearReplies(); // 0x351 TObjFunc
	var_142_int = 539007; // 0x353 PushI
	var_143_int = 40950; // 0x354 PushI
	var_144_int = 40949; // 0x355 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x356 TObjFunc
	return 0; // 0x358 Return
	
Label_857:
	var_145_int = 40950; // 0x359 PushI
	var_146_bool = var_19_bool == var_145_int; // 0x35a Eq
	if(var_146_bool == 0) goto Label_880; // 0x35b JumpB
	var_147_string = ""; // 0x35c PushV
	var_147_string = "Neutral"; // 0x35d MovS
	func_706(var_20_int, var_147_string); // 0x35e NEW_2
	var_148_int = 539008; // 0x360 PushI
	SetMessage(var_148_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_149_int = 539009; // 0x365 PushI
	var_150_int = 40952; // 0x366 PushI
	var_151_int = 40951; // 0x367 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x368 TObjFunc
	var_152_int = 539021; // 0x36a PushI
	var_153_int = -1; // 0x36b PushI
	var_154_int = 40963; // 0x36c PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x36d TObjFunc
	return 0; // 0x36f Return
	
Label_880:
	var_155_int = 40952; // 0x370 PushI
	var_156_bool = var_19_bool == var_155_int; // 0x371 Eq
	if(var_156_bool == 0) goto Label_903; // 0x372 JumpB
	var_157_string = ""; // 0x373 PushV
	var_157_string = "Neutral"; // 0x374 MovS
	func_706(var_20_int, var_157_string); // 0x375 NEW_2
	var_158_int = 539010; // 0x377 PushI
	SetMessage(var_158_int); // 0x378 TObjFunc
	ClearReplies(); // 0x37a TObjFunc
	var_159_int = 539011; // 0x37c PushI
	var_160_int = 40954; // 0x37d PushI
	var_161_int = 40953; // 0x37e PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x37f TObjFunc
	var_162_int = 539018; // 0x381 PushI
	var_163_int = 40961; // 0x382 PushI
	var_164_int = 40960; // 0x383 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x384 TObjFunc
	return 0; // 0x386 Return
	
Label_903:
	var_165_int = 40961; // 0x387 PushI
	var_166_bool = var_19_bool == var_165_int; // 0x388 Eq
	if(var_166_bool == 0) goto Label_921; // 0x389 JumpB
	var_167_string = ""; // 0x38a PushV
	var_167_string = "Neutral"; // 0x38b MovS
	func_706(var_20_int, var_167_string); // 0x38c NEW_2
	var_168_int = 539019; // 0x38e PushI
	SetMessage(var_168_int); // 0x38f TObjFunc
	ClearReplies(); // 0x391 TObjFunc
	var_169_int = 525389; // 0x393 PushI
	var_170_int = -1; // 0x394 PushI
	var_171_int = 26757; // 0x395 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_172_int = 40954; // 0x399 PushI
	var_173_bool = var_19_bool == var_172_int; // 0x39a Eq
	if(var_173_bool == 0) goto Label_944; // 0x39b JumpB
	var_174_string = ""; // 0x39c PushV
	var_174_string = "Neutral"; // 0x39d MovS
	func_706(var_20_int, var_174_string); // 0x39e NEW_2
	var_175_int = 539012; // 0x3a0 PushI
	SetMessage(var_175_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_176_int = 539013; // 0x3a5 PushI
	var_177_int = 40956; // 0x3a6 PushI
	var_178_int = 40955; // 0x3a7 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x3a8 TObjFunc
	var_179_int = 539017; // 0x3aa PushI
	var_180_int = -1; // 0x3ab PushI
	var_181_int = 40959; // 0x3ac PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_182_int = 40956; // 0x3b0 PushI
	var_183_bool = var_19_bool == var_182_int; // 0x3b1 Eq
	if(var_183_bool == 0) goto Label_967; // 0x3b2 JumpB
	var_184_string = ""; // 0x3b3 PushV
	var_184_string = "Neutral"; // 0x3b4 MovS
	func_706(var_20_int, var_184_string); // 0x3b5 NEW_2
	var_185_int = 539014; // 0x3b7 PushI
	SetMessage(var_185_int); // 0x3b8 TObjFunc
	ClearReplies(); // 0x3ba TObjFunc
	var_186_int = 539015; // 0x3bc PushI
	var_187_int = -1; // 0x3bd PushI
	var_188_int = 40957; // 0x3be PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x3bf TObjFunc
	var_189_int = 539016; // 0x3c1 PushI
	var_190_int = -1; // 0x3c2 PushI
	var_191_int = 40958; // 0x3c3 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_3_object = 1; // 0x3c7 TMovB
	var_192_bool = 0; // 0x3c8 PushV
	func_1837(var_192_bool); // 0x3c9 NEW_2
	if(var_192_bool == 0) goto Label_975; // 0x3cb JumpB
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
	func_1823(var_25_int); // 0x3e6 NEW_2
	var_29_int = 1; // 0x3e8 PushI
	var_30_bool = var_25_int == var_29_int; // 0x3e9 Eq
	if(var_30_bool == 0) goto Label_1011; // 0x3ea JumpB
	var_31_int = 0; var_32_object = Obj(); // 0x3eb PushV
	var_32_object = var_19_object; // 0x3ec Mov
	TaskCall(1); // 0x3ed TaskCall
	func_40(var_33_object, var_31_int, var_32_object); // 0x3ee NEW_2
	TaskReturn(); // 0x3ef TaskReturn
	var_21_int = var_33_object; // 0x3f0 Mov
	goto Label_1026; // 0x3f2 Jump
	
Label_1026:
	var_220_int = 1000; // 0x402 PushI
	var_221_bool = var_220_int == var_21_int; // 0x403 Eq
	if(var_221_bool == 0) goto Label_1047; // 0x404 JumpB
	var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; // 0x405 PushV
	var_223_object = var_19_object; // 0x406 Mov
	var_224_float = 110.0; // 0x407 MovF
	func_1395(var_223_object, var_224_float); // 0x408 NEW_2
	var_252_bool = var_222_bool == 0; // 0x40a Not
	if(var_252_bool == 0) goto Label_1037; // 0x40b JumpB
	return 2; // 0x40c Return
	
Label_1037:
	var_253_object = Obj(); // 0x40d PushV
	var_253_object = var_19_object; // 0x40e Mov
	TaskCall(0); // 0x40f TaskCall
	func_0(var_253_object); // 0x410 NEW_2
	TaskReturn(); // 0x411 TaskReturn
	var_260_object = Obj(); // 0x413 PushV
	var_260_object = var_19_object; // 0x414 Mov
	func_1443(); // 0x415 NEW_2
	
Label_1047:
	return 2; // 0x417 Return
	
Label_1011:
	var_262_int = 0; // 0x3f3 PushV
	func_1823(var_262_int); // 0x3f4 NEW_2
	var_263_int = 2; // 0x3f6 PushI
	var_264_bool = var_262_int == var_263_int; // 0x3f7 Eq
	if(var_264_bool == 0) goto Label_1025; // 0x3f8 JumpB
	var_265_int = 0; var_266_object = Obj(); // 0x3f9 PushV
	var_266_object = var_19_object; // 0x3fa Mov
	TaskCall(3); // 0x3fb TaskCall
	func_555(var_267_object, var_265_int, var_266_object); // 0x3fc NEW_2
	TaskReturn(); // 0x3fd TaskReturn
	var_21_int = var_267_object; // 0x3fe Mov
	goto Label_1026; // 0x400 Jump
	
Label_1025:
	return 2; // 0x401 Return
}


task_5_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0; // 0x418 PushV
	func_1530(var_19_int); // 0x419 NEW_2
	var_25_bool = var_7_object != var_19_int; // 0x41b Neq
	if(var_25_bool == 0) goto Label_1060; // 0x41c JumpB
	func_1760(); // 0x41e NEW_2
	var_48_int = 0; // 0x420 PushV
	func_1530(var_48_int); // 0x421 NEW_2
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
	func_1497(var_26_object); // 0x463 NEW_2
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
	func_1479(var_36_object); // 0x4a0 NEW_2
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
	func_1530(var_19_int); // 0x3d5 NEW_2
	var_7_object = var_19_int; // 0x3d6 TMov
	func_1760(); // 0x3d9 NEW_2
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
	var_255_bool = 0; // 0x4 PushV
	func_1837(var_255_bool); // 0x5 NEW_2
	if(var_255_bool == 0) goto Label_15; // 0x7 JumpB
	var_256_string = ""; // 0x8 PushV
	var_256_string = "Neutral"; // 0x9 MovS
	func_1448(var_256_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_257_bool = var_0_bool; // 0x15 PushT
	if(var_257_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_258_string = "all"; // 0x11 PushS
	var_259_string = "idle"; // 0x12 PushS
	PlayAnimation(var_258_string, var_259_string); // 0x13 Func
}


func_1539(var_87_string, var_88_int)
{
	var_89_string = ""; var_90_string = ""; // 0x603 PushV
	var_90_string = "idle"; // 0x604 MovS
	var_91_int = var_88_int; // 0x605 Push
	if(var_91_int == 0) goto Label_1544; // 0x606 JumpB
	var_90_string = var_90_string + var_88_int; // 0x607 Add2
	
Label_1544:
	var_87_string = var_90_string; // 0x608 Mov
	return 2; // 0x609 Return
}


func_1667(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj(); // 0x684 PushV
	var_114_object = var_112_object; // 0x685 Mov
	func_1677(var_114_object); // 0x686 NEW_2
	if(var_113_bool == 0) goto Label_1675; // 0x688 JumpB
	var_111_bool = 1; // 0x689 MovB
	return 0; // 0x68a Return
	
Label_1675:
	var_111_bool = 0; // 0x68b MovB
	return 0; // 0x68c Return
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


func_1288(var_106_bool)
{
	var_106_bool = 1; // 0x508 MovB
	return 0; // 0x509 Return
}


func_1801(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0; // 0x709 PushV
	GetInvItemByName(var_35_int, var_33_string); // 0x70a Func
	var_32_int = var_35_int; // 0x70c Mov
	return 2; // 0x70d Return
}


func_1290()
{
	StopAnimation(); // 0x50a Func
	StopGroup0(); // 0x50c Func
	return 0; // 0x50e Return
}


func_1546(var_81_int)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0; // 0x60a PushV
	var_84_int = 0; // 0x60b MovI
	
Label_1548:
	var_86_string = "all"; // 0x60c PushS
	var_87_string = ""; var_88_int = 0; // 0x60d PushV
	var_88_int = var_84_int; // 0x60e Mov
	func_1539(var_87_string, var_88_int); // 0x60f NEW_2
	HasAnimation(var_85_bool, var_86_string, var_87_string); // 0x611 Func
	var_92_bool = var_85_bool == 0; // 0x613 Not
	if(var_92_bool == 0) goto Label_1558; // 0x614 JumpB
	goto Label_1561; // 0x615 Jump
	
Label_1561:
	var_81_int = var_84_int; // 0x619 Mov
	return 4; // 0x61a Return
	
Label_1558:
	var_93_int = 1; // 0x616 PushI
	var_84_int = var_84_int + var_93_int; // 0x617 Add2
	goto Label_1548; // 0x618 Jump
}


func_1677(var_113_bool)
{
	var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0; // 0x68d PushV
	var_119_int = 0; // 0x68e PushV
	func_1530(var_119_int); // 0x68f NEW_2
	var_117_int = var_119_int; // 0x690 Mov
	var_125_string = "Gatherer1_"; // 0x692 PushS
	var_126_int = var_125_string + var_117_int; // 0x693 Add
	GetVariable(var_126_int, var_118_int); // 0x694 Func
	var_127_int = 0; // 0x696 PushI
	var_113_bool = var_118_int != var_127_int; // 0x697 Neq2
	return 4; // 0x698 Return
}


func_1806(var_94_int)
{
	var_95_int = 0; var_96_int = 0; // 0x70e PushV
	var_97_string = "branch"; // 0x70f PushS
	GetVariable(var_97_string, var_96_int); // 0x710 Func
	var_98_int = 0; // 0x712 PushI
	var_99_bool = var_96_int == var_98_int; // 0x713 Eq
	if(var_99_bool == 0) goto Label_1816; // 0x714 JumpB
	var_94_int = 1; // 0x715 MovI
	return 2; // 0x716 Return
	
Label_1816:
	var_100_int = 1; // 0x718 PushI
	var_101_bool = var_96_int == var_100_int; // 0x719 Eq
	if(var_101_bool == 0) goto Label_1821; // 0x71a JumpB
	var_94_int = 2; // 0x71b MovI
	return 2; // 0x71c Return
	
Label_1821:
	var_94_int = 3; // 0x71d MovI
	return 2; // 0x71e Return
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


func_1303(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0; // 0x517 PushV
	IsLoaded(var_60_bool); // 0x518 Func
	var_58_bool = var_60_bool; // 0x51a Mov
	return 2; // 0x51b Return
}


func_1689()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x699 PushV
	var_51_int = 511; // 0x69a PushI
	var_52_int = 2; // 0x69b PushI
	var_53_int = 529710; // 0x69c PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0x69d Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0x69f PushV
	var_55_object = var_50_object; // 0x6a0 Mov
	var_56_int = 507; // 0x6a1 MovI
	func_1715(var_54_bool, var_55_object, var_56_int); // 0x6a2 NEW_2
	return 2; // 0x6a4 Return
}


func_1563()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; // 0x61b PushV
	var_31_int = 0; // 0x61c PushV
	func_1530(var_31_int); // 0x61d NEW_2
	var_29_int = var_31_int; // 0x61e Mov
	var_37_string = "Gatherer1_"; // 0x620 PushS
	var_38_int = var_37_string + var_29_int; // 0x621 Add
	var_39_int = 1; // 0x622 PushI
	SetVariable(var_38_int, var_39_int); // 0x623 Func
	var_40_string = "blood"; // 0x625 PushS
	var_41_int = 1; // 0x626 PushI
	RemoveItemByType(var_30_int, var_40_string, var_41_int); // 0x627 ObjFunc
	return 4; // 0x629 Return
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
	func_1503(var_69_cvector, var_70_cvector); // 0x537 NEW_2
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
	var_82_bool = 1; // 0x547 PushB
	CameraTransit(var_60_cvector, var_58_cvector, var_82_bool); // 0x548 Func
	var_83_float = GetByIndex(var_59_cvector, 0); // 0x54a PushE
	var_84_float = GetByIndex(var_59_cvector, 2); // 0x54b PushE
	Rotate(var_83_float, var_84_float); // 0x54c Func
	var_85_bool = 0; // 0x54e PushV
	func_1837(var_85_bool); // 0x54f NEW_2
	if(var_85_bool == 0) goto Label_1363; // 0x551 JumpB
	goto Label_1371; // 0x552 Jump
	
Label_1371:
	CameraWaitForPlayFinish(); // 0x55b Func
	ResumeWorld(); // 0x55d Func
	var_42_bool = 1; // 0x55f MovB
	return 18; // 0x560 Return
	
Label_1363:
	var_86_string = "head"; // 0x553 PushS
	HasAnimationTrack(var_62_bool, var_86_string); // 0x554 Func
	var_87_bool = var_62_bool; // 0x556 Push
	if(var_87_bool == 0) goto Label_1371; // 0x557 JumpB
	var_88_string = "head"; // 0x558 PushS
	LookAsyncCamera(var_88_string); // 0x559 Func
}


func_1823(var_25_int)
{
	var_26_int = 0; var_27_int = 0; // 0x71f PushV
	var_28_string = "branch"; // 0x720 PushS
	GetVariable(var_28_string, var_27_int); // 0x721 Func
	var_25_int = var_27_int; // 0x723 Mov
	return 2; // 0x724 Return
}


func_1443()
{
	var_261_bool = 1; // 0x5a4 PushB
	CameraSwitchToNormal(var_261_bool); // 0x5a5 Func
	return 0; // 0x5a7 Return
}


func_1829(var_91_int)
{
	var_91_int = 521048; // 0x725 MovI
	return 0; // 0x726 Return
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


func_1831(var_90_int)
{
	var_90_int = 521047; // 0x727 MovI
	return 0; // 0x728 Return
}


func_1448(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0; // 0x5a8 PushV
	lshHasAnimation(var_169_bool, var_165_string); // 0x5a9 Func
	var_172_bool = var_169_bool; // 0x5ab Push
	if(var_172_bool == 0) goto Label_1459; // 0x5ac JumpB
	lshGetAnimTimes(var_165_string, var_170_float, var_171_float); // 0x5ad Func
	var_173_bool = 0; // 0x5af PushB
	lshPlayAnimation(var_170_float, var_171_float, var_173_bool); // 0x5b0 Func
	goto Label_1463; // 0x5b2 Jump
	
Label_1463:
	return 6; // 0x5b7 Return
	
Label_1459:
	var_174_string = "Can't find lsh animation : "; // 0x5b3 PushS
	var_175_int = var_174_string + var_165_string; // 0x5b4 Add
	Trace(var_175_int); // 0x5b5 Func
}


func_1833(var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png"; // 0x729 MovS
	return 0; // 0x72a Return
}


func_1578()
{
	var_27_string = "ookGatherer1"; // 0x62b PushS
	var_28_int = 1; // 0x62c PushI
	SetVariable(var_27_string, var_28_int); // 0x62d Func
	return 0; // 0x62f Return
}


func_1835(var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png"; // 0x72b MovS
	return 0; // 0x72c Return
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


func_1837(var_85_bool)
{
	var_85_bool = 0; // 0x72d MovB
	return 0; // 0x72e Return
}


func_40(var_0_bool, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x28 PushV
	var_0_bool = var_32_object; // 0x29 TMov
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0; // 0x2a PushV
	var_43_object = var_32_object; // 0x2b Mov
	var_44_float = 110.0; // 0x2c MovF
	func_1308(var_43_object, var_44_float); // 0x2d NEW_2
	var_89_bool = var_42_bool == 0; // 0x2f Not
	if(var_89_bool == 0) goto Label_51; // 0x30 JumpB
	var_31_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_38_object); // 0x33 Func
	var_90_int = 0; // 0x35 PushV
	func_1831(var_90_int); // 0x36 NEW_2
	SetNPCName(var_90_int); // 0x38 ObjFunc
	var_91_int = 0; // 0x3a PushV
	func_1829(var_91_int); // 0x3b NEW_2
	SetNPCDescription(var_91_int); // 0x3d ObjFunc
	var_92_string = ""; // 0x3f PushV
	func_1833(var_92_string); // 0x40 NEW_2
	SetPhoto(var_92_string); // 0x42 ObjFunc
	var_93_string = ""; // 0x44 PushV
	func_1835(var_93_string); // 0x45 NEW_2
	SetPhoto2(var_93_string); // 0x47 ObjFunc
	var_94_int = 0; // 0x49 PushV
	func_1806(var_94_int); // 0x4a NEW_2
	SetPlayerName(var_94_int); // 0x4c ObjFunc
	var_40_int = -1; // 0x4e MovI
	IsOverrideActive(var_39_bool); // 0x4f Func
	var_102_bool = var_39_bool; // 0x51 Push
	if(var_102_bool == 0) goto Label_85; // 0x52 JumpB
	var_31_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_38_object); // 0x55 Func
	var_103_object = Obj(); var_104_object = Obj(); // 0x57 PushV
	var_103_object = var_32_object; // 0x58 Mov
	var_104_object = var_38_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_41_bool); // 0x5e ObjFunc
	
Label_96:
	var_211_bool = var_41_bool == 0; // 0x60 Not
	if(var_211_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_41_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_212_object = Obj(); // 0x67 PushV
	var_212_object = var_32_object; // 0x68 Mov
	func_1377(); // 0x69 NEW_2
	StopDialog(var_38_object); // 0x6b Func
	GetReturnValue(var_40_int); // 0x6d ObjFunc
	var_31_int = var_40_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_555(var_0_bool, var_265_int, var_266_object)
{
	var_268_object = Obj(); var_269_bool = 0; var_270_int = 0; var_271_bool = 0; var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; // 0x22b PushV
	var_0_bool = var_266_object; // 0x22c TMov
	var_276_bool = 0; var_277_object = Obj(); var_278_float = 0; // 0x22d PushV
	var_277_object = var_266_object; // 0x22e Mov
	var_278_float = 110.0; // 0x22f MovF
	func_1308(var_277_object, var_278_float); // 0x230 NEW_2
	var_279_bool = var_276_bool == 0; // 0x232 Not
	if(var_279_bool == 0) goto Label_566; // 0x233 JumpB
	var_265_int = -2; // 0x234 MovI
	return 8; // 0x235 Return
	
Label_566:
	CreateDialog(var_272_object); // 0x236 Func
	var_280_int = 0; // 0x238 PushV
	func_1831(var_280_int); // 0x239 NEW_2
	SetNPCName(var_280_int); // 0x23b ObjFunc
	var_281_int = 0; // 0x23d PushV
	func_1829(var_281_int); // 0x23e NEW_2
	SetNPCDescription(var_281_int); // 0x240 ObjFunc
	var_282_string = ""; // 0x242 PushV
	func_1833(var_282_string); // 0x243 NEW_2
	SetPhoto(var_282_string); // 0x245 ObjFunc
	var_283_string = ""; // 0x247 PushV
	func_1835(var_283_string); // 0x248 NEW_2
	SetPhoto2(var_283_string); // 0x24a ObjFunc
	var_284_int = 0; // 0x24c PushV
	func_1806(var_284_int); // 0x24d NEW_2
	SetPlayerName(var_284_int); // 0x24f ObjFunc
	var_274_int = -1; // 0x251 MovI
	IsOverrideActive(var_273_bool); // 0x252 Func
	var_285_bool = var_273_bool; // 0x254 Push
	if(var_285_bool == 0) goto Label_600; // 0x255 JumpB
	var_265_int = -2; // 0x256 MovI
	return 8; // 0x257 Return
	
Label_600:
	DoDialog(var_272_object); // 0x258 Func
	var_286_object = Obj(); var_287_object = Obj(); // 0x25a PushV
	var_286_object = var_266_object; // 0x25b Mov
	var_287_object = var_272_object; // 0x25c Mov
	TaskCall(4); // 0x25d TaskCall
	func_629(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object); // 0x25e NEW_2
	TaskReturn(); // 0x25f TaskReturn
	IsDialogEnd(var_275_bool); // 0x261 ObjFunc
	
Label_611:
	var_332_bool = var_275_bool == 0; // 0x263 Not
	if(var_332_bool == 0) goto Label_618; // 0x264 JumpB
	sync(); // 0x265 Func
	IsDialogEnd(var_275_bool); // 0x267 ObjFunc
	goto Label_611; // 0x269 Jump
	
Label_618:
	var_333_object = Obj(); // 0x26a PushV
	var_333_object = var_266_object; // 0x26b Mov
	func_1377(); // 0x26c NEW_2
	StopDialog(var_272_object); // 0x26e Func
	GetReturnValue(var_274_int); // 0x270 ObjFunc
	var_265_int = var_274_int; // 0x272 Mov
	return 8; // 0x273 Return
}


func_1584()
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x630 PushV
	var_35_object = Obj(); // 0x631 PushV
	func_1743(var_35_object); // 0x632 NEW_2
	var_34_object = var_35_object; // 0x633 Mov
	var_42_string = "k2q04MorlokGotoAndrei"; // 0x635 PushS
	var_43_string = "pt_map_andrei"; // 0x636 PushS
	var_44_int = 0; // 0x637 PushI
	var_45_int = 539378; // 0x638 PushI
	var_46_float = 0; // 0x639 PushV
	func_1525(var_46_float); // 0x63a NEW_2
	AddMark(var_42_string, var_43_string, var_44_int, var_45_int, var_46_float); // 0x63c ObjFunc
	func_1689(); // 0x63f NEW_2
	return 2; // 0x641 Return
}


func_1715(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x6b3 PushV
	var_63_object = Obj(); // 0x6b4 PushV
	func_1702(var_63_object); // 0x6b5 NEW_2
	var_60_object = var_63_object; // 0x6b6 Mov
	Find(var_56_int, var_61_object); // 0x6b8 ObjFunc
	var_68_bool = var_61_object == 0; // 0x6ba Not
	if(var_68_bool == 0) goto Label_1730; // 0x6bb JumpB
	var_69_string = "Can't find diary parent with id: "; // 0x6bc PushS
	var_70_int = var_69_string + var_56_int; // 0x6bd Add
	Trace(var_70_int); // 0x6be Func
	var_54_bool = 0; // 0x6c0 MovB
	return 6; // 0x6c1 Return
	
Label_1730:
	AddChild(var_55_object); // 0x6c2 ObjFunc
	var_71_int = 7; // 0x6c4 PushI
	SendWorldWndMessage(var_71_int); // 0x6c5 Func
	GetCategory(var_62_int); // 0x6c7 ObjFunc
	SetDiarySection(var_62_int); // 0x6c9 Func
	var_54_bool = 0; // 0x6cb MovB
	return 6; // 0x6cc Return
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
	func_1497(var_28_object); // 0x446 NEW_2
	RemoveActor(var_28_object); // 0x448 Func
	
Label_1098:
	return 0; // 0x44a Return
}


func_1464(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x5b8 PushV
	lshHasAnimation(var_150_bool, var_143_string); // 0x5b9 Func
	var_153_bool = var_150_bool; // 0x5bb Push
	if(var_153_bool == 0) goto Label_1474; // 0x5bc JumpB
	lshGetAnimTimes(var_143_string, var_151_float, var_152_float); // 0x5bd Func
	lshPlayAnimation(var_151_float, var_152_float, var_144_bool); // 0x5bf Func
	goto Label_1478; // 0x5c1 Jump
	
Label_1478:
	return 6; // 0x5c6 Return
	
Label_1474:
	var_154_string = "Can't find lsh animation : "; // 0x5c2 PushS
	var_155_int = var_154_string + var_143_string; // 0x5c3 Add
	Trace(var_155_int); // 0x5c4 Func
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
	func_1546(var_81_int); // 0x4c3 NEW_2
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
	func_1539(var_103_string, var_104_int); // 0x4df NEW_2
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


func_706(var_2_object, var_293_string)
{
	var_294_bool = 0; // 0x2c3 PushV
	func_1837(var_294_bool); // 0x2c4 NEW_2
	var_295_bool = var_294_bool == 0; // 0x2c6 Not
	if(var_295_bool == 0) goto Label_713; // 0x2c7 JumpB
	return 0; // 0x2c8 Return
	
Label_713:
	var_296_bool = var_293_string == var_2_object; // 0x2c9 Eq
	if(var_296_bool == 0) goto Label_716; // 0x2ca JumpB
	return 0; // 0x2cb Return
	
Label_716:
	var_297_string = ""; var_298_bool = 0; // 0x2cc PushV
	var_297_string = var_293_string; // 0x2cd Mov
	var_299_string = ""; // 0x2ce PushS
	var_300_bool = var_293_string == var_299_string; // 0x2cf Eq
	if(var_300_bool == 0) goto Label_723; // 0x2d0 JumpB
	var_298_bool = 0; // 0x2d1 MovB
	goto Label_724; // 0x2d2 Jump
	
Label_724:
	func_1464(var_297_string, var_298_bool); // 0x2d4 NEW_2
	var_2_object = var_293_string; // 0x2d6 TMov
	return 0; // 0x2d7 Return
	
Label_723:
	var_298_bool = 1; // 0x2d3 MovB
}


func_1603()
{
	var_55_string = "oobSysGatherer1_1"; // 0x644 PushS
	var_56_int = 1; // 0x645 PushI
	SetVariable(var_55_string, var_56_int); // 0x646 Func
	return 0; // 0x648 Return
}


func_1479(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0x5c7 PushV
	GetEyesHeight(var_39_float); // 0x5c8 ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0x5ca MovV
	var_41_float = GetByIndex(var_40_cvector, 1); // 0x5cb PushE
	var_41_float = var_39_float; // 0x5cc Mov
	SetByIndex(var_40_cvector, 1) = var_41_float; // 0x5cd PopE
	var_42_string = "head"; // 0x5ce PushS
	LookAsync(var_36_object, var_42_string, var_40_cvector); // 0x5cf Func
	return 4; // 0x5d1 Return
}


func_1609()
{
	var_44_string = "playsound"; // 0x64a PushS
	var_45_string = "giveitem"; // 0x64b PushS
	TriggerWorld(var_44_string, var_45_string); // 0x64c Func
	return 0; // 0x64e Return
}


func_1615()
{
	var_50_int = 1000; // 0x650 PushI
	SetReturnValue(var_50_int); // 0x651 ObjFunc
	return 0; // 0x653 Return
}


func_1743(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x6cf PushV
	GetMainOutdoorScene(var_38_object); // 0x6d0 Func
	var_40_bool = var_38_object == 0; // 0x6d2 NullEq
	if(var_40_bool == 0) goto Label_1754; // 0x6d3 JumpB
	var_41_string = "Can't find main outdoor scene"; // 0x6d4 PushS
	Trace(var_41_string); // 0x6d5 Func
	var_39_object = 0; // 0x6d7 SetNull
	var_35_object = var_39_object; // 0x6d8 Mov
	return 4; // 0x6d9 Return
	
Label_1754:
	GetMap(var_39_object); // 0x6da ObjFunc
	var_35_object = var_39_object; // 0x6dc Mov
	return 4; // 0x6dd Return
}


func_1490()
{
	var_22_bool = 0; // 0x5d2 PushV
	func_1837(var_22_bool); // 0x5d3 NEW_2
	if(var_22_bool == 0) goto Label_1496; // 0x5d5 JumpB
	lshStopSpeech(); // 0x5d6 Func
	
Label_1496:
	return 0; // 0x5d8 Return
}


func_1620(var_303_bool)
{
	var_305_int = 0; var_306_string = ""; // 0x655 PushV
	var_306_string = "k2q04"; // 0x656 MovS
	func_1513(var_305_int, var_306_string); // 0x657 NEW_2
	var_307_int = 2; // 0x659 PushI
	var_308_bool = var_305_int == var_307_int; // 0x65a Eq
	if(var_308_bool == 0) goto Label_1630; // 0x65b JumpB
	var_303_bool = 1; // 0x65c MovB
	return 0; // 0x65d Return
	
Label_1630:
	var_303_bool = 0; // 0x65e MovB
	return 0; // 0x65f Return
}


func_1497(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj(); // 0x5d9 PushV
	self(var_28_object); // 0x5da Func
	var_26_object = var_28_object; // 0x5dc Mov
	return 2; // 0x5dd Return
}


func_1503(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0; // 0x5df PushV
	var_74_int = var_70_cvector | var_70_cvector; // 0x5e0 Or
	var_73_float = sqrt(var_74_int); // 0x5e1 Sqrt2
	var_75_float = 0.0; // 0x5e2 PushF
	var_76_bool = var_73_float < var_75_float; // 0x5e3 LT
	if(var_76_bool == 0) goto Label_1511; // 0x5e4 JumpB
	var_69_cvector = CVector(0.0, 0.0, 0.0); // 0x5e5 MovV
	return 2; // 0x5e6 Return
	
Label_1511:
	var_69_cvector = var_70_cvector / var_70_cvector; // 0x5e7 Div2
	return 2; // 0x5e8 Return
}


func_1632(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x661 PushV
	var_312_string = "ookGatherer1"; // 0x662 MovS
	func_1513(var_311_int, var_312_string); // 0x663 NEW_2
	var_313_int = 0; // 0x665 PushI
	var_314_bool = var_311_int == var_313_int; // 0x666 Eq
	if(var_314_bool == 0) goto Label_1642; // 0x667 JumpB
	var_309_bool = 1; // 0x668 MovB
	return 0; // 0x669 Return
	
Label_1642:
	var_309_bool = 0; // 0x66a MovB
	return 0; // 0x66b Return
}


func_1377()
{
	var_213_bool = 0; var_214_bool = 0; // 0x561 PushV
	var_215_bool = 1; // 0x562 PushB
	CameraSwitchToNormal(var_215_bool); // 0x563 Func
	var_216_bool = 0; // 0x565 PushV
	func_1837(var_216_bool); // 0x566 NEW_2
	if(var_216_bool == 0) goto Label_1386; // 0x568 JumpB
	goto Label_1394; // 0x569 Jump
	
Label_1394:
	return 2; // 0x572 Return
	
Label_1386:
	var_217_string = "head"; // 0x56a PushS
	HasAnimationTrack(var_214_bool, var_217_string); // 0x56b Func
	var_218_bool = var_214_bool; // 0x56d Push
	if(var_218_bool == 0) goto Label_1394; // 0x56e JumpB
	var_219_string = "head"; // 0x56f PushS
	UnlookAsync(var_219_string); // 0x570 Func
}


func_1760()
{
	var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; // 0x6e0 PushV
	var_29_int = 0; // 0x6e1 PushI
	ClearSubContainer(var_29_int); // 0x6e2 Func
	var_30_int = 15; // 0x6e4 PushI
	irand(var_28_int, var_30_int); // 0x6e5 Func
	var_31_int = 5; // 0x6e7 PushI
	var_28_int = var_28_int + var_31_int; // 0x6e8 Add2
	var_32_int = 0; var_33_string = ""; // 0x6e9 PushV
	var_33_string = "grass_black_tvir"; // 0x6ea MovS
	func_1801(var_32_int, var_33_string); // 0x6eb NEW_2
	var_36_int = 0; // 0x6ed PushI
	AddItem(var_27_bool, var_32_int, var_36_int, var_28_int); // 0x6ee Func
	var_37_int = 15; // 0x6f0 PushI
	irand(var_28_int, var_37_int); // 0x6f1 Func
	var_38_int = 5; // 0x6f3 PushI
	var_28_int = var_28_int + var_38_int; // 0x6f4 Add2
	var_39_int = 0; var_40_string = ""; // 0x6f5 PushV
	var_40_string = "grass_blood_tvir"; // 0x6f6 MovS
	func_1801(var_39_int, var_40_string); // 0x6f7 NEW_2
	var_41_int = 0; // 0x6f9 PushI
	AddItem(var_27_bool, var_39_int, var_41_int, var_28_int); // 0x6fa Func
	var_42_int = 15; // 0x6fc PushI
	irand(var_28_int, var_42_int); // 0x6fd Func
	var_43_int = 5; // 0x6ff PushI
	var_28_int = var_28_int + var_43_int; // 0x700 Add2
	var_44_int = 0; var_45_string = ""; // 0x701 PushV
	var_45_string = "grass_brown_tvir"; // 0x702 MovS
	func_1801(var_44_int, var_45_string); // 0x703 NEW_2
	var_46_int = 0; // 0x705 PushI
	AddItem(var_27_bool, var_44_int, var_46_int, var_28_int); // 0x706 Func
	return 4; // 0x708 Return
}


func_248(var_2_object, var_139_string)
{
	var_140_bool = 0; // 0xf9 PushV
	func_1837(var_140_bool); // 0xfa NEW_2
	var_141_bool = var_140_bool == 0; // 0xfc Not
	if(var_141_bool == 0) goto Label_255; // 0xfd JumpB
	return 0; // 0xfe Return
	
Label_255:
	var_142_bool = var_139_string == var_2_object; // 0xff Eq
	if(var_142_bool == 0) goto Label_258; // 0x100 JumpB
	return 0; // 0x101 Return
	
Label_258:
	var_143_string = ""; var_144_bool = 0; // 0x102 PushV
	var_143_string = var_139_string; // 0x103 Mov
	var_145_string = ""; // 0x104 PushS
	var_146_bool = var_139_string == var_145_string; // 0x105 Eq
	if(var_146_bool == 0) goto Label_265; // 0x106 JumpB
	var_144_bool = 0; // 0x107 MovB
	goto Label_266; // 0x108 Jump
	
Label_266:
	func_1464(var_143_string, var_144_bool); // 0x10a NEW_2
	var_2_object = var_139_string; // 0x10c TMov
	return 0; // 0x10d Return
	
Label_265:
	var_144_bool = 1; // 0x109 MovB
}


func_1128(var_25_bool)
{
	var_25_bool = 1; // 0x468 MovB
	return 0; // 0x469 Return
}


func_1513(var_199_int, var_200_string)
{
	var_201_int = 0; var_202_int = 0; // 0x5e9 PushV
	GetVariable(var_200_string, var_202_int); // 0x5ea Func
	var_199_int = var_202_int; // 0x5ec Mov
	return 2; // 0x5ed Return
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


func_1644(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x66d PushV
	var_200_string = "oobSysGatherer1_1"; // 0x66e MovS
	func_1513(var_199_int, var_200_string); // 0x66f NEW_2
	var_203_int = 0; // 0x671 PushI
	var_204_bool = var_199_int == var_203_int; // 0x672 Eq
	if(var_204_bool == 0) goto Label_1654; // 0x673 JumpB
	var_197_bool = 1; // 0x674 MovB
	return 0; // 0x675 Return
	
Label_1654:
	var_197_bool = 0; // 0x676 MovB
	return 0; // 0x677 Return
}


func_1518(var_131_bool, var_133_string)
{
	var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_bool = 0; // 0x5ee PushV
	GetInvItemByName(var_136_int, var_133_string); // 0x5ef Func
	HasItem(var_136_int, var_137_bool); // 0x5f1 ObjFunc
	var_131_bool = var_137_bool; // 0x5f3 Mov
	return 4; // 0x5f4 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_103_object, var_104_object)
{
	var_0_bool = var_104_object; // 0x73 TMov
	var_1_object = var_103_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_109_int = 1; // 0x76 PushI
	if(var_109_int == 0) goto Label_218; // 0x77 JumpB
	var_110_bool = 0; // 0x78 PushV
	var_110_bool = 0; // 0x79 MovB
	var_111_bool = 0; var_112_object = Obj(); // 0x7a PushV
	var_112_object = var_1_object; // 0x7b MovT
	func_1667(var_111_bool, var_112_object); // 0x7c NEW_2
	var_128_bool = var_111_bool == 0; // 0x7e Not
	if(var_128_bool == 0) goto Label_135; // 0x7f JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0x80 PushV
	var_130_object = var_1_object; // 0x81 MovT
	func_1656(var_129_bool, var_130_object); // 0x82 NEW_2
	var_138_bool = var_129_bool == 0; // 0x84 Not
	if(var_138_bool == 0) goto Label_135; // 0x85 JumpB
	var_110_bool = 1; // 0x86 MovB
	
Label_135:
	if(var_110_bool == 0) goto Label_156; // 0x87 JumpB
	var_139_string = ""; // 0x88 PushV
	var_139_string = "Neutral"; // 0x89 MovS
	func_248(var_104_object, var_139_string); // 0x8a NEW_2
	var_156_int = 518145; // 0x8c PushI
	SetMessage(var_156_int); // 0x8d TObjFunc
	ClearReplies(); // 0x8f TObjFunc
	var_157_int = 518146; // 0x91 PushI
	var_158_int = 19260; // 0x92 PushI
	var_159_int = 19259; // 0x93 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x94 TObjFunc
	var_160_int = 529952; // 0x96 PushI
	var_161_int = -1; // 0x97 PushI
	var_162_int = 31336; // 0x98 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x99 TObjFunc
	goto Label_218; // 0x9b Jump
	
Label_218:
	var_163_bool = 0; // 0xda PushV
	func_1837(var_163_bool); // 0xdb NEW_2
	if(var_163_bool == 0) goto Label_233; // 0xdd JumpB
	
Label_222:
	lshWaitForAnimEnd(); // 0xde Func
	var_164_object = var_3_object; // 0xe0 PushT
	if(var_164_object == 0) goto Label_227; // 0xe1 JumpB
	goto Label_232; // 0xe2 Jump
	
Label_232:
	goto Label_247; // 0xe8 Jump
	
Label_247:
	return 0; // 0xf7 Return
	
Label_227:
	var_165_string = ""; // 0xe3 PushV
	var_165_string = var_2_object; // 0xe4 MovT
	func_1448(var_165_string); // 0xe5 NEW_2
	goto Label_222; // 0xe7 Jump
	
Label_233:
	var_176_string = "all"; // 0xe9 PushS
	var_177_string = "idle"; // 0xea PushS
	PlayAnimation(var_176_string, var_177_string); // 0xeb Func
	
Label_237:
	WaitForAnimEnd(); // 0xed Func
	var_178_object = var_3_object; // 0xef PushT
	if(var_178_object == 0) goto Label_242; // 0xf0 JumpB
	goto Label_247; // 0xf1 Jump
	
Label_242:
	var_179_string = "all"; // 0xf2 PushS
	var_180_string = "idle"; // 0xf3 PushS
	PlayAnimation(var_179_string, var_180_string); // 0xf4 Func
	goto Label_237; // 0xf6 Jump
	
Label_156:
	var_181_bool = 0; // 0x9c PushV
	var_181_bool = 0; // 0x9d MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x9e PushV
	var_183_object = var_1_object; // 0x9f MovT
	func_1656(var_182_bool, var_183_object); // 0xa0 NEW_2
	if(var_182_bool == 0) goto Label_170; // 0xa2 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0xa3 PushV
	var_185_object = var_1_object; // 0xa4 MovT
	func_1667(var_184_bool, var_185_object); // 0xa5 NEW_2
	var_186_bool = var_184_bool == 0; // 0xa7 Not
	if(var_186_bool == 0) goto Label_170; // 0xa8 JumpB
	var_181_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_181_bool == 0) goto Label_186; // 0xaa JumpB
	var_187_string = ""; // 0xab PushV
	var_187_string = "Neutral"; // 0xac MovS
	func_248(var_104_object, var_187_string); // 0xad NEW_2
	var_188_int = 518150; // 0xaf PushI
	SetMessage(var_188_int); // 0xb0 TObjFunc
	ClearReplies(); // 0xb2 TObjFunc
	var_189_int = 518151; // 0xb4 PushI
	var_190_int = 19265; // 0xb5 PushI
	var_191_int = 19264; // 0xb6 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xb7 TObjFunc
	goto Label_218; // 0xb9 Jump
	
Label_186:
	var_192_string = ""; // 0xba PushV
	var_192_string = "Neutral"; // 0xbb MovS
	func_248(var_104_object, var_192_string); // 0xbc NEW_2
	var_193_int = 518155; // 0xbe PushI
	SetMessage(var_193_int); // 0xbf TObjFunc
	ClearReplies(); // 0xc1 TObjFunc
	var_194_int = 518156; // 0xc3 PushI
	var_195_int = -1; // 0xc4 PushI
	var_196_int = 19269; // 0xc5 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0xc6 TObjFunc
	var_197_bool = 0; var_198_object = Obj(); // 0xc8 PushV
	var_198_object = var_1_object; // 0xc9 MovT
	func_1644(var_198_object); // 0xca NEW_2
	if(var_197_bool == 0) goto Label_210; // 0xcc JumpB
	var_205_int = 518199; // 0xcd PushI
	var_206_int = 19313; // 0xce PushI
	var_207_int = 19312; // 0xcf PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0xd0 TObjFunc
	
Label_210:
	var_208_int = 518157; // 0xd2 PushI
	var_209_int = -1; // 0xd3 PushI
	var_210_int = 19270; // 0xd4 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xd5 TObjFunc
	goto Label_218; // 0xd7 Jump
}


func_1395(var_222_bool, var_224_float)
{
	var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_float = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_bool = 0; // 0x573 PushV
	GetPosition(var_234_cvector); // 0x574 ObjFunc
	GetEyesHeight(var_233_float); // 0x576 ObjFunc
	var_241_float = GetByIndex(var_234_cvector, 1); // 0x578 PushE
	var_241_float = var_241_float + var_233_float; // 0x579 Add2
	SetByIndex(var_234_cvector, 1) = var_241_float; // 0x57a PopE
	GetPosition(var_235_cvector); // 0x57b Func
	GetEyesHeight(var_233_float); // 0x57d Func
	var_242_float = GetByIndex(var_235_cvector, 1); // 0x57f PushE
	var_242_float = var_242_float + var_233_float; // 0x580 Add2
	SetByIndex(var_235_cvector, 1) = var_242_float; // 0x581 PopE
	var_236_cvector = var_234_cvector - var_235_cvector; // 0x582 Sub2
	var_243_float = GetByIndex(var_236_cvector, 1); // 0x583 PushE
	var_243_float = 0; // 0x584 MovI
	SetByIndex(var_236_cvector, 1) = var_243_float; // 0x585 PopE
	var_244_int = var_236_cvector | var_236_cvector; // 0x586 Or
	var_245_float = sqrt(var_244_int); // 0x587 Sqrt
	var_236_cvector = var_236_cvector / var_236_cvector; // 0x588 Div2
	var_237_cvector = -var_236_cvector; // 0x589 Neg2
	var_246_float = var_236_cvector * var_224_float; // 0x58a Mult
	var_247_cvector = CVector(0.0, 10.0, 0.0); // 0x58b PushVec
	var_238_cvector = var_246_float - var_247_cvector; // 0x58c Sub2
	var_239_cvector = var_235_cvector + var_238_cvector; // 0x58d Add2
	IsOverrideActive(var_240_bool); // 0x58e Func
	var_248_bool = var_240_bool; // 0x590 Push
	if(var_248_bool == 0) goto Label_1428; // 0x591 JumpB
	var_222_bool = 0; // 0x592 MovB
	return 16; // 0x593 Return
	
Label_1428:
	StopWorld(); // 0x594 Func
	var_249_bool = 1; // 0x596 PushB
	CameraTransit(var_239_cvector, var_237_cvector, var_249_bool); // 0x597 Func
	var_250_float = GetByIndex(var_238_cvector, 0); // 0x599 PushE
	var_251_float = GetByIndex(var_238_cvector, 2); // 0x59a PushE
	Rotate(var_250_float, var_251_float); // 0x59b Func
	CameraWaitForPlayFinish(); // 0x59d Func
	ResumeWorld(); // 0x59f Func
	var_222_bool = 1; // 0x5a1 MovB
	return 16; // 0x5a2 Return
}


func_1702(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x6a6 PushV
	GetDiaryRoot(var_65_object); // 0x6a7 Func
	var_66_bool = var_65_object == 0; // 0x6a9 Not
	if(var_66_bool == 0) goto Label_1712; // 0x6aa JumpB
	var_67_string = "Can't retrieve diary root"; // 0x6ab PushS
	Trace(var_67_string); // 0x6ac Func
	var_63_object = 0; // 0x6ae MovB
	return 2; // 0x6af Return
	
Label_1712:
	var_63_object = var_65_object; // 0x6b0 Mov
	return 2; // 0x6b1 Return
}


func_629(var_0_bool, var_1_object, var_2_object, var_3_object, var_286_object, var_287_object)
{
	var_0_bool = var_287_object; // 0x276 TMov
	var_1_object = var_286_object; // 0x277 TMov
	var_3_object = 0; // 0x278 TMovB
	var_292_int = 1; // 0x279 PushI
	if(var_292_int == 0) goto Label_676; // 0x27a JumpB
	var_293_string = ""; // 0x27b PushV
	var_293_string = "Neutral"; // 0x27c MovS
	func_706(var_287_object, var_293_string); // 0x27d NEW_2
	var_301_int = 525385; // 0x27f PushI
	SetMessage(var_301_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_302_bool = 0; // 0x284 PushV
	var_302_bool = 0; // 0x285 MovB
	var_303_bool = 0; var_304_object = Obj(); // 0x286 PushV
	var_304_object = var_1_object; // 0x287 MovT
	func_1620(var_304_object); // 0x288 NEW_2
	if(var_303_bool == 0) goto Label_657; // 0x28a JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0x28b PushV
	var_310_object = var_1_object; // 0x28c MovT
	func_1632(var_310_object); // 0x28d NEW_2
	if(var_309_bool == 0) goto Label_657; // 0x28f JumpB
	var_302_bool = 1; // 0x290 MovB
	
Label_657:
	if(var_302_bool == 0) goto Label_663; // 0x291 JumpB
	var_315_int = 525387; // 0x292 PushI
	var_316_int = 40946; // 0x293 PushI
	var_317_int = 26755; // 0x294 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x295 TObjFunc
	
Label_663:
	var_318_int = 539023; // 0x297 PushI
	var_319_int = -1; // 0x298 PushI
	var_320_int = 40966; // 0x299 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x29a TObjFunc
	var_321_int = 539024; // 0x29c PushI
	var_322_int = -1; // 0x29d PushI
	var_323_int = 40967; // 0x29e PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x29f TObjFunc
	goto Label_676; // 0x2a1 Jump
	
Label_676:
	var_324_bool = 0; // 0x2a4 PushV
	func_1837(var_324_bool); // 0x2a5 NEW_2
	if(var_324_bool == 0) goto Label_691; // 0x2a7 JumpB
	
Label_680:
	lshWaitForAnimEnd(); // 0x2a8 Func
	var_325_object = var_3_object; // 0x2aa PushT
	if(var_325_object == 0) goto Label_685; // 0x2ab JumpB
	goto Label_690; // 0x2ac Jump
	
Label_690:
	goto Label_705; // 0x2b2 Jump
	
Label_705:
	return 0; // 0x2c1 Return
	
Label_685:
	var_326_string = ""; // 0x2ad PushV
	var_326_string = var_2_object; // 0x2ae MovT
	func_1448(var_326_string); // 0x2af NEW_2
	goto Label_680; // 0x2b1 Jump
	
Label_691:
	var_327_string = "all"; // 0x2b3 PushS
	var_328_string = "idle"; // 0x2b4 PushS
	PlayAnimation(var_327_string, var_328_string); // 0x2b5 Func
	
Label_695:
	WaitForAnimEnd(); // 0x2b7 Func
	var_329_object = var_3_object; // 0x2b9 PushT
	if(var_329_object == 0) goto Label_700; // 0x2ba JumpB
	goto Label_705; // 0x2bb Jump
	
Label_700:
	var_330_string = "all"; // 0x2bc PushS
	var_331_string = "idle"; // 0x2bd PushS
	PlayAnimation(var_330_string, var_331_string); // 0x2be Func
	goto Label_695; // 0x2c0 Jump
}


func_1525(var_46_float)
{
	var_47_float = 0; var_48_float = 0; // 0x5f5 PushV
	GetGameTime(var_48_float); // 0x5f6 Func
	var_46_float = var_48_float; // 0x5f8 Mov
	return 2; // 0x5f9 Return
}


func_1656(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj(); var_133_string = ""; // 0x679 PushV
	var_132_object = var_130_object; // 0x67a Mov
	var_133_string = "blood"; // 0x67b MovS
	func_1518(var_132_object, var_133_string); // 0x67c NEW_2
	if(var_131_bool == 0) goto Label_1665; // 0x67e JumpB
	var_129_bool = 1; // 0x67f MovB
	return 0; // 0x680 Return
	
Label_1665:
	var_129_bool = 0; // 0x681 MovB
	return 0; // 0x682 Return
}


func_1530(var_19_int)
{
	var_20_float = 0; var_21_float = 0; // 0x5fa PushV
	GetGameTime(var_21_float); // 0x5fb Func
	var_22_int = 1; // 0x5fd PushI
	var_23_int = 0; // 0x5fe PushV
	var_24_int = 24; // 0x5ff PushI
	var_23_int = var_21_float / var_21_float; // 0x600 Div2
	var_19_int = var_22_int + var_23_int; // 0x601 Add2
	return 2; // 0x602 Return
}


