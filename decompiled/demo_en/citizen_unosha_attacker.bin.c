task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; // 0x1b PushV
	func_4696(var_19_bool); // 0x1c NEW_2
	if(var_19_bool == 0) goto Label_34; // 0x1e JumpB
	lshStopAnimation(); // 0x1f Func
	goto Label_36; // 0x21 Jump
	
Label_36:
	StopTrade(); // 0x24 Func
	var_0_bool = 1; // 0x26 TMovB
	return 0; // 0x27 Return
	
Label_34:
	StopAnimation(); // 0x22 Func
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0x13c PushI
	if(var_20_int == 0) goto Label_1560; // 0x13d JumpB
	func_3787(); // 0x13f NEW_2
	var_22_int = 45786; // 0x141 PushI
	var_23_bool = var_18_object == var_22_int; // 0x142 Eq
	if(var_23_bool == 0) goto Label_465; // 0x143 JumpB
	var_24_bool = 0; // 0x144 PushV
	var_24_bool = 0; // 0x145 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x146 PushV
	var_26_object = var_1_object; // 0x147 MovT
	func_3925(var_26_object); // 0x148 NEW_2
	if(var_25_bool == 0) goto Label_337; // 0x14a JumpB
	var_33_bool = 0; var_34_object = Obj(); // 0x14b PushV
	var_34_object = var_1_object; // 0x14c MovT
	func_3947(var_33_bool, var_34_object); // 0x14d NEW_2
	if(var_33_bool == 0) goto Label_337; // 0x14f JumpB
	var_24_bool = 1; // 0x150 MovB
	
