task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 1; // 0xe2 PushI
	if(var_21_int == 0) goto Label_594; // 0xe3 JumpB
	func_2352(); // 0xe5 NEW_2
	var_23_int = 19792; // 0xe7 PushI
	var_24_bool = var_20_bool == var_23_int; // 0xe8 Eq
	if(var_24_bool == 0) goto Label_239; // 0xe9 JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0xea PushV
	var_25_object = var_1_object; // 0xeb MovT
	var_26_object = var_0_object; // 0xec MovT
	func_2488(); // 0xed NEW_2
	
Label_239:
	var_33_int = 19758; // 0xef PushI
	var_34_bool = var_20_bool == var_33_int; // 0xf0 Eq
	if(var_34_bool == 0) goto Label_247; // 0xf1 JumpB
	var_35_object = Obj(); var_36_object = Obj(); // 0xf2 PushV
	var_35_object = var_1_object; // 0xf3 MovT
	var_36_object = var_0_object; // 0xf4 MovT
	func_2488(); // 0xf5 NEW_2
	
Label_247:
	var_37_int = 32120; // 0xf7 PushI
	var_38_bool = var_20_bool == var_37_int; // 0xf8 Eq
	if(var_38_bool == 0) goto Label_255; // 0xf9 JumpB
	var_39_object = Obj(); var_40_object = Obj(); // 0xfa PushV
	var_39_object = var_1_object; // 0xfb MovT
	var_40_object = var_0_object; // 0xfc MovT
	func_2488(); // 0xfd NEW_2
	
Label_255:
	var_41_int = 19755; // 0xff PushI
	var_42_bool = var_19_object == var_41_int; // 0x100 Eq
	if(var_42_bool == 0) goto Label_349; // 0x101 JumpB
	var_43_bool = 0; // 0x102 PushV
	var_43_bool = 0; // 0x103 MovB
	var_44_bool = 0; var_45_object = Obj(); // 0x104 PushV
	var_45_object = var_1_object; // 0x105 MovT
	func_2501(var_45_object); // 0x106 NEW_2
	var_52_bool = var_44_bool == 0; // 0x108 Not
	if(var_52_bool == 0) goto Label_272; // 0x109 JumpB
	var_53_bool = 0; var_54_object = Obj(); // 0x10a PushV
	var_54_object = var_1_object; // 0x10b MovT
	func_2513(var_54_object); // 0x10c NEW_2
	if(var_53_bool == 0) goto Label_272; // 0x10e JumpB
	var_43_bool = 1; // 0x10f MovB
	
