task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xac PushI
	if(var_9_int == 0) goto Label_559; // 0xad JumpB
	func_1162(); // 0xaf NEW_2
	var_11_int = 28833; // 0xb1 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xb2 Eq
	if(var_12_bool == 0) goto Label_185; // 0xb3 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xb4 PushV
	var_13_object = var_1_object; // 0xb5 MovT
	var_14_object = var_0_object; // 0xb6 MovT
	func_1223(); // 0xb7 NEW_2
	
Label_185:
	var_40_int = 28836; // 0xb9 PushI
	var_41_bool = var_8_bool == var_40_int; // 0xba Eq
	if(var_41_bool == 0) goto Label_193; // 0xbb JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xbc PushV
	var_42_object = var_1_object; // 0xbd MovT
	var_43_object = var_0_object; // 0xbe MovT
	func_1223(); // 0xbf NEW_2
	
Label_193:
	var_44_int = 28837; // 0xc1 PushI
	var_45_bool = var_8_bool == var_44_int; // 0xc2 Eq
	if(var_45_bool == 0) goto Label_201; // 0xc3 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xc4 PushV
	var_46_object = var_1_object; // 0xc5 MovT
	var_47_object = var_0_object; // 0xc6 MovT
	func_1223(); // 0xc7 NEW_2
	
Label_201:
	var_48_int = 28506; // 0xc9 PushI
	var_49_bool = var_7_cvector == var_48_int; // 0xca Eq
	if(var_49_bool == 0) goto Label_234; // 0xcb JumpB
	var_50_string = ""; // 0xcc PushV
	var_50_string = "Neutral"; // 0xcd MovS
	func_149(var_8_bool, var_50_string); // 0xce NEW_2
	var_67_int = 527198; // 0xd0 PushI
	SetMessage(var_67_int); // 0xd1 TObjFunc
	ClearReplies(); // 0xd3 TObjFunc
	var_68_bool = 0; var_69_object = Obj(); // 0xd5 PushV
	var_69_object = var_1_object; // 0xd6 MovT
	func_1232(var_69_object); // 0xd7 NEW_2
	if(var_68_bool == 0) goto Label_223; // 0xd9 JumpB
	var_76_int = 527199; // 0xda PushI
	var_77_int = 28789; // 0xdb PushI
	var_78_int = 28507; // 0xdc PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xdd TObjFunc
	