Label_337:
	if(var_24_bool == 0) goto Label_363; // 0x151 JumpB
	var_44_string = ""; // 0x152 PushV
	var_44_string = "Neutral"; // 0x153 MovS
	func_293(var_19_bool, var_44_string); // 0x154 NEW_2
	var_61_int = 543329; // 0x156 PushI
	SetMessage(var_61_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_62_int = 543330; // 0x15b PushI
	var_63_int = 45790; // 0x15c PushI
	var_64_int = 45787; // 0x15d PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x15e TObjFunc
	var_65_int = 543332; // 0x160 PushI
	var_66_int = 45790; // 0x161 PushI
	var_67_int = 45789; // 0x162 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x163 TObjFunc
	var_68_int = 543331; // 0x165 PushI
	var_69_int = -1; // 0x166 PushI
	var_70_int = 45788; // 0x167 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_71_bool = 0; // 0x16b PushV
	var_71_bool = 0; // 0x16c MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x16d PushV
	var_73_object = var_1_object; // 0x16e MovT
	func_3925(var_73_object); // 0x16f NEW_2
	if(var_72_bool == 0) goto Label_377; // 0x171 JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0x172 PushV
	var_75_object = var_1_object; // 0x173 MovT
	func_3947(var_74_bool, var_75_object); // 0x174 NEW_2
	var_76_bool = var_74_bool == 0; // 0x176 Not
	if(var_76_bool == 0) goto Label_377; // 0x177 JumpB
	var_71_bool = 1; // 0x178 MovB
	
Label_377:
	if(var_71_bool == 0) goto Label_393; // 0x179 JumpB
	var_77_string = ""; // 0x17a PushV
	var_77_string = "Neutral"; // 0x17b MovS
	func_293(var_19_bool, var_77_string); // 0x17c NEW_2
	var_78_int = 543328; // 0x17e PushI
	SetMessage(var_78_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_79_int = 543336; // 0x183 PushI
	var_80_int = -1; // 0x184 PushI
	var_81_int = 45794; // 0x185 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_82_string = ""; // 0x189 PushV
	var_82_string = "Neutral"; // 0x18a MovS
	func_293(var_19_bool, var_82_string); // 0x18b NEW_2
	var_83_int = 537969; // 0x18d PushI
	SetMessage(var_83_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_84_bool = 0; // 0x192 PushV
	var_84_bool = 0; // 0x193 MovB
	var_85_bool = 0; var_86_object = Obj(); // 0x194 PushV
	var_86_object = var_1_object; // 0x195 MovT
	func_3937(var_85_bool, var_86_object); // 0x196 NEW_2
	if(var_85_bool == 0) goto Label_415; // 0x198 JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x199 PushV
	var_92_object = var_1_object; // 0x19a MovT
	func_3913(var_92_object); // 0x19b NEW_2
	if(var_91_bool == 0) goto Label_415; // 0x19d JumpB
	var_84_bool = 1; // 0x19e MovB
	
Label_415:
	if(var_84_bool == 0) goto Label_421; // 0x19f JumpB
	var_97_int = 537970; // 0x1a0 PushI
	var_98_int = 39833; // 0x1a1 PushI
	var_99_int = 39832; // 0x1a2 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1a3 TObjFunc
	
Label_421:
	var_100_bool = 0; // 0x1a5 PushV
	var_100_bool = 0; // 0x1a6 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x1a7 PushV
	var_102_object = var_1_object; // 0x1a8 MovT
	func_3937(var_101_bool, var_102_object); // 0x1a9 NEW_2
	if(var_101_bool == 0) goto Label_434; // 0x1ab JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x1ac PushV
	var_104_object = var_1_object; // 0x1ad MovT
	func_3913(var_104_object); // 0x1ae NEW_2
	if(var_103_bool == 0) goto Label_434; // 0x1b0 JumpB
	var_100_bool = 1; // 0x1b1 MovB
	
Label_434:
	if(var_100_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_105_int = 537995; // 0x1b3 PushI
	var_106_int = 39861; // 0x1b4 PushI
	var_107_int = 39860; // 0x1b5 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x1b6 TObjFunc
	
Label_440:
	var_108_bool = 0; // 0x1b8 PushV
	var_108_bool = 0; // 0x1b9 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x1ba PushV
	var_110_object = var_1_object; // 0x1bb MovT
	func_3937(var_109_bool, var_110_object); // 0x1bc NEW_2
	if(var_109_bool == 0) goto Label_453; // 0x1be JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x1bf PushV
	var_112_object = var_1_object; // 0x1c0 MovT
	func_3913(var_112_object); // 0x1c1 NEW_2
	if(var_111_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_108_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_108_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_113_int = 538003; // 0x1c6 PushI
	var_114_int = 39869; // 0x1c7 PushI
	var_115_int = 39868; // 0x1c8 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x1c9 TObjFunc
	
Label_459:
	var_116_int = 538126; // 0x1cb PushI
	var_117_int = -1; // 0x1cc PushI
	var_118_int = 39997; // 0x1cd PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_119_int = 39980; // 0x1d1 PushI
	var_120_bool = var_18_object == var_119_int; // 0x1d2 Eq
	if(var_120_bool == 0) goto Label_468; // 0x1d3 JumpB
	
Label_468:
	var_121_int = 39982; // 0x1d4 PushI
	var_122_bool = var_18_object == var_121_int; // 0x1d5 Eq
	if(var_122_bool == 0) goto Label_491; // 0x1d6 JumpB
	var_123_string = ""; // 0x1d7 PushV
	var_123_string = "Neutral"; // 0x1d8 MovS
	func_293(var_19_bool, var_123_string); // 0x1d9 NEW_2
	var_124_int = 538113; // 0x1db PushI
	SetMessage(var_124_int); // 0x1dc TObjFunc
	ClearReplies(); // 0x1de TObjFunc
	var_125_int = 538114; // 0x1e0 PushI
	var_126_int = 39984; // 0x1e1 PushI
	var_127_int = 39983; // 0x1e2 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x1e3 TObjFunc
	var_128_int = 538118; // 0x1e5 PushI
	var_129_int = 39989; // 0x1e6 PushI
	var_130_int = 39988; // 0x1e7 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_131_int = 39989; // 0x1eb PushI
	var_132_bool = var_18_object == var_131_int; // 0x1ec Eq
	if(var_132_bool == 0) goto Label_509; // 0x1ed JumpB
	var_133_string = ""; // 0x1ee PushV
	var_133_string = "Neutral"; // 0x1ef MovS
	func_293(var_19_bool, var_133_string); // 0x1f0 NEW_2
	var_134_int = 538119; // 0x1f2 PushI
	SetMessage(var_134_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_135_int = 538120; // 0x1f7 PushI
	var_136_int = 39991; // 0x1f8 PushI
	var_137_int = 39990; // 0x1f9 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_138_int = 39991; // 0x1fd PushI
	var_139_bool = var_18_object == var_138_int; // 0x1fe Eq
	if(var_139_bool == 0) goto Label_532; // 0x1ff JumpB
	var_140_string = ""; // 0x200 PushV
	var_140_string = "Neutral"; // 0x201 MovS
	func_293(var_19_bool, var_140_string); // 0x202 NEW_2
	var_141_int = 538121; // 0x204 PushI
	SetMessage(var_141_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_142_int = 538122; // 0x209 PushI
	var_143_int = -1; // 0x20a PushI
	var_144_int = 39992; // 0x20b PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x20c TObjFunc
	var_145_int = 538123; // 0x20e PushI
	var_146_int = -1; // 0x20f PushI
	var_147_int = 39993; // 0x210 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x211 TObjFunc
	return 0; // 0x213 Return
	
Label_532:
	var_148_int = 39984; // 0x214 PushI
	var_149_bool = var_18_object == var_148_int; // 0x215 Eq
	if(var_149_bool == 0) goto Label_555; // 0x216 JumpB
	var_150_string = ""; // 0x217 PushV
	var_150_string = "Neutral"; // 0x218 MovS
	func_293(var_19_bool, var_150_string); // 0x219 NEW_2
	var_151_int = 538115; // 0x21b PushI
	SetMessage(var_151_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_152_int = 538116; // 0x220 PushI
	var_153_int = -1; // 0x221 PushI
	var_154_int = 39985; // 0x222 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x223 TObjFunc
	var_155_int = 538117; // 0x225 PushI
	var_156_int = 39991; // 0x226 PushI
	var_157_int = 39986; // 0x227 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_158_int = 39952; // 0x22b PushI
	var_159_bool = var_18_object == var_158_int; // 0x22c Eq
	if(var_159_bool == 0) goto Label_558; // 0x22d JumpB
	
Label_558:
	var_160_int = 39972; // 0x22e PushI
	var_161_bool = var_18_object == var_160_int; // 0x22f Eq
	if(var_161_bool == 0) goto Label_581; // 0x230 JumpB
	var_162_string = ""; // 0x231 PushV
	var_162_string = "Neutral"; // 0x232 MovS
	func_293(var_19_bool, var_162_string); // 0x233 NEW_2
	var_163_int = 538104; // 0x235 PushI
	SetMessage(var_163_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_164_int = 538105; // 0x23a PushI
	var_165_int = 39974; // 0x23b PushI
	var_166_int = 39973; // 0x23c PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x23d TObjFunc
	var_167_int = 538108; // 0x23f PushI
	var_168_int = -1; // 0x240 PushI
	var_169_int = 39977; // 0x241 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_170_int = 39974; // 0x245 PushI
	var_171_bool = var_18_object == var_170_int; // 0x246 Eq
	if(var_171_bool == 0) goto Label_599; // 0x247 JumpB
	var_172_string = ""; // 0x248 PushV
	var_172_string = "Neutral"; // 0x249 MovS
	func_293(var_19_bool, var_172_string); // 0x24a NEW_2
	var_173_int = 538106; // 0x24c PushI
	SetMessage(var_173_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_174_int = 538107; // 0x251 PushI
	var_175_int = 39963; // 0x252 PushI
	var_176_int = 39975; // 0x253 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_177_int = 39963; // 0x257 PushI
	var_178_bool = var_18_object == var_177_int; // 0x258 Eq
	if(var_178_bool == 0) goto Label_622; // 0x259 JumpB
	var_179_string = ""; // 0x25a PushV
	var_179_string = "Neutral"; // 0x25b MovS
	func_293(var_19_bool, var_179_string); // 0x25c NEW_2
	var_180_int = 538095; // 0x25e PushI
	SetMessage(var_180_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_181_int = 538096; // 0x263 PushI
	var_182_int = 39965; // 0x264 PushI
	var_183_int = 39964; // 0x265 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x266 TObjFunc
	var_184_int = 538100; // 0x268 PushI
	var_185_int = 39969; // 0x269 PushI
	var_186_int = 39968; // 0x26a PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_187_int = 39969; // 0x26e PushI
	var_188_bool = var_18_object == var_187_int; // 0x26f Eq
	if(var_188_bool == 0) goto Label_640; // 0x270 JumpB
	var_189_string = ""; // 0x271 PushV
	var_189_string = "Neutral"; // 0x272 MovS
	func_293(var_19_bool, var_189_string); // 0x273 NEW_2
	var_190_int = 538101; // 0x275 PushI
	SetMessage(var_190_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_191_int = 538102; // 0x27a PushI
	var_192_int = -1; // 0x27b PushI
	var_193_int = 39970; // 0x27c PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x27d TObjFunc
	return 0; // 0x27f Return
	
Label_640:
	var_194_int = 39965; // 0x280 PushI
	var_195_bool = var_18_object == var_194_int; // 0x281 Eq
	if(var_195_bool == 0) goto Label_663; // 0x282 JumpB
	var_196_string = ""; // 0x283 PushV
	var_196_string = "Neutral"; // 0x284 MovS
	func_293(var_19_bool, var_196_string); // 0x285 NEW_2
	var_197_int = 538097; // 0x287 PushI
	SetMessage(var_197_int); // 0x288 TObjFunc
	ClearReplies(); // 0x28a TObjFunc
	var_198_int = 538098; // 0x28c PushI
	var_199_int = -1; // 0x28d PushI
	var_200_int = 39966; // 0x28e PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x28f TObjFunc
	var_201_int = 538099; // 0x291 PushI
	var_202_int = -1; // 0x292 PushI
	var_203_int = 39967; // 0x293 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_204_int = 39954; // 0x297 PushI
	var_205_bool = var_18_object == var_204_int; // 0x298 Eq
	if(var_205_bool == 0) goto Label_686; // 0x299 JumpB
	var_206_string = ""; // 0x29a PushV
	var_206_string = "Neutral"; // 0x29b MovS
	func_293(var_19_bool, var_206_string); // 0x29c NEW_2
	var_207_int = 538086; // 0x29e PushI
	SetMessage(var_207_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_208_int = 538087; // 0x2a3 PushI
	var_209_int = 39956; // 0x2a4 PushI
	var_210_int = 39955; // 0x2a5 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x2a6 TObjFunc
	var_211_int = 538093; // 0x2a8 PushI
	var_212_int = -1; // 0x2a9 PushI
	var_213_int = 39961; // 0x2aa PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x2ab TObjFunc
	return 0; // 0x2ad Return
	
Label_686:
	var_214_int = 39956; // 0x2ae PushI
	var_215_bool = var_18_object == var_214_int; // 0x2af Eq
	if(var_215_bool == 0) goto Label_704; // 0x2b0 JumpB
	var_216_string = ""; // 0x2b1 PushV
	var_216_string = "Neutral"; // 0x2b2 MovS
	func_293(var_19_bool, var_216_string); // 0x2b3 NEW_2
	var_217_int = 538088; // 0x2b5 PushI
	SetMessage(var_217_int); // 0x2b6 TObjFunc
	ClearReplies(); // 0x2b8 TObjFunc
	var_218_int = 538089; // 0x2ba PushI
	var_219_int = 39958; // 0x2bb PushI
	var_220_int = 39957; // 0x2bc PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_221_int = 39958; // 0x2c0 PushI
	var_222_bool = var_18_object == var_221_int; // 0x2c1 Eq
	if(var_222_bool == 0) goto Label_727; // 0x2c2 JumpB
	var_223_string = ""; // 0x2c3 PushV
	var_223_string = "Neutral"; // 0x2c4 MovS
	func_293(var_19_bool, var_223_string); // 0x2c5 NEW_2
	var_224_int = 538090; // 0x2c7 PushI
	SetMessage(var_224_int); // 0x2c8 TObjFunc
	ClearReplies(); // 0x2ca TObjFunc
	var_225_int = 538091; // 0x2cc PushI
	var_226_int = -1; // 0x2cd PushI
	var_227_int = 39959; // 0x2ce PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x2cf TObjFunc
	var_228_int = 538092; // 0x2d1 PushI
	var_229_int = -1; // 0x2d2 PushI
	var_230_int = 39960; // 0x2d3 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_231_int = 39911; // 0x2d7 PushI
	var_232_bool = var_18_object == var_231_int; // 0x2d8 Eq
	if(var_232_bool == 0) goto Label_730; // 0x2d9 JumpB
	
Label_730:
	var_233_int = 39932; // 0x2da PushI
	var_234_bool = var_18_object == var_233_int; // 0x2db Eq
	if(var_234_bool == 0) goto Label_748; // 0x2dc JumpB
	var_235_string = ""; // 0x2dd PushV
	var_235_string = "Neutral"; // 0x2de MovS
	func_293(var_19_bool, var_235_string); // 0x2df NEW_2
	var_236_int = 538064; // 0x2e1 PushI
	SetMessage(var_236_int); // 0x2e2 TObjFunc
	ClearReplies(); // 0x2e4 TObjFunc
	var_237_int = 538065; // 0x2e6 PushI
	var_238_int = 39934; // 0x2e7 PushI
	var_239_int = 39933; // 0x2e8 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2e9 TObjFunc
	return 0; // 0x2eb Return
	
Label_748:
	var_240_int = 39934; // 0x2ec PushI
	var_241_bool = var_18_object == var_240_int; // 0x2ed Eq
	if(var_241_bool == 0) goto Label_766; // 0x2ee JumpB
	var_242_string = ""; // 0x2ef PushV
	var_242_string = "Neutral"; // 0x2f0 MovS
	func_293(var_19_bool, var_242_string); // 0x2f1 NEW_2
	var_243_int = 538066; // 0x2f3 PushI
	SetMessage(var_243_int); // 0x2f4 TObjFunc
	ClearReplies(); // 0x2f6 TObjFunc
	var_244_int = 538067; // 0x2f8 PushI
	var_245_int = 39936; // 0x2f9 PushI
	var_246_int = 39935; // 0x2fa PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x2fb TObjFunc
	return 0; // 0x2fd Return
	
Label_766:
	var_247_int = 39936; // 0x2fe PushI
	var_248_bool = var_18_object == var_247_int; // 0x2ff Eq
	if(var_248_bool == 0) goto Label_789; // 0x300 JumpB
	var_249_string = ""; // 0x301 PushV
	var_249_string = "Neutral"; // 0x302 MovS
	func_293(var_19_bool, var_249_string); // 0x303 NEW_2
	var_250_int = 538068; // 0x305 PushI
	SetMessage(var_250_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_251_int = 538069; // 0x30a PushI
	var_252_int = 39938; // 0x30b PushI
	var_253_int = 39937; // 0x30c PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x30d TObjFunc
	var_254_int = 538075; // 0x30f PushI
	var_255_int = 39944; // 0x310 PushI
	var_256_int = 39943; // 0x311 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x312 TObjFunc
	return 0; // 0x314 Return
	
Label_789:
	var_257_int = 39944; // 0x315 PushI
	var_258_bool = var_18_object == var_257_int; // 0x316 Eq
	if(var_258_bool == 0) goto Label_812; // 0x317 JumpB
	var_259_string = ""; // 0x318 PushV
	var_259_string = "Neutral"; // 0x319 MovS
	func_293(var_19_bool, var_259_string); // 0x31a NEW_2
	var_260_int = 538076; // 0x31c PushI
	SetMessage(var_260_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_261_int = 538077; // 0x321 PushI
	var_262_int = 39946; // 0x322 PushI
	var_263_int = 39945; // 0x323 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x324 TObjFunc
	var_264_int = 538082; // 0x326 PushI
	var_265_int = -1; // 0x327 PushI
	var_266_int = 39950; // 0x328 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x329 TObjFunc
	return 0; // 0x32b Return
	
Label_812:
	var_267_int = 39946; // 0x32c PushI
	var_268_bool = var_18_object == var_267_int; // 0x32d Eq
	if(var_268_bool == 0) goto Label_830; // 0x32e JumpB
	var_269_string = ""; // 0x32f PushV
	var_269_string = "Neutral"; // 0x330 MovS
	func_293(var_19_bool, var_269_string); // 0x331 NEW_2
	var_270_int = 538078; // 0x333 PushI
	SetMessage(var_270_int); // 0x334 TObjFunc
	ClearReplies(); // 0x336 TObjFunc
	var_271_int = 538079; // 0x338 PushI
	var_272_int = 39948; // 0x339 PushI
	var_273_int = 39947; // 0x33a PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x33b TObjFunc
	return 0; // 0x33d Return
	
Label_830:
	var_274_int = 39948; // 0x33e PushI
	var_275_bool = var_18_object == var_274_int; // 0x33f Eq
	if(var_275_bool == 0) goto Label_848; // 0x340 JumpB
	var_276_string = ""; // 0x341 PushV
	var_276_string = "Neutral"; // 0x342 MovS
	func_293(var_19_bool, var_276_string); // 0x343 NEW_2
	var_277_int = 538080; // 0x345 PushI
	SetMessage(var_277_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_278_int = 538081; // 0x34a PushI
	var_279_int = -1; // 0x34b PushI
	var_280_int = 39949; // 0x34c PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x34d TObjFunc
	return 0; // 0x34f Return
	
Label_848:
	var_281_int = 39938; // 0x350 PushI
	var_282_bool = var_18_object == var_281_int; // 0x351 Eq
	if(var_282_bool == 0) goto Label_871; // 0x352 JumpB
	var_283_string = ""; // 0x353 PushV
	var_283_string = "Neutral"; // 0x354 MovS
	func_293(var_19_bool, var_283_string); // 0x355 NEW_2
	var_284_int = 538070; // 0x357 PushI
	SetMessage(var_284_int); // 0x358 TObjFunc
	ClearReplies(); // 0x35a TObjFunc
	var_285_int = 538071; // 0x35c PushI
	var_286_int = 39940; // 0x35d PushI
	var_287_int = 39939; // 0x35e PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x35f TObjFunc
	var_288_int = 538074; // 0x361 PushI
	var_289_int = -1; // 0x362 PushI
	var_290_int = 39942; // 0x363 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x364 TObjFunc
	return 0; // 0x366 Return
	
Label_871:
	var_291_int = 39940; // 0x367 PushI
	var_292_bool = var_18_object == var_291_int; // 0x368 Eq
	if(var_292_bool == 0) goto Label_889; // 0x369 JumpB
	var_293_string = ""; // 0x36a PushV
	var_293_string = "Neutral"; // 0x36b MovS
	func_293(var_19_bool, var_293_string); // 0x36c NEW_2
	var_294_int = 538072; // 0x36e PushI
	SetMessage(var_294_int); // 0x36f TObjFunc
	ClearReplies(); // 0x371 TObjFunc
	var_295_int = 538073; // 0x373 PushI
	var_296_int = -1; // 0x374 PushI
	var_297_int = 39941; // 0x375 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x376 TObjFunc
	return 0; // 0x378 Return
	
Label_889:
	var_298_int = 39913; // 0x379 PushI
	var_299_bool = var_18_object == var_298_int; // 0x37a Eq
	if(var_299_bool == 0) goto Label_912; // 0x37b JumpB
	var_300_string = ""; // 0x37c PushV
	var_300_string = "Neutral"; // 0x37d MovS
	func_293(var_19_bool, var_300_string); // 0x37e NEW_2
	var_301_int = 538046; // 0x380 PushI
	SetMessage(var_301_int); // 0x381 TObjFunc
	ClearReplies(); // 0x383 TObjFunc
	var_302_int = 538047; // 0x385 PushI
	var_303_int = 39915; // 0x386 PushI
	var_304_int = 39914; // 0x387 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x388 TObjFunc
	var_305_int = 538060; // 0x38a PushI
	var_306_int = 39928; // 0x38b PushI
	var_307_int = 39927; // 0x38c PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x38d TObjFunc
	return 0; // 0x38f Return
	
Label_912:
	var_308_int = 39928; // 0x390 PushI
	var_309_bool = var_18_object == var_308_int; // 0x391 Eq
	if(var_309_bool == 0) goto Label_930; // 0x392 JumpB
	var_310_string = ""; // 0x393 PushV
	var_310_string = "Neutral"; // 0x394 MovS
	func_293(var_19_bool, var_310_string); // 0x395 NEW_2
	var_311_int = 538061; // 0x397 PushI
	SetMessage(var_311_int); // 0x398 TObjFunc
	ClearReplies(); // 0x39a TObjFunc
	var_312_int = 538062; // 0x39c PushI
	var_313_int = 39915; // 0x39d PushI
	var_314_int = 39929; // 0x39e PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x39f TObjFunc
	return 0; // 0x3a1 Return
	
Label_930:
	var_315_int = 39915; // 0x3a2 PushI
	var_316_bool = var_18_object == var_315_int; // 0x3a3 Eq
	if(var_316_bool == 0) goto Label_953; // 0x3a4 JumpB
	var_317_string = ""; // 0x3a5 PushV
	var_317_string = "Neutral"; // 0x3a6 MovS
	func_293(var_19_bool, var_317_string); // 0x3a7 NEW_2
	var_318_int = 538048; // 0x3a9 PushI
	SetMessage(var_318_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_319_int = 538049; // 0x3ae PushI
	var_320_int = 39917; // 0x3af PushI
	var_321_int = 39916; // 0x3b0 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x3b1 TObjFunc
	var_322_int = 538057; // 0x3b3 PushI
	var_323_int = 39925; // 0x3b4 PushI
	var_324_int = 39924; // 0x3b5 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x3b6 TObjFunc
	return 0; // 0x3b8 Return
	
Label_953:
	var_325_int = 39925; // 0x3b9 PushI
	var_326_bool = var_18_object == var_325_int; // 0x3ba Eq
	if(var_326_bool == 0) goto Label_971; // 0x3bb JumpB
	var_327_string = ""; // 0x3bc PushV
	var_327_string = "Neutral"; // 0x3bd MovS
	func_293(var_19_bool, var_327_string); // 0x3be NEW_2
	var_328_int = 538058; // 0x3c0 PushI
	SetMessage(var_328_int); // 0x3c1 TObjFunc
	ClearReplies(); // 0x3c3 TObjFunc
	var_329_int = 538059; // 0x3c5 PushI
	var_330_int = -1; // 0x3c6 PushI
	var_331_int = 39926; // 0x3c7 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_332_int = 39917; // 0x3cb PushI
	var_333_bool = var_18_object == var_332_int; // 0x3cc Eq
	if(var_333_bool == 0) goto Label_994; // 0x3cd JumpB
	var_334_string = ""; // 0x3ce PushV
	var_334_string = "Neutral"; // 0x3cf MovS
	func_293(var_19_bool, var_334_string); // 0x3d0 NEW_2
	var_335_int = 538050; // 0x3d2 PushI
	SetMessage(var_335_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_336_int = 538051; // 0x3d7 PushI
	var_337_int = 39919; // 0x3d8 PushI
	var_338_int = 39918; // 0x3d9 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x3da TObjFunc
	var_339_int = 538056; // 0x3dc PushI
	var_340_int = -1; // 0x3dd PushI
	var_341_int = 39923; // 0x3de PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x3df TObjFunc
	return 0; // 0x3e1 Return
	
Label_994:
	var_342_int = 39919; // 0x3e2 PushI
	var_343_bool = var_18_object == var_342_int; // 0x3e3 Eq
	if(var_343_bool == 0) goto Label_1012; // 0x3e4 JumpB
	var_344_string = ""; // 0x3e5 PushV
	var_344_string = "Neutral"; // 0x3e6 MovS
	func_293(var_19_bool, var_344_string); // 0x3e7 NEW_2
	var_345_int = 538052; // 0x3e9 PushI
	SetMessage(var_345_int); // 0x3ea TObjFunc
	ClearReplies(); // 0x3ec TObjFunc
	var_346_int = 538053; // 0x3ee PushI
	var_347_int = 39921; // 0x3ef PushI
	var_348_int = 39920; // 0x3f0 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x3f1 TObjFunc
	return 0; // 0x3f3 Return
	
Label_1012:
	var_349_int = 39921; // 0x3f4 PushI
	var_350_bool = var_18_object == var_349_int; // 0x3f5 Eq
	if(var_350_bool == 0) goto Label_1030; // 0x3f6 JumpB
	var_351_string = ""; // 0x3f7 PushV
	var_351_string = "Neutral"; // 0x3f8 MovS
	func_293(var_19_bool, var_351_string); // 0x3f9 NEW_2
	var_352_int = 538054; // 0x3fb PushI
	SetMessage(var_352_int); // 0x3fc TObjFunc
	ClearReplies(); // 0x3fe TObjFunc
	var_353_int = 538055; // 0x400 PushI
	var_354_int = -1; // 0x401 PushI
	var_355_int = 39922; // 0x402 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x403 TObjFunc
	return 0; // 0x405 Return
	
Label_1030:
	var_356_int = 39883; // 0x406 PushI
	var_357_bool = var_18_object == var_356_int; // 0x407 Eq
	if(var_357_bool == 0) goto Label_1033; // 0x408 JumpB
	
Label_1033:
	var_358_int = 39907; // 0x409 PushI
	var_359_bool = var_18_object == var_358_int; // 0x40a Eq
	if(var_359_bool == 0) goto Label_1051; // 0x40b JumpB
	var_360_string = ""; // 0x40c PushV
	var_360_string = "Neutral"; // 0x40d MovS
	func_293(var_19_bool, var_360_string); // 0x40e NEW_2
	var_361_int = 538040; // 0x410 PushI
	SetMessage(var_361_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_362_int = 538041; // 0x415 PushI
	var_363_int = -1; // 0x416 PushI
	var_364_int = 39908; // 0x417 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_365_int = 39897; // 0x41b PushI
	var_366_bool = var_18_object == var_365_int; // 0x41c Eq
	if(var_366_bool == 0) goto Label_1074; // 0x41d JumpB
	var_367_string = ""; // 0x41e PushV
	var_367_string = "Neutral"; // 0x41f MovS
	func_293(var_19_bool, var_367_string); // 0x420 NEW_2
	var_368_int = 538031; // 0x422 PushI
	SetMessage(var_368_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_369_int = 538032; // 0x427 PushI
	var_370_int = 39899; // 0x428 PushI
	var_371_int = 39898; // 0x429 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x42a TObjFunc
	var_372_int = 538038; // 0x42c PushI
	var_373_int = 39899; // 0x42d PushI
	var_374_int = 39904; // 0x42e PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_375_int = 39899; // 0x432 PushI
	var_376_bool = var_18_object == var_375_int; // 0x433 Eq
	if(var_376_bool == 0) goto Label_1097; // 0x434 JumpB
	var_377_string = ""; // 0x435 PushV
	var_377_string = "Neutral"; // 0x436 MovS
	func_293(var_19_bool, var_377_string); // 0x437 NEW_2
	var_378_int = 538033; // 0x439 PushI
	SetMessage(var_378_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_379_int = 538034; // 0x43e PushI
	var_380_int = 39901; // 0x43f PushI
	var_381_int = 39900; // 0x440 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x441 TObjFunc
	var_382_int = 538037; // 0x443 PushI
	var_383_int = -1; // 0x444 PushI
	var_384_int = 39903; // 0x445 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_385_int = 39901; // 0x449 PushI
	var_386_bool = var_18_object == var_385_int; // 0x44a Eq
	if(var_386_bool == 0) goto Label_1115; // 0x44b JumpB
	var_387_string = ""; // 0x44c PushV
	var_387_string = "Neutral"; // 0x44d MovS
	func_293(var_19_bool, var_387_string); // 0x44e NEW_2
	var_388_int = 538035; // 0x450 PushI
	SetMessage(var_388_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_389_int = 538036; // 0x455 PushI
	var_390_int = -1; // 0x456 PushI
	var_391_int = 39902; // 0x457 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_392_int = 39885; // 0x45b PushI
	var_393_bool = var_18_object == var_392_int; // 0x45c Eq
	if(var_393_bool == 0) goto Label_1138; // 0x45d JumpB
	var_394_string = ""; // 0x45e PushV
	var_394_string = "Neutral"; // 0x45f MovS
	func_293(var_19_bool, var_394_string); // 0x460 NEW_2
	var_395_int = 538020; // 0x462 PushI
	SetMessage(var_395_int); // 0x463 TObjFunc
	ClearReplies(); // 0x465 TObjFunc
	var_396_int = 538021; // 0x467 PushI
	var_397_int = 39887; // 0x468 PushI
	var_398_int = 39886; // 0x469 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x46a TObjFunc
	var_399_int = 538027; // 0x46c PushI
	var_400_int = 39894; // 0x46d PushI
	var_401_int = 39893; // 0x46e PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x46f TObjFunc
	return 0; // 0x471 Return
	
Label_1138:
	var_402_int = 39894; // 0x472 PushI
	var_403_bool = var_18_object == var_402_int; // 0x473 Eq
	if(var_403_bool == 0) goto Label_1156; // 0x474 JumpB
	var_404_string = ""; // 0x475 PushV
	var_404_string = "Neutral"; // 0x476 MovS
	func_293(var_19_bool, var_404_string); // 0x477 NEW_2
	var_405_int = 538028; // 0x479 PushI
	SetMessage(var_405_int); // 0x47a TObjFunc
	ClearReplies(); // 0x47c TObjFunc
	var_406_int = 538029; // 0x47e PushI
	var_407_int = -1; // 0x47f PushI
	var_408_int = 39895; // 0x480 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_409_int = 39887; // 0x484 PushI
	var_410_bool = var_18_object == var_409_int; // 0x485 Eq
	if(var_410_bool == 0) goto Label_1179; // 0x486 JumpB
	var_411_string = ""; // 0x487 PushV
	var_411_string = "Neutral"; // 0x488 MovS
	func_293(var_19_bool, var_411_string); // 0x489 NEW_2
	var_412_int = 538022; // 0x48b PushI
	SetMessage(var_412_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_413_int = 538023; // 0x490 PushI
	var_414_int = 39889; // 0x491 PushI
	var_415_int = 39888; // 0x492 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x493 TObjFunc
	var_416_int = 538026; // 0x495 PushI
	var_417_int = 39889; // 0x496 PushI
	var_418_int = 39891; // 0x497 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x498 TObjFunc
	return 0; // 0x49a Return
	
Label_1179:
	var_419_int = 39889; // 0x49b PushI
	var_420_bool = var_18_object == var_419_int; // 0x49c Eq
	if(var_420_bool == 0) goto Label_1197; // 0x49d JumpB
	var_421_string = ""; // 0x49e PushV
	var_421_string = "Neutral"; // 0x49f MovS
	func_293(var_19_bool, var_421_string); // 0x4a0 NEW_2
	var_422_int = 538024; // 0x4a2 PushI
	SetMessage(var_422_int); // 0x4a3 TObjFunc
	ClearReplies(); // 0x4a5 TObjFunc
	var_423_int = 538025; // 0x4a7 PushI
	var_424_int = -1; // 0x4a8 PushI
	var_425_int = 39890; // 0x4a9 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x4aa TObjFunc
	return 0; // 0x4ac Return
	
Label_1197:
	var_426_int = 39878; // 0x4ad PushI
	var_427_bool = var_18_object == var_426_int; // 0x4ae Eq
	if(var_427_bool == 0) goto Label_1200; // 0x4af JumpB
	
Label_1200:
	var_428_int = 39880; // 0x4b0 PushI
	var_429_bool = var_18_object == var_428_int; // 0x4b1 Eq
	if(var_429_bool == 0) goto Label_1218; // 0x4b2 JumpB
	var_430_string = ""; // 0x4b3 PushV
	var_430_string = "Neutral"; // 0x4b4 MovS
	func_293(var_19_bool, var_430_string); // 0x4b5 NEW_2
	var_431_int = 538015; // 0x4b7 PushI
	SetMessage(var_431_int); // 0x4b8 TObjFunc
	ClearReplies(); // 0x4ba TObjFunc
	var_432_int = 538016; // 0x4bc PushI
	var_433_int = -1; // 0x4bd PushI
	var_434_int = 39881; // 0x4be PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x4bf TObjFunc
	return 0; // 0x4c1 Return
	
Label_1218:
	var_435_int = 39869; // 0x4c2 PushI
	var_436_bool = var_18_object == var_435_int; // 0x4c3 Eq
	if(var_436_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_437_string = ""; // 0x4c5 PushV
	var_437_string = "Neutral"; // 0x4c6 MovS
	func_293(var_19_bool, var_437_string); // 0x4c7 NEW_2
	var_438_int = 538004; // 0x4c9 PushI
	SetMessage(var_438_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_439_int = 538005; // 0x4ce PushI
	var_440_int = 39871; // 0x4cf PushI
	var_441_int = 39870; // 0x4d0 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x4d1 TObjFunc
	var_442_int = 538011; // 0x4d3 PushI
	var_443_int = -1; // 0x4d4 PushI
	var_444_int = 39876; // 0x4d5 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_445_int = 39871; // 0x4d9 PushI
	var_446_bool = var_18_object == var_445_int; // 0x4da Eq
	if(var_446_bool == 0) goto Label_1259; // 0x4db JumpB
	var_447_string = ""; // 0x4dc PushV
	var_447_string = "Neutral"; // 0x4dd MovS
	func_293(var_19_bool, var_447_string); // 0x4de NEW_2
	var_448_int = 538006; // 0x4e0 PushI
	SetMessage(var_448_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_449_int = 538007; // 0x4e5 PushI
	var_450_int = 39873; // 0x4e6 PushI
	var_451_int = 39872; // 0x4e7 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x4e8 TObjFunc
	return 0; // 0x4ea Return
	
Label_1259:
	var_452_int = 39873; // 0x4eb PushI
	var_453_bool = var_18_object == var_452_int; // 0x4ec Eq
	if(var_453_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_454_string = ""; // 0x4ee PushV
	var_454_string = "Neutral"; // 0x4ef MovS
	func_293(var_19_bool, var_454_string); // 0x4f0 NEW_2
	var_455_int = 538008; // 0x4f2 PushI
	SetMessage(var_455_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_456_int = 538009; // 0x4f7 PushI
	var_457_int = -1; // 0x4f8 PushI
	var_458_int = 39874; // 0x4f9 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x4fa TObjFunc
	var_459_int = 538010; // 0x4fc PushI
	var_460_int = -1; // 0x4fd PushI
	var_461_int = 39875; // 0x4fe PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_462_int = 39861; // 0x502 PushI
	var_463_bool = var_18_object == var_462_int; // 0x503 Eq
	if(var_463_bool == 0) goto Label_1300; // 0x504 JumpB
	var_464_string = ""; // 0x505 PushV
	var_464_string = "Neutral"; // 0x506 MovS
	func_293(var_19_bool, var_464_string); // 0x507 NEW_2
	var_465_int = 537996; // 0x509 PushI
	SetMessage(var_465_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_466_int = 537997; // 0x50e PushI
	var_467_int = 39863; // 0x50f PushI
	var_468_int = 39862; // 0x510 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_469_int = 39863; // 0x514 PushI
	var_470_bool = var_18_object == var_469_int; // 0x515 Eq
	if(var_470_bool == 0) goto Label_1323; // 0x516 JumpB
	var_471_string = ""; // 0x517 PushV
	var_471_string = "Neutral"; // 0x518 MovS
	func_293(var_19_bool, var_471_string); // 0x519 NEW_2
	var_472_int = 537998; // 0x51b PushI
	SetMessage(var_472_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_473_int = 537999; // 0x520 PushI
	var_474_int = 39865; // 0x521 PushI
	var_475_int = 39864; // 0x522 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x523 TObjFunc
	var_476_int = 538002; // 0x525 PushI
	var_477_int = -1; // 0x526 PushI
	var_478_int = 39867; // 0x527 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x528 TObjFunc
	return 0; // 0x52a Return
	
Label_1323:
	var_479_int = 39865; // 0x52b PushI
	var_480_bool = var_18_object == var_479_int; // 0x52c Eq
	if(var_480_bool == 0) goto Label_1341; // 0x52d JumpB
	var_481_string = ""; // 0x52e PushV
	var_481_string = "Neutral"; // 0x52f MovS
	func_293(var_19_bool, var_481_string); // 0x530 NEW_2
	var_482_int = 538000; // 0x532 PushI
	SetMessage(var_482_int); // 0x533 TObjFunc
	ClearReplies(); // 0x535 TObjFunc
	var_483_int = 538001; // 0x537 PushI
	var_484_int = -1; // 0x538 PushI
	var_485_int = 39866; // 0x539 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x53a TObjFunc
	return 0; // 0x53c Return
	
Label_1341:
	var_486_int = 39833; // 0x53d PushI
	var_487_bool = var_18_object == var_486_int; // 0x53e Eq
	if(var_487_bool == 0) goto Label_1374; // 0x53f JumpB
	var_488_string = ""; // 0x540 PushV
	var_488_string = "Neutral"; // 0x541 MovS
	func_293(var_19_bool, var_488_string); // 0x542 NEW_2
	var_489_int = 537971; // 0x544 PushI
	SetMessage(var_489_int); // 0x545 TObjFunc
	ClearReplies(); // 0x547 TObjFunc
	var_490_int = 537972; // 0x549 PushI
	var_491_int = 39835; // 0x54a PushI
	var_492_int = 39834; // 0x54b PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x54c TObjFunc
	var_493_int = 537976; // 0x54e PushI
	var_494_int = 39840; // 0x54f PushI
	var_495_int = 39839; // 0x550 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x551 TObjFunc
	var_496_int = 537988; // 0x553 PushI
	var_497_int = 39852; // 0x554 PushI
	var_498_int = 39851; // 0x555 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x556 TObjFunc
	var_499_int = 537994; // 0x558 PushI
	var_500_int = -1; // 0x559 PushI
	var_501_int = 39859; // 0x55a PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_502_int = 39852; // 0x55e PushI
	var_503_bool = var_18_object == var_502_int; // 0x55f Eq
	if(var_503_bool == 0) goto Label_1397; // 0x560 JumpB
	var_504_string = ""; // 0x561 PushV
	var_504_string = "Neutral"; // 0x562 MovS
	func_293(var_19_bool, var_504_string); // 0x563 NEW_2
	var_505_int = 537989; // 0x565 PushI
	SetMessage(var_505_int); // 0x566 TObjFunc
	ClearReplies(); // 0x568 TObjFunc
	var_506_int = 537990; // 0x56a PushI
	var_507_int = 39835; // 0x56b PushI
	var_508_int = 39853; // 0x56c PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x56d TObjFunc
	var_509_int = 537991; // 0x56f PushI
	var_510_int = 39856; // 0x570 PushI
	var_511_int = 39855; // 0x571 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_512_int = 39856; // 0x575 PushI
	var_513_bool = var_18_object == var_512_int; // 0x576 Eq
	if(var_513_bool == 0) goto Label_1415; // 0x577 JumpB
	var_514_string = ""; // 0x578 PushV
	var_514_string = "Neutral"; // 0x579 MovS
	func_293(var_19_bool, var_514_string); // 0x57a NEW_2
	var_515_int = 537992; // 0x57c PushI
	SetMessage(var_515_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_516_int = 537993; // 0x581 PushI
	var_517_int = 39840; // 0x582 PushI
	var_518_int = 39857; // 0x583 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x584 TObjFunc
	return 0; // 0x586 Return
	
Label_1415:
	var_519_int = 39840; // 0x587 PushI
	var_520_bool = var_18_object == var_519_int; // 0x588 Eq
	if(var_520_bool == 0) goto Label_1438; // 0x589 JumpB
	var_521_string = ""; // 0x58a PushV
	var_521_string = "Neutral"; // 0x58b MovS
	func_293(var_19_bool, var_521_string); // 0x58c NEW_2
	var_522_int = 537977; // 0x58e PushI
	SetMessage(var_522_int); // 0x58f TObjFunc
	ClearReplies(); // 0x591 TObjFunc
	var_523_int = 537978; // 0x593 PushI
	var_524_int = 39842; // 0x594 PushI
	var_525_int = 39841; // 0x595 PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0x596 TObjFunc
	var_526_int = 537987; // 0x598 PushI
	var_527_int = -1; // 0x599 PushI
	var_528_int = 39850; // 0x59a PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x59b TObjFunc
	return 0; // 0x59d Return
	
Label_1438:
	var_529_int = 39842; // 0x59e PushI
	var_530_bool = var_18_object == var_529_int; // 0x59f Eq
	if(var_530_bool == 0) goto Label_1461; // 0x5a0 JumpB
	var_531_string = ""; // 0x5a1 PushV
	var_531_string = "Neutral"; // 0x5a2 MovS
	func_293(var_19_bool, var_531_string); // 0x5a3 NEW_2
	var_532_int = 537979; // 0x5a5 PushI
	SetMessage(var_532_int); // 0x5a6 TObjFunc
	ClearReplies(); // 0x5a8 TObjFunc
	var_533_int = 537980; // 0x5aa PushI
	var_534_int = 39844; // 0x5ab PushI
	var_535_int = 39843; // 0x5ac PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x5ad TObjFunc
	var_536_int = 537986; // 0x5af PushI
	var_537_int = -1; // 0x5b0 PushI
	var_538_int = 39849; // 0x5b1 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x5b2 TObjFunc
	return 0; // 0x5b4 Return
	
Label_1461:
	var_539_int = 39844; // 0x5b5 PushI
	var_540_bool = var_18_object == var_539_int; // 0x5b6 Eq
	if(var_540_bool == 0) goto Label_1484; // 0x5b7 JumpB
	var_541_string = ""; // 0x5b8 PushV
	var_541_string = "Neutral"; // 0x5b9 MovS
	func_293(var_19_bool, var_541_string); // 0x5ba NEW_2
	var_542_int = 537981; // 0x5bc PushI
	SetMessage(var_542_int); // 0x5bd TObjFunc
	ClearReplies(); // 0x5bf TObjFunc
	var_543_int = 537982; // 0x5c1 PushI
	var_544_int = 39846; // 0x5c2 PushI
	var_545_int = 39845; // 0x5c3 PushI
	AddReply(var_543_int, var_544_int, var_545_int); // 0x5c4 TObjFunc
	var_546_int = 537985; // 0x5c6 PushI
	var_547_int = -1; // 0x5c7 PushI
	var_548_int = 39848; // 0x5c8 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_549_int = 39846; // 0x5cc PushI
	var_550_bool = var_18_object == var_549_int; // 0x5cd Eq
	if(var_550_bool == 0) goto Label_1502; // 0x5ce JumpB
	var_551_string = ""; // 0x5cf PushV
	var_551_string = "Neutral"; // 0x5d0 MovS
	func_293(var_19_bool, var_551_string); // 0x5d1 NEW_2
	var_552_int = 537983; // 0x5d3 PushI
	SetMessage(var_552_int); // 0x5d4 TObjFunc
	ClearReplies(); // 0x5d6 TObjFunc
	var_553_int = 537984; // 0x5d8 PushI
	var_554_int = -1; // 0x5d9 PushI
	var_555_int = 39847; // 0x5da PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_556_int = 39835; // 0x5de PushI
	var_557_bool = var_18_object == var_556_int; // 0x5df Eq
	if(var_557_bool == 0) goto Label_1525; // 0x5e0 JumpB
	var_558_string = ""; // 0x5e1 PushV
	var_558_string = "Neutral"; // 0x5e2 MovS
	func_293(var_19_bool, var_558_string); // 0x5e3 NEW_2
	var_559_int = 537973; // 0x5e5 PushI
	SetMessage(var_559_int); // 0x5e6 TObjFunc
	ClearReplies(); // 0x5e8 TObjFunc
	var_560_int = 537974; // 0x5ea PushI
	var_561_int = 39840; // 0x5eb PushI
	var_562_int = 39836; // 0x5ec PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x5ed TObjFunc
	var_563_int = 537975; // 0x5ef PushI
	var_564_int = -1; // 0x5f0 PushI
	var_565_int = 39838; // 0x5f1 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_566_int = 45790; // 0x5f5 PushI
	var_567_bool = var_18_object == var_566_int; // 0x5f6 Eq
	if(var_567_bool == 0) goto Label_1548; // 0x5f7 JumpB
	var_568_string = ""; // 0x5f8 PushV
	var_568_string = "Neutral"; // 0x5f9 MovS
	func_293(var_19_bool, var_568_string); // 0x5fa NEW_2
	var_569_int = 543333; // 0x5fc PushI
	SetMessage(var_569_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_570_int = 543334; // 0x601 PushI
	var_571_int = -1; // 0x602 PushI
	var_572_int = 45791; // 0x603 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x604 TObjFunc
	var_573_int = 543335; // 0x606 PushI
	var_574_int = -1; // 0x607 PushI
	var_575_int = 45792; // 0x608 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x609 TObjFunc
	return 0; // 0x60b Return
	
Label_1548:
	var_3_object = 1; // 0x60c TMovB
	var_576_bool = 0; // 0x60d PushV
	func_4696(var_576_bool); // 0x60e NEW_2
	if(var_576_bool == 0) goto Label_1556; // 0x610 JumpB
	lshStopAnimation(); // 0x611 Func
	goto Label_1558; // 0x613 Jump
	
Label_1558:
	return 0; // 0x616 Return
	
Label_1556:
	StopAnimation(); // 0x614 Func
	
Label_1560:
	return 0; // 0x618 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x628 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x629 PushV
	var_22_object = var_18_bool; // 0x62a Mov
	func_4658(var_22_object); // 0x62b NEW_2
	var_20_int = var_21_int; // 0x62c Mov
	var_23_int = 0; // 0x62e PushI
	var_24_bool = var_20_int > var_23_int; // 0x62f GT
	if(var_24_bool == 0) goto Label_1589; // 0x630 JumpB
	var_25_object = Obj(); // 0x631 PushV
	var_25_object = var_18_bool; // 0x632 Mov
	func_4661(var_25_object); // 0x633 NEW_2
	
Label_1589:
	return 2; // 0x635 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_4667(); // 0x637 NEW_2
	return 0; // 0x639 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0x6b0 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x6b2 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0x6b4 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x6cd PushV
	var_21_int = 0; var_22_object = Obj(); // 0x6ce PushV
	var_22_object = var_18_bool; // 0x6cf Mov
	func_4658(var_22_object); // 0x6d0 NEW_2
	var_20_int = var_21_int; // 0x6d1 Mov
	var_23_int = 0; // 0x6d3 PushI
	var_24_bool = var_20_int > var_23_int; // 0x6d4 GT
	if(var_24_bool == 0) goto Label_1760; // 0x6d5 JumpB
	var_25_int = 1; // 0x6d6 PushI
	var_26_bool = var_20_int > var_25_int; // 0x6d7 GT
	if(var_26_bool == 0) goto Label_1756; // 0x6d8 JumpB
	func_1928(var_20_int); // 0x6da NEW_2
	
Label_1756:
	var_28_object = Obj(); // 0x6dc PushV
	var_28_object = var_18_bool; // 0x6dd Mov
	func_4661(var_28_object); // 0x6de NEW_2
	
Label_1760:
	return 2; // 0x6e0 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x6e1 PushV
	var_21_object = Obj(); // 0x6e2 PushV
	var_21_object = var_18_bool; // 0x6e3 Mov
	func_4390(var_21_object); // 0x6e4 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x6e6 PushV
	var_31_object = var_18_bool; // 0x6e7 Mov
	func_4472(var_30_int, var_31_object); // 0x6e8 NEW_2
	var_20_int = var_30_int; // 0x6e9 Mov
	var_66_int = 0; // 0x6eb PushI
	var_67_bool = var_20_int > var_66_int; // 0x6ec GT
	if(var_67_bool == 0) goto Label_1784; // 0x6ed JumpB
	var_68_int = 1; // 0x6ee PushI
	var_69_bool = var_20_int > var_68_int; // 0x6ef GT
	if(var_69_bool == 0) goto Label_1780; // 0x6f0 JumpB
	func_1928(var_20_int); // 0x6f2 NEW_2
	
Label_1780:
	var_71_object = Obj(); // 0x6f4 PushV
	var_71_object = var_18_bool; // 0x6f5 Mov
	func_4482(var_71_object); // 0x6f6 NEW_2
	
Label_1784:
	return 2; // 0x6f8 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x6f9 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x6fa PushV
	var_24_object = var_18_bool; // 0x6fb Mov
	var_25_object = var_19_object; // 0x6fc Mov
	var_26_bool = var_20_bool; // 0x6fd Mov
	func_4767(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x6fe NEW_2
	if(var_23_bool == 0) goto Label_1812; // 0x700 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x701 PushV
	var_86_object = var_18_bool; // 0x702 Mov
	var_87_bool = var_20_bool; // 0x703 Mov
	func_4565(var_86_object, var_87_bool); // 0x704 NEW_2
	var_22_int = var_85_int; // 0x705 Mov
	var_118_int = 0; // 0x707 PushI
	var_119_bool = var_22_int > var_118_int; // 0x708 GT
	if(var_119_bool == 0) goto Label_1812; // 0x709 JumpB
	var_120_int = 1; // 0x70a PushI
	var_121_bool = var_22_int > var_120_int; // 0x70b GT
	if(var_121_bool == 0) goto Label_1808; // 0x70c JumpB
	func_1928(var_22_int); // 0x70e NEW_2
	
Label_1808:
	var_123_object = Obj(); // 0x710 PushV
	var_123_object = var_18_bool; // 0x711 Mov
	func_4572(var_123_object); // 0x712 NEW_2
	
Label_1812:
	return 2; // 0x714 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x715 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x716 PushV
	var_22_object = var_18_bool; // 0x717 Mov
	func_4607(var_22_object); // 0x718 NEW_2
	var_20_int = var_21_int; // 0x719 Mov
	var_23_int = 0; // 0x71b PushI
	var_24_bool = var_20_int > var_23_int; // 0x71c GT
	if(var_24_bool == 0) goto Label_1832; // 0x71d JumpB
	var_25_int = 1; // 0x71e PushI
	var_26_bool = var_20_int > var_25_int; // 0x71f GT
	if(var_26_bool == 0) goto Label_1828; // 0x720 JumpB
	func_1928(var_20_int); // 0x722 NEW_2
	
Label_1828:
	var_28_object = Obj(); // 0x724 PushV
	var_28_object = var_18_bool; // 0x725 Mov
	func_4610(); // 0x726 NEW_2
	
Label_1832:
	return 2; // 0x728 Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x729 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x72a PushV
	var_23_object = var_18_object; // 0x72b Mov
	var_24_string = var_19_bool; // 0x72c Mov
	func_4304(var_22_bool, var_23_object, var_24_string); // 0x72d NEW_2
	if(var_22_bool == 0) goto Label_1849; // 0x72f JumpB
	func_1928(var_21_int); // 0x731 NEW_2
	var_38_object = Obj(); var_39_string = ""; // 0x733 PushV
	var_38_object = var_18_object; // 0x734 Mov
	var_39_string = var_19_bool; // 0x735 Mov
	func_4336(var_38_object, var_39_string); // 0x736 NEW_2
	goto Label_1869; // 0x738 Jump
	
Label_1869:
	return 2; // 0x74d Return
	
Label_1849:
	var_49_int = 0; var_50_string = ""; var_51_object = Obj(); // 0x739 PushV
	var_50_string = var_19_bool; // 0x73a Mov
	var_51_object = var_18_object; // 0x73b Mov
	func_4612(var_49_int, var_50_string, var_51_object); // 0x73c NEW_2
	var_21_int = var_49_int; // 0x73d Mov
	var_93_int = 0; // 0x73f PushI
	var_94_bool = var_21_int > var_93_int; // 0x740 GT
	if(var_94_bool == 0) goto Label_1869; // 0x741 JumpB
	var_95_int = 1; // 0x742 PushI
	var_96_bool = var_21_int > var_95_int; // 0x743 GT
	if(var_96_bool == 0) goto Label_1864; // 0x744 JumpB
	func_1928(var_21_int); // 0x746 NEW_2
	
Label_1864:
	var_97_string = ""; var_98_object = Obj(); // 0x748 PushV
	var_97_string = var_19_bool; // 0x749 Mov
	var_98_object = var_18_object; // 0x74a Mov
	func_4624(var_97_string, var_98_object); // 0x74b NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x74f PushV
	var_20_string = var_18_bool; // 0x750 Mov
	func_4403(var_19_bool, var_20_string); // 0x751 NEW_2
	if(var_19_bool == 0) goto Label_1883; // 0x753 JumpB
	func_1928(var_18_bool); // 0x755 NEW_2
	var_29_string = ""; // 0x757 PushV
	var_29_string = var_18_bool; // 0x758 Mov
	func_4419(var_29_string); // 0x759 NEW_2
	
Label_1883:
	return 0; // 0x75b Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x75d PushV
	var_20_object = var_18_bool; // 0x75e Mov
	func_4361(var_19_bool, var_20_object); // 0x75f NEW_2
	if(var_19_bool == 0) goto Label_1898; // 0x761 JumpB
	func_1928(var_18_bool); // 0x763 NEW_2
	var_32_object = Obj(); // 0x765 PushV
	var_32_object = var_18_bool; // 0x766 Mov
	func_4384(var_32_object); // 0x767 NEW_2
	goto Label_1902; // 0x769 Jump
	
Label_1902:
	return 0; // 0x76e Return
	
Label_1898:
	var_34_object = Obj(); // 0x76a PushV
	var_34_object = var_18_bool; // 0x76b Mov
	func_1953(var_18_bool, var_34_object); // 0x76c NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0x770 PushV
	var_19_object = var_18_bool; // 0x771 Mov
	func_1953(var_18_bool, var_19_object); // 0x772 NEW_2
	return 0; // 0x774 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0x776 PushI
	var_20_bool = var_18_bool != var_19_int; // 0x777 Neq
	if(var_20_bool == 0) goto Label_1914; // 0x778 JumpB
	return 0; // 0x779 Return
	
Label_1914:
	var_2_object = 0; // 0x77a TMovB
	var_21_int = 110; // 0x77b PushI
	KillTimer(var_21_int); // 0x77c Func
	ResetAAS(); // 0x77e Func
	return 0; // 0x780 Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1928(var_17_bool); // 0x782 NEW_2
	func_4667(); // 0x785 NEW_2
	return 0; // 0x787 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1928(var_18_bool); // 0x79a NEW_2
	var_20_object = Obj(); // 0x79c PushV
	var_20_object = var_18_bool; // 0x79d Mov
	func_4280(); // 0x79e NEW_2
	return 0; // 0x7a0 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0x80a Func
	return 0; // 0x80c Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0x80d Func
	return 0; // 0x80f Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x826 PushV
	var_21_int = 0; var_22_object = Obj(); // 0x827 PushV
	var_22_object = var_18_bool; // 0x828 Mov
	func_4658(var_22_object); // 0x829 NEW_2
	var_20_int = var_21_int; // 0x82a Mov
	var_23_int = 0; // 0x82c PushI
	var_24_bool = var_20_int > var_23_int; // 0x82d GT
	if(var_24_bool == 0) goto Label_2105; // 0x82e JumpB
	var_25_int = 1; // 0x82f PushI
	var_26_bool = var_20_int > var_25_int; // 0x830 GT
	if(var_26_bool == 0) goto Label_2101; // 0x831 JumpB
	func_2331(); // 0x833 NEW_2
	
Label_2101:
	var_27_object = Obj(); // 0x835 PushV
	var_27_object = var_18_bool; // 0x836 Mov
	func_4661(var_27_object); // 0x837 NEW_2
	
Label_2105:
	return 2; // 0x839 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x83a PushV
	var_21_object = Obj(); // 0x83b PushV
	var_21_object = var_18_bool; // 0x83c Mov
	func_4390(var_21_object); // 0x83d NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0x83f PushV
	var_31_object = var_18_bool; // 0x840 Mov
	func_4472(var_30_int, var_31_object); // 0x841 NEW_2
	var_20_int = var_30_int; // 0x842 Mov
	var_66_int = 0; // 0x844 PushI
	var_67_bool = var_20_int > var_66_int; // 0x845 GT
	if(var_67_bool == 0) goto Label_2129; // 0x846 JumpB
	var_68_int = 1; // 0x847 PushI
	var_69_bool = var_20_int > var_68_int; // 0x848 GT
	if(var_69_bool == 0) goto Label_2125; // 0x849 JumpB
	func_2331(); // 0x84b NEW_2
	
Label_2125:
	var_70_object = Obj(); // 0x84d PushV
	var_70_object = var_18_bool; // 0x84e Mov
	func_4482(var_70_object); // 0x84f NEW_2
	
Label_2129:
	return 2; // 0x851 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x852 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0x853 PushV
	var_24_object = var_18_bool; // 0x854 Mov
	var_25_object = var_19_object; // 0x855 Mov
	var_26_bool = var_20_bool; // 0x856 Mov
	func_4767(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0x857 NEW_2
	if(var_23_bool == 0) goto Label_2157; // 0x859 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0x85a PushV
	var_86_object = var_18_bool; // 0x85b Mov
	var_87_bool = var_20_bool; // 0x85c Mov
	func_4565(var_86_object, var_87_bool); // 0x85d NEW_2
	var_22_int = var_85_int; // 0x85e Mov
	var_118_int = 0; // 0x860 PushI
	var_119_bool = var_22_int > var_118_int; // 0x861 GT
	if(var_119_bool == 0) goto Label_2157; // 0x862 JumpB
	var_120_int = 1; // 0x863 PushI
	var_121_bool = var_22_int > var_120_int; // 0x864 GT
	if(var_121_bool == 0) goto Label_2153; // 0x865 JumpB
	func_2331(); // 0x867 NEW_2
	
Label_2153:
	var_122_object = Obj(); // 0x869 PushV
	var_122_object = var_18_bool; // 0x86a Mov
	func_4572(var_122_object); // 0x86b NEW_2
	
Label_2157:
	return 2; // 0x86d Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0x86e PushV
	var_21_int = 0; var_22_object = Obj(); // 0x86f PushV
	var_22_object = var_18_bool; // 0x870 Mov
	func_4607(var_22_object); // 0x871 NEW_2
	var_20_int = var_21_int; // 0x872 Mov
	var_23_int = 0; // 0x874 PushI
	var_24_bool = var_20_int > var_23_int; // 0x875 GT
	if(var_24_bool == 0) goto Label_2177; // 0x876 JumpB
	var_25_int = 1; // 0x877 PushI
	var_26_bool = var_20_int > var_25_int; // 0x878 GT
	if(var_26_bool == 0) goto Label_2173; // 0x879 JumpB
	func_2331(); // 0x87b NEW_2
	
Label_2173:
	var_27_object = Obj(); // 0x87d PushV
	var_27_object = var_18_bool; // 0x87e Mov
	func_4610(); // 0x87f NEW_2
	
Label_2177:
	return 2; // 0x881 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x882 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0x883 PushV
	var_23_object = var_18_object; // 0x884 Mov
	var_24_string = var_19_bool; // 0x885 Mov
	func_4304(var_22_bool, var_23_object, var_24_string); // 0x886 NEW_2
	if(var_22_bool == 0) goto Label_2194; // 0x888 JumpB
	func_2331(); // 0x88a NEW_2
	var_37_object = Obj(); var_38_string = ""; // 0x88c PushV
	var_37_object = var_18_object; // 0x88d Mov
	var_38_string = var_19_bool; // 0x88e Mov
	func_4336(var_37_object, var_38_string); // 0x88f NEW_2
	goto Label_2214; // 0x891 Jump
	
Label_2214:
	return 2; // 0x8a6 Return
	
Label_2194:
	var_48_int = 0; var_49_string = ""; var_50_object = Obj(); // 0x892 PushV
	var_49_string = var_19_bool; // 0x893 Mov
	var_50_object = var_18_object; // 0x894 Mov
	func_4612(var_48_int, var_49_string, var_50_object); // 0x895 NEW_2
	var_21_int = var_48_int; // 0x896 Mov
	var_92_int = 0; // 0x898 PushI
	var_93_bool = var_21_int > var_92_int; // 0x899 GT
	if(var_93_bool == 0) goto Label_2214; // 0x89a JumpB
	var_94_int = 1; // 0x89b PushI
	var_95_bool = var_21_int > var_94_int; // 0x89c GT
	if(var_95_bool == 0) goto Label_2209; // 0x89d JumpB
	func_2331(); // 0x89f NEW_2
	
Label_2209:
	var_96_string = ""; var_97_object = Obj(); // 0x8a1 PushV
	var_96_string = var_19_bool; // 0x8a2 Mov
	var_97_object = var_18_object; // 0x8a3 Mov
	func_4624(var_96_string, var_97_object); // 0x8a4 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0x8a8 PushV
	var_20_string = var_18_bool; // 0x8a9 Mov
	func_4403(var_19_bool, var_20_string); // 0x8aa NEW_2
	if(var_19_bool == 0) goto Label_2228; // 0x8ac JumpB
	func_2331(); // 0x8ae NEW_2
	var_28_string = ""; // 0x8b0 PushV
	var_28_string = var_18_bool; // 0x8b1 Mov
	func_4419(var_28_string); // 0x8b2 NEW_2
	
Label_2228:
	return 0; // 0x8b4 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2331(); // 0x8b6 NEW_2
	func_4667(); // 0x8b9 NEW_2
	return 0; // 0x8bb Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0x8bd PushV
	var_20_object = var_18_bool; // 0x8be Mov
	func_4361(var_19_bool, var_20_object); // 0x8bf NEW_2
	if(var_19_bool == 0) goto Label_2249; // 0x8c1 JumpB
	func_2331(); // 0x8c3 NEW_2
	var_31_object = Obj(); // 0x8c5 PushV
	var_31_object = var_18_bool; // 0x8c6 Mov
	func_4384(var_31_object); // 0x8c7 NEW_2
	
Label_2249:
	return 0; // 0x8c9 Return
}


task_7_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3082(var_17_bool); // 0xbc5 NEW_2
	func_4667(); // 0xbc8 NEW_2
	return 0; // 0xbca Return
}


task_7_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0xbfd PushI
	var_20_bool = var_18_int == var_19_int; // 0xbfe Eq
	if(var_20_bool == 0) goto Label_3077; // 0xbff JumpB
	var_21_object = Obj(); // 0xc00 PushV
	var_21_object = var_1_object; // 0xc01 MovT
	func_3893(var_21_object); // 0xc02 NEW_2
	goto Label_3081; // 0xc04 Jump
	
Label_3081:
	return 0; // 0xc09 Return
	
Label_3077:
	var_26_int = 0; // 0xc05 PushV
	var_26_int = var_18_int; // 0xc06 Mov
	func_3226(var_17_bool, var_18_int, var_26_int); // 0xc07 NEW_2
}


task_7_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xc18 PushV
	var_19_bool = 0; // 0xc19 MovB
	var_20_bool = var_1_object == var_18_object; // 0xc1a Eq
	if(var_20_bool == 0) goto Label_3103; // 0xc1b JumpB
	var_21_bool = var_2_object == 0; // 0xc1c Not
	if(var_21_bool == 0) goto Label_3103; // 0xc1d JumpB
	var_19_bool = 1; // 0xc1e MovB
	
Label_3103:
	if(var_19_bool == 0) goto Label_3109; // 0xc1f JumpB
	var_2_object = 1; // 0xc20 TMovB
	var_22_object = Obj(); // 0xc21 PushV
	var_22_object = var_18_object; // 0xc22 Mov
	func_3776(var_22_object); // 0xc23 NEW_2
	
Label_3109:
	return 0; // 0xc25 Return
}


task_7_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0xc27 PushV
	var_19_bool = 0; // 0xc28 MovB
	var_20_bool = var_1_object == var_18_object; // 0xc29 Eq
	if(var_20_bool == 0) goto Label_3118; // 0xc2a JumpB
	var_21_object = var_2_object; // 0xc2b PushT
	if(var_21_object == 0) goto Label_3118; // 0xc2c JumpB
	var_19_bool = 1; // 0xc2d MovB
	
Label_3118:
	if(var_19_bool == 0) goto Label_3123; // 0xc2e JumpB
	var_2_object = 0; // 0xc2f TMovB
	var_22_string = "head"; // 0xc30 PushS
	UnlookAsync(var_22_string); // 0xc31 Func
	
Label_3123:
	return 0; // 0xc33 Return
}


task_7_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0xcad Func
	return 0; // 0xcaf Return
}


task_7_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_3082(var_18_object); // 0xcb9 NEW_2
	var_23_object = Obj(); // 0xcbb PushV
	var_23_object = var_18_object; // 0xcbc Mov
	func_4280(); // 0xcbd NEW_2
	return 0; // 0xcbf Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0x10ab PushV
	var_22_string = "health"; // 0x10ac PushS
	var_23_bool = var_19_string == var_22_string; // 0x10ad Eq
	if(var_23_bool == 0) goto Label_4279; // 0x10ae JumpB
	var_24_string = "health"; // 0x10af PushS
	GetProperty(var_24_string, var_21_float); // 0x10b0 Func
	var_25_int = 0; // 0x10b2 PushI
	var_26_bool = var_21_float <= var_25_int; // 0x10b3 LE
	if(var_26_bool == 0) goto Label_4279; // 0x10b4 JumpB
	SignalDeath(var_18_object); // 0x10b5 Func
	
Label_4279:
	return 2; // 0x10b7 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0x10b9 PushV
	var_19_object = var_18_object; // 0x10ba Mov
	func_4259(var_19_object); // 0x10bb NEW_2
	return 0; // 0x10bd Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0x10bf PushV
	var_22_object = var_18_object; // 0x10c0 Mov
	var_23_int = var_19_int; // 0x10c1 Mov
	var_24_float = var_20_float; // 0x10c2 Mov
	func_3503(var_22_object, var_23_int, var_24_float); // 0x10c3 NEW_2
	return 0; // 0x10c5 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x10c7 PushV
	var_24_object = var_18_object; // 0x10c8 Mov
	var_25_int = var_19_int; // 0x10c9 Mov
	var_26_float = var_20_float; // 0x10ca Mov
	var_27_cvector = var_22_cvector; // 0x10cb Mov
	var_28_cvector = var_23_cvector; // 0x10cc Mov
	func_3571(var_26_float, var_27_cvector, var_28_cvector); // 0x10cd NEW_2
	return 0; // 0x10cf Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0x6b5 PushB
	SensePlayerOnly(var_18_bool); // 0x6b6 Func
	func_4698(); // 0x6b9 NEW_2
	func_1732(); // 0x6bc NEW_2
	
Label_1726:
	var_2_object = 0; // 0x6be TMovB
	func_1993(var_16_object, var_17_bool); // 0x6c0 NEW_2
	goto Label_1726; // 0x6c2 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_287_bool = 0; // 0x4 PushV
	func_4696(var_287_bool); // 0x5 NEW_2
	if(var_287_bool == 0) goto Label_15; // 0x7 JumpB
	var_288_string = ""; // 0x8 PushV
	var_288_string = "Neutral"; // 0x9 MovS
	func_3745(var_288_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_289_bool = var_0_bool; // 0x15 PushT
	if(var_289_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_290_string = "all"; // 0x11 PushS
	var_291_string = "idle"; // 0x12 PushS
	PlayAnimation(var_290_string, var_291_string); // 0x13 Func
}


func_3585()
{
	var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); // 0xe01 PushV
	GetPosition(var_287_cvector); // 0xe02 ObjFunc
	GetPosition(var_288_cvector); // 0xe04 Func
	var_289_cvector = var_287_cvector - var_288_cvector; // 0xe06 Sub2
	var_290_float = GetByIndex(var_289_cvector, 0); // 0xe07 PushE
	var_291_float = GetByIndex(var_289_cvector, 2); // 0xe08 PushE
	RotateAsync(var_290_float, var_291_float); // 0xe09 Func
	return 6; // 0xe0b Return
}


func_4610()
{
	return 0; // 0x1203 Return
}


func_4612(var_48_int, var_49_string, var_50_object)
{
	var_51_string = "killme"; // 0x1205 PushS
	var_52_bool = var_49_string == var_51_string; // 0x1206 Eq
	if(var_52_bool == 0) goto Label_4622; // 0x1207 JumpB
	var_53_int = 0; var_54_object = Obj(); // 0x1208 PushV
	var_54_object = var_50_object; // 0x1209 Mov
	func_4634(var_53_int, var_54_object); // 0x120a NEW_2
	var_48_int = var_53_int; // 0x120b Mov
	return 0; // 0x120d Return
	
Label_4622:
	var_48_int = 0; // 0x120e MovI
	return 0; // 0x120f Return
}


func_2052(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x804 PushV
	GetCameraFarDistance(var_41_float); // 0x805 Func
	var_39_float = var_41_float; // 0x807 Mov
	return 2; // 0x808 Return
}


func_3082(var_2_object)
{
	var_19_int = 1; // 0xc0a PushI
	KillTimer(var_19_int); // 0xc0b Func
	var_20_object = var_2_object; // 0xc0d PushT
	if(var_20_object == 0) goto Label_3091; // 0xc0e JumpB
	var_2_object = 0; // 0xc0f TMovB
	var_21_string = "head"; // 0xc10 PushS
	UnlookAsync(var_21_string); // 0xc11 Func
	
Label_3091:
	func_3248(var_18_object); // 0xc14 NEW_2
	return 0; // 0xc16 Return
}


func_3596(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0xe0c PushV
	IsLoaded(var_22_bool); // 0xe0d Func
	var_20_bool = var_22_bool; // 0xe0f Mov
	return 2; // 0xe10 Return
}


func_4624(var_96_string, var_97_object)
{
	var_98_string = "killme"; // 0x1211 PushS
	var_99_bool = var_96_string == var_98_string; // 0x1212 Eq
	if(var_99_bool == 0) goto Label_4633; // 0x1213 JumpB
	var_100_object = Obj(); // 0x1214 PushV
	var_100_object = var_97_object; // 0x1215 Mov
	func_4652(var_100_object); // 0x1216 NEW_2
	return 0; // 0x1218 Return
	
Label_4633:
	return 0; // 0x1219 Return
}


func_3601(var_64_bool, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; // 0xe11 PushV
	GetPosition(var_77_cvector); // 0xe12 ObjFunc
	GetEyesHeight(var_76_float); // 0xe14 ObjFunc
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xe16 PushE
	var_85_float = var_85_float + var_76_float; // 0xe17 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xe18 PopE
	GetPosition(var_78_cvector); // 0xe19 Func
	GetEyesHeight(var_76_float); // 0xe1b Func
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xe1d PushE
	var_86_float = var_86_float + var_76_float; // 0xe1e Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xe1f PopE
	var_79_cvector = var_77_cvector - var_78_cvector; // 0xe20 Sub2
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xe21 PushE
	var_87_float = 0; // 0xe22 MovI
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xe23 PopE
	var_88_int = var_79_cvector | var_79_cvector; // 0xe24 Or
	var_89_float = sqrt(var_88_int); // 0xe25 Sqrt
	var_79_cvector = var_79_cvector / var_79_cvector; // 0xe26 Div2
	var_80_cvector = -var_79_cvector; // 0xe27 Neg2
	var_90_float = var_79_cvector * var_66_float; // 0xe28 Mult
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0xe29 PushV
	var_93_cvector = CVector(0.0, 1.0, 0.0); // 0xe2a PushVec
	var_92_cvector = var_80_cvector ^ var_93_cvector; // 0xe2b Xor2
	func_3841(var_91_cvector, var_92_cvector); // 0xe2c NEW_2
	var_99_int = 25; // 0xe2e PushI
	var_100_float = var_91_cvector * var_99_int; // 0xe2f Mult
	var_101_int = var_90_float + var_100_float; // 0xe30 Add
	var_102_cvector = CVector(0.0, 10.0, 0.0); // 0xe31 PushVec
	var_81_cvector = var_101_int - var_102_cvector; // 0xe32 Sub2
	var_82_cvector = var_78_cvector + var_81_cvector; // 0xe33 Add2
	IsOverrideActive(var_83_bool); // 0xe34 Func
	var_103_bool = var_83_bool; // 0xe36 Push
	if(var_103_bool == 0) goto Label_3642; // 0xe37 JumpB
	var_64_bool = 0; // 0xe38 MovB
	return 18; // 0xe39 Return
	
Label_3642:
	StopWorld(); // 0xe3a Func
	CameraTransit(var_82_cvector, var_80_cvector); // 0xe3c Func
	var_104_float = GetByIndex(var_81_cvector, 0); // 0xe3e PushE
	var_105_float = GetByIndex(var_81_cvector, 2); // 0xe3f PushE
	Rotate(var_104_float, var_105_float); // 0xe40 Func
	var_106_bool = 0; // 0xe42 PushV
	func_4696(var_106_bool); // 0xe43 NEW_2
	if(var_106_bool == 0) goto Label_3655; // 0xe45 JumpB
	goto Label_3663; // 0xe46 Jump
	
Label_3663:
	CameraWaitForPlayFinish(); // 0xe4f Func
	ResumeWorld(); // 0xe51 Func
	var_64_bool = 1; // 0xe53 MovB
	return 18; // 0xe54 Return
	
Label_3655:
	var_107_string = "head"; // 0xe47 PushS
	HasAnimationTrack(var_84_bool, var_107_string); // 0xe48 Func
	var_108_bool = var_84_bool; // 0xe4a Push
	if(var_108_bool == 0) goto Label_3663; // 0xe4b JumpB
	var_109_string = "head"; // 0xe4c PushS
	LookAsyncCamera(var_109_string); // 0xe4d Func
}


func_2064(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x810 TMovB
	var_1_object = 0; // 0x811 TMovB
	Stop(); // 0x812 Func
	StopGroup0(); // 0x814 Func
	return 0; // 0x816 Return
}


func_2579(var_1_object, var_2_object, var_4_string)
{
	var_134_bool = 0; var_135_bool = 0; var_136_cvector = CVector(0,0,0); var_137_bool = 0; var_138_bool = 0; var_139_cvector = CVector(0,0,0); // 0xa13 PushV
	var_1_object = 0; // 0xa14 TMovI
	
Label_2581:
	var_140_string = "all"; // 0xa15 PushS
	var_141_string = "attack_begin"; // 0xa16 PushS
	var_142_int = 1; // 0xa17 PushI
	var_143_int = var_1_object + var_142_int; // 0xa18 Add
	var_144_int = var_141_string + var_143_int; // 0xa19 Add
	HasAnimation(var_137_bool, var_140_string, var_144_int); // 0xa1a Func
	var_145_bool = var_137_bool == 0; // 0xa1c Not
	if(var_145_bool == 0) goto Label_2591; // 0xa1d JumpB
	goto Label_2594; // 0xa1e Jump
	
Label_2594:
	var_2_object = 0; // 0xa22 TMovI
	
Label_2595:
	var_146_string = "attack"; // 0xa23 PushS
	var_147_int = 1; // 0xa24 PushI
	var_148_int = var_2_object + var_147_int; // 0xa25 Add
	var_149_int = var_146_string + var_148_int; // 0xa26 Add
	IsExisting3DSound(var_138_bool, var_149_int); // 0xa27 Func
	var_150_bool = var_138_bool == 0; // 0xa29 Not
	if(var_150_bool == 0) goto Label_2604; // 0xa2a JumpB
	goto Label_2607; // 0xa2b Jump
	
Label_2607:
	var_151_string = "all"; // 0xa2f PushS
	var_152_string = "bjump"; // 0xa30 PushS
	GetAnimationOffset(var_139_cvector, var_151_string, var_152_string); // 0xa31 Func
	var_153_float = GetByIndex(var_139_cvector, 2); // 0xa33 PushE
	var_4_string = -var_153_float; // 0xa34 Neg2
	return 6; // 0xa35 Return
	
Label_2604:
	var_154_int = 1; // 0xa2c PushI
	var_2_object = var_2_object + var_154_int; // 0xa2d Add2
	goto Label_2595; // 0xa2e Jump
	
Label_2591:
	var_155_int = 1; // 0xa1f PushI
	var_1_object = var_1_object + var_155_int; // 0xa20 Add2
	goto Label_2581; // 0xa21 Jump
}


func_2071(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x817 TMovB
	var_1_object = 1; // 0x818 TMovB
	Stop(); // 0x819 Func
	StopGroup0(); // 0x81b Func
	return 0; // 0x81d Return
}


func_1561(var_20_object)
{
	EventDisable(0); // 0x61a EventDisable
	var_21_object = Obj(); // 0x61b PushV
	var_21_object = var_20_object; // 0x61c Mov
	func_1594(var_21_object); // 0x61d NEW_2
	var_101_object = Obj(); // 0x61f PushV
	var_101_object = var_20_object; // 0x620 Mov
	func_4777(var_101_object); // 0x621 NEW_2
	EventEnable(0); // 0x623 EventEnable
	
Label_1572:
	Hold(); // 0x624 Func
	goto Label_1572; // 0x626 Jump
}


func_4634(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj(); // 0x121b PushV
	var_56_object = var_54_object; // 0x121c Mov
	func_3435(var_55_bool, var_56_object); // 0x121d NEW_2
	var_89_bool = var_55_bool == 0; // 0x121f Not
	if(var_89_bool == 0) goto Label_4643; // 0x1220 JumpB
	var_53_int = 0; // 0x1221 MovI
	return 0; // 0x1222 Return
	
Label_4643:
	var_90_bool = 0; var_91_object = Obj(); // 0x1223 PushV
	var_91_object = var_54_object; // 0x1224 Mov
	func_4764(var_91_object); // 0x1225 NEW_2
	if(var_90_bool == 0) goto Label_4650; // 0x1227 JumpB
	var_53_int = 2; // 0x1228 MovI
	goto Label_4651; // 0x1229 Jump
	
Label_4651:
	return 0; // 0x122b Return
	
Label_4650:
	var_53_int = 0; // 0x122a MovI
}


func_2078(var_49_bool)
{
	var_49_bool = 0; // 0x81e MovB
	return 0; // 0x81f Return
}


func_2080(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x820 PushV
	FindShiftedPathTo(var_46_object, var_44_cvector); // 0x821 Func
	var_43_object = var_46_object; // 0x823 Mov
	return 2; // 0x824 Return
}


func_40(var_0_bool, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x28 PushV
	var_0_bool = var_54_object; // 0x29 TMov
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x2a PushV
	var_65_object = var_54_object; // 0x2b Mov
	var_66_float = 70.0; // 0x2c MovF
	func_3601(var_65_object, var_66_float); // 0x2d NEW_2
	var_110_bool = var_64_bool == 0; // 0x2f Not
	if(var_110_bool == 0) goto Label_51; // 0x30 JumpB
	var_53_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_60_object); // 0x33 Func
	var_111_int = 0; // 0x35 PushV
	func_4690(var_111_int); // 0x36 NEW_2
	SetNPCName(var_111_int); // 0x38 ObjFunc
	var_112_int = 0; // 0x3a PushV
	func_4688(var_112_int); // 0x3b NEW_2
	SetNPCDescription(var_112_int); // 0x3d ObjFunc
	var_113_string = ""; // 0x3f PushV
	func_4692(var_113_string); // 0x40 NEW_2
	SetPhoto(var_113_string); // 0x42 ObjFunc
	var_114_string = ""; // 0x44 PushV
	func_4694(var_114_string); // 0x45 NEW_2
	SetPhoto2(var_114_string); // 0x47 ObjFunc
	var_115_int = 0; // 0x49 PushV
	func_3971(var_115_int); // 0x4a NEW_2
	SetPlayerName(var_115_int); // 0x4c ObjFunc
	var_62_int = -1; // 0x4e MovI
	IsOverrideActive(var_61_bool); // 0x4f Func
	var_123_bool = var_61_bool; // 0x51 Push
	if(var_123_bool == 0) goto Label_85; // 0x52 JumpB
	var_53_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_60_object); // 0x55 Func
	var_124_object = Obj(); var_125_object = Obj(); // 0x57 PushV
	var_124_object = var_54_object; // 0x58 Mov
	var_125_object = var_60_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_126_object, var_127_object, var_128_string, var_129_bool, var_124_object, var_125_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_63_bool); // 0x5e ObjFunc
	
Label_96:
	var_244_bool = var_63_bool == 0; // 0x60 Not
	if(var_244_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_63_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_245_object = Obj(); // 0x67 PushV
	var_245_object = var_54_object; // 0x68 Mov
	func_3669(); // 0x69 NEW_2
	StopDialog(var_60_object); // 0x6b Func
	GetReturnValue(var_62_int); // 0x6d ObjFunc
	var_53_int = var_62_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_4652(var_100_object)
{
	var_101_object = Obj(); // 0x122d PushV
	var_101_object = var_100_object; // 0x122e Mov
	func_4482(var_101_object); // 0x122f NEW_2
	return 0; // 0x1231 Return
}


func_4658(var_21_int)
{
	var_21_int = 2; // 0x1233 MovI
	return 0; // 0x1234 Return
}


func_3124(var_0_bool, var_1_object, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool)
{
	var_215_bool = 0; var_216_bool = 0; var_217_object = Obj(); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_float = 0; var_222_object = Obj(); var_223_bool = 0; var_224_bool = 0; var_225_object = Obj(); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0; var_230_object = Obj(); // 0xc34 PushV
	var_0_bool = 0; // 0xc35 TMovB
	var_1_object = var_210_object; // 0xc36 TMov
	var_224_bool = var_214_bool; // 0xc37 Mov
	
Label_3128:
	var_231_bool = 0; var_232_object = Obj(); // 0xc38 PushV
	var_232_object = var_210_object; // 0xc39 Mov
	func_3264(var_231_bool, var_232_object); // 0xc3a NEW_2
	var_235_bool = var_231_bool == 0; // 0xc3c Not
	if(var_235_bool == 0) goto Label_3136; // 0xc3d JumpB
	var_209_bool = 0; // 0xc3e MovB
	return 16; // 0xc3f Return
	
Label_3136:
	GetPosition(var_226_cvector); // 0xc40 ObjFunc
	GetPosition(var_227_cvector); // 0xc42 Func
	var_228_cvector = var_226_cvector - var_227_cvector; // 0xc44 Sub2
	var_229_float = var_228_cvector | var_228_cvector; // 0xc45 Or2
	var_236_bool = 0; // 0xc46 PushV
	var_236_bool = 0; // 0xc47 MovB
	var_237_int = 0; // 0xc48 PushI
	var_238_bool = var_212_float > var_237_int; // 0xc49 GT
	if(var_238_bool == 0) goto Label_3151; // 0xc4a JumpB
	var_239_float = var_212_float * var_212_float; // 0xc4b Mult
	var_240_bool = var_229_float > var_239_float; // 0xc4c GT
	if(var_240_bool == 0) goto Label_3151; // 0xc4d JumpB
	var_236_bool = 1; // 0xc4e MovB
	
Label_3151:
	if(var_236_bool == 0) goto Label_3156; // 0xc4f JumpB
	Stop(); // 0xc50 Func
	var_209_bool = 0; // 0xc52 MovB
	return 16; // 0xc53 Return
	
Label_3156:
	var_241_float = var_211_float * var_211_float; // 0xc54 Mult
	var_242_bool = var_229_float > var_241_float; // 0xc55 GT
	if(var_242_bool == 0) goto Label_3218; // 0xc56 JumpB
	GetPFPosition(var_226_cvector); // 0xc57 ObjFunc
	FindPathTo(var_230_object, var_226_cvector); // 0xc59 Func
	var_243_bool = var_230_object != 0; // 0xc5b NullNeq
	if(var_243_bool == 0) goto Label_3167; // 0xc5c JumpB
	var_225_object = var_230_object; // 0xc5d Mov
	var_230_object = 0; // 0xc5e SetNull
	
Label_3167:
	var_244_bool = var_225_object != 0; // 0xc5f NullNeq
	if(var_244_bool == 0) goto Label_3200; // 0xc60 JumpB
	var_245_bool = var_224_bool; // 0xc61 Push
	if(var_245_bool == 0) goto Label_3177; // 0xc62 JumpB
	var_224_bool = 0; // 0xc63 MovB
	RotatePath(var_225_object, var_223_bool); // 0xc64 Func
	var_246_bool = var_223_bool == 0; // 0xc66 Not
	if(var_246_bool == 0) goto Label_3177; // 0xc67 JumpB
	goto Label_3224; // 0xc68 Jump
	
Label_3224:
	var_209_bool = !var_0_bool; // 0xc98 Not2
	return 16; // 0xc99 Return
	
Label_3177:
	var_247_int = 0; // 0xc69 PushI
	var_248_float = 0.3; // 0xc6a PushF
	SetTimer(var_247_int, var_248_float); // 0xc6b Func
	var_249_string = ""; // 0xc6d PushV
	func_3271(var_249_string); // 0xc6e NEW_2
	var_250_string = ""; // 0xc70 PushV
	func_3273(var_250_string); // 0xc71 NEW_2
	FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string); // 0xc73 Func
	var_251_bool = var_223_bool == 0; // 0xc75 Not
	if(var_251_bool == 0) goto Label_3198; // 0xc76 JumpB
	var_252_bool = var_0_bool; // 0xc77 PushT
	if(var_252_bool == 0) goto Label_3196; // 0xc78 JumpB
	var_225_object = 0; // 0xc79 SetNull
	goto Label_3224; // 0xc7a Jump
	
Label_3196:
	goto Label_3223; // 0xc7c Jump
	
Label_3223:
	goto Label_3128; // 0xc97 Jump
	
Label_3198:
	var_225_object = 0; // 0xc7e SetNull
	goto Label_3216; // 0xc7f Jump
	
Label_3216:
	var_230_object = 0; // 0xc90 SetNull
	goto Label_3222; // 0xc91 Jump
	
Label_3222:
	var_225_object = 0; // 0xc96 SetNull
	
Label_3200:
	var_253_int = 0; // 0xc80 PushI
	KillTimer(var_253_int); // 0xc81 Func
	var_254_float = 0.5; // 0xc83 PushF
	Sleep(var_254_float, var_223_bool); // 0xc84 Func
	var_255_bool = var_223_bool == 0; // 0xc86 Not
	if(var_255_bool == 0) goto Label_3212; // 0xc87 JumpB
	var_256_bool = var_0_bool; // 0xc88 PushT
	if(var_256_bool == 0) goto Label_3212; // 0xc89 JumpB
	var_225_object = 0; // 0xc8a SetNull
	goto Label_3224; // 0xc8b Jump
	
Label_3212:
	var_257_int = 0; // 0xc8c PushI
	var_258_float = 0.3; // 0xc8d PushF
	SetTimer(var_257_int, var_258_float); // 0xc8e Func
	
Label_3218:
	var_259_int = 0; // 0xc92 PushI
	KillTimer(var_259_int); // 0xc93 Func
	goto Label_3224; // 0xc95 Jump
}


func_4661(var_27_object)
{
	var_28_object = Obj(); // 0x1236 PushV
	var_28_object = var_27_object; // 0x1237 Mov
	func_4702(var_27_object, var_28_object); // 0x1238 NEW_2
	return 0; // 0x123a Return
}


func_2614(var_0_bool, var_435_float, var_436_int)
{
	var_437_object = Obj(); var_438_float = 0; var_439_float = 0; var_440_object = Obj(); var_441_float = 0; var_442_float = 0; // 0xa36 PushV
	var_443_float = 0.9; // 0xa37 PushF
	var_444_float = var_435_float * var_443_float; // 0xa38 Mult
	GetVictim(var_444_float, var_440_object); // 0xa39 Func
	ReportAttack(var_0_bool); // 0xa3b Func
	var_445_bool = var_440_object == var_0_bool; // 0xa3d Eq
	if(var_445_bool == 0) goto Label_2651; // 0xa3e JumpB
	var_446_float = 0; var_447_object = Obj(); var_448_int = 0; // 0xa3f PushV
	var_447_object = var_440_object; // 0xa40 Mov
	var_448_int = var_436_int; // 0xa41 Mov
	func_2344(var_448_int); // 0xa42 NEW_2
	var_441_float = var_446_float; // 0xa43 Mov
	var_449_float = 0; var_450_object = Obj(); var_451_float = 0; var_452_int = 0; // 0xa45 PushV
	var_450_object = var_440_object; // 0xa46 Mov
	var_451_float = var_441_float; // 0xa47 Mov
	var_453_int = 0; var_454_object = Obj(); var_455_int = 0; // 0xa48 PushV
	var_454_object = var_440_object; // 0xa49 Mov
	var_455_int = var_436_int; // 0xa4a Mov
	func_2347(var_455_int); // 0xa4b NEW_2
	var_452_int = var_453_int; // 0xa4c Mov
	func_3321(var_449_float, var_450_object, var_451_float, var_452_int); // 0xa4e NEW_2
	var_442_float = var_449_float; // 0xa4f Mov
	var_510_int = 0; // 0xa51 PushV
	func_2997(var_510_int); // 0xa52 NEW_2
	ReportHit(var_0_bool, var_510_int, var_442_float, var_441_float); // 0xa54 Func
	var_511_object = Obj(); var_512_float = 0; // 0xa56 PushV
	var_511_object = var_440_object; // 0xa57 Mov
	var_512_float = var_442_float; // 0xa58 Mov
	func_3004(); // 0xa59 NEW_2
	
Label_2651:
	return 6; // 0xa5b Return
}


func_1594(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0x63a PushV
	var_42_bool = var_21_object == 0; // 0x63b NullEq
	if(var_42_bool == 0) goto Label_1602; // 0x63c JumpB
	var_43_string = ""; // 0x63d PushV
	var_43_string = "fdie"; // 0x63e MovS
	func_1685(var_43_string); // 0x63f NEW_2
	goto Label_1684; // 0x641 Jump
	
Label_1684:
	return 20; // 0x694 Return
	
Label_1602:
	GetPosition(var_32_cvector); // 0x642 ObjFunc
	GetPosition(var_33_cvector); // 0x644 Func
	GetDirection(var_34_cvector); // 0x646 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0x648 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0x649 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0x64a PushE
	var_77_float = var_75_float * var_76_float; // 0x64b Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0x64c PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0x64d PushE
	var_80_float = var_78_float * var_79_float; // 0x64e Mult
	var_81_int = var_77_float + var_80_float; // 0x64f Add
	var_82_int = 0; // 0x650 PushI
	var_83_bool = var_81_int >= var_82_int; // 0x651 GE
	if(var_83_bool == 0) goto Label_1621; // 0x652 JumpB
	var_36_string = "fdie"; // 0x653 MovS
	goto Label_1622; // 0x654 Jump
	
Label_1622:
	RemoveRTEnvelope(); // 0x656 Func
	SetDeathState(); // 0x658 Func
	Stop(); // 0x65a Func
	StopAsync(); // 0x65c Func
	var_37_object = var_21_object; // 0x65e Mov
	var_84_string = "GetScriptProperty"; // 0x65f PushS
	var_85_int = 2; // 0x660 PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0x661 FuncExist
	if(var_86_bool == 0) goto Label_1646; // 0x662 JumpB
	var_87_string = "Owner"; // 0x663 PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0x664 ObjFunc
	var_88_bool = var_38_bool; // 0x666 Push
	if(var_88_bool == 0) goto Label_1646; // 0x667 JumpB
	var_89_string = "Owner"; // 0x668 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0x669 ObjFunc
	var_90_bool = var_37_object == 0; // 0x66b NullEq
	if(var_90_bool == 0) goto Label_1646; // 0x66c JumpB
	var_37_object = var_21_object; // 0x66d Mov
	
Label_1646:
	var_91_string = "@GetEyesHeight"; // 0x66e PushS
	var_92_int = 1; // 0x66f PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0x670 FuncExist
	if(var_93_bool == 0) goto Label_1661; // 0x671 JumpB
	GetEyesHeight(var_40_float); // 0x672 ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0x674 MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0x675 PushE
	var_94_float = var_40_float; // 0x676 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0x677 PopE
	var_95_string = "head"; // 0x678 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0x679 Func
	var_39_bool = 1; // 0x67b MovB
	goto Label_1662; // 0x67c Jump
	
Label_1662:
	var_96_string = ""; // 0x67e PushV
	var_96_string = var_36_string; // 0x67f Mov
	func_3794(var_96_string); // 0x680 NEW_2
	var_97_string = "all"; // 0x682 PushS
	PlayAnimation(var_97_string, var_36_string); // 0x683 Func
	WaitForAnimEnd(); // 0x685 Func
	var_98_bool = var_39_bool; // 0x687 Push
	if(var_98_bool == 0) goto Label_1678; // 0x688 JumpB
	StopAsync(); // 0x689 Func
	var_99_string = "head"; // 0x68b PushS
	UnlookAsync(var_99_string); // 0x68c Func
	
Label_1678:
	var_100_string = "all"; // 0x68e PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0x68f Func
	RemoveEnvelope(); // 0x691 Func
	var_37_object = 0; // 0x693 SetNull
	
Label_1661:
	var_39_bool = 0; // 0x67d MovB
	
Label_1621:
	var_36_string = "bdie"; // 0x655 MovS
}


func_4667()
{
	return 0; // 0x123b Return
}


func_4668(var_24_bool)
{
	var_24_bool = 0; // 0x123d MovB
	return 0; // 0x123e Return
}


func_4671()
{
	return 0; // 0x1240 Return
}


func_4673(var_31_bool)
{
	var_31_bool = 0; // 0x1242 MovB
	return 0; // 0x1243 Return
}


func_4676()
{
	return 0; // 0x1245 Return
}


func_4678(var_35_bool)
{
	var_35_bool = 0; // 0x1247 MovB
	return 0; // 0x1248 Return
}


func_4681()
{
	return 0; // 0x124a Return
}


func_4683(var_26_bool)
{
	var_26_bool = 0; // 0x124c MovB
	return 0; // 0x124d Return
}


func_4686()
{
	return 0; // 0x124f Return
}


func_4688(var_112_int)
{
	var_112_int = 515564; // 0x1250 MovI
	return 0; // 0x1251 Return
}


func_4690(var_111_int)
{
	var_111_int = 503349; // 0x1252 MovI
	return 0; // 0x1253 Return
}


func_4692(var_113_string)
{
	var_113_string = "ui/NPC_Citizen2.png"; // 0x1254 MovS
	return 0; // 0x1255 Return
}


func_3669()
{
	var_246_bool = 0; var_247_bool = 0; // 0xe55 PushV
	CameraSwitchToNormal(); // 0xe56 Func
	var_248_bool = 0; // 0xe58 PushV
	func_4696(var_248_bool); // 0xe59 NEW_2
	if(var_248_bool == 0) goto Label_3677; // 0xe5b JumpB
	goto Label_3685; // 0xe5c Jump
	
Label_3685:
	return 2; // 0xe65 Return
	
Label_3677:
	var_249_string = "head"; // 0xe5d PushS
	HasAnimationTrack(var_247_bool, var_249_string); // 0xe5e Func
	var_250_bool = var_247_bool; // 0xe60 Push
	if(var_250_bool == 0) goto Label_3685; // 0xe61 JumpB
	var_251_string = "head"; // 0xe62 PushS
	UnlookAsync(var_251_string); // 0xe63 Func
}


func_4694(var_114_string)
{
	var_114_string = "ui/NPC_Citizen2_b.png"; // 0x1256 MovS
	return 0; // 0x1257 Return
}


func_4696(var_106_bool)
{
	var_106_bool = 0; // 0x1258 MovB
	return 0; // 0x1259 Return
}


func_4698()
{
	var_19_bool = GlobalVars[0]; // 0x125a PushGE
	var_19_bool = 0; // 0x125b MovB
	GlobalVars[0] = var_19_bool; // 0x125c PopGE
	return 0; // 0x125d Return
}


func_2653(var_0_bool, var_398_bool, var_399_float)
{
	var_400_int = 0; var_401_bool = 0; var_402_int = 0; var_403_string = ""; var_404_int = 0; var_405_bool = 0; var_406_int = 0; var_407_string = ""; // 0xa5d PushV
	func_2992(var_407_string); // 0xa5f NEW_2
	irand(var_404_int, var_407_string); // 0xa61 Func
	var_408_int = 1; // 0xa63 PushI
	var_404_int = var_404_int + var_408_int; // 0xa64 Add2
	Face(var_0_bool); // 0xa65 Func
	var_409_bool = 1; // 0xa67 PushB
	SetAttackState(var_409_bool); // 0xa68 Func
	func_3902(); // 0xa6b NEW_2
	var_414_string = "all"; // 0xa6d PushS
	var_415_string = "attack_begin"; // 0xa6e PushS
	var_416_int = var_415_string + var_404_int; // 0xa6f Add
	PlayAnimation(var_414_string, var_416_int); // 0xa70 Func
	WaitForAnimEnd(); // 0xa72 Func
	func_2960(var_406_int, var_407_string); // 0xa75 NEW_2
	var_432_bool = 0; var_433_object = Obj(); // 0xa77 PushV
	var_433_object = var_0_bool; // 0xa78 MovT
	func_3435(var_432_bool, var_433_object); // 0xa79 NEW_2
	var_434_bool = var_432_bool == 0; // 0xa7b Not
	if(var_434_bool == 0) goto Label_2689; // 0xa7c JumpB
	StopAsync(); // 0xa7d Func
	var_398_bool = 0; // 0xa7f MovB
	return 8; // 0xa80 Return
	
Label_2689:
	var_435_float = 0; var_436_int = 0; // 0xa81 PushV
	var_435_float = var_399_float; // 0xa82 Mov
	var_436_int = var_404_int; // 0xa83 Mov
	func_2614(var_407_string, var_435_float, var_436_int); // 0xa84 NEW_2
	var_513_string = "all"; // 0xa86 PushS
	var_514_string = "attack_middle"; // 0xa87 PushS
	var_515_int = var_514_string + var_404_int; // 0xa88 Add
	HasAnimation(var_405_bool, var_513_string, var_515_int); // 0xa89 Func
	var_516_bool = var_405_bool; // 0xa8b Push
	if(var_516_bool == 0) goto Label_2770; // 0xa8c JumpB
	func_3902(); // 0xa8e NEW_2
	var_517_string = "all"; // 0xa90 PushS
	var_518_string = "attack_middle"; // 0xa91 PushS
	var_519_int = var_518_string + var_404_int; // 0xa92 Add
	PlayAnimation(var_517_string, var_519_int); // 0xa93 Func
	WaitForAnimEnd(); // 0xa95 Func
	func_2992(var_407_string); // 0xa98 NEW_2
	var_520_bool = 0; var_521_object = Obj(); // 0xa9a PushV
	var_521_object = var_0_bool; // 0xa9b MovT
	func_3435(var_520_bool, var_521_object); // 0xa9c NEW_2
	var_522_bool = var_520_bool == 0; // 0xa9e Not
	if(var_522_bool == 0) goto Label_2724; // 0xa9f JumpB
	StopAsync(); // 0xaa0 Func
	var_398_bool = 0; // 0xaa2 MovB
	return 8; // 0xaa3 Return
	
Label_2724:
	var_523_float = 0; var_524_int = 0; // 0xaa4 PushV
	var_523_float = var_399_float; // 0xaa5 Mov
	var_524_int = var_404_int; // 0xaa6 Mov
	func_2614(var_407_string, var_523_float, var_524_int); // 0xaa7 NEW_2
	var_406_int = 1; // 0xaa9 MovI
	
Label_2730:
	var_525_string = "attack_middle"; // 0xaaa PushS
	var_526_int = var_525_string + var_404_int; // 0xaab Add
	var_527_string = "_"; // 0xaac PushS
	var_528_int = var_526_int + var_527_string; // 0xaad Add
	var_407_string = var_528_int + var_406_int; // 0xaae Add2
	var_529_string = "all"; // 0xaaf PushS
	HasAnimation(var_405_bool, var_529_string, var_407_string); // 0xab0 Func
	var_530_bool = var_405_bool == 0; // 0xab2 Not
	if(var_530_bool == 0) goto Label_2741; // 0xab3 JumpB
	goto Label_2770; // 0xab4 Jump
	
Label_2770:
	var_531_bool = 0; // 0xad2 PushB
	SetAttackState(var_531_bool); // 0xad3 Func
	var_532_string = "all"; // 0xad5 PushS
	var_533_string = "attack_end"; // 0xad6 PushS
	var_534_int = var_533_string + var_404_int; // 0xad7 Add
	PlayAnimation(var_532_string, var_534_int); // 0xad8 Func
	var_535_bool = 0; // 0xada PushV
	func_3006(var_535_bool); // 0xadb NEW_2
	if(var_535_bool == 0) goto Label_2788; // 0xadd JumpB
	var_536_bool = 0; var_537_float = 0; // 0xade PushV
	var_537_float = 0.75; // 0xadf MovF
	func_2790(var_536_bool, var_537_float); // 0xae0 NEW_2
	StopAsync(); // 0xae2 Func
	
Label_2788:
	var_398_bool = 1; // 0xae4 MovB
	return 8; // 0xae5 Return
	
Label_2741:
	func_3902(); // 0xab6 NEW_2
	var_545_string = "all"; // 0xab8 PushS
	PlayAnimation(var_545_string, var_407_string); // 0xab9 Func
	WaitForAnimEnd(); // 0xabb Func
	func_2992(var_407_string); // 0xabe NEW_2
	var_546_bool = 0; var_547_object = Obj(); // 0xac0 PushV
	var_547_object = var_0_bool; // 0xac1 MovT
	func_3435(var_546_bool, var_547_object); // 0xac2 NEW_2
	var_548_bool = var_546_bool == 0; // 0xac4 Not
	if(var_548_bool == 0) goto Label_2762; // 0xac5 JumpB
	StopAsync(); // 0xac6 Func
	var_398_bool = 0; // 0xac8 MovB
	return 8; // 0xac9 Return
	
Label_2762:
	var_549_float = 0; var_550_int = 0; // 0xaca PushV
	var_549_float = var_399_float; // 0xacb Mov
	var_550_int = var_404_int; // 0xacc Mov
	func_2614(var_407_string, var_549_float, var_550_int); // 0xacd NEW_2
	var_551_int = 1; // 0xacf PushI
	var_406_int = var_406_int + var_551_int; // 0xad0 Add2
	goto Label_2730; // 0xad1 Jump
}


func_4702(var_28_object, var_55_object)
{
	var_29_bool = 0; var_30_bool = 0; // 0x125e PushV
	var_31_bool = GlobalVars[0]; // 0x125f PushGE
	if(var_31_bool == 0) goto Label_4715; // 0x1260 JumpB
	IsOverrideActive(var_30_bool); // 0x1261 Func
	var_32_bool = var_30_bool == 0; // 0x1263 Not
	if(var_32_bool == 0) goto Label_4713; // 0x1264 JumpB
	var_33_object = Obj(); // 0x1265 PushV
	var_33_object = var_28_object; // 0x1266 Mov
	func_3994(var_33_object); // 0x1267 NEW_2
	
Label_4713:
	return 2; // 0x1269 Return
	
Label_4715:
	var_40_bool = 0; var_41_object = Obj(); // 0x126b PushV
	var_41_object = var_28_object; // 0x126c Mov
	func_4748(var_40_bool, var_41_object); // 0x126d NEW_2
	var_51_bool = var_40_bool == 0; // 0x126f Not
	if(var_51_bool == 0) goto Label_4747; // 0x1270 JumpB
	var_52_int = 1000; // 0x1271 PushI
	var_53_int = 0; var_54_object = Obj(); // 0x1272 PushV
	var_54_object = var_28_object; // 0x1273 Mov
	TaskCall(1); // 0x1274 TaskCall
	func_40(var_55_object, var_53_int, var_54_object); // 0x1275 NEW_2
	TaskReturn(); // 0x1276 TaskReturn
	var_252_bool = var_52_int == var_55_object; // 0x1278 Eq
	if(var_252_bool == 0) goto Label_4747; // 0x1279 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x127a PushV
	var_254_object = var_28_object; // 0x127b Mov
	func_3686(var_253_bool, var_254_object); // 0x127c NEW_2
	var_284_bool = var_253_bool == 0; // 0x127e Not
	if(var_284_bool == 0) goto Label_4737; // 0x127f JumpB
	return 2; // 0x1280 Return
	
Label_4737:
	var_285_object = Obj(); // 0x1281 PushV
	var_285_object = var_28_object; // 0x1282 Mov
	TaskCall(0); // 0x1283 TaskCall
	func_0(var_285_object); // 0x1284 NEW_2
	TaskReturn(); // 0x1285 TaskReturn
	var_292_object = Obj(); // 0x1287 PushV
	var_292_object = var_28_object; // 0x1288 Mov
	func_3741(); // 0x1289 NEW_2
	
Label_4747:
	return 2; // 0x128b Return
}


func_3686(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj(); var_257_float = 0; // 0xe67 PushV
	var_256_object = var_254_object; // 0xe68 Mov
	var_257_float = 70; // 0xe69 MovI
	func_3694(var_256_object, var_257_float); // 0xe6a NEW_2
	var_253_bool = var_255_bool; // 0xe6b Mov
	return 0; // 0xe6d Return
}


func_3694(var_255_bool, var_257_float)
{
	var_258_float = 0; var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_bool = 0; var_266_float = 0; var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_cvector = CVector(0,0,0); var_270_cvector = CVector(0,0,0); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_bool = 0; // 0xe6e PushV
	GetPosition(var_267_cvector); // 0xe6f ObjFunc
	GetEyesHeight(var_266_float); // 0xe71 ObjFunc
	var_274_float = GetByIndex(var_267_cvector, 1); // 0xe73 PushE
	var_274_float = var_274_float + var_266_float; // 0xe74 Add2
	SetByIndex(var_267_cvector, 1) = var_274_float; // 0xe75 PopE
	GetPosition(var_268_cvector); // 0xe76 Func
	GetEyesHeight(var_266_float); // 0xe78 Func
	var_275_float = GetByIndex(var_268_cvector, 1); // 0xe7a PushE
	var_275_float = var_275_float + var_266_float; // 0xe7b Add2
	SetByIndex(var_268_cvector, 1) = var_275_float; // 0xe7c PopE
	var_269_cvector = var_267_cvector - var_268_cvector; // 0xe7d Sub2
	var_276_float = GetByIndex(var_269_cvector, 1); // 0xe7e PushE
	var_276_float = 0; // 0xe7f MovI
	SetByIndex(var_269_cvector, 1) = var_276_float; // 0xe80 PopE
	var_277_int = var_269_cvector | var_269_cvector; // 0xe81 Or
	var_278_float = sqrt(var_277_int); // 0xe82 Sqrt
	var_269_cvector = var_269_cvector / var_269_cvector; // 0xe83 Div2
	var_270_cvector = -var_269_cvector; // 0xe84 Neg2
	var_279_float = var_269_cvector * var_257_float; // 0xe85 Mult
	var_280_cvector = CVector(0.0, 10.0, 0.0); // 0xe86 PushVec
	var_271_cvector = var_279_float - var_280_cvector; // 0xe87 Sub2
	var_272_cvector = var_268_cvector + var_271_cvector; // 0xe88 Add2
	IsOverrideActive(var_273_bool); // 0xe89 Func
	var_281_bool = var_273_bool; // 0xe8b Push
	if(var_281_bool == 0) goto Label_3727; // 0xe8c JumpB
	var_255_bool = 0; // 0xe8d MovB
	return 16; // 0xe8e Return
	
Label_3727:
	StopWorld(); // 0xe8f Func
	CameraTransit(var_272_cvector, var_270_cvector); // 0xe91 Func
	var_282_float = GetByIndex(var_271_cvector, 0); // 0xe93 PushE
	var_283_float = GetByIndex(var_271_cvector, 2); // 0xe94 PushE
	Rotate(var_282_float, var_283_float); // 0xe95 Func
	CameraWaitForPlayFinish(); // 0xe97 Func
	ResumeWorld(); // 0xe99 Func
	var_255_bool = 1; // 0xe9b MovB
	return 16; // 0xe9c Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_124_object, var_125_object)
{
	var_0_bool = var_125_object; // 0x73 TMov
	var_1_object = var_124_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_130_int = 1; // 0x76 PushI
	if(var_130_int == 0) goto Label_263; // 0x77 JumpB
	var_131_bool = 0; // 0x78 PushV
	var_131_bool = 0; // 0x79 MovB
	var_132_bool = 0; var_133_object = Obj(); // 0x7a PushV
	var_133_object = var_1_object; // 0x7b MovT
	func_3925(var_133_object); // 0x7c NEW_2
	if(var_132_bool == 0) goto Label_133; // 0x7e JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x7f PushV
	var_141_object = var_1_object; // 0x80 MovT
	func_3947(var_140_bool, var_141_object); // 0x81 NEW_2
	if(var_140_bool == 0) goto Label_133; // 0x83 JumpB
	var_131_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_131_bool == 0) goto Label_159; // 0x85 JumpB
	var_151_string = ""; // 0x86 PushV
	var_151_string = "Neutral"; // 0x87 MovS
	func_293(var_125_object, var_151_string); // 0x88 NEW_2
	var_168_int = 543329; // 0x8a PushI
	SetMessage(var_168_int); // 0x8b TObjFunc
	ClearReplies(); // 0x8d TObjFunc
	var_169_int = 543330; // 0x8f PushI
	var_170_int = 45790; // 0x90 PushI
	var_171_int = 45787; // 0x91 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x92 TObjFunc
	var_172_int = 543332; // 0x94 PushI
	var_173_int = 45790; // 0x95 PushI
	var_174_int = 45789; // 0x96 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x97 TObjFunc
	var_175_int = 543331; // 0x99 PushI
	var_176_int = -1; // 0x9a PushI
	var_177_int = 45788; // 0x9b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x9c TObjFunc
	goto Label_263; // 0x9e Jump
	
Label_263:
	var_178_bool = 0; // 0x107 PushV
	func_4696(var_178_bool); // 0x108 NEW_2
	if(var_178_bool == 0) goto Label_278; // 0x10a JumpB
	
Label_267:
	lshWaitForAnimEnd(); // 0x10b Func
	var_179_object = var_3_object; // 0x10d PushT
	if(var_179_object == 0) goto Label_272; // 0x10e JumpB
	goto Label_277; // 0x10f Jump
	
Label_277:
	goto Label_292; // 0x115 Jump
	
Label_292:
	return 0; // 0x124 Return
	
Label_272:
	var_180_string = ""; // 0x110 PushV
	var_180_string = var_2_object; // 0x111 MovT
	func_3745(var_180_string); // 0x112 NEW_2
	goto Label_267; // 0x114 Jump
	
Label_278:
	var_191_string = "all"; // 0x116 PushS
	var_192_string = "idle"; // 0x117 PushS
	PlayAnimation(var_191_string, var_192_string); // 0x118 Func
	
Label_282:
	WaitForAnimEnd(); // 0x11a Func
	var_193_object = var_3_object; // 0x11c PushT
	if(var_193_object == 0) goto Label_287; // 0x11d JumpB
	goto Label_292; // 0x11e Jump
	
Label_287:
	var_194_string = "all"; // 0x11f PushS
	var_195_string = "idle"; // 0x120 PushS
	PlayAnimation(var_194_string, var_195_string); // 0x121 Func
	goto Label_282; // 0x123 Jump
	
Label_159:
	var_196_bool = 0; // 0x9f PushV
	var_196_bool = 0; // 0xa0 MovB
	var_197_bool = 0; var_198_object = Obj(); // 0xa1 PushV
	var_198_object = var_1_object; // 0xa2 MovT
	func_3925(var_198_object); // 0xa3 NEW_2
	if(var_197_bool == 0) goto Label_173; // 0xa5 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0xa6 PushV
	var_200_object = var_1_object; // 0xa7 MovT
	func_3947(var_199_bool, var_200_object); // 0xa8 NEW_2
	var_201_bool = var_199_bool == 0; // 0xaa Not
	if(var_201_bool == 0) goto Label_173; // 0xab JumpB
	var_196_bool = 1; // 0xac MovB
	
Label_173:
	if(var_196_bool == 0) goto Label_189; // 0xad JumpB
	var_202_string = ""; // 0xae PushV
	var_202_string = "Neutral"; // 0xaf MovS
	func_293(var_125_object, var_202_string); // 0xb0 NEW_2
	var_203_int = 543328; // 0xb2 PushI
	SetMessage(var_203_int); // 0xb3 TObjFunc
	ClearReplies(); // 0xb5 TObjFunc
	var_204_int = 543336; // 0xb7 PushI
	var_205_int = -1; // 0xb8 PushI
	var_206_int = 45794; // 0xb9 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xba TObjFunc
	goto Label_263; // 0xbc Jump
	
Label_189:
	var_207_string = ""; // 0xbd PushV
	var_207_string = "Neutral"; // 0xbe MovS
	func_293(var_125_object, var_207_string); // 0xbf NEW_2
	var_208_int = 537969; // 0xc1 PushI
	SetMessage(var_208_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_209_bool = 0; // 0xc6 PushV
	var_209_bool = 0; // 0xc7 MovB
	var_210_bool = 0; var_211_object = Obj(); // 0xc8 PushV
	var_211_object = var_1_object; // 0xc9 MovT
	func_3937(var_210_bool, var_211_object); // 0xca NEW_2
	if(var_210_bool == 0) goto Label_211; // 0xcc JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0xcd PushV
	var_217_object = var_1_object; // 0xce MovT
	func_3913(var_217_object); // 0xcf NEW_2
	if(var_216_bool == 0) goto Label_211; // 0xd1 JumpB
	var_209_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_209_bool == 0) goto Label_217; // 0xd3 JumpB
	var_222_int = 537970; // 0xd4 PushI
	var_223_int = 39833; // 0xd5 PushI
	var_224_int = 39832; // 0xd6 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xd7 TObjFunc
	
Label_217:
	var_225_bool = 0; // 0xd9 PushV
	var_225_bool = 0; // 0xda MovB
	var_226_bool = 0; var_227_object = Obj(); // 0xdb PushV
	var_227_object = var_1_object; // 0xdc MovT
	func_3937(var_226_bool, var_227_object); // 0xdd NEW_2
	if(var_226_bool == 0) goto Label_230; // 0xdf JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0xe0 PushV
	var_229_object = var_1_object; // 0xe1 MovT
	func_3913(var_229_object); // 0xe2 NEW_2
	if(var_228_bool == 0) goto Label_230; // 0xe4 JumpB
	var_225_bool = 1; // 0xe5 MovB
	
Label_230:
	if(var_225_bool == 0) goto Label_236; // 0xe6 JumpB
	var_230_int = 537995; // 0xe7 PushI
	var_231_int = 39861; // 0xe8 PushI
	var_232_int = 39860; // 0xe9 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xea TObjFunc
	
Label_236:
	var_233_bool = 0; // 0xec PushV
	var_233_bool = 0; // 0xed MovB
	var_234_bool = 0; var_235_object = Obj(); // 0xee PushV
	var_235_object = var_1_object; // 0xef MovT
	func_3937(var_234_bool, var_235_object); // 0xf0 NEW_2
	if(var_234_bool == 0) goto Label_249; // 0xf2 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0xf3 PushV
	var_237_object = var_1_object; // 0xf4 MovT
	func_3913(var_237_object); // 0xf5 NEW_2
	if(var_236_bool == 0) goto Label_249; // 0xf7 JumpB
	var_233_bool = 1; // 0xf8 MovB
	
Label_249:
	if(var_233_bool == 0) goto Label_255; // 0xf9 JumpB
	var_238_int = 538003; // 0xfa PushI
	var_239_int = 39869; // 0xfb PushI
	var_240_int = 39868; // 0xfc PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xfd TObjFunc
	
Label_255:
	var_241_int = 538126; // 0xff PushI
	var_242_int = -1; // 0x100 PushI
	var_243_int = 39997; // 0x101 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x102 TObjFunc
	goto Label_263; // 0x104 Jump
}


func_4748(var_40_bool, var_41_object)
{
	var_42_float = 0; var_43_float = 0; // 0x128c PushV
	var_44_bool = 0; var_45_object = Obj(); // 0x128d PushV
	var_45_object = var_41_object; // 0x128e Mov
	func_3304(var_44_bool, var_45_object); // 0x128f NEW_2
	if(var_44_bool == 0) goto Label_4762; // 0x1291 JumpB
	var_48_string = "reputation"; // 0x1292 PushS
	GetProperty(var_48_string, var_43_float); // 0x1293 ObjFunc
	var_49_float = 0.4; // 0x1295 PushF
	var_50_bool = var_43_float < var_49_float; // 0x1296 LT
	if(var_50_bool == 0) goto Label_4762; // 0x1297 JumpB
	var_40_bool = 1; // 0x1298 MovB
	return 2; // 0x1299 Return
	
Label_4762:
	var_40_bool = 0; // 0x129a MovB
	return 2; // 0x129b Return
}


func_1685(var_43_string)
{
	RemoveRTEnvelope(); // 0x696 Func
	SetDeathState(); // 0x698 Func
	Stop(); // 0x69a Func
	StopAsync(); // 0x69c Func
	StopSecondaryAnimation(); // 0x69e Func
	var_44_string = ""; // 0x6a0 PushV
	var_44_string = var_43_string; // 0x6a1 Mov
	func_3794(var_44_string); // 0x6a2 NEW_2
	var_73_string = "all"; // 0x6a4 PushS
	PlayAnimation(var_73_string, var_43_string); // 0x6a5 Func
	WaitForAnimEnd(); // 0x6a7 Func
	var_74_string = "all"; // 0x6a9 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0x6aa Func
	RemoveEnvelope(); // 0x6ac Func
	return 0; // 0x6ae Return
}


func_3226(var_0_bool, var_1_object, var_26_int)
{
	var_27_int = 0; // 0xc9b PushI
	var_28_bool = var_26_int != var_27_int; // 0xc9c Neq
	if(var_28_bool == 0) goto Label_3231; // 0xc9d JumpB
	return 0; // 0xc9e Return
	
Label_3231:
	var_29_bool = 0; var_30_object = Obj(); // 0xc9f PushV
	var_30_object = var_1_object; // 0xca0 MovT
	func_3264(var_29_bool, var_30_object); // 0xca1 NEW_2
	var_65_bool = var_29_bool == 0; // 0xca3 Not
	if(var_65_bool == 0) goto Label_3238; // 0xca4 JumpB
	var_0_bool = 1; // 0xca5 TMovB
	
Label_3238:
	var_66_int = 0; // 0xca6 PushI
	KillTimer(var_66_int); // 0xca7 Func
	Stop(); // 0xca9 Func
	return 0; // 0xcab Return
}


func_4764(var_90_bool)
{
	var_90_bool = 1; // 0x129d MovB
	return 0; // 0x129e Return
}


func_3741()
{
	CameraSwitchToNormal(); // 0xe9e Func
	return 0; // 0xea0 Return
}


func_4254(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0; // 0x109e PushV
	GetInvItemByName(var_141_int, var_139_string); // 0x109f Func
	var_138_int = var_141_int; // 0x10a1 Mov
	return 2; // 0x10a2 Return
}


func_4767(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0; // 0x12a0 PushV
	var_28_object = var_24_object; // 0x12a1 Mov
	var_29_object = var_25_object; // 0x12a2 Mov
	var_30_float = 700.0; // 0x12a3 MovF
	var_31_bool = var_26_bool; // 0x12a4 Mov
	func_4578(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool); // 0x12a5 NEW_2
	var_23_bool = var_27_bool; // 0x12a6 Mov
	return 0; // 0x12a8 Return
}


func_3745(var_180_string)
{
	var_181_bool = 0; var_182_float = 0; var_183_float = 0; var_184_bool = 0; var_185_float = 0; var_186_float = 0; // 0xea1 PushV
	lshHasAnimation(var_184_bool, var_180_string); // 0xea2 Func
	var_187_bool = var_184_bool; // 0xea4 Push
	if(var_187_bool == 0) goto Label_3756; // 0xea5 JumpB
	lshGetAnimTimes(var_180_string, var_185_float, var_186_float); // 0xea6 Func
	var_188_bool = 0; // 0xea8 PushB
	lshPlayAnimation(var_185_float, var_186_float, var_188_bool); // 0xea9 Func
	goto Label_3760; // 0xeab Jump
	
Label_3760:
	return 6; // 0xeb0 Return
	
Label_3756:
	var_189_string = "Can't find lsh animation : "; // 0xeac PushS
	var_190_int = var_189_string + var_180_string; // 0xead Add
	Trace(var_190_int); // 0xeae Func
}


func_4259(var_19_object)
{
	var_20_object = Obj(); // 0x10a4 PushV
	var_20_object = var_19_object; // 0x10a5 Mov
	TaskCall(3); // 0x10a6 TaskCall
	func_1561(var_20_object); // 0x10a7 NEW_2
	TaskReturn(); // 0x10a8 TaskReturn
	return 0; // 0x10aa Return
}


func_4777(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0x12aa PushV
	var_103_object = var_101_object; // 0x12ab Mov
	func_3304(var_102_bool, var_103_object); // 0x12ac NEW_2
	if(var_102_bool == 0) goto Label_4794; // 0x12ae JumpB
	var_106_object = Obj(); // 0x12af PushV
	func_3835(var_106_object); // 0x12b0 NEW_2
	var_109_float = -0.04; // 0x12b2 PushF
	var_110_bool = 1; // 0x12b3 PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0x12b4 Func
	var_111_bool = 0; // 0x12b6 PushV
	var_111_bool = 1; // 0x12b7 MovB
	func_4079(var_111_bool); // 0x12b8 NEW_2
	
Label_4794:
	func_4055(); // 0x12bb NEW_2
	var_245_bool = GlobalVars[0]; // 0x12bd PushGE
	var_245_bool = 1; // 0x12be MovB
	GlobalVars[0] = var_245_bool; // 0x12bf PopGE
	var_246_int = 50; // 0x12c0 PushI
	var_247_int = 40; // 0x12c1 PushI
	SetRTEnvelope(var_246_int, var_247_int); // 0x12c2 Func
	return 0; // 0x12c4 Return
}


func_3248(var_0_bool)
{
	var_0_bool = 1; // 0xcb0 TMovB
	var_22_int = 0; // 0xcb1 PushI
	KillTimer(var_22_int); // 0xcb2 Func
	Stop(); // 0xcb4 Func
	return 0; // 0xcb6 Return
}


func_3761(var_155_string, var_156_bool)
{
	var_159_bool = 0; var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_float = 0; var_164_float = 0; // 0xeb1 PushV
	lshHasAnimation(var_162_bool, var_155_string); // 0xeb2 Func
	var_165_bool = var_162_bool; // 0xeb4 Push
	if(var_165_bool == 0) goto Label_3771; // 0xeb5 JumpB
	lshGetAnimTimes(var_155_string, var_163_float, var_164_float); // 0xeb6 Func
	lshPlayAnimation(var_163_float, var_164_float, var_156_bool); // 0xeb8 Func
	goto Label_3775; // 0xeba Jump
	
Label_3775:
	return 6; // 0xebf Return
	
Label_3771:
	var_166_string = "Can't find lsh animation : "; // 0xebb PushS
	var_167_int = var_166_string + var_155_string; // 0xebc Add
	Trace(var_167_int); // 0xebd Func
}


func_3776(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0xec0 PushV
	GetEyesHeight(var_25_float); // 0xec1 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0xec3 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0xec4 PushE
	var_27_float = var_25_float; // 0xec5 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0xec6 PopE
	var_28_string = "head"; // 0xec7 PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0xec8 Func
	return 4; // 0xeca Return
}


func_3264(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0xcc1 PushV
	var_32_object = var_30_object; // 0xcc2 Mov
	func_3435(var_31_bool, var_32_object); // 0xcc3 NEW_2
	var_29_bool = var_31_bool; // 0xcc4 Mov
	return 0; // 0xcc6 Return
}


func_1732()
{
	var_20_bool = 0; // 0x6c4 PushV
	func_3596(var_20_bool); // 0x6c5 NEW_2
	var_23_bool = var_20_bool == 0; // 0x6c7 Not
	if(var_23_bool == 0) goto Label_1740; // 0x6c8 JumpB
	func_4667(); // 0x6ca NEW_2
	
Label_1740:
	return 0; // 0x6cc Return
}


func_3271(var_249_string)
{
	var_249_string = "walk"; // 0xcc7 MovS
	return 0; // 0xcc8 Return
}


func_3273(var_250_string)
{
	var_250_string = "run"; // 0xcc9 MovS
	return 0; // 0xcca Return
}


func_2250()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0; // 0x8ca PushV
	WaitForAnimEnd(); // 0x8cb Func
	var_65_bool = 0; // 0x8cd PushV
	func_3596(var_65_bool); // 0x8ce NEW_2
	var_66_bool = var_65_bool == 0; // 0x8d0 Not
	if(var_66_bool == 0) goto Label_2259; // 0x8d1 JumpB
	return 14; // 0x8d2 Return
	
Label_2259:
	var_67_int = 0; // 0x8d3 PushV
	func_4439(var_67_int); // 0x8d4 NEW_2
	var_58_int = var_67_int; // 0x8d5 Mov
	var_59_int = 0; // 0x8d7 MovI
	
Label_2264:
	var_80_bool = 0; // 0x8d8 PushV
	var_80_bool = 0; // 0x8d9 MovB
	var_81_int = 5; // 0x8da PushI
	var_82_bool = var_59_int < var_81_int; // 0x8db LT
	if(var_82_bool == 0) goto Label_2274; // 0x8dc JumpB
	var_83_bool = 0; // 0x8dd PushV
	func_3596(var_83_bool); // 0x8de NEW_2
	if(var_83_bool == 0) goto Label_2274; // 0x8e0 JumpB
	var_80_bool = 1; // 0x8e1 MovB
	
Label_2274:
	if(var_80_bool == 0) goto Label_2326; // 0x8e2 JumpB
	var_84_int = 3; // 0x8e3 PushI
	irand(var_60_int, var_84_int); // 0x8e4 Func
	var_85_int = 0; // 0x8e6 PushI
	var_86_bool = var_60_int == var_85_int; // 0x8e7 Eq
	if(var_86_bool == 0) goto Label_2298; // 0x8e8 JumpB
	var_87_int = var_58_int; // 0x8e9 Push
	if(var_87_int == 0) goto Label_2297; // 0x8ea JumpB
	irand(var_61_int, var_58_int); // 0x8eb Func
	var_88_string = "all"; // 0x8ed PushS
	var_89_string = ""; var_90_int = 0; // 0x8ee PushV
	var_90_int = var_61_int; // 0x8ef Mov
	func_4432(var_89_string, var_90_int); // 0x8f0 NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0x8f2 Func
	WaitForAnimEnd(var_62_bool); // 0x8f4 Func
	var_91_bool = var_62_bool == 0; // 0x8f6 Not
	if(var_91_bool == 0) goto Label_2297; // 0x8f7 JumpB
	goto Label_2326; // 0x8f8 Jump
	
Label_2326:
	ResetAAS(); // 0x916 Func
	return 14; // 0x918 Return
	
Label_2297:
	goto Label_2315; // 0x8f9 Jump
	
Label_2315:
	var_92_bool = 0; // 0x90b PushV
	func_2329(var_92_bool); // 0x90c NEW_2
	var_93_bool = var_92_bool == 0; // 0x90e Not
	if(var_93_bool == 0) goto Label_2321; // 0x90f JumpB
	goto Label_2326; // 0x910 Jump
	
Label_2321:
	ResetAAS(); // 0x911 Func
	var_94_int = 1; // 0x913 PushI
	var_59_int = var_59_int + var_94_int; // 0x914 Add2
	goto Label_2264; // 0x915 Jump
	
Label_2298:
	var_95_int = 1; // 0x8fa PushI
	var_96_bool = var_60_int == var_95_int; // 0x8fb Eq
	if(var_96_bool == 0) goto Label_2312; // 0x8fc JumpB
	var_97_int = 4; // 0x8fd PushI
	rand(var_63_float, var_97_int); // 0x8fe Func
	var_98_int = 1; // 0x900 PushI
	var_99_int = var_63_float + var_98_int; // 0x901 Add
	Sleep(var_99_int, var_64_bool); // 0x902 Func
	var_100_bool = var_64_bool == 0; // 0x904 Not
	if(var_100_bool == 0) goto Label_2311; // 0x905 JumpB
	goto Label_2326; // 0x906 Jump
	
Label_2311:
	goto Label_2315; // 0x907 Jump
	
Label_2312:
	var_101_int = var_59_int; // 0x908 Push
	if(var_101_int == 0) goto Label_2315; // 0x909 JumpB
	goto Label_2326; // 0x90a Jump
}


func_3787()
{
	var_21_bool = 0; // 0xecb PushV
	func_4696(var_21_bool); // 0xecc NEW_2
	if(var_21_bool == 0) goto Label_3793; // 0xece JumpB
	lshStopSpeech(); // 0xecf Func
	
Label_3793:
	return 0; // 0xed1 Return
}


func_3275(var_477_string, var_478_int)
{
	var_479_int = 2; // 0xccc PushI
	var_480_bool = var_478_int == var_479_int; // 0xccd Eq
	if(var_480_bool == 0) goto Label_3282; // 0xcce JumpB
	var_477_string = "fire"; // 0xccf MovS
	return 0; // 0xcd0 Return
	
Label_3282:
	var_481_int = 1; // 0xcd2 PushI
	var_482_bool = var_478_int == var_481_int; // 0xcd3 Eq
	if(var_482_bool == 0) goto Label_3287; // 0xcd4 JumpB
	var_477_string = "bullet"; // 0xcd5 MovS
	return 0; // 0xcd6 Return
	
Label_3287:
	var_477_string = "phys"; // 0xcd7 MovS
	return 0; // 0xcd8 Return
}


func_4304(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0x10d1 PushS
	var_26_bool = var_24_string == var_25_string; // 0x10d2 Eq
	if(var_26_bool == 0) goto Label_4315; // 0x10d3 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x10d4 PushV
	var_28_object = var_23_object; // 0x10d5 Mov
	func_4668(var_28_object); // 0x10d6 NEW_2
	var_22_bool = var_27_bool; // 0x10d7 Mov
	return 0; // 0x10d9 Return
	
Label_4315:
	var_29_string = "player_shot"; // 0x10db PushS
	var_30_bool = var_24_string == var_29_string; // 0x10dc Eq
	if(var_30_bool == 0) goto Label_4325; // 0x10dd JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x10de PushV
	var_32_object = var_23_object; // 0x10df Mov
	func_4673(var_32_object); // 0x10e0 NEW_2
	var_22_bool = var_31_bool; // 0x10e1 Mov
	return 0; // 0x10e3 Return
	
Label_4325:
	var_33_string = "battle"; // 0x10e5 PushS
	var_34_bool = var_24_string == var_33_string; // 0x10e6 Eq
	if(var_34_bool == 0) goto Label_4334; // 0x10e7 JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x10e8 PushV
	var_36_object = var_23_object; // 0x10e9 Mov
	func_4678(var_36_object); // 0x10ea NEW_2
	var_22_bool = var_35_bool; // 0x10eb Mov
	return 0; // 0x10ed Return
	
Label_4334:
	var_22_bool = 0; // 0x10ee MovB
	return 0; // 0x10ef Return
}


func_3794(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0xed2 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0xed3 Func
	var_61_bool = var_53_bool == 0; // 0xed5 Not
	if(var_61_bool == 0) goto Label_3819; // 0xed6 JumpB
	var_54_int = 0; // 0xed7 MovI
	
Label_3800:
	var_62_int = 1; // 0xed8 PushI
	var_63_int = var_54_int + var_62_int; // 0xed9 Add
	var_64_int = var_44_string + var_63_int; // 0xeda Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0xedb Func
	var_65_bool = var_55_bool == 0; // 0xedd Not
	if(var_65_bool == 0) goto Label_3808; // 0xede JumpB
	goto Label_3811; // 0xedf Jump
	
Label_3811:
	var_66_bool = var_54_int == 0; // 0xee3 Not
	if(var_66_bool == 0) goto Label_3814; // 0xee4 JumpB
	return 16; // 0xee5 Return
	
Label_3814:
	irand(var_56_int, var_54_int); // 0xee6 Func
	var_67_int = 1; // 0xee8 PushI
	var_68_int = var_56_int + var_67_int; // 0xee9 Add
	var_44_string = var_44_string + var_68_int; // 0xeea Add2
	
Label_3819:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0xeeb Func
	var_69_bool = var_57_bool; // 0xeed Push
	if(var_69_bool == 0) goto Label_3834; // 0xeee JumpB
	GetEyesHeight(var_58_float); // 0xeef Func
	GetDirection(var_59_cvector); // 0xef1 Func
	var_70_int = 50; // 0xef3 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0xef4 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0xef5 PushE
	var_71_float = var_71_float + var_58_float; // 0xef6 Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0xef7 PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0xef8 Func
	
Label_3834:
	return 16; // 0xefa Return
	
Label_3808:
	var_72_int = 1; // 0xee0 PushI
	var_54_int = var_54_int + var_72_int; // 0xee1 Add2
	goto Label_3800; // 0xee2 Jump
}


func_3289(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0xcd9 PushV
	GetPosition(var_56_cvector); // 0xcda Func
	GetPosition(var_57_cvector); // 0xcdc ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0xcde Sub2
	return 4; // 0xcdf Return
}


func_3296(var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0xce0 PushV
	GetPosition(var_80_cvector); // 0xce1 Func
	GetPosition(var_81_cvector); // 0xce3 ObjFunc
	var_82_cvector = var_81_cvector - var_80_cvector; // 0xce5 Sub2
	var_75_float = var_82_cvector | var_82_cvector; // 0xce6 Or2
	return 6; // 0xce7 Return
}


func_2790(var_536_bool, var_537_float)
{
	var_538_float = 0; var_539_bool = 0; var_540_float = 0; var_541_bool = 0; // 0xae6 PushV
	rand(var_540_float); // 0xae7 Func
	var_542_bool = var_540_float < var_537_float; // 0xae9 LT
	if(var_542_bool == 0) goto Label_2810; // 0xaea JumpB
	
Label_2795:
	IsAnimationPlaying(var_541_bool); // 0xaeb Func
	var_543_bool = var_541_bool == 0; // 0xaed Not
	if(var_543_bool == 0) goto Label_2800; // 0xaee JumpB
	goto Label_2809; // 0xaef Jump
	
Label_2809:
	goto Label_2815; // 0xaf9 Jump
	
Label_2815:
	var_536_bool = 0; // 0xaff MovB
	return 4; // 0xb00 Return
	
Label_2800:
	var_544_bool = 0; // 0xaf0 PushV
	func_2888(var_544_bool); // 0xaf1 NEW_2
	if(var_544_bool == 0) goto Label_2806; // 0xaf3 JumpB
	var_536_bool = 1; // 0xaf4 MovB
	return 4; // 0xaf5 Return
	
Label_2806:
	sync(); // 0xaf6 Func
	goto Label_2795; // 0xaf8 Jump
	
Label_2810:
	WaitForAnimEnd(); // 0xafa Func
	func_2992(var_541_bool); // 0xafd NEW_2
}


func_3304(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0xce8 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0xce9 Func
	var_102_bool = var_105_bool; // 0xceb Mov
	return 2; // 0xcec Return
}


func_3309(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0xced PushV
	var_58_string = "HasProperty"; // 0xcee PushS
	var_59_int = 2; // 0xcef PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0xcf0 FuncExist
	var_61_bool = var_60_bool == 0; // 0xcf1 Not
	if(var_61_bool == 0) goto Label_3317; // 0xcf2 JumpB
	var_53_bool = 0; // 0xcf3 MovB
	return 2; // 0xcf4 Return
	
Label_3317:
	HasProperty(var_55_string, var_57_bool); // 0xcf5 ObjFunc
	var_53_bool = var_57_bool; // 0xcf7 Mov
	return 2; // 0xcf8 Return
}


func_4336(var_37_object, var_38_string)
{
	var_39_string = "unholster"; // 0x10f1 PushS
	var_40_bool = var_38_string == var_39_string; // 0x10f2 Eq
	if(var_40_bool == 0) goto Label_4345; // 0x10f3 JumpB
	var_41_object = Obj(); // 0x10f4 PushV
	var_41_object = var_37_object; // 0x10f5 Mov
	func_4671(); // 0x10f6 NEW_2
	goto Label_4360; // 0x10f8 Jump
	
Label_4360:
	return 0; // 0x1108 Return
	
Label_4345:
	var_42_string = "player_shot"; // 0x10f9 PushS
	var_43_bool = var_38_string == var_42_string; // 0x10fa Eq
	if(var_43_bool == 0) goto Label_4353; // 0x10fb JumpB
	var_44_object = Obj(); // 0x10fc PushV
	var_44_object = var_37_object; // 0x10fd Mov
	func_4676(); // 0x10fe NEW_2
	goto Label_4360; // 0x1100 Jump
	
Label_4353:
	var_45_string = "battle"; // 0x1101 PushS
	var_46_bool = var_38_string == var_45_string; // 0x1102 Eq
	if(var_46_bool == 0) goto Label_4360; // 0x1103 JumpB
	var_47_object = Obj(); // 0x1104 PushV
	var_47_object = var_37_object; // 0x1105 Mov
	func_4681(); // 0x1106 NEW_2
}


func_3321(var_449_float, var_450_object, var_451_float, var_452_int)
{
	var_456_int = 0; var_457_string = ""; var_458_int = 0; var_459_float = 0; var_460_float = 0; var_461_float = 0; var_462_int = 0; var_463_string = ""; var_464_int = 0; var_465_float = 0; var_466_float = 0; var_467_float = 0; // 0xcf9 PushV
	var_468_bool = 0; var_469_object = Obj(); var_470_string = ""; // 0xcfa PushV
	var_469_object = var_450_object; // 0xcfb Mov
	var_470_string = "health"; // 0xcfc MovS
	func_3309(var_468_bool, var_469_object, var_470_string); // 0xcfd NEW_2
	var_471_bool = var_468_bool == 0; // 0xcff Not
	if(var_471_bool == 0) goto Label_3331; // 0xd00 JumpB
	var_449_float = 0.0; // 0xd01 MovF
	return 12; // 0xd02 Return
	
Label_3331:
	var_472_bool = 0; var_473_object = Obj(); var_474_string = ""; // 0xd03 PushV
	var_473_object = var_450_object; // 0xd04 Mov
	var_474_string = "armor"; // 0xd05 MovS
	func_3309(var_472_bool, var_473_object, var_474_string); // 0xd06 NEW_2
	var_475_bool = var_472_bool == 0; // 0xd08 Not
	if(var_475_bool == 0) goto Label_3340; // 0xd09 JumpB
	var_462_int = 0; // 0xd0a MovI
	goto Label_3343; // 0xd0b Jump
	
Label_3343:
	var_476_string = "armor_"; // 0xd0f PushS
	var_477_string = ""; var_478_int = 0; // 0xd10 PushV
	var_478_int = var_452_int; // 0xd11 Mov
	func_3275(var_477_string, var_478_int); // 0xd12 NEW_2
	var_463_string = var_476_string + var_477_string; // 0xd14 Add2
	var_483_bool = 0; var_484_object = Obj(); var_485_string = ""; // 0xd15 PushV
	var_484_object = var_450_object; // 0xd16 Mov
	var_485_string = var_463_string; // 0xd17 Mov
	func_3309(var_483_bool, var_484_object, var_485_string); // 0xd18 NEW_2
	var_486_bool = var_483_bool == 0; // 0xd1a Not
	if(var_486_bool == 0) goto Label_3358; // 0xd1b JumpB
	var_464_int = 0; // 0xd1c MovI
	goto Label_3360; // 0xd1d Jump
	
Label_3360:
	var_487_float = 0; var_488_float = 0; var_489_float = 0; // 0xd20 PushV
	var_490_int = var_462_int + var_464_int; // 0xd21 Add
	var_491_float = 100.0; // 0xd22 PushF
	var_488_float = var_490_int / var_490_int; // 0xd23 Div2
	var_489_float = 1; // 0xd24 MovI
	func_3851(var_487_float, var_488_float, var_489_float); // 0xd25 NEW_2
	var_465_float = var_487_float; // 0xd26 Mov
	var_493_string = "health"; // 0xd28 PushS
	GetProperty(var_493_string, var_466_float); // 0xd29 ObjFunc
	var_494_int = 1; // 0xd2b PushI
	var_495_int = var_494_int - var_465_float; // 0xd2c Sub
	var_467_float = var_451_float * var_495_int; // 0xd2d Mult2
	var_496_string = "health"; // 0xd2e PushS
	var_497_float = 0; var_498_float = 0; var_499_float = 0; var_500_float = 0; // 0xd2f PushV
	var_498_float = var_466_float - var_467_float; // 0xd30 Sub2
	var_499_float = 0; // 0xd31 MovI
	var_500_float = 1; // 0xd32 MovI
	func_3858(var_497_float, var_498_float, var_499_float, var_500_float); // 0xd33 NEW_2
	SetProperty(var_496_string, var_497_float); // 0xd35 ObjFunc
	var_503_bool = 0; var_504_object = Obj(); // 0xd37 PushV
	var_504_object = var_450_object; // 0xd38 Mov
	func_3304(var_503_bool, var_504_object); // 0xd39 NEW_2
	if(var_503_bool == 0) goto Label_3392; // 0xd3b JumpB
	var_505_float = 0; // 0xd3c PushV
	var_505_float = -var_467_float; // 0xd3d Neg2
	func_3874(var_505_float); // 0xd3e NEW_2
	
Label_3392:
	var_449_float = var_467_float; // 0xd40 Mov
	return 12; // 0xd41 Return
	
Label_3358:
	GetProperty(var_463_string, var_464_int); // 0xd1e ObjFunc
	
Label_3340:
	var_509_string = "armor"; // 0xd0c PushS
	GetProperty(var_509_string, var_462_int); // 0xd0d ObjFunc
}


func_3835(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0xefb PushV
	self(var_108_object); // 0xefc Func
	var_106_object = var_108_object; // 0xefe Mov
	return 2; // 0xeff Return
}


func_2817(var_0_bool, var_337_bool, var_338_float)
{
	var_339_bool = 0; var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_float = 0; var_344_bool = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); var_348_float = 0; // 0xb01 PushV
	
Label_2818:
	IsAnimationPlaying(var_344_bool); // 0xb02 Func
	var_349_bool = var_344_bool == 0; // 0xb04 Not
	if(var_349_bool == 0) goto Label_2823; // 0xb05 JumpB
	goto Label_2855; // 0xb06 Jump
	
Label_2855:
	func_2992(var_348_float); // 0xb28 NEW_2
	var_337_bool = 0; // 0xb2a MovB
	return 10; // 0xb2b Return
	
Label_2823:
	var_350_bool = 0; // 0xb07 PushV
	func_2888(var_350_bool); // 0xb08 NEW_2
	if(var_350_bool == 0) goto Label_2829; // 0xb0a JumpB
	var_337_bool = 1; // 0xb0b MovB
	return 10; // 0xb0c Return
	
Label_2829:
	var_393_bool = 0; var_394_object = Obj(); // 0xb0d PushV
	var_394_object = var_0_bool; // 0xb0e MovT
	func_3435(var_393_bool, var_394_object); // 0xb0f NEW_2
	var_395_bool = var_393_bool == 0; // 0xb11 Not
	if(var_395_bool == 0) goto Label_2837; // 0xb12 JumpB
	var_337_bool = 0; // 0xb13 MovB
	return 10; // 0xb14 Return
	
Label_2837:
	GetPFPosition(var_345_cvector); // 0xb15 TObjFunc
	GetPFPosition(var_346_cvector); // 0xb17 Func
	var_347_cvector = var_345_cvector - var_346_cvector; // 0xb19 Sub2
	var_348_float = var_347_cvector | var_347_cvector; // 0xb1a Or2
	var_396_float = var_338_float * var_338_float; // 0xb1b Mult
	var_397_bool = var_348_float < var_396_float; // 0xb1c LT
	if(var_397_bool == 0) goto Label_2852; // 0xb1d JumpB
	var_398_bool = 0; var_399_float = 0; // 0xb1e PushV
	var_399_float = var_338_float; // 0xb1f Mov
	func_2653(var_348_float, var_398_bool, var_399_float); // 0xb20 NEW_2
	var_337_bool = 1; // 0xb22 MovB
	return 10; // 0xb23 Return
	
Label_2852:
	sync(); // 0xb24 Func
	goto Label_2818; // 0xb26 Jump
}


func_3841(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0xf01 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0xf02 Or
	var_59_float = sqrt(var_60_int); // 0xf03 Sqrt2
	var_61_float = 0.0; // 0xf04 PushF
	var_62_bool = var_59_float < var_61_float; // 0xf05 LT
	if(var_62_bool == 0) goto Label_3849; // 0xf06 JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0xf07 MovV
	return 2; // 0xf08 Return
	
Label_3849:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0xf09 Div2
	return 2; // 0xf0a Return
}


func_4361(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1109 PushV
	var_23_bool = 0; // 0x110a PushV
	var_23_bool = 0; // 0x110b MovB
	var_24_bool = 0; var_25_object = Obj(); // 0x110c PushV
	var_25_object = var_20_object; // 0x110d Mov
	func_4668(var_25_object); // 0x110e NEW_2
	if(var_24_bool == 0) goto Label_4375; // 0x1110 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x1111 PushV
	var_27_object = var_20_object; // 0x1112 Mov
	func_3304(var_26_bool, var_27_object); // 0x1113 NEW_2
	if(var_26_bool == 0) goto Label_4375; // 0x1115 JumpB
	var_23_bool = 1; // 0x1116 MovB
	
Label_4375:
	if(var_23_bool == 0) goto Label_4382; // 0x1117 JumpB
	IsWeaponHolstered(var_22_bool); // 0x1118 ObjFunc
	var_30_bool = var_22_bool == 0; // 0x111a Not
	if(var_30_bool == 0) goto Label_4382; // 0x111b JumpB
	var_19_bool = 1; // 0x111c MovB
	return 2; // 0x111d Return
	
Label_4382:
	var_19_bool = 0; // 0x111e MovB
	return 2; // 0x111f Return
}


func_3851(var_487_float, var_488_float, var_489_float)
{
	var_492_bool = var_488_float < var_489_float; // 0xf0c LT
	if(var_492_bool == 0) goto Label_3856; // 0xf0d JumpB
	var_487_float = var_488_float; // 0xf0e Mov
	goto Label_3857; // 0xf0f Jump
	
Label_3857:
	return 0; // 0xf11 Return
	
Label_3856:
	var_487_float = var_489_float; // 0xf10 Mov
}


func_3858(var_497_float, var_498_float, var_499_float, var_500_float)
{
	var_501_bool = var_498_float < var_499_float; // 0xf13 LT
	if(var_501_bool == 0) goto Label_3863; // 0xf14 JumpB
	var_497_float = var_499_float; // 0xf15 Mov
	return 0; // 0xf16 Return
	
Label_3863:
	var_502_bool = var_498_float > var_500_float; // 0xf17 GT
	if(var_502_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_497_float = var_500_float; // 0xf19 Mov
	return 0; // 0xf1a Return
	
Label_3867:
	var_497_float = var_498_float; // 0xf1b Mov
	return 0; // 0xf1c Return
}


func_2329(var_92_bool)
{
	var_92_bool = 1; // 0x919 MovB
	return 0; // 0x91a Return
}


func_2331()
{
	StopAnimation(); // 0x91b Func
	StopGroup0(); // 0x91d Func
	return 0; // 0x91f Return
}


func_3869(var_134_int, var_135_string)
{
	var_136_int = 0; var_137_int = 0; // 0xf1d PushV
	GetVariable(var_135_string, var_137_int); // 0xf1e Func
	var_134_int = var_137_int; // 0xf20 Mov
	return 2; // 0xf21 Return
}


func_4384(var_31_object)
{
	var_32_object = Obj(); // 0x1121 PushV
	var_32_object = var_31_object; // 0x1122 Mov
	func_4671(); // 0x1123 NEW_2
	return 0; // 0x1125 Return
}


func_2336(var_102_object)
{
	var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; // 0x921 PushV
	var_109_object = var_102_object; // 0x922 Mov
	var_110_bool = 1; // 0x923 MovB
	var_111_float = 180.0; // 0x924 MovF
	func_2350(var_105_int, var_106_bool, var_107_float, var_108_int, var_102_object, var_109_object, var_110_bool, var_111_float); // 0x925 NEW_2
	return 0; // 0x927 Return
}


func_3874(var_505_float)
{
	var_506_object = Obj(); var_507_object = Obj(); // 0xf22 PushV
	CreateFloatVector(var_507_object); // 0xf23 Func
	add(var_505_float); // 0xf25 ObjFunc
	var_508_int = 15; // 0xf27 PushI
	SendWorldWndMessage(var_508_int, var_507_object); // 0xf28 Func
	return 2; // 0xf2a Return
}


func_293(var_2_object, var_151_string)
{
	var_152_bool = 0; // 0x126 PushV
	func_4696(var_152_bool); // 0x127 NEW_2
	var_153_bool = var_152_bool == 0; // 0x129 Not
	if(var_153_bool == 0) goto Label_300; // 0x12a JumpB
	return 0; // 0x12b Return
	
Label_300:
	var_154_bool = var_151_string == var_2_object; // 0x12c Eq
	if(var_154_bool == 0) goto Label_303; // 0x12d JumpB
	return 0; // 0x12e Return
	
Label_303:
	var_155_string = ""; var_156_bool = 0; // 0x12f PushV
	var_155_string = var_151_string; // 0x130 Mov
	var_157_string = ""; // 0x131 PushS
	var_158_bool = var_151_string == var_157_string; // 0x132 Eq
	if(var_158_bool == 0) goto Label_310; // 0x133 JumpB
	var_156_bool = 0; // 0x134 MovB
	goto Label_311; // 0x135 Jump
	
Label_311:
	func_3761(var_155_string, var_156_bool); // 0x137 NEW_2
	var_2_object = var_151_string; // 0x139 TMov
	return 0; // 0x13a Return
	
Label_310:
	var_156_bool = 1; // 0x136 MovB
}


func_4390(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x1127 PushV
	var_23_object = var_21_object; // 0x1128 Mov
	func_3304(var_22_bool, var_23_object); // 0x1129 NEW_2
	if(var_22_bool == 0) goto Label_4402; // 0x112b JumpB
	var_26_object = Obj(); // 0x112c PushV
	func_3835(var_26_object); // 0x112d NEW_2
	var_29_float = -0.01; // 0x112f PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0x1130 Func
	
Label_4402:
	return 0; // 0x1132 Return
}


func_2344(var_446_float)
{
	var_446_float = 0.05; // 0x929 MovF
	return 0; // 0x92a Return
}


func_2347(var_453_int)
{
	var_453_int = 0; // 0x92c MovI
	return 0; // 0x92d Return
}


func_2860(var_0_bool, var_352_bool)
{
	var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); var_356_float = 0; var_357_float = 0; var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_cvector = CVector(0,0,0); var_361_float = 0; var_362_float = 0; // 0xb2c PushV
	var_363_bool = 0; var_364_object = Obj(); // 0xb2d PushV
	var_364_object = var_0_bool; // 0xb2e MovT
	func_3435(var_363_bool, var_364_object); // 0xb2f NEW_2
	var_365_bool = var_363_bool == 0; // 0xb31 Not
	if(var_365_bool == 0) goto Label_2869; // 0xb32 JumpB
	var_352_bool = 0; // 0xb33 MovB
	return 10; // 0xb34 Return
	
Label_2869:
	var_366_bool = 0; // 0xb35 PushV
	func_2949(var_362_float, var_366_bool); // 0xb36 NEW_2
	if(var_366_bool == 0) goto Label_2886; // 0xb38 JumpB
	GetPFPosition(var_358_cvector); // 0xb39 TObjFunc
	GetPFPosition(var_359_cvector); // 0xb3b Func
	var_360_cvector = var_358_cvector - var_359_cvector; // 0xb3d Sub2
	var_361_float = var_360_cvector | var_360_cvector; // 0xb3e Or2
	GetAttackDistance(var_362_float); // 0xb3f TObjFunc
	var_367_int = 50; // 0xb41 PushI
	var_362_float = var_362_float + var_367_int; // 0xb42 Add2
	var_368_float = var_362_float * var_362_float; // 0xb43 Mult
	var_352_bool = var_361_float <= var_368_float; // 0xb44 LE2
	return 10; // 0xb45 Return
	
Label_2886:
	var_352_bool = 0; // 0xb46 MovB
	return 10; // 0xb47 Return
}


func_3884(var_120_int)
{
	var_121_float = 0; var_122_float = 0; // 0xf2c PushV
	GetGameTime(var_122_float); // 0xf2d Func
	var_123_int = 1; // 0xf2f PushI
	var_124_int = 0; // 0xf30 PushV
	var_125_int = 24; // 0xf31 PushI
	var_124_int = var_122_float / var_122_float; // 0xf32 Div2
	var_120_int = var_123_int + var_124_int; // 0xf33 Add2
	return 2; // 0xf34 Return
}


func_2350(var_0_bool, var_3_object, var_5_bool, var_109_object, var_110_bool, var_111_float, var_186_bool, var_278_bool)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_bool = 0; var_116_bool = 0; var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_bool = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_float = 0; var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_float = 0; // 0x92e PushV
	func_2579(var_131_cvector, var_132_bool, var_133_float); // 0x930 NEW_2
	var_5_bool = 0; // 0x932 TMovI
	var_156_string = "@GetAttackDistance"; // 0x933 PushS
	var_157_int = 1; // 0x934 PushI
	var_158_bool = IsFuncExist(var_109_object, var_156_string, var_157_int); // 0x935 FuncExist
	if(var_158_bool == 0) goto Label_2364; // 0x936 JumpB
	GetAttackDistance(var_123_float); // 0x937 ObjFunc
	var_159_int = 50; // 0x939 PushI
	var_123_float = var_123_float + var_159_int; // 0x93a Add2
	goto Label_2365; // 0x93b Jump
	
Label_2365:
	var_160_int = 150; // 0x93d PushI
	var_161_bool = var_123_float >= var_160_int; // 0x93e GE
	if(var_161_bool == 0) goto Label_2369; // 0x93f JumpB
	var_123_float = 150; // 0x940 MovI
	
Label_2369:
	var_3_object = 0; // 0x941 TMovB
	var_0_bool = var_109_object; // 0x942 TMov
	IsPlayerActor(var_0_bool, var_126_bool); // 0x943 Func
	var_162_bool = var_126_bool; // 0x945 Push
	if(var_162_bool == 0) goto Label_2383; // 0x946 JumpB
	var_163_string = "attack"; // 0x947 PushS
	PlayGlobalMusic(var_163_string); // 0x948 Func
	var_164_object = Obj(); // 0x94a PushV
	func_3835(var_164_object); // 0x94b NEW_2
	SendPlayerEnemy(var_109_object, var_164_object); // 0x94d Func
	
Label_2383:
	var_167_bool = var_110_bool; // 0x94f Push
	if(var_167_bool == 0) goto Label_2387; // 0x950 JumpB
	var_127_bool = 0; // 0x951 MovB
	goto Label_2388; // 0x952 Jump
	
Label_2388:
	var_168_float = 400.0; // 0x954 PushF
	var_128_float = var_168_float + var_123_float; // 0x955 Add2
	
Label_2390:
	var_169_bool = 0; // 0x956 PushV
	var_169_bool = 0; // 0x957 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x958 PushV
	var_171_object = var_0_bool; // 0x959 MovT
	func_3435(var_170_bool, var_171_object); // 0x95a NEW_2
	if(var_170_bool == 0) goto Label_2400; // 0x95c JumpB
	var_172_bool = var_3_object == 0; // 0x95d Not
	if(var_172_bool == 0) goto Label_2400; // 0x95e JumpB
	var_169_bool = 1; // 0x95f MovB
	
Label_2400:
	if(var_169_bool == 0) goto Label_2562; // 0x960 JumpB
	func_2992(var_133_float); // 0x962 NEW_2
	GetPFPosition(var_124_cvector); // 0x964 TObjFunc
	GetPFPosition(var_125_cvector); // 0x966 Func
	var_129_cvector = var_124_cvector - var_125_cvector; // 0x968 Sub2
	var_130_float = var_129_cvector | var_129_cvector; // 0x969 Or2
	var_178_float = var_128_float * var_128_float; // 0x96a Mult
	var_179_bool = var_130_float >= var_178_float; // 0x96b GE
	if(var_179_bool == 0) goto Label_2428; // 0x96c JumpB
	var_180_bool = 0; var_181_object = Obj(); var_182_float = 0; var_183_float = 0; var_184_bool = 0; var_185_bool = 0; // 0x96d PushV
	var_181_object = var_0_bool; // 0x96e MovT
	var_182_float = var_123_float; // 0x96f Mov
	var_183_float = 3000.0; // 0x970 MovF
	var_184_bool = 1; // 0x971 MovB
	var_185_bool = 0; // 0x972 MovB
	TaskCall(7); // 0x973 TaskCall
	func_3019(var_188_bool, var_180_bool, var_181_object, var_182_float, var_183_float, var_184_bool, var_185_bool); // 0x974 NEW_2
	TaskReturn(); // 0x975 TaskReturn
	var_263_bool = var_186_bool == 0; // 0x977 Not
	if(var_263_bool == 0) goto Label_2426; // 0x978 JumpB
	goto Label_2562; // 0x979 Jump
	
Label_2562:
	WaitForAnimEnd(); // 0xa02 Func
	var_264_object = var_3_object; // 0xa04 PushT
	if(var_264_object == 0) goto Label_2567; // 0xa05 JumpB
	return 22; // 0xa06 Return
	
Label_2567:
	var_265_string = "all"; // 0xa07 PushS
	var_266_string = "attack_off"; // 0xa08 PushS
	PlayAnimation(var_265_string, var_266_string); // 0xa09 Func
	WaitForAnimEnd(); // 0xa0b Func
	var_267_bool = var_126_bool; // 0xa0d Push
	if(var_267_bool == 0) goto Label_2578; // 0xa0e JumpB
	var_268_float = 2.0; // 0xa0f PushF
	Sleep(var_268_float); // 0xa10 Func
	
Label_2578:
	return 22; // 0xa12 Return
	
Label_2426:
	var_127_bool = 0; // 0x97a MovB
	goto Label_2561; // 0x97b Jump
	
Label_2561:
	goto Label_2390; // 0xa01 Jump
	
Label_2428:
	var_269_float = var_111_float * var_111_float; // 0x97c Mult
	var_270_bool = var_130_float >= var_269_float; // 0x97d GE
	if(var_270_bool == 0) goto Label_2553; // 0x97e JumpB
	GetPFPosition(var_131_cvector); // 0x97f TObjFunc
	CanReachByPF(var_132_bool, var_131_cvector); // 0x981 Func
	var_271_bool = var_132_bool == 0; // 0x983 Not
	if(var_271_bool == 0) goto Label_2452; // 0x984 JumpB
	var_272_bool = 0; var_273_object = Obj(); var_274_float = 0; var_275_float = 0; var_276_bool = 0; var_277_bool = 0; // 0x985 PushV
	var_273_object = var_0_bool; // 0x986 MovT
	var_274_float = var_123_float; // 0x987 Mov
	var_275_float = 3000.0; // 0x988 MovF
	var_276_bool = 1; // 0x989 MovB
	var_277_bool = 0; // 0x98a MovB
	TaskCall(7); // 0x98b TaskCall
	func_3019(var_280_bool, var_272_bool, var_273_object, var_274_float, var_275_float, var_276_bool, var_277_bool); // 0x98c NEW_2
	TaskReturn(); // 0x98d TaskReturn
	var_281_bool = var_278_bool == 0; // 0x98f Not
	if(var_281_bool == 0) goto Label_2450; // 0x990 JumpB
	goto Label_2562; // 0x991 Jump
	
Label_2450:
	var_127_bool = 0; // 0x992 MovB
	goto Label_2390; // 0x993 Jump
	
Label_2452:
	var_282_bool = var_127_bool == 0; // 0x994 Not
	if(var_282_bool == 0) goto Label_2477; // 0x995 JumpB
	var_283_object = Obj(); // 0x996 PushV
	var_283_object = var_0_bool; // 0x997 MovT
	func_3585(); // 0x998 NEW_2
	var_292_string = "all"; // 0x99a PushS
	var_293_string = "attack_on"; // 0x99b PushS
	PlayAnimation(var_292_string, var_293_string); // 0x99c Func
	WaitForAnimEnd(); // 0x99e Func
	func_2992(var_133_float); // 0x9a1 NEW_2
	StopAsync(); // 0x9a3 Func
	var_127_bool = 1; // 0x9a5 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x9a6 PushV
	var_295_object = var_0_bool; // 0x9a7 MovT
	func_3435(var_294_bool, var_295_object); // 0x9a8 NEW_2
	var_296_bool = var_294_bool == 0; // 0x9aa Not
	if(var_296_bool == 0) goto Label_2477; // 0x9ab JumpB
	goto Label_2562; // 0x9ac Jump
	
Label_2477:
	rand(var_133_float); // 0x9ad Func
	var_297_bool = 0; // 0x9af PushV
	var_297_bool = 1; // 0x9b0 MovB
	var_298_float = 0.25; // 0x9b1 PushF
	var_299_bool = var_133_float < var_298_float; // 0x9b2 LT
	if(var_299_bool == 0) goto Label_2489; // 0x9b3 JumpB
	var_300_bool = 0; // 0x9b4 PushV
	func_2949(var_297_bool, var_300_bool); // 0x9b5 NEW_2
	if(var_300_bool == 0) goto Label_2489; // 0x9b7 JumpB
	var_297_bool = 0; // 0x9b8 MovB
	
Label_2489:
	if(var_297_bool == 0) goto Label_2506; // 0x9b9 JumpB
	Face(var_0_bool); // 0x9ba Func
	func_2999(); // 0x9bd NEW_2
	var_335_string = "all"; // 0x9bf PushS
	var_336_string = "attack_stay"; // 0x9c0 PushS
	PlayAnimation(var_335_string, var_336_string); // 0x9c1 Func
	var_337_bool = 0; var_338_float = 0; // 0x9c3 PushV
	var_338_float = var_111_float; // 0x9c4 Mov
	func_2817(var_133_float, var_337_bool, var_338_float); // 0x9c5 NEW_2
	StopAsync(); // 0x9c7 Func
	goto Label_2552; // 0x9c9 Jump
	
Label_2552:
	goto Label_2561; // 0x9f8 Jump
	
Label_2506:
	Face(var_0_bool); // 0x9ca Func
	var_552_string = "all"; // 0x9cc PushS
	var_553_string = "fjump"; // 0x9cd PushS
	PlayAnimation(var_552_string, var_553_string); // 0x9ce Func
	WaitForAnimEnd(); // 0x9d0 Func
	func_2992(var_133_float); // 0x9d3 NEW_2
	var_554_cvector = CVector(0.0, 0.0, 0.0); // 0x9d5 PushVec
	SetSpeed(var_554_cvector); // 0x9d6 Func
	Stop(); // 0x9d8 Func
	StopAsync(); // 0x9da Func
	var_555_bool = 0; // 0x9dc PushV
	func_2949(var_133_float, var_555_bool); // 0x9dd NEW_2
	var_556_bool = var_555_bool == 0; // 0x9df Not
	if(var_556_bool == 0) goto Label_2552; // 0x9e0 JumpB
	var_557_bool = 0; var_558_object = Obj(); // 0x9e1 PushV
	var_558_object = var_0_bool; // 0x9e2 MovT
	func_3435(var_557_bool, var_558_object); // 0x9e3 NEW_2
	var_559_bool = var_557_bool == 0; // 0x9e5 Not
	if(var_559_bool == 0) goto Label_2536; // 0x9e6 JumpB
	goto Label_2562; // 0x9e7 Jump
	
Label_2536:
	GetPFPosition(var_124_cvector); // 0x9e8 TObjFunc
	GetPFPosition(var_125_cvector); // 0x9ea Func
	var_129_cvector = var_124_cvector - var_125_cvector; // 0x9ec Sub2
	var_130_float = var_129_cvector | var_129_cvector; // 0x9ed Or2
	var_560_float = var_111_float * var_111_float; // 0x9ee Mult
	var_561_bool = var_130_float < var_560_float; // 0x9ef LT
	if(var_561_bool == 0) goto Label_2552; // 0x9f0 JumpB
	var_562_bool = 0; var_563_float = 0; // 0x9f1 PushV
	var_563_float = var_111_float; // 0x9f2 Mov
	func_2653(var_133_float, var_562_bool, var_563_float); // 0x9f3 NEW_2
	var_564_bool = var_562_bool == 0; // 0x9f5 Not
	if(var_564_bool == 0) goto Label_2552; // 0x9f6 JumpB
	goto Label_2562; // 0x9f7 Jump
	
Label_2553:
	var_565_bool = 0; var_566_float = 0; // 0x9f9 PushV
	var_566_float = var_111_float; // 0x9fa Mov
	func_2653(var_133_float, var_565_bool, var_566_float); // 0x9fb NEW_2
	var_567_bool = var_565_bool == 0; // 0x9fd Not
	if(var_567_bool == 0) goto Label_2560; // 0x9fe JumpB
	goto Label_2562; // 0x9ff Jump
	
Label_2560:
	var_127_bool = 1; // 0xa00 MovB
	
Label_2387:
	var_127_bool = 1; // 0x953 MovB
	
Label_2364:
	var_123_float = var_111_float; // 0x93c Mov
}


func_4403(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x1133 PushV
	var_23_string = "heal"; // 0x1134 PushS
	var_24_bool = var_20_string == var_23_string; // 0x1135 Eq
	if(var_24_bool == 0) goto Label_4417; // 0x1136 JumpB
	var_25_string = "player"; // 0x1137 PushS
	FindActor(var_22_object, var_25_string); // 0x1138 Func
	var_26_bool = 0; var_27_object = Obj(); // 0x113a PushV
	var_27_object = var_22_object; // 0x113b Mov
	func_4683(var_27_object); // 0x113c NEW_2
	var_19_bool = var_26_bool; // 0x113d Mov
	return 2; // 0x113f Return
	
Label_4417:
	var_19_bool = 0; // 0x1141 MovB
	return 2; // 0x1142 Return
}


func_3893(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0xf35 PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0xf36 Func
	var_24_bool = var_23_bool; // 0xf38 Push
	if(var_24_bool == 0) goto Label_3901; // 0xf39 JumpB
	var_25_string = "attack"; // 0xf3a PushS
	PlayGlobalMusic(var_25_string); // 0xf3b Func
	
Label_3901:
	return 2; // 0xf3d Return
}


func_3902()
{
	var_410_object = Obj(); var_411_object = Obj(); // 0xf3e PushV
	GetScene(var_411_object); // 0xf3f Func
	var_412_string = "battle"; // 0xf41 PushS
	var_413_object = Obj(); // 0xf42 PushV
	func_3835(var_413_object); // 0xf43 NEW_2
	BroadcastMessage(var_412_string, var_413_object, var_411_object); // 0xf45 Func
	return 2; // 0xf47 Return
}


func_3394(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0xd42 PushV
	IsDead(var_49_bool); // 0xd43 ObjFunc
	var_46_bool = var_49_bool; // 0xd45 Mov
	return 2; // 0xd46 Return
}


func_4419(var_28_string)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x1143 PushV
	var_31_string = "heal"; // 0x1144 PushS
	var_32_bool = var_28_string == var_31_string; // 0x1145 Eq
	if(var_32_bool == 0) goto Label_4431; // 0x1146 JumpB
	var_33_string = "player"; // 0x1147 PushS
	FindActor(var_30_object, var_33_string); // 0x1148 Func
	var_34_object = Obj(); // 0x114a PushV
	var_34_object = var_30_object; // 0x114b Mov
	func_4686(); // 0x114c NEW_2
	var_30_object = 0; // 0x114e SetNull
	
Label_4431:
	return 2; // 0x114f Return
}


func_3399(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0xd47 PushV
	var_41_bool = var_36_object == 0; // 0xd48 NullEq
	if(var_41_bool == 0) goto Label_3404; // 0xd49 JumpB
	var_35_bool = 0; // 0xd4a MovB
	return 4; // 0xd4b Return
	
Label_3404:
	var_42_bool = 0; // 0xd4c PushV
	var_42_bool = 0; // 0xd4d MovB
	var_43_string = "IsDead"; // 0xd4e PushS
	var_44_int = 1; // 0xd4f PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0xd50 FuncExist
	if(var_45_bool == 0) goto Label_3416; // 0xd51 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0xd52 PushV
	var_47_object = var_36_object; // 0xd53 Mov
	func_3394(var_47_object); // 0xd54 NEW_2
	if(var_46_bool == 0) goto Label_3416; // 0xd56 JumpB
	var_42_bool = 1; // 0xd57 MovB
	
Label_3416:
	if(var_42_bool == 0) goto Label_3419; // 0xd58 JumpB
	var_35_bool = 0; // 0xd59 MovB
	return 4; // 0xd5a Return
	
Label_3419:
	GetScene(var_39_object); // 0xd5b Func
	var_50_bool = var_39_object == 0; // 0xd5d NullEq
	if(var_50_bool == 0) goto Label_3425; // 0xd5e JumpB
	var_35_bool = 0; // 0xd5f MovB
	return 4; // 0xd60 Return
	
Label_3425:
	GetScene(var_40_object); // 0xd61 ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0xd63 Neq
	if(var_51_bool == 0) goto Label_3431; // 0xd64 JumpB
	var_35_bool = 0; // 0xd65 MovB
	return 4; // 0xd66 Return
	
Label_3431:
	var_35_bool = 1; // 0xd67 MovB
	return 4; // 0xd68 Return
}


func_2888(var_350_bool)
{
	var_351_bool = 0; // 0xb48 PushV
	var_351_bool = 0; // 0xb49 MovB
	var_352_bool = 0; // 0xb4a PushV
	func_2860(var_351_bool, var_352_bool); // 0xb4b NEW_2
	if(var_352_bool == 0) goto Label_2899; // 0xb4d JumpB
	var_369_bool = 0; // 0xb4e PushV
	func_2904(var_350_bool, var_351_bool, var_369_bool); // 0xb4f NEW_2
	if(var_369_bool == 0) goto Label_2899; // 0xb51 JumpB
	var_351_bool = 1; // 0xb52 MovB
	
Label_2899:
	if(var_351_bool == 0) goto Label_2902; // 0xb53 JumpB
	var_350_bool = 1; // 0xb54 MovB
	return 0; // 0xb55 Return
	
Label_2902:
	var_350_bool = 0; // 0xb56 MovB
	return 0; // 0xb57 Return
}


func_3913(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0xf4a PushV
	var_219_string = "branch"; // 0xf4b MovS
	func_3869(var_218_int, var_219_string); // 0xf4c NEW_2
	var_220_int = 0; // 0xf4e PushI
	var_221_bool = var_218_int == var_220_int; // 0xf4f Eq
	if(var_221_bool == 0) goto Label_3923; // 0xf50 JumpB
	var_216_bool = 1; // 0xf51 MovB
	return 0; // 0xf52 Return
	
Label_3923:
	var_216_bool = 0; // 0xf53 MovB
	return 0; // 0xf54 Return
}


func_4432(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0x1150 PushV
	var_76_string = "idle"; // 0x1151 MovS
	var_77_int = var_74_int; // 0x1152 Push
	if(var_77_int == 0) goto Label_4437; // 0x1153 JumpB
	var_76_string = var_76_string + var_74_int; // 0x1154 Add2
	
Label_4437:
	var_73_string = var_76_string; // 0x1155 Mov
	return 2; // 0x1156 Return
}


func_3925(var_132_bool)
{
	var_134_int = 0; var_135_string = ""; // 0xf56 PushV
	var_135_string = "branch"; // 0xf57 MovS
	func_3869(var_134_int, var_135_string); // 0xf58 NEW_2
	var_138_int = 2; // 0xf5a PushI
	var_139_bool = var_134_int == var_138_int; // 0xf5b Eq
	if(var_139_bool == 0) goto Label_3935; // 0xf5c JumpB
	var_132_bool = 1; // 0xf5d MovB
	return 0; // 0xf5e Return
	
Label_3935:
	var_132_bool = 0; // 0xf5f MovB
	return 0; // 0xf60 Return
}


func_4439(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x1157 PushV
	var_70_int = 0; // 0x1158 MovI
	
Label_4441:
	var_72_string = "all"; // 0x1159 PushS
	var_73_string = ""; var_74_int = 0; // 0x115a PushV
	var_74_int = var_70_int; // 0x115b Mov
	func_4432(var_73_string, var_74_int); // 0x115c NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0x115e Func
	var_78_bool = var_71_bool == 0; // 0x1160 Not
	if(var_78_bool == 0) goto Label_4451; // 0x1161 JumpB
	goto Label_4454; // 0x1162 Jump
	
Label_4454:
	var_67_int = var_70_int; // 0x1166 Mov
	return 4; // 0x1167 Return
	
Label_4451:
	var_79_int = 1; // 0x1163 PushI
	var_70_int = var_70_int + var_79_int; // 0x1164 Add2
	goto Label_4441; // 0x1165 Jump
}


func_2904(var_0_bool, var_4_string, var_369_bool)
{
	var_370_object = Obj(); var_371_bool = 0; var_372_float = 0; var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_object = Obj(); var_376_bool = 0; var_377_float = 0; var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); // 0xb58 PushV
	GetScene(var_375_object); // 0xb59 Func
	var_376_bool = 0; // 0xb5b MovB
	
Label_2908:
	var_380_cvector = CVector(0,0,0); var_381_object = Obj(); // 0xb5c PushV
	var_381_object = var_0_bool; // 0xb5d MovT
	func_3289(var_381_object); // 0xb5e NEW_2
	var_386_int = -var_380_cvector; // 0xb60 Neg
	FindDirLength(var_377_float, var_386_int, var_377_float); // 0xb61 Func
	var_387_bool = var_377_float < var_4_string; // 0xb63 LT
	if(var_387_bool == 0) goto Label_2918; // 0xb64 JumpB
	goto Label_2946; // 0xb65 Jump
	
Label_2946:
	var_369_bool = var_376_bool; // 0xb82 Mov
	return 10; // 0xb83 Return
	
Label_2918:
	Face(var_0_bool); // 0xb66 Func
	var_388_string = "all"; // 0xb68 PushS
	var_389_string = "bjump"; // 0xb69 PushS
	PlayAnimation(var_388_string, var_389_string); // 0xb6a Func
	GetPFPosition(var_378_cvector); // 0xb6c TObjFunc
	GetPFPosition(var_379_cvector); // 0xb6e Func
	WaitForAnimEnd(); // 0xb70 Func
	func_2992(var_379_cvector); // 0xb73 NEW_2
	StopAsync(); // 0xb75 Func
	var_390_cvector = CVector(0.0, 0.0, 0.0); // 0xb77 PushVec
	SetSpeed(var_390_cvector); // 0xb78 Func
	var_376_bool = 1; // 0xb7a MovB
	var_391_bool = 0; // 0xb7b PushV
	func_2860(var_379_cvector, var_391_bool); // 0xb7c NEW_2
	var_392_bool = var_391_bool == 0; // 0xb7e Not
	if(var_392_bool == 0) goto Label_2945; // 0xb7f JumpB
	goto Label_2946; // 0xb80 Jump
	
Label_2945:
	goto Label_2908; // 0xb81 Jump
}


func_3937(var_210_bool, var_211_object)
{
	var_212_bool = 0; var_213_object = Obj(); // 0xf62 PushV
	var_213_object = var_211_object; // 0xf63 Mov
	func_3957(var_213_object); // 0xf64 NEW_2
	if(var_212_bool == 0) goto Label_3945; // 0xf66 JumpB
	var_210_bool = 1; // 0xf67 MovB
	return 0; // 0xf68 Return
	
Label_3945:
	var_210_bool = 0; // 0xf69 MovB
	return 0; // 0xf6a Return
}


func_4456(var_61_int, var_62_object)
{
	var_63_bool = 0; var_64_object = Obj(); // 0x1169 PushV
	var_64_object = var_62_object; // 0x116a Mov
	func_4748(var_63_bool, var_64_object); // 0x116b NEW_2
	if(var_63_bool == 0) goto Label_4464; // 0x116d JumpB
	var_61_int = 2; // 0x116e MovI
	goto Label_4465; // 0x116f Jump
	
Label_4465:
	return 0; // 0x1171 Return
	
Label_4464:
	var_61_int = 0; // 0x1170 MovI
}


func_3947(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj(); // 0xf6c PushV
	var_143_object = var_141_object; // 0xf6d Mov
	func_3964(var_143_object); // 0xf6e NEW_2
	if(var_142_bool == 0) goto Label_3955; // 0xf70 JumpB
	var_140_bool = 1; // 0xf71 MovB
	return 0; // 0xf72 Return
	
Label_3955:
	var_140_bool = 0; // 0xf73 MovB
	return 0; // 0xf74 Return
}


func_3435(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0xd6b PushV
	var_35_bool = 0; var_36_object = Obj(); // 0xd6c PushV
	var_36_object = var_32_object; // 0xd6d Mov
	func_3399(var_35_bool, var_36_object); // 0xd6e NEW_2
	var_52_bool = var_35_bool == 0; // 0xd70 Not
	if(var_52_bool == 0) goto Label_3444; // 0xd71 JumpB
	var_31_bool = 0; // 0xd72 MovB
	return 2; // 0xd73 Return
	
Label_3444:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0xd74 PushV
	var_54_object = var_32_object; // 0xd75 Mov
	var_55_string = "noaccess"; // 0xd76 MovS
	func_3309(var_53_bool, var_54_object, var_55_string); // 0xd77 NEW_2
	var_62_bool = var_53_bool == 0; // 0xd79 Not
	if(var_62_bool == 0) goto Label_3453; // 0xd7a JumpB
	var_31_bool = 1; // 0xd7b MovB
	return 2; // 0xd7c Return
	
Label_3453:
	var_63_string = "noaccess"; // 0xd7d PushS
	GetProperty(var_63_string, var_34_int); // 0xd7e ObjFunc
	var_64_int = 0; // 0xd80 PushI
	var_31_bool = var_34_int == var_64_int; // 0xd81 Eq2
	return 2; // 0xd82 Return
}


func_4466(var_79_object)
{
	var_80_object = Obj(); // 0x1173 PushV
	var_80_object = var_79_object; // 0x1174 Mov
	func_4482(var_80_object); // 0x1175 NEW_2
	return 0; // 0x1177 Return
}


func_3957(var_212_bool)
{
	var_214_int = 0; // 0xf76 PushV
	func_3884(var_214_int); // 0xf77 NEW_2
	var_215_int = 1; // 0xf79 PushI
	var_212_bool = var_214_int == var_215_int; // 0xf7a Eq2
	return 0; // 0xf7b Return
}


func_4472(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0x1179 PushV
	var_91_object = var_89_object; // 0x117a Mov
	func_3435(var_90_bool, var_91_object); // 0x117b NEW_2
	if(var_90_bool == 0) goto Label_4480; // 0x117d JumpB
	var_88_int = 2; // 0x117e MovI
	goto Label_4481; // 0x117f Jump
	
Label_4481:
	return 0; // 0x1181 Return
	
Label_4480:
	var_88_int = 0; // 0x1180 MovI
}


func_3964(var_142_bool)
{
	var_144_int = 0; // 0xf7d PushV
	func_3884(var_144_int); // 0xf7e NEW_2
	var_150_int = 4; // 0xf80 PushI
	var_142_bool = var_144_int == var_150_int; // 0xf81 Eq2
	return 0; // 0xf82 Return
}


func_4482(var_101_object)
{
	var_102_object = Obj(); // 0x1183 PushV
	var_102_object = var_101_object; // 0x1184 Mov
	TaskCall(6); // 0x1185 TaskCall
	func_2336(var_102_object); // 0x1186 NEW_2
	TaskReturn(); // 0x1187 TaskReturn
	return 0; // 0x1189 Return
}


func_3971(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xf83 PushV
	var_118_string = "branch"; // 0xf84 PushS
	GetVariable(var_118_string, var_117_int); // 0xf85 Func
	var_119_int = 0; // 0xf87 PushI
	var_120_bool = var_117_int == var_119_int; // 0xf88 Eq
	if(var_120_bool == 0) goto Label_3981; // 0xf89 JumpB
	var_115_int = 1; // 0xf8a MovI
	return 2; // 0xf8b Return
	
Label_3981:
	var_121_int = 1; // 0xf8d PushI
	var_122_bool = var_117_int == var_121_int; // 0xf8e Eq
	if(var_122_bool == 0) goto Label_3986; // 0xf8f JumpB
	var_115_int = 2; // 0xf90 MovI
	return 2; // 0xf91 Return
	
Label_3986:
	var_115_int = 3; // 0xf92 MovI
	return 2; // 0xf93 Return
}


func_3459(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0xd83 PushV
	var_50_bool = var_35_object == 0; // 0xd84 NullEq
	if(var_50_bool == 0) goto Label_3463; // 0xd85 JumpB
	return 14; // 0xd86 Return
	
Label_3463:
	IsDead(var_43_bool); // 0xd87 Func
	var_51_bool = var_43_bool; // 0xd89 Push
	if(var_51_bool == 0) goto Label_3468; // 0xd8a JumpB
	return 14; // 0xd8b Return
	
Label_3468:
	GetSecondaryAnimationType(var_44_int); // 0xd8c Func
	var_52_int = 0; // 0xd8e PushI
	var_53_bool = var_44_int < var_52_int; // 0xd8f LT
	if(var_53_bool == 0) goto Label_3474; // 0xd90 JumpB
	return 14; // 0xd91 Return
	
Label_3474:
	GetPosition(var_45_cvector); // 0xd92 ObjFunc
	GetPosition(var_46_cvector); // 0xd94 Func
	GetDirection(var_47_cvector); // 0xd96 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0xd98 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0xd99 PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0xd9a PushE
	var_56_float = var_54_float * var_55_float; // 0xd9b Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0xd9c PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0xd9d PushE
	var_59_float = var_57_float * var_58_float; // 0xd9e Mult
	var_60_int = var_56_float + var_59_float; // 0xd9f Add
	var_61_int = 0; // 0xda0 PushI
	var_62_bool = var_60_int >= var_61_int; // 0xda1 GE
	if(var_62_bool == 0) goto Label_3493; // 0xda2 JumpB
	var_49_string = "fhit"; // 0xda3 MovS
	goto Label_3494; // 0xda4 Jump
	
Label_3494:
	var_63_string = "hit_react"; // 0xda6 PushS
	var_64_string = "1"; // 0xda7 PushS
	var_65_int = var_49_string + var_64_string; // 0xda8 Add
	var_66_string = "2"; // 0xda9 PushS
	var_67_int = var_49_string + var_66_string; // 0xdaa Add
	var_68_int = -10; // 0xdab PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0xdac Func
	return 14; // 0xdae Return
	
Label_3493:
	var_49_string = "bhit"; // 0xda5 MovS
}


func_2949(var_0_bool, var_300_bool)
{
	var_301_bool = 0; var_302_bool = 0; // 0xb85 PushV
	var_303_string = "IsAttacking"; // 0xb86 PushS
	var_304_int = 1; // 0xb87 PushI
	var_305_bool = IsFuncExist(var_0_bool, var_303_string, var_304_int); // 0xb88 FuncExist
	if(var_305_bool == 0) goto Label_2958; // 0xb89 JumpB
	IsAttacking(var_302_bool); // 0xb8a TObjFunc
	var_300_bool = var_302_bool; // 0xb8c Mov
	return 2; // 0xb8d Return
	
Label_2958:
	var_300_bool = 0; // 0xb8e MovB
	return 2; // 0xb8f Return
}


func_1928(var_2_object)
{
	var_19_int = 110; // 0x788 PushI
	KillTimer(var_19_int); // 0x789 Func
	var_2_object = 0; // 0x78b TMovB
	func_2064(var_17_object, var_18_bool); // 0x78d NEW_2
	return 0; // 0x78f Return
}


func_4490(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x118a PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x118b PushV
	var_42_object = var_35_object; // 0x118c Mov
	var_43_string = "class"; // 0x118d MovS
	func_3309(var_41_bool, var_42_object, var_43_string); // 0x118e NEW_2
	var_50_bool = var_41_bool == 0; // 0x1190 Not
	if(var_50_bool == 0) goto Label_4500; // 0x1191 JumpB
	var_34_bool = 0; // 0x1192 MovB
	return 4; // 0x1193 Return
	
Label_4500:
	var_51_string = "class"; // 0x1194 PushS
	GetProperty(var_51_string, var_39_string); // 0x1195 Func
	var_52_string = "class"; // 0x1197 PushS
	GetProperty(var_52_string, var_40_string); // 0x1198 ObjFunc
	var_53_bool = 0; // 0x119a PushV
	var_53_bool = 0; // 0x119b MovB
	var_54_bool = var_36_bool == 0; // 0x119c Not
	if(var_54_bool == 0) goto Label_4513; // 0x119d JumpB
	var_55_bool = var_39_string == var_40_string; // 0x119e Eq
	if(var_55_bool == 0) goto Label_4513; // 0x119f JumpB
	var_53_bool = 1; // 0x11a0 MovB
	
Label_4513:
	if(var_53_bool == 0) goto Label_4516; // 0x11a1 JumpB
	var_34_bool = 1; // 0x11a2 MovB
	return 4; // 0x11a3 Return
	
Label_4516:
	var_56_string = "rat"; // 0x11a4 PushS
	var_57_bool = var_40_string == var_56_string; // 0x11a5 Eq
	if(var_57_bool == 0) goto Label_4522; // 0x11a6 JumpB
	var_34_bool = 0; // 0x11a7 MovB
	return 4; // 0x11a8 Return
	
Label_4522:
	var_58_string = "rat_big"; // 0x11aa PushS
	var_59_bool = var_40_string == var_58_string; // 0x11ab Eq
	if(var_59_bool == 0) goto Label_4528; // 0x11ac JumpB
	var_34_bool = 0; // 0x11ad MovB
	return 4; // 0x11ae Return
	
Label_4528:
	var_60_string = "dog"; // 0x11b0 PushS
	var_61_bool = var_40_string == var_60_string; // 0x11b1 Eq
	if(var_61_bool == 0) goto Label_4534; // 0x11b2 JumpB
	var_34_bool = 0; // 0x11b3 MovB
	return 4; // 0x11b4 Return
	
Label_4534:
	var_62_string = "grabitel"; // 0x11b6 PushS
	var_63_bool = var_40_string == var_62_string; // 0x11b7 Eq
	if(var_63_bool == 0) goto Label_4540; // 0x11b8 JumpB
	var_34_bool = 0; // 0x11b9 MovB
	return 4; // 0x11ba Return
	
Label_4540:
	var_64_string = "bomber"; // 0x11bc PushS
	var_65_bool = var_40_string == var_64_string; // 0x11bd Eq
	if(var_65_bool == 0) goto Label_4546; // 0x11be JumpB
	var_34_bool = 0; // 0x11bf MovB
	return 4; // 0x11c0 Return
	
Label_4546:
	var_66_string = "sanitar"; // 0x11c2 PushS
	var_67_bool = var_40_string == var_66_string; // 0x11c3 Eq
	if(var_67_bool == 0) goto Label_4552; // 0x11c4 JumpB
	var_34_bool = 0; // 0x11c5 MovB
	return 4; // 0x11c6 Return
	
Label_4552:
	var_68_string = "hunter"; // 0x11c8 PushS
	var_69_bool = var_40_string == var_68_string; // 0x11c9 Eq
	if(var_69_bool == 0) goto Label_4558; // 0x11ca JumpB
	var_34_bool = 0; // 0x11cb MovB
	return 4; // 0x11cc Return
	
Label_4558:
	var_70_string = "soldier"; // 0x11ce PushS
	var_71_bool = var_40_string == var_70_string; // 0x11cf Eq
	if(var_71_bool == 0) goto Label_4563; // 0x11d0 JumpB
	var_34_bool = 0; // 0x11d1 MovB
	return 4; // 0x11d2 Return
	
Label_4563:
	var_34_bool = 1; // 0x11d3 MovB
	return 4; // 0x11d4 Return
}


func_1936(var_2_object)
{
	var_78_int = 110; // 0x790 PushI
	KillTimer(var_78_int); // 0x791 Func
	var_2_object = 0; // 0x793 TMovB
	func_2071(var_22_bool, var_23_int); // 0x795 NEW_2
	return 0; // 0x797 Return
}


func_2960(var_2_object, var_5_bool)
{
	var_417_float = 0; var_418_int = 0; var_419_float = 0; var_420_int = 0; // 0xb90 PushV
	var_421_bool = var_2_object == 0; // 0xb91 Not
	if(var_421_bool == 0) goto Label_2964; // 0xb92 JumpB
	return 4; // 0xb93 Return
	
Label_2964:
	var_422_bool = var_5_bool; // 0xb94 PushT
	if(var_422_bool == 0) goto Label_2972; // 0xb95 JumpB
	var_423_int = -1; // 0xb96 PushI
	var_5_bool = var_5_bool + var_423_int; // 0xb97 Add2
	var_424_int = 0; // 0xb98 PushI
	var_425_bool = var_5_bool > var_424_int; // 0xb99 GT
	if(var_425_bool == 0) goto Label_2972; // 0xb9a JumpB
	return 4; // 0xb9b Return
	
Label_2972:
	rand(var_419_float); // 0xb9c Func
	var_426_float = 0; // 0xb9e PushV
	func_3010(var_426_float); // 0xb9f NEW_2
	var_427_bool = var_419_float < var_426_float; // 0xba1 LT
	if(var_427_bool == 0) goto Label_2991; // 0xba2 JumpB
	irand(var_420_int, var_419_float); // 0xba3 Func
	var_428_int = 1; // 0xba5 PushI
	var_420_int = var_420_int + var_428_int; // 0xba6 Add2
	var_429_string = "attack"; // 0xba7 PushS
	var_430_int = var_429_string + var_420_int; // 0xba8 Add
	Speak(var_430_int); // 0xba9 Func
	var_431_int = 0; // 0xbab PushV
	func_3008(var_431_int); // 0xbac NEW_2
	var_5_bool = var_431_int; // 0xbad TMov
	
Label_2991:
	return 4; // 0xbaf Return
}


func_3988(var_225_int)
{
	var_226_int = 0; var_227_int = 0; // 0xf94 PushV
	var_228_string = "branch"; // 0xf95 PushS
	GetVariable(var_228_string, var_227_int); // 0xf96 Func
	var_225_int = var_227_int; // 0xf98 Mov
	return 2; // 0xf99 Return
}


func_3994(var_33_object)
{
	var_34_int = 0; // 0xf9b PushV
	func_3988(var_34_int); // 0xf9c NEW_2
	var_38_int = 1; // 0xf9e PushI
	var_39_bool = var_34_int == var_38_int; // 0xf9f Eq
	if(var_39_bool == 0) goto Label_4004; // 0xfa0 JumpB
	WorkWithCorpse(var_33_object); // 0xfa1 Func
	goto Label_4006; // 0xfa3 Jump
	
Label_4006:
	return 0; // 0xfa6 Return
	
Label_4004:
	Barter(var_33_object); // 0xfa4 Func
}


func_1953(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0x7a1 PushV
	var_24_bool = 0; var_25_object = Obj(); // 0x7a2 PushV
	var_25_object = var_19_object; // 0x7a3 Mov
	func_3435(var_24_bool, var_25_object); // 0x7a4 NEW_2
	var_58_bool = var_24_bool == 0; // 0x7a6 Not
	if(var_58_bool == 0) goto Label_1961; // 0x7a7 JumpB
	return 4; // 0x7a8 Return
	
Label_1961:
	var_59_object = var_2_object; // 0x7a9 PushT
	if(var_59_object == 0) goto Label_1964; // 0x7aa JumpB
	return 4; // 0x7ab Return
	
Label_1964:
	IsPlayerActor(var_19_object, var_22_bool); // 0x7ac Func
	var_60_bool = var_22_bool == 0; // 0x7ae Not
	if(var_60_bool == 0) goto Label_1969; // 0x7af JumpB
	return 4; // 0x7b0 Return
	
Label_1969:
	var_61_int = 0; var_62_object = Obj(); // 0x7b1 PushV
	var_62_object = var_19_object; // 0x7b2 Mov
	func_4456(var_61_int, var_62_object); // 0x7b3 NEW_2
	var_23_int = var_61_int; // 0x7b4 Mov
	var_74_int = 0; // 0x7b6 PushI
	var_75_bool = var_23_int > var_74_int; // 0x7b7 GT
	if(var_75_bool == 0) goto Label_1992; // 0x7b8 JumpB
	var_76_int = 1; // 0x7b9 PushI
	var_77_bool = var_23_int > var_76_int; // 0x7ba GT
	if(var_77_bool == 0) goto Label_1983; // 0x7bb JumpB
	func_1936(var_23_int); // 0x7bd NEW_2
	
Label_1983:
	var_79_object = Obj(); // 0x7bf PushV
	var_79_object = var_19_object; // 0x7c0 Mov
	func_4466(var_79_object); // 0x7c1 NEW_2
	var_2_object = 1; // 0x7c3 TMovB
	var_545_int = 110; // 0x7c4 PushI
	var_546_float = 10.0; // 0x7c5 PushF
	SetTimer(var_545_int, var_546_float); // 0x7c6 Func
	
Label_1992:
	return 4; // 0x7c8 Return
}


func_4007(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; // 0xfa7 PushV
	var_132_bool = var_117_int > var_118_int; // 0xfa8 GT
	if(var_132_bool == 0) goto Label_4014; // 0xfa9 JumpB
	var_133_string = "GenerateMoney: iMin > iMax"; // 0xfaa PushS
	Trace(var_133_string); // 0xfab Func
	return 4; // 0xfad Return
	
Label_4014:
	var_130_int = 0; // 0xfae MovI
	var_134_bool = var_117_int != var_118_int; // 0xfaf Neq
	if(var_134_bool == 0) goto Label_4021; // 0xfb0 JumpB
	var_135_int = var_118_int - var_117_int; // 0xfb1 Sub
	irand(var_130_int, var_135_int); // 0xfb2 Func
	goto Label_4025; // 0xfb4 Jump
	
Label_4025:
	var_130_int = var_130_int + var_117_int; // 0xfb9 Add2
	var_136_int = 0; // 0xfba PushI
	var_137_bool = var_130_int == var_136_int; // 0xfbb Eq
	if(var_137_bool == 0) goto Label_4030; // 0xfbc JumpB
	return 4; // 0xfbd Return
	
Label_4030:
	var_138_int = 0; var_139_string = ""; // 0xfbe PushV
	var_139_string = "Money"; // 0xfbf MovS
	func_4254(var_138_int, var_139_string); // 0xfc0 NEW_2
	var_142_int = 0; // 0xfc2 PushI
	AddItem(var_131_bool, var_138_int, var_142_int, var_130_int); // 0xfc3 Func
	return 4; // 0xfc5 Return
	
Label_4021:
	var_143_int = 0; // 0xfb5 PushI
	var_144_bool = var_117_int == var_143_int; // 0xfb6 Eq
	if(var_144_bool == 0) goto Label_4025; // 0xfb7 JumpB
	return 4; // 0xfb8 Return
}


func_3503(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0xdaf PushV
	var_43_bool = 0; // 0xdb0 PushV
	var_43_bool = 0; // 0xdb1 MovB
	var_44_bool = 0; // 0xdb2 PushV
	var_44_bool = 0; // 0xdb3 MovB
	var_45_object = var_22_object; // 0xdb4 Push
	if(var_45_object == 0) goto Label_3514; // 0xdb5 JumpB
	var_46_int = 4; // 0xdb6 PushI
	var_47_bool = var_23_int != var_46_int; // 0xdb7 Neq
	if(var_47_bool == 0) goto Label_3514; // 0xdb8 JumpB
	var_44_bool = 1; // 0xdb9 MovB
	
Label_3514:
	if(var_44_bool == 0) goto Label_3519; // 0xdba JumpB
	var_48_int = 5; // 0xdbb PushI
	var_49_bool = var_23_int != var_48_int; // 0xdbc Neq
	if(var_49_bool == 0) goto Label_3519; // 0xdbd JumpB
	var_43_bool = 1; // 0xdbe MovB
	
Label_3519:
	if(var_43_bool == 0) goto Label_3566; // 0xdbf JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0xdc0 PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0xdc1 PushV
	var_53_object = var_22_object; // 0xdc2 Mov
	func_3289(var_53_object); // 0xdc3 NEW_2
	var_51_cvector = var_52_cvector; // 0xdc4 Mov
	func_3841(var_50_cvector, var_51_cvector); // 0xdc6 NEW_2
	var_34_cvector = var_50_cvector; // 0xdc7 Mov
	CreateVectorVector(var_35_object); // 0xdc9 Func
	var_36_int = 1; // 0xdcb MovI
	
Label_3532:
	var_63_string = "hit"; // 0xdcc PushS
	var_64_int = var_63_string + var_36_int; // 0xdcd Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0xdce Func
	var_65_bool = var_37_bool == 0; // 0xdd0 Not
	if(var_65_bool == 0) goto Label_3539; // 0xdd1 JumpB
	goto Label_3548; // 0xdd2 Jump
	
Label_3548:
	size(var_40_int); // 0xddc ObjFunc
	var_66_int = var_40_int; // 0xdde Push
	if(var_66_int == 0) goto Label_3565; // 0xddf JumpB
	irand(var_41_int, var_40_int); // 0xde0 Func
	get(var_42_cvector, var_41_int); // 0xde2 ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xde4 PushV
	var_67_object = var_22_object; // 0xde5 Mov
	var_68_int = var_23_int; // 0xde6 Mov
	var_69_float = var_24_float; // 0xde7 Mov
	var_70_cvector = var_42_cvector; // 0xde8 Mov
	var_71_cvector = -var_34_cvector; // 0xde9 Neg2
	func_3571(var_69_float, var_70_cvector, var_71_cvector); // 0xdea NEW_2
	return 18; // 0xdec Return
	
Label_3565:
	var_35_object = 0; // 0xded SetNull
	
Label_3566:
	var_112_object = Obj(); // 0xdee PushV
	var_112_object = var_22_object; // 0xdef Mov
	func_3459(var_112_object); // 0xdf0 NEW_2
	return 18; // 0xdf2 Return
	
Label_3539:
	var_113_int = var_39_cvector | var_34_cvector; // 0xdd3 Or
	var_114_float = 0.70711; // 0xdd4 PushF
	var_115_bool = var_113_int >= var_114_float; // 0xdd5 GE
	if(var_115_bool == 0) goto Label_3545; // 0xdd6 JumpB
	add(var_38_cvector); // 0xdd7 ObjFunc
	
Label_3545:
	var_116_int = 1; // 0xdd9 PushI
	var_36_int = var_36_int + var_116_int; // 0xdda Add2
	goto Label_3532; // 0xddb Jump
}


func_2992(var_0_bool)
{
	var_173_object = Obj(); // 0xbb0 PushV
	var_173_object = var_0_bool; // 0xbb1 MovT
	func_3893(var_173_object); // 0xbb2 NEW_2
	return 0; // 0xbb4 Return
}


func_2997(var_510_int)
{
	var_510_int = 0; // 0xbb5 MovI
	return 0; // 0xbb6 Return
}


func_2999()
{
	var_306_string = ""; // 0xbb7 PushV
	var_306_string = "attack_stay"; // 0xbb8 MovS
	func_3794(var_306_string); // 0xbb9 NEW_2
	return 0; // 0xbbb Return
}


func_3004()
{
	return 0; // 0xbbd Return
}


func_3006(var_535_bool)
{
	var_535_bool = 1; // 0xbbe MovB
	return 0; // 0xbbf Return
}


func_3008(var_431_int)
{
	var_431_int = 1; // 0xbc0 MovI
	return 0; // 0xbc1 Return
}


func_3010(var_426_float)
{
	var_426_float = 0.5; // 0xbc2 MovF
	return 0; // 0xbc3 Return
}


func_4038(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; // 0xfc6 PushV
	CreateInvItem(var_235_object); // 0xfc7 Func
	SetItemName(var_231_string); // 0xfc9 ObjFunc
	var_238_string = "Organ"; // 0xfcb PushS
	var_239_int = 1; // 0xfcc PushI
	SetProperty(var_238_string, var_239_int); // 0xfcd ObjFunc
	GetItemID(var_236_int); // 0xfcf ObjFunc
	var_240_int = 0; // 0xfd1 PushI
	var_241_int = 1; // 0xfd2 PushI
	AddItem(var_237_bool, var_235_object, var_240_int, var_241_int); // 0xfd3 Func
	return 6; // 0xfd5 Return
}


func_1993(var_0_bool, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x7c9 PushV
	var_0_bool = 0; // 0x7ca TMovB
	var_1_object = 0; // 0x7cb TMovB
	var_36_float = 0.5; // 0x7cc PushF
	rand(var_30_float, var_36_float); // 0x7cd Func
	Sleep(var_30_float); // 0x7cf Func
	
Label_2001:
	var_37_bool = var_0_bool == 0; // 0x7d1 Not
	if(var_37_bool == 0) goto Label_2051; // 0x7d2 JumpB
	var_38_bool = var_1_object == 0; // 0x7d3 Not
	if(var_38_bool == 0) goto Label_2020; // 0x7d4 JumpB
	
Label_2005:
	GetPosition(var_32_cvector); // 0x7d5 Func
	var_39_float = 0; // 0x7d7 PushV
	func_2052(var_39_float); // 0x7d8 NEW_2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool); // 0x7da Func
	var_42_bool = var_33_bool; // 0x7dc Push
	if(var_42_bool == 0) goto Label_2015; // 0x7dd JumpB
	goto Label_2019; // 0x7de Jump
	
Label_2019:
	goto Label_2021; // 0x7e3 Jump
	
Label_2021:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); // 0x7e5 PushV
	var_44_cvector = var_31_cvector; // 0x7e6 Mov
	func_2080(var_43_object, var_44_cvector); // 0x7e7 NEW_2
	var_34_object = var_43_object; // 0x7e8 Mov
	var_47_bool = var_34_object != 0; // 0x7ea NullNeq
	if(var_47_bool == 0) goto Label_2046; // 0x7eb JumpB
	RotatePath(var_34_object, var_35_bool); // 0x7ec Func
	var_48_bool = var_35_bool; // 0x7ee Push
	if(var_48_bool == 0) goto Label_2045; // 0x7ef JumpB
	var_49_bool = 0; // 0x7f0 PushV
	func_2078(var_49_bool); // 0x7f1 NEW_2
	FollowPath(var_34_object, var_49_bool, var_35_bool); // 0x7f3 Func
	var_34_object = 0; // 0x7f5 SetNull
	var_50_bool = var_35_bool; // 0x7f6 Push
	if(var_50_bool == 0) goto Label_2045; // 0x7f7 JumpB
	TaskCall(5); // 0x7f9 TaskCall
	func_2250(); // 0x7fa NEW_2
	TaskReturn(); // 0x7fb TaskReturn
	
Label_2045:
	goto Label_2049; // 0x7fd Jump
	
Label_2049:
	var_34_object = 0; // 0x801 SetNull
	goto Label_2001; // 0x802 Jump
	
Label_2046:
	var_102_int = 1; // 0x7fe PushI
	Sleep(var_102_int); // 0x7ff Func
	
Label_2015:
	var_103_int = 1; // 0x7df PushI
	Sleep(var_103_int); // 0x7e0 Func
	goto Label_2005; // 0x7e2 Jump
	
Label_2020:
	var_1_object = 0; // 0x7e4 TMovB
	
Label_2051:
	return 12; // 0x803 Return
}


func_3019(var_2_object, var_180_bool, var_181_object, var_182_float, var_183_float, var_184_bool, var_185_bool)
{
	var_189_bool = 0; var_190_bool = 0; var_191_bool = 0; var_192_bool = 0; // 0xbcb PushV
	var_193_object = Obj(); // 0xbcc PushV
	var_193_object = var_181_object; // 0xbcd Mov
	func_3893(var_193_object); // 0xbce NEW_2
	var_194_int = 1; // 0xbd0 PushI
	var_195_int = 5; // 0xbd1 PushI
	SetTimer(var_194_int, var_195_int); // 0xbd2 Func
	CanSee(var_191_bool, var_181_object); // 0xbd4 Func
	var_196_bool = var_191_bool; // 0xbd6 Push
	if(var_196_bool == 0) goto Label_3038; // 0xbd7 JumpB
	var_2_object = 1; // 0xbd8 TMovB
	var_197_object = Obj(); // 0xbd9 PushV
	var_197_object = var_181_object; // 0xbda Mov
	func_3776(var_197_object); // 0xbdb NEW_2
	goto Label_3039; // 0xbdd Jump
	
Label_3039:
	var_204_bool = 0; var_205_object = Obj(); // 0xbdf PushV
	var_205_object = var_181_object; // 0xbe0 Mov
	func_3304(var_204_bool, var_205_object); // 0xbe1 NEW_2
	if(var_204_bool == 0) goto Label_3049; // 0xbe3 JumpB
	var_208_object = Obj(); // 0xbe4 PushV
	func_3835(var_208_object); // 0xbe5 NEW_2
	SendPlayerEnemy(var_181_object, var_208_object); // 0xbe7 Func
	
Label_3049:
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0; var_212_float = 0; var_213_bool = 0; var_214_bool = 0; // 0xbe9 PushV
	var_210_object = var_181_object; // 0xbea Mov
	var_211_float = var_182_float; // 0xbeb Mov
	var_212_float = var_183_float; // 0xbec Mov
	var_213_bool = var_184_bool; // 0xbed Mov
	var_214_bool = var_185_bool; // 0xbee Mov
	func_3124(var_191_bool, var_192_bool, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool); // 0xbef NEW_2
	var_192_bool = var_209_bool; // 0xbf0 Mov
	var_260_object = var_2_object; // 0xbf2 PushT
	if(var_260_object == 0) goto Label_3063; // 0xbf3 JumpB
	var_261_string = "head"; // 0xbf4 PushS
	UnlookAsync(var_261_string); // 0xbf5 Func
	
Label_3063:
	var_262_int = 1; // 0xbf7 PushI
	KillTimer(var_262_int); // 0xbf8 Func
	var_180_bool = var_192_bool; // 0xbfa Mov
	return 4; // 0xbfb Return
	
Label_3038:
	var_2_object = 0; // 0xbde TMovB
}


func_4565(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj(); // 0x11d6 PushV
	var_89_object = var_86_object; // 0x11d7 Mov
	func_4472(var_88_int, var_89_object); // 0x11d8 NEW_2
	var_85_int = var_88_int; // 0x11d9 Mov
	return 0; // 0x11db Return
}


func_4055()
{
	var_225_int = 0; // 0xfd7 PushV
	func_3988(var_225_int); // 0xfd8 NEW_2
	var_229_int = 1; // 0xfda PushI
	var_230_bool = var_225_int != var_229_int; // 0xfdb Neq
	if(var_230_bool == 0) goto Label_4062; // 0xfdc JumpB
	return 0; // 0xfdd Return
	
Label_4062:
	var_231_string = ""; // 0xfde PushV
	var_231_string = "liver"; // 0xfdf MovS
	func_4038(var_231_string); // 0xfe0 NEW_2
	var_242_string = ""; // 0xfe2 PushV
	var_242_string = "kidney"; // 0xfe3 MovS
	func_4038(var_242_string); // 0xfe4 NEW_2
	var_243_string = ""; // 0xfe6 PushV
	var_243_string = "heart"; // 0xfe7 MovS
	func_4038(var_243_string); // 0xfe8 NEW_2
	var_244_string = ""; // 0xfea PushV
	var_244_string = "blood"; // 0xfeb MovS
	func_4038(var_244_string); // 0xfec NEW_2
	return 0; // 0xfee Return
}


func_4572(var_122_object)
{
	var_123_object = Obj(); // 0x11dd PushV
	var_123_object = var_122_object; // 0x11de Mov
	func_4482(var_123_object); // 0x11df NEW_2
	return 0; // 0x11e1 Return
}


func_4578(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x11e2 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x11e3 PushV
	var_35_object = var_29_object; // 0x11e4 Mov
	var_36_bool = !var_31_bool; // 0x11e5 Not2
	func_4490(var_34_bool, var_35_object, var_36_bool); // 0x11e6 NEW_2
	var_72_bool = var_34_bool == 0; // 0x11e8 Not
	if(var_72_bool == 0) goto Label_4588; // 0x11e9 JumpB
	var_27_bool = 0; // 0x11ea MovB
	return 2; // 0x11eb Return
	
Label_4588:
	CanSee(var_33_bool, var_28_object); // 0x11ec Func
	var_73_bool = 0; // 0x11ee PushV
	var_73_bool = 1; // 0x11ef MovB
	var_74_bool = var_33_bool; // 0x11f0 Push
	if(var_74_bool == 0) goto Label_4602; // 0x11f1 JumpB
	var_75_float = 0; var_76_object = Obj(); // 0x11f2 PushV
	var_76_object = var_28_object; // 0x11f3 Mov
	func_3296(var_76_object); // 0x11f4 NEW_2
	var_83_float = var_30_float * var_30_float; // 0x11f6 Mult
	var_84_bool = var_75_float <= var_83_float; // 0x11f7 LE
	if(var_84_bool == 0) goto Label_4602; // 0x11f8 JumpB
	var_73_bool = 0; // 0x11f9 MovB
	
Label_4602:
	if(var_73_bool == 0) goto Label_4605; // 0x11fa JumpB
	var_27_bool = 1; // 0x11fb MovB
	return 2; // 0x11fc Return
	
Label_4605:
	var_27_bool = 0; // 0x11fd MovB
	return 2; // 0x11fe Return
}


func_4079(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0xfef PushV
	var_116_bool = var_111_bool; // 0xff0 Push
	if(var_116_bool == 0) goto Label_4168; // 0xff1 JumpB
	var_117_int = 0; var_118_int = 0; // 0xff2 PushV
	var_117_int = 0; // 0xff3 MovI
	var_119_int = 100; // 0xff4 PushI
	var_120_int = 0; // 0xff5 PushV
	func_3884(var_120_int); // 0xff6 NEW_2
	var_126_int = 100; // 0xff8 PushI
	var_127_float = var_120_int * var_126_int; // 0xff9 Mult
	var_118_int = var_119_int + var_127_float; // 0xffa Add2
	func_4007(var_117_int, var_118_int); // 0xffb NEW_2
	var_145_int = 8; // 0xffd PushI
	irand(var_114_int, var_145_int); // 0xffe Func
	var_146_int = 0; // 0x1000 PushI
	var_147_bool = var_114_int == var_146_int; // 0x1001 Eq
	if(var_147_bool == 0) goto Label_4108; // 0x1002 JumpB
	var_148_int = 0; var_149_string = ""; // 0x1003 PushV
	var_149_string = "lemon"; // 0x1004 MovS
	func_4254(var_148_int, var_149_string); // 0x1005 NEW_2
	var_150_int = 0; // 0x1007 PushI
	var_151_int = 1; // 0x1008 PushI
	AddItem(var_115_bool, var_148_int, var_150_int, var_151_int); // 0x1009 Func
	goto Label_4167; // 0x100b Jump
	
Label_4167:
	goto Label_4253; // 0x1047 Jump
	
Label_4253:
	return 4; // 0x109d Return
	
Label_4108:
	var_152_int = 1; // 0x100c PushI
	var_153_bool = var_114_int == var_152_int; // 0x100d Eq
	if(var_153_bool == 0) goto Label_4120; // 0x100e JumpB
	var_154_int = 0; var_155_string = ""; // 0x100f PushV
	var_155_string = "rusk"; // 0x1010 MovS
	func_4254(var_154_int, var_155_string); // 0x1011 NEW_2
	var_156_int = 0; // 0x1013 PushI
	var_157_int = 1; // 0x1014 PushI
	AddItem(var_115_bool, var_154_int, var_156_int, var_157_int); // 0x1015 Func
	goto Label_4167; // 0x1017 Jump
	
Label_4120:
	var_158_int = 2; // 0x1018 PushI
	var_159_bool = var_114_int == var_158_int; // 0x1019 Eq
	if(var_159_bool == 0) goto Label_4132; // 0x101a JumpB
	var_160_int = 0; var_161_string = ""; // 0x101b PushV
	var_161_string = "hook"; // 0x101c MovS
	func_4254(var_160_int, var_161_string); // 0x101d NEW_2
	var_162_int = 0; // 0x101f PushI
	var_163_int = 1; // 0x1020 PushI
	AddItem(var_115_bool, var_160_int, var_162_int, var_163_int); // 0x1021 Func
	goto Label_4167; // 0x1023 Jump
	
Label_4132:
	var_164_int = 4; // 0x1024 PushI
	var_165_bool = var_114_int == var_164_int; // 0x1025 Eq
	if(var_165_bool == 0) goto Label_4144; // 0x1026 JumpB
	var_166_int = 0; var_167_string = ""; // 0x1027 PushV
	var_167_string = "syringe"; // 0x1028 MovS
	func_4254(var_166_int, var_167_string); // 0x1029 NEW_2
	var_168_int = 0; // 0x102b PushI
	var_169_int = 1; // 0x102c PushI
	AddItem(var_115_bool, var_166_int, var_168_int, var_169_int); // 0x102d Func
	goto Label_4167; // 0x102f Jump
	
Label_4144:
	var_170_int = 5; // 0x1030 PushI
	var_171_bool = var_114_int == var_170_int; // 0x1031 Eq
	if(var_171_bool == 0) goto Label_4156; // 0x1032 JumpB
	var_172_int = 0; var_173_string = ""; // 0x1033 PushV
	var_173_string = "watch"; // 0x1034 MovS
	func_4254(var_172_int, var_173_string); // 0x1035 NEW_2
	var_174_int = 0; // 0x1037 PushI
	var_175_int = 1; // 0x1038 PushI
	AddItem(var_115_bool, var_172_int, var_174_int, var_175_int); // 0x1039 Func
	goto Label_4167; // 0x103b Jump
	
Label_4156:
	var_176_int = 6; // 0x103c PushI
	var_177_bool = var_114_int == var_176_int; // 0x103d Eq
	if(var_177_bool == 0) goto Label_4167; // 0x103e JumpB
	var_178_int = 0; var_179_string = ""; // 0x103f PushV
	var_179_string = "razor"; // 0x1040 MovS
	func_4254(var_178_int, var_179_string); // 0x1041 NEW_2
	var_180_int = 0; // 0x1043 PushI
	var_181_int = 1; // 0x1044 PushI
	AddItem(var_115_bool, var_178_int, var_180_int, var_181_int); // 0x1045 Func
	
Label_4168:
	var_182_int = 0; var_183_int = 0; // 0x1048 PushV
	var_182_int = 0; // 0x1049 MovI
	var_184_int = 50; // 0x104a PushI
	var_185_int = 0; // 0x104b PushV
	func_3884(var_185_int); // 0x104c NEW_2
	var_186_int = 50; // 0x104e PushI
	var_187_float = var_185_int * var_186_int; // 0x104f Mult
	var_183_int = var_184_int + var_187_float; // 0x1050 Add2
	func_4007(var_182_int, var_183_int); // 0x1051 NEW_2
	var_188_int = 7; // 0x1053 PushI
	irand(var_114_int, var_188_int); // 0x1054 Func
	var_189_int = 0; // 0x1056 PushI
	var_190_bool = var_114_int == var_189_int; // 0x1057 Eq
	if(var_190_bool == 0) goto Label_4194; // 0x1058 JumpB
	var_191_int = 0; var_192_string = ""; // 0x1059 PushV
	var_192_string = "beads"; // 0x105a MovS
	func_4254(var_191_int, var_192_string); // 0x105b NEW_2
	var_193_int = 0; // 0x105d PushI
	var_194_int = 1; // 0x105e PushI
	AddItem(var_115_bool, var_191_int, var_193_int, var_194_int); // 0x105f Func
	goto Label_4253; // 0x1061 Jump
	
Label_4194:
	var_195_int = 1; // 0x1062 PushI
	var_196_bool = var_114_int == var_195_int; // 0x1063 Eq
	if(var_196_bool == 0) goto Label_4206; // 0x1064 JumpB
	var_197_int = 0; var_198_string = ""; // 0x1065 PushV
	var_198_string = "bracelet"; // 0x1066 MovS
	func_4254(var_197_int, var_198_string); // 0x1067 NEW_2
	var_199_int = 0; // 0x1069 PushI
	var_200_int = 1; // 0x106a PushI
	AddItem(var_115_bool, var_197_int, var_199_int, var_200_int); // 0x106b Func
	goto Label_4253; // 0x106d Jump
	
Label_4206:
	var_201_int = 2; // 0x106e PushI
	var_202_bool = var_114_int == var_201_int; // 0x106f Eq
	if(var_202_bool == 0) goto Label_4218; // 0x1070 JumpB
	var_203_int = 0; var_204_string = ""; // 0x1071 PushV
	var_204_string = "ear_ring"; // 0x1072 MovS
	func_4254(var_203_int, var_204_string); // 0x1073 NEW_2
	var_205_int = 0; // 0x1075 PushI
	var_206_int = 1; // 0x1076 PushI
	AddItem(var_115_bool, var_203_int, var_205_int, var_206_int); // 0x1077 Func
	goto Label_4253; // 0x1079 Jump
	
Label_4218:
	var_207_int = 3; // 0x107a PushI
	var_208_bool = var_114_int == var_207_int; // 0x107b Eq
	if(var_208_bool == 0) goto Label_4230; // 0x107c JumpB
	var_209_int = 0; var_210_string = ""; // 0x107d PushV
	var_210_string = "gold_ring"; // 0x107e MovS
	func_4254(var_209_int, var_210_string); // 0x107f NEW_2
	var_211_int = 0; // 0x1081 PushI
	var_212_int = 1; // 0x1082 PushI
	AddItem(var_115_bool, var_209_int, var_211_int, var_212_int); // 0x1083 Func
	goto Label_4253; // 0x1085 Jump
	
Label_4230:
	var_213_int = 4; // 0x1086 PushI
	var_214_bool = var_114_int == var_213_int; // 0x1087 Eq
	if(var_214_bool == 0) goto Label_4242; // 0x1088 JumpB
	var_215_int = 0; var_216_string = ""; // 0x1089 PushV
	var_216_string = "silver_ring"; // 0x108a MovS
	func_4254(var_215_int, var_216_string); // 0x108b NEW_2
	var_217_int = 0; // 0x108d PushI
	var_218_int = 1; // 0x108e PushI
	AddItem(var_115_bool, var_215_int, var_217_int, var_218_int); // 0x108f Func
	goto Label_4253; // 0x1091 Jump
	
Label_4242:
	var_219_int = 5; // 0x1092 PushI
	var_220_bool = var_114_int == var_219_int; // 0x1093 Eq
	if(var_220_bool == 0) goto Label_4253; // 0x1094 JumpB
	var_221_int = 0; var_222_string = ""; // 0x1095 PushV
	var_222_string = "flower"; // 0x1096 MovS
	func_4254(var_221_int, var_222_string); // 0x1097 NEW_2
	var_223_int = 0; // 0x1099 PushI
	var_224_int = 1; // 0x109a PushI
	AddItem(var_115_bool, var_221_int, var_223_int, var_224_int); // 0x109b Func
}


func_3571(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0xdf3 PushV
	GetScene(var_31_object); // 0xdf4 Func
	var_33_string = "scripted"; // 0xdf6 PushS
	var_34_string = "blood_dir.xml"; // 0xdf7 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0xdf8 Func
	var_35_object = Obj(); // 0xdfa PushV
	var_35_object = var_24_object; // 0xdfb Mov
	func_3459(var_35_object); // 0xdfc NEW_2
	return 4; // 0xdfe Return
}


func_4607(var_21_int)
{
	var_21_int = 0; // 0x1200 MovI
	return 0; // 0x1201 Return
}