Label_272:
	if(var_43_bool == 0) goto Label_303; // 0x110 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x111 PushV
	var_59_object = var_1_object; // 0x112 MovT
	var_60_object = var_0_object; // 0x113 MovT
	func_2495(); // 0x114 NEW_2
	var_63_string = ""; // 0x116 PushV
	var_63_string = "Neutral"; // 0x117 MovS
	func_203(var_20_bool, var_63_string); // 0x118 NEW_2
	var_80_int = 518663; // 0x11a PushI
	SetMessage(var_80_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_81_int = 518671; // 0x11f PushI
	var_82_int = 19764; // 0x120 PushI
	var_83_int = 19763; // 0x121 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x122 TObjFunc
	var_84_int = 518678; // 0x124 PushI
	var_85_int = 19781; // 0x125 PushI
	var_86_int = 19770; // 0x126 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x127 TObjFunc
	var_87_int = 518666; // 0x129 PushI
	var_88_int = -1; // 0x12a PushI
	var_89_int = 19758; // 0x12b PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_90_bool = 0; var_91_object = Obj(); // 0x12f PushV
	var_91_object = var_1_object; // 0x130 MovT
	func_2501(var_91_object); // 0x131 NEW_2
	var_92_bool = var_90_bool == 0; // 0x133 Not
	if(var_92_bool == 0) goto Label_329; // 0x134 JumpB
	var_93_string = ""; // 0x135 PushV
	var_93_string = "Neutral"; // 0x136 MovS
	func_203(var_20_bool, var_93_string); // 0x137 NEW_2
	var_94_int = 530807; // 0x139 PushI
	SetMessage(var_94_int); // 0x13a TObjFunc
	ClearReplies(); // 0x13c TObjFunc
	var_95_int = 530809; // 0x13e PushI
	var_96_int = -1; // 0x13f PushI
	var_97_int = 32121; // 0x140 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x141 TObjFunc
	var_98_int = 530808; // 0x143 PushI
	var_99_int = -1; // 0x144 PushI
	var_100_int = 32120; // 0x145 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x146 TObjFunc
	return 0; // 0x148 Return
	
Label_329:
	var_101_bool = 0; var_102_object = Obj(); // 0x149 PushV
	var_102_object = var_1_object; // 0x14a MovT
	func_2501(var_102_object); // 0x14b NEW_2
	if(var_101_bool == 0) goto Label_349; // 0x14d JumpB
	var_103_string = ""; // 0x14e PushV
	var_103_string = "Neutral"; // 0x14f MovS
	func_203(var_20_bool, var_103_string); // 0x150 NEW_2
	var_104_int = 524880; // 0x152 PushI
	SetMessage(var_104_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_105_int = 524881; // 0x157 PushI
	var_106_int = -1; // 0x158 PushI
	var_107_int = 26205; // 0x159 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_108_int = 19764; // 0x15d PushI
	var_109_bool = var_19_object == var_108_int; // 0x15e Eq
	if(var_109_bool == 0) goto Label_372; // 0x15f JumpB
	var_110_string = ""; // 0x160 PushV
	var_110_string = "Neutral"; // 0x161 MovS
	func_203(var_20_bool, var_110_string); // 0x162 NEW_2
	var_111_int = 518672; // 0x164 PushI
	SetMessage(var_111_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_112_int = 518673; // 0x169 PushI
	var_113_int = 19766; // 0x16a PushI
	var_114_int = 19765; // 0x16b PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x16c TObjFunc
	var_115_int = 518689; // 0x16e PushI
	var_116_int = 19771; // 0x16f PushI
	var_117_int = 19783; // 0x170 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_118_int = 19766; // 0x174 PushI
	var_119_bool = var_19_object == var_118_int; // 0x175 Eq
	if(var_119_bool == 0) goto Label_395; // 0x176 JumpB
	var_120_string = ""; // 0x177 PushV
	var_120_string = "Neutral"; // 0x178 MovS
	func_203(var_20_bool, var_120_string); // 0x179 NEW_2
	var_121_int = 518674; // 0x17b PushI
	SetMessage(var_121_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_122_int = 518675; // 0x180 PushI
	var_123_int = 19771; // 0x181 PushI
	var_124_int = 19767; // 0x182 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x183 TObjFunc
	var_125_int = 518676; // 0x185 PushI
	var_126_int = 19769; // 0x186 PushI
	var_127_int = 19768; // 0x187 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_128_int = 19769; // 0x18b PushI
	var_129_bool = var_19_object == var_128_int; // 0x18c Eq
	if(var_129_bool == 0) goto Label_413; // 0x18d JumpB
	var_130_string = ""; // 0x18e PushV
	var_130_string = "Neutral"; // 0x18f MovS
	func_203(var_20_bool, var_130_string); // 0x190 NEW_2
	var_131_int = 518677; // 0x192 PushI
	SetMessage(var_131_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_132_int = 518682; // 0x197 PushI
	var_133_int = 19775; // 0x198 PushI
	var_134_int = 19774; // 0x199 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_135_int = 19775; // 0x19d PushI
	var_136_bool = var_19_object == var_135_int; // 0x19e Eq
	if(var_136_bool == 0) goto Label_431; // 0x19f JumpB
	var_137_string = ""; // 0x1a0 PushV
	var_137_string = "Neutral"; // 0x1a1 MovS
	func_203(var_20_bool, var_137_string); // 0x1a2 NEW_2
	var_138_int = 518683; // 0x1a4 PushI
	SetMessage(var_138_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_139_int = 518684; // 0x1a9 PushI
	var_140_int = 19773; // 0x1aa PushI
	var_141_int = 19776; // 0x1ab PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_142_int = 19771; // 0x1af PushI
	var_143_bool = var_19_object == var_142_int; // 0x1b0 Eq
	if(var_143_bool == 0) goto Label_454; // 0x1b1 JumpB
	var_144_string = ""; // 0x1b2 PushV
	var_144_string = "Neutral"; // 0x1b3 MovS
	func_203(var_20_bool, var_144_string); // 0x1b4 NEW_2
	var_145_int = 518679; // 0x1b6 PushI
	SetMessage(var_145_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_146_int = 518680; // 0x1bb PushI
	var_147_int = 19773; // 0x1bc PushI
	var_148_int = 19772; // 0x1bd PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x1be TObjFunc
	var_149_int = 518690; // 0x1c0 PushI
	var_150_int = 19786; // 0x1c1 PushI
	var_151_int = 19785; // 0x1c2 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1c3 TObjFunc
	return 0; // 0x1c5 Return
	
Label_454:
	var_152_int = 19786; // 0x1c6 PushI
	var_153_bool = var_19_object == var_152_int; // 0x1c7 Eq
	if(var_153_bool == 0) goto Label_472; // 0x1c8 JumpB
	var_154_string = ""; // 0x1c9 PushV
	var_154_string = "Neutral"; // 0x1ca MovS
	func_203(var_20_bool, var_154_string); // 0x1cb NEW_2
	var_155_int = 518691; // 0x1cd PushI
	SetMessage(var_155_int); // 0x1ce TObjFunc
	ClearReplies(); // 0x1d0 TObjFunc
	var_156_int = 518692; // 0x1d2 PushI
	var_157_int = 19775; // 0x1d3 PushI
	var_158_int = 19787; // 0x1d4 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1d5 TObjFunc
	return 0; // 0x1d7 Return
	
Label_472:
	var_159_int = 19773; // 0x1d8 PushI
	var_160_bool = var_19_object == var_159_int; // 0x1d9 Eq
	if(var_160_bool == 0) goto Label_495; // 0x1da JumpB
	var_161_string = ""; // 0x1db PushV
	var_161_string = "Neutral"; // 0x1dc MovS
	func_203(var_20_bool, var_161_string); // 0x1dd NEW_2
	var_162_int = 518681; // 0x1df PushI
	SetMessage(var_162_int); // 0x1e0 TObjFunc
	ClearReplies(); // 0x1e2 TObjFunc
	var_163_int = 518685; // 0x1e4 PushI
	var_164_int = 19779; // 0x1e5 PushI
	var_165_int = 19778; // 0x1e6 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x1e7 TObjFunc
	var_166_int = 518693; // 0x1e9 PushI
	var_167_int = 19790; // 0x1ea PushI
	var_168_int = 19789; // 0x1eb PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1ec TObjFunc
	return 0; // 0x1ee Return
	
Label_495:
	var_169_int = 19779; // 0x1ef PushI
	var_170_bool = var_19_object == var_169_int; // 0x1f0 Eq
	if(var_170_bool == 0) goto Label_513; // 0x1f1 JumpB
	var_171_string = ""; // 0x1f2 PushV
	var_171_string = "Neutral"; // 0x1f3 MovS
	func_203(var_20_bool, var_171_string); // 0x1f4 NEW_2
	var_172_int = 518686; // 0x1f6 PushI
	SetMessage(var_172_int); // 0x1f7 TObjFunc
	ClearReplies(); // 0x1f9 TObjFunc
	var_173_int = 518687; // 0x1fb PushI
	var_174_int = 19781; // 0x1fc PushI
	var_175_int = 19780; // 0x1fd PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x1fe TObjFunc
	return 0; // 0x200 Return
	
Label_513:
	var_176_int = 19781; // 0x201 PushI
	var_177_bool = var_19_object == var_176_int; // 0x202 Eq
	if(var_177_bool == 0) goto Label_536; // 0x203 JumpB
	var_178_string = ""; // 0x204 PushV
	var_178_string = "Neutral"; // 0x205 MovS
	func_203(var_20_bool, var_178_string); // 0x206 NEW_2
	var_179_int = 518688; // 0x208 PushI
	SetMessage(var_179_int); // 0x209 TObjFunc
	ClearReplies(); // 0x20b TObjFunc
	var_180_int = 518664; // 0x20d PushI
	var_181_int = -1; // 0x20e PushI
	var_182_int = 19756; // 0x20f PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x210 TObjFunc
	var_183_int = 518697; // 0x212 PushI
	var_184_int = 19794; // 0x213 PushI
	var_185_int = 19793; // 0x214 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x215 TObjFunc
	return 0; // 0x217 Return
	
Label_536:
	var_186_int = 19794; // 0x218 PushI
	var_187_bool = var_19_object == var_186_int; // 0x219 Eq
	if(var_187_bool == 0) goto Label_559; // 0x21a JumpB
	var_188_string = ""; // 0x21b PushV
	var_188_string = "Neutral"; // 0x21c MovS
	func_203(var_20_bool, var_188_string); // 0x21d NEW_2
	var_189_int = 518698; // 0x21f PushI
	SetMessage(var_189_int); // 0x220 TObjFunc
	ClearReplies(); // 0x222 TObjFunc
	var_190_int = 518699; // 0x224 PushI
	var_191_int = -1; // 0x225 PushI
	var_192_int = 19795; // 0x226 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x227 TObjFunc
	var_193_int = 518700; // 0x229 PushI
	var_194_int = 19790; // 0x22a PushI
	var_195_int = 19796; // 0x22b PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_196_int = 19790; // 0x22f PushI
	var_197_bool = var_19_object == var_196_int; // 0x230 Eq
	if(var_197_bool == 0) goto Label_582; // 0x231 JumpB
	var_198_string = ""; // 0x232 PushV
	var_198_string = "Neutral"; // 0x233 MovS
	func_203(var_20_bool, var_198_string); // 0x234 NEW_2
	var_199_int = 518694; // 0x236 PushI
	SetMessage(var_199_int); // 0x237 TObjFunc
	ClearReplies(); // 0x239 TObjFunc
	var_200_int = 518695; // 0x23b PushI
	var_201_int = -1; // 0x23c PushI
	var_202_int = 19791; // 0x23d PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x23e TObjFunc
	var_203_int = 518696; // 0x240 PushI
	var_204_int = -1; // 0x241 PushI
	var_205_int = 19792; // 0x242 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x243 TObjFunc
	return 0; // 0x245 Return
	
Label_582:
	var_3_string = 1; // 0x246 TMovB
	var_206_bool = 0; // 0x247 PushV
	func_2593(var_206_bool); // 0x248 NEW_2
	if(var_206_bool == 0) goto Label_590; // 0x24a JumpB
	lshStopAnimation(); // 0x24b Func
	goto Label_592; // 0x24d Jump
	
Label_592:
	return 0; // 0x250 Return
	
Label_590:
	StopAnimation(); // 0x24e Func
	
Label_594:
	return 0; // 0x252 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_701(var_18_object, var_19_bool); // 0x25f NEW_2
	var_23_int = 0; var_24_object = Obj(); // 0x261 PushV
	var_24_object = var_19_bool; // 0x262 Mov
	TaskCall(0); // 0x263 TaskCall
	func_0(var_25_object, var_23_int, var_24_object); // 0x264 NEW_2
	TaskReturn(); // 0x265 TaskReturn
	return 0; // 0x267 Return
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; var_22_string = ""; // 0x269 PushV
	var_21_string = "quest_b5_01"; // 0x26a MovS
	var_22_string = "butcher_attack"; // 0x26b MovS
	func_2456(var_20_bool, var_21_string, var_22_string); // 0x26c NEW_2
	return 0; // 0x26e Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = "attack"; // 0x270 PushS
	var_21_bool = var_19_bool == var_20_string; // 0x271 Eq
	if(var_21_bool == 0) goto Label_635; // 0x272 JumpB
	func_701(var_18_object, var_19_bool); // 0x274 NEW_2
	TaskCall(3); // 0x277 TaskCall
	func_801(); // 0x278 NEW_2
	TaskReturn(); // 0x279 TaskReturn
	
Label_635:
	return 0; // 0x27b Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 10; // 0x2a7 PushI
	var_21_bool = var_19_bool == var_20_int; // 0x2a8 Eq
	if(var_21_bool == 0) goto Label_700; // 0x2a9 JumpB
	var_22_bool = 0; // 0x2aa PushV
	func_663(var_17_bool, var_18_object, var_19_bool, var_22_bool); // 0x2ab NEW_2
	if(var_22_bool == 0) goto Label_694; // 0x2ad JumpB
	var_35_bool = var_2_object == 0; // 0x2ae Not
	if(var_35_bool == 0) goto Label_693; // 0x2af JumpB
	var_36_object = Obj(); // 0x2b0 PushV
	var_36_object = var_4_bool; // 0x2b1 MovT
	func_2341(var_36_object); // 0x2b2 NEW_2
	var_2_object = 1; // 0x2b4 TMovB
	
Label_693:
	goto Label_700; // 0x2b5 Jump
	
Label_700:
	return 0; // 0x2bc Return
	
Label_694:
	var_43_object = var_2_object; // 0x2b6 PushT
	if(var_43_object == 0) goto Label_700; // 0x2b7 JumpB
	var_44_string = "head"; // 0x2b8 PushS
	UnlookAsync(var_44_string); // 0x2b9 Func
	var_2_object = 0; // 0x2bb TMovB
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x607 PushI
	var_21_bool = var_19_int == var_20_int; // 0x608 Eq
	if(var_21_bool == 0) goto Label_1551; // 0x609 JumpB
	var_22_object = Obj(); // 0x60a PushV
	var_22_object = var_1_object; // 0x60b MovT
	func_2468(var_22_object); // 0x60c NEW_2
	goto Label_1555; // 0x60e Jump
	
Label_1555:
	return 0; // 0x613 Return
	
Label_1551:
	var_27_int = 0; // 0x60f PushV
	var_27_int = var_19_int; // 0x610 Mov
	func_1700(var_18_bool, var_19_int, var_27_int); // 0x611 NEW_2
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x622 PushV
	var_20_bool = 0; // 0x623 MovB
	var_21_bool = var_1_object == var_19_object; // 0x624 Eq
	if(var_21_bool == 0) goto Label_1577; // 0x625 JumpB
	var_22_bool = var_2_object == 0; // 0x626 Not
	if(var_22_bool == 0) goto Label_1577; // 0x627 JumpB
	var_20_bool = 1; // 0x628 MovB
	
Label_1577:
	if(var_20_bool == 0) goto Label_1583; // 0x629 JumpB
	var_2_object = 1; // 0x62a TMovB
	var_23_object = Obj(); // 0x62b PushV
	var_23_object = var_19_object; // 0x62c Mov
	func_2341(var_23_object); // 0x62d NEW_2
	
Label_1583:
	return 0; // 0x62f Return
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x631 PushV
	var_20_bool = 0; // 0x632 MovB
	var_21_bool = var_1_object == var_19_object; // 0x633 Eq
	if(var_21_bool == 0) goto Label_1592; // 0x634 JumpB
	var_22_object = var_2_object; // 0x635 PushT
	if(var_22_object == 0) goto Label_1592; // 0x636 JumpB
	var_20_bool = 1; // 0x637 MovB
	
Label_1592:
	if(var_20_bool == 0) goto Label_1597; // 0x638 JumpB
	var_2_object = 0; // 0x639 TMovB
	var_23_string = "head"; // 0x63a PushS
	UnlookAsync(var_23_string); // 0x63b Func
	
Label_1597:
	return 0; // 0x63d Return
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x6b7 Func
	return 0; // 0x6b9 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_1556(var_19_object); // 0x6c3 NEW_2
	var_24_object = Obj(); // 0x6c5 PushV
	var_24_object = var_19_object; // 0x6c6 Mov
	func_2642(); // 0x6c7 NEW_2
	return 0; // 0x6c9 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x6e4 PushV
	IsOverrideActive(var_21_bool); // 0x6e5 Func
	var_22_bool = var_21_bool == 0; // 0x6e7 Not
	if(var_22_bool == 0) goto Label_1773; // 0x6e8 JumpB
	var_23_object = Obj(); // 0x6e9 PushV
	var_23_object = var_19_object; // 0x6ea Mov
	func_2548(var_23_object); // 0x6eb NEW_2
	
Label_1773:
	return 2; // 0x6ed Return
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	return 0; // 0x764 Return
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	return 0; // 0x766 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	return 0; // 0x768 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0xa34 PushV
	var_23_object = var_19_object; // 0xa35 Mov
	var_24_int = var_20_int; // 0xa36 Mov
	var_25_float = var_21_float; // 0xa37 Mov
	func_2125(var_23_object, var_24_int, var_25_float); // 0xa38 NEW_2
	return 0; // 0xa3a Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0xa3c PushV
	var_25_object = var_19_object; // 0xa3d Mov
	var_26_int = var_20_int; // 0xa3e Mov
	var_27_float = var_21_float; // 0xa3f Mov
	var_28_cvector = var_23_cvector; // 0xa40 Mov
	var_29_cvector = var_24_cvector; // 0xa41 Mov
	func_2193(var_27_float, var_28_cvector, var_29_cvector); // 0xa42 NEW_2
	return 0; // 0xa44 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0xa45 PushV
	var_23_string = "health"; // 0xa46 PushS
	var_24_bool = var_20_string == var_23_string; // 0xa47 Eq
	if(var_24_bool == 0) goto Label_2641; // 0xa48 JumpB
	var_25_string = "health"; // 0xa49 PushS
	GetProperty(var_25_string, var_22_float); // 0xa4a Func
	var_26_int = 0; // 0xa4c PushI
	var_27_bool = var_22_float <= var_26_int; // 0xa4d LE
	if(var_27_bool == 0) goto Label_2641; // 0xa4e JumpB
	SignalDeath(var_19_object); // 0xa4f Func
	
Label_2641:
	return 2; // 0xa51 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0xa53 PushV
	var_20_object = var_19_object; // 0xa54 Mov
	func_2595(var_20_object); // 0xa55 NEW_2
	return 0; // 0xa57 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	
Label_595:
	var_19_int = 3; // 0x253 PushI
	Sleep(var_19_int); // 0x254 Func
	var_20_float = 0; var_21_float = 0; // 0x256 PushV
	var_20_float = 300; // 0x257 MovI
	var_21_float = 100; // 0x258 MovI
	func_636(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_20_float, var_21_float); // 0x259 NEW_2
	goto Label_595; // 0x25b Jump
}


func_0(var_0_object, var_23_int, var_24_object)
{
	var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0; var_30_object = Obj(); var_31_bool = 0; var_32_int = 0; var_33_bool = 0; // 0x0 PushV
	var_0_object = var_24_object; // 0x1 TMov
	var_34_bool = 0; var_35_object = Obj(); var_36_float = 0; // 0x2 PushV
	var_35_object = var_24_object; // 0x3 Mov
	var_36_float = 70.0; // 0x4 MovF
	func_2223(var_35_object, var_36_float); // 0x5 NEW_2
	var_81_bool = var_34_bool == 0; // 0x7 Not
	if(var_81_bool == 0) goto Label_11; // 0x8 JumpB
	var_23_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_30_object); // 0xb Func
	var_82_int = 0; // 0xd PushV
	func_2587(var_82_int); // 0xe NEW_2
	SetNPCName(var_82_int); // 0x10 ObjFunc
	var_83_int = 0; // 0x12 PushV
	func_2585(var_83_int); // 0x13 NEW_2
	SetNPCDescription(var_83_int); // 0x15 ObjFunc
	var_84_string = ""; // 0x17 PushV
	func_2589(var_84_string); // 0x18 NEW_2
	SetPhoto(var_84_string); // 0x1a ObjFunc
	var_85_string = ""; // 0x1c PushV
	func_2591(var_85_string); // 0x1d NEW_2
	SetPhoto2(var_85_string); // 0x1f ObjFunc
	var_86_int = 0; // 0x21 PushV
	func_2525(var_86_int); // 0x22 NEW_2
	SetPlayerName(var_86_int); // 0x24 ObjFunc
	var_32_int = -1; // 0x26 MovI
	IsOverrideActive(var_31_bool); // 0x27 Func
	var_94_bool = var_31_bool; // 0x29 Push
	if(var_94_bool == 0) goto Label_45; // 0x2a JumpB
	var_23_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_30_object); // 0x2d Func
	var_95_object = Obj(); var_96_object = Obj(); // 0x2f PushV
	var_95_object = var_24_object; // 0x30 Mov
	var_96_object = var_30_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_97_object, var_98_object, var_99_string, var_100_bool, var_95_object, var_96_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_33_bool); // 0x36 ObjFunc
	
Label_56:
	var_185_bool = var_33_bool == 0; // 0x38 Not
	if(var_185_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_33_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_186_object = Obj(); // 0x3f PushV
	var_186_object = var_24_object; // 0x40 Mov
	func_2292(); // 0x41 NEW_2
	StopDialog(var_30_object); // 0x43 Func
	GetReturnValue(var_32_int); // 0x45 ObjFunc
	var_23_int = var_32_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2561(var_51_string, var_52_int)
{
	var_53_string = ""; var_54_string = ""; // 0xa01 PushV
	var_54_string = "idle"; // 0xa02 MovS
	var_55_int = var_52_int; // 0xa03 Push
	if(var_55_int == 0) goto Label_2566; // 0xa04 JumpB
	var_54_string = var_54_string + var_52_int; // 0xa05 Add2
	
Label_2566:
	var_51_string = var_54_string; // 0xa06 Mov
	return 2; // 0xa07 Return
}


func_2310(var_151_string)
{
	var_152_bool = 0; var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_float = 0; var_157_float = 0; // 0x906 PushV
	lshHasAnimation(var_155_bool, var_151_string); // 0x907 Func
	var_158_bool = var_155_bool; // 0x909 Push
	if(var_158_bool == 0) goto Label_2321; // 0x90a JumpB
	lshGetAnimTimes(var_151_string, var_156_float, var_157_float); // 0x90b Func
	var_159_bool = 0; // 0x90d PushB
	lshPlayAnimation(var_156_float, var_157_float, var_159_bool); // 0x90e Func
	goto Label_2325; // 0x910 Jump
	
Label_2325:
	return 6; // 0x915 Return
	
Label_2321:
	var_160_string = "Can't find lsh animation : "; // 0x911 PushS
	var_161_int = var_160_string + var_151_string; // 0x912 Add
	Trace(var_161_int); // 0x913 Func
}


func_2568(var_45_int)
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0xa08 PushV
	var_48_int = 0; // 0xa09 MovI
	
Label_2570:
	var_50_string = "all"; // 0xa0a PushS
	var_51_string = ""; var_52_int = 0; // 0xa0b PushV
	var_52_int = var_48_int; // 0xa0c Mov
	func_2561(var_51_string, var_52_int); // 0xa0d NEW_2
	HasAnimation(var_49_bool, var_50_string, var_51_string); // 0xa0f Func
	var_56_bool = var_49_bool == 0; // 0xa11 Not
	if(var_56_bool == 0) goto Label_2580; // 0xa12 JumpB
	goto Label_2583; // 0xa13 Jump
	
Label_2583:
	var_45_int = var_48_int; // 0xa17 Mov
	return 4; // 0xa18 Return
	
Label_2580:
	var_57_int = 1; // 0xa14 PushI
	var_48_int = var_48_int + var_57_int; // 0xa15 Add2
	goto Label_2570; // 0xa16 Jump
}


func_2057(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x809 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x80a PushV
	var_37_object = var_33_object; // 0x80b Mov
	func_2021(var_36_bool, var_37_object); // 0x80c NEW_2
	var_53_bool = var_36_bool == 0; // 0x80e Not
	if(var_53_bool == 0) goto Label_2066; // 0x80f JumpB
	var_32_bool = 0; // 0x810 MovB
	return 2; // 0x811 Return
	
Label_2066:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x812 PushV
	var_55_object = var_33_object; // 0x813 Mov
	var_56_string = "noaccess"; // 0x814 MovS
	func_1931(var_54_bool, var_55_object, var_56_string); // 0x815 NEW_2
	var_63_bool = var_54_bool == 0; // 0x817 Not
	if(var_63_bool == 0) goto Label_2075; // 0x818 JumpB
	var_32_bool = 1; // 0x819 MovB
	return 2; // 0x81a Return
	
Label_2075:
	var_64_string = "noaccess"; // 0x81b PushS
	GetProperty(var_64_string, var_35_int); // 0x81c ObjFunc
	var_65_int = 0; // 0x81e PushI
	var_32_bool = var_35_int == var_65_int; // 0x81f Eq2
	return 2; // 0x820 Return
}


func_1298(var_0_object, var_297_bool, var_298_float)
{
	var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_bool = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; // 0x512 PushV
	
Label_1299:
	IsAnimationPlaying(var_304_bool); // 0x513 Func
	var_309_bool = var_304_bool == 0; // 0x515 Not
	if(var_309_bool == 0) goto Label_1304; // 0x516 JumpB
	goto Label_1336; // 0x517 Jump
	
Label_1336:
	func_1473(var_308_float); // 0x539 NEW_2
	var_297_bool = 0; // 0x53b MovB
	return 10; // 0x53c Return
	
Label_1304:
	var_310_bool = 0; // 0x518 PushV
	func_1369(var_310_bool); // 0x519 NEW_2
	if(var_310_bool == 0) goto Label_1310; // 0x51b JumpB
	var_297_bool = 1; // 0x51c MovB
	return 10; // 0x51d Return
	
Label_1310:
	var_353_bool = 0; var_354_object = Obj(); // 0x51e PushV
	var_354_object = var_0_object; // 0x51f MovT
	func_2057(var_353_bool, var_354_object); // 0x520 NEW_2
	var_355_bool = var_353_bool == 0; // 0x522 Not
	if(var_355_bool == 0) goto Label_1318; // 0x523 JumpB
	var_297_bool = 0; // 0x524 MovB
	return 10; // 0x525 Return
	
Label_1318:
	GetPFPosition(var_305_cvector); // 0x526 TObjFunc
	GetPFPosition(var_306_cvector); // 0x528 Func
	var_307_cvector = var_305_cvector - var_306_cvector; // 0x52a Sub2
	var_308_float = var_307_cvector | var_307_cvector; // 0x52b Or2
	var_356_float = var_298_float * var_298_float; // 0x52c Mult
	var_357_bool = var_308_float < var_356_float; // 0x52d LT
	if(var_357_bool == 0) goto Label_1333; // 0x52e JumpB
	var_358_bool = 0; var_359_float = 0; // 0x52f PushV
	var_359_float = var_298_float; // 0x530 Mov
	func_1134(var_308_float, var_358_bool, var_359_float); // 0x531 NEW_2
	var_297_bool = 1; // 0x533 MovB
	return 10; // 0x534 Return
	
Label_1333:
	sync(); // 0x535 Func
	goto Label_1299; // 0x537 Jump
}


func_1556(var_2_object)
{
	var_20_int = 1; // 0x614 PushI
	KillTimer(var_20_int); // 0x615 Func
	var_21_object = var_2_object; // 0x617 PushT
	if(var_21_object == 0) goto Label_1565; // 0x618 JumpB
	var_2_object = 0; // 0x619 TMovB
	var_22_string = "head"; // 0x61a PushS
	UnlookAsync(var_22_string); // 0x61b Func
	
Label_1565:
	func_1722(var_19_object); // 0x61e NEW_2
	return 0; // 0x620 Return
}


func_2326(var_126_string, var_127_bool)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x916 PushV
	lshHasAnimation(var_133_bool, var_126_string); // 0x917 Func
	var_136_bool = var_133_bool; // 0x919 Push
	if(var_136_bool == 0) goto Label_2336; // 0x91a JumpB
	lshGetAnimTimes(var_126_string, var_134_float, var_135_float); // 0x91b Func
	lshPlayAnimation(var_134_float, var_135_float, var_127_bool); // 0x91d Func
	goto Label_2340; // 0x91f Jump
	
Label_2340:
	return 6; // 0x924 Return
	
Label_2336:
	var_137_string = "Can't find lsh animation : "; // 0x920 PushS
	var_138_int = var_137_string + var_126_string; // 0x921 Add
	Trace(var_138_int); // 0x922 Func
}


func_2585(var_83_int)
{
	var_83_int = 515562; // 0xa19 MovI
	return 0; // 0xa1a Return
}


func_794(var_70_bool)
{
	var_70_bool = 1; // 0x31a MovB
	return 0; // 0x31b Return
}


func_2587(var_82_int)
{
	var_82_int = 503347; // 0xa1b MovI
	return 0; // 0xa1c Return
}


func_796()
{
	StopAnimation(); // 0x31c Func
	StopGroup0(); // 0x31e Func
	return 0; // 0x320 Return
}


func_2589(var_84_string)
{
	var_84_string = "ui/NPC_Citizen1.png"; // 0xa1d MovS
	return 0; // 0xa1e Return
}


func_2591(var_85_string)
{
	var_85_string = "ui/NPC_Citizen1_b.png"; // 0xa1f MovS
	return 0; // 0xa20 Return
}


func_2593(var_77_bool)
{
	var_77_bool = 0; // 0xa21 MovB
	return 0; // 0xa22 Return
}


func_2081(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x821 PushV
	var_51_bool = var_36_object == 0; // 0x822 NullEq
	if(var_51_bool == 0) goto Label_2085; // 0x823 JumpB
	return 14; // 0x824 Return
	
Label_2085:
	IsDead(var_44_bool); // 0x825 Func
	var_52_bool = var_44_bool; // 0x827 Push
	if(var_52_bool == 0) goto Label_2090; // 0x828 JumpB
	return 14; // 0x829 Return
	
Label_2090:
	GetSecondaryAnimationType(var_45_int); // 0x82a Func
	var_53_int = 0; // 0x82c PushI
	var_54_bool = var_45_int < var_53_int; // 0x82d LT
	if(var_54_bool == 0) goto Label_2096; // 0x82e JumpB
	return 14; // 0x82f Return
	
Label_2096:
	GetPosition(var_46_cvector); // 0x830 ObjFunc
	GetPosition(var_47_cvector); // 0x832 Func
	GetDirection(var_48_cvector); // 0x834 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x836 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x837 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x838 PushE
	var_57_float = var_55_float * var_56_float; // 0x839 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x83a PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x83b PushE
	var_60_float = var_58_float * var_59_float; // 0x83c Mult
	var_61_int = var_57_float + var_60_float; // 0x83d Add
	var_62_int = 0; // 0x83e PushI
	var_63_bool = var_61_int >= var_62_int; // 0x83f GE
	if(var_63_bool == 0) goto Label_2115; // 0x840 JumpB
	var_50_string = "fhit"; // 0x841 MovS
	goto Label_2116; // 0x842 Jump
	
Label_2116:
	var_64_string = "hit_react"; // 0x844 PushS
	var_65_string = "1"; // 0x845 PushS
	var_66_int = var_50_string + var_65_string; // 0x846 Add
	var_67_string = "2"; // 0x847 PushS
	var_68_int = var_50_string + var_67_string; // 0x848 Add
	var_69_int = -10; // 0x849 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x84a Func
	return 14; // 0x84c Return
	
Label_2115:
	var_50_string = "bhit"; // 0x843 MovS
}


func_2595(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0xa23 PushV
	GetScene(var_22_object); // 0xa24 Func
	var_23_object = Obj(); // 0xa26 PushV
	func_2400(var_23_object); // 0xa27 NEW_2
	RemoveStationaryActor(var_23_object); // 0xa29 ObjFunc
	var_26_object = Obj(); // 0xa2b PushV
	var_26_object = var_20_object; // 0xa2c Mov
	TaskCall(5); // 0xa2d TaskCall
	func_1749(var_26_object); // 0xa2e NEW_2
	TaskReturn(); // 0xa2f TaskReturn
	return 2; // 0xa31 Return
}


func_1060(var_1_object, var_2_object, var_4_bool)
{
	var_64_bool = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_bool = 0; var_69_cvector = CVector(0,0,0); // 0x424 PushV
	var_1_object = 0; // 0x425 TMovI
	
Label_1062:
	var_70_string = "all"; // 0x426 PushS
	var_71_string = "attack_begin"; // 0x427 PushS
	var_72_int = 1; // 0x428 PushI
	var_73_int = var_1_object + var_72_int; // 0x429 Add
	var_74_int = var_71_string + var_73_int; // 0x42a Add
	HasAnimation(var_67_bool, var_70_string, var_74_int); // 0x42b Func
	var_75_bool = var_67_bool == 0; // 0x42d Not
	if(var_75_bool == 0) goto Label_1072; // 0x42e JumpB
	goto Label_1075; // 0x42f Jump
	
Label_1075:
	var_2_object = 0; // 0x433 TMovI
	
Label_1076:
	var_76_string = "attack"; // 0x434 PushS
	var_77_int = 1; // 0x435 PushI
	var_78_int = var_2_object + var_77_int; // 0x436 Add
	var_79_int = var_76_string + var_78_int; // 0x437 Add
	IsExisting3DSound(var_68_bool, var_79_int); // 0x438 Func
	var_80_bool = var_68_bool == 0; // 0x43a Not
	if(var_80_bool == 0) goto Label_1085; // 0x43b JumpB
	goto Label_1088; // 0x43c Jump
	
Label_1088:
	var_81_string = "all"; // 0x440 PushS
	var_82_string = "bjump"; // 0x441 PushS
	GetAnimationOffset(var_69_cvector, var_81_string, var_82_string); // 0x442 Func
	var_83_float = GetByIndex(var_69_cvector, 2); // 0x444 PushE
	var_4_bool = -var_83_float; // 0x445 Neg2
	return 6; // 0x446 Return
	
Label_1085:
	var_84_int = 1; // 0x43d PushI
	var_2_object = var_2_object + var_84_int; // 0x43e Add2
	goto Label_1076; // 0x43f Jump
	
Label_1072:
	var_85_int = 1; // 0x430 PushI
	var_1_object = var_1_object + var_85_int; // 0x431 Add2
	goto Label_1062; // 0x432 Jump
}


func_801()
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x321 PushV
	GetScene(var_33_object); // 0x322 Func
	var_35_object = Obj(); // 0x324 PushV
	func_2400(var_35_object); // 0x325 NEW_2
	RemoveStationaryActor(var_35_object); // 0x327 ObjFunc
	var_38_string = "player"; // 0x329 PushS
	FindActor(var_34_object, var_38_string); // 0x32a Func
	
Label_812:
	var_39_object = Obj(); var_40_bool = 0; var_41_float = 0; // 0x32c PushV
	var_39_object = var_34_object; // 0x32d Mov
	var_40_bool = 1; // 0x32e MovB
	var_41_float = 180.0; // 0x32f MovF
	func_831(var_30_int, var_31_object, var_32_object, var_33_object, var_34_object, var_39_object, var_40_bool, var_41_float); // 0x330 NEW_2
	var_532_int = 1; // 0x332 PushI
	Sleep(var_532_int); // 0x333 Func
	goto Label_812; // 0x335 Jump
}


func_2341(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x925 PushV
	GetEyesHeight(var_26_float); // 0x926 ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x928 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x929 PushE
	var_28_float = var_26_float; // 0x92a Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x92b PopE
	var_29_string = "head"; // 0x92c PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x92d Func
	return 4; // 0x92f Return
}


func_2352()
{
	var_22_bool = 0; // 0x930 PushV
	func_2593(var_22_bool); // 0x931 NEW_2
	if(var_22_bool == 0) goto Label_2358; // 0x933 JumpB
	lshStopSpeech(); // 0x934 Func
	
Label_2358:
	return 0; // 0x936 Return
}


func_2359(var_50_string)
{
	var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); // 0x937 PushV
	IsExisting3DSound(var_59_bool, var_50_string); // 0x938 Func
	var_67_bool = var_59_bool == 0; // 0x93a Not
	if(var_67_bool == 0) goto Label_2384; // 0x93b JumpB
	var_60_int = 0; // 0x93c MovI
	
Label_2365:
	var_68_int = 1; // 0x93d PushI
	var_69_int = var_60_int + var_68_int; // 0x93e Add
	var_70_int = var_50_string + var_69_int; // 0x93f Add
	IsExisting3DSound(var_61_bool, var_70_int); // 0x940 Func
	var_71_bool = var_61_bool == 0; // 0x942 Not
	if(var_71_bool == 0) goto Label_2373; // 0x943 JumpB
	goto Label_2376; // 0x944 Jump
	
Label_2376:
	var_72_bool = var_60_int == 0; // 0x948 Not
	if(var_72_bool == 0) goto Label_2379; // 0x949 JumpB
	return 16; // 0x94a Return
	
Label_2379:
	irand(var_62_int, var_60_int); // 0x94b Func
	var_73_int = 1; // 0x94d PushI
	var_74_int = var_62_int + var_73_int; // 0x94e Add
	var_50_string = var_50_string + var_74_int; // 0x94f Add2
	
Label_2384:
	Is3DSoundLoaded(var_63_bool, var_50_string); // 0x950 Func
	var_75_bool = var_63_bool; // 0x952 Push
	if(var_75_bool == 0) goto Label_2399; // 0x953 JumpB
	GetEyesHeight(var_64_float); // 0x954 Func
	GetDirection(var_65_cvector); // 0x956 Func
	var_76_int = 50; // 0x958 PushI
	var_66_cvector = var_65_cvector * var_76_int; // 0x959 Mult2
	var_77_float = GetByIndex(var_66_cvector, 1); // 0x95a PushE
	var_77_float = var_77_float + var_64_float; // 0x95b Add2
	SetByIndex(var_66_cvector, 1) = var_77_float; // 0x95c PopE
	PlayGlobalSound(var_50_string, var_66_cvector); // 0x95d Func
	
Label_2399:
	return 16; // 0x95f Return
	
Label_2373:
	var_78_int = 1; // 0x945 PushI
	var_60_int = var_60_int + var_78_int; // 0x946 Add2
	goto Label_2365; // 0x947 Jump
}


func_825(var_406_float)
{
	var_406_float = 0.1; // 0x33a MovF
	return 0; // 0x33b Return
}


func_828(var_413_int)
{
	var_413_int = 0; // 0x33d MovI
	return 0; // 0x33e Return
}


func_1341(var_0_object, var_312_bool)
{
	var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_float = 0; var_322_float = 0; // 0x53d PushV
	var_323_bool = 0; var_324_object = Obj(); // 0x53e PushV
	var_324_object = var_0_object; // 0x53f MovT
	func_2057(var_323_bool, var_324_object); // 0x540 NEW_2
	var_325_bool = var_323_bool == 0; // 0x542 Not
	if(var_325_bool == 0) goto Label_1350; // 0x543 JumpB
	var_312_bool = 0; // 0x544 MovB
	return 10; // 0x545 Return
	
Label_1350:
	var_326_bool = 0; // 0x546 PushV
	func_1430(var_322_float, var_326_bool); // 0x547 NEW_2
	if(var_326_bool == 0) goto Label_1367; // 0x549 JumpB
	GetPFPosition(var_318_cvector); // 0x54a TObjFunc
	GetPFPosition(var_319_cvector); // 0x54c Func
	var_320_cvector = var_318_cvector - var_319_cvector; // 0x54e Sub2
	var_321_float = var_320_cvector | var_320_cvector; // 0x54f Or2
	GetAttackDistance(var_322_float); // 0x550 TObjFunc
	var_327_int = 50; // 0x552 PushI
	var_322_float = var_322_float + var_327_int; // 0x553 Add2
	var_328_float = var_322_float * var_322_float; // 0x554 Mult
	var_312_bool = var_321_float <= var_328_float; // 0x555 LE2
	return 10; // 0x556 Return
	
Label_1367:
	var_312_bool = 0; // 0x557 MovB
	return 10; // 0x558 Return
}


func_1598(var_0_object, var_1_object, var_169_bool, var_170_object, var_171_float, var_172_float, var_173_bool, var_174_bool)
{
	var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj(); var_183_bool = 0; var_184_bool = 0; var_185_object = Obj(); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); // 0x63e PushV
	var_0_object = 0; // 0x63f TMovB
	var_1_object = var_170_object; // 0x640 TMov
	var_184_bool = var_174_bool; // 0x641 Mov
	
Label_1602:
	var_191_bool = 0; var_192_object = Obj(); // 0x642 PushV
	var_192_object = var_170_object; // 0x643 Mov
	func_1738(var_191_bool, var_192_object); // 0x644 NEW_2
	var_195_bool = var_191_bool == 0; // 0x646 Not
	if(var_195_bool == 0) goto Label_1610; // 0x647 JumpB
	var_169_bool = 0; // 0x648 MovB
	return 16; // 0x649 Return
	
Label_1610:
	GetPosition(var_186_cvector); // 0x64a ObjFunc
	GetPosition(var_187_cvector); // 0x64c Func
	var_188_cvector = var_186_cvector - var_187_cvector; // 0x64e Sub2
	var_189_float = var_188_cvector | var_188_cvector; // 0x64f Or2
	var_196_bool = 0; // 0x650 PushV
	var_196_bool = 0; // 0x651 MovB
	var_197_int = 0; // 0x652 PushI
	var_198_bool = var_172_float > var_197_int; // 0x653 GT
	if(var_198_bool == 0) goto Label_1625; // 0x654 JumpB
	var_199_float = var_172_float * var_172_float; // 0x655 Mult
	var_200_bool = var_189_float > var_199_float; // 0x656 GT
	if(var_200_bool == 0) goto Label_1625; // 0x657 JumpB
	var_196_bool = 1; // 0x658 MovB
	
Label_1625:
	if(var_196_bool == 0) goto Label_1630; // 0x659 JumpB
	Stop(); // 0x65a Func
	var_169_bool = 0; // 0x65c MovB
	return 16; // 0x65d Return
	
Label_1630:
	var_201_float = var_171_float * var_171_float; // 0x65e Mult
	var_202_bool = var_189_float > var_201_float; // 0x65f GT
	if(var_202_bool == 0) goto Label_1692; // 0x660 JumpB
	GetPFPosition(var_186_cvector); // 0x661 ObjFunc
	FindPathTo(var_190_object, var_186_cvector); // 0x663 Func
	var_203_bool = var_190_object != 0; // 0x665 NullNeq
	if(var_203_bool == 0) goto Label_1641; // 0x666 JumpB
	var_185_object = var_190_object; // 0x667 Mov
	var_190_object = 0; // 0x668 SetNull
	
Label_1641:
	var_204_bool = var_185_object != 0; // 0x669 NullNeq
	if(var_204_bool == 0) goto Label_1674; // 0x66a JumpB
	var_205_bool = var_184_bool; // 0x66b Push
	if(var_205_bool == 0) goto Label_1651; // 0x66c JumpB
	var_184_bool = 0; // 0x66d MovB
	RotatePath(var_185_object, var_183_bool); // 0x66e Func
	var_206_bool = var_183_bool == 0; // 0x670 Not
	if(var_206_bool == 0) goto Label_1651; // 0x671 JumpB
	goto Label_1698; // 0x672 Jump
	
Label_1698:
	var_169_bool = !var_0_object; // 0x6a2 Not2
	return 16; // 0x6a3 Return
	
Label_1651:
	var_207_int = 0; // 0x673 PushI
	var_208_float = 0.3; // 0x674 PushF
	SetTimer(var_207_int, var_208_float); // 0x675 Func
	var_209_string = ""; // 0x677 PushV
	func_1745(var_209_string); // 0x678 NEW_2
	var_210_string = ""; // 0x67a PushV
	func_1747(var_210_string); // 0x67b NEW_2
	FollowPath(var_185_object, var_173_bool, var_183_bool, var_209_string, var_210_string); // 0x67d Func
	var_211_bool = var_183_bool == 0; // 0x67f Not
	if(var_211_bool == 0) goto Label_1672; // 0x680 JumpB
	var_212_object = var_0_object; // 0x681 PushT
	if(var_212_object == 0) goto Label_1670; // 0x682 JumpB
	var_185_object = 0; // 0x683 SetNull
	goto Label_1698; // 0x684 Jump
	
Label_1670:
	goto Label_1697; // 0x686 Jump
	
Label_1697:
	goto Label_1602; // 0x6a1 Jump
	
Label_1672:
	var_185_object = 0; // 0x688 SetNull
	goto Label_1690; // 0x689 Jump
	
Label_1690:
	var_190_object = 0; // 0x69a SetNull
	goto Label_1696; // 0x69b Jump
	
Label_1696:
	var_185_object = 0; // 0x6a0 SetNull
	
Label_1674:
	var_213_int = 0; // 0x68a PushI
	KillTimer(var_213_int); // 0x68b Func
	var_214_float = 0.5; // 0x68d PushF
	Sleep(var_214_float, var_183_bool); // 0x68e Func
	var_215_bool = var_183_bool == 0; // 0x690 Not
	if(var_215_bool == 0) goto Label_1686; // 0x691 JumpB
	var_216_object = var_0_object; // 0x692 PushT
	if(var_216_object == 0) goto Label_1686; // 0x693 JumpB
	var_185_object = 0; // 0x694 SetNull
	goto Label_1698; // 0x695 Jump
	
Label_1686:
	var_217_int = 0; // 0x696 PushI
	var_218_float = 0.3; // 0x697 PushF
	SetTimer(var_217_int, var_218_float); // 0x698 Func
	
Label_1692:
	var_219_int = 0; // 0x69c PushI
	KillTimer(var_219_int); // 0x69d Func
	goto Label_1698; // 0x69f Jump
}


