task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xd2 PushI
	if(var_14_int == 0) goto Label_643; // 0xd3 JumpB
	func_1035(); // 0xd5 NEW_2
	var_16_int = 16245; // 0xd7 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xd8 Eq
	if(var_17_bool == 0) goto Label_223; // 0xd9 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xda PushV
	var_18_object = var_1_object; // 0xdb MovT
	var_19_object = var_0_object; // 0xdc MovT
	func_1101(); // 0xdd NEW_2
	
Label_223:
	var_22_int = 16256; // 0xdf PushI
	var_23_bool = var_13_bool == var_22_int; // 0xe0 Eq
	if(var_23_bool == 0) goto Label_231; // 0xe1 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0xe2 PushV
	var_24_object = var_1_object; // 0xe3 MovT
	var_25_object = var_0_object; // 0xe4 MovT
	func_1101(); // 0xe5 NEW_2
	
Label_231:
	var_26_int = 16209; // 0xe7 PushI
	var_27_bool = var_12_bool == var_26_int; // 0xe8 Eq
	if(var_27_bool == 0) goto Label_309; // 0xe9 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0xea PushV
	var_29_object = var_1_object; // 0xeb MovT
	func_1107(var_29_object); // 0xec NEW_2
	if(var_28_bool == 0) goto Label_274; // 0xee JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xef PushV
	var_36_object = var_1_object; // 0xf0 MovT
	var_37_object = var_0_object; // 0xf1 MovT
	func_1095(); // 0xf2 NEW_2
	var_40_object = Obj(); var_41_object = Obj(); // 0xf4 PushV
	var_40_object = var_1_object; // 0xf5 MovT
	var_41_object = var_0_object; // 0xf6 MovT
	func_1063(); // 0xf7 NEW_2
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
	func_1119(var_115_object); // 0x11d NEW_2
	if(var_114_bool == 0) goto Label_293; // 0x11f JumpB
	var_120_int = 514990; // 0x120 PushI
	var_121_int = 16246; // 0x121 PushI
	var_122_int = 16245; // 0x122 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x123 TObjFunc
	
