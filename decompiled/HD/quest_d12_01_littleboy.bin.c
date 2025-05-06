task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xd2 PushI
	if(var_14_int == 0) goto Label_643; // 0xd3 JumpB
	func_1037(); // 0xd5 NEW_2
	var_16_int = 16245; // 0xd7 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xd8 Eq
	if(var_17_bool == 0) goto Label_223; // 0xd9 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xda PushV
	var_18_object = var_1_object; // 0xdb MovT
	var_19_object = var_0_object; // 0xdc MovT
	func_1103(); // 0xdd NEW_2
	
Label_223:
	var_22_int = 16256; // 0xdf PushI
	var_23_bool = var_13_bool == var_22_int; // 0xe0 Eq
	if(var_23_bool == 0) goto Label_231; // 0xe1 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xe2 PushV
	var_24_object = var_1_object; // 0xe3 MovT
	var_25_object = var_0_object; // 0xe4 MovT
	func_1103(); // 0xe5 NEW_2
	
Label_231:
	var_26_int = 16209; // 0xe7 PushI
	var_27_bool = var_12_bool == var_26_int; // 0xe8 Eq
	if(var_27_bool == 0) goto Label_309; // 0xe9 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0xea PushV
	var_29_object = var_1_object; // 0xeb MovT
	func_1109(var_29_object); // 0xec NEW_2
	if(var_28_bool == 0) goto Label_274; // 0xee JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xef PushV
	var_36_object = var_1_object; // 0xf0 MovT
	var_37_object = var_0_object; // 0xf1 MovT
	func_1097(); // 0xf2 NEW_2
	var_40_object = Obj(); var_41_object = Obj(); // 0xf4 PushV
	var_40_object = var_1_object; // 0xf5 MovT
	var_41_object = var_0_object; // 0xf6 MovT
	func_1065(); // 0xf7 NEW_2
	var_85_string = ""; // 0xf9 PushV
	var_85_string = "Neutral"; // 0xfa MovS
	func_187(var_13_bool, var_85_string); // 0xfb NEW_2
	var_102_int = 514956; // 0xfd PushI
	SetMessage(var_102_int); // 0xfe TObjFunc
	ClearReplies(); // 0x100 TObjFunc
	var_103_int = 514957; // 0x102 PushI
	var_104_int = 16211; // 0x103 PushI
	var_105_int = 16210; // 0x104 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x105 TObjFunc
	var_106_int = 514975; // 0x107 PushI
	var_107_int = 42184; // 0x108 PushI
	var_108_int = 16230; // 0x109 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x10a TObjFunc
	var_109_int = 514977; // 0x10c PushI
	var_110_int = 16233; // 0x10d PushI
	var_111_int = 16232; // 0x10e PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_112_string = ""; // 0x112 PushV
	var_112_string = "Neutral"; // 0x113 MovS
	func_187(var_13_bool, var_112_string); // 0x114 NEW_2
	var_113_int = 514988; // 0x116 PushI
	SetMessage(var_113_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_114_bool = 0; var_115_object = Obj(); // 0x11b PushV
	var_115_object = var_1_object; // 0x11c MovT
	func_1121(var_115_object); // 0x11d NEW_2
	if(var_114_bool == 0) goto Label_293; // 0x11f JumpB
	var_120_int = 514990; // 0x120 PushI
	var_121_int = 16246; // 0x121 PushI
	var_122_int = 16245; // 0x122 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x123 TObjFunc
	
Label_293:
	var_123_bool = 0; var_124_object = Obj(); // 0x125 PushV
	var_124_object = var_1_object; // 0x126 MovT
	func_1121(var_124_object); // 0x127 NEW_2
	if(var_123_bool == 0) goto Label_303; // 0x129 JumpB
	var_125_int = 515000; // 0x12a PushI
	var_126_int = 16257; // 0x12b PushI
	var_127_int = 16256; // 0x12c PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x12d TObjFunc
	
Label_303:
	var_128_int = 514989; // 0x12f PushI
	var_129_int = -1; // 0x130 PushI
	var_130_int = 16244; // 0x131 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_131_int = 16257; // 0x135 PushI
	var_132_bool = var_12_bool == var_131_int; // 0x136 Eq
	if(var_132_bool == 0) goto Label_332; // 0x137 JumpB
	var_133_string = ""; // 0x138 PushV
	var_133_string = "Neutral"; // 0x139 MovS
	func_187(var_13_bool, var_133_string); // 0x13a NEW_2
	var_134_int = 515001; // 0x13c PushI
	SetMessage(var_134_int); // 0x13d TObjFunc
	ClearReplies(); // 0x13f TObjFunc
	var_135_int = 515002; // 0x141 PushI
	var_136_int = 16251; // 0x142 PushI
	var_137_int = 16258; // 0x143 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x144 TObjFunc
	var_138_int = 515003; // 0x146 PushI
	var_139_int = 16248; // 0x147 PushI
	var_140_int = 16260; // 0x148 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_141_int = 16246; // 0x14c PushI
	var_142_bool = var_12_bool == var_141_int; // 0x14d Eq
	if(var_142_bool == 0) goto Label_355; // 0x14e JumpB
	var_143_string = ""; // 0x14f PushV
	var_143_string = "Neutral"; // 0x150 MovS
	func_187(var_13_bool, var_143_string); // 0x151 NEW_2
	var_144_int = 514991; // 0x153 PushI
	SetMessage(var_144_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_145_int = 514992; // 0x158 PushI
	var_146_int = 16248; // 0x159 PushI
	var_147_int = 16247; // 0x15a PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x15b TObjFunc
	var_148_int = 514999; // 0x15d PushI
	var_149_int = 16248; // 0x15e PushI
	var_150_int = 16254; // 0x15f PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_151_int = 16248; // 0x163 PushI
	var_152_bool = var_12_bool == var_151_int; // 0x164 Eq
	if(var_152_bool == 0) goto Label_378; // 0x165 JumpB
	var_153_string = ""; // 0x166 PushV
	var_153_string = "Neutral"; // 0x167 MovS
	func_187(var_13_bool, var_153_string); // 0x168 NEW_2
	var_154_int = 514993; // 0x16a PushI
	SetMessage(var_154_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_155_int = 514994; // 0x16f PushI
	var_156_int = -1; // 0x170 PushI
	var_157_int = 16249; // 0x171 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x172 TObjFunc
	var_158_int = 514995; // 0x174 PushI
	var_159_int = 16251; // 0x175 PushI
	var_160_int = 16250; // 0x176 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_161_int = 16251; // 0x17a PushI
	var_162_bool = var_12_bool == var_161_int; // 0x17b Eq
	if(var_162_bool == 0) goto Label_401; // 0x17c JumpB
	var_163_string = ""; // 0x17d PushV
	var_163_string = "Neutral"; // 0x17e MovS
	func_187(var_13_bool, var_163_string); // 0x17f NEW_2
	var_164_int = 514996; // 0x181 PushI
	SetMessage(var_164_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_165_int = 514997; // 0x186 PushI
	var_166_int = -1; // 0x187 PushI
	var_167_int = 16252; // 0x188 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x189 TObjFunc
	var_168_int = 514998; // 0x18b PushI
	var_169_int = -1; // 0x18c PushI
	var_170_int = 16253; // 0x18d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_171_int = 16233; // 0x191 PushI
	var_172_bool = var_12_bool == var_171_int; // 0x192 Eq
	if(var_172_bool == 0) goto Label_424; // 0x193 JumpB
	var_173_string = ""; // 0x194 PushV
	var_173_string = "Neutral"; // 0x195 MovS
	func_187(var_13_bool, var_173_string); // 0x196 NEW_2
	var_174_int = 514978; // 0x198 PushI
	SetMessage(var_174_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_175_int = 514979; // 0x19d PushI
	var_176_int = 16235; // 0x19e PushI
	var_177_int = 16234; // 0x19f PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1a0 TObjFunc
	var_178_int = 514987; // 0x1a2 PushI
	var_179_int = 16215; // 0x1a3 PushI
	var_180_int = 16242; // 0x1a4 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_181_int = 16235; // 0x1a8 PushI
	var_182_bool = var_12_bool == var_181_int; // 0x1a9 Eq
	if(var_182_bool == 0) goto Label_447; // 0x1aa JumpB
	var_183_string = ""; // 0x1ab PushV
	var_183_string = "Neutral"; // 0x1ac MovS
	func_187(var_13_bool, var_183_string); // 0x1ad NEW_2
	var_184_int = 514980; // 0x1af PushI
	SetMessage(var_184_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_185_int = 514981; // 0x1b4 PushI
	var_186_int = 16237; // 0x1b5 PushI
	var_187_int = 16236; // 0x1b6 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x1b7 TObjFunc
	var_188_int = 514986; // 0x1b9 PushI
	var_189_int = 16213; // 0x1ba PushI
	var_190_int = 16241; // 0x1bb PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_191_int = 16237; // 0x1bf PushI
	var_192_bool = var_12_bool == var_191_int; // 0x1c0 Eq
	if(var_192_bool == 0) goto Label_470; // 0x1c1 JumpB
	var_193_string = ""; // 0x1c2 PushV
	var_193_string = "Neutral"; // 0x1c3 MovS
	func_187(var_13_bool, var_193_string); // 0x1c4 NEW_2
	var_194_int = 514982; // 0x1c6 PushI
	SetMessage(var_194_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_195_int = 514983; // 0x1cb PushI
	var_196_int = -1; // 0x1cc PushI
	var_197_int = 16238; // 0x1cd PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1ce TObjFunc
	var_198_int = 514984; // 0x1d0 PushI
	var_199_int = -1; // 0x1d1 PushI
	var_200_int = 16239; // 0x1d2 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1d3 TObjFunc
	return 0; // 0x1d5 Return
	
Label_470:
	var_201_int = 42184; // 0x1d6 PushI
	var_202_bool = var_12_bool == var_201_int; // 0x1d7 Eq
	if(var_202_bool == 0) goto Label_488; // 0x1d8 JumpB
	var_203_string = ""; // 0x1d9 PushV
	var_203_string = "Neutral"; // 0x1da MovS
	func_187(var_13_bool, var_203_string); // 0x1db NEW_2
	var_204_int = 540206; // 0x1dd PushI
	SetMessage(var_204_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_205_int = 540207; // 0x1e2 PushI
	var_206_int = 42186; // 0x1e3 PushI
	var_207_int = 42185; // 0x1e4 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_208_int = 42186; // 0x1e8 PushI
	var_209_bool = var_12_bool == var_208_int; // 0x1e9 Eq
	if(var_209_bool == 0) goto Label_506; // 0x1ea JumpB
	var_210_string = ""; // 0x1eb PushV
	var_210_string = "Neutral"; // 0x1ec MovS
	func_187(var_13_bool, var_210_string); // 0x1ed NEW_2
	var_211_int = 540208; // 0x1ef PushI
	SetMessage(var_211_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_212_int = 540209; // 0x1f4 PushI
	var_213_int = 16233; // 0x1f5 PushI
	var_214_int = 42187; // 0x1f6 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_215_int = 16211; // 0x1fa PushI
	var_216_bool = var_12_bool == var_215_int; // 0x1fb Eq
	if(var_216_bool == 0) goto Label_529; // 0x1fc JumpB
	var_217_string = ""; // 0x1fd PushV
	var_217_string = "Neutral"; // 0x1fe MovS
	func_187(var_13_bool, var_217_string); // 0x1ff NEW_2
	var_218_int = 514958; // 0x201 PushI
	SetMessage(var_218_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_219_int = 514959; // 0x206 PushI
	var_220_int = 16213; // 0x207 PushI
	var_221_int = 16212; // 0x208 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x209 TObjFunc
	var_222_int = 514974; // 0x20b PushI
	var_223_int = 16213; // 0x20c PushI
	var_224_int = 16228; // 0x20d PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x20e TObjFunc
	return 0; // 0x210 Return
	
Label_529:
	var_225_int = 16213; // 0x211 PushI
	var_226_bool = var_12_bool == var_225_int; // 0x212 Eq
	if(var_226_bool == 0) goto Label_552; // 0x213 JumpB
	var_227_string = ""; // 0x214 PushV
	var_227_string = "Neutral"; // 0x215 MovS
	func_187(var_13_bool, var_227_string); // 0x216 NEW_2
	var_228_int = 514960; // 0x218 PushI
	SetMessage(var_228_int); // 0x219 TObjFunc
	ClearReplies(); // 0x21b TObjFunc
	var_229_int = 514961; // 0x21d PushI
	var_230_int = 16215; // 0x21e PushI
	var_231_int = 16214; // 0x21f PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x220 TObjFunc
	var_232_int = 514973; // 0x222 PushI
	var_233_int = 16215; // 0x223 PushI
	var_234_int = 16226; // 0x224 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x225 TObjFunc
	return 0; // 0x227 Return
	
Label_552:
	var_235_int = 16215; // 0x228 PushI
	var_236_bool = var_12_bool == var_235_int; // 0x229 Eq
	if(var_236_bool == 0) goto Label_575; // 0x22a JumpB
	var_237_string = ""; // 0x22b PushV
	var_237_string = "Neutral"; // 0x22c MovS
	func_187(var_13_bool, var_237_string); // 0x22d NEW_2
	var_238_int = 514962; // 0x22f PushI
	SetMessage(var_238_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_239_int = 514963; // 0x234 PushI
	var_240_int = 16217; // 0x235 PushI
	var_241_int = 16216; // 0x236 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x237 TObjFunc
	var_242_int = 514968; // 0x239 PushI
	var_243_int = 16222; // 0x23a PushI
	var_244_int = 16221; // 0x23b PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x23c TObjFunc
	return 0; // 0x23e Return
	
Label_575:
	var_245_int = 16222; // 0x23f PushI
	var_246_bool = var_12_bool == var_245_int; // 0x240 Eq
	if(var_246_bool == 0) goto Label_603; // 0x241 JumpB
	var_247_string = ""; // 0x242 PushV
	var_247_string = "Neutral"; // 0x243 MovS
	func_187(var_13_bool, var_247_string); // 0x244 NEW_2
	var_248_int = 514969; // 0x246 PushI
	SetMessage(var_248_int); // 0x247 TObjFunc
	ClearReplies(); // 0x249 TObjFunc
	var_249_int = 514970; // 0x24b PushI
	var_250_int = -1; // 0x24c PushI
	var_251_int = 16223; // 0x24d PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x24e TObjFunc
	var_252_int = 514971; // 0x250 PushI
	var_253_int = -1; // 0x251 PushI
	var_254_int = 16224; // 0x252 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x253 TObjFunc
	var_255_int = 514972; // 0x255 PushI
	var_256_int = -1; // 0x256 PushI
	var_257_int = 16225; // 0x257 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x258 TObjFunc
	return 0; // 0x25a Return
	
Label_603:
	var_258_int = 16217; // 0x25b PushI
	var_259_bool = var_12_bool == var_258_int; // 0x25c Eq
	if(var_259_bool == 0) goto Label_631; // 0x25d JumpB
	var_260_string = ""; // 0x25e PushV
	var_260_string = "Neutral"; // 0x25f MovS
	func_187(var_13_bool, var_260_string); // 0x260 NEW_2
	var_261_int = 514964; // 0x262 PushI
	SetMessage(var_261_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_262_int = 514965; // 0x267 PushI
	var_263_int = -1; // 0x268 PushI
	var_264_int = 16218; // 0x269 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x26a TObjFunc
	var_265_int = 514966; // 0x26c PushI
	var_266_int = -1; // 0x26d PushI
	var_267_int = 16219; // 0x26e PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x26f TObjFunc
	var_268_int = 514967; // 0x271 PushI
	var_269_int = -1; // 0x272 PushI
	var_270_int = 16220; // 0x273 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_3_string = 1; // 0x277 TMovB
	var_271_bool = 0; // 0x278 PushV
	func_1229(var_271_bool); // 0x279 NEW_2
	if(var_271_bool == 0) goto Label_639; // 0x27b JumpB
	lshStopAnimation(); // 0x27c Func
	goto Label_641; // 0x27e Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_639:
	StopAnimation(); // 0x27f Func
	
Label_643:
	return 0; // 0x283 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_795(var_11_bool, var_12_object); // 0x28c NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x28e PushV
	var_17_object = var_12_object; // 0x28f Mov
	TaskCall(0); // 0x290 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x291 NEW_2
	TaskReturn(); // 0x292 TaskReturn
	return 0; // 0x294 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x2bc PushS
	var_14_bool = var_12_string == var_13_string; // 0x2bd Eq
	if(var_14_bool == 0) goto Label_706; // 0x2be JumpB
	func_679(var_12_string); // 0x2c0 NEW_2
	
Label_706:
	return 0; // 0x2c2 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x2c3 PushT
	if(var_12_int == 0) goto Label_712; // 0x2c4 JumpB
	func_795(var_10_bool, var_11_bool); // 0x2c6 NEW_2
	
Label_712:
	var_16_bool = 0; // 0x2c8 PushV
	var_16_bool = 0; // 0x2c9 MovB
	var_17_int = var_5_int; // 0x2ca PushT
	if(var_17_int == 0) goto Label_721; // 0x2cb JumpB
	var_18_bool = 0; // 0x2cc PushV
	func_728(var_18_bool); // 0x2cd NEW_2
	if(var_18_bool == 0) goto Label_721; // 0x2cf JumpB
	var_16_bool = 1; // 0x2d0 MovB
	
Label_721:
	if(var_16_bool == 0) goto Label_727; // 0x2d1 JumpB
	var_19_object = Obj(); // 0x2d2 PushV
	func_1044(var_19_object); // 0x2d3 NEW_2
	RemoveActor(var_19_object); // 0x2d5 Func
	
Label_727:
	return 0; // 0x2d7 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x305 PushI
	var_14_bool = var_12_int == var_13_int; // 0x306 Eq
	if(var_14_bool == 0) goto Label_794; // 0x307 JumpB
	var_15_bool = 0; // 0x308 PushV
	func_757(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x309 NEW_2
	if(var_15_bool == 0) goto Label_788; // 0x30b JumpB
	var_28_bool = var_2_object == 0; // 0x30c Not
	if(var_28_bool == 0) goto Label_787; // 0x30d JumpB
	var_29_object = Obj(); // 0x30e PushV
	var_29_object = var_4_bool; // 0x30f MovT
	func_1026(var_29_object); // 0x310 NEW_2
	var_2_object = 1; // 0x312 TMovB
	
Label_787:
	goto Label_794; // 0x313 Jump
	
Label_794:
	return 0; // 0x31a Return
	
Label_788:
	var_36_object = var_2_object; // 0x314 PushT
	if(var_36_object == 0) goto Label_794; // 0x315 JumpB
	var_37_string = "head"; // 0x316 PushS
	UnlookAsync(var_37_string); // 0x317 Func
	var_2_object = 0; // 0x319 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x284 PushV
	var_12_float = 300; // 0x285 MovI
	var_13_float = 100; // 0x286 MovI
	func_661(var_11_bool, var_12_float, var_13_float); // 0x287 NEW_2
	return 0; // 0x289 Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_908(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_1223(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_1221(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_1225(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_1227(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_1204(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_216_bool = var_26_bool == 0; // 0x38 Not
	if(var_216_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_217_object = Obj(); // 0x3f PushV
	var_217_object = var_17_object; // 0x40 Mov
	func_977(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1026(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x402 PushV
	GetEyesHeight(var_32_float); // 0x403 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x405 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x406 PushE
	var_34_float = var_32_float; // 0x407 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x408 PopE
	var_35_string = "head"; // 0x409 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x40a Func
	return 4; // 0x40c Return
}


func_1159(var_120_bool, var_121_object, var_122_int)
{
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0; var_126_object = Obj(); var_127_object = Obj(); var_128_int = 0; // 0x487 PushV
	var_129_object = Obj(); // 0x488 PushV
	func_1146(var_129_object); // 0x489 NEW_2
	var_126_object = var_129_object; // 0x48a Mov
	Find(var_122_int, var_127_object); // 0x48c ObjFunc
	var_134_bool = var_127_object == 0; // 0x48e Not
	if(var_134_bool == 0) goto Label_1174; // 0x48f JumpB
	var_135_string = "Can't find diary parent with id: "; // 0x490 PushS
	var_136_int = var_135_string + var_122_int; // 0x491 Add
	Trace(var_136_int); // 0x492 Func
	var_120_bool = 0; // 0x494 MovB
	return 6; // 0x495 Return
	
Label_1174:
	AddChild(var_121_object); // 0x496 ObjFunc
	var_137_int = 7; // 0x498 PushI
	SendWorldWndMessage(var_137_int); // 0x499 Func
	GetCategory(var_128_int); // 0x49b ObjFunc
	SetDiarySection(var_128_int); // 0x49d Func
	var_120_bool = 0; // 0x49f MovB
	return 6; // 0x4a0 Return
}


func_903(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x387 PushV
	IsLoaded(var_25_bool); // 0x388 Func
	var_23_bool = var_25_bool; // 0x38a Mov
	return 2; // 0x38b Return
}


func_908(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x38c PushV
	GetPosition(var_40_cvector); // 0x38d ObjFunc
	GetEyesHeight(var_39_float); // 0x38f ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x391 PushE
	var_48_float = var_48_float + var_39_float; // 0x392 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x393 PopE
	GetPosition(var_41_cvector); // 0x394 Func
	GetEyesHeight(var_39_float); // 0x396 Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x398 PushE
	var_49_float = var_49_float + var_39_float; // 0x399 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x39a PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x39b Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x39c PushE
	var_50_float = 0; // 0x39d MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x39e PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x39f Or
	var_52_float = sqrt(var_51_int); // 0x3a0 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x3a1 Div2
	var_43_cvector = -var_42_cvector; // 0x3a2 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x3a3 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x3a4 PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x3a5 PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x3a6 Xor2
	func_1050(var_54_cvector, var_55_cvector); // 0x3a7 NEW_2
	var_62_int = 25; // 0x3a9 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x3aa Mult
	var_64_int = var_53_float + var_63_float; // 0x3ab Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x3ac PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x3ad Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x3ae Add2
	IsOverrideActive(var_46_bool); // 0x3af Func
	var_66_bool = var_46_bool; // 0x3b1 Push
	if(var_66_bool == 0) goto Label_949; // 0x3b2 JumpB
	var_27_bool = 0; // 0x3b3 MovB
	return 18; // 0x3b4 Return
	
Label_949:
	StopWorld(); // 0x3b5 Func
	var_67_bool = 1; // 0x3b7 PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x3b8 Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x3ba PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x3bb PushE
	Rotate(var_68_float, var_69_float); // 0x3bc Func
	var_70_bool = 0; // 0x3be PushV
	func_1229(var_70_bool); // 0x3bf NEW_2
	if(var_70_bool == 0) goto Label_963; // 0x3c1 JumpB
	goto Label_971; // 0x3c2 Jump
	
Label_971:
	CameraWaitForPlayFinish(); // 0x3cb Func
	ResumeWorld(); // 0x3cd Func
	var_27_bool = 1; // 0x3cf MovB
	return 18; // 0x3d0 Return
	
Label_963:
	var_71_string = "head"; // 0x3c3 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x3c4 Func
	var_72_bool = var_47_bool; // 0x3c6 Push
	if(var_72_bool == 0) goto Label_971; // 0x3c7 JumpB
	var_73_string = "head"; // 0x3c8 PushS
	LookAsyncCamera(var_73_string); // 0x3c9 Func
}


func_1037()
{
	var_15_bool = 0; // 0x40d PushV
	func_1229(var_15_bool); // 0x40e NEW_2
	if(var_15_bool == 0) goto Label_1043; // 0x410 JumpB
	lshStopSpeech(); // 0x411 Func
	
Label_1043:
	return 0; // 0x413 Return
}


func_1044(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x414 PushV
	self(var_21_object); // 0x415 Func
	var_19_object = var_21_object; // 0x417 Mov
	return 2; // 0x418 Return
}


func_661(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x295 PushV
	var_6_int = 0; // 0x296 TMovB
	
Label_663:
	var_18_int = 3; // 0x297 PushI
	rand(var_16_float, var_18_int); // 0x298 Func
	var_19_int = 3; // 0x29a PushI
	var_20_int = var_16_float + var_19_int; // 0x29b Add
	Sleep(var_20_int, var_17_bool); // 0x29c Func
	var_6_int = 1; // 0x29e TMovB
	var_21_float = 0; var_22_float = 0; // 0x29f PushV
	var_21_float = var_12_float; // 0x2a0 Mov
	var_22_float = var_13_float; // 0x2a1 Mov
	func_730(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x2a2 NEW_2
	var_6_int = 0; // 0x2a4 TMovB
	goto Label_663; // 0x2a5 Jump
}


func_1050(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x41a PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x41b Or
	var_58_float = sqrt(var_59_int); // 0x41c Sqrt2
	var_60_float = 0.0; // 0x41d PushF
	var_61_bool = var_58_float < var_60_float; // 0x41e LT
	if(var_61_bool == 0) goto Label_1058; // 0x41f JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x420 MovV
	return 2; // 0x421 Return
	
Label_1058:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x422 Div2
	return 2; // 0x423 Return
}


func_795(var_2_object, var_3_string)
{
	func_890(); // 0x31c NEW_2
	var_13_int = 10; // 0x31e PushI
	KillTimer(var_13_int); // 0x31f Func
	var_14_object = var_2_object; // 0x321 PushT
	if(var_14_object == 0) goto Label_807; // 0x322 JumpB
	var_15_string = "head"; // 0x323 PushS
	UnlookAsync(var_15_string); // 0x324 Func
	var_2_object = 0; // 0x326 TMovB
	
Label_807:
	var_3_string = 1; // 0x327 TMovB
	return 0; // 0x328 Return
}


func_1187(var_138_bool, var_139_int)
{
	var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); var_143_object = Obj(); // 0x4a3 PushV
	var_144_object = Obj(); // 0x4a4 PushV
	func_1146(var_144_object); // 0x4a5 NEW_2
	var_142_object = var_144_object; // 0x4a6 Mov
	Find(var_139_int, var_143_object); // 0x4a8 ObjFunc
	var_145_bool = var_143_object == 0; // 0x4aa Not
	if(var_145_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_138_bool = 0; // 0x4ac MovB
	return 4; // 0x4ad Return
	
Label_1198:
	Remove(); // 0x4ae ObjFunc
	var_138_bool = 1; // 0x4b0 MovB
	return 4; // 0x4b1 Return
}


func_1060(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x424 PushV
	GetVariable(var_98_string, var_100_int); // 0x425 Func
	var_97_int = var_100_int; // 0x427 Mov
	return 2; // 0x428 Return
}


func_679(var_5_int)
{
	var_5_int = 1; // 0x2a7 TMovB
	var_15_bool = 0; // 0x2a8 PushV
	var_15_bool = 0; // 0x2a9 MovB
	var_16_bool = 0; // 0x2aa PushV
	func_903(var_16_bool); // 0x2ab NEW_2
	var_19_bool = var_16_bool == 0; // 0x2ad Not
	if(var_19_bool == 0) goto Label_692; // 0x2ae JumpB
	var_20_bool = 0; // 0x2af PushV
	func_728(var_20_bool); // 0x2b0 NEW_2
	if(var_20_bool == 0) goto Label_692; // 0x2b2 JumpB
	var_15_bool = 1; // 0x2b3 MovB
	
Label_692:
	if(var_15_bool == 0) goto Label_698; // 0x2b4 JumpB
	var_21_object = Obj(); // 0x2b5 PushV
	func_1044(var_21_object); // 0x2b6 NEW_2
	RemoveActor(var_21_object); // 0x2b8 Func
	
Label_698:
	return 0; // 0x2ba Return
}


func_1065()
{
	var_109_int = 0; var_110_string = ""; // 0x42a PushV
	var_110_string = "D_Mission5"; // 0x42b MovS
	func_1060(var_109_int, var_110_string); // 0x42c NEW_2
	var_111_int = 0; // 0x42e PushI
	var_112_bool = var_109_int == var_111_int; // 0x42f Eq
	if(var_112_bool == 0) goto Label_1096; // 0x430 JumpB
	var_113_string = "D_Mission5"; // 0x431 PushS
	var_114_int = 1; // 0x432 PushI
	SetVariable(var_113_string, var_114_int); // 0x433 Func
	func_1133(); // 0x436 NEW_2
	var_138_bool = 0; var_139_int = 0; // 0x438 PushV
	var_139_int = 30; // 0x439 MovI
	func_1187(var_138_bool, var_139_int); // 0x43a NEW_2
	var_146_bool = 0; var_147_int = 0; // 0x43c PushV
	var_147_int = 3; // 0x43d MovI
	func_1187(var_146_bool, var_147_int); // 0x43e NEW_2
	var_148_bool = 0; var_149_int = 0; // 0x440 PushV
	var_149_int = 4; // 0x441 MovI
	func_1187(var_148_bool, var_149_int); // 0x442 NEW_2
	var_150_bool = 0; var_151_int = 0; // 0x444 PushV
	var_151_int = 5; // 0x445 MovI
	func_1187(var_150_bool, var_151_int); // 0x446 NEW_2
	
Label_1096:
	return 0; // 0x448 Return
}


func_809()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x329 PushV
	WaitForAnimEnd(); // 0x32a Func
	var_44_bool = 0; // 0x32c PushV
	func_903(var_44_bool); // 0x32d NEW_2
	var_45_bool = var_44_bool == 0; // 0x32f Not
	if(var_45_bool == 0) goto Label_818; // 0x330 JumpB
	return 14; // 0x331 Return
	
Label_818:
	var_46_int = 0; // 0x332 PushV
	func_1238(var_46_int); // 0x333 NEW_2
	var_37_int = var_46_int; // 0x334 Mov
	var_38_int = 0; // 0x336 MovI
	
Label_823:
	var_59_bool = 0; // 0x337 PushV
	var_59_bool = 0; // 0x338 MovB
	var_60_int = 5; // 0x339 PushI
	var_61_bool = var_38_int < var_60_int; // 0x33a LT
	if(var_61_bool == 0) goto Label_833; // 0x33b JumpB
	var_62_bool = 0; // 0x33c PushV
	func_903(var_62_bool); // 0x33d NEW_2
	if(var_62_bool == 0) goto Label_833; // 0x33f JumpB
	var_59_bool = 1; // 0x340 MovB
	
Label_833:
	if(var_59_bool == 0) goto Label_885; // 0x341 JumpB
	var_63_int = 3; // 0x342 PushI
	irand(var_39_int, var_63_int); // 0x343 Func
	var_64_int = 0; // 0x345 PushI
	var_65_bool = var_39_int == var_64_int; // 0x346 Eq
	if(var_65_bool == 0) goto Label_857; // 0x347 JumpB
	var_66_int = var_37_int; // 0x348 Push
	if(var_66_int == 0) goto Label_856; // 0x349 JumpB
	irand(var_40_int, var_37_int); // 0x34a Func
	var_67_string = "all"; // 0x34c PushS
	var_68_string = ""; var_69_int = 0; // 0x34d PushV
	var_69_int = var_40_int; // 0x34e Mov
	func_1231(var_68_string, var_69_int); // 0x34f NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x351 Func
	WaitForAnimEnd(var_41_bool); // 0x353 Func
	var_70_bool = var_41_bool == 0; // 0x355 Not
	if(var_70_bool == 0) goto Label_856; // 0x356 JumpB
	goto Label_885; // 0x357 Jump
	
Label_885:
	ResetAAS(); // 0x375 Func
	return 14; // 0x377 Return
	
Label_856:
	goto Label_874; // 0x358 Jump
	
Label_874:
	var_71_bool = 0; // 0x36a PushV
	func_888(var_71_bool); // 0x36b NEW_2
	var_72_bool = var_71_bool == 0; // 0x36d Not
	if(var_72_bool == 0) goto Label_880; // 0x36e JumpB
	goto Label_885; // 0x36f Jump
	
Label_880:
	ResetAAS(); // 0x370 Func
	var_73_int = 1; // 0x372 PushI
	var_38_int = var_38_int + var_73_int; // 0x373 Add2
	goto Label_823; // 0x374 Jump
	
Label_857:
	var_74_int = 1; // 0x359 PushI
	var_75_bool = var_39_int == var_74_int; // 0x35a Eq
	if(var_75_bool == 0) goto Label_871; // 0x35b JumpB
	var_76_int = 4; // 0x35c PushI
	rand(var_42_float, var_76_int); // 0x35d Func
	var_77_int = 1; // 0x35f PushI
	var_78_int = var_42_float + var_77_int; // 0x360 Add
	Sleep(var_78_int, var_43_bool); // 0x361 Func
	var_79_bool = var_43_bool == 0; // 0x363 Not
	if(var_79_bool == 0) goto Label_870; // 0x364 JumpB
	goto Label_885; // 0x365 Jump
	
Label_870:
	goto Label_874; // 0x366 Jump
	
Label_871:
	var_80_int = var_38_int; // 0x367 Push
	if(var_80_int == 0) goto Label_874; // 0x368 JumpB
	goto Label_885; // 0x369 Jump
}


func_1204(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x4b4 PushV
	var_82_string = "branch"; // 0x4b5 PushS
	GetVariable(var_82_string, var_81_int); // 0x4b6 Func
	var_83_int = 0; // 0x4b8 PushI
	var_84_bool = var_81_int == var_83_int; // 0x4b9 Eq
	if(var_84_bool == 0) goto Label_1214; // 0x4ba JumpB
	var_79_int = 1; // 0x4bb MovI
	return 2; // 0x4bc Return
	
Label_1214:
	var_85_int = 1; // 0x4be PushI
	var_86_bool = var_81_int == var_85_int; // 0x4bf Eq
	if(var_86_bool == 0) goto Label_1219; // 0x4c0 JumpB
	var_79_int = 2; // 0x4c1 MovI
	return 2; // 0x4c2 Return
	
Label_1219:
	var_79_int = 3; // 0x4c3 MovI
	return 2; // 0x4c4 Return
}


func_187(var_2_object, var_152_string)
{
	var_153_bool = 0; // 0xbc PushV
	func_1229(var_153_bool); // 0xbd NEW_2
	var_154_bool = var_153_bool == 0; // 0xbf Not
	if(var_154_bool == 0) goto Label_194; // 0xc0 JumpB
	return 0; // 0xc1 Return
	
Label_194:
	var_155_bool = var_152_string == var_2_object; // 0xc2 Eq
	if(var_155_bool == 0) goto Label_197; // 0xc3 JumpB
	return 0; // 0xc4 Return
	
Label_197:
	var_156_string = ""; var_157_bool = 0; // 0xc5 PushV
	var_156_string = var_152_string; // 0xc6 Mov
	var_158_string = ""; // 0xc7 PushS
	var_159_bool = var_152_string == var_158_string; // 0xc8 Eq
	if(var_159_bool == 0) goto Label_204; // 0xc9 JumpB
	var_157_bool = 0; // 0xca MovB
	goto Label_205; // 0xcb Jump
	
Label_205:
	func_1011(var_156_string, var_157_bool); // 0xcd NEW_2
	var_2_object = var_152_string; // 0xcf TMov
	return 0; // 0xd0 Return
	
Label_204:
	var_157_bool = 1; // 0xcc MovB
}


func_1221(var_76_int)
{
	var_76_int = 515560; // 0x4c5 MovI
	return 0; // 0x4c6 Return
}


func_1223(var_75_int)
{
	var_75_int = 503345; // 0x4c7 MovI
	return 0; // 0x4c8 Return
}


func_1225(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png"; // 0x4c9 MovS
	return 0; // 0x4ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_157; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_1109(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_120; // 0x54 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x55 PushV
	var_103_object = var_1_object; // 0x56 MovT
	var_104_object = var_0_object; // 0x57 MovT
	func_1097(); // 0x58 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x5a PushV
	var_107_object = var_1_object; // 0x5b MovT
	var_108_object = var_0_object; // 0x5c MovT
	func_1065(); // 0x5d NEW_2
	var_152_string = ""; // 0x5f PushV
	var_152_string = "Neutral"; // 0x60 MovS
	func_187(var_89_object, var_152_string); // 0x61 NEW_2
	var_169_int = 514956; // 0x63 PushI
	SetMessage(var_169_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_170_int = 514957; // 0x68 PushI
	var_171_int = 16211; // 0x69 PushI
	var_172_int = 16210; // 0x6a PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x6b TObjFunc
	var_173_int = 514975; // 0x6d PushI
	var_174_int = 42184; // 0x6e PushI
	var_175_int = 16230; // 0x6f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x70 TObjFunc
	var_176_int = 514977; // 0x72 PushI
	var_177_int = 16233; // 0x73 PushI
	var_178_int = 16232; // 0x74 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x75 TObjFunc
	goto Label_157; // 0x77 Jump
	
Label_157:
	var_179_bool = 0; // 0x9d PushV
	func_1229(var_179_bool); // 0x9e NEW_2
	if(var_179_bool == 0) goto Label_172; // 0xa0 JumpB
	
Label_161:
	lshWaitForAnimEnd(); // 0xa1 Func
	var_180_string = var_3_string; // 0xa3 PushT
	if(var_180_string == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_171:
	goto Label_186; // 0xab Jump
	
Label_186:
	return 0; // 0xba Return
	
Label_166:
	var_181_string = ""; // 0xa6 PushV
	var_181_string = var_2_object; // 0xa7 MovT
	func_995(var_181_string); // 0xa8 NEW_2
	goto Label_161; // 0xaa Jump
	
Label_172:
	var_192_string = "all"; // 0xac PushS
	var_193_string = "idle"; // 0xad PushS
	PlayAnimation(var_192_string, var_193_string); // 0xae Func
	
Label_176:
	WaitForAnimEnd(); // 0xb0 Func
	var_194_string = var_3_string; // 0xb2 PushT
	if(var_194_string == 0) goto Label_181; // 0xb3 JumpB
	goto Label_186; // 0xb4 Jump
	
Label_181:
	var_195_string = "all"; // 0xb5 PushS
	var_196_string = "idle"; // 0xb6 PushS
	PlayAnimation(var_195_string, var_196_string); // 0xb7 Func
	goto Label_176; // 0xb9 Jump
	
Label_120:
	var_197_string = ""; // 0x78 PushV
	var_197_string = "Neutral"; // 0x79 MovS
	func_187(var_89_object, var_197_string); // 0x7a NEW_2
	var_198_int = 514988; // 0x7c PushI
	SetMessage(var_198_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_199_bool = 0; var_200_object = Obj(); // 0x81 PushV
	var_200_object = var_1_object; // 0x82 MovT
	func_1121(var_200_object); // 0x83 NEW_2
	if(var_199_bool == 0) goto Label_139; // 0x85 JumpB
	var_205_int = 514990; // 0x86 PushI
	var_206_int = 16246; // 0x87 PushI
	var_207_int = 16245; // 0x88 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x89 TObjFunc
	
Label_139:
	var_208_bool = 0; var_209_object = Obj(); // 0x8b PushV
	var_209_object = var_1_object; // 0x8c MovT
	func_1121(var_209_object); // 0x8d NEW_2
	if(var_208_bool == 0) goto Label_149; // 0x8f JumpB
	var_210_int = 515000; // 0x90 PushI
	var_211_int = 16257; // 0x91 PushI
	var_212_int = 16256; // 0x92 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x93 TObjFunc
	
Label_149:
	var_213_int = 514989; // 0x95 PushI
	var_214_int = -1; // 0x96 PushI
	var_215_int = 16244; // 0x97 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x98 TObjFunc
	goto Label_157; // 0x9a Jump
}


func_1227(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png"; // 0x4cb MovS
	return 0; // 0x4cc Return
}


func_1097()
{
	var_105_string = "ood12Littleboy1"; // 0x44a PushS
	var_106_int = 1; // 0x44b PushI
	SetVariable(var_105_string, var_106_int); // 0x44c Func
	return 0; // 0x44e Return
}


func_1229(var_70_bool)
{
	var_70_bool = 0; // 0x4cd MovB
	return 0; // 0x4ce Return
}


func_1103()
{
	var_20_string = "ood12Littleboy2"; // 0x450 PushS
	var_21_int = 1; // 0x451 PushI
	SetVariable(var_20_string, var_21_int); // 0x452 Func
	return 0; // 0x454 Return
}


func_1231(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x4cf PushV
	var_55_string = "idle"; // 0x4d0 MovS
	var_56_int = var_53_int; // 0x4d1 Push
	if(var_56_int == 0) goto Label_1236; // 0x4d2 JumpB
	var_55_string = var_55_string + var_53_int; // 0x4d3 Add2
	
Label_1236:
	var_52_string = var_55_string; // 0x4d4 Mov
	return 2; // 0x4d5 Return
}


func_977()
{
	var_218_bool = 0; var_219_bool = 0; // 0x3d1 PushV
	var_220_bool = 1; // 0x3d2 PushB
	CameraSwitchToNormal(var_220_bool); // 0x3d3 Func
	var_221_bool = 0; // 0x3d5 PushV
	func_1229(var_221_bool); // 0x3d6 NEW_2
	if(var_221_bool == 0) goto Label_986; // 0x3d8 JumpB
	goto Label_994; // 0x3d9 Jump
	
Label_994:
	return 2; // 0x3e2 Return
	
Label_986:
	var_222_string = "head"; // 0x3da PushS
	HasAnimationTrack(var_219_bool, var_222_string); // 0x3db Func
	var_223_bool = var_219_bool; // 0x3dd Push
	if(var_223_bool == 0) goto Label_994; // 0x3de JumpB
	var_224_string = "head"; // 0x3df PushS
	UnlookAsync(var_224_string); // 0x3e0 Func
}


func_1109(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x456 PushV
	var_98_string = "ood12Littleboy1"; // 0x457 MovS
	func_1060(var_97_int, var_98_string); // 0x458 NEW_2
	var_101_int = 0; // 0x45a PushI
	var_102_bool = var_97_int == var_101_int; // 0x45b Eq
	if(var_102_bool == 0) goto Label_1119; // 0x45c JumpB
	var_95_bool = 1; // 0x45d MovB
	return 0; // 0x45e Return
	
Label_1119:
	var_95_bool = 0; // 0x45f MovB
	return 0; // 0x460 Return
}


func_1238(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x4d6 PushV
	var_49_int = 0; // 0x4d7 MovI
	
Label_1240:
	var_51_string = "all"; // 0x4d8 PushS
	var_52_string = ""; var_53_int = 0; // 0x4d9 PushV
	var_53_int = var_49_int; // 0x4da Mov
	func_1231(var_52_string, var_53_int); // 0x4db NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x4dd Func
	var_57_bool = var_50_bool == 0; // 0x4df Not
	if(var_57_bool == 0) goto Label_1250; // 0x4e0 JumpB
	goto Label_1253; // 0x4e1 Jump
	
Label_1253:
	var_46_int = var_49_int; // 0x4e5 Mov
	return 4; // 0x4e6 Return
	
Label_1250:
	var_58_int = 1; // 0x4e2 PushI
	var_49_int = var_49_int + var_58_int; // 0x4e3 Add2
	goto Label_1240; // 0x4e4 Jump
}


func_728(var_18_bool)
{
	var_18_bool = 1; // 0x2d8 MovB
	return 0; // 0x2d9 Return
}


func_730(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x2db PushV
	func_903(var_23_bool); // 0x2dc NEW_2
	var_26_bool = var_23_bool == 0; // 0x2de Not
	if(var_26_bool == 0) goto Label_737; // 0x2df JumpB
	return 0; // 0x2e0 Return
	
Label_737:
	var_27_string = "player"; // 0x2e1 PushS
	FindActor(var_17_bool, var_27_string); // 0x2e2 Func
	var_2_object = 0; // 0x2e4 TMovB
	var_3_string = 0; // 0x2e5 TMovB
	var_0_object = var_21_float; // 0x2e6 TMov
	var_1_object = var_22_float; // 0x2e7 TMov
	var_28_int = 10; // 0x2e8 PushI
	var_29_float = 1.0; // 0x2e9 PushF
	SetTimer(var_28_int, var_29_float); // 0x2ea Func
	func_809(); // 0x2ed NEW_2
	var_81_bool = var_3_string == 0; // 0x2ef Not
	if(var_81_bool == 0) goto Label_756; // 0x2f0 JumpB
	var_82_int = 10; // 0x2f1 PushI
	KillTimer(var_82_int); // 0x2f2 Func
	
Label_756:
	return 0; // 0x2f4 Return
}


func_1121(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x462 PushV
	var_202_string = "ood12Littleboy2"; // 0x463 MovS
	func_1060(var_201_int, var_202_string); // 0x464 NEW_2
	var_203_int = 0; // 0x466 PushI
	var_204_bool = var_201_int == var_203_int; // 0x467 Eq
	if(var_204_bool == 0) goto Label_1131; // 0x468 JumpB
	var_199_bool = 1; // 0x469 MovB
	return 0; // 0x46a Return
	
Label_1131:
	var_199_bool = 0; // 0x46b MovB
	return 0; // 0x46c Return
}


func_995(var_181_string)
{
	var_182_bool = 0; var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_float = 0; var_187_float = 0; // 0x3e3 PushV
	lshHasAnimation(var_185_bool, var_181_string); // 0x3e4 Func
	var_188_bool = var_185_bool; // 0x3e6 Push
	if(var_188_bool == 0) goto Label_1006; // 0x3e7 JumpB
	lshGetAnimTimes(var_181_string, var_186_float, var_187_float); // 0x3e8 Func
	var_189_bool = 0; // 0x3ea PushB
	lshPlayAnimation(var_186_float, var_187_float, var_189_bool); // 0x3eb Func
	goto Label_1010; // 0x3ed Jump
	
Label_1010:
	return 6; // 0x3f2 Return
	
Label_1006:
	var_190_string = "Can't find lsh animation : "; // 0x3ee PushS
	var_191_int = var_190_string + var_181_string; // 0x3ef Add
	Trace(var_191_int); // 0x3f0 Func
}


func_1133()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x46d PushV
	var_117_int = 561; // 0x46e PushI
	var_118_int = 0; // 0x46f PushI
	var_119_int = 530575; // 0x470 PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0x471 Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0x473 PushV
	var_121_object = var_116_object; // 0x474 Mov
	var_122_int = -1; // 0x475 MovI
	func_1159(var_120_bool, var_121_object, var_122_int); // 0x476 NEW_2
	return 2; // 0x478 Return
}


func_1011(var_156_string, var_157_bool)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0; // 0x3f3 PushV
	lshHasAnimation(var_163_bool, var_156_string); // 0x3f4 Func
	var_166_bool = var_163_bool; // 0x3f6 Push
	if(var_166_bool == 0) goto Label_1021; // 0x3f7 JumpB
	lshGetAnimTimes(var_156_string, var_164_float, var_165_float); // 0x3f8 Func
	lshPlayAnimation(var_164_float, var_165_float, var_157_bool); // 0x3fa Func
	goto Label_1025; // 0x3fc Jump
	
Label_1025:
	return 6; // 0x401 Return
	
Label_1021:
	var_167_string = "Can't find lsh animation : "; // 0x3fd PushS
	var_168_int = var_167_string + var_156_string; // 0x3fe Add
	Trace(var_168_int); // 0x3ff Func
}


func_757(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x2f5 PushV
	var_18_bool = var_4_bool == 0; // 0x2f6 NullEq
	if(var_18_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_15_bool = 0; // 0x2f8 MovB
	return 2; // 0x2f9 Return
	
Label_762:
	var_19_float = 0; var_20_object = Obj(); // 0x2fa PushV
	var_20_object = var_4_bool; // 0x2fb MovT
	func_895(var_20_object); // 0x2fc NEW_2
	var_17_float = sqrt(var_19_float); // 0x2fe Sqrt2
	var_27_object = var_2_object; // 0x2ff PushT
	if(var_27_object == 0) goto Label_770; // 0x300 JumpB
	var_17_float = var_17_float - var_1_object; // 0x301 Sub2
	
Label_770:
	var_15_bool = var_17_float < var_0_object; // 0x302 LT2
	return 2; // 0x303 Return
}


func_888(var_71_bool)
{
	var_71_bool = 1; // 0x378 MovB
	return 0; // 0x379 Return
}


func_1146(var_129_object)
{
	var_130_object = Obj(); var_131_object = Obj(); // 0x47a PushV
	GetDiaryRoot(var_131_object); // 0x47b Func
	var_132_bool = var_131_object == 0; // 0x47d Not
	if(var_132_bool == 0) goto Label_1156; // 0x47e JumpB
	var_133_string = "Can't retrieve diary root"; // 0x47f PushS
	Trace(var_133_string); // 0x480 Func
	var_129_object = 0; // 0x482 MovB
	return 2; // 0x483 Return
	
Label_1156:
	var_129_object = var_131_object; // 0x484 Mov
	return 2; // 0x485 Return
}


func_890()
{
	StopAnimation(); // 0x37a Func
	StopGroup0(); // 0x37c Func
	return 0; // 0x37e Return
}


func_895(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x37f PushV
	GetPosition(var_24_cvector); // 0x380 Func
	GetPosition(var_25_cvector); // 0x382 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x384 Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x385 Or2
	return 6; // 0x386 Return
}


