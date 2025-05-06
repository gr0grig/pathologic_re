task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_532; // 0xad JumpB
	func_862(); // 0xaf NEW_2
	var_10_int = 13708; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_190; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_944(); // 0xb7 NEW_2
	var_16_object = Obj(); var_17_object = Obj(); // 0xb9 PushV
	var_16_object = var_1_object; // 0xba MovT
	var_17_object = var_0_object; // 0xbb MovT
	func_916(); // 0xbc NEW_2
	
Label_190:
	var_65_int = 11632; // 0xbe PushI
	var_66_bool = var_6_int == var_65_int; // 0xbf Eq
	if(var_66_bool == 0) goto Label_223; // 0xc0 JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0xc1 PushV
	var_68_object = var_1_object; // 0xc2 MovT
	func_950(var_68_object); // 0xc3 NEW_2
	if(var_67_bool == 0) goto Label_223; // 0xc5 JumpB
	var_75_string = ""; // 0xc6 PushV
	var_75_string = "Doubt"; // 0xc7 MovS
	func_149(var_7_bool, var_75_string); // 0xc8 NEW_2
	var_92_int = 510543; // 0xca PushI
	SetMessage(var_92_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_93_int = 510544; // 0xcf PushI
	var_94_int = 11634; // 0xd0 PushI
	var_95_int = 11633; // 0xd1 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xd2 TObjFunc
	var_96_int = 510560; // 0xd4 PushI
	var_97_int = 16756; // 0xd5 PushI
	var_98_int = 11649; // 0xd6 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xd7 TObjFunc
	var_99_int = 510566; // 0xd9 PushI
	var_100_int = 11634; // 0xda PushI
	var_101_int = 11655; // 0xdb PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_102_int = 16756; // 0xdf PushI
	var_103_bool = var_6_int == var_102_int; // 0xe0 Eq
	if(var_103_bool == 0) goto Label_241; // 0xe1 JumpB
	var_104_string = ""; // 0xe2 PushV
	var_104_string = "Agression"; // 0xe3 MovS
	func_149(var_7_bool, var_104_string); // 0xe4 NEW_2
	var_105_int = 515702; // 0xe6 PushI
	SetMessage(var_105_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_106_int = 515703; // 0xeb PushI
	var_107_int = 11650; // 0xec PushI
	var_108_int = 16757; // 0xed PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_109_int = 11650; // 0xf1 PushI
	var_110_bool = var_6_int == var_109_int; // 0xf2 Eq
	if(var_110_bool == 0) goto Label_259; // 0xf3 JumpB
	var_111_string = ""; // 0xf4 PushV
	var_111_string = "Agression"; // 0xf5 MovS
	func_149(var_7_bool, var_111_string); // 0xf6 NEW_2
	var_112_int = 510561; // 0xf8 PushI
	SetMessage(var_112_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_113_int = 510562; // 0xfd PushI
	var_114_int = 11652; // 0xfe PushI
	var_115_int = 11651; // 0xff PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_116_int = 11652; // 0x103 PushI
	var_117_bool = var_6_int == var_116_int; // 0x104 Eq
	if(var_117_bool == 0) goto Label_282; // 0x105 JumpB
	var_118_string = ""; // 0x106 PushV
	var_118_string = "Sorrow"; // 0x107 MovS
	func_149(var_7_bool, var_118_string); // 0x108 NEW_2
	var_119_int = 510563; // 0x10a PushI
	SetMessage(var_119_int); // 0x10b TObjFunc
	ClearReplies(); // 0x10d TObjFunc
	var_120_int = 510564; // 0x10f PushI
	var_121_int = 16749; // 0x110 PushI
	var_122_int = 11653; // 0x111 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x112 TObjFunc
	var_123_int = 510565; // 0x114 PushI
	var_124_int = -1; // 0x115 PushI
	var_125_int = 11654; // 0x116 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x117 TObjFunc
	return 0; // 0x119 Return
	
Label_282:
	var_126_int = 11634; // 0x11a PushI
	var_127_bool = var_6_int == var_126_int; // 0x11b Eq
	if(var_127_bool == 0) goto Label_310; // 0x11c JumpB
	var_128_string = ""; // 0x11d PushV
	var_128_string = "Smile"; // 0x11e MovS
	func_149(var_7_bool, var_128_string); // 0x11f NEW_2
	var_129_int = 510545; // 0x121 PushI
	SetMessage(var_129_int); // 0x122 TObjFunc
	ClearReplies(); // 0x124 TObjFunc
	var_130_int = 510546; // 0x126 PushI
	var_131_int = 11636; // 0x127 PushI
	var_132_int = 11635; // 0x128 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x129 TObjFunc
	var_133_int = 510553; // 0x12b PushI
	var_134_int = 11643; // 0x12c PushI
	var_135_int = 11642; // 0x12d PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x12e TObjFunc
	var_136_int = 510557; // 0x130 PushI
	var_137_int = 11647; // 0x131 PushI
	var_138_int = 11646; // 0x132 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_139_int = 11647; // 0x136 PushI
	var_140_bool = var_6_int == var_139_int; // 0x137 Eq
	if(var_140_bool == 0) goto Label_328; // 0x138 JumpB
	var_141_string = ""; // 0x139 PushV
	var_141_string = "Agression"; // 0x13a MovS
	func_149(var_7_bool, var_141_string); // 0x13b NEW_2
	var_142_int = 510558; // 0x13d PushI
	SetMessage(var_142_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_143_int = 510559; // 0x142 PushI
	var_144_int = 16743; // 0x143 PushI
	var_145_int = 11648; // 0x144 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_146_int = 11643; // 0x148 PushI
	var_147_bool = var_6_int == var_146_int; // 0x149 Eq
	if(var_147_bool == 0) goto Label_351; // 0x14a JumpB
	var_148_string = ""; // 0x14b PushV
	var_148_string = "Doubt"; // 0x14c MovS
	func_149(var_7_bool, var_148_string); // 0x14d NEW_2
	var_149_int = 510554; // 0x14f PushI
	SetMessage(var_149_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_150_int = 510555; // 0x154 PushI
	var_151_int = 16743; // 0x155 PushI
	var_152_int = 11644; // 0x156 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x157 TObjFunc
	var_153_int = 510556; // 0x159 PushI
	var_154_int = -1; // 0x15a PushI
	var_155_int = 11645; // 0x15b PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_156_int = 11636; // 0x15f PushI
	var_157_bool = var_6_int == var_156_int; // 0x160 Eq
	if(var_157_bool == 0) goto Label_374; // 0x161 JumpB
	var_158_string = ""; // 0x162 PushV
	var_158_string = "Sorrow"; // 0x163 MovS
	func_149(var_7_bool, var_158_string); // 0x164 NEW_2
	var_159_int = 510547; // 0x166 PushI
	SetMessage(var_159_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_160_int = 510548; // 0x16b PushI
	var_161_int = 16743; // 0x16c PushI
	var_162_int = 11637; // 0x16d PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x16e TObjFunc
	var_163_int = 510549; // 0x170 PushI
	var_164_int = 11639; // 0x171 PushI
	var_165_int = 11638; // 0x172 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_166_int = 11639; // 0x176 PushI
	var_167_bool = var_6_int == var_166_int; // 0x177 Eq
	if(var_167_bool == 0) goto Label_397; // 0x178 JumpB
	var_168_string = ""; // 0x179 PushV
	var_168_string = "Sorrow"; // 0x17a MovS
	func_149(var_7_bool, var_168_string); // 0x17b NEW_2
	var_169_int = 510550; // 0x17d PushI
	SetMessage(var_169_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_170_int = 510551; // 0x182 PushI
	var_171_int = 16743; // 0x183 PushI
	var_172_int = 11640; // 0x184 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x185 TObjFunc
	var_173_int = 510552; // 0x187 PushI
	var_174_int = 16743; // 0x188 PushI
	var_175_int = 11641; // 0x189 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_176_int = 16743; // 0x18d PushI
	var_177_bool = var_6_int == var_176_int; // 0x18e Eq
	if(var_177_bool == 0) goto Label_420; // 0x18f JumpB
	var_178_string = ""; // 0x190 PushV
	var_178_string = "Neutral"; // 0x191 MovS
	func_149(var_7_bool, var_178_string); // 0x192 NEW_2
	var_179_int = 515695; // 0x194 PushI
	SetMessage(var_179_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_180_int = 515696; // 0x199 PushI
	var_181_int = 16749; // 0x19a PushI
	var_182_int = 16748; // 0x19b PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x19c TObjFunc
	var_183_int = 515701; // 0x19e PushI
	var_184_int = 16752; // 0x19f PushI
	var_185_int = 16754; // 0x1a0 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x1a1 TObjFunc
	return 0; // 0x1a3 Return
	
Label_420:
	var_186_int = 16749; // 0x1a4 PushI
	var_187_bool = var_6_int == var_186_int; // 0x1a5 Eq
	if(var_187_bool == 0) goto Label_443; // 0x1a6 JumpB
	var_188_string = ""; // 0x1a7 PushV
	var_188_string = "Neutral"; // 0x1a8 MovS
	func_149(var_7_bool, var_188_string); // 0x1a9 NEW_2
	var_189_int = 515697; // 0x1ab PushI
	SetMessage(var_189_int); // 0x1ac TObjFunc
	ClearReplies(); // 0x1ae TObjFunc
	var_190_int = 515698; // 0x1b0 PushI
	var_191_int = 16752; // 0x1b1 PushI
	var_192_int = 16750; // 0x1b2 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x1b3 TObjFunc
	var_193_int = 515699; // 0x1b5 PushI
	var_194_int = 16752; // 0x1b6 PushI
	var_195_int = 16751; // 0x1b7 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_196_int = 16752; // 0x1bb PushI
	var_197_bool = var_6_int == var_196_int; // 0x1bc Eq
	if(var_197_bool == 0) goto Label_461; // 0x1bd JumpB
	var_198_string = ""; // 0x1be PushV
	var_198_string = "Neutral"; // 0x1bf MovS
	func_149(var_7_bool, var_198_string); // 0x1c0 NEW_2
	var_199_int = 515700; // 0x1c2 PushI
	SetMessage(var_199_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_200_int = 515704; // 0x1c7 PushI
	var_201_int = 16760; // 0x1c8 PushI
	var_202_int = 16759; // 0x1c9 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_203_int = 16760; // 0x1cd PushI
	var_204_bool = var_6_int == var_203_int; // 0x1ce Eq
	if(var_204_bool == 0) goto Label_484; // 0x1cf JumpB
	var_205_string = ""; // 0x1d0 PushV
	var_205_string = "Neutral"; // 0x1d1 MovS
	func_149(var_7_bool, var_205_string); // 0x1d2 NEW_2
	var_206_int = 515705; // 0x1d4 PushI
	SetMessage(var_206_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_207_int = 515706; // 0x1d9 PushI
	var_208_int = 16762; // 0x1da PushI
	var_209_int = 16761; // 0x1db PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1dc TObjFunc
	var_210_int = 515708; // 0x1de PushI
	var_211_int = 16764; // 0x1df PushI
	var_212_int = 16763; // 0x1e0 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1e1 TObjFunc
	return 0; // 0x1e3 Return
	
Label_484:
	var_213_int = 16764; // 0x1e4 PushI
	var_214_bool = var_6_int == var_213_int; // 0x1e5 Eq
	if(var_214_bool == 0) goto Label_502; // 0x1e6 JumpB
	var_215_string = ""; // 0x1e7 PushV
	var_215_string = "Neutral"; // 0x1e8 MovS
	func_149(var_7_bool, var_215_string); // 0x1e9 NEW_2
	var_216_int = 515709; // 0x1eb PushI
	SetMessage(var_216_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_217_int = 515710; // 0x1f0 PushI
	var_218_int = 16762; // 0x1f1 PushI
	var_219_int = 16765; // 0x1f2 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1f3 TObjFunc
	return 0; // 0x1f5 Return
	
Label_502:
	var_220_int = 16762; // 0x1f6 PushI
	var_221_bool = var_6_int == var_220_int; // 0x1f7 Eq
	if(var_221_bool == 0) goto Label_520; // 0x1f8 JumpB
	var_222_string = ""; // 0x1f9 PushV
	var_222_string = "Neutral"; // 0x1fa MovS
	func_149(var_7_bool, var_222_string); // 0x1fb NEW_2
	var_223_int = 515707; // 0x1fd PushI
	SetMessage(var_223_int); // 0x1fe TObjFunc
	ClearReplies(); // 0x200 TObjFunc
	var_224_int = 512539; // 0x202 PushI
	var_225_int = -1; // 0x203 PushI
	var_226_int = 13708; // 0x204 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_3_string = 1; // 0x208 TMovB
	var_227_bool = 0; // 0x209 PushV
	func_1058(var_227_bool); // 0x20a NEW_2
	if(var_227_bool == 0) goto Label_528; // 0x20c JumpB
	lshStopAnimation(); // 0x20d Func
	goto Label_530; // 0x20f Jump
	
Label_530:
	return 0; // 0x212 Return
	
Label_528:
	StopAnimation(); // 0x210 Func
	
Label_532:
	return 0; // 0x214 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x216 PushV
	var_8_object = var_6_object; // 0x217 Mov
	TaskCall(0); // 0x218 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x219 NEW_2
	TaskReturn(); // 0x21a TaskReturn
	return 0; // 0x21c Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x221 PushV
	var_9_string = "cleanup"; // 0x222 PushS
	var_10_bool = var_6_string == var_9_string; // 0x223 Eq
	if(var_10_bool == 0) goto Label_568; // 0x224 JumpB
	var_0_object = 1; // 0x225 TMovB
	IsLoaded(var_8_bool); // 0x226 Func
	var_11_bool = 0; // 0x228 PushV
	var_11_bool = 0; // 0x229 MovB
	var_12_bool = var_8_bool == 0; // 0x22a Not
	if(var_12_bool == 0) goto Label_561; // 0x22b JumpB
	var_13_bool = 0; // 0x22c PushV
	func_589(var_13_bool); // 0x22d NEW_2
	if(var_13_bool == 0) goto Label_561; // 0x22f JumpB
	var_11_bool = 1; // 0x230 MovB
	
Label_561:
	if(var_11_bool == 0) goto Label_567; // 0x231 JumpB
	var_14_object = Obj(); // 0x232 PushV
	func_869(var_14_object); // 0x233 NEW_2
	RemoveActor(var_14_object); // 0x235 Func
	
Label_567:
	goto Label_572; // 0x237 Jump
	
Label_572:
	return 2; // 0x23c Return
	
Label_568:
	var_17_string = "restore"; // 0x238 PushS
	var_18_bool = var_6_string == var_17_string; // 0x239 Eq
	if(var_18_bool == 0) goto Label_572; // 0x23a JumpB
	var_0_object = 0; // 0x23b TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x23d PushV
	var_6_bool = 0; // 0x23e MovB
	var_7_object = var_0_object; // 0x23f PushT
	if(var_7_object == 0) goto Label_582; // 0x240 JumpB
	var_8_bool = 0; // 0x241 PushV
	func_589(var_8_bool); // 0x242 NEW_2
	if(var_8_bool == 0) goto Label_582; // 0x244 JumpB
	var_6_bool = 1; // 0x245 MovB
	
Label_582:
	if(var_6_bool == 0) goto Label_588; // 0x246 JumpB
	var_9_object = Obj(); // 0x247 PushV
	func_869(var_9_object); // 0x248 NEW_2
	RemoveActor(var_9_object); // 0x24a Func
	
Label_588:
	return 0; // 0x24c Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_541:
	Hold(); // 0x21d Func
	goto Label_541; // 0x21f Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_591(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1052(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1050(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1054(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1056(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1033(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_869(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_678(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_234_bool = var_17_bool == 0; // 0x3f Not
	if(var_234_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_235_object = Obj(); // 0x46 PushV
	var_235_object = var_8_object; // 0x47 Mov
	func_660(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_773(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x305 PushV
	var_133_string = "d"; // 0x306 PushS
	var_134_int = 0; // 0x307 PushV
	func_907(var_134_int); // 0x308 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x30a Add
	var_141_string = "m"; // 0x30b PushS
	var_128_string = var_140_int + var_141_string; // 0x30c Add2
	var_129_int = 0; // 0x30d MovI
	
Label_782:
	var_142_int = 1; // 0x30e PushI
	if(var_142_int == 0) goto Label_795; // 0x30f JumpB
	var_143_int = 1; // 0x310 PushI
	var_144_int = var_129_int + var_143_int; // 0x311 Add
	var_145_int = var_128_string + var_144_int; // 0x312 Add
	HasProperty(var_145_int, var_130_bool); // 0x313 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x315 Not
	if(var_146_bool == 0) goto Label_792; // 0x316 JumpB
	goto Label_795; // 0x317 Jump
	
Label_795:
	var_147_bool = var_129_int == 0; // 0x31b Not
	if(var_147_bool == 0) goto Label_799; // 0x31c JumpB
	var_121_bool = 0; // 0x31d MovB
	return 10; // 0x31e Return
	
Label_799:
	var_131_int = 0; // 0x31f MovI
	var_148_int = 1; // 0x320 PushI
	var_149_bool = var_129_int > var_148_int; // 0x321 GT
	if(var_149_bool == 0) goto Label_805; // 0x322 JumpB
	irand(var_131_int, var_129_int); // 0x323 Func
	
Label_805:
	var_150_int = 1; // 0x325 PushI
	var_151_int = var_131_int + var_150_int; // 0x326 Add
	var_152_int = var_128_string + var_151_int; // 0x327 Add
	GetProperty(var_152_int, var_132_string); // 0x328 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x32a PushV
	var_154_string = var_132_string; // 0x32b Mov
	func_847(var_153_bool, var_154_string); // 0x32c NEW_2
	var_121_bool = var_153_bool; // 0x32d Mov
	return 10; // 0x32f Return
	
Label_792:
	var_155_int = 1; // 0x318 PushI
	var_129_int = var_129_int + var_155_int; // 0x319 Add2
	goto Label_782; // 0x31a Jump
}


func_902(var_33_float)
{
	var_34_float = 0; var_35_float = 0; // 0x386 PushV
	GetGameTime(var_35_float); // 0x387 Func
	var_33_float = var_35_float; // 0x389 Mov
	return 2; // 0x38a Return
}


func_1033(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x409 PushV
	var_73_string = "branch"; // 0x40a PushS
	GetVariable(var_73_string, var_72_int); // 0x40b Func
	var_74_int = 0; // 0x40d PushI
	var_75_bool = var_72_int == var_74_int; // 0x40e Eq
	if(var_75_bool == 0) goto Label_1043; // 0x40f JumpB
	var_70_int = 1; // 0x410 MovI
	return 2; // 0x411 Return
	
Label_1043:
	var_76_int = 1; // 0x413 PushI
	var_77_bool = var_72_int == var_76_int; // 0x414 Eq
	if(var_77_bool == 0) goto Label_1048; // 0x415 JumpB
	var_70_int = 2; // 0x416 MovI
	return 2; // 0x417 Return
	
Label_1048:
	var_70_int = 3; // 0x418 MovI
	return 2; // 0x419 Return
}


func_907(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x38b PushV
	GetGameTime(var_136_float); // 0x38c Func
	var_137_int = 1; // 0x38e PushI
	var_138_int = 0; // 0x38f PushV
	var_139_int = 24; // 0x390 PushI
	var_138_int = var_136_float / var_136_float; // 0x391 Div2
	var_134_int = var_137_int + var_138_int; // 0x392 Add2
	return 2; // 0x393 Return
}


func_660()
{
	var_236_bool = 0; var_237_bool = 0; // 0x294 PushV
	var_238_bool = 1; // 0x295 PushB
	CameraSwitchToNormal(var_238_bool); // 0x296 Func
	var_239_bool = 0; // 0x298 PushV
	func_1058(var_239_bool); // 0x299 NEW_2
	if(var_239_bool == 0) goto Label_669; // 0x29b JumpB
	goto Label_677; // 0x29c Jump
	
Label_677:
	return 2; // 0x2a5 Return
	
Label_669:
	var_240_string = "head"; // 0x29d PushS
	HasAnimationTrack(var_237_bool, var_240_string); // 0x29e Func
	var_241_bool = var_237_bool; // 0x2a0 Push
	if(var_241_bool == 0) goto Label_677; // 0x2a1 JumpB
	var_242_string = "head"; // 0x2a2 PushS
	UnlookAsync(var_242_string); // 0x2a3 Func
}


func_149(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0x96 PushV
	func_1058(var_190_bool); // 0x97 NEW_2
	var_191_bool = var_190_bool == 0; // 0x99 Not
	if(var_191_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_192_bool = var_189_string == var_2_object; // 0x9c Eq
	if(var_192_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_193_string = ""; var_194_bool = 0; // 0x9f PushV
	var_193_string = var_189_string; // 0xa0 Mov
	var_195_string = ""; // 0xa1 PushS
	var_196_bool = var_189_string == var_195_string; // 0xa2 Eq
	if(var_196_bool == 0) goto Label_166; // 0xa3 JumpB
	var_194_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_832(var_193_string, var_194_bool); // 0xa7 NEW_2
	var_2_object = var_189_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_194_bool = 1; // 0xa6 MovB
}


func_916()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x394 PushV
	var_20_string = "d5q01"; // 0x395 PushS
	var_21_int = 7; // 0x396 PushI
	SetVariable(var_20_string, var_21_int); // 0x397 Func
	var_22_object = Obj(); // 0x399 PushV
	func_1016(var_22_object); // 0x39a NEW_2
	var_19_object = var_22_object; // 0x39b Mov
	var_29_string = "d5q01BurahMeeting"; // 0x39d PushS
	var_30_string = "pt_d5q01_girl_corpse1"; // 0x39e PushS
	var_31_int = 1; // 0x39f PushI
	var_32_int = 515351; // 0x3a0 PushI
	var_33_float = 0; // 0x3a1 PushV
	func_902(var_33_float); // 0x3a2 NEW_2
	AddMark(var_29_string, var_30_string, var_31_int, var_32_int, var_33_float); // 0x3a4 ObjFunc
	func_962(); // 0x3a7 NEW_2
	var_59_bool = 0; var_60_string = ""; var_61_string = ""; // 0x3a9 PushV
	var_60_string = "quest_d5_01"; // 0x3aa MovS
	var_61_string = "burah_free"; // 0x3ab MovS
	func_890(var_59_bool, var_60_string, var_61_string); // 0x3ac NEW_2
	return 2; // 0x3ae Return
}


func_1050(var_67_int)
{
	var_67_int = 515592; // 0x41a MovI
	return 0; // 0x41b Return
}


func_1052(var_66_int)
{
	var_66_int = 511961; // 0x41c MovI
	return 0; // 0x41d Return
}


func_1054(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png"; // 0x41e MovS
	return 0; // 0x41f Return
}


func_1056(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png"; // 0x420 MovS
	return 0; // 0x421 Return
}


func_1058(var_61_bool)
{
	var_61_bool = 1; // 0x422 MovB
	return 0; // 0x423 Return
}


func_678(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x2a6 PushV
	var_88_string = "voice_common"; // 0x2a7 PushS
	GetVariable(var_88_string, var_86_int); // 0x2a8 Func
	var_89_int = var_86_int; // 0x2aa Push
	if(var_89_int == 0) goto Label_716; // 0x2ab JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x2ac PushV
	var_91_object = var_80_object; // 0x2ad Mov
	func_736(var_91_object); // 0x2ae NEW_2
	var_120_bool = var_90_bool == 0; // 0x2b0 Not
	if(var_120_bool == 0) goto Label_698; // 0x2b1 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2b2 PushV
	var_122_object = var_80_object; // 0x2b3 Mov
	func_773(var_122_object); // 0x2b4 NEW_2
	var_156_bool = var_121_bool == 0; // 0x2b6 Not
	if(var_156_bool == 0) goto Label_698; // 0x2b7 JumpB
	var_79_bool = 0; // 0x2b8 MovB
	return 4; // 0x2b9 Return
	
Label_698:
	var_157_int = 2; // 0x2ba PushI
	irand(var_87_int, var_157_int); // 0x2bb Func
	var_158_int = var_87_int; // 0x2bd Push
	if(var_158_int == 0) goto Label_711; // 0x2be JumpB
	var_159_string = "voice_common"; // 0x2bf PushS
	var_160_int = 1; // 0x2c0 PushI
	var_161_int = var_86_int + var_160_int; // 0x2c1 Add
	var_162_int = 3; // 0x2c2 PushI
	var_163_int = var_161_int / var_162_int; // 0x2c3 Mod
	SetVariable(var_159_string, var_163_int); // 0x2c4 Func
	goto Label_715; // 0x2c6 Jump
	
Label_715:
	goto Label_734; // 0x2cb Jump
	
Label_734:
	var_79_bool = 1; // 0x2de MovB
	return 4; // 0x2df Return
	
Label_711:
	var_164_string = "voice_common"; // 0x2c7 PushS
	var_165_int = 0; // 0x2c8 PushI
	SetVariable(var_164_string, var_165_int); // 0x2c9 Func
	
Label_716:
	var_166_bool = 0; var_167_object = Obj(); // 0x2cc PushV
	var_167_object = var_80_object; // 0x2cd Mov
	func_773(var_167_object); // 0x2ce NEW_2
	var_168_bool = var_166_bool == 0; // 0x2d0 Not
	if(var_168_bool == 0) goto Label_730; // 0x2d1 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x2d2 PushV
	var_170_object = var_80_object; // 0x2d3 Mov
	func_736(var_170_object); // 0x2d4 NEW_2
	var_171_bool = var_169_bool == 0; // 0x2d6 Not
	if(var_171_bool == 0) goto Label_730; // 0x2d7 JumpB
	var_79_bool = 0; // 0x2d8 MovB
	return 4; // 0x2d9 Return
	
Label_730:
	var_172_string = "voice_common"; // 0x2da PushS
	var_173_int = 1; // 0x2db PushI
	SetVariable(var_172_string, var_173_int); // 0x2dc Func
}


func_816(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x330 PushV
	lshHasAnimation(var_222_bool, var_218_string); // 0x331 Func
	var_225_bool = var_222_bool; // 0x333 Push
	if(var_225_bool == 0) goto Label_827; // 0x334 JumpB
	lshGetAnimTimes(var_218_string, var_223_float, var_224_float); // 0x335 Func
	var_226_bool = 0; // 0x337 PushB
	lshPlayAnimation(var_223_float, var_224_float, var_226_bool); // 0x338 Func
	goto Label_831; // 0x33a Jump
	
Label_831:
	return 6; // 0x33f Return
	
Label_827:
	var_227_string = "Can't find lsh animation : "; // 0x33b PushS
	var_228_int = var_227_string + var_218_string; // 0x33c Add
	Trace(var_228_int); // 0x33d Func
}


func_944()
{
	var_14_string = "ood5Burah1"; // 0x3b1 PushS
	var_15_int = 1; // 0x3b2 PushI
	SetVariable(var_14_string, var_15_int); // 0x3b3 Func
	return 0; // 0x3b5 Return
}


func_950(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x3b7 PushV
	var_184_string = "ood5Burah1"; // 0x3b8 MovS
	func_885(var_183_int, var_184_string); // 0x3b9 NEW_2
	var_187_int = 0; // 0x3bb PushI
	var_188_bool = var_183_int == var_187_int; // 0x3bc Eq
	if(var_188_bool == 0) goto Label_960; // 0x3bd JumpB
	var_181_bool = 1; // 0x3be MovB
	return 0; // 0x3bf Return
	
Label_960:
	var_181_bool = 0; // 0x3c0 MovB
	return 0; // 0x3c1 Return
}


func_832(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x340 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x341 Func
	var_203_bool = var_200_bool; // 0x343 Push
	if(var_203_bool == 0) goto Label_842; // 0x344 JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x345 Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x347 Func
	goto Label_846; // 0x349 Jump
	
Label_846:
	return 6; // 0x34e Return
	
Label_842:
	var_204_string = "Can't find lsh animation : "; // 0x34a PushS
	var_205_int = var_204_string + var_193_string; // 0x34b Add
	Trace(var_205_int); // 0x34c Func
}


func_962()
{
	var_36_object = Obj(); var_37_object = Obj(); // 0x3c2 PushV
	var_38_int = 146; // 0x3c3 PushI
	var_39_int = 1; // 0x3c4 PushI
	var_40_int = 515346; // 0x3c5 PushI
	CreateDiaryEntry(var_37_object, var_38_int, var_39_int, var_40_int); // 0x3c6 Func
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0; // 0x3c8 PushV
	var_42_object = var_37_object; // 0x3c9 Mov
	var_43_int = 139; // 0x3ca MovI
	func_988(var_41_bool, var_42_object, var_43_int); // 0x3cb NEW_2
	return 2; // 0x3cd Return
}


func_589(var_8_bool)
{
	var_8_bool = 1; // 0x24d MovB
	return 0; // 0x24e Return
}


func_591(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x24f PushV
	GetPosition(var_31_cvector); // 0x250 ObjFunc
	GetEyesHeight(var_30_float); // 0x252 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x254 PushE
	var_39_float = var_39_float + var_30_float; // 0x255 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x256 PopE
	GetPosition(var_32_cvector); // 0x257 Func
	GetEyesHeight(var_30_float); // 0x259 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x25b PushE
	var_40_float = var_40_float + var_30_float; // 0x25c Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x25d PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x25e Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x25f PushE
	var_41_float = 0; // 0x260 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x261 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x262 Or
	var_43_float = sqrt(var_42_int); // 0x263 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x264 Div2
	var_34_cvector = -var_33_cvector; // 0x265 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x266 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x267 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x268 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x269 Xor2
	func_875(var_45_cvector, var_46_cvector); // 0x26a NEW_2
	var_53_int = 25; // 0x26c PushI
	var_54_float = var_45_cvector * var_53_int; // 0x26d Mult
	var_55_int = var_44_float + var_54_float; // 0x26e Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x26f PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x270 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x271 Add2
	IsOverrideActive(var_37_bool); // 0x272 Func
	var_57_bool = var_37_bool; // 0x274 Push
	if(var_57_bool == 0) goto Label_632; // 0x275 JumpB
	var_18_bool = 0; // 0x276 MovB
	return 18; // 0x277 Return
	
Label_632:
	StopWorld(); // 0x278 Func
	var_58_bool = 1; // 0x27a PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x27b Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x27d PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x27e PushE
	Rotate(var_59_float, var_60_float); // 0x27f Func
	var_61_bool = 0; // 0x281 PushV
	func_1058(var_61_bool); // 0x282 NEW_2
	if(var_61_bool == 0) goto Label_646; // 0x284 JumpB
	goto Label_654; // 0x285 Jump
	
Label_654:
	CameraWaitForPlayFinish(); // 0x28e Func
	ResumeWorld(); // 0x290 Func
	var_18_bool = 1; // 0x292 MovB
	return 18; // 0x293 Return
	
Label_646:
	var_62_string = "head"; // 0x286 PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x287 Func
	var_63_bool = var_38_bool; // 0x289 Push
	if(var_63_bool == 0) goto Label_654; // 0x28a JumpB
	var_64_string = "head"; // 0x28b PushS
	LookAsyncCamera(var_64_string); // 0x28c Func
}


func_847(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x34f PushV
	var_117_bool = 0; // 0x350 PushV
	func_1058(var_117_bool); // 0x351 NEW_2
	if(var_117_bool == 0) goto Label_860; // 0x353 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x354 Func
	var_118_bool = var_116_bool; // 0x356 Push
	if(var_118_bool == 0) goto Label_860; // 0x357 JumpB
	lshPlaySpeech(var_114_string); // 0x358 Func
	var_113_bool = 1; // 0x35a MovB
	return 2; // 0x35b Return
	
Label_860:
	var_113_bool = 0; // 0x35c MovB
	return 2; // 0x35d Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_119; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_950(var_182_object); // 0x59 NEW_2
	if(var_181_bool == 0) goto Label_117; // 0x5b JumpB
	var_189_string = ""; // 0x5c PushV
	var_189_string = "Doubt"; // 0x5d MovS
	func_149(var_175_object, var_189_string); // 0x5e NEW_2
	var_206_int = 510543; // 0x60 PushI
	SetMessage(var_206_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_207_int = 510544; // 0x65 PushI
	var_208_int = 11634; // 0x66 PushI
	var_209_int = 11633; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	var_210_int = 510560; // 0x6a PushI
	var_211_int = 16756; // 0x6b PushI
	var_212_int = 11649; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	var_213_int = 510566; // 0x6f PushI
	var_214_int = 11634; // 0x70 PushI
	var_215_int = 11655; // 0x71 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_216_bool = 0; // 0x77 PushV
	func_1058(var_216_bool); // 0x78 NEW_2
	if(var_216_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_217_string = var_3_string; // 0x7d PushT
	if(var_217_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_218_string = ""; // 0x80 PushV
	var_218_string = var_2_object; // 0x81 MovT
	func_816(var_218_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_229_string = "all"; // 0x86 PushS
	var_230_string = "idle"; // 0x87 PushS
	PlayAnimation(var_229_string, var_230_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_231_string = var_3_string; // 0x8c PushT
	if(var_231_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_232_string = "all"; // 0x8f PushS
	var_233_string = "idle"; // 0x90 PushS
	PlayAnimation(var_232_string, var_233_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
	
Label_117:
	return 0; // 0x75 Return
}


func_975(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x3cf PushV
	GetDiaryRoot(var_52_object); // 0x3d0 Func
	var_53_bool = var_52_object == 0; // 0x3d2 Not
	if(var_53_bool == 0) goto Label_985; // 0x3d3 JumpB
	var_54_string = "Can't retrieve diary root"; // 0x3d4 PushS
	Trace(var_54_string); // 0x3d5 Func
	var_50_object = 0; // 0x3d7 MovB
	return 2; // 0x3d8 Return
	
Label_985:
	var_50_object = var_52_object; // 0x3d9 Mov
	return 2; // 0x3da Return
}


func_988(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x3dc PushV
	var_50_object = Obj(); // 0x3dd PushV
	func_975(var_50_object); // 0x3de NEW_2
	var_47_object = var_50_object; // 0x3df Mov
	Find(var_43_int, var_48_object); // 0x3e1 ObjFunc
	var_55_bool = var_48_object == 0; // 0x3e3 Not
	if(var_55_bool == 0) goto Label_1003; // 0x3e4 JumpB
	var_56_string = "Can't find diary parent with id: "; // 0x3e5 PushS
	var_57_int = var_56_string + var_43_int; // 0x3e6 Add
	Trace(var_57_int); // 0x3e7 Func
	var_41_bool = 0; // 0x3e9 MovB
	return 6; // 0x3ea Return
	
Label_1003:
	AddChild(var_42_object); // 0x3eb ObjFunc
	var_58_int = 7; // 0x3ed PushI
	SendWorldWndMessage(var_58_int); // 0x3ee Func
	GetCategory(var_49_int); // 0x3f0 ObjFunc
	SetDiarySection(var_49_int); // 0x3f2 Func
	var_41_bool = 0; // 0x3f4 MovB
	return 6; // 0x3f5 Return
}


func_862()
{
	var_9_bool = 0; // 0x35e PushV
	func_1058(var_9_bool); // 0x35f NEW_2
	if(var_9_bool == 0) goto Label_868; // 0x361 JumpB
	lshStopSpeech(); // 0x362 Func
	
Label_868:
	return 0; // 0x364 Return
}


func_736(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x2e0 PushV
	var_97_string = "c"; // 0x2e1 MovS
	var_98_int = 0; // 0x2e2 MovI
	
Label_739:
	var_102_int = 1; // 0x2e3 PushI
	if(var_102_int == 0) goto Label_752; // 0x2e4 JumpB
	var_103_int = 1; // 0x2e5 PushI
	var_104_int = var_98_int + var_103_int; // 0x2e6 Add
	var_105_int = var_97_string + var_104_int; // 0x2e7 Add
	HasProperty(var_105_int, var_99_bool); // 0x2e8 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x2ea Not
	if(var_106_bool == 0) goto Label_749; // 0x2eb JumpB
	goto Label_752; // 0x2ec Jump
	
Label_752:
	var_107_bool = var_98_int == 0; // 0x2f0 Not
	if(var_107_bool == 0) goto Label_756; // 0x2f1 JumpB
	var_90_bool = 0; // 0x2f2 MovB
	return 10; // 0x2f3 Return
	
Label_756:
	var_100_int = 0; // 0x2f4 MovI
	var_108_int = 1; // 0x2f5 PushI
	var_109_bool = var_98_int > var_108_int; // 0x2f6 GT
	if(var_109_bool == 0) goto Label_762; // 0x2f7 JumpB
	irand(var_100_int, var_98_int); // 0x2f8 Func
	
Label_762:
	var_110_int = 1; // 0x2fa PushI
	var_111_int = var_100_int + var_110_int; // 0x2fb Add
	var_112_int = var_97_string + var_111_int; // 0x2fc Add
	GetProperty(var_112_int, var_101_string); // 0x2fd ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x2ff PushV
	var_114_string = var_101_string; // 0x300 Mov
	func_847(var_113_bool, var_114_string); // 0x301 NEW_2
	var_90_bool = var_113_bool; // 0x302 Mov
	return 10; // 0x304 Return
	
Label_749:
	var_119_int = 1; // 0x2ed PushI
	var_98_int = var_98_int + var_119_int; // 0x2ee Add2
	goto Label_739; // 0x2ef Jump
}


func_869(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x365 PushV
	self(var_11_object); // 0x366 Func
	var_9_object = var_11_object; // 0x368 Mov
	return 2; // 0x369 Return
}


func_875(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x36b PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x36c Or
	var_49_float = sqrt(var_50_int); // 0x36d Sqrt2
	var_51_float = 0.0; // 0x36e PushF
	var_52_bool = var_49_float < var_51_float; // 0x36f LT
	if(var_52_bool == 0) goto Label_883; // 0x370 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x371 MovV
	return 2; // 0x372 Return
	
Label_883:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x373 Div2
	return 2; // 0x374 Return
}


func_885(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x375 PushV
	GetVariable(var_184_string, var_186_int); // 0x376 Func
	var_183_int = var_186_int; // 0x378 Mov
	return 2; // 0x379 Return
}


func_1016(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x3f8 PushV
	GetMainOutdoorScene(var_25_object); // 0x3f9 Func
	var_27_bool = var_25_object == 0; // 0x3fb NullEq
	if(var_27_bool == 0) goto Label_1027; // 0x3fc JumpB
	var_28_string = "Can't find main outdoor scene"; // 0x3fd PushS
	Trace(var_28_string); // 0x3fe Func
	var_26_object = 0; // 0x400 SetNull
	var_22_object = var_26_object; // 0x401 Mov
	return 4; // 0x402 Return
	
Label_1027:
	GetMap(var_26_object); // 0x403 ObjFunc
	var_22_object = var_26_object; // 0x405 Mov
	return 4; // 0x406 Return
}


func_890(var_59_bool, var_60_string, var_61_string)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x37a PushV
	FindActor(var_63_object, var_60_string); // 0x37b Func
	var_64_bool = var_63_object == 0; // 0x37d NullEq
	if(var_64_bool == 0) goto Label_897; // 0x37e JumpB
	var_59_bool = 0; // 0x37f MovB
	return 2; // 0x380 Return
	
Label_897:
	Trigger(var_63_object, var_61_string); // 0x381 Func
	var_59_bool = 1; // 0x383 MovB
	return 2; // 0x384 Return
}


