task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xee PushI
	if(var_7_int == 0) goto Label_611; // 0xef JumpB
	func_952(); // 0xf1 NEW_2
	var_9_int = 23190; // 0xf3 PushI
	var_10_bool = var_6_int == var_9_int; // 0xf4 Eq
	if(var_10_bool == 0) goto Label_261; // 0xf5 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xf6 PushV
	var_11_object = var_1_object; // 0xf7 MovT
	var_12_object = var_0_object; // 0xf8 MovT
	func_1032(); // 0xf9 NEW_2
	var_25_object = Obj(); var_26_object = Obj(); // 0xfb PushV
	var_25_object = var_1_object; // 0xfc MovT
	var_26_object = var_0_object; // 0xfd MovT
	func_1057(); // 0xfe NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0x100 PushV
	var_35_object = var_1_object; // 0x101 MovT
	var_36_object = var_0_object; // 0x102 MovT
	func_1023(); // 0x103 NEW_2
	
Label_261:
	var_62_int = 23187; // 0x105 PushI
	var_63_bool = var_6_int == var_62_int; // 0x106 Eq
	if(var_63_bool == 0) goto Label_279; // 0x107 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x108 PushV
	var_64_object = var_1_object; // 0x109 MovT
	var_65_object = var_0_object; // 0x10a MovT
	func_1032(); // 0x10b NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x10d PushV
	var_66_object = var_1_object; // 0x10e MovT
	var_67_object = var_0_object; // 0x10f MovT
	func_1057(); // 0x110 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0x112 PushV
	var_68_object = var_1_object; // 0x113 MovT
	var_69_object = var_0_object; // 0x114 MovT
	func_1023(); // 0x115 NEW_2
	
Label_279:
	var_70_int = 23182; // 0x117 PushI
	var_71_bool = var_5_int == var_70_int; // 0x118 Eq
	if(var_71_bool == 0) goto Label_378; // 0x119 JumpB
	var_72_bool = 0; // 0x11a PushV
	var_72_bool = 0; // 0x11b MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x11c PushV
	var_74_object = var_1_object; // 0x11d MovT
	func_1068(var_74_object); // 0x11e NEW_2
	var_81_bool = var_73_bool == 0; // 0x120 Not
	if(var_81_bool == 0) goto Label_296; // 0x121 JumpB
	var_82_bool = 0; var_83_object = Obj(); // 0x122 PushV
	var_83_object = var_1_object; // 0x123 MovT
	func_1080(var_83_object); // 0x124 NEW_2
	if(var_82_bool == 0) goto Label_296; // 0x126 JumpB
	var_72_bool = 1; // 0x127 MovB
	
