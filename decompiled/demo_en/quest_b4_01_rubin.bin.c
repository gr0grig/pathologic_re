task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc5 PushI
	if(var_8_int == 0) goto Label_686; // 0xc6 JumpB
	func_1130(); // 0xc8 NEW_2
	var_10_int = 19669; // 0xca PushI
	var_11_bool = var_7_bool == var_10_int; // 0xcb Eq
	if(var_11_bool == 0) goto Label_210; // 0xcc JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xcd PushV
	var_12_object = var_1_object; // 0xce MovT
	var_13_object = var_0_object; // 0xcf MovT
	func_1207(); // 0xd0 NEW_2
	
Label_210:
	var_39_int = 20131; // 0xd2 PushI
	var_40_bool = var_7_bool == var_39_int; // 0xd3 Eq
	if(var_40_bool == 0) goto Label_218; // 0xd4 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xd5 PushV
	var_41_object = var_1_object; // 0xd6 MovT
	var_42_object = var_0_object; // 0xd7 MovT
	func_1207(); // 0xd8 NEW_2
	
Label_218:
	var_43_int = 20090; // 0xda PushI
	var_44_bool = var_7_bool == var_43_int; // 0xdb Eq
	if(var_44_bool == 0) goto Label_226; // 0xdc JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0xdd PushV
	var_45_object = var_1_object; // 0xde MovT
	var_46_object = var_0_object; // 0xdf MovT
	func_1216(); // 0xe0 NEW_2
	
Label_226:
	var_49_int = 19666; // 0xe2 PushI
	var_50_bool = var_6_int == var_49_int; // 0xe3 Eq
	if(var_50_bool == 0) goto Label_284; // 0xe4 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xe5 PushV
	var_52_object = var_1_object; // 0xe6 MovT
	func_1222(var_52_object); // 0xe7 NEW_2
	if(var_51_bool == 0) goto Label_259; // 0xe9 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0xea PushV
	var_59_object = var_1_object; // 0xeb MovT
	var_60_object = var_0_object; // 0xec MovT
	func_1201(); // 0xed NEW_2
	var_63_string = ""; // 0xef PushV
	var_63_string = "Confusion"; // 0xf0 MovS
	func_174(var_7_bool, var_63_string); // 0xf1 NEW_2
	var_80_int = 518556; // 0xf3 PushI
	SetMessage(var_80_int); // 0xf4 TObjFunc
	ClearReplies(); // 0xf6 TObjFunc
	var_81_int = 518557; // 0xf8 PushI
	var_82_int = 19668; // 0xf9 PushI
	var_83_int = 19667; // 0xfa PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xfb TObjFunc
	var_84_int = 518965; // 0xfd PushI
	var_85_int = 20084; // 0xfe PushI
	var_86_int = 20077; // 0xff PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x100 TObjFunc
	return 0; // 0x102 Return
	
Label_259:
	var_87_string = ""; // 0x103 PushV
	var_87_string = "Warning"; // 0x104 MovS
	func_174(var_7_bool, var_87_string); // 0x105 NEW_2
	var_88_int = 518560; // 0x107 PushI
	SetMessage(var_88_int); // 0x108 TObjFunc
	ClearReplies(); // 0x10a TObjFunc
	var_89_bool = 0; var_90_object = Obj(); // 0x10c PushV
	var_90_object = var_1_object; // 0x10d MovT
	func_1234(var_90_object); // 0x10e NEW_2
	if(var_89_bool == 0) goto Label_278; // 0x110 JumpB
	var_95_int = 518978; // 0x111 PushI
	var_96_int = 20099; // 0x112 PushI
	var_97_int = 20090; // 0x113 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x114 TObjFunc
	