func_831(var_0_object, var_3_string, var_5_int, var_39_object, var_40_bool, var_41_float, var_146_bool, var_238_bool)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_float = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_float = 0; // 0x33f PushV
	func_1060(var_61_cvector, var_62_bool, var_63_float); // 0x341 NEW_2
	var_5_int = 0; // 0x343 TMovI
	var_86_string = "@GetAttackDistance"; // 0x344 PushS
	var_87_int = 1; // 0x345 PushI
	var_88_bool = IsFuncExist(var_39_object, var_86_string, var_87_int); // 0x346 FuncExist
	if(var_88_bool == 0) goto Label_845; // 0x347 JumpB
	GetAttackDistance(var_53_float); // 0x348 ObjFunc
	var_89_int = 50; // 0x34a PushI
	var_53_float = var_53_float + var_89_int; // 0x34b Add2
	goto Label_846; // 0x34c Jump
	
Label_846:
	var_90_int = 150; // 0x34e PushI
	var_91_bool = var_53_float >= var_90_int; // 0x34f GE
	if(var_91_bool == 0) goto Label_850; // 0x350 JumpB
	var_53_float = 150; // 0x351 MovI
	
Label_850:
	var_3_string = 0; // 0x352 TMovB
	var_0_object = var_39_object; // 0x353 TMov
	IsPlayerActor(var_0_object, var_56_bool); // 0x354 Func
	var_92_bool = var_56_bool; // 0x356 Push
	if(var_92_bool == 0) goto Label_864; // 0x357 JumpB
	var_93_string = "attack"; // 0x358 PushS
	PlayGlobalMusic(var_93_string); // 0x359 Func
	var_94_object = Obj(); // 0x35b PushV
	func_2400(var_94_object); // 0x35c NEW_2
	SendPlayerEnemy(var_39_object, var_94_object); // 0x35e Func
	