Label_296:
	if(var_72_bool == 0) goto Label_317; // 0x128 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x129 PushV
	var_88_object = var_1_object; // 0x12a MovT
	var_89_object = var_0_object; // 0x12b MovT
	func_1051(); // 0x12c NEW_2
	var_92_string = ""; // 0x12e PushV
	var_92_string = "Tiredness"; // 0x12f MovS
	func_215(var_6_int, var_92_string); // 0x130 NEW_2
	var_109_int = 522012; // 0x132 PushI
	SetMessage(var_109_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_110_int = 523423; // 0x137 PushI
	var_111_int = 24645; // 0x138 PushI
	var_112_int = 24644; // 0x139 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_113_bool = 0; var_114_object = Obj(); // 0x13d PushV
	var_114_object = var_1_object; // 0x13e MovT
	func_1068(var_114_object); // 0x13f NEW_2
	var_115_bool = var_113_bool == 0; // 0x141 Not
	if(var_115_bool == 0) goto Label_343; // 0x142 JumpB
	var_116_string = ""; // 0x143 PushV
	var_116_string = "Neutral"; // 0x144 MovS
	func_215(var_6_int, var_116_string); // 0x145 NEW_2
	var_117_int = 522016; // 0x147 PushI
	SetMessage(var_117_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_118_int = 522017; // 0x14c PushI
	var_119_int = -1; // 0x14d PushI
	var_120_int = 23187; // 0x14e PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x14f TObjFunc
	var_121_int = 522018; // 0x151 PushI
	var_122_int = -1; // 0x152 PushI
	var_123_int = 23188; // 0x153 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_124_string = ""; // 0x157 PushV
	var_124_string = "Neutral"; // 0x158 MovS
	func_215(var_6_int, var_124_string); // 0x159 NEW_2
	var_125_int = 522014; // 0x15b PushI
	SetMessage(var_125_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_126_int = 523455; // 0x160 PushI
	var_127_int = -1; // 0x161 PushI
	var_128_int = 24681; // 0x162 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x163 TObjFunc
	var_129_bool = 0; var_130_object = Obj(); // 0x165 PushV
	var_130_object = var_1_object; // 0x166 MovT
	func_1092(var_130_object); // 0x167 NEW_2
	if(var_129_bool == 0) goto Label_367; // 0x169 JumpB
	var_135_int = 522015; // 0x16a PushI
	var_136_int = -1; // 0x16b PushI
	var_137_int = 23185; // 0x16c PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x16d TObjFunc
	
Label_367:
	var_138_bool = 0; var_139_object = Obj(); // 0x16f PushV
	var_139_object = var_1_object; // 0x170 MovT
	func_1092(var_139_object); // 0x171 NEW_2
	if(var_138_bool == 0) goto Label_377; // 0x173 JumpB
	var_140_int = 523456; // 0x174 PushI
	var_141_int = -1; // 0x175 PushI
	var_142_int = 24682; // 0x176 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x177 TObjFunc
	
Label_377:
	return 0; // 0x179 Return
	
Label_378:
	var_143_int = 24645; // 0x17a PushI
	var_144_bool = var_5_int == var_143_int; // 0x17b Eq
	if(var_144_bool == 0) goto Label_401; // 0x17c JumpB
	var_145_string = ""; // 0x17d PushV
	var_145_string = "Tiredness"; // 0x17e MovS
	func_215(var_6_int, var_145_string); // 0x17f NEW_2
	var_146_int = 523424; // 0x181 PushI
	SetMessage(var_146_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_147_int = 523425; // 0x186 PushI
	var_148_int = 24647; // 0x187 PushI
	var_149_int = 24646; // 0x188 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x189 TObjFunc
	var_150_int = 523435; // 0x18b PushI
	var_151_int = 24659; // 0x18c PushI
	var_152_int = 24656; // 0x18d PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_153_int = 24669; // 0x191 PushI
	var_154_bool = var_5_int == var_153_int; // 0x192 Eq
	if(var_154_bool == 0) goto Label_404; // 0x193 JumpB
	
Label_404:
	var_155_int = 24674; // 0x194 PushI
	var_156_bool = var_5_int == var_155_int; // 0x195 Eq
	if(var_156_bool == 0) goto Label_422; // 0x196 JumpB
	var_157_string = ""; // 0x197 PushV
	var_157_string = "Tiredness"; // 0x198 MovS
	func_215(var_6_int, var_157_string); // 0x199 NEW_2
	var_158_int = 523449; // 0x19b PushI
	SetMessage(var_158_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_159_int = 523459; // 0x1a0 PushI
	var_160_int = 24686; // 0x1a1 PushI
	var_161_int = 24685; // 0x1a2 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1a3 TObjFunc
	return 0; // 0x1a5 Return
	
Label_422:
	var_162_int = 24686; // 0x1a6 PushI
	var_163_bool = var_5_int == var_162_int; // 0x1a7 Eq
	if(var_163_bool == 0) goto Label_440; // 0x1a8 JumpB
	var_164_string = ""; // 0x1a9 PushV
	var_164_string = "Tiredness"; // 0x1aa MovS
	func_215(var_6_int, var_164_string); // 0x1ab NEW_2
	var_165_int = 523460; // 0x1ad PushI
	SetMessage(var_165_int); // 0x1ae TObjFunc
	ClearReplies(); // 0x1b0 TObjFunc
	var_166_int = 523450; // 0x1b2 PushI
	var_167_int = 24663; // 0x1b3 PushI
	var_168_int = 24675; // 0x1b4 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1b5 TObjFunc
	return 0; // 0x1b7 Return
	
Label_440:
	var_169_int = 24671; // 0x1b8 PushI
	var_170_bool = var_5_int == var_169_int; // 0x1b9 Eq
	if(var_170_bool == 0) goto Label_458; // 0x1ba JumpB
	var_171_string = ""; // 0x1bb PushV
	var_171_string = "Tiredness"; // 0x1bc MovS
	func_215(var_6_int, var_171_string); // 0x1bd NEW_2
	var_172_int = 523447; // 0x1bf PushI
	SetMessage(var_172_int); // 0x1c0 TObjFunc
	ClearReplies(); // 0x1c2 TObjFunc
	var_173_int = 523457; // 0x1c4 PushI
	var_174_int = 24684; // 0x1c5 PushI
	var_175_int = 24683; // 0x1c6 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1c7 TObjFunc
	return 0; // 0x1c9 Return
	
Label_458:
	var_176_int = 24684; // 0x1ca PushI
	var_177_bool = var_5_int == var_176_int; // 0x1cb Eq
	if(var_177_bool == 0) goto Label_476; // 0x1cc JumpB
	var_178_string = ""; // 0x1cd PushV
	var_178_string = "Tiredness"; // 0x1ce MovS
	func_215(var_6_int, var_178_string); // 0x1cf NEW_2
	var_179_int = 523458; // 0x1d1 PushI
	SetMessage(var_179_int); // 0x1d2 TObjFunc
	ClearReplies(); // 0x1d4 TObjFunc
	var_180_int = 523461; // 0x1d6 PushI
	var_181_int = 24688; // 0x1d7 PushI
	var_182_int = 24687; // 0x1d8 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_183_int = 24688; // 0x1dc PushI
	var_184_bool = var_5_int == var_183_int; // 0x1dd Eq
	if(var_184_bool == 0) goto Label_494; // 0x1de JumpB
	var_185_string = ""; // 0x1df PushV
	var_185_string = "Tiredness"; // 0x1e0 MovS
	func_215(var_6_int, var_185_string); // 0x1e1 NEW_2
	var_186_int = 523462; // 0x1e3 PushI
	SetMessage(var_186_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_187_int = 523448; // 0x1e8 PushI
	var_188_int = 24663; // 0x1e9 PushI
	var_189_int = 24672; // 0x1ea PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_190_int = 24659; // 0x1ee PushI
	var_191_bool = var_5_int == var_190_int; // 0x1ef Eq
	if(var_191_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_192_string = ""; // 0x1f1 PushV
	var_192_string = "Tiredness"; // 0x1f2 MovS
	func_215(var_6_int, var_192_string); // 0x1f3 NEW_2
	var_193_int = 523438; // 0x1f5 PushI
	SetMessage(var_193_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_194_int = 523439; // 0x1fa PushI
	var_195_int = 24651; // 0x1fb PushI
	var_196_int = 24660; // 0x1fc PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1fd TObjFunc
	var_197_int = 523440; // 0x1ff PushI
	var_198_int = 24663; // 0x200 PushI
	var_199_int = 24662; // 0x201 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_200_int = 24663; // 0x205 PushI
	var_201_bool = var_5_int == var_200_int; // 0x206 Eq
	if(var_201_bool == 0) goto Label_540; // 0x207 JumpB
	var_202_string = ""; // 0x208 PushV
	var_202_string = "Tiredness"; // 0x209 MovS
	func_215(var_6_int, var_202_string); // 0x20a NEW_2
	var_203_int = 523441; // 0x20c PushI
	SetMessage(var_203_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_204_int = 523442; // 0x211 PushI
	var_205_int = 24651; // 0x212 PushI
	var_206_int = 24664; // 0x213 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x214 TObjFunc
	var_207_int = 523443; // 0x216 PushI
	var_208_int = 24651; // 0x217 PushI
	var_209_int = 24666; // 0x218 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_210_int = 24647; // 0x21c PushI
	var_211_bool = var_5_int == var_210_int; // 0x21d Eq
	if(var_211_bool == 0) goto Label_558; // 0x21e JumpB
	var_212_string = ""; // 0x21f PushV
	var_212_string = "Tiredness"; // 0x220 MovS
	func_215(var_6_int, var_212_string); // 0x221 NEW_2
	var_213_int = 523426; // 0x223 PushI
	SetMessage(var_213_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_214_int = 523427; // 0x228 PushI
	var_215_int = 24649; // 0x229 PushI
	var_216_int = 24648; // 0x22a PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x22b TObjFunc
	return 0; // 0x22d Return
	
Label_558:
	var_217_int = 24649; // 0x22e PushI
	var_218_bool = var_5_int == var_217_int; // 0x22f Eq
	if(var_218_bool == 0) goto Label_576; // 0x230 JumpB
	var_219_string = ""; // 0x231 PushV
	var_219_string = "Tiredness"; // 0x232 MovS
	func_215(var_6_int, var_219_string); // 0x233 NEW_2
	var_220_int = 523428; // 0x235 PushI
	SetMessage(var_220_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_221_int = 523429; // 0x23a PushI
	var_222_int = 24651; // 0x23b PushI
	var_223_int = 24650; // 0x23c PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x23d TObjFunc
	return 0; // 0x23f Return
	
Label_576:
	var_224_int = 24651; // 0x240 PushI
	var_225_bool = var_5_int == var_224_int; // 0x241 Eq
	if(var_225_bool == 0) goto Label_599; // 0x242 JumpB
	var_226_string = ""; // 0x243 PushV
	var_226_string = "Tiredness"; // 0x244 MovS
	func_215(var_6_int, var_226_string); // 0x245 NEW_2
	var_227_int = 523430; // 0x247 PushI
	SetMessage(var_227_int); // 0x248 TObjFunc
	ClearReplies(); // 0x24a TObjFunc
	var_228_int = 522020; // 0x24c PushI
	var_229_int = -1; // 0x24d PushI
	var_230_int = 23190; // 0x24e PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x24f TObjFunc
	var_231_int = 523434; // 0x251 PushI
	var_232_int = -1; // 0x252 PushI
	var_233_int = 24655; // 0x253 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_3_string = 1; // 0x257 TMovB
	var_234_bool = 0; // 0x258 PushV
	func_1021(var_234_bool); // 0x259 NEW_2
	if(var_234_bool == 0) goto Label_607; // 0x25b JumpB
	lshStopAnimation(); // 0x25c Func
	goto Label_609; // 0x25e Jump
	
Label_609:
	return 0; // 0x261 Return
	
Label_607:
	StopAnimation(); // 0x25f Func
	
Label_611:
	return 0; // 0x263 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x27d Func
	return 0; // 0x27f Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x280 Func
	return 0; // 0x282 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x283 PushV
	IsOverrideActive(var_7_bool); // 0x284 Func
	var_8_bool = var_7_bool == 0; // 0x286 Not
	if(var_8_bool == 0) goto Label_658; // 0x287 JumpB
	EventDisable(0); // 0x288 EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x289 PushV
	var_10_object = var_5_object; // 0x28a Mov
	func_669(var_10_object); // 0x28b NEW_2
	EventEnable(0); // 0x28d EventEnable
	var_23_object = Obj(); // 0x28e PushV
	var_23_object = var_5_object; // 0x28f Mov
	func_612(var_23_object); // 0x290 NEW_2
	
Label_658:
	return 2; // 0x292 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x26c PushV
	func_678(var_5_bool); // 0x26d NEW_2
	var_8_bool = var_5_bool == 0; // 0x26f Not
	if(var_8_bool == 0) goto Label_627; // 0x270 JumpB
	Hold(); // 0x271 Func
	
Label_627:
	var_9_string = ""; // 0x273 PushV
	var_9_string = "Neutral"; // 0x274 MovS
	func_906(var_9_string); // 0x275 NEW_2
	lshWaitForAnimEnd(); // 0x277 Func
	goto Label_627; // 0x279 Jump
}


func_768(var_95_bool, var_96_object)
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_int = 0; // 0x300 PushV
	var_104_string = "voice_common"; // 0x301 PushS
	GetVariable(var_104_string, var_102_int); // 0x302 Func
	var_105_int = var_102_int; // 0x304 Push
	if(var_105_int == 0) goto Label_806; // 0x305 JumpB
	var_106_bool = 0; var_107_object = Obj(); // 0x306 PushV
	var_107_object = var_96_object; // 0x307 Mov
	func_826(var_107_object); // 0x308 NEW_2
	var_136_bool = var_106_bool == 0; // 0x30a Not
	if(var_136_bool == 0) goto Label_788; // 0x30b JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x30c PushV
	var_138_object = var_96_object; // 0x30d Mov
	func_863(var_138_object); // 0x30e NEW_2
	var_172_bool = var_137_bool == 0; // 0x310 Not
	if(var_172_bool == 0) goto Label_788; // 0x311 JumpB
	var_95_bool = 0; // 0x312 MovB
	return 4; // 0x313 Return
	
Label_788:
	var_173_int = 2; // 0x314 PushI
	irand(var_103_int, var_173_int); // 0x315 Func
	var_174_int = var_103_int; // 0x317 Push
	if(var_174_int == 0) goto Label_801; // 0x318 JumpB
	var_175_string = "voice_common"; // 0x319 PushS
	var_176_int = 1; // 0x31a PushI
	var_177_int = var_102_int + var_176_int; // 0x31b Add
	var_178_int = 3; // 0x31c PushI
	var_179_int = var_177_int / var_178_int; // 0x31d Mod
	SetVariable(var_175_string, var_179_int); // 0x31e Func
	goto Label_805; // 0x320 Jump
	
Label_805:
	goto Label_824; // 0x325 Jump
	
Label_824:
	var_95_bool = 1; // 0x338 MovB
	return 4; // 0x339 Return
	
Label_801:
	var_180_string = "voice_common"; // 0x321 PushS
	var_181_int = 0; // 0x322 PushI
	SetVariable(var_180_string, var_181_int); // 0x323 Func
	
Label_806:
	var_182_bool = 0; var_183_object = Obj(); // 0x326 PushV
	var_183_object = var_96_object; // 0x327 Mov
	func_863(var_183_object); // 0x328 NEW_2
	var_184_bool = var_182_bool == 0; // 0x32a Not
	if(var_184_bool == 0) goto Label_820; // 0x32b JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x32c PushV
	var_186_object = var_96_object; // 0x32d Mov
	func_826(var_186_object); // 0x32e NEW_2
	var_187_bool = var_185_bool == 0; // 0x330 Not
	if(var_187_bool == 0) goto Label_820; // 0x331 JumpB
	var_95_bool = 0; // 0x332 MovB
	return 4; // 0x333 Return
	
Label_820:
	var_188_string = "voice_common"; // 0x334 PushS
	var_189_int = 1; // 0x335 PushI
	SetVariable(var_188_string, var_189_int); // 0x336 Func
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_683(var_36_object, var_37_float); // 0x5 NEW_2
	var_81_bool = var_35_bool == 0; // 0x7 Not
	if(var_81_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_82_int = 0; // 0xd PushV
	func_1015(var_82_int); // 0xe NEW_2
	SetNPCName(var_82_int); // 0x10 ObjFunc
	var_83_int = 0; // 0x12 PushV
	func_1013(var_83_int); // 0x13 NEW_2
	SetNPCDescription(var_83_int); // 0x15 ObjFunc
	var_84_string = ""; // 0x17 PushV
	func_1017(var_84_string); // 0x18 NEW_2
	SetPhoto(var_84_string); // 0x1a ObjFunc
	var_85_string = ""; // 0x1c PushV
	func_1019(var_85_string); // 0x1d NEW_2
	SetPhoto2(var_85_string); // 0x1f ObjFunc
	var_86_int = 0; // 0x21 PushV
	func_1158(var_86_int); // 0x22 NEW_2
	SetPlayerName(var_86_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_94_bool = var_32_bool; // 0x29 Push
	if(var_94_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_95_bool = 0; var_96_object = Obj(); // 0x2f PushV
	var_97_object = Obj(); // 0x30 PushV
	func_959(var_97_object); // 0x31 NEW_2
	var_96_object = var_97_object; // 0x32 Mov
	func_768(var_95_bool, var_96_object); // 0x34 NEW_2
	var_190_object = Obj(); var_191_object = Obj(); // 0x36 PushV
	var_190_object = var_25_object; // 0x37 Mov
	var_191_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_192_object, var_193_object, var_194_string, var_195_bool, var_190_object, var_191_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_286_bool = var_34_bool == 0; // 0x3f Not
	if(var_286_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_287_object = Obj(); // 0x46 PushV
	var_287_object = var_25_object; // 0x47 Mov
	func_751(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1158(var_86_int)
{
	var_87_int = 0; var_88_int = 0; // 0x486 PushV
	var_89_string = "branch"; // 0x487 PushS
	GetVariable(var_89_string, var_88_int); // 0x488 Func
	var_90_int = 0; // 0x48a PushI
	var_91_bool = var_88_int == var_90_int; // 0x48b Eq
	if(var_91_bool == 0) goto Label_1168; // 0x48c JumpB
	var_86_int = 1; // 0x48d MovI
	return 2; // 0x48e Return
	
Label_1168:
	var_92_int = 1; // 0x490 PushI
	var_93_bool = var_88_int == var_92_int; // 0x491 Eq
	if(var_93_bool == 0) goto Label_1173; // 0x492 JumpB
	var_86_int = 2; // 0x493 MovI
	return 2; // 0x494 Return
	
Label_1173:
	var_86_int = 3; // 0x495 MovI
	return 2; // 0x496 Return
}


func_1032()
{
	var_13_string = "b11q01VictimChoosed"; // 0x409 PushS
	var_14_int = 1; // 0x40a PushI
	SetVariable(var_13_string, var_14_int); // 0x40b Func
	var_15_string = "b11q01KillLara"; // 0x40d PushS
	var_16_int = 1; // 0x40e PushI
	SetVariable(var_15_string, var_16_int); // 0x40f Func
	var_17_bool = 0; var_18_string = ""; var_19_string = ""; var_20_string = ""; // 0x411 PushV
	var_18_string = "volonteers_burah"; // 0x412 MovS
	var_19_string = "disease"; // 0x413 MovS
	var_20_string = "lara"; // 0x414 MovS
	func_992(var_17_bool, var_18_string, var_19_string, var_20_string); // 0x415 NEW_2
	var_24_string = "Lara is diseased"; // 0x417 PushS
	Trace(var_24_string); // 0x418 Func
	return 0; // 0x41a Return
}


func_906(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x38a PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x38b Func
	var_16_bool = var_13_bool; // 0x38d Push
	if(var_16_bool == 0) goto Label_917; // 0x38e JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x38f Func
	var_17_bool = 0; // 0x391 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x392 Func
	goto Label_921; // 0x394 Jump
	
Label_921:
	return 6; // 0x399 Return
	
Label_917:
	var_18_string = "Can't find lsh animation : "; // 0x395 PushS
	var_19_int = var_18_string + var_9_string; // 0x396 Add
	Trace(var_19_int); // 0x397 Func
}


func_659(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x293 PushV
	GetPosition(var_18_cvector); // 0x294 Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x296 Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x297 PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x298 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x299 Func
	var_13_bool = var_20_bool; // 0x29b Mov
	return 6; // 0x29c Return
}


func_922(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x39a PushV
	lshHasAnimation(var_228_bool, var_221_string); // 0x39b Func
	var_231_bool = var_228_bool; // 0x39d Push
	if(var_231_bool == 0) goto Label_932; // 0x39e JumpB
	lshGetAnimTimes(var_221_string, var_229_float, var_230_float); // 0x39f Func
	lshPlayAnimation(var_229_float, var_230_float, var_222_bool); // 0x3a1 Func
	goto Label_936; // 0x3a3 Jump
	
Label_936:
	return 6; // 0x3a8 Return
	
Label_932:
	var_232_string = "Can't find lsh animation : "; // 0x3a4 PushS
	var_233_int = var_232_string + var_221_string; // 0x3a5 Add
	Trace(var_233_int); // 0x3a6 Func
}


func_1051()
{
	var_215_string = "oob11Lara1"; // 0x41c PushS
	var_216_int = 1; // 0x41d PushI
	SetVariable(var_215_string, var_216_int); // 0x41e Func
	return 0; // 0x420 Return
}


func_669(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x29d PushV
	GetPosition(var_12_cvector); // 0x29e ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x2a0 PushV
	var_14_cvector = var_12_cvector; // 0x2a1 Mov
	func_659(var_13_bool, var_14_cvector); // 0x2a2 NEW_2
	var_9_bool = var_13_bool; // 0x2a3 Mov
	return 2; // 0x2a5 Return
}


func_1057()
{
	var_27_string = "b11q01"; // 0x422 PushS
	var_28_int = 2; // 0x423 PushI
	SetVariable(var_27_string, var_28_int); // 0x424 Func
	var_29_bool = 0; var_30_string = ""; var_31_string = ""; // 0x426 PushV
	var_30_string = "quest_b11_01"; // 0x427 MovS
	var_31_string = "open_well_exit"; // 0x428 MovS
	func_980(var_29_bool, var_30_string, var_31_string); // 0x429 NEW_2
	return 0; // 0x42b Return
}


func_678(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x2a6 PushV
	IsLoaded(var_7_bool); // 0x2a7 Func
	var_5_bool = var_7_bool; // 0x2a9 Mov
	return 2; // 0x2aa Return
}


func_937(var_129_bool, var_130_string)
{
	var_131_bool = 0; var_132_bool = 0; // 0x3a9 PushV
	var_133_bool = 0; // 0x3aa PushV
	func_1021(var_133_bool); // 0x3ab NEW_2
	if(var_133_bool == 0) goto Label_950; // 0x3ad JumpB
	lshHasSpeech(var_132_bool, var_130_string); // 0x3ae Func
	var_134_bool = var_132_bool; // 0x3b0 Push
	if(var_134_bool == 0) goto Label_950; // 0x3b1 JumpB
	lshPlaySpeech(var_130_string); // 0x3b2 Func
	var_129_bool = 1; // 0x3b4 MovB
	return 2; // 0x3b5 Return
	
Label_950:
	var_129_bool = 0; // 0x3b6 MovB
	return 2; // 0x3b7 Return
}


func_683(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x2ab PushV
	GetPosition(var_48_cvector); // 0x2ac ObjFunc
	GetEyesHeight(var_47_float); // 0x2ae ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x2b0 PushE
	var_56_float = var_56_float + var_47_float; // 0x2b1 Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x2b2 PopE
	GetPosition(var_49_cvector); // 0x2b3 Func
	GetEyesHeight(var_47_float); // 0x2b5 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x2b7 PushE
	var_57_float = var_57_float + var_47_float; // 0x2b8 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x2b9 PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x2ba Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x2bb PushE
	var_58_float = 0; // 0x2bc MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x2bd PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x2be Or
	var_60_float = sqrt(var_59_int); // 0x2bf Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x2c0 Div2
	var_51_cvector = -var_50_cvector; // 0x2c1 Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x2c2 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x2c3 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x2c4 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x2c5 Xor2
	func_965(var_62_cvector, var_63_cvector); // 0x2c6 NEW_2
	var_70_int = 25; // 0x2c8 PushI
	var_71_float = var_62_cvector * var_70_int; // 0x2c9 Mult
	var_72_int = var_61_float + var_71_float; // 0x2ca Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x2cb PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x2cc Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x2cd Add2
	IsOverrideActive(var_54_bool); // 0x2ce Func
	var_74_bool = var_54_bool; // 0x2d0 Push
	if(var_74_bool == 0) goto Label_724; // 0x2d1 JumpB
	var_35_bool = 0; // 0x2d2 MovB
	return 18; // 0x2d3 Return
	
Label_724:
	StopWorld(); // 0x2d4 Func
	CameraTransit(var_53_cvector, var_51_cvector); // 0x2d6 Func
	var_75_float = GetByIndex(var_52_cvector, 0); // 0x2d8 PushE
	var_76_float = GetByIndex(var_52_cvector, 2); // 0x2d9 PushE
	Rotate(var_75_float, var_76_float); // 0x2da Func
	var_77_bool = 0; // 0x2dc PushV
	func_1021(var_77_bool); // 0x2dd NEW_2
	if(var_77_bool == 0) goto Label_737; // 0x2df JumpB
	goto Label_745; // 0x2e0 Jump
	
Label_745:
	CameraWaitForPlayFinish(); // 0x2e9 Func
	ResumeWorld(); // 0x2eb Func
	var_35_bool = 1; // 0x2ed MovB
	return 18; // 0x2ee Return
	
Label_737:
	var_78_string = "head"; // 0x2e1 PushS
	HasAnimationTrack(var_55_bool, var_78_string); // 0x2e2 Func
	var_79_bool = var_55_bool; // 0x2e4 Push
	if(var_79_bool == 0) goto Label_745; // 0x2e5 JumpB
	var_80_string = "head"; // 0x2e6 PushS
	LookAsyncCamera(var_80_string); // 0x2e7 Func
}


func_1068(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x42d PushV
	var_201_string = "b11q01VictimChoosed"; // 0x42e MovS
	func_975(var_200_int, var_201_string); // 0x42f NEW_2
	var_204_int = 0; // 0x431 PushI
	var_205_bool = var_200_int != var_204_int; // 0x432 Neq
	if(var_205_bool == 0) goto Label_1078; // 0x433 JumpB
	var_198_bool = 1; // 0x434 MovB
	return 0; // 0x435 Return
	
Label_1078:
	var_198_bool = 0; // 0x436 MovB
	return 0; // 0x437 Return
}


func_1080(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x439 PushV
	var_210_string = "oob11Lara1"; // 0x43a MovS
	func_975(var_209_int, var_210_string); // 0x43b NEW_2
	var_211_int = 0; // 0x43d PushI
	var_212_bool = var_209_int == var_211_int; // 0x43e Eq
	if(var_212_bool == 0) goto Label_1090; // 0x43f JumpB
	var_207_bool = 1; // 0x440 MovB
	return 0; // 0x441 Return
	
Label_1090:
	var_207_bool = 0; // 0x442 MovB
	return 0; // 0x443 Return
}


func_952()
{
	var_8_bool = 0; // 0x3b8 PushV
	func_1021(var_8_bool); // 0x3b9 NEW_2
	if(var_8_bool == 0) goto Label_958; // 0x3bb JumpB
	lshStopSpeech(); // 0x3bc Func
	
Label_958:
	return 0; // 0x3be Return
}


func_826(var_106_bool)
{
	var_108_string = ""; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_string = ""; var_113_string = ""; var_114_int = 0; var_115_bool = 0; var_116_int = 0; var_117_string = ""; // 0x33a PushV
	var_113_string = "c"; // 0x33b MovS
	var_114_int = 0; // 0x33c MovI
	
Label_829:
	var_118_int = 1; // 0x33d PushI
	if(var_118_int == 0) goto Label_842; // 0x33e JumpB
	var_119_int = 1; // 0x33f PushI
	var_120_int = var_114_int + var_119_int; // 0x340 Add
	var_121_int = var_113_string + var_120_int; // 0x341 Add
	HasProperty(var_121_int, var_115_bool); // 0x342 ObjFunc
	var_122_bool = var_115_bool == 0; // 0x344 Not
	if(var_122_bool == 0) goto Label_839; // 0x345 JumpB
	goto Label_842; // 0x346 Jump
	
Label_842:
	var_123_bool = var_114_int == 0; // 0x34a Not
	if(var_123_bool == 0) goto Label_846; // 0x34b JumpB
	var_106_bool = 0; // 0x34c MovB
	return 10; // 0x34d Return
	
Label_846:
	var_116_int = 0; // 0x34e MovI
	var_124_int = 1; // 0x34f PushI
	var_125_bool = var_114_int > var_124_int; // 0x350 GT
	if(var_125_bool == 0) goto Label_852; // 0x351 JumpB
	irand(var_116_int, var_114_int); // 0x352 Func
	
Label_852:
	var_126_int = 1; // 0x354 PushI
	var_127_int = var_116_int + var_126_int; // 0x355 Add
	var_128_int = var_113_string + var_127_int; // 0x356 Add
	GetProperty(var_128_int, var_117_string); // 0x357 ObjFunc
	var_129_bool = 0; var_130_string = ""; // 0x359 PushV
	var_130_string = var_117_string; // 0x35a Mov
	func_937(var_129_bool, var_130_string); // 0x35b NEW_2
	var_106_bool = var_129_bool; // 0x35c Mov
	return 10; // 0x35e Return
	
Label_839:
	var_135_int = 1; // 0x347 PushI
	var_114_int = var_114_int + var_135_int; // 0x348 Add2
	goto Label_829; // 0x349 Jump
}


func_959(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x3bf PushV
	self(var_99_object); // 0x3c0 Func
	var_97_object = var_99_object; // 0x3c2 Mov
	return 2; // 0x3c3 Return
}


func_1092(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x445 PushV
	var_275_string = "b11q01KillLara"; // 0x446 MovS
	func_975(var_274_int, var_275_string); // 0x447 NEW_2
	var_276_int = 0; // 0x449 PushI
	var_277_bool = var_274_int != var_276_int; // 0x44a Neq
	if(var_277_bool == 0) goto Label_1102; // 0x44b JumpB
	var_272_bool = 1; // 0x44c MovB
	return 0; // 0x44d Return
	
Label_1102:
	var_272_bool = 0; // 0x44e MovB
	return 0; // 0x44f Return
}


func_965(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x3c5 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x3c6 Or
	var_66_float = sqrt(var_67_int); // 0x3c7 Sqrt2
	var_68_float = 0.0; // 0x3c8 PushF
	var_69_bool = var_66_float < var_68_float; // 0x3c9 LT
	if(var_69_bool == 0) goto Label_973; // 0x3ca JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x3cb MovV
	return 2; // 0x3cc Return
	
Label_973:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x3cd Div2
	return 2; // 0x3ce Return
}


func_975(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x3cf PushV
	GetVariable(var_201_string, var_203_int); // 0x3d0 Func
	var_200_int = var_203_int; // 0x3d2 Mov
	return 2; // 0x3d3 Return
}


func_1104()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x450 PushV
	var_41_int = 315; // 0x451 PushI
	var_42_int = 1; // 0x452 PushI
	var_43_int = 522057; // 0x453 PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x454 Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x456 PushV
	var_45_object = var_40_object; // 0x457 Mov
	var_46_int = 313; // 0x458 MovI
	func_1130(var_44_bool, var_45_object, var_46_int); // 0x459 NEW_2
	return 2; // 0x45b Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_190_object, var_191_object)
{
	var_0_object = var_191_object; // 0x52 TMov
	var_1_object = var_190_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_196_int = 1; // 0x55 PushI
	if(var_196_int == 0) goto Label_185; // 0x56 JumpB
	var_197_bool = 0; // 0x57 PushV
	var_197_bool = 0; // 0x58 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x59 PushV
	var_199_object = var_1_object; // 0x5a MovT
	func_1068(var_199_object); // 0x5b NEW_2
	var_206_bool = var_198_bool == 0; // 0x5d Not
	if(var_206_bool == 0) goto Label_101; // 0x5e JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x5f PushV
	var_208_object = var_1_object; // 0x60 MovT
	func_1080(var_208_object); // 0x61 NEW_2
	if(var_207_bool == 0) goto Label_101; // 0x63 JumpB
	var_197_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_197_bool == 0) goto Label_122; // 0x65 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x66 PushV
	var_213_object = var_1_object; // 0x67 MovT
	var_214_object = var_0_object; // 0x68 MovT
	func_1051(); // 0x69 NEW_2
	var_217_string = ""; // 0x6b PushV
	var_217_string = "Tiredness"; // 0x6c MovS
	func_215(var_191_object, var_217_string); // 0x6d NEW_2
	var_234_int = 522012; // 0x6f PushI
	SetMessage(var_234_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_235_int = 523423; // 0x74 PushI
	var_236_int = 24645; // 0x75 PushI
	var_237_int = 24644; // 0x76 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x77 TObjFunc
	goto Label_185; // 0x79 Jump
	
Label_185:
	var_238_bool = 0; // 0xb9 PushV
	func_1021(var_238_bool); // 0xba NEW_2
	if(var_238_bool == 0) goto Label_200; // 0xbc JumpB
	
Label_189:
	lshWaitForAnimEnd(); // 0xbd Func
	var_239_string = var_3_string; // 0xbf PushT
	if(var_239_string == 0) goto Label_194; // 0xc0 JumpB
	goto Label_199; // 0xc1 Jump
	
Label_199:
	goto Label_214; // 0xc7 Jump
	
Label_214:
	return 0; // 0xd6 Return
	
Label_194:
	var_240_string = ""; // 0xc2 PushV
	var_240_string = var_2_object; // 0xc3 MovT
	func_906(var_240_string); // 0xc4 NEW_2
	goto Label_189; // 0xc6 Jump
	
Label_200:
	var_251_string = "all"; // 0xc8 PushS
	var_252_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xca Func
	
Label_204:
	WaitForAnimEnd(); // 0xcc Func
	var_253_string = var_3_string; // 0xce PushT
	if(var_253_string == 0) goto Label_209; // 0xcf JumpB
	goto Label_214; // 0xd0 Jump
	
Label_209:
	var_254_string = "all"; // 0xd1 PushS
	var_255_string = "idle"; // 0xd2 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xd3 Func
	goto Label_204; // 0xd5 Jump
	
Label_122:
	var_256_bool = 0; var_257_object = Obj(); // 0x7a PushV
	var_257_object = var_1_object; // 0x7b MovT
	func_1068(var_257_object); // 0x7c NEW_2
	var_258_bool = var_256_bool == 0; // 0x7e Not
	if(var_258_bool == 0) goto Label_148; // 0x7f JumpB
	var_259_string = ""; // 0x80 PushV
	var_259_string = "Neutral"; // 0x81 MovS
	func_215(var_191_object, var_259_string); // 0x82 NEW_2
	var_260_int = 522016; // 0x84 PushI
	SetMessage(var_260_int); // 0x85 TObjFunc
	ClearReplies(); // 0x87 TObjFunc
	var_261_int = 522017; // 0x89 PushI
	var_262_int = -1; // 0x8a PushI
	var_263_int = 23187; // 0x8b PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x8c TObjFunc
	var_264_int = 522018; // 0x8e PushI
	var_265_int = -1; // 0x8f PushI
	var_266_int = 23188; // 0x90 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x91 TObjFunc
	goto Label_185; // 0x93 Jump
	
Label_148:
	var_267_string = ""; // 0x94 PushV
	var_267_string = "Neutral"; // 0x95 MovS
	func_215(var_191_object, var_267_string); // 0x96 NEW_2
	var_268_int = 522014; // 0x98 PushI
	SetMessage(var_268_int); // 0x99 TObjFunc
	ClearReplies(); // 0x9b TObjFunc
	var_269_int = 523455; // 0x9d PushI
	var_270_int = -1; // 0x9e PushI
	var_271_int = 24681; // 0x9f PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa0 TObjFunc
	var_272_bool = 0; var_273_object = Obj(); // 0xa2 PushV
	var_273_object = var_1_object; // 0xa3 MovT
	func_1092(var_273_object); // 0xa4 NEW_2
	if(var_272_bool == 0) goto Label_172; // 0xa6 JumpB
	var_278_int = 522015; // 0xa7 PushI
	var_279_int = -1; // 0xa8 PushI
	var_280_int = 23185; // 0xa9 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xaa TObjFunc
	
Label_172:
	var_281_bool = 0; var_282_object = Obj(); // 0xac PushV
	var_282_object = var_1_object; // 0xad MovT
	func_1092(var_282_object); // 0xae NEW_2
	if(var_281_bool == 0) goto Label_182; // 0xb0 JumpB
	var_283_int = 523456; // 0xb1 PushI
	var_284_int = -1; // 0xb2 PushI
	var_285_int = 24682; // 0xb3 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xb4 TObjFunc
	
Label_182:
	goto Label_185; // 0xb6 Jump
}


func_980(var_29_bool, var_30_string, var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3d4 PushV
	FindActor(var_33_object, var_30_string); // 0x3d5 Func
	var_34_bool = var_33_object == 0; // 0x3d7 NullEq
	if(var_34_bool == 0) goto Label_987; // 0x3d8 JumpB
	var_29_bool = 0; // 0x3d9 MovB
	return 2; // 0x3da Return
	
Label_987:
	Trigger(var_33_object, var_31_string); // 0x3db Func
	var_29_bool = 1; // 0x3dd MovB
	return 2; // 0x3de Return
}


func_215(var_2_object, var_217_string)
{
	var_218_bool = 0; // 0xd8 PushV
	func_1021(var_218_bool); // 0xd9 NEW_2
	var_219_bool = var_218_bool == 0; // 0xdb Not
	if(var_219_bool == 0) goto Label_222; // 0xdc JumpB
	return 0; // 0xdd Return
	
Label_222:
	var_220_bool = var_217_string == var_2_object; // 0xde Eq
	if(var_220_bool == 0) goto Label_225; // 0xdf JumpB
	return 0; // 0xe0 Return
	
Label_225:
	var_221_string = ""; var_222_bool = 0; // 0xe1 PushV
	var_221_string = var_217_string; // 0xe2 Mov
	var_223_string = ""; // 0xe3 PushS
	var_224_bool = var_217_string == var_223_string; // 0xe4 Eq
	if(var_224_bool == 0) goto Label_232; // 0xe5 JumpB
	var_222_bool = 0; // 0xe6 MovB
	goto Label_233; // 0xe7 Jump
	
Label_233:
	func_922(var_221_string, var_222_bool); // 0xe9 NEW_2
	var_2_object = var_217_string; // 0xeb TMov
	return 0; // 0xec Return
	
Label_232:
	var_222_bool = 1; // 0xe8 MovB
}


func_1117(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x45d PushV
	GetDiaryRoot(var_55_object); // 0x45e Func
	var_56_bool = var_55_object == 0; // 0x460 Not
	if(var_56_bool == 0) goto Label_1127; // 0x461 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x462 PushS
	Trace(var_57_string); // 0x463 Func
	var_53_object = 0; // 0x465 MovB
	return 2; // 0x466 Return
	
Label_1127:
	var_53_object = var_55_object; // 0x467 Mov
	return 2; // 0x468 Return
}


func_863(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0x35f PushV
	var_149_string = "d"; // 0x360 PushS
	var_150_int = 0; // 0x361 PushV
	func_1004(var_150_int); // 0x362 NEW_2
	var_156_int = var_149_string + var_150_int; // 0x364 Add
	var_157_string = "m"; // 0x365 PushS
	var_144_string = var_156_int + var_157_string; // 0x366 Add2
	var_145_int = 0; // 0x367 MovI
	
Label_872:
	var_158_int = 1; // 0x368 PushI
	if(var_158_int == 0) goto Label_885; // 0x369 JumpB
	var_159_int = 1; // 0x36a PushI
	var_160_int = var_145_int + var_159_int; // 0x36b Add
	var_161_int = var_144_string + var_160_int; // 0x36c Add
	HasProperty(var_161_int, var_146_bool); // 0x36d ObjFunc
	var_162_bool = var_146_bool == 0; // 0x36f Not
	if(var_162_bool == 0) goto Label_882; // 0x370 JumpB
	goto Label_885; // 0x371 Jump
	
Label_885:
	var_163_bool = var_145_int == 0; // 0x375 Not
	if(var_163_bool == 0) goto Label_889; // 0x376 JumpB
	var_137_bool = 0; // 0x377 MovB
	return 10; // 0x378 Return
	
Label_889:
	var_147_int = 0; // 0x379 MovI
	var_164_int = 1; // 0x37a PushI
	var_165_bool = var_145_int > var_164_int; // 0x37b GT
	if(var_165_bool == 0) goto Label_895; // 0x37c JumpB
	irand(var_147_int, var_145_int); // 0x37d Func
	
Label_895:
	var_166_int = 1; // 0x37f PushI
	var_167_int = var_147_int + var_166_int; // 0x380 Add
	var_168_int = var_144_string + var_167_int; // 0x381 Add
	GetProperty(var_168_int, var_148_string); // 0x382 ObjFunc
	var_169_bool = 0; var_170_string = ""; // 0x384 PushV
	var_170_string = var_148_string; // 0x385 Mov
	func_937(var_169_bool, var_170_string); // 0x386 NEW_2
	var_137_bool = var_169_bool; // 0x387 Mov
	return 10; // 0x389 Return
	
Label_882:
	var_171_int = 1; // 0x372 PushI
	var_145_int = var_145_int + var_171_int; // 0x373 Add2
	goto Label_872; // 0x374 Jump
}


func_992(var_17_bool, var_18_string, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x3e0 PushV
	FindActor(var_22_object, var_18_string); // 0x3e1 Func
	var_23_bool = var_22_object == 0; // 0x3e3 NullEq
	if(var_23_bool == 0) goto Label_999; // 0x3e4 JumpB
	var_17_bool = 0; // 0x3e5 MovB
	return 2; // 0x3e6 Return
	
Label_999:
	Trigger(var_22_object, var_19_string, var_20_string); // 0x3e7 Func
	var_17_bool = 1; // 0x3e9 MovB
	return 2; // 0x3ea Return
}


func_612(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x265 PushV
	var_25_object = var_23_object; // 0x266 Mov
	TaskCall(0); // 0x267 TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x268 NEW_2
	TaskReturn(); // 0x269 TaskReturn
	return 0; // 0x26b Return
}


func_1130(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x46a PushV
	var_53_object = Obj(); // 0x46b PushV
	func_1117(var_53_object); // 0x46c NEW_2
	var_50_object = var_53_object; // 0x46d Mov
	Find(var_46_int, var_51_object); // 0x46f ObjFunc
	var_58_bool = var_51_object == 0; // 0x471 Not
	if(var_58_bool == 0) goto Label_1145; // 0x472 JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x473 PushS
	var_60_int = var_59_string + var_46_int; // 0x474 Add
	Trace(var_60_int); // 0x475 Func
	var_44_bool = 0; // 0x477 MovB
	return 6; // 0x478 Return
	
Label_1145:
	AddChild(var_45_object); // 0x479 ObjFunc
	var_61_int = 7; // 0x47b PushI
	SendWorldWndMessage(var_61_int); // 0x47c Func
	GetCategory(var_52_int); // 0x47e ObjFunc
	SetDiarySection(var_52_int); // 0x480 Func
	var_44_bool = 0; // 0x482 MovB
	return 6; // 0x483 Return
}


func_1004(var_150_int)
{
	var_151_float = 0; var_152_float = 0; // 0x3ec PushV
	GetGameTime(var_152_float); // 0x3ed Func
	var_153_int = 1; // 0x3ef PushI
	var_154_int = 0; // 0x3f0 PushV
	var_155_int = 24; // 0x3f1 PushI
	var_154_int = var_152_float / var_152_float; // 0x3f2 Div2
	var_150_int = var_153_int + var_154_int; // 0x3f3 Add2
	return 2; // 0x3f4 Return
}


func_751()
{
	var_288_bool = 0; var_289_bool = 0; // 0x2ef PushV
	CameraSwitchToNormal(); // 0x2f0 Func
	var_290_bool = 0; // 0x2f2 PushV
	func_1021(var_290_bool); // 0x2f3 NEW_2
	if(var_290_bool == 0) goto Label_759; // 0x2f5 JumpB
	goto Label_767; // 0x2f6 Jump
	
Label_767:
	return 2; // 0x2ff Return
	
Label_759:
	var_291_string = "head"; // 0x2f7 PushS
	HasAnimationTrack(var_289_bool, var_291_string); // 0x2f8 Func
	var_292_bool = var_289_bool; // 0x2fa Push
	if(var_292_bool == 0) goto Label_767; // 0x2fb JumpB
	var_293_string = "head"; // 0x2fc PushS
	UnlookAsync(var_293_string); // 0x2fd Func
}


func_1013(var_83_int)
{
	var_83_int = 515541; // 0x3f5 MovI
	return 0; // 0x3f6 Return
}


func_1015(var_82_int)
{
	var_82_int = 502866; // 0x3f7 MovI
	return 0; // 0x3f8 Return
}


func_1017(var_84_string)
{
	var_84_string = "ui/NPC_Lara.png"; // 0x3f9 MovS
	return 0; // 0x3fa Return
}


func_1019(var_85_string)
{
	var_85_string = "ui/NPC_Lara_b.png"; // 0x3fb MovS
	return 0; // 0x3fc Return
}


func_1021(var_77_bool)
{
	var_77_bool = 1; // 0x3fd MovB
	return 0; // 0x3fe Return
}


func_1023()
{
	var_37_string = "b11q01KnowWhoKilled"; // 0x400 PushS
	var_38_int = 1; // 0x401 PushI
	SetVariable(var_37_string, var_38_int); // 0x402 Func
	func_1104(); // 0x405 NEW_2
	return 0; // 0x407 Return
}