Label_278:
	var_98_int = 518561; // 0x116 PushI
	var_99_int = -1; // 0x117 PushI
	var_100_int = 19671; // 0x118 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_101_int = 20099; // 0x11c PushI
	var_102_bool = var_6_int == var_101_int; // 0x11d Eq
	if(var_102_bool == 0) goto Label_302; // 0x11e JumpB
	var_103_string = ""; // 0x11f PushV
	var_103_string = "Warning"; // 0x120 MovS
	func_174(var_7_bool, var_103_string); // 0x121 NEW_2
	var_104_int = 518984; // 0x123 PushI
	SetMessage(var_104_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_105_int = 518985; // 0x128 PushI
	var_106_int = 20101; // 0x129 PushI
	var_107_int = 20100; // 0x12a PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x12b TObjFunc
	return 0; // 0x12d Return
	
Label_302:
	var_108_int = 20101; // 0x12e PushI
	var_109_bool = var_6_int == var_108_int; // 0x12f Eq
	if(var_109_bool == 0) goto Label_320; // 0x130 JumpB
	var_110_string = ""; // 0x131 PushV
	var_110_string = "Confusion"; // 0x132 MovS
	func_174(var_7_bool, var_110_string); // 0x133 NEW_2
	var_111_int = 518986; // 0x135 PushI
	SetMessage(var_111_int); // 0x136 TObjFunc
	ClearReplies(); // 0x138 TObjFunc
	var_112_int = 518987; // 0x13a PushI
	var_113_int = 20103; // 0x13b PushI
	var_114_int = 20102; // 0x13c PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_115_int = 20103; // 0x140 PushI
	var_116_bool = var_6_int == var_115_int; // 0x141 Eq
	if(var_116_bool == 0) goto Label_338; // 0x142 JumpB
	var_117_string = ""; // 0x143 PushV
	var_117_string = "Rage"; // 0x144 MovS
	func_174(var_7_bool, var_117_string); // 0x145 NEW_2
	var_118_int = 518988; // 0x147 PushI
	SetMessage(var_118_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_119_int = 518989; // 0x14c PushI
	var_120_int = -1; // 0x14d PushI
	var_121_int = 20104; // 0x14e PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_122_int = 20084; // 0x152 PushI
	var_123_bool = var_6_int == var_122_int; // 0x153 Eq
	if(var_123_bool == 0) goto Label_356; // 0x154 JumpB
	var_124_string = ""; // 0x155 PushV
	var_124_string = "Warning"; // 0x156 MovS
	func_174(var_7_bool, var_124_string); // 0x157 NEW_2
	var_125_int = 518972; // 0x159 PushI
	SetMessage(var_125_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_126_int = 518973; // 0x15e PushI
	var_127_int = 20086; // 0x15f PushI
	var_128_int = 20085; // 0x160 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_129_int = 20086; // 0x164 PushI
	var_130_bool = var_6_int == var_129_int; // 0x165 Eq
	if(var_130_bool == 0) goto Label_374; // 0x166 JumpB
	var_131_string = ""; // 0x167 PushV
	var_131_string = "Warning"; // 0x168 MovS
	func_174(var_7_bool, var_131_string); // 0x169 NEW_2
	var_132_int = 518974; // 0x16b PushI
	SetMessage(var_132_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_133_int = 518976; // 0x170 PushI
	var_134_int = 20089; // 0x171 PushI
	var_135_int = 20088; // 0x172 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x173 TObjFunc
	return 0; // 0x175 Return
	
Label_374:
	var_136_int = 20089; // 0x176 PushI
	var_137_bool = var_6_int == var_136_int; // 0x177 Eq
	if(var_137_bool == 0) goto Label_392; // 0x178 JumpB
	var_138_string = ""; // 0x179 PushV
	var_138_string = "Warning"; // 0x17a MovS
	func_174(var_7_bool, var_138_string); // 0x17b NEW_2
	var_139_int = 518977; // 0x17d PushI
	SetMessage(var_139_int); // 0x17e TObjFunc
	ClearReplies(); // 0x180 TObjFunc
	var_140_int = 518979; // 0x182 PushI
	var_141_int = 20092; // 0x183 PushI
	var_142_int = 20091; // 0x184 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_143_int = 20092; // 0x188 PushI
	var_144_bool = var_6_int == var_143_int; // 0x189 Eq
	if(var_144_bool == 0) goto Label_410; // 0x18a JumpB
	var_145_string = ""; // 0x18b PushV
	var_145_string = "Rage"; // 0x18c MovS
	func_174(var_7_bool, var_145_string); // 0x18d NEW_2
	var_146_int = 518980; // 0x18f PushI
	SetMessage(var_146_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_147_int = 518981; // 0x194 PushI
	var_148_int = 20087; // 0x195 PushI
	var_149_int = 20093; // 0x196 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_150_int = 19668; // 0x19a PushI
	var_151_bool = var_6_int == var_150_int; // 0x19b Eq
	if(var_151_bool == 0) goto Label_433; // 0x19c JumpB
	var_152_string = ""; // 0x19d PushV
	var_152_string = "Confusion"; // 0x19e MovS
	func_174(var_7_bool, var_152_string); // 0x19f NEW_2
	var_153_int = 518558; // 0x1a1 PushI
	SetMessage(var_153_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_154_int = 518966; // 0x1a6 PushI
	var_155_int = 20087; // 0x1a7 PushI
	var_156_int = 20078; // 0x1a8 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x1a9 TObjFunc
	var_157_int = 518967; // 0x1ab PushI
	var_158_int = 20080; // 0x1ac PushI
	var_159_int = 20079; // 0x1ad PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_160_int = 20080; // 0x1b1 PushI
	var_161_bool = var_6_int == var_160_int; // 0x1b2 Eq
	if(var_161_bool == 0) goto Label_456; // 0x1b3 JumpB
	var_162_string = ""; // 0x1b4 PushV
	var_162_string = "Warning"; // 0x1b5 MovS
	func_174(var_7_bool, var_162_string); // 0x1b6 NEW_2
	var_163_int = 518968; // 0x1b8 PushI
	SetMessage(var_163_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_164_int = 518969; // 0x1bd PushI
	var_165_int = 20087; // 0x1be PushI
	var_166_int = 20081; // 0x1bf PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1c0 TObjFunc
	var_167_int = 518970; // 0x1c2 PushI
	var_168_int = 20083; // 0x1c3 PushI
	var_169_int = 20082; // 0x1c4 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_170_int = 20083; // 0x1c8 PushI
	var_171_bool = var_6_int == var_170_int; // 0x1c9 Eq
	if(var_171_bool == 0) goto Label_474; // 0x1ca JumpB
	var_172_string = ""; // 0x1cb PushV
	var_172_string = "Warning"; // 0x1cc MovS
	func_174(var_7_bool, var_172_string); // 0x1cd NEW_2
	var_173_int = 518971; // 0x1cf PushI
	SetMessage(var_173_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_174_int = 518982; // 0x1d4 PushI
	var_175_int = 20084; // 0x1d5 PushI
	var_176_int = 20096; // 0x1d6 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1d7 TObjFunc
	return 0; // 0x1d9 Return
	
Label_474:
	var_177_int = 20087; // 0x1da PushI
	var_178_bool = var_6_int == var_177_int; // 0x1db Eq
	if(var_178_bool == 0) goto Label_497; // 0x1dc JumpB
	var_179_string = ""; // 0x1dd PushV
	var_179_string = "Confusion"; // 0x1de MovS
	func_174(var_7_bool, var_179_string); // 0x1df NEW_2
	var_180_int = 518975; // 0x1e1 PushI
	SetMessage(var_180_int); // 0x1e2 TObjFunc
	ClearReplies(); // 0x1e4 TObjFunc
	var_181_int = 518993; // 0x1e6 PushI
	var_182_int = 20110; // 0x1e7 PushI
	var_183_int = 20108; // 0x1e8 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1e9 TObjFunc
	var_184_int = 518994; // 0x1eb PushI
	var_185_int = 20110; // 0x1ec PushI
	var_186_int = 20109; // 0x1ed PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_187_int = 20110; // 0x1f1 PushI
	var_188_bool = var_6_int == var_187_int; // 0x1f2 Eq
	if(var_188_bool == 0) goto Label_520; // 0x1f3 JumpB
	var_189_string = ""; // 0x1f4 PushV
	var_189_string = "Rage"; // 0x1f5 MovS
	func_174(var_7_bool, var_189_string); // 0x1f6 NEW_2
	var_190_int = 518995; // 0x1f8 PushI
	SetMessage(var_190_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_191_int = 518996; // 0x1fd PushI
	var_192_int = 20113; // 0x1fe PushI
	var_193_int = 20112; // 0x1ff PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x200 TObjFunc
	var_194_int = 527917; // 0x202 PushI
	var_195_int = 20113; // 0x203 PushI
	var_196_int = 29266; // 0x204 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_197_int = 20113; // 0x208 PushI
	var_198_bool = var_6_int == var_197_int; // 0x209 Eq
	if(var_198_bool == 0) goto Label_538; // 0x20a JumpB
	var_199_string = ""; // 0x20b PushV
	var_199_string = "Rage"; // 0x20c MovS
	func_174(var_7_bool, var_199_string); // 0x20d NEW_2
	var_200_int = 518997; // 0x20f PushI
	SetMessage(var_200_int); // 0x210 TObjFunc
	ClearReplies(); // 0x212 TObjFunc
	var_201_int = 518998; // 0x214 PushI
	var_202_int = 20115; // 0x215 PushI
	var_203_int = 20114; // 0x216 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x217 TObjFunc
	return 0; // 0x219 Return
	
Label_538:
	var_204_int = 20115; // 0x21a PushI
	var_205_bool = var_6_int == var_204_int; // 0x21b Eq
	if(var_205_bool == 0) goto Label_561; // 0x21c JumpB
	var_206_string = ""; // 0x21d PushV
	var_206_string = "Rage"; // 0x21e MovS
	func_174(var_7_bool, var_206_string); // 0x21f NEW_2
	var_207_int = 518999; // 0x221 PushI
	SetMessage(var_207_int); // 0x222 TObjFunc
	ClearReplies(); // 0x224 TObjFunc
	var_208_int = 519005; // 0x226 PushI
	var_209_int = 20122; // 0x227 PushI
	var_210_int = 20121; // 0x228 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x229 TObjFunc
	var_211_int = 519001; // 0x22b PushI
	var_212_int = 20118; // 0x22c PushI
	var_213_int = 20117; // 0x22d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x22e TObjFunc
	return 0; // 0x230 Return
	
Label_561:
	var_214_int = 20118; // 0x231 PushI
	var_215_bool = var_6_int == var_214_int; // 0x232 Eq
	if(var_215_bool == 0) goto Label_579; // 0x233 JumpB
	var_216_string = ""; // 0x234 PushV
	var_216_string = "Neutral"; // 0x235 MovS
	func_174(var_7_bool, var_216_string); // 0x236 NEW_2
	var_217_int = 519002; // 0x238 PushI
	SetMessage(var_217_int); // 0x239 TObjFunc
	ClearReplies(); // 0x23b TObjFunc
	var_218_int = 519003; // 0x23d PushI
	var_219_int = 20124; // 0x23e PushI
	var_220_int = 20119; // 0x23f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_221_int = 20124; // 0x243 PushI
	var_222_bool = var_6_int == var_221_int; // 0x244 Eq
	if(var_222_bool == 0) goto Label_597; // 0x245 JumpB
	var_223_string = ""; // 0x246 PushV
	var_223_string = "Neutral"; // 0x247 MovS
	func_174(var_7_bool, var_223_string); // 0x248 NEW_2
	var_224_int = 519007; // 0x24a PushI
	SetMessage(var_224_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_225_int = 519008; // 0x24f PushI
	var_226_int = 20122; // 0x250 PushI
	var_227_int = 20125; // 0x251 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x252 TObjFunc
	return 0; // 0x254 Return
	
Label_597:
	var_228_int = 20122; // 0x255 PushI
	var_229_bool = var_6_int == var_228_int; // 0x256 Eq
	if(var_229_bool == 0) goto Label_615; // 0x257 JumpB
	var_230_string = ""; // 0x258 PushV
	var_230_string = "Confusion"; // 0x259 MovS
	func_174(var_7_bool, var_230_string); // 0x25a NEW_2
	var_231_int = 519006; // 0x25c PushI
	SetMessage(var_231_int); // 0x25d TObjFunc
	ClearReplies(); // 0x25f TObjFunc
	var_232_int = 519000; // 0x261 PushI
	var_233_int = 20120; // 0x262 PushI
	var_234_int = 20116; // 0x263 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x264 TObjFunc
	return 0; // 0x266 Return
	
Label_615:
	var_235_int = 20120; // 0x267 PushI
	var_236_bool = var_6_int == var_235_int; // 0x268 Eq
	if(var_236_bool == 0) goto Label_633; // 0x269 JumpB
	var_237_string = ""; // 0x26a PushV
	var_237_string = "Confusion"; // 0x26b MovS
	func_174(var_7_bool, var_237_string); // 0x26c NEW_2
	var_238_int = 519004; // 0x26e PushI
	SetMessage(var_238_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_239_int = 519009; // 0x273 PushI
	var_240_int = 20128; // 0x274 PushI
	var_241_int = 20127; // 0x275 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x276 TObjFunc
	return 0; // 0x278 Return
	
Label_633:
	var_242_int = 20128; // 0x279 PushI
	var_243_bool = var_6_int == var_242_int; // 0x27a Eq
	if(var_243_bool == 0) goto Label_651; // 0x27b JumpB
	var_244_string = ""; // 0x27c PushV
	var_244_string = "Neutral"; // 0x27d MovS
	func_174(var_7_bool, var_244_string); // 0x27e NEW_2
	var_245_int = 519010; // 0x280 PushI
	SetMessage(var_245_int); // 0x281 TObjFunc
	ClearReplies(); // 0x283 TObjFunc
	var_246_int = 519011; // 0x285 PushI
	var_247_int = 20130; // 0x286 PushI
	var_248_int = 20129; // 0x287 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x288 TObjFunc
	return 0; // 0x28a Return
	
Label_651:
	var_249_int = 20130; // 0x28b PushI
	var_250_bool = var_6_int == var_249_int; // 0x28c Eq
	if(var_250_bool == 0) goto Label_674; // 0x28d JumpB
	var_251_string = ""; // 0x28e PushV
	var_251_string = "Neutral"; // 0x28f MovS
	func_174(var_7_bool, var_251_string); // 0x290 NEW_2
	var_252_int = 519012; // 0x292 PushI
	SetMessage(var_252_int); // 0x293 TObjFunc
	ClearReplies(); // 0x295 TObjFunc
	var_253_int = 518559; // 0x297 PushI
	var_254_int = -1; // 0x298 PushI
	var_255_int = 19669; // 0x299 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x29a TObjFunc
	var_256_int = 519013; // 0x29c PushI
	var_257_int = -1; // 0x29d PushI
	var_258_int = 20131; // 0x29e PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x29f TObjFunc
	return 0; // 0x2a1 Return
	
Label_674:
	var_3_string = 1; // 0x2a2 TMovB
	var_259_bool = 0; // 0x2a3 PushV
	func_1175(var_259_bool); // 0x2a4 NEW_2
	if(var_259_bool == 0) goto Label_682; // 0x2a6 JumpB
	lshStopAnimation(); // 0x2a7 Func
	goto Label_684; // 0x2a9 Jump
	
Label_684:
	return 0; // 0x2ac Return
	
Label_682:
	StopAnimation(); // 0x2aa Func
	
Label_686:
	return 0; // 0x2ae Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_851(); // 0x2b1 NEW_2
	var_7_int = 0; var_8_object = Obj(); // 0x2b3 PushV
	var_8_object = var_6_object; // 0x2b4 Mov
	TaskCall(0); // 0x2b5 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x2b6 NEW_2
	TaskReturn(); // 0x2b7 TaskReturn
	return 0; // 0x2b9 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_string = "cleanup"; // 0x2e4 PushS
	var_8_bool = var_6_string == var_7_string; // 0x2e5 Eq
	if(var_8_bool == 0) goto Label_746; // 0x2e6 JumpB
	func_719(var_6_string); // 0x2e8 NEW_2
	
Label_746:
	return 0; // 0x2ea Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0(); // 0x2eb Func
	sync(); // 0x2ed Func
	return 0; // 0x2ef Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2f0 PushV
	var_6_bool = 0; // 0x2f1 MovB
	var_7_object = var_0_object; // 0x2f2 PushT
	if(var_7_object == 0) goto Label_761; // 0x2f3 JumpB
	var_8_bool = 0; // 0x2f4 PushV
	func_768(var_8_bool); // 0x2f5 NEW_2
	if(var_8_bool == 0) goto Label_761; // 0x2f7 JumpB
	var_6_bool = 1; // 0x2f8 MovB
	
Label_761:
	if(var_6_bool == 0) goto Label_767; // 0x2f9 JumpB
	var_9_object = Obj(); // 0x2fa PushV
	func_1137(var_9_object); // 0x2fb NEW_2
	RemoveActor(var_9_object); // 0x2fd Func
	
Label_767:
	return 0; // 0x2ff Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0; // 0x2ba PushV
	
Label_699:
	var_8_bool = 0; // 0x2bb PushV
	func_856(var_8_bool); // 0x2bc NEW_2
	var_11_bool = var_8_bool == 0; // 0x2be Not
	if(var_11_bool == 0) goto Label_707; // 0x2bf JumpB
	Hold(); // 0x2c0 Func
	goto Label_699; // 0x2c2 Jump
	
Label_707:
	var_12_int = 3; // 0x2c3 PushI
	rand(var_7_float, var_12_int); // 0x2c4 Func
	var_13_int = 3; // 0x2c6 PushI
	var_14_int = var_7_float + var_13_int; // 0x2c7 Add
	Sleep(var_14_int); // 0x2c8 Func
	func_770(); // 0x2cb NEW_2
	goto Label_699; // 0x2cd Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_861(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1169(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1167(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1171(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1173(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1300(var_69_int); // 0x22 NEW_2
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
	func_1137(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_946(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_248_bool = var_17_bool == 0; // 0x3f Not
	if(var_248_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_249_object = Obj(); // 0x46 PushV
	var_249_object = var_8_object; // 0x47 Mov
	func_929(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_768(var_8_bool)
{
	var_8_bool = 1; // 0x300 MovB
	return 0; // 0x301 Return
}


func_770()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; // 0x302 PushV
	WaitForAnimEnd(); // 0x303 Func
	var_29_bool = 0; // 0x305 PushV
	func_856(var_29_bool); // 0x306 NEW_2
	var_30_bool = var_29_bool == 0; // 0x308 Not
	if(var_30_bool == 0) goto Label_779; // 0x309 JumpB
	return 14; // 0x30a Return
	
Label_779:
	var_31_int = 0; // 0x30b PushV
	func_1184(var_31_int); // 0x30c NEW_2
	var_22_int = var_31_int; // 0x30d Mov
	var_23_int = 0; // 0x30f MovI
	
Label_784:
	var_44_bool = 0; // 0x310 PushV
	var_44_bool = 0; // 0x311 MovB
	var_45_int = 5; // 0x312 PushI
	var_46_bool = var_23_int < var_45_int; // 0x313 LT
	if(var_46_bool == 0) goto Label_794; // 0x314 JumpB
	var_47_bool = 0; // 0x315 PushV
	func_856(var_47_bool); // 0x316 NEW_2
	if(var_47_bool == 0) goto Label_794; // 0x318 JumpB
	var_44_bool = 1; // 0x319 MovB
	
Label_794:
	if(var_44_bool == 0) goto Label_846; // 0x31a JumpB
	var_48_int = 3; // 0x31b PushI
	irand(var_24_int, var_48_int); // 0x31c Func
	var_49_int = 0; // 0x31e PushI
	var_50_bool = var_24_int == var_49_int; // 0x31f Eq
	if(var_50_bool == 0) goto Label_818; // 0x320 JumpB
	var_51_int = var_22_int; // 0x321 Push
	if(var_51_int == 0) goto Label_817; // 0x322 JumpB
	irand(var_25_int, var_22_int); // 0x323 Func
	var_52_string = "all"; // 0x325 PushS
	var_53_string = ""; var_54_int = 0; // 0x326 PushV
	var_54_int = var_25_int; // 0x327 Mov
	func_1177(var_53_string, var_54_int); // 0x328 NEW_2
	PlayAnimation(var_52_string, var_53_string); // 0x32a Func
	WaitForAnimEnd(var_26_bool); // 0x32c Func
	var_55_bool = var_26_bool == 0; // 0x32e Not
	if(var_55_bool == 0) goto Label_817; // 0x32f JumpB
	goto Label_846; // 0x330 Jump
	
Label_846:
	ResetAAS(); // 0x34e Func
	return 14; // 0x350 Return
	
Label_817:
	goto Label_835; // 0x331 Jump
	
Label_835:
	var_56_bool = 0; // 0x343 PushV
	func_849(var_56_bool); // 0x344 NEW_2
	var_57_bool = var_56_bool == 0; // 0x346 Not
	if(var_57_bool == 0) goto Label_841; // 0x347 JumpB
	goto Label_846; // 0x348 Jump
	
Label_841:
	ResetAAS(); // 0x349 Func
	var_58_int = 1; // 0x34b PushI
	var_23_int = var_23_int + var_58_int; // 0x34c Add2
	goto Label_784; // 0x34d Jump
	
Label_818:
	var_59_int = 1; // 0x332 PushI
	var_60_bool = var_24_int == var_59_int; // 0x333 Eq
	if(var_60_bool == 0) goto Label_832; // 0x334 JumpB
	var_61_int = 4; // 0x335 PushI
	rand(var_27_float, var_61_int); // 0x336 Func
	var_62_int = 1; // 0x338 PushI
	var_63_int = var_27_float + var_62_int; // 0x339 Add
	Sleep(var_63_int, var_28_bool); // 0x33a Func
	var_64_bool = var_28_bool == 0; // 0x33c Not
	if(var_64_bool == 0) goto Label_831; // 0x33d JumpB
	goto Label_846; // 0x33e Jump
	
Label_831:
	goto Label_835; // 0x33f Jump
	
Label_832:
	var_65_int = var_23_int; // 0x340 Push
	if(var_65_int == 0) goto Label_835; // 0x341 JumpB
	goto Label_846; // 0x342 Jump
}


func_1153(var_182_int, var_183_string)
{
	var_184_int = 0; var_185_int = 0; // 0x481 PushV
	GetVariable(var_183_string, var_185_int); // 0x482 Func
	var_182_int = var_185_int; // 0x484 Mov
	return 2; // 0x485 Return
}


func_1158(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x486 PushV
	GetGameTime(var_135_float); // 0x487 Func
	var_136_int = 1; // 0x489 PushI
	var_137_int = 0; // 0x48a PushV
	var_138_int = 24; // 0x48b PushI
	var_137_int = var_135_float / var_135_float; // 0x48c Div2
	var_133_int = var_136_int + var_137_int; // 0x48d Add2
	return 2; // 0x48e Return
}


func_1167(var_66_int)
{
	var_66_int = 515551; // 0x48f MovI
	return 0; // 0x490 Return
}


func_1169(var_65_int)
{
	var_65_int = 502876; // 0x491 MovI
	return 0; // 0x492 Return
}


func_1041(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x411 PushV
	var_132_string = "d"; // 0x412 PushS
	var_133_int = 0; // 0x413 PushV
	func_1158(var_133_int); // 0x414 NEW_2
	var_139_int = var_132_string + var_133_int; // 0x416 Add
	var_140_string = "m"; // 0x417 PushS
	var_127_string = var_139_int + var_140_string; // 0x418 Add2
	var_128_int = 0; // 0x419 MovI
	
Label_1050:
	var_141_int = 1; // 0x41a PushI
	if(var_141_int == 0) goto Label_1063; // 0x41b JumpB
	var_142_int = 1; // 0x41c PushI
	var_143_int = var_128_int + var_142_int; // 0x41d Add
	var_144_int = var_127_string + var_143_int; // 0x41e Add
	HasProperty(var_144_int, var_129_bool); // 0x41f ObjFunc
	var_145_bool = var_129_bool == 0; // 0x421 Not
	if(var_145_bool == 0) goto Label_1060; // 0x422 JumpB
	goto Label_1063; // 0x423 Jump
	
Label_1063:
	var_146_bool = var_128_int == 0; // 0x427 Not
	if(var_146_bool == 0) goto Label_1067; // 0x428 JumpB
	var_120_bool = 0; // 0x429 MovB
	return 10; // 0x42a Return
	
Label_1067:
	var_130_int = 0; // 0x42b MovI
	var_147_int = 1; // 0x42c PushI
	var_148_bool = var_128_int > var_147_int; // 0x42d GT
	if(var_148_bool == 0) goto Label_1073; // 0x42e JumpB
	irand(var_130_int, var_128_int); // 0x42f Func
	
Label_1073:
	var_149_int = 1; // 0x431 PushI
	var_150_int = var_130_int + var_149_int; // 0x432 Add
	var_151_int = var_127_string + var_150_int; // 0x433 Add
	GetProperty(var_151_int, var_131_string); // 0x434 ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x436 PushV
	var_153_string = var_131_string; // 0x437 Mov
	func_1115(var_152_bool, var_153_string); // 0x438 NEW_2
	var_120_bool = var_152_bool; // 0x439 Mov
	return 10; // 0x43b Return
	
Label_1060:
	var_154_int = 1; // 0x424 PushI
	var_128_int = var_128_int + var_154_int; // 0x425 Add2
	goto Label_1050; // 0x426 Jump
}


func_1171(var_67_string)
{
	var_67_string = "ui/NPC_Rubin.png"; // 0x493 MovS
	return 0; // 0x494 Return
}


func_1300(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x514 PushV
	var_72_string = "branch"; // 0x515 PushS
	GetVariable(var_72_string, var_71_int); // 0x516 Func
	var_73_int = 0; // 0x518 PushI
	var_74_bool = var_71_int == var_73_int; // 0x519 Eq
	if(var_74_bool == 0) goto Label_1310; // 0x51a JumpB
	var_69_int = 1; // 0x51b MovI
	return 2; // 0x51c Return
	
Label_1310:
	var_75_int = 1; // 0x51e PushI
	var_76_bool = var_71_int == var_75_int; // 0x51f Eq
	if(var_76_bool == 0) goto Label_1315; // 0x520 JumpB
	var_69_int = 2; // 0x521 MovI
	return 2; // 0x522 Return
	
Label_1315:
	var_69_int = 3; // 0x523 MovI
	return 2; // 0x524 Return
}


func_1173(var_68_string)
{
	var_68_string = "ui/NPC_Rubin_b.png"; // 0x495 MovS
	return 0; // 0x496 Return
}


func_1175(var_60_bool)
{
	var_60_bool = 1; // 0x497 MovB
	return 0; // 0x498 Return
}


func_1177(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = ""; // 0x499 PushV
	var_40_string = "idle"; // 0x49a MovS
	var_41_int = var_38_int; // 0x49b Push
	if(var_41_int == 0) goto Label_1182; // 0x49c JumpB
	var_40_string = var_40_string + var_38_int; // 0x49d Add2
	
Label_1182:
	var_37_string = var_40_string; // 0x49e Mov
	return 2; // 0x49f Return
}


func_1184(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x4a0 PushV
	var_34_int = 0; // 0x4a1 MovI
	
Label_1186:
	var_36_string = "all"; // 0x4a2 PushS
	var_37_string = ""; var_38_int = 0; // 0x4a3 PushV
	var_38_int = var_34_int; // 0x4a4 Mov
	func_1177(var_37_string, var_38_int); // 0x4a5 NEW_2
	HasAnimation(var_35_bool, var_36_string, var_37_string); // 0x4a7 Func
	var_42_bool = var_35_bool == 0; // 0x4a9 Not
	if(var_42_bool == 0) goto Label_1196; // 0x4aa JumpB
	goto Label_1199; // 0x4ab Jump
	
Label_1199:
	var_31_int = var_34_int; // 0x4af Mov
	return 4; // 0x4b0 Return
	
Label_1196:
	var_43_int = 1; // 0x4ac PushI
	var_34_int = var_34_int + var_43_int; // 0x4ad Add2
	goto Label_1186; // 0x4ae Jump
}


func_929()
{
	var_250_bool = 0; var_251_bool = 0; // 0x3a1 PushV
	CameraSwitchToNormal(); // 0x3a2 Func
	var_252_bool = 0; // 0x3a4 PushV
	func_1175(var_252_bool); // 0x3a5 NEW_2
	if(var_252_bool == 0) goto Label_937; // 0x3a7 JumpB
	goto Label_945; // 0x3a8 Jump
	
Label_945:
	return 2; // 0x3b1 Return
	
Label_937:
	var_253_string = "head"; // 0x3a9 PushS
	HasAnimationTrack(var_251_bool, var_253_string); // 0x3aa Func
	var_254_bool = var_251_bool; // 0x3ac Push
	if(var_254_bool == 0) goto Label_945; // 0x3ad JumpB
	var_255_string = "head"; // 0x3ae PushS
	UnlookAsync(var_255_string); // 0x3af Func
}


func_174(var_2_object, var_192_string)
{
	var_193_bool = 0; // 0xaf PushV
	func_1175(var_193_bool); // 0xb0 NEW_2
	var_194_bool = var_193_bool == 0; // 0xb2 Not
	if(var_194_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_195_bool = var_192_string == var_2_object; // 0xb5 Eq
	if(var_195_bool == 0) goto Label_184; // 0xb6 JumpB
	return 0; // 0xb7 Return
	
Label_184:
	var_196_string = ""; var_197_bool = 0; // 0xb8 PushV
	var_196_string = var_192_string; // 0xb9 Mov
	var_198_string = ""; // 0xba PushS
	var_199_bool = var_192_string == var_198_string; // 0xbb Eq
	if(var_199_bool == 0) goto Label_191; // 0xbc JumpB
	var_197_bool = 0; // 0xbd MovB
	goto Label_192; // 0xbe Jump
	
Label_192:
	func_1100(var_196_string, var_197_bool); // 0xc0 NEW_2
	var_2_object = var_192_string; // 0xc2 TMov
	return 0; // 0xc3 Return
	
Label_191:
	var_197_bool = 1; // 0xbf MovB
}


func_1201()
{
	var_190_string = "oob4Rubin1"; // 0x4b2 PushS
	var_191_int = 1; // 0x4b3 PushI
	SetVariable(var_190_string, var_191_int); // 0x4b4 Func
	return 0; // 0x4b6 Return
}


func_946(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x3b2 PushV
	var_87_string = "voice_common"; // 0x3b3 PushS
	GetVariable(var_87_string, var_85_int); // 0x3b4 Func
	var_88_int = var_85_int; // 0x3b6 Push
	if(var_88_int == 0) goto Label_984; // 0x3b7 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x3b8 PushV
	var_90_object = var_79_object; // 0x3b9 Mov
	func_1004(var_90_object); // 0x3ba NEW_2
	var_119_bool = var_89_bool == 0; // 0x3bc Not
	if(var_119_bool == 0) goto Label_966; // 0x3bd JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x3be PushV
	var_121_object = var_79_object; // 0x3bf Mov
	func_1041(var_121_object); // 0x3c0 NEW_2
	var_155_bool = var_120_bool == 0; // 0x3c2 Not
	if(var_155_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_78_bool = 0; // 0x3c4 MovB
	return 4; // 0x3c5 Return
	
Label_966:
	var_156_int = 2; // 0x3c6 PushI
	irand(var_86_int, var_156_int); // 0x3c7 Func
	var_157_int = var_86_int; // 0x3c9 Push
	if(var_157_int == 0) goto Label_979; // 0x3ca JumpB
	var_158_string = "voice_common"; // 0x3cb PushS
	var_159_int = 1; // 0x3cc PushI
	var_160_int = var_85_int + var_159_int; // 0x3cd Add
	var_161_int = 3; // 0x3ce PushI
	var_162_int = var_160_int / var_161_int; // 0x3cf Mod
	SetVariable(var_158_string, var_162_int); // 0x3d0 Func
	goto Label_983; // 0x3d2 Jump
	
Label_983:
	goto Label_1002; // 0x3d7 Jump
	
Label_1002:
	var_78_bool = 1; // 0x3ea MovB
	return 4; // 0x3eb Return
	
Label_979:
	var_163_string = "voice_common"; // 0x3d3 PushS
	var_164_int = 0; // 0x3d4 PushI
	SetVariable(var_163_string, var_164_int); // 0x3d5 Func
	
Label_984:
	var_165_bool = 0; var_166_object = Obj(); // 0x3d8 PushV
	var_166_object = var_79_object; // 0x3d9 Mov
	func_1041(var_166_object); // 0x3da NEW_2
	var_167_bool = var_165_bool == 0; // 0x3dc Not
	if(var_167_bool == 0) goto Label_998; // 0x3dd JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x3de PushV
	var_169_object = var_79_object; // 0x3df Mov
	func_1004(var_169_object); // 0x3e0 NEW_2
	var_170_bool = var_168_bool == 0; // 0x3e2 Not
	if(var_170_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_78_bool = 0; // 0x3e4 MovB
	return 4; // 0x3e5 Return
	
Label_998:
	var_171_string = "voice_common"; // 0x3e6 PushS
	var_172_int = 1; // 0x3e7 PushI
	SetVariable(var_171_string, var_172_int); // 0x3e8 Func
}


func_1207()
{
	var_14_string = "b4q01"; // 0x4b8 PushS
	var_15_int = 1000; // 0x4b9 PushI
	SetVariable(var_14_string, var_15_int); // 0x4ba Func
	func_1246(); // 0x4bd NEW_2
	return 0; // 0x4bf Return
}


func_1084(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x43c PushV
	lshHasAnimation(var_222_bool, var_218_string); // 0x43d Func
	var_225_bool = var_222_bool; // 0x43f Push
	if(var_225_bool == 0) goto Label_1095; // 0x440 JumpB
	lshGetAnimTimes(var_218_string, var_223_float, var_224_float); // 0x441 Func
	var_226_bool = 0; // 0x443 PushB
	lshPlayAnimation(var_223_float, var_224_float, var_226_bool); // 0x444 Func
	goto Label_1099; // 0x446 Jump
	
Label_1099:
	return 6; // 0x44b Return
	
Label_1095:
	var_227_string = "Can't find lsh animation : "; // 0x447 PushS
	var_228_int = var_227_string + var_218_string; // 0x448 Add
	Trace(var_228_int); // 0x449 Func
}


func_1216()
{
	var_47_string = "oob4Rubin2"; // 0x4c1 PushS
	var_48_int = 1; // 0x4c2 PushI
	SetVariable(var_47_string, var_48_int); // 0x4c3 Func
	return 0; // 0x4c5 Return
}


func_1222(var_180_bool)
{
	var_182_int = 0; var_183_string = ""; // 0x4c7 PushV
	var_183_string = "oob4Rubin1"; // 0x4c8 MovS
	func_1153(var_182_int, var_183_string); // 0x4c9 NEW_2
	var_186_int = 0; // 0x4cb PushI
	var_187_bool = var_182_int == var_186_int; // 0x4cc Eq
	if(var_187_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_180_bool = 1; // 0x4ce MovB
	return 0; // 0x4cf Return
	
Label_1232:
	var_180_bool = 0; // 0x4d0 MovB
	return 0; // 0x4d1 Return
}


func_1100(var_196_string, var_197_bool)
{
	var_200_bool = 0; var_201_float = 0; var_202_float = 0; var_203_bool = 0; var_204_float = 0; var_205_float = 0; // 0x44c PushV
	lshHasAnimation(var_203_bool, var_196_string); // 0x44d Func
	var_206_bool = var_203_bool; // 0x44f Push
	if(var_206_bool == 0) goto Label_1110; // 0x450 JumpB
	lshGetAnimTimes(var_196_string, var_204_float, var_205_float); // 0x451 Func
	lshPlayAnimation(var_204_float, var_205_float, var_197_bool); // 0x453 Func
	goto Label_1114; // 0x455 Jump
	
Label_1114:
	return 6; // 0x45a Return
	
Label_1110:
	var_207_string = "Can't find lsh animation : "; // 0x456 PushS
	var_208_int = var_207_string + var_196_string; // 0x457 Add
	Trace(var_208_int); // 0x458 Func
}


func_719(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x2cf PushV
	var_0_object = 1; // 0x2d0 TMovB
	IsLoaded(var_10_bool); // 0x2d1 Func
	var_11_bool = 0; // 0x2d3 PushV
	var_11_bool = 0; // 0x2d4 MovB
	var_12_bool = var_10_bool == 0; // 0x2d5 Not
	if(var_12_bool == 0) goto Label_732; // 0x2d6 JumpB
	var_13_bool = 0; // 0x2d7 PushV
	func_768(var_13_bool); // 0x2d8 NEW_2
	if(var_13_bool == 0) goto Label_732; // 0x2da JumpB
	var_11_bool = 1; // 0x2db MovB
	
Label_732:
	if(var_11_bool == 0) goto Label_738; // 0x2dc JumpB
	var_14_object = Obj(); // 0x2dd PushV
	func_1137(var_14_object); // 0x2de NEW_2
	RemoveActor(var_14_object); // 0x2e0 Func
	
Label_738:
	return 2; // 0x2e2 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_144; // 0x56 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0x57 PushV
	var_181_object = var_1_object; // 0x58 MovT
	func_1222(var_181_object); // 0x59 NEW_2
	if(var_180_bool == 0) goto Label_117; // 0x5b JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x5c PushV
	var_188_object = var_1_object; // 0x5d MovT
	var_189_object = var_0_object; // 0x5e MovT
	func_1201(); // 0x5f NEW_2
	var_192_string = ""; // 0x61 PushV
	var_192_string = "Confusion"; // 0x62 MovS
	func_174(var_174_object, var_192_string); // 0x63 NEW_2
	var_209_int = 518556; // 0x65 PushI
	SetMessage(var_209_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_210_int = 518557; // 0x6a PushI
	var_211_int = 19668; // 0x6b PushI
	var_212_int = 19667; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	var_213_int = 518965; // 0x6f PushI
	var_214_int = 20084; // 0x70 PushI
	var_215_int = 20077; // 0x71 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x72 TObjFunc
	goto Label_144; // 0x74 Jump
	
Label_144:
	var_216_bool = 0; // 0x90 PushV
	func_1175(var_216_bool); // 0x91 NEW_2
	if(var_216_bool == 0) goto Label_159; // 0x93 JumpB
	
Label_148:
	lshWaitForAnimEnd(); // 0x94 Func
	var_217_string = var_3_string; // 0x96 PushT
	if(var_217_string == 0) goto Label_153; // 0x97 JumpB
	goto Label_158; // 0x98 Jump
	
Label_158:
	goto Label_173; // 0x9e Jump
	
Label_173:
	return 0; // 0xad Return
	
Label_153:
	var_218_string = ""; // 0x99 PushV
	var_218_string = var_2_object; // 0x9a MovT
	func_1084(var_218_string); // 0x9b NEW_2
	goto Label_148; // 0x9d Jump
	
Label_159:
	var_229_string = "all"; // 0x9f PushS
	var_230_string = "idle"; // 0xa0 PushS
	PlayAnimation(var_229_string, var_230_string); // 0xa1 Func
	
Label_163:
	WaitForAnimEnd(); // 0xa3 Func
	var_231_string = var_3_string; // 0xa5 PushT
	if(var_231_string == 0) goto Label_168; // 0xa6 JumpB
	goto Label_173; // 0xa7 Jump
	
Label_168:
	var_232_string = "all"; // 0xa8 PushS
	var_233_string = "idle"; // 0xa9 PushS
	PlayAnimation(var_232_string, var_233_string); // 0xaa Func
	goto Label_163; // 0xac Jump
	
Label_117:
	var_234_string = ""; // 0x75 PushV
	var_234_string = "Warning"; // 0x76 MovS
	func_174(var_174_object, var_234_string); // 0x77 NEW_2
	var_235_int = 518560; // 0x79 PushI
	SetMessage(var_235_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_236_bool = 0; var_237_object = Obj(); // 0x7e PushV
	var_237_object = var_1_object; // 0x7f MovT
	func_1234(var_237_object); // 0x80 NEW_2
	if(var_236_bool == 0) goto Label_136; // 0x82 JumpB
	var_242_int = 518978; // 0x83 PushI
	var_243_int = 20099; // 0x84 PushI
	var_244_int = 20090; // 0x85 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x86 TObjFunc
	
Label_136:
	var_245_int = 518561; // 0x88 PushI
	var_246_int = -1; // 0x89 PushI
	var_247_int = 19671; // 0x8a PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x8b TObjFunc
	goto Label_144; // 0x8d Jump
}


func_1234(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x4d3 PushV
	var_239_string = "oob4Rubin2"; // 0x4d4 MovS
	func_1153(var_238_int, var_239_string); // 0x4d5 NEW_2
	var_240_int = 0; // 0x4d7 PushI
	var_241_bool = var_238_int == var_240_int; // 0x4d8 Eq
	if(var_241_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_236_bool = 1; // 0x4da MovB
	return 0; // 0x4db Return
	
Label_1244:
	var_236_bool = 0; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_851()
{
	StopAnimation(); // 0x353 Func
	StopGroup0(); // 0x355 Func
	return 0; // 0x357 Return
}


func_849(var_56_bool)
{
	var_56_bool = 1; // 0x351 MovB
	return 0; // 0x352 Return
}


func_856(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x358 PushV
	IsLoaded(var_10_bool); // 0x359 Func
	var_8_bool = var_10_bool; // 0x35b Mov
	return 2; // 0x35c Return
}


func_1115(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x45b PushV
	var_116_bool = 0; // 0x45c PushV
	func_1175(var_116_bool); // 0x45d NEW_2
	if(var_116_bool == 0) goto Label_1128; // 0x45f JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x460 Func
	var_117_bool = var_115_bool; // 0x462 Push
	if(var_117_bool == 0) goto Label_1128; // 0x463 JumpB
	lshPlaySpeech(var_113_string); // 0x464 Func
	var_112_bool = 1; // 0x466 MovB
	return 2; // 0x467 Return
	
Label_1128:
	var_112_bool = 0; // 0x468 MovB
	return 2; // 0x469 Return
}


func_861(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x35d PushV
	GetPosition(var_31_cvector); // 0x35e ObjFunc
	GetEyesHeight(var_30_float); // 0x360 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x362 PushE
	var_39_float = var_39_float + var_30_float; // 0x363 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x364 PopE
	GetPosition(var_32_cvector); // 0x365 Func
	GetEyesHeight(var_30_float); // 0x367 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x369 PushE
	var_40_float = var_40_float + var_30_float; // 0x36a Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x36b PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x36c Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x36d PushE
	var_41_float = 0; // 0x36e MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x36f PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x370 Or
	var_43_float = sqrt(var_42_int); // 0x371 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x372 Div2
	var_34_cvector = -var_33_cvector; // 0x373 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x374 Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x375 PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x376 PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x377 Xor2
	func_1143(var_45_cvector, var_46_cvector); // 0x378 NEW_2
	var_53_int = 25; // 0x37a PushI
	var_54_float = var_45_cvector * var_53_int; // 0x37b Mult
	var_55_int = var_44_float + var_54_float; // 0x37c Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x37d PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x37e Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x37f Add2
	IsOverrideActive(var_37_bool); // 0x380 Func
	var_57_bool = var_37_bool; // 0x382 Push
	if(var_57_bool == 0) goto Label_902; // 0x383 JumpB
	var_18_bool = 0; // 0x384 MovB
	return 18; // 0x385 Return
	
Label_902:
	StopWorld(); // 0x386 Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x388 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x38a PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x38b PushE
	Rotate(var_58_float, var_59_float); // 0x38c Func
	var_60_bool = 0; // 0x38e PushV
	func_1175(var_60_bool); // 0x38f NEW_2
	if(var_60_bool == 0) goto Label_915; // 0x391 JumpB
	goto Label_923; // 0x392 Jump
	
Label_923:
	CameraWaitForPlayFinish(); // 0x39b Func
	ResumeWorld(); // 0x39d Func
	var_18_bool = 1; // 0x39f MovB
	return 18; // 0x3a0 Return
	
Label_915:
	var_61_string = "head"; // 0x393 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x394 Func
	var_62_bool = var_38_bool; // 0x396 Push
	if(var_62_bool == 0) goto Label_923; // 0x397 JumpB
	var_63_string = "head"; // 0x398 PushS
	LookAsyncCamera(var_63_string); // 0x399 Func
}


func_1246()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x4de PushV
	var_18_int = 219; // 0x4df PushI
	var_19_int = 1; // 0x4e0 PushI
	var_20_int = 518597; // 0x4e1 PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x4e2 Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x4e4 PushV
	var_22_object = var_17_object; // 0x4e5 Mov
	var_23_int = 216; // 0x4e6 MovI
	func_1272(var_21_bool, var_22_object, var_23_int); // 0x4e7 NEW_2
	return 2; // 0x4e9 Return
}


func_1130()
{
	var_9_bool = 0; // 0x46a PushV
	func_1175(var_9_bool); // 0x46b NEW_2
	if(var_9_bool == 0) goto Label_1136; // 0x46d JumpB
	lshStopSpeech(); // 0x46e Func
	
Label_1136:
	return 0; // 0x470 Return
}


func_1259(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x4eb PushV
	GetDiaryRoot(var_32_object); // 0x4ec Func
	var_33_bool = var_32_object == 0; // 0x4ee Not
	if(var_33_bool == 0) goto Label_1269; // 0x4ef JumpB
	var_34_string = "Can't retrieve diary root"; // 0x4f0 PushS
	Trace(var_34_string); // 0x4f1 Func
	var_30_object = 0; // 0x4f3 MovB
	return 2; // 0x4f4 Return
	
Label_1269:
	var_30_object = var_32_object; // 0x4f5 Mov
	return 2; // 0x4f6 Return
}


func_1004(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x3ec PushV
	var_96_string = "c"; // 0x3ed MovS
	var_97_int = 0; // 0x3ee MovI
	
Label_1007:
	var_101_int = 1; // 0x3ef PushI
	if(var_101_int == 0) goto Label_1020; // 0x3f0 JumpB
	var_102_int = 1; // 0x3f1 PushI
	var_103_int = var_97_int + var_102_int; // 0x3f2 Add
	var_104_int = var_96_string + var_103_int; // 0x3f3 Add
	HasProperty(var_104_int, var_98_bool); // 0x3f4 ObjFunc
	var_105_bool = var_98_bool == 0; // 0x3f6 Not
	if(var_105_bool == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1020; // 0x3f8 Jump
	
Label_1020:
	var_106_bool = var_97_int == 0; // 0x3fc Not
	if(var_106_bool == 0) goto Label_1024; // 0x3fd JumpB
	var_89_bool = 0; // 0x3fe MovB
	return 10; // 0x3ff Return
	
Label_1024:
	var_99_int = 0; // 0x400 MovI
	var_107_int = 1; // 0x401 PushI
	var_108_bool = var_97_int > var_107_int; // 0x402 GT
	if(var_108_bool == 0) goto Label_1030; // 0x403 JumpB
	irand(var_99_int, var_97_int); // 0x404 Func
	
Label_1030:
	var_109_int = 1; // 0x406 PushI
	var_110_int = var_99_int + var_109_int; // 0x407 Add
	var_111_int = var_96_string + var_110_int; // 0x408 Add
	GetProperty(var_111_int, var_100_string); // 0x409 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x40b PushV
	var_113_string = var_100_string; // 0x40c Mov
	func_1115(var_112_bool, var_113_string); // 0x40d NEW_2
	var_89_bool = var_112_bool; // 0x40e Mov
	return 10; // 0x410 Return
	
Label_1017:
	var_118_int = 1; // 0x3f9 PushI
	var_97_int = var_97_int + var_118_int; // 0x3fa Add2
	goto Label_1007; // 0x3fb Jump
}


func_1137(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x471 PushV
	self(var_11_object); // 0x472 Func
	var_9_object = var_11_object; // 0x474 Mov
	return 2; // 0x475 Return
}


func_1143(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x477 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x478 Or
	var_49_float = sqrt(var_50_int); // 0x479 Sqrt2
	var_51_float = 0.0; // 0x47a PushF
	var_52_bool = var_49_float < var_51_float; // 0x47b LT
	if(var_52_bool == 0) goto Label_1151; // 0x47c JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x47d MovV
	return 2; // 0x47e Return
	
Label_1151:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x47f Div2
	return 2; // 0x480 Return
}


func_1272(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x4f8 PushV
	var_30_object = Obj(); // 0x4f9 PushV
	func_1259(var_30_object); // 0x4fa NEW_2
	var_27_object = var_30_object; // 0x4fb Mov
	Find(var_23_int, var_28_object); // 0x4fd ObjFunc
	var_35_bool = var_28_object == 0; // 0x4ff Not
	if(var_35_bool == 0) goto Label_1287; // 0x500 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x501 PushS
	var_37_int = var_36_string + var_23_int; // 0x502 Add
	Trace(var_37_int); // 0x503 Func
	var_21_bool = 0; // 0x505 MovB
	return 6; // 0x506 Return
	
Label_1287:
	AddChild(var_22_object); // 0x507 ObjFunc
	var_38_int = 7; // 0x509 PushI
	SendWorldWndMessage(var_38_int); // 0x50a Func
	GetCategory(var_29_int); // 0x50c ObjFunc
	SetDiarySection(var_29_int); // 0x50e Func
	var_21_bool = 0; // 0x510 MovB
	return 6; // 0x511 Return
}


