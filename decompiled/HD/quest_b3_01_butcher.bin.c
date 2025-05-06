task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc0 PushI
	if(var_8_int == 0) goto Label_568; // 0xc1 JumpB
	func_1014(); // 0xc3 NEW_2
	var_10_int = 20471; // 0xc5 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xc6 Eq
	if(var_11_bool == 0) goto Label_205; // 0xc7 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xc8 PushV
	var_12_object = var_1_object; // 0xc9 MovT
	var_13_object = var_0_object; // 0xca MovT
	func_1090(); // 0xcb NEW_2
	
Label_205:
	var_55_int = 20472; // 0xcd PushI
	var_56_bool = var_7_bool == var_55_int; // 0xce Eq
	if(var_56_bool == 0) goto Label_213; // 0xcf JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xd0 PushV
	var_57_object = var_1_object; // 0xd1 MovT
	var_58_object = var_0_object; // 0xd2 MovT
	func_1090(); // 0xd3 NEW_2
	
Label_213:
	var_59_int = 20821; // 0xd5 PushI
	var_60_bool = var_7_bool == var_59_int; // 0xd6 Eq
	if(var_60_bool == 0) goto Label_221; // 0xd7 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0xd8 PushV
	var_61_object = var_1_object; // 0xd9 MovT
	var_62_object = var_0_object; // 0xda MovT
	func_1113(); // 0xdb NEW_2
	