Label_864:
	var_95_bool = var_40_bool; // 0x360 Push
	if(var_95_bool == 0) goto Label_868; // 0x361 JumpB
	var_57_bool = 0; // 0x362 MovB
	goto Label_869; // 0x363 Jump
	
Label_869:
	var_96_float = 400.0; // 0x365 PushF
	var_58_float = var_96_float + var_53_float; // 0x366 Add2
	
Label_871:
	var_97_bool = 0; // 0x367 PushV
	var_97_bool = 0; // 0x368 MovB
	var_98_bool = 0; var_99_object = Obj(); // 0x369 PushV
	var_99_object = var_0_object; // 0x36a MovT
	func_2057(var_98_bool, var_99_object); // 0x36b NEW_2
	if(var_98_bool == 0) goto Label_881; // 0x36d JumpB
	var_132_bool = var_3_string == 0; // 0x36e Not
	if(var_132_bool == 0) goto Label_881; // 0x36f JumpB
	var_97_bool = 1; // 0x370 MovB
	
Label_881:
	if(var_97_bool == 0) goto Label_1043; // 0x371 JumpB
	func_1473(var_63_float); // 0x373 NEW_2
	GetPFPosition(var_54_cvector); // 0x375 TObjFunc
	GetPFPosition(var_55_cvector); // 0x377 Func
	var_59_cvector = var_54_cvector - var_55_cvector; // 0x379 Sub2
	var_60_float = var_59_cvector | var_59_cvector; // 0x37a Or2
	var_138_float = var_58_float * var_58_float; // 0x37b Mult
	var_139_bool = var_60_float >= var_138_float; // 0x37c GE
	if(var_139_bool == 0) goto Label_909; // 0x37d JumpB
	var_140_bool = 0; var_141_object = Obj(); var_142_float = 0; var_143_float = 0; var_144_bool = 0; var_145_bool = 0; // 0x37e PushV
	var_141_object = var_0_object; // 0x37f MovT
	var_142_float = var_53_float; // 0x380 Mov
	var_143_float = 3000.0; // 0x381 MovF
	var_144_bool = 1; // 0x382 MovB
	var_145_bool = 0; // 0x383 MovB
	TaskCall(4); // 0x384 TaskCall
	func_1493(var_148_bool, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool); // 0x385 NEW_2
	TaskReturn(); // 0x386 TaskReturn
	var_223_bool = var_146_bool == 0; // 0x388 Not
	if(var_223_bool == 0) goto Label_907; // 0x389 JumpB
	goto Label_1043; // 0x38a Jump
	
Label_1043:
	WaitForAnimEnd(); // 0x413 Func
	var_224_string = var_3_string; // 0x415 PushT
	if(var_224_string == 0) goto Label_1048; // 0x416 JumpB
	return 22; // 0x417 Return
	
Label_1048:
	var_225_string = "all"; // 0x418 PushS
	var_226_string = "attack_off"; // 0x419 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x41a Func
	WaitForAnimEnd(); // 0x41c Func
	var_227_bool = var_56_bool; // 0x41e Push
	if(var_227_bool == 0) goto Label_1059; // 0x41f JumpB
	var_228_float = 2.0; // 0x420 PushF
	Sleep(var_228_float); // 0x421 Func
	
Label_1059:
	return 22; // 0x423 Return
	
Label_907:
	var_57_bool = 0; // 0x38b MovB
	goto Label_1042; // 0x38c Jump
	
Label_1042:
	goto Label_871; // 0x412 Jump
	
Label_909:
	var_229_float = var_41_float * var_41_float; // 0x38d Mult
	var_230_bool = var_60_float >= var_229_float; // 0x38e GE
	if(var_230_bool == 0) goto Label_1034; // 0x38f JumpB
	GetPFPosition(var_61_cvector); // 0x390 TObjFunc
	CanReachByPF(var_62_bool, var_61_cvector); // 0x392 Func
	var_231_bool = var_62_bool == 0; // 0x394 Not
	if(var_231_bool == 0) goto Label_933; // 0x395 JumpB
	var_232_bool = 0; var_233_object = Obj(); var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_bool = 0; // 0x396 PushV
	var_233_object = var_0_object; // 0x397 MovT
	var_234_float = var_53_float; // 0x398 Mov
	var_235_float = 3000.0; // 0x399 MovF
	var_236_bool = 1; // 0x39a MovB
	var_237_bool = 0; // 0x39b MovB
	TaskCall(4); // 0x39c TaskCall
	func_1493(var_240_bool, var_232_bool, var_233_object, var_234_float, var_235_float, var_236_bool, var_237_bool); // 0x39d NEW_2
	TaskReturn(); // 0x39e TaskReturn
	var_241_bool = var_238_bool == 0; // 0x3a0 Not
	if(var_241_bool == 0) goto Label_931; // 0x3a1 JumpB
	goto Label_1043; // 0x3a2 Jump
	
Label_931:
	var_57_bool = 0; // 0x3a3 MovB
	goto Label_871; // 0x3a4 Jump
	
Label_933:
	var_242_bool = var_57_bool == 0; // 0x3a5 Not
	if(var_242_bool == 0) goto Label_958; // 0x3a6 JumpB
	var_243_object = Obj(); // 0x3a7 PushV
	var_243_object = var_0_object; // 0x3a8 MovT
	func_2207(); // 0x3a9 NEW_2
	var_252_string = "all"; // 0x3ab PushS
	var_253_string = "attack_on"; // 0x3ac PushS
	PlayAnimation(var_252_string, var_253_string); // 0x3ad Func
	WaitForAnimEnd(); // 0x3af Func
	func_1473(var_63_float); // 0x3b2 NEW_2
	StopAsync(); // 0x3b4 Func
	var_57_bool = 1; // 0x3b6 MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x3b7 PushV
	var_255_object = var_0_object; // 0x3b8 MovT
	func_2057(var_254_bool, var_255_object); // 0x3b9 NEW_2
	var_256_bool = var_254_bool == 0; // 0x3bb Not
	if(var_256_bool == 0) goto Label_958; // 0x3bc JumpB
	goto Label_1043; // 0x3bd Jump
	
Label_958:
	rand(var_63_float); // 0x3be Func
	var_257_bool = 0; // 0x3c0 PushV
	var_257_bool = 1; // 0x3c1 MovB
	var_258_float = 0.25; // 0x3c2 PushF
	var_259_bool = var_63_float < var_258_float; // 0x3c3 LT
	if(var_259_bool == 0) goto Label_970; // 0x3c4 JumpB
	var_260_bool = 0; // 0x3c5 PushV
	func_1430(var_257_bool, var_260_bool); // 0x3c6 NEW_2
	if(var_260_bool == 0) goto Label_970; // 0x3c8 JumpB
	var_257_bool = 0; // 0x3c9 MovB
	
Label_970:
	if(var_257_bool == 0) goto Label_987; // 0x3ca JumpB
	Face(var_0_object); // 0x3cb Func
	func_1480(); // 0x3ce NEW_2
	var_295_string = "all"; // 0x3d0 PushS
	var_296_string = "attack_stay"; // 0x3d1 PushS
	PlayAnimation(var_295_string, var_296_string); // 0x3d2 Func
	var_297_bool = 0; var_298_float = 0; // 0x3d4 PushV
	var_298_float = var_41_float; // 0x3d5 Mov
	func_1298(var_63_float, var_297_bool, var_298_float); // 0x3d6 NEW_2
	StopAsync(); // 0x3d8 Func
	goto Label_1033; // 0x3da Jump
	
Label_1033:
	goto Label_1042; // 0x409 Jump
	
