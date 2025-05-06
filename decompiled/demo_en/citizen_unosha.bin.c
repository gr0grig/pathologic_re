task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x1b PushV
	func_5024(var_20_bool); // 0x1c NEW_2
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


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0x13c PushI
	if(var_21_int == 0) goto Label_1560; // 0x13d JumpB
	func_4062(); // 0x13f NEW_2
	var_23_int = 45786; // 0x141 PushI
	var_24_bool = var_19_object == var_23_int; // 0x142 Eq
	if(var_24_bool == 0) goto Label_465; // 0x143 JumpB
	var_25_bool = 0; // 0x144 PushV
	var_25_bool = 0; // 0x145 MovB
	var_26_bool = 0; var_27_object = Obj(); // 0x146 PushV
	var_27_object = var_1_object; // 0x147 MovT
	func_4236(var_27_object); // 0x148 NEW_2
	if(var_26_bool == 0) goto Label_337; // 0x14a JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x14b PushV
	var_35_object = var_1_object; // 0x14c MovT
	func_4258(var_34_bool, var_35_object); // 0x14d NEW_2
	if(var_34_bool == 0) goto Label_337; // 0x14f JumpB
	var_25_bool = 1; // 0x150 MovB
	
Label_337:
	if(var_25_bool == 0) goto Label_363; // 0x151 JumpB
	var_45_string = ""; // 0x152 PushV
	var_45_string = "Neutral"; // 0x153 MovS
	func_293(var_20_bool, var_45_string); // 0x154 NEW_2
	var_62_int = 543329; // 0x156 PushI
	SetMessage(var_62_int); // 0x157 TObjFunc
	ClearReplies(); // 0x159 TObjFunc
	var_63_int = 543330; // 0x15b PushI
	var_64_int = 45790; // 0x15c PushI
	var_65_int = 45787; // 0x15d PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x15e TObjFunc
	var_66_int = 543332; // 0x160 PushI
	var_67_int = 45790; // 0x161 PushI
	var_68_int = 45789; // 0x162 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x163 TObjFunc
	var_69_int = 543331; // 0x165 PushI
	var_70_int = -1; // 0x166 PushI
	var_71_int = 45788; // 0x167 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_72_bool = 0; // 0x16b PushV
	var_72_bool = 0; // 0x16c MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x16d PushV
	var_74_object = var_1_object; // 0x16e MovT
	func_4236(var_74_object); // 0x16f NEW_2
	if(var_73_bool == 0) goto Label_377; // 0x171 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x172 PushV
	var_76_object = var_1_object; // 0x173 MovT
	func_4258(var_75_bool, var_76_object); // 0x174 NEW_2
	var_77_bool = var_75_bool == 0; // 0x176 Not
	if(var_77_bool == 0) goto Label_377; // 0x177 JumpB
	var_72_bool = 1; // 0x178 MovB
	