Label_293:
	var_123_bool = 0; var_124_object = Obj(); // 0x125 PushV
	var_124_object = var_1_object; // 0x126 MovT
	func_1119(var_124_object); // 0x127 NEW_2
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
	func_1227(var_271_bool); // 0x279 NEW_2
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
	func_1042(var_19_object); // 0x2d3 NEW_2
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
	func_1024(var_29_object); // 0x310 NEW_2
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
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_1221(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_1219(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_1223(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_1225(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_1202(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_215_bool = var_26_bool == 0; // 0x38 Not
	if(var_215_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_216_object = Obj(); // 0x3f PushV
	var_216_object = var_17_object; // 0x40 Mov
	func_976(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1024(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x400 PushV
	GetEyesHeight(var_32_float); // 0x401 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x403 MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x404 PushE
	var_34_float = var_32_float; // 0x405 Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x406 PopE
	var_35_string = "head"; // 0x407 PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x408 Func
	return 4; // 0x40a Return
}


func_1157(var_119_bool, var_120_object, var_121_int)
{
	var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0; var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; // 0x485 PushV
	var_128_object = Obj(); // 0x486 PushV
	func_1144(var_128_object); // 0x487 NEW_2
	var_125_object = var_128_object; // 0x488 Mov
	Find(var_121_int, var_126_object); // 0x48a ObjFunc
	var_133_bool = var_126_object == 0; // 0x48c Not
	if(var_133_bool == 0) goto Label_1172; // 0x48d JumpB
	var_134_string = "Can't find diary parent with id: "; // 0x48e PushS
	var_135_int = var_134_string + var_121_int; // 0x48f Add
	Trace(var_135_int); // 0x490 Func
	var_119_bool = 0; // 0x492 MovB
	return 6; // 0x493 Return
	
Label_1172:
	AddChild(var_120_object); // 0x494 ObjFunc
	var_136_int = 7; // 0x496 PushI
	SendWorldWndMessage(var_136_int); // 0x497 Func
	GetCategory(var_127_int); // 0x499 ObjFunc
	SetDiarySection(var_127_int); // 0x49b Func
	var_119_bool = 0; // 0x49d MovB
	return 6; // 0x49e Return
}


func_903(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x387 PushV
	IsLoaded(var_25_bool); // 0x388 Func
	var_23_bool = var_25_bool; // 0x38a Mov
	return 2; // 0x38b Return
}


func_1035()
{
	var_15_bool = 0; // 0x40b PushV
	func_1227(var_15_bool); // 0x40c NEW_2
	if(var_15_bool == 0) goto Label_1041; // 0x40e JumpB
	lshStopSpeech(); // 0x40f Func
	
Label_1041:
	return 0; // 0x411 Return
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
	func_1048(var_54_cvector, var_55_cvector); // 0x3a7 NEW_2
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
	CameraTransit(var_45_cvector, var_43_cvector); // 0x3b7 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x3b9 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x3ba PushE
	Rotate(var_67_float, var_68_float); // 0x3bb Func
	var_69_bool = 0; // 0x3bd PushV
	func_1227(var_69_bool); // 0x3be NEW_2
	if(var_69_bool == 0) goto Label_962; // 0x3c0 JumpB
	goto Label_970; // 0x3c1 Jump
	
Label_970:
	CameraWaitForPlayFinish(); // 0x3ca Func
	ResumeWorld(); // 0x3cc Func
	var_27_bool = 1; // 0x3ce MovB
	return 18; // 0x3cf Return
	
Label_962:
	var_70_string = "head"; // 0x3c2 PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x3c3 Func
	var_71_bool = var_47_bool; // 0x3c5 Push
	if(var_71_bool == 0) goto Label_970; // 0x3c6 JumpB
	var_72_string = "head"; // 0x3c7 PushS
	LookAsyncCamera(var_72_string); // 0x3c8 Func
}


func_1042(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x412 PushV
	self(var_21_object); // 0x413 Func
	var_19_object = var_21_object; // 0x415 Mov
	return 2; // 0x416 Return
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


func_1048(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x418 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x419 Or
	var_58_float = sqrt(var_59_int); // 0x41a Sqrt2
	var_60_float = 0.0; // 0x41b PushF
	var_61_bool = var_58_float < var_60_float; // 0x41c LT
	if(var_61_bool == 0) goto Label_1056; // 0x41d JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x41e MovV
	return 2; // 0x41f Return
	
Label_1056:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x420 Div2
	return 2; // 0x421 Return
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


func_1185(var_137_bool, var_138_int)
{
	var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); // 0x4a1 PushV
	var_143_object = Obj(); // 0x4a2 PushV
	func_1144(var_143_object); // 0x4a3 NEW_2
	var_141_object = var_143_object; // 0x4a4 Mov
	Find(var_138_int, var_142_object); // 0x4a6 ObjFunc
	var_144_bool = var_142_object == 0; // 0x4a8 Not
	if(var_144_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_137_bool = 0; // 0x4aa MovB
	return 4; // 0x4ab Return
	
Label_1196:
	Remove(); // 0x4ac ObjFunc
	var_137_bool = 1; // 0x4ae MovB
	return 4; // 0x4af Return
}


func_1058(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0; // 0x422 PushV
	GetVariable(var_97_string, var_99_int); // 0x423 Func
	var_96_int = var_99_int; // 0x425 Mov
	return 2; // 0x426 Return
}


func_1063()
{
	var_108_int = 0; var_109_string = ""; // 0x428 PushV
	var_109_string = "D_Mission5"; // 0x429 MovS
	func_1058(var_108_int, var_109_string); // 0x42a NEW_2
	var_110_int = 0; // 0x42c PushI
	var_111_bool = var_108_int == var_110_int; // 0x42d Eq
	if(var_111_bool == 0) goto Label_1094; // 0x42e JumpB
	var_112_string = "D_Mission5"; // 0x42f PushS
	var_113_int = 1; // 0x430 PushI
	SetVariable(var_112_string, var_113_int); // 0x431 Func
	func_1131(); // 0x434 NEW_2
	var_137_bool = 0; var_138_int = 0; // 0x436 PushV
	var_138_int = 30; // 0x437 MovI
	func_1185(var_137_bool, var_138_int); // 0x438 NEW_2
	var_145_bool = 0; var_146_int = 0; // 0x43a PushV
	var_146_int = 3; // 0x43b MovI
	func_1185(var_145_bool, var_146_int); // 0x43c NEW_2
	var_147_bool = 0; var_148_int = 0; // 0x43e PushV
	var_148_int = 4; // 0x43f MovI
	func_1185(var_147_bool, var_148_int); // 0x440 NEW_2
	var_149_bool = 0; var_150_int = 0; // 0x442 PushV
	var_150_int = 5; // 0x443 MovI
	func_1185(var_149_bool, var_150_int); // 0x444 NEW_2
	
Label_1094:
	return 0; // 0x446 Return
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
	func_1042(var_21_object); // 0x2b6 NEW_2
	RemoveActor(var_21_object); // 0x2b8 Func
	
Label_698:
	return 0; // 0x2ba Return
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
	func_1236(var_46_int); // 0x333 NEW_2
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
	func_1229(var_68_string, var_69_int); // 0x34f NEW_2
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


func_1202(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x4b2 PushV
	var_81_string = "branch"; // 0x4b3 PushS
	GetVariable(var_81_string, var_80_int); // 0x4b4 Func
	var_82_int = 0; // 0x4b6 PushI
	var_83_bool = var_80_int == var_82_int; // 0x4b7 Eq
	if(var_83_bool == 0) goto Label_1212; // 0x4b8 JumpB
	var_78_int = 1; // 0x4b9 MovI
	return 2; // 0x4ba Return
	
Label_1212:
	var_84_int = 1; // 0x4bc PushI
	var_85_bool = var_80_int == var_84_int; // 0x4bd Eq
	if(var_85_bool == 0) goto Label_1217; // 0x4be JumpB
	var_78_int = 2; // 0x4bf MovI
	return 2; // 0x4c0 Return
	
Label_1217:
	var_78_int = 3; // 0x4c1 MovI
	return 2; // 0x4c2 Return
}


func_187(var_2_object, var_151_string)
{
	var_152_bool = 0; // 0xbc PushV
	func_1227(var_152_bool); // 0xbd NEW_2
	var_153_bool = var_152_bool == 0; // 0xbf Not
	if(var_153_bool == 0) goto Label_194; // 0xc0 JumpB
	return 0; // 0xc1 Return
	
Label_194:
	var_154_bool = var_151_string == var_2_object; // 0xc2 Eq
	if(var_154_bool == 0) goto Label_197; // 0xc3 JumpB
	return 0; // 0xc4 Return
	
Label_197:
	var_155_string = ""; var_156_bool = 0; // 0xc5 PushV
	var_155_string = var_151_string; // 0xc6 Mov
	var_157_string = ""; // 0xc7 PushS
	var_158_bool = var_151_string == var_157_string; // 0xc8 Eq
	if(var_158_bool == 0) goto Label_204; // 0xc9 JumpB
	var_156_bool = 0; // 0xca MovB
	goto Label_205; // 0xcb Jump
	
Label_205:
	func_1009(var_155_string, var_156_bool); // 0xcd NEW_2
	var_2_object = var_151_string; // 0xcf TMov
	return 0; // 0xd0 Return
	
Label_204:
	var_156_bool = 1; // 0xcc MovB
}


func_1219(var_75_int)
{
	var_75_int = 515560; // 0x4c3 MovI
	return 0; // 0x4c4 Return
}


func_1221(var_74_int)
{
	var_74_int = 503345; // 0x4c5 MovI
	return 0; // 0x4c6 Return
}


func_1223(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png"; // 0x4c7 MovS
	return 0; // 0x4c8 Return
}


func_1095()
{
	var_104_string = "ood12Littleboy1"; // 0x448 PushS
	var_105_int = 1; // 0x449 PushI
	SetVariable(var_104_string, var_105_int); // 0x44a Func
	return 0; // 0x44c Return
}


func_1225(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png"; // 0x4c9 MovS
	return 0; // 0x4ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_157; // 0x4f JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x50 PushV
	var_95_object = var_1_object; // 0x51 MovT
	func_1107(var_95_object); // 0x52 NEW_2
	if(var_94_bool == 0) goto Label_120; // 0x54 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_1_object; // 0x56 MovT
	var_103_object = var_0_object; // 0x57 MovT
	func_1095(); // 0x58 NEW_2
	var_106_object = Obj(); var_107_object = Obj(); // 0x5a PushV
	var_106_object = var_1_object; // 0x5b MovT
	var_107_object = var_0_object; // 0x5c MovT
	func_1063(); // 0x5d NEW_2
	var_151_string = ""; // 0x5f PushV
	var_151_string = "Neutral"; // 0x60 MovS
	func_187(var_88_object, var_151_string); // 0x61 NEW_2
	var_168_int = 514956; // 0x63 PushI
	SetMessage(var_168_int); // 0x64 TObjFunc
	ClearReplies(); // 0x66 TObjFunc
	var_169_int = 514957; // 0x68 PushI
	var_170_int = 16211; // 0x69 PushI
	var_171_int = 16210; // 0x6a PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x6b TObjFunc
	var_172_int = 514975; // 0x6d PushI
	var_173_int = 42184; // 0x6e PushI
	var_174_int = 16230; // 0x6f PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x70 TObjFunc
	var_175_int = 514977; // 0x72 PushI
	var_176_int = 16233; // 0x73 PushI
	var_177_int = 16232; // 0x74 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x75 TObjFunc
	goto Label_157; // 0x77 Jump
	
Label_157:
	var_178_bool = 0; // 0x9d PushV
	func_1227(var_178_bool); // 0x9e NEW_2
	if(var_178_bool == 0) goto Label_172; // 0xa0 JumpB
	
Label_161:
	lshWaitForAnimEnd(); // 0xa1 Func
	var_179_string = var_3_string; // 0xa3 PushT
	if(var_179_string == 0) goto Label_166; // 0xa4 JumpB
	goto Label_171; // 0xa5 Jump
	
Label_171:
	goto Label_186; // 0xab Jump
	
Label_186:
	return 0; // 0xba Return
	
Label_166:
	var_180_string = ""; // 0xa6 PushV
	var_180_string = var_2_object; // 0xa7 MovT
	func_993(var_180_string); // 0xa8 NEW_2
	goto Label_161; // 0xaa Jump
	
Label_172:
	var_191_string = "all"; // 0xac PushS
	var_192_string = "idle"; // 0xad PushS
	PlayAnimation(var_191_string, var_192_string); // 0xae Func
	
Label_176:
	WaitForAnimEnd(); // 0xb0 Func
	var_193_string = var_3_string; // 0xb2 PushT
	if(var_193_string == 0) goto Label_181; // 0xb3 JumpB
	goto Label_186; // 0xb4 Jump
	
Label_181:
	var_194_string = "all"; // 0xb5 PushS
	var_195_string = "idle"; // 0xb6 PushS
	PlayAnimation(var_194_string, var_195_string); // 0xb7 Func
	goto Label_176; // 0xb9 Jump
	
Label_120:
	var_196_string = ""; // 0x78 PushV
	var_196_string = "Neutral"; // 0x79 MovS
	func_187(var_88_object, var_196_string); // 0x7a NEW_2
	var_197_int = 514988; // 0x7c PushI
	SetMessage(var_197_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_198_bool = 0; var_199_object = Obj(); // 0x81 PushV
	var_199_object = var_1_object; // 0x82 MovT
	func_1119(var_199_object); // 0x83 NEW_2
	if(var_198_bool == 0) goto Label_139; // 0x85 JumpB
	var_204_int = 514990; // 0x86 PushI
	var_205_int = 16246; // 0x87 PushI
	var_206_int = 16245; // 0x88 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x89 TObjFunc
	
Label_139:
	var_207_bool = 0; var_208_object = Obj(); // 0x8b PushV
	var_208_object = var_1_object; // 0x8c MovT
	func_1119(var_208_object); // 0x8d NEW_2
	if(var_207_bool == 0) goto Label_149; // 0x8f JumpB
	var_209_int = 515000; // 0x90 PushI
	var_210_int = 16257; // 0x91 PushI
	var_211_int = 16256; // 0x92 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x93 TObjFunc
	
Label_149:
	var_212_int = 514989; // 0x95 PushI
	var_213_int = -1; // 0x96 PushI
	var_214_int = 16244; // 0x97 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x98 TObjFunc
	goto Label_157; // 0x9a Jump
}


func_1227(var_69_bool)
{
	var_69_bool = 0; // 0x4cb MovB
	return 0; // 0x4cc Return
}


func_1101()
{
	var_20_string = "ood12Littleboy2"; // 0x44e PushS
	var_21_int = 1; // 0x44f PushI
	SetVariable(var_20_string, var_21_int); // 0x450 Func
	return 0; // 0x452 Return
}


func_1229(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x4cd PushV
	var_55_string = "idle"; // 0x4ce MovS
	var_56_int = var_53_int; // 0x4cf Push
	if(var_56_int == 0) goto Label_1234; // 0x4d0 JumpB
	var_55_string = var_55_string + var_53_int; // 0x4d1 Add2
	
Label_1234:
	var_52_string = var_55_string; // 0x4d2 Mov
	return 2; // 0x4d3 Return
}


func_976()
{
	var_217_bool = 0; var_218_bool = 0; // 0x3d0 PushV
	CameraSwitchToNormal(); // 0x3d1 Func
	var_219_bool = 0; // 0x3d3 PushV
	func_1227(var_219_bool); // 0x3d4 NEW_2
	if(var_219_bool == 0) goto Label_984; // 0x3d6 JumpB
	goto Label_992; // 0x3d7 Jump
	
Label_992:
	return 2; // 0x3e0 Return
	
Label_984:
	var_220_string = "head"; // 0x3d8 PushS
	HasAnimationTrack(var_218_bool, var_220_string); // 0x3d9 Func
	var_221_bool = var_218_bool; // 0x3db Push
	if(var_221_bool == 0) goto Label_992; // 0x3dc JumpB
	var_222_string = "head"; // 0x3dd PushS
	UnlookAsync(var_222_string); // 0x3de Func
}


func_1107(var_94_bool)
{
	var_96_int = 0; var_97_string = ""; // 0x454 PushV
	var_97_string = "ood12Littleboy1"; // 0x455 MovS
	func_1058(var_96_int, var_97_string); // 0x456 NEW_2
	var_100_int = 0; // 0x458 PushI
	var_101_bool = var_96_int == var_100_int; // 0x459 Eq
	if(var_101_bool == 0) goto Label_1117; // 0x45a JumpB
	var_94_bool = 1; // 0x45b MovB
	return 0; // 0x45c Return
	
Label_1117:
	var_94_bool = 0; // 0x45d MovB
	return 0; // 0x45e Return
}


func_1236(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x4d4 PushV
	var_49_int = 0; // 0x4d5 MovI
	
Label_1238:
	var_51_string = "all"; // 0x4d6 PushS
	var_52_string = ""; var_53_int = 0; // 0x4d7 PushV
	var_53_int = var_49_int; // 0x4d8 Mov
	func_1229(var_52_string, var_53_int); // 0x4d9 NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x4db Func
	var_57_bool = var_50_bool == 0; // 0x4dd Not
	if(var_57_bool == 0) goto Label_1248; // 0x4de JumpB
	goto Label_1251; // 0x4df Jump
	
Label_1251:
	var_46_int = var_49_int; // 0x4e3 Mov
	return 4; // 0x4e4 Return
	
Label_1248:
	var_58_int = 1; // 0x4e0 PushI
	var_49_int = var_49_int + var_58_int; // 0x4e1 Add2
	goto Label_1238; // 0x4e2 Jump
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


func_1119(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x460 PushV
	var_201_string = "ood12Littleboy2"; // 0x461 MovS
	func_1058(var_200_int, var_201_string); // 0x462 NEW_2
	var_202_int = 0; // 0x464 PushI
	var_203_bool = var_200_int == var_202_int; // 0x465 Eq
	if(var_203_bool == 0) goto Label_1129; // 0x466 JumpB
	var_198_bool = 1; // 0x467 MovB
	return 0; // 0x468 Return
	
Label_1129:
	var_198_bool = 0; // 0x469 MovB
	return 0; // 0x46a Return
}


func_993(var_180_string)
{
	var_181_bool = 0; var_182_float = 0; var_183_float = 0; var_184_bool = 0; var_185_float = 0; var_186_float = 0; // 0x3e1 PushV
	lshHasAnimation(var_184_bool, var_180_string); // 0x3e2 Func
	var_187_bool = var_184_bool; // 0x3e4 Push
	if(var_187_bool == 0) goto Label_1004; // 0x3e5 JumpB
	lshGetAnimTimes(var_180_string, var_185_float, var_186_float); // 0x3e6 Func
	var_188_bool = 0; // 0x3e8 PushB
	lshPlayAnimation(var_185_float, var_186_float, var_188_bool); // 0x3e9 Func
	goto Label_1008; // 0x3eb Jump
	
Label_1008:
	return 6; // 0x3f0 Return
	
Label_1004:
	var_189_string = "Can't find lsh animation : "; // 0x3ec PushS
	var_190_int = var_189_string + var_180_string; // 0x3ed Add
	Trace(var_190_int); // 0x3ee Func
}


func_1131()
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x46b PushV
	var_116_int = 561; // 0x46c PushI
	var_117_int = 0; // 0x46d PushI
	var_118_int = 530575; // 0x46e PushI
	CreateDiaryEntry(var_115_object, var_116_int, var_117_int, var_118_int); // 0x46f Func
	var_119_bool = 0; var_120_object = Obj(); var_121_int = 0; // 0x471 PushV
	var_120_object = var_115_object; // 0x472 Mov
	var_121_int = -1; // 0x473 MovI
	func_1157(var_119_bool, var_120_object, var_121_int); // 0x474 NEW_2
	return 2; // 0x476 Return
}


func_1009(var_155_string, var_156_bool)
{
	var_159_bool = 0; var_160_float = 0; var_161_float = 0; var_162_bool = 0; var_163_float = 0; var_164_float = 0; // 0x3f1 PushV
	lshHasAnimation(var_162_bool, var_155_string); // 0x3f2 Func
	var_165_bool = var_162_bool; // 0x3f4 Push
	if(var_165_bool == 0) goto Label_1019; // 0x3f5 JumpB
	lshGetAnimTimes(var_155_string, var_163_float, var_164_float); // 0x3f6 Func
	lshPlayAnimation(var_163_float, var_164_float, var_156_bool); // 0x3f8 Func
	goto Label_1023; // 0x3fa Jump
	
Label_1023:
	return 6; // 0x3ff Return
	
Label_1019:
	var_166_string = "Can't find lsh animation : "; // 0x3fb PushS
	var_167_int = var_166_string + var_155_string; // 0x3fc Add
	Trace(var_167_int); // 0x3fd Func
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


func_890()
{
	StopAnimation(); // 0x37a Func
	StopGroup0(); // 0x37c Func
	return 0; // 0x37e Return
}


func_1144(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x478 PushV
	GetDiaryRoot(var_130_object); // 0x479 Func
	var_131_bool = var_130_object == 0; // 0x47b Not
	if(var_131_bool == 0) goto Label_1154; // 0x47c JumpB
	var_132_string = "Can't retrieve diary root"; // 0x47d PushS
	Trace(var_132_string); // 0x47e Func
	var_128_object = 0; // 0x480 MovB
	return 2; // 0x481 Return
	
Label_1154:
	var_128_object = var_130_object; // 0x482 Mov
	return 2; // 0x483 Return
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