Label_987:
	Face(var_0_object); // 0x3db Func
	var_516_string = "all"; // 0x3dd PushS
	var_517_string = "fjump"; // 0x3de PushS
	PlayAnimation(var_516_string, var_517_string); // 0x3df Func
	WaitForAnimEnd(); // 0x3e1 Func
	func_1473(var_63_float); // 0x3e4 NEW_2
	var_518_cvector = CVector(0.0, 0.0, 0.0); // 0x3e6 PushVec
	SetSpeed(var_518_cvector); // 0x3e7 Func
	Stop(); // 0x3e9 Func
	StopAsync(); // 0x3eb Func
	var_519_bool = 0; // 0x3ed PushV
	func_1430(var_63_float, var_519_bool); // 0x3ee NEW_2
	var_520_bool = var_519_bool == 0; // 0x3f0 Not
	if(var_520_bool == 0) goto Label_1033; // 0x3f1 JumpB
	var_521_bool = 0; var_522_object = Obj(); // 0x3f2 PushV
	var_522_object = var_0_object; // 0x3f3 MovT
	func_2057(var_521_bool, var_522_object); // 0x3f4 NEW_2
	var_523_bool = var_521_bool == 0; // 0x3f6 Not
	if(var_523_bool == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1043; // 0x3f8 Jump
	
Label_1017:
	GetPFPosition(var_54_cvector); // 0x3f9 TObjFunc
	GetPFPosition(var_55_cvector); // 0x3fb Func
	var_59_cvector = var_54_cvector - var_55_cvector; // 0x3fd Sub2
	var_60_float = var_59_cvector | var_59_cvector; // 0x3fe Or2
	var_524_float = var_41_float * var_41_float; // 0x3ff Mult
	var_525_bool = var_60_float < var_524_float; // 0x400 LT
	if(var_525_bool == 0) goto Label_1033; // 0x401 JumpB
	var_526_bool = 0; var_527_float = 0; // 0x402 PushV
	var_527_float = var_41_float; // 0x403 Mov
	func_1134(var_63_float, var_526_bool, var_527_float); // 0x404 NEW_2
	var_528_bool = var_526_bool == 0; // 0x406 Not
	if(var_528_bool == 0) goto Label_1033; // 0x407 JumpB
	goto Label_1043; // 0x408 Jump
	
Label_1034:
	var_529_bool = 0; var_530_float = 0; // 0x40a PushV
	var_530_float = var_41_float; // 0x40b Mov
	func_1134(var_63_float, var_529_bool, var_530_float); // 0x40c NEW_2
	var_531_bool = var_529_bool == 0; // 0x40e Not
	if(var_531_bool == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1043; // 0x410 Jump
	
Label_1041:
	var_57_bool = 1; // 0x411 MovB
	
Label_868:
	var_57_bool = 1; // 0x364 MovB
	
Label_845:
	var_53_float = var_41_float; // 0x34d Mov
}


func_1095(var_0_object, var_395_float, var_396_int)
{
	var_397_object = Obj(); var_398_float = 0; var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_float = 0; // 0x447 PushV
	var_403_float = 0.9; // 0x448 PushF
	var_404_float = var_395_float * var_403_float; // 0x449 Mult
	GetVictim(var_404_float, var_400_object); // 0x44a Func
	ReportAttack(var_0_object); // 0x44c Func
	var_405_bool = var_400_object == var_0_object; // 0x44e Eq
	if(var_405_bool == 0) goto Label_1132; // 0x44f JumpB
	var_406_float = 0; var_407_object = Obj(); var_408_int = 0; // 0x450 PushV
	var_407_object = var_400_object; // 0x451 Mov
	var_408_int = var_396_int; // 0x452 Mov
	func_825(var_408_int); // 0x453 NEW_2
	var_401_float = var_406_float; // 0x454 Mov
	var_409_float = 0; var_410_object = Obj(); var_411_float = 0; var_412_int = 0; // 0x456 PushV
	var_410_object = var_400_object; // 0x457 Mov
	var_411_float = var_401_float; // 0x458 Mov
	var_413_int = 0; var_414_object = Obj(); var_415_int = 0; // 0x459 PushV
	var_414_object = var_400_object; // 0x45a Mov
	var_415_int = var_396_int; // 0x45b Mov
	func_828(var_415_int); // 0x45c NEW_2
	var_412_int = var_413_int; // 0x45d Mov
	func_1943(var_409_float, var_410_object, var_411_float, var_412_int); // 0x45f NEW_2
	var_402_float = var_409_float; // 0x460 Mov
	var_474_int = 0; // 0x462 PushV
	func_1478(var_474_int); // 0x463 NEW_2
	ReportHit(var_0_object, var_474_int, var_402_float, var_401_float); // 0x465 Func
	var_475_object = Obj(); var_476_float = 0; // 0x467 PushV
	var_475_object = var_400_object; // 0x468 Mov
	var_476_float = var_402_float; // 0x469 Mov
	func_1485(); // 0x46a NEW_2
	
Label_1132:
	return 6; // 0x46c Return
}


func_1865(var_49_string)
{
	RemoveRTEnvelope(); // 0x74a Func
	SetDeathState(); // 0x74c Func
	Stop(); // 0x74e Func
	StopAsync(); // 0x750 Func
	StopSecondaryAnimation(); // 0x752 Func
	var_50_string = ""; // 0x754 PushV
	var_50_string = var_49_string; // 0x755 Mov
	func_2359(var_50_string); // 0x756 NEW_2
	var_79_string = "all"; // 0x758 PushS
	PlayAnimation(var_79_string, var_49_string); // 0x759 Func
	WaitForAnimEnd(); // 0x75b Func
	var_80_string = "all"; // 0x75d PushS
	LockAnimationEnd(var_80_string, var_49_string); // 0x75e Func
	RemoveEnvelope(); // 0x760 Func
	return 0; // 0x762 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_95_object, var_96_object)
{
	var_0_object = var_96_object; // 0x4b TMov
	var_1_object = var_95_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_101_int = 1; // 0x4e PushI
	if(var_101_int == 0) goto Label_173; // 0x4f JumpB
	var_102_bool = 0; // 0x50 PushV
	var_102_bool = 0; // 0x51 MovB
	var_103_bool = 0; var_104_object = Obj(); // 0x52 PushV
	var_104_object = var_1_object; // 0x53 MovT
	func_2501(var_104_object); // 0x54 NEW_2
	var_111_bool = var_103_bool == 0; // 0x56 Not
	if(var_111_bool == 0) goto Label_94; // 0x57 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0x58 PushV
	var_113_object = var_1_object; // 0x59 MovT
	func_2513(var_113_object); // 0x5a NEW_2
	if(var_112_bool == 0) goto Label_94; // 0x5c JumpB
	var_102_bool = 1; // 0x5d MovB
	
Label_94:
	if(var_102_bool == 0) goto Label_125; // 0x5e JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0x5f PushV
	var_118_object = var_1_object; // 0x60 MovT
	var_119_object = var_0_object; // 0x61 MovT
	func_2495(); // 0x62 NEW_2
	var_122_string = ""; // 0x64 PushV
	var_122_string = "Neutral"; // 0x65 MovS
	func_203(var_96_object, var_122_string); // 0x66 NEW_2
	var_139_int = 518663; // 0x68 PushI
	SetMessage(var_139_int); // 0x69 TObjFunc
	ClearReplies(); // 0x6b TObjFunc
	var_140_int = 518671; // 0x6d PushI
	var_141_int = 19764; // 0x6e PushI
	var_142_int = 19763; // 0x6f PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x70 TObjFunc
	var_143_int = 518678; // 0x72 PushI
	var_144_int = 19781; // 0x73 PushI
	var_145_int = 19770; // 0x74 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x75 TObjFunc
	var_146_int = 518666; // 0x77 PushI
	var_147_int = -1; // 0x78 PushI
	var_148_int = 19758; // 0x79 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x7a TObjFunc
	goto Label_173; // 0x7c Jump
	
Label_173:
	var_149_bool = 0; // 0xad PushV
	func_2593(var_149_bool); // 0xae NEW_2
	if(var_149_bool == 0) goto Label_188; // 0xb0 JumpB
	
Label_177:
	lshWaitForAnimEnd(); // 0xb1 Func
	var_150_string = var_3_string; // 0xb3 PushT
	if(var_150_string == 0) goto Label_182; // 0xb4 JumpB
	goto Label_187; // 0xb5 Jump
	
Label_187:
	goto Label_202; // 0xbb Jump
	
Label_202:
	return 0; // 0xca Return
	
Label_182:
	var_151_string = ""; // 0xb6 PushV
	var_151_string = var_2_object; // 0xb7 MovT
	func_2310(var_151_string); // 0xb8 NEW_2
	goto Label_177; // 0xba Jump
	
Label_188:
	var_162_string = "all"; // 0xbc PushS
	var_163_string = "idle"; // 0xbd PushS
	PlayAnimation(var_162_string, var_163_string); // 0xbe Func
	
Label_192:
	WaitForAnimEnd(); // 0xc0 Func
	var_164_string = var_3_string; // 0xc2 PushT
	if(var_164_string == 0) goto Label_197; // 0xc3 JumpB
	goto Label_202; // 0xc4 Jump
	
Label_197:
	var_165_string = "all"; // 0xc5 PushS
	var_166_string = "idle"; // 0xc6 PushS
	PlayAnimation(var_165_string, var_166_string); // 0xc7 Func
	goto Label_192; // 0xc9 Jump
	
Label_125:
	var_167_bool = 0; var_168_object = Obj(); // 0x7d PushV
	var_168_object = var_1_object; // 0x7e MovT
	func_2501(var_168_object); // 0x7f NEW_2
	var_169_bool = var_167_bool == 0; // 0x81 Not
	if(var_169_bool == 0) goto Label_151; // 0x82 JumpB
	var_170_string = ""; // 0x83 PushV
	var_170_string = "Neutral"; // 0x84 MovS
	func_203(var_96_object, var_170_string); // 0x85 NEW_2
	var_171_int = 530807; // 0x87 PushI
	SetMessage(var_171_int); // 0x88 TObjFunc
	ClearReplies(); // 0x8a TObjFunc
	var_172_int = 530809; // 0x8c PushI
	var_173_int = -1; // 0x8d PushI
	var_174_int = 32121; // 0x8e PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x8f TObjFunc
	var_175_int = 530808; // 0x91 PushI
	var_176_int = -1; // 0x92 PushI
	var_177_int = 32120; // 0x93 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x94 TObjFunc
	goto Label_173; // 0x96 Jump
	
Label_151:
	var_178_bool = 0; var_179_object = Obj(); // 0x97 PushV
	var_179_object = var_1_object; // 0x98 MovT
	func_2501(var_179_object); // 0x99 NEW_2
	if(var_178_bool == 0) goto Label_171; // 0x9b JumpB
	var_180_string = ""; // 0x9c PushV
	var_180_string = "Neutral"; // 0x9d MovS
	func_203(var_96_object, var_180_string); // 0x9e NEW_2
	var_181_int = 524880; // 0xa0 PushI
	SetMessage(var_181_int); // 0xa1 TObjFunc
	ClearReplies(); // 0xa3 TObjFunc
	var_182_int = 524881; // 0xa5 PushI
	var_183_int = -1; // 0xa6 PushI
	var_184_int = 26205; // 0xa7 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xa8 TObjFunc
	goto Label_173; // 0xaa Jump
	
Label_171:
	return 0; // 0xab Return
}


func_2125(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x84d PushV
	var_44_bool = 0; // 0x84e PushV
	var_44_bool = 0; // 0x84f MovB
	var_45_bool = 0; // 0x850 PushV
	var_45_bool = 0; // 0x851 MovB
	var_46_object = var_23_object; // 0x852 Push
	if(var_46_object == 0) goto Label_2136; // 0x853 JumpB
	var_47_int = 4; // 0x854 PushI
	var_48_bool = var_24_int != var_47_int; // 0x855 Neq
	if(var_48_bool == 0) goto Label_2136; // 0x856 JumpB
	var_45_bool = 1; // 0x857 MovB
	
Label_2136:
	if(var_45_bool == 0) goto Label_2141; // 0x858 JumpB
	var_49_int = 5; // 0x859 PushI
	var_50_bool = var_24_int != var_49_int; // 0x85a Neq
	if(var_50_bool == 0) goto Label_2141; // 0x85b JumpB
	var_44_bool = 1; // 0x85c MovB
	
Label_2141:
	if(var_44_bool == 0) goto Label_2188; // 0x85d JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x85e PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x85f PushV
	var_54_object = var_23_object; // 0x860 Mov
	func_1911(var_54_object); // 0x861 NEW_2
	var_52_cvector = var_53_cvector; // 0x862 Mov
	func_2406(var_51_cvector, var_52_cvector); // 0x864 NEW_2
	var_35_cvector = var_51_cvector; // 0x865 Mov
	CreateVectorVector(var_36_object); // 0x867 Func
	var_37_int = 1; // 0x869 MovI
	
Label_2154:
	var_64_string = "hit"; // 0x86a PushS
	var_65_int = var_64_string + var_37_int; // 0x86b Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x86c Func
	var_66_bool = var_38_bool == 0; // 0x86e Not
	if(var_66_bool == 0) goto Label_2161; // 0x86f JumpB
	goto Label_2170; // 0x870 Jump
	
Label_2170:
	size(var_41_int); // 0x87a ObjFunc
	var_67_int = var_41_int; // 0x87c Push
	if(var_67_int == 0) goto Label_2187; // 0x87d JumpB
	irand(var_42_int, var_41_int); // 0x87e Func
	get(var_43_cvector, var_42_int); // 0x880 ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x882 PushV
	var_68_object = var_23_object; // 0x883 Mov
	var_69_int = var_24_int; // 0x884 Mov
	var_70_float = var_25_float; // 0x885 Mov
	var_71_cvector = var_43_cvector; // 0x886 Mov
	var_72_cvector = -var_35_cvector; // 0x887 Neg2
	func_2193(var_70_float, var_71_cvector, var_72_cvector); // 0x888 NEW_2
	return 18; // 0x88a Return
	
Label_2187:
	var_36_object = 0; // 0x88b SetNull
	
Label_2188:
	var_113_object = Obj(); // 0x88c PushV
	var_113_object = var_23_object; // 0x88d Mov
	func_2081(var_113_object); // 0x88e NEW_2
	return 18; // 0x890 Return
	
Label_2161:
	var_114_int = var_40_cvector | var_35_cvector; // 0x871 Or
	var_115_float = 0.70711; // 0x872 PushF
	var_116_bool = var_114_int >= var_115_float; // 0x873 GE
	if(var_116_bool == 0) goto Label_2167; // 0x874 JumpB
	add(var_39_cvector); // 0x875 ObjFunc
	
Label_2167:
	var_117_int = 1; // 0x877 PushI
	var_37_int = var_37_int + var_117_int; // 0x878 Add2
	goto Label_2154; // 0x879 Jump
}


func_1369(var_310_bool)
{
	var_311_bool = 0; // 0x559 PushV
	var_311_bool = 0; // 0x55a MovB
	var_312_bool = 0; // 0x55b PushV
	func_1341(var_311_bool, var_312_bool); // 0x55c NEW_2
	if(var_312_bool == 0) goto Label_1380; // 0x55e JumpB
	var_329_bool = 0; // 0x55f PushV
	func_1385(var_310_bool, var_311_bool, var_329_bool); // 0x560 NEW_2
	if(var_329_bool == 0) goto Label_1380; // 0x562 JumpB
	var_311_bool = 1; // 0x563 MovB
	
Label_1380:
	if(var_311_bool == 0) goto Label_1383; // 0x564 JumpB
	var_310_bool = 1; // 0x565 MovB
	return 0; // 0x566 Return
	
Label_1383:
	var_310_bool = 0; // 0x567 MovB
	return 0; // 0x568 Return
}


func_2400(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj(); // 0x960 PushV
	self(var_25_object); // 0x961 Func
	var_23_object = var_25_object; // 0x963 Mov
	return 2; // 0x964 Return
}


func_2406(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x966 PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x967 Or
	var_60_float = sqrt(var_61_int); // 0x968 Sqrt2
	var_62_float = 0.0; // 0x969 PushF
	var_63_bool = var_60_float < var_62_float; // 0x96a LT
	if(var_63_bool == 0) goto Label_2414; // 0x96b JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x96c MovV
	return 2; // 0x96d Return
	
Label_2414:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x96e Div2
	return 2; // 0x96f Return
}


func_1385(var_0_object, var_4_bool, var_329_bool)
{
	var_330_object = Obj(); var_331_bool = 0; var_332_float = 0; var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_object = Obj(); var_336_bool = 0; var_337_float = 0; var_338_cvector = CVector(0,0,0); var_339_cvector = CVector(0,0,0); // 0x569 PushV
	GetScene(var_335_object); // 0x56a Func
	var_336_bool = 0; // 0x56c MovB
	
Label_1389:
	var_340_cvector = CVector(0,0,0); var_341_object = Obj(); // 0x56d PushV
	var_341_object = var_0_object; // 0x56e MovT
	func_1911(var_341_object); // 0x56f NEW_2
	var_346_int = -var_340_cvector; // 0x571 Neg
	FindDirLength(var_337_float, var_346_int, var_337_float); // 0x572 Func
	var_347_bool = var_337_float < var_4_bool; // 0x574 LT
	if(var_347_bool == 0) goto Label_1399; // 0x575 JumpB
	goto Label_1427; // 0x576 Jump
	
Label_1427:
	var_329_bool = var_336_bool; // 0x593 Mov
	return 10; // 0x594 Return
	
Label_1399:
	Face(var_0_object); // 0x577 Func
	var_348_string = "all"; // 0x579 PushS
	var_349_string = "bjump"; // 0x57a PushS
	PlayAnimation(var_348_string, var_349_string); // 0x57b Func
	GetPFPosition(var_338_cvector); // 0x57d TObjFunc
	GetPFPosition(var_339_cvector); // 0x57f Func
	WaitForAnimEnd(); // 0x581 Func
	func_1473(var_339_cvector); // 0x584 NEW_2
	StopAsync(); // 0x586 Func
	var_350_cvector = CVector(0.0, 0.0, 0.0); // 0x588 PushVec
	SetSpeed(var_350_cvector); // 0x589 Func
	var_336_bool = 1; // 0x58b MovB
	var_351_bool = 0; // 0x58c PushV
	func_1341(var_339_cvector, var_351_bool); // 0x58d NEW_2
	var_352_bool = var_351_bool == 0; // 0x58f Not
	if(var_352_bool == 0) goto Label_1426; // 0x590 JumpB
	goto Label_1427; // 0x591 Jump
	
Label_1426:
	goto Label_1389; // 0x592 Jump
}


func_1897(var_437_string, var_438_int)
{
	var_439_int = 2; // 0x76a PushI
	var_440_bool = var_438_int == var_439_int; // 0x76b Eq
	if(var_440_bool == 0) goto Label_1904; // 0x76c JumpB
	var_437_string = "fire"; // 0x76d MovS
	return 0; // 0x76e Return
	
Label_1904:
	var_441_int = 1; // 0x770 PushI
	var_442_bool = var_438_int == var_441_int; // 0x771 Eq
	if(var_442_bool == 0) goto Label_1909; // 0x772 JumpB
	var_437_string = "bullet"; // 0x773 MovS
	return 0; // 0x774 Return
	
Label_1909:
	var_437_string = "phys"; // 0x775 MovS
	return 0; // 0x776 Return
}


func_1134(var_0_object, var_358_bool, var_359_float)
{
	var_360_int = 0; var_361_bool = 0; var_362_int = 0; var_363_string = ""; var_364_int = 0; var_365_bool = 0; var_366_int = 0; var_367_string = ""; // 0x46e PushV
	func_1473(var_367_string); // 0x470 NEW_2
	irand(var_364_int, var_367_string); // 0x472 Func
	var_368_int = 1; // 0x474 PushI
	var_364_int = var_364_int + var_368_int; // 0x475 Add2
	Face(var_0_object); // 0x476 Func
	var_369_bool = 1; // 0x478 PushB
	SetAttackState(var_369_bool); // 0x479 Func
	func_2477(); // 0x47c NEW_2
	var_374_string = "all"; // 0x47e PushS
	var_375_string = "attack_begin"; // 0x47f PushS
	var_376_int = var_375_string + var_364_int; // 0x480 Add
	PlayAnimation(var_374_string, var_376_int); // 0x481 Func
	WaitForAnimEnd(); // 0x483 Func
	func_1441(var_366_int, var_367_string); // 0x486 NEW_2
	var_392_bool = 0; var_393_object = Obj(); // 0x488 PushV
	var_393_object = var_0_object; // 0x489 MovT
	func_2057(var_392_bool, var_393_object); // 0x48a NEW_2
	var_394_bool = var_392_bool == 0; // 0x48c Not
	if(var_394_bool == 0) goto Label_1170; // 0x48d JumpB
	StopAsync(); // 0x48e Func
	var_358_bool = 0; // 0x490 MovB
	return 8; // 0x491 Return
	
Label_1170:
	var_395_float = 0; var_396_int = 0; // 0x492 PushV
	var_395_float = var_359_float; // 0x493 Mov
	var_396_int = var_364_int; // 0x494 Mov
	func_1095(var_367_string, var_395_float, var_396_int); // 0x495 NEW_2
	var_477_string = "all"; // 0x497 PushS
	var_478_string = "attack_middle"; // 0x498 PushS
	var_479_int = var_478_string + var_364_int; // 0x499 Add
	HasAnimation(var_365_bool, var_477_string, var_479_int); // 0x49a Func
	var_480_bool = var_365_bool; // 0x49c Push
	if(var_480_bool == 0) goto Label_1251; // 0x49d JumpB
	func_2477(); // 0x49f NEW_2
	var_481_string = "all"; // 0x4a1 PushS
	var_482_string = "attack_middle"; // 0x4a2 PushS
	var_483_int = var_482_string + var_364_int; // 0x4a3 Add
	PlayAnimation(var_481_string, var_483_int); // 0x4a4 Func
	WaitForAnimEnd(); // 0x4a6 Func
	func_1473(var_367_string); // 0x4a9 NEW_2
	var_484_bool = 0; var_485_object = Obj(); // 0x4ab PushV
	var_485_object = var_0_object; // 0x4ac MovT
	func_2057(var_484_bool, var_485_object); // 0x4ad NEW_2
	var_486_bool = var_484_bool == 0; // 0x4af Not
	if(var_486_bool == 0) goto Label_1205; // 0x4b0 JumpB
	StopAsync(); // 0x4b1 Func
	var_358_bool = 0; // 0x4b3 MovB
	return 8; // 0x4b4 Return
	
Label_1205:
	var_487_float = 0; var_488_int = 0; // 0x4b5 PushV
	var_487_float = var_359_float; // 0x4b6 Mov
	var_488_int = var_364_int; // 0x4b7 Mov
	func_1095(var_367_string, var_487_float, var_488_int); // 0x4b8 NEW_2
	var_366_int = 1; // 0x4ba MovI
	
Label_1211:
	var_489_string = "attack_middle"; // 0x4bb PushS
	var_490_int = var_489_string + var_364_int; // 0x4bc Add
	var_491_string = "_"; // 0x4bd PushS
	var_492_int = var_490_int + var_491_string; // 0x4be Add
	var_367_string = var_492_int + var_366_int; // 0x4bf Add2
	var_493_string = "all"; // 0x4c0 PushS
	HasAnimation(var_365_bool, var_493_string, var_367_string); // 0x4c1 Func
	var_494_bool = var_365_bool == 0; // 0x4c3 Not
	if(var_494_bool == 0) goto Label_1222; // 0x4c4 JumpB
	goto Label_1251; // 0x4c5 Jump
	
Label_1251:
	var_495_bool = 0; // 0x4e3 PushB
	SetAttackState(var_495_bool); // 0x4e4 Func
	var_496_string = "all"; // 0x4e6 PushS
	var_497_string = "attack_end"; // 0x4e7 PushS
	var_498_int = var_497_string + var_364_int; // 0x4e8 Add
	PlayAnimation(var_496_string, var_498_int); // 0x4e9 Func
	var_499_bool = 0; // 0x4eb PushV
	func_1487(var_499_bool); // 0x4ec NEW_2
	if(var_499_bool == 0) goto Label_1269; // 0x4ee JumpB
	var_500_bool = 0; var_501_float = 0; // 0x4ef PushV
	var_501_float = 0.75; // 0x4f0 MovF
	func_1271(var_500_bool, var_501_float); // 0x4f1 NEW_2
	StopAsync(); // 0x4f3 Func
	
Label_1269:
	var_358_bool = 1; // 0x4f5 MovB
	return 8; // 0x4f6 Return
	
Label_1222:
	func_2477(); // 0x4c7 NEW_2
	var_509_string = "all"; // 0x4c9 PushS
	PlayAnimation(var_509_string, var_367_string); // 0x4ca Func
	WaitForAnimEnd(); // 0x4cc Func
	func_1473(var_367_string); // 0x4cf NEW_2
	var_510_bool = 0; var_511_object = Obj(); // 0x4d1 PushV
	var_511_object = var_0_object; // 0x4d2 MovT
	func_2057(var_510_bool, var_511_object); // 0x4d3 NEW_2
	var_512_bool = var_510_bool == 0; // 0x4d5 Not
	if(var_512_bool == 0) goto Label_1243; // 0x4d6 JumpB
	StopAsync(); // 0x4d7 Func
	var_358_bool = 0; // 0x4d9 MovB
	return 8; // 0x4da Return
	
Label_1243:
	var_513_float = 0; var_514_int = 0; // 0x4db PushV
	var_513_float = var_359_float; // 0x4dc Mov
	var_514_int = var_364_int; // 0x4dd Mov
	func_1095(var_367_string, var_513_float, var_514_int); // 0x4de NEW_2
	var_515_int = 1; // 0x4e0 PushI
	var_366_int = var_366_int + var_515_int; // 0x4e1 Add2
	goto Label_1211; // 0x4e2 Jump
}


func_2416(var_447_float, var_448_float, var_449_float)
{
	var_452_bool = var_448_float < var_449_float; // 0x971 LT
	if(var_452_bool == 0) goto Label_2421; // 0x972 JumpB
	var_447_float = var_448_float; // 0x973 Mov
	goto Label_2422; // 0x974 Jump
	
Label_2422:
	return 0; // 0x976 Return
	
Label_2421:
	var_447_float = var_449_float; // 0x975 Mov
}


func_1911(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x777 PushV
	GetPosition(var_57_cvector); // 0x778 Func
	GetPosition(var_58_cvector); // 0x77a ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x77c Sub2
	return 4; // 0x77d Return
}


func_2423(var_457_float, var_458_float, var_459_float, var_460_float)
{
	var_461_bool = var_458_float < var_459_float; // 0x978 LT
	if(var_461_bool == 0) goto Label_2428; // 0x979 JumpB
	var_457_float = var_459_float; // 0x97a Mov
	return 0; // 0x97b Return
	
Label_2428:
	var_462_bool = var_458_float > var_460_float; // 0x97c GT
	if(var_462_bool == 0) goto Label_2432; // 0x97d JumpB
	var_457_float = var_460_float; // 0x97e Mov
	return 0; // 0x97f Return
	
Label_2432:
	var_457_float = var_458_float; // 0x980 Mov
	return 0; // 0x981 Return
}


func_636(var_0_object, var_1_object, var_2_object, var_3_string, var_18_bool, var_20_float, var_21_float)
{
	var_22_bool = 0; // 0x27d PushV
	func_2218(var_22_bool); // 0x27e NEW_2
	var_25_bool = var_22_bool == 0; // 0x280 Not
	if(var_25_bool == 0) goto Label_643; // 0x281 JumpB
	return 0; // 0x282 Return
	
Label_643:
	var_26_string = "player"; // 0x283 PushS
	FindActor(var_18_bool, var_26_string); // 0x284 Func
	var_2_object = 0; // 0x286 TMovB
	var_3_string = 0; // 0x287 TMovB
	var_0_object = var_20_float; // 0x288 TMov
	var_1_object = var_21_float; // 0x289 TMov
	var_27_int = 10; // 0x28a PushI
	var_28_float = 1.0; // 0x28b PushF
	SetTimer(var_27_int, var_28_float); // 0x28c Func
	func_715(); // 0x28f NEW_2
	var_80_bool = var_3_string == 0; // 0x291 Not
	if(var_80_bool == 0) goto Label_662; // 0x292 JumpB
	var_81_int = 10; // 0x293 PushI
	KillTimer(var_81_int); // 0x294 Func
	
Label_662:
	return 0; // 0x296 Return
}


func_1918(var_26_float)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x77e PushV
	GetPosition(var_31_cvector); // 0x77f Func
	GetPosition(var_32_cvector); // 0x781 ObjFunc
	var_33_cvector = var_32_cvector - var_31_cvector; // 0x783 Sub2
	var_26_float = var_33_cvector | var_33_cvector; // 0x784 Or2
	return 6; // 0x785 Return
}


func_2434(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0; // 0x982 PushV
	GetVariable(var_106_string, var_108_int); // 0x983 Func
	var_105_int = var_108_int; // 0x985 Mov
	return 2; // 0x986 Return
}


func_1926(var_164_bool, var_165_object)
{
	var_166_bool = 0; var_167_bool = 0; // 0x786 PushV
	IsPlayerActor(var_165_object, var_167_bool); // 0x787 Func
	var_164_bool = var_167_bool; // 0x789 Mov
	return 2; // 0x78a Return
}


func_2439(var_465_float)
{
	var_466_object = Obj(); var_467_object = Obj(); // 0x987 PushV
	CreateFloatVector(var_467_object); // 0x988 Func
	add(var_465_float); // 0x98a ObjFunc
	var_468_int = 0; // 0x98c PushI
	var_469_bool = var_465_float < var_468_int; // 0x98d LT
	if(var_469_bool == 0) goto Label_2451; // 0x98e JumpB
	var_470_float = 0.7; // 0x98f PushF
	var_471_int = 500; // 0x990 PushI
	RumblePlay(var_470_float, var_471_int); // 0x991 Func
	
Label_2451:
	var_472_int = 15; // 0x993 PushI
	SendWorldWndMessage(var_472_int, var_467_object); // 0x994 Func
	return 2; // 0x996 Return
}


func_1931(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x78b PushV
	var_59_string = "HasProperty"; // 0x78c PushS
	var_60_int = 2; // 0x78d PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x78e FuncExist
	var_62_bool = var_61_bool == 0; // 0x78f Not
	if(var_62_bool == 0) goto Label_1939; // 0x790 JumpB
	var_54_bool = 0; // 0x791 MovB
	return 2; // 0x792 Return
	
Label_1939:
	HasProperty(var_56_string, var_58_bool); // 0x793 ObjFunc
	var_54_bool = var_58_bool; // 0x795 Mov
	return 2; // 0x796 Return
}


func_2193(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x891 PushV
	GetScene(var_32_object); // 0x892 Func
	var_34_string = "scripted"; // 0x894 PushS
	var_35_string = "blood_dir.xml"; // 0x895 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x896 Func
	var_36_object = Obj(); // 0x898 PushV
	var_36_object = var_25_object; // 0x899 Mov
	func_2081(var_36_object); // 0x89a NEW_2
	return 4; // 0x89c Return
}


func_1430(var_0_object, var_260_bool)
{
	var_261_bool = 0; var_262_bool = 0; // 0x596 PushV
	var_263_string = "IsAttacking"; // 0x597 PushS
	var_264_int = 1; // 0x598 PushI
	var_265_bool = IsFuncExist(var_0_object, var_263_string, var_264_int); // 0x599 FuncExist
	if(var_265_bool == 0) goto Label_1439; // 0x59a JumpB
	IsAttacking(var_262_bool); // 0x59b TObjFunc
	var_260_bool = var_262_bool; // 0x59d Mov
	return 2; // 0x59e Return
	
Label_1439:
	var_260_bool = 0; // 0x59f MovB
	return 2; // 0x5a0 Return
}


func_663(var_0_object, var_1_object, var_4_bool, var_22_bool)
{
	var_23_float = 0; var_24_float = 0; // 0x297 PushV
	var_25_bool = var_4_bool == 0; // 0x298 NullEq
	if(var_25_bool == 0) goto Label_668; // 0x299 JumpB
	var_22_bool = 0; // 0x29a MovB
	return 2; // 0x29b Return
	
Label_668:
	var_26_float = 0; var_27_object = Obj(); // 0x29c PushV
	var_27_object = var_4_bool; // 0x29d MovT
	func_1918(var_27_object); // 0x29e NEW_2
	var_24_float = sqrt(var_26_float); // 0x2a0 Sqrt2
	var_34_object = var_2_object; // 0x2a1 PushT
	if(var_34_object == 0) goto Label_676; // 0x2a2 JumpB
	var_24_float = var_24_float - var_1_object; // 0x2a3 Sub2
	
Label_676:
	var_22_bool = var_24_float < var_0_object; // 0x2a4 LT2
	return 2; // 0x2a5 Return
}


func_1943(var_409_float, var_410_object, var_411_float, var_412_int)
{
	var_416_int = 0; var_417_string = ""; var_418_int = 0; var_419_float = 0; var_420_float = 0; var_421_float = 0; var_422_int = 0; var_423_string = ""; var_424_int = 0; var_425_float = 0; var_426_float = 0; var_427_float = 0; // 0x797 PushV
	var_428_bool = 0; var_429_object = Obj(); var_430_string = ""; // 0x798 PushV
	var_429_object = var_410_object; // 0x799 Mov
	var_430_string = "health"; // 0x79a MovS
	func_1931(var_428_bool, var_429_object, var_430_string); // 0x79b NEW_2
	var_431_bool = var_428_bool == 0; // 0x79d Not
	if(var_431_bool == 0) goto Label_1953; // 0x79e JumpB
	var_409_float = 0.0; // 0x79f MovF
	return 12; // 0x7a0 Return
	
Label_1953:
	var_432_bool = 0; var_433_object = Obj(); var_434_string = ""; // 0x7a1 PushV
	var_433_object = var_410_object; // 0x7a2 Mov
	var_434_string = "armor"; // 0x7a3 MovS
	func_1931(var_432_bool, var_433_object, var_434_string); // 0x7a4 NEW_2
	var_435_bool = var_432_bool == 0; // 0x7a6 Not
	if(var_435_bool == 0) goto Label_1962; // 0x7a7 JumpB
	var_422_int = 0; // 0x7a8 MovI
	goto Label_1965; // 0x7a9 Jump
	
Label_1965:
	var_436_string = "armor_"; // 0x7ad PushS
	var_437_string = ""; var_438_int = 0; // 0x7ae PushV
	var_438_int = var_412_int; // 0x7af Mov
	func_1897(var_437_string, var_438_int); // 0x7b0 NEW_2
	var_423_string = var_436_string + var_437_string; // 0x7b2 Add2
	var_443_bool = 0; var_444_object = Obj(); var_445_string = ""; // 0x7b3 PushV
	var_444_object = var_410_object; // 0x7b4 Mov
	var_445_string = var_423_string; // 0x7b5 Mov
	func_1931(var_443_bool, var_444_object, var_445_string); // 0x7b6 NEW_2
	var_446_bool = var_443_bool == 0; // 0x7b8 Not
	if(var_446_bool == 0) goto Label_1980; // 0x7b9 JumpB
	var_424_int = 0; // 0x7ba MovI
	goto Label_1982; // 0x7bb Jump
	
Label_1982:
	var_447_float = 0; var_448_float = 0; var_449_float = 0; // 0x7be PushV
	var_450_int = var_422_int + var_424_int; // 0x7bf Add
	var_451_float = 100.0; // 0x7c0 PushF
	var_448_float = var_450_int / var_450_int; // 0x7c1 Div2
	var_449_float = 1; // 0x7c2 MovI
	func_2416(var_447_float, var_448_float, var_449_float); // 0x7c3 NEW_2
	var_425_float = var_447_float; // 0x7c4 Mov
	var_453_string = "health"; // 0x7c6 PushS
	GetProperty(var_453_string, var_426_float); // 0x7c7 ObjFunc
	var_454_int = 1; // 0x7c9 PushI
	var_455_int = var_454_int - var_425_float; // 0x7ca Sub
	var_427_float = var_411_float * var_455_int; // 0x7cb Mult2
	var_456_string = "health"; // 0x7cc PushS
	var_457_float = 0; var_458_float = 0; var_459_float = 0; var_460_float = 0; // 0x7cd PushV
	var_458_float = var_426_float - var_427_float; // 0x7ce Sub2
	var_459_float = 0; // 0x7cf MovI
	var_460_float = 1; // 0x7d0 MovI
	func_2423(var_457_float, var_458_float, var_459_float, var_460_float); // 0x7d1 NEW_2
	SetProperty(var_456_string, var_457_float); // 0x7d3 ObjFunc
	var_463_bool = 0; var_464_object = Obj(); // 0x7d5 PushV
	var_464_object = var_410_object; // 0x7d6 Mov
	func_1926(var_463_bool, var_464_object); // 0x7d7 NEW_2
	if(var_463_bool == 0) goto Label_2014; // 0x7d9 JumpB
	var_465_float = 0; // 0x7da PushV
	var_465_float = -var_427_float; // 0x7db Neg2
	func_2439(var_465_float); // 0x7dc NEW_2
	
Label_2014:
	var_409_float = var_427_float; // 0x7de Mov
	return 12; // 0x7df Return
	
Label_1980:
	GetProperty(var_423_string, var_424_int); // 0x7bc ObjFunc
	
Label_1962:
	var_473_string = "armor"; // 0x7aa PushS
	GetProperty(var_473_string, var_422_int); // 0x7ab ObjFunc
}


func_2456(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x998 PushV
	FindActor(var_24_object, var_21_string); // 0x999 Func
	var_25_bool = var_24_object == 0; // 0x99b NullEq
	if(var_25_bool == 0) goto Label_2463; // 0x99c JumpB
	var_20_bool = 0; // 0x99d MovB
	return 2; // 0x99e Return
	
Label_2463:
	Trigger(var_24_object, var_22_string); // 0x99f Func
	var_20_bool = 1; // 0x9a1 MovB
	return 2; // 0x9a2 Return
}


func_2207()
{
	var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); // 0x89f PushV
	GetPosition(var_247_cvector); // 0x8a0 ObjFunc
	GetPosition(var_248_cvector); // 0x8a2 Func
	var_249_cvector = var_247_cvector - var_248_cvector; // 0x8a4 Sub2
	var_250_float = GetByIndex(var_249_cvector, 0); // 0x8a5 PushE
	var_251_float = GetByIndex(var_249_cvector, 2); // 0x8a6 PushE
	RotateAsync(var_250_float, var_251_float); // 0x8a7 Func
	return 6; // 0x8a9 Return
}