Label_377:
	if(var_72_bool == 0) goto Label_393; // 0x179 JumpB
	var_78_string = ""; // 0x17a PushV
	var_78_string = "Neutral"; // 0x17b MovS
	func_293(var_20_bool, var_78_string); // 0x17c NEW_2
	var_79_int = 543328; // 0x17e PushI
	SetMessage(var_79_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_80_int = 543336; // 0x183 PushI
	var_81_int = -1; // 0x184 PushI
	var_82_int = 45794; // 0x185 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x186 TObjFunc
	return 0; // 0x188 Return
	
Label_393:
	var_83_string = ""; // 0x189 PushV
	var_83_string = "Neutral"; // 0x18a MovS
	func_293(var_20_bool, var_83_string); // 0x18b NEW_2
	var_84_int = 537969; // 0x18d PushI
	SetMessage(var_84_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_85_bool = 0; // 0x192 PushV
	var_85_bool = 0; // 0x193 MovB
	var_86_bool = 0; var_87_object = Obj(); // 0x194 PushV
	var_87_object = var_1_object; // 0x195 MovT
	func_4248(var_86_bool, var_87_object); // 0x196 NEW_2
	if(var_86_bool == 0) goto Label_415; // 0x198 JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x199 PushV
	var_93_object = var_1_object; // 0x19a MovT
	func_4224(var_93_object); // 0x19b NEW_2
	if(var_92_bool == 0) goto Label_415; // 0x19d JumpB
	var_85_bool = 1; // 0x19e MovB
	
Label_415:
	if(var_85_bool == 0) goto Label_421; // 0x19f JumpB
	var_98_int = 537970; // 0x1a0 PushI
	var_99_int = 39833; // 0x1a1 PushI
	var_100_int = 39832; // 0x1a2 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x1a3 TObjFunc
	
Label_421:
	var_101_bool = 0; // 0x1a5 PushV
	var_101_bool = 0; // 0x1a6 MovB
	var_102_bool = 0; var_103_object = Obj(); // 0x1a7 PushV
	var_103_object = var_1_object; // 0x1a8 MovT
	func_4248(var_102_bool, var_103_object); // 0x1a9 NEW_2
	if(var_102_bool == 0) goto Label_434; // 0x1ab JumpB
	var_104_bool = 0; var_105_object = Obj(); // 0x1ac PushV
	var_105_object = var_1_object; // 0x1ad MovT
	func_4224(var_105_object); // 0x1ae NEW_2
	if(var_104_bool == 0) goto Label_434; // 0x1b0 JumpB
	var_101_bool = 1; // 0x1b1 MovB
	
Label_434:
	if(var_101_bool == 0) goto Label_440; // 0x1b2 JumpB
	var_106_int = 537995; // 0x1b3 PushI
	var_107_int = 39861; // 0x1b4 PushI
	var_108_int = 39860; // 0x1b5 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x1b6 TObjFunc
	
Label_440:
	var_109_bool = 0; // 0x1b8 PushV
	var_109_bool = 0; // 0x1b9 MovB
	var_110_bool = 0; var_111_object = Obj(); // 0x1ba PushV
	var_111_object = var_1_object; // 0x1bb MovT
	func_4248(var_110_bool, var_111_object); // 0x1bc NEW_2
	if(var_110_bool == 0) goto Label_453; // 0x1be JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x1bf PushV
	var_113_object = var_1_object; // 0x1c0 MovT
	func_4224(var_113_object); // 0x1c1 NEW_2
	if(var_112_bool == 0) goto Label_453; // 0x1c3 JumpB
	var_109_bool = 1; // 0x1c4 MovB
	
Label_453:
	if(var_109_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_114_int = 538003; // 0x1c6 PushI
	var_115_int = 39869; // 0x1c7 PushI
	var_116_int = 39868; // 0x1c8 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1c9 TObjFunc
	
Label_459:
	var_117_int = 538126; // 0x1cb PushI
	var_118_int = -1; // 0x1cc PushI
	var_119_int = 39997; // 0x1cd PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_120_int = 39980; // 0x1d1 PushI
	var_121_bool = var_19_object == var_120_int; // 0x1d2 Eq
	if(var_121_bool == 0) goto Label_468; // 0x1d3 JumpB
	
Label_468:
	var_122_int = 39982; // 0x1d4 PushI
	var_123_bool = var_19_object == var_122_int; // 0x1d5 Eq
	if(var_123_bool == 0) goto Label_491; // 0x1d6 JumpB
	var_124_string = ""; // 0x1d7 PushV
	var_124_string = "Neutral"; // 0x1d8 MovS
	func_293(var_20_bool, var_124_string); // 0x1d9 NEW_2
	var_125_int = 538113; // 0x1db PushI
	SetMessage(var_125_int); // 0x1dc TObjFunc
	ClearReplies(); // 0x1de TObjFunc
	var_126_int = 538114; // 0x1e0 PushI
	var_127_int = 39984; // 0x1e1 PushI
	var_128_int = 39983; // 0x1e2 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x1e3 TObjFunc
	var_129_int = 538118; // 0x1e5 PushI
	var_130_int = 39989; // 0x1e6 PushI
	var_131_int = 39988; // 0x1e7 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x1e8 TObjFunc
	return 0; // 0x1ea Return
	
Label_491:
	var_132_int = 39989; // 0x1eb PushI
	var_133_bool = var_19_object == var_132_int; // 0x1ec Eq
	if(var_133_bool == 0) goto Label_509; // 0x1ed JumpB
	var_134_string = ""; // 0x1ee PushV
	var_134_string = "Neutral"; // 0x1ef MovS
	func_293(var_20_bool, var_134_string); // 0x1f0 NEW_2
	var_135_int = 538119; // 0x1f2 PushI
	SetMessage(var_135_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_136_int = 538120; // 0x1f7 PushI
	var_137_int = 39991; // 0x1f8 PushI
	var_138_int = 39990; // 0x1f9 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_139_int = 39991; // 0x1fd PushI
	var_140_bool = var_19_object == var_139_int; // 0x1fe Eq
	if(var_140_bool == 0) goto Label_532; // 0x1ff JumpB
	var_141_string = ""; // 0x200 PushV
	var_141_string = "Neutral"; // 0x201 MovS
	func_293(var_20_bool, var_141_string); // 0x202 NEW_2
	var_142_int = 538121; // 0x204 PushI
	SetMessage(var_142_int); // 0x205 TObjFunc
	ClearReplies(); // 0x207 TObjFunc
	var_143_int = 538122; // 0x209 PushI
	var_144_int = -1; // 0x20a PushI
	var_145_int = 39992; // 0x20b PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x20c TObjFunc
	var_146_int = 538123; // 0x20e PushI
	var_147_int = -1; // 0x20f PushI
	var_148_int = 39993; // 0x210 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x211 TObjFunc
	return 0; // 0x213 Return
	
Label_532:
	var_149_int = 39984; // 0x214 PushI
	var_150_bool = var_19_object == var_149_int; // 0x215 Eq
	if(var_150_bool == 0) goto Label_555; // 0x216 JumpB
	var_151_string = ""; // 0x217 PushV
	var_151_string = "Neutral"; // 0x218 MovS
	func_293(var_20_bool, var_151_string); // 0x219 NEW_2
	var_152_int = 538115; // 0x21b PushI
	SetMessage(var_152_int); // 0x21c TObjFunc
	ClearReplies(); // 0x21e TObjFunc
	var_153_int = 538116; // 0x220 PushI
	var_154_int = -1; // 0x221 PushI
	var_155_int = 39985; // 0x222 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x223 TObjFunc
	var_156_int = 538117; // 0x225 PushI
	var_157_int = 39991; // 0x226 PushI
	var_158_int = 39986; // 0x227 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_159_int = 39952; // 0x22b PushI
	var_160_bool = var_19_object == var_159_int; // 0x22c Eq
	if(var_160_bool == 0) goto Label_558; // 0x22d JumpB
	
Label_558:
	var_161_int = 39972; // 0x22e PushI
	var_162_bool = var_19_object == var_161_int; // 0x22f Eq
	if(var_162_bool == 0) goto Label_581; // 0x230 JumpB
	var_163_string = ""; // 0x231 PushV
	var_163_string = "Neutral"; // 0x232 MovS
	func_293(var_20_bool, var_163_string); // 0x233 NEW_2
	var_164_int = 538104; // 0x235 PushI
	SetMessage(var_164_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_165_int = 538105; // 0x23a PushI
	var_166_int = 39974; // 0x23b PushI
	var_167_int = 39973; // 0x23c PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x23d TObjFunc
	var_168_int = 538108; // 0x23f PushI
	var_169_int = -1; // 0x240 PushI
	var_170_int = 39977; // 0x241 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x242 TObjFunc
	return 0; // 0x244 Return
	
Label_581:
	var_171_int = 39974; // 0x245 PushI
	var_172_bool = var_19_object == var_171_int; // 0x246 Eq
	if(var_172_bool == 0) goto Label_599; // 0x247 JumpB
	var_173_string = ""; // 0x248 PushV
	var_173_string = "Neutral"; // 0x249 MovS
	func_293(var_20_bool, var_173_string); // 0x24a NEW_2
	var_174_int = 538106; // 0x24c PushI
	SetMessage(var_174_int); // 0x24d TObjFunc
	ClearReplies(); // 0x24f TObjFunc
	var_175_int = 538107; // 0x251 PushI
	var_176_int = 39963; // 0x252 PushI
	var_177_int = 39975; // 0x253 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_178_int = 39963; // 0x257 PushI
	var_179_bool = var_19_object == var_178_int; // 0x258 Eq
	if(var_179_bool == 0) goto Label_622; // 0x259 JumpB
	var_180_string = ""; // 0x25a PushV
	var_180_string = "Neutral"; // 0x25b MovS
	func_293(var_20_bool, var_180_string); // 0x25c NEW_2
	var_181_int = 538095; // 0x25e PushI
	SetMessage(var_181_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_182_int = 538096; // 0x263 PushI
	var_183_int = 39965; // 0x264 PushI
	var_184_int = 39964; // 0x265 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x266 TObjFunc
	var_185_int = 538100; // 0x268 PushI
	var_186_int = 39969; // 0x269 PushI
	var_187_int = 39968; // 0x26a PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x26b TObjFunc
	return 0; // 0x26d Return
	
Label_622:
	var_188_int = 39969; // 0x26e PushI
	var_189_bool = var_19_object == var_188_int; // 0x26f Eq
	if(var_189_bool == 0) goto Label_640; // 0x270 JumpB
	var_190_string = ""; // 0x271 PushV
	var_190_string = "Neutral"; // 0x272 MovS
	func_293(var_20_bool, var_190_string); // 0x273 NEW_2
	var_191_int = 538101; // 0x275 PushI
	SetMessage(var_191_int); // 0x276 TObjFunc
	ClearReplies(); // 0x278 TObjFunc
	var_192_int = 538102; // 0x27a PushI
	var_193_int = -1; // 0x27b PushI
	var_194_int = 39970; // 0x27c PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x27d TObjFunc
	return 0; // 0x27f Return
	
Label_640:
	var_195_int = 39965; // 0x280 PushI
	var_196_bool = var_19_object == var_195_int; // 0x281 Eq
	if(var_196_bool == 0) goto Label_663; // 0x282 JumpB
	var_197_string = ""; // 0x283 PushV
	var_197_string = "Neutral"; // 0x284 MovS
	func_293(var_20_bool, var_197_string); // 0x285 NEW_2
	var_198_int = 538097; // 0x287 PushI
	SetMessage(var_198_int); // 0x288 TObjFunc
	ClearReplies(); // 0x28a TObjFunc
	var_199_int = 538098; // 0x28c PushI
	var_200_int = -1; // 0x28d PushI
	var_201_int = 39966; // 0x28e PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x28f TObjFunc
	var_202_int = 538099; // 0x291 PushI
	var_203_int = -1; // 0x292 PushI
	var_204_int = 39967; // 0x293 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x294 TObjFunc
	return 0; // 0x296 Return
	
Label_663:
	var_205_int = 39954; // 0x297 PushI
	var_206_bool = var_19_object == var_205_int; // 0x298 Eq
	if(var_206_bool == 0) goto Label_686; // 0x299 JumpB
	var_207_string = ""; // 0x29a PushV
	var_207_string = "Neutral"; // 0x29b MovS
	func_293(var_20_bool, var_207_string); // 0x29c NEW_2
	var_208_int = 538086; // 0x29e PushI
	SetMessage(var_208_int); // 0x29f TObjFunc
	ClearReplies(); // 0x2a1 TObjFunc
	var_209_int = 538087; // 0x2a3 PushI
	var_210_int = 39956; // 0x2a4 PushI
	var_211_int = 39955; // 0x2a5 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x2a6 TObjFunc
	var_212_int = 538093; // 0x2a8 PushI
	var_213_int = -1; // 0x2a9 PushI
	var_214_int = 39961; // 0x2aa PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x2ab TObjFunc
	return 0; // 0x2ad Return
	
Label_686:
	var_215_int = 39956; // 0x2ae PushI
	var_216_bool = var_19_object == var_215_int; // 0x2af Eq
	if(var_216_bool == 0) goto Label_704; // 0x2b0 JumpB
	var_217_string = ""; // 0x2b1 PushV
	var_217_string = "Neutral"; // 0x2b2 MovS
	func_293(var_20_bool, var_217_string); // 0x2b3 NEW_2
	var_218_int = 538088; // 0x2b5 PushI
	SetMessage(var_218_int); // 0x2b6 TObjFunc
	ClearReplies(); // 0x2b8 TObjFunc
	var_219_int = 538089; // 0x2ba PushI
	var_220_int = 39958; // 0x2bb PushI
	var_221_int = 39957; // 0x2bc PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x2bd TObjFunc
	return 0; // 0x2bf Return
	
Label_704:
	var_222_int = 39958; // 0x2c0 PushI
	var_223_bool = var_19_object == var_222_int; // 0x2c1 Eq
	if(var_223_bool == 0) goto Label_727; // 0x2c2 JumpB
	var_224_string = ""; // 0x2c3 PushV
	var_224_string = "Neutral"; // 0x2c4 MovS
	func_293(var_20_bool, var_224_string); // 0x2c5 NEW_2
	var_225_int = 538090; // 0x2c7 PushI
	SetMessage(var_225_int); // 0x2c8 TObjFunc
	ClearReplies(); // 0x2ca TObjFunc
	var_226_int = 538091; // 0x2cc PushI
	var_227_int = -1; // 0x2cd PushI
	var_228_int = 39959; // 0x2ce PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x2cf TObjFunc
	var_229_int = 538092; // 0x2d1 PushI
	var_230_int = -1; // 0x2d2 PushI
	var_231_int = 39960; // 0x2d3 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x2d4 TObjFunc
	return 0; // 0x2d6 Return
	
Label_727:
	var_232_int = 39911; // 0x2d7 PushI
	var_233_bool = var_19_object == var_232_int; // 0x2d8 Eq
	if(var_233_bool == 0) goto Label_730; // 0x2d9 JumpB
	
Label_730:
	var_234_int = 39932; // 0x2da PushI
	var_235_bool = var_19_object == var_234_int; // 0x2db Eq
	if(var_235_bool == 0) goto Label_748; // 0x2dc JumpB
	var_236_string = ""; // 0x2dd PushV
	var_236_string = "Neutral"; // 0x2de MovS
	func_293(var_20_bool, var_236_string); // 0x2df NEW_2
	var_237_int = 538064; // 0x2e1 PushI
	SetMessage(var_237_int); // 0x2e2 TObjFunc
	ClearReplies(); // 0x2e4 TObjFunc
	var_238_int = 538065; // 0x2e6 PushI
	var_239_int = 39934; // 0x2e7 PushI
	var_240_int = 39933; // 0x2e8 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x2e9 TObjFunc
	return 0; // 0x2eb Return
	
Label_748:
	var_241_int = 39934; // 0x2ec PushI
	var_242_bool = var_19_object == var_241_int; // 0x2ed Eq
	if(var_242_bool == 0) goto Label_766; // 0x2ee JumpB
	var_243_string = ""; // 0x2ef PushV
	var_243_string = "Neutral"; // 0x2f0 MovS
	func_293(var_20_bool, var_243_string); // 0x2f1 NEW_2
	var_244_int = 538066; // 0x2f3 PushI
	SetMessage(var_244_int); // 0x2f4 TObjFunc
	ClearReplies(); // 0x2f6 TObjFunc
	var_245_int = 538067; // 0x2f8 PushI
	var_246_int = 39936; // 0x2f9 PushI
	var_247_int = 39935; // 0x2fa PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x2fb TObjFunc
	return 0; // 0x2fd Return
	
Label_766:
	var_248_int = 39936; // 0x2fe PushI
	var_249_bool = var_19_object == var_248_int; // 0x2ff Eq
	if(var_249_bool == 0) goto Label_789; // 0x300 JumpB
	var_250_string = ""; // 0x301 PushV
	var_250_string = "Neutral"; // 0x302 MovS
	func_293(var_20_bool, var_250_string); // 0x303 NEW_2
	var_251_int = 538068; // 0x305 PushI
	SetMessage(var_251_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_252_int = 538069; // 0x30a PushI
	var_253_int = 39938; // 0x30b PushI
	var_254_int = 39937; // 0x30c PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x30d TObjFunc
	var_255_int = 538075; // 0x30f PushI
	var_256_int = 39944; // 0x310 PushI
	var_257_int = 39943; // 0x311 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x312 TObjFunc
	return 0; // 0x314 Return
	
Label_789:
	var_258_int = 39944; // 0x315 PushI
	var_259_bool = var_19_object == var_258_int; // 0x316 Eq
	if(var_259_bool == 0) goto Label_812; // 0x317 JumpB
	var_260_string = ""; // 0x318 PushV
	var_260_string = "Neutral"; // 0x319 MovS
	func_293(var_20_bool, var_260_string); // 0x31a NEW_2
	var_261_int = 538076; // 0x31c PushI
	SetMessage(var_261_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_262_int = 538077; // 0x321 PushI
	var_263_int = 39946; // 0x322 PushI
	var_264_int = 39945; // 0x323 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x324 TObjFunc
	var_265_int = 538082; // 0x326 PushI
	var_266_int = -1; // 0x327 PushI
	var_267_int = 39950; // 0x328 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x329 TObjFunc
	return 0; // 0x32b Return
	
Label_812:
	var_268_int = 39946; // 0x32c PushI
	var_269_bool = var_19_object == var_268_int; // 0x32d Eq
	if(var_269_bool == 0) goto Label_830; // 0x32e JumpB
	var_270_string = ""; // 0x32f PushV
	var_270_string = "Neutral"; // 0x330 MovS
	func_293(var_20_bool, var_270_string); // 0x331 NEW_2
	var_271_int = 538078; // 0x333 PushI
	SetMessage(var_271_int); // 0x334 TObjFunc
	ClearReplies(); // 0x336 TObjFunc
	var_272_int = 538079; // 0x338 PushI
	var_273_int = 39948; // 0x339 PushI
	var_274_int = 39947; // 0x33a PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x33b TObjFunc
	return 0; // 0x33d Return
	
Label_830:
	var_275_int = 39948; // 0x33e PushI
	var_276_bool = var_19_object == var_275_int; // 0x33f Eq
	if(var_276_bool == 0) goto Label_848; // 0x340 JumpB
	var_277_string = ""; // 0x341 PushV
	var_277_string = "Neutral"; // 0x342 MovS
	func_293(var_20_bool, var_277_string); // 0x343 NEW_2
	var_278_int = 538080; // 0x345 PushI
	SetMessage(var_278_int); // 0x346 TObjFunc
	ClearReplies(); // 0x348 TObjFunc
	var_279_int = 538081; // 0x34a PushI
	var_280_int = -1; // 0x34b PushI
	var_281_int = 39949; // 0x34c PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x34d TObjFunc
	return 0; // 0x34f Return
	
Label_848:
	var_282_int = 39938; // 0x350 PushI
	var_283_bool = var_19_object == var_282_int; // 0x351 Eq
	if(var_283_bool == 0) goto Label_871; // 0x352 JumpB
	var_284_string = ""; // 0x353 PushV
	var_284_string = "Neutral"; // 0x354 MovS
	func_293(var_20_bool, var_284_string); // 0x355 NEW_2
	var_285_int = 538070; // 0x357 PushI
	SetMessage(var_285_int); // 0x358 TObjFunc
	ClearReplies(); // 0x35a TObjFunc
	var_286_int = 538071; // 0x35c PushI
	var_287_int = 39940; // 0x35d PushI
	var_288_int = 39939; // 0x35e PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x35f TObjFunc
	var_289_int = 538074; // 0x361 PushI
	var_290_int = -1; // 0x362 PushI
	var_291_int = 39942; // 0x363 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x364 TObjFunc
	return 0; // 0x366 Return
	
Label_871:
	var_292_int = 39940; // 0x367 PushI
	var_293_bool = var_19_object == var_292_int; // 0x368 Eq
	if(var_293_bool == 0) goto Label_889; // 0x369 JumpB
	var_294_string = ""; // 0x36a PushV
	var_294_string = "Neutral"; // 0x36b MovS
	func_293(var_20_bool, var_294_string); // 0x36c NEW_2
	var_295_int = 538072; // 0x36e PushI
	SetMessage(var_295_int); // 0x36f TObjFunc
	ClearReplies(); // 0x371 TObjFunc
	var_296_int = 538073; // 0x373 PushI
	var_297_int = -1; // 0x374 PushI
	var_298_int = 39941; // 0x375 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x376 TObjFunc
	return 0; // 0x378 Return
	
Label_889:
	var_299_int = 39913; // 0x379 PushI
	var_300_bool = var_19_object == var_299_int; // 0x37a Eq
	if(var_300_bool == 0) goto Label_912; // 0x37b JumpB
	var_301_string = ""; // 0x37c PushV
	var_301_string = "Neutral"; // 0x37d MovS
	func_293(var_20_bool, var_301_string); // 0x37e NEW_2
	var_302_int = 538046; // 0x380 PushI
	SetMessage(var_302_int); // 0x381 TObjFunc
	ClearReplies(); // 0x383 TObjFunc
	var_303_int = 538047; // 0x385 PushI
	var_304_int = 39915; // 0x386 PushI
	var_305_int = 39914; // 0x387 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x388 TObjFunc
	var_306_int = 538060; // 0x38a PushI
	var_307_int = 39928; // 0x38b PushI
	var_308_int = 39927; // 0x38c PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x38d TObjFunc
	return 0; // 0x38f Return
	
Label_912:
	var_309_int = 39928; // 0x390 PushI
	var_310_bool = var_19_object == var_309_int; // 0x391 Eq
	if(var_310_bool == 0) goto Label_930; // 0x392 JumpB
	var_311_string = ""; // 0x393 PushV
	var_311_string = "Neutral"; // 0x394 MovS
	func_293(var_20_bool, var_311_string); // 0x395 NEW_2
	var_312_int = 538061; // 0x397 PushI
	SetMessage(var_312_int); // 0x398 TObjFunc
	ClearReplies(); // 0x39a TObjFunc
	var_313_int = 538062; // 0x39c PushI
	var_314_int = 39915; // 0x39d PushI
	var_315_int = 39929; // 0x39e PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x39f TObjFunc
	return 0; // 0x3a1 Return
	
Label_930:
	var_316_int = 39915; // 0x3a2 PushI
	var_317_bool = var_19_object == var_316_int; // 0x3a3 Eq
	if(var_317_bool == 0) goto Label_953; // 0x3a4 JumpB
	var_318_string = ""; // 0x3a5 PushV
	var_318_string = "Neutral"; // 0x3a6 MovS
	func_293(var_20_bool, var_318_string); // 0x3a7 NEW_2
	var_319_int = 538048; // 0x3a9 PushI
	SetMessage(var_319_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_320_int = 538049; // 0x3ae PushI
	var_321_int = 39917; // 0x3af PushI
	var_322_int = 39916; // 0x3b0 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x3b1 TObjFunc
	var_323_int = 538057; // 0x3b3 PushI
	var_324_int = 39925; // 0x3b4 PushI
	var_325_int = 39924; // 0x3b5 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x3b6 TObjFunc
	return 0; // 0x3b8 Return
	
Label_953:
	var_326_int = 39925; // 0x3b9 PushI
	var_327_bool = var_19_object == var_326_int; // 0x3ba Eq
	if(var_327_bool == 0) goto Label_971; // 0x3bb JumpB
	var_328_string = ""; // 0x3bc PushV
	var_328_string = "Neutral"; // 0x3bd MovS
	func_293(var_20_bool, var_328_string); // 0x3be NEW_2
	var_329_int = 538058; // 0x3c0 PushI
	SetMessage(var_329_int); // 0x3c1 TObjFunc
	ClearReplies(); // 0x3c3 TObjFunc
	var_330_int = 538059; // 0x3c5 PushI
	var_331_int = -1; // 0x3c6 PushI
	var_332_int = 39926; // 0x3c7 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_333_int = 39917; // 0x3cb PushI
	var_334_bool = var_19_object == var_333_int; // 0x3cc Eq
	if(var_334_bool == 0) goto Label_994; // 0x3cd JumpB
	var_335_string = ""; // 0x3ce PushV
	var_335_string = "Neutral"; // 0x3cf MovS
	func_293(var_20_bool, var_335_string); // 0x3d0 NEW_2
	var_336_int = 538050; // 0x3d2 PushI
	SetMessage(var_336_int); // 0x3d3 TObjFunc
	ClearReplies(); // 0x3d5 TObjFunc
	var_337_int = 538051; // 0x3d7 PushI
	var_338_int = 39919; // 0x3d8 PushI
	var_339_int = 39918; // 0x3d9 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x3da TObjFunc
	var_340_int = 538056; // 0x3dc PushI
	var_341_int = -1; // 0x3dd PushI
	var_342_int = 39923; // 0x3de PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x3df TObjFunc
	return 0; // 0x3e1 Return
	
Label_994:
	var_343_int = 39919; // 0x3e2 PushI
	var_344_bool = var_19_object == var_343_int; // 0x3e3 Eq
	if(var_344_bool == 0) goto Label_1012; // 0x3e4 JumpB
	var_345_string = ""; // 0x3e5 PushV
	var_345_string = "Neutral"; // 0x3e6 MovS
	func_293(var_20_bool, var_345_string); // 0x3e7 NEW_2
	var_346_int = 538052; // 0x3e9 PushI
	SetMessage(var_346_int); // 0x3ea TObjFunc
	ClearReplies(); // 0x3ec TObjFunc
	var_347_int = 538053; // 0x3ee PushI
	var_348_int = 39921; // 0x3ef PushI
	var_349_int = 39920; // 0x3f0 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x3f1 TObjFunc
	return 0; // 0x3f3 Return
	
Label_1012:
	var_350_int = 39921; // 0x3f4 PushI
	var_351_bool = var_19_object == var_350_int; // 0x3f5 Eq
	if(var_351_bool == 0) goto Label_1030; // 0x3f6 JumpB
	var_352_string = ""; // 0x3f7 PushV
	var_352_string = "Neutral"; // 0x3f8 MovS
	func_293(var_20_bool, var_352_string); // 0x3f9 NEW_2
	var_353_int = 538054; // 0x3fb PushI
	SetMessage(var_353_int); // 0x3fc TObjFunc
	ClearReplies(); // 0x3fe TObjFunc
	var_354_int = 538055; // 0x400 PushI
	var_355_int = -1; // 0x401 PushI
	var_356_int = 39922; // 0x402 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x403 TObjFunc
	return 0; // 0x405 Return
	
Label_1030:
	var_357_int = 39883; // 0x406 PushI
	var_358_bool = var_19_object == var_357_int; // 0x407 Eq
	if(var_358_bool == 0) goto Label_1033; // 0x408 JumpB
	
Label_1033:
	var_359_int = 39907; // 0x409 PushI
	var_360_bool = var_19_object == var_359_int; // 0x40a Eq
	if(var_360_bool == 0) goto Label_1051; // 0x40b JumpB
	var_361_string = ""; // 0x40c PushV
	var_361_string = "Neutral"; // 0x40d MovS
	func_293(var_20_bool, var_361_string); // 0x40e NEW_2
	var_362_int = 538040; // 0x410 PushI
	SetMessage(var_362_int); // 0x411 TObjFunc
	ClearReplies(); // 0x413 TObjFunc
	var_363_int = 538041; // 0x415 PushI
	var_364_int = -1; // 0x416 PushI
	var_365_int = 39908; // 0x417 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_366_int = 39897; // 0x41b PushI
	var_367_bool = var_19_object == var_366_int; // 0x41c Eq
	if(var_367_bool == 0) goto Label_1074; // 0x41d JumpB
	var_368_string = ""; // 0x41e PushV
	var_368_string = "Neutral"; // 0x41f MovS
	func_293(var_20_bool, var_368_string); // 0x420 NEW_2
	var_369_int = 538031; // 0x422 PushI
	SetMessage(var_369_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_370_int = 538032; // 0x427 PushI
	var_371_int = 39899; // 0x428 PushI
	var_372_int = 39898; // 0x429 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x42a TObjFunc
	var_373_int = 538038; // 0x42c PushI
	var_374_int = 39899; // 0x42d PushI
	var_375_int = 39904; // 0x42e PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x42f TObjFunc
	return 0; // 0x431 Return
	
Label_1074:
	var_376_int = 39899; // 0x432 PushI
	var_377_bool = var_19_object == var_376_int; // 0x433 Eq
	if(var_377_bool == 0) goto Label_1097; // 0x434 JumpB
	var_378_string = ""; // 0x435 PushV
	var_378_string = "Neutral"; // 0x436 MovS
	func_293(var_20_bool, var_378_string); // 0x437 NEW_2
	var_379_int = 538033; // 0x439 PushI
	SetMessage(var_379_int); // 0x43a TObjFunc
	ClearReplies(); // 0x43c TObjFunc
	var_380_int = 538034; // 0x43e PushI
	var_381_int = 39901; // 0x43f PushI
	var_382_int = 39900; // 0x440 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x441 TObjFunc
	var_383_int = 538037; // 0x443 PushI
	var_384_int = -1; // 0x444 PushI
	var_385_int = 39903; // 0x445 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x446 TObjFunc
	return 0; // 0x448 Return
	
Label_1097:
	var_386_int = 39901; // 0x449 PushI
	var_387_bool = var_19_object == var_386_int; // 0x44a Eq
	if(var_387_bool == 0) goto Label_1115; // 0x44b JumpB
	var_388_string = ""; // 0x44c PushV
	var_388_string = "Neutral"; // 0x44d MovS
	func_293(var_20_bool, var_388_string); // 0x44e NEW_2
	var_389_int = 538035; // 0x450 PushI
	SetMessage(var_389_int); // 0x451 TObjFunc
	ClearReplies(); // 0x453 TObjFunc
	var_390_int = 538036; // 0x455 PushI
	var_391_int = -1; // 0x456 PushI
	var_392_int = 39902; // 0x457 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_393_int = 39885; // 0x45b PushI
	var_394_bool = var_19_object == var_393_int; // 0x45c Eq
	if(var_394_bool == 0) goto Label_1138; // 0x45d JumpB
	var_395_string = ""; // 0x45e PushV
	var_395_string = "Neutral"; // 0x45f MovS
	func_293(var_20_bool, var_395_string); // 0x460 NEW_2
	var_396_int = 538020; // 0x462 PushI
	SetMessage(var_396_int); // 0x463 TObjFunc
	ClearReplies(); // 0x465 TObjFunc
	var_397_int = 538021; // 0x467 PushI
	var_398_int = 39887; // 0x468 PushI
	var_399_int = 39886; // 0x469 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x46a TObjFunc
	var_400_int = 538027; // 0x46c PushI
	var_401_int = 39894; // 0x46d PushI
	var_402_int = 39893; // 0x46e PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x46f TObjFunc
	return 0; // 0x471 Return
	
Label_1138:
	var_403_int = 39894; // 0x472 PushI
	var_404_bool = var_19_object == var_403_int; // 0x473 Eq
	if(var_404_bool == 0) goto Label_1156; // 0x474 JumpB
	var_405_string = ""; // 0x475 PushV
	var_405_string = "Neutral"; // 0x476 MovS
	func_293(var_20_bool, var_405_string); // 0x477 NEW_2
	var_406_int = 538028; // 0x479 PushI
	SetMessage(var_406_int); // 0x47a TObjFunc
	ClearReplies(); // 0x47c TObjFunc
	var_407_int = 538029; // 0x47e PushI
	var_408_int = -1; // 0x47f PushI
	var_409_int = 39895; // 0x480 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_410_int = 39887; // 0x484 PushI
	var_411_bool = var_19_object == var_410_int; // 0x485 Eq
	if(var_411_bool == 0) goto Label_1179; // 0x486 JumpB
	var_412_string = ""; // 0x487 PushV
	var_412_string = "Neutral"; // 0x488 MovS
	func_293(var_20_bool, var_412_string); // 0x489 NEW_2
	var_413_int = 538022; // 0x48b PushI
	SetMessage(var_413_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_414_int = 538023; // 0x490 PushI
	var_415_int = 39889; // 0x491 PushI
	var_416_int = 39888; // 0x492 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x493 TObjFunc
	var_417_int = 538026; // 0x495 PushI
	var_418_int = 39889; // 0x496 PushI
	var_419_int = 39891; // 0x497 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x498 TObjFunc
	return 0; // 0x49a Return
	
Label_1179:
	var_420_int = 39889; // 0x49b PushI
	var_421_bool = var_19_object == var_420_int; // 0x49c Eq
	if(var_421_bool == 0) goto Label_1197; // 0x49d JumpB
	var_422_string = ""; // 0x49e PushV
	var_422_string = "Neutral"; // 0x49f MovS
	func_293(var_20_bool, var_422_string); // 0x4a0 NEW_2
	var_423_int = 538024; // 0x4a2 PushI
	SetMessage(var_423_int); // 0x4a3 TObjFunc
	ClearReplies(); // 0x4a5 TObjFunc
	var_424_int = 538025; // 0x4a7 PushI
	var_425_int = -1; // 0x4a8 PushI
	var_426_int = 39890; // 0x4a9 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x4aa TObjFunc
	return 0; // 0x4ac Return
	
Label_1197:
	var_427_int = 39878; // 0x4ad PushI
	var_428_bool = var_19_object == var_427_int; // 0x4ae Eq
	if(var_428_bool == 0) goto Label_1200; // 0x4af JumpB
	
Label_1200:
	var_429_int = 39880; // 0x4b0 PushI
	var_430_bool = var_19_object == var_429_int; // 0x4b1 Eq
	if(var_430_bool == 0) goto Label_1218; // 0x4b2 JumpB
	var_431_string = ""; // 0x4b3 PushV
	var_431_string = "Neutral"; // 0x4b4 MovS
	func_293(var_20_bool, var_431_string); // 0x4b5 NEW_2
	var_432_int = 538015; // 0x4b7 PushI
	SetMessage(var_432_int); // 0x4b8 TObjFunc
	ClearReplies(); // 0x4ba TObjFunc
	var_433_int = 538016; // 0x4bc PushI
	var_434_int = -1; // 0x4bd PushI
	var_435_int = 39881; // 0x4be PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x4bf TObjFunc
	return 0; // 0x4c1 Return
	
Label_1218:
	var_436_int = 39869; // 0x4c2 PushI
	var_437_bool = var_19_object == var_436_int; // 0x4c3 Eq
	if(var_437_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_438_string = ""; // 0x4c5 PushV
	var_438_string = "Neutral"; // 0x4c6 MovS
	func_293(var_20_bool, var_438_string); // 0x4c7 NEW_2
	var_439_int = 538004; // 0x4c9 PushI
	SetMessage(var_439_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_440_int = 538005; // 0x4ce PushI
	var_441_int = 39871; // 0x4cf PushI
	var_442_int = 39870; // 0x4d0 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x4d1 TObjFunc
	var_443_int = 538011; // 0x4d3 PushI
	var_444_int = -1; // 0x4d4 PushI
	var_445_int = 39876; // 0x4d5 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_446_int = 39871; // 0x4d9 PushI
	var_447_bool = var_19_object == var_446_int; // 0x4da Eq
	if(var_447_bool == 0) goto Label_1259; // 0x4db JumpB
	var_448_string = ""; // 0x4dc PushV
	var_448_string = "Neutral"; // 0x4dd MovS
	func_293(var_20_bool, var_448_string); // 0x4de NEW_2
	var_449_int = 538006; // 0x4e0 PushI
	SetMessage(var_449_int); // 0x4e1 TObjFunc
	ClearReplies(); // 0x4e3 TObjFunc
	var_450_int = 538007; // 0x4e5 PushI
	var_451_int = 39873; // 0x4e6 PushI
	var_452_int = 39872; // 0x4e7 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x4e8 TObjFunc
	return 0; // 0x4ea Return
	
Label_1259:
	var_453_int = 39873; // 0x4eb PushI
	var_454_bool = var_19_object == var_453_int; // 0x4ec Eq
	if(var_454_bool == 0) goto Label_1282; // 0x4ed JumpB
	var_455_string = ""; // 0x4ee PushV
	var_455_string = "Neutral"; // 0x4ef MovS
	func_293(var_20_bool, var_455_string); // 0x4f0 NEW_2
	var_456_int = 538008; // 0x4f2 PushI
	SetMessage(var_456_int); // 0x4f3 TObjFunc
	ClearReplies(); // 0x4f5 TObjFunc
	var_457_int = 538009; // 0x4f7 PushI
	var_458_int = -1; // 0x4f8 PushI
	var_459_int = 39874; // 0x4f9 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x4fa TObjFunc
	var_460_int = 538010; // 0x4fc PushI
	var_461_int = -1; // 0x4fd PushI
	var_462_int = 39875; // 0x4fe PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x4ff TObjFunc
	return 0; // 0x501 Return
	
Label_1282:
	var_463_int = 39861; // 0x502 PushI
	var_464_bool = var_19_object == var_463_int; // 0x503 Eq
	if(var_464_bool == 0) goto Label_1300; // 0x504 JumpB
	var_465_string = ""; // 0x505 PushV
	var_465_string = "Neutral"; // 0x506 MovS
	func_293(var_20_bool, var_465_string); // 0x507 NEW_2
	var_466_int = 537996; // 0x509 PushI
	SetMessage(var_466_int); // 0x50a TObjFunc
	ClearReplies(); // 0x50c TObjFunc
	var_467_int = 537997; // 0x50e PushI
	var_468_int = 39863; // 0x50f PushI
	var_469_int = 39862; // 0x510 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x511 TObjFunc
	return 0; // 0x513 Return
	
Label_1300:
	var_470_int = 39863; // 0x514 PushI
	var_471_bool = var_19_object == var_470_int; // 0x515 Eq
	if(var_471_bool == 0) goto Label_1323; // 0x516 JumpB
	var_472_string = ""; // 0x517 PushV
	var_472_string = "Neutral"; // 0x518 MovS
	func_293(var_20_bool, var_472_string); // 0x519 NEW_2
	var_473_int = 537998; // 0x51b PushI
	SetMessage(var_473_int); // 0x51c TObjFunc
	ClearReplies(); // 0x51e TObjFunc
	var_474_int = 537999; // 0x520 PushI
	var_475_int = 39865; // 0x521 PushI
	var_476_int = 39864; // 0x522 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x523 TObjFunc
	var_477_int = 538002; // 0x525 PushI
	var_478_int = -1; // 0x526 PushI
	var_479_int = 39867; // 0x527 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x528 TObjFunc
	return 0; // 0x52a Return
	
Label_1323:
	var_480_int = 39865; // 0x52b PushI
	var_481_bool = var_19_object == var_480_int; // 0x52c Eq
	if(var_481_bool == 0) goto Label_1341; // 0x52d JumpB
	var_482_string = ""; // 0x52e PushV
	var_482_string = "Neutral"; // 0x52f MovS
	func_293(var_20_bool, var_482_string); // 0x530 NEW_2
	var_483_int = 538000; // 0x532 PushI
	SetMessage(var_483_int); // 0x533 TObjFunc
	ClearReplies(); // 0x535 TObjFunc
	var_484_int = 538001; // 0x537 PushI
	var_485_int = -1; // 0x538 PushI
	var_486_int = 39866; // 0x539 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x53a TObjFunc
	return 0; // 0x53c Return
	
Label_1341:
	var_487_int = 39833; // 0x53d PushI
	var_488_bool = var_19_object == var_487_int; // 0x53e Eq
	if(var_488_bool == 0) goto Label_1374; // 0x53f JumpB
	var_489_string = ""; // 0x540 PushV
	var_489_string = "Neutral"; // 0x541 MovS
	func_293(var_20_bool, var_489_string); // 0x542 NEW_2
	var_490_int = 537971; // 0x544 PushI
	SetMessage(var_490_int); // 0x545 TObjFunc
	ClearReplies(); // 0x547 TObjFunc
	var_491_int = 537972; // 0x549 PushI
	var_492_int = 39835; // 0x54a PushI
	var_493_int = 39834; // 0x54b PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x54c TObjFunc
	var_494_int = 537976; // 0x54e PushI
	var_495_int = 39840; // 0x54f PushI
	var_496_int = 39839; // 0x550 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x551 TObjFunc
	var_497_int = 537988; // 0x553 PushI
	var_498_int = 39852; // 0x554 PushI
	var_499_int = 39851; // 0x555 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x556 TObjFunc
	var_500_int = 537994; // 0x558 PushI
	var_501_int = -1; // 0x559 PushI
	var_502_int = 39859; // 0x55a PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x55b TObjFunc
	return 0; // 0x55d Return
	
Label_1374:
	var_503_int = 39852; // 0x55e PushI
	var_504_bool = var_19_object == var_503_int; // 0x55f Eq
	if(var_504_bool == 0) goto Label_1397; // 0x560 JumpB
	var_505_string = ""; // 0x561 PushV
	var_505_string = "Neutral"; // 0x562 MovS
	func_293(var_20_bool, var_505_string); // 0x563 NEW_2
	var_506_int = 537989; // 0x565 PushI
	SetMessage(var_506_int); // 0x566 TObjFunc
	ClearReplies(); // 0x568 TObjFunc
	var_507_int = 537990; // 0x56a PushI
	var_508_int = 39835; // 0x56b PushI
	var_509_int = 39853; // 0x56c PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x56d TObjFunc
	var_510_int = 537991; // 0x56f PushI
	var_511_int = 39856; // 0x570 PushI
	var_512_int = 39855; // 0x571 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x572 TObjFunc
	return 0; // 0x574 Return
	
Label_1397:
	var_513_int = 39856; // 0x575 PushI
	var_514_bool = var_19_object == var_513_int; // 0x576 Eq
	if(var_514_bool == 0) goto Label_1415; // 0x577 JumpB
	var_515_string = ""; // 0x578 PushV
	var_515_string = "Neutral"; // 0x579 MovS
	func_293(var_20_bool, var_515_string); // 0x57a NEW_2
	var_516_int = 537992; // 0x57c PushI
	SetMessage(var_516_int); // 0x57d TObjFunc
	ClearReplies(); // 0x57f TObjFunc
	var_517_int = 537993; // 0x581 PushI
	var_518_int = 39840; // 0x582 PushI
	var_519_int = 39857; // 0x583 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x584 TObjFunc
	return 0; // 0x586 Return
	
Label_1415:
	var_520_int = 39840; // 0x587 PushI
	var_521_bool = var_19_object == var_520_int; // 0x588 Eq
	if(var_521_bool == 0) goto Label_1438; // 0x589 JumpB
	var_522_string = ""; // 0x58a PushV
	var_522_string = "Neutral"; // 0x58b MovS
	func_293(var_20_bool, var_522_string); // 0x58c NEW_2
	var_523_int = 537977; // 0x58e PushI
	SetMessage(var_523_int); // 0x58f TObjFunc
	ClearReplies(); // 0x591 TObjFunc
	var_524_int = 537978; // 0x593 PushI
	var_525_int = 39842; // 0x594 PushI
	var_526_int = 39841; // 0x595 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x596 TObjFunc
	var_527_int = 537987; // 0x598 PushI
	var_528_int = -1; // 0x599 PushI
	var_529_int = 39850; // 0x59a PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x59b TObjFunc
	return 0; // 0x59d Return
	
Label_1438:
	var_530_int = 39842; // 0x59e PushI
	var_531_bool = var_19_object == var_530_int; // 0x59f Eq
	if(var_531_bool == 0) goto Label_1461; // 0x5a0 JumpB
	var_532_string = ""; // 0x5a1 PushV
	var_532_string = "Neutral"; // 0x5a2 MovS
	func_293(var_20_bool, var_532_string); // 0x5a3 NEW_2
	var_533_int = 537979; // 0x5a5 PushI
	SetMessage(var_533_int); // 0x5a6 TObjFunc
	ClearReplies(); // 0x5a8 TObjFunc
	var_534_int = 537980; // 0x5aa PushI
	var_535_int = 39844; // 0x5ab PushI
	var_536_int = 39843; // 0x5ac PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x5ad TObjFunc
	var_537_int = 537986; // 0x5af PushI
	var_538_int = -1; // 0x5b0 PushI
	var_539_int = 39849; // 0x5b1 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x5b2 TObjFunc
	return 0; // 0x5b4 Return
	
Label_1461:
	var_540_int = 39844; // 0x5b5 PushI
	var_541_bool = var_19_object == var_540_int; // 0x5b6 Eq
	if(var_541_bool == 0) goto Label_1484; // 0x5b7 JumpB
	var_542_string = ""; // 0x5b8 PushV
	var_542_string = "Neutral"; // 0x5b9 MovS
	func_293(var_20_bool, var_542_string); // 0x5ba NEW_2
	var_543_int = 537981; // 0x5bc PushI
	SetMessage(var_543_int); // 0x5bd TObjFunc
	ClearReplies(); // 0x5bf TObjFunc
	var_544_int = 537982; // 0x5c1 PushI
	var_545_int = 39846; // 0x5c2 PushI
	var_546_int = 39845; // 0x5c3 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x5c4 TObjFunc
	var_547_int = 537985; // 0x5c6 PushI
	var_548_int = -1; // 0x5c7 PushI
	var_549_int = 39848; // 0x5c8 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_550_int = 39846; // 0x5cc PushI
	var_551_bool = var_19_object == var_550_int; // 0x5cd Eq
	if(var_551_bool == 0) goto Label_1502; // 0x5ce JumpB
	var_552_string = ""; // 0x5cf PushV
	var_552_string = "Neutral"; // 0x5d0 MovS
	func_293(var_20_bool, var_552_string); // 0x5d1 NEW_2
	var_553_int = 537983; // 0x5d3 PushI
	SetMessage(var_553_int); // 0x5d4 TObjFunc
	ClearReplies(); // 0x5d6 TObjFunc
	var_554_int = 537984; // 0x5d8 PushI
	var_555_int = -1; // 0x5d9 PushI
	var_556_int = 39847; // 0x5da PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_557_int = 39835; // 0x5de PushI
	var_558_bool = var_19_object == var_557_int; // 0x5df Eq
	if(var_558_bool == 0) goto Label_1525; // 0x5e0 JumpB
	var_559_string = ""; // 0x5e1 PushV
	var_559_string = "Neutral"; // 0x5e2 MovS
	func_293(var_20_bool, var_559_string); // 0x5e3 NEW_2
	var_560_int = 537973; // 0x5e5 PushI
	SetMessage(var_560_int); // 0x5e6 TObjFunc
	ClearReplies(); // 0x5e8 TObjFunc
	var_561_int = 537974; // 0x5ea PushI
	var_562_int = 39840; // 0x5eb PushI
	var_563_int = 39836; // 0x5ec PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x5ed TObjFunc
	var_564_int = 537975; // 0x5ef PushI
	var_565_int = -1; // 0x5f0 PushI
	var_566_int = 39838; // 0x5f1 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x5f2 TObjFunc
	return 0; // 0x5f4 Return
	
Label_1525:
	var_567_int = 45790; // 0x5f5 PushI
	var_568_bool = var_19_object == var_567_int; // 0x5f6 Eq
	if(var_568_bool == 0) goto Label_1548; // 0x5f7 JumpB
	var_569_string = ""; // 0x5f8 PushV
	var_569_string = "Neutral"; // 0x5f9 MovS
	func_293(var_20_bool, var_569_string); // 0x5fa NEW_2
	var_570_int = 543333; // 0x5fc PushI
	SetMessage(var_570_int); // 0x5fd TObjFunc
	ClearReplies(); // 0x5ff TObjFunc
	var_571_int = 543334; // 0x601 PushI
	var_572_int = -1; // 0x602 PushI
	var_573_int = 45791; // 0x603 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x604 TObjFunc
	var_574_int = 543335; // 0x606 PushI
	var_575_int = -1; // 0x607 PushI
	var_576_int = 45792; // 0x608 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x609 TObjFunc
	return 0; // 0x60b Return
	
Label_1548:
	var_3_object = 1; // 0x60c TMovB
	var_577_bool = 0; // 0x60d PushV
	func_5024(var_577_bool); // 0x60e NEW_2
	if(var_577_bool == 0) goto Label_1556; // 0x610 JumpB
	lshStopAnimation(); // 0x611 Func
	goto Label_1558; // 0x613 Jump
	
Label_1558:
	return 0; // 0x616 Return
	
Label_1556:
	StopAnimation(); // 0x614 Func
	
Label_1560:
	return 0; // 0x618 Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x628 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x629 PushV
	var_23_object = var_19_bool; // 0x62a Mov
	func_4970(var_23_object); // 0x62b NEW_2
	var_21_int = var_22_int; // 0x62c Mov
	var_24_int = 0; // 0x62e PushI
	var_25_bool = var_21_int > var_24_int; // 0x62f GT
	if(var_25_bool == 0) goto Label_1589; // 0x630 JumpB
	var_26_object = Obj(); // 0x631 PushV
	var_26_object = var_19_bool; // 0x632 Mov
	func_4973(var_26_object); // 0x633 NEW_2
	
Label_1589:
	return 2; // 0x635 Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4979(); // 0x637 NEW_2
	return 0; // 0x639 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0; // 0x6b0 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0x6b2 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0x6b4 Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x6cd PushV
	var_22_int = 0; var_23_object = Obj(); // 0x6ce PushV
	var_23_object = var_19_bool; // 0x6cf Mov
	func_4970(var_23_object); // 0x6d0 NEW_2
	var_21_int = var_22_int; // 0x6d1 Mov
	var_24_int = 0; // 0x6d3 PushI
	var_25_bool = var_21_int > var_24_int; // 0x6d4 GT
	if(var_25_bool == 0) goto Label_1760; // 0x6d5 JumpB
	var_26_int = 1; // 0x6d6 PushI
	var_27_bool = var_21_int > var_26_int; // 0x6d7 GT
	if(var_27_bool == 0) goto Label_1756; // 0x6d8 JumpB
	func_1928(var_21_int); // 0x6da NEW_2
	
Label_1756:
	var_29_object = Obj(); // 0x6dc PushV
	var_29_object = var_19_bool; // 0x6dd Mov
	func_4973(var_29_object); // 0x6de NEW_2
	
Label_1760:
	return 2; // 0x6e0 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x6e1 PushV
	var_22_object = Obj(); // 0x6e2 PushV
	var_22_object = var_19_bool; // 0x6e3 Mov
	func_4701(var_22_object); // 0x6e4 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x6e6 PushV
	var_32_object = var_19_bool; // 0x6e7 Mov
	func_4784(var_31_int, var_32_object); // 0x6e8 NEW_2
	var_21_int = var_31_int; // 0x6e9 Mov
	var_67_int = 0; // 0x6eb PushI
	var_68_bool = var_21_int > var_67_int; // 0x6ec GT
	if(var_68_bool == 0) goto Label_1784; // 0x6ed JumpB
	var_69_int = 1; // 0x6ee PushI
	var_70_bool = var_21_int > var_69_int; // 0x6ef GT
	if(var_70_bool == 0) goto Label_1780; // 0x6f0 JumpB
	func_1928(var_21_int); // 0x6f2 NEW_2
	
Label_1780:
	var_72_object = Obj(); // 0x6f4 PushV
	var_72_object = var_19_bool; // 0x6f5 Mov
	func_4794(var_72_object); // 0x6f6 NEW_2
	
Label_1784:
	return 2; // 0x6f8 Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x6f9 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x6fa PushV
	var_25_object = var_19_bool; // 0x6fb Mov
	var_26_object = var_20_object; // 0x6fc Mov
	var_27_bool = var_21_bool; // 0x6fd Mov
	func_5075(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x6fe NEW_2
	if(var_24_bool == 0) goto Label_1812; // 0x700 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x701 PushV
	var_87_object = var_19_bool; // 0x702 Mov
	var_88_bool = var_21_bool; // 0x703 Mov
	func_4877(var_87_object, var_88_bool); // 0x704 NEW_2
	var_23_int = var_86_int; // 0x705 Mov
	var_119_int = 0; // 0x707 PushI
	var_120_bool = var_23_int > var_119_int; // 0x708 GT
	if(var_120_bool == 0) goto Label_1812; // 0x709 JumpB
	var_121_int = 1; // 0x70a PushI
	var_122_bool = var_23_int > var_121_int; // 0x70b GT
	if(var_122_bool == 0) goto Label_1808; // 0x70c JumpB
	func_1928(var_23_int); // 0x70e NEW_2
	
Label_1808:
	var_124_object = Obj(); // 0x710 PushV
	var_124_object = var_19_bool; // 0x711 Mov
	func_4884(var_124_object); // 0x712 NEW_2
	
Label_1812:
	return 2; // 0x714 Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x715 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x716 PushV
	var_23_object = var_19_bool; // 0x717 Mov
	func_4919(var_23_object); // 0x718 NEW_2
	var_21_int = var_22_int; // 0x719 Mov
	var_24_int = 0; // 0x71b PushI
	var_25_bool = var_21_int > var_24_int; // 0x71c GT
	if(var_25_bool == 0) goto Label_1832; // 0x71d JumpB
	var_26_int = 1; // 0x71e PushI
	var_27_bool = var_21_int > var_26_int; // 0x71f GT
	if(var_27_bool == 0) goto Label_1828; // 0x720 JumpB
	func_1928(var_21_int); // 0x722 NEW_2
	
Label_1828:
	var_29_object = Obj(); // 0x724 PushV
	var_29_object = var_19_bool; // 0x725 Mov
	func_4922(); // 0x726 NEW_2
	
Label_1832:
	return 2; // 0x728 Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x729 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x72a PushV
	var_24_object = var_19_object; // 0x72b Mov
	var_25_string = var_20_bool; // 0x72c Mov
	func_4615(var_23_bool, var_24_object, var_25_string); // 0x72d NEW_2
	if(var_23_bool == 0) goto Label_1849; // 0x72f JumpB
	func_1928(var_22_int); // 0x731 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0x733 PushV
	var_52_object = var_19_object; // 0x734 Mov
	var_53_string = var_20_bool; // 0x735 Mov
	func_4647(var_52_object, var_53_string); // 0x736 NEW_2
	goto Label_1869; // 0x738 Jump
	
Label_1869:
	return 2; // 0x74d Return
	
Label_1849:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0x739 PushV
	var_129_string = var_20_bool; // 0x73a Mov
	var_130_object = var_19_object; // 0x73b Mov
	func_4924(var_128_int, var_129_string, var_130_object); // 0x73c NEW_2
	var_22_int = var_128_int; // 0x73d Mov
	var_172_int = 0; // 0x73f PushI
	var_173_bool = var_22_int > var_172_int; // 0x740 GT
	if(var_173_bool == 0) goto Label_1869; // 0x741 JumpB
	var_174_int = 1; // 0x742 PushI
	var_175_bool = var_22_int > var_174_int; // 0x743 GT
	if(var_175_bool == 0) goto Label_1864; // 0x744 JumpB
	func_1928(var_22_int); // 0x746 NEW_2
	
Label_1864:
	var_176_string = ""; var_177_object = Obj(); // 0x748 PushV
	var_176_string = var_20_bool; // 0x749 Mov
	var_177_object = var_19_object; // 0x74a Mov
	func_4936(var_176_string, var_177_object); // 0x74b NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x74f PushV
	var_21_string = var_19_bool; // 0x750 Mov
	func_4714(var_20_bool, var_21_string); // 0x751 NEW_2
	if(var_20_bool == 0) goto Label_1883; // 0x753 JumpB
	func_1928(var_19_bool); // 0x755 NEW_2
	var_30_string = ""; // 0x757 PushV
	var_30_string = var_19_bool; // 0x758 Mov
	func_4730(var_30_string); // 0x759 NEW_2
	
Label_1883:
	return 0; // 0x75b Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x75d PushV
	var_21_object = var_19_bool; // 0x75e Mov
	func_4672(var_20_bool, var_21_object); // 0x75f NEW_2
	if(var_20_bool == 0) goto Label_1898; // 0x761 JumpB
	func_1928(var_19_bool); // 0x763 NEW_2
	var_33_object = Obj(); // 0x765 PushV
	var_33_object = var_19_bool; // 0x766 Mov
	func_4695(var_33_object); // 0x767 NEW_2
	goto Label_1902; // 0x769 Jump
	
Label_1902:
	return 0; // 0x76e Return
	
Label_1898:
	var_35_object = Obj(); // 0x76a PushV
	var_35_object = var_19_bool; // 0x76b Mov
	func_1953(var_19_bool, var_35_object); // 0x76c NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); // 0x770 PushV
	var_20_object = var_19_bool; // 0x771 Mov
	func_1953(var_19_bool, var_20_object); // 0x772 NEW_2
	return 0; // 0x774 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 110; // 0x776 PushI
	var_21_bool = var_19_bool != var_20_int; // 0x777 Neq
	if(var_21_bool == 0) goto Label_1914; // 0x778 JumpB
	return 0; // 0x779 Return
	
Label_1914:
	var_2_object = 0; // 0x77a TMovB
	var_22_int = 110; // 0x77b PushI
	KillTimer(var_22_int); // 0x77c Func
	ResetAAS(); // 0x77e Func
	return 0; // 0x780 Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1928(var_18_bool); // 0x782 NEW_2
	func_4979(); // 0x785 NEW_2
	return 0; // 0x787 Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_1928(var_19_bool); // 0x79a NEW_2
	var_21_object = Obj(); // 0x79c PushV
	var_21_object = var_19_bool; // 0x79d Mov
	func_4591(); // 0x79e NEW_2
	return 0; // 0x7a0 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0x80a Func
	return 0; // 0x80c Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop(); // 0x80d Func
	return 0; // 0x80f Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x826 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x827 PushV
	var_23_object = var_19_bool; // 0x828 Mov
	func_4970(var_23_object); // 0x829 NEW_2
	var_21_int = var_22_int; // 0x82a Mov
	var_24_int = 0; // 0x82c PushI
	var_25_bool = var_21_int > var_24_int; // 0x82d GT
	if(var_25_bool == 0) goto Label_2105; // 0x82e JumpB
	var_26_int = 1; // 0x82f PushI
	var_27_bool = var_21_int > var_26_int; // 0x830 GT
	if(var_27_bool == 0) goto Label_2101; // 0x831 JumpB
	func_2331(); // 0x833 NEW_2
	
Label_2101:
	var_28_object = Obj(); // 0x835 PushV
	var_28_object = var_19_bool; // 0x836 Mov
	func_4973(var_28_object); // 0x837 NEW_2
	
Label_2105:
	return 2; // 0x839 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x83a PushV
	var_22_object = Obj(); // 0x83b PushV
	var_22_object = var_19_bool; // 0x83c Mov
	func_4701(var_22_object); // 0x83d NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x83f PushV
	var_32_object = var_19_bool; // 0x840 Mov
	func_4784(var_31_int, var_32_object); // 0x841 NEW_2
	var_21_int = var_31_int; // 0x842 Mov
	var_67_int = 0; // 0x844 PushI
	var_68_bool = var_21_int > var_67_int; // 0x845 GT
	if(var_68_bool == 0) goto Label_2129; // 0x846 JumpB
	var_69_int = 1; // 0x847 PushI
	var_70_bool = var_21_int > var_69_int; // 0x848 GT
	if(var_70_bool == 0) goto Label_2125; // 0x849 JumpB
	func_2331(); // 0x84b NEW_2
	
Label_2125:
	var_71_object = Obj(); // 0x84d PushV
	var_71_object = var_19_bool; // 0x84e Mov
	func_4794(var_71_object); // 0x84f NEW_2
	
Label_2129:
	return 2; // 0x851 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x852 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x853 PushV
	var_25_object = var_19_bool; // 0x854 Mov
	var_26_object = var_20_object; // 0x855 Mov
	var_27_bool = var_21_bool; // 0x856 Mov
	func_5075(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x857 NEW_2
	if(var_24_bool == 0) goto Label_2157; // 0x859 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x85a PushV
	var_87_object = var_19_bool; // 0x85b Mov
	var_88_bool = var_21_bool; // 0x85c Mov
	func_4877(var_87_object, var_88_bool); // 0x85d NEW_2
	var_23_int = var_86_int; // 0x85e Mov
	var_119_int = 0; // 0x860 PushI
	var_120_bool = var_23_int > var_119_int; // 0x861 GT
	if(var_120_bool == 0) goto Label_2157; // 0x862 JumpB
	var_121_int = 1; // 0x863 PushI
	var_122_bool = var_23_int > var_121_int; // 0x864 GT
	if(var_122_bool == 0) goto Label_2153; // 0x865 JumpB
	func_2331(); // 0x867 NEW_2
	
Label_2153:
	var_123_object = Obj(); // 0x869 PushV
	var_123_object = var_19_bool; // 0x86a Mov
	func_4884(var_123_object); // 0x86b NEW_2
	
Label_2157:
	return 2; // 0x86d Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x86e PushV
	var_22_int = 0; var_23_object = Obj(); // 0x86f PushV
	var_23_object = var_19_bool; // 0x870 Mov
	func_4919(var_23_object); // 0x871 NEW_2
	var_21_int = var_22_int; // 0x872 Mov
	var_24_int = 0; // 0x874 PushI
	var_25_bool = var_21_int > var_24_int; // 0x875 GT
	if(var_25_bool == 0) goto Label_2177; // 0x876 JumpB
	var_26_int = 1; // 0x877 PushI
	var_27_bool = var_21_int > var_26_int; // 0x878 GT
	if(var_27_bool == 0) goto Label_2173; // 0x879 JumpB
	func_2331(); // 0x87b NEW_2
	
Label_2173:
	var_28_object = Obj(); // 0x87d PushV
	var_28_object = var_19_bool; // 0x87e Mov
	func_4922(); // 0x87f NEW_2
	
Label_2177:
	return 2; // 0x881 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x882 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x883 PushV
	var_24_object = var_19_object; // 0x884 Mov
	var_25_string = var_20_bool; // 0x885 Mov
	func_4615(var_23_bool, var_24_object, var_25_string); // 0x886 NEW_2
	if(var_23_bool == 0) goto Label_2194; // 0x888 JumpB
	func_2331(); // 0x88a NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0x88c PushV
	var_51_object = var_19_object; // 0x88d Mov
	var_52_string = var_20_bool; // 0x88e Mov
	func_4647(var_51_object, var_52_string); // 0x88f NEW_2
	goto Label_2214; // 0x891 Jump
	
Label_2214:
	return 2; // 0x8a6 Return
	
Label_2194:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0x892 PushV
	var_128_string = var_20_bool; // 0x893 Mov
	var_129_object = var_19_object; // 0x894 Mov
	func_4924(var_127_int, var_128_string, var_129_object); // 0x895 NEW_2
	var_22_int = var_127_int; // 0x896 Mov
	var_171_int = 0; // 0x898 PushI
	var_172_bool = var_22_int > var_171_int; // 0x899 GT
	if(var_172_bool == 0) goto Label_2214; // 0x89a JumpB
	var_173_int = 1; // 0x89b PushI
	var_174_bool = var_22_int > var_173_int; // 0x89c GT
	if(var_174_bool == 0) goto Label_2209; // 0x89d JumpB
	func_2331(); // 0x89f NEW_2
	
Label_2209:
	var_175_string = ""; var_176_object = Obj(); // 0x8a1 PushV
	var_175_string = var_20_bool; // 0x8a2 Mov
	var_176_object = var_19_object; // 0x8a3 Mov
	func_4936(var_175_string, var_176_object); // 0x8a4 NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x8a8 PushV
	var_21_string = var_19_bool; // 0x8a9 Mov
	func_4714(var_20_bool, var_21_string); // 0x8aa NEW_2
	if(var_20_bool == 0) goto Label_2228; // 0x8ac JumpB
	func_2331(); // 0x8ae NEW_2
	var_29_string = ""; // 0x8b0 PushV
	var_29_string = var_19_bool; // 0x8b1 Mov
	func_4730(var_29_string); // 0x8b2 NEW_2
	
Label_2228:
	return 0; // 0x8b4 Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2331(); // 0x8b6 NEW_2
	func_4979(); // 0x8b9 NEW_2
	return 0; // 0x8bb Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0x8bd PushV
	var_21_object = var_19_bool; // 0x8be Mov
	func_4672(var_20_bool, var_21_object); // 0x8bf NEW_2
	if(var_20_bool == 0) goto Label_2249; // 0x8c1 JumpB
	func_2331(); // 0x8c3 NEW_2
	var_32_object = Obj(); // 0x8c5 PushV
	var_32_object = var_19_bool; // 0x8c6 Mov
	func_4695(var_32_object); // 0x8c7 NEW_2
	
Label_2249:
	return 0; // 0x8c9 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x958 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x959 PushV
	var_23_object = var_19_bool; // 0x95a Mov
	func_4970(var_23_object); // 0x95b NEW_2
	var_21_int = var_22_int; // 0x95c Mov
	var_24_int = 0; // 0x95e PushI
	var_25_bool = var_21_int > var_24_int; // 0x95f GT
	if(var_25_bool == 0) goto Label_2411; // 0x960 JumpB
	var_26_int = 1; // 0x961 PushI
	var_27_bool = var_21_int > var_26_int; // 0x962 GT
	if(var_27_bool == 0) goto Label_2407; // 0x963 JumpB
	func_2535(); // 0x965 NEW_2
	
Label_2407:
	var_30_object = Obj(); // 0x967 PushV
	var_30_object = var_19_bool; // 0x968 Mov
	func_4973(var_30_object); // 0x969 NEW_2
	
Label_2411:
	return 2; // 0x96b Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x96c PushV
	var_22_object = Obj(); // 0x96d PushV
	var_22_object = var_19_bool; // 0x96e Mov
	func_4701(var_22_object); // 0x96f NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0x971 PushV
	var_32_object = var_19_bool; // 0x972 Mov
	func_4784(var_31_int, var_32_object); // 0x973 NEW_2
	var_21_int = var_31_int; // 0x974 Mov
	var_67_int = 0; // 0x976 PushI
	var_68_bool = var_21_int > var_67_int; // 0x977 GT
	if(var_68_bool == 0) goto Label_2435; // 0x978 JumpB
	var_69_int = 1; // 0x979 PushI
	var_70_bool = var_21_int > var_69_int; // 0x97a GT
	if(var_70_bool == 0) goto Label_2431; // 0x97b JumpB
	func_2535(); // 0x97d NEW_2
	
Label_2431:
	var_73_object = Obj(); // 0x97f PushV
	var_73_object = var_19_bool; // 0x980 Mov
	func_4794(var_73_object); // 0x981 NEW_2
	
Label_2435:
	return 2; // 0x983 Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0x984 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0x985 PushV
	var_25_object = var_19_bool; // 0x986 Mov
	var_26_object = var_20_object; // 0x987 Mov
	var_27_bool = var_21_bool; // 0x988 Mov
	func_5075(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0x989 NEW_2
	if(var_24_bool == 0) goto Label_2463; // 0x98b JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0x98c PushV
	var_87_object = var_19_bool; // 0x98d Mov
	var_88_bool = var_21_bool; // 0x98e Mov
	func_4877(var_87_object, var_88_bool); // 0x98f NEW_2
	var_23_int = var_86_int; // 0x990 Mov
	var_119_int = 0; // 0x992 PushI
	var_120_bool = var_23_int > var_119_int; // 0x993 GT
	if(var_120_bool == 0) goto Label_2463; // 0x994 JumpB
	var_121_int = 1; // 0x995 PushI
	var_122_bool = var_23_int > var_121_int; // 0x996 GT
	if(var_122_bool == 0) goto Label_2459; // 0x997 JumpB
	func_2535(); // 0x999 NEW_2
	
Label_2459:
	var_125_object = Obj(); // 0x99b PushV
	var_125_object = var_19_bool; // 0x99c Mov
	func_4884(var_125_object); // 0x99d NEW_2
	
Label_2463:
	return 2; // 0x99f Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0x9a0 PushV
	var_22_int = 0; var_23_object = Obj(); // 0x9a1 PushV
	var_23_object = var_19_bool; // 0x9a2 Mov
	func_4919(var_23_object); // 0x9a3 NEW_2
	var_21_int = var_22_int; // 0x9a4 Mov
	var_24_int = 0; // 0x9a6 PushI
	var_25_bool = var_21_int > var_24_int; // 0x9a7 GT
	if(var_25_bool == 0) goto Label_2483; // 0x9a8 JumpB
	var_26_int = 1; // 0x9a9 PushI
	var_27_bool = var_21_int > var_26_int; // 0x9aa GT
	if(var_27_bool == 0) goto Label_2479; // 0x9ab JumpB
	func_2535(); // 0x9ad NEW_2
	
Label_2479:
	var_30_object = Obj(); // 0x9af PushV
	var_30_object = var_19_bool; // 0x9b0 Mov
	func_4922(); // 0x9b1 NEW_2
	
Label_2483:
	return 2; // 0x9b3 Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0x9b4 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0x9b5 PushV
	var_24_object = var_19_object; // 0x9b6 Mov
	var_25_string = var_20_bool; // 0x9b7 Mov
	func_4615(var_23_bool, var_24_object, var_25_string); // 0x9b8 NEW_2
	if(var_23_bool == 0) goto Label_2500; // 0x9ba JumpB
	func_2535(); // 0x9bc NEW_2
	var_53_object = Obj(); var_54_string = ""; // 0x9be PushV
	var_53_object = var_19_object; // 0x9bf Mov
	var_54_string = var_20_bool; // 0x9c0 Mov
	func_4647(var_53_object, var_54_string); // 0x9c1 NEW_2
	goto Label_2520; // 0x9c3 Jump
	
Label_2520:
	return 2; // 0x9d8 Return
	
Label_2500:
	var_129_int = 0; var_130_string = ""; var_131_object = Obj(); // 0x9c4 PushV
	var_130_string = var_20_bool; // 0x9c5 Mov
	var_131_object = var_19_object; // 0x9c6 Mov
	func_4924(var_129_int, var_130_string, var_131_object); // 0x9c7 NEW_2
	var_22_int = var_129_int; // 0x9c8 Mov
	var_173_int = 0; // 0x9ca PushI
	var_174_bool = var_22_int > var_173_int; // 0x9cb GT
	if(var_174_bool == 0) goto Label_2520; // 0x9cc JumpB
	var_175_int = 1; // 0x9cd PushI
	var_176_bool = var_22_int > var_175_int; // 0x9ce GT
	if(var_176_bool == 0) goto Label_2515; // 0x9cf JumpB
	func_2535(); // 0x9d1 NEW_2
	
Label_2515:
	var_177_string = ""; var_178_object = Obj(); // 0x9d3 PushV
	var_177_string = var_20_bool; // 0x9d4 Mov
	var_178_object = var_19_object; // 0x9d5 Mov
	func_4936(var_177_string, var_178_object); // 0x9d6 NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0x9da PushV
	var_21_string = var_19_bool; // 0x9db Mov
	func_4714(var_20_bool, var_21_string); // 0x9dc NEW_2
	if(var_20_bool == 0) goto Label_2534; // 0x9de JumpB
	func_2535(); // 0x9e0 NEW_2
	var_31_string = ""; // 0x9e2 PushV
	var_31_string = var_19_bool; // 0x9e3 Mov
	func_4730(var_31_string); // 0x9e4 NEW_2
	
Label_2534:
	return 0; // 0x9e6 Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_2535(); // 0x9f4 NEW_2
	var_22_object = Obj(); // 0x9f6 PushV
	var_22_object = var_19_bool; // 0x9f7 Mov
	func_4591(); // 0x9f8 NEW_2
	return 0; // 0x9fa Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x9fb PushV
	var_24_int = 111; // 0x9fc PushI
	var_25_bool = var_19_bool != var_24_int; // 0x9fd Neq
	if(var_25_bool == 0) goto Label_2560; // 0x9fe JumpB
	return 4; // 0x9ff Return
	
Label_2560:
	var_26_bool = 0; var_27_object = Obj(); // 0xa00 PushV
	var_27_object = var_0_bool; // 0xa01 MovT
	func_3710(var_26_bool, var_27_object); // 0xa02 NEW_2
	var_60_bool = var_26_bool == 0; // 0xa04 Not
	if(var_60_bool == 0) goto Label_2570; // 0xa05 JumpB
	func_2535(); // 0xa07 NEW_2
	return 4; // 0xa09 Return
	
Label_2570:
	GetDirection(var_22_cvector); // 0xa0a Func
	var_63_cvector = CVector(0,0,0); var_64_object = Obj(); // 0xa0c PushV
	var_64_object = var_0_bool; // 0xa0d MovT
	func_3564(var_64_object); // 0xa0e NEW_2
	var_23_cvector = var_63_cvector; // 0xa0f Mov
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xa11 PushV
	var_70_cvector = var_22_cvector; // 0xa12 Mov
	var_71_cvector = var_23_cvector; // 0xa13 Mov
	func_4163(var_69_float, var_70_cvector, var_71_cvector); // 0xa14 NEW_2
	var_93_float = 0.5; // 0xa16 PushF
	var_94_bool = var_69_float < var_93_float; // 0xa17 LT
	if(var_94_bool == 0) goto Label_2589; // 0xa18 JumpB
	var_95_object = Obj(); // 0xa19 PushV
	var_95_object = var_0_bool; // 0xa1a MovT
	func_3860(); // 0xa1b NEW_2
	
Label_2589:
	return 4; // 0xa1d Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_2535(); // 0xa1f NEW_2
	func_4979(); // 0xa22 NEW_2
	return 0; // 0xa24 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xa26 PushV
	var_21_object = var_19_bool; // 0xa27 Mov
	func_4672(var_20_bool, var_21_object); // 0xa28 NEW_2
	if(var_20_bool == 0) goto Label_2610; // 0xa2a JumpB
	func_2535(); // 0xa2c NEW_2
	var_34_object = Obj(); // 0xa2e PushV
	var_34_object = var_19_bool; // 0xa2f Mov
	func_4695(var_34_object); // 0xa30 NEW_2
	
Label_2610:
	return 0; // 0xa32 Return
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3357(var_18_bool); // 0xcd8 NEW_2
	func_4979(); // 0xcdb NEW_2
	return 0; // 0xcdd Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0xd10 PushI
	var_21_bool = var_19_int == var_20_int; // 0xd11 Eq
	if(var_21_bool == 0) goto Label_3352; // 0xd12 JumpB
	var_22_object = Obj(); // 0xd13 PushV
	var_22_object = var_1_object; // 0xd14 MovT
	func_4204(var_22_object); // 0xd15 NEW_2
	goto Label_3356; // 0xd17 Jump
	
Label_3356:
	return 0; // 0xd1c Return
	
Label_3352:
	var_27_int = 0; // 0xd18 PushV
	var_27_int = var_19_int; // 0xd19 Mov
	func_3501(var_18_bool, var_19_int, var_27_int); // 0xd1a NEW_2
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xd2b PushV
	var_20_bool = 0; // 0xd2c MovB
	var_21_bool = var_1_object == var_19_object; // 0xd2d Eq
	if(var_21_bool == 0) goto Label_3378; // 0xd2e JumpB
	var_22_bool = var_2_object == 0; // 0xd2f Not
	if(var_22_bool == 0) goto Label_3378; // 0xd30 JumpB
	var_20_bool = 1; // 0xd31 MovB
	
Label_3378:
	if(var_20_bool == 0) goto Label_3384; // 0xd32 JumpB
	var_2_object = 1; // 0xd33 TMovB
	var_23_object = Obj(); // 0xd34 PushV
	var_23_object = var_19_object; // 0xd35 Mov
	func_4051(var_23_object); // 0xd36 NEW_2
	
Label_3384:
	return 0; // 0xd38 Return
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0xd3a PushV
	var_20_bool = 0; // 0xd3b MovB
	var_21_bool = var_1_object == var_19_object; // 0xd3c Eq
	if(var_21_bool == 0) goto Label_3393; // 0xd3d JumpB
	var_22_object = var_2_object; // 0xd3e PushT
	if(var_22_object == 0) goto Label_3393; // 0xd3f JumpB
	var_20_bool = 1; // 0xd40 MovB
	
Label_3393:
	if(var_20_bool == 0) goto Label_3398; // 0xd41 JumpB
	var_2_object = 0; // 0xd42 TMovB
	var_23_string = "head"; // 0xd43 PushS
	UnlookAsync(var_23_string); // 0xd44 Func
	
Label_3398:
	return 0; // 0xd46 Return
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0xdc0 Func
	return 0; // 0xdc2 Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_3357(var_19_object); // 0xdcc NEW_2
	var_24_object = Obj(); // 0xdce PushV
	var_24_object = var_19_object; // 0xdcf Mov
	func_4591(); // 0xdd0 NEW_2
	return 0; // 0xdd2 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x11e2 PushV
	var_23_string = "health"; // 0x11e3 PushS
	var_24_bool = var_20_string == var_23_string; // 0x11e4 Eq
	if(var_24_bool == 0) goto Label_4590; // 0x11e5 JumpB
	var_25_string = "health"; // 0x11e6 PushS
	GetProperty(var_25_string, var_22_float); // 0x11e7 Func
	var_26_int = 0; // 0x11e9 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x11ea LE
	if(var_27_bool == 0) goto Label_4590; // 0x11eb JumpB
	SignalDeath(var_19_object); // 0x11ec Func
	
Label_4590:
	return 2; // 0x11ee Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x11f0 PushV
	var_20_object = var_19_object; // 0x11f1 Mov
	func_4570(var_20_object); // 0x11f2 NEW_2
	return 0; // 0x11f4 Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x11f6 PushV
	var_23_object = var_19_object; // 0x11f7 Mov
	var_24_int = var_20_int; // 0x11f8 Mov
	var_25_float = var_21_float; // 0x11f9 Mov
	func_3778(var_23_object, var_24_int, var_25_float); // 0x11fa NEW_2
	return 0; // 0x11fc Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x11fe PushV
	var_25_object = var_19_object; // 0x11ff Mov
	var_26_int = var_20_int; // 0x1200 Mov
	var_27_float = var_21_float; // 0x1201 Mov
	var_28_cvector = var_23_cvector; // 0x1202 Mov
	var_29_cvector = var_24_cvector; // 0x1203 Mov
	func_3846(var_27_float, var_28_cvector, var_29_cvector); // 0x1204 NEW_2
	return 0; // 0x1206 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 1; // 0x6b5 PushB
	SensePlayerOnly(var_19_bool); // 0x6b6 Func
	func_5026(); // 0x6b9 NEW_2
	func_1732(); // 0x6bc NEW_2
	
Label_1726:
	var_2_object = 0; // 0x6be TMovB
	func_1993(var_17_object, var_18_bool); // 0x6c0 NEW_2
	goto Label_1726; // 0x6c2 Jump
}


func_3584(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0xe00 PushV
	var_59_string = "HasProperty"; // 0xe01 PushS
	var_60_int = 2; // 0xe02 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0xe03 FuncExist
	var_62_bool = var_61_bool == 0; // 0xe04 Not
	if(var_62_bool == 0) goto Label_3592; // 0xe05 JumpB
	var_54_bool = 0; // 0xe06 MovB
	return 2; // 0xe07 Return
	
Label_3592:
	HasProperty(var_56_string, var_58_bool); // 0xe08 ObjFunc
	var_54_bool = var_58_bool; // 0xe0a Mov
	return 2; // 0xe0b Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_278_bool = 0; // 0x4 PushV
	func_5024(var_278_bool); // 0x5 NEW_2
	if(var_278_bool == 0) goto Label_15; // 0x7 JumpB
	var_279_string = ""; // 0x8 PushV
	var_279_string = "Neutral"; // 0x9 MovS
	func_4020(var_279_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_280_bool = var_0_bool; // 0x15 PushT
	if(var_280_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_281_string = "all"; // 0x11 PushS
	var_282_string = "idle"; // 0x12 PushS
	PlayAnimation(var_281_string, var_282_string); // 0x13 Func
}


func_2052(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x804 PushV
	GetCameraFarDistance(var_42_float); // 0x805 Func
	var_40_float = var_42_float; // 0x807 Mov
	return 2; // 0x808 Return
}


func_4615(var_23_bool, var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x1208 PushS
	var_27_bool = var_25_string == var_26_string; // 0x1209 Eq
	if(var_27_bool == 0) goto Label_4626; // 0x120a JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x120b PushV
	var_29_object = var_24_object; // 0x120c Mov
	func_4980(var_29_object); // 0x120d NEW_2
	var_23_bool = var_28_bool; // 0x120e Mov
	return 0; // 0x1210 Return
	
Label_4626:
	var_30_string = "player_shot"; // 0x1212 PushS
	var_31_bool = var_25_string == var_30_string; // 0x1213 Eq
	if(var_31_bool == 0) goto Label_4636; // 0x1214 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x1215 PushV
	var_33_object = var_24_object; // 0x1216 Mov
	func_4985(var_32_bool, var_33_object); // 0x1217 NEW_2
	var_23_bool = var_32_bool; // 0x1218 Mov
	return 0; // 0x121a Return
	
Label_4636:
	var_47_string = "battle"; // 0x121c PushS
	var_48_bool = var_25_string == var_47_string; // 0x121d Eq
	if(var_48_bool == 0) goto Label_4645; // 0x121e JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x121f PushV
	var_50_object = var_24_object; // 0x1220 Mov
	func_5006(var_50_object); // 0x1221 NEW_2
	var_23_bool = var_49_bool; // 0x1222 Mov
	return 0; // 0x1224 Return
	
Label_4645:
	var_23_bool = 0; // 0x1225 MovB
	return 0; // 0x1226 Return
}


func_3596(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0; // 0xe0c PushV
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0xe0d PushV
	var_532_object = var_513_object; // 0xe0e Mov
	var_533_string = "health"; // 0xe0f MovS
	func_3584(var_531_bool, var_532_object, var_533_string); // 0xe10 NEW_2
	var_534_bool = var_531_bool == 0; // 0xe12 Not
	if(var_534_bool == 0) goto Label_3606; // 0xe13 JumpB
	var_512_float = 0.0; // 0xe14 MovF
	return 12; // 0xe15 Return
	
Label_3606:
	var_535_bool = 0; var_536_object = Obj(); var_537_string = ""; // 0xe16 PushV
	var_536_object = var_513_object; // 0xe17 Mov
	var_537_string = "armor"; // 0xe18 MovS
	func_3584(var_535_bool, var_536_object, var_537_string); // 0xe19 NEW_2
	var_538_bool = var_535_bool == 0; // 0xe1b Not
	if(var_538_bool == 0) goto Label_3615; // 0xe1c JumpB
	var_525_int = 0; // 0xe1d MovI
	goto Label_3618; // 0xe1e Jump
	
Label_3618:
	var_539_string = "armor_"; // 0xe22 PushS
	var_540_string = ""; var_541_int = 0; // 0xe23 PushV
	var_541_int = var_515_int; // 0xe24 Mov
	func_3550(var_540_string, var_541_int); // 0xe25 NEW_2
	var_526_string = var_539_string + var_540_string; // 0xe27 Add2
	var_546_bool = 0; var_547_object = Obj(); var_548_string = ""; // 0xe28 PushV
	var_547_object = var_513_object; // 0xe29 Mov
	var_548_string = var_526_string; // 0xe2a Mov
	func_3584(var_546_bool, var_547_object, var_548_string); // 0xe2b NEW_2
	var_549_bool = var_546_bool == 0; // 0xe2d Not
	if(var_549_bool == 0) goto Label_3633; // 0xe2e JumpB
	var_527_int = 0; // 0xe2f MovI
	goto Label_3635; // 0xe30 Jump
	
Label_3635:
	var_550_float = 0; var_551_float = 0; var_552_float = 0; // 0xe33 PushV
	var_553_int = var_525_int + var_527_int; // 0xe34 Add
	var_554_float = 100.0; // 0xe35 PushF
	var_551_float = var_553_int / var_553_int; // 0xe36 Div2
	var_552_float = 1; // 0xe37 MovI
	func_4126(var_550_float, var_551_float, var_552_float); // 0xe38 NEW_2
	var_528_float = var_550_float; // 0xe39 Mov
	var_556_string = "health"; // 0xe3b PushS
	GetProperty(var_556_string, var_529_float); // 0xe3c ObjFunc
	var_557_int = 1; // 0xe3e PushI
	var_558_int = var_557_int - var_528_float; // 0xe3f Sub
	var_530_float = var_514_float * var_558_int; // 0xe40 Mult2
	var_559_string = "health"; // 0xe41 PushS
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0; // 0xe42 PushV
	var_561_float = var_529_float - var_530_float; // 0xe43 Sub2
	var_562_float = 0; // 0xe44 MovI
	var_563_float = 1; // 0xe45 MovI
	func_4133(var_560_float, var_561_float, var_562_float, var_563_float); // 0xe46 NEW_2
	SetProperty(var_559_string, var_560_float); // 0xe48 ObjFunc
	var_566_bool = 0; var_567_object = Obj(); // 0xe4a PushV
	var_567_object = var_513_object; // 0xe4b Mov
	func_3579(var_566_bool, var_567_object); // 0xe4c NEW_2
	if(var_566_bool == 0) goto Label_3667; // 0xe4e JumpB
	var_568_float = 0; // 0xe4f PushV
	var_568_float = -var_530_float; // 0xe50 Neg2
	func_4185(var_568_float); // 0xe51 NEW_2
	
Label_3667:
	var_512_float = var_530_float; // 0xe53 Mov
	return 12; // 0xe54 Return
	
Label_3633:
	GetProperty(var_526_string, var_527_int); // 0xe31 ObjFunc
	
Label_3615:
	var_572_string = "armor"; // 0xe1f PushS
	GetProperty(var_572_string, var_525_int); // 0xe20 ObjFunc
}


func_4110(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x100e PushV
	self(var_109_object); // 0x100f Func
	var_107_object = var_109_object; // 0x1011 Mov
	return 2; // 0x1012 Return
}


func_2064(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x810 TMovB
	var_1_object = 0; // 0x811 TMovB
	Stop(); // 0x812 Func
	StopGroup0(); // 0x814 Func
	return 0; // 0x816 Return
}


func_3092(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0; // 0xc14 PushV
	
Label_3093:
	IsAnimationPlaying(var_411_bool); // 0xc15 Func
	var_416_bool = var_411_bool == 0; // 0xc17 Not
	if(var_416_bool == 0) goto Label_3098; // 0xc18 JumpB
	goto Label_3130; // 0xc19 Jump
	
Label_3130:
	func_3267(var_415_float); // 0xc3b NEW_2
	var_404_bool = 0; // 0xc3d MovB
	return 10; // 0xc3e Return
	
Label_3098:
	var_417_bool = 0; // 0xc1a PushV
	func_3163(var_417_bool); // 0xc1b NEW_2
	if(var_417_bool == 0) goto Label_3104; // 0xc1d JumpB
	var_404_bool = 1; // 0xc1e MovB
	return 10; // 0xc1f Return
	
Label_3104:
	var_456_bool = 0; var_457_object = Obj(); // 0xc20 PushV
	var_457_object = var_0_bool; // 0xc21 MovT
	func_3710(var_456_bool, var_457_object); // 0xc22 NEW_2
	var_458_bool = var_456_bool == 0; // 0xc24 Not
	if(var_458_bool == 0) goto Label_3112; // 0xc25 JumpB
	var_404_bool = 0; // 0xc26 MovB
	return 10; // 0xc27 Return
	
Label_3112:
	GetPFPosition(var_412_cvector); // 0xc28 TObjFunc
	GetPFPosition(var_413_cvector); // 0xc2a Func
	var_414_cvector = var_412_cvector - var_413_cvector; // 0xc2c Sub2
	var_415_float = var_414_cvector | var_414_cvector; // 0xc2d Or2
	var_459_float = var_405_float * var_405_float; // 0xc2e Mult
	var_460_bool = var_415_float < var_459_float; // 0xc2f LT
	if(var_460_bool == 0) goto Label_3127; // 0xc30 JumpB
	var_461_bool = 0; var_462_float = 0; // 0xc31 PushV
	var_462_float = var_405_float; // 0xc32 Mov
	func_2928(var_415_float, var_461_bool, var_462_float); // 0xc33 NEW_2
	var_404_bool = 1; // 0xc35 MovB
	return 10; // 0xc36 Return
	
Label_3127:
	sync(); // 0xc37 Func
	goto Label_3093; // 0xc39 Jump
}


func_4116(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x1014 PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x1015 Or
	var_60_float = sqrt(var_61_int); // 0x1016 Sqrt2
	var_62_float = 0.0; // 0x1017 PushF
	var_63_bool = var_60_float < var_62_float; // 0x1018 LT
	if(var_63_bool == 0) goto Label_4124; // 0x1019 JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x101a MovV
	return 2; // 0x101b Return
	
Label_4124:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x101c Div2
	return 2; // 0x101d Return
}


func_2071(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x817 TMovB
	var_1_object = 1; // 0x818 TMovB
	Stop(); // 0x819 Func
	StopGroup0(); // 0x81b Func
	return 0; // 0x81d Return
}


func_1561(var_21_object)
{
	EventDisable(0); // 0x61a EventDisable
	var_22_object = Obj(); // 0x61b PushV
	var_22_object = var_21_object; // 0x61c Mov
	func_1594(var_22_object); // 0x61d NEW_2
	var_102_object = Obj(); // 0x61f PushV
	var_102_object = var_21_object; // 0x620 Mov
	func_5085(var_102_object); // 0x621 NEW_2
	EventEnable(0); // 0x623 EventEnable
	
Label_1572:
	Hold(); // 0x624 Func
	goto Label_1572; // 0x626 Jump
}


func_2078(var_50_bool)
{
	var_50_bool = 0; // 0x81e MovB
	return 0; // 0x81f Return
}


func_4126(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float; // 0x101f LT
	if(var_555_bool == 0) goto Label_4131; // 0x1020 JumpB
	var_550_float = var_551_float; // 0x1021 Mov
	goto Label_4132; // 0x1022 Jump
	
Label_4132:
	return 0; // 0x1024 Return
	
Label_4131:
	var_550_float = var_552_float; // 0x1023 Mov
}


func_2080(var_44_object, var_45_cvector)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x820 PushV
	FindShiftedPathTo(var_47_object, var_45_cvector); // 0x821 Func
	var_44_object = var_47_object; // 0x823 Mov
	return 2; // 0x824 Return
}


func_4133(var_560_float, var_561_float, var_562_float, var_563_float)
{
	var_564_bool = var_561_float < var_562_float; // 0x1026 LT
	if(var_564_bool == 0) goto Label_4138; // 0x1027 JumpB
	var_560_float = var_562_float; // 0x1028 Mov
	return 0; // 0x1029 Return
	
Label_4138:
	var_565_bool = var_561_float > var_563_float; // 0x102a GT
	if(var_565_bool == 0) goto Label_4142; // 0x102b JumpB
	var_560_float = var_563_float; // 0x102c Mov
	return 0; // 0x102d Return
	
Label_4142:
	var_560_float = var_561_float; // 0x102e Mov
	return 0; // 0x102f Return
}


func_4647(var_53_object, var_54_string)
{
	var_55_string = "unholster"; // 0x1228 PushS
	var_56_bool = var_54_string == var_55_string; // 0x1229 Eq
	if(var_56_bool == 0) goto Label_4656; // 0x122a JumpB
	var_57_object = Obj(); // 0x122b PushV
	var_57_object = var_53_object; // 0x122c Mov
	func_4983(); // 0x122d NEW_2
	goto Label_4671; // 0x122f Jump
	
Label_4671:
	return 0; // 0x123f Return
	
Label_4656:
	var_58_string = "player_shot"; // 0x1230 PushS
	var_59_bool = var_54_string == var_58_string; // 0x1231 Eq
	if(var_59_bool == 0) goto Label_4664; // 0x1232 JumpB
	var_60_object = Obj(); // 0x1233 PushV
	var_60_object = var_53_object; // 0x1234 Mov
	func_5000(var_60_object); // 0x1235 NEW_2
	goto Label_4671; // 0x1237 Jump
	
Label_4664:
	var_126_string = "battle"; // 0x1238 PushS
	var_127_bool = var_54_string == var_126_string; // 0x1239 Eq
	if(var_127_bool == 0) goto Label_4671; // 0x123a JumpB
	var_128_object = Obj(); // 0x123b PushV
	var_128_object = var_53_object; // 0x123c Mov
	func_5009(); // 0x123d NEW_2
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x28 PushV
	var_0_bool = var_45_object; // 0x29 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2a PushV
	var_56_object = var_45_object; // 0x2b Mov
	var_57_float = 70.0; // 0x2c MovF
	func_3876(var_56_object, var_57_float); // 0x2d NEW_2
	var_101_bool = var_55_bool == 0; // 0x2f Not
	if(var_101_bool == 0) goto Label_51; // 0x30 JumpB
	var_44_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_51_object); // 0x33 Func
	var_102_int = 0; // 0x35 PushV
	func_5018(var_102_int); // 0x36 NEW_2
	SetNPCName(var_102_int); // 0x38 ObjFunc
	var_103_int = 0; // 0x3a PushV
	func_5016(var_103_int); // 0x3b NEW_2
	SetNPCDescription(var_103_int); // 0x3d ObjFunc
	var_104_string = ""; // 0x3f PushV
	func_5020(var_104_string); // 0x40 NEW_2
	SetPhoto(var_104_string); // 0x42 ObjFunc
	var_105_string = ""; // 0x44 PushV
	func_5022(var_105_string); // 0x45 NEW_2
	SetPhoto2(var_105_string); // 0x47 ObjFunc
	var_106_int = 0; // 0x49 PushV
	func_4282(var_106_int); // 0x4a NEW_2
	SetPlayerName(var_106_int); // 0x4c ObjFunc
	var_53_int = -1; // 0x4e MovI
	IsOverrideActive(var_52_bool); // 0x4f Func
	var_114_bool = var_52_bool; // 0x51 Push
	if(var_114_bool == 0) goto Label_85; // 0x52 JumpB
	var_44_int = -2; // 0x53 MovI
	return 8; // 0x54 Return
	
Label_85:
	DoDialog(var_51_object); // 0x55 Func
	var_115_object = Obj(); var_116_object = Obj(); // 0x57 PushV
	var_115_object = var_45_object; // 0x58 Mov
	var_116_object = var_51_object; // 0x59 Mov
	TaskCall(2); // 0x5a TaskCall
	func_114(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	IsDialogEnd(var_54_bool); // 0x5e ObjFunc
	
Label_96:
	var_235_bool = var_54_bool == 0; // 0x60 Not
	if(var_235_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_54_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_236_object = Obj(); // 0x67 PushV
	var_236_object = var_45_object; // 0x68 Mov
	func_3944(); // 0x69 NEW_2
	StopDialog(var_51_object); // 0x6b Func
	GetReturnValue(var_53_int); // 0x6d ObjFunc
	var_44_int = var_53_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_4144(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x1031 PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x1032 PushE
	var_77_float = var_75_float * var_76_float; // 0x1033 Mult
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x1034 PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x1035 PushE
	var_80_float = var_78_float * var_79_float; // 0x1036 Mult
	var_72_float = var_77_float + var_80_float; // 0x1037 Add2
	return 0; // 0x1038 Return
}


func_2611(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0; // 0xa34 PushV
	var_190_object = var_183_object; // 0xa35 Mov
	var_191_bool = 1; // 0xa36 MovB
	var_192_float = 180.0; // 0xa37 MovF
	func_2625(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, var_191_bool, var_192_float); // 0xa38 NEW_2
	return 0; // 0xa3a Return
}


func_4153(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0); // 0x103a PushE
	var_84_float = GetByIndex(var_82_cvector, 0); // 0x103b PushE
	var_85_float = var_83_float * var_84_float; // 0x103c Mult
	var_86_float = GetByIndex(var_82_cvector, 2); // 0x103d PushE
	var_87_float = GetByIndex(var_82_cvector, 2); // 0x103e PushE
	var_88_float = var_86_float * var_87_float; // 0x103f Mult
	var_89_int = var_85_float + var_88_float; // 0x1040 Add
	var_81_float = sqrt(var_89_int); // 0x1041 Sqrt2
	return 0; // 0x1042 Return
}


func_1594(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0x63a PushV
	var_43_bool = var_22_object == 0; // 0x63b NullEq
	if(var_43_bool == 0) goto Label_1602; // 0x63c JumpB
	var_44_string = ""; // 0x63d PushV
	var_44_string = "fdie"; // 0x63e MovS
	func_1685(var_44_string); // 0x63f NEW_2
	goto Label_1684; // 0x641 Jump
	
Label_1684:
	return 20; // 0x694 Return
	
Label_1602:
	GetPosition(var_33_cvector); // 0x642 ObjFunc
	GetPosition(var_34_cvector); // 0x644 Func
	GetDirection(var_35_cvector); // 0x646 Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0x648 Sub2
	var_76_float = GetByIndex(var_36_cvector, 0); // 0x649 PushE
	var_77_float = GetByIndex(var_35_cvector, 0); // 0x64a PushE
	var_78_float = var_76_float * var_77_float; // 0x64b Mult
	var_79_float = GetByIndex(var_36_cvector, 2); // 0x64c PushE
	var_80_float = GetByIndex(var_35_cvector, 2); // 0x64d PushE
	var_81_float = var_79_float * var_80_float; // 0x64e Mult
	var_82_int = var_78_float + var_81_float; // 0x64f Add
	var_83_int = 0; // 0x650 PushI
	var_84_bool = var_82_int >= var_83_int; // 0x651 GE
	if(var_84_bool == 0) goto Label_1621; // 0x652 JumpB
	var_37_string = "fdie"; // 0x653 MovS
	goto Label_1622; // 0x654 Jump
	
Label_1622:
	RemoveRTEnvelope(); // 0x656 Func
	SetDeathState(); // 0x658 Func
	Stop(); // 0x65a Func
	StopAsync(); // 0x65c Func
	var_38_object = var_22_object; // 0x65e Mov
	var_85_string = "GetScriptProperty"; // 0x65f PushS
	var_86_int = 2; // 0x660 PushI
	var_87_bool = IsFuncExist(var_22_object, var_85_string, var_86_int); // 0x661 FuncExist
	if(var_87_bool == 0) goto Label_1646; // 0x662 JumpB
	var_88_string = "Owner"; // 0x663 PushS
	HasScriptProperty(var_39_bool, var_88_string); // 0x664 ObjFunc
	var_89_bool = var_39_bool; // 0x666 Push
	if(var_89_bool == 0) goto Label_1646; // 0x667 JumpB
	var_90_string = "Owner"; // 0x668 PushS
	GetScriptProperty(var_38_object, var_90_string); // 0x669 ObjFunc
	var_91_bool = var_38_object == 0; // 0x66b NullEq
	if(var_91_bool == 0) goto Label_1646; // 0x66c JumpB
	var_38_object = var_22_object; // 0x66d Mov
	
Label_1646:
	var_92_string = "@GetEyesHeight"; // 0x66e PushS
	var_93_int = 1; // 0x66f PushI
	var_94_bool = IsFuncExist(var_38_object, var_92_string, var_93_int); // 0x670 FuncExist
	if(var_94_bool == 0) goto Label_1661; // 0x671 JumpB
	GetEyesHeight(var_41_float); // 0x672 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x674 MovV
	var_95_float = GetByIndex(var_42_cvector, 1); // 0x675 PushE
	var_95_float = var_41_float; // 0x676 Mov
	SetByIndex(var_42_cvector, 1) = var_95_float; // 0x677 PopE
	var_96_string = "head"; // 0x678 PushS
	LookAsync(var_22_object, var_96_string, var_42_cvector); // 0x679 Func
	var_40_bool = 1; // 0x67b MovB
	goto Label_1662; // 0x67c Jump
	
Label_1662:
	var_97_string = ""; // 0x67e PushV
	var_97_string = var_37_string; // 0x67f Mov
	func_4069(var_97_string); // 0x680 NEW_2
	var_98_string = "all"; // 0x682 PushS
	PlayAnimation(var_98_string, var_37_string); // 0x683 Func
	WaitForAnimEnd(); // 0x685 Func
	var_99_bool = var_40_bool; // 0x687 Push
	if(var_99_bool == 0) goto Label_1678; // 0x688 JumpB
	StopAsync(); // 0x689 Func
	var_100_string = "head"; // 0x68b PushS
	UnlookAsync(var_100_string); // 0x68c Func
	
Label_1678:
	var_101_string = "all"; // 0x68e PushS
	LockAnimationEnd(var_101_string, var_37_string); // 0x68f Func
	RemoveEnvelope(); // 0x691 Func
	var_38_object = 0; // 0x693 SetNull
	
Label_1661:
	var_40_bool = 0; // 0x67d MovB
	
Label_1621:
	var_37_string = "bdie"; // 0x655 MovS
}


func_2619(var_509_float)
{
	var_509_float = 0.05; // 0xa3c MovF
	return 0; // 0xa3d Return
}


func_2622(var_516_int)
{
	var_516_int = 0; // 0xa3f MovI
	return 0; // 0xa40 Return
}


func_3135(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0; // 0xc3f PushV
	var_430_bool = 0; var_431_object = Obj(); // 0xc40 PushV
	var_431_object = var_0_bool; // 0xc41 MovT
	func_3710(var_430_bool, var_431_object); // 0xc42 NEW_2
	var_432_bool = var_430_bool == 0; // 0xc44 Not
	if(var_432_bool == 0) goto Label_3144; // 0xc45 JumpB
	var_419_bool = 0; // 0xc46 MovB
	return 10; // 0xc47 Return
	
Label_3144:
	var_433_bool = 0; // 0xc48 PushV
	func_3224(var_429_float, var_433_bool); // 0xc49 NEW_2
	if(var_433_bool == 0) goto Label_3161; // 0xc4b JumpB
	GetPFPosition(var_425_cvector); // 0xc4c TObjFunc
	GetPFPosition(var_426_cvector); // 0xc4e Func
	var_427_cvector = var_425_cvector - var_426_cvector; // 0xc50 Sub2
	var_428_float = var_427_cvector | var_427_cvector; // 0xc51 Or2
	GetAttackDistance(var_429_float); // 0xc52 TObjFunc
	var_434_int = 50; // 0xc54 PushI
	var_429_float = var_429_float + var_434_int; // 0xc55 Add2
	var_435_float = var_429_float * var_429_float; // 0xc56 Mult
	var_419_bool = var_428_float <= var_435_float; // 0xc57 LE2
	return 10; // 0xc58 Return
	
Label_3161:
	var_419_bool = 0; // 0xc59 MovB
	return 10; // 0xc5a Return
}


func_4672(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x1240 PushV
	var_24_bool = 0; // 0x1241 PushV
	var_24_bool = 0; // 0x1242 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x1243 PushV
	var_26_object = var_21_object; // 0x1244 Mov
	func_4980(var_26_object); // 0x1245 NEW_2
	if(var_25_bool == 0) goto Label_4686; // 0x1247 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x1248 PushV
	var_28_object = var_21_object; // 0x1249 Mov
	func_3579(var_27_bool, var_28_object); // 0x124a NEW_2
	if(var_27_bool == 0) goto Label_4686; // 0x124c JumpB
	var_24_bool = 1; // 0x124d MovB
	
Label_4686:
	if(var_24_bool == 0) goto Label_4693; // 0x124e JumpB
	IsWeaponHolstered(var_23_bool); // 0x124f ObjFunc
	var_31_bool = var_23_bool == 0; // 0x1251 Not
	if(var_31_bool == 0) goto Label_4693; // 0x1252 JumpB
	var_20_bool = 1; // 0x1253 MovB
	return 2; // 0x1254 Return
	
Label_4693:
	var_20_bool = 0; // 0x1255 MovB
	return 2; // 0x1256 Return
}


func_2625(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0; // 0xa41 PushV
	func_2854(var_212_cvector, var_213_bool, var_214_float); // 0xa43 NEW_2
	var_5_bool = 0; // 0xa45 TMovI
	var_237_string = "@GetAttackDistance"; // 0xa46 PushS
	var_238_int = 1; // 0xa47 PushI
	var_239_bool = IsFuncExist(var_190_object, var_237_string, var_238_int); // 0xa48 FuncExist
	if(var_239_bool == 0) goto Label_2639; // 0xa49 JumpB
	GetAttackDistance(var_204_float); // 0xa4a ObjFunc
	var_240_int = 50; // 0xa4c PushI
	var_204_float = var_204_float + var_240_int; // 0xa4d Add2
	goto Label_2640; // 0xa4e Jump
	
Label_2640:
	var_241_int = 150; // 0xa50 PushI
	var_242_bool = var_204_float >= var_241_int; // 0xa51 GE
	if(var_242_bool == 0) goto Label_2644; // 0xa52 JumpB
	var_204_float = 150; // 0xa53 MovI
	
Label_2644:
	var_3_object = 0; // 0xa54 TMovB
	var_0_bool = var_190_object; // 0xa55 TMov
	IsPlayerActor(var_0_bool, var_207_bool); // 0xa56 Func
	var_243_bool = var_207_bool; // 0xa58 Push
	if(var_243_bool == 0) goto Label_2658; // 0xa59 JumpB
	var_244_string = "attack"; // 0xa5a PushS
	PlayGlobalMusic(var_244_string); // 0xa5b Func
	var_245_object = Obj(); // 0xa5d PushV
	func_4110(var_245_object); // 0xa5e NEW_2
	SendPlayerEnemy(var_190_object, var_245_object); // 0xa60 Func
	
Label_2658:
	var_248_bool = var_191_bool; // 0xa62 Push
	if(var_248_bool == 0) goto Label_2662; // 0xa63 JumpB
	var_208_bool = 0; // 0xa64 MovB
	goto Label_2663; // 0xa65 Jump
	
Label_2663:
	var_249_float = 400.0; // 0xa67 PushF
	var_209_float = var_249_float + var_204_float; // 0xa68 Add2
	
Label_2665:
	var_250_bool = 0; // 0xa69 PushV
	var_250_bool = 0; // 0xa6a MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xa6b PushV
	var_252_object = var_0_bool; // 0xa6c MovT
	func_3710(var_251_bool, var_252_object); // 0xa6d NEW_2
	if(var_251_bool == 0) goto Label_2675; // 0xa6f JumpB
	var_253_bool = var_3_object == 0; // 0xa70 Not
	if(var_253_bool == 0) goto Label_2675; // 0xa71 JumpB
	var_250_bool = 1; // 0xa72 MovB
	
Label_2675:
	if(var_250_bool == 0) goto Label_2837; // 0xa73 JumpB
	func_3267(var_214_float); // 0xa75 NEW_2
	GetPFPosition(var_205_cvector); // 0xa77 TObjFunc
	GetPFPosition(var_206_cvector); // 0xa79 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xa7b Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xa7c Or2
	var_259_float = var_209_float * var_209_float; // 0xa7d Mult
	var_260_bool = var_211_float >= var_259_float; // 0xa7e GE
	if(var_260_bool == 0) goto Label_2703; // 0xa7f JumpB
	var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0; // 0xa80 PushV
	var_262_object = var_0_bool; // 0xa81 MovT
	var_263_float = var_204_float; // 0xa82 Mov
	var_264_float = 3000.0; // 0xa83 MovF
	var_265_bool = 1; // 0xa84 MovB
	var_266_bool = 0; // 0xa85 MovB
	TaskCall(8); // 0xa86 TaskCall
	func_3294(var_269_bool, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool); // 0xa87 NEW_2
	TaskReturn(); // 0xa88 TaskReturn
	var_338_bool = var_267_bool == 0; // 0xa8a Not
	if(var_338_bool == 0) goto Label_2701; // 0xa8b JumpB
	goto Label_2837; // 0xa8c Jump
	
Label_2837:
	WaitForAnimEnd(); // 0xb15 Func
	var_339_object = var_3_object; // 0xb17 PushT
	if(var_339_object == 0) goto Label_2842; // 0xb18 JumpB
	return 22; // 0xb19 Return
	
Label_2842:
	var_340_string = "all"; // 0xb1a PushS
	var_341_string = "attack_off"; // 0xb1b PushS
	PlayAnimation(var_340_string, var_341_string); // 0xb1c Func
	WaitForAnimEnd(); // 0xb1e Func
	var_342_bool = var_207_bool; // 0xb20 Push
	if(var_342_bool == 0) goto Label_2853; // 0xb21 JumpB
	var_343_float = 2.0; // 0xb22 PushF
	Sleep(var_343_float); // 0xb23 Func
	
Label_2853:
	return 22; // 0xb25 Return
	
Label_2701:
	var_208_bool = 0; // 0xa8d MovB
	goto Label_2836; // 0xa8e Jump
	
Label_2836:
	goto Label_2665; // 0xb14 Jump
	
Label_2703:
	var_344_float = var_192_float * var_192_float; // 0xa8f Mult
	var_345_bool = var_211_float >= var_344_float; // 0xa90 GE
	if(var_345_bool == 0) goto Label_2828; // 0xa91 JumpB
	GetPFPosition(var_212_cvector); // 0xa92 TObjFunc
	CanReachByPF(var_213_bool, var_212_cvector); // 0xa94 Func
	var_346_bool = var_213_bool == 0; // 0xa96 Not
	if(var_346_bool == 0) goto Label_2727; // 0xa97 JumpB
	var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; var_350_float = 0; var_351_bool = 0; var_352_bool = 0; // 0xa98 PushV
	var_348_object = var_0_bool; // 0xa99 MovT
	var_349_float = var_204_float; // 0xa9a Mov
	var_350_float = 3000.0; // 0xa9b MovF
	var_351_bool = 1; // 0xa9c MovB
	var_352_bool = 0; // 0xa9d MovB
	TaskCall(8); // 0xa9e TaskCall
	func_3294(var_355_bool, var_347_bool, var_348_object, var_349_float, var_350_float, var_351_bool, var_352_bool); // 0xa9f NEW_2
	TaskReturn(); // 0xaa0 TaskReturn
	var_356_bool = var_353_bool == 0; // 0xaa2 Not
	if(var_356_bool == 0) goto Label_2725; // 0xaa3 JumpB
	goto Label_2837; // 0xaa4 Jump
	
Label_2725:
	var_208_bool = 0; // 0xaa5 MovB
	goto Label_2665; // 0xaa6 Jump
	
Label_2727:
	var_357_bool = var_208_bool == 0; // 0xaa7 Not
	if(var_357_bool == 0) goto Label_2752; // 0xaa8 JumpB
	var_358_object = Obj(); // 0xaa9 PushV
	var_358_object = var_0_bool; // 0xaaa MovT
	func_3860(); // 0xaab NEW_2
	var_359_string = "all"; // 0xaad PushS
	var_360_string = "attack_on"; // 0xaae PushS
	PlayAnimation(var_359_string, var_360_string); // 0xaaf Func
	WaitForAnimEnd(); // 0xab1 Func
	func_3267(var_214_float); // 0xab4 NEW_2
	StopAsync(); // 0xab6 Func
	var_208_bool = 1; // 0xab8 MovB
	var_361_bool = 0; var_362_object = Obj(); // 0xab9 PushV
	var_362_object = var_0_bool; // 0xaba MovT
	func_3710(var_361_bool, var_362_object); // 0xabb NEW_2
	var_363_bool = var_361_bool == 0; // 0xabd Not
	if(var_363_bool == 0) goto Label_2752; // 0xabe JumpB
	goto Label_2837; // 0xabf Jump
	
Label_2752:
	rand(var_214_float); // 0xac0 Func
	var_364_bool = 0; // 0xac2 PushV
	var_364_bool = 1; // 0xac3 MovB
	var_365_float = 0.25; // 0xac4 PushF
	var_366_bool = var_214_float < var_365_float; // 0xac5 LT
	if(var_366_bool == 0) goto Label_2764; // 0xac6 JumpB
	var_367_bool = 0; // 0xac7 PushV
	func_3224(var_364_bool, var_367_bool); // 0xac8 NEW_2
	if(var_367_bool == 0) goto Label_2764; // 0xaca JumpB
	var_364_bool = 0; // 0xacb MovB
	
Label_2764:
	if(var_364_bool == 0) goto Label_2781; // 0xacc JumpB
	Face(var_0_bool); // 0xacd Func
	func_3274(); // 0xad0 NEW_2
	var_402_string = "all"; // 0xad2 PushS
	var_403_string = "attack_stay"; // 0xad3 PushS
	PlayAnimation(var_402_string, var_403_string); // 0xad4 Func
	var_404_bool = 0; var_405_float = 0; // 0xad6 PushV
	var_405_float = var_192_float; // 0xad7 Mov
	func_3092(var_214_float, var_404_bool, var_405_float); // 0xad8 NEW_2
	StopAsync(); // 0xada Func
	goto Label_2827; // 0xadc Jump
	
Label_2827:
	goto Label_2836; // 0xb0b Jump
	
Label_2781:
	Face(var_0_bool); // 0xadd Func
	var_615_string = "all"; // 0xadf PushS
	var_616_string = "fjump"; // 0xae0 PushS
	PlayAnimation(var_615_string, var_616_string); // 0xae1 Func
	WaitForAnimEnd(); // 0xae3 Func
	func_3267(var_214_float); // 0xae6 NEW_2
	var_617_cvector = CVector(0.0, 0.0, 0.0); // 0xae8 PushVec
	SetSpeed(var_617_cvector); // 0xae9 Func
	Stop(); // 0xaeb Func
	StopAsync(); // 0xaed Func
	var_618_bool = 0; // 0xaef PushV
	func_3224(var_214_float, var_618_bool); // 0xaf0 NEW_2
	var_619_bool = var_618_bool == 0; // 0xaf2 Not
	if(var_619_bool == 0) goto Label_2827; // 0xaf3 JumpB
	var_620_bool = 0; var_621_object = Obj(); // 0xaf4 PushV
	var_621_object = var_0_bool; // 0xaf5 MovT
	func_3710(var_620_bool, var_621_object); // 0xaf6 NEW_2
	var_622_bool = var_620_bool == 0; // 0xaf8 Not
	if(var_622_bool == 0) goto Label_2811; // 0xaf9 JumpB
	goto Label_2837; // 0xafa Jump
	
Label_2811:
	GetPFPosition(var_205_cvector); // 0xafb TObjFunc
	GetPFPosition(var_206_cvector); // 0xafd Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xaff Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xb00 Or2
	var_623_float = var_192_float * var_192_float; // 0xb01 Mult
	var_624_bool = var_211_float < var_623_float; // 0xb02 LT
	if(var_624_bool == 0) goto Label_2827; // 0xb03 JumpB
	var_625_bool = 0; var_626_float = 0; // 0xb04 PushV
	var_626_float = var_192_float; // 0xb05 Mov
	func_2928(var_214_float, var_625_bool, var_626_float); // 0xb06 NEW_2
	var_627_bool = var_625_bool == 0; // 0xb08 Not
	if(var_627_bool == 0) goto Label_2827; // 0xb09 JumpB
	goto Label_2837; // 0xb0a Jump
	
Label_2828:
	var_628_bool = 0; var_629_float = 0; // 0xb0c PushV
	var_629_float = var_192_float; // 0xb0d Mov
	func_2928(var_214_float, var_628_bool, var_629_float); // 0xb0e NEW_2
	var_630_bool = var_628_bool == 0; // 0xb10 Not
	if(var_630_bool == 0) goto Label_2835; // 0xb11 JumpB
	goto Label_2837; // 0xb12 Jump
	
Label_2835:
	var_208_bool = 1; // 0xb13 MovB
	
Label_2662:
	var_208_bool = 1; // 0xa66 MovB
	
Label_2639:
	var_204_float = var_192_float; // 0xa4f Mov
}


func_4163(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x1044 PushV
	var_73_cvector = var_70_cvector; // 0x1045 Mov
	var_74_cvector = var_71_cvector; // 0x1046 Mov
	func_4144(var_72_float, var_73_cvector, var_74_cvector); // 0x1047 NEW_2
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x1049 PushV
	var_82_cvector = var_70_cvector; // 0x104a Mov
	func_4153(var_81_float, var_82_cvector); // 0x104b NEW_2
	var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x104d PushV
	var_91_cvector = var_71_cvector; // 0x104e Mov
	func_4153(var_90_float, var_91_cvector); // 0x104f NEW_2
	var_92_float = var_81_float * var_90_float; // 0x1051 Mult
	var_69_float = var_72_float / var_72_float; // 0x1052 Div2
	return 0; // 0x1053 Return
}


func_4180(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0; // 0x1054 PushV
	GetVariable(var_126_string, var_128_int); // 0x1055 Func
	var_125_int = var_128_int; // 0x1057 Mov
	return 2; // 0x1058 Return
}


func_3669(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0xe55 PushV
	IsDead(var_50_bool); // 0xe56 ObjFunc
	var_47_bool = var_50_bool; // 0xe58 Mov
	return 2; // 0xe59 Return
}


func_4695(var_34_object)
{
	var_35_object = Obj(); // 0x1258 PushV
	var_35_object = var_34_object; // 0x1259 Mov
	func_4983(); // 0x125a NEW_2
	return 0; // 0x125c Return
}


func_4185(var_568_float)
{
	var_569_object = Obj(); var_570_object = Obj(); // 0x1059 PushV
	CreateFloatVector(var_570_object); // 0x105a Func
	add(var_568_float); // 0x105c ObjFunc
	var_571_int = 15; // 0x105e PushI
	SendWorldWndMessage(var_571_int, var_570_object); // 0x105f Func
	return 2; // 0x1061 Return
}


func_3674(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0xe5a PushV
	var_42_bool = var_37_object == 0; // 0xe5b NullEq
	if(var_42_bool == 0) goto Label_3679; // 0xe5c JumpB
	var_36_bool = 0; // 0xe5d MovB
	return 4; // 0xe5e Return
	
Label_3679:
	var_43_bool = 0; // 0xe5f PushV
	var_43_bool = 0; // 0xe60 MovB
	var_44_string = "IsDead"; // 0xe61 PushS
	var_45_int = 1; // 0xe62 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0xe63 FuncExist
	if(var_46_bool == 0) goto Label_3691; // 0xe64 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0xe65 PushV
	var_48_object = var_37_object; // 0xe66 Mov
	func_3669(var_48_object); // 0xe67 NEW_2
	if(var_47_bool == 0) goto Label_3691; // 0xe69 JumpB
	var_43_bool = 1; // 0xe6a MovB
	
Label_3691:
	if(var_43_bool == 0) goto Label_3694; // 0xe6b JumpB
	var_36_bool = 0; // 0xe6c MovB
	return 4; // 0xe6d Return
	
Label_3694:
	GetScene(var_40_object); // 0xe6e Func
	var_51_bool = var_40_object == 0; // 0xe70 NullEq
	if(var_51_bool == 0) goto Label_3700; // 0xe71 JumpB
	var_36_bool = 0; // 0xe72 MovB
	return 4; // 0xe73 Return
	
Label_3700:
	GetScene(var_41_object); // 0xe74 ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0xe76 Neq
	if(var_52_bool == 0) goto Label_3706; // 0xe77 JumpB
	var_36_bool = 0; // 0xe78 MovB
	return 4; // 0xe79 Return
	
Label_3706:
	var_36_bool = 1; // 0xe7a MovB
	return 4; // 0xe7b Return
}


func_3163(var_417_bool)
{
	var_418_bool = 0; // 0xc5b PushV
	var_418_bool = 0; // 0xc5c MovB
	var_419_bool = 0; // 0xc5d PushV
	func_3135(var_418_bool, var_419_bool); // 0xc5e NEW_2
	if(var_419_bool == 0) goto Label_3174; // 0xc60 JumpB
	var_436_bool = 0; // 0xc61 PushV
	func_3179(var_417_bool, var_418_bool, var_436_bool); // 0xc62 NEW_2
	if(var_436_bool == 0) goto Label_3174; // 0xc64 JumpB
	var_418_bool = 1; // 0xc65 MovB
	
Label_3174:
	if(var_418_bool == 0) goto Label_3177; // 0xc66 JumpB
	var_417_bool = 1; // 0xc67 MovB
	return 0; // 0xc68 Return
	
Label_3177:
	var_417_bool = 0; // 0xc69 MovB
	return 0; // 0xc6a Return
}


func_4701(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x125e PushV
	var_24_object = var_22_object; // 0x125f Mov
	func_3579(var_23_bool, var_24_object); // 0x1260 NEW_2
	if(var_23_bool == 0) goto Label_4713; // 0x1262 JumpB
	var_27_object = Obj(); // 0x1263 PushV
	func_4110(var_27_object); // 0x1264 NEW_2
	var_30_float = -0.03; // 0x1266 PushF
	ReportReputationChange(var_22_object, var_27_object, var_30_float); // 0x1267 Func
	
Label_4713:
	return 0; // 0x1269 Return
}


func_4195(var_121_int)
{
	var_122_float = 0; var_123_float = 0; // 0x1063 PushV
	GetGameTime(var_123_float); // 0x1064 Func
	var_124_int = 1; // 0x1066 PushI
	var_125_int = 0; // 0x1067 PushV
	var_126_int = 24; // 0x1068 PushI
	var_125_int = var_123_float / var_123_float; // 0x1069 Div2
	var_121_int = var_124_int + var_125_int; // 0x106a Add2
	return 2; // 0x106b Return
}


func_4714(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x126a PushV
	var_24_string = "heal"; // 0x126b PushS
	var_25_bool = var_21_string == var_24_string; // 0x126c Eq
	if(var_25_bool == 0) goto Label_4728; // 0x126d JumpB
	var_26_string = "player"; // 0x126e PushS
	FindActor(var_23_object, var_26_string); // 0x126f Func
	var_27_bool = 0; var_28_object = Obj(); // 0x1271 PushV
	var_28_object = var_23_object; // 0x1272 Mov
	func_5011(var_28_object); // 0x1273 NEW_2
	var_20_bool = var_27_bool; // 0x1274 Mov
	return 2; // 0x1276 Return
	
Label_4728:
	var_20_bool = 0; // 0x1278 MovB
	return 2; // 0x1279 Return
}


func_3179(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); // 0xc6b PushV
	GetScene(var_442_object); // 0xc6c Func
	var_443_bool = 0; // 0xc6e MovB
	
Label_3183:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj(); // 0xc6f PushV
	var_448_object = var_0_bool; // 0xc70 MovT
	func_3564(var_448_object); // 0xc71 NEW_2
	var_449_int = -var_447_cvector; // 0xc73 Neg
	FindDirLength(var_444_float, var_449_int, var_444_float); // 0xc74 Func
	var_450_bool = var_444_float < var_4_string; // 0xc76 LT
	if(var_450_bool == 0) goto Label_3193; // 0xc77 JumpB
	goto Label_3221; // 0xc78 Jump
	
Label_3221:
	var_436_bool = var_443_bool; // 0xc95 Mov
	return 10; // 0xc96 Return
	
Label_3193:
	Face(var_0_bool); // 0xc79 Func
	var_451_string = "all"; // 0xc7b PushS
	var_452_string = "bjump"; // 0xc7c PushS
	PlayAnimation(var_451_string, var_452_string); // 0xc7d Func
	GetPFPosition(var_445_cvector); // 0xc7f TObjFunc
	GetPFPosition(var_446_cvector); // 0xc81 Func
	WaitForAnimEnd(); // 0xc83 Func
	func_3267(var_446_cvector); // 0xc86 NEW_2
	StopAsync(); // 0xc88 Func
	var_453_cvector = CVector(0.0, 0.0, 0.0); // 0xc8a PushVec
	SetSpeed(var_453_cvector); // 0xc8b Func
	var_443_bool = 1; // 0xc8d MovB
	var_454_bool = 0; // 0xc8e PushV
	func_3135(var_446_cvector, var_454_bool); // 0xc8f NEW_2
	var_455_bool = var_454_bool == 0; // 0xc91 Not
	if(var_455_bool == 0) goto Label_3220; // 0xc92 JumpB
	goto Label_3221; // 0xc93 Jump
	
Label_3220:
	goto Label_3183; // 0xc94 Jump
}


func_4204(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x106c PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x106d Func
	var_25_bool = var_24_bool; // 0x106f Push
	if(var_25_bool == 0) goto Label_4212; // 0x1070 JumpB
	var_26_string = "attack"; // 0x1071 PushS
	PlayGlobalMusic(var_26_string); // 0x1072 Func
	
Label_4212:
	return 2; // 0x1074 Return
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_115_object, var_116_object)
{
	var_0_bool = var_116_object; // 0x73 TMov
	var_1_object = var_115_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_121_int = 1; // 0x76 PushI
	if(var_121_int == 0) goto Label_263; // 0x77 JumpB
	var_122_bool = 0; // 0x78 PushV
	var_122_bool = 0; // 0x79 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x7a PushV
	var_124_object = var_1_object; // 0x7b MovT
	func_4236(var_124_object); // 0x7c NEW_2
	if(var_123_bool == 0) goto Label_133; // 0x7e JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x7f PushV
	var_132_object = var_1_object; // 0x80 MovT
	func_4258(var_131_bool, var_132_object); // 0x81 NEW_2
	if(var_131_bool == 0) goto Label_133; // 0x83 JumpB
	var_122_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_122_bool == 0) goto Label_159; // 0x85 JumpB
	var_142_string = ""; // 0x86 PushV
	var_142_string = "Neutral"; // 0x87 MovS
	func_293(var_116_object, var_142_string); // 0x88 NEW_2
	var_159_int = 543329; // 0x8a PushI
	SetMessage(var_159_int); // 0x8b TObjFunc
	ClearReplies(); // 0x8d TObjFunc
	var_160_int = 543330; // 0x8f PushI
	var_161_int = 45790; // 0x90 PushI
	var_162_int = 45787; // 0x91 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x92 TObjFunc
	var_163_int = 543332; // 0x94 PushI
	var_164_int = 45790; // 0x95 PushI
	var_165_int = 45789; // 0x96 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x97 TObjFunc
	var_166_int = 543331; // 0x99 PushI
	var_167_int = -1; // 0x9a PushI
	var_168_int = 45788; // 0x9b PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x9c TObjFunc
	goto Label_263; // 0x9e Jump
	
Label_263:
	var_169_bool = 0; // 0x107 PushV
	func_5024(var_169_bool); // 0x108 NEW_2
	if(var_169_bool == 0) goto Label_278; // 0x10a JumpB
	
Label_267:
	lshWaitForAnimEnd(); // 0x10b Func
	var_170_object = var_3_object; // 0x10d PushT
	if(var_170_object == 0) goto Label_272; // 0x10e JumpB
	goto Label_277; // 0x10f Jump
	
Label_277:
	goto Label_292; // 0x115 Jump
	
Label_292:
	return 0; // 0x124 Return
	
Label_272:
	var_171_string = ""; // 0x110 PushV
	var_171_string = var_2_object; // 0x111 MovT
	func_4020(var_171_string); // 0x112 NEW_2
	goto Label_267; // 0x114 Jump
	
Label_278:
	var_182_string = "all"; // 0x116 PushS
	var_183_string = "idle"; // 0x117 PushS
	PlayAnimation(var_182_string, var_183_string); // 0x118 Func
	
Label_282:
	WaitForAnimEnd(); // 0x11a Func
	var_184_object = var_3_object; // 0x11c PushT
	if(var_184_object == 0) goto Label_287; // 0x11d JumpB
	goto Label_292; // 0x11e Jump
	
Label_287:
	var_185_string = "all"; // 0x11f PushS
	var_186_string = "idle"; // 0x120 PushS
	PlayAnimation(var_185_string, var_186_string); // 0x121 Func
	goto Label_282; // 0x123 Jump
	
Label_159:
	var_187_bool = 0; // 0x9f PushV
	var_187_bool = 0; // 0xa0 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0xa1 PushV
	var_189_object = var_1_object; // 0xa2 MovT
	func_4236(var_189_object); // 0xa3 NEW_2
	if(var_188_bool == 0) goto Label_173; // 0xa5 JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0xa6 PushV
	var_191_object = var_1_object; // 0xa7 MovT
	func_4258(var_190_bool, var_191_object); // 0xa8 NEW_2
	var_192_bool = var_190_bool == 0; // 0xaa Not
	if(var_192_bool == 0) goto Label_173; // 0xab JumpB
	var_187_bool = 1; // 0xac MovB
	
Label_173:
	if(var_187_bool == 0) goto Label_189; // 0xad JumpB
	var_193_string = ""; // 0xae PushV
	var_193_string = "Neutral"; // 0xaf MovS
	func_293(var_116_object, var_193_string); // 0xb0 NEW_2
	var_194_int = 543328; // 0xb2 PushI
	SetMessage(var_194_int); // 0xb3 TObjFunc
	ClearReplies(); // 0xb5 TObjFunc
	var_195_int = 543336; // 0xb7 PushI
	var_196_int = -1; // 0xb8 PushI
	var_197_int = 45794; // 0xb9 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xba TObjFunc
	goto Label_263; // 0xbc Jump
	
Label_189:
	var_198_string = ""; // 0xbd PushV
	var_198_string = "Neutral"; // 0xbe MovS
	func_293(var_116_object, var_198_string); // 0xbf NEW_2
	var_199_int = 537969; // 0xc1 PushI
	SetMessage(var_199_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_200_bool = 0; // 0xc6 PushV
	var_200_bool = 0; // 0xc7 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0xc8 PushV
	var_202_object = var_1_object; // 0xc9 MovT
	func_4248(var_201_bool, var_202_object); // 0xca NEW_2
	if(var_201_bool == 0) goto Label_211; // 0xcc JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0xcd PushV
	var_208_object = var_1_object; // 0xce MovT
	func_4224(var_208_object); // 0xcf NEW_2
	if(var_207_bool == 0) goto Label_211; // 0xd1 JumpB
	var_200_bool = 1; // 0xd2 MovB
	
Label_211:
	if(var_200_bool == 0) goto Label_217; // 0xd3 JumpB
	var_213_int = 537970; // 0xd4 PushI
	var_214_int = 39833; // 0xd5 PushI
	var_215_int = 39832; // 0xd6 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xd7 TObjFunc
	
Label_217:
	var_216_bool = 0; // 0xd9 PushV
	var_216_bool = 0; // 0xda MovB
	var_217_bool = 0; var_218_object = Obj(); // 0xdb PushV
	var_218_object = var_1_object; // 0xdc MovT
	func_4248(var_217_bool, var_218_object); // 0xdd NEW_2
	if(var_217_bool == 0) goto Label_230; // 0xdf JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0xe0 PushV
	var_220_object = var_1_object; // 0xe1 MovT
	func_4224(var_220_object); // 0xe2 NEW_2
	if(var_219_bool == 0) goto Label_230; // 0xe4 JumpB
	var_216_bool = 1; // 0xe5 MovB
	
Label_230:
	if(var_216_bool == 0) goto Label_236; // 0xe6 JumpB
	var_221_int = 537995; // 0xe7 PushI
	var_222_int = 39861; // 0xe8 PushI
	var_223_int = 39860; // 0xe9 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xea TObjFunc
	
Label_236:
	var_224_bool = 0; // 0xec PushV
	var_224_bool = 0; // 0xed MovB
	var_225_bool = 0; var_226_object = Obj(); // 0xee PushV
	var_226_object = var_1_object; // 0xef MovT
	func_4248(var_225_bool, var_226_object); // 0xf0 NEW_2
	if(var_225_bool == 0) goto Label_249; // 0xf2 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xf3 PushV
	var_228_object = var_1_object; // 0xf4 MovT
	func_4224(var_228_object); // 0xf5 NEW_2
	if(var_227_bool == 0) goto Label_249; // 0xf7 JumpB
	var_224_bool = 1; // 0xf8 MovB
	
Label_249:
	if(var_224_bool == 0) goto Label_255; // 0xf9 JumpB
	var_229_int = 538003; // 0xfa PushI
	var_230_int = 39869; // 0xfb PushI
	var_231_int = 39868; // 0xfc PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xfd TObjFunc
	
Label_255:
	var_232_int = 538126; // 0xff PushI
	var_233_int = -1; // 0x100 PushI
	var_234_int = 39997; // 0x101 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x102 TObjFunc
	goto Label_263; // 0x104 Jump
}


func_4213()
{
	var_473_object = Obj(); var_474_object = Obj(); // 0x1075 PushV
	GetScene(var_474_object); // 0x1076 Func
	var_475_string = "battle"; // 0x1078 PushS
	var_476_object = Obj(); // 0x1079 PushV
	func_4110(var_476_object); // 0x107a NEW_2
	BroadcastMessage(var_475_string, var_476_object, var_474_object); // 0x107c Func
	return 2; // 0x107e Return
}


func_4730(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x127a PushV
	var_34_string = "heal"; // 0x127b PushS
	var_35_bool = var_31_string == var_34_string; // 0x127c Eq
	if(var_35_bool == 0) goto Label_4742; // 0x127d JumpB
	var_36_string = "player"; // 0x127e PushS
	FindActor(var_33_object, var_36_string); // 0x127f Func
	var_37_object = Obj(); // 0x1281 PushV
	var_37_object = var_33_object; // 0x1282 Mov
	func_5014(); // 0x1283 NEW_2
	var_33_object = 0; // 0x1285 SetNull
	
Label_4742:
	return 2; // 0x1286 Return
}


func_3710(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0xe7e PushV
	var_36_bool = 0; var_37_object = Obj(); // 0xe7f PushV
	var_37_object = var_33_object; // 0xe80 Mov
	func_3674(var_36_bool, var_37_object); // 0xe81 NEW_2
	var_53_bool = var_36_bool == 0; // 0xe83 Not
	if(var_53_bool == 0) goto Label_3719; // 0xe84 JumpB
	var_32_bool = 0; // 0xe85 MovB
	return 2; // 0xe86 Return
	
Label_3719:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0xe87 PushV
	var_55_object = var_33_object; // 0xe88 Mov
	var_56_string = "noaccess"; // 0xe89 MovS
	func_3584(var_54_bool, var_55_object, var_56_string); // 0xe8a NEW_2
	var_63_bool = var_54_bool == 0; // 0xe8c Not
	if(var_63_bool == 0) goto Label_3728; // 0xe8d JumpB
	var_32_bool = 1; // 0xe8e MovB
	return 2; // 0xe8f Return
	
Label_3728:
	var_64_string = "noaccess"; // 0xe90 PushS
	GetProperty(var_64_string, var_35_int); // 0xe91 ObjFunc
	var_65_int = 0; // 0xe93 PushI
	var_32_bool = var_35_int == var_65_int; // 0xe94 Eq2
	return 2; // 0xe95 Return
}


func_4224(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x1081 PushV
	var_210_string = "branch"; // 0x1082 MovS
	func_4180(var_209_int, var_210_string); // 0x1083 NEW_2
	var_211_int = 0; // 0x1085 PushI
	var_212_bool = var_209_int == var_211_int; // 0x1086 Eq
	if(var_212_bool == 0) goto Label_4234; // 0x1087 JumpB
	var_207_bool = 1; // 0x1088 MovB
	return 0; // 0x1089 Return
	
Label_4234:
	var_207_bool = 0; // 0x108a MovB
	return 0; // 0x108b Return
}


func_4743(var_74_string, var_75_int)
{
	var_76_string = ""; var_77_string = ""; // 0x1287 PushV
	var_77_string = "idle"; // 0x1288 MovS
	var_78_int = var_75_int; // 0x1289 Push
	if(var_78_int == 0) goto Label_4748; // 0x128a JumpB
	var_77_string = var_77_string + var_75_int; // 0x128b Add2
	
Label_4748:
	var_74_string = var_77_string; // 0x128c Mov
	return 2; // 0x128d Return
}


func_4236(var_123_bool)
{
	var_125_int = 0; var_126_string = ""; // 0x108d PushV
	var_126_string = "branch"; // 0x108e MovS
	func_4180(var_125_int, var_126_string); // 0x108f NEW_2
	var_129_int = 2; // 0x1091 PushI
	var_130_bool = var_125_int == var_129_int; // 0x1092 Eq
	if(var_130_bool == 0) goto Label_4246; // 0x1093 JumpB
	var_123_bool = 1; // 0x1094 MovB
	return 0; // 0x1095 Return
	
Label_4246:
	var_123_bool = 0; // 0x1096 MovB
	return 0; // 0x1097 Return
}


func_4750(var_68_int)
{
	var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_bool = 0; // 0x128e PushV
	var_71_int = 0; // 0x128f MovI
	
Label_4752:
	var_73_string = "all"; // 0x1290 PushS
	var_74_string = ""; var_75_int = 0; // 0x1291 PushV
	var_75_int = var_71_int; // 0x1292 Mov
	func_4743(var_74_string, var_75_int); // 0x1293 NEW_2
	HasAnimation(var_72_bool, var_73_string, var_74_string); // 0x1295 Func
	var_79_bool = var_72_bool == 0; // 0x1297 Not
	if(var_79_bool == 0) goto Label_4762; // 0x1298 JumpB
	goto Label_4765; // 0x1299 Jump
	
Label_4765:
	var_68_int = var_71_int; // 0x129d Mov
	return 4; // 0x129e Return
	
Label_4762:
	var_80_int = 1; // 0x129a PushI
	var_71_int = var_71_int + var_80_int; // 0x129b Add2
	goto Label_4752; // 0x129c Jump
}


func_1685(var_44_string)
{
	RemoveRTEnvelope(); // 0x696 Func
	SetDeathState(); // 0x698 Func
	Stop(); // 0x69a Func
	StopAsync(); // 0x69c Func
	StopSecondaryAnimation(); // 0x69e Func
	var_45_string = ""; // 0x6a0 PushV
	var_45_string = var_44_string; // 0x6a1 Mov
	func_4069(var_45_string); // 0x6a2 NEW_2
	var_74_string = "all"; // 0x6a4 PushS
	PlayAnimation(var_74_string, var_44_string); // 0x6a5 Func
	WaitForAnimEnd(); // 0x6a7 Func
	var_75_string = "all"; // 0x6a9 PushS
	LockAnimationEnd(var_75_string, var_44_string); // 0x6aa Func
	RemoveEnvelope(); // 0x6ac Func
	return 0; // 0x6ae Return
}


func_3734(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0xe96 PushV
	var_51_bool = var_36_object == 0; // 0xe97 NullEq
	if(var_51_bool == 0) goto Label_3738; // 0xe98 JumpB
	return 14; // 0xe99 Return
	
Label_3738:
	IsDead(var_44_bool); // 0xe9a Func
	var_52_bool = var_44_bool; // 0xe9c Push
	if(var_52_bool == 0) goto Label_3743; // 0xe9d JumpB
	return 14; // 0xe9e Return
	
Label_3743:
	GetSecondaryAnimationType(var_45_int); // 0xe9f Func
	var_53_int = 0; // 0xea1 PushI
	var_54_bool = var_45_int < var_53_int; // 0xea2 LT
	if(var_54_bool == 0) goto Label_3749; // 0xea3 JumpB
	return 14; // 0xea4 Return
	
Label_3749:
	GetPosition(var_46_cvector); // 0xea5 ObjFunc
	GetPosition(var_47_cvector); // 0xea7 Func
	GetDirection(var_48_cvector); // 0xea9 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0xeab Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0xeac PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0xead PushE
	var_57_float = var_55_float * var_56_float; // 0xeae Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0xeaf PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0xeb0 PushE
	var_60_float = var_58_float * var_59_float; // 0xeb1 Mult
	var_61_int = var_57_float + var_60_float; // 0xeb2 Add
	var_62_int = 0; // 0xeb3 PushI
	var_63_bool = var_61_int >= var_62_int; // 0xeb4 GE
	if(var_63_bool == 0) goto Label_3768; // 0xeb5 JumpB
	var_50_string = "fhit"; // 0xeb6 MovS
	goto Label_3769; // 0xeb7 Jump
	
Label_3769:
	var_64_string = "hit_react"; // 0xeb9 PushS
	var_65_string = "1"; // 0xeba PushS
	var_66_int = var_50_string + var_65_string; // 0xebb Add
	var_67_string = "2"; // 0xebc PushS
	var_68_int = var_50_string + var_67_string; // 0xebd Add
	var_69_int = -10; // 0xebe PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0xebf Func
	return 14; // 0xec1 Return
	
Label_3768:
	var_50_string = "bhit"; // 0xeb8 MovS
}


func_4248(var_201_bool, var_202_object)
{
	var_203_bool = 0; var_204_object = Obj(); // 0x1099 PushV
	var_204_object = var_202_object; // 0x109a Mov
	func_4268(var_204_object); // 0x109b NEW_2
	if(var_203_bool == 0) goto Label_4256; // 0x109d JumpB
	var_201_bool = 1; // 0x109e MovB
	return 0; // 0x109f Return
	
Label_4256:
	var_201_bool = 0; // 0x10a0 MovB
	return 0; // 0x10a1 Return
}


func_3224(var_0_bool, var_367_bool)
{
	var_368_bool = 0; var_369_bool = 0; // 0xc98 PushV
	var_370_string = "IsAttacking"; // 0xc99 PushS
	var_371_int = 1; // 0xc9a PushI
	var_372_bool = IsFuncExist(var_0_bool, var_370_string, var_371_int); // 0xc9b FuncExist
	if(var_372_bool == 0) goto Label_3233; // 0xc9c JumpB
	IsAttacking(var_369_bool); // 0xc9d TObjFunc
	var_367_bool = var_369_bool; // 0xc9f Mov
	return 2; // 0xca0 Return
	
Label_3233:
	var_367_bool = 0; // 0xca1 MovB
	return 2; // 0xca2 Return
}


func_4767(var_62_int)
{
	var_64_bool = 0; // 0x12a0 PushV
	func_5070(var_64_bool); // 0x12a1 NEW_2
	if(var_64_bool == 0) goto Label_4774; // 0x12a3 JumpB
	var_62_int = 2; // 0x12a4 MovI
	goto Label_4775; // 0x12a5 Jump
	
Label_4775:
	return 0; // 0x12a7 Return
	
Label_4774:
	var_62_int = 0; // 0x12a6 MovI
}


func_4258(var_131_bool, var_132_object)
{
	var_133_bool = 0; var_134_object = Obj(); // 0x10a3 PushV
	var_134_object = var_132_object; // 0x10a4 Mov
	func_4275(var_134_object); // 0x10a5 NEW_2
	if(var_133_bool == 0) goto Label_4266; // 0x10a7 JumpB
	var_131_bool = 1; // 0x10a8 MovB
	return 0; // 0x10a9 Return
	
Label_4266:
	var_131_bool = 0; // 0x10aa MovB
	return 0; // 0x10ab Return
}


func_3235(var_2_object, var_5_bool)
{
	var_480_float = 0; var_481_int = 0; var_482_float = 0; var_483_int = 0; // 0xca3 PushV
	var_484_bool = var_2_object == 0; // 0xca4 Not
	if(var_484_bool == 0) goto Label_3239; // 0xca5 JumpB
	return 4; // 0xca6 Return
	
Label_3239:
	var_485_bool = var_5_bool; // 0xca7 PushT
	if(var_485_bool == 0) goto Label_3247; // 0xca8 JumpB
	var_486_int = -1; // 0xca9 PushI
	var_5_bool = var_5_bool + var_486_int; // 0xcaa Add2
	var_487_int = 0; // 0xcab PushI
	var_488_bool = var_5_bool > var_487_int; // 0xcac GT
	if(var_488_bool == 0) goto Label_3247; // 0xcad JumpB
	return 4; // 0xcae Return
	
Label_3247:
	rand(var_482_float); // 0xcaf Func
	var_489_float = 0; // 0xcb1 PushV
	func_3285(var_489_float); // 0xcb2 NEW_2
	var_490_bool = var_482_float < var_489_float; // 0xcb4 LT
	if(var_490_bool == 0) goto Label_3266; // 0xcb5 JumpB
	irand(var_483_int, var_482_float); // 0xcb6 Func
	var_491_int = 1; // 0xcb8 PushI
	var_483_int = var_483_int + var_491_int; // 0xcb9 Add2
	var_492_string = "attack"; // 0xcba PushS
	var_493_int = var_492_string + var_483_int; // 0xcbb Add
	Speak(var_493_int); // 0xcbc Func
	var_494_int = 0; // 0xcbe PushV
	func_3283(var_494_int); // 0xcbf NEW_2
	var_5_bool = var_494_int; // 0xcc0 TMov
	
Label_3266:
	return 4; // 0xcc2 Return
}


func_4776(var_61_object)
{
	var_62_object = Obj(); // 0x12a9 PushV
	var_62_object = var_61_object; // 0x12aa Mov
	TaskCall(6); // 0x12ab TaskCall
	func_2336(var_63_object, var_62_object); // 0x12ac NEW_2
	TaskReturn(); // 0x12ad TaskReturn
	return 0; // 0x12af Return
}


func_4268(var_203_bool)
{
	var_205_int = 0; // 0x10ad PushV
	func_4195(var_205_int); // 0x10ae NEW_2
	var_206_int = 1; // 0x10b0 PushI
	var_203_bool = var_205_int == var_206_int; // 0x10b1 Eq2
	return 0; // 0x10b2 Return
}


func_4784(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj(); // 0x12b1 PushV
	var_92_object = var_90_object; // 0x12b2 Mov
	func_3710(var_91_bool, var_92_object); // 0x12b3 NEW_2
	if(var_91_bool == 0) goto Label_4792; // 0x12b5 JumpB
	var_89_int = 2; // 0x12b6 MovI
	goto Label_4793; // 0x12b7 Jump
	
Label_4793:
	return 0; // 0x12b9 Return
	
Label_4792:
	var_89_int = 0; // 0x12b8 MovI
}


func_4275(var_133_bool)
{
	var_135_int = 0; // 0x10b4 PushV
	func_4195(var_135_int); // 0x10b5 NEW_2
	var_141_int = 4; // 0x10b7 PushI
	var_133_bool = var_135_int == var_141_int; // 0x10b8 Eq2
	return 0; // 0x10b9 Return
}


func_4282(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x10ba PushV
	var_109_string = "branch"; // 0x10bb PushS
	GetVariable(var_109_string, var_108_int); // 0x10bc Func
	var_110_int = 0; // 0x10be PushI
	var_111_bool = var_108_int == var_110_int; // 0x10bf Eq
	if(var_111_bool == 0) goto Label_4292; // 0x10c0 JumpB
	var_106_int = 1; // 0x10c1 MovI
	return 2; // 0x10c2 Return
	
Label_4292:
	var_112_int = 1; // 0x10c4 PushI
	var_113_bool = var_108_int == var_112_int; // 0x10c5 Eq
	if(var_113_bool == 0) goto Label_4297; // 0x10c6 JumpB
	var_106_int = 2; // 0x10c7 MovI
	return 2; // 0x10c8 Return
	
Label_4297:
	var_106_int = 3; // 0x10c9 MovI
	return 2; // 0x10ca Return
}


func_4794(var_182_object)
{
	var_183_object = Obj(); // 0x12bb PushV
	var_183_object = var_182_object; // 0x12bc Mov
	TaskCall(7); // 0x12bd TaskCall
	func_2611(var_183_object); // 0x12be NEW_2
	TaskReturn(); // 0x12bf TaskReturn
	return 0; // 0x12c1 Return
}


func_3778(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0xec2 PushV
	var_44_bool = 0; // 0xec3 PushV
	var_44_bool = 0; // 0xec4 MovB
	var_45_bool = 0; // 0xec5 PushV
	var_45_bool = 0; // 0xec6 MovB
	var_46_object = var_23_object; // 0xec7 Push
	if(var_46_object == 0) goto Label_3789; // 0xec8 JumpB
	var_47_int = 4; // 0xec9 PushI
	var_48_bool = var_24_int != var_47_int; // 0xeca Neq
	if(var_48_bool == 0) goto Label_3789; // 0xecb JumpB
	var_45_bool = 1; // 0xecc MovB
	
Label_3789:
	if(var_45_bool == 0) goto Label_3794; // 0xecd JumpB
	var_49_int = 5; // 0xece PushI
	var_50_bool = var_24_int != var_49_int; // 0xecf Neq
	if(var_50_bool == 0) goto Label_3794; // 0xed0 JumpB
	var_44_bool = 1; // 0xed1 MovB
	
Label_3794:
	if(var_44_bool == 0) goto Label_3841; // 0xed2 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xed3 PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0xed4 PushV
	var_54_object = var_23_object; // 0xed5 Mov
	func_3564(var_54_object); // 0xed6 NEW_2
	var_52_cvector = var_53_cvector; // 0xed7 Mov
	func_4116(var_51_cvector, var_52_cvector); // 0xed9 NEW_2
	var_35_cvector = var_51_cvector; // 0xeda Mov
	CreateVectorVector(var_36_object); // 0xedc Func
	var_37_int = 1; // 0xede MovI
	
Label_3807:
	var_64_string = "hit"; // 0xedf PushS
	var_65_int = var_64_string + var_37_int; // 0xee0 Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0xee1 Func
	var_66_bool = var_38_bool == 0; // 0xee3 Not
	if(var_66_bool == 0) goto Label_3814; // 0xee4 JumpB
	goto Label_3823; // 0xee5 Jump
	
Label_3823:
	size(var_41_int); // 0xeef ObjFunc
	var_67_int = var_41_int; // 0xef1 Push
	if(var_67_int == 0) goto Label_3840; // 0xef2 JumpB
	irand(var_42_int, var_41_int); // 0xef3 Func
	get(var_43_cvector, var_42_int); // 0xef5 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0xef7 PushV
	var_68_object = var_23_object; // 0xef8 Mov
	var_69_int = var_24_int; // 0xef9 Mov
	var_70_float = var_25_float; // 0xefa Mov
	var_71_cvector = var_43_cvector; // 0xefb Mov
	var_72_cvector = -var_35_cvector; // 0xefc Neg2
	func_3846(var_70_float, var_71_cvector, var_72_cvector); // 0xefd NEW_2
	return 18; // 0xeff Return
	
Label_3840:
	var_36_object = 0; // 0xf00 SetNull
	
Label_3841:
	var_113_object = Obj(); // 0xf01 PushV
	var_113_object = var_23_object; // 0xf02 Mov
	func_3734(var_113_object); // 0xf03 NEW_2
	return 18; // 0xf05 Return
	
Label_3814:
	var_114_int = var_40_cvector | var_35_cvector; // 0xee6 Or
	var_115_float = 0.70711; // 0xee7 PushF
	var_116_bool = var_114_int >= var_115_float; // 0xee8 GE
	if(var_116_bool == 0) goto Label_3820; // 0xee9 JumpB
	add(var_39_cvector); // 0xeea ObjFunc
	
Label_3820:
	var_117_int = 1; // 0xeec PushI
	var_37_int = var_37_int + var_117_int; // 0xeed Add2
	goto Label_3807; // 0xeee Jump
}


func_3267(var_0_bool)
{
	var_254_object = Obj(); // 0xcc3 PushV
	var_254_object = var_0_bool; // 0xcc4 MovT
	func_4204(var_254_object); // 0xcc5 NEW_2
	return 0; // 0xcc7 Return
}


func_1732()
{
	var_21_bool = 0; // 0x6c4 PushV
	func_3871(var_21_bool); // 0x6c5 NEW_2
	var_24_bool = var_21_bool == 0; // 0x6c7 Not
	if(var_24_bool == 0) goto Label_1740; // 0x6c8 JumpB
	func_4979(); // 0x6ca NEW_2
	
Label_1740:
	return 0; // 0x6cc Return
}


func_4802(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x12c2 PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x12c3 PushV
	var_43_object = var_36_object; // 0x12c4 Mov
	var_44_string = "class"; // 0x12c5 MovS
	func_3584(var_42_bool, var_43_object, var_44_string); // 0x12c6 NEW_2
	var_51_bool = var_42_bool == 0; // 0x12c8 Not
	if(var_51_bool == 0) goto Label_4812; // 0x12c9 JumpB
	var_35_bool = 0; // 0x12ca MovB
	return 4; // 0x12cb Return
	
Label_4812:
	var_52_string = "class"; // 0x12cc PushS
	GetProperty(var_52_string, var_40_string); // 0x12cd Func
	var_53_string = "class"; // 0x12cf PushS
	GetProperty(var_53_string, var_41_string); // 0x12d0 ObjFunc
	var_54_bool = 0; // 0x12d2 PushV
	var_54_bool = 0; // 0x12d3 MovB
	var_55_bool = var_37_bool == 0; // 0x12d4 Not
	if(var_55_bool == 0) goto Label_4825; // 0x12d5 JumpB
	var_56_bool = var_40_string == var_41_string; // 0x12d6 Eq
	if(var_56_bool == 0) goto Label_4825; // 0x12d7 JumpB
	var_54_bool = 1; // 0x12d8 MovB
	
Label_4825:
	if(var_54_bool == 0) goto Label_4828; // 0x12d9 JumpB
	var_35_bool = 1; // 0x12da MovB
	return 4; // 0x12db Return
	
Label_4828:
	var_57_string = "rat"; // 0x12dc PushS
	var_58_bool = var_41_string == var_57_string; // 0x12dd Eq
	if(var_58_bool == 0) goto Label_4834; // 0x12de JumpB
	var_35_bool = 0; // 0x12df MovB
	return 4; // 0x12e0 Return
	
Label_4834:
	var_59_string = "rat_big"; // 0x12e2 PushS
	var_60_bool = var_41_string == var_59_string; // 0x12e3 Eq
	if(var_60_bool == 0) goto Label_4840; // 0x12e4 JumpB
	var_35_bool = 0; // 0x12e5 MovB
	return 4; // 0x12e6 Return
	
Label_4840:
	var_61_string = "dog"; // 0x12e8 PushS
	var_62_bool = var_41_string == var_61_string; // 0x12e9 Eq
	if(var_62_bool == 0) goto Label_4846; // 0x12ea JumpB
	var_35_bool = 0; // 0x12eb MovB
	return 4; // 0x12ec Return
	
Label_4846:
	var_63_string = "grabitel"; // 0x12ee PushS
	var_64_bool = var_41_string == var_63_string; // 0x12ef Eq
	if(var_64_bool == 0) goto Label_4852; // 0x12f0 JumpB
	var_35_bool = 0; // 0x12f1 MovB
	return 4; // 0x12f2 Return
	
Label_4852:
	var_65_string = "bomber"; // 0x12f4 PushS
	var_66_bool = var_41_string == var_65_string; // 0x12f5 Eq
	if(var_66_bool == 0) goto Label_4858; // 0x12f6 JumpB
	var_35_bool = 0; // 0x12f7 MovB
	return 4; // 0x12f8 Return
	
Label_4858:
	var_67_string = "sanitar"; // 0x12fa PushS
	var_68_bool = var_41_string == var_67_string; // 0x12fb Eq
	if(var_68_bool == 0) goto Label_4864; // 0x12fc JumpB
	var_35_bool = 0; // 0x12fd MovB
	return 4; // 0x12fe Return
	
Label_4864:
	var_69_string = "hunter"; // 0x1300 PushS
	var_70_bool = var_41_string == var_69_string; // 0x1301 Eq
	if(var_70_bool == 0) goto Label_4870; // 0x1302 JumpB
	var_35_bool = 0; // 0x1303 MovB
	return 4; // 0x1304 Return
	
Label_4870:
	var_71_string = "soldier"; // 0x1306 PushS
	var_72_bool = var_41_string == var_71_string; // 0x1307 Eq
	if(var_72_bool == 0) goto Label_4875; // 0x1308 JumpB
	var_35_bool = 0; // 0x1309 MovB
	return 4; // 0x130a Return
	
Label_4875:
	var_35_bool = 1; // 0x130b MovB
	return 4; // 0x130c Return
}


func_3272(var_573_int)
{
	var_573_int = 0; // 0xcc8 MovI
	return 0; // 0xcc9 Return
}


func_2250()
{
	var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_bool = 0; // 0x8ca PushV
	WaitForAnimEnd(); // 0x8cb Func
	var_66_bool = 0; // 0x8cd PushV
	func_3871(var_66_bool); // 0x8ce NEW_2
	var_67_bool = var_66_bool == 0; // 0x8d0 Not
	if(var_67_bool == 0) goto Label_2259; // 0x8d1 JumpB
	return 14; // 0x8d2 Return
	
Label_2259:
	var_68_int = 0; // 0x8d3 PushV
	func_4750(var_68_int); // 0x8d4 NEW_2
	var_59_int = var_68_int; // 0x8d5 Mov
	var_60_int = 0; // 0x8d7 MovI
	
Label_2264:
	var_81_bool = 0; // 0x8d8 PushV
	var_81_bool = 0; // 0x8d9 MovB
	var_82_int = 5; // 0x8da PushI
	var_83_bool = var_60_int < var_82_int; // 0x8db LT
	if(var_83_bool == 0) goto Label_2274; // 0x8dc JumpB
	var_84_bool = 0; // 0x8dd PushV
	func_3871(var_84_bool); // 0x8de NEW_2
	if(var_84_bool == 0) goto Label_2274; // 0x8e0 JumpB
	var_81_bool = 1; // 0x8e1 MovB
	
Label_2274:
	if(var_81_bool == 0) goto Label_2326; // 0x8e2 JumpB
	var_85_int = 3; // 0x8e3 PushI
	irand(var_61_int, var_85_int); // 0x8e4 Func
	var_86_int = 0; // 0x8e6 PushI
	var_87_bool = var_61_int == var_86_int; // 0x8e7 Eq
	if(var_87_bool == 0) goto Label_2298; // 0x8e8 JumpB
	var_88_int = var_59_int; // 0x8e9 Push
	if(var_88_int == 0) goto Label_2297; // 0x8ea JumpB
	irand(var_62_int, var_59_int); // 0x8eb Func
	var_89_string = "all"; // 0x8ed PushS
	var_90_string = ""; var_91_int = 0; // 0x8ee PushV
	var_91_int = var_62_int; // 0x8ef Mov
	func_4743(var_90_string, var_91_int); // 0x8f0 NEW_2
	PlayAnimation(var_89_string, var_90_string); // 0x8f2 Func
	WaitForAnimEnd(var_63_bool); // 0x8f4 Func
	var_92_bool = var_63_bool == 0; // 0x8f6 Not
	if(var_92_bool == 0) goto Label_2297; // 0x8f7 JumpB
	goto Label_2326; // 0x8f8 Jump
	
Label_2326:
	ResetAAS(); // 0x916 Func
	return 14; // 0x918 Return
	
Label_2297:
	goto Label_2315; // 0x8f9 Jump
	
Label_2315:
	var_93_bool = 0; // 0x90b PushV
	func_2329(var_93_bool); // 0x90c NEW_2
	var_94_bool = var_93_bool == 0; // 0x90e Not
	if(var_94_bool == 0) goto Label_2321; // 0x90f JumpB
	goto Label_2326; // 0x910 Jump
	
Label_2321:
	ResetAAS(); // 0x911 Func
	var_95_int = 1; // 0x913 PushI
	var_60_int = var_60_int + var_95_int; // 0x914 Add2
	goto Label_2264; // 0x915 Jump
	
Label_2298:
	var_96_int = 1; // 0x8fa PushI
	var_97_bool = var_61_int == var_96_int; // 0x8fb Eq
	if(var_97_bool == 0) goto Label_2312; // 0x8fc JumpB
	var_98_int = 4; // 0x8fd PushI
	rand(var_64_float, var_98_int); // 0x8fe Func
	var_99_int = 1; // 0x900 PushI
	var_100_int = var_64_float + var_99_int; // 0x901 Add
	Sleep(var_100_int, var_65_bool); // 0x902 Func
	var_101_bool = var_65_bool == 0; // 0x904 Not
	if(var_101_bool == 0) goto Label_2311; // 0x905 JumpB
	goto Label_2326; // 0x906 Jump
	
Label_2311:
	goto Label_2315; // 0x907 Jump
	
Label_2312:
	var_102_int = var_60_int; // 0x908 Push
	if(var_102_int == 0) goto Label_2315; // 0x909 JumpB
	goto Label_2326; // 0x90a Jump
}


func_3274()
{
	var_373_string = ""; // 0xcca PushV
	var_373_string = "attack_stay"; // 0xccb MovS
	func_4069(var_373_string); // 0xccc NEW_2
	return 0; // 0xcce Return
}


func_4299(var_226_int)
{
	var_227_int = 0; var_228_int = 0; // 0x10cb PushV
	var_229_string = "branch"; // 0x10cc PushS
	GetVariable(var_229_string, var_228_int); // 0x10cd Func
	var_226_int = var_228_int; // 0x10cf Mov
	return 2; // 0x10d0 Return
}


func_3279()
{
	return 0; // 0xcd0 Return
}


func_3281(var_598_bool)
{
	var_598_bool = 1; // 0xcd1 MovB
	return 0; // 0xcd2 Return
}


func_4305(var_36_object)
{
	var_37_int = 0; // 0x10d2 PushV
	func_4299(var_37_int); // 0x10d3 NEW_2
	var_41_int = 1; // 0x10d5 PushI
	var_42_bool = var_37_int == var_41_int; // 0x10d6 Eq
	if(var_42_bool == 0) goto Label_4315; // 0x10d7 JumpB
	WorkWithCorpse(var_36_object); // 0x10d8 Func
	goto Label_4317; // 0x10da Jump
	
Label_4317:
	return 0; // 0x10dd Return
	
Label_4315:
	Barter(var_36_object); // 0x10db Func
}


func_3283(var_494_int)
{
	var_494_int = 1; // 0xcd3 MovI
	return 0; // 0xcd4 Return
}


func_3285(var_489_float)
{
	var_489_float = 0.5; // 0xcd5 MovF
	return 0; // 0xcd6 Return
}


func_3294(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0; // 0xcde PushV
	var_274_object = Obj(); // 0xcdf PushV
	var_274_object = var_262_object; // 0xce0 Mov
	func_4204(var_274_object); // 0xce1 NEW_2
	var_275_int = 1; // 0xce3 PushI
	var_276_int = 5; // 0xce4 PushI
	SetTimer(var_275_int, var_276_int); // 0xce5 Func
	CanSee(var_272_bool, var_262_object); // 0xce7 Func
	var_277_bool = var_272_bool; // 0xce9 Push
	if(var_277_bool == 0) goto Label_3313; // 0xcea JumpB
	var_2_object = 1; // 0xceb TMovB
	var_278_object = Obj(); // 0xcec PushV
	var_278_object = var_262_object; // 0xced Mov
	func_4051(var_278_object); // 0xcee NEW_2
	goto Label_3314; // 0xcf0 Jump
	
Label_3314:
	var_279_bool = 0; var_280_object = Obj(); // 0xcf2 PushV
	var_280_object = var_262_object; // 0xcf3 Mov
	func_3579(var_279_bool, var_280_object); // 0xcf4 NEW_2
	if(var_279_bool == 0) goto Label_3324; // 0xcf6 JumpB
	var_283_object = Obj(); // 0xcf7 PushV
	func_4110(var_283_object); // 0xcf8 NEW_2
	SendPlayerEnemy(var_262_object, var_283_object); // 0xcfa Func
	
Label_3324:
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0; // 0xcfc PushV
	var_285_object = var_262_object; // 0xcfd Mov
	var_286_float = var_263_float; // 0xcfe Mov
	var_287_float = var_264_float; // 0xcff Mov
	var_288_bool = var_265_bool; // 0xd00 Mov
	var_289_bool = var_266_bool; // 0xd01 Mov
	func_3399(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool); // 0xd02 NEW_2
	var_273_bool = var_284_bool; // 0xd03 Mov
	var_335_object = var_2_object; // 0xd05 PushT
	if(var_335_object == 0) goto Label_3338; // 0xd06 JumpB
	var_336_string = "head"; // 0xd07 PushS
	UnlookAsync(var_336_string); // 0xd08 Func
	
Label_3338:
	var_337_int = 1; // 0xd0a PushI
	KillTimer(var_337_int); // 0xd0b Func
	var_261_bool = var_273_bool; // 0xd0d Mov
	return 4; // 0xd0e Return
	
Label_3313:
	var_2_object = 0; // 0xcf1 TMovB
}


func_4318(var_118_int, var_119_int)
{
	var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; // 0x10de PushV
	var_133_bool = var_118_int > var_119_int; // 0x10df GT
	if(var_133_bool == 0) goto Label_4325; // 0x10e0 JumpB
	var_134_string = "GenerateMoney: iMin > iMax"; // 0x10e1 PushS
	Trace(var_134_string); // 0x10e2 Func
	return 4; // 0x10e4 Return
	
Label_4325:
	var_131_int = 0; // 0x10e5 MovI
	var_135_bool = var_118_int != var_119_int; // 0x10e6 Neq
	if(var_135_bool == 0) goto Label_4332; // 0x10e7 JumpB
	var_136_int = var_119_int - var_118_int; // 0x10e8 Sub
	irand(var_131_int, var_136_int); // 0x10e9 Func
	goto Label_4336; // 0x10eb Jump
	
Label_4336:
	var_131_int = var_131_int + var_118_int; // 0x10f0 Add2
	var_137_int = 0; // 0x10f1 PushI
	var_138_bool = var_131_int == var_137_int; // 0x10f2 Eq
	if(var_138_bool == 0) goto Label_4341; // 0x10f3 JumpB
	return 4; // 0x10f4 Return
	
Label_4341:
	var_139_int = 0; var_140_string = ""; // 0x10f5 PushV
	var_140_string = "Money"; // 0x10f6 MovS
	func_4565(var_139_int, var_140_string); // 0x10f7 NEW_2
	var_143_int = 0; // 0x10f9 PushI
	AddItem(var_132_bool, var_139_int, var_143_int, var_131_int); // 0x10fa Func
	return 4; // 0x10fc Return
	
Label_4332:
	var_144_int = 0; // 0x10ec PushI
	var_145_bool = var_118_int == var_144_int; // 0x10ed Eq
	if(var_145_bool == 0) goto Label_4336; // 0x10ee JumpB
	return 4; // 0x10ef Return
}


func_4349(var_232_string)
{
	var_233_object = Obj(); var_234_int = 0; var_235_bool = 0; var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; // 0x10fd PushV
	CreateInvItem(var_236_object); // 0x10fe Func
	SetItemName(var_232_string); // 0x1100 ObjFunc
	var_239_string = "Organ"; // 0x1102 PushS
	var_240_int = 1; // 0x1103 PushI
	SetProperty(var_239_string, var_240_int); // 0x1104 ObjFunc
	GetItemID(var_237_int); // 0x1106 ObjFunc
	var_241_int = 0; // 0x1108 PushI
	var_242_int = 1; // 0x1109 PushI
	AddItem(var_238_bool, var_236_object, var_241_int, var_242_int); // 0x110a Func
	return 6; // 0x110c Return
}


func_3846(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0xf06 PushV
	GetScene(var_32_object); // 0xf07 Func
	var_34_string = "scripted"; // 0xf09 PushS
	var_35_string = "blood_dir.xml"; // 0xf0a PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0xf0b Func
	var_36_object = Obj(); // 0xf0d PushV
	var_36_object = var_25_object; // 0xf0e Mov
	func_3734(var_36_object); // 0xf0f NEW_2
	return 4; // 0xf11 Return
}


func_4877(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj(); // 0x130e PushV
	var_90_object = var_87_object; // 0x130f Mov
	func_4784(var_89_int, var_90_object); // 0x1310 NEW_2
	var_86_int = var_89_int; // 0x1311 Mov
	return 0; // 0x1313 Return
}


func_4366()
{
	var_226_int = 0; // 0x110e PushV
	func_4299(var_226_int); // 0x110f NEW_2
	var_230_int = 1; // 0x1111 PushI
	var_231_bool = var_226_int != var_230_int; // 0x1112 Neq
	if(var_231_bool == 0) goto Label_4373; // 0x1113 JumpB
	return 0; // 0x1114 Return
	
Label_4373:
	var_232_string = ""; // 0x1115 PushV
	var_232_string = "liver"; // 0x1116 MovS
	func_4349(var_232_string); // 0x1117 NEW_2
	var_243_string = ""; // 0x1119 PushV
	var_243_string = "kidney"; // 0x111a MovS
	func_4349(var_243_string); // 0x111b NEW_2
	var_244_string = ""; // 0x111d PushV
	var_244_string = "heart"; // 0x111e MovS
	func_4349(var_244_string); // 0x111f NEW_2
	var_245_string = ""; // 0x1121 PushV
	var_245_string = "blood"; // 0x1122 MovS
	func_4349(var_245_string); // 0x1123 NEW_2
	return 0; // 0x1125 Return
}


func_4884(var_125_object)
{
	var_126_object = Obj(); // 0x1315 PushV
	var_126_object = var_125_object; // 0x1316 Mov
	func_4794(var_126_object); // 0x1317 NEW_2
	return 0; // 0x1319 Return
}


func_3860()
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0xf14 PushV
	GetPosition(var_99_cvector); // 0xf15 ObjFunc
	GetPosition(var_100_cvector); // 0xf17 Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0xf19 Sub2
	var_102_float = GetByIndex(var_101_cvector, 0); // 0xf1a PushE
	var_103_float = GetByIndex(var_101_cvector, 2); // 0xf1b PushE
	RotateAsync(var_102_float, var_103_float); // 0xf1c Func
	return 6; // 0xf1e Return
}


func_2329(var_93_bool)
{
	var_93_bool = 1; // 0x919 MovB
	return 0; // 0x91a Return
}


func_4890(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x131a PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; // 0x131b PushV
	var_36_object = var_30_object; // 0x131c Mov
	var_37_bool = !var_32_bool; // 0x131d Not2
	func_4802(var_35_bool, var_36_object, var_37_bool); // 0x131e NEW_2
	var_73_bool = var_35_bool == 0; // 0x1320 Not
	if(var_73_bool == 0) goto Label_4900; // 0x1321 JumpB
	var_28_bool = 0; // 0x1322 MovB
	return 2; // 0x1323 Return
	
Label_4900:
	CanSee(var_34_bool, var_29_object); // 0x1324 Func
	var_74_bool = 0; // 0x1326 PushV
	var_74_bool = 1; // 0x1327 MovB
	var_75_bool = var_34_bool; // 0x1328 Push
	if(var_75_bool == 0) goto Label_4914; // 0x1329 JumpB
	var_76_float = 0; var_77_object = Obj(); // 0x132a PushV
	var_77_object = var_29_object; // 0x132b Mov
	func_3571(var_77_object); // 0x132c NEW_2
	var_84_float = var_31_float * var_31_float; // 0x132e Mult
	var_85_bool = var_76_float <= var_84_float; // 0x132f LE
	if(var_85_bool == 0) goto Label_4914; // 0x1330 JumpB
	var_74_bool = 0; // 0x1331 MovB
	
Label_4914:
	if(var_74_bool == 0) goto Label_4917; // 0x1332 JumpB
	var_28_bool = 1; // 0x1333 MovB
	return 2; // 0x1334 Return
	
Label_4917:
	var_28_bool = 0; // 0x1335 MovB
	return 2; // 0x1336 Return
}


func_2331()
{
	StopAnimation(); // 0x91b Func
	StopGroup0(); // 0x91d Func
	return 0; // 0x91f Return
}


func_3357(var_2_object)
{
	var_20_int = 1; // 0xd1d PushI
	KillTimer(var_20_int); // 0xd1e Func
	var_21_object = var_2_object; // 0xd20 PushT
	if(var_21_object == 0) goto Label_3366; // 0xd21 JumpB
	var_2_object = 0; // 0xd22 TMovB
	var_22_string = "head"; // 0xd23 PushS
	UnlookAsync(var_22_string); // 0xd24 Func
	
Label_3366:
	func_3523(var_19_object); // 0xd27 NEW_2
	return 0; // 0xd29 Return
}


func_3871(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0xf1f PushV
	IsLoaded(var_23_bool); // 0xf20 Func
	var_21_bool = var_23_bool; // 0xf22 Mov
	return 2; // 0xf23 Return
}


func_2336(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0x920 PushV
	var_0_bool = var_62_object; // 0x921 TMov
	func_2387(var_69_bool); // 0x923 NEW_2
	GetDirection(var_67_cvector); // 0x925 Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0x927 PushV
	var_78_object = var_0_bool; // 0x928 MovT
	func_3564(var_78_object); // 0x929 NEW_2
	var_68_cvector = var_77_cvector; // 0x92a Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0x92c PushV
	var_84_cvector = var_67_cvector; // 0x92d Mov
	var_85_cvector = var_68_cvector; // 0x92e Mov
	func_4163(var_83_float, var_84_cvector, var_85_cvector); // 0x92f NEW_2
	var_107_int = 0; // 0x931 PushI
	var_108_bool = var_83_float < var_107_int; // 0x932 LT
	if(var_108_bool == 0) goto Label_2362; // 0x933 JumpB
	var_109_object = Obj(); // 0x934 PushV
	var_109_object = var_0_bool; // 0x935 MovT
	func_3860(); // 0x936 NEW_2
	var_69_bool = 1; // 0x938 MovB
	goto Label_2365; // 0x939 Jump
	
Label_2365:
	var_118_bool = var_69_bool; // 0x93d Push
	if(var_118_bool == 0) goto Label_2381; // 0x93e JumpB
	var_119_object = Obj(); // 0x93f PushV
	var_119_object = var_0_bool; // 0x940 MovT
	func_3860(); // 0x941 NEW_2
	var_120_int = 111; // 0x943 PushI
	var_121_float = 0.5; // 0x944 PushF
	SetTimer(var_120_int, var_121_float); // 0x945 Func
	var_122_float = 5.0; // 0x947 PushF
	Sleep(var_122_float); // 0x948 Func
	var_123_int = 111; // 0x94a PushI
	KillTimer(var_123_int); // 0x94b Func
	
Label_2381:
	StopAsync(); // 0x94d Func
	var_124_string = "head"; // 0x94f PushS
	UnlookAsync(var_124_string); // 0x950 Func
	return 6; // 0x952 Return
	
Label_2362:
	var_125_float = 1.5; // 0x93a PushF
	Sleep(var_125_float, var_69_bool); // 0x93b Func
}


func_3876(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0xf24 PushV
	GetPosition(var_68_cvector); // 0xf25 ObjFunc
	GetEyesHeight(var_67_float); // 0xf27 ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0xf29 PushE
	var_76_float = var_76_float + var_67_float; // 0xf2a Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0xf2b PopE
	GetPosition(var_69_cvector); // 0xf2c Func
	GetEyesHeight(var_67_float); // 0xf2e Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0xf30 PushE
	var_77_float = var_77_float + var_67_float; // 0xf31 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0xf32 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0xf33 Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0xf34 PushE
	var_78_float = 0; // 0xf35 MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0xf36 PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0xf37 Or
	var_80_float = sqrt(var_79_int); // 0xf38 Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0xf39 Div2
	var_71_cvector = -var_70_cvector; // 0xf3a Neg2
	var_81_float = var_70_cvector * var_57_float; // 0xf3b Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0xf3c PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0xf3d PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0xf3e Xor2
	func_4116(var_82_cvector, var_83_cvector); // 0xf3f NEW_2
	var_90_int = 25; // 0xf41 PushI
	var_91_float = var_82_cvector * var_90_int; // 0xf42 Mult
	var_92_int = var_81_float + var_91_float; // 0xf43 Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0xf44 PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0xf45 Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0xf46 Add2
	IsOverrideActive(var_74_bool); // 0xf47 Func
	var_94_bool = var_74_bool; // 0xf49 Push
	if(var_94_bool == 0) goto Label_3917; // 0xf4a JumpB
	var_55_bool = 0; // 0xf4b MovB
	return 18; // 0xf4c Return
	
Label_3917:
	StopWorld(); // 0xf4d Func
	CameraTransit(var_73_cvector, var_71_cvector); // 0xf4f Func
	var_95_float = GetByIndex(var_72_cvector, 0); // 0xf51 PushE
	var_96_float = GetByIndex(var_72_cvector, 2); // 0xf52 PushE
	Rotate(var_95_float, var_96_float); // 0xf53 Func
	var_97_bool = 0; // 0xf55 PushV
	func_5024(var_97_bool); // 0xf56 NEW_2
	if(var_97_bool == 0) goto Label_3930; // 0xf58 JumpB
	goto Label_3938; // 0xf59 Jump
	
Label_3938:
	CameraWaitForPlayFinish(); // 0xf62 Func
	ResumeWorld(); // 0xf64 Func
	var_55_bool = 1; // 0xf66 MovB
	return 18; // 0xf67 Return
	
Label_3930:
	var_98_string = "head"; // 0xf5a PushS
	HasAnimationTrack(var_75_bool, var_98_string); // 0xf5b Func
	var_99_bool = var_75_bool; // 0xf5d Push
	if(var_99_bool == 0) goto Label_3938; // 0xf5e JumpB
	var_100_string = "head"; // 0xf5f PushS
	LookAsyncCamera(var_100_string); // 0xf60 Func
}


func_293(var_2_object, var_142_string)
{
	var_143_bool = 0; // 0x126 PushV
	func_5024(var_143_bool); // 0x127 NEW_2
	var_144_bool = var_143_bool == 0; // 0x129 Not
	if(var_144_bool == 0) goto Label_300; // 0x12a JumpB
	return 0; // 0x12b Return
	
Label_300:
	var_145_bool = var_142_string == var_2_object; // 0x12c Eq
	if(var_145_bool == 0) goto Label_303; // 0x12d JumpB
	return 0; // 0x12e Return
	
Label_303:
	var_146_string = ""; var_147_bool = 0; // 0x12f PushV
	var_146_string = var_142_string; // 0x130 Mov
	var_148_string = ""; // 0x131 PushS
	var_149_bool = var_142_string == var_148_string; // 0x132 Eq
	if(var_149_bool == 0) goto Label_310; // 0x133 JumpB
	var_147_bool = 0; // 0x134 MovB
	goto Label_311; // 0x135 Jump
	
Label_311:
	func_4036(var_146_string, var_147_bool); // 0x137 NEW_2
	var_2_object = var_142_string; // 0x139 TMov
	return 0; // 0x13a Return
	
Label_310:
	var_147_bool = 1; // 0x136 MovB
}


func_2854(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0); // 0xb26 PushV
	var_1_object = 0; // 0xb27 TMovI
	
Label_2856:
	var_221_string = "all"; // 0xb28 PushS
	var_222_string = "attack_begin"; // 0xb29 PushS
	var_223_int = 1; // 0xb2a PushI
	var_224_int = var_1_object + var_223_int; // 0xb2b Add
	var_225_int = var_222_string + var_224_int; // 0xb2c Add
	HasAnimation(var_218_bool, var_221_string, var_225_int); // 0xb2d Func
	var_226_bool = var_218_bool == 0; // 0xb2f Not
	if(var_226_bool == 0) goto Label_2866; // 0xb30 JumpB
	goto Label_2869; // 0xb31 Jump
	
Label_2869:
	var_2_object = 0; // 0xb35 TMovI
	
Label_2870:
	var_227_string = "attack"; // 0xb36 PushS
	var_228_int = 1; // 0xb37 PushI
	var_229_int = var_2_object + var_228_int; // 0xb38 Add
	var_230_int = var_227_string + var_229_int; // 0xb39 Add
	IsExisting3DSound(var_219_bool, var_230_int); // 0xb3a Func
	var_231_bool = var_219_bool == 0; // 0xb3c Not
	if(var_231_bool == 0) goto Label_2879; // 0xb3d JumpB
	goto Label_2882; // 0xb3e Jump
	
Label_2882:
	var_232_string = "all"; // 0xb42 PushS
	var_233_string = "bjump"; // 0xb43 PushS
	GetAnimationOffset(var_220_cvector, var_232_string, var_233_string); // 0xb44 Func
	var_234_float = GetByIndex(var_220_cvector, 2); // 0xb46 PushE
	var_4_string = -var_234_float; // 0xb47 Neg2
	return 6; // 0xb48 Return
	
Label_2879:
	var_235_int = 1; // 0xb3f PushI
	var_2_object = var_2_object + var_235_int; // 0xb40 Add2
	goto Label_2870; // 0xb41 Jump
	
Label_2866:
	var_236_int = 1; // 0xb32 PushI
	var_1_object = var_1_object + var_236_int; // 0xb33 Add2
	goto Label_2856; // 0xb34 Jump
}


func_4390(var_112_bool)
{
	var_113_int = 0; var_114_bool = 0; var_115_int = 0; var_116_bool = 0; // 0x1126 PushV
	var_117_bool = var_112_bool; // 0x1127 Push
	if(var_117_bool == 0) goto Label_4479; // 0x1128 JumpB
	var_118_int = 0; var_119_int = 0; // 0x1129 PushV
	var_118_int = 0; // 0x112a MovI
	var_120_int = 100; // 0x112b PushI
	var_121_int = 0; // 0x112c PushV
	func_4195(var_121_int); // 0x112d NEW_2
	var_127_int = 100; // 0x112f PushI
	var_128_float = var_121_int * var_127_int; // 0x1130 Mult
	var_119_int = var_120_int + var_128_float; // 0x1131 Add2
	func_4318(var_118_int, var_119_int); // 0x1132 NEW_2
	var_146_int = 8; // 0x1134 PushI
	irand(var_115_int, var_146_int); // 0x1135 Func
	var_147_int = 0; // 0x1137 PushI
	var_148_bool = var_115_int == var_147_int; // 0x1138 Eq
	if(var_148_bool == 0) goto Label_4419; // 0x1139 JumpB
	var_149_int = 0; var_150_string = ""; // 0x113a PushV
	var_150_string = "lemon"; // 0x113b MovS
	func_4565(var_149_int, var_150_string); // 0x113c NEW_2
	var_151_int = 0; // 0x113e PushI
	var_152_int = 1; // 0x113f PushI
	AddItem(var_116_bool, var_149_int, var_151_int, var_152_int); // 0x1140 Func
	goto Label_4478; // 0x1142 Jump
	
Label_4478:
	goto Label_4564; // 0x117e Jump
	
Label_4564:
	return 4; // 0x11d4 Return
	
Label_4419:
	var_153_int = 1; // 0x1143 PushI
	var_154_bool = var_115_int == var_153_int; // 0x1144 Eq
	if(var_154_bool == 0) goto Label_4431; // 0x1145 JumpB
	var_155_int = 0; var_156_string = ""; // 0x1146 PushV
	var_156_string = "rusk"; // 0x1147 MovS
	func_4565(var_155_int, var_156_string); // 0x1148 NEW_2
	var_157_int = 0; // 0x114a PushI
	var_158_int = 1; // 0x114b PushI
	AddItem(var_116_bool, var_155_int, var_157_int, var_158_int); // 0x114c Func
	goto Label_4478; // 0x114e Jump
	
Label_4431:
	var_159_int = 2; // 0x114f PushI
	var_160_bool = var_115_int == var_159_int; // 0x1150 Eq
	if(var_160_bool == 0) goto Label_4443; // 0x1151 JumpB
	var_161_int = 0; var_162_string = ""; // 0x1152 PushV
	var_162_string = "hook"; // 0x1153 MovS
	func_4565(var_161_int, var_162_string); // 0x1154 NEW_2
	var_163_int = 0; // 0x1156 PushI
	var_164_int = 1; // 0x1157 PushI
	AddItem(var_116_bool, var_161_int, var_163_int, var_164_int); // 0x1158 Func
	goto Label_4478; // 0x115a Jump
	
Label_4443:
	var_165_int = 4; // 0x115b PushI
	var_166_bool = var_115_int == var_165_int; // 0x115c Eq
	if(var_166_bool == 0) goto Label_4455; // 0x115d JumpB
	var_167_int = 0; var_168_string = ""; // 0x115e PushV
	var_168_string = "syringe"; // 0x115f MovS
	func_4565(var_167_int, var_168_string); // 0x1160 NEW_2
	var_169_int = 0; // 0x1162 PushI
	var_170_int = 1; // 0x1163 PushI
	AddItem(var_116_bool, var_167_int, var_169_int, var_170_int); // 0x1164 Func
	goto Label_4478; // 0x1166 Jump
	
Label_4455:
	var_171_int = 5; // 0x1167 PushI
	var_172_bool = var_115_int == var_171_int; // 0x1168 Eq
	if(var_172_bool == 0) goto Label_4467; // 0x1169 JumpB
	var_173_int = 0; var_174_string = ""; // 0x116a PushV
	var_174_string = "watch"; // 0x116b MovS
	func_4565(var_173_int, var_174_string); // 0x116c NEW_2
	var_175_int = 0; // 0x116e PushI
	var_176_int = 1; // 0x116f PushI
	AddItem(var_116_bool, var_173_int, var_175_int, var_176_int); // 0x1170 Func
	goto Label_4478; // 0x1172 Jump
	
Label_4467:
	var_177_int = 6; // 0x1173 PushI
	var_178_bool = var_115_int == var_177_int; // 0x1174 Eq
	if(var_178_bool == 0) goto Label_4478; // 0x1175 JumpB
	var_179_int = 0; var_180_string = ""; // 0x1176 PushV
	var_180_string = "razor"; // 0x1177 MovS
	func_4565(var_179_int, var_180_string); // 0x1178 NEW_2
	var_181_int = 0; // 0x117a PushI
	var_182_int = 1; // 0x117b PushI
	AddItem(var_116_bool, var_179_int, var_181_int, var_182_int); // 0x117c Func
	
Label_4479:
	var_183_int = 0; var_184_int = 0; // 0x117f PushV
	var_183_int = 0; // 0x1180 MovI
	var_185_int = 50; // 0x1181 PushI
	var_186_int = 0; // 0x1182 PushV
	func_4195(var_186_int); // 0x1183 NEW_2
	var_187_int = 50; // 0x1185 PushI
	var_188_float = var_186_int * var_187_int; // 0x1186 Mult
	var_184_int = var_185_int + var_188_float; // 0x1187 Add2
	func_4318(var_183_int, var_184_int); // 0x1188 NEW_2
	var_189_int = 7; // 0x118a PushI
	irand(var_115_int, var_189_int); // 0x118b Func
	var_190_int = 0; // 0x118d PushI
	var_191_bool = var_115_int == var_190_int; // 0x118e Eq
	if(var_191_bool == 0) goto Label_4505; // 0x118f JumpB
	var_192_int = 0; var_193_string = ""; // 0x1190 PushV
	var_193_string = "beads"; // 0x1191 MovS
	func_4565(var_192_int, var_193_string); // 0x1192 NEW_2
	var_194_int = 0; // 0x1194 PushI
	var_195_int = 1; // 0x1195 PushI
	AddItem(var_116_bool, var_192_int, var_194_int, var_195_int); // 0x1196 Func
	goto Label_4564; // 0x1198 Jump
	
Label_4505:
	var_196_int = 1; // 0x1199 PushI
	var_197_bool = var_115_int == var_196_int; // 0x119a Eq
	if(var_197_bool == 0) goto Label_4517; // 0x119b JumpB
	var_198_int = 0; var_199_string = ""; // 0x119c PushV
	var_199_string = "bracelet"; // 0x119d MovS
	func_4565(var_198_int, var_199_string); // 0x119e NEW_2
	var_200_int = 0; // 0x11a0 PushI
	var_201_int = 1; // 0x11a1 PushI
	AddItem(var_116_bool, var_198_int, var_200_int, var_201_int); // 0x11a2 Func
	goto Label_4564; // 0x11a4 Jump
	
Label_4517:
	var_202_int = 2; // 0x11a5 PushI
	var_203_bool = var_115_int == var_202_int; // 0x11a6 Eq
	if(var_203_bool == 0) goto Label_4529; // 0x11a7 JumpB
	var_204_int = 0; var_205_string = ""; // 0x11a8 PushV
	var_205_string = "ear_ring"; // 0x11a9 MovS
	func_4565(var_204_int, var_205_string); // 0x11aa NEW_2
	var_206_int = 0; // 0x11ac PushI
	var_207_int = 1; // 0x11ad PushI
	AddItem(var_116_bool, var_204_int, var_206_int, var_207_int); // 0x11ae Func
	goto Label_4564; // 0x11b0 Jump
	
Label_4529:
	var_208_int = 3; // 0x11b1 PushI
	var_209_bool = var_115_int == var_208_int; // 0x11b2 Eq
	if(var_209_bool == 0) goto Label_4541; // 0x11b3 JumpB
	var_210_int = 0; var_211_string = ""; // 0x11b4 PushV
	var_211_string = "gold_ring"; // 0x11b5 MovS
	func_4565(var_210_int, var_211_string); // 0x11b6 NEW_2
	var_212_int = 0; // 0x11b8 PushI
	var_213_int = 1; // 0x11b9 PushI
	AddItem(var_116_bool, var_210_int, var_212_int, var_213_int); // 0x11ba Func
	goto Label_4564; // 0x11bc Jump
	
Label_4541:
	var_214_int = 4; // 0x11bd PushI
	var_215_bool = var_115_int == var_214_int; // 0x11be Eq
	if(var_215_bool == 0) goto Label_4553; // 0x11bf JumpB
	var_216_int = 0; var_217_string = ""; // 0x11c0 PushV
	var_217_string = "silver_ring"; // 0x11c1 MovS
	func_4565(var_216_int, var_217_string); // 0x11c2 NEW_2
	var_218_int = 0; // 0x11c4 PushI
	var_219_int = 1; // 0x11c5 PushI
	AddItem(var_116_bool, var_216_int, var_218_int, var_219_int); // 0x11c6 Func
	goto Label_4564; // 0x11c8 Jump
	
Label_4553:
	var_220_int = 5; // 0x11c9 PushI
	var_221_bool = var_115_int == var_220_int; // 0x11ca Eq
	if(var_221_bool == 0) goto Label_4564; // 0x11cb JumpB
	var_222_int = 0; var_223_string = ""; // 0x11cc PushV
	var_223_string = "flower"; // 0x11cd MovS
	func_4565(var_222_int, var_223_string); // 0x11ce NEW_2
	var_224_int = 0; // 0x11d0 PushI
	var_225_int = 1; // 0x11d1 PushI
	AddItem(var_116_bool, var_222_int, var_224_int, var_225_int); // 0x11d2 Func
}


func_4919(var_22_int)
{
	var_22_int = 0; // 0x1338 MovI
	return 0; // 0x1339 Return
}


func_4922()
{
	return 0; // 0x133b Return
}


func_4924(var_129_int, var_130_string, var_131_object)
{
	var_132_string = "killme"; // 0x133d PushS
	var_133_bool = var_130_string == var_132_string; // 0x133e Eq
	if(var_133_bool == 0) goto Label_4934; // 0x133f JumpB
	var_134_int = 0; var_135_object = Obj(); // 0x1340 PushV
	var_135_object = var_131_object; // 0x1341 Mov
	func_4946(var_134_int, var_135_object); // 0x1342 NEW_2
	var_129_int = var_134_int; // 0x1343 Mov
	return 0; // 0x1345 Return
	
Label_4934:
	var_129_int = 0; // 0x1346 MovI
	return 0; // 0x1347 Return
}


func_3399(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj(); // 0xd47 PushV
	var_0_bool = 0; // 0xd48 TMovB
	var_1_object = var_285_object; // 0xd49 TMov
	var_299_bool = var_289_bool; // 0xd4a Mov
	
Label_3403:
	var_306_bool = 0; var_307_object = Obj(); // 0xd4b PushV
	var_307_object = var_285_object; // 0xd4c Mov
	func_3539(var_306_bool, var_307_object); // 0xd4d NEW_2
	var_310_bool = var_306_bool == 0; // 0xd4f Not
	if(var_310_bool == 0) goto Label_3411; // 0xd50 JumpB
	var_284_bool = 0; // 0xd51 MovB
	return 16; // 0xd52 Return
	
Label_3411:
	GetPosition(var_301_cvector); // 0xd53 ObjFunc
	GetPosition(var_302_cvector); // 0xd55 Func
	var_303_cvector = var_301_cvector - var_302_cvector; // 0xd57 Sub2
	var_304_float = var_303_cvector | var_303_cvector; // 0xd58 Or2
	var_311_bool = 0; // 0xd59 PushV
	var_311_bool = 0; // 0xd5a MovB
	var_312_int = 0; // 0xd5b PushI
	var_313_bool = var_287_float > var_312_int; // 0xd5c GT
	if(var_313_bool == 0) goto Label_3426; // 0xd5d JumpB
	var_314_float = var_287_float * var_287_float; // 0xd5e Mult
	var_315_bool = var_304_float > var_314_float; // 0xd5f GT
	if(var_315_bool == 0) goto Label_3426; // 0xd60 JumpB
	var_311_bool = 1; // 0xd61 MovB
	
Label_3426:
	if(var_311_bool == 0) goto Label_3431; // 0xd62 JumpB
	Stop(); // 0xd63 Func
	var_284_bool = 0; // 0xd65 MovB
	return 16; // 0xd66 Return
	
Label_3431:
	var_316_float = var_286_float * var_286_float; // 0xd67 Mult
	var_317_bool = var_304_float > var_316_float; // 0xd68 GT
	if(var_317_bool == 0) goto Label_3493; // 0xd69 JumpB
	GetPFPosition(var_301_cvector); // 0xd6a ObjFunc
	FindPathTo(var_305_object, var_301_cvector); // 0xd6c Func
	var_318_bool = var_305_object != 0; // 0xd6e NullNeq
	if(var_318_bool == 0) goto Label_3442; // 0xd6f JumpB
	var_300_object = var_305_object; // 0xd70 Mov
	var_305_object = 0; // 0xd71 SetNull
	
Label_3442:
	var_319_bool = var_300_object != 0; // 0xd72 NullNeq
	if(var_319_bool == 0) goto Label_3475; // 0xd73 JumpB
	var_320_bool = var_299_bool; // 0xd74 Push
	if(var_320_bool == 0) goto Label_3452; // 0xd75 JumpB
	var_299_bool = 0; // 0xd76 MovB
	RotatePath(var_300_object, var_298_bool); // 0xd77 Func
	var_321_bool = var_298_bool == 0; // 0xd79 Not
	if(var_321_bool == 0) goto Label_3452; // 0xd7a JumpB
	goto Label_3499; // 0xd7b Jump
	
Label_3499:
	var_284_bool = !var_0_bool; // 0xdab Not2
	return 16; // 0xdac Return
	
Label_3452:
	var_322_int = 0; // 0xd7c PushI
	var_323_float = 0.3; // 0xd7d PushF
	SetTimer(var_322_int, var_323_float); // 0xd7e Func
	var_324_string = ""; // 0xd80 PushV
	func_3546(var_324_string); // 0xd81 NEW_2
	var_325_string = ""; // 0xd83 PushV
	func_3548(var_325_string); // 0xd84 NEW_2
	FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string); // 0xd86 Func
	var_326_bool = var_298_bool == 0; // 0xd88 Not
	if(var_326_bool == 0) goto Label_3473; // 0xd89 JumpB
	var_327_bool = var_0_bool; // 0xd8a PushT
	if(var_327_bool == 0) goto Label_3471; // 0xd8b JumpB
	var_300_object = 0; // 0xd8c SetNull
	goto Label_3499; // 0xd8d Jump
	
Label_3471:
	goto Label_3498; // 0xd8f Jump
	
Label_3498:
	goto Label_3403; // 0xdaa Jump
	
Label_3473:
	var_300_object = 0; // 0xd91 SetNull
	goto Label_3491; // 0xd92 Jump
	
Label_3491:
	var_305_object = 0; // 0xda3 SetNull
	goto Label_3497; // 0xda4 Jump
	
Label_3497:
	var_300_object = 0; // 0xda9 SetNull
	
Label_3475:
	var_328_int = 0; // 0xd93 PushI
	KillTimer(var_328_int); // 0xd94 Func
	var_329_float = 0.5; // 0xd96 PushF
	Sleep(var_329_float, var_298_bool); // 0xd97 Func
	var_330_bool = var_298_bool == 0; // 0xd99 Not
	if(var_330_bool == 0) goto Label_3487; // 0xd9a JumpB
	var_331_bool = var_0_bool; // 0xd9b PushT
	if(var_331_bool == 0) goto Label_3487; // 0xd9c JumpB
	var_300_object = 0; // 0xd9d SetNull
	goto Label_3499; // 0xd9e Jump
	
Label_3487:
	var_332_int = 0; // 0xd9f PushI
	var_333_float = 0.3; // 0xda0 PushF
	SetTimer(var_332_int, var_333_float); // 0xda1 Func
	
Label_3493:
	var_334_int = 0; // 0xda5 PushI
	KillTimer(var_334_int); // 0xda6 Func
	goto Label_3499; // 0xda8 Jump
}


func_4936(var_177_string, var_178_object)
{
	var_179_string = "killme"; // 0x1349 PushS
	var_180_bool = var_177_string == var_179_string; // 0x134a Eq
	if(var_180_bool == 0) goto Label_4945; // 0x134b JumpB
	var_181_object = Obj(); // 0x134c PushV
	var_181_object = var_178_object; // 0x134d Mov
	func_4964(var_181_object); // 0x134e NEW_2
	return 0; // 0x1350 Return
	
Label_4945:
	return 0; // 0x1351 Return
}


func_2889(var_0_bool, var_498_float, var_499_int)
{
	var_500_object = Obj(); var_501_float = 0; var_502_float = 0; var_503_object = Obj(); var_504_float = 0; var_505_float = 0; // 0xb49 PushV
	var_506_float = 0.9; // 0xb4a PushF
	var_507_float = var_498_float * var_506_float; // 0xb4b Mult
	GetVictim(var_507_float, var_503_object); // 0xb4c Func
	ReportAttack(var_0_bool); // 0xb4e Func
	var_508_bool = var_503_object == var_0_bool; // 0xb50 Eq
	if(var_508_bool == 0) goto Label_2926; // 0xb51 JumpB
	var_509_float = 0; var_510_object = Obj(); var_511_int = 0; // 0xb52 PushV
	var_510_object = var_503_object; // 0xb53 Mov
	var_511_int = var_499_int; // 0xb54 Mov
	func_2619(var_511_int); // 0xb55 NEW_2
	var_504_float = var_509_float; // 0xb56 Mov
	var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0; // 0xb58 PushV
	var_513_object = var_503_object; // 0xb59 Mov
	var_514_float = var_504_float; // 0xb5a Mov
	var_516_int = 0; var_517_object = Obj(); var_518_int = 0; // 0xb5b PushV
	var_517_object = var_503_object; // 0xb5c Mov
	var_518_int = var_499_int; // 0xb5d Mov
	func_2622(var_518_int); // 0xb5e NEW_2
	var_515_int = var_516_int; // 0xb5f Mov
	func_3596(var_512_float, var_513_object, var_514_float, var_515_int); // 0xb61 NEW_2
	var_505_float = var_512_float; // 0xb62 Mov
	var_573_int = 0; // 0xb64 PushV
	func_3272(var_573_int); // 0xb65 NEW_2
	ReportHit(var_0_bool, var_573_int, var_505_float, var_504_float); // 0xb67 Func
	var_574_object = Obj(); var_575_float = 0; // 0xb69 PushV
	var_574_object = var_503_object; // 0xb6a Mov
	var_575_float = var_505_float; // 0xb6b Mov
	func_3279(); // 0xb6c NEW_2
	
Label_2926:
	return 6; // 0xb6e Return
}


func_4946(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj(); // 0x1353 PushV
	var_137_object = var_135_object; // 0x1354 Mov
	func_3710(var_136_bool, var_137_object); // 0x1355 NEW_2
	var_170_bool = var_136_bool == 0; // 0x1357 Not
	if(var_170_bool == 0) goto Label_4955; // 0x1358 JumpB
	var_134_int = 0; // 0x1359 MovI
	return 0; // 0x135a Return
	
Label_4955:
	var_171_bool = 0; var_172_object = Obj(); // 0x135b PushV
	var_172_object = var_135_object; // 0x135c Mov
	func_5072(var_172_object); // 0x135d NEW_2
	if(var_171_bool == 0) goto Label_4962; // 0x135f JumpB
	var_134_int = 2; // 0x1360 MovI
	goto Label_4963; // 0x1361 Jump
	
Label_4963:
	return 0; // 0x1363 Return
	
Label_4962:
	var_134_int = 0; // 0x1362 MovI
}


func_2387(var_0_bool)
{
	var_70_object = Obj(); // 0x953 PushV
	var_70_object = var_0_bool; // 0x954 MovT
	func_4051(var_70_object); // 0x955 NEW_2
	return 0; // 0x957 Return
}


func_4964(var_181_object)
{
	var_182_object = Obj(); // 0x1365 PushV
	var_182_object = var_181_object; // 0x1366 Mov
	func_4794(var_182_object); // 0x1367 NEW_2
	return 0; // 0x1369 Return
}


func_3944()
{
	var_237_bool = 0; var_238_bool = 0; // 0xf68 PushV
	CameraSwitchToNormal(); // 0xf69 Func
	var_239_bool = 0; // 0xf6b PushV
	func_5024(var_239_bool); // 0xf6c NEW_2
	if(var_239_bool == 0) goto Label_3952; // 0xf6e JumpB
	goto Label_3960; // 0xf6f Jump
	
Label_3960:
	return 2; // 0xf78 Return
	
Label_3952:
	var_240_string = "head"; // 0xf70 PushS
	HasAnimationTrack(var_238_bool, var_240_string); // 0xf71 Func
	var_241_bool = var_238_bool; // 0xf73 Push
	if(var_241_bool == 0) goto Label_3960; // 0xf74 JumpB
	var_242_string = "head"; // 0xf75 PushS
	UnlookAsync(var_242_string); // 0xf76 Func
}


func_4970(var_22_int)
{
	var_22_int = 2; // 0x136b MovI
	return 0; // 0x136c Return
}


func_4973(var_30_object)
{
	var_31_object = Obj(); // 0x136e PushV
	var_31_object = var_30_object; // 0x136f Mov
	func_5030(var_30_object, var_31_object); // 0x1370 NEW_2
	return 0; // 0x1372 Return
}


func_2928(var_0_bool, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = ""; // 0xb70 PushV
	func_3267(var_470_string); // 0xb72 NEW_2
	irand(var_467_int, var_470_string); // 0xb74 Func
	var_471_int = 1; // 0xb76 PushI
	var_467_int = var_467_int + var_471_int; // 0xb77 Add2
	Face(var_0_bool); // 0xb78 Func
	var_472_bool = 1; // 0xb7a PushB
	SetAttackState(var_472_bool); // 0xb7b Func
	func_4213(); // 0xb7e NEW_2
	var_477_string = "all"; // 0xb80 PushS
	var_478_string = "attack_begin"; // 0xb81 PushS
	var_479_int = var_478_string + var_467_int; // 0xb82 Add
	PlayAnimation(var_477_string, var_479_int); // 0xb83 Func
	WaitForAnimEnd(); // 0xb85 Func
	func_3235(var_469_int, var_470_string); // 0xb88 NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0xb8a PushV
	var_496_object = var_0_bool; // 0xb8b MovT
	func_3710(var_495_bool, var_496_object); // 0xb8c NEW_2
	var_497_bool = var_495_bool == 0; // 0xb8e Not
	if(var_497_bool == 0) goto Label_2964; // 0xb8f JumpB
	StopAsync(); // 0xb90 Func
	var_461_bool = 0; // 0xb92 MovB
	return 8; // 0xb93 Return
	
Label_2964:
	var_498_float = 0; var_499_int = 0; // 0xb94 PushV
	var_498_float = var_462_float; // 0xb95 Mov
	var_499_int = var_467_int; // 0xb96 Mov
	func_2889(var_470_string, var_498_float, var_499_int); // 0xb97 NEW_2
	var_576_string = "all"; // 0xb99 PushS
	var_577_string = "attack_middle"; // 0xb9a PushS
	var_578_int = var_577_string + var_467_int; // 0xb9b Add
	HasAnimation(var_468_bool, var_576_string, var_578_int); // 0xb9c Func
	var_579_bool = var_468_bool; // 0xb9e Push
	if(var_579_bool == 0) goto Label_3045; // 0xb9f JumpB
	func_4213(); // 0xba1 NEW_2
	var_580_string = "all"; // 0xba3 PushS
	var_581_string = "attack_middle"; // 0xba4 PushS
	var_582_int = var_581_string + var_467_int; // 0xba5 Add
	PlayAnimation(var_580_string, var_582_int); // 0xba6 Func
	WaitForAnimEnd(); // 0xba8 Func
	func_3267(var_470_string); // 0xbab NEW_2
	var_583_bool = 0; var_584_object = Obj(); // 0xbad PushV
	var_584_object = var_0_bool; // 0xbae MovT
	func_3710(var_583_bool, var_584_object); // 0xbaf NEW_2
	var_585_bool = var_583_bool == 0; // 0xbb1 Not
	if(var_585_bool == 0) goto Label_2999; // 0xbb2 JumpB
	StopAsync(); // 0xbb3 Func
	var_461_bool = 0; // 0xbb5 MovB
	return 8; // 0xbb6 Return
	
Label_2999:
	var_586_float = 0; var_587_int = 0; // 0xbb7 PushV
	var_586_float = var_462_float; // 0xbb8 Mov
	var_587_int = var_467_int; // 0xbb9 Mov
	func_2889(var_470_string, var_586_float, var_587_int); // 0xbba NEW_2
	var_469_int = 1; // 0xbbc MovI
	
Label_3005:
	var_588_string = "attack_middle"; // 0xbbd PushS
	var_589_int = var_588_string + var_467_int; // 0xbbe Add
	var_590_string = "_"; // 0xbbf PushS
	var_591_int = var_589_int + var_590_string; // 0xbc0 Add
	var_470_string = var_591_int + var_469_int; // 0xbc1 Add2
	var_592_string = "all"; // 0xbc2 PushS
	HasAnimation(var_468_bool, var_592_string, var_470_string); // 0xbc3 Func
	var_593_bool = var_468_bool == 0; // 0xbc5 Not
	if(var_593_bool == 0) goto Label_3016; // 0xbc6 JumpB
	goto Label_3045; // 0xbc7 Jump
	
Label_3045:
	var_594_bool = 0; // 0xbe5 PushB
	SetAttackState(var_594_bool); // 0xbe6 Func
	var_595_string = "all"; // 0xbe8 PushS
	var_596_string = "attack_end"; // 0xbe9 PushS
	var_597_int = var_596_string + var_467_int; // 0xbea Add
	PlayAnimation(var_595_string, var_597_int); // 0xbeb Func
	var_598_bool = 0; // 0xbed PushV
	func_3281(var_598_bool); // 0xbee NEW_2
	if(var_598_bool == 0) goto Label_3063; // 0xbf0 JumpB
	var_599_bool = 0; var_600_float = 0; // 0xbf1 PushV
	var_600_float = 0.75; // 0xbf2 MovF
	func_3065(var_599_bool, var_600_float); // 0xbf3 NEW_2
	StopAsync(); // 0xbf5 Func
	
Label_3063:
	var_461_bool = 1; // 0xbf7 MovB
	return 8; // 0xbf8 Return
	
Label_3016:
	func_4213(); // 0xbc9 NEW_2
	var_608_string = "all"; // 0xbcb PushS
	PlayAnimation(var_608_string, var_470_string); // 0xbcc Func
	WaitForAnimEnd(); // 0xbce Func
	func_3267(var_470_string); // 0xbd1 NEW_2
	var_609_bool = 0; var_610_object = Obj(); // 0xbd3 PushV
	var_610_object = var_0_bool; // 0xbd4 MovT
	func_3710(var_609_bool, var_610_object); // 0xbd5 NEW_2
	var_611_bool = var_609_bool == 0; // 0xbd7 Not
	if(var_611_bool == 0) goto Label_3037; // 0xbd8 JumpB
	StopAsync(); // 0xbd9 Func
	var_461_bool = 0; // 0xbdb MovB
	return 8; // 0xbdc Return
	
Label_3037:
	var_612_float = 0; var_613_int = 0; // 0xbdd PushV
	var_612_float = var_462_float; // 0xbde Mov
	var_613_int = var_467_int; // 0xbdf Mov
	func_2889(var_470_string, var_612_float, var_613_int); // 0xbe0 NEW_2
	var_614_int = 1; // 0xbe2 PushI
	var_469_int = var_469_int + var_614_int; // 0xbe3 Add2
	goto Label_3005; // 0xbe4 Jump
}


func_4979()
{
	return 0; // 0x1373 Return
}


func_4980(var_25_bool)
{
	var_25_bool = 0; // 0x1375 MovB
	return 0; // 0x1376 Return
}


func_4983()
{
	return 0; // 0x1378 Return
}


func_4985(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1379 PushV
	CanSee(var_35_bool, var_33_object); // 0x137a Func
	var_32_bool = 1; // 0x137c MovB
	var_36_bool = var_35_bool; // 0x137d Push
	if(var_36_bool == 0) goto Label_4999; // 0x137e JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x137f PushV
	var_38_object = var_33_object; // 0x1380 Mov
	func_3571(var_38_object); // 0x1381 NEW_2
	var_45_int = 2250000; // 0x1383 PushI
	var_46_bool = var_37_float <= var_45_int; // 0x1384 LE
	if(var_46_bool == 0) goto Label_4999; // 0x1385 JumpB
	var_32_bool = 0; // 0x1386 MovB
	
Label_4999:
	return 2; // 0x1387 Return
}


func_3961(var_244_bool, var_245_object)
{
	var_246_bool = 0; var_247_object = Obj(); var_248_float = 0; // 0xf7a PushV
	var_247_object = var_245_object; // 0xf7b Mov
	var_248_float = 70; // 0xf7c MovI
	func_3969(var_247_object, var_248_float); // 0xf7d NEW_2
	var_244_bool = var_246_bool; // 0xf7e Mov
	return 0; // 0xf80 Return
}


func_3969(var_246_bool, var_248_float)
{
	var_249_float = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_bool = 0; var_257_float = 0; var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_bool = 0; // 0xf81 PushV
	GetPosition(var_258_cvector); // 0xf82 ObjFunc
	GetEyesHeight(var_257_float); // 0xf84 ObjFunc
	var_265_float = GetByIndex(var_258_cvector, 1); // 0xf86 PushE
	var_265_float = var_265_float + var_257_float; // 0xf87 Add2
	SetByIndex(var_258_cvector, 1) = var_265_float; // 0xf88 PopE
	GetPosition(var_259_cvector); // 0xf89 Func
	GetEyesHeight(var_257_float); // 0xf8b Func
	var_266_float = GetByIndex(var_259_cvector, 1); // 0xf8d PushE
	var_266_float = var_266_float + var_257_float; // 0xf8e Add2
	SetByIndex(var_259_cvector, 1) = var_266_float; // 0xf8f PopE
	var_260_cvector = var_258_cvector - var_259_cvector; // 0xf90 Sub2
	var_267_float = GetByIndex(var_260_cvector, 1); // 0xf91 PushE
	var_267_float = 0; // 0xf92 MovI
	SetByIndex(var_260_cvector, 1) = var_267_float; // 0xf93 PopE
	var_268_int = var_260_cvector | var_260_cvector; // 0xf94 Or
	var_269_float = sqrt(var_268_int); // 0xf95 Sqrt
	var_260_cvector = var_260_cvector / var_260_cvector; // 0xf96 Div2
	var_261_cvector = -var_260_cvector; // 0xf97 Neg2
	var_270_float = var_260_cvector * var_248_float; // 0xf98 Mult
	var_271_cvector = CVector(0.0, 10.0, 0.0); // 0xf99 PushVec
	var_262_cvector = var_270_float - var_271_cvector; // 0xf9a Sub2
	var_263_cvector = var_259_cvector + var_262_cvector; // 0xf9b Add2
	IsOverrideActive(var_264_bool); // 0xf9c Func
	var_272_bool = var_264_bool; // 0xf9e Push
	if(var_272_bool == 0) goto Label_4002; // 0xf9f JumpB
	var_246_bool = 0; // 0xfa0 MovB
	return 16; // 0xfa1 Return
	
Label_4002:
	StopWorld(); // 0xfa2 Func
	CameraTransit(var_263_cvector, var_261_cvector); // 0xfa4 Func
	var_273_float = GetByIndex(var_262_cvector, 0); // 0xfa6 PushE
	var_274_float = GetByIndex(var_262_cvector, 2); // 0xfa7 PushE
	Rotate(var_273_float, var_274_float); // 0xfa8 Func
	CameraWaitForPlayFinish(); // 0xfaa Func
	ResumeWorld(); // 0xfac Func
	var_246_bool = 1; // 0xfae MovB
	return 16; // 0xfaf Return
}


func_1928(var_2_object)
{
	var_20_int = 110; // 0x788 PushI
	KillTimer(var_20_int); // 0x789 Func
	var_2_object = 0; // 0x78b TMovB
	func_2064(var_18_object, var_19_bool); // 0x78d NEW_2
	return 0; // 0x78f Return
}


func_5000(var_60_object)
{
	var_61_object = Obj(); // 0x1389 PushV
	var_61_object = var_60_object; // 0x138a Mov
	func_4776(var_61_object); // 0x138b NEW_2
	return 0; // 0x138d Return
}


func_5006(var_49_bool)
{
	var_49_bool = 0; // 0x138f MovB
	return 0; // 0x1390 Return
}


func_1936(var_2_object)
{
	var_69_int = 110; // 0x790 PushI
	KillTimer(var_69_int); // 0x791 Func
	var_2_object = 0; // 0x793 TMovB
	func_2071(var_23_bool, var_24_int); // 0x795 NEW_2
	return 0; // 0x797 Return
}


func_5009()
{
	return 0; // 0x1392 Return
}


func_5011(var_27_bool)
{
	var_27_bool = 0; // 0x1394 MovB
	return 0; // 0x1395 Return
}


func_5014()
{
	return 0; // 0x1397 Return
}


func_5016(var_103_int)
{
	var_103_int = 515564; // 0x1398 MovI
	return 0; // 0x1399 Return
}


func_5018(var_102_int)
{
	var_102_int = 503349; // 0x139a MovI
	return 0; // 0x139b Return
}


func_5020(var_104_string)
{
	var_104_string = "ui/NPC_Citizen2.png"; // 0x139c MovS
	return 0; // 0x139d Return
}


func_5022(var_105_string)
{
	var_105_string = "ui/NPC_Citizen2_b.png"; // 0x139e MovS
	return 0; // 0x139f Return
}


func_5024(var_97_bool)
{
	var_97_bool = 0; // 0x13a0 MovB
	return 0; // 0x13a1 Return
}


func_1953(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; // 0x7a1 PushV
	var_25_bool = 0; var_26_object = Obj(); // 0x7a2 PushV
	var_26_object = var_20_object; // 0x7a3 Mov
	func_3710(var_25_bool, var_26_object); // 0x7a4 NEW_2
	var_59_bool = var_25_bool == 0; // 0x7a6 Not
	if(var_59_bool == 0) goto Label_1961; // 0x7a7 JumpB
	return 4; // 0x7a8 Return
	
Label_1961:
	var_60_object = var_2_object; // 0x7a9 PushT
	if(var_60_object == 0) goto Label_1964; // 0x7aa JumpB
	return 4; // 0x7ab Return
	
Label_1964:
	IsPlayerActor(var_20_object, var_23_bool); // 0x7ac Func
	var_61_bool = var_23_bool == 0; // 0x7ae Not
	if(var_61_bool == 0) goto Label_1969; // 0x7af JumpB
	return 4; // 0x7b0 Return
	
Label_1969:
	var_62_int = 0; var_63_object = Obj(); // 0x7b1 PushV
	var_63_object = var_20_object; // 0x7b2 Mov
	func_4767(var_63_object); // 0x7b3 NEW_2
	var_24_int = var_62_int; // 0x7b4 Mov
	var_65_int = 0; // 0x7b6 PushI
	var_66_bool = var_24_int > var_65_int; // 0x7b7 GT
	if(var_66_bool == 0) goto Label_1992; // 0x7b8 JumpB
	var_67_int = 1; // 0x7b9 PushI
	var_68_bool = var_24_int > var_67_int; // 0x7ba GT
	if(var_68_bool == 0) goto Label_1983; // 0x7bb JumpB
	func_1936(var_24_int); // 0x7bd NEW_2
	
Label_1983:
	var_70_object = Obj(); // 0x7bf PushV
	var_70_object = var_20_object; // 0x7c0 Mov
	func_4776(var_70_object); // 0x7c1 NEW_2
	var_2_object = 1; // 0x7c3 TMovB
	var_135_int = 110; // 0x7c4 PushI
	var_136_float = 10.0; // 0x7c5 PushF
	SetTimer(var_135_int, var_136_float); // 0x7c6 Func
	
Label_1992:
	return 4; // 0x7c8 Return
}


func_5026()
{
	var_20_bool = GlobalVars[0]; // 0x13a2 PushGE
	var_20_bool = 0; // 0x13a3 MovB
	GlobalVars[0] = var_20_bool; // 0x13a4 PopGE
	return 0; // 0x13a5 Return
}


func_5030(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x13a6 PushV
	var_34_bool = GlobalVars[0]; // 0x13a7 PushGE
	if(var_34_bool == 0) goto Label_5043; // 0x13a8 JumpB
	IsOverrideActive(var_33_bool); // 0x13a9 Func
	var_35_bool = var_33_bool == 0; // 0x13ab Not
	if(var_35_bool == 0) goto Label_5041; // 0x13ac JumpB
	var_36_object = Obj(); // 0x13ad PushV
	var_36_object = var_31_object; // 0x13ae Mov
	func_4305(var_36_object); // 0x13af NEW_2
	
Label_5041:
	return 2; // 0x13b1 Return
	
Label_5043:
	var_43_int = 1000; // 0x13b3 PushI
	var_44_int = 0; var_45_object = Obj(); // 0x13b4 PushV
	var_45_object = var_31_object; // 0x13b5 Mov
	TaskCall(1); // 0x13b6 TaskCall
	func_40(var_46_object, var_44_int, var_45_object); // 0x13b7 NEW_2
	TaskReturn(); // 0x13b8 TaskReturn
	var_243_bool = var_43_int == var_46_object; // 0x13ba Eq
	if(var_243_bool == 0) goto Label_5069; // 0x13bb JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x13bc PushV
	var_245_object = var_31_object; // 0x13bd Mov
	func_3961(var_244_bool, var_245_object); // 0x13be NEW_2
	var_275_bool = var_244_bool == 0; // 0x13c0 Not
	if(var_275_bool == 0) goto Label_5059; // 0x13c1 JumpB
	return 2; // 0x13c2 Return
	
Label_5059:
	var_276_object = Obj(); // 0x13c3 PushV
	var_276_object = var_31_object; // 0x13c4 Mov
	TaskCall(0); // 0x13c5 TaskCall
	func_0(var_276_object); // 0x13c6 NEW_2
	TaskReturn(); // 0x13c7 TaskReturn
	var_283_object = Obj(); // 0x13c9 PushV
	var_283_object = var_31_object; // 0x13ca Mov
	func_4016(); // 0x13cb NEW_2
	
Label_5069:
	return 2; // 0x13cd Return
}


func_3501(var_0_bool, var_1_object, var_27_int)
{
	var_28_int = 0; // 0xdae PushI
	var_29_bool = var_27_int != var_28_int; // 0xdaf Neq
	if(var_29_bool == 0) goto Label_3506; // 0xdb0 JumpB
	return 0; // 0xdb1 Return
	
Label_3506:
	var_30_bool = 0; var_31_object = Obj(); // 0xdb2 PushV
	var_31_object = var_1_object; // 0xdb3 MovT
	func_3539(var_30_bool, var_31_object); // 0xdb4 NEW_2
	var_66_bool = var_30_bool == 0; // 0xdb6 Not
	if(var_66_bool == 0) goto Label_3513; // 0xdb7 JumpB
	var_0_bool = 1; // 0xdb8 TMovB
	
Label_3513:
	var_67_int = 0; // 0xdb9 PushI
	KillTimer(var_67_int); // 0xdba Func
	Stop(); // 0xdbc Func
	return 0; // 0xdbe Return
}


func_4016()
{
	CameraSwitchToNormal(); // 0xfb1 Func
	return 0; // 0xfb3 Return
}


func_4020(var_171_string)
{
	var_172_bool = 0; var_173_float = 0; var_174_float = 0; var_175_bool = 0; var_176_float = 0; var_177_float = 0; // 0xfb4 PushV
	lshHasAnimation(var_175_bool, var_171_string); // 0xfb5 Func
	var_178_bool = var_175_bool; // 0xfb7 Push
	if(var_178_bool == 0) goto Label_4031; // 0xfb8 JumpB
	lshGetAnimTimes(var_171_string, var_176_float, var_177_float); // 0xfb9 Func
	var_179_bool = 0; // 0xfbb PushB
	lshPlayAnimation(var_176_float, var_177_float, var_179_bool); // 0xfbc Func
	goto Label_4035; // 0xfbe Jump
	
Label_4035:
	return 6; // 0xfc3 Return
	
Label_4031:
	var_180_string = "Can't find lsh animation : "; // 0xfbf PushS
	var_181_int = var_180_string + var_171_string; // 0xfc0 Add
	Trace(var_181_int); // 0xfc1 Func
}


func_3523(var_0_bool)
{
	var_0_bool = 1; // 0xdc3 TMovB
	var_23_int = 0; // 0xdc4 PushI
	KillTimer(var_23_int); // 0xdc5 Func
	Stop(); // 0xdc7 Func
	return 0; // 0xdc9 Return
}


func_4036(var_146_string, var_147_bool)
{
	var_150_bool = 0; var_151_float = 0; var_152_float = 0; var_153_bool = 0; var_154_float = 0; var_155_float = 0; // 0xfc4 PushV
	lshHasAnimation(var_153_bool, var_146_string); // 0xfc5 Func
	var_156_bool = var_153_bool; // 0xfc7 Push
	if(var_156_bool == 0) goto Label_4046; // 0xfc8 JumpB
	lshGetAnimTimes(var_146_string, var_154_float, var_155_float); // 0xfc9 Func
	lshPlayAnimation(var_154_float, var_155_float, var_147_bool); // 0xfcb Func
	goto Label_4050; // 0xfcd Jump
	
Label_4050:
	return 6; // 0xfd2 Return
	
Label_4046:
	var_157_string = "Can't find lsh animation : "; // 0xfce PushS
	var_158_int = var_157_string + var_146_string; // 0xfcf Add
	Trace(var_158_int); // 0xfd0 Func
}


func_1993(var_0_bool, var_1_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x7c9 PushV
	var_0_bool = 0; // 0x7ca TMovB
	var_1_object = 0; // 0x7cb TMovB
	var_37_float = 0.5; // 0x7cc PushF
	rand(var_31_float, var_37_float); // 0x7cd Func
	Sleep(var_31_float); // 0x7cf Func
	
Label_2001:
	var_38_bool = var_0_bool == 0; // 0x7d1 Not
	if(var_38_bool == 0) goto Label_2051; // 0x7d2 JumpB
	var_39_bool = var_1_object == 0; // 0x7d3 Not
	if(var_39_bool == 0) goto Label_2020; // 0x7d4 JumpB
	
Label_2005:
	GetPosition(var_33_cvector); // 0x7d5 Func
	var_40_float = 0; // 0x7d7 PushV
	func_2052(var_40_float); // 0x7d8 NEW_2
	GetRandomPFPointInCircle(var_32_cvector, var_33_cvector, var_40_float, var_34_bool); // 0x7da Func
	var_43_bool = var_34_bool; // 0x7dc Push
	if(var_43_bool == 0) goto Label_2015; // 0x7dd JumpB
	goto Label_2019; // 0x7de Jump
	
Label_2019:
	goto Label_2021; // 0x7e3 Jump
	
Label_2021:
	var_44_object = Obj(); var_45_cvector = CVector(0,0,0); // 0x7e5 PushV
	var_45_cvector = var_32_cvector; // 0x7e6 Mov
	func_2080(var_44_object, var_45_cvector); // 0x7e7 NEW_2
	var_35_object = var_44_object; // 0x7e8 Mov
	var_48_bool = var_35_object != 0; // 0x7ea NullNeq
	if(var_48_bool == 0) goto Label_2046; // 0x7eb JumpB
	RotatePath(var_35_object, var_36_bool); // 0x7ec Func
	var_49_bool = var_36_bool; // 0x7ee Push
	if(var_49_bool == 0) goto Label_2045; // 0x7ef JumpB
	var_50_bool = 0; // 0x7f0 PushV
	func_2078(var_50_bool); // 0x7f1 NEW_2
	FollowPath(var_35_object, var_50_bool, var_36_bool); // 0x7f3 Func
	var_35_object = 0; // 0x7f5 SetNull
	var_51_bool = var_36_bool; // 0x7f6 Push
	if(var_51_bool == 0) goto Label_2045; // 0x7f7 JumpB
	TaskCall(5); // 0x7f9 TaskCall
	func_2250(); // 0x7fa NEW_2
	TaskReturn(); // 0x7fb TaskReturn
	
Label_2045:
	goto Label_2049; // 0x7fd Jump
	
Label_2049:
	var_35_object = 0; // 0x801 SetNull
	goto Label_2001; // 0x802 Jump
	
Label_2046:
	var_103_int = 1; // 0x7fe PushI
	Sleep(var_103_int); // 0x7ff Func
	
Label_2015:
	var_104_int = 1; // 0x7df PushI
	Sleep(var_104_int); // 0x7e0 Func
	goto Label_2005; // 0x7e2 Jump
	
Label_2020:
	var_1_object = 0; // 0x7e4 TMovB
	
Label_2051:
	return 12; // 0x803 Return
}


func_5070(var_64_bool)
{
	var_64_bool = 0; // 0x13ce MovB
	return 0; // 0x13cf Return
}


func_5072(var_171_bool)
{
	var_171_bool = 1; // 0x13d1 MovB
	return 0; // 0x13d2 Return
}


func_5075(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0; // 0x13d4 PushV
	var_29_object = var_25_object; // 0x13d5 Mov
	var_30_object = var_26_object; // 0x13d6 Mov
	var_31_float = 700.0; // 0x13d7 MovF
	var_32_bool = var_27_bool; // 0x13d8 Mov
	func_4890(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool); // 0x13d9 NEW_2
	var_24_bool = var_28_bool; // 0x13da Mov
	return 0; // 0x13dc Return
}


func_4051(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0xfd3 PushV
	GetEyesHeight(var_26_float); // 0xfd4 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0xfd6 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0xfd7 PushE
	var_28_float = var_26_float; // 0xfd8 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0xfd9 PopE
	var_29_string = "head"; // 0xfda PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0xfdb Func
	return 4; // 0xfdd Return
}


func_3539(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0xdd4 PushV
	var_33_object = var_31_object; // 0xdd5 Mov
	func_3710(var_32_bool, var_33_object); // 0xdd6 NEW_2
	var_30_bool = var_32_bool; // 0xdd7 Mov
	return 0; // 0xdd9 Return
}


func_4565(var_139_int, var_140_string)
{
	var_141_int = 0; var_142_int = 0; // 0x11d5 PushV
	GetInvItemByName(var_142_int, var_140_string); // 0x11d6 Func
	var_139_int = var_142_int; // 0x11d8 Mov
	return 2; // 0x11d9 Return
}


func_3546(var_324_string)
{
	var_324_string = "walk"; // 0xdda MovS
	return 0; // 0xddb Return
}


func_4570(var_20_object)
{
	var_21_object = Obj(); // 0x11db PushV
	var_21_object = var_20_object; // 0x11dc Mov
	TaskCall(3); // 0x11dd TaskCall
	func_1561(var_21_object); // 0x11de NEW_2
	TaskReturn(); // 0x11df TaskReturn
	return 0; // 0x11e1 Return
}


func_3548(var_325_string)
{
	var_325_string = "run"; // 0xddc MovS
	return 0; // 0xddd Return
}


func_5085(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); // 0x13de PushV
	var_104_object = var_102_object; // 0x13df Mov
	func_3579(var_103_bool, var_104_object); // 0x13e0 NEW_2
	if(var_103_bool == 0) goto Label_5102; // 0x13e2 JumpB
	var_107_object = Obj(); // 0x13e3 PushV
	func_4110(var_107_object); // 0x13e4 NEW_2
	var_110_float = -0.07; // 0x13e6 PushF
	var_111_bool = 1; // 0x13e7 PushB
	ReportReputationChange(var_102_object, var_107_object, var_110_float, var_111_bool); // 0x13e8 Func
	var_112_bool = 0; // 0x13ea PushV
	var_112_bool = 1; // 0x13eb MovB
	func_4390(var_112_bool); // 0x13ec NEW_2
	
Label_5102:
	func_4366(); // 0x13ef NEW_2
	var_246_bool = GlobalVars[0]; // 0x13f1 PushGE
	var_246_bool = 1; // 0x13f2 MovB
	GlobalVars[0] = var_246_bool; // 0x13f3 PopGE
	var_247_int = 50; // 0x13f4 PushI
	var_248_int = 40; // 0x13f5 PushI
	SetRTEnvelope(var_247_int, var_248_int); // 0x13f6 Func
	return 0; // 0x13f8 Return
}


func_4062()
{
	var_22_bool = 0; // 0xfde PushV
	func_5024(var_22_bool); // 0xfdf NEW_2
	if(var_22_bool == 0) goto Label_4068; // 0xfe1 JumpB
	lshStopSpeech(); // 0xfe2 Func
	
Label_4068:
	return 0; // 0xfe4 Return
}


func_3550(var_540_string, var_541_int)
{
	var_542_int = 2; // 0xddf PushI
	var_543_bool = var_541_int == var_542_int; // 0xde0 Eq
	if(var_543_bool == 0) goto Label_3557; // 0xde1 JumpB
	var_540_string = "fire"; // 0xde2 MovS
	return 0; // 0xde3 Return
	
Label_3557:
	var_544_int = 1; // 0xde5 PushI
	var_545_bool = var_541_int == var_544_int; // 0xde6 Eq
	if(var_545_bool == 0) goto Label_3562; // 0xde7 JumpB
	var_540_string = "bullet"; // 0xde8 MovS
	return 0; // 0xde9 Return
	
Label_3562:
	var_540_string = "phys"; // 0xdea MovS
	return 0; // 0xdeb Return
}


func_4069(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0xfe5 PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0xfe6 Func
	var_62_bool = var_54_bool == 0; // 0xfe8 Not
	if(var_62_bool == 0) goto Label_4094; // 0xfe9 JumpB
	var_55_int = 0; // 0xfea MovI
	
Label_4075:
	var_63_int = 1; // 0xfeb PushI
	var_64_int = var_55_int + var_63_int; // 0xfec Add
	var_65_int = var_45_string + var_64_int; // 0xfed Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0xfee Func
	var_66_bool = var_56_bool == 0; // 0xff0 Not
	if(var_66_bool == 0) goto Label_4083; // 0xff1 JumpB
	goto Label_4086; // 0xff2 Jump
	
Label_4086:
	var_67_bool = var_55_int == 0; // 0xff6 Not
	if(var_67_bool == 0) goto Label_4089; // 0xff7 JumpB
	return 16; // 0xff8 Return
	
Label_4089:
	irand(var_57_int, var_55_int); // 0xff9 Func
	var_68_int = 1; // 0xffb PushI
	var_69_int = var_57_int + var_68_int; // 0xffc Add
	var_45_string = var_45_string + var_69_int; // 0xffd Add2
	
Label_4094:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0xffe Func
	var_70_bool = var_58_bool; // 0x1000 Push
	if(var_70_bool == 0) goto Label_4109; // 0x1001 JumpB
	GetEyesHeight(var_59_float); // 0x1002 Func
	GetDirection(var_60_cvector); // 0x1004 Func
	var_71_int = 50; // 0x1006 PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x1007 Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x1008 PushE
	var_72_float = var_72_float + var_59_float; // 0x1009 Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x100a PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x100b Func
	
Label_4109:
	return 16; // 0x100d Return
	
Label_4083:
	var_73_int = 1; // 0xff3 PushI
	var_55_int = var_55_int + var_73_int; // 0xff4 Add2
	goto Label_4075; // 0xff5 Jump
}


func_2535()
{
	StopGroup0(); // 0x9e7 Func
	StopAsync(); // 0x9e9 Func
	var_32_string = "head"; // 0x9eb PushS
	UnlookAsync(var_32_string); // 0x9ec Func
	var_33_int = 111; // 0x9ee PushI
	KillTimer(var_33_int); // 0x9ef Func
	return 0; // 0x9f1 Return
}


func_3564(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xdec PushV
	GetPosition(var_57_cvector); // 0xded Func
	GetPosition(var_58_cvector); // 0xdef ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0xdf1 Sub2
	return 4; // 0xdf2 Return
}


func_3571(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0xdf3 PushV
	GetPosition(var_42_cvector); // 0xdf4 Func
	GetPosition(var_43_cvector); // 0xdf6 ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0xdf8 Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0xdf9 Or2
	return 6; // 0xdfa Return
}


func_3065(var_599_bool, var_600_float)
{
	var_601_float = 0; var_602_bool = 0; var_603_float = 0; var_604_bool = 0; // 0xbf9 PushV
	rand(var_603_float); // 0xbfa Func
	var_605_bool = var_603_float < var_600_float; // 0xbfc LT
	if(var_605_bool == 0) goto Label_3085; // 0xbfd JumpB
	
Label_3070:
	IsAnimationPlaying(var_604_bool); // 0xbfe Func
	var_606_bool = var_604_bool == 0; // 0xc00 Not
	if(var_606_bool == 0) goto Label_3075; // 0xc01 JumpB
	goto Label_3084; // 0xc02 Jump
	
Label_3084:
	goto Label_3090; // 0xc0c Jump
	
Label_3090:
	var_599_bool = 0; // 0xc12 MovB
	return 4; // 0xc13 Return
	
Label_3075:
	var_607_bool = 0; // 0xc03 PushV
	func_3163(var_607_bool); // 0xc04 NEW_2
	if(var_607_bool == 0) goto Label_3081; // 0xc06 JumpB
	var_599_bool = 1; // 0xc07 MovB
	return 4; // 0xc08 Return
	
Label_3081:
	sync(); // 0xc09 Func
	goto Label_3070; // 0xc0b Jump
	
Label_3085:
	WaitForAnimEnd(); // 0xc0d Func
	func_3267(var_604_bool); // 0xc10 NEW_2
}


func_3579(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0; // 0xdfb PushV
	IsPlayerActor(var_104_object, var_106_bool); // 0xdfc Func
	var_103_bool = var_106_bool; // 0xdfe Mov
	return 2; // 0xdff Return
}