Label_221:
	var_65_int = 20448; // 0xdd PushI
	var_66_bool = var_6_int == var_65_int; // 0xde Eq
	if(var_66_bool == 0) goto Label_274; // 0xdf JumpB
	var_67_bool = 0; var_68_object = Obj(); // 0xe0 PushV
	var_68_object = var_1_object; // 0xe1 MovT
	func_1131(var_68_object); // 0xe2 NEW_2
	if(var_67_bool == 0) goto Label_249; // 0xe4 JumpB
	var_75_string = ""; // 0xe5 PushV
	var_75_string = "Neutral"; // 0xe6 MovS
	func_169(var_7_bool, var_75_string); // 0xe7 NEW_2
	var_92_int = 519294; // 0xe9 PushI
	SetMessage(var_92_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_93_int = 519295; // 0xee PushI
	var_94_int = 20450; // 0xef PushI
	var_95_int = 20449; // 0xf0 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf1 TObjFunc
	var_96_int = 519300; // 0xf3 PushI
	var_97_int = 20455; // 0xf4 PushI
	var_98_int = 20454; // 0xf5 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_99_string = ""; // 0xf9 PushV
	var_99_string = "Neutral"; // 0xfa MovS
	func_169(var_7_bool, var_99_string); // 0xfb NEW_2
	var_100_int = 519643; // 0xfd PushI
	SetMessage(var_100_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_101_bool = 0; var_102_object = Obj(); // 0x102 PushV
	var_102_object = var_1_object; // 0x103 MovT
	func_1119(var_102_object); // 0x104 NEW_2
	if(var_101_bool == 0) goto Label_268; // 0x106 JumpB
	var_107_int = 519644; // 0x107 PushI
	var_108_int = 20823; // 0x108 PushI
	var_109_int = 20821; // 0x109 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x10a TObjFunc
	
Label_268:
	var_110_int = 519645; // 0x10c PushI
	var_111_int = -1; // 0x10d PushI
	var_112_int = 20822; // 0x10e PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_113_int = 20823; // 0x112 PushI
	var_114_bool = var_6_int == var_113_int; // 0x113 Eq
	if(var_114_bool == 0) goto Label_297; // 0x114 JumpB
	var_115_string = ""; // 0x115 PushV
	var_115_string = "Neutral"; // 0x116 MovS
	func_169(var_7_bool, var_115_string); // 0x117 NEW_2
	var_116_int = 519646; // 0x119 PushI
	SetMessage(var_116_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_117_int = 519647; // 0x11e PushI
	var_118_int = 20825; // 0x11f PushI
	var_119_int = 20824; // 0x120 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x121 TObjFunc
	var_120_int = 527865; // 0x123 PushI
	var_121_int = 20825; // 0x124 PushI
	var_122_int = 29210; // 0x125 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_123_int = 20825; // 0x129 PushI
	var_124_bool = var_6_int == var_123_int; // 0x12a Eq
	if(var_124_bool == 0) goto Label_315; // 0x12b JumpB
	var_125_string = ""; // 0x12c PushV
	var_125_string = "Neutral"; // 0x12d MovS
	func_169(var_7_bool, var_125_string); // 0x12e NEW_2
	var_126_int = 519648; // 0x130 PushI
	SetMessage(var_126_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_127_int = 519649; // 0x135 PushI
	var_128_int = -1; // 0x136 PushI
	var_129_int = 20826; // 0x137 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x138 TObjFunc
	return 0; // 0x13a Return
	
Label_315:
	var_130_int = 20455; // 0x13b PushI
	var_131_bool = var_6_int == var_130_int; // 0x13c Eq
	if(var_131_bool == 0) goto Label_333; // 0x13d JumpB
	var_132_string = ""; // 0x13e PushV
	var_132_string = "Neutral"; // 0x13f MovS
	func_169(var_7_bool, var_132_string); // 0x140 NEW_2
	var_133_int = 519301; // 0x142 PushI
	SetMessage(var_133_int); // 0x143 TObjFunc
	ClearReplies(); // 0x145 TObjFunc
	var_134_int = 519304; // 0x147 PushI
	var_135_int = 20459; // 0x148 PushI
	var_136_int = 20458; // 0x149 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_137_int = 20450; // 0x14d PushI
	var_138_bool = var_6_int == var_137_int; // 0x14e Eq
	if(var_138_bool == 0) goto Label_351; // 0x14f JumpB
	var_139_string = ""; // 0x150 PushV
	var_139_string = "Neutral"; // 0x151 MovS
	func_169(var_7_bool, var_139_string); // 0x152 NEW_2
	var_140_int = 519296; // 0x154 PushI
	SetMessage(var_140_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_141_int = 519297; // 0x159 PushI
	var_142_int = 20452; // 0x15a PushI
	var_143_int = 20451; // 0x15b PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x15c TObjFunc
	return 0; // 0x15e Return
	
Label_351:
	var_144_int = 20452; // 0x15f PushI
	var_145_bool = var_6_int == var_144_int; // 0x160 Eq
	if(var_145_bool == 0) goto Label_374; // 0x161 JumpB
	var_146_string = ""; // 0x162 PushV
	var_146_string = "Neutral"; // 0x163 MovS
	func_169(var_7_bool, var_146_string); // 0x164 NEW_2
	var_147_int = 519298; // 0x166 PushI
	SetMessage(var_147_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_148_int = 519299; // 0x16b PushI
	var_149_int = 20456; // 0x16c PushI
	var_150_int = 20453; // 0x16d PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x16e TObjFunc
	var_151_int = 519317; // 0x170 PushI
	var_152_int = 20474; // 0x171 PushI
	var_153_int = 20473; // 0x172 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_154_int = 20474; // 0x176 PushI
	var_155_bool = var_6_int == var_154_int; // 0x177 Eq
	if(var_155_bool == 0) goto Label_397; // 0x178 JumpB
	var_156_string = ""; // 0x179 PushV
	var_156_string = "Neutral"; // 0x17a MovS
	func_169(var_7_bool, var_156_string); // 0x17b NEW_2
	var_157_int = 519318; // 0x17d PushI
	SetMessage(var_157_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_158_int = 519319; // 0x182 PushI
	var_159_int = 20476; // 0x183 PushI
	var_160_int = 20475; // 0x184 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x185 TObjFunc
	var_161_int = 519322; // 0x187 PushI
	var_162_int = 20456; // 0x188 PushI
	var_163_int = 20479; // 0x189 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x18a TObjFunc
	return 0; // 0x18c Return
	
Label_397:
	var_164_int = 20476; // 0x18d PushI
	var_165_bool = var_6_int == var_164_int; // 0x18e Eq
	if(var_165_bool == 0) goto Label_415; // 0x18f JumpB
	var_166_string = ""; // 0x190 PushV
	var_166_string = "Neutral"; // 0x191 MovS
	func_169(var_7_bool, var_166_string); // 0x192 NEW_2
	var_167_int = 519320; // 0x194 PushI
	SetMessage(var_167_int); // 0x195 TObjFunc
	ClearReplies(); // 0x197 TObjFunc
	var_168_int = 519321; // 0x199 PushI
	var_169_int = 20456; // 0x19a PushI
	var_170_int = 20477; // 0x19b PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x19c TObjFunc
	return 0; // 0x19e Return
	
Label_415:
	var_171_int = 20456; // 0x19f PushI
	var_172_bool = var_6_int == var_171_int; // 0x1a0 Eq
	if(var_172_bool == 0) goto Label_433; // 0x1a1 JumpB
	var_173_string = ""; // 0x1a2 PushV
	var_173_string = "Neutral"; // 0x1a3 MovS
	func_169(var_7_bool, var_173_string); // 0x1a4 NEW_2
	var_174_int = 519302; // 0x1a6 PushI
	SetMessage(var_174_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_175_int = 519303; // 0x1ab PushI
	var_176_int = 20459; // 0x1ac PushI
	var_177_int = 20457; // 0x1ad PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_178_int = 20459; // 0x1b1 PushI
	var_179_bool = var_6_int == var_178_int; // 0x1b2 Eq
	if(var_179_bool == 0) goto Label_456; // 0x1b3 JumpB
	var_180_string = ""; // 0x1b4 PushV
	var_180_string = "Neutral"; // 0x1b5 MovS
	func_169(var_7_bool, var_180_string); // 0x1b6 NEW_2
	var_181_int = 519305; // 0x1b8 PushI
	SetMessage(var_181_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_182_int = 519306; // 0x1bd PushI
	var_183_int = 20462; // 0x1be PushI
	var_184_int = 20461; // 0x1bf PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1c0 TObjFunc
	var_185_int = 519638; // 0x1c2 PushI
	var_186_int = 20817; // 0x1c3 PushI
	var_187_int = 20816; // 0x1c4 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_188_int = 20817; // 0x1c8 PushI
	var_189_bool = var_6_int == var_188_int; // 0x1c9 Eq
	if(var_189_bool == 0) goto Label_474; // 0x1ca JumpB
	var_190_string = ""; // 0x1cb PushV
	var_190_string = "Neutral"; // 0x1cc MovS
	func_169(var_7_bool, var_190_string); // 0x1cd NEW_2
	var_191_int = 519639; // 0x1cf PushI
	SetMessage(var_191_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_192_int = 519640; // 0x1d4 PushI
	var_193_int = 20470; // 0x1d5 PushI
	var_194_int = 20818; // 0x1d6 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_195_int = 20462; // 0x1da PushI
	var_196_bool = var_6_int == var_195_int; // 0x1db Eq
	if(var_196_bool == 0) goto Label_492; // 0x1dc JumpB
	var_197_string = ""; // 0x1dd PushV
	var_197_string = "Neutral"; // 0x1de MovS
	func_169(var_7_bool, var_197_string); // 0x1df NEW_2
	var_198_int = 519307; // 0x1e1 PushI
	SetMessage(var_198_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_199_int = 519308; // 0x1e6 PushI
	var_200_int = 20464; // 0x1e7 PushI
	var_201_int = 20463; // 0x1e8 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1e9 TObjFunc
	return 0; // 0x1eb Return
	
Label_492:
	var_202_int = 20464; // 0x1ec PushI
	var_203_bool = var_6_int == var_202_int; // 0x1ed Eq
	if(var_203_bool == 0) goto Label_515; // 0x1ee JumpB
	var_204_string = ""; // 0x1ef PushV
	var_204_string = "Neutral"; // 0x1f0 MovS
	func_169(var_7_bool, var_204_string); // 0x1f1 NEW_2
	var_205_int = 519309; // 0x1f3 PushI
	SetMessage(var_205_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_206_int = 519310; // 0x1f8 PushI
	var_207_int = 20467; // 0x1f9 PushI
	var_208_int = 20465; // 0x1fa PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1fb TObjFunc
	var_209_int = 519311; // 0x1fd PushI
	var_210_int = 20467; // 0x1fe PushI
	var_211_int = 20466; // 0x1ff PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_212_int = 20467; // 0x203 PushI
	var_213_bool = var_6_int == var_212_int; // 0x204 Eq
	if(var_213_bool == 0) goto Label_533; // 0x205 JumpB
	var_214_string = ""; // 0x206 PushV
	var_214_string = "Neutral"; // 0x207 MovS
	func_169(var_7_bool, var_214_string); // 0x208 NEW_2
	var_215_int = 519312; // 0x20a PushI
	SetMessage(var_215_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_216_int = 519313; // 0x20f PushI
	var_217_int = 20470; // 0x210 PushI
	var_218_int = 20469; // 0x211 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x212 TObjFunc
	return 0; // 0x214 Return
	
Label_533:
	var_219_int = 20470; // 0x215 PushI
	var_220_bool = var_6_int == var_219_int; // 0x216 Eq
	if(var_220_bool == 0) goto Label_556; // 0x217 JumpB
	var_221_string = ""; // 0x218 PushV
	var_221_string = "Neutral"; // 0x219 MovS
	func_169(var_7_bool, var_221_string); // 0x21a NEW_2
	var_222_int = 519314; // 0x21c PushI
	SetMessage(var_222_int); // 0x21d TObjFunc
	ClearReplies(); // 0x21f TObjFunc
	var_223_int = 519315; // 0x221 PushI
	var_224_int = -1; // 0x222 PushI
	var_225_int = 20471; // 0x223 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x224 TObjFunc
	var_226_int = 519316; // 0x226 PushI
	var_227_int = -1; // 0x227 PushI
	var_228_int = 20472; // 0x228 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x229 TObjFunc
	return 0; // 0x22b Return
	
Label_556:
	var_3_string = 1; // 0x22c TMovB
	var_229_bool = 0; // 0x22d PushV
	func_1064(var_229_bool); // 0x22e NEW_2
	if(var_229_bool == 0) goto Label_564; // 0x230 JumpB
	lshStopAnimation(); // 0x231 Func
	goto Label_566; // 0x233 Jump
	
Label_566:
	return 0; // 0x236 Return
	
Label_564:
	StopAnimation(); // 0x234 Func
	
Label_568:
	return 0; // 0x238 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_733(); // 0x23b NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x23d PushV
	var_8_object = var_6_object; // 0x23e Mov
	TaskCall(0); // 0x23f TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x240 NEW_2
	TaskReturn(); // 0x241 TaskReturn
	return 0; // 0x243 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x26e PushS
	var_8_bool = var_6_string == var_7_string; // 0x26f Eq
	if(var_8_bool == 0) goto Label_628; // 0x270 JumpB
	func_601(var_6_string); // 0x272 NEW_2
	
Label_628:
	return 0; // 0x274 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x275 Func
	sync(); // 0x277 Func
	return 0; // 0x279 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x27a PushV
	var_6_bool = 0; // 0x27b MovB
	var_7_object = var_0_object; // 0x27c PushT
	if(var_7_object == 0) goto Label_643; // 0x27d JumpB
	var_8_bool = 0; // 0x27e PushV
	func_650(var_8_bool); // 0x27f NEW_2
	if(var_8_bool == 0) goto Label_643; // 0x281 JumpB
	var_6_bool = 1; // 0x282 MovB
	
Label_643:
	if(var_6_bool == 0) goto Label_649; // 0x283 JumpB
	var_9_object = Obj(); // 0x284 PushV
	func_1021(var_9_object); // 0x285 NEW_2
	RemoveActor(var_9_object); // 0x287 Func
	
Label_649:
	return 0; // 0x289 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x244 PushV
	
Label_581:
	var_8_bool = 0; // 0x245 PushV
	func_738(var_8_bool); // 0x246 NEW_2
	var_11_bool = var_8_bool == 0; // 0x248 Not
	if(var_11_bool == 0) goto Label_589; // 0x249 JumpB
	Hold(); // 0x24a Func
	goto Label_581; // 0x24c Jump
	
Label_589:
	var_12_int = 3; // 0x24d PushI
	rand(var_7_float, var_12_int); // 0x24e Func
	var_13_int = 3; // 0x250 PushI
	var_14_int = var_7_float + var_13_int; // 0x251 Add
	Sleep(var_14_int); // 0x252 Func
	func_652(); // 0x255 NEW_2
	goto Label_581; // 0x257 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_743(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1058(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1056(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1060(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1062(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1214(var_70_int); // 0x22 NEW_2
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
	func_1021(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_830(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_245_bool = var_17_bool == 0; // 0x3f Not
	if(var_245_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_246_object = Obj(); // 0x46 PushV
	var_246_object = var_8_object; // 0x47 Mov
	func_812(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1027(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x403 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x404 Or
	var_49_float = sqrt(var_50_int); // 0x405 Sqrt2
	var_51_float = 0.0; // 0x406 PushF
	var_52_bool = var_49_float < var_51_float; // 0x407 LT
	if(var_52_bool == 0) goto Label_1035; // 0x408 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x409 MovV
	return 2; // 0x40a Return
	
Label_1035:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x40b Div2
	return 2; // 0x40c Return
}


func_1156(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x484 PushV
	GetDiaryRoot(var_48_object); // 0x485 Func
	var_49_bool = var_48_object == 0; // 0x487 Not
	if(var_49_bool == 0) goto Label_1166; // 0x488 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x489 PushS
	Trace(var_50_string); // 0x48a Func
	var_46_object = 0; // 0x48c MovB
	return 2; // 0x48d Return
	
Label_1166:
	var_46_object = var_48_object; // 0x48e Mov
	return 2; // 0x48f Return
}


func_650(var_8_bool)
{
	var_8_bool = 1; // 0x28a MovB
	return 0; // 0x28b Return
}


func_652()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x28c PushV
	WaitForAnimEnd(); // 0x28d Func
	var_29_bool = 0; // 0x28f PushV
	func_738(var_29_bool); // 0x290 NEW_2
	var_30_bool = var_29_bool == 0; // 0x292 Not
	if(var_30_bool == 0) goto Label_661; // 0x293 JumpB
	return 14; // 0x294 Return
	
Label_661:
	var_31_int = 0; // 0x295 PushV
	func_1073(var_31_int); // 0x296 NEW_2
	var_22_int = var_31_int; // 0x297 Mov
	var_23_int = 0; // 0x299 MovI
	
Label_666:
	var_44_bool = 0; // 0x29a PushV
	var_44_bool = 0; // 0x29b MovB
	var_45_int = 5; // 0x29c PushI
	var_46_bool = var_23_int < var_45_int; // 0x29d LT
	if(var_46_bool == 0) goto Label_676; // 0x29e JumpB
	var_47_bool = 0; // 0x29f PushV
	func_738(var_47_bool); // 0x2a0 NEW_2
	if(var_47_bool == 0) goto Label_676; // 0x2a2 JumpB
	var_44_bool = 1; // 0x2a3 MovB
	
Label_676:
	if(var_44_bool == 0) goto Label_728; // 0x2a4 JumpB
	var_48_int = 3; // 0x2a5 PushI
	irand(var_24_int, var_48_int); // 0x2a6 Func
	var_49_int = 0; // 0x2a8 PushI
	var_50_bool = var_24_int == var_49_int; // 0x2a9 Eq
	if(var_50_bool == 0) goto Label_700; // 0x2aa JumpB
	var_51_int = var_22_int; // 0x2ab Push
	if(var_51_int == 0) goto Label_699; // 0x2ac JumpB
	irand(var_25_int, var_22_int); // 0x2ad Func
	var_52_string = "all"; // 0x2af PushS
	var_53_string = ""; var_54_int = 0; // 0x2b0 PushV
	var_54_int = var_25_int; // 0x2b1 Mov
	func_1066(var_53_string, var_54_int); // 0x2b2 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x2b4 Func
	WaitForAnimEnd(var_26_bool); // 0x2b6 Func
	var_55_bool = var_26_bool == 0; // 0x2b8 Not
	if(var_55_bool == 0) goto Label_699; // 0x2b9 JumpB
	goto Label_728; // 0x2ba Jump
	
Label_728:
	ResetAAS(); // 0x2d8 Func
	return 14; // 0x2da Return
	
Label_699:
	goto Label_717; // 0x2bb Jump
	
Label_717:
	var_56_bool = 0; // 0x2cd PushV
	func_731(var_56_bool); // 0x2ce NEW_2
	var_57_bool = var_56_bool == 0; // 0x2d0 Not
	if(var_57_bool == 0) goto Label_723; // 0x2d1 JumpB
	goto Label_728; // 0x2d2 Jump
	
Label_723:
	ResetAAS(); // 0x2d3 Func
	var_58_int = 1; // 0x2d5 PushI
	var_23_int = var_23_int + var_58_int; // 0x2d6 Add2
	goto Label_666; // 0x2d7 Jump
	
Label_700:
	var_59_int = 1; // 0x2bc PushI
	var_60_bool = var_24_int == var_59_int; // 0x2bd Eq
	if(var_60_bool == 0) goto Label_714; // 0x2be JumpB
	var_61_int = 4; // 0x2bf PushI
	rand(var_27_float, var_61_int); // 0x2c0 Func
	var_62_int = 1; // 0x2c2 PushI
	var_63_int = var_27_float + var_62_int; // 0x2c3 Add
	Sleep(var_63_int, var_28_bool); // 0x2c4 Func
	var_64_bool = var_28_bool == 0; // 0x2c6 Not
	if(var_64_bool == 0) goto Label_713; // 0x2c7 JumpB
	goto Label_728; // 0x2c8 Jump
	
Label_713:
	goto Label_717; // 0x2c9 Jump
	
Label_714:
	var_65_int = var_23_int; // 0x2ca Push
	if(var_65_int == 0) goto Label_717; // 0x2cb JumpB
	goto Label_728; // 0x2cc Jump
}


func_1037(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x40d PushV
	GetVariable(var_184_string, var_186_int); // 0x40e Func
	var_183_int = var_186_int; // 0x410 Mov
	return 2; // 0x411 Return
}


func_1169(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x491 PushV
	var_46_object = Obj(); // 0x492 PushV
	func_1156(var_46_object); // 0x493 NEW_2
	var_43_object = var_46_object; // 0x494 Mov
	Find(var_39_int, var_44_object); // 0x496 ObjFunc
	var_51_bool = var_44_object == 0; // 0x498 Not
	if(var_51_bool == 0) goto Label_1184; // 0x499 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x49a PushS
	var_53_int = var_52_string + var_39_int; // 0x49b Add
	Trace(var_53_int); // 0x49c Func
	var_37_bool = 0; // 0x49e MovB
	return 6; // 0x49f Return
	
Label_1184:
	AddChild(var_38_object); // 0x4a0 ObjFunc
	var_54_int = 7; // 0x4a2 PushI
	SendWorldWndMessage(var_54_int); // 0x4a3 Func
	GetCategory(var_45_int); // 0x4a5 ObjFunc
	SetDiarySection(var_45_int); // 0x4a7 Func
	var_37_bool = 0; // 0x4a9 MovB
	return 6; // 0x4aa Return
}


func_1042(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x412 PushV
	GetGameTime(var_31_float); // 0x413 Func
	var_29_float = var_31_float; // 0x415 Mov
	return 2; // 0x416 Return
}


func_1047(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x417 PushV
	GetGameTime(var_136_float); // 0x418 Func
	var_137_int = 1; // 0x41a PushI
	var_138_int = 0; // 0x41b PushV
	var_139_int = 24; // 0x41c PushI
	var_138_int = var_136_float / var_136_float; // 0x41d Div2
	var_134_int = var_137_int + var_138_int; // 0x41e Add2
	return 2; // 0x41f Return
}


func_925(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x39d PushV
	var_133_string = "d"; // 0x39e PushS
	var_134_int = 0; // 0x39f PushV
	func_1047(var_134_int); // 0x3a0 NEW_2
	var_140_int = var_133_string + var_134_int; // 0x3a2 Add
	var_141_string = "m"; // 0x3a3 PushS
	var_128_string = var_140_int + var_141_string; // 0x3a4 Add2
	var_129_int = 0; // 0x3a5 MovI
	
Label_934:
	var_142_int = 1; // 0x3a6 PushI
	if(var_142_int == 0) goto Label_947; // 0x3a7 JumpB
	var_143_int = 1; // 0x3a8 PushI
	var_144_int = var_129_int + var_143_int; // 0x3a9 Add
	var_145_int = var_128_string + var_144_int; // 0x3aa Add
	HasProperty(var_145_int, var_130_bool); // 0x3ab ObjFunc
	var_146_bool = var_130_bool == 0; // 0x3ad Not
	if(var_146_bool == 0) goto Label_944; // 0x3ae JumpB
	goto Label_947; // 0x3af Jump
	
Label_947:
	var_147_bool = var_129_int == 0; // 0x3b3 Not
	if(var_147_bool == 0) goto Label_951; // 0x3b4 JumpB
	var_121_bool = 0; // 0x3b5 MovB
	return 10; // 0x3b6 Return
	
Label_951:
	var_131_int = 0; // 0x3b7 MovI
	var_148_int = 1; // 0x3b8 PushI
	var_149_bool = var_129_int > var_148_int; // 0x3b9 GT
	if(var_149_bool == 0) goto Label_957; // 0x3ba JumpB
	irand(var_131_int, var_129_int); // 0x3bb Func
	
Label_957:
	var_150_int = 1; // 0x3bd PushI
	var_151_int = var_131_int + var_150_int; // 0x3be Add
	var_152_int = var_128_string + var_151_int; // 0x3bf Add
	GetProperty(var_152_int, var_132_string); // 0x3c0 ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x3c2 PushV
	var_154_string = var_132_string; // 0x3c3 Mov
	func_999(var_153_bool, var_154_string); // 0x3c4 NEW_2
	var_121_bool = var_153_bool; // 0x3c5 Mov
	return 10; // 0x3c7 Return
	
Label_944:
	var_155_int = 1; // 0x3b0 PushI
	var_129_int = var_129_int + var_155_int; // 0x3b1 Add2
	goto Label_934; // 0x3b2 Jump
}


func_1056(var_67_int)
{
	var_67_int = 515562; // 0x420 MovI
	return 0; // 0x421 Return
}


func_1058(var_66_int)
{
	var_66_int = 503347; // 0x422 MovI
	return 0; // 0x423 Return
}


func_1060(var_68_string)
{
	var_68_string = "ui/NPC_Citizen1.png"; // 0x424 MovS
	return 0; // 0x425 Return
}


func_1062(var_69_string)
{
	var_69_string = "ui/NPC_Citizen1_b.png"; // 0x426 MovS
	return 0; // 0x427 Return
}


func_1064(var_61_bool)
{
	var_61_bool = 0; // 0x428 MovB
	return 0; // 0x429 Return
}


func_169(var_2_object, var_189_string)
{
	var_190_bool = 0; // 0xaa PushV
	func_1064(var_190_bool); // 0xab NEW_2
	var_191_bool = var_190_bool == 0; // 0xad Not
	if(var_191_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_192_bool = var_189_string == var_2_object; // 0xb0 Eq
	if(var_192_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_193_string = ""; var_194_bool = 0; // 0xb3 PushV
	var_193_string = var_189_string; // 0xb4 Mov
	var_195_string = ""; // 0xb5 PushS
	var_196_bool = var_189_string == var_195_string; // 0xb6 Eq
	if(var_196_bool == 0) goto Label_186; // 0xb7 JumpB
	var_194_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_984(var_193_string, var_194_bool); // 0xbb NEW_2
	var_2_object = var_189_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_194_bool = 1; // 0xba MovB
}


func_1066(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x42a PushV
	var_40_string = "idle"; // 0x42b MovS
	var_41_int = var_38_int; // 0x42c Push
	if(var_41_int == 0) goto Label_1071; // 0x42d JumpB
	var_40_string = var_40_string + var_38_int; // 0x42e Add2
	
Label_1071:
	var_37_string = var_40_string; // 0x42f Mov
	return 2; // 0x430 Return
}


func_812()
{
	var_247_bool = 0; var_248_bool = 0; // 0x32c PushV
	var_249_bool = 1; // 0x32d PushB
	CameraSwitchToNormal(var_249_bool); // 0x32e Func
	var_250_bool = 0; // 0x330 PushV
	func_1064(var_250_bool); // 0x331 NEW_2
	if(var_250_bool == 0) goto Label_821; // 0x333 JumpB
	goto Label_829; // 0x334 Jump
	
Label_829:
	return 2; // 0x33d Return
	
Label_821:
	var_251_string = "head"; // 0x335 PushS
	HasAnimationTrack(var_248_bool, var_251_string); // 0x336 Func
	var_252_bool = var_248_bool; // 0x338 Push
	if(var_252_bool == 0) goto Label_829; // 0x339 JumpB
	var_253_string = "head"; // 0x33a PushS
	UnlookAsync(var_253_string); // 0x33b Func
}


func_1197(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x4ad PushV
	GetMainOutdoorScene(var_21_object); // 0x4ae Func
	var_23_bool = var_21_object == 0; // 0x4b0 NullEq
	if(var_23_bool == 0) goto Label_1208; // 0x4b1 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x4b2 PushS
	Trace(var_24_string); // 0x4b3 Func
	var_22_object = 0; // 0x4b5 SetNull
	var_18_object = var_22_object; // 0x4b6 Mov
	return 4; // 0x4b7 Return
	
Label_1208:
	GetMap(var_22_object); // 0x4b8 ObjFunc
	var_18_object = var_22_object; // 0x4ba Mov
	return 4; // 0x4bb Return
}


func_1073(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x431 PushV
	var_34_int = 0; // 0x432 MovI
	
Label_1075:
	var_36_string = "all"; // 0x433 PushS
	var_37_string = ""; var_38_int = 0; // 0x434 PushV
	var_38_int = var_34_int; // 0x435 Mov
	func_1066(var_37_string, var_38_int); // 0x436 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x438 Func
	var_42_bool = var_35_bool == 0; // 0x43a Not
	if(var_42_bool == 0) goto Label_1085; // 0x43b JumpB
	goto Label_1088; // 0x43c Jump
	
Label_1088:
	var_31_int = var_34_int; // 0x440 Mov
	return 4; // 0x441 Return
	
Label_1085:
	var_43_int = 1; // 0x43d PushI
	var_34_int = var_34_int + var_43_int; // 0x43e Add2
	goto Label_1075; // 0x43f Jump
}


func_830(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x33e PushV
	var_88_string = "voice_common"; // 0x33f PushS
	GetVariable(var_88_string, var_86_int); // 0x340 Func
	var_89_int = var_86_int; // 0x342 Push
	if(var_89_int == 0) goto Label_868; // 0x343 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x344 PushV
	var_91_object = var_80_object; // 0x345 Mov
	func_888(var_91_object); // 0x346 NEW_2
	var_120_bool = var_90_bool == 0; // 0x348 Not
	if(var_120_bool == 0) goto Label_850; // 0x349 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x34a PushV
	var_122_object = var_80_object; // 0x34b Mov
	func_925(var_122_object); // 0x34c NEW_2
	var_156_bool = var_121_bool == 0; // 0x34e Not
	if(var_156_bool == 0) goto Label_850; // 0x34f JumpB
	var_79_bool = 0; // 0x350 MovB
	return 4; // 0x351 Return
	
Label_850:
	var_157_int = 2; // 0x352 PushI
	irand(var_87_int, var_157_int); // 0x353 Func
	var_158_int = var_87_int; // 0x355 Push
	if(var_158_int == 0) goto Label_863; // 0x356 JumpB
	var_159_string = "voice_common"; // 0x357 PushS
	var_160_int = 1; // 0x358 PushI
	var_161_int = var_86_int + var_160_int; // 0x359 Add
	var_162_int = 3; // 0x35a PushI
	var_163_int = var_161_int / var_162_int; // 0x35b Mod
	SetVariable(var_159_string, var_163_int); // 0x35c Func
	goto Label_867; // 0x35e Jump
	
Label_867:
	goto Label_886; // 0x363 Jump
	
Label_886:
	var_79_bool = 1; // 0x376 MovB
	return 4; // 0x377 Return
	
Label_863:
	var_164_string = "voice_common"; // 0x35f PushS
	var_165_int = 0; // 0x360 PushI
	SetVariable(var_164_string, var_165_int); // 0x361 Func
	
Label_868:
	var_166_bool = 0; var_167_object = Obj(); // 0x364 PushV
	var_167_object = var_80_object; // 0x365 Mov
	func_925(var_167_object); // 0x366 NEW_2
	var_168_bool = var_166_bool == 0; // 0x368 Not
	if(var_168_bool == 0) goto Label_882; // 0x369 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x36a PushV
	var_170_object = var_80_object; // 0x36b Mov
	func_888(var_170_object); // 0x36c NEW_2
	var_171_bool = var_169_bool == 0; // 0x36e Not
	if(var_171_bool == 0) goto Label_882; // 0x36f JumpB
	var_79_bool = 0; // 0x370 MovB
	return 4; // 0x371 Return
	
Label_882:
	var_172_string = "voice_common"; // 0x372 PushS
	var_173_int = 1; // 0x373 PushI
	SetVariable(var_172_string, var_173_int); // 0x374 Func
}


func_1214(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x4be PushV
	var_73_string = "branch"; // 0x4bf PushS
	GetVariable(var_73_string, var_72_int); // 0x4c0 Func
	var_74_int = 0; // 0x4c2 PushI
	var_75_bool = var_72_int == var_74_int; // 0x4c3 Eq
	if(var_75_bool == 0) goto Label_1224; // 0x4c4 JumpB
	var_70_int = 1; // 0x4c5 MovI
	return 2; // 0x4c6 Return
	
Label_1224:
	var_76_int = 1; // 0x4c8 PushI
	var_77_bool = var_72_int == var_76_int; // 0x4c9 Eq
	if(var_77_bool == 0) goto Label_1229; // 0x4ca JumpB
	var_70_int = 2; // 0x4cb MovI
	return 2; // 0x4cc Return
	
Label_1229:
	var_70_int = 3; // 0x4cd MovI
	return 2; // 0x4ce Return
}


func_1090()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x442 PushV
	var_16_string = "b3q01"; // 0x443 PushS
	var_17_int = 3; // 0x444 PushI
	SetVariable(var_16_string, var_17_int); // 0x445 Func
	var_18_object = Obj(); // 0x447 PushV
	func_1197(var_18_object); // 0x448 NEW_2
	var_15_object = var_18_object; // 0x449 Mov
	var_25_string = "b3q01ButcherGotoBigVlad"; // 0x44b PushS
	var_26_string = "pt_map_bigvlad"; // 0x44c PushS
	var_27_int = 1; // 0x44d PushI
	var_28_int = 519641; // 0x44e PushI
	var_29_float = 0; // 0x44f PushV
	func_1042(var_29_float); // 0x450 NEW_2
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x452 ObjFunc
	func_1143(); // 0x455 NEW_2
	return 2; // 0x457 Return
}


func_968(var_215_string)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0; // 0x3c8 PushV
	lshHasAnimation(var_219_bool, var_215_string); // 0x3c9 Func
	var_222_bool = var_219_bool; // 0x3cb Push
	if(var_222_bool == 0) goto Label_979; // 0x3cc JumpB
	lshGetAnimTimes(var_215_string, var_220_float, var_221_float); // 0x3cd Func
	var_223_bool = 0; // 0x3cf PushB
	lshPlayAnimation(var_220_float, var_221_float, var_223_bool); // 0x3d0 Func
	goto Label_983; // 0x3d2 Jump
	
Label_983:
	return 6; // 0x3d7 Return
	
Label_979:
	var_224_string = "Can't find lsh animation : "; // 0x3d3 PushS
	var_225_int = var_224_string + var_215_string; // 0x3d4 Add
	Trace(var_225_int); // 0x3d5 Func
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_139; // 0x56 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x57 PushV
	var_182_object = var_1_object; // 0x58 MovT
	func_1131(var_182_object); // 0x59 NEW_2
	if(var_181_bool == 0) goto Label_112; // 0x5b JumpB
	var_189_string = ""; // 0x5c PushV
	var_189_string = "Neutral"; // 0x5d MovS
	func_169(var_175_object, var_189_string); // 0x5e NEW_2
	var_206_int = 519294; // 0x60 PushI
	SetMessage(var_206_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_207_int = 519295; // 0x65 PushI
	var_208_int = 20450; // 0x66 PushI
	var_209_int = 20449; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	var_210_int = 519300; // 0x6a PushI
	var_211_int = 20455; // 0x6b PushI
	var_212_int = 20454; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	goto Label_139; // 0x6f Jump
	
Label_139:
	var_213_bool = 0; // 0x8b PushV
	func_1064(var_213_bool); // 0x8c NEW_2
	if(var_213_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_214_string = var_3_string; // 0x91 PushT
	if(var_214_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_215_string = ""; // 0x94 PushV
	var_215_string = var_2_object; // 0x95 MovT
	func_968(var_215_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_226_string = "all"; // 0x9a PushS
	var_227_string = "idle"; // 0x9b PushS
	PlayAnimation(var_226_string, var_227_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_228_string = var_3_string; // 0xa0 PushT
	if(var_228_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_229_string = "all"; // 0xa3 PushS
	var_230_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_229_string, var_230_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
	
Label_112:
	var_231_string = ""; // 0x70 PushV
	var_231_string = "Neutral"; // 0x71 MovS
	func_169(var_175_object, var_231_string); // 0x72 NEW_2
	var_232_int = 519643; // 0x74 PushI
	SetMessage(var_232_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_233_bool = 0; var_234_object = Obj(); // 0x79 PushV
	var_234_object = var_1_object; // 0x7a MovT
	func_1119(var_234_object); // 0x7b NEW_2
	if(var_233_bool == 0) goto Label_131; // 0x7d JumpB
	var_239_int = 519644; // 0x7e PushI
	var_240_int = 20823; // 0x7f PushI
	var_241_int = 20821; // 0x80 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x81 TObjFunc
	
Label_131:
	var_242_int = 519645; // 0x83 PushI
	var_243_int = -1; // 0x84 PushI
	var_244_int = 20822; // 0x85 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
}


func_984(var_193_string, var_194_bool)
{
	var_197_bool = 0; var_198_float = 0; var_199_float = 0; var_200_bool = 0; var_201_float = 0; var_202_float = 0; // 0x3d8 PushV
	lshHasAnimation(var_200_bool, var_193_string); // 0x3d9 Func
	var_203_bool = var_200_bool; // 0x3db Push
	if(var_203_bool == 0) goto Label_994; // 0x3dc JumpB
	lshGetAnimTimes(var_193_string, var_201_float, var_202_float); // 0x3dd Func
	lshPlayAnimation(var_201_float, var_202_float, var_194_bool); // 0x3df Func
	goto Label_998; // 0x3e1 Jump
	
Label_998:
	return 6; // 0x3e6 Return
	
Label_994:
	var_204_string = "Can't find lsh animation : "; // 0x3e2 PushS
	var_205_int = var_204_string + var_193_string; // 0x3e3 Add
	Trace(var_205_int); // 0x3e4 Func
}


func_1113()
{
	var_63_string = "oob3Butcher1"; // 0x45a PushS
	var_64_int = 1; // 0x45b PushI
	SetVariable(var_63_string, var_64_int); // 0x45c Func
	return 0; // 0x45e Return
}


func_601(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x259 PushV
	var_0_object = 1; // 0x25a TMovB
	IsLoaded(var_10_bool); // 0x25b Func
	var_11_bool = 0; // 0x25d PushV
	var_11_bool = 0; // 0x25e MovB
	var_12_bool = var_10_bool == 0; // 0x25f Not
	if(var_12_bool == 0) goto Label_614; // 0x260 JumpB
	var_13_bool = 0; // 0x261 PushV
	func_650(var_13_bool); // 0x262 NEW_2
	if(var_13_bool == 0) goto Label_614; // 0x264 JumpB
	var_11_bool = 1; // 0x265 MovB
	
Label_614:
	if(var_11_bool == 0) goto Label_620; // 0x266 JumpB
	var_14_object = Obj(); // 0x267 PushV
	func_1021(var_14_object); // 0x268 NEW_2
	RemoveActor(var_14_object); // 0x26a Func
	
Label_620:
	return 2; // 0x26c Return
}


func_731(var_56_bool)
{
	var_56_bool = 1; // 0x2db MovB
	return 0; // 0x2dc Return
}


func_733()
{
	StopAnimation(); // 0x2dd Func
	StopGroup0(); // 0x2df Func
	return 0; // 0x2e1 Return
}


func_1119(var_233_bool)
{
	var_235_int = 0; var_236_string = ""; // 0x460 PushV
	var_236_string = "oob3Butcher1"; // 0x461 MovS
	func_1037(var_235_int, var_236_string); // 0x462 NEW_2
	var_237_int = 0; // 0x464 PushI
	var_238_bool = var_235_int == var_237_int; // 0x465 Eq
	if(var_238_bool == 0) goto Label_1129; // 0x466 JumpB
	var_233_bool = 1; // 0x467 MovB
	return 0; // 0x468 Return
	
Label_1129:
	var_233_bool = 0; // 0x469 MovB
	return 0; // 0x46a Return
}


func_738(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2e2 PushV
	IsLoaded(var_10_bool); // 0x2e3 Func
	var_8_bool = var_10_bool; // 0x2e5 Mov
	return 2; // 0x2e6 Return
}


func_743(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x2e7 PushV
	GetPosition(var_31_cvector); // 0x2e8 ObjFunc
	GetEyesHeight(var_30_float); // 0x2ea ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2ec PushE
	var_39_float = var_39_float + var_30_float; // 0x2ed Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2ee PopE
	GetPosition(var_32_cvector); // 0x2ef Func
	GetEyesHeight(var_30_float); // 0x2f1 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2f3 PushE
	var_40_float = var_40_float + var_30_float; // 0x2f4 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2f5 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x2f6 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x2f7 PushE
	var_41_float = 0; // 0x2f8 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x2f9 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x2fa Or
	var_43_float = sqrt(var_42_int); // 0x2fb Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x2fc Div2
	var_34_cvector = -var_33_cvector; // 0x2fd Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x2fe Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x2ff PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x300 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x301 Xor2
	func_1027(var_45_cvector, var_46_cvector); // 0x302 NEW_2
	var_53_int = 25; // 0x304 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x305 Mult
	var_55_int = var_44_float + var_54_float; // 0x306 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x307 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x308 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x309 Add2
	IsOverrideActive(var_37_bool); // 0x30a Func
	var_57_bool = var_37_bool; // 0x30c Push
	if(var_57_bool == 0) goto Label_784; // 0x30d JumpB
	var_18_bool = 0; // 0x30e MovB
	return 18; // 0x30f Return
	
Label_784:
	StopWorld(); // 0x310 Func
	var_58_bool = 1; // 0x312 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x313 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x315 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x316 PushE
	Rotate(var_59_float, var_60_float); // 0x317 Func
	var_61_bool = 0; // 0x319 PushV
	func_1064(var_61_bool); // 0x31a NEW_2
	if(var_61_bool == 0) goto Label_798; // 0x31c JumpB
	goto Label_806; // 0x31d Jump
	
Label_806:
	CameraWaitForPlayFinish(); // 0x326 Func
	ResumeWorld(); // 0x328 Func
	var_18_bool = 1; // 0x32a MovB
	return 18; // 0x32b Return
	
Label_798:
	var_62_string = "head"; // 0x31e PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x31f Func
	var_63_bool = var_38_bool; // 0x321 Push
	if(var_63_bool == 0) goto Label_806; // 0x322 JumpB
	var_64_string = "head"; // 0x323 PushS
	LookAsyncCamera(var_64_string); // 0x324 Func
}


func_999(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x3e7 PushV
	var_117_bool = 0; // 0x3e8 PushV
	func_1064(var_117_bool); // 0x3e9 NEW_2
	if(var_117_bool == 0) goto Label_1012; // 0x3eb JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x3ec Func
	var_118_bool = var_116_bool; // 0x3ee Push
	if(var_118_bool == 0) goto Label_1012; // 0x3ef JumpB
	lshPlaySpeech(var_114_string); // 0x3f0 Func
	var_113_bool = 1; // 0x3f2 MovB
	return 2; // 0x3f3 Return
	
Label_1012:
	var_113_bool = 0; // 0x3f4 MovB
	return 2; // 0x3f5 Return
}


func_1131(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x46c PushV
	var_184_string = "b3q01"; // 0x46d MovS
	func_1037(var_183_int, var_184_string); // 0x46e NEW_2
	var_187_int = 2; // 0x470 PushI
	var_188_bool = var_183_int == var_187_int; // 0x471 Eq
	if(var_188_bool == 0) goto Label_1141; // 0x472 JumpB
	var_181_bool = 1; // 0x473 MovB
	return 0; // 0x474 Return
	
Label_1141:
	var_181_bool = 0; // 0x475 MovB
	return 0; // 0x476 Return
}


func_1014()
{
	var_9_bool = 0; // 0x3f6 PushV
	func_1064(var_9_bool); // 0x3f7 NEW_2
	if(var_9_bool == 0) goto Label_1020; // 0x3f9 JumpB
	lshStopSpeech(); // 0x3fa Func
	
Label_1020:
	return 0; // 0x3fc Return
}


func_1143()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x477 PushV
	var_34_int = 224; // 0x478 PushI
	var_35_int = 1; // 0x479 PushI
	var_36_int = 519642; // 0x47a PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x47b Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x47d PushV
	var_38_object = var_33_object; // 0x47e Mov
	var_39_int = 221; // 0x47f MovI
	func_1169(var_37_bool, var_38_object, var_39_int); // 0x480 NEW_2
	return 2; // 0x482 Return
}


func_888(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x378 PushV
	var_97_string = "c"; // 0x379 MovS
	var_98_int = 0; // 0x37a MovI
	
Label_891:
	var_102_int = 1; // 0x37b PushI
	if(var_102_int == 0) goto Label_904; // 0x37c JumpB
	var_103_int = 1; // 0x37d PushI
	var_104_int = var_98_int + var_103_int; // 0x37e Add
	var_105_int = var_97_string + var_104_int; // 0x37f Add
	HasProperty(var_105_int, var_99_bool); // 0x380 ObjFunc
	var_106_bool = var_99_bool == 0; // 0x382 Not
	if(var_106_bool == 0) goto Label_901; // 0x383 JumpB
	goto Label_904; // 0x384 Jump
	
Label_904:
	var_107_bool = var_98_int == 0; // 0x388 Not
	if(var_107_bool == 0) goto Label_908; // 0x389 JumpB
	var_90_bool = 0; // 0x38a MovB
	return 10; // 0x38b Return
	
Label_908:
	var_100_int = 0; // 0x38c MovI
	var_108_int = 1; // 0x38d PushI
	var_109_bool = var_98_int > var_108_int; // 0x38e GT
	if(var_109_bool == 0) goto Label_914; // 0x38f JumpB
	irand(var_100_int, var_98_int); // 0x390 Func
	
Label_914:
	var_110_int = 1; // 0x392 PushI
	var_111_int = var_100_int + var_110_int; // 0x393 Add
	var_112_int = var_97_string + var_111_int; // 0x394 Add
	GetProperty(var_112_int, var_101_string); // 0x395 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x397 PushV
	var_114_string = var_101_string; // 0x398 Mov
	func_999(var_113_bool, var_114_string); // 0x399 NEW_2
	var_90_bool = var_113_bool; // 0x39a Mov
	return 10; // 0x39c Return
	
Label_901:
	var_119_int = 1; // 0x385 PushI
	var_98_int = var_98_int + var_119_int; // 0x386 Add2
	goto Label_891; // 0x387 Jump
}


func_1021(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3fd PushV
	self(var_11_object); // 0x3fe Func
	var_9_object = var_11_object; // 0x400 Mov
	return 2; // 0x401 Return
}


