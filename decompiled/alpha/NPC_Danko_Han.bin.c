task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_object = Obj(); // 0x24 PushV
	var_16_object = var_15_bool; // 0x25 Mov
	func_1869(var_16_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj(); // 0x2a PushV
	var_17_object = var_15_bool; // 0x2b Mov
	func_1363(var_17_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 1; // 0xc4 PushI
	if(var_17_int == 0) goto Label_481; // 0xc5 JumpB
	func_1458(); // 0xc7 Call
	var_19_int = 11509; // 0xc9 PushI
	var_20_bool = var_16_bool == var_19_int; // 0xca Eq
	if(var_20_bool == 0) goto Label_219; // 0xcb JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0xcc PushV
	var_21_object = var_1_object; // 0xcd MovT
	var_22_object = var_0_object; // 0xce MovT
	func_1539(); // 0xcf Call
	var_41_object = Obj(); var_42_object = Obj(); // 0xd1 PushV
	var_41_object = var_1_object; // 0xd2 MovT
	var_42_object = var_0_object; // 0xd3 MovT
	func_1537(); // 0xd4 Call
	var_43_object = Obj(); var_44_object = Obj(); // 0xd6 PushV
	var_43_object = var_1_object; // 0xd7 MovT
	var_44_object = var_0_object; // 0xd8 MovT
	func_1559(); // 0xd9 Call
	
Label_219:
	var_69_int = 11510; // 0xdb PushI
	var_70_bool = var_16_bool == var_69_int; // 0xdc Eq
	if(var_70_bool == 0) goto Label_237; // 0xdd JumpB
	var_71_object = Obj(); var_72_object = Obj(); // 0xde PushV
	var_71_object = var_1_object; // 0xdf MovT
	var_72_object = var_0_object; // 0xe0 MovT
	func_1539(); // 0xe1 Call
	var_73_object = Obj(); var_74_object = Obj(); // 0xe3 PushV
	var_73_object = var_1_object; // 0xe4 MovT
	var_74_object = var_0_object; // 0xe5 MovT
	func_1537(); // 0xe6 Call
	var_75_object = Obj(); var_76_object = Obj(); // 0xe8 PushV
	var_75_object = var_1_object; // 0xe9 MovT
	var_76_object = var_0_object; // 0xea MovT
	func_1559(); // 0xeb Call
	
Label_237:
	var_77_int = 11505; // 0xed PushI
	var_78_bool = var_16_bool == var_77_int; // 0xee Eq
	if(var_78_bool == 0) goto Label_255; // 0xef JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xf0 PushV
	var_79_object = var_1_object; // 0xf1 MovT
	var_80_object = var_0_object; // 0xf2 MovT
	func_1537(); // 0xf3 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0xf5 PushV
	var_81_object = var_1_object; // 0xf6 MovT
	var_82_object = var_0_object; // 0xf7 MovT
	func_1539(); // 0xf8 Call
	var_83_object = Obj(); var_84_object = Obj(); // 0xfa PushV
	var_83_object = var_1_object; // 0xfb MovT
	var_84_object = var_0_object; // 0xfc MovT
	func_1559(); // 0xfd Call
	
Label_255:
	var_85_int = 11498; // 0xff PushI
	var_86_bool = var_16_bool == var_85_int; // 0x100 Eq
	if(var_86_bool == 0) goto Label_273; // 0x101 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x102 PushV
	var_87_object = var_1_object; // 0x103 MovT
	var_88_object = var_0_object; // 0x104 MovT
	func_1537(); // 0x105 Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x107 PushV
	var_89_object = var_1_object; // 0x108 MovT
	var_90_object = var_0_object; // 0x109 MovT
	func_1539(); // 0x10a Call
	var_91_object = Obj(); var_92_object = Obj(); // 0x10c PushV
	var_91_object = var_1_object; // 0x10d MovT
	var_92_object = var_0_object; // 0x10e MovT
	func_1559(); // 0x10f Call
	
Label_273:
	var_93_int = 11488; // 0x111 PushI
	var_94_bool = var_15_string == var_93_int; // 0x112 Eq
	if(var_94_bool == 0) goto Label_305; // 0x113 JumpB
	var_95_bool = 0; // 0x114 PushV
	var_95_bool = 0; // 0x115 MovB
	var_96_bool = 0; var_97_object = Obj(); // 0x116 PushV
	var_97_object = var_1_object; // 0x117 MovT
	func_1627(var_97_object); // 0x118 Call
	if(var_96_bool == 0) goto Label_289; // 0x11a JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x11b PushV
	var_105_object = var_1_object; // 0x11c MovT
	func_1622(var_105_object); // 0x11d Call
	if(var_104_bool == 0) goto Label_289; // 0x11f JumpB
	var_95_bool = 1; // 0x120 MovB
	
Label_289:
	if(var_95_bool == 0) goto Label_305; // 0x121 JumpB
	var_106_string = ""; // 0x122 PushV
	var_106_string = "Neutral"; // 0x123 MovS
	func_179(var_16_bool, var_106_string); // 0x124 Call
	var_121_int = 10420; // 0x126 PushI
	SetMessage(var_121_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_122_int = 10421; // 0x12b PushI
	var_123_int = 11490; // 0x12c PushI
	var_124_int = 11489; // 0x12d PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x12e TObjFunc
	return 0; // 0x130 Return
	
Label_305:
	var_125_int = 11490; // 0x131 PushI
	var_126_bool = var_15_string == var_125_int; // 0x132 Eq
	if(var_126_bool == 0) goto Label_323; // 0x133 JumpB
	var_127_string = ""; // 0x134 PushV
	var_127_string = "Neutral"; // 0x135 MovS
	func_179(var_16_bool, var_127_string); // 0x136 Call
	var_128_int = 10422; // 0x138 PushI
	SetMessage(var_128_int); // 0x139 TObjFunc
	ClearReplies(); // 0x13b TObjFunc
	var_129_int = 10423; // 0x13d PushI
	var_130_int = 11492; // 0x13e PushI
	var_131_int = 11491; // 0x13f PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x140 TObjFunc
	return 0; // 0x142 Return
	
Label_323:
	var_132_int = 11492; // 0x143 PushI
	var_133_bool = var_15_string == var_132_int; // 0x144 Eq
	if(var_133_bool == 0) goto Label_341; // 0x145 JumpB
	var_134_string = ""; // 0x146 PushV
	var_134_string = "Neutral"; // 0x147 MovS
	func_179(var_16_bool, var_134_string); // 0x148 Call
	var_135_int = 10424; // 0x14a PushI
	SetMessage(var_135_int); // 0x14b TObjFunc
	ClearReplies(); // 0x14d TObjFunc
	var_136_int = 10425; // 0x14f PushI
	var_137_int = 11494; // 0x150 PushI
	var_138_int = 11493; // 0x151 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_139_int = 11494; // 0x155 PushI
	var_140_bool = var_15_string == var_139_int; // 0x156 Eq
	if(var_140_bool == 0) goto Label_359; // 0x157 JumpB
	var_141_string = ""; // 0x158 PushV
	var_141_string = "Neutral"; // 0x159 MovS
	func_179(var_16_bool, var_141_string); // 0x15a Call
	var_142_int = 10426; // 0x15c PushI
	SetMessage(var_142_int); // 0x15d TObjFunc
	ClearReplies(); // 0x15f TObjFunc
	var_143_int = 10427; // 0x161 PushI
	var_144_int = 11496; // 0x162 PushI
	var_145_int = 11495; // 0x163 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x164 TObjFunc
	return 0; // 0x166 Return
	
Label_359:
	var_146_int = 11496; // 0x167 PushI
	var_147_bool = var_15_string == var_146_int; // 0x168 Eq
	if(var_147_bool == 0) goto Label_382; // 0x169 JumpB
	var_148_string = ""; // 0x16a PushV
	var_148_string = "Neutral"; // 0x16b MovS
	func_179(var_16_bool, var_148_string); // 0x16c Call
	var_149_int = 10428; // 0x16e PushI
	SetMessage(var_149_int); // 0x16f TObjFunc
	ClearReplies(); // 0x171 TObjFunc
	var_150_int = 10429; // 0x173 PushI
	var_151_int = 11499; // 0x174 PushI
	var_152_int = 11497; // 0x175 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x176 TObjFunc
	var_153_int = 10430; // 0x178 PushI
	var_154_int = -1; // 0x179 PushI
	var_155_int = 11498; // 0x17a PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x17b TObjFunc
	return 0; // 0x17d Return
	
Label_382:
	var_156_int = 11499; // 0x17e PushI
	var_157_bool = var_15_string == var_156_int; // 0x17f Eq
	if(var_157_bool == 0) goto Label_405; // 0x180 JumpB
	var_158_string = ""; // 0x181 PushV
	var_158_string = "Neutral"; // 0x182 MovS
	func_179(var_16_bool, var_158_string); // 0x183 Call
	var_159_int = 10431; // 0x185 PushI
	SetMessage(var_159_int); // 0x186 TObjFunc
	ClearReplies(); // 0x188 TObjFunc
	var_160_int = 10432; // 0x18a PushI
	var_161_int = 11502; // 0x18b PushI
	var_162_int = 11500; // 0x18c PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x18d TObjFunc
	var_163_int = 10433; // 0x18f PushI
	var_164_int = 11502; // 0x190 PushI
	var_165_int = 11501; // 0x191 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_166_int = 11502; // 0x195 PushI
	var_167_bool = var_15_string == var_166_int; // 0x196 Eq
	if(var_167_bool == 0) goto Label_428; // 0x197 JumpB
	var_168_string = ""; // 0x198 PushV
	var_168_string = "Neutral"; // 0x199 MovS
	func_179(var_16_bool, var_168_string); // 0x19a Call
	var_169_int = 10434; // 0x19c PushI
	SetMessage(var_169_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_170_int = 10435; // 0x1a1 PushI
	var_171_int = 11504; // 0x1a2 PushI
	var_172_int = 11503; // 0x1a3 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x1a4 TObjFunc
	var_173_int = 10437; // 0x1a6 PushI
	var_174_int = -1; // 0x1a7 PushI
	var_175_int = 11505; // 0x1a8 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_176_int = 11504; // 0x1ac PushI
	var_177_bool = var_15_string == var_176_int; // 0x1ad Eq
	if(var_177_bool == 0) goto Label_446; // 0x1ae JumpB
	var_178_string = ""; // 0x1af PushV
	var_178_string = "Neutral"; // 0x1b0 MovS
	func_179(var_16_bool, var_178_string); // 0x1b1 Call
	var_179_int = 10436; // 0x1b3 PushI
	SetMessage(var_179_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_180_int = 10438; // 0x1b8 PushI
	var_181_int = 11508; // 0x1b9 PushI
	var_182_int = 11507; // 0x1ba PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_183_int = 11508; // 0x1be PushI
	var_184_bool = var_15_string == var_183_int; // 0x1bf Eq
	if(var_184_bool == 0) goto Label_469; // 0x1c0 JumpB
	var_185_string = ""; // 0x1c1 PushV
	var_185_string = "Neutral"; // 0x1c2 MovS
	func_179(var_16_bool, var_185_string); // 0x1c3 Call
	var_186_int = 10439; // 0x1c5 PushI
	SetMessage(var_186_int); // 0x1c6 TObjFunc
	ClearReplies(); // 0x1c8 TObjFunc
	var_187_int = 10440; // 0x1ca PushI
	var_188_int = -1; // 0x1cb PushI
	var_189_int = 11509; // 0x1cc PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1cd TObjFunc
	var_190_int = 10441; // 0x1cf PushI
	var_191_int = -1; // 0x1d0 PushI
	var_192_int = 11510; // 0x1d1 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1d2 TObjFunc
	return 0; // 0x1d4 Return
	
Label_469:
	var_3_string = 1; // 0x1d5 TMovB
	var_193_bool = 0; // 0x1d6 PushV
	func_1529(var_193_bool); // 0x1d7 Call
	if(var_193_bool == 0) goto Label_477; // 0x1d9 JumpB
	lshStopAnimation(); // 0x1da Func
	goto Label_479; // 0x1dc Jump
	
Label_479:
	return 0; // 0x1df Return
	
Label_477:
	StopAnimation(); // 0x1dd Func
	
Label_481:
	return 0; // 0x1e1 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	var_17_int = 1; // 0x285 PushI
	if(var_17_int == 0) goto Label_846; // 0x286 JumpB
	func_1458(); // 0x288 Call
	var_19_int = 13489; // 0x28a PushI
	var_20_bool = var_15_string == var_19_int; // 0x28b Eq
	if(var_20_bool == 0) goto Label_698; // 0x28c JumpB
	var_21_bool = 0; var_22_object = Obj(); // 0x28d PushV
	var_22_object = var_1_object; // 0x28e MovT
	func_1639(var_22_object); // 0x28f Call
	if(var_21_bool == 0) goto Label_683; // 0x291 JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0x292 PushV
	var_29_object = var_1_object; // 0x293 MovT
	var_30_object = var_0_object; // 0x294 MovT
	func_1575(); // 0x295 Call
	var_33_string = ""; // 0x297 PushV
	var_33_string = "Neutral"; // 0x298 MovS
	func_628(var_16_bool, var_33_string); // 0x299 Call
	var_48_int = 12330; // 0x29b PushI
	SetMessage(var_48_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_49_int = 12331; // 0x2a0 PushI
	var_50_int = 13491; // 0x2a1 PushI
	var_51_int = 13490; // 0x2a2 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0x2a3 TObjFunc
	var_52_int = 12336; // 0x2a5 PushI
	var_53_int = -1; // 0x2a6 PushI
	var_54_int = 13495; // 0x2a7 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x2a8 TObjFunc
	return 0; // 0x2aa Return
	
Label_683:
	var_55_string = ""; // 0x2ab PushV
	var_55_string = "Neutral"; // 0x2ac MovS
	func_628(var_16_bool, var_55_string); // 0x2ad Call
	var_56_int = 13781; // 0x2af PushI
	SetMessage(var_56_int); // 0x2b0 TObjFunc
	ClearReplies(); // 0x2b2 TObjFunc
	var_57_int = 13782; // 0x2b4 PushI
	var_58_int = -1; // 0x2b5 PushI
	var_59_int = 15018; // 0x2b6 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0x2b7 TObjFunc
	return 0; // 0x2b9 Return
	
Label_698:
	var_60_int = 13491; // 0x2ba PushI
	var_61_bool = var_15_string == var_60_int; // 0x2bb Eq
	if(var_61_bool == 0) goto Label_721; // 0x2bc JumpB
	var_62_string = ""; // 0x2bd PushV
	var_62_string = "Neutral"; // 0x2be MovS
	func_628(var_16_bool, var_62_string); // 0x2bf Call
	var_63_int = 12332; // 0x2c1 PushI
	SetMessage(var_63_int); // 0x2c2 TObjFunc
	ClearReplies(); // 0x2c4 TObjFunc
	var_64_int = 12333; // 0x2c6 PushI
	var_65_int = 13493; // 0x2c7 PushI
	var_66_int = 13492; // 0x2c8 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x2c9 TObjFunc
	var_67_int = 12337; // 0x2cb PushI
	var_68_int = 13497; // 0x2cc PushI
	var_69_int = 13496; // 0x2cd PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x2ce TObjFunc
	return 0; // 0x2d0 Return
	
Label_721:
	var_70_int = 13497; // 0x2d1 PushI
	var_71_bool = var_15_string == var_70_int; // 0x2d2 Eq
	if(var_71_bool == 0) goto Label_739; // 0x2d3 JumpB
	var_72_string = ""; // 0x2d4 PushV
	var_72_string = "Neutral"; // 0x2d5 MovS
	func_628(var_16_bool, var_72_string); // 0x2d6 Call
	var_73_int = 12338; // 0x2d8 PushI
	SetMessage(var_73_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_74_int = 12339; // 0x2dd PushI
	var_75_int = 13499; // 0x2de PushI
	var_76_int = 13498; // 0x2df PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x2e0 TObjFunc
	return 0; // 0x2e2 Return
	
Label_739:
	var_77_int = 13499; // 0x2e3 PushI
	var_78_bool = var_15_string == var_77_int; // 0x2e4 Eq
	if(var_78_bool == 0) goto Label_762; // 0x2e5 JumpB
	var_79_string = ""; // 0x2e6 PushV
	var_79_string = "Neutral"; // 0x2e7 MovS
	func_628(var_16_bool, var_79_string); // 0x2e8 Call
	var_80_int = 12340; // 0x2ea PushI
	SetMessage(var_80_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_81_int = 12341; // 0x2ef PushI
	var_82_int = -1; // 0x2f0 PushI
	var_83_int = 13500; // 0x2f1 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x2f2 TObjFunc
	var_84_int = 12342; // 0x2f4 PushI
	var_85_int = 13502; // 0x2f5 PushI
	var_86_int = 13501; // 0x2f6 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_87_int = 13502; // 0x2fa PushI
	var_88_bool = var_15_string == var_87_int; // 0x2fb Eq
	if(var_88_bool == 0) goto Label_780; // 0x2fc JumpB
	var_89_string = ""; // 0x2fd PushV
	var_89_string = "Neutral"; // 0x2fe MovS
	func_628(var_16_bool, var_89_string); // 0x2ff Call
	var_90_int = 12343; // 0x301 PushI
	SetMessage(var_90_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_91_int = 12344; // 0x306 PushI
	var_92_int = -1; // 0x307 PushI
	var_93_int = 13503; // 0x308 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x309 TObjFunc
	return 0; // 0x30b Return
	
Label_780:
	var_94_int = 13493; // 0x30c PushI
	var_95_bool = var_15_string == var_94_int; // 0x30d Eq
	if(var_95_bool == 0) goto Label_798; // 0x30e JumpB
	var_96_string = ""; // 0x30f PushV
	var_96_string = "Neutral"; // 0x310 MovS
	func_628(var_16_bool, var_96_string); // 0x311 Call
	var_97_int = 12334; // 0x313 PushI
	SetMessage(var_97_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_98_int = 12335; // 0x318 PushI
	var_99_int = 13504; // 0x319 PushI
	var_100_int = 13494; // 0x31a PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x31b TObjFunc
	return 0; // 0x31d Return
	
Label_798:
	var_101_int = 13504; // 0x31e PushI
	var_102_bool = var_15_string == var_101_int; // 0x31f Eq
	if(var_102_bool == 0) goto Label_816; // 0x320 JumpB
	var_103_string = ""; // 0x321 PushV
	var_103_string = "Neutral"; // 0x322 MovS
	func_628(var_16_bool, var_103_string); // 0x323 Call
	var_104_int = 12345; // 0x325 PushI
	SetMessage(var_104_int); // 0x326 TObjFunc
	ClearReplies(); // 0x328 TObjFunc
	var_105_int = 12346; // 0x32a PushI
	var_106_int = 13506; // 0x32b PushI
	var_107_int = 13505; // 0x32c PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_108_int = 13506; // 0x330 PushI
	var_109_bool = var_15_string == var_108_int; // 0x331 Eq
	if(var_109_bool == 0) goto Label_834; // 0x332 JumpB
	var_110_string = ""; // 0x333 PushV
	var_110_string = "Neutral"; // 0x334 MovS
	func_628(var_16_bool, var_110_string); // 0x335 Call
	var_111_int = 12347; // 0x337 PushI
	SetMessage(var_111_int); // 0x338 TObjFunc
	ClearReplies(); // 0x33a TObjFunc
	var_112_int = 12348; // 0x33c PushI
	var_113_int = -1; // 0x33d PushI
	var_114_int = 13507; // 0x33e PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x33f TObjFunc
	return 0; // 0x341 Return
	
Label_834:
	var_3_string = 1; // 0x342 TMovB
	var_115_bool = 0; // 0x343 PushV
	func_1529(var_115_bool); // 0x344 Call
	if(var_115_bool == 0) goto Label_842; // 0x346 JumpB
	lshStopAnimation(); // 0x347 Func
	goto Label_844; // 0x349 Jump
	
Label_844:
	return 0; // 0x34c Return
	
Label_842:
	StopAnimation(); // 0x34a Func
	
Label_846:
	return 0; // 0x34e Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int)
{
	var_17_int = 1; // 0x40a PushI
	if(var_17_int == 0) goto Label_1362; // 0x40b JumpB
	func_1458(); // 0x40d Call
	var_19_int = 15289; // 0x40f PushI
	var_20_bool = var_16_int == var_19_int; // 0x410 Eq
	if(var_20_bool == 0) goto Label_1047; // 0x411 JumpB
	var_21_object = Obj(); var_22_object = Obj(); // 0x412 PushV
	var_21_object = var_1_object; // 0x413 MovT
	var_22_object = var_0_object; // 0x414 MovT
	func_1587(); // 0x415 Call
	
Label_1047:
	var_50_int = 15310; // 0x417 PushI
	var_51_bool = var_16_int == var_50_int; // 0x418 Eq
	if(var_51_bool == 0) goto Label_1070; // 0x419 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x41a PushV
	var_52_object = var_1_object; // 0x41b MovT
	var_53_object = var_0_object; // 0x41c MovT
	func_1602(); // 0x41d Call
	var_69_object = Obj(); var_70_object = Obj(); // 0x41f PushV
	var_69_object = var_1_object; // 0x420 MovT
	var_70_object = var_0_object; // 0x421 MovT
	func_1615(); // 0x422 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0x424 PushV
	var_81_object = var_1_object; // 0x425 MovT
	var_82_object = var_0_object; // 0x426 MovT
	func_1531(); // 0x427 Call
	var_85_object = Obj(); var_86_object = Obj(); // 0x429 PushV
	var_85_object = var_1_object; // 0x42a MovT
	var_86_object = var_0_object; // 0x42b MovT
	func_1596(); // 0x42c Call
	
Label_1070:
	var_91_int = 15276; // 0x42e PushI
	var_92_bool = var_15_int == var_91_int; // 0x42f Eq
	if(var_92_bool == 0) goto Label_1142; // 0x430 JumpB
	var_93_bool = 0; // 0x431 PushV
	var_93_bool = 0; // 0x432 MovB
	var_94_bool = 0; var_95_object = Obj(); // 0x433 PushV
	var_95_object = var_1_object; // 0x434 MovT
	func_1651(var_95_object); // 0x435 Call
	if(var_94_bool == 0) goto Label_1086; // 0x437 JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x438 PushV
	var_103_object = var_1_object; // 0x439 MovT
	func_1663(var_103_object); // 0x43a Call
	if(var_102_bool == 0) goto Label_1086; // 0x43c JumpB
	var_93_bool = 1; // 0x43d MovB
	
Label_1086:
	if(var_93_bool == 0) goto Label_1107; // 0x43e JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x43f PushV
	var_108_object = var_1_object; // 0x440 MovT
	var_109_object = var_0_object; // 0x441 MovT
	func_1581(); // 0x442 Call
	var_112_string = ""; // 0x444 PushV
	var_112_string = "Neutral"; // 0x445 MovS
	func_1017(var_16_int, var_112_string); // 0x446 Call
	var_127_int = 14041; // 0x448 PushI
	SetMessage(var_127_int); // 0x449 TObjFunc
	ClearReplies(); // 0x44b TObjFunc
	var_128_int = 14042; // 0x44d PushI
	var_129_int = 15278; // 0x44e PushI
	var_130_int = 15277; // 0x44f PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x450 TObjFunc
	return 0; // 0x452 Return
	
Label_1107:
	var_131_string = ""; // 0x453 PushV
	var_131_string = "Neutral"; // 0x454 MovS
	func_1017(var_16_int, var_131_string); // 0x455 Call
	var_132_int = 14063; // 0x457 PushI
	SetMessage(var_132_int); // 0x458 TObjFunc
	ClearReplies(); // 0x45a TObjFunc
	var_133_bool = 0; var_134_object = Obj(); // 0x45c PushV
	var_134_object = var_1_object; // 0x45d MovT
	func_1675(var_133_bool, var_134_object); // 0x45e Call
	if(var_133_bool == 0) goto Label_1126; // 0x460 JumpB
	var_142_int = 14068; // 0x461 PushI
	var_143_int = 15309; // 0x462 PushI
	var_144_int = 15305; // 0x463 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x464 TObjFunc
	
Label_1126:
	var_145_bool = 0; var_146_object = Obj(); // 0x466 PushV
	var_146_object = var_1_object; // 0x467 MovT
	func_1685(var_145_bool, var_146_object); // 0x468 Call
	if(var_145_bool == 0) goto Label_1136; // 0x46a JumpB
	var_157_int = 14069; // 0x46b PushI
	var_158_int = 15307; // 0x46c PushI
	var_159_int = 15306; // 0x46d PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x46e TObjFunc
	
Label_1136:
	var_160_int = 14064; // 0x470 PushI
	var_161_int = -1; // 0x471 PushI
	var_162_int = 15300; // 0x472 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x473 TObjFunc
	return 0; // 0x475 Return
	
Label_1142:
	var_163_int = 15307; // 0x476 PushI
	var_164_bool = var_15_int == var_163_int; // 0x477 Eq
	if(var_164_bool == 0) goto Label_1160; // 0x478 JumpB
	var_165_string = ""; // 0x479 PushV
	var_165_string = "Neutral"; // 0x47a MovS
	func_1017(var_16_int, var_165_string); // 0x47b Call
	var_166_int = 14070; // 0x47d PushI
	SetMessage(var_166_int); // 0x47e TObjFunc
	ClearReplies(); // 0x480 TObjFunc
	var_167_int = 14071; // 0x482 PushI
	var_168_int = -1; // 0x483 PushI
	var_169_int = 15308; // 0x484 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_170_int = 15309; // 0x488 PushI
	var_171_bool = var_15_int == var_170_int; // 0x489 Eq
	if(var_171_bool == 0) goto Label_1178; // 0x48a JumpB
	var_172_string = ""; // 0x48b PushV
	var_172_string = "Neutral"; // 0x48c MovS
	func_1017(var_16_int, var_172_string); // 0x48d Call
	var_173_int = 14072; // 0x48f PushI
	SetMessage(var_173_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_174_int = 14073; // 0x494 PushI
	var_175_int = -1; // 0x495 PushI
	var_176_int = 15310; // 0x496 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_177_int = 15278; // 0x49a PushI
	var_178_bool = var_15_int == var_177_int; // 0x49b Eq
	if(var_178_bool == 0) goto Label_1196; // 0x49c JumpB
	var_179_string = ""; // 0x49d PushV
	var_179_string = "Neutral"; // 0x49e MovS
	func_1017(var_16_int, var_179_string); // 0x49f Call
	var_180_int = 14043; // 0x4a1 PushI
	SetMessage(var_180_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_181_int = 14044; // 0x4a6 PushI
	var_182_int = 15280; // 0x4a7 PushI
	var_183_int = 15279; // 0x4a8 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x4a9 TObjFunc
	return 0; // 0x4ab Return
	
Label_1196:
	var_184_int = 15280; // 0x4ac PushI
	var_185_bool = var_15_int == var_184_int; // 0x4ad Eq
	if(var_185_bool == 0) goto Label_1214; // 0x4ae JumpB
	var_186_string = ""; // 0x4af PushV
	var_186_string = "Neutral"; // 0x4b0 MovS
	func_1017(var_16_int, var_186_string); // 0x4b1 Call
	var_187_int = 14045; // 0x4b3 PushI
	SetMessage(var_187_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_188_int = 14046; // 0x4b8 PushI
	var_189_int = 15282; // 0x4b9 PushI
	var_190_int = 15281; // 0x4ba PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x4bb TObjFunc
	return 0; // 0x4bd Return
	
Label_1214:
	var_191_int = 15282; // 0x4be PushI
	var_192_bool = var_15_int == var_191_int; // 0x4bf Eq
	if(var_192_bool == 0) goto Label_1237; // 0x4c0 JumpB
	var_193_string = ""; // 0x4c1 PushV
	var_193_string = "Neutral"; // 0x4c2 MovS
	func_1017(var_16_int, var_193_string); // 0x4c3 Call
	var_194_int = 14047; // 0x4c5 PushI
	SetMessage(var_194_int); // 0x4c6 TObjFunc
	ClearReplies(); // 0x4c8 TObjFunc
	var_195_int = 14048; // 0x4ca PushI
	var_196_int = 15284; // 0x4cb PushI
	var_197_int = 15283; // 0x4cc PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x4cd TObjFunc
	var_198_int = 14060; // 0x4cf PushI
	var_199_int = 15297; // 0x4d0 PushI
	var_200_int = 15296; // 0x4d1 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x4d2 TObjFunc
	return 0; // 0x4d4 Return
	
Label_1237:
	var_201_int = 15297; // 0x4d5 PushI
	var_202_bool = var_15_int == var_201_int; // 0x4d6 Eq
	if(var_202_bool == 0) goto Label_1255; // 0x4d7 JumpB
	var_203_string = ""; // 0x4d8 PushV
	var_203_string = "Neutral"; // 0x4d9 MovS
	func_1017(var_16_int, var_203_string); // 0x4da Call
	var_204_int = 14061; // 0x4dc PushI
	SetMessage(var_204_int); // 0x4dd TObjFunc
	ClearReplies(); // 0x4df TObjFunc
	var_205_int = 14062; // 0x4e1 PushI
	var_206_int = 15286; // 0x4e2 PushI
	var_207_int = 15298; // 0x4e3 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x4e4 TObjFunc
	return 0; // 0x4e6 Return
	
Label_1255:
	var_208_int = 15284; // 0x4e7 PushI
	var_209_bool = var_15_int == var_208_int; // 0x4e8 Eq
	if(var_209_bool == 0) goto Label_1278; // 0x4e9 JumpB
	var_210_string = ""; // 0x4ea PushV
	var_210_string = "Neutral"; // 0x4eb MovS
	func_1017(var_16_int, var_210_string); // 0x4ec Call
	var_211_int = 14049; // 0x4ee PushI
	SetMessage(var_211_int); // 0x4ef TObjFunc
	ClearReplies(); // 0x4f1 TObjFunc
	var_212_int = 14050; // 0x4f3 PushI
	var_213_int = 15286; // 0x4f4 PushI
	var_214_int = 15285; // 0x4f5 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x4f6 TObjFunc
	var_215_int = 14055; // 0x4f8 PushI
	var_216_int = 15291; // 0x4f9 PushI
	var_217_int = 15290; // 0x4fa PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x4fb TObjFunc
	return 0; // 0x4fd Return
	
Label_1278:
	var_218_int = 15291; // 0x4fe PushI
	var_219_bool = var_15_int == var_218_int; // 0x4ff Eq
	if(var_219_bool == 0) goto Label_1296; // 0x500 JumpB
	var_220_string = ""; // 0x501 PushV
	var_220_string = "Neutral"; // 0x502 MovS
	func_1017(var_16_int, var_220_string); // 0x503 Call
	var_221_int = 14056; // 0x505 PushI
	SetMessage(var_221_int); // 0x506 TObjFunc
	ClearReplies(); // 0x508 TObjFunc
	var_222_int = 14057; // 0x50a PushI
	var_223_int = 15293; // 0x50b PushI
	var_224_int = 15292; // 0x50c PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_225_int = 15293; // 0x510 PushI
	var_226_bool = var_15_int == var_225_int; // 0x511 Eq
	if(var_226_bool == 0) goto Label_1314; // 0x512 JumpB
	var_227_string = ""; // 0x513 PushV
	var_227_string = "Neutral"; // 0x514 MovS
	func_1017(var_16_int, var_227_string); // 0x515 Call
	var_228_int = 14058; // 0x517 PushI
	SetMessage(var_228_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_229_int = 14059; // 0x51c PushI
	var_230_int = 15286; // 0x51d PushI
	var_231_int = 15294; // 0x51e PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x51f TObjFunc
	return 0; // 0x521 Return
	
Label_1314:
	var_232_int = 15286; // 0x522 PushI
	var_233_bool = var_15_int == var_232_int; // 0x523 Eq
	if(var_233_bool == 0) goto Label_1332; // 0x524 JumpB
	var_234_string = ""; // 0x525 PushV
	var_234_string = "Neutral"; // 0x526 MovS
	func_1017(var_16_int, var_234_string); // 0x527 Call
	var_235_int = 14051; // 0x529 PushI
	SetMessage(var_235_int); // 0x52a TObjFunc
	ClearReplies(); // 0x52c TObjFunc
	var_236_int = 14052; // 0x52e PushI
	var_237_int = 15288; // 0x52f PushI
	var_238_int = 15287; // 0x530 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x531 TObjFunc
	return 0; // 0x533 Return
	
Label_1332:
	var_239_int = 15288; // 0x534 PushI
	var_240_bool = var_15_int == var_239_int; // 0x535 Eq
	if(var_240_bool == 0) goto Label_1350; // 0x536 JumpB
	var_241_string = ""; // 0x537 PushV
	var_241_string = "Neutral"; // 0x538 MovS
	func_1017(var_16_int, var_241_string); // 0x539 Call
	var_242_int = 14053; // 0x53b PushI
	SetMessage(var_242_int); // 0x53c TObjFunc
	ClearReplies(); // 0x53e TObjFunc
	var_243_int = 14054; // 0x540 PushI
	var_244_int = -1; // 0x541 PushI
	var_245_int = 15289; // 0x542 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x543 TObjFunc
	return 0; // 0x545 Return
	
Label_1350:
	var_3_string = 1; // 0x546 TMovB
	var_246_bool = 0; // 0x547 PushV
	func_1529(var_246_bool); // 0x548 Call
	if(var_246_bool == 0) goto Label_1358; // 0x54a JumpB
	lshStopAnimation(); // 0x54b Func
	goto Label_1360; // 0x54d Jump
	
Label_1360:
	return 0; // 0x550 Return
	
Label_1358:
	StopAnimation(); // 0x54e Func
	
Label_1362:
	return 0; // 0x552 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	func_1865(); // 0x7 Call
	var_16_bool = 0; // 0x9 PushV
	func_1375(var_16_bool); // 0xa Call
	var_19_bool = var_16_bool == 0; // 0xc Not
	if(var_19_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_20_string = ""; // 0x13 PushV
	var_20_string = "Neutral"; // 0x14 MovS
	func_1440(var_20_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_1537()
{
	return 0; // 0x602 Return
}


func_1539()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x603 PushV
	var_25_string = "d3q02"; // 0x604 PushS
	var_26_int = 4; // 0x605 PushI
	SetVariable(var_25_string, var_26_int); // 0x606 Func
	var_27_object = Obj(); // 0x608 PushV
	func_1766(var_27_object); // 0x609 Call
	var_24_object = var_27_object; // 0x60a Mov
	var_34_string = "d3q02HanGotoViktor"; // 0x60c PushS
	var_35_string = "pt_map_viktor"; // 0x60d PushS
	var_36_int = 0; // 0x60e PushI
	var_37_int = 11386; // 0x60f PushI
	var_38_float = 0; // 0x610 PushV
	func_1496(var_38_float); // 0x611 Call
	AddMark(var_34_string, var_35_string, var_36_int, var_37_int, var_38_float); // 0x613 ObjFunc
	return 2; // 0x615 Return
}


func_1527(var_83_string)
{
	var_83_string = "ui/NPC_Han.png"; // 0x5f7 MovS
	return 0; // 0x5f8 Return
}


func_1675(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x68c PushV
	var_136_object = var_134_object; // 0x68d Mov
	func_1695(var_136_object); // 0x68e Call
	if(var_135_bool == 0) goto Label_1683; // 0x690 JumpB
	var_133_bool = 1; // 0x691 MovB
	return 0; // 0x692 Return
	
Label_1683:
	var_133_bool = 0; // 0x693 MovB
	return 0; // 0x694 Return
}


func_910(var_0_object, var_1_object, var_2_object, var_3_object, var_224_object, var_225_object)
{
	var_0_object = var_225_object; // 0x38f TMov
	var_1_object = var_224_object; // 0x390 TMov
	var_3_object = 0; // 0x391 TMovB
	var_230_int = 1; // 0x392 PushI
	if(var_230_int == 0) goto Label_987; // 0x393 JumpB
	var_231_bool = 0; // 0x394 PushV
	var_231_bool = 0; // 0x395 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x396 PushV
	var_233_object = var_1_object; // 0x397 MovT
	func_1651(var_233_object); // 0x398 Call
	if(var_232_bool == 0) goto Label_929; // 0x39a JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x39b PushV
	var_239_object = var_1_object; // 0x39c MovT
	func_1663(var_239_object); // 0x39d Call
	if(var_238_bool == 0) goto Label_929; // 0x39f JumpB
	var_231_bool = 1; // 0x3a0 MovB
	
Label_929:
	if(var_231_bool == 0) goto Label_950; // 0x3a1 JumpB
	var_244_object = Obj(); var_245_object = Obj(); // 0x3a2 PushV
	var_244_object = var_1_object; // 0x3a3 MovT
	var_245_object = var_0_object; // 0x3a4 MovT
	func_1581(); // 0x3a5 Call
	var_248_string = ""; // 0x3a7 PushV
	var_248_string = "Neutral"; // 0x3a8 MovS
	func_1017(var_225_object, var_248_string); // 0x3a9 Call
	var_253_int = 14041; // 0x3ab PushI
	SetMessage(var_253_int); // 0x3ac TObjFunc
	ClearReplies(); // 0x3ae TObjFunc
	var_254_int = 14042; // 0x3b0 PushI
	var_255_int = 15278; // 0x3b1 PushI
	var_256_int = 15277; // 0x3b2 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x3b3 TObjFunc
	goto Label_987; // 0x3b5 Jump
	
Label_987:
	var_257_bool = 0; // 0x3db PushV
	func_1529(var_257_bool); // 0x3dc Call
	if(var_257_bool == 0) goto Label_1002; // 0x3de JumpB
	
Label_991:
	lshWaitForAnimEnd(); // 0x3df Func
	var_258_object = var_3_object; // 0x3e1 PushT
	if(var_258_object == 0) goto Label_996; // 0x3e2 JumpB
	goto Label_1001; // 0x3e3 Jump
	
Label_1001:
	goto Label_1016; // 0x3e9 Jump
	
Label_1016:
	return 0; // 0x3f8 Return
	
Label_996:
	var_259_string = ""; // 0x3e4 PushV
	var_259_string = var_2_object; // 0x3e5 MovT
	func_1440(var_259_string); // 0x3e6 Call
	goto Label_991; // 0x3e8 Jump
	
Label_1002:
	var_260_string = "all"; // 0x3ea PushS
	var_261_string = "idle"; // 0x3eb PushS
	PlayAnimation(var_260_string, var_261_string); // 0x3ec Func
	
Label_1006:
	WaitForAnimEnd(); // 0x3ee Func
	var_262_object = var_3_object; // 0x3f0 PushT
	if(var_262_object == 0) goto Label_1011; // 0x3f1 JumpB
	goto Label_1016; // 0x3f2 Jump
	
Label_1011:
	var_263_string = "all"; // 0x3f3 PushS
	var_264_string = "idle"; // 0x3f4 PushS
	PlayAnimation(var_263_string, var_264_string); // 0x3f5 Func
	goto Label_1006; // 0x3f7 Jump
	
Label_950:
	var_265_string = ""; // 0x3b6 PushV
	var_265_string = "Neutral"; // 0x3b7 MovS
	func_1017(var_225_object, var_265_string); // 0x3b8 Call
	var_266_int = 14063; // 0x3ba PushI
	SetMessage(var_266_int); // 0x3bb TObjFunc
	ClearReplies(); // 0x3bd TObjFunc
	var_267_bool = 0; var_268_object = Obj(); // 0x3bf PushV
	var_268_object = var_1_object; // 0x3c0 MovT
	func_1675(var_267_bool, var_268_object); // 0x3c1 Call
	if(var_267_bool == 0) goto Label_969; // 0x3c3 JumpB
	var_276_int = 14068; // 0x3c4 PushI
	var_277_int = 15309; // 0x3c5 PushI
	var_278_int = 15305; // 0x3c6 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x3c7 TObjFunc
	
Label_969:
	var_279_bool = 0; var_280_object = Obj(); // 0x3c9 PushV
	var_280_object = var_1_object; // 0x3ca MovT
	func_1685(var_279_bool, var_280_object); // 0x3cb Call
	if(var_279_bool == 0) goto Label_979; // 0x3cd JumpB
	var_291_int = 14069; // 0x3ce PushI
	var_292_int = 15307; // 0x3cf PushI
	var_293_int = 15306; // 0x3d0 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x3d1 TObjFunc
	
Label_979:
	var_294_int = 14064; // 0x3d3 PushI
	var_295_int = -1; // 0x3d4 PushI
	var_296_int = 15300; // 0x3d5 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x3d6 TObjFunc
	goto Label_987; // 0x3d8 Jump
}


func_1685(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj(); // 0x696 PushV
	var_148_object = var_146_object; // 0x697 Mov
	func_1706(var_148_object); // 0x698 Call
	if(var_147_bool == 0) goto Label_1693; // 0x69a JumpB
	var_145_bool = 1; // 0x69b MovB
	return 0; // 0x69c Return
	
Label_1693:
	var_145_bool = 0; // 0x69d MovB
	return 0; // 0x69e Return
}


func_1559()
{
	var_45_object = Obj(); var_46_string = ""; var_47_float = 0; // 0x618 PushV
	var_48_object = Obj(); // 0x619 PushV
	func_1766(var_48_object); // 0x61a Call
	var_45_object = var_48_object; // 0x61b Mov
	var_46_string = "pt_map_viktor"; // 0x61d MovS
	var_47_float = 2; // 0x61e MovI
	func_1783(var_45_object, var_46_string, var_47_float); // 0x61f Call
	var_68_object = Obj(); // 0x621 PushV
	func_1766(var_68_object); // 0x622 Call
	ShowMap(var_68_object); // 0x624 ObjFunc
	return 0; // 0x626 Return
}


func_1816(var_84_int)
{
	var_85_int = 0; var_86_int = 0; // 0x718 PushV
	var_87_string = "player"; // 0x719 PushS
	GetVariable(var_87_string, var_86_int); // 0x71a Func
	var_88_int = 0; // 0x71c PushI
	var_89_bool = var_86_int == var_88_int; // 0x71d Eq
	if(var_89_bool == 0) goto Label_1826; // 0x71e JumpB
	var_84_int = 200001; // 0x71f MovI
	return 2; // 0x720 Return
	
Label_1826:
	var_90_int = 1; // 0x722 PushI
	var_91_bool = var_86_int == var_90_int; // 0x723 Eq
	if(var_91_bool == 0) goto Label_1831; // 0x724 JumpB
	var_84_int = 200002; // 0x725 MovI
	return 2; // 0x726 Return
	
Label_1831:
	var_84_int = 200003; // 0x727 MovI
	return 2; // 0x728 Return
}


func_1436()
{
	CameraSwitchToNormal(); // 0x59d Func
	return 0; // 0x59f Return
}


func_1695(var_135_bool)
{
	var_137_int = 0; var_138_int = 0; // 0x69f PushV
	var_139_string = "Rifle"; // 0x6a0 PushS
	GetItemCountOfType(var_138_int, var_139_string); // 0x6a1 ObjFunc
	var_140_int = 5; // 0x6a3 PushI
	var_141_bool = var_138_int >= var_140_int; // 0x6a4 GE
	if(var_141_bool == 0) goto Label_1704; // 0x6a5 JumpB
	var_135_bool = 1; // 0x6a6 MovB
	return 2; // 0x6a7 Return
	
Label_1704:
	var_135_bool = 0; // 0x6a8 MovB
	return 2; // 0x6a9 Return
}


func_1440(var_20_string)
{
	var_21_float = 0; var_22_float = 0; var_23_float = 0; var_24_float = 0; // 0x5a0 PushV
	var_25_string = "playing "; // 0x5a1 PushS
	var_26_int = var_25_string + var_20_string; // 0x5a2 Add
	Trace(var_26_int); // 0x5a3 Func
	lshGetAnimTimes(var_20_string, var_23_float, var_24_float); // 0x5a5 Func
	lshPlayAnimation(var_23_float, var_24_float); // 0x5a7 Func
	var_27_string = "start: "; // 0x5a9 PushS
	var_28_int = var_27_string + var_23_float; // 0x5aa Add
	Trace(var_28_int); // 0x5ab Func
	var_29_string = "end: "; // 0x5ad PushS
	var_30_int = var_29_string + var_24_float; // 0x5ae Add
	Trace(var_30_int); // 0x5af Func
	return 4; // 0x5b1 Return
}


func_545(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object; // 0x222 TMov
	var_1_object = var_160_object; // 0x223 TMov
	var_3_object = 0; // 0x224 TMovB
	var_166_int = 1; // 0x225 PushI
	if(var_166_int == 0) goto Label_598; // 0x226 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x227 PushV
	var_168_object = var_1_object; // 0x228 MovT
	func_1639(var_168_object); // 0x229 Call
	if(var_167_bool == 0) goto Label_581; // 0x22b JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x22c PushV
	var_173_object = var_1_object; // 0x22d MovT
	var_174_object = var_0_object; // 0x22e MovT
	func_1575(); // 0x22f Call
	var_177_string = ""; // 0x231 PushV
	var_177_string = "Neutral"; // 0x232 MovS
	func_628(var_161_object, var_177_string); // 0x233 Call
	var_182_int = 12330; // 0x235 PushI
	SetMessage(var_182_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_183_int = 12331; // 0x23a PushI
	var_184_int = 13491; // 0x23b PushI
	var_185_int = 13490; // 0x23c PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x23d TObjFunc
	var_186_int = 12336; // 0x23f PushI
	var_187_int = -1; // 0x240 PushI
	var_188_int = 13495; // 0x241 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x242 TObjFunc
	goto Label_598; // 0x244 Jump
	
Label_598:
	var_189_bool = 0; // 0x256 PushV
	func_1529(var_189_bool); // 0x257 Call
	if(var_189_bool == 0) goto Label_613; // 0x259 JumpB
	
Label_602:
	lshWaitForAnimEnd(); // 0x25a Func
	var_190_object = var_3_object; // 0x25c PushT
	if(var_190_object == 0) goto Label_607; // 0x25d JumpB
	goto Label_612; // 0x25e Jump
	
Label_612:
	goto Label_627; // 0x264 Jump
	
Label_627:
	return 0; // 0x273 Return
	
Label_607:
	var_191_string = ""; // 0x25f PushV
	var_191_string = var_2_object; // 0x260 MovT
	func_1440(var_191_string); // 0x261 Call
	goto Label_602; // 0x263 Jump
	
Label_613:
	var_192_string = "all"; // 0x265 PushS
	var_193_string = "idle"; // 0x266 PushS
	PlayAnimation(var_192_string, var_193_string); // 0x267 Func
	
Label_617:
	WaitForAnimEnd(); // 0x269 Func
	var_194_object = var_3_object; // 0x26b PushT
	if(var_194_object == 0) goto Label_622; // 0x26c JumpB
	goto Label_627; // 0x26d Jump
	
Label_622:
	var_195_string = "all"; // 0x26e PushS
	var_196_string = "idle"; // 0x26f PushS
	PlayAnimation(var_195_string, var_196_string); // 0x270 Func
	goto Label_617; // 0x272 Jump
	
Label_581:
	var_197_string = ""; // 0x245 PushV
	var_197_string = "Neutral"; // 0x246 MovS
	func_628(var_161_object, var_197_string); // 0x247 Call
	var_198_int = 13781; // 0x249 PushI
	SetMessage(var_198_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_199_int = 13782; // 0x24e PushI
	var_200_int = -1; // 0x24f PushI
	var_201_int = 15018; // 0x250 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x251 TObjFunc
	goto Label_598; // 0x253 Jump
}


func_1575()
{
	var_31_string = "ood8Han1"; // 0x628 PushS
	var_32_int = 1; // 0x629 PushI
	SetVariable(var_31_string, var_32_int); // 0x62a Func
	return 0; // 0x62c Return
}


func_1833()
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x729 PushV
	var_60_string = "Adding diary entry"; // 0x72a PushS
	Trace(var_60_string); // 0x72b Func
	var_61_int = 185; // 0x72d PushI
	var_62_int = 1; // 0x72e PushI
	var_63_int = 15448; // 0x72f PushI
	CreateDiaryEntry(var_59_object, var_61_int, var_62_int, var_63_int); // 0x730 Func
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0; // 0x732 PushV
	var_65_object = var_59_object; // 0x733 Mov
	var_66_int = 182; // 0x734 MovI
	func_1737(var_64_bool, var_65_object, var_66_int); // 0x735 Call
	return 2; // 0x737 Return
}


func_1706(var_147_bool)
{
	var_149_int = 0; var_150_int = 0; // 0x6aa PushV
	var_151_string = "Rifle"; // 0x6ab PushS
	GetItemCountOfType(var_150_int, var_151_string); // 0x6ac ObjFunc
	var_152_bool = 0; // 0x6ae PushV
	var_152_bool = 0; // 0x6af MovB
	var_153_int = 0; // 0x6b0 PushI
	var_154_bool = var_150_int > var_153_int; // 0x6b1 GT
	if(var_154_bool == 0) goto Label_1719; // 0x6b2 JumpB
	var_155_int = 5; // 0x6b3 PushI
	var_156_bool = var_150_int < var_155_int; // 0x6b4 LT
	if(var_156_bool == 0) goto Label_1719; // 0x6b5 JumpB
	var_152_bool = 1; // 0x6b6 MovB
	
Label_1719:
	if(var_152_bool == 0) goto Label_1722; // 0x6b7 JumpB
	var_147_bool = 1; // 0x6b8 MovB
	return 2; // 0x6b9 Return
	
Label_1722:
	var_147_bool = 0; // 0x6ba MovB
	return 2; // 0x6bb Return
}


func_1581()
{
	var_110_string = "ood9Xan1"; // 0x62e PushS
	var_111_int = 1; // 0x62f PushI
	SetVariable(var_110_string, var_111_int); // 0x630 Func
	return 0; // 0x632 Return
}


func_49(var_0_object, var_30_int, var_31_object)
{
	var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x31 PushV
	var_0_object = var_31_object; // 0x32 TMov
	var_41_bool = 0; var_42_object = Obj(); // 0x33 PushV
	var_42_object = var_31_object; // 0x34 Mov
	func_1380(var_42_object); // 0x35 Call
	var_81_bool = var_41_bool == 0; // 0x37 Not
	if(var_81_bool == 0) goto Label_59; // 0x38 JumpB
	var_30_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_37_object); // 0x3b Func
	var_82_int = 0; // 0x3d PushV
	func_1525(var_82_int); // 0x3e Call
	SetNPCName(var_82_int); // 0x40 ObjFunc
	var_83_string = ""; // 0x42 PushV
	func_1527(var_83_string); // 0x43 Call
	SetPhoto(var_83_string); // 0x45 ObjFunc
	var_84_int = 0; // 0x47 PushV
	func_1816(var_84_int); // 0x48 Call
	SetPlayerName(var_84_int); // 0x4a ObjFunc
	var_39_int = -1; // 0x4c MovI
	IsOverrideActive(var_38_bool); // 0x4d Func
	var_92_bool = var_38_bool; // 0x4f Push
	if(var_92_bool == 0) goto Label_83; // 0x50 JumpB
	var_30_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_37_object); // 0x53 Func
	var_93_object = Obj(); var_94_object = Obj(); // 0x55 PushV
	var_93_object = var_31_object; // 0x56 Mov
	var_94_object = var_37_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_95_object, var_96_object, var_97_string, var_98_bool, var_93_object, var_94_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_40_bool); // 0x5c ObjFunc
	
Label_94:
	var_138_bool = var_40_bool == 0; // 0x5e Not
	if(var_138_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_40_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_139_object = Obj(); // 0x65 PushV
	var_139_object = var_31_object; // 0x66 Mov
	func_1436(); // 0x67 Call
	StopDialog(var_37_object); // 0x69 Func
	GetReturnValue(var_39_int); // 0x6b ObjFunc
	var_30_int = var_39_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_1458()
{
	var_18_bool = 0; // 0x5b2 PushV
	func_1529(var_18_bool); // 0x5b3 Call
	if(var_18_bool == 0) goto Label_1464; // 0x5b5 JumpB
	lshStopSpeech(); // 0x5b6 Func
	
Label_1464:
	return 0; // 0x5b8 Return
}


func_179(var_2_object, var_106_string)
{
	var_107_bool = 0; // 0xb4 PushV
	func_1529(var_107_bool); // 0xb5 Call
	var_108_bool = var_107_bool == 0; // 0xb7 Not
	if(var_108_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_109_bool = var_106_string == var_2_object; // 0xba Eq
	if(var_109_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_110_string = ""; // 0xbd PushV
	var_110_string = var_106_string; // 0xbe Mov
	func_1440(var_110_string); // 0xbf Call
	var_2_object = var_106_string; // 0xc1 TMov
	return 0; // 0xc2 Return
}


func_1587()
{
	var_23_string = "d9q01"; // 0x634 PushS
	var_24_int = 2; // 0x635 PushI
	SetVariable(var_23_string, var_24_int); // 0x636 Func
	func_1849(); // 0x639 Call
	return 0; // 0x63b Return
}


func_1465(var_66_cvector, var_67_cvector)
{
	var_69_float = 0; var_70_float = 0; // 0x5b9 PushV
	var_71_int = var_67_cvector | var_67_cvector; // 0x5ba Or
	var_70_float = sqrt(var_71_int); // 0x5bb Sqrt2
	var_72_float = 0.0; // 0x5bc PushF
	var_73_bool = var_70_float < var_72_float; // 0x5bd LT
	if(var_73_bool == 0) goto Label_1473; // 0x5be JumpB
	var_66_cvector = CVector(0.0, 0.0, 0.0); // 0x5bf MovV
	return 2; // 0x5c0 Return
	
Label_1473:
	var_66_cvector = var_67_cvector / var_67_cvector; // 0x5c1 Div2
	return 2; // 0x5c2 Return
}


func_1849()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x739 PushV
	var_27_string = "Adding diary entry"; // 0x73a PushS
	Trace(var_27_string); // 0x73b Func
	var_28_int = 184; // 0x73d PushI
	var_29_int = 1; // 0x73e PushI
	var_30_int = 15447; // 0x73f PushI
	CreateDiaryEntry(var_26_object, var_28_int, var_29_int, var_30_int); // 0x740 Func
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0; // 0x742 PushV
	var_32_object = var_26_object; // 0x743 Mov
	var_33_int = 182; // 0x744 MovI
	func_1737(var_31_bool, var_32_object, var_33_int); // 0x745 Call
	return 2; // 0x747 Return
}


func_1596()
{
	var_87_int = 0; var_88_int = 0; // 0x63c PushV
	var_89_string = "Rifle"; // 0x63d PushS
	var_90_int = 5; // 0x63e PushI
	RemoveItemByType(var_88_int, var_89_string, var_90_int); // 0x63f ObjFunc
	return 2; // 0x641 Return
}


func_1724(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x6bc PushV
	GetDiaryRoot(var_42_object); // 0x6bd Func
	var_43_bool = var_42_object == 0; // 0x6bf Not
	if(var_43_bool == 0) goto Label_1734; // 0x6c0 JumpB
	var_44_string = "Can't retrieve diary root"; // 0x6c1 PushS
	Trace(var_44_string); // 0x6c2 Func
	var_40_object = 0; // 0x6c4 MovB
	return 2; // 0x6c5 Return
	
Label_1734:
	var_40_object = var_42_object; // 0x6c6 Mov
	return 2; // 0x6c7 Return
}


func_1602()
{
	var_54_int = 0; var_55_int = 0; // 0x642 PushV
	var_56_string = "d9q01"; // 0x643 PushS
	var_57_int = 1000; // 0x644 PushI
	SetVariable(var_56_string, var_57_int); // 0x645 Func
	func_1833(); // 0x648 Call
	var_67_string = "Rifle"; // 0x64a PushS
	var_68_int = 5; // 0x64b PushI
	RemoveItemByType(var_55_int, var_67_string, var_68_int); // 0x64c ObjFunc
	return 2; // 0x64e Return
}


func_1475(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x5c3 PushV
	GetVariable(var_97_string, var_99_int); // 0x5c4 Func
	var_96_int = var_99_int; // 0x5c6 Mov
	return 2; // 0x5c7 Return
}


func_1480(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x5c8 PushV
	FindActor(var_74_object, var_71_string); // 0x5c9 Func
	var_75_bool = var_74_object == 0; // 0x5cb Not
	if(var_75_bool == 0) goto Label_1491; // 0x5cc JumpB
	var_76_string = "Door "; // 0x5cd PushS
	var_77_int = var_76_string + var_71_string; // 0x5ce Add
	var_78_string = " not found"; // 0x5cf PushS
	var_79_int = var_77_int + var_78_string; // 0x5d0 Add
	Trace(var_79_int); // 0x5d1 Func
	
Label_1491:
	var_80_string = "locked"; // 0x5d3 PushS
	SetProperty(var_80_string, var_72_bool); // 0x5d4 ObjFunc
	return 2; // 0x5d6 Return
}


func_1865()
{
	var_15_bool = GlobalVars[1]; // 0x749 PushGE
	var_15_bool = 0; // 0x74a MovB
	GlobalVars[1] = var_15_bool; // 0x74b PopGE
	return 0; // 0x74c Return
}


func_1737(var_31_bool, var_32_object, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; // 0x6c9 PushV
	var_40_object = Obj(); // 0x6ca PushV
	func_1724(var_40_object); // 0x6cb Call
	var_37_object = var_40_object; // 0x6cc Mov
	Find(var_33_int, var_38_object); // 0x6ce ObjFunc
	var_45_bool = var_38_object == 0; // 0x6d0 Not
	if(var_45_bool == 0) goto Label_1752; // 0x6d1 JumpB
	var_46_string = "Can't find diary parent with id: "; // 0x6d2 PushS
	var_47_int = var_46_string + var_33_int; // 0x6d3 Add
	Trace(var_47_int); // 0x6d4 Func
	var_31_bool = 0; // 0x6d6 MovB
	return 6; // 0x6d7 Return
	
Label_1752:
	AddChild(var_32_object); // 0x6d8 ObjFunc
	var_48_string = "player_diary"; // 0x6da PushS
	var_49_int = 1; // 0x6db PushI
	SetVariable(var_48_string, var_49_int); // 0x6dc Func
	GetCategory(var_39_int); // 0x6de ObjFunc
	SetDiarySection(var_39_int); // 0x6e0 Func
	var_31_bool = 0; // 0x6e2 MovB
	return 6; // 0x6e3 Return
}


func_1869(var_16_object)
{
	var_17_bool = GlobalVars[1]; // 0x74e PushGE
	var_18_bool = var_17_bool == 0; // 0x74f Not
	if(var_18_bool == 0) goto Label_1877; // 0x750 JumpB
	var_19_bool = GlobalVars[1]; // 0x751 PushGE
	var_19_bool = 1; // 0x752 MovB
	GlobalVars[1] = var_19_bool; // 0x753 PopGE
	return 0; // 0x754 Return
	
Label_1877:
	var_20_bool = 0; var_21_int = 0; // 0x755 PushV
	var_21_int = 1; // 0x756 MovI
	func_1510(var_20_bool, var_21_int); // 0x757 Call
	if(var_20_bool == 0) goto Label_1883; // 0x759 JumpB
	return 0; // 0x75a Return
	
Label_1883:
	var_28_bool = 0; var_29_int = 0; // 0x75b PushV
	var_29_int = 3; // 0x75c MovI
	func_1510(var_28_bool, var_29_int); // 0x75d Call
	if(var_28_bool == 0) goto Label_1895; // 0x75f JumpB
	var_30_int = 0; var_31_object = Obj(); // 0x760 PushV
	var_31_object = var_16_object; // 0x761 Mov
	TaskCall(2); // 0x762 TaskCall
	func_49(var_32_object, var_30_int, var_31_object); // 0x763 Call
	TaskReturn(); // 0x764 TaskReturn
	return 0; // 0x766 Return
	
Label_1895:
	var_140_bool = 0; var_141_int = 0; // 0x767 PushV
	var_141_int = 8; // 0x768 MovI
	func_1510(var_140_bool, var_141_int); // 0x769 Call
	if(var_140_bool == 0) goto Label_1907; // 0x76b JumpB
	var_142_int = 0; var_143_object = Obj(); // 0x76c PushV
	var_143_object = var_16_object; // 0x76d Mov
	TaskCall(4); // 0x76e TaskCall
	func_482(var_144_object, var_142_int, var_143_object); // 0x76f Call
	TaskReturn(); // 0x770 TaskReturn
	return 0; // 0x772 Return
	
Label_1907:
	var_204_bool = 0; var_205_int = 0; // 0x773 PushV
	var_205_int = 9; // 0x774 MovI
	func_1510(var_204_bool, var_205_int); // 0x775 Call
	if(var_204_bool == 0) goto Label_1919; // 0x777 JumpB
	var_206_int = 0; var_207_object = Obj(); // 0x778 PushV
	var_207_object = var_16_object; // 0x779 Mov
	TaskCall(6); // 0x77a TaskCall
	func_847(var_208_object, var_206_int, var_207_object); // 0x77b Call
	TaskReturn(); // 0x77c TaskReturn
	return 0; // 0x77e Return
	
Label_1919:
	var_299_bool = 0; // 0x77f PushV
	func_1516(var_299_bool); // 0x780 Call
	return 0; // 0x782 Return
}


func_1615()
{
	var_71_string = ""; var_72_bool = 0; // 0x650 PushV
	var_71_string = "mnogogrannik@door1"; // 0x651 MovS
	var_72_bool = 0; // 0x652 MovB
	func_1480(var_71_string, var_72_bool); // 0x653 Call
	return 0; // 0x655 Return
}


func_847(var_0_object, var_206_int, var_207_object)
{
	var_209_object = Obj(); var_210_bool = 0; var_211_int = 0; var_212_bool = 0; var_213_object = Obj(); var_214_bool = 0; var_215_int = 0; var_216_bool = 0; // 0x34f PushV
	var_0_object = var_207_object; // 0x350 TMov
	var_217_bool = 0; var_218_object = Obj(); // 0x351 PushV
	var_218_object = var_207_object; // 0x352 Mov
	func_1380(var_218_object); // 0x353 Call
	var_219_bool = var_217_bool == 0; // 0x355 Not
	if(var_219_bool == 0) goto Label_857; // 0x356 JumpB
	var_206_int = -2; // 0x357 MovI
	return 8; // 0x358 Return
	
Label_857:
	CreateDialog(var_213_object); // 0x359 Func
	var_220_int = 0; // 0x35b PushV
	func_1525(var_220_int); // 0x35c Call
	SetNPCName(var_220_int); // 0x35e ObjFunc
	var_221_string = ""; // 0x360 PushV
	func_1527(var_221_string); // 0x361 Call
	SetPhoto(var_221_string); // 0x363 ObjFunc
	var_222_int = 0; // 0x365 PushV
	func_1816(var_222_int); // 0x366 Call
	SetPlayerName(var_222_int); // 0x368 ObjFunc
	var_215_int = -1; // 0x36a MovI
	IsOverrideActive(var_214_bool); // 0x36b Func
	var_223_bool = var_214_bool; // 0x36d Push
	if(var_223_bool == 0) goto Label_881; // 0x36e JumpB
	var_206_int = -2; // 0x36f MovI
	return 8; // 0x370 Return
	
Label_881:
	DoDialog(var_213_object); // 0x371 Func
	var_224_object = Obj(); var_225_object = Obj(); // 0x373 PushV
	var_224_object = var_207_object; // 0x374 Mov
	var_225_object = var_213_object; // 0x375 Mov
	TaskCall(7); // 0x376 TaskCall
	func_910(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object); // 0x377 Call
	TaskReturn(); // 0x378 TaskReturn
	IsDialogEnd(var_216_bool); // 0x37a ObjFunc
	
Label_892:
	var_297_bool = var_216_bool == 0; // 0x37c Not
	if(var_297_bool == 0) goto Label_899; // 0x37d JumpB
	sync(); // 0x37e Func
	IsDialogEnd(var_216_bool); // 0x380 ObjFunc
	goto Label_892; // 0x382 Jump
	
Label_899:
	var_298_object = Obj(); // 0x383 PushV
	var_298_object = var_207_object; // 0x384 Mov
	func_1436(); // 0x385 Call
	StopDialog(var_213_object); // 0x387 Func
	GetReturnValue(var_215_int); // 0x389 ObjFunc
	var_206_int = var_215_int; // 0x38b Mov
	return 8; // 0x38c Return
}


func_1363(var_16_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; // 0x553 PushV
	GetPosition(var_22_cvector); // 0x554 ObjFunc
	GetPosition(var_23_cvector); // 0x556 Func
	var_24_cvector = var_22_cvector - var_23_cvector; // 0x558 Sub2
	var_26_float = GetByIndex(var_24_cvector, 0); // 0x559 PushE
	var_27_float = GetByIndex(var_24_cvector, 2); // 0x55a PushE
	Rotate(var_26_float, var_27_float, var_25_bool); // 0x55b Func
	var_16_bool = var_25_bool; // 0x55d Mov
	return 8; // 0x55e Return
}


func_1622(var_104_bool)
{
	var_104_bool = 1; // 0x657 MovB
	return 0; // 0x658 Return
}


func_1496(var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0x5d8 PushV
	GetGameTime(var_40_float); // 0x5d9 Func
	var_38_float = var_40_float; // 0x5db Mov
	return 2; // 0x5dc Return
}


func_1627(var_96_bool)
{
	var_98_int = 0; var_99_string = ""; // 0x65c PushV
	var_99_string = "d3q02"; // 0x65d MovS
	func_1475(var_98_int, var_99_string); // 0x65e Call
	var_102_int = 3; // 0x660 PushI
	var_103_bool = var_98_int == var_102_int; // 0x661 Eq
	if(var_103_bool == 0) goto Label_1637; // 0x662 JumpB
	var_96_bool = 1; // 0x663 MovB
	return 0; // 0x664 Return
	
Label_1637:
	var_96_bool = 0; // 0x665 MovB
	return 0; // 0x666 Return
}


func_1501(var_22_int)
{
	var_23_float = 0; var_24_float = 0; // 0x5dd PushV
	GetGameTime(var_24_float); // 0x5de Func
	var_25_int = 1; // 0x5e0 PushI
	var_26_int = 0; // 0x5e1 PushV
	var_27_int = 24; // 0x5e2 PushI
	var_26_int = var_24_float / var_24_float; // 0x5e3 Div2
	var_22_int = var_25_int + var_26_int; // 0x5e4 Add2
	return 2; // 0x5e5 Return
}


func_1375(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x55f PushV
	IsLoaded(var_18_bool); // 0x560 Func
	var_16_bool = var_18_bool; // 0x562 Mov
	return 2; // 0x563 Return
}


func_482(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0x1e2 PushV
	var_0_object = var_143_object; // 0x1e3 TMov
	var_153_bool = 0; var_154_object = Obj(); // 0x1e4 PushV
	var_154_object = var_143_object; // 0x1e5 Mov
	func_1380(var_154_object); // 0x1e6 Call
	var_155_bool = var_153_bool == 0; // 0x1e8 Not
	if(var_155_bool == 0) goto Label_492; // 0x1e9 JumpB
	var_142_int = -2; // 0x1ea MovI
	return 8; // 0x1eb Return
	
Label_492:
	CreateDialog(var_149_object); // 0x1ec Func
	var_156_int = 0; // 0x1ee PushV
	func_1525(var_156_int); // 0x1ef Call
	SetNPCName(var_156_int); // 0x1f1 ObjFunc
	var_157_string = ""; // 0x1f3 PushV
	func_1527(var_157_string); // 0x1f4 Call
	SetPhoto(var_157_string); // 0x1f6 ObjFunc
	var_158_int = 0; // 0x1f8 PushV
	func_1816(var_158_int); // 0x1f9 Call
	SetPlayerName(var_158_int); // 0x1fb ObjFunc
	var_151_int = -1; // 0x1fd MovI
	IsOverrideActive(var_150_bool); // 0x1fe Func
	var_159_bool = var_150_bool; // 0x200 Push
	if(var_159_bool == 0) goto Label_516; // 0x201 JumpB
	var_142_int = -2; // 0x202 MovI
	return 8; // 0x203 Return
	
Label_516:
	DoDialog(var_149_object); // 0x204 Func
	var_160_object = Obj(); var_161_object = Obj(); // 0x206 PushV
	var_160_object = var_143_object; // 0x207 Mov
	var_161_object = var_149_object; // 0x208 Mov
	TaskCall(5); // 0x209 TaskCall
	func_545(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object); // 0x20a Call
	TaskReturn(); // 0x20b TaskReturn
	IsDialogEnd(var_152_bool); // 0x20d ObjFunc
	
Label_527:
	var_202_bool = var_152_bool == 0; // 0x20f Not
	if(var_202_bool == 0) goto Label_534; // 0x210 JumpB
	sync(); // 0x211 Func
	IsDialogEnd(var_152_bool); // 0x213 ObjFunc
	goto Label_527; // 0x215 Jump
	
Label_534:
	var_203_object = Obj(); // 0x216 PushV
	var_203_object = var_143_object; // 0x217 Mov
	func_1436(); // 0x218 Call
	StopDialog(var_149_object); // 0x21a Func
	GetReturnValue(var_151_int); // 0x21c ObjFunc
	var_142_int = var_151_int; // 0x21e Mov
	return 8; // 0x21f Return
}


func_1380(var_41_bool)
{
	var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; // 0x564 PushV
	GetPosition(var_52_cvector); // 0x565 ObjFunc
	GetEyesHeight(var_51_float); // 0x567 ObjFunc
	var_59_float = GetByIndex(var_52_cvector, 1); // 0x569 PushE
	var_59_float = var_59_float + var_51_float; // 0x56a Add2
	SetByIndex(var_52_cvector, 1) = var_59_float; // 0x56b PopE
	GetPosition(var_53_cvector); // 0x56c Func
	GetEyesHeight(var_51_float); // 0x56e Func
	var_60_float = GetByIndex(var_53_cvector, 1); // 0x570 PushE
	var_60_float = var_60_float + var_51_float; // 0x571 Add2
	SetByIndex(var_53_cvector, 1) = var_60_float; // 0x572 PopE
	var_54_cvector = var_52_cvector - var_53_cvector; // 0x573 Sub2
	var_61_float = GetByIndex(var_54_cvector, 1); // 0x574 PushE
	var_61_float = 0; // 0x575 MovI
	SetByIndex(var_54_cvector, 1) = var_61_float; // 0x576 PopE
	var_62_int = var_54_cvector | var_54_cvector; // 0x577 Or
	var_63_float = sqrt(var_62_int); // 0x578 Sqrt
	var_54_cvector = var_54_cvector / var_54_cvector; // 0x579 Div2
	var_55_cvector = -var_54_cvector; // 0x57a Neg2
	var_64_int = 70; // 0x57b PushI
	var_65_float = var_54_cvector * var_64_int; // 0x57c Mult
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x57d PushV
	var_68_cvector = CVector(0.0, 1.0, 0.0); // 0x57e PushVec
	var_67_cvector = var_55_cvector ^ var_68_cvector; // 0x57f Xor2
	func_1465(var_66_cvector, var_67_cvector); // 0x580 Call
	var_74_int = 25; // 0x582 PushI
	var_75_float = var_66_cvector * var_74_int; // 0x583 Mult
	var_76_int = var_65_float + var_75_float; // 0x584 Add
	var_77_cvector = CVector(0.0, 10.0, 0.0); // 0x585 PushVec
	var_56_cvector = var_76_int - var_77_cvector; // 0x586 Sub2
	var_57_cvector = var_53_cvector + var_56_cvector; // 0x587 Add2
	IsOverrideActive(var_58_bool); // 0x588 Func
	var_78_bool = var_58_bool; // 0x58a Push
	if(var_78_bool == 0) goto Label_1422; // 0x58b JumpB
	var_41_bool = 0; // 0x58c MovB
	return 16; // 0x58d Return
	
Label_1422:
	StopWorld(); // 0x58e Func
	CameraTransit(var_57_cvector, var_55_cvector); // 0x590 Func
	var_79_float = GetByIndex(var_56_cvector, 0); // 0x592 PushE
	var_80_float = GetByIndex(var_56_cvector, 2); // 0x593 PushE
	Rotate(var_79_float, var_80_float); // 0x594 Func
	CameraWaitForPlayFinish(); // 0x596 Func
	ResumeWorld(); // 0x598 Func
	var_41_bool = 1; // 0x59a MovB
	return 16; // 0x59b Return
}


func_1766(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x6e6 PushV
	GetMainOutdoorScene(var_30_object); // 0x6e7 Func
	var_32_bool = var_30_object == 0; // 0x6e9 NullEq
	if(var_32_bool == 0) goto Label_1777; // 0x6ea JumpB
	var_33_string = "Can't find main outdoor scene"; // 0x6eb PushS
	Trace(var_33_string); // 0x6ec Func
	var_31_object = 0; // 0x6ee SetNull
	var_27_object = var_31_object; // 0x6ef Mov
	return 4; // 0x6f0 Return
	
Label_1777:
	GetMap(var_31_object); // 0x6f1 ObjFunc
	var_27_object = var_31_object; // 0x6f3 Mov
	return 4; // 0x6f4 Return
}


func_1639(var_21_bool)
{
	var_23_int = 0; var_24_string = ""; // 0x668 PushV
	var_24_string = "ood8Han1"; // 0x669 MovS
	func_1475(var_23_int, var_24_string); // 0x66a Call
	var_27_int = 0; // 0x66c PushI
	var_28_bool = var_23_int == var_27_int; // 0x66d Eq
	if(var_28_bool == 0) goto Label_1649; // 0x66e JumpB
	var_21_bool = 1; // 0x66f MovB
	return 0; // 0x670 Return
	
Label_1649:
	var_21_bool = 0; // 0x671 MovB
	return 0; // 0x672 Return
}


func_1510(var_20_bool, var_21_int)
{
	var_22_int = 0; // 0x5e7 PushV
	func_1501(var_22_int); // 0x5e8 Call
	var_20_bool = var_22_int == var_21_int; // 0x5ea Eq2
	return 0; // 0x5eb Return
}


func_1516(var_299_bool)
{
	var_300_bool = 0; var_301_bool = 0; // 0x5ec PushV
	var_302_string = ""; // 0x5ed PushV
	var_302_string = "No"; // 0x5ee MovS
	func_1440(var_302_string); // 0x5ef Call
	lshWaitForAnimEnd(var_301_bool); // 0x5f1 Func
	var_299_bool = var_301_bool; // 0x5f3 Mov
	return 2; // 0x5f4 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_93_object, var_94_object)
{
	var_0_object = var_94_object; // 0x71 TMov
	var_1_object = var_93_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_99_int = 1; // 0x74 PushI
	if(var_99_int == 0) goto Label_149; // 0x75 JumpB
	var_100_bool = 0; // 0x76 PushV
	var_100_bool = 0; // 0x77 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x78 PushV
	var_102_object = var_1_object; // 0x79 MovT
	func_1627(var_102_object); // 0x7a Call
	if(var_101_bool == 0) goto Label_131; // 0x7c JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x7d PushV
	var_110_object = var_1_object; // 0x7e MovT
	func_1622(var_110_object); // 0x7f Call
	if(var_109_bool == 0) goto Label_131; // 0x81 JumpB
	var_100_bool = 1; // 0x82 MovB
	
Label_131:
	if(var_100_bool == 0) goto Label_147; // 0x83 JumpB
	var_111_string = ""; // 0x84 PushV
	var_111_string = "Neutral"; // 0x85 MovS
	func_179(var_94_object, var_111_string); // 0x86 Call
	var_126_int = 10420; // 0x88 PushI
	SetMessage(var_126_int); // 0x89 TObjFunc
	ClearReplies(); // 0x8b TObjFunc
	var_127_int = 10421; // 0x8d PushI
	var_128_int = 11490; // 0x8e PushI
	var_129_int = 11489; // 0x8f PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x90 TObjFunc
	goto Label_149; // 0x92 Jump
	
Label_149:
	var_130_bool = 0; // 0x95 PushV
	func_1529(var_130_bool); // 0x96 Call
	if(var_130_bool == 0) goto Label_164; // 0x98 JumpB
	
Label_153:
	lshWaitForAnimEnd(); // 0x99 Func
	var_131_object = var_3_object; // 0x9b PushT
	if(var_131_object == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_163:
	goto Label_178; // 0xa3 Jump
	
Label_178:
	return 0; // 0xb2 Return
	
Label_158:
	var_132_string = ""; // 0x9e PushV
	var_132_string = var_2_object; // 0x9f MovT
	func_1440(var_132_string); // 0xa0 Call
	goto Label_153; // 0xa2 Jump
	
Label_164:
	var_133_string = "all"; // 0xa4 PushS
	var_134_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xa6 Func
	
Label_168:
	WaitForAnimEnd(); // 0xa8 Func
	var_135_object = var_3_object; // 0xaa PushT
	if(var_135_object == 0) goto Label_173; // 0xab JumpB
	goto Label_178; // 0xac Jump
	
Label_173:
	var_136_string = "all"; // 0xad PushS
	var_137_string = "idle"; // 0xae PushS
	PlayAnimation(var_136_string, var_137_string); // 0xaf Func
	goto Label_168; // 0xb1 Jump
	
Label_147:
	return 0; // 0x93 Return
}


func_1651(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x674 PushV
	var_97_string = "d9q01"; // 0x675 MovS
	func_1475(var_96_int, var_97_string); // 0x676 Call
	var_100_int = 1; // 0x678 PushI
	var_101_bool = var_96_int == var_100_int; // 0x679 Eq
	if(var_101_bool == 0) goto Label_1661; // 0x67a JumpB
	var_94_bool = 1; // 0x67b MovB
	return 0; // 0x67c Return
	
Label_1661:
	var_94_bool = 0; // 0x67d MovB
	return 0; // 0x67e Return
}


func_628(var_2_object, var_33_string)
{
	var_34_bool = 0; // 0x275 PushV
	func_1529(var_34_bool); // 0x276 Call
	var_35_bool = var_34_bool == 0; // 0x278 Not
	if(var_35_bool == 0) goto Label_635; // 0x279 JumpB
	return 0; // 0x27a Return
	
Label_635:
	var_36_bool = var_33_string == var_2_object; // 0x27b Eq
	if(var_36_bool == 0) goto Label_638; // 0x27c JumpB
	return 0; // 0x27d Return
	
Label_638:
	var_37_string = ""; // 0x27e PushV
	var_37_string = var_33_string; // 0x27f Mov
	func_1440(var_37_string); // 0x280 Call
	var_2_object = var_33_string; // 0x282 TMov
	return 0; // 0x283 Return
}


func_1525(var_82_int)
{
	var_82_int = 2861; // 0x5f5 MovI
	return 0; // 0x5f6 Return
}


func_1783(var_45_object, var_46_string, var_47_float)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_bool = 0; // 0x6f7 PushV
	GetMainOutdoorScene(var_55_object); // 0x6f8 Func
	var_57_bool = var_55_object == 0; // 0x6fa NullEq
	if(var_57_bool == 0) goto Label_1792; // 0x6fb JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x6fc PushS
	Trace(var_58_string); // 0x6fd Func
	return 8; // 0x6ff Return
	
Label_1792:
	GetLocator(var_46_string, var_56_bool, var_53_cvector, var_54_cvector); // 0x700 ObjFunc
	var_59_bool = var_56_bool == 0; // 0x702 Not
	if(var_59_bool == 0) goto Label_1802; // 0x703 JumpB
	var_60_string = "Warning: outdoor scene locator "; // 0x704 PushS
	var_61_int = var_60_string + var_46_string; // 0x705 Add
	var_62_string = " doesnt exist"; // 0x706 PushS
	var_63_int = var_61_int + var_62_string; // 0x707 Add
	Trace(var_63_int); // 0x708 Func
	
Label_1802:
	GetMap(var_45_object); // 0x70a ObjFunc
	var_64_bool = var_45_object == 0; // 0x70c NullEq
	if(var_64_bool == 0) goto Label_1810; // 0x70d JumpB
	var_65_string = "Can't find map"; // 0x70e PushS
	Trace(var_65_string); // 0x70f Func
	return 8; // 0x711 Return
	
Label_1810:
	var_66_float = GetByIndex(var_53_cvector, 0); // 0x712 PushE
	var_67_float = GetByIndex(var_53_cvector, 2); // 0x713 PushE
	SetMapParams(var_66_float, var_67_float, var_47_float); // 0x714 ObjFunc
	return 8; // 0x716 Return
}


func_1529(var_18_bool)
{
	var_18_bool = 1; // 0x5f9 MovB
	return 0; // 0x5fa Return
}


func_1531()
{
	var_83_string = "playsound"; // 0x5fc PushS
	var_84_string = "giveitem"; // 0x5fd PushS
	TriggerWorld(var_83_string, var_84_string); // 0x5fe Func
	return 0; // 0x600 Return
}


func_1017(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0x3fa PushV
	func_1529(var_113_bool); // 0x3fb Call
	var_114_bool = var_113_bool == 0; // 0x3fd Not
	if(var_114_bool == 0) goto Label_1024; // 0x3fe JumpB
	return 0; // 0x3ff Return
	
Label_1024:
	var_115_bool = var_112_string == var_2_object; // 0x400 Eq
	if(var_115_bool == 0) goto Label_1027; // 0x401 JumpB
	return 0; // 0x402 Return
	
Label_1027:
	var_116_string = ""; // 0x403 PushV
	var_116_string = var_112_string; // 0x404 Mov
	func_1440(var_116_string); // 0x405 Call
	var_2_object = var_112_string; // 0x407 TMov
	return 0; // 0x408 Return
}


func_1663(var_102_bool)
{
	var_104_int = 0; var_105_string = ""; // 0x680 PushV
	var_105_string = "ood9Xan1"; // 0x681 MovS
	func_1475(var_104_int, var_105_string); // 0x682 Call
	var_106_int = 0; // 0x684 PushI
	var_107_bool = var_104_int == var_106_int; // 0x685 Eq
	if(var_107_bool == 0) goto Label_1673; // 0x686 JumpB
	var_102_bool = 1; // 0x687 MovB
	return 0; // 0x688 Return
	
Label_1673:
	var_102_bool = 0; // 0x689 MovB
	return 0; // 0x68a Return
}