func_1441(var_2_object, var_5_int)
{
	var_377_float = 0; var_378_int = 0; var_379_float = 0; var_380_int = 0; // 0x5a1 PushV
	var_381_bool = var_2_object == 0; // 0x5a2 Not
	if(var_381_bool == 0) goto Label_1445; // 0x5a3 JumpB
	return 4; // 0x5a4 Return
	
Label_1445:
	var_382_int = var_5_int; // 0x5a5 PushT
	if(var_382_int == 0) goto Label_1453; // 0x5a6 JumpB
	var_383_int = -1; // 0x5a7 PushI
	var_5_int = var_5_int + var_383_int; // 0x5a8 Add2
	var_384_int = 0; // 0x5a9 PushI
	var_385_bool = var_5_int > var_384_int; // 0x5aa GT
	if(var_385_bool == 0) goto Label_1453; // 0x5ab JumpB
	return 4; // 0x5ac Return
	
Label_1453:
	rand(var_379_float); // 0x5ad Func
	var_386_float = 0; // 0x5af PushV
	func_1491(var_386_float); // 0x5b0 NEW_2
	var_387_bool = var_379_float < var_386_float; // 0x5b2 LT
	if(var_387_bool == 0) goto Label_1472; // 0x5b3 JumpB
	irand(var_380_int, var_379_float); // 0x5b4 Func
	var_388_int = 1; // 0x5b6 PushI
	var_380_int = var_380_int + var_388_int; // 0x5b7 Add2
	var_389_string = "attack"; // 0x5b8 PushS
	var_390_int = var_389_string + var_380_int; // 0x5b9 Add
	Speak(var_390_int); // 0x5ba Func
	var_391_int = 0; // 0x5bc PushV
	func_1489(var_391_int); // 0x5bd NEW_2
	var_5_int = var_391_int; // 0x5be TMov
	
Label_1472:
	return 4; // 0x5c0 Return
}