Label_223:
	var_79_int = 527202; // 0xdf PushI
	var_80_int = -1; // 0xe0 PushI
	var_81_int = 28510; // 0xe1 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xe2 TObjFunc
	var_82_int = 527506; // 0xe4 PushI
	var_83_int = -1; // 0xe5 PushI
	var_84_int = 28838; // 0xe6 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_85_int = 28789; // 0xea PushI
	var_86_bool = var_7_cvector == var_85_int; // 0xeb Eq
	if(var_86_bool == 0) goto Label_257; // 0xec JumpB
	var_87_string = ""; // 0xed PushV
	var_87_string = "Sorrow"; // 0xee MovS
	func_149(var_8_bool, var_87_string); // 0xef NEW_2
	var_88_int = 527465; // 0xf1 PushI
	SetMessage(var_88_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_89_int = 527466; // 0xf6 PushI
	var_90_int = 28792; // 0xf7 PushI
	var_91_int = 28791; // 0xf8 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0xf9 TObjFunc
	var_92_int = 527468; // 0xfb PushI
	var_93_int = 28792; // 0xfc PushI
	var_94_int = 28793; // 0xfd PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_95_int = 28792; // 0x101 PushI
	var_96_bool = var_7_cvector == var_95_int; // 0x102 Eq
	if(var_96_bool == 0) goto Label_275; // 0x103 JumpB
	var_97_string = ""; // 0x104 PushV
	var_97_string = "Sorrow"; // 0x105 MovS
	func_149(var_8_bool, var_97_string); // 0x106 NEW_2
	var_98_int = 527467; // 0x108 PushI
	SetMessage(var_98_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_99_int = 527469; // 0x10d PushI
	var_100_int = 28796; // 0x10e PushI
	var_101_int = 28795; // 0x10f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_102_int = 28796; // 0x113 PushI
	var_103_bool = var_7_cvector == var_102_int; // 0x114 Eq
	if(var_103_bool == 0) goto Label_293; // 0x115 JumpB
	var_104_string = ""; // 0x116 PushV
	var_104_string = "Menace"; // 0x117 MovS
	func_149(var_8_bool, var_104_string); // 0x118 NEW_2
	var_105_int = 527470; // 0x11a PushI
	SetMessage(var_105_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_106_int = 527477; // 0x11f PushI
	var_107_int = 28804; // 0x120 PushI
	var_108_int = 28803; // 0x121 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x122 TObjFunc
	return 0; // 0x124 Return
	
Label_293:
	var_109_int = 28798; // 0x125 PushI
	var_110_bool = var_7_cvector == var_109_int; // 0x126 Eq
	if(var_110_bool == 0) goto Label_296; // 0x127 JumpB
	
Label_296:
	var_111_int = 28800; // 0x128 PushI
	var_112_bool = var_7_cvector == var_111_int; // 0x129 Eq
	if(var_112_bool == 0) goto Label_314; // 0x12a JumpB
	var_113_string = ""; // 0x12b PushV
	var_113_string = "Menace"; // 0x12c MovS
	func_149(var_8_bool, var_113_string); // 0x12d NEW_2
	var_114_int = 527474; // 0x12f PushI
	SetMessage(var_114_int); // 0x130 TObjFunc
	ClearReplies(); // 0x132 TObjFunc
	var_115_int = 527475; // 0x134 PushI
	var_116_int = 28802; // 0x135 PushI
	var_117_int = 28801; // 0x136 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x137 TObjFunc
	return 0; // 0x139 Return
	
Label_314:
	var_118_int = 28802; // 0x13a PushI
	var_119_bool = var_7_cvector == var_118_int; // 0x13b Eq
	if(var_119_bool == 0) goto Label_332; // 0x13c JumpB
	var_120_string = ""; // 0x13d PushV
	var_120_string = "Untrust"; // 0x13e MovS
	func_149(var_8_bool, var_120_string); // 0x13f NEW_2
	var_121_int = 527476; // 0x141 PushI
	SetMessage(var_121_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_122_int = 527491; // 0x146 PushI
	var_123_int = 28804; // 0x147 PushI
	var_124_int = 28818; // 0x148 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_125_int = 28804; // 0x14c PushI
	var_126_bool = var_7_cvector == var_125_int; // 0x14d Eq
	if(var_126_bool == 0) goto Label_355; // 0x14e JumpB
	var_127_string = ""; // 0x14f PushV
	var_127_string = "Menace"; // 0x150 MovS
	func_149(var_8_bool, var_127_string); // 0x151 NEW_2
	var_128_int = 527478; // 0x153 PushI
	SetMessage(var_128_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_129_int = 527479; // 0x158 PushI
	var_130_int = 28806; // 0x159 PushI
	var_131_int = 28805; // 0x15a PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x15b TObjFunc
	var_132_int = 527493; // 0x15d PushI
	var_133_int = 28806; // 0x15e PushI
	var_134_int = 28822; // 0x15f PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_135_int = 28806; // 0x163 PushI
	var_136_bool = var_7_cvector == var_135_int; // 0x164 Eq
	if(var_136_bool == 0) goto Label_378; // 0x165 JumpB
	var_137_string = ""; // 0x166 PushV
	var_137_string = "Sorrow"; // 0x167 MovS
	func_149(var_8_bool, var_137_string); // 0x168 NEW_2
	var_138_int = 527480; // 0x16a PushI
	SetMessage(var_138_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_139_int = 527481; // 0x16f PushI
	var_140_int = 28808; // 0x170 PushI
	var_141_int = 28807; // 0x171 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x172 TObjFunc
	var_142_int = 527494; // 0x174 PushI
	var_143_int = 28808; // 0x175 PushI
	var_144_int = 28824; // 0x176 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_145_int = 28808; // 0x17a PushI
	var_146_bool = var_7_cvector == var_145_int; // 0x17b Eq
	if(var_146_bool == 0) goto Label_401; // 0x17c JumpB
	var_147_string = ""; // 0x17d PushV
	var_147_string = "Neutral"; // 0x17e MovS
	func_149(var_8_bool, var_147_string); // 0x17f NEW_2
	var_148_int = 527482; // 0x181 PushI
	SetMessage(var_148_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_149_int = 527483; // 0x186 PushI
	var_150_int = 28810; // 0x187 PushI
	var_151_int = 28809; // 0x188 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x189 TObjFunc
	var_152_int = 527492; // 0x18b PushI
	var_153_int = 28810; // 0x18c PushI
	var_154_int = 28820; // 0x18d PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_155_int = 28810; // 0x191 PushI
	var_156_bool = var_7_cvector == var_155_int; // 0x192 Eq
	if(var_156_bool == 0) goto Label_424; // 0x193 JumpB
	var_157_string = ""; // 0x194 PushV
	var_157_string = "Neutral"; // 0x195 MovS
	func_149(var_8_bool, var_157_string); // 0x196 NEW_2
	var_158_int = 527484; // 0x198 PushI
	SetMessage(var_158_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_159_int = 527485; // 0x19d PushI
	var_160_int = 28813; // 0x19e PushI
	var_161_int = 28811; // 0x19f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1a0 TObjFunc
	var_162_int = 527486; // 0x1a2 PushI
	var_163_int = 28813; // 0x1a3 PushI
	var_164_int = 28812; // 0x1a4 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_165_int = 28813; // 0x1a8 PushI
	var_166_bool = var_7_cvector == var_165_int; // 0x1a9 Eq
	if(var_166_bool == 0) goto Label_442; // 0x1aa JumpB
	var_167_string = ""; // 0x1ab PushV
	var_167_string = "Neutral"; // 0x1ac MovS
	func_149(var_8_bool, var_167_string); // 0x1ad NEW_2
	var_168_int = 527487; // 0x1af PushI
	SetMessage(var_168_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_169_int = 527488; // 0x1b4 PushI
	var_170_int = 28816; // 0x1b5 PushI
	var_171_int = 28815; // 0x1b6 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_172_int = 28816; // 0x1ba PushI
	var_173_bool = var_7_cvector == var_172_int; // 0x1bb Eq
	if(var_173_bool == 0) goto Label_465; // 0x1bc JumpB
	var_174_string = ""; // 0x1bd PushV
	var_174_string = "Smile"; // 0x1be MovS
	func_149(var_8_bool, var_174_string); // 0x1bf NEW_2
	var_175_int = 527489; // 0x1c1 PushI
	SetMessage(var_175_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_176_int = 527490; // 0x1c6 PushI
	var_177_int = 28827; // 0x1c7 PushI
	var_178_int = 28817; // 0x1c8 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1c9 TObjFunc
	var_179_int = 527495; // 0x1cb PushI
	var_180_int = 28827; // 0x1cc PushI
	var_181_int = 28826; // 0x1cd PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_182_int = 28827; // 0x1d1 PushI
	var_183_bool = var_7_cvector == var_182_int; // 0x1d2 Eq
	if(var_183_bool == 0) goto Label_483; // 0x1d3 JumpB
	var_184_string = ""; // 0x1d4 PushV
	var_184_string = "Neutral"; // 0x1d5 MovS
	func_149(var_8_bool, var_184_string); // 0x1d6 NEW_2
	var_185_int = 527496; // 0x1d8 PushI
	SetMessage(var_185_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_186_int = 527497; // 0x1dd PushI
	var_187_int = 28829; // 0x1de PushI
	var_188_int = 28828; // 0x1df PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1e0 TObjFunc
	return 0; // 0x1e2 Return
	
Label_483:
	var_189_int = 28829; // 0x1e3 PushI
	var_190_bool = var_7_cvector == var_189_int; // 0x1e4 Eq
	if(var_190_bool == 0) goto Label_501; // 0x1e5 JumpB
	var_191_string = ""; // 0x1e6 PushV
	var_191_string = "Neutral"; // 0x1e7 MovS
	func_149(var_8_bool, var_191_string); // 0x1e8 NEW_2
	var_192_int = 527498; // 0x1ea PushI
	SetMessage(var_192_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_193_int = 527499; // 0x1ef PushI
	var_194_int = 28832; // 0x1f0 PushI
	var_195_int = 28831; // 0x1f1 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1f2 TObjFunc
	return 0; // 0x1f4 Return
	
Label_501:
	var_196_int = 28832; // 0x1f5 PushI
	var_197_bool = var_7_cvector == var_196_int; // 0x1f6 Eq
	if(var_197_bool == 0) goto Label_524; // 0x1f7 JumpB
	var_198_string = ""; // 0x1f8 PushV
	var_198_string = "Neutral"; // 0x1f9 MovS
	func_149(var_8_bool, var_198_string); // 0x1fa NEW_2
	var_199_int = 527500; // 0x1fc PushI
	SetMessage(var_199_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_200_int = 527501; // 0x201 PushI
	var_201_int = -1; // 0x202 PushI
	var_202_int = 28833; // 0x203 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x204 TObjFunc
	var_203_int = 527502; // 0x206 PushI
	var_204_int = 28835; // 0x207 PushI
	var_205_int = 28834; // 0x208 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_206_int = 28835; // 0x20c PushI
	var_207_bool = var_7_cvector == var_206_int; // 0x20d Eq
	if(var_207_bool == 0) goto Label_547; // 0x20e JumpB
	var_208_string = ""; // 0x20f PushV
	var_208_string = "Menace"; // 0x210 MovS
	func_149(var_8_bool, var_208_string); // 0x211 NEW_2
	var_209_int = 527503; // 0x213 PushI
	SetMessage(var_209_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_210_int = 527504; // 0x218 PushI
	var_211_int = -1; // 0x219 PushI
	var_212_int = 28836; // 0x21a PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x21b TObjFunc
	var_213_int = 527505; // 0x21d PushI
	var_214_int = -1; // 0x21e PushI
	var_215_int = 28837; // 0x21f PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_3_string = 1; // 0x223 TMovB
	var_216_bool = 0; // 0x224 PushV
	func_1323(var_216_bool); // 0x225 NEW_2
	if(var_216_bool == 0) goto Label_555; // 0x227 JumpB
	lshStopAnimation(); // 0x228 Func
	goto Label_557; // 0x22a Jump
	
Label_557:
	return 0; // 0x22d Return
	
Label_555:
	StopAnimation(); // 0x22b Func
	
Label_559:
	return 0; // 0x22f Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x23c PushV
	var_10_string = "cleanup"; // 0x23d PushS
	var_11_bool = var_7_string == var_10_string; // 0x23e Eq
	if(var_11_bool == 0) goto Label_587; // 0x23f JumpB
	var_1_object = 1; // 0x240 TMovB
	IsLoaded(var_9_bool); // 0x241 Func
	var_12_bool = var_9_bool == 0; // 0x243 Not
	if(var_12_bool == 0) goto Label_586; // 0x244 JumpB
	var_13_object = Obj(); // 0x245 PushV
	func_1169(var_13_object); // 0x246 NEW_2
	RemoveActor(var_13_object); // 0x248 Func
	
Label_586:
	goto Label_591; // 0x24a Jump
	
Label_591:
	return 2; // 0x24f Return
	
Label_587:
	var_16_string = "restore"; // 0x24b PushS
	var_17_bool = var_7_string == var_16_string; // 0x24c Eq
	if(var_17_bool == 0) goto Label_591; // 0x24d JumpB
	var_1_object = 0; // 0x24e TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x250 PushT
	if(var_7_object == 0) goto Label_601; // 0x251 JumpB
	var_8_object = Obj(); // 0x252 PushV
	func_1169(var_8_object); // 0x253 NEW_2
	RemoveActor(var_8_object); // 0x255 Func
	Hold(); // 0x257 Func
	
Label_601:
	func_716(); // 0x25a NEW_2
	return 0; // 0x25c Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_731(); // 0x25e NEW_2
	return 0; // 0x260 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x2a7 PushI
	var_9_bool = var_7_int == var_8_int; // 0x2a8 Eq
	if(var_9_bool == 0) goto Label_715; // 0x2a9 JumpB
	func_674(); // 0x2ab NEW_2
	var_11_bool = 0; // 0x2ad PushV
	var_11_bool = 0; // 0x2ae MovB
	var_12_bool = 0; // 0x2af PushV
	func_888(var_12_bool); // 0x2b0 NEW_2
	if(var_12_bool == 0) goto Label_696; // 0x2b2 JumpB
	var_15_bool = 0; // 0x2b3 PushV
	func_643(var_15_bool); // 0x2b4 NEW_2
	if(var_15_bool == 0) goto Label_696; // 0x2b6 JumpB
	var_11_bool = 1; // 0x2b7 MovB
	
Label_696:
	if(var_11_bool == 0) goto Label_709; // 0x2b8 JumpB
	var_32_bool = 0; // 0x2b9 PushV
	func_623(var_32_bool); // 0x2ba NEW_2
	if(var_32_bool == 0) goto Label_708; // 0x2bc JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x2bd PushV
	var_53_object = Obj(); // 0x2be PushV
	func_1169(var_53_object); // 0x2bf NEW_2
	var_52_object = var_53_object; // 0x2c0 Mov
	func_1036(var_52_object); // 0x2c2 NEW_2
	
Label_708:
	goto Label_715; // 0x2c4 Jump
	
Label_715:
	return 0; // 0x2cb Return
	
Label_709:
	func_638(var_7_int); // 0x2c6 NEW_2
	func_665(); // 0x2c9 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2e9 Push
	if(var_8_bool == 0) goto Label_751; // 0x2ea JumpB
	func_665(); // 0x2ec NEW_2
	goto Label_755; // 0x2ee Jump
	
Label_755:
	return 0; // 0x2f3 Return
	
Label_751:
	var_14_string = ""; // 0x2ef PushV
	var_14_string = "Neutral"; // 0x2f0 MovS
	func_1116(var_14_string); // 0x2f1 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2f4 PushV
	IsOverrideActive(var_9_bool); // 0x2f5 Func
	var_10_bool = var_9_bool == 0; // 0x2f7 Not
	if(var_10_bool == 0) goto Label_784; // 0x2f8 JumpB
	EventDisable(0); // 0x2f9 EventDisable
	func_856(); // 0x2fb NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2fd PushV
	var_12_object = var_7_object; // 0x2fe Mov
	func_879(var_12_object); // 0x2ff NEW_2
	EventEnable(0); // 0x301 EventEnable
	var_25_object = Obj(); // 0x302 PushV
	var_25_object = var_7_object; // 0x303 Mov
	func_560(var_25_object); // 0x304 NEW_2
	var_260_string = ""; // 0x306 PushV
	var_260_string = "Neutral"; // 0x307 MovS
	func_1116(var_260_string); // 0x308 NEW_2
	func_674(); // 0x30b NEW_2
	func_665(); // 0x30e NEW_2
	
Label_784:
	return 2; // 0x310 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_609(var_6_bool); // 0x239 NEW_2
	return 0; // 0x23b Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_893(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1317(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1315(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1319(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1321(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1298(var_88_int); // 0x22 NEW_2
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
	func_1169(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_978(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_252_bool = var_36_bool == 0; // 0x3f Not
	if(var_252_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_253_object = Obj(); // 0x46 PushV
	var_253_object = var_27_object; // 0x47 Mov
	func_961(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_643(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x283 PushV
	var_20_string = "player"; // 0x284 PushS
	FindActor(var_18_object, var_20_string); // 0x285 Func
	var_21_bool = var_18_object == 0; // 0x287 Not
	if(var_21_bool == 0) goto Label_651; // 0x288 JumpB
	var_15_bool = 0; // 0x289 MovB
	return 4; // 0x28a Return
	
Label_651:
	var_22_float = 0; var_23_object = Obj(); // 0x28b PushV
	var_23_object = var_18_object; // 0x28c Mov
	func_861(var_23_object); // 0x28d NEW_2
	var_30_float = 90000.0; // 0x28f PushF
	var_31_bool = var_22_float > var_30_float; // 0x290 GT
	if(var_31_bool == 0) goto Label_660; // 0x291 JumpB
	var_15_bool = 0; // 0x292 MovB
	return 4; // 0x293 Return
	
Label_660:
	CanSee(var_19_bool, var_18_object); // 0x294 Func
	var_15_bool = var_19_bool; // 0x296 Mov
	return 4; // 0x297 Return
}


func_1162()
{
	var_10_bool = 0; // 0x48a PushV
	func_1323(var_10_bool); // 0x48b NEW_2
	if(var_10_bool == 0) goto Label_1168; // 0x48d JumpB
	lshStopSpeech(); // 0x48e Func
	
Label_1168:
	return 0; // 0x490 Return
}


func_1036(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x40c PushV
	var_115_string = "c"; // 0x40d MovS
	var_116_int = 0; // 0x40e MovI
	
Label_1039:
	var_120_int = 1; // 0x40f PushI
	if(var_120_int == 0) goto Label_1052; // 0x410 JumpB
	var_121_int = 1; // 0x411 PushI
	var_122_int = var_116_int + var_121_int; // 0x412 Add
	var_123_int = var_115_string + var_122_int; // 0x413 Add
	HasProperty(var_123_int, var_117_bool); // 0x414 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x416 Not
	if(var_124_bool == 0) goto Label_1049; // 0x417 JumpB
	goto Label_1052; // 0x418 Jump
	
Label_1052:
	var_125_bool = var_116_int == 0; // 0x41c Not
	if(var_125_bool == 0) goto Label_1056; // 0x41d JumpB
	var_108_bool = 0; // 0x41e MovB
	return 10; // 0x41f Return
	
Label_1056:
	var_118_int = 0; // 0x420 MovI
	var_126_int = 1; // 0x421 PushI
	var_127_bool = var_116_int > var_126_int; // 0x422 GT
	if(var_127_bool == 0) goto Label_1062; // 0x423 JumpB
	irand(var_118_int, var_116_int); // 0x424 Func
	
Label_1062:
	var_128_int = 1; // 0x426 PushI
	var_129_int = var_118_int + var_128_int; // 0x427 Add
	var_130_int = var_115_string + var_129_int; // 0x428 Add
	GetProperty(var_130_int, var_119_string); // 0x429 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x42b PushV
	var_132_string = var_119_string; // 0x42c Mov
	func_1147(var_131_bool, var_132_string); // 0x42d NEW_2
	var_108_bool = var_131_bool; // 0x42e Mov
	return 10; // 0x430 Return
	
Label_1049:
	var_137_int = 1; // 0x419 PushI
	var_116_int = var_116_int + var_137_int; // 0x41a Add2
	goto Label_1039; // 0x41b Jump
}


func_1169(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x491 PushV
	self(var_101_object); // 0x492 Func
	var_99_object = var_101_object; // 0x494 Mov
	return 2; // 0x495 Return
}


func_1298(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x512 PushV
	var_91_string = "branch"; // 0x513 PushS
	GetVariable(var_91_string, var_90_int); // 0x514 Func
	var_92_int = 0; // 0x516 PushI
	var_93_bool = var_90_int == var_92_int; // 0x517 Eq
	if(var_93_bool == 0) goto Label_1308; // 0x518 JumpB
	var_88_int = 1; // 0x519 MovI
	return 2; // 0x51a Return
	
Label_1308:
	var_94_int = 1; // 0x51c PushI
	var_95_bool = var_90_int == var_94_int; // 0x51d Eq
	if(var_95_bool == 0) goto Label_1313; // 0x51e JumpB
	var_88_int = 2; // 0x51f MovI
	return 2; // 0x520 Return
	
Label_1313:
	var_88_int = 3; // 0x521 MovI
	return 2; // 0x522 Return
}


func_785()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x311 PushV
	WaitForAnimEnd(); // 0x312 Func
	var_23_bool = 0; // 0x314 PushV
	func_888(var_23_bool); // 0x315 NEW_2
	var_24_bool = var_23_bool == 0; // 0x317 Not
	if(var_24_bool == 0) goto Label_794; // 0x318 JumpB
	return 12; // 0x319 Return
	
Label_794:
	var_25_int = 0; // 0x31a PushV
	func_1206(var_25_int); // 0x31b NEW_2
	var_17_int = var_25_int; // 0x31c Mov
	var_18_int = 0; // 0x31e MovI
	
Label_799:
	var_38_bool = 0; // 0x31f PushV
	var_38_bool = 0; // 0x320 MovB
	var_39_int = 5; // 0x321 PushI
	var_40_bool = var_18_int < var_39_int; // 0x322 LT
	if(var_40_bool == 0) goto Label_809; // 0x323 JumpB
	var_41_bool = 0; // 0x324 PushV
	func_888(var_41_bool); // 0x325 NEW_2
	if(var_41_bool == 0) goto Label_809; // 0x327 JumpB
	var_38_bool = 1; // 0x328 MovB
	
Label_809:
	if(var_38_bool == 0) goto Label_851; // 0x329 JumpB
	var_42_bool = var_17_int == 0; // 0x32a Not
	if(var_42_bool == 0) goto Label_819; // 0x32b JumpB
	var_43_int = 3; // 0x32c PushI
	Sleep(var_43_int, var_19_bool); // 0x32d Func
	var_44_bool = var_19_bool == 0; // 0x32f Not
	if(var_44_bool == 0) goto Label_818; // 0x330 JumpB
	goto Label_851; // 0x331 Jump
	
Label_851:
	ResetAAS(); // 0x353 Func
	return 12; // 0x355 Return
	
Label_818:
	goto Label_840; // 0x332 Jump
	
Label_840:
	var_45_bool = 0; // 0x348 PushV
	func_854(var_45_bool); // 0x349 NEW_2
	var_46_bool = var_45_bool == 0; // 0x34b Not
	if(var_46_bool == 0) goto Label_846; // 0x34c JumpB
	goto Label_851; // 0x34d Jump
	
Label_846:
	ResetAAS(); // 0x34e Func
	var_47_int = 1; // 0x350 PushI
	var_18_int = var_18_int + var_47_int; // 0x351 Add2
	goto Label_799; // 0x352 Jump
	
Label_819:
	irand(var_20_int, var_17_int); // 0x333 Func
	var_48_int = 5; // 0x335 PushI
	irand(var_21_int, var_48_int); // 0x336 Func
	var_49_int = 0; // 0x338 PushI
	var_50_bool = var_21_int != var_49_int; // 0x339 Neq
	if(var_50_bool == 0) goto Label_828; // 0x33a JumpB
	var_20_int = 0; // 0x33b MovI
	
Label_828:
	var_51_string = "all"; // 0x33c PushS
	var_52_string = ""; var_53_int = 0; // 0x33d PushV
	var_53_int = var_20_int; // 0x33e Mov
	func_1199(var_52_string, var_53_int); // 0x33f NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x341 Func
	WaitForAnimEnd(var_22_bool); // 0x343 Func
	var_54_bool = var_22_bool == 0; // 0x345 Not
	if(var_54_bool == 0) goto Label_840; // 0x346 JumpB
	goto Label_851; // 0x347 Jump
}


func_149(var_2_object, var_199_string)
{
	var_200_bool = 0; // 0x96 PushV
	func_1323(var_200_bool); // 0x97 NEW_2
	var_201_bool = var_200_bool == 0; // 0x99 Not
	if(var_201_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_202_bool = var_199_string == var_2_object; // 0x9c Eq
	if(var_202_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_203_string = ""; var_204_bool = 0; // 0x9f PushV
	var_203_string = var_199_string; // 0xa0 Mov
	var_205_string = ""; // 0xa1 PushS
	var_206_bool = var_199_string == var_205_string; // 0xa2 Eq
	if(var_206_bool == 0) goto Label_166; // 0xa3 JumpB
	var_204_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_1132(var_203_string, var_204_bool); // 0xa7 NEW_2
	var_2_object = var_199_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_204_bool = 1; // 0xa6 MovB
}


func_1175(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x497 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x498 Or
	var_68_float = sqrt(var_69_int); // 0x499 Sqrt2
	var_70_float = 0.0; // 0x49a PushF
	var_71_bool = var_68_float < var_70_float; // 0x49b LT
	if(var_71_bool == 0) goto Label_1183; // 0x49c JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x49d MovV
	return 2; // 0x49e Return
	
Label_1183:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x49f Div2
	return 2; // 0x4a0 Return
}


func_665()
{
	var_262_float = 0; var_263_float = 0; // 0x299 PushV
	var_264_int = 8; // 0x29a PushI
	var_265_int = 16; // 0x29b PushI
	rand(var_263_float, var_264_int, var_265_int); // 0x29c Func
	var_266_int = 10; // 0x29e PushI
	SetTimer(var_266_int, var_263_float); // 0x29f Func
	return 2; // 0x2a1 Return
}


func_1185(var_219_int, var_220_string)
{
	var_221_int = 0; var_222_int = 0; // 0x4a1 PushV
	GetVariable(var_220_string, var_222_int); // 0x4a2 Func
	var_219_int = var_222_int; // 0x4a4 Mov
	return 2; // 0x4a5 Return
}


func_674()
{
	var_261_int = 10; // 0x2a2 PushI
	KillTimer(var_261_int); // 0x2a3 Func
	return 0; // 0x2a5 Return
}


func_1315(var_85_int)
{
	var_85_int = 515573; // 0x523 MovI
	return 0; // 0x524 Return
}


func_1317(var_84_int)
{
	var_84_int = 504032; // 0x525 MovI
	return 0; // 0x526 Return
}


func_1190(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x4a6 PushV
	GetGameTime(var_154_float); // 0x4a7 Func
	var_155_int = 1; // 0x4a9 PushI
	var_156_int = 0; // 0x4aa PushV
	var_157_int = 24; // 0x4ab PushI
	var_156_int = var_154_float / var_154_float; // 0x4ac Div2
	var_152_int = var_155_int + var_156_int; // 0x4ad Add2
	return 2; // 0x4ae Return
}


func_1319(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr.png"; // 0x527 MovS
	return 0; // 0x528 Return
}


func_1321(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr_b.png"; // 0x529 MovS
	return 0; // 0x52a Return
}


func_1323(var_79_bool)
{
	var_79_bool = 1; // 0x52b MovB
	return 0; // 0x52c Return
}


func_1199(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4af PushV
	var_34_string = "idle"; // 0x4b0 MovS
	var_35_int = var_32_int; // 0x4b1 Push
	if(var_35_int == 0) goto Label_1204; // 0x4b2 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4b3 Add2
	
Label_1204:
	var_31_string = var_34_string; // 0x4b4 Mov
	return 2; // 0x4b5 Return
}


func_560(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x231 PushV
	var_27_object = var_25_object; // 0x232 Mov
	TaskCall(0); // 0x233 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x234 NEW_2
	TaskReturn(); // 0x235 TaskReturn
	return 0; // 0x237 Return
}


func_1073(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x431 PushV
	var_151_string = "d"; // 0x432 PushS
	var_152_int = 0; // 0x433 PushV
	func_1190(var_152_int); // 0x434 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x436 Add
	var_159_string = "m"; // 0x437 PushS
	var_146_string = var_158_int + var_159_string; // 0x438 Add2
	var_147_int = 0; // 0x439 MovI
	
Label_1082:
	var_160_int = 1; // 0x43a PushI
	if(var_160_int == 0) goto Label_1095; // 0x43b JumpB
	var_161_int = 1; // 0x43c PushI
	var_162_int = var_147_int + var_161_int; // 0x43d Add
	var_163_int = var_146_string + var_162_int; // 0x43e Add
	HasProperty(var_163_int, var_148_bool); // 0x43f ObjFunc
	var_164_bool = var_148_bool == 0; // 0x441 Not
	if(var_164_bool == 0) goto Label_1092; // 0x442 JumpB
	goto Label_1095; // 0x443 Jump
	
Label_1095:
	var_165_bool = var_147_int == 0; // 0x447 Not
	if(var_165_bool == 0) goto Label_1099; // 0x448 JumpB
	var_139_bool = 0; // 0x449 MovB
	return 10; // 0x44a Return
	
Label_1099:
	var_149_int = 0; // 0x44b MovI
	var_166_int = 1; // 0x44c PushI
	var_167_bool = var_147_int > var_166_int; // 0x44d GT
	if(var_167_bool == 0) goto Label_1105; // 0x44e JumpB
	irand(var_149_int, var_147_int); // 0x44f Func
	
Label_1105:
	var_168_int = 1; // 0x451 PushI
	var_169_int = var_149_int + var_168_int; // 0x452 Add
	var_170_int = var_146_string + var_169_int; // 0x453 Add
	GetProperty(var_170_int, var_150_string); // 0x454 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x456 PushV
	var_172_string = var_150_string; // 0x457 Mov
	func_1147(var_171_bool, var_172_string); // 0x458 NEW_2
	var_139_bool = var_171_bool; // 0x459 Mov
	return 10; // 0x45b Return
	
Label_1092:
	var_173_int = 1; // 0x444 PushI
	var_147_int = var_147_int + var_173_int; // 0x445 Add2
	goto Label_1082; // 0x446 Jump
}


func_1206(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4b6 PushV
	var_28_int = 0; // 0x4b7 MovI
	
Label_1208:
	var_30_string = "all"; // 0x4b8 PushS
	var_31_string = ""; var_32_int = 0; // 0x4b9 PushV
	var_32_int = var_28_int; // 0x4ba Mov
	func_1199(var_31_string, var_32_int); // 0x4bb NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4bd Func
	var_36_bool = var_29_bool == 0; // 0x4bf Not
	if(var_36_bool == 0) goto Label_1218; // 0x4c0 JumpB
	goto Label_1221; // 0x4c1 Jump
	
Label_1221:
	var_25_int = var_28_int; // 0x4c5 Mov
	return 4; // 0x4c6 Return
	
Label_1218:
	var_37_int = 1; // 0x4c2 PushI
	var_28_int = var_28_int + var_37_int; // 0x4c3 Add2
	goto Label_1208; // 0x4c4 Jump
}


func_961()
{
	var_254_bool = 0; var_255_bool = 0; // 0x3c1 PushV
	CameraSwitchToNormal(); // 0x3c2 Func
	var_256_bool = 0; // 0x3c4 PushV
	func_1323(var_256_bool); // 0x3c5 NEW_2
	if(var_256_bool == 0) goto Label_969; // 0x3c7 JumpB
	goto Label_977; // 0x3c8 Jump
	
Label_977:
	return 2; // 0x3d1 Return
	
Label_969:
	var_257_string = "head"; // 0x3c9 PushS
	HasAnimationTrack(var_255_bool, var_257_string); // 0x3ca Func
	var_258_bool = var_255_bool; // 0x3cc Push
	if(var_258_bool == 0) goto Label_977; // 0x3cd JumpB
	var_259_string = "head"; // 0x3ce PushS
	UnlookAsync(var_259_string); // 0x3cf Func
}


func_1223()
{
	var_15_string = "k11q01"; // 0x4c8 PushS
	var_16_int = 4; // 0x4c9 PushI
	SetVariable(var_15_string, var_16_int); // 0x4ca Func
	func_1244(); // 0x4cd NEW_2
	return 0; // 0x4cf Return
}


func_716()
{
	func_856(); // 0x2cd NEW_2
	func_674(); // 0x2d0 NEW_2
	lshStopSpeech(); // 0x2d2 Func
	lshStopAnimation(); // 0x2d4 Func
	StopAsync(); // 0x2d6 Func
	Hold(); // 0x2d8 Func
	return 0; // 0x2da Return
}


func_1232(var_217_bool)
{
	var_219_int = 0; var_220_string = ""; // 0x4d1 PushV
	var_220_string = "k11q01"; // 0x4d2 MovS
	func_1185(var_219_int, var_220_string); // 0x4d3 NEW_2
	var_223_int = 3; // 0x4d5 PushI
	var_224_bool = var_219_int == var_223_int; // 0x4d6 Eq
	if(var_224_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_217_bool = 1; // 0x4d8 MovB
	return 0; // 0x4d9 Return
	
Label_1242:
	var_217_bool = 0; // 0x4da MovB
	return 0; // 0x4db Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_119; // 0x56 JumpB
	var_199_string = ""; // 0x57 PushV
	var_199_string = "Neutral"; // 0x58 MovS
	func_149(var_193_object, var_199_string); // 0x59 NEW_2
	var_216_int = 527198; // 0x5b PushI
	SetMessage(var_216_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_217_bool = 0; var_218_object = Obj(); // 0x60 PushV
	var_218_object = var_1_object; // 0x61 MovT
	func_1232(var_218_object); // 0x62 NEW_2
	if(var_217_bool == 0) goto Label_106; // 0x64 JumpB
	var_225_int = 527199; // 0x65 PushI
	var_226_int = 28789; // 0x66 PushI
	var_227_int = 28507; // 0x67 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x68 TObjFunc
	
Label_106:
	var_228_int = 527202; // 0x6a PushI
	var_229_int = -1; // 0x6b PushI
	var_230_int = 28510; // 0x6c PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x6d TObjFunc
	var_231_int = 527506; // 0x6f PushI
	var_232_int = -1; // 0x70 PushI
	var_233_int = 28838; // 0x71 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_234_bool = 0; // 0x77 PushV
	func_1323(var_234_bool); // 0x78 NEW_2
	if(var_234_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_235_string = var_3_string; // 0x7d PushT
	if(var_235_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_236_string = ""; // 0x80 PushV
	var_236_string = var_2_object; // 0x81 MovT
	func_1116(var_236_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_247_string = "all"; // 0x86 PushS
	var_248_string = "idle"; // 0x87 PushS
	PlayAnimation(var_247_string, var_248_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_249_string = var_3_string; // 0x8c PushT
	if(var_249_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_250_string = "all"; // 0x8f PushS
	var_251_string = "idle"; // 0x90 PushS
	PlayAnimation(var_250_string, var_251_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_978(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3d2 PushV
	var_106_string = "voice_common"; // 0x3d3 PushS
	GetVariable(var_106_string, var_104_int); // 0x3d4 Func
	var_107_int = var_104_int; // 0x3d6 Push
	if(var_107_int == 0) goto Label_1016; // 0x3d7 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3d8 PushV
	var_109_object = var_98_object; // 0x3d9 Mov
	func_1036(var_109_object); // 0x3da NEW_2
	var_138_bool = var_108_bool == 0; // 0x3dc Not
	if(var_138_bool == 0) goto Label_998; // 0x3dd JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3de PushV
	var_140_object = var_98_object; // 0x3df Mov
	func_1073(var_140_object); // 0x3e0 NEW_2
	var_174_bool = var_139_bool == 0; // 0x3e2 Not
	if(var_174_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_97_bool = 0; // 0x3e4 MovB
	return 4; // 0x3e5 Return
	
Label_998:
	var_175_int = 2; // 0x3e6 PushI
	irand(var_105_int, var_175_int); // 0x3e7 Func
	var_176_int = var_105_int; // 0x3e9 Push
	if(var_176_int == 0) goto Label_1011; // 0x3ea JumpB
	var_177_string = "voice_common"; // 0x3eb PushS
	var_178_int = 1; // 0x3ec PushI
	var_179_int = var_104_int + var_178_int; // 0x3ed Add
	var_180_int = 3; // 0x3ee PushI
	var_181_int = var_179_int / var_180_int; // 0x3ef Mod
	SetVariable(var_177_string, var_181_int); // 0x3f0 Func
	goto Label_1015; // 0x3f2 Jump
	
Label_1015:
	goto Label_1034; // 0x3f7 Jump
	
Label_1034:
	var_97_bool = 1; // 0x40a MovB
	return 4; // 0x40b Return
	
Label_1011:
	var_182_string = "voice_common"; // 0x3f3 PushS
	var_183_int = 0; // 0x3f4 PushI
	SetVariable(var_182_string, var_183_int); // 0x3f5 Func
	
Label_1016:
	var_184_bool = 0; var_185_object = Obj(); // 0x3f8 PushV
	var_185_object = var_98_object; // 0x3f9 Mov
	func_1073(var_185_object); // 0x3fa NEW_2
	var_186_bool = var_184_bool == 0; // 0x3fc Not
	if(var_186_bool == 0) goto Label_1030; // 0x3fd JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3fe PushV
	var_188_object = var_98_object; // 0x3ff Mov
	func_1036(var_188_object); // 0x400 NEW_2
	var_189_bool = var_187_bool == 0; // 0x402 Not
	if(var_189_bool == 0) goto Label_1030; // 0x403 JumpB
	var_97_bool = 0; // 0x404 MovB
	return 4; // 0x405 Return
	
Label_1030:
	var_190_string = "voice_common"; // 0x406 PushS
	var_191_int = 1; // 0x407 PushI
	SetVariable(var_190_string, var_191_int); // 0x408 Func
}


func_854(var_45_bool)
{
	var_45_bool = 1; // 0x356 MovB
	return 0; // 0x357 Return
}


func_856()
{
	StopAnimation(); // 0x358 Func
	StopGroup0(); // 0x35a Func
	return 0; // 0x35c Return
}


func_731()
{
	StopGroup0(); // 0x2db Func
	func_674(); // 0x2de NEW_2
	var_8_string = ""; // 0x2e0 PushV
	var_8_string = "Neutral"; // 0x2e1 MovS
	func_1116(var_8_string); // 0x2e2 NEW_2
	func_665(); // 0x2e5 NEW_2
	return 0; // 0x2e7 Return
}


func_1116(var_236_string)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0; // 0x45c PushV
	lshHasAnimation(var_240_bool, var_236_string); // 0x45d Func
	var_243_bool = var_240_bool; // 0x45f Push
	if(var_243_bool == 0) goto Label_1127; // 0x460 JumpB
	lshGetAnimTimes(var_236_string, var_241_float, var_242_float); // 0x461 Func
	var_244_bool = 0; // 0x463 PushB
	lshPlayAnimation(var_241_float, var_242_float, var_244_bool); // 0x464 Func
	goto Label_1131; // 0x466 Jump
	
Label_1131:
	return 6; // 0x46b Return
	
Label_1127:
	var_245_string = "Can't find lsh animation : "; // 0x467 PushS
	var_246_int = var_245_string + var_236_string; // 0x468 Add
	Trace(var_246_int); // 0x469 Func
}


func_861(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x35d PushV
	GetPosition(var_27_cvector); // 0x35e Func
	GetPosition(var_28_cvector); // 0x360 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x362 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x363 Or2
	return 6; // 0x364 Return
}


func_1244()
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4dc PushV
	var_19_int = 487; // 0x4dd PushI
	var_20_int = 1; // 0x4de PushI
	var_21_int = 528054; // 0x4df PushI
	CreateDiaryEntry(var_18_object, var_19_int, var_20_int, var_21_int); // 0x4e0 Func
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0; // 0x4e2 PushV
	var_23_object = var_18_object; // 0x4e3 Mov
	var_24_int = 480; // 0x4e4 MovI
	func_1270(var_22_bool, var_23_object, var_24_int); // 0x4e5 NEW_2
	return 2; // 0x4e7 Return
}


func_609(var_0_object)
{
	var_7_bool = 0; // 0x261 PushV
	func_888(var_7_bool); // 0x262 NEW_2
	var_10_bool = var_7_bool == 0; // 0x264 Not
	if(var_10_bool == 0) goto Label_616; // 0x265 JumpB
	Hold(); // 0x266 Func
	
Label_616:
	GetDirection(var_0_object); // 0x268 Func
	
Label_618:
	func_785(); // 0x26b NEW_2
	goto Label_618; // 0x26d Jump
}


func_869(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x365 PushV
	GetPosition(var_20_cvector); // 0x366 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x368 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x369 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x36a PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x36b Func
	var_15_bool = var_22_bool; // 0x36d Mov
	return 6; // 0x36e Return
}


func_1257(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x4e9 PushV
	GetDiaryRoot(var_33_object); // 0x4ea Func
	var_34_bool = var_33_object == 0; // 0x4ec Not
	if(var_34_bool == 0) goto Label_1267; // 0x4ed JumpB
	var_35_string = "Can't retrieve diary root"; // 0x4ee PushS
	Trace(var_35_string); // 0x4ef Func
	var_31_object = 0; // 0x4f1 MovB
	return 2; // 0x4f2 Return
	
Label_1267:
	var_31_object = var_33_object; // 0x4f3 Mov
	return 2; // 0x4f4 Return
}


func_1132(var_203_string, var_204_bool)
{
	var_207_bool = 0; var_208_float = 0; var_209_float = 0; var_210_bool = 0; var_211_float = 0; var_212_float = 0; // 0x46c PushV
	lshHasAnimation(var_210_bool, var_203_string); // 0x46d Func
	var_213_bool = var_210_bool; // 0x46f Push
	if(var_213_bool == 0) goto Label_1142; // 0x470 JumpB
	lshGetAnimTimes(var_203_string, var_211_float, var_212_float); // 0x471 Func
	lshPlayAnimation(var_211_float, var_212_float, var_204_bool); // 0x473 Func
	goto Label_1146; // 0x475 Jump
	
Label_1146:
	return 6; // 0x47a Return
	
Label_1142:
	var_214_string = "Can't find lsh animation : "; // 0x476 PushS
	var_215_int = var_214_string + var_203_string; // 0x477 Add
	Trace(var_215_int); // 0x478 Func
}


func_879(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x36f PushV
	GetPosition(var_14_cvector); // 0x370 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x372 PushV
	var_16_cvector = var_14_cvector; // 0x373 Mov
	func_869(var_15_bool, var_16_cvector); // 0x374 NEW_2
	var_11_bool = var_15_bool; // 0x375 Mov
	return 2; // 0x377 Return
}


func_623(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x26f PushV
	var_35_string = "player"; // 0x270 PushS
	FindActor(var_34_object, var_35_string); // 0x271 Func
	var_36_bool = var_34_object == 0; // 0x273 Not
	if(var_36_bool == 0) goto Label_631; // 0x274 JumpB
	var_32_bool = 0; // 0x275 MovB
	return 2; // 0x276 Return
	
Label_631:
	var_37_bool = 0; var_38_object = Obj(); // 0x277 PushV
	var_38_object = var_34_object; // 0x278 Mov
	func_879(var_38_object); // 0x279 NEW_2
	var_32_bool = var_37_bool; // 0x27a Mov
	return 2; // 0x27c Return
}


func_1270(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; // 0x4f6 PushV
	var_31_object = Obj(); // 0x4f7 PushV
	func_1257(var_31_object); // 0x4f8 NEW_2
	var_28_object = var_31_object; // 0x4f9 Mov
	Find(var_24_int, var_29_object); // 0x4fb ObjFunc
	var_36_bool = var_29_object == 0; // 0x4fd Not
	if(var_36_bool == 0) goto Label_1285; // 0x4fe JumpB
	var_37_string = "Can't find diary parent with id: "; // 0x4ff PushS
	var_38_int = var_37_string + var_24_int; // 0x500 Add
	Trace(var_38_int); // 0x501 Func
	var_22_bool = 0; // 0x503 MovB
	return 6; // 0x504 Return
	
Label_1285:
	AddChild(var_23_object); // 0x505 ObjFunc
	var_39_int = 7; // 0x507 PushI
	SendWorldWndMessage(var_39_int); // 0x508 Func
	GetCategory(var_30_int); // 0x50a ObjFunc
	SetDiarySection(var_30_int); // 0x50c Func
	var_22_bool = 0; // 0x50e MovB
	return 6; // 0x50f Return
}


func_888(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x378 PushV
	IsLoaded(var_9_bool); // 0x379 Func
	var_7_bool = var_9_bool; // 0x37b Mov
	return 2; // 0x37c Return
}


func_1147(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x47b PushV
	var_135_bool = 0; // 0x47c PushV
	func_1323(var_135_bool); // 0x47d NEW_2
	if(var_135_bool == 0) goto Label_1160; // 0x47f JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x480 Func
	var_136_bool = var_134_bool; // 0x482 Push
	if(var_136_bool == 0) goto Label_1160; // 0x483 JumpB
	lshPlaySpeech(var_132_string); // 0x484 Func
	var_131_bool = 1; // 0x486 MovB
	return 2; // 0x487 Return
	
Label_1160:
	var_131_bool = 0; // 0x488 MovB
	return 2; // 0x489 Return
}


func_893(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x37d PushV
	GetPosition(var_50_cvector); // 0x37e ObjFunc
	GetEyesHeight(var_49_float); // 0x380 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x382 PushE
	var_58_float = var_58_float + var_49_float; // 0x383 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x384 PopE
	GetPosition(var_51_cvector); // 0x385 Func
	GetEyesHeight(var_49_float); // 0x387 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x389 PushE
	var_59_float = var_59_float + var_49_float; // 0x38a Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x38b PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x38c Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x38d PushE
	var_60_float = 0; // 0x38e MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x38f PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x390 Or
	var_62_float = sqrt(var_61_int); // 0x391 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x392 Div2
	var_53_cvector = -var_52_cvector; // 0x393 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x394 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x395 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x396 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x397 Xor2
	func_1175(var_64_cvector, var_65_cvector); // 0x398 NEW_2
	var_72_int = 25; // 0x39a PushI
	var_73_float = var_64_cvector * var_72_int; // 0x39b Mult
	var_74_int = var_63_float + var_73_float; // 0x39c Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x39d PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x39e Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x39f Add2
	IsOverrideActive(var_56_bool); // 0x3a0 Func
	var_76_bool = var_56_bool; // 0x3a2 Push
	if(var_76_bool == 0) goto Label_934; // 0x3a3 JumpB
	var_37_bool = 0; // 0x3a4 MovB
	return 18; // 0x3a5 Return
	
Label_934:
	StopWorld(); // 0x3a6 Func
	CameraTransit(var_55_cvector, var_53_cvector); // 0x3a8 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x3aa PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x3ab PushE
	Rotate(var_77_float, var_78_float); // 0x3ac Func
	var_79_bool = 0; // 0x3ae PushV
	func_1323(var_79_bool); // 0x3af NEW_2
	if(var_79_bool == 0) goto Label_947; // 0x3b1 JumpB
	goto Label_955; // 0x3b2 Jump
	
Label_955:
	CameraWaitForPlayFinish(); // 0x3bb Func
	ResumeWorld(); // 0x3bd Func
	var_37_bool = 1; // 0x3bf MovB
	return 18; // 0x3c0 Return
	
Label_947:
	var_80_string = "head"; // 0x3b3 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x3b4 Func
	var_81_bool = var_57_bool; // 0x3b6 Push
	if(var_81_bool == 0) goto Label_955; // 0x3b7 JumpB
	var_82_string = "head"; // 0x3b8 PushS
	LookAsyncCamera(var_82_string); // 0x3b9 Func
}


func_638(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x27e PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x27f PushE
	RotateAsync(var_84_float, var_85_float); // 0x280 Func
	return 0; // 0x282 Return
}


