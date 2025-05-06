task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xa7 PushI
	if(var_8_int == 0) goto Label_507; // 0xa8 JumpB
	func_835(); // 0xaa NEW_2
	var_10_int = 13708; // 0xac PushI
	var_11_bool = var_7_bool == var_10_int; // 0xad Eq
	if(var_11_bool == 0) goto Label_185; // 0xae JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xaf PushV
	var_12_object = var_1_object; // 0xb0 MovT
	var_13_object = var_0_object; // 0xb1 MovT
	func_917(); // 0xb2 NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xb4 PushV
	var_16_object = var_1_object; // 0xb5 MovT
	var_17_object = var_0_object; // 0xb6 MovT
	func_889(); // 0xb7 NEW_2
	
Label_185:
	var_65_int = 11632; // 0xb9 PushI
	var_66_bool = var_6_int == var_65_int; // 0xba Eq
	if(var_66_bool == 0) goto Label_213; // 0xbb JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0xbc PushV
	var_68_object = var_1_object; // 0xbd MovT
	func_923(var_68_object); // 0xbe NEW_2
	if(var_67_bool == 0) goto Label_213; // 0xc0 JumpB
	var_75_string = ""; // 0xc1 PushV
	var_75_string = "Doubt"; // 0xc2 MovS
	func_144(var_7_bool, var_75_string); // 0xc3 NEW_2
	var_92_int = 510543; // 0xc5 PushI
	SetMessage(var_92_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_93_int = 510544; // 0xca PushI
	var_94_int = 11634; // 0xcb PushI
	var_95_int = 11633; // 0xcc PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xcd TObjFunc
	var_96_int = 510566; // 0xcf PushI
	var_97_int = 11634; // 0xd0 PushI
	var_98_int = 11655; // 0xd1 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_99_int = 16756; // 0xd5 PushI
	var_100_bool = var_6_int == var_99_int; // 0xd6 Eq
	if(var_100_bool == 0) goto Label_216; // 0xd7 JumpB
	
Label_216:
	var_101_int = 11650; // 0xd8 PushI
	var_102_bool = var_6_int == var_101_int; // 0xd9 Eq
	if(var_102_bool == 0) goto Label_234; // 0xda JumpB
	var_103_string = ""; // 0xdb PushV
	var_103_string = "Agression"; // 0xdc MovS
	func_144(var_7_bool, var_103_string); // 0xdd NEW_2
	var_104_int = 510561; // 0xdf PushI
	SetMessage(var_104_int); // 0xe0 TObjFunc
	ClearReplies(); // 0xe2 TObjFunc
	var_105_int = 510562; // 0xe4 PushI
	var_106_int = 11652; // 0xe5 PushI
	var_107_int = 11651; // 0xe6 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xe7 TObjFunc
	return 0; // 0xe9 Return
	
Label_234:
	var_108_int = 11652; // 0xea PushI
	var_109_bool = var_6_int == var_108_int; // 0xeb Eq
	if(var_109_bool == 0) goto Label_257; // 0xec JumpB
	var_110_string = ""; // 0xed PushV
	var_110_string = "Sorrow"; // 0xee MovS
	func_144(var_7_bool, var_110_string); // 0xef NEW_2
	var_111_int = 510563; // 0xf1 PushI
	SetMessage(var_111_int); // 0xf2 TObjFunc
	ClearReplies(); // 0xf4 TObjFunc
	var_112_int = 510564; // 0xf6 PushI
	var_113_int = 16749; // 0xf7 PushI
	var_114_int = 11653; // 0xf8 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xf9 TObjFunc
	var_115_int = 510565; // 0xfb PushI
	var_116_int = -1; // 0xfc PushI
	var_117_int = 11654; // 0xfd PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0xfe TObjFunc
	return 0; // 0x100 Return
	
Label_257:
	var_118_int = 11634; // 0x101 PushI
	var_119_bool = var_6_int == var_118_int; // 0x102 Eq
	if(var_119_bool == 0) goto Label_285; // 0x103 JumpB
	var_120_string = ""; // 0x104 PushV
	var_120_string = "Smile"; // 0x105 MovS
	func_144(var_7_bool, var_120_string); // 0x106 NEW_2
	var_121_int = 510545; // 0x108 PushI
	SetMessage(var_121_int); // 0x109 TObjFunc
	ClearReplies(); // 0x10b TObjFunc
	var_122_int = 510546; // 0x10d PushI
	var_123_int = 11636; // 0x10e PushI
	var_124_int = 11635; // 0x10f PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x110 TObjFunc
	var_125_int = 510553; // 0x112 PushI
	var_126_int = 11643; // 0x113 PushI
	var_127_int = 11642; // 0x114 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x115 TObjFunc
	var_128_int = 510557; // 0x117 PushI
	var_129_int = 11647; // 0x118 PushI
	var_130_int = 11646; // 0x119 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_131_int = 11647; // 0x11d PushI
	var_132_bool = var_6_int == var_131_int; // 0x11e Eq
	if(var_132_bool == 0) goto Label_303; // 0x11f JumpB
	var_133_string = ""; // 0x120 PushV
	var_133_string = "Agression"; // 0x121 MovS
	func_144(var_7_bool, var_133_string); // 0x122 NEW_2
	var_134_int = 510558; // 0x124 PushI
	SetMessage(var_134_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_135_int = 510559; // 0x129 PushI
	var_136_int = 16743; // 0x12a PushI
	var_137_int = 11648; // 0x12b PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_138_int = 11643; // 0x12f PushI
	var_139_bool = var_6_int == var_138_int; // 0x130 Eq
	if(var_139_bool == 0) goto Label_326; // 0x131 JumpB
	var_140_string = ""; // 0x132 PushV
	var_140_string = "Doubt"; // 0x133 MovS
	func_144(var_7_bool, var_140_string); // 0x134 NEW_2
	var_141_int = 510554; // 0x136 PushI
	SetMessage(var_141_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_142_int = 510555; // 0x13b PushI
	var_143_int = 16743; // 0x13c PushI
	var_144_int = 11644; // 0x13d PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x13e TObjFunc
	var_145_int = 510556; // 0x140 PushI
	var_146_int = -1; // 0x141 PushI
	var_147_int = 11645; // 0x142 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_148_int = 11636; // 0x146 PushI
	var_149_bool = var_6_int == var_148_int; // 0x147 Eq
	if(var_149_bool == 0) goto Label_349; // 0x148 JumpB
	var_150_string = ""; // 0x149 PushV
	var_150_string = "Sorrow"; // 0x14a MovS
	func_144(var_7_bool, var_150_string); // 0x14b NEW_2
	var_151_int = 510547; // 0x14d PushI
	SetMessage(var_151_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_152_int = 510548; // 0x152 PushI
	var_153_int = 16743; // 0x153 PushI
	var_154_int = 11637; // 0x154 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x155 TObjFunc
	var_155_int = 510549; // 0x157 PushI
	var_156_int = 11639; // 0x158 PushI
	var_157_int = 11638; // 0x159 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_158_int = 11639; // 0x15d PushI
	var_159_bool = var_6_int == var_158_int; // 0x15e Eq
	if(var_159_bool == 0) goto Label_372; // 0x15f JumpB
	var_160_string = ""; // 0x160 PushV
	var_160_string = "Sorrow"; // 0x161 MovS
	func_144(var_7_bool, var_160_string); // 0x162 NEW_2
	var_161_int = 510550; // 0x164 PushI
	SetMessage(var_161_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_162_int = 510551; // 0x169 PushI
	var_163_int = 16743; // 0x16a PushI
	var_164_int = 11640; // 0x16b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x16c TObjFunc
	var_165_int = 510552; // 0x16e PushI
	var_166_int = 16743; // 0x16f PushI
	var_167_int = 11641; // 0x170 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_168_int = 16743; // 0x174 PushI
	var_169_bool = var_6_int == var_168_int; // 0x175 Eq
	if(var_169_bool == 0) goto Label_395; // 0x176 JumpB
	var_170_string = ""; // 0x177 PushV
	var_170_string = "Neutral"; // 0x178 MovS
	func_144(var_7_bool, var_170_string); // 0x179 NEW_2
	var_171_int = 515695; // 0x17b PushI
	SetMessage(var_171_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_172_int = 515696; // 0x180 PushI
	var_173_int = 16749; // 0x181 PushI
	var_174_int = 16748; // 0x182 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x183 TObjFunc
	var_175_int = 515701; // 0x185 PushI
	var_176_int = 16752; // 0x186 PushI
	var_177_int = 16754; // 0x187 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_178_int = 16749; // 0x18b PushI
	var_179_bool = var_6_int == var_178_int; // 0x18c Eq
	if(var_179_bool == 0) goto Label_418; // 0x18d JumpB
	var_180_string = ""; // 0x18e PushV
	var_180_string = "Neutral"; // 0x18f MovS
	func_144(var_7_bool, var_180_string); // 0x190 NEW_2
	var_181_int = 515697; // 0x192 PushI
	SetMessage(var_181_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_182_int = 515698; // 0x197 PushI
	var_183_int = 16752; // 0x198 PushI
	var_184_int = 16750; // 0x199 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x19a TObjFunc
	var_185_int = 515699; // 0x19c PushI
	var_186_int = 16752; // 0x19d PushI
	var_187_int = 16751; // 0x19e PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x19f TObjFunc
	return 0; // 0x1a1 Return
	
Label_418:
	var_188_int = 16752; // 0x1a2 PushI
	var_189_bool = var_6_int == var_188_int; // 0x1a3 Eq
	if(var_189_bool == 0) goto Label_436; // 0x1a4 JumpB
	var_190_string = ""; // 0x1a5 PushV
	var_190_string = "Neutral"; // 0x1a6 MovS
	func_144(var_7_bool, var_190_string); // 0x1a7 NEW_2
	var_191_int = 515700; // 0x1a9 PushI
	SetMessage(var_191_int); // 0x1aa TObjFunc
	ClearReplies(); // 0x1ac TObjFunc
	var_192_int = 515704; // 0x1ae PushI
	var_193_int = 16760; // 0x1af PushI
	var_194_int = 16759; // 0x1b0 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1b1 TObjFunc
	return 0; // 0x1b3 Return
	
Label_436:
	var_195_int = 16760; // 0x1b4 PushI
	var_196_bool = var_6_int == var_195_int; // 0x1b5 Eq
	if(var_196_bool == 0) goto Label_459; // 0x1b6 JumpB
	var_197_string = ""; // 0x1b7 PushV
	var_197_string = "Neutral"; // 0x1b8 MovS
	func_144(var_7_bool, var_197_string); // 0x1b9 NEW_2
	var_198_int = 515705; // 0x1bb PushI
	SetMessage(var_198_int); // 0x1bc TObjFunc
	ClearReplies(); // 0x1be TObjFunc
	var_199_int = 515706; // 0x1c0 PushI
	var_200_int = 16762; // 0x1c1 PushI
	var_201_int = 16761; // 0x1c2 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1c3 TObjFunc
	var_202_int = 515708; // 0x1c5 PushI
	var_203_int = 16764; // 0x1c6 PushI
	var_204_int = 16763; // 0x1c7 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_205_int = 16764; // 0x1cb PushI
	var_206_bool = var_6_int == var_205_int; // 0x1cc Eq
	if(var_206_bool == 0) goto Label_477; // 0x1cd JumpB
	var_207_string = ""; // 0x1ce PushV
	var_207_string = "Neutral"; // 0x1cf MovS
	func_144(var_7_bool, var_207_string); // 0x1d0 NEW_2
	var_208_int = 515709; // 0x1d2 PushI
	SetMessage(var_208_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_209_int = 515710; // 0x1d7 PushI
	var_210_int = 16762; // 0x1d8 PushI
	var_211_int = 16765; // 0x1d9 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_212_int = 16762; // 0x1dd PushI
	var_213_bool = var_6_int == var_212_int; // 0x1de Eq
	if(var_213_bool == 0) goto Label_495; // 0x1df JumpB
	var_214_string = ""; // 0x1e0 PushV
	var_214_string = "Neutral"; // 0x1e1 MovS
	func_144(var_7_bool, var_214_string); // 0x1e2 NEW_2
	var_215_int = 515707; // 0x1e4 PushI
	SetMessage(var_215_int); // 0x1e5 TObjFunc
	ClearReplies(); // 0x1e7 TObjFunc
	var_216_int = 512539; // 0x1e9 PushI
	var_217_int = -1; // 0x1ea PushI
	var_218_int = 13708; // 0x1eb PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1ec TObjFunc
	return 0; // 0x1ee Return
	
Label_495:
	var_3_string = 1; // 0x1ef TMovB
	var_219_bool = 0; // 0x1f0 PushV
	func_1031(var_219_bool); // 0x1f1 NEW_2
	if(var_219_bool == 0) goto Label_503; // 0x1f3 JumpB
	lshStopAnimation(); // 0x1f4 Func
	goto Label_505; // 0x1f6 Jump
	
Label_505:
	return 0; // 0x1f9 Return
	
Label_503:
	StopAnimation(); // 0x1f7 Func
	
Label_507:
	return 0; // 0x1fb Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x1fd PushV
	var_8_object = var_6_object; // 0x1fe Mov
	TaskCall(0); // 0x1ff TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x200 NEW_2
	TaskReturn(); // 0x201 TaskReturn
	return 0; // 0x203 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x208 PushV
	var_9_string = "cleanup"; // 0x209 PushS
	var_10_bool = var_6_string == var_9_string; // 0x20a Eq
	if(var_10_bool == 0) goto Label_543; // 0x20b JumpB
	var_0_object = 1; // 0x20c TMovB
	IsLoaded(var_8_bool); // 0x20d Func
	var_11_bool = 0; // 0x20f PushV
	var_11_bool = 0; // 0x210 MovB
	var_12_bool = var_8_bool == 0; // 0x211 Not
	if(var_12_bool == 0) goto Label_536; // 0x212 JumpB
	var_13_bool = 0; // 0x213 PushV
	func_564(var_13_bool); // 0x214 NEW_2
	if(var_13_bool == 0) goto Label_536; // 0x216 JumpB
	var_11_bool = 1; // 0x217 MovB
	
Label_536:
	if(var_11_bool == 0) goto Label_542; // 0x218 JumpB
	var_14_object = Obj(); // 0x219 PushV
	func_842(var_14_object); // 0x21a NEW_2
	RemoveActor(var_14_object); // 0x21c Func
	
Label_542:
	goto Label_547; // 0x21e Jump
	
Label_547:
	return 2; // 0x223 Return
	
Label_543:
	var_17_string = "restore"; // 0x21f PushS
	var_18_bool = var_6_string == var_17_string; // 0x220 Eq
	if(var_18_bool == 0) goto Label_547; // 0x221 JumpB
	var_0_object = 0; // 0x222 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x224 PushV
	var_6_bool = 0; // 0x225 MovB
	var_7_object = var_0_object; // 0x226 PushT
	if(var_7_object == 0) goto Label_557; // 0x227 JumpB
	var_8_bool = 0; // 0x228 PushV
	func_564(var_8_bool); // 0x229 NEW_2
	if(var_8_bool == 0) goto Label_557; // 0x22b JumpB
	var_6_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_6_bool == 0) goto Label_563; // 0x22d JumpB
	var_9_object = Obj(); // 0x22e PushV
	func_842(var_9_object); // 0x22f NEW_2
	RemoveActor(var_9_object); // 0x231 Func
	
Label_563:
	return 0; // 0x233 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_516:
	Hold(); // 0x204 Func
	goto Label_516; // 0x206 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_566(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1025(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1023(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1027(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1029(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1006(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_842(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_651(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_230_bool = var_17_bool == 0; // 0x3f Not
	if(var_230_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_231_object = Obj(); // 0x46 PushV
	var_231_object = var_8_object; // 0x47 Mov
	func_634(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_65_int)
{
	var_65_int = 511961; // 0x401 MovI
	return 0; // 0x402 Return
}


func_1027(var_67_string)
{
	var_67_string = "ui/NPC_Burah.png"; // 0x403 MovS
	return 0; // 0x404 Return
}


func_1029(var_68_string)
{
	var_68_string = "ui/NPC_Burah_b.png"; // 0x405 MovS
	return 0; // 0x406 Return
}


func_1031(var_60_bool)
{
	var_60_bool = 1; // 0x407 MovB
	return 0; // 0x408 Return
}


func_651(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x28b PushV
	var_87_string = "voice_common"; // 0x28c PushS
	GetVariable(var_87_string, var_85_int); // 0x28d Func
	var_88_int = var_85_int; // 0x28f Push
	if(var_88_int == 0) goto Label_689; // 0x290 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x291 PushV
	var_90_object = var_79_object; // 0x292 Mov
	func_709(var_90_object); // 0x293 NEW_2
	var_119_bool = var_89_bool == 0; // 0x295 Not
	if(var_119_bool == 0) goto Label_671; // 0x296 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x297 PushV
	var_121_object = var_79_object; // 0x298 Mov
	func_746(var_121_object); // 0x299 NEW_2
	var_155_bool = var_120_bool == 0; // 0x29b Not
	if(var_155_bool == 0) goto Label_671; // 0x29c JumpB
	var_78_bool = 0; // 0x29d MovB
	return 4; // 0x29e Return
	
Label_671:
	var_156_int = 2; // 0x29f PushI
	irand(var_86_int, var_156_int); // 0x2a0 Func
	var_157_int = var_86_int; // 0x2a2 Push
	if(var_157_int == 0) goto Label_684; // 0x2a3 JumpB
	var_158_string = "voice_common"; // 0x2a4 PushS
	var_159_int = 1; // 0x2a5 PushI
	var_160_int = var_85_int + var_159_int; // 0x2a6 Add
	var_161_int = 3; // 0x2a7 PushI
	var_162_int = var_160_int / var_161_int; // 0x2a8 Mod
	SetVariable(var_158_string, var_162_int); // 0x2a9 Func
	goto Label_688; // 0x2ab Jump
	
Label_688:
	goto Label_707; // 0x2b0 Jump
	
Label_707:
	var_78_bool = 1; // 0x2c3 MovB
	return 4; // 0x2c4 Return
	
Label_684:
	var_163_string = "voice_common"; // 0x2ac PushS
	var_164_int = 0; // 0x2ad PushI
	SetVariable(var_163_string, var_164_int); // 0x2ae Func
	
Label_689:
	var_165_bool = 0; var_166_object = Obj(); // 0x2b1 PushV
	var_166_object = var_79_object; // 0x2b2 Mov
	func_746(var_166_object); // 0x2b3 NEW_2
	var_167_bool = var_165_bool == 0; // 0x2b5 Not
	if(var_167_bool == 0) goto Label_703; // 0x2b6 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x2b7 PushV
	var_169_object = var_79_object; // 0x2b8 Mov
	func_709(var_169_object); // 0x2b9 NEW_2
	var_170_bool = var_168_bool == 0; // 0x2bb Not
	if(var_170_bool == 0) goto Label_703; // 0x2bc JumpB
	var_78_bool = 0; // 0x2bd MovB
	return 4; // 0x2be Return
	
Label_703:
	var_171_string = "voice_common"; // 0x2bf PushS
	var_172_int = 1; // 0x2c0 PushI
	SetVariable(var_171_string, var_172_int); // 0x2c1 Func
}


func_144(var_2_object, var_188_string)
{
	var_189_bool = 0; // 0x91 PushV
	func_1031(var_189_bool); // 0x92 NEW_2
	var_190_bool = var_189_bool == 0; // 0x94 Not
	if(var_190_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_191_bool = var_188_string == var_2_object; // 0x97 Eq
	if(var_191_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_192_string = ""; var_193_bool = 0; // 0x9a PushV
	var_192_string = var_188_string; // 0x9b Mov
	var_194_string = ""; // 0x9c PushS
	var_195_bool = var_188_string == var_194_string; // 0x9d Eq
	if(var_195_bool == 0) goto Label_161; // 0x9e JumpB
	var_193_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_805(var_192_string, var_193_bool); // 0xa2 NEW_2
	var_2_object = var_188_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_193_bool = 1; // 0xa1 MovB
}


func_789(var_214_string)
{
	var_215_bool = 0; var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_float = 0; var_220_float = 0; // 0x315 PushV
	lshHasAnimation(var_218_bool, var_214_string); // 0x316 Func
	var_221_bool = var_218_bool; // 0x318 Push
	if(var_221_bool == 0) goto Label_800; // 0x319 JumpB
	lshGetAnimTimes(var_214_string, var_219_float, var_220_float); // 0x31a Func
	var_222_bool = 0; // 0x31c PushB
	lshPlayAnimation(var_219_float, var_220_float, var_222_bool); // 0x31d Func
	goto Label_804; // 0x31f Jump
	
Label_804:
	return 6; // 0x324 Return
	
Label_800:
	var_223_string = "Can't find lsh animation : "; // 0x320 PushS
	var_224_int = var_223_string + var_214_string; // 0x321 Add
	Trace(var_224_int); // 0x322 Func
}


func_917()
{
	var_14_string = "ood5Burah1"; // 0x396 PushS
	var_15_int = 1; // 0x397 PushI
	SetVariable(var_14_string, var_15_int); // 0x398 Func
	return 0; // 0x39a Return
}


func_923(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x39c PushV
	var_183_string = "ood5Burah1"; // 0x39d MovS
	func_858(var_182_int, var_183_string); // 0x39e NEW_2
	var_186_int = 0; // 0x3a0 PushI
	var_187_bool = var_182_int == var_186_int; // 0x3a1 Eq
	if(var_187_bool == 0) goto Label_933; // 0x3a2 JumpB
	var_180_bool = 1; // 0x3a3 MovB
	return 0; // 0x3a4 Return
	
Label_933:
	var_180_bool = 0; // 0x3a5 MovB
	return 0; // 0x3a6 Return
}


func_805(var_192_string, var_193_bool)
{
	var_196_bool = 0; var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_float = 0; var_201_float = 0; // 0x325 PushV
	lshHasAnimation(var_199_bool, var_192_string); // 0x326 Func
	var_202_bool = var_199_bool; // 0x328 Push
	if(var_202_bool == 0) goto Label_815; // 0x329 JumpB
	lshGetAnimTimes(var_192_string, var_200_float, var_201_float); // 0x32a Func
	lshPlayAnimation(var_200_float, var_201_float, var_193_bool); // 0x32c Func
	goto Label_819; // 0x32e Jump
	
Label_819:
	return 6; // 0x333 Return
	
Label_815:
	var_203_string = "Can't find lsh animation : "; // 0x32f PushS
	var_204_int = var_203_string + var_192_string; // 0x330 Add
	Trace(var_204_int); // 0x331 Func
}


func_935()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x3a7 PushV
	var_38_int = 146; // 0x3a8 PushI
	var_39_int = 1; // 0x3a9 PushI
	var_40_int = 515346; // 0x3aa PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x3ab Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x3ad PushV
	var_42_object = var_37_object; // 0x3ae Mov
	var_43_int = 139; // 0x3af MovI
	func_961(var_41_bool, var_42_object, var_43_int); // 0x3b0 NEW_2
	return 2; // 0x3b2 Return
}


func_564(var_8_bool)
{
	var_8_bool = 1; // 0x234 MovB
	return 0; // 0x235 Return
}


func_820(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x334 PushV
	var_116_bool = 0; // 0x335 PushV
	func_1031(var_116_bool); // 0x336 NEW_2
	if(var_116_bool == 0) goto Label_833; // 0x338 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x339 Func
	var_117_bool = var_115_bool; // 0x33b Push
	if(var_117_bool == 0) goto Label_833; // 0x33c JumpB
	lshPlaySpeech(var_113_string); // 0x33d Func
	var_112_bool = 1; // 0x33f MovB
	return 2; // 0x340 Return
	
Label_833:
	var_112_bool = 0; // 0x341 MovB
	return 2; // 0x342 Return
}


func_566(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x236 PushV
	GetPosition(var_31_cvector); // 0x237 ObjFunc
	GetEyesHeight(var_30_float); // 0x239 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x23b PushE
	var_39_float = var_39_float + var_30_float; // 0x23c Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x23d PopE
	GetPosition(var_32_cvector); // 0x23e Func
	GetEyesHeight(var_30_float); // 0x240 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x242 PushE
	var_40_float = var_40_float + var_30_float; // 0x243 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x244 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x245 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x246 PushE
	var_41_float = 0; // 0x247 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x248 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x249 Or
	var_43_float = sqrt(var_42_int); // 0x24a Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x24b Div2
	var_34_cvector = -var_33_cvector; // 0x24c Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x24d Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x24e PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x24f PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x250 Xor2
	func_848(var_45_cvector, var_46_cvector); // 0x251 NEW_2
	var_53_int = 25; // 0x253 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x254 Mult
	var_55_int = var_44_float + var_54_float; // 0x255 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x256 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x257 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x258 Add2
	IsOverrideActive(var_37_bool); // 0x259 Func
	var_57_bool = var_37_bool; // 0x25b Push
	if(var_57_bool == 0) goto Label_607; // 0x25c JumpB
	var_18_bool = 0; // 0x25d MovB
	return 18; // 0x25e Return
	
Label_607:
	StopWorld(); // 0x25f Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x261 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x263 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x264 PushE
	Rotate(var_58_float, var_59_float); // 0x265 Func
	var_60_bool = 0; // 0x267 PushV
	func_1031(var_60_bool); // 0x268 NEW_2
	if(var_60_bool == 0) goto Label_620; // 0x26a JumpB
	goto Label_628; // 0x26b Jump
	
Label_628:
	CameraWaitForPlayFinish(); // 0x274 Func
	ResumeWorld(); // 0x276 Func
	var_18_bool = 1; // 0x278 MovB
	return 18; // 0x279 Return
	
Label_620:
	var_61_string = "head"; // 0x26c PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x26d Func
	var_62_bool = var_38_bool; // 0x26f Push
	if(var_62_bool == 0) goto Label_628; // 0x270 JumpB
	var_63_string = "head"; // 0x271 PushS
	LookAsyncCamera(var_63_string); // 0x272 Func
}


func_948(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x3b4 PushV
	GetDiaryRoot(var_52_object); // 0x3b5 Func
	var_53_bool = var_52_object == 0; // 0x3b7 Not
	if(var_53_bool == 0) goto Label_958; // 0x3b8 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x3b9 PushS
	Trace(var_54_string); // 0x3ba Func
	var_50_object = 0; // 0x3bc MovB
	return 2; // 0x3bd Return
	
Label_958:
	var_50_object = var_52_object; // 0x3be Mov
	return 2; // 0x3bf Return
}


func_961(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x3c1 PushV
	var_50_object = Obj(); // 0x3c2 PushV
	func_948(var_50_object); // 0x3c3 NEW_2
	var_47_object = var_50_object; // 0x3c4 Mov
	Find(var_43_int, var_48_object); // 0x3c6 ObjFunc
	var_55_bool = var_48_object == 0; // 0x3c8 Not
	if(var_55_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x3ca PushS
	var_57_int = var_56_string + var_43_int; // 0x3cb Add
	Trace(var_57_int); // 0x3cc Func
	var_41_bool = 0; // 0x3ce MovB
	return 6; // 0x3cf Return
	
Label_976:
	AddChild(var_42_object); // 0x3d0 ObjFunc
	var_58_int = 7; // 0x3d2 PushI
	SendWorldWndMessage(var_58_int); // 0x3d3 Func
	GetCategory(var_49_int); // 0x3d5 ObjFunc
	SetDiarySection(var_49_int); // 0x3d7 Func
	var_41_bool = 0; // 0x3d9 MovB
	return 6; // 0x3da Return
}


func_835()
{
	var_9_bool = 0; // 0x343 PushV
	func_1031(var_9_bool); // 0x344 NEW_2
	if(var_9_bool == 0) goto Label_841; // 0x346 JumpB
	lshStopSpeech(); // 0x347 Func
	
Label_841:
	return 0; // 0x349 Return
}


func_709(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x2c5 PushV
	var_96_string = "c"; // 0x2c6 MovS
	var_97_int = 0; // 0x2c7 MovI
	
Label_712:
	var_101_int = 1; // 0x2c8 PushI
	if(var_101_int == 0) goto Label_725; // 0x2c9 JumpB
	var_102_int = 1; // 0x2ca PushI
	var_103_int = var_97_int + var_102_int; // 0x2cb Add
	var_104_int = var_96_string + var_103_int; // 0x2cc Add
	HasProperty(var_104_int, var_98_bool); // 0x2cd ObjFunc
	var_105_bool = var_98_bool == 0; // 0x2cf Not
	if(var_105_bool == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_725; // 0x2d1 Jump
	
Label_725:
	var_106_bool = var_97_int == 0; // 0x2d5 Not
	if(var_106_bool == 0) goto Label_729; // 0x2d6 JumpB
	var_89_bool = 0; // 0x2d7 MovB
	return 10; // 0x2d8 Return
	
Label_729:
	var_99_int = 0; // 0x2d9 MovI
	var_107_int = 1; // 0x2da PushI
	var_108_bool = var_97_int > var_107_int; // 0x2db GT
	if(var_108_bool == 0) goto Label_735; // 0x2dc JumpB
	irand(var_99_int, var_97_int); // 0x2dd Func
	
Label_735:
	var_109_int = 1; // 0x2df PushI
	var_110_int = var_99_int + var_109_int; // 0x2e0 Add
	var_111_int = var_96_string + var_110_int; // 0x2e1 Add
	GetProperty(var_111_int, var_100_string); // 0x2e2 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x2e4 PushV
	var_113_string = var_100_string; // 0x2e5 Mov
	func_820(var_112_bool, var_113_string); // 0x2e6 NEW_2
	var_89_bool = var_112_bool; // 0x2e7 Mov
	return 10; // 0x2e9 Return
	
Label_722:
	var_118_int = 1; // 0x2d2 PushI
	var_97_int = var_97_int + var_118_int; // 0x2d3 Add2
	goto Label_712; // 0x2d4 Jump
}


func_842(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x34a PushV
	self(var_11_object); // 0x34b Func
	var_9_object = var_11_object; // 0x34d Mov
	return 2; // 0x34e Return
}


func_848(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x350 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x351 Or
	var_49_float = sqrt(var_50_int); // 0x352 Sqrt2
	var_51_float = 0.0; // 0x353 PushF
	var_52_bool = var_49_float < var_51_float; // 0x354 LT
	if(var_52_bool == 0) goto Label_856; // 0x355 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x356 MovV
	return 2; // 0x357 Return
	
Label_856:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x358 Div2
	return 2; // 0x359 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_114; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_923(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_112; // 0x5b JumpB
	var_188_string = ""; // 0x5c PushV
	var_188_string = "Doubt"; // 0x5d MovS
	func_144(var_174_object, var_188_string); // 0x5e NEW_2
	var_205_int = 510543; // 0x60 PushI
	SetMessage(var_205_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_206_int = 510544; // 0x65 PushI
	var_207_int = 11634; // 0x66 PushI
	var_208_int = 11633; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	var_209_int = 510566; // 0x6a PushI
	var_210_int = 11634; // 0x6b PushI
	var_211_int = 11655; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_212_bool = 0; // 0x72 PushV
	func_1031(var_212_bool); // 0x73 NEW_2
	if(var_212_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_213_string = var_3_string; // 0x78 PushT
	if(var_213_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_214_string = ""; // 0x7b PushV
	var_214_string = var_2_object; // 0x7c MovT
	func_789(var_214_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_225_string = "all"; // 0x81 PushS
	var_226_string = "idle"; // 0x82 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_227_string = var_3_string; // 0x87 PushT
	if(var_227_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_228_string = "all"; // 0x8a PushS
	var_229_string = "idle"; // 0x8b PushS
	PlayAnimation(var_228_string, var_229_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
	
Label_112:
	return 0; // 0x70 Return
}


func_858(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x35a PushV
	GetVariable(var_183_string, var_185_int); // 0x35b Func
	var_182_int = var_185_int; // 0x35d Mov
	return 2; // 0x35e Return
}


func_989(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x3dd PushV
	GetMainOutdoorScene(var_25_object); // 0x3de Func
	var_27_bool = var_25_object == 0; // 0x3e0 NullEq
	if(var_27_bool == 0) goto Label_1000; // 0x3e1 JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x3e2 PushS
	Trace(var_28_string); // 0x3e3 Func
	var_26_object = 0; // 0x3e5 SetNull
	var_22_object = var_26_object; // 0x3e6 Mov
	return 4; // 0x3e7 Return
	
Label_1000:
	GetMap(var_26_object); // 0x3e8 ObjFunc
	var_22_object = var_26_object; // 0x3ea Mov
	return 4; // 0x3eb Return
}


func_863(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x35f PushV
	FindActor(var_63_object, var_60_string); // 0x360 Func
	var_64_bool = var_63_object == 0; // 0x362 NullEq
	if(var_64_bool == 0) goto Label_870; // 0x363 JumpB
	var_59_bool = 0; // 0x364 MovB
	return 2; // 0x365 Return
	
Label_870:
	Trigger(var_63_object, var_61_string); // 0x366 Func
	var_59_bool = 1; // 0x368 MovB
	return 2; // 0x369 Return
}


func_746(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x2ea PushV
	var_132_string = "d"; // 0x2eb PushS
	var_133_int = 0; // 0x2ec PushV
	func_880(var_133_int); // 0x2ed NEW_2
	var_139_int = var_132_string + var_133_int; // 0x2ef Add
	var_140_string = "m"; // 0x2f0 PushS
	var_127_string = var_139_int + var_140_string; // 0x2f1 Add2
	var_128_int = 0; // 0x2f2 MovI
	
Label_755:
	var_141_int = 1; // 0x2f3 PushI
	if(var_141_int == 0) goto Label_768; // 0x2f4 JumpB
	var_142_int = 1; // 0x2f5 PushI
	var_143_int = var_128_int + var_142_int; // 0x2f6 Add
	var_144_int = var_127_string + var_143_int; // 0x2f7 Add
	HasProperty(var_144_int, var_129_bool); // 0x2f8 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x2fa Not
	if(var_145_bool == 0) goto Label_765; // 0x2fb JumpB
	goto Label_768; // 0x2fc Jump
	
Label_768:
	var_146_bool = var_128_int == 0; // 0x300 Not
	if(var_146_bool == 0) goto Label_772; // 0x301 JumpB
	var_120_bool = 0; // 0x302 MovB
	return 10; // 0x303 Return
	
Label_772:
	var_130_int = 0; // 0x304 MovI
	var_147_int = 1; // 0x305 PushI
	var_148_bool = var_128_int > var_147_int; // 0x306 GT
	if(var_148_bool == 0) goto Label_778; // 0x307 JumpB
	irand(var_130_int, var_128_int); // 0x308 Func
	
Label_778:
	var_149_int = 1; // 0x30a PushI
	var_150_int = var_130_int + var_149_int; // 0x30b Add
	var_151_int = var_127_string + var_150_int; // 0x30c Add
	GetProperty(var_151_int, var_131_string); // 0x30d ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x30f PushV
	var_153_string = var_131_string; // 0x310 Mov
	func_820(var_152_bool, var_153_string); // 0x311 NEW_2
	var_120_bool = var_152_bool; // 0x312 Mov
	return 10; // 0x314 Return
	
Label_765:
	var_154_int = 1; // 0x2fd PushI
	var_128_int = var_128_int + var_154_int; // 0x2fe Add2
	goto Label_755; // 0x2ff Jump
}


func_875(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x36b PushV
	GetGameTime(var_35_float); // 0x36c Func
	var_33_float = var_35_float; // 0x36e Mov
	return 2; // 0x36f Return
}


func_1006(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x3ee PushV
	var_72_string = "branch"; // 0x3ef PushS
	GetVariable(var_72_string, var_71_int); // 0x3f0 Func
	var_73_int = 0; // 0x3f2 PushI
	var_74_bool = var_71_int == var_73_int; // 0x3f3 Eq
	if(var_74_bool == 0) goto Label_1016; // 0x3f4 JumpB
	var_69_int = 1; // 0x3f5 MovI
	return 2; // 0x3f6 Return
	
Label_1016:
	var_75_int = 1; // 0x3f8 PushI
	var_76_bool = var_71_int == var_75_int; // 0x3f9 Eq
	if(var_76_bool == 0) goto Label_1021; // 0x3fa JumpB
	var_69_int = 2; // 0x3fb MovI
	return 2; // 0x3fc Return
	
Label_1021:
	var_69_int = 3; // 0x3fd MovI
	return 2; // 0x3fe Return
}


func_880(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x370 PushV
	GetGameTime(var_135_float); // 0x371 Func
	var_136_int = 1; // 0x373 PushI
	var_137_int = 0; // 0x374 PushV
	var_138_int = 24; // 0x375 PushI
	var_137_int = var_135_float / var_135_float; // 0x376 Div2
	var_133_int = var_136_int + var_137_int; // 0x377 Add2
	return 2; // 0x378 Return
}


func_889()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x379 PushV
	var_20_string = "d5q01"; // 0x37a PushS
	var_21_int = 7; // 0x37b PushI
	SetVariable(var_20_string, var_21_int); // 0x37c Func
	var_22_object = Obj(); // 0x37e PushV
	func_989(var_22_object); // 0x37f NEW_2
	var_19_object = var_22_object; // 0x380 Mov
	var_29_string = "d5q01BurahMeeting"; // 0x382 PushS
	var_30_string = "pt_d5q01_girl_corpse1"; // 0x383 PushS
	var_31_int = 1; // 0x384 PushI
	var_32_int = 515351; // 0x385 PushI
	var_33_float = 0; // 0x386 PushV
	func_875(var_33_float); // 0x387 NEW_2
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x389 ObjFunc
	func_935(); // 0x38c NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x38e PushV
	var_60_string = "quest_d5_01"; // 0x38f MovS
	var_61_string = "burah_free"; // 0x390 MovS
	func_863(var_59_bool, var_60_string, var_61_string); // 0x391 NEW_2
	return 2; // 0x393 Return
}


func_634()
{
	var_232_bool = 0; var_233_bool = 0; // 0x27a PushV
	CameraSwitchToNormal(); // 0x27b Func
	var_234_bool = 0; // 0x27d PushV
	func_1031(var_234_bool); // 0x27e NEW_2
	if(var_234_bool == 0) goto Label_642; // 0x280 JumpB
	goto Label_650; // 0x281 Jump
	
Label_650:
	return 2; // 0x28a Return
	
Label_642:
	var_235_string = "head"; // 0x282 PushS
	HasAnimationTrack(var_233_bool, var_235_string); // 0x283 Func
	var_236_bool = var_233_bool; // 0x285 Push
	if(var_236_bool == 0) goto Label_650; // 0x286 JumpB
	var_237_string = "head"; // 0x287 PushS
	UnlookAsync(var_237_string); // 0x288 Func
}


func_1023(var_66_int)
{
	var_66_int = 515592; // 0x3ff MovI
	return 0; // 0x400 Return
}