func_1700(var_0_object, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x6a5 PushI
	var_29_bool = var_27_int != var_28_int; // 0x6a6 Neq
	if(var_29_bool == 0) goto Label_1705; // 0x6a7 JumpB
	return 0; // 0x6a8 Return
	
Label_1705:
	var_30_bool = 0; var_31_object = Obj(); // 0x6a9 PushV
	var_31_object = var_1_object; // 0x6aa MovT
	func_1738(var_30_bool, var_31_object); // 0x6ab NEW_2
	var_66_bool = var_30_bool == 0; // 0x6ad Not
	if(var_66_bool == 0) goto Label_1712; // 0x6ae JumpB
	var_0_object = 1; // 0x6af TMovB
	
Label_1712:
	var_67_int = 0; // 0x6b0 PushI
	KillTimer(var_67_int); // 0x6b1 Func
	Stop(); // 0x6b3 Func
	return 0; // 0x6b5 Return
}


func_2468(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x9a4 PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x9a5 Func
	var_25_bool = var_24_bool; // 0x9a7 Push
	if(var_25_bool == 0) goto Label_2476; // 0x9a8 JumpB
	var_26_string = "attack"; // 0x9a9 PushS
	PlayGlobalMusic(var_26_string); // 0x9aa Func
	
Label_2476:
	return 2; // 0x9ac Return
}


func_2218(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x8aa PushV
	IsLoaded(var_24_bool); // 0x8ab Func
	var_22_bool = var_24_bool; // 0x8ad Mov
	return 2; // 0x8ae Return
}


func_2477()
{
	var_370_object = Obj(); var_371_object = Obj(); // 0x9ad PushV
	GetScene(var_371_object); // 0x9ae Func
	var_372_string = "battle"; // 0x9b0 PushS
	var_373_object = Obj(); // 0x9b1 PushV
	func_2400(var_373_object); // 0x9b2 NEW_2
	BroadcastMessage(var_372_string, var_373_object, var_371_object); // 0x9b4 Func
	return 2; // 0x9b6 Return
}


func_2223(var_34_bool, var_36_float)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_bool = 0; // 0x8af PushV
	GetPosition(var_47_cvector); // 0x8b0 ObjFunc
	GetEyesHeight(var_46_float); // 0x8b2 ObjFunc
	var_55_float = GetByIndex(var_47_cvector, 1); // 0x8b4 PushE
	var_55_float = var_55_float + var_46_float; // 0x8b5 Add2
	SetByIndex(var_47_cvector, 1) = var_55_float; // 0x8b6 PopE
	GetPosition(var_48_cvector); // 0x8b7 Func
	GetEyesHeight(var_46_float); // 0x8b9 Func
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x8bb PushE
	var_56_float = var_56_float + var_46_float; // 0x8bc Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x8bd PopE
	var_49_cvector = var_47_cvector - var_48_cvector; // 0x8be Sub2
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x8bf PushE
	var_57_float = 0; // 0x8c0 MovI
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x8c1 PopE
	var_58_int = var_49_cvector | var_49_cvector; // 0x8c2 Or
	var_59_float = sqrt(var_58_int); // 0x8c3 Sqrt
	var_49_cvector = var_49_cvector / var_49_cvector; // 0x8c4 Div2
	var_50_cvector = -var_49_cvector; // 0x8c5 Neg2
	var_60_float = var_49_cvector * var_36_float; // 0x8c6 Mult
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); // 0x8c7 PushV
	var_63_cvector = CVector(0.0, 1.0, 0.0); // 0x8c8 PushVec
	var_62_cvector = var_50_cvector ^ var_63_cvector; // 0x8c9 Xor2
	func_2406(var_61_cvector, var_62_cvector); // 0x8ca NEW_2
	var_69_int = 25; // 0x8cc PushI
	var_70_float = var_61_cvector * var_69_int; // 0x8cd Mult
	var_71_int = var_60_float + var_70_float; // 0x8ce Add
	var_72_cvector = CVector(0.0, 10.0, 0.0); // 0x8cf PushVec
	var_51_cvector = var_71_int - var_72_cvector; // 0x8d0 Sub2
	var_52_cvector = var_48_cvector + var_51_cvector; // 0x8d1 Add2
	IsOverrideActive(var_53_bool); // 0x8d2 Func
	var_73_bool = var_53_bool; // 0x8d4 Push
	if(var_73_bool == 0) goto Label_2264; // 0x8d5 JumpB
	var_34_bool = 0; // 0x8d6 MovB
	return 18; // 0x8d7 Return
	
Label_2264:
	StopWorld(); // 0x8d8 Func
	var_74_bool = 1; // 0x8da PushB
	CameraTransit(var_52_cvector, var_50_cvector, var_74_bool); // 0x8db Func
	var_75_float = GetByIndex(var_51_cvector, 0); // 0x8dd PushE
	var_76_float = GetByIndex(var_51_cvector, 2); // 0x8de PushE
	Rotate(var_75_float, var_76_float); // 0x8df Func
	var_77_bool = 0; // 0x8e1 PushV
	func_2593(var_77_bool); // 0x8e2 NEW_2
	if(var_77_bool == 0) goto Label_2278; // 0x8e4 JumpB
	goto Label_2286; // 0x8e5 Jump
	
Label_2286:
	CameraWaitForPlayFinish(); // 0x8ee Func
	ResumeWorld(); // 0x8f0 Func
	var_34_bool = 1; // 0x8f2 MovB
	return 18; // 0x8f3 Return
	
Label_2278:
	var_78_string = "head"; // 0x8e6 PushS
	HasAnimationTrack(var_54_bool, var_78_string); // 0x8e7 Func
	var_79_bool = var_54_bool; // 0x8e9 Push
	if(var_79_bool == 0) goto Label_2286; // 0x8ea JumpB
	var_80_string = "head"; // 0x8eb PushS
	LookAsyncCamera(var_80_string); // 0x8ec Func
}


func_2488()
{
	var_27_bool = 0; var_28_string = ""; var_29_string = ""; // 0x9b9 PushV
	var_28_string = "quest_b5_01"; // 0x9ba MovS
	var_29_string = "butcher_attack"; // 0x9bb MovS
	func_2456(var_27_bool, var_28_string, var_29_string); // 0x9bc NEW_2
	return 0; // 0x9be Return
}


func_1722(var_0_object)
{
	var_0_object = 1; // 0x6ba TMovB
	var_23_int = 0; // 0x6bb PushI
	KillTimer(var_23_int); // 0x6bc Func
	Stop(); // 0x6be Func
	return 0; // 0x6c0 Return
}


func_701(var_2_object, var_3_string)
{
	func_796(); // 0x2be NEW_2
	var_22_int = 10; // 0x2c0 PushI
	KillTimer(var_22_int); // 0x2c1 Func
	var_23_object = var_2_object; // 0x2c3 PushT
	if(var_23_object == 0) goto Label_713; // 0x2c4 JumpB
	var_24_string = "head"; // 0x2c5 PushS
	UnlookAsync(var_24_string); // 0x2c6 Func
	var_2_object = 0; // 0x2c8 TMovB
	
Label_713:
	var_3_string = 1; // 0x2c9 TMovB
	return 0; // 0x2ca Return
}


func_2495()
{
	var_120_string = "oob5Butcher1"; // 0x9c0 PushS
	var_121_int = 1; // 0x9c1 PushI
	SetVariable(var_120_string, var_121_int); // 0x9c2 Func
	return 0; // 0x9c4 Return
}


func_1473(var_0_object)
{
	var_133_object = Obj(); // 0x5c1 PushV
	var_133_object = var_0_object; // 0x5c2 MovT
	func_2468(var_133_object); // 0x5c3 NEW_2
	return 0; // 0x5c5 Return
}


func_2501(var_103_bool)
{
	var_105_int = 0; var_106_string = ""; // 0x9c6 PushV
	var_106_string = "b5q01WifeDead"; // 0x9c7 MovS
	func_2434(var_105_int, var_106_string); // 0x9c8 NEW_2
	var_109_int = 0; // 0x9ca PushI
	var_110_bool = var_105_int != var_109_int; // 0x9cb Neq
	if(var_110_bool == 0) goto Label_2511; // 0x9cc JumpB
	var_103_bool = 1; // 0x9cd MovB
	return 0; // 0x9ce Return
	
Label_2511:
	var_103_bool = 0; // 0x9cf MovB
	return 0; // 0x9d0 Return
}


func_1478(var_474_int)
{
	var_474_int = 0; // 0x5c6 MovI
	return 0; // 0x5c7 Return
}


func_1480()
{
	var_266_string = ""; // 0x5c8 PushV
	var_266_string = "attack_stay"; // 0x5c9 MovS
	func_2359(var_266_string); // 0x5ca NEW_2
	return 0; // 0x5cc Return
}


func_1738(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x6cb PushV
	var_33_object = var_31_object; // 0x6cc Mov
	func_2057(var_32_bool, var_33_object); // 0x6cd NEW_2
	var_30_bool = var_32_bool; // 0x6ce Mov
	return 0; // 0x6d0 Return
}


func_203(var_2_object, var_122_string)
{
	var_123_bool = 0; // 0xcc PushV
	func_2593(var_123_bool); // 0xcd NEW_2
	var_124_bool = var_123_bool == 0; // 0xcf Not
	if(var_124_bool == 0) goto Label_210; // 0xd0 JumpB
	return 0; // 0xd1 Return
	
Label_210:
	var_125_bool = var_122_string == var_2_object; // 0xd2 Eq
	if(var_125_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_126_string = ""; var_127_bool = 0; // 0xd5 PushV
	var_126_string = var_122_string; // 0xd6 Mov
	var_128_string = ""; // 0xd7 PushS
	var_129_bool = var_122_string == var_128_string; // 0xd8 Eq
	if(var_129_bool == 0) goto Label_220; // 0xd9 JumpB
	var_127_bool = 0; // 0xda MovB
	goto Label_221; // 0xdb Jump
	
Label_221:
	func_2326(var_126_string, var_127_bool); // 0xdd NEW_2
	var_2_object = var_122_string; // 0xdf TMov
	return 0; // 0xe0 Return
	
Label_220:
	var_127_bool = 1; // 0xdc MovB
}


func_715()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; // 0x2cb PushV
	WaitForAnimEnd(); // 0x2cc Func
	var_43_bool = 0; // 0x2ce PushV
	func_2218(var_43_bool); // 0x2cf NEW_2
	var_44_bool = var_43_bool == 0; // 0x2d1 Not
	if(var_44_bool == 0) goto Label_724; // 0x2d2 JumpB
	return 14; // 0x2d3 Return
	
Label_724:
	var_45_int = 0; // 0x2d4 PushV
	func_2568(var_45_int); // 0x2d5 NEW_2
	var_36_int = var_45_int; // 0x2d6 Mov
	var_37_int = 0; // 0x2d8 MovI
	
Label_729:
	var_58_bool = 0; // 0x2d9 PushV
	var_58_bool = 0; // 0x2da MovB
	var_59_int = 5; // 0x2db PushI
	var_60_bool = var_37_int < var_59_int; // 0x2dc LT
	if(var_60_bool == 0) goto Label_739; // 0x2dd JumpB
	var_61_bool = 0; // 0x2de PushV
	func_2218(var_61_bool); // 0x2df NEW_2
	if(var_61_bool == 0) goto Label_739; // 0x2e1 JumpB
	var_58_bool = 1; // 0x2e2 MovB
	
Label_739:
	if(var_58_bool == 0) goto Label_791; // 0x2e3 JumpB
	var_62_int = 3; // 0x2e4 PushI
	irand(var_38_int, var_62_int); // 0x2e5 Func
	var_63_int = 0; // 0x2e7 PushI
	var_64_bool = var_38_int == var_63_int; // 0x2e8 Eq
	if(var_64_bool == 0) goto Label_763; // 0x2e9 JumpB
	var_65_int = var_36_int; // 0x2ea Push
	if(var_65_int == 0) goto Label_762; // 0x2eb JumpB
	irand(var_39_int, var_36_int); // 0x2ec Func
	var_66_string = "all"; // 0x2ee PushS
	var_67_string = ""; var_68_int = 0; // 0x2ef PushV
	var_68_int = var_39_int; // 0x2f0 Mov
	func_2561(var_67_string, var_68_int); // 0x2f1 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x2f3 Func
	WaitForAnimEnd(var_40_bool); // 0x2f5 Func
	var_69_bool = var_40_bool == 0; // 0x2f7 Not
	if(var_69_bool == 0) goto Label_762; // 0x2f8 JumpB
	goto Label_791; // 0x2f9 Jump
	
Label_791:
	ResetAAS(); // 0x317 Func
	return 14; // 0x319 Return
	
Label_762:
	goto Label_780; // 0x2fa Jump
	
Label_780:
	var_70_bool = 0; // 0x30c PushV
	func_794(var_70_bool); // 0x30d NEW_2
	var_71_bool = var_70_bool == 0; // 0x30f Not
	if(var_71_bool == 0) goto Label_786; // 0x310 JumpB
	goto Label_791; // 0x311 Jump
	
Label_786:
	ResetAAS(); // 0x312 Func
	var_72_int = 1; // 0x314 PushI
	var_37_int = var_37_int + var_72_int; // 0x315 Add2
	goto Label_729; // 0x316 Jump
	
Label_763:
	var_73_int = 1; // 0x2fb PushI
	var_74_bool = var_38_int == var_73_int; // 0x2fc Eq
	if(var_74_bool == 0) goto Label_777; // 0x2fd JumpB
	var_75_int = 4; // 0x2fe PushI
	rand(var_41_float, var_75_int); // 0x2ff Func
	var_76_int = 1; // 0x301 PushI
	var_77_int = var_41_float + var_76_int; // 0x302 Add
	Sleep(var_77_int, var_42_bool); // 0x303 Func
	var_78_bool = var_42_bool == 0; // 0x305 Not
	if(var_78_bool == 0) goto Label_776; // 0x306 JumpB
	goto Label_791; // 0x307 Jump
	
Label_776:
	goto Label_780; // 0x308 Jump
	
Label_777:
	var_79_int = var_37_int; // 0x309 Push
	if(var_79_int == 0) goto Label_780; // 0x30a JumpB
	goto Label_791; // 0x30b Jump
}


func_1485()
{
	return 0; // 0x5ce Return
}


func_1487(var_499_bool)
{
	var_499_bool = 1; // 0x5cf MovB
	return 0; // 0x5d0 Return
}


func_1745(var_209_string)
{
	var_209_string = "walk"; // 0x6d1 MovS
	return 0; // 0x6d2 Return
}


func_2513(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x9d2 PushV
	var_115_string = "oob5Butcher1"; // 0x9d3 MovS
	func_2434(var_114_int, var_115_string); // 0x9d4 NEW_2
	var_116_int = 0; // 0x9d6 PushI
	var_117_bool = var_114_int == var_116_int; // 0x9d7 Eq
	if(var_117_bool == 0) goto Label_2523; // 0x9d8 JumpB
	var_112_bool = 1; // 0x9d9 MovB
	return 0; // 0x9da Return
	
Label_2523:
	var_112_bool = 0; // 0x9db MovB
	return 0; // 0x9dc Return
}


func_1747(var_210_string)
{
	var_210_string = "run"; // 0x6d3 MovS
	return 0; // 0x6d4 Return
}


func_1489(var_391_int)
{
	var_391_int = 1; // 0x5d1 MovI
	return 0; // 0x5d2 Return
}


func_1749(var_26_object)
{
	EventDisable(0); // 0x6d6 EventDisable
	var_27_object = Obj(); // 0x6d7 PushV
	var_27_object = var_26_object; // 0x6d8 Mov
	func_1774(var_27_object); // 0x6d9 NEW_2
	var_107_int = 50; // 0x6db PushI
	var_108_int = 40; // 0x6dc PushI
	SetRTEnvelope(var_107_int, var_108_int); // 0x6dd Func
	EventEnable(0); // 0x6df EventEnable
	
Label_1760:
	Hold(); // 0x6e0 Func
	goto Label_1760; // 0x6e2 Jump
}


func_1491(var_386_float)
{
	var_386_float = 0.5; // 0x5d3 MovF
	return 0; // 0x5d4 Return
}


func_1493(var_2_object, var_140_bool, var_141_object, var_142_float, var_143_float, var_144_bool, var_145_bool)
{
	var_149_bool = 0; var_150_bool = 0; var_151_bool = 0; var_152_bool = 0; // 0x5d5 PushV
	var_153_object = Obj(); // 0x5d6 PushV
	var_153_object = var_141_object; // 0x5d7 Mov
	func_2468(var_153_object); // 0x5d8 NEW_2
	var_154_int = 1; // 0x5da PushI
	var_155_int = 5; // 0x5db PushI
	SetTimer(var_154_int, var_155_int); // 0x5dc Func
	CanSee(var_151_bool, var_141_object); // 0x5de Func
	var_156_bool = var_151_bool; // 0x5e0 Push
	if(var_156_bool == 0) goto Label_1512; // 0x5e1 JumpB
	var_2_object = 1; // 0x5e2 TMovB
	var_157_object = Obj(); // 0x5e3 PushV
	var_157_object = var_141_object; // 0x5e4 Mov
	func_2341(var_157_object); // 0x5e5 NEW_2
	goto Label_1513; // 0x5e7 Jump
	
Label_1513:
	var_164_bool = 0; var_165_object = Obj(); // 0x5e9 PushV
	var_165_object = var_141_object; // 0x5ea Mov
	func_1926(var_164_bool, var_165_object); // 0x5eb NEW_2
	if(var_164_bool == 0) goto Label_1523; // 0x5ed JumpB
	var_168_object = Obj(); // 0x5ee PushV
	func_2400(var_168_object); // 0x5ef NEW_2
	SendPlayerEnemy(var_141_object, var_168_object); // 0x5f1 Func
	
Label_1523:
	var_169_bool = 0; var_170_object = Obj(); var_171_float = 0; var_172_float = 0; var_173_bool = 0; var_174_bool = 0; // 0x5f3 PushV
	var_170_object = var_141_object; // 0x5f4 Mov
	var_171_float = var_142_float; // 0x5f5 Mov
	var_172_float = var_143_float; // 0x5f6 Mov
	var_173_bool = var_144_bool; // 0x5f7 Mov
	var_174_bool = var_145_bool; // 0x5f8 Mov
	func_1598(var_151_bool, var_152_bool, var_169_bool, var_170_object, var_171_float, var_172_float, var_173_bool, var_174_bool); // 0x5f9 NEW_2
	var_152_bool = var_169_bool; // 0x5fa Mov
	var_220_object = var_2_object; // 0x5fc PushT
	if(var_220_object == 0) goto Label_1537; // 0x5fd JumpB
	var_221_string = "head"; // 0x5fe PushS
	UnlookAsync(var_221_string); // 0x5ff Func
	
Label_1537:
	var_222_int = 1; // 0x601 PushI
	KillTimer(var_222_int); // 0x602 Func
	var_140_bool = var_152_bool; // 0x604 Mov
	return 4; // 0x605 Return
	
Label_1512:
	var_2_object = 0; // 0x5e8 TMovB
}


func_2525(var_86_int)
{
	var_87_int = 0; var_88_int = 0; // 0x9dd PushV
	var_89_string = "branch"; // 0x9de PushS
	GetVariable(var_89_string, var_88_int); // 0x9df Func
	var_90_int = 0; // 0x9e1 PushI
	var_91_bool = var_88_int == var_90_int; // 0x9e2 Eq
	if(var_91_bool == 0) goto Label_2535; // 0x9e3 JumpB
	var_86_int = 1; // 0x9e4 MovI
	return 2; // 0x9e5 Return
	
Label_2535:
	var_92_int = 1; // 0x9e7 PushI
	var_93_bool = var_88_int == var_92_int; // 0x9e8 Eq
	if(var_93_bool == 0) goto Label_2540; // 0x9e9 JumpB
	var_86_int = 2; // 0x9ea MovI
	return 2; // 0x9eb Return
	
Label_2540:
	var_86_int = 3; // 0x9ec MovI
	return 2; // 0x9ed Return
}


func_2016(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x7e0 PushV
	IsDead(var_50_bool); // 0x7e1 ObjFunc
	var_47_bool = var_50_bool; // 0x7e3 Mov
	return 2; // 0x7e4 Return
}


func_2021(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x7e5 PushV
	var_42_bool = var_37_object == 0; // 0x7e6 NullEq
	if(var_42_bool == 0) goto Label_2026; // 0x7e7 JumpB
	var_36_bool = 0; // 0x7e8 MovB
	return 4; // 0x7e9 Return
	
Label_2026:
	var_43_bool = 0; // 0x7ea PushV
	var_43_bool = 0; // 0x7eb MovB
	var_44_string = "IsDead"; // 0x7ec PushS
	var_45_int = 1; // 0x7ed PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x7ee FuncExist
	if(var_46_bool == 0) goto Label_2038; // 0x7ef JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x7f0 PushV
	var_48_object = var_37_object; // 0x7f1 Mov
	func_2016(var_48_object); // 0x7f2 NEW_2
	if(var_47_bool == 0) goto Label_2038; // 0x7f4 JumpB
	var_43_bool = 1; // 0x7f5 MovB
	
Label_2038:
	if(var_43_bool == 0) goto Label_2041; // 0x7f6 JumpB
	var_36_bool = 0; // 0x7f7 MovB
	return 4; // 0x7f8 Return
	
Label_2041:
	GetScene(var_40_object); // 0x7f9 Func
	var_51_bool = var_40_object == 0; // 0x7fb NullEq
	if(var_51_bool == 0) goto Label_2047; // 0x7fc JumpB
	var_36_bool = 0; // 0x7fd MovB
	return 4; // 0x7fe Return
	
Label_2047:
	GetScene(var_41_object); // 0x7ff ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x801 Neq
	if(var_52_bool == 0) goto Label_2053; // 0x802 JumpB
	var_36_bool = 0; // 0x803 MovB
	return 4; // 0x804 Return
	
Label_2053:
	var_36_bool = 1; // 0x805 MovB
	return 4; // 0x806 Return
}


func_1774(var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_object = Obj(); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); // 0x6ee PushV
	var_48_bool = var_27_object == 0; // 0x6ef NullEq
	if(var_48_bool == 0) goto Label_1782; // 0x6f0 JumpB
	var_49_string = ""; // 0x6f1 PushV
	var_49_string = "fdie"; // 0x6f2 MovS
	func_1865(var_49_string); // 0x6f3 NEW_2
	goto Label_1864; // 0x6f5 Jump
	
Label_1864:
	return 20; // 0x748 Return
	
Label_1782:
	GetPosition(var_38_cvector); // 0x6f6 ObjFunc
	GetPosition(var_39_cvector); // 0x6f8 Func
	GetDirection(var_40_cvector); // 0x6fa Func
	var_41_cvector = var_39_cvector - var_38_cvector; // 0x6fc Sub2
	var_81_float = GetByIndex(var_41_cvector, 0); // 0x6fd PushE
	var_82_float = GetByIndex(var_40_cvector, 0); // 0x6fe PushE
	var_83_float = var_81_float * var_82_float; // 0x6ff Mult
	var_84_float = GetByIndex(var_41_cvector, 2); // 0x700 PushE
	var_85_float = GetByIndex(var_40_cvector, 2); // 0x701 PushE
	var_86_float = var_84_float * var_85_float; // 0x702 Mult
	var_87_int = var_83_float + var_86_float; // 0x703 Add
	var_88_int = 0; // 0x704 PushI
	var_89_bool = var_87_int >= var_88_int; // 0x705 GE
	if(var_89_bool == 0) goto Label_1801; // 0x706 JumpB
	var_42_string = "fdie"; // 0x707 MovS
	goto Label_1802; // 0x708 Jump
	
Label_1802:
	RemoveRTEnvelope(); // 0x70a Func
	SetDeathState(); // 0x70c Func
	Stop(); // 0x70e Func
	StopAsync(); // 0x710 Func
	var_43_object = var_27_object; // 0x712 Mov
	var_90_string = "GetScriptProperty"; // 0x713 PushS
	var_91_int = 2; // 0x714 PushI
	var_92_bool = IsFuncExist(var_27_object, var_90_string, var_91_int); // 0x715 FuncExist
	if(var_92_bool == 0) goto Label_1826; // 0x716 JumpB
	var_93_string = "Owner"; // 0x717 PushS
	HasScriptProperty(var_44_bool, var_93_string); // 0x718 ObjFunc
	var_94_bool = var_44_bool; // 0x71a Push
	if(var_94_bool == 0) goto Label_1826; // 0x71b JumpB
	var_95_string = "Owner"; // 0x71c PushS
	GetScriptProperty(var_43_object, var_95_string); // 0x71d ObjFunc
	var_96_bool = var_43_object == 0; // 0x71f NullEq
	if(var_96_bool == 0) goto Label_1826; // 0x720 JumpB
	var_43_object = var_27_object; // 0x721 Mov
	
Label_1826:
	var_97_string = "@GetEyesHeight"; // 0x722 PushS
	var_98_int = 1; // 0x723 PushI
	var_99_bool = IsFuncExist(var_43_object, var_97_string, var_98_int); // 0x724 FuncExist
	if(var_99_bool == 0) goto Label_1841; // 0x725 JumpB
	GetEyesHeight(var_46_float); // 0x726 ObjFunc
	var_47_cvector = CVector(0.0, 0.0, 0.0); // 0x728 MovV
	var_100_float = GetByIndex(var_47_cvector, 1); // 0x729 PushE
	var_100_float = var_46_float; // 0x72a Mov
	SetByIndex(var_47_cvector, 1) = var_100_float; // 0x72b PopE
	var_101_string = "head"; // 0x72c PushS
	LookAsync(var_27_object, var_101_string, var_47_cvector); // 0x72d Func
	var_45_bool = 1; // 0x72f MovB
	goto Label_1842; // 0x730 Jump
	
Label_1842:
	var_102_string = ""; // 0x732 PushV
	var_102_string = var_42_string; // 0x733 Mov
	func_2359(var_102_string); // 0x734 NEW_2
	var_103_string = "all"; // 0x736 PushS
	PlayAnimation(var_103_string, var_42_string); // 0x737 Func
	WaitForAnimEnd(); // 0x739 Func
	var_104_bool = var_45_bool; // 0x73b Push
	if(var_104_bool == 0) goto Label_1858; // 0x73c JumpB
	StopAsync(); // 0x73d Func
	var_105_string = "head"; // 0x73f PushS
	UnlookAsync(var_105_string); // 0x740 Func
	
Label_1858:
	var_106_string = "all"; // 0x742 PushS
	LockAnimationEnd(var_106_string, var_42_string); // 0x743 Func
	RemoveEnvelope(); // 0x745 Func
	var_43_object = 0; // 0x747 SetNull
	
Label_1841:
	var_45_bool = 0; // 0x731 MovB
	
Label_1801:
	var_42_string = "bdie"; // 0x709 MovS
}


func_2542(var_24_int)
{
	var_25_int = 0; var_26_int = 0; // 0x9ee PushV
	var_27_string = "branch"; // 0x9ef PushS
	GetVariable(var_27_string, var_26_int); // 0x9f0 Func
	var_24_int = var_26_int; // 0x9f2 Mov
	return 2; // 0x9f3 Return
}


func_2292()
{
	var_187_bool = 0; var_188_bool = 0; // 0x8f4 PushV
	var_189_bool = 1; // 0x8f5 PushB
	CameraSwitchToNormal(var_189_bool); // 0x8f6 Func
	var_190_bool = 0; // 0x8f8 PushV
	func_2593(var_190_bool); // 0x8f9 NEW_2
	if(var_190_bool == 0) goto Label_2301; // 0x8fb JumpB
	goto Label_2309; // 0x8fc Jump
	
Label_2309:
	return 2; // 0x905 Return
	
Label_2301:
	var_191_string = "head"; // 0x8fd PushS
	HasAnimationTrack(var_188_bool, var_191_string); // 0x8fe Func
	var_192_bool = var_188_bool; // 0x900 Push
	if(var_192_bool == 0) goto Label_2309; // 0x901 JumpB
	var_193_string = "head"; // 0x902 PushS
	UnlookAsync(var_193_string); // 0x903 Func
}


func_2548(var_23_object)
{
	var_24_int = 0; // 0x9f5 PushV
	func_2542(var_24_int); // 0x9f6 NEW_2
	var_28_int = 1; // 0x9f8 PushI
	var_29_bool = var_24_int == var_28_int; // 0x9f9 Eq
	if(var_29_bool == 0) goto Label_2558; // 0x9fa JumpB
	WorkWithCorpse(var_23_object); // 0x9fb Func
	goto Label_2560; // 0x9fd Jump
	
Label_2560:
	return 0; // 0xa00 Return
	
Label_2558:
	Barter(var_23_object); // 0x9fe Func
}


func_1271(var_500_bool, var_501_float)
{
	var_502_float = 0; var_503_bool = 0; var_504_float = 0; var_505_bool = 0; // 0x4f7 PushV
	rand(var_504_float); // 0x4f8 Func
	var_506_bool = var_504_float < var_501_float; // 0x4fa LT
	if(var_506_bool == 0) goto Label_1291; // 0x4fb JumpB
	
Label_1276:
	IsAnimationPlaying(var_505_bool); // 0x4fc Func
	var_507_bool = var_505_bool == 0; // 0x4fe Not
	if(var_507_bool == 0) goto Label_1281; // 0x4ff JumpB
	goto Label_1290; // 0x500 Jump
	
Label_1290:
	goto Label_1296; // 0x50a Jump
	
Label_1296:
	var_500_bool = 0; // 0x510 MovB
	return 4; // 0x511 Return
	
Label_1281:
	var_508_bool = 0; // 0x501 PushV
	func_1369(var_508_bool); // 0x502 NEW_2
	if(var_508_bool == 0) goto Label_1287; // 0x504 JumpB
	var_500_bool = 1; // 0x505 MovB
	return 4; // 0x506 Return
	
Label_1287:
	sync(); // 0x507 Func
	goto Label_1276; // 0x509 Jump
	
Label_1291:
	WaitForAnimEnd(); // 0x50b Func
	func_1473(var_505_bool); // 0x50e NEW_2
}


